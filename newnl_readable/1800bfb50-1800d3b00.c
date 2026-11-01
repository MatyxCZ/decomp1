/* ===== 1800bfb50 FUN_1800bfb50 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1800bfb50(char *param_1,undefined4 *param_2)

{
  float fVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 ****ppppuVar4;
  ulonglong uVar5;
  int iVar6;
  size_t sVar7;
  size_t sVar8;
  undefined8 uVar9;
  undefined8 ****ppppuVar10;
  ulonglong uVar11;
  undefined1 *puVar12;
  char *_Str1;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [24];
  undefined8 ****local_78;
  undefined8 uStack_70;
  size_t local_68;
  ulonglong local_60;
  ulonglong local_58;
  
  puVar12 = auStack_98;
  local_58 = DAT_180919500 ^ (ulonglong)auStack_98;
  _Str1 = &DAT_18095d530;
  while ((uVar11 = 0, *_Str1 == '\0' || (iVar6 = strcmp(_Str1,param_1), iVar6 != 0))) {
LAB_1800bfcb3:
    _Str1 = _Str1 + 0xe4;
    if (_Str1 == &DAT_180960e30) {
      uVar9 = 0;
      puVar12 = auStack_98;
LAB_1800bfcc5:
      *(undefined8 *)(puVar12 + -8) = 0x1800bfcd2;
      return uVar9;
    }
  }
  fVar1 = *(float *)(_Str1 + 0x6c);
  local_68 = 0;
  local_78 = (undefined8 ****)0x0;
  uStack_70 = 0;
  local_60 = 0;
  sVar7 = strlen(param_1);
  FUN_1800133a0(&local_78,param_1,sVar7);
  uVar5 = local_60;
  sVar7 = local_68;
  ppppuVar4 = local_78;
  do {
    if (((&DAT_18095d530)[uVar11 * 0xe4] != '\0') &&
       ((float)(&DAT_18095d59c)[uVar11 * 0x39] == fVar1)) {
      sVar8 = strlen(&DAT_18095d530 + uVar11 * 0xe4);
      ppppuVar10 = &local_78;
      if (0xf < uVar5) {
        ppppuVar10 = ppppuVar4;
      }
      if ((sVar7 == sVar8) &&
         (((sVar7 == 0 ||
           (iVar6 = memcmp(ppppuVar10,&DAT_18095d530 + uVar11 * 0xe4,sVar7), iVar6 == 0)) &&
          ((&DAT_180cd1320)[uVar11] != '\0')))) {
        bVar3 = false;
        goto LAB_1800bfc73;
      }
    }
    uVar11 = uVar11 + 1;
  } while (uVar11 < 0x40);
  bVar3 = true;
LAB_1800bfc73:
  if (uVar5 < 0x10) {
LAB_1800bfca6:
    if (bVar3) goto LAB_1800bfcb3;
  }
  else {
    uVar11 = uVar5 + 1;
    ppppuVar10 = ppppuVar4;
    if (uVar11 < 0x1000) {
LAB_1800bfc9e:
      thunk_FUN_1803d64e0(ppppuVar10,uVar11);
      goto LAB_1800bfca6;
    }
    ppppuVar10 = (undefined8 ****)ppppuVar4[-1];
    if ((ulonglong)((longlong)ppppuVar4 + (-8 - (longlong)ppppuVar10)) < 0x20) {
      uVar11 = uVar5 + 0x28;
      goto LAB_1800bfc9e;
    }
    pcVar2 = (code *)swi(0x29);
    (*pcVar2)(5);
    puVar12 = auStack_90;
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(_Str1 + 0x6c);
  }
  uVar9 = 1;
  goto LAB_1800bfcc5;
}



/* ===== 1800bfd10 FUN_1800bfd10 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800bfd10(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char **ppcVar4;
  undefined1 auStack_148 [32];
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
  char *local_40 [3];
  char *local_28 [2];
  
  local_28[0] = (char *)(DAT_180919500 ^ (ulonglong)auStack_148);
  if ((DAT_180cd0410 == '\0') && (DAT_1811089f0 != 0)) {
    ppcVar4 = &local_128;
    local_40[0] = "CCSPlayer_MovementServices";
    local_40[1] = "CPlayer_MovementServices_Humanoid";
    local_40[2] = "CPlayer_MovementServices";
    DAT_180cd0410 = '\x01';
    local_128 = "C_BasePlayerPawn";
    do {
      iVar1 = FUN_18038eaf0(*ppcVar4,"m_pMovementServices");
      if (iVar1 != 0) goto LAB_1800bfdc3;
      ppcVar4 = ppcVar4 + 1;
    } while (ppcVar4 != &local_120);
    iVar1 = 0;
LAB_1800bfdc3:
    ppcVar4 = local_40;
    DAT_180cd0414 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar4,"m_flDuckSpeed");
      if (iVar1 != 0) goto LAB_1800bfdf2;
      ppcVar4 = ppcVar4 + 1;
    } while (ppcVar4 != local_40 + 3);
    iVar1 = 0;
LAB_1800bfdf2:
    ppcVar4 = local_40;
    DAT_180cd0418 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar4,"m_flStaminaAtJumpStart");
      if (iVar1 != 0) goto LAB_1800bfe22;
      ppcVar4 = ppcVar4 + 1;
    } while (ppcVar4 != local_40 + 3);
    iVar1 = 0;
LAB_1800bfe22:
    ppcVar4 = local_40;
    DAT_180cd0424 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar4,"m_flVelMulAtJumpStart");
      if (iVar1 != 0) goto LAB_1800bfe52;
      ppcVar4 = ppcVar4 + 1;
    } while (ppcVar4 != local_40 + 3);
    iVar1 = 0;
LAB_1800bfe52:
    local_120 = "C_BaseEntity";
    ppcVar4 = &local_120;
    DAT_180cd0428 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar4,"m_nActualMoveType");
      if (iVar1 != 0) goto LAB_1800bfe93;
      ppcVar4 = ppcVar4 + 1;
    } while (ppcVar4 != &local_118);
    iVar1 = 0;
LAB_1800bfe93:
    ppcVar4 = &local_118;
    local_118 = "C_BaseEntity";
    DAT_180cd041c = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar4,"m_fFlags");
      if (iVar1 != 0) goto LAB_1800bfed3;
      ppcVar4 = ppcVar4 + 1;
    } while (ppcVar4 != &local_110);
    iVar1 = 0;
LAB_1800bfed3:
    ppcVar4 = &local_110;
    local_110 = "C_BaseEntity";
    DAT_180cd0420 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar4,"m_lifeState");
      if (iVar1 != 0) goto LAB_1800bff13;
      ppcVar4 = ppcVar4 + 1;
    } while (ppcVar4 != &local_108);
    iVar1 = 0;
LAB_1800bff13:
    local_70 = "C_CSPlayerPawn";
    local_68 = "C_CSPlayerPawnBase";
    ppcVar4 = &local_70;
    _DAT_180cd0448 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar4,"m_bIsGrabbingHostage");
      if (iVar1 != 0) goto LAB_1800bff62;
      ppcVar4 = ppcVar4 + 1;
    } while (ppcVar4 != &local_60);
    iVar1 = 0;
LAB_1800bff62:
    ppcVar4 = &local_108;
    local_108 = "C_BasePlayerPawn";
    DAT_180cd042c = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar4,"m_hController");
      if (iVar1 != 0) goto LAB_1800bffa3;
      ppcVar4 = ppcVar4 + 1;
    } while (ppcVar4 != &local_100);
    iVar1 = 0;
LAB_1800bffa3:
    ppcVar4 = &local_60;
    local_60 = "C_CSPlayerPawn";
    local_58 = "C_CSPlayerPawnBase";
    DAT_180cd0430 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar4,"m_flProgressBarStartTime");
      if (iVar1 != 0) goto LAB_1800bffe2;
      ppcVar4 = ppcVar4 + 1;
    } while (ppcVar4 != &local_50);
    iVar1 = 0;
LAB_1800bffe2:
    ppcVar4 = &local_50;
    local_50 = "C_CSPlayerPawn";
    local_48 = "C_CSPlayerPawnBase";
    DAT_180cd0434 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar4,"m_iProgressBarDuration");
      if (iVar1 != 0) goto LAB_1800c0022;
      ppcVar4 = ppcVar4 + 1;
    } while (ppcVar4 != local_40);
    iVar1 = 0;
LAB_1800c0022:
    local_100 = "C_BasePlayerPawn";
    ppcVar4 = &local_100;
    DAT_180cd0438 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar4,"m_pWeaponServices");
      if (iVar1 != 0) goto LAB_1800c0063;
      ppcVar4 = ppcVar4 + 1;
    } while (ppcVar4 != &local_f8);
    iVar1 = 0;
LAB_1800c0063:
    ppcVar4 = &local_f8;
    local_f8 = "CCSPlayer_WeaponServices";
    DAT_180cd043c = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar4,"m_flNextAttack");
      if (iVar1 != 0) goto LAB_1800c00a3;
      ppcVar4 = ppcVar4 + 1;
    } while (ppcVar4 != &local_f0);
    iVar1 = 0;
LAB_1800c00a3:
    ppcVar4 = &local_f0;
    local_f0 = "CPlayer_WeaponServices";
    DAT_180cd0440 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar4,"m_hActiveWeapon");
      if (iVar1 != 0) goto LAB_1800c00e3;
      ppcVar4 = ppcVar4 + 1;
    } while (ppcVar4 != &local_e8);
    iVar1 = 0;
LAB_1800c00e3:
    local_e8 = "C_BasePlayerWeapon";
    ppcVar4 = &local_e8;
    DAT_180cd0444 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar4,"m_nNextPrimaryAttackTick");
      if (iVar1 != 0) goto LAB_1800c0123;
      ppcVar4 = ppcVar4 + 1;
    } while (ppcVar4 != &local_e0);
    iVar1 = 0;
LAB_1800c0123:
    ppcVar4 = &local_e0;
    local_e0 = "C_BasePlayerWeapon";
    DAT_180cd044c = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar4,"m_iClip1");
      if (iVar1 != 0) goto LAB_1800c0163;
      ppcVar4 = ppcVar4 + 1;
    } while (ppcVar4 != &local_d8);
    iVar1 = 0;
LAB_1800c0163:
    local_d8 = "C_CSWeaponBase";
    ppcVar4 = &local_d8;
    DAT_180cd0450 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar4,"m_bInReload");
      if (iVar1 != 0) goto LAB_1800c01a3;
      ppcVar4 = ppcVar4 + 1;
    } while (ppcVar4 != &local_d0);
    iVar1 = 0;
LAB_1800c01a3:
    ppcVar4 = &local_d0;
    local_d0 = "C_CSWeaponBase";
    DAT_180cd0454 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar4,"m_weaponMode");
      if (iVar1 != 0) goto LAB_1800c01e2;
      ppcVar4 = ppcVar4 + 1;
    } while (ppcVar4 != &local_c8);
    iVar1 = 0;
LAB_1800c01e2:
    ppcVar4 = &local_c8;
    local_c8 = "C_CSWeaponBase";
    DAT_180cd0458 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar4,"m_fAccuracyPenalty");
      if (iVar1 != 0) goto LAB_1800c0212;
      ppcVar4 = ppcVar4 + 1;
    } while (ppcVar4 != &local_c0);
    iVar1 = 0;
LAB_1800c0212:
    local_c0 = "C_BaseEntity";
    ppcVar4 = &local_c0;
    DAT_180cd0468 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar4,"m_nSubclassID");
      if (iVar1 != 0) goto LAB_1800c0252;
      ppcVar4 = ppcVar4 + 1;
    } while (ppcVar4 != &local_b8);
    iVar1 = 0;
LAB_1800c0252:
    local_b8 = "CCSWeaponBaseVData";
    ppcVar4 = &local_b8;
    DAT_180cd045c = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar4,"m_WeaponType");
      if (iVar1 != 0) goto LAB_1800c0292;
      ppcVar4 = ppcVar4 + 1;
    } while (ppcVar4 != &local_b0);
    iVar1 = 0;
LAB_1800c0292:
    ppcVar4 = &local_b0;
    local_b0 = "CCSWeaponBaseVData";
    DAT_180cd0460 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar4,"m_flCycleTime");
      if (iVar1 != 0) goto LAB_1800c02c2;
      ppcVar4 = ppcVar4 + 1;
    } while (ppcVar4 != &local_a8);
    iVar1 = 0;
LAB_1800c02c2:
    ppcVar4 = &local_a8;
    local_a8 = "CCSWeaponBaseVData";
    DAT_180cd0464 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar4,"m_flInaccuracyJump");
      if (iVar1 != 0) goto LAB_1800c02f2;
      ppcVar4 = ppcVar4 + 1;
    } while (ppcVar4 != &local_a0);
    iVar1 = 0;
LAB_1800c02f2:
    ppcVar4 = &local_a0;
    local_a0 = "CCSWeaponBaseVData";
    DAT_180cd046c = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar4,"m_flInaccuracyStand");
      if (iVar1 != 0) goto LAB_1800c0322;
      ppcVar4 = ppcVar4 + 1;
    } while (ppcVar4 != &local_98);
    iVar1 = 0;
LAB_1800c0322:
    ppcVar4 = &local_98;
    local_98 = "CCSWeaponBaseVData";
    DAT_180cd0470 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar4,"m_flInaccuracyCrouch");
      if (iVar1 != 0) goto LAB_1800c0352;
      ppcVar4 = ppcVar4 + 1;
    } while (ppcVar4 != &local_90);
    iVar1 = 0;
LAB_1800c0352:
    ppcVar4 = &local_90;
    local_90 = "C_EconEntity";
    DAT_180cd0474 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar4,"m_AttributeManager");
      if (iVar1 != 0) break;
      ppcVar4 = ppcVar4 + 1;
    } while (ppcVar4 != &local_88);
    local_88 = "C_AttributeContainer";
    ppcVar4 = &local_88;
    do {
      iVar2 = FUN_18038eaf0(*ppcVar4,"m_Item");
      if (iVar2 != 0) break;
      ppcVar4 = ppcVar4 + 1;
    } while (ppcVar4 != &local_80);
    local_80 = "C_EconItemView";
    ppcVar4 = &local_80;
    do {
      iVar3 = FUN_18038eaf0(*ppcVar4,"m_iItemDefinitionIndex");
      if (iVar3 != 0) goto LAB_1800c0402;
      ppcVar4 = ppcVar4 + 1;
    } while (ppcVar4 != &local_78);
    iVar3 = 0;
LAB_1800c0402:
    if (((iVar1 == 0) || (iVar2 == 0)) || (iVar3 == 0)) {
      DAT_180cd0478 = 0;
    }
    else {
      DAT_180cd0478 = iVar3 + iVar2 + iVar1;
    }
    ppcVar4 = &local_78;
    local_78 = "CBasePlayerController";
    do {
      iVar1 = FUN_18038eaf0(*ppcVar4,"m_nTickBase");
      if (iVar1 != 0) goto LAB_1800c0472;
      ppcVar4 = ppcVar4 + 1;
    } while (ppcVar4 != &local_70);
    iVar1 = 0;
LAB_1800c0472:
    DAT_180cd047c = iVar1;
  }
  return;
}



/* ===== 1800c04a0 FUN_1800c04a0 ===== */

longlong * FUN_1800c04a0(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  ushort uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 local_res8 [32];
  
  uVar1 = DAT_180cd043c;
  *param_1 = 0;
  uVar4 = 0xffffffff;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  if (uVar1 == 0) {
    return param_1;
  }
  lVar5 = FUN_18000f3a0((ulonglong)uVar1 + *param_2);
  if (0x7ffffffefffe < lVar5 - 0x10000U) {
    return param_1;
  }
  if (DAT_180cd0444 == 0) {
    return param_1;
  }
  uVar3 = FUN_180011200((ulonglong)DAT_180cd0444 + lVar5);
  plVar6 = (longlong *)FUN_1803a0940(local_res8,uVar3);
  lVar5 = *plVar6;
  *param_1 = lVar5;
  if (lVar5 == 0) {
    return param_1;
  }
  if ((DAT_180cd045c == 0) ||
     (lVar5 = FUN_18000f3a0(lVar5 + (ulonglong)DAT_180cd045c + 8), 0x7ffffffefffe < lVar5 - 0x10000U
     )) {
    param_1[1] = 0;
  }
  else {
    param_1[1] = lVar5;
    if ((lVar5 != 0) && (DAT_180cd0460 != 0)) {
      uVar4 = FUN_180011200((ulonglong)DAT_180cd0460 + lVar5);
    }
  }
  uVar1 = DAT_180cd0478;
  *(undefined4 *)(param_1 + 2) = uVar4;
  if (uVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
    return param_1;
  }
  uVar2 = FUN_180011440((ulonglong)uVar1 + *param_1);
  *(uint *)((longlong)param_1 + 0x14) = (uint)uVar2;
  return param_1;
}



/* ===== 1800c05a0 FUN_1800c05a0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1800c05a0(undefined1 *param_1,int param_2,double param_3)

{
  int iVar1;
  char *_Str;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  float *pfVar6;
  undefined8 *puVar7;
  longlong lVar8;
  float *pfVar9;
  ulonglong uVar10;
  uint uVar11;
  undefined1 *puVar12;
  longlong lVar13;
  undefined1 uVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 uVar17;
  ulonglong uVar18;
  float extraout_XMM0_Da;
  float fVar19;
  undefined4 uVar20;
  undefined1 auStack_188 [8];
  undefined1 auStack_180 [24];
  uint local_168;
  undefined1 *local_160;
  undefined1 local_158;
  longlong local_150 [8];
  undefined1 local_110;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined2 local_b8;
  undefined4 local_b4;
  undefined8 local_b0;
  longlong local_a8 [4];
  undefined1 local_88 [32];
  ulonglong local_68;
  
  uVar4 = _DAT_18095cee8;
  uVar3 = _DAT_18095cee0;
  puVar12 = auStack_188;
  local_68 = DAT_180919500 ^ (ulonglong)auStack_188;
  uVar18 = (ulonglong)param_2;
  local_168 = 0;
  local_158 = 0;
  local_150[1] = 0;
  local_150[2] = 0;
  local_150[3] = 0xf;
  local_150[0] = 0;
  local_150[5] = 0;
  local_150[6] = 0;
  local_150[7] = 0xf;
  local_150[4] = 0;
  local_110 = 0;
  local_10c = 0;
  local_b8 = 0;
  local_b4 = 0;
  local_b0 = 0;
  local_c8 = _DAT_18095cee0;
  uStack_c0 = _DAT_18095cee8;
  local_d8 = _DAT_18095cee0;
  uStack_d0 = _DAT_18095cee8;
  local_e8 = _DAT_18095cee0;
  uStack_e0 = _DAT_18095cee8;
  local_f8 = _DAT_18095cee0;
  uStack_f0 = _DAT_18095cee8;
  local_108 = _DAT_18095cee0;
  uStack_100 = _DAT_18095cee8;
  lVar13 = uVar18 * 0x30;
  local_160 = param_1;
  if ((*(double *)(&DAT_1809eb870 + lVar13) < 0.0) ||
     (DAT_1808ac420 < param_3 - *(double *)(&DAT_1809eb870 + lVar13))) {
    *param_1 = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0xf;
    local_150[2] = 0;
    local_150[0] = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0xf;
    local_150[6] = 0;
    local_150[4] = 0;
    param_1[0x48] = 0;
    *(undefined4 *)(param_1 + 0x4c) = 0;
    *(undefined8 *)(param_1 + 0x50) = uVar3;
    *(undefined8 *)(param_1 + 0x58) = uVar4;
    *(undefined8 *)(param_1 + 0x60) = uVar3;
    *(undefined8 *)(param_1 + 0x68) = uVar4;
    *(undefined8 *)(param_1 + 0x70) = uVar3;
    *(undefined8 *)(param_1 + 0x78) = uVar4;
    *(undefined8 *)(param_1 + 0x90) = uVar3;
    *(undefined8 *)(param_1 + 0x98) = uVar4;
    *(undefined2 *)(param_1 + 0xa0) = 0;
    *(undefined4 *)(param_1 + 0xa4) = 0;
    *(undefined8 *)(param_1 + 0xa8) = 0;
    goto LAB_1800c099f;
  }
  local_158 = 1;
  if (*(longlong *)(&DAT_1809eb890 + lVar13) == 0) {
    _Str = (&PTR_s_SM__Off_1805cc210)[uVar18 * 4];
    local_a8[0] = 0;
    local_a8[1] = 0;
    local_a8[2] = 0;
    local_a8[3] = 0;
    strlen(_Str);
    FUN_1800133a0(local_a8,_Str);
    plVar5 = local_a8;
    uVar11 = 2;
  }
  else {
    plVar5 = (longlong *)FUN_180024b50(local_88,&DAT_1809eb880 + lVar13);
    uVar11 = 4;
  }
  lVar15 = 0;
  lVar16 = 0xf;
  uVar20 = 0;
  uVar17 = 1;
  local_168 = uVar11;
  if (local_150 != plVar5) {
    if (0xf < (ulonglong)plVar5[3]) {
      plVar5 = (longlong *)*plVar5;
    }
    FUN_180029840(local_150,plVar5);
    lVar15 = local_150[2];
    lVar16 = local_150[3];
    uVar20 = local_b4;
    uVar17 = local_158;
  }
  if ((uVar11 & 4) != 0) {
    uVar11 = uVar11 & 0xfffffffb;
    FUN_18000f890(local_88);
  }
  if (((uVar11 & 2) == 0) || ((ulonglong)local_a8[3] < 0x10)) {
LAB_1800c0793:
    uVar10 = 0x180000000;
    pfVar6 = (float *)(&DAT_1809eb87c + lVar13);
    fVar19 = *pfVar6;
    puVar12 = auStack_188;
    if ((fVar19 < 0.0) || (puVar12 = auStack_188, (uVar18 & 0xfffffff7) == 0)) goto LAB_1800c07c2;
    uVar14 = 1;
    puVar12 = auStack_188;
  }
  else {
    uVar10 = local_a8[3] + 1;
    lVar8 = local_a8[0];
    if (uVar10 < 0x1000) {
LAB_1800c078e:
      thunk_FUN_1803d64e0(lVar8,uVar10);
      goto LAB_1800c0793;
    }
    lVar8 = *(longlong *)(local_a8[0] + -8);
    if ((local_a8[0] - lVar8) - 8U < 0x20) {
      uVar10 = local_a8[3] + 0x28;
      goto LAB_1800c078e;
    }
    pcVar2 = (code *)swi(0x29);
    pfVar6 = (float *)(*pcVar2)(5);
    puVar12 = auStack_180;
    fVar19 = extraout_XMM0_Da;
LAB_1800c07c2:
    uVar14 = 0;
  }
  puVar12[0x78] = uVar14;
  *(undefined4 *)(puVar12 + 0x28) = 0x3f800000;
  *(undefined4 *)(puVar12 + 0x24) = 0;
  pfVar9 = (float *)(puVar12 + 0x24);
  if (0.0 <= fVar19) {
    pfVar9 = pfVar6;
  }
  pfVar6 = (float *)(puVar12 + 0x28);
  if (fVar19 <= DAT_1808ac34c) {
    pfVar6 = pfVar9;
  }
  fVar19 = *pfVar6;
  *(float *)(puVar12 + 0x7c) = fVar19;
  if ((param_2 == 0) || (iVar1 = *(int *)(uVar10 + 0x9eb878 + lVar13), iVar1 == 1)) {
    puVar7 = (undefined8 *)&DAT_18095cef0;
  }
  else if (iVar1 == 2) {
    puVar7 = (undefined8 *)&DAT_18095cf00;
  }
  else {
    puVar7 = (undefined8 *)&DAT_18095cee0;
  }
  local_c8 = *puVar7;
  uStack_c0 = puVar7[1];
  local_d8 = local_c8;
  uStack_d0 = uStack_c0;
  local_e8 = local_c8;
  uStack_e0 = uStack_c0;
  local_f8 = local_c8;
  uStack_f0 = uStack_c0;
  local_108 = local_c8;
  uStack_100 = uStack_c0;
  if (*(int *)(uVar10 + 0x9eb878 + lVar13) == 0) {
    local_c8 = _DAT_18095cee0;
    uStack_c0 = _DAT_18095cee8;
    local_d8 = _DAT_18095cee0;
    uStack_d0 = _DAT_18095cee8;
    local_e8 = _DAT_18095cee0;
    uStack_e0 = _DAT_18095cee8;
    local_f8 = _DAT_18095cee0;
    uStack_f0 = _DAT_18095cee8;
    local_108 = _DAT_18095cee0;
    uStack_100 = _DAT_18095cee8;
  }
  *param_1 = uVar17;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(puVar12 + 0x38);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(puVar12 + 0x40);
  *(longlong *)(param_1 + 0x18) = lVar15;
  *(longlong *)(param_1 + 0x20) = lVar16;
  *(undefined8 *)(puVar12 + 0x48) = 0;
  puVar12[0x38] = 0;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(puVar12 + 0x58);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(puVar12 + 0x60);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(puVar12 + 0x68);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(puVar12 + 0x70);
  *(undefined8 *)(puVar12 + 0x68) = 0;
  puVar12[0x58] = 0;
  param_1[0x48] = uVar14;
  *(float *)(param_1 + 0x4c) = fVar19;
  *(undefined8 *)(param_1 + 0x50) = local_c8;
  *(undefined8 *)(param_1 + 0x58) = uStack_c0;
  *(undefined8 *)(param_1 + 0x60) = local_c8;
  *(undefined8 *)(param_1 + 0x68) = uStack_c0;
  *(undefined8 *)(param_1 + 0x70) = local_c8;
  *(undefined8 *)(param_1 + 0x78) = uStack_c0;
  *(undefined8 *)(param_1 + 0x90) = local_c8;
  *(undefined8 *)(param_1 + 0x98) = uStack_c0;
  param_1[0xa0] = (undefined1)local_b8;
  param_1[0xa1] = local_b8._1_1_;
  *(undefined4 *)(param_1 + 0xa4) = uVar20;
  *(undefined8 *)(param_1 + 0xa8) = local_b0;
LAB_1800c099f:
  *(undefined8 *)(puVar12 + 0x50) = 0xf;
  *(undefined8 *)(param_1 + 0x80) = local_c8;
  *(undefined8 *)(param_1 + 0x88) = uStack_c0;
  *(undefined8 *)(puVar12 + 0x70) = 0xf;
  *(undefined8 *)(puVar12 + -8) = 0x1800c09c2;
  local_108 = local_c8;
  uStack_100 = uStack_c0;
  local_f8 = local_c8;
  uStack_f0 = uStack_c0;
  local_e8 = local_c8;
  uStack_e0 = uStack_c0;
  local_d8 = local_c8;
  uStack_d0 = uStack_c0;
  FUN_18000f890(puVar12 + 0x58);
  *(undefined8 *)(puVar12 + -8) = 0x1800c09cc;
  FUN_18000f890(puVar12 + 0x38);
  *(undefined8 *)(puVar12 + -8) = 0x1800c09db;
  return param_1;
}



/* ===== 1800c0a00 FUN_1800c0a00 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 * FUN_1800c0a00(undefined1 *param_1,int *param_2)

{
  int iVar1;
  code *pcVar2;
  byte bVar3;
  undefined8 *puVar4;
  size_t sVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  float *pfVar8;
  longlong lVar9;
  float *pfVar10;
  ulonglong uVar11;
  undefined1 *puVar12;
  undefined8 uVar13;
  char *pcVar14;
  undefined8 uVar15;
  undefined1 uVar16;
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
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined1 auStack_288 [8];
  undefined1 auStack_280 [24];
  float local_268;
  float local_264;
  float local_260;
  float local_25c;
  float local_258;
  float local_254 [3];
  undefined8 local_248;
  undefined1 local_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 local_218;
  uint6 local_210 [4];
  undefined1 local_1f0;
  float local_1ec;
  undefined8 local_1e8;
  float fStack_1e0;
  float fStack_1dc;
  float local_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  float local_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  float local_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  undefined2 local_198;
  float local_194;
  undefined8 local_190;
  ulonglong local_188 [4];
  char local_168 [32];
  longlong local_148 [4];
  undefined1 local_128 [32];
  undefined8 local_108;
  undefined8 uStack_100;
  ulonglong local_e8;
  
  fVar25 = DAT_18095ceec;
  fVar30 = DAT_18095cee8;
  fVar29 = DAT_18095cee4;
  fVar28 = DAT_18095cee0;
  puVar12 = auStack_288;
  local_e8 = DAT_180919500 ^ (ulonglong)auStack_288;
  local_238 = 0;
  uStack_228 = 0;
  uVar15 = 0;
  local_220 = 0;
  uVar13 = 0xf;
  local_218 = 0xf;
  local_230 = 0;
  local_210[1]._0_8_ = 0;
  local_248 = 0;
  local_210[2]._0_8_ = 0;
  uVar7 = 0xf;
  local_210[3]._0_8_ = 0xf;
  local_210[0]._0_8_ = 0;
  local_1f0 = 0;
  fVar23 = 0.0;
  local_1ec = 0.0;
  uVar16 = 0;
  local_198 = 0;
  fVar31 = 0.0;
  local_194 = 0.0;
  local_190 = 0;
  _local_1a8 = CONCAT44(DAT_18095cee4,DAT_18095cee0);
  _fStack_1a0 = CONCAT44(DAT_18095ceec,DAT_18095cee8);
  _local_1b8 = CONCAT44(DAT_18095cee4,DAT_18095cee0);
  _fStack_1b0 = CONCAT44(DAT_18095ceec,DAT_18095cee8);
  local_1c8 = CONCAT44(DAT_18095cee4,DAT_18095cee0);
  uStack_1c0 = CONCAT44(DAT_18095ceec,DAT_18095cee8);
  _local_1d8 = CONCAT44(DAT_18095cee4,DAT_18095cee0);
  _fStack_1d0 = CONCAT44(DAT_18095ceec,DAT_18095cee8);
  local_1e8 = CONCAT44(DAT_18095cee4,DAT_18095cee0);
  _fStack_1e0 = CONCAT44(DAT_18095ceec,DAT_18095cee8);
  iVar1 = *param_2;
  if (iVar1 == 0) {
    *param_1 = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0xf;
    local_220 = 0;
    local_218 = 0xf;
    local_230 = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0xf;
    local_210[2]._0_8_ = 0;
    local_210[3]._0_8_ = 0xf;
    local_210[0]._0_8_ = 0;
    param_1[0x48] = 0;
    *(undefined4 *)(param_1 + 0x4c) = 0;
    *(undefined8 *)(param_1 + 0x50) = local_1e8;
    *(float *)(param_1 + 0x58) = fVar30;
    *(float *)(param_1 + 0x5c) = fVar25;
    *(float *)(param_1 + 0x60) = fVar28;
    *(float *)(param_1 + 100) = fVar29;
    *(float *)(param_1 + 0x68) = fVar30;
    *(float *)(param_1 + 0x6c) = fVar25;
    *(float *)(param_1 + 0x70) = fVar28;
    *(float *)(param_1 + 0x74) = fVar29;
    *(float *)(param_1 + 0x78) = fVar30;
    *(float *)(param_1 + 0x7c) = fVar25;
    *(float *)(param_1 + 0x80) = fVar28;
    *(float *)(param_1 + 0x84) = fVar29;
    *(float *)(param_1 + 0x88) = fVar30;
    *(float *)(param_1 + 0x8c) = fVar25;
    *(float *)(param_1 + 0x90) = fVar28;
    *(float *)(param_1 + 0x94) = fVar29;
    *(float *)(param_1 + 0x98) = fVar30;
    *(float *)(param_1 + 0x9c) = fVar25;
    *(undefined2 *)(param_1 + 0xa0) = 0;
    *(undefined4 *)(param_1 + 0xa4) = 0;
    *(undefined8 *)(param_1 + 0xa8) = 0;
    goto LAB_1800c1402;
  }
  local_238 = 1;
  local_264 = DAT_18095cef0;
  local_260 = DAT_18095cef4;
  _local_1d8 = CONCAT44(DAT_18095cef4,DAT_18095cef0);
  local_25c = DAT_18095cef8;
  _fStack_1d0 = CONCAT44(DAT_18095cefc,DAT_18095cef8);
  local_1e8 = CONCAT44(DAT_18095cef4,DAT_18095cef0);
  local_258 = DAT_18095cefc;
  _fStack_1e0 = CONCAT44(DAT_18095cefc,DAT_18095cef8);
  if (iVar1 == 3) {
    local_264 = DAT_18095cee0;
    local_260 = DAT_18095cee4;
    _local_1d8 = CONCAT44(DAT_18095cee4,DAT_18095cee0);
    local_25c = DAT_18095cee8;
    local_1e8 = CONCAT44(DAT_18095cee4,DAT_18095cee0);
    local_258 = DAT_18095ceec * DAT_1808ac1f4;
    _fStack_1e0 = CONCAT44(local_258,DAT_18095cee8);
    _fStack_1d0 = CONCAT44(DAT_18095ceec * DAT_1808ac1f4,DAT_18095cee8);
  }
  if (param_2[1] == 0) {
    bVar3 = (byte)DAT_1806eaf34;
  }
  else {
    bVar3 = (byte)DAT_1806eaf48;
    if (param_2[1] != 1) {
      bVar3 = (byte)DAT_1806dfbb4;
    }
  }
  local_188[1] = 0;
  local_188[2] = 1;
  local_188[3] = 0xf;
  local_188[0] = (ulonglong)bVar3;
  fVar18 = fVar29;
  fVar26 = fVar30;
  fVar27 = fVar25;
  fVar24 = fVar28;
  local_268 = local_258;
  if (iVar1 == 1) {
    puVar4 = (undefined8 *)FUN_180073a70(local_168,local_188," - Planting");
    if (&local_230 != puVar4) {
      local_230 = *puVar4;
      uStack_228 = puVar4[1];
      uVar15 = puVar4[2];
      uVar13 = puVar4[3];
      puVar4[2] = 0;
      puVar4[3] = 0xf;
      *(undefined1 *)puVar4 = 0;
    }
    FUN_18000f890();
    puVar12 = auStack_288;
    fVar17 = (float)param_2[3];
    local_1f0 = 0.0 < fVar17;
    if (0.0 < fVar17) {
      local_254[2] = 1.0;
      local_254[0] = 0.0;
      local_254[1] = DAT_1808ac34c - (float)param_2[2] / fVar17;
      pfVar10 = local_254;
      if (0.0 <= local_254[1]) {
        pfVar10 = local_254 + 1;
      }
      pfVar8 = local_254 + 2;
      if (local_254[1] <= DAT_1808ac34c) {
        pfVar8 = pfVar10;
      }
      fVar23 = *pfVar8;
    }
    uVar16 = 1;
    local_198 = CONCAT11(local_198._1_1_,1);
    local_1ec = fVar23;
LAB_1800c12ce:
    local_210[3]._0_8_ = uVar7;
    fVar19 = (float)*(undefined4 *)(puVar12 + 0x24);
    fVar20 = (float)*(undefined4 *)(puVar12 + 0x28);
    fVar21 = (float)*(undefined4 *)(puVar12 + 0x2c);
    fVar22 = (float)*(undefined4 *)(puVar12 + 0x30);
    fVar17 = (float)*(undefined4 *)(puVar12 + 0x20);
  }
  else {
    if (iVar1 == 3) {
      puVar4 = (undefined8 *)FUN_180073a70(local_168,local_188," - Defused");
      if (&local_230 != puVar4) {
        local_230 = *puVar4;
        uStack_228 = puVar4[1];
        uVar15 = puVar4[2];
        uVar13 = puVar4[3];
        puVar4[2] = 0;
        puVar4[3] = 0xf;
        *(undefined1 *)puVar4 = 0;
      }
      FUN_18000f890();
      puVar12 = auStack_288;
      uVar16 = 1;
      local_198 = CONCAT11(local_198._1_1_,1);
      goto LAB_1800c12ce;
    }
    local_168[0] = '\0';
    local_168[1] = '\0';
    local_168[2] = '\0';
    local_168[3] = '\0';
    local_168[4] = '\0';
    local_168[5] = '\0';
    local_168[6] = '\0';
    local_168[7] = '\0';
    local_168[8] = '\0';
    local_168[9] = '\0';
    local_168[10] = '\0';
    local_168[0xb] = '\0';
    local_168[0xc] = '\0';
    local_168[0xd] = '\0';
    local_168[0xe] = '\0';
    local_168[0xf] = '\0';
    local_168[0x10] = '\0';
    local_168[0x11] = '\0';
    local_168[0x12] = '\0';
    local_168[0x13] = '\0';
    local_168[0x14] = '\0';
    local_168[0x15] = '\0';
    local_168[0x16] = '\0';
    local_168[0x17] = '\0';
    local_168[0x18] = '\0';
    local_168[0x19] = '\0';
    local_168[0x1a] = '\0';
    local_168[0x1b] = '\0';
    local_168[0x1c] = '\0';
    local_168[0x1d] = '\0';
    local_168[0x1e] = '\0';
    local_168[0x1f] = '\0';
    fVar17 = 0.0;
    if (0.0 <= (float)param_2[2]) {
      fVar17 = (float)param_2[2];
    }
    if (DAT_1808ac864 < fVar17) {
      if (DAT_1808acaa8 < fVar17) {
        if (DAT_1808acc64 <= fVar17) {
          pcVar14 = "%.1fh";
          fVar17 = fVar17 / DAT_1808acc64;
        }
        else {
          pcVar14 = "%.1fm";
          fVar17 = fVar17 / DAT_1808acaa8;
        }
      }
      else {
        pcVar14 = "%.1fs";
      }
    }
    else {
      pcVar14 = "%.2fs";
    }
    snprintf(local_168,0x20,pcVar14,(double)fVar17);
    local_148[0] = 0;
    local_148[1] = 0;
    local_148[2] = 0;
    local_148[3] = 0;
    sVar5 = strlen(local_168);
    FUN_1800133a0(local_148,local_168,sVar5);
    uVar6 = FUN_180073a70(&local_108,local_188,&DAT_1806eb08c);
    puVar4 = (undefined8 *)FUN_180066820(local_128,uVar6,local_148);
    if (&local_230 != puVar4) {
      local_230 = *puVar4;
      uStack_228 = puVar4[1];
      uVar15 = puVar4[2];
      uVar13 = puVar4[3];
      puVar4[2] = 0;
      puVar4[3] = 0xf;
      *(undefined1 *)puVar4 = 0;
      local_220 = uVar15;
      local_218 = uVar13;
    }
    FUN_18000f890(local_128);
    FUN_18000f890();
    if (0xf < (ulonglong)local_148[3]) {
      uVar11 = local_148[3] + 1;
      lVar9 = local_148[0];
      if (uVar11 < 0x1000) {
LAB_1800c1057:
        thunk_FUN_1803d64e0(lVar9,uVar11);
        goto LAB_1800c105c;
      }
      lVar9 = *(longlong *)(local_148[0] + -8);
      if ((local_148[0] - lVar9) - 8U < 0x20) {
        uVar11 = local_148[3] + 0x28;
        goto LAB_1800c1057;
      }
      pcVar2 = (code *)swi(0x29);
      (*pcVar2)(5);
      puVar12 = auStack_280;
LAB_1800c1154:
      *(undefined8 *)(puVar12 + -8) = 0x1800c115d;
      uVar7 = FUN_18003a390(local_168);
      *(undefined8 *)(puVar12 + -8) = 0x1800c1171;
      uVar7 = FUN_180066ab0(local_128,&DAT_1806eb0d8,uVar7);
      *(undefined8 *)(puVar12 + -8) = 0x1800c1187;
      puVar4 = (undefined8 *)FUN_1800134a0(uVar7,&DAT_1806eb0d4,3);
      local_108 = *puVar4;
      uStack_100 = puVar4[1];
      uVar6 = puVar4[2];
      uVar7 = puVar4[3];
      puVar4[2] = 0;
      puVar4[3] = 0xf;
      *(undefined1 *)puVar4 = 0;
      *(undefined8 *)(puVar12 + 0x78) = local_108;
      *(undefined8 *)(puVar12 + 0x40) = uVar6;
      *(undefined8 *)(puVar12 + -8) = 0x1800c11d5;
      local_210[1]._0_8_ = uStack_100;
      FUN_18000f890(local_128);
      *(undefined8 *)(puVar12 + -8) = 0x1800c11df;
      FUN_18000f890();
      iVar1 = param_2[8];
      if (iVar1 < 1) {
        fVar27 = 0.0;
      }
      else {
        *(undefined4 *)(puVar12 + 0x34) = 0x3f800000;
        *(undefined4 *)(puVar12 + 0x3c) = 0;
        fVar18 = (float)param_2[7] / (float)iVar1;
        *(float *)(puVar12 + 0x38) = fVar18;
        pfVar10 = (float *)(puVar12 + 0x3c);
        if (0.0 <= fVar18) {
          pfVar10 = (float *)(puVar12 + 0x38);
        }
        pfVar8 = (float *)(puVar12 + 0x34);
        if (fVar18 <= DAT_1808ac34c) {
          pfVar8 = pfVar10;
        }
        fVar27 = *pfVar8;
      }
      fVar24 = (DAT_18095cef0 - DAT_18095cee0) * fVar27 + DAT_18095cee0;
      fVar18 = (DAT_18095cef4 - DAT_18095cee4) * fVar27 + DAT_18095cee4;
      _local_1b8 = CONCAT44(fVar18,fVar24);
      fVar26 = (DAT_18095cef8 - DAT_18095cee8) * fVar27 + DAT_18095cee8;
      fVar27 = (DAT_18095cefc - DAT_18095ceec) * fVar27 + DAT_18095ceec;
      _fStack_1b0 = CONCAT44(fVar27,fVar26);
      goto LAB_1800c12ce;
    }
LAB_1800c105c:
    puVar12 = auStack_288;
    fVar31 = (float)param_2[2];
    local_198 = CONCAT11(0.0 < fVar31,(undefined1)local_198);
    local_194 = fVar31;
    if (param_2[7] < 1) goto LAB_1800c12ce;
    puVar12 = auStack_288;
    if ((param_2[8] < 1) || (puVar12 = auStack_288, param_2[7] < param_2[8])) goto LAB_1800c1154;
    local_210[2]._0_8_ = 5;
    FUN_180540530(local_210,"FATAL",5);
    puVar12 = auStack_288;
    local_210[0] = (uint6)(uint5)local_210[0];
    local_248 = local_210[2]._0_8_;
    _local_1b8 = CONCAT44(DAT_18095cef4,DAT_18095cef0);
    _fStack_1b0 = CONCAT44(DAT_18095cefc,DAT_18095cef8);
    uVar13 = local_218;
    uVar15 = local_220;
    fVar19 = local_1d8;
    fVar20 = fStack_1d4;
    fVar21 = fStack_1d0;
    fVar22 = fStack_1dc;
    fVar23 = local_1ec;
    fVar18 = DAT_18095cef4;
    fVar25 = fStack_19c;
    fVar26 = DAT_18095cef8;
    fVar27 = DAT_18095cefc;
    fVar28 = local_1a8;
    fVar29 = fStack_1a4;
    fVar30 = fStack_1a0;
    fVar31 = local_194;
    uVar16 = (undefined1)local_198;
    fVar24 = DAT_18095cef0;
    fVar17 = fStack_1cc;
  }
  *param_1 = puVar12[0x50];
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(puVar12 + 0x58);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(puVar12 + 0x60);
  *(undefined8 *)(param_1 + 0x18) = uVar15;
  *(undefined8 *)(param_1 + 0x20) = uVar13;
  *(undefined8 *)(puVar12 + 0x68) = 0;
  *(undefined8 *)(puVar12 + 0x70) = 0xf;
  puVar12[0x58] = 0;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(puVar12 + 0x78);
  *(undefined8 *)(param_1 + 0x30) = local_210[1]._0_8_;
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(puVar12 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = local_210[3]._0_8_;
  local_210[2]._0_8_ = 0;
  local_210[3]._0_8_ = 0xf;
  puVar12[0x78] = 0;
  param_1[0x48] = local_1f0;
  *(float *)(param_1 + 0x4c) = fVar23;
  *(undefined8 *)(param_1 + 0x50) = local_1e8;
  *(float *)(param_1 + 0x58) = fStack_1e0;
  *(float *)(param_1 + 0x5c) = fVar22;
  *(float *)(param_1 + 0x60) = fVar19;
  *(float *)(param_1 + 100) = fVar20;
  *(float *)(param_1 + 0x68) = fVar21;
  *(float *)(param_1 + 0x6c) = fVar17;
  *(undefined8 *)(param_1 + 0x70) = local_1c8;
  *(undefined8 *)(param_1 + 0x78) = uStack_1c0;
  *(float *)(param_1 + 0x80) = fVar24;
  *(float *)(param_1 + 0x84) = fVar18;
  *(float *)(param_1 + 0x88) = fVar26;
  *(float *)(param_1 + 0x8c) = fVar27;
  *(float *)(param_1 + 0x90) = fVar28;
  *(float *)(param_1 + 0x94) = fVar29;
  *(float *)(param_1 + 0x98) = fVar30;
  *(float *)(param_1 + 0x9c) = fVar25;
  param_1[0xa0] = uVar16;
  param_1[0xa1] = local_198._1_1_;
  *(float *)(param_1 + 0xa4) = fVar31;
  *(undefined8 *)(param_1 + 0xa8) = local_190;
  *(undefined8 *)(puVar12 + -8) = 0x1800c1401;
  FUN_18000f890(local_188);
LAB_1800c1402:
  *(undefined8 *)(puVar12 + -8) = 0x1800c140c;
  FUN_18000f890(puVar12 + 0x78);
  *(undefined8 *)(puVar12 + -8) = 0x1800c1416;
  FUN_18000f890(puVar12 + 0x58);
  *(undefined8 *)(puVar12 + -8) = 0x1800c1428;
  return param_1;
}



/* ===== 1800c1480 FUN_1800c1480 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1800c1480(undefined1 *param_1,int *param_2)

{
  float fVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte bVar7;
  size_t sVar8;
  ulonglong *puVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined1 *puVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined8 uVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  uint uVar20;
  uint uVar21;
  char *pcVar22;
  undefined8 uVar23;
  float fVar24;
  undefined4 uVar25;
  undefined8 uStack_220;
  undefined1 auStack_218 [8];
  undefined1 auStack_210 [24];
  uint local_1f8;
  float local_1f4 [3];
  undefined8 local_1e8 [2];
  undefined1 local_1d8;
  undefined8 local_1d0 [4];
  undefined8 local_1b0 [4];
  bool local_190;
  undefined4 local_18c;
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
  undefined2 local_138;
  undefined4 local_134;
  undefined8 local_130;
  ulonglong local_128 [5];
  ulonglong uStack_100;
  ulonglong local_f8;
  ulonglong uStack_f0;
  ulonglong local_e8 [12];
  undefined1 local_88 [32];
  ulonglong local_68;
  
  uVar5 = _DAT_18095cee8;
  uVar4 = _DAT_18095cee0;
  local_68 = DAT_180919500 ^ (ulonglong)auStack_218;
  uVar17 = 0;
  local_1f8 = 0;
  local_1d8 = 0;
  local_1d0[1] = 0;
  local_1e8[0] = 0;
  local_1d0[2] = 0;
  uVar23 = 0xf;
  local_1d0[3] = 0xf;
  local_1d0[0] = 0;
  local_1b0[1] = 0;
  uVar16 = 0;
  local_1b0[2] = 0;
  local_1b0[3] = 0xf;
  local_1b0[0] = 0;
  local_190 = false;
  uVar25 = 0;
  local_18c = 0;
  local_138 = 0;
  local_134 = 0;
  local_130 = 0;
  local_148 = _DAT_18095cee0;
  uStack_140 = _DAT_18095cee8;
  local_158 = _DAT_18095cee0;
  uStack_150 = _DAT_18095cee8;
  local_168 = _DAT_18095cee0;
  uStack_160 = _DAT_18095cee8;
  local_178 = _DAT_18095cee0;
  uStack_170 = _DAT_18095cee8;
  local_188 = _DAT_18095cee0;
  uStack_180 = _DAT_18095cee8;
  puVar14 = param_1;
  puVar19 = auStack_218;
  if ((*param_2 == 2) && (puVar19 = auStack_218, (char)param_2[4] != '\0')) {
    local_1d8 = 1;
    local_e8[4] = 0;
    local_e8[5] = 0;
    local_e8[6] = 0;
    local_e8[7] = 0;
    fVar24 = 0.0;
    if (0.0 <= (float)param_2[5]) {
      fVar24 = (float)param_2[5];
    }
    if (DAT_1808acaa8 < fVar24) {
      if (DAT_1808acc64 <= fVar24) {
        pcVar22 = "%.1fh";
        fVar24 = fVar24 / DAT_1808acc64;
      }
      else {
        pcVar22 = "%.1fm";
        fVar24 = fVar24 / DAT_1808acaa8;
      }
    }
    else {
      pcVar22 = "%.1fs";
    }
    snprintf(local_e8 + 4,0x20,pcVar22,(double)fVar24);
    local_e8[8] = 0;
    local_e8[9] = 0;
    local_e8[10] = 0;
    local_e8[0xb] = 0;
    sVar8 = strlen((char *)(local_e8 + 4));
    FUN_1800133a0(local_e8 + 8,local_e8 + 4,sVar8);
    if (DAT_18095cea3 == '\0') {
      if (param_2[1] == 0) {
        bVar7 = (byte)DAT_1806eaf34;
      }
      else {
        bVar7 = (byte)DAT_1806eaf48;
        if (param_2[1] != 1) {
          bVar7 = (byte)DAT_1806dfbb4;
        }
      }
      local_128[1] = 0;
      local_128[2] = 1;
      local_128[3] = 0xf;
      local_128[0] = (ulonglong)bVar7;
      local_1f8 = 0x54;
      puVar9 = (ulonglong *)FUN_1800134a0(local_128,&DAT_1806eb08c,3);
      local_128[4] = *puVar9;
      uStack_100 = puVar9[1];
      local_f8 = puVar9[2];
      uStack_f0 = puVar9[3];
      puVar9[2] = 0;
      puVar9[3] = 0xf;
      *(undefined1 *)puVar9 = 0;
      puVar9 = local_128 + 4;
      uVar20 = 0xdc;
    }
    else {
      local_e8[1] = 0;
      local_e8[2] = 0;
      local_e8[3] = 0xf;
      local_e8[0] = 0;
      puVar9 = local_e8;
      uVar20 = 0x12;
    }
    local_1f8 = uVar20;
    plVar10 = (longlong *)FUN_1800134a0(puVar9,"Defusing - ",0xb);
    local_e8[4] = *plVar10;
    local_e8[5] = plVar10[1];
    local_e8[6] = plVar10[2];
    local_e8[7] = plVar10[3];
    plVar10[2] = 0;
    plVar10[3] = 0xf;
    *(undefined1 *)plVar10 = 0;
    uVar21 = uVar20 | 0x20;
    local_1f8 = uVar21;
    puVar11 = (undefined8 *)FUN_180066820(local_88,local_e8 + 4,local_e8 + 8);
    if (local_1d0 != puVar11) {
      local_1d0[0] = *puVar11;
      local_1d0[1] = puVar11[1];
      local_1e8[0] = puVar11[2];
      uVar23 = puVar11[3];
      puVar11[2] = 0;
      puVar11[3] = 0xf;
      *(undefined1 *)puVar11 = 0;
    }
    uVar17 = local_1d0[1];
    uVar6 = local_1d0[0];
    FUN_18000f890(local_88);
    if (local_e8[7] < 0x10) {
LAB_1800c1783:
      puVar19 = auStack_218;
      puVar18 = auStack_218;
      if ((uVar20 & 8) != 0) {
        uVar21 = uVar20 & 0xfffffff7;
        if (0xf < uStack_f0) {
          uVar15 = uStack_f0 + 1;
          uVar16 = local_128[4];
          if (0xfff < uVar15) {
            uVar16 = *(ulonglong *)(local_128[4] - 8);
            if (0x1f < (local_128[4] - uVar16) - 8) goto LAB_1800c17de;
            uVar15 = uStack_f0 + 0x28;
          }
          thunk_FUN_1803d64e0(uVar16,uVar15);
        }
        puVar19 = auStack_218;
        local_f8 = 0;
        uStack_f0 = 0xf;
        local_128[4] = local_128[4] & 0xffffffffffffff00;
      }
    }
    else {
      uVar15 = local_e8[7] + 1;
      uVar16 = local_e8[4];
      if (uVar15 < 0x1000) {
LAB_1800c177d:
        thunk_FUN_1803d64e0(uVar16,uVar15);
        goto LAB_1800c1783;
      }
      uVar16 = *(longlong *)(local_e8[4] + -8);
      if ((local_e8[4] - uVar16) - 8 < 0x20) {
        uVar15 = local_e8[7] + 0x28;
        goto LAB_1800c177d;
      }
      pcVar2 = (code *)swi(0x29);
      (*pcVar2)(5);
      puVar18 = auStack_210;
LAB_1800c17de:
      pcVar2 = (code *)swi(0x29);
      (*pcVar2)(5);
      puVar19 = puVar18 + 8;
    }
    if ((uVar21 & 4) == 0) {
LAB_1800c183b:
      if ((uVar21 & 2) != 0) {
        if (0xf < local_e8[3]) {
          uVar16 = local_e8[3] + 1;
          uVar15 = local_e8[0];
          if (0xfff < uVar16) {
            uVar15 = *(ulonglong *)(local_e8[0] - 8);
            if (0x1f < (local_e8[0] - uVar15) - 8) goto LAB_1800c19ee;
            uVar16 = local_e8[3] + 0x28;
          }
          *(undefined8 *)(puVar19 + -8) = 0x1800c187c;
          thunk_FUN_1803d64e0(uVar15,uVar16);
        }
        local_e8[2] = 0;
        local_e8[3] = 0xf;
        local_e8[0] = local_e8[0] & 0xffffffffffffff00;
      }
      if (0xf < local_e8[0xb]) {
        uVar16 = local_e8[0xb] + 1;
        uVar15 = local_e8[8];
        if (0xfff < uVar16) {
          uVar15 = *(longlong *)(local_e8[8] + -8);
          if (0x1f < (local_e8[8] - uVar15) - 8) goto LAB_1800c19f5;
          uVar16 = local_e8[0xb] + 0x28;
        }
        *(undefined8 *)(puVar19 + -8) = 0x1800c18ca;
        thunk_FUN_1803d64e0(uVar15,uVar16);
      }
      fVar24 = (float)param_2[5];
      puVar11 = (undefined8 *)&DAT_18095cea8;
      if ((float)param_2[2] < fVar24) {
        puVar11 = (undefined8 *)&DAT_18095ceb8;
      }
      local_178 = *puVar11;
      uStack_170 = puVar11[1];
      local_188 = local_178;
      uStack_180 = uStack_170;
      fVar1 = (float)param_2[6];
      bVar3 = 0.0 < fVar1;
      local_190 = bVar3;
      if (bVar3) {
        *(undefined4 *)(puVar19 + 0x2c) = 0x3f800000;
        *(undefined4 *)(puVar19 + 0x24) = 0;
        fVar24 = DAT_1808ac34c - fVar24 / fVar1;
        *(float *)(puVar19 + 0x28) = fVar24;
        puVar13 = (undefined4 *)(puVar19 + 0x24);
        if (0.0 <= fVar24) {
          puVar13 = (undefined4 *)(puVar19 + 0x28);
        }
        puVar12 = (undefined4 *)(puVar19 + 0x2c);
        if (fVar24 <= DAT_1808ac34c) {
          puVar12 = puVar13;
        }
        uVar25 = *puVar12;
      }
      local_18c = uVar25;
      *param_1 = 1;
      *(undefined8 *)(param_1 + 8) = uVar6;
      *(undefined8 *)(param_1 + 0x10) = uVar17;
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(puVar19 + 0x30);
      *(undefined8 *)(param_1 + 0x20) = uVar23;
      *(undefined8 *)(puVar19 + 0x58) = 0;
      *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(puVar19 + 0x68);
      *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(puVar19 + 0x70);
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(undefined8 *)(param_1 + 0x40) = 0xf;
      *(undefined8 *)(puVar19 + 0x78) = 0;
      param_1[0x48] = bVar3;
      *(undefined4 *)(param_1 + 0x4c) = uVar25;
      *(undefined8 *)(param_1 + 0x50) = local_178;
      *(undefined8 *)(param_1 + 0x58) = uStack_170;
      *(undefined8 *)(param_1 + 0x60) = local_178;
      *(undefined8 *)(param_1 + 0x68) = uStack_170;
      *(undefined8 *)(param_1 + 0x70) = uVar4;
      *(undefined8 *)(param_1 + 0x78) = uVar5;
      *(undefined8 *)(param_1 + 0x80) = uVar4;
      *(undefined8 *)(param_1 + 0x88) = uVar5;
      *(undefined8 *)(param_1 + 0x90) = local_178;
      *(undefined8 *)(param_1 + 0x98) = uStack_170;
      *(undefined2 *)(param_1 + 0xa0) = 0;
      *(undefined4 *)(param_1 + 0xa4) = 0;
      *(undefined8 *)(param_1 + 0xa8) = 0;
      local_148 = local_178;
      uStack_140 = uStack_170;
      goto LAB_1800c1a7a;
    }
    uVar21 = uVar21 & 0xfffffffb;
    if (local_128[3] < 0x10) {
LAB_1800c182b:
      local_128[2] = 0;
      local_128[3] = 0xf;
      local_128[0] = local_128[0] & 0xffffffffffffff00;
      goto LAB_1800c183b;
    }
    uVar16 = local_128[3] + 1;
    uVar15 = local_128[0];
    if (uVar16 < 0x1000) {
LAB_1800c1826:
      *(undefined8 *)(puVar19 + -8) = 0x1800c182b;
      thunk_FUN_1803d64e0(uVar15,uVar16);
      goto LAB_1800c182b;
    }
    uVar15 = *(ulonglong *)(local_128[0] - 8);
    if ((local_128[0] - uVar15) - 8 < 0x20) {
      uVar16 = local_128[3] + 0x28;
      goto LAB_1800c1826;
    }
    pcVar2 = (code *)swi(0x29);
    (*pcVar2)(5);
    puVar19 = puVar19 + 8;
LAB_1800c19ee:
    pcVar2 = (code *)swi(0x29);
    (*pcVar2)(5);
    puVar19 = puVar19 + 8;
LAB_1800c19f5:
    puVar14 = &DAT_00000005;
    pcVar2 = (code *)swi(0x29);
    (*pcVar2)();
    puVar19 = puVar19 + 8;
  }
  *puVar14 = 0;
  *(undefined8 *)(puVar14 + 8) = *(undefined8 *)(puVar19 + 0x48);
  *(undefined8 *)(puVar14 + 0x10) = *(undefined8 *)(puVar19 + 0x50);
  *(undefined8 *)(puVar14 + 0x18) = uVar17;
  *(undefined8 *)(puVar14 + 0x20) = uVar23;
  *(undefined8 *)(puVar19 + 0x58) = uVar17;
  *(undefined8 *)(puVar14 + 0x28) = *(undefined8 *)(puVar19 + 0x68);
  *(undefined8 *)(puVar14 + 0x30) = *(undefined8 *)(puVar19 + 0x70);
  *(ulonglong *)(puVar14 + 0x38) = uVar16;
  *(undefined8 *)(puVar14 + 0x40) = 0xf;
  *(undefined8 *)(puVar19 + 0x78) = uVar17;
  puVar14[0x48] = 0;
  *(undefined4 *)(puVar14 + 0x4c) = 0;
  *(undefined8 *)(puVar14 + 0x50) = uVar4;
  *(undefined8 *)(puVar14 + 0x58) = uVar5;
  *(undefined8 *)(puVar14 + 0x60) = uVar4;
  *(undefined8 *)(puVar14 + 0x68) = uVar5;
  *(undefined8 *)(puVar14 + 0x70) = uVar4;
  *(undefined8 *)(puVar14 + 0x78) = uVar5;
  *(undefined8 *)(puVar14 + 0x80) = uVar4;
  *(undefined8 *)(puVar14 + 0x88) = uVar5;
  *(undefined8 *)(puVar14 + 0x90) = uVar4;
  *(undefined8 *)(puVar14 + 0x98) = uVar5;
  *(undefined2 *)(puVar14 + 0xa0) = 0;
  *(int *)(puVar14 + 0xa4) = (int)uVar17;
  *(undefined8 *)(puVar14 + 0xa8) = uVar17;
LAB_1800c1a7a:
  puVar19[0x68] = 0;
  local_1b0[3] = 0xf;
  puVar19[0x48] = 0;
  *(undefined8 *)(puVar19 + 0x60) = 0xf;
  *(undefined8 *)(puVar19 + -8) = 0x1800c1a9f;
  FUN_18000f890(puVar19 + 0x68);
  *(undefined8 *)(puVar19 + -8) = 0x1800c1aa9;
  FUN_18000f890(puVar19 + 0x48);
  *(undefined8 *)(puVar19 + -8) = 0x1800c1abb;
  return param_1;
}



/* ===== 1800c1ae0 FUN_1800c1ae0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1800c1ae0(undefined1 *param_1)

{
  longlong lVar1;
  uint uVar2;
  undefined1 *puVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  float fVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  longlong lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auStack_188 [32];
  undefined1 *local_168 [2];
  undefined1 local_158;
  ulonglong local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 local_138;
  ulonglong local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined1 local_110;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined2 local_b8;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined1 local_a8 [32];
  ulonglong local_88;
  
  local_88 = DAT_180919500 ^ (ulonglong)auStack_188;
  local_158 = 0;
  uStack_148 = 0;
  local_140 = 0;
  local_138 = 0xf;
  local_150 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_118 = 0xf;
  local_130 = 0;
  local_110 = 0;
  fVar17 = 0.0;
  local_10c = 0;
  local_b8 = 0;
  local_b4 = 0;
  local_b0 = 0;
  local_c8 = _DAT_18095cee0;
  uStack_c0 = _DAT_18095cee8;
  local_d8 = _DAT_18095cee0;
  uStack_d0 = _DAT_18095cee8;
  local_e8 = _DAT_18095cee0;
  uStack_e0 = _DAT_18095cee8;
  local_f8 = _DAT_18095cee0;
  uStack_f0 = _DAT_18095cee8;
  local_108 = _DAT_18095cee0;
  uStack_100 = _DAT_18095cee8;
  local_168[0] = param_1;
  if (DAT_180cd1304 == '\0') {
    FUN_1803a0b60(local_168);
    DAT_181108a00 = local_168[0];
    DAT_1811089f8 = (undefined1 *)FUN_1803a0c50(local_168);
    DAT_180cd1304 = '\x01';
  }
  puVar3 = DAT_1811089f8;
  if (DAT_1811089f8 == (undefined1 *)0x0) {
LAB_1800c2075:
    *param_1 = local_158;
    *(ulonglong *)(param_1 + 8) = local_150;
    *(undefined8 *)(param_1 + 0x10) = uStack_148;
    *(undefined8 *)(param_1 + 0x18) = local_140;
    *(undefined8 *)(param_1 + 0x20) = local_138;
    *(ulonglong *)(param_1 + 0x28) = local_130;
    *(undefined8 *)(param_1 + 0x30) = uStack_128;
    *(undefined8 *)(param_1 + 0x38) = local_120;
    *(undefined8 *)(param_1 + 0x40) = local_118;
    *(undefined8 *)(param_1 + 0x50) = local_108;
    *(undefined8 *)(param_1 + 0x58) = uStack_100;
    *(undefined8 *)(param_1 + 0x70) = local_e8;
    *(undefined8 *)(param_1 + 0x78) = uStack_e0;
    *(undefined8 *)(param_1 + 0x90) = local_c8;
    *(undefined8 *)(param_1 + 0x98) = uStack_c0;
LAB_1800c20e5:
    param_1[0x48] = local_110;
    param_1[0xa0] = (undefined1)local_b8;
    param_1[0xa1] = local_b8._1_1_;
    *(undefined8 *)(param_1 + 0xa8) = local_b0;
  }
  else {
    if (DAT_180ca09f0 == 0) goto LAB_1800c2075;
    iVar6 = FUN_180011200(DAT_1811089f8 + DAT_180ca09f0);
    if ((((999 < iVar6 - 1U) || (local_168[0] = puVar3, DAT_18095723c == '\0')) ||
        (DAT_1809f351c == 2)) ||
       (((DAT_1809f351c == 1 && (lVar11 = FUN_180266660(), lVar11 != 0)) &&
        ((DAT_180cf9f80 != 0 &&
         (cVar4 = FUN_180011220((ulonglong)DAT_180cf9f80 + lVar11), cVar4 != '\0'))))))
    goto LAB_1800c2075;
    plVar12 = (longlong *)FUN_1800c04a0(local_a8,local_168);
    lVar11 = *plVar12;
    if (((lVar11 == 0) || (lVar1 = plVar12[1], lVar1 == 0)) ||
       ((iVar6 = *(int *)((longlong)plVar12 + 0x14), 5 < (int)plVar12[2] - 1U && (iVar6 != 0x1f))))
    {
      *param_1 = local_158;
      *(ulonglong *)(param_1 + 8) = local_150;
      *(undefined8 *)(param_1 + 0x10) = uStack_148;
      *(undefined8 *)(param_1 + 0x18) = local_140;
      *(undefined8 *)(param_1 + 0x20) = local_138;
      *(ulonglong *)(param_1 + 0x28) = local_130;
      *(undefined8 *)(param_1 + 0x30) = uStack_128;
      *(undefined8 *)(param_1 + 0x38) = local_120;
      *(undefined8 *)(param_1 + 0x40) = local_118;
      *(undefined8 *)(param_1 + 0x50) = local_108;
      *(undefined8 *)(param_1 + 0x58) = uStack_100;
      *(undefined8 *)(param_1 + 0x70) = local_e8;
      *(undefined8 *)(param_1 + 0x78) = uStack_e0;
      *(undefined8 *)(param_1 + 0x90) = local_c8;
      *(undefined8 *)(param_1 + 0x98) = uStack_c0;
      goto LAB_1800c20e5;
    }
    iVar7 = FUN_1800ef270(&DAT_180957240,iVar6);
    cVar4 = (&DAT_18095c454)[(longlong)iVar7 * 0x24];
    puVar13 = (undefined8 *)FUN_1800ef660(local_a8,iVar7,"hitchance");
    if (0xf < (ulonglong)puVar13[3]) {
      puVar13 = (undefined8 *)*puVar13;
    }
    cVar5 = FUN_1800bfb50(puVar13,0);
    FUN_18000f890(local_a8);
    if (cVar4 != '\0' || cVar5 != '\0') {
      local_158 = 1;
      FUN_180029840(&local_150,&DAT_1806eae4c,2);
      if (cVar4 != '\0') {
        if (DAT_180cd0420 == 0) {
          uVar8 = 0;
        }
        else {
          uVar8 = FUN_180011200(puVar3 + DAT_180cd0420);
        }
        if ((DAT_180cd0458 == 0) ||
           (uVar9 = FUN_180011200(lVar11 + (ulonglong)DAT_180cd0458), 1 < uVar9)) {
          uVar9 = 0;
        }
        if ((iVar6 == 0x28) && ((uVar8 & 1) == 0)) {
          lVar14 = FUN_180264b70("weapon_air_spread_scale");
          if (lVar14 == 0) {
            fVar10 = DAT_1808ac34c;
          }
          else {
            fVar10 = (float)FUN_180264d70(lVar14);
          }
          fVar15 = (float)FUN_18000f3d0((ulonglong)DAT_180cd046c + 4 + lVar1);
          fVar16 = (float)FUN_18000f3d0((ulonglong)DAT_180cd0470 + 4 + lVar1);
          fVar10 = fVar15 * fVar10 + fVar16;
        }
        else if (iVar6 == 0x40) {
          if ((uVar8 & 2) == 0) {
            fVar10 = DAT_1808abfe8;
          }
          else {
            fVar10 = DAT_1808abfcc;
          }
        }
        else {
          uVar2 = DAT_180cd0470;
          if ((uVar8 & 2) != 0) {
            uVar2 = DAT_180cd0474;
          }
          fVar10 = (float)FUN_18000f3d0((ulonglong)(uVar9 * 4) + (ulonglong)uVar2 + lVar1);
        }
        if (DAT_180cd0468 != 0) {
          fVar17 = (float)FUN_18000f3d0(lVar11 + (ulonglong)DAT_180cd0468);
        }
        puVar13 = (undefined8 *)&DAT_18095cf00;
        if (fVar10 + _DAT_1808abfac < fVar17) {
          puVar13 = (undefined8 *)&DAT_18095cef0;
        }
        local_108 = *puVar13;
        uStack_100 = puVar13[1];
        *param_1 = local_158;
        *(ulonglong *)(param_1 + 8) = local_150;
        *(undefined8 *)(param_1 + 0x10) = uStack_148;
        *(undefined8 *)(param_1 + 0x18) = local_140;
        *(undefined8 *)(param_1 + 0x20) = local_138;
        *(ulonglong *)(param_1 + 0x28) = local_130;
        *(undefined8 *)(param_1 + 0x30) = uStack_128;
        *(undefined8 *)(param_1 + 0x38) = local_120;
        *(undefined8 *)(param_1 + 0x40) = local_118;
        param_1[0x48] = local_110;
        *(undefined4 *)(param_1 + 0x4c) = local_10c;
        *(undefined8 *)(param_1 + 0x50) = local_108;
        *(undefined8 *)(param_1 + 0x58) = uStack_100;
        *(undefined8 *)(param_1 + 0x60) = local_108;
        *(undefined8 *)(param_1 + 0x68) = uStack_100;
        *(undefined8 *)(param_1 + 0x70) = local_108;
        *(undefined8 *)(param_1 + 0x78) = uStack_100;
        *(undefined8 *)(param_1 + 0x80) = local_108;
        *(undefined8 *)(param_1 + 0x88) = uStack_100;
        *(undefined8 *)(param_1 + 0x90) = local_108;
        *(undefined8 *)(param_1 + 0x98) = uStack_100;
        param_1[0xa0] = (undefined1)local_b8;
        param_1[0xa1] = local_b8._1_1_;
        *(undefined8 *)(param_1 + 0xa8) = local_b0;
        local_f8 = local_108;
        uStack_f0 = uStack_100;
        local_e8 = local_108;
        uStack_e0 = uStack_100;
        local_d8 = local_108;
        uStack_d0 = uStack_100;
        local_c8 = local_108;
        uStack_c0 = uStack_100;
        goto LAB_1800c212a;
      }
      *param_1 = local_158;
      *(ulonglong *)(param_1 + 8) = local_150;
      *(undefined8 *)(param_1 + 0x10) = uStack_148;
      *(undefined8 *)(param_1 + 0x18) = local_140;
      *(undefined8 *)(param_1 + 0x20) = local_138;
      *(ulonglong *)(param_1 + 0x28) = local_130;
      *(undefined8 *)(param_1 + 0x30) = uStack_128;
      *(undefined8 *)(param_1 + 0x38) = local_120;
      *(undefined8 *)(param_1 + 0x40) = local_118;
      *(undefined8 *)(param_1 + 0x50) = local_108;
      *(undefined8 *)(param_1 + 0x58) = uStack_100;
      *(undefined8 *)(param_1 + 0x70) = local_e8;
      *(undefined8 *)(param_1 + 0x78) = uStack_e0;
      *(undefined8 *)(param_1 + 0x90) = local_c8;
      *(undefined8 *)(param_1 + 0x98) = uStack_c0;
      goto LAB_1800c20e5;
    }
    *param_1 = local_158;
    *(ulonglong *)(param_1 + 8) = local_150;
    *(undefined8 *)(param_1 + 0x10) = uStack_148;
    *(undefined8 *)(param_1 + 0x18) = local_140;
    *(undefined8 *)(param_1 + 0x20) = local_138;
    *(ulonglong *)(param_1 + 0x28) = local_130;
    *(undefined8 *)(param_1 + 0x30) = uStack_128;
    *(undefined8 *)(param_1 + 0x38) = local_120;
    *(undefined8 *)(param_1 + 0x40) = local_118;
    param_1[0x48] = local_110;
    *(undefined8 *)(param_1 + 0x50) = local_108;
    *(undefined8 *)(param_1 + 0x58) = uStack_100;
    *(undefined8 *)(param_1 + 0x70) = local_e8;
    *(undefined8 *)(param_1 + 0x78) = uStack_e0;
    *(undefined8 *)(param_1 + 0x90) = local_c8;
    *(undefined8 *)(param_1 + 0x98) = uStack_c0;
    param_1[0xa0] = (undefined1)local_b8;
    param_1[0xa1] = local_b8._1_1_;
    *(undefined8 *)(param_1 + 0xa8) = local_b0;
  }
  *(undefined4 *)(param_1 + 0x4c) = local_10c;
  *(undefined8 *)(param_1 + 0x60) = local_f8;
  *(undefined8 *)(param_1 + 0x68) = uStack_f0;
  *(undefined8 *)(param_1 + 0x80) = local_d8;
  *(undefined8 *)(param_1 + 0x88) = uStack_d0;
LAB_1800c212a:
  local_130 = local_130 & 0xffffffffffffff00;
  local_150 = local_150 & 0xffffffffffffff00;
  local_140 = 0;
  local_138 = 0xf;
  local_120 = 0;
  local_118 = 0xf;
  *(undefined4 *)(param_1 + 0xa4) = local_b4;
  FUN_18000f890(&local_130);
  FUN_18000f890(&local_150);
  return param_1;
}



/* ===== 1800c21a0 FUN_1800c21a0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800c21a0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                  undefined4 *param_5,float param_6)

{
  int iVar1;
  undefined1 auStack_258 [32];
  int local_238;
  int local_230;
  int local_228;
  uint local_220;
  uint local_218;
  uint local_210;
  uint local_208;
  uint local_200;
  uint local_1f8;
  uint local_1f0;
  uint local_1e8;
  int local_1e0;
  uint local_1d8;
  undefined4 local_1d0;
  undefined4 local_1c8;
  undefined4 local_1c0;
  double local_1b8;
  undefined4 local_1b0;
  double local_1a8;
  double local_1a0;
  undefined1 local_198 [320];
  ulonglong local_58;
  
  local_58 = DAT_180919500 ^ (ulonglong)auStack_258;
  if ((((((*param_1 != DAT_1809eb850) || (param_1[1] != DAT_1809eb854)) ||
        (param_1[2] != DAT_1809eb858)) ||
       ((param_1[3] != DAT_1809eb85c || ((char)param_1[4] != DAT_1809eb860)))) ||
      ((*(char *)((longlong)param_1 + 0x11) != DAT_1809eb861 ||
       ((*(char *)((longlong)param_1 + 0x12) != DAT_1809eb862 ||
        (*(char *)((longlong)param_1 + 0x13) != DAT_1809eb863)))))) ||
     (((char)param_1[5] != DAT_1809eb864 ||
      ((((*(char *)((longlong)param_1 + 0x15) != DAT_1809eb865 ||
         (*(char *)((longlong)param_1 + 0x16) != DAT_1809eb866)) ||
        (*(char *)((longlong)param_1 + 0x17) != DAT_1809eb867)) ||
       (((char)param_1[6] != DAT_1809eb868 || (param_1[7] != DAT_1809eb86c)))))))) {
    DAT_1809eb854 = param_1[1];
    DAT_1809eb858 = param_1[2];
    DAT_1809eb85c = param_1[3];
    DAT_1809eb860 = (char)param_1[4];
    DAT_1809eb861 = *(char *)((longlong)param_1 + 0x11);
    DAT_1809eb862 = *(char *)((longlong)param_1 + 0x12);
    DAT_1809eb863 = *(char *)((longlong)param_1 + 0x13);
    DAT_1809eb864 = (char)param_1[5];
    DAT_1809eb865 = *(char *)((longlong)param_1 + 0x15);
    DAT_1809eb866 = *(char *)((longlong)param_1 + 0x16);
    DAT_1809eb867 = *(char *)((longlong)param_1 + 0x17);
    DAT_1809eb868 = (char)param_1[6];
    _DAT_1809eb869 = *(undefined2 *)((longlong)param_1 + 0x19);
    DAT_1809eb86b = *(undefined1 *)((longlong)param_1 + 0x1b);
    DAT_1809eb86c = param_1[7];
    local_1b0 = *param_5;
    local_1a0 = (double)param_6;
    local_1a8 = (double)(float)param_5[1];
    local_1c0 = *param_4;
    local_1b8 = (double)(float)param_4[1];
    local_1e0 = param_1[7];
    local_1d8 = (uint)*(byte *)(param_1 + 6);
    local_228 = param_1[3];
    local_1e8 = (uint)*(byte *)((longlong)param_1 + 0x17);
    local_1f0 = (uint)*(byte *)((longlong)param_1 + 0x16);
    local_1f8 = (uint)*(byte *)((longlong)param_1 + 0x15);
    local_200 = (uint)*(byte *)(param_1 + 5);
    local_208 = (uint)*(byte *)((longlong)param_1 + 0x13);
    local_210 = (uint)*(byte *)((longlong)param_1 + 0x12);
    local_218 = (uint)*(byte *)((longlong)param_1 + 0x11);
    local_220 = (uint)*(byte *)(param_1 + 4);
    local_230 = param_1[2];
    local_238 = param_1[1];
    DAT_1809eb850 = *param_1;
    local_1d0 = param_2;
    local_1c8 = param_3;
    iVar1 = snprintf(local_198,0x140,
                     "dt-ind why=%d def=%d type=%d clip=%d k0=%d k1=%d knife=%d perm=%d ammo=%d reload=%d wait=%d white=%d icon=%d ring=%d cmd=%d rec=%d next=%d+%.3f now=%d+%.3f na=%.4f"
                     ,*param_1);
    if ((0 < iVar1) && ((DAT_180cd1bfe == '\0' && (DAT_180ca013d == '\0')))) {
      AcquireSRWLockExclusive((PSRWLOCK)&DAT_1811123d0);
      FUN_18046fbd0(local_198);
      ReleaseSRWLockExclusive((PSRWLOCK)&DAT_1811123d0);
    }
  }
  return;
}



/* ===== 1800c24c0 FUN_1800c24c0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1800c24c0(undefined1 *param_1)

{
  float fVar1;
  bool bVar2;
  bool bVar3;
  int *piVar4;
  byte bVar5;
  float fVar6;
  char cVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  int iVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong lVar15;
  undefined8 uVar16;
  ulonglong uVar17;
  int *piVar18;
  undefined8 uVar19;
  undefined1 *puVar20;
  float *pfVar21;
  float *pfVar22;
  undefined1 uVar23;
  int iVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 auStack_238 [32];
  undefined8 *local_218;
  float local_210;
  byte local_208;
  byte local_207;
  char local_206;
  char local_205;
  undefined8 local_200;
  float local_1f8;
  int local_1f4;
  float local_1f0 [2];
  undefined4 local_1e8;
  undefined8 local_1e4;
  undefined8 local_1dc;
  undefined4 local_1d4;
  undefined1 local_1d0;
  undefined4 local_1cc;
  undefined8 local_1c8;
  int *local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined1 local_1a0 [24];
  undefined1 local_188;
  ulonglong local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 local_168;
  ulonglong local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined1 local_140;
  float local_13c;
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
  undefined2 local_e8;
  undefined4 local_e4;
  char *local_e0;
  ulonglong local_d8;
  
  local_d8 = DAT_180919500 ^ (ulonglong)auStack_238;
  local_188 = 0;
  uStack_178 = 0;
  local_170 = 0;
  local_168 = 0xf;
  local_180 = 0;
  uStack_158 = 0;
  local_150 = 0;
  local_148 = 0xf;
  local_160 = 0;
  local_140 = 0;
  local_13c = 0.0;
  local_e8 = 0;
  local_e4 = 0;
  local_e0 = (char *)0x0;
  local_f8 = _DAT_18095cee0;
  uStack_f0 = _DAT_18095cee8;
  local_108 = _DAT_18095cee0;
  uStack_100 = _DAT_18095cee8;
  local_118 = _DAT_18095cee0;
  uStack_110 = _DAT_18095cee8;
  local_128 = _DAT_18095cee0;
  uStack_120 = _DAT_18095cee8;
  local_138 = _DAT_18095cee0;
  uStack_130 = _DAT_18095cee8;
  local_1e4 = 0xffffffffffffffff;
  local_1dc = 0;
  local_1d4 = 0;
  local_1d0 = 0;
  local_1cc = 0;
  local_200 = 0;
  local_1b8 = param_1;
  if ((((DAT_18095723c == '\0') || (DAT_1809f351c == 2)) ||
      ((DAT_1809f351c == 1 &&
       (((lVar13 = FUN_180266660(), lVar13 != 0 && (DAT_180cf9f80 != 0)) &&
        (cVar7 = FUN_180011220(lVar13 + (ulonglong)DAT_180cf9f80), cVar7 != '\0')))))) ||
     (DAT_18095cd7e == '\0')) {
    local_1e8 = 1;
LAB_1800c2fd3:
    iVar9 = -1;
  }
  else {
    if (DAT_180cd1304 == '\0') {
      FUN_1803a0b60(&local_1c0);
      DAT_181108a00 = local_1c0;
      DAT_1811089f8 = (int *)FUN_1803a0c50(&local_1c0);
      DAT_180cd1304 = '\x01';
    }
    piVar4 = DAT_1811089f8;
    if (((DAT_1811089f8 == (int *)0x0) || (DAT_180ca09f0 == 0)) ||
       (iVar9 = FUN_180011200((longlong)DAT_1811089f8 + (ulonglong)DAT_180ca09f0), 999 < iVar9 - 1U)
       ) {
      local_1e8 = 2;
      goto LAB_1800c2fd3;
    }
    local_1c8 = piVar4;
    plVar14 = (longlong *)FUN_1800c04a0(local_1a0,&local_1c8);
    puVar20 = (undefined1 *)*plVar14;
    fVar1 = *(float *)(plVar14 + 2);
    iVar9 = *(int *)((longlong)plVar14 + 0x14);
    local_1e4 = CONCAT44(fVar1,iVar9);
    local_1f0[0] = fVar1;
    local_1b8 = puVar20;
    if (((puVar20 == (undefined1 *)0x0) || (lVar13 = plVar14[1], lVar13 == 0)) ||
       ((iVar9 == 0x1f || ((iVar9 == 0x40 || (6 < (uint)fVar1)))))) {
      local_1e8 = 3;
      goto LAB_1800c2fd3;
    }
    if (DAT_180961a48 == (code *)0x0) {
LAB_1800c272c:
      local_1e8 = 4;
      iVar9 = -1;
    }
    else {
      if (DAT_180cd1304 == '\0') {
        FUN_1803a0b60(&local_1c8);
        piVar18 = local_1c8;
      }
      else {
        piVar18 = DAT_181108a00;
      }
      if ((piVar18 == (int *)0x0) ||
         (lVar15 = (*DAT_180961a48)(), 0x7ffffffefffe < lVar15 - 0x10000U)) goto LAB_1800c272c;
      local_1f4 = FUN_180011200((ulonglong)DAT_180961fcc + lVar15);
      if (-1 < local_1f4) {
        iVar9 = (&DAT_180c3df70)[(longlong)(local_1f4 % 0x96) * 500];
        local_1c0 = (int *)0x0;
        if (iVar9 == local_1f4) {
          local_1c0 = &DAT_180c3df70 + (longlong)(local_1f4 % 0x96) * 500;
        }
        if (local_1c0 == (int *)0x0) goto LAB_1800c27dd;
        piVar18 = (int *)&DAT_00000004;
        if (iVar9 == local_1f4) {
          piVar18 = (int *)(&DAT_180c3df74 + (longlong)(local_1f4 % 0x96) * 2000);
        }
        if (*piVar18 < 2) goto LAB_1800c27dd;
LAB_1800c2851:
        if ((((DAT_181111c58 & 0xfd) == 0) && ((char)_DAT_181111c59 != '\0')) &&
           ((fVar1 != 0.0 || (DAT_181111c60 != '\0')))) {
          cVar7 = '\x01';
        }
        else {
          cVar7 = '\0';
        }
        if (((DAT_181111c58 == 1) && ((char)_DAT_181111c59 != '\0')) &&
           ((fVar1 != 0.0 || (DAT_181111c60 != '\0')))) {
          cVar8 = '\x01';
        }
        else {
          cVar8 = '\0';
        }
        local_1dc = CONCAT26(CONCAT11(local_1dc._7_1_,DAT_181111c60),
                             CONCAT15(cVar8,CONCAT14(cVar7,(undefined4)local_1dc)));
        if (cVar7 == '\0' && cVar8 == '\0') {
          local_207 = 0;
        }
        else {
          local_207 = 1;
          if ((cVar7 != '\0') && (DAT_18095cedd != '\0')) {
            local_1e8 = 5;
            local_210 = 0.0;
            local_218 = &local_200;
            FUN_1800c21a0(&local_1e8,local_1f4,*local_1c0,&local_200);
            *param_1 = local_188;
            *(ulonglong *)(param_1 + 8) = local_180;
            *(undefined8 *)(param_1 + 0x10) = uStack_178;
            *(undefined8 *)(param_1 + 0x18) = local_170;
            *(undefined8 *)(param_1 + 0x20) = local_168;
            *(ulonglong *)(param_1 + 0x28) = local_160;
            *(undefined8 *)(param_1 + 0x30) = uStack_158;
            *(undefined8 *)(param_1 + 0x38) = local_150;
            *(undefined8 *)(param_1 + 0x40) = local_148;
            param_1[0x48] = local_140;
            *(undefined8 *)(param_1 + 0x90) = local_f8;
            *(undefined8 *)(param_1 + 0x98) = uStack_f0;
            param_1[0xa0] = (undefined1)local_e8;
            param_1[0xa1] = local_e8._1_1_;
            *(char **)(param_1 + 0xa8) = local_e0;
            goto LAB_1800c3091;
          }
        }
        cVar8 = FUN_180474680(local_1c0 + 4,0,&local_1c8);
        local_206 = cVar8;
        if (DAT_180cd0450 == 0) {
          local_1f8 = 0.0;
        }
        else {
          local_1f8 = (float)FUN_180011200();
        }
        local_1dc = CONCAT44(local_1dc._4_4_,local_1f8);
        local_1dc = CONCAT17(cVar8,(undefined7)local_1dc);
        local_1d4 = CONCAT31(local_1d4._1_3_,1 < (uint)local_1f8);
        if (DAT_180cd0458 == 0) {
          uVar10 = 0;
        }
        else {
          uVar10 = FUN_180011200(puVar20 + DAT_180cd0458);
        }
        if (fVar1 != 0.0) {
          if (1 < uVar10) {
            uVar10 = 0;
          }
          FUN_18000f3d0((ulonglong)DAT_180cd0464 + (ulonglong)(uVar10 * 4) + lVar13);
        }
        lVar13 = FUN_180474460(0);
        local_200 = lVar13;
        if (DAT_180cd1304 == '\0') {
          FUN_1803a0b60(&local_1c8);
          piVar18 = local_1c8;
        }
        else {
          piVar18 = DAT_181108a00;
        }
        if ((piVar18 == (int *)0x0) || (DAT_180cd047c == 0)) {
          iVar9 = local_1c0[0x5b];
        }
        else {
          iVar9 = FUN_180011200((longlong)piVar18 + (ulonglong)DAT_180cd047c);
        }
        fVar1 = DAT_1808ac34c;
        if ((DAT_180961fa8 != 0) && (lVar15 = FUN_18000f3a0(), lVar15 - 0xff38U < 0x7ffffffeffff)) {
          FUN_18000f3d0(lVar15 + 200);
        }
        uVar16 = FUN_180474460(iVar9);
        fVar27 = DAT_1808ac00c;
        local_1b0._4_4_ = (float)((ulonglong)uVar16 >> 0x20);
        fVar29 = (float)(int)uVar16 * DAT_1808ac00c + local_1b0._4_4_ * DAT_1808ac00c;
        uVar17 = (ulonglong)DAT_180cd044c;
        local_1b0 = uVar16;
        if (DAT_180cd044c == 0) {
          uVar11 = 0;
        }
        else {
          uVar11 = FUN_180011200(puVar20 + uVar17);
          FUN_18000f3d0(puVar20 + uVar17 + 4);
        }
        piVar18 = (int *)FUN_180474460(uVar11);
        iVar12 = (int)piVar18;
        iVar24 = (int)lVar13;
        iVar9 = iVar12 + iVar24;
        fVar28 = local_200._4_4_;
        local_1c8._4_4_ = (float)((ulonglong)piVar18 >> 0x20);
        fVar6 = local_1c8._4_4_;
        fVar25 = local_200._4_4_ + local_1c8._4_4_;
        if (fVar1 <= fVar25) {
          fVar25 = fVar25 - fVar1;
          iVar9 = iVar9 + 1;
        }
        local_1c8 = piVar18;
        if (DAT_180cd0454 == 0) {
LAB_1800c2b90:
          local_208 = 0;
        }
        else {
          cVar8 = FUN_180011220(local_1b8 + DAT_180cd0454);
          local_208 = 1;
          if (cVar8 == '\0') goto LAB_1800c2b90;
        }
        if (((DAT_180cd043c == 0) ||
            (lVar13 = FUN_18000f3a0((longlong)piVar4 + (ulonglong)DAT_180cd043c),
            0x7ffffffefffe < lVar13 - 0x10000U)) || (DAT_180cd0440 == 0)) {
          fVar26 = 0.0;
        }
        else {
          fVar26 = (float)FUN_18000f3d0((ulonglong)DAT_180cd0440 + lVar13);
        }
        uVar19 = FUN_180474460(0,fVar29 * DAT_1808acab0);
        if (iVar12 == (int)uVar19) {
          local_1b8._4_4_ = (float)((ulonglong)uVar19 >> 0x20);
          bVar2 = local_1b8._4_4_ < fVar6;
        }
        else {
          bVar2 = (int)uVar19 <= iVar12;
        }
        local_205 = fVar29 < fVar26;
        local_1b8 = (undefined1 *)uVar19;
        if ((((bool)local_205 || (bVar2 || cVar7 != '\0')) || (local_206 == '\0')) ||
           ((local_208 != 0 || ((uint)local_1f8 < 2)))) {
          local_188 = 1;
          FUN_180029840(&local_180,&DAT_1806eaeb0,2);
          uVar23 = 0;
          local_f8 = _DAT_18095cef0;
          uStack_f0 = _DAT_18095cef8;
          if ((cVar7 == '\0') && (local_206 != '\0')) goto LAB_1800c2cdf;
          local_1cc = 2;
          local_e0 = "panorama/images/icons/ui/cancel.vsvg_c";
LAB_1800c2d12:
        }
        else {
          local_188 = 1;
          FUN_180029840(&local_180,&DAT_1806eaeb0,2);
          uVar23 = 1;
          local_f8 = _DAT_18095cee0;
          uStack_f0 = _DAT_18095cee8;
LAB_1800c2cdf:
          local_1cc = 1;
          if (local_1f0[0] == 0.0) {
            local_1cc = 3;
            local_e0 = "panorama/images/icons/equipment/melee.vsvg_c";
            goto LAB_1800c2d12;
          }
        }
        bVar5 = local_208;
        local_1d4 = CONCAT13(uVar23,CONCAT12(local_205 != '\0' || bVar2,
                                             CONCAT11(local_208,(undefined1)local_1d4)));
        local_1e8 = 0;
        local_138 = local_f8;
        uStack_130 = uStack_f0;
        local_128 = local_f8;
        uStack_120 = uStack_f0;
        local_118 = local_f8;
        uStack_110 = uStack_f0;
        local_108 = local_f8;
        uStack_100 = uStack_f0;
        puVar20 = (undefined1 *)FUN_180474460(0);
        if (iVar24 == (int)puVar20) {
          local_1b8._4_4_ = (float)((ulonglong)puVar20 >> 0x20);
          bVar3 = local_1b8._4_4_ <= fVar28;
        }
        else {
          bVar3 = (int)puVar20 <= iVar24;
        }
        local_207 = local_207 | bVar5;
        if ((local_207 == 0) && (1 < (uint)local_1f8)) {
          fVar28 = (float)iVar24 * fVar27 + fVar28 * fVar27;
          if (local_205 == '\0') {
            if (bVar2) {
              fVar27 = (float)iVar12 * fVar27 + fVar6 * fVar27;
              goto LAB_1800c2e5e;
            }
            iVar9 = iVar9 - (int)uVar16;
            fVar25 = fVar25 - local_1b0._4_4_;
            if (fVar25 < 0.0) {
              fVar25 = fVar25 + fVar1;
              if (fVar25 < fVar1) {
                iVar9 = iVar9 + -1;
              }
              else {
                fVar25 = 0.0;
              }
            }
            fVar28 = ((float)iVar9 * fVar27 + fVar25 * fVar27) / fVar28;
            local_200 = CONCAT44(local_200._4_4_,0x3f800000);
            local_1f0[0] = 0.0;
            if (fVar28 <= fVar1) {
              local_1f8 = fVar28;
              if (fVar28 <= 0.0) {
                local_1f8 = 0.0;
              }
              local_1f8 = fVar1 - local_1f8;
            }
            else {
              local_1f8 = 0.0;
            }
            pfVar22 = local_1f0;
            if (0.0 <= local_1f8) {
              pfVar22 = &local_1f8;
            }
            pfVar21 = (float *)&local_200;
            if (local_1f8 <= fVar1) {
              pfVar21 = pfVar22;
            }
            local_13c = *pfVar21;
            if (fVar28 < fVar1) goto joined_r0x0001800c2ec6;
          }
          else {
            fVar27 = fVar26;
LAB_1800c2e5e:
            fVar28 = (fVar27 - fVar29) / fVar28;
            if (fVar28 <= fVar1) {
              if (fVar28 <= 0.0) {
                fVar28 = 0.0;
              }
              local_1f0[0] = fVar1 - fVar28;
            }
            else {
              local_1f0[0] = 0.0;
            }
            local_1f8 = 1.0;
            local_200 = (ulonglong)(uint)local_200._4_4_ << 0x20;
            pfVar22 = (float *)&local_200;
            if (0.0 <= local_1f0[0]) {
              pfVar22 = local_1f0;
            }
            pfVar21 = &local_1f8;
            if (local_1f0[0] <= fVar1) {
              pfVar21 = pfVar22;
            }
            local_13c = *pfVar21;
            if (0.0 < local_1f0[0]) {
joined_r0x0001800c2ec6:
              if (bVar3) {
                local_140 = 1;
                goto LAB_1800c2ed7;
              }
            }
          }
          local_140 = 0;
        }
LAB_1800c2ed7:
        local_218 = &local_1b0;
        local_210 = fVar26;
        local_1d0 = local_140;
        local_1b8 = puVar20;
        FUN_1800c21a0(&local_1e8,local_1f4,*local_1c0,&local_1c8);
        *param_1 = local_188;
        *(ulonglong *)(param_1 + 8) = local_180;
        *(undefined8 *)(param_1 + 0x10) = uStack_178;
        *(undefined8 *)(param_1 + 0x18) = local_170;
        *(undefined8 *)(param_1 + 0x20) = local_168;
        *(ulonglong *)(param_1 + 0x28) = local_160;
        *(undefined8 *)(param_1 + 0x30) = uStack_158;
        *(undefined8 *)(param_1 + 0x38) = local_150;
        *(undefined8 *)(param_1 + 0x40) = local_148;
        param_1[0x48] = local_140;
        *(undefined8 *)(param_1 + 0x90) = local_f8;
        *(undefined8 *)(param_1 + 0x98) = uStack_f0;
        param_1[0xa0] = (undefined1)local_e8;
        param_1[0xa1] = local_e8._1_1_;
        *(char **)(param_1 + 0xa8) = local_e0;
        goto LAB_1800c3091;
      }
LAB_1800c27dd:
      iVar9 = local_1f4 + -1;
      if (-1 < iVar9) {
        iVar12 = (&DAT_180c3df70)[(longlong)(iVar9 % 0x96) * 500];
        local_1c0 = (int *)0x0;
        if (iVar12 == iVar9) {
          local_1c0 = &DAT_180c3df70 + (longlong)(iVar9 % 0x96) * 500;
        }
        if (local_1c0 != (int *)0x0) {
          piVar18 = (int *)&DAT_00000004;
          if (iVar12 == iVar9) {
            piVar18 = (int *)(&DAT_180c3df74 + (longlong)(iVar9 % 0x96) * 2000);
          }
          if (1 < *piVar18) goto LAB_1800c2851;
        }
      }
      local_1e8 = 4;
      iVar9 = local_1f4;
    }
  }
  local_210 = 0.0;
  local_218 = &local_200;
  FUN_1800c21a0(&local_1e8,iVar9,0xffffffff,&local_200);
  *param_1 = local_188;
  *(ulonglong *)(param_1 + 8) = local_180;
  *(undefined8 *)(param_1 + 0x10) = uStack_178;
  *(undefined8 *)(param_1 + 0x18) = local_170;
  *(undefined8 *)(param_1 + 0x20) = local_168;
  *(ulonglong *)(param_1 + 0x28) = local_160;
  *(undefined8 *)(param_1 + 0x30) = uStack_158;
  *(undefined8 *)(param_1 + 0x38) = local_150;
  *(undefined8 *)(param_1 + 0x40) = local_148;
  param_1[0x48] = local_140;
  *(undefined8 *)(param_1 + 0x90) = local_f8;
  *(undefined8 *)(param_1 + 0x98) = uStack_f0;
  param_1[0xa0] = (undefined1)local_e8;
  param_1[0xa1] = local_e8._1_1_;
  *(char **)(param_1 + 0xa8) = local_e0;
LAB_1800c3091:
  local_150 = 0;
  local_160 = local_160 & 0xffffffffffffff00;
  local_170 = 0;
  local_180 = local_180 & 0xffffffffffffff00;
  local_148 = 0xf;
  local_168 = 0xf;
  *(float *)(param_1 + 0x4c) = local_13c;
  *(undefined8 *)(param_1 + 0x60) = local_128;
  *(undefined8 *)(param_1 + 0x68) = uStack_120;
  *(undefined8 *)(param_1 + 0x80) = local_108;
  *(undefined8 *)(param_1 + 0x88) = uStack_100;
  *(undefined8 *)(param_1 + 0x50) = local_138;
  *(undefined8 *)(param_1 + 0x58) = uStack_130;
  *(undefined4 *)(param_1 + 0xa4) = local_e4;
  *(undefined8 *)(param_1 + 0x70) = local_118;
  *(undefined8 *)(param_1 + 0x78) = uStack_110;
  FUN_18000f890(&local_160);
  FUN_18000f890(&local_180);
  return param_1;
}



/* ===== 1800c3150 FUN_1800c3150 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1800c3150(undefined1 *param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined1 **ppuVar4;
  undefined1 **ppuVar5;
  undefined1 auStack_128 [32];
  undefined1 *local_108;
  undefined4 local_100;
  float local_fc [5];
  undefined1 local_e8;
  ulonglong local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  ulonglong local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined1 local_a0;
  float local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined2 local_48;
  undefined4 local_44;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStack_128;
  local_e8 = 0;
  uStack_d8 = 0;
  local_d0 = 0;
  local_c8 = 0xf;
  local_e0 = 0;
  uStack_b8 = 0;
  local_b0 = 0;
  local_a8 = 0xf;
  local_c0 = 0;
  local_a0 = 0;
  local_9c = 0.0;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_58 = _DAT_18095cee0;
  uStack_50 = _DAT_18095cee8;
  local_68 = _DAT_18095cee0;
  uStack_60 = _DAT_18095cee8;
  local_78 = _DAT_18095cee0;
  uStack_70 = _DAT_18095cee8;
  local_88 = _DAT_18095cee0;
  uStack_80 = _DAT_18095cee8;
  local_98 = _DAT_18095cee0;
  uStack_90 = _DAT_18095cee8;
  iVar1 = *(int *)(PTR_DAT_180c873b8 + 0xc);
  local_108 = param_1;
  if (DAT_180cd1304 == '\0') {
    FUN_1803a0b60(&local_108);
    DAT_181108a00 = local_108;
    DAT_1811089f8 = FUN_1803a0c50(&local_108);
    DAT_180cd1304 = '\x01';
  }
  lVar3 = DAT_1811089f8;
  if ((((DAT_1811089f8 == 0) || (DAT_180ca09f0 == 0)) ||
      (iVar2 = FUN_180011200(DAT_1811089f8 + (ulonglong)DAT_180ca09f0), 999 < iVar2 - 1U)) ||
     (DAT_180cd0414 == 0)) {
    lVar3 = 0;
  }
  else {
    lVar3 = FUN_18000f3a0(lVar3 + (ulonglong)DAT_180cd0414);
  }
  if ((iVar1 == 0) || (0x7ffffffefffe < lVar3 - 0x10000U)) {
    *param_1 = local_e8;
    *(ulonglong *)(param_1 + 8) = local_e0;
    *(undefined8 *)(param_1 + 0x10) = uStack_d8;
    *(undefined8 *)(param_1 + 0x18) = local_d0;
    *(undefined8 *)(param_1 + 0x20) = local_c8;
    *(ulonglong *)(param_1 + 0x28) = local_c0;
    *(undefined8 *)(param_1 + 0x30) = uStack_b8;
    *(undefined8 *)(param_1 + 0x38) = local_b0;
    *(undefined8 *)(param_1 + 0x40) = local_a8;
    param_1[0x48] = local_a0;
    *(float *)(param_1 + 0x4c) = local_9c;
    *(undefined8 *)(param_1 + 0x50) = local_98;
    *(undefined8 *)(param_1 + 0x58) = uStack_90;
    *(undefined8 *)(param_1 + 0x60) = local_88;
    *(undefined8 *)(param_1 + 0x68) = uStack_80;
    *(undefined4 *)(param_1 + 0x70) = (undefined4)local_78;
    *(undefined4 *)(param_1 + 0x74) = local_78._4_4_;
    *(undefined4 *)(param_1 + 0x78) = (undefined4)uStack_70;
    *(undefined4 *)(param_1 + 0x7c) = uStack_70._4_4_;
    *(undefined8 *)(param_1 + 0x80) = local_68;
    *(undefined8 *)(param_1 + 0x88) = uStack_60;
    param_1[0xa0] = (undefined1)local_48;
    param_1[0xa1] = local_48._1_1_;
    *(undefined8 *)(param_1 + 0xa8) = local_40;
    goto LAB_1800c34c1;
  }
  local_e8 = 1;
  FUN_180029840(&local_e0,&DAT_1806eae7c,4);
  if (iVar1 == 1) {
    local_98 = _DAT_18095cef0;
    uStack_90 = _DAT_18095cef8;
LAB_1800c32d6:
    local_88 = local_98;
    uStack_80 = uStack_90;
    local_78 = local_98;
    uStack_70 = uStack_90;
    local_68 = local_98;
    uStack_60 = uStack_90;
    local_58 = local_98;
    uStack_50 = uStack_90;
  }
  else if (iVar1 == 3) {
    local_98 = _DAT_18095cf00;
    uStack_90 = uRam000000018095cf08;
    goto LAB_1800c32d6;
  }
  if (DAT_180cd0418 == 0) {
    local_fc[0] = DAT_1808ac838;
  }
  else {
    local_fc[0] = (float)FUN_18000f3d0(lVar3 + (ulonglong)DAT_180cd0418);
  }
  if ((iVar1 == 3) || (DAT_1808ac7ec <= local_fc[0])) {
    local_a0 = 0;
  }
  else {
    local_a0 = 1;
  }
  local_108 = (undefined1 *)CONCAT44(local_108._4_4_,0x3f800000);
  local_100 = 0;
  local_fc[0] = local_fc[0] / DAT_1808ac7ec;
  ppuVar5 = (undefined1 **)&local_100;
  if (0.0 <= local_fc[0]) {
    ppuVar5 = (undefined1 **)local_fc;
  }
  ppuVar4 = &local_108;
  if (local_fc[0] <= DAT_1808ac34c) {
    ppuVar4 = ppuVar5;
  }
  local_9c = *(float *)ppuVar4;
  *param_1 = local_e8;
  *(ulonglong *)(param_1 + 8) = local_e0;
  *(undefined8 *)(param_1 + 0x10) = uStack_d8;
  *(undefined8 *)(param_1 + 0x18) = local_d0;
  *(undefined8 *)(param_1 + 0x20) = local_c8;
  *(ulonglong *)(param_1 + 0x28) = local_c0;
  *(undefined8 *)(param_1 + 0x30) = uStack_b8;
  *(undefined8 *)(param_1 + 0x38) = local_b0;
  *(undefined8 *)(param_1 + 0x40) = local_a8;
  param_1[0x48] = local_a0;
  *(float *)(param_1 + 0x4c) = local_9c;
  *(undefined8 *)(param_1 + 0x50) = local_98;
  *(undefined8 *)(param_1 + 0x58) = uStack_90;
  *(undefined8 *)(param_1 + 0x60) = local_88;
  *(undefined8 *)(param_1 + 0x68) = uStack_80;
  *(undefined8 *)(param_1 + 0x70) = local_78;
  *(undefined8 *)(param_1 + 0x78) = uStack_70;
  *(undefined4 *)(param_1 + 0x80) = (undefined4)local_68;
  *(undefined4 *)(param_1 + 0x84) = local_68._4_4_;
  *(undefined4 *)(param_1 + 0x88) = (undefined4)uStack_60;
  *(undefined4 *)(param_1 + 0x8c) = uStack_60._4_4_;
  param_1[0xa0] = (undefined1)local_48;
  param_1[0xa1] = local_48._1_1_;
  *(undefined8 *)(param_1 + 0xa8) = local_40;
LAB_1800c34c1:
  local_e0 = local_e0 & 0xffffffffffffff00;
  local_c8 = 0xf;
  local_d0 = 0;
  *(undefined4 *)(param_1 + 0xa4) = local_44;
  *(undefined8 *)(param_1 + 0x90) = local_58;
  *(undefined8 *)(param_1 + 0x98) = uStack_50;
  local_c0 = local_c0 & 0xffffffffffffff00;
  local_a8 = 0xf;
  local_b0 = 0;
  FUN_18000f890(&local_c0);
  FUN_18000f890(&local_e0);
  return param_1;
}



/* ===== 1800c3540 FUN_1800c3540 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1800c3540(undefined1 *param_1)

{
  bool bVar1;
  bool bVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  char *_Buf1;
  size_t sVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  char *_Str1;
  float fVar10;
  undefined1 auStack_178 [32];
  undefined1 *local_158 [2];
  undefined1 local_148;
  ulonglong local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 local_128;
  ulonglong local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined1 local_100;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined2 local_a8;
  undefined4 local_a4;
  undefined8 local_a0;
  char *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  ulonglong local_78;
  
  cVar4 = DAT_180920dc0;
  local_78 = DAT_180919500 ^ (ulonglong)auStack_178;
  local_148 = 0;
  uStack_138 = 0;
  local_130 = 0;
  local_128 = 0xf;
  local_140 = 0;
  uStack_118 = 0;
  local_110 = 0;
  local_108 = 0xf;
  local_120 = 0;
  local_100 = 0;
  local_fc = 0;
  local_a8 = 0;
  local_a4 = 0;
  local_a0 = 0;
  local_b8 = _DAT_18095cee0;
  uStack_b0 = _DAT_18095cee8;
  local_c8 = _DAT_18095cee0;
  uStack_c0 = _DAT_18095cee8;
  local_d8 = _DAT_18095cee0;
  uStack_d0 = _DAT_18095cee8;
  local_e8 = _DAT_18095cee0;
  uStack_e0 = _DAT_18095cee8;
  local_f8 = _DAT_18095cee0;
  uStack_f0 = _DAT_18095cee8;
  bVar2 = false;
  _Str1 = &DAT_18095d530;
  local_158[0] = param_1;
  do {
    uVar8 = 0;
    if ((*_Str1 != '\0') && (iVar5 = strcmp(_Str1,"nl_movement.jump_bug"), iVar5 == 0)) {
      bVar2 = true;
      fVar10 = *(float *)(_Str1 + 0x6c);
      local_90 = 0;
      _Buf1 = (char *)FUN_18000fb70(0x20);
      uVar3 = s_nl_movement_jump_bug_1806eb218._8_8_;
      local_88 = 0x14;
      local_80 = 0x1f;
      *(undefined8 *)_Buf1 = s_nl_movement_jump_bug_1806eb218._0_8_;
      *(undefined8 *)(_Buf1 + 8) = uVar3;
      *(undefined4 *)(_Buf1 + 0x10) = s_nl_movement_jump_bug_1806eb218._16_4_;
      _Buf1[0x14] = '\0';
      local_98 = _Buf1;
      do {
        if (((&DAT_18095d530)[uVar8 * 0xe4] != '\0') &&
           ((float)(&DAT_18095d59c)[uVar8 * 0x39] == fVar10)) {
          sVar6 = strlen(&DAT_18095d530 + uVar8 * 0xe4);
          if ((sVar6 == 0x14) &&
             ((iVar5 = memcmp(_Buf1,&DAT_18095d530 + uVar8 * 0xe4,0x14), iVar5 == 0 &&
              ((&DAT_180cd1320)[uVar8] != '\0')))) {
            bVar1 = true;
            goto LAB_1800c36e6;
          }
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < 0x40);
      bVar1 = false;
LAB_1800c36e6:
      thunk_FUN_1803d64e0(_Buf1,0x20);
      if (bVar1) goto LAB_1800c37b2;
    }
    _Str1 = _Str1 + 0xe4;
  } while (_Str1 != &DAT_180960e30);
  if (bVar2) {
    cVar4 = '\0';
  }
  if (cVar4 == '\0') {
    *param_1 = local_148;
    *(ulonglong *)(param_1 + 8) = local_140;
    *(undefined8 *)(param_1 + 0x10) = uStack_138;
    *(undefined8 *)(param_1 + 0x18) = local_130;
    *(undefined8 *)(param_1 + 0x20) = local_128;
    *(ulonglong *)(param_1 + 0x28) = local_120;
    *(undefined8 *)(param_1 + 0x30) = uStack_118;
    *(undefined8 *)(param_1 + 0x38) = local_110;
    *(undefined8 *)(param_1 + 0x40) = local_108;
    param_1[0x48] = local_100;
    param_1[0xa0] = (undefined1)local_a8;
    param_1[0xa1] = local_a8._1_1_;
    *(undefined8 *)(param_1 + 0xa8) = local_a0;
  }
  else {
LAB_1800c37b2:
    if (DAT_180cd1304 == '\0') {
      FUN_1803a0b60(local_158);
      DAT_181108a00 = local_158[0];
      DAT_1811089f8 = FUN_1803a0c50();
      DAT_180cd1304 = '\x01';
    }
    lVar9 = DAT_1811089f8;
    if (((((DAT_1811089f8 != 0) && (DAT_180ca09f0 != 0)) &&
         (iVar5 = FUN_180011200(), iVar5 - 1U < 1000)) &&
        ((DAT_180cd041c != 0 && (cVar4 = FUN_180011220(), cVar4 == '\x02')))) &&
       ((DAT_180cd0414 != 0 &&
        (lVar7 = FUN_18000f3a0(lVar9 + (ulonglong)DAT_180cd0414), lVar7 - 0x10000U < 0x7ffffffeffff)
        ))) {
      if ((DAT_180961a50 == 0) || (lVar7 = FUN_18000f3a0(), 0x7ffffffefffe < lVar7 - 0x10000U)) {
        fVar10 = 0.0;
      }
      else {
        fVar10 = (float)FUN_18000f3d0(lVar7 + 0x30);
      }
      if ((DAT_180cd0420 == 0) ||
         (uVar8 = FUN_180011200(lVar9 + (ulonglong)DAT_180cd0420), (uVar8 & 1) != 0)) {
        if ((_DAT_1809e8f9c < 0.0) ||
           (DAT_1808ac05c < (float)((uint)(fVar10 - _DAT_1809e8f9c) & _DAT_1808ade90))) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
      }
      else {
        bVar2 = true;
        _DAT_1809e8f9c = fVar10;
      }
      lVar9 = FUN_180264b70();
      if ((lVar9 == 0) || (cVar4 = FUN_180264d70(), cVar4 == '\0')) {
        if ((DAT_180cd0428 == 0) || (fVar10 = (float)FUN_18000f3d0(), fVar10 != DAT_1808ac34c))
        goto LAB_1800c392f;
LAB_1800c39ad:
        bVar1 = true;
        if (DAT_18095cede != '\0') goto LAB_1800c39bc;
      }
      else {
        if ((DAT_180cd0424 != 0) && (fVar10 = (float)FUN_18000f3d0(), fVar10 == 0.0))
        goto LAB_1800c39ad;
LAB_1800c392f:
        bVar1 = false;
      }
      if (bVar2) {
        local_148 = 1;
        FUN_180029840(&local_140,&DAT_1806eaeec,2);
        if (!bVar1) {
          local_b8 = _DAT_18095cef0;
          uStack_b0 = _DAT_18095cef8;
          local_c8 = _DAT_18095cef0;
          uStack_c0 = _DAT_18095cef8;
          local_d8 = _DAT_18095cef0;
          uStack_d0 = _DAT_18095cef8;
          local_e8 = _DAT_18095cef0;
          uStack_e0 = _DAT_18095cef8;
          local_f8 = _DAT_18095cef0;
          uStack_f0 = _DAT_18095cef8;
        }
        *param_1 = local_148;
        *(ulonglong *)(param_1 + 8) = local_140;
        *(undefined8 *)(param_1 + 0x10) = uStack_138;
        *(undefined8 *)(param_1 + 0x18) = local_130;
        *(undefined8 *)(param_1 + 0x20) = local_128;
        *(ulonglong *)(param_1 + 0x28) = local_120;
        *(undefined8 *)(param_1 + 0x30) = uStack_118;
        *(undefined8 *)(param_1 + 0x38) = local_110;
        *(undefined8 *)(param_1 + 0x40) = local_108;
        param_1[0x48] = local_100;
        *(undefined4 *)(param_1 + 0x4c) = local_fc;
        *(undefined8 *)(param_1 + 0x50) = local_f8;
        *(undefined8 *)(param_1 + 0x58) = uStack_f0;
        *(undefined8 *)(param_1 + 0x60) = local_e8;
        *(undefined8 *)(param_1 + 0x68) = uStack_e0;
        *(undefined8 *)(param_1 + 0x70) = local_d8;
        *(undefined8 *)(param_1 + 0x78) = uStack_d0;
        *(undefined8 *)(param_1 + 0x80) = local_c8;
        *(undefined8 *)(param_1 + 0x88) = uStack_c0;
        param_1[0xa0] = (undefined1)local_a8;
        param_1[0xa1] = local_a8._1_1_;
        *(undefined8 *)(param_1 + 0xa8) = local_a0;
        goto LAB_1800c3a78;
      }
    }
LAB_1800c39bc:
    *param_1 = local_148;
    *(ulonglong *)(param_1 + 8) = local_140;
    *(undefined8 *)(param_1 + 0x10) = uStack_138;
    *(undefined8 *)(param_1 + 0x18) = local_130;
    *(undefined8 *)(param_1 + 0x20) = local_128;
    *(ulonglong *)(param_1 + 0x28) = local_120;
    *(undefined8 *)(param_1 + 0x30) = uStack_118;
    *(undefined8 *)(param_1 + 0x38) = local_110;
    *(undefined8 *)(param_1 + 0x40) = local_108;
    param_1[0x48] = local_100;
    param_1[0xa0] = (undefined1)local_a8;
    param_1[0xa1] = local_a8._1_1_;
    *(undefined8 *)(param_1 + 0xa8) = local_a0;
  }
  *(undefined4 *)(param_1 + 0x4c) = local_fc;
  *(undefined8 *)(param_1 + 0x50) = local_f8;
  *(undefined8 *)(param_1 + 0x58) = uStack_f0;
  *(undefined8 *)(param_1 + 0x60) = local_e8;
  *(undefined8 *)(param_1 + 0x68) = uStack_e0;
  *(undefined8 *)(param_1 + 0x70) = local_d8;
  *(undefined8 *)(param_1 + 0x78) = uStack_d0;
  *(undefined8 *)(param_1 + 0x80) = local_c8;
  *(undefined8 *)(param_1 + 0x88) = uStack_c0;
LAB_1800c3a78:
  local_120 = local_120 & 0xffffffffffffff00;
  local_140 = local_140 & 0xffffffffffffff00;
  local_110 = 0;
  local_130 = 0;
  local_128 = 0xf;
  *(undefined4 *)(param_1 + 0xa4) = local_a4;
  *(undefined8 *)(param_1 + 0x90) = local_b8;
  *(undefined8 *)(param_1 + 0x98) = uStack_b0;
  local_108 = 0xf;
  FUN_18000f890(&local_120);
  FUN_18000f890(&local_140);
  return param_1;
}



/* ===== 1800c3bb0 FUN_1800c3bb0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1800c3bb0(undefined1 *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char cVar8;
  int iVar9;
  char *_Str1;
  longlong lVar10;
  size_t sVar11;
  undefined1 **ppuVar12;
  undefined1 **ppuVar13;
  longlong *plVar14;
  ulonglong uVar15;
  longlong *plVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  undefined1 auStack_198 [8];
  undefined1 auStack_190 [24];
  undefined1 local_178 [8];
  undefined1 *local_170;
  longlong *local_168;
  longlong *plStack_160;
  longlong local_158;
  undefined1 local_148;
  ulonglong local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 local_128;
  ulonglong local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined1 local_100;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined2 local_a8;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_68;
  
  uVar7 = _DAT_18095cee8;
  uVar6 = _DAT_18095cee0;
  puVar18 = auStack_198;
  local_68 = DAT_180919500 ^ (ulonglong)auStack_198;
  local_148 = 0;
  uStack_138 = 0;
  local_130 = 0;
  local_128 = 0xf;
  local_140 = 0;
  uStack_118 = 0;
  local_110 = 0;
  local_108 = 0xf;
  local_120 = 0;
  local_100 = 0;
  uVar21 = 0;
  local_fc = 0;
  local_a8 = 0;
  local_a4 = 0;
  local_a0 = 0;
  local_b8 = _DAT_18095cee0;
  uStack_b0 = _DAT_18095cee8;
  local_c8 = _DAT_18095cee0;
  uStack_c0 = _DAT_18095cee8;
  local_d8 = _DAT_18095cee0;
  uStack_d0 = _DAT_18095cee8;
  local_e8 = _DAT_18095cee0;
  uStack_e0 = _DAT_18095cee8;
  local_f8 = _DAT_18095cee0;
  uStack_f0 = _DAT_18095cee8;
  local_170 = param_1;
  if ((((DAT_180cd042c == 0) || (DAT_180cd0430 == 0)) || (DAT_180cd0434 == 0)) ||
     (DAT_180cd0438 == 0)) {
    *param_1 = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0xf;
    local_130 = 0;
    local_128 = 0xf;
    local_140 = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0xf;
    param_1[0x48] = 0;
    *(undefined4 *)(param_1 + 0x4c) = 0;
    *(undefined8 *)(param_1 + 0x50) = uVar6;
    *(undefined8 *)(param_1 + 0x58) = uVar7;
    *(undefined8 *)(param_1 + 0x60) = uVar6;
    *(undefined8 *)(param_1 + 0x68) = uVar7;
    *(undefined8 *)(param_1 + 0x70) = uVar6;
    *(undefined8 *)(param_1 + 0x78) = uVar7;
    *(undefined8 *)(param_1 + 0x80) = uVar6;
    *(undefined8 *)(param_1 + 0x88) = uVar7;
    *(undefined8 *)(param_1 + 0x90) = uVar6;
    *(undefined8 *)(param_1 + 0x98) = uVar7;
    *(undefined2 *)(param_1 + 0xa0) = 0;
    *(undefined4 *)(param_1 + 0xa4) = 0;
    *(undefined8 *)(param_1 + 0xa8) = 0;
    goto LAB_1800c4113;
  }
  FUN_1803a09f0(&local_168);
  plVar14 = plStack_160;
  puVar18 = auStack_198;
  puVar17 = auStack_198;
  for (plVar16 = local_168; plVar16 != plVar14; plVar16 = plVar16 + 1) {
    _Str1 = (char *)FUN_1803a0710(plVar16);
    if (((_Str1 != (char *)0x0) && (iVar9 = strcmp(_Str1,"C_CSPlayerPawn"), iVar9 == 0)) &&
       ((iVar9 = FUN_180011200((ulonglong)DAT_180cd0430 + *plVar16), iVar9 != -1 &&
        (cVar8 = FUN_180011220((ulonglong)DAT_180cd042c + *plVar16), cVar8 != '\0')))) {
      iVar9 = FUN_180011200((ulonglong)DAT_180cd0438 + *plVar16);
      if ((DAT_180961a50 == 0) || (lVar10 = FUN_18000f3a0(), 0x7ffffffefffe < lVar10 - 0x10000U)) {
        fVar19 = 0.0;
      }
      else {
        fVar19 = (float)FUN_18000f3d0(lVar10 + 0x30);
      }
      fVar20 = (float)FUN_18000f3d0((ulonglong)DAT_180cd0434 + *plVar16);
      fVar19 = (fVar20 + (float)iVar9) - fVar19;
      local_98 = 0;
      uStack_90 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_78 = 0;
      uStack_70 = 0;
      snprintf(&local_98,0x30,"Hostage - %.1fs",(double)fVar19);
      local_148 = 1;
      sVar11 = strlen((char *)&local_98);
      FUN_180029840(&local_140,&local_98,sVar11);
      uVar7 = _DAT_18095cee8;
      uVar6 = _DAT_18095cee0;
      uVar5 = uRam000000018095ced8;
      uVar4 = uRam000000018095ced4;
      uVar3 = uRam000000018095ced0;
      uVar2 = _DAT_18095cecc;
      local_100 = 1;
      if (0 < iVar9) {
        local_170 = (undefined1 *)CONCAT44(local_170._4_4_,0x3f800000);
        local_178._0_4_ = 0;
        local_178._4_4_ = DAT_1808ac34c - fVar19 / (float)iVar9;
        ppuVar13 = (undefined1 **)local_178;
        if (0.0 <= (float)local_178._4_4_) {
          ppuVar13 = (undefined1 **)(local_178 + 4);
        }
        ppuVar12 = &local_170;
        if ((float)local_178._4_4_ <= DAT_1808ac34c) {
          ppuVar12 = ppuVar13;
        }
        uVar21 = *(undefined4 *)ppuVar12;
      }
      local_b8 = CONCAT44(uRam000000018095ced0,_DAT_18095cecc);
      uStack_b0 = CONCAT44(uRam000000018095ced8,uRam000000018095ced4);
      local_e8 = CONCAT44(uRam000000018095ced0,_DAT_18095cecc);
      uStack_e0 = CONCAT44(uRam000000018095ced8,uRam000000018095ced4);
      local_f8 = CONCAT44(uRam000000018095ced0,_DAT_18095cecc);
      uStack_f0 = CONCAT44(uRam000000018095ced8,uRam000000018095ced4);
      local_d8 = _DAT_18095cee0;
      uStack_d0 = _DAT_18095cee8;
      *param_1 = local_148;
      *(ulonglong *)(param_1 + 8) = local_140;
      *(undefined8 *)(param_1 + 0x10) = uStack_138;
      *(undefined8 *)(param_1 + 0x18) = local_130;
      *(undefined8 *)(param_1 + 0x20) = local_128;
      local_130 = 0;
      local_128 = 0xf;
      local_140 = local_140 & 0xffffffffffffff00;
      *(ulonglong *)(param_1 + 0x28) = local_120;
      *(undefined8 *)(param_1 + 0x30) = uStack_118;
      *(undefined8 *)(param_1 + 0x38) = local_110;
      *(undefined8 *)(param_1 + 0x40) = local_108;
      local_110 = 0;
      local_108 = 0xf;
      local_120 = local_120 & 0xffffffffffffff00;
      param_1[0x48] = 1;
      *(undefined4 *)(param_1 + 0x4c) = uVar21;
      *(undefined4 *)(param_1 + 0x50) = uVar2;
      *(undefined4 *)(param_1 + 0x54) = uVar3;
      *(undefined4 *)(param_1 + 0x58) = uVar4;
      *(undefined4 *)(param_1 + 0x5c) = uVar5;
      *(undefined4 *)(param_1 + 0x60) = uVar2;
      *(undefined4 *)(param_1 + 100) = uVar3;
      *(undefined4 *)(param_1 + 0x68) = uVar4;
      *(undefined4 *)(param_1 + 0x6c) = uVar5;
      *(undefined8 *)(param_1 + 0x70) = uVar6;
      *(undefined8 *)(param_1 + 0x78) = uVar7;
      *(undefined8 *)(param_1 + 0x80) = local_c8;
      *(undefined8 *)(param_1 + 0x88) = uStack_c0;
      *(undefined4 *)(param_1 + 0x90) = uVar2;
      *(undefined4 *)(param_1 + 0x94) = uVar3;
      *(undefined4 *)(param_1 + 0x98) = uVar4;
      *(undefined4 *)(param_1 + 0x9c) = uVar5;
      param_1[0xa0] = (undefined1)local_a8;
      param_1[0xa1] = local_a8._1_1_;
      *(undefined4 *)(param_1 + 0xa4) = local_a4;
      *(undefined8 *)(param_1 + 0xa8) = local_a0;
      puVar18 = auStack_198;
      local_fc = uVar21;
      if (local_168 == (longlong *)0x0) goto LAB_1800c4124;
      uVar15 = (local_158 - (longlong)local_168 >> 3) * 8;
      if (0xfff < uVar15) {
        if ((undefined1 *)0x1f < (undefined1 *)((longlong)local_168 + (-8 - local_168[-1])))
        goto LAB_1800c3faa;
        uVar15 = uVar15 + 0x27;
        local_168 = (longlong *)local_168[-1];
      }
      thunk_FUN_1803d64e0(local_168,uVar15);
      local_168 = (longlong *)0x0;
      plStack_160 = (longlong *)0x0;
      local_158 = 0;
      puVar18 = auStack_198;
      goto LAB_1800c4124;
    }
  }
  if (local_168 != (longlong *)0x0) {
    plVar14 = local_168;
    if ((ulonglong)((local_158 - (longlong)local_168 >> 3) * 8) < 0x1000) {
LAB_1800c3fb1:
      puVar18 = puVar17;
    }
    else {
      plVar14 = (longlong *)local_168[-1];
      plVar16 = (longlong *)((longlong)local_168 + (-8 - (longlong)plVar14));
      puVar18 = auStack_198;
      if (&DAT_0000001f < plVar16) {
LAB_1800c3faa:
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        puVar17 = auStack_190;
        plVar14 = plVar16;
        goto LAB_1800c3fb1;
      }
    }
    *(undefined8 *)(puVar18 + -8) = 0x1800c3fb9;
    thunk_FUN_1803d64e0(plVar14);
  }
  *param_1 = puVar18[0x50];
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(puVar18 + 0x58);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(puVar18 + 0x60);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(puVar18 + 0x68);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(puVar18 + 0x70);
  *(undefined8 *)(puVar18 + 0x68) = 0;
  *(undefined8 *)(puVar18 + 0x70) = 0xf;
  puVar18[0x58] = 0;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(puVar18 + 0x78);
  *(undefined8 *)(param_1 + 0x30) = uStack_118;
  *(undefined8 *)(param_1 + 0x38) = local_110;
  *(undefined8 *)(param_1 + 0x40) = local_108;
  param_1[0x48] = local_100;
  *(undefined4 *)(param_1 + 0x4c) = local_fc;
  *(undefined8 *)(param_1 + 0x50) = local_f8;
  *(undefined8 *)(param_1 + 0x58) = uStack_f0;
  *(undefined8 *)(param_1 + 0x60) = local_e8;
  *(undefined8 *)(param_1 + 0x68) = uStack_e0;
  *(undefined8 *)(param_1 + 0x70) = local_d8;
  *(undefined8 *)(param_1 + 0x78) = uStack_d0;
  *(undefined8 *)(param_1 + 0x80) = local_c8;
  *(undefined8 *)(param_1 + 0x88) = uStack_c0;
  *(undefined8 *)(param_1 + 0x90) = local_b8;
  *(undefined8 *)(param_1 + 0x98) = uStack_b0;
  param_1[0xa0] = (undefined1)local_a8;
  param_1[0xa1] = local_a8._1_1_;
  *(undefined4 *)(param_1 + 0xa4) = local_a4;
  *(undefined8 *)(param_1 + 0xa8) = local_a0;
LAB_1800c4113:
  local_110 = 0;
  puVar18[0x78] = 0;
  local_108 = 0xf;
LAB_1800c4124:
  *(undefined8 *)(puVar18 + -8) = 0x1800c412e;
  FUN_18000f890(puVar18 + 0x78);
  *(undefined8 *)(puVar18 + -8) = 0x1800c4138;
  FUN_18000f890(puVar18 + 0x58);
  *(undefined8 *)(puVar18 + -8) = 0x1800c4147;
  return param_1;
}



/* ===== 1800c4180 FUN_1800c4180 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 * FUN_1800c4180(undefined1 *param_1,int param_2,undefined8 param_3)

{
  char *pcVar1;
  undefined1 auVar2 [12];
  undefined1 auVar3 [12];
  undefined1 auVar4 [12];
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  bool bVar8;
  undefined1 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  char cVar12;
  undefined4 uVar13;
  uint uVar14;
  int iVar15;
  longlong lVar16;
  undefined8 *puVar17;
  ulonglong *puVar18;
  float *pfVar19;
  size_t sVar20;
  float *pfVar21;
  longlong lVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  float fVar25;
  undefined1 auVar26 [12];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar29;
  float fVar30;
  float fVar31;
  undefined1 auStack_2b8 [32];
  undefined4 local_298;
  undefined4 uStack_294;
  float local_290 [6];
  undefined1 *local_278 [2];
  undefined4 local_268;
  undefined1 local_260 [24];
  undefined1 local_248;
  ulonglong local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 local_228;
  ulonglong local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined1 local_200;
  undefined4 local_1fc;
  undefined1 local_1f8 [8];
  undefined8 uStack_1f0;
  undefined1 local_1e8 [8];
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined1 local_1c8 [8];
  undefined8 uStack_1c0;
  undefined1 local_1b8 [8];
  undefined8 uStack_1b0;
  undefined2 local_1a8;
  undefined4 local_1a4;
  undefined8 local_1a0;
  undefined1 local_198;
  ulonglong local_190;
  ulonglong uStack_188;
  undefined8 local_180;
  undefined8 local_178;
  ulonglong local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined1 local_150;
  undefined4 local_14c;
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
  undefined2 local_f8;
  undefined4 local_f4;
  undefined8 local_f0;
  ulonglong local_e8 [8];
  undefined1 local_a8 [32];
  ulonglong local_88;
  
  local_88 = DAT_180919500 ^ (ulonglong)auStack_2b8;
  lVar22 = (longlong)param_2;
  local_268 = 0;
  local_278[0] = param_1;
  FUN_1800bfd10();
  switch(param_2) {
  case 0:
    local_248 = 0;
    uStack_238 = 0;
    local_230 = 0;
    local_228 = 0xf;
    local_240 = 0;
    uStack_218 = 0;
    local_210 = 0;
    local_208 = 0xf;
    local_220 = 0;
    local_200 = 0;
    local_1fc = 0;
    local_1a8 = 0;
    local_1a4 = 0;
    local_1a0 = 0;
    local_1b8._4_4_ = DAT_18095cee4;
    local_1b8._0_4_ = DAT_18095cee0;
    uStack_1b0._0_4_ = DAT_18095cee8;
    uStack_1b0._4_4_ = DAT_18095ceec;
    local_1c8._4_4_ = DAT_18095cee4;
    local_1c8._0_4_ = DAT_18095cee0;
    uStack_1c0._0_4_ = DAT_18095cee8;
    uStack_1c0._4_4_ = DAT_18095ceec;
    local_1d8 = local_1c8;
    uStack_1d0 = CONCAT44(DAT_18095ceec,DAT_18095cee8);
    uStack_1e0._0_4_ = DAT_18095cee8;
    local_1e8 = local_1c8;
    uStack_1e0._4_4_ = DAT_18095ceec;
    uStack_1f0._0_4_ = DAT_18095cee8;
    local_1f8 = local_1c8;
    uStack_1f0._4_4_ = DAT_18095ceec;
    lVar16 = FUN_180266660();
    if ((((lVar16 == 0) || (DAT_180cf9f80 == 0)) ||
        (cVar12 = FUN_180011220((ulonglong)DAT_180cf9f80 + lVar16), cVar12 == '\0')) ||
       (DAT_1809f351c != 0)) {
      *param_1 = local_248;
      *(ulonglong *)(param_1 + 8) = local_240;
      *(undefined8 *)(param_1 + 0x10) = uStack_238;
      *(undefined8 *)(param_1 + 0x18) = local_230;
      *(undefined8 *)(param_1 + 0x20) = local_228;
      *(ulonglong *)(param_1 + 0x28) = local_220;
      *(undefined8 *)(param_1 + 0x30) = uStack_218;
      *(undefined8 *)(param_1 + 0x38) = local_210;
      *(undefined8 *)(param_1 + 0x40) = local_208;
      *(undefined4 *)(param_1 + 0x4c) = local_1fc;
      *(undefined1 (*) [8])(param_1 + 0x50) = local_1f8;
      *(undefined8 *)(param_1 + 0x58) = uStack_1f0;
      *(undefined1 (*) [8])(param_1 + 0x60) = local_1e8;
      *(undefined8 *)(param_1 + 0x68) = uStack_1e0;
      *(undefined8 *)(param_1 + 0x70) = local_1d8;
      *(undefined8 *)(param_1 + 0x78) = uStack_1d0;
      *(undefined1 (*) [8])(param_1 + 0x80) = local_1c8;
      *(undefined8 *)(param_1 + 0x88) = uStack_1c0;
      *(undefined4 *)(param_1 + 0x90) = local_1b8._0_4_;
      *(undefined4 *)(param_1 + 0x94) = local_1b8._4_4_;
      *(undefined4 *)(param_1 + 0x98) = (undefined4)uStack_1b0;
      *(undefined4 *)(param_1 + 0x9c) = uStack_1b0._4_4_;
    }
    else {
      local_248 = 1;
      pcVar1 = (&PTR_s_SM__Off_1805cc210)[lVar22 * 4];
      sVar20 = strlen(pcVar1);
      FUN_180029840(&local_240,pcVar1,sVar20);
      fVar31 = DAT_18095cefc;
      fVar30 = DAT_18095cef8;
      fVar29 = DAT_18095cef4;
      fVar25 = DAT_18095cef0;
      local_1b8._4_4_ = DAT_18095cef4;
      local_1b8._0_4_ = DAT_18095cef0;
      uStack_1b0._0_4_ = DAT_18095cef8;
      uStack_1b0._4_4_ = DAT_18095cefc;
      local_1c8._4_4_ = DAT_18095cef4;
      local_1c8._0_4_ = DAT_18095cef0;
      uStack_1c0._0_4_ = DAT_18095cef8;
      uStack_1c0._4_4_ = DAT_18095cefc;
      local_1d8 = local_1c8;
      uStack_1d0 = CONCAT44(DAT_18095cefc,DAT_18095cef8);
      uStack_1e0._0_4_ = DAT_18095cef8;
      local_1e8 = local_1c8;
      uStack_1e0._4_4_ = DAT_18095cefc;
      uStack_1f0._0_4_ = DAT_18095cef8;
      local_1f8 = local_1c8;
      uStack_1f0._4_4_ = DAT_18095cefc;
      *param_1 = local_248;
      *(ulonglong *)(param_1 + 8) = local_240;
      *(undefined8 *)(param_1 + 0x10) = uStack_238;
      *(undefined8 *)(param_1 + 0x18) = local_230;
      *(undefined8 *)(param_1 + 0x20) = local_228;
      *(ulonglong *)(param_1 + 0x28) = local_220;
      *(undefined8 *)(param_1 + 0x30) = uStack_218;
      *(undefined8 *)(param_1 + 0x38) = local_210;
      *(undefined8 *)(param_1 + 0x40) = local_208;
      *(undefined4 *)(param_1 + 0x4c) = local_1fc;
      *(float *)(param_1 + 0x50) = fVar25;
      *(float *)(param_1 + 0x54) = fVar29;
      *(float *)(param_1 + 0x58) = fVar30;
      *(float *)(param_1 + 0x5c) = fVar31;
      *(float *)(param_1 + 0x60) = fVar25;
      *(float *)(param_1 + 100) = fVar29;
      *(float *)(param_1 + 0x68) = fVar30;
      *(float *)(param_1 + 0x6c) = fVar31;
      *(float *)(param_1 + 0x70) = fVar25;
      *(float *)(param_1 + 0x74) = fVar29;
      *(float *)(param_1 + 0x78) = fVar30;
      *(float *)(param_1 + 0x7c) = fVar31;
      *(float *)(param_1 + 0x80) = fVar25;
      *(float *)(param_1 + 0x84) = fVar29;
      *(float *)(param_1 + 0x88) = fVar30;
      *(float *)(param_1 + 0x8c) = fVar31;
      *(float *)(param_1 + 0x90) = fVar25;
      *(float *)(param_1 + 0x94) = fVar29;
      *(float *)(param_1 + 0x98) = fVar30;
      *(float *)(param_1 + 0x9c) = fVar31;
    }
    param_1[0x48] = local_200;
    param_1[0xa0] = (undefined1)local_1a8;
    param_1[0xa1] = local_1a8._1_1_;
    *(undefined4 *)(param_1 + 0xa4) = local_1a4;
    *(undefined8 *)(param_1 + 0xa8) = local_1a0;
    goto LAB_1800c489b;
  case 1:
    FUN_1800c0a00(param_1,param_3);
    break;
  case 2:
    FUN_1800c1480(param_1,param_3);
    break;
  case 3:
    FUN_1800c3bb0(param_1);
    break;
  case 4:
    FUN_1800c1ae0(param_1);
    break;
  case 5:
    local_198 = 0;
    uStack_188 = 0;
    uVar23 = 0;
    local_180 = 0;
    uVar24 = 0xf;
    local_178 = 0xf;
    local_190 = 0;
    uStack_168 = 0;
    local_160 = 0;
    local_158 = 0xf;
    local_170 = 0;
    local_150 = 0;
    local_14c = 0;
    local_f8 = 0;
    local_f4 = 0;
    local_f0 = 0;
    uVar5 = CONCAT44(DAT_18095cee4,DAT_18095cee0);
    uVar6 = CONCAT44(DAT_18095ceec,DAT_18095cee8);
    local_148 = uVar5;
    uStack_140 = uVar6;
    local_138 = uVar5;
    uStack_130 = uVar6;
    local_128 = uVar5;
    uStack_120 = uVar6;
    local_118 = uVar5;
    uStack_110 = uVar6;
    local_108 = uVar5;
    uStack_100 = uVar6;
    if (DAT_180cd1304 == '\0') {
      FUN_1803a0b60(&local_298);
      DAT_181108a00 = CONCAT44(uStack_294,local_298);
      DAT_1811089f8 = (undefined1 *)FUN_1803a0c50(&local_298);
      DAT_180cd1304 = '\x01';
    }
    puVar9 = DAT_1811089f8;
    if (DAT_1811089f8 != (undefined1 *)0x0) {
      if (DAT_180ca09f0 != 0) {
        iVar15 = FUN_180011200(DAT_1811089f8 + DAT_180ca09f0);
        if ((((iVar15 - 1U < 1000) && (local_278[0] = puVar9, DAT_18095723c != '\0')) &&
            (DAT_1809f351c != 2)) &&
           (((DAT_1809f351c != 1 || (lVar16 = FUN_180266660(), lVar16 == 0)) ||
            ((DAT_180cf9f80 == 0 ||
             (cVar12 = FUN_180011220((ulonglong)DAT_180cf9f80 + lVar16), cVar12 == '\0')))))) {
          local_298 = 0;
          lVar16 = FUN_1800c04a0(local_260,local_278);
          uVar13 = FUN_1800ef270(&DAT_180957240,*(undefined4 *)(lVar16 + 0x14));
          puVar17 = (undefined8 *)FUN_1800ef660(local_a8,uVar13,"min_damage");
          if (0xf < (ulonglong)puVar17[3]) {
            puVar17 = (undefined8 *)*puVar17;
          }
          cVar12 = FUN_1800bfb50(puVar17,&local_298);
          FUN_18000f890();
          if (cVar12 != '\0') {
            local_198 = 1;
            iVar15 = FUN_1804f3280(local_298);
            if (DAT_18095cedc == '\0') {
              pcVar1 = (&PTR_s_SM__Off_1805cc210)[lVar22 * 4];
              local_e8[4] = 0;
              local_e8[5] = 0;
              local_e8[6] = 0;
              local_e8[7] = 0;
              sVar20 = strlen(pcVar1);
              FUN_1800133a0(local_e8 + 4,pcVar1,sVar20);
              puVar18 = local_e8 + 4;
              bVar8 = false;
              bVar7 = true;
            }
            else {
              bVar8 = true;
              bVar7 = false;
              if (iVar15 < 0x65) {
                puVar18 = (ulonglong *)FUN_18003a390(local_e8,iVar15);
              }
              else {
                local_e8[1] = 0;
                local_e8[2] = 2;
                local_e8[3] = 0xf;
                local_e8[0] = (ulonglong)DAT_1806eb240;
                puVar18 = local_e8;
              }
            }
            if (&local_190 != puVar18) {
              local_190 = *puVar18;
              uStack_188 = puVar18[1];
              uVar23 = puVar18[2];
              uVar24 = puVar18[3];
              puVar18[2] = 0;
              puVar18[3] = 0xf;
              *(undefined1 *)puVar18 = 0;
            }
            uVar11 = uStack_188;
            uVar10 = local_190;
            if (bVar7) {
              FUN_18000f890();
            }
            if (bVar8) {
              FUN_18000f890();
            }
            *param_1 = 1;
            *(ulonglong *)(param_1 + 8) = uVar10;
            *(ulonglong *)(param_1 + 0x10) = uVar11;
            *(ulonglong *)(param_1 + 0x18) = uVar23;
            *(ulonglong *)(param_1 + 0x20) = uVar24;
            local_180 = 0;
            local_178 = 0xf;
            local_190 = local_190 & 0xffffffffffffff00;
            *(ulonglong *)(param_1 + 0x28) = local_170;
            *(undefined8 *)(param_1 + 0x30) = uStack_168;
            *(undefined8 *)(param_1 + 0x38) = 0;
            *(undefined8 *)(param_1 + 0x40) = 0xf;
            local_160 = 0;
            local_158 = 0xf;
            local_170 = local_170 & 0xffffffffffffff00;
            param_1[0x48] = 0;
            *(undefined4 *)(param_1 + 0x4c) = 0;
            *(undefined8 *)(param_1 + 0x50) = uVar5;
            *(undefined8 *)(param_1 + 0x58) = uVar6;
            *(undefined8 *)(param_1 + 0x60) = uVar5;
            *(undefined8 *)(param_1 + 0x68) = uVar6;
            *(undefined8 *)(param_1 + 0x70) = uVar5;
            *(undefined8 *)(param_1 + 0x78) = uVar6;
            *(undefined8 *)(param_1 + 0x80) = uVar5;
            *(undefined8 *)(param_1 + 0x88) = uVar6;
            *(undefined8 *)(param_1 + 0x90) = uVar5;
            *(undefined8 *)(param_1 + 0x98) = uVar6;
            *(undefined2 *)(param_1 + 0xa0) = 0;
            *(undefined4 *)(param_1 + 0xa4) = 0;
            *(undefined8 *)(param_1 + 0xa8) = 0;
            FUN_18000f890(&local_170);
            FUN_18000f890(&local_190);
            return param_1;
          }
        }
      }
    }
    *param_1 = 0;
    *(ulonglong *)(param_1 + 8) = local_190;
    *(ulonglong *)(param_1 + 0x10) = uStack_188;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0xf;
    local_180 = 0;
    local_178 = 0xf;
    local_190 = local_190 & 0xffffffffffffff00;
    *(ulonglong *)(param_1 + 0x28) = local_170;
    *(undefined8 *)(param_1 + 0x30) = uStack_168;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0xf;
    local_160 = 0;
    local_158 = 0xf;
    local_170 = local_170 & 0xffffffffffffff00;
    param_1[0x48] = 0;
    *(undefined4 *)(param_1 + 0x4c) = 0;
    *(undefined8 *)(param_1 + 0x50) = uVar5;
    *(undefined8 *)(param_1 + 0x58) = uVar6;
    *(undefined8 *)(param_1 + 0x60) = uVar5;
    *(undefined8 *)(param_1 + 0x68) = uVar6;
    *(undefined8 *)(param_1 + 0x70) = uVar5;
    *(undefined8 *)(param_1 + 0x78) = uVar6;
    *(undefined8 *)(param_1 + 0x80) = uVar5;
    *(undefined8 *)(param_1 + 0x88) = uVar6;
    *(undefined8 *)(param_1 + 0x90) = uVar5;
    *(undefined8 *)(param_1 + 0x98) = uVar6;
    *(undefined2 *)(param_1 + 0xa0) = 0;
    *(undefined4 *)(param_1 + 0xa4) = 0;
    *(undefined8 *)(param_1 + 0xa8) = 0;
    FUN_18000f890(&local_170);
    FUN_18000f890(&local_190);
    break;
  case 6:
    FUN_1800c24c0(param_1);
    break;
  case 7:
    FUN_1800c3150(param_1);
    break;
  case 8:
    local_248 = 0;
    uStack_238 = 0;
    local_230 = 0;
    local_228 = 0xf;
    local_240 = 0;
    uStack_218 = 0;
    local_210 = 0;
    local_208 = 0xf;
    local_220 = 0;
    local_200 = 0;
    local_1fc = 0;
    local_1a8 = 0;
    local_1a4 = 0;
    local_1a0 = 0;
    local_1d8 = CONCAT44(DAT_18095cee4,DAT_18095cee0);
    uStack_1c0._0_4_ = DAT_18095cee8;
    local_1c8 = (undefined1  [8])local_1d8;
    uStack_1c0._4_4_ = DAT_18095ceec;
    uStack_1d0 = CONCAT44(DAT_18095ceec,DAT_18095cee8);
    auVar2._4_8_ = local_1c8._8_8_;
    auVar2._0_4_ = DAT_18095cee0;
    auVar27._0_8_ = auVar2._0_8_ << 0x20;
    auVar27._8_4_ = DAT_18095cee8;
    auVar27._12_4_ = DAT_18095ceec;
    auVar3._4_8_ = auVar27._8_8_;
    auVar3._0_4_ = DAT_18095cee0;
    auVar28._0_8_ = auVar3._0_8_ << 0x20;
    auVar28._8_4_ = DAT_18095cee4;
    auVar28._12_4_ = DAT_18095ceec;
    auVar4._4_8_ = auVar28._8_8_;
    auVar4._0_4_ = DAT_18095cee0;
    auVar26._0_8_ = auVar4._0_8_ << 0x20;
    auVar26._8_4_ = DAT_18095cee4;
    local_1f8 = auVar26._4_8_;
    uStack_1f0._0_4_ = DAT_18095cee8;
    uStack_1f0._4_4_ = DAT_18095ceec;
    _local_1e8 = _local_1f8;
    _local_1b8 = _local_1c8;
    if (DAT_180cd1304 == '\0') {
      FUN_1803a0b60(&local_298);
      DAT_181108a00 = CONCAT44(uStack_294,local_298);
      DAT_1811089f8 = (undefined1 *)FUN_1803a0c50(&local_298);
      DAT_180cd1304 = '\x01';
    }
    puVar9 = DAT_1811089f8;
    uVar14 = FUN_18038eaf0("C_CSPlayerPawn","m_flVelocityModifier");
    if ((((puVar9 == (undefined1 *)0x0) || (DAT_180ca09f0 == 0)) ||
        (iVar15 = FUN_180011200(puVar9 + DAT_180ca09f0), 999 < iVar15 - 1U)) || (uVar14 == 0)) {
LAB_1800c4cb2:
      *param_1 = local_248;
      *(ulonglong *)(param_1 + 8) = local_240;
      *(undefined8 *)(param_1 + 0x10) = uStack_238;
      *(undefined8 *)(param_1 + 0x18) = local_230;
      *(undefined8 *)(param_1 + 0x20) = local_228;
      *(ulonglong *)(param_1 + 0x28) = local_220;
      *(undefined8 *)(param_1 + 0x30) = uStack_218;
      *(undefined8 *)(param_1 + 0x38) = local_210;
      *(undefined8 *)(param_1 + 0x40) = local_208;
      *(undefined4 *)(param_1 + 0x4c) = local_1fc;
      *(undefined1 (*) [8])(param_1 + 0x50) = local_1f8;
      *(undefined8 *)(param_1 + 0x58) = uStack_1f0;
      *(undefined1 (*) [8])(param_1 + 0x60) = local_1e8;
      *(undefined8 *)(param_1 + 0x68) = uStack_1e0;
      *(undefined8 *)(param_1 + 0x70) = local_1d8;
      *(undefined8 *)(param_1 + 0x78) = uStack_1d0;
      *(undefined4 *)(param_1 + 0x80) = local_1c8._0_4_;
      *(undefined4 *)(param_1 + 0x84) = local_1c8._4_4_;
      *(undefined4 *)(param_1 + 0x88) = (undefined4)uStack_1c0;
      *(undefined4 *)(param_1 + 0x8c) = uStack_1c0._4_4_;
      *(undefined1 (*) [8])(param_1 + 0x90) = local_1b8;
      *(undefined8 *)(param_1 + 0x98) = uStack_1b0;
    }
    else {
      local_290[1] = (float)FUN_18000f3d0(puVar9 + uVar14);
      if (((uint)local_290[1] & 0x7f800000) == 0x7f800000) goto LAB_1800c4cb2;
      local_290[2] = 1.0;
      local_290[0] = 0.5;
      pfVar21 = local_290;
      if (DAT_1808ac1f4 <= local_290[1]) {
        pfVar21 = local_290 + 1;
      }
      pfVar19 = local_290 + 2;
      if (local_290[1] <= DAT_1808ac34c) {
        pfVar19 = pfVar21;
      }
      if (DAT_1808ac34c <= *pfVar19) goto LAB_1800c4cb2;
      fVar25 = *pfVar19 - DAT_1808ac1f4;
      fVar25 = fVar25 + fVar25;
      fVar31 = (DAT_1808ac34c - DAT_18095cef0) * fVar25 + DAT_18095cef0;
      fVar30 = (DAT_1808ac248 - DAT_18095cef4) * fVar25 + DAT_18095cef4;
      fVar29 = (DAT_1808ac1a4 - DAT_18095cef8) * fVar25 + DAT_18095cef8;
      fVar25 = (DAT_1808ac34c - DAT_18095cefc) * fVar25 + DAT_18095cefc;
      local_248 = 1;
      pcVar1 = (&PTR_s_SM__Off_1805cc210)[lVar22 * 4];
      sVar20 = strlen(pcVar1);
      FUN_180029840(&local_240,pcVar1,sVar20);
      local_1d8 = CONCAT44(fVar30,fVar31);
      uStack_1d0 = CONCAT44(fVar25,fVar29);
      local_1e8._4_4_ = fVar30;
      local_1e8._0_4_ = fVar31;
      uStack_1e0._0_4_ = fVar29;
      uStack_1e0._4_4_ = fVar25;
      local_1f8._4_4_ = fVar30;
      local_1f8._0_4_ = fVar31;
      uStack_1f0._0_4_ = fVar29;
      uStack_1f0._4_4_ = fVar25;
      *param_1 = local_248;
      *(ulonglong *)(param_1 + 8) = local_240;
      *(undefined8 *)(param_1 + 0x10) = uStack_238;
      *(undefined8 *)(param_1 + 0x18) = local_230;
      *(undefined8 *)(param_1 + 0x20) = local_228;
      *(ulonglong *)(param_1 + 0x28) = local_220;
      *(undefined8 *)(param_1 + 0x30) = uStack_218;
      *(undefined8 *)(param_1 + 0x38) = local_210;
      *(undefined8 *)(param_1 + 0x40) = local_208;
      *(undefined4 *)(param_1 + 0x4c) = local_1fc;
      *(float *)(param_1 + 0x50) = fVar31;
      *(float *)(param_1 + 0x54) = fVar30;
      *(float *)(param_1 + 0x58) = fVar29;
      *(float *)(param_1 + 0x5c) = fVar25;
      *(float *)(param_1 + 0x60) = fVar31;
      *(float *)(param_1 + 100) = fVar30;
      *(float *)(param_1 + 0x68) = fVar29;
      *(float *)(param_1 + 0x6c) = fVar25;
      *(float *)(param_1 + 0x70) = fVar31;
      *(float *)(param_1 + 0x74) = fVar30;
      *(float *)(param_1 + 0x78) = fVar29;
      *(float *)(param_1 + 0x7c) = fVar25;
      *(undefined1 (*) [8])(param_1 + 0x80) = local_1c8;
      *(undefined8 *)(param_1 + 0x88) = uStack_1c0;
      *(undefined4 *)(param_1 + 0x90) = local_1b8._0_4_;
      *(undefined4 *)(param_1 + 0x94) = local_1b8._4_4_;
      *(undefined4 *)(param_1 + 0x98) = (undefined4)uStack_1b0;
      *(undefined4 *)(param_1 + 0x9c) = uStack_1b0._4_4_;
    }
    param_1[0x48] = local_200;
    param_1[0xa0] = (undefined1)local_1a8;
    param_1[0xa1] = local_1a8._1_1_;
    *(undefined4 *)(param_1 + 0xa4) = local_1a4;
    *(undefined8 *)(param_1 + 0xa8) = local_1a0;
LAB_1800c489b:
    local_220 = local_220 & 0xffffffffffffff00;
    local_240 = local_240 & 0xffffffffffffff00;
    local_208 = 0xf;
    local_210 = 0;
    local_228 = 0xf;
    local_230 = 0;
    FUN_18000f890(&local_220);
    FUN_18000f890(&local_240);
    break;
  case 9:
    FUN_1800c3540(param_1);
    break;
  default:
    FUN_1800c05a0(param_1,param_2);
  }
  return param_1;
}



/* ===== 1800c4dc0 FUN_1800c4dc0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1800c4dc0(undefined1 *param_1,int param_2)

{
  longlong *plVar1;
  ulonglong *puVar2;
  code *pcVar3;
  size_t sVar4;
  undefined1 *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  char *pcVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 auStack_1f8 [8];
  undefined1 auStack_1f0 [24];
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined1 local_1c8;
  undefined8 local_1c4;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined1 *local_1a8;
  undefined1 local_198;
  longlong local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  ulonglong local_178;
  ulonglong local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  ulonglong local_158;
  undefined1 local_150;
  undefined4 local_14c;
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
  undefined2 local_f8;
  undefined4 local_f4;
  undefined8 local_f0;
  undefined1 local_e8 [8];
  undefined1 local_e0 [32];
  undefined1 local_c0 [136];
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStack_1f8;
  uStack_188 = 0;
  local_180 = 0;
  local_178 = 0xf;
  local_190 = 0;
  uStack_168 = 0;
  local_160 = 0;
  local_158 = 0xf;
  local_170 = 0;
  local_150 = 0;
  local_14c = 0;
  local_f8 = 0;
  local_f4 = 0;
  local_f0 = 0;
  local_108 = _DAT_18095cee0;
  uStack_100 = _DAT_18095cee8;
  local_118 = _DAT_18095cee0;
  uStack_110 = _DAT_18095cee8;
  local_128 = _DAT_18095cee0;
  uStack_120 = _DAT_18095cee8;
  local_138 = _DAT_18095cee0;
  uStack_130 = _DAT_18095cee8;
  local_148 = _DAT_18095cee0;
  uStack_140 = _DAT_18095cee8;
  local_198 = 1;
  pcVar9 = (&PTR_s_SM__Off_1805cc210)[(longlong)param_2 * 4];
  local_1a8 = param_1;
  sVar4 = strlen(pcVar9);
  FUN_180029840(&local_190,pcVar9,sVar4);
  puVar11 = auStack_1f8;
  puVar10 = auStack_1f8;
  puVar5 = auStack_1f8;
  switch(param_2) {
  case 0:
  case 9:
    local_148 = _DAT_18095cef0;
    uStack_140 = _DAT_18095cef8;
    goto LAB_1800c4ead;
  case 1:
    local_1c8 = 0;
    local_1c4 = 0;
    local_1d8 = 2;
    local_1d0 = 0x4220000041bb3333;
    local_1bc = 0x39;
    local_1b8 = 100;
    puVar5 = (undefined1 *)FUN_1800c0a00(local_e8,&local_1d8);
    goto LAB_1800c4f0f;
  case 2:
    local_1d0 = 0x41bb3333;
    local_1bc = 0xffffffff;
    local_1b8 = 0;
    local_1d8 = 2;
    local_1c8 = 1;
    local_1c4 = 0x41200000404ccccd;
    puVar5 = (undefined1 *)FUN_1800c1480(local_e8,&local_1d8);
LAB_1800c4f0f:
    puVar10 = auStack_1f8;
    local_198 = *puVar5;
    plVar1 = (longlong *)(puVar5 + 8);
    if (&local_190 == plVar1) {
LAB_1800c4fa6:
      puVar2 = (ulonglong *)(puVar5 + 0x28);
      if (&local_170 != puVar2) {
        if (0xf < local_158) {
          uVar8 = local_158 + 1;
          uVar7 = local_170;
          if (0xfff < uVar8) {
            uVar7 = *(ulonglong *)(local_170 - 8);
            if (0x1f < (local_170 - uVar7) - 8) goto LAB_1800c5203;
            uVar8 = local_158 + 0x28;
          }
          thunk_FUN_1803d64e0(uVar7,uVar8);
        }
        local_170 = *puVar2;
        uStack_168 = *(undefined8 *)(puVar5 + 0x30);
        local_160 = *(undefined8 *)(puVar5 + 0x38);
        local_158 = *(ulonglong *)(puVar5 + 0x40);
        *(undefined8 *)(puVar5 + 0x38) = 0;
        *(undefined8 *)(puVar5 + 0x40) = 0xf;
        *(undefined1 *)puVar2 = 0;
      }
      local_150 = puVar5[0x48];
      local_14c = *(undefined4 *)(puVar5 + 0x4c);
      local_148 = *(undefined8 *)(puVar5 + 0x50);
      uStack_140 = *(undefined8 *)(puVar5 + 0x58);
      local_138 = *(undefined8 *)(puVar5 + 0x60);
      uStack_130 = *(undefined8 *)(puVar5 + 0x68);
      local_128 = *(undefined8 *)(puVar5 + 0x70);
      uStack_120 = *(undefined8 *)(puVar5 + 0x78);
      local_118 = *(undefined8 *)(puVar5 + 0x80);
      uStack_110 = *(undefined8 *)(puVar5 + 0x88);
      local_108 = *(undefined8 *)(puVar5 + 0x90);
      uStack_100 = *(undefined8 *)(puVar5 + 0x98);
      local_f8 = *(undefined2 *)(puVar5 + 0xa0);
      local_f4 = *(undefined4 *)(puVar5 + 0xa4);
      local_f0 = *(undefined8 *)(puVar5 + 0xa8);
      FUN_18000f890(local_c0);
      FUN_18000f890(local_e0);
    }
    else {
      if (local_178 < 0x10) {
LAB_1800c4f63:
        local_190 = *plVar1;
        uStack_188 = *(undefined8 *)(puVar5 + 0x10);
        local_180 = *(undefined8 *)(puVar5 + 0x18);
        local_178 = *(ulonglong *)(puVar5 + 0x20);
        *(undefined8 *)(puVar5 + 0x18) = 0;
        *(undefined1 *)plVar1 = 0;
        *(undefined8 *)(puVar5 + 0x20) = 0xf;
        goto LAB_1800c4fa6;
      }
      uVar7 = local_178 + 1;
      lVar6 = local_190;
      if (uVar7 < 0x1000) {
LAB_1800c4f5e:
        thunk_FUN_1803d64e0(lVar6,uVar7);
        goto LAB_1800c4f63;
      }
      lVar6 = *(longlong *)(local_190 + -8);
      if ((local_190 - lVar6) - 8U < 0x20) {
        uVar7 = local_178 + 0x28;
        goto LAB_1800c4f5e;
      }
LAB_1800c5203:
      pcVar3 = (code *)swi(0x29);
      (*pcVar3)(5);
      puVar5 = auStack_1f0;
switchD_1800c4ea3_caseD_3:
      puVar10 = puVar5;
      local_150 = 1;
      local_14c = 0x3ecccccd;
    }
    break;
  case 3:
    goto switchD_1800c4ea3_caseD_3;
  case 4:
    local_148 = _DAT_18095cf00;
    uStack_140 = uRam000000018095cf08;
LAB_1800c4ead:
    puVar11 = auStack_1f8;
    local_138 = local_148;
    uStack_130 = uStack_140;
    local_128 = local_148;
    uStack_120 = uStack_140;
    local_118 = local_148;
    uStack_110 = uStack_140;
    local_108 = local_148;
    uStack_100 = uStack_140;
    goto LAB_1800c50ad;
  case 5:
    pcVar9 = "MD";
    if (DAT_18095cedc != '\0') {
      pcVar9 = "30";
    }
    sVar4 = strlen(pcVar9);
    FUN_180029840(&local_190,pcVar9,sVar4);
    puVar10 = auStack_1f8;
    break;
  case 6:
    local_150 = 1;
    local_14c = 0x3f266666;
    puVar10 = auStack_1f8;
    break;
  case 7:
    local_108 = _DAT_18095cf00;
    uStack_100 = uRam000000018095cf08;
    local_118 = _DAT_18095cf00;
    uStack_110 = uRam000000018095cf08;
    local_128 = _DAT_18095cf00;
    uStack_120 = uRam000000018095cf08;
    local_138 = _DAT_18095cf00;
    uStack_130 = uRam000000018095cf08;
    local_148 = _DAT_18095cf00;
    uStack_140 = uRam000000018095cf08;
    local_150 = 1;
    local_14c = 0x3e99999a;
    goto LAB_1800c50ad;
  }
  puVar11 = puVar10;
LAB_1800c50ad:
  *param_1 = puVar11[0x60];
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(puVar11 + 0x68);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(puVar11 + 0x70);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(puVar11 + 0x78);
  *(ulonglong *)(param_1 + 0x20) = local_178;
  *(undefined8 *)(puVar11 + 0x78) = 0;
  local_178 = 0xf;
  puVar11[0x68] = 0;
  *(ulonglong *)(param_1 + 0x28) = local_170;
  *(undefined8 *)(param_1 + 0x30) = uStack_168;
  *(undefined8 *)(param_1 + 0x38) = local_160;
  *(ulonglong *)(param_1 + 0x40) = local_158;
  local_160 = 0;
  local_158 = 0xf;
  local_170 = local_170 & 0xffffffffffffff00;
  param_1[0x48] = local_150;
  *(undefined4 *)(param_1 + 0x4c) = local_14c;
  *(undefined8 *)(param_1 + 0x50) = local_148;
  *(undefined8 *)(param_1 + 0x58) = uStack_140;
  *(undefined8 *)(param_1 + 0x60) = local_138;
  *(undefined8 *)(param_1 + 0x68) = uStack_130;
  *(undefined4 *)(param_1 + 0x70) = (undefined4)local_128;
  *(undefined4 *)(param_1 + 0x74) = local_128._4_4_;
  *(undefined4 *)(param_1 + 0x78) = (undefined4)uStack_120;
  *(undefined4 *)(param_1 + 0x7c) = uStack_120._4_4_;
  *(undefined8 *)(param_1 + 0x80) = local_118;
  *(undefined8 *)(param_1 + 0x88) = uStack_110;
  *(undefined8 *)(param_1 + 0x90) = local_108;
  *(undefined8 *)(param_1 + 0x98) = uStack_100;
  param_1[0xa0] = (undefined1)local_f8;
  param_1[0xa1] = local_f8._1_1_;
  *(undefined4 *)(param_1 + 0xa4) = local_f4;
  *(undefined8 *)(param_1 + 0xa8) = local_f0;
  *(undefined8 *)(puVar11 + -8) = 0x1800c5189;
  FUN_18000f890(&local_170);
  *(undefined8 *)(puVar11 + -8) = 0x1800c5193;
  FUN_18000f890(puVar11 + 0x68);
  *(undefined8 *)(puVar11 + -8) = 0x1800c51a5;
  return param_1;
}



/* ===== 1800c52d0 FUN_1800c52d0 ===== */

undefined1 * FUN_1800c52d0(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  FUN_18002ba60(param_1 + 8,param_2 + 8);
  FUN_18002ba60(param_1 + 0x28,param_2 + 0x28);
  param_1[0x48] = param_2[0x48];
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x4c);
  uVar1 = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x58) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x68);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x68) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x78);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  *(undefined8 *)(param_1 + 0x78) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x88);
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 0x80);
  *(undefined8 *)(param_1 + 0x88) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x98);
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_2 + 0x90);
  *(undefined8 *)(param_1 + 0x98) = uVar1;
  param_1[0xa0] = param_2[0xa0];
  param_1[0xa1] = param_2[0xa1];
  *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(param_2 + 0xa4);
  *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_2 + 0xa8);
  return param_1;
}



/* ===== 1800c5390 FUN_1800c5390 ===== */

void FUN_1800c5390(longlong param_1,undefined8 param_2,float param_3,float param_4,float param_5,
                  float param_6,uint param_7)

{
  int iVar1;
  float fVar2;
  
  if ((((0xffffff < param_7) && (0.0 < param_3)) && (0.0 < param_6)) && (param_4 < param_5)) {
    fVar2 = (float)FUN_18053ef70(((param_5 - param_4) / DAT_1808ac7d0) * DAT_1808acab0);
    iVar1 = 0xc;
    if (0xc < (int)fVar2) {
      iVar1 = (int)fVar2;
    }
    FUN_1803fddf0(param_1,param_2,param_3,param_4,param_5,iVar1);
    FUN_1803fc600(param_1,*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x50),param_7,
                  param_6,0);
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  return;
}



/* ===== 1800c5490 FUN_1800c5490 ===== */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800c5490(longlong param_1,float *param_2,float param_3)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  longlong lVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  float *pfVar14;
  size_t sVar15;
  undefined8 *puVar16;
  float **ppfVar17;
  char cVar18;
  float *pfVar19;
  float **ppfVar20;
  undefined8 *******pppppppuVar21;
  undefined8 *******pppppppuVar22;
  float *pfVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  undefined *puVar26;
  char *_Str;
  undefined1 *puVar27;
  uint uVar28;
  undefined *puVar29;
  float *pfVar30;
  float *pfVar31;
  undefined *puVar32;
  undefined *puVar33;
  undefined *puVar34;
  uint uVar35;
  char *pcVar36;
  undefined4 uVar37;
  undefined8 uVar38;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  double dVar39;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  undefined4 uVar51;
  float fVar52;
  float fVar53;
  undefined4 uVar54;
  undefined4 uVar55;
  undefined4 uVar56;
  float fVar57;
  float fVar58;
  undefined1 auStack_2808 [8];
  undefined1 auStack_2800 [24];
  float *local_27e8;
  undefined8 local_27e0;
  undefined8 local_27d8;
  undefined8 local_27d0;
  undefined8 local_27c8;
  undefined4 local_27b8;
  uint local_27a8;
  float *local_27a0;
  longlong local_2798;
  float local_2790;
  float local_278c;
  float local_2788;
  float local_2784;
  float local_2780 [4];
  float *local_2770;
  float *local_2768;
  uint local_2760;
  float local_275c;
  float local_2758;
  float local_2754;
  float local_2750;
  float local_274c;
  float local_2748;
  ulonglong local_2740;
  float *local_2738;
  float local_2730;
  float local_2728;
  float local_2724;
  float local_2720;
  float local_271c;
  float local_2718;
  float local_2714;
  float *local_2710;
  float *local_2708;
  float local_2700;
  float local_26fc;
  undefined8 local_26f8;
  float *local_26f0;
  float *local_26e8;
  undefined8 *******local_26e0;
  ulonglong local_26d8;
  float local_26d0;
  float local_26cc;
  float local_26c8;
  float local_26c4;
  float local_26c0;
  float local_26bc;
  float local_26b8;
  float local_26b4;
  float local_26b0;
  float local_26ac;
  float local_26a8;
  float local_26a4 [4];
  float local_2694;
  float local_2690;
  float local_268c;
  float local_2688;
  float local_2684;
  float local_2680 [2];
  float local_2678;
  float local_2674;
  longlong local_2670;
  double local_2668;
  float local_2660;
  float local_265c;
  float local_2658 [3];
  undefined8 local_264c;
  char *local_2640;
  undefined4 local_2638;
  undefined4 local_2634;
  float local_2630 [3];
  float local_2624;
  float local_2620;
  float local_261c;
  longlong local_2618;
  undefined4 local_2610;
  undefined4 local_260c;
  float local_2608 [3];
  float local_25fc;
  float local_25f8;
  float local_25f4;
  float local_25f0 [2];
  undefined8 local_25e8;
  float local_25e0;
  float local_25dc;
  float *local_25d8;
  float *local_25d0;
  float local_25c8;
  float local_25c4;
  float local_25c0;
  float local_25bc;
  char *local_25b8;
  float *local_25b0;
  float local_25a8 [2];
  undefined8 local_25a0;
  undefined8 local_2598;
  undefined8 uStack_2590;
  float *local_2588;
  float local_2578 [4];
  undefined1 local_2568 [16];
  undefined8 local_2558;
  undefined8 local_2550;
  float local_2548 [2];
  float local_2540 [2];
  undefined8 local_2538;
  longlong local_2530;
  undefined8 local_2528;
  float *local_2520;
  char local_2518 [8];
  undefined8 local_2510;
  undefined8 uStack_2508;
  undefined8 local_2500;
  undefined8 local_24f8;
  undefined8 local_24f0;
  undefined8 uStack_24e8;
  undefined8 local_24e0;
  undefined8 local_24d8;
  char local_24d0;
  undefined4 local_24cc;
  undefined8 local_24c8;
  undefined8 uStack_24c0;
  undefined8 local_24b8;
  undefined8 uStack_24b0;
  undefined8 local_24a8;
  undefined8 uStack_24a0;
  undefined8 local_2498;
  undefined8 uStack_2490;
  undefined8 local_2488;
  undefined8 uStack_2480;
  undefined2 local_2478;
  undefined4 local_2474;
  undefined8 local_2470;
  char *local_2468;
  undefined8 uStack_2460;
  uint local_2458;
  undefined4 uStack_2454;
  undefined4 uStack_2450;
  undefined4 uStack_244c;
  undefined4 local_2448;
  char *local_2440;
  undefined8 uStack_2438;
  ulonglong local_2430;
  ulonglong uStack_2428;
  undefined4 local_2420;
  char local_2418 [8];
  undefined8 *******local_2410;
  undefined8 uStack_2408;
  float *local_2400;
  ulonglong local_23f8;
  undefined8 *******local_23f0;
  undefined8 uStack_23e8;
  float *local_23e0;
  ulonglong local_23d8;
  char local_23d0;
  undefined4 local_23cc;
  undefined8 local_23c8;
  undefined8 uStack_23c0;
  undefined8 local_23b8;
  undefined8 uStack_23b0;
  undefined8 local_23a8;
  undefined8 uStack_23a0;
  undefined8 local_2398;
  undefined8 uStack_2390;
  undefined8 local_2388;
  undefined8 uStack_2380;
  char local_2378;
  char local_2377;
  undefined4 local_2374;
  undefined8 local_2370;
  undefined8 local_2368;
  undefined8 uStack_2360;
  undefined8 local_2358;
  undefined8 uStack_2350;
  char local_2348 [8];
  float local_2340 [12];
  float local_2310 [4];
  float local_2300 [2];
  undefined local_22f8 [16];
  undefined local_22e8 [16];
  undefined local_22d8 [16];
  undefined local_22c8 [16];
  undefined local_22b8 [16];
  char local_22a8 [4];
  float local_22a4;
  longlong local_22a0 [199];
  undefined8 local_1c68;
  undefined8 local_1c60 [4];
  undefined8 local_1c40 [4];
  undefined8 local_1c20 [55];
  undefined1 local_1a68 [176];
  undefined4 auStack_19b8 [2];
  undefined8 auStack_19b0 [793];
  ulonglong local_e8;
  
  local_e8 = DAT_180919500 ^ (ulonglong)auStack_2808;
  pfVar30 = (float *)0x0;
  local_2730 = 0.0;
  puVar27 = auStack_2808;
  local_2798 = param_1;
  local_26f8 = param_2;
  local_2680[0] = param_3;
  local_2598 = (longlong *)CONCAT44(local_2598._4_4_,(float)local_2598);
  uStack_2590 = (longlong *)CONCAT44(uStack_2590._4_4_,(undefined4)uStack_2590);
  if (param_1 != 0) {
    puVar27 = auStack_2808;
    local_2598 = (longlong *)CONCAT44(local_2598._4_4_,(float)local_2598);
    uStack_2590 = (longlong *)CONCAT44(uStack_2590._4_4_,(undefined4)uStack_2590);
    if (0.0 < *param_2) {
      puVar27 = auStack_2808;
      local_2598 = (longlong *)CONCAT44(local_2598._4_4_,(float)local_2598);
      uStack_2590 = (longlong *)CONCAT44(uStack_2590._4_4_,(undefined4)uStack_2590);
      if (0.0 < param_2[1]) {
        plVar10 = (longlong *)FUN_1800ad890(&local_25a0);
        fVar57 = DAT_1808ac1f4;
        dVar39 = (double)*plVar10 / DAT_1808ac9a0;
        local_2668 = dVar39;
        local_2678 = 3.0;
        local_2684 = 0.5;
        pfVar30 = &local_2684;
        if (DAT_1808ac1f4 <= param_3) {
          pfVar30 = local_2680;
        }
        pfVar23 = &local_2678;
        if (param_3 <= DAT_1808ac658) {
          pfVar23 = pfVar30;
        }
        fVar47 = *pfVar23;
        local_265c = 100.0;
        local_2674 = 0.0;
        local_2660 = (float)DAT_18095cf14;
        pfVar30 = &local_2674;
        if (0.0 <= local_2660) {
          pfVar30 = &local_2660;
        }
        pfVar23 = &local_265c;
        if (local_2660 <= DAT_1808acb08) {
          pfVar23 = pfVar30;
        }
        local_26bc = *pfVar23 / DAT_1808acb08;
        local_2780[0] = 100.0;
        local_2780[2] = 0.0;
        local_2780[1] = (float)DAT_18095cf10;
        pfVar30 = local_2780 + 2;
        if (0.0 <= local_2780[1]) {
          pfVar30 = local_2780 + 1;
        }
        pfVar23 = local_2780;
        if (local_2780[1] <= DAT_1808acb08) {
          pfVar23 = pfVar30;
        }
        local_26b4 = *pfVar23 / DAT_1808acb08;
        local_2730 = DAT_1808ac658;
        if (0.0 < local_26bc) {
          local_2730 = DAT_1808ac7ac;
        }
        local_2730 = local_2730 * fVar47;
        fVar48 = fVar47 * DAT_1808ac864;
        if (local_26bc <= 0.0) {
          fVar53 = 0.0;
        }
        else {
          fVar53 = fVar47 * DAT_1808ac658;
        }
        fVar46 = fVar47 * DAT_1808ac980;
        local_278c = fVar48;
        local_2788 = fVar46;
        local_2780[0] = fVar53;
        local_2748 = fVar47;
        local_2784 = (float)FUN_180519080(fVar46 * _DAT_1808ac3d0);
        local_268c = fVar47 + fVar47;
        local_26a4[3] = fVar47 * DAT_1808ac790;
        local_2688 = local_26a4[3] * fVar57;
        fVar52 = local_268c * _DAT_1808ac83c + local_2688;
        local_2670 = DAT_1811079e8;
        if ((DAT_1811079e8 == 0) && (local_2670 = DAT_181107a38, DAT_181107a38 == 0)) {
          local_2670 = *(longlong *)(DAT_180ca0a50 + 0x11f0);
        }
        fVar50 = fVar46 * _DAT_1808ac228;
        local_26c8 = fVar52;
        lVar11 = FUN_180409a40();
        if (lVar11 == 0) {
          local_2780[2] = fVar46 * _DAT_1808ac120;
        }
        else {
          lVar12 = FUN_1804098c0(lVar11,0x41);
          if (lVar12 != 0) {
            fVar50 = *(float *)(lVar12 + 0x14) - *(float *)(lVar12 + 0xc);
          }
          local_2780[2] = local_2788 * _DAT_1808ac2f4 - *(float *)(lVar11 + 0x44);
        }
        if (DAT_180ca006a == '\0') {
          puVar16 = (undefined8 *)FUN_180205b40(&local_1c68);
          local_2468 = (char *)*puVar16;
          uStack_2460 = puVar16[1];
          local_2430 = puVar16[2];
          uStack_2428 = puVar16[3];
          local_2458 = (uint)local_2430;
          uStack_2454 = (undefined4)(local_2430 >> 0x20);
          uStack_2450 = (undefined4)uStack_2428;
          uStack_244c = (undefined4)(uStack_2428 >> 0x20);
          local_2448 = *(undefined4 *)(puVar16 + 4);
          local_2440 = local_2468;
          uStack_2438 = uStack_2460;
          local_2420 = local_2448;
          FUN_18000f890(local_1c60 + 8);
          FUN_1800bcd20(local_1c60 + 4);
        }
        else {
          local_2468 = (char *)0xffffffff00000000;
          uStack_2460 = 0;
          local_2458 = local_2458 & 0xffffff00;
          uStack_2454 = 0;
          uStack_2450 = 0;
          uStack_244c = 0xffffffff;
          local_2448 = 0;
          local_2440 = (char *)0xffffffff00000000;
          uStack_2438 = 0;
          local_2430 = (ulonglong)local_2458;
          uStack_2428 = 0xffffffff00000000;
          local_2420 = 0;
        }
        FUN_180540170(local_2348,0,0x6e0);
        FUN_1800c7b20(local_2348);
        fVar46 = DAT_1808ac34c;
        puVar27 = auStack_2808;
        local_2760 = 0xffffffff;
        uVar28 = 0;
        do {
          if (uVar28 == 0) {
LAB_1800c59ce:
            if (DAT_180ca006a == '\0') {
              pcVar36 = (char *)FUN_1800c4180(&local_1c68,uVar28,&local_2440,SUB84(dVar39,0));
            }
            else {
              pcVar36 = (char *)FUN_1800c4dc0();
            }
            bVar3 = true;
            bVar2 = false;
          }
          else {
            if (uVar28 == 1) {
              cVar18 = DAT_18095cea3;
            }
            else if (uVar28 == 2) {
              cVar18 = DAT_18095cea4;
            }
            else if (uVar28 == 3) {
              cVar18 = DAT_18095cec8;
            }
            else {
              cVar18 = (&DAT_18095ce99)[uVar28];
            }
            if (cVar18 != '\0') goto LAB_1800c59ce;
            local_2518[0] = cVar18;
            uStack_2508 = 0;
            local_2500 = 0;
            local_24f8 = 0xf;
            local_2510 = 0;
            uStack_24e8 = 0;
            local_24e0 = 0;
            local_24d8 = 0xf;
            local_24f0 = 0;
            local_24d0 = cVar18;
            local_24cc = 0;
            local_24c8 = 0;
            uStack_24c0 = 0;
            local_24b8 = 0;
            uStack_24b0 = 0;
            local_24a8 = 0;
            uStack_24a0 = 0;
            local_2498 = 0;
            uStack_2490 = 0;
            local_2488 = 0;
            uStack_2480 = 0;
            local_2478 = 0;
            local_2474 = 0;
            local_2470 = 0;
            pcVar36 = local_2518;
            bVar3 = false;
            bVar2 = true;
          }
          cVar18 = *pcVar36;
          local_2418[0] = cVar18;
          local_2410 = (undefined8 *******)0x0;
          uStack_2408 = 0;
          local_26e0 = *(undefined8 ********)(pcVar36 + 8);
          local_2410 = local_26e0;
          uStack_2408 = *(undefined8 *)(pcVar36 + 0x10);
          local_26e8 = *(float **)(pcVar36 + 0x18);
          local_2400 = local_26e8;
          local_26d8 = *(ulonglong *)(pcVar36 + 0x20);
          local_23f8 = local_26d8;
          pcVar36[0x18] = '\0';
          pcVar36[0x19] = '\0';
          pcVar36[0x1a] = '\0';
          pcVar36[0x1b] = '\0';
          pcVar36[0x1c] = '\0';
          pcVar36[0x1d] = '\0';
          pcVar36[0x1e] = '\0';
          pcVar36[0x1f] = '\0';
          pcVar36[0x20] = '\x0f';
          pcVar36[0x21] = '\0';
          pcVar36[0x22] = '\0';
          pcVar36[0x23] = '\0';
          pcVar36[0x24] = '\0';
          pcVar36[0x25] = '\0';
          pcVar36[0x26] = '\0';
          pcVar36[0x27] = '\0';
          pcVar36[8] = '\0';
          local_23f0 = (undefined8 *******)0x0;
          uStack_23e8 = 0;
          pppppppuVar21 = *(undefined8 ********)(pcVar36 + 0x28);
          local_23f0 = pppppppuVar21;
          uStack_23e8 = *(undefined8 *)(pcVar36 + 0x30);
          local_26f0 = *(float **)(pcVar36 + 0x38);
          local_23e0 = local_26f0;
          uVar13 = *(ulonglong *)(pcVar36 + 0x40);
          local_23d8 = uVar13;
          pcVar36[0x38] = '\0';
          pcVar36[0x39] = '\0';
          pcVar36[0x3a] = '\0';
          pcVar36[0x3b] = '\0';
          pcVar36[0x3c] = '\0';
          pcVar36[0x3d] = '\0';
          pcVar36[0x3e] = '\0';
          pcVar36[0x3f] = '\0';
          pcVar36[0x40] = '\x0f';
          pcVar36[0x41] = '\0';
          pcVar36[0x42] = '\0';
          pcVar36[0x43] = '\0';
          pcVar36[0x44] = '\0';
          pcVar36[0x45] = '\0';
          pcVar36[0x46] = '\0';
          pcVar36[0x47] = '\0';
          pcVar36[0x28] = '\0';
          local_23d0 = pcVar36[0x48];
          local_23cc = *(undefined4 *)(pcVar36 + 0x4c);
          local_23c8 = *(undefined8 *)(pcVar36 + 0x50);
          uStack_23c0 = *(undefined8 *)(pcVar36 + 0x58);
          local_23b8 = *(undefined8 *)(pcVar36 + 0x60);
          uStack_23b0 = *(undefined8 *)(pcVar36 + 0x68);
          local_23a8 = *(undefined8 *)(pcVar36 + 0x70);
          uStack_23a0 = *(undefined8 *)(pcVar36 + 0x78);
          local_2398 = *(undefined8 *)(pcVar36 + 0x80);
          uStack_2390 = *(undefined8 *)(pcVar36 + 0x88);
          local_2388 = *(undefined8 *)(pcVar36 + 0x90);
          uStack_2380 = *(undefined8 *)(pcVar36 + 0x98);
          local_2378 = pcVar36[0xa0];
          local_2377 = pcVar36[0xa1];
          local_2374 = *(undefined4 *)(pcVar36 + 0xa4);
          local_2370 = *(undefined8 *)(pcVar36 + 0xa8);
          if (bVar2) {
            FUN_18000f890(&local_24f0);
            FUN_18000f890(&local_2510);
          }
          if (bVar3) {
            FUN_18000f890(local_1c60 + 4);
            FUN_18000f890(local_1c60);
          }
          uVar24 = (ulonglong)uVar28;
          lVar11 = uVar24 * 0x2c0;
          if (cVar18 != '\0') {
            (&DAT_1809e9ed0)[lVar11] = cVar18;
            if ((undefined8 ********)(&DAT_1809e9ed8 + lVar11) == &local_2410) {
              pfVar30 = local_26f0;
            }
            else {
              pppppppuVar21 = &local_2410;
              if (0xf < local_26d8) {
                pppppppuVar21 = local_26e0;
              }
              FUN_180029840(&DAT_1809e9ed8 + lVar11,pppppppuVar21,local_26e8);
              pfVar30 = local_23e0;
              pppppppuVar21 = local_23f0;
              uVar13 = local_23d8;
            }
            if ((undefined8 ********)(&DAT_1809e9ef8 + lVar11) != &local_23f0) {
              pppppppuVar22 = &local_23f0;
              if (0xf < uVar13) {
                pppppppuVar22 = pppppppuVar21;
              }
              FUN_180029840(&DAT_1809e9ef8 + lVar11,pppppppuVar22,pfVar30);
            }
            (&DAT_1809e9f18)[lVar11] = local_23d0;
            *(undefined4 *)(&DAT_1809e9f1c + lVar11) = local_23cc;
            *(undefined8 *)(&DAT_1809e9f20 + lVar11) = local_23c8;
            *(undefined8 *)(lVar11 + 0x1809e9f28) = uStack_23c0;
            *(undefined8 *)(&DAT_1809e9f30 + lVar11) = local_23b8;
            *(undefined8 *)(lVar11 + 0x1809e9f38) = uStack_23b0;
            *(undefined8 *)(&DAT_1809e9f40 + lVar11) = local_23a8;
            *(undefined8 *)(lVar11 + 0x1809e9f48) = uStack_23a0;
            *(undefined8 *)(&DAT_1809e9f50 + lVar11) = local_2398;
            *(undefined8 *)(lVar11 + 0x1809e9f58) = uStack_2390;
            *(undefined8 *)(&DAT_1809e9f60 + lVar11) = local_2388;
            *(undefined8 *)(lVar11 + 0x1809e9f68) = uStack_2380;
            (&DAT_1809e9f70)[lVar11] = local_2378;
            (&DAT_1809e9f71)[lVar11] = local_2377;
            *(undefined4 *)(&DAT_1809e9f74 + lVar11) = local_2374;
            *(undefined8 *)(&DAT_1809e9f78 + lVar11) = local_2370;
          }
          uVar13 = (ulonglong)uVar28;
          FUN_1800bf8d0(&DAT_1809e9cd0 + uVar24 * 0xb0);
          FUN_1800c79f0(local_2348 + uVar13 * 0xb0,local_2418);
          uVar35 = local_2760;
          if (0.0 < (float)(&DAT_1809e9cd0)[uVar24 * 0xb0]) {
            uVar35 = uVar28;
          }
          local_2760 = uVar35;
          FUN_18000f890(&local_23f0);
          FUN_18000f890(&local_2410);
          uVar28 = uVar28 + 1;
        } while ((int)uVar28 < 10);
        DAT_180ca39d5 = (byte)(uVar35 >> 0x1f) ^ 1;
        local_2368 = _DAT_1808ad9e0;
        uStack_2360 = _UNK_1808ad9e8;
        local_2358 = _DAT_1808ada80;
        uStack_2350 = _UNK_1808ada88;
        local_26c0 = fVar47 * DAT_1808ac934;
        local_2758 = local_26f8[1] * DAT_1808ac21c;
        uVar13 = 0;
        local_27a8 = 0;
        local_26d0 = fVar50 * _DAT_1808ac400;
        local_26cc = local_2784 + local_2784;
        local_26c4 = fVar48 + fVar48;
        local_275c = fVar53 + fVar53;
        local_26b8 = fVar47 * DAT_1808ac918;
        local_26b0 = fVar48 * fVar57;
        local_26a8 = fVar52 * fVar57;
        uVar7 = SUB84(DAT_1808ac448,0);
        uVar51 = (undefined4)((ulonglong)DAT_1808ac448 >> 0x20);
        fVar47 = local_2784;
        uVar6 = DAT_1808acd08;
        uVar28 = _DAT_1808ade90;
        do {
          uVar37 = SUB84(dVar39,0);
          lVar12 = uVar13 * 0x2c0;
          lVar11 = uVar13 * 0xb0;
          if (local_2348[lVar11] == '\0') {
            puVar32 = &DAT_1809e9f20 + lVar12;
            puVar33 = &DAT_1809e9f30 + lVar12;
            puVar34 = &DAT_1809e9f40 + lVar12;
            puVar26 = &DAT_1809e9f50 + lVar12;
            puVar29 = &DAT_1809e9f60 + lVar12;
            local_2770 = (float *)(&DAT_1809e9f18 + lVar12);
            pfVar23 = (float *)(&DAT_1809e9f08 + lVar12);
            pcVar36 = &DAT_1809e9f70 + lVar12;
            plVar10 = (longlong *)(&DAT_1809e9f78 + lVar12);
            local_2708 = (float *)(&DAT_1809e9ed8 + lVar12);
            pfVar30 = (float *)(&DAT_1809e9ef0 + lVar12);
            local_2738 = (float *)(&DAT_1809e9ef8 + lVar12);
            local_2768 = (float *)(&DAT_1809e9f10 + lVar12);
            local_25b8 = &DAT_1809e9f71 + lVar12;
            local_25b0 = (float *)(&DAT_1809e9f74 + lVar12);
            local_2640 = &DAT_1809e9f71 + lVar12;
            local_25d8 = (float *)(&DAT_1809e9f08 + lVar12);
            local_25d0 = (float *)(&DAT_1809e9ef8 + lVar12);
            local_26f0 = (float *)(&DAT_1809e9f18 + lVar12);
            local_26e8 = (float *)(&DAT_1809e9f1c + lVar12);
            local_2710 = pfVar23;
          }
          else {
            puVar32 = local_22f8 + lVar11;
            puVar33 = local_22e8 + lVar11;
            puVar34 = local_22d8 + lVar11;
            puVar26 = local_22c8 + lVar11;
            puVar29 = local_22b8 + lVar11;
            local_2770 = local_2300 + uVar13 * 0x2c;
            pcVar36 = local_22a8 + lVar11;
            plVar10 = local_22a0 + uVar13 * 0x16;
            local_2708 = local_2340 + uVar13 * 0x2c;
            pfVar30 = local_2340 + (uVar13 * 0x16 + 3) * 2;
            local_2738 = local_2340 + (uVar13 * 0x16 + 4) * 2;
            local_2768 = local_2310 + uVar13 * 0x2c + 2;
            local_25b8 = local_22a8 + lVar11 + 1;
            local_25b0 = (float *)(local_22a8 + lVar11 + 4);
            local_2640 = local_22a8 + lVar11 + 1;
            local_25d8 = local_2310 + uVar13 * 0x2c;
            local_25d0 = local_2340 + (uVar13 * 0x16 + 4) * 2;
            local_26f0 = local_2300 + uVar13 * 0x2c;
            pfVar23 = local_2300 + uVar13 * 0x2c + 1;
            local_2710 = local_2310 + uVar13 * 0x2c;
            local_26e8 = pfVar23;
          }
          pfVar31 = (float *)(&DAT_1809e9cf0 + uVar13 * 0xb0);
          local_2740 = uVar13;
          if ((int)local_27a8 < (int)local_2760) {
            local_2658[2] = 1.0;
            local_2658[0] = 0.0;
            local_2658[1] = ((float)(&DAT_1809e9cd0)[uVar13 * 0xb0] - DAT_1808ac27c) * DAT_1808ac710
            ;
            pfVar19 = local_2658;
            if (0.0 <= local_2658[1]) {
              pfVar19 = local_2658 + 1;
            }
            pfVar14 = local_2658 + 2;
            if (local_2658[1] <= fVar46) {
              pfVar14 = pfVar19;
            }
            fVar48 = *pfVar14;
            uVar54 = 0;
            uVar55 = 0;
            uVar56 = 0;
            local_2790 = fVar48;
            FUN_1800bf8d0(pfVar31,pfVar23,uVar37,uVar7);
            (&DAT_1809e9cf8)[uVar13 * 0xb0] = fVar48;
            (&DAT_1809e9cf4)[uVar13 * 0xb0] = fVar48;
            *pfVar31 = fVar48;
          }
          else {
            uVar38 = FUN_1800bf8d0(pfVar31,pfVar23,uVar37,uVar7);
            fVar48 = (float)uVar38;
            uVar54 = (undefined4)((ulonglong)uVar38 >> 0x20);
            uVar55 = (undefined4)extraout_XMM0_Qb;
            uVar56 = (undefined4)((ulonglong)extraout_XMM0_Qb >> 0x20);
            local_2790 = fVar48;
          }
          if ((0.0 < (float)(&DAT_1809e9cd0)[uVar13 * 0xb0]) || (0.0 < fVar48)) {
            local_26e0 = (undefined8 *******)(local_2740 << 5);
            local_2558 = FUN_1800bf9b0(&DAT_1809e9d90 + lVar12,puVar32,uVar37);
            local_2618 = FUN_1800bf9b0(&DAT_1809e9dd0 + lVar12,puVar33,uVar37);
            local_2550 = FUN_1800bf9b0(&DAT_1809e9e10 + lVar12,puVar34,uVar37);
            local_25a0 = FUN_1800bf9b0(&DAT_1809e9e50 + lVar12,puVar26,uVar37);
            local_26d8 = FUN_1800bf9b0(&DAT_1809e9e90 + lVar12,puVar29,uVar37);
            local_26ac = (float)FUN_1800bf8d0(&DAT_1809e9d50 + lVar12);
            pfVar23 = local_2710;
            uVar37 = FUN_1800bf8d0(&DAT_1809e9d70 + lVar12);
            local_2710 = (float *)CONCAT44(local_2710._4_4_,uVar37);
            if (local_27a8 == 1) {
              _Str = "panorama/images/hud/teamcounter/teamcounter_bomb-planted.vsvg_c";
              if (*pcVar36 != '\0') {
                _Str = "panorama/images/hud/teamcounter/teamcounter_bomb-planted-defused.vsvg_c";
              }
            }
            else {
              _Str = (char *)*plVar10;
              if ((undefined8 ******)_Str == (undefined8 ******)0x0) {
                _Str = (char *)local_26e0[0x300b9840];
              }
              fVar47 = local_26d0 * *(float *)(&DAT_1805cc208 + local_2740 * 0x20);
            }
            local_2568 = ZEXT416((uint)fVar47);
            local_2440 = (char *)0x0;
            uStack_2438 = 0;
            local_2430 = 0;
            uStack_2428 = 0;
            sVar15 = strlen(_Str);
            FUN_1800133a0(&local_2440,_Str,sVar15);
            local_2754 = fVar47 + fVar47;
            puVar16 = (undefined8 *)
                      FUN_18039f610(&local_2598,&local_2440,(int)(local_2754 + fVar57));
            pfVar31 = (float *)*puVar16;
            local_27a0 = pfVar31;
            iVar8 = *(int *)(puVar16 + 1);
            iVar9 = *(int *)((longlong)puVar16 + 0xc);
            if (0xf < uStack_2428) {
              uVar24 = uStack_2428 + 1;
              pcVar36 = local_2440;
              if (uVar24 < 0x1000) {
LAB_1800c6353:
                thunk_FUN_1803d64e0(pcVar36,uVar24);
                goto LAB_1800c6358;
              }
              pcVar36 = *(char **)(local_2440 + -8);
              if (local_2440 + (-8 - (longlong)pcVar36) < (char *)0x20) {
                uVar24 = uStack_2428 + 0x28;
                goto LAB_1800c6353;
              }
LAB_1800c74b3:
              pcVar1 = (code *)swi(0x29);
              (*pcVar1)(5);
              puVar27 = auStack_2800;
              goto LAB_1800c74ba;
            }
LAB_1800c6358:
            uVar35 = local_27a8;
            if (((pfVar31 == (float *)0x0) || (iVar8 < 1)) || (iVar9 < 1)) {
              fVar57 = 0.0;
            }
            else {
              fVar57 = ((float)iVar8 / (float)iVar9) * fVar47;
            }
            local_2598._0_4_ = fVar57;
            local_2598._4_4_ = 0;
            uStack_2590._0_4_ = 0;
            uStack_2590._4_4_ = 0;
            uVar24 = (ulonglong)local_27a8;
            if (local_27a8 == 1) {
              fVar53 = fVar57;
            }
            else {
              fVar53 = (float)FUN_18053fc00((float)((DAT_1808ac1f0 ^ (uint)fVar57) & uVar28 ^
                                                   (uint)fVar57) + fVar57);
              fVar47 = (float)FUN_18053fc00((float)((DAT_1808ac1f0 ^ (uint)fVar47) & uVar28 ^
                                                   (uint)fVar47) + fVar47);
            }
            local_27e0 = local_2708;
            if (0xf < *(ulonglong *)pfVar30) {
              local_27e0 = *(float **)local_2708;
            }
            local_27b8 = 0;
            local_27c8 = 0;
            local_27d0 = 0;
            local_27d8 = 0;
            local_27e8._0_4_ = DAT_1808acda0;
            FUN_18040a2f0(local_2548,local_2670,local_2788,uVar6);
            fVar52 = (float)FUN_18053f0d0(local_2548[0] + DAT_1808ac2f0);
            if (*(longlong *)pfVar23 == 0) {
              fVar50 = 0.0;
            }
            else {
              local_27e0 = local_2738;
              if (0xf < *(ulonglong *)local_2768) {
                local_27e0 = *(float **)local_2738;
              }
              local_27b8 = 0;
              local_27c8 = 0;
              local_27d0 = 0;
              local_27d8 = 0;
              local_27e8._0_4_ = DAT_1808acda0;
              FUN_18040a2f0(local_2540,local_2670,local_2788,uVar6);
              fVar50 = (float)FUN_18053f0d0(local_2540[0] + DAT_1808ac2f0);
            }
            uVar25 = local_2740;
            pfVar30 = local_27a0;
            if (fVar50 <= fVar52) {
              fVar50 = fVar52;
            }
            local_2738 = (float *)CONCAT44(local_2738._4_4_,fVar50);
            if (*(longlong *)pfVar23 == 0) {
              fVar52 = local_2784;
            }
            else {
              fVar52 = local_26cc;
            }
            local_2780[1] = fVar52;
            if (((local_27a0 == (float *)0x0) || (iVar8 < 1)) || (iVar9 < 1)) {
              fVar53 = 0.0;
              fVar47 = 0.0;
              iVar5 = 1;
            }
            else {
              fVar53 = local_278c + fVar53 + 0.0;
              if (fVar47 <= 0.0) {
                fVar47 = 0.0;
              }
              iVar5 = 2;
            }
            fVar53 = fVar53 + fVar50;
            fVar50 = fVar52;
            if (fVar52 <= fVar47) {
              fVar50 = fVar47;
            }
            if (*(char *)local_2770 == '\0') {
              fVar47 = fVar50;
            }
            else {
              if (iVar5 != 0) {
                fVar53 = local_278c + fVar53;
              }
              fVar53 = fVar53 + local_26c8;
              fVar47 = local_26c8;
              if (local_26c8 <= fVar50) {
                fVar47 = fVar50;
              }
            }
            fVar53 = local_26c4 + fVar53;
            if ((&DAT_1809e9d28)[lVar12] == '\0') {
              (&DAT_1809e9d28)[lVar12] = 1;
              *(float *)(&DAT_1809e9d18 + lVar12) = fVar53;
              *(float *)(&DAT_1809e9d14 + lVar12) = fVar53;
              *(double *)(&DAT_1809e9d20 + lVar12) = dVar39;
              uVar24 = local_2740;
            }
            else {
              fVar50 = *(float *)(&DAT_1809e9d18 + lVar12);
              if (fVar53 != *(float *)(&DAT_1809e9d18 + lVar12)) {
                *(undefined4 *)(&DAT_1809e9d14 + lVar12) = *(undefined4 *)(&DAT_1809e9d10 + lVar12);
                *(float *)(&DAT_1809e9d18 + lVar12) = fVar53;
                *(double *)(&DAT_1809e9d20 + lVar12) = dVar39;
                fVar50 = fVar53;
              }
              fVar53 = (float)((dVar39 - *(double *)(&DAT_1809e9d20 + (ulonglong)uVar35 * 0x2c0)) /
                              (double)CONCAT44(uVar51,uVar7));
              local_2768 = (float *)CONCAT44(local_2768._4_4_,fVar53);
              local_2770 = (float *)CONCAT44(local_2770._4_4_,0x3f800000);
              local_27a0 = (float *)((ulonglong)local_27a0 & 0xffffffff00000000);
              ppfVar20 = &local_27a0;
              if (0.0 <= fVar53) {
                ppfVar20 = &local_2768;
              }
              ppfVar17 = &local_2770;
              if (fVar53 <= fVar46) {
                ppfVar17 = ppfVar20;
              }
              fVar53 = fVar46 - *(float *)ppfVar17;
              fVar53 = (fVar46 - fVar53 * fVar53 * fVar53) *
                       (fVar50 - *(float *)(&DAT_1809e9d14 + uVar24 * 0x2c0)) +
                       *(float *)(&DAT_1809e9d14 + uVar24 * 0x2c0);
            }
            *(float *)(&DAT_1809e9d10 + uVar24 * 0x2c0) = fVar53;
            fVar53 = (float)FUN_18053fc00();
            fVar47 = local_275c + fVar47;
            if ((&DAT_1809e9d48)[lVar12] == '\0') {
              (&DAT_1809e9d48)[lVar12] = 1;
              *(float *)(&DAT_1809e9d38 + lVar12) = fVar47;
              *(float *)(&DAT_1809e9d34 + lVar12) = fVar47;
              *(double *)(&DAT_1809e9d40 + lVar12) = dVar39;
            }
            else {
              if (fVar47 == *(float *)(&DAT_1809e9d38 + lVar12)) {
                fVar47 = *(float *)(&DAT_1809e9d38 + lVar12);
              }
              else {
                *(undefined4 *)(&DAT_1809e9d34 + lVar12) = *(undefined4 *)(&DAT_1809e9d30 + lVar12);
                *(float *)(&DAT_1809e9d38 + lVar12) = fVar47;
                *(double *)(&DAT_1809e9d40 + lVar12) = dVar39;
              }
              uVar25 = (ulonglong)local_27a8;
              fVar50 = (float)((dVar39 - *(double *)(&DAT_1809e9d40 + (ulonglong)local_27a8 * 0x2c0)
                               ) / DAT_1808ac448);
              local_2768 = (float *)CONCAT44(local_2768._4_4_,fVar50);
              local_27a0 = (float *)CONCAT44(local_27a0._4_4_,0x3f800000);
              local_2770 = (float *)((ulonglong)local_2770 & 0xffffffff00000000);
              ppfVar20 = &local_2770;
              if (0.0 <= fVar50) {
                ppfVar20 = &local_2768;
              }
              ppfVar17 = &local_27a0;
              if (fVar50 <= fVar46) {
                ppfVar17 = ppfVar20;
              }
              fVar50 = fVar46 - *(float *)ppfVar17;
              fVar47 = (fVar46 - fVar50 * fVar50 * fVar50) *
                       (fVar47 - *(float *)(&DAT_1809e9d34 + uVar25 * 0x2c0)) +
                       *(float *)(&DAT_1809e9d34 + uVar25 * 0x2c0);
            }
            *(float *)(&DAT_1809e9d30 + uVar25 * 0x2c0) = fVar47;
            uVar38 = FUN_18053fc00();
            fVar47 = (float)uVar38;
            auVar40._4_4_ = (undefined4)((ulonglong)uVar38 >> 0x20);
            auVar40._8_4_ = (undefined4)extraout_XMM0_Qb_00;
            auVar40._12_4_ = (undefined4)((ulonglong)extraout_XMM0_Qb_00 >> 0x20);
            fVar46 = (float)FUN_18053f0d0();
            local_2750 = (float)FUN_18053f0d0();
            local_2728 = local_2750 + fVar53;
            local_2724 = fVar46 + fVar47;
            local_274c = fVar46;
            if (local_26bc <= 0.0) {
              fVar53 = DAT_1808ac1f4;
            }
            else {
              uVar6 = FUN_180089560(&local_2368);
              uVar7 = FUN_180089560(&local_2358);
              fVar53 = DAT_1808ac1f4;
              fVar46 = fVar47 * DAT_1808ac1f4;
              if (local_26b8 <= fVar47 * DAT_1808ac1f4) {
                fVar46 = local_26b8;
              }
              local_27c8 = CONCAT44(local_27c8._4_4_,DAT_1808ac864);
              local_27d0 = CONCAT44(local_27d0._4_4_,uVar6);
              local_27d8 = CONCAT44(local_27d8._4_4_,uVar7);
              local_27e0 = (float *)CONCAT44(local_27e0._4_4_,fVar48);
              local_27e8._0_4_ = local_2748;
              FUN_1800be550(local_2798,&local_2750,&local_2728,fVar46);
            }
            auVar44._4_4_ = uVar54;
            auVar44._0_4_ = fVar48;
            auVar44._8_4_ = uVar55;
            auVar44._12_4_ = uVar56;
            auVar45._4_12_ = auVar44._4_12_;
            auVar45._0_4_ = fVar48 * local_26b4;
            uVar6 = FUN_180089560(local_2558,auVar45._0_8_);
            local_27e0 = (float *)CONCAT44(local_27e0._4_4_,local_2748);
            local_27e8 = (float *)CONCAT44(local_27e8._4_4_,uVar6);
            FUN_1800be8a0(local_2798);
            fVar48 = local_274c;
            fVar49 = local_274c + local_2780[0];
            local_27a0 = (float *)CONCAT44(local_27a0._4_4_,fVar49);
            fVar58 = fVar47 - local_275c;
            local_25c0 = (float)FUN_18053f0d0();
            local_25c8 = local_2728 - local_25c0;
            local_25c4 = local_2724;
            local_25c0 = local_25c0 + local_2750;
            local_25bc = fVar48;
            FUN_1803fc200(local_2798,&local_25c0,&local_25c8,1);
            fVar48 = DAT_1808ac1f4;
            fVar46 = local_2750 + local_278c;
            bVar2 = false;
            fVar50 = fVar46;
            if (((pfVar30 != (float *)0x0) && (0 < iVar8)) && (0 < iVar9)) {
              fVar50 = fVar46 + fVar57;
              uVar6 = local_2568._0_4_;
              if (local_27a8 == 1) {
                auVar40._0_4_ = fVar58;
                auVar41._4_12_ = auVar40._4_12_;
                auVar41._0_4_ = (fVar58 - (float)local_2568._0_4_) * DAT_1808ac1f4 + fVar49;
                fVar57 = (float)FUN_180519080(auVar41._0_8_);
                fVar53 = fVar57 + (float)uVar6;
                cVar18 = *local_25b8;
                local_271c = fVar53;
                local_2714 = fVar57;
                if (cVar18 == '\0') {
                  fVar52 = 0.0;
                  fVar48 = DAT_1808ac34c;
                  local_2720 = fVar50;
                  local_2718 = fVar46;
LAB_1800c6b6a:
                  *(undefined4 *)(&DAT_1809e9f80 + lVar12) = 0xffffffff;
                }
                else {
                  fVar52 = *local_25b0;
                  if (fVar52 <= DAT_1808acaa8) {
                    if (fVar52 <= DAT_1808ac9e4) {
                      iVar8 = -1;
                      if (0.0 < fVar52) {
                        iVar8 = 2;
                      }
                    }
                    else {
                      iVar8 = 1;
                    }
                  }
                  else {
                    iVar8 = 0;
                  }
                  if (iVar8 != *(int *)(&DAT_1809e9f80 + lVar12)) {
                    *(int *)(&DAT_1809e9f80 + lVar12) = iVar8;
                    *(double *)(&DAT_1809e9f88 + lVar12) = local_2668;
                    cVar18 = *local_25b8;
                  }
                  if (iVar8 < 0) {
                    fVar52 = 0.0;
                    fVar48 = DAT_1808ac34c;
                    local_2720 = fVar50;
                    local_2718 = fVar46;
                  }
                  else {
                    local_2578[0] = 0.8;
                    local_2578[1] = 0.5;
                    local_2578[2] = 0.3;
                    fVar52 = local_2578[iVar8];
                    local_2720 = fVar50;
                    local_2718 = fVar46;
                    dVar39 = (double)FUN_18051f830(local_2668 - dRam00000001809ea248,(double)fVar52)
                    ;
                    fVar52 = (float)dVar39 / fVar52;
                    if (fVar48 <= fVar52) {
                      fVar52 = fVar52 - fVar48;
                      fVar48 = fVar52 + fVar52;
                      FUN_1800bf1f0();
                      fVar52 = DAT_1808ac34c - fVar48;
                      fVar48 = fVar48 * DAT_1808ac118 + DAT_1808ac3c4;
                    }
                    else {
                      fVar52 = fVar52 + fVar52;
                      FUN_1800bf1f0();
                      fVar48 = fVar52 * DAT_1808ac118 + DAT_1808ac34c;
                    }
                  }
                  if (cVar18 == '\0') goto LAB_1800c6b6a;
                }
                lVar12 = local_2618;
                uVar28 = FUN_180089560(local_2618);
                lVar11 = local_2798;
                local_25a8[0] = 1.0;
                local_25a8[1] = 1.0;
                local_264c = 0;
                if ((uVar28 & 0xff000000) != 0) {
                  if ((pfVar30 == *(float **)(local_2798 + 0x78)) &&
                     (*(longlong *)(local_2798 + 0x70) == 0)) {
                    bVar2 = false;
                  }
                  else {
                    if (*(int *)(local_2798 + 0xb0) == *(int *)(local_2798 + 0xb4)) {
                      FUN_1803f7030(local_2798 + 0xb0);
                    }
                    iVar8 = *(int *)(lVar11 + 0xb0);
                    lVar4 = *(longlong *)(lVar11 + 0xb8);
                    *(undefined8 *)(lVar4 + (longlong)iVar8 * 0x10) = 0;
                    *(float **)(lVar4 + 8 + (longlong)iVar8 * 0x10) = pfVar30;
                    *(int *)(lVar11 + 0xb0) = *(int *)(lVar11 + 0xb0) + 1;
                    *(undefined8 *)(lVar11 + 0x70) = 0;
                    *(float **)(lVar11 + 0x78) = pfVar30;
                    FUN_1803fc0a0(lVar11);
                    bVar2 = true;
                  }
                  FUN_1803fc3a0(lVar11,6,4);
                  local_27e0 = (float *)CONCAT44(local_27e0._4_4_,uVar28);
                  local_27e8 = local_25a8;
                  FUN_1803fc4a0(lVar11,&local_2718,&local_2720,&local_264c);
                  if (bVar2) {
                    FUN_1803fc340(lVar11);
                  }
                }
                if ((*local_2640 != '\0') && (0.0 < fVar52)) {
                  local_2468 = (char *)0x0;
                  uStack_2460 = 0;
                  local_2468 = (char *)FUN_18000fb70(0x50);
                  uVar38 = s_panorama_images_hud_teamcounter__1806eac90._8_8_;
                  local_2458 = 0x45;
                  uStack_2454 = 0;
                  uStack_2450 = 0x4f;
                  uStack_244c = 0;
                  *(undefined8 *)local_2468 = s_panorama_images_hud_teamcounter__1806eac90._0_8_;
                  *(undefined8 *)(local_2468 + 8) = uVar38;
                  uVar38 = s_panorama_images_hud_teamcounter__1806eac90._24_8_;
                  *(undefined8 *)(local_2468 + 0x10) =
                       s_panorama_images_hud_teamcounter__1806eac90._16_8_;
                  *(undefined8 *)(local_2468 + 0x18) = uVar38;
                  uVar38 = s_panorama_images_hud_teamcounter__1806eac90._40_8_;
                  *(undefined8 *)(local_2468 + 0x20) =
                       s_panorama_images_hud_teamcounter__1806eac90._32_8_;
                  *(undefined8 *)(local_2468 + 0x28) = uVar38;
                  uVar38 = CONCAT35(s_panorama_images_hud_teamcounter__1806eac90._61_3_,
                                    s_panorama_images_hud_teamcounter__1806eac90._56_5_);
                  *(undefined8 *)(local_2468 + 0x30) =
                       s_panorama_images_hud_teamcounter__1806eac90._48_8_;
                  *(undefined8 *)(local_2468 + 0x38) = uVar38;
                  *(ulonglong *)(local_2468 + 0x3d) =
                       CONCAT53(s_panorama_images_hud_teamcounter__1806eac90._64_5_,
                                s_panorama_images_hud_teamcounter__1806eac90._61_3_);
                  local_2468[0x45] = '\0';
                  plVar10 = (longlong *)
                            FUN_18039f610(&local_2440,&local_2468,
                                          (int)(local_2754 * DAT_1808ac40c + DAT_1808ac1f4));
                  lVar11 = *plVar10;
                  lVar4 = plVar10[1];
                  iVar8 = *(int *)((longlong)plVar10 + 0xc);
                  uVar24 = CONCAT44(uStack_244c,uStack_2450);
                  if (0xf < uVar24) {
                    uVar25 = uVar24 + 1;
                    pcVar36 = local_2468;
                    if (0xfff < uVar25) {
                      pcVar36 = *(char **)(local_2468 + -8);
                      if ((char *)0x1f < local_2468 + (-8 - (longlong)pcVar36)) goto LAB_1800c74b3;
                      uVar25 = uVar24 + 0x28;
                    }
                    thunk_FUN_1803d64e0(pcVar36,uVar25);
                  }
                  if (((lVar11 != 0) && (0 < (int)lVar4)) && (0 < iVar8)) {
                    local_261c = (fVar53 + fVar57) * DAT_1808ac1f4;
                    local_2620 = (fVar50 + fVar46) * DAT_1808ac1f4;
                    fVar57 = (float)local_2568._0_4_ * DAT_1808ac1f4 * fVar48;
                    fVar48 = (float)local_2598 * DAT_1808ac1f4 * fVar48;
                    local_2638 = 0x3f800000;
                    local_2634 = 0x3f800000;
                    local_2630[0] = 0.0;
                    local_2630[1] = 0.0;
                    local_2630[2] = fVar48 + local_2620;
                    local_2624 = fVar57 + local_261c;
                    local_2620 = local_2620 - fVar48;
                    local_261c = local_261c - fVar57;
                    local_2538 = 0;
                    local_2530 = lVar11;
                    uVar6 = FUN_180089560(lVar12);
                    local_27d8 = CONCAT44(local_27d8._4_4_,uVar6);
                    local_27e0 = (float *)&local_2638;
                    local_27e8 = local_2630;
                    FUN_1803fea90(local_2798,&local_2538,&local_2620,local_2630 + 2);
                  }
                }
                fVar49 = local_27a0._0_4_;
              }
              else {
                fVar57 = ((*(float *)(&DAT_1809e9d30 + uVar25 * 0x2c0) - local_275c) -
                         (float)local_2568._0_4_) * fVar53;
                local_2714 = (float)FUN_18053fc00((float)((DAT_1808ac1f0 ^ (uint)fVar57) &
                                                          _DAT_1808ade90 ^ (uint)fVar57) + fVar57);
                lVar11 = local_2618;
                local_2714 = local_2714 + fVar49;
                local_271c = local_2714 + (float)uVar6;
                local_2768 = (float *)CONCAT44(local_2768._4_4_,0x3f800000);
                local_2754 = 0.0;
                fVar57 = local_2790 * *(float *)(local_2618 + 0xc) * DAT_1808ac254;
                local_2770 = (float *)CONCAT44(local_2770._4_4_,fVar57);
                local_2610 = 0x3f800000;
                local_260c = 0x3f800000;
                local_2608[0] = 0.0;
                local_2608[1] = 0.0;
                local_2608[2] = fVar50 + DAT_1808ac34c;
                local_25fc = local_271c + DAT_1808ac34c;
                local_25f8 = fVar46 + DAT_1808ac34c;
                local_25f4 = local_2714 + DAT_1808ac34c;
                local_2528 = 0;
                local_2520 = pfVar30;
                ppfVar20 = (float **)&local_2754;
                if (0.0 <= fVar57) {
                  ppfVar20 = &local_2770;
                }
                ppfVar17 = &local_2768;
                if (fVar57 <= DAT_1808ac34c) {
                  ppfVar17 = ppfVar20;
                }
                local_27d8 = CONCAT44(local_27d8._4_4_,
                                      (int)(*(float *)ppfVar17 * DAT_1808acb94 + fVar53) << 0x18);
                local_27e0 = (float *)&local_2610;
                local_27e8 = local_2608;
                local_2720 = fVar50;
                local_2718 = fVar46;
                FUN_1803fea90(local_2798,&local_2528,&local_25f8,local_2608 + 2);
                uVar28 = FUN_180089560(lVar11);
                lVar11 = local_2798;
                local_25f0[0] = 1.0;
                local_25f0[1] = 1.0;
                local_25e8 = 0;
                if ((uVar28 & 0xff000000) != 0) {
                  if ((pfVar30 == *(float **)(local_2798 + 0x78)) &&
                     (*(longlong *)(local_2798 + 0x70) == 0)) {
                    bVar2 = false;
                  }
                  else {
                    if (*(int *)(local_2798 + 0xb0) == *(int *)(local_2798 + 0xb4)) {
                      FUN_1803f7030(local_2798 + 0xb0);
                    }
                    iVar8 = *(int *)(lVar11 + 0xb0);
                    lVar12 = *(longlong *)(lVar11 + 0xb8);
                    *(undefined8 *)(lVar12 + (longlong)iVar8 * 0x10) = 0;
                    *(float **)(lVar12 + 8 + (longlong)iVar8 * 0x10) = pfVar30;
                    *(int *)(lVar11 + 0xb0) = *(int *)(lVar11 + 0xb0) + 1;
                    *(undefined8 *)(lVar11 + 0x70) = 0;
                    *(float **)(lVar11 + 0x78) = pfVar30;
                    FUN_1803fc0a0(lVar11);
                    bVar2 = true;
                  }
                  FUN_1803fc3a0(lVar11,6,4);
                  local_27e0 = (float *)CONCAT44(local_27e0._4_4_,uVar28);
                  local_27e8 = local_25f0;
                  FUN_1803fc4a0(lVar11,&local_2718,&local_2720,&local_25e8);
                  if (bVar2) {
                    FUN_1803fc340(lVar11);
                  }
                }
              }
              bVar2 = true;
              fVar52 = local_2780[1];
            }
            fVar48 = local_278c;
            fVar57 = DAT_1808ac1f4;
            if (bVar2) {
              fVar50 = fVar50 + local_278c;
            }
            auVar42._4_4_ = auVar40._4_4_;
            auVar42._0_4_ = fVar58;
            auVar42._8_4_ = auVar40._8_4_;
            auVar42._12_4_ = auVar40._12_4_;
            auVar43._4_12_ = auVar42._4_12_;
            auVar43._0_4_ = (fVar58 - fVar52) * DAT_1808ac1f4 + fVar49 + local_2780[2];
            fVar46 = (float)FUN_180519080(auVar43._0_8_);
            fVar53 = local_2790;
            local_2598 = &local_2798;
            uStack_2590 = &local_2670;
            local_2588 = &local_2788;
            local_27e8 = local_2708;
            local_25e0 = fVar50;
            local_25dc = fVar46;
            FUN_1800c77c0(&local_2598,&local_25e0,local_2550,local_2790);
            if (*(longlong *)local_25d8 != 0) {
              local_26f8 = (float *)CONCAT44(fVar46 + local_2784,fVar50);
              local_27e8 = local_25d0;
              FUN_1800c77c0(&local_2598,&local_26f8,local_25a0,local_2710._0_4_ * fVar53);
            }
            fVar52 = local_26a4[3];
            fVar46 = DAT_1808ac34c;
            if ((*(char *)local_26f0 != '\0') && (0.0 < local_26ac)) {
              local_2700 = local_26a8 + fVar48 + fVar50 + local_2738._0_4_;
              local_26fc = fVar58 * fVar57 + fVar49;
              fVar48 = local_26a8 - local_2688;
              local_26a4[2] = 1.0;
              local_26a4[0] = 0.0;
              local_26a4[1] = local_26ac * fVar53 * _DAT_1808ac1f8;
              pfVar30 = local_26a4;
              if (0.0 <= local_26a4[1]) {
                pfVar30 = local_26a4 + 1;
              }
              pfVar23 = local_26a4 + 2;
              if (local_26a4[1] <= DAT_1808ac34c) {
                pfVar23 = pfVar30;
              }
              local_27d8 = CONCAT44(local_27d8._4_4_,
                                    (int)(*pfVar23 * DAT_1808acb94 + fVar57) << 0x18) | 0xa0a0a;
              local_27e0 = (float *)CONCAT44(local_27e0._4_4_,local_26a4[3]);
              local_27e8 = (float *)CONCAT44(local_27e8._4_4_,DAT_1808ac7d0);
              FUN_1800c5390(local_2798,&local_2700,fVar48,0);
              local_2690 = 1.0;
              local_2694 = 0.0;
              pfVar30 = &local_2694;
              if (0.0 <= *local_26e8) {
                pfVar30 = local_26e8;
              }
              pfVar23 = &local_2690;
              if (*local_26e8 <= fVar46) {
                pfVar23 = pfVar30;
              }
              fVar53 = (*pfVar23 + *pfVar23) * DAT_1808ac680;
              if ((0.0 < fVar53) && (fVar52 = fVar52 - local_268c, 0.0 < fVar52)) {
                if (*(char *)(local_26e0 + 0x300b9843) == '\0') {
                  uVar6 = FUN_180089560(local_26d8);
                  local_27d8 = CONCAT44(local_27d8._4_4_,uVar6);
                  local_27e8 = (float *)CONCAT44(local_27e8._4_4_,fVar53 - DAT_1808ac440);
                  fVar53 = DAT_1808acdb0;
                }
                else {
                  uVar6 = FUN_180089560(local_26d8);
                  local_27d8 = CONCAT44(local_27d8._4_4_,uVar6);
                  local_27e8 = (float *)CONCAT44(local_27e8._4_4_,fVar53 * fVar57 + DAT_1808ac440);
                  fVar53 = DAT_1808ac440 - fVar53 * fVar57;
                }
                local_27e0 = (float *)CONCAT44(local_27e0._4_4_,fVar52);
                FUN_1800c5390(local_2798,&local_2700,fVar48,fVar53);
              }
            }
            iVar8 = *(int *)(local_2798 + 0xa0);
            iVar9 = iVar8 + -1;
            *(int *)(local_2798 + 0xa0) = iVar9;
            if (iVar9 == 0) {
              puVar16 = (undefined8 *)(*(longlong *)(local_2798 + 0x38) + 0x34);
            }
            else {
              puVar16 = (undefined8 *)
                        ((longlong)(iVar8 + -2) * 0x10 + *(longlong *)(local_2798 + 0xa8));
            }
            uVar38 = puVar16[1];
            *(undefined8 *)(local_2798 + 0x60) = *puVar16;
            *(undefined8 *)(local_2798 + 0x68) = uVar38;
            FUN_1803fbff0();
            local_2758 = local_2758 + (fVar47 + local_2730) * (float)(&DAT_1809e9cd0)[uVar13 * 0xb0]
            ;
            uVar7 = SUB84(DAT_1808ac448,0);
            uVar51 = (undefined4)((ulonglong)DAT_1808ac448 >> 0x20);
            fVar47 = local_2784;
            uVar6 = DAT_1808acd08;
            dVar39 = local_2668;
            uVar28 = _DAT_1808ade90;
          }
          else {
            (&DAT_1809e9d48)[lVar12] = 0;
            (&DAT_1809e9d28)[lVar12] = 0;
          }
          local_27a8 = local_27a8 + 1;
          uVar13 = (ulonglong)local_27a8;
        } while ((int)local_27a8 < 10);
        FUN_1804eced0(local_2348,0xb0,10,FUN_18009f1c0);
        goto LAB_1800c775a;
      }
    }
  }
LAB_1800c74ba:
  *(undefined8 *)(puVar27 + -8) = 0x1800c74ce;
  FUN_180540170(&local_1c68,0,0x1b80);
  *(undefined8 *)(puVar27 + -8) = 0x1800c74da;
  FUN_1800c7ad0(&local_1c68);
  do {
    lVar11 = (longlong)pfVar30 * 0x2c0;
    uVar38 = local_1c60[(longlong)pfVar30 * 0x58];
    *(longlong *)(&DAT_1809e9cd0 + (longlong)pfVar30 * 0xb0) =
         local_22a0[(longlong)pfVar30 * 0x58 + 199];
    *(undefined8 *)(lVar11 + 0x1809e9cd8) = uVar38;
    uVar38 = local_1c60[(longlong)pfVar30 * 0x58 + 2];
    *(undefined8 *)(&DAT_1809e9ce0 + lVar11) = local_1c60[(longlong)pfVar30 * 0x58 + 1];
    *(undefined8 *)(lVar11 + 0x1809e9ce8) = uVar38;
    uVar38 = local_1c60[(longlong)pfVar30 * 0x58 + 4];
    *(undefined8 *)(&DAT_1809e9cf0 + (longlong)pfVar30 * 0xb0) =
         local_1c60[(longlong)pfVar30 * 0x58 + 3];
    *(undefined8 *)(&DAT_1809e9cf8 + (longlong)pfVar30 * 0xb0) = uVar38;
    uVar38 = local_1c60[(longlong)pfVar30 * 0x58 + 6];
    *(undefined8 *)(&DAT_1809e9d00 + lVar11) = local_1c60[(longlong)pfVar30 * 0x58 + 5];
    *(undefined8 *)(lVar11 + 0x1809e9d08) = uVar38;
    uVar38 = local_1c60[(longlong)pfVar30 * 0x58 + 8];
    *(undefined8 *)(&DAT_1809e9d10 + lVar11) = local_1c60[(longlong)pfVar30 * 0x58 + 7];
    *(undefined8 *)(&DAT_1809e9d18 + lVar11) = uVar38;
    uVar38 = local_1c60[(longlong)pfVar30 * 0x58 + 10];
    *(undefined8 *)(&DAT_1809e9d20 + lVar11) = local_1c60[(longlong)pfVar30 * 0x58 + 9];
    *(undefined8 *)(&DAT_1809e9d28 + lVar11) = uVar38;
    uVar38 = local_1c60[(longlong)pfVar30 * 0x58 + 0xc];
    *(undefined8 *)(&DAT_1809e9d30 + lVar11) = local_1c60[(longlong)pfVar30 * 0x58 + 0xb];
    *(undefined8 *)(&DAT_1809e9d38 + lVar11) = uVar38;
    uVar38 = local_1c60[(longlong)pfVar30 * 0x58 + 0xe];
    *(undefined8 *)(&DAT_1809e9d40 + lVar11) = local_1c60[(longlong)pfVar30 * 0x58 + 0xd];
    *(undefined8 *)(&DAT_1809e9d48 + lVar11) = uVar38;
    uVar38 = local_1c60[(longlong)pfVar30 * 0x58 + 0x10];
    *(undefined8 *)(&DAT_1809e9d50 + lVar11) = local_1c60[(longlong)pfVar30 * 0x58 + 0xf];
    *(undefined8 *)(lVar11 + 0x1809e9d58) = uVar38;
    uVar38 = local_1c60[(longlong)pfVar30 * 0x58 + 0x12];
    *(undefined8 *)(&DAT_1809e9d60 + lVar11) = local_1c60[(longlong)pfVar30 * 0x58 + 0x11];
    *(undefined8 *)(lVar11 + 0x1809e9d68) = uVar38;
    uVar38 = local_1c60[(longlong)pfVar30 * 0x58 + 0x14];
    *(undefined8 *)(&DAT_1809e9d70 + lVar11) = local_1c60[(longlong)pfVar30 * 0x58 + 0x13];
    *(undefined8 *)(lVar11 + 0x1809e9d78) = uVar38;
    uVar38 = local_1c60[(longlong)pfVar30 * 0x58 + 0x16];
    *(undefined8 *)(&DAT_1809e9d80 + lVar11) = local_1c60[(longlong)pfVar30 * 0x58 + 0x15];
    *(undefined8 *)(lVar11 + 0x1809e9d88) = uVar38;
    uVar38 = local_1c60[(longlong)pfVar30 * 0x58 + 0x18];
    *(undefined8 *)(&DAT_1809e9d90 + lVar11) = local_1c60[(longlong)pfVar30 * 0x58 + 0x17];
    *(undefined8 *)(lVar11 + 0x1809e9d98) = uVar38;
    uVar38 = local_1c60[(longlong)pfVar30 * 0x58 + 0x1a];
    *(undefined8 *)(&DAT_1809e9da0 + lVar11) = local_1c60[(longlong)pfVar30 * 0x58 + 0x19];
    *(undefined8 *)(lVar11 + 0x1809e9da8) = uVar38;
    uVar38 = local_1c60[(longlong)pfVar30 * 0x58 + 0x1c];
    *(undefined8 *)(&DAT_1809e9db0 + lVar11) = local_1c60[(longlong)pfVar30 * 0x58 + 0x1b];
    *(undefined8 *)(lVar11 + 0x1809e9db8) = uVar38;
    uVar38 = local_1c60[(longlong)pfVar30 * 0x58 + 0x1e];
    *(undefined8 *)(&DAT_1809e9dc0 + lVar11) = local_1c60[(longlong)pfVar30 * 0x58 + 0x1d];
    *(undefined8 *)(lVar11 + 0x1809e9dc8) = uVar38;
    uVar38 = local_1c60[(longlong)pfVar30 * 0x58 + 0x20];
    *(undefined8 *)(&DAT_1809e9dd0 + lVar11) = local_1c60[(longlong)pfVar30 * 0x58 + 0x1f];
    *(undefined8 *)(lVar11 + 0x1809e9dd8) = uVar38;
    uVar38 = local_1c60[(longlong)pfVar30 * 0x58 + 0x22];
    *(undefined8 *)(&DAT_1809e9de0 + lVar11) = local_1c60[(longlong)pfVar30 * 0x58 + 0x21];
    *(undefined8 *)(lVar11 + 0x1809e9de8) = uVar38;
    uVar38 = local_1c60[(longlong)pfVar30 * 0x58 + 0x24];
    *(undefined8 *)(&DAT_1809e9df0 + lVar11) = local_1c60[(longlong)pfVar30 * 0x58 + 0x23];
    *(undefined8 *)(lVar11 + 0x1809e9df8) = uVar38;
    uVar38 = local_1c60[(longlong)pfVar30 * 0x58 + 0x26];
    *(undefined8 *)(&DAT_1809e9e00 + lVar11) = local_1c60[(longlong)pfVar30 * 0x58 + 0x25];
    *(undefined8 *)(lVar11 + 0x1809e9e08) = uVar38;
    uVar38 = local_1c60[(longlong)pfVar30 * 0x58 + 0x28];
    *(undefined8 *)(&DAT_1809e9e10 + lVar11) = local_1c60[(longlong)pfVar30 * 0x58 + 0x27];
    *(undefined8 *)(lVar11 + 0x1809e9e18) = uVar38;
    uVar38 = local_1c60[(longlong)pfVar30 * 0x58 + 0x2a];
    *(undefined8 *)(&DAT_1809e9e20 + lVar11) = local_1c60[(longlong)pfVar30 * 0x58 + 0x29];
    *(undefined8 *)(lVar11 + 0x1809e9e28) = uVar38;
    uVar38 = local_1c60[(longlong)pfVar30 * 0x58 + 0x2c];
    *(undefined8 *)(&DAT_1809e9e30 + lVar11) = local_1c60[(longlong)pfVar30 * 0x58 + 0x2b];
    *(undefined8 *)(lVar11 + 0x1809e9e38) = uVar38;
    uVar38 = local_1c60[(longlong)pfVar30 * 0x58 + 0x2e];
    *(undefined8 *)(&DAT_1809e9e40 + lVar11) = local_1c60[(longlong)pfVar30 * 0x58 + 0x2d];
    *(undefined8 *)(lVar11 + 0x1809e9e48) = uVar38;
    uVar38 = local_1c60[(longlong)pfVar30 * 0x58 + 0x30];
    *(undefined8 *)(&DAT_1809e9e50 + lVar11) = local_1c60[(longlong)pfVar30 * 0x58 + 0x2f];
    *(undefined8 *)(lVar11 + 0x1809e9e58) = uVar38;
    uVar38 = local_1c60[(longlong)pfVar30 * 0x58 + 0x32];
    *(undefined8 *)(&DAT_1809e9e60 + lVar11) = local_1c60[(longlong)pfVar30 * 0x58 + 0x31];
    *(undefined8 *)(lVar11 + 0x1809e9e68) = uVar38;
    uVar38 = local_1c60[(longlong)pfVar30 * 0x58 + 0x34];
    *(undefined8 *)(&DAT_1809e9e70 + lVar11) = local_1c60[(longlong)pfVar30 * 0x58 + 0x33];
    *(undefined8 *)(lVar11 + 0x1809e9e78) = uVar38;
    uVar38 = local_1c60[(longlong)pfVar30 * 0x58 + 0x36];
    *(undefined8 *)(&DAT_1809e9e80 + lVar11) = local_1c60[(longlong)pfVar30 * 0x58 + 0x35];
    *(undefined8 *)(lVar11 + 0x1809e9e88) = uVar38;
    uVar38 = local_1c60[(longlong)pfVar30 * 0x58 + 0x38];
    *(undefined8 *)(&DAT_1809e9e90 + lVar11) = local_1c60[(longlong)pfVar30 * 0x58 + 0x37];
    *(undefined8 *)(lVar11 + 0x1809e9e98) = uVar38;
    uVar38 = local_1c60[(longlong)pfVar30 * 0x58 + 0x3a];
    *(undefined8 *)(&DAT_1809e9ea0 + lVar11) = local_1c60[(longlong)pfVar30 * 0x58 + 0x39];
    *(undefined8 *)(lVar11 + 0x1809e9ea8) = uVar38;
    uVar38 = local_1c60[(longlong)pfVar30 * 0x58 + 0x3c];
    *(undefined8 *)(&DAT_1809e9eb0 + lVar11) = local_1c60[(longlong)pfVar30 * 0x58 + 0x3b];
    *(undefined8 *)(lVar11 + 0x1809e9eb8) = uVar38;
    uVar38 = local_1c60[(longlong)pfVar30 * 0x58 + 0x3e];
    *(undefined8 *)(&DAT_1809e9ec0 + lVar11) = local_1c60[(longlong)pfVar30 * 0x58 + 0x3d];
    *(undefined8 *)(lVar11 + 0x1809e9ec8) = uVar38;
    *(undefined8 *)(puVar27 + -8) = 0x1800c7710;
    FUN_1800c52d0(&DAT_1809e9ed0 + lVar11,local_1a68 + lVar11);
    *(undefined4 *)(&DAT_1809e9f80 + lVar11) = auStack_19b8[(longlong)pfVar30 * 0xb0];
    *(undefined8 *)(&DAT_1809e9f88 + lVar11) = auStack_19b0[(longlong)pfVar30 * 0x58];
    pfVar30 = (float *)((longlong)pfVar30 + 1);
  } while (pfVar30 < (float *)0xa);
  *(undefined8 *)(puVar27 + -8) = 0x1800c7759;
  FUN_1804eced0(&local_1c68,0x2c0,10,FUN_1800bfb10);
LAB_1800c775a:
  *(undefined8 *)(puVar27 + -8) = 0x1800c7769;
  return;
}



/* ===== 1800c77c0 FUN_1800c77c0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800c77c0(undefined8 *param_1,undefined8 *param_2,longlong param_3,float param_4,
                  char *param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  char *pcVar3;
  uint uVar4;
  float *pfVar5;
  char *pcVar6;
  float *pfVar7;
  int iVar8;
  longlong *plVar9;
  float fVar10;
  float local_res8 [2];
  float local_res10 [4];
  float local_res20 [2];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  pcVar6 = param_5;
  local_res10[0] = 1.0;
  local_res8[0] = param_4 * *(float *)(param_3 + 0xc) * DAT_1808ac254;
  local_res20[0] = 0.0;
  pfVar7 = local_res20;
  if (0.0 <= local_res8[0]) {
    pfVar7 = local_res8;
  }
  pfVar5 = local_res10;
  if (local_res8[0] <= DAT_1808ac34c) {
    pfVar5 = pfVar7;
  }
  iVar8 = (int)(*pfVar5 * DAT_1808acb94 + DAT_1808ac1f4) << 0x18;
  if (0xf < *(ulonglong *)(param_5 + 0x18)) {
    param_5 = *(char **)param_5;
  }
  pfVar7 = (float *)param_1[2];
  plVar9 = (longlong *)param_1[1];
  uVar2 = CONCAT44((float)((ulonglong)*param_2 >> 0x20) + _UNK_1808adc34,
                   (float)*param_2 + _DAT_1808adc30);
  if (((iVar8 != 0) && (param_5 != (char *)0x0)) && (*param_5 != '\0')) {
    fVar10 = *pfVar7;
    lVar1 = *(longlong *)*param_1;
    if (*plVar9 == 0) {
      plVar9 = (longlong *)(*(longlong *)(lVar1 + 0x38) + 0x18);
    }
    if (fVar10 == 0.0) {
      fVar10 = *(float *)(*(longlong *)(lVar1 + 0x38) + 0x20);
    }
    local_58 = *(undefined4 *)(lVar1 + 0x60);
    uStack_54 = *(undefined4 *)(lVar1 + 100);
    uStack_50 = *(undefined4 *)(lVar1 + 0x68);
    uStack_4c = *(undefined4 *)(lVar1 + 0x6c);
    pcVar3 = param_5;
    param_5 = (char *)uVar2;
    FUN_18040a900(*plVar9,lVar1,fVar10,&param_5,iVar8,&local_58,pcVar3,0,0,0);
    pfVar7 = (float *)param_1[2];
    plVar9 = (longlong *)param_1[1];
    uVar2 = param_5;
  }
  param_5 = (char *)uVar2;
  if (0xf < *(ulonglong *)(pcVar6 + 0x18)) {
    pcVar6 = *(char **)pcVar6;
  }
  uVar4 = FUN_180089560(param_3,param_4);
  if ((((uVar4 & 0xff000000) != 0) && (pcVar6 != (char *)0x0)) && (*pcVar6 != '\0')) {
    fVar10 = *pfVar7;
    lVar1 = *(longlong *)*param_1;
    if (*plVar9 == 0) {
      plVar9 = (longlong *)(*(longlong *)(lVar1 + 0x38) + 0x18);
    }
    if (fVar10 == 0.0) {
      fVar10 = *(float *)(*(longlong *)(lVar1 + 0x38) + 0x20);
    }
    local_58 = *(undefined4 *)(lVar1 + 0x60);
    uStack_54 = *(undefined4 *)(lVar1 + 100);
    uStack_50 = *(undefined4 *)(lVar1 + 0x68);
    uStack_4c = *(undefined4 *)(lVar1 + 0x6c);
    FUN_18040a900(*plVar9,lVar1,fVar10,param_2,uVar4,&local_58,pcVar6,0,0,0);
  }
  return;
}



/* ===== 1800c79a0 FUN_1800c79a0 ===== */

void FUN_1800c79a0(longlong param_1)

{
  FUN_18000f890(param_1 + 0x48);
  FUN_1800bcd20(param_1 + 0x28);
  return;
}



/* ===== 1800c79c0 FUN_1800c79c0 ===== */

void FUN_1800c79c0(undefined8 param_1)

{
  FUN_1804eced0(param_1,0xb0,10,FUN_18009f1c0);
  return;
}



/* ===== 1800c79f0 FUN_1800c79f0 ===== */

undefined1 * FUN_1800c79f0(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
  *param_1 = *param_2;
  if (param_1 != param_2) {
    puVar2 = (undefined8 *)(param_2 + 8);
    if (0xf < *(ulonglong *)(param_2 + 0x20)) {
      puVar2 = (undefined8 *)*puVar2;
    }
    FUN_180029840(param_1 + 8,puVar2,*(undefined8 *)(param_2 + 0x18));
    plVar3 = (longlong *)(param_2 + 0x28);
    if (0xf < *(ulonglong *)(param_2 + 0x40)) {
      plVar3 = (longlong *)*plVar3;
    }
    FUN_180029840(param_1 + 0x28,plVar3,*(undefined8 *)(param_2 + 0x38));
  }
  param_1[0x48] = param_2[0x48];
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x4c);
  uVar1 = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x58) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x68);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x68) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x78);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  *(undefined8 *)(param_1 + 0x78) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x88);
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 0x80);
  *(undefined8 *)(param_1 + 0x88) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x98);
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_2 + 0x90);
  *(undefined8 *)(param_1 + 0x98) = uVar1;
  param_1[0xa0] = param_2[0xa0];
  param_1[0xa1] = param_2[0xa1];
  *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(param_2 + 0xa4);
  *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_2 + 0xa8);
  return param_1;
}



/* ===== 1800c7ad0 FUN_1800c7ad0 ===== */

void FUN_1800c7ad0(longlong param_1)

{
  ulonglong uVar1;
  
  for (uVar1 = 0; uVar1 < 10; uVar1 = uVar1 + 1) {
    FUN_1800c7b80(uVar1 * 0x2c0 + param_1);
  }
  return;
}



/* ===== 1800c7b20 FUN_1800c7b20 ===== */

void FUN_1800c7b20(longlong param_1)

{
  ulonglong uVar1;
  
  for (uVar1 = 0; uVar1 < 10; uVar1 = uVar1 + 1) {
    FUN_1800c7d40(uVar1 * 0xb0 + param_1);
  }
  return;
}



/* ===== 1800c7b70 FUN_1800c7b70 ===== */

longlong FUN_1800c7b70(longlong param_1,longlong param_2)

{
  return param_1 + param_2 * 0x24;
}



/* ===== 1800c7b80 FUN_1800c7b80 ===== */

void FUN_1800c7b80(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[0xe] = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0x12] = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x16] = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  *(undefined1 *)(param_1 + 0x27) = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  *(undefined1 *)(param_1 + 0x2f) = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  *(undefined1 *)(param_1 + 0x37) = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  *(undefined1 *)(param_1 + 0x3f) = 0;
  *(undefined1 *)(param_1 + 0x40) = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0xf;
  *(undefined1 *)(param_1 + 0x41) = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0xf;
  *(undefined1 *)(param_1 + 0x45) = 0;
  *(undefined1 *)(param_1 + 0x49) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24c) = 0;
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
  *(undefined2 *)(param_1 + 0x54) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2a4) = 0;
  param_1[0x55] = 0;
  *(undefined4 *)(param_1 + 0x56) = 0xffffffff;
  param_1[0x57] = 0;
  return;
}



/* ===== 1800c7d40 FUN_1800c7d40 ===== */

void FUN_1800c7d40(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0xf;
  param_1[8] = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0xf;
  param_1[0x28] = 0;
  param_1[0x48] = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined2 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  return;
}



/* ===== 1800c7dc0 FUN_1800c7dc0 ===== */

ulonglong FUN_1800c7dc0(float *param_1,ulonglong param_2,double param_3)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float local_res8 [6];
  float local_res20 [2];
  float local_38 [5];
  float local_24;
  undefined4 local_17;
  undefined2 local_13;
  undefined1 local_11;
  
  fVar3 = (float)param_2;
  if (*(char *)(param_1 + 6) == '\0') {
    param_1[3] = local_24;
    *(undefined4 *)((longlong)param_1 + 0x19) = local_17;
    *(undefined2 *)((longlong)param_1 + 0x1d) = local_13;
    *(undefined1 *)((longlong)param_1 + 0x1f) = local_11;
    *param_1 = fVar3;
    param_1[1] = fVar3;
    param_1[2] = fVar3;
    *(double *)(param_1 + 4) = param_3;
    *(undefined1 *)(param_1 + 6) = 1;
    return param_2;
  }
  fVar4 = param_1[2];
  if (fVar3 != param_1[2]) {
    param_1[1] = *param_1;
    param_1[2] = fVar3;
    *(double *)(param_1 + 4) = param_3;
    fVar4 = fVar3;
  }
  local_38[0] = 1.0;
  fVar3 = (float)((param_3 - *(double *)(param_1 + 4)) / DAT_1808ac448);
  pfVar2 = local_res8;
  if (0.0 <= fVar3) {
    pfVar2 = local_res20;
  }
  pfVar1 = local_38;
  if (fVar3 <= DAT_1808ac34c) {
    pfVar1 = pfVar2;
  }
  fVar3 = DAT_1808ac34c - *pfVar1;
  fVar3 = (DAT_1808ac34c - fVar3 * fVar3 * fVar3) * (fVar4 - param_1[1]) + param_1[1];
  *param_1 = fVar3;
  return (ulonglong)(uint)fVar3;
}



/* ===== 1800c7eb0 FUN_1800c7eb0 ===== */

float * FUN_1800c7eb0(float *param_1,float *param_2,float *param_3,double param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_res10 [6];
  float local_88;
  float local_84 [11];
  undefined4 local_57;
  undefined2 local_53;
  undefined1 local_51;
  
  if (*(char *)(param_2 + 10) == '\0') {
    uVar1 = *(undefined8 *)param_3;
    uVar2 = *(undefined8 *)(param_3 + 2);
    *(undefined4 *)((longlong)param_2 + 0x29) = local_57;
    *(undefined2 *)((longlong)param_2 + 0x2d) = local_53;
    *(undefined8 *)param_2 = uVar1;
    *(undefined8 *)(param_2 + 2) = uVar2;
    *(undefined1 *)((longlong)param_2 + 0x2f) = local_51;
    *(double *)(param_2 + 8) = param_4;
    *(undefined8 *)(param_2 + 4) = uVar1;
    *(undefined8 *)(param_2 + 6) = uVar2;
    *(undefined1 *)(param_2 + 10) = 1;
    uVar1 = *(undefined8 *)(param_3 + 2);
    *(undefined8 *)param_1 = *(undefined8 *)param_3;
    *(undefined8 *)(param_1 + 2) = uVar1;
    return param_1;
  }
  local_84[0] = 1.0;
  local_88 = (float)((param_4 - *(double *)(param_2 + 8)) / DAT_1808ac460);
  pfVar4 = local_res10;
  if (0.0 <= local_88) {
    pfVar4 = &local_88;
  }
  pfVar3 = local_84;
  if (local_88 <= DAT_1808ac34c) {
    pfVar3 = pfVar4;
  }
  fVar8 = *pfVar3;
  fVar5 = (param_2[4] - *param_2) * fVar8 + *param_2;
  fVar6 = (param_2[5] - param_2[1]) * fVar8 + param_2[1];
  fVar7 = (param_2[6] - param_2[2]) * fVar8 + param_2[2];
  fVar8 = (param_2[7] - param_2[3]) * fVar8 + param_2[3];
  if ((((*param_3 != param_2[4]) || (param_3[1] != param_2[5])) || (param_3[2] != param_2[6])) ||
     (param_3[3] != param_2[7])) {
    *param_2 = fVar5;
    param_2[1] = fVar6;
    param_2[2] = fVar7;
    param_2[3] = fVar8;
    uVar1 = *(undefined8 *)param_3;
    uVar2 = *(undefined8 *)(param_3 + 2);
    *(double *)(param_2 + 8) = param_4;
    *(undefined8 *)(param_2 + 4) = uVar1;
    *(undefined8 *)(param_2 + 6) = uVar2;
  }
  *param_1 = fVar5;
  param_1[1] = fVar6;
  param_1[2] = fVar7;
  param_1[3] = fVar8;
  return param_1;
}



/* ===== 1800c8040 FUN_1800c8040 ===== */

void FUN_1800c8040(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  float *pfVar5;
  float local_res8 [2];
  float local_res10 [2];
  float local_res18 [2];
  float local_res20 [2];
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  
  fVar1 = param_1[1];
  fVar2 = param_1[2];
  fVar3 = param_1[3];
  local_res10[0] = 1.0;
  local_res8[0] = 0.0;
  local_res20[0] = 1.0;
  local_res18[0] = 0.0;
  local_24 = 1.0;
  local_28 = 0.0;
  local_1c = 1.0;
  local_20 = 0.0;
  pfVar5 = local_res8;
  if (0.0 <= *param_1) {
    pfVar5 = param_1;
  }
  pfVar4 = local_res10;
  if (*param_1 <= DAT_1808ac34c) {
    pfVar4 = pfVar5;
  }
  local_18 = *pfVar4;
  pfVar5 = local_res18;
  if (0.0 <= fVar1) {
    pfVar5 = param_1 + 1;
  }
  pfVar4 = local_res20;
  if (fVar1 <= DAT_1808ac34c) {
    pfVar4 = pfVar5;
  }
  local_14 = *pfVar4;
  pfVar5 = &local_28;
  if (0.0 <= fVar2) {
    pfVar5 = param_1 + 2;
  }
  pfVar4 = &local_24;
  if (fVar2 <= DAT_1808ac34c) {
    pfVar4 = pfVar5;
  }
  local_10 = *pfVar4;
  pfVar5 = &local_20;
  if (0.0 <= fVar3) {
    pfVar5 = param_1 + 3;
  }
  pfVar4 = &local_1c;
  if (fVar3 <= DAT_1808ac34c) {
    pfVar4 = pfVar5;
  }
  local_c = *pfVar4;
  FUN_1803d7f30(&local_18);
  return;
}



/* ===== 1800c8150 FUN_1800c8150 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
FUN_1800c8150(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  size_t sVar2;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined8 *local_d0;
  undefined8 *local_c0;
  char local_b8 [128];
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStack_f8;
  local_b8[0] = '\0';
  local_b8[1] = '\0';
  local_b8[2] = '\0';
  local_b8[3] = '\0';
  local_b8[4] = '\0';
  local_b8[5] = '\0';
  local_b8[6] = '\0';
  local_b8[7] = '\0';
  local_b8[8] = '\0';
  local_b8[9] = '\0';
  local_b8[10] = '\0';
  local_b8[0xb] = '\0';
  local_b8[0xc] = '\0';
  local_b8[0xd] = '\0';
  local_b8[0xe] = '\0';
  local_b8[0xf] = '\0';
  local_b8[0x10] = '\0';
  local_b8[0x11] = '\0';
  local_b8[0x12] = '\0';
  local_b8[0x13] = '\0';
  local_b8[0x14] = '\0';
  local_b8[0x15] = '\0';
  local_b8[0x16] = '\0';
  local_b8[0x17] = '\0';
  local_b8[0x18] = '\0';
  local_b8[0x19] = '\0';
  local_b8[0x1a] = '\0';
  local_b8[0x1b] = '\0';
  local_b8[0x1c] = '\0';
  local_b8[0x1d] = '\0';
  local_b8[0x1e] = '\0';
  local_b8[0x1f] = '\0';
  local_b8[0x20] = '\0';
  local_b8[0x21] = '\0';
  local_b8[0x22] = '\0';
  local_b8[0x23] = '\0';
  local_b8[0x24] = '\0';
  local_b8[0x25] = '\0';
  local_b8[0x26] = '\0';
  local_b8[0x27] = '\0';
  local_b8[0x28] = '\0';
  local_b8[0x29] = '\0';
  local_b8[0x2a] = '\0';
  local_b8[0x2b] = '\0';
  local_b8[0x2c] = '\0';
  local_b8[0x2d] = '\0';
  local_b8[0x2e] = '\0';
  local_b8[0x2f] = '\0';
  local_b8[0x30] = '\0';
  local_b8[0x31] = '\0';
  local_b8[0x32] = '\0';
  local_b8[0x33] = '\0';
  local_b8[0x34] = '\0';
  local_b8[0x35] = '\0';
  local_b8[0x36] = '\0';
  local_b8[0x37] = '\0';
  local_b8[0x38] = '\0';
  local_b8[0x39] = '\0';
  local_b8[0x3a] = '\0';
  local_b8[0x3b] = '\0';
  local_b8[0x3c] = '\0';
  local_b8[0x3d] = '\0';
  local_b8[0x3e] = '\0';
  local_b8[0x3f] = '\0';
  local_b8[0x40] = '\0';
  local_b8[0x41] = '\0';
  local_b8[0x42] = '\0';
  local_b8[0x43] = '\0';
  local_b8[0x44] = '\0';
  local_b8[0x45] = '\0';
  local_b8[0x46] = '\0';
  local_b8[0x47] = '\0';
  local_b8[0x48] = '\0';
  local_b8[0x49] = '\0';
  local_b8[0x4a] = '\0';
  local_b8[0x4b] = '\0';
  local_b8[0x4c] = '\0';
  local_b8[0x4d] = '\0';
  local_b8[0x4e] = '\0';
  local_b8[0x4f] = '\0';
  local_b8[0x50] = '\0';
  local_b8[0x51] = '\0';
  local_b8[0x52] = '\0';
  local_b8[0x53] = '\0';
  local_b8[0x54] = '\0';
  local_b8[0x55] = '\0';
  local_b8[0x56] = '\0';
  local_b8[0x57] = '\0';
  local_b8[0x58] = '\0';
  local_b8[0x59] = '\0';
  local_b8[0x5a] = '\0';
  local_b8[0x5b] = '\0';
  local_b8[0x5c] = '\0';
  local_b8[0x5d] = '\0';
  local_b8[0x5e] = '\0';
  local_b8[0x5f] = '\0';
  local_b8[0x60] = '\0';
  local_b8[0x61] = '\0';
  local_b8[0x62] = '\0';
  local_b8[99] = '\0';
  local_b8[100] = '\0';
  local_b8[0x65] = '\0';
  local_b8[0x66] = '\0';
  local_b8[0x67] = '\0';
  local_b8[0x68] = '\0';
  local_b8[0x69] = '\0';
  local_b8[0x6a] = '\0';
  local_b8[0x6b] = '\0';
  local_b8[0x6c] = '\0';
  local_b8[0x6d] = '\0';
  local_b8[0x6e] = '\0';
  local_b8[0x6f] = '\0';
  local_b8[0x70] = '\0';
  local_b8[0x71] = '\0';
  local_b8[0x72] = '\0';
  local_b8[0x73] = '\0';
  local_b8[0x74] = '\0';
  local_b8[0x75] = '\0';
  local_b8[0x76] = '\0';
  local_b8[0x77] = '\0';
  local_b8[0x78] = '\0';
  local_b8[0x79] = '\0';
  local_b8[0x7a] = '\0';
  local_b8[0x7b] = '\0';
  local_b8[0x7c] = '\0';
  local_b8[0x7d] = '\0';
  local_b8[0x7e] = '\0';
  local_b8[0x7f] = '\0';
  local_res18 = param_3;
  local_res20 = param_4;
  local_c0 = param_1;
  puVar1 = (ulonglong *)FUN_180013640();
  local_d8 = 0;
  local_d0 = &local_res18;
  FUN_180501904(*puVar1 | 2,local_b8,0x80,param_2);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  sVar2 = strlen(local_b8);
  FUN_1800133a0(param_1,local_b8,sVar2);
  return param_1;
}



/* ===== 1800c8230 FUN_1800c8230 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int * FUN_1800c8230(double param_1,double param_2)

{
  double dVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  longlong lVar4;
  double dVar5;
  double dVar6;
  int iVar7;
  size_t sVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  double *pdVar11;
  double *pdVar12;
  int *piVar13;
  ulonglong uVar14;
  double *pdVar15;
  longlong lVar16;
  ulonglong uVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  ulonglong uVar20;
  WCHAR *lpFormat;
  int iVar21;
  float fVar22;
  undefined8 uStackY_350;
  undefined1 auStackY_348 [8];
  undefined1 auStackY_340 [24];
  double *pdStackY_328;
  double *pdStackY_320;
  double *pdStackY_318;
  undefined1 auStackY_310 [56];
  double dStackY_2a8;
  undefined8 *puStackY_2a0;
  _SYSTEMTIME local_278;
  undefined1 local_268 [32];
  WCHAR local_248 [80];
  WCHAR local_1a8 [80];
  CHAR local_108 [240];
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)(auStackY_310 + 0x58);
  if ((DAT_1809eba60 == 0) || (param_2 = DAT_180cd0480, DAT_180cd0480 <= param_1)) {
    DAT_180cd0480 = param_1 + DAT_1808ac500;
    local_278.wYear = 0;
    local_278.wMonth = 0;
    local_278.wDayOfWeek = 0;
    local_278.wDay = 0;
    local_278.wHour = 0;
    local_278.wMinute = 0;
    local_278.wSecond = 0;
    local_278.wMilliseconds = 0;
    GetLocalTime(&local_278);
    FUN_180540170(local_248,0,0xa0);
    FUN_180540170(local_1a8,0,0xa0);
    iVar7 = GetLocaleInfoW(0x400,0x79,local_248,0x50);
    lpFormat = local_248;
    if (iVar7 < 1) {
      lpFormat = (LPCWSTR)0x0;
    }
    iVar7 = GetTimeFormatW(0x400,0,&local_278,lpFormat,local_1a8,0x50);
    if (iVar7 < 1) {
      puVar9 = (undefined8 *)
               FUN_1800c8150(local_268,"%02d:%02d",(ulonglong)local_278.wHour,local_278.wMinute);
      if (puVar9 != &DAT_1809eba50) {
        if (0xf < DAT_1809eba68) {
          lVar4 = CONCAT44(DAT_1809eba50._4_4_,(undefined4)DAT_1809eba50);
          uVar14 = DAT_1809eba68 + 1;
          lVar16 = lVar4;
          if (0xfff < uVar14) {
            lVar16 = *(longlong *)(lVar4 + -8);
            if (0x1f < (lVar4 - lVar16) - 8U) {
              piVar13 = (int *)&DAT_00000005;
              pcVar2 = (code *)swi(0x29);
              (*pcVar2)();
              puStackY_2a0 = puVar9;
              if ((((int)DAT_180ca0dc0 + (int)DAT_180ca0db8 & 1U) == 0) &&
                 (DAT_180ca0db0 <= DAT_180ca0dc0 + 2 >> 1)) {
                FUN_1800cdbd0();
              }
              DAT_180ca0db8 = DAT_180ca0db8 & DAT_180ca0db0 * 2 - 1;
              uVar14 = DAT_180ca0db8 + DAT_180ca0dc0;
              uVar20 = uVar14 >> 1;
              uVar17 = uVar20 & DAT_180ca0db0 - 1;
              if (*(longlong *)(DAT_180ca0da8 + uVar17 * 8) == 0) {
                uVar10 = FUN_1804ecaa0(0x10);
                *(undefined8 *)(DAT_180ca0da8 + uVar17 * 8) = uVar10;
              }
              puVar19 = auStackY_348;
              *(double *)
               (*(longlong *)(DAT_180ca0da8 + (DAT_180ca0db0 - 1 & uVar20) * 8) +
               (ulonglong)((uint)uVar14 & 1) * 8) = param_2;
              dVar6 = DAT_1808ac500;
              DAT_180ca0dc0 = DAT_180ca0dc0 + 1;
              if (DAT_180ca0dc0 != 0) {
                while (pdVar11 = (double *)
                                 (*(longlong *)
                                   (DAT_180ca0da8 + (DAT_180ca0db8 >> 1 & DAT_180ca0db0 - 1) * 8) +
                                 (ulonglong)((uint)DAT_180ca0db8 & 1) * 8),
                      *pdVar11 <= param_2 - DAT_1808ac500 && param_2 - DAT_1808ac500 != *pdVar11) {
                  DAT_180ca0dc0 = DAT_180ca0dc0 - 1;
                  if (DAT_180ca0dc0 == 0) {
                    DAT_180ca0db8 = 0;
                    break;
                  }
                  DAT_180ca0db8 = DAT_180ca0db8 + 1;
                }
              }
              uVar14 = DAT_180ca0dc0;
              if (DAT_180ca0dc0 < 2) {
                piVar13[0] = 0;
                piVar13[1] = 0;
                piVar13[2] = 0;
                piVar13[3] = 0;
                piVar13[4] = 0x3f800000;
                return piVar13;
              }
              pdStackY_328 = (double *)0x0;
              pdStackY_320 = (double *)0x0;
              pdStackY_318 = (double *)0x0;
              if (DAT_180ca0dc0 != 0) {
                if (0x1fffffffffffffff < DAT_180ca0dc0) {
                    /* WARNING: Subroutine does not return */
                  FUN_1800118d0();
                }
                pdVar11 = (double *)FUN_18000fb70(DAT_180ca0dc0 * 8);
                FUN_180540530(pdVar11,pdStackY_328,(longlong)pdStackY_320 - (longlong)pdStackY_328);
                puVar18 = auStackY_348;
                puVar19 = auStackY_348;
                if (pdStackY_328 != (double *)0x0) {
                  uVar17 = ((longlong)pdStackY_318 - (longlong)pdStackY_328 >> 3) * 8;
                  pdVar12 = pdStackY_328;
                  if (0xfff < uVar17) {
                    pdVar12 = (double *)pdStackY_328[-1];
                    pdVar15 = (double *)((longlong)pdStackY_328 + (-8 - (longlong)pdVar12));
                    if (pdVar15 < (double *)0x20) {
                      uVar17 = uVar17 + 0x27;
                      puVar18 = auStackY_348;
                    }
                    else {
                      uVar17 = 5;
                      pcVar2 = (code *)swi(0x29);
                      (*pcVar2)(5);
                      puVar18 = auStackY_340;
                      pdVar12 = pdVar15;
                    }
                  }
                  *(undefined8 *)(puVar18 + -8) = 0x1800c8673;
                  thunk_FUN_1803d64e0(pdVar12,uVar17);
                  puVar19 = puVar18;
                }
                pdStackY_318 = pdVar11 + uVar14;
                pdStackY_320 = pdVar11;
              }
              dVar5 = DAT_1808ac180;
              uVar14 = 1;
              pdStackY_328 = pdStackY_320;
              if (1 < DAT_180ca0dc0) {
                do {
                  dStackY_2a8 = dVar5;
                  uVar17 = DAT_180ca0db8 + uVar14;
                  pdVar11 = &dStackY_2a8;
                  if (dVar5 <= *(double *)
                                (*(longlong *)
                                  (DAT_180ca0da8 + (uVar17 >> 1 & DAT_180ca0db0 - 1) * 8) +
                                (ulonglong)((uint)uVar17 & 1) * 8) -
                               *(double *)
                                (*(longlong *)
                                  (DAT_180ca0da8 + (uVar17 - 1 >> 1 & DAT_180ca0db0 - 1) * 8) +
                                (ulonglong)((uint)(uVar17 - 1) & 1) * 8)) {
                    pdVar11 = (double *)(local_268 + -0x30);
                  }
                  *(undefined8 *)(puVar19 + -8) = 0x1800c8711;
                  FUN_1800cd6b0(&pdStackY_328,pdVar11);
                  uVar14 = uVar14 + 1;
                } while (uVar14 < DAT_180ca0dc0);
              }
              uVar14 = (longlong)pdStackY_320 - (longlong)pdStackY_328 >> 3;
              *(undefined8 *)(puVar19 + -8) = 0x1800c874c;
              FUN_1800ccfb0(pdStackY_328,pdStackY_320,uVar14,(ulonglong)dStackY_2a8 & 0xff);
              dVar5 = DAT_1808ac4a8;
              if (uVar14 < 100) {
                lVar16 = 0;
              }
              else {
                auVar3._8_8_ = 0;
                auVar3._0_8_ = uVar14;
                lVar16 = SUB168(ZEXT816(0x47ae147ae147ae15) * auVar3,8);
                lVar16 = ((uVar14 - lVar16 >> 1) + lVar16 >> 6) - 1;
              }
              dVar1 = pdStackY_328[lVar16];
              iVar7 = (int)(dVar6 / pdStackY_320[-1] + DAT_1808ac4a8);
              iVar21 = (int)(dVar6 / *pdStackY_328 + DAT_1808ac4a8);
              dStackY_2a8 = (double)((ulonglong)dStackY_2a8 & 0xffffffff00000000);
              fVar22 = DAT_1808ac34c - ((float)(iVar7 - iVar21) * DAT_1808ac140) / (float)uVar14;
              pdVar11 = &dStackY_2a8;
              if (0.0 <= fVar22) {
                pdVar11 = (double *)(local_268 + -0x30);
              }
              pdVar12 = (double *)(local_268 + -0x28);
              if (fVar22 <= DAT_1808ac34c) {
                pdVar12 = pdVar11;
              }
              if (pdStackY_328 != (double *)0x0) {
                uVar17 = ((longlong)pdStackY_318 - (longlong)pdStackY_328 >> 3) * 8;
                pdVar11 = pdStackY_328;
                if (0xfff < uVar17) {
                  pdVar11 = (double *)pdStackY_328[-1];
                  pdVar15 = (double *)((longlong)pdStackY_328 + (-8 - (longlong)pdVar11));
                  if (&DAT_0000001f < pdVar15) {
                    pcVar2 = (code *)swi(0x29);
                    uVar17 = (*pcVar2)(5);
                    puVar19 = puVar19 + 8;
                    pdVar11 = pdVar15;
                  }
                  else {
                    uVar17 = uVar17 + 0x27;
                  }
                }
                *(undefined8 *)(puVar19 + -8) = 0x1800c8876;
                thunk_FUN_1803d64e0(pdVar11,uVar17);
              }
              *piVar13 = (int)((double)uVar14 + dVar5);
              piVar13[1] = (int)(dVar6 / dVar1 + dVar5);
              piVar13[2] = iVar21;
              piVar13[3] = iVar7;
              piVar13[4] = *(int *)pdVar12;
              return piVar13;
            }
            uVar14 = DAT_1809eba68 + 0x28;
          }
          thunk_FUN_1803d64e0(lVar16,uVar14);
        }
        DAT_1809eba50._0_4_ = *(undefined4 *)puVar9;
        DAT_1809eba50._4_4_ = *(undefined4 *)((longlong)puVar9 + 4);
        uRam00000001809eba58 = *(undefined4 *)(puVar9 + 1);
        uRam00000001809eba5c = *(undefined4 *)((longlong)puVar9 + 0xc);
        DAT_1809eba60 = puVar9[2];
        DAT_1809eba68 = puVar9[3];
        puVar9[2] = 0;
        puVar9[3] = 0xf;
        *(undefined1 *)puVar9 = 0;
      }
      FUN_18000f890(local_268);
    }
    else {
      FUN_180540170(local_108,0,0xf0);
      WideCharToMultiByte(0xfde9,0,local_1a8,-1,local_108,0xf0,(LPCSTR)0x0,(LPBOOL)0x0);
      sVar8 = strlen(local_108);
      FUN_180029840(&DAT_1809eba50,local_108,sVar8);
    }
  }
  return (int *)&DAT_1809eba50;
}



/* ===== 1800c8460 FUN_1800c8460 ===== */

int * FUN_1800c8460(int *param_1,double param_2)

{
  double dVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  double *pdVar7;
  double *pdVar8;
  double *pdVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  int iVar16;
  int iVar17;
  float fVar18;
  double local_res8;
  double local_res18;
  undefined4 local_res20 [2];
  undefined8 uStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [24];
  double *local_78;
  double *pdStack_70;
  double *local_68;
  
  if ((((int)DAT_180ca0dc0 + (int)DAT_180ca0db8 & 1U) == 0) &&
     (DAT_180ca0db0 <= DAT_180ca0dc0 + 2 >> 1)) {
    FUN_1800cdbd0();
  }
  DAT_180ca0db8 = DAT_180ca0db8 & DAT_180ca0db0 * 2 - 1;
  uVar15 = DAT_180ca0db8 + DAT_180ca0dc0;
  uVar14 = uVar15 >> 1;
  uVar11 = uVar14 & DAT_180ca0db0 - 1;
  if (*(longlong *)(DAT_180ca0da8 + uVar11 * 8) == 0) {
    uVar6 = FUN_1804ecaa0(0x10);
    *(undefined8 *)(DAT_180ca0da8 + uVar11 * 8) = uVar6;
  }
  puVar13 = auStack_98;
  *(double *)
   (*(longlong *)(DAT_180ca0da8 + (DAT_180ca0db0 - 1 & uVar14) * 8) +
   (ulonglong)((uint)uVar15 & 1) * 8) = param_2;
  dVar5 = DAT_1808ac500;
  DAT_180ca0dc0 = DAT_180ca0dc0 + 1;
  if (DAT_180ca0dc0 != 0) {
    while (pdVar7 = (double *)
                    (*(longlong *)(DAT_180ca0da8 + (DAT_180ca0db8 >> 1 & DAT_180ca0db0 - 1) * 8) +
                    (ulonglong)((uint)DAT_180ca0db8 & 1) * 8),
          *pdVar7 <= param_2 - DAT_1808ac500 && param_2 - DAT_1808ac500 != *pdVar7) {
      DAT_180ca0dc0 = DAT_180ca0dc0 - 1;
      if (DAT_180ca0dc0 == 0) {
        DAT_180ca0db8 = 0;
        break;
      }
      DAT_180ca0db8 = DAT_180ca0db8 + 1;
    }
  }
  uVar15 = DAT_180ca0dc0;
  if (DAT_180ca0dc0 < 2) {
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0x3f800000;
    return param_1;
  }
  local_78 = (double *)0x0;
  pdStack_70 = (double *)0x0;
  local_68 = (double *)0x0;
  if (DAT_180ca0dc0 != 0) {
    if (0x1fffffffffffffff < DAT_180ca0dc0) {
                    /* WARNING: Subroutine does not return */
      FUN_1800118d0();
    }
    pdVar7 = (double *)FUN_18000fb70(DAT_180ca0dc0 * 8);
    FUN_180540530(pdVar7,local_78,(longlong)pdStack_70 - (longlong)local_78);
    puVar12 = auStack_98;
    puVar13 = auStack_98;
    if (local_78 != (double *)0x0) {
      uVar11 = ((longlong)local_68 - (longlong)local_78 >> 3) * 8;
      pdVar8 = local_78;
      if (0xfff < uVar11) {
        pdVar8 = (double *)local_78[-1];
        pdVar9 = (double *)((longlong)local_78 + (-8 - (longlong)pdVar8));
        if (pdVar9 < (double *)0x20) {
          uVar11 = uVar11 + 0x27;
          puVar12 = auStack_98;
        }
        else {
          uVar11 = 5;
          pcVar2 = (code *)swi(0x29);
          (*pcVar2)(5);
          puVar12 = auStack_90;
          pdVar8 = pdVar9;
        }
      }
      *(undefined8 *)(puVar12 + -8) = 0x1800c8673;
      thunk_FUN_1803d64e0(pdVar8,uVar11);
      puVar13 = puVar12;
    }
    local_68 = pdVar7 + uVar15;
    pdStack_70 = pdVar7;
  }
  dVar4 = DAT_1808ac180;
  uVar15 = 1;
  local_78 = pdStack_70;
  if (1 < DAT_180ca0dc0) {
    do {
      local_res8 = dVar4;
      uVar11 = DAT_180ca0db8 + uVar15;
      local_res18 = *(double *)
                     (*(longlong *)(DAT_180ca0da8 + (uVar11 >> 1 & DAT_180ca0db0 - 1) * 8) +
                     (ulonglong)((uint)uVar11 & 1) * 8) -
                    *(double *)
                     (*(longlong *)(DAT_180ca0da8 + (uVar11 - 1 >> 1 & DAT_180ca0db0 - 1) * 8) +
                     (ulonglong)((uint)(uVar11 - 1) & 1) * 8);
      pdVar7 = &local_res8;
      if (dVar4 <= local_res18) {
        pdVar7 = &local_res18;
      }
      *(undefined8 *)(puVar13 + -8) = 0x1800c8711;
      FUN_1800cd6b0(&local_78,pdVar7);
      uVar15 = uVar15 + 1;
    } while (uVar15 < DAT_180ca0dc0);
  }
  uVar15 = (longlong)pdStack_70 - (longlong)local_78 >> 3;
  *(undefined8 *)(puVar13 + -8) = 0x1800c874c;
  FUN_1800ccfb0(local_78,pdStack_70,uVar15,(ulonglong)local_res8 & 0xff);
  dVar4 = DAT_1808ac4a8;
  if (uVar15 < 100) {
    lVar10 = 0;
  }
  else {
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar15;
    lVar10 = SUB168(ZEXT816(0x47ae147ae147ae15) * auVar3,8);
    lVar10 = ((uVar15 - lVar10 >> 1) + lVar10 >> 6) - 1;
  }
  dVar1 = local_78[lVar10];
  iVar16 = (int)(dVar5 / pdStack_70[-1] + DAT_1808ac4a8);
  iVar17 = (int)(dVar5 / *local_78 + DAT_1808ac4a8);
  local_res20[0] = 0x3f800000;
  local_res8 = (double)((ulonglong)local_res8 & 0xffffffff00000000);
  fVar18 = DAT_1808ac34c - ((float)(iVar16 - iVar17) * DAT_1808ac140) / (float)uVar15;
  local_res18 = (double)CONCAT44(local_res18._4_4_,fVar18);
  pdVar7 = &local_res8;
  if (0.0 <= fVar18) {
    pdVar7 = &local_res18;
  }
  pdVar8 = (double *)local_res20;
  if (fVar18 <= DAT_1808ac34c) {
    pdVar8 = pdVar7;
  }
  if (local_78 != (double *)0x0) {
    uVar11 = ((longlong)local_68 - (longlong)local_78 >> 3) * 8;
    pdVar7 = local_78;
    if (0xfff < uVar11) {
      pdVar7 = (double *)local_78[-1];
      pdVar9 = (double *)((longlong)local_78 + (-8 - (longlong)pdVar7));
      if (&DAT_0000001f < pdVar9) {
        pcVar2 = (code *)swi(0x29);
        uVar11 = (*pcVar2)(5);
        puVar13 = puVar13 + 8;
        pdVar7 = pdVar9;
      }
      else {
        uVar11 = uVar11 + 0x27;
      }
    }
    *(undefined8 *)(puVar13 + -8) = 0x1800c8876;
    thunk_FUN_1803d64e0(pdVar7,uVar11);
  }
  *param_1 = (int)((double)uVar15 + dVar4);
  param_1[1] = (int)(dVar5 / dVar1 + dVar4);
  param_1[2] = iVar17;
  param_1[3] = iVar16;
  param_1[4] = *(int *)pdVar8;
  return param_1;
}



/* ===== 1800c88f0 FUN_1800c88f0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1800c88f0(undefined8 *param_1,byte *param_2)

{
  byte *pbVar1;
  byte bVar2;
  undefined1 *puVar3;
  uint *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  uint *puVar8;
  longlong lVar9;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined8 *local_70;
  undefined1 local_68;
  undefined7 uStack_67;
  undefined1 uStack_60;
  undefined4 uStack_5f;
  undefined2 uStack_5b;
  undefined1 uStack_59;
  undefined8 local_58;
  undefined8 uStack_50;
  uint *local_48;
  ulonglong local_40;
  
  local_40 = DAT_180919500 ^ (ulonglong)auStack_98;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar6 = _UNK_1808ad418;
  uVar5 = _DAT_1808ad410;
  local_78 = 1;
  if (0xf < *(ulonglong *)(param_2 + 0x18)) {
    param_2 = *(byte **)param_2;
  }
  bVar2 = *param_2;
  local_70 = param_1;
  puVar4 = local_48;
  do {
    if (bVar2 == 0) {
      return param_1;
    }
    bVar2 = *param_2;
    if (bVar2 < 0x80) {
LAB_1800c8a26:
      lVar9 = 1;
      uVar7 = (uint)bVar2;
    }
    else {
      pbVar1 = param_2 + 1;
      uVar7 = (uint)bVar2;
      if (((bVar2 & 0xe0) == 0xc0) && (*pbVar1 != 0)) {
        uVar7 = (uVar7 & 0x1f) << 6 | *pbVar1 & 0x3f;
        lVar9 = 2;
      }
      else if (((bVar2 & 0xf0) == 0xe0) && ((*pbVar1 != 0 && (param_2[2] != 0)))) {
        uVar7 = ((uVar7 & 0xf) << 6 | *pbVar1 & 0x3f) << 6 | param_2[2] & 0x3f;
        lVar9 = 3;
      }
      else {
        if (((bVar2 & 0xf8) != 0xf0) || (((*pbVar1 == 0 || (param_2[2] == 0)) || (param_2[3] == 0)))
           ) goto LAB_1800c8a26;
        uVar7 = (((uVar7 & 7) << 6 | *pbVar1 & 0x3f) << 6 | param_2[2] & 0x3f) << 6 |
                param_2[3] & 0x3f;
        lVar9 = 4;
      }
    }
    if (uVar7 - 0xe000 < 0x1900) {
      local_48 = (uint *)0x0;
      puVar8 = &DAT_1805ce340;
      do {
        if (*puVar8 == uVar7) {
          local_48 = puVar8;
        }
        puVar8 = puVar8 + 6;
      } while (puVar8 != (uint *)&DAT_1805ce598);
      if (local_48 == (uint *)0x0) goto LAB_1800c8ae2;
      uStack_67 = 0;
      uStack_60 = 0;
      uStack_5f = 0;
      uStack_5b = 0;
      uStack_59 = 0;
      local_58 = uVar5;
      uStack_50 = uVar6;
      local_68 = 0;
      puVar3 = (undefined1 *)param_1[1];
      if (puVar3 == (undefined1 *)param_1[2]) {
        FUN_1800cd900(param_1,puVar3,&local_68);
      }
      else {
        *puVar3 = 0;
        *(undefined8 *)(puVar3 + 1) = 0;
        *(undefined4 *)(puVar3 + 9) = 0;
        *(undefined2 *)(puVar3 + 0xd) = 0;
        puVar3[0xf] = 0;
        *(undefined8 *)(puVar3 + 0x10) = 0;
        *(undefined8 *)(puVar3 + 0x18) = 0xf;
        local_68 = 0;
        *(uint **)(puVar3 + 0x20) = local_48;
        param_1[1] = param_1[1] + 0x28;
      }
      FUN_18000f890(&local_68);
    }
    else {
LAB_1800c8ae2:
      puVar3 = (undefined1 *)param_1[1];
      if (((undefined1 *)*param_1 == puVar3) || (local_48 = puVar4, *(longlong *)(puVar3 + -8) != 0)
         ) {
        uStack_67 = 0;
        uStack_60 = 0;
        uStack_5f = 0;
        uStack_5b = 0;
        uStack_59 = 0;
        local_58 = uVar5;
        uStack_50 = uVar6;
        local_68 = 0;
        local_48 = (uint *)0x0;
        if (puVar3 == (undefined1 *)param_1[2]) {
          FUN_1800cd900(param_1,puVar3,&local_68);
        }
        else {
          *puVar3 = 0;
          *(undefined8 *)(puVar3 + 1) = 0;
          *(undefined4 *)(puVar3 + 9) = 0;
          *(undefined2 *)(puVar3 + 0xd) = 0;
          puVar3[0xf] = 0;
          *(undefined8 *)(puVar3 + 0x10) = 0;
          *(undefined8 *)(puVar3 + 0x18) = 0xf;
          local_68 = 0;
          *(undefined8 *)(puVar3 + 0x20) = 0;
          param_1[1] = param_1[1] + 0x28;
        }
        FUN_18000f890(&local_68);
      }
      FUN_1800134a0(param_1[1] + -0x28,param_2,lVar9);
    }
    param_2 = param_2 + lVar9;
    bVar2 = *param_2;
    puVar4 = local_48;
  } while( true );
}



/* ===== 1800c8bc0 FUN_1800c8bc0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 * FUN_1800c8bc0(undefined4 *param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  char *_Str;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  size_t sVar6;
  undefined4 *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  float fVar10;
  undefined1 auStack_78 [32];
  undefined1 local_58 [24];
  longlong local_40 [5];
  
  local_40[4] = DAT_180919500 ^ (ulonglong)auStack_78;
  fVar10 = *(float *)(param_3 + 0x14) + *(float *)(param_3 + 0x14) + DAT_1808ac1f4;
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  _Str = *(char **)(param_2 + 8);
  local_40[0] = 0;
  local_40[1] = 0;
  local_40[2] = 0;
  local_40[3] = 0;
  sVar6 = strlen(_Str);
  FUN_1800133a0(local_40,_Str,sVar6);
  puVar7 = (undefined4 *)FUN_18039ed80(local_58,local_40,uVar1,(int)fVar10);
  uVar3 = puVar7[1];
  uVar4 = puVar7[2];
  uVar5 = puVar7[3];
  *param_1 = *puVar7;
  param_1[1] = uVar3;
  param_1[2] = uVar4;
  param_1[3] = uVar5;
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(puVar7 + 4);
  if (0xf < (ulonglong)local_40[3]) {
    uVar9 = local_40[3] + 1;
    lVar8 = local_40[0];
    if (0xfff < uVar9) {
      lVar8 = *(longlong *)(local_40[0] + -8);
      if (0x1f < (local_40[0] - lVar8) - 8U) {
        pcVar2 = (code *)swi(0x29);
        (*pcVar2)(5);
        pcVar2 = (code *)swi(3);
        puVar7 = (undefined4 *)(*pcVar2)();
        return puVar7;
      }
      uVar9 = local_40[3] + 0x28;
    }
    thunk_FUN_1803d64e0(lVar8,uVar9);
  }
  return param_1;
}



/* ===== 1800c8cb0 FUN_1800c8cb0 ===== */

void FUN_1800c8cb0(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined1 local_res8 [8];
  undefined1 local_68 [96];
  
  uVar2 = DAT_1808acd08;
  puVar1 = (undefined8 *)param_1[1];
  for (param_1 = (undefined8 *)*param_1; param_1 != puVar1; param_1 = param_1 + 5) {
    if (param_1[4] == 0) {
      if ((ulonglong)param_1[3] < 0x10) {
        puVar3 = param_1;
      }
      else {
        puVar3 = (undefined8 *)*param_1;
      }
      FUN_18040a2f0(local_res8,*(undefined8 *)(param_2 + 8),*(undefined4 *)(param_2 + 0x10),uVar2,0,
                    puVar3,0,0,0);
    }
    else {
      FUN_1800c8bc0(local_68,param_1[4],param_2);
    }
  }
  return;
}



/* ===== 1800c8e00 FUN_1800c8e00 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800c8e00(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,uint param_6)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  uint uVar8;
  longlong *plVar9;
  char *pcVar10;
  uint uVar11;
  char *pcVar12;
  longlong lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 local_res10;
  undefined8 *in_stack_fffffffffffffec8;
  ulonglong in_stack_fffffffffffffee8;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0 [2];
  undefined8 local_d8;
  longlong local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  
  fVar14 = (float)FUN_18053fc00();
  fVar15 = (float)FUN_18053fc00();
  lVar4 = CONCAT44(param_5._4_4_,(undefined4)param_5);
  fVar16 = (float)FUN_180519080(*(float *)(lVar4 + 0x14) * _DAT_1808ac388);
  uVar8 = param_6;
  uVar7 = DAT_1808acd08;
  fVar6 = DAT_1808acbe4;
  fVar5 = DAT_1808abfc4;
  pcVar12 = (char *)*param_2;
  pcVar3 = (char *)param_2[1];
  if (pcVar12 != pcVar3) {
    uVar11 = param_6 & 0xff000000;
    do {
      if (*(longlong *)(pcVar12 + 0x20) == 0) {
        pcVar10 = pcVar12;
        if (0xf < *(ulonglong *)(pcVar12 + 0x18)) {
          pcVar10 = *(char **)pcVar12;
        }
        fVar17 = *(float *)(lVar4 + 0x10);
        local_e8 = fVar14;
        local_e4 = fVar15;
        if (((uVar11 != 0) && (pcVar10 != (char *)0x0)) && (*pcVar10 != '\0')) {
          lVar13 = *(longlong *)(lVar4 + 8);
          if (lVar13 == 0) {
            lVar13 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x18);
          }
          if (fVar17 == 0.0) {
            fVar17 = *(float *)(*(longlong *)(param_1 + 0x38) + 0x20);
          }
          local_c8 = *(undefined8 *)(param_1 + 0x60);
          uStack_c0 = *(undefined8 *)(param_1 + 0x68);
          in_stack_fffffffffffffec8 =
               (undefined8 *)CONCAT44((int)((ulonglong)in_stack_fffffffffffffec8 >> 0x20),uVar8);
          FUN_18040a900(lVar13,param_1,fVar17,&local_e8,in_stack_fffffffffffffec8,&local_c8,pcVar10,
                        0,in_stack_fffffffffffffee8 & 0xffffffff00000000,0);
          fVar17 = *(float *)(lVar4 + 0x10);
        }
        pcVar10 = pcVar12;
        if (0xf < *(ulonglong *)(pcVar12 + 0x18)) {
          pcVar10 = *(char **)pcVar12;
        }
        in_stack_fffffffffffffee8 = 0;
        in_stack_fffffffffffffec8 =
             (undefined8 *)((ulonglong)in_stack_fffffffffffffec8 & 0xffffffff00000000);
        FUN_18040a2f0(local_e0,*(undefined8 *)(lVar4 + 8),fVar17,uVar7,in_stack_fffffffffffffec8,
                      pcVar10,0,0,0);
        fVar14 = fVar14 + local_e0[0];
      }
      else {
        plVar9 = (longlong *)FUN_1800c8bc0(&local_c8,*(longlong *)(pcVar12 + 0x20),lVar4);
        lVar13 = *plVar9;
        iVar1 = (int)plVar9[1];
        iVar2 = *(int *)((longlong)plVar9 + 0xc);
        if (((lVar13 == 0) || (iVar1 < 1)) || (iVar2 < 1)) {
          fVar17 = *(float *)(lVar4 + 0x14);
          if (((lVar13 == 0) || (iVar1 < 1)) || (iVar2 < 1)) {
            fVar14 = fVar14 + fVar17;
            goto LAB_1800c90e5;
          }
          fVar18 = fVar17;
        }
        else {
          fVar17 = *(float *)(lVar4 + 0x14);
          fVar18 = fVar17 * ((float)iVar1 / (float)iVar2);
        }
        in_stack_fffffffffffffec8 = &local_res10;
        param_5._0_4_ = 0x3f800000;
        param_5._4_4_ = 0x3f800000;
        local_res10 = 0;
        local_ec = (fVar16 + fVar15) - fVar17 * fVar6 * fVar5;
        local_d8 = 0;
        local_f8 = fVar18 + fVar14;
        local_f4 = fVar17 + local_ec;
        local_f0 = fVar14;
        local_d0 = lVar13;
        FUN_1803fea90(param_1,&local_d8,&local_f0,&local_f8,in_stack_fffffffffffffec8,&param_5,uVar8
                     );
        fVar14 = fVar14 + fVar18;
      }
LAB_1800c90e5:
      pcVar12 = pcVar12 + 0x28;
    } while (pcVar12 != pcVar3);
  }
  return;
}



/* ===== 1800c9150 FUN_1800c9150 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1800c9150(undefined8 param_1,double param_2)

{
  double dVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  undefined8 **ppuVar10;
  longlong *plVar11;
  ulonglong uVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined1 auStack_338 [8];
  undefined1 auStack_330 [24];
  undefined4 local_318;
  undefined8 *local_310;
  undefined8 *local_308;
  char local_2f8;
  undefined4 local_2f4;
  undefined4 local_2f0;
  undefined4 local_2ec;
  undefined4 local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  longlong *local_2d0;
  longlong *plStack_2c8;
  longlong local_2c0;
  undefined4 local_2b8;
  undefined2 local_2a8;
  undefined4 local_2a4;
  undefined4 local_2a0;
  undefined1 local_29c;
  undefined8 local_298;
  char local_290;
  undefined8 local_28c;
  undefined8 local_284;
  undefined8 local_278;
  undefined8 local_270;
  longlong *local_268;
  longlong *plStack_260;
  longlong local_258;
  undefined4 local_250;
  undefined1 local_248 [4];
  undefined4 local_244;
  undefined2 local_240;
  undefined1 local_23e;
  undefined4 local_23c;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined4 local_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined8 local_204;
  undefined4 local_1fc;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  char local_1b0;
  longlong local_1a8;
  undefined8 uStack_1a0;
  longlong local_198;
  longlong lStack_190;
  undefined1 local_188;
  undefined4 local_184;
  undefined1 local_180;
  undefined2 local_17f;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined8 local_164;
  undefined4 local_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 local_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 *local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined1 local_e8 [40];
  undefined1 local_c0 [32];
  undefined1 local_a0 [32];
  undefined4 local_80;
  undefined4 local_7c;
  undefined1 local_78;
  undefined1 local_77;
  undefined4 local_74;
  undefined4 local_70;
  undefined1 local_6c;
  undefined8 *local_68 [5];
  undefined8 *local_40 [3];
  
  cVar6 = DAT_180ca39d6;
  local_40[0] = (undefined8 *)(DAT_180919500 ^ (ulonglong)auStack_338);
  local_2a8 = 0;
  local_2a4 = 0xffffffff;
  local_2a0 = 0;
  local_29c = 0;
  local_298 = 0;
  local_290 = 0;
  local_28c = 0;
  local_284 = 0;
  local_278 = 0;
  local_270 = 0;
  local_268 = (longlong *)0x0;
  plStack_260 = (longlong *)0x0;
  local_258 = 0;
  local_250 = 0;
  local_248[0] = 0;
  local_244 = 0;
  local_240 = 0;
  local_23e = 0;
  local_23c = 0;
  local_238 = 0;
  uStack_230 = 0;
  local_228 = 0;
  uStack_224 = 0;
  uStack_220 = 0;
  uStack_21c = 0;
  uStack_218 = 0;
  uStack_214 = 0;
  uStack_210 = 0;
  uStack_20c = 0;
  uStack_208 = 0;
  local_204 = 0;
  local_1fc = 0;
  local_1f8 = _DAT_1808adf00;
  uStack_1f0 = _UNK_1808adf08;
  local_1e8 = _DAT_1808adf00;
  uStack_1e0 = _UNK_1808adf08;
  local_1d8 = DAT_1808acdb8;
  uStack_1c8 = 0;
  local_1c0 = 0;
  local_1b8 = 0xf;
  local_1d0 = 0;
  local_1b0 = '\0';
  LOCK();
  DAT_180ca39d6 = 1;
  UNLOCK();
  if (cVar6 == '\0') {
    LOCK();
    DAT_180ca39d7 = 1;
    UNLOCK();
    local_308 = (undefined8 *)param_1;
    local_308 = (undefined8 *)FUN_1804ecaa0(8);
    *local_308 = FUN_1800d3d70;
    local_310 = &uStack_1a0;
    local_318 = 0;
    lVar9 = FUN_180515e84(0,0,FUN_1800d5400,local_308);
    uVar7 = uStack_1a0._4_4_;
    local_1a8 = lVar9;
    if (lVar9 == 0) {
      uStack_1a0 = (ulonglong)uStack_1a0._4_4_ << 0x20;
                    /* WARNING: Subroutine does not return */
      FUN_1804e4a90(6);
    }
    if (DAT_180ca0dd0 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_180515f70();
    }
    DAT_180ca0dd0 = (int)uStack_1a0;
    local_1a8 = 0;
    uStack_1a0 = 0;
    _DAT_180ca0dd4 = uVar7;
    _DAT_180ca0dc8 = lVar9;
  }
  local_308 = (undefined8 *)&DAT_1809ebb70;
  iVar8 = FUN_1804e4d70(&DAT_1809ebb70);
  if (iVar8 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809ebbbc == 0x7fffffff) {
    DAT_1809ebbbc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  local_2f8 = DAT_180cd0de0;
  local_2f4 = DAT_180cd0de4;
  local_2f0 = DAT_180cd0de8;
  local_2ec = DAT_180cd0dec;
  local_2e8 = DAT_180cd0df0;
  local_2e0 = DAT_180cd0df8;
  local_2d8 = DAT_180cd0e00;
  FUN_18006d740(&local_2d0,&DAT_180cd0e08);
  local_2b8 = DAT_180cd0e20;
  FUN_1804e4e90(&DAT_1809ebb70);
  local_290 = local_2f8;
  local_28c = CONCAT44(local_2f0,local_2f4);
  local_284 = CONCAT44(local_2e8,local_2ec);
  local_278 = local_2e0;
  local_270 = local_2d8;
  if (local_268 == (longlong *)0x0) {
LAB_1800c9411:
    local_268 = local_2d0;
    plStack_260 = plStack_2c8;
    local_258 = local_2c0;
    local_2d0 = (longlong *)0x0;
    plStack_2c8 = (longlong *)0x0;
    local_2c0 = 0;
    local_250 = local_2b8;
    FUN_180068f30(&local_2d0);
    puVar13 = auStack_338;
    if (DAT_180ca006b == '\0') {
      FUN_180205b40(local_e8);
      local_2a8 = CONCAT11(local_78,local_77);
      local_2a4 = local_80;
      local_2a0 = local_7c;
      local_29c = local_6c;
      local_298 = CONCAT44(local_70,local_74);
      AcquireSRWLockShared((PSRWLOCK)&DAT_180cd0d78);
      param_2 = param_2 - _DAT_1809eba70;
      if (param_2 < DAT_1808ac500) {
        FUN_1800c9960(local_248,&DAT_1809eba80);
        local_1b0 = '\x01';
      }
      ReleaseSRWLockShared((PSRWLOCK)&DAT_180cd0d78);
      if ((local_1b0 != '\0') && (0.0 < param_2)) {
        local_68[0] = &local_1f8;
        local_68[1] = &uStack_1f0;
        local_68[2] = &local_1e8;
        local_68[3] = &uStack_1e0;
        local_68[4] = &local_1d8;
        ppuVar10 = local_68;
        do {
          dVar1 = (double)**ppuVar10;
          if (0.0 <= dVar1) {
            **ppuVar10 = dVar1 + param_2;
          }
          ppuVar10 = ppuVar10 + 1;
        } while (ppuVar10 != local_40);
      }
      FUN_1800c9a50(param_1,&local_2a8);
      FUN_18000f890(local_a0);
      FUN_1800bcd20(local_c0);
      puVar14 = auStack_338;
      goto LAB_1800c989b;
    }
    local_2a8 = 0x101;
    local_2a4 = 0x26;
    local_2a0 = 0x437a0000;
    local_29c = 1;
    local_298 = 0x900000011;
    puVar14 = auStack_338;
    if (local_290 == '\0') {
      local_290 = '\x01';
      local_28c = 0x3f147ae13e6b851f;
      local_284 = 0x132400001068;
      local_278 = 0x8000;
      local_270 = 0x4c00;
      local_1a8 = _DAT_1808ada90;
      uStack_1a0 = _UNK_1808ada98;
      local_198 = _DAT_1808ad900;
      lStack_190 = _UNK_1808ad908;
      plVar11 = local_268;
      lVar9 = _DAT_1808ada90;
      if (7 < (ulonglong)(local_258 - (longlong)local_268 >> 2)) goto LAB_1800c9524;
      FUN_18006ba70(&local_268,8);
      puVar13 = auStack_338;
      *local_268 = local_1a8;
      local_268[1] = uStack_1a0;
      local_268[2] = local_198;
      local_268[3] = lStack_190;
      plStack_260 = local_268 + 4;
      goto LAB_1800c958d;
    }
  }
  else {
    uVar12 = (local_258 - (longlong)local_268 >> 2) * 4;
    plVar11 = local_268;
    if (uVar12 < 0x1000) {
LAB_1800c940c:
      thunk_FUN_1803d64e0(plVar11,uVar12);
      goto LAB_1800c9411;
    }
    plVar11 = (longlong *)local_268[-1];
    if ((undefined1 *)((longlong)local_268 + (-8 - (longlong)plVar11)) < (undefined1 *)0x20) {
      uVar12 = uVar12 + 0x27;
      goto LAB_1800c940c;
    }
    plVar11 = (longlong *)&DAT_00000005;
    pcVar2 = (code *)swi(0x29);
    lVar9 = (*pcVar2)();
    puVar13 = auStack_330;
LAB_1800c9524:
    uVar12 = (longlong)plStack_260 - (longlong)plVar11 >> 2;
    if (uVar12 < 8) {
      *(undefined8 *)(puVar13 + -8) = 0x1800c954c;
      FUN_180540530(lVar9,&local_1a8,uVar12 * 4);
      plVar11 = plStack_260;
      lVar9 = (8 - uVar12) * 4;
      *(undefined8 *)(puVar13 + -8) = 0x1800c9570;
      FUN_180540530(plStack_260,(longlong)&local_1a8 + uVar12 * 4,lVar9);
      plStack_260 = (longlong *)(lVar9 + (longlong)plVar11);
    }
    else {
      *(undefined8 *)(puVar13 + -8) = 0x1800c9589;
      FUN_180540530(lVar9,&local_1a8,0x20);
      plStack_260 = plVar11 + 4;
    }
LAB_1800c958d:
    local_250 = 0x3ef0a3d7;
    puVar14 = puVar13;
  }
  uVar5 = _UNK_1808adc88;
  uVar4 = _DAT_1808adc80;
  local_184 = 0;
  local_17f = 1;
  uStack_140 = 0x499b0780;
  uStack_13c = 0;
  uStack_108 = 0;
  local_100 = 0;
  local_f8 = 0xf;
  local_110 = (undefined8 *)0x0;
  local_188 = 1;
  local_17c = 0x42180000;
  local_178 = 0x40400000;
  local_174 = 0x3fcccccd;
  local_164 = 0x3ecccccd;
  local_15c = 0;
  uStack_158 = (undefined4)_DAT_1808adcd0;
  uStack_154 = (undefined4)((ulonglong)_DAT_1808adcd0 >> 0x20);
  uStack_150 = (undefined4)_UNK_1808adcd8;
  uStack_14c = (undefined4)((ulonglong)_UNK_1808adcd8 >> 0x20);
  uStack_148 = 0x40000000;
  local_170 = 0x41400000;
  local_16c = 0x41100000;
  local_168 = 0x41f80000;
  local_180 = 1;
  local_144 = 0x473cac00;
  local_120 = _DAT_1808adc80;
  uStack_118 = _UNK_1808adc88;
  local_130 = _DAT_1808adc80;
  uStack_128 = _UNK_1808adc88;
  local_138 = _DAT_1808adc80;
  *(undefined8 *)(puVar14 + -8) = 0x1800c968f;
  local_110 = (undefined8 *)FUN_18000fb70(0x20);
  uVar3 = _UNK_1806efa58;
  local_100 = 0x14;
  local_f8 = 0x1f;
  *local_110 = _DAT_1806efa50;
  local_110[1] = uVar3;
  *(undefined4 *)(local_110 + 2) = DAT_1806efa60;
  *(undefined1 *)((longlong)local_110 + 0x14) = 0;
  local_248[0] = 1;
  local_244 = 0;
  local_240 = 0x101;
  local_23e = 0;
  local_23c = 0x42180000;
  local_238 = _DAT_1808add40;
  uStack_230 = _UNK_1808add48;
  local_228 = (undefined4)_DAT_1808ad300;
  uStack_224 = (undefined4)((ulonglong)_DAT_1808ad300 >> 0x20);
  uStack_220 = (undefined4)_UNK_1808ad308;
  uStack_21c = (undefined4)((ulonglong)_UNK_1808ad308 >> 0x20);
  uStack_218 = (undefined4)_DAT_1808adcd0;
  uStack_214 = (undefined4)((ulonglong)_DAT_1808adcd0 >> 0x20);
  uStack_210 = (undefined4)_UNK_1808adcd8;
  uStack_20c = (undefined4)((ulonglong)_UNK_1808adcd8 >> 0x20);
  uStack_208 = 0x40000000;
  local_204 = 0x499b0780473cac00;
  local_1f8 = uVar4;
  uStack_1f0 = uVar5;
  local_1e8 = uVar4;
  uStack_1e0 = uVar5;
  local_1d8 = uVar4;
  *(undefined8 *)(puVar14 + -8) = 0x1800c9737;
  FUN_180029840(uVar4,local_110,0x14);
  local_1b0 = '\x01';
  *(undefined8 *)(puVar14 + -8) = 0x1800c974a;
  FUN_1800c9a50(param_1,&local_2a8);
  *(undefined8 *)(puVar14 + -8) = 0x1800c9757;
  FUN_18000f890(&local_110);
LAB_1800c989b:
  *(undefined8 *)(puVar14 + -8) = 0x1800c98a4;
  FUN_18000f890(&local_1d0);
  *(undefined8 *)(puVar14 + -8) = 0x1800c98ad;
  FUN_180068f30(&local_268);
  *(undefined8 *)(puVar14 + -8) = 0x1800c98bf;
  return param_1;
}



/* ===== 1800c9930 FUN_1800c9930 ===== */

void FUN_1800c9930(longlong param_1)

{
  FUN_18000f890(param_1 + 0xd8);
  FUN_180068f30(param_1 + 0x40);
  return;
}



/* ===== 1800c9960 FUN_1800c9960 ===== */

undefined1 * FUN_1800c9960(undefined1 *param_1,undefined1 *param_2)

{
  longlong *plVar1;
  
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  param_1[8] = param_2[8];
  param_1[9] = param_2[9];
  param_1[10] = param_2[10];
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  if (param_1 != param_2) {
    plVar1 = (longlong *)(param_2 + 0x78);
    if (0xf < *(ulonglong *)(param_2 + 0x90)) {
      plVar1 = (longlong *)*plVar1;
    }
    FUN_180029840(param_1 + 0x78,plVar1,*(undefined8 *)(param_2 + 0x88));
  }
  return param_1;
}



/* ===== 1800c9a50 FUN_1800c9a50 ===== */

undefined1 * FUN_1800c9a50(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  param_1[0xc] = param_2[0xc];
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  param_1[0x18] = param_2[0x18];
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  uVar1 = *(undefined8 *)(param_2 + 0x40);
  uVar2 = *(undefined8 *)(param_2 + 0x50);
  uVar3 = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  *(undefined8 *)(param_1 + 0x48) = uVar3;
  *(undefined8 *)(param_1 + 0x50) = uVar2;
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
  param_1[0x60] = param_2[0x60];
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_2 + 100);
  param_1[0x68] = param_2[0x68];
  param_1[0x69] = param_2[0x69];
  param_1[0x6a] = param_2[0x6a];
  *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_2 + 0x6c);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_2 + 0x74);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
  *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_2 + 0x7c);
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_2 + 0x80);
  *(undefined8 *)(param_1 + 0x84) = *(undefined8 *)(param_2 + 0x84);
  *(undefined8 *)(param_1 + 0x8c) = *(undefined8 *)(param_2 + 0x8c);
  *(undefined8 *)(param_1 + 0x94) = *(undefined8 *)(param_2 + 0x94);
  *(undefined8 *)(param_1 + 0x9c) = *(undefined8 *)(param_2 + 0x9c);
  *(undefined8 *)(param_1 + 0xa4) = *(undefined8 *)(param_2 + 0xa4);
  *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_2 + 0xb0);
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_2 + 0xb8);
  *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_2 + 0xc0);
  *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_2 + 200);
  *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_2 + 0xd0);
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0xe0);
  *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(param_2 + 0xd8);
  *(undefined8 *)(param_1 + 0xe0) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0xf0);
  *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_2 + 0xe8);
  *(undefined8 *)(param_1 + 0xf0) = uVar1;
  param_2[0xd8] = 0;
  *(undefined8 *)(param_2 + 0xe8) = 0;
  *(undefined8 *)(param_2 + 0xf0) = 0xf;
  param_1[0xf8] = param_2[0xf8];
  return param_1;
}



/* ===== 1800c9c40 FUN_1800c9c40 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1800c9c40(undefined8 *param_1,ulonglong param_2,char *param_3,double param_4)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int iVar11;
  size_t sVar12;
  int *piVar13;
  undefined8 uVar14;
  undefined8 *****pppppuVar15;
  undefined8 *puVar16;
  float *pfVar17;
  float *pfVar18;
  float *pfVar19;
  longlong *plVar20;
  ulonglong *puVar21;
  undefined8 uVar22;
  longlong lVar23;
  ulonglong ****ppppuVar24;
  char cVar25;
  char *pcVar26;
  char *pcVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  undefined4 *puVar30;
  ulonglong uVar31;
  undefined1 *puVar32;
  undefined1 *puVar33;
  undefined1 *puVar34;
  undefined1 *puVar35;
  undefined1 *puVar36;
  undefined1 *puVar37;
  undefined1 *puVar38;
  undefined1 *puVar39;
  undefined1 *puVar40;
  uint uVar41;
  ulonglong *****pppppuVar42;
  ulonglong *****pppppuVar43;
  uint uVar44;
  float *pfVar45;
  undefined1 uVar46;
  undefined1 uVar47;
  char *pcVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  undefined4 uVar53;
  undefined4 uVar54;
  double dVar55;
  undefined8 uStack_340;
  undefined1 auStack_338 [8];
  undefined1 auStack_330 [24];
  int local_318;
  uint local_308;
  float *local_300;
  float *local_2f8;
  float *local_2f0;
  float *local_2e8;
  float local_2e0 [2];
  byte local_2d8;
  undefined8 *local_2d0;
  undefined8 *local_2c8;
  uint local_2c0;
  float local_2bc;
  float local_2b8 [2];
  ulonglong local_2b0;
  char *local_2a8;
  char *local_2a0;
  undefined4 local_298 [2];
  undefined8 local_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 *local_258;
  undefined1 local_250 [32];
  undefined8 local_230;
  ulonglong uStack_228;
  ulonglong local_220;
  ulonglong uStack_218;
  ulonglong ****local_210;
  ulonglong ****ppppuStack_208;
  ulonglong local_200;
  ulonglong local_1f8;
  undefined1 local_1f0 [32];
  ulonglong *****local_1d0;
  longlong lStack_1c8;
  undefined1 local_1c0 [16];
  longlong local_1b0;
  longlong lStack_1a8;
  longlong local_1a0;
  ulonglong uStack_198;
  undefined8 *****local_190 [2];
  longlong local_180;
  ulonglong local_178;
  ulonglong local_170;
  ulonglong uStack_168;
  ulonglong local_160;
  ulonglong uStack_158;
  longlong local_150;
  longlong lStack_148;
  longlong local_140;
  ulonglong uStack_138;
  undefined4 local_128 [2];
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  ulonglong local_e8;
  
  puVar32 = auStack_338;
  puVar36 = auStack_338;
  puVar33 = auStack_338;
  puVar35 = auStack_338;
  puVar37 = auStack_338;
  puVar39 = auStack_338;
  puVar38 = auStack_338;
  puVar40 = auStack_338;
  local_e8 = DAT_180919500 ^ (ulonglong)auStack_338;
  local_2c8 = param_1;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  fVar10 = DAT_1808accdc;
  fVar9 = DAT_1808acc3c;
  fVar8 = DAT_1808acb08;
  dVar7 = DAT_1808ac570;
  uVar44 = 1;
  local_308 = 1;
  local_2d0 = param_1;
  if ((param_3[0xf8] == '\0') || (param_3[0x60] == '\0')) {
    uVar28 = param_2 & 0xffffffffffffff00;
  }
  else {
    uVar28 = 1;
  }
  local_2d8 = (byte)uVar28;
  uVar29 = 0;
  local_2c0 = 0;
  pfVar45 = (float *)(param_3 + 0x84);
  pfVar17 = (float *)(param_3 + 0x8c);
  pfVar18 = (float *)(param_3 + 0x94);
  pfVar19 = (float *)(param_3 + 0x9c);
  pcVar48 = param_3 + 0xd8;
  uVar53 = (undefined4)DAT_1808ac578;
  uVar54 = (undefined4)((ulonglong)DAT_1808ac578 >> 0x20);
  fVar51 = DAT_1808ac000;
  fVar49 = DAT_1808ac540;
  dVar55 = DAT_1808ac298;
  fVar50 = DAT_1808ac860;
  fVar52 = DAT_1808ac1f4;
  local_300 = pfVar45;
  local_2f8 = pfVar17;
  local_2f0 = pfVar18;
  local_2e8 = pfVar19;
  local_2b0 = param_2;
  local_2a8 = pcVar48;
  local_2a0 = param_3;
  local_258 = param_1;
  do {
    pcVar27 = local_2a0;
    uVar47 = 0;
    uVar46 = 2;
    if (*(char *)(param_2 + 0x6c + uVar29) == '\0') goto LAB_1800ca14e;
    iVar11 = 0;
    cVar25 = (char)uVar28;
    switch(local_2c0) {
    default:
      local_120 = 0;
      local_118 = 0;
      uStack_110 = 0;
      local_108 = 0;
      uStack_100 = 0;
      local_f8 = 0;
      local_f0 = 0;
      local_128[0] = 0;
      FUN_1800cd500(param_1,local_128);
      FUN_1800b38f0(&local_108);
      FUN_1800b38f0(&local_120);
      break;
    case 1:
      pcVar26 = (char *)FUN_1801c8250();
      pcVar27 = "";
      if (pcVar26 != (char *)0x0) {
        pcVar27 = pcVar26;
      }
      local_230 = 0;
      uStack_228 = 0;
      local_220 = 0;
      uStack_218 = 0;
      sVar12 = strlen(pcVar27);
      FUN_1800133a0(&local_230,pcVar27,sVar12);
      FUN_1800cb660(&local_2d0,1,&local_230,0);
      break;
    case 2:
      if (DAT_1809ec0b0 == 0) {
        uStack_228 = 0;
        local_220 = 7;
        uStack_218 = 0xf;
        local_230 = (ulonglong)
                    CONCAT16(s_default_18058b600[6],
                             CONCAT24(s_default_18058b600._4_2_,s_default_18058b600._0_4_));
        puVar16 = &local_230;
      }
      else {
        puVar16 = (undefined8 *)FUN_180024b50(&local_230,&DAT_1809ec0a0);
      }
      FUN_1800cb660(&local_2d0,2,puVar16,0);
      break;
    case 3:
      piVar13 = (int *)FUN_1800c8460(&local_210);
      iVar11 = *piVar13;
      fVar51 = (float)piVar13[4];
      if (*(int *)(param_2 + 0x60) == 1) {
        plVar20 = (longlong *)FUN_1800c8150(&local_1b0,"%d FPS (1%%L)",piVar13[1]);
        uVar44 = uVar44 | 2;
      }
      else {
        if (*(int *)(param_2 + 0x60) == 2) {
          plVar20 = (longlong *)FUN_1800c8150(local_1f0,"%d FPS %d (1%%L)",iVar11);
        }
        else {
          plVar20 = (longlong *)FUN_1800c8150(local_1f0,"%d FPS",iVar11);
        }
        uVar44 = uVar44 | 4;
      }
      pppppuVar42 = (ulonglong *****)*plVar20;
      local_1d0 = pppppuVar42;
      lStack_1c8 = plVar20[1];
      auVar3 = *(undefined1 (*) [16])(plVar20 + 2);
      uVar28 = auVar3._0_8_;
      local_1c0 = auVar3;
      plVar20[2] = 0;
      plVar20[3] = 0xf;
      *(undefined1 *)plVar20 = 0;
      local_308 = uVar44;
      if ((uVar44 & 4) != 0) {
        uVar44 = uVar44 & 0xfffffffb;
        local_308 = uVar44;
        FUN_18000f890(local_1f0);
      }
      if ((uVar44 & 2) != 0) {
        uVar44 = uVar44 & 0xfffffffd;
        local_308 = uVar44;
        FUN_18000f890(&local_1b0);
      }
      if (((0x20 < iVar11) && ((*(char *)(param_2 + 0x5d) == '\0' || (DAT_1808ac188 < fVar51)))) &&
         ((iVar11 < 0x41 ||
          ((uVar46 = uVar47, *(char *)(param_2 + 0x5d) != '\0' && (fVar51 <= DAT_1808ac230)))))) {
        uVar46 = 1;
      }
      local_210 = (ulonglong ****)0x0;
      ppppuStack_208 = (ulonglong ****)0x0;
      local_200 = 0;
      local_1f8 = 0;
      uVar29 = auVar3._8_8_;
      pppppuVar43 = (ulonglong *****)&local_1d0;
      if (0xf < uVar29) {
        pppppuVar43 = pppppuVar42;
      }
      if (0x7fffffffffffffff < uVar28) {
                    /* WARNING: Subroutine does not return */
        FUN_180011990();
      }
      if (uVar28 < 0x10) {
        local_1f8 = 0xf;
        local_210 = *pppppuVar43;
        ppppuStack_208 = pppppuVar43[1];
        local_200 = uVar28;
      }
      else {
        uVar31 = uVar28 | 0xf;
        if (uVar31 < 0x8000000000000000) {
          if (uVar31 < 0x16) {
            uVar31 = 0x16;
          }
        }
        else {
          uVar31 = 0x7fffffffffffffff;
        }
        local_210 = (ulonglong ****)FUN_18000fb70(uVar31 + 1);
        local_200 = uVar28;
        local_1f8 = uVar31;
        FUN_180540530(local_210,pppppuVar43,uVar28 + 1);
      }
      FUN_1800cb660(&local_2d0,3,&local_210,uVar46);
      goto LAB_1800ca0b6;
    case 4:
      uVar22 = FUN_1800c8230();
      uVar22 = FUN_180024b50(local_1f0,uVar22);
      FUN_1800cb660(&local_2d0,4,uVar22,0);
      break;
    case 5:
      dVar6 = (double)*(ulonglong *)(local_2a0 + 0x30);
      if (0.0 < dVar6) {
        iVar11 = (int)(((dVar6 - (double)*(ulonglong *)(local_2a0 + 0x38)) / dVar6) * DAT_1808ac6a8
                      + DAT_1808ac4a8);
      }
      dVar5 = (dVar6 - (double)*(ulonglong *)(local_2a0 + 0x38)) * dVar55;
      dVar6 = dVar6 * dVar55;
      if (*(int *)(param_2 + 100) == 1) {
        plVar20 = (longlong *)FUN_1800c8150(&local_1b0,"%.1f / %.1f GB",dVar5,dVar6);
        uVar44 = uVar44 | 8;
      }
      else {
        if (*(int *)(param_2 + 100) == 2) {
          local_318 = iVar11;
          plVar20 = (longlong *)FUN_1800c8150(local_1f0,"%.1f / %.1f GB (%d%%)",dVar5,dVar6);
        }
        else {
          plVar20 = (longlong *)FUN_1800c8150(local_1f0,"%d%% MEM",SUB84(dVar5,0),SUB84(dVar6,0));
        }
        uVar44 = uVar44 | 0x10;
      }
      pppppuVar42 = (ulonglong *****)*plVar20;
      local_1d0 = pppppuVar42;
      lStack_1c8 = plVar20[1];
      auVar3 = *(undefined1 (*) [16])(plVar20 + 2);
      uVar28 = auVar3._0_8_;
      local_1c0 = auVar3;
      plVar20[2] = 0;
      plVar20[3] = 0xf;
      *(undefined1 *)plVar20 = 0;
      local_308 = uVar44;
      if ((uVar44 & 0x10) != 0) {
        uVar44 = uVar44 & 0xffffffef;
        local_308 = uVar44;
        FUN_18000f890(local_1f0);
      }
      if ((uVar44 & 8) != 0) {
        uVar44 = uVar44 & 0xfffffff7;
        local_308 = uVar44;
        FUN_18000f890(&local_1b0);
      }
      if (iVar11 < 0x56) {
        uVar46 = 0x3c < iVar11;
      }
      local_210 = (ulonglong ****)0x0;
      ppppuStack_208 = (ulonglong ****)0x0;
      local_200 = 0;
      local_1f8 = 0;
      uVar29 = auVar3._8_8_;
      pppppuVar43 = (ulonglong *****)&local_1d0;
      if (0xf < uVar29) {
        pppppuVar43 = pppppuVar42;
      }
      if (0x7fffffffffffffff < uVar28) {
                    /* WARNING: Subroutine does not return */
        FUN_180011990();
      }
      if (uVar28 < 0x10) {
        local_1f8 = 0xf;
        local_210 = *pppppuVar43;
        ppppuStack_208 = pppppuVar43[1];
        local_200 = uVar28;
      }
      else {
        uVar31 = uVar28 | 0xf;
        if (uVar31 < 0x8000000000000000) {
          if (uVar31 < 0x16) {
            uVar31 = 0x16;
          }
        }
        else {
          uVar31 = 0x7fffffffffffffff;
        }
        local_210 = (ulonglong ****)FUN_18000fb70(uVar31 + 1);
        local_200 = uVar28;
        local_1f8 = uVar31;
        FUN_180540530(local_210,pppppuVar43,uVar28 + 1);
      }
      FUN_1800cb660(&local_2d0,5,&local_210,uVar46);
LAB_1800ca0b6:
      if (0xf < uVar29) {
        uVar28 = uVar29 + 1;
        pppppuVar43 = pppppuVar42;
        if (0xfff < uVar28) {
          pppppuVar43 = (ulonglong *****)pppppuVar42[-1];
          param_1 = (undefined8 *)((longlong)pppppuVar42 + (-8 - (longlong)pppppuVar43));
          puVar34 = auStack_338;
          if (&DAT_0000001f < param_1) {
LAB_1800cb560:
            pcVar4 = (code *)swi(0x29);
            (*pcVar4)(5);
            puVar35 = puVar34 + 8;
LAB_1800cb567:
            pcVar4 = (code *)swi(0x29);
            (*pcVar4)(5);
            puVar36 = puVar35 + 8;
LAB_1800cb56e:
            pcVar4 = (code *)swi(0x29);
            (*pcVar4)(5);
            puVar37 = puVar36 + 8;
LAB_1800cb575:
            pcVar4 = (code *)swi(0x29);
            (*pcVar4)(5);
            puVar38 = puVar37 + 8;
LAB_1800cb57c:
            pcVar4 = (code *)swi(0x29);
            (*pcVar4)(5);
            puVar39 = puVar38 + 8;
LAB_1800cb583:
            pcVar4 = (code *)swi(0x29);
            (*pcVar4)(5);
            puVar40 = puVar39 + 8;
LAB_1800cb58a:
            *(undefined8 *)(puVar40 + -8) = 0x1800cb59c;
            return param_1;
          }
          uVar28 = uVar29 + 0x28;
        }
        thunk_FUN_1803d64e0(pppppuVar43,uVar28);
      }
LAB_1800ca0f3:
      param_2 = local_2b0;
      pcVar48 = local_2a8;
      fVar50 = DAT_1808ac860;
      goto LAB_1800ca106;
    case 6:
      uVar41 = (uint)(*(float *)(local_2a0 + 0x1c) * fVar8 + fVar52);
      param_1 = (undefined8 *)(ulonglong)uVar41;
      if (*(char *)(param_2 + 0x5e) == '\0') {
        FUN_1800c8150(local_1f0,"%d%% CPU",param_1);
      }
      else {
        uVar22 = FUN_1800c8150(&local_1b0," %d%% CPU",
                               (int)(*(float *)(local_2a0 + 0x20) * fVar8 + fVar52));
        local_308 = uVar44 | 0x20;
        uVar14 = FUN_1800c8150(&local_1d0,"%d%% / ",param_1);
        local_308 = uVar44 | 0x60;
        puVar21 = (ulonglong *)FUN_1800134a0(uVar14,&DAT_1806ef864,3);
        local_230 = *puVar21;
        uStack_228 = puVar21[1];
        local_220 = puVar21[2];
        uStack_218 = puVar21[3];
        puVar21[2] = 0;
        puVar21[3] = 0xf;
        *(undefined1 *)puVar21 = 0;
        uVar44 = uVar44 | 0x20e0;
        local_308 = uVar44;
        FUN_180066820(local_1f0,&local_230,uVar22);
      }
      if ((char)uVar44 < '\0') {
        uVar44 = uVar44 & 0xffffff7f;
        local_308 = uVar44;
        if (0xf < uStack_218) {
          uVar29 = uStack_218 + 1;
          uVar28 = local_230;
          if (0xfff < uVar29) {
            uVar28 = *(ulonglong *)(local_230 - 8);
            if (0x1f < (local_230 - uVar28) - 8) {
              pcVar4 = (code *)swi(0x29);
              (*pcVar4)(5);
              puVar32 = auStack_330;
LAB_1800cb552:
              pcVar4 = (code *)swi(0x29);
              (*pcVar4)(5);
              puVar33 = puVar32 + 8;
              goto LAB_1800cb559;
            }
            uVar29 = uStack_218 + 0x28;
          }
          thunk_FUN_1803d64e0(uVar28,uVar29);
        }
      }
      if ((uVar44 & 0x40) != 0) {
        uVar44 = uVar44 & 0xffffffbf;
        local_308 = uVar44;
        FUN_18000f890(&local_1d0);
      }
      if ((uVar44 & 0x20) != 0) {
        uVar44 = uVar44 & 0xffffffdf;
        local_308 = uVar44;
        FUN_18000f890(&local_1b0);
      }
      if ((int)uVar41 < 0x5b) {
        uVar46 = 0x46 < (int)uVar41;
      }
      else {
        uVar46 = 2;
      }
      uVar22 = FUN_180024b50(&local_150,local_1f0);
      FUN_1800cb660(&local_2d0,6,uVar22,uVar46);
      FUN_18000f890(local_1f0);
      goto LAB_1800ca106;
    case 7:
      local_2e0[0] = 9.99;
      local_2bc = 0.0;
      local_2b8[0] = (float)*(int *)(local_2a0 + 0x24) / fVar9;
      pfVar17 = &local_2bc;
      if (0.0 <= local_2b8[0]) {
        pfVar17 = local_2b8;
      }
      pfVar18 = local_2e0;
      if (local_2b8[0] <= fVar50) {
        pfVar18 = pfVar17;
      }
      fVar51 = *pfVar18;
      local_2bc = 9.99;
      local_2e0[0] = 0.0;
      local_2b8[0] = (float)*(int *)(local_2a0 + 0x28) / fVar9;
      pfVar17 = local_2e0;
      if (0.0 <= local_2b8[0]) {
        pfVar17 = local_2b8;
      }
      pfVar18 = &local_2bc;
      if (local_2b8[0] <= fVar50) {
        pfVar18 = pfVar17;
      }
      if (*(char *)(param_2 + 0x5f) == '\0') {
        FUN_1800c8150(local_1f0,"%.2f GHz",(double)fVar51);
      }
      else {
        uVar22 = FUN_1800c8150(&local_1b0," %.2f GHz",(double)*pfVar18);
        local_308 = uVar44 | 0x100;
        uVar14 = FUN_1800c8150(&local_1d0,"%.2f / ",(double)fVar51);
        local_308 = uVar44 | 0x300;
        puVar21 = (ulonglong *)FUN_1800134a0(uVar14,&DAT_1806ef864,3);
        local_230 = *puVar21;
        uStack_228 = puVar21[1];
        local_220 = puVar21[2];
        uStack_218 = puVar21[3];
        puVar21[2] = 0;
        puVar21[3] = 0xf;
        *(undefined1 *)puVar21 = 0;
        uVar44 = uVar44 | 0x4700;
        local_308 = uVar44;
        FUN_180066820(local_1f0,&local_230,uVar22);
      }
      if ((uVar44 >> 10 & 1) != 0) {
        uVar44 = uVar44 & 0xfffffbff;
        local_308 = uVar44;
        if (0xf < uStack_218) {
          uVar29 = uStack_218 + 1;
          uVar28 = local_230;
          if (0xfff < uVar29) {
            uVar28 = *(ulonglong *)(local_230 - 8);
            if (0x1f < (local_230 - uVar28) - 8) goto LAB_1800cb552;
            uVar29 = uStack_218 + 0x28;
          }
          thunk_FUN_1803d64e0(uVar28,uVar29);
        }
      }
      if ((uVar44 >> 9 & 1) != 0) {
        uVar44 = uVar44 & 0xfffffdff;
        local_308 = uVar44;
        FUN_18000f890(&local_1d0);
      }
      if ((uVar44 >> 8 & 1) != 0) {
        uVar44 = uVar44 & 0xfffffeff;
        local_308 = uVar44;
        FUN_18000f890(&local_1b0);
      }
      uVar22 = FUN_180024b50(&local_150,local_1f0);
      FUN_1800cb660(&local_2d0,7,uVar22,0);
      FUN_18000f890(local_1f0);
      break;
    case 8:
      local_290 = 0;
      local_288 = 0;
      uStack_280 = 0;
      local_278 = 0;
      uStack_270 = 0;
      local_268 = 0;
      local_260 = 0;
      local_298[0] = 8;
      local_230 = 0;
      uStack_228 = 0;
      local_220 = 0;
      uStack_218 = 0;
      FUN_1800133a0(&local_230,&DAT_1806ef820,3);
      puVar16 = (undefined8 *)FUN_1800c88f0(&local_210,&local_230);
      if (&local_290 != puVar16) {
        FUN_1800b38f0(&local_290);
        local_290 = *puVar16;
        local_288 = puVar16[1];
        uStack_280 = puVar16[2];
        *puVar16 = 0;
        puVar16[1] = 0;
        puVar16[2] = 0;
      }
      FUN_1800b38f0(&local_210);
      if (uStack_218 < 0x10) {
LAB_1800ca7f4:
        FUN_1800cd500(param_1,local_298);
        FUN_1800b38f0(&local_278);
        FUN_1800b38f0(&local_290);
        break;
      }
      uVar29 = uStack_218 + 1;
      uVar28 = local_230;
      if (uVar29 < 0x1000) {
LAB_1800ca7ef:
        thunk_FUN_1803d64e0(uVar28,uVar29);
        goto LAB_1800ca7f4;
      }
      uVar28 = *(ulonglong *)(local_230 - 8);
      if ((local_230 - uVar28) - 8 < 0x20) {
        uVar29 = uStack_218 + 0x28;
        goto LAB_1800ca7ef;
      }
LAB_1800cb559:
      pcVar4 = (code *)swi(0x29);
      (*pcVar4)(5);
      puVar34 = puVar33 + 8;
      goto LAB_1800cb560;
    case 9:
      iVar11 = (int)(*(float *)(local_2a0 + 0x58) * fVar8 + fVar52);
      if (100 < iVar11) {
        iVar11 = 100;
      }
      uVar22 = FUN_1800c8150(local_1f0,"%d%% GPU",iVar11);
      FUN_1800cb660(&local_2d0,9,uVar22,0x5a < iVar11);
      break;
    case 10:
      if ((*local_2a0 == '\0') || (local_2a0[0xc] == '\0')) goto LAB_1800ca14e;
      iVar11 = *(int *)(local_2a0 + 0x14);
      if (iVar11 < 1) {
        iVar11 = 1;
      }
      fVar51 = (float)*(int *)(local_2a0 + 0x10) / (float)iVar11;
      if (fVar51 <= 0.0) {
        fVar51 = 0.0;
      }
      FUN_1800c8150(local_190,&DAT_1806dfe08,(double)fVar51);
      lVar23 = local_180;
      while (lVar23 != 0) {
        pppppuVar15 = local_190;
        if (0xf < local_178) {
          pppppuVar15 = local_190[0];
        }
        local_180 = lVar23 + -1;
        if (*(char *)((longlong)pppppuVar15 + local_180) != '0') {
          if (lVar23 != 0) {
            pppppuVar15 = local_190;
            if (0xf < local_178) {
              pppppuVar15 = local_190[0];
            }
            if (*(char *)((longlong)pppppuVar15 + local_180) == '.') {
              pppppuVar15 = local_190;
              if (0xf < local_178) {
                pppppuVar15 = local_190[0];
              }
              *(undefined1 *)((longlong)pppppuVar15 + local_180) = 0;
              lVar23 = local_180;
            }
          }
          break;
        }
        pppppuVar15 = local_190;
        if (0xf < local_178) {
          pppppuVar15 = local_190[0];
        }
        *(undefined1 *)((longlong)pppppuVar15 + local_180) = 0;
        lVar23 = local_180;
      }
      local_180 = lVar23;
      uVar22 = FUN_180073a70(local_1f0,local_190,&DAT_1806efaec);
      FUN_1800cb660(&local_2d0,10,uVar22,0);
      FUN_18000f890(local_190);
      break;
    case 0xb:
      if (local_2a0[1] == '\0') goto LAB_1800ca14e;
      iVar11 = (int)*(float *)(local_2a0 + 8);
      if ((((double)CONCAT44(uVar54,uVar53) <= param_4 - _DAT_1809eba78) || (DAT_180cd0488 < iVar11)
          ) && (DAT_180cd0488 = iVar11, (double)CONCAT44(uVar54,uVar53) <= param_4 - _DAT_1809eba78)
         ) {
        _DAT_1809eba78 = param_4;
      }
      uVar22 = FUN_1800c8150(local_1f0,"%d SPEED",DAT_180cd0488);
      FUN_1800cb660(&local_2d0,0xb,uVar22,0);
      break;
    case 0xc:
      if (local_2a0[0xf8] == '\0') {
        cVar25 = *local_2a0;
      }
      else {
        cVar25 = local_2a0[0x60];
      }
      fVar51 = (float)FUN_1800c7dc0(&DAT_180cd0d58,uVar28,SUB84(param_4,0));
      if ((cVar25 != '\0') && (DAT_1808ac750 <= fVar51)) {
        fVar49 = (float)FUN_180519080();
        uVar22 = FUN_1800c8150(local_1f0,"%d MS",(int)fVar49);
        if (fVar8 <= fVar51) {
          uVar47 = 2;
        }
        FUN_1800cb660(&local_2d0,0xc,uVar22,uVar47);
        break;
      }
      goto LAB_1800ca11a;
    case 0xd:
      if (((cVar25 == '\0') || (*(double *)(local_2a0 + 0xb0) < 0.0)) ||
         (dVar7 <= *(double *)(local_2a0 + 0xb0))) goto LAB_1800ca14e;
      fVar52 = *(float *)(local_2a0 + 0x84);
      fVar1 = *(float *)(local_2a0 + 0x88);
      if (fVar52 < fVar1) {
        pfVar45 = (float *)(local_2a0 + 0x88);
      }
      fVar2 = *pfVar45;
      if (fVar2 < fVar49) {
        uVar46 = fVar51 < fVar2;
      }
      else {
        uVar46 = 2;
      }
      if (fVar52 == fVar1) {
        puVar30 = (undefined4 *)&DAT_1806ef86c;
      }
      else {
        puVar30 = (undefined4 *)&DAT_1806ef864;
        if (fVar52 <= fVar1) {
          puVar30 = &DAT_1806ef860;
        }
      }
      uVar22 = FUN_1800c8150(&local_1d0,"%.1f%% DLV ",(double)fVar2);
      uVar22 = FUN_180042850(local_1f0,uVar22,puVar30);
      FUN_1800cb660(&local_2d0,0xd,uVar22,uVar46);
      FUN_18000f890(&local_1d0);
      goto LAB_1800ca106;
    case 0xe:
      if (((cVar25 == '\0') || (*(double *)(local_2a0 + 0xd0) < 0.0)) ||
         (dVar7 <= *(double *)(local_2a0 + 0xd0))) goto LAB_1800ca14e;
      fVar51 = *(float *)(local_2a0 + 0x70);
      fVar49 = (float)FUN_180519080();
      cVar25 = pcVar27[0x6a];
      if ((cVar25 != '\0') || (_DAT_1808ac82c <= fVar51)) {
        uVar53 = 2;
        pcVar27 = "VAR %d MS";
        if (cVar25 == '\0') goto LAB_1800cabbf;
      }
      else {
        uVar53 = 1;
LAB_1800cabbf:
        pcVar27 = &DAT_1806efb30;
      }
      uVar22 = FUN_1800c8150(local_1f0,pcVar27,(int)fVar49);
      FUN_1800cb660(&local_2d0,0xe,uVar22,uVar53);
      break;
    case 0xf:
      if ((cVar25 == '\0') || (*(float *)(local_2a0 + 0x74) < DAT_1808ac34c)) goto LAB_1800ca14e;
      iVar11 = *(int *)(local_2a0 + 100);
      if (iVar11 == 1) {
        local_220 = 9;
        uStack_218 = 0xf;
        local_230._0_1_ = s_TIMED_OUT_1806efb78[0];
        local_230._1_1_ = s_TIMED_OUT_1806efb78[1];
        local_230._2_1_ = s_TIMED_OUT_1806efb78[2];
        local_230._3_1_ = s_TIMED_OUT_1806efb78[3];
        local_230._4_1_ = s_TIMED_OUT_1806efb78[4];
        local_230._5_1_ = s_TIMED_OUT_1806efb78[5];
        local_230._6_1_ = s_TIMED_OUT_1806efb78[6];
        local_230._7_1_ = s_TIMED_OUT_1806efb78[7];
        uStack_228 = (ulonglong)(byte)s_TIMED_OUT_1806efb78[8];
        puVar16 = &local_230;
      }
      else {
        puVar16 = (undefined8 *)
                  FUN_1800c8150(&local_230,"TIMING OUT %.1fS",(double)*(float *)(local_2a0 + 0x74));
      }
      FUN_1800cb660(&local_2d0,0xf,puVar16,(iVar11 == 1) + '\x01');
      break;
    case 0x10:
      if (((cVar25 == '\0') || (*(double *)(local_2a0 + 0xb8) < 0.0)) ||
         (dVar7 <= *(double *)(local_2a0 + 0xb8))) goto LAB_1800ca14e;
      fVar52 = *(float *)(local_2a0 + 0x8c);
      fVar1 = *(float *)(local_2a0 + 0x90);
      if (fVar52 < fVar1) {
        pfVar17 = (float *)(local_2a0 + 0x90);
      }
      fVar2 = *pfVar17;
      if (fVar2 < fVar49) {
        uVar46 = fVar51 < fVar2;
      }
      else {
        uVar46 = 2;
      }
      if (fVar52 == fVar1) {
        puVar30 = (undefined4 *)&DAT_1806ef86c;
      }
      else {
        puVar30 = (undefined4 *)&DAT_1806ef864;
        if (fVar52 <= fVar1) {
          puVar30 = &DAT_1806ef860;
        }
      }
      uVar22 = FUN_1800c8150(&local_1d0,"%.1f%% LOSS ",(double)fVar2);
      uVar22 = FUN_180042850(local_1f0,uVar22,puVar30);
      FUN_1800cb660(&local_2d0,0x10,uVar22,uVar46);
      FUN_18000f890(&local_1d0);
      goto LAB_1800ca106;
    case 0x11:
      if (((cVar25 == '\0') || (*(double *)(local_2a0 + 0xc0) < 0.0)) ||
         (dVar7 <= *(double *)(local_2a0 + 0xc0))) goto LAB_1800ca14e;
      fVar52 = *(float *)(local_2a0 + 0x94);
      fVar1 = *(float *)(local_2a0 + 0x98);
      if (fVar52 < fVar1) {
        pfVar18 = (float *)(local_2a0 + 0x98);
      }
      fVar2 = *pfVar18;
      if (fVar2 < fVar49) {
        uVar46 = fVar51 < fVar2;
      }
      else {
        uVar46 = 2;
      }
      if (fVar52 == fVar1) {
        puVar30 = (undefined4 *)&DAT_1806ef86c;
      }
      else {
        puVar30 = (undefined4 *)&DAT_1806ef864;
        if (fVar52 <= fVar1) {
          puVar30 = &DAT_1806ef860;
        }
      }
      uVar22 = FUN_1800c8150(&local_1d0,"%.1f%% LATE ",(double)fVar2);
      uVar22 = FUN_180042850(local_1f0,uVar22,puVar30);
      FUN_1800cb660(&local_2d0,0x11,uVar22,uVar46);
      FUN_18000f890(&local_1d0);
LAB_1800ca106:
      param_1 = local_2c8;
      break;
    case 0x12:
      if (((cVar25 == '\0') || (*(double *)(local_2a0 + 200) < 0.0)) ||
         (dVar7 <= *(double *)(local_2a0 + 200))) goto LAB_1800ca14e;
      fVar51 = *(float *)(local_2a0 + 0x9c);
      fVar49 = *(float *)(local_2a0 + 0xa0);
      if (fVar51 < fVar49) {
        pfVar19 = (float *)(local_2a0 + 0xa0);
      }
      fVar52 = *pfVar19;
      if (fVar51 == fVar49) {
        puVar30 = (undefined4 *)&DAT_1806ef86c;
      }
      else {
        puVar30 = (undefined4 *)&DAT_1806ef864;
        if (fVar51 <= fVar49) {
          puVar30 = &DAT_1806ef860;
        }
      }
      fVar51 = (float)FUN_180519080();
      uVar22 = FUN_1800c8150(&local_1d0,"%dMS JITTER ",(int)fVar51);
      uVar22 = FUN_180042850(local_1f0,uVar22,puVar30);
      if (DAT_1808ac950 <= fVar52) {
        uVar47 = 2;
      }
      FUN_1800cb660(&local_2d0,0x12,uVar22,uVar47);
      FUN_18000f890(&local_1d0);
      break;
    case 0x13:
      if ((cVar25 == '\0') || (local_2a0[0x68] == '\0')) goto LAB_1800ca14e;
      fVar51 = *(float *)(local_2a0 + 0x78);
      fVar49 = *(float *)(local_2a0 + 0x7c);
      fVar50 = (float)FUN_180519080(fVar51 - fVar49);
      if (0.0 <= fVar51) {
        uVar46 = fVar51 < fVar49;
      }
      else {
        uVar46 = 2;
      }
      uVar22 = FUN_1800c8150(local_1f0,"RCV %+.0f MS",(double)fVar50);
      FUN_1800cb660(&local_2d0,0x13,uVar22,uVar46);
      fVar50 = DAT_1808ac860;
      break;
    case 0x14:
      if ((cVar25 == '\0') || (local_2a0[0x69] == '\0')) goto LAB_1800ca14e;
      fVar51 = *(float *)(local_2a0 + 0x80);
      if (*(int *)(param_2 + 0x68) == 1) {
        plVar20 = (longlong *)
                  FUN_1800c8150(&local_1b0,"PRED %+.1f T",(double)(fVar51 / DAT_1808ac90c));
        uVar44 = uVar44 | 0x800;
      }
      else {
        if (*(int *)(param_2 + 0x68) == 2) {
          plVar20 = (longlong *)
                    FUN_1800c8150(local_1f0,"PRED %+.0f MS (%+.1fT)",(double)fVar51,
                                  (double)(fVar51 / DAT_1808ac90c));
        }
        else {
          plVar20 = (longlong *)FUN_1800c8150(local_1f0,"PRED %+.0f MS",(double)fVar51);
        }
        uVar44 = uVar44 | 0x1000;
      }
      pppppuVar42 = (ulonglong *****)*plVar20;
      local_1d0 = pppppuVar42;
      lStack_1c8 = plVar20[1];
      auVar3 = *(undefined1 (*) [16])(plVar20 + 2);
      uVar28 = auVar3._0_8_;
      local_1c0 = auVar3;
      plVar20[2] = 0;
      plVar20[3] = 0xf;
      *(undefined1 *)plVar20 = 0;
      local_308 = uVar44;
      if ((uVar44 >> 0xc & 1) != 0) {
        uVar44 = uVar44 & 0xffffefff;
        local_308 = uVar44;
        FUN_18000f890(local_1f0);
      }
      if ((uVar44 >> 0xb & 1) != 0) {
        uVar44 = uVar44 & 0xfffff7ff;
        local_308 = uVar44;
        FUN_18000f890(&local_1b0);
      }
      local_210 = (ulonglong ****)0x0;
      ppppuStack_208 = (ulonglong ****)0x0;
      local_200 = 0;
      local_1f8 = 0;
      uVar29 = auVar3._8_8_;
      pppppuVar43 = (ulonglong *****)&local_1d0;
      if (0xf < uVar29) {
        pppppuVar43 = pppppuVar42;
      }
      if (0x7fffffffffffffff < uVar28) {
                    /* WARNING: Subroutine does not return */
        FUN_180011990();
      }
      if (uVar28 < 0x10) {
        local_1f8 = 0xf;
        local_210 = *pppppuVar43;
        ppppuStack_208 = pppppuVar43[1];
        local_200 = uVar28;
      }
      else {
        uVar31 = uVar28 | 0xf;
        if (uVar31 < 0x8000000000000000) {
          if (uVar31 < 0x16) {
            uVar31 = 0x16;
          }
        }
        else {
          uVar31 = 0x7fffffffffffffff;
        }
        local_210 = (ulonglong ****)FUN_18000fb70(uVar31 + 1);
        local_200 = uVar28;
        local_1f8 = uVar31;
        FUN_180540530(local_210,pppppuVar43,uVar28 + 1);
      }
      uVar22 = 0;
      if (fVar8 <= fVar51) {
        uVar22 = 2;
      }
      FUN_1800cb660(&local_2d0,0x14,&local_210,uVar22);
      if (0xf < uVar29) {
        uVar28 = uVar29 + 1;
        pppppuVar43 = pppppuVar42;
        if (0xfff < uVar28) {
          pppppuVar43 = (ulonglong *****)pppppuVar42[-1];
          param_1 = (undefined8 *)((longlong)pppppuVar42 + (-8 - (longlong)pppppuVar43));
          puVar34 = auStack_338;
          if (&DAT_0000001f < param_1) goto LAB_1800cb560;
          uVar28 = uVar29 + 0x28;
        }
        thunk_FUN_1803d64e0(pppppuVar43,uVar28);
      }
      goto LAB_1800ca0f3;
    case 0x15:
      if (cVar25 == '\0') goto LAB_1800ca14e;
      fVar51 = *(float *)(local_2a0 + 0xa8);
      if (fVar51 < fVar10) {
        if (fVar51 < fVar9) {
          pcVar26 = "%.0fB";
        }
        else {
          fVar51 = fVar51 / fVar9;
          pcVar26 = "%.0fK";
        }
      }
      else {
        fVar51 = fVar51 / fVar10;
        pcVar26 = "%.1fM";
      }
      FUN_1800c8150(local_1f0,pcVar26,(double)fVar51);
      local_308 = uVar44 | 0x8000;
      fVar51 = *(float *)(pcVar27 + 0xa4);
      if (fVar51 < fVar10) {
        if (fVar51 < fVar9) {
          pcVar27 = "%.0fB";
        }
        else {
          fVar51 = fVar51 / fVar9;
          pcVar27 = "%.0fK";
        }
      }
      else {
        fVar51 = fVar51 / fVar10;
        pcVar27 = "%.1fM";
      }
      FUN_1800c8150(&local_1d0,pcVar27,(double)fVar51);
      ppppuStack_208 = (ulonglong ****)0x0;
      local_200 = 3;
      local_1f8 = 0xf;
      local_210 = (ulonglong ****)(ulonglong)(uint3)DAT_1806ef860;
      local_308 = uVar44 | 0x18000;
      plVar20 = (longlong *)FUN_1800134a0(&local_210,&DAT_1806efc00,1);
      local_1b0 = *plVar20;
      lStack_1a8 = plVar20[1];
      local_1a0 = plVar20[2];
      uStack_198 = plVar20[3];
      plVar20[2] = 0;
      plVar20[3] = 0xf;
      *(undefined1 *)plVar20 = 0;
      local_308 = uVar44 | 0x38000;
      uVar22 = FUN_180066820(local_128,&local_1b0,&local_1d0);
      puVar21 = (ulonglong *)FUN_1800134a0(uVar22,&DAT_1806efbe8,3);
      local_230 = *puVar21;
      uStack_228 = puVar21[1];
      local_220 = puVar21[2];
      uStack_218 = puVar21[3];
      puVar21[2] = 0;
      puVar21[3] = 0xf;
      *(char *)puVar21 = '\0';
      local_308 = uVar44 | 0x78000;
      puVar21 = (ulonglong *)FUN_1800134a0(&local_230,&DAT_1806ef864,3);
      local_170 = *puVar21;
      uStack_168 = puVar21[1];
      local_160 = puVar21[2];
      uStack_158 = puVar21[3];
      puVar21[2] = 0;
      puVar21[3] = 0xf;
      *(undefined1 *)puVar21 = 0;
      local_308 = uVar44 | 0xf8000;
      plVar20 = (longlong *)FUN_1800134a0(&local_170,&DAT_1806efc00,1);
      local_150 = *plVar20;
      lStack_148 = plVar20[1];
      local_140 = plVar20[2];
      uStack_138 = plVar20[3];
      plVar20[2] = 0;
      plVar20[3] = 0xf;
      *(undefined1 *)plVar20 = 0;
      uVar44 = uVar44 | 0x1f8000;
      local_308 = uVar44;
      uVar22 = FUN_180066820(local_250,&local_150,local_1f0);
      FUN_1800cb660(&local_2d0,0x15,uVar22,0);
      if (0xf < uStack_138) {
        uVar28 = uStack_138 + 1;
        lVar23 = local_150;
        if (uVar28 < 0x1000) {
LAB_1800cb3bd:
          thunk_FUN_1803d64e0(lVar23,uVar28);
          goto LAB_1800cb3c3;
        }
        lVar23 = *(longlong *)(local_150 + -8);
        if ((local_150 - lVar23) - 8U < 0x20) {
          uVar28 = uStack_138 + 0x28;
          goto LAB_1800cb3bd;
        }
        goto LAB_1800cb567;
      }
LAB_1800cb3c3:
      if (0xf < uStack_158) {
        uVar29 = uStack_158 + 1;
        uVar28 = local_170;
        if (uVar29 < 0x1000) {
LAB_1800cb3ff:
          thunk_FUN_1803d64e0(uVar28,uVar29);
          goto LAB_1800cb404;
        }
        uVar28 = *(ulonglong *)(local_170 - 8);
        if ((local_170 - uVar28) - 8 < 0x20) {
          uVar29 = uStack_158 + 0x28;
          goto LAB_1800cb3ff;
        }
        goto LAB_1800cb56e;
      }
LAB_1800cb404:
      local_160 = 0;
      uStack_158 = 0xf;
      local_170 = local_170 & 0xffffffffffffff00;
      if (0xf < uStack_218) {
        uVar29 = uStack_218 + 1;
        uVar28 = local_230;
        if (uVar29 < 0x1000) {
LAB_1800cb453:
          thunk_FUN_1803d64e0(uVar28,uVar29);
          goto LAB_1800cb458;
        }
        uVar28 = *(ulonglong *)(local_230 - 8);
        if ((local_230 - uVar28) - 8 < 0x20) {
          uVar29 = uStack_218 + 0x28;
          goto LAB_1800cb453;
        }
        goto LAB_1800cb575;
      }
LAB_1800cb458:
      local_220 = 0;
      uStack_218 = 0xf;
      local_230 = local_230 & 0xffffffffffffff00;
      FUN_18000f890(local_128);
      if (0xf < uStack_198) {
        uVar28 = uStack_198 + 1;
        lVar23 = local_1b0;
        if (uVar28 < 0x1000) {
LAB_1800cb4b1:
          thunk_FUN_1803d64e0(lVar23,uVar28);
          goto LAB_1800cb4b7;
        }
        lVar23 = *(longlong *)(local_1b0 + -8);
        if ((local_1b0 - lVar23) - 8U < 0x20) {
          uVar28 = uStack_198 + 0x28;
          goto LAB_1800cb4b1;
        }
        goto LAB_1800cb57c;
      }
LAB_1800cb4b7:
      if (local_1f8 < 0x10) {
LAB_1800cb4f2:
        local_200 = 0;
        local_1f8 = 0xf;
        local_210 = (ulonglong ****)((ulonglong)local_210 & 0xffffffffffffff00);
        FUN_18000f890(&local_1d0);
        FUN_18000f890(local_1f0);
        break;
      }
      uVar28 = local_1f8 + 1;
      ppppuVar24 = local_210;
      if (uVar28 < 0x1000) {
LAB_1800cb4ed:
        thunk_FUN_1803d64e0(ppppuVar24,uVar28);
        goto LAB_1800cb4f2;
      }
      ppppuVar24 = (ulonglong ****)local_210[-1];
      if ((ulonglong)((longlong)local_210 + (-8 - (longlong)ppppuVar24)) < 0x20) {
        uVar28 = local_1f8 + 0x28;
        goto LAB_1800cb4ed;
      }
      goto LAB_1800cb583;
    case 0x16:
      if (cVar25 == '\0') goto LAB_1800ca14e;
      uVar22 = FUN_180024b50(local_128,pcVar48);
      FUN_1800cb660(&local_2d0,0x16,uVar22,0);
    }
    pfVar17 = local_2f8;
    pfVar18 = local_2f0;
    pfVar19 = local_2e8;
LAB_1800ca11a:
    uVar53 = (undefined4)DAT_1808ac578;
    uVar54 = (undefined4)((ulonglong)DAT_1808ac578 >> 0x20);
    pfVar45 = local_300;
    fVar51 = DAT_1808ac000;
    fVar49 = DAT_1808ac540;
    dVar55 = DAT_1808ac298;
    fVar52 = DAT_1808ac1f4;
LAB_1800ca14e:
    local_2c0 = local_2c0 + 1;
    uVar29 = (ulonglong)local_2c0;
    if (0x16 < (int)local_2c0) goto LAB_1800cb58a;
    uVar28 = (ulonglong)local_2d8;
  } while( true );
}



/* ===== 1800cb660 FUN_1800cb660 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800cb660(undefined8 *param_1,int param_2,undefined8 param_3,undefined4 param_4)

{
  char *_Str;
  code *pcVar1;
  size_t sVar2;
  undefined8 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 auStack_e8 [32];
  int local_c8 [2];
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined1 local_88 [24];
  undefined8 local_70;
  longlong local_68 [7];
  
  local_68[4] = DAT_180919500 ^ (ulonglong)auStack_e8;
  local_c0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  _Str = (&PTR_DAT_1805ce5a0)[param_2];
  local_68[0] = 0;
  local_68[1] = 0;
  local_68[2] = 0;
  local_68[3] = 0;
  local_c8[0] = param_2;
  local_70 = param_3;
  sVar2 = strlen(_Str);
  FUN_1800133a0(local_68,_Str,sVar2);
  puVar3 = (undefined8 *)FUN_1800c88f0(local_88,local_68);
  if (&local_c0 != puVar3) {
    FUN_1800b38f0(&local_c0);
    local_c0 = *puVar3;
    local_b8 = puVar3[1];
    uStack_b0 = puVar3[2];
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
  }
  FUN_1800b38f0(local_88);
  if (0xf < (ulonglong)local_68[3]) {
    uVar5 = local_68[3] + 1;
    lVar4 = local_68[0];
    if (0xfff < uVar5) {
      lVar4 = *(longlong *)(local_68[0] + -8);
      if (0x1f < (local_68[0] - lVar4) - 8U) {
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar5 = local_68[3] + 0x28;
    }
    thunk_FUN_1803d64e0(lVar4,uVar5);
  }
  puVar3 = (undefined8 *)FUN_1800c88f0(local_88,param_3);
  if (&local_a8 != puVar3) {
    FUN_1800b38f0(&local_a8);
    local_a8 = *puVar3;
    uStack_a0 = puVar3[1];
    local_98 = puVar3[2];
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
  }
  FUN_1800b38f0(local_88);
  local_90 = CONCAT44(local_90._4_4_,param_4);
  FUN_1800cd2f0(*param_1,local_c8);
  FUN_1800b38f0(&local_a8);
  FUN_1800b38f0(&local_c0);
  FUN_18000f890(param_3);
  return;
}



/* ===== 1800cb810 FUN_1800cb810 ===== */

void FUN_1800cb810(longlong param_1)

{
  FUN_1800b38f0(param_1 + 0x20);
  FUN_1800b38f0(param_1 + 8);
  return;
}



/* ===== 1800cb830 FUN_1800cb830 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800cb830(longlong param_1,longlong param_2,float param_3)

{
  code *pcVar1;
  undefined1 auVar2 [12];
  bool bVar3;
  undefined1 auVar4 [16];
  float fVar5;
  int iVar6;
  undefined4 uVar7;
  float fVar8;
  undefined4 uVar9;
  longlong *plVar10;
  int *piVar11;
  float *pfVar12;
  int *piVar13;
  float *pfVar14;
  longlong lVar15;
  ulonglong uVar16;
  longlong lVar17;
  undefined1 *puVar18;
  ulonglong uVar19;
  int iVar20;
  int iVar21;
  undefined *puVar22;
  ulonglong uVar23;
  float fVar24;
  float fVar25;
  undefined1 auVar30 [12];
  float fVar26;
  undefined4 uVar27;
  float fVar28;
  undefined8 uVar29;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined8 extraout_XMM0_Qb_01;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  undefined8 uStack_440;
  undefined1 auStack_438 [8];
  undefined1 auStack_430 [24];
  float *local_418;
  float local_410;
  float local_408;
  undefined4 local_400;
  undefined4 local_3f8;
  float local_3e8;
  float local_3e4;
  float local_3e0;
  float local_3dc;
  float local_3d8;
  float local_3d0;
  float local_3cc;
  float local_3c8;
  float local_3c4;
  float local_3c0;
  float local_3bc;
  float local_3b8;
  float local_3b0;
  float local_3ac;
  float local_3a8;
  float local_3a4;
  undefined1 *local_3a0;
  int *local_398;
  int *piStack_390;
  longlong local_388;
  float local_380;
  float local_37c;
  float local_378 [2];
  longlong local_370;
  float local_368;
  float local_364;
  int local_360;
  int local_35c;
  int local_358;
  float local_354;
  int local_350;
  float local_34c;
  float local_348;
  float local_344;
  float local_340 [3];
  float local_334;
  float local_330;
  float local_32c;
  float local_328;
  float local_324;
  float local_320;
  float local_31c;
  float local_318;
  int local_314;
  float local_310;
  ulonglong local_308;
  int local_300;
  float local_2fc;
  float local_2f8 [2];
  float local_2f0;
  int local_2ec;
  float local_2e8;
  undefined4 local_2e4;
  undefined8 local_2e0;
  float local_2d8;
  float local_2d4;
  longlong local_2d0;
  float local_2c8;
  float local_2c4;
  float local_2c0;
  float local_2bc;
  float local_2b8;
  undefined4 local_2b4;
  undefined4 local_2b0;
  undefined4 local_2ac;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  float local_278;
  float local_274;
  float local_270;
  float local_26c;
  undefined8 local_268;
  undefined4 local_260;
  undefined8 local_258;
  undefined1 local_250;
  float local_248;
  float local_244;
  float local_240;
  float local_23c;
  undefined8 local_238;
  float local_230;
  float local_22c;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  ulonglong local_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined1 local_1e8 [64];
  longlong local_1a8;
  longlong local_1a0;
  undefined1 local_110 [40];
  ulonglong local_e8;
  
  local_e8 = DAT_180919500 ^ (ulonglong)auStack_438;
  local_2f8[0] = param_3;
  if ((param_1 == 0) || (DAT_18095ce00 == '\0')) {
    DAT_180cd0d50 = 0.0;
    FUN_180203580();
    FUN_1800cd840(&DAT_180ca0da0);
    puVar18 = auStack_438;
    goto LAB_1800ccbee;
  }
  plVar10 = (longlong *)FUN_1800ad890(&local_2d0);
  fVar28 = DAT_1808ac1f4;
  local_3a0 = (undefined1 *)((double)*plVar10 / DAT_1808ac9a0);
  uVar9 = SUB84(local_3a0,0);
  uVar7 = 2;
  local_300 = 2;
  local_314 = 0;
  piVar13 = &local_314;
  if (-1 < DAT_18095ce08) {
    piVar13 = &DAT_18095ce08;
  }
  piVar11 = &local_300;
  if (DAT_18095ce08 < 3) {
    piVar11 = piVar13;
  }
  local_350 = *piVar11;
  lVar15 = (longlong)local_350;
  local_2f0 = 3.0;
  local_2fc = 0.5;
  pfVar14 = &local_2fc;
  if (DAT_1808ac1f4 <= param_3) {
    pfVar14 = local_2f8;
  }
  pfVar12 = &local_2f0;
  if (param_3 <= DAT_1808ac658) {
    pfVar12 = pfVar14;
  }
  fVar47 = *pfVar12;
  if (local_350 == 0) {
    local_370 = DAT_181107a48;
LAB_1800cb96b:
    if (local_370 == 0) {
      local_370 = DAT_181107a20;
      goto LAB_1800cb98e;
    }
  }
  else {
    if (local_350 == 1) {
      local_370 = DAT_1811079d0;
      goto LAB_1800cb96b;
    }
    local_370 = DAT_181107a38;
LAB_1800cb98e:
    if (local_370 == 0) {
      local_370 = *(longlong *)(DAT_180ca0a50 + 0x11f0);
    }
  }
  local_3e8 = *(float *)(&UNK_1805ce310 + lVar15 * 4) * DAT_1808ac404 * fVar47;
  local_364 = *(float *)(&UNK_1805ce310 + lVar15 * 4) * fVar47;
  fVar46 = fVar47 * *(float *)(&UNK_1805ce300 + lVar15 * 4);
  fVar45 = fVar47 * *(float *)(&UNK_1805ce320 + lVar15 * 4);
  fVar43 = fVar47 * DAT_1808ac864;
  local_3bc = fVar43 + fVar47;
  local_378[0] = fVar47;
  local_368 = local_3e8;
  FUN_1800c9150(local_1e8);
  FUN_1800c9c40(&local_398,&DAT_18095ce00,local_1e8,uVar9);
  fVar40 = DAT_1808ac2cc;
  fVar24 = (float)FUN_180519080(fVar47 * *(float *)(&UNK_1805ce300 + lVar15 * 4) * DAT_1808ac2cc);
  uStack_200 = 0;
  local_1f8 = 7;
  local_1f0 = 0xf;
  local_208 = (ulonglong)
              CONCAT16(DAT_1806efc08._6_1_,CONCAT24(DAT_1806efc08._4_2_,(undefined4)DAT_1806efc08));
  plVar10 = (longlong *)
            FUN_18039ed80(&local_228,&local_208,
                          "<svg xmlns=\"http://www.w3.org/2000/svg\" width=\"160\" height=\"160\" viewBox=\"0 0 100 100\"><g transform=\"translate(-24 -23) scale(1.45)\"><path d=\"M0 0 C0.72 0.02 1.44 0.05 2.18 0.07 C2.9 0.09 3.63 0.11 4.38 0.12 C4.65 0.14 4.65 0.14 6.05 0.2 C6.38 1.19 6.71 2.18 7.05 3.2 C7.71 3.2 8.37 3.2 9.05 3.2 C9.89 4.65 10.73 6.11 11.55 7.57 C12.02 8.38 12.48 9.19 12.96 10.03 C14.05 12.2 14.05 12.2 14.05 14.2 C14.71 14.2 15.37 14.2 16.05 14.2 C16.05 9.91 16.05 5.62 16.05 1.2 C18.05 0.2 18.05 0.2 25.05 0.2 C25.05 10.76 25.05 21.32 25.05 32.2 C21.75 32.2 18.45 32.2 15.05 32.2 C12.91 30.01 12.1 28.96 10.93 26.32 C10.64 25.76 10.35 25.21 10.05 24.64 C8.05 20.68 8.05 20.68 8.05 18.2 C7.06 18.2 6.07 18.2 5.05 18.2 C5.05 22.82 5.05 27.44 5.05 32.2 C2.41 32.2 -0.23 32.2 -2.95 32.2 C-5 28.09 -4.13 22.75 -4.13 18.19 C-4.13 16.2 -4.15 14.21 -4.17 12.23 C-4.17 10.97 -4.17 9.71 -4.18 8.45 C-4.18 7.3 -4.18 6.15 -4.19 4.96 C-3.91 1.75 -3.39 0.34 0 0 Z \" fill=\"#F3F3FB\" transform=\"translate(25.9453125,32.8046875)\" />\n<path d=\"M0 0 C2.97 0 5.94 0 9 0 C9 7.92 9 15.84 9 24 C11.97 24 14.94 24 18 24 C19.32 24.33 20.64 24.66 22 25 C22 27.64 22 30.28 22 33 C14.41 33 6.82 33 -1 33 C-1.02 28.46 -1.04 23.92 -1.05 19.38 C-1.06 17.84 -1.07 16.29 -1.08 14.75 C-1.09 12.53 -1.09 10.31 -1.1 8.1 C-1.1 7.4 -1.11 6.71 -1.11 5.99 C-1.11 4.33 -1.06 2.66 -1 1 C-0.67 0.67 -0.34 0.34 0 0 Z \" fill=\"#C4C5ED\" transform=\"translate(58,33)\" />\n<path d=\"M0 0 C1.65 0 3.3 0 5 0 C6 1 6 1 6.11 3.22 C6.11 4.18 6.1 5.14 6.1 6.13 C6.1 6.65 6.1 6.65 6.09 9.26 C6.08 10.35 6.07 11.44 6.06 12.56 C6.06 13.65 6.05 14.75 6.05 15.87 C6.04 18.58 6.02 21.29 6 24 C10.29 24.33 14.58 24.66 19 25 C19 25.99 19 26.98 19 28 C12.73 28 6.46 28 0 28 C0 18.76 0 9.52 0 0 Z \" fill=\"#F5F5FC\" transform=\"translate(58,35)\" />\n<path d=\"M0 0 C0 10.56 0 21.12 0 32 C-3.3 32 -6.6 32 -10 32 C-14 27.62 -14 27.62 -14 24 C-13.34 24 -12.68 24 -12 24 C-12 24.66 -12 25.32 -12 26 C-10.52 26.33 -10.52 26.33 -3 28 C-3 19.75 -3 11.5 -3 3 C-4.32 3 -5.64 3 -7 3 C-7 7.62 -7 12.24 -7 17 C-12 16 -12 16 -14 15 C-14.41 13.15 -14.4..." /* TRUNCATED STRING LITERAL */
                          ,(int)(fVar24 + fVar24 + fVar28));
  lVar17 = *plVar10;
  iVar6 = (int)plVar10[1];
  iVar21 = *(int *)((longlong)plVar10 + 0xc);
  local_35c = iVar6;
  local_358 = iVar21;
  local_2d0 = lVar17;
  FUN_18000f890();
  local_354 = (float)FUN_180519080(fVar47 * *(float *)(&UNK_1805ce300 + lVar15 * 4) * fVar40);
  if (((lVar17 == 0) || (iVar6 < 1)) || (iVar21 < 1)) {
    fVar28 = DAT_1808ac520;
  }
  else {
    fVar28 = (float)iVar6 / (float)iVar21;
  }
  local_3c8 = (float)FUN_180519080(fVar28 * local_354);
  local_34c = fVar47 + fVar47;
  fVar25 = (float)FUN_18053fc00();
  local_3e0 = fVar25;
  local_3e4 = (float)FUN_18053fc00();
  piVar13 = piStack_390;
  fVar24 = local_3c8;
  fVar40 = DAT_1808ac34c;
  fVar28 = DAT_1808ac2f0;
  fVar26 = fVar43 + fVar47;
  if (local_398 != piStack_390) {
    fVar41 = fVar47 * DAT_1808ac750;
    piVar11 = local_398;
    fVar26 = local_3e4;
    do {
      if (*piVar11 == 0) {
        fVar44 = fVar24;
      }
      else {
        if (*piVar11 == 8) {
          uVar16 = local_1a0 - local_1a8 >> 2;
          auVar31._4_12_ = SUB1612(ZEXT816(0),4);
          fVar44 = (float)uVar16;
          if (uVar16 < 2) {
            auVar32._0_4_ = fVar44 * fVar25 + 0.0;
            auVar32._4_12_ = auVar31._4_12_;
            fVar44 = (float)FUN_18053fc00(auVar32._0_8_);
          }
          else {
            auVar31._0_4_ = fVar44 * fVar25 + (fVar44 - fVar40) * fVar26;
            fVar44 = (float)FUN_18053fc00(auVar31._0_8_);
          }
        }
        else {
          if (*(longlong *)(piVar11 + 8) == *(longlong *)(piVar11 + 10)) {
            fVar25 = 0.0;
          }
          else {
            auVar33._0_8_ = FUN_1800c8cb0(piVar11 + 8,local_378);
            auVar33._8_8_ = extraout_XMM0_Qb;
            auVar34._4_12_ = auVar33._4_12_;
            auVar34._0_4_ = (float)auVar33._0_8_ + fVar28;
            fVar25 = (float)FUN_18053f0d0(auVar34._0_8_);
          }
          if (*(longlong *)(piVar11 + 2) == *(longlong *)(piVar11 + 4)) {
            fVar44 = 0.0;
          }
          else {
            auVar35._0_8_ = FUN_1800c8cb0(piVar11 + 2,local_378);
            auVar35._8_8_ = extraout_XMM0_Qb_00;
            auVar36._4_12_ = auVar35._4_12_;
            auVar36._0_4_ = (float)auVar35._0_8_ + fVar28;
            fVar44 = (float)FUN_18053f0d0(auVar36._0_8_);
            fVar44 = fVar44 + fVar41;
          }
          fVar44 = fVar44 + fVar25;
          fVar25 = local_3e0;
        }
        fVar26 = local_3e4;
      }
      piVar11[0xf] = (int)fVar44;
      piVar11 = piVar11 + 0x10;
    } while (piVar11 != piVar13);
    local_3e8 = local_368;
    fVar26 = local_3bc;
  }
  piVar11 = piStack_390;
  piVar13 = local_398;
  fVar28 = DAT_1808ac750;
  fVar24 = fVar47 * DAT_1808ac750;
  fVar40 = 0.0;
  uVar16 = 0;
  if ((longlong)piStack_390 - (longlong)local_398 >> 6 == 0) {
    local_3dc = fVar24;
  }
  else {
    do {
      uVar19 = (longlong)piVar11 - (longlong)piVar13 >> 6;
      uVar23 = uVar16 + 1;
      if (uVar23 < uVar19) {
        auVar30._4_8_ = 0;
        auVar30._0_4_ = fVar26;
      }
      else {
        auVar30 = ZEXT812(0);
      }
      local_3dc = fVar47 * fVar28;
      auVar2._4_8_ = auVar30._4_8_;
      auVar2._0_4_ = auVar30._0_4_ + (float)piVar13[uVar16 * 0x10 + 0xf];
      fVar25 = (float)FUN_180519080(auVar2._0_8_);
      fVar40 = fVar40 + fVar25;
      uVar16 = uVar23;
    } while (uVar23 < uVar19);
  }
  fVar25 = fVar46 - fVar43;
  if (fVar40 <= 0.0) {
    fVar26 = 0.0;
    local_3dc = fVar24;
  }
  else {
    fVar26 = fVar40 + fVar45 + fVar45;
  }
  fVar28 = fVar47 * fVar28;
  if (DAT_18095ce5c != '\0') {
    if (0.0 < fVar40) {
      fVar43 = (fVar26 - fVar45) + fVar28 + fVar43;
    }
    fVar26 = fVar43 + fVar25;
  }
  local_318 = fVar25;
  if (0.0 < fVar26) {
    local_380 = (float)FUN_180519080();
    fVar40 = DAT_1808ac1f4;
    local_360 = 5;
    local_2ec = 0;
    piVar13 = &local_2ec;
    if (-1 < DAT_18095ce04) {
      piVar13 = &DAT_18095ce04;
    }
    piVar11 = &local_360;
    if (DAT_18095ce04 < 6) {
      piVar11 = piVar13;
    }
    iVar6 = *piVar11;
    fVar24 = (float)FUN_18053fc00();
    local_3d0 = (float)FUN_18053fc00();
    local_380 = local_3d0 + local_380;
    local_3cc = fVar24;
    local_37c = (float)FUN_180519080();
    local_37c = local_37c + fVar24;
    fVar24 = fVar28 + fVar46;
    DAT_180cd0d50 = fVar24;
    if (iVar6 != 4) {
      DAT_180cd0d50 = 0.0;
    }
    if (DAT_18095ce83 == '\0') {
      iVar6 = FUN_1804e4d70(&DAT_1809f1200);
      if (iVar6 != 0) goto LAB_1800ccc63;
      if (DAT_1809f124c == 0x7fffffff) goto LAB_1800ccc50;
      _DAT_180ceb4c8 = 0;
    }
    else {
      if (iVar6 == 1) {
        auVar33 = ZEXT416((uint)(fVar28 + fVar24));
      }
      else {
        auVar33 = ZEXT416((uint)fVar24);
        if (2 < iVar6) {
          auVar33 = ZEXT416((uint)(fVar24 - fVar47 * DAT_1808ac838));
        }
      }
      fVar24 = auVar33._0_4_;
      auVar4._4_4_ = auVar33._12_4_ & _UNK_1808ade9c ^ auVar33._12_4_;
      auVar4._0_4_ = auVar33._8_4_ & _UNK_1808ade98 ^ auVar33._8_4_;
      auVar4._8_8_ = 0;
      auVar37._4_12_ = SUB1612(auVar4 << 0x40,4);
      auVar37._0_4_ =
           (float)((DAT_1808ac1f0 ^ (uint)fVar24) & _DAT_1808ade90 ^ (uint)fVar24) + fVar24;
      fVar24 = (float)FUN_18053fc00(auVar37._0_8_);
      if (iVar6 == 0) {
        uVar7 = 0;
      }
      else if (iVar6 == 1) {
        uVar7 = 1;
      }
      else if (iVar6 == 3) {
        uVar7 = 5;
      }
      else if (iVar6 == 4) {
        uVar7 = 4;
      }
      else if (iVar6 == 5) {
        uVar7 = 3;
      }
      if (*(float *)(param_2 + 4) <= 0.0) {
        fVar24 = 0.0;
      }
      else {
        fVar24 = (DAT_1808acc48 / *(float *)(param_2 + 4)) * fVar24;
      }
      iVar6 = FUN_1804e4d70(&DAT_1809f1200);
      if (iVar6 != 0) {
LAB_1800ccc63:
                    /* WARNING: Subroutine does not return */
        FUN_1804e4a90(5);
      }
      if (DAT_1809f124c == 0x7fffffff) {
LAB_1800ccc50:
        DAT_1809f124c = DAT_1809f124c + -1;
                    /* WARNING: Subroutine does not return */
        FUN_1804e4a90(6);
      }
      _DAT_180ceb4c8 = CONCAT44(fVar24,uVar7);
    }
    FUN_1804e4e90(&DAT_1809f1200);
    fVar43 = DAT_1808ac34c;
    fVar24 = DAT_1808abfe4;
    local_248 = (float)(_DAT_180960f74 & 0xff) * DAT_1808abfe4;
    local_244 = (float)(_DAT_180960f74 >> 8 & 0xff) * DAT_1808abfe4;
    local_240 = (float)(_DAT_180960f74 >> 0x10 & 0xff) * DAT_1808abfe4;
    local_23c = (float)(_DAT_180960f74 >> 0x18) * DAT_1808abfe4;
    local_238 = CONCAT44((float)(DAT_180960f58 >> 8 & 0xff) * DAT_1808abfe4,
                         (float)(DAT_180960f58 & 0xff) * DAT_1808abfe4);
    local_230 = (float)(DAT_180960f58 >> 0x10 & 0xff) * DAT_1808abfe4;
    local_22c = (float)(DAT_180960f58 >> 0x18) * DAT_1808abfe4;
    uVar7 = FUN_180089560(&local_248);
    local_408 = (float)FUN_180089560(&local_238);
    fVar26 = (local_37c - local_3cc) * fVar40;
    if (fVar47 * DAT_1808ac918 <= fVar26) {
      fVar26 = fVar47 * DAT_1808ac918;
    }
    local_3f8 = DAT_1808ac934;
    local_410 = fVar43;
    local_418 = (float *)CONCAT44(local_418._4_4_,fVar47);
    local_400 = uVar7;
    FUN_1800be550(param_1,&local_3d0,&local_380,fVar26);
    local_2b8 = DAT_18091a198;
    local_2b4 = DAT_18091a19c;
    local_2b0 = DAT_18091a1a0;
    local_2ac = 0x3f800000;
    local_278 = (float)(DAT_180960ed0 & 0xff) * fVar24;
    local_274 = (float)(DAT_180960ed0 >> 8 & 0xff) * fVar24;
    local_270 = (float)(DAT_180960ed0 >> 0x10 & 0xff) * fVar24;
    local_26c = (float)(DAT_180960ed0 >> 0x18) * fVar24;
    if ((longlong)piStack_390 - (longlong)local_398 >> 6 != 0) {
      local_310 = DAT_18095ce0c;
      local_328 = DAT_18095ce10;
      local_324 = DAT_18095ce14;
      local_320 = DAT_18095ce18;
      local_31c = DAT_18095ce1c;
      local_3d8 = DAT_18095ce20;
      local_334 = DAT_18095ce24;
      local_330 = DAT_18095ce28;
      fVar25 = ((fVar46 - local_3e8) * fVar40 + local_3cc) - fVar47;
      fVar45 = local_3d0 + fVar45;
      local_308 = 0;
      fVar47 = fVar47 * DAT_1808ac658;
      uVar16 = 0;
      fVar24 = DAT_18095ce20;
      fVar43 = DAT_18095ce24;
      fVar46 = DAT_18095ce28;
      local_3c4 = fVar25;
      local_3c0 = fVar47;
      while( true ) {
        lVar15 = local_2d0;
        fVar26 = local_354;
        piVar13 = local_398;
        piVar11 = (int *)(param_1 + 0xb0);
        puVar22 = &DAT_180cd04e0;
        iVar6 = local_398[uVar16 * 0x10];
        uVar23 = uVar16;
        fVar41 = fVar45;
        local_3b8 = fVar45;
        if (iVar6 == 0) {
          if (local_2d0 != 0) {
            if (0 < local_35c) {
              if (0 < local_358) {
                local_2c8 = fVar45;
                local_2c4 = (float)FUN_180519080((local_3e8 - local_354) * fVar40 + fVar25);
                local_2e8 = 1.0;
                local_2e4 = 0x3f800000;
                local_2e0 = 0;
                local_2d8 = fVar45 + local_3c8;
                local_2d4 = local_2c4 + fVar26;
                if ((lVar15 == *(longlong *)(param_1 + 0x78)) &&
                   (*(longlong *)(param_1 + 0x70) == 0)) {
                  bVar3 = false;
                }
                else {
                  if (*piVar11 == *(int *)(param_1 + 0xb4)) {
                    FUN_1803f7030(piVar11);
                  }
                  iVar6 = *piVar11;
                  lVar17 = *(longlong *)(param_1 + 0xb8);
                  *(undefined8 *)(lVar17 + (longlong)iVar6 * 0x10) = 0;
                  *(longlong *)(lVar17 + 8 + (longlong)iVar6 * 0x10) = lVar15;
                  *piVar11 = *piVar11 + 1;
                  *(undefined8 *)(param_1 + 0x70) = 0;
                  *(longlong *)(param_1 + 0x78) = lVar15;
                  FUN_1803fc0a0(param_1);
                  bVar3 = true;
                }
                FUN_1803fc3a0(param_1,6,4);
                local_410 = -NAN;
                local_418 = &local_2e8;
                FUN_1803fc4a0(param_1,&local_2c8,&local_2d8,&local_2e0);
                if (bVar3) {
                  FUN_1803fc340(param_1);
                }
              }
            }
          }
        }
        else if (iVar6 == 8) {
          if (local_350 == 0) {
            fVar47 = local_34c;
          }
          fVar44 = (fVar25 + local_3e8) - fVar47;
          fVar47 = fVar44 - (fVar47 + fVar25);
          fVar26 = DAT_1808ac34c;
          if (DAT_1808ac34c <= fVar47) {
            fVar26 = fVar47;
          }
          fVar48 = DAT_1808ac540;
          if (fVar26 <= DAT_1808ac540) {
            fVar48 = fVar26;
          }
          local_2a8 = _DAT_18095ce2c;
          uStack_2a0 = uRam000000018095ce34;
          local_340[0] = fVar48;
          local_340[2] = fVar26;
          uVar7 = FUN_1800c8040(&local_2a8);
          local_298 = _DAT_18095ce3c;
          uStack_290 = uRam000000018095ce44;
          fVar8 = (float)FUN_1800c8040(&local_298);
          local_288 = _DAT_18095ce4c;
          uStack_280 = uRam000000018095ce54;
          uVar9 = FUN_1800c8040(&local_288);
          lVar17 = local_1a0 - local_1a8 >> 2;
          lVar15 = DAT_180cd0498 - DAT_180cd0490 >> 5;
          if (lVar15 != lVar17) {
            local_268 = 0;
            local_260 = 0;
            local_258 = 0;
            local_250 = 0;
            FUN_1800ccd10(lVar15,lVar17,&local_268);
          }
          fVar5 = DAT_1808ac1f4;
          uVar19 = 0;
          uVar23 = local_308;
          fVar40 = DAT_1808ac1f4;
          fVar25 = local_3c4;
          fVar47 = local_3c0;
          if (local_1a0 - local_1a8 >> 2 != 0) {
            fVar42 = local_3e4 + local_3e0;
            do {
              local_344 = 1.0;
              local_348 = 0.0;
              local_32c = (float)FUN_1800c7dc0(uVar19 * 0x20 + DAT_180cd0490,local_1a8,local_3a0);
              pfVar14 = &local_348;
              if (0.0 <= local_32c) {
                pfVar14 = &local_32c;
              }
              pfVar12 = &local_344;
              if (local_32c <= DAT_1808ac34c) {
                pfVar12 = pfVar14;
              }
              local_340[1] = fVar26 * *pfVar12;
              pfVar14 = local_340;
              if (fVar48 <= local_340[1]) {
                pfVar14 = local_340 + 1;
              }
              pfVar12 = local_340 + 2;
              if (local_340[1] <= fVar26) {
                pfVar12 = pfVar14;
              }
              uVar27 = FUN_18053fc00((fVar44 - *pfVar12) + fVar5);
              fVar28 = (float)FUN_18053fc00();
              fVar47 = fVar45 + local_3e0;
              local_410 = (float)uVar7;
              local_408 = (float)uVar7;
              local_3b0 = fVar45;
              local_3ac = fVar28;
              local_2c0 = fVar47;
              local_2bc = fVar44;
              local_418._0_4_ = fVar8;
              FUN_1803fe730(param_1,&local_3b0,&local_2c0,fVar8);
              local_238 = CONCAT44(uVar27,fVar45);
              local_418 = (float *)CONCAT44(local_418._4_4_,uVar9);
              local_410 = fVar8;
              local_408 = fVar8;
              local_3a8 = fVar47;
              local_3a4 = fVar28;
              FUN_1803fe730(param_1,&local_238,&local_3a8,uVar9);
              fVar45 = fVar45 + fVar42;
              uVar19 = uVar19 + 1;
              uVar23 = local_308;
              fVar24 = local_3d8;
              fVar43 = local_334;
              fVar28 = local_3dc;
              fVar46 = local_330;
              fVar40 = DAT_1808ac1f4;
              fVar41 = local_3b8;
              fVar25 = local_3c4;
              fVar47 = local_3c0;
            } while (uVar19 < (ulonglong)(local_1a0 - local_1a8 >> 2));
          }
        }
        else {
          iVar21 = local_398[uVar16 * 0x10 + 0xe];
          if (iVar21 == 2) {
            local_23c = fVar46;
            local_248 = local_31c;
            local_244 = fVar24;
            local_240 = fVar43;
          }
          else if (iVar21 == 1) {
            local_23c = local_320;
            local_248 = local_310;
            local_244 = local_328;
            local_240 = local_324;
          }
          else {
            local_248 = 0.0;
            local_244 = 0.0;
            local_240 = 0.0;
            local_23c = 0.0;
          }
          pfVar14 = &local_248;
          if (iVar21 == 0) {
            pfVar14 = &local_2b8;
          }
          uVar7 = SUB84(local_3a0,0);
          FUN_1800c7eb0(&local_208,&DAT_180cd04b0 + (longlong)iVar6 * 0x60,pfVar14,uVar7);
          pfVar14 = &local_248;
          if (iVar21 == 0) {
            pfVar14 = &local_278;
          }
          FUN_1800c7eb0(&local_228,puVar22 + (longlong)piVar13[uVar16 * 0x10] * 0x60,pfVar14,uVar7);
          if (*(longlong *)(piVar13 + uVar16 * 0x10 + 2) ==
              *(longlong *)(piVar13 + uVar16 * 0x10 + 4)) {
            uVar7 = 0;
          }
          else {
            local_410 = (float)FUN_1800c8040(&local_208);
            local_418 = local_378;
            FUN_1800c8e00(param_1,piVar13 + uVar16 * 0x10 + 2,fVar45,fVar25);
            auVar38._0_8_ = FUN_1800c8cb0(piVar13 + uVar16 * 0x10 + 2);
            auVar38._8_8_ = extraout_XMM0_Qb_01;
            auVar39._4_12_ = auVar38._4_12_;
            auVar39._0_4_ = (float)auVar38._0_8_ + DAT_1808ac2f0;
            uVar29 = FUN_18053f0d0(auVar39._0_8_);
            uVar7 = (undefined4)((ulonglong)uVar29 >> 0x20);
            local_3e8 = local_368;
            fVar45 = (float)uVar29 + fVar28 + fVar45;
          }
          piVar11 = piVar13 + uVar16 * 0x10;
          fVar24 = local_3d8;
          if (*(longlong *)(piVar11 + 8) != *(longlong *)(piVar13 + uVar16 * 0x10 + 10)) {
            local_410 = (float)FUN_1800c8040(&local_228);
            local_418 = local_378;
            FUN_1800c8e00(param_1,piVar11 + 8,CONCAT44(uVar7,fVar45),fVar25);
            local_3e8 = local_368;
            fVar24 = local_3d8;
          }
        }
        uVar23 = uVar23 + 1;
        local_308 = uVar23;
        if ((ulonglong)((longlong)piStack_390 - (longlong)local_398 >> 6) <= uVar23) break;
        fVar45 = (float)FUN_180519080(local_3bc + (float)piVar13[uVar16 * 0x10 + 0xf]);
        fVar45 = fVar41 + fVar45;
        uVar16 = uVar23;
      }
      fVar25 = local_318;
    }
    iVar6 = 8;
    puVar18 = auStack_438;
    if (DAT_18095ce5c != '\0') {
      uStack_220 = 0;
      local_218 = 6;
      local_210 = 0xf;
      local_228 = (ulonglong)CONCAT24(s_avatar_1806e4e84._4_2_,s_avatar_1806e4e84._0_4_);
      local_410 = 2.24208e-43;
      local_418 = (float *)CONCAT44(local_418._4_4_,0xa0);
      plVar10 = (longlong *)FUN_18122232f(local_378,&local_228,&PNG_1806f8fa0,0x475b);
      lVar15 = *plVar10;
      lVar17 = plVar10[1];
      iVar21 = *(int *)((longlong)plVar10 + 0xc);
      if (local_210 < 0x10) {
LAB_1800cca0c:
        puVar18 = auStack_438;
        if (((lVar15 == 0) || (puVar18 = auStack_438, (int)lVar17 < 1)) ||
           (puVar18 = auStack_438, iVar21 < 1)) goto LAB_1800ccb42;
        local_3ac = fVar28 + local_3cc;
        local_3b0 = (local_380 - fVar28) - fVar25;
        local_3a0 = &DAT_3f8000003f800000;
        local_238 = 0;
        local_3a8 = local_3b0 + fVar25;
        local_3a4 = local_3ac + fVar25;
        puVar18 = auStack_438;
        if ((lVar15 != *(longlong *)(param_1 + 0x78)) ||
           (puVar18 = auStack_438, *(longlong *)(param_1 + 0x70) != 0)) goto LAB_1800cca8e;
        bVar3 = false;
        puVar18 = auStack_438;
      }
      else {
        uVar23 = local_210 + 1;
        uVar16 = local_228;
        if (uVar23 < 0x1000) {
LAB_1800cca07:
          thunk_FUN_1803d64e0(uVar16,uVar23);
          goto LAB_1800cca0c;
        }
        uVar16 = *(ulonglong *)(local_228 - 8);
        if ((local_228 - uVar16) - 8 < 0x20) {
          uVar23 = local_210 + 0x28;
          goto LAB_1800cca07;
        }
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        puVar18 = auStack_430;
LAB_1800cca8e:
        iVar21 = *(int *)(param_1 + 0xb4);
        if (*(int *)(param_1 + 0xb0) == iVar21) {
          iVar20 = *(int *)(param_1 + 0xb0) + 1;
          if (iVar21 != 0) {
            iVar6 = iVar21 + iVar21 / 2;
          }
          if (iVar20 < iVar6) {
            iVar20 = iVar6;
          }
          *(undefined8 *)(puVar18 + -8) = 0x1800ccac8;
          FUN_1803f7030(param_1 + 0xb0,iVar20);
        }
        iVar6 = *(int *)(param_1 + 0xb0);
        lVar17 = *(longlong *)(param_1 + 0xb8);
        *(undefined8 *)(lVar17 + (longlong)iVar6 * 0x10) = 0;
        *(longlong *)(lVar17 + 8 + (longlong)iVar6 * 0x10) = lVar15;
        *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 1;
        *(undefined8 *)(param_1 + 0x70) = 0;
        *(longlong *)(param_1 + 0x78) = lVar15;
        *(undefined8 *)(puVar18 + -8) = 0x1800ccaf8;
        FUN_1803fc0a0(param_1);
        bVar3 = true;
      }
      *(undefined8 *)(puVar18 + -8) = 0x1800ccb0d;
      FUN_1803fc3a0(param_1,6,4);
      *(undefined4 *)(puVar18 + 0x28) = 0xffffffff;
      *(undefined1 ***)(puVar18 + 0x20) = &local_3a0;
      *(undefined8 *)(puVar18 + -8) = 0x1800ccb35;
      FUN_1803fc4a0(param_1,&local_3b0,&local_3a8,&local_238);
      if (bVar3) {
        *(undefined8 *)(puVar18 + -8) = 0x1800ccb41;
        FUN_1803fc340(param_1);
      }
    }
  }
  else {
    DAT_180cd0d50 = 0.0;
    iVar6 = FUN_1804e4d70(&DAT_1809f1200);
    if (iVar6 != 0) goto LAB_1800ccc63;
    if (DAT_1809f124c == 0x7fffffff) goto LAB_1800ccc50;
    _DAT_180ceb4c8 = 0;
    FUN_1804e4e90(&DAT_1809f1200);
    puVar18 = auStack_438;
  }
LAB_1800ccb42:
  piVar13 = local_398;
  if (local_398 != (int *)0x0) {
    for (; piVar13 != piStack_390; piVar13 = piVar13 + 0x10) {
      *(undefined8 *)(puVar18 + -8) = 0x1800ccb5d;
      FUN_1800b38f0(piVar13 + 8);
      *(undefined8 *)(puVar18 + -8) = 0x1800ccb66;
      FUN_1800b38f0(piVar13 + 2);
    }
    if ((local_388 - (longlong)local_398 & 0xffffffffffffffc0U) < 0x1000) {
LAB_1800ccba5:
      piVar13 = local_398;
    }
    else {
      piVar13 = *(int **)(local_398 + -2);
      if (0x1f < (ulonglong)((longlong)local_398 + (-8 - (longlong)piVar13))) {
        pcVar1 = (code *)swi(0x29);
        local_398 = (int *)(*pcVar1)(5);
        puVar18 = puVar18 + 8;
        goto LAB_1800ccba5;
      }
    }
    *(undefined8 *)(puVar18 + -8) = 0x1800ccbad;
    thunk_FUN_1803d64e0(piVar13);
    local_398 = (int *)0x0;
    piStack_390 = (int *)0x0;
    local_388 = 0;
  }
  *(undefined8 *)(puVar18 + -8) = 0x1800ccbc5;
  FUN_18000f890(local_110);
  *(undefined8 *)(puVar18 + -8) = 0x1800ccbd1;
  FUN_180068f30(&local_1a8);
LAB_1800ccbee:
  *(undefined8 *)(puVar18 + -8) = 0x1800ccbfd;
  return;
}



/* ===== 1800ccc70 FUN_1800ccc70 ===== */

void FUN_1800ccc70(longlong *param_1)

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
  for (; lVar3 != lVar2; lVar3 = lVar3 + 0x40) {
    FUN_1800b38f0(lVar3 + 0x20);
    FUN_1800b38f0(lVar3 + 8);
  }
  lVar3 = *param_1;
  if (0xfff < (param_1[2] - lVar3 & 0xffffffffffffffc0U)) {
    lVar2 = *(longlong *)(lVar3 + -8);
    if ((lVar3 - lVar2) - 8U < 0x20) goto LAB_1800ccceb;
    pcVar1 = (code *)swi(0x29);
    lVar3 = (*pcVar1)(5);
    puVar4 = auStack_20;
  }
  lVar2 = lVar3;
  puVar5 = puVar4;
LAB_1800ccceb:
  *(undefined8 *)(puVar5 + -8) = 0x1800cccf0;
  thunk_FUN_1803d64e0(lVar2);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* ===== 1800ccd10 FUN_1800ccd10 ===== */

void FUN_1800ccd10(undefined8 param_1,ulonglong param_2,undefined8 *param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  puVar3 = DAT_180cd0498;
  puVar6 = auStack_28;
  puVar7 = auStack_28;
  uVar5 = (longlong)DAT_180cd04a0 - (longlong)DAT_180cd0490 >> 5;
  if (param_2 <= uVar5) {
    uVar5 = (longlong)DAT_180cd0498 - (longlong)DAT_180cd0490 >> 5;
    if (uVar5 < param_2) {
      puVar4 = DAT_180cd0490;
      if (DAT_180cd0490 != DAT_180cd0498) {
        do {
          uVar2 = param_3[1];
          *puVar4 = *param_3;
          puVar4[1] = uVar2;
          uVar2 = param_3[3];
          puVar4[2] = param_3[2];
          puVar4[3] = uVar2;
          puVar4 = puVar4 + 4;
        } while (puVar4 != puVar3);
      }
      for (lVar10 = param_2 - uVar5; lVar10 != 0; lVar10 = lVar10 + -1) {
        uVar2 = param_3[1];
        *DAT_180cd0498 = *param_3;
        DAT_180cd0498[1] = uVar2;
        uVar2 = param_3[3];
        DAT_180cd0498[2] = param_3[2];
        DAT_180cd0498[3] = uVar2;
        DAT_180cd0498 = DAT_180cd0498 + 4;
      }
    }
    else {
      DAT_180cd0498 = DAT_180cd0490 + param_2 * 4;
      puVar3 = DAT_180cd0490;
      if ((param_2 & 0x7ffffffffffffff) != 0) {
        do {
          uVar2 = param_3[1];
          *puVar3 = *param_3;
          puVar3[1] = uVar2;
          uVar2 = param_3[3];
          puVar3[2] = param_3[2];
          puVar3[3] = uVar2;
          puVar3 = puVar3 + 4;
        } while (puVar3 != DAT_180cd0498);
        return;
      }
    }
    return;
  }
  if (0x7ffffffffffffff < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_18000fb10();
  }
  if (0x7ffffffffffffff - (uVar5 >> 1) < uVar5) {
    uVar9 = 0x7ffffffffffffff;
  }
  else {
    uVar9 = (uVar5 >> 1) + uVar5;
    if (uVar9 < param_2) {
      uVar9 = param_2;
    }
  }
  puVar8 = auStack_28;
  if (DAT_180cd0490 == (undefined8 *)0x0) goto LAB_1800ccdcd;
  puVar3 = DAT_180cd0490;
  if (uVar5 << 5 < 0x1000) {
LAB_1800ccdac:
    puVar7 = puVar6;
  }
  else {
    puVar3 = (undefined8 *)DAT_180cd0490[-1];
    if ((undefined1 *)0x1f < (undefined1 *)((longlong)DAT_180cd0490 + (-8 - (longlong)puVar3))) {
      puVar3 = (undefined8 *)&DAT_00000005;
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(5);
      puVar6 = auStack_20;
      goto LAB_1800ccdac;
    }
  }
  *(undefined8 *)(puVar7 + -8) = 0x1800ccdb7;
  thunk_FUN_1803d64e0(puVar3);
  DAT_180cd04a0 = (undefined8 *)0x0;
  DAT_180cd0490 = (undefined8 *)0x0;
  DAT_180cd0498 = (undefined8 *)0x0;
  puVar8 = puVar7;
LAB_1800ccdcd:
  if (0x7ffffffffffffff < uVar9) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar8 + -8) = &UNK_1800ccef0;
    FUN_18000d840();
  }
  *(undefined8 *)(puVar8 + -8) = 0x1800ccde2;
  DAT_180cd0498 = (undefined8 *)FUN_18000fb70(uVar9 * 0x20);
  DAT_180cd04a0 = DAT_180cd0498 + uVar9 * 4;
  DAT_180cd0490 = DAT_180cd0498;
  for (; param_2 != 0; param_2 = param_2 - 1) {
    uVar2 = param_3[1];
    *DAT_180cd0498 = *param_3;
    DAT_180cd0498[1] = uVar2;
    uVar2 = param_3[3];
    DAT_180cd0498[2] = param_3[2];
    DAT_180cd0498[3] = uVar2;
    DAT_180cd0498 = DAT_180cd0498 + 4;
  }
  return;
}



/* ===== 1800ccf00 FUN_1800ccf00 ===== */

longlong * FUN_1800ccf00(longlong *param_1,longlong *param_2)

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
  if (lVar1 == 0) goto LAB_1800ccf78;
  lVar3 = lVar1;
  if ((ulonglong)((param_1[2] - lVar1 >> 2) * 4) < 0x1000) {
LAB_1800ccf62:
    puVar5 = puVar4;
  }
  else {
    lVar3 = *(longlong *)(lVar1 + -8);
    if (0x1f < (lVar1 - lVar3) - 8U) {
      lVar3 = 5;
      pcVar2 = (code *)swi(0x29);
      (*pcVar2)(5);
      puVar4 = auStack_20;
      goto LAB_1800ccf62;
    }
  }
  *(undefined8 *)(puVar5 + -8) = 0x1800ccf6d;
  thunk_FUN_1803d64e0(lVar3);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
LAB_1800ccf78:
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return param_1;
}



/* ===== 1800ccfb0 FUN_1800ccfb0 ===== */

void FUN_1800ccfb0(double *param_1,double *param_2,longlong param_3,undefined1 param_4)

{
  double dVar1;
  longlong lVar2;
  longlong lVar3;
  double *pdVar4;
  double *pdVar5;
  double *pdVar6;
  double *pdVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  double *local_58;
  double *local_50;
  
  lVar2 = (longlong)param_2 - (longlong)param_1;
  while( true ) {
    if (lVar2 >> 3 < 0x21) {
      if (param_1 != param_2) {
        for (pdVar5 = param_1 + 1; pdVar5 != param_2; pdVar5 = pdVar5 + 1) {
          dVar1 = *pdVar5;
          if (dVar1 < *param_1 || dVar1 == *param_1) {
            pdVar4 = pdVar5 + -1;
            pdVar6 = pdVar5;
            pdVar7 = pdVar5;
            if (pdVar5[-1] <= dVar1 && dVar1 != pdVar5[-1]) {
              do {
                pdVar7 = pdVar4;
                *pdVar6 = *pdVar7;
                pdVar4 = pdVar7 + -1;
                pdVar6 = pdVar7;
              } while (*pdVar4 <= dVar1 && dVar1 != *pdVar4);
            }
            *pdVar7 = dVar1;
          }
          else {
            FUN_180540530(param_1 + 1,param_1,(longlong)pdVar5 - (longlong)param_1);
            *param_1 = dVar1;
          }
        }
      }
      return;
    }
    uVar10 = (longlong)param_2 - (longlong)param_1;
    lVar2 = (longlong)uVar10 >> 4;
    if (param_3 < 1) break;
    pdVar5 = param_1 + lVar2;
    FUN_1800cdda0(param_1,pdVar5,param_2 + -1,param_4);
    FUN_1800cdf40(&local_58,param_1,pdVar5,param_2);
    pdVar4 = local_50;
    pdVar5 = local_58;
    param_3 = (param_3 >> 1) + (param_3 >> 2);
    if ((longlong)local_58 - (longlong)param_1 >> 3 < (longlong)param_2 - (longlong)local_50 >> 3) {
      FUN_1800ccfb0(param_1,local_58,param_3,param_4);
      pdVar5 = param_2;
      param_1 = pdVar4;
    }
    else {
      FUN_1800ccfb0(local_50,param_2,param_3,param_4);
    }
    lVar2 = (longlong)pdVar5 - (longlong)param_1;
    param_2 = pdVar5;
  }
  lVar8 = (longlong)uVar10 >> 3;
  if (0 < lVar2) {
    lVar11 = lVar8 + -1 >> 1;
    do {
      lVar9 = lVar2 + -1;
      dVar1 = param_1[lVar2 + -1];
      lVar2 = lVar9;
      while (lVar2 < lVar11) {
        lVar3 = (ulonglong)
                (param_1[lVar2 * 2 + 2] < param_1[lVar2 * 2 + 1] ||
                param_1[lVar2 * 2 + 2] == param_1[lVar2 * 2 + 1]) + 1 + lVar2 * 2;
        param_1[lVar2] = param_1[lVar3];
        lVar2 = lVar3;
      }
      if ((lVar2 == lVar11) && ((uVar10 & 8) == 0)) {
        param_1[lVar2] = *(double *)((longlong)param_1 + ((uVar10 & 0xfffffffffffffff8) - 8));
        lVar2 = lVar8 + -1;
      }
      while (lVar9 < lVar2) {
        lVar3 = lVar2 + -1 >> 1;
        if (param_1[lVar3] <= dVar1) break;
        param_1[lVar2] = param_1[lVar3];
        lVar2 = lVar3;
      }
      param_1[lVar2] = dVar1;
      lVar2 = lVar9;
    } while (0 < lVar9);
  }
  if (lVar8 < 2) {
    return;
  }
  do {
    if (1 < (longlong)param_2 - (longlong)param_1 >> 3) {
      dVar1 = param_2[-1];
      lVar2 = 0;
      param_2[-1] = *param_1;
      uVar10 = (longlong)(param_2 + -1) - (longlong)param_1;
      lVar11 = ((longlong)uVar10 >> 3) + -1;
      lVar9 = lVar11 >> 1;
      lVar8 = lVar2;
      if (0 < lVar9) {
        do {
          lVar2 = (ulonglong)
                  (param_1[lVar8 * 2 + 2] < param_1[lVar8 * 2 + 1] ||
                  param_1[lVar8 * 2 + 2] == param_1[lVar8 * 2 + 1]) + 1 + lVar8 * 2;
          param_1[lVar8] = param_1[lVar2];
          lVar8 = lVar2;
        } while (lVar2 < lVar9);
      }
      if ((lVar2 == lVar9) && ((uVar10 & 8) == 0)) {
        param_1[lVar2] = *(double *)((longlong)param_1 + ((uVar10 & 0xfffffffffffffff8) - 8));
        lVar2 = lVar11;
      }
      while (0 < lVar2) {
        lVar8 = lVar2 + -1 >> 1;
        if (param_1[lVar8] <= dVar1) break;
        param_1[lVar2] = param_1[lVar8];
        lVar2 = lVar8;
      }
      param_1[lVar2] = dVar1;
    }
    param_2 = param_2 + -1;
    if ((longlong)param_2 - (longlong)param_1 < 0x10) {
      return;
    }
  } while( true );
}



/* ===== 1800cd2f0 FUN_1800cd2f0 ===== */

undefined4 * FUN_1800cd2f0(longlong *param_1,undefined4 *param_2)

{
  ulonglong uVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined4 *puVar14;
  longlong *local_58;
  undefined8 local_50;
  ulonglong local_48;
  undefined4 *local_40;
  undefined4 *local_38;
  
  puVar2 = (undefined4 *)param_1[1];
  if (puVar2 != (undefined4 *)param_1[2]) {
    *puVar2 = *param_2;
    uVar3 = *(undefined8 *)(param_2 + 2);
    uVar4 = *(undefined8 *)(param_2 + 6);
    uVar5 = *(undefined8 *)(param_2 + 4);
    *(undefined8 *)(param_2 + 6) = 0;
    *(undefined8 *)(param_2 + 4) = 0;
    *(undefined8 *)(param_2 + 2) = 0;
    *(undefined8 *)(puVar2 + 2) = uVar3;
    *(undefined8 *)(puVar2 + 4) = uVar5;
    *(undefined8 *)(puVar2 + 6) = uVar4;
    uVar3 = *(undefined8 *)(param_2 + 8);
    uVar4 = *(undefined8 *)(param_2 + 10);
    uVar5 = *(undefined8 *)(param_2 + 0xc);
    *(undefined8 *)(param_2 + 0xc) = 0;
    *(undefined8 *)(param_2 + 10) = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(puVar2 + 10) = uVar4;
    *(undefined8 *)(puVar2 + 8) = uVar3;
    *(undefined8 *)(puVar2 + 0xc) = uVar5;
    puVar2[0xe] = param_2[0xe];
    puVar2[0xf] = param_2[0xf];
    puVar2 = (undefined4 *)param_1[1];
    param_1[1] = (longlong)(puVar2 + 0x10);
    return puVar2;
  }
  uVar12 = 0x3ffffffffffffff;
  uVar13 = (longlong)puVar2 - *param_1;
  lVar6 = (longlong)uVar13 >> 6;
  if (lVar6 == 0x3ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_18000fb10();
  }
  uVar8 = param_1[2] - *param_1 >> 6;
  uVar1 = lVar6 + 1;
  if (uVar8 <= 0x3ffffffffffffff - (uVar8 >> 1)) {
    uVar8 = (uVar8 >> 1) + uVar8;
    uVar12 = uVar1;
    if (uVar1 <= uVar8) {
      uVar12 = uVar8;
    }
    if (0x3ffffffffffffff < uVar12) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  puVar7 = (undefined4 *)FUN_18000fb70(uVar12 << 6);
  puVar14 = (undefined4 *)((uVar13 & 0xffffffffffffffc0) + (longlong)puVar7);
  *puVar14 = *param_2;
  local_38 = puVar14 + 0x10;
  uVar3 = *(undefined8 *)(param_2 + 6);
  uVar4 = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_2 + 6) = 0;
  *(undefined8 *)(param_2 + 4) = 0;
  uVar5 = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_2 + 2) = 0;
  *(undefined8 *)(puVar14 + 2) = uVar5;
  *(undefined8 *)(puVar14 + 4) = uVar4;
  *(undefined8 *)(puVar14 + 6) = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0xc);
  uVar4 = *(undefined8 *)(param_2 + 10);
  uVar5 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 0xc) = 0;
  *(undefined8 *)(param_2 + 10) = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(puVar14 + 8) = uVar5;
  *(undefined8 *)(puVar14 + 10) = uVar4;
  *(undefined8 *)(puVar14 + 0xc) = uVar3;
  puVar14[0xe] = param_2[0xe];
  puVar14[0xf] = param_2[0xf];
  puVar10 = (undefined4 *)param_1[1];
  puVar9 = (undefined4 *)*param_1;
  puVar11 = puVar7;
  local_58 = param_1;
  local_48 = uVar12;
  local_40 = puVar14;
  if (puVar2 != puVar10) {
    FUN_1800ce1f0((undefined4 *)*param_1,puVar2,puVar7);
    puVar10 = (undefined4 *)param_1[1];
    puVar11 = puVar14 + 0x10;
    puVar9 = puVar2;
    local_40 = puVar7;
  }
  FUN_1800ce1f0(puVar9,puVar10,puVar11);
  local_50 = 0;
  FUN_1800ce340(param_1,puVar7,uVar1,uVar12);
  FUN_1800ce290(&local_58);
  return puVar14;
}



/* ===== 1800cd500 FUN_1800cd500 ===== */

undefined4 * FUN_1800cd500(longlong *param_1,undefined4 *param_2)

{
  ulonglong uVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  ulonglong uVar9;
  undefined4 *puVar10;
  ulonglong uVar11;
  longlong *local_78;
  undefined4 *local_70;
  ulonglong local_68;
  undefined4 *local_60;
  undefined4 *local_58;
  
  puVar2 = (undefined4 *)param_1[1];
  if (puVar2 == (undefined4 *)param_1[2]) {
    uVar11 = (longlong)puVar2 - *param_1;
    lVar3 = (longlong)uVar11 >> 6;
    uVar9 = 0x3ffffffffffffff;
    if (lVar3 == 0x3ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_18000fb10();
    }
    uVar1 = lVar3 + 1;
    uVar6 = param_1[2] - *param_1 >> 6;
    if (uVar6 <= 0x3ffffffffffffff - (uVar6 >> 1)) {
      uVar6 = (uVar6 >> 1) + uVar6;
      uVar9 = uVar1;
      if (uVar1 <= uVar6) {
        uVar9 = uVar6;
      }
      if (0x3ffffffffffffff < uVar9) {
                    /* WARNING: Subroutine does not return */
        FUN_18000d840();
      }
    }
    puVar4 = (undefined4 *)FUN_18000fb70(uVar9 << 6);
    uVar11 = uVar11 & 0xffffffffffffffc0;
    puVar5 = (undefined4 *)(uVar11 + (longlong)puVar4);
    local_60 = puVar5 + 0x10;
    *puVar5 = *param_2;
    local_78 = param_1;
    local_70 = puVar4;
    local_68 = uVar9;
    local_58 = local_60;
    FUN_1800ce420((uVar11 | 8) + (longlong)puVar4,param_2 + 2);
    FUN_1800ce420((longlong)puVar4 + (uVar11 | 0x20),param_2 + 8);
    puVar5[0xe] = param_2[0xe];
    puVar5[0xf] = param_2[0xf];
    puVar8 = (undefined4 *)param_1[1];
    puVar7 = (undefined4 *)*param_1;
    puVar10 = puVar4;
    local_60 = puVar5;
    if (puVar2 != puVar8) {
      FUN_1800ce1f0((undefined4 *)*param_1,puVar2,puVar4);
      puVar10 = puVar5 + 0x10;
      puVar8 = (undefined4 *)param_1[1];
      puVar7 = puVar2;
      local_60 = puVar4;
    }
    FUN_1800ce1f0(puVar7,puVar8,puVar10);
    local_70 = (undefined4 *)0x0;
    FUN_1800ce340(param_1,puVar4,uVar1,uVar9);
    FUN_1800ce290(&local_78);
  }
  else {
    *puVar2 = *param_2;
    FUN_1800ce420(puVar2 + 2,param_2 + 2);
    FUN_1800ce420(puVar2 + 8,param_2 + 8);
    puVar2[0xe] = param_2[0xe];
    puVar2[0xf] = param_2[0xf];
    puVar5 = (undefined4 *)param_1[1];
    param_1[1] = (longlong)(puVar5 + 0x10);
  }
  return puVar5;
}



/* ===== 1800cd6b0 FUN_1800cd6b0 ===== */

undefined8 * FUN_1800cd6b0(longlong *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  longlong lVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  
  puVar10 = (undefined8 *)param_1[1];
  if (puVar10 != (undefined8 *)param_1[2]) {
    *puVar10 = *param_2;
    puVar10 = (undefined8 *)param_1[1];
    param_1[1] = (longlong)(puVar10 + 1);
    return puVar10;
  }
  uVar9 = 0x1fffffffffffffff;
  uVar13 = (longlong)puVar10 - *param_1;
  lVar4 = (longlong)uVar13 >> 3;
  if (lVar4 == 0x1fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_1800118d0();
  }
  uVar6 = param_1[2] - *param_1 >> 3;
  uVar1 = lVar4 + 1;
  if (uVar6 <= 0x1fffffffffffffff - (uVar6 >> 1)) {
    uVar6 = (uVar6 >> 1) + uVar6;
    uVar9 = uVar1;
    if (uVar1 <= uVar6) {
      uVar9 = uVar6;
    }
    if (0x1fffffffffffffff < uVar9) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  puVar5 = (undefined8 *)FUN_18000fb70(uVar9 * 8);
  puVar14 = (undefined8 *)((uVar13 & 0xfffffffffffffff8) + (longlong)puVar5);
  *puVar14 = *param_2;
  puVar2 = (undefined8 *)*param_1;
  if (puVar10 == (undefined8 *)param_1[1]) {
    lVar4 = param_1[1] - (longlong)puVar2;
    puVar7 = puVar5;
    puVar10 = puVar2;
  }
  else {
    FUN_180540530(puVar5,puVar2,(longlong)puVar10 - (longlong)puVar2);
    puVar7 = puVar14 + 1;
    lVar4 = param_1[1] - (longlong)puVar10;
  }
  puVar11 = auStack_38;
  puVar12 = auStack_38;
  FUN_180540530(puVar7,puVar10,lVar4);
  lVar4 = *param_1;
  if (lVar4 == 0) goto LAB_1800cd7f3;
  lVar8 = lVar4;
  if ((ulonglong)((param_1[2] - lVar4 >> 3) * 8) < 0x1000) {
LAB_1800cd7e8:
    puVar12 = puVar11;
  }
  else {
    lVar8 = *(longlong *)(lVar4 + -8);
    if (0x1f < (lVar4 - lVar8) - 8U) {
      lVar8 = 5;
      pcVar3 = (code *)swi(0x29);
      (*pcVar3)(5);
      puVar11 = auStack_30;
      goto LAB_1800cd7e8;
    }
  }
  *(undefined8 *)(puVar12 + -8) = 0x1800cd7f3;
  thunk_FUN_1803d64e0(lVar8);
LAB_1800cd7f3:
  *param_1 = (longlong)puVar5;
  param_1[1] = (longlong)(puVar5 + uVar1);
  param_1[2] = (longlong)(puVar5 + uVar9);
  return puVar14;
}



/* ===== 1800cd840 FUN_1800cd840 ===== */

void FUN_1800cd840(longlong param_1)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  longlong lVar6;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  puVar4 = auStack_28;
  puVar5 = auStack_28;
  lVar2 = *(longlong *)(param_1 + 0x20);
  if (lVar2 != 0) {
    do {
      lVar2 = lVar2 + -1;
      *(longlong *)(param_1 + 0x20) = lVar2;
    } while (lVar2 != 0);
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  lVar2 = *(longlong *)(param_1 + 0x10);
  while (0 < lVar2) {
    lVar6 = lVar2 + -1;
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 8) + -8 + lVar2 * 8);
    lVar2 = lVar6;
    if (lVar3 != 0) {
      thunk_FUN_1803d64e0(lVar3,0x10);
    }
  }
  lVar2 = *(longlong *)(param_1 + 8);
  lVar3 = lVar2;
  if (0xfff < (ulonglong)(*(longlong *)(param_1 + 0x10) * 8)) {
    lVar3 = *(longlong *)(lVar2 + -8);
    if ((lVar2 - lVar3) - 8U < 0x20) goto LAB_1800cd8e2;
    lVar3 = 5;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar4 = auStack_20;
  }
  puVar5 = puVar4;
LAB_1800cd8e2:
  *(undefined8 *)(puVar5 + -8) = 0x1800cd8ea;
  thunk_FUN_1803d64e0(lVar3);
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}



/* ===== 1800cd900 FUN_1800cd900 ===== */

undefined8 * FUN_1800cd900(longlong *param_1,undefined4 *param_2,undefined4 *param_3)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined4 *puVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  longlong lVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  lVar16 = *param_1;
  uVar15 = 0x666666666666666;
  lVar10 = (param_1[1] - lVar16 >> 3) * -0x3333333333333333;
  if (lVar10 == 0x666666666666666) {
                    /* WARNING: Subroutine does not return */
    FUN_18000fb10();
  }
  uVar1 = lVar10 + 1;
  uVar13 = (param_1[2] - lVar16 >> 3) * -0x3333333333333333;
  if (uVar13 <= 0x666666666666666 - (uVar13 >> 1)) {
    uVar13 = (uVar13 >> 1) + uVar13;
    uVar15 = uVar1;
    if (uVar1 <= uVar13) {
      uVar15 = uVar13;
    }
    if (0x666666666666666 < uVar15) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  puVar11 = (undefined8 *)FUN_18000fb70(uVar15 * 0x28);
  puVar17 = auStack_48;
  puVar18 = auStack_48;
  lVar16 = ((longlong)param_2 - lVar16) / 0x28;
  puVar11[lVar16 * 5] = 0;
  (puVar11 + lVar16 * 5)[1] = 0;
  puVar11[lVar16 * 5 + 2] = 0;
  puVar2 = puVar11 + lVar16 * 5;
  puVar2[3] = 0;
  uVar5 = param_3[1];
  uVar6 = param_3[2];
  uVar7 = param_3[3];
  *(undefined4 *)puVar2 = *param_3;
  *(undefined4 *)((longlong)puVar2 + 4) = uVar5;
  *(undefined4 *)(puVar2 + 1) = uVar6;
  *(undefined4 *)((longlong)puVar2 + 0xc) = uVar7;
  uVar8 = *(undefined8 *)(param_3 + 6);
  puVar2[2] = *(undefined8 *)(param_3 + 4);
  puVar2[3] = uVar8;
  *(undefined8 *)(param_3 + 4) = 0;
  *(undefined8 *)(param_3 + 6) = 0xf;
  *(undefined1 *)param_3 = 0;
  puVar2[4] = *(undefined8 *)(param_3 + 8);
  puVar3 = (undefined4 *)param_1[1];
  puVar12 = (undefined4 *)*param_1;
  puVar9 = puVar11;
  if (param_2 == puVar3) {
    for (; puVar12 != puVar3; puVar12 = puVar12 + 10) {
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9[2] = 0;
      puVar9[3] = 0;
      uVar5 = puVar12[1];
      uVar6 = puVar12[2];
      uVar7 = puVar12[3];
      *(undefined4 *)puVar9 = *puVar12;
      *(undefined4 *)((longlong)puVar9 + 4) = uVar5;
      *(undefined4 *)(puVar9 + 1) = uVar6;
      *(undefined4 *)((longlong)puVar9 + 0xc) = uVar7;
      uVar8 = *(undefined8 *)(puVar12 + 6);
      puVar9[2] = *(undefined8 *)(puVar12 + 4);
      puVar9[3] = uVar8;
      *(undefined8 *)(puVar12 + 4) = 0;
      *(undefined8 *)(puVar12 + 6) = 0xf;
      *(undefined1 *)puVar12 = 0;
      puVar9[4] = *(undefined8 *)(puVar12 + 8);
      puVar9 = puVar9 + 5;
    }
  }
  else {
    for (; puVar12 != param_2; puVar12 = puVar12 + 10) {
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9[2] = 0;
      puVar9[3] = 0;
      uVar5 = puVar12[1];
      uVar6 = puVar12[2];
      uVar7 = puVar12[3];
      *(undefined4 *)puVar9 = *puVar12;
      *(undefined4 *)((longlong)puVar9 + 4) = uVar5;
      *(undefined4 *)(puVar9 + 1) = uVar6;
      *(undefined4 *)((longlong)puVar9 + 0xc) = uVar7;
      uVar8 = *(undefined8 *)(puVar12 + 6);
      puVar9[2] = *(undefined8 *)(puVar12 + 4);
      puVar9[3] = uVar8;
      *(undefined8 *)(puVar12 + 4) = 0;
      *(undefined8 *)(puVar12 + 6) = 0xf;
      *(undefined1 *)puVar12 = 0;
      puVar9[4] = *(undefined8 *)(puVar12 + 8);
      puVar9 = puVar9 + 5;
    }
    puVar3 = (undefined4 *)param_1[1];
    puVar9 = puVar2;
    for (; param_2 != puVar3; param_2 = param_2 + 10) {
      puVar14 = puVar9 + 5;
      *puVar14 = 0;
      puVar9[6] = 0;
      puVar9[7] = 0;
      puVar9[8] = 0;
      uVar5 = param_2[1];
      uVar6 = param_2[2];
      uVar7 = param_2[3];
      *(undefined4 *)puVar14 = *param_2;
      *(undefined4 *)((longlong)puVar9 + 0x2c) = uVar5;
      *(undefined4 *)(puVar9 + 6) = uVar6;
      *(undefined4 *)((longlong)puVar9 + 0x34) = uVar7;
      uVar8 = *(undefined8 *)(param_2 + 6);
      puVar9[7] = *(undefined8 *)(param_2 + 4);
      puVar9[8] = uVar8;
      *(undefined8 *)(param_2 + 4) = 0;
      *(undefined8 *)(param_2 + 6) = 0xf;
      *(undefined1 *)param_2 = 0;
      puVar9[9] = *(undefined8 *)(param_2 + 8);
      puVar9 = puVar14;
    }
  }
  lVar16 = *param_1;
  if (lVar16 == 0) goto LAB_1800cdb8d;
  lVar10 = param_1[1];
  for (; lVar16 != lVar10; lVar16 = lVar16 + 0x28) {
    FUN_18000f890(lVar16);
  }
  lVar16 = *param_1;
  lVar10 = lVar16;
  if ((ulonglong)((param_1[2] - lVar16 >> 3) * 8) < 0x1000) {
LAB_1800cdb82:
    puVar18 = puVar17;
  }
  else {
    lVar10 = *(longlong *)(lVar16 + -8);
    if (0x1f < (lVar16 - lVar10) - 8U) {
      lVar10 = 5;
      pcVar4 = (code *)swi(0x29);
      (*pcVar4)(5);
      puVar17 = auStack_40;
      goto LAB_1800cdb82;
    }
  }
  *(undefined8 *)(puVar18 + -8) = 0x1800cdb8d;
  thunk_FUN_1803d64e0(lVar10);
LAB_1800cdb8d:
  *param_1 = (longlong)puVar11;
  param_1[1] = (longlong)(puVar11 + uVar1 * 5);
  param_1[2] = (longlong)(puVar11 + uVar15 * 5);
  return puVar2;
}



/* ===== 1800cdbd0 FUN_1800cdbd0 ===== */

void FUN_1800cdbd0(void)

{
  code *pcVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  
  uVar5 = 1;
  if (DAT_180ca0db0 != 0) {
    uVar5 = DAT_180ca0db0;
  }
  for (; (uVar5 == DAT_180ca0db0 || (uVar5 < 8)); uVar5 = uVar5 * 2) {
    if (0xfffffffffffffff - uVar5 < uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_1800ce400();
    }
  }
  if (0x1fffffffffffffff < uVar5) {
                    /* WARNING: Subroutine does not return */
    FUN_18000d840();
  }
  uVar8 = DAT_180ca0db8 >> 1;
  lVar2 = FUN_18000fb70(uVar5 * 8);
  lVar4 = uVar8 * 8;
  uVar3 = uVar5 >> 1;
  for (; uVar5 <= uVar3; uVar5 = uVar5 * 2) {
  }
  uVar5 = uVar5 - DAT_180ca0db0;
  lVar9 = (DAT_180ca0db0 - uVar8) * 8;
  FUN_180540530(lVar4 + lVar2,DAT_180ca0da8 + lVar4,lVar9);
  lVar9 = lVar9 + lVar4 + lVar2;
  if (uVar5 < uVar8) {
    lVar4 = uVar5 * 8;
    FUN_180540530(lVar9,DAT_180ca0da8,lVar4);
    lVar9 = (uVar8 - uVar5) * 8;
    FUN_180540530(lVar2,DAT_180ca0da8 + lVar4,lVar9);
    lVar9 = lVar2 + lVar9;
  }
  else {
    FUN_180540530(lVar9,DAT_180ca0da8,lVar4);
    FUN_180540170(lVar9 + lVar4,0,(uVar5 - uVar8) * 8);
    lVar9 = lVar2;
  }
  FUN_180540170(lVar9,0,lVar4);
  puVar6 = auStack_38;
  puVar7 = auStack_38;
  if (DAT_180ca0da8 == 0) goto LAB_1800cdd7b;
  lVar4 = DAT_180ca0da8;
  if (DAT_180ca0db0 * 8 < 0x1000) {
LAB_1800cdd70:
    puVar7 = puVar6;
  }
  else {
    lVar4 = *(longlong *)(DAT_180ca0da8 + -8);
    if (0x1f < (DAT_180ca0da8 - lVar4) - 8U) {
      lVar4 = 5;
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(5);
      puVar6 = auStack_30;
      goto LAB_1800cdd70;
    }
  }
  *(undefined8 *)(puVar7 + -8) = 0x1800cdd7b;
  thunk_FUN_1803d64e0(lVar4);
LAB_1800cdd7b:
  DAT_180ca0db0 = DAT_180ca0db0 + uVar5;
  DAT_180ca0da8 = lVar2;
  return;
}



/* ===== 1800cdda0 FUN_1800cdda0 ===== */

void FUN_1800cdda0(double *param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  double *pdVar4;
  double *pdVar5;
  
  dVar1 = *param_1;
  lVar3 = (longlong)param_3 - (longlong)param_1 >> 3;
  if (lVar3 < 0x29) {
    dVar2 = *param_2;
    if (dVar1 < dVar2) {
      *param_2 = dVar1;
      *param_1 = dVar2;
    }
    dVar1 = *param_3;
    if (*param_2 < dVar1) {
      *param_3 = *param_2;
      *param_2 = dVar1;
      if (*param_1 < dVar1) {
        *param_2 = *param_1;
        *param_1 = dVar1;
      }
    }
  }
  else {
    lVar3 = lVar3 + 1 >> 3;
    dVar2 = param_1[lVar3];
    if (dVar1 < dVar2) {
      param_1[lVar3] = dVar1;
      *param_1 = dVar2;
    }
    dVar1 = param_1[lVar3 * 2];
    if (param_1[lVar3] < dVar1) {
      param_1[lVar3 * 2] = param_1[lVar3];
      param_1[lVar3] = dVar1;
      if (*param_1 < dVar1) {
        param_1[lVar3] = *param_1;
        *param_1 = dVar1;
      }
    }
    dVar1 = *param_2;
    pdVar4 = param_2 + -lVar3;
    if (*pdVar4 < dVar1) {
      *param_2 = *pdVar4;
      *pdVar4 = dVar1;
    }
    dVar1 = param_2[lVar3];
    if (*param_2 < dVar1) {
      param_2[lVar3] = *param_2;
      *param_2 = dVar1;
      if (*pdVar4 < dVar1) {
        *param_2 = *pdVar4;
        *pdVar4 = dVar1;
      }
    }
    pdVar4 = param_3 + -lVar3;
    pdVar5 = param_3 + lVar3 * -2;
    dVar1 = *pdVar4;
    if (*pdVar5 < dVar1) {
      *pdVar4 = *pdVar5;
      *pdVar5 = dVar1;
    }
    dVar1 = *param_3;
    if (*pdVar4 < dVar1) {
      *param_3 = *pdVar4;
      *pdVar4 = dVar1;
      if (*pdVar5 < dVar1) {
        *pdVar4 = *pdVar5;
        *pdVar5 = dVar1;
      }
    }
    dVar1 = *param_2;
    if (param_1[lVar3] < dVar1) {
      *param_2 = param_1[lVar3];
      param_1[lVar3] = dVar1;
    }
    dVar1 = *pdVar4;
    if (*param_2 < dVar1) {
      *pdVar4 = *param_2;
      *param_2 = dVar1;
      if (param_1[lVar3] < dVar1) {
        *param_2 = param_1[lVar3];
        param_1[lVar3] = dVar1;
        return;
      }
    }
  }
  return;
}



/* ===== 1800cdf40 FUN_1800cdf40 ===== */

undefined8 * FUN_1800cdf40(undefined8 *param_1,double *param_2,double *param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  double *pdVar3;
  double *pdVar4;
  double *pdVar5;
  double *pdVar6;
  double *pdVar7;
  double *pdVar8;
  
  pdVar4 = param_3 + 1;
  while (pdVar5 = param_3, param_2 < pdVar5) {
    if ((*pdVar5 < pdVar5[-1]) || (param_3 = pdVar5 + -1, pdVar5[-1] < *pdVar5)) break;
  }
  if (pdVar4 < param_4) {
    do {
      if ((*pdVar5 < *pdVar4) || (*pdVar4 < *pdVar5)) break;
      pdVar4 = pdVar4 + 1;
    } while (pdVar4 < param_4);
  }
  pdVar7 = pdVar4;
  pdVar8 = pdVar5;
  do {
    pdVar6 = pdVar4;
    if (pdVar4 < param_4) {
      if (0x1f < (ulonglong)((longlong)param_4 + (7 - (longlong)pdVar4))) {
        do {
          dVar1 = *pdVar4;
          if (*pdVar5 <= dVar1) {
            pdVar6 = pdVar4;
            if (*pdVar5 < dVar1) goto joined_r0x0001800ce0ed;
            if (pdVar7 != pdVar4) {
              dVar2 = *pdVar7;
              *pdVar7 = dVar1;
              *pdVar4 = dVar2;
            }
            pdVar7 = pdVar7 + 1;
          }
          dVar1 = pdVar4[1];
          pdVar6 = pdVar4 + 1;
          if (*pdVar5 <= dVar1) {
            if (*pdVar5 < dVar1) goto joined_r0x0001800ce0ed;
            if (pdVar7 != pdVar6) {
              dVar2 = *pdVar7;
              *pdVar7 = dVar1;
              *pdVar6 = dVar2;
            }
            pdVar7 = pdVar7 + 1;
          }
          dVar1 = pdVar4[2];
          pdVar6 = pdVar4 + 2;
          if (*pdVar5 <= dVar1) {
            if (*pdVar5 < dVar1) goto joined_r0x0001800ce0ed;
            if (pdVar7 != pdVar6) {
              dVar2 = *pdVar7;
              *pdVar7 = dVar1;
              *pdVar6 = dVar2;
            }
            pdVar7 = pdVar7 + 1;
          }
          dVar1 = pdVar4[3];
          pdVar6 = pdVar4 + 3;
          if (*pdVar5 <= dVar1) {
            if (*pdVar5 < dVar1) goto joined_r0x0001800ce0ed;
            if (pdVar7 != pdVar6) {
              dVar2 = *pdVar7;
              *pdVar7 = dVar1;
              *pdVar6 = dVar2;
            }
            pdVar7 = pdVar7 + 1;
          }
          pdVar4 = pdVar4 + 4;
        } while (pdVar4 < param_4 + -3);
      }
      for (; pdVar6 = pdVar4, pdVar4 < param_4; pdVar4 = pdVar4 + 1) {
        dVar1 = *pdVar4;
        if (*pdVar5 <= dVar1) {
          if (*pdVar5 < dVar1) break;
          if (pdVar7 != pdVar4) {
            dVar2 = *pdVar7;
            *pdVar7 = dVar1;
            *pdVar4 = dVar2;
          }
          pdVar7 = pdVar7 + 1;
        }
      }
    }
joined_r0x0001800ce0ed:
    pdVar4 = pdVar6;
    pdVar3 = pdVar8;
    if (param_2 < pdVar3) {
      dVar1 = pdVar3[-1];
      pdVar8 = pdVar3 + -1;
      pdVar6 = pdVar4;
      if (dVar1 <= *pdVar5) {
        if (dVar1 < *pdVar5) goto LAB_1800ce12f;
        if (pdVar3 != pdVar5) {
          dVar2 = pdVar5[-1];
          pdVar5[-1] = dVar1;
          *pdVar8 = dVar2;
        }
        pdVar5 = pdVar5 + -1;
      }
      goto joined_r0x0001800ce0ed;
    }
LAB_1800ce12f:
    if (pdVar3 == param_2) {
      if (pdVar4 == param_4) {
        *param_1 = pdVar5;
        param_1[1] = pdVar7;
        return param_1;
      }
      if (pdVar7 != pdVar4) {
        dVar1 = *pdVar5;
        *pdVar5 = *pdVar7;
        *pdVar7 = dVar1;
      }
      pdVar7 = pdVar7 + 1;
      dVar1 = *pdVar5;
      *pdVar5 = *pdVar4;
      *pdVar4 = dVar1;
      pdVar4 = pdVar4 + 1;
      pdVar5 = pdVar5 + 1;
      pdVar8 = pdVar3;
    }
    else {
      pdVar8 = pdVar3 + -1;
      if (pdVar4 == param_4) {
        pdVar6 = pdVar5 + -1;
        if (pdVar5 != pdVar3) {
          dVar1 = *pdVar8;
          *pdVar8 = *pdVar6;
          *pdVar6 = dVar1;
        }
        pdVar5 = pdVar7 + -1;
        pdVar7 = pdVar7 + -1;
        dVar1 = *pdVar6;
        *pdVar6 = *pdVar5;
        *pdVar7 = dVar1;
        pdVar5 = pdVar6;
      }
      else {
        dVar1 = *pdVar4;
        *pdVar4 = *pdVar8;
        pdVar4 = pdVar4 + 1;
        *pdVar8 = dVar1;
      }
    }
  } while( true );
}



/* ===== 1800ce1f0 FUN_1800ce1f0 ===== */

undefined4 * FUN_1800ce1f0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  for (; param_1 != param_2; param_1 = param_1 + 0x10) {
    *param_3 = *param_1;
    uVar1 = *(undefined8 *)(param_1 + 6);
    uVar2 = *(undefined8 *)(param_1 + 4);
    uVar3 = *(undefined8 *)(param_1 + 2);
    *(undefined8 *)(param_1 + 6) = 0;
    *(undefined8 *)(param_1 + 4) = 0;
    *(undefined8 *)(param_1 + 2) = 0;
    *(undefined8 *)(param_3 + 2) = uVar3;
    *(undefined8 *)(param_3 + 4) = uVar2;
    *(undefined8 *)(param_3 + 6) = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 8);
    uVar2 = *(undefined8 *)(param_1 + 0xc);
    uVar3 = *(undefined8 *)(param_1 + 10);
    *(undefined8 *)(param_1 + 0xc) = 0;
    *(undefined8 *)(param_1 + 10) = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_3 + 8) = uVar1;
    *(undefined8 *)(param_3 + 10) = uVar3;
    *(undefined8 *)(param_3 + 0xc) = uVar2;
    param_3[0xe] = param_1[0xe];
    param_3[0xf] = param_1[0xf];
    param_3 = param_3 + 0x10;
  }
  return param_3;
}



/* ===== 1800ce290 FUN_1800ce290 ===== */

void FUN_1800ce290(longlong param_1)

{
  longlong lVar1;
  code *pcVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  lVar1 = *(longlong *)(param_1 + 0x20);
  for (lVar4 = *(longlong *)(param_1 + 0x18); lVar4 != lVar1; lVar4 = lVar4 + 0x40) {
    FUN_1800b38f0(lVar4 + 0x20);
    FUN_1800b38f0(lVar4 + 8);
  }
  lVar4 = *(longlong *)(param_1 + 8);
  uVar3 = *(longlong *)(param_1 + 0x10) << 6;
  if (0xfff < uVar3) {
    if ((lVar4 - *(longlong *)(lVar4 + -8)) - 8U < 0x20) {
      thunk_FUN_1803d64e0(*(longlong *)(lVar4 + -8),uVar3 | 0x27);
      return;
    }
    pcVar2 = (code *)swi(0x29);
    lVar4 = (*pcVar2)(5);
  }
  thunk_FUN_1803d64e0(lVar4);
  return;
}



/* ===== 1800ce340 FUN_1800ce340 ===== */

void FUN_1800ce340(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  
  puVar4 = auStack_38;
  puVar5 = auStack_38;
  lVar3 = *param_1;
  if (lVar3 == 0) goto LAB_1800ce3d2;
  lVar2 = param_1[1];
  for (; lVar3 != lVar2; lVar3 = lVar3 + 0x40) {
    FUN_1800b38f0(lVar3 + 0x20);
    FUN_1800b38f0(lVar3 + 8);
  }
  lVar3 = *param_1;
  if ((param_1[2] - lVar3 & 0xffffffffffffffc0U) < 0x1000) {
LAB_1800ce3ca:
    lVar2 = lVar3;
    puVar5 = puVar4;
  }
  else {
    lVar2 = *(longlong *)(lVar3 + -8);
    if (0x1f < (lVar3 - lVar2) - 8U) {
      pcVar1 = (code *)swi(0x29);
      lVar3 = (*pcVar1)(5);
      puVar4 = auStack_30;
      goto LAB_1800ce3ca;
    }
  }
  *(undefined8 *)(puVar5 + -8) = 0x1800ce3d2;
  thunk_FUN_1803d64e0(lVar2);
LAB_1800ce3d2:
  *param_1 = param_2;
  param_1[1] = param_3 * 0x40 + param_2;
  param_1[2] = param_4 * 0x40 + param_2;
  return;
}



/* ===== 1800ce400 FUN_1800ce400 ===== */

void FUN_1800ce400(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1804e4cd0("deque<T> too long");
}



/* ===== 1800ce420 FUN_1800ce420 ===== */

longlong * FUN_1800ce420(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2[1] - *param_2 != 0) {
    lVar2 = param_2[1] - *param_2 >> 3;
    if (0x666666666666666 < (ulonglong)(lVar2 * -0x3333333333333333)) {
                    /* WARNING: Subroutine does not return */
      FUN_18000fb10();
    }
    lVar2 = lVar2 * 8;
    lVar3 = FUN_18000fb70(lVar2);
    *param_1 = lVar3;
    param_1[1] = lVar3;
    param_1[2] = lVar3 + lVar2;
    lVar1 = param_2[1];
    lVar4 = lVar3;
    plVar5 = param_1;
    for (lVar2 = *param_2; lVar2 != lVar1; lVar2 = lVar2 + 0x28) {
      FUN_180024b50(lVar3,lVar2,param_3,param_4,lVar4,lVar3,plVar5);
      *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)(lVar2 + 0x20);
      lVar3 = lVar3 + 0x28;
    }
    param_1[1] = lVar3;
  }
  return param_1;
}



/* ===== 1800ce4f0 FUN_1800ce4f0 ===== */

undefined8
FUN_1800ce4f0(float *param_1,undefined8 param_2,double param_3,char param_4,double param_5)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  float local_res8 [8];
  float local_48 [2];
  float local_40 [5];
  float local_2c;
  undefined4 local_1f;
  undefined2 local_1b;
  undefined1 local_19;
  
  fVar6 = (float)param_2;
  pfVar2 = param_1 + 1;
  if (*(char *)(param_1 + 6) == '\0') {
    param_1[3] = local_2c;
    *(undefined4 *)((longlong)param_1 + 0x19) = local_1f;
    *(undefined2 *)((longlong)param_1 + 0x1d) = local_1b;
    *(double *)(param_1 + 4) = param_5;
    *(undefined1 *)((longlong)param_1 + 0x1f) = local_19;
    *param_1 = fVar6;
    *pfVar2 = fVar6;
    param_1[2] = fVar6;
    *(undefined1 *)(param_1 + 6) = 1;
    return param_2;
  }
  fVar4 = param_1[2];
  uVar5 = 0;
  if (fVar6 != param_1[2]) {
    *pfVar2 = *param_1;
    param_1[2] = fVar6;
    *(double *)(param_1 + 4) = param_5;
    pfVar2 = param_1;
    fVar4 = fVar6;
    uVar5 = (int)((ulonglong)param_2 >> 0x20);
  }
  if (param_3 <= 0.0) {
    fVar6 = DAT_1808ac34c;
  }
  else {
    fVar6 = (float)((param_5 - *(double *)(param_1 + 4)) / param_3);
  }
  if (param_4 == '\0') {
    local_48[0] = 1.0;
    local_40[0] = fVar6;
    pfVar3 = local_res8;
    if (0.0 <= fVar6) {
      pfVar3 = local_40;
    }
    pfVar1 = local_48;
    if (fVar6 <= DAT_1808ac34c) {
      pfVar1 = pfVar3;
    }
    fVar6 = DAT_1808ac34c - *pfVar1;
    fVar6 = DAT_1808ac34c - fVar6 * fVar6 * fVar6;
  }
  else {
    local_40[0] = 1.0;
    local_48[0] = fVar6;
    pfVar3 = local_res8;
    if (0.0 <= fVar6) {
      pfVar3 = local_48;
    }
    pfVar1 = local_40;
    if (fVar6 <= DAT_1808ac34c) {
      pfVar1 = pfVar3;
    }
    fVar6 = *pfVar1;
    fVar6 = fVar6 * fVar6 * fVar6;
  }
  fVar6 = (fVar4 - *pfVar2) * fVar6 + *pfVar2;
  *param_1 = fVar6;
  return CONCAT44(uVar5,fVar6);
}



/* ===== 1800ce640 FUN_1800ce640 ===== */

float * FUN_1800ce640(float *param_1,float *param_2,float *param_3,double param_4,char param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_res8 [8];
  float local_28 [2];
  float local_20 [8];
  
  if ((*(char *)(param_1 + 0xe) == '\0') || (param_5 != '\0')) {
    uVar1 = *(undefined8 *)param_3;
    uVar2 = *(undefined8 *)(param_3 + 2);
    *(undefined1 *)(param_1 + 0xe) = 1;
    *(double *)(param_1 + 0xc) = param_4;
    *(undefined8 *)(param_1 + 8) = uVar1;
    *(undefined8 *)(param_1 + 10) = uVar2;
    *(undefined8 *)(param_1 + 4) = uVar1;
    *(undefined8 *)(param_1 + 6) = uVar2;
    *(undefined8 *)param_1 = uVar1;
    *(undefined8 *)(param_1 + 2) = uVar2;
    *(undefined8 *)param_2 = uVar1;
    *(undefined8 *)(param_2 + 2) = uVar2;
    return param_2;
  }
  if ((*param_3 != param_1[8]) ||
     (((param_3[1] != param_1[9] || (param_3[2] != param_1[10])) || (param_3[3] != param_1[0xb]))))
  {
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)param_1;
    *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 2);
    uVar1 = *(undefined8 *)param_3;
    uVar2 = *(undefined8 *)(param_3 + 2);
    *(double *)(param_1 + 0xc) = param_4;
    *(undefined8 *)(param_1 + 8) = uVar1;
    *(undefined8 *)(param_1 + 10) = uVar2;
  }
  local_20[0] = 1.0;
  fVar8 = (float)*(undefined8 *)(param_1 + 6);
  fVar9 = (float)((ulonglong)*(undefined8 *)(param_1 + 6) >> 0x20);
  local_28[0] = (float)((param_4 - *(double *)(param_1 + 0xc)) / DAT_1808ac448);
  pfVar4 = local_res8;
  if (0.0 <= local_28[0]) {
    pfVar4 = local_28;
  }
  fVar5 = (float)*(undefined8 *)(param_1 + 4);
  fVar6 = (float)((ulonglong)*(undefined8 *)(param_1 + 4) >> 0x20);
  pfVar3 = local_20;
  if (local_28[0] <= DAT_1808ac34c) {
    pfVar3 = pfVar4;
  }
  fVar7 = DAT_1808ac34c - *pfVar3;
  fVar7 = DAT_1808ac34c - fVar7 * fVar7 * fVar7;
  fVar5 = ((float)*(undefined8 *)(param_1 + 8) - fVar5) * fVar7 + fVar5;
  fVar6 = ((float)((ulonglong)*(undefined8 *)(param_1 + 8) >> 0x20) - fVar6) * fVar7 + fVar6;
  fVar8 = ((float)*(undefined8 *)(param_1 + 10) - fVar8) * fVar7 + fVar8;
  fVar9 = ((float)((ulonglong)*(undefined8 *)(param_1 + 10) >> 0x20) - fVar9) * fVar7 + fVar9;
  *param_1 = fVar5;
  param_1[1] = fVar6;
  param_1[2] = fVar8;
  param_1[3] = fVar9;
  *param_2 = fVar5;
  param_2[1] = fVar6;
  param_2[2] = fVar8;
  param_2[3] = fVar9;
  return param_2;
}



/* ===== 1800ce780 FUN_1800ce780 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1800ce780(float param_1,undefined8 param_2,float param_3)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float local_res18 [4];
  float local_38;
  float local_34 [13];
  
  local_34[0] = 0.1;
  local_38 = 0.0001;
  pfVar2 = &local_38;
  if (DAT_1808abfa0 <= param_3) {
    pfVar2 = local_res18;
  }
  fVar7 = (float)param_2 - param_1;
  fVar6 = (float)((uint)fVar7 & _DAT_1808ade90);
  pfVar1 = local_34;
  if (param_3 <= DAT_1808ac0c0) {
    pfVar1 = pfVar2;
  }
  fVar3 = *pfVar1 * DAT_1808ac900 * fVar6;
  fVar4 = DAT_1808abf94;
  if (DAT_1808abf94 <= fVar3) {
    fVar4 = fVar3;
  }
  if (fVar6 <= fVar4) {
    return param_2;
  }
  uVar5 = 0;
  if (fVar7 <= 0.0) {
    fVar4 = (float)((uint)fVar4 ^ DAT_1808adec0);
    uVar5 = _UNK_1808adec4;
  }
  return CONCAT44(uVar5,fVar4 + param_1);
}



/* ===== 1800ce840 FUN_1800ce840 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800ce840(int *param_1,longlong param_2,double param_3,undefined4 param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined8 uVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  undefined1 uVar7;
  size_t sVar8;
  float *pfVar9;
  longlong lVar10;
  float *pfVar11;
  ulonglong uVar12;
  char *pcVar13;
  undefined1 *puVar14;
  int iVar15;
  int *piVar16;
  float fVar17;
  int iVar18;
  float fVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  undefined1 auStack_1f8 [8];
  undefined1 auStack_1f0 [40];
  float local_1c8 [8];
  longlong local_1a8 [6];
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined1 local_148;
  undefined8 local_144;
  undefined8 uStack_13c;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  int local_e0;
  int iStack_dc;
  int iStack_d8;
  int iStack_d4;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  ulonglong local_a8;
  
  local_a8 = DAT_180919500 ^ (ulonglong)auStack_1f8;
  if (((char)param_1[8] == '\0') || ((float)param_1[2] <= 0.0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if ((param_2 == 0) || (*(char *)(param_2 + 0xc) == '\0')) {
    uVar7 = 0;
  }
  else {
    uVar7 = 1;
  }
  *(undefined1 *)(param_1 + 1) = uVar7;
  piVar16 = param_1 + 0x22;
  FUN_180029840(piVar16,&DAT_1806ef810,3);
  puVar14 = auStack_1f8;
  *(undefined1 *)(param_1 + 0x32) = 1;
  uVar3 = _UNK_1805d06b8;
  *(undefined8 *)(param_1 + 0x33) = _DAT_1805d06b0;
  *(undefined8 *)(param_1 + 0x35) = uVar3;
  fVar4 = DAT_1808ac34c;
  if (param_2 == 0) {
LAB_1800ce9cd:
    local_c8 = _DAT_1805d0630;
    uStack_c0 = _UNK_1805d0638;
    if (param_2 != 0) goto LAB_1800ce9e1;
  }
  else {
    local_c8 = 0;
    uStack_c0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    fVar17 = 0.0;
    if (0.0 <= *(float *)(param_2 + 0x1c)) {
      fVar17 = *(float *)(param_2 + 0x1c);
    }
    snprintf(&local_c8,0x20,"%.1fs",(double)fVar17);
    local_1a8[0] = 0;
    local_1a8[1] = 0;
    local_1a8[2] = 0;
    local_1a8[3] = 0;
    sVar8 = strlen((char *)&local_c8);
    FUN_1800133a0(local_1a8,&local_c8,sVar8);
    FUN_18002ba60(param_1 + 0x2a,local_1a8);
    puVar14 = auStack_1f8;
    if ((ulonglong)local_1a8[3] < 0x10) goto LAB_1800ce9cd;
    uVar12 = local_1a8[3] + 1;
    lVar10 = local_1a8[0];
    if (0xfff < uVar12) {
      lVar10 = *(longlong *)(local_1a8[0] + -8);
      if (0x1f < (local_1a8[0] - lVar10) - 8U) {
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        puVar14 = auStack_1f0;
        goto LAB_1800ce9cd;
      }
      uVar12 = local_1a8[3] + 0x28;
    }
    thunk_FUN_1803d64e0(lVar10,uVar12);
    puVar14 = auStack_1f8;
    local_c8 = _DAT_1805d0630;
    uStack_c0 = _UNK_1805d0638;
LAB_1800ce9e1:
    local_c8 = _DAT_1805d0630;
    uStack_c0 = _UNK_1805d0638;
    if (*(char *)(param_2 + 0xc) != '\0') {
      iVar18 = *param_1;
      if (iVar18 == 0x2b) {
        *(undefined8 *)(puVar14 + 0x50) = 0;
        *(undefined8 *)(puVar14 + 0x58) = 0;
        *(undefined4 *)(puVar14 + 0x38) = 0x3f800000;
        *(undefined4 *)(puVar14 + 0x30) = 0;
        fVar17 = *(float *)(param_2 + 0x28);
        pfVar11 = (float *)(puVar14 + 0x30);
        if (0.0 <= fVar17) {
          pfVar11 = (float *)(param_2 + 0x28);
        }
        pfVar9 = (float *)(puVar14 + 0x38);
        if (fVar17 <= fVar4) {
          pfVar9 = pfVar11;
        }
        fVar17 = *pfVar9;
        *(undefined8 *)(puVar14 + -8) = 0x1800cecb5;
        snprintf(puVar14 + 0x50,0x10,&DAT_1806f0260,(int)(fVar17 * DAT_1808acb08));
        *(undefined8 *)(puVar14 + 0x70) = 0;
        *(undefined8 *)(puVar14 + 0x78) = 0;
        local_178 = 3;
        local_170 = 0xf;
        *(short *)(puVar14 + 0x70) = (short)DAT_1806eff4c;
        puVar14[0x72] = (char)((uint)DAT_1806eff4c >> 0x10);
        puVar14[0x73] = 0;
        local_168 = 0;
        uStack_160 = 0;
        local_158 = 0;
        local_150 = 0;
        *(undefined8 *)(puVar14 + -8) = 0x1800cecfe;
        sVar8 = strlen(puVar14 + 0x50);
        *(undefined8 *)(puVar14 + -8) = 0x1800ced0f;
        FUN_1800133a0(&local_168,puVar14 + 0x50,sVar8);
        local_148 = 1;
        local_144 = _DAT_1805d0700;
        uStack_13c = _UNK_1805d0708;
        local_130 = *(undefined8 *)(param_1 + 0x66);
        uStack_128 = *(undefined8 *)(param_1 + 0x68);
        local_120 = *(undefined8 *)(param_1 + 0x6a);
        uStack_118 = *(undefined8 *)(param_1 + 0x6c);
        local_110 = *(undefined8 *)(param_1 + 0x6e);
        uStack_108 = *(undefined8 *)(param_1 + 0x70);
        local_100 = *(undefined8 *)(param_1 + 0x72);
        uStack_f8 = *(undefined8 *)(param_1 + 0x74);
        local_f0 = *(undefined8 *)(param_1 + 0x76);
        uStack_e8 = *(undefined8 *)(param_1 + 0x78);
        local_e0 = param_1[0x7a];
        iStack_dc = param_1[0x7b];
        iStack_d8 = param_1[0x7c];
        iStack_d4 = param_1[0x7d];
        *(undefined8 *)(puVar14 + -8) = 0x1800ced77;
        FUN_18002ba60(param_1 + 0x50,puVar14 + 0x70);
        *(undefined8 *)(puVar14 + -8) = 0x1800ced87;
        FUN_18002ba60(param_1 + 0x58,&local_168);
        *(undefined1 *)(param_1 + 0x60) = local_148;
        *(undefined8 *)(param_1 + 0x61) = local_144;
        *(undefined8 *)(param_1 + 99) = uStack_13c;
        *(undefined8 *)(param_1 + 0x66) = local_130;
        *(undefined8 *)(param_1 + 0x68) = uStack_128;
        *(undefined8 *)(param_1 + 0x6a) = local_120;
        *(undefined8 *)(param_1 + 0x6c) = uStack_118;
        *(undefined8 *)(param_1 + 0x6e) = local_110;
        *(undefined8 *)(param_1 + 0x70) = uStack_108;
        *(undefined8 *)(param_1 + 0x72) = local_100;
        *(undefined8 *)(param_1 + 0x74) = uStack_f8;
        param_1[0x76] = (int)local_f0;
        param_1[0x77] = local_f0._4_4_;
        param_1[0x78] = (int)uStack_e8;
        param_1[0x79] = uStack_e8._4_4_;
        *(ulonglong *)(param_1 + 0x7a) = CONCAT44(iStack_dc,local_e0);
        *(ulonglong *)(param_1 + 0x7c) = CONCAT44(iStack_d4,iStack_d8);
        *(undefined8 *)(puVar14 + -8) = 0x1800cedef;
        FUN_18000f890(&local_168);
        *(undefined8 *)(puVar14 + -8) = 0x1800cedf9;
        FUN_18000f890(puVar14 + 0x70);
      }
      else if (iVar18 == 0x2c) {
        *(undefined4 *)(puVar14 + 0x4c) = 0x3f800000;
        *(undefined4 *)(puVar14 + 0x44) = 0;
        iVar18 = *(int *)(param_2 + 0x24);
        if (iVar18 < 1) {
          iVar18 = 1;
        }
        fVar17 = *(float *)(param_2 + 0x20) / (float)iVar18;
        *(float *)(puVar14 + 0x48) = fVar17;
        pfVar11 = (float *)(puVar14 + 0x44);
        if (0.0 <= fVar17) {
          pfVar11 = (float *)(puVar14 + 0x48);
        }
        pfVar9 = (float *)(puVar14 + 0x4c);
        if (fVar17 <= fVar4) {
          pfVar9 = pfVar11;
        }
        if (*pfVar9 <= DAT_1808ac140) {
          fVar17 = *pfVar9 * DAT_1808ac710;
        }
        else {
          fVar17 = fVar4;
        }
        if (bVar2) {
          *(undefined8 *)(puVar14 + -8) = 0x1800ceb1a;
          fVar19 = (float)FUN_1800ce780(pfVar11,fVar17,param_4);
        }
        else {
          fVar19 = fVar17;
        }
        param_1[0x20] = (int)fVar19;
        iVar15 = (int)*(float *)(param_2 + 0x20);
        iVar18 = *(int *)(param_2 + 0x24);
        *(undefined8 *)(puVar14 + 0x50) = 0;
        *(undefined8 *)(puVar14 + 0x58) = 0;
        *(undefined8 *)(puVar14 + 0x60) = 0;
        *(undefined8 *)(puVar14 + -8) = 0x1800ceb5b;
        snprintf(puVar14 + 0x50,0x18,"-%d HP",iVar15);
        pcVar13 = (char *)&DAT_1806eff4c;
        if (iVar18 <= iVar15) {
          pcVar13 = &DAT_1806f0248;
        }
        *(undefined8 *)(puVar14 + -8) = 0x1800ceb77;
        sVar8 = strlen(pcVar13);
        *(undefined8 *)(puVar14 + -8) = 0x1800ceb89;
        FUN_180029840(param_1 + 0x50,pcVar13,sVar8);
        pcVar13 = puVar14 + 0x50;
        if (iVar18 <= iVar15) {
          pcVar13 = "FATAL";
        }
        *(undefined8 *)(puVar14 + -8) = 0x1800ceba3;
        sVar8 = strlen(pcVar13);
        *(undefined8 *)(puVar14 + -8) = 0x1800cebb5;
        FUN_180029840(param_1 + 0x58,pcVar13,sVar8);
        *(undefined1 *)(param_1 + 0x60) = 1;
        fVar19 = (float)param_1[0x20];
        param_1[0x61] = (int)(fVar19 * _DAT_1808ac0d0 + _DAT_1808ac2c4);
        param_1[0x62] = (int)(fVar19 * _DAT_1808acd78 + _DAT_1808ac22c);
        param_1[99] = (int)(fVar19 * _DAT_1808acd60 + _DAT_1808ac204);
        param_1[100] = (int)(fVar19 * 0.0 + fVar4);
        local_c8 = _DAT_1805d06c8;
        uStack_c0 = _UNK_1805d06d0;
        if ((fVar4 <= fVar17) && ((float)param_1[2] <= fVar4 && fVar4 != (float)param_1[2])) {
          param_1[10] = 0x3e800000;
        }
      }
      else if ((iVar18 == 0x2e) || (iVar18 == 0x30)) {
        if (*(char *)(param_2 + 0x2c) != '\0') {
          local_c8 = _DAT_1805d0710;
          uStack_c0 = _UNK_1805d0718;
        }
      }
      else if (iVar18 == 0x231) {
        if (*(char *)(param_2 + 0x2c) != '\0') {
          local_c8 = _DAT_1805d0710;
          uStack_c0 = _UNK_1805d0718;
        }
        *(undefined8 *)(puVar14 + -8) = 0x1800cea40;
        FUN_180029840(param_1 + 0x50,&DAT_1806f024c,3);
        *(undefined8 *)(puVar14 + -8) = 0x1800cea59;
        FUN_180029840(param_1 + 0x58,"SMOKE",5);
        *(undefined1 *)(param_1 + 0x60) = *(undefined1 *)(param_2 + 0x2d);
        uVar3 = _UNK_1805d0620;
        *(undefined8 *)(param_1 + 0x61) = _DAT_1805d0618;
        *(undefined8 *)(param_1 + 99) = uVar3;
      }
    }
  }
  dVar5 = DAT_1808ac448;
  if (((char)param_1[8] == '\0') || ((float)param_1[2] <= 0.0)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if ((char)param_1[1] == '\0') {
    fVar17 = 0.0;
    uVar20 = SUB84((double)(float)param_1[10] * DAT_1808ac448,0);
  }
  else {
    uVar20 = SUB84((double)(float)param_1[10] * DAT_1808ac420,0);
    fVar17 = fVar4;
  }
  *(double *)(puVar14 + 0x20) = param_3;
  *(undefined8 *)(puVar14 + -8) = 0x1800cee4c;
  FUN_1800ce4f0(param_1 + 2,fVar17,uVar20);
  if ((char)param_1[1] == '\0') {
    param_1[10] = 0x3f800000;
  }
  if ((bVar2) && ((char)param_1[1] != '\0')) {
    uVar7 = 1;
  }
  else {
    uVar7 = 0;
  }
  puVar14[0x20] = uVar7;
  *(undefined8 *)(puVar14 + -8) = 0x1800cee86;
  FUN_1800ce640(param_1 + 0xc,puVar14 + 0x50,&local_c8);
  if ((((param_2 != 0) && (*(char *)(param_2 + 0xc) != '\0')) &&
      (((uint)*(float *)(param_2 + 0x10) & 0x7f800000) != 0x7f800000)) &&
     ((((uint)*(float *)(param_2 + 0x14) & 0x7f800000) != 0x7f800000 &&
      (((uint)*(float *)(param_2 + 0x18) & 0x7f800000) != 0x7f800000)))) {
    if (((char)param_1[0x1c] != '\0') && (!bVar2)) {
      fVar17 = *(float *)(param_2 + 0x10) - (float)param_1[0x1d];
      fVar19 = *(float *)(param_2 + 0x14) - (float)param_1[0x1e];
      fVar21 = *(float *)(param_2 + 0x18) - (float)param_1[0x1f];
      fVar17 = fVar19 * fVar19 + fVar17 * fVar17 + fVar21 * fVar21;
      if (fVar17 < 0.0) {
        *(undefined8 *)(puVar14 + -8) = 0x1800cef4e;
        fVar17 = (float)FUN_18051af10();
      }
      else {
        fVar17 = SQRT(fVar17);
      }
      if (fVar17 <= DAT_1808acc44) {
        *(undefined8 *)(puVar14 + -8) = 0x1800cef6a;
        iVar18 = FUN_1800ce780();
        param_1[0x1d] = iVar18;
        *(undefined8 *)(puVar14 + -8) = 0x1800cef81;
        iVar18 = FUN_1800ce780();
        param_1[0x1e] = iVar18;
        *(undefined8 *)(puVar14 + -8) = 0x1800cef98;
        iVar18 = FUN_1800ce780();
        param_1[0x1f] = iVar18;
        goto LAB_1800cefb9;
      }
    }
    *(undefined8 *)(param_1 + 0x1d) = *(undefined8 *)(param_2 + 0x10);
    param_1[0x1f] = *(int *)(param_2 + 0x18);
    *(undefined1 *)(param_1 + 0x1c) = 1;
  }
LAB_1800cefb9:
  dVar6 = DAT_1808ac460;
  if (param_1 != param_1 + 0x5c) {
    do {
      if ((bVar2) && ((char)param_1[1] != '\0')) {
        *(undefined1 *)(piVar16 + 0x1c) = 0;
        *(undefined1 *)(piVar16 + 0x2c) = 0;
      }
      if ((char)piVar16[0x10] == '\0') {
        fVar17 = 0.0;
      }
      else {
        fVar17 = fVar4;
      }
      if ((char)piVar16[0x1c] == '\0') {
        piVar16[0x17] = (int)fVar17;
        piVar16[0x18] = (int)fVar17;
        piVar16[0x19] = *(int *)(puVar14 + 0x5c);
        *(double *)(piVar16 + 0x1a) = param_3;
        *(undefined1 *)(piVar16 + 0x1c) = 1;
        *(undefined4 *)((longlong)piVar16 + 0x71) = *(undefined4 *)(puVar14 + 0x69);
        *(undefined2 *)((longlong)piVar16 + 0x75) = *(undefined2 *)(puVar14 + 0x6d);
        *(undefined1 *)((longlong)piVar16 + 0x77) = puVar14[0x6f];
      }
      else {
        if (fVar17 == (float)piVar16[0x18]) {
          fVar17 = (float)piVar16[0x18];
        }
        else {
          piVar16[0x17] = piVar16[0x16];
          piVar16[0x18] = (int)fVar17;
          *(double *)(piVar16 + 0x1a) = param_3;
        }
        fVar19 = (float)((param_3 - *(double *)(piVar16 + 0x1a)) / dVar6);
        *(float *)(puVar14 + 0x30) = fVar19;
        *(undefined4 *)(puVar14 + 0x40) = 0x3f800000;
        *(undefined4 *)(puVar14 + 0x38) = 0;
        pfVar11 = (float *)(puVar14 + 0x38);
        if (0.0 <= fVar19) {
          pfVar11 = (float *)(puVar14 + 0x30);
        }
        pfVar9 = (float *)(puVar14 + 0x40);
        if (fVar19 <= fVar4) {
          pfVar9 = pfVar11;
        }
        fVar19 = fVar4 - *pfVar9;
        fVar17 = (fVar17 - (float)piVar16[0x17]) * (fVar4 - fVar19 * fVar19 * fVar19) +
                 (float)piVar16[0x17];
      }
      piVar16[0x16] = (int)fVar17;
      if ((char)piVar16[0x2c] == '\0') {
        fVar17 = (float)piVar16[0x11];
        fVar19 = (float)piVar16[0x12];
        fVar21 = (float)piVar16[0x13];
        fVar22 = (float)piVar16[0x14];
        piVar16[0x22] = (int)fVar17;
        piVar16[0x23] = (int)fVar19;
        piVar16[0x24] = (int)fVar21;
        piVar16[0x25] = (int)fVar22;
        piVar16[0x26] = (int)fVar17;
        piVar16[0x27] = (int)fVar19;
        piVar16[0x28] = (int)fVar21;
        piVar16[0x29] = (int)fVar22;
        *(double *)(piVar16 + 0x2a) = param_3;
        *(undefined1 *)(piVar16 + 0x2c) = 1;
      }
      else {
        if (((((float)piVar16[0x11] != (float)piVar16[0x26]) ||
             ((float)piVar16[0x12] != (float)piVar16[0x27])) ||
            ((float)piVar16[0x13] != (float)piVar16[0x28])) ||
           ((float)piVar16[0x14] != (float)piVar16[0x29])) {
          *(undefined8 *)(piVar16 + 0x22) = *(undefined8 *)(piVar16 + 0x1e);
          *(undefined8 *)(piVar16 + 0x24) = *(undefined8 *)(piVar16 + 0x20);
          *(undefined8 *)(piVar16 + 0x26) = *(undefined8 *)(piVar16 + 0x11);
          *(undefined8 *)(piVar16 + 0x28) = *(undefined8 *)(piVar16 + 0x13);
          *(double *)(piVar16 + 0x2a) = param_3;
        }
        fVar17 = (float)((param_3 - *(double *)(piVar16 + 0x2a)) / dVar5);
        *(float *)(puVar14 + 0x38) = fVar17;
        *(undefined4 *)(puVar14 + 0x30) = 0x3f800000;
        *(undefined4 *)(puVar14 + 0x40) = 0;
        pfVar11 = (float *)(puVar14 + 0x40);
        if (0.0 <= fVar17) {
          pfVar11 = (float *)(puVar14 + 0x38);
        }
        pfVar9 = (float *)(puVar14 + 0x30);
        if (fVar17 <= fVar4) {
          pfVar9 = pfVar11;
        }
        fVar17 = fVar4 - *pfVar9;
        fVar22 = fVar4 - fVar17 * fVar17 * fVar17;
        fVar17 = ((float)piVar16[0x26] - (float)piVar16[0x22]) * fVar22 + (float)piVar16[0x22];
        fVar19 = ((float)piVar16[0x27] - (float)piVar16[0x23]) * fVar22 + (float)piVar16[0x23];
        fVar21 = ((float)piVar16[0x28] - (float)piVar16[0x24]) * fVar22 + (float)piVar16[0x24];
        fVar22 = ((float)piVar16[0x29] - (float)piVar16[0x25]) * fVar22 + (float)piVar16[0x25];
      }
      piVar16[0x1e] = (int)fVar17;
      piVar16[0x1f] = (int)fVar19;
      piVar16[0x20] = (int)fVar21;
      piVar16[0x21] = (int)fVar22;
      piVar16 = piVar16 + 0x2e;
    } while (piVar16 != param_1 + 0x7e);
  }
  *(undefined8 *)(puVar14 + -8) = 0x1800cf228;
  return;
}



/* ===== 1800cf270 FUN_1800cf270 ===== */

void FUN_1800cf270(longlong param_1)

{
  FUN_18000f890(param_1 + 0x20);
  FUN_18000f890(param_1);
  return;
}



/* ===== 1800cf290 FUN_1800cf290 ===== */

undefined ** FUN_1800cf290(undefined8 *param_1)

{
  ulonglong uVar1;
  size_t _Size;
  char *_Str;
  int iVar2;
  size_t sVar3;
  undefined8 *_Buf1;
  undefined **ppuVar4;
  
  uVar1 = param_1[3];
  ppuVar4 = &PTR_DAT_1805d0650;
  _Size = param_1[2];
  do {
    _Str = *ppuVar4;
    sVar3 = strlen(_Str);
    if (uVar1 < 0x10) {
      _Buf1 = param_1;
    }
    else {
      _Buf1 = (undefined8 *)*param_1;
    }
    if (_Size == sVar3) {
      if (_Size == 0) {
        return ppuVar4;
      }
      iVar2 = memcmp(_Buf1,_Str,_Size);
      if (iVar2 == 0) {
        return ppuVar4;
      }
    }
    ppuVar4 = ppuVar4 + 3;
    if (ppuVar4 == (undefined **)&DAT_1805d06b0) {
      return (undefined **)0x0;
    }
  } while( true );
}



/* ===== 1800cf320 FUN_1800cf320 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

float FUN_1800cf320(undefined8 param_1,longlong param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  char *_Str;
  code *pcVar4;
  longlong lVar5;
  longlong lVar6;
  size_t sVar7;
  longlong *plVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined1 *puVar11;
  float fVar12;
  undefined1 auStack_108 [8];
  undefined1 auStack_100 [96];
  undefined1 local_a0 [24];
  longlong local_88 [10];
  
  local_88[4] = DAT_180919500 ^ (ulonglong)auStack_108;
  lVar6 = FUN_1800cf290(param_2);
  puVar11 = auStack_108;
  if (lVar6 == 0) {
    fVar12 = 0.0;
    goto LAB_1800cf472;
  }
  fVar12 = *(float *)((longlong)param_4 + 0xc) + *(float *)((longlong)param_4 + 0xc) + DAT_1808ac1f4
  ;
  uVar3 = *(undefined8 *)(lVar6 + 0x10);
  _Str = *(char **)(lVar6 + 8);
  local_88[0] = 0;
  local_88[1] = 0;
  local_88[2] = 0;
  local_88[3] = 0;
  sVar7 = strlen(_Str);
  FUN_1800133a0(local_88,_Str,sVar7);
  plVar8 = (longlong *)FUN_18039ed80(local_a0,local_88,uVar3,(int)fVar12);
  lVar6 = *plVar8;
  lVar5 = plVar8[1];
  iVar2 = *(int *)((longlong)plVar8 + 0xc);
  if ((ulonglong)local_88[3] < 0x10) {
LAB_1800cf420:
    puVar11 = auStack_108;
    if (((lVar6 != 0) && (puVar11 = auStack_108, 0 < (int)lVar5)) &&
       (puVar11 = auStack_108, 0 < iVar2)) {
      fVar12 = ((float)(int)lVar5 / (float)iVar2) * *(float *)((longlong)param_4 + 0xc) + 0.0;
      puVar11 = auStack_108;
      goto LAB_1800cf472;
    }
  }
  else {
    uVar10 = local_88[3] + 1;
    lVar9 = local_88[0];
    if (uVar10 < 0x1000) {
LAB_1800cf41b:
      thunk_FUN_1803d64e0(lVar9,uVar10);
      goto LAB_1800cf420;
    }
    lVar9 = *(longlong *)(local_88[0] + -8);
    if ((local_88[0] - lVar9) - 8U < 0x20) {
      uVar10 = local_88[3] + 0x28;
      goto LAB_1800cf41b;
    }
    pcVar4 = (code *)swi(0x29);
    (*pcVar4)(5);
    puVar11 = auStack_100;
  }
  fVar12 = DAT_1808ac34c * *(float *)((longlong)param_4 + 0xc) + 0.0;
LAB_1800cf472:
  if ((*(longlong *)(param_2 + 0x10) != 0) && (param_3[2] != 0)) {
    *(undefined4 *)(puVar11 + 0x50) = 0;
    *(undefined8 *)(puVar11 + 0x40) = 0;
    *(undefined8 *)(puVar11 + 0x38) = 0;
    *(undefined8 *)(puVar11 + 0x30) = 0;
    *(undefined2 **)(puVar11 + 0x28) = &DAT_1806f02a8;
    *(undefined4 *)(puVar11 + 0x20) = 0;
    uVar1 = *(undefined4 *)(param_4 + 1);
    uVar3 = *param_4;
    *(undefined8 *)(puVar11 + -8) = 0x1800cf4c1;
    FUN_18040a2f0(puVar11 + 0x60,uVar3,uVar1,DAT_1808acd08);
    fVar12 = *(float *)(puVar11 + 0x60) + fVar12;
  }
  if (0xf < (ulonglong)param_3[3]) {
    param_3 = (undefined8 *)*param_3;
  }
  *(undefined4 *)(puVar11 + 0x50) = 0;
  *(undefined8 *)(puVar11 + 0x40) = 0;
  *(undefined8 *)(puVar11 + 0x38) = 0;
  *(undefined8 *)(puVar11 + 0x30) = 0;
  *(undefined8 **)(puVar11 + 0x28) = param_3;
  *(undefined4 *)(puVar11 + 0x20) = 0;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar3 = *param_4;
  *(undefined8 *)(puVar11 + -8) = 0x1800cf512;
  FUN_18040a2f0(puVar11 + 0x60,uVar3,uVar1,DAT_1808acd08);
  *(undefined8 *)(puVar11 + -8) = 0x1800cf52c;
  return *(float *)(puVar11 + 0x60) + fVar12;
}



/* ===== 1800cf550 FUN_1800cf550 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800cf550(longlong param_1,undefined8 param_2,char *param_3,float param_4,float param_5,
                  longlong *param_6,uint param_7)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  char *_Str;
  code *pcVar4;
  longlong lVar5;
  size_t sVar6;
  longlong *plVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined1 *puVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_148 [8];
  undefined1 auStack_140 [120];
  undefined8 local_c8;
  longlong lStack_c0;
  longlong local_a8 [14];
  
  local_a8[4] = DAT_180919500 ^ (ulonglong)auStack_148;
  lVar5 = FUN_1800cf290(param_2);
  puVar10 = auStack_148;
  if (lVar5 == 0) goto LAB_1800cf7b0;
  fVar11 = *(float *)((longlong)param_6 + 0xc) + *(float *)((longlong)param_6 + 0xc) + DAT_1808ac1f4
  ;
  uVar3 = *(undefined8 *)(lVar5 + 0x10);
  _Str = *(char **)(lVar5 + 8);
  local_a8[0] = 0;
  local_a8[1] = 0;
  local_a8[2] = 0;
  local_a8[3] = 0;
  sVar6 = strlen(_Str);
  FUN_1800133a0(local_a8,_Str,sVar6);
  plVar7 = (longlong *)FUN_18039ed80(&local_c8,local_a8,uVar3,(int)fVar11);
  lVar5 = *plVar7;
  iVar1 = (int)plVar7[1];
  iVar2 = *(int *)((longlong)plVar7 + 0xc);
  if ((ulonglong)local_a8[3] < 0x10) {
LAB_1800cf658:
    puVar10 = auStack_148;
    if (((lVar5 == 0) || (puVar10 = auStack_148, iVar1 < 1)) || (puVar10 = auStack_148, iVar2 < 1))
    goto LAB_1800cf68d;
    fVar11 = *(float *)((longlong)param_6 + 0xc);
    puVar10 = auStack_148;
    fVar13 = fVar11 * ((float)iVar1 / (float)iVar2);
LAB_1800cf6af:
    *(float *)(puVar10 + 0x60) = param_4;
    fVar12 = (fVar11 * _DAT_1808ac388 + param_5) - fVar11 * DAT_1808acbe4 * DAT_1808abfc4;
    *(float *)(puVar10 + 100) = fVar12;
    *(undefined4 *)(puVar10 + 0x68) = 0x3f800000;
    *(undefined4 *)(puVar10 + 0x6c) = 0x3f800000;
    *(undefined8 *)(puVar10 + 0x70) = 0;
    *(float *)(puVar10 + 0x78) = param_4 + fVar13;
    *(float *)(puVar10 + 0x7c) = fVar11 + fVar12;
    local_c8 = 0;
    *(uint *)(puVar10 + 0x30) = param_7;
    *(undefined1 **)(puVar10 + 0x28) = puVar10 + 0x68;
    *(undefined1 **)(puVar10 + 0x20) = puVar10 + 0x70;
    *(undefined8 *)(puVar10 + -8) = 0x1800cf74b;
    lStack_c0 = lVar5;
    FUN_1803fea90(param_1,&local_c8,puVar10 + 0x60,puVar10 + 0x78);
    fVar11 = fVar13;
  }
  else {
    uVar9 = local_a8[3] + 1;
    lVar8 = local_a8[0];
    if (uVar9 < 0x1000) {
LAB_1800cf653:
      thunk_FUN_1803d64e0(lVar8,uVar9);
      goto LAB_1800cf658;
    }
    lVar8 = *(longlong *)(local_a8[0] + -8);
    if ((local_a8[0] - lVar8) - 8U < 0x20) {
      uVar9 = local_a8[3] + 0x28;
      goto LAB_1800cf653;
    }
    pcVar4 = (code *)swi(0x29);
    (*pcVar4)(5);
    puVar10 = auStack_140;
LAB_1800cf68d:
    fVar11 = *(float *)((longlong)param_6 + 0xc);
    if (((lVar5 != 0) && (0 < iVar1)) && (0 < iVar2)) {
      fVar13 = fVar11;
      goto LAB_1800cf6af;
    }
  }
  param_4 = fVar11 + param_4;
  if (*(longlong *)(param_3 + 0x10) != 0) {
    *(undefined4 *)(puVar10 + 0x50) = 0;
    *(undefined8 *)(puVar10 + 0x40) = 0;
    *(undefined8 *)(puVar10 + 0x38) = 0;
    *(undefined8 *)(puVar10 + 0x30) = 0;
    *(undefined2 **)(puVar10 + 0x28) = &DAT_1806f02a8;
    *(undefined4 *)(puVar10 + 0x20) = 0;
    lVar8 = param_6[1];
    lVar5 = *param_6;
    *(undefined8 *)(puVar10 + -8) = 0x1800cf79e;
    FUN_18040a2f0(puVar10 + 0x60,lVar5,(int)lVar8,DAT_1808acd08);
    param_4 = *(float *)(puVar10 + 0x60) + param_4;
  }
LAB_1800cf7b0:
  if (0xf < *(ulonglong *)(param_3 + 0x18)) {
    param_3 = *(char **)param_3;
  }
  *(float *)(puVar10 + 0x60) = param_4;
  *(float *)(puVar10 + 100) = param_5;
  if ((((param_7 & 0xff000000) != 0) && (param_3 != (char *)0x0)) && (*param_3 != '\0')) {
    fVar11 = *(float *)(param_6 + 1);
    lVar5 = *param_6;
    if (lVar5 == 0) {
      lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x18);
    }
    if (fVar11 == 0.0) {
      fVar11 = *(float *)(*(longlong *)(param_1 + 0x38) + 0x20);
    }
    local_c8 = *(undefined8 *)(param_1 + 0x60);
    lStack_c0 = *(undefined8 *)(param_1 + 0x68);
    *(undefined4 *)(puVar10 + 0x48) = 0;
    *(undefined4 *)(puVar10 + 0x40) = 0;
    *(undefined8 *)(puVar10 + 0x38) = 0;
    *(char **)(puVar10 + 0x30) = param_3;
    *(undefined8 **)(puVar10 + 0x28) = &local_c8;
    *(uint *)(puVar10 + 0x20) = param_7;
    *(undefined8 *)(puVar10 + -8) = 0x1800cf83b;
    FUN_18040a900(lVar5,param_1,fVar11,puVar10 + 0x60);
  }
  *(undefined8 *)(puVar10 + -8) = 0x1800cf847;
  return;
}



/* ===== 1800cf880 FUN_1800cf880 ===== */

void FUN_1800cf880(float *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  float local_res8 [2];
  float local_res10 [2];
  float local_res18 [2];
  float local_res20 [2];
  float local_38;
  float local_34 [5];
  float local_20;
  float local_1c;
  float local_18;
  
  fVar1 = param_1[2];
  local_res8[0] = 1.0;
  local_res10[0] = 0.0;
  local_res20[0] = 1.0;
  local_res18[0] = 0.0;
  local_34[0] = 1.0;
  local_38 = 0.0;
  local_34[3] = 1.0;
  local_34[1] = 0.0;
  fVar2 = param_1[1];
  local_34[2] = param_2 * param_1[3];
  pfVar4 = local_res10;
  if (0.0 <= *param_1) {
    pfVar4 = param_1;
  }
  pfVar3 = local_res8;
  if (*param_1 <= DAT_1808ac34c) {
    pfVar3 = pfVar4;
  }
  local_34[4] = *pfVar3;
  pfVar4 = local_res18;
  if (0.0 <= fVar2) {
    pfVar4 = param_1 + 1;
  }
  pfVar3 = local_res20;
  if (fVar2 <= DAT_1808ac34c) {
    pfVar3 = pfVar4;
  }
  local_20 = *pfVar3;
  pfVar4 = &local_38;
  if (0.0 <= fVar1) {
    pfVar4 = param_1 + 2;
  }
  pfVar3 = local_34;
  if (fVar1 <= DAT_1808ac34c) {
    pfVar3 = pfVar4;
  }
  local_1c = *pfVar3;
  pfVar4 = local_34 + 1;
  if (0.0 <= local_34[2]) {
    pfVar4 = local_34 + 2;
  }
  pfVar3 = local_34 + 3;
  if (local_34[2] <= DAT_1808ac34c) {
    pfVar3 = pfVar4;
  }
  local_18 = *pfVar3;
  FUN_1803d7f30(local_34 + 4);
  return;
}



/* ===== 1800cf990 FUN_1800cf990 ===== */

void FUN_1800cf990(longlong param_1,float *param_2,float param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  short sVar4;
  longlong lVar5;
  short sVar6;
  float fVar7;
  float fVar8;
  short *psVar9;
  int iVar10;
  float *pfVar11;
  short sVar12;
  float fVar13;
  float fVar14;
  
  uVar1 = *(undefined4 *)(DAT_180ca0a50 + 0x1218);
  uVar2 = *(undefined4 *)(DAT_180ca0a50 + 0x121c);
  FUN_1803fc3a0(param_1,0x90,0x31);
  fVar8 = DAT_1808aca7c;
  fVar7 = DAT_1808ac7d0;
  sVar4 = *(short *)(param_1 + 0x34);
  **(undefined8 **)(param_1 + 0x40) = *(undefined8 *)param_2;
  lVar5 = *(longlong *)(param_1 + 0x40);
  *(undefined4 *)(lVar5 + 8) = uVar1;
  *(undefined4 *)(lVar5 + 0xc) = uVar2;
  *(undefined4 *)(*(longlong *)(param_1 + 0x40) + 0x10) = param_4;
  *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + 0x14;
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
  pfVar11 = *(float **)(param_1 + 0x40);
  iVar10 = 0;
  do {
    fVar14 = ((float)iVar10 / fVar8) * fVar7;
    fVar13 = (float)FUN_180517790(fVar14);
    fVar3 = param_2[1];
    fVar14 = (float)FUN_180517200(fVar14);
    iVar10 = iVar10 + 1;
    *pfVar11 = fVar14 * param_3 + *param_2;
    pfVar11[1] = fVar13 * param_3 + fVar3;
    lVar5 = *(longlong *)(param_1 + 0x40);
    *(undefined4 *)(lVar5 + 8) = uVar1;
    *(undefined4 *)(lVar5 + 0xc) = uVar2;
    *(undefined4 *)(*(longlong *)(param_1 + 0x40) + 0x10) = 0x232323;
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
    pfVar11 = (float *)(*(longlong *)(param_1 + 0x40) + 0x14);
    *(float **)(param_1 + 0x40) = pfVar11;
  } while (iVar10 < 0x30);
  iVar10 = 0;
  sVar12 = sVar4 + 1;
  do {
    **(short **)(param_1 + 0x48) = sVar4;
    sVar6 = (short)iVar10;
    psVar9 = (short *)(*(longlong *)(param_1 + 0x48) + 2);
    *(short **)(param_1 + 0x48) = psVar9;
    *psVar9 = sVar12 + sVar6;
    psVar9 = (short *)(*(longlong *)(param_1 + 0x48) + 2);
    *(short **)(param_1 + 0x48) = psVar9;
    *psVar9 = (short)(iVar10 + 1) + (short)((iVar10 + 1) / 0x30) * -0x30 + sVar12;
    psVar9 = (short *)(*(longlong *)(param_1 + 0x48) + 2);
    *(short **)(param_1 + 0x48) = psVar9;
    *psVar9 = sVar4;
    psVar9 = (short *)(*(longlong *)(param_1 + 0x48) + 2);
    *(short **)(param_1 + 0x48) = psVar9;
    *psVar9 = sVar4 + 2 + sVar6;
    psVar9 = (short *)(*(longlong *)(param_1 + 0x48) + 2);
    *(short **)(param_1 + 0x48) = psVar9;
    *psVar9 = (short)(iVar10 + 2) + (short)((iVar10 + 2) / 0x30) * -0x30 + sVar12;
    psVar9 = (short *)(*(longlong *)(param_1 + 0x48) + 2);
    *(short **)(param_1 + 0x48) = psVar9;
    *psVar9 = sVar4;
    psVar9 = (short *)(*(longlong *)(param_1 + 0x48) + 2);
    *(short **)(param_1 + 0x48) = psVar9;
    *psVar9 = sVar4 + 3 + sVar6;
    psVar9 = (short *)(*(longlong *)(param_1 + 0x48) + 2);
    *(short **)(param_1 + 0x48) = psVar9;
    *psVar9 = (short)(iVar10 + 3) + (short)((iVar10 + 3) / 0x30) * -0x30 + sVar12;
    psVar9 = (short *)(*(longlong *)(param_1 + 0x48) + 2);
    *(short **)(param_1 + 0x48) = psVar9;
    *psVar9 = sVar4;
    psVar9 = (short *)(*(longlong *)(param_1 + 0x48) + 2);
    *(short **)(param_1 + 0x48) = psVar9;
    *psVar9 = sVar4 + 4 + sVar6;
    psVar9 = (short *)(*(longlong *)(param_1 + 0x48) + 2);
    *(short **)(param_1 + 0x48) = psVar9;
    *psVar9 = (short)(iVar10 + 4) + (short)((iVar10 + 4) / 0x30) * -0x30 + sVar12;
    psVar9 = (short *)(*(longlong *)(param_1 + 0x48) + 2);
    *(short **)(param_1 + 0x48) = psVar9;
    *psVar9 = sVar4;
    psVar9 = (short *)(*(longlong *)(param_1 + 0x48) + 2);
    *(short **)(param_1 + 0x48) = psVar9;
    *psVar9 = sVar4 + 5 + sVar6;
    psVar9 = (short *)(*(longlong *)(param_1 + 0x48) + 2);
    *(short **)(param_1 + 0x48) = psVar9;
    *psVar9 = (short)(iVar10 + 5) + (short)((iVar10 + 5) / 0x30) * -0x30 + sVar12;
    psVar9 = (short *)(*(longlong *)(param_1 + 0x48) + 2);
    *(short **)(param_1 + 0x48) = psVar9;
    *psVar9 = sVar4;
    psVar9 = (short *)(*(longlong *)(param_1 + 0x48) + 2);
    *(short **)(param_1 + 0x48) = psVar9;
    *psVar9 = sVar4 + 6 + sVar6;
    psVar9 = (short *)(*(longlong *)(param_1 + 0x48) + 2);
    *(short **)(param_1 + 0x48) = psVar9;
    *psVar9 = (short)(iVar10 + 6) + (short)((iVar10 + 6) / 0x30) * -0x30 + sVar12;
    psVar9 = (short *)(*(longlong *)(param_1 + 0x48) + 2);
    *(short **)(param_1 + 0x48) = psVar9;
    *psVar9 = sVar4;
    psVar9 = (short *)(*(longlong *)(param_1 + 0x48) + 2);
    *(short **)(param_1 + 0x48) = psVar9;
    *psVar9 = sVar4 + 7 + sVar6;
    psVar9 = (short *)(*(longlong *)(param_1 + 0x48) + 2);
    *(short **)(param_1 + 0x48) = psVar9;
    *psVar9 = (short)(iVar10 + 7) + (short)((iVar10 + 7) / 0x30) * -0x30 + sVar12;
    psVar9 = (short *)(*(longlong *)(param_1 + 0x48) + 2);
    *(short **)(param_1 + 0x48) = psVar9;
    *psVar9 = sVar4;
    psVar9 = (short *)(*(longlong *)(param_1 + 0x48) + 2);
    *(short **)(param_1 + 0x48) = psVar9;
    *psVar9 = sVar6 + sVar4 + 8;
    psVar9 = (short *)(*(longlong *)(param_1 + 0x48) + 2);
    *(short **)(param_1 + 0x48) = psVar9;
    *psVar9 = (short)(iVar10 + 8) + (short)((iVar10 + 8) / 0x30) * -0x30 + sVar12;
    psVar9 = (short *)(*(longlong *)(param_1 + 0x48) + 2);
    *(short **)(param_1 + 0x48) = psVar9;
    *psVar9 = sVar4;
    psVar9 = (short *)(*(longlong *)(param_1 + 0x48) + 2);
    *(short **)(param_1 + 0x48) = psVar9;
    *psVar9 = sVar6 + sVar4 + 9;
    psVar9 = (short *)(*(longlong *)(param_1 + 0x48) + 2);
    *(short **)(param_1 + 0x48) = psVar9;
    *psVar9 = (short)(iVar10 + 9) + (short)((iVar10 + 9) / 0x30) * -0x30 + sVar12;
    psVar9 = (short *)(*(longlong *)(param_1 + 0x48) + 2);
    *(short **)(param_1 + 0x48) = psVar9;
    *psVar9 = sVar4;
    psVar9 = (short *)(*(longlong *)(param_1 + 0x48) + 2);
    *(short **)(param_1 + 0x48) = psVar9;
    *psVar9 = sVar6 + sVar4 + 10;
    psVar9 = (short *)(*(longlong *)(param_1 + 0x48) + 2);
    *(short **)(param_1 + 0x48) = psVar9;
    *psVar9 = (short)(iVar10 + 10) + (short)((iVar10 + 10) / 0x30) * -0x30 + sVar12;
    psVar9 = (short *)(*(longlong *)(param_1 + 0x48) + 2);
    *(short **)(param_1 + 0x48) = psVar9;
    *psVar9 = sVar4;
    psVar9 = (short *)(*(longlong *)(param_1 + 0x48) + 2);
    *(short **)(param_1 + 0x48) = psVar9;
    *psVar9 = sVar6 + sVar4 + 0xb;
    psVar9 = (short *)(*(longlong *)(param_1 + 0x48) + 2);
    *(short **)(param_1 + 0x48) = psVar9;
    *psVar9 = (short)(iVar10 + 0xb) + (short)((iVar10 + 0xb) / 0x30) * -0x30 + sVar12;
    psVar9 = (short *)(*(longlong *)(param_1 + 0x48) + 2);
    *(short **)(param_1 + 0x48) = psVar9;
    *psVar9 = sVar4;
    psVar9 = (short *)(*(longlong *)(param_1 + 0x48) + 2);
    *(short **)(param_1 + 0x48) = psVar9;
    *psVar9 = sVar6 + sVar4 + 0xc;
    psVar9 = (short *)(*(longlong *)(param_1 + 0x48) + 2);
    *(short **)(param_1 + 0x48) = psVar9;
    *psVar9 = (short)(iVar10 + 0xc) + (short)((iVar10 + 0xc) / 0x30) * -0x30 + sVar12;
    psVar9 = (short *)(*(longlong *)(param_1 + 0x48) + 2);
    *(short **)(param_1 + 0x48) = psVar9;
    *psVar9 = sVar4;
    psVar9 = (short *)(*(longlong *)(param_1 + 0x48) + 2);
    *(short **)(param_1 + 0x48) = psVar9;
    *psVar9 = sVar6 + sVar4 + 0xd;
    psVar9 = (short *)(*(longlong *)(param_1 + 0x48) + 2);
    *(short **)(param_1 + 0x48) = psVar9;
    *psVar9 = (short)(iVar10 + 0xd) + (short)((iVar10 + 0xd) / 0x30) * -0x30 + sVar12;
    psVar9 = (short *)(*(longlong *)(param_1 + 0x48) + 2);
    *(short **)(param_1 + 0x48) = psVar9;
    *psVar9 = sVar4;
    psVar9 = (short *)(*(longlong *)(param_1 + 0x48) + 2);
    *(short **)(param_1 + 0x48) = psVar9;
    *psVar9 = sVar6 + sVar4 + 0xe;
    psVar9 = (short *)(*(longlong *)(param_1 + 0x48) + 2);
    *(short **)(param_1 + 0x48) = psVar9;
    *psVar9 = (short)(iVar10 + 0xe) + (short)((iVar10 + 0xe) / 0x30) * -0x30 + sVar12;
    psVar9 = (short *)(*(longlong *)(param_1 + 0x48) + 2);
    *(short **)(param_1 + 0x48) = psVar9;
    *psVar9 = sVar4;
    psVar9 = (short *)(*(longlong *)(param_1 + 0x48) + 2);
    *(short **)(param_1 + 0x48) = psVar9;
    *psVar9 = sVar6 + sVar4 + 0xf;
    psVar9 = (short *)(*(longlong *)(param_1 + 0x48) + 2);
    *(short **)(param_1 + 0x48) = psVar9;
    *psVar9 = (short)(iVar10 + 0xf) + (short)((iVar10 + 0xf) / 0x30) * -0x30 + sVar12;
    psVar9 = (short *)(*(longlong *)(param_1 + 0x48) + 2);
    *(short **)(param_1 + 0x48) = psVar9;
    *psVar9 = sVar4;
    iVar10 = iVar10 + 0x10;
    psVar9 = (short *)(*(longlong *)(param_1 + 0x48) + 2);
    *(short **)(param_1 + 0x48) = psVar9;
    *psVar9 = sVar6 + sVar4 + 0x10;
    psVar9 = (short *)(*(longlong *)(param_1 + 0x48) + 2);
    *(short **)(param_1 + 0x48) = psVar9;
    *psVar9 = (short)iVar10 + (short)(iVar10 / 0x30) * -0x30 + sVar12;
    *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 2;
  } while (iVar10 < 0x30);
  return;
}



/* ===== 1800d00e0 FUN_1800d00e0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800d00e0(longlong param_1,float param_2,undefined8 param_3,float param_4,int *param_5,
                  float param_6,undefined8 param_7)

{
  longlong lVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  size_t sVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *****ppppplVar8;
  longlong *****ppppplVar9;
  float *pfVar10;
  float *pfVar11;
  ulonglong uVar12;
  ulonglong *puVar13;
  ulonglong *puVar14;
  int iVar15;
  char *_Str;
  undefined1 *puVar16;
  uint uVar17;
  int iVar18;
  ulonglong uVar19;
  longlong lVar20;
  longlong *plVar21;
  ulonglong uVar22;
  float fVar23;
  float fVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  float fVar27;
  double dVar28;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar31;
  undefined1 in_XMM2 [16];
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined1 auStack_348 [8];
  undefined1 auStack_340 [72];
  undefined4 local_2f8;
  undefined4 local_2e0;
  float local_2dc;
  float local_2d8 [2];
  float local_2d0 [2];
  undefined8 local_2c8;
  undefined8 local_2c0;
  float local_2b8 [3];
  float local_2ac;
  float local_2a8 [8];
  undefined8 local_288;
  undefined8 local_280;
  float local_278;
  float local_274;
  float local_270;
  float local_26c;
  float local_268;
  float local_264;
  float local_260 [4];
  char local_250;
  undefined2 uStack_24f;
  undefined1 uStack_24d;
  float fStack_24c;
  undefined8 uStack_248;
  undefined8 local_240;
  float local_238;
  longlong local_230;
  float local_228;
  float local_224;
  undefined2 local_21f;
  undefined1 local_21d;
  longlong local_218;
  longlong local_210;
  longlong local_208;
  longlong *****local_200;
  longlong lStack_1f8;
  ulonglong local_1f0;
  ulonglong local_1e8;
  ulonglong local_1e0 [4];
  longlong *****local_1c0;
  undefined8 uStack_1b8;
  ulonglong local_1b0 [7];
  longlong ****local_178 [4];
  undefined1 local_158 [32];
  undefined1 local_138 [32];
  undefined1 local_118 [32];
  ulonglong local_f8;
  
  fVar31 = DAT_1808ac34c;
  puVar16 = auStack_348;
  local_f8 = DAT_180919500 ^ (ulonglong)auStack_348;
  local_278 = param_4;
  local_2b8[0] = in_XMM2._0_4_;
  uVar17 = 0;
  local_2f8 = 0;
  local_2dc = (float)param_5[1];
  if ((float)param_5[1] <= 0.0) goto LAB_1800d1188;
  local_230 = DAT_181107a38;
  if (DAT_181107a38 == 0) {
    local_230 = *(longlong *)(DAT_180ca0a50 + 0x11f0);
  }
  if (DAT_1808ac34c < param_6) {
    local_2d8[0] = 5.60519e-45;
    local_2d0[0] = 0.0;
    local_2d8[1] = (float)(int)((param_6 - DAT_1808ac34c) * DAT_1808ac710);
    pfVar11 = local_2d8 + 2;
    if (-1 < (int)local_2d8[1]) {
      pfVar11 = local_2d8 + 1;
    }
    pfVar10 = local_2d8;
    if ((int)local_2d8[1] < 5) {
      pfVar10 = pfVar11;
    }
    local_224 = (float)(int)*pfVar10 * DAT_1808ac658 + DAT_1808ac8b0;
  }
  else {
    local_224 = DAT_1808ac8b0;
  }
  fVar37 = local_224 * DAT_1808ac404;
  fVar23 = param_6 * DAT_1808ac9e4;
  if (*param_5 == 0x2b) {
    _Str = "flashbang";
  }
  else if (*param_5 == 0x2c) {
    _Str = "hegrenade";
  }
  else {
    _Str = "inferno";
  }
  local_1e0[0] = 0;
  local_1e0[1] = 0;
  local_1e0[2] = 0;
  local_1e0[3] = 0;
  local_2b8[2] = param_2;
  local_228 = fVar37;
  local_208 = param_1;
  sVar5 = strlen(_Str);
  FUN_1800133a0(local_1e0,_Str,sVar5);
  plVar6 = (longlong *)FUN_18039f3d0(local_1b0 + 2,local_1e0,(int)fVar23 * 2);
  lVar20 = *plVar6;
  local_2d8[1] = (float)plVar6[1];
  local_2d0[0] = *(float *)((longlong)plVar6 + 0xc);
  local_218 = lVar20;
  if (local_1e0[3] < 0x10) {
LAB_1800d030d:
    local_2d8[0] = (float)(int)fVar23;
    puVar16 = auStack_348;
    fVar23 = local_2d8[0];
    if (((lVar20 == 0) || (puVar16 = auStack_348, (int)local_2d8[1] < 1)) ||
       (puVar16 = auStack_348, (int)local_2d0[0] < 1)) goto LAB_1800d0352;
    local_2e0 = FUN_18053ef70(((float)(int)local_2d8[1] / (float)(int)local_2d0[0]) * local_2d8[0]);
    puVar16 = auStack_348;
  }
  else {
    uVar12 = local_1e0[3] + 1;
    uVar22 = local_1e0[0];
    if (uVar12 < 0x1000) {
LAB_1800d0300:
      thunk_FUN_1803d64e0(uVar22,uVar12);
      goto LAB_1800d030d;
    }
    uVar22 = *(ulonglong *)(local_1e0[0] - 8);
    if ((local_1e0[0] - uVar22) - 8 < 0x20) {
      uVar12 = local_1e0[3] + 0x28;
      goto LAB_1800d0300;
    }
    pcVar3 = (code *)swi(0x29);
    (*pcVar3)(5);
    fVar23 = in_XMM2._0_4_;
    puVar16 = auStack_340;
LAB_1800d0352:
    *(float *)(puVar16 + 0x68) = fVar23;
  }
  puVar16[0x54] = 1;
  local_260[0] = 0.0;
  local_260[1] = 0.0;
  local_260[2] = 0.0;
  local_260[3] = 0.0;
  _local_250 = 0;
  uStack_248 = 0;
  local_240 = 0;
  *(undefined8 *)(puVar16 + -8) = 0x1800d0387;
  FUN_1800d2370(local_138,2);
  *(undefined8 *)(puVar16 + -8) = 0x1800d0399;
  FUN_1800d2370(local_178,2);
  uVar22 = 0;
  local_2c0 = CONCAT44(local_2c0._4_4_,param_6 * DAT_1808ac7ac);
  fVar23 = 0.0;
  while( true ) {
    plVar21 = (longlong *)(param_5 + uVar22 * 0xe + 10);
    plVar6 = plVar21;
    if (0xf < *(ulonglong *)(param_5 + uVar22 * 0xe + 0x10)) {
      plVar6 = *(longlong **)(param_5 + uVar22 * 0xe + 10);
    }
    local_2c8 = plVar21;
    if (*(longlong *)(param_5 + uVar22 * 0xe + 0xe) == 0) {
      uVar12 = 0xffffffffffffffff;
    }
    else {
      lVar20 = *(longlong *)(param_5 + uVar22 * 0xe + 0xe) + (longlong)plVar6;
      *(undefined8 *)(puVar16 + -8) = 0x1800d03f4;
      lVar7 = thunk_FUN_1804e6c50(plVar6,lVar20,0x1f);
      uVar12 = 0xffffffffffffffff;
      if (lVar7 != lVar20) {
        uVar12 = lVar7 - (longlong)plVar6;
      }
    }
    if (uVar12 == 0xffffffffffffffff) {
      local_1b0[3] = 0;
      local_1b0[4] = 0;
      local_1b0[5] = 0xf;
      local_1b0[2] = 0;
      puVar13 = local_1b0 + 2;
      uVar17 = uVar17 | 1;
    }
    else {
      local_1e0[0] = 0;
      local_1e0[1] = 0;
      local_1e0[2] = 0;
      local_1e0[3] = 0;
      uVar19 = uVar12;
      if (*(ulonglong *)(param_5 + uVar22 * 0xe + 0xe) < uVar12) {
        uVar19 = *(ulonglong *)(param_5 + uVar22 * 0xe + 0xe);
      }
      plVar6 = plVar21;
      if (0xf < *(ulonglong *)(param_5 + uVar22 * 0xe + 0x10)) {
        plVar6 = *(longlong **)(param_5 + uVar22 * 0xe + 10);
      }
      *(undefined8 *)(puVar16 + -8) = 0x1800d0476;
      FUN_1800133a0(local_1e0,plVar6,uVar19);
      puVar13 = local_1e0;
      uVar17 = uVar17 | 0x22;
    }
    *(uint *)(puVar16 + 0x50) = uVar17;
    local_280 = uVar22 * 0x20;
    local_288 = local_138 + local_280;
    *(undefined8 *)(puVar16 + -8) = 0x1800d04a2;
    FUN_18002ba60(local_288,puVar13);
    if ((uVar17 & 2) != 0) {
      uVar17 = uVar17 & 0xfffffffd;
      *(uint *)(puVar16 + 0x50) = uVar17;
      *(undefined8 *)(puVar16 + -8) = 0x1800d04b8;
      FUN_18000f890();
    }
    if ((uVar17 & 1) != 0) {
      uVar17 = uVar17 & 0xfffffffe;
      *(uint *)(puVar16 + 0x50) = uVar17;
      *(undefined8 *)(puVar16 + -8) = 0x1800d04d2;
      FUN_18000f890();
    }
    uVar19 = *(ulonglong *)(param_5 + uVar22 * 0xe + 0xe);
    if (uVar12 == 0xffffffffffffffff) {
      local_200 = (longlong *****)0x0;
      lStack_1f8 = 0;
      local_1f0 = 0;
      local_1e8 = 0;
      if (0xf < *(ulonglong *)(param_5 + uVar22 * 0xe + 0x10)) {
        plVar21 = *(longlong **)(param_5 + uVar22 * 0xe + 10);
        local_2c8 = plVar21;
      }
      if (0x7fffffffffffffff < uVar19) {
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)(puVar16 + -8) = 0x1800d11ef;
        FUN_180011990();
      }
      if (uVar19 < 0x10) {
        local_1f0 = uVar19;
        local_1e8 = 0xf;
        ppppplVar8 = (longlong *****)*plVar21;
        lStack_1f8 = plVar21[1];
        local_200 = ppppplVar8;
      }
      else {
        uVar12 = uVar19 | 0xf;
        if (uVar12 < 0x8000000000000000) {
          if (uVar12 < 0x16) {
            uVar12 = 0x16;
          }
        }
        else {
          uVar12 = 0x7fffffffffffffff;
        }
        *(undefined8 *)(puVar16 + -8) = 0x1800d055f;
        ppppplVar8 = (longlong *****)FUN_18000fb70(uVar12 + 1);
        *(undefined8 *)(puVar16 + -8) = 0x1800d057e;
        local_200 = ppppplVar8;
        local_1f0 = uVar19;
        local_1e8 = uVar12;
        FUN_180540530(ppppplVar8,local_2c8,uVar19 + 1);
      }
      ppppplVar9 = (longlong *****)&local_200;
      uVar17 = uVar17 | 4;
      puVar13 = &local_1f0;
      puVar14 = &local_1e8;
    }
    else {
      uVar12 = uVar12 + 1;
      local_1c0 = (longlong *****)0x0;
      uStack_1b8 = 0;
      local_1b0[0] = 0;
      local_1b0[1] = 0;
      if (uVar19 < uVar12) {
                    /* WARNING: Subroutine does not return */
        *(undefined **)(puVar16 + -8) = &UNK_1800d11f5;
        FUN_18002a1a0();
      }
      lVar20 = -1;
      if (uVar19 - uVar12 != -1) {
        lVar20 = uVar19 - uVar12;
      }
      if (0xf < *(ulonglong *)(param_5 + uVar22 * 0xe + 0x10)) {
        plVar21 = *(longlong **)(param_5 + uVar22 * 0xe + 10);
      }
      *(undefined8 *)(puVar16 + -8) = 0x1800d05de;
      FUN_1800133a0(&local_1c0,(longlong)plVar21 + uVar12,lVar20);
      ppppplVar9 = (longlong *****)&local_1c0;
      uVar17 = uVar17 | 0x18;
      puVar13 = local_1b0;
      puVar14 = local_1b0 + 1;
      ppppplVar8 = local_1c0;
    }
    *(uint *)(puVar16 + 0x50) = uVar17;
    if ((longlong *****)((longlong)local_178 + local_280) != ppppplVar9) {
      if (*puVar14 < 0x10) {
        ppppplVar8 = ppppplVar9;
      }
      uVar12 = *puVar13;
      *(undefined8 *)(puVar16 + -8) = 0x1800d062a;
      FUN_180029840((longlong *****)((longlong)local_178 + local_280),ppppplVar8,uVar12);
    }
    if ((uVar17 & 8) != 0) {
      uVar17 = uVar17 & 0xfffffff7;
      *(uint *)(puVar16 + 0x50) = uVar17;
      *(undefined8 *)(puVar16 + -8) = 0x1800d0644;
      FUN_18000f890();
    }
    if ((uVar17 & 4) != 0) {
      uVar17 = uVar17 & 0xfffffffb;
      *(uint *)(puVar16 + 0x50) = uVar17;
      *(undefined8 *)(puVar16 + -8) = 0x1800d065b;
      FUN_18000f890();
    }
    if (((char)param_5[uVar22 * 0xe + 0x13] != '\0') || (0.0 < (float)param_5[uVar22 * 0xe + 0x12]))
    {
      *(undefined1 *)(local_260 + uVar22 * 5 + 4) = 1;
      fVar32 = (float)param_5[uVar22 * 0xe + 0x12];
      *(undefined8 *)(puVar16 + -8) = 0x1800d06ad;
      fVar36 = (float)FUN_1800cf320();
      local_270 = 1.0;
      local_2a8[6] = 0.0;
      local_268 = fVar32 + fVar32;
      pfVar11 = local_2a8 + 6;
      if (0.0 <= local_268) {
        pfVar11 = &local_268;
      }
      pfVar10 = &local_270;
      if (local_268 <= fVar31) {
        pfVar10 = pfVar11;
      }
      fVar24 = *pfVar10;
      if (puVar16[0x54] == '\0') {
        *(undefined8 *)(puVar16 + -8) = 0x1800d070f;
        fVar33 = (float)FUN_18053ef70();
        fVar33 = fVar33 * fVar32;
      }
      else {
        fVar33 = 0.0;
      }
      puVar16[0x54] = 0;
      local_260[uVar22 * 5] = fVar36;
      local_260[uVar22 * 5 + 1] = fVar32 * fVar37;
      local_260[uVar22 * 5 + 2] = fVar33;
      local_260[uVar22 * 5 + 3] = fVar32;
      *(undefined1 *)(local_260 + uVar22 * 5 + 4) = 1;
      *(undefined2 *)((longlong)local_260 + uVar22 * 0x14 + 0x11) = local_21f;
      *(undefined1 *)((longlong)local_260 + uVar22 * 0x14 + 0x13) = local_21d;
      fVar32 = fVar36 * fVar24;
      if (fVar36 * fVar24 <= fVar23) {
        fVar32 = fVar23;
      }
    }
    else {
      *(undefined1 *)(local_260 + uVar22 * 5 + 4) = 0;
      fVar32 = fVar23;
    }
    uVar22 = uVar22 + 1;
    if (1 < uVar22) break;
    fVar23 = fVar32;
  }
  *(undefined8 *)(puVar16 + -8) = 0x1800d0774;
  fVar23 = (float)FUN_18053ef70();
  local_2c8 = (longlong *)CONCAT44(local_2c8._4_4_,fVar23);
  *(undefined8 *)(puVar16 + -8) = 0x1800d0785;
  fVar24 = (float)FUN_18053ef70();
  fVar32 = param_6 * DAT_1808ac918;
  *(undefined8 *)(puVar16 + -8) = 0x1800d07a6;
  local_238 = fVar32;
  fVar23 = (float)FUN_18053ef70(fVar32 + fVar23);
  fVar37 = DAT_1808ac1f4;
  fVar36 = *(float *)(puVar16 + 0x70) * DAT_1808ac1f4;
  *(undefined8 *)(puVar16 + -8) = 0x1800d07e6;
  auVar29._0_8_ =
       FUN_18053ef70((local_2b8[0] - (fVar32 + *(float *)(puVar16 + 0x70) + fVar23) * DAT_1808ac1f4)
                     + fVar36);
  auVar29._8_8_ = extraout_XMM0_Qb;
  auVar30._4_12_ = auVar29._4_12_;
  auVar30._0_4_ = (float)auVar29._0_8_ - fVar36;
  *(undefined8 *)(puVar16 + -8) = 0x1800d07f4;
  uVar25 = FUN_18053ef70(auVar30._0_8_);
  *(undefined4 *)(puVar16 + 0x50) = uVar25;
  *(undefined8 *)(puVar16 + -8) = 0x1800d0816;
  uVar26 = FUN_18053ef70(local_2b8[2] - *(float *)(puVar16 + 0x68) * fVar37);
  *(undefined4 *)(puVar16 + 0x68) = uVar26;
  local_280 = CONCAT44(uVar25,uVar26);
  *(undefined8 *)(puVar16 + -8) = 0x1800d0834;
  fVar23 = (float)FUN_18053ef70();
  *(undefined8 *)(puVar16 + -8) = 0x1800d0849;
  local_2a8[6] = fVar23;
  local_268 = (float)FUN_18053ef70();
  local_288 = (undefined1 *)CONCAT44(fVar23,local_268);
  *(undefined8 *)(puVar16 + -8) = 0x1800d0872;
  uVar25 = FUN_18053ef70();
  *(undefined8 *)(puVar16 + -8) = 0x1800d088b;
  fVar23 = (float)FUN_18053ef70(param_6 * DAT_1808ac950 + fVar24);
  *(undefined8 *)(puVar16 + -8) = 0x1800d08a1;
  uVar26 = FUN_18053ef70(local_2b8[2] - fVar23 * fVar37);
  *(undefined4 *)(puVar16 + 0x58) = uVar26;
  *(undefined4 *)(puVar16 + 0x5c) = uVar25;
  *(undefined8 *)(puVar16 + -8) = 0x1800d08bb;
  uVar25 = FUN_18053ef70();
  fVar36 = local_2b8[2];
  *(undefined8 *)(puVar16 + -8) = 0x1800d08d1;
  uVar26 = FUN_18053ef70();
  *(undefined4 *)(puVar16 + 0x60) = uVar26;
  *(undefined4 *)(puVar16 + 100) = uVar25;
  local_270 = 1.0;
  local_2b8[0] = 0.0;
  *(undefined8 *)(puVar16 + -8) = 0x1800d0900;
  dVar28 = (double)FUN_18051f830(param_7,DAT_1808ac4a8);
  fVar32 = DAT_1808ac230;
  fVar23 = *(float *)(puVar16 + 0x6c);
  local_2c0 = CONCAT44(local_2c0._4_4_,
                       ((float)((uint)((float)dVar28 - DAT_1808ac140) & _DAT_1808ade90) *
                        DAT_1808ac710 * DAT_1808ac230 + DAT_1808ac188) * fVar23);
  *(undefined8 *)(puVar16 + -8) = 0x1800d0976;
  local_2b8[2] = fVar36;
  local_2ac = (float)auVar29._0_8_;
  uVar25 = FUN_1800cf880(param_5 + 5);
  lVar7 = local_208;
  *(undefined8 *)(puVar16 + -8) = 0x1800d099b;
  FUN_1800cf990(local_208,local_2b8 + 2,param_6 * DAT_1808ac924 + *(float *)(puVar16 + 0x70),uVar25)
  ;
  lVar20 = local_218;
  fVar36 = DAT_1808acb94;
  if (((local_218 != 0) && (0 < *(int *)(puVar16 + 0x74))) && (0 < *(int *)(puVar16 + 0x78))) {
    local_2b8[0] = 1.0;
    local_2b8[1] = 1.0;
    local_2c0 = 0;
    local_270 = local_268 + fVar31;
    local_26c = local_2a8[6] + fVar31;
    local_268 = *(float *)(puVar16 + 0x68) + fVar31;
    local_264 = *(float *)(puVar16 + 0x50) + fVar31;
    local_218 = 0;
    local_210 = lVar20;
    *(int *)(puVar16 + 0x30) = (int)(fVar23 * fVar32 * DAT_1808acb94 + fVar37) << 0x18;
    *(float **)(puVar16 + 0x28) = local_2b8;
    *(undefined8 **)(puVar16 + 0x20) = &local_2c0;
    *(undefined8 *)(puVar16 + -8) = 0x1800d0a66;
    FUN_1803fea90(lVar7,&local_218,&local_268,&local_270);
    local_2b8[0] = 1.0;
    local_2b8[1] = 1.0;
    local_2c0 = 0;
    uVar17 = (int)(fVar23 * fVar36 + fVar37) << 0x18;
    if (uVar17 != 0) {
      if ((lVar20 == *(longlong *)(lVar7 + 0x78)) && (*(longlong *)(lVar7 + 0x70) == 0)) {
        bVar4 = false;
      }
      else {
        iVar15 = *(int *)(lVar7 + 0xb4);
        if (*(int *)(lVar7 + 0xb0) == iVar15) {
          iVar18 = *(int *)(lVar7 + 0xb0) + 1;
          if (iVar15 == 0) {
            iVar15 = 8;
          }
          else {
            iVar15 = iVar15 / 2 + iVar15;
          }
          if (iVar18 < iVar15) {
            iVar18 = iVar15;
          }
          *(undefined8 *)(puVar16 + -8) = 0x1800d0aef;
          FUN_1803f7030(lVar7 + 0xb0,iVar18);
        }
        iVar15 = *(int *)(lVar7 + 0xb0);
        lVar1 = *(longlong *)(lVar7 + 0xb8);
        *(undefined8 *)(lVar1 + (longlong)iVar15 * 0x10) = 0;
        *(longlong *)(lVar1 + 8 + (longlong)iVar15 * 0x10) = lVar20;
        *(int *)(lVar7 + 0xb0) = *(int *)(lVar7 + 0xb0) + 1;
        *(undefined8 *)(lVar7 + 0x70) = 0;
        *(longlong *)(lVar7 + 0x78) = lVar20;
        *(undefined8 *)(puVar16 + -8) = 0x1800d0b1f;
        FUN_1803fc0a0(lVar7);
        bVar4 = true;
      }
      *(undefined8 *)(puVar16 + -8) = 0x1800d0b35;
      FUN_1803fc3a0(lVar7,6,4);
      *(uint *)(puVar16 + 0x28) = uVar17 | 0xffffff;
      *(float **)(puVar16 + 0x20) = local_2b8;
      *(undefined8 *)(puVar16 + -8) = 0x1800d0b56;
      FUN_1803fc4a0(lVar7,&local_280,&local_288,&local_2c0);
      if (bVar4) {
        *(undefined8 *)(puVar16 + -8) = 0x1800d0b63;
        FUN_1803fc340(lVar7);
      }
    }
  }
  fVar32 = DAT_1808ac8e4;
  *(float *)(puVar16 + 0x40) = DAT_1808ac8e4;
  *(int *)(puVar16 + 0x38) = (int)(fVar23 * fVar37 * fVar36 + fVar37) << 0x18;
  *(undefined4 *)(puVar16 + 0x30) = 0;
  *(float *)(puVar16 + 0x28) = fVar23 * DAT_1808ac294;
  *(float *)(puVar16 + 0x20) = param_6;
  *(undefined8 *)(puVar16 + -8) = 0x1800d0bef;
  FUN_1800be550(lVar7,puVar16 + 0x58,puVar16 + 0x60);
  iVar15 = (int)(*(float *)(puVar16 + 0x6c) * DAT_1808ac154 * fVar36 + fVar37) << 0x18;
  *(int *)(puVar16 + 0x28) = iVar15;
  *(float *)(puVar16 + 0x20) = param_6 * fVar32;
  *(undefined8 *)(puVar16 + -8) = 0x1800d0c35;
  FUN_1800be3c0(lVar7,puVar16 + 0x58,puVar16 + 0x60);
  *(int *)(puVar16 + 0x28) = iVar15;
  *(float *)(puVar16 + 0x20) = param_6 * fVar32;
  *(undefined8 *)(puVar16 + -8) = 0x1800d0c55;
  FUN_1800be3c0(lVar7,puVar16 + 0x58,puVar16 + 0x60);
  fVar32 = DAT_1808acd64;
  if (local_250 == '\0') {
    fVar33 = *(float *)(puVar16 + 0x58);
  }
  else {
    if ((char)param_5[0x13] == '\0') {
      fVar33 = DAT_1808acd84;
    }
    else {
      fVar33 = DAT_1808acd64;
    }
    local_2a8[5] = 1.0;
    local_2a8[3] = 0.0;
    local_2a8[2] = 1.0;
    local_2a8[0] = 0.0;
    local_2a8[1] = local_260[3] + fVar33 + local_260[3] + fVar33;
    pfVar11 = local_2a8;
    if (0.0 <= local_2a8[1]) {
      pfVar11 = local_2a8 + 1;
    }
    pfVar10 = local_2a8 + 2;
    if (local_2a8[1] <= fVar31) {
      pfVar10 = pfVar11;
    }
    local_2a8[4] = *(float *)(puVar16 + 0x6c) * *pfVar10;
    pfVar11 = local_2a8 + 3;
    if (0.0 <= local_2a8[4]) {
      pfVar11 = local_2a8 + 4;
    }
    pfVar10 = local_2a8 + 5;
    if (local_2a8[4] <= fVar31) {
      pfVar10 = pfVar11;
    }
    fVar27 = *pfVar10;
    fVar33 = *(float *)(puVar16 + 0x58);
    *(undefined8 *)(puVar16 + -8) = 0x1800d0d5b;
    uVar25 = FUN_18053ef70(((*(float *)(puVar16 + 0x60) - fVar33) - fVar24) * fVar37 + fVar33 +
                           (fVar24 - local_260[0]) * fVar37);
    local_2c8 = (longlong *)CONCAT44(local_2c8._4_4_,uVar25);
    if (0.0 < fVar27) {
      *(undefined8 *)(puVar16 + -8) = 0x1800d0d72;
      uVar25 = FUN_1800cf880(param_5 + 0x14);
      *(undefined8 *)(puVar16 + -8) = 0x1800d0d7d;
      uVar26 = FUN_18053ef70();
      *(undefined4 *)(puVar16 + 0x30) = uVar25;
      *(longlong **)(puVar16 + 0x28) = &local_230;
      *(undefined4 *)(puVar16 + 0x20) = uVar26;
      *(undefined8 *)(puVar16 + -8) = 0x1800d0dab;
      FUN_1800cf550(lVar7,local_138,local_178);
      fVar33 = *(float *)(puVar16 + 0x58);
    }
  }
  if (local_240._4_1_ != '\0') {
    if ((char)param_5[0x21] == '\0') {
      fVar32 = DAT_1808acd84;
    }
    local_2a8[5] = 1.0;
    local_2a8[3] = 0.0;
    local_2a8[2] = 1.0;
    local_2a8[0] = 0.0;
    local_2a8[1] = (float)local_240 + fVar32 + (float)local_240 + fVar32;
    pfVar11 = local_2a8;
    if (0.0 <= local_2a8[1]) {
      pfVar11 = local_2a8 + 1;
    }
    pfVar10 = local_2a8 + 2;
    if (local_2a8[1] <= fVar31) {
      pfVar10 = pfVar11;
    }
    local_2a8[4] = *(float *)(puVar16 + 0x6c) * *pfVar10;
    pfVar11 = local_2a8 + 3;
    if (0.0 <= local_2a8[4]) {
      pfVar11 = local_2a8 + 4;
    }
    pfVar10 = local_2a8 + 5;
    if (local_2a8[4] <= fVar31) {
      pfVar10 = pfVar11;
    }
    fVar31 = *pfVar10;
    *(undefined8 *)(puVar16 + -8) = 0x1800d0e8a;
    FUN_18053ef70(((*(float *)(puVar16 + 0x60) - fVar33) - fVar24) * fVar37 + fVar33 +
                  (fVar24 - fStack_24c) * fVar37);
    if (0.0 < fVar31) {
      *(undefined8 *)(puVar16 + -8) = 0x1800d0ead;
      uVar25 = FUN_1800cf880(param_5 + 0x22);
      *(undefined8 *)(puVar16 + -8) = 0x1800d0eb7;
      uVar26 = FUN_18053ef70();
      *(undefined4 *)(puVar16 + 0x30) = uVar25;
      *(longlong **)(puVar16 + 0x28) = &local_230;
      *(undefined4 *)(puVar16 + 0x20) = uVar26;
      *(undefined8 *)(puVar16 + -8) = 0x1800d0ee4;
      FUN_1800cf550(lVar7,local_118,local_158);
      fVar33 = *(float *)(puVar16 + 0x58);
    }
  }
  if (local_278 != 0.0) {
    fVar31 = *(float *)(puVar16 + 0x60);
    fVar32 = *(float *)(puVar16 + 100);
    *(undefined8 *)(puVar16 + -8) = 0x1800d0f12;
    fVar24 = (float)FUN_180517790();
    *(undefined8 *)(puVar16 + -8) = 0x1800d0f1f;
    fVar27 = (float)FUN_180517200();
    if (fVar27 == 0.0) {
      fVar34 = DAT_1808acd08;
    }
    else {
      fVar34 = ((fVar31 - fVar33) * fVar37) / (float)((uint)fVar27 & _DAT_1808ade90);
    }
    if (fVar24 == 0.0) {
      fVar39 = *(float *)(puVar16 + 0x50);
      fVar38 = DAT_1808acd08;
    }
    else {
      fVar39 = *(float *)(puVar16 + 0x50);
      fVar38 = ((fVar32 - fVar39) * fVar37) / (float)((uint)fVar24 & _DAT_1808ade90);
    }
    if (fVar34 <= fVar38) {
      fVar38 = fVar34;
    }
    if (0.0 <= fVar38) {
      fVar35 = param_6 * DAT_1808ac7ec;
      fVar38 = param_6 * DAT_1808ac964 + fVar38;
      fVar34 = fVar38 * fVar24 + (fVar32 + fVar39) * fVar37;
      fVar39 = fVar38 * fVar27 + (fVar31 + fVar33) * fVar37;
      uVar17 = (int)(fVar23 * fVar36 + fVar37) << 0x18;
      fVar23 = (fVar39 - fVar35) - fVar39;
      fVar31 = (fVar34 + fVar35) - fVar34;
      fVar36 = fVar24 * fVar23 + fVar34;
      fVar33 = fVar23 * fVar27 + fVar39;
      local_2c8 = (longlong *)CONCAT44(fVar36 + fVar31 * fVar27,fVar33 - fVar24 * fVar31);
      fVar31 = (fVar39 + fVar35) - fVar39;
      fVar32 = (fVar34 - fVar34) * fVar27;
      fVar23 = fVar24 * (fVar34 - fVar34);
      local_278 = (fVar31 * fVar27 + fVar39) - fVar23;
      local_274 = fVar24 * fVar31 + fVar34 + fVar32;
      fVar31 = (fVar34 - fVar35) - fVar34;
      local_288 = (undefined1 *)CONCAT44(fVar36 + fVar31 * fVar27,fVar33 - fVar24 * fVar31);
      fVar31 = (fVar39 - fVar35 * fVar37) - fVar39;
      local_280 = CONCAT44(fVar24 * fVar31 + fVar34 + fVar32,(fVar31 * fVar27 + fVar39) - fVar23);
      if (uVar17 != 0) {
        *(undefined8 *)(puVar16 + -8) = 0x1800d1106;
        FUN_18000b9c0(lVar7 + 0x50,&local_280);
        *(undefined8 *)(puVar16 + -8) = 0x1800d1113;
        FUN_18000b9c0(lVar7 + 0x50,&local_288);
        *(undefined8 *)(puVar16 + -8) = 0x1800d1120;
        FUN_18000b9c0(lVar7 + 0x50,&local_278);
        *(undefined8 *)(puVar16 + -8) = 0x1800d112d;
        FUN_18000b9c0(lVar7 + 0x50,&local_2c8);
        uVar25 = *(undefined4 *)(lVar7 + 0x50);
        uVar2 = *(undefined8 *)(lVar7 + 0x58);
        *(undefined8 *)(puVar16 + -8) = 0x1800d1146;
        FUN_1803fd460(lVar7,uVar2,uVar25,uVar17 | 0xffffff);
        *(undefined4 *)(lVar7 + 0x50) = 0;
      }
    }
  }
  *(undefined8 *)(puVar16 + -8) = 0x1800d1168;
  FUN_1804eced0(local_178,0x20,2,thunk_FUN_18000f890);
  *(undefined8 *)(puVar16 + -8) = 0x1800d1187;
  FUN_1804eced0(local_138,0x20,2,thunk_FUN_18000f890);
LAB_1800d1188:
  *(undefined8 *)(puVar16 + -8) = 0x1800d1197;
  return;
}



/* ===== 1800d1200 FUN_1800d1200 ===== */

void FUN_1800d1200(undefined8 param_1)

{
  FUN_1804eced0(param_1,0x20,2,thunk_FUN_18000f890);
  return;
}



/* ===== 1800d1230 FUN_1800d1230 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_1800d1230(float *param_1,float param_2,float param_3,undefined4 *param_4,undefined4 *param_5,
             float *param_6)

{
  char cVar1;
  float *pfVar2;
  longlong lVar3;
  undefined *puVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_res10 [2];
  float local_res18 [4];
  undefined8 local_98;
  
  fVar7 = DAT_1808ac1f4;
  fVar11 = param_2 * DAT_1808ac1f4;
  local_98 = 0;
  fVar12 = param_3 * DAT_1808ac1f4;
  puVar4 = &DAT_181107930;
  cVar1 = FUN_1803a1bf0(&DAT_181107930 + (longlong)DAT_181107a00 * 0x40,param_1,&local_98,param_2,
                        param_3);
  if (cVar1 == '\0') {
    lVar3 = (longlong)DAT_181107a00 * 0x40;
    fVar10 = (param_1[1] * *(float *)(puVar4 + lVar3 + 4) + *param_1 * *(float *)(puVar4 + lVar3) +
              param_1[2] * *(float *)(puVar4 + lVar3 + 8) + *(float *)(puVar4 + lVar3 + 0xc)) *
             fVar11;
    fVar5 = (param_1[1] * *(float *)(puVar4 + lVar3 + 0x14) +
             *param_1 * *(float *)(puVar4 + lVar3 + 0x10) +
             param_1[2] * *(float *)(puVar4 + lVar3 + 0x18) + *(float *)(puVar4 + lVar3 + 0x1c)) *
            (float)((uint)param_3 ^ DAT_1808adec0) * fVar7;
    fVar8 = fVar5 * fVar5 + fVar10 * fVar10;
    if (fVar8 < 0.0) {
      fVar8 = (float)FUN_18051af10(fVar8);
    }
    else {
      fVar8 = SQRT(fVar8);
    }
    if (fVar8 < DAT_1808abfa0) {
      return 0;
    }
    fVar9 = param_3;
    if (param_3 <= param_2) {
      fVar9 = param_2;
    }
    fVar10 = (fVar10 / fVar8) * fVar9 + fVar11;
    fVar8 = (fVar5 / fVar8) * fVar9 + fVar12;
  }
  else {
    fVar10 = (float)local_98;
    fVar8 = local_98._4_4_;
  }
  fVar5 = fVar12;
  if (fVar11 <= fVar12) {
    fVar5 = fVar11;
  }
  *param_6 = 0.0;
  fVar5 = fVar5 * fVar7;
  if ((((fVar10 < fVar5) || (param_2 - fVar5 < fVar10)) || (fVar8 < fVar5)) ||
     (param_3 - fVar5 < fVar8)) {
    fVar9 = fVar10 - fVar11;
    fVar7 = fVar8 - fVar12;
    if ((float)((uint)fVar9 & _DAT_1808ade90) <= DAT_1808abf8c) {
      local_res18[0] = DAT_1808acd08;
    }
    else {
      local_res18[0] = (fVar11 - fVar5) / (float)((uint)fVar9 & _DAT_1808ade90);
    }
    local_res10[0] = DAT_1808acd08;
    if (DAT_1808abf8c < (float)((uint)fVar7 & _DAT_1808ade90)) {
      local_res10[0] = (fVar12 - fVar5) / (float)((uint)fVar7 & _DAT_1808ade90);
    }
    pfVar2 = local_res10;
    if (local_res18[0] <= local_res10[0]) {
      pfVar2 = local_res18;
    }
    fVar5 = DAT_1808ac34c;
    if (*pfVar2 <= DAT_1808ac34c) {
      fVar5 = *pfVar2;
    }
    fVar8 = fVar5 * fVar7 + fVar12;
    fVar10 = fVar5 * fVar9 + fVar11;
    fVar7 = (float)FUN_180516b00(fVar7,fVar9);
    *param_6 = fVar7;
    if (fVar7 == 0.0) {
      *param_6 = 1e-06;
    }
  }
  uVar6 = FUN_18053fc00(fVar10);
  *param_4 = uVar6;
  uVar6 = FUN_18053fc00(fVar8);
  *param_5 = uVar6;
  return 1;
}



/* ===== 1800d1530 FUN_1800d1530 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800d1530(undefined8 *param_1,char param_2)

{
  byte *pbVar1;
  ulonglong uVar2;
  longlong *plVar3;
  double dVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  float *pfVar14;
  undefined8 uVar15;
  float *pfVar16;
  float *pfVar17;
  ulonglong uVar18;
  byte *pbVar19;
  longlong *plVar20;
  byte *pbVar21;
  longlong lVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auStack_3f8 [32];
  longlong local_3d8;
  undefined1 *local_3d0;
  undefined8 local_3c8;
  undefined1 local_3b8 [8];
  ulonglong local_3b0;
  float local_3a8 [2];
  undefined8 local_3a0;
  longlong lStack_398;
  longlong local_390;
  undefined8 local_388;
  undefined8 local_380;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined4 local_368;
  undefined8 local_360 [4];
  undefined8 local_340;
  undefined8 uStack_338;
  undefined8 local_330;
  undefined8 uStack_328;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  int local_2e8;
  undefined1 local_2e4;
  undefined8 local_2e0;
  undefined4 local_2d8;
  undefined4 local_2d4;
  undefined8 local_2d0;
  undefined1 local_2c8;
  undefined4 local_2c7;
  undefined2 local_2c3;
  undefined1 local_2c1;
  undefined4 local_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined1 local_280;
  undefined4 local_27f;
  undefined2 local_27b;
  undefined1 local_279;
  undefined1 local_278;
  undefined8 local_274;
  undefined8 local_26c;
  longlong local_260 [4];
  longlong local_240 [4];
  undefined1 local_220;
  undefined8 local_21c;
  undefined8 uStack_214;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  longlong local_1a8 [4];
  longlong local_188 [4];
  undefined1 local_168;
  undefined8 local_164;
  undefined8 uStack_15c;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  float local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined1 local_f0;
  undefined1 local_e8 [32];
  undefined1 local_c8 [32];
  ulonglong local_a8;
  
  local_a8 = DAT_180919500 ^ (ulonglong)auStack_3f8;
  local_3a8[0] = 0.0;
  plVar11 = (longlong *)FUN_1800ad890(&local_3b0);
  plVar12 = DAT_180cd0d88;
  dVar4 = (double)*plVar11 / DAT_1808ac9a0;
  if (DAT_180cd0dc0 <= 0.0) {
    fVar26 = 0.0;
  }
  else {
    fVar26 = (float)(dVar4 - DAT_180cd0dc0);
  }
  plVar11 = (longlong *)*DAT_180cd0d88;
  DAT_180cd0dc0 = dVar4;
  if (plVar11 != DAT_180cd0d88) {
    do {
      *(undefined1 *)(plVar11 + 0x42) = 0;
      plVar11 = (longlong *)*plVar11;
    } while (plVar11 != plVar12);
  }
  fVar9 = DAT_1808accb4;
  fVar8 = DAT_1808ac34c;
  pbVar21 = (byte *)*param_1;
  pbVar1 = (byte *)param_1[1];
  plVar12 = DAT_180cd0d88;
  do {
    DAT_180cd0d88 = plVar12;
    if (pbVar21 == pbVar1) {
      plVar11 = (longlong *)*plVar12;
      if (plVar11 != plVar12) {
        do {
          if ((char)plVar11[0x42] == '\0') {
            FUN_1800ce840(plVar11 + 3,0,SUB84(dVar4,0),fVar26);
            plVar12 = DAT_180cd0d88;
          }
          lVar22 = DAT_180cd0d98;
          if ((*(char *)((longlong)plVar11 + 0x1c) != '\0') || (0.0 < *(float *)(plVar11 + 4))) {
            plVar20 = (longlong *)*plVar11;
          }
          else {
            uVar18 = (((((((((ulonglong)*(byte *)(plVar11 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3
                           ^ (ulonglong)*(byte *)((longlong)plVar11 + 0x11)) * 0x100000001b3 ^
                          (ulonglong)*(byte *)((longlong)plVar11 + 0x12)) * 0x100000001b3 ^
                         (ulonglong)*(byte *)((longlong)plVar11 + 0x13)) * 0x100000001b3 ^
                        (ulonglong)*(byte *)((longlong)plVar11 + 0x14)) * 0x100000001b3 ^
                       (ulonglong)*(byte *)((longlong)plVar11 + 0x15)) * 0x100000001b3 ^
                      (ulonglong)*(byte *)((longlong)plVar11 + 0x16)) * 0x100000001b3 ^
                     (ulonglong)*(byte *)((longlong)plVar11 + 0x17)) * 0x100000001b3 & DAT_180cd0db0
            ;
            plVar20 = *(longlong **)(DAT_180cd0d98 + uVar18 * 0x10);
            if (*(longlong **)(DAT_180cd0d98 + 8 + uVar18 * 0x10) == plVar11) {
              if (plVar20 == plVar11) {
                *(longlong **)(DAT_180cd0d98 + uVar18 * 0x10) = plVar12;
                *(longlong **)(lVar22 + 8 + uVar18 * 0x10) = plVar12;
              }
              else {
                *(longlong *)(DAT_180cd0d98 + 8 + uVar18 * 0x10) = plVar11[1];
              }
            }
            else if (plVar20 == plVar11) {
              *(longlong *)(DAT_180cd0d98 + uVar18 * 0x10) = *plVar11;
            }
            plVar20 = (longlong *)*plVar11;
            DAT_180cd0d90 = DAT_180cd0d90 + -1;
            *(longlong **)plVar11[1] = plVar20;
            plVar20[1] = plVar11[1];
            FUN_1804eced0(plVar11 + 0x14,0xb8,2,FUN_1800cf270);
            thunk_FUN_1803d64e0(plVar11);
            plVar12 = DAT_180cd0d88;
          }
          plVar11 = plVar20;
        } while (plVar20 != plVar12);
      }
      local_3a0 = 0;
      lStack_398 = 0;
      local_390 = 0;
      for (plVar11 = (longlong *)*plVar12; plVar11 != plVar12; plVar11 = (longlong *)*plVar11) {
        pfVar17 = (float *)(plVar11 + 4);
        if ((0.0 < *pfVar17) && ((char)plVar11[0x11] != '\0')) {
          local_388 = 0;
          local_380 = 0;
          local_378 = 0;
          uStack_370 = 0;
          local_368 = 0;
          local_360[0] = 0;
          local_360[1] = 0;
          local_360[2] = 0;
          local_360[3] = 0;
          local_340 = 0;
          uStack_338 = 0;
          local_330 = 0;
          uStack_328 = 0;
          local_320 = 0;
          uStack_318 = 0;
          local_310 = 0;
          uStack_308 = 0;
          local_300 = 0;
          uStack_2f8 = 0;
          FUN_1800d2320(local_360);
          local_388 = CONCAT44(local_388._4_4_,(int)plVar11[3]);
          local_3b0 = CONCAT44(local_3b0._4_4_,0x3f800000);
          local_3a8[0] = 0.0;
          pfVar16 = local_3a8;
          if (0.0 <= *pfVar17) {
            pfVar16 = pfVar17;
          }
          pfVar14 = (float *)&local_3b0;
          if (*pfVar17 <= fVar8) {
            pfVar14 = pfVar16;
          }
          local_388 = CONCAT44(*pfVar14,(int)plVar11[3]);
          local_380 = *(undefined8 *)((longlong)plVar11 + 0x8c);
          uStack_370 = *(undefined8 *)((longlong)plVar11 + 0x4c);
          local_368 = *(undefined4 *)((longlong)plVar11 + 0x54);
          local_378 = CONCAT44((int)plVar11[9],*(undefined4 *)((longlong)plVar11 + 0x94));
          uVar18 = 0;
          do {
            local_3b8[0] = 0x1f;
            if (plVar11[uVar18 * 0x17 + 0x16] == 0x7fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
              FUN_180011990();
            }
            local_3c8 = 1;
            local_3d0 = local_3b8;
            local_3d8 = plVar11[uVar18 * 0x17 + 0x16];
            FUN_180069380(local_e8);
            lVar22 = uVar18 * 0x38;
            uVar15 = FUN_1800667a0(local_c8,local_e8,plVar11 + uVar18 * 0x17 + 0x18);
            FUN_18002ba60(local_360 + uVar18 * 7,uVar15);
            FUN_18000f890(local_c8);
            FUN_18000f890(local_e8);
            local_3a8[0] = 1.0;
            local_3b0 = local_3b0 & 0xffffffff00000000;
            pfVar17 = (float *)&local_3b0;
            if (0.0 <= *(float *)(plVar11 + uVar18 * 0x17 + 0x1f)) {
              pfVar17 = (float *)(plVar11 + uVar18 * 0x17 + 0x1f);
            }
            pfVar16 = local_3a8;
            if (*(float *)(plVar11 + uVar18 * 0x17 + 0x1f) <= fVar8) {
              pfVar16 = pfVar17;
            }
            *(float *)(&local_340 + uVar18 * 7) = *pfVar16;
            *(char *)((longlong)&local_340 + lVar22 + 4) = (char)plVar11[uVar18 * 0x17 + 0x1c];
            plVar20 = plVar11 + uVar18 * 0x17 + 0x23;
            uVar5 = *(undefined4 *)((longlong)plVar20 + 4);
            lVar7 = plVar20[1];
            uVar6 = *(undefined4 *)((longlong)plVar20 + 0xc);
            *(int *)(&uStack_338 + uVar18 * 7) = (int)*plVar20;
            *(undefined4 *)((longlong)&uStack_338 + lVar22 + 4) = uVar5;
            *(int *)(&local_330 + uVar18 * 7) = (int)lVar7;
            *(undefined4 *)((longlong)&local_330 + lVar22 + 4) = uVar6;
            uVar18 = uVar18 + 1;
          } while (uVar18 < 2);
          if (lStack_398 == local_390) {
            FUN_1800d3380(&local_3a0,lStack_398,&local_388);
          }
          else {
            FUN_1800d2210(lStack_398,&local_388);
            lStack_398 = lStack_398 + 0x98;
          }
          FUN_1804eced0(local_360,0x38,2,thunk_FUN_18000f890);
        }
      }
      iVar10 = FUN_1804e4d70(&DAT_1809ebb20);
      if (iVar10 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1804e4a90(5);
      }
      if (DAT_1809ebb6c == 0x7fffffff) {
        DAT_1809ebb6c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
        FUN_1804e4a90(6);
      }
      FUN_1800d2dc0(&DAT_180cd0dc8);
      DAT_180cd0dc8 = local_3a0;
      DAT_180cd0dd0 = lStack_398;
      _DAT_180cd0dd8 = local_390;
      local_3a0 = 0;
      lStack_398 = 0;
      local_390 = 0;
      FUN_1804e4e90(&DAT_1809ebb20);
      FUN_1800d2dc0(&local_3a0);
      return;
    }
    uVar18 = (((((((((ulonglong)*pbVar21 ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                   (ulonglong)pbVar21[1]) * 0x100000001b3 ^ (ulonglong)pbVar21[2]) * 0x100000001b3 ^
                 (ulonglong)pbVar21[3]) * 0x100000001b3 ^ (ulonglong)pbVar21[4]) * 0x100000001b3 ^
               (ulonglong)pbVar21[5]) * 0x100000001b3 ^ (ulonglong)pbVar21[6]) * 0x100000001b3 ^
             (ulonglong)pbVar21[7]) * 0x100000001b3 & DAT_180cd0db0;
    plVar11 = *(longlong **)(DAT_180cd0d98 + 8 + uVar18 * 0x10);
    if (plVar11 == plVar12) {
LAB_1800d16d6:
      plVar11 = (longlong *)0x0;
    }
    else {
      lVar22 = plVar11[2];
      while (*(longlong *)pbVar21 != lVar22) {
        if (plVar11 == *(longlong **)(DAT_180cd0d98 + uVar18 * 0x10)) goto LAB_1800d16d6;
        plVar11 = (longlong *)plVar11[1];
        lVar22 = plVar11[2];
      }
    }
    plVar20 = plVar12;
    if (plVar11 != (longlong *)0x0) {
      plVar20 = plVar11;
    }
    if (plVar20 == plVar12) {
      local_2e8 = 0;
      local_2e4 = 0;
      local_2e0 = 0;
      local_2d8 = 0;
      local_2d0 = 0;
      local_2c8 = 0;
      local_2c0 = 0x3f800000;
      local_2b8 = 0;
      uStack_2b0 = 0;
      local_2a8 = 0;
      uStack_2a0 = 0;
      local_298 = 0;
      uStack_290 = 0;
      local_288 = 0;
      local_280 = 0;
      local_278 = 0;
      local_274 = 0;
      local_26c = 0;
      FUN_180540170(local_260,0,0x170);
      fVar23 = (float)FUN_1800d22d0(local_260);
      local_f0 = 0;
      local_2e8 = *(int *)(pbVar21 + 8);
      if (local_2e8 == 0x231) {
        uVar18 = 0;
        local_3b0 = 0;
        plVar12 = (longlong *)*DAT_180cd0d88;
        fVar25 = fVar9;
        if (plVar12 != DAT_180cd0d88) {
          do {
            if (((int)plVar12[3] - 0x2eU & 0xfffffffd) == 0) {
              if ((char)plVar12[0x11] != '\0') {
                fVar24 = *(float *)((longlong)plVar12 + 0x8c) - *(float *)(pbVar21 + 0x10);
                fVar23 = *(float *)((longlong)plVar12 + 0x94) - *(float *)(pbVar21 + 0x18);
                fVar23 = fVar23 * fVar23;
                fVar24 = (*(float *)(plVar12 + 0x12) - *(float *)(pbVar21 + 0x14)) *
                         (*(float *)(plVar12 + 0x12) - *(float *)(pbVar21 + 0x14)) + fVar24 * fVar24
                         + fVar23;
                if (fVar24 < fVar25) {
                  uVar18 = plVar12[2];
                  fVar25 = fVar24;
                  local_3b0 = uVar18;
                }
              }
            }
            plVar12 = (longlong *)*plVar12;
          } while (plVar12 != DAT_180cd0d88);
          if (uVar18 != 0) {
            plVar12 = (longlong *)FUN_1800d2a50(DAT_180cd0d88,local_c8,&local_3b0);
            lVar22 = *plVar12;
            local_2e8 = *(int *)(lVar22 + 0x18);
            local_2e4 = *(undefined1 *)(lVar22 + 0x1c);
            local_2e0 = *(undefined8 *)(lVar22 + 0x20);
            local_2d8 = *(undefined4 *)(lVar22 + 0x28);
            local_2d4 = *(undefined4 *)(lVar22 + 0x2c);
            local_2d0 = *(undefined8 *)(lVar22 + 0x30);
            local_2c8 = *(undefined1 *)(lVar22 + 0x38);
            local_2c7 = *(undefined4 *)(lVar22 + 0x39);
            local_2c3 = *(undefined2 *)(lVar22 + 0x3d);
            local_2c1 = *(undefined1 *)(lVar22 + 0x3f);
            local_2c0 = *(undefined4 *)(lVar22 + 0x40);
            local_2b8 = *(undefined8 *)(lVar22 + 0x48);
            uStack_2b0 = *(undefined8 *)(lVar22 + 0x50);
            local_2a8 = *(undefined8 *)(lVar22 + 0x58);
            uStack_2a0 = *(undefined8 *)(lVar22 + 0x60);
            local_298 = *(undefined8 *)(lVar22 + 0x68);
            uStack_290 = *(undefined8 *)(lVar22 + 0x70);
            local_288 = *(undefined8 *)(lVar22 + 0x78);
            local_280 = *(undefined1 *)(lVar22 + 0x80);
            local_27f = *(undefined4 *)(lVar22 + 0x81);
            local_27b = *(undefined2 *)(lVar22 + 0x85);
            local_279 = *(undefined1 *)(lVar22 + 0x87);
            local_278 = *(undefined1 *)(lVar22 + 0x88);
            local_274 = *(undefined8 *)(lVar22 + 0x8c);
            local_26c = *(undefined8 *)(lVar22 + 0x94);
            plVar12 = (longlong *)(lVar22 + 0xa0);
            if (local_260 != plVar12) {
              if (0xf < *(ulonglong *)(lVar22 + 0xb8)) {
                plVar12 = (longlong *)*plVar12;
              }
              FUN_180029840(local_260,plVar12,*(undefined8 *)(lVar22 + 0xb0));
            }
            plVar12 = (longlong *)(lVar22 + 0xc0);
            if (local_240 != plVar12) {
              if (0xf < *(ulonglong *)(lVar22 + 0xd8)) {
                plVar12 = (longlong *)*plVar12;
              }
              FUN_180029840(local_240,plVar12,*(undefined8 *)(lVar22 + 0xd0));
            }
            local_220 = *(undefined1 *)(lVar22 + 0xe0);
            local_21c = *(undefined8 *)(lVar22 + 0xe4);
            uStack_214 = *(undefined8 *)(lVar22 + 0xec);
            local_208 = *(undefined8 *)(lVar22 + 0xf8);
            uStack_200 = *(undefined8 *)(lVar22 + 0x100);
            local_1f8 = *(undefined8 *)(lVar22 + 0x108);
            uStack_1f0 = *(undefined8 *)(lVar22 + 0x110);
            local_1e8 = *(undefined8 *)(lVar22 + 0x118);
            uStack_1e0 = *(undefined8 *)(lVar22 + 0x120);
            local_1d8 = *(undefined8 *)(lVar22 + 0x128);
            uStack_1d0 = *(undefined8 *)(lVar22 + 0x130);
            local_1c8 = *(undefined4 *)(lVar22 + 0x138);
            uStack_1c4 = *(undefined4 *)(lVar22 + 0x13c);
            uStack_1c0 = *(undefined4 *)(lVar22 + 0x140);
            uStack_1bc = *(undefined4 *)(lVar22 + 0x144);
            local_1b8 = *(undefined4 *)(lVar22 + 0x148);
            uStack_1b4 = *(undefined4 *)(lVar22 + 0x14c);
            uStack_1b0 = *(undefined4 *)(lVar22 + 0x150);
            uStack_1ac = *(undefined4 *)(lVar22 + 0x154);
            plVar12 = (longlong *)(lVar22 + 0x158);
            if (local_1a8 != plVar12) {
              if (0xf < *(ulonglong *)(lVar22 + 0x170)) {
                plVar12 = (longlong *)*plVar12;
              }
              FUN_180029840(local_1a8,plVar12,*(undefined8 *)(lVar22 + 0x168));
            }
            plVar12 = (longlong *)(lVar22 + 0x178);
            if (local_188 != plVar12) {
              if (0xf < *(ulonglong *)(lVar22 + 400)) {
                plVar12 = (longlong *)*plVar12;
              }
              FUN_180029840(local_188,plVar12,*(undefined8 *)(lVar22 + 0x188));
            }
            lVar7 = DAT_180cd0d98;
            plVar11 = DAT_180cd0d88;
            local_168 = *(undefined1 *)(lVar22 + 0x198);
            local_164 = *(undefined8 *)(lVar22 + 0x19c);
            uStack_15c = *(undefined8 *)(lVar22 + 0x1a4);
            local_150 = *(undefined8 *)(lVar22 + 0x1b0);
            uStack_148 = *(undefined8 *)(lVar22 + 0x1b8);
            local_140 = *(undefined8 *)(lVar22 + 0x1c0);
            uStack_138 = *(undefined8 *)(lVar22 + 0x1c8);
            local_130 = *(undefined8 *)(lVar22 + 0x1d0);
            uStack_128 = *(undefined8 *)(lVar22 + 0x1d8);
            local_120 = *(undefined8 *)(lVar22 + 0x1e0);
            uStack_118 = *(undefined8 *)(lVar22 + 0x1e8);
            local_110 = *(undefined4 *)(lVar22 + 0x1f0);
            uStack_10c = *(undefined4 *)(lVar22 + 500);
            uStack_108 = *(undefined4 *)(lVar22 + 0x1f8);
            uStack_104 = *(undefined4 *)(lVar22 + 0x1fc);
            fVar23 = *(float *)(lVar22 + 0x200);
            uStack_fc = *(undefined4 *)(lVar22 + 0x204);
            uStack_f8 = *(undefined4 *)(lVar22 + 0x208);
            uStack_f4 = *(undefined4 *)(lVar22 + 0x20c);
            local_f0 = *(undefined1 *)(lVar22 + 0x210);
            local_2e8 = 0x231;
            uVar18 = ((((((((local_3b0 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                           local_3b0 >> 8 & 0xff) * 0x100000001b3 ^ local_3b0 >> 0x10 & 0xff) *
                          0x100000001b3 ^ local_3b0 >> 0x18 & 0xff) * 0x100000001b3 ^
                        local_3b0 >> 0x20 & 0xff) * 0x100000001b3 ^ local_3b0 >> 0x28 & 0xff) *
                       0x100000001b3 ^ local_3b0 >> 0x30 & 0xff) * 0x100000001b3 ^ local_3b0 >> 0x38
                     ) * 0x100000001b3 & DAT_180cd0db0;
            plVar12 = *(longlong **)(DAT_180cd0d98 + 8 + uVar18 * 0x10);
            if (plVar12 == DAT_180cd0d88) {
LAB_1800d1c01:
              plVar20 = (longlong *)0x0;
            }
            else {
              uVar2 = plVar12[2];
              plVar20 = plVar12;
              while (local_3b0 != uVar2) {
                if (plVar20 == *(longlong **)(DAT_180cd0d98 + uVar18 * 0x10)) goto LAB_1800d1c01;
                plVar20 = (longlong *)plVar20[1];
                uVar2 = plVar20[2];
              }
            }
            local_100 = fVar23;
            if (plVar20 != (longlong *)0x0) {
              plVar3 = *(longlong **)(DAT_180cd0d98 + uVar18 * 0x10);
              if (plVar12 == plVar20) {
                if (plVar3 == plVar20) {
                  *(longlong **)(DAT_180cd0d98 + uVar18 * 0x10) = DAT_180cd0d88;
                  *(longlong **)(lVar7 + 8 + uVar18 * 0x10) = plVar11;
                }
                else {
                  *(longlong *)(DAT_180cd0d98 + 8 + uVar18 * 0x10) = plVar20[1];
                }
              }
              else if (plVar3 == plVar20) {
                *(longlong *)(DAT_180cd0d98 + uVar18 * 0x10) = *plVar20;
              }
              lVar22 = *plVar20;
              DAT_180cd0d90 = DAT_180cd0d90 + -1;
              *(longlong *)plVar20[1] = lVar22;
              *(longlong *)(lVar22 + 8) = plVar20[1];
              FUN_1804eced0(plVar20 + 0x14,0xb8,2,FUN_1800cf270);
              fVar23 = (float)thunk_FUN_1803d64e0(plVar20,0x218);
            }
          }
        }
      }
      puVar13 = (undefined8 *)FUN_1800d23e0(fVar23,local_e8,pbVar21,&local_2e8);
      plVar20 = (longlong *)*puVar13;
      FUN_1804eced0(local_260,0xb8,2,FUN_1800cf270);
    }
    *(undefined1 *)(plVar20 + 0x42) = 1;
    pbVar19 = (byte *)0x0;
    if (param_2 != '\0') {
      pbVar19 = pbVar21;
    }
    FUN_1800ce840(plVar20 + 3,pbVar19,SUB84(dVar4,0),fVar26);
    pbVar21 = pbVar21 + 0x30;
    plVar12 = DAT_180cd0d88;
  } while( true );
}



/* ===== 1800d21b0 FUN_1800d21b0 ===== */

void FUN_1800d21b0(longlong param_1)

{
  FUN_1804eced0(param_1 + 0x88,0xb8,2,FUN_1800cf270);
  return;
}



/* ===== 1800d21e0 FUN_1800d21e0 ===== */

void FUN_1800d21e0(longlong param_1)

{
  FUN_1804eced0(param_1 + 0x28,0x38,2,thunk_FUN_18000f890);
  return;
}



/* ===== 1800d2210 FUN_1800d2210 ===== */

undefined4 * FUN_1800d2210(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  param_1[4] = param_2[4];
  uVar1 = param_2[6];
  uVar2 = param_2[7];
  uVar3 = param_2[8];
  param_1[5] = param_2[5];
  param_1[6] = uVar1;
  param_1[7] = uVar2;
  param_1[8] = uVar3;
  FUN_1804ed050(param_1 + 10,param_2 + 10,0x38,2,&LAB_1800d2280,thunk_FUN_18000f890);
  return param_1;
}



/* ===== 1800d22d0 FUN_1800d22d0 ===== */

void FUN_1800d22d0(longlong param_1)

{
  ulonglong uVar1;
  
  for (uVar1 = 0; uVar1 < 2; uVar1 = uVar1 + 1) {
    FUN_1800d2760(uVar1 * 0xb8 + param_1);
  }
  return;
}



/* ===== 1800d2320 FUN_1800d2320 ===== */

void FUN_1800d2320(longlong param_1)

{
  ulonglong uVar1;
  
  for (uVar1 = 0; uVar1 < 2; uVar1 = uVar1 + 1) {
    FUN_1800d27e0(uVar1 * 0x38 + param_1);
  }
  return;
}



/* ===== 1800d2370 FUN_1800d2370 ===== */

void FUN_1800d2370(longlong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  
  for (uVar1 = 0; uVar1 < param_2; uVar1 = uVar1 + 1) {
    FUN_18000f4c0(uVar1 * 0x20 + param_1);
  }
  return;
}



/* ===== 1800d23e0 FUN_1800d23e0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1800d23e0(undefined8 param_1,undefined8 *param_2,byte *param_3,undefined4 *param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  
  uVar8 = (((((((((ulonglong)*param_3 ^ 0xcbf29ce484222325) * 0x100000001b3 ^ (ulonglong)param_3[1])
                * 0x100000001b3 ^ (ulonglong)param_3[2]) * 0x100000001b3 ^ (ulonglong)param_3[3]) *
              0x100000001b3 ^ (ulonglong)param_3[4]) * 0x100000001b3 ^ (ulonglong)param_3[5]) *
            0x100000001b3 ^ (ulonglong)param_3[6]) * 0x100000001b3 ^ (ulonglong)param_3[7]) *
          0x100000001b3;
  puVar7 = *(undefined8 **)(DAT_180cd0d98 + 8 + (DAT_180cd0db0 & uVar8) * 0x10);
  puVar9 = DAT_180cd0d88;
  if (puVar7 != DAT_180cd0d88) {
    lVar1 = puVar7[2];
    puVar9 = puVar7;
    while( true ) {
      if (*(longlong *)param_3 == lVar1) {
        *param_2 = puVar9;
        *(undefined1 *)(param_2 + 1) = 0;
        return param_2;
      }
      if (puVar9 == *(undefined8 **)(DAT_180cd0d98 + (DAT_180cd0db0 & uVar8) * 0x10)) break;
      puVar9 = (undefined8 *)puVar9[1];
      lVar1 = puVar9[2];
    }
  }
  if (DAT_180cd0d90 == 0x7a44c6afc2dd9c) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4cd0("unordered_map/set too long");
  }
  puVar10 = &DAT_180cd0d88;
  puVar7 = (undefined8 *)FUN_1804ecaa0(0x218);
  puVar7[2] = *(undefined8 *)param_3;
  *(undefined4 *)(puVar7 + 3) = *param_4;
  *(undefined1 *)((longlong)puVar7 + 0x1c) = *(undefined1 *)(param_4 + 1);
  uVar6 = *(undefined8 *)(param_4 + 4);
  puVar7[4] = *(undefined8 *)(param_4 + 2);
  puVar7[5] = uVar6;
  uVar6 = *(undefined8 *)(param_4 + 8);
  puVar7[6] = *(undefined8 *)(param_4 + 6);
  puVar7[7] = uVar6;
  *(undefined4 *)(puVar7 + 8) = param_4[10];
  uVar6 = *(undefined8 *)(param_4 + 0xe);
  puVar7[9] = *(undefined8 *)(param_4 + 0xc);
  puVar7[10] = uVar6;
  uVar6 = *(undefined8 *)(param_4 + 0x12);
  puVar7[0xb] = *(undefined8 *)(param_4 + 0x10);
  puVar7[0xc] = uVar6;
  uVar6 = *(undefined8 *)(param_4 + 0x16);
  puVar7[0xd] = *(undefined8 *)(param_4 + 0x14);
  puVar7[0xe] = uVar6;
  uVar3 = param_4[0x19];
  uVar4 = param_4[0x1a];
  uVar5 = param_4[0x1b];
  *(undefined4 *)(puVar7 + 0xf) = param_4[0x18];
  *(undefined4 *)((longlong)puVar7 + 0x7c) = uVar3;
  *(undefined4 *)(puVar7 + 0x10) = uVar4;
  *(undefined4 *)((longlong)puVar7 + 0x84) = uVar5;
  *(undefined1 *)(puVar7 + 0x11) = *(undefined1 *)(param_4 + 0x1c);
  *(undefined8 *)((longlong)puVar7 + 0x8c) = *(undefined8 *)(param_4 + 0x1d);
  *(undefined4 *)((longlong)puVar7 + 0x94) = param_4[0x1f];
  *(undefined4 *)(puVar7 + 0x13) = param_4[0x20];
  FUN_1804ed050(puVar7 + 0x14,param_4 + 0x22,0xb8,2,&LAB_1800d38c0,FUN_1800cf270,puVar10,puVar7);
  *(undefined1 *)(puVar7 + 0x42) = *(undefined1 *)(param_4 + 0x7e);
  if (_DAT_180cd0d80 < (float)(DAT_180cd0d90 + 1) / (float)DAT_180cd0db8) {
    FUN_1800d2e90();
    puVar10 = *(undefined8 **)(DAT_180cd0d98 + 8 + (DAT_180cd0db0 & uVar8) * 0x10);
    puVar9 = DAT_180cd0d88;
    if (puVar10 != DAT_180cd0d88) {
      lVar1 = puVar10[2];
      puVar9 = puVar10;
      while (puVar7[2] != lVar1) {
        if (puVar9 == *(undefined8 **)(DAT_180cd0d98 + (DAT_180cd0db0 & uVar8) * 0x10))
        goto LAB_1800d268e;
        puVar9 = (undefined8 *)puVar9[1];
        lVar1 = puVar9[2];
      }
      puVar9 = (undefined8 *)*puVar9;
    }
  }
LAB_1800d268e:
  puVar10 = (undefined8 *)puVar9[1];
  DAT_180cd0d90 = DAT_180cd0d90 + 1;
  *puVar7 = puVar9;
  puVar7[1] = puVar10;
  *puVar10 = puVar7;
  puVar9[1] = puVar7;
  lVar1 = DAT_180cd0d98;
  uVar8 = DAT_180cd0db0 & uVar8;
  puVar2 = *(undefined8 **)(DAT_180cd0d98 + uVar8 * 0x10);
  if (puVar2 == DAT_180cd0d88) {
    *(undefined8 **)(DAT_180cd0d98 + uVar8 * 0x10) = puVar7;
  }
  else {
    if (puVar2 == puVar9) {
      *(undefined8 **)(DAT_180cd0d98 + uVar8 * 0x10) = puVar7;
      goto LAB_1800d26ed;
    }
    if (*(undefined8 **)(DAT_180cd0d98 + 8 + uVar8 * 0x10) != puVar10) goto LAB_1800d26ed;
  }
  *(undefined8 **)(lVar1 + 8 + uVar8 * 0x10) = puVar7;
LAB_1800d26ed:
  *param_2 = puVar7;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



/* ===== 1800d2730 FUN_1800d2730 ===== */

void FUN_1800d2730(undefined8 *param_1)

{
  FUN_1800d35d0(param_1,*param_1);
  thunk_FUN_1803d64e0(*param_1,0x218);
  return;
}



/* ===== 1800d2760 FUN_1800d2760 ===== */

void FUN_1800d2760(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0xf;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  return;
}



/* ===== 1800d27e0 FUN_1800d27e0 ===== */

void FUN_1800d27e0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined1 *)((longlong)param_1 + 0x24) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  return;
}



/* ===== 1800d2810 FUN_1800d2810 ===== */

void FUN_1800d2810(longlong *param_1,longlong param_2,ulonglong param_3)

{
  code *pcVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  longlong lVar8;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [32];
  
  puVar5 = auStack_68;
  puVar6 = auStack_68;
  lVar4 = *param_1;
  uVar2 = (param_1[2] - lVar4 >> 3) * -0x79435e50d79435e5;
  if (param_3 <= uVar2) {
    lVar3 = param_1[1];
    lVar8 = lVar3 - lVar4 >> 3;
    if (param_3 <= (ulonglong)(lVar8 * -0x79435e50d79435e5)) {
      lVar3 = param_3 * 0x98 + lVar4;
      for (; param_3 != 0; param_3 = param_3 - 1) {
        FUN_1800d3210(lVar4,param_2);
        lVar4 = lVar4 + 0x98;
        param_2 = param_2 + 0x98;
      }
      lVar4 = param_1[1];
      for (lVar8 = lVar3; lVar8 != lVar4; lVar8 = lVar8 + 0x98) {
        FUN_1804eced0(lVar8 + 0x28,0x38,2,thunk_FUN_18000f890);
      }
      param_1[1] = lVar3;
      return;
    }
    if (lVar4 != lVar3) {
      do {
        FUN_1800d3210(lVar4,param_2);
        lVar4 = lVar4 + 0x98;
        param_2 = param_2 + 0x98;
        lVar3 = param_1[1];
      } while (lVar4 != lVar3);
    }
    lVar4 = FUN_1800d32d0(param_2,param_3 + lVar8 * 0x79435e50d79435e5,lVar3,param_1);
    param_1[1] = lVar4;
    return;
  }
  if (0x1af286bca1af286 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_18000fb10();
  }
  if (0x1af286bca1af286 - (uVar2 >> 1) < uVar2) {
    uVar2 = 0x1af286bca1af286;
  }
  else {
    uVar2 = (uVar2 >> 1) + uVar2;
    if (uVar2 < param_3) {
      uVar2 = param_3;
    }
  }
  puVar7 = auStack_68;
  if (lVar4 == 0) goto LAB_1800d2920;
  lVar3 = param_1[1];
  for (; lVar4 != lVar3; lVar4 = lVar4 + 0x98) {
    FUN_1804eced0(lVar4 + 0x28,0x38,2,thunk_FUN_18000f890);
  }
  lVar4 = *param_1;
  lVar3 = lVar4;
  if ((ulonglong)((param_1[2] - lVar4 >> 3) * 8) < 0x1000) {
LAB_1800d2908:
    puVar6 = puVar5;
  }
  else {
    lVar3 = *(longlong *)(lVar4 + -8);
    if (0x1f < (lVar4 - lVar3) - 8U) {
      lVar3 = 5;
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(5);
      puVar5 = auStack_60;
      goto LAB_1800d2908;
    }
  }
  *(undefined8 *)(puVar6 + -8) = 0x1800d2913;
  thunk_FUN_1803d64e0(lVar3);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  puVar7 = puVar6;
LAB_1800d2920:
  if (0x1af286bca1af286 < uVar2) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar7 + -8) = &UNK_1800d2a42;
    FUN_18000d840();
  }
  *(undefined8 *)(puVar7 + -8) = 0x1800d2938;
  lVar4 = FUN_18000fb70(uVar2 * 0x98);
  *param_1 = lVar4;
  param_1[1] = lVar4;
  param_1[2] = uVar2 * 0x98 + lVar4;
  *(undefined8 *)(puVar7 + -8) = 0x1800d2958;
  lVar4 = FUN_1800d32d0(param_2,param_3,lVar4,param_1);
  param_1[1] = lVar4;
  return;
}



/* ===== 1800d2a50 FUN_1800d2a50 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1800d2a50(undefined8 param_1,undefined8 *param_2,byte *param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  uVar4 = (((((((((ulonglong)*param_3 ^ 0xcbf29ce484222325) * 0x100000001b3 ^ (ulonglong)param_3[1])
                * 0x100000001b3 ^ (ulonglong)param_3[2]) * 0x100000001b3 ^ (ulonglong)param_3[3]) *
              0x100000001b3 ^ (ulonglong)param_3[4]) * 0x100000001b3 ^ (ulonglong)param_3[5]) *
            0x100000001b3 ^ (ulonglong)param_3[6]) * 0x100000001b3 ^ (ulonglong)param_3[7]) *
          0x100000001b3;
  puVar3 = (undefined8 *)(DAT_180cd0db0 & uVar4);
  puVar2 = *(undefined8 **)(DAT_180cd0d98 + 8 + (longlong)puVar3 * 0x10);
  puVar5 = DAT_180cd0d88;
  if (puVar2 != DAT_180cd0d88) {
    puVar3 = *(undefined8 **)(DAT_180cd0d98 + (longlong)puVar3 * 0x10);
    lVar1 = puVar2[2];
    puVar5 = puVar2;
    while( true ) {
      if (*(longlong *)param_3 == lVar1) {
        *param_2 = puVar5;
        *(undefined1 *)(param_2 + 1) = 0;
        return param_2;
      }
      if (puVar5 == puVar3) break;
      puVar5 = (undefined8 *)puVar5[1];
      lVar1 = puVar5[2];
    }
  }
  if (DAT_180cd0d90 == 0x7a44c6afc2dd9c) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4cd0("unordered_map/set too long");
  }
  puVar6 = &DAT_180cd0d88;
  puVar2 = (undefined8 *)FUN_1804ecaa0(0x218,puVar3,DAT_180cd0d98,param_4,&DAT_180cd0d88,0);
  puVar2[2] = *(undefined8 *)param_3;
  *(undefined2 *)((longlong)puVar2 + 0x1d) = 0;
  *(undefined1 *)((longlong)puVar2 + 0x1f) = 0;
  puVar2[5] = 0;
  *(undefined4 *)((longlong)puVar2 + 0x39) = 0;
  *(undefined2 *)((longlong)puVar2 + 0x3d) = 0;
  *(undefined1 *)((longlong)puVar2 + 0x3f) = 0;
  puVar2[8] = 0x3f800000;
  *(undefined4 *)((longlong)puVar2 + 0x81) = 0;
  *(undefined2 *)((longlong)puVar2 + 0x85) = 0;
  *(undefined4 *)((longlong)puVar2 + 0x87) = 0;
  *(undefined1 *)((longlong)puVar2 + 0x8b) = 0;
  puVar2[0x13] = 0;
  puVar2[0x42] = 0;
  *(undefined4 *)(puVar2 + 3) = 0;
  *(undefined1 *)((longlong)puVar2 + 0x1c) = 0;
  puVar2[4] = 0;
  puVar2[6] = 0;
  *(undefined1 *)(puVar2 + 7) = 0;
  puVar2[9] = 0;
  puVar2[10] = 0;
  puVar2[0xb] = 0;
  puVar2[0xc] = 0;
  puVar2[0xd] = 0;
  puVar2[0xe] = 0;
  puVar2[0xf] = 0;
  *(undefined1 *)(puVar2 + 0x10) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x8c) = 0;
  *(undefined4 *)((longlong)puVar2 + 0x94) = 0;
  FUN_180540170(puVar2 + 0x14,0,0x170,param_4,puVar6,puVar2);
  FUN_1800d22d0(puVar2 + 0x14);
  *(undefined1 *)(puVar2 + 0x42) = 0;
  if (_DAT_180cd0d80 < (float)(DAT_180cd0d90 + 1) / (float)DAT_180cd0db8) {
    FUN_1800d2e90();
    puVar3 = *(undefined8 **)(DAT_180cd0d98 + 8 + (DAT_180cd0db0 & uVar4) * 0x10);
    puVar5 = DAT_180cd0d88;
    if (puVar3 != DAT_180cd0d88) {
      lVar1 = puVar3[2];
      puVar5 = puVar3;
      while (puVar2[2] != lVar1) {
        if (puVar5 == *(undefined8 **)(DAT_180cd0d98 + (DAT_180cd0db0 & uVar4) * 0x10))
        goto LAB_1800d2ceb;
        puVar5 = (undefined8 *)puVar5[1];
        lVar1 = puVar5[2];
      }
      puVar5 = (undefined8 *)*puVar5;
    }
  }
LAB_1800d2ceb:
  puVar3 = (undefined8 *)puVar5[1];
  DAT_180cd0d90 = DAT_180cd0d90 + 1;
  *puVar2 = puVar5;
  puVar2[1] = puVar3;
  *puVar3 = puVar2;
  puVar5[1] = puVar2;
  lVar1 = DAT_180cd0d98;
  uVar4 = DAT_180cd0db0 & uVar4;
  puVar6 = *(undefined8 **)(DAT_180cd0d98 + uVar4 * 0x10);
  if (puVar6 == DAT_180cd0d88) {
    *(undefined8 **)(DAT_180cd0d98 + uVar4 * 0x10) = puVar2;
  }
  else {
    if (puVar6 == puVar5) {
      *(undefined8 **)(DAT_180cd0d98 + uVar4 * 0x10) = puVar2;
      goto LAB_1800d2d4a;
    }
    if (*(undefined8 **)(DAT_180cd0d98 + 8 + uVar4 * 0x10) != puVar3) goto LAB_1800d2d4a;
  }
  *(undefined8 **)(lVar1 + 8 + uVar4 * 0x10) = puVar2;
LAB_1800d2d4a:
  *param_2 = puVar2;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



/* ===== 1800d2d70 FUN_1800d2d70 ===== */

void FUN_1800d2d70(longlong param_1)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1804eced0(*(longlong *)(param_1 + 8) + 0xa0,0xb8,2,FUN_1800cf270);
  }
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  thunk_FUN_1803d64e0(*(longlong *)(param_1 + 8),0x218);
  return;
}



/* ===== 1800d2dc0 FUN_1800d2dc0 ===== */

void FUN_1800d2dc0(longlong *param_1)

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
  for (; lVar3 != lVar2; lVar3 = lVar3 + 0x98) {
    FUN_1804eced0(lVar3 + 0x28,0x38,2,thunk_FUN_18000f890);
  }
  lVar3 = *param_1;
  lVar2 = lVar3;
  if (0xfff < (ulonglong)((param_1[2] - lVar3 >> 3) * 8)) {
    lVar2 = *(longlong *)(lVar3 + -8);
    if ((lVar3 - lVar2) - 8U < 0x20) goto LAB_1800d2e65;
    lVar2 = 5;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar4 = auStack_20;
  }
  puVar5 = puVar4;
LAB_1800d2e65:
  *(undefined8 *)(puVar5 + -8) = 0x1800d2e6d;
  thunk_FUN_1803d64e0(lVar2);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* ===== 1800d2e90 FUN_1800d2e90 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800d2e90(void)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  float fVar5;
  
  uVar1 = DAT_180cd0db8;
  fVar5 = (float)FUN_18053ef70((float)(DAT_180cd0d90 + 1) / _DAT_180cd0d80);
  lVar2 = 0;
  if ((DAT_1808acd00 <= fVar5) && (fVar5 = fVar5 - DAT_1808acd00, fVar5 < DAT_1808acd00)) {
    lVar2 = -0x8000000000000000;
  }
  uVar3 = 8;
  if (8 < (ulonglong)((longlong)fVar5 + lVar2)) {
    uVar3 = (longlong)fVar5 + lVar2;
  }
  uVar4 = uVar1;
  if ((uVar1 < uVar3) && ((0x1ff < uVar1 || (uVar4 = uVar1 * 8, uVar1 * 8 < uVar3)))) {
    uVar4 = uVar3;
  }
  FUN_1800d3660(uVar3,uVar4);
  return;
}



/* ===== 1800d2f40 FUN_1800d2f40 ===== */

longlong * FUN_1800d2f40(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  ulonglong uVar12;
  
  if (param_2 == param_3) {
    return param_3;
  }
  puVar2 = *(undefined8 **)(param_1 + 8);
  lVar3 = *(longlong *)(param_1 + 0x18);
  puVar4 = (undefined8 *)param_2[1];
  lVar6 = (*(ulonglong *)(param_1 + 0x30) &
          (((((((((ulonglong)*(byte *)(param_2 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                (ulonglong)*(byte *)((longlong)param_2 + 0x11)) * 0x100000001b3 ^
               (ulonglong)*(byte *)((longlong)param_2 + 0x12)) * 0x100000001b3 ^
              (ulonglong)*(byte *)((longlong)param_2 + 0x13)) * 0x100000001b3 ^
             (ulonglong)*(byte *)((longlong)param_2 + 0x14)) * 0x100000001b3 ^
            (ulonglong)*(byte *)((longlong)param_2 + 0x15)) * 0x100000001b3 ^
           (ulonglong)*(byte *)((longlong)param_2 + 0x16)) * 0x100000001b3 ^
          (ulonglong)*(byte *)((longlong)param_2 + 0x17)) * 0x100000001b3) * 0x10;
  plVar1 = (longlong *)(lVar6 + lVar3);
  plVar8 = (longlong *)(lVar3 + 8 + lVar6);
  plVar5 = (longlong *)*plVar1;
  plVar10 = (longlong *)*plVar8;
  plVar9 = param_2;
  do {
    plVar11 = (longlong *)*plVar9;
    FUN_1804eced0(plVar9 + 0x14,0xb8,2,FUN_1800cf270);
    thunk_FUN_1803d64e0(plVar9,0x218);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
    if (plVar9 == plVar10) {
      if (plVar5 == param_2) {
        *plVar1 = (longlong)puVar2;
        puVar7 = puVar2;
      }
      else {
        puVar7 = puVar4;
      }
      *plVar8 = (longlong)puVar7;
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
        plVar1 = (longlong *)(lVar3 + uVar12 * 0x10);
        plVar5 = *(longlong **)(lVar3 + 8 + uVar12 * 0x10);
        plVar10 = plVar11;
        while( true ) {
          plVar11 = (longlong *)*plVar10;
          FUN_1804eced0(plVar10 + 0x14,0xb8,2,FUN_1800cf270);
          thunk_FUN_1803d64e0(plVar10,0x218);
          *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
          if (plVar10 == plVar5) break;
          plVar10 = plVar11;
          if (plVar11 == param_3) {
            *plVar1 = (longlong)plVar11;
            *puVar4 = plVar11;
            plVar11[1] = (longlong)puVar4;
            return param_3;
          }
        }
        *plVar1 = (longlong)puVar2;
        *(undefined8 **)(lVar3 + 8 + uVar12 * 0x10) = puVar2;
      }
      goto LAB_1800d31e8;
    }
    plVar9 = plVar11;
  } while (plVar11 != param_3);
  if (plVar5 == param_2) {
    *plVar1 = (longlong)plVar11;
  }
LAB_1800d31e8:
  *puVar4 = plVar11;
  plVar11[1] = (longlong)puVar4;
  return param_3;
}



/* ===== 1800d3210 FUN_1800d3210 ===== */

undefined4 * FUN_1800d3210(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  param_1[4] = param_2[4];
  uVar1 = param_2[6];
  uVar2 = param_2[7];
  uVar3 = param_2[8];
  param_1[5] = param_2[5];
  param_1[6] = uVar1;
  param_1[7] = uVar2;
  param_1[8] = uVar3;
  if (param_1 != param_2) {
    puVar5 = (undefined8 *)(param_2 + 10);
    if (0xf < *(ulonglong *)(param_2 + 0x10)) {
      puVar5 = (undefined8 *)*puVar5;
    }
    FUN_180029840(param_1 + 10,puVar5,*(undefined8 *)(param_2 + 0xe));
  }
  param_1[0x12] = param_2[0x12];
  *(undefined1 *)(param_1 + 0x13) = *(undefined1 *)(param_2 + 0x13);
  uVar1 = param_2[0x15];
  uVar2 = param_2[0x16];
  uVar3 = param_2[0x17];
  param_1[0x14] = param_2[0x14];
  param_1[0x15] = uVar1;
  param_1[0x16] = uVar2;
  param_1[0x17] = uVar3;
  if (param_1 != param_2) {
    plVar6 = (longlong *)(param_2 + 0x18);
    if (0xf < *(ulonglong *)(param_2 + 0x1e)) {
      plVar6 = (longlong *)*plVar6;
    }
    FUN_180029840(param_1 + 0x18,plVar6,*(undefined8 *)(param_2 + 0x1c));
  }
  param_1[0x20] = param_2[0x20];
  *(undefined1 *)(param_1 + 0x21) = *(undefined1 *)(param_2 + 0x21);
  uVar4 = *(undefined8 *)(param_2 + 0x24);
  *(undefined8 *)(param_1 + 0x22) = *(undefined8 *)(param_2 + 0x22);
  *(undefined8 *)(param_1 + 0x24) = uVar4;
  return param_1;
}



/* ===== 1800d32d0 FUN_1800d32d0 ===== */

undefined4 *
FUN_1800d32d0(undefined4 *param_1,longlong param_2,undefined4 *param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  puVar4 = param_3;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_3 = *param_1;
    param_3[1] = param_1[1];
    *(undefined8 *)(param_3 + 2) = *(undefined8 *)(param_1 + 2);
    param_3[4] = param_1[4];
    uVar1 = param_1[6];
    uVar2 = param_1[7];
    uVar3 = param_1[8];
    param_3[5] = param_1[5];
    param_3[6] = uVar1;
    param_3[7] = uVar2;
    param_3[8] = uVar3;
    FUN_1804ed050(param_3 + 10,param_1 + 10,0x38,2,FUN_1800d3970,thunk_FUN_18000f890,puVar4,param_3,
                  param_4);
    param_3 = param_3 + 0x26;
    param_1 = param_1 + 0x26;
  }
  return param_3;
}



/* ===== 1800d3380 FUN_1800d3380 ===== */

longlong FUN_1800d3380(longlong *param_1,longlong param_2,undefined8 param_3)

{
  ulonglong uVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  longlong lVar11;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [32];
  
  lVar8 = *param_1;
  lVar4 = (param_1[1] - lVar8 >> 3) * -0x79435e50d79435e5;
  uVar7 = 0x1af286bca1af286;
  if (lVar4 == 0x1af286bca1af286) {
                    /* WARNING: Subroutine does not return */
    FUN_18000fb10();
  }
  uVar1 = lVar4 + 1;
  uVar6 = (param_1[2] - lVar8 >> 3) * -0x79435e50d79435e5;
  if (uVar6 <= 0x1af286bca1af286 - (uVar6 >> 1)) {
    uVar6 = (uVar6 >> 1) + uVar6;
    uVar7 = uVar1;
    if (uVar1 <= uVar6) {
      uVar7 = uVar6;
    }
    if (0x1af286bca1af286 < uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  lVar5 = FUN_18000fb70(uVar7 * 0x98);
  lVar11 = ((param_2 - lVar8) / 0x98) * 0x98 + lVar5;
  FUN_1800d2210(lVar11,param_3);
  puVar9 = auStack_68;
  puVar10 = auStack_68;
  lVar8 = param_1[1];
  lVar4 = *param_1;
  lVar3 = lVar5;
  if (param_2 == lVar8) {
    for (; lVar4 != lVar8; lVar4 = lVar4 + 0x98) {
      FUN_1800d2210(lVar3,lVar4);
      lVar3 = lVar3 + 0x98;
    }
  }
  else {
    for (; lVar4 != param_2; lVar4 = lVar4 + 0x98) {
      FUN_1800d2210(lVar3,lVar4);
      lVar3 = lVar3 + 0x98;
    }
    lVar8 = param_1[1];
    lVar4 = lVar11;
    for (; param_2 != lVar8; param_2 = param_2 + 0x98) {
      lVar4 = lVar4 + 0x98;
      FUN_1800d2210(lVar4,param_2);
    }
  }
  lVar8 = *param_1;
  if (lVar8 == 0) goto LAB_1800d358d;
  lVar4 = param_1[1];
  for (; lVar8 != lVar4; lVar8 = lVar8 + 0x98) {
    FUN_1804eced0(lVar8 + 0x28,0x38,2,thunk_FUN_18000f890);
  }
  lVar8 = *param_1;
  lVar4 = lVar8;
  if ((ulonglong)((param_1[2] - lVar8 >> 3) * 8) < 0x1000) {
LAB_1800d3582:
    puVar10 = puVar9;
  }
  else {
    lVar4 = *(longlong *)(lVar8 + -8);
    if (0x1f < (lVar8 - lVar4) - 8U) {
      lVar4 = 5;
      pcVar2 = (code *)swi(0x29);
      (*pcVar2)(5);
      puVar9 = auStack_60;
      goto LAB_1800d3582;
    }
  }
  *(undefined8 *)(puVar10 + -8) = 0x1800d358d;
  thunk_FUN_1803d64e0(lVar4);
LAB_1800d358d:
  *param_1 = lVar5;
  param_1[1] = uVar1 * 0x98 + lVar5;
  param_1[2] = uVar7 * 0x98 + lVar5;
  return lVar11;
}



/* ===== 1800d35d0 FUN_1800d35d0 ===== */

void FUN_1800d35d0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  *(undefined8 *)param_2[1] = 0;
  puVar2 = (undefined8 *)*param_2;
  while (puVar2 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar2;
    FUN_1804eced0(puVar2 + 0x14,0xb8,2,FUN_1800cf270);
    thunk_FUN_1803d64e0(puVar2,0x218);
    puVar2 = puVar1;
  }
  return;
}



/* ===== 1800d3660 FUN_1800d3660 ===== */

void FUN_1800d3660(undefined8 param_1,ulonglong param_2)

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
  
  plVar8 = DAT_180cd0d88;
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
  FUN_180029d30(&DAT_180cd0d98,2L << (bVar10 & 0x3f),DAT_180cd0d88);
  DAT_180cd0db0 = lVar11 - 1;
  DAT_180cd0db8 = lVar11;
  plVar7 = (longlong *)*DAT_180cd0d88;
  lVar11 = DAT_180cd0d98;
joined_r0x0001800d36dc:
  do {
    while( true ) {
      while( true ) {
        if (plVar7 == plVar8) {
          DAT_180cd0d98 = lVar11;
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
                (ulonglong)*(byte *)((longlong)plVar7 + 0x17)) * 0x100000001b3 & DAT_180cd0db0;
        plVar2 = *(longlong **)(lVar11 + uVar9 * 0x10);
        DAT_180cd0d98 = lVar11;
        if (plVar2 != plVar8) break;
        *(longlong **)(lVar11 + uVar9 * 0x10) = plVar7;
        *(longlong **)(lVar11 + 8 + uVar9 * 0x10) = plVar7;
        plVar7 = plVar1;
        lVar11 = DAT_180cd0d98;
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
      lVar11 = DAT_180cd0d98;
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
        lVar11 = DAT_180cd0d98;
        goto joined_r0x0001800d36dc;
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
    lVar11 = DAT_180cd0d98;
  } while( true );
}



/* ===== 1800d3860 FUN_1800d3860 ===== */

void FUN_1800d3860(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x98) {
    FUN_1804eced0(lVar2 + 0x28,0x38,2,thunk_FUN_18000f890);
  }
  return;
}



/* ===== 1800d3970 FUN_1800d3970 ===== */

longlong FUN_1800d3970(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_180024b50();
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined1 *)(param_1 + 0x24) = *(undefined1 *)(param_2 + 0x24);
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  return param_1;
}



/* ===== 1800d39b0 FUN_1800d39b0 ===== */

uint FUN_1800d39b0(float param_1,float param_2,float param_3,float param_4)

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
  
  local_78[2] = param_1;
  local_78[4] = 1.0;
  local_78[0] = 0.0;
  local_58 = 1.0;
  local_78[5] = 0.0;
  local_48 = 1.0;
  local_54 = 0.0;
  local_38[0] = 1.0;
  pfVar5 = local_78;
  if (0.0 <= param_1) {
    pfVar5 = local_78 + 2;
  }
  local_44 = 0.0;
  local_78[6] = param_2;
  local_40[0] = param_4;
  pfVar1 = local_78 + 4;
  if (param_1 <= DAT_1808ac34c) {
    pfVar1 = pfVar5;
  }
  local_50[0] = param_3;
  pfVar5 = local_78 + 5;
  if (0.0 <= param_2) {
    pfVar5 = local_78 + 6;
  }
  pfVar2 = &local_58;
  if (param_2 <= DAT_1808ac34c) {
    pfVar2 = pfVar5;
  }
  pfVar5 = &local_54;
  if (0.0 <= param_3) {
    pfVar5 = local_50;
  }
  pfVar3 = &local_48;
  if (param_3 <= DAT_1808ac34c) {
    pfVar3 = pfVar5;
  }
  pfVar5 = &local_44;
  if (0.0 <= param_4) {
    pfVar5 = local_40;
  }
  pfVar4 = local_38;
  if (param_4 <= DAT_1808ac34c) {
    pfVar4 = pfVar5;
  }
  return (((int)(*pfVar4 * DAT_1808acb94 + DAT_1808ac1f4) << 8 |
          (int)(*pfVar3 * DAT_1808acb94 + DAT_1808ac1f4)) << 8 |
         (int)(*pfVar2 * DAT_1808acb94 + DAT_1808ac1f4)) << 8 |
         (int)(*pfVar1 * DAT_1808acb94 + DAT_1808ac1f4);
}



/* ===== 1800d3b00 FUN_1800d3b00 ===== */

void FUN_1800d3b00(longlong param_1,float *param_2,float *param_3,float param_4,float param_5)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float local_res10;
  float local_res14;
  float local_res18;
  float local_res1c;
  ulonglong in_stack_ffffffffffffff88;
  undefined4 uVar7;
  float *pfVar6;
  float *in_stack_ffffffffffffff90;
  undefined4 uVar9;
  undefined8 uVar8;
  undefined8 local_48;
  longlong local_40;
  
  fVar4 = param_3[1] - param_2[1];
  if (*param_3 - *param_2 <= param_3[1] - param_2[1]) {
    fVar4 = *param_3 - *param_2;
  }
  fVar5 = fVar4 * DAT_1808ac1f4;
  if (param_4 <= fVar4 * DAT_1808ac1f4) {
    fVar5 = param_4;
  }
  uVar2 = FUN_1800d39b0(DAT_1808ac34c,DAT_1808ac34c,DAT_1808ac34c,param_5 * DAT_1808ac21c);
  uVar3 = FUN_1800d39b0(0,0,0,param_5 * DAT_1808ac154);
  uVar7 = (undefined4)(in_stack_ffffffffffffff88 >> 0x20);
  if (DAT_1811079e0 != 0) {
    cVar1 = FUN_180369310();
    uVar7 = (undefined4)(in_stack_ffffffffffffff88 >> 0x20);
    uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffff90 >> 0x20);
    if (cVar1 != '\0') {
      if ((DAT_180cd0fdd != '\0') && (DAT_181107cd8 != 0)) {
        uVar8 = CONCAT44(uVar9,uVar2);
        in_stack_ffffffffffffff88 = in_stack_ffffffffffffff88 & 0xffffffff00000000;
        FUN_180369c70(param_1,param_2,param_3,fVar5,in_stack_ffffffffffffff88,uVar8,3,0);
        uVar9 = (undefined4)((ulonglong)uVar8 >> 0x20);
      }
      FUN_180369c70(param_1,param_2,param_3,fVar5,in_stack_ffffffffffffff88 & 0xffffffff00000000,
                    CONCAT44(uVar9,uVar3),2,0);
      return;
    }
  }
  if ((((DAT_180cd0fdd != '\0') && (DAT_181107cd8 != 0)) && (0.0 < DAT_1811079b0)) &&
     (0.0 < DAT_1811079b4)) {
    local_res10 = *param_3 / DAT_1811079b0;
    local_40 = DAT_181107cd8;
    in_stack_ffffffffffffff90 = &local_res10;
    local_48 = 0;
    local_res14 = param_3[1] / DAT_1811079b4;
    local_res18 = *param_2 / DAT_1811079b0;
    pfVar6 = &local_res18;
    local_res1c = param_2[1] / DAT_1811079b4;
    FUN_1803febc0(param_1,&local_48,param_2,param_3,pfVar6,in_stack_ffffffffffffff90,uVar2,fVar5);
    uVar7 = (undefined4)((ulonglong)pfVar6 >> 0x20);
  }
  if (((param_1 != 0) && (*param_2 < *param_3)) && ((param_2[1] < param_3[1] && (0xffffff < uVar3)))
     ) {
    fVar4 = 0.0;
    if (0.0 <= fVar5) {
      fVar4 = fVar5;
    }
    FUN_1803fe590(param_1,param_2,param_3,uVar3,CONCAT44(uVar7,fVar4),
                  (ulonglong)in_stack_ffffffffffffff90 & 0xffffffff00000000);
  }
  return;
}



