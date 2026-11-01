/* ===== 180085b80 FUN_180085b80 ===== */

void FUN_180085b80(void)

{
  if (DAT_180962060 == (code *)0x0) {
    return;
  }
  (*DAT_180962060)();
  return;
}



/* ===== 180085ba0 FUN_180085ba0 ===== */

undefined8 FUN_180085ba0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_180962068 == (code *)0x0) {
    return 1;
  }
  uVar1 = (*DAT_180962068)(param_1,param_2,1,0);
  return uVar1;
}



/* ===== 180085bd0 FUN_180085bd0 ===== */

undefined8
FUN_180085bd0(longlong param_1,undefined8 param_2,longlong param_3,float *param_4,float param_5,
             float *param_6)

{
  float fVar1;
  float *pfVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  longlong local_res18;
  float local_78;
  float local_74;
  undefined4 local_70;
  
  local_res18 = param_3;
  pfVar2 = (float *)FUN_180083f30(&local_78,&local_res18);
  fVar1 = DAT_1808acbd0;
  fVar7 = *pfVar2 - *param_4;
  fVar8 = pfVar2[1] - param_4[1];
  fVar5 = pfVar2[2] - param_4[2];
  fVar4 = fVar8 * fVar8 + fVar7 * fVar7;
  if (fVar5 * fVar5 + fVar4 <= param_5) {
    if ((fVar7 == 0.0) && (fVar8 == 0.0)) {
      fVar4 = 0.0;
      if (fVar5 <= 0.0) {
        fVar5 = DAT_1808acaf4;
      }
      else {
        fVar5 = DAT_1808acba8;
      }
    }
    else {
      uVar6 = (uint)fVar5 ^ DAT_1808adec0;
      if (fVar4 < 0.0) {
        fVar4 = (float)FUN_18051af10(fVar4);
      }
      else {
        fVar4 = SQRT(fVar4);
      }
      fVar5 = (float)FUN_180516b00(uVar6,fVar4);
      fVar4 = DAT_1808ac680;
      fVar5 = (fVar5 * DAT_1808acb58) / DAT_1808ac680;
      fVar7 = (float)FUN_180516b00(fVar8,fVar7);
      fVar4 = (fVar7 * DAT_1808acb58) / fVar4;
      if (fVar5 < 0.0) {
        fVar5 = fVar5 + fVar1;
      }
      if (fVar4 < 0.0) {
        fVar4 = fVar4 + fVar1;
      }
    }
    fVar7 = DAT_1808ac1f4;
    fVar8 = (float)FUN_18053f0d0(fVar5 * DAT_1808abfd0 + DAT_1808ac1f4);
    fVar5 = fVar5 - fVar8 * fVar1;
    fVar7 = (float)FUN_18053f0d0(fVar4 * DAT_1808abfd0 + fVar7);
    local_70 = 0;
    fVar4 = fVar4 - fVar7 * fVar1;
    local_78 = fVar5;
    local_74 = fVar4;
    if (DAT_180ccfb5c != 0) {
      FUN_180023a50((ulonglong)DAT_180ccfb5c + param_1,&local_78);
    }
    lVar3 = FUN_180085b30(param_2);
    if (lVar3 == param_3) {
      *param_6 = fVar5;
      param_6[1] = fVar4;
      return 1;
    }
  }
  return 0;
}



/* ===== 180085e10 FUN_180085e10 ===== */

longlong FUN_180085e10(longlong param_1,longlong param_2,undefined8 param_3)

{
  ulonglong uVar1;
  code *pcVar2;
  char cVar3;
  float fVar4;
  int iVar5;
  undefined4 *puVar6;
  char *pcVar7;
  longlong lVar8;
  undefined1 *puVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong local_res10;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [24];
  float local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  longlong *local_58;
  longlong *local_50;
  longlong local_48;
  
  if (((((param_2 == 0) || (DAT_180ccfbc8 == 0)) || (DAT_180ccfbc0 == 0)) ||
      ((DAT_180ccfb48 == 0 || (DAT_180ccfb3c == 0)))) ||
     ((DAT_180ccfb6c == 0 ||
      ((DAT_180ccfb60 == 0 &&
       (DAT_180ccfb60 = FUN_180264b70("player_use_radius"), DAT_180ccfb60 == 0)))))) {
    lVar8 = 0;
  }
  else {
    fVar4 = (float)FUN_180264d70(DAT_180ccfb60);
    local_res10 = CONCAT44(local_res10._4_4_,fVar4);
    fVar4 = (fVar4 + DAT_1808ac9e4) * (fVar4 + DAT_1808ac9e4);
    local_78 = *(undefined8 *)(PTR_DAT_180c873b8 + 0x34);
    local_70 = *(undefined4 *)(PTR_DAT_180c873b8 + 0x3c);
    if (DAT_180ccfb5c == 0) {
      local_68 = 0;
      local_64 = 0;
      local_60 = 0;
    }
    else {
      puVar6 = (undefined4 *)FUN_1800111b0(&local_68,param_1 + (ulonglong)DAT_180ccfb5c);
      local_68 = *puVar6;
      local_64 = puVar6[1];
      local_60 = puVar6[2];
    }
    FUN_1803a09f0(&local_58);
    plVar10 = local_50;
    puVar9 = auStack_a8;
    plVar11 = local_58;
    if (local_58 != local_50) {
      do {
        lVar8 = *plVar11;
        if (lVar8 != 0) {
          local_res10 = lVar8;
          pcVar7 = (char *)FUN_1803a0710(&local_res10);
          if ((((pcVar7 != (char *)0x0) && (iVar5 = strcmp(pcVar7,"C_PlantedC4"), iVar5 == 0)) &&
              (cVar3 = FUN_180011220((ulonglong)DAT_180ccfbc8 + lVar8), cVar3 == '\x01')) &&
             (((cVar3 = FUN_180011220((ulonglong)DAT_180ccfbc0 + lVar8), cVar3 == '\x01' &&
               (cVar3 = FUN_180011220((ulonglong)DAT_180ccfb48 + lVar8), cVar3 == '\0')) &&
              (cVar3 = FUN_180011220((ulonglong)DAT_180ccfb3c + lVar8), cVar3 != '\x01')))) {
            local_88 = fVar4;
            local_80 = param_3;
            cVar3 = FUN_180085bd0(param_1,param_2,lVar8,&local_78);
            if (cVar3 == '\0') {
              lVar8 = 0;
            }
            goto LAB_18008605d;
          }
        }
        plVar11 = plVar11 + 1;
      } while (plVar11 != plVar10);
      plVar10 = local_50;
    }
    lVar8 = 0;
    plVar11 = local_58;
    if (local_58 != plVar10) {
      do {
        lVar8 = *plVar11;
        if (lVar8 != 0) {
          local_res10 = lVar8;
          pcVar7 = (char *)FUN_1803a0710(&local_res10);
          if (((pcVar7 != (char *)0x0) && (iVar5 = strcmp(pcVar7,"C_Hostage"), iVar5 == 0)) &&
             (iVar5 = FUN_180011200((ulonglong)DAT_180ccfb6c + lVar8), iVar5 == 0)) {
            local_88 = fVar4;
            local_80 = param_3;
            cVar3 = FUN_180085bd0(param_1,param_2,lVar8,&local_78);
            if (cVar3 != '\0') goto LAB_18008605d;
          }
        }
        plVar11 = plVar11 + 1;
      } while (plVar11 != plVar10);
      lVar8 = 0;
    }
LAB_18008605d:
    if (DAT_180ccfb5c != 0) {
      FUN_180023a50(param_1 + (ulonglong)DAT_180ccfb5c,&local_68);
    }
    if (local_58 != (longlong *)0x0) {
      uVar1 = (local_48 - (longlong)local_58 >> 3) * 8;
      if (0xfff < uVar1) {
        if ((ulonglong)((longlong)local_58 + (-8 - local_58[-1])) < 0x20) {
          thunk_FUN_1803d64e0(local_58[-1],uVar1 + 0x27);
          return lVar8;
        }
        pcVar2 = (code *)swi(0x29);
        (*pcVar2)(5);
        puVar9 = auStack_a0;
      }
      *(undefined8 *)(puVar9 + -8) = 0x1800860f9;
      thunk_FUN_1803d64e0();
    }
  }
  return lVar8;
}



/* ===== 180086130 FUN_180086130 ===== */

int * FUN_180086130(int *param_1,longlong *param_2,longlong param_3,longlong param_4,
                   longlong param_5,undefined8 *param_6,byte param_7)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  char cVar5;
  short sVar6;
  int iVar7;
  undefined8 uVar8;
  longlong lVar9;
  char *pcVar10;
  undefined4 *puVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  ulonglong uVar15;
  bool bVar16;
  undefined4 uVar17;
  float fVar18;
  undefined8 local_res8;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  
  lVar1 = *param_2;
  *(undefined2 *)((longlong)param_1 + 7) = 0;
  *(undefined2 *)((longlong)param_1 + 10) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  cVar5 = *(char *)(param_4 + 1);
  if ((cVar5 == '\0') && (*(char *)(param_4 + 2) == '\0')) {
    iVar7 = 0;
    *(undefined1 *)(param_1 + 1) = 0;
    cVar4 = '\0';
  }
  else {
    *(undefined1 *)(param_1 + 1) = 1;
    cVar4 = '\x01';
    iVar7 = (cVar5 != '\0') + 1;
  }
  uVar15 = DAT_180cf9fc8;
  uVar13 = ((uint)DAT_180cf9fc8 | (uint)*(undefined8 *)(param_3 + 0x70)) & 0x20;
  *param_1 = iVar7;
  *(bool *)((longlong)param_1 + 9) = uVar13 != 0;
  *(char *)((longlong)param_1 + 5) = cVar4;
  *(char *)((longlong)param_1 + 6) = cVar4;
  if ((uVar13 == 0) || ((param_7 & 0x20) != 0)) {
    bVar3 = false;
    bVar16 = true;
    if (uVar13 != 0) goto LAB_1800861e2;
  }
  else {
    bVar3 = true;
LAB_1800861e2:
    bVar16 = true;
    if (cVar4 == '\0') {
      bVar16 = DAT_180ca003e == '\0';
      *(undefined1 *)((longlong)param_1 + 6) = 0;
      if (bVar16) {
        DAT_180cf9fc8 = uVar15 & 0xffffffffffffffdf;
        *(ulonglong *)(param_3 + 0x70) = *(ulonglong *)(param_3 + 0x70) & 0xffffffffffffffdf;
      }
      if (DAT_180ccfb50 == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = FUN_18000f3a0((ulonglong)DAT_180ccfb50 + lVar1);
      }
      lVar9 = FUN_180085b30(uVar8);
      uVar17 = 0;
      if (lVar9 == 0) {
        bVar2 = false;
        if (*(int *)(param_4 + 4) == 3) {
          local_res8 = 0;
          lVar9 = FUN_180085e10(lVar1,uVar8,&local_res8);
          if (lVar9 != 0) {
            DAT_180cf9fa0 = (float)local_res8;
            DAT_180cf9fa4 = local_res8._4_4_;
            DAT_180cf9fa8 = 0;
            *(undefined1 *)((longlong)param_1 + 5) = 1;
            *(undefined1 *)((longlong)param_1 + 0xb) = 1;
            *(longlong *)(param_1 + 4) = lVar9;
            goto LAB_1800862bd;
          }
        }
LAB_18008629b:
        *(longlong *)(param_1 + 4) = lVar9;
        bVar16 = true;
        if (!bVar2) goto LAB_1800864e1;
        DAT_180ca003f = '\x01';
        if (lVar9 != 0) goto LAB_1800862bd;
      }
      else {
        local_res8 = lVar9;
        pcVar10 = (char *)FUN_1803a0710(&local_res8);
        if (((pcVar10 == (char *)0x0) || (iVar7 = strcmp(pcVar10,"C_PlantedC4"), iVar7 != 0)) &&
           ((local_res8 = lVar9, pcVar10 = (char *)FUN_1803a0710(&local_res8),
            pcVar10 == (char *)0x0 || (iVar7 = strcmp(pcVar10,"C_Hostage"), iVar7 != 0)))) {
          bVar2 = bVar3;
          goto LAB_18008629b;
        }
        *(undefined1 *)((longlong)param_1 + 5) = 1;
        *(longlong *)(param_1 + 4) = lVar9;
LAB_1800862bd:
        DAT_180ca003f = '\x01';
        local_res8 = lVar9;
        pcVar10 = (char *)FUN_1803a0710(&local_res8);
        if ((pcVar10 == (char *)0x0) || (iVar7 = strcmp(pcVar10,"C_Hostage"), iVar7 != 0)) {
          if ((lVar9 != 0) &&
             ((local_res8 = lVar9, pcVar10 = (char *)FUN_1803a0710(&local_res8),
              pcVar10 != (char *)0x0 && (iVar7 = strcmp(pcVar10,"C_PlantedC4"), iVar7 == 0)))) {
            *param_1 = 2;
          }
        }
        else {
          if (!bVar3) {
            DAT_180cf9fc8 = DAT_180cf9fc8 & 0xffffffffffffffdf;
            *(ulonglong *)(param_3 + 0x70) = *(ulonglong *)(param_3 + 0x70) & 0xffffffffffffffdf;
          }
          *param_1 = 1;
        }
      }
      uVar13 = DAT_180ccfb5c;
      uVar15 = (ulonglong)DAT_180ccfb5c;
      if (DAT_180ccfb5c == 0) {
        local_64 = 0;
        local_60 = 0;
      }
      else {
        puVar11 = (undefined4 *)FUN_1800111b0(&local_58);
        uVar17 = *puVar11;
        local_64 = puVar11[1];
        local_60 = puVar11[2];
      }
      local_58 = *param_6;
      local_50 = *(undefined4 *)(param_6 + 1);
      local_68 = uVar17;
      if (uVar13 != 0) {
        FUN_180023a50(uVar15 + lVar1);
      }
      lVar12 = FUN_180085b30(uVar8);
      if (lVar12 == lVar9) {
        DAT_180cf9fc8 = DAT_180cf9fc8 | 0x20;
        if (DAT_180ccfb5c != 0) {
          FUN_180023a50((ulonglong)DAT_180ccfb5c + lVar1,&local_68);
        }
        *(undefined1 *)((longlong)param_1 + 10) = 1;
        return param_1;
      }
      if (DAT_181111c78 == '\0') {
        fVar18 = DAT_1808acb54;
      }
      else {
        fVar18 = DAT_181111c74 - DAT_1808ac0c0;
      }
      fVar18 = DAT_1808acb58 - fVar18;
      if ((fVar18 < DAT_1808acaf4) && (DAT_180cf9fa0 <= fVar18)) {
        local_58 = CONCAT44(DAT_180cf9fa4,fVar18);
        local_50 = DAT_180cf9fa8;
        if (DAT_180ccfb5c != 0) {
          FUN_180023a50((ulonglong)DAT_180ccfb5c + lVar1);
        }
        lVar12 = FUN_180085b30(uVar8);
        if (lVar12 == lVar9) {
          DAT_180cf9fa0 = fVar18;
        }
      }
      if (DAT_180ccfb5c != 0) {
        FUN_180023a50((ulonglong)DAT_180ccfb5c + lVar1);
      }
      *(undefined1 *)((longlong)param_1 + 6) = 1;
      bVar16 = false;
    }
  }
LAB_1800864e1:
  cVar4 = DAT_180ca003f;
  cVar5 = DAT_18096350c;
  if (*(char *)((longlong)param_1 + 9) == '\0') {
    DAT_180ca003f = '\0';
    goto LAB_1800866ea;
  }
  if ((DAT_18096350c != '\0') && (DAT_180ca003f == '\0')) {
    *(undefined1 *)((longlong)param_1 + 7) = 1;
  }
  if (!bVar16) {
    cVar4 = '\x01';
    DAT_180ca003f = '\x01';
  }
  if ((cVar5 == '\0') || (cVar4 != '\0')) goto LAB_1800866ea;
  if ((DAT_180ccfb68 == 0) ||
     (cVar5 = FUN_180011220((ulonglong)DAT_180ccfb68 + lVar1), cVar5 == '\0')) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (param_5 == 0) {
LAB_1800865a5:
    if ((((bVar3) && (DAT_180ca0a0c != 0)) &&
        (uVar15 = (ulonglong)DAT_180ccfba0, DAT_180ccfba0 != 0)) &&
       (lVar9 = FUN_18000f3a0((ulonglong)DAT_180ca0a0c + lVar1), lVar9 - 0x10000U < 0x7ffffffeffff))
    {
      iVar7 = FUN_180011200(uVar15 + lVar9);
      lVar9 = FUN_18000f3a0(uVar15 + lVar9 + 8);
      if (((iVar7 - 1U < 0x40) && (lVar9 != 0)) && (uVar15 = 0, 0 < iVar7)) {
        do {
          uVar17 = FUN_180011200(lVar9 + uVar15 * 4);
          FUN_1803a0940(&local_res8,uVar17);
          if (((local_res8 != 0) && (DAT_1809619a4 != 0)) &&
             ((DAT_1809619a8 != 0 &&
              ((DAT_180961998 != 0 &&
               (sVar6 = FUN_180011440(local_res8 + (ulonglong)DAT_1809619a8 +
                                      (ulonglong)DAT_180961998 + (ulonglong)DAT_1809619a4),
               sVar6 == 0x31)))))) {
            DAT_180cf9fc8 = DAT_180cf9fc8 & 0xffffffffffffffdf;
            *(ulonglong *)(param_3 + 0x70) = *(ulonglong *)(param_3 + 0x70) & 0xffffffffffffffdf;
            break;
          }
          uVar13 = (int)uVar15 + 1;
          uVar15 = (ulonglong)uVar13;
        } while ((int)uVar13 < iVar7);
      }
    }
  }
  else {
    local_res8 = param_5;
    lVar9 = FUN_1803a0710(&local_res8);
    if (lVar9 == 0) goto LAB_1800865a5;
    lVar12 = 0;
    do {
      lVar14 = lVar12 + 1;
      if (*(char *)(lVar9 + lVar12) != (&DAT_1806d4100)[lVar12]) goto LAB_1800865a5;
      lVar12 = lVar14;
    } while (lVar14 != 5);
    if ((bVar3) ||
       ((DAT_180ccfbb4 != 0 &&
        (cVar5 = FUN_180011220(param_5 + (ulonglong)DAT_180ccfbb4), cVar5 == '\x01')))) {
      *(undefined1 *)(param_1 + 2) = 1;
    }
    else {
      *(undefined1 *)(param_1 + 2) = 0;
    }
  }
  if ((((DAT_180ccfc08 != 0) ||
       (DAT_180ccfc08 = FUN_180264b70("cl_use_opens_buy_menu"), DAT_180ccfc08 != 0)) &&
      (cVar5 = FUN_180264d70(DAT_180ccfc08), cVar5 == '\x01')) && (DAT_180ccfbb8 != 0)) {
    if (((char)param_1[2] == '\0') &&
       (cVar5 = FUN_180011220((ulonglong)DAT_180ccfbb8 + lVar1), cVar5 == '\0')) {
      *(undefined1 *)(param_1 + 2) = 0;
    }
    else {
      *(undefined1 *)(param_1 + 2) = 1;
    }
  }
LAB_1800866ea:
  DAT_180ca003e = *(undefined1 *)((longlong)param_1 + 9);
  return param_1;
}



/* ===== 180086720 FUN_180086720 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180086720(longlong *param_1,int param_2,float *param_3,float *param_4,undefined4 param_5)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  code *pcVar4;
  uint uVar5;
  char cVar6;
  byte bVar7;
  int iVar8;
  char *pcVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined4 *puVar12;
  longlong *plVar13;
  ulonglong uVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined4 uVar17;
  longlong lVar18;
  char *pcVar19;
  float fVar20;
  undefined4 uVar21;
  float fVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined1 auStack_328 [8];
  undefined1 auStack_320 [88];
  longlong local_2c8;
  float local_2c0;
  undefined4 local_2b8;
  undefined4 local_2b4;
  undefined4 local_2b0;
  int local_2a8;
  longlong *local_2a0;
  longlong *local_298;
  longlong local_290;
  undefined1 local_288 [256];
  char local_188 [256];
  ulonglong local_88;
  
  puVar16 = auStack_328;
  local_88 = DAT_180919500 ^ (ulonglong)auStack_328;
  lVar3 = *param_1;
  pcVar19 = "none";
  lVar18 = 0;
  uVar24 = 0;
  local_2a8 = param_2;
  if (param_2 == 2) {
    if (DAT_180ccfb4c != 0) {
      FUN_1803a09f0(&local_2a0);
      lVar11 = local_2c8;
      for (plVar13 = local_2a0; local_2c8 = lVar11, plVar13 != local_298; plVar13 = plVar13 + 1) {
        local_2c8 = *plVar13;
        if (local_2c8 != 0) {
          pcVar9 = (char *)FUN_1803a0710(&local_2c8);
          lVar11 = local_2c8;
          if (pcVar9 != (char *)0x0) {
            iVar8 = strcmp(pcVar9,"C_PlantedC4");
            lVar11 = local_2c8;
            if (iVar8 == 0) {
              iVar8 = FUN_180011200((ulonglong)DAT_180ccfb4c + *plVar13);
              lVar11 = local_2c8;
              if (iVar8 != -1) {
                plVar10 = (longlong *)FUN_1803a0940(&local_2b8,iVar8);
                lVar11 = local_2c8;
                if (*plVar10 == lVar3) {
                  lVar18 = *plVar13;
                  pcVar19 = "defuser";
                  break;
                }
              }
            }
          }
        }
        local_2c8 = lVar11;
        lVar11 = local_2c8;
      }
      if (local_2a0 != (longlong *)0x0) {
        uVar14 = (local_290 - (longlong)local_2a0 >> 3) * 8;
        if (0xfff < uVar14) {
          if ((undefined1 *)0x1f < (undefined1 *)((longlong)local_2a0 + (-8 - local_2a0[-1])))
          goto LAB_180086ae4;
          uVar14 = uVar14 + 0x27;
          local_2a0 = (longlong *)local_2a0[-1];
        }
        thunk_FUN_1803d64e0(local_2a0,uVar14);
      }
      if (lVar18 == 0) goto LAB_18008685d;
LAB_180086954:
      puVar16 = auStack_328;
      fVar1 = *param_3;
      if (DAT_1808abfbc < (float)((uint)(*param_4 - fVar1) & _DAT_1808ade90)) {
        lVar11 = 0;
      }
      else {
        fVar2 = param_4[1];
        fVar22 = param_3[1];
        fVar20 = (float)FUN_18053f0d0((fVar2 - fVar22) * DAT_1808abfd0 + DAT_1808ac1f4);
        if ((float)((uint)((fVar2 - fVar22) - fVar20 * DAT_1808acbd0) & _DAT_1808ade90) <=
            DAT_1808abfbc) {
          *param_4 = fVar1;
          param_4[1] = param_3[1];
          param_4[2] = param_3[2];
          goto LAB_180086af6;
        }
        lVar11 = 4;
      }
      fVar2 = *(float *)(lVar11 + (longlong)param_3);
      fVar20 = (float)FUN_180084b50(*(undefined4 *)(lVar11 + (longlong)param_4),fVar2);
      fVar22 = DAT_1808ac764;
      if ((fVar20 <= DAT_1808ac764) && (fVar22 = fVar20, fVar20 <= DAT_1808acdec)) {
        fVar22 = DAT_1808acdec;
      }
      *param_4 = fVar1;
      param_4[1] = param_3[1];
      param_4[2] = param_3[2];
      *(float *)(lVar11 + (longlong)param_4) = fVar2 + fVar22;
      puVar16 = auStack_328;
      goto LAB_180086af6;
    }
LAB_18008685d:
    puVar16 = auStack_328;
    if (DAT_180ccfb50 == 0) goto LAB_180086954;
    lVar11 = FUN_18000f3a0(lVar3 + (ulonglong)DAT_180ccfb50);
    uVar5 = DAT_180ccfb5c;
    if (lVar11 == 0) goto LAB_180086954;
    uVar14 = (ulonglong)DAT_180ccfb5c;
    if (DAT_180ccfb5c == 0) {
      local_2b8 = 0;
      local_2b4 = 0;
      local_2b0 = 0;
    }
    else {
      puVar12 = (undefined4 *)FUN_1800111b0(&local_2b8,lVar3 + uVar14);
      local_2b8 = *puVar12;
      local_2b4 = puVar12[1];
      local_2b0 = puVar12[2];
    }
    local_2c0 = param_3[2];
    local_2c8 = *(longlong *)param_3;
    if (uVar5 != 0) {
      FUN_180023a50(lVar3 + uVar14,&local_2c8);
    }
    lVar11 = FUN_180085b30(lVar11);
    if (DAT_180ccfb5c != 0) {
      FUN_180023a50(lVar3 + (ulonglong)DAT_180ccfb5c,&local_2b8);
    }
    if (lVar11 != 0) {
      local_2c8 = lVar11;
      pcVar9 = (char *)FUN_1803a0710(&local_2c8);
      if ((pcVar9 != (char *)0x0) && (iVar8 = strcmp(pcVar9,"C_PlantedC4"), iVar8 == 0))
      goto LAB_180086954;
    }
    if (6000 < DAT_180ca00c8) goto LAB_180086c78;
    pcVar19 = 
    "use turn | mode 2 | no defuser bomb and the lookup from the last angles misses it: aa sent unclamped"
    ;
    puVar16 = auStack_328;
  }
  else {
    if (DAT_180ccfb30 != 0) {
      FUN_1803a09f0(&local_2a0);
      puVar16 = auStack_328;
      puVar15 = auStack_328;
      lVar11 = local_2c8;
      for (plVar13 = local_2a0; local_2c8 = lVar11, plVar13 != local_298; plVar13 = plVar13 + 1) {
        local_2c8 = *plVar13;
        if (local_2c8 != 0) {
          pcVar9 = (char *)FUN_1803a0710(&local_2c8);
          lVar11 = local_2c8;
          if (pcVar9 != (char *)0x0) {
            iVar8 = strcmp(pcVar9,"C_Hostage");
            lVar11 = local_2c8;
            if (iVar8 == 0) {
              iVar8 = FUN_180011200((ulonglong)DAT_180ccfb30 + *plVar13);
              lVar11 = local_2c8;
              if (iVar8 != -1) {
                plVar10 = (longlong *)FUN_1803a0940(&local_2b8,iVar8);
                lVar11 = local_2c8;
                if (*plVar10 == lVar3) {
                  lVar18 = *plVar13;
                  pcVar19 = "grabber";
                  break;
                }
              }
            }
          }
        }
        local_2c8 = lVar11;
        lVar11 = local_2c8;
      }
      if (local_2a0 != (longlong *)0x0) {
        plVar13 = local_2a0;
        if ((ulonglong)((local_290 - (longlong)local_2a0 >> 3) * 8) < 0x1000) {
LAB_180086aeb:
          puVar16 = puVar15;
        }
        else {
          plVar13 = (longlong *)local_2a0[-1];
          puVar16 = auStack_328;
          if ((undefined1 *)0x1f < (undefined1 *)((longlong)local_2a0 + (-8 - (longlong)plVar13))) {
LAB_180086ae4:
            plVar13 = (longlong *)&DAT_00000005;
            pcVar4 = (code *)swi(0x29);
            (*pcVar4)(5);
            puVar15 = auStack_320;
            goto LAB_180086aeb;
          }
        }
        *(undefined8 *)(puVar16 + -8) = 0x180086af6;
        thunk_FUN_1803d64e0(plVar13);
      }
    }
LAB_180086af6:
    *(undefined8 *)(puVar16 + -8) = 0x180086b07;
    FUN_180540170(local_288,0,0x100);
    *(undefined8 *)(puVar16 + -8) = 0x180086b16;
    cVar6 = FUN_180085b80(lVar3,lVar18,local_288);
    uVar5 = DAT_180ccfb5c;
    if (cVar6 == '\0') {
      uVar17 = 0;
      bVar7 = 1;
    }
    else {
      uVar14 = (ulonglong)DAT_180ccfb5c;
      uVar17 = 1;
      if (DAT_180ccfb5c == 0) {
        uVar21 = 0;
        uVar23 = 0;
      }
      else {
        *(undefined8 *)(puVar16 + -8) = 0x180086b39;
        puVar12 = (undefined4 *)FUN_1800111b0(puVar16 + 0x70,lVar3 + uVar14);
        uVar24 = *puVar12;
        uVar21 = puVar12[1];
        uVar23 = puVar12[2];
      }
      *(undefined4 *)(puVar16 + 100) = uVar21;
      *(float *)(puVar16 + 0x70) = *param_4;
      fVar1 = param_4[2];
      *(undefined4 *)(puVar16 + 0x68) = uVar23;
      fVar2 = param_4[1];
      *(float *)(puVar16 + 0x78) = fVar1;
      *(undefined4 *)(puVar16 + 0x60) = uVar24;
      *(float *)(puVar16 + 0x74) = fVar2;
      if (uVar5 != 0) {
        *(undefined8 *)(puVar16 + -8) = 0x180086b95;
        FUN_180023a50(lVar3 + uVar14,puVar16 + 0x70);
      }
      *(undefined8 *)(puVar16 + -8) = 0x180086ba1;
      bVar7 = FUN_180085ba0(local_288,lVar3);
      if (DAT_180ccfb5c != 0) {
        *(undefined8 *)(puVar16 + -8) = 0x180086bbc;
        FUN_180023a50(lVar3 + (ulonglong)DAT_180ccfb5c,puVar16 + 0x60);
      }
      if (bVar7 == 0) {
        *param_4 = *param_3;
        param_4[1] = param_3[1];
        param_4[2] = param_3[2];
      }
    }
    fVar1 = *param_4;
    fVar2 = param_3[1];
    fVar22 = *param_3;
    *(double *)(puVar16 + 0x50) = (double)param_4[1];
    *(double *)(puVar16 + 0x48) = (double)fVar1;
    *(double *)(puVar16 + 0x40) = (double)fVar2;
    *(double *)(puVar16 + 0x38) = (double)fVar22;
    *(uint *)(puVar16 + 0x30) = (uint)bVar7;
    *(undefined4 *)(puVar16 + 0x28) = uVar17;
    *(char **)(puVar16 + 0x20) = pcVar19;
    *(undefined8 *)(puVar16 + -8) = 0x180086c42;
    snprintf(local_188,0x100,
             "use turn | mode %d | target %s | checked %d accepted %d | prev %.2f %.2f -> %.2f %.2f"
             ,local_2a8);
    if (6000 < DAT_180ca00c8) goto LAB_180086c78;
    pcVar19 = local_188;
  }
  DAT_180ca00c8 = DAT_180ca00c8 + 1;
  *(undefined8 *)(puVar16 + -8) = 0x180086c78;
  FUN_1802b2870("wl_antiaim.log","aa  | cmd %d | %s\n",param_5,pcVar19);
LAB_180086c78:
  *(undefined8 *)(puVar16 + -8) = 0x180086c87;
  return;
}



/* ===== 180086cb0 FUN_180086cb0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180086cb0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  float *pfVar2;
  float fVar3;
  char cVar4;
  int *piVar5;
  longlong lVar6;
  float *pfVar7;
  int *piVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  int local_138 [2];
  float local_130;
  float local_12c;
  float local_128;
  undefined8 local_118;
  uint uStack_110;
  float fStack_10c;
  float fStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  uint uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 local_ec;
  uint local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined2 local_d8;
  undefined1 uStack_d6;
  uint5 uStack_d5;
  undefined1 local_c8 [176];
  
  local_138[1] = 2;
  local_138[0] = 0;
  piVar8 = local_138;
  if (-1 < DAT_180963510) {
    piVar8 = &DAT_180963510;
  }
  piVar5 = local_138 + 1;
  if (DAT_180963510 < 3) {
    piVar5 = piVar8;
  }
  iVar1 = *piVar5;
  if ((((iVar1 != 0) && (DAT_1809f3589 != '\0')) && (DAT_1809f3588 == '\0')) &&
     ((DAT_18095cd7d == '\0' && (DAT_1809f358c == 2)))) {
    local_118 = 0;
    uStack_110 = 0;
    local_ec = 0;
    local_e8 = 0x3f800000;
    fStack_10c = 0.0;
    fStack_108 = 0.0;
    uStack_104 = 0;
    uStack_100 = 0;
    uStack_e4 = 0x437a0000;
    uStack_fc = 0;
    uStack_f8 = 0;
    uStack_f4 = 0;
    uStack_f0 = 0;
    cVar4 = FUN_1801ec0c0(param_2,&local_118);
    fVar9 = fStack_108;
    if ((((cVar4 != '\0') &&
         (((uStack_110 & 1) != 0 &&
          (DAT_1808ac900 <= fStack_108 * fStack_108 + fStack_10c * fStack_10c)))) &&
        ((uVar15 = (uint)_DAT_1808ade90, DAT_1808ac000 <= (float)((uint)DAT_180cf9fac & uVar15) ||
         ((DAT_1808ac000 <= (float)((uint)DAT_180cf9fb0 & uVar15) ||
          (DAT_1808ac000 <= (float)(DAT_180cf9fb4 & uVar15))))))) &&
       ((*param_2 != 0 &&
        (((DAT_180ca09f8 != 0 &&
          (lVar6 = FUN_18000f3a0(*param_2 + (ulonglong)DAT_180ca09f8), lVar6 != 0)) &&
         (DAT_180ca0954 != 0)))))) {
      pfVar7 = (float *)FUN_18008b640(local_c8,(ulonglong)DAT_180ca0954 + 0x10 + lVar6);
      fVar17 = pfVar7[1];
      fVar14 = pfVar7[2];
      fVar16 = fVar14 * fVar14 + fVar17 * fVar17;
      if ((((uint)(DAT_1808ac34c - (fVar16 + fVar16)) & 0x7f800000) != 0x7f800000) &&
         (fVar17 = fVar14 * pfVar7[3] + fVar17 * *pfVar7, fVar17 = fVar17 + fVar17,
         ((uint)fVar17 & 0x7f800000) != 0x7f800000)) {
        local_128 = (float)FUN_180516b00(fVar17);
        fVar9 = (float)FUN_180516b00(fVar9);
        fVar3 = DAT_1808acbd0;
        fVar9 = fVar9 * DAT_1808aca94;
        fVar17 = (float)FUN_18053f0d0(fVar9 / DAT_1808acbd0 + DAT_1808ac1f4);
        pfVar2 = DAT_180cf9fe0;
        fVar12 = DAT_1808ac014;
        local_12c = fVar9 - fVar17 * fVar3;
        fVar14 = DAT_180cf9fac;
        fVar16 = DAT_180cf9fb0;
        fVar9 = DAT_180cf9fb8;
        fVar17 = DAT_180cf9fbc;
        local_130 = DAT_180cf9fc0;
        for (pfVar7 = DAT_180cf9fd8; pfVar7 != DAT_180cf9fe0; pfVar7 = pfVar7 + 0x12) {
          if (*(char *)(pfVar7 + 8) != '\0') {
            fVar9 = pfVar7[5];
            fVar17 = pfVar7[6];
            local_130 = pfVar7[7];
          }
          if (*(char *)(pfVar7 + 0x10) != '\0') {
            fVar14 = pfVar7[0xd];
            fVar16 = pfVar7[0xe];
          }
        }
        fVar9 = fVar9 * DAT_1808ac014;
        fVar10 = (float)FUN_180517200(fVar9);
        fVar17 = fVar17 * fVar12;
        fVar11 = (float)FUN_180517790(fVar17);
        fVar17 = (float)FUN_180517200(fVar17);
        local_130 = local_130 * fVar12;
        fVar12 = (float)FUN_180517200(local_130);
        fVar19 = fVar11 * fVar10;
        fVar13 = (float)FUN_180517790(local_130);
        fVar9 = (float)FUN_180517790(fVar9);
        fVar18 = fVar13 * fVar9 * fVar17 - fVar12 * fVar11;
        fVar12 = fVar13 * fVar9 * fVar11 + fVar12 * fVar17;
        fVar9 = fVar19 * fVar19 + fVar17 * fVar10 * fVar17 * fVar10;
        if (fVar9 < 0.0) {
          fVar9 = (float)FUN_18051af10(fVar9);
        }
        else {
          fVar9 = SQRT(fVar9);
        }
        if (0.0 < fVar9) {
          fVar19 = fVar19 / fVar9;
        }
        fVar9 = fVar12 * fVar12 + fVar18 * fVar18;
        if (fVar9 < 0.0) {
          fVar9 = (float)FUN_18051af10(fVar9);
        }
        else {
          fVar9 = SQRT(fVar9);
        }
        if (0.0 < fVar9) {
          fVar12 = fVar12 / fVar9;
        }
        fVar14 = (float)FUN_180516b00(fVar12 * fVar16 + fVar19 * fVar14);
        fVar17 = DAT_1808aca94;
        fVar9 = DAT_1808ac1f4;
        fVar14 = fVar14 * DAT_1808aca94;
        fVar16 = (float)FUN_18053f0d0(fVar14 / fVar3 + DAT_1808ac1f4);
        if (iVar1 == 1) {
          fVar12 = DAT_1808acb58;
        }
        else {
          fVar12 = 0.0;
        }
        fVar16 = (fVar14 - fVar16 * fVar3) - local_12c;
        fVar14 = (float)FUN_18053f0d0(fVar16 / fVar3 + fVar9);
        for (pfVar7 = DAT_180cf9fd8; pfVar7 != pfVar2; pfVar7 = pfVar7 + 0x12) {
          if ((*pfVar7 == DAT_1808ac34c) && (*(char *)(pfVar7 + 0xc) == '\0')) goto LAB_1800872c2;
        }
        if ((ulonglong)(((longlong)pfVar2 - (longlong)DAT_180cf9fd8 >> 3) * -0x71c71c71c71c71c7) <
            0x20) {
          uStack_110 = 0;
          fStack_10c = 0.0;
          fStack_108 = (float)((uint)fStack_108 & 0xffffff00);
          uStack_104 = 0;
          uStack_100 = 0;
          uStack_fc = 0;
          uStack_f8 = uStack_f8 & 0xffffff00;
          uStack_f4 = 0;
          uStack_f0 = 0;
          local_ec = 0;
          local_e8 = local_e8 & 0xffffff00;
          uStack_e4 = 0;
          uStack_e0 = 0;
          uStack_dc = 0;
          local_d8 = 0;
          uStack_d6 = 0;
          local_118 = CONCAT44(local_118._4_4_,0x3f800000);
          if (pfVar2 == DAT_180cf9fe8) {
            FUN_18008c530(&DAT_180cf9fd8,pfVar2,&local_118);
          }
          else {
            *(undefined8 *)pfVar2 = local_118;
            pfVar2[2] = 0.0;
            pfVar2[3] = 0.0;
            *(ulonglong *)(pfVar2 + 4) = (ulonglong)(uint)fStack_108;
            pfVar2[6] = 0.0;
            pfVar2[7] = 0.0;
            *(ulonglong *)(pfVar2 + 8) = (ulonglong)uStack_f8;
            pfVar2[10] = 0.0;
            pfVar2[0xb] = 0.0;
            *(ulonglong *)(pfVar2 + 0xc) = (ulonglong)local_e8;
            pfVar2[0xe] = 0.0;
            pfVar2[0xf] = 0.0;
            *(ulonglong *)(pfVar2 + 0x10) = (ulonglong)uStack_d5 << 0x18;
            DAT_180cf9fe0 = DAT_180cf9fe0 + 0x12;
          }
          pfVar7 = DAT_180cf9fe0 + -0x12;
LAB_1800872c2:
          pfVar7[9] = 0.0;
          fVar12 = (fVar16 - fVar14 * fVar3) + local_128 * fVar17 + fVar12;
          fVar9 = (float)FUN_18053f0d0(fVar12 / fVar3 + fVar9);
          pfVar7[0xb] = 0.0;
          *(undefined1 *)(pfVar7 + 0xc) = 1;
          pfVar7[10] = fVar12 - fVar9 * fVar3;
        }
      }
    }
  }
  return;
}



/* ===== 180087350 FUN_180087350 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180087350(longlong param_1,undefined8 param_2)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong unaff_retaddr;
  undefined1 auStack_148 [32];
  int local_128;
  int local_120;
  int local_118;
  int local_110;
  undefined1 local_108 [208];
  ulonglong local_38;
  
  pcVar1 = DAT_180ccfbe0;
  iVar3 = DAT_180961fd0;
  local_38 = DAT_180919500 ^ (ulonglong)auStack_148;
  DAT_180963590 = 0xffffffff;
  DAT_180963594 = 0xffffffff;
  if (unaff_retaddr == DAT_180961fe0) {
    if ((((DAT_180961a48 != (code *)0x0) && (param_1 != 0)) && (0 < DAT_180961fd0)) &&
       ((lVar6 = (*DAT_180961a48)(), lVar6 - 0x10000U < 0x7ffffffeffff &&
        (iVar2 = FUN_180011200((ulonglong)DAT_180961fcc + lVar6), -1 < iVar2)))) {
      lVar7 = (longlong)(iVar2 % iVar3) * (ulonglong)DAT_180961fd4;
      iVar3 = FUN_180011200(lVar6 + 8 + lVar7);
      if (iVar3 == iVar2) {
        iVar4 = FUN_180011200(lVar6 + 0x94 + lVar7);
        iVar3 = iVar2 + -1;
        if (iVar4 != 2) {
          iVar3 = iVar2;
        }
      }
      else {
        iVar3 = iVar2;
      }
      if (((-1 < iVar3) && (DAT_180ccfbd8 != 0)) && (iVar2 = FUN_180264d70(), iVar2 != 0)) {
        lVar7 = ((longlong)iVar3 + 1) - (longlong)DAT_180ccfc10;
        lVar6 = -lVar7;
        if (lVar6 < 0) {
          lVar6 = lVar7;
        }
        if (lVar6 < 2) {
          lVar7 = ((longlong)iVar3 + 1) - (longlong)DAT_180ccfb34;
          lVar6 = -lVar7;
          if (lVar6 < 0) {
            lVar6 = lVar7;
          }
          if (1 < lVar6) {
            DAT_180963594 = iVar3 + 1;
            DAT_180963590 = iVar3 + 3;
            DAT_180ccfb34 = iVar3 + 2;
            local_128 = DAT_180ccfc10;
            local_120 = DAT_180ccfb34;
            local_118 = DAT_180963590;
            local_110 = DAT_180963594;
            snprintf(local_108,200,
                     "dispatch | n %d | aa cmd %d | keep aim on %d | sync %d (game %d)",iVar3);
            if (DAT_180ccfb40 < 0x7d1) {
              DAT_180ccfb40 = DAT_180ccfb40 + 1;
              FUN_1802b2840("wl_antiaim.log","drop | %s",local_108);
            }
            return 1;
          }
        }
        local_120 = DAT_180ccfb34;
        local_128 = DAT_180ccfc10;
        snprintf(local_108,200,"dispatch | n %d | aa cmd %d | last drop %d | original predicate",
                 iVar3);
        if (DAT_180ccfb40 < 0x7d1) {
          DAT_180ccfb40 = DAT_180ccfb40 + 1;
          FUN_1802b2840("wl_antiaim.log","drop | %s",local_108);
        }
      }
    }
    uVar5 = (*pcVar1)(param_1,param_2);
  }
  else {
    uVar5 = (*DAT_180ccfbe0)();
  }
  return uVar5;
}



/* ===== 1800875d0 FUN_1800875d0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800875d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,
                  undefined8 param_5,undefined1 param_6)

{
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined1 local_e0;
  undefined1 local_d8 [160];
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStack_108;
  if (-1 < DAT_180963590) {
    if (param_4 == DAT_180963594) {
      local_e8 = CONCAT44(local_e8._4_4_,DAT_180963590);
      snprintf(local_d8,0xa0,"send | sync %d -> %d");
      param_4 = DAT_180963590;
    }
    else {
      local_e8 = CONCAT44(local_e8._4_4_,DAT_180963594);
      snprintf(local_d8,0xa0,"send | sync %d, expected %d: left as is");
    }
    if (DAT_180ccfb40 < 0x7d1) {
      DAT_180ccfb40 = DAT_180ccfb40 + 1;
      FUN_1802b2840("wl_antiaim.log","drop | %s",local_d8);
    }
    DAT_180963590 = -1;
    DAT_180963594 = -1;
  }
  local_e0 = param_6;
  local_e8 = param_5;
  (*DAT_180ca0048)(param_1,param_2,param_3,param_4);
  return;
}



/* ===== 1800876e0 FUN_1800876e0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1800876e0(void)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  ushort uVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 auStack_168 [32];
  longlong local_148;
  longlong local_140;
  longlong local_138;
  code *local_120;
  undefined1 local_118 [208];
  ulonglong local_48;
  
  lVar2 = DAT_180961fd8;
  local_48 = DAT_180919500 ^ (ulonglong)auStack_168;
  if ((((DAT_180961fd8 == 0) || (DAT_180961fe0 == 0)) || (DAT_180961a48 == 0)) ||
     (DAT_180ca0048 == 0)) {
    local_138 = DAT_180ca0048;
    local_140 = DAT_180961a48;
    local_148 = DAT_180961fe0;
    snprintf(local_118,200,
             "[error] not installed | map %p | dispatch return %p | command base %p | send hook %p",
             DAT_180961fd8);
    goto LAB_180087918;
  }
  uVar6 = FUN_180264b70("cl_predict_weapon_drop");
  DAT_180ccfbd8 = uVar6;
  uVar4 = FUN_180011440(lVar2 + 10);
  if ((uVar4 & 0x7fff) == 0) {
    lVar7 = 0;
    FUN_180011440(lVar2 + 0x18);
LAB_1800878c9:
    lVar10 = 0;
  }
  else {
    lVar7 = FUN_18000f3a0(lVar2 + 0x10);
    uVar4 = FUN_180011440(lVar2 + 0x18);
    iVar8 = 0;
    if (lVar7 == 0) goto LAB_1800878c9;
    while( true ) {
      lVar10 = 0;
      if ((uVar4 == 0xffff) || (0xffff < iVar8)) goto LAB_1800878cb;
      uVar9 = (ulonglong)uVar4 * 0x28;
      lVar10 = uVar9 + lVar7;
      uVar5 = FUN_180011200(lVar7 + 8 + uVar9);
      if (uVar5 == 0x67e7b856) break;
      if (uVar5 < 0x67e7b857) {
        uVar9 = uVar9 | 2;
      }
      uVar4 = FUN_180011440(lVar7 + uVar9);
      iVar8 = iVar8 + 1;
    }
    if (lVar10 != 0) {
      lVar1 = lVar10 + 0x20;
      local_148 = FUN_18000f3a0(lVar1);
      if (local_148 != 0) {
        local_120 = FUN_180087350;
        DAT_180ccfba8 = lVar1;
        DAT_180ccfbe0 = local_148;
        cVar3 = FUN_1800239d0(lVar1,&local_120);
        if (cVar3 == '\0') {
          DAT_180ccfba8 = 0;
          return 0;
        }
        local_140 = uVar6;
        snprintf(local_118,200,"installed | node %p | original %p | cl_predict_weapon_drop %p",
                 lVar10);
        if (DAT_180ccfb40 < 0x7d1) {
          DAT_180ccfb40 = DAT_180ccfb40 + 1;
          FUN_1802b2840("wl_antiaim.log","drop | %s",local_118);
        }
        return 1;
      }
    }
  }
LAB_1800878cb:
  local_148 = lVar7;
  local_140 = lVar10;
  snprintf(local_118,200,"[error] \"drop\" node not found | map %p | memory %p | node %p",lVar2);
LAB_180087918:
  if (DAT_180ccfb40 < 0x7d1) {
    DAT_180ccfb40 = DAT_180ccfb40 + 1;
    FUN_1802b2840("wl_antiaim.log","drop | %s",local_118);
  }
  FUN_1802b2560("[antiaim] weapon drop predicate %s",local_118);
  return 0;
}



/* ===== 180087980 FUN_180087980 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180087980(longlong param_1)

{
  double dVar1;
  double dVar2;
  float fVar3;
  undefined1 auVar4 [16];
  char cVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  ulonglong uVar11;
  float *pfVar12;
  undefined8 *puVar13;
  longlong lVar14;
  int *piVar15;
  int iVar16;
  ulonglong uVar17;
  float *pfVar18;
  longlong lVar19;
  char *pcVar20;
  undefined1 uVar21;
  char cVar22;
  uint uVar23;
  ulonglong uVar24;
  char *pcVar25;
  int iVar26;
  bool bVar27;
  bool bVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined8 uVar34;
  undefined8 extraout_XMM0_Qa;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined1 auStack_358 [32];
  char *local_338;
  float *local_330;
  double local_328;
  undefined2 *local_320;
  char *local_318;
  double local_310;
  double local_308;
  uint local_300;
  uint local_2f8;
  double local_2f0;
  double local_2e8;
  char local_2d8;
  char local_2d7;
  char local_2d6;
  char local_2d5;
  char local_2d4;
  char local_2d3;
  char local_2d2;
  char local_2d1;
  char local_2d0;
  float local_2cc;
  float local_2c8;
  float local_2c4;
  ulonglong local_2c0;
  float local_2b8;
  float local_2b4;
  undefined4 local_2b0;
  undefined1 local_2a8;
  undefined1 uStack_2a7;
  undefined1 uStack_2a6;
  undefined1 uStack_2a5;
  float fStack_2a4;
  float local_2a0;
  double local_298;
  undefined8 local_290;
  undefined4 local_288;
  undefined8 local_280;
  undefined4 local_278;
  ulonglong local_270;
  float local_268;
  float local_264;
  undefined4 local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 local_248;
  float local_240;
  float local_23c;
  float local_238 [4];
  ulonglong local_228 [3];
  undefined8 local_210;
  undefined4 local_208;
  undefined8 local_204;
  undefined8 uStack_1fc;
  undefined8 local_1f4;
  undefined8 uStack_1ec;
  undefined4 local_1e4;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined4 local_1d8;
  int iStack_1d4;
  float fStack_1d0;
  int iStack_1cc;
  undefined4 local_1c8;
  uint uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  ulonglong local_1b8;
  undefined8 uStack_1b0;
  undefined1 local_1a8 [16];
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  uint uStack_18c;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  ulonglong local_d8;
  
  local_d8 = DAT_180919500 ^ (ulonglong)auStack_358;
  uStack_1b0 = CONCAT71(_DAT_180920fd5,DAT_180920fd4);
  DAT_180ca1bdd = 0;
  _DAT_1809634f0 = (uint)DAT_180920fdc;
  DAT_1809634f4._0_4_ = DAT_180920fdc._4_4_;
  DAT_1809634f4._4_4_ = DAT_180920fdc._8_4_;
  uRam00000001809634fc = DAT_180920fdc._12_4_;
  local_1b8 = _DAT_180920fcc;
  uStack_184 = _DAT_180921000;
  uStack_180 = _DAT_180921004;
  uStack_17c = DAT_180921008;
  uVar17 = (ulonglong)_DAT_180920ffc;
  if (DAT_18095cd7d != '\0') {
    uVar17 = 0;
  }
  local_188 = (undefined4)uVar17;
  local_1d8 = _DAT_180920fac;
  iStack_1d4 = DAT_180920fb0;
  fStack_1d0 = DAT_180920fb4;
  iStack_1cc = DAT_180920fb8;
  local_1c8 = _DAT_180920fbc;
  uStack_1c4 = _DAT_180920fc0;
  uStack_1c0 = _DAT_180920fc4;
  uStack_1bc = _DAT_180920fc8;
  local_1a8 = _DAT_180920fdc;
  local_198 = DAT_180920fec;
  uStack_194 = _DAT_180920ff0;
  uStack_190 = _DAT_180920ff4;
  uStack_18c = _DAT_180920ff8;
  if (DAT_180920fb0 != 5) {
    fStack_1d0 = 0.0;
  }
  if (DAT_180920fb8 == 0) {
    uStack_18c = _DAT_180920ff8 & 0xffffff;
    local_198 = 0;
    uStack_1c4 = _DAT_180920fc0 & 0xffffff00;
    uStack_1b0._2_6_ = (undefined6)((uint7)_DAT_180920fd5 >> 8);
    uStack_1b0._0_2_ = (ushort)DAT_180920fd4;
    local_1a8._2_14_ = DAT_180920fdc._2_14_;
    local_1a8[0] = DAT_180920fdc;
    local_1a8[1] = 0;
    uVar23 = 0;
LAB_180087ac5:
    uVar10 = local_1a8._12_4_;
    _DAT_1809634f0 = local_1a8._0_4_;
    local_1a8._4_8_ = 0;
    local_1a8._14_2_ = 0;
    auVar4 = local_1a8;
    local_1a8._4_4_ = 0;
    local_1a8._8_4_ = 0;
    local_1a8._12_4_ = uVar10 & 0xffff;
    DAT_1809634f4._0_4_ = local_1a8._4_4_;
    DAT_1809634f4._4_4_ = local_1a8._8_4_;
    uRam00000001809634fc = local_1a8._12_4_;
    local_1a8 = auVar4;
  }
  else {
    uVar23 = _DAT_180920fc0;
    if (DAT_180920fdc._1_1_ == '\0') goto LAB_180087ac5;
  }
  if ((char)uVar23 == '\0') {
    local_1b8 = _DAT_180920fcc & 0xffffffff00000000;
  }
  _DAT_1809634c0 = _DAT_180920fac;
  DAT_1809634c4 = DAT_180920fb0;
  DAT_1809634cc = DAT_180920fb8;
  _DAT_1809634d0 = _DAT_180920fbc;
  uRam00000001809634d8 = _DAT_180920fc4;
  uRam00000001809634dc = _DAT_180920fc8;
  uRam0000000180963504 = _DAT_180920ff0;
  uRam0000000180963508 = _DAT_180920ff4;
  _DAT_180963520 = _DAT_18092100c;
  uRam0000000180963528 = _DAT_180921014;
  _DAT_180963530 = _DAT_18092101c;
  uRam0000000180963538 = _DAT_180921024;
  _DAT_180963540 = DAT_18092102c;
  _DAT_1809634e0 = local_1b8;
  _DAT_1809634e8 = uStack_1b0;
  _DAT_180963510 = CONCAT44(_DAT_180921000,local_188);
  _DAT_180963518 = CONCAT44(DAT_180921008,_DAT_180921004);
  if (param_1 == 0) {
LAB_180087b80:
    uVar10 = 0;
  }
  else {
    lVar19 = *(longlong *)(param_1 + 0x40);
    if (lVar19 - 0x10000U < 0x7ffffffeffff) {
      uVar17 = *(longlong *)(lVar19 + 0x40) - 0x10000;
      if (0x7ffffffefffe < uVar17) {
        lVar19 = 0;
      }
    }
    else {
      lVar19 = 0;
    }
    if ((lVar19 == 0) || (*(longlong *)(lVar19 + 0x40) == 0)) goto LAB_180087b80;
    uVar10 = *(undefined4 *)(*(longlong *)(lVar19 + 0x40) + 0x1c);
  }
  DAT_1809634c8 = fStack_1d0;
  _DAT_1809634d4 = uStack_1c4;
  DAT_180963500 = local_198;
  _DAT_18096350c = uStack_18c;
  FUN_180084740(uVar17,uVar10);
  iVar26 = 1;
  if (DAT_1809634e8 != '\0') {
    DAT_180920fd4 = 0;
    DAT_180920fb8 = 1;
  }
  if (param_1 == 0) {
    return;
  }
  if (DAT_1809634c0 == '\0') {
    return;
  }
  FUN_180085260(param_1);
  if ((DAT_180ca15be == '\0') && (DAT_1811089f0 != 0)) {
    DAT_180ca15be = '\x01';
    DAT_180ccfbcc = FUN_18038eaf0("C_BaseEntity","m_pCollision");
    DAT_180ccfbc4 = FUN_18038eaf0("CCollisionProperty","m_vecSurroundingMins");
    DAT_180ccfb38 = FUN_18038eaf0("CCollisionProperty","m_vecSurroundingMaxs");
    DAT_180ccfb78 = FUN_18038eaf0("CCollisionProperty","m_collisionAttribute");
    DAT_180ccfc14 = FUN_18038eaf0("CGameSceneNode","m_vecOrigin");
    DAT_180ccfb58 = FUN_18038eaf0("C_BaseEntity","m_vecVelocity");
    DAT_180ccfbd0 = FUN_18038eaf0("C_BasePlayerPawn","m_hController");
    DAT_180ccfb54 = FUN_18038eaf0("C_BaseEntity","m_nSubclassID");
    DAT_180ccfc04 = FUN_18038eaf0("CCSWeaponBaseVData","m_WeaponType");
    DAT_180ccfb50 = FUN_18038eaf0("C_BasePlayerPawn","m_pUseServices");
    DAT_180ccfb5c = FUN_18038eaf0("C_BasePlayerPawn","v_angle");
    DAT_180ccfb4c = FUN_18038eaf0("C_PlantedC4","m_hBombDefuser");
    DAT_180ccfb30 = FUN_18038eaf0("C_Hostage","m_hHostageGrabber");
    DAT_180ccfb68 = FUN_18038eaf0("C_CSPlayerPawn","m_bInBombZone");
    DAT_180ccfbb8 = FUN_18038eaf0("C_CSPlayerPawn","m_bInBuyZone");
    DAT_180ccfbb4 = FUN_18038eaf0(&DAT_1806d4100,"m_bStartedArming");
    DAT_180ccfba0 = FUN_18038eaf0("CPlayer_WeaponServices","m_hMyWeapons");
    DAT_180ccfbc8 = FUN_18038eaf0("C_PlantedC4","m_bC4Activated");
    DAT_180ccfbc0 = FUN_18038eaf0("C_PlantedC4","m_bBombTicking");
    DAT_180ccfb48 = FUN_18038eaf0("C_PlantedC4","m_bHasExploded");
    DAT_180ccfb3c = FUN_18038eaf0("C_PlantedC4","m_bBombDefused");
    DAT_180ccfb6c = FUN_18038eaf0("C_Hostage","m_nHostageState");
  }
  if (0x7ffffffefffe < *(longlong *)(param_1 + 0x40) - 0x10000U) {
    return;
  }
  if (0x7ffffffefffe < *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x40) - 0x10000U) {
    return;
  }
  if (DAT_180cd1304 == '\0') {
    FUN_1803a0b60(&local_2c0);
    DAT_181108a00 = local_2c0;
    local_2c0 = FUN_1803a0c50(&local_2c0);
    DAT_180cd1304 = '\x01';
  }
  else {
    local_2c0 = DAT_1811089f8;
  }
  uVar17 = local_2c0;
  if (local_2c0 == 0) {
    DAT_1811089f8 = local_2c0;
    return;
  }
  if (DAT_180ca09f0 == 0) {
    DAT_1811089f8 = local_2c0;
    return;
  }
  DAT_1811089f8 = local_2c0;
  iVar7 = FUN_180011200(DAT_180ca09f0 + local_2c0);
  if (999 < iVar7 - 1U) {
    return;
  }
  uVar11 = (ulonglong)DAT_180ca0a44;
  if (DAT_180ca0a44 != 0) {
    cVar5 = FUN_180011220(uVar17 + uVar11);
    if (cVar5 == '\a') {
      return;
    }
    cVar5 = FUN_180011220(uVar17 + uVar11);
    if ((cVar5 == '\t') && (cVar5 = FUN_1801eca30(), cVar5 == '\0')) {
      return;
    }
  }
  cVar5 = FUN_180085670();
  if (cVar5 != '\0') {
    return;
  }
  if (DAT_180ccfb70 < 10000) {
    DAT_180ccfb70 = DAT_180ccfb70 + 1;
  }
  else {
    DAT_180ccfb70 = 0;
  }
  iVar7 = *(int *)(param_1 + 8);
  local_268 = DAT_180cf9fa0;
  local_260 = DAT_180cf9fa8;
  local_264 = DAT_180cf9fa4;
  if (DAT_180cd1304 == '\0') {
    FUN_1803a0b60(&local_270);
  }
  else {
    local_270 = DAT_181108a00;
  }
  if (local_270 == 0) {
LAB_18008805c:
    local_298 = 0.0;
  }
  else {
    if (((((DAT_180961a48 == (code *)0x0) || (0x7ffffffefffe < local_270 - 0x10000)) ||
         (uVar23 = iVar7 - 1, (int)uVar23 < 1)) ||
        ((lVar19 = (*DAT_180961a48)(), 0x7ffffffefffe < lVar19 - 0x10000U || (DAT_180961fd0 == 0))))
       || ((lVar19 = (ulonglong)DAT_180961fd4 * ((ulonglong)uVar23 % (ulonglong)DAT_180961fd0) +
                     lVar19, 0x7ffffffefffe < lVar19 - 0x10000U ||
           (*(longlong *)(lVar19 + 8) != (longlong)iVar7 + -1)))) {
      lVar19 = 0;
    }
    if (lVar19 == 0) goto LAB_18008805c;
    local_298 = 0.0;
    if (*(longlong *)(lVar19 + 0x40) != 0) {
      lVar14 = *(longlong *)(*(longlong *)(lVar19 + 0x40) + 0x40);
      local_298 = 0.0;
      if (lVar14 != 0) {
        local_268 = *(float *)(lVar14 + 0x18);
        local_264 = *(float *)(lVar14 + 0x1c);
        local_260 = *(undefined4 *)(lVar14 + 0x20);
        local_298 = *(double *)(lVar19 + 0x60);
      }
    }
  }
  DAT_180ca1bdf = 0;
  if (DAT_1809634e9 != '\0') {
    FUN_1800836e0(&local_2c0);
  }
  uVar23 = *(int *)(param_1 + 8) + DAT_180ccfb70;
  FUN_180273880();
  if (DAT_180cfb2a8 == (code *)0x0) {
    DAT_1809f3584 = uVar23 | 1;
  }
  else {
    (*DAT_180cfb2a8)(uVar23);
  }
  uVar23 = FUN_18038eaf0("C_CSGameRulesProxy","m_pGameRules");
  uVar8 = FUN_18038eaf0("C_CSGameRules","m_bIsValveDS");
  fVar31 = DAT_1808acda0;
  if (((uVar23 == 0) || (uVar8 == 0)) ||
     ((DAT_180ca0058 == 0 ||
      ((lVar19 = FUN_18000f3a0(DAT_180ca0058 + (ulonglong)uVar23),
       0x7ffffffefffe < lVar19 - 0x10000U ||
       (cVar5 = FUN_180011220(lVar19 + (ulonglong)uVar8), cVar5 == '\0')))))) {
    DAT_180ca15bf = '\0';
  }
  else {
    DAT_180ca15bf = '\x01';
    fVar29 = (float)FUN_180273960();
    DAT_180ccfb74 = DAT_180ccfb74 + fVar29;
    if (DAT_180ccfb74 < DAT_1808ace1c) {
      DAT_180ccfb74 = (float)FUN_180273960();
    }
    DAT_180ccfc00 = FUN_180273960();
  }
  fVar29 = DAT_180cf9fa4;
  fVar33 = DAT_180cf9fa0;
  fVar35 = DAT_1808ac34c;
  local_2cc = DAT_180cf9fa0;
  local_2c8 = DAT_180cf9fa4;
  local_204 = 0;
  uStack_1fc = 0;
  local_210 = 0;
  local_1f4 = 0;
  uStack_1ec = 0;
  local_208 = 0;
  local_1e4 = 0;
  local_1e0 = 0x3f800000;
  local_1dc = 0x437a0000;
  uVar34 = FUN_1801ec0c0(&local_2c0,&local_210);
  DAT_180962432 = (byte)local_208 & 1;
  fVar30 = (float)FUN_180084400(uVar34,fVar29);
  iVar7 = DAT_180c8bb64;
  fVar29 = DAT_1808ac0c0;
  if (DAT_1809634c4 == 1) {
    if (DAT_180ca15bf != '\0') {
      fVar37 = DAT_1808acaec;
      goto LAB_1800882d9;
    }
    fVar37 = DAT_1808acaf0;
  }
  else {
    if (DAT_1809634c4 == 2) {
      fVar37 = DAT_1808ace64;
    }
    else if (DAT_1809634c4 == 5) {
      pfVar18 = &local_240;
      local_23c = 89.0;
      local_240 = -89.0;
      if (DAT_1808ace64 <= DAT_1809634c8) {
        pfVar18 = &DAT_1809634c8;
      }
      pfVar12 = &local_23c;
      if (DAT_1809634c8 <= DAT_1808acaec) {
        pfVar12 = pfVar18;
      }
      fVar37 = *pfVar12;
    }
    else if (DAT_1809634c4 == 3) {
      fVar37 = 0.0;
    }
    else if (DAT_1809634c4 == 4) {
      fVar37 = (float)(DAT_180ccfb70 % 3 + -1) * DAT_1808acaec;
    }
    else {
      fVar37 = fVar33;
    }
LAB_1800882d9:
    if (DAT_180ca15bf != '\0') {
      local_238[1] = fVar37 + DAT_180ccfb74;
      local_238[2] = 89.0;
      local_238[0] = -89.0;
      pfVar18 = local_238;
      if (DAT_1808ace64 <= local_238[1]) {
        pfVar18 = local_238 + 1;
      }
      pfVar12 = local_238 + 2;
      if (local_238[1] <= DAT_1808acaec) {
        pfVar12 = pfVar18;
      }
      fVar37 = *pfVar12;
    }
  }
  cVar5 = DAT_180c8bb50 == uVar17;
  local_2d7 = cVar5;
  local_2a0 = fVar30;
  if ((bool)cVar5) {
    if (DAT_180c8c154 == '\0') {
      iVar7 = 0;
      fVar36 = 0.0;
      iVar16 = 0;
      fVar35 = 0.0;
      fVar31 = 0.0;
      iVar26 = 0;
    }
    else {
      if (DAT_180c8bb70 < 0.0) {
LAB_180088373:
        local_2c4 = 0.0;
        fVar36 = (float)FUN_180512fd0();
        fVar32 = local_2c4;
        if (fVar36 < 0.0) {
          fVar36 = fVar36 + fVar35;
          if (fVar36 < fVar35) {
            fVar32 = local_2c4 + fVar31;
          }
          else {
            fVar36 = 0.0;
          }
        }
        iVar7 = iVar7 + (int)fVar32;
      }
      else {
        fVar36 = DAT_180c8bb70;
        if (fVar35 <= DAT_180c8bb70) goto LAB_180088373;
      }
      iVar16 = 0;
      if (DAT_180c8bd8b == '\0') {
        fVar35 = 0.0;
        fVar31 = 0.0;
        iVar26 = 0;
      }
      else {
        if (0.0 < DAT_180c8bbf4) {
          fVar31 = (float)FUN_18053ef70(DAT_180c8bbf4 * DAT_1808acab0);
          iVar16 = (int)fVar31;
          if (iVar16 - iVar7 < 2) {
            fVar35 = 0.0;
            fVar31 = 0.0;
            goto LAB_180088492;
          }
        }
        if (DAT_180c8bd88 == '\0') {
          if (0.0 < DAT_180c8bd94) {
            fVar35 = (float)iVar7 * DAT_1808ac00c + fVar36 * DAT_1808ac00c;
            if (DAT_180c8bd94 < fVar35) {
              fVar31 = (fVar35 + fVar29) - _DAT_180c8bae8;
              if (0.0 < fVar31) {
                if (fVar31 <= DAT_1808ac118) {
                  iVar26 = 0;
                  if (DAT_180c8bd8c != '\0') {
                    iVar26 = 4;
                  }
                }
                else {
                  iVar26 = 3;
                }
              }
              else {
                iVar26 = 2;
              }
            }
            else {
              fVar31 = 0.0;
              iVar26 = 0;
            }
          }
          else {
            fVar35 = 0.0;
            fVar31 = 0.0;
            iVar26 = 0;
          }
        }
        else {
          fVar35 = 0.0;
          fVar31 = 0.0;
          iVar26 = 0;
        }
      }
    }
LAB_180088492:
    local_248 = CONCAT44(fVar31,fVar35);
    local_258 = CONCAT44(iVar7,iVar26);
    local_250 = CONCAT44(iVar16,fVar36);
  }
  else {
    iVar26 = 0;
    local_258 = 0;
    local_250 = 0;
    local_248 = 0;
  }
  iVar7 = *(int *)(param_1 + 8);
  if ((((!(bool)cVar5) || (DAT_180c8c154 == '\0')) || (DAT_180c8bd8b == '\0')) ||
     (((iVar26 == 0 && (DAT_180c8bbf4 <= 0.0)) && (DAT_180c8bd94 <= 0.0)))) {
    local_2d1 = '\0';
  }
  else {
    local_2d1 = '\x01';
  }
  lVar19 = 0;
  if (DAT_1809f31f4 == iVar7) {
    lVar19 = DAT_180cfa070;
  }
  if (lVar19 == 0) {
    uVar21 = 0;
    local_2d8 = 0;
    if ((DAT_180ca003c == '\0') && (DAT_1811089f0 != 0)) {
      DAT_180ca003c = '\x01';
      DAT_180ca0030 = FUN_18038eaf0("C_BasePlayerPawn","m_pMovementServices");
      DAT_180ca0054 = FUN_18038eaf0("CCSPlayer_MovementServices","m_bDuckOverride");
      DAT_180ca0060 = FUN_18038eaf0("C_CSPlayerPawn","m_bIsDefusing");
      DAT_180ca0044 = FUN_18038eaf0("C_CSPlayerPawn","m_bIsGrabbingHostage");
    }
    iVar16 = DAT_180ca0044;
    if ((uVar17 == 0) || (DAT_180ca09f4 == 0)) {
      local_2c4 = 0.0;
    }
    else {
      bVar6 = FUN_180011220(uVar17 + DAT_180ca09f4);
      local_2c4 = (float)(uint)bVar6;
    }
    if ((((DAT_180ca0030 != 0) && (DAT_180ca0054 != 0)) &&
        (lVar19 = FUN_18000f3a0(uVar17 + DAT_180ca0030), lVar19 - 0x10000U < 0x7ffffffeffff)) &&
       (cVar5 = FUN_180011220(), cVar5 != '\0')) {
      uVar21 = 1;
    }
    if (DAT_180ca0060 != 0) {
      local_2d8 = FUN_180011220();
    }
    uStack_2a6 = 0;
    if (iVar16 != 0) {
      uStack_2a6 = FUN_180011220();
    }
    uStack_2a7 = local_2d8;
    fStack_2a4 = local_2c4;
    uStack_2a5 = 0;
    local_270 = CONCAT44(local_2c4,(uint)CONCAT12(uStack_2a6,CONCAT11(local_2d8,uVar21)));
    cVar5 = local_2d7;
    local_2a8 = uVar21;
  }
  else {
    local_270 = (((ulonglong)*(uint *)(lVar19 + 0x84) << 0x10 | (ulonglong)*(byte *)(lVar19 + 0xbb)
                 | 0x100) << 8 | (ulonglong)*(byte *)(lVar19 + 0x81)) << 8 |
                (ulonglong)*(byte *)(lVar19 + 0x213);
  }
  uVar10 = DAT_180cf9fa8;
  lVar19 = 0;
  local_2b0 = DAT_180cf9fa8;
  local_2b8 = fVar37;
  local_2b4 = fVar30;
  if ((uVar17 != 0) && (DAT_180ca09f8 != 0)) {
    lVar19 = FUN_18000f3a0();
  }
  if ((((((byte)DAT_180cf9fc8 | *(byte *)(param_1 + 0x70)) & 0x20) == 0) || (cVar5 == '\0')) ||
     ((lVar19 == 0 ||
      ((uVar11 = (ulonglong)DAT_180ca0950, DAT_180ca0950 == 0 ||
       (uVar24 = (ulonglong)DAT_180ca0a34, DAT_180ca0a34 == 0)))))) {
    local_2d8 = '\0';
    local_280 = 0;
    local_278 = 0;
    local_290 = 0;
    local_288 = 0;
    if (cVar5 != '\0') goto LAB_1800887c4;
    if ((((uVar17 == 0) || (DAT_180ca0a0c == 0)) ||
        (uVar11 = (ulonglong)DAT_180ca0a10, DAT_180ca0a10 == 0)) ||
       (lVar14 = FUN_18000f3a0(), lVar14 == 0)) {
      local_338 = (char *)0x0;
    }
    else {
      uVar9 = FUN_180011200(lVar14 + uVar11);
      puVar13 = (undefined8 *)FUN_1803a0940(&local_2a8,uVar9);
      local_338 = (char *)*puVar13;
    }
  }
  else {
    local_280 = 0;
    local_278 = 0;
    local_290 = 0;
    local_288 = 0;
    puVar13 = (undefined8 *)FUN_1800111b0(local_228,lVar19 + uVar11);
    local_280 = *puVar13;
    local_278 = *(undefined4 *)(puVar13 + 1);
    puVar13 = (undefined8 *)FUN_1800111b0(local_228,uVar24 + uVar17);
    local_290 = *puVar13;
    local_288 = *(undefined4 *)(puVar13 + 1);
    FUN_180023a50(lVar19 + uVar11,&DAT_180c8ba08);
    FUN_180023a50(uVar24 + uVar17,&DAT_180c8ba2c);
    local_2d8 = '\x01';
LAB_1800887c4:
    puVar13 = (undefined8 *)FUN_1803a0940(local_228,DAT_180c8bd54);
    local_338 = (char *)*puVar13;
  }
  local_328 = local_298;
  local_330 = &local_2b8;
  piVar15 = (int *)FUN_180086130(local_228,&local_2c0,param_1,&local_270);
  local_2d4 = (char)piVar15[1];
  local_2d3 = *(char *)((longlong)piVar15 + 6);
  local_2d7 = *(char *)((longlong)piVar15 + 7);
  local_2d2 = (char)piVar15[2];
  local_2d0 = *(char *)((longlong)piVar15 + 0xb);
  iVar16 = *piVar15;
  cVar5 = *(char *)((longlong)piVar15 + 9);
  uVar11 = *(ulonglong *)(piVar15 + 4);
  local_2d6 = *(char *)((longlong)piVar15 + 5);
  local_2d5 = *(char *)((longlong)piVar15 + 10);
  uVar34 = extraout_XMM0_Qa;
  if (local_2d8 != '\0') {
    FUN_180023a50(DAT_180ca0a34 + uVar17,&local_290);
    uVar34 = FUN_180023a50((ulonglong)DAT_180ca0950 + lVar19,&local_280);
  }
  if ((cVar5 == '\0') && (iVar16 == 0)) {
    cVar22 = local_2d6;
  }
  else {
    bVar27 = local_2d2 != '\0';
    dVar1 = (double)DAT_180cf9fa4;
    bVar28 = local_2d7 != '\0';
    dVar2 = (double)DAT_180cf9fa0;
    local_2c4 = (float)(uint)(local_2d3 != '\0');
    local_298 = (double)CONCAT44(local_298._4_4_,(uint)(local_2d5 != '\0'));
    local_2a8 = local_2d0 != '\0';
    uStack_2a7 = 0;
    uStack_2a6 = 0;
    uStack_2a5 = 0;
    if (uVar11 == 0) {
      local_320 = (undefined2 *)&DAT_1806dfd84;
    }
    else {
      local_228[0] = uVar11;
      lVar19 = FUN_1803a0710(local_228);
      if (lVar19 == 0) {
        local_320 = &DAT_1806dfbb4;
      }
      else {
        local_228[0] = uVar11;
        local_320 = (undefined2 *)FUN_1803a0710(local_228);
      }
    }
    cVar22 = local_2d6;
    local_2f8 = (uint)bVar27;
    local_300 = (uint)bVar28;
    local_308 = (double)CONCAT44(local_308._4_4_,local_2c4);
    local_310 = (double)CONCAT44(local_310._4_4_,local_298._0_4_);
    local_318 = (char *)CONCAT44(local_318._4_4_,
                                 CONCAT13(uStack_2a5,
                                          CONCAT12(uStack_2a6,CONCAT11(uStack_2a7,local_2a8))));
    local_328 = (double)CONCAT44(local_328._4_4_,(uint)(local_2d6 != '\0'));
    local_330 = (float *)CONCAT44(local_330._4_4_,iVar16);
    local_338 = (char *)CONCAT44(local_338._4_4_,(uint)(local_2d4 != '\0'));
    local_2f0 = dVar2;
    local_2e8 = dVar1;
    uVar34 = snprintf(&local_1d8,0x100,
                      "use | held %d busy %d mode %d target %d entity %s fallback %d | direct %d keep %d disabled %d planting %d | w %.2f %.2f"
                      ,cVar5 != '\0');
    if (DAT_180ca00c8 < 0x1771) {
      DAT_180ca00c8 = DAT_180ca00c8 + 1;
      uVar34 = FUN_1802b2870("wl_antiaim.log","aa  | cmd %d | %s\n",iVar7,&local_1d8);
    }
  }
  fVar36 = DAT_180cf9fa4;
  fVar35 = DAT_180cf9fa0;
  fVar31 = DAT_1808acaf4;
  if (local_2d5 == '\0') {
    if (((local_2d4 == '\0') && (local_2d3 != '\0')) ||
       ((cVar5 != '\0' && ((DAT_18096350c != '\0' && (local_2d2 == '\0')))))) {
      cVar5 = '\x01';
    }
    else {
      cVar5 = '\0';
    }
    if ((iVar26 == 0 && cVar5 == '\0') && (DAT_180ccfb34 != iVar7)) goto LAB_180088d91;
    fVar32 = DAT_180cf9fa0;
    if (local_2d7 == '\0') {
      if (DAT_180ca15bf != '\0') {
        pcVar20 = "restore (valve server)";
        bVar28 = false;
        goto LAB_180088c0c;
      }
      fVar32 = fVar35;
      if (DAT_181111c78 != '\0') {
        fVar29 = DAT_181111c74 - fVar29;
        if (DAT_1808acaf4 <= fVar29) goto LAB_180088ae6;
        pcVar20 = "restore (pitch limit below 90)";
        bVar28 = false;
LAB_180088c06:
        fVar33 = local_2cc;
        goto LAB_180088c0c;
      }
      fVar29 = DAT_1808acb54;
LAB_180088ae6:
      if (fVar37 < DAT_1808aca68) {
        pcVar20 = "restore (aa pitch below 45)";
        bVar28 = false;
        goto LAB_180088c06;
      }
      pcVar20 = "restore (aa yaw within 70 of view)";
      if (cVar22 == '\0') {
        fVar33 = DAT_1808acac0;
      }
      else {
        pcVar20 = "restore (aa yaw within 120 of view)";
        fVar33 = DAT_1808acb18;
      }
      uVar23 = FUN_180084b50(cVar5,DAT_180cf9fa4);
      fVar3 = DAT_1808acb58;
      if ((float)(uVar23 & _DAT_1808ade90) < fVar33) {
        bVar28 = false;
        goto LAB_180088c06;
      }
      if (fVar35 <= 0.0) {
        pcVar20 = "restore (view pitch not above 0)";
        bVar28 = false;
        goto LAB_180088c06;
      }
      if (iVar26 != 0) {
        fVar32 = fVar35 * DAT_1808ac3d4;
      }
      fVar38 = fVar36 + DAT_1808acb58;
      fVar32 = DAT_1808acb58 - fVar32;
      fVar33 = (float)FUN_18053f0d0(fVar38 * DAT_1808abfd0 + DAT_1808ac1f4);
      fVar30 = local_2a0;
      if (fVar29 < fVar32) {
        pcVar20 = "restore (flip above pitch limit)";
        bVar28 = false;
        fVar32 = fVar35;
        goto LAB_180088c06;
      }
      if ((iVar26 == 0) || ((fVar32 < fVar3 && (fVar31 < fVar32)))) {
        pcVar20 = "flip";
        bVar28 = true;
        fVar36 = fVar38 - fVar33 * DAT_1808acbd0;
        goto LAB_180088c06;
      }
      pcVar20 = "restore (flip outside 90..180)";
      bVar28 = false;
      fVar32 = fVar35;
LAB_180088c19:
      if (DAT_180cd1304 == '\0') {
        FUN_1803a0b60(local_228);
        uVar17 = local_228[0];
      }
      else {
        uVar17 = DAT_181108a00;
      }
      if ((uVar17 == 0) || (DAT_180ca09b8 == 0)) {
        uVar9 = 0;
      }
      else {
        uVar9 = FUN_180011200(DAT_180ca09b8 + uVar17);
      }
      fVar30 = local_2a0;
      fVar31 = local_2c8;
      fVar33 = local_2cc;
      local_308 = (double)CONCAT44(local_308._4_4_,fVar36);
      local_310 = (double)CONCAT44(local_310._4_4_,fVar32);
      local_320 = (undefined2 *)CONCAT44(local_320._4_4_,local_2c8);
      local_328 = (double)CONCAT44(local_328._4_4_,local_2cc);
      local_330 = (float *)CONCAT44(local_330._4_4_,local_2a0);
      local_338 = (char *)CONCAT44(local_338._4_4_,fVar37);
      local_318 = pcVar20;
      FUN_180085890(iVar7,&DAT_180c8ba08,uVar9,&local_258);
    }
    else {
      pcVar20 = "restore (disabled on use)";
      bVar28 = false;
LAB_180088c0c:
      if (iVar26 != 0) goto LAB_180088c19;
      local_308 = (double)fVar36;
      pcVar25 = "drop keep";
      if (cVar5 != '\0') {
        pcVar25 = "use keep";
      }
      local_310 = (double)fVar32;
      local_318 = (char *)(double)DAT_180cf9fa4;
      local_320 = (undefined2 *)(double)fVar35;
      local_328 = (double)fVar30;
      local_330 = (float *)(double)fVar37;
      local_338 = pcVar20;
      snprintf(&local_1d8,0xa0,"%s | %s | aa %.2f %.2f view %.2f %.2f | sent %.2f %.2f",pcVar25);
      if (DAT_180ca00c8 < 0x1771) {
        DAT_180ca00c8 = DAT_180ca00c8 + 1;
        FUN_1802b2870("wl_antiaim.log","aa  | cmd %d | %s\n",iVar7,&local_1d8);
      }
      fVar31 = local_2c8;
    }
    if (!bVar28) {
      local_2b0 = DAT_180cf9fa8;
      uVar10 = DAT_180cf9fa8;
    }
    bVar27 = false;
    local_2b8 = fVar32;
    local_2b4 = fVar36;
    if (iVar16 != 0) goto LAB_180088e3c;
    if (!bVar28) {
      DAT_180ccfc10 = iVar7;
      return;
    }
  }
  else {
LAB_180088d91:
    if (iVar16 == 0) {
      fVar29 = fVar30;
      fVar35 = fVar37;
      if (DAT_18096350f != '\0') {
        uVar34 = FUN_180084bd0(&local_270,iVar7);
        fVar29 = local_2b4;
        fVar35 = local_2b8;
      }
      FUN_180086cb0(uVar34,&local_2c0);
      bVar27 = true;
      fVar31 = local_2c8;
      DAT_180cf9fa0 = fVar35;
      DAT_180cf9fa4 = fVar29;
      goto LAB_180088e91;
    }
    bVar27 = true;
    if ((DAT_18096350f != '\0') && (DAT_180ca00c8 < 0x1771)) {
      DAT_180ca00c8 = DAT_180ca00c8 + 1;
      pcVar20 = "skip use mode 1 (hostage)";
      if (iVar16 == 2) {
        pcVar20 = "skip use mode 2 (bomb)";
      }
      FUN_1802b2870("wl_antiaim.log","aa  | cmd %d | %s\n",iVar7,pcVar20);
    }
    fVar31 = local_2c8;
LAB_180088e3c:
    local_338 = (char *)CONCAT44(local_338._4_4_,iVar7);
    FUN_180086720(&local_2c0,iVar16,&local_268,&local_2b8);
    uVar10 = local_2b0;
  }
  DAT_180cf9fa0 = local_2b8;
  DAT_180cf9fa4 = local_2b4;
  if (iVar16 != 0) {
    DAT_180cf9fa0 = local_2b8;
    DAT_180cf9fa4 = local_2b4;
    DAT_180cf9fa8 = uVar10;
  }
LAB_180088e91:
  fVar35 = DAT_180cf9fa4;
  fVar29 = DAT_180cf9fa0;
  DAT_180ca1bdd = 1;
  DAT_180ccfc10 = iVar7;
  if ((local_2d1 != '\0') && (bVar27)) {
    if (DAT_180cd1304 == '\0') {
      FUN_1803a0b60(local_228);
      uVar17 = local_228[0];
    }
    else {
      uVar17 = DAT_181108a00;
    }
    if ((uVar17 == 0) || (DAT_180ca09b8 == 0)) {
      uVar10 = 0;
    }
    else {
      uVar10 = FUN_180011200(DAT_180ca09b8 + uVar17);
    }
    local_308 = (double)CONCAT44(local_308._4_4_,fVar35);
    local_310 = (double)CONCAT44(local_310._4_4_,fVar29);
    local_318 = "aa";
    local_320 = (undefined2 *)CONCAT44(local_320._4_4_,fVar31);
    local_328 = (double)CONCAT44(local_328._4_4_,fVar33);
    local_330 = (float *)CONCAT44(local_330._4_4_,fVar30);
    local_338 = (char *)CONCAT44(local_338._4_4_,fVar37);
    FUN_180085890(iVar7,&DAT_180c8ba08,uVar10,&local_258);
  }
  return;
}



/* ===== 180088fc0 FUN_180088fc0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180088fc0(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  char *_Str1;
  float *pfVar11;
  float *pfVar12;
  ulonglong uVar13;
  undefined4 uVar14;
  ulonglong uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  longlong local_res8;
  float local_b8 [4];
  longlong local_a8;
  uint local_a0;
  undefined8 local_9c;
  undefined8 uStack_94;
  undefined8 local_8c;
  undefined8 uStack_84;
  float local_7c;
  undefined4 local_78;
  undefined4 local_74;
  
  iVar7 = DAT_18091a188;
  if (((((param_1 != 0) && (DAT_180ccfae7 != '\0')) && (DAT_180920ff9 != '\0')) &&
      ((DAT_180920fac != '\0' && (DAT_18095cd7c == '\0')))) && (DAT_1809f3588 == '\0')) {
    if (DAT_180cd1304 == '\0') {
      FUN_1803a0b60(&local_res8);
      DAT_181108a00 = local_res8;
      local_res8 = FUN_1803a0c50(&local_res8);
      DAT_180cd1304 = '\x01';
    }
    else {
      local_res8 = DAT_1811089f8;
    }
    lVar2 = local_res8;
    iVar7 = DAT_18091a188;
    DAT_1811089f8 = local_res8;
    if ((local_res8 != 0) && (DAT_180ca09f0 != 0)) {
      iVar5 = FUN_180011200((ulonglong)DAT_180ca09f0 + local_res8);
      fVar17 = DAT_1808ac34c;
      iVar7 = DAT_18091a188;
      if (iVar5 - 1U < 1000) {
        iVar5 = 0;
        local_a8 = 0;
        local_a0 = 0;
        fVar18 = 0.0;
        local_7c = 0.0;
        local_9c = 0;
        uStack_94 = 0;
        local_78 = 0x3f800000;
        local_8c = 0;
        uStack_84 = 0;
        local_74 = 0x437a0000;
        cVar3 = FUN_1801ec0c0(&local_res8,&local_a8);
        iVar7 = DAT_18091a188;
        if (cVar3 != '\0') {
          if (*(longlong *)(param_1 + 8) == DAT_1809efa00) {
            uVar14 = 1;
            cVar3 = DAT_180cc412c;
          }
          else {
            if (DAT_180ca0a44 == 0) {
              return;
            }
            cVar3 = '\x01';
            uVar14 = 0;
            cVar4 = FUN_180011220(lVar2 + (ulonglong)DAT_180ca0a44);
            if (cVar4 != '\x02') {
              return;
            }
          }
          fVar19 = local_9c._4_4_ * local_9c._4_4_ + (float)local_9c * (float)local_9c;
          iVar7 = DAT_18091a188;
          if ((((fVar19 <= DAT_1808ac9e4) && ((local_a0 & 1) != 0)) && (DAT_180cf9fac == 0.0)) &&
             ((DAT_180cf9fb0 == 0.0 &&
              (((((byte)DAT_180cf9fc8 | *(byte *)(param_1 + 0x70)) & 2) == 0 || (cVar3 == '\0'))))))
          {
            if ((lVar2 != 0) &&
               (((DAT_180ca0a0c != 0 && (uVar13 = (ulonglong)DAT_180ca0a10, DAT_180ca0a10 != 0)) &&
                (lVar8 = FUN_18000f3a0(lVar2 + (ulonglong)DAT_180ca0a0c), lVar8 != 0)))) {
              uVar6 = FUN_180011200(lVar8 + uVar13);
              plVar9 = (longlong *)FUN_1803a0940(&local_res8,uVar6);
              if (((*plVar9 != 0) && (lVar8 = FUN_18000f3a0(*plVar9 + 0x10), lVar8 != 0)) &&
                 (lVar8 = FUN_18000f3a0((ulonglong)DAT_18096196c + lVar8), lVar8 != 0)) {
                uVar13 = (ulonglong)DAT_180961974;
                uVar15 = (ulonglong)DAT_180961970;
                do {
                  if (0x1f < iVar5) break;
                  lVar10 = FUN_18000f3a0(lVar8 + uVar15);
                  if (((lVar10 != 0) &&
                      (_Str1 = (char *)FUN_18000f3a0(lVar10 + uVar13),
                      _Str1 + -0x10000 < (char *)0x7ffffffeffff)) &&
                     (iVar7 = strcmp(_Str1,"C_BaseCSGrenade"), iVar7 == 0)) {
                    return;
                  }
                  lVar8 = FUN_18000f3a0(lVar8 + 0x60);
                  if (lVar8 == 0) break;
                  lVar8 = FUN_18000f3a0(lVar8 + 0x18);
                  iVar5 = iVar5 + 1;
                } while (lVar8 != 0);
              }
            }
            if ((DAT_180ca003d == '\0') && (DAT_1811089f0 != 0)) {
              DAT_180ca003d = '\x01';
              DAT_180ca0040 = FUN_18038eaf0("C_CSPlayerPawn","m_flVelocityModifier");
              DAT_180ca0034 = FUN_18038eaf0("CCSPlayer_MovementServices","m_bDucking");
            }
            fVar16 = (float)FUN_1804633d0(lVar2);
            lVar8 = local_a8;
            if (0.0 < local_7c) {
              local_b8[2] = 1.0;
              local_b8[0] = 0.0;
              local_b8[1] = fVar17 - local_7c / DAT_1808acb08;
              pfVar12 = local_b8;
              if (0.0 <= local_b8[1]) {
                pfVar12 = local_b8 + 1;
              }
              pfVar11 = local_b8 + 2;
              if (local_b8[1] <= fVar17) {
                pfVar11 = pfVar12;
              }
              fVar16 = fVar16 * *pfVar11 * *pfVar11;
            }
            if (((DAT_180ca0034 == 0) || (local_a8 == 0)) ||
               (cVar3 = FUN_180011220(local_a8 + (ulonglong)DAT_180ca0034), cVar3 == '\0')) {
              bVar1 = false;
            }
            else {
              bVar1 = true;
            }
            if ((((DAT_180cf9fc8 & 4) != 0) || ((local_a0 & 2) != 0)) || (bVar1)) {
              if ((lVar8 != 0) && (DAT_180ca09a8 != 0)) {
                fVar18 = (float)FUN_18000f3d0(lVar8 + (ulonglong)DAT_180ca09a8);
              }
              fVar16 = fVar16 * (fVar17 - fVar18 * _DAT_1808ac238);
            }
            if ((DAT_180ca0040 != 0) &&
               (fVar18 = (float)FUN_18000f3d0(lVar2 + (ulonglong)DAT_180ca0040),
               ((uint)fVar18 & 0x7f800000) != 0x7f800000)) {
              fVar16 = fVar18 * fVar16;
            }
            iVar7 = DAT_18091a188;
            if (DAT_1808ac540 <= fVar16) {
              DAT_180cf9fc8 = DAT_180cf9fc8 & 0xfffffffffffeffff;
              *(ulonglong *)(param_1 + 0x70) = *(ulonglong *)(param_1 + 0x70) & 0xfffffffffffeffff;
              if (fVar17 < fVar19) {
                fVar17 = (float)FUN_180516b00(local_9c._4_4_,(float)local_9c);
                DAT_180cf9fbc = fVar17 * DAT_1808aca94;
              }
              DAT_180cf9fac = DAT_1808acde8 / fVar16;
              iVar7 = *(int *)(param_1 + 8);
              if ((iVar7 != DAT_18091a188 + 1) || (0x3f < iVar7 - _DAT_18091a184)) {
                _DAT_18091a184 = iVar7;
                FUN_1802b2560("[antiaim] suppress breathing | cmd %d | max speed %.2f | forward %.5f | basis yaw %.2f | |v|^2 %.3f | module walk %d"
                              ,iVar7,(double)fVar16,(double)DAT_180cf9fac,(double)DAT_180cf9fbc,
                              (double)fVar19,uVar14);
              }
            }
          }
        }
      }
    }
  }
  DAT_18091a188 = iVar7;
  return;
}



/* ===== 180089560 FUN_180089560 ===== */

uint FUN_180089560(float *param_1,float param_2)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float local_78 [8];
  float local_58;
  float local_54;
  float local_50 [2];
  float local_48;
  float local_44;
  float local_40 [2];
  float local_38 [12];
  
  local_78[2] = *param_1;
  local_50[0] = param_1[2];
  local_78[4] = 1.0;
  local_78[0] = 0.0;
  local_58 = 1.0;
  local_78[5] = 0.0;
  local_48 = 1.0;
  local_54 = 0.0;
  local_38[0] = 1.0;
  local_40[0] = param_2 * param_1[3];
  local_44 = 0.0;
  local_78[6] = param_1[1];
  pfVar5 = local_78;
  if (0.0 <= local_78[2]) {
    pfVar5 = local_78 + 2;
  }
  pfVar1 = local_78 + 4;
  if (local_78[2] <= DAT_1808ac34c) {
    pfVar1 = pfVar5;
  }
  pfVar5 = local_78 + 5;
  if (0.0 <= local_78[6]) {
    pfVar5 = local_78 + 6;
  }
  pfVar2 = &local_58;
  if (local_78[6] <= DAT_1808ac34c) {
    pfVar2 = pfVar5;
  }
  pfVar5 = &local_54;
  if (0.0 <= local_50[0]) {
    pfVar5 = local_50;
  }
  pfVar3 = &local_48;
  if (local_50[0] <= DAT_1808ac34c) {
    pfVar3 = pfVar5;
  }
  pfVar5 = &local_44;
  if (0.0 <= local_40[0]) {
    pfVar5 = local_40;
  }
  pfVar4 = local_38;
  if (local_40[0] <= DAT_1808ac34c) {
    pfVar4 = pfVar5;
  }
  return (((int)(*pfVar4 * DAT_1808acb94 + DAT_1808ac1f4) << 8 |
          (int)(*pfVar3 * DAT_1808acb94 + DAT_1808ac1f4)) << 8 |
         (int)(*pfVar2 * DAT_1808acb94 + DAT_1808ac1f4)) << 8 |
         (int)(*pfVar1 * DAT_1808acb94 + DAT_1808ac1f4);
}



/* ===== 1800896c0 FUN_1800896c0 ===== */

void FUN_1800896c0(undefined8 param_1,longlong param_2,int param_3,undefined8 param_4,uint param_5,
                  uint param_6,float param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  float *pfVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  float fVar13;
  undefined8 local_res8;
  float local_88;
  float local_84;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  
  fVar4 = DAT_1808ac34c;
  local_78 = param_4;
  if ((2 < param_3) && ((0xffffff < param_5 || (0xffffff < param_6)))) {
    local_84 = 1.0;
    local_88 = 0.0;
    pfVar6 = &local_88;
    if (0.0 <= param_7) {
      pfVar6 = &param_7;
    }
    pfVar5 = &local_84;
    if (param_7 <= DAT_1808ac34c) {
      pfVar5 = pfVar6;
    }
    fVar1 = *pfVar5;
    local_80 = *(undefined8 *)(DAT_180ca0a50 + 0x1218);
    local_70 = &local_res8;
    local_68 = &local_80;
    local_res8 = param_1;
    FUN_18008b680(&DAT_180ccfb18);
    iVar8 = 0;
    fVar13 = (float)param_4;
    if (param_3 < 4) goto LAB_1800898e7;
    do {
      lVar10 = DAT_180ccfb18;
      lVar7 = (longlong)iVar8;
      iVar8 = iVar8 + 4;
      fVar2 = *(float *)(param_2 + lVar7 * 8);
      fVar3 = *(float *)(param_2 + 4 + lVar7 * 8);
      *(float *)(DAT_180ccfb18 + lVar7 * 8) = (fVar13 - fVar2) * fVar1 + fVar2;
      *(float *)(lVar10 + 4 + lVar7 * 8) = (local_78._4_4_ - fVar3) * fVar1 + fVar3;
      lVar10 = DAT_180ccfb18;
      fVar2 = *(float *)(param_2 + 8 + lVar7 * 8);
      fVar3 = *(float *)(param_2 + 0xc + lVar7 * 8);
      *(float *)(DAT_180ccfb18 + 8 + lVar7 * 8) = (fVar13 - fVar2) * fVar1 + fVar2;
      *(float *)(lVar10 + 0xc + lVar7 * 8) = (local_78._4_4_ - fVar3) * fVar1 + fVar3;
      lVar10 = DAT_180ccfb18;
      fVar2 = *(float *)(param_2 + 0x10 + lVar7 * 8);
      fVar3 = *(float *)(param_2 + 0x14 + lVar7 * 8);
      *(float *)(DAT_180ccfb18 + 0x10 + lVar7 * 8) = (fVar13 - fVar2) * fVar1 + fVar2;
      *(float *)(lVar10 + 0x14 + lVar7 * 8) = (local_78._4_4_ - fVar3) * fVar1 + fVar3;
      lVar10 = DAT_180ccfb18;
      fVar2 = *(float *)(param_2 + 0x18 + lVar7 * 8);
      fVar3 = *(float *)(param_2 + 0x1c + lVar7 * 8);
      *(float *)(DAT_180ccfb18 + 0x18 + lVar7 * 8) = (fVar13 - fVar2) * fVar1 + fVar2;
      *(float *)(lVar10 + 0x1c + lVar7 * 8) = (local_78._4_4_ - fVar3) * fVar1 + fVar3;
    } while (iVar8 < param_3 + -3);
    for (; iVar8 < param_3; iVar8 = iVar8 + 1) {
LAB_1800898e7:
      lVar10 = DAT_180ccfb18;
      lVar7 = (longlong)iVar8;
      fVar2 = *(float *)(param_2 + lVar7 * 8);
      fVar3 = *(float *)(param_2 + 4 + lVar7 * 8);
      *(float *)(DAT_180ccfb18 + lVar7 * 8) = (fVar13 - fVar2) * fVar1 + fVar2;
      *(float *)(lVar10 + 4 + lVar7 * 8) = (local_78._4_4_ - fVar3) * fVar1 + fVar3;
    }
    iVar8 = 0;
    do {
      iVar11 = iVar8 + 1;
      lVar7 = (longlong)iVar8;
      lVar10 = (longlong)(iVar11 % param_3);
      FUN_180089a80(&local_70,
                    CONCAT44(*(undefined4 *)(param_2 + 4 + lVar7 * 8),
                             *(undefined4 *)(param_2 + lVar7 * 8)),param_5,
                    *(undefined8 *)(param_2 + lVar10 * 8),param_5,
                    *(undefined8 *)(DAT_180ccfb18 + lVar10 * 8),param_6);
      FUN_180089a80(&local_70,
                    CONCAT44(*(undefined4 *)(param_2 + 4 + lVar7 * 8),
                             *(undefined4 *)(param_2 + lVar7 * 8)),param_5,
                    *(undefined8 *)(DAT_180ccfb18 + lVar10 * 8),param_6,
                    *(undefined8 *)(DAT_180ccfb18 + lVar7 * 8),param_6);
      iVar8 = iVar11;
    } while (iVar11 < param_3);
    if (fVar1 < fVar4) {
      uVar12 = 0;
      do {
        uVar9 = uVar12 + 1;
        FUN_180089a80(&local_70,*(undefined8 *)(DAT_180ccfb18 + (ulonglong)uVar12 * 8),param_6,
                      *(undefined8 *)(DAT_180ccfb18 + (longlong)((int)uVar9 % param_3) * 8),param_6,
                      param_4,param_6);
        uVar12 = uVar9;
      } while ((int)uVar9 < param_3);
    }
  }
  return;
}



/* ===== 180089a80 FUN_180089a80 ===== */

void FUN_180089a80(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined4 param_5,undefined8 param_6,undefined4 param_7)

{
  longlong *plVar1;
  short sVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  FUN_1803fc3a0(*(undefined8 *)*param_1,3,3);
  lVar3 = *(longlong *)*param_1;
  sVar2 = *(short *)(lVar3 + 0x34);
  **(short **)(lVar3 + 0x48) = sVar2;
  *(longlong *)(lVar3 + 0x48) = *(longlong *)(lVar3 + 0x48) + 2;
  lVar3 = *(longlong *)*param_1;
  **(short **)(lVar3 + 0x48) = sVar2 + 1;
  plVar1 = (longlong *)(lVar3 + 0x48);
  *plVar1 = *plVar1 + 2;
  lVar3 = *(longlong *)*param_1;
  **(short **)(lVar3 + 0x48) = sVar2 + 2;
  plVar1 = (longlong *)(lVar3 + 0x48);
  *plVar1 = *plVar1 + 2;
  puVar4 = (undefined8 *)param_1[1];
  lVar3 = *(longlong *)*param_1;
  **(undefined8 **)(lVar3 + 0x40) = param_2;
  *(undefined8 *)(*(longlong *)(lVar3 + 0x40) + 8) = *puVar4;
  *(undefined4 *)(*(longlong *)(lVar3 + 0x40) + 0x10) = param_3;
  *(longlong *)(lVar3 + 0x40) = *(longlong *)(lVar3 + 0x40) + 0x14;
  *(int *)(lVar3 + 0x34) = *(int *)(lVar3 + 0x34) + 1;
  puVar4 = (undefined8 *)param_1[1];
  lVar3 = *(longlong *)*param_1;
  **(undefined8 **)(lVar3 + 0x40) = param_4;
  *(undefined8 *)(*(longlong *)(lVar3 + 0x40) + 8) = *puVar4;
  *(undefined4 *)(*(longlong *)(lVar3 + 0x40) + 0x10) = param_5;
  *(longlong *)(lVar3 + 0x40) = *(longlong *)(lVar3 + 0x40) + 0x14;
  *(int *)(lVar3 + 0x34) = *(int *)(lVar3 + 0x34) + 1;
  puVar4 = (undefined8 *)param_1[1];
  lVar3 = *(longlong *)*param_1;
  **(undefined8 **)(lVar3 + 0x40) = param_6;
  *(undefined8 *)(*(longlong *)(lVar3 + 0x40) + 8) = *puVar4;
  *(undefined4 *)(*(longlong *)(lVar3 + 0x40) + 0x10) = param_7;
  *(longlong *)(lVar3 + 0x40) = *(longlong *)(lVar3 + 0x40) + 0x14;
  *(int *)(lVar3 + 0x34) = *(int *)(lVar3 + 0x34) + 1;
  return;
}



/* ===== 180089bb0 FUN_180089bb0 ===== */

void FUN_180089bb0(undefined8 param_1,undefined1 param_2)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  longlong lVar4;
  float *pfVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  if (DAT_180ccfc48 != DAT_180ccfc50) {
    DAT_180ccfc50 = DAT_180ccfc48;
  }
  uVar8 = (longlong)DAT_180ccfc38 - (longlong)DAT_180ccfc30 >> 3;
  if (uVar8 < 4) {
    FUN_18008b7d0(&DAT_180ccfc48,&DAT_180ccfc30);
    return;
  }
  FUN_18008bc40(DAT_180ccfc30,DAT_180ccfc38,uVar8,param_2);
  pfVar3 = DAT_180ccfc38;
  for (pfVar5 = DAT_180ccfc30; pfVar5 != pfVar3; pfVar5 = pfVar5 + 2) {
    uVar8 = DAT_180ccfc50 - DAT_180ccfc48;
    while ((0xf < uVar8 &&
           (uVar8 = DAT_180ccfc50 - DAT_180ccfc48 & 0xfffffffffffffff8,
           fVar1 = *(float *)(DAT_180ccfc48 + -0x10 + uVar8),
           fVar2 = *(float *)(DAT_180ccfc48 + -0xc + uVar8),
           (pfVar5[1] - fVar2) * (*(float *)(DAT_180ccfc50 + -8) - fVar1) -
           (*(float *)(DAT_180ccfc50 + -4) - fVar2) * (*pfVar5 - fVar1) <= 0.0))) {
      uVar8 = (DAT_180ccfc50 + -8) - DAT_180ccfc48;
      DAT_180ccfc50 = DAT_180ccfc50 + -8;
    }
    FUN_18008b8c0(&DAT_180ccfc48,pfVar5);
  }
  lVar6 = DAT_180ccfc50 - DAT_180ccfc48;
  lVar7 = ((longlong)DAT_180ccfc38 - (longlong)DAT_180ccfc30 >> 3) + -1;
  while (lVar7 != 0) {
    lVar7 = lVar7 + -1;
    lVar4 = DAT_180ccfc50 - DAT_180ccfc48;
    while (((lVar6 >> 3) + 1U <= (ulonglong)(lVar4 >> 3) &&
           (uVar8 = DAT_180ccfc50 - DAT_180ccfc48 & 0xfffffffffffffff8,
           fVar1 = *(float *)(DAT_180ccfc48 + -0xc + uVar8),
           fVar2 = *(float *)(DAT_180ccfc48 + -0x10 + uVar8),
           (DAT_180ccfc30[lVar7 * 2 + 1] - fVar1) * (*(float *)(DAT_180ccfc50 + -8) - fVar2) -
           (DAT_180ccfc30[lVar7 * 2] - fVar2) * (*(float *)(DAT_180ccfc50 + -4) - fVar1) <= 0.0))) {
      lVar4 = (DAT_180ccfc50 + -8) - DAT_180ccfc48;
      DAT_180ccfc50 = DAT_180ccfc50 + -8;
    }
    FUN_18008b8c0(&DAT_180ccfc48,DAT_180ccfc30 + lVar7 * 2);
  }
  DAT_180ccfc50 = DAT_180ccfc50 + -8;
  return;
}



/* ===== 180089df0 FUN_180089df0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_180089df0(longlong param_1)

{
  bool bVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  undefined4 uVar9;
  ULONGLONG UVar10;
  undefined8 *puVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  longlong lVar15;
  ulonglong uVar16;
  uint uVar17;
  longlong lVar18;
  float *pfVar19;
  bool bVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auStack_598 [32];
  float local_578;
  undefined8 *local_570;
  undefined4 local_568;
  float local_558 [2];
  undefined8 local_550;
  undefined8 local_548;
  undefined8 uStack_540;
  float local_538;
  float local_534;
  float local_530;
  float local_52c;
  float local_528;
  float local_524;
  float local_520;
  float local_51c;
  float local_518;
  float local_514;
  float local_510 [2];
  longlong local_508;
  float local_500 [3];
  float fStack_4f4;
  float fStack_4f0;
  float fStack_4ec;
  float local_4e8 [128];
  undefined8 local_2e8 [64];
  ULONGLONG local_e8;
  undefined4 local_e0;
  ulonglong local_d8;
  
  uVar17 = (uint)DAT_180962dfc;
  fVar7 = DAT_1808ac34c;
  fVar6 = DAT_1808ac1f4;
  local_d8 = DAT_180919500 ^ (ulonglong)auStack_598;
  LOCK();
  DAT_180962dfc = DAT_1811079b4;
  UNLOCK();
  if (param_1 == 0) {
    return (float *)(ulonglong)uVar17;
  }
  fVar23 = DAT_1808ac0c0;
  if (*(float *)(DAT_180ca0a50 + 0x40) <= DAT_1808ac0c0) {
    fVar23 = *(float *)(DAT_180ca0a50 + 0x40);
  }
  local_550 = CONCAT44(local_550._4_4_,fVar23);
  if (DAT_18091a1b4 < 1) {
    local_538 = DAT_1808ac34c;
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
    local_538 = (float)iVar8 / DAT_1808acb08;
  }
  local_548 = _DAT_180921024;
  uStack_540 = DAT_18092102c;
  local_520 = DAT_180921014;
  local_51c = DAT_180921018;
  local_518 = DAT_18092101c;
  local_514 = DAT_180921020;
  if ((DAT_180920fac == '\0') || (DAT_18096354a == '\0')) {
    bVar1 = false;
LAB_180089f5b:
    fVar27 = 0.0;
  }
  else {
    bVar1 = true;
    if (DAT_180ca1bde == '\0') goto LAB_180089f5b;
    fVar27 = DAT_1808ac34c;
  }
  if (DAT_180ca0084 == '\0') {
    DAT_180ca0084 = '\x01';
    DAT_180ca007c = fVar27;
    if (DAT_180ca0070 <= fVar27) {
      DAT_180ca007c = DAT_180ca0070;
    }
    DAT_180ca0080 = fVar27;
    if (fVar27 <= DAT_180ca0070) {
      DAT_180ca0080 = DAT_180ca0070;
    }
    DAT_180ca0074 = fVar27;
  }
  if (fVar27 == DAT_180ca0074) {
  }
  else {
    DAT_180ca007c = fVar27;
    if (DAT_180ca0070 <= fVar27) {
      DAT_180ca007c = DAT_180ca0070;
    }
    DAT_180ca0080 = fVar27;
    if (fVar27 <= DAT_180ca0070) {
      DAT_180ca0080 = DAT_180ca0070;
    }
    DAT_180ca0078 = 0.0;
    DAT_180ca0074 = fVar27;
  }
  if (DAT_1808abf7c < (float)((uint)(DAT_180ca0070 - fVar27) & _DAT_1808ade90)) {
    DAT_180ca0078 = DAT_180ca0078 + fVar23;
    if (DAT_180ca0078 < DAT_1808ac100) {
      fVar22 = DAT_1808ac34c - DAT_180ca0078 / DAT_1808ac100;
      fVar22 = DAT_1808ac34c - fVar22 * fVar22 * fVar22;
      if (fVar27 <= (DAT_180ca0080 + DAT_180ca007c) * DAT_1808ac1f4) {
        fVar27 = DAT_180ca0080 - (DAT_180ca0080 - fVar27) * fVar22;
      }
      else {
        fVar27 = (fVar27 - DAT_180ca007c) * fVar22 + DAT_180ca007c;
      }
    }
  }
  else {
    DAT_180ca0078 = 0.0;
  }
  if (DAT_180ca00ac == '\0') {
    local_534 = DAT_180921014;
    local_530 = DAT_180921018;
    local_52c = DAT_18092101c;
    local_528 = DAT_180921020;
    DAT_180ca0088 = DAT_180921014;
    DAT_180ca008c = DAT_180921018;
    DAT_180ca0090 = DAT_18092101c;
    DAT_180ca00a8 = 0.0;
    DAT_180ca0094 = DAT_180921020;
    DAT_180ca00c4 = '\0';
    _DAT_180ca00bc = 0;
    DAT_180ca00b0 = 0;
    DAT_180ca00ac = '\x01';
    if (DAT_180ccfc18 != DAT_180ccfc20) {
      DAT_180ccfc20 = DAT_180ccfc18;
    }
  }
  else {
    local_528 = DAT_180ca00a4;
    local_52c = DAT_180ca00a0;
    local_530 = DAT_180ca009c;
    local_534 = DAT_180ca0098;
  }
  if ((DAT_180963549 != '\0') != DAT_180ca00b0) {
    local_558[0] = DAT_180ca00a8 / DAT_1808ac118;
    local_558[1] = 1.0;
    local_524 = 0.0;
    pfVar19 = &local_524;
    if (0.0 <= local_558[0]) {
      pfVar19 = local_558;
    }
    pfVar13 = local_558 + 1;
    if (local_558[0] <= DAT_1808ac34c) {
      pfVar13 = pfVar19;
    }
    fVar22 = DAT_1808ac34c - *pfVar13;
    fVar22 = DAT_1808ac34c - fVar22 * fVar22 * fVar22;
    DAT_180ca0088 = DAT_180ca0088 + (local_534 - DAT_180ca0088) * fVar22;
    DAT_180ca008c = DAT_180ca008c + (local_530 - DAT_180ca008c) * fVar22;
    DAT_180ca0090 = DAT_180ca0090 + (local_52c - DAT_180ca0090) * fVar22;
    DAT_180ca0094 = DAT_180ca0094 + (local_528 - DAT_180ca0094) * fVar22;
    DAT_180ca00a8 = 0.0;
    DAT_180ca00b0 = (uint)(DAT_180963549 != '\0');
  }
  fVar23 = fVar23 + DAT_180ca00a8;
  local_558[0] = 1.0;
  bVar20 = DAT_180963549 == '\0';
  local_550 = (ulonglong)local_550._4_4_ << 0x20;
  pfVar19 = (float *)&local_548;
  if (bVar20) {
    pfVar19 = &local_520;
  }
  DAT_180ca00a8 = DAT_1808ac118;
  if (fVar23 <= DAT_1808ac118) {
    DAT_180ca00a8 = fVar23;
  }
  DAT_180ca0098 = *pfVar19;
  pfVar19 = (float *)((longlong)&local_548 + 4);
  if (bVar20) {
    pfVar19 = &local_51c;
  }
  local_558[1] = DAT_180ca00a8 / DAT_1808ac118;
  DAT_180ca009c = *pfVar19;
  pfVar19 = (float *)&uStack_540;
  if (bVar20) {
    pfVar19 = &local_518;
  }
  DAT_180ca00a0 = *pfVar19;
  pfVar19 = (float *)((longlong)&uStack_540 + 4);
  if (bVar20) {
    pfVar19 = &local_514;
  }
  DAT_180ca00a4 = *pfVar19;
  pfVar19 = (float *)&local_550;
  if (0.0 <= local_558[1]) {
    pfVar19 = local_558 + 1;
  }
  pfVar13 = local_558;
  if (local_558[1] <= DAT_1808ac34c) {
    pfVar13 = pfVar19;
  }
  fVar23 = DAT_1808ac34c - *pfVar13;
  fVar23 = DAT_1808ac34c - fVar23 * fVar23 * fVar23;
  local_548 = CONCAT44((DAT_180ca009c - DAT_180ca008c) * fVar23 + DAT_180ca008c,
                       (DAT_180ca0098 - DAT_180ca0088) * fVar23 + DAT_180ca0088);
  uStack_540 = CONCAT44((DAT_180ca00a4 - DAT_180ca0094) * fVar23 + DAT_180ca0094,
                        (DAT_180ca00a0 - DAT_180ca0090) * fVar23 + DAT_180ca0090);
  DAT_180ca0070 = fVar27;
  if (fVar27 <= 0.0) {
LAB_18008aaba:
    DAT_180ca0098 = DAT_180921014;
    DAT_180ca009c = DAT_180921018;
    DAT_180ca00a0 = DAT_18092101c;
    DAT_180ca00a4 = DAT_180921020;
    DAT_180ca0088 = DAT_180921014;
    DAT_180ca008c = DAT_180921018;
    DAT_180ca0090 = DAT_18092101c;
    DAT_180ca0094 = DAT_180921020;
    DAT_180ca00c4 = '\0';
    _DAT_180ca00bc = 0;
    DAT_180ca00a8 = 0.0;
    DAT_180ca00b0 = 0;
    DAT_180ca00ac = '\x01';
    if (DAT_180ccfc18 != DAT_180ccfc20) {
      DAT_180ccfc20 = DAT_180ccfc18;
    }
  }
  else {
    if (bVar1) {
      DAT_180ca00c4 = '\x01';
      DAT_180ca00b4 = DAT_1811079b0 * DAT_1808ac1f4 + DAT_18096354c;
      DAT_180ca00b8 = DAT_1811079b4 * DAT_1808ac1f4 + DAT_180963550;
    }
    else if (DAT_180ca00c4 == '\0') goto LAB_18008aaba;
    fVar27 = DAT_180ca00b8;
    fVar23 = DAT_180ca00b4;
    UVar10 = GetTickCount64();
    fVar22 = local_538;
    if ((fVar23 != _DAT_180ca00bc) || (fVar27 != _DAT_180ca00c0)) {
      if (DAT_180921008 == 1) {
        fVar24 = DAT_1808ac950;
      }
      else {
        fVar24 = DAT_1808ac918;
      }
      fVar24 = local_538 * fVar24;
      FUN_18008abc0(local_500 + 2);
      fVar28 = DAT_1808ac0bc;
      uVar16 = 0;
      local_500[2] = fVar23;
      fStack_4f4 = fVar27;
      fStack_4f0 = fVar23;
      fStack_4ec = fVar27;
      do {
        fVar26 = (float)(int)uVar16 * fVar28;
        fVar21 = (float)FUN_180517200(fVar26);
        local_4e8[uVar16 * 2] = fVar21 * fVar24 + fVar23;
        fVar21 = (float)FUN_180517790(fVar26);
        local_4e8[uVar16 * 2 + 1] = fVar21 * fVar24 + fVar27;
        uVar17 = (int)uVar16 + 1;
        uVar16 = (ulonglong)uVar17;
      } while ((int)uVar17 < 0x40);
      lVar15 = 4;
      puVar11 = local_2e8;
      pfVar19 = local_4e8;
      do {
        uVar2 = *(undefined8 *)(pfVar19 + 2);
        pfVar13 = pfVar19 + 0x20;
        *puVar11 = *(undefined8 *)pfVar19;
        puVar11[1] = uVar2;
        uVar2 = *(undefined8 *)(pfVar19 + 6);
        puVar11[2] = *(undefined8 *)(pfVar19 + 4);
        puVar11[3] = uVar2;
        uVar2 = *(undefined8 *)(pfVar19 + 10);
        puVar11[4] = *(undefined8 *)(pfVar19 + 8);
        puVar11[5] = uVar2;
        uVar2 = *(undefined8 *)(pfVar19 + 0xe);
        puVar11[6] = *(undefined8 *)(pfVar19 + 0xc);
        puVar11[7] = uVar2;
        uVar2 = *(undefined8 *)(pfVar19 + 0x12);
        puVar11[8] = *(undefined8 *)(pfVar19 + 0x10);
        puVar11[9] = uVar2;
        uVar2 = *(undefined8 *)(pfVar19 + 0x16);
        puVar11[10] = *(undefined8 *)(pfVar19 + 0x14);
        puVar11[0xb] = uVar2;
        fVar24 = pfVar19[0x19];
        fVar28 = pfVar19[0x1a];
        fVar21 = pfVar19[0x1b];
        *(float *)(puVar11 + 0xc) = pfVar19[0x18];
        *(float *)((longlong)puVar11 + 100) = fVar24;
        *(float *)(puVar11 + 0xd) = fVar28;
        *(float *)((longlong)puVar11 + 0x6c) = fVar21;
        fVar24 = pfVar19[0x1d];
        fVar28 = pfVar19[0x1e];
        fVar21 = pfVar19[0x1f];
        *(float *)(puVar11 + 0xe) = pfVar19[0x1c];
        *(float *)((longlong)puVar11 + 0x74) = fVar24;
        *(float *)(puVar11 + 0xf) = fVar28;
        *(float *)((longlong)puVar11 + 0x7c) = fVar21;
        lVar15 = lVar15 + -1;
        puVar11 = puVar11 + 0x10;
        pfVar19 = pfVar13;
      } while (lVar15 != 0);
      local_e8 = UVar10;
      local_e0 = 0x3f800000;
      if (DAT_180ccfc20 == DAT_180ccfc28) {
        FUN_18008c300(pfVar13,DAT_180ccfc20,local_500 + 2);
      }
      else {
        lVar15 = 8;
        pfVar19 = local_500 + 2;
        pfVar13 = DAT_180ccfc20;
        do {
          pfVar12 = pfVar13;
          pfVar14 = pfVar19;
          lVar18 = *(longlong *)(pfVar14 + 2);
          lVar3 = *(longlong *)(pfVar14 + 4);
          lVar4 = *(longlong *)(pfVar14 + 6);
          *(longlong *)pfVar12 = *(longlong *)pfVar14;
          *(longlong *)(pfVar12 + 2) = lVar18;
          lVar18 = *(longlong *)(pfVar14 + 8);
          lVar5 = *(longlong *)(pfVar14 + 10);
          *(longlong *)(pfVar12 + 4) = lVar3;
          *(longlong *)(pfVar12 + 6) = lVar4;
          lVar3 = *(longlong *)(pfVar14 + 0xc);
          lVar4 = *(longlong *)(pfVar14 + 0xe);
          *(longlong *)(pfVar12 + 8) = lVar18;
          *(longlong *)(pfVar12 + 10) = lVar5;
          lVar18 = *(longlong *)(pfVar14 + 0x10);
          lVar5 = *(longlong *)(pfVar14 + 0x12);
          *(longlong *)(pfVar12 + 0xc) = lVar3;
          *(longlong *)(pfVar12 + 0xe) = lVar4;
          lVar3 = *(longlong *)(pfVar14 + 0x14);
          lVar4 = *(longlong *)(pfVar14 + 0x16);
          *(longlong *)(pfVar12 + 0x10) = lVar18;
          *(longlong *)(pfVar12 + 0x12) = lVar5;
          lVar18 = *(longlong *)(pfVar14 + 0x18);
          lVar5 = *(longlong *)(pfVar14 + 0x1a);
          *(longlong *)(pfVar12 + 0x14) = lVar3;
          *(longlong *)(pfVar12 + 0x16) = lVar4;
          lVar3 = *(longlong *)(pfVar14 + 0x1c);
          lVar4 = *(longlong *)(pfVar14 + 0x1e);
          *(longlong *)(pfVar12 + 0x18) = lVar18;
          *(longlong *)(pfVar12 + 0x1a) = lVar5;
          *(longlong *)(pfVar12 + 0x1c) = lVar3;
          *(longlong *)(pfVar12 + 0x1e) = lVar4;
          lVar15 = lVar15 + -1;
          pfVar19 = pfVar14 + 0x20;
          pfVar13 = pfVar12 + 0x20;
        } while (lVar15 != 0);
        fVar24 = pfVar14[0x21];
        fVar28 = pfVar14[0x22];
        fVar21 = pfVar14[0x23];
        lVar15 = *(longlong *)(pfVar14 + 0x24);
        lVar18 = *(longlong *)(pfVar14 + 0x26);
        pfVar12[0x20] = pfVar14[0x20];
        pfVar12[0x21] = fVar24;
        pfVar12[0x22] = fVar28;
        pfVar12[0x23] = fVar21;
        *(longlong *)(pfVar12 + 0x24) = lVar15;
        *(longlong *)(pfVar12 + 0x26) = lVar18;
        DAT_180ccfc20 = DAT_180ccfc20 + 0x108;
      }
      _DAT_180ca00bc = CONCAT44(fVar27,fVar23);
    }
    fVar27 = DAT_1808acb08;
    fVar23 = DAT_1808ac1d4;
    if (DAT_180ccfc30 != DAT_180ccfc38) {
      DAT_180ccfc38 = DAT_180ccfc30;
    }
    pfVar19 = (float *)0x0;
    fVar28 = 0.0;
    pfVar13 = (float *)0x0;
    fVar24 = fVar28;
    if (((longlong)DAT_180ccfc20 - (longlong)DAT_180ccfc18 >> 5) * 0xf83e0f83e0f83e1 != 0) {
      do {
        pfVar14 = DAT_180ccfc20;
        pfVar13 = DAT_180ccfc18;
        fVar21 = DAT_180ccfc18[(longlong)pfVar19 * 0x108];
        if ((fVar21 == DAT_180ca00b4) &&
           (DAT_180ccfc18[(longlong)pfVar19 * 0x108 + 1] == DAT_180ca00b8)) {
          fVar24 = DAT_180ccfc18[((longlong)pfVar19 * 0x84 + 0x83) * 2];
          *(ULONGLONG *)(DAT_180ccfc18 + ((longlong)pfVar19 * 0x84 + 0x82) * 2) = UVar10;
        }
        else {
          local_500[0] = 1.4013e-43;
          local_500[1] = 0.0;
          local_510[0] = 0.0;
          local_510[1] = 0.0;
          local_508 = UVar10 - *(longlong *)(DAT_180ccfc18 + ((longlong)pfVar19 * 0x84 + 0x82) * 2);
          pfVar14 = local_510;
          if (-1 < local_508) {
            pfVar14 = local_510 + 2;
          }
          pfVar12 = local_510 + 4;
          if (local_508 < 0x65) {
            pfVar12 = pfVar14;
          }
          fVar24 = fVar7 - (float)*(longlong *)pfVar12 / fVar27;
          DAT_180ccfc18[((longlong)pfVar19 * 0x84 + 0x83) * 2] = fVar24;
        }
        pfVar12 = DAT_180ccfc18;
        if (0.0 < fVar24) {
          if (fVar24 <= fVar28) {
            fVar24 = fVar28;
          }
          if (pfVar19 == (float *)0x0) {
            FUN_18008bf30(pfVar14,DAT_180ccfc38,pfVar13 + ((longlong)pfVar19 * 0x84 + 2) * 2,0x40);
          }
          else {
            uVar16 = 0;
            fVar26 = fVar7 - DAT_180ccfc18[((longlong)pfVar19 * 0x84 + -1) * 2];
            fVar28 = DAT_180ccfc18[((longlong)pfVar19 * 0x84 + -0x83) * 2];
            DAT_180ccfc18[(longlong)pfVar19 * 0x108 + -0x107] =
                 (pfVar13[(longlong)pfVar19 * 0x108 + 1] -
                 DAT_180ccfc18[(longlong)pfVar19 * 0x108 + -0x105]) * fVar26 +
                 DAT_180ccfc18[(longlong)pfVar19 * 0x108 + -0x105];
            pfVar12[((longlong)pfVar19 * 0x84 + -0x84) * 2] = (fVar21 - fVar28) * fVar26 + fVar28;
            do {
              fVar28 = pfVar13[(longlong)pfVar19 * 0x108 + uVar16 * 2 + 5];
              fVar25 = (pfVar12[((longlong)pfVar19 * 0x84 + -0x83) * 2] -
                       pfVar12[((longlong)pfVar19 * 0x84 + (uVar16 - 0x42)) * 2]) * fVar26 * fVar23
                       + pfVar12[((longlong)pfVar19 * 0x84 + (uVar16 - 0x42)) * 2];
              fVar21 = (pfVar12[(longlong)pfVar19 * 0x108 + -0x105] -
                       pfVar12[(longlong)pfVar19 * 0x108 + uVar16 * 2 + -0x83]) * fVar26 * fVar23 +
                       pfVar12[(longlong)pfVar19 * 0x108 + uVar16 * 2 + -0x83];
              pfVar12[((longlong)pfVar19 * 0x84 + (uVar16 - 0x82)) * 2] =
                   (pfVar13[((longlong)pfVar19 * 0x84 + uVar16 + 2) * 2] - fVar25) * fVar26 + fVar25
              ;
              pfVar12[(longlong)pfVar19 * 0x108 + uVar16 * 2 + -0x103] =
                   (fVar28 - fVar21) * fVar26 + fVar21;
              FUN_18008b8c0(&DAT_180ccfc30,pfVar13 + ((longlong)pfVar19 * 0x84 + 2) * 2 + uVar16 * 2
                           );
              uVar17 = (int)uVar16 + 1;
              uVar16 = (ulonglong)uVar17;
            } while ((int)uVar17 < 0x40);
          }
          pfVar19 = (float *)((longlong)pfVar19 + 1);
        }
        else {
          pfVar13 = DAT_180ccfc18 + (longlong)pfVar19 * 0x108;
          FUN_180540530(pfVar13,pfVar13 + 0x108,
                        (longlong)DAT_180ccfc20 - (longlong)(pfVar13 + 0x108));
          DAT_180ccfc20 = DAT_180ccfc20 + -0x108;
          fVar24 = fVar28;
        }
        pfVar13 = (float *)(((longlong)DAT_180ccfc20 - (longlong)DAT_180ccfc18 >> 5) *
                           0xf83e0f83e0f83e1);
        fVar28 = fVar24;
      } while (pfVar19 < pfVar13);
    }
    if (DAT_180ccfc18 != DAT_180ccfc20) {
      pfVar13 = (float *)FUN_180089bb0();
      uVar16 = DAT_180ccfc50 - DAT_180ccfc48 >> 3;
      if (2 < (int)uVar16) {
        local_558[1] = fVar24 * DAT_180ca0070;
        local_558[0] = 1.0;
        local_550 = local_550 & 0xffffffff00000000;
        pfVar19 = (float *)&local_550;
        if (0.0 <= local_558[1]) {
          pfVar19 = local_558 + 1;
        }
        pfVar13 = local_558;
        if (local_558[1] <= fVar7) {
          pfVar13 = pfVar19;
        }
        fVar23 = *pfVar13;
        lVar18 = *(longlong *)(DAT_180ccfc20 + -0x108);
        lVar15 = *(longlong *)(DAT_180ccfc20 + -0x108);
        if (DAT_180921008 == 1) {
          lVar18 = DAT_180ccfc48;
          uVar9 = FUN_180089560(&local_548,fVar23);
          local_578 = (float)FUN_180089560(&local_548,0);
          local_568 = DAT_1808ac294;
          local_570 = (undefined8 *)CONCAT44(local_570._4_4_,uVar9);
          pfVar13 = (float *)FUN_1800896c0(param_1,lVar18,uVar16 & 0xffffffff,lVar15);
        }
        else {
          lVar15 = DAT_180ccfc48;
          uVar9 = FUN_180089560(&local_548,0);
          local_578 = (float)FUN_180089560(&local_548,fVar23 * fVar6);
          local_568 = DAT_1808ac294;
          local_570 = (undefined8 *)CONCAT44(local_570._4_4_,uVar9);
          FUN_1800896c0(param_1,lVar15,uVar16 & 0xffffffff,lVar18);
          fVar22 = fVar22 * DAT_1808aca68;
          local_550 = 0;
          uVar9 = FUN_180089560(&local_548,fVar23);
          local_570 = &local_550;
          local_568 = 0x100000;
          local_578 = fVar22;
          FUN_180400420(param_1,DAT_180ccfc48,uVar16 & 0xffffffff,uVar9);
          uVar9 = FUN_180089560(&local_548,fVar23 * fVar6);
          local_570 = (undefined8 *)CONCAT44(local_570._4_4_,0x200);
          local_578 = fVar7;
          pfVar13 = (float *)FUN_1803fc600(param_1,DAT_180ccfc48,uVar16 & 0xffffffff,uVar9);
        }
      }
    }
  }
  return pfVar13;
}



/* ===== 18008abc0 FUN_18008abc0 ===== */

undefined8 * FUN_18008abc0(undefined8 *param_1)

{
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
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  *(undefined4 *)(param_1 + 0x83) = 0x3f800000;
  return param_1;
}



/* ===== 18008af40 FUN_18008af40 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18008af40(void)

{
  if (DAT_180963569 != '\0') {
    DAT_180963569 = '\0';
    if (((ulonglong)DAT_180ccfb88 + _DAT_180963570) - 0x10000 < 0x7ffffffeffff) {
      FUN_180013280((ulonglong)DAT_180ccfb88 + _DAT_180963570,&DAT_18096357c);
      FUN_180066890((ulonglong)DAT_180ccfb84 + _DAT_180963570,&DAT_180963578);
      return;
    }
  }
  return;
}



/* ===== 18008afb0 FUN_18008afb0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18008afb0(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined2 local_res8;
  undefined6 uStackX_a;
  float local_res10 [2];
  
  FUN_18008af40();
  if (((((DAT_180963568 != '\0') && (DAT_180920ffa != '\0')) && (DAT_18095723c != '\0')) &&
      (DAT_1809f351c != 2)) &&
     (((DAT_1809f351c != 1 || (lVar5 = FUN_180266660(), lVar5 == 0)) ||
      ((DAT_180cf9f80 == 0 ||
       (cVar1 = FUN_180011220((ulonglong)DAT_180cf9f80 + lVar5), cVar1 == '\0')))))) {
    if (DAT_180ccfb80 == '\0') {
      if (DAT_1811089f0 == 0) {
        return;
      }
      DAT_180ccfb80 = '\x01';
      DAT_180ccfb84 = FUN_18038eaf0("C_CSWeaponBase","m_iWeaponGameplayAnimState");
      DAT_180ccfb88 = FUN_18038eaf0("C_CSWeaponBase","m_flWeaponGameplayAnimStateTimestamp");
      DAT_180ccfb8c = FUN_18038eaf0("C_CSWeaponBase","m_nDeployTick");
      DAT_180ccfb90 = FUN_18038eaf0("CCSWeaponBaseVData","m_flDeployDuration");
      DAT_180ccfb94 = FUN_18038eaf0("C_BasePlayerWeapon","m_iClip1");
      DAT_180ccfb98 = FUN_18038eaf0("CBasePlayerWeaponVData","m_iMaxClip1");
      DAT_180ccfb9c = FUN_18038eaf0("C_BaseEntity","m_nSubclassID");
    }
    if ((((DAT_180ccfb84 != 0) && (DAT_180ccfb88 != 0)) &&
        ((DAT_180ccfb8c != 0 &&
         (((DAT_180ccfb90 != 0 && (DAT_180ccfb94 != 0)) && (DAT_180ccfb98 != 0)))))) &&
       (DAT_180ccfb9c != 0)) {
      if (DAT_180cd1304 == '\0') {
        FUN_1803a0b60(&local_res8);
        DAT_181108a00 = CONCAT62(uStackX_a,local_res8);
        DAT_1811089f8 = FUN_1803a0c50(&local_res8);
        DAT_180cd1304 = '\x01';
      }
      lVar5 = DAT_1811089f8;
      if ((((DAT_1811089f8 != 0) && (DAT_180ca09f0 != 0)) &&
          ((iVar2 = FUN_180011200(DAT_1811089f8 + (ulonglong)DAT_180ca09f0), iVar2 - 1U < 1000 &&
           ((DAT_180ca0a0c != 0 && (uVar9 = (ulonglong)DAT_180ca0a10, DAT_180ca0a10 != 0)))))) &&
         (lVar5 = FUN_18000f3a0(lVar5 + (ulonglong)DAT_180ca0a0c), lVar5 != 0)) {
        uVar3 = FUN_180011200(lVar5 + uVar9);
        plVar6 = (longlong *)FUN_1803a0940(&local_res8,uVar3);
        lVar5 = *plVar6;
        if (((lVar5 != 0) && (((ulonglong)DAT_180ccfb88 - 0x10000) + lVar5 < 0x7ffffffeffff)) &&
           (lVar7 = FUN_18000f3a0((ulonglong)DAT_180ccfb9c + 8 + lVar5),
           lVar7 - 0x10000U < 0x7ffffffeffff)) {
          iVar2 = FUN_180011200((ulonglong)DAT_180ccfb98 + lVar7);
          iVar4 = FUN_180011200((ulonglong)DAT_180ccfb94 + lVar5);
          if (((iVar4 == iVar2) && (DAT_180961a50 != 0)) && (lVar8 = FUN_18000f3a0(), lVar8 != 0)) {
            fVar10 = (float)FUN_18000f3d0(lVar8 + 0x30);
            iVar2 = FUN_180011200((ulonglong)DAT_180ccfb8c + lVar5);
            fVar12 = (float)iVar2 * DAT_1808ac00c;
            local_res10[0] = fVar12;
            fVar11 = (float)FUN_18000f3d0((ulonglong)DAT_180ccfb90 + lVar7);
            if (fVar10 < fVar12 + fVar11) {
              _DAT_180963570 = lVar5;
              DAT_180963578 = FUN_180011440((ulonglong)DAT_180ccfb84 + lVar5);
              DAT_18096357c = (float)FUN_18000f3d0((ulonglong)DAT_180ccfb88 + lVar5);
              DAT_180963569 = 1;
              local_res8 = 0xb;
              FUN_180066890((ulonglong)DAT_180ccfb84 + lVar5,&local_res8);
              FUN_180013280((ulonglong)DAT_180ccfb88 + lVar5,local_res10);
              if ((DAT_180963580 != iVar2) || (DAT_180963588 != lVar5)) {
                DAT_180963580 = iVar2;
                DAT_180963588 = lVar5;
                FUN_1802b2560("[antiaim] fast weapon switch | hud arms pass | deploy %.3f + %.3f > now %.3f | anim state %d ts %.3f -> 11 ts %.3f (restored after stage 12)"
                              ,(double)fVar12,(double)fVar11,(double)fVar10,DAT_180963578,
                              (double)DAT_18096357c,(double)fVar12);
              }
            }
          }
        }
      }
    }
  }
  return;
}



/* ===== 18008b430 FUN_18008b430 ===== */

void FUN_18008b430(undefined8 *param_1)

{
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
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  return;
}



/* ===== 18008b640 FUN_18008b640 ===== */

undefined8 * FUN_18008b640(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (param_2 + -0x2000 < (undefined8 *)0x7ffffffeffff) {
    uVar1 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar1;
    return param_1;
  }
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



/* ===== 18008b680 FUN_18008b680 ===== */

void FUN_18008b680(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  
  puVar6 = (undefined8 *)param_1[1];
  lVar3 = *param_1;
  uVar4 = (longlong)puVar6 - lVar3 >> 3;
  if (param_2 < uVar4) {
    param_1[1] = lVar3 + param_2 * 8;
    return;
  }
  if (uVar4 < param_2) {
    uVar2 = param_1[2] - lVar3 >> 3;
    if (param_2 <= uVar2) {
      for (lVar3 = param_2 - uVar4; lVar3 != 0; lVar3 = lVar3 + -1) {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
      }
      param_1[1] = (longlong)puVar6;
      return;
    }
    if (0x1fffffffffffffff < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_1800118d0();
    }
    uVar5 = 0x1fffffffffffffff;
    if (uVar2 <= 0x1fffffffffffffff - (uVar2 >> 1)) {
      uVar5 = (uVar2 >> 1) + uVar2;
      if (uVar5 < param_2) {
        uVar5 = param_2;
      }
      else if (0x1fffffffffffffff < uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_18000d840();
      }
    }
    lVar1 = FUN_18000fb70();
    puVar6 = (undefined8 *)(((longlong)puVar6 - lVar3 & 0xfffffffffffffff8U) + lVar1);
    for (lVar3 = param_2 - uVar4; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    FUN_180540530(lVar1,*param_1,param_1[1] - *param_1);
    FUN_18002b8d0(param_1,lVar1,param_2,uVar5);
  }
  return;
}



/* ===== 18008b7d0 FUN_18008b7d0 ===== */

longlong * FUN_18008b7d0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  if (param_1 != param_2) {
    lVar5 = *param_1;
    lVar1 = *param_2;
    uVar2 = param_2[1] - lVar1 >> 3;
    if ((ulonglong)(param_1[2] - lVar5 >> 3) < uVar2) {
      FUN_18008c6d0(param_1,uVar2);
      lVar5 = *param_1;
      lVar3 = uVar2 * 8;
      FUN_180540530(lVar5,lVar1,lVar3);
    }
    else {
      uVar4 = param_1[1] - lVar5 >> 3;
      if (uVar4 < uVar2) {
        FUN_180540530(lVar5,lVar1,uVar4 * 8);
        lVar5 = param_1[1];
        lVar3 = (uVar2 - uVar4) * 8;
        FUN_180540530(lVar5,lVar1 + uVar4 * 8,lVar3);
      }
      else {
        lVar3 = uVar2 * 8;
        FUN_180540530(lVar5,lVar1,lVar3);
      }
    }
    param_1[1] = lVar3 + lVar5;
  }
  return param_1;
}



/* ===== 18008b8c0 FUN_18008b8c0 ===== */

void FUN_18008b8c0(longlong *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  
  puVar6 = (undefined8 *)param_1[1];
  if (puVar6 != (undefined8 *)param_1[2]) {
    *puVar6 = *param_2;
    param_1[1] = param_1[1] + 8;
    return;
  }
  uVar7 = (longlong)puVar6 - *param_1;
  uVar8 = 0x1fffffffffffffff;
  lVar3 = (longlong)uVar7 >> 3;
  if (lVar3 == 0x1fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_1800118d0();
  }
  uVar4 = param_1[2] - *param_1 >> 3;
  uVar1 = lVar3 + 1;
  if (uVar4 <= 0x1fffffffffffffff - (uVar4 >> 1)) {
    uVar4 = (uVar4 >> 1) + uVar4;
    uVar8 = uVar1;
    if (uVar1 <= uVar4) {
      uVar8 = uVar4;
    }
    if (0x1fffffffffffffff < uVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  lVar3 = FUN_18000fb70(uVar8 * 8);
  uVar7 = uVar7 & 0xfffffffffffffff8;
  *(undefined8 *)(lVar3 + uVar7) = *param_2;
  puVar2 = (undefined8 *)*param_1;
  if (puVar6 == (undefined8 *)param_1[1]) {
    lVar9 = param_1[1] - (longlong)puVar2;
    lVar5 = lVar3;
    puVar6 = puVar2;
  }
  else {
    FUN_180540530(lVar3,puVar2,(longlong)puVar6 - (longlong)puVar2);
    lVar5 = uVar7 + 8 + lVar3;
    lVar9 = param_1[1] - (longlong)puVar6;
  }
  FUN_180540530(lVar5,puVar6,lVar9);
  FUN_18002b8d0(param_1,lVar3,uVar1,uVar8);
  return;
}



/* ===== 18008b9f0 FUN_18008b9f0 ===== */

undefined8 *
FUN_18008b9f0(undefined8 *param_1,undefined8 *param_2,longlong param_3,undefined1 param_4)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 *local_58;
  undefined8 *puStack_50;
  
  lVar8 = (longlong)param_2 - (longlong)param_1;
  while( true ) {
    puVar9 = (undefined8 *)(lVar8 >> 4);
    if ((longlong)puVar9 < 0x21) {
      if (param_1 != param_2) {
        for (puVar11 = param_1 + 2; puVar11 != param_2; puVar11 = puVar11 + 2) {
          fVar1 = *(float *)(puVar11 + 1);
          uVar4 = *puVar11;
          uVar3 = *(undefined4 *)((longlong)puVar11 + 0xc);
          if (*(float *)(param_1 + 1) <= fVar1) {
            fVar2 = *(float *)(puVar11 + -1);
            puVar7 = puVar11;
            while (fVar1 < fVar2) {
              puVar9 = puVar7 + -2;
              *puVar7 = *puVar9;
              puVar7[1] = puVar7[-1];
              fVar2 = *(float *)(puVar7 + -3);
              puVar7 = puVar9;
            }
            *(float *)(puVar7 + 1) = fVar1;
            *puVar7 = uVar4;
            *(undefined4 *)((longlong)puVar7 + 0xc) = uVar3;
          }
          else {
            puVar9 = (undefined8 *)
                     FUN_180540530(param_1 + 2,param_1,(longlong)puVar11 - (longlong)param_1);
            *(float *)(param_1 + 1) = fVar1;
            *param_1 = uVar4;
            *(undefined4 *)((longlong)param_1 + 0xc) = uVar3;
          }
        }
      }
      return puVar9;
    }
    lVar8 = (longlong)param_2 - (longlong)param_1 >> 5;
    if (param_3 < 1) break;
    puVar9 = param_1 + lVar8 * 2;
    FUN_18008c890(param_1,puVar9,param_2 + -2,param_4);
    FUN_18008ca50(&local_58,param_1,puVar9,param_2);
    puVar11 = puStack_50;
    puVar9 = local_58;
    param_3 = (param_3 >> 1) + (param_3 >> 2);
    if ((longlong)local_58 - (longlong)param_1 >> 4 < (longlong)param_2 - (longlong)puStack_50 >> 4)
    {
      FUN_18008b9f0(param_1,local_58,param_3,param_4);
      puVar9 = param_2;
      param_1 = puVar11;
    }
    else {
      FUN_18008b9f0(puStack_50,param_2,param_3,param_4);
    }
    lVar8 = (longlong)puVar9 - (longlong)param_1;
    param_2 = puVar9;
  }
  lVar10 = (longlong)param_2 - (longlong)param_1 >> 4;
  while (0 < lVar8) {
    local_58 = (undefined8 *)param_1[lVar8 * 2 + -2];
    puStack_50 = (undefined8 *)(param_1 + lVar8 * 2 + -2)[1];
    puVar9 = (undefined8 *)FUN_18008c7c0(param_1,lVar8 + -1,lVar10,&local_58,param_4);
    lVar8 = lVar8 + -1;
  }
  if (lVar10 < 2) {
    return puVar9;
  }
  do {
    if (1 < (longlong)param_2 - (longlong)param_1 >> 4) {
      local_58 = (undefined8 *)param_2[-2];
      puStack_50 = (undefined8 *)param_2[-1];
      uVar3 = *(undefined4 *)((longlong)param_1 + 4);
      uVar5 = *(undefined4 *)(param_1 + 1);
      uVar6 = *(undefined4 *)((longlong)param_1 + 0xc);
      *(undefined4 *)(param_2 + -2) = *(undefined4 *)param_1;
      *(undefined4 *)((longlong)param_2 + -0xc) = uVar3;
      *(undefined4 *)(param_2 + -1) = uVar5;
      *(undefined4 *)((longlong)param_2 + -4) = uVar6;
      FUN_18008c7c0(param_1,0,(longlong)(param_2 + -2) - (longlong)param_1 >> 4,&local_58,param_4);
    }
    param_2 = param_2 + -2;
  } while (0x1f < (longlong)param_2 - (longlong)param_1);
  return (undefined8 *)((longlong)param_2 - (longlong)param_1);
}



/* ===== 18008bc40 FUN_18008bc40 ===== */

void FUN_18008bc40(float *param_1,float *param_2,longlong param_3,undefined1 param_4)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  longlong lVar9;
  undefined8 local_res8;
  float *local_58;
  float *local_50;
  
  lVar3 = (longlong)param_2 - (longlong)param_1;
  while( true ) {
    if (lVar3 >> 3 < 0x21) {
      if (param_1 != param_2) {
        for (pfVar8 = param_1 + 2; pfVar8 != param_2; pfVar8 = pfVar8 + 2) {
          fVar1 = *pfVar8;
          fVar2 = pfVar8[1];
          if ((fVar1 < *param_1) || ((fVar1 == *param_1 && (fVar2 < param_1[1])))) {
            FUN_180540530(param_1 + 2,param_1,(longlong)pfVar8 - (longlong)param_1);
            *param_1 = fVar1;
            param_1[1] = fVar2;
          }
          else {
            pfVar7 = pfVar8;
            while( true ) {
              if ((pfVar7[-2] <= fVar1) && ((fVar1 != pfVar7[-2] || (pfVar7[-1] <= fVar2)))) break;
              *(undefined8 *)pfVar7 = *(undefined8 *)(pfVar7 + -2);
              pfVar7 = pfVar7 + -2;
            }
            *pfVar7 = fVar1;
            pfVar7[1] = fVar2;
          }
        }
      }
      return;
    }
    lVar3 = (longlong)param_2 - (longlong)param_1 >> 4;
    if (param_3 < 1) break;
    pfVar8 = param_1 + lVar3 * 2;
    lVar4 = (longlong)param_2 + (-8 - (longlong)param_1) >> 3;
    if (lVar4 < 0x29) {
      pfVar7 = param_2 + -2;
      pfVar6 = param_1;
    }
    else {
      lVar5 = lVar4 + 1 >> 3;
      lVar9 = lVar5 * 0x10;
      lVar4 = lVar5 * 8;
      pfVar6 = param_1 + lVar5 * 2;
      lVar5 = FUN_18008d340(param_1,pfVar6,param_1 + lVar5 * 4);
      FUN_18008d340((longlong)pfVar8 - lVar4,pfVar8,param_1 + (lVar5 + lVar3) * 2);
      pfVar7 = (float *)((longlong)param_2 + (-8 - lVar4));
      FUN_18008d340((longlong)param_2 + (-8 - lVar9),pfVar7,param_2 + -2);
    }
    FUN_18008d340(pfVar6,pfVar8,pfVar7);
    FUN_18008cdf0(&local_58,param_1,pfVar8,param_2);
    pfVar7 = local_50;
    pfVar8 = local_58;
    param_3 = (param_3 >> 1) + (param_3 >> 2);
    if ((longlong)local_58 - (longlong)param_1 >> 3 < (longlong)param_2 - (longlong)local_50 >> 3) {
      FUN_18008bc40(param_1,local_58,param_3,param_4);
      pfVar8 = param_2;
      param_1 = pfVar7;
    }
    else {
      FUN_18008bc40(local_50,param_2,param_3,param_4);
    }
    lVar3 = (longlong)pfVar8 - (longlong)param_1;
    param_2 = pfVar8;
  }
  lVar4 = (longlong)param_2 - (longlong)param_1 >> 3;
  while (0 < lVar3) {
    local_res8 = *(undefined8 *)(param_1 + lVar3 * 2 + -2);
    lVar3 = lVar3 + -1;
    FUN_18008cd00(param_1,lVar3);
  }
  if (lVar4 < 2) {
    return;
  }
  do {
    if (1 < (longlong)param_2 - (longlong)param_1 >> 3) {
      local_res8 = *(undefined8 *)(param_2 + -2);
      *(undefined8 *)(param_2 + -2) = *(undefined8 *)param_1;
      FUN_18008cd00(param_1,0,(longlong)(param_2 + -2) - (longlong)param_1 >> 3,&local_res8,param_4)
      ;
    }
    param_2 = param_2 + -2;
  } while (0xf < (longlong)param_2 - (longlong)param_1);
  return;
}



/* ===== 18008bf30 FUN_18008bf30 ===== */

void FUN_18008bf30(undefined8 param_1,longlong param_2,undefined8 param_3,ulonglong param_4)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  lVar4 = DAT_180ccfc38;
  lVar1 = DAT_180ccfc30;
  if (param_4 != 0) {
    if (param_4 <= (ulonglong)(DAT_180ccfc40 - DAT_180ccfc38 >> 3)) {
      uVar7 = DAT_180ccfc38 - param_2;
      lVar1 = param_4 * 8;
      if (param_4 < (ulonglong)((longlong)uVar7 >> 3)) {
        lVar6 = DAT_180ccfc38 + param_4 * -8;
        FUN_180540530(DAT_180ccfc38,lVar6,lVar1);
        DAT_180ccfc38 = lVar1 + lVar4;
        lVar6 = lVar6 - param_2;
        FUN_180540530(lVar4 - lVar6,param_2,lVar6);
        FUN_180540530(param_2,param_3,lVar1);
      }
      else {
        FUN_180540530(lVar1 + param_2,param_2,uVar7);
        DAT_180ccfc38 = (uVar7 & 0xfffffffffffffff8) + lVar1 + param_2;
        FUN_180540530(param_2,param_3,lVar1);
      }
      return;
    }
    lVar6 = DAT_180ccfc38 - DAT_180ccfc30;
    uVar7 = 0x1fffffffffffffff;
    if (0x1fffffffffffffffU - (lVar6 >> 3) < param_4) {
                    /* WARNING: Subroutine does not return */
      FUN_1800118d0();
    }
    uVar5 = param_4 + (lVar6 >> 3);
    uVar3 = DAT_180ccfc40 - DAT_180ccfc30 >> 3;
    if (uVar3 <= 0x1fffffffffffffff - (uVar3 >> 1)) {
      uVar3 = (uVar3 >> 1) + uVar3;
      uVar7 = uVar5;
      if (uVar5 <= uVar3) {
        uVar7 = uVar3;
      }
      if (0x1fffffffffffffff < uVar7) {
                    /* WARNING: Subroutine does not return */
        FUN_18000d840();
      }
    }
    lVar2 = FUN_18000fb70(uVar7 * 8);
    uVar3 = param_2 - lVar1;
    FUN_180540530((uVar3 & 0xfffffffffffffff8) + lVar2,param_3,param_4 * 8);
    if ((param_4 == 1) && (param_2 == lVar4)) {
      lVar4 = lVar2;
      param_2 = lVar1;
    }
    else {
      FUN_180540530(lVar2,lVar1,uVar3);
      lVar6 = lVar4 - param_2;
      lVar4 = lVar2 + (((longlong)uVar3 >> 3) + param_4) * 8;
    }
    FUN_180540530(lVar4,param_2,lVar6);
    FUN_18002b8d0(&DAT_180ccfc30,lVar2,uVar5,uVar7);
  }
  return;
}



/* ===== 18008c160 FUN_18008c160 ===== */

undefined8 * FUN_18008c160(undefined8 param_1,undefined8 *param_2)

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
  
  puVar6 = DAT_180ccfbf0;
  if (DAT_180ccfbf0 != DAT_180ccfbf8) {
    uVar5 = param_2[1];
    *DAT_180ccfbf0 = *param_2;
    puVar6[1] = uVar5;
    puVar6 = DAT_180ccfbf0;
    DAT_180ccfbf0 = DAT_180ccfbf0 + 2;
    return puVar6;
  }
  uVar14 = 0xfffffffffffffff;
  uVar15 = (longlong)DAT_180ccfbf0 - (longlong)DAT_180ccfbe8;
  lVar10 = (longlong)uVar15 >> 4;
  if (lVar10 == 0xfffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_18000fb10();
  }
  uVar11 = lVar10 + 1;
  uVar8 = (longlong)DAT_180ccfbf8 - (longlong)DAT_180ccfbe8 >> 4;
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
  if (puVar6 == DAT_180ccfbf0) {
    lVar10 = (longlong)DAT_180ccfbf0 - (longlong)DAT_180ccfbe8;
    puVar9 = puVar7;
    puVar6 = DAT_180ccfbe8;
  }
  else {
    FUN_180540530(puVar7,DAT_180ccfbe8,(longlong)puVar6 - (longlong)DAT_180ccfbe8);
    puVar9 = puVar16 + 2;
    lVar10 = (longlong)DAT_180ccfbf0 - (longlong)puVar6;
  }
  puVar12 = auStack_38;
  puVar13 = auStack_38;
  FUN_180540530(puVar9,puVar6,lVar10);
  if (DAT_180ccfbe8 == (undefined8 *)0x0) goto LAB_18008c2b1;
  puVar6 = DAT_180ccfbe8;
  if (((longlong)DAT_180ccfbf8 - (longlong)DAT_180ccfbe8 & 0xfffffffffffffff0U) < 0x1000) {
LAB_18008c2a9:
    puVar13 = puVar12;
  }
  else {
    puVar6 = (undefined8 *)DAT_180ccfbe8[-1];
    if (0x1f < (ulonglong)((longlong)DAT_180ccfbe8 + (-8 - (longlong)puVar6))) {
      pcVar1 = (code *)swi(0x29);
      puVar6 = (undefined8 *)(*pcVar1)(5);
      puVar12 = auStack_30;
      goto LAB_18008c2a9;
    }
  }
  *(undefined8 *)(puVar13 + -8) = 0x18008c2b1;
  thunk_FUN_1803d64e0(puVar6);
LAB_18008c2b1:
  DAT_180ccfbf0 = puVar7 + uVar11 * 2;
  DAT_180ccfbe8 = puVar7;
  DAT_180ccfbf8 = puVar7 + uVar14 * 2;
  return puVar16;
}



/* ===== 18008c300 FUN_18008c300 ===== */

undefined8 * FUN_18008c300(undefined8 param_1,longlong param_2,undefined8 *param_3)

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
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  longlong lVar17;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  
  lVar17 = (longlong)DAT_180ccfc18;
  uVar16 = 0x3e0f83e0f83e0f;
  lVar7 = ((longlong)DAT_180ccfc20 - (longlong)DAT_180ccfc18 >> 5) * 0xf83e0f83e0f83e1;
  if (lVar7 == 0x3e0f83e0f83e0f) {
                    /* WARNING: Subroutine does not return */
    FUN_1800118d0();
  }
  uVar1 = lVar7 + 1;
  uVar9 = ((longlong)DAT_180ccfc28 - (longlong)DAT_180ccfc18 >> 5) * 0xf83e0f83e0f83e1;
  if (uVar9 <= 0x3e0f83e0f83e0f - (uVar9 >> 1)) {
    uVar9 = (uVar9 >> 1) + uVar9;
    uVar16 = uVar1;
    if (uVar1 <= uVar9) {
      uVar16 = uVar9;
    }
    if (0x3e0f83e0f83e0f < uVar16) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  puVar8 = (undefined8 *)FUN_18000fb70(uVar16 * 0x420);
  lVar7 = 8;
  puVar15 = puVar8 + ((param_2 - lVar17) / 0x420) * 0x84;
  puVar11 = puVar15;
  do {
    puVar12 = param_3;
    puVar10 = puVar11;
    uVar6 = puVar12[1];
    *puVar10 = *puVar12;
    puVar10[1] = uVar6;
    uVar6 = puVar12[3];
    puVar10[2] = puVar12[2];
    puVar10[3] = uVar6;
    uVar6 = puVar12[5];
    puVar10[4] = puVar12[4];
    puVar10[5] = uVar6;
    uVar6 = puVar12[7];
    puVar10[6] = puVar12[6];
    puVar10[7] = uVar6;
    uVar6 = puVar12[9];
    puVar10[8] = puVar12[8];
    puVar10[9] = uVar6;
    uVar6 = puVar12[0xb];
    puVar10[10] = puVar12[10];
    puVar10[0xb] = uVar6;
    uVar6 = puVar12[0xd];
    puVar10[0xc] = puVar12[0xc];
    puVar10[0xd] = uVar6;
    uVar6 = puVar12[0xf];
    puVar10[0xe] = puVar12[0xe];
    puVar10[0xf] = uVar6;
    lVar7 = lVar7 + -1;
    puVar11 = puVar10 + 0x10;
    param_3 = puVar12 + 0x10;
  } while (lVar7 != 0);
  uVar3 = *(undefined4 *)((longlong)puVar12 + 0x84);
  uVar4 = *(undefined4 *)(puVar12 + 0x11);
  uVar5 = *(undefined4 *)((longlong)puVar12 + 0x8c);
  *(undefined4 *)(puVar10 + 0x10) = *(undefined4 *)(puVar12 + 0x10);
  *(undefined4 *)((longlong)puVar10 + 0x84) = uVar3;
  *(undefined4 *)(puVar10 + 0x11) = uVar4;
  *(undefined4 *)((longlong)puVar10 + 0x8c) = uVar5;
  uVar3 = *(undefined4 *)((longlong)puVar12 + 0x94);
  uVar4 = *(undefined4 *)(puVar12 + 0x13);
  uVar5 = *(undefined4 *)((longlong)puVar12 + 0x9c);
  *(undefined4 *)(puVar10 + 0x12) = *(undefined4 *)(puVar12 + 0x12);
  *(undefined4 *)((longlong)puVar10 + 0x94) = uVar3;
  *(undefined4 *)(puVar10 + 0x13) = uVar4;
  *(undefined4 *)((longlong)puVar10 + 0x9c) = uVar5;
  if ((undefined8 *)param_2 == DAT_180ccfc20) {
    lVar17 = (longlong)DAT_180ccfc20 - (longlong)DAT_180ccfc18;
    puVar11 = puVar8;
    param_2 = (longlong)DAT_180ccfc18;
  }
  else {
    FUN_180540530(puVar8,DAT_180ccfc18,param_2 - (longlong)DAT_180ccfc18);
    puVar11 = puVar15 + 0x84;
    lVar17 = (longlong)DAT_180ccfc20 - param_2;
  }
  puVar13 = auStack_38;
  puVar14 = auStack_38;
  FUN_180540530(puVar11,param_2,lVar17);
  if (DAT_180ccfc18 == (undefined8 *)0x0) goto LAB_18008c4d7;
  lVar17 = (longlong)DAT_180ccfc18;
  if ((ulonglong)(((longlong)DAT_180ccfc28 - (longlong)DAT_180ccfc18 >> 5) * 0x20) < 0x1000) {
LAB_18008c4cc:
    puVar14 = puVar13;
  }
  else {
    lVar17 = *(longlong *)((longlong)DAT_180ccfc18 + -8);
    if (0x1f < ((longlong)DAT_180ccfc18 - lVar17) - 8U) {
      lVar17 = 5;
      pcVar2 = (code *)swi(0x29);
      (*pcVar2)(5);
      puVar13 = auStack_30;
      goto LAB_18008c4cc;
    }
  }
  *(undefined8 *)(puVar14 + -8) = 0x18008c4d7;
  thunk_FUN_1803d64e0(lVar17);
LAB_18008c4d7:
  DAT_180ccfc18 = puVar8;
  DAT_180ccfc20 = puVar8 + uVar1 * 0x84;
  DAT_180ccfc28 = puVar8 + uVar16 * 0x84;
  return puVar15;
}



/* ===== 18008c530 FUN_18008c530 ===== */

longlong FUN_18008c530(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  
  lVar3 = *param_1;
  uVar12 = 0x38e38e38e38e38e;
  lVar8 = (param_1[1] - lVar3 >> 3) * -0x71c71c71c71c71c7;
  if (lVar8 == 0x38e38e38e38e38e) {
                    /* WARNING: Subroutine does not return */
    FUN_1800118d0();
  }
  uVar1 = lVar8 + 1;
  uVar10 = (param_1[2] - lVar3 >> 3) * -0x71c71c71c71c71c7;
  if (uVar10 <= 0x38e38e38e38e38e - (uVar10 >> 1)) {
    uVar10 = (uVar10 >> 1) + uVar10;
    uVar12 = uVar1;
    if (uVar1 <= uVar10) {
      uVar12 = uVar10;
    }
    if (0x38e38e38e38e38e < uVar12) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  lVar9 = FUN_18000fb70(uVar12 * 0x48);
  uVar7 = param_3[1];
  lVar3 = (param_2 - lVar3) / 0x48;
  puVar2 = (undefined8 *)(lVar9 + lVar3 * 0x48);
  *puVar2 = *param_3;
  puVar2[1] = uVar7;
  lVar3 = lVar9 + lVar3 * 0x48;
  uVar7 = param_3[3];
  *(undefined8 *)(lVar3 + 0x10) = param_3[2];
  *(undefined8 *)(lVar3 + 0x18) = uVar7;
  uVar7 = param_3[5];
  *(undefined8 *)(lVar3 + 0x20) = param_3[4];
  *(undefined8 *)(lVar3 + 0x28) = uVar7;
  uVar4 = *(undefined4 *)((longlong)param_3 + 0x34);
  uVar5 = *(undefined4 *)(param_3 + 7);
  uVar6 = *(undefined4 *)((longlong)param_3 + 0x3c);
  *(undefined4 *)(lVar3 + 0x30) = *(undefined4 *)(param_3 + 6);
  *(undefined4 *)(lVar3 + 0x34) = uVar4;
  *(undefined4 *)(lVar3 + 0x38) = uVar5;
  *(undefined4 *)(lVar3 + 0x3c) = uVar6;
  *(undefined8 *)(lVar3 + 0x40) = param_3[8];
  lVar8 = *param_1;
  if (param_2 == param_1[1]) {
    lVar13 = param_1[1] - lVar8;
    lVar11 = lVar9;
    param_2 = lVar8;
  }
  else {
    FUN_180540530(lVar9,lVar8,param_2 - lVar8);
    lVar11 = lVar3 + 0x48;
    lVar13 = param_1[1] - param_2;
  }
  FUN_180540530(lVar11,param_2,lVar13);
  FUN_18008d2a0(param_1,lVar9,uVar1,uVar12);
  return lVar3;
}



/* ===== 18008c6d0 FUN_18008c6d0 ===== */

void FUN_18008c6d0(longlong *param_1,ulonglong param_2)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  ulonglong uVar7;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  puVar4 = auStack_28;
  puVar5 = auStack_28;
  if (0x1fffffffffffffff < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1800118d0();
  }
  lVar2 = *param_1;
  uVar7 = param_1[2] - lVar2 >> 3;
  if (0x1fffffffffffffff - (uVar7 >> 1) < uVar7) {
    uVar7 = 0x1fffffffffffffff;
  }
  else {
    uVar7 = (uVar7 >> 1) + uVar7;
    if (uVar7 < param_2) {
      uVar7 = param_2;
    }
  }
  puVar6 = auStack_28;
  if (lVar2 == 0) goto LAB_18008c77d;
  lVar3 = lVar2;
  if ((ulonglong)((param_1[2] - lVar2 >> 3) * 8) < 0x1000) {
LAB_18008c765:
    puVar5 = puVar4;
  }
  else {
    lVar3 = *(longlong *)(lVar2 + -8);
    if (0x1f < (lVar2 - lVar3) - 8U) {
      lVar3 = 5;
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(5);
      puVar4 = auStack_20;
      goto LAB_18008c765;
    }
  }
  *(undefined8 *)(puVar5 + -8) = 0x18008c770;
  thunk_FUN_1803d64e0(lVar3);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  puVar6 = puVar5;
LAB_18008c77d:
  if (0x1fffffffffffffff < uVar7) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar6 + -8) = &UNK_18008c7b5;
    FUN_18000d840();
  }
  *(undefined8 *)(puVar6 + -8) = 0x18008c792;
  lVar2 = FUN_18000fb70(uVar7 * 8);
  *param_1 = lVar2;
  param_1[1] = lVar2;
  param_1[2] = lVar2 + uVar7 * 8;
  return;
}



/* ===== 18008c7c0 FUN_18008c7c0 ===== */

void FUN_18008c7c0(longlong param_1,longlong param_2,ulonglong param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  float *pfVar4;
  float fVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar7 = (longlong)(param_3 - 1) >> 1;
  lVar8 = param_2;
  while (lVar8 < lVar7) {
    fVar5 = *(float *)(param_1 + 0x18 + lVar8 * 0x20);
    pfVar4 = (float *)(param_1 + 0x28 + lVar8 * 0x20);
    lVar1 = (ulonglong)(fVar5 < *pfVar4 || fVar5 == *pfVar4) + 1 + lVar8 * 2;
    puVar2 = (undefined8 *)(param_1 + lVar1 * 0x10);
    uVar6 = puVar2[1];
    puVar3 = (undefined8 *)(param_1 + lVar8 * 0x10);
    *puVar3 = *puVar2;
    puVar3[1] = uVar6;
    lVar8 = lVar1;
  }
  if ((lVar8 == lVar7) && ((param_3 & 1) == 0)) {
    puVar3 = (undefined8 *)(param_1 + -0x10 + param_3 * 0x10);
    uVar6 = puVar3[1];
    puVar2 = (undefined8 *)(param_1 + lVar8 * 0x10);
    *puVar2 = *puVar3;
    puVar2[1] = uVar6;
    lVar8 = param_3 - 1;
  }
  if (param_2 < lVar8) {
    fVar5 = *(float *)(param_4 + 1);
    do {
      lVar7 = lVar8 + -1 >> 1;
      pfVar4 = (float *)(param_1 + 8 + lVar7 * 0x10);
      if (fVar5 < *pfVar4 || fVar5 == *pfVar4) break;
      puVar2 = (undefined8 *)(param_1 + lVar7 * 0x10);
      uVar6 = puVar2[1];
      puVar3 = (undefined8 *)(param_1 + lVar8 * 0x10);
      *puVar3 = *puVar2;
      puVar3[1] = uVar6;
      lVar8 = lVar7;
    } while (param_2 < lVar7);
  }
  uVar6 = param_4[1];
  puVar2 = (undefined8 *)(param_1 + lVar8 * 0x10);
  *puVar2 = *param_4;
  puVar2[1] = uVar6;
  return;
}



/* ===== 18008c890 FUN_18008c890 ===== */

void FUN_18008c890(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  float fVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  fVar1 = *(float *)(param_1 + 1);
  lVar5 = (longlong)param_3 - (longlong)param_1 >> 4;
  if (lVar5 < 0x29) {
    if (*(float *)(param_2 + 1) <= fVar1 && fVar1 != *(float *)(param_2 + 1)) {
      uVar2 = param_1[1];
      uVar3 = *param_2;
      uVar4 = param_2[1];
      *param_2 = *param_1;
      param_2[1] = uVar2;
      *param_1 = uVar3;
      param_1[1] = uVar4;
    }
    if (*(float *)(param_3 + 1) <= *(float *)(param_2 + 1) &&
        *(float *)(param_2 + 1) != *(float *)(param_3 + 1)) {
      uVar2 = param_2[1];
      uVar3 = *param_3;
      uVar4 = param_3[1];
      *param_3 = *param_2;
      param_3[1] = uVar2;
      *param_2 = uVar3;
      param_2[1] = uVar4;
      if (*(float *)(param_2 + 1) <= *(float *)(param_1 + 1) &&
          *(float *)(param_1 + 1) != *(float *)(param_2 + 1)) {
        uVar2 = param_1[1];
        *param_2 = *param_1;
        param_2[1] = uVar2;
        *param_1 = uVar3;
        param_1[1] = uVar4;
      }
    }
  }
  else {
    lVar5 = lVar5 + 1 >> 3;
    if (*(float *)(param_1 + lVar5 * 2 + 1) <= fVar1 && fVar1 != *(float *)(param_1 + lVar5 * 2 + 1)
       ) {
      uVar2 = param_1[1];
      uVar3 = param_1[lVar5 * 2];
      uVar4 = (param_1 + lVar5 * 2)[1];
      param_1[lVar5 * 2] = *param_1;
      (param_1 + lVar5 * 2)[1] = uVar2;
      *param_1 = uVar3;
      param_1[1] = uVar4;
    }
    if (*(float *)(param_1 + lVar5 * 4 + 1) <= *(float *)(param_1 + lVar5 * 2 + 1) &&
        *(float *)(param_1 + lVar5 * 2 + 1) != *(float *)(param_1 + lVar5 * 4 + 1)) {
      uVar2 = (param_1 + lVar5 * 2)[1];
      uVar3 = param_1[lVar5 * 4];
      uVar4 = (param_1 + lVar5 * 4)[1];
      param_1[lVar5 * 4] = param_1[lVar5 * 2];
      (param_1 + lVar5 * 4)[1] = uVar2;
      param_1[lVar5 * 2] = uVar3;
      (param_1 + lVar5 * 2)[1] = uVar4;
      if (*(float *)(param_1 + lVar5 * 2 + 1) <= *(float *)(param_1 + 1) &&
          *(float *)(param_1 + 1) != *(float *)(param_1 + lVar5 * 2 + 1)) {
        uVar2 = param_1[1];
        param_1[lVar5 * 2] = *param_1;
        (param_1 + lVar5 * 2)[1] = uVar2;
        *param_1 = uVar3;
        param_1[1] = uVar4;
      }
    }
    puVar6 = param_2 + lVar5 * -2;
    if (*(float *)(param_2 + 1) <= *(float *)(puVar6 + 1) &&
        *(float *)(puVar6 + 1) != *(float *)(param_2 + 1)) {
      uVar2 = puVar6[1];
      uVar3 = *param_2;
      uVar4 = param_2[1];
      *param_2 = *puVar6;
      param_2[1] = uVar2;
      *puVar6 = uVar3;
      puVar6[1] = uVar4;
    }
    if (*(float *)(param_2 + lVar5 * 2 + 1) <= *(float *)(param_2 + 1) &&
        *(float *)(param_2 + 1) != *(float *)(param_2 + lVar5 * 2 + 1)) {
      uVar2 = param_2[1];
      uVar3 = param_2[lVar5 * 2];
      uVar4 = (param_2 + lVar5 * 2)[1];
      param_2[lVar5 * 2] = *param_2;
      (param_2 + lVar5 * 2)[1] = uVar2;
      *param_2 = uVar3;
      param_2[1] = uVar4;
      if (*(float *)(param_2 + 1) <= *(float *)(puVar6 + 1) &&
          *(float *)(puVar6 + 1) != *(float *)(param_2 + 1)) {
        uVar2 = puVar6[1];
        *param_2 = *puVar6;
        param_2[1] = uVar2;
        *puVar6 = uVar3;
        puVar6[1] = uVar4;
      }
    }
    puVar7 = param_3 + lVar5 * -4;
    puVar6 = param_3 + lVar5 * -2;
    if (*(float *)(puVar6 + 1) <= *(float *)(puVar7 + 1) &&
        *(float *)(puVar7 + 1) != *(float *)(puVar6 + 1)) {
      uVar2 = puVar7[1];
      uVar3 = *puVar6;
      uVar4 = puVar6[1];
      *puVar6 = *puVar7;
      puVar6[1] = uVar2;
      *puVar7 = uVar3;
      puVar7[1] = uVar4;
    }
    if (*(float *)(param_3 + 1) <= *(float *)(puVar6 + 1) &&
        *(float *)(puVar6 + 1) != *(float *)(param_3 + 1)) {
      uVar2 = puVar6[1];
      uVar3 = *param_3;
      uVar4 = param_3[1];
      *param_3 = *puVar6;
      param_3[1] = uVar2;
      *puVar6 = uVar3;
      puVar6[1] = uVar4;
      if (*(float *)(puVar6 + 1) <= *(float *)(puVar7 + 1) &&
          *(float *)(puVar7 + 1) != *(float *)(puVar6 + 1)) {
        uVar2 = puVar7[1];
        *puVar6 = *puVar7;
        puVar6[1] = uVar2;
        *puVar7 = uVar3;
        puVar7[1] = uVar4;
      }
    }
    if (*(float *)(param_2 + 1) <= *(float *)(param_1 + lVar5 * 2 + 1) &&
        *(float *)(param_1 + lVar5 * 2 + 1) != *(float *)(param_2 + 1)) {
      uVar2 = (param_1 + lVar5 * 2)[1];
      uVar3 = *param_2;
      uVar4 = param_2[1];
      *param_2 = param_1[lVar5 * 2];
      param_2[1] = uVar2;
      param_1[lVar5 * 2] = uVar3;
      (param_1 + lVar5 * 2)[1] = uVar4;
    }
    if (*(float *)(puVar6 + 1) <= *(float *)(param_2 + 1) &&
        *(float *)(param_2 + 1) != *(float *)(puVar6 + 1)) {
      uVar2 = param_2[1];
      uVar3 = *puVar6;
      uVar4 = puVar6[1];
      *puVar6 = *param_2;
      puVar6[1] = uVar2;
      *param_2 = uVar3;
      param_2[1] = uVar4;
      if (*(float *)(param_2 + 1) <= *(float *)(param_1 + lVar5 * 2 + 1) &&
          *(float *)(param_1 + lVar5 * 2 + 1) != *(float *)(param_2 + 1)) {
        uVar2 = (param_1 + lVar5 * 2)[1];
        *param_2 = param_1[lVar5 * 2];
        param_2[1] = uVar2;
        param_1[lVar5 * 2] = uVar3;
        (param_1 + lVar5 * 2)[1] = uVar4;
        return;
      }
    }
  }
  return;
}



/* ===== 18008ca50 FUN_18008ca50 ===== */

undefined8 *
FUN_18008ca50(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  puVar5 = param_3 + 2;
  for (; param_2 < param_3; param_3 = param_3 + -2) {
    if ((*(float *)(param_3 + -1) < *(float *)(param_3 + 1)) ||
       (*(float *)(param_3 + 1) < *(float *)(param_3 + -1))) break;
  }
  if (puVar5 < param_4) {
    do {
      if ((*(float *)(puVar5 + 1) < *(float *)(param_3 + 1)) ||
         (*(float *)(param_3 + 1) < *(float *)(puVar5 + 1))) break;
      puVar5 = puVar5 + 2;
    } while (puVar5 < param_4);
  }
  puVar7 = param_3;
  puVar8 = puVar5;
LAB_18008cac0:
  puVar4 = puVar7;
  puVar7 = puVar5;
  if (puVar5 < param_4) {
    if (0x3f < (ulonglong)((longlong)param_4 + (0xf - (longlong)puVar5))) {
      do {
        if (*(float *)(puVar5 + 1) <= *(float *)(param_3 + 1)) {
          puVar7 = puVar5;
          if (*(float *)(puVar5 + 1) < *(float *)(param_3 + 1)) goto joined_r0x00018008cbfa;
          if (puVar8 != puVar5) {
            uVar1 = puVar5[1];
            uVar2 = *puVar8;
            uVar3 = puVar8[1];
            *puVar8 = *puVar5;
            puVar8[1] = uVar1;
            *puVar5 = uVar2;
            puVar5[1] = uVar3;
          }
          puVar8 = puVar8 + 2;
        }
        if (*(float *)(puVar5 + 3) <= *(float *)(param_3 + 1)) {
          puVar7 = puVar5 + 2;
          if (*(float *)(puVar5 + 3) < *(float *)(param_3 + 1)) goto joined_r0x00018008cbfa;
          if (puVar8 != puVar7) {
            uVar1 = puVar5[3];
            uVar2 = *puVar8;
            uVar3 = puVar8[1];
            *puVar8 = *puVar7;
            puVar8[1] = uVar1;
            *puVar7 = uVar2;
            puVar5[3] = uVar3;
          }
          puVar8 = puVar8 + 2;
        }
        if (*(float *)(puVar5 + 5) <= *(float *)(param_3 + 1)) {
          puVar7 = puVar5 + 4;
          if (*(float *)(puVar5 + 5) < *(float *)(param_3 + 1)) goto joined_r0x00018008cbfa;
          if (puVar8 != puVar7) {
            uVar1 = puVar5[5];
            uVar2 = *puVar8;
            uVar3 = puVar8[1];
            *puVar8 = *puVar7;
            puVar8[1] = uVar1;
            *puVar7 = uVar2;
            puVar5[5] = uVar3;
          }
          puVar8 = puVar8 + 2;
        }
        if (*(float *)(puVar5 + 7) <= *(float *)(param_3 + 1)) {
          puVar7 = puVar5 + 6;
          if (*(float *)(puVar5 + 7) < *(float *)(param_3 + 1)) goto joined_r0x00018008cbfa;
          if (puVar8 != puVar7) {
            uVar1 = puVar5[7];
            uVar2 = *puVar8;
            uVar3 = puVar8[1];
            *puVar8 = *puVar7;
            puVar8[1] = uVar1;
            *puVar7 = uVar2;
            puVar5[7] = uVar3;
          }
          puVar8 = puVar8 + 2;
        }
        puVar5 = puVar5 + 8;
      } while (puVar5 < param_4 + -6);
    }
    for (; puVar7 = puVar5, puVar5 < param_4; puVar5 = puVar5 + 2) {
      if (*(float *)(puVar5 + 1) <= *(float *)(param_3 + 1)) {
        if (*(float *)(puVar5 + 1) < *(float *)(param_3 + 1)) break;
        if (puVar8 != puVar5) {
          uVar1 = puVar5[1];
          uVar2 = *puVar8;
          uVar3 = puVar8[1];
          *puVar8 = *puVar5;
          puVar8[1] = uVar1;
          *puVar5 = uVar2;
          puVar5[1] = uVar3;
        }
        puVar8 = puVar8 + 2;
      }
    }
  }
joined_r0x00018008cbfa:
  do {
    puVar5 = puVar7;
    if (puVar4 <= param_2) break;
    if (*(float *)(param_3 + 1) <= *(float *)(puVar4 + -1)) {
      if (*(float *)(param_3 + 1) < *(float *)(puVar4 + -1)) break;
      if (puVar4 != param_3) {
        uVar1 = puVar4[-1];
        uVar2 = param_3[-2];
        uVar3 = param_3[-1];
        param_3[-2] = puVar4[-2];
        param_3[-1] = uVar1;
        puVar4[-2] = uVar2;
        puVar4[-1] = uVar3;
      }
      param_3 = param_3 + -2;
    }
    puVar4 = puVar4 + -2;
    puVar7 = puVar5;
  } while( true );
  if (puVar4 == param_2) {
    if (puVar5 == param_4) {
      *param_1 = param_3;
      param_1[1] = puVar8;
      return param_1;
    }
    if (puVar8 != puVar5) {
      uVar1 = puVar8[1];
      uVar2 = *param_3;
      uVar3 = param_3[1];
      *param_3 = *puVar8;
      param_3[1] = uVar1;
      *puVar8 = uVar2;
      puVar8[1] = uVar3;
    }
    uVar1 = puVar5[1];
    uVar2 = *param_3;
    uVar3 = param_3[1];
    *param_3 = *puVar5;
    param_3[1] = uVar1;
    *puVar5 = uVar2;
    puVar5[1] = uVar3;
    puVar5 = puVar5 + 2;
    param_3 = param_3 + 2;
    puVar7 = puVar4;
    puVar8 = puVar8 + 2;
  }
  else {
    puVar7 = puVar4 + -2;
    if (puVar5 == param_4) {
      puVar6 = param_3 + -2;
      if (param_3 != puVar4) {
        uVar1 = param_3[-1];
        uVar2 = *puVar7;
        uVar3 = puVar4[-1];
        *puVar7 = *puVar6;
        puVar4[-1] = uVar1;
        *puVar6 = uVar2;
        param_3[-1] = uVar3;
      }
      uVar1 = puVar8[-1];
      uVar2 = *puVar6;
      uVar3 = param_3[-1];
      *puVar6 = puVar8[-2];
      param_3[-1] = uVar1;
      puVar8[-2] = uVar2;
      puVar8[-1] = uVar3;
      param_3 = puVar6;
      puVar8 = puVar8 + -2;
    }
    else {
      uVar1 = *puVar5;
      uVar2 = puVar5[1];
      uVar3 = puVar4[-1];
      *puVar5 = *puVar7;
      puVar5[1] = uVar3;
      puVar5 = puVar5 + 2;
      *puVar7 = uVar1;
      puVar4[-1] = uVar2;
    }
  }
  goto LAB_18008cac0;
}



/* ===== 18008cd00 FUN_18008cd00 ===== */

void FUN_18008cd00(longlong param_1,longlong param_2,ulonglong param_3,float *param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar5 = (longlong)(param_3 - 1) >> 1;
  lVar6 = param_2;
  while (lVar6 < lVar5) {
    fVar2 = *(float *)(param_1 + 8 + lVar6 * 0x10);
    fVar3 = *(float *)(param_1 + 0x10 + lVar6 * 0x10);
    if ((fVar3 < fVar2) ||
       ((fVar3 == fVar2 &&
        (fVar2 = *(float *)(param_1 + 0xc + lVar6 * 0x10),
        pfVar1 = (float *)(param_1 + 0x14 + lVar6 * 0x10), *pfVar1 <= fVar2 && fVar2 != *pfVar1))))
    {
      lVar4 = 1;
    }
    else {
      lVar4 = 2;
    }
    lVar4 = lVar4 + lVar6 * 2;
    *(undefined8 *)(param_1 + lVar6 * 8) = *(undefined8 *)(param_1 + lVar4 * 8);
    lVar6 = lVar4;
  }
  if ((lVar6 == lVar5) && ((param_3 & 1) == 0)) {
    *(undefined8 *)(param_1 + lVar6 * 8) = *(undefined8 *)(param_1 + -8 + param_3 * 8);
    lVar6 = param_3 - 1;
  }
  if (param_2 < lVar6) {
    fVar2 = *param_4;
    do {
      lVar5 = lVar6 + -1 >> 1;
      fVar3 = *(float *)(param_1 + lVar5 * 8);
      if ((fVar2 <= fVar3) &&
         ((fVar3 != fVar2 ||
          (pfVar1 = (float *)(param_1 + 4 + lVar5 * 8),
          param_4[1] < *pfVar1 || param_4[1] == *pfVar1)))) break;
      *(undefined8 *)(param_1 + lVar6 * 8) = *(undefined8 *)(param_1 + lVar5 * 8);
      lVar6 = lVar5;
    } while (param_2 < lVar5);
  }
  *(undefined8 *)(param_1 + lVar6 * 8) = *(undefined8 *)param_4;
  return;
}



/* ===== 18008cdf0 FUN_18008cdf0 ===== */

undefined8 * FUN_18008cdf0(undefined8 *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  
  pfVar4 = param_3 + 2;
  while (pfVar5 = param_3, param_2 < pfVar5) {
    fVar1 = pfVar5[-2];
    fVar2 = *pfVar5;
    if ((fVar1 < fVar2) ||
       ((((fVar1 == fVar2 && (pfVar5[-1] <= pfVar5[1] && pfVar5[1] != pfVar5[-1])) ||
         (fVar2 < fVar1)) ||
        ((param_3 = pfVar5 + -2, fVar2 == fVar1 &&
         (pfVar5[1] <= pfVar5[-1] && pfVar5[-1] != pfVar5[1])))))) break;
  }
  if (pfVar4 < param_4) {
    fVar1 = *pfVar5;
    while (((fVar2 = *pfVar4, fVar1 <= fVar2 &&
            ((fVar2 != fVar1 || (pfVar5[1] < pfVar4[1] || pfVar5[1] == pfVar4[1])))) &&
           (fVar2 <= fVar1))) {
      if (((fVar1 == fVar2) && (pfVar5[1] <= pfVar4[1] && pfVar4[1] != pfVar5[1])) ||
         (pfVar4 = pfVar4 + 2, param_4 <= pfVar4)) break;
    }
  }
  pfVar6 = pfVar5;
  pfVar8 = pfVar4;
  do {
    pfVar7 = pfVar4;
    if (pfVar4 < param_4) {
      if (0x1f < (ulonglong)((longlong)param_4 + (7 - (longlong)pfVar4))) {
        do {
          fVar1 = *pfVar4;
          fVar2 = *pfVar6;
          if ((fVar1 <= fVar2) &&
             ((fVar2 != fVar1 || (pfVar4[1] < pfVar6[1] || pfVar4[1] == pfVar6[1])))) {
            pfVar7 = pfVar4;
            if ((fVar1 < fVar2) ||
               ((fVar1 == fVar2 && (pfVar4[1] <= pfVar6[1] && pfVar6[1] != pfVar4[1]))))
            goto joined_r0x00018008d10b;
            if (pfVar8 != pfVar4) {
              fVar1 = *pfVar8;
              fVar2 = pfVar8[1];
              *(undefined8 *)pfVar8 = *(undefined8 *)pfVar4;
              *pfVar4 = fVar1;
              pfVar4[1] = fVar2;
            }
            pfVar8 = pfVar8 + 2;
          }
          pfVar3 = pfVar6 + 1;
          fVar1 = pfVar4[2];
          pfVar7 = pfVar4 + 2;
          fVar2 = *pfVar6;
          if ((fVar1 <= fVar2) &&
             ((fVar2 != fVar1 || (pfVar4[3] < *pfVar3 || pfVar4[3] == *pfVar3)))) {
            if ((fVar1 < fVar2) ||
               ((fVar1 == fVar2 && (pfVar4[3] <= *pfVar3 && *pfVar3 != pfVar4[3]))))
            goto joined_r0x00018008d10b;
            if (pfVar8 != pfVar7) {
              fVar1 = *pfVar8;
              fVar2 = pfVar8[1];
              *(undefined8 *)pfVar8 = *(undefined8 *)pfVar7;
              *pfVar7 = fVar1;
              pfVar4[3] = fVar2;
            }
            pfVar8 = pfVar8 + 2;
          }
          fVar1 = pfVar4[4];
          pfVar7 = pfVar4 + 4;
          fVar2 = *pfVar6;
          if ((fVar1 <= fVar2) &&
             ((fVar2 != fVar1 || (pfVar4[5] < *pfVar3 || pfVar4[5] == *pfVar3)))) {
            if ((fVar1 < fVar2) ||
               ((fVar1 == fVar2 && (pfVar4[5] <= *pfVar3 && *pfVar3 != pfVar4[5]))))
            goto joined_r0x00018008d10b;
            if (pfVar8 != pfVar7) {
              fVar1 = *pfVar8;
              fVar2 = pfVar8[1];
              *(undefined8 *)pfVar8 = *(undefined8 *)pfVar7;
              *pfVar7 = fVar1;
              pfVar4[5] = fVar2;
            }
            pfVar8 = pfVar8 + 2;
          }
          fVar1 = pfVar4[6];
          pfVar7 = pfVar4 + 6;
          fVar2 = *pfVar6;
          if ((fVar1 <= fVar2) &&
             ((fVar2 != fVar1 || (pfVar4[7] < *pfVar3 || pfVar4[7] == *pfVar3)))) {
            if ((fVar1 < fVar2) ||
               ((fVar1 == fVar2 && (pfVar4[7] <= *pfVar3 && *pfVar3 != pfVar4[7]))))
            goto joined_r0x00018008d10b;
            if (pfVar8 != pfVar7) {
              fVar1 = *pfVar8;
              fVar2 = pfVar8[1];
              *(undefined8 *)pfVar8 = *(undefined8 *)pfVar7;
              *pfVar7 = fVar1;
              pfVar4[7] = fVar2;
            }
            pfVar8 = pfVar8 + 2;
          }
          pfVar4 = pfVar4 + 8;
        } while (pfVar4 < param_4 + -6);
      }
      for (; pfVar7 = pfVar4, pfVar4 < param_4; pfVar4 = pfVar4 + 2) {
        fVar1 = *pfVar4;
        fVar2 = *pfVar6;
        if ((fVar1 <= fVar2) &&
           ((fVar2 != fVar1 || (pfVar4[1] < pfVar6[1] || pfVar4[1] == pfVar6[1])))) {
          if ((fVar1 < fVar2) ||
             ((fVar1 == fVar2 && (pfVar4[1] <= pfVar6[1] && pfVar6[1] != pfVar4[1])))) break;
          if (pfVar8 != pfVar4) {
            fVar1 = *pfVar8;
            fVar2 = pfVar8[1];
            *(undefined8 *)pfVar8 = *(undefined8 *)pfVar4;
            *pfVar4 = fVar1;
            pfVar4[1] = fVar2;
          }
          pfVar8 = pfVar8 + 2;
        }
      }
    }
joined_r0x00018008d10b:
    pfVar4 = pfVar7;
    pfVar3 = pfVar5;
    if (param_2 < pfVar3) {
      fVar1 = pfVar3[-2];
      pfVar5 = pfVar3 + -2;
      fVar2 = *pfVar6;
      pfVar7 = pfVar4;
      if ((fVar2 <= fVar1) &&
         ((fVar1 != fVar2 || (pfVar6[1] < pfVar3[-1] || pfVar6[1] == pfVar3[-1])))) {
        if ((fVar2 < fVar1) ||
           ((fVar2 == fVar1 && (pfVar6[1] <= pfVar3[-1] && pfVar3[-1] != pfVar6[1]))))
        goto LAB_18008d181;
        if (pfVar3 != pfVar6) {
          fVar1 = pfVar6[-2];
          fVar2 = pfVar6[-1];
          *(undefined8 *)(pfVar6 + -2) = *(undefined8 *)pfVar5;
          *pfVar5 = fVar1;
          pfVar3[-1] = fVar2;
        }
        pfVar6 = pfVar6 + -2;
      }
      goto joined_r0x00018008d10b;
    }
LAB_18008d181:
    if (pfVar3 == param_2) {
      if (pfVar4 == param_4) {
        *param_1 = pfVar6;
        param_1[1] = pfVar8;
        return param_1;
      }
      if (pfVar8 != pfVar4) {
        fVar1 = *pfVar6;
        fVar2 = pfVar6[1];
        *(undefined8 *)pfVar6 = *(undefined8 *)pfVar8;
        *pfVar8 = fVar1;
        pfVar8[1] = fVar2;
      }
      fVar1 = *pfVar6;
      fVar2 = pfVar6[1];
      *(undefined8 *)pfVar6 = *(undefined8 *)pfVar4;
      *pfVar4 = fVar1;
      pfVar4[1] = fVar2;
      pfVar4 = pfVar4 + 2;
      pfVar5 = pfVar3;
      pfVar6 = pfVar6 + 2;
      pfVar8 = pfVar8 + 2;
    }
    else {
      pfVar5 = pfVar3 + -2;
      if (pfVar4 == param_4) {
        pfVar7 = pfVar6 + -2;
        if (pfVar6 != pfVar3) {
          fVar1 = *pfVar5;
          fVar2 = pfVar3[-1];
          *(undefined8 *)pfVar5 = *(undefined8 *)pfVar7;
          *pfVar7 = fVar1;
          pfVar6[-1] = fVar2;
        }
        fVar1 = *pfVar7;
        fVar2 = pfVar6[-1];
        *(undefined8 *)pfVar7 = *(undefined8 *)(pfVar8 + -2);
        pfVar8[-2] = fVar1;
        pfVar8[-1] = fVar2;
        pfVar6 = pfVar7;
        pfVar8 = pfVar8 + -2;
      }
      else {
        fVar1 = *pfVar4;
        fVar2 = pfVar4[1];
        *(undefined8 *)pfVar4 = *(undefined8 *)pfVar5;
        pfVar4 = pfVar4 + 2;
        *pfVar5 = fVar1;
        pfVar3[-1] = fVar2;
      }
    }
  } while( true );
}



/* ===== 18008d2a0 FUN_18008d2a0 ===== */

void FUN_18008d2a0(ulonglong *param_1,ulonglong param_2,longlong param_3,longlong param_4)

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
  if (uVar5 == 0) goto LAB_18008d312;
  uVar2 = uVar5;
  if ((ulonglong)(((longlong)(param_1[2] - uVar5) >> 3) * 8) < 0x1000) {
LAB_18008d30a:
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
      goto LAB_18008d30a;
    }
  }
  *(undefined8 *)(puVar4 + -8) = 0x18008d312;
  thunk_FUN_1803d64e0(uVar2);
LAB_18008d312:
  *param_1 = param_2;
  param_1[1] = param_2 + param_3 * 0x48;
  param_1[2] = param_2 + param_4 * 0x48;
  return;
}



/* ===== 18008d340 FUN_18008d340 ===== */

void FUN_18008d340(float *param_1,float *param_2,float *param_3)

{
  undefined8 uVar1;
  
  if ((*param_2 < *param_1) ||
     ((*param_2 == *param_1 && (param_2[1] <= param_1[1] && param_1[1] != param_2[1])))) {
    uVar1 = *(undefined8 *)param_2;
    *(undefined8 *)param_2 = *(undefined8 *)param_1;
    *(undefined8 *)param_1 = uVar1;
  }
  if ((*param_3 < *param_2) ||
     ((*param_3 == *param_2 && (param_3[1] <= param_2[1] && param_2[1] != param_3[1])))) {
    uVar1 = *(undefined8 *)param_3;
    *(undefined8 *)param_3 = *(undefined8 *)param_2;
    *(undefined8 *)param_2 = uVar1;
    if ((*param_2 < *param_1) ||
       ((*param_2 == *param_1 && (param_2[1] <= param_1[1] && param_1[1] != param_2[1])))) {
      *(undefined8 *)param_2 = *(undefined8 *)param_1;
      *(undefined8 *)param_1 = uVar1;
    }
  }
  return;
}



/* ===== 18008d3d0 FUN_18008d3d0 ===== */

undefined1 FUN_18008d3d0(void)

{
  (*DAT_180962138)();
  return 1;
}



/* ===== 18008d3f0 FUN_18008d3f0 ===== */

undefined4 FUN_18008d3f0(longlong param_1,char *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  char *_Str1;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  
  if ((param_1 != 0) && (lVar2 = FUN_18000f3a0(param_1 + 0x10), lVar2 != 0)) {
    lVar2 = FUN_18000f3a0((ulonglong)DAT_18096196c + lVar2);
    iVar5 = 0;
    if (lVar2 != 0) {
      uVar6 = (ulonglong)DAT_180961974;
      uVar4 = (ulonglong)DAT_180961970;
      do {
        if (0x1f < iVar5) {
          return 0;
        }
        if ((((lVar2 != 0) && (lVar3 = FUN_18000f3a0(lVar2 + uVar4), lVar3 != 0)) &&
            (_Str1 = (char *)FUN_18000f3a0(lVar3 + uVar6), _Str1 + -0x10000 < (char *)0x7ffffffeffff
            )) && (iVar1 = strcmp(_Str1,param_2), iVar1 == 0)) {
          return 1;
        }
        lVar2 = FUN_18000f3a0(lVar2 + 0x60);
        if (lVar2 == 0) {
          return 0;
        }
        lVar2 = FUN_18000f3a0(lVar2 + 0x18);
        iVar5 = iVar5 + 1;
      } while (lVar2 != 0);
    }
  }
  return 0;
}



/* ===== 18008d4d0 FUN_18008d4d0 ===== */

bool FUN_18008d4d0(longlong *param_1,longlong *param_2,longlong param_3)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  float *pfVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  uint uVar13;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
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
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 local_d8 [16];
  undefined1 local_c8 [176];
  
  if (((DAT_180ccfe90 == 0) || (DAT_180ccfe94 == 0)) ||
     (uVar8 = (ulonglong)DAT_180ccfea8, DAT_180ccfea8 == 0)) {
    bVar4 = false;
  }
  else {
    uVar7 = (ulonglong)DAT_180ccfe90;
    lVar6 = *param_1;
    pfVar5 = (float *)FUN_1800111b0(local_d8,uVar7 + lVar6 + (ulonglong)DAT_180ccfe94);
    fVar20 = *pfVar5;
    fVar22 = pfVar5[1];
    fVar1 = pfVar5[2];
    pfVar5 = (float *)FUN_1800111b0(local_d8,uVar7 + lVar6 + uVar8);
    uVar3 = DAT_180ca09f8;
    uVar2 = DAT_180ca0950;
    uVar7 = (ulonglong)DAT_180ca0950;
    uVar8 = (ulonglong)DAT_180ca09f8;
    fVar10 = *pfVar5;
    fVar11 = pfVar5[1];
    fVar12 = pfVar5[2];
    if (((*param_1 == 0) || (DAT_180ca09f8 == 0)) ||
       ((lVar6 = FUN_18000f3a0(*param_1 + uVar8), lVar6 == 0 || (uVar2 == 0)))) {
      fVar24 = 0.0;
      fVar18 = 0.0;
      fVar25 = 0.0;
    }
    else {
      pfVar5 = (float *)FUN_1800111b0(local_d8,lVar6 + uVar7);
      fVar24 = *pfVar5;
      fVar18 = pfVar5[1];
      fVar25 = pfVar5[2];
    }
    fVar24 = (fVar10 + fVar20) * DAT_1808ac1f4 + fVar24;
    fVar18 = (fVar11 + fVar22) * DAT_1808ac1f4 + fVar18;
    fVar25 = (fVar12 + fVar1) * DAT_1808ac1f4 + fVar25;
    fVar22 = (*(float *)(param_3 + 0x10) * DAT_1808ac680) / DAT_1808acb58;
    fVar20 = (*(float *)(param_3 + 0x14) * DAT_1808ac680) / DAT_1808acb58;
    fVar10 = (float)FUN_180517200(fVar22);
    fVar11 = (float)FUN_180517200(fVar20);
    fVar12 = (float)FUN_180517790(fVar20);
    uVar13 = FUN_180517790(fVar22);
    uVar9 = (ulonglong)DAT_180ccfeac;
    fVar20 = *(float *)(param_3 + 8);
    fVar22 = *(float *)(param_3 + 4);
    fVar26 = (float)(uVar13 ^ DAT_1808adec0);
    lVar6 = *param_2;
    fVar1 = *(float *)(param_3 + 0xc);
    if (DAT_180ccfeac == 0) {
      if ((((lVar6 == 0) || (uVar3 == 0)) || (lVar6 = FUN_18000f3a0(lVar6 + uVar8), lVar6 == 0)) ||
         (uVar2 == 0)) {
        fVar23 = 0.0;
        fVar21 = 0.0;
        fVar19 = 0.0;
      }
      else {
        pfVar5 = (float *)FUN_1800111b0(local_d8,lVar6 + uVar7);
        fVar23 = *pfVar5;
        fVar21 = pfVar5[1];
        fVar19 = pfVar5[2];
      }
      fVar19 = fVar19 + DAT_1808acab0;
      fVar21 = fVar21 + 0.0;
      fVar23 = fVar23 + 0.0;
    }
    else {
      if (((lVar6 == 0) || (uVar3 == 0)) ||
         ((lVar6 = FUN_18000f3a0(lVar6 + uVar8), lVar6 == 0 || (uVar2 == 0)))) {
        fVar23 = 0.0;
        fVar21 = 0.0;
        fVar19 = 0.0;
      }
      else {
        pfVar5 = (float *)FUN_1800111b0(local_d8,lVar6 + uVar7);
        fVar23 = *pfVar5;
        fVar21 = pfVar5[1];
        fVar19 = pfVar5[2];
      }
      pfVar5 = (float *)FUN_1800111b0(local_c8,uVar9 + *param_2);
      fVar19 = fVar19 + pfVar5[2];
      fVar21 = fVar21 + pfVar5[1];
      fVar23 = fVar23 + *pfVar5;
    }
    fVar23 = fVar23 + fVar11 * fVar10 * DAT_1808ac988;
    fVar21 = fVar21 + fVar12 * fVar10 * DAT_1808ac988;
    fVar19 = fVar19 + fVar26 * DAT_1808ac988;
    fVar26 = fVar23 - fVar22;
    fVar12 = fVar21 - fVar20;
    fVar11 = fVar19 - fVar1;
    fVar10 = fVar26 * fVar26 + fVar12 * fVar12 + fVar11 * fVar11;
    if (fVar10 < 0.0) {
      FUN_18051af10(fVar10);
      fVar10 = extraout_XMM0_Da;
    }
    else {
      fVar10 = SQRT(fVar10);
    }
    if (fVar10 != 0.0) {
      fVar14 = DAT_1808ac34c / fVar10;
      fVar11 = fVar14 * fVar11;
      fVar12 = fVar14 * fVar12;
      fVar26 = fVar14 * fVar26;
    }
    fVar16 = fVar24 - fVar22;
    fVar14 = fVar18 - fVar20;
    fVar17 = fVar25 - fVar1;
    fVar15 = fVar14 * fVar12 + fVar16 * fVar26 + fVar17 * fVar11;
    if (0.0 <= fVar15) {
      if (fVar15 <= fVar10) {
        fVar23 = fVar26 * fVar15 + fVar22;
        fVar21 = fVar12 * fVar15 + fVar20;
        fVar19 = fVar11 * fVar15 + fVar1;
      }
      fVar25 = fVar25 - fVar19;
      fVar24 = fVar24 - fVar23;
      fVar18 = fVar18 - fVar21;
      fVar20 = fVar18 * fVar18 + fVar24 * fVar24 + fVar25 * fVar25;
    }
    else {
      fVar20 = fVar14 * fVar14 + fVar16 * fVar16 + fVar17 * fVar17;
    }
    if (fVar20 < 0.0) {
      FUN_18051af10(fVar20);
      bVar4 = extraout_XMM0_Da_00 < DAT_1808acad8;
    }
    else {
      bVar4 = SQRT(fVar20) < DAT_1808acad8;
    }
  }
  return bVar4;
}



/* ===== 18008d9c0 FUN_18008d9c0 ===== */

short FUN_18008d9c0(longlong *param_1,longlong *param_2,char *param_3)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  bool bVar11;
  float fVar12;
  longlong local_res8;
  
  lVar7 = *param_1;
  if (lVar7 == 0) {
    return 0;
  }
  if (*param_2 == 0) {
    return 0;
  }
  if (DAT_180ccfe9c == 0) {
    uVar6 = (ulonglong)DAT_180ca09f0;
    uVar9 = 0;
    if (DAT_180ca09f0 != 0) {
      iVar4 = FUN_180011200(lVar7 + uVar6);
      uVar9 = (ulonglong)DAT_180ccfe9c;
      uVar6 = (ulonglong)DAT_180ca09f0;
      if (iVar4 - 1U < 1000) {
        bVar11 = true;
        goto LAB_18008da3f;
      }
    }
    bVar11 = false;
  }
  else {
    cVar1 = FUN_180011220((ulonglong)DAT_180ccfe9c + lVar7);
    uVar9 = (ulonglong)DAT_180ccfe9c;
    bVar11 = cVar1 == '\0';
    uVar6 = (ulonglong)DAT_180ca09f0;
  }
LAB_18008da3f:
  if (!bVar11) {
    return 0;
  }
  lVar7 = *param_2;
  if (lVar7 == 0) {
    return 0;
  }
  if ((int)uVar9 == 0) {
    if (((int)uVar6 == 0) || (iVar4 = FUN_180011200(uVar6 + lVar7), 999 < iVar4 - 1U)) {
      bVar11 = false;
    }
    else {
      bVar11 = true;
    }
  }
  else {
    cVar1 = FUN_180011220(uVar9 + lVar7);
    bVar11 = cVar1 == '\0';
  }
  iVar4 = DAT_180920e38;
  if (!bVar11) {
    return 0;
  }
  if (*param_1 != *param_2) {
    if (DAT_180920e3e == '\0') {
      return 0;
    }
    if (*param_3 == '\0') {
      return 0;
    }
    uVar3 = 0xffffffff;
    if (DAT_180ccfe7c == 0) {
      uVar10 = 0xffffffff;
    }
    else {
      bVar2 = FUN_180011220((ulonglong)DAT_180ccfe7c + *param_1);
      uVar10 = (uint)bVar2;
      if (DAT_180ccfe7c != 0) {
        uVar3 = FUN_180011220((ulonglong)DAT_180ccfe7c + *param_2);
        uVar3 = uVar3 & 0xff;
      }
    }
    if (uVar10 != uVar3) {
      return 0;
    }
    cVar1 = FUN_18008d4d0(param_1,param_2,param_3);
    if (cVar1 == '\0') {
      return 0;
    }
    if (DAT_180ccf984 == '\0') {
      lVar7 = *param_1;
      if (lVar7 == *param_2) {
        return 0;
      }
      if ((((DAT_180ccfe74 != 0) && (lVar7 != 0)) &&
          (iVar4 = FUN_180011200((ulonglong)DAT_180ccfe74 + lVar7), iVar4 - 1U < 0xfffffffe)) &&
         ((FUN_1803a0940(&local_res8,iVar4), local_res8 != 0 && (local_res8 == *param_2)))) {
        return 0;
      }
    }
    return 1;
  }
  if (DAT_180ccf984 == '\0') {
    lVar7 = *param_1;
    if (lVar7 == *param_2) {
      bVar11 = true;
      goto LAB_18008dbd0;
    }
    if (((DAT_180ccfe74 != 0) && (lVar7 != 0)) &&
       ((iVar5 = FUN_180011200((ulonglong)DAT_180ccfe74 + lVar7), iVar5 - 1U < 0xfffffffe &&
        ((FUN_1803a0940(&local_res8,iVar5), local_res8 != 0 && (local_res8 == *param_2)))))) {
      bVar11 = true;
      goto LAB_18008dbd0;
    }
  }
  bVar11 = false;
LAB_18008dbd0:
  if (iVar4 == 0) {
    if ((DAT_180920e3c == '\0') && (DAT_180920e3d == '\0')) {
      return 0;
    }
    if (bVar11) {
      return 0x100;
    }
  }
  else {
    if (bVar11) {
      return 0x100;
    }
    if ((((((DAT_180ccfe88 != 0) && (DAT_180ccfe80 != 0)) && (DAT_1809619a0 != 0)) &&
         (lVar7 = FUN_1803a08e0(param_1), lVar7 != 0)) &&
        ((((iVar4 == 2 || (DAT_180ccfe98 == 0)) ||
          (cVar1 = FUN_180011220((ulonglong)DAT_180ccfe98 + *param_1), cVar1 == '\0')) &&
         ((lVar8 = FUN_18000f3a0((ulonglong)DAT_1809619a0 + (ulonglong)DAT_1809619c0 + lVar7),
          lVar8 != 0 && (iVar4 = FUN_180011200((ulonglong)DAT_180ccfe80 + lVar8), 0 < iVar4)))))) &&
       (iVar4 = FUN_180011200((ulonglong)DAT_180ccfe88 + lVar7), 0 < iVar4)) {
      return 0x101;
    }
  }
  if (((DAT_180920e3c != '\0') && (lVar7 = FUN_1803a08e0(param_1), lVar7 != 0)) &&
     (cVar1 = FUN_18008d3f0(lVar7,"C_BaseCSGrenade"), cVar1 != '\0')) {
    return 0x101;
  }
  if (DAT_180920e3d == '\0') {
    return 0;
  }
  if (DAT_180ca12ef == '\0') {
    if (DAT_180ccf984 == '\0') {
      fVar12 = DAT_1808acc3c;
    }
    else {
      fVar12 = DAT_180cf9f50;
    }
  }
  else {
    fVar12 = DAT_180962c84;
  }
  return (fVar12 < DAT_1808ac988) + 0x100;
}



/* ===== 18008dd40 FUN_18008dd40 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18008dd40(longlong param_1,int param_2,int param_3,char param_4,undefined4 param_5)

{
  ushort *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  int iVar4;
  ulonglong *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong *puVar9;
  longlong lVar10;
  bool bVar11;
  undefined4 local_68 [2];
  ulonglong local_60;
  undefined *local_58;
  
  if (((param_1 != 0) && (-1 < param_2)) && (param_3 < 0x10001)) {
    for (; param_2 < param_3; param_2 = param_2 + 1) {
      lVar10 = (ulonglong)DAT_180961910 * (longlong)param_2 + param_1;
      puVar9 = (ulonglong *)((ulonglong)DAT_180961914 + lVar10);
      uVar7 = *puVar9;
      if (uVar7 != 0) {
        puVar5 = &DAT_180ce1f30;
        do {
          if ((*puVar5 == uVar7) || (puVar5[1] == uVar7)) goto LAB_18008df4b;
          puVar5 = puVar5 + 2;
        } while (puVar5 != &DAT_180ce2030);
        iVar4 = FUN_1804e4d70(&DAT_1809ee4a0);
        if (iVar4 != 0) goto LAB_18008e1d7;
        if (DAT_1809ee4ec == 0x7fffffff) {
          DAT_1809ee4ec = 0x7ffffffe;
          goto LAB_18008e1cc;
        }
        for (puVar2 = (undefined8 *)*DAT_180ca0fa8; puVar2 != DAT_180ca0fa8;
            puVar2 = (undefined8 *)*puVar2) {
          if (puVar2[3] == uVar7) {
            FUN_1804e4e90(&DAT_1809ee4a0);
            goto LAB_18008df4b;
          }
        }
        FUN_1804e4e90(&DAT_1809ee4a0);
        uVar7 = *puVar9;
        if (uVar7 != 0) {
          iVar4 = FUN_1804e4d70(&DAT_1809ee4f0);
          if (iVar4 != 0) goto LAB_18008e1d7;
          if (DAT_1809ee53c == 0x7fffffff) {
            DAT_1809ee53c = 0x7ffffffe;
            goto LAB_18008e1cc;
          }
          uVar8 = ((((((((uVar7 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^ uVar7 >> 8 & 0xff) *
                        0x100000001b3 ^ uVar7 >> 0x10 & 0xff) * 0x100000001b3 ^ uVar7 >> 0x18 & 0xff
                      ) * 0x100000001b3 ^ uVar7 >> 0x20 & 0xff) * 0x100000001b3 ^
                    uVar7 >> 0x28 & 0xff) * 0x100000001b3 ^ uVar7 >> 0x30 & 0xff) * 0x100000001b3 ^
                  uVar7 >> 0x38) * 0x100000001b3 & _DAT_180ca0f90;
          lVar6 = *(longlong *)(DAT_180ca0f78 + 8 + uVar8 * 0x10);
          if (lVar6 == DAT_180ca0f68) {
LAB_18008df1f:
            FUN_1804e4e90(&DAT_1809ee4f0);
          }
          else {
            uVar3 = *(ulonglong *)(lVar6 + 0x10);
            while (uVar7 != uVar3) {
              if (lVar6 == *(longlong *)(DAT_180ca0f78 + uVar8 * 0x10)) goto LAB_18008df1f;
              lVar6 = *(longlong *)(lVar6 + 8);
              uVar3 = *(ulonglong *)(lVar6 + 0x10);
            }
            FUN_1804e4e90(&DAT_1809ee4f0);
            if (lVar6 != 0) goto LAB_18008df4b;
          }
        }
        uVar7 = *puVar9;
        if (uVar7 != 0) {
          iVar4 = FUN_1804e4d70(&DAT_1809e85d0);
          if (iVar4 != 0) {
LAB_18008e1d7:
                    /* WARNING: Subroutine does not return */
            FUN_1804e4a90(5);
          }
          if (DAT_1809e861c == 0x7fffffff) {
            DAT_1809e861c = 0x7ffffffe;
LAB_18008e1cc:
                    /* WARNING: Subroutine does not return */
            FUN_1804e4a90(6);
          }
          lVar6 = thunk_FUN_1804e6f30(DAT_180cd0238,DAT_180cd0240,uVar7);
          bVar11 = lVar6 != DAT_180cd0240;
          FUN_1804e4e90(&DAT_1809e85d0);
          if (bVar11) goto LAB_18008df4b;
        }
        local_68[0] = param_5;
        local_60 = *puVar9;
        if ((local_60 != 0) && (DAT_1809620f8 != 0)) {
          local_58 = &DAT_1809ee4f0;
          iVar4 = FUN_1804e4d70(&DAT_1809ee4f0);
          if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_1804e4a90(5);
          }
          if (DAT_1809ee53c == 0x7fffffff) {
            DAT_1809ee53c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
            FUN_1804e4a90(6);
          }
          uVar7 = ((((((((local_60 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                        local_60 >> 8 & 0xff) * 0x100000001b3 ^ local_60 >> 0x10 & 0xff) *
                       0x100000001b3 ^ local_60 >> 0x18 & 0xff) * 0x100000001b3 ^
                     local_60 >> 0x20 & 0xff) * 0x100000001b3 ^ local_60 >> 0x28 & 0xff) *
                    0x100000001b3 ^ local_60 >> 0x30 & 0xff) * 0x100000001b3 ^ local_60 >> 0x38) *
                  0x100000001b3 & DAT_180ce1f10;
          lVar6 = *(longlong *)(DAT_180ce1ef8 + 8 + uVar7 * 0x10);
          if (lVar6 == DAT_180ce1ee8) {
LAB_18008e0fa:
            lVar6 = DAT_180ce1ee8;
          }
          else {
            uVar8 = *(ulonglong *)(lVar6 + 0x10);
            while (local_60 != uVar8) {
              if (lVar6 == *(longlong *)(DAT_180ce1ef8 + uVar7 * 0x10)) goto LAB_18008e0fa;
              lVar6 = *(longlong *)(lVar6 + 8);
              uVar8 = *(ulonglong *)(lVar6 + 0x10);
            }
            if (lVar6 == 0) goto LAB_18008e0fa;
          }
          if (lVar6 == DAT_180ce1ee8) {
            puVar9 = DAT_180ce1ec0;
            if ((ulonglong)((longlong)DAT_180ce1ec8 - (longlong)DAT_180ce1ec0) < 0x1000) {
              for (; puVar9 != DAT_180ce1ec8; puVar9 = puVar9 + 2) {
                if (*puVar9 == local_60) goto LAB_18008e17e;
              }
              FUN_1801d45c0(puVar9,&local_60,local_68);
            }
LAB_18008e17e:
            FUN_1804e4e90(&DAT_1809ee4f0);
          }
          else {
            uVar7 = *(ulonglong *)(lVar6 + 0x18);
            FUN_1804e4e90(&DAT_1809ee4f0);
            if (uVar7 != 0) {
              if (param_4 != '\0') {
                *puVar9 = uVar7;
                puVar1 = (ushort *)(lVar10 + (ulonglong)DAT_180961928);
                *puVar1 = *puVar1 | DAT_18096192e;
                LOCK();
                DAT_180ccfe8c = DAT_180ccfe8c + 1;
                UNLOCK();
              }
              goto LAB_18008df4b;
            }
          }
        }
        if (param_4 != '\0') {
          LOCK();
          DAT_180ccfc64 = DAT_180ccfc64 + 1;
          UNLOCK();
        }
      }
LAB_18008df4b:
    }
  }
  return;
}



/* ===== 18008e210 FUN_18008e210 ===== */

ulonglong FUN_18008e210(longlong param_1)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  ulonglong uVar4;
  char cVar5;
  short sVar6;
  int iVar7;
  undefined4 uVar8;
  longlong lVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  uint uVar13;
  ulonglong uVar14;
  undefined4 uVar15;
  undefined8 local_res8;
  longlong local_res10;
  
  if (((param_1 == 0) || (DAT_180ccfe84 < 1)) ||
     (iVar7 = FUN_180011200((ulonglong)DAT_180961900 + param_1), 0xfffffffd < iVar7 - 1U)) {
    local_res8 = ((local_res8 >> 0x10 & 0xffff) >> 8) << 0x18;
    return local_res8;
  }
  FUN_1803a0940(&local_res8,iVar7);
  uVar4 = local_res8;
  if (local_res8 == 0) {
LAB_18008e97c:
    local_res8 = (local_res8 >> 0x18 & 0xff) << 0x18;
    return local_res8;
  }
  lVar9 = FUN_18000f3a0(DAT_180961968 + local_res8);
  if (lVar9 == 0) {
    pcVar11 = (char *)0x0;
  }
  else {
    lVar9 = FUN_18000f3a0((ulonglong)DAT_18096196c + lVar9);
    if (lVar9 == 0) {
      pcVar11 = (char *)0x0;
    }
    else {
      lVar9 = FUN_18000f3a0((ulonglong)DAT_180961970 + lVar9);
      if (lVar9 == 0) {
        pcVar11 = (char *)0x0;
      }
      else {
        pcVar10 = (char *)FUN_18000f3a0((ulonglong)DAT_180961974 + lVar9);
        pcVar11 = (char *)0x0;
        if (pcVar10 + -0x10000 < (char *)0x7ffffffeffff) {
          pcVar11 = pcVar10;
        }
      }
    }
  }
  if (pcVar11 == (char *)0x0) goto LAB_18008e97c;
  bVar3 = false;
  bVar2 = false;
  uVar15 = 0;
  uVar8 = 0;
  iVar7 = strcmp(pcVar11,"C_CSPlayerPawn");
  if (iVar7 == 0) {
    uVar14 = uVar4;
    uVar8 = uVar15;
    bVar2 = bVar3;
LAB_18008e894:
    if (uVar14 != 0) {
LAB_18008e89d:
      lVar9 = FUN_18000f3a0(uVar14 + 0x10);
      if (lVar9 == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = FUN_180011200(lVar9 + 0x10);
      }
      uVar13 = 0;
      if (0 < DAT_180ccfe84) {
        do {
          if ((&DAT_180ccfc6c)[(ulonglong)uVar13 * 2] == iVar7) {
            bVar1 = (&DAT_180ccfc70)[(ulonglong)uVar13 * 8];
            if (bVar1 != 0) {
              LOCK();
              DAT_180ccfea4 = DAT_180ccfea4 + 1;
              UNLOCK();
              local_res8 = CONCAT71(local_res8._1_7_,bVar1) & 0xffffffffffffff01;
              local_res8 = CONCAT62(local_res8._2_6_,CONCAT11(bVar1 >> 1,(undefined1)local_res8)) &
                           0xffffffffffff01ff;
              if ((((bVar1 & 1) != 0) && (bVar2)) &&
                 ((DAT_180ccfea0 != 0 && ((DAT_180ccfc60 != 0 && (DAT_180ccfe78 != 0)))))) {
                sVar6 = FUN_180011440((ulonglong)DAT_180ccfea0 +
                                      DAT_180ccfc60 + uVar4 + (ulonglong)DAT_180ccfe78);
                local_res8._0_3_ = CONCAT12(1,(ushort)local_res8);
                if (sVar6 == 0x2e) goto LAB_18008e967;
              }
              local_res8._0_3_ = (uint3)(ushort)local_res8;
LAB_18008e967:
              local_res8 = CONCAT44(uVar8,(uint)local_res8);
              return local_res8;
            }
            break;
          }
          uVar13 = uVar13 + 1;
        } while ((int)uVar13 < DAT_180ccfe84);
      }
    }
  }
  else {
    iVar7 = strncmp(pcVar11,"C_CS2HudModel",0xd);
    if (iVar7 != 0) {
      cVar5 = FUN_18008d3f0(uVar4,"C_BasePlayerWeapon");
      if (cVar5 == '\0') {
        uVar14 = 0;
        iVar7 = strcmp(pcVar11,"C_KeychainModule");
        if (((iVar7 == 0) || (iVar7 = strcmp(pcVar11,"C_NametagModule"), iVar7 == 0)) ||
           (iVar7 = strcmp(pcVar11,"C_StattrakModule"), iVar7 == 0)) {
          if ((DAT_180ca095c != 0) && (DAT_180ca0960 != 0)) {
            if ((DAT_180ca09f8 == 0) ||
               ((lVar9 = FUN_18000f3a0(uVar4 + DAT_180ca09f8), lVar9 == 0 ||
                (lVar9 = FUN_18000f3a0((ulonglong)DAT_180ca095c + lVar9), lVar9 == 0)))) {
              lVar9 = 0;
            }
            else {
              lVar9 = FUN_18000f3a0((ulonglong)DAT_180ca0960 + lVar9);
            }
            if ((lVar9 != 0) && (cVar5 = FUN_18008d3f0(lVar9,"C_BasePlayerWeapon"), cVar5 != '\0'))
            {
              if ((DAT_180ccfe74 != 0) &&
                 ((iVar7 = FUN_180011200(lVar9 + (ulonglong)DAT_180ccfe74), iVar7 - 1U < 0xfffffffe
                  && (FUN_1803a0940(&local_res8,iVar7), local_res8 != 0)))) {
                lVar9 = FUN_18000f3a0(DAT_180961968 + local_res8);
                if (lVar9 == 0) {
                  pcVar10 = (char *)0x0;
                }
                else {
                  lVar9 = FUN_18000f3a0((ulonglong)DAT_18096196c + lVar9);
                  if (lVar9 == 0) {
                    pcVar10 = (char *)0x0;
                  }
                  else {
                    lVar9 = FUN_18000f3a0((ulonglong)DAT_180961970 + lVar9);
                    if (lVar9 == 0) {
                      pcVar10 = (char *)0x0;
                    }
                    else {
                      pcVar12 = (char *)FUN_18000f3a0((ulonglong)DAT_180961974 + lVar9);
                      pcVar10 = (char *)0x0;
                      if (pcVar12 + -0x10000 < (char *)0x7ffffffeffff) {
                        pcVar10 = pcVar12;
                      }
                    }
                  }
                }
                if ((pcVar10 != (char *)0x0) &&
                   (iVar7 = strcmp(pcVar10,"C_CSPlayerPawn"), iVar7 == 0)) {
                  uVar14 = local_res8;
                }
              }
              uVar8 = 0;
              if (pcVar11[2] == 'K') {
                uVar8 = 2;
              }
              bVar2 = bVar3;
              goto LAB_18008e894;
            }
          }
        }
        else {
          iVar7 = strcmp(pcVar11,"C_WorldModelGloves");
          if (iVar7 == 0) {
            if ((DAT_180ca095c != 0) && (DAT_180ca0960 != 0)) {
              if ((DAT_180ca09f8 != 0) &&
                 ((lVar9 = FUN_18000f3a0(uVar4 + DAT_180ca09f8), lVar9 != 0 &&
                  (lVar9 = FUN_18000f3a0((ulonglong)DAT_180ca095c + lVar9), lVar9 != 0)))) {
                uVar14 = FUN_18000f3a0((ulonglong)DAT_180ca0960 + lVar9);
              }
              local_res8 = uVar14;
              if (((uVar14 != 0) &&
                  (pcVar11 = (char *)FUN_1803a0710(&local_res8), pcVar11 != (char *)0x0)) &&
                 (iVar7 = strcmp(pcVar11,"C_CSPlayerPawn"), iVar7 == 0)) goto LAB_18008e89d;
            }
            goto LAB_18008e501;
          }
          iVar7 = strcmp(pcVar11,"C_PlantedC4");
          if (iVar7 == 0) {
            if (((DAT_180ccfe70 != 0) && (DAT_180ccfc68 != 0)) &&
               (cVar5 = FUN_180011220(uVar4 + DAT_180ccfe70), cVar5 != '\0')) {
              local_res10 = DAT_180ccfc68 + uVar4;
LAB_18008e60b:
              iVar7 = FUN_180011200(local_res10);
              if ((((iVar7 - 1U < 0xfffffffe) && (FUN_1803a0940(&local_res8,iVar7), local_res8 != 0)
                   ) && (pcVar11 = (char *)FUN_1803a0710(&local_res8), pcVar11 != (char *)0x0)) &&
                 (iVar7 = strcmp(pcVar11,"C_CSPlayerPawn"), iVar7 == 0)) {
                uVar14 = local_res8;
                uVar8 = uVar15;
                bVar2 = bVar3;
                goto LAB_18008e894;
              }
              goto LAB_18008e501;
            }
          }
          else {
            iVar7 = strcmp(pcVar11,"C_Multimeter");
            if (iVar7 == 0) {
              if (((((DAT_180ccfe6c != 0) && (DAT_180ccfe70 != 0)) && (DAT_180ccfc68 != 0)) &&
                  ((iVar7 = FUN_180011200(uVar4 + DAT_180ccfe6c), iVar7 - 1U < 0xfffffffe &&
                   (FUN_1803a0940(&local_res10,iVar7), local_res10 != 0)))) &&
                 (cVar5 = FUN_180011220((ulonglong)DAT_180ccfe70 + local_res10), cVar5 != '\0')) {
                local_res10 = (ulonglong)DAT_180ccfc68 + local_res10;
                goto LAB_18008e60b;
              }
            }
            else {
              iVar7 = strcmp(pcVar11,"C_HostageCarriableProp");
              if (iVar7 == 0) {
                if (((DAT_180ccfe74 != 0) && (uVar4 != 0)) &&
                   ((iVar7 = FUN_180011200(uVar4 + DAT_180ccfe74), iVar7 - 1U < 0xfffffffe &&
                    (FUN_1803a0940(&local_res8,iVar7), local_res8 != 0)))) {
                  lVar9 = FUN_18000f3a0(DAT_180961968 + local_res8);
                  if (lVar9 == 0) {
                    pcVar11 = (char *)0x0;
                  }
                  else {
                    lVar9 = FUN_18000f3a0((ulonglong)DAT_18096196c + lVar9);
                    if (lVar9 == 0) {
                      pcVar11 = (char *)0x0;
                    }
                    else {
                      lVar9 = FUN_18000f3a0((ulonglong)DAT_180961970 + lVar9);
                      if (lVar9 == 0) {
                        pcVar11 = (char *)0x0;
                      }
                      else {
                        pcVar10 = (char *)FUN_18000f3a0((ulonglong)DAT_180961974 + lVar9);
                        pcVar11 = (char *)0x0;
                        if (pcVar10 + -0x10000 < (char *)0x7ffffffeffff) {
                          pcVar11 = pcVar10;
                        }
                      }
                    }
                  }
                  if ((pcVar11 != (char *)0x0) &&
                     (iVar7 = strcmp(pcVar11,"C_CSPlayerPawn"), iVar7 == 0)) {
                    uVar14 = local_res8;
                  }
                }
                uVar8 = 2;
                bVar2 = bVar3;
                goto LAB_18008e894;
              }
            }
          }
        }
        iVar7 = (int)(local_res8 >> 0x18);
        goto LAB_18008e509;
      }
      if (((DAT_180ccfe74 != 0) && (uVar4 != 0)) &&
         ((iVar7 = FUN_180011200(uVar4 + DAT_180ccfe74), iVar7 - 1U < 0xfffffffe &&
          (FUN_1803a0940(&local_res8,iVar7), local_res8 != 0)))) {
        lVar9 = FUN_18000f3a0(DAT_180961968 + local_res8);
        if (lVar9 == 0) {
          pcVar11 = (char *)0x0;
        }
        else {
          lVar9 = FUN_18000f3a0((ulonglong)DAT_18096196c + lVar9);
          if (lVar9 == 0) {
            pcVar11 = (char *)0x0;
          }
          else {
            lVar9 = FUN_18000f3a0((ulonglong)DAT_180961970 + lVar9);
            if (lVar9 == 0) {
              pcVar11 = (char *)0x0;
            }
            else {
              pcVar10 = (char *)FUN_18000f3a0((ulonglong)DAT_180961974 + lVar9);
              pcVar11 = (char *)0x0;
              if (pcVar10 + -0x10000 < (char *)0x7ffffffeffff) {
                pcVar11 = pcVar10;
              }
            }
          }
        }
        if ((pcVar11 != (char *)0x0) && (iVar7 = strcmp(pcVar11,"C_CSPlayerPawn"), iVar7 == 0)) {
          uVar14 = local_res8;
          uVar8 = uVar15;
          bVar2 = true;
          goto LAB_18008e894;
        }
      }
    }
  }
LAB_18008e501:
  iVar7 = (int)(local_res8 >> 0x18);
LAB_18008e509:
  local_res8._0_4_ = iVar7 << 0x18;
  local_res8 = (ulonglong)(uint)local_res8;
  return local_res8;
}



/* ===== 18008e9b0 FUN_18008e9b0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18008e9b0(void)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  undefined2 uVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  char *pcVar8;
  longlong lVar9;
  int *piVar10;
  float *pfVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  int *piVar14;
  longlong *plVar15;
  ulonglong uVar16;
  char *pcVar17;
  int *piVar18;
  ulonglong uVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  undefined1 *puVar22;
  longlong *plVar23;
  byte bVar24;
  undefined8 extraout_XMM0_Qa;
  float fVar25;
  float fVar26;
  undefined8 local_res8;
  float local_res10 [2];
  longlong local_res18;
  longlong local_res20;
  undefined8 uStack_120;
  undefined1 auStack_118 [8];
  undefined1 auStack_110 [24];
  double local_f8 [2];
  int local_e8 [8];
  int *local_c8;
  int *piStack_c0;
  int *local_b8;
  int local_b0 [3];
  char local_a4;
  undefined1 local_a0 [4];
  undefined8 local_9c;
  undefined8 uStack_94;
  ulonglong local_8c;
  longlong *local_80;
  longlong *plStack_78;
  ulonglong local_70;
  longlong local_68;
  longlong *local_60;
  
  if ((DAT_180ca1bec == '\0') && (DAT_1811089f0 != 0)) {
    DAT_180ca1bec = '\x01';
    DAT_180ccfe9c = FUN_18038eaf0("C_BaseEntity","m_lifeState");
    DAT_180ccfe98 = FUN_18038eaf0("C_CSPlayerPawn","m_bResumeZoom");
    DAT_180ccfe88 = FUN_18038eaf0("C_CSWeaponBaseGun","m_zoomLevel");
    DAT_180ccfe80 = FUN_18038eaf0("CCSWeaponBaseVData","m_nZoomLevels");
    DAT_180ccfeb0 = FUN_18038eaf0("C_BaseModelEntity","m_clrRender");
    DAT_180ccfe7c = FUN_18038eaf0("C_BaseEntity","m_iTeamNum");
    DAT_180ccfe90 = FUN_18038eaf0("C_BaseModelEntity","m_Collision");
    DAT_180ccfe94 = FUN_18038eaf0("CCollisionProperty","m_vecMins");
    DAT_180ccfea8 = FUN_18038eaf0("CCollisionProperty","m_vecMaxs");
    DAT_180ccfe74 = FUN_18038eaf0("C_BaseEntity","m_hOwnerEntity");
    DAT_180ccfeac = DAT_180ca0a34;
    DAT_180ccfea0 = FUN_18038eaf0("C_EconEntity","m_AttributeManager");
    DAT_180ccfc60 = FUN_18038eaf0("C_AttributeContainer","m_Item");
    DAT_180ccfe78 = FUN_18038eaf0("C_EconItemView","m_iItemDefinitionIndex");
    DAT_180ccfe70 = FUN_18038eaf0("C_PlantedC4","m_bBeingDefused");
    DAT_180ccfc68 = FUN_18038eaf0("C_PlantedC4","m_hBombDefuser");
    DAT_180ccfe6c = FUN_18038eaf0("C_Multimeter","m_hTargetC4");
  }
  local_b0[1] = 100;
  local_b0[0] = 0;
  piVar10 = local_b0;
  if (-1 < DAT_180920e40) {
    piVar10 = &DAT_180920e40;
  }
  piVar14 = local_b0 + 1;
  if (DAT_180920e40 < 0x65) {
    piVar14 = piVar10;
  }
  fVar25 = ((DAT_1808ac34c - (float)*piVar14 / DAT_1808acb08) * _DAT_1808ac24c + DAT_1808ac000) *
           _DAT_1808ac250;
  fVar26 = DAT_1808ac000;
  if (DAT_1808ac000 <= fVar25) {
    fVar26 = fVar25;
  }
  local_res10[0] = fVar26;
  local_res18 = CONCAT44(local_res18._4_4_,0x3f800000);
  local_res8 = CONCAT44(local_res8._4_4_,0x3c23d70a);
  pfVar11 = (float *)&local_res8;
  if (DAT_1808ac000 <= fVar26) {
    pfVar11 = local_res10;
  }
  pfVar7 = (float *)&local_res18;
  if (fVar26 <= DAT_1808ac34c) {
    pfVar7 = pfVar11;
  }
  DAT_1809ee464 = *pfVar7;
  LOCK();
  UNLOCK();
  DAT_180963598 = fVar26;
  if (DAT_180cd1304 == '\0') {
    FUN_1803a0b60(&local_res8);
    DAT_181108a00 = local_res8;
    DAT_1811089f8 = FUN_1803a0c50();
    DAT_180cd1304 = '\x01';
  }
  if ((((DAT_180920e38 < 1) && (DAT_180920e3c == '\0')) && (DAT_180920e3d == '\0')) &&
     (DAT_180920e3e == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if ((DAT_1811089f8 == 0) || (!bVar2)) {
    DAT_180ccfe84 = 0;
    return;
  }
  local_9c = 0;
  uStack_94 = 0;
  local_8c = 0;
  local_a0[0] = DAT_180ccf985 != '\0';
  if ((bool)local_a0[0]) {
    local_9c = CONCAT44(DAT_180cf9f68,DAT_180cf9f38);
    uStack_94 = CONCAT44(DAT_180cf9f58,DAT_180cf9f48);
    local_8c = (ulonglong)DAT_180cf9f4c;
  }
  local_c8 = (int *)0x0;
  piStack_c0 = (int *)0x0;
  local_b8 = (int *)0x0;
  piVar14 = (int *)0x0;
  local_res10[0] = 0.0;
  local_res20 = DAT_1811089f8;
  FUN_1803a09f0(&local_80);
  puVar22 = auStack_118;
  puVar21 = auStack_118;
  puVar20 = auStack_118;
  local_60 = plStack_78;
  plVar23 = local_80;
  piVar10 = piVar14;
  plVar15 = plStack_78;
  if (local_80 != plStack_78) {
    do {
      pcVar17 = (char *)0x0;
      pcVar8 = (char *)FUN_1803a0710(plVar23);
      if ((pcVar8 != (char *)0x0) && (iVar5 = strncmp(pcVar8,"C_CS2HudModel",0xd), iVar5 != 0)) {
        iVar5 = strcmp(pcVar8,"C_CSPlayerPawn");
        if (iVar5 == 0) {
LAB_18008ee64:
          uVar4 = FUN_18008d9c0(plVar23,&local_res20,local_a0);
          local_res8 = CONCAT62(local_res8._2_6_,uVar4);
          cVar3 = (char)uVar4;
          if (iVar5 == 0) {
            if ((cVar3 == '\0') && ((char)((ushort)uVar4 >> 8) == '\0')) goto LAB_18008f0be;
            if (*plVar23 != 0) {
              lVar9 = FUN_18000f3a0(*plVar23 + 0x10);
              if (lVar9 != 0) {
                iVar5 = FUN_180011200(lVar9 + 0x10);
                piVar18 = piStack_c0;
                if (iVar5 != 0) {
                  bVar24 = -(local_res8._1_1_ != '\0') & 2U | cVar3 != '\0';
                  uVar16 = (ulonglong)bVar24;
                  if (piStack_c0 == local_b8) {
                    uVar19 = (longlong)piStack_c0 - (longlong)local_c8;
                    lVar9 = (longlong)uVar19 >> 3;
                    if (lVar9 == 0x1fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                      FUN_1800118d0();
                    }
                    local_res8 = lVar9 + 1;
                    uVar12 = (longlong)local_b8 - (longlong)local_c8 >> 3;
                    if (0x1fffffffffffffff - (uVar12 >> 1) < uVar12) {
                      uVar13 = 0x1fffffffffffffff;
                    }
                    else {
                      uVar12 = (uVar12 >> 1) + uVar12;
                      uVar13 = local_res8;
                      if (local_res8 <= uVar12) {
                        uVar13 = uVar12;
                      }
                      if (0x1fffffffffffffff < uVar13) {
                    /* WARNING: Subroutine does not return */
                        FUN_18000d840();
                      }
                    }
                    local_68 = uVar13 * 8;
                    piVar10 = (int *)FUN_18000fb70(local_68);
                    uVar19 = uVar19 & 0xfffffffffffffff8;
                    *(int *)((longlong)piVar10 + uVar19) = iVar5;
                    *(byte *)((longlong)piVar10 + uVar19 + 4) = bVar24;
                    if (piVar18 == piStack_c0) {
                      lVar9 = (longlong)piStack_c0 - (longlong)local_c8;
                      piVar14 = piVar10;
                      piVar18 = local_c8;
                    }
                    else {
                      FUN_180540530(piVar10,local_c8,(longlong)piVar18 - (longlong)local_c8);
                      lVar9 = (longlong)piStack_c0 - (longlong)piVar18;
                      piVar14 = (int *)(uVar19 + 8 + (longlong)piVar10);
                    }
                    FUN_180540530(piVar14,piVar18,lVar9);
                    if (local_c8 != (int *)0x0) {
                      uVar19 = ((longlong)local_b8 - (longlong)local_c8 >> 3) * 8;
                      if (uVar19 < 0x1000) {
                        piVar14 = local_c8;
                      }
                      else {
                        if (0x1f < (ulonglong)
                                   ((longlong)local_c8 + (-8 - (longlong)*(int **)(local_c8 + -2))))
                        {
                          pcVar1 = (code *)swi(0x29);
                          (*pcVar1)(5);
                          puVar20 = auStack_110;
                          goto LAB_18008f10e;
                        }
                        uVar19 = uVar19 + 0x27;
                        piVar14 = *(int **)(local_c8 + -2);
                      }
                      thunk_FUN_1803d64e0(piVar14,uVar19);
                    }
                    piStack_c0 = piVar10 + local_res8 * 2;
                    local_b8 = (int *)(local_68 + (longlong)piVar10);
                    piVar14 = (int *)(ulonglong)(uint)local_res10[0];
                    plVar15 = local_60;
                    local_c8 = piVar10;
                  }
                  else {
                    *piStack_c0 = iVar5;
                    *(byte *)(piStack_c0 + 1) = bVar24;
                    piStack_c0 = piStack_c0 + 2;
                  }
                }
              }
            }
          }
          if ((((cVar3 != '\0') && (DAT_180962138 != 0)) && (DAT_180ccfeb0 != 0)) &&
             (cVar3 = FUN_180011220((ulonglong)DAT_180ccfeb0 + 3 + *plVar23), cVar3 != -2)) {
            if ((((ulonglong)(DAT_180ccfec0 - DAT_180ccfeb8) < 0x200) && (*plVar23 != 0)) &&
               ((lVar9 = FUN_18000f3a0(*plVar23 + 0x10), lVar9 != 0 &&
                (iVar5 = FUN_180011200(lVar9 + 0x10), iVar5 != 0)))) {
              local_b0[2] = iVar5;
              local_a4 = cVar3;
              FUN_18008f3b0(extraout_XMM0_Qa,local_b0 + 2);
            }
            FUN_18008d3d0(*plVar23,0xfe);
            local_res10[0] = (float)((int)piVar14 + 1);
            piVar14 = (int *)(ulonglong)(uint)local_res10[0];
          }
        }
        else if (((DAT_180ccfe74 == 0) || (*plVar23 == 0)) ||
                (iVar6 = FUN_180011200((ulonglong)DAT_180ccfe74 + *plVar23), 0xfffffffd < iVar6 - 1U
                )) {
          local_res18 = 0;
        }
        else {
          FUN_1803a0940(&local_res18,iVar6);
          if (local_res18 != 0) {
            lVar9 = FUN_18000f3a0((ulonglong)DAT_180961968 + local_res18);
            if (lVar9 == 0) {
            }
            else {
              lVar9 = FUN_18000f3a0((ulonglong)DAT_18096196c + lVar9);
              if (lVar9 == 0) {
              }
              else {
                lVar9 = FUN_18000f3a0((ulonglong)DAT_180961970 + lVar9);
                if (lVar9 == 0) {
                }
                else {
                  pcVar8 = (char *)FUN_18000f3a0((ulonglong)DAT_180961974 + lVar9);
                  if (pcVar8 + -0x10000 < (char *)0x7ffffffeffff) {
                    pcVar17 = pcVar8;
                  }
                }
              }
            }
            if ((pcVar17 != (char *)0x0) && (iVar6 = strcmp(pcVar17,"C_CSPlayerPawn"), iVar6 == 0))
            goto LAB_18008ee64;
          }
        }
      }
LAB_18008f0be:
      plVar23 = plVar23 + 1;
    } while (plVar23 != plVar15);
    piVar10 = piVar14;
  }
  uVar16 = 0;
  if (local_80 == (longlong *)0x0) goto LAB_18008f129;
  plVar15 = local_80;
  if ((ulonglong)(((longlong)(local_70 - (longlong)local_80) >> 3) * 8) < 0x1000) {
LAB_18008f115:
    puVar22 = puVar21;
  }
  else {
    plVar15 = (longlong *)local_80[-1];
    plVar23 = (longlong *)((longlong)local_80 + (-8 - (longlong)plVar15));
    puVar22 = auStack_118;
    if (&DAT_0000001f < plVar23) {
LAB_18008f10e:
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(5);
      puVar21 = puVar20 + 8;
      plVar15 = plVar23;
      goto LAB_18008f115;
    }
  }
  *(undefined8 *)(puVar22 + -8) = 0x18008f11d;
  thunk_FUN_1803d64e0(plVar15);
  local_80 = (longlong *)0x0;
  plStack_78 = (longlong *)0x0;
  local_70 = uVar16;
LAB_18008f129:
  iVar5 = (int)uVar16;
  uVar19 = (longlong)piStack_c0 - (longlong)local_c8 >> 3;
  if (0x40 < uVar19) {
    uVar19 = 0x40;
  }
  if (uVar19 != 0) {
    do {
      (&DAT_180ccfc6c)[uVar16 * 2] = local_c8[uVar16 * 2];
      (&DAT_180ccfc70)[uVar16 * 8] = (char)local_c8[uVar16 * 2 + 1];
      uVar16 = uVar16 + 1;
    } while (uVar16 < uVar19);
  }
  DAT_180ccfe84 = (undefined4)uVar19;
  DAT_180ccfeb4 = DAT_180ccfeb4 + 1;
  if (0x7f < DAT_180ccfeb4) {
    LOCK();
    UNLOCK();
    LOCK();
    UNLOCK();
    LOCK();
    UNLOCK();
    pcVar17 = "MISSING";
    if (DAT_180962138 != 0) {
      pcVar17 = "ok";
    }
    lVar9 = (longlong)piStack_c0 - (longlong)local_c8;
    *(int *)(puVar22 + 0x40) = DAT_180ccfc64;
    *(int *)(puVar22 + 0x38) = DAT_180ccfe8c;
    *(int *)(puVar22 + 0x30) = DAT_180ccfea4;
    *(double *)(puVar22 + 0x28) = (double)fVar26;
    *(char **)(puVar22 + 0x20) = pcVar17;
    *(undefined8 *)(puVar22 + -8) = 0x18008f222;
    DAT_180ccfc64 = iVar5;
    DAT_180ccfe8c = iVar5;
    DAT_180ccfea4 = iVar5;
    DAT_180ccfeb4 = iVar5;
    FUN_1802b2560("[transparency] third %d | pawns decided %d | alpha 254 this frame %d (setter %s) | A %.4f | draw asked %d, swapped %d, no variant yet %d"
                  ,DAT_180ccf984 != '\0',lVar9 >> 3,(ulonglong)piVar10 & 0xffffffff);
  }
  if (local_c8 != (int *)0x0) {
    uVar16 = ((longlong)local_b8 - (longlong)local_c8 >> 3) * 8;
    if (0xfff < uVar16) {
      lVar9 = *(longlong *)(local_c8 + -2);
      if ((ulonglong)((longlong)local_c8 + (-8 - lVar9)) < 0x20) {
        *(undefined8 *)(puVar22 + -8) = 0x18008f265;
        thunk_FUN_1803d64e0(lVar9,uVar16 + 0x27);
        return;
      }
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(5);
      puVar22 = puVar22 + 8;
    }
    *(undefined8 *)(puVar22 + -8) = 0x18008f276;
    thunk_FUN_1803d64e0();
  }
  return;
}



/* ===== 18008f2b0 FUN_18008f2b0 ===== */

void FUN_18008f2b0(void)

{
  int *piVar1;
  int *piVar2;
  longlong local_res8;
  
  piVar1 = DAT_180ccfec0;
  piVar2 = DAT_180ccfeb8;
  if (DAT_180ccfeb8 != DAT_180ccfec0) {
    do {
      if ((*piVar2 != 0) && (DAT_180962138 != 0)) {
        FUN_1803a0940(&local_res8);
        if (local_res8 != 0) {
          FUN_18008d3d0(local_res8,(char)piVar2[1]);
        }
      }
      piVar2 = piVar2 + 2;
    } while (piVar2 != piVar1);
    if (DAT_180ccfeb8 != DAT_180ccfec0) {
      DAT_180ccfec0 = DAT_180ccfeb8;
    }
  }
  return;
}



/* ===== 18008f330 FUN_18008f330 ===== */

ulonglong FUN_18008f330(longlong param_1)

{
  uint uVar1;
  ulonglong in_RAX;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  
  if ((param_1 != 0) && (in_RAX = (ulonglong)DAT_180ccfe84, 0 < (int)DAT_180ccfe84)) {
    lVar2 = FUN_18000f3a0(param_1 + 0x10);
    in_RAX = 0;
    if (lVar2 != 0) {
      in_RAX = FUN_180011200();
      uVar1 = (uint)in_RAX;
      if ((uVar1 != 0) && (uVar4 = 0, 0 < (int)DAT_180ccfe84)) {
        do {
          in_RAX = (ulonglong)(uint)(&DAT_180ccfc6c)[uVar4 * 2];
          if ((&DAT_180ccfc6c)[uVar4 * 2] == uVar1) {
            in_RAX = 0;
            if (((&DAT_180ccfc70)[uVar4 * 8] & 1) != 0) {
              return 1;
            }
            break;
          }
          uVar3 = (int)uVar4 + 1;
          uVar4 = (ulonglong)uVar3;
        } while ((int)uVar3 < (int)DAT_180ccfe84);
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



/* ===== 18008f3b0 FUN_18008f3b0 ===== */

undefined8 * FUN_18008f3b0(undefined8 param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  code *pcVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  
  puVar3 = DAT_180ccfec0;
  if (DAT_180ccfec0 != DAT_180ccfec8) {
    *DAT_180ccfec0 = *param_2;
    puVar3 = DAT_180ccfec0;
    DAT_180ccfec0 = DAT_180ccfec0 + 1;
    return puVar3;
  }
  uVar8 = 0x1fffffffffffffff;
  uVar11 = (longlong)DAT_180ccfec0 - (longlong)DAT_180ccfeb8;
  lVar4 = (longlong)uVar11 >> 3;
  if (lVar4 == 0x1fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_18000fb10();
  }
  uVar6 = (longlong)DAT_180ccfec8 - (longlong)DAT_180ccfeb8 >> 3;
  uVar1 = lVar4 + 1;
  if (uVar6 <= 0x1fffffffffffffff - (uVar6 >> 1)) {
    uVar6 = (uVar6 >> 1) + uVar6;
    uVar8 = uVar1;
    if (uVar1 <= uVar6) {
      uVar8 = uVar6;
    }
    if (0x1fffffffffffffff < uVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  puVar5 = (undefined8 *)FUN_18000fb70(uVar8 * 8);
  puVar12 = (undefined8 *)((uVar11 & 0xfffffffffffffff8) + (longlong)puVar5);
  *puVar12 = *param_2;
  if (puVar3 == DAT_180ccfec0) {
    lVar4 = (longlong)DAT_180ccfec0 - (longlong)DAT_180ccfeb8;
    puVar7 = puVar5;
    puVar3 = DAT_180ccfeb8;
  }
  else {
    FUN_180540530(puVar5,DAT_180ccfeb8,(longlong)puVar3 - (longlong)DAT_180ccfeb8);
    puVar7 = puVar12 + 1;
    lVar4 = (longlong)DAT_180ccfec0 - (longlong)puVar3;
  }
  puVar9 = auStack_38;
  puVar10 = auStack_38;
  FUN_180540530(puVar7,puVar3,lVar4);
  if (DAT_180ccfeb8 == (undefined8 *)0x0) goto LAB_18008f50f;
  puVar3 = DAT_180ccfeb8;
  if ((ulonglong)(((longlong)DAT_180ccfec8 - (longlong)DAT_180ccfeb8 >> 3) * 8) < 0x1000) {
LAB_18008f504:
    puVar10 = puVar9;
  }
  else {
    puVar3 = (undefined8 *)DAT_180ccfeb8[-1];
    if ((undefined1 *)0x1f < (undefined1 *)((longlong)DAT_180ccfeb8 + (-8 - (longlong)puVar3))) {
      puVar3 = (undefined8 *)&DAT_00000005;
      pcVar2 = (code *)swi(0x29);
      (*pcVar2)(5);
      puVar9 = auStack_30;
      goto LAB_18008f504;
    }
  }
  *(undefined8 *)(puVar10 + -8) = 0x18008f50f;
  thunk_FUN_1803d64e0(puVar3);
LAB_18008f50f:
  DAT_180ccfeb8 = puVar5;
  DAT_180ccfec0 = puVar5 + uVar1;
  DAT_180ccfec8 = puVar5 + uVar8;
  return puVar12;
}



/* ===== 18008f560 FUN_18008f560 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18008f560(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  ULONGLONG UVar2;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStack_258 [32];
  undefined8 local_238;
  undefined8 *local_230;
  undefined1 local_228 [512];
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_258;
  if (DAT_180cd0128 < 4000) {
    DAT_180cd0128 = DAT_180cd0128 + 1;
    local_res10 = param_2;
    local_res18 = param_3;
    local_res20 = param_4;
    FUN_180540170(local_228,0,0x200);
    puVar1 = (ulonglong *)FUN_180013640();
    local_238 = 0;
    local_230 = &local_res10;
    FUN_180501904(*puVar1 | 2,local_228,0x200,param_1);
    UVar2 = GetTickCount64();
    FUN_1802b2840("wl_chams.log","[%llu] history | %s",UVar2,local_228);
  }
  return;
}



/* ===== 18008f640 FUN_18008f640 ===== */

undefined8 FUN_18008f640(void)

{
  HMODULE pHVar1;
  FARPROC pFVar2;
  
  if (DAT_180ca1bee != '\0') goto LAB_18008f6e8;
  DAT_180ca1bee = '\x01';
  pHVar1 = GetModuleHandleA("meshsystem.dll");
  if (pHVar1 == (HMODULE)0x0) {
LAB_18008f68c:
    DAT_180cd0120 = 0;
  }
  else {
    pFVar2 = GetProcAddress(pHVar1,"CreateInterface");
    if (pFVar2 == (FARPROC)0x0) goto LAB_18008f68c;
    DAT_180cd0120 = (*pFVar2)("MeshSystem001",0);
  }
  pHVar1 = GetModuleHandleA("scenesystem.dll");
  if (pHVar1 == (HMODULE)0x0) {
LAB_18008f6c9:
    DAT_180ccfed0 = 0;
  }
  else {
    pFVar2 = GetProcAddress(pHVar1,"CreateInterface");
    if (pFVar2 == (FARPROC)0x0) goto LAB_18008f6c9;
    DAT_180ccfed0 = (*pFVar2)("SceneSystem_002",0);
  }
  FUN_18008f560("interfaces | mesh %p | scene %p",DAT_180cd0120,DAT_180ccfed0);
LAB_18008f6e8:
  if ((DAT_180ca1bed == '\0') && (DAT_1811089f0 != 0)) {
    DAT_180ca1bed = '\x01';
    DAT_180cd012c = FUN_18038eaf0("CSkeletonInstance","m_modelState");
    DAT_180cd00ec = FUN_18038eaf0("CModelState","m_hModel");
    DAT_180cd0118 = FUN_18038eaf0("CGameSceneNode","m_nodeToWorld");
    DAT_180cd00e8 = FUN_18038eaf0("CEntityIdentity","m_worldGroupId");
    FUN_18008f560("offsets | model state %x | model %x | node to world %x | world group %x",
                  DAT_180cd012c,DAT_180cd00ec,DAT_180cd0118,DAT_180cd00e8);
  }
  if (((((DAT_180cd0120 == 0) || (DAT_180ccfed0 == 0)) || (DAT_180cd012c == 0)) ||
      ((DAT_180cd00ec == 0 || (DAT_180cd0118 == 0)))) ||
     ((DAT_180cd00e8 == 0 || ((DAT_180962140 == 0 || (DAT_180962148 == 0)))))) {
    return 0;
  }
  return 1;
}



/* ===== 18008f7f0 FUN_18008f7f0 ===== */

void FUN_18008f7f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  (**(code **)(*DAT_180cd0120 + 0xa0))
            (DAT_180cd0120,param_1,param_2,"AnimatableSceneObjectDesc",0,0x4100000001,param_4);
  return;
}



/* ===== 18008f840 FUN_18008f840 ===== */

void FUN_18008f840(undefined8 param_1)

{
  (**(code **)(*DAT_180ccfed0 + 0x80))(DAT_180ccfed0,param_1);
  return;
}



/* ===== 18008f860 FUN_18008f860 ===== */

undefined8 FUN_18008f860(undefined4 param_1)

{
  undefined8 uVar1;
  
  if (*DAT_180962148 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (*DAT_180962140)(*DAT_180962148,param_1);
  }
  return uVar1;
}



/* ===== 18008f890 FUN_18008f890 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_18008f890(longlong *param_1)

{
  undefined8 *puVar1;
  bool bVar2;
  byte bVar3;
  undefined4 uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  byte local_68 [8];
  longlong local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStack_98;
  lVar6 = *param_1;
  if ((lVar6 == 0) || (DAT_180ca09f8 == 0)) {
    FUN_18000f3a0(lVar6 + 0x10);
  }
  else {
    lVar6 = FUN_18000f3a0(lVar6 + (ulonglong)DAT_180ca09f8);
    local_60 = lVar6;
    lVar7 = FUN_18000f3a0(*param_1 + 0x10);
    if (((lVar6 != 0) && (lVar7 != 0)) &&
       (lVar8 = FUN_18000f3a0((ulonglong)DAT_180cd012c + (ulonglong)DAT_180cd00ec + lVar6),
       lVar8 != 0)) {
      uVar4 = FUN_180011200((ulonglong)DAT_180cd00e8 + lVar7);
      lVar7 = FUN_18008f860(uVar4);
      if (lVar7 == 0) {
        FUN_18008f560("no world group | id %u",uVar4);
      }
      else {
        puVar1 = (undefined8 *)((ulonglong)DAT_180cd0118 + lVar6);
        local_58 = *puVar1;
        uStack_50 = puVar1[1];
        puVar1 = (undefined8 *)((ulonglong)DAT_180cd0118 + 0x10 + lVar6);
        local_48 = *puVar1;
        uStack_40 = puVar1[1];
        lVar6 = FUN_18008f7f0(lVar8,&local_58);
        if (lVar6 - 0x10000U < 0x7ffffffeffff) {
          FUN_1800239d0(lVar6 + 0x110,&local_60);
          local_60 = CONCAT44(local_60._4_4_,0xffffffff);
          FUN_180013280(lVar6 + 0xc0,&local_60);
          lVar7 = FUN_18000f3a0(lVar8);
          if (lVar7 - 0x10000U < 0x7ffffffeffff) {
            uVar5 = FUN_180011200(lVar7 + 0x10);
            if (((uVar5 >> 10 & 1) == 0) &&
               (uVar5 = FUN_180011200(lVar7 + 0x14), (uVar5 >> 10 & 1) == 0)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            bVar3 = FUN_180011220(lVar6 + 0x9a);
            local_68[0] = bVar3 | 0x10;
            if (!bVar2) {
              local_68[0] = bVar3 & 0xef;
            }
            FUN_1800233d0(lVar6 + 0x9a,local_68);
          }
          uVar9 = FUN_18000f3a0(lVar6 + 0xa0);
          uVar10 = FUN_18000f3a0(lVar6 + 0x78);
          uVar4 = FUN_180011200(lVar6 + 0xd0);
          local_78 = uVar10;
          local_70 = uVar9;
          FUN_18008f560("created | pawn %p | object %p | bones %d | +0x78 0x%llx (bit 3 = PVS cull) +0xA0 %p"
                        ,*param_1,lVar6,uVar4);
          return lVar6;
        }
        FUN_18008f560("create failed | pawn %p | model %p",*param_1,lVar8);
      }
    }
  }
  return 0;
}



/* ===== 18008fac0 FUN_18008fac0 ===== */

void FUN_18008fac0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  (*DAT_180961a20)(DAT_1808ac34c,param_1 + 8,param_2,param_3,0,0,3,DAT_1808ac34c);
  return;
}



/* ===== 18008fb20 FUN_18008fb20 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18008fb20(longlong *param_1,char param_2,undefined4 *param_3,float param_4)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  float local_1c;
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_48;
  if (DAT_180961a20 == 0) {
    return;
  }
  if (*param_1 == 0) {
    return;
  }
  local_28 = *param_3;
  local_24 = param_3[1];
  local_20 = param_3[2];
  if (param_2 == '\0') {
    local_1c = 0.0;
  }
  else {
    local_1c = param_4 * (float)param_3[3];
    if (0.0 < local_1c) goto LAB_18008fbae;
  }
  if ((param_1[0x203] == 0) && (param_1[0x204] == 0)) {
    return;
  }
LAB_18008fbae:
  FUN_18008fac0(param_1 + 0x203,*param_1,&local_28);
  lVar1 = param_1[0x203];
  if (((lVar1 != 0) && (param_1[1] != 0)) && (lVar1 - 0xff18U < 0x7ffffffeffff)) {
    FUN_1800239d0(lVar1 + 0xe8,param_1 + 1);
  }
  return;
}



/* ===== 18008fc20 FUN_18008fc20 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18008fc20(longlong *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_48;
  if (*param_1 != 0) {
    if (DAT_180961a20 != 0) {
      local_24 = 0;
      local_28 = 0;
      local_20 = 0;
      local_1c = 0;
      if ((param_1[0x203] != 0) || (param_1[0x204] != 0)) {
        FUN_18008fac0(param_1 + 0x203,*param_1,&local_28);
        lVar1 = param_1[0x203];
        if ((lVar1 != 0) && ((param_1[1] != 0 && (lVar1 - 0xff18U < 0x7ffffffeffff)))) {
          FUN_1800239d0(lVar1 + 0xe8,param_1 + 1);
        }
      }
    }
    uVar2 = FUN_18000f3a0(*param_1 + 0x80);
    if ((uVar2 >> 0x3e & 1) == 0) {
      FUN_1811be250(*param_1);
    }
    *param_1 = 0;
  }
  return;
}



/* ===== 18008fd20 FUN_18008fd20 ===== */

void FUN_18008fd20(longlong *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  longlong lVar5;
  float fVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  if ((*param_1 != 0) && (0 < *(int *)((longlong)param_1 + 0x14))) {
    iVar7 = FUN_180011200(*param_1 + 0xd0);
    lVar8 = FUN_18000f3a0(*param_1 + 0xd8);
    fVar6 = DAT_1808ac34c;
    if ((iVar7 - 1U < 0x200) && (lVar8 != 0)) {
      if (*(int *)((longlong)param_1 + 0x14) < iVar7) {
        iVar7 = *(int *)((longlong)param_1 + 0x14);
      }
      if (((lVar8 - 0x10000U < 0x7ffffffeffff) &&
          ((ulonglong)((longlong)iVar7 * 0x30 + -0x10001 + lVar8) < 0x7ffffffeffff)) &&
         (uVar11 = 0, 0 < iVar7)) {
        do {
          lVar9 = uVar11 * 0x20;
          fVar17 = *(float *)(param_1 + uVar11 * 4 + 6);
          fVar1 = *(float *)((longlong)param_1 + lVar9 + 0x2c);
          fVar2 = *(float *)(param_1 + uVar11 * 4 + 5);
          fVar3 = *(float *)((longlong)param_1 + lVar9 + 0x34);
          uVar4 = *(undefined4 *)((longlong)param_1 + lVar9 + 0x1c);
          lVar9 = param_1[uVar11 * 4 + 4];
          lVar5 = param_1[uVar11 * 4 + 3];
          uVar10 = (int)uVar11 + 1;
          fVar12 = fVar17 * fVar17 + fVar1 * fVar1;
          fVar15 = fVar17 * fVar17 + fVar2 * fVar2;
          fVar18 = fVar1 * fVar1 + fVar2 * fVar2;
          fVar13 = fVar1 * fVar2 - fVar3 * fVar17;
          fVar14 = fVar3 * fVar17 + fVar1 * fVar2;
          *(float *)(lVar8 + uVar11 * 0x30) = fVar6 - (fVar12 + fVar12);
          fVar12 = fVar3 * fVar1 + fVar17 * fVar2;
          fVar16 = fVar17 * fVar2 - fVar3 * fVar1;
          *(float *)(lVar8 + 4 + uVar11 * 0x30) = fVar13 + fVar13;
          fVar13 = fVar17 * fVar1 - fVar3 * fVar2;
          fVar17 = fVar3 * fVar2 + fVar17 * fVar1;
          *(float *)(lVar8 + 8 + uVar11 * 0x30) = fVar12 + fVar12;
          *(int *)(lVar8 + 0xc + uVar11 * 0x30) = (int)lVar5;
          *(float *)(lVar8 + 0x10 + uVar11 * 0x30) = fVar14 + fVar14;
          *(float *)(lVar8 + 0x14 + uVar11 * 0x30) = fVar6 - (fVar15 + fVar15);
          *(float *)(lVar8 + 0x18 + uVar11 * 0x30) = fVar13 + fVar13;
          *(undefined4 *)(lVar8 + 0x1c + uVar11 * 0x30) = uVar4;
          *(float *)(lVar8 + 0x20 + uVar11 * 0x30) = fVar16 + fVar16;
          *(float *)(lVar8 + 0x24 + uVar11 * 0x30) = fVar17 + fVar17;
          *(float *)(lVar8 + 0x28 + uVar11 * 0x30) = fVar6 - (fVar18 + fVar18);
          *(int *)(lVar8 + 0x2c + uVar11 * 0x30) = (int)lVar9;
          uVar11 = (ulonglong)uVar10;
        } while ((int)uVar10 < iVar7);
      }
    }
  }
  return;
}



/* ===== 18008ffb0 FUN_18008ffb0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18008ffb0(undefined4 *param_1,longlong param_2,longlong param_3,float param_4)

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  ulonglong uVar6;
  float *pfVar7;
  ulonglong uVar8;
  longlong lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_b8 [32];
  longlong local_98;
  longlong local_90;
  undefined8 local_88;
  ulonglong local_80 [11];
  
  local_80[0] = DAT_180919500 ^ (ulonglong)auStack_b8;
  local_98 = *(longlong *)(param_2 + 0xd8) - *(longlong *)(param_2 + 0xd0) >> 5;
  local_90 = *(longlong *)(param_3 + 0xd8) - *(longlong *)(param_3 + 0xd0) >> 5;
  local_88 = 0x80;
  uVar6 = thunk_FUN_1804e83b0(&local_98,local_80);
  uVar8 = 0;
  *param_1 = (int)uVar6;
  fVar5 = DAT_1808acda0;
  fVar4 = DAT_1808ac34c;
  fVar3 = DAT_1808abf8c;
  if (uVar6 != 0) {
    do {
      lVar1 = *(longlong *)(param_2 + 0xd0);
      lVar2 = *(longlong *)(param_3 + 0xd0);
      lVar9 = uVar8 * 0x20;
      param_1[uVar8 * 8 + 1] =
           (*(float *)(lVar2 + lVar9) - *(float *)(lVar1 + lVar9)) * param_4 +
           *(float *)(lVar1 + lVar9);
      fVar11 = *(float *)(lVar1 + 4 + lVar9);
      param_1[uVar8 * 8 + 2] = (*(float *)(lVar2 + 4 + lVar9) - fVar11) * param_4 + fVar11;
      fVar11 = *(float *)(lVar1 + 8 + lVar9);
      param_1[uVar8 * 8 + 3] = (*(float *)(lVar2 + 8 + lVar9) - fVar11) * param_4 + fVar11;
      fVar11 = *(float *)(lVar1 + 0xc + lVar9);
      param_1[uVar8 * 8 + 4] = (*(float *)(lVar2 + 0xc + lVar9) - fVar11) * param_4 + fVar11;
      fVar11 = *(float *)(lVar2 + 0x10 + lVar9);
      fVar14 = *(float *)(lVar1 + 0x10 + lVar9);
      if (0.0 <= *(float *)(lVar2 + 0x14 + lVar9) * *(float *)(lVar1 + 0x14 + lVar9) +
                 fVar11 * fVar14 +
                 *(float *)(lVar2 + 0x18 + lVar9) * *(float *)(lVar1 + 0x18 + lVar9) +
                 *(float *)(lVar2 + 0x1c + lVar9) * *(float *)(lVar1 + 0x1c + lVar9)) {
        fVar12 = fVar4;
      }
      else {
        fVar12 = fVar5;
      }
      pfVar7 = (float *)(param_1 + uVar8 * 8 + 5);
      fVar14 = (fVar11 * fVar12 - fVar14) * param_4 + fVar14;
      *pfVar7 = fVar14;
      fVar11 = *(float *)(lVar1 + 0x14 + lVar9);
      fVar11 = (fVar12 * *(float *)(lVar2 + 0x14 + lVar9) - fVar11) * param_4 + fVar11;
      param_1[uVar8 * 8 + 6] = fVar11;
      fVar10 = *(float *)(lVar1 + 0x18 + lVar9);
      fVar10 = (fVar12 * *(float *)(lVar2 + 0x18 + lVar9) - fVar10) * param_4 + fVar10;
      param_1[uVar8 * 8 + 7] = fVar10;
      fVar13 = *(float *)(lVar1 + 0x1c + lVar9);
      fVar13 = (fVar12 * *(float *)(lVar2 + 0x1c + lVar9) - fVar13) * param_4 + fVar13;
      param_1[uVar8 * 8 + 8] = fVar13;
      fVar11 = fVar14 * fVar14 + 0.0 + fVar11 * fVar11 + fVar10 * fVar10 + fVar13 * fVar13;
      if (fVar11 < 0.0) {
        fVar11 = (float)FUN_18051af10(fVar11);
      }
      else {
        fVar11 = SQRT(fVar11);
      }
      if (fVar3 < fVar11) {
        for (; pfVar7 != (float *)(param_1 + uVar8 * 8 + 9); pfVar7 = pfVar7 + 1) {
          *pfVar7 = *pfVar7 / fVar11;
        }
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar6);
  }
  return;
}



/* ===== 1800902a0 FUN_1800902a0 ===== */

undefined8 FUN_1800902a0(undefined8 param_1,undefined4 *param_2)

{
  undefined4 extraout_XMM0_Da;
  
  (*DAT_180962028)();
  *param_2 = extraout_XMM0_Da;
  return 1;
}



/* ===== 1800902d0 FUN_1800902d0 ===== */

ulonglong FUN_1800902d0(undefined8 param_1,undefined4 param_2)

{
  uint uVar1;
  float fVar2;
  undefined8 local_res8;
  float local_res18 [4];
  
  local_res18[0] = 0.0;
  fVar2 = (float)FUN_180512fd0(param_2,local_res18);
  if (fVar2 < 0.0) {
    fVar2 = fVar2 + DAT_1808ac34c;
    if (fVar2 < DAT_1808ac34c) {
      local_res18[0] = local_res18[0] + DAT_1808acda0;
    }
    else {
      fVar2 = 0.0;
    }
  }
  local_res8._0_4_ = (int)param_1;
  local_res8._4_4_ = (float)((ulonglong)param_1 >> 0x20);
  local_res8._4_4_ = local_res8._4_4_ - fVar2;
  uVar1 = (int)local_res8 - (int)local_res18[0];
  local_res8 = CONCAT44(local_res8._4_4_,uVar1);
  if (local_res8._4_4_ < 0.0) {
    if (DAT_1808ac34c <= local_res8._4_4_ + DAT_1808ac34c) {
      local_res8 = (ulonglong)uVar1;
      return local_res8;
    }
    local_res8 = CONCAT44(local_res8._4_4_ + DAT_1808ac34c,uVar1 - 1);
  }
  return local_res8;
}



/* ===== 180090380 FUN_180090380 ===== */

undefined8 FUN_180090380(undefined8 *param_1)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  HMODULE hModule;
  FARPROC pFVar5;
  longlong lVar6;
  undefined8 uVar7;
  bool bVar8;
  float fVar9;
  float local_res10;
  undefined4 uStackX_14;
  int local_res18;
  float fStackX_1c;
  
  if ((DAT_180961a50 == 0) || (lVar4 = FUN_18000f3a0(), 0x7ffffffefffe < lVar4 - 0x10000U)) {
    return 0;
  }
  if (DAT_180cd0108 == 0) {
    hModule = GetModuleHandleA("client.dll");
    if ((hModule == (HMODULE)0x0) ||
       (pFVar5 = GetProcAddress(hModule,"CreateInterface"), pFVar5 == (FARPROC)0x0)) {
      lVar6 = 0;
    }
    else {
      lVar6 = (*pFVar5)("Source2ClientPrediction001",0);
    }
    DAT_180cd0108 = lVar6;
    if (lVar6 != 0) goto LAB_180090419;
    uVar3 = 0;
  }
  else {
LAB_180090419:
    lVar6 = DAT_180cd0108;
    uVar3 = FUN_180011200(DAT_180cd0108 + 0x10c);
  }
  *(undefined4 *)(param_1 + 2) = uVar3;
  uVar3 = FUN_180011200(lVar4 + 0x44);
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar3;
  uVar3 = FUN_18000f3d0(lVar4 + 0x34);
  *(undefined4 *)(param_1 + 3) = uVar3;
  uVar3 = FUN_18000f3d0(lVar4 + 0x3c);
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar3;
  uVar3 = FUN_18000f3d0(lVar4 + 0x30);
  iVar1 = *(int *)(param_1 + 2);
  *(undefined4 *)(param_1 + 4) = uVar3;
  if (iVar1 < 1) {
    local_res18 = *(int *)((longlong)param_1 + 0x14);
    fStackX_1c = 0.0;
LAB_1800904ee:
  }
  else {
    if (*(float *)(param_1 + 3) == 0.0) {
      fStackX_1c = 0.0;
    }
    else {
      fStackX_1c = *(float *)((longlong)param_1 + 0x1c);
    }
    local_res18 = iVar1;
    if ((fStackX_1c < 0.0) || (DAT_1808ac34c <= fStackX_1c)) {
      local_res10 = 0.0;
      fStackX_1c = (float)FUN_180512fd0(fStackX_1c,&local_res10);
      fVar9 = local_res10;
      if (fStackX_1c < 0.0) {
        fStackX_1c = fStackX_1c + DAT_1808ac34c;
        if (fStackX_1c < DAT_1808ac34c) {
          fVar9 = local_res10 + DAT_1808acda0;
        }
        else {
          fStackX_1c = 0.0;
        }
      }
      local_res18 = (int)fVar9 + iVar1;
      goto LAB_1800904ee;
    }
  }
  if ((lVar6 == 0) || (lVar4 = FUN_18000f3a0(lVar6 + 0x58), 0x7ffffffefffe < lVar4 - 0x10000U)) {
    uVar7 = 0;
  }
  else {
    uVar7 = FUN_18000f3a0(lVar4 + 0x10);
  }
  bVar8 = DAT_180cd1304 == '\0';
  param_1[5] = uVar7;
  if (bVar8) {
    FUN_1803a0b60(&local_res10);
    lVar4 = CONCAT44(uStackX_14,local_res10);
  }
  else {
    lVar4 = DAT_181108a00;
  }
  fVar9 = DAT_1808acab0;
  lVar6 = param_1[5];
  param_1[6] = lVar4;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  if (lVar6 == 0) {
    param_1[7] = 0;
  }
  else {
    if (lVar6 == lVar4) {
      param_1[7] = lVar6;
      lVar4 = lVar6;
    }
    else {
      param_1[7] = lVar4;
      if (lVar4 == 0) goto LAB_1800905da;
    }
    if ((DAT_180962028 != 0) && (lVar4 - 0x10000U < 0x7ffffffeffff)) {
      local_res10 = 0.0;
      cVar2 = FUN_1800902a0(lVar4,&local_res10);
      if ((cVar2 != '\0') && (((uint)local_res10 & 0x7f800000) != 0x7f800000)) {
        *(float *)((longlong)param_1 + 0x24) = local_res10;
      }
      uVar7 = FUN_1800902d0(CONCAT44(fStackX_1c,local_res18),
                            *(float *)((longlong)param_1 + 0x24) * fVar9);
      goto LAB_1800905df;
    }
  }
LAB_1800905da:
  uVar7 = CONCAT44(fStackX_1c,local_res18);
LAB_1800905df:
  *param_1 = uVar7;
  uVar7 = FUN_1800902d0(uVar7,DAT_180c8a7fc * fVar9);
  param_1[1] = uVar7;
  return 1;
}



/* ===== 180090620 FUN_180090620 ===== */

undefined8
FUN_180090620(longlong param_1,longlong *param_2,int *param_3,int *param_4,float *param_5,
             int *param_6)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  float *pfVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  int *piVar11;
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
  undefined1 local_e8 [176];
  
  if (*(int *)(param_1 + 0x18) != 2) {
    return 1;
  }
  if (0 < *(int *)(param_1 + 0xf10)) {
    uVar3 = *(uint *)(param_1 + 0xf14) & 0x8000000f;
    if ((int)uVar3 < 0) {
      uVar3 = (uVar3 - 1 | 0xfffffff0) + 1;
    }
    uVar3 = uVar3 + 0x10 & 0x8000000f;
    if ((int)uVar3 < 0) {
      uVar3 = (uVar3 - 1 | 0xfffffff0) + 1;
    }
    lVar10 = (longlong)(int)uVar3 * 0xe8;
    iVar4 = *(int *)(param_1 + 0x94 + lVar10);
    iVar7 = *(int *)(param_1 + 0x90 + lVar10);
    *param_6 = iVar7;
    param_6[1] = iVar4;
    uVar3 = *(int *)(param_1 + 0xf10) + -1 + *(int *)(param_1 + 0xf14) & 0x8000000f;
    if ((int)uVar3 < 0) {
      uVar3 = (uVar3 - 1 | 0xfffffff0) + 1;
    }
    uVar3 = uVar3 + 0x10 & 0x8000000f;
    if ((int)uVar3 < 0) {
      uVar3 = (uVar3 - 1 | 0xfffffff0) + 1;
    }
    iVar4 = *(int *)((longlong)(int)uVar3 * 0xe8 + 0x90 + param_1);
    param_6[3] = *(int *)((longlong)(int)uVar3 * 0xe8 + 0x94 + param_1);
    param_6[2] = iVar4;
    if (*param_3 == iVar7) {
      bVar2 = (float)param_6[1] <= (float)param_3[1] && (float)param_3[1] != (float)param_6[1];
    }
    else {
      bVar2 = iVar7 <= *param_3;
    }
    if (bVar2) {
      return 3;
    }
    if (1 < *(int *)(param_1 + 0xf10)) {
      if ((((*param_2 == 0) || (DAT_180ca09f8 == 0)) ||
          (lVar5 = FUN_18000f3a0(*param_2 + (ulonglong)DAT_180ca09f8), lVar5 == 0)) ||
         (DAT_180ca0950 == 0)) {
        fVar21 = 0.0;
        fVar17 = 0.0;
        fVar23 = 0.0;
      }
      else {
        pfVar6 = (float *)FUN_1800111b0(local_e8,lVar5 + (ulonglong)DAT_180ca0950);
        fVar21 = *pfVar6;
        fVar17 = pfVar6[1];
        fVar23 = pfVar6[2];
      }
      fVar12 = *(float *)(param_1 + 0xa8 + lVar10) - fVar17;
      fVar18 = *(float *)(param_1 + 0xac + lVar10) - fVar23;
      fVar14 = *(float *)(param_1 + 0xa4 + lVar10) - fVar21;
      fVar12 = fVar18 * fVar18 + fVar12 * fVar12 + fVar14 * fVar14;
      if (fVar12 < 0.0) {
        fVar12 = (float)FUN_18051af10();
      }
      else {
        fVar12 = SQRT(fVar12);
      }
      param_6[9] = (int)fVar12;
      if (1 < *(int *)(param_1 + 0xf10)) {
        iVar7 = 1;
        iVar4 = *param_3;
        do {
          uVar3 = iVar7 + *(int *)(param_1 + 0xf14) + -1 & 0x8000000f;
          if ((int)uVar3 < 0) {
            uVar3 = (uVar3 - 1 | 0xfffffff0) + 1;
          }
          uVar3 = uVar3 + 0x10 & 0x8000000f;
          if ((int)uVar3 < 0) {
            uVar3 = (uVar3 - 1 | 0xfffffff0) + 1;
          }
          lVar5 = (longlong)(int)uVar3 * 0xe8;
          iVar1 = *(int *)(param_1 + 0x90 + lVar5);
          if (iVar1 == iVar4) {
            fVar14 = *(float *)(param_1 + 0x94 + lVar5);
            bVar2 = (float)param_3[1] <= fVar14 && fVar14 != (float)param_3[1];
          }
          else {
            bVar2 = iVar4 <= iVar1;
          }
          if (bVar2) {
            piVar11 = (int *)(param_1 + 0x90 + lVar5);
            uVar3 = *(int *)(param_1 + 0xf14) + iVar7 & 0x8000000f;
            if ((int)uVar3 < 0) {
              uVar3 = (uVar3 - 1 | 0xfffffff0) + 1;
            }
            uVar3 = uVar3 + 0x10 & 0x8000000f;
            if ((int)uVar3 < 0) {
              uVar3 = (uVar3 - 1 | 0xfffffff0) + 1;
            }
            lVar8 = (longlong)(int)uVar3 * 0xe8;
            lVar9 = param_1 + 0x90 + lVar8;
            iVar1 = *(int *)(param_1 + 0x90 + lVar8);
            if (iVar1 == iVar4) {
              fVar14 = *(float *)(param_1 + 0x94 + lVar8);
              bVar2 = (float)param_3[1] <= fVar14 && fVar14 != (float)param_3[1];
            }
            else {
              bVar2 = iVar4 <= iVar1;
            }
            if (!bVar2) {
              if (lVar9 == 0) {
                return 4;
              }
              if (piVar11 == (int *)0x0) {
                return 4;
              }
              iVar4 = *(int *)(lVar8 + 0x94 + param_1);
              param_6[4] = iVar1;
              param_6[5] = iVar4;
              iVar4 = *(int *)(lVar5 + 0x94 + param_1);
              iVar7 = *piVar11;
              param_6[6] = iVar7;
              param_6[7] = iVar4;
              fVar14 = DAT_1808ac34c;
              if ((*(longlong *)(lVar8 + 0x128 + param_1) == *(longlong *)(lVar8 + 0x130 + param_1))
                 || (*(longlong *)(lVar5 + 0x128 + param_1) ==
                     *(longlong *)(lVar5 + 0x130 + param_1))) {
                return 5;
              }
              fVar18 = (float)param_3[1] - (float)param_6[5];
              iVar4 = *param_3 - iVar1;
              if (fVar18 < 0.0) {
                fVar18 = fVar18 + DAT_1808ac34c;
                if (fVar18 < DAT_1808ac34c) {
                  iVar4 = iVar4 + -1;
                }
                else {
                  fVar18 = 0.0;
                }
              }
              iVar7 = iVar7 - iVar1;
              fVar15 = (float)param_6[7] - (float)param_6[5];
              if (fVar15 < 0.0) {
                fVar15 = fVar15 + DAT_1808ac34c;
                if (fVar15 < DAT_1808ac34c) {
                  iVar7 = iVar7 + -1;
                }
                else {
                  fVar15 = 0.0;
                }
              }
              fVar18 = ((float)iVar4 + fVar18) / (fVar15 + (float)iVar7);
              if (fVar18 <= DAT_1808ac34c) {
                if (fVar18 <= 0.0) {
                  fVar18 = 0.0;
                }
              }
              else {
                fVar18 = DAT_1808ac34c;
              }
              param_6[8] = (int)fVar18;
              fVar15 = *(float *)(lVar8 + 0x140 + param_1);
              fVar22 = *(float *)(lVar8 + 0x144 + param_1);
              fVar15 = (*(float *)(lVar5 + 0x140 + param_1) - fVar15) * fVar18 + fVar15;
              fVar20 = *(float *)(lVar8 + 0x148 + param_1);
              fVar22 = (*(float *)(lVar5 + 0x144 + param_1) - fVar22) * fVar18 + fVar22;
              fVar16 = fVar15 - *(float *)(param_1 + 0xa4 + lVar10);
              fVar20 = (*(float *)(lVar5 + 0x148 + param_1) - fVar20) * fVar18 + fVar20;
              fVar13 = fVar22 - *(float *)(param_1 + 0xa8 + lVar10);
              fVar19 = fVar20 - *(float *)(param_1 + 0xac + lVar10);
              fVar13 = fVar19 * fVar19 + fVar13 * fVar13 + fVar16 * fVar16;
              if (fVar13 < 0.0) {
                fVar13 = (float)FUN_18051af10();
              }
              else {
                fVar13 = SQRT(fVar13);
              }
              param_6[10] = (int)fVar13;
              if (fVar12 <= fVar13) {
                fVar20 = fVar20 - fVar23;
                fVar22 = fVar22 - fVar17;
                fVar15 = fVar15 - fVar21;
                fVar21 = fVar20 * fVar20 + fVar22 * fVar22 + fVar15 * fVar15;
                if (fVar21 < 0.0) {
                  fVar21 = (float)FUN_18051af10();
                }
                else {
                  fVar21 = SQRT(fVar21);
                }
                fVar17 = DAT_1808ac0c0;
                param_6[0xb] = (int)fVar21;
                if (fVar17 <= fVar21) {
                  FUN_18008ffb0(param_4,lVar9,piVar11,fVar18);
                  if (*param_4 < 1) {
                    return 8;
                  }
                  fVar17 = ((float)param_6[0xb] - DAT_1808ac750) / DAT_1808ac750;
                  fVar21 = 0.0;
                  if (0.0 <= fVar17) {
                    fVar21 = fVar17;
                  }
                  if (fVar21 <= fVar14) {
                    fVar14 = fVar21;
                  }
                  *param_5 = fVar14;
                  return 0;
                }
                return 7;
              }
              return 6;
            }
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < *(int *)(param_1 + 0xf10));
      }
      return 4;
    }
  }
  return 2;
}



/* ===== 180090c90 FUN_180090c90 ===== */

void FUN_180090c90(longlong param_1,int *param_2,int param_3,undefined4 *param_4,float param_5)

{
  ULONGLONG UVar1;
  longlong lVar2;
  char *pcVar3;
  
  lVar2 = (longlong)(int)*(uint *)(param_1 + 0x10);
  if (*(uint *)(param_1 + 0x10) < 0x41) {
    UVar1 = GetTickCount64();
    if ((*(int *)(&DAT_180cd0130 + lVar2 * 4) != param_3 + 1) ||
       (1999 < UVar1 - *(longlong *)(&DAT_180ccfee0 + lVar2 * 8))) {
      *(ULONGLONG *)(&DAT_180ccfee0 + lVar2 * 8) = UVar1;
      *(int *)(&DAT_180cd0130 + lVar2 * 4) = param_3 + 1;
      switch(param_3) {
      case 0:
        pcVar3 = "drawn";
        break;
      case 1:
        pcVar3 = "entry not valid (state)";
        break;
      case 2:
        pcVar3 = "fewer than 2 records";
        break;
      case 3:
        pcVar3 = "target newer than the newest record";
        break;
      case 4:
        pcVar3 = "no record at or before the target";
        break;
      case 5:
        pcVar3 = "record without node transform";
        break;
      case 6:
        pcVar3 = "player farther from its newest record than the ghost";
        break;
      case 7:
        pcVar3 = "ghost within 0.1 of the player";
        break;
      case 8:
        pcVar3 = "no bones";
        break;
      case 9:
        pcVar3 = "copy not created";
        break;
      default:
        pcVar3 = "?";
      }
      FUN_18008f560("enemy %d | %s | state %d count %d | newest %d+%.3f oldest %d+%.3f | target %d+%.3f (oldest %+.2f t) | pair %d+%.3f..%d+%.3f t %.3f | player-newest %.2f newest-ghost %.2f player-ghost %.2f | alpha %.2f"
                    ,*(undefined4 *)(param_1 + 0x10),pcVar3,*(undefined4 *)(param_1 + 0x18),
                    *(undefined4 *)(param_1 + 0xf10),*param_4,(double)(float)param_4[1],param_4[2],
                    (double)(float)param_4[3],*param_2,(double)(float)param_2[1],
                    (double)((float)(*param_2 - param_4[2]) +
                            ((float)param_2[1] - (float)param_4[3])),param_4[4],
                    (double)(float)param_4[5],param_4[6],(double)(float)param_4[7],
                    (double)(float)param_4[8],(double)(float)param_4[9],(double)(float)param_4[10],
                    (double)(float)param_4[0xb],(double)param_5);
    }
  }
  return;
}



/* ===== 180090f60 FUN_180090f60 ===== */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180090f60(undefined8 *param_1,int *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 auStack_1098 [32];
  LARGE_INTEGER local_1078;
  LARGE_INTEGER local_1070;
  longlong local_1068;
  undefined8 local_1060;
  undefined8 local_1058;
  undefined8 local_1050;
  undefined4 uStack_1048;
  undefined8 auStack_1044 [2];
  undefined4 uStack_1034;
  undefined8 uStack_1030;
  undefined4 uStack_1028;
  undefined8 auStack_1024 [58];
  undefined4 auStack_e54 [897];
  undefined8 local_50;
  undefined8 uStack_48;
  double local_40;
  undefined1 local_38;
  ulonglong local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x180090f76;
  local_28 = DAT_180919500 ^ (ulonglong)auStack_1098;
  if (((ulonglong)((DAT_180cd00f8 - DAT_180cd00f0 >> 3) * 0x2d612be659c5cbb7) < 0x40) &&
     (0 < *param_2)) {
    local_1058 = 0;
    FUN_180540170(&local_1050,0,0x1000);
    lVar1 = 0;
    uVar2 = 0;
    do {
      *(undefined8 *)((longlong)auStack_1044 + lVar1 + 0x14) = 0;
      uVar3 = uVar2 + 0x10;
      *(undefined4 *)((longlong)auStack_1024 + lVar1 + -4) = 0;
      *(undefined8 *)((longlong)auStack_1024 + lVar1) = 0x3f800000;
      *(undefined8 *)((longlong)auStack_1024 + lVar1 + 8) = 0;
      *(undefined8 *)((longlong)auStack_1024 + lVar1 + 0x10) = 0x3f800000;
      *(undefined8 *)((longlong)auStack_1024 + lVar1 + 0x18) = 0;
      *(undefined8 *)((longlong)auStack_1024 + lVar1 + 0x20) = 0x3f800000;
      *(undefined8 *)((longlong)auStack_1024 + lVar1 + 0x28) = 0;
      *(undefined8 *)((longlong)auStack_1024 + lVar1 + 0x30) = 0x3f800000;
      *(undefined8 *)((longlong)auStack_1024 + lVar1 + 0x38) = 0;
      *(undefined8 *)((longlong)auStack_1024 + lVar1 + 0x40) = 0x3f800000;
      *(undefined8 *)((longlong)auStack_1024 + lVar1 + 0x48) = 0;
      *(undefined8 *)((longlong)auStack_1024 + lVar1 + 0x50) = 0x3f800000;
      *(undefined8 *)((longlong)auStack_1024 + lVar1 + 0x58) = 0;
      *(undefined8 *)((longlong)auStack_1024 + lVar1 + 0x60) = 0x3f800000;
      *(undefined8 *)((longlong)auStack_1024 + lVar1 + 0x68) = 0;
      *(undefined8 *)((longlong)auStack_1024 + lVar1 + 0x70) = 0x3f800000;
      *(undefined8 *)((longlong)auStack_1024 + lVar1 + 0x78) = 0;
      *(undefined8 *)((longlong)auStack_1024 + lVar1 + 0x80) = 0x3f800000;
      *(undefined8 *)((longlong)auStack_1024 + lVar1 + 0x88) = 0;
      *(undefined8 *)((longlong)auStack_1024 + lVar1 + 0x90) = 0x3f800000;
      *(undefined8 *)((longlong)auStack_1024 + lVar1 + 0x98) = 0;
      *(undefined8 *)((longlong)auStack_1024 + lVar1 + 0xa0) = 0x3f800000;
      *(undefined8 *)((longlong)auStack_1024 + lVar1 + 0xa8) = 0;
      *(undefined8 *)((longlong)auStack_1024 + lVar1 + 0xb0) = 0x3f800000;
      *(undefined8 *)((longlong)auStack_1024 + lVar1 + 0xb8) = 0;
      *(undefined8 *)((longlong)auStack_1024 + lVar1 + 0xc0) = 0x3f800000;
      *(undefined8 *)((longlong)auStack_1024 + lVar1 + 200) = 0;
      *(undefined8 *)((longlong)auStack_1024 + lVar1 + 0xd0) = 0x3f800000;
      *(undefined8 *)((longlong)auStack_1024 + lVar1 + 0xd8) = 0;
      *(undefined8 *)((longlong)auStack_1024 + lVar1 + 0xe0) = 0x3f800000;
      *(undefined8 *)((longlong)auStack_1024 + lVar1 + 0xe8) = 0;
      *(undefined8 *)((longlong)auStack_1024 + lVar1 + 0xf0) = 0x3f800000;
      *(undefined8 *)((longlong)auStack_1024 + lVar1 + 0xf8) = 0;
      *(undefined8 *)((longlong)auStack_1024 + lVar1 + 0x100) = 0x3f800000;
      *(undefined8 *)((longlong)auStack_1024 + lVar1 + 0x108) = 0;
      *(undefined8 *)((longlong)auStack_1024 + lVar1 + 0x110) = 0x3f800000;
      *(undefined8 *)((longlong)auStack_1024 + lVar1 + 0x118) = 0;
      *(undefined8 *)((longlong)auStack_1024 + lVar1 + 0x120) = 0x3f800000;
      *(undefined8 *)((longlong)auStack_1024 + lVar1 + 0x128) = 0;
      *(undefined8 *)((longlong)auStack_1024 + lVar1 + 0x130) = 0x3f800000;
      *(undefined8 *)((longlong)auStack_1024 + lVar1 + 0x138) = 0;
      *(undefined8 *)((longlong)auStack_1024 + lVar1 + 0x140) = 0x3f800000;
      *(undefined8 *)((longlong)auStack_1024 + lVar1 + 0x148) = 0;
      *(undefined8 *)((longlong)auStack_1024 + lVar1 + 0x150) = 0x3f800000;
      *(undefined8 *)((longlong)auStack_1024 + lVar1 + 0x158) = 0;
      *(undefined8 *)((longlong)auStack_1024 + lVar1 + 0x160) = 0x3f800000;
      *(undefined8 *)((longlong)auStack_1024 + lVar1 + 0x168) = 0;
      *(undefined8 *)((longlong)auStack_1024 + lVar1 + 0x170) = 0x3f800000;
      *(undefined8 *)((longlong)auStack_1024 + lVar1 + 0x178) = 0;
      *(undefined8 *)((longlong)auStack_1024 + lVar1 + 0x180) = 0x3f800000;
      *(undefined8 *)((longlong)auStack_1024 + lVar1 + 0x188) = 0;
      *(undefined8 *)((longlong)auStack_1024 + lVar1 + 400) = 0x3f800000;
      *(undefined8 *)((longlong)auStack_1024 + lVar1 + 0x198) = 0;
      *(undefined8 *)((longlong)auStack_1024 + lVar1 + 0x1a0) = 0x3f800000;
      *(undefined8 *)((longlong)auStack_1024 + lVar1 + 0x1a8) = 0;
      *(undefined8 *)((longlong)auStack_1024 + lVar1 + 0x1b0) = 0x3f800000;
      *(undefined8 *)((longlong)auStack_1024 + lVar1 + 0x1b8) = 0;
      *(undefined8 *)((longlong)auStack_1024 + lVar1 + 0x1c0) = 0x3f800000;
      *(undefined8 *)((longlong)auStack_1024 + lVar1 + 0x1c8) = 0;
      *(undefined4 *)((longlong)auStack_e54 + lVar1) = 0x3f800000;
      lVar1 = lVar1 + 0x200;
      *(undefined8 *)((longlong)auStack_1044 + uVar2 * 0x20 + -0xc) = 0;
      *(undefined4 *)((longlong)auStack_1044 + uVar2 * 0x20 + -4) = 0;
      auStack_1044[uVar2 * 4] = 0x3f800000;
      auStack_1044[uVar2 * 4 + 1] = 0;
      *(undefined4 *)(auStack_1044 + uVar2 * 4 + 2) = 0x3f800000;
      uVar2 = uVar3;
    } while (uVar3 < 0x80);
    local_1060 = *param_1;
    local_38 = 1;
    local_50 = 0;
    uStack_48 = 0;
    FUN_180540530((longlong)&local_1058 + 4,param_2,0x1004);
    lVar1 = FUN_18008f890(param_1);
    local_1078.QuadPart = 0;
    local_1070.QuadPart = 0;
    local_1068 = lVar1;
    QueryPerformanceFrequency(&local_1078);
    QueryPerformanceCounter(&local_1070);
    local_40 = 0.0;
    if (local_1078.QuadPart != 0) {
      local_40 = (double)local_1070.QuadPart / (double)local_1078.QuadPart;
    }
    if (lVar1 != 0) {
      if (DAT_180cd00f8 == DAT_180cd0100) {
        FUN_180092bb0(local_1078.QuadPart,DAT_180cd00f8,&local_1068);
        return 1;
      }
      FUN_180540530(DAT_180cd00f8,&local_1068,0x1038);
      DAT_180cd00f8 = DAT_180cd00f8 + 0x1038;
      return 1;
    }
  }
  return 0;
}



/* ===== 180091320 FUN_180091320 ===== */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180091320(void)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int *piVar8;
  char cVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  int *piVar14;
  longlong lVar15;
  char *pcVar16;
  undefined1 auStack_1098 [32];
  double local_1078;
  undefined4 local_1070;
  char *local_1068;
  undefined8 local_1058 [2];
  int local_1048;
  undefined8 local_1044;
  undefined4 uStack_103c;
  undefined1 auStack_1038 [8];
  undefined1 auStack_1030 [8];
  undefined4 uStack_1028;
  undefined8 uStack_1024;
  undefined4 uStack_101c;
  undefined8 auStack_1018 [58];
  undefined4 auStack_e48 [900];
  ulonglong local_38;
  
  piVar8 = DAT_180c8cf50;
  local_38 = DAT_180919500 ^ (ulonglong)auStack_1098;
  iVar10 = DAT_18096359c;
  for (piVar14 = DAT_180c8cf48; piVar14 != piVar8; piVar14 = piVar14 + 0x80) {
    DAT_18096359c = *piVar14;
    if (iVar10 < DAT_18096359c) {
      iVar10 = piVar14[2];
      if ((iVar10 < 0) || ((int)(DAT_181112370 - DAT_181112368 >> 4) * -0x194be3ab <= iVar10)) {
        lVar15 = 0;
      }
      else {
        lVar15 = (longlong)iVar10 * 0xfd0 + DAT_181112368;
      }
      if (*(longlong *)(piVar14 + 0x42) == *(longlong *)(piVar14 + 0x44)) {
        pcVar16 = "record without bones";
      }
      else if ((lVar15 == 0) || (*(longlong *)(lVar15 + 8) == 0)) {
        pcVar16 = "no lag entry";
      }
      else if ((DAT_180ca09f0 == 0) ||
              (iVar10 = FUN_180011200(*(longlong *)(lVar15 + 8) + (ulonglong)DAT_180ca09f0),
              999 < iVar10 - 1U)) {
        pcVar16 = "target dead";
      }
      else {
        pcVar16 = "created";
        FUN_180540170(&local_1044,0,0x1000);
        uVar13 = 0;
        lVar12 = 0;
        do {
          *(undefined8 *)(auStack_1030 + lVar12 + 0xc) = 0;
          lVar11 = uVar13 * 0x20;
          uVar13 = uVar13 + 0x10;
          *(undefined4 *)((longlong)auStack_1018 + lVar12 + -4) = 0;
          *(undefined8 *)((longlong)auStack_1018 + lVar12) = 0x3f800000;
          *(undefined8 *)((longlong)auStack_1018 + lVar12 + 8) = 0;
          *(undefined8 *)((longlong)auStack_1018 + lVar12 + 0x10) = 0x3f800000;
          *(undefined8 *)((longlong)auStack_1018 + lVar12 + 0x18) = 0;
          *(undefined8 *)((longlong)auStack_1018 + lVar12 + 0x20) = 0x3f800000;
          *(undefined8 *)((longlong)auStack_1018 + lVar12 + 0x28) = 0;
          *(undefined8 *)((longlong)auStack_1018 + lVar12 + 0x30) = 0x3f800000;
          *(undefined8 *)((longlong)auStack_1018 + lVar12 + 0x38) = 0;
          *(undefined8 *)((longlong)auStack_1018 + lVar12 + 0x40) = 0x3f800000;
          *(undefined8 *)((longlong)auStack_1018 + lVar12 + 0x48) = 0;
          *(undefined8 *)((longlong)auStack_1018 + lVar12 + 0x50) = 0x3f800000;
          *(undefined8 *)((longlong)auStack_1018 + lVar12 + 0x58) = 0;
          *(undefined8 *)((longlong)auStack_1018 + lVar12 + 0x60) = 0x3f800000;
          *(undefined8 *)((longlong)auStack_1018 + lVar12 + 0x68) = 0;
          *(undefined8 *)((longlong)auStack_1018 + lVar12 + 0x70) = 0x3f800000;
          *(undefined8 *)((longlong)auStack_1018 + lVar12 + 0x78) = 0;
          *(undefined8 *)((longlong)auStack_1018 + lVar12 + 0x80) = 0x3f800000;
          *(undefined8 *)((longlong)auStack_1018 + lVar12 + 0x88) = 0;
          *(undefined8 *)((longlong)auStack_1018 + lVar12 + 0x90) = 0x3f800000;
          *(undefined8 *)((longlong)auStack_1018 + lVar12 + 0x98) = 0;
          *(undefined8 *)((longlong)auStack_1018 + lVar12 + 0xa0) = 0x3f800000;
          *(undefined8 *)((longlong)auStack_1018 + lVar12 + 0xa8) = 0;
          *(undefined8 *)((longlong)auStack_1018 + lVar12 + 0xb0) = 0x3f800000;
          *(undefined8 *)((longlong)auStack_1018 + lVar12 + 0xb8) = 0;
          *(undefined8 *)((longlong)auStack_1018 + lVar12 + 0xc0) = 0x3f800000;
          *(undefined8 *)((longlong)auStack_1018 + lVar12 + 200) = 0;
          *(undefined8 *)((longlong)auStack_1018 + lVar12 + 0xd0) = 0x3f800000;
          *(undefined8 *)((longlong)auStack_1018 + lVar12 + 0xd8) = 0;
          *(undefined8 *)((longlong)auStack_1018 + lVar12 + 0xe0) = 0x3f800000;
          *(undefined8 *)((longlong)auStack_1018 + lVar12 + 0xe8) = 0;
          *(undefined8 *)((longlong)auStack_1018 + lVar12 + 0xf0) = 0x3f800000;
          *(undefined8 *)((longlong)auStack_1018 + lVar12 + 0xf8) = 0;
          *(undefined8 *)((longlong)auStack_1018 + lVar12 + 0x100) = 0x3f800000;
          *(undefined8 *)((longlong)auStack_1018 + lVar12 + 0x108) = 0;
          *(undefined8 *)((longlong)auStack_1018 + lVar12 + 0x110) = 0x3f800000;
          *(undefined8 *)((longlong)auStack_1018 + lVar12 + 0x118) = 0;
          *(undefined8 *)((longlong)auStack_1018 + lVar12 + 0x120) = 0x3f800000;
          *(undefined8 *)((longlong)auStack_1018 + lVar12 + 0x128) = 0;
          *(undefined8 *)((longlong)auStack_1018 + lVar12 + 0x130) = 0x3f800000;
          *(undefined8 *)((longlong)auStack_1018 + lVar12 + 0x138) = 0;
          *(undefined8 *)((longlong)auStack_1018 + lVar12 + 0x140) = 0x3f800000;
          *(undefined8 *)((longlong)auStack_1018 + lVar12 + 0x148) = 0;
          *(undefined8 *)((longlong)auStack_1018 + lVar12 + 0x150) = 0x3f800000;
          *(undefined8 *)((longlong)auStack_1018 + lVar12 + 0x158) = 0;
          *(undefined8 *)((longlong)auStack_1018 + lVar12 + 0x160) = 0x3f800000;
          *(undefined8 *)((longlong)auStack_1018 + lVar12 + 0x168) = 0;
          *(undefined8 *)((longlong)auStack_1018 + lVar12 + 0x170) = 0x3f800000;
          *(undefined8 *)((longlong)auStack_1018 + lVar12 + 0x178) = 0;
          *(undefined8 *)((longlong)auStack_1018 + lVar12 + 0x180) = 0x3f800000;
          *(undefined8 *)((longlong)auStack_1018 + lVar12 + 0x188) = 0;
          *(undefined8 *)((longlong)auStack_1018 + lVar12 + 400) = 0x3f800000;
          *(undefined8 *)((longlong)auStack_1018 + lVar12 + 0x198) = 0;
          *(undefined8 *)((longlong)auStack_1018 + lVar12 + 0x1a0) = 0x3f800000;
          *(undefined8 *)((longlong)auStack_1018 + lVar12 + 0x1a8) = 0;
          *(undefined8 *)((longlong)auStack_1018 + lVar12 + 0x1b0) = 0x3f800000;
          *(undefined8 *)((longlong)auStack_1018 + lVar12 + 0x1b8) = 0;
          *(undefined8 *)((longlong)auStack_1018 + lVar12 + 0x1c0) = 0x3f800000;
          *(undefined8 *)((longlong)auStack_1018 + lVar12 + 0x1c8) = 0;
          *(undefined4 *)((longlong)auStack_e48 + lVar12) = 0x3f800000;
          lVar12 = lVar12 + 0x200;
          *(undefined8 *)((longlong)local_1058 + lVar11 + 0x14) = 0;
          *(undefined4 *)(auStack_1038 + lVar11 + -4) = 0;
          *(undefined8 *)(auStack_1038 + lVar11) = 0x3f800000;
          *(undefined8 *)(auStack_1030 + lVar11) = 0;
          *(undefined4 *)(auStack_1030 + lVar11 + 8) = 0x3f800000;
        } while (uVar13 < 0x80);
        lVar12 = *(longlong *)(piVar14 + 0x42);
        iVar10 = 0;
        uVar13 = *(longlong *)(piVar14 + 0x44) - lVar12 >> 5;
        local_1048 = (int)uVar13;
        if (0x80 < uVar13) {
          local_1048 = 0x80;
        }
        if (0 < local_1048) {
          do {
            lVar11 = (longlong)iVar10;
            iVar10 = iVar10 + 1;
            lVar11 = lVar11 * 0x20;
            puVar1 = (undefined4 *)(lVar12 + lVar11);
            uVar3 = puVar1[1];
            uVar4 = puVar1[2];
            uVar5 = puVar1[3];
            puVar2 = (undefined8 *)(lVar12 + 0x10 + lVar11);
            uVar6 = *puVar2;
            uVar7 = puVar2[1];
            *(undefined4 *)((longlong)local_1058 + lVar11 + 0x14) = *puVar1;
            *(undefined4 *)(auStack_1038 + lVar11 + -8) = uVar3;
            *(undefined4 *)(auStack_1038 + lVar11 + -4) = uVar4;
            *(undefined4 *)(auStack_1038 + lVar11) = uVar5;
            *(undefined8 *)(auStack_1038 + lVar11 + 4) = uVar6;
            *(undefined8 *)(auStack_1030 + lVar11 + 4) = uVar7;
          } while (iVar10 < local_1048);
        }
        local_1058[0] = *(undefined8 *)(lVar15 + 8);
        cVar9 = FUN_180090f60(local_1058,&local_1048);
        if ((cVar9 == '\0') &&
           (pcVar16 = "copy not created",
           0x3f < (ulonglong)((DAT_180cd00f8 - DAT_180cd00f0 >> 3) * 0x2d612be659c5cbb7))) {
          pcVar16 = "limit";
        }
      }
      local_1078 = (double)(float)piVar14[0xc];
      local_1070 = (undefined4)(*(longlong *)(piVar14 + 0x44) - *(longlong *)(piVar14 + 0x42) >> 5);
      local_1068 = pcVar16;
      FUN_18008f560("on shot | command %d | target %d | record %d+%.3f | bones %d | %s",*piVar14,
                    piVar14[2],piVar14[0xb]);
      iVar10 = DAT_18096359c;
    }
    DAT_18096359c = iVar10;
    iVar10 = DAT_18096359c;
  }
  DAT_18096359c = iVar10;
  return;
}



/* ===== 1800917e0 FUN_1800917e0 ===== */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800917e0(void)

{
  float fVar1;
  LARGE_INTEGER LVar2;
  double dVar3;
  bool bVar4;
  float fVar5;
  float fVar6;
  longlong lVar7;
  undefined4 uVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  ULONGLONG UVar12;
  longlong *plVar13;
  float *pfVar14;
  longlong lVar15;
  longlong lVar16;
  float *pfVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar20;
  undefined8 *puVar21;
  undefined8 uVar22;
  ulonglong uVar23;
  float fVar24;
  float fVar25;
  undefined1 auStack_2278 [32];
  LARGE_INTEGER local_2258;
  undefined8 *local_2250;
  undefined8 local_2248;
  undefined8 local_2240;
  double local_2238;
  int local_2230;
  double local_2228;
  double local_2220;
  double local_2218;
  double local_2210;
  undefined4 local_2208;
  double local_2200;
  double local_21f8;
  LARGE_INTEGER local_21e8;
  LARGE_INTEGER local_21e0;
  float local_21d8;
  float local_21d4 [3];
  undefined8 local_21c8;
  undefined8 local_21c0;
  undefined8 local_21b8;
  undefined8 local_21b0;
  undefined8 local_21a8;
  undefined8 *local_21a0;
  undefined8 local_2198;
  undefined8 local_2190;
  undefined8 local_2188;
  undefined8 local_2180;
  undefined8 local_2178;
  undefined4 local_2170;
  undefined8 local_216c;
  undefined8 uStack_2164;
  undefined4 local_215c;
  undefined *local_2158;
  undefined1 local_2150 [8];
  undefined8 local_2148;
  undefined8 uStack_2140;
  undefined8 local_2138;
  undefined8 uStack_2130;
  undefined8 local_2128;
  undefined8 uStack_2120;
  undefined8 local_2118;
  undefined8 uStack_2110;
  undefined1 local_2108;
  undefined8 local_20f8;
  undefined8 local_20f0;
  undefined8 local_20e8;
  undefined8 local_20e0;
  undefined4 uStack_20d8;
  undefined8 auStack_20d4 [2];
  undefined4 uStack_20c4;
  undefined8 uStack_20c0;
  undefined4 uStack_20b8;
  undefined8 auStack_20b4 [58];
  undefined4 auStack_1ee4 [897];
  undefined8 local_10e0;
  undefined8 uStack_10d8;
  undefined4 local_10c8;
  undefined8 local_10c4;
  undefined4 uStack_10bc;
  undefined8 auStack_10b8 [2];
  undefined4 uStack_10a8;
  undefined8 uStack_10a4;
  undefined4 uStack_109c;
  undefined8 auStack_1098 [58];
  undefined4 auStack_ec8 [900];
  ulonglong local_b8;
  undefined8 local_48;
  
  local_48 = 0x1800917ff;
  local_b8 = DAT_180919500 ^ (ulonglong)auStack_2278;
  if (DAT_180cd1304 == '\0') {
    FUN_1803a0b60(&local_21e8);
    DAT_181108a00 = local_21e8.s;
    DAT_1811089f8 = FUN_1803a0c50(&local_21e8);
    DAT_180cd1304 = '\x01';
  }
  lVar19 = DAT_1811089f8;
  local_2158 = &DAT_1809635a0;
  iVar10 = FUN_1804e4d70();
  if (iVar10 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809635ec == 0x7fffffff) {
    DAT_1809635ec = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  if ((lVar19 == 0) || (cVar9 = FUN_18008f640(), cVar9 == '\0')) {
    puVar21 = &DAT_1809635f0;
    do {
      FUN_18008fc20(puVar21);
      lVar19 = DAT_180cd00f8;
      puVar21 = puVar21 + 0x205;
    } while (puVar21 != (undefined8 *)&DAT_1809a5018);
    lVar20 = DAT_180cd00f0;
    if (DAT_180cd00f0 != DAT_180cd00f8) {
      do {
        FUN_18008fc20(lVar20);
        lVar20 = lVar20 + 0x1038;
      } while (lVar20 != lVar19);
      if (DAT_180cd00f0 != DAT_180cd00f8) {
        DAT_180cd00f8 = DAT_180cd00f0;
      }
    }
  }
  else {
    if (((DAT_1809207b0 < 1) || (DAT_180ca09f0 == 0)) ||
       (iVar10 = FUN_180011200(), 999 < iVar10 - 1U)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    local_2148 = 0;
    uStack_2140 = 0;
    local_2138 = 0;
    uStack_2130 = 0;
    local_2128 = 0;
    uStack_2120 = 0;
    local_2118 = 0;
    uStack_2110 = 0;
    local_2108 = 0;
    local_21c8 = 0;
    local_21c0 = 0;
    local_21b8 = 0;
    local_21b0 = 0;
    local_21a8 = 0;
    local_21a0 = (undefined8 *)0x0;
    local_2198 = 0;
    local_2190 = 0;
    if (bVar4) {
      cVar9 = FUN_180090380(&local_21c8);
      if (cVar9 != '\0') {
        UVar12 = GetTickCount64();
        lVar20 = DAT_181112368;
        lVar15 = DAT_181112370;
        if (1999 < UVar12 - _DAT_180cd0110) {
          local_21f8 = (double)(((float)(int)local_21c8 + local_21c8._4_4_) -
                               (float)local_21a8 * DAT_1808acab0);
          local_2200 = (double)local_21c0._4_4_;
          local_2210 = (double)DAT_180c8a7fc;
          local_2220 = (double)(float)local_21a8;
          local_2228 = (double)local_21c8._4_4_;
          local_2238 = (double)local_21a8._4_4_;
          local_2258.s = (_struct_19)(double)local_21b0._4_4_;
          local_2218 = (double)((float)local_21a8 * DAT_1808acab0);
          local_2208 = (undefined4)local_21c0;
          local_2230 = (int)local_21c8;
          local_2240 = local_2190;
          local_2248 = local_2198;
          local_2250 = local_21a0;
          _DAT_180cd0110 = UVar12;
          FUN_18008f560("time | predicted %d | client tick %d | gate %.5f frac %.3f | split ctl %p local ctl %p used %p | interp %.5f s | stamp %d+%.3f | curtime %.4f (%.2f t) | maxunlag %.3f | target %d+%.3f | lead %.2f t"
                        ,local_21b8 & 0xffffffff,local_21b8._4_4_,(double)(float)local_21b0);
          lVar20 = DAT_181112368;
          lVar15 = DAT_181112370;
        }
        while( true ) {
          lVar7 = DAT_181112370;
          bVar4 = lVar20 == DAT_181112370;
          DAT_181112370 = lVar15;
          if (bVar4) break;
          if (*(char *)(lVar20 + 0x1c) == '\0') {
            if (*(longlong *)(lVar20 + 8) != 0) {
              if (*(int *)(lVar20 + 0x10) - 1U < 0x40) {
                if (*(int *)(lVar20 + 0x14) != -1) {
                  plVar13 = (longlong *)FUN_1803a0940(local_2150);
                  LVar2.s = *(_struct_19 *)(lVar20 + 8);
                  if (((*plVar13 == LVar2.QuadPart) && (local_21e0.s = LVar2.s, LVar2.QuadPart != 0)
                      ) && ((DAT_180ca09f0 != 0 &&
                            ((iVar10 = FUN_180011200(LVar2.QuadPart + (ulonglong)DAT_180ca09f0),
                             iVar10 - 1U < 1000 &&
                             (cVar9 = FUN_180469a20(*(undefined8 *)(lVar20 + 8),lVar19),
                             cVar9 == '\0')))))) {
                    iVar10 = *(int *)(lVar20 + 0x10);
                    local_21e8.QuadPart = local_21e8.QuadPart & 0xffffffff00000000;
                    local_10c8 = 0;
                    FUN_180540170(&local_10c4,0,0x1000);
                    uVar18 = 0;
                    lVar15 = 0;
                    do {
                      *(undefined8 *)((longlong)auStack_10b8 + uVar18 * 0x20 + -0xc) = 0;
                      *(undefined4 *)((longlong)auStack_10b8 + uVar18 * 0x20 + -4) = 0;
                      auStack_10b8[uVar18 * 4] = 0x3f800000;
                      auStack_10b8[uVar18 * 4 + 1] = 0;
                      *(undefined4 *)(auStack_10b8 + uVar18 * 4 + 2) = 0x3f800000;
                      *(undefined8 *)((longlong)auStack_10b8 + lVar15 + 0x14) = 0;
                      *(undefined4 *)((longlong)auStack_1098 + lVar15 + -4) = 0;
                      *(undefined8 *)((longlong)auStack_1098 + lVar15) = 0x3f800000;
                      *(undefined8 *)((longlong)auStack_1098 + lVar15 + 8) = 0;
                      *(undefined8 *)((longlong)auStack_1098 + lVar15 + 0x10) = 0x3f800000;
                      *(undefined8 *)((longlong)auStack_1098 + lVar15 + 0x18) = 0;
                      *(undefined8 *)((longlong)auStack_1098 + lVar15 + 0x20) = 0x3f800000;
                      *(undefined8 *)((longlong)auStack_1098 + lVar15 + 0x28) = 0;
                      *(undefined8 *)((longlong)auStack_1098 + lVar15 + 0x30) = 0x3f800000;
                      *(undefined8 *)((longlong)auStack_1098 + lVar15 + 0x38) = 0;
                      *(undefined8 *)((longlong)auStack_1098 + lVar15 + 0x40) = 0x3f800000;
                      *(undefined8 *)((longlong)auStack_1098 + lVar15 + 0x48) = 0;
                      *(undefined8 *)((longlong)auStack_1098 + lVar15 + 0x50) = 0x3f800000;
                      *(undefined8 *)((longlong)auStack_1098 + lVar15 + 0x58) = 0;
                      *(undefined8 *)((longlong)auStack_1098 + lVar15 + 0x60) = 0x3f800000;
                      *(undefined8 *)((longlong)auStack_1098 + lVar15 + 0x68) = 0;
                      *(undefined8 *)((longlong)auStack_1098 + lVar15 + 0x70) = 0x3f800000;
                      *(undefined8 *)((longlong)auStack_1098 + lVar15 + 0x78) = 0;
                      *(undefined8 *)((longlong)auStack_1098 + lVar15 + 0x80) = 0x3f800000;
                      *(undefined8 *)((longlong)auStack_1098 + lVar15 + 0x88) = 0;
                      *(undefined8 *)((longlong)auStack_1098 + lVar15 + 0x90) = 0x3f800000;
                      *(undefined8 *)((longlong)auStack_1098 + lVar15 + 0x98) = 0;
                      *(undefined8 *)((longlong)auStack_1098 + lVar15 + 0xa0) = 0x3f800000;
                      *(undefined8 *)((longlong)auStack_1098 + lVar15 + 0xa8) = 0;
                      *(undefined8 *)((longlong)auStack_1098 + lVar15 + 0xb0) = 0x3f800000;
                      *(undefined8 *)((longlong)auStack_1098 + lVar15 + 0xb8) = 0;
                      *(undefined8 *)((longlong)auStack_1098 + lVar15 + 0xc0) = 0x3f800000;
                      *(undefined8 *)((longlong)auStack_1098 + lVar15 + 200) = 0;
                      *(undefined8 *)((longlong)auStack_1098 + lVar15 + 0xd0) = 0x3f800000;
                      *(undefined8 *)((longlong)auStack_1098 + lVar15 + 0xd8) = 0;
                      *(undefined8 *)((longlong)auStack_1098 + lVar15 + 0xe0) = 0x3f800000;
                      *(undefined8 *)((longlong)auStack_1098 + lVar15 + 0xe8) = 0;
                      *(undefined8 *)((longlong)auStack_1098 + lVar15 + 0xf0) = 0x3f800000;
                      *(undefined8 *)((longlong)auStack_1098 + lVar15 + 0xf8) = 0;
                      *(undefined8 *)((longlong)auStack_1098 + lVar15 + 0x100) = 0x3f800000;
                      *(undefined8 *)((longlong)auStack_1098 + lVar15 + 0x108) = 0;
                      *(undefined8 *)((longlong)auStack_1098 + lVar15 + 0x110) = 0x3f800000;
                      *(undefined8 *)((longlong)auStack_1098 + lVar15 + 0x118) = 0;
                      *(undefined8 *)((longlong)auStack_1098 + lVar15 + 0x120) = 0x3f800000;
                      *(undefined8 *)((longlong)auStack_1098 + lVar15 + 0x128) = 0;
                      *(undefined8 *)((longlong)auStack_1098 + lVar15 + 0x130) = 0x3f800000;
                      *(undefined8 *)((longlong)auStack_1098 + lVar15 + 0x138) = 0;
                      *(undefined8 *)((longlong)auStack_1098 + lVar15 + 0x140) = 0x3f800000;
                      *(undefined8 *)((longlong)auStack_1098 + lVar15 + 0x148) = 0;
                      *(undefined8 *)((longlong)auStack_1098 + lVar15 + 0x150) = 0x3f800000;
                      *(undefined8 *)((longlong)auStack_1098 + lVar15 + 0x158) = 0;
                      *(undefined8 *)((longlong)auStack_1098 + lVar15 + 0x160) = 0x3f800000;
                      *(undefined8 *)((longlong)auStack_1098 + lVar15 + 0x168) = 0;
                      *(undefined8 *)((longlong)auStack_1098 + lVar15 + 0x170) = 0x3f800000;
                      *(undefined8 *)((longlong)auStack_1098 + lVar15 + 0x178) = 0;
                      *(undefined8 *)((longlong)auStack_1098 + lVar15 + 0x180) = 0x3f800000;
                      *(undefined8 *)((longlong)auStack_1098 + lVar15 + 0x188) = 0;
                      *(undefined8 *)((longlong)auStack_1098 + lVar15 + 400) = 0x3f800000;
                      *(undefined8 *)((longlong)auStack_1098 + lVar15 + 0x198) = 0;
                      *(undefined8 *)((longlong)auStack_1098 + lVar15 + 0x1a0) = 0x3f800000;
                      *(undefined8 *)((longlong)auStack_1098 + lVar15 + 0x1a8) = 0;
                      *(undefined8 *)((longlong)auStack_1098 + lVar15 + 0x1b0) = 0x3f800000;
                      *(undefined8 *)((longlong)auStack_1098 + lVar15 + 0x1b8) = 0;
                      *(undefined8 *)((longlong)auStack_1098 + lVar15 + 0x1c0) = 0x3f800000;
                      *(undefined8 *)((longlong)auStack_1098 + lVar15 + 0x1c8) = 0;
                      *(undefined4 *)((longlong)auStack_ec8 + lVar15) = 0x3f800000;
                      uVar18 = uVar18 + 0x10;
                      lVar15 = lVar15 + 0x200;
                    } while (uVar18 < 0x80);
                    local_2188 = 0;
                    local_2180 = 0;
                    local_2178 = 0;
                    local_2170 = 0;
                    local_216c = 0;
                    uStack_2164 = 0;
                    local_215c = 0;
                    local_2250 = &local_2188;
                    local_2258.QuadPart = (LONGLONG)&local_21e8;
                    iVar11 = FUN_180090620(lVar20,&local_21e0,&local_21c0,&local_10c8);
                    if (iVar11 == 0) {
                      lVar15 = (longlong)iVar10 * 0x1028;
                      plVar13 = &DAT_1809635f0 + (longlong)iVar10 * 0x205;
                      if (*(longlong *)(&DAT_1809635f8 + lVar15) != *(longlong *)(lVar20 + 8)) {
                        FUN_18008fc20(plVar13);
                        local_20f8 = 0;
                        local_20f0 = 0;
                        local_20e8 = 0;
                        FUN_180540170(&local_20e0,0,0x1000);
                        uVar18 = 0;
                        lVar16 = 0;
                        do {
                          *(undefined8 *)((longlong)auStack_20d4 + uVar18 * 0x20 + -0xc) = 0;
                          *(undefined4 *)((longlong)auStack_20d4 + uVar18 * 0x20 + -4) = 0;
                          auStack_20d4[uVar18 * 4] = 0x3f800000;
                          auStack_20d4[uVar18 * 4 + 1] = 0;
                          *(undefined4 *)(auStack_20d4 + uVar18 * 4 + 2) = 0x3f800000;
                          *(undefined8 *)((longlong)auStack_20d4 + lVar16 + 0x14) = 0;
                          *(undefined4 *)((longlong)auStack_20b4 + lVar16 + -4) = 0;
                          *(undefined8 *)((longlong)auStack_20b4 + lVar16) = 0x3f800000;
                          *(undefined8 *)((longlong)auStack_20b4 + lVar16 + 8) = 0;
                          *(undefined8 *)((longlong)auStack_20b4 + lVar16 + 0x10) = 0x3f800000;
                          *(undefined8 *)((longlong)auStack_20b4 + lVar16 + 0x18) = 0;
                          *(undefined8 *)((longlong)auStack_20b4 + lVar16 + 0x20) = 0x3f800000;
                          *(undefined8 *)((longlong)auStack_20b4 + lVar16 + 0x28) = 0;
                          *(undefined8 *)((longlong)auStack_20b4 + lVar16 + 0x30) = 0x3f800000;
                          *(undefined8 *)((longlong)auStack_20b4 + lVar16 + 0x38) = 0;
                          *(undefined8 *)((longlong)auStack_20b4 + lVar16 + 0x40) = 0x3f800000;
                          *(undefined8 *)((longlong)auStack_20b4 + lVar16 + 0x48) = 0;
                          *(undefined8 *)((longlong)auStack_20b4 + lVar16 + 0x50) = 0x3f800000;
                          *(undefined8 *)((longlong)auStack_20b4 + lVar16 + 0x58) = 0;
                          *(undefined8 *)((longlong)auStack_20b4 + lVar16 + 0x60) = 0x3f800000;
                          *(undefined8 *)((longlong)auStack_20b4 + lVar16 + 0x68) = 0;
                          *(undefined8 *)((longlong)auStack_20b4 + lVar16 + 0x70) = 0x3f800000;
                          *(undefined8 *)((longlong)auStack_20b4 + lVar16 + 0x78) = 0;
                          *(undefined8 *)((longlong)auStack_20b4 + lVar16 + 0x80) = 0x3f800000;
                          *(undefined8 *)((longlong)auStack_20b4 + lVar16 + 0x88) = 0;
                          *(undefined8 *)((longlong)auStack_20b4 + lVar16 + 0x90) = 0x3f800000;
                          *(undefined8 *)((longlong)auStack_20b4 + lVar16 + 0x98) = 0;
                          *(undefined8 *)((longlong)auStack_20b4 + lVar16 + 0xa0) = 0x3f800000;
                          *(undefined8 *)((longlong)auStack_20b4 + lVar16 + 0xa8) = 0;
                          *(undefined8 *)((longlong)auStack_20b4 + lVar16 + 0xb0) = 0x3f800000;
                          *(undefined8 *)((longlong)auStack_20b4 + lVar16 + 0xb8) = 0;
                          *(undefined8 *)((longlong)auStack_20b4 + lVar16 + 0xc0) = 0x3f800000;
                          *(undefined8 *)((longlong)auStack_20b4 + lVar16 + 200) = 0;
                          *(undefined8 *)((longlong)auStack_20b4 + lVar16 + 0xd0) = 0x3f800000;
                          *(undefined8 *)((longlong)auStack_20b4 + lVar16 + 0xd8) = 0;
                          *(undefined8 *)((longlong)auStack_20b4 + lVar16 + 0xe0) = 0x3f800000;
                          *(undefined8 *)((longlong)auStack_20b4 + lVar16 + 0xe8) = 0;
                          *(undefined8 *)((longlong)auStack_20b4 + lVar16 + 0xf0) = 0x3f800000;
                          *(undefined8 *)((longlong)auStack_20b4 + lVar16 + 0xf8) = 0;
                          *(undefined8 *)((longlong)auStack_20b4 + lVar16 + 0x100) = 0x3f800000;
                          *(undefined8 *)((longlong)auStack_20b4 + lVar16 + 0x108) = 0;
                          *(undefined8 *)((longlong)auStack_20b4 + lVar16 + 0x110) = 0x3f800000;
                          *(undefined8 *)((longlong)auStack_20b4 + lVar16 + 0x118) = 0;
                          *(undefined8 *)((longlong)auStack_20b4 + lVar16 + 0x120) = 0x3f800000;
                          *(undefined8 *)((longlong)auStack_20b4 + lVar16 + 0x128) = 0;
                          *(undefined8 *)((longlong)auStack_20b4 + lVar16 + 0x130) = 0x3f800000;
                          *(undefined8 *)((longlong)auStack_20b4 + lVar16 + 0x138) = 0;
                          *(undefined8 *)((longlong)auStack_20b4 + lVar16 + 0x140) = 0x3f800000;
                          *(undefined8 *)((longlong)auStack_20b4 + lVar16 + 0x148) = 0;
                          *(undefined8 *)((longlong)auStack_20b4 + lVar16 + 0x150) = 0x3f800000;
                          *(undefined8 *)((longlong)auStack_20b4 + lVar16 + 0x158) = 0;
                          *(undefined8 *)((longlong)auStack_20b4 + lVar16 + 0x160) = 0x3f800000;
                          *(undefined8 *)((longlong)auStack_20b4 + lVar16 + 0x168) = 0;
                          *(undefined8 *)((longlong)auStack_20b4 + lVar16 + 0x170) = 0x3f800000;
                          *(undefined8 *)((longlong)auStack_20b4 + lVar16 + 0x178) = 0;
                          *(undefined8 *)((longlong)auStack_20b4 + lVar16 + 0x180) = 0x3f800000;
                          *(undefined8 *)((longlong)auStack_20b4 + lVar16 + 0x188) = 0;
                          *(undefined8 *)((longlong)auStack_20b4 + lVar16 + 400) = 0x3f800000;
                          *(undefined8 *)((longlong)auStack_20b4 + lVar16 + 0x198) = 0;
                          *(undefined8 *)((longlong)auStack_20b4 + lVar16 + 0x1a0) = 0x3f800000;
                          *(undefined8 *)((longlong)auStack_20b4 + lVar16 + 0x1a8) = 0;
                          *(undefined8 *)((longlong)auStack_20b4 + lVar16 + 0x1b0) = 0x3f800000;
                          *(undefined8 *)((longlong)auStack_20b4 + lVar16 + 0x1b8) = 0;
                          *(undefined8 *)((longlong)auStack_20b4 + lVar16 + 0x1c0) = 0x3f800000;
                          *(undefined8 *)((longlong)auStack_20b4 + lVar16 + 0x1c8) = 0;
                          *(undefined4 *)((longlong)auStack_1ee4 + lVar16) = 0x3f800000;
                          uVar18 = uVar18 + 0x10;
                          lVar16 = lVar16 + 0x200;
                        } while (uVar18 < 0x80);
                        local_10e0 = 0;
                        uStack_10d8 = 0;
                        FUN_180540530(plVar13,&local_20f8,0x1028);
                        *(undefined8 *)(&DAT_1809635f8 + lVar15) = *(undefined8 *)(lVar20 + 8);
                      }
                      lVar16 = *plVar13;
                      if (lVar16 == 0) {
                        lVar16 = FUN_18008f890(&local_21e0);
                        *plVar13 = lVar16;
                      }
                      uVar22 = 9;
                      if (lVar16 != 0) {
                        uVar22 = 0;
                      }
                      uVar8 = local_21e8.s.LowPart;
                      local_2258.s.LowPart = local_21e8.s.LowPart;
                      FUN_180090c90(lVar20,&local_21c0,uVar22,&local_2188);
                      if (*plVar13 != 0) {
                        FUN_180540530(&DAT_180963604 + lVar15,&local_10c8,0x1004);
                        *(undefined4 *)(&DAT_180963600 + lVar15) = uVar8;
                        FUN_18008fd20(plVar13);
                        FUN_18008fb20(plVar13,DAT_180920808,&DAT_18092080c,uVar8);
                        *(undefined1 *)((longlong)&local_2148 + (longlong)*(int *)(lVar20 + 0x10)) =
                             1;
                      }
                    }
                    else {
                      local_2258.s.LowPart = local_21e8.s.LowPart;
                      FUN_180090c90(lVar20,&local_21c0,iVar11,&local_2188);
                    }
                  }
                }
              }
            }
          }
          lVar20 = lVar20 + 0xfd0;
          lVar15 = DAT_181112370;
          DAT_181112370 = lVar7;
        }
      }
    }
    uVar18 = 0;
    do {
      if ((*(char *)((longlong)&local_2148 + uVar18) == '\0') &&
         (plVar13 = &DAT_1809635f0 + uVar18 * 0x205, *plVar13 != 0)) {
        FUN_18008fc20(plVar13);
        local_20f8 = 0;
        local_20f0 = 0;
        local_20e8 = 0;
        FUN_180540170(&local_20e0,0,0x1000);
        uVar23 = 0;
        lVar19 = 0;
        do {
          *(undefined8 *)((longlong)auStack_20d4 + uVar23 * 0x20 + -0xc) = 0;
          *(undefined4 *)((longlong)auStack_20d4 + uVar23 * 0x20 + -4) = 0;
          auStack_20d4[uVar23 * 4] = 0x3f800000;
          auStack_20d4[uVar23 * 4 + 1] = 0;
          *(undefined4 *)(auStack_20d4 + uVar23 * 4 + 2) = 0x3f800000;
          *(undefined8 *)((longlong)auStack_20d4 + lVar19 + 0x14) = 0;
          *(undefined4 *)((longlong)auStack_20b4 + lVar19 + -4) = 0;
          *(undefined8 *)((longlong)auStack_20b4 + lVar19) = 0x3f800000;
          *(undefined8 *)((longlong)auStack_20b4 + lVar19 + 8) = 0;
          *(undefined8 *)((longlong)auStack_20b4 + lVar19 + 0x10) = 0x3f800000;
          *(undefined8 *)((longlong)auStack_20b4 + lVar19 + 0x18) = 0;
          *(undefined8 *)((longlong)auStack_20b4 + lVar19 + 0x20) = 0x3f800000;
          *(undefined8 *)((longlong)auStack_20b4 + lVar19 + 0x28) = 0;
          *(undefined8 *)((longlong)auStack_20b4 + lVar19 + 0x30) = 0x3f800000;
          *(undefined8 *)((longlong)auStack_20b4 + lVar19 + 0x38) = 0;
          *(undefined8 *)((longlong)auStack_20b4 + lVar19 + 0x40) = 0x3f800000;
          *(undefined8 *)((longlong)auStack_20b4 + lVar19 + 0x48) = 0;
          *(undefined8 *)((longlong)auStack_20b4 + lVar19 + 0x50) = 0x3f800000;
          *(undefined8 *)((longlong)auStack_20b4 + lVar19 + 0x58) = 0;
          *(undefined8 *)((longlong)auStack_20b4 + lVar19 + 0x60) = 0x3f800000;
          *(undefined8 *)((longlong)auStack_20b4 + lVar19 + 0x68) = 0;
          *(undefined8 *)((longlong)auStack_20b4 + lVar19 + 0x70) = 0x3f800000;
          *(undefined8 *)((longlong)auStack_20b4 + lVar19 + 0x78) = 0;
          *(undefined8 *)((longlong)auStack_20b4 + lVar19 + 0x80) = 0x3f800000;
          *(undefined8 *)((longlong)auStack_20b4 + lVar19 + 0x88) = 0;
          *(undefined8 *)((longlong)auStack_20b4 + lVar19 + 0x90) = 0x3f800000;
          *(undefined8 *)((longlong)auStack_20b4 + lVar19 + 0x98) = 0;
          *(undefined8 *)((longlong)auStack_20b4 + lVar19 + 0xa0) = 0x3f800000;
          *(undefined8 *)((longlong)auStack_20b4 + lVar19 + 0xa8) = 0;
          *(undefined8 *)((longlong)auStack_20b4 + lVar19 + 0xb0) = 0x3f800000;
          *(undefined8 *)((longlong)auStack_20b4 + lVar19 + 0xb8) = 0;
          *(undefined8 *)((longlong)auStack_20b4 + lVar19 + 0xc0) = 0x3f800000;
          *(undefined8 *)((longlong)auStack_20b4 + lVar19 + 200) = 0;
          *(undefined8 *)((longlong)auStack_20b4 + lVar19 + 0xd0) = 0x3f800000;
          *(undefined8 *)((longlong)auStack_20b4 + lVar19 + 0xd8) = 0;
          *(undefined8 *)((longlong)auStack_20b4 + lVar19 + 0xe0) = 0x3f800000;
          *(undefined8 *)((longlong)auStack_20b4 + lVar19 + 0xe8) = 0;
          *(undefined8 *)((longlong)auStack_20b4 + lVar19 + 0xf0) = 0x3f800000;
          *(undefined8 *)((longlong)auStack_20b4 + lVar19 + 0xf8) = 0;
          *(undefined8 *)((longlong)auStack_20b4 + lVar19 + 0x100) = 0x3f800000;
          *(undefined8 *)((longlong)auStack_20b4 + lVar19 + 0x108) = 0;
          *(undefined8 *)((longlong)auStack_20b4 + lVar19 + 0x110) = 0x3f800000;
          *(undefined8 *)((longlong)auStack_20b4 + lVar19 + 0x118) = 0;
          *(undefined8 *)((longlong)auStack_20b4 + lVar19 + 0x120) = 0x3f800000;
          *(undefined8 *)((longlong)auStack_20b4 + lVar19 + 0x128) = 0;
          *(undefined8 *)((longlong)auStack_20b4 + lVar19 + 0x130) = 0x3f800000;
          *(undefined8 *)((longlong)auStack_20b4 + lVar19 + 0x138) = 0;
          *(undefined8 *)((longlong)auStack_20b4 + lVar19 + 0x140) = 0x3f800000;
          *(undefined8 *)((longlong)auStack_20b4 + lVar19 + 0x148) = 0;
          *(undefined8 *)((longlong)auStack_20b4 + lVar19 + 0x150) = 0x3f800000;
          *(undefined8 *)((longlong)auStack_20b4 + lVar19 + 0x158) = 0;
          *(undefined8 *)((longlong)auStack_20b4 + lVar19 + 0x160) = 0x3f800000;
          *(undefined8 *)((longlong)auStack_20b4 + lVar19 + 0x168) = 0;
          *(undefined8 *)((longlong)auStack_20b4 + lVar19 + 0x170) = 0x3f800000;
          *(undefined8 *)((longlong)auStack_20b4 + lVar19 + 0x178) = 0;
          *(undefined8 *)((longlong)auStack_20b4 + lVar19 + 0x180) = 0x3f800000;
          *(undefined8 *)((longlong)auStack_20b4 + lVar19 + 0x188) = 0;
          *(undefined8 *)((longlong)auStack_20b4 + lVar19 + 400) = 0x3f800000;
          *(undefined8 *)((longlong)auStack_20b4 + lVar19 + 0x198) = 0;
          *(undefined8 *)((longlong)auStack_20b4 + lVar19 + 0x1a0) = 0x3f800000;
          *(undefined8 *)((longlong)auStack_20b4 + lVar19 + 0x1a8) = 0;
          *(undefined8 *)((longlong)auStack_20b4 + lVar19 + 0x1b0) = 0x3f800000;
          *(undefined8 *)((longlong)auStack_20b4 + lVar19 + 0x1b8) = 0;
          *(undefined8 *)((longlong)auStack_20b4 + lVar19 + 0x1c0) = 0x3f800000;
          *(undefined8 *)((longlong)auStack_20b4 + lVar19 + 0x1c8) = 0;
          *(undefined4 *)((longlong)auStack_1ee4 + lVar19) = 0x3f800000;
          uVar23 = uVar23 + 0x10;
          lVar19 = lVar19 + 0x200;
        } while (uVar23 < 0x80);
        local_10e0 = 0;
        uStack_10d8 = 0;
        FUN_180540530(plVar13,&local_20f8,0x1028);
      }
      lVar19 = DAT_180cd00f8;
      uVar18 = uVar18 + 1;
    } while (uVar18 < 0x41);
    if (DAT_180920740 < 1) {
      lVar20 = DAT_180cd00f0;
      if (DAT_180cd00f0 != DAT_180cd00f8) {
        do {
          FUN_18008fc20(lVar20);
          lVar20 = lVar20 + 0x1038;
        } while (lVar20 != lVar19);
        if (DAT_180cd00f0 != DAT_180cd00f8) {
          DAT_180cd00f8 = DAT_180cd00f0;
        }
      }
      DAT_18096359c = 0xffffffff;
    }
    else {
      FUN_180091320();
      local_21e0.QuadPart = 0;
      local_21e8.QuadPart = 0;
      QueryPerformanceFrequency(&local_21e0);
      QueryPerformanceCounter(&local_21e8);
      fVar6 = DAT_1808ac34c;
      fVar5 = DAT_1808ac154;
      dVar3 = 0.0;
      if (local_21e0.QuadPart != 0) {
        dVar3 = (double)local_21e8.QuadPart / (double)local_21e0.QuadPart;
      }
      local_21d4[0] = 5.0;
      local_21d8 = 0.5;
      pfVar17 = &local_21d8;
      if (DAT_1808ac1f4 <= DAT_1809207ac) {
        pfVar17 = &DAT_1809207ac;
      }
      pfVar14 = local_21d4;
      if (DAT_1809207ac <= DAT_1808ac750) {
        pfVar14 = pfVar17;
      }
      fVar1 = *pfVar14;
      lVar19 = DAT_180cd00f0;
      if (DAT_180cd00f0 != DAT_180cd00f8) {
        do {
          fVar25 = (float)(dVar3 - *(double *)(lVar19 + 0x1028));
          fVar24 = (fVar25 - fVar1) / fVar5;
          lVar20 = lVar19 + 0x1038;
          if (fVar6 < fVar24) {
LAB_1800926d7:
            FUN_18008fc20(lVar19);
            FUN_180540530(lVar19,lVar20,DAT_180cd00f8 - lVar20);
            DAT_180cd00f8 = DAT_180cd00f8 + -0x1038;
          }
          else {
            if (fVar24 <= 0.0) {
              fVar24 = 0.0;
            }
            if (fVar6 - fVar24 <= 0.0) goto LAB_1800926d7;
            if (fVar5 <= fVar25) {
              fVar25 = fVar5;
            }
            fVar25 = fVar6 - (fVar25 / fVar5) * (fVar6 - fVar24);
            fVar25 = fVar6 - fVar25 * fVar25 * fVar25;
            *(float *)(lVar19 + 0x10) = fVar25;
            FUN_18008fd20(lVar19);
            FUN_18008fb20(lVar19,DAT_180920798,&DAT_18092079c,fVar25);
            lVar19 = lVar20;
          }
        } while (lVar19 != DAT_180cd00f8);
      }
    }
  }
  FUN_1804e4e90(&DAT_1809635a0);
  return;
}



/* ===== 1800927f0 FUN_1800927f0 ===== */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800927f0(void)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  undefined1 auStack_1068 [32];
  undefined8 local_1048;
  undefined8 local_1040;
  undefined8 local_1038;
  undefined8 local_1030;
  undefined4 uStack_1028;
  undefined8 auStack_1024 [2];
  undefined4 uStack_1014;
  undefined8 uStack_1010;
  undefined4 uStack_1008;
  undefined8 auStack_1004 [58];
  undefined4 auStack_e34 [897];
  undefined8 local_30;
  undefined8 uStack_28;
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x180092804;
  local_18 = DAT_180919500 ^ (ulonglong)auStack_1068;
  iVar1 = FUN_1804e4d70(&DAT_1809635a0);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809635ec == 0x7fffffff) {
    DAT_1809635ec = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  puVar5 = &DAT_1809635f0;
  do {
    local_1048 = 0;
    local_1040 = 0;
    local_1038 = 0;
    FUN_180540170(&local_1030,0,0x1000);
    lVar2 = 0;
    uVar3 = 0;
    do {
      *(undefined8 *)((longlong)auStack_1024 + lVar2 + 0x14) = 0;
      uVar4 = uVar3 + 0x10;
      *(undefined4 *)((longlong)auStack_1004 + lVar2 + -4) = 0;
      *(undefined8 *)((longlong)auStack_1004 + lVar2) = 0x3f800000;
      *(undefined8 *)((longlong)auStack_1004 + lVar2 + 8) = 0;
      *(undefined8 *)((longlong)auStack_1004 + lVar2 + 0x10) = 0x3f800000;
      *(undefined8 *)((longlong)auStack_1004 + lVar2 + 0x18) = 0;
      *(undefined8 *)((longlong)auStack_1004 + lVar2 + 0x20) = 0x3f800000;
      *(undefined8 *)((longlong)auStack_1004 + lVar2 + 0x28) = 0;
      *(undefined8 *)((longlong)auStack_1004 + lVar2 + 0x30) = 0x3f800000;
      *(undefined8 *)((longlong)auStack_1004 + lVar2 + 0x38) = 0;
      *(undefined8 *)((longlong)auStack_1004 + lVar2 + 0x40) = 0x3f800000;
      *(undefined8 *)((longlong)auStack_1004 + lVar2 + 0x48) = 0;
      *(undefined8 *)((longlong)auStack_1004 + lVar2 + 0x50) = 0x3f800000;
      *(undefined8 *)((longlong)auStack_1004 + lVar2 + 0x58) = 0;
      *(undefined8 *)((longlong)auStack_1004 + lVar2 + 0x60) = 0x3f800000;
      *(undefined8 *)((longlong)auStack_1004 + lVar2 + 0x68) = 0;
      *(undefined8 *)((longlong)auStack_1004 + lVar2 + 0x70) = 0x3f800000;
      *(undefined8 *)((longlong)auStack_1004 + lVar2 + 0x78) = 0;
      *(undefined8 *)((longlong)auStack_1004 + lVar2 + 0x80) = 0x3f800000;
      *(undefined8 *)((longlong)auStack_1004 + lVar2 + 0x88) = 0;
      *(undefined8 *)((longlong)auStack_1004 + lVar2 + 0x90) = 0x3f800000;
      *(undefined8 *)((longlong)auStack_1004 + lVar2 + 0x98) = 0;
      *(undefined8 *)((longlong)auStack_1004 + lVar2 + 0xa0) = 0x3f800000;
      *(undefined8 *)((longlong)auStack_1004 + lVar2 + 0xa8) = 0;
      *(undefined8 *)((longlong)auStack_1004 + lVar2 + 0xb0) = 0x3f800000;
      *(undefined8 *)((longlong)auStack_1004 + lVar2 + 0xb8) = 0;
      *(undefined8 *)((longlong)auStack_1004 + lVar2 + 0xc0) = 0x3f800000;
      *(undefined8 *)((longlong)auStack_1004 + lVar2 + 200) = 0;
      *(undefined8 *)((longlong)auStack_1004 + lVar2 + 0xd0) = 0x3f800000;
      *(undefined8 *)((longlong)auStack_1004 + lVar2 + 0xd8) = 0;
      *(undefined8 *)((longlong)auStack_1004 + lVar2 + 0xe0) = 0x3f800000;
      *(undefined8 *)((longlong)auStack_1004 + lVar2 + 0xe8) = 0;
      *(undefined8 *)((longlong)auStack_1004 + lVar2 + 0xf0) = 0x3f800000;
      *(undefined8 *)((longlong)auStack_1004 + lVar2 + 0xf8) = 0;
      *(undefined8 *)((longlong)auStack_1004 + lVar2 + 0x100) = 0x3f800000;
      *(undefined8 *)((longlong)auStack_1004 + lVar2 + 0x108) = 0;
      *(undefined8 *)((longlong)auStack_1004 + lVar2 + 0x110) = 0x3f800000;
      *(undefined8 *)((longlong)auStack_1004 + lVar2 + 0x118) = 0;
      *(undefined8 *)((longlong)auStack_1004 + lVar2 + 0x120) = 0x3f800000;
      *(undefined8 *)((longlong)auStack_1004 + lVar2 + 0x128) = 0;
      *(undefined8 *)((longlong)auStack_1004 + lVar2 + 0x130) = 0x3f800000;
      *(undefined8 *)((longlong)auStack_1004 + lVar2 + 0x138) = 0;
      *(undefined8 *)((longlong)auStack_1004 + lVar2 + 0x140) = 0x3f800000;
      *(undefined8 *)((longlong)auStack_1004 + lVar2 + 0x148) = 0;
      *(undefined8 *)((longlong)auStack_1004 + lVar2 + 0x150) = 0x3f800000;
      *(undefined8 *)((longlong)auStack_1004 + lVar2 + 0x158) = 0;
      *(undefined8 *)((longlong)auStack_1004 + lVar2 + 0x160) = 0x3f800000;
      *(undefined8 *)((longlong)auStack_1004 + lVar2 + 0x168) = 0;
      *(undefined8 *)((longlong)auStack_1004 + lVar2 + 0x170) = 0x3f800000;
      *(undefined8 *)((longlong)auStack_1004 + lVar2 + 0x178) = 0;
      *(undefined8 *)((longlong)auStack_1004 + lVar2 + 0x180) = 0x3f800000;
      *(undefined8 *)((longlong)auStack_1004 + lVar2 + 0x188) = 0;
      *(undefined8 *)((longlong)auStack_1004 + lVar2 + 400) = 0x3f800000;
      *(undefined8 *)((longlong)auStack_1004 + lVar2 + 0x198) = 0;
      *(undefined8 *)((longlong)auStack_1004 + lVar2 + 0x1a0) = 0x3f800000;
      *(undefined8 *)((longlong)auStack_1004 + lVar2 + 0x1a8) = 0;
      *(undefined8 *)((longlong)auStack_1004 + lVar2 + 0x1b0) = 0x3f800000;
      *(undefined8 *)((longlong)auStack_1004 + lVar2 + 0x1b8) = 0;
      *(undefined8 *)((longlong)auStack_1004 + lVar2 + 0x1c0) = 0x3f800000;
      *(undefined8 *)((longlong)auStack_1004 + lVar2 + 0x1c8) = 0;
      *(undefined4 *)((longlong)auStack_e34 + lVar2) = 0x3f800000;
      lVar2 = lVar2 + 0x200;
      *(undefined8 *)((longlong)auStack_1024 + uVar3 * 0x20 + -0xc) = 0;
      *(undefined4 *)((longlong)auStack_1024 + uVar3 * 0x20 + -4) = 0;
      auStack_1024[uVar3 * 4] = 0x3f800000;
      auStack_1024[uVar3 * 4 + 1] = 0;
      *(undefined4 *)(auStack_1024 + uVar3 * 4 + 2) = 0x3f800000;
      uVar3 = uVar4;
    } while (uVar4 < 0x80);
    local_30 = 0;
    uStack_28 = 0;
    FUN_180540530(puVar5,&local_1048,0x1028);
    puVar5 = puVar5 + 0x205;
  } while (puVar5 != (undefined8 *)&DAT_1809a5018);
  if (DAT_180cd00f0 != DAT_180cd00f8) {
    DAT_180cd00f8 = DAT_180cd00f0;
  }
  DAT_18096359c = 0xffffffff;
  FUN_180540170(&DAT_180ccfee0,0,0x208);
  FUN_180540170(&DAT_180cd0130,0,0x104);
  _DAT_180cd0110 = 0;
  DAT_180cd0128 = 0;
  FUN_1804e4e90(&DAT_1809635a0);
  return;
}



/* ===== 180092bb0 FUN_180092bb0 ===== */

longlong FUN_180092bb0(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  ulonglong uVar1;
  code *pcVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  
  lVar8 = DAT_180cd00f0;
  uVar10 = 0xfc8c15b409dd7;
  lVar3 = (DAT_180cd00f8 - DAT_180cd00f0 >> 3) * 0x2d612be659c5cbb7;
  if (lVar3 == 0xfc8c15b409dd7) {
                    /* WARNING: Subroutine does not return */
    FUN_18000fb10();
  }
  uVar1 = lVar3 + 1;
  uVar4 = (DAT_180cd0100 - DAT_180cd00f0 >> 3) * 0x2d612be659c5cbb7;
  if (uVar4 <= 0xfc8c15b409dd7 - (uVar4 >> 1)) {
    uVar4 = (uVar4 >> 1) + uVar4;
    uVar10 = uVar1;
    if (uVar1 <= uVar4) {
      uVar10 = uVar4;
    }
    if (0xfc8c15b409dd7 < uVar10) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  lVar3 = FUN_18000fb70(uVar10 * 0x1038);
  lVar8 = ((param_2 - lVar8) / 0x1038) * 0x1038 + lVar3;
  FUN_180540530(lVar8,param_3,0x1038);
  if (param_2 == DAT_180cd00f8) {
    lVar9 = DAT_180cd00f8 - DAT_180cd00f0;
    lVar5 = lVar3;
    param_2 = DAT_180cd00f0;
  }
  else {
    FUN_180540530(lVar3,DAT_180cd00f0,param_2 - DAT_180cd00f0);
    lVar5 = lVar8 + 0x1038;
    lVar9 = DAT_180cd00f8 - param_2;
  }
  puVar6 = auStack_38;
  puVar7 = auStack_38;
  FUN_180540530(lVar5,param_2,lVar9);
  if (DAT_180cd00f0 == 0) goto LAB_180092d2e;
  lVar5 = DAT_180cd00f0;
  if ((ulonglong)((DAT_180cd0100 - DAT_180cd00f0 >> 3) * 8) < 0x1000) {
LAB_180092d23:
    puVar7 = puVar6;
  }
  else {
    lVar5 = *(longlong *)(DAT_180cd00f0 + -8);
    if (0x1f < (DAT_180cd00f0 - lVar5) - 8U) {
      lVar5 = 5;
      pcVar2 = (code *)swi(0x29);
      (*pcVar2)(5);
      puVar6 = auStack_30;
      goto LAB_180092d23;
    }
  }
  *(undefined8 *)(puVar7 + -8) = 0x180092d2e;
  thunk_FUN_1803d64e0(lVar5);
LAB_180092d2e:
  DAT_180cd00f8 = uVar1 * 0x1038 + lVar3;
  DAT_180cd00f0 = lVar3;
  DAT_180cd0100 = uVar10 * 0x1038 + lVar3;
  return lVar8;
}



/* ===== 180092d80 FUN_180092d80 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_180092d80(undefined8 *param_1,uint param_2)

{
  char *_Str;
  undefined *puVar1;
  code *pcVar2;
  size_t sVar3;
  undefined8 uVar4;
  ulonglong *puVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 auStack_a8 [40];
  undefined8 *local_80;
  ulonglong local_78;
  ulonglong uStack_70;
  ulonglong local_68;
  ulonglong uStack_60;
  undefined1 local_58 [32];
  undefined1 local_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_a8;
  local_80 = param_1;
  if (param_2 < 0x11) {
    _Str = (&PTR_s_enemy_player_1805aa870)[(int)param_2];
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    sVar3 = strlen(_Str);
    FUN_1800133a0(param_1,_Str,sVar3);
  }
  else {
    puVar1 = (&PTR_s_model_1805aa580)[((longlong)(int)param_2 - 0x11U) % 6];
    uVar4 = FUN_18004e4f0(local_38);
    uVar4 = FUN_180066ab0(local_58,&DAT_1806e6528,uVar4);
    puVar5 = (ulonglong *)FUN_1800134a0(uVar4,&DAT_1806e64f8,1);
    local_78 = *puVar5;
    uStack_70 = puVar5[1];
    local_68 = puVar5[2];
    uStack_60 = puVar5[3];
    puVar5[2] = 0;
    puVar5[3] = 0xf;
    *(undefined1 *)puVar5 = 0;
    FUN_180042850(param_1,&local_78,puVar1);
    if (0xf < uStack_60) {
      uVar8 = uStack_60 + 1;
      uVar7 = local_78;
      if (0xfff < uVar8) {
        uVar7 = *(ulonglong *)(local_78 - 8);
        if (0x1f < (local_78 - uVar7) - 8) {
          pcVar2 = (code *)swi(0x29);
          (*pcVar2)(5);
          pcVar2 = (code *)swi(3);
          puVar6 = (undefined8 *)(*pcVar2)();
          return puVar6;
        }
        uVar8 = uStack_60 + 0x28;
      }
      thunk_FUN_1803d64e0(uVar7,uVar8);
    }
    local_68 = 0;
    uStack_60 = 0xf;
    local_78 = local_78 & 0xffffffffffffff00;
    FUN_18000f890(local_58);
    FUN_18000f890(local_38);
  }
  return param_1;
}



/* ===== 180092f20 FUN_180092f20 ===== */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180092f20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  ULONGLONG UVar2;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStack_1058 [32];
  undefined8 local_1038;
  undefined8 *local_1030;
  undefined1 local_1028 [4096];
  ulonglong local_28;
  undefined8 uStack_18;
  
  uStack_18 = 0x180092f40;
  local_28 = DAT_180919500 ^ (ulonglong)auStack_1058;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_180540170(local_1028,0,0x1000);
  puVar1 = (ulonglong *)FUN_180013640();
  local_1038 = 0;
  local_1030 = &local_res10;
  FUN_180501904(*puVar1 | 2,local_1028,0x1000,param_1);
  UVar2 = GetTickCount64();
  FUN_1802b2870("wl_chams.log","[%llu] materials | %s\n",UVar2,local_1028);
  return;
}



/* ===== 180092fe0 FUN_180092fe0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_180092fe0(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar2 = param_1[1];
  fVar3 = param_1[2];
  fVar5 = *param_1;
  if (fVar3 <= fVar2) {
    fVar1 = 0.0;
  }
  else {
    fVar1 = DAT_1808acda0;
  }
  fVar4 = fVar3;
  if (fVar2 <= fVar3) {
    fVar4 = fVar2;
  }
  if (fVar3 <= fVar2) {
    fVar3 = fVar2;
  }
  if (fVar5 < fVar3) {
    fVar1 = DAT_1808acd6c - fVar1;
    fVar2 = fVar3;
  }
  else {
    fVar2 = fVar5;
  }
  if (fVar5 <= fVar3) {
    fVar3 = fVar5;
  }
  fVar5 = fVar4;
  if (fVar3 <= fVar4) {
    fVar5 = fVar3;
  }
  fVar3 = (float)((uint)((fVar3 - fVar4) / ((fVar2 - fVar5) * DAT_1808ac7ac + DAT_1808abf50) + fVar1
                        ) & _DAT_1808ade90);
  fVar2 = DAT_1808ac000;
  if (DAT_1808ac000 <= fVar3) {
    fVar2 = fVar3;
  }
  return fVar2;
}



/* ===== 180093070 FUN_180093070 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_180093070(int param_1,longlong param_2,undefined8 *param_3,undefined8 *param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float fVar4;
  char *pcVar5;
  undefined4 *puVar6;
  float fVar7;
  undefined4 uVar8;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c [4];
  ulonglong local_18;
  
  fVar7 = DAT_1808ac864;
  local_18 = DAT_180919500 ^ (ulonglong)auStack_48;
  if (param_1 == 3) {
    pcVar5 = "g_flColorBoost";
    fVar7 = (float)*(int *)(param_2 + 8);
  }
  else {
    if (param_1 == 4) {
      iVar1 = *(int *)(param_2 + 0xc);
      *param_4 = "g_flColorBoost";
      *(float *)(param_4 + 1) = (float)iVar1;
      *(undefined8 *)((longlong)param_4 + 0xc) = 0;
      *(undefined4 *)((longlong)param_4 + 0x14) = 0;
      iVar1 = *(int *)(param_2 + 0x10);
      param_4[3] = "g_flFresnelFalloff";
      *(float *)(param_4 + 4) = (float)iVar1 / DAT_1808ac864;
      *(undefined8 *)((longlong)param_4 + 0x24) = 0;
      *(undefined4 *)((longlong)param_4 + 0x2c) = 0;
      if (*(char *)(param_2 + 0x14) == '\0') {
        fVar7 = 0.0;
      }
      else {
        fVar7 = DAT_1808ac000;
      }
      param_4[6] = "g_flFresnelMax";
      *(float *)(param_4 + 7) = fVar7;
      *(undefined8 *)((longlong)param_4 + 0x3c) = 0;
      *(undefined4 *)((longlong)param_4 + 0x44) = 0;
      return 3;
    }
    if (param_1 == 5) {
      iVar1 = *(int *)(param_2 + 0x18);
      *param_4 = "g_flIridescentFresnelStrength";
      *(float *)(param_4 + 1) = (float)iVar1 / DAT_1808acb08;
      *(undefined8 *)((longlong)param_4 + 0xc) = 0;
      *(undefined4 *)((longlong)param_4 + 0x14) = 0;
      uVar2 = *(undefined8 *)(param_2 + 0x20);
      uVar3 = *(undefined8 *)(param_2 + 0x28);
      param_4[3] = "g_vColorTint";
      param_4[4] = uVar2;
      param_4[5] = uVar3;
      local_20 = *(undefined4 *)(param_3 + 1);
      local_28 = *param_3;
      puVar6 = (undefined4 *)FUN_1804e9c00(&local_28,local_1c);
      uVar8 = *puVar6;
      param_4[6] = "g_flIridescentStrength";
      *(undefined4 *)(param_4 + 7) = uVar8;
      *(undefined8 *)((longlong)param_4 + 0x3c) = 0;
      *(undefined4 *)((longlong)param_4 + 0x44) = 0;
      uVar8 = FUN_180092fe0(param_3);
      param_4[9] = "g_flIridescentHueShift";
      *(undefined4 *)(param_4 + 10) = uVar8;
      *(undefined8 *)((longlong)param_4 + 0x54) = 0;
      *(undefined4 *)((longlong)param_4 + 0x5c) = 0;
      return 4;
    }
    if (param_1 != 6) {
      if (param_1 == 7) {
        iVar1 = *(int *)(param_2 + 0x34);
        *param_4 = "g_flColorBoost";
        *(float *)(param_4 + 1) = (float)iVar1;
        *(undefined8 *)((longlong)param_4 + 0xc) = 0;
        *(undefined4 *)((longlong)param_4 + 0x14) = 0;
        iVar1 = *(int *)(param_2 + 0x38);
        param_4[3] = "g_flFresnelMax";
        *(float *)(param_4 + 4) = (float)iVar1 * DAT_1808ac000;
        *(undefined8 *)((longlong)param_4 + 0x24) = 0;
        *(undefined4 *)((longlong)param_4 + 0x2c) = 0;
        iVar1 = *(int *)(param_2 + 0x3c);
        param_4[6] = "g_flFresnelFalloff";
        fVar4 = DAT_1808ac750;
        *(float *)(param_4 + 7) = fVar7 - (float)iVar1 * DAT_1808ac0c0;
        *(undefined8 *)((longlong)param_4 + 0x3c) = 0;
        *(undefined4 *)((longlong)param_4 + 0x44) = 0;
        iVar1 = *(int *)(param_2 + 0x40);
        param_4[9] = "g_flFresnelExponent";
        *(float *)(param_4 + 10) = (((float)iVar1 - DAT_1808ac34c) * fVar4) / _DAT_1808acb04 + fVar4
        ;
        *(undefined8 *)((longlong)param_4 + 0x54) = 0;
        *(undefined4 *)((longlong)param_4 + 0x5c) = 0;
        return 4;
      }
      return 0;
    }
    pcVar5 = "g_vTexCoordScrollSpeed";
    fVar7 = (float)*(int *)(param_2 + 0x30) * DAT_1808ac000;
  }
  *param_4 = pcVar5;
  *(float *)(param_4 + 1) = fVar7;
  *(undefined8 *)((longlong)param_4 + 0xc) = 0;
  *(undefined4 *)((longlong)param_4 + 0x14) = 0;
  return 1;
}



/* ===== 180093310 FUN_180093310 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180093310(undefined4 param_1,longlong param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined4 uVar1;
  float *pfVar2;
  size_t sVar3;
  char *pcVar4;
  char *pcVar5;
  float fVar6;
  undefined1 auStack_128 [32];
  double local_108;
  double local_100;
  double local_f8;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined1 local_dc [4];
  char local_d8 [160];
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStack_128;
  FUN_180540170(local_d8,0,0xa0);
  switch(param_1) {
  case 1:
    FUN_1800134a0(param_4,"g_tMetalness",0xc);
    FUN_1800134a0(param_4," = resource:\"materials/dev/primary_white_color_tga_f7b257f6.vtex\"\n",
                  0x42);
    FUN_1800134a0(param_4,"g_tNormal",9);
    sVar3 = 0x42;
    pcVar5 = " = resource:\"materials/dev/primary_white_color_tga_f7b257f6.vtex\"\n";
    goto LAB_1800936b8;
  default:
    goto switchD_18009336b_caseD_2;
  case 3:
    uVar1 = *(undefined4 *)(param_2 + 8);
    pcVar5 = "g_flColorBoost";
    break;
  case 4:
    local_108._0_4_ = *(undefined4 *)(param_2 + 0xc);
    snprintf(local_d8,0xa0,"%s = %d\n","g_flColorBoost");
    sVar3 = strlen(local_d8);
    FUN_1800134a0(param_4,local_d8,sVar3);
    local_108 = (double)CONCAT44(local_108._4_4_,*(undefined4 *)(param_2 + 0x10));
    snprintf(local_d8,0xa0,"%s = %d\n","g_flFresnelFalloff");
    sVar3 = strlen(local_d8);
    FUN_1800134a0(param_4,local_d8,sVar3);
    if (*(char *)(param_2 + 0x14) == '\0') {
      fVar6 = 0.0;
    }
    else {
      fVar6 = DAT_1808ac000;
    }
    local_108 = (double)fVar6;
    pcVar5 = "g_flFresnelMax";
    pcVar4 = "%s = %g\n";
    goto LAB_18009369a;
  case 5:
    local_108 = (double)CONCAT44(local_108._4_4_,*(undefined4 *)(param_2 + 0x18));
    snprintf(local_d8,0xa0,"%s = %d\n","g_flIridescentFresnelStrength");
    sVar3 = strlen(local_d8);
    FUN_1800134a0(param_4,local_d8,sVar3);
    FUN_1800134a0(param_4,"g_tNormal",9);
    FUN_1800134a0(param_4," = resource:\"materials/dev/primary_white_color_tga_f7b257f6.vtex\"\n",
                  0x42);
    local_f8 = (double)*(float *)(param_2 + 0x2c);
    local_100 = (double)*(float *)(param_2 + 0x28);
    local_108 = (double)*(float *)(param_2 + 0x24);
    snprintf(local_d8,0xa0,"g_vColorTint = [%g, %g, %g, %g]\n",(double)*(float *)(param_2 + 0x20));
    sVar3 = strlen(local_d8);
    FUN_1800134a0(param_4,local_d8,sVar3);
    local_e8 = *param_3;
    local_e0 = *(undefined4 *)(param_3 + 1);
    pfVar2 = (float *)FUN_1804e9c00(&local_e8,local_dc);
    local_108 = (double)*pfVar2;
    snprintf(local_d8,0xa0,"%s = %g\n","g_flIridescentStrength");
    sVar3 = strlen(local_d8);
    FUN_1800134a0(param_4,local_d8,sVar3);
    fVar6 = (float)FUN_180092fe0(param_3);
    pcVar5 = "g_flIridescentHueShift";
    local_108 = (double)fVar6;
    pcVar4 = "%s = %g\n";
    goto LAB_18009369a;
  case 6:
    uVar1 = *(undefined4 *)(param_2 + 0x30);
    pcVar5 = "g_vTexCoordScrollSpeed";
    break;
  case 7:
    local_108._0_4_ = *(undefined4 *)(param_2 + 0x34);
    snprintf(local_d8,0xa0,"%s = %d\n","g_flColorBoost");
    sVar3 = strlen(local_d8);
    FUN_1800134a0(param_4,local_d8,sVar3);
    local_108._0_4_ = *(undefined4 *)(param_2 + 0x38);
    snprintf(local_d8,0xa0,"%s = %d\n","g_flFresnelMax");
    sVar3 = strlen(local_d8);
    FUN_1800134a0(param_4,local_d8,sVar3);
    local_108 = (double)CONCAT44(local_108._4_4_,*(undefined4 *)(param_2 + 0x3c));
    snprintf(local_d8,0xa0,"%s = %d\n","g_flFresnelFalloff");
    sVar3 = strlen(local_d8);
    FUN_1800134a0(param_4,local_d8,sVar3);
    uVar1 = *(undefined4 *)(param_2 + 0x40);
    pcVar5 = "g_flFresnelExponent";
  }
  pcVar4 = "%s = %d\n";
  local_108 = (double)CONCAT44(local_108._4_4_,uVar1);
LAB_18009369a:
  snprintf(local_d8,0xa0,pcVar4,pcVar5);
  sVar3 = strlen(local_d8);
  pcVar5 = local_d8;
LAB_1800936b8:
  FUN_1800134a0(param_4,pcVar5,sVar3);
switchD_18009336b_caseD_2:
  return;
}



/* ===== 180093700 FUN_180093700 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_180093700(int param_1,char param_2,char param_3,longlong param_4,undefined8 param_5)

{
  longlong lVar1;
  longlong lVar2;
  size_t sVar3;
  float *pfVar4;
  undefined8 uVar5;
  float *pfVar6;
  char *pcVar7;
  undefined **ppuVar8;
  ulonglong uVar9;
  undefined1 auStack_c8 [32];
  char local_a8;
  char local_a7;
  float local_a4;
  longlong local_a0;
  char local_98 [64];
  ulonglong local_58;
  
  local_58 = DAT_180919500 ^ (ulonglong)auStack_c8;
  if (param_1 - 1U < 7) {
    lVar1 = (longlong)param_1 * 0x18;
    local_a8 = param_3;
    local_a7 = param_2;
    local_a0 = param_4;
    FUN_180029840(param_5,
                  "<!-- kv3 encoding:text:version{e21c7f3c-8a33-41c5-9977-a76d3a32aa0d} format:generic:version{7412167c-06e9-4698-aff2-e63eb59037e7} -->\n{\n"
                  ,0x88);
    FUN_1800134a0(param_5,"shader = \"",10);
    pcVar7 = *(char **)(&DAT_1805aa730 + lVar1);
    sVar3 = strlen(pcVar7);
    FUN_1800134a0(param_5,pcVar7,sVar3);
    FUN_1800134a0(param_5,&DAT_1806e6b5c,2);
    ppuVar8 = &PTR_s_F_RENDER_BACKFACES_1805aa7f0;
    do {
      pcVar7 = *ppuVar8;
      sVar3 = strlen(pcVar7);
      FUN_1800134a0(param_5,pcVar7,sVar3);
      FUN_1800134a0(param_5,&DAT_1806e6a98,3);
      pcVar7 = ppuVar8[1];
      sVar3 = strlen(pcVar7);
      FUN_1800134a0(param_5,pcVar7,sVar3);
      FUN_1800134a0(param_5,&DAT_1806e6a94,1);
      ppuVar8 = ppuVar8 + 2;
    } while (ppuVar8 != &PTR_s_g_tColor_1805aa820);
    uVar9 = 0;
    if (*(longlong *)(&DAT_1805aa740 + lVar1) != 0) {
      do {
        lVar2 = *(longlong *)(&DAT_1805aa738 + lVar1);
        pcVar7 = *(char **)(lVar2 + uVar9 * 0x10);
        sVar3 = strlen(pcVar7);
        FUN_1800134a0(param_5,pcVar7,sVar3);
        FUN_1800134a0(param_5,&DAT_1806e6a98,3);
        pcVar7 = *(char **)(lVar2 + 8 + uVar9 * 0x10);
        sVar3 = strlen(pcVar7);
        FUN_1800134a0(param_5,pcVar7,sVar3);
        FUN_1800134a0(param_5,&DAT_1806e6a94,1);
        uVar9 = uVar9 + 1;
      } while (uVar9 < *(ulonglong *)(&DAT_1805aa740 + lVar1));
      param_4 = local_a0;
      param_3 = local_a8;
    }
    if (param_3 == '\0') {
      sVar3 = 0x15;
      pcVar7 = "g_flOpacityScale = 1\n";
    }
    else {
      local_a0 = CONCAT44(local_a0._4_4_,0x3f800000);
      local_a4 = 0.0;
      local_98[0] = '\0';
      local_98[1] = '\0';
      local_98[2] = '\0';
      local_98[3] = '\0';
      local_98[4] = '\0';
      local_98[5] = '\0';
      local_98[6] = '\0';
      local_98[7] = '\0';
      local_98[8] = '\0';
      local_98[9] = '\0';
      local_98[10] = '\0';
      local_98[0xb] = '\0';
      local_98[0xc] = '\0';
      local_98[0xd] = '\0';
      local_98[0xe] = '\0';
      local_98[0xf] = '\0';
      pfVar6 = &local_a4;
      if (0.0 <= *(float *)(param_4 + 0x10)) {
        pfVar6 = (float *)(param_4 + 0x10);
      }
      local_98[0x10] = '\0';
      local_98[0x11] = '\0';
      local_98[0x12] = '\0';
      local_98[0x13] = '\0';
      local_98[0x14] = '\0';
      local_98[0x15] = '\0';
      local_98[0x16] = '\0';
      local_98[0x17] = '\0';
      local_98[0x18] = '\0';
      local_98[0x19] = '\0';
      local_98[0x1a] = '\0';
      local_98[0x1b] = '\0';
      local_98[0x1c] = '\0';
      local_98[0x1d] = '\0';
      local_98[0x1e] = '\0';
      local_98[0x1f] = '\0';
      pfVar4 = (float *)&local_a0;
      if (*(float *)(param_4 + 0x10) <= DAT_1808ac34c) {
        pfVar4 = pfVar6;
      }
      local_98[0x20] = '\0';
      local_98[0x21] = '\0';
      local_98[0x22] = '\0';
      local_98[0x23] = '\0';
      local_98[0x24] = '\0';
      local_98[0x25] = '\0';
      local_98[0x26] = '\0';
      local_98[0x27] = '\0';
      local_98[0x28] = '\0';
      local_98[0x29] = '\0';
      local_98[0x2a] = '\0';
      local_98[0x2b] = '\0';
      local_98[0x2c] = '\0';
      local_98[0x2d] = '\0';
      local_98[0x2e] = '\0';
      local_98[0x2f] = '\0';
      local_98[0x30] = '\0';
      local_98[0x31] = '\0';
      local_98[0x32] = '\0';
      local_98[0x33] = '\0';
      local_98[0x34] = '\0';
      local_98[0x35] = '\0';
      local_98[0x36] = '\0';
      local_98[0x37] = '\0';
      local_98[0x38] = '\0';
      local_98[0x39] = '\0';
      local_98[0x3a] = '\0';
      local_98[0x3b] = '\0';
      local_98[0x3c] = '\0';
      local_98[0x3d] = '\0';
      local_98[0x3e] = '\0';
      local_98[0x3f] = '\0';
      snprintf(local_98,0x40,"g_flOpacityScale = %.6f\n",(double)(*pfVar4 * _DAT_1808ac250));
      sVar3 = strlen(local_98);
      pcVar7 = local_98;
    }
    FUN_1800134a0(param_5,pcVar7,sVar3);
    pcVar7 = "F_TRANSLUCENT = 0\n";
    if (param_3 != '\0') {
      pcVar7 = "F_TRANSLUCENT = 1\n";
    }
    sVar3 = strlen(pcVar7);
    FUN_1800134a0(param_5,pcVar7,sVar3);
    FUN_180093310(param_1,param_4 + 0x14,param_4 + 4,param_5);
    pcVar7 = "0";
    if (local_a7 != '\0') {
      pcVar7 = "1";
    }
    FUN_1800134a0(param_5,"F_IGNOREZ = ",0xc);
    sVar3 = strlen(pcVar7);
    FUN_1800134a0(param_5,pcVar7,sVar3);
    FUN_1800134a0(param_5,"\nF_DISABLE_Z_WRITE = ",0x15);
    sVar3 = strlen(pcVar7);
    FUN_1800134a0(param_5,pcVar7,sVar3);
    FUN_1800134a0(param_5,"\nF_DISABLE_Z_BUFFERING = ",0x19);
    sVar3 = strlen(pcVar7);
    FUN_1800134a0(param_5,pcVar7,sVar3);
    FUN_1800134a0(param_5,&DAT_1806e6c08,3);
    uVar5 = 1;
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}



/* ===== 180093ad0 FUN_180093ad0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180093ad0(undefined8 *param_1,undefined8 param_2)

{
  code *pcVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  size_t sVar6;
  ulonglong uVar7;
  undefined8 ******ppppppuVar8;
  undefined8 ******ppppppuVar9;
  ulonglong uVar10;
  undefined1 *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [24];
  size_t local_98;
  undefined4 local_88;
  undefined2 local_84;
  ulonglong local_80;
  undefined8 local_78;
  undefined8 ******local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  ulonglong local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined2 local_48;
  undefined1 local_46;
  ulonglong local_40;
  
  local_40 = DAT_180919500 ^ (ulonglong)auStack_b8;
  local_50 = 0x6f736572;
  local_4c = 0x65637275;
  local_48 = 0x223a;
  local_46 = 0;
  local_88 = 0x6574762e;
  local_84 = 0x78;
  local_78 = param_2;
  local_98 = strlen((char *)&local_50);
  puVar5 = param_1;
  if (0xf < (ulonglong)param_1[3]) {
    puVar5 = (undefined8 *)*param_1;
  }
  lVar3 = FUN_180068d80(puVar5,param_1[2],0,&local_50);
  do {
    puVar11 = auStack_b8;
    if (lVar3 == -1) {
LAB_180093d4e:
      *(undefined8 *)(puVar11 + -8) = 0x180093d5a;
      return;
    }
    uVar10 = lVar3 + 10;
    puVar5 = param_1;
    if (0xf < (ulonglong)param_1[3]) {
      puVar5 = (undefined8 *)*param_1;
    }
    puVar11 = auStack_b8;
    if ((ulonglong)param_1[2] <= uVar10) goto LAB_180093d4e;
    lVar3 = param_1[2] + (longlong)puVar5;
    lVar4 = thunk_FUN_1804e6c50((longlong)puVar5 + uVar10,lVar3,0x22);
    puVar11 = auStack_b8;
    if (lVar4 == lVar3) goto LAB_180093d4e;
    lVar4 = lVar4 - (longlong)puVar5;
    puVar11 = auStack_b8;
    if (lVar4 == -1) goto LAB_180093d4e;
    local_70 = (undefined8 ******)0x0;
    uStack_68 = 0;
    local_60 = 0;
    local_58 = 0;
    if ((ulonglong)param_1[2] < uVar10) {
                    /* WARNING: Subroutine does not return */
      FUN_18002a1a0();
    }
    uVar7 = param_1[2] - uVar10;
    uVar12 = lVar4 - uVar10;
    if (uVar7 < lVar4 - uVar10) {
      uVar12 = uVar7;
    }
    puVar5 = param_1;
    if (0xf < (ulonglong)param_1[3]) {
      puVar5 = (undefined8 *)*param_1;
    }
    FUN_1800133a0(&local_70,(longlong)puVar5 + uVar10,uVar12);
    uVar12 = local_58;
    uVar10 = local_60;
    ppppppuVar9 = local_70;
    if (local_60 < 6) {
LAB_180093cda:
      if (0xf < uVar12) {
        uVar10 = uVar12 + 1;
        ppppppuVar8 = ppppppuVar9;
        if (0xfff < uVar10) {
          ppppppuVar8 = (undefined8 ******)ppppppuVar9[-1];
          if (0x1f < (ulonglong)((longlong)ppppppuVar9 + (-8 - (longlong)ppppppuVar8)))
          goto LAB_180093d47;
          uVar10 = uVar12 + 0x28;
        }
LAB_180093d08:
        thunk_FUN_1803d64e0(ppppppuVar8,uVar10);
      }
    }
    else {
      uVar7 = local_60 - 5;
      local_80 = uVar7;
      if (local_60 < uVar7) {
                    /* WARNING: Subroutine does not return */
        FUN_18002a1a0();
      }
      sVar6 = strlen((char *)&local_88);
      uVar13 = 5;
      if (uVar10 - uVar7 < 5) {
        uVar13 = uVar10 - uVar7;
      }
      ppppppuVar8 = &local_70;
      if (0xf < uVar12) {
        ppppppuVar8 = ppppppuVar9;
      }
      uVar10 = uVar13;
      if (sVar6 < uVar13) {
        uVar10 = sVar6;
      }
      iVar2 = memcmp((void *)((longlong)ppppppuVar8 + local_80),&local_88,uVar10);
      if (((iVar2 != 0) || (uVar13 < sVar6)) || (sVar6 < uVar13)) goto LAB_180093cda;
      ppppppuVar8 = &local_70;
      if (0xf < uVar12) {
        ppppppuVar8 = ppppppuVar9;
      }
      local_80 = FUN_1801d6450(ppppppuVar8);
      if (local_80 == 0) {
        ppppppuVar9 = &local_70;
        if (0xf < local_58) {
          ppppppuVar9 = local_70;
        }
        FUN_180092f20("texture NOT loaded | %s",ppppppuVar9);
      }
      else {
        FUN_1800242d0(local_78,&local_80);
      }
      if (0xf < local_58) {
        uVar10 = local_58 + 1;
        ppppppuVar8 = local_70;
        if (uVar10 < 0x1000) goto LAB_180093d08;
        ppppppuVar8 = (undefined8 ******)local_70[-1];
        if ((ulonglong)((longlong)local_70 + (-8 - (longlong)ppppppuVar8)) < 0x20) {
          uVar10 = local_58 + 0x28;
          goto LAB_180093d08;
        }
LAB_180093d47:
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        puVar11 = auStack_b0;
        goto LAB_180093d4e;
      }
    }
    local_98 = strlen((char *)&local_50);
    puVar5 = param_1;
    if (0xf < (ulonglong)param_1[3]) {
      puVar5 = (undefined8 *)*param_1;
    }
    lVar3 = FUN_180068d80(puVar5,param_1[2],lVar4 + 1,&local_50);
  } while( true );
}



/* ===== 180093d90 FUN_180093d90 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_180093d90(undefined4 param_1,undefined4 param_2,byte param_3,ulonglong param_4)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 ****ppppuVar6;
  longlong *plVar7;
  char *pcVar8;
  int iVar9;
  undefined1 auStack_148 [32];
  undefined8 ****local_128;
  uint local_120;
  char *local_118;
  undefined1 *local_110;
  byte local_108;
  longlong local_100;
  longlong *local_f8;
  longlong *plStack_f0;
  undefined8 local_e8;
  undefined *local_e0;
  undefined8 ****local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  ulonglong uStack_c0;
  undefined1 local_b8 [32];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_58;
  
  local_58 = DAT_180919500 ^ (ulonglong)auStack_148;
  local_108 = (byte)param_4;
  param_4 = param_4 & 0xff;
  uStack_d0 = 0;
  local_c8 = _DAT_1808ad410;
  uStack_c0 = _UNK_1808ad418;
  local_d8 = (undefined8 ****)0x0;
  uVar3 = FUN_180094020();
  local_128 = &local_d8;
  cVar2 = FUN_180093700(param_2,param_3,param_4 & 0xff,uVar3);
  lVar4 = 0;
  if (cVar2 != '\0') {
    local_f8 = (longlong *)0x0;
    plStack_f0 = (longlong *)0x0;
    local_e8 = 0;
    FUN_180093ad0(&local_d8,&local_f8);
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    uStack_60 = 0;
    iVar9 = DAT_180ca0d50 + DAT_180cd0234;
    DAT_180cd0234 = DAT_180cd0234 + 1;
    local_128 = (undefined8 ****)&DAT_18058b643;
    if (param_3 != 0) {
      local_128 = (undefined8 ****)&DAT_1806e6c0c;
    }
    snprintf(&local_98,0x40,"mat_%u%s.vmat",iVar9);
    ppppuVar6 = &local_d8;
    if (0xf < uStack_c0) {
      ppppuVar6 = local_d8;
    }
    lVar4 = FUN_1801d2330(ppppuVar6,&local_98);
    plVar1 = plStack_f0;
    local_100 = lVar4;
    for (plVar7 = local_f8; plVar7 != plVar1; plVar7 = plVar7 + 1) {
      if (*plVar7 != 0) {
        FUN_1801d6440();
      }
    }
    if (lVar4 == 0) {
      local_110 = &DAT_1806d2ba0;
      if (PTR_s_not_initialized_1809ee490 != (undefined1 *)0x0) {
        local_110 = PTR_s_not_initialized_1809ee490;
      }
    }
    else {
      local_e0 = &DAT_1809e85d0;
      iVar9 = FUN_1804e4d70(&DAT_1809e85d0);
      if (iVar9 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1804e4a90(5);
      }
      if (DAT_1809e861c == 0x7fffffff) {
        DAT_1809e861c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
        FUN_1804e4a90(6);
      }
      FUN_1800242d0(&DAT_180cd0238,&local_100);
      FUN_1804e4e90(&DAT_1809e85d0);
      local_110 = &DAT_18058b643;
    }
    pcVar8 = "FAILED";
    if (lVar4 != 0) {
      pcVar8 = "made";
    }
    puVar5 = (undefined8 *)FUN_180092d80(local_b8,param_1);
    if (0xf < (ulonglong)puVar5[3]) {
      puVar5 = (undefined8 *)*puVar5;
    }
    local_120 = (uint)local_108;
    local_128 = (undefined8 ****)CONCAT44(local_128._4_4_,(uint)param_3);
    local_118 = pcVar8;
    FUN_180092f20("%s | row %s | type %d | xqz %d | translucent %d | %s %s",&local_98,puVar5,param_2
                 );
    FUN_18000f890(local_b8);
    if (lVar4 == 0) {
      ppppuVar6 = &local_d8;
      if (0xf < uStack_c0) {
        ppppuVar6 = local_d8;
      }
      FUN_180092f20("text: %s",ppppuVar6);
    }
    FUN_1800132b0(&local_f8);
  }
  FUN_18000f890(&local_d8);
  return lVar4;
}



/* ===== 180094020 FUN_180094020 ===== */

undefined4 * FUN_180094020(int param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  
  if (0x17f < param_1 - 0x11U) {
    switch(param_1) {
    case 0:
      return (undefined4 *)&DAT_180920690;
    case 1:
      return &DAT_1809206e8;
    case 2:
      return &DAT_180920740;
    case 3:
      return &DAT_1809207b0;
    case 4:
      return &DAT_18092081c;
    case 5:
      return (undefined4 *)&DAT_18092088c;
    case 6:
      return &DAT_1809208e4;
    case 7:
      return (undefined4 *)&DAT_180920940;
    case 8:
      return (undefined4 *)&DAT_180920998;
    case 9:
      return (undefined4 *)&DAT_180920a04;
    case 10:
      return (undefined4 *)&DAT_180920a5c;
    case 0xb:
      return (undefined4 *)&DAT_180920ab4;
    case 0xc:
      return (undefined4 *)&DAT_180920b0c;
    case 0xd:
      return (undefined4 *)&DAT_180920b64;
    case 0xe:
      return (undefined4 *)&DAT_180920bbc;
    case 0xf:
      return (undefined4 *)&DAT_180920c14;
    default:
      return (undefined4 *)&DAT_180920c6c;
    }
  }
  uVar1 = (uint)(((longlong)param_1 - 0x11U) / 6);
  lVar3 = (ulonglong)(uVar1 & 0x3f) * 0x2ac;
  iVar2 = (int)((longlong)param_1 - 0x11U) + uVar1 * -6;
  if (iVar2 == 0) {
    return (undefined4 *)(&DAT_180931b64 + lVar3);
  }
  if (iVar2 == 1) {
    return (undefined4 *)(&DAT_180931bbc + lVar3);
  }
  if (iVar2 == 2) {
    return (undefined4 *)(&DAT_180931c14 + lVar3);
  }
  if (iVar2 == 3) {
    return (undefined4 *)(&DAT_180931c6c + lVar3);
  }
  if (iVar2 == 4) {
    return (undefined4 *)(&DAT_180931d48 + lVar3);
  }
  return (undefined4 *)(&DAT_180931da0 + lVar3);
}



/* ===== 1800941c0 FUN_1800941c0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800941c0(void)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  char cVar4;
  int *piVar5;
  ulonglong uVar6;
  longlong lVar7;
  float *pfVar8;
  float *pfVar9;
  int iVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined4 *puVar15;
  undefined8 *puVar16;
  longlong lVar17;
  longlong lVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
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
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  undefined1 auStack_2b8 [32];
  int local_298;
  uint local_294;
  ULONGLONG local_290;
  ulonglong local_288;
  float local_280;
  float local_27c;
  int *local_278;
  undefined8 *local_270;
  ulonglong local_268;
  float local_260 [4];
  longlong local_250;
  int *local_248;
  float local_238 [32];
  undefined8 local_1b8;
  float local_1b0 [46];
  ulonglong local_f8;
  
  local_f8 = DAT_180919500 ^ (ulonglong)auStack_2b8;
  local_290 = GetTickCount64();
  uVar2 = _DAT_1808ade90;
  puVar15 = &DAT_1809a5018;
  local_250 = local_290 + 3000;
  local_268 = 0;
  do {
    uVar3 = local_268;
    lVar18 = local_268 * 0x2b0;
    piVar5 = (int *)FUN_180094020();
    iVar10 = *piVar5;
    if (puVar15[uVar3 * 0xac] != iVar10) {
      for (puVar16 = (undefined8 *)(puVar15 + uVar3 * 0xac + 2);
          puVar16 != (undefined8 *)(puVar15 + uVar3 * 0xac + 0xaa); puVar16 = puVar16 + 0x15) {
        *puVar16 = 0;
        *(undefined1 *)(puVar16 + 0x12) = 0;
        *(undefined4 *)((longlong)puVar16 + 0xc) = 0xbf800000;
        *(undefined8 *)((longlong)puVar16 + 0x94) = 0xffffffffffffffff;
      }
      *(undefined1 *)(puVar15 + uVar3 * 0xac + 0xaa) = 0;
      puVar15[uVar3 * 0xac] = iVar10;
    }
    local_298 = iVar10;
    local_278 = piVar5;
    if (iVar10 - 1U < 7) {
      FUN_180540170(&local_1b8,0,0xc0);
      local_248 = piVar5 + 5;
      uVar6 = FUN_180093070(iVar10,local_248,piVar5 + 1,&local_1b8);
      uVar13 = 0;
      local_238[0] = 0.0;
      local_238[1] = 0.0;
      local_238[2] = 0.0;
      local_238[3] = 0.0;
      local_238[4] = 0.0;
      local_238[5] = 0.0;
      local_238[6] = 0.0;
      local_238[7] = 0.0;
      local_238[8] = 0.0;
      local_238[9] = 0.0;
      local_238[10] = 0.0;
      local_238[0xb] = 0.0;
      local_238[0xc] = 0.0;
      local_238[0xd] = 0.0;
      local_238[0xe] = 0.0;
      local_238[0xf] = 0.0;
      local_238[0x10] = 0.0;
      local_238[0x11] = 0.0;
      local_238[0x12] = 0.0;
      local_238[0x13] = 0.0;
      local_238[0x14] = 0.0;
      local_238[0x15] = 0.0;
      local_238[0x16] = 0.0;
      local_238[0x17] = 0.0;
      local_238[0x18] = 0.0;
      local_238[0x19] = 0.0;
      local_238[0x1a] = 0.0;
      local_238[0x1b] = 0.0;
      local_238[0x1c] = 0.0;
      local_238[0x1d] = 0.0;
      local_238[0x1e] = 0.0;
      local_238[0x1f] = 0.0;
      uVar14 = uVar13;
      fVar20 = 0.0;
      fVar21 = 0.0;
      fVar22 = 0.0;
      fVar23 = 0.0;
      fVar24 = (float)0;
      fVar25 = (float)0;
      fVar26 = (float)0;
      fVar27 = (float)0;
      fVar28 = (float)0;
      fVar29 = (float)0;
      fVar30 = (float)0;
      fVar31 = (float)0;
      fVar32 = (float)0;
      fVar33 = (float)0;
      fVar34 = (float)0;
      fVar35 = (float)0;
      fVar36 = (float)0;
      fVar37 = (float)0;
      fVar38 = (float)0;
      fVar39 = (float)0;
      fVar40 = (float)0;
      fVar41 = (float)0;
      fVar42 = (float)0;
      fVar43 = (float)0;
      fVar44 = (float)0;
      fVar45 = (float)0;
      fVar46 = (float)0;
      fVar47 = (float)0;
      fVar48 = (float)0;
      fVar49 = (float)0;
      fVar50 = (float)0;
      fVar51 = (float)0;
      if (3 < uVar6) {
        do {
          uVar13 = uVar14 * 4;
          if (0x1f < (uVar13 | 3)) goto LAB_1800944be;
          local_238[uVar14 * 4] = local_1b0[uVar14 * 6];
          local_238[uVar14 * 4 + 1] = local_1b0[uVar14 * 6 + 1];
          local_238[uVar14 * 4 + 2] = local_1b0[uVar14 * 6 + 2];
          local_238[uVar14 * 4 + 3] = local_1b0[uVar14 * 6 + 3];
          if (0x1f < uVar13 + 7) goto LAB_1800944be;
          local_1b0[uVar14 * 4 + -0x1e] = local_1b0[uVar14 * 6 + 6];
          local_1b0[uVar14 * 4 + -0x1d] = local_1b0[uVar14 * 6 + 7];
          local_1b0[uVar14 * 4 + -0x1c] = local_1b0[uVar14 * 6 + 8];
          local_1b0[uVar14 * 4 + -0x1b] = local_1b0[uVar14 * 6 + 9];
          if (0x1f < uVar13 + 0xb) goto LAB_1800944be;
          local_1b0[uVar14 * 4 + -0x1a] = local_1b0[uVar14 * 6 + 0xc];
          local_1b0[uVar14 * 4 + -0x19] = local_1b0[uVar14 * 6 + 0xd];
          local_1b0[uVar14 * 4 + -0x18] = local_1b0[uVar14 * 6 + 0xe];
          local_1b0[uVar14 * 4 + -0x17] = local_1b0[uVar14 * 6 + 0xf];
          if (0x1f < uVar13 + 0xf) goto LAB_1800944be;
          uVar13 = uVar14 + 4;
          local_1b0[uVar14 * 4 + -0x16] = local_1b0[uVar14 * 6 + 0x12];
          local_1b0[uVar14 * 4 + -0x15] = local_1b0[uVar14 * 6 + 0x13];
          local_1b0[uVar14 * 4 + -0x14] = local_1b0[uVar14 * 6 + 0x14];
          local_1b0[uVar14 * 4 + -0x13] = local_1b0[uVar14 * 6 + 0x15];
          uVar14 = uVar13;
        } while (uVar13 < uVar6 - 3);
        fVar20 = local_238[0];
        fVar21 = local_238[1];
        fVar22 = local_238[2];
        fVar23 = local_238[3];
        fVar24 = local_238[4];
        fVar25 = local_238[5];
        fVar26 = local_238[6];
        fVar27 = local_238[7];
        fVar28 = local_238[8];
        fVar29 = local_238[9];
        fVar30 = local_238[10];
        fVar31 = local_238[0xb];
        fVar32 = local_238[0xc];
        fVar33 = local_238[0xd];
        fVar34 = local_238[0xe];
        fVar35 = local_238[0xf];
        fVar36 = local_238[0x10];
        fVar37 = local_238[0x11];
        fVar38 = local_238[0x12];
        fVar39 = local_238[0x13];
        fVar40 = local_238[0x14];
        fVar41 = local_238[0x15];
        fVar42 = local_238[0x16];
        fVar43 = local_238[0x17];
        fVar44 = local_238[0x18];
        fVar45 = local_238[0x19];
        fVar46 = local_238[0x1a];
        fVar47 = local_238[0x1b];
        fVar48 = local_238[0x1c];
        fVar49 = local_238[0x1d];
        fVar50 = local_238[0x1e];
        fVar51 = local_238[0x1f];
      }
      if (uVar13 < uVar6) {
        do {
          if (0x1f < (uVar13 * 4 | 3)) break;
          uVar14 = uVar13 + 1;
          local_238[uVar13 * 4] = local_1b0[uVar13 * 6];
          local_238[uVar13 * 4 + 1] = local_1b0[uVar13 * 6 + 1];
          local_238[uVar13 * 4 + 2] = local_1b0[uVar13 * 6 + 2];
          local_238[uVar13 * 4 + 3] = local_1b0[uVar13 * 6 + 3];
          uVar13 = uVar14;
        } while (uVar14 < uVar6);
LAB_1800944be:
        fVar20 = local_238[0];
        fVar21 = local_238[1];
        fVar22 = local_238[2];
        fVar23 = local_238[3];
        fVar24 = local_238[4];
        fVar25 = local_238[5];
        fVar26 = local_238[6];
        fVar27 = local_238[7];
        fVar28 = local_238[8];
        fVar29 = local_238[9];
        fVar30 = local_238[10];
        fVar31 = local_238[0xb];
        fVar32 = local_238[0xc];
        fVar33 = local_238[0xd];
        fVar34 = local_238[0xe];
        fVar35 = local_238[0xf];
        fVar36 = local_238[0x10];
        fVar37 = local_238[0x11];
        fVar38 = local_238[0x12];
        fVar39 = local_238[0x13];
        fVar40 = local_238[0x14];
        fVar41 = local_238[0x15];
        fVar42 = local_238[0x16];
        fVar43 = local_238[0x17];
        fVar44 = local_238[0x18];
        fVar45 = local_238[0x19];
        fVar46 = local_238[0x1a];
        fVar47 = local_238[0x1b];
        fVar48 = local_238[0x1c];
        fVar49 = local_238[0x1d];
        fVar50 = local_238[0x1e];
        fVar51 = local_238[0x1f];
      }
      uVar14 = 0;
      local_294 = 0;
      puVar16 = &DAT_1809a5020 + uVar3 * 0x56;
      local_270 = puVar16;
      local_288 = uVar6;
      do {
        uVar12 = (uint)uVar14;
        lVar17 = uVar14 * 0xa8;
        lVar7 = puVar16[uVar14 * 0x15];
        if (lVar7 == 0) {
          if (((&DAT_1809a5028)[lVar17 + lVar18] != '\0') && ((&DAT_1809a52c0)[lVar18] == '\0')) {
            lVar7 = FUN_180093d90(local_268 & 0xffffffff,iVar10,(byte)uVar14 & 1,
                                  CONCAT31((uint3)(uVar14 >> 8) >> 1,(char)(uVar12 >> 1)) &
                                  0xffffff01);
            if (lVar7 != 0) {
              (&DAT_1809a50b0)[lVar17 + lVar18] = 0;
              (&DAT_1809a502c)[uVar3 * 0xac + uVar14 * 0x2a] = 0xbf800000;
              (&DAT_1809a50b4)[uVar3 * 0xac + uVar14 * 0x2a] = 0xffffffff;
              (&DAT_1809a50b8)[uVar3 * 0xac + uVar14 * 0x2a] = 0xffffffff;
              (&DAT_1809a50c0)[uVar3 * 0x56 + uVar14 * 0x15] = local_250;
              puVar16[uVar14 * 0x15] = lVar7;
              goto LAB_1800945c2;
            }
            (&DAT_1809a52c0)[lVar18] = 1;
          }
        }
        else {
LAB_1800945c2:
          uVar13 = (&DAT_1809a50c0)[uVar3 * 0x56 + uVar14 * 0x15];
          if ((uVar13 <= local_290) && ((&DAT_1809a50b0)[lVar17 + lVar18] != '\0')) {
            pfVar9 = (float *)(&DAT_1809a5030 + uVar3 * 0xac + uVar14 * 0x2a);
            for (pfVar8 = local_238; *pfVar9 == *pfVar8; pfVar8 = pfVar8 + 1) {
              pfVar9 = pfVar9 + 1;
              if (pfVar9 == (float *)(&DAT_1809a50b0 + lVar17 + lVar18)) goto LAB_1800946b9;
            }
          }
          uVar11 = 0;
          if (uVar6 != 0) {
            do {
              FUN_1801d2b20(lVar7,(&local_1b8)[uVar11 * 3],local_1b0 + uVar11 * 6);
              uVar11 = uVar11 + 1;
            } while (uVar11 < uVar6);
          }
          pfVar8 = (float *)(&DAT_1809a5030 + uVar3 * 0xac + uVar14 * 0x2a);
          *pfVar8 = fVar20;
          pfVar8[1] = fVar21;
          pfVar8[2] = fVar22;
          pfVar8[3] = fVar23;
          puVar15 = (undefined4 *)(&DAT_1809a5040 + lVar17 + lVar18);
          *puVar15 = fVar24;
          puVar15[1] = fVar25;
          puVar15[2] = fVar26;
          puVar15[3] = fVar27;
          puVar15 = (undefined4 *)(&DAT_1809a5050 + lVar17 + lVar18);
          *puVar15 = fVar28;
          puVar15[1] = fVar29;
          puVar15[2] = fVar30;
          puVar15[3] = fVar31;
          puVar15 = (undefined4 *)(&DAT_1809a5060 + lVar17 + lVar18);
          *puVar15 = fVar32;
          puVar15[1] = fVar33;
          puVar15[2] = fVar34;
          puVar15[3] = fVar35;
          (&DAT_1809a50b0)[lVar17 + lVar18] = 1;
          puVar15 = (undefined4 *)(&DAT_1809a5070 + lVar17 + lVar18);
          *puVar15 = fVar36;
          puVar15[1] = fVar37;
          puVar15[2] = fVar38;
          puVar15[3] = fVar39;
          puVar15 = (undefined4 *)(&DAT_1809a5080 + lVar17 + lVar18);
          *puVar15 = fVar40;
          puVar15[1] = fVar41;
          puVar15[2] = fVar42;
          puVar15[3] = fVar43;
          puVar15 = (undefined4 *)(&DAT_1809a5090 + lVar17 + lVar18);
          *puVar15 = fVar44;
          puVar15[1] = fVar45;
          puVar15[2] = fVar46;
          puVar15[3] = fVar47;
          puVar15 = (undefined4 *)(&DAT_1809a50a0 + lVar17 + lVar18);
          *puVar15 = fVar48;
          puVar15[1] = fVar49;
          puVar15[2] = fVar50;
          puVar15[3] = fVar51;
          iVar10 = local_298;
          if (local_290 < uVar13) {
            (&DAT_1809a50b4)[uVar3 * 0xac + uVar14 * 0x2a] = 0xffffffff;
            (&DAT_1809a50b8)[uVar3 * 0xac + uVar14 * 0x2a] = 0xffffffff;
          }
LAB_1800946b9:
          uVar11 = uVar14;
          if (iVar10 == 1) {
            iVar1 = *local_248;
            iVar10 = local_278[6];
            if (-1 < iVar1) {
              if (iVar1 != (&DAT_1809a50b4)[uVar3 * 0xac + uVar14 * 0x2a]) {
                lVar17 = FUN_180094c50(1,iVar1);
                if ((lVar17 != 0) &&
                   (cVar4 = FUN_1801d4280(lVar7,"g_tMetalness",lVar17), cVar4 == '\0')) {
                  if (local_290 < uVar13) goto LAB_180094747;
                  FUN_180092f20("%s not written (no such texture parameter) | material %p",
                                "g_tMetalness",lVar7);
                }
                (&DAT_1809a50b4)[uVar3 * 0xac + uVar14 * 0x2a] = iVar1;
              }
LAB_180094747:
              uVar11 = (ulonglong)local_294;
            }
LAB_18009474b:
            if ((iVar10 < 0) || (iVar10 == (&DAT_1809a50b8)[uVar3 * 0xac + uVar14 * 0x2a])) {
LAB_1800947ad:
              uVar6 = local_288;
              goto LAB_1800947b2;
            }
            lVar17 = FUN_180094c50(0,iVar10);
            if ((lVar17 == 0) || (cVar4 = FUN_1801d4280(lVar7,"g_tNormal",lVar17), cVar4 != '\0')) {
LAB_1800947a5:
              (&DAT_1809a50b8)[uVar3 * 0xac + uVar14 * 0x2a] = iVar10;
              goto LAB_1800947ad;
            }
            if (uVar13 <= local_290) {
              FUN_180092f20("%s not written (no such texture parameter) | material %p","g_tNormal",
                            lVar7);
              goto LAB_1800947a5;
            }
            uVar6 = local_288;
          }
          else {
            if (iVar10 == 5) {
              iVar10 = local_278[0xc];
              goto LAB_18009474b;
            }
LAB_1800947b2:
          }
          uVar12 = (uint)uVar11;
          if ((uVar11 & 2) != 0) {
            local_27c = 1.0;
            local_280 = 0.0;
            fVar19 = (float)local_278[4];
            pfVar8 = &local_280;
            if (0.0 <= fVar19) {
              pfVar8 = (float *)(local_278 + 4);
            }
            pfVar9 = &local_27c;
            if (fVar19 <= DAT_1808ac34c) {
              pfVar9 = pfVar8;
            }
            fVar19 = *pfVar9 * _DAT_1808ac250;
            if ((local_290 < uVar13) ||
               (DAT_1808abf80 <
                (float)((uint)(fVar19 - (float)(&DAT_1809a502c)[uVar3 * 0xac + uVar14 * 0x2a]) &
                       uVar2))) {
              local_260[1] = 0.0;
              local_260[2] = 0.0;
              local_260[3] = 0.0;
              local_260[0] = fVar19;
              FUN_1801d2b20(lVar7,"g_flOpacityScale",local_260);
              (&DAT_1809a502c)[uVar3 * 0xac + uVar14 * 0x2a] = fVar19;
            }
          }
          puVar16 = local_270;
          iVar10 = local_298;
        }
        puVar15 = &DAT_1809a5018;
        local_294 = uVar12 + 1;
        uVar14 = (ulonglong)local_294;
      } while ((int)local_294 < 4);
    }
    local_268 = local_268 + 1;
    if (400 < local_268) {
      return;
    }
  } while( true );
}



/* ===== 180094920 FUN_180094920 ===== */

longlong FUN_180094920(longlong param_1,longlong param_2)

{
  return param_2 * 0x2ac + param_1;
}



/* ===== 180094930 FUN_180094930 ===== */

undefined8 FUN_180094930(void)

{
  return 0x40;
}



/* ===== 180094950 FUN_180094950 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180094950(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  ULONGLONG UVar2;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStack_258 [32];
  undefined8 local_238;
  undefined8 *local_230;
  undefined1 local_228 [512];
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_258;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_180540170(local_228,0,0x200);
  puVar1 = (ulonglong *)FUN_180013640();
  local_238 = 0;
  local_230 = &local_res10;
  FUN_180501904(*puVar1 | 2,local_228,0x200,param_1);
  UVar2 = GetTickCount64();
  FUN_1802b2870("wl_chams.log","[%llu] textures | %s\n",UVar2,local_228);
  return;
}



/* ===== 180094a10 FUN_180094a10 ===== */

undefined8 FUN_180094a10(longlong param_1)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  
  if (3 < *(ulonglong *)(param_1 + 0x10)) {
    uVar6 = (ulonglong)**(int **)(param_1 + 8);
    if ((0 < **(int **)(param_1 + 8)) && (uVar6 == *(longlong *)(param_1 + 0x18) * 0x65)) {
      lVar5 = *(longlong *)(param_1 + 0x20);
      if ((ulonglong)(*(longlong *)(param_1 + 0x30) - lVar5) < uVar6) {
        FUN_1800950c0(param_1 + 0x20);
        lVar5 = *(longlong *)(param_1 + 0x20);
        FUN_180540170(lVar5,0,uVar6);
        lVar5 = uVar6 + lVar5;
      }
      else {
        uVar7 = *(longlong *)(param_1 + 0x28) - lVar5;
        uVar10 = uVar6;
        if (uVar7 < uVar6) {
          FUN_180540170(lVar5,0,uVar7);
          lVar5 = *(longlong *)(param_1 + 0x28);
          uVar10 = uVar6 - uVar7;
        }
        FUN_180540170(lVar5,0,uVar10);
        lVar5 = lVar5 + uVar10;
      }
      *(longlong *)(param_1 + 0x28) = lVar5;
      uVar7 = 0;
      lVar3 = *(longlong *)(param_1 + 0x20);
      uVar10 = 0;
      lVar4 = *(longlong *)(param_1 + 8);
      uVar8 = *(longlong *)(param_1 + 0x10) - 4;
      if (uVar8 != 0) {
        do {
          bVar1 = *(byte *)(lVar4 + 4 + uVar7);
          uVar7 = uVar7 + 1;
          uVar9 = (ulonglong)(bVar1 >> 4);
          if (uVar9 == 0xf) {
            do {
              if (uVar8 <= uVar7) goto LAB_180094bf7;
              bVar2 = *(byte *)(lVar4 + 4 + uVar7);
              uVar7 = uVar7 + 1;
              uVar9 = uVar9 + bVar2;
            } while (bVar2 == 0xff);
          }
          if ((uVar8 - uVar7 < uVar9) || ((lVar5 - lVar3) - uVar10 < uVar9)) {
LAB_180094bf7:
            uVar10 = 0xffffffffffffffff;
            break;
          }
          FUN_180540530(uVar10 + lVar3,lVar4 + 4 + uVar7,uVar9);
          uVar7 = uVar7 + uVar9;
          uVar10 = uVar10 + uVar9;
          if (uVar8 <= uVar7) break;
          if (uVar8 - uVar7 < 2) goto LAB_180094bf7;
          uVar9 = (ulonglong)
                  CONCAT11(*(undefined1 *)(lVar4 + 5 + uVar7),*(undefined1 *)(lVar4 + 4 + uVar7));
          if ((uVar9 == 0) || (uVar10 < uVar9)) goto LAB_180094bf7;
          uVar7 = uVar7 + 2;
          uVar11 = (ulonglong)(bVar1 & 0xf);
          if (uVar11 == 0xf) {
            do {
              if (uVar8 <= uVar7) goto LAB_180094bf7;
              bVar1 = *(byte *)(lVar4 + 4 + uVar7);
              uVar7 = uVar7 + 1;
              uVar11 = uVar11 + bVar1;
            } while (bVar1 == 0xff);
          }
          uVar11 = uVar11 + 4;
          if ((lVar5 - lVar3) - uVar10 < uVar11) goto LAB_180094bf7;
          for (; uVar11 != 0; uVar11 = uVar11 - 1) {
            *(undefined1 *)(uVar10 + lVar3) = *(undefined1 *)(uVar10 + (lVar3 - uVar9));
            uVar10 = uVar10 + 1;
          }
        } while (uVar7 < uVar8);
      }
      if (uVar10 == uVar6) {
        return 1;
      }
      if (*(longlong *)(param_1 + 0x20) != *(longlong *)(param_1 + 0x28)) {
        *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x20);
      }
    }
  }
  return 0;
}



/* ===== 180094c50 FUN_180094c50 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_180094c50(uint param_1,int param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined **ppuVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  char *pcVar8;
  undefined1 auStack_88 [32];
  int local_68;
  undefined *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_180919500 ^ (ulonglong)auStack_88;
  if (param_1 < 2) {
    iVar7 = 0;
    if (-1 < param_2) {
      iVar7 = param_2;
    }
    if (100 < iVar7) {
      iVar7 = 100;
    }
    if (DAT_180ca1bef == '\0') {
      local_58 = &DAT_1809e8620;
      iVar2 = FUN_1804e4d70(&DAT_1809e8620);
      if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1804e4a90(5);
      }
      if (DAT_1809e866c == 0x7fffffff) {
        DAT_1809e866c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
        FUN_1804e4a90(6);
      }
      if (DAT_180ca1bef == '\0') {
        if (DAT_180ca1c3c != '\0') {
LAB_180094e07:
          FUN_1804e4e90(&DAT_1809e8620);
          goto LAB_180094e0f;
        }
        ppuVar4 = &PTR_s_normal_1809e8670;
        do {
          cVar1 = FUN_180094a10(ppuVar4);
          if (cVar1 == '\0') {
            DAT_180ca1c3c = '\x01';
            FUN_180094950("%s: the embedded blob did not decompress",*ppuVar4);
            goto LAB_180094e07;
          }
          ppuVar4 = ppuVar4 + 0x79;
        } while (ppuVar4 != (undefined **)&DAT_1809e8e00);
        FUN_180094950("blobs decompressed | normal %zu bytes | metal %zu bytes",
                      DAT_1809e8698 - DAT_1809e8690,DAT_1809e8a60 - _DAT_1809e8a58);
        DAT_180ca1bef = '\x01';
      }
      FUN_1804e4e90(&DAT_1809e8620);
    }
    lVar5 = (longlong)(int)param_1 * 0x3c8;
    lVar6 = (longlong)iVar7;
    lVar3 = *(longlong *)(lVar5 + 0x1809e86a8 + lVar6 * 8);
    if ((lVar3 == 0) && (*(char *)(lVar5 + 0x1809e89d0 + lVar6) == '\0')) {
      *(undefined1 *)(lVar5 + 0x1809e89d0 + lVar6) = 1;
      local_50 = 0;
      uStack_48 = 0;
      local_40 = 0;
      uStack_38 = 0;
      local_68 = iVar7;
      snprintf(&local_50,0x20,"%s_%d.vtex",(&PTR_s_normal_1809e8670)[(longlong)(int)param_1 * 0x79])
      ;
      lVar3 = FUN_1801d6450(&local_50);
      *(longlong *)(lVar5 + 0x1809e86a8 + lVar6 * 8) = lVar3;
      pcVar8 = "NOT loaded (the shader keeps the white texture)";
      if (lVar3 != 0) {
        pcVar8 = "loaded";
      }
      FUN_180094950("%s | %s",&local_50,pcVar8);
      lVar3 = *(longlong *)(lVar5 + 0x1809e86a8 + lVar6 * 8);
    }
  }
  else {
LAB_180094e0f:
    lVar3 = 0;
  }
  return lVar3;
}



/* ===== 180094e40 FUN_180094e40 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_180094e40(longlong param_1)

{
  char cVar1;
  undefined *puVar2;
  int iVar3;
  ulonglong uVar4;
  char *pcVar5;
  size_t sVar6;
  longlong lVar7;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  longlong lVar8;
  longlong lVar9;
  char *pcVar10;
  int iVar11;
  undefined1 auStack_648 [32];
  char local_628 [512];
  char local_428 [512];
  undefined1 local_228 [512];
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_648;
  uVar4 = 0;
  if ((DAT_180ca1bef != '\0') && (uVar4 = FUN_180540170(local_428,0,0x200), param_1 != 0)) {
    FUN_180540170(local_628,0,0x200);
    uVar4 = FUN_180207ed0(param_1,local_628);
    if ((char)uVar4 != '\0') {
      pcVar5 = local_628;
      while (local_628[0] != '\0') {
        if (*pcVar5 == '\\') {
          *pcVar5 = '/';
        }
        pcVar5 = pcVar5 + 1;
        local_628[0] = *pcVar5;
      }
      sVar6 = strlen(local_628);
      if (0x1ff < sVar6) {
        sVar6 = 0x1ff;
      }
      FUN_180540530(local_428,local_628,sVar6);
      local_428[sVar6] = '\0';
      lVar7 = FUN_1804ef4b0(local_428,0x2f);
      puVar2 = PTR_s_normal_1809e8670;
      if (lVar7 == 0) {
        pcVar5 = local_428;
        pcVar10 = local_428 + 1;
      }
      else {
        pcVar5 = (char *)(lVar7 + 1);
        pcVar10 = (char *)(lVar7 + 2);
      }
      sVar6 = strlen(PTR_s_normal_1809e8670);
      iVar3 = strncmp(pcVar5,puVar2,sVar6 & 0xffffffff);
      puVar2 = PTR_s_metal_1809e8a38;
      uVar4 = CONCAT44(extraout_var,iVar3);
      if ((iVar3 == 0) && (pcVar5[sVar6] == '_')) {
        lVar7 = 0;
      }
      else {
        sVar6 = strlen(PTR_s_metal_1809e8a38);
        iVar3 = strncmp(pcVar5,puVar2,sVar6 & 0xffffffff);
        uVar4 = CONCAT44(extraout_var_00,iVar3);
        if ((iVar3 != 0) || (pcVar5[sVar6] != '_')) goto LAB_180095086;
        lVar7 = 1;
      }
      pcVar10 = pcVar10 + sVar6;
      iVar11 = 0;
      iVar3 = 0;
      if ('/' < *pcVar10) {
        do {
          cVar1 = *pcVar10;
          uVar4 = (ulonglong)(uint)(int)cVar1;
          if (('9' < cVar1) || (3 < iVar3)) break;
          pcVar10 = pcVar10 + 1;
          iVar3 = iVar3 + 1;
          iVar11 = (int)cVar1 + (iVar11 * 5 + -0x18) * 2;
        } while ('/' < *pcVar10);
        if ((iVar3 != 0) && (iVar11 < 0x65)) {
          lVar8 = 0;
          do {
            uVar4 = 0;
            lVar9 = lVar8 + 1;
            if (pcVar10[lVar8] != (&DAT_1806e6d20)[lVar8]) goto LAB_180095086;
            lVar8 = lVar9;
          } while (lVar9 != 8);
          uVar4 = lVar7 * 0x3c8;
          lVar8 = (&DAT_1809e8688)[lVar7 * 0x79];
          lVar7 = iVar11 * lVar8 + (&DAT_1809e8690)[lVar7 * 0x79];
          if (((lVar7 != 0) && (lVar8 != 0)) && (DAT_180962078 != 0)) {
            FUN_180540170(local_228,0,0x200);
            uVar4 = FUN_180207ed0(param_1,local_228);
            if ((char)uVar4 != '\0') {
              uVar4 = FUN_180207fc0(param_1,local_228,lVar7,lVar8);
              return uVar4;
            }
          }
        }
      }
    }
  }
LAB_180095086:
  return uVar4 & 0xffffffffffffff00;
}



/* ===== 1800950b0 FUN_1800950b0 ===== */

undefined8 FUN_1800950b0(undefined8 *param_1)

{
  return *param_1;
}



/* ===== 1800950c0 FUN_1800950c0 ===== */

void FUN_1800950c0(longlong *param_1,ulonglong param_2)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  puVar4 = auStack_28;
  puVar5 = auStack_28;
  if (0x7fffffffffffffff < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1800118d0();
  }
  lVar2 = *param_1;
  uVar8 = param_1[2] - lVar2;
  uVar7 = 0x7fffffffffffffff;
  if ((uVar8 <= 0x7fffffffffffffff - (uVar8 >> 1)) &&
     (uVar7 = (uVar8 >> 1) + uVar8, uVar7 < param_2)) {
    uVar7 = param_2;
  }
  puVar6 = auStack_28;
  if (lVar2 == 0) goto LAB_180095153;
  lVar3 = lVar2;
  if ((ulonglong)(param_1[2] - lVar2) < 0x1000) {
LAB_18009513b:
    puVar5 = puVar4;
  }
  else {
    lVar3 = *(longlong *)(lVar2 + -8);
    if (0x1f < (lVar2 - lVar3) - 8U) {
      lVar3 = 5;
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(5);
      puVar4 = auStack_20;
      goto LAB_18009513b;
    }
  }
  *(undefined8 *)(puVar5 + -8) = 0x180095146;
  thunk_FUN_1803d64e0(lVar3);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  puVar6 = puVar5;
LAB_180095153:
  *(undefined8 *)(puVar6 + -8) = 0x18009515b;
  lVar2 = FUN_18000fb70(uVar7);
  *param_1 = lVar2;
  param_1[1] = lVar2;
  param_1[2] = lVar2 + uVar7;
  return;
}



/* ===== 180095180 FUN_180095180 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_180095180(undefined8 *param_1,LPCSTR param_2)

{
  int cchWideChar;
  LPWSTR **lpWideCharStr;
  LPCSTR pCVar1;
  undefined1 auStackY_88 [32];
  LPWSTR **local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStackY_88;
  if (*(longlong *)(param_2 + 0x10) == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 7;
    *(undefined2 *)param_1 = 0;
  }
  else {
    pCVar1 = param_2;
    if (0xf < *(ulonglong *)(param_2 + 0x18)) {
      pCVar1 = *(LPCSTR *)param_2;
    }
    cchWideChar = MultiByteToWideChar(0xfde9,0,pCVar1,(int)*(longlong *)(param_2 + 0x10),(LPWSTR)0x0
                                      ,0);
    FUN_1800968c0(&local_48,(longlong)cchWideChar,0);
    lpWideCharStr = (LPWSTR **)&local_48;
    if (7 < uStack_30) {
      lpWideCharStr = local_48;
    }
    if (*(ulonglong *)(param_2 + 0x18) < 0x10) {
      pCVar1 = param_2;
    }
    else {
      pCVar1 = *(LPCSTR *)param_2;
    }
    MultiByteToWideChar(0xfde9,0,pCVar1,*(int *)(param_2 + 0x10),(LPWSTR)lpWideCharStr,cchWideChar);
    *param_1 = local_48;
    param_1[1] = uStack_40;
    param_1[2] = local_38;
    param_1[3] = uStack_30;
  }
  return param_1;
}



/* ===== 180095270 FUN_180095270 ===== */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180095270(longlong param_1,longlong param_2)

{
  code *pcVar1;
  int iVar2;
  DWORD DVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong ****ppppuVar11;
  ulonglong ***pppuVar12;
  undefined8 ****ppppuVar13;
  LPWSTR ***ppppWVar14;
  uint uVar15;
  char *pcVar16;
  LPCWSTR ***ppppWVar17;
  undefined8 ****ppppuVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  undefined1 *puVar22;
  undefined1 *puVar23;
  char *pcVar24;
  LPCSTR lpMultiByteStr;
  LPCSTR lpMultiByteStr_00;
  undefined8 uVar25;
  ulonglong uVar26;
  longlong *plVar27;
  undefined4 uVar28;
  undefined8 in_R10;
  ulonglong ****unaff_R12;
  char acStackY_465b [8555];
  undefined8 uStackY_24f0;
  undefined1 auStackY_24e8 [8];
  undefined1 auStackY_24e0 [24];
  int local_24b8 [2];
  undefined8 local_24b0;
  uint local_24a8 [2];
  undefined8 local_24a0;
  uint local_2498 [2];
  undefined8 local_2490;
  undefined4 local_2488 [2];
  longlong local_2480 [3];
  undefined8 local_2468;
  int iStack_2464;
  undefined1 *puStack_2460;
  undefined8 local_2458;
  undefined8 uStack_2450;
  undefined8 local_2448;
  undefined8 uStack_2440;
  undefined8 local_2438;
  undefined1 *puStack_2430;
  undefined8 local_2428;
  undefined1 *puStack_2420;
  undefined8 local_2418;
  LPCWSTR ***local_2408;
  undefined8 uStack_2400;
  char *local_23f8;
  ulonglong uStack_23f0;
  undefined8 ****local_23e8;
  ulonglong uStack_23e0;
  ulonglong local_23d8;
  LPCWSTR ***ppppWStack_23d0;
  undefined8 ****local_23c8;
  undefined8 uStack_23c0;
  ulonglong local_23b8;
  ulonglong local_23b0;
  ulonglong ****local_23a8;
  undefined8 uStack_23a0;
  undefined8 ****local_2398;
  ulonglong local_2390;
  LPWSTR ***local_2388;
  undefined8 uStack_2380;
  longlong local_2378;
  LPCWSTR ***ppppWStack_2370;
  ulonglong local_2368;
  ulonglong uStack_2360;
  ulonglong local_2358;
  ulonglong local_2350;
  ulonglong ***local_2348;
  ulonglong ***pppuStack_2340;
  undefined8 ****local_2338;
  ulonglong local_2330;
  undefined8 ****local_2328;
  ulonglong uStack_2320;
  ulonglong local_2318;
  LPCWSTR ***ppppWStack_2310;
  LPCWSTR ***local_2308;
  undefined8 uStack_2300;
  undefined8 local_22f8;
  ulonglong uStack_22f0;
  LPWSTR ***local_22e8;
  undefined8 uStack_22e0;
  longlong local_22d8;
  LPCWSTR ***ppppWStack_22d0;
  undefined1 local_22c8 [32];
  undefined1 local_22a8 [32];
  undefined1 local_2288 [50];
  char local_2256;
  undefined2 local_2255;
  char local_2253 [11];
  undefined1 local_2248 [512];
  undefined1 local_2048 [4096];
  undefined1 local_1048 [4096];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x180095292;
  local_48 = DAT_180919500 ^ (ulonglong)auStackY_24e8;
  if (*(longlong *)(param_1 + 0x40) == 0) {
    uStack_22e0 = 0;
    local_22d8 = 0;
    ppppWStack_22d0 = (LPCWSTR ***)&DAT_00000007;
    local_22e8 = (LPWSTR ***)0x0;
  }
  else {
    lpMultiByteStr = (LPCSTR)(param_1 + 0x30);
    lpMultiByteStr_00 = lpMultiByteStr;
    if (0xf < *(ulonglong *)(param_1 + 0x48)) {
      lpMultiByteStr_00 = *(LPCSTR *)lpMultiByteStr;
    }
    uStackY_24f0 = 0x18009530a;
    iVar2 = MultiByteToWideChar(0xfde9,0,lpMultiByteStr_00,(int)*(longlong *)(param_1 + 0x40),
                                (LPWSTR)0x0,0);
    uStackY_24f0 = 0x18009531c;
    FUN_1800968c0(&local_2388,(longlong)iVar2,0);
    ppppWVar14 = (LPWSTR ***)&local_2388;
    if (&DAT_00000007 < ppppWStack_2370) {
      ppppWVar14 = local_2388;
    }
    if (0xf < *(ulonglong *)(param_1 + 0x48)) {
      lpMultiByteStr = *(LPCSTR *)lpMultiByteStr;
    }
    uStackY_24f0 = 0x180095352;
    MultiByteToWideChar(0xfde9,0,lpMultiByteStr,*(int *)(param_1 + 0x40),(LPWSTR)ppppWVar14,iVar2);
    local_22e8 = local_2388;
    uStack_22e0 = uStack_2380;
    local_22d8 = local_2378;
    ppppWStack_22d0 = ppppWStack_2370;
  }
  ppppWVar17 = ppppWStack_22d0;
  local_2480[2] = 0;
  local_2468 = 0;
  puStack_2460 = (undefined1 *)0x0;
  local_2458 = 0;
  uStack_2450 = 0;
  local_2448 = 0;
  uStack_2440 = 0;
  local_2438 = 0;
  puStack_2430 = (undefined1 *)0x0;
  local_2428 = 0;
  puStack_2420 = (undefined1 *)0x0;
  local_2418 = 0;
  local_2480[1] = 0x68;
  uStackY_24f0 = 0x1800953b0;
  FUN_180540170(local_2248,0,0x200);
  uStackY_24f0 = 0x1800953c4;
  FUN_180540170(local_2048,0,0x1000);
  puStack_2460 = local_2248;
  local_2458 = CONCAT44(local_2458._4_4_,0x100);
  puStack_2430 = local_2048;
  local_2428 = CONCAT44(local_2428._4_4_,0x800);
  uStackY_24f0 = 0x1800953fc;
  FUN_180540170(local_1048,0,0x1000);
  puStack_2420 = local_1048;
  local_2418 = CONCAT44(local_2418._4_4_,0x800);
  ppppWVar14 = (LPWSTR ***)&local_22e8;
  if (&DAT_00000007 < ppppWVar17) {
    ppppWVar14 = local_22e8;
  }
  uStackY_24f0 = 0x180095431;
  iVar2 = WinHttpCrackUrl(ppppWVar14,0,0,local_2480 + 1);
  if ((iVar2 == 0) || (1 < iStack_2464 - 1U)) {
    uVar25 = 0x22;
    pcVar16 = "bad url (http:// or https:// only)";
  }
  else {
    uStackY_24f0 = 0x180095464;
    lVar4 = WinHttpOpen(L"newerwin",4,0,0);
    if (lVar4 != 0) {
      uVar28 = *(undefined4 *)(param_1 + 0x88);
      uStackY_24f0 = 0x18009549c;
      WinHttpSetTimeouts(lVar4,uVar28,uVar28,uVar28);
      uStackY_24f0 = 0x1800954b4;
      lVar5 = WinHttpConnect(lVar4,local_2248,local_2458._4_2_,0);
      if (lVar5 == 0) {
LAB_1800962c0:
        uStackY_24f0 = 0x1800962d6;
        FUN_180029840(param_2 + 0x38,"cannot connect",0xe);
        puVar22 = auStackY_24e8;
        puVar23 = auStackY_24e8;
        if (lVar5 != 0) goto LAB_1800962db;
      }
      else {
        local_2408 = (LPCWSTR ***)0x0;
        uStack_2400 = 0;
        local_23f8 = (char *)0x0;
        uStack_23f0 = 0;
        uStackY_24f0 = 0x1800954e0;
        uVar25 = FUN_180512c70(local_2048);
        uStackY_24f0 = 0x1800954f3;
        FUN_180024d40(&local_2408,local_2048,uVar25);
        uStackY_24f0 = 0x180095500;
        uVar25 = FUN_180512c70(local_1048);
        uStackY_24f0 = 0x180095513;
        puVar6 = (undefined8 *)FUN_180025260(&local_2408,local_1048,uVar25);
        uVar28 = (undefined4)in_R10;
        local_2308 = (LPCWSTR ***)*puVar6;
        uStack_2300 = puVar6[1];
        local_22f8 = puVar6[2];
        uStack_22f0 = puVar6[3];
        puVar6[2] = 0;
        puVar6[3] = 7;
        *(undefined2 *)puVar6 = 0;
        if (uStack_23f0 < 8) {
LAB_180095594:
          local_23f8 = (char *)0x0;
          uStack_23f0 = 7;
          local_2408 = (LPCWSTR ***)((ulonglong)local_2408 & 0xffffffffffff0000);
          ppppWVar17 = (LPCWSTR ***)&local_2308;
          if (7 < uStack_22f0) {
            ppppWVar17 = local_2308;
          }
          uStackY_24f0 = 0x1800955cc;
          puVar6 = (undefined8 *)FUN_180095180(local_22a8,param_1 + 0x10);
          if (7 < (ulonglong)puVar6[3]) {
            puVar6 = (undefined8 *)*puVar6;
          }
          uStackY_24f0 = 0x180095605;
          unaff_R12 = (ulonglong ****)WinHttpOpenRequest(lVar5,puVar6,ppppWVar17,0);
          uStackY_24f0 = 0x180095619;
          FUN_1800289e0(local_22a8);
          uVar28 = (undefined4)in_R10;
          puVar19 = auStackY_24e8;
          if (7 < uStack_22f0) {
            uVar8 = uStack_22f0 * 2 + 2;
            ppppWVar17 = local_2308;
            if (0xfff < uVar8) {
              ppppWVar17 = (LPCWSTR ***)local_2308[-1];
              if (0x1f < (ulonglong)((longlong)local_2308 + (-8 - (longlong)ppppWVar17)))
              goto LAB_18009587c;
              uVar8 = uStack_22f0 * 2 + 0x29;
            }
            uStackY_24f0 = 0x180095664;
            thunk_FUN_1803d64e0(ppppWVar17,uVar8);
          }
          puVar22 = auStackY_24e8;
          puVar20 = auStackY_24e8;
          puVar21 = auStackY_24e8;
          local_22f8 = 0;
          uStack_22f0 = 7;
          local_2308 = (LPCWSTR ***)((ulonglong)local_2308 & 0xffffffffffff0000);
          if (unaff_R12 == (ulonglong ****)0x0) goto LAB_1800962c0;
          uStack_2380 = 0;
          local_2378 = 0;
          ppppWStack_2370 = (LPCWSTR ***)&DAT_00000007;
          local_2388 = (LPWSTR ***)0x0;
          lVar9 = *(longlong *)(param_1 + 0x78);
          lVar4 = *(longlong *)(param_1 + 0x70);
          lVar10 = local_2378;
          ppppWVar17 = ppppWStack_2370;
          while( true ) {
            local_2378 = lVar10;
            ppppWStack_2370 = ppppWVar17;
            if (lVar4 == lVar9) break;
            uStackY_24f0 = 0x1800956d0;
            FUN_180095180(&local_2368,lVar4 + 0x20);
            uStackY_24f0 = 0x1800956e2;
            uVar25 = FUN_180095180(local_2288,lVar4);
            uStackY_24f0 = 0x1800956f8;
            puVar6 = (undefined8 *)FUN_180025260(uVar25,&DAT_1806e6e2c,2);
            local_2408 = (LPCWSTR ***)*puVar6;
            uStack_2400 = puVar6[1];
            local_23f8 = (char *)puVar6[2];
            uStack_23f0 = puVar6[3];
            puVar6[2] = 0;
            puVar6[3] = 7;
            *(undefined2 *)puVar6 = 0;
            uStackY_24f0 = 0x18009572b;
            FUN_180096ab0(local_22c8);
            uStackY_24f0 = 0x180095745;
            puVar7 = (ulonglong *)FUN_180025260(local_22c8,&DAT_1806e6dfc,2);
            local_2328 = (undefined8 ****)*puVar7;
            uStack_2320 = puVar7[1];
            local_2318 = puVar7[2];
            ppppWStack_2310 = (LPCWSTR ***)puVar7[3];
            puVar7[2] = 0;
            puVar7[3] = 7;
            *(undefined2 *)puVar7 = 0;
            ppppuVar18 = &local_2328;
            if (&DAT_00000007 < ppppWStack_2310) {
              ppppuVar18 = local_2328;
            }
            uStackY_24f0 = 0x18009579b;
            FUN_180025260(&local_2388,ppppuVar18,local_2318);
            uVar28 = (undefined4)in_R10;
            if (&DAT_00000007 < ppppWStack_2310) {
              uVar8 = (longlong)ppppWStack_2310 * 2 + 2;
              ppppuVar18 = local_2328;
              if (0xfff < uVar8) {
                ppppuVar18 = (undefined8 ****)local_2328[-1];
                ppppWVar17 = ppppWStack_2310;
                if (0x1f < (ulonglong)((longlong)local_2328 + (-8 - (longlong)ppppuVar18)))
                goto LAB_180095883;
                uVar8 = (longlong)ppppWStack_2310 * 2 + 0x29;
              }
              uStackY_24f0 = 0x1800957e6;
              thunk_FUN_1803d64e0(ppppuVar18,uVar8);
            }
            uStackY_24f0 = 0x1800957f3;
            FUN_1800289e0(local_22c8);
            uVar28 = (undefined4)in_R10;
            if (7 < uStack_23f0) {
              uVar8 = uStack_23f0 * 2 + 2;
              ppppWVar17 = local_2408;
              if (0xfff < uVar8) {
                ppppWVar17 = (LPCWSTR ***)local_2408[-1];
                if (0x1f < (ulonglong)((longlong)local_2408 + (-8 - (longlong)ppppWVar17)))
                goto LAB_18009588a;
                uVar8 = uStack_23f0 * 2 + 0x29;
              }
              uStackY_24f0 = 0x180095834;
              thunk_FUN_1803d64e0(ppppWVar17,uVar8);
            }
            uStackY_24f0 = 0x180095841;
            FUN_1800289e0(local_2288);
            uStackY_24f0 = 0x18009584e;
            FUN_1800289e0(&local_2368);
            lVar4 = lVar4 + 0x40;
            lVar10 = local_2378;
            ppppWVar17 = ppppWStack_2370;
          }
          uVar28 = *(undefined4 *)(param_1 + 0x60);
          if (*(longlong *)(param_1 + 0x60) != 0) goto LAB_180095891;
          plVar27 = (longlong *)0x0;
          puVar22 = auStackY_24e8;
        }
        else {
          uVar8 = uStack_23f0 * 2 + 2;
          ppppWVar17 = local_2408;
          if (uVar8 < 0x1000) {
LAB_18009558f:
            uStackY_24f0 = 0x180095594;
            thunk_FUN_1803d64e0(ppppWVar17,uVar8);
            goto LAB_180095594;
          }
          ppppWVar17 = (LPCWSTR ***)local_2408[-1];
          if ((ulonglong)((longlong)local_2408 + (-8 - (longlong)ppppWVar17)) < 0x20) {
            uVar8 = uStack_23f0 * 2 + 0x29;
            goto LAB_18009558f;
          }
          pcVar1 = (code *)swi(0x29);
          (*pcVar1)(5);
          puVar19 = auStackY_24e0;
LAB_18009587c:
          pcVar1 = (code *)swi(0x29);
          (*pcVar1)(5);
          puVar20 = puVar19 + 8;
LAB_180095883:
          pcVar1 = (code *)swi(0x29);
          (*pcVar1)(5);
          puVar21 = puVar20 + 8;
LAB_18009588a:
          lVar10 = 5;
          pcVar1 = (code *)swi(0x29);
          (*pcVar1)();
          puVar22 = puVar21 + 8;
LAB_180095891:
          plVar27 = (longlong *)(param_1 + 0x50);
          if (0xf < *(ulonglong *)(param_1 + 0x68)) {
            plVar27 = (longlong *)*plVar27;
          }
        }
        if (lVar10 == 0) {
          ppppWVar14 = (LPWSTR ***)0x0;
        }
        else {
          ppppWVar14 = (LPWSTR ***)&local_2388;
          if (&DAT_00000007 < ppppWVar17) {
            ppppWVar14 = local_2388;
          }
        }
        *(undefined8 *)(puVar22 + 0x30) = 0;
        *(undefined4 *)(puVar22 + 0x28) = uVar28;
        *(undefined4 *)(puVar22 + 0x20) = uVar28;
        *(undefined8 *)(puVar22 + -8) = 0x1800958d9;
        iVar2 = WinHttpSendRequest(unaff_R12,ppppWVar14,-(uint)(lVar10 != 0),plVar27);
        if (iVar2 == 0) {
LAB_1800960e3:
          *(undefined8 *)(puVar22 + -8) = 0x1800960e9;
          DVar3 = GetLastError();
          if (DVar3 < 10) {
            local_2255._1_1_ = (char)DVar3 + '0';
            pcVar16 = (char *)((longlong)&local_2255 + 1);
          }
          else {
            uVar8 = (ulonglong)DVar3;
            pcVar16 = local_2253;
            do {
              pcVar24 = pcVar16;
              uVar26 = uVar8 / 100;
              uVar15 = (uint)uVar26;
              pcVar16 = pcVar24 + -2;
              *(undefined2 *)pcVar16 =
                   *(undefined2 *)
                    (
                    "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
                    + (ulonglong)((int)uVar8 + uVar15 * -100) * 2);
              uVar8 = uVar26;
            } while (9 < uVar15);
            if (uVar15 != 0) {
              pcVar16 = pcVar24 + -3;
              *pcVar16 = (char)uVar26 + '0';
            }
          }
          local_2408 = (LPCWSTR ***)0x0;
          uStack_2400 = 0;
          local_23f8 = (char *)0x0;
          uStack_23f0 = 0;
          if (pcVar16 == local_2253) {
            local_23f8 = (char *)0x0;
            uStack_23f0 = 0xf;
            local_2408 = (LPCWSTR ***)0x0;
          }
          else {
            pcVar24 = local_2253 + -(longlong)pcVar16;
            if ((char *)0x7fffffffffffffff < pcVar24) {
                    /* WARNING: Subroutine does not return */
              *(undefined8 *)(puVar22 + -8) = 0x180096341;
              FUN_180011990();
            }
            if (pcVar24 < (char *)0x10) {
              uStack_23f0 = 0xf;
              *(undefined8 *)(puVar22 + -8) = 0x1800961b2;
              local_23f8 = pcVar24;
              FUN_180540530(&local_2408,pcVar16,pcVar24);
              *(char *)((longlong)&local_2408 + (longlong)pcVar24) = '\0';
            }
            else {
              uVar26 = (ulonglong)pcVar24 | 0xf;
              uVar8 = 0x7fffffffffffffff;
              if ((uVar26 < 0x8000000000000000) && (uVar8 = uVar26, uVar26 < 0x16)) {
                uVar8 = 0x16;
              }
              *(undefined8 *)(puVar22 + -8) = 0x1800961dd;
              lVar4 = FUN_18000fb70(uVar8 + 1);
              *(longlong *)(puVar22 + 0x58) = lVar4;
              local_2408 = (LPCWSTR ***)
                           CONCAT17(puVar22[0x5f],
                                    CONCAT25(*(undefined2 *)(puVar22 + 0x5d),
                                             CONCAT41(*(undefined4 *)(puVar22 + 0x59),(char)lVar4)))
              ;
              *(undefined8 *)(puVar22 + -8) = 0x180096217;
              local_23f8 = pcVar24;
              uStack_23f0 = uVar8;
              FUN_180540530(lVar4,pcVar16,pcVar24);
              pcVar24[lVar4] = '\0';
            }
            lVar5 = *(longlong *)(puVar22 + 0x50);
          }
          *(undefined8 *)(puVar22 + -8) = 0x180096239;
          uVar25 = FUN_180066ab0(&local_2368,"request failed (",&local_2408);
          *(undefined8 *)(puVar22 + -8) = 0x18009624f;
          puVar7 = (ulonglong *)FUN_1800134a0(uVar25,&DAT_1806e1ac0,1);
          local_2328 = (undefined8 ****)*puVar7;
          uStack_2320 = puVar7[1];
          local_2318 = puVar7[2];
          ppppWStack_2310 = (LPCWSTR ***)puVar7[3];
          puVar7[2] = 0;
          puVar7[3] = 0xf;
          *(undefined1 *)puVar7 = 0;
          *(undefined8 *)(puVar22 + -8) = 0x180096283;
          FUN_18002ba60(param_2 + 0x38,&local_2328);
          *(undefined8 *)(puVar22 + -8) = 0x18009628f;
          FUN_18000f890(&local_2328);
          *(undefined8 *)(puVar22 + -8) = 0x18009629c;
          FUN_18000f890(&local_2368);
          *(undefined8 *)(puVar22 + -8) = 0x1800962a6;
          FUN_18000f890(&local_2408);
        }
        else {
          *(undefined8 *)(puVar22 + -8) = 0x1800958ec;
          iVar2 = WinHttpReceiveResponse(unaff_R12,0);
          if (iVar2 == 0) goto LAB_1800960e3;
          *(undefined4 *)(puVar22 + 0x60) = 0;
          *(undefined4 *)(puVar22 + 0x58) = 4;
          *(undefined8 *)(puVar22 + 0x28) = 0;
          *(undefined1 **)(puVar22 + 0x20) = puVar22 + 0x58;
          *(undefined8 *)(puVar22 + -8) = 0x180095925;
          WinHttpQueryHeaders(unaff_R12,0x20000013,0,puVar22 + 0x60);
          *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(puVar22 + 0x60);
          *(undefined4 *)(puVar22 + 0x40) = 0;
          *(undefined8 *)(puVar22 + 0x28) = 0;
          *(undefined1 **)(puVar22 + 0x20) = puVar22 + 0x40;
          *(undefined8 *)(puVar22 + -8) = 0x180095958;
          WinHttpQueryHeaders(unaff_R12,0x16,0,0);
          uVar15 = *(uint *)(puVar22 + 0x40);
          if (uVar15 != 0) {
            pcVar16 = (char *)(ulonglong)(uVar15 >> 1);
            local_2408 = (LPCWSTR ***)0x0;
            uStack_2400 = 0;
            local_23f8 = (char *)0x0;
            uStack_23f0 = 0;
            if (pcVar16 < (char *)0x8) {
              uStack_23f0 = 7;
              if (pcVar16 == (char *)0x0) {
                local_2408 = (LPCWSTR ***)0x0;
                local_23f8 = pcVar16;
              }
              else {
                ppppWVar17 = (LPCWSTR ***)&local_2408;
                local_23f8 = pcVar16;
                for (uVar8 = ((ulonglong)uVar15 & 0xfffffffffffffffe) / 2; uVar8 != 0;
                    uVar8 = uVar8 - 1) {
                  *(undefined2 *)ppppWVar17 = 0;
                  ppppWVar17 = (LPCWSTR ***)((longlong)ppppWVar17 + 2);
                }
                *(undefined2 *)((longlong)&local_2408 + (longlong)pcVar16 * 2) = 0;
              }
            }
            else {
              uVar8 = (ulonglong)pcVar16 | 7;
              if (uVar8 < 10) {
                uVar8 = 10;
              }
              *(undefined8 *)(puVar22 + -8) = 0x1800959e3;
              local_2408 = (LPCWSTR ***)FUN_18000fb70(uVar8 * 2 + 2);
              ppppWVar17 = local_2408;
              for (uVar26 = ((ulonglong)uVar15 & 0xfffffffffffffffe) / 2; uVar26 != 0;
                  uVar26 = uVar26 - 1) {
                *(undefined2 *)ppppWVar17 = 0;
                ppppWVar17 = (LPCWSTR ***)((longlong)ppppWVar17 + 2);
              }
              *(undefined2 *)((longlong)local_2408 + (longlong)pcVar16 * 2) = 0;
              local_23f8 = pcVar16;
              uStack_23f0 = uVar8;
            }
            ppppWVar17 = (LPCWSTR ***)&local_2408;
            if (7 < uStack_23f0) {
              ppppWVar17 = local_2408;
            }
            *(undefined8 *)(puVar22 + 0x28) = 0;
            *(undefined1 **)(puVar22 + 0x20) = puVar22 + 0x40;
            *(undefined8 *)(puVar22 + -8) = 0x180095a42;
            iVar2 = WinHttpQueryHeaders(unaff_R12,0x16,0,ppppWVar17);
            if (iVar2 != 0) {
              ppppWVar17 = (LPCWSTR ***)&local_2408;
              if (7 < uStack_23f0) {
                ppppWVar17 = local_2408;
              }
              if (*(uint *)(puVar22 + 0x40) < 2) {
                uStack_23e0 = 0;
                local_23d8 = 0;
                ppppWStack_23d0 = (LPCWSTR ***)0xf;
                local_23e8 = (undefined8 ****)0x0;
              }
              else {
                uVar15 = *(uint *)(puVar22 + 0x40) >> 1;
                *(undefined8 *)(puVar22 + 0x38) = 0;
                *(undefined8 *)(puVar22 + 0x30) = 0;
                *(undefined4 *)(puVar22 + 0x28) = 0;
                *(undefined8 *)(puVar22 + 0x20) = 0;
                *(undefined8 *)(puVar22 + -8) = 0x180095aac;
                iVar2 = WideCharToMultiByte(0xfde9,0,(LPCWSTR)ppppWVar17,uVar15,
                                            *(LPSTR *)(puVar22 + 0x20),*(int *)(puVar22 + 0x28),
                                            *(LPCSTR *)(puVar22 + 0x30),*(LPBOOL *)(puVar22 + 0x38))
                ;
                *(undefined8 *)(puVar22 + -8) = 0x180095ac1;
                FUN_1800969e0(&local_2328,(longlong)iVar2,0);
                ppppuVar18 = &local_2328;
                if ((LPCWSTR ***)0xf < ppppWStack_2310) {
                  ppppuVar18 = local_2328;
                }
                *(undefined8 *)(puVar22 + 0x38) = 0;
                *(undefined8 *)(puVar22 + 0x30) = 0;
                *(int *)(puVar22 + 0x28) = iVar2;
                *(undefined8 *****)(puVar22 + 0x20) = ppppuVar18;
                *(undefined8 *)(puVar22 + -8) = 0x180095aff;
                WideCharToMultiByte(0xfde9,0,(LPCWSTR)ppppWVar17,uVar15,*(LPSTR *)(puVar22 + 0x20),
                                    *(int *)(puVar22 + 0x28),*(LPCSTR *)(puVar22 + 0x30),
                                    *(LPBOOL *)(puVar22 + 0x38));
                local_23e8 = local_2328;
                uStack_23e0 = uStack_2320;
                ppppWStack_23d0 = ppppWStack_2310;
                local_23d8 = local_2318;
              }
              ppppuVar18 = &local_23e8;
              if ((LPCWSTR ***)0xf < ppppWStack_23d0) {
                ppppuVar18 = local_23e8;
              }
              if (local_23d8 < 2) {
LAB_180095b69:
                lVar9 = -1;
              }
              else {
                lVar4 = local_23d8 + (longlong)ppppuVar18;
                *(undefined8 *)(puVar22 + -8) = 0x180095b5c;
                lVar9 = thunk_FUN_1804e92d0(ppppuVar18,lVar4,&DAT_1806e6e50,2);
                if (lVar9 == lVar4) goto LAB_180095b69;
                lVar9 = lVar9 - (longlong)ppppuVar18;
              }
              if (lVar9 != -1) {
                lVar5 = 0x7fffffffffffffff;
                do {
                  uVar8 = lVar9 + 2;
                  ppppuVar18 = &local_23e8;
                  if ((LPCWSTR ***)0xf < ppppWStack_23d0) {
                    ppppuVar18 = local_23e8;
                  }
                  if ((local_23d8 < 2) || (local_23d8 - 2 < uVar8)) {
LAB_180095bdf:
                    lVar9 = -1;
LAB_180095be6:
                    uVar26 = 0xffffffffffffffff;
                  }
                  else {
                    lVar4 = local_23d8 + (longlong)ppppuVar18;
                    *(undefined8 *)(puVar22 + -8) = 0x180095bc6;
                    lVar9 = thunk_FUN_1804e92d0(uVar8 + (longlong)ppppuVar18,lVar4,&DAT_1806e6e50,2)
                    ;
                    if (lVar9 == lVar4) goto LAB_180095bdf;
                    lVar9 = lVar9 - (longlong)ppppuVar18;
                    if (lVar9 == -1) goto LAB_180095be6;
                    uVar26 = lVar9 - uVar8;
                  }
                  local_23c8 = (undefined8 ****)0x0;
                  uStack_23c0 = 0;
                  unaff_R12 = (ulonglong ****)0x0;
                  local_23b8 = 0;
                  local_23b0 = 0;
                  if (local_23d8 < uVar8) {
                    /* WARNING: Subroutine does not return */
                    *(undefined **)(puVar22 + -8) = &UNK_180096353;
                    FUN_18002a1a0();
                  }
                  if (local_23d8 - uVar8 < uVar26) {
                    uVar26 = local_23d8 - uVar8;
                  }
                  ppppuVar18 = &local_23e8;
                  if ((LPCWSTR ***)0xf < ppppWStack_23d0) {
                    ppppuVar18 = local_23e8;
                  }
                  *(undefined8 *)(puVar22 + -8) = 0x180095c30;
                  FUN_1800133a0(&local_23c8,(longlong)ppppuVar18 + uVar8,uVar26);
                  ppppuVar18 = &local_23c8;
                  if (0xf < local_23b0) {
                    ppppuVar18 = local_23c8;
                  }
                  if (local_23b8 == 0) {
LAB_180095c6b:
                    uVar8 = 0xffffffffffffffff;
                  }
                  else {
                    lVar4 = local_23b8 + (longlong)ppppuVar18;
                    *(undefined8 *)(puVar22 + -8) = 0x180095c5a;
                    lVar10 = thunk_FUN_1804e6c50(ppppuVar18,lVar4,0x3a);
                    if (lVar10 == lVar4) goto LAB_180095c6b;
                    uVar8 = lVar10 - (longlong)ppppuVar18;
                  }
                  if (uVar8 != 0xffffffffffffffff) {
                    uVar26 = uVar8 + 1;
                    local_23a8 = (ulonglong ****)0x0;
                    uStack_23a0 = 0;
                    local_2398 = (undefined8 ****)0x0;
                    local_2390 = 0;
                    if (local_23b8 < uVar26) {
                    /* WARNING: Subroutine does not return */
                      *(undefined8 *)(puVar22 + -8) = 0x18009634d;
                      FUN_18002a1a0();
                    }
                    lVar4 = -1;
                    if (local_23b8 - uVar26 != -1) {
                      lVar4 = local_23b8 - uVar26;
                    }
                    ppppuVar18 = &local_23c8;
                    if (0xf < local_23b0) {
                      ppppuVar18 = local_23c8;
                    }
                    *(undefined8 *)(puVar22 + -8) = 0x180095cc3;
                    FUN_1800133a0(&local_23a8,(longlong)ppppuVar18 + uVar26,lVar4);
                    for (; local_2398 != (undefined8 ****)0x0;
                        ppppuVar18 = (undefined8 ****)
                                     ((longlong)local_2398 -
                                     (ulonglong)(local_2398 != (undefined8 ****)0x0))) {
                      ppppuVar11 = (ulonglong ****)&local_23a8;
                      if (0xf < local_2390) {
                        ppppuVar11 = local_23a8;
                      }
                      if (*(char *)ppppuVar11 != ' ') break;
                      ppppuVar11 = (ulonglong ****)&local_23a8;
                      if (0xf < local_2390) {
                        ppppuVar11 = local_23a8;
                      }
                      *(undefined8 *)(puVar22 + -8) = 0x180095d36;
                      FUN_180540530(ppppuVar11,
                                    (char *)((ulonglong)(local_2398 != (undefined8 ****)0x0) +
                                            (longlong)ppppuVar11),(longlong)ppppuVar18 + 1);
                      local_2398 = ppppuVar18;
                    }
                    local_2368 = 0;
                    uStack_2360 = 0;
                    local_2358 = 0;
                    local_2350 = 0;
                    if (local_23b8 < uVar8) {
                      uVar8 = local_23b8;
                    }
                    ppppuVar18 = &local_23c8;
                    if (0xf < local_23b0) {
                      ppppuVar18 = local_23c8;
                    }
                    *(undefined8 *)(puVar22 + -8) = 0x180095d7f;
                    FUN_1800133a0(&local_2368,ppppuVar18,uVar8);
                    ppppuVar18 = local_2398;
                    local_2348 = (ulonglong ***)0x0;
                    pppuStack_2340 = (ulonglong ***)0x0;
                    local_2338 = (undefined8 ****)0x0;
                    local_2330 = 0;
                    unaff_R12 = (ulonglong ****)&local_23a8;
                    if (0xf < local_2390) {
                      unaff_R12 = local_23a8;
                    }
                    if ((undefined8 ****)0x7fffffffffffffff < local_2398) {
                    /* WARNING: Subroutine does not return */
                      *(undefined8 *)(puVar22 + -8) = 0x180096347;
                      FUN_180011990();
                    }
                    if (local_2398 < (undefined8 ****)0x10) {
                      local_2338 = local_2398;
                      uVar8 = 0xf;
                      local_2330 = 0xf;
                      pppuVar12 = *unaff_R12;
                      pppuStack_2340 = unaff_R12[1];
                      local_2348 = pppuVar12;
                    }
                    else {
                      uVar8 = (ulonglong)local_2398 | 0xf;
                      if (uVar8 < 0x8000000000000000) {
                        if (uVar8 < 0x16) {
                          uVar8 = 0x16;
                        }
                      }
                      else {
                        uVar8 = 0x7fffffffffffffff;
                      }
                      *(undefined8 *)(puVar22 + -8) = 0x180095e06;
                      pppuVar12 = (ulonglong ***)FUN_18000fb70(uVar8 + 1);
                      local_2338 = ppppuVar18;
                      *(undefined8 *)(puVar22 + -8) = 0x180095e2d;
                      local_2348 = pppuVar12;
                      local_2330 = uVar8;
                      FUN_180540530(pppuVar12,unaff_R12,(longlong)ppppuVar18 + 1);
                    }
                    puVar7 = *(ulonglong **)(param_2 + 0x60);
                    if (puVar7 == *(ulonglong **)(param_2 + 0x68)) {
                      *(undefined8 *)(puVar22 + -8) = 0x180095ec3;
                      FUN_18006a540(param_2 + 0x58,puVar7,&local_2368);
                    }
                    else {
                      *puVar7 = local_2368;
                      puVar7[1] = uStack_2360;
                      puVar7[2] = local_2358;
                      puVar7[3] = local_2350;
                      local_2358 = 0;
                      local_2350 = 0xf;
                      local_2368 = local_2368 & 0xffffffffffffff00;
                      puVar7[4] = (ulonglong)pppuVar12;
                      puVar7[5] = (ulonglong)pppuStack_2340;
                      puVar7[6] = (ulonglong)ppppuVar18;
                      puVar7[7] = uVar8;
                      local_2338 = (undefined8 ****)0x0;
                      local_2330 = 0xf;
                      local_2348 = (ulonglong ***)((ulonglong)local_2348 & 0xffffffffffffff00);
                      *(longlong *)(param_2 + 0x60) = *(longlong *)(param_2 + 0x60) + 0x40;
                    }
                    *(undefined8 *)(puVar22 + -8) = 0x180095ed0;
                    FUN_18000f890(&local_2348);
                    *(undefined8 *)(puVar22 + -8) = 0x180095edc;
                    FUN_18000f890(&local_2368);
                    if (local_2390 < 0x10) goto LAB_180095f19;
                    uVar8 = local_2390 + 1;
                    ppppuVar11 = local_23a8;
                    if (uVar8 < 0x1000) {
LAB_180095f13:
                      *(undefined8 *)(puVar22 + -8) = 0x180095f18;
                      thunk_FUN_1803d64e0(ppppuVar11,uVar8);
                      goto LAB_180095f19;
                    }
                    ppppuVar11 = (ulonglong ****)local_23a8[-1];
                    if ((char *)((longlong)local_23a8 + (-8 - (longlong)ppppuVar11)) < (char *)0x20)
                    {
                      uVar8 = local_2390 + 0x28;
                      goto LAB_180095f13;
                    }
                    pcVar1 = (code *)swi(0x29);
                    (*pcVar1)(5);
                    puVar22 = puVar22 + 8;
LAB_18009600a:
                    pcVar1 = (code *)swi(0x29);
                    (*pcVar1)(5);
                    puVar22 = puVar22 + 8;
                    goto LAB_180096011;
                  }
LAB_180095f19:
                  if (0xf < local_23b0) {
                    uVar8 = local_23b0 + 1;
                    ppppuVar13 = local_23c8;
                    if (0xfff < uVar8) {
                      ppppuVar13 = (undefined8 ****)local_23c8[-1];
                      if (0x1f < (ulonglong)((longlong)local_23c8 + (-8 - (longlong)ppppuVar13)))
                      goto LAB_18009600a;
                      uVar8 = local_23b0 + 0x28;
                    }
                    *(undefined8 *)(puVar22 + -8) = 0x180095f54;
                    thunk_FUN_1803d64e0(ppppuVar13,uVar8);
                  }
                } while (lVar9 != -1);
                unaff_R12 = *(ulonglong *****)(puVar22 + 0x48);
                lVar5 = *(longlong *)(puVar22 + 0x50);
              }
              if ((LPCWSTR ***)0xf < ppppWStack_23d0) {
                ppppWVar17 = (LPCWSTR ***)((longlong)ppppWStack_23d0 + 1);
                ppppuVar13 = local_23e8;
                if ((LPCWSTR ***)0xfff < ppppWVar17) {
                  ppppuVar13 = (undefined8 ****)local_23e8[-1];
                  if (0x1f < (ulonglong)((longlong)local_23e8 + (-8 - (longlong)ppppuVar13))) {
LAB_180096011:
                    pcVar1 = (code *)swi(0x29);
                    (*pcVar1)(5);
                    puVar22 = puVar22 + 8;
                    goto LAB_180096018;
                  }
                  ppppWVar17 = ppppWStack_23d0 + 5;
                }
                *(undefined8 *)(puVar22 + -8) = 0x180095f9f;
                thunk_FUN_1803d64e0(ppppuVar13,ppppWVar17);
              }
            }
            *(undefined8 *)(puVar22 + -8) = 0x180095faa;
            FUN_1800289e0(&local_2408);
          }
          lVar9 = 0;
          *(undefined4 *)(puVar22 + 0x48) = 0;
          *(undefined8 *)(puVar22 + -8) = 0x180095fbc;
          iVar2 = WinHttpQueryDataAvailable(unaff_R12,puVar22 + 0x48);
          if (iVar2 == 0) {
LAB_1800960d2:
            *(bool *)(param_2 + 0xc) = *(longlong *)(param_2 + 0x48) == 0;
          }
          else {
            do {
              if (*(uint *)(puVar22 + 0x48) == 0) goto LAB_1800960d2;
              ppppuVar18 = *(undefined8 *****)(param_2 + 0x28);
              ppppuVar13 = (undefined8 ****)
                           ((ulonglong)*(uint *)(puVar22 + 0x48) + (longlong)ppppuVar18);
              if ((undefined8 ****)0x800000 < ppppuVar13) {
                *(undefined8 *)(puVar22 + -8) = 0x1800960d2;
                FUN_180029840(param_2 + 0x38,"the answer is over 8 MB",0x17);
                goto LAB_1800960d2;
              }
              lVar4 = param_2 + 0x18;
              if (ppppuVar18 < ppppuVar13) {
LAB_180096018:
                *(undefined8 *)(puVar22 + -8) = 0x180096020;
                FUN_180028a50();
              }
              else {
                *(undefined8 *****)(param_2 + 0x28) = ppppuVar13;
                if (0xf < *(ulonglong *)(param_2 + 0x30)) {
                  lVar4 = *(longlong *)(param_2 + 0x18);
                }
                *(undefined1 *)(lVar4 + (longlong)ppppuVar13) = 0;
              }
              *(int *)(puVar22 + 0x50) = (int)lVar9;
              lVar4 = param_2 + 0x18;
              if (0xf < *(ulonglong *)(param_2 + 0x30)) {
                lVar4 = *(longlong *)(param_2 + 0x18);
              }
              *(undefined8 *)(puVar22 + -8) = 0x18009604a;
              iVar2 = WinHttpReadData(unaff_R12,lVar4 + (longlong)ppppuVar18,
                                      *(undefined4 *)(puVar22 + 0x48),puVar22 + 0x50);
              if (iVar2 == 0) goto LAB_1800960d2;
              uVar26 = (ulonglong)*(uint *)(puVar22 + 0x50) + (longlong)ppppuVar18;
              uVar8 = *(ulonglong *)(param_2 + 0x28);
              if (uVar8 < uVar26) {
                *(undefined8 *)(puVar22 + -8) = 0x18009608a;
                FUN_180028a50(param_2 + 0x18,uVar26 - uVar8,0);
              }
              else {
                *(ulonglong *)(param_2 + 0x28) = uVar26;
                lVar4 = param_2 + 0x18;
                if (0xf < *(ulonglong *)(param_2 + 0x30)) {
                  lVar4 = *(longlong *)(param_2 + 0x18);
                }
                *(undefined1 *)(lVar4 + uVar26) = 0;
              }
              if (*(int *)(puVar22 + 0x50) == 0) goto LAB_1800960d2;
              *(int *)(puVar22 + 0x48) = (int)lVar9;
              *(undefined8 *)(puVar22 + -8) = 0x1800960a3;
              iVar2 = WinHttpQueryDataAvailable(unaff_R12,puVar22 + 0x48);
            } while (iVar2 != 0);
            *(bool *)(param_2 + 0xc) = *(longlong *)(param_2 + 0x48) == 0;
          }
        }
        *(undefined8 *)(puVar22 + -8) = 0x1800962af;
        WinHttpCloseHandle(unaff_R12);
        *(undefined8 *)(puVar22 + -8) = 0x1800962b9;
        FUN_1800289e0(&local_2388);
        lVar4 = *(longlong *)(puVar22 + 0x68);
LAB_1800962db:
        *(undefined8 *)(puVar22 + -8) = 0x1800962e4;
        WinHttpCloseHandle(lVar5);
        puVar23 = puVar22;
      }
      *(undefined8 *)(puVar23 + -8) = 0x1800962ed;
      WinHttpCloseHandle(lVar4);
      goto LAB_180096306;
    }
    uVar25 = 0x15;
    pcVar16 = "cannot open a session";
  }
  uStackY_24f0 = 0x180096305;
  FUN_180029840(param_2 + 0x38,pcVar16,uVar25);
  puVar23 = auStackY_24e8;
LAB_180096306:
  *(undefined8 *)(puVar23 + -8) = 0x180096312;
  FUN_1800289e0(&local_22e8);
  *(undefined8 *)(puVar23 + -8) = 0x180096321;
  return;
}



/* ===== 180096360 FUN_180096360 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180096360(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_148 [8];
  undefined1 auStack_140 [24];
  undefined8 local_128;
  undefined4 local_120;
  undefined1 local_11c;
  undefined4 local_118;
  ulonglong local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 *local_b8;
  undefined *local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_9c;
  undefined4 local_98;
  ulonglong local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  ulonglong local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  ulonglong local_50;
  ulonglong local_48;
  longlong lStack_40;
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStack_148;
  local_9c = 0;
  local_98 = 0;
  uStack_88 = 0;
  local_80 = 0;
  local_78 = 0xf;
  local_90 = 0;
  uStack_68 = 0;
  local_60 = 0;
  local_58 = 0xf;
  local_70 = 0;
  local_50 = 0;
  local_48 = 0;
  lStack_40 = 0;
  local_a8 = *param_1;
  local_a0 = *(undefined4 *)(param_1 + 1);
  FUN_180095270(0,&local_a8);
  FUN_180066ff0(param_1 + 0xe);
  FUN_18000f890(param_1 + 10);
  FUN_18000f890(param_1 + 6);
  FUN_18000f890(param_1 + 2);
  thunk_FUN_1803d64e0(param_1,0x90);
  local_c0 = lStack_40;
  local_c8 = local_48;
  local_d0 = local_50;
  local_128 = local_a8;
  local_120 = local_a0;
  local_11c = local_9c;
  local_118 = local_98;
  local_110 = local_90;
  uStack_108 = uStack_88;
  local_100 = local_80;
  uStack_f8 = local_78;
  local_80 = 0;
  local_78 = 0xf;
  local_90 = local_90 & 0xffffffffffffff00;
  local_f0 = local_70;
  uStack_e8 = uStack_68;
  local_e0 = local_60;
  uStack_d8 = local_58;
  local_60 = 0;
  local_58 = 0xf;
  local_70 = local_70 & 0xffffffffffffff00;
  lStack_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_b8 = &local_128;
  local_b0 = &DAT_1809e8e00;
  iVar6 = FUN_1804e4d70(&DAT_1809e8e00);
  uVar5 = local_c0;
  uVar4 = local_c8;
  uVar3 = local_d0;
  puVar2 = DAT_180cd0260;
  if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809e8e4c == 0x7fffffff) {
    DAT_1809e8e4c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  if (DAT_180cd0260 == DAT_180cd0268) {
    FUN_180096c90(extraout_XMM0_Da,DAT_180cd0260,&local_128);
  }
  else {
    *DAT_180cd0260 = local_128;
    *(undefined4 *)(puVar2 + 1) = local_120;
    *(undefined1 *)((longlong)puVar2 + 0xc) = local_11c;
    *(undefined4 *)(puVar2 + 2) = local_118;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[3] = local_110;
    puVar2[4] = uStack_108;
    puVar2[5] = local_100;
    puVar2[6] = uStack_f8;
    local_100 = 0;
    uStack_f8 = 0xf;
    local_110 = local_110 & 0xffffffffffffff00;
    puVar2[7] = 0;
    puVar2[8] = 0;
    puVar2[9] = 0;
    puVar2[10] = 0;
    *(undefined4 *)(puVar2 + 7) = (undefined4)local_f0;
    *(undefined4 *)((longlong)puVar2 + 0x3c) = local_f0._4_4_;
    *(undefined4 *)(puVar2 + 8) = (undefined4)uStack_e8;
    *(undefined4 *)((longlong)puVar2 + 0x44) = uStack_e8._4_4_;
    puVar2[9] = local_e0;
    puVar2[10] = uStack_d8;
    local_e0 = 0;
    uStack_d8 = 0xf;
    local_f0 = local_f0 & 0xffffffffffffff00;
    local_c0 = 0;
    local_c8 = 0;
    local_d0 = 0;
    puVar2[0xb] = uVar3;
    puVar2[0xc] = uVar4;
    puVar2[0xd] = uVar5;
    DAT_180cd0260 = DAT_180cd0260 + 0xe;
  }
  FUN_1804e4e90(&DAT_1809e8e00);
  FUN_180066ff0(&local_d0);
  FUN_18000f890(&local_f0);
  FUN_18000f890(&local_110);
  uVar8 = local_48;
  puVar9 = auStack_148;
  puVar10 = auStack_148;
  LOCK();
  DAT_180cd0250 = DAT_180cd0250 + -1;
  UNLOCK();
  puVar11 = auStack_148;
  uVar7 = local_50;
  if (local_50 == 0) goto LAB_180096679;
  for (; uVar7 != uVar8; uVar7 = uVar7 + 0x40) {
    FUN_18000f890(uVar7 + 0x20);
    FUN_18000f890(uVar7);
  }
  uVar7 = local_50;
  if ((lStack_40 - local_50 & 0xffffffffffffffc0) < 0x1000) {
LAB_180096665:
    puVar10 = puVar9;
  }
  else {
    uVar7 = *(ulonglong *)(local_50 - 8);
    uVar8 = (local_50 - uVar7) - 8;
    if (0x1f < uVar8) {
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(5);
      puVar9 = auStack_140;
      uVar7 = uVar8;
      goto LAB_180096665;
    }
  }
  *(undefined8 *)(puVar10 + -8) = 0x18009666d;
  thunk_FUN_1803d64e0(uVar7);
  local_50 = 0;
  local_48 = 0;
  lStack_40 = 0;
  puVar11 = puVar10;
LAB_180096679:
  *(undefined8 *)(puVar11 + -8) = 0x180096682;
  FUN_18000f890(&local_70);
  *(undefined8 *)(puVar11 + -8) = 0x18009668b;
  FUN_18000f890(&local_90);
  *(undefined8 *)(puVar11 + -8) = 0x180096699;
  return 0;
}



/* ===== 1800966d0 FUN_1800966d0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1800966d0(longlong param_1)

{
  undefined8 uVar1;
  LPVOID lpParameter;
  HANDLE hObject;
  
  if (DAT_180cd0250 < 8) {
    uVar1 = FUN_1804ecaa0(0x90);
    lpParameter = (LPVOID)FUN_180063850(uVar1,param_1);
    LOCK();
    DAT_180cd0250 = DAT_180cd0250 + 1;
    UNLOCK();
    hObject = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_180096360,lpParameter,0,(LPDWORD)0x0);
    if (hObject != (HANDLE)0x0) {
      CloseHandle(hObject);
      FUN_180066ff0(param_1 + 0x70);
      FUN_18000f890(param_1 + 0x50);
      FUN_18000f890(param_1 + 0x30);
      FUN_18000f890(param_1 + 0x10);
      return 1;
    }
    LOCK();
    DAT_180cd0250 = DAT_180cd0250 + -1;
    UNLOCK();
    if (lpParameter != (LPVOID)0x0) {
      FUN_180066ff0((longlong)lpParameter + 0x70);
      FUN_18000f890((longlong)lpParameter + 0x50);
      FUN_18000f890((longlong)lpParameter + 0x30);
      FUN_18000f890((longlong)lpParameter + 0x10);
      thunk_FUN_1803d64e0(lpParameter,0x90);
    }
  }
  FUN_180066ff0(param_1 + 0x70);
  FUN_18000f890(param_1 + 0x50);
  FUN_18000f890(param_1 + 0x30);
  FUN_18000f890(param_1 + 0x10);
  return 0;
}



/* ===== 180096800 FUN_180096800 ===== */

undefined8 * FUN_180096800(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  
  iVar3 = FUN_1804e4d70(&DAT_1809e8e00);
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809e8e4c == 0x7fffffff) {
    DAT_1809e8e4c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_1 != &DAT_180cd0258) {
    *param_1 = DAT_180cd0258;
    DAT_180cd0258 = 0;
    uVar1 = param_1[1];
    param_1[1] = DAT_180cd0260;
    uVar2 = param_1[2];
    DAT_180cd0260 = uVar1;
    param_1[2] = DAT_180cd0268;
    DAT_180cd0268 = uVar2;
  }
  FUN_1804e4e90(&DAT_1809e8e00);
  return param_1;
}



/* ===== 1800968c0 FUN_1800968c0 ===== */

longlong * FUN_1800968c0(longlong *param_1,ulonglong param_2,undefined2 param_3)

{
  ulonglong uVar1;
  undefined2 *puVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined2 *puVar5;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if (0x7ffffffffffffffe < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_180011990();
  }
  if (param_2 < 8) {
    param_1[2] = param_2;
    param_1[3] = 7;
    if (param_2 != 0) {
      plVar4 = param_1;
      for (uVar1 = (param_2 * 2) / 2; uVar1 != 0; uVar1 = uVar1 - 1) {
        *(undefined2 *)plVar4 = param_3;
        plVar4 = (longlong *)((longlong)plVar4 + 2);
      }
    }
    *(undefined2 *)(param_2 * 2 + (longlong)param_1) = 0;
    return param_1;
  }
  uVar1 = param_2 | 7;
  if (uVar1 < 0x7fffffffffffffff) {
    if (uVar1 < 10) {
      uVar1 = 10;
    }
    if (0x7fffffffffffffff < uVar1 + 1) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
    lVar3 = uVar1 * 2 + 2;
  }
  else {
    lVar3 = -2;
    uVar1 = 0x7ffffffffffffffe;
  }
  puVar2 = (undefined2 *)FUN_18000fb70(lVar3);
  *param_1 = (longlong)puVar2;
  param_1[2] = param_2;
  param_1[3] = uVar1;
  puVar5 = puVar2;
  for (uVar1 = param_2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar5 = param_3;
    puVar5 = puVar5 + 1;
  }
  puVar2[param_2] = 0;
  return param_1;
}



/* ===== 1800969e0 FUN_1800969e0 ===== */

longlong * FUN_1800969e0(longlong *param_1,ulonglong param_2,char param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if (0x7fffffffffffffff < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_180011990();
  }
  if (param_2 < 0x10) {
    param_1[2] = param_2;
    param_1[3] = 0xf;
    FUN_180540170(0,(int)param_3,param_2);
    *(undefined1 *)(param_2 + (longlong)param_1) = 0;
    return param_1;
  }
  uVar1 = param_2 | 0xf;
  uVar3 = 0x7fffffffffffffff;
  if ((uVar1 < 0x8000000000000000) && (uVar3 = uVar1, uVar1 < 0x16)) {
    uVar3 = 0x16;
  }
  lVar2 = FUN_18000fb70(uVar3 + 1);
  *param_1 = lVar2;
  param_1[2] = param_2;
  param_1[3] = uVar3;
  FUN_180540170(lVar2,(int)param_3,param_2);
  *(undefined1 *)(lVar2 + param_2) = 0;
  return param_1;
}



/* ===== 180096ab0 FUN_180096ab0 ===== */

longlong *
FUN_180096ab0(longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar2 = param_3[2];
  uVar3 = param_4[2];
  uVar1 = uVar2 + uVar3;
  if ((param_3[3] - uVar2 < uVar3) || ((ulonglong)param_3[3] < (ulonglong)param_4[3])) {
    if (param_4[3] - uVar3 < uVar2) {
      if (0x7ffffffffffffffe - uVar2 < uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_180011990();
      }
      uVar8 = uVar1 | 7;
      uVar10 = 0x7ffffffffffffffe;
      if (uVar8 < 0x7fffffffffffffff) {
        if (uVar8 < 10) {
          uVar8 = 10;
        }
        uVar10 = uVar8;
        if (0x7fffffffffffffff < uVar8 + 1) {
                    /* WARNING: Subroutine does not return */
          FUN_18000d840();
        }
      }
      lVar9 = FUN_18000fb70(uVar10 * 2 + 2);
      *param_1 = lVar9;
      param_1[2] = uVar1;
      param_1[3] = uVar10;
      if (7 < (ulonglong)param_3[3]) {
        param_3 = (undefined8 *)*param_3;
      }
      FUN_180540530(lVar9,param_3,uVar2 * 2);
      if (7 < (ulonglong)param_4[3]) {
        param_4 = (undefined8 *)*param_4;
      }
      FUN_180540530(uVar2 * 2 + lVar9,param_4,uVar3 * 2 + 2);
    }
    else {
      uVar4 = *(undefined4 *)((longlong)param_4 + 4);
      uVar5 = *(undefined4 *)(param_4 + 1);
      uVar6 = *(undefined4 *)((longlong)param_4 + 0xc);
      *(undefined4 *)param_1 = *(undefined4 *)param_4;
      *(undefined4 *)((longlong)param_1 + 4) = uVar4;
      *(undefined4 *)(param_1 + 1) = uVar5;
      *(undefined4 *)((longlong)param_1 + 0xc) = uVar6;
      uVar4 = *(undefined4 *)((longlong)param_4 + 0x14);
      uVar5 = *(undefined4 *)(param_4 + 3);
      uVar6 = *(undefined4 *)((longlong)param_4 + 0x1c);
      *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_4 + 2);
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar4;
      *(undefined4 *)(param_1 + 3) = uVar5;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar6;
      *(undefined2 *)param_4 = 0;
      param_4[2] = 0;
      param_4[3] = 7;
      lVar9 = *param_1;
      FUN_180540530(uVar2 * 2 + lVar9,lVar9,uVar3 * 2 + 2);
      if (7 < (ulonglong)param_3[3]) {
        param_3 = (undefined8 *)*param_3;
      }
      FUN_180540530(lVar9,param_3,uVar2 * 2);
      param_1[2] = uVar1;
    }
  }
  else {
    uVar4 = *(undefined4 *)((longlong)param_3 + 4);
    uVar5 = *(undefined4 *)(param_3 + 1);
    uVar6 = *(undefined4 *)((longlong)param_3 + 0xc);
    *(undefined4 *)param_1 = *(undefined4 *)param_3;
    *(undefined4 *)((longlong)param_1 + 4) = uVar4;
    *(undefined4 *)(param_1 + 1) = uVar5;
    *(undefined4 *)((longlong)param_1 + 0xc) = uVar6;
    uVar4 = *(undefined4 *)((longlong)param_3 + 0x14);
    uVar5 = *(undefined4 *)(param_3 + 3);
    uVar6 = *(undefined4 *)((longlong)param_3 + 0x1c);
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 2);
    *(undefined4 *)((longlong)param_1 + 0x14) = uVar4;
    *(undefined4 *)(param_1 + 3) = uVar5;
    *(undefined4 *)((longlong)param_1 + 0x1c) = uVar6;
    *(undefined2 *)param_3 = 0;
    param_3[2] = 0;
    param_3[3] = 7;
    if ((ulonglong)param_1[3] < 8) {
      plVar7 = param_1;
    }
    else {
      plVar7 = (longlong *)*param_1;
    }
    if (7 < (ulonglong)param_4[3]) {
      param_4 = (undefined8 *)*param_4;
    }
    FUN_180540530((longlong)plVar7 + uVar2 * 2,param_4,uVar3 * 2 + 2);
    param_1[2] = uVar1;
  }
  return param_1;
}



/* ===== 180096c90 FUN_180096c90 ===== */

longlong FUN_180096c90(undefined8 param_1,longlong param_2,undefined8 param_3)

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
  longlong lVar12;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  lVar7 = DAT_180cd0258;
  uVar8 = 0x249249249249249;
  lVar4 = (DAT_180cd0260 - DAT_180cd0258 >> 4) * 0x6db6db6db6db6db7;
  if (lVar4 == 0x249249249249249) {
                    /* WARNING: Subroutine does not return */
    FUN_1800118d0();
  }
  uVar1 = lVar4 + 1;
  uVar6 = (DAT_180cd0268 - DAT_180cd0258 >> 4) * 0x6db6db6db6db6db7;
  if (uVar6 <= 0x249249249249249 - (uVar6 >> 1)) {
    uVar6 = (uVar6 >> 1) + uVar6;
    uVar8 = uVar1;
    if (uVar1 <= uVar6) {
      uVar8 = uVar6;
    }
    if (0x249249249249249 < uVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  lVar5 = FUN_18000fb70(uVar8 * 0x70);
  lVar12 = ((param_2 - lVar7) / 0x70) * 0x70 + lVar5;
  FUN_180096ee0(lVar12,param_3);
  lVar3 = DAT_180cd0260;
  puVar9 = auStack_48;
  puVar10 = auStack_48;
  lVar7 = lVar5;
  lVar4 = DAT_180cd0258;
  if (param_2 == DAT_180cd0260) {
    for (; lVar4 != lVar3; lVar4 = lVar4 + 0x70) {
      FUN_180096ee0(lVar7,lVar4);
      lVar7 = lVar7 + 0x70;
    }
  }
  else {
    while( true ) {
      lVar11 = lVar12;
      DAT_180cd0260 = lVar3;
      if (lVar4 == param_2) break;
      FUN_180096ee0(lVar7,lVar4);
      lVar7 = lVar7 + 0x70;
      lVar4 = lVar4 + 0x70;
      lVar3 = DAT_180cd0260;
    }
    for (; param_2 != lVar3; param_2 = param_2 + 0x70) {
      lVar11 = lVar11 + 0x70;
      FUN_180096ee0(lVar11,param_2);
    }
  }
  lVar4 = DAT_180cd0260;
  lVar7 = DAT_180cd0258;
  if (DAT_180cd0258 == 0) goto LAB_180096e83;
  for (; lVar7 != lVar4; lVar7 = lVar7 + 0x70) {
    FUN_180066ff0(lVar7 + 0x58);
    FUN_18000f890(lVar7 + 0x38);
    FUN_18000f890(lVar7 + 0x18);
  }
  lVar7 = DAT_180cd0258;
  if ((ulonglong)((DAT_180cd0268 - DAT_180cd0258 >> 4) * 0x10) < 0x1000) {
LAB_180096e78:
    puVar10 = puVar9;
  }
  else {
    lVar7 = *(longlong *)(DAT_180cd0258 + -8);
    if (0x1f < (DAT_180cd0258 - lVar7) - 8U) {
      lVar7 = 5;
      pcVar2 = (code *)swi(0x29);
      (*pcVar2)(5);
      puVar9 = auStack_40;
      goto LAB_180096e78;
    }
  }
  *(undefined8 *)(puVar10 + -8) = 0x180096e83;
  thunk_FUN_1803d64e0(lVar7);
LAB_180096e83:
  DAT_180cd0260 = uVar1 * 0x70 + lVar5;
  DAT_180cd0258 = lVar5;
  DAT_180cd0268 = uVar8 * 0x70 + lVar5;
  return lVar12;
}



/* ===== 180096ee0 FUN_180096ee0 ===== */

undefined8 * FUN_180096ee0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined1 *)((longlong)param_1 + 0xc) = *(undefined1 *)((longlong)param_2 + 0xc);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  uVar1 = param_2[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar1;
  uVar1 = param_2[6];
  param_1[5] = param_2[5];
  param_1[6] = uVar1;
  *(undefined1 *)(param_2 + 3) = 0;
  param_2[5] = 0;
  param_2[6] = 0xf;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  uVar1 = param_2[8];
  param_1[7] = param_2[7];
  param_1[8] = uVar1;
  uVar1 = param_2[10];
  param_1[9] = param_2[9];
  param_1[10] = uVar1;
  *(undefined1 *)(param_2 + 7) = 0;
  param_2[9] = 0;
  param_2[10] = 0xf;
  uVar1 = param_2[0xb];
  uVar2 = param_2[0xd];
  uVar3 = param_2[0xc];
  param_2[0xd] = 0;
  param_2[0xc] = 0;
  param_2[0xb] = 0;
  param_1[0xb] = uVar1;
  param_1[0xc] = uVar3;
  param_1[0xd] = uVar2;
  return param_1;
}



/* ===== 180096f90 _vsscanf_s_l ===== */

void _vsscanf_s_l(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  
                    /* 0x96f90  105  _vsscanf_s_l */
  puVar1 = (ulonglong *)FUN_180013650();
  FUN_18050fa44(*puVar1 | 1,param_1,0xffffffffffffffff,param_2,param_3,param_4);
  return;
}



/* ===== 180096fe0 vsscanf_s ===== */

void vsscanf_s(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  
                    /* 0x96fe0  165  vsscanf_s */
  puVar1 = (ulonglong *)FUN_180013650();
  FUN_18050fa44(*puVar1 | 1,param_1,0xffffffffffffffff,param_2,0,param_3);
  return;
}



