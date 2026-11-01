/* ===== 180261370 FUN_180261370 ===== */

int FUN_180261370(float param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  
  if (NAN(param_1)) {
    return -0x80000000;
  }
  if (param_1 <= DAT_1808acc90) {
    if (param_1 <= DAT_1808ace94) {
      param_1 = DAT_1808ace94;
    }
    if (param_1 < 0.0) {
      iVar1 = (int)(param_1 + DAT_1808acc90);
      if (iVar1 < 0) {
        iVar1 = iVar1 + 0x3ff;
      }
      iVar1 = iVar1 >> 10;
      goto LAB_1802613a9;
    }
  }
  else {
    param_1 = DAT_1808acc90;
  }
  iVar1 = (int)param_1;
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0x3ff;
  }
  iVar1 = (iVar1 >> 10) + 0x10;
LAB_1802613a9:
  if (iVar1 < 0x20) {
    iVar2 = 0;
    if (0 < iVar1) {
      iVar2 = iVar1;
    }
    iVar1 = iVar2 * 0x400 + -0x4000;
  }
  else {
    iVar1 = 0x3c00;
  }
  param_1 = param_1 - (float)iVar1;
  fVar3 = DAT_1808acc40;
  if ((param_1 <= DAT_1808acc40) && (fVar3 = param_1, param_1 <= 0.0)) {
    fVar3 = 0.0;
  }
  return (int)((double)fVar3 * DAT_1808ac660 + DAT_1808ac4a8) + iVar1 * 0x20;
}



/* ===== 180261430 FUN_180261430 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_180261430(float param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = DAT_1808acb58;
  if ((float)((uint)param_1 & _DAT_1808ade90) < DAT_1808abf88) {
    return 0.0;
  }
  if (DAT_1808acb58 < (float)((uint)param_1 & _DAT_1808ade90)) {
    fVar2 = (float)FUN_18053f0d0(param_1 * DAT_1808abfd0 + DAT_1808ac1f4);
    param_1 = param_1 - fVar2 * DAT_1808acbd0;
    if (param_1 <= fVar1) {
      if (param_1 <= DAT_1808ace7c) {
        param_1 = DAT_1808ace7c;
      }
    }
    else {
      param_1 = fVar1;
    }
  }
  return (float)((double)((uint)(longlong)
                                ((double)(param_1 + fVar1) * _DAT_1808ac778 + DAT_1808ac4a8) &
                         0xfffff) * _DAT_1808ac268) - fVar1;
}



/* ===== 180261500 FUN_180261500 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_180261500(ulonglong param_1,char param_2,int *param_3,undefined8 *param_4)

{
  undefined1 *puVar1;
  size_t _Size;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  int *piVar5;
  ulonglong uVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  undefined4 extraout_var;
  uint uVar15;
  int *_Buf1;
  undefined8 *puVar16;
  longlong *plVar17;
  int *piVar18;
  uint uVar19;
  int *piVar20;
  uint uVar21;
  longlong lVar22;
  ulonglong uVar23;
  bool bVar24;
  undefined4 uVar25;
  float fVar26;
  undefined4 uVar27;
  float fVar28;
  undefined4 uVar29;
  float fVar30;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  undefined1 auStack_f8 [32];
  uint local_d8;
  uint local_d4;
  ulonglong local_d0;
  undefined1 local_c8 [32];
  ulonglong local_a8;
  
  local_a8 = DAT_180919500 ^ (ulonglong)auStack_f8;
  local_d0 = param_1;
  lVar10 = FUN_1803a0710(&local_d0);
  if (((((lVar10 != 0) && (uVar11 = FUN_180261240(lVar10,"C_Hostage"), (char)uVar11 != '\0')) ||
       ((cVar7 = FUN_1802612b0(param_1,"C_Breakable"), cVar7 == '\0' &&
        ((cVar7 = FUN_1802612b0(param_1,"C_DynamicProp"), cVar7 == '\0' &&
         (uVar11 = FUN_1802612b0(param_1,"C_PhysicsProp"), (char)uVar11 == '\0')))))) ||
      (uVar11 = (ulonglong)DAT_180cf9ef0, DAT_180cf9ef0 == 0)) ||
     ((((DAT_180cf9f00 == 0 || (DAT_180cf9f04 == 0)) || (DAT_180cf9ef4 == 0)) ||
      (DAT_180cf9ef8 == 0)))) goto LAB_180261a8c;
  lVar10 = FUN_18000f3a0(param_1 + uVar11);
  uVar11 = 0;
  if (lVar10 == 0) goto LAB_180261a8c;
  lVar12 = FUN_180047bf0(lVar10);
  uVar11 = 0;
  if ((lVar12 == 0) ||
     ((((param_2 != '\0' && (DAT_180cf9efc != 0)) &&
       (uVar11 = FUN_18000f3a0((ulonglong)DAT_180cf9efc + lVar10), uVar11 != 0)) ||
      (uVar11 = FUN_18000f3a0((ulonglong)DAT_180cf9f00 + (ulonglong)DAT_180cf9f04 + lVar12),
      0x7ffffffefffe < uVar11 - 0x10000)))) goto LAB_180261a8c;
  uVar13 = FUN_1802608e0(local_c8,uVar11);
  FUN_18002ba60(param_4,uVar13);
  FUN_18000f890(local_c8);
  uVar11 = param_4[2];
  if ((ulonglong)param_4[3] < 0x10) {
    puVar16 = param_4;
  }
  else {
    puVar16 = (undefined8 *)*param_4;
  }
  lVar12 = 0;
  uVar19 = (uint)uVar11 ^ 0x31415926;
  uVar14 = uVar11;
  while (3 < uVar14) {
    puVar1 = (undefined1 *)((longlong)puVar16 + lVar12);
    lVar22 = lVar12 + 1;
    lVar3 = lVar12 + 2;
    lVar4 = lVar12 + 3;
    lVar12 = lVar12 + 4;
    uVar15 = CONCAT13(*(undefined1 *)((longlong)puVar16 + lVar4),
                      CONCAT12(*(undefined1 *)((longlong)puVar16 + lVar3),
                               CONCAT11(*(undefined1 *)((longlong)puVar16 + lVar22),*puVar1))) *
             0x5bd1e995;
    uVar19 = uVar19 * 0x5bd1e995 ^ (uVar15 >> 0x18 ^ uVar15) * 0x5bd1e995;
    uVar14 = uVar11 - lVar12;
  }
  lVar22 = uVar11 - lVar12;
  if (lVar22 == 1) {
LAB_18026174c:
    uVar19 = (*(byte *)(lVar12 + (longlong)puVar16) ^ uVar19) * 0x5bd1e995;
  }
  else {
    if (lVar22 == 2) {
LAB_180261741:
      uVar19 = uVar19 ^ (uint)*(byte *)(lVar12 + 1 + (longlong)puVar16) << 8;
      goto LAB_18026174c;
    }
    if (lVar22 == 3) {
      uVar19 = uVar19 ^ (uint)*(byte *)(lVar12 + 2 + (longlong)puVar16) << 0x10;
      goto LAB_180261741;
    }
  }
  if (((DAT_180cf9ee4 == 0) || (lVar12 = FUN_18000f3a0(param_1 + DAT_180cf9ee4), lVar12 == 0)) ||
     (DAT_180cf9eec == 0)) {
    iVar8 = 0;
  }
  else {
    iVar8 = FUN_180011200((ulonglong)DAT_180cf9eec + lVar12);
  }
  lVar12 = (ulonglong)DAT_180cf9ef4 + lVar10;
  uVar25 = FUN_18000f3d0(lVar12);
  lVar10 = (ulonglong)DAT_180cf9ef8 + lVar10;
  fVar26 = (float)FUN_18000f3d0(lVar10);
  uVar27 = FUN_18000f3d0(lVar12 + 4);
  fVar28 = (float)FUN_18000f3d0(lVar10 + 4);
  uVar29 = FUN_18000f3d0(lVar12 + 8);
  fVar30 = (float)FUN_18000f3d0(lVar10 + 8);
  local_d8 = FUN_180261370(uVar25);
  uVar14 = (ulonglong)local_d8;
  local_d4 = FUN_180261370(uVar27);
  uVar23 = (ulonglong)local_d4;
  uVar11 = FUN_180261370(uVar29);
  piVar5 = DAT_180cf9f28;
  local_d0 = CONCAT44(local_d0._4_4_,(int)uVar11);
  if (DAT_180cf9f20 != DAT_180cf9f28) {
    piVar20 = (int *)0x0;
    uVar19 = uVar19 >> 0xd ^ uVar19;
    uVar15 = uVar19 * 0x5bd1e995;
    uVar6 = (ulonglong)uVar19;
    piVar18 = DAT_180cf9f20;
    uVar2 = uVar11;
    do {
      uVar11 = uVar6;
      if ((*piVar18 == iVar8) && (piVar18[10] == (uVar15 >> 0xf ^ uVar15))) {
        _Buf1 = piVar18 + 2;
        if ((ulonglong)param_4[3] < 0x10) {
          puVar16 = param_4;
        }
        else {
          puVar16 = (undefined8 *)*param_4;
        }
        _Size = *(size_t *)(piVar18 + 6);
        if (0xf < *(ulonglong *)(piVar18 + 8)) {
          _Buf1 = *(int **)_Buf1;
        }
        if (_Size == param_4[2]) {
          uVar19 = (uint)uVar14;
          uVar21 = (uint)uVar23;
          iVar9 = (int)uVar2;
          if (_Size != 0) {
            iVar9 = memcmp(_Buf1,puVar16,_Size);
            uVar11 = CONCAT44(extraout_var,iVar9);
            if (iVar9 != 0) goto LAB_1802619cb;
            uVar19 = local_d8;
            uVar21 = local_d4;
            iVar9 = (int)local_d0;
          }
          if (param_2 == '\0') {
            if (piVar20 != (int *)0x0) {
              uVar11 = (ulonglong)(uint)piVar18[0x15];
              if (piVar20[0x15] != piVar18[0x15]) goto LAB_180261a8c;
              uVar11 = 0;
              if (((char)piVar20[0x12] == '\0') || ((char)piVar18[0x12] == '\0')) {
                bVar24 = (char)piVar20[0x12] == (char)piVar18[0x12];
              }
              else {
                uVar11 = (ulonglong)(uint)piVar18[0x11];
                bVar24 = piVar20[0x11] == piVar18[0x11];
              }
              uVar11 = CONCAT71((int7)(uVar11 >> 8),!bVar24);
              if ((((!bVar24) ||
                   (uVar11 = (ulonglong)(uint)piVar18[0x13], piVar20[0x13] != piVar18[0x13])) ||
                  (uVar11 = 0, (char)piVar20[0x14] != (char)piVar18[0x14])) ||
                 ((uVar11 = (ulonglong)(uint)piVar18[0x16], piVar20[0x16] != piVar18[0x16] ||
                  (uVar11 = (ulonglong)(uint)piVar18[0x17], piVar20[0x17] != piVar18[0x17]))))
              goto LAB_180261a8c;
              uVar11 = (ulonglong)(uint)piVar18[0x18];
              bVar24 = piVar20[0x18] == piVar18[0x18];
LAB_1802619c2:
              if (!bVar24) goto LAB_180261a8c;
            }
            piVar20 = piVar18;
          }
          else if (((((*(char *)((longlong)piVar18 + 0x51) == '\0') &&
                     (uVar11 = FUN_180261370(piVar18[0xb]), (uint)uVar11 == uVar19)) &&
                    (uVar11 = FUN_180261370(piVar18[0xc]), (uint)uVar11 == uVar21)) &&
                   (uVar11 = FUN_180261370(piVar18[0xd]), (int)uVar11 == iVar9)) &&
                  ((((fVar26 == (float)piVar18[0xe] && (fVar28 == (float)piVar18[0xf])) &&
                    (fVar30 == (float)piVar18[0x10])) ||
                   (((uVar11 = FUN_180261430(), extraout_XMM0_Da == fVar26 &&
                     (uVar11 = FUN_180261430(piVar18[0xf]), extraout_XMM0_Da_00 == fVar28)) &&
                    (uVar11 = FUN_180261430(piVar18[0x10]), extraout_XMM0_Da_01 == fVar30)))))) {
            bVar24 = piVar20 == (int *)0x0;
            goto LAB_1802619c2;
          }
        }
      }
LAB_1802619cb:
      uVar14 = (ulonglong)local_d8;
      piVar18 = piVar18 + 0x1a;
      uVar23 = (ulonglong)local_d4;
      uVar6 = uVar11;
      uVar2 = local_d0;
    } while (piVar18 != piVar5);
    if (piVar20 != (int *)0x0) {
      *param_3 = *piVar20;
      if (param_3 != piVar20) {
        plVar17 = (longlong *)(piVar20 + 2);
        if (0xf < *(ulonglong *)(piVar20 + 8)) {
          plVar17 = (longlong *)*plVar17;
        }
        FUN_180029840(param_3 + 2,plVar17,*(undefined8 *)(piVar20 + 6));
      }
      param_3[10] = piVar20[10];
      param_3[0xb] = piVar20[0xb];
      param_3[0xc] = piVar20[0xc];
      param_3[0xd] = piVar20[0xd];
      param_3[0xe] = piVar20[0xe];
      param_3[0xf] = piVar20[0xf];
      param_3[0x10] = piVar20[0x10];
      param_3[0x11] = piVar20[0x11];
      *(char *)(param_3 + 0x12) = (char)piVar20[0x12];
      param_3[0x13] = piVar20[0x13];
      *(char *)(param_3 + 0x14) = (char)piVar20[0x14];
      *(undefined1 *)((longlong)param_3 + 0x51) = *(undefined1 *)((longlong)piVar20 + 0x51);
      param_3[0x15] = piVar20[0x15];
      param_3[0x16] = piVar20[0x16];
      param_3[0x17] = piVar20[0x17];
      iVar8 = piVar20[0x18];
      param_3[0x18] = iVar8;
      return CONCAT71((uint7)(uint3)((uint)iVar8 >> 8),1);
    }
  }
LAB_180261a8c:
  return uVar11 & 0xffffffffffffff00;
}



/* ===== 180261ad0 FUN_180261ad0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_180261ad0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined8 ****ppppuVar7;
  bool bVar8;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined8 ****local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_180919500 ^ (ulonglong)auStack_68;
  bVar8 = false;
  local_48 = 0;
  lVar4 = FUN_180261140();
  if (lVar4 == 0) {
    return 0;
  }
  lVar4 = FUN_180261140(lVar4,param_3);
  if (lVar4 != 0) {
    uVar5 = FUN_18000f3a0(lVar4);
    bVar2 = (byte)(uVar5 >> 2);
    if ((bVar2 | 0x20) == 0x26) {
      uVar6 = FUN_18000f3a0(lVar4 + 8);
      FUN_1802608e0(&local_40,uVar6);
    }
    else if (bVar2 == 0x16) {
      FUN_1802608e0(&local_40,lVar4 + 8);
    }
    else {
      uStack_38 = 0;
      local_30 = 0;
      local_28 = 0xf;
      local_40 = (undefined8 ****)0x0;
    }
    bVar8 = true;
    local_48 = 3;
    if (DAT_180cf9ed8 != 0) {
      ppppuVar7 = &local_40;
      if (0xf < local_28) {
        ppppuVar7 = local_40;
      }
      iVar3 = FUN_180260b00(DAT_180cf9ed8,ppppuVar7,param_4);
      if (iVar3 == 0) {
        uVar6 = 1;
        goto LAB_180261bae;
      }
    }
  }
  uVar6 = 0;
LAB_180261bae:
  if ((bVar8) && (0xf < local_28)) {
    uVar5 = local_28 + 1;
    ppppuVar7 = local_40;
    if (0xfff < uVar5) {
      ppppuVar7 = (undefined8 ****)local_40[-1];
      if (0x1f < (ulonglong)((longlong)local_40 + (-8 - (longlong)ppppuVar7))) {
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        pcVar1 = (code *)swi(3);
        uVar6 = (*pcVar1)();
        return uVar6;
      }
      uVar5 = local_28 + 0x28;
    }
    thunk_FUN_1803d64e0(ppppuVar7,uVar5);
  }
  return uVar6;
}



/* ===== 180261c10 FUN_180261c10 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180261c10(int *param_1,char *param_2,longlong param_3,undefined8 param_4,int param_5)

{
  code *pcVar1;
  byte bVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined1 *puVar12;
  uint uVar13;
  float fVar14;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [24];
  int local_88;
  undefined8 local_70;
  char *pcStack_68;
  longlong local_60;
  ulonglong local_58;
  ulonglong local_50;
  
  local_50 = DAT_180919500 ^ (ulonglong)auStack_a8;
  if (param_5 < 0x11) {
    uVar6 = FUN_18000f3a0(param_3);
    if (((byte)(uVar6 >> 2) & 0xf) == 9) {
      if ((param_3 == 0) || (DAT_180961b88 == 0)) {
        lVar7 = 0;
      }
      else {
        uVar4 = FUN_180260710(&DAT_18073ca80,4,1);
        local_70 = (undefined8 *)CONCAT44(0xffffffff,uVar4);
        pcStack_68 = "base";
        lVar7 = FUN_180261090(param_3,&local_70);
      }
      if (lVar7 == 0) {
LAB_180261ded:
        puVar12 = auStack_a8;
        if (param_3 == 0) goto LAB_180261f22;
        if (*param_1 != 1) {
          puVar12 = auStack_a8;
          if (DAT_180961b88 == 0) goto LAB_180261f22;
          uVar4 = FUN_180260710("health",6,1);
          local_70 = (undefined8 *)CONCAT44(0xffffffff,uVar4);
          pcStack_68 = "health";
          lVar7 = FUN_180261090(param_3,&local_70);
          if (lVar7 != 0) {
            iVar5 = FUN_180260b20(lVar7);
            if (iVar5 != -1) {
              param_1[1] = iVar5;
            }
          }
        }
        puVar12 = auStack_a8;
        if (DAT_180961b88 == 0) goto LAB_180261f22;
        uVar4 = FUN_180260710("dmg.club",8,1);
        local_70 = (undefined8 *)CONCAT44(0xffffffff,uVar4);
        pcStack_68 = "dmg.club";
        lVar7 = FUN_180261090(param_3,&local_70);
        if (lVar7 != 0) {
          uVar6 = FUN_18000f3a0(lVar7);
          uVar13 = (uint)(uVar6 >> 2) & 0xf;
          fVar14 = (float)FUN_180260ea0(lVar7);
          if ((((uVar13 - 3 & 0xfffffffc) != 0) || (uVar13 == 4)) || (0.0 <= fVar14)) {
            param_1[4] = (int)fVar14;
          }
        }
        puVar12 = auStack_a8;
        if (DAT_180961b88 == 0) goto LAB_180261f22;
        uVar4 = FUN_180260710("flammable",9,1);
        local_70 = (undefined8 *)CONCAT44(0xffffffff,uVar4);
        pcStack_68 = "flammable";
        lVar7 = FUN_180261090(param_3,&local_70);
        puVar12 = auStack_a8;
LAB_180261f2a:
        if (DAT_180961b88 == 0) goto LAB_180261f6a;
        *(undefined8 *)(puVar12 + -8) = 0x180261f4b;
        uVar4 = FUN_180260710("explosive_resist",0x10,1);
        local_70 = (undefined8 *)CONCAT44(0xffffffff,uVar4);
        pcStack_68 = "explosive_resist";
        *(undefined8 *)(puVar12 + -8) = 0x180261f65;
        lVar9 = FUN_180261090(param_3,&local_70);
LAB_180261f72:
        if (DAT_180961b88 == 0) goto LAB_180261fb2;
        *(undefined8 *)(puVar12 + -8) = 0x180261f93;
        uVar4 = FUN_180260710("ignite_halfhealth",0x11,1);
        local_70 = (undefined8 *)CONCAT44(0xffffffff,uVar4);
        pcStack_68 = "ignite_halfhealth";
        *(undefined8 *)(puVar12 + -8) = 0x180261fad;
        lVar10 = FUN_180261090(param_3,&local_70);
      }
      else {
        uVar6 = FUN_18000f3a0(lVar7);
        bVar2 = (byte)(uVar6 >> 2);
        if ((bVar2 | 0x20) == 0x26) {
          uVar8 = FUN_18000f3a0(lVar7 + 8);
          FUN_1802608e0(&local_70,uVar8);
        }
        else if (bVar2 == 0x16) {
          FUN_1802608e0(&local_70,lVar7 + 8);
        }
        else {
          pcStack_68 = (char *)0x0;
          local_60 = 0;
          local_58 = 0xf;
          local_70 = (undefined8 *)0x0;
        }
        if (local_60 == 0) {
LAB_180261db2:
          if (0xf < local_58) {
            uVar6 = local_58 + 1;
            puVar11 = local_70;
            if (0xfff < uVar6) {
              puVar11 = (undefined8 *)local_70[-1];
              if (0x1f < (ulonglong)((longlong)local_70 + (-8 - (longlong)puVar11)))
              goto LAB_180261f1b;
              uVar6 = local_58 + 0x28;
            }
            thunk_FUN_1803d64e0(puVar11,uVar6);
          }
          goto LAB_180261ded;
        }
        lVar7 = FUN_1802611b0();
        if (lVar7 != 0) {
          puVar11 = &local_70;
          if (0xf < local_58) {
            puVar11 = local_70;
          }
          lVar7 = FUN_180261140(lVar7,puVar11);
          if (lVar7 != 0) {
            local_88 = param_5 + 1;
            cVar3 = FUN_180261c10(param_1,param_2,lVar7,lVar7);
            if (cVar3 != '\0') goto LAB_180261db2;
          }
        }
        if (local_58 < 0x10) goto LAB_180261d93;
        uVar6 = local_58 + 1;
        puVar11 = local_70;
        if (uVar6 < 0x1000) {
LAB_180261d8e:
          thunk_FUN_1803d64e0(puVar11,uVar6);
          goto LAB_180261d93;
        }
        puVar11 = (undefined8 *)local_70[-1];
        if ((ulonglong)((longlong)local_70 + (-8 - (longlong)puVar11)) < 0x20) {
          uVar6 = local_58 + 0x28;
          goto LAB_180261d8e;
        }
LAB_180261f1b:
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        puVar12 = auStack_a0;
LAB_180261f22:
        lVar7 = 0;
        if (param_3 != 0) goto LAB_180261f2a;
LAB_180261f6a:
        lVar9 = 0;
        if (param_3 != 0) goto LAB_180261f72;
LAB_180261fb2:
        lVar10 = 0;
      }
      if (lVar7 == 0) {
LAB_180261fcd:
        if (lVar9 != 0) {
          *(undefined8 *)(puVar12 + -8) = 0x180261fda;
          iVar5 = FUN_180260b20(lVar9);
          if (iVar5 != 0) {
            cVar3 = '\x01';
            goto LAB_1802620b1;
          }
        }
        if (lVar10 != 0) {
          *(undefined8 *)(puVar12 + -8) = 0x180261ff2;
          iVar5 = FUN_180260b20(lVar10);
          if (iVar5 != 0) {
            cVar3 = '\x01';
            goto LAB_1802620b1;
          }
        }
        *(undefined8 *)(puVar12 + -8) = 0x18026201a;
        cVar3 = FUN_180261ad0(param_4,"physgun_interactions","onfirstimpact","break");
        if (cVar3 == '\0') {
          *(undefined8 *)(puVar12 + -8) = 0x180262042;
          cVar3 = FUN_180261ad0(param_4,"physgun_interactions","onbreak","explode_fire");
          if (cVar3 == '\0') {
            *(undefined8 *)(puVar12 + -8) = 0x180262067;
            cVar3 = FUN_180261ad0(param_4,"fire_interactions","flammable",&DAT_1806f1308);
            if (cVar3 == '\0') {
              *(undefined8 *)(puVar12 + -8) = 0x18026208c;
              cVar3 = FUN_180261ad0(param_4,"fire_interactions","explosive_resist",&DAT_1806f1308);
              if (cVar3 == '\0') {
                *(undefined8 *)(puVar12 + -8) = 0x1802620b1;
                cVar3 = FUN_180261ad0(param_4,"fire_interactions","ignite","halfhealth");
              }
              else {
                cVar3 = '\x01';
              }
            }
            else {
              cVar3 = '\x01';
            }
          }
          else {
            cVar3 = '\x01';
          }
        }
        else {
          cVar3 = '\x01';
        }
      }
      else {
        *(undefined8 *)(puVar12 + -8) = 0x180261fc2;
        iVar5 = FUN_180260b20(lVar7);
        if (iVar5 == 0) goto LAB_180261fcd;
        cVar3 = '\x01';
      }
LAB_1802620b1:
      *param_2 = cVar3 != '\0' || *param_2 != '\0';
      *(undefined8 *)(puVar12 + -8) = 0x1802620d7;
      cVar3 = FUN_180261ad0(param_4,"fire_interactions","heat_delay",&DAT_1806d3254);
      if (cVar3 != '\0') {
        *(undefined1 *)(param_1 + 7) = 1;
      }
      if ((*param_2 == '\0') && ((char)param_1[7] == '\0')) {
        *param_2 = '\0';
        uVar8 = 1;
      }
      else {
        uVar8 = 1;
        *param_2 = '\x01';
      }
      goto LAB_180261d95;
    }
  }
LAB_180261d93:
  puVar12 = auStack_a8;
  uVar8 = 0;
LAB_180261d95:
  *(undefined8 *)(puVar12 + -8) = 0x180261da1;
  return uVar8;
}



/* ===== 180262110 FUN_180262110 ===== */

void FUN_180262110(undefined8 param_1,undefined8 *param_2,undefined4 *param_3,undefined8 param_4)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  char local_10;
  
  if (DAT_180ca1210 < 0x200) {
    FUN_18025c4d0(&DAT_180ca1200);
    if (local_10 != '\0') {
      puVar1 = (undefined2 *)FUN_1803a0710();
      if (0xf < (ulonglong)param_2[3]) {
        param_2 = (undefined8 *)*param_2;
      }
      puVar2 = &DAT_1806dfbb4;
      if (puVar1 != (undefined2 *)0x0) {
        puVar2 = puVar1;
      }
      FUN_1802b2560("[grenade breakables] %s %s (%s): type %d health %d max %d scale %.2f min %d break %d resists %d unbreakable %d"
                    ,param_4,param_2,puVar2,*param_3,param_3[1],param_3[2],(double)(float)param_3[4]
                    ,param_3[5],*(char *)(param_3 + 6) != '\0',
                    *(char *)((longlong)param_3 + 0x19) != '\0',*(char *)(param_3 + 7) != '\0');
    }
  }
  return;
}



/* ===== 180262220 FUN_180262220 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_180262220(longlong param_1,int *param_2,undefined8 param_3)

{
  uint uVar1;
  bool bVar2;
  code *pcVar3;
  int iVar4;
  char cVar5;
  undefined1 uVar6;
  int iVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined1 *puVar14;
  undefined4 extraout_XMM0_Da;
  float fVar15;
  undefined1 auStack_108 [8];
  undefined1 auStack_100 [40];
  char local_d8 [16];
  int local_c8 [2];
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_9c;
  undefined4 local_94;
  undefined8 local_90;
  undefined8 local_88;
  char local_80;
  int local_7c;
  undefined2 local_78;
  ulonglong local_74;
  undefined8 local_6c;
  undefined8 local_58;
  char *pcStack_50;
  undefined1 *local_48;
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStack_108;
  uVar9 = FUN_1802612b0(param_1,"C_BasePropDoor");
  puVar14 = auStack_108;
  if ((char)uVar9 != '\0') {
    uVar9 = uVar9 & 0xffffffffffffff00;
    goto LAB_180262469;
  }
  local_c8[0] = 0;
  uStack_b8 = 0;
  local_b0 = 0;
  local_a8 = 0xf;
  local_c0 = 0;
  local_a0 = 0;
  local_9c = 0;
  local_94 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = '\0';
  local_7c = 0;
  local_78 = 0;
  local_74 = 0;
  local_6c = 0;
  cVar5 = FUN_180261500(param_1,1,local_c8,param_3);
  if (cVar5 == '\0') {
    if (((DAT_180cf9ee4 == 0) ||
        (lVar10 = FUN_18000f3a0(param_1 + (ulonglong)DAT_180cf9ee4), lVar10 == 0)) ||
       (DAT_180cf9ee8 == 0)) {
      pcStack_50 = (char *)0x0;
      local_48 = (undefined1 *)0x0;
      local_40 = 0xf;
      local_58 = (undefined8 *)0x0;
    }
    else {
      uVar11 = FUN_18000f3a0((ulonglong)DAT_180cf9ee8 + lVar10);
      FUN_1802608e0(&local_58,uVar11);
    }
    puVar13 = &local_58;
    if (0xf < local_40) {
      puVar13 = local_58;
    }
    if ((local_48 != &DAT_0000000c) || (iVar7 = memcmp(puVar13,"prop_dynamic",0xc), iVar7 != 0)) {
LAB_1802623d5:
      cVar5 = FUN_1802612b0(param_1,"C_Breakable");
      if (((cVar5 != '\0') || (cVar5 = FUN_1802612b0(param_1,"C_DynamicProp"), cVar5 != '\0')) ||
         (cVar5 = FUN_1802612b0(param_1,"C_PhysicsProp"), cVar5 != '\0')) {
        FUN_180262110(param_1,param_3,param_2,"no table entry for");
      }
      puVar14 = auStack_108;
      if (0xf < local_40) {
        uVar9 = local_40 + 1;
        puVar13 = local_58;
        if (0xfff < uVar9) {
          puVar13 = (undefined8 *)local_58[-1];
          if (0x1f < (ulonglong)((longlong)local_58 + (-8 - (longlong)puVar13))) goto LAB_18026248c;
          uVar9 = local_40 + 0x28;
        }
        thunk_FUN_1803d64e0(puVar13,uVar9);
        puVar14 = auStack_108;
      }
      goto LAB_18026245b;
    }
    cVar5 = FUN_180261500(param_1,0,local_c8,param_3);
    if (cVar5 == '\0') goto LAB_1802623d5;
    if (local_40 < 0x10) goto LAB_18026239b;
    uVar9 = local_40 + 1;
    puVar13 = local_58;
    if (uVar9 < 0x1000) {
LAB_180262396:
      thunk_FUN_1803d64e0(puVar13,uVar9);
      goto LAB_18026239b;
    }
    puVar13 = (undefined8 *)local_58[-1];
    if ((ulonglong)((longlong)local_58 + (-8 - (longlong)puVar13)) < 0x20) {
      uVar9 = local_40 + 0x28;
      goto LAB_180262396;
    }
LAB_18026248c:
    pcVar3 = (code *)swi(0x29);
    iVar7 = (*pcVar3)(5);
    puVar14 = auStack_100;
LAB_180262493:
    if (iVar7 != -0x66577cb3) {
      if (iVar7 == 0x5ec87eb2) {
        *(undefined8 *)(puVar14 + -8) = 0x1802624cb;
        cVar5 = FUN_1802612b0(param_1,"C_PhysicsPropMultiplayer");
        if (cVar5 != '\0') {
          *param_2 = 4;
          goto LAB_1802624ff;
        }
      }
      else if (iVar7 == -0x2fd042b4) {
        *(undefined8 *)(puVar14 + -8) = 0x1802624f1;
        cVar5 = FUN_1802612b0(param_1,"C_PhysicsProp");
        if (cVar5 != '\0') {
          *param_2 = 3;
          goto LAB_1802624ff;
        }
      }
      goto LAB_18026245b;
    }
    *(undefined8 *)(puVar14 + -8) = 0x1802624a9;
    cVar5 = FUN_1802612b0(param_1,"C_DynamicProp");
    if (cVar5 == '\0') goto LAB_18026245b;
    *param_2 = 2;
LAB_1802624ff:
    if (((DAT_180cf9ef0 == 0) || (DAT_180cf9f00 == 0)) || (DAT_180cf9f08 == 0)) goto LAB_18026245b;
    *(undefined8 *)(puVar14 + -8) = 0x180262530;
    lVar10 = FUN_18000f3a0(param_1 + (ulonglong)DAT_180cf9ef0);
    if (lVar10 == 0) goto LAB_18026245b;
    *(undefined8 *)(puVar14 + -8) = 0x180262541;
    lVar10 = FUN_180047bf0(lVar10);
    if (lVar10 == 0) goto LAB_18026245b;
    *(undefined8 *)(puVar14 + -8) = 0x180262561;
    lVar10 = FUN_18000f3a0((ulonglong)DAT_180cf9f00 + lVar10 + (ulonglong)DAT_180cf9f08);
    if ((lVar10 == 0) || (DAT_180cf9ec0 == 0)) {
LAB_18026259e:
      lVar10 = 0;
    }
    else {
      *(undefined8 *)(puVar14 + -8) = 0x18026257b;
      iVar7 = FUN_180261120(extraout_XMM0_Da,lVar10);
      if (iVar7 != 3) goto LAB_18026259e;
      *(undefined8 *)(puVar14 + -8) = 0x180262589;
      uVar9 = FUN_180011220(lVar10 + 0x18);
      if ((uVar9 & 2) != 0) goto LAB_18026259e;
      *(undefined8 *)(puVar14 + -8) = 0x180262595;
      lVar12 = FUN_18000f3a0(lVar10);
      lVar10 = lVar12 + 0x60;
      if (lVar12 == 0) goto LAB_18026259e;
    }
    if (lVar10 == 0) goto LAB_18026245b;
    if (DAT_180961b88 != 0) {
      *(undefined8 *)(puVar14 + -8) = 0x1802625cb;
      uVar8 = FUN_180260710("CDestructiblePartsSystemData",0x1c,1);
      local_58 = (undefined8 *)CONCAT44(0xffffffff,uVar8);
      pcStack_50 = "CDestructiblePartsSystemData";
      *(undefined8 *)(puVar14 + -8) = 0x1802625e5;
      lVar12 = FUN_180261090(lVar10,&local_58);
      if (lVar12 != 0) goto LAB_18026245b;
    }
    param_2[5] = local_7c;
    local_d8[0] = '\0';
    if (*param_2 == 1) {
      iVar7 = 0;
      if (local_80 != '\0') {
        iVar7 = local_88._4_4_;
      }
      param_2[1] = iVar7;
      param_2[4] = 0x3fc00000;
      iVar4 = local_6c._4_4_;
      lVar10 = (longlong)local_6c._4_4_;
      if (local_6c._4_4_ == 0) {
LAB_180262676:
        if ((iVar7 == 0) || ((local_74 & 0x100000000) != 0)) {
          uVar6 = 0;
        }
        else {
          uVar6 = 1;
        }
        *(undefined1 *)(param_2 + 6) = uVar6;
        *(bool *)(param_2 + 7) = (int)local_6c == 7;
        if (-1 < iVar7) goto LAB_1802628d5;
      }
      else {
        *(undefined8 *)(puVar14 + -8) = 0x180262623;
        lVar12 = FUN_1802611b0();
        if ((lVar12 != 0) && (iVar4 - 1U < 0x19)) {
          uVar11 = *(undefined8 *)(&DAT_18063fd40 + lVar10 * 8);
          *(undefined8 *)(puVar14 + -8) = 0x18026264b;
          lVar10 = FUN_180261140(lVar12,uVar11);
          if (lVar10 != 0) {
            *(undefined4 *)(puVar14 + 0x20) = 0;
            *(undefined8 *)(puVar14 + -8) = 0x18026266b;
            cVar5 = FUN_180261c10(param_2,local_d8,lVar10,lVar10);
            if (cVar5 != '\0') {
              iVar7 = param_2[1];
              goto LAB_180262676;
            }
          }
        }
      }
      goto LAB_18026245b;
    }
    if (DAT_180961b88 != 0) {
      *(undefined8 *)(puVar14 + -8) = 0x1802626c5;
      uVar8 = FUN_180260710("explosion_behavior",0x12,1);
      local_58 = (undefined8 *)CONCAT44(0xffffffff,uVar8);
      pcStack_50 = "explosion_behavior";
      *(undefined8 *)(puVar14 + -8) = 0x1802626df;
      lVar12 = FUN_180261090(lVar10,&local_58);
      if (lVar12 != 0) {
        if (DAT_180961b88 == 0) goto LAB_18026279e;
        *(undefined8 *)(puVar14 + -8) = 0x18026270c;
        uVar8 = FUN_180260710("explosion_delay",0xf,1);
        local_58 = (undefined8 *)CONCAT44(0xffffffff,uVar8);
        pcStack_50 = "explosion_delay";
        *(undefined8 *)(puVar14 + -8) = 0x180262726;
        lVar12 = FUN_180261090(lVar12,&local_58);
        if (lVar12 != 0) {
          *(undefined8 *)(puVar14 + -8) = 0x180262733;
          fVar15 = (float)FUN_180260ea0(lVar12);
          if (0.0 < fVar15) goto LAB_18026245b;
        }
      }
      if (DAT_180961b88 != 0) {
        *(undefined8 *)(puVar14 + -8) = 0x180262760;
        uVar8 = FUN_180260710("prop_data",9,1);
        local_58 = (undefined8 *)CONCAT44(0xffffffff,uVar8);
        pcStack_50 = "prop_data";
        *(undefined8 *)(puVar14 + -8) = 0x18026277a;
        lVar12 = FUN_180261090(lVar10,&local_58);
        if (lVar12 != 0) {
          *(undefined4 *)(puVar14 + 0x20) = 0;
          *(undefined8 *)(puVar14 + -8) = 0x180262796;
          cVar5 = FUN_180261c10(param_2,local_d8,lVar12,lVar10);
          if (cVar5 == '\0') goto LAB_18026245b;
        }
      }
    }
LAB_18026279e:
    if ((local_80 != '\0') && (local_88._4_4_ != 0)) {
      param_2[1] = local_88._4_4_;
    }
    bVar2 = false;
    if (DAT_180961b88 != 0) {
      *(undefined8 *)(puVar14 + -8) = 0x1802627d6;
      uVar8 = FUN_180260710("break_list",10,1);
      local_58 = (undefined8 *)CONCAT44(0xffffffff,uVar8);
      pcStack_50 = "break_list";
      *(undefined8 *)(puVar14 + -8) = 0x1802627f0;
      lVar12 = FUN_180261090(lVar10,&local_58);
      if (lVar12 != 0) {
        *(undefined8 *)(puVar14 + -8) = 0x180262800;
        uVar9 = FUN_18000f3a0(lVar12);
        if ((char)(uVar9 >> 2) == '\b') {
          *(undefined8 *)(puVar14 + -8) = 0x180262815;
          lVar12 = FUN_18000f3a0(lVar12 + 8);
          if (lVar12 != 0) {
            *(undefined8 *)(puVar14 + -8) = 0x180262827;
            iVar7 = FUN_180011200(lVar12 + 8);
            bVar2 = 0 < iVar7;
            goto LAB_18026282d;
          }
        }
        goto LAB_18026245b;
      }
LAB_18026282d:
      if (DAT_180961b88 != 0) {
        *(undefined8 *)(puVar14 + -8) = 0x18026284e;
        uVar8 = FUN_180260710("break_command_list",0x12,1);
        local_58 = (undefined8 *)CONCAT44(0xffffffff,uVar8);
        pcStack_50 = "break_command_list";
        *(undefined8 *)(puVar14 + -8) = 0x180262868;
        lVar10 = FUN_180261090(lVar10,&local_58);
        if (lVar10 != 0) {
          *(undefined8 *)(puVar14 + -8) = 0x180262878;
          uVar9 = FUN_18000f3a0(lVar10);
          if ((char)(uVar9 >> 2) == '\b') {
            *(undefined8 *)(puVar14 + -8) = 0x18026288d;
            lVar10 = FUN_18000f3a0(lVar10 + 8);
            if (lVar10 != 0) {
              *(undefined8 *)(puVar14 + -8) = 0x18026289f;
              iVar7 = FUN_180011200(lVar10 + 8);
              if ((bVar2) || (0 < iVar7)) {
                bVar2 = true;
              }
              goto LAB_1802628ab;
            }
          }
          goto LAB_18026245b;
        }
      }
    }
LAB_1802628ab:
    *(undefined1 *)(param_2 + 6) = 1;
    iVar7 = param_2[1];
    if ((iVar7 == 0) || ((local_d8[0] == '\0' && (!bVar2)))) {
      param_2[1] = 0;
      *(undefined1 *)((longlong)param_2 + 0x19) = 1;
      iVar7 = 0;
    }
    else if (iVar7 < 0) goto LAB_18026245b;
LAB_1802628d5:
    uVar1 = param_2[4];
    if (((0x7ffffe < uVar1 - 1) && ((uVar1 & 0x7fffffff) != 0)) &&
       (((int)uVar1 < 0 || (0x7effffff < (uVar1 & 0x7fffffff) - 0x800000)))) goto LAB_18026245b;
    param_2[2] = (uint)(iVar7 == 0) + iVar7;
    uVar9 = 1;
  }
  else {
LAB_18026239b:
    puVar14 = auStack_108;
    if ((char)local_78 == '\0') {
      puVar14 = auStack_108;
      iVar7 = (int)local_74;
      if ((int)local_74 != -0x6a7ede66) goto LAB_180262493;
      cVar5 = FUN_1802612b0(param_1,"C_Breakable");
      puVar14 = auStack_108;
      if (cVar5 == '\0') goto LAB_18026245b;
      *param_2 = 1;
      puVar14 = auStack_108;
      goto LAB_1802624ff;
    }
LAB_18026245b:
    uVar9 = 0;
  }
  *(undefined8 *)(puVar14 + -8) = 0x180262466;
  FUN_18000f890(&local_c0);
LAB_180262469:
  *(undefined8 *)(puVar14 + -8) = 0x180262475;
  return uVar9;
}



/* ===== 180262920 FUN_180262920 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_180262920(longlong *param_1,longlong param_2)

{
  undefined *puVar1;
  longlong *plVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  undefined2 *puVar10;
  longlong lVar11;
  undefined8 ****ppppuVar12;
  ulonglong uVar13;
  longlong *plVar14;
  undefined1 *puVar15;
  longlong lVar16;
  undefined2 *puVar17;
  undefined *puVar18;
  undefined1 auStack_168 [8];
  undefined1 auStack_160 [24];
  undefined4 local_148;
  undefined4 local_140;
  undefined4 local_138;
  double local_130;
  undefined4 local_128;
  uint local_120;
  uint local_118;
  uint local_110;
  char local_108;
  undefined1 local_107;
  undefined1 local_106;
  undefined1 local_105;
  undefined1 local_104;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  char local_e4;
  undefined2 local_e3;
  undefined1 local_e1;
  longlong local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined *local_c8;
  undefined4 local_97;
  undefined2 local_93;
  undefined1 local_91;
  undefined1 local_90 [8];
  char local_88;
  undefined8 ****local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  ulonglong local_68;
  ulonglong local_60;
  
  local_60 = DAT_180919500 ^ (ulonglong)auStack_168;
  if (param_2 == 0) {
    return (longlong *)0x0;
  }
  FUN_180260420();
  FUN_180260550();
  if ((DAT_180cf9ee4 == 0) ||
     (lVar9 = FUN_18000f3a0(param_2 + (ulonglong)DAT_180cf9ee4), lVar9 == 0)) {
    iVar7 = -1;
  }
  else {
    iVar7 = FUN_180011200(lVar9 + 0x10);
  }
  for (plVar14 = (longlong *)*param_1; plVar14 != (longlong *)param_1[1]; plVar14 = plVar14 + 6) {
    if ((*plVar14 == param_2) && ((int)plVar14[1] == iVar7)) {
      return plVar14;
    }
  }
  local_100 = 0;
  local_f8 = 0;
  local_f0 = 0x3f800000;
  local_e8 = 0;
  local_e4 = '\0';
  uStack_78 = 0;
  local_70 = 0;
  local_68 = 0xf;
  local_80 = (undefined8 ****)0x0;
  local_c8 = &DAT_1809f3520;
  iVar8 = FUN_1804e4d70(&DAT_1809f3520);
  if (iVar8 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809f356c == 0x7fffffff) {
    DAT_1809f356c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  cVar6 = FUN_180262220(param_2,&local_100,&local_80);
  if (((cVar6 == '\0') || (local_e0 = param_2, 0x1ff < DAT_180ca1210)) ||
     (FUN_18025c4d0(&DAT_180ca1200,local_90,&local_e0), local_88 == '\0')) {
    FUN_1804e4e90(&DAT_1809f3520);
    if (cVar6 != '\0') goto LAB_180262b1e;
    plVar14 = (longlong *)0x0;
  }
  else {
    puVar10 = (undefined2 *)FUN_1803a0710(&local_e0);
    local_130 = (double)(float)local_f0;
    ppppuVar12 = &local_80;
    if (0xf < local_68) {
      ppppuVar12 = local_80;
    }
    puVar17 = &DAT_1806dfbb4;
    if (puVar10 != (undefined2 *)0x0) {
      puVar17 = puVar10;
    }
    local_110 = (uint)(local_e4 != '\0');
    local_118 = (uint)(local_e8._1_1_ != '\0');
    local_120 = (uint)((char)local_e8 != '\0');
    local_128 = local_f0._4_4_;
    local_138 = (undefined4)local_f8;
    local_140 = local_100._4_4_;
    local_148 = (undefined4)local_100;
    FUN_1802b2560("[grenade breakables] %s %s (%s): type %d health %d max %d scale %.2f min %d break %d resists %d unbreakable %d"
                  ,"model",ppppuVar12,puVar17);
    FUN_1804e4e90(&DAT_1809f3520);
LAB_180262b1e:
    puVar15 = auStack_168;
    local_d8 = (undefined4)local_100;
    local_d4 = local_100._4_4_;
    local_d0 = (undefined4)local_f8;
    uVar4 = local_f8._4_4_;
    uVar5 = (float)local_f0;
    local_e0 = CONCAT44(local_e0._4_4_,local_f0._4_4_);
    local_107 = (char)local_e8;
    local_106 = local_e8._1_1_;
    local_105 = local_e8._2_1_;
    local_104 = local_e8._3_1_;
    local_108 = local_e4;
    local_97._0_3_ = CONCAT12(local_e1,local_e3);
    plVar14 = (longlong *)param_1[1];
    if (plVar14 == (longlong *)param_1[2]) {
      lVar9 = (longlong)plVar14 - *param_1;
      lVar9 = lVar9 / 6 + (lVar9 >> 0x3f);
      lVar9 = (lVar9 >> 3) - (lVar9 >> 0x3f);
      puVar18 = (undefined *)0x555555555555555;
      if (lVar9 == 0x555555555555555) {
                    /* WARNING: Subroutine does not return */
        FUN_1800118d0();
      }
      local_c8 = (undefined *)(lVar9 + 1);
      uVar13 = (param_1[2] - *param_1 >> 4) * -0x5555555555555555;
      if (uVar13 <= 0x555555555555555 - (uVar13 >> 1)) {
        puVar1 = (undefined *)((uVar13 >> 1) + uVar13);
        puVar18 = local_c8;
        if (local_c8 <= puVar1) {
          puVar18 = puVar1;
        }
        if ((undefined *)0x555555555555555 < puVar18) goto LAB_180262dda;
      }
      lVar11 = FUN_18000fb70((longlong)puVar18 * 0x30);
      lVar9 = lVar9 * 0x30;
      *(longlong *)(lVar9 + lVar11) = param_2;
      *(int *)(lVar9 + 8 + lVar11) = iVar7;
      *(undefined4 *)(lVar9 + 0xc + lVar11) = local_d8;
      *(undefined4 *)(lVar9 + 0x10 + lVar11) = local_d4;
      *(undefined4 *)(lVar9 + 0x14 + lVar11) = local_d0;
      *(undefined4 *)(lVar9 + 0x18 + lVar11) = uVar4;
      *(undefined4 *)(lVar9 + 0x1c + lVar11) = uVar5;
      *(undefined4 *)(lVar9 + 0x20 + lVar11) = (undefined4)local_e0;
      *(undefined1 *)(lVar9 + 0x24 + lVar11) = local_107;
      *(undefined1 *)(lVar9 + 0x25 + lVar11) = local_106;
      *(undefined1 *)(lVar9 + 0x26 + lVar11) = local_105;
      *(undefined1 *)(lVar9 + 0x27 + lVar11) = local_104;
      *(char *)(lVar9 + 0x28 + lVar11) = local_108;
      *(undefined4 *)(lVar9 + 0x29 + lVar11) = local_97;
      *(undefined2 *)(lVar9 + 0x2d + lVar11) = local_93;
      *(undefined1 *)(lVar9 + 0x2f + lVar11) = local_91;
      plVar2 = (longlong *)*param_1;
      if (plVar14 == (longlong *)param_1[1]) {
        lVar16 = param_1[1] - (longlong)plVar2;
        lVar9 = lVar11;
        plVar14 = plVar2;
      }
      else {
        FUN_180540530(lVar11,plVar2,(longlong)plVar14 - (longlong)plVar2);
        lVar9 = lVar9 + 0x30 + lVar11;
        lVar16 = param_1[1] - (longlong)plVar14;
      }
      FUN_180540530(lVar9,plVar14,lVar16);
      FUN_180264460(param_1,lVar11,local_c8,puVar18);
    }
    else {
      *plVar14 = param_2;
      *(int *)(plVar14 + 1) = iVar7;
      *(undefined4 *)((longlong)plVar14 + 0xc) = (undefined4)local_100;
      *(undefined4 *)(plVar14 + 2) = local_100._4_4_;
      *(undefined4 *)((longlong)plVar14 + 0x14) = (undefined4)local_f8;
      *(undefined4 *)(plVar14 + 3) = local_f8._4_4_;
      *(float *)((longlong)plVar14 + 0x1c) = (float)local_f0;
      *(undefined4 *)(plVar14 + 4) = local_f0._4_4_;
      *(char *)((longlong)plVar14 + 0x24) = (char)local_e8;
      *(char *)((longlong)plVar14 + 0x25) = local_e8._1_1_;
      *(undefined1 *)((longlong)plVar14 + 0x26) = local_e8._2_1_;
      *(undefined1 *)((longlong)plVar14 + 0x27) = local_e8._3_1_;
      *(char *)(plVar14 + 5) = local_e4;
      *(undefined4 *)((longlong)plVar14 + 0x29) = local_97;
      *(undefined2 *)((longlong)plVar14 + 0x2d) = local_93;
      *(undefined1 *)((longlong)plVar14 + 0x2f) = local_91;
      param_1[1] = param_1[1] + 0x30;
    }
    plVar14 = (longlong *)(param_1[1] + -0x30);
  }
  if (0xf < local_68) {
    uVar13 = local_68 + 1;
    ppppuVar12 = local_80;
    if (0xfff < uVar13) {
      ppppuVar12 = (undefined8 ****)local_80[-1];
      if (0x1f < (ulonglong)((longlong)local_80 + (-8 - (longlong)ppppuVar12))) {
        pcVar3 = (code *)swi(0x29);
        (*pcVar3)(5);
        puVar15 = auStack_160;
LAB_180262dda:
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)(puVar15 + -8) = 0x180262ddf;
        FUN_18000d840();
      }
      uVar13 = local_68 + 0x28;
    }
    thunk_FUN_1803d64e0(ppppuVar12,uVar13);
  }
  return plVar14;
}



/* ===== 180262e10 FUN_180262e10 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180262e10(longlong param_1,uint param_2,int *param_3)

{
  code *pcVar1;
  bool bVar2;
  uint *puVar3;
  char *******pppppppcVar4;
  byte bVar5;
  char cVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  size_t sVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  uint uVar20;
  undefined8 *******pppppppuVar21;
  char *******pppppppcVar22;
  bool bVar23;
  undefined1 *puVar24;
  char *pcVar25;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  undefined4 extraout_XMM0_Da_06;
  undefined4 extraout_XMM0_Da_07;
  undefined4 extraout_XMM0_Da_08;
  undefined4 extraout_XMM0_Da_09;
  undefined4 extraout_XMM0_Da_10;
  undefined4 extraout_XMM0_Da_11;
  undefined1 auStack_138 [8];
  undefined1 auStack_130 [24];
  undefined8 local_118;
  char *local_110;
  uint local_108;
  undefined8 local_100;
  char *pcStack_f8;
  ulonglong local_f0;
  ulonglong local_e8;
  uint local_d8 [2];
  undefined8 *******local_d0;
  char *pcStack_c8;
  ulonglong local_c0;
  ulonglong local_b8;
  uint local_b0;
  undefined8 local_ac;
  uint local_a4;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 local_90;
  uint local_8c;
  undefined2 local_88;
  undefined8 local_84;
  undefined8 local_7c;
  char *******local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  if (param_1 == 0) {
    return;
  }
  puVar24 = auStack_138;
  local_48 = DAT_180919500 ^ (ulonglong)auStack_138;
  uVar16 = (ulonglong)param_2;
  local_108 = 0;
  if (DAT_180961b70 == 0) goto LAB_18026391b;
  uVar7 = FUN_180260710("classname",9,1);
  local_118 = CONCAT44(0xffffffff,uVar7);
  local_110 = "classname";
  lVar10 = FUN_180261070(param_1,&local_118);
  puVar24 = auStack_138;
  if (lVar10 == 0) goto LAB_18026391b;
  uVar11 = FUN_18000f3a0(lVar10);
  bVar5 = (byte)(uVar11 >> 2);
  if (((bVar5 | 0x20) != 0x26) && (bVar5 != 0x16)) {
    *param_3 = *param_3 + 1;
  }
  uVar11 = FUN_18000f3a0(lVar10);
  bVar5 = (byte)(uVar11 >> 2);
  if ((bVar5 | 0x20) == 0x26) {
    uVar12 = FUN_18000f3a0(lVar10 + 8);
    FUN_1802608e0(&local_68,uVar12);
  }
  else if (bVar5 == 0x16) {
    FUN_1802608e0(&local_68,lVar10 + 8);
  }
  else {
    uStack_60 = 0;
    local_58 = 0;
    local_50 = 0xf;
    local_68 = (char *******)0x0;
  }
  uVar11 = local_50;
  pppppppcVar4 = local_68;
  pppppppcVar22 = (char *******)&local_68;
  if (0xf < local_50) {
    pppppppcVar22 = local_68;
  }
  sVar13 = strlen((char *)pppppppcVar22);
  local_108 = FUN_180260710(pppppppcVar22,sVar13,1);
  puVar24 = auStack_138;
  if (local_108 < 0x99a8834e) {
    if (local_108 == 0x99a8834d) {
      pcVar25 = "prop_dynamic";
    }
    else if (local_108 == 0x5ec87eb2) {
      pcVar25 = "prop_physics_multiplayer";
    }
    else if (local_108 == 0x679beeaa) {
      pcVar25 = "prop_dynamic_override";
    }
    else {
      puVar24 = auStack_138;
      if (local_108 != 0x9581219a) goto LAB_180263912;
      pcVar25 = "func_breakable";
    }
LAB_180262fb2:
    puVar24 = auStack_138;
    if (DAT_180cf9ed8 != 0) {
      pppppppcVar22 = (char *******)&local_68;
      if (0xf < uVar11) {
        pppppppcVar22 = pppppppcVar4;
      }
      iVar8 = FUN_180260b00(DAT_180cf9ed8,pppppppcVar22,pcVar25);
      puVar24 = auStack_138;
      if (iVar8 == 0) {
        if (DAT_180961b70 == 0) {
          lVar10 = 0;
        }
        else {
          uVar7 = FUN_180260710("model",5,1);
          local_118 = CONCAT44(0xffffffff,uVar7);
          local_110 = "model";
          lVar10 = FUN_180261070(param_1,&local_118);
        }
        if (DAT_180961b70 == 0) {
          lVar14 = 0;
        }
        else {
          uVar7 = FUN_180260710("origin",6,1);
          local_118 = CONCAT44(0xffffffff,uVar7);
          local_110 = "origin";
          lVar14 = FUN_180261070(param_1,&local_118);
        }
        if (DAT_180961b70 == 0) {
          lVar15 = 0;
        }
        else {
          uVar7 = FUN_180260710("angles",6,1);
          local_118 = CONCAT44(0xffffffff,uVar7);
          local_110 = "angles";
          lVar15 = FUN_180261070(param_1,&local_118);
        }
        if (DAT_180961b70 == 0) {
          local_118 = 0;
        }
        else {
          uVar7 = FUN_180260710("parentname",10,1);
          local_118 = CONCAT44(0xffffffff,uVar7);
          local_110 = "parentname";
          local_118 = FUN_180261070(param_1,&local_118);
        }
        lVar19 = 0;
        puVar24 = auStack_138;
        if (((lVar10 != 0) && (puVar24 = auStack_138, lVar14 != 0)) &&
           (puVar24 = auStack_138, lVar15 != 0)) {
          local_d8[0] = 0;
          pcStack_c8 = (char *)0x0;
          local_c0 = 0;
          local_b8 = 0xf;
          local_d0 = (undefined8 *******)0x0;
          local_b0 = 0;
          local_ac = 0;
          local_a4 = 0;
          local_a0 = 0;
          local_98 = 0;
          local_90 = 0;
          local_8c = 0;
          local_88 = 0;
          local_84 = 0;
          local_7c = 0;
          uVar11 = FUN_18000f3a0(lVar10);
          bVar5 = (byte)(uVar11 >> 2);
          if ((bVar5 | 0x20) == 0x26) {
            uVar12 = FUN_18000f3a0(lVar10 + 8);
            FUN_1802608e0(&local_100,uVar12);
          }
          else if (bVar5 == 0x16) {
            FUN_1802608e0(&local_100,lVar10 + 8);
          }
          else {
            pcStack_f8 = (char *)0x0;
            local_f0 = 0;
            local_e8 = 0xf;
            local_100 = (undefined8 *******)0x0;
          }
          if (local_b8 < 0x10) {
LAB_1802631fd:
            local_d0 = local_100;
            pcStack_c8 = pcStack_f8;
            local_c0 = local_f0;
            local_b8 = local_e8;
            puVar24 = auStack_138;
            if (local_f0 != 0) {
              cVar6 = FUN_1802610c0(lVar14,&local_ac);
              puVar24 = auStack_138;
              if (cVar6 != '\0') {
                cVar6 = FUN_1802610c0(lVar15,&local_a0);
                puVar24 = auStack_138;
                if (cVar6 != '\0') {
                  uVar20 = 0;
                  do {
                    puVar24 = auStack_138;
                    if (((*(uint *)((longlong)&local_ac + (ulonglong)uVar20 * 4) & 0x7f800000) ==
                         0x7f800000) ||
                       (puVar24 = auStack_138,
                       (*(uint *)((longlong)&local_a0 + (ulonglong)uVar20 * 4) & 0x7f800000) ==
                       0x7f800000)) goto LAB_180263908;
                    uVar20 = uVar20 + 1;
                  } while ((int)uVar20 < 3);
                  pppppppuVar21 = &local_d0;
                  if (0xf < local_b8) {
                    pppppppuVar21 = local_d0;
                  }
                  uVar20 = (uint)local_c0 ^ 0x31415926;
                  lVar10 = 0;
                  uVar16 = local_c0;
                  while (3 < uVar16) {
                    uVar9 = CONCAT13(*(undefined1 *)(lVar10 + 3 + (longlong)pppppppuVar21),
                                     CONCAT12(*(undefined1 *)(lVar10 + 2 + (longlong)pppppppuVar21),
                                              CONCAT11(*(undefined1 *)
                                                        (lVar10 + 1 + (longlong)pppppppuVar21),
                                                       *(undefined1 *)
                                                        (lVar10 + (longlong)pppppppuVar21)))) *
                            0x5bd1e995;
                    uVar20 = uVar20 * 0x5bd1e995 ^ (uVar9 >> 0x18 ^ uVar9) * 0x5bd1e995;
                    lVar10 = lVar10 + 4;
                    uVar16 = local_c0 - lVar10;
                  }
                  lVar14 = 0;
                  if (local_c0 - lVar10 == 1) {
LAB_18026334c:
                    uVar20 = (*(byte *)(lVar10 + (longlong)pppppppuVar21) ^ uVar20) * 0x5bd1e995;
                  }
                  else {
                    lVar14 = (local_c0 - lVar10) + -2;
                    if (lVar14 == 0) {
LAB_180263341:
                      uVar20 = uVar20 ^ (uint)*(byte *)(lVar10 + 1 + (longlong)pppppppuVar21) << 8;
                      goto LAB_18026334c;
                    }
                    if (lVar14 == 1) {
                      uVar20 = uVar20 ^ (uint)*(byte *)(lVar10 + 2 + (longlong)pppppppuVar21) <<
                                        0x10;
                      goto LAB_180263341;
                    }
                  }
                  local_b0 = (uVar20 >> 0xd ^ uVar20) * 0x5bd1e995;
                  local_b0 = local_b0 >> 0xf ^ local_b0;
                  local_d8[0] = param_2;
                  if (DAT_180961b70 == 0) {
                    lVar10 = 0;
                    uVar7 = extraout_XMM0_Da;
                  }
                  else {
                    uVar7 = FUN_180260710("health",6,CONCAT71((int7)((ulonglong)lVar14 >> 8),1));
                    local_100 = (undefined8 *******)CONCAT44(0xffffffff,uVar7);
                    pcStack_f8 = "health";
                    lVar10 = FUN_180261070(param_1,&local_100);
                    uVar7 = extraout_XMM0_Da_00;
                  }
                  if (DAT_180961b70 == 0) {
                    lVar14 = 0;
                  }
                  else {
                    uVar7 = FUN_180260710("minhealthdmg",0xc,1);
                    local_100 = (undefined8 *******)CONCAT44(0xffffffff,uVar7);
                    pcStack_f8 = "minhealthdmg";
                    lVar14 = FUN_180261070(param_1,&local_100);
                    uVar7 = extraout_XMM0_Da_01;
                  }
                  if (DAT_180961b70 == 0) {
                    lVar15 = 0;
                  }
                  else {
                    uVar7 = FUN_180260710("damagefilter",0xc,1);
                    local_100 = (undefined8 *******)CONCAT44(0xffffffff,uVar7);
                    pcStack_f8 = "damagefilter";
                    lVar15 = FUN_180261070(param_1,&local_100);
                    uVar7 = extraout_XMM0_Da_02;
                  }
                  if (DAT_180961b70 == 0) {
                    lVar17 = 0;
                  }
                  else {
                    uVar7 = FUN_180260710("overridescript",0xe,1);
                    local_100 = (undefined8 *******)CONCAT44(0xffffffff,uVar7);
                    pcStack_f8 = "overridescript";
                    lVar17 = FUN_180261070(param_1,&local_100);
                    uVar7 = extraout_XMM0_Da_03;
                  }
                  if (DAT_180961b70 == 0) {
                    lVar18 = 0;
                  }
                  else {
                    uVar7 = FUN_180260710("spawnflags",10,1);
                    local_100 = (undefined8 *******)CONCAT44(0xffffffff,uVar7);
                    pcStack_f8 = "spawnflags";
                    lVar18 = FUN_180261070(param_1,&local_100);
                    uVar7 = extraout_XMM0_Da_04;
                  }
                  lVar19 = 0;
                  if (DAT_180961b70 == 0) {
LAB_180263572:
                    param_1 = 0;
                  }
                  else {
                    uVar7 = FUN_180260710("material",8,1);
                    local_100 = (undefined8 *******)CONCAT44(0xffffffff,uVar7);
                    pcStack_f8 = "material";
                    lVar19 = FUN_180261070(param_1,&local_100);
                    uVar7 = extraout_XMM0_Da_05;
                    if (DAT_180961b70 == 0) goto LAB_180263572;
                    uVar7 = FUN_180260710("propdata",8,1);
                    local_100 = (undefined8 *******)CONCAT44(0xffffffff,uVar7);
                    pcStack_f8 = "propdata";
                    param_1 = FUN_180261070(param_1,&local_100);
                    uVar7 = extraout_XMM0_Da_06;
                  }
                  if (lVar10 != 0) {
                    uVar7 = FUN_180260b20(lVar10);
                    local_98 = CONCAT44(uVar7,(uint)local_98);
                    local_90 = 1;
                    uVar7 = extraout_XMM0_Da_07;
                  }
                  if (lVar14 == 0) {
                    local_8c = 0;
                  }
                  else {
                    local_8c = FUN_180260b20(lVar14);
                    uVar7 = extraout_XMM0_Da_08;
                  }
                  uVar16 = 0;
                  bVar23 = false;
                  if (lVar15 == 0) {
LAB_18026361f:
                    bVar2 = false;
                    if (bVar23) goto LAB_180263628;
LAB_180263676:
                    bVar23 = false;
                    if (lVar17 == 0) {
LAB_1802636eb:
                      local_88 = local_88 & 0xff00;
                    }
                    else {
                      uVar11 = FUN_18000f3a0(lVar17);
                      bVar5 = (byte)(uVar11 >> 2);
                      if ((bVar5 | 0x20) == 0x26) {
                        uVar12 = FUN_18000f3a0(lVar17 + 8);
                        uVar7 = FUN_1802608e0(&local_100,uVar12);
                      }
                      else if (bVar5 == 0x16) {
                        uVar7 = FUN_1802608e0(&local_100,lVar17 + 8);
                      }
                      else {
                        uVar7 = 0;
                        pcStack_f8 = (char *)0x0;
                        local_f0 = 0;
                        local_e8 = 0xf;
                        local_100 = (undefined8 *******)0x0;
                      }
                      bVar23 = true;
                      local_88 = CONCAT11(local_88._1_1_,1);
                      if (local_f0 == 0) goto LAB_1802636eb;
                    }
                    if ((bVar23) && (0xf < local_e8)) {
                      uVar11 = local_e8 + 1;
                      pppppppuVar21 = local_100;
                      if (0xfff < uVar11) {
                        pppppppuVar21 = (undefined8 *******)local_100[-1];
                        if (0x1f < (ulonglong)((longlong)local_100 + (-8 - (longlong)pppppppuVar21))
                           ) goto LAB_180263806;
                        uVar11 = local_e8 + 0x28;
                      }
                      uVar7 = thunk_FUN_1803d64e0(pppppppuVar21,uVar11);
                    }
                  }
                  else {
                    uVar11 = FUN_18000f3a0(lVar15);
                    bVar5 = (byte)(uVar11 >> 2);
                    if ((bVar5 | 0x20) == 0x26) {
                      uVar12 = FUN_18000f3a0(lVar15 + 8);
                      uVar7 = FUN_1802608e0(&local_100,uVar12);
                    }
                    else if (bVar5 == 0x16) {
                      uVar7 = FUN_1802608e0(&local_100,lVar15 + 8);
                    }
                    else {
                      uVar7 = 0;
                      pcStack_f8 = (char *)0x0;
                      local_f0 = 0;
                      local_e8 = 0xf;
                      local_100 = (undefined8 *******)0x0;
                    }
                    bVar23 = true;
                    if (local_f0 == 0) goto LAB_18026361f;
                    bVar2 = true;
LAB_180263628:
                    if (0xf < local_e8) {
                      uVar11 = local_e8 + 1;
                      pppppppuVar21 = local_100;
                      if (0xfff < uVar11) {
                        pppppppuVar21 = (undefined8 *******)local_100[-1];
                        if (0x1f < (ulonglong)((longlong)local_100 + (-8 - (longlong)pppppppuVar21))
                           ) goto LAB_180263806;
                        uVar11 = local_e8 + 0x28;
                      }
                      uVar7 = thunk_FUN_1803d64e0(pppppppuVar21,uVar11);
                    }
                    if (!bVar2) goto LAB_180263676;
                    local_88 = CONCAT11(local_88._1_1_,1);
                  }
                  lVar10 = local_118;
                  bVar23 = false;
                  if (local_118 == 0) {
LAB_1802637ab:
                    local_88 = local_88 & 0xff;
                  }
                  else {
                    uVar11 = FUN_18000f3a0(local_118);
                    bVar5 = (byte)(uVar11 >> 2);
                    if ((bVar5 | 0x20) == 0x26) {
                      uVar12 = FUN_18000f3a0(lVar10 + 8);
                      uVar7 = FUN_1802608e0(&local_100,uVar12);
                    }
                    else if (bVar5 == 0x16) {
                      uVar7 = FUN_1802608e0(&local_100,lVar10 + 8);
                    }
                    else {
                      uVar7 = 0;
                      pcStack_f8 = (char *)0x0;
                      local_f0 = 0;
                      local_e8 = 0xf;
                      local_100 = (undefined8 *******)0x0;
                    }
                    bVar23 = true;
                    local_88 = CONCAT11(1,(undefined1)local_88);
                    if (local_f0 == 0) goto LAB_1802637ab;
                  }
                  if ((bVar23) && (0xf < local_e8)) {
                    uVar11 = local_e8 + 1;
                    pppppppuVar21 = local_100;
                    if (0xfff < uVar11) {
                      pppppppuVar21 = (undefined8 *******)local_100[-1];
                      if (0x1f < (ulonglong)((longlong)local_100 + (-8 - (longlong)pppppppuVar21)))
                      goto LAB_180263806;
                      uVar11 = local_e8 + 0x28;
                    }
                    uVar7 = thunk_FUN_1803d64e0(pppppppuVar21,uVar11);
                  }
                  puVar24 = auStack_138;
                  local_84 = CONCAT44(local_84._4_4_,local_108);
                  if (lVar18 == 0) goto LAB_18026380d;
                  uVar7 = FUN_180260ce0(lVar18);
                  puVar24 = auStack_138;
                  local_84 = CONCAT44(uVar7,(uint)local_84);
                  uVar7 = extraout_XMM0_Da_09;
                  goto LAB_180263811;
                }
              }
            }
          }
          else {
            uVar11 = local_b8 + 1;
            pppppppuVar21 = local_d0;
            if (uVar11 < 0x1000) {
LAB_1802631f8:
              thunk_FUN_1803d64e0(pppppppuVar21,uVar11);
              goto LAB_1802631fd;
            }
            pppppppuVar21 = (undefined8 *******)local_d0[-1];
            if ((ulonglong)((longlong)local_d0 + (-8 - (longlong)pppppppuVar21)) < 0x20) {
              uVar11 = local_b8 + 0x28;
              goto LAB_1802631f8;
            }
LAB_180263806:
            pcVar1 = (code *)swi(0x29);
            uVar7 = (*pcVar1)(5);
            puVar24 = auStack_130;
LAB_18026380d:
            local_84 = CONCAT44((int)uVar16,(uint)local_84);
LAB_180263811:
            if (lVar19 == 0) {
              local_7c = CONCAT44(local_7c._4_4_,(int)uVar16);
            }
            else {
              *(undefined8 *)(puVar24 + -8) = 0x18026381e;
              uVar7 = FUN_180260b20(lVar19);
              local_7c = CONCAT44(local_7c._4_4_,uVar7);
              uVar7 = extraout_XMM0_Da_10;
            }
            if (param_1 == 0) {
              local_7c = CONCAT44((int)uVar16,(uint)local_7c);
            }
            else {
              *(undefined8 *)(puVar24 + -8) = 0x180263834;
              uVar7 = FUN_180260b20(param_1);
              local_7c = CONCAT44(uVar7,(uint)local_7c);
              uVar7 = extraout_XMM0_Da_11;
            }
            puVar3 = DAT_180cf9f28;
            if (DAT_180cf9f28 == DAT_180cf9f30) {
              *(undefined8 *)(puVar24 + -8) = 0x180263907;
              FUN_180264100(uVar7,DAT_180cf9f28,local_d8);
            }
            else {
              *DAT_180cf9f28 = local_d8[0];
              puVar3[2] = 0;
              puVar3[3] = 0;
              puVar3[4] = 0;
              puVar3[5] = 0;
              *(ulonglong *)(puVar3 + 6) = uVar16;
              *(ulonglong *)(puVar3 + 8) = uVar16;
              *(undefined8 ********)(puVar3 + 2) = local_d0;
              *(char **)(puVar3 + 4) = pcStack_c8;
              *(ulonglong *)(puVar3 + 6) = local_c0;
              *(ulonglong *)(puVar3 + 8) = local_b8;
              local_b8 = 0xf;
              local_d0 = (undefined8 *******)((ulonglong)local_d0 & 0xffffffffffffff00);
              puVar3[10] = local_b0;
              *(undefined8 *)(puVar3 + 0xb) = local_ac;
              puVar3[0xd] = local_a4;
              *(undefined8 *)(puVar3 + 0xe) = local_a0;
              puVar3[0x10] = (uint)local_98;
              puVar3[0x11] = local_98._4_4_;
              *(undefined1 *)(puVar3 + 0x12) = local_90;
              puVar3[0x13] = local_8c;
              *(undefined1 *)(puVar3 + 0x14) = (undefined1)local_88;
              *(undefined1 *)((longlong)puVar3 + 0x51) = local_88._1_1_;
              puVar3[0x15] = (uint)local_84;
              puVar3[0x16] = local_84._4_4_;
              puVar3[0x17] = (uint)local_7c;
              puVar3[0x18] = local_7c._4_4_;
              DAT_180cf9f28 = DAT_180cf9f28 + 0x1a;
              local_c0 = uVar16;
            }
          }
LAB_180263908:
          *(undefined8 *)(puVar24 + -8) = 0x180263911;
          FUN_18000f890(&local_d0);
        }
      }
    }
  }
  else {
    if (local_108 == 0xd02fbd4c) {
      pcVar25 = "prop_physics";
      goto LAB_180262fb2;
    }
    if (local_108 == 0xd3b0fd48) {
      pcVar25 = "prop_physics_override";
      goto LAB_180262fb2;
    }
  }
LAB_180263912:
  *(undefined8 *)(puVar24 + -8) = 0x18026391b;
  FUN_18000f890(&local_68);
LAB_18026391b:
  *(undefined8 *)(puVar24 + -8) = 0x180263927;
  return;
}



/* ===== 180263950 FUN_180263950 ===== */

void FUN_180263950(void)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int local_res8;
  undefined4 uStackX_c;
  undefined4 local_res10 [2];
  longlong local_res18;
  undefined *local_res20;
  
  FUN_180260420();
  FUN_180260550();
  local_res20 = &DAT_1809f3520;
  iVar3 = FUN_1804e4d70(&DAT_1809f3520);
  lVar7 = DAT_180cf9f10;
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809f356c == 0x7fffffff) {
    DAT_1809f356c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  if ((((DAT_180ccf89e == '\0') && (DAT_180cf9f10 != 0)) && (DAT_180961b70 != 0)) &&
     (DAT_180961b90 != 0)) {
    iVar3 = FUN_180011200(DAT_180cf9f10 + 0x90);
    if (DAT_180cd1304 == '\0') {
      FUN_1803a0b60(&local_res8);
      DAT_181108a00 = CONCAT44(uStackX_c,local_res8);
      DAT_1811089f8 = FUN_1803a0c50(&local_res8);
      DAT_180cd1304 = '\x01';
      lVar7 = DAT_180cf9f10;
    }
    else {
    }
    lVar6 = DAT_1811089f8;
    if ((iVar3 != 0) && (DAT_1811089f8 != 0)) {
      if (DAT_180cf9ec8 == 0) {
        DAT_180cf9ec8 = FUN_1801d6450("scripts/propdata.vdata");
        lVar7 = DAT_180cf9f10;
      }
      if (((DAT_180cf9ee4 == 0) ||
          (lVar6 = FUN_18000f3a0(lVar6 + (ulonglong)DAT_180cf9ee4), lVar6 == 0)) ||
         (DAT_180cf9eec == 0)) {
        iVar4 = 0;
      }
      else {
        iVar4 = FUN_180011200((ulonglong)DAT_180cf9eec + lVar6);
      }
      local_res18 = FUN_18000f3a0(lVar7 + 0x98);
      local_res10[0] = 0;
      iVar10 = 0;
      iVar11 = 0;
      if ((0 < iVar3) && (local_res18 != 0)) {
        iVar12 = 0;
        do {
          lVar7 = FUN_18000f3a0(local_res18 + (longlong)iVar12 * 8);
          if ((lVar7 != 0) && (lVar6 = FUN_18000f3a0(lVar7 + 0x30), lVar6 != 0)) {
            local_res8 = -1;
            cVar2 = FUN_1802610e0(lVar7,&local_res8);
            if ((cVar2 != '\0') &&
               ((local_res8 == iVar4 && (lVar7 = FUN_180261100(lVar6), lVar7 != 0)))) {
              iVar5 = FUN_180011200(lVar7);
              lVar7 = FUN_18000f3a0(lVar7 + 8);
              if ((0 < iVar5) && (iVar9 = 0, lVar7 != 0)) {
                do {
                  lVar6 = FUN_18000f3a0(lVar7 + (longlong)iVar9 * 8);
                  if (lVar6 != 0) {
                    iVar11 = iVar11 + 1;
                    FUN_180262e10(lVar6,iVar4,local_res10);
                  }
                  iVar9 = iVar9 + 1;
                } while (iVar9 < iVar5);
              }
              iVar10 = iVar10 + 1;
              DAT_180ccf89e = '\x01';
            }
          }
          iVar12 = iVar12 + 1;
        } while (iVar12 < iVar3);
      }
      uVar1 = local_res10[0];
      if (DAT_180ccf89e != '\0') {
        uVar8 = FUN_1802611b0();
        FUN_1802b2560("[grenade breakables] table built: group %u, worlds %d, lump entities %d (classname not a plain string: %d), entries %zu | propdata %p root %p"
                      ,iVar4,iVar10,iVar11,uVar1,
                      (DAT_180cf9f28 - DAT_180cf9f20 >> 3) * 0x4ec4ec4ec4ec4ec5,DAT_180cf9ec8,uVar8)
        ;
      }
    }
  }
  FUN_1804e4e90(&DAT_1809f3520);
  return;
}



/* ===== 180263c50 FUN_180263c50 ===== */

void FUN_180263c50(void)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = FUN_1804e4d70(&DAT_1809f3520);
  lVar1 = DAT_180cf9f28;
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809f356c == 0x7fffffff) {
    DAT_1809f356c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  lVar3 = DAT_180cf9f20;
  if (DAT_180cf9f20 != DAT_180cf9f28) {
    do {
      FUN_18000f890(lVar3 + 8);
      lVar3 = lVar3 + 0x68;
    } while (lVar3 != lVar1);
    DAT_180cf9f28 = DAT_180cf9f20;
  }
  DAT_180ccf89e = 0;
  FUN_18025ba80(&DAT_180ca1200);
  if (DAT_180cf9ec8 != 0) {
    FUN_1801d6440();
  }
  DAT_180cf9ec8 = 0;
  FUN_1804e4e90(&DAT_1809f3520);
  return;
}



/* ===== 180263d20 FUN_180263d20 ===== */

void FUN_180263d20(longlong *param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  uint uStack_4f;
  
  FUN_180260420();
  uVar3 = DAT_1808ac34c;
  uStack_4f = (uint)(uint3)uStack_4f;
  if ((DAT_180cf9ee4 == 0) ||
     (lVar5 = FUN_18000f3a0((ulonglong)DAT_180cf9ee4 + param_2), lVar5 == 0)) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = FUN_180011200(lVar5 + 0x10);
  }
  plVar7 = (longlong *)param_1[1];
  if (plVar7 == (longlong *)param_1[2]) {
    lVar5 = (longlong)plVar7 - *param_1;
    lVar5 = lVar5 / 6 + (lVar5 >> 0x3f);
    uVar10 = 0x555555555555555;
    lVar5 = (lVar5 >> 3) - (lVar5 >> 0x3f);
    if (lVar5 == 0x555555555555555) {
                    /* WARNING: Subroutine does not return */
      FUN_1800118d0();
    }
    uVar1 = lVar5 + 1;
    uVar8 = (param_1[2] - *param_1 >> 4) * -0x5555555555555555;
    if (uVar8 <= 0x555555555555555 - (uVar8 >> 1)) {
      uVar8 = (uVar8 >> 1) + uVar8;
      uVar10 = uVar1;
      if (uVar1 <= uVar8) {
        uVar10 = uVar8;
      }
      if (0x555555555555555 < uVar10) {
                    /* WARNING: Subroutine does not return */
        FUN_18000d840();
      }
    }
    lVar6 = FUN_18000fb70(uVar10 * 0x30);
    lVar5 = lVar5 * 0x30;
    *(undefined4 *)(lVar5 + 0x18 + lVar6) = 0;
    *(undefined4 *)(lVar5 + 0x1c + lVar6) = uVar3;
    *(longlong *)(lVar5 + lVar6) = param_2;
    *(undefined4 *)(lVar5 + 8 + lVar6) = uVar4;
    *(undefined8 *)(lVar5 + 0xc + lVar6) = 0;
    *(undefined4 *)(lVar5 + 0x14 + lVar6) = 0;
    *(undefined4 *)(lVar5 + 0x20 + lVar6) = 0;
    *(undefined4 *)(lVar5 + 0x24 + lVar6) = 0x1000000;
    *(undefined1 *)(lVar5 + 0x28 + lVar6) = 0;
    *(uint *)(lVar5 + 0x29 + lVar6) = uStack_4f;
    *(undefined2 *)(lVar5 + 0x2d + lVar6) = 0;
    *(undefined1 *)(lVar5 + 0x2f + lVar6) = 0;
    plVar2 = (longlong *)*param_1;
    if (plVar7 == (longlong *)param_1[1]) {
      lVar9 = param_1[1] - (longlong)plVar2;
      lVar5 = lVar6;
      plVar7 = plVar2;
    }
    else {
      FUN_180540530(lVar6,plVar2,(longlong)plVar7 - (longlong)plVar2);
      lVar5 = lVar5 + 0x30 + lVar6;
      lVar9 = param_1[1] - (longlong)plVar7;
    }
    FUN_180540530(lVar5,plVar7,lVar9);
    FUN_180264460(param_1,lVar6,uVar1,uVar10);
  }
  else {
    *(uint *)((longlong)plVar7 + 0x29) = uStack_4f;
    *(undefined2 *)((longlong)plVar7 + 0x2d) = 0;
    *(undefined1 *)((longlong)plVar7 + 0x2f) = 0;
    *(undefined4 *)(plVar7 + 3) = 0;
    *(undefined4 *)((longlong)plVar7 + 0x1c) = uVar3;
    *plVar7 = param_2;
    *(undefined4 *)(plVar7 + 1) = uVar4;
    *(undefined8 *)((longlong)plVar7 + 0xc) = 0;
    *(undefined4 *)((longlong)plVar7 + 0x14) = 0;
    *(undefined4 *)(plVar7 + 4) = 0;
    *(undefined4 *)((longlong)plVar7 + 0x24) = 0x1000000;
    *(undefined1 *)(plVar7 + 5) = 0;
    param_1[1] = param_1[1] + 0x30;
  }
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* ===== 180263f80 FUN_180263f80 ===== */

ulonglong FUN_180263f80(longlong param_1)

{
  float fVar1;
  int iVar2;
  bool bVar3;
  float fVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  uint7 uVar9;
  ulonglong uVar8;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  lVar7 = FUN_180262920();
  uVar8 = 0;
  if (lVar7 == 0) goto LAB_180264024;
  uVar9 = (uint7)((ulonglong)lVar7 >> 8);
  if ((*(char *)(lVar7 + 0x24) == '\0') || (*(char *)(lVar7 + 0x25) != '\0')) {
    uVar8 = (ulonglong)uVar9 << 8;
  }
  else {
    uVar8 = CONCAT71(uVar9,1);
  }
  iVar2 = *(int *)(lVar7 + 0xc);
  if (iVar2 != 1) {
    cVar5 = (char)uVar8;
    if (iVar2 == 4) {
      if (*(int *)(lVar7 + 0x14) < 1) goto LAB_180264024;
    }
    else {
      if ((iVar2 != 2) || (*(int *)(lVar7 + 0x14) < 1)) goto LAB_180264024;
      if (cVar5 != '\0') goto LAB_180263fe1;
      cVar5 = *(char *)(lVar7 + 0x26);
    }
    if (cVar5 == '\0') goto LAB_180264024;
  }
LAB_180263fe1:
  iVar10 = *(int *)(lVar7 + 0x10);
  if ((*(char *)(lVar7 + 0x24) == '\0') || (*(char *)(lVar7 + 0x26) != '\0')) {
    return CONCAT71((int7)(uVar8 >> 8),iVar10 < 1);
  }
  if (iVar10 < 1) goto LAB_1802640d0;
  if ((*(char *)(lVar7 + 0x28) != '\0') || (*(char *)(lVar7 + 0x25) != '\0')) goto LAB_180264024;
  fVar13 = *(float *)(lVar7 + 0x1c) * DAT_1808ac864;
  uVar6 = *(uint *)(lVar7 + 0x20);
  uVar8 = (ulonglong)uVar6;
  if (iVar2 == 1) {
    if (10 < (int)uVar6) goto LAB_180264024;
  }
  else if (fVar13 < (float)(int)uVar6) goto LAB_180264024;
  fVar1 = *(float *)(lVar7 + 0x18);
  fVar11 = (float)FUN_18053f0d0();
  fVar4 = DAT_1808ac34c;
  fVar12 = fVar1 + (fVar13 - fVar11);
  fVar13 = fVar13 - (fVar13 - fVar11);
  bVar3 = DAT_1808ac34c <= fVar12;
  *(float *)(lVar7 + 0x18) = fVar12;
  if (bVar3) {
    fVar13 = fVar13 + fVar4;
    *(float *)(lVar7 + 0x18) = fVar12 - fVar4;
  }
  uVar6 = (uint)fVar13;
  uVar8 = (ulonglong)uVar6;
  if (iVar10 < (int)uVar6) {
    *(undefined4 *)(lVar7 + 0x10) = 0;
    iVar10 = 0;
LAB_1802640a8:
    *(undefined1 *)(param_1 + 0x18) = 1;
  }
  else {
    iVar10 = iVar10 - uVar6;
    *(int *)(lVar7 + 0x10) = iVar10;
    if ((uVar6 != 0) || (uVar8 = (ulonglong)(uint)fVar1, *(float *)(lVar7 + 0x18) != fVar1))
    goto LAB_1802640a8;
  }
  if (0 < iVar10) {
LAB_180264024:
    return uVar8 & 0xffffffffffffff00;
  }
  *(undefined1 *)(param_1 + 0x18) = 1;
  *(undefined2 *)(lVar7 + 0x24) = 0;
  *(undefined1 *)(lVar7 + 0x27) = 1;
  if (iVar2 != 1) {
    *(undefined1 *)(lVar7 + 0x26) = 1;
  }
LAB_1802640d0:
  return CONCAT71((int7)(uVar8 >> 8),1);
}



/* ===== 180264100 FUN_180264100 ===== */

undefined4 * FUN_180264100(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  ulonglong uVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined4 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  longlong lVar12;
  undefined4 *puVar13;
  undefined4 uVar14;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  
  lVar7 = DAT_180cf9f20;
  uVar8 = 0x276276276276276;
  lVar4 = (DAT_180cf9f28 - DAT_180cf9f20 >> 3) * 0x4ec4ec4ec4ec4ec5;
  if (lVar4 == 0x276276276276276) {
                    /* WARNING: Subroutine does not return */
    FUN_18000fb10();
  }
  uVar1 = lVar4 + 1;
  uVar6 = (DAT_180cf9f30 - DAT_180cf9f20 >> 3) * 0x4ec4ec4ec4ec4ec5;
  if (uVar6 <= 0x276276276276276 - (uVar6 >> 1)) {
    uVar6 = (uVar6 >> 1) + uVar6;
    uVar8 = uVar1;
    if (uVar1 <= uVar6) {
      uVar8 = uVar6;
    }
    if (0x276276276276276 < uVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  lVar5 = FUN_18000fb70(uVar8 * 0x68);
  puVar10 = auStack_38;
  puVar11 = auStack_38;
  puVar13 = (undefined4 *)(((param_2 - lVar7) / 0x68) * 0x68 + lVar5);
  *puVar13 = *param_3;
  *(undefined8 *)(puVar13 + 2) = 0;
  *(undefined8 *)(puVar13 + 4) = 0;
  *(undefined8 *)(puVar13 + 6) = 0;
  *(undefined8 *)(puVar13 + 8) = 0;
  uVar3 = *(undefined8 *)(param_3 + 4);
  *(undefined8 *)(puVar13 + 2) = *(undefined8 *)(param_3 + 2);
  *(undefined8 *)(puVar13 + 4) = uVar3;
  uVar3 = *(undefined8 *)(param_3 + 8);
  *(undefined8 *)(puVar13 + 6) = *(undefined8 *)(param_3 + 6);
  *(undefined8 *)(puVar13 + 8) = uVar3;
  *(undefined8 *)(param_3 + 6) = 0;
  *(undefined8 *)(param_3 + 8) = 0xf;
  *(undefined1 *)(param_3 + 2) = 0;
  puVar13[10] = param_3[10];
  *(undefined8 *)(puVar13 + 0xb) = *(undefined8 *)(param_3 + 0xb);
  puVar13[0xd] = param_3[0xd];
  uVar14 = (undefined4)*(undefined8 *)(param_3 + 0xe);
  *(undefined8 *)(puVar13 + 0xe) = *(undefined8 *)(param_3 + 0xe);
  puVar13[0x10] = param_3[0x10];
  puVar13[0x11] = param_3[0x11];
  *(undefined1 *)(puVar13 + 0x12) = *(undefined1 *)(param_3 + 0x12);
  puVar13[0x13] = param_3[0x13];
  *(undefined1 *)(puVar13 + 0x14) = *(undefined1 *)(param_3 + 0x14);
  *(undefined1 *)((longlong)puVar13 + 0x51) = *(undefined1 *)((longlong)param_3 + 0x51);
  puVar13[0x15] = param_3[0x15];
  puVar13[0x16] = param_3[0x16];
  puVar13[0x17] = param_3[0x17];
  puVar13[0x18] = param_3[0x18];
  lVar7 = lVar5;
  lVar4 = DAT_180cf9f20;
  lVar12 = DAT_180cf9f28;
  if (param_2 == DAT_180cf9f28) {
    lVar7 = DAT_180cf9f28;
    lVar4 = lVar5;
    lVar12 = DAT_180cf9f20;
    if (DAT_180cf9f20 != DAT_180cf9f28) {
      do {
        uVar14 = FUN_1802643b0(uVar14,lVar4);
        lVar12 = lVar12 + 0x68;
        lVar4 = lVar4 + 0x68;
      } while (lVar12 != lVar7);
    }
  }
  else {
    for (; DAT_180cf9f28 = lVar12, lVar4 != param_2; lVar4 = lVar4 + 0x68) {
      uVar14 = FUN_1802643b0(uVar14,lVar7);
      lVar7 = lVar7 + 0x68;
      lVar12 = DAT_180cf9f28;
    }
    puVar9 = puVar13;
    if (param_2 != lVar12) {
      do {
        puVar9 = puVar9 + 0x1a;
        uVar14 = FUN_1802643b0(uVar14,puVar9,param_2);
        param_2 = param_2 + 0x68;
      } while (param_2 != lVar12);
    }
  }
  lVar4 = DAT_180cf9f28;
  lVar7 = DAT_180cf9f20;
  if (DAT_180cf9f20 == 0) goto LAB_180264361;
  for (; lVar7 != lVar4; lVar7 = lVar7 + 0x68) {
    FUN_18000f890(lVar7 + 8);
  }
  lVar7 = DAT_180cf9f20;
  if ((ulonglong)((DAT_180cf9f30 - DAT_180cf9f20 >> 3) * 8) < 0x1000) {
LAB_180264356:
    puVar11 = puVar10;
  }
  else {
    lVar7 = *(longlong *)(DAT_180cf9f20 + -8);
    if (0x1f < (DAT_180cf9f20 - lVar7) - 8U) {
      lVar7 = 5;
      pcVar2 = (code *)swi(0x29);
      (*pcVar2)(5);
      puVar10 = auStack_30;
      goto LAB_180264356;
    }
  }
  *(undefined8 *)(puVar11 + -8) = 0x180264361;
  thunk_FUN_1803d64e0(lVar7);
LAB_180264361:
  DAT_180cf9f20 = lVar5;
  DAT_180cf9f28 = uVar1 * 0x68 + lVar5;
  DAT_180cf9f30 = uVar8 * 0x68 + lVar5;
  return puVar13;
}



/* ===== 1802643b0 FUN_1802643b0 ===== */

void FUN_1802643b0(undefined8 param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  
  *param_2 = *param_3;
  *(undefined8 *)(param_2 + 2) = 0;
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined8 *)(param_2 + 6) = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  uVar1 = *(undefined8 *)(param_3 + 4);
  *(undefined8 *)(param_2 + 2) = *(undefined8 *)(param_3 + 2);
  *(undefined8 *)(param_2 + 4) = uVar1;
  uVar1 = *(undefined8 *)(param_3 + 8);
  *(undefined8 *)(param_2 + 6) = *(undefined8 *)(param_3 + 6);
  *(undefined8 *)(param_2 + 8) = uVar1;
  *(undefined1 *)(param_3 + 2) = 0;
  *(undefined8 *)(param_3 + 6) = 0;
  *(undefined8 *)(param_3 + 8) = 0xf;
  param_2[10] = param_3[10];
  *(undefined8 *)(param_2 + 0xb) = *(undefined8 *)(param_3 + 0xb);
  param_2[0xd] = param_3[0xd];
  *(undefined8 *)(param_2 + 0xe) = *(undefined8 *)(param_3 + 0xe);
  param_2[0x10] = param_3[0x10];
  param_2[0x11] = param_3[0x11];
  *(undefined1 *)(param_2 + 0x12) = *(undefined1 *)(param_3 + 0x12);
  param_2[0x13] = param_3[0x13];
  *(undefined1 *)(param_2 + 0x14) = *(undefined1 *)(param_3 + 0x14);
  *(undefined1 *)((longlong)param_2 + 0x51) = *(undefined1 *)((longlong)param_3 + 0x51);
  param_2[0x15] = param_3[0x15];
  param_2[0x16] = param_3[0x16];
  param_2[0x17] = param_3[0x17];
  param_2[0x18] = param_3[0x18];
  return;
}



/* ===== 180264460 FUN_180264460 ===== */

void FUN_180264460(ulonglong *param_1,ulonglong param_2,longlong param_3,longlong param_4)

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
  if (uVar5 == 0) goto LAB_1802644ce;
  uVar2 = uVar5;
  if ((ulonglong)(((longlong)(param_1[2] - uVar5) >> 4) << 4) < 0x1000) {
LAB_1802644c6:
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
      goto LAB_1802644c6;
    }
  }
  *(undefined8 *)(puVar4 + -8) = 0x1802644ce;
  thunk_FUN_1803d64e0(uVar2);
LAB_1802644ce:
  *param_1 = param_2;
  param_1[1] = param_3 * 0x30 + param_2;
  param_1[2] = param_4 * 0x30 + param_2;
  return;
}



/* ===== 180264500 FUN_180264500 ===== */

void FUN_180264500(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong local_res10 [3];
  
  if (DAT_1809211a0 != '\0') {
    if (DAT_180cd1304 == '\0') {
      FUN_1803a0b60(local_res10);
      lVar2 = local_res10[0];
    }
    else {
      lVar2 = DAT_181108a00;
    }
    if (((lVar2 != 0) && (lVar1 = FUN_180273f90(param_1,"attacker"), lVar1 == lVar2)) &&
       (lVar1 = FUN_180273f90(param_1,"userid"), lVar1 != lVar2)) {
      DAT_180cf9f40 = GetTickCount64();
      LOCK();
      UNLOCK();
    }
  }
  return;
}



/* ===== 180264580 FUN_180264580 ===== */

void FUN_180264580(void)

{
  (*DAT_180962170)(DAT_180961a38,0);
  return;
}



/* ===== 1802645a0 FUN_1802645a0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802645a0(longlong param_1)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  char cVar4;
  short sVar5;
  int iVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong *plVar9;
  float *pfVar10;
  uint *puVar11;
  int *piVar12;
  int *piVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  uint uVar17;
  float fVar18;
  uint uVar19;
  int local_res8 [6];
  longlong local_res20;
  float local_a8;
  float local_a4;
  float local_a0;
  undefined1 local_98 [104];
  
  if (param_1 == 0) {
    return;
  }
  if (DAT_180cd1304 == '\0') {
    FUN_1803a0b60(local_res8);
    DAT_181108a00 = CONCAT44(local_res8[1],local_res8[0]);
    local_res20 = FUN_1803a0c50(local_res8);
    DAT_180cd1304 = '\x01';
  }
  else {
    local_res20 = DAT_1811089f8;
  }
  lVar3 = local_res20;
  DAT_1811089f8 = local_res20;
  if (((local_res20 == 0) || (DAT_180ca09f0 == 0)) ||
     (iVar6 = FUN_180011200((ulonglong)DAT_180ca09f0 + local_res20), 999 < iVar6 - 1U)) {
    LOCK();
    UNLOCK();
    LOCK();
    UNLOCK();
    DAT_180ccf984 = 0;
    DAT_180ccf986 = 0;
    return;
  }
  if ((DAT_180ca0a28 == 0) ||
     (cVar4 = FUN_180011220(lVar3 + (ulonglong)DAT_180ca0a28), cVar4 == '\0')) {
    iVar6 = 0;
  }
  else {
    if (((lVar3 != 0) && (DAT_180ca0a0c != 0)) &&
       ((DAT_180ca0a10 != 0 && (lVar8 = FUN_18000f3a0(lVar3 + (ulonglong)DAT_180ca0a0c), lVar8 != 0)
        ))) {
      uVar7 = FUN_180011200((ulonglong)DAT_180ca0a10 + lVar8);
      plVar9 = (longlong *)FUN_1803a0940(local_res8,uVar7);
      if ((*plVar9 != 0) && (DAT_1809619b8 != 0)) {
        local_res8[4] = 2;
        local_res8[0] = 1;
        local_res8[2] = FUN_180011200(*plVar9 + (ulonglong)DAT_1809619b8);
        piVar13 = local_res8;
        if (0 < local_res8[2]) {
          piVar13 = local_res8 + 2;
        }
        piVar12 = local_res8 + 4;
        if (local_res8[2] < 3) {
          piVar12 = piVar13;
        }
        iVar6 = *piVar12;
        goto LAB_180264728;
      }
    }
    iVar6 = 1;
  }
LAB_180264728:
  if ((DAT_180ca12ef == '\0') || (iVar6 < 1)) {
    DAT_180ccf986 = 0;
  }
  else {
    DAT_180ccf986 = 1;
  }
  LOCK();
  UNLOCK();
  pfVar10 = (float *)FUN_1800111b0(&local_a8,(ulonglong)DAT_180961ff0 + param_1);
  fVar14 = *pfVar10;
  fVar1 = pfVar10[1];
  fVar2 = pfVar10[2];
  FUN_1803a0780(&local_res20,&local_a8);
  if (DAT_180ca0a34 == 0) {
    fVar15 = 0.0;
    fVar18 = 0.0;
    fVar16 = 0.0;
  }
  else {
    pfVar10 = (float *)FUN_1800111b0(local_98,lVar3 + (ulonglong)DAT_180ca0a34);
    fVar15 = *pfVar10;
    fVar18 = pfVar10[1];
    fVar16 = pfVar10[2];
  }
  if (((((uint)fVar16 & 0x7f800000) == 0x7f800000) || (fVar16 <= DAT_1808ac34c)) ||
     (DAT_1808acb08 <= fVar16)) {
    fVar16 = DAT_1808acab0;
  }
  else {
    local_a8 = local_a8 + fVar15;
    local_a4 = local_a4 + fVar18;
  }
  local_a8 = fVar14 - local_a8;
  local_a4 = fVar1 - local_a4;
  fVar15 = fVar2 - (fVar16 + local_a0);
  fVar15 = local_a8 * local_a8 + local_a4 * local_a4 + fVar15 * fVar15;
  if (fVar15 < 0.0) {
    fVar15 = (float)FUN_18051af10(fVar15);
  }
  else {
    fVar15 = SQRT(fVar15);
  }
  sVar5 = thunk_FUN_1805266e0(fVar15);
  if ((0 < sVar5) || (fVar15 <= DAT_1808ac864)) {
    LOCK();
    DAT_180ccf984 = 0;
    UNLOCK();
    if (0 < sVar5) {
      fVar15 = 0.0;
    }
  }
  else {
    LOCK();
    DAT_180ccf984 = 1;
    UNLOCK();
  }
  LOCK();
  UNLOCK();
  DAT_180cf9f50 = fVar15;
  puVar11 = (uint *)FUN_1800111b0(local_98,(ulonglong)DAT_180961ff4 + param_1);
  uVar19 = *puVar11;
  if ((((uVar19 & 0x7f800000) == 0x7f800000) ||
      (uVar17 = puVar11[1], (uVar17 & 0x7f800000) == 0x7f800000)) ||
     ((DAT_1808acaf4 < (float)(uVar19 & _DAT_1808ade90) ||
      (DAT_1808acbd0 < (float)(uVar17 & _DAT_1808ade90))))) {
    if (((DAT_180962170 != 0) && (DAT_180961a38 != 0)) &&
       (lVar8 = FUN_180264580(), lVar8 - 0x10000U < 0x7ffffffeffff)) {
      puVar11 = (uint *)FUN_1800111b0(local_98,lVar8);
      uVar19 = *puVar11;
      if (((uVar19 & 0x7f800000) != 0x7f800000) &&
         (uVar17 = puVar11[1], (uVar17 & 0x7f800000) != 0x7f800000)) goto LAB_1802649ac;
    }
    if ((lVar3 == 0) || (DAT_180ca0a20 == 0)) {
      uVar19 = 0;
      uVar17 = 0;
    }
    else {
      puVar11 = (uint *)FUN_1800111b0(local_98,lVar3 + (ulonglong)DAT_180ca0a20);
      uVar19 = *puVar11;
      uVar17 = puVar11[1];
    }
  }
LAB_1802649ac:
  LOCK();
  UNLOCK();
  LOCK();
  UNLOCK();
  LOCK();
  UNLOCK();
  LOCK();
  UNLOCK();
  LOCK();
  UNLOCK();
  LOCK();
  DAT_180ccf985 = 1;
  UNLOCK();
  DAT_180cf9f38 = fVar14;
  DAT_180cf9f48 = fVar2;
  DAT_180cf9f4c = uVar17;
  DAT_180cf9f58 = uVar19;
  DAT_180cf9f68 = fVar1;
  fVar14 = (float)FUN_18000f3d0(param_1 + 0x498);
  if ((0.0 < fVar14) && (fVar14 < DAT_1808acb58)) {
    LOCK();
    *(float *)(&DAT_180cf9f5c + (longlong)iVar6 * 4) = fVar14;
    UNLOCK();
  }
  return;
}



/* ===== 180264a70 FUN_180264a70 ===== */

undefined8 * FUN_180264a70(longlong param_1,char *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  int iVar3;
  ushort uVar4;
  uint uVar5;
  ushort uVar6;
  
  lVar1 = *(longlong *)(param_1 + 0x50);
  if ((lVar1 != 0) && (uVar6 = *(ushort *)(param_1 + 0x4a) & 0x7fff, uVar6 != 0)) {
    uVar4 = *(ushort *)(param_1 + 0x58);
    for (uVar5 = 0; (uVar4 != 0xffff && (uVar5 < uVar6)); uVar5 = uVar5 + 1) {
      if (uVar6 <= uVar4) {
        return (undefined8 *)0x0;
      }
      puVar2 = *(undefined8 **)(lVar1 + (ulonglong)uVar4 * 0x10);
      if (((puVar2 != (undefined8 *)0x0) && ((char *)*puVar2 != (char *)0x0)) &&
         (iVar3 = strcmp((char *)*puVar2,param_2), iVar3 == 0)) {
        return puVar2;
      }
      uVar4 = *(ushort *)(lVar1 + 10 + (ulonglong)uVar4 * 0x10);
    }
  }
  return (undefined8 *)0x0;
}



/* ===== 180264b10 FUN_180264b10 ===== */

undefined8 FUN_180264b10(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  (**(code **)(*param_1 + 0x150))(param_1,param_3,param_2,0);
  return 1;
}



/* ===== 180264b50 FUN_180264b50 ===== */

undefined8 FUN_180264b50(longlong *param_1)

{
  (**(code **)(*param_1 + 0x158))();
  return 1;
}



/* ===== 180264b70 FUN_180264b70 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_180264b70(char *param_1)

{
  byte *pbVar1;
  code *pcVar2;
  undefined8 ****ppppuVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  size_t sVar6;
  longlong lVar7;
  HMODULE hModule;
  FARPROC pFVar8;
  longlong lVar9;
  ulonglong uVar10;
  PSRWLOCK SRWLock;
  undefined8 ****ppppuVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  ulonglong uVar14;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [24];
  undefined1 local_68 [16];
  char *local_58;
  undefined8 ****local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  ulonglong local_38;
  ulonglong local_30;
  
  puVar13 = auStack_88;
  local_30 = DAT_180919500 ^ (ulonglong)auStack_88;
  if (param_1 != (char *)0x0) {
    local_58 = param_1;
    AcquireSRWLockShared((PSRWLOCK)&DAT_180cf9f70);
    local_40 = 0;
    local_50 = (undefined8 ****)0x0;
    uStack_48 = 0;
    local_38 = 0;
    sVar6 = strlen(param_1);
    FUN_1800133a0(&local_50,param_1,sVar6);
    uVar4 = local_38;
    ppppuVar3 = local_50;
    uVar14 = 0xcbf29ce484222325;
    ppppuVar11 = &local_50;
    if (0xf < local_38) {
      ppppuVar11 = local_50;
    }
    uVar10 = 0;
    if (local_40 != 0) {
      do {
        pbVar1 = (byte *)(uVar10 + (longlong)ppppuVar11);
        uVar10 = uVar10 + 1;
        uVar14 = (uVar14 ^ *pbVar1) * 0x100000001b3;
      } while (uVar10 < local_40);
    }
    lVar7 = FUN_1800268a0(&DAT_180ca1240,local_68,&local_50,uVar14);
    lVar9 = DAT_180ca1248;
    if (*(longlong *)(lVar7 + 8) != 0) {
      lVar9 = *(longlong *)(lVar7 + 8);
    }
    if (uVar4 < 0x10) {
LAB_180264c88:
      puVar12 = auStack_88;
      SRWLock = (PSRWLOCK)&DAT_180cf9f70;
      if (lVar9 == DAT_180ca1248) goto LAB_180264cb2;
      lVar9 = *(longlong *)(lVar9 + 0x30);
      ReleaseSRWLockShared((PSRWLOCK)&DAT_180cf9f70);
      puVar13 = auStack_88;
      puVar5 = auStack_88;
      if (lVar9 != 0) goto LAB_180264d4e;
    }
    else {
      uVar14 = uVar4 + 1;
      ppppuVar11 = ppppuVar3;
      if (uVar14 < 0x1000) {
LAB_180264c79:
        thunk_FUN_1803d64e0(ppppuVar11,uVar14);
        goto LAB_180264c88;
      }
      ppppuVar11 = (undefined8 ****)ppppuVar3[-1];
      if ((ulonglong)((longlong)ppppuVar3 + (-8 - (longlong)ppppuVar11)) < 0x20) {
        uVar14 = uVar4 + 0x28;
        goto LAB_180264c79;
      }
      SRWLock = (PSRWLOCK)&DAT_00000005;
      pcVar2 = (code *)swi(0x29);
      (*pcVar2)();
      puVar12 = auStack_80;
LAB_180264cb2:
      *(undefined8 *)(puVar12 + -8) = 0x180264cb8;
      ReleaseSRWLockShared(SRWLock);
      puVar5 = puVar12;
    }
    puVar13 = puVar5;
    if (DAT_1811160f0 == 0) {
      *(undefined8 *)(puVar13 + -8) = 0x180264cd1;
      hModule = GetModuleHandleA("tier0.dll");
      if (hModule != (HMODULE)0x0) {
        *(undefined8 *)(puVar13 + -8) = 0x180264ce6;
        pFVar8 = GetProcAddress(hModule,"CreateInterface");
        if (pFVar8 != (FARPROC)0x0) {
          *(undefined8 *)(puVar13 + -8) = 0x180264cf6;
          DAT_1811160f0 = (*pFVar8)("VEngineCvar007",0);
          if (DAT_1811160f0 != 0) goto LAB_180264d02;
        }
      }
    }
    else {
LAB_180264d02:
      *(undefined8 *)(puVar13 + -8) = 0x180264d0d;
      lVar9 = FUN_180264a70(DAT_1811160f0,param_1);
      *(longlong *)(puVar13 + 0x20) = lVar9;
      if (lVar9 != 0) {
        *(undefined8 *)(puVar13 + -8) = 0x180264d24;
        AcquireSRWLockExclusive((PSRWLOCK)&DAT_180cf9f70);
        *(undefined8 *)(puVar13 + -8) = 0x180264d38;
        FUN_180264da0();
        *(undefined8 *)(puVar13 + -8) = 0x180264d45;
        ReleaseSRWLockExclusive((PSRWLOCK)&DAT_180cf9f70);
        lVar9 = *(longlong *)(puVar13 + 0x20);
        goto LAB_180264d4e;
      }
    }
  }
  lVar9 = 0;
LAB_180264d4e:
  *(undefined8 *)(puVar13 + -8) = 0x180264d5b;
  return lVar9;
}



/* ===== 180264d70 FUN_180264d70 ===== */

undefined8 FUN_180264d70(longlong param_1)

{
  if (param_1 == 0) {
    return 0;
  }
  return *(undefined8 *)(param_1 + 0x58);
}



/* ===== 180264d90 FUN_180264d90 ===== */

void FUN_180264d90(longlong param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x58) = param_2;
  }
  return;
}



/* ===== 180264da0 FUN_180264da0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong *
FUN_180264da0(undefined8 param_1,longlong *param_2,undefined8 *param_3,undefined8 *param_4)

{
  char *_Str;
  longlong lVar1;
  int iVar2;
  undefined8 *puVar3;
  size_t sVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *local_58;
  longlong local_50;
  
  puVar8 = &DAT_180ca1248;
  puVar3 = (undefined8 *)FUN_1804ecaa0(0x38,param_2,param_3,param_4,&DAT_180ca1248,0);
  _Str = (char *)*param_3;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  puVar9 = puVar3;
  sVar4 = strlen(_Str);
  FUN_1800133a0(puVar3 + 2,_Str,sVar4);
  puVar3[6] = *param_4;
  puVar6 = puVar3 + 2;
  if (0xf < (ulonglong)puVar3[5]) {
    puVar6 = (undefined8 *)puVar3[2];
  }
  uVar7 = 0xcbf29ce484222325;
  uVar5 = 0;
  if (puVar3[4] != 0) {
    do {
      uVar7 = (uVar7 ^ *(byte *)(uVar5 + (longlong)puVar6)) * 0x100000001b3;
      uVar5 = uVar5 + 1;
    } while (uVar5 < (ulonglong)puVar3[4]);
  }
  FUN_1800268a0(&DAT_180ca1240,&local_58,puVar3 + 2,uVar7,puVar8,puVar9);
  if (local_50 != 0) {
    *param_2 = local_50;
    *(undefined1 *)(param_2 + 1) = 0;
    if (puVar3 == (undefined8 *)0x0) {
      return param_2;
    }
    FUN_18000f890(puVar3 + 2);
    thunk_FUN_1803d64e0(puVar3,0x38);
    return param_2;
  }
  if (DAT_180ca1250 == 0x492492492492492) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4cd0("unordered_map/set too long");
  }
  if (_DAT_180ca1240 < (float)(DAT_180ca1250 + 1) / (float)DAT_180ca1278) {
    FUN_1800280b0(&DAT_180ca1240);
    puVar6 = *(undefined8 **)(DAT_180ca1258 + 8 + (DAT_180ca1270 & uVar7) * 0x10);
    local_58 = DAT_180ca1248;
    if (puVar6 != DAT_180ca1248) {
      puVar9 = *(undefined8 **)(DAT_180ca1258 + (DAT_180ca1270 & uVar7) * 0x10);
      uVar5 = puVar3[5];
      sVar4 = puVar3[4];
      local_58 = puVar6;
      while( true ) {
        puVar6 = local_58 + 2;
        if (0xf < (ulonglong)local_58[5]) {
          puVar6 = (undefined8 *)*puVar6;
        }
        if (uVar5 < 0x10) {
          puVar8 = puVar3 + 2;
        }
        else {
          puVar8 = (undefined8 *)puVar3[2];
        }
        if ((sVar4 == local_58[4]) &&
           ((sVar4 == 0 || (iVar2 = memcmp(puVar8,puVar6,sVar4), iVar2 == 0)))) break;
        if (local_58 == puVar9) goto LAB_180264fbf;
        local_58 = (undefined8 *)local_58[1];
      }
      local_58 = (undefined8 *)*local_58;
    }
  }
LAB_180264fbf:
  puVar6 = (undefined8 *)local_58[1];
  DAT_180ca1250 = DAT_180ca1250 + 1;
  *puVar3 = local_58;
  puVar3[1] = puVar6;
  *puVar6 = puVar3;
  local_58[1] = puVar3;
  lVar1 = DAT_180ca1258;
  uVar7 = DAT_180ca1270 & uVar7;
  puVar9 = *(undefined8 **)(DAT_180ca1258 + uVar7 * 0x10);
  if (puVar9 == DAT_180ca1248) {
    *(undefined8 **)(DAT_180ca1258 + uVar7 * 0x10) = puVar3;
  }
  else {
    if (puVar9 == local_58) {
      *(undefined8 **)(DAT_180ca1258 + uVar7 * 0x10) = puVar3;
      goto LAB_180265019;
    }
    if (*(undefined8 **)(DAT_180ca1258 + 8 + uVar7 * 0x10) != puVar6) goto LAB_180265019;
  }
  *(undefined8 **)(lVar1 + 8 + uVar7 * 0x10) = puVar3;
LAB_180265019:
  *param_2 = (longlong)puVar3;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



/* ===== 180265050 FUN_180265050 ===== */

void FUN_180265050(code *param_1,undefined8 param_2)

{
  if (param_1 == (code *)0x0) {
    return;
  }
  (*param_1)(param_2);
  return;
}



/* ===== 180265070 FUN_180265070 ===== */

undefined8 FUN_180265070(void)

{
  if (DAT_1809621a8 == (code *)0x0) {
    return 0;
  }
  (*DAT_1809621a8)();
  return 1;
}



/* ===== 1802650a0 FUN_1802650a0 ===== */

void FUN_1802650a0(longlong param_1)

{
  (**(code **)(param_1 + 0x10))(0);
  return;
}



/* ===== 1802650c0 FUN_1802650c0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_1802650c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_68;
  if ((DAT_180962188 == (code *)0x0) || (DAT_180962190 == (code *)0x0)) {
    uVar1 = 0;
  }
  else {
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    (*DAT_180962188)(&local_48);
    (*DAT_180962190)(param_1,&local_48,param_4);
    uVar1 = 1;
  }
  return uVar1;
}



/* ===== 180265140 FUN_180265140 ===== */

void FUN_180265140(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint local_res10 [6];
  
  lVar2 = *(longlong *)(param_2 + 0x38);
  if (0x7ffffffefffe < lVar2 - 0x10000U) {
    uVar1 = FUN_18000f3a0(param_2 + 8);
    uVar3 = uVar1 & 0xfffffffffffffffc;
    if ((uVar1 & 1) != 0) {
      uVar3 = FUN_18000f3a0(uVar3);
    }
    lVar2 = FUN_180265050(DAT_1809621a0,uVar3);
    if (0x7ffffffefffe < lVar2 - 0x10000U) {
      return;
    }
    *(longlong *)(param_2 + 0x38) = lVar2;
  }
  if (lVar2 != 0) {
    *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 2;
    FUN_1800239d0(lVar2 + 0x18,param_1 + 0x60);
    FUN_1800239d0(lVar2 + 0x20,param_1 + 0x68);
    FUN_1800239d0(lVar2 + 0x28,param_1 + 0x70);
    local_res10[0] = FUN_180011200(lVar2 + 0x10);
    local_res10[0] = local_res10[0] | 7;
    FUN_180013280(lVar2 + 0x10,local_res10);
  }
  return;
}



/* ===== 180265200 FUN_180265200 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180265200(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  byte *pbVar5;
  byte *pbVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined1 local_68 [8];
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_b8;
  lVar1 = *(longlong *)(param_1 + 0x38);
  if (lVar1 - 0x10000U < 0x7ffffffeffff) {
    uVar2 = FUN_18000f3a0(lVar1 + 0x18);
    uVar3 = FUN_18000f3a0(lVar1 + 0x20);
    uVar4 = FUN_18000f3a0(lVar1 + 0x28);
  }
  else {
    uVar4 = 0;
    uVar3 = 0;
    uVar2 = 0;
  }
  pbVar5 = (byte *)((longlong)&local_98 + 1);
  local_78 = 0;
  uStack_90 = 0;
  local_98 = 8;
  local_68 = (undefined1  [8])0x0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_88 = 0;
  uStack_80 = 0;
  for (; 0x7f < uVar2; uVar2 = uVar2 >> 7) {
    *pbVar5 = (byte)uVar2 | 0x80;
    pbVar5 = pbVar5 + 1;
  }
  *pbVar5 = (byte)uVar2;
  pbVar5[1] = 0x10;
  pbVar5 = pbVar5 + 2;
  for (; 0x7f < uVar3; uVar3 = uVar3 >> 7) {
    *pbVar5 = (byte)uVar3 | 0x80;
    pbVar5 = pbVar5 + 1;
  }
  *pbVar5 = (byte)uVar3;
  pbVar6 = pbVar5 + 2;
  pbVar5[1] = 0x18;
  for (; 0x7f < uVar4; uVar4 = uVar4 >> 7) {
    *pbVar6 = (byte)uVar4 | 0x80;
    pbVar6 = pbVar6 + 1;
  }
  *pbVar6 = (byte)uVar4;
  local_68[1] = (char)(pbVar6 + 1) - (char)&local_98;
  local_68[0] = 0x1a;
  lVar7 = (longlong)(pbVar6 + 1) - (longlong)&local_98;
  FUN_180540530(local_68 + 2,&local_98,lVar7);
  lVar1 = *(longlong *)(param_1 + 0x40);
  if (lVar1 - 0x10000U < 0x7ffffffeffff) {
    uVar8 = *(undefined4 *)(lVar1 + 0x18);
    uVar9 = *(undefined4 *)(lVar1 + 0x1c);
    uVar10 = *(undefined4 *)(lVar1 + 0x20);
  }
  else {
    uVar8 = 0;
    uVar9 = 0;
    uVar10 = 0;
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
  *(undefined2 *)(local_68 + lVar7 + 2) = 0xf22;
  local_68[lVar7 + 4] = 0xd;
  *(undefined4 *)(local_68 + lVar7 + 5) = uVar8;
  local_68[lVar7 + 9] = 0x15;
  *(undefined4 *)(local_68 + lVar7 + 10) = uVar9;
  local_68[lVar7 + 0xe] = 0x1d;
  *(undefined4 *)(local_68 + lVar7 + 0xf) = uVar10;
  uVar2 = FUN_18000f3a0(param_1 + 8);
  uVar3 = uVar2 & 0xfffffffffffffffc;
  if ((uVar2 & 1) != 0) {
    uVar3 = FUN_18000f3a0(uVar3);
  }
  FUN_1802650c0(param_1 + 0x30,local_68,((int)(local_68 + lVar7 + 2) + 0x11) - (int)local_68,uVar3);
  return;
}



/* ===== 180265420 FUN_180265420 ===== */

longlong * FUN_180265420(longlong param_1)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  longlong *plVar4;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if (iVar1 < 0x20) {
    piVar2 = *(int **)(param_1 + 0x28);
    if ((((piVar2 != (int *)0x0) && (iVar1 < *piVar2)) &&
        (plVar4 = *(longlong **)(piVar2 + (longlong)iVar1 * 2 + 2),
        plVar4 + -0x2000 < (longlong *)0x7ffffffeffff)) && (*plVar4 != 0)) {
      *(int *)(param_1 + 0x20) = iVar1 + 1;
      plVar4[2] = 0;
      plVar4[3] = 0;
      *(undefined1 *)(plVar4 + 4) = 0;
      *(undefined8 *)((longlong)plVar4 + 0x24) = 0;
      *(undefined8 *)((longlong)plVar4 + 0x2c) = 0;
      *(undefined4 *)((longlong)plVar4 + 0x34) = 0;
      return plVar4;
    }
    plVar4 = (longlong *)FUN_180265050(DAT_180962198,*(undefined8 *)(param_1 + 0x18));
    if (plVar4 + -0x2000 < (longlong *)0x7ffffffeffff) {
      cVar3 = FUN_180265070(param_1 + 0x18,plVar4);
      if (cVar3 != '\0') {
        plVar4[2] = 0;
        plVar4[3] = 0;
        *(undefined1 *)(plVar4 + 4) = 0;
        *(undefined8 *)((longlong)plVar4 + 0x24) = 0;
        *(undefined8 *)((longlong)plVar4 + 0x2c) = 0;
        *(undefined4 *)((longlong)plVar4 + 0x34) = 0;
        return plVar4;
      }
    }
  }
  return (longlong *)0x0;
}



/* ===== 180265510 FUN_180265510 ===== */

void FUN_180265510(void)

{
  if ((DAT_180ccfae4 == '\0') && (DAT_1811089f0 != 0)) {
    DAT_180ccfae4 = '\x01';
    DAT_180cf9f94 = FUN_18038eaf0("CPlayer_MovementServices","m_flCmdUpMove");
    if (DAT_180cf9f94 == 0) {
      DAT_180cf9f94 = FUN_18038eaf0("CCSPlayer_MovementServices","m_flCmdUpMove");
    }
    DAT_180cf9f84 = FUN_18038eaf0("C_CSGameRulesProxy","m_pGameRules");
    DAT_180cf9f80 = FUN_18038eaf0("C_CSGameRules","m_bIsValveDS");
  }
  return;
}



/* ===== 1802655a0 FUN_1802655a0 ===== */

longlong * FUN_1802655a0(void)

{
  code *pcVar1;
  int iVar2;
  longlong lVar3;
  char *_Str1;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [24];
  longlong *local_58;
  longlong *local_50;
  longlong local_48;
  
  FUN_1803a09f0(&local_58);
  puVar6 = auStack_78;
  puVar7 = auStack_78;
  if (local_58 != local_50) {
    uVar11 = (ulonglong)DAT_180961974;
    uVar9 = (ulonglong)DAT_180961970;
    uVar8 = (ulonglong)DAT_18096196c;
    uVar10 = (ulonglong)DAT_180961968;
    plVar5 = local_58;
    do {
      if ((((*plVar5 != 0) && (lVar3 = FUN_18000f3a0(*plVar5 + uVar10), lVar3 != 0)) &&
          (lVar3 = FUN_18000f3a0(lVar3 + uVar8), lVar3 != 0)) &&
         (((lVar3 = FUN_18000f3a0(lVar3 + uVar9), lVar3 != 0 &&
           (_Str1 = (char *)FUN_18000f3a0(lVar3 + uVar11), _Str1 + -0x10000 < (char *)0x7ffffffeffff
           )) && ((_Str1 != (char *)0x0 && (iVar2 = strcmp(_Str1,"C_CSGameRulesProxy"), iVar2 == 0))
                 )))) {
        plVar5 = (longlong *)*plVar5;
        if (local_58 != (longlong *)0x0) {
          uVar8 = (local_48 - (longlong)local_58 >> 3) * 8;
          if (0xfff < uVar8) {
            if ((undefined1 *)((longlong)local_58 + (-8 - local_58[-1])) < (undefined1 *)0x20) {
              thunk_FUN_1803d64e0(local_58[-1],uVar8 + 0x27);
              return plVar5;
            }
            goto LAB_180265713;
          }
          thunk_FUN_1803d64e0();
        }
        return plVar5;
      }
      plVar5 = plVar5 + 1;
    } while (plVar5 != local_50);
  }
  if (local_58 == (longlong *)0x0) {
    return (longlong *)0x0;
  }
  plVar4 = local_58;
  if (0xfff < (ulonglong)((local_48 - (longlong)local_58 >> 3) * 8)) {
    plVar4 = (longlong *)local_58[-1];
    plVar5 = (longlong *)((longlong)local_58 + (-8 - (longlong)plVar4));
    if (plVar5 <= &DAT_0000001f) goto LAB_18026571d;
LAB_180265713:
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar6 = auStack_70;
    plVar4 = plVar5;
  }
  puVar7 = puVar6;
LAB_18026571d:
  *(undefined8 *)(puVar7 + -8) = 0x180265722;
  thunk_FUN_1803d64e0(plVar4);
  return (longlong *)0x0;
}



/* ===== 180265750 FUN_180265750 ===== */

undefined8 * FUN_180265750(undefined8 *param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined1 *)((longlong)param_1 + 0x14) = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0xffffffffffffffff;
  *(undefined4 *)((longlong)param_1 + 100) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  uVar1 = *(uint *)(param_2 + 0x10);
  if (*(longlong *)(param_2 + 0x18) - 0x10000U < 0x7ffffffeffff) {
    *(undefined4 *)param_1 = *(undefined4 *)(*(longlong *)(param_2 + 0x18) + 0x18);
    *(undefined4 *)((longlong)param_1 + 4) = *(undefined4 *)(*(longlong *)(param_2 + 0x18) + 0x1c);
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(*(longlong *)(param_2 + 0x18) + 0x20);
  }
  fVar5 = DAT_1808ac34c;
  if ((uVar1 >> 9 & 1) != 0) {
    iVar2 = *(int *)(param_2 + 0x60);
    *(int *)((longlong)param_1 + 0xc) = iVar2;
    if ((uVar1 >> 10 & 1) == 0) {
      fVar6 = 0.0;
    }
    else {
      fVar6 = *(float *)(param_2 + 100);
    }
    *(float *)(param_1 + 2) = fVar6;
    if ((fVar6 < 0.0) || (fVar5 <= fVar6)) {
      fVar4 = (float)FUN_18053f0d0(fVar6);
      *(int *)((longlong)param_1 + 0xc) = (int)fVar4 + iVar2;
      *(float *)(param_1 + 2) = fVar6 - fVar4;
    }
    *(undefined1 *)((longlong)param_1 + 0x14) = 1;
  }
  if ((uVar1 >> 0xb & 1) != 0) {
    iVar2 = *(int *)(param_2 + 0x68);
    *(int *)(param_1 + 3) = iVar2;
    if ((uVar1 >> 0xc & 1) == 0) {
      fVar6 = 0.0;
    }
    else {
      fVar6 = *(float *)(param_2 + 0x6c);
    }
    *(float *)((longlong)param_1 + 0x1c) = fVar6;
    if ((fVar6 < 0.0) || (fVar5 <= fVar6)) {
      fVar5 = (float)FUN_18053f0d0(fVar6);
      *(int *)(param_1 + 3) = (int)fVar5 + iVar2;
      *(float *)((longlong)param_1 + 0x1c) = fVar6 - fVar5;
    }
    *(undefined1 *)(param_1 + 4) = 1;
  }
  if (((uVar1 & 2) != 0) && (*(longlong *)(param_2 + 0x20) - 0x10000U < 0x7ffffffeffff)) {
    *(undefined4 *)((longlong)param_1 + 0x24) =
         *(undefined4 *)(*(longlong *)(param_2 + 0x20) + 0x18);
    *(undefined1 *)(param_1 + 5) = 1;
  }
  if (((uVar1 & 4) != 0) &&
     (lVar3 = *(longlong *)(param_2 + 0x28), lVar3 - 0x10000U < 0x7ffffffeffff)) {
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)(lVar3 + 0x18);
    *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)(lVar3 + 0x1c);
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(lVar3 + 0x20);
    *(undefined1 *)(param_1 + 7) = 1;
  }
  if (((uVar1 & 8) != 0) &&
     (lVar3 = *(longlong *)(param_2 + 0x30), lVar3 - 0x10000U < 0x7ffffffeffff)) {
    *(undefined4 *)((longlong)param_1 + 0x44) = *(undefined4 *)(lVar3 + 0x18);
    *(undefined4 *)((longlong)param_1 + 0x3c) = *(undefined4 *)(lVar3 + 0x1c);
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(lVar3 + 0x20);
    *(undefined1 *)(param_1 + 9) = 1;
  }
  if (((uVar1 & 0x10) != 0) &&
     (lVar3 = *(longlong *)(param_2 + 0x38), lVar3 - 0x10000U < 0x7ffffffeffff)) {
    *(undefined4 *)((longlong)param_1 + 0x54) = *(undefined4 *)(lVar3 + 0x18);
    *(undefined4 *)((longlong)param_1 + 0x4c) = *(undefined4 *)(lVar3 + 0x1c);
    *(undefined4 *)(param_1 + 10) = *(undefined4 *)(lVar3 + 0x20);
    *(undefined1 *)(param_1 + 0xb) = 1;
  }
  if ((uVar1 >> 0xd & 1) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x5c) = *(undefined4 *)(param_2 + 0x70);
    *(undefined1 *)(param_1 + 0xc) = 1;
  }
  if ((uVar1 >> 0xe & 1) != 0) {
    *(undefined4 *)((longlong)param_1 + 100) = *(undefined4 *)(param_2 + 0x74);
    *(undefined1 *)(param_1 + 0xd) = 1;
  }
  if (((uVar1 & 0x20) != 0) &&
     (lVar3 = *(longlong *)(param_2 + 0x40), lVar3 - 0x10000U < 0x7ffffffeffff)) {
    *(undefined4 *)((longlong)param_1 + 0x6c) = *(undefined4 *)(lVar3 + 0x18);
    *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(lVar3 + 0x1c);
    *(undefined4 *)((longlong)param_1 + 0x74) = *(undefined4 *)(lVar3 + 0x20);
    *(undefined1 *)(param_1 + 0xf) = 1;
  }
  if (((uVar1 & 0x40) != 0) &&
     (lVar3 = *(longlong *)(param_2 + 0x48), lVar3 - 0x10000U < 0x7ffffffeffff)) {
    *(undefined4 *)((longlong)param_1 + 0x7c) = *(undefined4 *)(lVar3 + 0x18);
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(lVar3 + 0x1c);
    *(undefined4 *)((longlong)param_1 + 0x84) = *(undefined4 *)(lVar3 + 0x20);
    *(undefined1 *)(param_1 + 0x11) = 1;
  }
  if (((char)uVar1 < '\0') &&
     (lVar3 = *(longlong *)(param_2 + 0x50), lVar3 - 0x10000U < 0x7ffffffeffff)) {
    *(undefined4 *)((longlong)param_1 + 0x8c) = *(undefined4 *)(lVar3 + 0x18);
    *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(lVar3 + 0x1c);
    *(undefined4 *)((longlong)param_1 + 0x94) = *(undefined4 *)(lVar3 + 0x20);
    *(undefined1 *)(param_1 + 0x13) = 1;
  }
  if (((uVar1 >> 8 & 1) != 0) && (*(longlong *)(param_2 + 0x58) - 0x10000U < 0x7ffffffeffff)) {
    *(undefined4 *)((longlong)param_1 + 0x9c) =
         *(undefined4 *)(*(longlong *)(param_2 + 0x58) + 0x18);
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*(longlong *)(param_2 + 0x58) + 0x1c);
    *(undefined4 *)((longlong)param_1 + 0xa4) =
         *(undefined4 *)(*(longlong *)(param_2 + 0x58) + 0x20);
    *(undefined1 *)(param_1 + 0x15) = 1;
  }
  return param_1;
}



/* ===== 180265ac0 FUN_180265ac0 ===== */

void FUN_180265ac0(longlong param_1,longlong *param_2)

{
  ulonglong uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
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
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 *puVar26;
  longlong lVar27;
  longlong lVar28;
  undefined8 *puVar29;
  undefined8 *puVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  longlong lVar33;
  int iVar34;
  uint uVar35;
  ulonglong uVar36;
  undefined4 uStack_18c;
  undefined1 local_178 [336];
  
  if (*param_2 != param_2[1]) {
    param_2[1] = *param_2;
  }
  if (*(int **)(param_1 + 0x18) + -0x4000 < (int *)0x7ffffffeffff) {
    iVar2 = **(int **)(param_1 + 0x18);
    iVar34 = *(int *)(param_1 + 0x10);
    if (iVar2 < *(int *)(param_1 + 0x10)) {
      iVar34 = iVar2;
    }
    uVar36 = 0;
    if (0 < iVar34) {
      do {
        if (*(longlong *)(*(longlong *)(param_1 + 0x18) + 8 + uVar36 * 8) - 0x10000U <
            0x7ffffffeffff) {
          puVar26 = (undefined8 *)FUN_180265750(local_178);
          puVar29 = (undefined8 *)param_2[1];
          uVar3 = *(undefined4 *)(puVar26 + 0x12);
          uVar4 = *(undefined4 *)((longlong)puVar26 + 0x94);
          uVar5 = *(undefined4 *)(puVar26 + 0x13);
          uVar6 = *(undefined8 *)((longlong)puVar26 + 0x9c);
          uVar7 = *(undefined8 *)((longlong)puVar26 + 0xa4);
          uVar8 = *puVar26;
          uVar9 = puVar26[1];
          uVar10 = puVar26[2];
          uVar11 = puVar26[3];
          uVar12 = puVar26[4];
          uVar13 = puVar26[5];
          uVar14 = puVar26[6];
          uVar15 = puVar26[7];
          uVar16 = puVar26[8];
          uVar17 = puVar26[9];
          uVar18 = puVar26[10];
          uVar19 = puVar26[0xb];
          uVar20 = puVar26[0xc];
          uVar21 = puVar26[0xd];
          uVar22 = puVar26[0xe];
          uVar23 = puVar26[0xf];
          uVar24 = puVar26[0x10];
          uVar25 = puVar26[0x11];
          uStack_18c = (undefined4)uVar6;
          if (puVar29 == (undefined8 *)param_2[2]) {
            lVar28 = (longlong)puVar29 - *param_2;
            lVar28 = lVar28 / 0x56 + (lVar28 >> 0x3f);
            lVar28 = (lVar28 >> 1) - (lVar28 >> 0x3f);
            if (lVar28 == 0x17d05f417d05f41) {
                    /* WARNING: Subroutine does not return */
              FUN_1800118d0();
            }
            uVar1 = lVar28 + 1;
            uVar32 = (param_2[2] - *param_2 >> 2) * -0x7d05f417d05f417d;
            if (0x17d05f417d05f41 - (uVar32 >> 1) < uVar32) {
              uVar31 = 0x17d05f417d05f41;
            }
            else {
              uVar32 = (uVar32 >> 1) + uVar32;
              uVar31 = uVar1;
              if (uVar1 <= uVar32) {
                uVar31 = uVar32;
              }
              if (0x17d05f417d05f41 < uVar31) {
                    /* WARNING: Subroutine does not return */
                FUN_18000d840();
              }
            }
            lVar27 = FUN_18000fb70(uVar31 * 0xac);
            puVar30 = (undefined8 *)(lVar28 * 0xac + lVar27);
            *puVar30 = uVar8;
            puVar30[1] = uVar9;
            puVar30[2] = uVar10;
            puVar30[3] = uVar11;
            puVar30[4] = uVar12;
            puVar30[5] = uVar13;
            puVar30[6] = uVar14;
            puVar30[7] = uVar15;
            puVar30[8] = uVar16;
            puVar30[9] = uVar17;
            puVar30[10] = uVar18;
            puVar30[0xb] = uVar19;
            puVar30[0xc] = uVar20;
            puVar30[0xd] = uVar21;
            puVar30[0xe] = uVar22;
            puVar30[0xf] = uVar23;
            puVar30[0x10] = uVar24;
            puVar30[0x11] = uVar25;
            *(undefined4 *)(puVar30 + 0x12) = uVar3;
            *(undefined4 *)((longlong)puVar30 + 0x94) = uVar4;
            *(undefined4 *)(puVar30 + 0x13) = uVar5;
            *(undefined4 *)((longlong)puVar30 + 0x9c) = uStack_18c;
            *(undefined8 *)((longlong)puVar30 + 0x9c) = uVar6;
            *(undefined8 *)((longlong)puVar30 + 0xa4) = uVar7;
            puVar26 = (undefined8 *)*param_2;
            if (puVar29 == (undefined8 *)param_2[1]) {
              lVar33 = param_2[1] - (longlong)puVar26;
              lVar28 = lVar27;
              puVar29 = puVar26;
            }
            else {
              FUN_180540530(lVar27,puVar26,(longlong)puVar29 - (longlong)puVar26);
              lVar28 = (longlong)puVar30 + 0xac;
              lVar33 = param_2[1] - (longlong)puVar29;
            }
            FUN_180540530(lVar28,puVar29,lVar33);
            FUN_1802691a0(param_2,lVar27,uVar1,uVar31);
          }
          else {
            *puVar29 = uVar8;
            puVar29[1] = uVar9;
            puVar29[2] = uVar10;
            puVar29[3] = uVar11;
            puVar29[4] = uVar12;
            puVar29[5] = uVar13;
            puVar29[6] = uVar14;
            puVar29[7] = uVar15;
            puVar29[8] = uVar16;
            puVar29[9] = uVar17;
            puVar29[10] = uVar18;
            puVar29[0xb] = uVar19;
            puVar29[0xc] = uVar20;
            puVar29[0xd] = uVar21;
            puVar29[0xe] = uVar22;
            puVar29[0xf] = uVar23;
            puVar29[0x10] = uVar24;
            puVar29[0x11] = uVar25;
            *(undefined4 *)(puVar29 + 0x12) = uVar3;
            *(undefined4 *)((longlong)puVar29 + 0x94) = uVar4;
            *(undefined4 *)(puVar29 + 0x13) = uVar5;
            *(undefined4 *)((longlong)puVar29 + 0x9c) = uStack_18c;
            *(undefined8 *)((longlong)puVar29 + 0x9c) = uVar6;
            *(undefined8 *)((longlong)puVar29 + 0xa4) = uVar7;
            param_2[1] = param_2[1] + 0xac;
          }
        }
        uVar35 = (int)uVar36 + 1;
        uVar36 = (ulonglong)uVar35;
      } while ((int)uVar35 < iVar34);
    }
  }
  return;
}



/* ===== 180265e80 FUN_180265e80 ===== */

void FUN_180265e80(longlong param_1,undefined4 *param_2)

{
  uint *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  longlong local_res8;
  longlong *local_28;
  uint *local_20;
  
  puVar1 = (uint *)(param_1 + 0x10);
  local_res8 = param_1;
  lVar2 = FUN_180269060(param_1 + 0x18,DAT_180cf9ff8,param_1);
  if (lVar2 != 0) {
    *(undefined4 *)(lVar2 + 0x18) = *param_2;
    *(undefined4 *)(lVar2 + 0x1c) = param_2[1];
    uVar7 = param_2[2];
    *(uint *)(lVar2 + 0x10) = *(uint *)(lVar2 + 0x10) | 7;
    *(undefined4 *)(lVar2 + 0x20) = uVar7;
    *puVar1 = *puVar1 | 1;
  }
  if (*(char *)(param_2 + 5) == '\0') {
    *(undefined8 *)(param_1 + 0x60) = 0;
    *puVar1 = *puVar1 & 0xfffff9ff;
  }
  else {
    *(undefined4 *)(param_1 + 0x60) = param_2[3];
    *(undefined4 *)(param_1 + 100) = param_2[4];
    *puVar1 = *puVar1 | 0x600;
  }
  if (*(char *)(param_2 + 8) == '\0') {
    *(undefined4 *)(param_1 + 0x68) = 0;
    uVar5 = *puVar1 & 0xffffe7ff;
    uVar7 = 0;
  }
  else {
    uVar5 = *puVar1 | 0x1800;
    *(undefined4 *)(param_1 + 0x68) = param_2[6];
    uVar7 = param_2[7];
  }
  *(undefined4 *)(param_1 + 0x6c) = uVar7;
  *puVar1 = uVar5;
  lVar4 = DAT_180cfa000;
  lVar2 = *(longlong *)(param_1 + 0x20);
  if (*(char *)(param_2 + 10) == '\0') {
    if (lVar2 - 0x10000U < 0x7ffffffeffff) {
      *(undefined4 *)(lVar2 + 0x18) = 0;
      *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x10) = 0;
    }
    *puVar1 = *puVar1 & 0xfffffffd;
  }
  else {
    if (0x7ffffffefffe < lVar2 - 0x10000U) {
      if (local_res8 - 0x10000U < 0x7ffffffeffff) {
        uVar3 = FUN_18000f3a0(local_res8 + 8);
        uVar6 = uVar3 & 0xfffffffffffffffc;
        if ((uVar3 & 1) != 0) {
          uVar6 = FUN_18000f3a0(uVar6);
        }
      }
      else {
        uVar6 = 0;
      }
      if (lVar4 - 0x10000U < 0x7ffffffeffff) {
        lVar4 = FUN_1802650a0(lVar4,uVar6);
        lVar2 = 0;
        if (lVar4 - 0x10000U < 0x7ffffffeffff) {
          lVar2 = lVar4;
        }
      }
      else {
        lVar2 = 0;
      }
      *(longlong *)(param_1 + 0x20) = lVar2;
    }
    if (lVar2 - 0x10000U < 0x7ffffffeffff) {
      uVar7 = param_2[9];
      *(uint *)(lVar2 + 0x10) = *(uint *)(lVar2 + 0x10) | 1;
      *(undefined4 *)(lVar2 + 0x18) = uVar7;
      *puVar1 = *puVar1 | 2;
    }
  }
  local_28 = &local_res8;
  local_20 = puVar1;
  FUN_180266180(&local_28,param_1 + 0x28,param_2 + 0xb,4);
  FUN_180266180(&local_28,param_1 + 0x30,param_2 + 0xf,8);
  FUN_180266180(&local_28,param_1 + 0x38,param_2 + 0x13,0x10);
  if (*(char *)(param_2 + 0x18) == '\0') {
    *(undefined4 *)(param_1 + 0x70) = 0;
    *puVar1 = *puVar1 & 0xffffdfff;
  }
  else {
    *(undefined4 *)(param_1 + 0x70) = param_2[0x17];
    *puVar1 = *puVar1 | 0x2000;
  }
  if (*(char *)(param_2 + 0x1a) == '\0') {
    uVar5 = *puVar1 & 0xffffbfff;
    uVar7 = 0xffffffff;
  }
  else {
    uVar7 = param_2[0x19];
    uVar5 = *puVar1 | 0x4000;
  }
  *(undefined4 *)(param_1 + 0x74) = uVar7;
  *puVar1 = uVar5;
  local_28 = &local_res8;
  local_20 = puVar1;
  FUN_1802662a0(&local_28,param_1 + 0x40,param_2 + 0x1b,0x20);
  FUN_1802662a0(&local_28,param_1 + 0x48,param_2 + 0x1f,0x40);
  FUN_1802662a0(&local_28,param_1 + 0x50,param_2 + 0x23,0x80);
  if (*(char *)(param_2 + 0x2a) == '\0') {
    if (*(longlong *)(param_1 + 0x58) - 0x10000U < 0x7ffffffeffff) {
      *(undefined4 *)(*(longlong *)(param_1 + 0x58) + 0x20) = 0;
      *(undefined4 *)(*(longlong *)(param_1 + 0x58) + 0x1c) = 0;
      *(undefined4 *)(*(longlong *)(param_1 + 0x58) + 0x18) = 0;
      *(undefined4 *)(*(longlong *)(param_1 + 0x58) + 0x10) = 0;
    }
    *puVar1 = *puVar1 & 0xfffffeff;
  }
  else {
    lVar2 = FUN_180269060(param_1 + 0x58,DAT_180cf9ff8,local_res8);
    if (lVar2 != 0) {
      *(undefined4 *)(lVar2 + 0x18) = param_2[0x27];
      *(undefined4 *)(lVar2 + 0x1c) = param_2[0x28];
      uVar7 = param_2[0x29];
      *(uint *)(lVar2 + 0x10) = *(uint *)(lVar2 + 0x10) | 7;
      *(undefined4 *)(lVar2 + 0x20) = uVar7;
      *puVar1 = *puVar1 | 0x100;
    }
  }
  return;
}



/* ===== 180266180 FUN_180266180 ===== */

void FUN_180266180(undefined8 *param_1,longlong *param_2,undefined4 *param_3,uint param_4)

{
  undefined4 uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  lVar3 = DAT_180cfa008;
  lVar5 = *param_2;
  if (*(char *)(param_3 + 3) == '\0') {
    if (lVar5 - 0x10000U < 0x7ffffffeffff) {
      *(undefined4 *)(lVar5 + 0x1c) = 0xffffffff;
      *(undefined4 *)(*param_2 + 0x20) = 0xffffffff;
      *(undefined4 *)(*param_2 + 0x18) = 0;
      *(undefined4 *)(*param_2 + 0x10) = 0;
    }
    *(uint *)param_1[1] = *(uint *)param_1[1] & ~param_4;
  }
  else {
    if (0x7ffffffefffe < lVar5 - 0x10000U) {
      if (*(longlong *)*param_1 - 0x10000U < 0x7ffffffeffff) {
        uVar2 = FUN_18000f3a0(*(longlong *)*param_1 + 8);
        uVar4 = uVar2 & 0xfffffffffffffffc;
        if ((uVar2 & 1) != 0) {
          uVar4 = FUN_18000f3a0(uVar4);
        }
      }
      else {
        uVar4 = 0;
      }
      lVar5 = 0;
      if (lVar3 - 0x10000U < 0x7ffffffeffff) {
        lVar3 = FUN_1802650a0(lVar3,uVar4);
        if (lVar3 - 0x10000U < 0x7ffffffeffff) {
          lVar5 = lVar3;
        }
      }
      *param_2 = lVar5;
    }
    if (lVar5 - 0x10000U < 0x7ffffffeffff) {
      *(undefined4 *)(lVar5 + 0x1c) = *param_3;
      *(undefined4 *)(lVar5 + 0x20) = param_3[1];
      uVar1 = param_3[2];
      *(uint *)(lVar5 + 0x10) = *(uint *)(lVar5 + 0x10) | 7;
      *(undefined4 *)(lVar5 + 0x18) = uVar1;
      *(uint *)param_1[1] = *(uint *)param_1[1] | param_4;
      return;
    }
  }
  return;
}



/* ===== 1802662a0 FUN_1802662a0 ===== */

void FUN_1802662a0(undefined8 *param_1,longlong *param_2,undefined4 *param_3,uint param_4)

{
  undefined4 uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  lVar3 = DAT_180cfa010;
  lVar5 = *param_2;
  if (*(char *)(param_3 + 3) == '\0') {
    if (lVar5 - 0x10000U < 0x7ffffffeffff) {
      *(undefined4 *)(lVar5 + 0x24) = 0;
      *(undefined4 *)(*param_2 + 0x20) = 0;
      *(undefined4 *)(*param_2 + 0x1c) = 0;
      *(undefined4 *)(*param_2 + 0x18) = 0;
      *(undefined4 *)(*param_2 + 0x10) = 0;
    }
    *(uint *)param_1[1] = *(uint *)param_1[1] & ~param_4;
  }
  else {
    if (0x7ffffffefffe < lVar5 - 0x10000U) {
      if (*(longlong *)*param_1 - 0x10000U < 0x7ffffffeffff) {
        uVar2 = FUN_18000f3a0(*(longlong *)*param_1 + 8);
        uVar4 = uVar2 & 0xfffffffffffffffc;
        if ((uVar2 & 1) != 0) {
          uVar4 = FUN_18000f3a0(uVar4);
        }
      }
      else {
        uVar4 = 0;
      }
      lVar5 = 0;
      if ((lVar3 - 0x10000U < 0x7ffffffeffff) &&
         (lVar3 = FUN_1802650a0(lVar3,uVar4), lVar3 - 0x10000U < 0x7ffffffeffff)) {
        lVar5 = lVar3;
      }
      *param_2 = lVar5;
    }
    if (lVar5 - 0x10000U < 0x7ffffffeffff) {
      *(undefined4 *)(lVar5 + 0x18) = *param_3;
      *(undefined4 *)(lVar5 + 0x1c) = param_3[1];
      uVar1 = param_3[2];
      *(uint *)(lVar5 + 0x10) = *(uint *)(lVar5 + 0x10) | 7;
      *(undefined4 *)(lVar5 + 0x20) = uVar1;
      *(uint *)param_1[1] = *(uint *)param_1[1] | param_4;
      return;
    }
  }
  return;
}



/* ===== 1802663c0 FUN_1802663c0 ===== */

void FUN_1802663c0(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  HMODULE pHVar4;
  HANDLE pvVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  char *local_58;
  ulonglong local_50;
  char *local_48;
  ulonglong uStack_40;
  undefined8 local_38;
  
  if (DAT_180cfa018 == '\0') {
    DAT_180cfa018 = '\x01';
    pHVar4 = GetModuleHandleA("client.dll");
    if (pHVar4 == (HMODULE)0x0) {
      local_50 = 0;
      local_58 = (char *)0x0;
    }
    else {
      local_48 = (char *)0x0;
      uStack_40 = 0;
      local_38 = 0;
      pvVar5 = GetCurrentProcess();
      iVar7 = K32GetModuleInformation(pvVar5,pHVar4,&local_48,0x18);
      if (iVar7 == 0) {
        local_50 = 0;
        local_58 = (char *)0x0;
      }
      else {
        local_50 = uStack_40 & 0xffffffff;
        local_58 = local_48;
      }
    }
    local_48 = "CSGOInputHistoryEntryPB";
    uStack_40 = 0x17;
    DAT_180cf9ff0 = FUN_1801d1f10(&local_58,&local_48);
    uStack_40 = 10;
    local_48 = "CMsgQAngle";
    DAT_180cf9ff8 = FUN_1801d1f10(&local_58,&local_48);
    uStack_40 = 0x1a;
    local_48 = "CSGOInterpolationInfoPB_CL";
    DAT_180cfa000 = FUN_1801d1f10(&local_58,&local_48);
    uStack_40 = 0x17;
    local_48 = "CSGOInterpolationInfoPB";
    DAT_180cfa008 = FUN_1801d1f10(&local_58,&local_48);
    uStack_40 = 10;
    local_48 = "CMsgVector";
    DAT_180cfa010 = FUN_1801d1f10(&local_58,&local_48);
  }
  lVar2 = DAT_1809f35c0;
  iVar7 = 0;
  for (lVar8 = DAT_1809f35b8; lVar8 != lVar2; lVar8 = lVar8 + 0xac) {
    piVar1 = *(int **)(param_1 + 0x38);
    if ((piVar1 + -0x4000 < (int *)0x7ffffffeffff) && (iVar7 < *piVar1)) {
      lVar6 = *(longlong *)(piVar1 + (longlong)iVar7 * 2 + 2);
      if (0x7ffffffefffe < lVar6 - 0x10000U) break;
      *(int *)(param_1 + 0x30) = iVar7 + 1;
    }
    else if ((0x7ffffffefffe < DAT_180cf9ff0 - 0x10000U) ||
            ((lVar6 = FUN_1802650a0(DAT_180cf9ff0,*(undefined8 *)(param_1 + 0x28)),
             0x7ffffffefffe < lVar6 - 0x10000U ||
             (cVar3 = FUN_180265070(param_1 + 0x28,lVar6), cVar3 == '\0')))) break;
    FUN_180265e80(lVar6,lVar8);
    iVar7 = iVar7 + 1;
  }
  *(int *)(param_1 + 0x30) = iVar7;
  if (DAT_1809f35d0._4_1_ == '\0') {
    *(undefined4 *)(param_1 + 0x4c) = 0xffffffff;
    *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0xffffffdf;
  }
  else {
    *(undefined4 *)(param_1 + 0x4c) = (undefined4)DAT_1809f35d0;
    *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 0x20;
  }
  if (DAT_1809f35d8._4_1_ == '\0') {
    *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
    *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0xffffffbf;
    return;
  }
  *(undefined4 *)(param_1 + 0x50) = (undefined4)DAT_1809f35d8;
  *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 0x40;
  return;
}



/* ===== 180266660 FUN_180266660 ===== */

longlong FUN_180266660(void)

{
  int iVar1;
  char *_Str1;
  longlong lVar2;
  longlong lVar3;
  longlong local_res8 [4];
  
  FUN_180265510();
  if (DAT_180cf9f84 == 0) {
    return 0;
  }
  if (DAT_180cfa078 != 0) {
    if (DAT_180cfa078 - 0x10000U < 0x7ffffffeffff) {
      local_res8[0] = DAT_180cfa078;
      _Str1 = (char *)FUN_1803a0710(local_res8);
      if ((_Str1 != (char *)0x0) && (iVar1 = strcmp(_Str1,"C_CSGameRulesProxy"), iVar1 == 0)) {
        if (DAT_180cfa078 != 0) goto LAB_1802666eb;
        goto LAB_1802666da;
      }
    }
    DAT_180cfa078 = 0;
  }
LAB_1802666da:
  DAT_180cfa078 = FUN_1802655a0();
  if (DAT_180cfa078 == 0) {
    return 0;
  }
LAB_1802666eb:
  lVar2 = FUN_18000f3a0((ulonglong)DAT_180cf9f84 + DAT_180cfa078);
  lVar3 = 0;
  if (lVar2 - 0x10000U < 0x7ffffffeffff) {
    lVar3 = lVar2;
  }
  return lVar3;
}



/* ===== 180266720 FUN_180266720 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_180266720(longlong param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  undefined3 uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong *puVar8;
  char cVar9;
  undefined1 uVar10;
  byte bVar11;
  uint uVar12;
  longlong lVar13;
  undefined8 uVar14;
  longlong *plVar15;
  longlong lVar16;
  undefined4 *puVar17;
  uint uVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  int iVar22;
  undefined4 uVar23;
  undefined1 auStack_d8 [8];
  undefined1 auStack_d0 [24];
  undefined8 local_b8;
  uint local_b0 [2];
  undefined8 local_a8 [2];
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  uint uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint local_78;
  undefined1 uStack_74;
  undefined1 uStack_73;
  undefined2 uStack_72;
  uint uStack_70;
  uint uStack_6c;
  uint local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_d8;
  DAT_180ccfae7 = 0;
  FUN_180265510();
  puVar21 = auStack_d8;
  if (param_1 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x40);
    if ((((lVar3 - 0x10000U < 0x7ffffffeffff) &&
         (*(longlong *)(lVar3 + 0x40) - 0x10000U < 0x7ffffffeffff)) && (lVar3 != 0)) &&
       (*param_2 != 0)) {
      local_98 = 0;
      uStack_8c = 0;
      uStack_88 = 0;
      local_58 = 0;
      uStack_50 = 0;
      uStack_80 = 0;
      uStack_7c = 0;
      DAT_180cf9fa4 = 0;
      uStack_84 = 0;
      local_78 = 0;
      DAT_180cf9fb4 = 0;
      DAT_180cf9fb8 = 0;
      DAT_180cf9fc0 = 0;
      DAT_180cf9fbc = 0;
      DAT_180cf9fb0 = 0;
      uStack_90 = 0;
      uStack_74 = 0;
      uStack_73 = 0;
      uStack_70 = 0;
      uStack_6c = 0;
      local_68 = 0;
      uStack_64 = 0;
      uStack_60 = 0;
      uStack_5c = 0;
      DAT_180cf9fa0 = 0;
      _DAT_180cf9fa8 = 0;
      _DAT_180cf9fc4 = 0;
      DAT_180cf9fc8 = 0;
      DAT_180cf9fd0 = 0;
      FUN_180200bf0(&DAT_180cf9fd8,&uStack_60);
      FUN_180200b70(&uStack_60);
      puVar19 = auStack_d8;
      puVar20 = auStack_d8;
      DAT_180cf9fa0 = *(undefined4 *)(*(longlong *)(lVar3 + 0x40) + 0x18);
      DAT_180cf9fa4 = *(undefined4 *)(*(longlong *)(lVar3 + 0x40) + 0x1c);
      uVar23 = *(undefined4 *)(*(longlong *)(lVar3 + 0x40) + 0x20);
      DAT_180cf9fc0 = uVar23;
      DAT_180cf9fbc = DAT_180cf9fa4;
      DAT_180cf9fb8 = DAT_180cf9fa0;
      if (DAT_180ccfae6 != '\0') {
        DAT_180cf9fc0 = DAT_180cfa090;
        DAT_180cf9fbc = DAT_180cfa08c;
        DAT_180cf9fb8 = DAT_180cfa088;
      }
      _DAT_180cf9fa8 = CONCAT44(*(undefined4 *)(lVar3 + 0x58),uVar23);
      DAT_180cf9fb0 = *(undefined4 *)(lVar3 + 0x5c);
      DAT_180cf9fb4 = *(undefined4 *)(lVar3 + 0x60);
      DAT_180cf9fc8 = *(undefined8 *)(param_1 + 0x60);
      DAT_180cf9fd0 = *(undefined8 *)(param_1 + 0x68);
      if (*(int **)(lVar3 + 0x28) == (int *)0x0) {
        iVar22 = 0;
      }
      else {
        iVar1 = **(int **)(lVar3 + 0x28);
        iVar22 = *(int *)(lVar3 + 0x20);
        if (iVar1 < *(int *)(lVar3 + 0x20)) {
          iVar22 = iVar1;
        }
      }
      uVar18 = 0;
      if (0 < iVar22) {
        do {
          uVar2 = local_78;
          puVar8 = DAT_180cf9fe0;
          lVar13 = *(longlong *)(*(longlong *)(lVar3 + 0x28) + 8 + (ulonglong)uVar18 * 8);
          if (lVar13 - 0x10000U < 0x7ffffffeffff) {
            uVar12 = *(uint *)(lVar13 + 0x10);
            local_98 = CONCAT44(local_98._4_4_,*(undefined4 *)(lVar13 + 0x24));
            uStack_90 = 0;
            uStack_8c = 0;
            uVar6 = uStack_88 >> 8;
            uStack_88 = uStack_88 & 0xffffff00;
            uStack_84 = 0;
            uStack_80 = 0;
            uStack_7c = 0;
            local_78 = local_78 & 0xffffff00;
            uStack_74 = 0;
            uStack_73 = 0;
            uStack_72 = 0;
            uStack_70 = 0;
            uStack_6c = 0;
            uVar7 = local_68 >> 8;
            local_68 = local_68 & 0xffffff00;
            uStack_64 = 0;
            uStack_60 = 0;
            uStack_5c = 0;
            local_58 = local_58 & 0xffffffffffff0000;
            if ((uVar12 & 1) != 0) {
              uStack_90 = (undefined4)*(undefined8 *)(lVar13 + 0x18);
              uStack_8c = (undefined4)((ulonglong)*(undefined8 *)(lVar13 + 0x18) >> 0x20);
            }
            if ((uVar12 & 2) != 0) {
              uStack_88 = CONCAT31((int3)uVar6,*(undefined1 *)(lVar13 + 0x20));
            }
            if ((uVar12 & 0x60) != 0) {
              uVar23 = *(undefined4 *)(lVar13 + 0x30);
              uStack_70 = *(uint *)(lVar13 + 0x34);
              uStack_74 = (undefined1)uVar23;
              uStack_73 = (undefined1)((uint)uVar23 >> 8);
              uStack_72 = (undefined2)((uint)uVar23 >> 0x10);
              local_68 = CONCAT31((int3)uVar7,1);
            }
            if ((uVar12 & 0x18) != 0) {
              uStack_64 = *(undefined4 *)(lVar13 + 0x28);
              uStack_60 = *(undefined4 *)(lVar13 + 0x2c);
              local_58 = CONCAT71(local_58._1_7_,1);
            }
            local_58._0_3_ = CONCAT12(1,(undefined2)local_58);
            if (DAT_180cf9fe0 == DAT_180cf9fe8) {
              FUN_18008c530(&DAT_180cf9fd8,DAT_180cf9fe0,&local_98);
            }
            else {
              *DAT_180cf9fe0 = local_98;
              puVar8[1] = CONCAT44(uStack_8c,uStack_90);
              puVar8[2] = (ulonglong)uStack_88;
              puVar8[3] = 0;
              puVar8[4] = CONCAT26(uStack_72,CONCAT15(uStack_73,CONCAT14(uStack_74,uVar2))) &
                          0xffffffffffffff00;
              puVar8[5] = (ulonglong)uStack_70;
              *(uint *)(puVar8 + 6) = local_68;
              *(undefined4 *)((longlong)puVar8 + 0x34) = uStack_64;
              *(undefined4 *)(puVar8 + 7) = uStack_60;
              *(undefined4 *)((longlong)puVar8 + 0x3c) = 0;
              puVar8[8] = local_58;
              DAT_180cf9fe0 = DAT_180cf9fe0 + 9;
            }
          }
          uVar18 = uVar18 + 1;
        } while ((int)uVar18 < iVar22);
      }
      local_98 = local_98 & 0xffffffff00000000;
      local_78 = 0xffffffff;
      uStack_74 = 0;
      uStack_70 = 0xffffffff;
      uStack_6c = uStack_6c & 0xffffff00;
      local_68 = local_68 & 0xffffff00;
      DAT_1809f35b0 = 0;
      puVar21 = auStack_d8;
      if (DAT_1809f35b8 != 0) {
        lVar13 = DAT_1809f35b8;
        if ((ulonglong)((DAT_1809f35c8 - DAT_1809f35b8 >> 2) * 4) < 0x1000) {
LAB_180266ac0:
          puVar20 = puVar19;
        }
        else {
          lVar13 = *(longlong *)(DAT_1809f35b8 + -8);
          if (0x1f < (DAT_1809f35b8 - lVar13) - 8U) {
            lVar13 = 5;
            pcVar4 = (code *)swi(0x29);
            (*pcVar4)(5);
            puVar19 = auStack_d0;
            goto LAB_180266ac0;
          }
        }
        *(undefined8 *)(puVar20 + -8) = 0x180266acb;
        thunk_FUN_1803d64e0(lVar13);
        puVar21 = puVar20;
      }
      DAT_1809f35d0 = CONCAT26(uStack_72,CONCAT15(uStack_73,CONCAT14(uStack_74,local_78)));
      DAT_1809f35d8 = CONCAT44(uStack_6c,uStack_70);
      DAT_1809f35b8 = 0;
      DAT_1809f35c0 = 0;
      DAT_1809f35c8 = 0;
      uStack_90 = 0;
      uStack_8c = 0;
      uStack_88 = 0;
      uStack_84 = 0;
      uStack_80 = 0;
      uStack_7c = 0;
      DAT_1809f35e0 = 0;
      *(undefined8 *)(puVar21 + -8) = 0x180266b0f;
      FUN_180269120(&uStack_90);
      DAT_1809f35b0 = *(undefined4 *)(lVar3 + 0x54);
      *(undefined8 *)(puVar21 + -8) = 0x180266b28;
      FUN_180265ac0(param_1 + 0x20);
      uVar5 = (undefined3)((ulonglong)local_b8 >> 0x28);
      if ((*(uint *)(param_1 + 0x20) & 0x20) != 0) {
        DAT_1809f35d0 = CONCAT35(uVar5,CONCAT14(1,*(undefined4 *)(param_1 + 0x4c)));
      }
      if ((*(uint *)(param_1 + 0x20) & 0x40) != 0) {
        DAT_1809f35d8 = CONCAT35(uVar5,CONCAT14(1,*(undefined4 *)(param_1 + 0x50)));
      }
      DAT_1809f358b = local_98._3_1_;
      _DAT_1809f35ac = CONCAT22(uStack_72,CONCAT11(uStack_73,uStack_74));
      uStack_88 = 0;
      uStack_84 = 0;
      DAT_1809f359c = 0;
      _DAT_1809f3588 = 0;
      DAT_1809f358a = 0;
      DAT_1809f358c = 2;
      DAT_1809f3590 = 0;
      DAT_1809f3598 = 0;
      _DAT_1809f35a0 = 0;
      DAT_1809f35a8 = 1;
      if (DAT_1809eea10 == 0) {
        if (DAT_1809eea18 == '\0') {
          *(undefined8 *)(puVar21 + -8) = 0x180266bfd;
          DAT_1809eea10 = FUN_180264b70(PTR_s_sv_quantize_movement_input_1809eea08);
          DAT_1809eea18 = DAT_1809eea10 == 0;
          if (DAT_1809eea10 != 0) goto LAB_180266c13;
        }
LAB_180266c23:
        uVar10 = 0;
      }
      else {
LAB_180266c13:
        *(undefined8 *)(puVar21 + -8) = 0x180266c1b;
        cVar9 = FUN_180264d70(DAT_1809eea10);
        if (cVar9 == '\0') goto LAB_180266c23;
        uVar10 = 1;
      }
      _DAT_1809f3588 = CONCAT11(DAT_1809f3589,uVar10);
      *(undefined8 *)(puVar21 + -8) = 0x180266c30;
      uVar10 = FUN_1801eca30();
      _DAT_1809f3588 = CONCAT11(uVar10,DAT_1809f3588);
      *(undefined8 *)(puVar21 + -8) = 0x180266c3b;
      lVar13 = FUN_180266660();
      if ((lVar13 == 0) || (DAT_180cf9f80 == 0)) {
LAB_180266c5a:
        DAT_1809f358a = 0;
      }
      else {
        *(undefined8 *)(puVar21 + -8) = 0x180266c52;
        cVar9 = FUN_180011220((ulonglong)DAT_180cf9f80 + lVar13);
        if (cVar9 == '\0') goto LAB_180266c5a;
        DAT_1809f358a = 1;
      }
      lVar13 = *param_2;
      if ((lVar13 == 0) || (DAT_180ca0a44 == 0)) {
        bVar11 = 0;
      }
      else {
        *(undefined8 *)(puVar21 + -8) = 0x180266c7e;
        bVar11 = FUN_180011220(lVar13 + (ulonglong)DAT_180ca0a44);
      }
      DAT_1809f358c = (uint)bVar11;
      DAT_1809f35a8 = DAT_1809f351c;
      if (DAT_180ca0970 != 0) {
        lVar13 = *param_2;
        *(undefined8 *)(puVar21 + -8) = 0x180266cb0;
        lVar13 = FUN_18000f3a0((ulonglong)DAT_180ca0970 + lVar13);
        if (lVar13 - 0x10000U < 0x7ffffffeffff) {
          if (DAT_180ca0990 != 0) {
            *(undefined8 *)(puVar21 + -8) = 0x180266cd5;
            DAT_1809f3590 = FUN_18000f3a0((ulonglong)DAT_180ca0990 + 8 + lVar13);
          }
          if (DAT_180ca0994 != 0) {
            *(undefined8 *)(puVar21 + -8) = 0x180266cef;
            DAT_1809f3598 = FUN_18000f3d0(lVar13 + (ulonglong)DAT_180ca0994);
          }
          if (DAT_180ca0998 != 0) {
            *(undefined8 *)(puVar21 + -8) = 0x180266d0a;
            DAT_1809f359c = FUN_18000f3d0(lVar13 + (ulonglong)DAT_180ca0998);
          }
          if (DAT_180cf9f94 != 0) {
            *(undefined8 *)(puVar21 + -8) = 0x180266d25;
            uVar23 = FUN_18000f3d0(lVar13 + (ulonglong)DAT_180cf9f94);
            _DAT_1809f35a0 = CONCAT44(_DAT_1809f35a4,uVar23);
          }
        }
      }
      if (DAT_180ca0a20 != 0) {
        lVar13 = *param_2;
        *(undefined8 *)(puVar21 + -8) = 0x180266d42;
        uVar23 = FUN_18000f3d0((ulonglong)DAT_180ca0a20 + lVar13);
        _DAT_1809f35a0 = CONCAT44(uVar23,_DAT_1809f35a0);
      }
      uVar2 = *(uint *)(param_1 + 8);
      iVar22 = 0;
      DAT_180cf9f90 = 0;
      DAT_180cfa070 = (undefined4 *)0x0;
      uVar18 = uVar2 - 1;
      DAT_180ccfae5 = 0;
      DAT_1809f31f4 = uVar2;
      if ((int)uVar18 < 0) {
LAB_180266df1:
        puVar17 = (undefined4 *)0x0;
LAB_180266df4:
        if ((int)uVar2 < 1) {
          if (puVar17 != (undefined4 *)0x0) goto LAB_180266f95;
        }
        else {
          *(undefined8 *)(puVar21 + -8) = 0x180266e04;
          local_b0[0] = uVar2;
          lVar13 = FUN_180269460();
          if (((lVar13 != 0) && (DAT_180961fd0 != 0)) &&
             (lVar16 = (ulonglong)DAT_180961fd4 * ((ulonglong)uVar18 % (ulonglong)DAT_180961fd0) +
                       lVar13, lVar16 != 0)) {
            *(undefined8 *)(puVar21 + -8) = 0x180266e43;
            uVar12 = FUN_180011200(lVar16 + 8);
            if (((uVar12 == uVar18) && (DAT_180961fd0 != 0)) &&
               (lVar13 = lVar13 + ((ulonglong)uVar2 % (ulonglong)DAT_180961fd0) *
                                  (ulonglong)DAT_180961fd4, lVar13 != 0)) {
              *(undefined8 *)(puVar21 + -8) = 0x180266e7d;
              uVar12 = FUN_180011200(lVar13 + 8);
              uVar23 = DAT_1809f3378;
              if (uVar12 == uVar2) {
                local_b8 = 0;
                DAT_1809f3378 = uVar18;
                if ((DAT_180cfa1a8 != 0) && (DAT_180cfa1b0 != 0)) {
                  *(undefined8 *)(puVar21 + -8) = 0x180266eb4;
                  local_b8 = FUN_180066860();
                  *(undefined8 *)(puVar21 + -8) = 0x180266ebe;
                  local_a8[0] = FUN_180269530();
                  *(undefined8 *)(puVar21 + -8) = 0x180266ed3;
                  FUN_1800239d0(DAT_180cfa1a8,local_a8);
                }
                *(undefined8 *)(puVar21 + -8) = 0x180266eda;
                FUN_18026b480(0);
                DAT_180ceb6f4 = DAT_180ceb6f4 + 1;
                DAT_180ceb7c0 = DAT_180ceb7c0 + 1;
                if ((DAT_180cfa1a8 != 0) && (DAT_180cfa1b0 != 0)) {
                  *(undefined8 *)(puVar21 + -8) = 0x180266f05;
                  FUN_1800239d0(DAT_180cfa1a8,&local_b8);
                }
                *(undefined8 *)(puVar21 + -8) = 0x180266f18;
                DAT_1809f3378 = uVar23;
                FUN_180013280(lVar13 + 8,local_b0);
              }
            }
          }
          lVar13 = (longlong)((int)uVar18 % 0x96);
          puVar17 = (undefined4 *)0x0;
          if ((&DAT_180c3df70)[lVar13 * 500] == uVar18) {
            puVar17 = &DAT_180c3df70 + lVar13 * 500;
          }
          if (puVar17 != (undefined4 *)0x0) {
            plVar15 = (longlong *)&DAT_00000158;
            if ((&DAT_180c3df70)[lVar13 * 500] == uVar18) {
              plVar15 = (longlong *)(&DAT_180c3e0c8 + lVar13 * 2000);
            }
            if (*plVar15 == *param_2) {
              iVar22 = 2;
              DAT_180cf9f90 = 2;
              goto LAB_180266f95;
            }
          }
        }
      }
      else {
        lVar13 = (longlong)((int)uVar18 % 0x96);
        puVar17 = (undefined4 *)0x0;
        if ((&DAT_180c3df70)[lVar13 * 500] == uVar18) {
          puVar17 = &DAT_180c3df70 + lVar13 * 500;
        }
        if (puVar17 == (undefined4 *)0x0) goto LAB_180266df1;
        plVar15 = (longlong *)&DAT_00000158;
        if ((&DAT_180c3df70)[lVar13 * 500] == uVar18) {
          plVar15 = (longlong *)(&DAT_180c3e0c8 + lVar13 * 2000);
        }
        if (*plVar15 != *param_2) goto LAB_180266df1;
        if ((int)puVar17[1] < 2) goto LAB_180266df4;
        iVar22 = 1;
        DAT_180cf9f90 = 1;
LAB_180266f95:
        if (iVar22 != 0) {
          DAT_1809f3598 = puVar17[0x75];
          DAT_1809f3590 = *(undefined8 *)(puVar17 + 0x62);
          DAT_1809f359c = puVar17[0x76];
          _DAT_1809f35a0 = CONCAT44(puVar17[0x1b],puVar17[0x77]);
          DAT_180cfa080._4_4_ = puVar17[0x79];
          DAT_180cfa080._0_4_ = puVar17[0x78];
          DAT_1809f358c = (uint)*(byte *)(puVar17 + 0x20);
          DAT_180ccfae5 = 1;
          DAT_180cfa070 = puVar17;
        }
      }
      *(undefined8 *)(puVar21 + -8) = 0x180267037;
      FUN_1801ef6c0(&DAT_180cf9fa0,&DAT_1809f3588);
      _DAT_180cfa020 = CONCAT44(DAT_180cf9fa4,DAT_180cf9fa0);
      DAT_180cfa044 = DAT_180cf9fc4;
      DAT_180cfa045 = DAT_180cf9fc5;
      DAT_180cfa048 = DAT_180cf9fc8;
      uRam0000000180cfa028 = _DAT_180cf9fa8;
      _DAT_180cfa030 = CONCAT44(DAT_180cf9fb4,DAT_180cf9fb0);
      uRam0000000180cfa038 = CONCAT44(DAT_180cf9fbc,DAT_180cf9fb8);
      DAT_180cfa050 = DAT_180cf9fd0;
      DAT_180cfa040 = DAT_180cf9fc0;
      *(undefined8 *)(puVar21 + -8) = 0x1802670d4;
      FUN_1802009d0(&DAT_180cfa058,DAT_180cf9fd8,
                    ((longlong)DAT_180cf9fe0 - DAT_180cf9fd8 >> 3) * -0x71c71c71c71c71c7);
      DAT_180cfa098 = *(undefined8 *)(param_1 + 0x70);
      *(undefined8 *)(puVar21 + -8) = 0x1802670e8;
      DAT_180cf9f88 = FUN_180011200(lVar3 + 0x6c);
      uVar14 = 1;
      DAT_180ccfae7 = 1;
      goto LAB_18026710f;
    }
  }
  uVar14 = 0;
LAB_18026710f:
  *(undefined8 *)(puVar21 + -8) = 0x18026711b;
  return uVar14;
}



/* ===== 180267130 FUN_180267130 ===== */

undefined4 * FUN_180267130(undefined4 *param_1,undefined4 *param_2)

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
  *param_1 = *param_2;
  if (param_1 == param_2) goto LAB_1802671df;
  lVar1 = *(longlong *)(param_1 + 2);
  if (lVar1 != 0) {
    lVar3 = lVar1;
    if ((ulonglong)((*(longlong *)(param_1 + 6) - lVar1 >> 2) * 4) < 0x1000) {
LAB_1802671a4:
      puVar5 = puVar4;
    }
    else {
      lVar3 = *(longlong *)(lVar1 + -8);
      if (0x1f < (lVar1 - lVar3) - 8U) {
        lVar3 = 5;
        pcVar2 = (code *)swi(0x29);
        (*pcVar2)(5);
        puVar4 = auStack_20;
        goto LAB_1802671a4;
      }
    }
    *(undefined8 *)(puVar5 + -8) = 0x1802671af;
    thunk_FUN_1803d64e0(lVar3);
    *(undefined8 *)(param_1 + 2) = 0;
    *(undefined8 *)(param_1 + 4) = 0;
    *(undefined8 *)(param_1 + 6) = 0;
  }
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_2 + 2) = 0;
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined8 *)(param_2 + 6) = 0;
LAB_1802671df:
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  return param_1;
}



/* ===== 180267210 FUN_180267210 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180267210(longlong param_1,longlong *param_2,undefined4 *param_3)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  char cVar8;
  undefined1 uVar9;
  longlong lVar10;
  undefined8 uVar11;
  uint uVar12;
  int iVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  uint uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint local_78;
  undefined2 uStack_74;
  undefined2 uStack_72;
  uint uStack_70;
  undefined4 uStack_6c;
  uint local_68;
  undefined4 uStack_64;
  uint auStack_60 [2];
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_c8;
  local_a8 = param_2;
  FUN_180265510();
  if ((((param_1 == 0) ||
       (lVar10 = *(longlong *)(param_1 + 0x40), 0x7ffffffefffe < lVar10 - 0x10000U)) ||
      (0x7ffffffefffe < *(longlong *)(lVar10 + 0x40) - 0x10000U)) || (*param_2 == 0)) {
    return 0;
  }
  *param_3 = 0;
  *(undefined8 *)(param_3 + 2) = 0;
  local_98 = 0;
  uStack_8c = 0;
  uStack_88 = 0;
  local_58 = 0;
  uStack_50 = 0;
  param_3[1] = 0;
  param_3[4] = 0;
  *(undefined8 *)(param_3 + 5) = 0;
  *(undefined8 *)(param_3 + 7) = 0;
  uStack_90 = 0;
  uStack_84 = 0;
  *(undefined2 *)(param_3 + 9) = 0;
  *(undefined8 *)(param_3 + 10) = 0;
  *(undefined8 *)(param_3 + 0xc) = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  local_78 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  local_68 = 0;
  uStack_64 = 0;
  auStack_60[0] = 0;
  auStack_60[1] = 0;
  FUN_180200bf0(param_3 + 0xe,auStack_60);
  FUN_180200b70(auStack_60);
  uVar14 = *(undefined4 *)(*(longlong *)(lVar10 + 0x40) + 0x18);
  *param_3 = uVar14;
  uVar15 = *(undefined4 *)(*(longlong *)(lVar10 + 0x40) + 0x1c);
  param_3[1] = uVar15;
  cVar8 = DAT_180ccfae6;
  uVar16 = *(undefined4 *)(*(longlong *)(lVar10 + 0x40) + 0x20);
  param_3[2] = uVar16;
  if (cVar8 != '\0') {
    uVar14 = DAT_180cfa088;
  }
  param_3[6] = uVar14;
  if (cVar8 != '\0') {
    uVar15 = DAT_180cfa08c;
  }
  param_3[7] = uVar15;
  if (cVar8 != '\0') {
    uVar16 = DAT_180cfa090;
  }
  param_3[8] = uVar16;
  param_3[3] = *(undefined4 *)(lVar10 + 0x58);
  param_3[4] = *(undefined4 *)(lVar10 + 0x5c);
  param_3[5] = *(undefined4 *)(lVar10 + 0x60);
  *(undefined8 *)(param_3 + 10) = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_3 + 0xc) = *(undefined8 *)(param_1 + 0x68);
  if (*(int **)(lVar10 + 0x28) == (int *)0x0) {
    iVar13 = 0;
  }
  else {
    iVar1 = **(int **)(lVar10 + 0x28);
    iVar13 = *(int *)(lVar10 + 0x20);
    if (iVar1 < *(int *)(lVar10 + 0x20)) {
      iVar13 = iVar1;
    }
  }
  uVar12 = 0;
  if (0 < iVar13) {
    do {
      uVar7 = local_78;
      lVar3 = *(longlong *)(*(longlong *)(lVar10 + 0x28) + 8 + (ulonglong)uVar12 * 8);
      if (lVar3 - 0x10000U < 0x7ffffffeffff) {
        uVar2 = *(uint *)(lVar3 + 0x10);
        local_98 = CONCAT44(local_98._4_4_,*(undefined4 *)(lVar3 + 0x24));
        uStack_90 = 0;
        uStack_8c = 0;
        uVar5 = uStack_88 >> 8;
        uStack_88 = uStack_88 & 0xffffff00;
        uStack_84 = 0;
        uStack_80 = 0;
        uStack_7c = 0;
        local_78 = local_78 & 0xffffff00;
        uStack_74 = 0;
        uStack_72 = 0;
        uStack_70 = 0;
        uStack_6c = 0;
        uVar6 = local_68 >> 8;
        local_68 = local_68 & 0xffffff00;
        uStack_64 = 0;
        auStack_60[0] = 0;
        auStack_60[1] = 0;
        local_58 = local_58 & 0xffffffffffff0000;
        if ((uVar2 & 1) != 0) {
          uStack_90 = (undefined4)*(undefined8 *)(lVar3 + 0x18);
          uStack_8c = (undefined4)((ulonglong)*(undefined8 *)(lVar3 + 0x18) >> 0x20);
        }
        if ((uVar2 & 2) != 0) {
          uStack_88 = CONCAT31((int3)uVar5,*(undefined1 *)(lVar3 + 0x20));
        }
        if ((uVar2 & 0x60) != 0) {
          uStack_70 = *(uint *)(lVar3 + 0x34);
          uStack_74 = (undefined2)*(undefined4 *)(lVar3 + 0x30);
          uStack_72 = (undefined2)((uint)*(undefined4 *)(lVar3 + 0x30) >> 0x10);
          local_68 = CONCAT31((int3)uVar6,1);
        }
        if ((uVar2 & 0x18) != 0) {
          uStack_64 = *(undefined4 *)(lVar3 + 0x28);
          auStack_60[0] = *(uint *)(lVar3 + 0x2c);
          local_58 = CONCAT71(local_58._1_7_,1);
        }
        puVar4 = *(undefined8 **)(param_3 + 0x10);
        local_58._0_3_ = CONCAT12(1,(undefined2)local_58);
        if (puVar4 == *(undefined8 **)(param_3 + 0x12)) {
          FUN_18008c530(param_3 + 0xe,puVar4,&local_98);
        }
        else {
          *puVar4 = local_98;
          puVar4[1] = CONCAT44(uStack_8c,uStack_90);
          puVar4[2] = (ulonglong)uStack_88;
          puVar4[3] = 0;
          puVar4[4] = CONCAT26(uStack_72,CONCAT24(uStack_74,uVar7)) & 0xffffffffffffff00;
          puVar4[5] = (ulonglong)uStack_70;
          puVar4[6] = CONCAT44(uStack_64,local_68);
          puVar4[7] = (ulonglong)auStack_60[0];
          puVar4[8] = local_58;
          *(longlong *)(param_3 + 0x10) = *(longlong *)(param_3 + 0x10) + 0x48;
        }
      }
      uVar12 = uVar12 + 1;
    } while ((int)uVar12 < iVar13);
    param_2 = local_a8;
  }
  uStack_88 = 0;
  uStack_84 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  uStack_90 = 0;
  uStack_8c = 0;
  if (DAT_1809eea10 == 0) {
    if (DAT_1809eea18 == '\0') {
      DAT_1809eea10 = FUN_180264b70(PTR_s_sv_quantize_movement_input_1809eea08);
      DAT_1809eea18 = DAT_1809eea10 == 0;
      if (DAT_1809eea10 != 0) goto LAB_18026752a;
    }
  }
  else {
LAB_18026752a:
    cVar8 = FUN_180264d70(DAT_1809eea10);
    if (cVar8 != '\0') {
      uVar9 = 1;
      goto LAB_18026753c;
    }
  }
  uVar9 = 0;
LAB_18026753c:
  local_98 = CONCAT71(local_98._1_7_,uVar9);
  uVar9 = FUN_1801eca30();
  local_98._0_2_ = CONCAT11(uVar9,(undefined1)local_98);
  lVar10 = FUN_180266660();
  if (((lVar10 == 0) || (DAT_180cf9f80 == 0)) ||
     (cVar8 = FUN_180011220((ulonglong)DAT_180cf9f80 + lVar10), cVar8 == '\0')) {
    uVar9 = 0;
  }
  else {
    uVar9 = 1;
  }
  local_98._0_3_ = CONCAT12(uVar9,(undefined2)local_98);
  if ((*param_2 == 0) || (DAT_180ca0a44 == 0)) {
    uVar9 = 0;
  }
  else {
    uVar9 = FUN_180011220(*param_2 + (ulonglong)DAT_180ca0a44);
  }
  local_98 = (ulonglong)CONCAT14(uVar9,(undefined4)local_98);
  local_78 = DAT_1809f351c;
  if ((DAT_180ca0970 != 0) &&
     (lVar10 = FUN_18000f3a0((ulonglong)DAT_180ca0970 + *param_2),
     lVar10 - 0x10000U < 0x7ffffffeffff)) {
    if (DAT_180ca0990 != 0) {
      uVar11 = FUN_18000f3a0((ulonglong)DAT_180ca0990 + 8 + lVar10);
      uStack_90 = (undefined4)uVar11;
      uStack_8c = (undefined4)((ulonglong)uVar11 >> 0x20);
    }
    if (DAT_180ca0994 != 0) {
      uStack_88 = FUN_18000f3d0(lVar10 + (ulonglong)DAT_180ca0994);
    }
    if (DAT_180ca0998 != 0) {
      uStack_84 = FUN_18000f3d0(lVar10 + (ulonglong)DAT_180ca0998);
    }
    if (DAT_180cf9f94 != 0) {
      uStack_80 = FUN_18000f3d0(lVar10 + (ulonglong)DAT_180cf9f94);
    }
  }
  if (DAT_180ca0a20 != 0) {
    uStack_7c = FUN_18000f3d0((ulonglong)DAT_180ca0a20 + *param_2);
  }
  FUN_1801ef6c0(param_3,&local_98);
  return 1;
}



/* ===== 180267680 FUN_180267680 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_180267680(longlong param_1,float *param_2,undefined1 *param_3)

{
  float fVar1;
  ulonglong uVar2;
  float fVar3;
  ulonglong uVar4;
  int iVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  
  pfVar6 = *(float **)(param_1 + 0x38);
  uVar4 = 0x8e38e38e38e38e39;
  if (0x20 < (ulonglong)
             (((longlong)*(float **)(param_1 + 0x40) - (longlong)pfVar6 >> 3) * -0x71c71c71c71c71c7)
     ) {
    uVar4 = snprintf(param_3,0x40,"%d steps");
    return uVar4 & 0xffffffffffffff00;
  }
  fVar7 = *param_2;
  iVar5 = 0;
  fVar8 = param_2[1];
  fVar3 = 0.0;
  while( true ) {
    if (pfVar6 == *(float **)(param_1 + 0x40)) {
      *param_3 = 0;
      return CONCAT71((int7)(uVar4 >> 8),1);
    }
    fVar1 = *pfVar6;
    if ((fVar1 < fVar3) || (DAT_1808ac34c < fVar1)) {
      uVar4 = snprintf(param_3,0x40,"step %d when %.3f after %.3f",iVar5,(double)fVar1,(double)fVar3
                      );
      return uVar4 & 0xffffffffffffff00;
    }
    uVar2 = *(ulonglong *)(pfVar6 + 2);
    if (uVar2 == 0) {
      if (*(char *)(pfVar6 + 0x10) != '\0') {
        fVar7 = fVar7 + pfVar6[0xd];
        fVar8 = fVar8 + pfVar6[0xe];
      }
    }
    else {
      uVar4 = uVar2 - 1;
      if (((uVar2 & uVar4) != 0) || ((uVar2 & 0xe1f) == 0)) {
        uVar4 = snprintf(param_3,0x40,"step %d button %llx",iVar5,uVar2);
        return uVar4 & 0xffffffffffffff00;
      }
      fVar3 = DAT_1808acda0;
      if (*(char *)(pfVar6 + 4) != '\0') {
        fVar3 = DAT_1808ac34c;
      }
      if (uVar2 == 8) {
        fVar7 = fVar7 + fVar3;
      }
      else if (uVar2 == 0x10) {
        fVar7 = fVar7 - fVar3;
      }
      else if (uVar2 == 0x200) {
        fVar8 = fVar8 + fVar3;
      }
      else if (uVar2 == 0x400) {
        fVar8 = fVar8 - fVar3;
      }
    }
    if ((DAT_1808ac540 < (float)((uint)fVar7 & _DAT_1808ade90)) ||
       (DAT_1808ac540 < (float)((uint)fVar8 & _DAT_1808ade90))) break;
    iVar5 = iVar5 + 1;
    pfVar6 = pfVar6 + 0x12;
    fVar3 = fVar1;
  }
  uVar4 = snprintf(param_3,0x40,"step %d sum %.3f/%.3f",iVar5,(double)fVar7,(double)fVar8);
  return uVar4 & 0xffffffffffffff00;
}



/* ===== 180267880 FUN_180267880 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180267880(longlong param_1)

{
  uint *puVar1;
  longlong lVar2;
  char cVar3;
  ulonglong uVar4;
  float *pfVar5;
  longlong lVar6;
  char cVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  char *pcVar11;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  undefined *puVar15;
  char cVar16;
  int iVar17;
  uint uVar18;
  bool bVar19;
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
  undefined1 auStack_258 [32];
  undefined *local_238;
  double local_230;
  double local_228;
  char *local_220;
  double local_218;
  double local_210;
  char *local_208;
  double local_200;
  undefined8 *local_1f8;
  double local_1f0;
  undefined *local_1e8;
  double local_1e0;
  double local_1d8;
  char *local_1d0;
  double local_1c8;
  double local_1c0;
  double local_1b8;
  double local_1b0;
  undefined8 *local_1a8;
  int local_1a0;
  undefined *local_198;
  undefined8 *local_190;
  char local_188;
  float local_184;
  undefined8 local_180;
  float local_178;
  float local_174;
  float local_170;
  float local_16c;
  longlong local_168;
  longlong local_160;
  char *local_158 [4];
  undefined8 local_138;
  char cStack_130;
  undefined7 uStack_12f;
  undefined1 uStack_128;
  undefined7 uStack_127;
  undefined1 uStack_120;
  undefined7 uStack_11f;
  undefined1 uStack_118;
  undefined7 uStack_117;
  undefined1 uStack_110;
  undefined7 local_10f;
  undefined1 uStack_108;
  undefined7 uStack_107;
  undefined1 uStack_100;
  undefined7 local_ff;
  undefined1 uStack_f8;
  undefined8 uStack_f7;
  undefined8 local_ef;
  undefined7 uStack_e7;
  undefined1 uStack_e0;
  undefined7 uStack_df;
  ulonglong local_d8;
  
  pfVar8 = DAT_180cf9fd8;
  fVar28 = DAT_180ceb264;
  fVar22 = DAT_180ceb100;
  cVar3 = DAT_180cc412f;
  fVar25 = DAT_1808acbd0;
  fVar24 = DAT_1808ac1f4;
  local_d8 = DAT_180919500 ^ (ulonglong)auStack_258;
  if (DAT_180ccfae7 == '\0') {
    return;
  }
  DAT_180ccfae7 = 0;
  if (param_1 == 0) {
    DAT_180ccfae7 = 0;
    return;
  }
  lVar12 = *(longlong *)(param_1 + 0x40);
  if (0x7ffffffefffe < lVar12 - 0x10000U) {
    DAT_180ccfae7 = 0;
    return;
  }
  if (0x7ffffffefffe < *(longlong *)(lVar12 + 0x40) - 0x10000U) {
    DAT_180ccfae7 = 0;
    return;
  }
  if (lVar12 == 0) {
    DAT_180ccfae7 = 0;
    return;
  }
  local_174 = DAT_180cf9fa0;
  local_184 = DAT_180cf9fa4;
  local_16c = DAT_180cf9fa8;
  local_188 = DAT_180cc412e;
  local_170 = DAT_180cf9fbc;
  local_178 = DAT_180ceb264;
  local_180 = CONCAT44(local_180._4_4_,DAT_180ceb100);
  local_168 = param_1;
  local_160 = lVar12;
  if (DAT_180cc412f == '\0') {
LAB_180267ab9:
    FUN_1801ef820(&DAT_180cf9fa0);
    uVar18 = 0xffffffff;
    fVar29 = 0.0;
    fVar27 = 0.0;
    if (cVar3 != '\0') goto LAB_180267ae3;
LAB_180267c22:
    FUN_1801f02b0(&DAT_180cf9fa0,&DAT_1809f3588);
    FUN_1801f05d0(&DAT_180cf9fa0,&DAT_1809f3588);
    if (cVar3 != '\0') {
LAB_180267c54:
      bVar19 = false;
      fVar21 = 0.0;
      fVar20 = 0.0;
      goto LAB_180267c5c;
    }
  }
  else {
    uVar4 = 0;
    uVar18 = 0xffffffff;
    fVar29 = 0.0;
    fVar27 = 0.0;
    iVar17 = (int)((longlong)DAT_180cf9fe0 - (longlong)DAT_180cf9fd8 >> 3) * 0x38e38e39;
    if (iVar17 < 1) goto LAB_180267ab9;
    fVar26 = DAT_180cf9fbc;
    fVar21 = DAT_180cf9fb8;
    fVar23 = DAT_180cf9fc0;
    do {
      if (*(char *)(pfVar8 + uVar4 * 0x12 + 8) != '\0') {
        fVar21 = pfVar8[uVar4 * 0x12 + 5];
        fVar26 = pfVar8[uVar4 * 0x12 + 6];
        fVar23 = pfVar8[uVar4 * 0x12 + 7];
      }
      iVar13 = (int)uVar4;
      if ((*(longlong *)(pfVar8 + uVar4 * 0x12 + 2) == 0) &&
         (*(char *)(pfVar8 + uVar4 * 0x12 + 0x10) != '\0')) {
        local_230 = (double)CONCAT44(local_230._4_4_,pfVar8[uVar4 * 0x12 + 0xe]);
        local_238 = (undefined *)CONCAT44(local_238._4_4_,pfVar8[uVar4 * 0x12 + 0xd]);
        fVar27 = (float)FUN_1802688f0(uVar4 * 9,fVar21,fVar26,fVar23);
        if ((int)uVar18 < 0) {
          fVar29 = fVar27;
        }
        if (-1 < (int)uVar18) {
          uVar4 = (ulonglong)uVar18;
        }
        uVar18 = (uint)uVar4;
      }
      uVar14 = iVar13 + 1;
      uVar4 = (ulonglong)uVar14;
    } while ((int)uVar14 < iVar17);
    FUN_1801ef820(&DAT_180cf9fa0);
LAB_180267ae3:
    fVar23 = DAT_180cf9fa8;
    fVar26 = DAT_180cf9fa4;
    fVar21 = DAT_180cf9fa0;
    if ((int)uVar18 < 0) goto LAB_180267c22;
    pfVar9 = (float *)0x0;
    pfVar10 = (float *)0x0;
    bVar19 = true;
    pfVar8 = DAT_180cf9fd8;
    if (DAT_180cf9fd8 == DAT_180cf9fe0) {
LAB_180267bf7:
      FUN_1801f02b0(&DAT_180cf9fa0,&DAT_1809f3588);
      FUN_1801f05d0(&DAT_180cf9fa0,&DAT_1809f3588);
      goto LAB_180267c54;
    }
    do {
      if ((!bVar19) || (*(char *)(pfVar8 + 0xc) != '\0')) {
        bVar19 = false;
      }
      else {
        bVar19 = true;
      }
      pfVar5 = pfVar9;
      if ((*(longlong *)(pfVar8 + 2) == 0) && (*(char *)(pfVar8 + 0x10) != '\0')) {
        pfVar5 = pfVar8;
        if (pfVar9 != (float *)0x0) {
          pfVar5 = pfVar9;
        }
        pfVar10 = pfVar8;
      }
      pfVar8 = pfVar8 + 0x12;
      pfVar9 = pfVar5;
    } while (pfVar8 != DAT_180cf9fe0);
    if (((!bVar19) || (pfVar5 == (float *)0x0)) || (pfVar10 == (float *)0x0)) goto LAB_180267bf7;
    local_230._0_4_ = pfVar5[0xe];
    local_238._0_4_ = pfVar5[0xd];
    fVar20 = (float)FUN_1802688f0(pfVar8,DAT_180cf9fa0,DAT_180cf9fa4,DAT_180cf9fa8);
    local_230 = (double)CONCAT44(local_230._4_4_,pfVar10[0xe]);
    local_238 = (undefined *)CONCAT44(local_238._4_4_,pfVar10[0xd]);
    fVar21 = (float)FUN_1802688f0(fVar20,fVar21,fVar26,fVar23);
    FUN_1801f02b0(&DAT_180cf9fa0,&DAT_1809f3588);
    FUN_1801f05d0(&DAT_180cf9fa0,&DAT_1809f3588);
LAB_180267c5c:
    if ((DAT_1811160fc < 600) && (DAT_181116108 = DAT_181116108 + 1, (DAT_181116108 & 3) == 0)) {
      DAT_1811160fc = DAT_1811160fc + 1;
      pcVar11 = " (view steps / no move step: not compared)";
      if (bVar19) {
        pcVar11 = "";
      }
      fVar22 = (float)FUN_18053f0d0((fVar21 - fVar27) / fVar25 + fVar24);
      fVar24 = DAT_1808acbd0;
      fVar23 = (float)FUN_18053f0d0((fVar20 - fVar29) / DAT_1808acbd0 + DAT_1808ac1f4);
      fVar28 = local_178;
      fVar26 = local_184;
      cVar16 = local_188;
      local_1f8 = (undefined8 *)(double)fVar20;
      local_200 = (double)fVar29;
      local_1f0 = (double)((fVar20 - fVar29) - fVar23 * fVar24);
      local_210 = (double)DAT_180cf9fa8;
      local_208 = (char *)CONCAT44(local_208._4_4_,
                                   (int)((longlong)DAT_180cf9fe0 - (longlong)DAT_180cf9fd8 >> 3) *
                                   0x38e38e39);
      local_218 = (double)DAT_180cf9fa4;
      local_220 = (char *)(double)DAT_180cf9fa0;
      local_228 = (double)local_184;
      local_230 = (double)local_174;
      local_238 = (undefined *)CONCAT44(local_238._4_4_,(uint)(local_188 != '\0'));
      local_1e8 = (undefined *)(double)fVar27;
      local_1e0 = (double)fVar21;
      local_1d8 = (double)((fVar21 - fVar27) - fVar22 * fVar25);
      local_1d0 = pcVar11;
      FUN_1801ec960("strafe: cmd %d speed %.1f target %.1f stop %d | view %.1f/%.1f -> sent %.1f/%.1f/%.1f | steps %d | first want %.1f sent %.1f (err %.1f) last want %.1f sent %.1f (err %.1f)%s"
                    ,*(undefined4 *)(param_1 + 8),(double)(float)local_180,(double)local_178);
      fVar25 = DAT_1808acbd0;
      fVar22 = (float)local_180;
      fVar24 = DAT_1808ac1f4;
      goto LAB_180267e37;
    }
    fVar28 = local_178;
  }
  fVar26 = local_184;
  cVar16 = local_188;
LAB_180267e37:
  puVar15 = &DAT_18073d0c8;
  if (DAT_1809f3588 != '\0') {
    if (DAT_1809f3589 == '\0') {
      iVar17 = *(int *)(local_168 + 8);
      if ((cVar3 == '\0') || (DAT_1809f31f8 != iVar17 + -1)) {
        fVar29 = 0.0;
      }
      else {
        fVar29 = fVar22 - _DAT_180cf9f8c;
      }
      if (DAT_1809f31fc == iVar17) {
        DAT_180cfa0ac = DAT_180cfa0ac + 1;
      }
      else {
        DAT_180cfa0ac = 0;
      }
      cVar7 = (char)(undefined4)DAT_180ceb0ac;
      DAT_1809f31fc = iVar17;
      if ((cVar7 != '\0') || (cVar3 != '\0')) {
        if (DAT_180cfa0a8 < 3000) {
          DAT_180cfa0a8 = DAT_180cfa0a8 + 1;
          cStack_130 = s_strafe___18073ce70[8];
          local_138._0_1_ = s_strafe___18073ce70[0];
          local_138._1_1_ = s_strafe___18073ce70[1];
          local_138._2_1_ = s_strafe___18073ce70[2];
          local_138._3_1_ = s_strafe___18073ce70[3];
          local_138._4_1_ = s_strafe___18073ce70[4];
          local_138._5_1_ = s_strafe___18073ce70[5];
          local_138._6_1_ = s_strafe___18073ce70[6];
          local_138._7_1_ = s_strafe___18073ce70[7];
          local_ef = 0;
          uStack_e7 = 0;
          uStack_e0 = 0;
          uStack_df = 0;
          uStack_12f = 0;
          uStack_128 = 0;
          uStack_127 = 0;
          uStack_120 = 0;
          uStack_11f = 0;
          uStack_118 = 0;
          uStack_117 = 0;
          uStack_110 = 0;
          local_10f = 0;
          uStack_108 = 0;
          uStack_107 = 0;
          uStack_100 = 0;
          local_ff = 0;
          uStack_f8 = 0;
          uStack_f7 = 0;
          if (cVar3 != '\0') {
            local_220 = "live";
            if (DAT_180cc412a != '\0') {
              local_220 = "rec";
            }
            local_230 = (double)fVar28;
            local_228 = (double)CONCAT44(local_228._4_4_,(uint)(cVar16 != '\0'));
            local_238 = (undefined *)(double)fVar29;
            snprintf(&local_138,0x60,"strafe spd %.1f gain %+.2f tgt %.1f stop %d snap %s",
                     (double)fVar22);
            cVar7 = (char)(undefined4)DAT_180ceb0ac;
          }
          iVar13 = DAT_180cfa0ac;
          fVar29 = DAT_180cf9fa4;
          fVar28 = DAT_180ceb0dc;
          fVar22 = DAT_180ceb0b4;
          if (cVar7 == '\0') {
            fVar22 = DAT_180cf9fa4 - fVar26;
            fVar24 = (float)FUN_18053f0d0(fVar22 / fVar25 + fVar24);
            local_1f8 = &local_138;
            local_208 = (char *)(double)DAT_180cf9fa8;
            local_210 = (double)fVar29;
            local_200 = (double)(fVar22 - fVar24 * fVar25);
            local_218 = (double)DAT_180cf9fa0;
            local_220 = (char *)CONCAT44(local_220._4_4_,DAT_180ceb0a8);
            local_228 = (double)CONCAT44(local_228._4_4_,DAT_180ceb0a4);
            local_230 = (double)CONCAT44(local_230._4_4_,DAT_180ceb0a0);
            local_238 = (undefined *)CONCAT44(local_238._4_4_,DAT_1809f35a8);
            FUN_1801ec960("qa: cmd %d.%d valve %d safe %d | path same %d W %d step %d | no quantised W-mode (move on the grid or no move) | sent %.2f/%.2f/%.2f yaw shift %+.2f | %s"
                          ,iVar17,iVar13,DAT_1809f358a != '\0');
          }
          else {
            fVar29 = DAT_180ceb0dc - DAT_180ceb0b4;
            fVar24 = (float)FUN_18053f0d0(fVar29 / fVar25 + fVar24);
            local_1b8 = (double)DAT_180ceb0d4;
            local_1c0 = (double)DAT_180ceb0d0;
            local_1b0 = (double)(fVar29 - fVar24 * fVar25);
            local_1c8 = (double)DAT_180ceb0e0;
            local_1d0 = (char *)(double)fVar28;
            local_1d8 = (double)DAT_180ceb0d8;
            if (DAT_180ceb0c8 == '\0') {
              local_1e8 = &DAT_1806d2870;
            }
            else {
              local_1e8 = &DAT_1806d2ba0;
              if (DAT_180ceb0c9 != '\0') {
                local_1e8 = &DAT_18073d0c8;
              }
            }
            local_1a8 = &local_138;
            local_1e0 = (double)DAT_180ceb0cc;
            local_1f0 = (double)DAT_180ceb0c4;
            local_1f8 = (undefined8 *)(double)DAT_180ceb0c0;
            local_200 = (double)DAT_180ceb0bc;
            local_208 = (char *)(double)DAT_180ceb0b8;
            local_210 = (double)fVar22;
            local_218 = (double)DAT_180ceb0ac._4_4_;
            local_220 = (char *)CONCAT44(local_220._4_4_,DAT_180ceb0a8);
            local_228 = (double)CONCAT44(local_228._4_4_,DAT_180ceb0a4);
            local_230 = (double)CONCAT44(local_230._4_4_,DAT_180ceb0a0);
            local_238 = (undefined *)CONCAT44(local_238._4_4_,DAT_1809f35a8);
            FUN_1801ec960("qa: cmd %d.%d valve %d safe %d | path same %d W %d step %d | aa %.2f/%.2f/%.2f cam %.2f | wish %.2f best %.2f | search %s err %.5f | sent %.2f/%.2f/%.2f move %+.0f/%+.0f | yaw shift %+.2f | %s"
                          ,iVar17,iVar13,DAT_1809f358a != '\0');
          }
        }
        if (cVar3 != '\0') {
          _DAT_180cf9f8c = (float)local_180;
          DAT_1809f31f8 = iVar17;
        }
      }
    }
  }
  uVar18 = ((uint)DAT_1809f3590 ^ (uint)DAT_180cf9fc8) & 0x618;
  local_138 = 0;
  cStack_130 = 0;
  uStack_12f = 0;
  uStack_128 = 0;
  uStack_127 = 0;
  uStack_120 = 0;
  uStack_11f = 0;
  uStack_118 = 0;
  uStack_117 = 0;
  uStack_110 = 0;
  local_10f = 0;
  uStack_108 = 0;
  uStack_107 = 0;
  uStack_100 = 0;
  local_ff = 0;
  if (DAT_180ccfae5 == '\0') {
    local_180 = CONCAT44(DAT_1809f359c,DAT_1809f3598);
  }
  else {
    local_180 = DAT_180cfa080;
  }
  cVar3 = FUN_180267680(&DAT_180cf9fa0,&local_180,&local_138);
  DAT_180cfa0a0 = DAT_180cfa0a0 + 1;
  bVar19 = (DAT_180cfa0a0 & 0x7f) == 0;
  if ((uVar18 != 0) && (DAT_181116100 < 400)) {
    DAT_181116100 = DAT_181116100 + 1;
    bVar19 = true;
  }
  if ((cVar3 == '\0') && (DAT_1811160f8 < 400)) {
    DAT_1811160f8 = DAT_1811160f8 + 1;
    bVar19 = true;
  }
  if (bVar19) {
    local_1a0 = 0;
    local_158[0] = "live";
    local_158[1] = "rec";
    local_158[2] = "forced";
    for (pfVar8 = DAT_180cf9fd8; pfVar8 != DAT_180cf9fe0; pfVar8 = pfVar8 + 0x12) {
      local_1a0 = (local_1a0 + 1) - (uint)(*(char *)(pfVar8 + 0x10) == '\0');
    }
    if (cVar3 != '\0') {
      puVar15 = &DAT_1806d2ba0;
    }
    local_220 = (char *)(ulonglong)((uint)DAT_1809f3590 & 0xe1f);
    local_218 = (double)(ulonglong)((uint)DAT_180cf9fc8 & 0xe1f);
    local_1b0 = (double)DAT_180cf9fb0;
    local_1b8 = (double)DAT_180cf9fac;
    local_1c0 = (double)DAT_180cf9fa8;
    iVar17 = 0;
    if (DAT_1809f31f4 == *(int *)(local_168 + 8)) {
      iVar17 = DAT_180cf9f90;
    }
    local_190 = &local_138;
    local_1a8 = (undefined8 *)
                CONCAT44(local_1a8._4_4_,
                         (int)((longlong)DAT_180cf9fe0 - (longlong)DAT_180cf9fd8 >> 3) * 0x38e38e39)
    ;
    local_1c8 = (double)DAT_180cf9fa4;
    local_1d0 = (char *)(double)DAT_180cf9fa0;
    local_1d8 = (double)local_170;
    local_1e0 = (double)local_16c;
    local_1e8 = (undefined *)(double)fVar26;
    local_1f0 = (double)local_174;
    local_1f8 = (undefined8 *)(double)local_180._4_4_;
    local_200 = (double)(float)local_180;
    local_208 = (char *)(double)DAT_1809f359c;
    local_210 = (double)DAT_1809f3598;
    local_228 = (double)CONCAT44(local_228._4_4_,DAT_1809f35a8);
    local_230 = (double)CONCAT44(local_230._4_4_,(uint)(DAT_1809f358a != '\0'));
    local_238 = (undefined *)CONCAT44(local_238._4_4_,(uint)(DAT_1809f3589 != '\0'));
    local_198 = puVar15;
    FUN_1801ec960("mfix: cmd %d src %s | qa %d sva %d valve %d safe %d | held %llx -> %llx prev %.2f/%.2f imp %.2f/%.2f | view %.1f/%.1f/%.1f basis %.1f -> sent %.1f/%.1f/%.1f | base %.2f/%.2f | steps %d (move %d) | game check %s %s"
                  ,*(int *)(local_168 + 8),local_158[iVar17],DAT_1809f3588 != '\0');
    pfVar8 = DAT_180cf9fe0;
    if ((cVar3 == '\0') || (uVar18 != 0)) {
      iVar17 = 0;
      pfVar9 = DAT_180cf9fd8;
      if (DAT_180cf9fd8 != DAT_180cf9fe0) {
        do {
          if (5 < iVar17) break;
          local_208 = " (none)";
          local_220 = " (none)";
          local_238 = &DAT_1806f8de8;
          if (*(char *)(pfVar9 + 0xc) != '\0') {
            local_208 = "";
          }
          if (*(char *)(pfVar9 + 0x10) != '\0') {
            local_220 = "";
          }
          if (*(char *)(pfVar9 + 4) != '\0') {
            local_238 = &DAT_1806e1bb8;
          }
          local_210 = (double)pfVar9[10];
          local_218 = (double)pfVar9[9];
          local_228 = (double)pfVar9[0xe];
          local_230 = (double)pfVar9[0xd];
          FUN_1801ec960("  mfix step %d: when %.3f btn %llx %s move %+.3f/%+.3f%s view %+.2f/%+.2f%s"
                        ,iVar17,(double)*pfVar9,*(undefined8 *)(pfVar9 + 2));
          iVar17 = iVar17 + 1;
          pfVar9 = pfVar9 + 0x12;
        } while (pfVar9 != pfVar8);
        lVar12 = local_160;
      }
    }
  }
  lVar2 = local_168;
  *(undefined4 *)(lVar12 + 0x20) = 0;
  pfVar9 = DAT_180cf9fe0;
  _DAT_1809f3574 = 0;
  _DAT_1809f357c = 0;
  DAT_1809f3570 = *(undefined4 *)(local_168 + 8);
  pfVar8 = DAT_180cf9fd8;
  while ((pfVar8 != pfVar9 && (lVar6 = FUN_180265420(lVar12), lVar6 != 0))) {
    DAT_1809f357c = DAT_1809f357c + 1;
    if (*(char *)(pfVar8 + 0x10) != '\0') {
      DAT_1809f3580 = DAT_1809f3580 + 1;
    }
    *(float *)(lVar6 + 0x24) = *pfVar8;
    uVar18 = *(uint *)(lVar6 + 0x10);
    uVar14 = uVar18 | 4;
    *(uint *)(lVar6 + 0x10) = uVar14;
    if (*(longlong *)(pfVar8 + 2) != 0) {
      *(longlong *)(lVar6 + 0x18) = *(longlong *)(pfVar8 + 2);
      uVar14 = uVar18 | 7;
      *(undefined1 *)(lVar6 + 0x20) = *(undefined1 *)(pfVar8 + 4);
      *(uint *)(lVar6 + 0x10) = uVar14;
    }
    if (*(char *)(pfVar8 + 0x10) != '\0') {
      fVar24 = pfVar8[0xd];
      if (fVar24 == 0.0) {
        fVar24 = 0.0;
      }
      *(float *)(lVar6 + 0x28) = fVar24;
      fVar25 = pfVar8[0xe];
      if (fVar25 == 0.0) {
        fVar25 = 0.0;
      }
      *(float *)(lVar6 + 0x2c) = fVar25;
      if (fVar24 == 0.0) {
        uVar14 = *(uint *)(lVar6 + 0x10);
      }
      else {
        uVar14 = uVar14 | 8;
        *(uint *)(lVar6 + 0x10) = uVar14;
      }
      if (fVar25 != 0.0) {
        uVar14 = uVar14 | 0x10;
        *(uint *)(lVar6 + 0x10) = uVar14;
      }
    }
    if (*(char *)(pfVar8 + 0xc) != '\0') {
      fVar24 = pfVar8[9];
      if (fVar24 == 0.0) {
        fVar24 = 0.0;
      }
      *(float *)(lVar6 + 0x30) = fVar24;
      fVar25 = pfVar8[10];
      if (fVar25 == 0.0) {
        fVar25 = 0.0;
      }
      *(float *)(lVar6 + 0x34) = fVar25;
      if (fVar24 == 0.0) {
        uVar14 = *(uint *)(lVar6 + 0x10);
      }
      else {
        uVar14 = uVar14 | 0x20;
        *(uint *)(lVar6 + 0x10) = uVar14;
      }
      if (fVar25 != 0.0) {
        *(uint *)(lVar6 + 0x10) = uVar14 | 0x40;
      }
    }
    pfVar8 = pfVar8 + 0x12;
  }
  if (*(longlong *)(lVar12 + 0x40) - 0x10000U < 0x7ffffffeffff) {
    *(float *)(*(longlong *)(lVar12 + 0x40) + 0x18) = DAT_180cf9fa0;
    *(float *)(*(longlong *)(lVar12 + 0x40) + 0x1c) = DAT_180cf9fa4;
    *(float *)(*(longlong *)(lVar12 + 0x40) + 0x20) = DAT_180cf9fa8;
    puVar1 = (uint *)(*(longlong *)(lVar12 + 0x40) + 0x10);
    *puVar1 = *puVar1 | 7;
    *(uint *)(lVar12 + 0x10) = *(uint *)(lVar12 + 0x10) | 4;
  }
  fVar24 = DAT_180cf9fac;
  if (DAT_180cf9fac == 0.0) {
    fVar24 = 0.0;
  }
  fVar25 = DAT_180cf9fb0;
  if (DAT_180cf9fb0 == 0.0) {
    fVar25 = 0.0;
  }
  fVar22 = DAT_180cf9fb4;
  if (DAT_180cf9fb4 == 0.0) {
    fVar22 = 0.0;
  }
  *(float *)(lVar12 + 0x58) = fVar24;
  *(float *)(lVar12 + 0x5c) = fVar25;
  *(float *)(lVar12 + 0x60) = fVar22;
  _DAT_1809f3574 = CONCAT44(fVar25,fVar24);
  if (fVar24 == 0.0) {
    uVar18 = *(uint *)(lVar12 + 0x10) & 0xffffffbf;
  }
  else {
    uVar18 = *(uint *)(lVar12 + 0x10) | 0x40;
  }
  if (fVar25 == 0.0) {
    uVar18 = uVar18 & 0xffffff7f;
  }
  else {
    uVar18 = uVar18 | 0x80;
  }
  if (fVar22 == 0.0) {
    uVar18 = uVar18 & 0xfffffeff;
  }
  else {
    uVar18 = uVar18 | 0x100;
  }
  *(uint *)(lVar12 + 0x10) = uVar18;
  *(undefined8 *)(lVar2 + 0x60) = DAT_180cf9fc8;
  *(undefined8 *)(lVar2 + 0x68) = DAT_180cf9fd0;
  if (DAT_1809f35e0 != '\0') {
    *(int *)(lVar12 + 0x54) = DAT_1809f35b0;
    uVar18 = *(uint *)(lVar12 + 0x10) & 0xffffffdf;
    if (DAT_1809f35b0 != 0) {
      uVar18 = *(uint *)(lVar12 + 0x10) | 0x20;
    }
    *(uint *)(lVar12 + 0x10) = uVar18;
    FUN_1802663c0(lVar2);
    DAT_1809f35e0 = '\0';
  }
  lVar12 = *(longlong *)(lVar2 + 0x40);
  if (lVar12 - 0x10000U < 0x7ffffffeffff) {
    FUN_180265140(lVar2,lVar12);
    FUN_180265200(lVar12);
  }
  return;
}



/* ===== 1802688f0 FUN_1802688f0 ===== */

undefined8
FUN_1802688f0(undefined8 param_1,float param_2,float param_3,float param_4,float param_5,
             float param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar8;
  undefined8 uVar7;
  float fVar9;
  float fVar10;
  
  fVar4 = DAT_1808ac014;
  param_2 = param_2 * DAT_1808ac014;
  fVar1 = (float)FUN_180517200(param_2);
  param_3 = param_3 * fVar4;
  fVar2 = (float)FUN_180517790(param_3);
  fVar3 = (float)FUN_180517200(param_3);
  param_4 = param_4 * fVar4;
  fVar4 = (float)FUN_180517200(param_4);
  fVar10 = fVar3 * fVar1;
  fVar1 = fVar2 * fVar1;
  fVar5 = (float)FUN_180517790(param_4);
  fVar6 = (float)FUN_180517790(param_2);
  fVar9 = fVar5 * fVar6 * fVar3 - fVar4 * fVar2;
  fVar2 = fVar5 * fVar6 * fVar2 + fVar4 * fVar3;
  fVar4 = fVar1 * fVar1 + fVar10 * fVar10;
  if (fVar4 < 0.0) {
    fVar4 = (float)FUN_18051af10(fVar4);
  }
  else {
    fVar4 = SQRT(fVar4);
  }
  fVar3 = fVar2 * fVar2 + fVar9 * fVar9;
  if (fVar3 < 0.0) {
    fVar3 = (float)FUN_18051af10();
  }
  else {
    fVar3 = SQRT(fVar3);
  }
  if (0.0 < fVar4) {
    fVar10 = fVar10 / fVar4;
    fVar1 = fVar1 / fVar4;
  }
  if (0.0 < fVar3) {
    fVar9 = fVar9 / fVar3;
    fVar2 = fVar2 / fVar3;
  }
  fVar3 = fVar10 * param_5 + fVar9 * param_6;
  fVar4 = fVar1 * param_5 + fVar2 * param_6;
  if ((fVar3 == 0.0) && (fVar4 == 0.0)) {
    fVar4 = 0.0;
    uVar8 = 0;
  }
  else {
    uVar7 = FUN_180516b00(fVar4,fVar3);
    uVar8 = (undefined4)((ulonglong)uVar7 >> 0x20);
    fVar4 = (float)uVar7 * DAT_1808aca98;
  }
  return CONCAT44(uVar8,fVar4);
}



/* ===== 180268ad0 FUN_180268ad0 ===== */

undefined8 FUN_180268ad0(longlong param_1,longlong param_2,undefined4 *param_3)

{
  uint *puVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  int iVar11;
  bool bVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  int local_d8;
  int local_d4;
  undefined2 local_cf;
  undefined1 local_cd;
  uint local_cc;
  int local_c8;
  undefined8 local_c0;
  int local_b8;
  int local_b4;
  int local_b0 [2];
  undefined4 *local_a8;
  
  if (0x7ffffffefffe < param_1 - 0x10000U) {
    return 0;
  }
  if (0x7ffffffefffe < param_2 - 0x10000U) {
    return 0;
  }
  if (param_1 == 0) {
    return 0;
  }
  lVar2 = *(longlong *)(param_1 + 0x40);
  if (0x7ffffffefffe < lVar2 - 0x10000U) {
    return 0;
  }
  if (0x7ffffffefffe < *(longlong *)(lVar2 + 0x40) - 0x10000U) {
    return 0;
  }
  local_a8 = param_3;
  lVar6 = FUN_18000f3a0(param_2 + 0x40);
  if (lVar6 - 0x10000U < 0x7ffffffeffff) {
    uVar3 = FUN_180011200(lVar6 + 0x10);
    lVar7 = FUN_18000f3a0(lVar6 + 0x40);
    if (lVar7 - 0x10000U < 0x7ffffffeffff) {
      uVar16 = FUN_18000f3d0(lVar7 + 0x18);
      uVar17 = FUN_18000f3d0(lVar7 + 0x1c);
      uVar18 = FUN_18000f3d0(lVar7 + 0x20);
      bVar12 = true;
      goto LAB_180268be8;
    }
    bVar12 = true;
  }
  else {
    bVar12 = false;
    uVar3 = 0;
  }
  uVar16 = 0;
  uVar17 = 0;
  uVar18 = 0;
LAB_180268be8:
  if (0x7ffffffefffe < *(longlong *)(lVar2 + 0x40) - 0x10000U) {
    return 0;
  }
  *(undefined4 *)(*(longlong *)(lVar2 + 0x40) + 0x18) = uVar16;
  *(undefined4 *)(*(longlong *)(lVar2 + 0x40) + 0x1c) = uVar17;
  *(undefined4 *)(*(longlong *)(lVar2 + 0x40) + 0x20) = uVar18;
  puVar1 = (uint *)(*(longlong *)(lVar2 + 0x40) + 0x10);
  *puVar1 = *puVar1 | 7;
  *(uint *)(lVar2 + 0x10) = *(uint *)(lVar2 + 0x10) | 4;
  iVar11 = *(int *)(param_1 + 8);
  if (bVar12) {
    iVar4 = FUN_180011200(lVar6 + 0x54);
  }
  else {
    iVar4 = 0;
  }
  local_d4 = (iVar4 - *(int *)(param_2 + 8)) + iVar11;
  *(int *)(lVar2 + 0x54) = local_d4;
  uVar5 = *(uint *)(lVar2 + 0x10) | 0x20;
  if (local_d4 == 0) {
    uVar5 = *(uint *)(lVar2 + 0x10) & 0xffffffdf;
  }
  *(uint *)(lVar2 + 0x10) = uVar5;
  if ((((((!bVar12) || (fVar13 = (float)FUN_18000f3d0(), fVar13 == 0.0)) && (fVar13 = 0.0, !bVar12))
       || (fVar14 = (float)FUN_18000f3d0(), fVar14 == 0.0)) && (fVar14 = 0.0, !bVar12)) ||
     (fVar15 = (float)FUN_18000f3d0(), fVar15 == 0.0)) {
    fVar15 = 0.0;
  }
  *(float *)(lVar2 + 0x58) = fVar13;
  *(float *)(lVar2 + 0x5c) = fVar14;
  *(float *)(lVar2 + 0x60) = fVar15;
  if (fVar13 == 0.0) {
    uVar5 = *(uint *)(lVar2 + 0x10) & 0xffffffbf;
  }
  else {
    uVar5 = *(uint *)(lVar2 + 0x10) | 0x40;
  }
  if (fVar14 == 0.0) {
    uVar5 = uVar5 & 0xffffff7f;
  }
  else {
    uVar5 = uVar5 | 0x80;
  }
  if (fVar15 == 0.0) {
    uVar5 = uVar5 & 0xfffffeff;
  }
  else {
    uVar5 = uVar5 | 0x100;
  }
  *(uint *)(lVar2 + 0x10) = uVar5;
  if (bVar12) {
    local_cc = FUN_180011200(lVar6 + 100);
    iVar11 = DAT_180cf9f88;
    local_c0 = (ulonglong)local_cc;
    local_b8 = DAT_180cf9f88;
    local_c8 = FUN_180011200(lVar6 + 0x70);
    local_b4 = local_c8;
    local_d8 = FUN_180011200(lVar6 + 0x74);
  }
  else {
    local_c0 = 0;
    local_b4 = 0;
    local_d8 = 0;
    local_c8 = 0;
    local_cc = 0;
    local_b8 = DAT_180cf9f88;
    iVar11 = DAT_180cf9f88;
  }
  local_b0[0] = local_d8;
  FUN_180013280(lVar2 + 100,&local_c0);
  uVar5 = *(uint *)(lVar2 + 0x10) | 0x200;
  if (local_cc == 0) {
    uVar5 = *(uint *)(lVar2 + 0x10) & 0xfffffdff;
  }
  *(uint *)(lVar2 + 0x10) = uVar5;
  FUN_180013280(lVar2 + 0x68,(longlong)&local_c0 + 4);
  *(uint *)(lVar2 + 0x10) = *(uint *)(lVar2 + 0x10) & 0xfffffbff;
  FUN_180013280(lVar2 + 0x6c,&local_b8);
  uVar5 = *(uint *)(lVar2 + 0x10) | 0x800;
  if (iVar11 == 0) {
    uVar5 = *(uint *)(lVar2 + 0x10) & 0xfffff7ff;
  }
  *(uint *)(lVar2 + 0x10) = uVar5;
  FUN_180013280(lVar2 + 0x70,&local_b4);
  uVar5 = *(uint *)(lVar2 + 0x10) | 0x1000;
  if (local_c8 == 0) {
    uVar5 = *(uint *)(lVar2 + 0x10) & 0xffffefff;
  }
  *(uint *)(lVar2 + 0x10) = uVar5;
  FUN_180013280(lVar2 + 0x74,local_b0);
  uVar5 = *(uint *)(lVar2 + 0x10) | 0x2000;
  if (local_d8 == 0) {
    uVar5 = *(uint *)(lVar2 + 0x10) & 0xffffdfff;
  }
  *(uint *)(lVar2 + 0x10) = uVar5;
  if ((uVar3 >> 0x11 & 1) == 0) {
    local_d8 = 0xffffff;
    FUN_180013280(lVar2 + 0x84,&local_d8);
    *(uint *)(lVar2 + 0x10) = *(uint *)(lVar2 + 0x10) & 0xfffdffff;
  }
  else {
    if (bVar12) {
      local_d8 = FUN_180011200(lVar6 + 0x84);
    }
    else {
      local_d8 = 0;
    }
    FUN_180013280(lVar2 + 0x84,&local_d8);
    *(uint *)(lVar2 + 0x10) = *(uint *)(lVar2 + 0x10) | 0x20000;
  }
  if ((uVar3 >> 0xf & 1) == 0) {
    local_d8 = 0;
    FUN_180013280(lVar2 + 0x7c,&local_d8);
    *(uint *)(lVar2 + 0x10) = *(uint *)(lVar2 + 0x10) & 0xffff7fff;
  }
  else {
    if (bVar12) {
      local_d8 = FUN_180011200(lVar6 + 0x7c);
    }
    else {
      local_d8 = 0;
    }
    FUN_180013280(lVar2 + 0x7c,&local_d8);
    *(uint *)(lVar2 + 0x10) = *(uint *)(lVar2 + 0x10) | 0x8000;
  }
  *(undefined4 *)(lVar2 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  FUN_180265ac0(param_2 + 0x20);
  uVar3 = *(uint *)(param_2 + 0x20);
  DAT_1809f35d8._0_4_ = 0xffffffff;
  bVar12 = (uVar3 & 0x20) == 0;
  if (bVar12) {
    DAT_1809f35d0._0_4_ = 0xffffffff;
  }
  else {
    DAT_1809f35d0._0_4_ = *(undefined4 *)(param_2 + 0x4c);
  }
  DAT_1809f35d0._4_1_ = !bVar12;
  DAT_1809f35d0._5_2_ = local_cf;
  DAT_1809f35d0._7_1_ = local_cd;
  DAT_1809f35d8._4_1_ = (uVar3 & 0x40) != 0;
  if ((bool)DAT_1809f35d8._4_1_) {
    DAT_1809f35d8._0_4_ = *(undefined4 *)(param_2 + 0x50);
  }
  DAT_1809f35b0 = local_d4;
  DAT_1809f35d8._5_2_ = local_cf;
  DAT_1809f35d8._7_1_ = local_cd;
  FUN_1802663c0(param_1);
  DAT_1809f35e0 = 0;
  uVar8 = *(undefined1 *)(param_2 + 0x49);
  uVar9 = *(undefined1 *)(param_2 + 0x4a);
  uVar10 = *(undefined1 *)(param_2 + 0x4b);
  if ((uVar3 & 2) == 0) {
    *(undefined1 *)(param_1 + 0x48) = 0;
    uVar5 = *(uint *)(param_1 + 0x20) & 0xfffffffd;
  }
  else {
    *(undefined1 *)(param_1 + 0x48) = *(undefined1 *)(param_2 + 0x48);
    uVar5 = *(uint *)(param_1 + 0x20) | 2;
  }
  if ((uVar3 & 4) == 0) {
    uVar5 = uVar5 & 0xfffffffb;
    uVar8 = 0;
  }
  else {
    uVar5 = uVar5 | 4;
  }
  *(undefined1 *)(param_1 + 0x49) = uVar8;
  if ((uVar3 & 8) == 0) {
    uVar5 = uVar5 & 0xfffffff7;
    uVar9 = 0;
  }
  else {
    uVar5 = uVar5 | 8;
  }
  *(undefined1 *)(param_1 + 0x4a) = uVar9;
  if ((uVar3 & 0x10) == 0) {
    uVar5 = uVar5 & 0xffffffef;
    uVar10 = 0;
  }
  else {
    uVar5 = uVar5 | 0x10;
  }
  *(undefined1 *)(param_1 + 0x4b) = uVar10;
  *(uint *)(param_1 + 0x20) = uVar5 | 1;
  lVar2 = *(longlong *)(param_1 + 0x40);
  if (lVar2 - 0x10000U < 0x7ffffffeffff) {
    FUN_180265140(param_1,lVar2);
    FUN_180265200(lVar2);
  }
  if (local_a8 != (undefined4 *)0x0) {
    *local_a8 = uVar16;
    local_a8[1] = uVar17;
    local_a8[2] = uVar18;
  }
  return 1;
}



/* ===== 180269060 FUN_180269060 ===== */

longlong FUN_180269060(longlong *param_1,longlong param_2,longlong param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  lVar4 = *param_1;
  if (0x7ffffffefffe < lVar4 - 0x10000U) {
    if (param_3 - 0x10000U < 0x7ffffffeffff) {
      uVar1 = FUN_18000f3a0(param_3 + 8);
      uVar3 = uVar1 & 0xfffffffffffffffc;
      if ((uVar1 & 1) != 0) {
        uVar3 = FUN_18000f3a0(uVar3);
      }
    }
    else {
      uVar3 = 0;
    }
    if (param_2 - 0x10000U < 0x7ffffffeffff) {
      lVar2 = FUN_1802650a0(param_2,uVar3);
      lVar4 = 0;
      if (lVar2 - 0x10000U < 0x7ffffffeffff) {
        lVar4 = lVar2;
      }
    }
    else {
      lVar4 = 0;
    }
    *param_1 = lVar4;
  }
  if (0x7ffffffefffe < lVar4 - 0x10000U) {
    lVar4 = 0;
  }
  return lVar4;
}



/* ===== 180269120 FUN_180269120 ===== */

void FUN_180269120(ulonglong *param_1)

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
  uVar3 = ((longlong)(param_1[2] - uVar4) >> 2) * 4;
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
  *(undefined8 *)(puVar5 + -8) = 0x180269186;
  thunk_FUN_1803d64e0(uVar2,uVar3);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* ===== 1802691a0 FUN_1802691a0 ===== */

void FUN_1802691a0(ulonglong *param_1,ulonglong param_2,longlong param_3,longlong param_4)

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
  if (uVar5 == 0) goto LAB_18026920c;
  uVar2 = uVar5;
  if ((ulonglong)(((longlong)(param_1[2] - uVar5) >> 2) * 4) < 0x1000) {
LAB_180269204:
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
      goto LAB_180269204;
    }
  }
  *(undefined8 *)(puVar4 + -8) = 0x18026920c;
  thunk_FUN_1803d64e0(uVar2);
LAB_18026920c:
  *param_1 = param_2;
  param_1[1] = param_3 * 0xac + param_2;
  param_1[2] = param_4 * 0xac + param_2;
  return;
}



/* ===== 180269240 FUN_180269240 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180269240(void)

{
  if ((DAT_180cfa0d0 == '\0') && (DAT_1811089f0 != 0)) {
    DAT_180cfa0d0 = '\x01';
    DAT_180cfa0d4 = FUN_18038eaf0("C_CSPlayerPawn","m_angEyeAnglesVelocity");
    DAT_180cfa0d8 = FUN_18038eaf0("C_CSPlayerPawn","m_arrOldEyeAngles");
    DAT_180cfa0dc = FUN_18038eaf0("C_CSPlayerPawn","m_arrOldEyeAnglesTimes");
    DAT_180cfa0e0 = FUN_18038eaf0("C_CSPlayerPawn","m_angEyeAngles");
    if (DAT_180cfa0e0 == 0) {
      DAT_180cfa0e0 = FUN_18038eaf0("C_CSPlayerPawnBase","m_angEyeAngles");
    }
    _DAT_180cfa0e4 = FUN_18038eaf0("C_BasePlayerPawn","m_hController");
    DAT_180cfa0e8 = FUN_18038eaf0("CBasePlayerController","m_nTickBase");
    _DAT_180cfa0ec = FUN_18038eaf0("CBasePlayerController","m_iszPlayerName");
    _DAT_180cfa0f0 = FUN_18038eaf0("C_CSGameRules","m_bGamePaused");
    if (_DAT_180cfa0f0 == 0) {
      _DAT_180cfa0f0 = FUN_18038eaf0("C_GameRules","m_bGamePaused");
    }
    _DAT_180cfa0f4 = FUN_18038eaf0("C_CSGameRules","m_nPauseStartTick");
    if (_DAT_180cfa0f4 == 0) {
      _DAT_180cfa0f4 = FUN_18038eaf0("C_GameRules","m_nPauseStartTick");
    }
    _DAT_180cfa0f8 = FUN_18038eaf0("C_CSGameRules","m_nTotalPausedTicks");
    if (_DAT_180cfa0f8 == 0) {
      _DAT_180cfa0f8 = FUN_18038eaf0("C_GameRules","m_nTotalPausedTicks");
    }
    DAT_180cfa0fc = FUN_18038eaf0("C_BaseEntity","m_nSubclassID");
    DAT_180cfa100 = FUN_18038eaf0("CCSWeaponBaseVData","m_flCycleTime");
    DAT_180cfa104 = FUN_18038eaf0("CCSWeaponBaseVData","m_bIsRevolver");
    DAT_180cfa108 = FUN_18038eaf0("C_BasePlayerWeapon","m_nNextPrimaryAttackTick");
    DAT_180cfa10c = FUN_18038eaf0("C_BasePlayerWeapon","m_nNextSecondaryAttackTick");
  }
  return;
}



/* ===== 180269460 FUN_180269460 ===== */

longlong FUN_180269460(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong local_res8 [4];
  
  if (DAT_180961a48 != (code *)0x0) {
    if (DAT_180cd1304 == '\0') {
      FUN_1803a0b60(local_res8);
    }
    else {
      local_res8[0] = DAT_181108a00;
    }
    if (local_res8[0] != 0) {
      lVar1 = (*DAT_180961a48)();
      lVar2 = 0;
      if (lVar1 - 0x10000U < 0x7ffffffeffff) {
        lVar2 = lVar1;
      }
      return lVar2;
    }
  }
  return 0;
}



/* ===== 1802694d0 FUN_1802694d0 ===== */

void FUN_1802694d0(void)

{
  (*DAT_180cfa150)();
  return;
}



/* ===== 1802694f0 FUN_1802694f0 ===== */

void FUN_1802694f0(void)

{
  (*DAT_180cfa158)();
  return;
}



/* ===== 180269510 FUN_180269510 ===== */

void FUN_180269510(longlong *param_1)

{
  (**(code **)(*param_1 + 0x58))();
  return;
}



/* ===== 180269530 FUN_180269530 ===== */

void FUN_180269530(void)

{
  (*DAT_180cfa1b0)();
  return;
}



/* ===== 180269550 FUN_180269550 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_180269550(void)

{
  undefined1 uVar1;
  undefined2 uVar2;
  char cVar3;
  int iVar4;
  HMODULE pHVar5;
  HANDLE pvVar6;
  longlong lVar7;
  FARPROC pFVar8;
  INT_PTR IVar9;
  undefined8 *lpBaseAddress;
  longlong local_res8;
  char *local_38;
  ulonglong local_30;
  char *local_28;
  ulonglong uStack_20;
  undefined8 local_18;
  
  if (DAT_180cfa120 != '\0') goto LAB_18026a157;
  DAT_180cfa120 = '\x01';
  FUN_180269240();
  pHVar5 = GetModuleHandleA("client.dll");
  if (pHVar5 == (HMODULE)0x0) {
LAB_180269604:
    lVar7 = 0;
LAB_180269606:
    FUN_1802b2560("[nl_hooks] pattern not found: %s:%s","client.dll","cmd_prepare");
  }
  else {
    local_28 = (char *)0x0;
    uStack_20 = 0;
    local_18 = 0;
    pvVar6 = GetCurrentProcess();
    iVar4 = K32GetModuleInformation(pvVar6,pHVar5,&local_28,0x18);
    if (((iVar4 == 0) || (uStack_20 = uStack_20 & 0xffffffff, local_28 == (char *)0x0)) ||
       (uStack_20 == 0)) goto LAB_180269604;
    local_30 = 0x3b;
    local_38 = "48 89 5C 24 08 48 89 74 24 10 57 48 83 EC 20 48 83 79 60 00";
    lVar7 = FUN_1801d1e00(&local_28,&local_38);
    if (lVar7 == 0) goto LAB_180269606;
  }
  DAT_180cfa128 = lVar7;
  pHVar5 = GetModuleHandleA("client.dll");
  if (pHVar5 == (HMODULE)0x0) {
LAB_1802696df:
    FUN_1802b2560("[nl_hooks] pattern not found: %s:%s","client.dll","delta_call");
  }
  else {
    local_28 = (char *)0x0;
    uStack_20 = 0;
    local_18 = 0;
    pvVar6 = GetCurrentProcess();
    iVar4 = K32GetModuleInformation(pvVar6,pHVar5,&local_28,0x18);
    if (iVar4 == 0) goto LAB_1802696df;
    local_30 = uStack_20 & 0xffffffff;
    local_38 = local_28;
    if ((local_28 == (char *)0x0) || (local_30 == 0)) goto LAB_1802696df;
    uStack_20 = 0x25;
    local_28 = "FF 52 30 48 85 F6 75 ? 48 8B 44 24 30";
    lVar7 = FUN_1801d1e00(&local_38,&local_28);
    if (lVar7 == 0) goto LAB_1802696df;
    DAT_180cfa130 = lVar7 + 3;
    cVar3 = FUN_180011220(lVar7 + 0x52);
    if ((cVar3 == -0x50) && (cVar3 = FUN_180011220(lVar7 + 0x53), cVar3 == '\x01')) {
      DAT_180cfa138 = lVar7 + 0x52;
    }
  }
  pHVar5 = GetModuleHandleA("client.dll");
  if (pHVar5 == (HMODULE)0x0) {
LAB_1802697e7:
    FUN_1802b2560("[nl_hooks] pattern not found: %s:%s","client.dll","default_cmd");
  }
  else {
    local_28 = (char *)0x0;
    uStack_20 = 0;
    local_18 = 0;
    pvVar6 = GetCurrentProcess();
    iVar4 = K32GetModuleInformation(pvVar6,pHVar5,&local_28,0x18);
    if (iVar4 == 0) goto LAB_1802697e7;
    local_30 = uStack_20 & 0xffffffff;
    local_38 = local_28;
    if ((local_28 == (char *)0x0) || (local_30 == 0)) goto LAB_1802697e7;
    uStack_20 = 0x25;
    local_28 = "4C 8D 35 ? ? ? ? 48 8D 57 10 45 33 C9";
    lVar7 = FUN_1801d1e00(&local_38,&local_28);
    if (lVar7 == 0) goto LAB_1802697e7;
    DAT_180cfa140 = (longlong)*(int *)(lVar7 + 3) + 7 + lVar7;
    if ((lVar7 - 0xffebU < 0x7ffffffeffff) && (cVar3 = FUN_180011220(lVar7 + 0x15), cVar3 == -0x18))
    {
      iVar4 = FUN_180011200(lVar7 + 0x16);
      DAT_180cfa150 = (longlong)iVar4 + 0x1a + lVar7;
    }
    else {
      DAT_180cfa150 = 0;
    }
  }
  pHVar5 = GetModuleHandleA("client.dll");
  if (pHVar5 == (HMODULE)0x0) {
LAB_180269895:
    FUN_1802b2560("[nl_hooks] pattern not found: %s:%s","client.dll","default_guard");
  }
  else {
    local_28 = (char *)0x0;
    uStack_20 = 0;
    local_18 = 0;
    pvVar6 = GetCurrentProcess();
    iVar4 = K32GetModuleInformation(pvVar6,pHVar5,&local_28,0x18);
    if (iVar4 == 0) goto LAB_180269895;
    local_30 = uStack_20 & 0xffffffff;
    local_38 = local_28;
    if ((local_28 == (char *)0x0) || (local_30 == 0)) goto LAB_180269895;
    uStack_20 = 0x24;
    local_28 = "39 05 ? ? ? ? 0F 8F ? ? ? ? 4C 8D 35";
    lVar7 = FUN_1801d1e00(&local_38,&local_28);
    if (lVar7 == 0) goto LAB_180269895;
    DAT_180cfa148 = lVar7 + 6 + (longlong)*(int *)(lVar7 + 2);
  }
  pHVar5 = GetModuleHandleA("client.dll");
  if (pHVar5 == (HMODULE)0x0) {
LAB_180269934:
    lVar7 = 0;
LAB_180269936:
    FUN_1802b2560("[nl_hooks] pattern not found: %s:%s","client.dll","eye_history");
  }
  else {
    local_28 = (char *)0x0;
    uStack_20 = 0;
    local_18 = 0;
    pvVar6 = GetCurrentProcess();
    iVar4 = K32GetModuleInformation(pvVar6,pHVar5,&local_28,0x18);
    if (iVar4 == 0) goto LAB_180269934;
    local_30 = uStack_20 & 0xffffffff;
    local_38 = local_28;
    if ((local_28 == (char *)0x0) || (local_30 == 0)) goto LAB_180269934;
    uStack_20 = 0x2c;
    local_28 = "48 8B C4 55 56 41 54 41 55 41 57 48 8D 68 A8";
    lVar7 = FUN_1801d1e00(&local_38,&local_28);
    if (lVar7 == 0) goto LAB_180269936;
  }
  DAT_180cfa158 = lVar7;
  pHVar5 = GetModuleHandleA("client.dll");
  if (pHVar5 == (HMODULE)0x0) {
LAB_1802699dc:
    lVar7 = 0;
LAB_1802699de:
    FUN_1802b2560("[nl_hooks] pattern not found: %s:%s","client.dll","pause_gate");
  }
  else {
    local_28 = (char *)0x0;
    uStack_20 = 0;
    local_18 = 0;
    pvVar6 = GetCurrentProcess();
    iVar4 = K32GetModuleInformation(pvVar6,pHVar5,&local_28,0x18);
    if (iVar4 == 0) goto LAB_1802699dc;
    local_30 = uStack_20 & 0xffffffff;
    local_38 = local_28;
    if ((local_28 == (char *)0x0) || (local_30 == 0)) goto LAB_1802699dc;
    uStack_20 = 0x7b;
    local_28 = 
    "40 53 48 83 EC 20 8B 15 ? ? ? ? 48 8B D9 65 48 8B 04 25 58 00 00 00 B9 68 00 00 00 48 8B 04 D0 8B 04 01 39 05 ? ? ? ? 7F 46"
    ;
    lVar7 = FUN_1801d1e00(&local_38,&local_28);
    if (lVar7 == 0) goto LAB_1802699de;
  }
  _DAT_180cfa160 = lVar7;
  pHVar5 = GetModuleHandleA("client.dll");
  if (pHVar5 == (HMODULE)0x0) {
LAB_180269a8c:
    FUN_1802b2560("[nl_hooks] pattern not found: %s:%s","client.dll","pause_site_a");
  }
  else {
    local_28 = (char *)0x0;
    uStack_20 = 0;
    local_18 = 0;
    pvVar6 = GetCurrentProcess();
    iVar4 = K32GetModuleInformation(pvVar6,pHVar5,&local_28,0x18);
    if (iVar4 == 0) goto LAB_180269a8c;
    local_30 = uStack_20 & 0xffffffff;
    local_38 = local_28;
    if ((local_28 == (char *)0x0) || (local_30 == 0)) goto LAB_180269a8c;
    uStack_20 = 0x26;
    local_28 = "FF 92 88 01 00 00 84 C0 74 05 0F 57 FF";
    lVar7 = FUN_1801d1e00(&local_38,&local_28);
    if (lVar7 == 0) goto LAB_180269a8c;
    _DAT_180cfa168 = lVar7 + 6;
  }
  pHVar5 = GetModuleHandleA("client.dll");
  if (pHVar5 == (HMODULE)0x0) {
LAB_180269b33:
    FUN_1802b2560("[nl_hooks] pattern not found: %s:%s","client.dll","pause_site_b");
  }
  else {
    local_28 = (char *)0x0;
    uStack_20 = 0;
    local_18 = 0;
    pvVar6 = GetCurrentProcess();
    iVar4 = K32GetModuleInformation(pvVar6,pHVar5,&local_28,0x18);
    if (iVar4 == 0) goto LAB_180269b33;
    local_30 = uStack_20 & 0xffffffff;
    local_38 = local_28;
    if ((local_28 == (char *)0x0) || (local_30 == 0)) goto LAB_180269b33;
    uStack_20 = 0x26;
    local_28 = "FF 92 88 01 00 00 84 C0 74 05 41 B1 01";
    lVar7 = FUN_1801d1e00(&local_38,&local_28);
    if (lVar7 == 0) goto LAB_180269b33;
    _DAT_180cfa170 = lVar7 + 6;
  }
  pHVar5 = GetModuleHandleA("engine2.dll");
  if (pHVar5 == (HMODULE)0x0) {
LAB_180269bd2:
    lVar7 = 0;
LAB_180269bd4:
    FUN_1802b2560("[nl_hooks] pattern not found: %s:%s","engine2.dll","packet_queue");
  }
  else {
    local_28 = (char *)0x0;
    uStack_20 = 0;
    local_18 = 0;
    pvVar6 = GetCurrentProcess();
    iVar4 = K32GetModuleInformation(pvVar6,pHVar5,&local_28,0x18);
    if (iVar4 == 0) goto LAB_180269bd2;
    local_30 = uStack_20 & 0xffffffff;
    local_38 = local_28;
    if ((local_28 == (char *)0x0) || (local_30 == 0)) goto LAB_180269bd2;
    uStack_20 = 0x53;
    local_28 = "48 89 5C 24 08 48 89 74 24 10 48 89 7C 24 18 55 41 56 41 57 48 8D AC 24 90 F7 FF FF"
    ;
    lVar7 = FUN_1801d1e00(&local_38,&local_28);
    if (lVar7 == 0) goto LAB_180269bd4;
  }
  DAT_180cfa178 = lVar7;
  pHVar5 = GetModuleHandleA("engine2.dll");
  if (pHVar5 == (HMODULE)0x0) {
LAB_180269c82:
    FUN_1802b2560("[nl_hooks] pattern not found: %s:%s","engine2.dll","packet_queue_site");
  }
  else {
    local_28 = (char *)0x0;
    uStack_20 = 0;
    local_18 = 0;
    pvVar6 = GetCurrentProcess();
    iVar4 = K32GetModuleInformation(pvVar6,pHVar5,&local_28,0x18);
    if (iVar4 == 0) goto LAB_180269c82;
    local_30 = uStack_20 & 0xffffffff;
    local_38 = local_28;
    if ((local_28 == (char *)0x0) || (local_30 == 0)) goto LAB_180269c82;
    uStack_20 = 0x23;
    local_28 = "FF 90 18 04 00 00 B0 01 EB 02 32 C0";
    lVar7 = FUN_1801d1e00(&local_38,&local_28);
    if (lVar7 == 0) goto LAB_180269c82;
    DAT_180cfa180 = lVar7 + 6;
  }
  pHVar5 = GetModuleHandleA("engine2.dll");
  if (pHVar5 == (HMODULE)0x0) {
LAB_180269d21:
    lVar7 = 0;
LAB_180269d23:
    FUN_1802b2560("[nl_hooks] pattern not found: %s:%s","engine2.dll","packet_entities");
  }
  else {
    local_28 = (char *)0x0;
    uStack_20 = 0;
    local_18 = 0;
    pvVar6 = GetCurrentProcess();
    iVar4 = K32GetModuleInformation(pvVar6,pHVar5,&local_28,0x18);
    if (iVar4 == 0) goto LAB_180269d21;
    local_30 = uStack_20 & 0xffffffff;
    local_38 = local_28;
    if ((local_28 == (char *)0x0) || (local_30 == 0)) goto LAB_180269d21;
    uStack_20 = 0x47;
    local_28 = "48 89 5C 24 08 48 89 74 24 10 48 89 7C 24 18 55 48 8D AC 24 A0 F7 FF FF";
    lVar7 = FUN_1801d1e00(&local_38,&local_28);
    if (lVar7 == 0) goto LAB_180269d23;
  }
  DAT_180cfa188 = lVar7;
  pHVar5 = GetModuleHandleA("engine2.dll");
  if (pHVar5 == (HMODULE)0x0) {
LAB_180269df7:
    FUN_1802b2560("[nl_hooks] pattern not found: %s:%s","engine2.dll","server_tick");
  }
  else {
    local_28 = (char *)0x0;
    uStack_20 = 0;
    local_18 = 0;
    pvVar6 = GetCurrentProcess();
    iVar4 = K32GetModuleInformation(pvVar6,pHVar5,&local_28,0x18);
    if (iVar4 == 0) goto LAB_180269df7;
    local_30 = uStack_20 & 0xffffffff;
    local_38 = local_28;
    if ((local_28 == (char *)0x0) || (local_30 == 0)) goto LAB_180269df7;
    uStack_20 = 0x1f;
    local_28 = "8B B1 ? ? ? ? 48 8B DA 8B 52 40";
    lVar7 = FUN_1801d1e00(&local_38,&local_28);
    if (lVar7 == 0) goto LAB_180269df7;
    iVar4 = FUN_180011200(lVar7 + 2);
    if (iVar4 - 0x100U < 0xf00) {
      DAT_180cfa190 = iVar4;
    }
    else {
      FUN_1802b2560("[nl_hooks] server_tick offset %x out of range",iVar4);
    }
  }
  pHVar5 = GetModuleHandleA("engine2.dll");
  if (pHVar5 == (HMODULE)0x0) {
LAB_180269e96:
    lVar7 = 0;
LAB_180269e98:
    FUN_1802b2560("[nl_hooks] pattern not found: %s:%s","engine2.dll","signon");
  }
  else {
    local_28 = (char *)0x0;
    uStack_20 = 0;
    local_18 = 0;
    pvVar6 = GetCurrentProcess();
    iVar4 = K32GetModuleInformation(pvVar6,pHVar5,&local_28,0x18);
    if (iVar4 == 0) goto LAB_180269e96;
    local_30 = uStack_20 & 0xffffffff;
    local_38 = local_28;
    if ((local_28 == (char *)0x0) || (local_30 == 0)) goto LAB_180269e96;
    uStack_20 = 0x23;
    local_28 = "44 89 44 24 18 89 54 24 10 55 53 56";
    lVar7 = FUN_1801d1e00(&local_38,&local_28);
    if (lVar7 == 0) goto LAB_180269e98;
  }
  DAT_180cfa198 = lVar7;
  if (DAT_180cd1304 == '\0') {
    FUN_1803a0b60(&local_res8);
  }
  else {
    local_res8 = DAT_181108a00;
  }
  if (local_res8 != 0) {
    DAT_180cfa110 = 6;
  }
  pHVar5 = GetModuleHandleA("client.dll");
  IVar9 = 0;
  if (pHVar5 != (HMODULE)0x0) {
    pFVar8 = GetProcAddress(pHVar5,"CreateInterface");
    IVar9 = 0;
    if (pFVar8 != (FARPROC)0x0) {
      IVar9 = (*pFVar8)("Source2ClientPrediction001",0);
    }
  }
  DAT_180cfa1a0 = IVar9;
  pHVar5 = GetModuleHandleA("client.dll");
  if (pHVar5 == (HMODULE)0x0) {
LAB_18026a010:
    FUN_1802b2560("[nl_hooks] pattern not found: %s:%s","client.dll","prediction_warn");
  }
  else {
    local_28 = (char *)0x0;
    uStack_20 = 0;
    local_18 = 0;
    pvVar6 = GetCurrentProcess();
    iVar4 = K32GetModuleInformation(pvVar6,pHVar5,&local_28,0x18);
    if (iVar4 == 0) goto LAB_18026a010;
    local_30 = uStack_20 & 0xffffffff;
    local_38 = local_28;
    if ((local_28 == (char *)0x0) || (local_30 == 0)) goto LAB_18026a010;
    uStack_20 = 0x22;
    local_28 = "F2 0F 5C 0D ? ? ? ? 66 41 0F 2F C8";
    lVar7 = FUN_1801d1e00(&local_38,&local_28);
    if (lVar7 == 0) goto LAB_18026a010;
    DAT_180cfa1a8 = (longlong)*(int *)(lVar7 + 4) + 8 + lVar7;
    cVar3 = FUN_180011220();
    if ((cVar3 == -1) && (cVar3 = FUN_180011220(), cVar3 == '\x15')) {
      if (lVar7 == 9) {
        DAT_180cfa1b0 = FUN_18000f3a0();
      }
      else {
        DAT_180cfa1b0 = FUN_18000f3a0();
      }
    }
  }
  lpBaseAddress = VirtualAlloc((LPVOID)0x0,0x40,0x3000,0x40);
  uVar1 = DAT_180641de0;
  if (lpBaseAddress != (undefined8 *)0x0) {
    *lpBaseAddress = DAT_180641dd8;
    *(undefined1 *)(lpBaseAddress + 1) = uVar1;
    uVar2 = DAT_180641e4c;
    *(undefined4 *)(lpBaseAddress + 2) = DAT_180641e48;
    *(undefined2 *)((longlong)lpBaseAddress + 0x14) = uVar2;
    pvVar6 = GetCurrentProcess();
    FlushInstructionCache(pvVar6,lpBaseAddress,0x40);
    DAT_180cfa0c0 = lpBaseAddress + 2;
    DAT_180cfa1d0 = lpBaseAddress;
  }
  FUN_1802b2560("[nl_hooks] cmd_prepare %p delta_ret %p exit %p default %p guard %p write %p eye %p"
                ,DAT_180cfa128,DAT_180cfa130,DAT_180cfa138,DAT_180cfa140,DAT_180cfa148,DAT_180cfa150
                ,DAT_180cfa158);
  FUN_1802b2560("[nl_hooks] queue %p queue_ret %p entities %p tick +%x signon %p prediction %p warn %p time %p"
                ,DAT_180cfa178,DAT_180cfa180,DAT_180cfa188,DAT_180cfa190,DAT_180cfa198,DAT_180cfa1a0
                ,DAT_180cfa1a8,DAT_180cfa1b0);
LAB_18026a157:
  return DAT_180cfa128 != 0;
}



/* ===== 18026a170 FUN_18026a170 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_18026a170(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined *puVar8;
  longlong lVar9;
  longlong lVar10;
  char *pcVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  longlong unaff_retaddr;
  uint local_res10 [2];
  undefined1 uStack0000000000000060;
  undefined1 uStack0000000000000098;
  undefined1 uStack00000000000000c8;
  
  if ((DAT_180cfa130 == 0) || (unaff_retaddr != DAT_180cfa130)) {
                    /* WARNING: Could not recover jumptable at 0x00018026a553. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar8 = (undefined *)(*DAT_180ca0118)();
    return puVar8;
  }
  iVar3 = FUN_180011200((longlong)register0x00000020 + 0x2008);
  iVar4 = FUN_180011200(param_1 + 8);
  if (iVar4 != iVar3) {
                    /* WARNING: Could not recover jumptable at 0x00018026a1d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar8 = (undefined *)(*DAT_180ca0118)(param_1);
    return puVar8;
  }
  uVar5 = FUN_180011200(&uStack0000000000000098);
  iVar6 = FUN_180434f90(uVar5);
  iVar4 = 0;
  if (0 < iVar6) {
    iVar7 = FUN_180435150();
    iVar4 = 0;
    if (iVar6 <= iVar7) {
      iVar4 = iVar6;
    }
  }
  if (-1 < (int)uVar5) {
    lVar12 = (longlong)((int)uVar5 % 0x96) * 0x20;
    puVar8 = (undefined *)0x0;
    if (*(uint *)(&DAT_180c3ad20 + lVar12) == uVar5) {
      puVar8 = &DAT_180c3ad20 + lVar12;
    }
    if ((puVar8 != (undefined *)0x0) && (iVar4 != 0)) {
      pcVar11 = &DAT_00000004;
      if (*(uint *)(&DAT_180c3ad20 + lVar12) == uVar5) {
        pcVar11 = &DAT_180c3ad24 + lVar12;
      }
      if ((*pcVar11 == '\0') && (uVar13 = uVar5 - iVar4, (int)uVar13 < iVar3)) {
        local_res10[0] = uVar13;
        if ((DAT_180cfa148 != 0) && (iVar4 = FUN_180011200(), lVar12 = DAT_180cfa140, 0 < iVar4)) {
          lVar9 = FUN_180269460();
          if (lVar9 != 0) {
            while ((-1 < (int)uVar13 && (DAT_180961fd0 != 0))) {
              lVar15 = ((ulonglong)uVar13 % (ulonglong)DAT_180961fd0) * (ulonglong)DAT_180961fd4;
              lVar1 = lVar15 + lVar9;
              if ((lVar1 == 0) || (uVar5 = FUN_180011200(lVar9 + 8 + lVar15), uVar5 != uVar13))
              break;
              (*DAT_180ca0118)(lVar1);
              lVar10 = lVar12 + 0x10;
              if (lVar12 == 0) {
                lVar10 = 0;
              }
              cVar2 = FUN_1802694d0(lVar10,lVar9 + 0x10 + lVar15,&uStack00000000000000c8);
              if (cVar2 == '\0') break;
              uVar13 = uVar13 + 1;
              if (iVar3 <= (int)uVar13) {
                _DAT_180cfa0b0 = lVar1;
                _DAT_180cfa0b8 = unaff_retaddr;
                FUN_180013280((longlong)register0x00000020 + 0x2008,local_res10);
                return &DAT_180cfa0b0;
              }
              lVar12 = lVar1;
            }
          }
          puVar8 = (undefined *)(*DAT_180ca0118)(param_1);
          return puVar8;
        }
        goto LAB_18026a4b6;
      }
    }
  }
  if (iVar3 <= (int)uVar5) {
    uVar13 = uVar5;
    uVar14 = 0xffffffff;
    if ((int)uVar5 < -1) {
      uVar14 = uVar5;
    }
    for (; -1 < (int)uVar13; uVar13 = uVar13 - 1) {
      lVar12 = (longlong)(int)(uVar13 % 0x96) * 0x20;
      puVar8 = (undefined *)0x0;
      if (*(uint *)(&DAT_180c3ad20 + lVar12) == uVar13) {
        puVar8 = &DAT_180c3ad20 + lVar12;
      }
      if (puVar8 == (undefined *)0x0) {
LAB_18026a4a2:
        uVar14 = uVar13;
        break;
      }
      pcVar11 = &DAT_00000004;
      if (*(uint *)(&DAT_180c3ad20 + lVar12) == uVar13) {
        pcVar11 = &DAT_180c3ad24 + lVar12;
      }
      if (*pcVar11 == '\0') goto LAB_18026a4a2;
      if ((int)uVar13 <= iVar3) {
        if ((iVar3 - 1U != uVar5) && (DAT_180cfa138 != 0)) {
          local_res10[0] = iVar3 - 1U;
          FUN_180013280((longlong)register0x00000020 + 0x2030,local_res10);
          FUN_180013280((longlong)register0x00000020 + 0x2038,local_res10);
          FUN_180013280(&uStack0000000000000060,local_res10);
          FUN_180013280(&uStack0000000000000098,local_res10);
          return (undefined *)0x0;
        }
        goto LAB_18026a4b6;
      }
    }
    uVar5 = FUN_180011200(&uStack0000000000000098);
    if (uVar14 != uVar5) {
      local_res10[0] = uVar14;
      FUN_180013280((longlong)register0x00000020 + 0x2030,local_res10);
      FUN_180013280((longlong)register0x00000020 + 0x2038,local_res10);
      FUN_180013280(&uStack0000000000000060,local_res10);
      FUN_180013280(&uStack0000000000000098,local_res10);
      (*DAT_180ca0118)(param_1);
      _DAT_180cfa1c0 = (ulonglong)uVar14;
      _DAT_180cfa1c8 = unaff_retaddr;
      return &DAT_180cfa1c0;
    }
  }
LAB_18026a4b6:
  puVar8 = (undefined *)(*DAT_180ca0118)(param_1);
  return puVar8;
}



/* ===== 18026a560 FUN_18026a560 ===== */

void FUN_18026a560(longlong *param_1,longlong param_2,longlong param_3)

{
  undefined1 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint local_res8 [2];
  uint7 uStack_c7;
  
  FUN_180269240();
  *param_1 = (ulonglong)uStack_c7 << 8;
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
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  param_1[0x12] = 0;
  if ((param_2 - 0x10000U < 0x7ffffffeffff) && (param_3 - 0x10000U < 0x7ffffffeffff)) {
    *(undefined1 *)param_1 = 1;
    param_1[1] = param_2;
    param_1[2] = param_3;
    uVar1 = FUN_180011220(param_3 + 0x49);
    *(undefined1 *)(param_1 + 4) = uVar1;
    local_res8[0] = local_res8[0] & 0xffffff00;
    FUN_1800233d0(param_3 + 0x49,local_res8);
    uVar1 = FUN_180011220(param_3 + 0x4a);
    *(undefined1 *)((longlong)param_1 + 0x21) = uVar1;
    FUN_1800233d0(param_3 + 0x4a,local_res8);
    uVar1 = FUN_180011220(param_3 + 0x4b);
    *(undefined1 *)((longlong)param_1 + 0x22) = uVar1;
    FUN_1800233d0(param_3 + 0x4b,local_res8);
    local_res8[0] = FUN_180011200(param_3 + 0x20);
    local_res8[0] = local_res8[0] | 0x1c;
    FUN_180013280(param_3 + 0x20,local_res8);
    lVar2 = FUN_18000f3a0(param_2 + 0x38);
    param_1[3] = lVar2;
    if ((lVar2 - 0x10000U < 0x7ffffffeffff) &&
       (((uVar4 = (ulonglong)DAT_180cfa0d4, DAT_180cfa0d4 != 0 &&
         (uVar6 = (ulonglong)DAT_180cfa0d8, DAT_180cfa0d8 != 0)) &&
        (uVar5 = (ulonglong)DAT_180cfa0dc, DAT_180cfa0dc != 0)))) {
      uVar3 = 0;
      do {
        uVar1 = FUN_180011220(param_1[3] + uVar4 + uVar3);
        *(undefined1 *)(uVar3 + 0x6f + (longlong)param_1) = uVar1;
        uVar3 = uVar3 + 1;
      } while (uVar3 < 0xc);
      uVar4 = 0;
      do {
        uVar1 = FUN_180011220(param_1[3] + uVar6 + uVar4);
        *(undefined1 *)(uVar4 + 0x2f + (longlong)param_1) = uVar1;
        uVar4 = uVar4 + 1;
      } while (uVar4 < 0x30);
      uVar4 = 0;
      do {
        uVar1 = FUN_180011220(param_1[3] + uVar5 + uVar4);
        *(undefined1 *)(uVar4 + 0x5f + (longlong)param_1) = uVar1;
        uVar4 = uVar4 + 1;
      } while (uVar4 < 0x10);
      *(undefined1 *)((longlong)param_1 + 0x7f) = 1;
    }
  }
  return;
}



/* ===== 18026a790 FUN_18026a790 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_18026a790(longlong param_1,char param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  int *piVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  float fVar10;
  float fVar11;
  int local_res8;
  undefined4 uStackX_c;
  int local_res18 [4];
  
  FUN_180269240();
  if (((param_1 != 0) && (DAT_180cfa0fc != 0)) &&
     (uVar8 = (ulonglong)DAT_180cfa108, DAT_180cfa108 != 0)) {
    lVar4 = FUN_18000f3a0((ulonglong)DAT_180cfa0fc + 8 + param_1);
    if (lVar4 - 0x10000U < 0x7ffffffeffff) {
      if (DAT_180cd1304 == '\0') {
        FUN_1803a0b60(&local_res8);
        lVar9 = CONCAT44(uStackX_c,local_res8);
      }
      else {
        lVar9 = DAT_181108a00;
      }
      if ((lVar9 == 0) || (DAT_180cfa0e8 == 0)) {
        iVar3 = 0;
      }
      else {
        iVar3 = FUN_180011200(lVar9 + (ulonglong)DAT_180cfa0e8);
      }
      uVar1 = DAT_180cfa100;
      local_res8 = iVar3;
      if (param_2 != '\0') {
        FUN_180013280(uVar8 + param_1,&local_res8);
        return 1;
      }
      uVar7 = (ulonglong)DAT_180cfa100;
      fVar11 = 0.0;
      if (DAT_180cfa100 == 0) {
        fVar10 = 0.0;
      }
      else {
        fVar10 = (float)FUN_18000f3d0(lVar4 + uVar7);
      }
      fVar10 = fVar10 * DAT_1808acab0;
      fVar10 = (float)FUN_18053fc00((float)((DAT_1808ac1f0 ^ (uint)fVar10) & _DAT_1808ade90 ^
                                           (uint)fVar10) + fVar10);
      lVar9 = uVar8 + param_1;
      iVar6 = (int)fVar10 + -3 + iVar3;
      local_res18[0] = iVar6;
      local_res8 = FUN_180011200(lVar9);
      piVar5 = &local_res8;
      if (local_res8 <= iVar6) {
        piVar5 = local_res18;
      }
      FUN_180013280(lVar9,piVar5);
      if (DAT_180cfa104 != 0) {
        cVar2 = FUN_180011220(lVar4 + (ulonglong)DAT_180cfa104);
        if ((cVar2 == '\x01') && (uVar8 = (ulonglong)DAT_180cfa10c, DAT_180cfa10c != 0)) {
          if (uVar1 != 0) {
            fVar11 = (float)FUN_18000f3d0(uVar7 + 4 + lVar4);
          }
          fVar11 = fVar11 * DAT_1808acab0;
          fVar11 = (float)FUN_18053fc00((float)((DAT_1808ac1f0 ^ (uint)fVar11) & _DAT_1808ade90 ^
                                               (uint)fVar11) + fVar11);
          iVar3 = (int)fVar11 + -3 + iVar3;
          local_res18[0] = iVar3;
          local_res8 = FUN_180011200(uVar8 + param_1);
          piVar5 = &local_res8;
          if (local_res8 <= iVar3) {
            piVar5 = local_res18;
          }
          FUN_180013280(uVar8 + param_1,piVar5);
        }
      }
      return 1;
    }
  }
  return 0;
}



/* ===== 18026a9a0 FUN_18026a9a0 ===== */

undefined8 FUN_18026a9a0(longlong param_1,undefined8 param_2)

{
  short sVar1;
  undefined8 uVar2;
  longlong unaff_retaddr;
  
  if ((DAT_180cfa110 == 6) && (unaff_retaddr == DAT_180cfa180)) {
    sVar1 = FUN_180011440();
    if (sVar1 == 0x1b0) {
      DAT_180ccfb7e = 1;
      DAT_180cfa1b8 = FUN_18000f3d0(param_1 + 0x90);
      return 0;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00018026aa2b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*DAT_180ca0128)(param_1,param_2);
  return uVar2;
}



/* ===== 18026aa30 FUN_18026aa30 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_18026aa30(longlong param_1,longlong param_2)

{
  float fVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  float fVar12;
  undefined8 local_res18;
  undefined4 local_res20 [2];
  int local_78;
  undefined4 local_74;
  int local_70;
  float local_6c;
  undefined4 local_68 [2];
  undefined8 local_60;
  undefined8 local_58;
  longlong local_50;
  
  if (((DAT_180cfa110 == 6) && (param_1 != 0)) && (DAT_180961fa8 != 0)) {
    lVar7 = FUN_18000f3a0();
    lVar11 = 0;
    if (lVar7 - 0x10000U < 0x7ffffffeffff) {
      lVar11 = lVar7;
    }
    if ((param_1 == lVar11) && (param_2 - 0xff40U < 0x7ffffffeffff)) {
      lVar11 = (ulonglong)DAT_180cfa190 + param_1;
      local_50 = lVar11;
      if (lVar11 - 0x10000U < 0x7ffffffeffff) {
        if (DAT_180cd1304 == '\0') {
          FUN_1803a0b60(&local_res18);
          uVar8 = local_res18;
        }
        else {
          uVar8 = DAT_181108a00;
        }
        if (uVar8 != 0) {
          iVar4 = FUN_180011200(param_2 + 0xc0);
          local_78 = iVar4;
          local_68[0] = FUN_180011200(lVar11);
          iVar5 = FUN_180011200(param_1 + 0xd4);
          if ((iVar4 < 1) || ((0 < iVar5 && ((0x400 < iVar4 - iVar5 || (0x400 < iVar5 - iVar4))))))
          {
            uVar9 = (*DAT_180ca0110)(param_1,param_2);
          }
          else {
            FUN_180013280(lVar11,&local_78);
            fVar12 = (float)FUN_18000f3d0(param_1 + 0x90);
            fVar1 = DAT_1808ac00c;
            if (DAT_180cfa1b8 == fVar12) {
              if (DAT_180ccfb7e != '\0') {
                if (DAT_180ccfb7d != '\0') {
                  iVar4 = FUN_180011200(lVar11 + -4);
                  local_70 = iVar4;
                  local_58 = FUN_18000f3a0(param_1 + 200);
                  local_res18 = 0;
                  FUN_1800239d0(param_1 + 200,&local_res18);
                  uVar3 = FUN_180011220(param_1 + 0xd0);
                  local_res20[0] = CONCAT31(local_res20[0]._1_3_,uVar3);
                  local_res18 = CONCAT71(local_res18._1_7_,1);
                  FUN_1800233d0(param_1 + 0xd0);
                  local_6c = (float)FUN_18000f3d0(param_1 + 0xc4);
                  if (DAT_180961fa8 == 0) {
                    local_res18 = local_res18 & 0xffffffff00000000;
                    local_74 = 0;
                    lVar11 = 0;
                    local_60 = 0;
                  }
                  else {
                    lVar7 = FUN_18000f3a0();
                    local_res18 = local_res18 & 0xffffffff00000000;
                    local_60 = 0;
                    local_74 = 0;
                    lVar11 = 0;
                    if (lVar7 - 0x10000U < 0x7ffffffeffff) {
                      lVar11 = lVar7;
                    }
                    if (lVar11 != 0) {
                      uVar6 = FUN_180011200(lVar11 + 0xd4);
                      local_res18 = CONCAT44(local_res18._4_4_,uVar6);
                      local_60 = FUN_18000f3a0(lVar11 + 0xc0);
                      local_74 = FUN_18000f3d0(lVar11 + 0xe0);
                      FUN_180013280(lVar11 + 0xd4,&local_70);
                      FUN_180013280(lVar11 + 0xc4,&local_6c);
                      local_6c = (float)iVar4 * fVar1;
                      FUN_180013280(lVar11 + 0xc0,&local_6c);
                      local_6c = 0.0;
                      FUN_180013280(lVar11 + 0xe0);
                    }
                  }
                  FUN_18026b480(1);
                  DAT_180ceb6f4 = DAT_180ceb6f4 + 1;
                  DAT_180ceb7c0 = DAT_180ceb7c0 + 1;
                  if ((lVar11 != 0) && (DAT_180961fa8 != 0)) {
                    lVar10 = FUN_18000f3a0();
                    lVar7 = 0;
                    if (lVar10 - 0x10000U < 0x7ffffffeffff) {
                      lVar7 = lVar10;
                    }
                    if (lVar7 == lVar11) {
                      FUN_180013280(lVar11 + 0xd4,&local_res18);
                      FUN_1800239d0(lVar11 + 0xc0,&local_60);
                      FUN_180013280(lVar11 + 0xe0,&local_74);
                    }
                  }
                  FUN_1800233d0(param_1 + 0xd0,local_res20);
                  FUN_1800239d0(param_1 + 200,&local_58);
                  iVar4 = local_78;
                }
              }
            }
            else {
              DAT_180ccfb7e = '\0';
              DAT_180ccfb7d = '\0';
              DAT_180cfa1b8 = fVar12;
            }
            cVar2 = DAT_180ccfb7e;
            if (DAT_180961fa8 == 0) {
              lVar11 = 0;
              local_res20[0] = 0;
              local_60 = 0;
              local_74 = 0;
            }
            else {
              lVar7 = FUN_18000f3a0();
              local_res20[0] = 0;
              local_60 = 0;
              local_74 = 0;
              lVar11 = 0;
              if (lVar7 - 0x10000U < 0x7ffffffeffff) {
                lVar11 = lVar7;
              }
              if (lVar11 != 0) {
                fVar12 = (float)(iVar4 - _DAT_180cfa114) * fVar1;
                if (fVar12 <= DAT_1808ac34c) {
                  local_res18._0_4_ = fVar12;
                  if ((!NAN(fVar12)) && (fVar12 <= fVar1)) {
                    local_res18._0_4_ = fVar1;
                  }
                }
                else {
                  local_res18._0_4_ = 1.0;
                }
                local_res20[0] = FUN_180011200(lVar11 + 0xd4);
                local_60 = FUN_18000f3a0(lVar11 + 0xc0);
                local_74 = FUN_18000f3d0(lVar11 + 0xe0);
                FUN_180013280(lVar11 + 0xd4,&local_78);
                FUN_180013280(lVar11 + 0xc4,&local_res18);
                iVar4 = local_78;
                local_res18._0_4_ = (float)local_78 * fVar1;
                FUN_180013280(lVar11 + 0xc0,&local_res18);
                local_res18 = (ulonglong)local_res18._4_4_ << 0x20;
                FUN_180013280(lVar11 + 0xe0,&local_res18);
              }
            }
            if (cVar2 != '\0') {
              DAT_180ccfb7d = '\x01';
            }
            _DAT_180cfa114 = iVar4;
            uVar9 = (*DAT_180ca0110)(param_1,param_2);
            if ((lVar11 != 0) && (DAT_180961fa8 != 0)) {
              lVar10 = FUN_18000f3a0();
              lVar7 = 0;
              if (lVar10 - 0x10000U < 0x7ffffffeffff) {
                lVar7 = lVar10;
              }
              if (lVar7 == lVar11) {
                FUN_180013280(lVar11 + 0xd4,local_res20);
                FUN_1800239d0(lVar11 + 0xc0,&local_60);
                FUN_180013280(lVar11 + 0xe0,&local_74);
              }
            }
            FUN_180013280(local_50,local_68);
          }
          return uVar9;
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00018026aaea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar9 = (*DAT_180ca0110)(param_1,param_2);
  return uVar9;
}



/* ===== 18026afa0 FUN_18026afa0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_18026afa0(undefined8 param_1,int param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  DAT_180cfa110 = param_2;
  if (param_2 == 2) {
    DAT_180ccfb7e = 0;
    DAT_180ccfb7d = 0;
    DAT_180cfa1b8 = 0;
    _DAT_180cfa114 = 0;
                    /* WARNING: Could not recover jumptable at 0x00018026afe1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*DAT_180ca0120)();
    return uVar1;
  }
  uVar1 = (*DAT_180ca0120)();
  if (param_2 == 6) {
    lVar2 = DAT_181112368;
    lVar3 = DAT_181112370;
    if (DAT_181112368 != DAT_181112370) {
      do {
        FUN_180467670();
        lVar2 = lVar2 + 0xfd0;
      } while (lVar2 != lVar3);
    }
    if (DAT_181112338 != DAT_181112340) {
      DAT_181112340 = DAT_181112338;
    }
  }
  return uVar1;
}



/* ===== 18026b040 FUN_18026b040 ===== */

void FUN_18026b040(longlong param_1,uint param_2,float param_3)

{
  uint uVar1;
  float local_res10 [2];
  
  uVar1 = FUN_180011200(param_1 + 0x10);
  local_res10[0] = (float)(uVar1 & ~(1 << (param_2 & 0x1f)));
  if (param_3 == 0.0) {
    FUN_180013280(param_1 + 0x10,local_res10);
    param_3 = 0.0;
  }
  else {
    local_res10[0] = (float)((uint)local_res10[0] | 1 << (param_2 & 0x1f));
    FUN_180013280(param_1 + 0x10,local_res10);
  }
  local_res10[0] = param_3;
  FUN_180013280(param_1 + 0x18 + (longlong)(int)param_2 * 4,local_res10);
  return;
}



/* ===== 18026b0e0 FUN_18026b0e0 ===== */

bool FUN_18026b0e0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint local_res8 [8];
  
  local_res8[0] = FUN_180011200(param_1 + 0x20);
  local_res8[0] = local_res8[0] | 1;
  FUN_180013280(param_1 + 0x20,local_res8);
  lVar1 = FUN_18000f3a0(param_1 + 0x40);
  if (0x7ffffffefffe < lVar1 - 0x10000U) {
    return false;
  }
  local_res8[0] = FUN_180011200(lVar1 + 0x10);
  local_res8[0] = local_res8[0] | 4;
  FUN_180013280(lVar1 + 0x10);
  lVar1 = FUN_18000f3a0(param_1 + 0x40);
  if (lVar1 - 0x10000U < 0x7ffffffeffff) {
    lVar2 = FUN_18000f3a0(lVar1 + 0x40);
    lVar1 = 0;
    if (lVar2 - 0x10000U < 0x7ffffffeffff) {
      lVar1 = lVar2;
    }
  }
  else {
    lVar1 = 0;
  }
  *param_2 = lVar1;
  return lVar1 != 0;
}



/* ===== 18026b1a0 FUN_18026b1a0 ===== */

void FUN_18026b1a0(undefined1 *param_1)

{
  char cVar1;
  undefined1 uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  uint *puVar8;
  ulonglong uVar9;
  undefined4 uVar10;
  uint local_res8;
  undefined4 uStackX_c;
  undefined2 local_47;
  undefined1 local_45;
  undefined2 local_2b;
  undefined1 local_29;
  
  lVar4 = DAT_181108a00;
  cVar1 = DAT_180cd1304;
  *(undefined2 *)(param_1 + 1) = local_47;
  param_1[3] = local_45;
  *(undefined2 *)(param_1 + 0x1d) = local_2b;
  *(undefined8 *)(param_1 + 0x10) = 0;
  param_1[0x1f] = local_29;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x1c] = 0;
  if (cVar1 == '\0') {
    FUN_1803a0b60(&local_res8);
    lVar5 = CONCAT44(uStackX_c,local_res8);
  }
  else {
    lVar5 = lVar4;
  }
  if (lVar5 == 0) {
    return;
  }
  if (DAT_180961a48 == (code *)0x0) {
    return;
  }
  if (cVar1 == '\0') {
    FUN_1803a0b60(&local_res8);
    lVar4 = CONCAT44(uStackX_c,local_res8);
  }
  if (lVar4 == 0) {
    return;
  }
  lVar4 = (*DAT_180961a48)(lVar4);
  if (0x7ffffffefffe < lVar4 - 0x10000U) {
    return;
  }
  uVar3 = FUN_180011200((ulonglong)DAT_180961fcc + lVar4);
  if ((int)uVar3 < 0) {
    puVar8 = (uint *)0x0;
LAB_18026b309:
    lVar4 = 0;
  }
  else {
    puVar8 = (uint *)0x0;
    if (*(uint *)(&DAT_180c3ad20 + (longlong)((int)uVar3 % 0x96) * 0x20) == uVar3) {
      puVar8 = (uint *)(&DAT_180c3ad20 + (longlong)((int)uVar3 % 0x96) * 0x20);
    }
    if (((DAT_180961fd0 == 0) ||
        (lVar4 = ((ulonglong)uVar3 % (ulonglong)DAT_180961fd0) * (ulonglong)DAT_180961fd4 + lVar4,
        lVar4 == 0)) || (uVar7 = FUN_180011200(lVar4 + 8), uVar7 != uVar3)) goto LAB_18026b309;
  }
  if (puVar8 == (uint *)0x0) {
    return;
  }
  if (lVar4 == 0) {
    return;
  }
  lVar5 = FUN_18000f3a0(lVar4 + 0x40);
  if (lVar5 - 0x10000U < 0x7ffffffeffff) {
    lVar6 = FUN_18000f3a0(lVar5 + 0x40);
    lVar5 = 0;
    if (lVar6 - 0x10000U < 0x7ffffffeffff) {
      lVar5 = lVar6;
    }
    if (lVar5 != 0) {
      uVar10 = FUN_18000f3d0(lVar5 + 0x18);
      *(undefined4 *)(param_1 + 0x10) = uVar10;
      uVar10 = FUN_18000f3d0(lVar5 + 0x1c);
      *(undefined4 *)(param_1 + 0x14) = uVar10;
      uVar10 = FUN_18000f3d0(lVar5 + 0x20);
      goto LAB_18026b38a;
    }
  }
  uVar10 = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
LAB_18026b38a:
  *(undefined4 *)(param_1 + 0x18) = uVar10;
  uVar2 = FUN_180011220(lVar4 + 0x8c);
  param_1[0x1c] = uVar2;
  local_res8 = FUN_180011200(lVar4 + 0x20);
  local_res8 = local_res8 | 1;
  FUN_180013280(lVar4 + 0x20,&local_res8);
  lVar5 = FUN_18000f3a0(lVar4 + 0x40);
  if (lVar5 - 0x10000U < 0x7ffffffeffff) {
    local_res8 = FUN_180011200(lVar5 + 0x10);
    local_res8 = local_res8 | 4;
    FUN_180013280(lVar5 + 0x10,&local_res8);
    lVar5 = FUN_18000f3a0(lVar4 + 0x40);
    if (lVar5 - 0x10000U < 0x7ffffffeffff) {
      lVar6 = FUN_18000f3a0(lVar5 + 0x40);
      lVar5 = 0;
      if (lVar6 - 0x10000U < 0x7ffffffeffff) {
        lVar5 = lVar6;
      }
      if (lVar5 != 0) {
        uVar9 = 0;
        do {
          FUN_18026b040(lVar5,uVar9,puVar8[uVar9 + 2]);
          uVar7 = (int)uVar9 + 1;
          uVar9 = (ulonglong)uVar7;
        } while ((int)uVar7 < 3);
        *param_1 = 1;
        *(uint *)(param_1 + 4) = uVar3;
        *(longlong *)(param_1 + 8) = lVar4;
      }
    }
  }
  return;
}



/* ===== 18026b480 FUN_18026b480 ===== */

void FUN_18026b480(undefined4 param_1)

{
  HMODULE hModule;
  FARPROC pFVar1;
  
  if (DAT_180cfa1a0 != 0) {
LAB_18026b4d2:
    FUN_180269510(DAT_180cfa1a0,param_1);
    return;
  }
  hModule = GetModuleHandleA("client.dll");
  if (hModule != (HMODULE)0x0) {
    pFVar1 = GetProcAddress(hModule,"CreateInterface");
    if (pFVar1 != (FARPROC)0x0) {
      DAT_180cfa1a0 = (*pFVar1)("Source2ClientPrediction001",0);
      if (DAT_180cfa1a0 == 0) {
        return;
      }
      goto LAB_18026b4d2;
    }
  }
  DAT_180cfa1a0 = 0;
  return;
}



/* ===== 18026b500 FUN_18026b500 ===== */

undefined8 FUN_18026b500(void)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (DAT_180961fa8 != 0) {
    lVar1 = FUN_18000f3a0();
    if (((lVar1 - 0x10000U < 0x7ffffffeffff) && (DAT_180cfa190 != 0)) &&
       (((ulonglong)DAT_180cfa190 + lVar1) - 0x10000 < 0x7ffffffeffff)) {
      uVar2 = FUN_180011200();
      return uVar2;
    }
  }
  return 0xffffffff;
}



/* ===== 18026b560 FUN_18026b560 ===== */

undefined8 FUN_18026b560(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*DAT_180cfa1d8 + 0xe8))();
  *param_2 = uVar1;
  return 1;
}



/* ===== 18026b590 FUN_18026b590 ===== */

undefined8 FUN_18026b590(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = (*DAT_180cfa1e0)();
  *param_2 = uVar1;
  return 1;
}



/* ===== 18026b5c0 FUN_18026b5c0 ===== */

undefined1
FUN_18026b5c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  (*DAT_180962120)(param_1,param_2,1,1,param_3,param_4,0);
  return 1;
}



/* ===== 18026b600 FUN_18026b600 ===== */

undefined1 FUN_18026b600(void)

{
  (*DAT_180962128)();
  return 1;
}



/* ===== 18026b620 FUN_18026b620 ===== */

undefined8 FUN_18026b620(longlong param_1,longlong param_2,longlong param_3,undefined4 param_4)

{
  char cVar1;
  HMODULE pHVar2;
  FARPROC pFVar3;
  longlong lVar4;
  longlong lVar5;
  longlong local_res8;
  
  if (*(char *)(param_1 + 0x20) != '\0') {
    return 1;
  }
  if ((((param_2 == 0) || (param_3 == 0)) || (DAT_180962120 == 0)) || (DAT_180962128 == 0)) {
    return 0;
  }
  if (DAT_180cfa1d8 == 0) {
    pHVar2 = GetModuleHandleA("engine2.dll");
    if ((pHVar2 != (HMODULE)0x0) &&
       (pFVar3 = GetProcAddress(pHVar2,"CreateInterface"), pFVar3 != (FARPROC)0x0)) {
      DAT_180cfa1d8 = (*pFVar3)("EngineServiceMgr001",0);
    }
    if (DAT_180cfa1d8 != 0) goto LAB_18026b6de;
LAB_18026b70e:
    lVar5 = 0;
  }
  else {
LAB_18026b6de:
    local_res8 = 0;
    cVar1 = FUN_18026b560();
    if ((cVar1 == '\0') || (lVar5 = local_res8, 0x7ffffffefffe < local_res8 - 0x10000U))
    goto LAB_18026b70e;
  }
  lVar4 = 0;
  if (DAT_180cfa1e0 == (FARPROC)0x0) {
    pHVar2 = GetModuleHandleA("tier0.dll");
    if (pHVar2 != (HMODULE)0x0) {
      DAT_180cfa1e0 = GetProcAddress(pHVar2,"_MakeGlobalSymbol");
    }
    if (DAT_180cfa1e0 == (FARPROC)0x0) goto LAB_18026b76c;
  }
  local_res8 = 0;
  cVar1 = FUN_18026b590(param_2,&local_res8);
  if (cVar1 != '\0') {
    lVar4 = local_res8;
  }
LAB_18026b76c:
  if ((lVar5 == 0) || (lVar4 == 0)) {
    FUN_1802b2560("[error] event listeners | %s: dispatcher %p event %p",param_2,lVar5,lVar4);
  }
  else {
    *(longlong *)param_1 = param_1;
    *(longlong *)(param_1 + 8) = param_3;
    *(longlong *)(param_1 + 0x10) = lVar4;
    *(longlong *)(param_1 + 0x18) = lVar5;
    cVar1 = FUN_18026b5c0(lVar5,param_1,lVar4,param_4);
    if (cVar1 != '\0') {
      *(undefined1 *)(param_1 + 0x20) = 1;
      FUN_1802b2560("[event listeners] %s registered (priority %d, dispatcher %p)",param_2,param_4,
                    lVar5);
      return 1;
    }
    FUN_1802b2560("[error] event listeners | %s: register failed",param_2);
  }
  return 0;
}



/* ===== 18026b810 FUN_18026b810 ===== */

ulonglong FUN_18026b810(char param_1)

{
  char cVar1;
  int iVar2;
  ulonglong in_RAX;
  undefined4 local_res10 [2];
  undefined1 local_res18 [16];
  
  if (DAT_18094f760 != '\0') {
    local_res10[0] = 0;
    cVar1 = FUN_1802a0e40(local_res10,local_res18);
    if (cVar1 == '\0') {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_1800ef270(&DAT_18094f764,local_res10[0]);
    }
    in_RAX = (longlong)iVar2 * 0x3c;
    if ((((&DAT_180956268)[in_RAX] != '\0') || (DAT_180957214 != '\0')) ||
       ((param_1 != '\0' &&
        ((in_RAX = (longlong)iVar2 * 100, (&DAT_180954968)[in_RAX] != '\0' &&
         ((&DAT_1809549c6)[in_RAX] != '\0')))))) {
      return CONCAT71((int7)(in_RAX >> 8),1);
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



/* ===== 18026b8a0 FUN_18026b8a0 ===== */

undefined8 FUN_18026b8a0(void)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined4 local_res8 [2];
  undefined1 local_res10 [24];
  
  if (DAT_1809f351c == 2) {
    return 1;
  }
  if ((((DAT_1809f351c == 1) && (lVar3 = FUN_180266660(), lVar3 != 0)) && (DAT_180cf9f80 != 0)) &&
     (cVar1 = FUN_180011220((ulonglong)DAT_180cf9f80 + lVar3), cVar1 != '\0')) {
    return 1;
  }
  if (DAT_18094f760 != '\0') {
    local_res8[0] = 0;
    cVar1 = FUN_1802a0e40(local_res8,local_res10);
    if (cVar1 == '\0') {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_1800ef270(&DAT_18094f764,local_res8[0]);
    }
    if ((&DAT_180956268)[(longlong)iVar2 * 0x3c] != '\0') {
      return 1;
    }
    if (DAT_180957214 != '\0') {
      return 1;
    }
  }
  return 0;
}



/* ===== 18026b940 FUN_18026b940 ===== */

undefined8 FUN_18026b940(longlong *param_1,undefined4 *param_2)

{
  undefined4 extraout_XMM0_Da;
  
  (**(code **)(*param_1 + 0x50))();
  *param_2 = extraout_XMM0_Da;
  return 1;
}



/* ===== 18026b970 FUN_18026b970 ===== */

undefined8 FUN_18026b970(undefined8 param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  
  uVar1 = (*DAT_180961e08)(param_1,0);
  *param_2 = uVar1;
  return 1;
}



/* ===== 18026b9a0 FUN_18026b9a0 ===== */

undefined8 FUN_18026b9a0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = (*DAT_180961e10)(1,param_1);
  *param_2 = uVar1;
  return 1;
}



/* ===== 18026b9e0 FUN_18026b9e0 ===== */

undefined4 FUN_18026b9e0(ulonglong param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  
  iVar3 = (int)param_1;
  uVar4 = DAT_180cfa220 &
          ((((param_1 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^ (ulonglong)(iVar3 >> 8 & 0xff))
            * 0x100000001b3 ^ (ulonglong)(iVar3 >> 0x10 & 0xff)) * 0x100000001b3 ^
          (ulonglong)(iVar3 >> 0x18 & 0xff)) * 0x100000001b3;
  lVar2 = *(longlong *)(DAT_180cfa208 + 8 + uVar4 * 0x10);
  if (lVar2 != DAT_180cfa1f8) {
    iVar1 = *(int *)(lVar2 + 0x10);
    while (iVar3 != iVar1) {
      if (lVar2 == *(longlong *)(DAT_180cfa208 + uVar4 * 0x10)) goto LAB_18026ba74;
      lVar2 = *(longlong *)(lVar2 + 8);
      iVar1 = *(int *)(lVar2 + 0x10);
    }
    if (lVar2 != 0) goto LAB_18026ba77;
  }
LAB_18026ba74:
  lVar2 = DAT_180cfa1f8;
LAB_18026ba77:
  if (lVar2 == DAT_180cfa1f8) {
    return 0xffffffff;
  }
  return *(undefined4 *)(lVar2 + 0x14);
}



/* ===== 18026ba90 FUN_18026ba90 ===== */

undefined8 FUN_18026ba90(longlong *param_1,longlong param_2)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  ulonglong uVar11;
  uint uVar12;
  bool bVar13;
  uint local_res18;
  undefined4 uStackX_1c;
  
  if (((DAT_180ca0a0c != 0) && (uVar11 = (ulonglong)DAT_180cfa25c, DAT_180cfa25c != 0)) &&
     (lVar7 = FUN_18000f3a0((ulonglong)DAT_180ca0a0c + *param_1), lVar7 - 0x10000U < 0x7ffffffeffff)
     ) {
    iVar3 = FUN_180011200(uVar11 + lVar7);
    lVar8 = FUN_18000f3a0(uVar11 + lVar7 + 8);
    lVar7 = DAT_180961e00;
    if ((iVar3 - 1U < 0x40) && (lVar8 != 0)) {
      if ((((DAT_180ccfb7f == '\0') &&
           ((DAT_180961e00 != 0 && (cVar1 = FUN_180011220(DAT_180961e00 + 4), cVar1 == 'H')))) &&
          (cVar1 = FUN_180011220(lVar7 + 5), cVar1 == -0x75)) &&
         (cVar1 = FUN_180011220(lVar7 + 6), cVar1 == '\x05')) {
        iVar4 = FUN_180011200(lVar7 + 7);
        lVar7 = FUN_18000f3a0((longlong)iVar4 + 0xb + lVar7);
        if ((lVar7 != 0) && (lVar7 = FUN_18000f3a0(lVar7 + 8), lVar7 != 0)) {
          iVar4 = FUN_180011200(lVar7 + 0x128);
          lVar7 = FUN_18000f3a0(lVar7 + 0x130);
          if ((iVar4 - 1U < 20000) && (lVar7 != 0)) {
            uVar11 = 0;
            if (0 < iVar4) {
              do {
                lVar9 = FUN_18000f3a0(uVar11 * 0x20 + lVar7 + 0x18);
                if (lVar9 - 0x10000U < 0x7ffffffeffff) {
                  uVar2 = FUN_180011440(lVar9 + 0x10);
                  local_res18 = (uint)uVar2;
                  if (uVar2 != 0) {
                    uVar5 = FUN_180011200(lVar9 + 0x338);
                    plVar10 = (longlong *)FUN_18026c930();
                    *(undefined4 *)(*plVar10 + 0x14) = uVar5;
                  }
                }
                uVar12 = (int)uVar11 + 1;
                uVar11 = (ulonglong)uVar12;
              } while ((int)uVar12 < iVar4);
            }
            DAT_180ccfb7f = DAT_180cfa200 != 0;
            if (DAT_180cfa200 != 0) {
              FUN_1802b2560(
                           "[auto purchase] loadout slots of %d item definitions read (definition +0x338)"
                           );
            }
          }
        }
      }
      iVar4 = FUN_18026b9e0(*(undefined4 *)(param_2 + 8));
      uVar11 = 0;
      if (0 < iVar3) {
        do {
          uVar5 = FUN_180011200(lVar8 + uVar11 * 4);
          FUN_1803a0940(&local_res18,uVar5);
          if (CONCAT44(uStackX_1c,local_res18) != 0) {
            if (((DAT_1809619a4 == 0) || (DAT_1809619a8 == 0)) || (DAT_180961998 == 0)) {
              uVar12 = 0;
            }
            else {
              uVar2 = FUN_180011440(CONCAT44(uStackX_1c,local_res18) + (ulonglong)DAT_1809619a8 +
                                    (ulonglong)DAT_180961998 + (ulonglong)DAT_1809619a4);
              uVar12 = (uint)uVar2;
            }
            if (iVar4 < 0) {
              if (uVar12 == *(uint *)(param_2 + 8)) {
                return 1;
              }
              if (*(uint *)(param_2 + 0xc) != 0) {
                bVar13 = uVar12 == *(uint *)(param_2 + 0xc);
                goto LAB_18026bd05;
              }
            }
            else if (uVar12 != 0) {
              iVar6 = FUN_18026b9e0(uVar12);
              bVar13 = iVar6 == iVar4;
LAB_18026bd05:
              if (bVar13) {
                return 1;
              }
            }
          }
          uVar12 = (int)uVar11 + 1;
          uVar11 = (ulonglong)uVar12;
        } while ((int)uVar12 < iVar3);
      }
    }
  }
  return 0;
}



/* ===== 18026bd40 FUN_18026bd40 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18026bd40(undefined8 param_1,undefined8 param_2,char *param_3,undefined8 param_4,
                  int param_5)

{
  char cVar1;
  int iVar2;
  size_t sVar3;
  longlong lVar4;
  undefined **ppuVar5;
  undefined1 auStack_b8 [32];
  int local_98;
  longlong local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  char local_70 [48];
  ulonglong local_40;
  
  if ((param_3 != (char *)0x0) &&
     (local_40 = DAT_180919500 ^ (ulonglong)auStack_b8, *param_3 != '\0')) {
    ppuVar5 = &PTR_s_scar20_180643e10;
    do {
      iVar2 = strcmp(*ppuVar5,param_3);
      if (iVar2 == 0) {
        iVar2 = *(int *)(ppuVar5 + 2);
        if (DAT_180961e10 != 0) {
          if (*(int *)(ppuVar5 + 1) < 1) {
LAB_18026be20:
            lVar4 = 0;
          }
          else {
            local_80 = 0;
            uStack_78 = 0;
            snprintf(&local_80,0x10,&DAT_1806dfdd8);
            local_88 = 0;
            cVar1 = FUN_18026b9a0(&local_80);
            if ((cVar1 == '\0') || (lVar4 = local_88, 0x7ffffffefffe < local_88 - 0x10000U))
            goto LAB_18026be20;
          }
          local_70[0] = '\0';
          local_70[1] = '\0';
          local_70[2] = '\0';
          local_70[3] = '\0';
          local_70[4] = '\0';
          local_70[5] = '\0';
          local_70[6] = '\0';
          local_70[7] = '\0';
          local_70[8] = '\0';
          local_70[9] = '\0';
          local_70[10] = '\0';
          local_70[0xb] = '\0';
          local_70[0xc] = '\0';
          local_70[0xd] = '\0';
          local_70[0xe] = '\0';
          local_70[0xf] = '\0';
          local_70[0x10] = '\0';
          local_70[0x11] = '\0';
          local_70[0x12] = '\0';
          local_70[0x13] = '\0';
          local_70[0x14] = '\0';
          local_70[0x15] = '\0';
          local_70[0x16] = '\0';
          local_70[0x17] = '\0';
          local_70[0x18] = '\0';
          local_70[0x19] = '\0';
          local_70[0x1a] = '\0';
          local_70[0x1b] = '\0';
          local_70[0x1c] = '\0';
          local_70[0x1d] = '\0';
          local_70[0x1e] = '\0';
          local_70[0x1f] = '\0';
          local_70[0x20] = '\0';
          local_70[0x21] = '\0';
          local_70[0x22] = '\0';
          local_70[0x23] = '\0';
          local_70[0x24] = '\0';
          local_70[0x25] = '\0';
          local_70[0x26] = '\0';
          local_70[0x27] = '\0';
          local_70[0x28] = '\0';
          local_70[0x29] = '\0';
          local_70[0x2a] = '\0';
          local_70[0x2b] = '\0';
          local_70[0x2c] = '\0';
          local_70[0x2d] = '\0';
          local_70[0x2e] = '\0';
          local_70[0x2f] = '\0';
          if (lVar4 == 0) {
            snprintf(local_70,0x30," %s=no-vdata",param_3);
            sVar3 = strlen(local_70);
            FUN_1800134a0(param_2,local_70,sVar3);
            break;
          }
          if (DAT_180cfa264 != 0) {
            iVar2 = FUN_180011200(lVar4 + (ulonglong)DAT_180cfa264);
          }
          local_98 = iVar2;
          snprintf(local_70,0x30," %s=%d",param_3);
          sVar3 = strlen(local_70);
          FUN_1800134a0(param_2,local_70,sVar3);
        }
        cVar1 = FUN_18026ba90(param_4,ppuVar5);
        if (cVar1 != '\0') {
          return;
        }
        if ((-1 < param_5) && (param_5 < iVar2)) {
          return;
        }
        break;
      }
      ppuVar5 = ppuVar5 + 3;
    } while (ppuVar5 != &PTR_DAT_180643f78);
    FUN_1800134a0(param_1,&DAT_1806f195c,4);
    sVar3 = strlen(param_3);
    FUN_1800134a0(param_1,param_3,sVar3);
    FUN_1800134a0(param_1,&DAT_1806f8e8c,1);
  }
  return;
}



/* ===== 18026bf50 FUN_18026bf50 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18026bf50(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  char cVar1;
  undefined **ppuVar2;
  HMODULE hModule;
  FARPROC pFVar3;
  undefined8 ****ppppuVar4;
  undefined *puVar5;
  char *pcVar6;
  undefined1 auStack_b8 [32];
  char *local_98;
  undefined8 ****local_90;
  undefined8 ****local_88;
  undefined8 ****local_78;
  undefined8 uStack_70;
  longlong local_68;
  ulonglong local_60;
  undefined8 ****local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStack_b8;
  if ((*param_1 == 0) || (DAT_180ca09f4 == 0)) {
    cVar1 = '\0';
  }
  else {
    cVar1 = FUN_180011220(*param_1 + (ulonglong)DAT_180ca09f4);
  }
  uStack_70 = 0;
  local_68 = 0;
  local_60 = 0xf;
  local_78 = (undefined8 ****)0x0;
  uStack_50 = 0;
  local_48 = _DAT_1808ad410;
  uStack_40 = _UNK_1808ad418;
  local_58 = (undefined8 ****)0x0;
  if (DAT_180920e08 - 1U < 3) {
    ppuVar2 = &PTR_DAT_180643fb0;
    if (cVar1 == '\x02') {
      ppuVar2 = &PTR_DAT_180644040;
    }
    local_98 = (char *)CONCAT44(local_98._4_4_,param_2);
    FUN_18026bd40(&local_78,&local_58,ppuVar2[DAT_180920e08],param_1);
  }
  if (DAT_180920e0c - 1U < 6) {
    ppuVar2 = &PTR_DAT_180644008;
    if (cVar1 == '\x02') {
      ppuVar2 = &PTR_DAT_180643fd0;
    }
    local_98 = (char *)CONCAT44(local_98._4_4_,param_2);
    FUN_18026bd40(&local_78,&local_58,ppuVar2[DAT_180920e0c],param_1);
  }
  if (cVar1 == '\x03') {
    if (DAT_180920e10 != '\0') {
      local_98 = (char *)CONCAT44(local_98._4_4_,param_2);
      FUN_18026bd40(&local_78,&local_58,PTR_DAT_180643f78,param_1);
    }
    if (DAT_180920e11 != '\0') {
      local_98 = (char *)CONCAT44(local_98._4_4_,param_2);
      FUN_18026bd40(&local_78,&local_58,PTR_s_vesthelm_180643f80,param_1);
    }
    if (DAT_180920e12 != '\0') {
      puVar5 = PTR_s_defuser_180643f88;
      goto LAB_18026c0d6;
    }
  }
  else {
    if (DAT_180920e10 != '\0') {
      local_98 = (char *)CONCAT44(local_98._4_4_,param_2);
      FUN_18026bd40(&local_78,&local_58,PTR_DAT_180643f78,param_1);
    }
    if (DAT_180920e11 != '\0') {
      puVar5 = PTR_s_vesthelm_180643f80;
LAB_18026c0d6:
      local_98 = (char *)CONCAT44(local_98._4_4_,param_2);
      FUN_18026bd40(&local_78,&local_58,puVar5,param_1);
    }
  }
  if (DAT_180920e13 != '\0') {
    local_98 = (char *)CONCAT44(local_98._4_4_,param_2);
    FUN_18026bd40(&local_78,&local_58,PTR_s_taser_180643f90,param_1);
  }
  if (DAT_180920e14 != '\0') {
    local_98 = (char *)CONCAT44(local_98._4_4_,param_2);
    FUN_18026bd40(&local_78,&local_58,PTR_s_hegrenade_180643f98,param_1);
  }
  if (DAT_180920e15 != '\0') {
    local_98 = (char *)CONCAT44(local_98._4_4_,param_2);
    FUN_18026bd40(&local_78,&local_58,PTR_s_molotov_180643fa0,param_1);
  }
  if (DAT_180920e16 != '\0') {
    local_98 = (char *)CONCAT44(local_98._4_4_,param_2);
    FUN_18026bd40(&local_78,&local_58,PTR_s_smokegrenade_180643fa8,param_1);
  }
  local_88 = &local_78;
  if (0xf < local_60) {
    local_88 = local_78;
  }
  local_90 = &local_58;
  if (0xf < uStack_40) {
    local_90 = local_58;
  }
  local_98 = "defaults";
  if (DAT_180961e10 != 0) {
    local_98 = "VData m_nPrice";
  }
  pcVar6 = "def index";
  if (DAT_180ccfb7f != '\0') {
    pcVar6 = "+0x338";
  }
  FUN_1802b2560("[auto purchase] %s | money %d | slots %s | prices %s:%s | \"%s\"",param_3,param_2,
                pcVar6);
  if (local_68 == 0) goto LAB_18026c25a;
  ppppuVar4 = &local_78;
  if (0xf < local_60) {
    ppppuVar4 = local_78;
  }
  if (DAT_180cf9f78 == 0) {
    hModule = GetModuleHandleA("engine2.dll");
    if (hModule == (HMODULE)0x0) goto LAB_18026c25a;
    pFVar3 = GetProcAddress(hModule,"CreateInterface");
    if (pFVar3 == (FARPROC)0x0) goto LAB_18026c25a;
    DAT_180cf9f78 = (*pFVar3)("Source2EngineToClient001",0);
    if (DAT_180cf9f78 == 0) goto LAB_18026c25a;
  }
  if (ppppuVar4 != (undefined8 ****)0x0) {
    FUN_1800d6d10(DAT_180cf9f78,ppppuVar4);
  }
LAB_18026c25a:
  FUN_18000f890(&local_58);
  FUN_18000f890(&local_78);
  return;
}



/* ===== 18026c290 FUN_18026c290 ===== */

undefined1 FUN_18026c290(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  char cVar1;
  float fVar2;
  longlong lVar3;
  ulonglong uVar4;
  float fVar5;
  float fVar6;
  uint local_res20 [2];
  
  if (DAT_180961e08 != 0) {
    local_res20[0] = local_res20[0] & 0xffffff00;
    cVar1 = FUN_18026b970(*param_1,local_res20);
    if (cVar1 != '\0') {
      *param_3 = "CanPlayerBuy";
      return (undefined1)local_res20[0];
    }
  }
  *param_3 = &DAT_18073dac8;
  if (DAT_180cfa250 == 0) {
    return false;
  }
  cVar1 = FUN_180011220((ulonglong)DAT_180cfa250 + *param_1);
  if (cVar1 == '\0') {
    return false;
  }
  if ((*param_1 != 0) && (DAT_180ca09f4 != 0)) {
    cVar1 = FUN_180011220(*param_1 + (ulonglong)DAT_180ca09f4);
    if (cVar1 == '\x02') {
      if (DAT_180cfa248 == 0) goto LAB_18026c36c;
      cVar1 = FUN_180011220(param_2 + (ulonglong)DAT_180cfa248);
    }
    else {
      if ((cVar1 != '\x03') || (DAT_180cfa24c == 0)) goto LAB_18026c36c;
      cVar1 = FUN_180011220(param_2 + (ulonglong)DAT_180cfa24c);
    }
    if (cVar1 != '\0') {
      return false;
    }
  }
LAB_18026c36c:
  if ((((DAT_180cfa240 != 0) &&
       (cVar1 = FUN_180011220(param_2 + (ulonglong)DAT_180cfa240), cVar1 != '\0')) ||
      ((DAT_180cfa244 != 0 &&
       (cVar1 = FUN_180011220(param_2 + (ulonglong)DAT_180cfa244), cVar1 != '\0')))) ||
     (uVar4 = (ulonglong)DAT_180cfa238, DAT_180cfa238 == 0)) {
    return true;
  }
  if ((DAT_180961a50 == 0) || (lVar3 = FUN_18000f3a0(), lVar3 == 0)) {
    fVar5 = 0.0;
  }
  else {
    fVar5 = (float)FUN_18000f3d0(lVar3 + 0x34);
  }
  fVar6 = (float)FUN_18000f3d0(param_2 + uVar4);
  lVar3 = FUN_180264b70("mp_buytime");
  if ((lVar3 == 0) ||
     (fVar2 = (float)FUN_180264d70(lVar3), ((uint)fVar2 & 0x7f800000) == 0x7f800000)) {
    fVar2 = DAT_1808ac950;
  }
  return fVar5 - fVar6 < fVar2;
}



/* ===== 18026c450 FUN_18026c450 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18026c450(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_138 [32];
  undefined1 *local_118;
  longlong local_108;
  undefined1 *local_100;
  ulonglong local_f8 [30];
  
  if ((param_1 == 7) &&
     (local_f8[0x18] = DAT_180919500 ^ (ulonglong)auStack_138, DAT_180920e04 != '\0')) {
    if ((DAT_180cfa230 == '\0') && (DAT_1811089f0 != 0)) {
      DAT_180cfa230 = '\x01';
      DAT_180cfa234 = FUN_18038eaf0("C_CSGameRules","m_flRestartRoundTime");
      DAT_180cfa238 = FUN_18038eaf0("C_CSGameRules","m_fRoundStartTime");
      DAT_180cfa23c = FUN_18038eaf0("C_CSGameRules","m_bMatchWaitingForResume");
      DAT_180cfa240 = FUN_18038eaf0("C_CSGameRules","m_bFreezePeriod");
      DAT_180cfa244 = FUN_18038eaf0("C_CSGameRules","m_bWarmupPeriod");
      DAT_180cfa248 = FUN_18038eaf0("C_CSGameRules","m_bTCantBuy");
      DAT_180cfa24c = FUN_18038eaf0("C_CSGameRules","m_bCTCantBuy");
      DAT_180cfa250 = FUN_18038eaf0("C_CSPlayerPawn","m_bInBuyZone");
      DAT_180cfa254 = FUN_18038eaf0("CCSPlayerController","m_pInGameMoneyServices");
      DAT_180cfa258 = FUN_18038eaf0("CCSPlayerController_InGameMoneyServices","m_iAccount");
      DAT_180cfa25c = FUN_18038eaf0("CPlayer_WeaponServices","m_hMyWeapons");
      DAT_180cfa260 = FUN_18038eaf0("C_BaseEntity","m_lifeState");
      DAT_180cfa264 = FUN_18038eaf0("CCSWeaponBaseVData","m_nPrice");
    }
    if (DAT_180cd1304 == '\0') {
      FUN_1803a0b60(&local_108);
      DAT_181108a00 = local_108;
      local_108 = FUN_1803a0c50(&local_108);
      DAT_180cd1304 = '\x01';
    }
    else {
      local_108 = DAT_1811089f8;
    }
    lVar5 = local_108;
    lVar4 = DAT_181108a00;
    DAT_1811089f8 = local_108;
    lVar3 = FUN_180266660();
    if (((((lVar5 != 0) && (lVar4 != 0)) && (lVar3 != 0)) &&
        ((DAT_180cfa254 != 0 &&
         (lVar4 = FUN_18000f3a0(lVar4 + (ulonglong)DAT_180cfa254), lVar4 - 0x10000U < 0x7ffffffeffff
         )))) && ((DAT_180cfa23c == 0 ||
                  (cVar1 = FUN_180011220((ulonglong)DAT_180cfa23c + lVar3), cVar1 == '\0')))) {
      if (DAT_180cfa258 == 0) {
        uVar2 = 0xffffffff;
      }
      else {
        uVar2 = FUN_180011200(lVar4 + (ulonglong)DAT_180cfa258);
      }
      fVar8 = 0.0;
      if ((DAT_180cfa234 != 0) &&
         (fVar6 = (float)FUN_18000f3d0(lVar3 + (ulonglong)DAT_180cfa234), fVar6 != 0.0)) {
        if ((DAT_180961a50 == 0) || (lVar4 = FUN_18000f3a0(), lVar4 == 0)) {
          fVar7 = 0.0;
        }
        else {
          fVar7 = (float)FUN_18000f3d0(lVar4 + 0x34);
        }
        fVar6 = fVar6 - fVar7;
        if ((((0.0 <= fVar6) &&
             (local_100 = (undefined1 *)((ulonglong)local_100 & 0xffffffff00000000),
             DAT_180961fa8 != 0)) && (lVar4 = FUN_18000f3a0(), lVar4 - 0x10000U < 0x7ffffffeffff))
           && (((lVar4 = FUN_18000f3a0(lVar4 + 0xf0), lVar4 - 0x10000U < 0x7ffffffeffff &&
                (cVar1 = FUN_18026b940(lVar4,&local_100), cVar1 != '\0')) &&
               (fVar6 <= local_100._0_4_ + DAT_1808ac00c)))) {
          local_f8[0] = 0;
          local_f8[1] = 0;
          local_f8[2] = 0;
          local_f8[3] = 0;
          local_f8[4] = 0;
          local_f8[5] = 0;
          local_f8[6] = 0;
          local_f8[7] = 0;
          local_f8[8] = 0;
          local_f8[9] = 0;
          local_f8[10] = 0;
          local_f8[0xb] = 0;
          local_118 = (undefined1 *)(double)local_100._0_4_;
          snprintf(local_f8,0x60,"restart in %.4f s (latency %.4f + 1/64)",(double)fVar6);
          FUN_18026bf50(&local_108,uVar2,local_f8);
          lVar5 = local_108;
        }
      }
      if ((DAT_180cfa260 == 0) ||
         (cVar1 = FUN_180011220(lVar5 + (ulonglong)DAT_180cfa260), cVar1 == '\0')) {
        if (DAT_180cfa238 != 0) {
          fVar8 = (float)FUN_18000f3d0(lVar3 + (ulonglong)DAT_180cfa238);
        }
        if (fVar8 != _DAT_180cfa268) {
          local_100 = &DAT_18058b643;
          cVar1 = FUN_18026c290(&local_108,lVar3,&local_100);
          if (cVar1 != '\0') {
            local_118 = local_100;
            local_f8[0xc] = 0;
            local_f8[0xd] = 0;
            local_f8[0xe] = 0;
            local_f8[0xf] = 0;
            local_f8[0x10] = 0;
            local_f8[0x11] = 0;
            local_f8[0x12] = 0;
            local_f8[0x13] = 0;
            local_f8[0x14] = 0;
            local_f8[0x15] = 0;
            local_f8[0x16] = 0;
            local_f8[0x17] = 0;
            _DAT_180cfa268 = fVar8;
            snprintf(local_f8 + 0xc,0x60,"round start %.3f, can buy (%s)",(double)fVar8);
            FUN_18026bf50(&local_108,uVar2,local_f8 + 0xc);
          }
        }
      }
    }
  }
  return;
}



/* ===== 18026c930 FUN_18026c930 ===== */

undefined8 * FUN_18026c930(undefined8 param_1,undefined8 *param_2,byte *param_3,undefined4 param_4)

{
  int iVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  float fVar11;
  
  uVar9 = (((((ulonglong)*param_3 ^ 0xcbf29ce484222325) * 0x100000001b3 ^ (ulonglong)param_3[1]) *
            0x100000001b3 ^ (ulonglong)param_3[2]) * 0x100000001b3 ^ (ulonglong)param_3[3]) *
          0x100000001b3;
  puVar7 = (undefined8 *)(DAT_180cfa220 & uVar9);
  puVar4 = *(undefined8 **)(DAT_180cfa208 + 8 + (longlong)puVar7 * 0x10);
  puVar10 = DAT_180cfa1f8;
  if (puVar4 != DAT_180cfa1f8) {
    puVar7 = *(undefined8 **)(DAT_180cfa208 + (longlong)puVar7 * 0x10);
    iVar1 = *(int *)(puVar4 + 2);
    puVar10 = puVar4;
    while( true ) {
      if (*(int *)param_3 == iVar1) {
        *param_2 = puVar10;
        *(undefined1 *)(param_2 + 1) = 0;
        return param_2;
      }
      if (puVar10 == puVar7) break;
      puVar10 = (undefined8 *)puVar10[1];
      iVar1 = *(int *)(puVar10 + 2);
    }
  }
  if (DAT_180cfa200 == 0xaaaaaaaaaaaaaaa) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4cd0("unordered_map/set too long");
  }
  puVar4 = (undefined8 *)FUN_1804ecaa0(0x18,puVar7,DAT_180cfa208,param_4,&DAT_180cfa1f8,0);
  *(undefined4 *)(puVar4 + 2) = *(undefined4 *)param_3;
  *(undefined4 *)((longlong)puVar4 + 0x14) = 0;
  uVar3 = DAT_180cfa228;
  if (DAT_180cfa1f0 < (float)(DAT_180cfa200 + 1) / (float)DAT_180cfa228) {
    fVar11 = (float)FUN_18053ef70((float)(DAT_180cfa200 + 1) / DAT_180cfa1f0);
    lVar5 = 0;
    if ((DAT_1808acd00 <= fVar11) && (fVar11 = fVar11 - DAT_1808acd00, fVar11 < DAT_1808acd00)) {
      lVar5 = -0x8000000000000000;
    }
    uVar6 = 8;
    if (8 < (ulonglong)((longlong)fVar11 + lVar5)) {
      uVar6 = (longlong)fVar11 + lVar5;
    }
    uVar8 = uVar3;
    if ((uVar3 < uVar6) && ((0x1ff < uVar3 || (uVar8 = uVar3 * 8, uVar3 * 8 < uVar6)))) {
      uVar8 = uVar6;
    }
    FUN_18026cbe0(uVar6,uVar8);
    puVar7 = *(undefined8 **)(DAT_180cfa208 + 8 + (DAT_180cfa220 & uVar9) * 0x10);
    puVar10 = DAT_180cfa1f8;
    if (puVar7 != DAT_180cfa1f8) {
      iVar1 = *(int *)(puVar7 + 2);
      puVar10 = puVar7;
      while (*(int *)(puVar4 + 2) != iVar1) {
        if (puVar10 == *(undefined8 **)(DAT_180cfa208 + (DAT_180cfa220 & uVar9) * 0x10))
        goto LAB_18026cb5d;
        puVar10 = (undefined8 *)puVar10[1];
        iVar1 = *(int *)(puVar10 + 2);
      }
      puVar10 = (undefined8 *)*puVar10;
    }
  }
LAB_18026cb5d:
  puVar7 = (undefined8 *)puVar10[1];
  DAT_180cfa200 = DAT_180cfa200 + 1;
  *puVar4 = puVar10;
  puVar4[1] = puVar7;
  *puVar7 = puVar4;
  puVar10[1] = puVar4;
  lVar5 = DAT_180cfa208;
  uVar9 = DAT_180cfa220 & uVar9;
  puVar2 = *(undefined8 **)(DAT_180cfa208 + uVar9 * 0x10);
  if (puVar2 == DAT_180cfa1f8) {
    *(undefined8 **)(DAT_180cfa208 + uVar9 * 0x10) = puVar4;
  }
  else {
    if (puVar2 == puVar10) {
      *(undefined8 **)(DAT_180cfa208 + uVar9 * 0x10) = puVar4;
      goto LAB_18026cbbc;
    }
    if (*(undefined8 **)(DAT_180cfa208 + 8 + uVar9 * 0x10) != puVar7) goto LAB_18026cbbc;
  }
  *(undefined8 **)(lVar5 + 8 + uVar9 * 0x10) = puVar4;
LAB_18026cbbc:
  *param_2 = puVar4;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



/* ===== 18026cbe0 FUN_18026cbe0 ===== */

void FUN_18026cbe0(undefined8 param_1,ulonglong param_2)

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
  
  plVar9 = DAT_180cfa1f8;
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
  FUN_180029a30(&DAT_180cfa208,2L << (bVar11 & 0x3f),DAT_180cfa1f8);
  DAT_180cfa220 = lVar12 - 1;
  DAT_180cfa228 = lVar12;
  plVar8 = (longlong *)*DAT_180cfa1f8;
joined_r0x00018026cc5c:
  do {
    while( true ) {
      while( true ) {
        if (plVar8 == plVar9) {
          return;
        }
        plVar2 = (longlong *)*plVar8;
        uVar10 = (((((ulonglong)*(byte *)(plVar8 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                   (ulonglong)*(byte *)((longlong)plVar8 + 0x11)) * 0x100000001b3 ^
                  (ulonglong)*(byte *)((longlong)plVar8 + 0x12)) * 0x100000001b3 ^
                 (ulonglong)*(byte *)((longlong)plVar8 + 0x13)) * 0x100000001b3 & DAT_180cfa220;
        plVar3 = *(longlong **)(DAT_180cfa208 + uVar10 * 0x10);
        puVar1 = (undefined8 *)(DAT_180cfa208 + uVar10 * 0x10);
        lVar12 = DAT_180cfa208 + uVar10 * 0x10;
        if (plVar3 != plVar9) break;
        *puVar1 = plVar8;
        *(longlong **)(lVar12 + 8) = plVar8;
        plVar8 = plVar2;
      }
      plVar4 = *(longlong **)(lVar12 + 8);
      if ((int)plVar8[2] != (int)plVar4[2]) break;
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
        goto joined_r0x00018026cc5c;
      }
      plVar4 = (longlong *)plVar4[1];
    } while ((int)plVar8[2] != (int)plVar4[2]);
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



/* ===== 18026cdb0 FUN_18026cdb0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18026cdb0(void)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  code *pcVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong *plVar7;
  bool bVar8;
  undefined8 ****ppppuVar9;
  undefined4 uVar10;
  int iVar11;
  size_t sVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  ulonglong *puVar16;
  longlong lVar17;
  ulonglong uVar18;
  ulonglong *puVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  undefined1 *puVar22;
  undefined **ppuVar23;
  char *pcVar24;
  undefined1 auStack_248 [8];
  undefined1 auStack_240 [24];
  uint local_228;
  undefined1 local_224;
  undefined8 ****local_218;
  longlong *local_210;
  ulonglong *local_208;
  ulonglong *puStack_200;
  ulonglong *local_1f8;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined8 ****local_1c8;
  longlong *local_1c0;
  undefined1 local_1b8 [16];
  undefined8 *local_1a8;
  undefined8 local_1a0;
  undefined1 local_198 [32];
  char local_178;
  ulonglong local_168;
  ulonglong uStack_160;
  ulonglong local_158;
  ulonglong local_150;
  ulonglong local_148;
  ulonglong uStack_140;
  ulonglong local_138;
  ulonglong local_130;
  int local_128;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 ****local_f8 [2];
  undefined8 local_e8;
  ulonglong local_e0;
  undefined8 ****local_d8 [2];
  longlong *local_c8;
  ulonglong local_c0;
  undefined8 *local_b8;
  undefined8 local_b0;
  undefined8 ****local_98;
  undefined8 local_90;
  undefined1 local_78 [32];
  ulonglong local_58;
  
  puVar19 = DAT_180cfa278;
  puVar22 = auStack_248;
  puVar20 = auStack_248;
  puVar21 = auStack_248;
  local_58 = DAT_180919500 ^ (ulonglong)auStack_248;
  local_228 = 0;
  DAT_180ccfba4 = 1;
  puVar16 = DAT_180cfa270;
  if (DAT_180cfa270 != DAT_180cfa278) {
    do {
      FUN_18000f890(puVar16 + 4);
      FUN_18000f890(puVar16);
      puVar16 = puVar16 + 9;
    } while (puVar16 != puVar19);
    DAT_180cfa278 = DAT_180cfa270;
  }
  ppuVar23 = &PTR_s_miscellaneous_features_hitsound__180647fe0;
  do {
    pcVar24 = ppuVar23[1];
    local_168 = 0;
    uStack_160 = 0;
    local_158 = 0;
    local_150 = 0;
    sVar12 = strlen(pcVar24);
    FUN_1800133a0(&local_168,pcVar24,sVar12);
    pcVar24 = ppuVar23[2];
    local_148 = 0;
    uStack_140 = 0;
    local_138 = 0;
    local_130 = 0;
    sVar12 = strlen(pcVar24);
    FUN_1800133a0(&local_148,pcVar24,sVar12);
    puVar19 = DAT_180cfa278;
    local_128 = 0x1505;
    pcVar24 = *ppuVar23;
    cVar3 = *pcVar24;
    while (cVar3 != '\0') {
      local_128 = local_128 * 0x21 + (int)*pcVar24;
      pcVar24 = pcVar24 + 1;
      cVar3 = *pcVar24;
    }
    if (DAT_180cfa278 == DAT_180cfa280) {
      FUN_18026e650(&DAT_180cfa270,DAT_180cfa278,&local_168);
    }
    else {
      *DAT_180cfa278 = local_168;
      puVar19[1] = uStack_160;
      puVar19[2] = local_158;
      puVar19[3] = local_150;
      local_158 = 0;
      local_150 = 0xf;
      local_168 = local_168 & 0xffffffffffffff00;
      puVar19[4] = local_148;
      puVar19[5] = uStack_140;
      puVar19[6] = local_138;
      puVar19[7] = local_130;
      local_138 = 0;
      local_130 = 0xf;
      local_148 = local_148 & 0xffffffffffffff00;
      *(int *)(puVar19 + 8) = local_128;
      DAT_180cfa278 = DAT_180cfa278 + 9;
    }
    FUN_18000f890(&local_148);
    FUN_18000f890(&local_168);
    ppuVar23 = ppuVar23 + 3;
  } while (ppuVar23 != (undefined **)&DAT_1806480d0);
  FUN_180390a90(local_198);
  if (local_178 == '\0') {
    FUN_180029840(&DAT_1809f35e8,"the game folder wasn\'t found",0x1c);
    goto LAB_18026d672;
  }
  local_218 = (undefined8 ****)0x18073dea8;
  local_210 = (longlong *)0x9;
  uVar10 = FUN_1804e5000();
  FUN_180013d60(&local_b8,uVar10,&local_218);
  local_228 = 0x180;
  local_218 = (undefined8 ****)0x18070c8d8;
  local_210 = (longlong *)0x6;
  uVar10 = FUN_1804e5000();
  FUN_180013d60(local_f8,uVar10,&local_218);
  local_228 = 0x780;
  uVar13 = FUN_180014f50(&local_98,local_198,local_f8);
  FUN_180014f50(local_d8,uVar13,&local_b8);
  FUN_1800289e0(&local_98);
  FUN_1800289e0(local_f8);
  FUN_1800289e0(&local_b8);
  local_1e8 = (ulonglong)local_1e8._4_4_ << 0x20;
  uStack_1e0 = &PTR_vftable_18091a158;
  FUN_180016bc0(local_d8,&local_1e8);
  local_218 = local_d8;
  if (7 < local_c0) {
    local_218 = local_d8[0];
  }
  local_210 = local_c8;
  FUN_180024c20(&local_118,&local_218);
  puVar19 = (ulonglong *)0x3780;
  local_228 = 0x3780;
  uVar6 = CONCAT44(DAT_1809f3600._4_4_,(undefined4)DAT_1809f3600);
  if (uVar6 < 0x10) {
LAB_18026d102:
    DAT_1809f35e8._0_4_ = (uint)local_118;
    DAT_1809f35e8._4_4_ = local_118._4_4_;
    uRam00000001809f35f0 = uStack_110;
    uRam00000001809f35f4 = uStack_10c;
    DAT_1809f35f8._0_4_ = (undefined4)local_108;
    DAT_1809f35f8._4_4_ = local_108._4_4_;
    DAT_1809f3600._0_4_ = (undefined4)uStack_100;
    DAT_1809f3600._4_4_ = uStack_100._4_4_;
    local_108 = 0;
    uStack_100 = 0xf;
    local_118._0_4_ = (uint)local_118 & 0xffffff00;
    FUN_18000f890(&local_118);
    local_208 = (ulonglong *)0x0;
    puStack_200 = (ulonglong *)0x0;
    local_1f8 = (ulonglong *)0x0;
    FUN_18004e860(&local_1d8,local_d8,&local_1e8);
    if (CONCAT44(uStack_1cc,uStack_1d0) != 0) {
      LOCK();
      piVar1 = (int *)(CONCAT44(uStack_1cc,uStack_1d0) + 8);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    local_1e8 = CONCAT44(uStack_1d4,local_1d8);
    uStack_1e0 = (undefined **)CONCAT44(uStack_1cc,uStack_1d0);
    FUN_18004eae0(&local_1c8,&local_1e8);
    if (CONCAT44(uStack_1cc,uStack_1d0) != 0) {
      LOCK();
      piVar1 = (int *)(CONCAT44(uStack_1cc,uStack_1d0) + 8);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    FUN_18004ebc0(&local_218,local_1b8);
    if (local_1c8 != local_218) {
      do {
        ppppuVar9 = local_1c8;
        FUN_180015fc0(local_1c8,&local_1e8,3);
        if ((int)local_1e8 == 2) {
          local_1a8 = &DAT_18070c718;
          local_1a0 = 7;
          uVar10 = FUN_1804e5000();
          FUN_180013d60(local_f8,uVar10,&local_1a8);
          local_228 = (uint)puVar19 | 0x61;
          uVar13 = FUN_180099dd0(ppppuVar9 + 4,local_78);
          local_228 = (uint)puVar19 | 99;
          puVar19 = (ulonglong *)(ulonglong)local_228;
          local_98 = local_f8;
          if (7 < local_e0) {
            local_98 = local_f8[0];
          }
          local_90 = local_e8;
          iVar11 = FUN_180014140(uVar13,&local_98);
          if (iVar11 != 0) goto LAB_18026d27f;
          bVar8 = false;
        }
        else {
LAB_18026d27f:
          bVar8 = true;
        }
        if (((ulonglong)puVar19 & 2) != 0) {
          local_228 = (uint)puVar19 & 0xfffffffd;
          puVar19 = (ulonglong *)(ulonglong)local_228;
          FUN_1800289e0(local_78);
        }
        if (((ulonglong)puVar19 & 1) != 0) {
          local_228 = (uint)puVar19 & 0xfffffffe;
          puVar19 = (ulonglong *)(ulonglong)local_228;
          FUN_1800289e0(local_f8);
        }
        if (!bVar8) {
          puVar14 = (undefined8 *)FUN_180099cd0(ppppuVar9 + 4,local_78);
          if ((ulonglong)puVar14[3] < 8) {
            local_b8 = puVar14;
          }
          else {
            local_b8 = (undefined8 *)*puVar14;
          }
          local_b0 = puVar14[2];
          FUN_180024c20(&local_118,&local_b8);
          local_228 = (uint)puVar19 | 0xc;
          FUN_1800289e0(local_78);
          uVar6 = local_108;
          local_168 = 0;
          uStack_160 = 0;
          local_158 = 0;
          local_150 = 0;
          puVar16 = &local_118;
          if (0xf < uStack_100) {
            puVar16 = (ulonglong *)CONCAT44(local_118._4_4_,(uint)local_118);
          }
          if (0x7fffffffffffffff < local_108) {
                    /* WARNING: Subroutine does not return */
            FUN_180011990();
          }
          if (local_108 < 0x10) {
            local_158 = local_108;
            uVar18 = 0xf;
            local_150 = 0xf;
            uVar15 = *puVar16;
            uStack_160 = puVar16[1];
            local_168 = uVar15;
          }
          else {
            uVar18 = local_108 | 0xf;
            if (uVar18 < 0x8000000000000000) {
              if (uVar18 < 0x16) {
                uVar18 = 0x16;
              }
            }
            else {
              uVar18 = 0x7fffffffffffffff;
            }
            uVar15 = FUN_18000fb70(uVar18 + 1);
            local_158 = uVar6;
            local_168 = uVar15;
            local_150 = uVar18;
            FUN_180540530(uVar15,puVar16,uVar6 + 1);
          }
          uVar13 = FUN_180066a20(local_f8,"sounds/hitsounds/",&local_118);
          puVar16 = (ulonglong *)FUN_1800134a0(uVar13,".vsnd",5);
          local_148 = *puVar16;
          uStack_140 = puVar16[1];
          local_138 = puVar16[2];
          local_130 = puVar16[3];
          puVar16[2] = 0;
          puVar16[3] = 0xf;
          *(undefined1 *)puVar16 = 0;
          local_228 = (uint)puVar19 | 0x1c;
          puVar19 = (ulonglong *)(ulonglong)local_228;
          pcVar24 = (char *)&local_118;
          if (0xf < uStack_100) {
            pcVar24 = (char *)CONCAT44(local_118._4_4_,(uint)local_118);
          }
          local_128 = 0x1505;
          cVar3 = *pcVar24;
          while (cVar3 != '\0') {
            local_128 = local_128 * 0x21 + (int)*pcVar24;
            pcVar24 = pcVar24 + 1;
            cVar3 = *pcVar24;
          }
          if (puStack_200 == local_1f8) {
            FUN_18026e650(&local_208,puStack_200,&local_168);
          }
          else {
            *puStack_200 = uVar15;
            puStack_200[1] = uStack_160;
            puStack_200[2] = uVar6;
            puStack_200[3] = uVar18;
            local_158 = 0;
            local_150 = 0xf;
            local_168 = local_168 & 0xffffffffffffff00;
            puStack_200[4] = local_148;
            puStack_200[5] = uStack_140;
            puStack_200[6] = local_138;
            puStack_200[7] = local_130;
            local_138 = 0;
            local_130 = 0xf;
            local_148 = local_148 & 0xffffffffffffff00;
            *(int *)(puStack_200 + 8) = local_128;
            puStack_200 = puStack_200 + 9;
          }
          FUN_18000f890(&local_148);
          FUN_18000f890(&local_168);
          FUN_18000f890(local_f8);
          FUN_18000f890(&local_118);
        }
        FUN_18004e9d0(&local_1c8);
      } while (local_1c8 != local_218);
    }
    plVar7 = local_210;
    if (local_210 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_210 + 1;
      lVar17 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar17 == 1) {
        (**(code **)*local_210)(local_210);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7);
        }
      }
    }
    if (local_1c0 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_1c0 + 1;
      lVar17 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar17 == 1) {
        (**(code **)*local_1c0)(local_1c0);
        LOCK();
        piVar1 = (int *)((longlong)local_1c0 + 0xc);
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          (**(code **)(*local_1c0 + 8))(local_1c0);
        }
      }
    }
    plVar7 = (longlong *)CONCAT44(uStack_1cc,uStack_1d0);
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar7 + 1;
      lVar17 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar17 == 1) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7);
        }
      }
    }
    uVar10 = FUN_18026db40(local_208,puStack_200,
                           ((longlong)puStack_200 - (longlong)local_208 >> 3) * -0x71c71c71c71c71c7,
                           local_224);
    FUN_18026de50(uVar10,DAT_180cfa278,local_208,
                  ((longlong)puStack_200 - (longlong)local_208 >> 3) * -0x71c71c71c71c71c7);
    puVar16 = puStack_200;
    puVar22 = auStack_248;
    puVar19 = local_208;
    if (local_208 != (ulonglong *)0x0) {
      for (; puVar19 != puVar16; puVar19 = puVar19 + 9) {
        FUN_18000f890(puVar19 + 4);
        FUN_18000f890(puVar19);
      }
      puVar16 = local_208;
      if ((ulonglong)(((longlong)local_1f8 - (longlong)local_208 >> 3) * 8) < 0x1000)
      goto LAB_18026d652;
      puVar16 = (ulonglong *)local_208[-1];
      puVar19 = (ulonglong *)((longlong)local_208 + (-8 - (longlong)puVar16));
      if (&DAT_0000001f < puVar19) goto LAB_18026d64b;
      goto LAB_18026d655;
    }
  }
  else {
    uVar18 = uVar6 + 1;
    lVar5 = CONCAT44(DAT_1809f35e8._4_4_,(uint)DAT_1809f35e8);
    lVar17 = lVar5;
    if (uVar18 < 0x1000) {
LAB_18026d0fd:
      thunk_FUN_1803d64e0(lVar17,uVar18);
      goto LAB_18026d102;
    }
    lVar17 = *(longlong *)(lVar5 + -8);
    if ((lVar5 - lVar17) - 8U < 0x20) {
      uVar18 = uVar6 + 0x28;
      goto LAB_18026d0fd;
    }
LAB_18026d64b:
    pcVar4 = (code *)swi(0x29);
    (*pcVar4)(5);
    puVar20 = auStack_240;
    puVar16 = puVar19;
LAB_18026d652:
    puVar21 = puVar20;
LAB_18026d655:
    *(undefined8 *)(puVar21 + -8) = 0x18026d65a;
    thunk_FUN_1803d64e0(puVar16);
    *(undefined8 *)(puVar21 + 0x40) = 0;
    *(undefined8 *)(puVar21 + 0x48) = 0;
    *(undefined8 *)(puVar21 + 0x50) = 0;
    puVar22 = puVar21;
  }
  *(undefined8 *)(puVar22 + -8) = 0x18026d671;
  FUN_1800289e0(local_d8);
LAB_18026d672:
  if (local_178 != '\0') {
    *(undefined8 *)(puVar22 + -8) = 0x18026d681;
    FUN_1800289e0(local_198);
  }
  *(undefined8 *)(puVar22 + -8) = 0x18026d690;
  return;
}



/* ===== 18026d6b0 FUN_18026d6b0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18026d6b0(longlong param_1,int param_2)

{
  longlong lVar1;
  undefined1 auStack_4c8 [32];
  char *local_4a8;
  longlong local_4a0;
  undefined8 *local_498;
  undefined8 local_490;
  undefined8 uStack_488;
  undefined8 local_480;
  undefined8 uStack_478;
  undefined1 local_468 [1080];
  undefined4 local_30;
  char **local_28;
  ulonglong local_18;
  
  lVar1 = DAT_180961c80;
  local_18 = DAT_180919500 ^ (ulonglong)auStack_4c8;
  if ((DAT_180961c80 != 0) && (*(longlong *)(param_1 + 0x30) != 0)) {
    local_490 = 0;
    uStack_488 = 0;
    local_480 = 0;
    uStack_478 = 0;
    snprintf(&local_490,0x20,&DAT_18070c948,(double)((float)param_2 / DAT_1808acb08));
    local_4a8 = "playvol";
    local_4a0 = param_1 + 0x20;
    if (0xf < *(ulonglong *)(param_1 + 0x38)) {
      local_4a0 = *(longlong *)local_4a0;
    }
    local_498 = &local_490;
    FUN_180540170(local_468,0,0x450);
    local_28 = &local_4a8;
    local_30 = 3;
    FUN_18022c680(lVar1,local_468);
  }
  return;
}



/* ===== 18026d7b0 FUN_18026d7b0 ===== */

void FUN_18026d7b0(int param_1)

{
  int iVar1;
  longlong lVar2;
  
  if (DAT_180920dd8 != '\0') {
    iVar1 = (&DAT_180920ddc)[param_1];
    if (iVar1 != 0) {
      if (DAT_180ccfba4 == '\0') {
        FUN_18026cdb0();
      }
      lVar2 = DAT_180cfa270;
      if (DAT_180cfa270 != DAT_180cfa278) {
        while (*(int *)(lVar2 + 0x40) != iVar1) {
          lVar2 = lVar2 + 0x48;
          if (lVar2 == DAT_180cfa278) {
            return;
          }
        }
        FUN_18026d6b0(lVar2,*(undefined4 *)(&DAT_180920df0 + (longlong)param_1 * 4));
      }
    }
  }
  return;
}



/* ===== 18026d850 FUN_18026d850 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18026d850(undefined8 param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined1 local_40 [32];
  ulonglong local_20;
  
  local_20 = DAT_180919500 ^ (ulonglong)auStack_68;
  if ((DAT_180920dd8 != '\0') && (fVar7 = (float)FUN_180273cc0(param_1,"dmg_health"), 0.0 < fVar7))
  {
    lVar2 = FUN_180273d10(local_40,param_1,"weapon");
    lVar2 = *(longlong *)(lVar2 + 0x10);
    FUN_18000f890(local_40);
    if (lVar2 != 0) {
      lVar2 = FUN_180273f90(param_1,"userid");
      lVar3 = FUN_180273f90(param_1,"attacker");
      if (DAT_180cd1304 == '\0') {
        FUN_1803a0b60(&local_48);
        lVar6 = local_48;
      }
      else {
        lVar6 = DAT_181108a00;
      }
      if ((((lVar2 != 0) && (lVar3 != 0)) && (lVar6 != 0)) && (DAT_180ca09fc != 0)) {
        uVar1 = FUN_180011200((ulonglong)DAT_180ca09fc + lVar2);
        plVar4 = (longlong *)FUN_1803a0940(&local_48,uVar1);
        if ((*plVar4 != 0) && (DAT_180ca09fc != 0)) {
          uVar1 = FUN_180011200(lVar3 + (ulonglong)DAT_180ca09fc);
          plVar4 = (longlong *)FUN_1803a0940(&local_48,uVar1);
          if (*plVar4 != 0) {
            if (DAT_180cd1304 == '\0') {
              FUN_1803a0b60(&local_48);
              DAT_181108a00 = local_48;
              DAT_1811089f8 = FUN_1803a0c50(&local_48);
              DAT_180cd1304 = '\x01';
            }
            if (DAT_1811089f8 != 0) {
              if (lVar2 == lVar6) {
                uVar5 = 3;
              }
              else {
                if (lVar3 != lVar6) {
                  return;
                }
                fVar7 = (float)FUN_180273cc0(param_1,"health");
                fVar8 = (float)FUN_180273cc0(param_1,"hitgroup");
                if ((fVar7 <= 0.0) && (DAT_180920de4 != 0)) {
                  FUN_18026d7b0(2);
                }
                if (((int)fVar8 == 1) && (DAT_180920ddc != 0)) {
                  uVar5 = 0;
                }
                else {
                  if (DAT_180920de0 == 0) {
                    return;
                  }
                  uVar5 = 1;
                }
              }
              FUN_18026d7b0(uVar5);
            }
          }
        }
      }
    }
  }
  return;
}



/* ===== 18026da80 FUN_18026da80 ===== */

void FUN_18026da80(longlong *param_1)

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
  for (; lVar3 != lVar2; lVar3 = lVar3 + 0x48) {
    FUN_18000f890(lVar3 + 0x20);
    FUN_18000f890(lVar3);
  }
  lVar3 = *param_1;
  lVar2 = lVar3;
  if (0xfff < (ulonglong)((param_1[2] - lVar3 >> 3) * 8)) {
    lVar2 = *(longlong *)(lVar3 + -8);
    if ((lVar3 - lVar2) - 8U < 0x20) goto LAB_18026db18;
    lVar2 = 5;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar4 = auStack_20;
  }
  puVar5 = puVar4;
LAB_18026db18:
  *(undefined8 *)(puVar5 + -8) = 0x18026db20;
  thunk_FUN_1803d64e0(lVar2);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* ===== 18026db40 FUN_18026db40 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18026db40(longlong param_1,longlong param_2,longlong param_3,undefined1 param_4)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  longlong local_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined4 local_58;
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_d8;
  lVar3 = param_2 - param_1;
  while( true ) {
    if (lVar3 < 0x948) {
      FUN_18026e190(param_1,param_2);
      return;
    }
    lVar3 = (param_2 - param_1) / 0x12 + (param_2 - param_1 >> 0x3f);
    lVar4 = (lVar3 >> 2) - (lVar3 >> 0x3f);
    lVar3 = lVar4 >> 1;
    if (param_3 < 1) break;
    lVar3 = param_1 + lVar3 * 0x48;
    FUN_18026ebf0(param_1,lVar3,param_2 + -0x48,param_4);
    FUN_18026ee20(&local_a8,param_1,lVar3,param_2);
    lVar3 = local_a0;
    lVar4 = local_a8;
    param_3 = (param_3 >> 1) + (param_3 >> 2);
    if ((local_a8 - param_1 >> 3) * -0x71c71c71c71c71c7 <
        (param_2 - local_a0 >> 3) * -0x71c71c71c71c71c7) {
      FUN_18026db40(param_1,local_a8,param_3,param_4);
      param_1 = lVar3;
      lVar4 = param_2;
    }
    else {
      FUN_18026db40(local_a0,param_2,param_3,param_4);
    }
    lVar3 = lVar4 - param_1;
    param_2 = lVar4;
  }
  while (0 < lVar3) {
    puVar2 = (undefined8 *)(param_1 + -0x48 + lVar3 * 0x48);
    local_98 = *puVar2;
    uStack_90 = puVar2[1];
    puVar2 = (undefined8 *)(param_1 + -0x38 + lVar3 * 0x48);
    local_88 = *puVar2;
    uStack_80 = puVar2[1];
    *(undefined1 *)(param_1 + -0x48 + lVar3 * 0x48) = 0;
    *(undefined8 *)(param_1 + -0x38 + lVar3 * 0x48) = 0;
    *(undefined8 *)(param_1 + -0x30 + lVar3 * 0x48) = 0xf;
    local_78 = *(undefined8 *)(param_1 + -0x28 + lVar3 * 0x48);
    local_60 = *(undefined8 *)(param_1 + -0x10 + lVar3 * 0x48);
    puVar2 = (undefined8 *)(param_1 + -0x20 + lVar3 * 0x48);
    uStack_70 = *puVar2;
    uStack_68 = *(undefined4 *)(puVar2 + 1);
    uStack_64 = *(undefined4 *)((longlong)puVar2 + 0xc);
    *(undefined1 *)(param_1 + -0x28 + lVar3 * 0x48) = 0;
    *(undefined8 *)(param_1 + -0x18 + lVar3 * 0x48) = 0;
    *(undefined8 *)(param_1 + -0x10 + lVar3 * 0x48) = 0xf;
    local_58 = *(undefined4 *)(param_1 + -8 + lVar3 * 0x48);
    local_b8 = param_4;
    FUN_18026ea40(param_1,lVar3 + -1,lVar4,&local_98);
    FUN_18000f890(&local_78);
    FUN_18000f890(&local_98);
    lVar3 = lVar3 + -1;
  }
  if (lVar4 < 2) {
    return;
  }
  do {
    if (1 < (param_2 - param_1 >> 3) * -0x71c71c71c71c71c7) {
      local_98 = *(undefined8 *)(param_2 + -0x48);
      uStack_90 = *(undefined8 *)(param_2 + -0x40);
      puVar1 = (undefined1 *)(param_2 + -0x48);
      local_88 = *(undefined8 *)(param_2 + -0x38);
      uStack_80 = *(undefined8 *)(param_2 + -0x30);
      *puVar1 = 0;
      *(undefined8 *)(param_2 + -0x38) = 0;
      *(undefined8 *)(param_2 + -0x30) = 0xf;
      local_78 = *(undefined8 *)(param_2 + -0x28);
      local_60 = *(undefined8 *)(param_2 + -0x10);
      uStack_70 = *(undefined8 *)(param_2 + -0x20);
      uStack_68 = *(undefined4 *)(param_2 + -0x18);
      uStack_64 = *(undefined4 *)(param_2 + -0x14);
      *(undefined1 *)(param_2 + -0x28) = 0;
      *(undefined8 *)(param_2 + -0x18) = 0;
      *(undefined8 *)(param_2 + -0x10) = 0xf;
      local_58 = *(undefined4 *)(param_2 + -8);
      FUN_18002ba60(puVar1,param_1);
      FUN_18002ba60(param_2 + -0x28,param_1 + 0x20);
      *(undefined4 *)(param_2 + -8) = *(undefined4 *)(param_1 + 0x40);
      local_b8 = param_4;
      FUN_18026ea40(param_1,0,((longlong)puVar1 - param_1 >> 3) * -0x71c71c71c71c71c7,&local_98);
      FUN_18000f890(&local_78);
      FUN_18000f890(&local_98);
    }
    param_2 = param_2 + -0x48;
  } while (0x8f < param_2 - param_1);
  return;
}



/* ===== 18026de50 FUN_18026de50 ===== */

void FUN_18026de50(undefined8 param_1,longlong param_2,undefined8 param_3,ulonglong param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 *local_68;
  longlong local_60;
  ulonglong local_58;
  longlong local_50;
  longlong local_48;
  
  lVar4 = DAT_180cfa278;
  lVar5 = DAT_180cfa270;
  if (param_4 != 0) {
    if (param_4 <= (ulonglong)((DAT_180cfa280 - DAT_180cfa278) / 0x48)) {
      lVar5 = param_4 * 0x48 + param_2;
      if (param_4 < (ulonglong)((DAT_180cfa278 - param_2 >> 3) * -0x71c71c71c71c71c7)) {
        lVar3 = DAT_180cfa278 + param_4 * -0x48;
        DAT_180cfa278 = FUN_18026e4d0(lVar3,DAT_180cfa278,DAT_180cfa278);
        FUN_18026e560(param_2,lVar3,lVar4);
        lVar4 = param_2;
        if (param_4 * 0x48 != 0) {
          do {
            FUN_18000f890(lVar4 + 0x20);
            FUN_18000f890(lVar4);
            lVar4 = lVar4 + 0x48;
          } while (lVar4 != lVar5);
        }
        FUN_18026e450(param_3,param_4,param_2,&DAT_180cfa270);
      }
      else {
        DAT_180cfa278 = FUN_18026e4d0(param_2,DAT_180cfa278,lVar5);
        for (lVar5 = param_2; lVar5 != lVar4; lVar5 = lVar5 + 0x48) {
          FUN_18000f890(lVar5 + 0x20);
          FUN_18000f890(lVar5);
        }
        FUN_18026e450(param_3,param_4,param_2,&DAT_180cfa270);
      }
      return;
    }
    lVar3 = DAT_180cfa278 - DAT_180cfa270 >> 3;
    uVar8 = 0x38e38e38e38e38e;
    if (lVar3 * 0x71c71c71c71c71c7 + 0x38e38e38e38e38eU < param_4) {
                    /* WARNING: Subroutine does not return */
      FUN_1800118d0();
    }
    uVar1 = lVar3 * -0x71c71c71c71c71c7 + param_4;
    uVar7 = (DAT_180cfa280 - DAT_180cfa270 >> 3) * -0x71c71c71c71c71c7;
    if (uVar7 <= 0x38e38e38e38e38e - (uVar7 >> 1)) {
      uVar7 = (uVar7 >> 1) + uVar7;
      uVar8 = uVar1;
      if (uVar1 <= uVar7) {
        uVar8 = uVar7;
      }
      if (0x38e38e38e38e38e < uVar8) {
                    /* WARNING: Subroutine does not return */
        FUN_18000d840();
      }
    }
    lVar2 = FUN_18000fb70(uVar8 * 0x48);
    lVar6 = param_2 - lVar5 >> 3;
    lVar3 = (lVar6 * -0x71c71c71c71c71c7 + param_4) * 0x48 + lVar2;
    local_68 = &DAT_180cfa270;
    lVar6 = lVar6 * 8 + lVar2;
    local_60 = lVar2;
    local_58 = uVar8;
    local_50 = lVar3;
    local_48 = lVar3;
    FUN_18026e450(param_3,param_4,lVar6,&DAT_180cfa270);
    local_50 = lVar6;
    if ((param_4 == 1) && (param_2 == lVar4)) {
      param_2 = lVar5;
      lVar3 = lVar2;
    }
    else {
      FUN_18026e4d0(lVar5,param_2,lVar2);
      local_50 = lVar2;
    }
    FUN_18026e4d0(param_2,lVar4,lVar3);
    local_60 = 0;
    FUN_18026e950(&DAT_180cfa270,lVar2,uVar1,uVar8);
    FUN_18026e890(&local_68);
  }
  return;
}



/* ===== 18026e150 FUN_18026e150 ===== */

void FUN_18026e150(longlong param_1,longlong param_2)

{
  if (param_1 != param_2) {
    do {
      FUN_18000f890(param_1 + 0x20);
      FUN_18000f890(param_1);
      param_1 = param_1 + 0x48;
    } while (param_1 != param_2);
  }
  return;
}



/* ===== 18026e190 FUN_18026e190 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_18026e190(undefined8 *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int iVar3;
  char cVar4;
  undefined8 ****ppppuVar5;
  undefined8 *puVar6;
  undefined8 *_Buf2;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  undefined1 auStack_c8 [32];
  ulonglong local_a8;
  undefined8 ****local_a0;
  undefined8 *local_98;
  undefined8 ****local_88;
  undefined8 local_80;
  ulonglong local_78;
  ulonglong local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStack_c8;
  if (param_1 != param_2) {
    puVar8 = param_1 + 9;
    local_98 = param_2;
    if (puVar8 != param_2) {
LAB_18026e200:
      local_a0 = (undefined8 ****)*puVar8;
      local_80 = puVar8[1];
      local_a8 = puVar8[3];
      uVar1 = puVar8[2];
      *(undefined1 *)puVar8 = 0;
      puVar8[2] = 0;
      puVar8[3] = 0xf;
      local_68 = puVar8[4];
      local_50 = puVar8[7];
      uStack_60 = puVar8[5];
      uStack_58 = puVar8[6];
      *(undefined1 *)(puVar8 + 4) = 0;
      puVar8[6] = 0;
      puVar8[7] = 0xf;
      local_48 = *(undefined4 *)(puVar8 + 8);
      uVar2 = param_1[2];
      if ((ulonglong)param_1[3] < 0x10) {
        puVar6 = param_1;
      }
      else {
        puVar6 = (undefined8 *)*param_1;
      }
      ppppuVar5 = &local_88;
      if (0xf < local_a8) {
        ppppuVar5 = local_a0;
      }
      uVar9 = uVar1;
      if (uVar2 < uVar1) {
        uVar9 = uVar2;
      }
      local_88 = local_a0;
      local_78 = uVar1;
      local_70 = local_a8;
      iVar3 = memcmp(ppppuVar5,puVar6,uVar9);
      if (iVar3 == 0) {
        if (uVar2 <= uVar1) goto LAB_18026e2bd;
      }
      else {
        cVar4 = -1;
        if (-1 < iVar3) {
          cVar4 = '\x01';
        }
        if (-1 < cVar4) {
LAB_18026e2bd:
          puVar6 = puVar8;
          do {
            puVar7 = puVar6 + -9;
            uVar2 = puVar6[-7];
            if ((ulonglong)puVar6[-6] < 0x10) {
              _Buf2 = puVar7;
            }
            else {
              _Buf2 = (undefined8 *)*puVar7;
            }
            ppppuVar5 = &local_88;
            if (0xf < local_a8) {
              ppppuVar5 = local_a0;
            }
            uVar9 = uVar1;
            if (uVar2 < uVar1) {
              uVar9 = uVar2;
            }
            iVar3 = memcmp(ppppuVar5,_Buf2,uVar9);
            if (iVar3 == 0) {
              if (uVar1 < uVar2) {
                iVar3 = -1;
              }
              else {
                if (uVar1 <= uVar2) goto LAB_18026e395;
                iVar3 = 1;
              }
            }
            if (-1 < iVar3) goto LAB_18026e395;
            FUN_18002ba60(puVar6,puVar7);
            FUN_18002ba60(puVar6 + 4,puVar6 + -5);
            *(undefined4 *)(puVar6 + 8) = *(undefined4 *)(puVar6 + -1);
            puVar6 = puVar7;
          } while( true );
        }
      }
      FUN_18026e560(param_1,puVar8,puVar8 + 9);
      FUN_18002ba60(param_1,&local_88);
      FUN_18002ba60(param_1 + 4,&local_68);
      *(undefined4 *)(param_1 + 8) = local_48;
      goto LAB_18026e3c3;
    }
  }
LAB_18026e429:
  return param_2;
LAB_18026e395:
  FUN_18002ba60(puVar6,&local_88);
  FUN_18002ba60(puVar6 + 4,&local_68);
  *(undefined4 *)(puVar6 + 8) = local_48;
LAB_18026e3c3:
  FUN_18000f890(&local_68);
  FUN_18000f890(&local_88);
  puVar8 = puVar8 + 9;
  param_2 = local_98;
  if (puVar8 == local_98) goto LAB_18026e429;
  goto LAB_18026e200;
}



/* ===== 18026e450 FUN_18026e450 ===== */

longlong FUN_18026e450(longlong param_1,longlong param_2,longlong param_3)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_180024b50(param_3,param_1);
    FUN_180024b50(param_3 + 0x20,param_1 + 0x20);
    *(undefined4 *)(param_3 + 0x40) = *(undefined4 *)(param_1 + 0x40);
    param_3 = param_3 + 0x48;
    param_1 = param_1 + 0x48;
  }
  return param_3;
}



/* ===== 18026e4d0 FUN_18026e4d0 ===== */

undefined8 * FUN_18026e4d0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  for (; param_1 != param_2; param_1 = param_1 + 9) {
    *param_3 = 0;
    param_3[1] = 0;
    param_3[2] = 0;
    param_3[3] = 0;
    uVar1 = param_1[1];
    *param_3 = *param_1;
    param_3[1] = uVar1;
    uVar1 = param_1[3];
    param_3[2] = param_1[2];
    param_3[3] = uVar1;
    *(undefined1 *)param_1 = 0;
    param_1[2] = 0;
    param_1[3] = 0xf;
    param_3[4] = 0;
    param_3[5] = 0;
    param_3[6] = 0;
    param_3[7] = 0;
    uVar1 = param_1[5];
    param_3[4] = param_1[4];
    param_3[5] = uVar1;
    uVar1 = param_1[7];
    param_3[6] = param_1[6];
    param_3[7] = uVar1;
    *(undefined1 *)(param_1 + 4) = 0;
    param_1[6] = 0;
    param_1[7] = 0xf;
    *(undefined4 *)(param_3 + 8) = *(undefined4 *)(param_1 + 8);
    param_3 = param_3 + 9;
  }
  return param_3;
}



/* ===== 18026e560 FUN_18026e560 ===== */

longlong FUN_18026e560(longlong param_1,longlong param_2,longlong param_3)

{
  while (param_2 != param_1) {
    FUN_18002ba60(param_3 + -0x48,param_2 + -0x48);
    FUN_18002ba60(param_3 + -0x28,param_2 + -0x28);
    *(undefined4 *)(param_3 + -8) = *(undefined4 *)(param_2 + -8);
    param_3 = param_3 + -0x48;
    param_2 = param_2 + -0x48;
  }
  return param_3;
}



