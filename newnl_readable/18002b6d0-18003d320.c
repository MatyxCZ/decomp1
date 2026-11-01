/* ===== 18002b6d0 FUN_18002b6d0 ===== */

void FUN_18002b6d0(undefined8 param_1,ulonglong param_2)

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
  
  plVar8 = DAT_180cc3fa8;
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
  FUN_180029d30(&DAT_180cc3fb8,2L << (bVar10 & 0x3f),DAT_180cc3fa8);
  DAT_180cc3fd0 = lVar11 - 1;
  DAT_180cc3fd8 = lVar11;
  plVar7 = (longlong *)*DAT_180cc3fa8;
  lVar11 = DAT_180cc3fb8;
joined_r0x00018002b74c:
  do {
    while( true ) {
      while( true ) {
        if (plVar7 == plVar8) {
          DAT_180cc3fb8 = lVar11;
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
                (ulonglong)*(byte *)((longlong)plVar7 + 0x17)) * 0x100000001b3 & DAT_180cc3fd0;
        plVar2 = *(longlong **)(lVar11 + uVar9 * 0x10);
        DAT_180cc3fb8 = lVar11;
        if (plVar2 != plVar8) break;
        *(longlong **)(lVar11 + uVar9 * 0x10) = plVar7;
        *(longlong **)(lVar11 + 8 + uVar9 * 0x10) = plVar7;
        plVar7 = plVar1;
        lVar11 = DAT_180cc3fb8;
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
      lVar11 = DAT_180cc3fb8;
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
        lVar11 = DAT_180cc3fb8;
        goto joined_r0x00018002b74c;
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
    lVar11 = DAT_180cc3fb8;
  } while( true );
}



/* ===== 18002b8d0 FUN_18002b8d0 ===== */

void FUN_18002b8d0(ulonglong *param_1,ulonglong param_2,longlong param_3,longlong param_4)

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
  if (uVar5 == 0) goto LAB_18002b92f;
  uVar2 = uVar5;
  if ((ulonglong)(((longlong)(param_1[2] - uVar5) >> 3) * 8) < 0x1000) {
LAB_18002b927:
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
      goto LAB_18002b927;
    }
  }
  *(undefined8 *)(puVar4 + -8) = 0x18002b92f;
  thunk_FUN_1803d64e0(uVar2);
LAB_18002b92f:
  *param_1 = param_2;
  param_1[1] = param_2 + param_3 * 8;
  param_1[2] = param_2 + param_4 * 8;
  return;
}



/* ===== 18002b950 FUN_18002b950 ===== */

void FUN_18002b950(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

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
  if (lVar3 == 0) goto LAB_18002b9d8;
  lVar2 = param_1[1];
  for (; lVar3 != lVar2; lVar3 = lVar3 + 0x20) {
    FUN_18000f890(lVar3);
  }
  lVar3 = *param_1;
  if ((param_1[2] - lVar3 & 0xffffffffffffffe0U) < 0x1000) {
LAB_18002b9d0:
    lVar2 = lVar3;
    puVar5 = puVar4;
  }
  else {
    lVar2 = *(longlong *)(lVar3 + -8);
    if (0x1f < (lVar3 - lVar2) - 8U) {
      pcVar1 = (code *)swi(0x29);
      lVar3 = (*pcVar1)(5);
      puVar4 = auStack_30;
      goto LAB_18002b9d0;
    }
  }
  *(undefined8 *)(puVar5 + -8) = 0x18002b9d8;
  thunk_FUN_1803d64e0(lVar2);
LAB_18002b9d8:
  *param_1 = param_2;
  param_1[1] = param_3 * 0x20 + param_2;
  param_1[2] = param_4 * 0x20 + param_2;
  return;
}



/* ===== 18002ba10 FUN_18002ba10 ===== */

bool FUN_18002ba10(undefined8 *param_1,undefined8 *param_2)

{
  size_t _Size;
  int iVar1;
  undefined8 *_Buf2;
  
  if ((ulonglong)param_2[3] < 0x10) {
    _Buf2 = param_2;
  }
  else {
    _Buf2 = (undefined8 *)*param_2;
  }
  _Size = param_1[2];
  if (0xf < (ulonglong)param_1[3]) {
    param_1 = (undefined8 *)*param_1;
  }
  if (_Size != param_2[2]) {
    return false;
  }
  if (_Size == 0) {
    return true;
  }
  iVar1 = memcmp(param_1,_Buf2,_Size);
  return iVar1 == 0;
}



/* ===== 18002ba60 FUN_18002ba60 ===== */

longlong * FUN_18002ba60(longlong *param_1,longlong *param_2)

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
  if (param_1 == param_2) {
    return param_1;
  }
  if ((ulonglong)param_1[3] < 0x10) goto LAB_18002bab8;
  lVar2 = *param_1;
  if (param_1[3] + 1U < 0x1000) {
LAB_18002baad:
    puVar4 = puVar3;
    lVar5 = lVar2;
  }
  else {
    lVar5 = *(longlong *)(lVar2 + -8);
    if (0x1f < (lVar2 - lVar5) - 8U) {
      pcVar1 = (code *)swi(0x29);
      lVar2 = (*pcVar1)(5);
      puVar3 = auStack_20;
      goto LAB_18002baad;
    }
  }
  *(undefined8 *)(puVar4 + -8) = 0x18002bab8;
  thunk_FUN_1803d64e0(lVar5);
LAB_18002bab8:
  param_1[3] = 0xf;
  param_1[2] = 0;
  *(undefined1 *)param_1 = 0;
  lVar2 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = lVar2;
  lVar2 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = lVar2;
  param_2[2] = 0;
  param_2[3] = 0xf;
  *(undefined1 *)param_2 = 0;
  return param_1;
}



/* ===== 18002bb00 FUN_18002bb00 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18002bb00(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_78;
  local_58 = *param_1;
  uStack_50 = param_1[1];
  local_48 = param_1[2];
  uStack_40 = param_1[3];
  *(undefined1 *)param_1 = 0;
  puVar1 = param_1 + 4;
  param_1[2] = 0;
  param_1[3] = 0xf;
  local_38 = *puVar1;
  local_20 = param_1[7];
  uStack_30 = param_1[5];
  uStack_28 = *(undefined4 *)(param_1 + 6);
  uStack_24 = *(undefined4 *)((longlong)param_1 + 0x34);
  *(undefined1 *)puVar1 = 0;
  param_1[6] = 0;
  param_1[7] = 0xf;
  FUN_18002ba60(*(undefined4 *)(param_1 + 5),param_2);
  FUN_18002ba60(puVar1,param_2 + 0x20);
  FUN_18002ba60(param_2,&local_58);
  FUN_18002ba60(param_2 + 0x20,&local_38);
  FUN_18000f890(&local_38);
  FUN_18000f890(&local_58);
  return;
}



/* ===== 18002bbe0 FUN_18002bbe0 ===== */

void FUN_18002bbe0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x20) {
    FUN_18000f890(lVar2);
  }
  return;
}



/* ===== 18002bc20 FUN_18002bc20 ===== */

void FUN_18002bc20(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 local_res8;
  
  if (*(ulonglong *)(param_1 + 0x10) != 0) {
    puVar1 = *(undefined8 **)(param_1 + 8);
    if (*(ulonglong *)(param_1 + 0x10) < *(ulonglong *)(param_1 + 0x38) >> 3) {
      FUN_18002bcf0(param_1,*puVar1,puVar1);
      return;
    }
    *(undefined8 *)puVar1[1] = 0;
    puVar1 = (undefined8 *)*puVar1;
    while (puVar1 != (undefined8 *)0x0) {
      puVar2 = (undefined8 *)*puVar1;
      FUN_18000f890(puVar1 + 2);
      thunk_FUN_1803d64e0(puVar1,0x38);
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



/* ===== 18002bcf0 FUN_18002bcf0 ===== */

longlong * FUN_18002bcf0(longlong param_1,longlong *param_2,longlong *param_3)

{
  byte *pbVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  
  if (param_2 == param_3) {
    return param_3;
  }
  plVar13 = param_2 + 2;
  lVar2 = *(longlong *)(param_1 + 0x18);
  puVar3 = *(undefined8 **)(param_1 + 8);
  puVar4 = (undefined8 *)param_2[1];
  if (0xf < (ulonglong)param_2[5]) {
    plVar13 = (longlong *)*plVar13;
  }
  uVar9 = 0;
  uVar10 = 0xcbf29ce484222325;
  if (param_2[4] != 0) {
    do {
      pbVar1 = (byte *)(uVar9 + (longlong)plVar13);
      uVar9 = uVar9 + 1;
      uVar10 = (uVar10 ^ *pbVar1) * 0x100000001b3;
    } while (uVar9 < (ulonglong)param_2[4]);
  }
  lVar6 = (*(ulonglong *)(param_1 + 0x30) & uVar10) * 0x10;
  plVar13 = *(longlong **)(lVar6 + lVar2);
  plVar7 = (longlong *)(lVar6 + 8 + lVar2);
  plVar5 = (longlong *)*plVar7;
  plVar11 = param_2;
  do {
    plVar12 = (longlong *)*plVar11;
    FUN_18000f890(plVar11 + 2);
    thunk_FUN_1803d64e0(plVar11,0x38);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
    if (plVar11 == plVar5) {
      if (plVar13 == param_2) {
        *(longlong *)(lVar6 + lVar2) = (longlong)puVar3;
        puVar8 = puVar3;
      }
      else {
        puVar8 = puVar4;
      }
      *plVar7 = (longlong)puVar8;
      while (plVar12 != param_3) {
        plVar13 = plVar12 + 2;
        if (0xf < (ulonglong)plVar12[5]) {
          plVar13 = (longlong *)*plVar13;
        }
        uVar9 = 0;
        uVar10 = 0xcbf29ce484222325;
        if (plVar12[4] != 0) {
          do {
            pbVar1 = (byte *)(uVar9 + (longlong)plVar13);
            uVar9 = uVar9 + 1;
            uVar10 = (uVar10 ^ *pbVar1) * 0x100000001b3;
          } while (uVar9 < (ulonglong)plVar12[4]);
        }
        uVar10 = *(ulonglong *)(param_1 + 0x30) & uVar10;
        plVar5 = *(longlong **)(lVar2 + 8 + uVar10 * 0x10);
        plVar13 = (longlong *)(lVar2 + uVar10 * 0x10);
        plVar11 = plVar12;
        while( true ) {
          plVar12 = (longlong *)*plVar11;
          FUN_18000f890(plVar11 + 2);
          thunk_FUN_1803d64e0(plVar11,0x38);
          *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
          if (plVar11 == plVar5) break;
          plVar11 = plVar12;
          if (plVar12 == param_3) {
            *plVar13 = (longlong)plVar12;
            goto LAB_18002bee1;
          }
        }
        *plVar13 = (longlong)puVar3;
        *(undefined8 **)(lVar2 + 8 + uVar10 * 0x10) = puVar3;
      }
      goto LAB_18002bee1;
    }
    plVar11 = plVar12;
  } while (plVar12 != param_3);
  if (plVar13 == param_2) {
    *(longlong *)(lVar6 + lVar2) = (longlong)plVar12;
  }
LAB_18002bee1:
  *puVar4 = plVar12;
  plVar12[1] = (longlong)puVar4;
  return param_3;
}



/* ===== 18002bf40 FUN_18002bf40 ===== */

void FUN_18002bf40(void)

{
  if ((DAT_180cc46f0 == '\0') && (DAT_1811089f0 != 0)) {
    DAT_180cc46f0 = '\x01';
    DAT_180cc46f4 = FUN_18038eaf0("C_BaseEntity","m_lifeState");
    DAT_180cc46f8 = FUN_18038eaf0("CCSWeaponBaseVData","m_WeaponType");
    DAT_180cc46fc = FUN_18038eaf0("C_CSWeaponBase","m_IronSightController");
    DAT_180cc4700 = FUN_18038eaf0("C_IronSightController","m_bIronSightAvailable");
    DAT_180cc4704 = FUN_18038eaf0("C_BasePlayerPawn","v_angle");
    DAT_180cc4708 = FUN_18038eaf0("CCSPlayerController","m_hObserverPawn");
    DAT_180cc470c = FUN_18038eaf0("C_BasePlayerPawn","m_pObserverServices");
    DAT_180cc4710 = FUN_18038eaf0("CPlayer_ObserverServices","m_iObserverMode");
    DAT_180cc4714 = FUN_18038eaf0("CPlayer_ObserverServices","m_hObserverTarget");
    DAT_180cc4718 = FUN_18038eaf0("CCSPlayerController","m_bFireBulletsSeedSynchronized");
    DAT_180cc471c = FUN_18038eaf0("CCSWeaponBaseVData","m_bShowCrosshair");
    if ((DAT_180cc46f8 == 0) || (DAT_180cc46f4 == 0)) {
      FUN_1802b2560("[error] hud | schema fields missing (m_WeaponType %u, m_lifeState %u)");
      return;
    }
  }
  return;
}



/* ===== 18002c0b0 FUN_18002c0b0 ===== */

longlong FUN_18002c0b0(void)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_res8 [4];
  
  if ((DAT_180cc4708 != 0) && (DAT_180cc470c != 0)) {
    if (DAT_180cd1304 == '\0') {
      FUN_1803a0b60(local_res8);
      lVar3 = local_res8[0];
    }
    else {
      lVar3 = DAT_181108a00;
    }
    if (lVar3 != 0) {
      uVar1 = FUN_180011200((ulonglong)DAT_180cc4708 + lVar3);
      FUN_1803a0940(local_res8,uVar1);
      if (local_res8[0] != 0) {
        lVar2 = FUN_18000f3a0((ulonglong)DAT_180cc470c + local_res8[0]);
        lVar3 = 0;
        if (lVar2 - 0x10000U < 0x7ffffffeffff) {
          lVar3 = lVar2;
        }
        return lVar3;
      }
    }
  }
  return 0;
}



/* ===== 18002c150 FUN_18002c150 ===== */

longlong * FUN_18002c150(longlong *param_1,longlong param_2)

{
  uint uVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  bool bVar6;
  longlong local_res8 [4];
  
  uVar3 = 0xffffffff;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x1c) = 0;
  if (param_2 == 0) {
    return param_1;
  }
  if (DAT_180cc46f4 == 0) {
    if ((DAT_180ca09f0 == 0) ||
       (iVar4 = FUN_180011200(param_2 + (ulonglong)DAT_180ca09f0), 999 < iVar4 - 1U)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
  }
  else {
    cVar2 = FUN_180011220(param_2 + (ulonglong)DAT_180cc46f4);
    bVar6 = cVar2 == '\0';
  }
  *(bool *)((longlong)param_1 + 0x1c) = bVar6;
  if (bVar6 != false) {
    local_res8[0] = param_2;
    lVar5 = FUN_1803a08e0(local_res8);
    *param_1 = lVar5;
    if ((lVar5 != 0) && (DAT_1809619a0 != 0)) {
      lVar5 = FUN_18000f3a0((ulonglong)DAT_1809619a0 + lVar5 + (ulonglong)DAT_1809619c0);
      if (0x7ffffffefffe < lVar5 - 0x10000U) {
        param_1[1] = 0;
        return param_1;
      }
      param_1[1] = lVar5;
      if (lVar5 != 0) {
        if (DAT_180cc46f8 != 0) {
          uVar3 = FUN_180011200((ulonglong)DAT_180cc46f8 + lVar5);
        }
        uVar1 = DAT_180cc46fc;
        *(undefined4 *)(param_1 + 3) = uVar3;
        if ((uVar1 != 0) && (DAT_180cc4700 != 0)) {
          cVar2 = FUN_180011220((ulonglong)DAT_180cc4700 + *param_1 + (ulonglong)uVar1);
          if (cVar2 != '\0') {
            param_1[2] = *param_1 + (ulonglong)uVar1;
          }
        }
        if (param_1[2] == 0) {
          if ((int)param_1[3] != 5) {
            return param_1;
          }
          if ((DAT_180ca0a28 != 0) &&
             (cVar2 = FUN_180011220(param_2 + (ulonglong)DAT_180ca0a28), cVar2 != '\0'))
          goto LAB_18002c29b;
        }
        else if ((DAT_1809619b8 != 0) &&
                (iVar4 = FUN_180011200((ulonglong)DAT_1809619b8 + *param_1), 0 < iVar4)) {
LAB_18002c29b:
          *(undefined1 *)((longlong)param_1 + 0x1d) = 1;
          return param_1;
        }
        *(undefined1 *)((longlong)param_1 + 0x1d) = 0;
      }
    }
  }
  return param_1;
}



/* ===== 18002c2e0 FUN_18002c2e0 ===== */

bool FUN_18002c2e0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 local_res10 [3];
  
  if (DAT_180cd1304 == '\0') {
    FUN_1803a0b60(local_res10);
    DAT_181108a00 = local_res10[0];
    DAT_1811089f8 = FUN_1803a0c50(local_res10);
    DAT_180cd1304 = '\x01';
  }
  if ((DAT_1811089f8 != 0) && (param_1 == DAT_1811089f8)) {
    return DAT_180ccf984 == '\0';
  }
  lVar2 = FUN_18002c0b0();
  if ((lVar2 == 0) || (DAT_180cc4710 == 0)) {
    return false;
  }
  iVar1 = FUN_180011200((ulonglong)DAT_180cc4710 + lVar2);
  return iVar1 == 2;
}



/* ===== 18002c380 FUN_18002c380 ===== */

undefined8 FUN_18002c380(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  if (*(longlong **)(param_1 + 8) == (longlong *)0x0) {
    uVar1 = 0;
  }
  else {
    plVar2 = (longlong *)(**(code **)(**(longlong **)(param_1 + 8) + 0x238))();
    uVar1 = 0;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0xa8))(plVar2,param_2);
      uVar1 = 1;
    }
  }
  return uVar1;
}



/* ===== 18002c3d0 FUN_18002c3d0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18002c3d0(longlong *param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  undefined1 uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint local_res10 [2];
  undefined1 local_38 [32];
  
  FUN_18002bf40();
  if ((((DAT_180cc46f8 != 0) &&
       ((((DAT_18095d371._3_1_ != '\0' || (DAT_18095d371._4_1_ != '\0')) ||
         ((char)DAT_18095d371 != '\0')) ||
        ((DAT_18095d371._1_1_ != '\0' || (DAT_18095d371._2_1_ != '\0')))))) &&
      (lVar7 = FUN_1800305a0(), lVar7 != 0)) &&
     (lVar8 = FUN_18002c150(local_38,lVar7), *(char *)(lVar8 + 0x1c) != '\0')) {
    lVar3 = *(longlong *)(lVar8 + 8);
    iVar2 = *(int *)(lVar8 + 0x18);
    if (lVar3 != 0) {
      if ((DAT_18095d371._3_1_ == '\0') || (iVar2 != 0)) {
        if ((DAT_18095d371._4_1_ == '\0') || (iVar2 != 9)) {
          if ((((char)DAT_18095d371 != '\0') || (DAT_18095d371._1_1_ != '\0')) ||
             (DAT_18095d371._2_1_ != '\0')) {
            lVar4 = *(longlong *)(lVar8 + 0x10);
            cVar1 = *(char *)(lVar8 + 0x1d);
            cVar5 = DAT_18095d371._2_1_;
            if ((((iVar2 == 7) || ((iVar2 == 5 && (cVar5 = (char)DAT_18095d371, cVar1 == '\0')))) &&
                (cVar5 != '\0')) ||
               (((DAT_18095d371._1_1_ != '\0' && (cVar1 != '\0')) &&
                ((lVar4 == 0 ||
                 ((cVar5 = FUN_18002c2e0(lVar7), cVar5 == '\0' || (DAT_18095d2d0 != 0)))))))) {
              uVar9 = (ulonglong)DAT_180cc46f8;
              local_res10[0] = 1;
              *param_1 = uVar9 + lVar3;
              *(int *)(param_1 + 1) = iVar2;
              FUN_180013280(uVar9 + lVar3,local_res10);
              if ((cVar1 != '\0') && (lVar4 != 0)) {
                param_1[2] = (ulonglong)DAT_180cc4700 + lVar4;
                uVar6 = FUN_180011220();
                *(undefined1 *)(param_1 + 3) = uVar6;
                local_res10[0] = local_res10[0] & 0xffffff00;
                FUN_1800233d0(param_1[2],local_res10);
              }
            }
          }
        }
        else {
          uVar9 = (ulonglong)DAT_180cc46f8;
          local_res10[0] = 7;
          *param_1 = uVar9 + lVar3;
          *(undefined4 *)(param_1 + 1) = 9;
          FUN_180013280(uVar9 + lVar3,local_res10);
        }
      }
      else {
        uVar9 = (ulonglong)DAT_180cc46f8;
        local_res10[0] = 7;
        *param_1 = uVar9 + lVar3;
        *(undefined4 *)(param_1 + 1) = 0;
        FUN_180013280(uVar9 + lVar3,local_res10);
      }
    }
  }
  return;
}



/* ===== 18002c5c0 FUN_18002c5c0 ===== */

undefined8 FUN_18002c5c0(longlong param_1,longlong param_2)

{
  int iVar1;
  char cVar2;
  
  if (((((DAT_18095d371._3_1_ != '\0') || ((char)DAT_18095d371._4_4_ != '\0')) ||
       ((char)DAT_18095d371 != '\0')) ||
      ((DAT_18095d371._1_1_ != '\0' || (DAT_18095d371._2_1_ != '\0')))) &&
     ((param_1 != 0 && ((*(char *)(param_2 + 0x1c) != '\0' && (*(longlong *)(param_2 + 8) != 0))))))
  {
    iVar1 = *(int *)(param_2 + 0x18);
    if (((DAT_18095d371._3_1_ != '\0') && (iVar1 == 0)) ||
       (((char)DAT_18095d371._4_4_ != '\0' && (iVar1 == 9)))) {
      return 0;
    }
    if (iVar1 == 7) {
      if (DAT_18095d371._2_1_ != '\0') {
        return 1;
      }
      cVar2 = *(char *)(param_2 + 0x1d);
    }
    else {
      cVar2 = *(char *)(param_2 + 0x1d);
      if (((iVar1 == 5) && (cVar2 == '\0')) && ((char)DAT_18095d371 != '\0')) {
        return 1;
      }
    }
    if ((DAT_18095d371._1_1_ != '\0') && (cVar2 != '\0')) {
      if ((*(longlong *)(param_2 + 0x10) == 0) ||
         ((cVar2 = FUN_18002c2e0(param_1), cVar2 == '\0' || (DAT_18095d2d0 != 0)))) {
        return 1;
      }
      return 0xffffffff;
    }
  }
  return 0xffffffff;
}



/* ===== 18002c6a0 FUN_18002c6a0 ===== */

void FUN_18002c6a0(longlong param_1)

{
  bool bVar1;
  float fVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong uVar15;
  char cVar16;
  bool bVar17;
  undefined1 local_res18 [8];
  
  cVar3 = FUN_18004d750();
  iVar5 = FUN_180011200(param_1 + 0x58);
  lVar7 = FUN_18000f3a0(param_1 + 0x60);
  lVar8 = FUN_18000f3a0(param_1 + 0x78);
  if (((iVar5 - 1U < 0x40) && (lVar7 != 0)) && (lVar8 != 0)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  lVar7 = FUN_1800305a0();
  fVar2 = DAT_1808ac1f4;
  uVar15 = 0;
  do {
    cVar16 = '\0';
    lVar12 = 0;
    if ((bVar1) && ((int)uVar15 < iVar5)) {
      lVar9 = FUN_18000f3a0(lVar8 + 0x10 + uVar15 * 0x70);
      iVar6 = FUN_180011200();
      if (iVar6 == -1) {
        lVar13 = 0;
      }
      else {
        plVar10 = (longlong *)FUN_1803a0940(local_res18,iVar6);
        lVar13 = *plVar10;
      }
      lVar12 = lVar9;
      if (((lVar9 == 0) || (lVar11 = FUN_18000f3a0(), lVar11 == 0)) ||
         ((lVar13 == 0 || (lVar7 == 0)))) goto LAB_18002c863;
      if (DAT_180cc46f4 == 0) {
        if ((DAT_180ca09f0 == 0) || (iVar6 = FUN_180011200(), 999 < iVar6 - 1U)) {
          bVar17 = false;
        }
        else {
          bVar17 = true;
        }
      }
      else {
        cVar4 = FUN_180011220();
        bVar17 = cVar4 == '\0';
      }
      if (!bVar17) goto LAB_18002c863;
      if (lVar13 == lVar7) {
        cVar16 = DAT_18095cf8c;
      }
      else {
        cVar4 = FUN_1800307b0(lVar13,lVar7);
        cVar16 = cVar3;
        if (cVar4 != '\0') {
          cVar16 = DAT_18095cf8d;
        }
      }
      if ((cVar16 != '\0') || (cVar4 = FUN_18008f330(), cVar4 == '\0')) goto LAB_18002c863;
      FUN_18002c380(lVar9,DAT_180963598 * fVar2);
      lVar12 = 0;
    }
    else {
LAB_18002c863:
      if (cVar16 == '\0') {
        if ((((&DAT_180cc4390)[uVar15] != 0) && (lVar12 == (&DAT_180cc4390)[uVar15])) ||
           (((&DAT_180cc4930)[uVar15] != 0 && (lVar12 == (&DAT_180cc4930)[uVar15])))) {
          FUN_18002c380();
        }
        lVar12 = 0;
      }
      else {
        FUN_18002c380(lVar12);
      }
      lVar9 = 0;
    }
    (&DAT_180cc4930)[uVar15] = lVar9;
    (&DAT_180cc4390)[uVar15] = lVar12;
    uVar14 = (int)uVar15 + 1;
    uVar15 = (ulonglong)uVar14;
    if (0x3f < (int)uVar14) {
      return;
    }
  } while( true );
}



/* ===== 18002c900 FUN_18002c900 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_18002c900(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  char cVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong local_98;
  ulonglong uStack_90;
  longlong local_88;
  ulonglong uStack_80;
  undefined1 local_78 [88];
  
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + 1;
  UNLOCK();
  FUN_18002bf40();
  uVar7 = FUN_1800305a0();
  plVar8 = (longlong *)FUN_18002c150(local_78,uVar7);
  lVar1 = *plVar8;
  uVar2 = plVar8[1];
  lVar3 = plVar8[2];
  uVar4 = plVar8[3];
  uStack_90 = uVar2;
  uStack_80 = uVar4;
  if (DAT_180cc46f8 == 0) {
    DAT_180962b58 = 0xffffffff;
  }
  else {
    local_98 = lVar1;
    local_88 = lVar3;
    DAT_180962b58 = FUN_18002c5c0(uVar7,&local_98);
  }
  DAT_180ca0e5d = 1;
  local_98 = 0;
  uStack_90 = uStack_90 & 0xffffffff00000000;
  local_88 = 0;
  uStack_80 = uStack_80 & 0xffffffffffffff00;
  _DAT_180962b38 = lVar1;
  DAT_180962b40 = uVar2;
  DAT_180962b48 = lVar3;
  _DAT_180962b50 = uVar4;
  FUN_18002c3d0(&local_98);
  cVar5 = FUN_18004d750();
  if ((cVar5 != '\0') && (DAT_180ca15ba != '\0')) {
    cVar5 = FUN_180044350();
    if (cVar5 != '\0') {
      if (DAT_180962d68 == 0) {
        if (DAT_180962d70 == '\0') {
          DAT_180962d68 = FUN_180264b70(PTR_s_mp_forcecamera_180962d60);
          DAT_180962d70 = DAT_180962d68 == 0;
          if (DAT_180962d68 == 0) {
            FUN_1802b2560("[error] nl_view | convar %s not found",PTR_s_mp_forcecamera_180962d60);
          }
        }
        if (DAT_180962d68 == 0) goto LAB_18002ca53;
      }
      lVar1 = DAT_180962d68;
      uVar6 = FUN_1800441b0();
      cVar5 = FUN_180044220(lVar1,0);
      if (cVar5 != '\0') {
        uVar7 = (*DAT_180cc45c8)(param_1,param_2);
        FUN_1800442d0(uVar6);
        goto LAB_18002ca62;
      }
    }
  }
LAB_18002ca53:
  uVar7 = (*DAT_180cc45c8)(param_1,param_2);
LAB_18002ca62:
  if (local_88 != 0) {
    FUN_1800233d0(local_88,&uStack_80);
  }
  if (local_98 != 0) {
    FUN_180013280(local_98,&uStack_90);
  }
  DAT_180ca0e5d = 0;
  FUN_18002c6a0(param_1);
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + -1;
  UNLOCK();
  return uVar7;
}



/* ===== 18002cac0 FUN_18002cac0 ===== */

undefined8 FUN_18002cac0(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x178))();
  uVar2 = 0;
  if (plVar1 != (longlong *)0x0) {
    plVar1 = (longlong *)(**(code **)(*plVar1 + 0x238))(plVar1);
    uVar2 = 0;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0xa8))(plVar1,param_3);
      uVar2 = 1;
    }
  }
  return uVar2;
}



/* ===== 18002cb10 FUN_18002cb10 ===== */

void FUN_18002cb10(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  uint local_res10 [2];
  undefined8 local_38;
  undefined4 local_30;
  undefined1 local_28 [16];
  
  lVar3 = FUN_18000f3a0(param_2 + 0x10);
  if (0x7ffffffefffe < lVar3 - 0x10000U) {
    return;
  }
  uVar2 = FUN_180011200(lVar3 + 0x10);
  param_1 = param_1 + (ulonglong)(uVar2 >> 3 & 0xffc);
  local_res10[0] = FUN_180011200(param_1 + 0x17614);
  local_res10[0] = local_res10[0] | 1 << (uVar2 & 0x1f);
  FUN_180013280(param_1 + 0x17614,local_res10);
  uVar2 = FUN_180011200(lVar3 + 0x30);
  iVar1 = DAT_180cc45e8;
  if ((-1 < (char)uVar2) && (lVar5 = (longlong)DAT_180cc45e8, DAT_180cc45e8 < 0x4c)) {
    local_res10[0] = uVar2 | 0x80;
    FUN_180013280(lVar3 + 0x30,local_res10);
    DAT_180cc45e8 = iVar1 + 1;
    (&DAT_180cc4130)[lVar5] = lVar3;
  }
  if ((((param_2 == 0) || (DAT_180ca09f8 == 0)) ||
      (lVar3 = FUN_18000f3a0(param_2 + (ulonglong)DAT_180ca09f8), lVar3 == 0)) ||
     (DAT_180ca0950 == 0)) {
    local_38 = 0;
    local_30 = 0;
  }
  else {
    puVar4 = (undefined8 *)FUN_1800111b0(local_28,lVar3 + (ulonglong)DAT_180ca0950);
    local_38 = *puVar4;
    local_30 = *(undefined4 *)(puVar4 + 1);
  }
  FUN_180023a50(param_3 + 0x110,&local_38);
  return;
}



/* ===== 18002cc60 FUN_18002cc60 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18002cc60(longlong param_1)

{
  char cVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  char *pcVar14;
  undefined **ppuVar15;
  int iVar16;
  longlong lVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  int local_res10;
  undefined4 uStackX_14;
  longlong local_res18;
  longlong local_res20;
  undefined1 local_88 [72];
  
  FUN_18002bf40();
  if ((DAT_180cc45a0 == '\0') && (DAT_1811089f0 != 0)) {
    DAT_180cc45a0 = '\x01';
    DAT_180cc45a4 = FUN_18038eaf0("EntitySpottedState_t","m_bSpotted");
    DAT_180cc45a8 = FUN_18038eaf0("C_Hostage","m_entitySpottedState");
    DAT_180cc45ac = FUN_18038eaf0("C_CSGameRules","m_fRoundStartTime");
  }
  cVar1 = DAT_18095d2cd;
  cVar3 = DAT_18095d2cc;
  DAT_180cc45e8 = 0;
  lVar8 = FUN_180266660();
  if (((lVar8 == 0) || (DAT_180cc45ac == 0)) ||
     (fVar18 = (float)FUN_18000f3d0((ulonglong)DAT_180cc45ac + lVar8), fVar18 == _DAT_180962608)) {
    if (DAT_180ca0e5b != '\0') goto LAB_18002cdc1;
  }
  else {
    DAT_180ca0e5a = '\x01';
    DAT_180ca0e59 = '\x01';
    _DAT_180962608 = fVar18;
  }
  _DAT_180cc45f0 = _DAT_1808adef0;
  uRam0000000180cc45f8 = _UNK_1808adef8;
  _DAT_180cc4600 = _DAT_1808adef0;
  uRam0000000180cc4608 = _UNK_1808adef8;
  _DAT_180cc4610 = _DAT_1808adef0;
  uRam0000000180cc4618 = _UNK_1808adef8;
  _DAT_180cc4620 = _DAT_1808adef0;
  uRam0000000180cc4628 = _UNK_1808adef8;
  _DAT_180cc4630 = _DAT_1808adef0;
  uRam0000000180cc4638 = _UNK_1808adef8;
  _DAT_180cc4640 = _DAT_1808adef0;
  uRam0000000180cc4648 = _UNK_1808adef8;
  _DAT_180cc4650 = _DAT_1808adef0;
  uRam0000000180cc4658 = _UNK_1808adef8;
  _DAT_180cc4660 = _DAT_1808adef0;
  uRam0000000180cc4668 = _UNK_1808adef8;
  _DAT_180cc4670 = _DAT_1808adef0;
  uRam0000000180cc4678 = _UNK_1808adef8;
  _DAT_180cc4680 = _DAT_1808adef0;
  uRam0000000180cc4688 = _UNK_1808adef8;
  _DAT_180cc4690 = _DAT_1808adef0;
  uRam0000000180cc4698 = _UNK_1808adef8;
  _DAT_180cc46a0 = _DAT_1808adef0;
  uRam0000000180cc46a8 = _UNK_1808adef8;
  _DAT_180cc46b0 = _DAT_1808adef0;
  uRam0000000180cc46b8 = _UNK_1808adef8;
  _DAT_180cc46c0 = _DAT_1808adef0;
  uRam0000000180cc46c8 = _UNK_1808adef8;
  _DAT_180cc46d0 = _DAT_1808adef0;
  uRam0000000180cc46d8 = _UNK_1808adef8;
  _DAT_180cc46e0 = _DAT_1808adef0;
  uRam0000000180cc46e8 = _UNK_1808adef8;
  DAT_180ca0e5b = '\x01';
LAB_18002cdc1:
  if (DAT_180cd1304 == '\0') {
    FUN_1803a0b60(&local_res10);
    DAT_181108a00 = CONCAT44(uStackX_14,local_res10);
    DAT_1811089f8 = FUN_1803a0c50(&local_res10);
    DAT_180cd1304 = '\x01';
  }
  if ((DAT_1811089f8 != 0) &&
     (((cVar3 != '\0' || cVar1 != '\0' || (DAT_180ca0e59 != '\0')) || (DAT_180ca0e5a != '\0')))) {
    lVar8 = FUN_18000f3a0();
    if (lVar8 == 0) {
      pcVar14 = (char *)0x0;
    }
    else {
      lVar8 = FUN_18000f3a0();
      if (lVar8 == 0) {
        pcVar14 = (char *)0x0;
      }
      else {
        lVar8 = FUN_18000f3a0();
        if (lVar8 == 0) {
          pcVar14 = (char *)0x0;
        }
        else {
          pcVar14 = (char *)FUN_18000f3a0((ulonglong)DAT_180961974 + lVar8);
          if ((char *)0x7ffffffefffe < pcVar14 + -0x10000) {
            pcVar14 = (char *)0x0;
          }
        }
      }
    }
    fVar18 = DAT_1808ac34c;
    if (((DAT_18094f760 == '\0') || (pcVar14 == (char *)0x0)) ||
       (iVar4 = strcmp(pcVar14,"C_CSObserverPawn"), iVar4 == 0)) {
      fVar20 = DAT_1808ac254;
    }
    else {
      fVar20 = fVar18;
    }
    local_res20 = FUN_1800305a0();
    if ((cVar3 != '\0') || (DAT_180ca0e59 != '\0')) {
      local_res10 = FUN_180011200(param_1 + 0x3c8);
      if (0x3f < local_res10) {
        local_res10 = 0x3f;
      }
      iVar16 = 0;
      iVar4 = local_res10;
      if (-1 < local_res10) {
        do {
          lVar17 = (longlong)iVar16;
          lVar8 = lVar17 * 0x180 + param_1;
          lVar9 = FUN_18000f3a0(lVar8 + 0x3e0);
          if (lVar9 != 0) {
            uVar10 = FUN_180011220(param_1 + 0x55c + lVar17 * 0x180);
            if ((uVar10 & 1) != 0) {
              uVar7 = iVar16 + 1;
              if (-1 < (int)uVar7) {
                lVar11 = FUN_18000f3a0(DAT_1809619d0);
                if (lVar11 != 0) {
                  lVar11 = FUN_18000f3a0((ulonglong)DAT_180961940 +
                                         lVar11 + (ulonglong)
                                                  (uint)(((int)uVar7 >> 9) * DAT_180961944));
                  if (lVar11 - 0x10000U < 0xfffffffffffeffff) {
                    lVar11 = FUN_18000f3a0((ulonglong)((uVar7 & 0x1ff) * DAT_180961948) + lVar11);
                    if (lVar11 - 0x10000U < 0xfffffffffffeffff) {
                      lVar12 = FUN_18000f3a0();
                      if (lVar12 == 0) {
                        pcVar14 = (char *)0x0;
                      }
                      else {
                        lVar12 = FUN_18000f3a0();
                        if (lVar12 == 0) {
                          pcVar14 = (char *)0x0;
                        }
                        else {
                          lVar12 = FUN_18000f3a0();
                          if (lVar12 == 0) {
                            pcVar14 = (char *)0x0;
                          }
                          else {
                            pcVar14 = (char *)FUN_18000f3a0((ulonglong)DAT_180961974 + lVar12);
                            if ((char *)0x7ffffffefffe < pcVar14 + -0x10000) {
                              pcVar14 = (char *)0x0;
                            }
                          }
                        }
                      }
                      if (pcVar14 != (char *)0x0) {
                        iVar5 = strcmp(pcVar14,"CCSPlayerController");
                        if (iVar5 == 0) {
                          if (DAT_180ca09fc != 0) {
                            uVar6 = FUN_180011200(lVar11 + (ulonglong)DAT_180ca09fc);
                            plVar13 = (longlong *)FUN_1803a0940(local_88,uVar6);
                            lVar11 = *plVar13;
                            if (lVar11 != 0) {
                              local_res18 = lVar11;
                              pcVar14 = (char *)FUN_1803a0710(&local_res18);
                              if (pcVar14 != (char *)0x0) {
                                iVar5 = strcmp(pcVar14,"C_CSPlayerPawn");
                                if (iVar5 == 0) {
                                  fVar19 = fVar18;
                                  if ((cVar3 != '\0') &&
                                     ((((local_res20 == 0 ||
                                        (cVar2 = FUN_1800307b0(lVar11,local_res20), cVar2 == '\0'))
                                       && (DAT_180ca0a24 != 0)) &&
                                      ((DAT_180cc45a4 != 0 &&
                                       (cVar2 = FUN_180011220((ulonglong)DAT_180ca0a24 +
                                                              (ulonglong)DAT_180cc45a4 + lVar11),
                                       cVar2 == '\0')))))) {
                                    FUN_18002cb10(param_1 + -0x20,lVar11,lVar8 + 0x3e0);
                                    fVar19 = fVar20;
                                  }
                                  lVar8 = FUN_18000f3a0(lVar9 + 8);
                                  if (lVar8 != 0) {
                                    if (lVar8 != (&DAT_180cc4720)[lVar17]) {
                                      (&DAT_180cc4720)[lVar17] = lVar8;
                                      (&DAT_180cc45f0)[lVar17] = 0xbf800000;
                                    }
                                    if (fVar19 != (float)(&DAT_180cc45f0)[lVar17]) {
                                      (&DAT_180cc45f0)[lVar17] = fVar19;
                                      ppuVar15 = &PTR_s_EnemyOnMap_180594230;
                                      do {
                                        FUN_18002cac0(lVar8,*ppuVar15,fVar19);
                                        ppuVar15 = ppuVar15 + 1;
                                      } while (ppuVar15 != &PTR_s_health_bar_180594250);
                                      iVar4 = local_res10;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          iVar16 = iVar16 + 1;
        } while (iVar16 <= iVar4);
      }
      DAT_180ca0e59 = cVar3;
    }
    if (((cVar1 != '\0') && (DAT_180cc45a8 != 0)) && (DAT_180cc45a4 != 0)) {
      iVar4 = FUN_180011200(param_1 + 0x3cc);
      if (0xb < iVar4) {
        iVar4 = 0xb;
      }
      iVar16 = 0;
      if (-1 < iVar4) {
        do {
          lVar9 = (longlong)iVar16 * 0x180;
          lVar8 = FUN_18000f3a0(lVar9 + param_1 + 0x63e0);
          if (((lVar8 != 0) && (uVar10 = FUN_180011220(param_1 + 0x655c + lVar9), (uVar10 & 1) != 0)
              ) && (uVar7 = FUN_180011200(param_1 + 0x6538 + lVar9), uVar7 >> 1 != 0x7fffffff)) {
            FUN_1803a0940(&local_res10,uVar7);
            lVar8 = CONCAT44(uStackX_14,local_res10);
            if (lVar8 != 0) {
              lVar17 = FUN_18000f3a0();
              if (lVar17 == 0) {
                pcVar14 = (char *)0x0;
              }
              else {
                lVar17 = FUN_18000f3a0();
                if (lVar17 == 0) {
                  pcVar14 = (char *)0x0;
                }
                else {
                  lVar17 = FUN_18000f3a0();
                  if (lVar17 == 0) {
                    pcVar14 = (char *)0x0;
                  }
                  else {
                    pcVar14 = (char *)FUN_18000f3a0((ulonglong)DAT_180961974 + lVar17);
                    if ((char *)0x7ffffffefffe < pcVar14 + -0x10000) {
                      pcVar14 = (char *)0x0;
                    }
                  }
                }
              }
              if (((pcVar14 != (char *)0x0) && (iVar5 = strcmp(pcVar14,"C_Hostage"), iVar5 == 0)) &&
                 (cVar3 = FUN_180011220((ulonglong)DAT_180cc45a4 + (ulonglong)DAT_180cc45a8 + lVar8)
                 , cVar3 == '\0')) {
                FUN_18002cb10(param_1 + -0x20,lVar8,lVar9 + param_1 + 0x63e0);
              }
            }
          }
          iVar16 = iVar16 + 1;
        } while (iVar16 <= iVar4);
      }
    }
    DAT_180ca0e5a = cVar1;
  }
  return;
}



/* ===== 18002d3e0 FUN_18002d3e0 ===== */

void FUN_18002d3e0(longlong param_1)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  longlong lVar8;
  char *_Str1;
  longlong lVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong *plVar13;
  ulonglong uVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  ulonglong uVar18;
  byte bVar19;
  longlong lVar20;
  ulonglong uVar21;
  undefined4 unaff_XMM6_Da;
  uint uVar22;
  undefined4 unaff_XMM6_Db;
  undefined4 unaff_XMM6_Dc;
  undefined4 unaff_XMM6_Dd;
  uint local_res10;
  undefined4 uStackX_14;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [24];
  undefined8 local_78;
  undefined4 local_70;
  longlong *local_68;
  longlong *local_60;
  longlong local_58;
  
  if ((DAT_180cc4b40 == '\0') && (DAT_1811089f0 != 0)) {
    DAT_180cc4b40 = '\x01';
    DAT_180cc4b44 = FUN_18038eaf0("C_CSGameRules","m_bMapHasBombTarget");
    DAT_180cc4b48 = FUN_18038eaf0("C_BaseEntity","m_pGameSceneNode");
    DAT_180cc4b4c = FUN_18038eaf0("CGameSceneNode","m_pParent");
    DAT_180cc4b50 = FUN_18038eaf0("CGameSceneNode","m_pOwner");
    DAT_180cc4b54 = FUN_18038eaf0("C_PlantedC4","m_bBombDefused");
    DAT_180cc4b58 = FUN_18038eaf0("C_PlantedC4");
  }
  if (DAT_18095d2ce == '\0') {
    return;
  }
  if (DAT_180cc4b44 == 0) {
    return;
  }
  if (DAT_180cc4b48 == 0) {
    return;
  }
  lVar8 = FUN_180266660();
  if (lVar8 == 0) {
    return;
  }
  cVar4 = FUN_180011220((ulonglong)DAT_180cc4b44 + lVar8);
  if (cVar4 == '\0') {
    return;
  }
  if (DAT_180cd1304 == '\0') {
    FUN_1803a0b60(&local_res10);
    DAT_181108a00 = CONCAT44(uStackX_14,local_res10);
    DAT_1811089f8 = FUN_1803a0c50(&local_res10);
    DAT_180cd1304 = '\x01';
  }
  if (DAT_1811089f8 == 0) {
    return;
  }
  if (DAT_180ca09f4 == 0) {
    return;
  }
  cVar4 = FUN_180011220((ulonglong)DAT_180ca09f4 + DAT_1811089f8);
  if (cVar4 != '\x03') {
    return;
  }
  bVar5 = FUN_180011220(param_1 + 0x17606);
  bVar6 = FUN_180011220(param_1 + 0x17607);
  lVar8 = 0;
  lVar20 = 0;
  FUN_1803a09f0(&local_68);
  puVar15 = auStack_98;
  puVar16 = auStack_98;
  plVar11 = local_68;
  if (local_68 != local_60) {
    do {
      _Str1 = (char *)FUN_1803a0710(plVar11);
      if (_Str1 != (char *)0x0) {
        if (lVar8 == 0) {
          lVar9 = 0;
          do {
            lVar12 = lVar9 + 1;
            if (_Str1[lVar9] != (&DAT_1806d4100)[lVar9]) goto LAB_18002d616;
            lVar9 = lVar12;
          } while (lVar12 != 5);
          lVar9 = FUN_18000f3a0(*plVar11 + 0x10);
          if ((lVar9 != 0) && (iVar7 = FUN_180011200(lVar9 + 0x38), iVar7 == 0)) {
            lVar8 = *plVar11;
            goto LAB_18002d631;
          }
        }
LAB_18002d616:
        if ((lVar20 == 0) && (iVar7 = strcmp(_Str1,"C_PlantedC4"), iVar7 == 0)) {
          lVar20 = *plVar11;
        }
      }
LAB_18002d631:
      plVar11 = plVar11 + 1;
    } while (plVar11 != local_60);
  }
  puVar17 = auStack_98;
  if (local_68 != (longlong *)0x0) {
    plVar11 = local_68;
    if ((ulonglong)((local_58 - (longlong)local_68 >> 3) * 8) < 0x1000) {
LAB_18002d67d:
      puVar16 = puVar15;
    }
    else {
      plVar11 = (longlong *)local_68[-1];
      plVar13 = (longlong *)((longlong)local_68 + (-8 - (longlong)plVar11));
      if (&DAT_0000001f < plVar13) {
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        puVar15 = auStack_90;
        plVar11 = plVar13;
        goto LAB_18002d67d;
      }
    }
    *(undefined8 *)(puVar16 + -8) = 0x18002d685;
    thunk_FUN_1803d64e0(plVar11);
    puVar17 = puVar16;
  }
  uVar3 = DAT_180ca09f8;
  uVar2 = DAT_180ca0950;
  uVar18 = (ulonglong)DAT_180ca09f8;
  uVar21 = (ulonglong)DAT_180ca0950;
  bVar6 = bVar6 & 0xfe;
  bVar5 = bVar5 & 0x87;
  *(undefined4 *)(puVar17 + 0x50) = unaff_XMM6_Da;
  *(undefined4 *)(puVar17 + 0x54) = unaff_XMM6_Db;
  *(undefined4 *)(puVar17 + 0x58) = unaff_XMM6_Dc;
  *(undefined4 *)(puVar17 + 0x5c) = unaff_XMM6_Dd;
  uVar22 = 0;
  if (lVar8 != 0) {
    bVar6 = bVar6 | 1;
    *(undefined8 *)(puVar17 + -8) = 0x18002d6bc;
    lVar9 = FUN_18000f3a0(lVar8 + 0x10);
    if (lVar9 == 0) {
      local_res10 = 0xffffffff;
    }
    else {
      *(undefined8 *)(puVar17 + -8) = 0x18002d6ca;
      local_res10 = FUN_180011200(lVar9 + 0x10);
      local_res10 = local_res10 & 0x7fff;
    }
    *(undefined8 *)(puVar17 + -8) = 0x18002d6ed;
    FUN_180013280(param_1 + 0x17608,&local_res10);
    *(undefined8 *)(puVar17 + -8) = 0x18002d6fb;
    lVar9 = FUN_18000f3a0((ulonglong)DAT_180cc4b48 + lVar8);
    if (((lVar9 == 0) || (DAT_180cc4b4c == 0)) ||
       (uVar14 = (ulonglong)DAT_180cc4b50, DAT_180cc4b50 == 0)) {
LAB_18002d7d6:
      bVar5 = bVar5 | 0x10;
      if (uVar3 == 0) {
LAB_18002d80f:
        local_78 = 0;
        local_70 = 0;
      }
      else {
        *(undefined8 *)(puVar17 + -8) = 0x18002d7e7;
        lVar8 = FUN_18000f3a0(lVar8 + uVar18);
        if ((lVar8 == 0) || (uVar2 == 0)) goto LAB_18002d80f;
        *(undefined8 *)(puVar17 + -8) = 0x18002d7fe;
        puVar10 = (undefined8 *)FUN_1800111b0(&local_68,lVar8 + uVar21);
        local_78 = *puVar10;
        local_70 = *(undefined4 *)(puVar10 + 1);
      }
      *(undefined8 *)(puVar17 + -8) = 0x18002d832;
      FUN_180023a50(param_1 + 0x240,&local_78);
      local_res10 = 0xffffffff;
    }
    else {
      *(undefined8 *)(puVar17 + -8) = 0x18002d728;
      lVar9 = FUN_18000f3a0((ulonglong)DAT_180cc4b4c + lVar9);
      if (lVar9 == 0) goto LAB_18002d7d6;
      *(undefined8 *)(puVar17 + -8) = 0x18002d73a;
      lVar9 = FUN_18000f3a0(lVar9 + uVar14);
      if (lVar9 == 0) goto LAB_18002d7d6;
      if (uVar3 == 0) {
LAB_18002d77b:
        local_78 = 0;
        local_70 = 0;
      }
      else {
        *(undefined8 *)(puVar17 + -8) = 0x18002d753;
        lVar8 = FUN_18000f3a0(lVar9 + uVar18);
        if ((lVar8 == 0) || (uVar2 == 0)) goto LAB_18002d77b;
        *(undefined8 *)(puVar17 + -8) = 0x18002d76a;
        puVar10 = (undefined8 *)FUN_1800111b0(&local_68,lVar8 + uVar21);
        local_78 = *puVar10;
        local_70 = *(undefined4 *)(puVar10 + 1);
      }
      *(undefined8 *)(puVar17 + -8) = 0x18002d79e;
      FUN_180023a50(param_1 + 0x240,&local_78);
      *(undefined8 *)(puVar17 + -8) = 0x18002d7a7;
      lVar8 = FUN_18000f3a0(lVar9 + 0x10);
      if (lVar8 == 0) {
        local_res10 = 0xffffffff;
      }
      else {
        *(undefined8 *)(puVar17 + -8) = 0x18002d7b5;
        local_res10 = FUN_180011200(lVar8 + 0x10);
        local_res10 = local_res10 & 0x7fff;
      }
    }
    *(undefined8 *)(puVar17 + -8) = 0x18002d7d4;
    FUN_180013280(param_1 + 0x1760c,&local_res10);
  }
  if (lVar20 != 0) {
    bVar6 = bVar6 | 1;
    if (DAT_180cc4b54 == 0) {
      bVar19 = bVar5 | 8;
    }
    else {
      *(undefined8 *)(puVar17 + -8) = 0x18002d85e;
      cVar4 = FUN_180011220((ulonglong)DAT_180cc4b54 + lVar20);
      bVar19 = bVar5 | cVar4 << 5 | 8U;
    }
    bVar5 = bVar19;
    if (DAT_180cc4b58 != 0) {
      *(undefined8 *)(puVar17 + -8) = 0x18002d886;
      cVar4 = FUN_180011220((ulonglong)DAT_180cc4b58 + lVar20);
      bVar5 = bVar19 | 0x40;
      if (cVar4 == '\0') {
        bVar5 = bVar19;
      }
    }
    if (uVar3 == 0) {
LAB_18002d8c5:
      local_78 = 0;
      local_70 = 0;
    }
    else {
      *(undefined8 *)(puVar17 + -8) = 0x18002d89d;
      lVar8 = FUN_18000f3a0(uVar18 + lVar20);
      if ((lVar8 == 0) || (uVar2 == 0)) goto LAB_18002d8c5;
      *(undefined8 *)(puVar17 + -8) = 0x18002d8b4;
      puVar10 = (undefined8 *)FUN_1800111b0(&local_68,lVar8 + uVar21);
      local_78 = *puVar10;
      local_70 = *(undefined4 *)(puVar10 + 1);
    }
    *(undefined8 *)(puVar17 + -8) = 0x18002d8e4;
    FUN_180023a50(param_1 + 0x240,&local_78);
    local_res10 = 0xffffffff;
    *(undefined8 *)(puVar17 + -8) = 0x18002d8fb;
    FUN_180013280(param_1 + 0x1760c,&local_res10);
  }
  *(undefined8 *)(puVar17 + -8) = 0x18002d90f;
  local_res10._0_1_ = bVar5;
  FUN_1800233d0(param_1 + 0x17606,&local_res10);
  local_res10 = CONCAT31(local_res10._1_3_,bVar6);
  *(undefined8 *)(puVar17 + -8) = 0x18002d923;
  FUN_1800233d0(param_1 + 0x17607,&local_res10);
  if (DAT_180961a50 != 0) {
    *(undefined8 *)(puVar17 + -8) = 0x18002d934;
    lVar8 = FUN_18000f3a0();
    if (lVar8 != 0) {
      *(undefined8 *)(puVar17 + -8) = 0x18002d942;
      local_res10 = FUN_18000f3d0(lVar8 + 0x30);
      goto LAB_18002d947;
    }
  }
  local_res10 = 0;
LAB_18002d947:
  if ((bVar6 & 1) == 0) {
    local_res10 = DAT_1808ace88;
    *(undefined8 *)(puVar17 + -8) = 0x18002d97e;
    FUN_180013280(param_1 + 0x24c,&local_res10);
  }
  else {
    *(undefined8 *)(puVar17 + -8) = 0x18002d962;
    FUN_180013280(param_1 + 0x24c,&local_res10);
    uVar22 = DAT_1808ac34c;
  }
  *(undefined8 *)(puVar17 + -8) = 0x18002d993;
  local_res10 = uVar22;
  FUN_180013280(param_1 + 0x250,&local_res10);
  return;
}



/* ===== 18002d9d0 FUN_18002d9d0 ===== */

void FUN_18002d9d0(void)

{
  (*DAT_180961b50)();
  return;
}



/* ===== 18002d9f0 FUN_18002d9f0 ===== */

void FUN_18002d9f0(void)

{
  (*DAT_180961b58)();
  return;
}



/* ===== 18002da10 FUN_18002da10 ===== */

undefined8 FUN_18002da10(undefined8 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = (*DAT_180962008)();
  uVar3 = 0;
  if (lVar2 != 0) {
    uVar1 = *(undefined4 *)(lVar2 + 4);
    *param_2 = uVar1;
    uVar3 = CONCAT71((uint7)(uint3)((uint)uVar1 >> 8),1);
  }
  return uVar3;
}



/* ===== 18002da40 FUN_18002da40 ===== */

bool FUN_18002da40(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x238))();
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x88))(plVar1,param_2,1);
  }
  return plVar1 != (longlong *)0x0;
}



/* ===== 18002da80 FUN_18002da80 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18002da80(longlong param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 **ppuVar9;
  uint uVar10;
  longlong lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auStack_158 [32];
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  char *local_108;
  float local_f8 [2];
  float local_f0;
  undefined4 uStack_ec;
  float local_e8;
  float local_e4;
  undefined8 local_e0;
  undefined8 *local_d8;
  undefined8 local_d0;
  undefined8 *local_c8 [2];
  longlong local_b8;
  undefined8 *local_b0;
  undefined8 *local_a8 [16];
  
  cVar1 = DAT_180cd1304;
  uVar10 = DAT_180cc46f4;
  local_a8[0] = (undefined8 *)(DAT_180919500 ^ (ulonglong)auStack_158);
  if (((((DAT_18095d2cf != '\0') && (DAT_180cc45b8 != 0)) && (DAT_180cc4b30 != 0)) &&
      (((DAT_180cc4b38 != 0 && (DAT_180961b50 != 0)) &&
       ((DAT_180961b58 != 0 && ((DAT_180962008 != 0 && (DAT_180cc4704 != 0)))))))) &&
     (DAT_180cc46f4 != 0)) {
    if (DAT_180cd1304 == '\0') {
      FUN_1803a0b60(&local_f0);
      lVar4 = CONCAT44(uStack_ec,local_f0);
    }
    else {
      lVar4 = DAT_181108a00;
    }
    if ((lVar4 != 0) && (lVar4 = FUN_18000f3a0(lVar4 + 0x10), lVar4 != 0)) {
      uVar2 = FUN_180011200(lVar4 + 0x10);
      uVar2 = uVar2 & 0x7fff;
      iVar3 = FUN_180011200(param_1 + 1000);
      if (((int)(uVar2 - 1) <= iVar3) && (uVar2 - 1 < 0x40)) {
        if (cVar1 == '\0') {
          FUN_1803a0b60(&local_f0);
          DAT_181108a00 = CONCAT44(uStack_ec,local_f0);
          DAT_1811089f8 = FUN_1803a0c50(&local_f0);
          DAT_180cd1304 = '\x01';
          uVar10 = DAT_180cc46f4;
        }
        else {
        }
        lVar4 = DAT_1811089f8;
        if ((DAT_1811089f8 != 0) &&
           (cVar1 = FUN_180011220((ulonglong)uVar10 + DAT_1811089f8), cVar1 == '\0')) {
          lVar11 = (ulonglong)uVar2 * 0x180;
          lVar5 = FUN_18000f3a0(param_1 + 0x290 + lVar11);
          if ((lVar5 != 0) && (lVar5 = FUN_18000f3a0(lVar5 + 8), lVar5 != 0)) {
            local_e8 = 0.0;
            cVar1 = FUN_18002da10(lVar4,&local_e8);
            if (cVar1 != '\0') {
              fVar12 = (float)FUN_18000f3d0((ulonglong)DAT_180cc4704 + 4 + lVar4);
              fVar13 = (float)FUN_18000f3d0(param_1 + 0x3b4 + lVar11);
              fVar16 = DAT_1808ac1f4;
              fVar15 = DAT_1808abfd0;
              fVar17 = fVar12 - local_e8;
              fVar14 = (float)FUN_18053f0d0(fVar17 * DAT_1808abfd0 + DAT_1808ac1f4);
              fVar18 = (fVar17 - fVar14 * DAT_1808acbd0) + fVar13;
              fVar15 = (float)FUN_18053f0d0(fVar18 * fVar15 + fVar16);
              fVar16 = (float)FUN_18000f3d0(param_1 + 0x3b8 + lVar11);
              local_f8[0] = fVar16;
              fVar14 = (float)FUN_18000f3d0(param_1 + 0x3a8 + lVar11);
              local_e4 = fVar14;
              fVar17 = (float)FUN_18000f3d0(param_1 + 0x3ac + lVar11);
              local_f0 = fVar17;
              puVar6 = (undefined8 *)FUN_18002d9d0(0x18);
              local_c8[0] = puVar6;
              puVar7 = (undefined8 *)FUN_18002d9d0(0x20);
              local_c8[1] = puVar7;
              lVar4 = FUN_18002d9d0(0x20);
              local_b8 = lVar4;
              puVar8 = (undefined8 *)FUN_18002d9d0(0x18);
              local_b0 = puVar8;
              if ((((puVar6 == (undefined8 *)0x0) || (puVar7 == (undefined8 *)0x0)) || (lVar4 == 0))
                 || (puVar8 == (undefined8 *)0x0)) {
                ppuVar9 = local_c8;
                do {
                  if (*ppuVar9 != (undefined8 *)0x0) {
                    FUN_18002d9f0();
                  }
                  ppuVar9 = ppuVar9 + 1;
                } while (ppuVar9 != local_a8);
              }
              else {
                fVar15 = fVar15 * DAT_1808acbd0;
                *puVar6 = 0;
                puVar6[1] = 0;
                puVar6[2] = 0;
                fVar18 = fVar18 - fVar15;
                FUN_1800239d0(puVar6,&DAT_180cc45b8);
                FUN_180013280(puVar6 + 1,local_f8);
                FUN_180013280((longlong)puVar6 + 0xc,local_f8);
                local_f8[0] = 1.0;
                FUN_180013280(puVar6 + 2,local_f8);
                *puVar7 = 0;
                puVar7[1] = 0;
                puVar7[2] = 0;
                puVar7[3] = 0;
                FUN_1800239d0(puVar7,&DAT_180cc4b30);
                fVar15 = fVar18 * DAT_1808abff8;
                local_f8[0] = (float)FUN_180517790(fVar15);
                FUN_180013280(puVar7 + 3,local_f8);
                local_f8[0] = (float)FUN_180517200(fVar15);
                FUN_180013280((longlong)puVar7 + 0x1c,local_f8);
                FUN_1800239d0(lVar4,&DAT_180cc4b38);
                FUN_180013280(lVar4 + 8,&local_e4);
                FUN_180013280(lVar4 + 0xc,&DAT_180590058);
                FUN_180013280(lVar4 + 0x10,&local_f0);
                FUN_180013280(lVar4 + 0x14,&DAT_180590058);
                local_f0 = 0.0;
                FUN_180013280(lVar4 + 0x18,&local_f0);
                FUN_180013280(lVar4 + 0x1c,&DAT_180590058);
                puVar8[2] = lVar4;
                *puVar8 = puVar6;
                puVar8[1] = puVar7;
                iVar3 = 0;
                local_e0 = 3;
                local_d0 = 3;
                local_d8 = puVar8;
                cVar1 = FUN_18002da40(lVar5,&local_e0);
                if (0 < (int)local_e0) {
                  do {
                    if (2 < iVar3) break;
                    FUN_18002d9f0(puVar8[iVar3]);
                    iVar3 = iVar3 + 1;
                  } while (iVar3 < (int)local_e0);
                }
                if ((local_d0._4_4_ < 0x40000000) && (local_d8 != (undefined8 *)0x0)) {
                  FUN_18002d9f0();
                }
                if (DAT_180ca0e5c == '\0') {
                  DAT_180ca0e5c = '\x01';
                  local_108 = "FAILED";
                  local_110 = (double)fVar17;
                  if (cVar1 != '\0') {
                    local_108 = "applied";
                  }
                  local_118 = (double)fVar14;
                  local_120 = (double)fVar16;
                  local_128 = (double)fVar18;
                  local_130 = (double)fVar13;
                  local_138 = (double)local_e8;
                  FUN_1802b2560("[hud] radar override angles | entry %d panel %p | eye %.1f body %.1f game %.1f -> %.1f | scale %.2f pos %.1f %.1f | %s"
                                ,uVar2 - 1,lVar5,(double)fVar12);
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}



/* ===== 18002e0b0 FUN_18002e0b0 ===== */

undefined8 FUN_18002e0b0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  uint local_res10 [2];
  
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + 1;
  UNLOCK();
  if ((char)param_2 == '\0') {
    uVar2 = (*DAT_180cc4598)();
  }
  else {
    FUN_18002cc60();
    uVar2 = (*DAT_180cc4598)(param_1,param_2);
    iVar3 = 0;
    if (0 < DAT_180cc45e8) {
      do {
        lVar1 = (&DAT_180cc4130)[iVar3];
        local_res10[0] = FUN_180011200(lVar1 + 0x30);
        local_res10[0] = local_res10[0] & 0xffffff7f;
        FUN_180013280(lVar1 + 0x30,local_res10);
        iVar3 = iVar3 + 1;
      } while (iVar3 < DAT_180cc45e8);
    }
    DAT_180cc45e8 = 0;
    FUN_18002d3e0(param_1 + -0x20);
    FUN_18002da80(param_1 + -0x20);
  }
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + -1;
  UNLOCK();
  return uVar2;
}



/* ===== 18002e180 FUN_18002e180 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_18002e180(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  char *_Buf1;
  int *piVar2;
  longlong lVar3;
  ulonglong uVar4;
  code *pcVar5;
  undefined8 ****ppppuVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined8 ****ppppuVar10;
  longlong lVar11;
  undefined1 *puVar12;
  size_t _Size;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [24];
  undefined8 ****local_78;
  undefined8 uStack_70;
  longlong local_68;
  ulonglong local_60;
  ulonglong local_58;
  
  local_58 = DAT_180919500 ^ (ulonglong)auStack_98;
  puVar12 = auStack_98;
  if ((*param_1 != 0) && (puVar12 = auStack_98, param_1[1] != 0)) {
    uStack_70 = 0;
    local_68 = 4;
    local_60 = 0xf;
    local_78 = (undefined8 ****)(ulonglong)DAT_1806d2a10;
    FUN_1800134a0(&local_78,*param_2,param_2[1]);
    FUN_1800134a0(&local_78,&DAT_1806d2a18,2);
    uVar7 = local_60;
    ppppuVar6 = local_78;
    puVar12 = auStack_98;
    lVar3 = *param_1;
    _Size = local_68 + 1;
    lVar11 = 0x10;
    uVar4 = param_1[1];
    uVar9 = local_68 + 0x11;
    while (uVar9 <= uVar4) {
      _Buf1 = (char *)(lVar11 + lVar3);
      if (*_Buf1 == '.') {
        ppppuVar10 = &local_78;
        if (0xf < uVar7) {
          ppppuVar10 = ppppuVar6;
        }
        iVar8 = memcmp(_Buf1,ppppuVar10,_Size);
        if (iVar8 == 0) {
          if (_Buf1 + -0x10 != (char *)0x0) {
            lVar11 = 0;
            if (0x17 < uVar4) goto LAB_18002e2b2;
          }
          break;
        }
      }
      lVar1 = lVar11 + 1;
      lVar11 = lVar11 + 1;
      uVar9 = lVar1 + _Size;
    }
    goto LAB_18002e266;
  }
  goto LAB_18002e30e;
  while (uVar9 = lVar11 + 0x1c, lVar11 = lVar11 + 4, uVar9 <= uVar4) {
LAB_18002e2b2:
    piVar2 = (int *)(lVar11 + lVar3);
    if (((*piVar2 == 1) && (piVar2[1] == 0x20)) &&
       (piVar2[3] == (int)(_Buf1 + -0x10) - (int)*param_1)) {
      lVar11 = 0;
      goto LAB_18002e2e0;
    }
  }
  goto LAB_18002e266;
  while (uVar9 = lVar11 + 0x18, lVar11 = lVar11 + 8, uVar9 <= uVar4) {
LAB_18002e2e0:
    if (*(int **)(lVar11 + lVar3) == piVar2) {
      lVar11 = lVar3 + 8 + lVar11;
      goto LAB_18002e268;
    }
  }
LAB_18002e266:
  lVar11 = 0;
LAB_18002e268:
  if (0xf < uVar7) {
    uVar9 = uVar7 + 1;
    ppppuVar10 = ppppuVar6;
    if (0xfff < uVar9) {
      ppppuVar10 = (undefined8 ****)ppppuVar6[-1];
      if (0x1f < (ulonglong)((longlong)ppppuVar6 + (-8 - (longlong)ppppuVar10))) {
        pcVar5 = (code *)swi(0x29);
        (*pcVar5)(5);
        puVar12 = auStack_90;
LAB_18002e30e:
        lVar11 = 0;
        goto LAB_18002e310;
      }
      uVar9 = uVar7 + 0x28;
    }
    thunk_FUN_1803d64e0(ppppuVar10,uVar9);
  }
LAB_18002e310:
  *(undefined8 *)(puVar12 + -8) = 0x18002e31d;
  return lVar11;
}



/* ===== 18002e330 FUN_18002e330 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18002e330(void)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  float *pfVar7;
  char cVar8;
  ulonglong uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  bool bVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  longlong local_res8;
  undefined8 local_108;
  float local_100;
  float local_f8;
  float fStack_f4;
  float local_f0;
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [3];
  undefined1 local_c5;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_ac;
  undefined8 local_a4;
  undefined4 local_9c;
  
  FUN_18002bf40();
  uVar12 = 0;
  cVar8 = '\0';
  uVar11 = 0;
  bVar13 = false;
  uVar10 = 0;
  fVar15 = 0.0;
  fVar16 = 0.0;
  fVar19 = 0.0;
  fVar20 = 0.0;
  if (((DAT_18095d2d0 != 1) && (DAT_18095d334 == '\0')) && (DAT_18095d371._5_1_ == '\0'))
  goto LAB_18002e7d3;
  lVar3 = FUN_1800305a0();
  uVar12 = 0;
  if (lVar3 == 0) goto LAB_18002e7d3;
  lVar4 = FUN_18002c150(local_c8,lVar3);
  uVar12 = 1;
  cVar8 = *(char *)(lVar4 + 0x1c);
  cVar1 = *(char *)(lVar4 + 0x1d);
  lVar4 = FUN_180266660();
  bVar13 = lVar4 != 0;
  if ((cVar8 != '\0') && (cVar1 != '\0')) {
    uVar11 = 1;
  }
  if ((DAT_18095d334 == '\0') && (DAT_18095d31c < 0x19)) goto LAB_18002e7d3;
  if (cVar8 != '\0') {
    if ((((DAT_18095723c != '\0') && (DAT_1809f351c != 2)) &&
        ((DAT_1809f351c != 1 ||
         (((lVar4 = FUN_180266660(), lVar4 == 0 || (DAT_180cf9f80 == 0)) ||
          (cVar1 = FUN_180011220((ulonglong)DAT_180cf9f80 + lVar4), cVar1 == '\0')))))) &&
       ((DAT_18095cd78 != 0 && (uVar9 = (ulonglong)DAT_180cc4718, DAT_180cc4718 != 0)))) {
      if (DAT_180cd1304 == '\0') {
        FUN_1803a0b60(&local_res8);
        lVar4 = local_res8;
      }
      else {
        lVar4 = DAT_181108a00;
      }
      if ((lVar4 != 0) && (cVar1 = FUN_180011220(lVar4 + uVar9), cVar1 != '\0')) goto LAB_18002e5b1;
    }
    if (((DAT_180961ca0 != 0) &&
        ((((DAT_180961ca8 != 0 && (DAT_180961cb8 != 0)) && (DAT_180961cc0 != 0)) &&
         ((DAT_1809619a0 != 0 && (DAT_1809619ac != 0)))))) &&
       ((DAT_1809619b0 != 0 &&
        (((DAT_1809619b4 != 0 && (plVar5 = (longlong *)FUN_18002c150(local_c8,lVar3), *plVar5 != 0))
         && ((plVar5[1] != 0 && ((int)plVar5[3] != 8)))))))) {
      local_c8[0] = 0;
      local_c0 = 0;
      local_b8 = 0;
      local_b0 = 0;
      local_a4 = 0;
      local_9c = 0;
      local_ac = 1;
      local_res8 = lVar3;
      cVar1 = FUN_1802ad2f0(&local_res8,local_c8);
      if (cVar1 != '\0') {
        fVar14 = (float)local_a4;
        if (((uint)(float)local_a4 & 0x7f800000) == 0x7f800000) {
          fVar14 = 0.0;
        }
        fVar16 = local_a4._4_4_;
        if (((uint)local_a4._4_4_ & 0x7f800000) == 0x7f800000) {
          fVar16 = 0.0;
        }
        if ((0.0 < fVar14) || (0.0 < fVar16)) {
          fVar16 = fVar16 + fVar14;
        }
        else {
          fVar16 = 0.0;
        }
      }
    }
  }
LAB_18002e5b1:
  if ((((DAT_18095d334 == '\0') || (DAT_18095d348 == '\0')) || (cVar8 == '\0')) ||
     (DAT_180cc4704 == 0)) goto LAB_18002e7d3;
  local_108 = 0;
  local_100 = 0.0;
  if ((DAT_180961cc8 == (code *)0x0) || (DAT_180ca0a40 == 0)) {
LAB_18002e6a0:
    fVar17 = 0.0;
    fVar14 = 0.0;
    fVar18 = 0.0;
  }
  else {
    lVar4 = FUN_18000f3a0(lVar3 + (ulonglong)DAT_180ca0a40);
    if (lVar4 == 0) {
      fVar14 = local_108._4_4_;
      fVar17 = (float)local_108;
      fVar18 = local_100;
    }
    else {
      (*DAT_180961cc8)(lVar4,&local_108,0);
      if ((((uint)(float)local_108 & 0x7f800000) == 0x7f800000) ||
         (((uint)local_108._4_4_ & 0x7f800000) == 0x7f800000)) goto LAB_18002e6a0;
      fVar14 = local_108._4_4_;
      fVar17 = (float)local_108;
      fVar18 = local_100;
    }
  }
  puVar6 = (undefined8 *)FUN_1800111b0(&local_108,(ulonglong)DAT_180cc4704 + lVar3);
  fStack_f4 = (float)((ulonglong)*puVar6 >> 0x20);
  _local_f8 = CONCAT44(fStack_f4 + fVar14,(float)*puVar6 + fVar17);
  local_f0 = *(float *)(puVar6 + 1) + fVar18;
  local_res8 = lVar3;
  pfVar7 = (float *)FUN_1802ae9b0(local_e8,&local_res8);
  local_108 = 0;
  local_100 = 0.0;
  fVar14 = *pfVar7;
  FUN_1803a19a0(&local_f8,&local_108,local_c8,local_d8);
  if ((((uint)fVar14 & 0x7f800000) != 0x7f800000) &&
     (((uint)(float)local_108 & 0x7f800000) != 0x7f800000)) {
    uVar10 = 1;
    fVar15 = (float)local_108 * DAT_1808acc50 + fVar14;
    fVar19 = local_108._4_4_ * DAT_1808acc50 + pfVar7[1];
    fVar20 = local_100 * DAT_1808acc50 + pfVar7[2];
  }
LAB_18002e7d3:
  iVar2 = FUN_1804e4d70(&DAT_180962b60);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_180962bac == 0x7fffffff) {
    DAT_180962bac = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  DAT_180cc45d3 = local_c5;
  _DAT_180cc45da = local_c0._2_2_;
  DAT_180cc45d0 = uVar12;
  DAT_180cc45d1 = cVar8;
  DAT_180cc45d2 = uVar11;
  DAT_180cc45d4 = fVar16;
  DAT_180cc45d8 = bVar13;
  DAT_180cc45d9 = uVar10;
  _DAT_180cc45dc = fVar15;
  _DAT_180cc45e0 = fVar19;
  _DAT_180cc45e4 = fVar20;
  FUN_1804e4e90(&DAT_180962b60);
  return;
}



/* ===== 18002e8b0 FUN_18002e8b0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_18002e8b0(void)

{
  longlong lVar1;
  float fVar2;
  char cVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  char *_Str1;
  ulonglong uVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_288 [32];
  float *local_268;
  undefined4 local_260;
  undefined8 local_258;
  float local_250;
  undefined8 local_248;
  float local_240;
  undefined8 local_238;
  undefined4 local_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined1 local_208 [16];
  undefined1 local_1f8 [16];
  float local_1e8 [4];
  longlong local_1d8 [56];
  
  local_1d8[0x2e] = DAT_180919500 ^ (ulonglong)auStack_288;
  lVar7 = FUN_1800305a0();
  if (((((((lVar7 == 0) || (DAT_180961f40 == 0)) || (DAT_180961f48 == 0)) ||
        ((DAT_180961f50 == 0 || (DAT_180961f60 == 0)))) || (DAT_180961f68 == 0)) ||
      (((DAT_180cfee68 == 0 || (DAT_180cfee80 == 0)) ||
       ((DAT_1809619a0 == 0 ||
        (((plVar8 = (longlong *)FUN_18002c150(&local_228,lVar7),
          *(char *)((longlong)plVar8 + 0x1c) == '\0' || (*plVar8 == 0)) || (5 < (int)plVar8[3] - 1U)
         ))))))) ||
     ((DAT_180961998 != 0 &&
      (sVar4 = FUN_180011440((ulonglong)(uint)(DAT_180961998 + DAT_1809619a8 + DAT_1809619a4) +
                             *plVar8), sVar4 == 0x1f)))) {
    uVar10 = 0xffffffff;
  }
  else {
    local_228 = 0;
    uStack_220 = 0;
    local_218 = 0;
    local_258 = lVar7;
    cVar3 = FUN_1802ae4f0(&local_258,&local_228);
    if ((cVar3 != '\0') && (uVar10 = (ulonglong)DAT_180cc4704, DAT_180cc4704 != 0)) {
      local_258 = lVar7;
      puVar9 = (undefined8 *)FUN_1802ae9b0(&local_248,&local_258);
      local_238 = *puVar9;
      local_230 = *(undefined4 *)(puVar9 + 1);
      puVar9 = (undefined8 *)FUN_1800111b0(&local_258,lVar7 + uVar10);
      local_248 = *puVar9;
      local_240 = *(float *)(puVar9 + 1);
      local_258 = 0;
      local_250 = 0.0;
      FUN_1803a19a0(&local_248,&local_258,local_1f8,local_208);
      fVar2 = local_250;
      fVar13 = local_258._4_4_;
      fVar14 = (float)local_258;
      fVar12 = local_258._4_4_ * local_258._4_4_ + (float)local_258 * (float)local_258 +
               local_250 * local_250;
      if (fVar12 < 0.0) {
        fVar12 = (float)FUN_18051af10(fVar12);
      }
      else {
        fVar12 = SQRT(fVar12);
      }
      if (DAT_1808abf8c <= fVar12) {
        fVar12 = DAT_1808ac34c / fVar12;
        local_240 = fVar2 * fVar12;
        fVar13 = fVar13 * fVar12;
        fVar14 = fVar14 * fVar12;
      }
      else {
        local_240 = 0.0;
        fVar13 = 0.0;
        fVar14 = 0.0;
      }
      local_248 = CONCAT44(fVar13,fVar14);
      if (((fVar14 != 0.0) || (fVar13 != 0.0)) || (local_240 != 0.0)) {
        local_1e8[2] = 0.0;
        local_1e8[3] = 0.0;
        local_1d8[2] = 0;
        local_1d8[5] = 0;
        local_1d8[8] = 0;
        local_1d8[0xb] = 0;
        local_1d8[0xe] = 0;
        local_1d8[0x11] = 0;
        local_1d8[0x14] = 0;
        local_1d8[0x17] = 0;
        local_1d8[0x1a] = 0;
        local_1d8[0x1d] = 0;
        local_1d8[0x20] = 0;
        local_1d8[0x23] = 0;
        local_1d8[0x26] = 0;
        local_1d8[0x29] = 0;
        local_1d8[0x2c] = 0;
        local_1e8[0] = 0.0;
        local_1e8[1] = 0.0;
        local_1d8[1] = 0;
        local_1d8[4] = 0;
        local_1d8[7] = 0;
        local_1d8[10] = 0;
        local_1d8[0xd] = 0;
        local_1d8[0x10] = 0;
        local_1d8[0x13] = 0;
        local_1d8[0x16] = 0;
        local_1d8[0x19] = 0;
        local_1d8[0x1c] = 0;
        local_1d8[0x1f] = 0;
        local_1d8[0x22] = 0;
        local_1d8[0x25] = 0;
        local_1d8[0x28] = 0;
        local_1d8[0x2b] = 0;
        local_268 = local_1e8;
        local_260 = 0x10;
        local_1d8[0] = 0;
        local_1d8[3] = 0;
        local_1d8[6] = 0;
        local_1d8[9] = 0;
        local_1d8[0xc] = 0;
        local_1d8[0xf] = 0;
        local_1d8[0x12] = 0;
        local_1d8[0x15] = 0;
        local_1d8[0x18] = 0;
        local_1d8[0x1b] = 0;
        local_1d8[0x1e] = 0;
        local_1d8[0x21] = 0;
        local_1d8[0x24] = 0;
        local_1d8[0x27] = 0;
        local_1d8[0x2a] = 0;
        local_1d8[0x2d] = 0;
        local_258 = lVar7;
        iVar5 = FUN_1802af770(&local_258,&local_228,&local_238,&local_248);
        uVar11 = 0;
        if (0 < iVar5) {
          do {
            lVar1 = local_1d8[(ulonglong)uVar11 * 3];
            if (((lVar1 != 0) && (lVar1 != lVar7)) &&
               ((local_258 = lVar1, _Str1 = (char *)FUN_1803a0710(&local_258), _Str1 != (char *)0x0
                && ((iVar6 = strcmp(_Str1,"C_CSPlayerPawn"), iVar6 == 0 &&
                    (cVar3 = FUN_1800307b0(lVar1,lVar7), cVar3 == '\0')))))) {
              return 2;
            }
            uVar11 = uVar11 + 1;
          } while ((int)uVar11 < iVar5);
        }
        if (iVar5 < 2) {
          return 0;
        }
        return (ulonglong)
               (DAT_1808ac9e4 <
               (local_1e8[((longlong)iVar5 + -1) * 6] - local_1e8[1]) * uStack_220._4_4_);
      }
    }
    uVar10 = 0;
  }
  return uVar10;
}



/* ===== 18002ed80 FUN_18002ed80 ===== */

uint FUN_18002ed80(float *param_1,float param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  
  param_2 = param_2 * param_1[3];
  if (0.0 <= param_2) {
    fVar5 = DAT_1808ac34c;
    if (param_2 <= DAT_1808ac34c) {
      fVar5 = param_2;
    }
    iVar1 = (int)(fVar5 * DAT_1808acb94 + DAT_1808ac1f4);
  }
  else {
    iVar1 = 0;
  }
  fVar5 = param_1[2];
  if (0.0 <= fVar5) {
    fVar6 = DAT_1808ac34c;
    if (fVar5 <= DAT_1808ac34c) {
      fVar6 = fVar5;
    }
    iVar4 = (int)(fVar6 * DAT_1808acb94 + DAT_1808ac1f4);
  }
  else {
    iVar4 = 0;
  }
  fVar5 = param_1[1];
  if (0.0 <= fVar5) {
    fVar6 = DAT_1808ac34c;
    if (fVar5 <= DAT_1808ac34c) {
      fVar6 = fVar5;
    }
    iVar2 = (int)(fVar6 * DAT_1808acb94 + DAT_1808ac1f4);
  }
  else {
    iVar2 = 0;
  }
  fVar5 = *param_1;
  uVar3 = iVar2 << 8 | iVar4 << 0x10 | iVar1 << 0x18;
  if (fVar5 < 0.0) {
    return uVar3;
  }
  fVar6 = DAT_1808ac34c;
  if (fVar5 <= DAT_1808ac34c) {
    fVar6 = fVar5;
  }
  return uVar3 | (int)(fVar6 * DAT_1808acb94 + DAT_1808ac1f4);
}



/* ===== 18002ee30 FUN_18002ee30 ===== */

undefined8 FUN_18002ee30(float param_1,float param_2)

{
  longlong lVar1;
  float fVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  
  if (0.0 < param_1) {
    lVar1 = (longlong)DAT_181107a00 * 0x40;
    fVar5 = *(float *)(&DAT_181107944 + lVar1) * *(float *)(&DAT_181107944 + lVar1) +
            *(float *)(&DAT_181107940 + lVar1) * *(float *)(&DAT_181107940 + lVar1) +
            *(float *)(&DAT_181107948 + lVar1) * *(float *)(&DAT_181107948 + lVar1);
    if (fVar5 < 0.0) {
      fVar5 = (float)FUN_18051af10(fVar5);
    }
    else {
      fVar5 = SQRT(fVar5);
    }
    fVar6 = *(float *)(&DAT_181107964 + lVar1) * *(float *)(&DAT_181107964 + lVar1) +
            *(float *)(&DAT_181107960 + lVar1) * *(float *)(&DAT_181107960 + lVar1) +
            *(float *)(&DAT_181107968 + lVar1) * *(float *)(&DAT_181107968 + lVar1);
    if (fVar6 < 0.0) {
      fVar6 = (float)FUN_18051af10(fVar6);
    }
    else {
      fVar6 = SQRT(fVar6);
    }
    fVar2 = DAT_1808ac1f4;
    if (((DAT_1808abf8c < fVar5) && (DAT_1808abf8c < fVar6)) && (0.0 < fVar6 / fVar5)) {
      uVar3 = FUN_18053f920(param_1 * DAT_1808ac1f4);
      uVar4 = (undefined4)((ulonglong)uVar3 >> 0x20);
      fVar2 = ((float)uVar3 * param_2) / (fVar6 / fVar5) + fVar2;
      if (((uint)fVar2 & 0x7f800000) != 0x7f800000) goto LAB_18002ef66;
    }
  }
  fVar2 = 0.0;
  uVar4 = 0;
LAB_18002ef66:
  return CONCAT44(uVar4,fVar2);
}



/* ===== 18002ef90 FUN_18002ef90 ===== */

void FUN_18002ef90(longlong param_1,float *param_2,float param_3,ulonglong param_4,uint param_5,
                  float param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  short sVar7;
  longlong lVar8;
  short sVar9;
  float fVar10;
  float fVar11;
  short sVar12;
  short sVar13;
  uint uVar14;
  float *pfVar15;
  short sVar16;
  short sVar17;
  float *pfVar18;
  short *psVar19;
  uint uVar20;
  float *pfVar21;
  ushort uVar22;
  int iVar23;
  short sVar24;
  short sVar25;
  int iVar26;
  float *pfVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float local_res8 [2];
  float local_res10 [2];
  float local_res18;
  int local_130;
  float local_114 [55];
  
  local_res10[0] = 0.999;
  local_res8[0] = 0.001;
  if ((param_5 & 0xff000000) == 0) {
    param_5 = (uint)param_4 & 0xffffff;
  }
  uVar1 = *(undefined4 *)(DAT_180ca0a50 + 0x1218);
  uVar2 = *(undefined4 *)(DAT_180ca0a50 + 0x121c);
  pfVar27 = local_res8;
  if (DAT_1808abfbc <= param_6) {
    pfVar27 = &param_6;
  }
  pfVar21 = local_res10;
  if (param_6 <= DAT_1808ac33c) {
    pfVar21 = pfVar27;
  }
  local_res18 = param_3;
  FUN_1803fc3a0(param_1,0x12c0,0x341);
  sVar7 = *(short *)(param_1 + 0x34);
  iVar26 = 0xc;
  **(undefined8 **)(param_1 + 0x40) = *(undefined8 *)param_2;
  lVar8 = *(longlong *)(param_1 + 0x40);
  *(undefined4 *)(lVar8 + 8) = uVar1;
  *(undefined4 *)(lVar8 + 0xc) = uVar2;
  *(uint *)(*(longlong *)(param_1 + 0x40) + 0x10) = param_5;
  *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + 0x14;
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
  fVar11 = DAT_1808acb94;
  fVar10 = DAT_1808ac1f4;
  pfVar27 = *(float **)(param_1 + 0x40);
  fVar31 = (float)((uint)(param_4 >> 8) & 0xff);
  fVar32 = (float)((uint)(param_4 >> 0x10) & 0xff);
  fVar33 = (float)((uint)param_4 >> 0x18);
  do {
    local_114[2] = 255.0;
    local_114[0] = 0.0;
    local_114[5] = 255.0;
    local_114[3] = 0.0;
    local_114[8] = 255.0;
    fVar30 = (float)iVar26 / DAT_1808ac8b0;
    local_114[6] = 0.0;
    local_114[0xb] = 255.0;
    local_114[9] = 0.0;
    param_3 = (DAT_1808ac34c - fVar30 * *pfVar21) * param_3;
    fVar30 = (DAT_1808ac658 - (fVar30 + fVar30)) * fVar30 * fVar30;
    local_114[1] = fVar30 * ((float)(param_5 & 0xff) - (float)(param_4 & 0xff)) +
                   (float)(param_4 & 0xff);
    local_114[4] = fVar30 * ((float)(param_5 >> 8 & 0xff) - fVar31) + fVar31;
    pfVar18 = local_114;
    if (0.0 <= local_114[1]) {
      pfVar18 = local_114 + 1;
    }
    local_114[7] = fVar30 * ((float)(param_5 >> 0x10 & 0xff) - fVar32) + fVar32;
    pfVar15 = local_114 + 2;
    if (local_114[1] <= fVar11) {
      pfVar15 = pfVar18;
    }
    fVar3 = *pfVar15;
    pfVar18 = local_114 + 3;
    if (0.0 <= local_114[4]) {
      pfVar18 = local_114 + 4;
    }
    local_114[10] = fVar30 * ((float)(param_5 >> 0x18) - fVar33) + fVar33;
    pfVar15 = local_114 + 5;
    if (local_114[4] <= fVar11) {
      pfVar15 = pfVar18;
    }
    fVar30 = *pfVar15;
    pfVar18 = local_114 + 6;
    if (0.0 <= local_114[7]) {
      pfVar18 = local_114 + 7;
    }
    pfVar15 = local_114 + 8;
    if (local_114[7] <= fVar11) {
      pfVar15 = pfVar18;
    }
    fVar4 = *pfVar15;
    pfVar18 = local_114 + 9;
    if (0.0 <= local_114[10]) {
      pfVar18 = local_114 + 10;
    }
    pfVar15 = local_114 + 0xb;
    if (local_114[10] <= fVar11) {
      pfVar15 = pfVar18;
    }
    fVar5 = *pfVar15;
    iVar23 = 0;
    do {
      fVar28 = (float)FUN_180517790();
      fVar6 = param_2[1];
      fVar29 = (float)FUN_180517200();
      iVar23 = iVar23 + 1;
      *pfVar27 = fVar29 * param_3 + *param_2;
      pfVar27[1] = fVar28 * param_3 + fVar6;
      lVar8 = *(longlong *)(param_1 + 0x40);
      *(undefined4 *)(lVar8 + 8) = uVar1;
      *(undefined4 *)(lVar8 + 0xc) = uVar2;
      *(uint *)(*(longlong *)(param_1 + 0x40) + 0x10) =
           (((int)(longlong)(fVar5 + fVar10) << 8 | (uint)(longlong)(fVar4 + fVar10)) << 8 |
           (uint)(longlong)(fVar30 + fVar10)) << 8 | (uint)(longlong)(fVar3 + fVar10);
      *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
      pfVar27 = (float *)(*(longlong *)(param_1 + 0x40) + 0x14);
      *(float **)(param_1 + 0x40) = pfVar27;
    } while (iVar23 < 0x40);
    iVar26 = iVar26 + -1;
    param_3 = local_res18;
  } while (-1 < iVar26);
  uVar20 = 0;
  sVar12 = sVar7 + 1;
  do {
    **(short **)(param_1 + 0x48) = sVar7;
    sVar13 = (short)uVar20;
    psVar19 = (short *)(*(longlong *)(param_1 + 0x48) + 2);
    *(short **)(param_1 + 0x48) = psVar19;
    *psVar19 = sVar13 + sVar12;
    psVar19 = (short *)(*(longlong *)(param_1 + 0x48) + 2);
    *(short **)(param_1 + 0x48) = psVar19;
    uVar14 = uVar20 + 1 & 0x8000003f;
    if ((int)uVar14 < 0) {
      uVar14 = (uVar14 - 1 | 0xffffffc0) + 1;
    }
    *psVar19 = (short)uVar14 + sVar12;
    psVar19 = (short *)(*(longlong *)(param_1 + 0x48) + 2);
    *(short **)(param_1 + 0x48) = psVar19;
    *psVar19 = sVar7;
    psVar19 = (short *)(*(longlong *)(param_1 + 0x48) + 2);
    *(short **)(param_1 + 0x48) = psVar19;
    *psVar19 = sVar7 + 2 + sVar13;
    psVar19 = (short *)(*(longlong *)(param_1 + 0x48) + 2);
    *(short **)(param_1 + 0x48) = psVar19;
    uVar14 = uVar20 + 2 & 0x8000003f;
    if ((int)uVar14 < 0) {
      uVar14 = (uVar14 - 1 | 0xffffffc0) + 1;
    }
    *psVar19 = (short)uVar14 + sVar12;
    psVar19 = (short *)(*(longlong *)(param_1 + 0x48) + 2);
    *(short **)(param_1 + 0x48) = psVar19;
    *psVar19 = sVar7;
    psVar19 = (short *)(*(longlong *)(param_1 + 0x48) + 2);
    *(short **)(param_1 + 0x48) = psVar19;
    *psVar19 = sVar7 + 3 + sVar13;
    psVar19 = (short *)(*(longlong *)(param_1 + 0x48) + 2);
    *(short **)(param_1 + 0x48) = psVar19;
    uVar14 = uVar20 + 3 & 0x8000003f;
    if ((int)uVar14 < 0) {
      uVar14 = (uVar14 - 1 | 0xffffffc0) + 1;
    }
    *psVar19 = (short)uVar14 + sVar12;
    psVar19 = (short *)(*(longlong *)(param_1 + 0x48) + 2);
    *(short **)(param_1 + 0x48) = psVar19;
    *psVar19 = sVar7;
    psVar19 = (short *)(*(longlong *)(param_1 + 0x48) + 2);
    *(short **)(param_1 + 0x48) = psVar19;
    *psVar19 = sVar7 + 4 + sVar13;
    psVar19 = (short *)(*(longlong *)(param_1 + 0x48) + 2);
    *(short **)(param_1 + 0x48) = psVar19;
    uVar14 = uVar20 + 4 & 0x8000003f;
    if ((int)uVar14 < 0) {
      uVar14 = (uVar14 - 1 | 0xffffffc0) + 1;
    }
    *psVar19 = (short)uVar14 + sVar12;
    psVar19 = (short *)(*(longlong *)(param_1 + 0x48) + 2);
    *(short **)(param_1 + 0x48) = psVar19;
    *psVar19 = sVar7;
    psVar19 = (short *)(*(longlong *)(param_1 + 0x48) + 2);
    *(short **)(param_1 + 0x48) = psVar19;
    *psVar19 = sVar7 + 5 + sVar13;
    psVar19 = (short *)(*(longlong *)(param_1 + 0x48) + 2);
    *(short **)(param_1 + 0x48) = psVar19;
    uVar14 = uVar20 + 5 & 0x8000003f;
    if ((int)uVar14 < 0) {
      uVar14 = (uVar14 - 1 | 0xffffffc0) + 1;
    }
    *psVar19 = (short)uVar14 + sVar12;
    psVar19 = (short *)(*(longlong *)(param_1 + 0x48) + 2);
    *(short **)(param_1 + 0x48) = psVar19;
    *psVar19 = sVar7;
    psVar19 = (short *)(*(longlong *)(param_1 + 0x48) + 2);
    *(short **)(param_1 + 0x48) = psVar19;
    *psVar19 = sVar7 + 6 + sVar13;
    psVar19 = (short *)(*(longlong *)(param_1 + 0x48) + 2);
    *(short **)(param_1 + 0x48) = psVar19;
    uVar14 = uVar20 + 6 & 0x8000003f;
    if ((int)uVar14 < 0) {
      uVar14 = (uVar14 - 1 | 0xffffffc0) + 1;
    }
    *psVar19 = (short)uVar14 + sVar12;
    psVar19 = (short *)(*(longlong *)(param_1 + 0x48) + 2);
    *(short **)(param_1 + 0x48) = psVar19;
    *psVar19 = sVar7;
    psVar19 = (short *)(*(longlong *)(param_1 + 0x48) + 2);
    *(short **)(param_1 + 0x48) = psVar19;
    *psVar19 = sVar7 + 7 + sVar13;
    psVar19 = (short *)(*(longlong *)(param_1 + 0x48) + 2);
    *(short **)(param_1 + 0x48) = psVar19;
    uVar14 = uVar20 + 7 & 0x8000003f;
    if ((int)uVar14 < 0) {
      uVar14 = (uVar14 - 1 | 0xffffffc0) + 1;
    }
    *psVar19 = (short)uVar14 + sVar12;
    psVar19 = (short *)(*(longlong *)(param_1 + 0x48) + 2);
    *(short **)(param_1 + 0x48) = psVar19;
    *psVar19 = sVar7;
    psVar19 = (short *)(*(longlong *)(param_1 + 0x48) + 2);
    *(short **)(param_1 + 0x48) = psVar19;
    *psVar19 = sVar7 + 8 + sVar13;
    psVar19 = (short *)(*(longlong *)(param_1 + 0x48) + 2);
    *(short **)(param_1 + 0x48) = psVar19;
    uVar14 = uVar20 + 8 & 0x8000003f;
    if ((int)uVar14 < 0) {
      uVar14 = (uVar14 - 1 | 0xffffffc0) + 1;
    }
    *psVar19 = (short)uVar14 + sVar12;
    psVar19 = (short *)(*(longlong *)(param_1 + 0x48) + 2);
    *(short **)(param_1 + 0x48) = psVar19;
    *psVar19 = sVar7;
    psVar19 = (short *)(*(longlong *)(param_1 + 0x48) + 2);
    *(short **)(param_1 + 0x48) = psVar19;
    *psVar19 = sVar7 + 9 + sVar13;
    psVar19 = (short *)(*(longlong *)(param_1 + 0x48) + 2);
    *(short **)(param_1 + 0x48) = psVar19;
    uVar14 = uVar20 + 9 & 0x8000003f;
    if ((int)uVar14 < 0) {
      uVar14 = (uVar14 - 1 | 0xffffffc0) + 1;
    }
    *psVar19 = (short)uVar14 + sVar12;
    psVar19 = (short *)(*(longlong *)(param_1 + 0x48) + 2);
    *(short **)(param_1 + 0x48) = psVar19;
    *psVar19 = sVar7;
    psVar19 = (short *)(*(longlong *)(param_1 + 0x48) + 2);
    *(short **)(param_1 + 0x48) = psVar19;
    *psVar19 = sVar7 + 10 + sVar13;
    psVar19 = (short *)(*(longlong *)(param_1 + 0x48) + 2);
    *(short **)(param_1 + 0x48) = psVar19;
    uVar14 = uVar20 + 10 & 0x8000003f;
    if ((int)uVar14 < 0) {
      uVar14 = (uVar14 - 1 | 0xffffffc0) + 1;
    }
    *psVar19 = (short)uVar14 + sVar12;
    psVar19 = (short *)(*(longlong *)(param_1 + 0x48) + 2);
    *(short **)(param_1 + 0x48) = psVar19;
    *psVar19 = sVar7;
    psVar19 = (short *)(*(longlong *)(param_1 + 0x48) + 2);
    *(short **)(param_1 + 0x48) = psVar19;
    *psVar19 = sVar13 + sVar7 + 0xb;
    psVar19 = (short *)(*(longlong *)(param_1 + 0x48) + 2);
    *(short **)(param_1 + 0x48) = psVar19;
    uVar14 = uVar20 + 0xb & 0x8000003f;
    if ((int)uVar14 < 0) {
      uVar14 = (uVar14 - 1 | 0xffffffc0) + 1;
    }
    *psVar19 = (short)uVar14 + sVar12;
    psVar19 = (short *)(*(longlong *)(param_1 + 0x48) + 2);
    *(short **)(param_1 + 0x48) = psVar19;
    *psVar19 = sVar7;
    psVar19 = (short *)(*(longlong *)(param_1 + 0x48) + 2);
    *(short **)(param_1 + 0x48) = psVar19;
    *psVar19 = sVar13 + sVar7 + 0xc;
    psVar19 = (short *)(*(longlong *)(param_1 + 0x48) + 2);
    *(short **)(param_1 + 0x48) = psVar19;
    uVar14 = uVar20 + 0xc & 0x8000003f;
    if ((int)uVar14 < 0) {
      uVar14 = (uVar14 - 1 | 0xffffffc0) + 1;
    }
    *psVar19 = (short)uVar14 + sVar12;
    psVar19 = (short *)(*(longlong *)(param_1 + 0x48) + 2);
    *(short **)(param_1 + 0x48) = psVar19;
    *psVar19 = sVar7;
    psVar19 = (short *)(*(longlong *)(param_1 + 0x48) + 2);
    *(short **)(param_1 + 0x48) = psVar19;
    *psVar19 = sVar13 + sVar7 + 0xd;
    psVar19 = (short *)(*(longlong *)(param_1 + 0x48) + 2);
    *(short **)(param_1 + 0x48) = psVar19;
    uVar14 = uVar20 + 0xd & 0x8000003f;
    if ((int)uVar14 < 0) {
      uVar14 = (uVar14 - 1 | 0xffffffc0) + 1;
    }
    *psVar19 = (short)uVar14 + sVar12;
    psVar19 = (short *)(*(longlong *)(param_1 + 0x48) + 2);
    *(short **)(param_1 + 0x48) = psVar19;
    *psVar19 = sVar7;
    psVar19 = (short *)(*(longlong *)(param_1 + 0x48) + 2);
    *(short **)(param_1 + 0x48) = psVar19;
    *psVar19 = sVar13 + sVar7 + 0xe;
    psVar19 = (short *)(*(longlong *)(param_1 + 0x48) + 2);
    *(short **)(param_1 + 0x48) = psVar19;
    uVar14 = uVar20 + 0xe & 0x8000003f;
    if ((int)uVar14 < 0) {
      uVar14 = (uVar14 - 1 | 0xffffffc0) + 1;
    }
    *psVar19 = (short)uVar14 + sVar12;
    psVar19 = (short *)(*(longlong *)(param_1 + 0x48) + 2);
    *(short **)(param_1 + 0x48) = psVar19;
    *psVar19 = sVar7;
    psVar19 = (short *)(*(longlong *)(param_1 + 0x48) + 2);
    *(short **)(param_1 + 0x48) = psVar19;
    *psVar19 = sVar13 + sVar7 + 0xf;
    psVar19 = (short *)(*(longlong *)(param_1 + 0x48) + 2);
    *(short **)(param_1 + 0x48) = psVar19;
    uVar14 = uVar20 + 0xf & 0x8000003f;
    if ((int)uVar14 < 0) {
      uVar14 = (uVar14 - 1 | 0xffffffc0) + 1;
    }
    *psVar19 = (short)uVar14 + sVar12;
    psVar19 = (short *)(*(longlong *)(param_1 + 0x48) + 2);
    *(short **)(param_1 + 0x48) = psVar19;
    *psVar19 = sVar7;
    uVar20 = uVar20 + 0x10;
    psVar19 = (short *)(*(longlong *)(param_1 + 0x48) + 2);
    *(short **)(param_1 + 0x48) = psVar19;
    *psVar19 = sVar13 + sVar7 + 0x10;
    psVar19 = (short *)(*(longlong *)(param_1 + 0x48) + 2);
    *(short **)(param_1 + 0x48) = psVar19;
    uVar14 = uVar20 & 0x8000003f;
    if ((int)uVar14 < 0) {
      uVar14 = (uVar14 - 1 | 0xffffffc0) + 1;
    }
    *psVar19 = (short)uVar14 + sVar12;
    psVar19 = (short *)(*(longlong *)(param_1 + 0x48) + 2);
    *(short **)(param_1 + 0x48) = psVar19;
  } while ((int)uVar20 < 0x40);
  local_130 = 0;
  do {
    uVar20 = 0;
    uVar22 = (short)local_130 * 0x40;
    sVar25 = uVar22 + sVar12;
    sVar9 = sVar7 + 0x41 + uVar22;
    sVar13 = sVar7 + uVar22;
    do {
      sVar17 = (short)uVar20;
      *psVar19 = sVar25 + sVar17;
      psVar19 = (short *)(*(longlong *)(param_1 + 0x48) + 2);
      *(short **)(param_1 + 0x48) = psVar19;
      *psVar19 = sVar9 + sVar17;
      psVar19 = (short *)(*(longlong *)(param_1 + 0x48) + 2);
      *(short **)(param_1 + 0x48) = psVar19;
      uVar14 = uVar20 + 1 & 0x8000003f;
      if ((int)uVar14 < 0) {
        uVar14 = (uVar14 - 1 | 0xffffffc0) + 1;
      }
      sVar16 = sVar9 + (short)uVar14;
      *psVar19 = sVar16;
      psVar19 = (short *)(*(longlong *)(param_1 + 0x48) + 2);
      *(short **)(param_1 + 0x48) = psVar19;
      *psVar19 = sVar25 + sVar17;
      sVar24 = (uVar22 | 2) + sVar7 + sVar17;
      psVar19 = (short *)(*(longlong *)(param_1 + 0x48) + 2);
      *(short **)(param_1 + 0x48) = psVar19;
      *psVar19 = sVar16;
      psVar19 = (short *)(*(longlong *)(param_1 + 0x48) + 2);
      *(short **)(param_1 + 0x48) = psVar19;
      *psVar19 = (short)uVar14 + sVar25;
      psVar19 = (short *)(*(longlong *)(param_1 + 0x48) + 2);
      *(short **)(param_1 + 0x48) = psVar19;
      *psVar19 = sVar24;
      psVar19 = (short *)(*(longlong *)(param_1 + 0x48) + 2);
      *(short **)(param_1 + 0x48) = psVar19;
      *psVar19 = sVar17 + sVar13 + 0x42;
      psVar19 = (short *)(*(longlong *)(param_1 + 0x48) + 2);
      *(short **)(param_1 + 0x48) = psVar19;
      uVar14 = uVar20 + 2 & 0x8000003f;
      if ((int)uVar14 < 0) {
        uVar14 = (uVar14 - 1 | 0xffffffc0) + 1;
      }
      sVar16 = sVar9 + (short)uVar14;
      *psVar19 = sVar16;
      psVar19 = (short *)(*(longlong *)(param_1 + 0x48) + 2);
      *(short **)(param_1 + 0x48) = psVar19;
      *psVar19 = sVar24;
      sVar24 = sVar17 + (uVar22 | 3) + sVar7;
      psVar19 = (short *)(*(longlong *)(param_1 + 0x48) + 2);
      *(short **)(param_1 + 0x48) = psVar19;
      *psVar19 = sVar16;
      psVar19 = (short *)(*(longlong *)(param_1 + 0x48) + 2);
      *(short **)(param_1 + 0x48) = psVar19;
      *psVar19 = (short)uVar14 + sVar25;
      psVar19 = (short *)(*(longlong *)(param_1 + 0x48) + 2);
      *(short **)(param_1 + 0x48) = psVar19;
      *psVar19 = sVar24;
      psVar19 = (short *)(*(longlong *)(param_1 + 0x48) + 2);
      *(short **)(param_1 + 0x48) = psVar19;
      *psVar19 = sVar17 + sVar13 + 0x43;
      psVar19 = (short *)(*(longlong *)(param_1 + 0x48) + 2);
      *(short **)(param_1 + 0x48) = psVar19;
      uVar14 = uVar20 + 3 & 0x8000003f;
      if ((int)uVar14 < 0) {
        uVar14 = (uVar14 - 1 | 0xffffffc0) + 1;
      }
      sVar16 = sVar9 + (short)uVar14;
      *psVar19 = sVar16;
      psVar19 = (short *)(*(longlong *)(param_1 + 0x48) + 2);
      *(short **)(param_1 + 0x48) = psVar19;
      *psVar19 = sVar24;
      sVar24 = (uVar22 | 4) + sVar7 + sVar17;
      psVar19 = (short *)(*(longlong *)(param_1 + 0x48) + 2);
      *(short **)(param_1 + 0x48) = psVar19;
      *psVar19 = sVar16;
      psVar19 = (short *)(*(longlong *)(param_1 + 0x48) + 2);
      *(short **)(param_1 + 0x48) = psVar19;
      *psVar19 = (short)uVar14 + sVar25;
      psVar19 = (short *)(*(longlong *)(param_1 + 0x48) + 2);
      *(short **)(param_1 + 0x48) = psVar19;
      *psVar19 = sVar24;
      psVar19 = (short *)(*(longlong *)(param_1 + 0x48) + 2);
      *(short **)(param_1 + 0x48) = psVar19;
      *psVar19 = sVar17 + sVar13 + 0x44;
      psVar19 = (short *)(*(longlong *)(param_1 + 0x48) + 2);
      *(short **)(param_1 + 0x48) = psVar19;
      uVar14 = uVar20 + 4 & 0x8000003f;
      if ((int)uVar14 < 0) {
        uVar14 = (uVar14 - 1 | 0xffffffc0) + 1;
      }
      sVar16 = sVar9 + (short)uVar14;
      *psVar19 = sVar16;
      psVar19 = (short *)(*(longlong *)(param_1 + 0x48) + 2);
      *(short **)(param_1 + 0x48) = psVar19;
      *psVar19 = sVar24;
      sVar24 = sVar17 + (uVar22 | 5) + sVar7;
      psVar19 = (short *)(*(longlong *)(param_1 + 0x48) + 2);
      *(short **)(param_1 + 0x48) = psVar19;
      *psVar19 = sVar16;
      psVar19 = (short *)(*(longlong *)(param_1 + 0x48) + 2);
      *(short **)(param_1 + 0x48) = psVar19;
      *psVar19 = (short)uVar14 + sVar25;
      psVar19 = (short *)(*(longlong *)(param_1 + 0x48) + 2);
      *(short **)(param_1 + 0x48) = psVar19;
      *psVar19 = sVar24;
      psVar19 = (short *)(*(longlong *)(param_1 + 0x48) + 2);
      *(short **)(param_1 + 0x48) = psVar19;
      *psVar19 = sVar17 + sVar13 + 0x45;
      psVar19 = (short *)(*(longlong *)(param_1 + 0x48) + 2);
      *(short **)(param_1 + 0x48) = psVar19;
      uVar14 = uVar20 + 5 & 0x8000003f;
      if ((int)uVar14 < 0) {
        uVar14 = (uVar14 - 1 | 0xffffffc0) + 1;
      }
      sVar16 = sVar9 + (short)uVar14;
      *psVar19 = sVar16;
      psVar19 = (short *)(*(longlong *)(param_1 + 0x48) + 2);
      *(short **)(param_1 + 0x48) = psVar19;
      *psVar19 = sVar24;
      sVar24 = sVar17 + (uVar22 | 6) + sVar7;
      psVar19 = (short *)(*(longlong *)(param_1 + 0x48) + 2);
      *(short **)(param_1 + 0x48) = psVar19;
      *psVar19 = sVar16;
      psVar19 = (short *)(*(longlong *)(param_1 + 0x48) + 2);
      *(short **)(param_1 + 0x48) = psVar19;
      *psVar19 = (short)uVar14 + sVar25;
      psVar19 = (short *)(*(longlong *)(param_1 + 0x48) + 2);
      *(short **)(param_1 + 0x48) = psVar19;
      *psVar19 = sVar24;
      psVar19 = (short *)(*(longlong *)(param_1 + 0x48) + 2);
      *(short **)(param_1 + 0x48) = psVar19;
      *psVar19 = sVar17 + sVar13 + 0x46;
      psVar19 = (short *)(*(longlong *)(param_1 + 0x48) + 2);
      *(short **)(param_1 + 0x48) = psVar19;
      uVar14 = uVar20 + 6 & 0x8000003f;
      if ((int)uVar14 < 0) {
        uVar14 = (uVar14 - 1 | 0xffffffc0) + 1;
      }
      sVar16 = sVar9 + (short)uVar14;
      *psVar19 = sVar16;
      psVar19 = (short *)(*(longlong *)(param_1 + 0x48) + 2);
      *(short **)(param_1 + 0x48) = psVar19;
      *psVar19 = sVar24;
      sVar24 = sVar17 + (uVar22 | 7) + sVar7;
      psVar19 = (short *)(*(longlong *)(param_1 + 0x48) + 2);
      *(short **)(param_1 + 0x48) = psVar19;
      *psVar19 = sVar16;
      psVar19 = (short *)(*(longlong *)(param_1 + 0x48) + 2);
      *(short **)(param_1 + 0x48) = psVar19;
      *psVar19 = (short)uVar14 + sVar25;
      psVar19 = (short *)(*(longlong *)(param_1 + 0x48) + 2);
      *(short **)(param_1 + 0x48) = psVar19;
      *psVar19 = sVar24;
      psVar19 = (short *)(*(longlong *)(param_1 + 0x48) + 2);
      *(short **)(param_1 + 0x48) = psVar19;
      *psVar19 = sVar17 + sVar13 + 0x47;
      psVar19 = (short *)(*(longlong *)(param_1 + 0x48) + 2);
      *(short **)(param_1 + 0x48) = psVar19;
      uVar14 = uVar20 + 7 & 0x8000003f;
      if ((int)uVar14 < 0) {
        uVar14 = (uVar14 - 1 | 0xffffffc0) + 1;
      }
      sVar16 = sVar9 + (short)uVar14;
      uVar20 = uVar20 + 8;
      *psVar19 = sVar16;
      psVar19 = (short *)(*(longlong *)(param_1 + 0x48) + 2);
      *(short **)(param_1 + 0x48) = psVar19;
      *psVar19 = sVar24;
      sVar24 = (uVar22 | 8) + sVar7 + sVar17;
      psVar19 = (short *)(*(longlong *)(param_1 + 0x48) + 2);
      *(short **)(param_1 + 0x48) = psVar19;
      *psVar19 = sVar16;
      psVar19 = (short *)(*(longlong *)(param_1 + 0x48) + 2);
      *(short **)(param_1 + 0x48) = psVar19;
      *psVar19 = (short)uVar14 + sVar25;
      psVar19 = (short *)(*(longlong *)(param_1 + 0x48) + 2);
      *(short **)(param_1 + 0x48) = psVar19;
      *psVar19 = sVar24;
      psVar19 = (short *)(*(longlong *)(param_1 + 0x48) + 2);
      *(short **)(param_1 + 0x48) = psVar19;
      *psVar19 = sVar17 + sVar13 + 0x48;
      psVar19 = (short *)(*(longlong *)(param_1 + 0x48) + 2);
      *(short **)(param_1 + 0x48) = psVar19;
      uVar14 = uVar20 & 0x8000003f;
      if ((int)uVar14 < 0) {
        uVar14 = (uVar14 - 1 | 0xffffffc0) + 1;
      }
      sVar17 = sVar9 + (short)uVar14;
      *psVar19 = sVar17;
      psVar19 = (short *)(*(longlong *)(param_1 + 0x48) + 2);
      *(short **)(param_1 + 0x48) = psVar19;
      *psVar19 = sVar24;
      psVar19 = (short *)(*(longlong *)(param_1 + 0x48) + 2);
      *(short **)(param_1 + 0x48) = psVar19;
      *psVar19 = sVar17;
      psVar19 = (short *)(*(longlong *)(param_1 + 0x48) + 2);
      *(short **)(param_1 + 0x48) = psVar19;
      *psVar19 = (short)uVar14 + sVar25;
      psVar19 = (short *)(*(longlong *)(param_1 + 0x48) + 2);
      *(short **)(param_1 + 0x48) = psVar19;
    } while ((int)uVar20 < 0x40);
    local_130 = local_130 + 1;
  } while (local_130 < 0xc);
  return;
}



/* ===== 18002ff00 FUN_18002ff00 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18002ff00(longlong param_1,char *param_2)

{
  uint uVar1;
  float fVar2;
  char cVar3;
  uint uVar4;
  float *pfVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 local_res18;
  float local_res20 [2];
  undefined8 in_stack_ffffffffffffff40;
  undefined4 uVar12;
  float local_a8 [5];
  float local_94;
  undefined8 local_90;
  
  uVar12 = (undefined4)((ulonglong)in_stack_ffffffffffffff40 >> 0x20);
  if (((((DAT_18095d334 != '\0') && (*param_2 != '\0')) && (param_2[1] != '\0')) &&
      (param_2[8] != '\0')) && ((DAT_18095d349 == '\0' || (param_2[2] != '\0')))) {
    fVar10 = *(float *)(DAT_180ca0a50 + 0x34);
    fVar11 = *(float *)(DAT_180ca0a50 + 0x30);
    fVar7 = (float)FUN_18002ee30(*(undefined4 *)(param_2 + 4),fVar10);
    fVar2 = DAT_1808ac34c;
    if (0.0 < fVar7) {
      local_a8[3] = 1.0;
      local_res18 = (ulonglong)local_res18._4_4_ << 0x20;
      if (DAT_18095cf40 == '\0') {
        local_a8[2] = 1.0;
        local_a8[0] = 0.0;
        fVar8 = 0.0;
        if (0.0 <= *(float *)(DAT_180ca0a50 + 0x40)) {
          fVar8 = *(float *)(DAT_180ca0a50 + 0x40);
        }
        DAT_180cc45b0 = DAT_180cc45b0 + fVar8;
        local_a8[1] = DAT_180cc45b0 / DAT_1808ac100;
        pfVar6 = local_a8;
        if (0.0 <= local_a8[1]) {
          pfVar6 = local_a8 + 1;
        }
        pfVar5 = local_a8 + 2;
        if (local_a8[1] <= DAT_1808ac34c) {
          pfVar5 = pfVar6;
        }
        fVar8 = DAT_1808ac34c - *pfVar5;
        local_res20[0] = DAT_1808ac34c - fVar8 * fVar8 * fVar8;
      }
      else {
        DAT_180cc45b0 = 0.175;
        local_res20[0] = DAT_1808ac34c;
      }
      fVar11 = fVar11 * DAT_1808ac1f4;
      pfVar6 = (float *)&local_res18;
      if (0.0 <= local_res20[0]) {
        pfVar6 = local_res20;
      }
      fVar10 = fVar10 * DAT_1808ac1f4;
      local_a8[4] = fVar11;
      local_94 = fVar10;
      pfVar5 = local_a8 + 3;
      if (local_res20[0] <= DAT_1808ac34c) {
        pfVar5 = pfVar6;
      }
      if ((DAT_18095d348 != '\0') && (param_2[9] != '\0')) {
        local_90 = 0;
        cVar3 = FUN_1803a1bf0(&DAT_181107930 + (longlong)DAT_181107a00 * 0x40,param_2 + 0xc,
                              &local_90);
        if (cVar3 != '\0') {
          fVar8 = (float)FUN_18053fc00((undefined4)local_90);
          fVar9 = (float)FUN_18053fc00(local_90._4_4_);
          if (fVar2 < (float)((uint)(fVar8 - fVar11) & _DAT_1808ade90)) {
            local_a8[4] = fVar8;
          }
          if (fVar2 < (float)((uint)(fVar9 - fVar10) & _DAT_1808ade90)) {
            local_94 = fVar9;
          }
        }
      }
      fVar10 = (float)DAT_18095d34c * DAT_1808ac000;
      uVar4 = FUN_18002ed80(&DAT_18095d338,*pfVar5);
      if (DAT_18095d34a == '\0') {
        uVar1 = uVar4 & 0xffffff;
      }
      else {
        fVar10 = fVar2 - fVar10;
        uVar1 = uVar4;
        uVar4 = uVar4 & 0xffffff;
      }
      FUN_18002ef90(param_1,local_a8 + 4,fVar7,uVar4,uVar1,CONCAT44(uVar12,fVar10));
      if ((uVar4 & 0xff000000) == 0) {
        return;
      }
      local_res18 = 0;
      FUN_1803fddf0(param_1,local_a8 + 4,fVar7);
      uVar12 = DAT_1808ac950;
      FUN_180400420(param_1,*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x50),uVar4,
                    DAT_1808ac950,&local_res18,0x100000);
      *(undefined4 *)(param_1 + 0x50) = 0;
      local_res18 = 0;
      FUN_1803fddf0(param_1,local_a8 + 4,fVar7);
      FUN_180400420(param_1,*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x50),uVar4,
                    uVar12,&local_res18,0x100000);
      *(undefined4 *)(param_1 + 0x50) = 0;
      return;
    }
  }
  DAT_180cc45b0 = 0.0;
  return;
}



/* ===== 1800302c0 FUN_1800302c0 ===== */

void FUN_1800302c0(longlong param_1,char *param_2,int param_3)

{
  float fVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  
  fVar6 = DAT_1808ac34c;
  fVar1 = DAT_1808ac1f4;
  if ((((DAT_18095d371._5_1_ != '\0') && (-1 < DAT_18096260c)) && (*param_2 != '\0')) &&
     (param_2[1] != '\0')) {
    if (DAT_18096260c == 2) {
      puVar3 = &DAT_18095d398;
    }
    else {
      puVar3 = &DAT_18095d388;
      if (DAT_18096260c != 1) {
        puVar3 = (undefined *)((longlong)&DAT_18095d371 + 7);
      }
    }
    fVar10 = *(float *)(DAT_180ca0a50 + 0x30) * DAT_1808ac1f4 + DAT_1808ac1f4;
    fVar9 = *(float *)(DAT_180ca0a50 + 0x34) * DAT_1808ac1f4 + DAT_1808ac1f4;
    local_98 = fVar10;
    local_94 = fVar9;
    uVar2 = FUN_18002ed80(puVar3,DAT_1808ac34c);
    if ((param_3 < 2) || (param_2[2] == '\0')) {
      fVar5 = *(float *)(puVar3 + 0xc) * DAT_1808ac294;
      if (0.0 <= fVar5) {
        if (fVar5 <= fVar6) {
          fVar6 = fVar5;
        }
        iVar4 = (int)(fVar6 * DAT_1808acb94 + fVar1);
      }
      else {
        iVar4 = 0;
      }
      fVar5 = fVar10 + DAT_1808ac428;
      fVar8 = fVar9 + DAT_1808ac428;
      fVar6 = fVar10 - DAT_1808ac428;
      fVar7 = fVar9 - DAT_1808ac428;
      local_98 = fVar5;
      local_94 = fVar8;
      local_90 = fVar6;
      local_8c = fVar7;
      FUN_1803fe590(param_1,&local_90,&local_98,iVar4 << 0x18,0,0);
      local_8c = fVar9 + fVar1;
      local_94 = fVar9 - fVar1;
      local_98 = fVar6;
      local_90 = fVar5;
      FUN_1803fe590(param_1,&local_98,&local_90,uVar2,0,0);
      local_90 = fVar10 + fVar1;
      local_98 = fVar10 - fVar1;
      local_94 = fVar7;
      local_8c = fVar8;
      FUN_1803fe590(param_1,&local_98,&local_90,uVar2,0,0);
    }
    else if (((uVar2 & 0xff000000) != 0) && (fVar1 <= (float)param_3)) {
      uVar11 = 0x30;
      FUN_1803fd9d0(param_1,&local_98);
      *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + -1;
      FUN_1803fd460(param_1,*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x50),uVar2,
                    uVar11);
      *(undefined4 *)(param_1 + 0x50) = 0;
    }
  }
  return;
}



/* ===== 1800305a0 FUN_1800305a0 ===== */

longlong FUN_1800305a0(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  char *pcVar6;
  bool bVar7;
  longlong local_res8;
  
  FUN_18002bf40();
  if (DAT_180cd1304 == '\0') {
    FUN_1803a0b60(&local_res8);
    DAT_181108a00 = local_res8;
    DAT_1811089f8 = FUN_1803a0c50(&local_res8);
    DAT_180cd1304 = '\x01';
  }
  lVar5 = DAT_1811089f8;
  if (DAT_1811089f8 != 0) {
    lVar4 = FUN_18000f3a0();
    if (lVar4 == 0) {
      pcVar6 = (char *)0x0;
    }
    else {
      lVar4 = FUN_18000f3a0();
      if (lVar4 == 0) {
        pcVar6 = (char *)0x0;
      }
      else {
        lVar4 = FUN_18000f3a0();
        if (lVar4 == 0) {
          pcVar6 = (char *)0x0;
        }
        else {
          pcVar6 = (char *)FUN_18000f3a0((ulonglong)DAT_180961974 + lVar4);
          if ((char *)0x7ffffffefffe < pcVar6 + -0x10000) {
            pcVar6 = (char *)0x0;
          }
        }
      }
    }
    if ((pcVar6 != (char *)0x0) && (iVar2 = strcmp(pcVar6,"C_CSPlayerPawn"), iVar2 == 0)) {
      if (DAT_180cc46f4 == 0) {
        if ((DAT_180ca09f0 == 0) ||
           (iVar2 = FUN_180011200(lVar5 + (ulonglong)DAT_180ca09f0), 999 < iVar2 - 1U)) {
          bVar7 = false;
        }
        else {
          bVar7 = true;
        }
      }
      else {
        cVar1 = FUN_180011220(lVar5 + (ulonglong)DAT_180cc46f4);
        bVar7 = cVar1 == '\0';
      }
      if (bVar7) {
        return lVar5;
      }
    }
  }
  lVar5 = FUN_18002c0b0();
  if (((lVar5 == 0) || (DAT_180cc4710 == 0)) || (DAT_180cc4714 == 0)) {
    return 0;
  }
  iVar2 = FUN_180011200((ulonglong)DAT_180cc4710 + lVar5);
  if (iVar2 != 2) {
    return 0;
  }
  uVar3 = FUN_180011200((ulonglong)DAT_180cc4714 + lVar5);
  FUN_1803a0940(&local_res8,uVar3);
  if (local_res8 == 0) {
    return 0;
  }
  lVar5 = FUN_18000f3a0((ulonglong)DAT_180961968 + local_res8);
  if (((lVar5 == 0) || (lVar5 = FUN_18000f3a0((ulonglong)DAT_18096196c + lVar5), lVar5 == 0)) ||
     ((lVar5 = FUN_18000f3a0((ulonglong)DAT_180961970 + lVar5), lVar5 == 0 ||
      ((pcVar6 = (char *)FUN_18000f3a0((ulonglong)DAT_180961974 + lVar5),
       (char *)0x7ffffffefffe < pcVar6 + -0x10000 ||
       (iVar2 = strcmp(pcVar6,"C_CSPlayerPawn"), iVar2 != 0)))))) {
    return 0;
  }
  return local_res8;
}



/* ===== 1800307b0 FUN_1800307b0 ===== */

undefined8 FUN_1800307b0(longlong param_1,longlong param_2)

{
  char cVar1;
  char cVar2;
  ulonglong uVar3;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    return 0;
  }
  if (param_1 != param_2) {
    if (DAT_180ca09f4 != 0) {
      uVar3 = (ulonglong)DAT_180ca09f4;
      cVar1 = FUN_180011220(param_1 + (ulonglong)DAT_180ca09f4);
      cVar2 = FUN_180011220(uVar3 + param_2);
      if (cVar1 != cVar2) {
        return 0;
      }
    }
    if ((DAT_180cc4920 == 0) &&
       (DAT_180cc4920 = FUN_180264b70("mp_teammates_are_enemies"), DAT_180cc4920 == 0)) {
      return 1;
    }
    cVar1 = FUN_180264d70(DAT_180cc4920);
    if (cVar1 != '\0') {
      return 0;
    }
  }
  return 1;
}



/* ===== 180030850 FUN_180030850 ===== */

longlong FUN_180030850(void)

{
  bool bVar1;
  bool bVar2;
  char *pcVar3;
  int iVar4;
  HMODULE pHVar5;
  HANDLE pvVar6;
  longlong lVar7;
  char *pcVar8;
  undefined8 uVar9;
  uint7 extraout_var;
  uint7 uVar10;
  uint7 extraout_var_00;
  uint7 extraout_var_01;
  char *local_38;
  ulonglong local_30;
  char *local_28;
  ulonglong uStack_20;
  undefined8 local_18;
  
  pHVar5 = GetModuleHandleA("client.dll");
  if (pHVar5 != (HMODULE)0x0) {
    local_28 = (char *)0x0;
    uStack_20 = 0;
    local_18 = 0;
    pvVar6 = GetCurrentProcess();
    iVar4 = K32GetModuleInformation(pvVar6,pHVar5,&local_28,0x18);
    if (iVar4 != 0) {
      local_30 = uStack_20 & 0xffffffff;
      local_38 = local_28;
      if ((local_28 != (char *)0x0) && (local_30 != 0)) {
        local_28 = "CLabel@panorama";
        uStack_20 = 0xf;
        DAT_180cc4590 = FUN_1801d1f10(&local_38,&local_28);
        uStack_20 = 0x1a;
        local_28 = "CTransformScale3D@panorama";
        DAT_180cc45b8 = FUN_1801d1f10(&local_38,&local_28);
        uStack_20 = 0x1b;
        local_28 = "CTransformRotate3D@panorama";
        DAT_180cc4b30 = FUN_1801d1f10(&local_38,&local_28);
        uStack_20 = 0x1e;
        local_28 = "CTransformTranslate3D@panorama";
        DAT_180cc4b38 = FUN_1801d1f10(&local_38,&local_28);
        if (((DAT_180cc45b8 == 0) || (DAT_180cc4b30 == 0)) || (DAT_180cc4b38 == 0)) {
          FUN_1802b2560("[error] hud | panorama transform vtables not found (scale %p rotate %p translate %p): Radar Override Player Angles off"
                        ,DAT_180cc45b8,DAT_180cc4b30,DAT_180cc4b38);
        }
        if (DAT_180cc4590 == 0) {
          FUN_1802b2560(
                       "[error] hud | panorama::CLabel vtable not found (Death Notices read no Assister names)"
                       );
        }
        local_28 = "CCSGO_HudReticle";
        uStack_20 = 0x10;
        lVar7 = FUN_18002e180(&local_38,&local_28);
        if (lVar7 == 0) {
LAB_180030a64:
          FUN_1802b2560("[error] hud | %s: secondary vtable / slot 6 not found","CCSGO_HudReticle");
LAB_180030a73:
          bVar1 = false;
        }
        else {
          pcVar8 = (char *)FUN_18000f3a0(lVar7 + 0x30);
          pcVar3 = local_38;
          if (((pcVar8 == (char *)0x0) || (pcVar8 < local_38)) || (local_38 + local_30 <= pcVar8))
          goto LAB_180030a64;
          iVar4 = FUN_180428df0(pcVar8,FUN_18002c900,&DAT_180cc45c8);
          if (iVar4 != 0) {
            uVar9 = FUN_180429510(iVar4);
            FUN_1802b2560("[error] hud | %s slot 6 %p: %s","CCSGO_HudReticle",pcVar8,uVar9);
            DAT_180cc45c8 = 0;
            goto LAB_180030a73;
          }
          FUN_1802b2560("[hud] %s slot 6 hooked (%p, client+0x%llx)","CCSGO_HudReticle",pcVar8,
                        (longlong)pcVar8 - (longlong)pcVar3);
          bVar1 = true;
        }
        uStack_20 = 0xe;
        local_28 = "CCSGO_HudRadar";
        lVar7 = FUN_18002e180(&local_38,&local_28);
        if (lVar7 == 0) {
LAB_180030b24:
          FUN_1802b2560("[error] hud | %s: secondary vtable / slot 6 not found","CCSGO_HudRadar");
          uVar10 = extraout_var_00;
LAB_180030b33:
          bVar2 = false;
        }
        else {
          pcVar8 = (char *)FUN_18000f3a0(lVar7 + 0x30);
          pcVar3 = local_38;
          if (((pcVar8 == (char *)0x0) || (pcVar8 < local_38)) || (local_38 + local_30 <= pcVar8))
          goto LAB_180030b24;
          iVar4 = FUN_180428df0(pcVar8,FUN_18002e0b0,&DAT_180cc4598);
          if (iVar4 != 0) {
            uVar9 = FUN_180429510(iVar4);
            FUN_1802b2560("[error] hud | %s slot 6 %p: %s","CCSGO_HudRadar",pcVar8,uVar9);
            DAT_180cc4598 = 0;
            uVar10 = extraout_var;
            goto LAB_180030b33;
          }
          uVar9 = FUN_1802b2560("[hud] %s slot 6 hooked (%p, client+0x%llx)","CCSGO_HudRadar",pcVar8
                                ,(longlong)pcVar8 - (longlong)pcVar3);
          uVar10 = (uint7)((ulonglong)uVar9 >> 8);
          bVar2 = true;
        }
        if ((bVar1) && (bVar2)) {
          return CONCAT71(uVar10,1);
        }
        goto LAB_180030b66;
      }
    }
  }
  FUN_1802b2560("[error] hud | client.dll not found");
  uVar10 = extraout_var_01;
LAB_180030b66:
  return (ulonglong)uVar10 << 8;
}



/* ===== 180030b80 FUN_180030b80 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180030b80(longlong param_1)

{
  char cVar1;
  char cVar2;
  char cVar3;
  undefined4 uVar4;
  float fVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  float *pfVar9;
  float *pfVar10;
  float fVar11;
  undefined4 uVar12;
  float local_res8 [8];
  char local_88;
  char local_87;
  char local_86;
  undefined1 local_85;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  
  if (((param_1 != 0) && (DAT_180cd0fa7 != '\0')) && (DAT_181107a40 != 0)) {
    iVar7 = FUN_1804e4d70(&DAT_180962b60);
    uVar4 = DAT_180cc45d4;
    cVar3 = DAT_180cc45d2;
    cVar2 = DAT_180cc45d1;
    cVar1 = DAT_180cc45d0;
    if (iVar7 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1804e4a90(5);
    }
    if (DAT_180962bac == 0x7fffffff) {
      DAT_180962bac = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1804e4a90(6);
    }
    local_84 = DAT_180cc45d4;
    local_88 = DAT_180cc45d0;
    local_87 = DAT_180cc45d1;
    local_86 = DAT_180cc45d2;
    local_85 = DAT_180cc45d3;
    local_80 = _DAT_180cc45d8;
    uStack_7c = _DAT_180cc45dc;
    uStack_78 = _DAT_180cc45e0;
    uStack_74 = _DAT_180cc45e4;
    FUN_1804e4e90(&DAT_180962b60);
    if ((DAT_180cc45c0 == 0) &&
       (DAT_180cc45c0 = FUN_180264b70("cl_crosshair_sniper_width"), DAT_180cc45c0 == 0)) {
      uVar8 = 1;
    }
    else {
      uVar8 = FUN_180264d70(DAT_180cc45c0);
    }
    uVar6 = DAT_1811079b4;
    fVar5 = DAT_1811079b0;
    if (((DAT_18095d2d0 == 1) && (cVar1 != '\0')) && ((cVar2 != '\0' && (cVar3 != '\0')))) {
      uVar12 = 0;
      if (DAT_18095cf40 == '\0') {
        local_res8[4] = 1.0;
        local_res8[0] = 0.0;
        fVar11 = 0.0;
        if (0.0 <= *(float *)(DAT_180ca0a50 + 0x40)) {
          fVar11 = *(float *)(DAT_180ca0a50 + 0x40);
        }
        DAT_180cc4928 = DAT_180cc4928 + fVar11;
        local_res8[2] = DAT_180cc4928 / DAT_1808ac100;
        pfVar10 = local_res8;
        if (0.0 <= local_res8[2]) {
          pfVar10 = local_res8 + 2;
        }
        pfVar9 = local_res8 + 4;
        if (local_res8[2] <= DAT_1808ac34c) {
          pfVar9 = pfVar10;
        }
        fVar11 = DAT_1808ac34c - *pfVar9;
        fVar11 = DAT_1808ac34c - fVar11 * fVar11 * fVar11;
      }
      else {
        DAT_180cc4928 = 0.175;
        fVar11 = DAT_1808ac34c;
      }
      if (0x18 < DAT_18095d31c) {
        uVar12 = FUN_18002ee30(uVar4,DAT_1811079b4);
      }
      local_res8[0] = fVar5;
      local_res8[1] = (float)uVar6;
      FUN_1802291f0(param_1,&DAT_18095d2cc,local_res8,fVar11,uVar8,uVar12);
    }
    else {
      DAT_180cc4928 = 0.0;
    }
    FUN_18002ff00(param_1,&local_88);
    FUN_1800302c0(param_1,&local_88,uVar8);
  }
  return;
}



/* ===== 180030e60 FUN_180030e60 ===== */

void FUN_180030e60(void)

{
  uint uVar1;
  int iVar2;
  HMODULE pHVar3;
  longlong lVar4;
  HANDLE pvVar5;
  longlong lVar6;
  char *local_38;
  ulonglong local_30;
  char *local_28;
  ulonglong uStack_20;
  undefined8 local_18;
  
  if (DAT_180cc4c00 != '\0') {
    return;
  }
  if (DAT_1811089f0 == 0) {
    return;
  }
  DAT_180cc4c04 = FUN_18038eaf0("C_SmokeGrenadeProjectile","m_nSmokeEffectTickBegin");
  DAT_180cc4c08 = FUN_18038eaf0("C_SmokeGrenadeProjectile","m_bDidSmokeEffect");
  DAT_180cc4c0c = FUN_18038eaf0("C_SmokeGrenadeProjectile","m_vSmokeDetonationPos");
  DAT_180cc4c10 = FUN_18038eaf0("C_BaseEntity","m_lifeState");
  DAT_180cc4c14 = FUN_18038eaf0("C_BaseEntity","m_hOwnerEntity");
  DAT_180cc4c18 = FUN_18038eaf0("C_Inferno","m_firePositions");
  DAT_180cc4c1c = FUN_18038eaf0("C_Inferno","m_fireParentPositions");
  DAT_180cc4c20 = FUN_18038eaf0("C_Inferno","m_bFireIsBurning");
  DAT_180cc4c24 = FUN_18038eaf0("C_Inferno","m_nInfernoType");
  DAT_180cc4c28 = FUN_18038eaf0("C_EconEntity","m_AttributeManager");
  DAT_180cc4c2c = FUN_18038eaf0("C_AttributeContainer","m_Item");
  DAT_180cc4c30 = FUN_18038eaf0("C_EconItemView","m_iItemDefinitionIndex");
  pHVar3 = GetModuleHandleA("client.dll");
  if (pHVar3 == (HMODULE)0x0) {
    local_28 = (char *)0x0;
    uStack_20 = 0;
  }
  else {
    local_28 = (char *)0x0;
    uStack_20 = 0;
    local_18 = 0;
    pvVar5 = GetCurrentProcess();
    iVar2 = K32GetModuleInformation(pvVar5,pHVar3,&local_28,0x18);
    if (iVar2 == 0) {
      uStack_20 = 0;
      local_28 = (char *)0x0;
    }
    else {
      uStack_20 = uStack_20 & 0xffffffff;
    }
  }
  local_38 = "66 C7 81 ? ? ? ? 00 01 48 81 C1 ? ? ? ? E8 ? ? ? ? 48 8B CB 48 83 C4 20 5B E9";
  local_30 = 0x4d;
  lVar4 = FUN_1801d1e00(&local_28);
  lVar6 = lVar4 + 0xc;
  if (lVar4 == 0) {
    lVar6 = 0;
  }
  if (lVar6 == 0) {
    DAT_180cc4c34 = 0;
  }
  else {
    DAT_180cc4c34 = FUN_180011200();
  }
  pHVar3 = GetModuleHandleA("client.dll");
  if (pHVar3 == (HMODULE)0x0) {
    local_30 = 0;
    local_38 = (char *)0x0;
  }
  else {
    local_28 = (char *)0x0;
    uStack_20 = 0;
    local_18 = 0;
    pvVar5 = GetCurrentProcess();
    iVar2 = K32GetModuleInformation(pvVar5,pHVar3,&local_28,0x18);
    if (iVar2 == 0) {
      local_30 = 0;
      local_38 = (char *)0x0;
    }
    else {
      local_30 = uStack_20 & 0xffffffff;
      local_38 = local_28;
    }
  }
  local_28 = 
  "48 8B 53 18 4C 8B 4A ? 49 8B 44 C1 08 4C 0F A3 C0 73 ? 48 8B 43 08 C7 00 00 00 80 3F 32 C0 48 8B 5C 24 ? 48 83 C4 30 5F C3 48 63 82 ? ? ? ? 4C 8D 44 24"
  ;
  uStack_20 = 0x97;
  lVar6 = FUN_1801d1e00(&local_38,&local_28);
  if (lVar6 == 0) {
    DAT_180cc4c38 = 0;
  }
  else {
    uVar1 = FUN_180011220(lVar6 + 7);
    DAT_180cc4c38 = uVar1 & 0xff;
    if (lVar6 != -0x2d) {
      DAT_180cc4c3c = FUN_180011200();
      goto LAB_180031102;
    }
  }
  DAT_180cc4c3c = 0;
LAB_180031102:
  pHVar3 = GetModuleHandleA("client.dll");
  if (pHVar3 == (HMODULE)0x0) {
    local_30 = 0;
    local_38 = (char *)0x0;
  }
  else {
    local_28 = (char *)0x0;
    uStack_20 = 0;
    local_18 = 0;
    pvVar5 = GetCurrentProcess();
    iVar2 = K32GetModuleInformation(pvVar5,pHVar3,&local_28,0x18);
    if (iVar2 == 0) {
      local_30 = 0;
      local_38 = (char *)0x0;
    }
    else {
      local_30 = uStack_20 & 0xffffffff;
      local_38 = local_28;
    }
  }
  local_28 = 
  "48 C1 E0 0F 48 8D 54 24 ? 48 03 C1 0F 29 74 24 ? 48 03 C0 C7 44 24 ? 00 00 80 3F 48 8D 4C 24 ? C7 44 24 ? 00 00 00 00 0F 57 F6 F3 41 0F 10 84 C1"
  ;
  uStack_20 = 0x90;
  lVar4 = FUN_1801d1e00(&local_38);
  lVar6 = lVar4 + 0x32;
  if (lVar4 == 0) {
    lVar6 = 0;
  }
  if (lVar6 == 0) {
    DAT_180cc4c40 = 0;
  }
  else {
    DAT_180cc4c40 = FUN_180011200();
  }
  if ((((DAT_180cc4c34 == 0) || (DAT_180cc4c38 == 0)) || (DAT_180cc4c3c == 0)) ||
     (DAT_180cc4c40 == 0)) {
    FUN_1802b2560("[error] nl_radius | smoke volume layout (volume %x data %x frame %x cells %x)",
                  DAT_180cc4c34,DAT_180cc4c38,DAT_180cc4c3c,DAT_180cc4c40);
  }
  DAT_180cc4c00 = 1;
  if (((DAT_180cc4c34 == 0) || (DAT_180cc4c38 == 0)) ||
     ((DAT_180cc4c3c == 0 || (DAT_180cc4c40 == 0)))) {
    DAT_180cc4c00 = 1;
    DAT_180ca0e5e = 0;
    return;
  }
  DAT_180ca0e5e = 1;
  return;
}



/* ===== 180031230 FUN_180031230 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_180031230(longlong param_1,char param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar5 = DAT_1808ac34c;
  fVar4 = 0.0;
  if (param_2 == '\0') {
    fVar3 = 0.0;
  }
  else {
    fVar3 = DAT_1808ac34c;
  }
  if ((*(char *)(param_1 + 1) == '\0') || (*(float *)(param_1 + 8) != fVar3)) {
    *(float *)(param_1 + 8) = fVar3;
    *(undefined4 *)(param_1 + 0xc) = 0;
    fVar5 = *(float *)(param_1 + 4);
    fVar4 = fVar3;
    if (fVar5 <= fVar3) {
      fVar4 = fVar5;
    }
    fVar1 = fVar3;
    if (fVar3 <= fVar5) {
      fVar1 = fVar5;
    }
    *(float *)(param_1 + 0x10) = fVar4;
    *(float *)(param_1 + 0x14) = fVar1;
    if (*(char *)(param_1 + 1) == '\0') {
      *(float *)(param_1 + 4) = fVar3;
      *(undefined1 *)(param_1 + 1) = 1;
      return fVar3;
    }
    return fVar5;
  }
  if ((float)((uint)(*(float *)(param_1 + 4) - fVar3) & _DAT_1808ade90) <= DAT_1808abf80) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    return *(float *)(param_1 + 4);
  }
  param_3 = param_3 + *(float *)(param_1 + 0xc);
  *(float *)(param_1 + 0xc) = param_3;
  param_3 = param_3 / DAT_1808ac154;
  if (param_3 <= fVar5) {
    if (param_3 <= 0.0) {
      param_3 = 0.0;
    }
    fVar4 = fVar5 - param_3;
  }
  fVar1 = *(float *)(param_1 + 0x14);
  fVar2 = *(float *)(param_1 + 0x10);
  fVar5 = fVar5 - fVar4 * fVar4 * fVar4;
  if ((fVar1 + fVar2) * DAT_1808ac1f4 < fVar3) {
    fVar2 = (fVar3 - fVar2) * fVar5 + fVar2;
    *(float *)(param_1 + 4) = fVar2;
    return fVar2;
  }
  fVar1 = fVar1 - (fVar1 - fVar3) * fVar5;
  *(float *)(param_1 + 4) = fVar1;
  return fVar1;
}



/* ===== 180031380 FUN_180031380 ===== */

undefined8 FUN_180031380(float *param_1,longlong *param_2,uint param_3,uint param_4)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  undefined1 local_38 [24];
  
  if (*param_2 == 0) {
    return 1;
  }
  if (DAT_180ca09f0 == 0) {
    return 1;
  }
  iVar2 = FUN_180011200(*param_2 + (ulonglong)DAT_180ca09f0);
  if (999 < iVar2 - 1U) {
    return 1;
  }
  if ((((*param_2 == 0) || (DAT_180ca09f8 == 0)) ||
      (lVar4 = FUN_18000f3a0((ulonglong)DAT_180ca09f8 + *param_2), lVar4 == 0)) ||
     (DAT_180ca0950 == 0)) {
    fVar6 = 0.0;
    fVar7 = 0.0;
  }
  else {
    pfVar5 = (float *)FUN_1800111b0(local_38,lVar4 + (ulonglong)DAT_180ca0950);
    fVar6 = *pfVar5;
    fVar7 = pfVar5[1];
  }
  fVar6 = (param_1[1] - fVar7) * (param_1[1] - fVar7) + (*param_1 - fVar6) * (*param_1 - fVar6);
  if (fVar6 < 0.0) {
    fVar6 = (float)FUN_18051af10(fVar6);
  }
  else {
    fVar6 = SQRT(fVar6);
  }
  if (DAT_1808acc44 < fVar6) {
    lVar4 = FUN_1803a08e0(param_2);
    if (((lVar4 == 0) || (DAT_180cc4c28 == 0)) || ((DAT_180cc4c2c == 0 || (DAT_180cc4c30 == 0)))) {
      uVar3 = 0;
    }
    else {
      uVar1 = FUN_180011440((ulonglong)DAT_180cc4c28 +
                            (ulonglong)DAT_180cc4c2c + lVar4 + (ulonglong)DAT_180cc4c30);
      uVar3 = (uint)uVar1;
    }
    if ((uVar3 != param_3) && (uVar3 != param_4)) {
      return 0;
    }
  }
  return 1;
}



/* ===== 1800314c0 FUN_1800314c0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800314c0(longlong param_1,float param_2,longlong *param_3)

{
  bool bVar1;
  float fVar2;
  longlong *plVar3;
  uint uVar4;
  longlong lVar5;
  float *pfVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float local_128;
  float fStack_124;
  float local_120;
  uint local_118;
  float local_110;
  float local_10c;
  float local_108;
  float local_100;
  longlong *local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  uint local_e0 [42];
  
  if ((((*param_3 == param_3[1]) && (DAT_180cc4c34 != 0)) && (DAT_180cc4c38 != 0)) &&
     ((uVar12 = (ulonglong)DAT_180cc4c3c, DAT_180cc4c3c != 0 &&
      (uVar11 = (ulonglong)DAT_180cc4c40, DAT_180cc4c40 != 0)))) {
    param_1 = param_1 + (ulonglong)DAT_180cc4c34;
    local_f8 = param_3;
    lVar5 = FUN_18000f3a0((ulonglong)DAT_180cc4c38 + param_1);
    if (lVar5 != 0) {
      fVar13 = (float)FUN_18000f3d0(param_1 + 0xc);
      fVar15 = ((param_2 - fVar13) - DAT_1808ac0c0) / DAT_1808ac40c;
      if (0.0 <= fVar15) {
        fVar16 = DAT_1808ac34c;
        if (fVar15 <= DAT_1808ac34c) {
          fVar16 = fVar15;
        }
      }
      else {
        fVar16 = 0.0;
      }
      fVar13 = ((param_2 - fVar13) - DAT_1808ac964) / DAT_1808acde4;
      if (0.0 <= fVar13) {
        fVar15 = DAT_1808ac34c;
        if (fVar13 <= DAT_1808ac34c) {
          fVar15 = fVar13;
        }
      }
      else {
        fVar15 = 0.0;
      }
      if (((0.0 < (DAT_1808ac658 - (fVar15 + fVar15)) * fVar15 * fVar15 *
                  (DAT_1808ac658 - (fVar16 + fVar16)) * fVar16 * fVar16) &&
          (uVar4 = FUN_180011200(param_1 + uVar12), uVar4 < 0x401)) &&
         (lVar5 = (longlong)(int)uVar4 * 0x80000 + lVar5 + uVar11, lVar5 - 0x10000U < 0x7ffffffeffff
         )) {
        pfVar6 = (float *)FUN_1800111b0(&local_110,param_1 + 0xe8);
        fVar2 = DAT_1808ac950;
        fVar16 = DAT_1808ac864;
        fVar15 = DAT_1808ac750;
        local_100 = *pfVar6;
        fVar13 = pfVar6[1];
        local_f0 = _DAT_1808ad750;
        uStack_e8 = _UNK_1808ad758;
        local_118 = 4;
        fVar21 = (pfVar6[2] + DAT_1808ac864) - DAT_1808ac864;
        do {
          local_128 = 0.0;
          fStack_124 = 0.0;
          bVar1 = false;
          local_120 = 0.0;
          fVar19 = 0.0;
          local_110 = 0.0;
          fVar17 = 0.0;
          local_10c = 0.0;
          uVar4 = ((local_118 & 0x3ff) << 0x10 | local_118 & 0x3ff) & 0x30000ff;
          fVar20 = 0.0;
          uVar10 = 4;
          uVar4 = (uVar4 << 8 | uVar4) & 0x300f00f;
          local_108 = 0.0;
          uVar4 = uVar4 << 4 | uVar4;
          fVar18 = (float)(int)(local_118 - 0x10) * fVar2 + local_100 + fVar16;
          do {
            puVar9 = (uint *)&local_f0;
            uVar7 = ((uVar10 & 0x3ff) << 0x10 | uVar10 & 0x3ff) & 0x30000ff;
            uVar7 = (uVar7 << 8 | uVar7) & 0x300f00f;
            uVar7 = uVar7 << 4 | uVar7;
            do {
              uVar8 = ((*puVar9 & 0x3ff) << 0x10 | *puVar9 & 0x3ff) & 0x30000ff;
              uVar8 = (uVar8 << 8 | uVar8) & 0x300f00f;
              uVar8 = (uVar8 << 4 | uVar8) & 0x30c30c3;
              fVar14 = (float)FUN_18000f3d0((ulonglong)
                                            ((((uVar8 * 4 | uVar8) & 0x9249249 |
                                               (uVar7 & 0x2082082) * 2 | uVar4 & 0x2082082) * 2 |
                                             uVar7 & 0x1041041) * 2 | uVar4 & 0x1041041) * 0x10 +
                                            lVar5);
              plVar3 = local_f8;
              if (fVar15 <= fVar14) {
                fVar17 = (float)(int)(uVar10 - 0x10) * fVar2 + fVar13 + fVar16;
                fVar19 = fVar18;
                fVar20 = fVar21;
                local_10c = fVar17;
                if (!bVar1) {
                  bVar1 = true;
                  local_120 = fVar21;
                  local_128 = fVar18;
                  fStack_124 = fVar17;
                }
                break;
              }
              puVar9 = puVar9 + 1;
            } while (puVar9 != local_e0);
            uVar10 = uVar10 + 1;
          } while ((int)uVar10 < 0x1d);
          if ((bVar1) &&
             (((local_110 = fVar19, local_108 = fVar20, FUN_180036f10(local_f8,&local_128),
               local_128 != fVar19 || (fStack_124 != fVar17)) || (local_120 != fVar20)))) {
            FUN_180036f10(plVar3,&local_110);
          }
          local_118 = local_118 + 1;
        } while ((int)local_118 < 0x1d);
      }
    }
  }
  return;
}



/* ===== 1800319a0 FUN_1800319a0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800319a0(longlong param_1,char param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  longlong lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  undefined8 local_108;
  undefined4 uStack_100;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined1 uStack_e0;
  undefined7 uStack_df;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  
  if (param_2 == '\0') {
    uVar21 = DAT_1808acae4;
  }
  else {
    uVar21 = DAT_1808acad4;
  }
  lVar14 = *(longlong *)(param_1 + 0x20);
  uVar6 = _DAT_1808ade90;
  fVar7 = DAT_1808ac918;
  fVar8 = DAT_1808ac000;
  for (lVar9 = *(longlong *)(param_1 + 0x18); DAT_1808ac000 = fVar8, DAT_1808ac918 = fVar7,
      _DAT_1808ade90 = uVar6, lVar9 != lVar14; lVar9 = lVar9 + 0x50) {
    *(undefined1 *)(lVar9 + 0x28) = 0;
    *(undefined8 *)(lVar9 + 0x20) = 0;
    uVar6 = _DAT_1808ade90;
    fVar7 = DAT_1808ac918;
    fVar8 = DAT_1808ac000;
  }
  uVar13 = 0;
  do {
    lVar14 = uVar13 * 0x38;
    if (*(char *)(lVar14 + 0x38 + param_1) != '\0') {
      fVar1 = *(float *)(lVar14 + 0x3c + param_1);
      uVar10 = 0;
      fVar2 = *(float *)(lVar14 + 0x40 + param_1);
      fVar3 = *(float *)(lVar14 + 0x44 + param_1);
      do {
        lVar9 = uVar10 * 0x38;
        if (*(char *)(param_1 + 0x38 + lVar9) != '\0') {
          fVar19 = *(float *)(param_1 + 0x3c + lVar9);
          fVar18 = *(float *)(param_1 + 0x40 + lVar9);
          fVar20 = *(float *)(param_1 + 0x44 + lVar9);
          fVar15 = fVar19 - fVar1;
          fVar16 = fVar18 - fVar2;
          fVar17 = fVar20 - fVar3;
          if (fVar8 < fVar16 * fVar16 + fVar15 * fVar15 + fVar17 * fVar17) {
            fStack_fc = *(float *)(lVar14 + 0x48 + param_1);
            local_f8 = *(float *)(lVar14 + 0x4c + param_1);
            fVar19 = fVar19 - fStack_fc;
            fStack_f4 = *(float *)(lVar14 + 0x50 + param_1);
            fVar18 = fVar18 - local_f8;
            fVar20 = fVar20 - fStack_f4;
            if ((fVar18 * fVar18 + fVar19 * fVar19 + fVar20 * fVar20 <= fVar8) &&
               ((float)((uint)fVar17 & uVar6) <= fVar7)) goto LAB_180031b24;
          }
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < 0x40);
      fStack_fc = fVar1;
      local_f8 = fVar2;
      fStack_f4 = fVar3;
LAB_180031b24:
      puVar11 = *(undefined8 **)(param_1 + 0x18);
      puVar5 = *(undefined8 **)(param_1 + 0x20);
      puVar12 = (undefined8 *)0x0;
      if (puVar11 == puVar5) {
LAB_180031bfb:
        if (puVar12 != (undefined8 *)0x0) {
          puVar12[7] = *(undefined8 *)(lVar14 + 0x3c + param_1);
          uVar4 = *(undefined4 *)(lVar14 + 0x44 + param_1);
          *(float *)((longlong)puVar12 + 0x44) = fStack_fc;
          *(float *)(puVar12 + 9) = local_f8;
          *(float *)((longlong)puVar12 + 0x4c) = fStack_f4;
          *(undefined4 *)(puVar12 + 4) = uVar21;
          *(undefined4 *)(puVar12 + 8) = uVar4;
          *(undefined4 *)((longlong)puVar12 + 0x24) = 0x3f800000;
          *(undefined1 *)(puVar12 + 5) = 1;
          goto LAB_180031c48;
        }
      }
      else {
        do {
          if (puVar11[6] == *(longlong *)(lVar14 + 0x58 + param_1)) {
            puVar12 = puVar11;
            goto LAB_180031bfb;
          }
          puVar11 = puVar11 + 10;
        } while (puVar11 != puVar5);
      }
      uStack_100 = *(undefined4 *)(lVar14 + 0x44 + param_1);
      local_108 = *(undefined8 *)(lVar14 + 0x3c + param_1);
      local_d8 = *(undefined8 *)(lVar14 + 0x58 + param_1);
      local_c8 = *(undefined4 *)(lVar14 + 0x44 + param_1);
      uStack_f0 = 0;
      uStack_e4 = 0x3f800000;
      uStack_e0 = 1;
      if (puVar5 == *(undefined8 **)(param_1 + 0x28)) {
        local_e8 = uVar21;
        uStack_d0 = local_108;
        fStack_c4 = fStack_fc;
        fStack_c0 = local_f8;
        fStack_bc = fStack_f4;
        FUN_180033dc0(param_1 + 0x18,puVar5,&local_108);
      }
      else {
        *puVar5 = local_108;
        puVar5[1] = CONCAT44(fStack_fc,uStack_100);
        puVar5[2] = CONCAT44(fStack_f4,local_f8);
        puVar5[3] = 0;
        puVar5[4] = CONCAT44(0x3f800000,uVar21);
        puVar5[5] = CONCAT71(uStack_df,1);
        puVar5[6] = local_d8;
        puVar5[7] = local_108;
        puVar5[8] = CONCAT44(fStack_fc,local_c8);
        puVar5[9] = CONCAT44(fStack_f4,local_f8);
        *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + 0x50;
      }
    }
LAB_180031c48:
    uVar13 = uVar13 + 1;
    if (0x3f < uVar13) {
      return;
    }
  } while( true );
}



/* ===== 180031ca0 FUN_180031ca0 ===== */

void FUN_180031ca0(longlong param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  longlong lVar7;
  bool bVar8;
  char cVar9;
  int iVar10;
  float *pfVar11;
  undefined8 uVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined1 local_78 [16];
  undefined1 local_68 [64];
  
  if (((DAT_180cc4c18 != 0) && (DAT_180cc4c1c != 0)) &&
     (uVar14 = (ulonglong)DAT_180cc4c20, DAT_180cc4c20 != 0)) {
    bVar8 = false;
    uVar15 = 0;
    do {
      cVar9 = FUN_180011220(param_1 + uVar14 + uVar15);
      lVar13 = uVar15 * 0x38;
      if ((*(longlong *)(param_2 + 0x58 + lVar13) == 0) && (cVar9 == '\x01')) {
        lVar7 = *(longlong *)(param_2 + 0xe38);
        bVar8 = true;
        *(longlong *)(param_2 + 0xe38) = lVar7 + 1;
        *(longlong *)(param_2 + 0x58 + lVar13) = lVar7;
      }
      pfVar11 = (float *)FUN_1800111b0(local_78,(ulonglong)DAT_180cc4c18 + param_1 + uVar15 * 0xc);
      fVar1 = *pfVar11;
      fVar2 = pfVar11[1];
      fVar3 = pfVar11[2];
      pfVar11 = (float *)FUN_1800111b0(local_68,(ulonglong)DAT_180cc4c1c + param_1 + uVar15 * 0xc);
      fVar4 = *pfVar11;
      fVar5 = pfVar11[1];
      fVar6 = pfVar11[2];
      if (((fVar1 != *(float *)(param_2 + 0x3c + lVar13)) ||
          (fVar2 != *(float *)(param_2 + 0x40 + lVar13))) ||
         (fVar3 != *(float *)(param_2 + 0x44 + lVar13))) {
        *(float *)(param_2 + 0x3c + lVar13) = fVar1;
        bVar8 = true;
        *(float *)(param_2 + 0x40 + lVar13) = fVar2;
        *(float *)(param_2 + 0x44 + lVar13) = fVar3;
      }
      if (((fVar4 != *(float *)(param_2 + 0x48 + lVar13)) ||
          (fVar5 != *(float *)(param_2 + 0x4c + lVar13))) ||
         (fVar6 != *(float *)(param_2 + 0x50 + lVar13))) {
        *(float *)(param_2 + 0x48 + lVar13) = fVar4;
        bVar8 = true;
        *(float *)(param_2 + 0x4c + lVar13) = fVar5;
        *(float *)(param_2 + 0x50 + lVar13) = fVar6;
      }
      if ((bool)*(char *)(param_2 + 0x38 + lVar13) != (cVar9 == '\x01')) {
        *(bool *)(param_2 + 0x38 + lVar13) = cVar9 == '\x01';
        bVar8 = true;
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 < 0x40);
    if (bVar8) {
      if ((DAT_180cc4c24 == 0) ||
         (iVar10 = FUN_180011200(param_1 + (ulonglong)DAT_180cc4c24), iVar10 != 1)) {
        uVar12 = 0;
      }
      else {
        uVar12 = 1;
      }
      FUN_1800319a0(param_2,uVar12);
    }
  }
  return;
}



/* ===== 180031e90 FUN_180031e90 ===== */

void FUN_180031e90(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  
  bVar4 = false;
  uVar11 = 0;
  lVar8 = 0;
  do {
    iVar2 = *(int *)(param_1 + 0x14);
    lVar6 = uVar11 * 0x38;
    iVar10 = (int)uVar11;
    if (iVar10 < iVar2) {
      iVar9 = *(int *)(param_1 + 0x670 + uVar11 * 0xc);
      iVar7 = *(int *)(param_1 + 0x674 + uVar11 * 0xc);
      iVar5 = *(int *)(param_1 + 0x678 + uVar11 * 0xc);
    }
    else {
      iVar9 = -1;
      iVar7 = 0;
      iVar5 = 0;
    }
    cVar1 = *(char *)(param_1 + 0x62c + uVar11);
    if (((*(int *)(lVar6 + 0x60 + param_2) == iVar9) && (*(int *)(lVar6 + 100 + param_2) == iVar7))
       && (*(int *)(lVar6 + 0x68 + param_2) == iVar5)) {
      if (*(longlong *)(lVar6 + 0x58 + param_2) == 0) goto joined_r0x000180031f3f;
    }
    else {
      *(undefined8 *)(lVar6 + 0x58 + param_2) = 0;
      bVar4 = true;
      *(int *)(lVar6 + 0x60 + param_2) = iVar9;
      *(int *)(lVar6 + 100 + param_2) = iVar7;
      *(int *)(lVar6 + 0x68 + param_2) = iVar5;
joined_r0x000180031f3f:
      if ((iVar10 < iVar2) || (cVar1 == '\x01')) {
        bVar4 = true;
        lVar3 = *(longlong *)(param_2 + 0xe38);
        *(longlong *)(param_2 + 0xe38) = lVar3 + 1;
        *(longlong *)(lVar6 + 0x58 + param_2) = lVar3;
      }
    }
    if (((*(float *)(param_1 + 0x2c + lVar8) != *(float *)(lVar6 + 0x3c + param_2)) ||
        (*(float *)(param_1 + 0x30 + lVar8) != *(float *)(lVar6 + 0x40 + param_2))) ||
       (*(float *)(param_1 + 0x34 + lVar8) != *(float *)(lVar6 + 0x44 + param_2))) {
      bVar4 = true;
      *(undefined8 *)(lVar6 + 0x3c + param_2) = *(undefined8 *)(lVar8 + 0x2c + param_1);
      *(undefined4 *)(lVar6 + 0x44 + param_2) = *(undefined4 *)(lVar8 + 0x34 + param_1);
    }
    if (((*(float *)(param_1 + 0x32c + lVar8) != *(float *)(lVar6 + 0x48 + param_2)) ||
        (*(float *)(param_1 + 0x330 + lVar8) != *(float *)(lVar6 + 0x4c + param_2))) ||
       (*(float *)(param_1 + 0x334 + lVar8) != *(float *)(lVar6 + 0x50 + param_2))) {
      bVar4 = true;
      *(undefined8 *)(lVar6 + 0x48 + param_2) = *(undefined8 *)(lVar8 + 0x32c + param_1);
      *(undefined4 *)(lVar6 + 0x50 + param_2) = *(undefined4 *)(lVar8 + 0x334 + param_1);
    }
    if ((bool)*(char *)(lVar6 + 0x38 + param_2) != (cVar1 == '\x01')) {
      *(bool *)(lVar6 + 0x38 + param_2) = cVar1 == '\x01';
      bVar4 = true;
    }
    iVar2 = *(int *)(param_1 + 0x14);
    if (iVar10 + 1 < iVar2) {
      iVar9 = *(int *)(param_1 + 0x67c + lVar8);
      iVar7 = *(int *)(param_1 + 0x680 + lVar8);
      iVar5 = *(int *)(param_1 + 0x684 + lVar8);
    }
    else {
      iVar9 = -1;
      iVar7 = 0;
      iVar5 = 0;
    }
    cVar1 = *(char *)(param_1 + 0x62d + uVar11);
    if (((*(int *)(lVar6 + 0x98 + param_2) == iVar9) && (*(int *)(lVar6 + 0x9c + param_2) == iVar7))
       && (*(int *)(lVar6 + 0xa0 + param_2) == iVar5)) {
      if (*(longlong *)(lVar6 + 0x90 + param_2) == 0) goto joined_r0x0001800320b3;
    }
    else {
      *(undefined8 *)(lVar6 + 0x90 + param_2) = 0;
      bVar4 = true;
      *(int *)(lVar6 + 0x98 + param_2) = iVar9;
      *(int *)(lVar6 + 0x9c + param_2) = iVar7;
      *(int *)(lVar6 + 0xa0 + param_2) = iVar5;
joined_r0x0001800320b3:
      if ((iVar10 + 1 < iVar2) || (cVar1 == '\x01')) {
        bVar4 = true;
        lVar3 = *(longlong *)(param_2 + 0xe38);
        *(longlong *)(param_2 + 0xe38) = lVar3 + 1;
        *(longlong *)(lVar6 + 0x90 + param_2) = lVar3;
      }
    }
    if (((*(float *)(param_1 + 0x38 + lVar8) != *(float *)(lVar6 + 0x74 + param_2)) ||
        (*(float *)(param_1 + 0x3c + lVar8) != *(float *)(lVar6 + 0x78 + param_2))) ||
       (*(float *)(param_1 + 0x40 + lVar8) != *(float *)(lVar6 + 0x7c + param_2))) {
      bVar4 = true;
      *(undefined8 *)(lVar6 + 0x74 + param_2) = *(undefined8 *)(lVar8 + 0x38 + param_1);
      *(undefined4 *)(lVar6 + 0x7c + param_2) = *(undefined4 *)(lVar8 + 0x40 + param_1);
    }
    if (((*(float *)(param_1 + 0x338 + lVar8) != *(float *)(lVar6 + 0x80 + param_2)) ||
        (*(float *)(param_1 + 0x33c + lVar8) != *(float *)(lVar6 + 0x84 + param_2))) ||
       (*(float *)(param_1 + 0x340 + lVar8) != *(float *)(lVar6 + 0x88 + param_2))) {
      bVar4 = true;
      *(undefined8 *)(lVar6 + 0x80 + param_2) = *(undefined8 *)(lVar8 + 0x338 + param_1);
      *(undefined4 *)(lVar6 + 0x88 + param_2) = *(undefined4 *)(lVar8 + 0x340 + param_1);
    }
    if ((bool)*(char *)(lVar6 + 0x70 + param_2) != (cVar1 == '\x01')) {
      *(bool *)(lVar6 + 0x70 + param_2) = cVar1 == '\x01';
      bVar4 = true;
    }
    uVar11 = uVar11 + 2;
    lVar8 = lVar8 + 0x18;
    if (0x3f < uVar11) {
      if (bVar4) {
        FUN_1800319a0(param_2,*(undefined1 *)(param_1 + 0x10));
      }
      return;
    }
  } while( true );
}



/* ===== 1800321d0 FUN_1800321d0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800321d0(void)

{
  code *pcVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  uint uVar10;
  uint uVar11;
  char cVar12;
  undefined1 uVar13;
  char cVar14;
  int iVar15;
  undefined4 uVar16;
  longlong lVar17;
  longlong lVar18;
  char *_Str1;
  longlong *plVar19;
  undefined8 *puVar20;
  longlong *plVar21;
  undefined1 *puVar22;
  longlong lVar23;
  undefined1 *puVar24;
  longlong *plVar25;
  undefined8 *puVar26;
  longlong lVar27;
  undefined1 *puVar28;
  ulonglong uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined4 uVar33;
  int iVar34;
  float fVar35;
  float fVar36;
  undefined *local_res8;
  longlong local_res10;
  longlong local_res18;
  undefined1 local_res20 [8];
  undefined1 auStack_1d8 [8];
  undefined1 auStack_1d0 [24];
  undefined8 local_1b8;
  undefined4 local_1b0;
  longlong local_1a8;
  undefined1 local_1a0;
  undefined4 local_19c;
  float local_198;
  undefined8 local_194;
  undefined8 uStack_18c;
  float local_184;
  float local_180;
  float local_17c;
  float local_178;
  undefined4 local_174;
  undefined8 local_170;
  undefined8 local_168;
  undefined4 local_160;
  longlong *local_158;
  longlong *local_150;
  longlong local_148;
  undefined1 local_140 [16];
  undefined1 local_130 [16];
  undefined1 local_120 [16];
  undefined1 local_110 [16];
  undefined1 local_100 [192];
  
  if (DAT_180cc4c60 != DAT_180cc4c68) {
    DAT_180cc4c68 = DAT_180cc4c60;
  }
  if (((DAT_18095d130 == '\0') && (DAT_18095d158 == '\0')) && (DAT_18095d190 == '\0')) {
    FUN_180033320(&DAT_180ca0c20);
    puVar24 = auStack_1d8;
    goto LAB_180032270;
  }
  FUN_180030e60();
  uVar16 = *(undefined4 *)(DAT_180ca0a50 + 0x40);
  local_res8 = (undefined *)CONCAT44(local_res8._4_4_,uVar16);
  if ((DAT_180961a50 == 0) || (lVar17 = FUN_18000f3a0(), lVar17 == 0)) {
    fVar30 = 0.0;
  }
  else {
    fVar30 = (float)FUN_18000f3d0(lVar17 + 0x30);
  }
  if (DAT_180cd1304 == '\0') {
    FUN_1803a0b60(&local_res10);
    DAT_181108a00 = local_res10;
    local_res18 = FUN_1803a0c50(&local_res10);
    DAT_180cd1304 = '\x01';
  }
  else {
    local_res18 = DAT_1811089f8;
  }
  lVar17 = local_res18;
  puVar26 = DAT_180ca0c28;
  DAT_1811089f8 = local_res18;
  for (puVar20 = (undefined8 *)*DAT_180ca0c28; puVar20 != puVar26; puVar20 = (undefined8 *)*puVar20)
  {
    *(undefined1 *)(puVar20 + 3) = 0;
  }
  FUN_1803a09f0(&local_158);
  uVar10 = _DAT_1808ade90;
  fVar9 = DAT_1808ac964;
  fVar8 = DAT_1808ac658;
  fVar7 = DAT_1808ac34c;
  fVar6 = DAT_1808ac000;
  fVar5 = DAT_1808abfbc;
  puVar28 = auStack_1d8;
  puVar22 = auStack_1d8;
  if (local_158 != local_150) {
    plVar25 = local_158;
    do {
      if (*plVar25 != 0) {
        lVar18 = FUN_18000f3a0((ulonglong)DAT_180961968 + *plVar25);
        if (lVar18 != 0) {
          lVar18 = FUN_18000f3a0((ulonglong)DAT_18096196c + lVar18);
          if (lVar18 != 0) {
            lVar18 = FUN_18000f3a0((ulonglong)DAT_180961970 + lVar18);
            if (lVar18 != 0) {
              _Str1 = (char *)FUN_18000f3a0((ulonglong)DAT_180961974 + lVar18);
              if ((_Str1 + -0x10000 < (char *)0x7ffffffeffff) && (_Str1 != (char *)0x0)) {
                lVar18 = *plVar25;
                local_res10 = lVar18;
                if ((DAT_18095d130 == '\0') ||
                   (iVar15 = strcmp(_Str1,"C_SmokeGrenadeProjectile"), iVar15 != 0)) {
                  if (((DAT_18095d158 == '\0') || (iVar15 = strcmp(_Str1,"C_Inferno"), iVar15 != 0))
                     || ((DAT_180cc4c10 != 0 &&
                         (cVar12 = FUN_180011220(lVar18 + (ulonglong)DAT_180cc4c10), cVar12 != '\0')
                         ))) goto LAB_180032a04;
                  plVar19 = (longlong *)FUN_180033760(&DAT_180ca0c20,local_140,&local_res10);
                  lVar18 = *plVar19;
                  *(undefined1 *)(lVar18 + 0x18) = 1;
                  FUN_180031ca0(local_res10,lVar18 + 0x18);
                  if (*(char *)(lVar18 + 0x48) != '\x01') {
                    *(undefined1 *)(lVar18 + 0x48) = 1;
                  }
                  FUN_180037040(lVar18 + 0x30);
                  if ((((*plVar25 == 0) || (DAT_180ca09f8 == 0)) ||
                      (lVar27 = FUN_18000f3a0(*plVar25 + (ulonglong)DAT_180ca09f8), lVar27 == 0)) ||
                     (DAT_180ca0950 == 0)) {
                    local_168 = 0;
                    local_160 = 0;
                  }
                  else {
                    puVar20 = (undefined8 *)
                              FUN_1800111b0(local_110,lVar27 + (ulonglong)DAT_180ca0950);
                    local_168 = *puVar20;
                    local_160 = *(undefined4 *)(puVar20 + 1);
                  }
                  uVar13 = FUN_180031380(&local_168,&local_res18,0x2d);
                  fVar31 = (float)FUN_180031230(lVar18 + 0x18,uVar13,uVar16);
                  if (DAT_180cc4c14 == 0) {
                    lVar18 = 0;
                  }
                  else {
                    uVar16 = FUN_180011200((ulonglong)DAT_180cc4c14 + local_res10);
                    plVar19 = (longlong *)FUN_1803a0940(local_res20,uVar16);
                    lVar18 = *plVar19;
                  }
                  local_1a0 = 0;
                  local_194 = 0;
                  uStack_18c = 0;
                  local_170 = local_170 & 0xffffffff;
                  local_1a8 = local_res10;
                  local_19c = 0;
                  local_198 = fVar31;
                  if ((((lVar17 == 0) || (lVar18 == 0)) || (lVar18 == lVar17)) ||
                     (((DAT_180c9fff8 != 0 ||
                       (DAT_180c9fff8 = FUN_180264b70("mp_teammates_are_enemies"),
                       DAT_180c9fff8 != 0)) &&
                      (cVar12 = FUN_180264d70(DAT_180c9fff8), cVar12 != '\0')))) {
LAB_18003296e:
                    puVar20 = (undefined8 *)&DAT_18095d15c;
                  }
                  else {
                    uVar11 = DAT_180ca09f4;
                    uVar29 = (ulonglong)DAT_180ca09f4;
                    if (DAT_180ca09f4 == 0) {
                      cVar12 = '\0';
                    }
                    else {
                      cVar12 = FUN_180011220(lVar18 + uVar29);
                    }
                    if ((lVar17 == 0) || (uVar11 == 0)) {
                      cVar14 = '\0';
                    }
                    else {
                      cVar14 = FUN_180011220(lVar17 + uVar29);
                    }
                    puVar20 = (undefined8 *)&DAT_18095d16c;
                    if (cVar12 != cVar14) goto LAB_18003296e;
                  }
                  local_194 = *puVar20;
                  uStack_18c = puVar20[1];
                  local_170 = (ulonglong)local_170._4_4_ << 0x20;
                  local_174 = DAT_18095d18c;
                  iVar34 = DAT_18095d184;
                  iVar15 = DAT_18095d17c;
                  iVar3 = DAT_18095d180;
                  iVar4 = DAT_18095d188;
LAB_1800329d4:
                  local_178 = (float)iVar4 * fVar6;
                  local_180 = (float)iVar3 * fVar6;
                  local_184 = (float)iVar15 * fVar6;
                  local_17c = (float)iVar34 * fVar6;
                  FUN_180033590();
                  uVar16 = local_res8._0_4_;
                }
                else if (DAT_180cc4c04 != 0) {
                  iVar15 = FUN_180011200(lVar18 + (ulonglong)DAT_180cc4c04);
                  if ((0 < iVar15) && (DAT_180cc4c08 != 0)) {
                    cVar12 = FUN_180011220((ulonglong)DAT_180cc4c08 + local_res10);
                    if (cVar12 != '\0') {
                      plVar19 = (longlong *)FUN_180033760(&DAT_180ca0c20,local_100,&local_res10);
                      lVar18 = *plVar19;
                      *(undefined1 *)(lVar18 + 0x18) = 1;
                      if (DAT_180cc4c0c == 0) {
                        if ((((*plVar25 != 0) && (DAT_180ca09f8 != 0)) &&
                            (lVar27 = FUN_18000f3a0(*plVar25 + (ulonglong)DAT_180ca09f8),
                            lVar27 != 0)) && (DAT_180ca0950 != 0)) {
                          lVar27 = lVar27 + (ulonglong)DAT_180ca0950;
                          puVar24 = local_120;
                          goto LAB_180032515;
                        }
                        local_1b8 = 0;
                        local_1b0 = 0;
                      }
                      else {
                        lVar27 = (ulonglong)DAT_180cc4c0c + local_res10;
                        puVar24 = local_130;
LAB_180032515:
                        puVar20 = (undefined8 *)FUN_1800111b0(puVar24,lVar27);
                        local_1b8 = *puVar20;
                        local_1b0 = *(undefined4 *)(puVar20 + 1);
                      }
                      uVar13 = FUN_180031380(&local_1b8,&local_res18,0x2e,0x30);
                      fVar31 = (float)FUN_180031230(lVar18 + 0x18,uVar13);
                      FUN_1800314c0(local_res10);
                      if (*(char *)(lVar18 + 0x48) != '\0') {
                        *(undefined1 *)(lVar18 + 0x48) = 0;
                        puVar20 = *(undefined8 **)(lVar18 + 0x38);
                        for (puVar26 = *(undefined8 **)(lVar18 + 0x30); puVar26 != puVar20;
                            puVar26 = puVar26 + 10) {
                          if (puVar26[6] != 0) {
                            *puVar26 = puVar26[7];
                            *(undefined4 *)(puVar26 + 1) = *(undefined4 *)(puVar26 + 8);
                            *(undefined8 *)((longlong)puVar26 + 0xc) =
                                 *(undefined8 *)((longlong)puVar26 + 0x44);
                            *(undefined4 *)((longlong)puVar26 + 0x14) =
                                 *(undefined4 *)((longlong)puVar26 + 0x4c);
                          }
                          if (fVar5 < (float)((uint)(*(float *)(puVar26 + 3) -
                                                    *(float *)(puVar26 + 4)) & uVar10)) {
                            *(float *)(puVar26 + 3) = *(float *)(puVar26 + 4);
                          }
                          if (fVar5 < (float)((uint)(*(float *)((longlong)puVar26 + 0x1c) -
                                                    *(float *)((longlong)puVar26 + 0x24)) & uVar10))
                          {
                            *(float *)((longlong)puVar26 + 0x1c) =
                                 *(float *)((longlong)puVar26 + 0x24);
                          }
                        }
                      }
                      FUN_180037040(lVar18 + 0x30);
                      fVar36 = 0.0;
                      if (((DAT_180cc4c10 == 0) ||
                          (cVar12 = FUN_180011220((ulonglong)DAT_180cc4c10 + local_res10),
                          cVar12 == '\0')) && ((DAT_180cc4c34 != 0 && (DAT_180cc4c38 != 0)))) {
                        uVar29 = (ulonglong)DAT_180cc4c34;
                        lVar18 = FUN_18000f3a0((ulonglong)DAT_180cc4c34 + (ulonglong)DAT_180cc4c38 +
                                               local_res10);
                        if (lVar18 != 0) {
                          fVar36 = (float)FUN_18000f3d0(local_res10 + 0xc + uVar29);
                          fVar36 = fVar30 - fVar36;
                          if (fVar9 < fVar36) {
                            fVar32 = 0.0;
LAB_18003269a:
                            fVar35 = fVar7;
                            if (fVar32 <= fVar7) {
                              fVar35 = fVar32;
                            }
                          }
                          else {
                            fVar32 = fVar9 - fVar36;
                            if (fVar7 <= fVar32) {
                              fVar32 = fVar7;
                            }
                            if (0.0 <= fVar32) goto LAB_18003269a;
                            fVar35 = 0.0;
                          }
                          fVar36 = (fVar36 - DAT_1808ac0c0) / DAT_1808ac2cc;
                          if (fVar36 < 0.0) {
                            fVar36 = 0.0;
LAB_1800326e2:
                            fVar32 = fVar7;
                            if (fVar36 <= fVar7) {
                              fVar32 = fVar36;
                            }
                          }
                          else {
                            if (fVar7 <= fVar36) {
                              fVar36 = fVar7;
                            }
                            if (0.0 <= fVar36) goto LAB_1800326e2;
                            fVar32 = 0.0;
                          }
                          fVar36 = (fVar8 - (fVar32 + fVar32)) * fVar32 * fVar32 *
                                   (fVar8 - (fVar35 + fVar35)) * fVar35 * fVar35 * fVar31;
                        }
                      }
                      local_1a0 = 0;
                      local_170 = 0x42400000;
                      local_1a8 = local_res10;
                      local_19c = 1;
                      local_194 = _DAT_18095d134;
                      uStack_18c = uRam000000018095d13c;
                      local_174 = DAT_18095d154;
                      iVar34 = DAT_18095d14c;
                      local_198 = fVar36;
                      iVar15 = DAT_18095d144;
                      iVar3 = DAT_18095d148;
                      iVar4 = DAT_18095d150;
                      goto LAB_1800329d4;
                    }
                  }
                }
              }
            }
          }
        }
      }
LAB_180032a04:
      plVar25 = plVar25 + 1;
    } while (plVar25 != local_150);
  }
  puVar24 = auStack_1d8;
  if (local_158 != (longlong *)0x0) {
    plVar25 = local_158;
    if ((ulonglong)((local_148 - (longlong)local_158 >> 3) * 8) < 0x1000) {
LAB_180032a54:
      puVar22 = puVar28;
    }
    else {
      plVar25 = (longlong *)local_158[-1];
      plVar19 = (longlong *)((longlong)local_158 + (-8 - (longlong)plVar25));
      if (&DAT_0000001f < plVar19) {
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        puVar28 = auStack_1d0;
        plVar25 = plVar19;
        goto LAB_180032a54;
      }
    }
    *(undefined8 *)(puVar22 + -8) = 0x180032a5c;
    thunk_FUN_1803d64e0(plVar25);
    puVar24 = puVar22;
  }
  puVar20 = (undefined8 *)*DAT_180ca0c28;
  puVar26 = DAT_180ca0c28;
  if (puVar20 != DAT_180ca0c28) {
    do {
      if (*(char *)(puVar20 + 3) == '\0') {
        *(undefined8 *)(puVar24 + -8) = 0x180032a8c;
        puVar20 = (undefined8 *)FUN_1800331a0(&DAT_180ca0c20,&local_res8,puVar20);
        puVar26 = DAT_180ca0c28;
      }
      puVar20 = (undefined8 *)*puVar20;
    } while (puVar20 != puVar26);
  }
  if (DAT_18095d190 != '\0') {
    local_res8 = &DAT_1809f2ca0;
    *(undefined8 *)(puVar24 + -8) = 0x180032abe;
    iVar15 = FUN_1804e4d70(&DAT_1809f2ca0);
    if (iVar15 != 0) {
                    /* WARNING: Subroutine does not return */
      *(undefined **)(puVar24 + -8) = &UNK_180032e82;
      FUN_1804e4a90(5);
    }
    if (DAT_1809f2cec == 0x7fffffff) {
      DAT_1809f2cec = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      *(undefined **)(puVar24 + -8) = &UNK_180032e77;
      FUN_1804e4a90(6);
    }
    *(undefined8 *)(puVar24 + -8) = 0x180032b12;
    FUN_180241320(&DAT_180cc4c48,DAT_180cf9bc0,
                  (DAT_180cf9bc8 - DAT_180cf9bc0 >> 4) * 0x6fe4dfc9bf937f27);
    *(undefined8 *)(puVar24 + -8) = 0x180032b1b;
    FUN_1804e4e90(&DAT_1809f2ca0);
    puVar26 = DAT_180ca0c68;
    puVar20 = (undefined8 *)*DAT_180ca0c68;
    plVar25 = DAT_180cc4c48;
    plVar19 = DAT_180cc4c50;
    while( true ) {
      DAT_180cc4c48 = plVar25;
      DAT_180cc4c50 = plVar19;
      if (puVar20 == puVar26) break;
      *(undefined1 *)(puVar20 + 3) = 0;
      puVar20 = (undefined8 *)*puVar20;
      plVar25 = DAT_180cc4c48;
      plVar19 = DAT_180cc4c50;
    }
    if (plVar25 != plVar19) {
      do {
        if (*plVar25 != 0) {
          *(undefined8 *)(puVar24 + -8) = 0x180032b7e;
          plVar21 = (longlong *)FUN_180033760(&DAT_180ca0c60,local_140,plVar25);
          lVar18 = *plVar21;
          *(undefined1 *)(lVar18 + 0x18) = 1;
          if (*(char *)((longlong)plVar25 + 0x12) == '\0') {
            for (puVar22 = (undefined1 *)(lVar18 + 0x50); puVar22 != (undefined1 *)(lVar18 + 0xe50);
                puVar22 = puVar22 + 0x38) {
              *puVar22 = 0;
            }
            lVar27 = *(longlong *)(lVar18 + 0x38);
            for (lVar23 = *(longlong *)(lVar18 + 0x30); lVar23 != lVar27; lVar23 = lVar23 + 0x50) {
              *(undefined1 *)(lVar23 + 0x28) = 0;
              *(undefined8 *)(lVar23 + 0x20) = 0;
            }
            *(bool *)(lVar18 + 0xe58) = *(longlong *)(lVar18 + 0x30) != *(longlong *)(lVar18 + 0x38)
            ;
          }
          else {
            *(undefined1 *)(lVar18 + 0xe58) = 0;
            *(undefined8 *)(puVar24 + -8) = 0x180032b9e;
            FUN_180031e90(plVar25,lVar18 + 0x18);
          }
          if (*(char *)(lVar18 + 0x48) != '\x01') {
            *(undefined1 *)(lVar18 + 0x48) = 1;
          }
          *(undefined8 *)(puVar24 + -8) = 0x180032c07;
          FUN_180037040(lVar18 + 0x30);
          cVar12 = *(char *)(lVar18 + 0xe58);
          if (cVar12 == '\0') {
LAB_180032c58:
            uVar13 = 0;
            if (((*(char *)((longlong)plVar25 + 0x11) != '\0') || (DAT_18095d158 != '\0')) &&
               (*(char *)((longlong)plVar25 + 0x12) != '\0')) {
              *(undefined8 *)(puVar24 + -8) = 0x180032c85;
              uVar13 = FUN_180031380(plVar25 + 3,&local_res18,0x2d);
            }
          }
          else {
            if (*(longlong *)(lVar18 + 0x30) == *(longlong *)(lVar18 + 0x38)) {
              *(undefined1 *)(lVar18 + 0xe58) = 0;
              cVar12 = '\0';
            }
            if (cVar12 == '\0') goto LAB_180032c58;
            if (*(longlong *)(lVar18 + 0x30) == *(longlong *)(lVar18 + 0x38)) {
LAB_180032c54:
              uVar13 = 0;
            }
            else {
              *(undefined8 *)(puVar24 + -8) = 0x180032c4c;
              cVar12 = FUN_180031380(plVar25 + 3,&local_res18,0x2d);
              if (cVar12 == '\0') goto LAB_180032c54;
              uVar13 = 1;
            }
          }
          *(undefined8 *)(puVar24 + -8) = 0x180032c94;
          uVar33 = FUN_180031230(lVar18 + 0x18,uVar13,uVar16);
          *(undefined8 *)(puVar24 + 0x44) = 0;
          *(undefined8 *)(puVar24 + 0x4c) = 0;
          *(undefined4 *)(puVar24 + 0x6c) = 0;
          *(longlong *)(puVar24 + 0x30) = *plVar25;
          puVar24[0x38] = 1;
          *(undefined4 *)(puVar24 + 0x3c) = 0;
          *(undefined4 *)(puVar24 + 0x40) = uVar33;
          if (((lVar17 == 0) || (lVar18 = plVar25[1], lVar18 == 0)) || (lVar18 == lVar17)) {
LAB_180032d41:
            puVar20 = (undefined8 *)&DAT_18095d194;
          }
          else {
            if (DAT_180c9fff8 == 0) {
              *(undefined8 *)(puVar24 + -8) = 0x180032ce8;
              DAT_180c9fff8 = FUN_180264b70("mp_teammates_are_enemies");
              if (DAT_180c9fff8 != 0) goto LAB_180032cf4;
            }
            else {
LAB_180032cf4:
              *(undefined8 *)(puVar24 + -8) = 0x180032cfc;
              cVar12 = FUN_180264d70(DAT_180c9fff8);
              if (cVar12 != '\0') goto LAB_180032d41;
            }
            uVar10 = DAT_180ca09f4;
            uVar29 = (ulonglong)DAT_180ca09f4;
            if (DAT_180ca09f4 == 0) {
              cVar12 = '\0';
            }
            else {
              *(undefined8 *)(puVar24 + -8) = 0x180032d13;
              cVar12 = FUN_180011220(lVar18 + uVar29);
            }
            if ((lVar17 == 0) || (uVar10 == 0)) {
              cVar14 = '\0';
            }
            else {
              *(undefined8 *)(puVar24 + -8) = 0x180032d2e;
              cVar14 = FUN_180011220(lVar17 + uVar29);
            }
            puVar20 = (undefined8 *)&DAT_18095d1a4;
            if (cVar12 != cVar14) goto LAB_180032d41;
          }
          uVar2 = puVar20[1];
          *(undefined8 *)(puVar24 + 0x44) = *puVar20;
          *(undefined8 *)(puVar24 + 0x4c) = uVar2;
          *(float *)(puVar24 + 0x54) = (float)DAT_18095d17c * fVar6;
          *(float *)(puVar24 + 0x58) = (float)DAT_18095d180 * fVar6;
          *(float *)(puVar24 + 0x5c) = (float)DAT_18095d184 * fVar6;
          *(float *)(puVar24 + 0x60) = (float)DAT_18095d188 * fVar6;
          *(undefined4 *)(puVar24 + 100) = DAT_18095d18c;
          *(undefined4 *)(puVar24 + 0x68) = 0;
          *(undefined8 *)(puVar24 + -8) = 0x180032dc8;
          FUN_180033590();
        }
        plVar25 = plVar25 + 0x12e;
      } while (plVar25 != plVar19);
    }
    puVar20 = (undefined8 *)*DAT_180ca0c68;
    puVar26 = DAT_180ca0c68;
    if (puVar20 == DAT_180ca0c68) {
      return;
    }
    do {
      if (*(char *)(puVar20 + 3) == '\0') {
        *(undefined8 *)(puVar24 + -8) = 0x180032e03;
        puVar20 = (undefined8 *)FUN_1800331a0(&DAT_180ca0c60,&local_res8,puVar20);
        puVar26 = DAT_180ca0c68;
      }
      puVar20 = (undefined8 *)*puVar20;
    } while (puVar20 != puVar26);
    return;
  }
LAB_180032270:
  *(undefined8 *)(puVar24 + -8) = 0x18003227c;
  FUN_180033320(&DAT_180ca0c60);
  if (DAT_180cc4c48 != DAT_180cc4c50) {
    DAT_180cc4c50 = DAT_180cc4c48;
  }
  return;
}



/* ===== 180032e90 FUN_180032e90 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180032e90(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined2 uStack_a6;
  
  if ((param_1 != 0) && (DAT_180cc4c60 != DAT_180cc4c68)) {
    lVar8 = (longlong)DAT_181107a00 * 0x40;
    DAT_180cc4bf0 = DAT_1811079b4;
    DAT_180cc4b61 = 0;
    uRam0000000180cc4b62 = uStack_a6;
    _DAT_180cc4ba4 = 0;
    uRam0000000180cc4ba8 = 0;
    _DAT_180cc4bc0 = 0;
    uRam0000000180cc4bc8 = 0;
    DAT_180cc4b60 = 1;
    _DAT_180cc4bb0 = 0;
    uRam0000000180cc4bb8 = 0;
    _DAT_180cc4b6c = (undefined4)*(undefined8 *)(&DAT_181107938 + lVar8);
    DAT_180cc4b70 = (undefined4)((ulonglong)*(undefined8 *)(&DAT_181107938 + lVar8) >> 0x20);
    DAT_180cc4b74 = (undefined4)*(undefined8 *)(&DAT_181107940 + lVar8);
    DAT_180cc4b78 = (undefined4)((ulonglong)*(undefined8 *)(&DAT_181107940 + lVar8) >> 0x20);
    _DAT_180cc4b64 = (undefined4)*(undefined8 *)(&DAT_181107930 + lVar8);
    DAT_180cc4b68 = (undefined4)((ulonglong)*(undefined8 *)(&DAT_181107930 + lVar8) >> 0x20);
    _DAT_180cc4bd0 = 0;
    uRam0000000180cc4bd8 = 0;
    _DAT_180cc4b8c = (undefined4)*(undefined8 *)(&DAT_181107958 + lVar8);
    DAT_180cc4b90 = (undefined4)((ulonglong)*(undefined8 *)(&DAT_181107958 + lVar8) >> 0x20);
    DAT_180cc4b94 = (undefined4)*(undefined8 *)(&DAT_181107960 + lVar8);
    DAT_180cc4b98 = (undefined4)((ulonglong)*(undefined8 *)(&DAT_181107960 + lVar8) >> 0x20);
    _DAT_180cc4be0 = (ulonglong)(uint)*(float *)(DAT_180ca0a50 + 0x30) << 0x20;
    _DAT_180cc4b7c = (undefined4)*(undefined8 *)(&DAT_181107948 + lVar8);
    DAT_180cc4b80 = (undefined4)((ulonglong)*(undefined8 *)(&DAT_181107948 + lVar8) >> 0x20);
    DAT_180cc4b84 = (undefined4)*(undefined8 *)(&DAT_181107950 + lVar8);
    DAT_180cc4b88 = (undefined4)((ulonglong)*(undefined8 *)(&DAT_181107950 + lVar8) >> 0x20);
    _DAT_180cc4be8 = CONCAT44(DAT_1811079b0,*(float *)(DAT_180ca0a50 + 0x34));
    _DAT_180cc4b9c = (undefined4)*(undefined8 *)(&DAT_181107968 + lVar8);
    DAT_180cc4ba0 = (undefined4)((ulonglong)*(undefined8 *)(&DAT_181107968 + lVar8) >> 0x20);
    pbVar4 = DAT_180cc4c60;
    pbVar5 = DAT_180cc4c68;
    if ((0.0 < *(float *)(DAT_180ca0a50 + 0x30)) && (0.0 < *(float *)(DAT_180ca0a50 + 0x34))) {
      DAT_180cc4b61 = FUN_180035cf0(&DAT_180cc4b64,&DAT_180cc4ba4);
      pbVar4 = DAT_180cc4c60;
      pbVar5 = DAT_180cc4c68;
    }
    for (; pbVar6 = DAT_180cc4c68, bVar3 = pbVar4 != DAT_180cc4c68, DAT_180cc4c68 = pbVar5, bVar3;
        pbVar4 = pbVar4 + 0x40) {
      uVar7 = DAT_180ca0c50;
      if (pbVar4[8] != 0) {
        uVar7 = DAT_180ca0c90;
      }
      uVar7 = uVar7 & (((((((((ulonglong)*pbVar4 ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                            (ulonglong)pbVar4[1]) * 0x100000001b3 ^ (ulonglong)pbVar4[2]) *
                           0x100000001b3 ^ (ulonglong)pbVar4[3]) * 0x100000001b3 ^
                         (ulonglong)pbVar4[4]) * 0x100000001b3 ^ (ulonglong)pbVar4[5]) *
                        0x100000001b3 ^ (ulonglong)pbVar4[6]) * 0x100000001b3 ^ (ulonglong)pbVar4[7]
                      ) * 0x100000001b3;
      lVar9 = DAT_180ca0c28;
      lVar8 = DAT_180ca0c38;
      if (pbVar4[8] != 0) {
        lVar9 = DAT_180ca0c68;
        lVar8 = DAT_180ca0c78;
      }
      lVar1 = *(longlong *)(lVar8 + 8 + uVar7 * 0x10);
      if (lVar1 != lVar9) {
        lVar2 = *(longlong *)(lVar1 + 0x10);
        while (*(longlong *)pbVar4 != lVar2) {
          if (lVar1 == *(longlong *)(lVar8 + uVar7 * 0x10)) goto LAB_180033162;
          lVar1 = *(longlong *)(lVar1 + 8);
          lVar2 = *(longlong *)(lVar1 + 0x10);
        }
        if ((lVar1 != 0) && (lVar1 != lVar9)) {
          FUN_1800375d0(param_1,&DAT_180cc4b60,lVar1 + 0x30,pbVar4 + 0x14,
                        *(undefined4 *)(pbVar4 + 0x10),*(undefined4 *)(pbVar4 + 0xc));
        }
      }
LAB_180033162:
      pbVar5 = DAT_180cc4c68;
      DAT_180cc4c68 = pbVar6;
    }
  }
  return;
}



/* ===== 1800331a0 FUN_1800331a0 ===== */

longlong * FUN_1800331a0(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  uVar4 = *(ulonglong *)(param_1 + 0x30) &
          (((((((((ulonglong)*(byte *)(param_3 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                (ulonglong)*(byte *)((longlong)param_3 + 0x11)) * 0x100000001b3 ^
               (ulonglong)*(byte *)((longlong)param_3 + 0x12)) * 0x100000001b3 ^
              (ulonglong)*(byte *)((longlong)param_3 + 0x13)) * 0x100000001b3 ^
             (ulonglong)*(byte *)((longlong)param_3 + 0x14)) * 0x100000001b3 ^
            (ulonglong)*(byte *)((longlong)param_3 + 0x15)) * 0x100000001b3 ^
           (ulonglong)*(byte *)((longlong)param_3 + 0x16)) * 0x100000001b3 ^
          (ulonglong)*(byte *)((longlong)param_3 + 0x17)) * 0x100000001b3;
  plVar2 = *(longlong **)(lVar1 + uVar4 * 0x10);
  if (*(longlong **)(lVar1 + 8 + uVar4 * 0x10) == param_3) {
    if (plVar2 == param_3) {
      uVar3 = *(undefined8 *)(param_1 + 8);
      *(undefined8 *)(lVar1 + uVar4 * 0x10) = uVar3;
      *(undefined8 *)(lVar1 + 8 + uVar4 * 0x10) = uVar3;
    }
    else {
      *(longlong *)(lVar1 + 8 + uVar4 * 0x10) = param_3[1];
    }
  }
  else if (plVar2 == param_3) {
    *(longlong *)(lVar1 + uVar4 * 0x10) = *param_3;
  }
  lVar1 = *param_3;
  *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
  *(longlong *)param_3[1] = lVar1;
  *(longlong *)(lVar1 + 8) = param_3[1];
  FUN_180033500(param_3 + 6);
  thunk_FUN_1803d64e0(param_3,0xe60);
  *param_2 = lVar1;
  return param_2;
}



/* ===== 1800332b0 FUN_1800332b0 ===== */

void FUN_1800332b0(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)*param_1;
  *(undefined8 *)puVar1[1] = 0;
  puVar1 = (undefined8 *)*puVar1;
  while (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar1;
    FUN_180033500(puVar1 + 6);
    thunk_FUN_1803d64e0(puVar1,0xe60);
    puVar1 = puVar2;
  }
  thunk_FUN_1803d64e0(*param_1,0xe60);
  return;
}



/* ===== 180033320 FUN_180033320 ===== */

void FUN_180033320(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 local_res8;
  
  if (*(ulonglong *)(param_1 + 0x10) != 0) {
    puVar1 = *(undefined8 **)(param_1 + 8);
    if (*(ulonglong *)(param_1 + 0x10) < *(ulonglong *)(param_1 + 0x38) >> 3) {
      FUN_180033a80(param_1,*puVar1,puVar1);
      return;
    }
    *(undefined8 *)puVar1[1] = 0;
    puVar1 = (undefined8 *)*puVar1;
    while (puVar1 != (undefined8 *)0x0) {
      puVar2 = (undefined8 *)*puVar1;
      FUN_180033500(puVar1 + 6);
      thunk_FUN_1803d64e0(puVar1,0xe60);
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



/* ===== 1800333f0 FUN_1800333f0 ===== */

undefined4 * FUN_1800333f0(undefined4 *param_1)

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
  lVar4 = FUN_1804ecaa0(0xe60);
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
    FUN_180026ac0(0,*(ulonglong *)(param_1 + 8),&local_res10);
    return param_1;
  }
  puVar5 = (undefined8 *)FUN_1804ecaa0(0x80);
  puVar7 = auStack_28;
  puVar8 = auStack_28;
  lVar4 = *(longlong *)(param_1 + 6);
  if (*(longlong *)(param_1 + 10) - lVar4 == 0) goto LAB_1800334b5;
  if ((ulonglong)((*(longlong *)(param_1 + 10) - lVar4 >> 3) * 8) < 0x1000) {
LAB_1800334ad:
    lVar6 = lVar4;
    puVar8 = puVar7;
  }
  else {
    lVar6 = *(longlong *)(lVar4 + -8);
    if (0x1f < (lVar4 - lVar6) - 8U) {
      pcVar3 = (code *)swi(0x29);
      lVar4 = (*pcVar3)(5);
      puVar7 = auStack_20;
      goto LAB_1800334ad;
    }
  }
  *(undefined8 *)(puVar8 + -8) = 0x1800334b5;
  thunk_FUN_1803d64e0(lVar6);
LAB_1800334b5:
  *(undefined8 **)(param_1 + 6) = puVar5;
  puVar1 = puVar5 + 0x10;
  *(undefined8 **)(param_1 + 8) = puVar1;
  *(undefined8 **)(param_1 + 10) = puVar1;
  for (; puVar5 != puVar1; puVar5 = puVar5 + 1) {
    *puVar5 = uVar2;
  }
  return param_1;
}



/* ===== 180033500 FUN_180033500 ===== */

void FUN_180033500(ulonglong *param_1)

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
  *(undefined8 *)(puVar5 + -8) = 0x180033567;
  thunk_FUN_1803d64e0(uVar2,uVar3);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* ===== 180033590 FUN_180033590 ===== */

undefined8 * FUN_180033590(undefined8 param_1,undefined8 *param_2)

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
  
  puVar6 = DAT_180cc4c68;
  if (DAT_180cc4c68 != DAT_180cc4c70) {
    uVar5 = param_2[1];
    *DAT_180cc4c68 = *param_2;
    puVar6[1] = uVar5;
    uVar5 = param_2[3];
    puVar6[2] = param_2[2];
    puVar6[3] = uVar5;
    uVar5 = param_2[5];
    puVar6[4] = param_2[4];
    puVar6[5] = uVar5;
    uVar5 = param_2[7];
    puVar6[6] = param_2[6];
    puVar6[7] = uVar5;
    puVar6 = DAT_180cc4c68;
    DAT_180cc4c68 = DAT_180cc4c68 + 8;
    return puVar6;
  }
  uVar12 = 0x3ffffffffffffff;
  uVar15 = (longlong)DAT_180cc4c68 - (longlong)DAT_180cc4c60;
  lVar13 = (longlong)uVar15 >> 6;
  if (lVar13 == 0x3ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_18000fb10();
  }
  uVar14 = lVar13 + 1;
  uVar8 = (longlong)DAT_180cc4c70 - (longlong)DAT_180cc4c60 >> 6;
  if (uVar8 <= 0x3ffffffffffffff - (uVar8 >> 1)) {
    uVar8 = (uVar8 >> 1) + uVar8;
    uVar12 = uVar14;
    if (uVar14 <= uVar8) {
      uVar12 = uVar8;
    }
    if (0x3ffffffffffffff < uVar12) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  puVar7 = (undefined8 *)FUN_18000fb70(uVar12 * 0x40);
  uVar5 = param_2[1];
  puVar16 = (undefined8 *)((uVar15 & 0xffffffffffffffc0) + (longlong)puVar7);
  *puVar16 = *param_2;
  puVar16[1] = uVar5;
  uVar5 = param_2[3];
  puVar16[2] = param_2[2];
  puVar16[3] = uVar5;
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x24);
  uVar3 = *(undefined4 *)(param_2 + 5);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x2c);
  *(undefined4 *)(puVar16 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)((longlong)puVar16 + 0x24) = uVar2;
  *(undefined4 *)(puVar16 + 5) = uVar3;
  *(undefined4 *)((longlong)puVar16 + 0x2c) = uVar4;
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x34);
  uVar3 = *(undefined4 *)(param_2 + 7);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x3c);
  *(undefined4 *)(puVar16 + 6) = *(undefined4 *)(param_2 + 6);
  *(undefined4 *)((longlong)puVar16 + 0x34) = uVar2;
  *(undefined4 *)(puVar16 + 7) = uVar3;
  *(undefined4 *)((longlong)puVar16 + 0x3c) = uVar4;
  if (puVar6 == DAT_180cc4c68) {
    lVar13 = (longlong)DAT_180cc4c68 - (longlong)DAT_180cc4c60;
    puVar9 = puVar7;
    puVar6 = DAT_180cc4c60;
  }
  else {
    FUN_180540530(puVar7,DAT_180cc4c60,(longlong)puVar6 - (longlong)DAT_180cc4c60);
    puVar9 = puVar16 + 8;
    lVar13 = (longlong)DAT_180cc4c68 - (longlong)puVar6;
  }
  puVar10 = auStack_38;
  puVar11 = auStack_38;
  FUN_180540530(puVar9,puVar6,lVar13);
  if (DAT_180cc4c60 == (undefined8 *)0x0) goto LAB_180033712;
  puVar6 = DAT_180cc4c60;
  if (((longlong)DAT_180cc4c70 - (longlong)DAT_180cc4c60 & 0xffffffffffffffc0U) < 0x1000) {
LAB_18003370a:
    puVar11 = puVar10;
  }
  else {
    puVar6 = (undefined8 *)DAT_180cc4c60[-1];
    if (0x1f < (ulonglong)((longlong)DAT_180cc4c60 + (-8 - (longlong)puVar6))) {
      pcVar1 = (code *)swi(0x29);
      puVar6 = (undefined8 *)(*pcVar1)(5);
      puVar10 = auStack_30;
      goto LAB_18003370a;
    }
  }
  *(undefined8 *)(puVar11 + -8) = 0x180033712;
  thunk_FUN_1803d64e0(puVar6);
LAB_180033712:
  DAT_180cc4c68 = puVar7 + uVar14 * 8;
  DAT_180cc4c60 = puVar7;
  DAT_180cc4c70 = puVar7 + uVar12 * 8;
  return puVar16;
}



/* ===== 180033760 FUN_180033760 ===== */

undefined8 * FUN_180033760(float *param_1,undefined8 *param_2,byte *param_3,undefined4 param_4)

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
  if (*(longlong *)(param_1 + 4) == 0x11cf06ada2811c) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4cd0("unordered_map/set too long");
  }
  puVar5 = (undefined8 *)FUN_1804ecaa0(0xe60,puVar8,lVar6,param_4,pfVar1,0);
  puVar5[2] = *(undefined8 *)param_3;
  *(undefined4 *)(puVar5 + 3) = 0;
  *(undefined4 *)((longlong)puVar5 + 0x49) = 0;
  *(undefined2 *)((longlong)puVar5 + 0x4d) = 0;
  *(undefined1 *)((longlong)puVar5 + 0x4f) = 0;
  *(undefined4 *)((longlong)puVar5 + 0xe59) = 0;
  *(undefined2 *)((longlong)puVar5 + 0xe5d) = 0;
  *(undefined1 *)((longlong)puVar5 + 0xe5f) = 0;
  *(undefined8 *)((longlong)puVar5 + 0x1c) = 0;
  *(undefined8 *)((longlong)puVar5 + 0x24) = 0;
  *(undefined4 *)((longlong)puVar5 + 0x2c) = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  puVar5[8] = 0;
  *(undefined1 *)(puVar5 + 9) = 1;
  FUN_180540170(puVar5 + 10,0,0xe00);
  FUN_1800341e0(puVar5 + 10);
  puVar5[0x1ca] = 1;
  *(undefined1 *)(puVar5 + 0x1cb) = 0;
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
    FUN_180033ff0(param_1,uVar9);
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
        goto LAB_180033a07;
        puVar10 = (undefined8 *)puVar10[1];
        lVar6 = puVar10[2];
      }
      puVar10 = (undefined8 *)*puVar10;
    }
  }
LAB_180033a07:
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
      goto LAB_180033a57;
    }
    if (*(undefined8 **)(lVar6 + 8 + uVar11 * 0x10) != puVar8) goto LAB_180033a57;
  }
  *(undefined8 **)(lVar6 + 8 + uVar11 * 0x10) = puVar5;
LAB_180033a57:
  *param_2 = puVar5;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



/* ===== 180033a80 FUN_180033a80 ===== */

longlong * FUN_180033a80(longlong param_1,longlong *param_2,longlong *param_3)

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
    FUN_180033500(plVar9 + 6);
    thunk_FUN_1803d64e0(plVar9,0xe60);
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
          FUN_180033500(plVar9 + 6);
          thunk_FUN_1803d64e0(plVar9,0xe60);
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
      goto LAB_180033d02;
    }
    plVar9 = plVar10;
  } while (plVar10 != param_3);
  if (plVar4 == param_2) {
    *(longlong *)(lVar6 + lVar1) = (longlong)plVar10;
  }
LAB_180033d02:
  *puVar2 = plVar10;
  plVar10[1] = (longlong)puVar2;
  return param_3;
}



/* ===== 180033d40 FUN_180033d40 ===== */

void FUN_180033d40(ulonglong *param_1)

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
  *(undefined8 *)(puVar5 + -8) = 0x180033da6;
  thunk_FUN_1803d64e0(uVar2,uVar3);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* ===== 180033dc0 FUN_180033dc0 ===== */

undefined8 * FUN_180033dc0(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  longlong lVar16;
  undefined8 *puVar17;
  ulonglong uVar18;
  undefined8 *puVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  ulonglong uVar22;
  undefined8 *puVar23;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  lVar2 = *param_1;
  uVar22 = 0x333333333333333;
  lVar16 = (param_1[1] - lVar2 >> 4) * -0x3333333333333333;
  if (lVar16 == 0x333333333333333) {
                    /* WARNING: Subroutine does not return */
    FUN_1800118d0();
  }
  uVar1 = lVar16 + 1;
  uVar18 = (param_1[2] - lVar2 >> 4) * -0x3333333333333333;
  if (uVar18 <= 0x333333333333333 - (uVar18 >> 1)) {
    uVar18 = (uVar18 >> 1) + uVar18;
    uVar22 = uVar1;
    if (uVar1 <= uVar18) {
      uVar22 = uVar18;
    }
    if (0x333333333333333 < uVar22) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  puVar17 = (undefined8 *)FUN_18000fb70(uVar22 * 0x50);
  uVar12 = param_3[1];
  uVar13 = param_3[2];
  uVar14 = param_3[3];
  puVar23 = puVar17 + ((param_2 - lVar2) / 0x50) * 10;
  *puVar23 = *param_3;
  puVar23[1] = uVar12;
  uVar12 = param_3[4];
  uVar15 = param_3[5];
  puVar23[2] = uVar13;
  puVar23[3] = uVar14;
  uVar4 = *(undefined4 *)(param_3 + 6);
  uVar5 = *(undefined4 *)((longlong)param_3 + 0x34);
  uVar6 = *(undefined4 *)(param_3 + 7);
  uVar7 = *(undefined4 *)((longlong)param_3 + 0x3c);
  puVar23[4] = uVar12;
  puVar23[5] = uVar15;
  uVar8 = *(undefined4 *)(param_3 + 8);
  uVar9 = *(undefined4 *)((longlong)param_3 + 0x44);
  uVar10 = *(undefined4 *)(param_3 + 9);
  uVar11 = *(undefined4 *)((longlong)param_3 + 0x4c);
  *(undefined4 *)(puVar23 + 6) = uVar4;
  *(undefined4 *)((longlong)puVar23 + 0x34) = uVar5;
  *(undefined4 *)(puVar23 + 7) = uVar6;
  *(undefined4 *)((longlong)puVar23 + 0x3c) = uVar7;
  *(undefined4 *)(puVar23 + 8) = uVar8;
  *(undefined4 *)((longlong)puVar23 + 0x44) = uVar9;
  *(undefined4 *)(puVar23 + 9) = uVar10;
  *(undefined4 *)((longlong)puVar23 + 0x4c) = uVar11;
  lVar2 = *param_1;
  if (param_2 == param_1[1]) {
    lVar16 = param_1[1] - lVar2;
    puVar19 = puVar17;
    param_2 = lVar2;
  }
  else {
    FUN_180540530(puVar17,lVar2,param_2 - lVar2);
    puVar19 = puVar23 + 10;
    lVar16 = param_1[1] - param_2;
  }
  puVar20 = auStack_48;
  puVar21 = auStack_48;
  FUN_180540530(puVar19,param_2,lVar16);
  lVar2 = *param_1;
  if (lVar2 == 0) goto LAB_180033f44;
  lVar16 = lVar2;
  if ((ulonglong)((param_1[2] - lVar2 >> 4) << 4) < 0x1000) {
LAB_180033f39:
    puVar21 = puVar20;
  }
  else {
    lVar16 = *(longlong *)(lVar2 + -8);
    if (0x1f < (lVar2 - lVar16) - 8U) {
      lVar16 = 5;
      pcVar3 = (code *)swi(0x29);
      (*pcVar3)(5);
      puVar20 = auStack_40;
      goto LAB_180033f39;
    }
  }
  *(undefined8 *)(puVar21 + -8) = 0x180033f44;
  thunk_FUN_1803d64e0(lVar16);
LAB_180033f44:
  *param_1 = (longlong)puVar17;
  param_1[1] = (longlong)(puVar17 + uVar1 * 10);
  param_1[2] = (longlong)(puVar17 + uVar22 * 10);
  return puVar23;
}



/* ===== 180033f90 FUN_180033f90 ===== */

void FUN_180033f90(longlong param_1)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_180033500(*(longlong *)(param_1 + 8) + 0x30);
  }
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  thunk_FUN_1803d64e0(*(longlong *)(param_1 + 8),0xe60);
  return;
}



/* ===== 180033ff0 FUN_180033ff0 ===== */

void FUN_180033ff0(longlong param_1,ulonglong param_2)

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
  FUN_180029d30(param_1 + 0x18,2L << (bVar9 & 0x3f),plVar1);
  *(longlong *)(param_1 + 0x38) = lVar10;
  *(longlong *)(param_1 + 0x30) = lVar10 + -1;
  plVar7 = (longlong *)**(undefined8 **)(param_1 + 8);
joined_r0x000180034066:
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
        goto joined_r0x000180034066;
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



/* ===== 1800341e0 FUN_1800341e0 ===== */

void FUN_1800341e0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  lVar2 = 0;
  do {
    lVar1 = uVar3 * 0x38;
    uVar3 = uVar3 + 8;
    *(undefined1 *)(param_1 + lVar1) = 0;
    *(undefined8 *)(param_1 + 4 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0xc + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x14 + lVar1) = 0;
    *(undefined4 *)(lVar1 + 0x1c + param_1) = 0;
    *(undefined8 *)(param_1 + 0x20 + lVar1) = 0;
    *(undefined4 *)(param_1 + 0x28 + lVar1) = 0xffffffff;
    *(undefined8 *)(param_1 + 0x2c + lVar1) = 0;
    *(undefined4 *)(lVar1 + 0x34 + param_1) = 0;
    *(undefined1 *)(param_1 + 0x38 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x3c + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x44 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x4c + lVar1) = 0;
    *(undefined4 *)(lVar1 + 0x54 + param_1) = 0;
    *(undefined8 *)(param_1 + 0x58 + lVar1) = 0;
    *(undefined4 *)(param_1 + 0x60 + lVar1) = 0xffffffff;
    *(undefined8 *)(param_1 + 100 + lVar1) = 0;
    *(undefined4 *)(lVar1 + 0x6c + param_1) = 0;
    *(undefined1 *)(lVar2 + 0x70 + param_1) = 0;
    *(undefined8 *)(param_1 + 0x74 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x7c + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x84 + lVar1) = 0;
    *(undefined4 *)(lVar1 + 0x8c + param_1) = 0;
    *(undefined8 *)(param_1 + 0x90 + lVar1) = 0;
    *(undefined4 *)(param_1 + 0x98 + lVar1) = 0xffffffff;
    *(undefined8 *)(param_1 + 0x9c + lVar1) = 0;
    *(undefined4 *)(lVar1 + 0xa4 + param_1) = 0;
    *(undefined1 *)(lVar2 + 0xa8 + param_1) = 0;
    *(undefined8 *)(param_1 + 0xac + lVar1) = 0;
    *(undefined8 *)(param_1 + 0xb4 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0xbc + lVar1) = 0;
    *(undefined4 *)(lVar1 + 0xc4 + param_1) = 0;
    *(undefined8 *)(param_1 + 200 + lVar1) = 0;
    *(undefined4 *)(param_1 + 0xd0 + lVar1) = 0xffffffff;
    *(undefined8 *)(param_1 + 0xd4 + lVar1) = 0;
    *(undefined4 *)(lVar1 + 0xdc + param_1) = 0;
    *(undefined1 *)(lVar2 + 0xe0 + param_1) = 0;
    *(undefined8 *)(param_1 + 0xe4 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0xec + lVar1) = 0;
    *(undefined8 *)(param_1 + 0xf4 + lVar1) = 0;
    *(undefined4 *)(lVar1 + 0xfc + param_1) = 0;
    *(undefined8 *)(param_1 + 0x100 + lVar1) = 0;
    *(undefined4 *)(param_1 + 0x108 + lVar1) = 0xffffffff;
    *(undefined8 *)(param_1 + 0x10c + lVar1) = 0;
    *(undefined4 *)(lVar1 + 0x114 + param_1) = 0;
    *(undefined1 *)(lVar2 + 0x118 + param_1) = 0;
    *(undefined8 *)(param_1 + 0x11c + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x124 + lVar1) = 0;
    *(undefined8 *)(param_1 + 300 + lVar1) = 0;
    *(undefined4 *)(lVar1 + 0x134 + param_1) = 0;
    *(undefined8 *)(param_1 + 0x138 + lVar1) = 0;
    *(undefined4 *)(param_1 + 0x140 + lVar1) = 0xffffffff;
    *(undefined8 *)(param_1 + 0x144 + lVar1) = 0;
    *(undefined4 *)(lVar1 + 0x14c + param_1) = 0;
    *(undefined1 *)(lVar2 + 0x150 + param_1) = 0;
    *(undefined8 *)(param_1 + 0x154 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x15c + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x164 + lVar1) = 0;
    *(undefined4 *)(lVar1 + 0x16c + param_1) = 0;
    *(undefined8 *)(param_1 + 0x170 + lVar1) = 0;
    *(undefined4 *)(param_1 + 0x178 + lVar1) = 0xffffffff;
    *(undefined8 *)(param_1 + 0x17c + lVar1) = 0;
    *(undefined4 *)(lVar1 + 0x184 + param_1) = 0;
    *(undefined1 *)(lVar2 + 0x188 + param_1) = 0;
    *(undefined8 *)(param_1 + 0x18c + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x194 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x19c + lVar1) = 0;
    *(undefined4 *)(lVar1 + 0x1a4 + param_1) = 0;
    *(undefined8 *)(param_1 + 0x1a8 + lVar1) = 0;
    *(undefined4 *)(param_1 + 0x1b0 + lVar1) = 0xffffffff;
    *(undefined8 *)(param_1 + 0x1b4 + lVar1) = 0;
    *(undefined4 *)(lVar1 + 0x1bc + param_1) = 0;
    lVar2 = lVar2 + 0x1c0;
  } while (uVar3 < 0x40);
  return;
}



/* ===== 180034430 FUN_180034430 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180034430(void)

{
  if (DAT_180ccf5d8 != (longlong *)0x0) {
    (**(code **)(*DAT_180ccf5d8 + 0x10))();
    DAT_180ccf5d8 = (longlong *)0x0;
  }
  if (DAT_180ccf5d0 != (longlong *)0x0) {
    (**(code **)(*DAT_180ccf5d0 + 0x10))();
    DAT_180ccf5d0 = (longlong *)0x0;
  }
  if (DAT_180ccf5c8 != (longlong *)0x0) {
    (**(code **)(*DAT_180ccf5c8 + 0x10))();
    DAT_180ccf5c8 = (longlong *)0x0;
  }
  _DAT_180ccf5e0 = 0;
  if (DAT_180cc88e0 != (longlong *)0x0) {
    (**(code **)(*DAT_180cc88e0 + 0x10))();
    DAT_180cc88e0 = (longlong *)0x0;
  }
  if (DAT_180cc88d8 != (longlong *)0x0) {
    (**(code **)(*DAT_180cc88d8 + 0x10))();
    DAT_180cc88d8 = (longlong *)0x0;
  }
  if (DAT_180cc88d0 != (longlong *)0x0) {
    (**(code **)(*DAT_180cc88d0 + 0x10))();
    DAT_180cc88d0 = (longlong *)0x0;
  }
  _DAT_180cc88e8 = 0;
  if (DAT_180cc54a8 != (longlong *)0x0) {
    (**(code **)(*DAT_180cc54a8 + 0x10))();
    DAT_180cc54a8 = (longlong *)0x0;
  }
  if (DAT_180cca508 != (longlong *)0x0) {
    (**(code **)(*DAT_180cca508 + 0x10))();
    DAT_180cca508 = (longlong *)0x0;
  }
  if (DAT_180cc54a0 != (longlong *)0x0) {
    (**(code **)(*DAT_180cc54a0 + 0x10))();
    DAT_180cc54a0 = (longlong *)0x0;
  }
  if (DAT_180cc88c0 != (longlong *)0x0) {
    (**(code **)(*DAT_180cc88c0 + 0x10))();
    DAT_180cc88c0 = (longlong *)0x0;
  }
  if (DAT_180cc54b8 != (longlong *)0x0) {
    (**(code **)(*DAT_180cc54b8 + 0x10))();
    DAT_180cc54b8 = (longlong *)0x0;
  }
  if (DAT_180cca4f8 != (longlong *)0x0) {
    (**(code **)(*DAT_180cca4f8 + 0x10))();
    DAT_180cca4f8 = (longlong *)0x0;
  }
  if (DAT_180cca500 != (longlong *)0x0) {
    (**(code **)(*DAT_180cca500 + 0x10))();
    DAT_180cca500 = (longlong *)0x0;
  }
  if (DAT_180cc5090 != (longlong *)0x0) {
    (**(code **)(*DAT_180cc5090 + 0x10))();
    DAT_180cc5090 = (longlong *)0x0;
  }
  if (DAT_180cc4c80 != (longlong *)0x0) {
    (**(code **)(*DAT_180cc4c80 + 0x10))();
    DAT_180cc4c80 = (longlong *)0x0;
  }
  if (DAT_180cc88c8 != (longlong *)0x0) {
    (**(code **)(*DAT_180cc88c8 + 0x10))();
    DAT_180cc88c8 = (longlong *)0x0;
  }
  if (DAT_180cc54b0 != (longlong *)0x0) {
    (**(code **)(*DAT_180cc54b0 + 0x10))();
    DAT_180cc54b0 = (longlong *)0x0;
  }
  if (DAT_180ccf5c0 != (longlong *)0x0) {
    (**(code **)(*DAT_180ccf5c0 + 0x10))();
    DAT_180ccf5c0 = (longlong *)0x0;
  }
  if (DAT_180cc4c78 != (longlong *)0x0) {
    (**(code **)(*DAT_180cc4c78 + 0x10))();
    DAT_180cc4c78 = (longlong *)0x0;
  }
  DAT_180ca0e5f = 0;
  DAT_180cca4f0 = 0;
  return;
}



/* ===== 180034640 FUN_180034640 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_180034640(longlong *param_1)

{
  int iVar1;
  undefined1 auStack_1c8 [32];
  undefined8 *local_1a8;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 local_190;
  undefined4 uStack_18c;
  undefined8 local_188;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined8 local_170;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined8 local_15c;
  undefined4 local_154;
  undefined4 local_150;
  undefined8 local_14c;
  undefined8 uStack_144;
  undefined4 local_13c;
  undefined4 local_138;
  undefined1 local_128 [12];
  undefined4 local_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined1 local_104;
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_1c8;
  if ((DAT_180ca0e5f != '\0') && (DAT_180cca4f0 == param_1)) {
    return 1;
  }
  if ((DAT_180ca12e8 != '\0') || (param_1 == (longlong *)0x0)) {
    return 0;
  }
  FUN_180034430();
  local_1a8 = &DAT_180cc4c78;
  iVar1 = (**(code **)(*param_1 + 0x78))(param_1,&DAT_1806db8e0,0x29c8,0);
  if (-1 < iVar1) {
    local_1a8 = &DAT_180ccf5c0;
    iVar1 = (**(code **)(*param_1 + 0x78))(param_1,&DAT_1806d47b0,0x2a3c,0);
    if (-1 < iVar1) {
      local_1a8 = &DAT_180cc54b0;
      iVar1 = (**(code **)(*param_1 + 0x78))(param_1,&DAT_1806d8d40,0x1900,0);
      if (-1 < iVar1) {
        local_1a8 = &DAT_180cc88c8;
        iVar1 = (**(code **)(*param_1 + 0x78))(param_1,&DAT_1806d71f0,0x1b50,0);
        if (-1 < iVar1) {
          local_1a8 = &DAT_180cc4c80;
          iVar1 = (**(code **)(*param_1 + 0x90))(param_1,&DAT_1806da640,0x12a0,0);
          if (-1 < iVar1) {
            local_190 = 0x88;
            uStack_18c = 0;
            local_198 = 0x1020;
            uStack_194 = 0;
            local_188 = 0x1000000040;
            iVar1 = (**(code **)(*param_1 + 0x18))(param_1,&local_198,0,&DAT_180cc54b8);
            if (((((-1 < iVar1) && (DAT_180cc54b8 != 0)) &&
                 (iVar1 = (**(code **)(*param_1 + 0x38))(param_1,DAT_180cc54b8,0,&DAT_180cc88c0),
                 -1 < iVar1)) &&
                ((DAT_180cc88c0 != 0 &&
                 (iVar1 = (**(code **)(*param_1 + 0x40))(param_1,DAT_180cc54b8,0,&DAT_180cc54a0),
                 -1 < iVar1)))) && (DAT_180cc54a0 != 0)) {
              local_170 = 0;
              local_180 = 0x30b0;
              local_17c = 2;
              local_178 = 4;
              local_174 = 0x10000;
              iVar1 = (**(code **)(*param_1 + 0x18))(param_1,&local_180,0,&DAT_180cc5090);
              if ((iVar1 < 0) || (DAT_180cc5090 == 0)) {
                local_180 = 0x2000;
                local_178 = 8;
              }
              else {
                local_180 = 0x2000;
                local_178 = 8;
                iVar1 = (**(code **)(*param_1 + 0x18))(param_1,&local_180,0,&DAT_180cca500);
                if ((-1 < iVar1) && (DAT_180cca500 != 0)) {
                  local_188 = 0;
                  local_198 = 3;
                  uStack_194 = 1;
                  local_190 = 0;
                  uStack_18c = 0x200;
                  iVar1 = (**(code **)(*param_1 + 0x38))
                                    (param_1,DAT_180cca500,&local_198,&DAT_180cca4f8);
                  if ((-1 < iVar1) && (DAT_180cca4f8 != 0)) {
                    local_15c = 4;
                    local_13c = 0;
                    local_168 = 0x14;
                    local_14c = 0;
                    uStack_144 = 0;
                    local_160 = 4;
                    local_164 = 4;
                    local_154 = 1;
                    local_150 = 1;
                    local_138 = 0x7f7fffff;
                    iVar1 = (**(code **)(*param_1 + 0xb8))(param_1,&local_168,&DAT_180cca508);
                    if ((-1 < iVar1) && (DAT_180cca508 != 0)) {
                      FUN_180540170(local_128,0,0x108);
                      local_11c = 2;
                      local_118 = _DAT_1808ad600;
                      uStack_110 = _UNK_1808ad608;
                      local_108 = 1;
                      local_104 = 0xf;
                      iVar1 = (**(code **)(*param_1 + 0xa0))(param_1,local_128,&DAT_180cc54a8);
                      if ((-1 < iVar1) && (DAT_180cc54a8 != 0)) {
                        DAT_180ca0e5f = 1;
                        DAT_180cca4f0 = param_1;
                        return 1;
                      }
                    }
                  }
                  goto LAB_180034a42;
                }
              }
              local_198 = 3;
              uStack_194 = 1;
              local_190 = 0;
              uStack_18c = 0x200;
            }
            goto LAB_180034a42;
          }
        }
      }
    }
  }
  FUN_1802b2560("[error] nl_radius | neverlose shaders rejected by the device");
LAB_180034a42:
  FUN_180034430();
  DAT_180ca12e8 = 1;
  FUN_1802b2560("[error] nl_radius | D3D resources");
  return 0;
}



/* ===== 180034a70 FUN_180034a70 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180034a70(longlong *param_1,undefined4 param_2,undefined4 param_3,longlong *param_4)

{
  int iVar1;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined8 local_64;
  undefined4 local_5c;
  undefined4 local_58;
  undefined8 local_54;
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_c8;
  local_64 = 1;
  local_54 = 0;
  local_70 = 1;
  local_6c = 1;
  local_68 = 0x1c;
  local_5c = 0;
  local_58 = 0x28;
  local_78 = param_2;
  local_74 = param_3;
  iVar1 = (**(code **)(*param_1 + 0x28))(param_1,&local_78,0);
  if ((-1 < iVar1) && (*param_4 != 0)) {
    local_a8 = local_68;
    local_a0 = 0;
    local_98 = 0;
    local_a4 = 4;
    iVar1 = (**(code **)(*param_1 + 0x48))(param_1,*param_4,&local_a8,param_4 + 1);
    if ((-1 < iVar1) && (param_4[1] != 0)) {
      local_90 = local_68;
      local_8c = 4;
      local_80 = 0;
      local_84 = 1;
      iVar1 = (**(code **)(*param_1 + 0x38))(param_1,*param_4,&local_90,param_4 + 2);
      if ((-1 < iVar1) && (param_4[2] != 0)) {
        *(undefined4 *)(param_4 + 3) = param_2;
        *(undefined4 *)((longlong)param_4 + 0x1c) = param_3;
        return 1;
      }
    }
  }
  return 0;
}



/* ===== 180034b90 FUN_180034b90 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_180034b90(undefined8 param_1,uint param_2,uint param_3,undefined4 param_4,undefined4 param_5)

{
  bool bVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;
  float extraout_XMM0_Da;
  longlong *local_68;
  longlong *plStack_60;
  longlong *local_58;
  undefined8 uStack_50;
  longlong *local_48;
  longlong *plStack_40;
  longlong *local_38;
  undefined8 uStack_30;
  
  if (((((((DAT_180ccf5c8 != (longlong *)0x0) && (DAT_180ccf5d0 != (longlong *)0x0)) &&
         (DAT_180ccf5d8 != (longlong *)0x0)) &&
        ((DAT_180cc88d0 != (longlong *)0x0 && (DAT_180cc88d8 != (longlong *)0x0)))) &&
       ((DAT_180cc88e0 != (longlong *)0x0 &&
        ((param_2 <= DAT_180ccf5e0 && (param_3 <= DAT_180ccf5e4)))))) &&
      (DAT_180cc88e8 == DAT_180ccf5e0)) && (DAT_180cc88ec == DAT_180ccf5e4)) {
    return 1;
  }
  bVar3 = true;
  if (((DAT_180ccf5c8 == (longlong *)0x0) || (DAT_180ccf5d0 == (longlong *)0x0)) ||
     (DAT_180ccf5d8 == (longlong *)0x0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  uVar7 = 0;
  if (bVar1) {
    uVar7 = DAT_180ccf5e0;
  }
  if (((DAT_180ccf5c8 == (longlong *)0x0) || (DAT_180ccf5d0 == (longlong *)0x0)) ||
     (DAT_180ccf5d8 == (longlong *)0x0)) {
    bVar3 = false;
  }
  uVar5 = 0;
  if (bVar3) {
    uVar5 = DAT_180ccf5e4;
  }
  uVar4 = param_2 + 0xff & 0xffffff00;
  uVar6 = param_3 + 0xff & 0xffffff00;
  fVar9 = (float)FUN_18053ef70(param_4);
  FUN_18053ef70(param_5);
  uVar8 = (uint)(longlong)fVar9;
  if (uVar4 < (uint)(longlong)fVar9) {
    uVar8 = uVar4;
  }
  uVar4 = (uint)(longlong)extraout_XMM0_Da;
  if (uVar6 < (uint)(longlong)extraout_XMM0_Da) {
    uVar4 = uVar6;
  }
  if (uVar8 < uVar7) {
    uVar8 = uVar7;
  }
  if (uVar4 < uVar5) {
    uVar4 = uVar5;
  }
  if ((uVar8 != 0) && (uVar4 != 0)) {
    local_58 = (longlong *)0x0;
    uStack_50 = 0;
    local_38 = (longlong *)0x0;
    uStack_30 = 0;
    local_68 = (longlong *)0x0;
    plStack_60 = (longlong *)0x0;
    local_48 = (longlong *)0x0;
    plStack_40 = (longlong *)0x0;
    cVar2 = FUN_180034a70(param_1,uVar8,uVar4,&local_68);
    if ((cVar2 != '\0') && (cVar2 = FUN_180034a70(param_1,uVar8,uVar4,&local_48), cVar2 != '\0')) {
      if (DAT_180ccf5d8 != (longlong *)0x0) {
        (**(code **)(*DAT_180ccf5d8 + 0x10))();
        DAT_180ccf5d8 = (longlong *)0x0;
      }
      if (DAT_180ccf5d0 != (longlong *)0x0) {
        (**(code **)(*DAT_180ccf5d0 + 0x10))();
        DAT_180ccf5d0 = (longlong *)0x0;
      }
      if (DAT_180ccf5c8 != (longlong *)0x0) {
        (**(code **)(*DAT_180ccf5c8 + 0x10))();
        DAT_180ccf5c8 = (longlong *)0x0;
      }
      _DAT_180ccf5e0 = 0;
      if (DAT_180cc88e0 != (longlong *)0x0) {
        (**(code **)(*DAT_180cc88e0 + 0x10))();
        DAT_180cc88e0 = (longlong *)0x0;
      }
      if (DAT_180cc88d8 != (longlong *)0x0) {
        (**(code **)(*DAT_180cc88d8 + 0x10))();
        DAT_180cc88d8 = (longlong *)0x0;
      }
      if (DAT_180cc88d0 != (longlong *)0x0) {
        (**(code **)(*DAT_180cc88d0 + 0x10))();
      }
      DAT_180cc88d0 = local_48;
      DAT_180cc88d8 = plStack_40;
      DAT_180cc88e0 = local_38;
      _DAT_180cc88e8 = uStack_30;
      DAT_180ccf5c8 = local_68;
      DAT_180ccf5d0 = plStack_60;
      DAT_180ccf5d8 = local_58;
      _DAT_180ccf5e0 = uStack_50;
      return 1;
    }
    if (local_58 != (longlong *)0x0) {
      (**(code **)(*local_58 + 0x10))();
      local_58 = (longlong *)0x0;
    }
    if (plStack_60 != (longlong *)0x0) {
      (**(code **)(*plStack_60 + 0x10))();
      plStack_60 = (longlong *)0x0;
    }
    if (local_68 != (longlong *)0x0) {
      (**(code **)(*local_68 + 0x10))();
      local_68 = (longlong *)0x0;
    }
    uStack_50 = 0;
    if (local_38 != (longlong *)0x0) {
      (**(code **)(*local_38 + 0x10))();
      local_38 = (longlong *)0x0;
    }
    if (plStack_40 != (longlong *)0x0) {
      (**(code **)(*plStack_40 + 0x10))();
      plStack_40 = (longlong *)0x0;
    }
    if (local_48 != (longlong *)0x0) {
      (**(code **)(*local_48 + 0x10))();
    }
  }
  return 0;
}



/* ===== 180034e90 FUN_180034e90 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180034e90(longlong param_1,float *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  undefined4 uVar14;
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
  longlong *plVar25;
  char cVar26;
  int iVar27;
  int iVar28;
  float *pfVar29;
  int *piVar30;
  longlong *plVar31;
  uint uVar32;
  longlong lVar33;
  uint uVar34;
  ulonglong uVar35;
  ulonglong uVar36;
  uint uVar37;
  int iVar38;
  int iVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  undefined1 auStack_598 [32];
  ulonglong local_578;
  undefined8 **local_570;
  char local_568;
  uint local_564;
  uint local_560;
  int local_55c;
  longlong *local_558;
  longlong *local_550;
  undefined4 local_548;
  undefined4 local_544;
  longlong *local_540;
  longlong *local_538;
  longlong *local_530;
  longlong *local_528;
  longlong *local_520;
  longlong *local_518;
  longlong *local_510;
  longlong *local_508;
  undefined8 *local_500;
  undefined8 uStack_4f8;
  longlong local_4f0 [4];
  undefined8 local_4d0;
  undefined8 local_4c8;
  undefined8 uStack_4c0;
  int local_408;
  int local_404;
  int local_400;
  int local_3fc;
  int local_3f8;
  int local_3f4;
  int local_3f0;
  int local_3ec;
  int local_3e8;
  int local_3e4;
  int local_3e0;
  int local_3dc;
  float local_3d8;
  float local_3d4;
  undefined8 local_3d0;
  undefined8 uStack_3c8;
  undefined8 local_3c0;
  undefined8 uStack_3b8;
  undefined8 local_3b0;
  undefined8 uStack_3a8;
  longlong local_398 [8];
  float local_358;
  float local_354;
  undefined8 local_350;
  undefined8 uStack_348;
  undefined1 local_1d8 [256];
  ulonglong local_d8;
  
  plVar25 = DAT_1811079f8;
  if ((((param_1 != 0) &&
       (local_d8 = DAT_180919500 ^ (ulonglong)auStack_598, param_2 != (float *)0x0)) &&
      (puVar2 = *(undefined8 **)(param_2 + 0xe), puVar2 != (undefined8 *)0x0)) &&
     (0xaf < (int)param_2[0x10])) {
    local_4f0[2] = puVar2[10];
    local_4f0[3] = puVar2[0xb];
    uVar32 = *(uint *)(puVar2 + 9);
    fVar45 = *(float *)(puVar2 + 0x12);
    fVar40 = *(float *)((longlong)puVar2 + 0x94);
    fVar41 = *(float *)(puVar2 + 0x13);
    fVar43 = *(float *)((longlong)puVar2 + 0x9c);
    uVar15 = puVar2[6];
    uVar16 = puVar2[7];
    uVar17 = *puVar2;
    uVar18 = puVar2[1];
    uVar19 = puVar2[2];
    uVar20 = puVar2[3];
    uVar21 = puVar2[4];
    uVar22 = puVar2[5];
    uVar4 = *(undefined4 *)(puVar2 + 8);
    uVar5 = *(undefined4 *)((longlong)puVar2 + 0x44);
    uVar6 = *(undefined4 *)(puVar2 + 9);
    uVar7 = *(uint *)((longlong)puVar2 + 0x4c);
    uVar8 = *(undefined4 *)(puVar2 + 0xc);
    uVar9 = *(undefined4 *)((longlong)puVar2 + 100);
    uVar10 = *(undefined4 *)(puVar2 + 0xd);
    fVar11 = *(float *)((longlong)puVar2 + 0x6c);
    uVar12 = *(undefined4 *)(puVar2 + 0xe);
    fVar13 = *(float *)((longlong)puVar2 + 0x74);
    iVar28 = *(int *)(puVar2 + 0xf);
    uVar14 = *(undefined4 *)((longlong)puVar2 + 0x7c);
    uVar23 = puVar2[0x10];
    uVar24 = puVar2[0x11];
    local_3c0 = puVar2[0x14];
    uStack_3b8 = puVar2[0x15];
    if (((uVar32 - 1 < 0x100) && (uVar7 - 1 < 0x100)) && ((iVar28 != 1 || (uVar7 == 1)))) {
      local_550 = (longlong *)((ulonglong)uVar32 * 0x30);
      local_558 = (longlong *)((ulonglong)uVar7 * 0x20);
      if (local_550 + 0x16 + (ulonglong)uVar7 * 4 <= (longlong *)(longlong)(int)param_2[0x10]) {
        uVar37 = 0;
        puVar1 = (undefined8 *)((longlong)local_550 + (longlong)puVar2);
        uVar35 = 0;
        if (uVar7 != 0) {
          do {
            uVar34 = *(uint *)(puVar1 + uVar35 * 4 + 0x16);
            if (uVar34 < uVar37) {
              return;
            }
            uVar37 = *(uint *)((longlong)puVar1 + uVar35 * 0x20 + 0xb4);
            if (uVar37 == 0) {
              return;
            }
            if (uVar32 <= uVar34) {
              return;
            }
            if (uVar32 - uVar34 < uVar37) {
              return;
            }
            uVar37 = uVar37 + uVar34;
            uVar34 = (int)uVar35 + 1;
            uVar35 = (ulonglong)uVar34;
          } while (uVar34 < uVar7);
        }
        lVar3 = **(longlong **)(DAT_180ca0a50 + 0x2058);
        cVar26 = *(char *)(lVar3 + 0x60);
        lVar33 = lVar3 + 0x60;
        if (cVar26 == '\0') {
          lVar33 = 0;
        }
        if (lVar33 == 0) {
          fVar44 = 0.0;
          fVar42 = 0.0;
        }
        else {
          pfVar29 = (float *)(lVar3 + 0x84);
          if (cVar26 == '\0') {
            pfVar29 = (float *)&DAT_00000024;
          }
          fVar42 = *pfVar29;
          pfVar29 = (float *)(lVar3 + 0x80);
          if (cVar26 == '\0') {
            pfVar29 = (float *)&DAT_00000020;
          }
          fVar44 = *pfVar29;
        }
        local_408 = (int)(*param_2 - fVar44);
        local_404 = (int)(param_2[1] - fVar42);
        local_400 = (int)(param_2[2] - fVar44);
        local_3fc = (int)(param_2[3] - fVar42);
        if (((local_408 < local_400) && (local_404 < local_3fc)) &&
           (DAT_1811079f8 != (longlong *)0x0)) {
          local_540 = DAT_1811079e0;
          cVar26 = FUN_180034640(DAT_1811079e0);
          if (cVar26 != '\0') {
            lVar3 = **(longlong **)(DAT_180ca0a50 + 0x2058);
            cVar26 = *(char *)(lVar3 + 0x60);
            lVar33 = lVar3 + 0x60;
            if (cVar26 == '\0') {
              lVar33 = 0;
            }
            if (lVar33 != 0) {
              piVar30 = (int *)(lVar3 + 0xa8);
              if (cVar26 == '\0') {
                piVar30 = (int *)&DAT_00000048;
              }
              if (0 < *piVar30) {
                plVar31 = (longlong *)(lVar3 + 0x78);
                iVar38 = 0;
                iVar39 = 0;
                uVar35 = 0;
                if (cVar26 == '\0') {
                  plVar31 = (longlong *)&DAT_00000018;
                }
                do {
                  lVar33 = *(longlong *)(*plVar31 + uVar35 * 8);
                  if (lVar33 == param_1) {
                    local_568 = '\0';
                    local_55c = 0x10;
                    FUN_180540170(&local_358,0,0x180);
                    uVar32 = 0;
                    local_560 = 0;
                    local_564 = 0;
                    if (((0.0 < fVar11) && (0.0 < fVar13)) &&
                       ((**(code **)(*plVar25 + 0x2f8))(plVar25,&local_55c,&local_358),
                       local_55c != 0)) {
                      local_578 = CONCAT44(local_578._4_4_,uVar5);
                      uVar32 = (uint)(local_408 < 0) + local_408 & 0xfffffffe;
                      local_564 = (uint)(local_404 < 0) + local_404 & 0xfffffffe;
                      local_560 = uVar32;
                      cVar26 = FUN_180034b90(local_540,local_400 - uVar32,local_3fc - local_564,
                                             uVar4);
                      if (cVar26 != '\0') {
                        fVar45 = (float)(int)uVar32;
                        local_568 = '\x01';
                        fVar40 = (float)(int)local_564;
                        fVar41 = (float)DAT_180ccf5e0;
                        fVar43 = (float)DAT_180ccf5e4;
                      }
                    }
                    local_570 = &local_500;
                    local_500 = (undefined8 *)0x0;
                    uStack_4f8 = 0;
                    local_578 = local_578 & 0xffffffff00000000;
                    iVar27 = (**(code **)(*plVar25 + 0x70))(plVar25,DAT_180cc5090,0,4);
                    if (iVar27 < 0) {
                      return;
                    }
                    *local_500 = uVar17;
                    local_500[1] = uVar18;
                    local_500[2] = uVar19;
                    local_500[3] = uVar20;
                    local_500[4] = uVar21;
                    local_500[5] = uVar22;
                    local_500[6] = uVar15;
                    local_500[7] = uVar16;
                    *(undefined4 *)(local_500 + 8) = uVar4;
                    *(undefined4 *)((longlong)local_500 + 0x44) = uVar5;
                    *(undefined4 *)(local_500 + 9) = uVar6;
                    *(uint *)((longlong)local_500 + 0x4c) = uVar7;
                    local_500[10] = local_4f0[2];
                    local_500[0xb] = local_4f0[3];
                    *(undefined4 *)(local_500 + 0xc) = uVar8;
                    *(undefined4 *)((longlong)local_500 + 100) = uVar9;
                    *(undefined4 *)(local_500 + 0xd) = uVar10;
                    *(float *)((longlong)local_500 + 0x6c) = fVar11;
                    *(undefined4 *)(local_500 + 0xe) = uVar12;
                    *(float *)((longlong)local_500 + 0x74) = fVar13;
                    *(int *)(local_500 + 0xf) = iVar28;
                    *(undefined4 *)((longlong)local_500 + 0x7c) = uVar14;
                    local_500[0x10] = uVar23;
                    local_500[0x11] = uVar24;
                    *(float *)(local_500 + 0x12) = fVar45;
                    *(float *)((longlong)local_500 + 0x94) = fVar40;
                    *(float *)(local_500 + 0x13) = fVar41;
                    *(float *)((longlong)local_500 + 0x9c) = fVar43;
                    local_500[0x14] = local_3c0;
                    local_500[0x15] = uStack_3b8;
                    FUN_180540530(local_500 + 0x16,puVar2 + 0x16,local_550);
                    (**(code **)(*plVar25 + 0x78))(plVar25,DAT_180cc5090,0);
                    local_570 = &local_500;
                    local_578 = local_578 & 0xffffffff00000000;
                    iVar28 = (**(code **)(*plVar25 + 0x70))(plVar25,DAT_180cca500,0,4);
                    if (iVar28 < 0) {
                      return;
                    }
                    FUN_180540530(local_500,puVar1 + 0x16,local_558);
                    (**(code **)(*plVar25 + 0x78))(plVar25,DAT_180cca500,0);
                    local_544 = 0x10;
                    FUN_180540170(local_1d8,0,0x100);
                    (**(code **)(*plVar25 + 0x300))(plVar25,&local_544,local_1d8);
                    local_508 = (longlong *)0x0;
                    (**(code **)(*plVar25 + 0x250))(plVar25,&local_508,0,0);
                    local_510 = (longlong *)0x0;
                    (**(code **)(*plVar25 + 0x268))(plVar25,2,1,&local_510);
                    local_520 = (longlong *)0x0;
                    local_518 = (longlong *)0x0;
                    (**(code **)(*plVar25 + 0x248))(plVar25,2,1,&local_520);
                    (**(code **)(*plVar25 + 0x248))(plVar25,3,1,&local_518);
                    (**(code **)(*plVar25 + 0x80))(plVar25,2,1,&DAT_180cc5090);
                    (**(code **)(*plVar25 + 0x40))(plVar25,2,1,&DAT_180cca4f8);
                    local_4d0 = 0;
                    (**(code **)(*plVar25 + 0x40))(plVar25,3,1,&local_4d0);
                    local_528 = (longlong *)0x0;
                    (**(code **)(*plVar25 + 0x358))(plVar25,&local_528,0,0);
                    local_530 = (longlong *)0x0;
                    (**(code **)(*plVar25 + 0x368))(plVar25,2,1,&local_530);
                    local_538 = (longlong *)0x0;
                    (**(code **)(*plVar25 + 0x350))(plVar25,0,1,&local_538);
                    (**(code **)(*plVar25 + 0x228))(plVar25,DAT_180cc4c80,0,0);
                    (**(code **)(*plVar25 + 0x238))(plVar25,2,1,&DAT_180cc5090);
                    local_578 = 0;
                    (**(code **)(*plVar25 + 0x220))(plVar25,0,1,&DAT_180cc54a0);
                    (**(code **)(*plVar25 + 0x148))(plVar25,1,1,1);
                    local_578 = 0;
                    (**(code **)(*plVar25 + 0x220))(plVar25,0,1,&local_538);
                    (**(code **)(*plVar25 + 0x238))(plVar25,2,1,&local_530);
                    (**(code **)(*plVar25 + 0x228))(plVar25,local_528,0,0);
                    if (local_538 != (longlong *)0x0) {
                      (**(code **)(*local_538 + 0x10))();
                      local_538 = (longlong *)0x0;
                    }
                    if (local_530 != (longlong *)0x0) {
                      (**(code **)(*local_530 + 0x10))();
                      local_530 = (longlong *)0x0;
                    }
                    if (local_528 != (longlong *)0x0) {
                      (**(code **)(*local_528 + 0x10))();
                      local_528 = (longlong *)0x0;
                    }
                    (**(code **)(*plVar25 + 0x40))(plVar25,3,1,&DAT_180cc88c0);
                    if (local_568 == '\0') {
                      (**(code **)(*plVar25 + 0x168))(plVar25,1,&local_408);
                      (**(code **)(*plVar25 + 0x48))(plVar25,DAT_180cc4c78,0,0);
                      (**(code **)(*plVar25 + 0x60))
                                (plVar25,param_2[10],(int)param_2[9] + iVar38,
                                 (int)param_2[8] + iVar39);
                    }
                    else {
                      local_558 = (longlong *)0x0;
                      local_398[0] = 0;
                      local_398[1] = 0;
                      local_398[2] = 0;
                      local_398[3] = 0;
                      local_398[4] = 0;
                      local_398[5] = 0;
                      local_398[6] = 0;
                      local_398[7] = 0;
                      (**(code **)(*plVar25 + 0x2c8))(plVar25,8,local_398,&local_558);
                      local_4f0[0] = 0;
                      local_4f0[1] = 0;
                      (**(code **)(*plVar25 + 0x248))(plVar25,0,2,local_4f0);
                      local_550 = (longlong *)0x0;
                      local_548 = 0xffffffff;
                      local_3c0 = 0;
                      uStack_3b8 = 0;
                      (**(code **)(*plVar25 + 0x2d8))(plVar25,&local_550,&local_3c0,&local_548);
                      local_540 = (longlong *)0x0;
                      (**(code **)(*plVar25 + 600))(plVar25,0,1,&local_540);
                      uVar7 = local_564;
                      local_3d0 = local_350;
                      uStack_3c8 = uStack_348;
                      local_3d8 = local_358 - (float)(int)uVar32;
                      local_3d4 = local_354 - (float)(int)local_564;
                      fVar45 = (float)FUN_18053f0d0();
                      iVar28 = local_408;
                      local_3f8 = local_408;
                      if (local_408 < (int)fVar45) {
                        local_3f8 = (int)fVar45;
                      }
                      local_3f8 = local_3f8 - local_560;
                      fVar45 = (float)FUN_18053f0d0();
                      iVar27 = local_404;
                      local_3f4 = local_404;
                      if (local_404 < (int)fVar45) {
                        local_3f4 = (int)fVar45;
                      }
                      local_3f4 = local_3f4 - uVar7;
                      fVar45 = (float)FUN_18053ef70();
                      local_3e0 = local_400;
                      local_3f0 = local_400;
                      if ((int)fVar45 < local_400) {
                        local_3f0 = (int)fVar45;
                      }
                      local_3f0 = local_3f0 - local_560;
                      fVar45 = (float)FUN_18053ef70();
                      local_3ec = local_3fc;
                      if ((int)fVar45 < local_3fc) {
                        local_3ec = (int)fVar45;
                      }
                      local_3ec = local_3ec - local_564;
                      local_3dc = local_3fc - local_564;
                      local_3e8 = iVar28 - local_560;
                      local_3e0 = local_3e0 - local_560;
                      local_3e4 = iVar27 - local_564;
                      local_3b0 = 0;
                      uStack_3a8 = 0;
                      local_4c8 = 0;
                      uStack_4c0 = 0;
                      (**(code **)(*plVar25 + 0x40))(plVar25,0,2,&local_4c8);
                      (**(code **)(*plVar25 + 0x108))(plVar25,1,&DAT_180ccf5d0,0);
                      (**(code **)(*plVar25 + 400))(plVar25,DAT_180ccf5d0,&local_3b0);
                      (**(code **)(*plVar25 + 0x118))(plVar25,DAT_180cc54a8,&local_3b0,0xffffffff);
                      (**(code **)(*plVar25 + 0x160))(plVar25,1,&local_3d8);
                      (**(code **)(*plVar25 + 0x168))(plVar25,1,&local_3f8);
                      (**(code **)(*plVar25 + 0x48))(plVar25,DAT_180ccf5c0,0,0);
                      (**(code **)(*plVar25 + 0x60))
                                (plVar25,param_2[10],(int)param_2[9] + iVar38,
                                 (int)param_2[8] + iVar39);
                      (**(code **)(*plVar25 + 0x108))(plVar25,1,&DAT_180cc88d8,0);
                      (**(code **)(*plVar25 + 400))(plVar25,DAT_180cc88d8,&local_3b0);
                      (**(code **)(*plVar25 + 0x40))(plVar25,0,1,&DAT_180ccf5d8);
                      (**(code **)(*plVar25 + 0x50))(plVar25,0,1,&DAT_180cca508);
                      (**(code **)(*plVar25 + 0x168))(plVar25,1,&local_3e8);
                      (**(code **)(*plVar25 + 0x48))(plVar25,DAT_180cc54b0,0,0);
                      (**(code **)(*plVar25 + 0x60))
                                (plVar25,param_2[10],(int)param_2[9] + iVar38,
                                 (int)param_2[8] + iVar39);
                      (**(code **)(*plVar25 + 0x108))(plVar25,8,local_398,local_558);
                      (**(code **)(*plVar25 + 0x118))(plVar25,local_550,&local_3c0,local_548);
                      (**(code **)(*plVar25 + 0x160))(plVar25,local_55c,&local_358);
                      (**(code **)(*plVar25 + 0x168))(plVar25,1,&local_408);
                      local_4f0[2] = DAT_180ccf5d8;
                      local_4f0[3] = DAT_180cc88e0;
                      (**(code **)(*plVar25 + 0x40))(plVar25,0,2,local_4f0 + 2);
                      (**(code **)(*plVar25 + 0x48))(plVar25,DAT_180cc88c8,0,0);
                      (**(code **)(*plVar25 + 0x60))
                                (plVar25,param_2[10],(int)param_2[9] + iVar38,
                                 (int)param_2[8] + iVar39);
                      (**(code **)(*plVar25 + 0x40))(plVar25,0,2,local_4f0);
                      (**(code **)(*plVar25 + 0x50))(plVar25,0,1,&local_540);
                      uVar36 = 0;
                      uVar35 = uVar36;
                      do {
                        if ((longlong *)local_4f0[uVar35] != (longlong *)0x0) {
                          (**(code **)(*(longlong *)local_4f0[uVar35] + 0x10))();
                          local_4f0[uVar35] = 0;
                        }
                        uVar35 = uVar35 + 1;
                      } while (uVar35 < 2);
                      do {
                        if ((longlong *)local_398[uVar36] != (longlong *)0x0) {
                          (**(code **)(*(longlong *)local_398[uVar36] + 0x10))();
                          local_398[uVar36] = 0;
                        }
                        uVar36 = uVar36 + 1;
                      } while (uVar36 < 8);
                      if (local_558 != (longlong *)0x0) {
                        (**(code **)(*local_558 + 0x10))();
                        local_558 = (longlong *)0x0;
                      }
                      if (local_550 != (longlong *)0x0) {
                        (**(code **)(*local_550 + 0x10))();
                        local_550 = (longlong *)0x0;
                      }
                      if (local_540 != (longlong *)0x0) {
                        (**(code **)(*local_540 + 0x10))();
                      }
                    }
                    (**(code **)(*plVar25 + 0x168))(plVar25,local_544,local_1d8);
                    (**(code **)(*plVar25 + 0x40))(plVar25,2,1,&local_520);
                    (**(code **)(*plVar25 + 0x40))(plVar25,3,1,&local_518);
                    (**(code **)(*plVar25 + 0x80))(plVar25,2,1,&local_510);
                    (**(code **)(*plVar25 + 0x48))(plVar25,local_508,0,0);
                    if (local_520 != (longlong *)0x0) {
                      (**(code **)(*local_520 + 0x10))();
                      local_520 = (longlong *)0x0;
                    }
                    if (local_518 != (longlong *)0x0) {
                      (**(code **)(*local_518 + 0x10))();
                      local_518 = (longlong *)0x0;
                    }
                    if (local_510 != (longlong *)0x0) {
                      (**(code **)(*local_510 + 0x10))();
                      local_510 = (longlong *)0x0;
                    }
                    if (local_508 == (longlong *)0x0) {
                      return;
                    }
                    (**(code **)(*local_508 + 0x10))();
                    return;
                  }
                  iVar38 = iVar38 + *(int *)(lVar33 + 0x10);
                  uVar32 = (int)uVar35 + 1;
                  uVar35 = (ulonglong)uVar32;
                  iVar39 = iVar39 + *(int *)(lVar33 + 0x20);
                } while ((int)uVar32 < *piVar30);
              }
            }
          }
        }
      }
    }
  }
  return;
}



/* ===== 180035cf0 FUN_180035cf0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_180035cf0(float *param_1,float *param_2)

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
  bool bVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  
  fVar1 = param_1[0xe];
  fVar64 = param_1[6];
  fVar2 = param_1[0xb];
  fVar73 = param_1[7];
  fVar3 = param_1[0xf];
  fVar50 = param_1[0xc];
  fVar56 = param_1[4];
  fVar4 = param_1[8];
  fVar67 = (((param_1[10] * param_1[5] * fVar3 - fVar2 * param_1[5] * fVar1) -
            param_1[9] * fVar64 * fVar3) + param_1[9] * fVar73 * fVar1 +
           param_1[0xd] * fVar64 * fVar2) - param_1[0xd] * fVar73 * param_1[10];
  fVar61 = ((((fVar1 * fVar2 * fVar56 - fVar3 * param_1[10] * fVar56) + fVar3 * fVar4 * fVar64) -
            fVar1 * fVar4 * fVar73) - fVar2 * fVar50 * fVar64) + param_1[10] * fVar50 * fVar73;
  fVar66 = fVar50 * param_1[5];
  fVar62 = fVar4 * param_1[5];
  fVar1 = param_1[0xd];
  fVar5 = param_1[9];
  fVar72 = (((fVar3 * param_1[9] * fVar56 - param_1[0xd] * fVar2 * fVar56) - fVar3 * fVar62) +
            fVar1 * fVar4 * fVar73 + fVar2 * fVar66) - param_1[9] * fVar50 * fVar73;
  fVar3 = param_1[2];
  fVar6 = param_1[3];
  fVar7 = *param_1;
  fVar63 = ((((fVar1 * param_1[10] * fVar56 - param_1[0xe] * param_1[9] * fVar56) +
             param_1[0xe] * fVar62) - fVar1 * fVar4 * fVar64) - param_1[10] * fVar66) +
           fVar5 * fVar50 * fVar64;
  fVar49 = fVar50 * fVar6;
  fVar50 = fVar50 * fVar3;
  fVar64 = param_1[8];
  fVar51 = fVar64 * fVar6;
  fVar52 = fVar64 * fVar3;
  fVar64 = fVar64 * param_1[1];
  fVar53 = param_1[10] * fVar7;
  fVar54 = param_1[0xc] * param_1[1];
  fVar70 = param_1[5] * fVar6;
  fVar56 = param_1[4];
  fVar68 = param_1[6] * param_1[1];
  fVar71 = fVar73 * param_1[1];
  fVar55 = fVar56 * fVar6;
  fVar69 = param_1[5] * fVar3;
  fVar65 = fVar56 * param_1[1];
  fVar56 = fVar56 * fVar3;
  fVar4 = param_1[0xe];
  fVar62 = param_1[0xb];
  fVar57 = param_1[6] * fVar7;
  fVar66 = param_1[1];
  fVar8 = param_1[0xe];
  fVar58 = param_1[5] * fVar7;
  fVar9 = param_1[10];
  fVar10 = param_1[1];
  fVar11 = param_1[0xf];
  fVar73 = fVar73 * fVar7;
  fVar12 = param_1[0xf];
  fVar13 = param_1[0xe];
  fVar14 = param_1[7];
  fVar15 = param_1[0xf];
  fVar16 = param_1[6];
  fVar17 = param_1[6];
  fVar18 = param_1[7];
  fVar19 = param_1[10];
  fVar20 = param_1[0xb];
  fVar21 = param_1[0xf];
  fVar22 = param_1[0xe];
  fVar23 = param_1[6];
  fVar24 = param_1[7];
  fVar25 = param_1[0xe];
  fVar26 = param_1[10];
  fVar27 = param_1[0xb];
  fVar28 = param_1[6];
  fVar29 = param_1[0xf];
  fVar30 = param_1[9];
  fVar31 = param_1[0xd];
  fVar32 = param_1[0xb];
  fVar33 = param_1[5];
  fVar34 = param_1[7];
  fVar35 = param_1[0xd];
  fVar36 = param_1[0xf];
  fVar37 = param_1[5];
  fVar38 = param_1[9];
  fVar39 = param_1[0xe];
  fVar40 = param_1[0xb];
  fVar41 = param_1[0xd];
  fVar42 = param_1[0xd];
  fVar43 = param_1[10];
  fVar44 = param_1[5];
  fVar45 = param_1[6];
  fVar46 = param_1[9];
  fVar47 = param_1[10];
  fVar60 = param_1[1] * fVar61 + *param_1 * fVar67 + param_1[2] * fVar72 + param_1[3] * fVar63;
  bVar48 = ((uint)fVar60 & 0x7f800000) != 0x7f800000;
  if ((!bVar48) || ((float)((uint)fVar60 & _DAT_1808ade90) <= DAT_1808abf78)) {
    bVar48 = false;
  }
  else {
    fVar59 = DAT_1808ac34c / fVar60;
    *param_2 = fVar67 * fVar59;
    param_2[1] = (((((fVar62 * fVar66 * fVar8 - fVar9 * fVar10 * fVar11) + fVar12 * fVar5 * fVar3) -
                   fVar4 * fVar5 * fVar6) - fVar62 * fVar1 * fVar3) + fVar9 * fVar1 * fVar6) *
                 fVar59;
    param_2[2] = ((((fVar15 * fVar68 - fVar13 * fVar71) - fVar15 * fVar69) + fVar13 * fVar70 +
                  fVar14 * fVar1 * fVar3) - fVar16 * fVar1 * fVar6) * fVar59;
    param_2[3] = (((((fVar19 * fVar71 - fVar20 * fVar68) + fVar20 * fVar69) - fVar19 * fVar70) -
                  fVar18 * fVar5 * fVar3) + fVar17 * fVar5 * fVar6) * fVar59;
    param_2[4] = fVar61 * fVar59;
    param_2[5] = ((((fVar21 * fVar53 - fVar22 * fVar2 * fVar7) - fVar21 * fVar52) + fVar22 * fVar51
                  + fVar20 * fVar50) - fVar19 * fVar49) * fVar59;
    param_2[6] = (((((fVar25 * fVar73 - fVar21 * fVar57) + fVar21 * fVar56) - fVar22 * fVar55) -
                  fVar24 * fVar50) + fVar23 * fVar49) * fVar59;
    param_2[7] = ((((fVar27 * fVar57 - fVar26 * fVar73) - fVar27 * fVar56) + fVar26 * fVar55 +
                  fVar24 * fVar52) - fVar28 * fVar51) * fVar59;
    param_2[8] = fVar72 * fVar59;
    param_2[9] = (((((fVar31 * fVar2 * fVar7 - fVar29 * fVar5 * fVar7) + fVar29 * fVar64) -
                   fVar31 * fVar51) - fVar32 * fVar54) + fVar30 * fVar49) * fVar59;
    param_2[10] = ((((fVar36 * fVar58 - fVar35 * fVar73) - fVar36 * fVar65) + fVar35 * fVar55 +
                   fVar34 * fVar54) - fVar33 * fVar49) * fVar59;
    param_2[0xb] = (((((fVar38 * fVar73 - fVar40 * fVar58) + fVar40 * fVar65) - fVar38 * fVar55) -
                    fVar34 * fVar64) + fVar37 * fVar51) * fVar59;
    param_2[0xc] = fVar63 * fVar59;
    param_2[0xd] = ((((fVar39 * fVar5 * fVar7 - fVar41 * fVar53) - fVar39 * fVar64) +
                     fVar41 * fVar52 + fVar43 * fVar54) - fVar38 * fVar50) * fVar59;
    param_2[0xe] = (((((fVar42 * fVar57 - fVar39 * fVar58) + fVar39 * fVar65) - fVar42 * fVar56) -
                    fVar45 * fVar54) + fVar44 * fVar50) * fVar59;
    param_2[0xf] = ((((fVar47 * fVar58 - fVar46 * fVar57) - fVar47 * fVar65) + fVar46 * fVar56 +
                    fVar45 * fVar64) - fVar44 * fVar52) * fVar59;
  }
  return CONCAT31((int3)(((uint)fVar60 & 0x7f800000) >> 8),bVar48);
}



/* ===== 1800365d0 FUN_1800365d0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800365d0(undefined8 param_1,float *param_2,float param_3,undefined4 param_4,float param_5,
                  float *param_6)

{
  bool bVar1;
  undefined8 uVar2;
  float *pfVar3;
  char cVar4;
  longlong lVar5;
  undefined8 *puVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  float *pfVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined4 local_res20 [2];
  undefined1 auStack_4e8 [32];
  undefined4 *local_4c8;
  undefined4 *local_4c0;
  float local_4b8;
  uint local_4b4;
  undefined1 local_4b0;
  float local_4ac;
  float local_4a8;
  undefined4 *local_4a0;
  undefined8 local_498;
  float fStack_490;
  float fStack_48c;
  float fStack_488;
  undefined8 uStack_484;
  undefined4 **local_478;
  float *local_470;
  float *local_468;
  undefined1 local_460 [40];
  float local_438 [2];
  undefined1 local_430 [8];
  float local_428;
  undefined8 local_424;
  float local_41c;
  float local_418;
  float local_414;
  float local_410;
  float local_40c;
  float local_408;
  float local_404;
  float local_400;
  float local_3fc;
  float local_3f8;
  float local_3f4;
  float local_3f0;
  float local_3ec;
  float local_3e8;
  float local_3e4;
  float local_3e0;
  float local_3dc;
  float local_3d8;
  float local_3d4;
  float local_3d0;
  float local_3cc;
  undefined1 local_3c8 [336];
  float local_278 [2];
  undefined1 auStack_270 [8];
  float fStack_268;
  undefined8 uStack_264;
  ulonglong local_b8;
  
  pfVar3 = param_6;
  local_b8 = DAT_180919500 ^ (ulonglong)auStack_4e8;
  local_res20[0] = param_4;
  local_4b8 = param_3;
  FUN_180540170(local_3c8,0,0x150);
  FUN_180540170(local_278,0,0x1c0);
  local_428 = *param_2;
  fVar24 = param_3 * _DAT_180cc4b6c;
  local_424._0_4_ = param_2[1];
  fVar26 = param_3 * _DAT_180cc4b8c;
  fVar25 = param_3 * _DAT_180cc4b9c;
  local_3d8 = DAT_180cc4ba0 * DAT_1808ac34c;
  local_4ac = DAT_180cc4b70 * DAT_1808ac34c;
  local_3dc = DAT_180cc4b90 * DAT_1808ac34c;
  local_4a8 = param_3 * _DAT_180cc4b7c;
  local_438[0] = (float)local_424 * DAT_180cc4b68 + local_428 * _DAT_180cc4b64 + fVar24 + local_4ac;
  local_3e0 = DAT_180cc4b80 * DAT_1808ac34c;
  local_4a0 = (undefined4 *)CONCAT44(local_4a0._4_4_,local_3e0);
  local_438[1] = (float)local_424 * DAT_180cc4b78 + local_428 * DAT_180cc4b74 + local_4a8 +
                 local_3e0;
  local_430._0_4_ =
       (float)local_424 * DAT_180cc4b88 + local_428 * DAT_180cc4b84 + fVar26 + local_3dc;
  local_430._4_4_ =
       (float)local_424 * DAT_180cc4b98 + local_428 * DAT_180cc4b94 + fVar25 + local_3d8;
  local_408 = param_2[3];
  local_424._4_4_ = local_4b8;
  local_40c = param_2[2];
  local_41c = local_408 * DAT_180cc4b68 + local_40c * _DAT_180cc4b64 + fVar24 + local_4ac;
  local_418 = local_408 * DAT_180cc4b78 + local_40c * DAT_180cc4b74 + local_4a8 + local_3e0;
  local_3f0 = param_2[4];
  local_3ec = param_2[5];
  local_414 = local_408 * DAT_180cc4b88 + local_40c * DAT_180cc4b84 + fVar26 + local_3dc;
  local_404 = local_4b8;
  local_410 = local_408 * DAT_180cc4b98 + local_40c * DAT_180cc4b94 + fVar25 + local_3d8;
  local_400 = local_3ec * DAT_180cc4b68 + local_3f0 * _DAT_180cc4b64 + fVar24 + local_4ac;
  local_3fc = local_3ec * DAT_180cc4b78 + local_3f0 * DAT_180cc4b74 + local_4a8 + local_3e0;
  local_3f8 = local_3ec * DAT_180cc4b88 + local_3f0 * DAT_180cc4b84 + fVar26 + local_3dc;
  local_3e8 = local_4b8;
  local_3f4 = local_3ec * DAT_180cc4b98 + local_3f0 * DAT_180cc4b94 + fVar25 + local_3d8;
  local_3d4 = param_2[6];
  local_4c0 = local_res20;
  local_3d0 = param_2[7];
  local_4c8 = local_res20;
  local_4b4 = 0;
  local_3e4 = local_3d0 * DAT_180cc4b68 + local_3d4 * _DAT_180cc4b64 + fVar24 + local_4ac;
  local_3e0 = local_3d0 * DAT_180cc4b78 + local_3d4 * DAT_180cc4b74 + local_4a8 + local_3e0;
  local_3cc = local_4b8;
  local_4b8 = 5.60519e-45;
  local_3dc = local_3d0 * DAT_180cc4b88 + local_3d4 * DAT_180cc4b84 + fVar26 + local_3dc;
  local_3d8 = local_3d0 * DAT_180cc4b98 + local_3d4 * DAT_180cc4b94 + fVar25 + local_3d8;
  cVar4 = FUN_180038d90(local_438,4,local_278,&local_4b4);
  if (cVar4 != '\0') {
    local_4c0 = local_res20;
    local_4c8 = local_res20;
    cVar4 = FUN_1800390d0(local_278,local_4b4,local_438,&local_4b8);
    fVar25 = local_4b8;
    uVar10 = DAT_1808adec0;
    fVar24 = DAT_1808abfa0;
    if (cVar4 != '\0') {
      local_4a0 = &param_5;
      uVar13 = 0;
      uVar9 = 0;
      local_4b4 = 0;
      if (0 < (int)local_4b8) {
        do {
          uVar8 = (int)uVar9 + 1;
          lVar5 = (longlong)((int)uVar8 % (int)fVar25);
          local_478 = &local_4a0;
          pfVar14 = local_438 + lVar5 * 7;
          bVar1 = local_438[lVar5 * 7 + 1] <
                  (float)((uint)param_5 ^ uVar10) * *(float *)(local_430 + lVar5 * 0x1c + 4) -
                  fVar24;
          local_470 = local_438 + uVar9 * 7;
          iVar7 = (int)uVar13;
          local_468 = pfVar14;
          if (local_438[uVar9 * 7 + 1] <
              (float)((uint)param_5 ^ uVar10) * *(float *)(local_430 + uVar9 * 0x1c + 4) - fVar24) {
            if (!bVar1) {
              if (0xf < iVar7) {
                return;
              }
              puVar6 = (undefined8 *)FUN_1800393f0(&local_478,local_460);
              local_498 = *puVar6;
              uVar2 = *(undefined8 *)((longlong)puVar6 + 0xc);
              uStack_484 = *(undefined8 *)((longlong)puVar6 + 0x14);
              lVar5 = (longlong)iVar7 * 0x1c;
              fStack_490 = (float)puVar6[1];
              fStack_48c = (float)uVar2;
              fStack_488 = (float)((ulonglong)uVar2 >> 0x20);
              iVar12 = iVar7 + 1;
              *(undefined8 *)(local_3c8 + lVar5 + 0x150) = local_498;
              *(ulonglong *)(auStack_270 + lVar5) = CONCAT44(fStack_48c,fStack_490);
              *(undefined8 *)(auStack_270 + lVar5 + 4) = uVar2;
              *(undefined8 *)(auStack_270 + lVar5 + 0xc) = uStack_484;
              if (0xf < iVar12) {
                return;
              }
              local_4b4 = iVar7 + 2;
              goto LAB_180036c17;
            }
          }
          else {
            if (bVar1) {
              if (0xf < iVar7) {
                return;
              }
              puVar6 = (undefined8 *)FUN_1800393f0(&local_478,local_460);
              uVar2 = *puVar6;
              fVar26 = *(float *)((longlong)puVar6 + 0xc);
              fVar20 = *(float *)(puVar6 + 2);
              fVar23 = *(float *)((longlong)puVar6 + 0x14);
              fVar16 = *(float *)(puVar6 + 3);
              uStack_484 = *(undefined8 *)((longlong)puVar6 + 0x14);
              fStack_490 = (float)puVar6[1];
              local_498._0_4_ = (float)uVar2;
              local_498._4_4_ = (float)((ulonglong)uVar2 >> 0x20);
              local_4b4 = iVar7 + 1;
              fVar15 = (float)local_498;
              fVar17 = local_498._4_4_;
              fVar18 = fStack_490;
              fVar19 = fVar26;
              local_498 = uVar2;
              fStack_48c = fVar26;
              fStack_488 = fVar20;
            }
            else {
              if (0xf < iVar7) {
                return;
              }
              local_4b4 = iVar7 + 1;
              iVar12 = iVar7;
LAB_180036c17:
              fVar26 = pfVar14[3];
              fVar20 = pfVar14[4];
              fVar23 = pfVar14[5];
              fVar16 = pfVar14[6];
              fVar15 = *pfVar14;
              fVar17 = pfVar14[1];
              fVar18 = pfVar14[2];
              fVar19 = pfVar14[3];
              iVar7 = iVar12;
            }
            uVar13 = (ulonglong)local_4b4;
            lVar5 = (longlong)iVar7 * 0x1c;
            *(float *)(local_3c8 + lVar5 + 0x150) = fVar15;
            *(float *)(auStack_270 + lVar5 + -4) = fVar17;
            *(float *)(auStack_270 + lVar5) = fVar18;
            *(float *)(auStack_270 + lVar5 + 4) = fVar26;
            *(float *)(auStack_270 + lVar5 + 4) = fVar19;
            *(float *)(auStack_270 + lVar5 + 8) = fVar20;
            *(float *)(auStack_270 + lVar5 + 0xc) = fVar23;
            *(float *)((longlong)&uStack_264 + lVar5 + 4) = fVar16;
          }
          uVar9 = (ulonglong)uVar8;
        } while ((int)uVar8 < (int)fVar25);
      }
      if (2 < (int)uVar13) {
        fVar25 = 0.0;
        local_4a0 = &param_5;
        uVar10 = 0;
        local_4b8 = 0.0;
        fVar26 = 0.0;
        if (0 < (int)uVar13) {
          do {
            fVar25 = fVar26;
            lVar11 = (ulonglong)uVar10 * 0x1c;
            uVar10 = uVar10 + 1;
            lVar5 = (longlong)((int)uVar10 % (int)uVar13) * 0x1c;
            local_478 = &local_4a0;
            pfVar14 = (float *)(local_3c8 + lVar5 + 0x150);
            bVar1 = param_5 * *(float *)(auStack_270 + lVar5 + 4) + fVar24 <
                    *(float *)(auStack_270 + lVar5 + -4);
            local_470 = (float *)(local_3c8 + lVar11 + 0x150);
            local_468 = pfVar14;
            if (param_5 * *(float *)(auStack_270 + lVar11 + 4) + fVar24 <
                *(float *)(auStack_270 + lVar11 + -4)) {
              if (!bVar1) {
                if (0xf < (int)fVar25) {
                  return;
                }
                puVar6 = (undefined8 *)FUN_180039550(&local_478,local_460);
                local_498 = *puVar6;
                uVar2 = *(undefined8 *)((longlong)puVar6 + 0xc);
                uStack_484 = *(undefined8 *)((longlong)puVar6 + 0x14);
                lVar11 = (longlong)(int)fVar25 * 0x1c;
                fStack_490 = (float)puVar6[1];
                fStack_48c = (float)uVar2;
                fStack_488 = (float)((ulonglong)uVar2 >> 0x20);
                fVar26 = (float)((int)fVar25 + 1);
                *(undefined8 *)(local_438 + (longlong)(int)fVar25 * 7) = local_498;
                *(ulonglong *)(local_430 + lVar11) = CONCAT44(fStack_48c,fStack_490);
                *(undefined8 *)(local_430 + lVar11 + 4) = uVar2;
                *(undefined8 *)(local_430 + lVar11 + 0xc) = uStack_484;
                if (0xf < (int)fVar26) {
                  return;
                }
                local_4b8 = (float)((int)fVar25 + 2);
                goto LAB_180036d99;
              }
            }
            else {
              if (bVar1) {
                if (0xf < (int)fVar25) {
                  return;
                }
                puVar6 = (undefined8 *)FUN_180039550(&local_478,local_460);
                uVar2 = *puVar6;
                fVar20 = *(float *)((longlong)puVar6 + 0xc);
                fVar23 = *(float *)(puVar6 + 2);
                uVar21 = *(undefined4 *)((longlong)puVar6 + 0x14);
                uVar22 = *(undefined4 *)(puVar6 + 3);
                uStack_484 = *(undefined8 *)((longlong)puVar6 + 0x14);
                fStack_490 = (float)puVar6[1];
                local_498._0_4_ = (float)uVar2;
                local_498._4_4_ = (float)((ulonglong)uVar2 >> 0x20);
                local_4b8 = (float)((int)fVar25 + 1);
                fVar16 = (float)local_498;
                fVar15 = local_498._4_4_;
                fVar17 = fStack_490;
                fVar18 = fVar20;
                local_498 = uVar2;
                fStack_48c = fVar20;
                fStack_488 = fVar23;
              }
              else {
                if (0xf < (int)fVar25) {
                  return;
                }
                local_4b8 = (float)((int)fVar25 + 1);
                fVar26 = fVar25;
LAB_180036d99:
                fVar20 = *(float *)(auStack_270 + lVar5 + 4);
                fVar23 = *(float *)(auStack_270 + lVar5 + 8);
                uVar21 = *(undefined4 *)(auStack_270 + lVar5 + 0xc);
                uVar22 = *(undefined4 *)((longlong)&uStack_264 + lVar5 + 4);
                fVar16 = *pfVar14;
                fVar15 = *(float *)(auStack_270 + lVar5 + -4);
                fVar17 = *(float *)(auStack_270 + lVar5);
                fVar18 = *(float *)(auStack_270 + lVar5 + 4);
                fVar25 = fVar26;
              }
              lVar5 = (longlong)(int)fVar25;
              lVar11 = lVar5 * 0x1c;
              local_438[lVar5 * 7] = fVar16;
              local_438[lVar5 * 7 + 1] = fVar15;
              *(float *)(local_430 + lVar11) = fVar17;
              *(float *)(local_430 + lVar11 + 4) = fVar20;
              *(float *)(local_430 + lVar11 + 4) = fVar18;
              *(float *)(local_430 + lVar11 + 8) = fVar23;
              *(undefined4 *)(local_430 + lVar11 + 0xc) = uVar21;
              *(undefined4 *)(local_3c8 + lVar11 + -0x58) = uVar22;
              fVar25 = local_4b8;
            }
            fVar26 = fVar25;
          } while ((int)uVar10 < (int)uVar13);
        }
        if (2 < (int)fVar25) {
          cVar4 = FUN_1800396b0(local_438,fVar25,local_278,&local_4b4);
          if (cVar4 != '\0') {
            local_4c0 = (undefined4 *)CONCAT71(local_4c0._1_7_,local_4b0);
            cVar4 = FUN_180039960(local_278,local_4b4,local_438,&local_4b8);
            uVar10 = _DAT_1808ade90;
            fVar25 = DAT_1808ac1f4;
            if ((cVar4 != '\0') && (iVar7 = 0, 0 < (int)local_4b8)) {
              do {
                lVar5 = (longlong)iVar7;
                if (fVar24 <= (float)((uint)*(float *)(local_430 + lVar5 * 0x1c + 4) & uVar10)) {
                  fVar26 = DAT_1808ac34c / *(float *)(local_430 + lVar5 * 0x1c + 4);
                  fVar20 = (fVar25 - fVar26 * local_438[lVar5 * 7 + 1] * fVar25) * DAT_180cc4bf0;
                  fVar23 = (fVar26 * local_438[lVar5 * 7] * fVar25 + fVar25) * DAT_180cc4bec;
                  fVar26 = fVar23;
                  if (*pfVar3 <= fVar23) {
                    fVar26 = *pfVar3;
                  }
                  *pfVar3 = fVar26;
                  if (fVar23 <= pfVar3[1]) {
                    fVar23 = pfVar3[1];
                  }
                  pfVar3[1] = fVar23;
                  fVar26 = fVar20;
                  if (pfVar3[2] <= fVar20) {
                    fVar26 = pfVar3[2];
                  }
                  pfVar3[2] = fVar26;
                  if (fVar20 <= pfVar3[3]) {
                    fVar20 = pfVar3[3];
                  }
                  pfVar3[3] = fVar20;
                  *(undefined1 *)(pfVar3 + 4) = 1;
                }
                iVar7 = iVar7 + 1;
              } while (iVar7 < (int)local_4b8);
            }
          }
        }
      }
    }
  }
  return;
}



/* ===== 180036f10 FUN_180036f10 ===== */

void FUN_180036f10(undefined8 *param_1,float *param_2)

{
  undefined8 uVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  undefined8 local_58;
  float fStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  float fStack_44;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined1 uStack_30;
  undefined7 uStack_2f;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  pfVar4 = (float *)*param_1;
  pfVar3 = (float *)param_1[1];
  while( true ) {
    if (pfVar4 == pfVar3) {
      local_58 = *(undefined8 *)param_2;
      uStack_4c = (undefined4)local_58;
      fStack_50 = param_2[2];
      local_18 = 0;
      uStack_10 = 0;
      uStack_48 = (undefined4)((ulonglong)local_58 >> 0x20);
      uStack_40 = 0;
      local_28 = 0;
      uStack_20 = 0;
      local_38 = 0x41200000;
      uStack_34 = 0x3f800000;
      uStack_30 = 1;
      if (pfVar3 == (float *)param_1[2]) {
        fStack_44 = fStack_50;
        FUN_180033dc0(uStack_4c,pfVar3,&local_58);
        return;
      }
      *(undefined8 *)pfVar3 = local_58;
      *(ulonglong *)(pfVar3 + 2) = CONCAT44(uStack_4c,fStack_50);
      *(ulonglong *)(pfVar3 + 4) = CONCAT44(fStack_50,uStack_48);
      pfVar3[6] = 0.0;
      pfVar3[7] = 0.0;
      pfVar3[8] = 10.0;
      pfVar3[9] = 1.0;
      *(ulonglong *)(pfVar3 + 10) = CONCAT71(uStack_2f,1);
      pfVar3[0xc] = 0.0;
      pfVar3[0xd] = 0.0;
      pfVar3[0xe] = 0.0;
      pfVar3[0xf] = 0.0;
      pfVar3[0x10] = 0.0;
      pfVar3[0x11] = 0.0;
      pfVar3[0x12] = 0.0;
      pfVar3[0x13] = 0.0;
      param_1[1] = param_1[1] + 0x50;
      return;
    }
    if ((((*(longlong *)(pfVar4 + 0xc) == 0) && (*pfVar4 == *param_2)) && (pfVar4[1] == param_2[1]))
       && (pfVar4[2] == param_2[2])) break;
    pfVar4 = pfVar4 + 0x14;
  }
  uVar1 = *(undefined8 *)param_2;
  fVar2 = param_2[2];
  *(undefined8 *)pfVar4 = uVar1;
  *(undefined8 *)(pfVar4 + 3) = uVar1;
  pfVar4[2] = fVar2;
  pfVar4[5] = fVar2;
  pfVar4[8] = 10.0;
  pfVar4[9] = 1.0;
  *(undefined1 *)(pfVar4 + 10) = 1;
  return;
}



/* ===== 180037040 FUN_180037040 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180037040(longlong *param_1,float param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  uint uVar17;
  longlong lVar18;
  float *pfVar19;
  ulonglong uVar20;
  longlong lVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  
  uVar17 = _DAT_1808ade90;
  fVar16 = DAT_1808acd18;
  fVar15 = DAT_1808ac34c;
  fVar14 = DAT_1808ac01c;
  fVar13 = DAT_1808abfbc;
  fVar12 = DAT_1808abf94;
  fVar28 = DAT_1808ac0c0;
  if ((param_2 <= DAT_1808ac0c0) && (fVar28 = param_2, param_2 <= DAT_1808abfa0)) {
    fVar28 = DAT_1808abfa0;
  }
  lVar18 = *param_1;
  if ((param_1[1] - lVar18 >> 4) * -0x3333333333333333 != 0) {
    fVar28 = fVar28 * _DAT_1808ac83c;
    uVar20 = 0;
    do {
      lVar21 = uVar20 * 0x50;
      pfVar19 = (float *)(lVar18 + lVar21);
      if ((char)param_1[3] == '\0') {
        if (*(longlong *)(pfVar19 + 0xc) != 0) {
          *(undefined8 *)pfVar19 = *(undefined8 *)(pfVar19 + 0xe);
          pfVar19[2] = pfVar19[0x10];
          *(undefined8 *)(pfVar19 + 3) = *(undefined8 *)(pfVar19 + 0x11);
          pfVar19[5] = pfVar19[0x13];
        }
        lVar18 = 0x18;
        if (fVar13 < (float)((uint)(pfVar19[6] - pfVar19[8]) & uVar17)) {
          lVar18 = 0x20;
        }
        fVar26 = *(float *)(lVar18 + (longlong)pfVar19);
        lVar18 = 0x1c;
        if (fVar13 < (float)((uint)(pfVar19[7] - pfVar19[9]) & uVar17)) {
          lVar18 = 0x24;
        }
        fVar27 = *(float *)(lVar18 + (longlong)pfVar19);
      }
      else {
        if (*(longlong *)(pfVar19 + 0xc) != 0) {
          fVar26 = pfVar19[0xe];
          fVar27 = *pfVar19;
          fVar25 = fVar26 - fVar27;
          if ((float)((uint)fVar25 & uVar17) <= fVar12) {
LAB_18003718f:
            fVar25 = fVar26;
          }
          else {
            fVar22 = fVar28 * (float)((uint)fVar25 & uVar17);
            fVar24 = fVar12;
            if (fVar12 <= fVar22) {
              fVar24 = fVar22;
            }
            if (fVar25 <= fVar12) {
              if (fVar16 <= fVar25) goto LAB_18003718f;
              fVar25 = fVar27 - fVar24;
              if (fVar27 - fVar24 <= fVar26) {
                fVar25 = fVar26;
              }
            }
            else {
              fVar25 = fVar24 + fVar27;
              if (fVar26 <= fVar24 + fVar27) {
                fVar25 = fVar26;
              }
            }
          }
          if ((float)((uint)(fVar25 - fVar26) & uVar17) <= fVar14) {
            fVar25 = fVar26;
          }
          fVar26 = pfVar19[0x11];
          fVar27 = pfVar19[3];
          *pfVar19 = fVar25;
          fVar25 = fVar26 - fVar27;
          if ((float)((uint)fVar25 & uVar17) <= fVar12) {
LAB_1800371f6:
            fVar25 = fVar26;
          }
          else {
            fVar22 = fVar28 * (float)((uint)fVar25 & uVar17);
            fVar24 = fVar12;
            if (fVar12 <= fVar22) {
              fVar24 = fVar22;
            }
            if (fVar25 <= fVar12) {
              if (fVar16 <= fVar25) goto LAB_1800371f6;
              fVar25 = fVar27 - fVar24;
              if (fVar27 - fVar24 <= fVar26) {
                fVar25 = fVar26;
              }
            }
            else {
              fVar25 = fVar24 + fVar27;
              if (fVar26 <= fVar24 + fVar27) {
                fVar25 = fVar26;
              }
            }
          }
          if ((float)((uint)(fVar25 - fVar26) & uVar17) <= fVar14) {
            fVar25 = fVar26;
          }
          fVar26 = pfVar19[0xf];
          fVar27 = pfVar19[1];
          pfVar19[3] = fVar25;
          fVar25 = fVar26 - fVar27;
          if ((float)((uint)fVar25 & uVar17) <= fVar12) {
LAB_18003725e:
            fVar25 = fVar26;
          }
          else {
            fVar22 = fVar28 * (float)((uint)fVar25 & uVar17);
            fVar24 = fVar12;
            if (fVar12 <= fVar22) {
              fVar24 = fVar22;
            }
            if (fVar25 <= fVar12) {
              if (fVar16 <= fVar25) goto LAB_18003725e;
              fVar25 = fVar27 - fVar24;
              if (fVar27 - fVar24 <= fVar26) {
                fVar25 = fVar26;
              }
            }
            else {
              fVar25 = fVar24 + fVar27;
              if (fVar26 <= fVar24 + fVar27) {
                fVar25 = fVar26;
              }
            }
          }
          if ((float)((uint)(fVar25 - fVar26) & uVar17) <= fVar14) {
            fVar25 = fVar26;
          }
          fVar26 = pfVar19[0x12];
          fVar27 = pfVar19[4];
          pfVar19[1] = fVar25;
          fVar25 = fVar26 - fVar27;
          if ((float)((uint)fVar25 & uVar17) <= fVar12) {
LAB_1800372c6:
            fVar25 = fVar26;
          }
          else {
            fVar22 = fVar28 * (float)((uint)fVar25 & uVar17);
            fVar24 = fVar12;
            if (fVar12 <= fVar22) {
              fVar24 = fVar22;
            }
            if (fVar25 <= fVar12) {
              if (fVar16 <= fVar25) goto LAB_1800372c6;
              fVar25 = fVar27 - fVar24;
              if (fVar27 - fVar24 <= fVar26) {
                fVar25 = fVar26;
              }
            }
            else {
              fVar25 = fVar24 + fVar27;
              if (fVar26 <= fVar24 + fVar27) {
                fVar25 = fVar26;
              }
            }
          }
          if ((float)((uint)(fVar25 - fVar26) & uVar17) <= fVar14) {
            fVar25 = fVar26;
          }
          fVar26 = pfVar19[0x10];
          fVar27 = pfVar19[2];
          pfVar19[4] = fVar25;
          fVar25 = fVar26 - fVar27;
          if ((float)((uint)fVar25 & uVar17) <= fVar12) {
LAB_18003732e:
            fVar25 = fVar26;
          }
          else {
            fVar22 = fVar28 * (float)((uint)fVar25 & uVar17);
            fVar24 = fVar12;
            if (fVar12 <= fVar22) {
              fVar24 = fVar22;
            }
            if (fVar25 <= fVar12) {
              if (fVar16 <= fVar25) goto LAB_18003732e;
              fVar25 = fVar27 - fVar24;
              if (fVar27 - fVar24 <= fVar26) {
                fVar25 = fVar26;
              }
            }
            else {
              fVar25 = fVar24 + fVar27;
              if (fVar26 <= fVar24 + fVar27) {
                fVar25 = fVar26;
              }
            }
          }
          if ((float)((uint)(fVar25 - fVar26) & uVar17) <= fVar14) {
            fVar25 = fVar26;
          }
          fVar26 = pfVar19[0x13];
          fVar27 = pfVar19[5];
          pfVar19[2] = fVar25;
          fVar25 = fVar26 - fVar27;
          if ((float)((uint)fVar25 & uVar17) <= fVar12) {
LAB_180037396:
            fVar25 = fVar26;
          }
          else {
            fVar22 = fVar28 * (float)((uint)fVar25 & uVar17);
            fVar24 = fVar12;
            if (fVar12 <= fVar22) {
              fVar24 = fVar22;
            }
            if (fVar25 <= fVar12) {
              if (fVar16 <= fVar25) goto LAB_180037396;
              fVar25 = fVar27 - fVar24;
              if (fVar27 - fVar24 <= fVar26) {
                fVar25 = fVar26;
              }
            }
            else {
              fVar25 = fVar24 + fVar27;
              if (fVar26 <= fVar24 + fVar27) {
                fVar25 = fVar26;
              }
            }
          }
          if ((float)((uint)(fVar25 - fVar26) & uVar17) <= fVar14) {
            fVar25 = fVar26;
          }
          pfVar19[5] = fVar25;
        }
        fVar27 = pfVar19[8];
        fVar25 = pfVar19[6];
        fVar26 = fVar27 - fVar25;
        if ((float)((uint)fVar26 & uVar17) <= fVar12) {
LAB_1800373fe:
          fVar26 = fVar27;
        }
        else {
          fVar22 = fVar28 * (float)((uint)fVar26 & uVar17);
          fVar24 = fVar12;
          if (fVar12 <= fVar22) {
            fVar24 = fVar22;
          }
          if (fVar26 <= fVar12) {
            if (fVar16 <= fVar26) goto LAB_1800373fe;
            fVar26 = fVar25 - fVar24;
            if (fVar25 - fVar24 <= fVar27) {
              fVar26 = fVar27;
            }
          }
          else {
            fVar26 = fVar24 + fVar25;
            if (fVar27 <= fVar24 + fVar25) {
              fVar26 = fVar27;
            }
          }
        }
        if ((float)((uint)(fVar26 - fVar27) & uVar17) <= fVar14) {
          fVar26 = fVar27;
        }
        fVar25 = pfVar19[9];
        fVar24 = pfVar19[7];
        fVar27 = fVar25 - fVar24;
        if ((float)((uint)fVar27 & uVar17) <= fVar12) {
LAB_180037461:
          fVar27 = fVar25;
        }
        else {
          fVar23 = fVar28 * (float)((uint)fVar27 & uVar17);
          fVar22 = fVar12;
          if (fVar12 <= fVar23) {
            fVar22 = fVar23;
          }
          if (fVar27 <= fVar12) {
            if (fVar16 <= fVar27) goto LAB_180037461;
            fVar27 = fVar24 - fVar22;
            if (fVar24 - fVar22 <= fVar25) {
              fVar27 = fVar25;
            }
          }
          else {
            fVar27 = fVar22 + fVar24;
            if (fVar25 <= fVar22 + fVar24) {
              fVar27 = fVar25;
            }
          }
        }
        if ((float)((uint)(fVar27 - fVar25) & uVar17) <= fVar14) {
          fVar27 = fVar25;
        }
      }
      if (fVar26 <= 0.0) {
        fVar26 = 0.0;
      }
      pfVar19[6] = fVar26;
      if (fVar27 <= fVar15) {
        if (fVar27 <= 0.0) {
          fVar27 = 0.0;
        }
        pfVar19[7] = fVar27;
        if (((fVar13 < fVar26) || (*(char *)(pfVar19 + 10) != '\0')) || (fVar13 < fVar27))
        goto LAB_1800374f2;
        lVar18 = param_1[1];
        lVar2 = *param_1;
        if (uVar20 + 1 != (lVar18 - lVar2 >> 4) * -0x3333333333333333) {
          uVar3 = *(undefined8 *)(lVar18 + -0x48);
          uVar4 = *(undefined8 *)(lVar18 + -0x40);
          uVar5 = *(undefined8 *)(lVar18 + -0x38);
          uVar6 = *(undefined8 *)(lVar18 + -0x30);
          uVar7 = *(undefined8 *)(lVar18 + -0x28);
          uVar8 = *(undefined8 *)(lVar18 + -0x20);
          uVar9 = *(undefined8 *)(lVar18 + -0x18);
          uVar10 = *(undefined8 *)(lVar18 + -0x10);
          uVar11 = *(undefined8 *)(lVar18 + -8);
          *(undefined8 *)(lVar21 + lVar2) = *(undefined8 *)(lVar18 + -0x50);
          ((undefined8 *)(lVar21 + lVar2))[1] = uVar3;
          puVar1 = (undefined8 *)(lVar21 + 0x10 + lVar2);
          *puVar1 = uVar4;
          puVar1[1] = uVar5;
          puVar1 = (undefined8 *)(lVar21 + 0x20 + lVar2);
          *puVar1 = uVar6;
          puVar1[1] = uVar7;
          puVar1 = (undefined8 *)(lVar21 + 0x30 + lVar2);
          *puVar1 = uVar8;
          puVar1[1] = uVar9;
          puVar1 = (undefined8 *)(lVar21 + 0x40 + lVar2);
          *puVar1 = uVar10;
          puVar1[1] = uVar11;
        }
        param_1[1] = param_1[1] + -0x50;
      }
      else {
        pfVar19[7] = 1.0;
LAB_1800374f2:
        uVar20 = uVar20 + 1;
      }
      lVar18 = *param_1;
    } while (uVar20 < (ulonglong)((param_1[1] - lVar18 >> 4) * -0x3333333333333333));
  }
  return;
}



/* ===== 1800375d0 FUN_1800375d0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800375d0(int *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                  float param_5,int param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  short sVar7;
  uint uVar8;
  float fVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  ulonglong uVar17;
  float *pfVar18;
  float *pfVar19;
  float *pfVar20;
  ulonglong uVar21;
  longlong lVar22;
  int iVar23;
  short *psVar24;
  uint uVar25;
  undefined8 *puVar26;
  longlong lVar27;
  uint uVar28;
  uint uVar29;
  longlong lVar30;
  ulonglong uVar31;
  bool bVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined1 auVar36 [16];
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
  undefined1 auStack_1c8 [32];
  float local_1a8;
  float *local_1a0;
  float local_198;
  float local_194;
  float local_190;
  float local_18c;
  float local_188;
  float local_180;
  float local_17c;
  undefined1 local_178;
  float local_174;
  uint local_170;
  float local_16c;
  float local_168;
  float local_164;
  float local_160;
  float local_15c;
  float local_158;
  float local_154;
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  float local_140;
  float local_13c;
  float local_138;
  float local_134;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  char local_108;
  undefined8 *local_100;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  short local_e8 [6];
  short local_dc [2];
  ulonglong local_d8;
  
  uVar29 = _DAT_1808ade90;
  fVar40 = DAT_1808ac918;
  fVar46 = DAT_1808ac34c;
  fVar43 = DAT_1808ac0c0;
  fVar45 = DAT_1808ac000;
  if (param_1 == (int *)0x0) {
    return;
  }
  local_d8 = DAT_180919500 ^ (ulonglong)auStack_1c8;
  local_100 = param_4;
  if (DAT_180cc4b60 == '\0') {
    return;
  }
  if (DAT_180cc4b61 == '\0') {
    return;
  }
  if (param_5 <= 0.0) {
    return;
  }
  if (*(float *)((longlong)param_4 + 0xc) <= 0.0) {
    return;
  }
  pfVar20 = (float *)param_3[1];
  pfVar18 = (float *)*param_3;
  if (pfVar18 == pfVar20) {
    return;
  }
  if ((0x100 < (ulonglong)(((longlong)pfVar20 - (longlong)pfVar18 >> 4) * -0x3333333333333333)) &&
     (param_6 == 1)) {
    return;
  }
  uVar21 = 0;
  uVar25 = 0;
  do {
    if (0xff < uVar25) break;
    if (((*(char *)(pfVar18 + 10) == '\x01') && (fVar43 < pfVar18[6])) && (fVar45 < pfVar18[7])) {
      bVar32 = false;
      if ((param_6 != 1) &&
         (((*pfVar18 != pfVar18[3] || (pfVar18[1] != pfVar18[4])) || (pfVar18[2] != pfVar18[5])))) {
        bVar32 = (float)((uint)(pfVar18[5] - pfVar18[2]) & uVar29) <= fVar40;
      }
      fVar33 = pfVar18[6] + *(float *)((longlong)param_4 + 0x24);
      fVar42 = pfVar18[2];
      fVar38 = pfVar18[1];
      uVar31 = (ulonglong)uVar25;
      uVar25 = uVar25 + 1;
      if (fVar33 <= fVar43) {
        fVar33 = fVar43;
      }
      fVar44 = *pfVar18;
      *(float *)(&DAT_180cc54cc + uVar31 * 0x30) = fVar33;
      *(float *)(&DAT_180cc54c0 + uVar31 * 0x30) = fVar44;
      *(float *)(&DAT_180cc54c4 + uVar31 * 0x30) = fVar38;
      pfVar19 = pfVar18 + 3;
      if (!bVar32) {
        pfVar19 = pfVar18;
      }
      *(float *)(&DAT_180cc54c8 + uVar31 * 0x30) = fVar42;
      fVar42 = pfVar18[8];
      if (pfVar18[8] <= fVar43) {
        fVar42 = fVar43;
      }
      fVar38 = pfVar19[2];
      fVar33 = *pfVar19;
      fVar44 = pfVar18[6] / fVar42;
      if (fVar46 <= pfVar18[6] / fVar42) {
        fVar44 = fVar46;
      }
      *(float *)(&DAT_180cc54d4 + uVar31 * 0x30) = pfVar19[1];
      *(float *)(&DAT_180cc54d8 + uVar31 * 0x30) = fVar38;
      *(float *)(&DAT_180cc54d0 + uVar31 * 0x30) = fVar33;
      *(float *)(&DAT_180cc54dc + uVar31 * 0x30) = fVar44;
      fVar42 = fVar46;
      if (!bVar32) {
        fVar42 = 0.0;
      }
      fVar38 = pfVar18[7];
      *(float *)(&DAT_180cc54e4 + uVar31 * 0x30) = fVar42;
      *(float *)(&DAT_180cc54e0 + uVar31 * 0x30) = fVar38;
      *(undefined8 *)(&DAT_180cc54e8 + uVar31 * 0x30) = 0;
    }
    pfVar18 = pfVar18 + 0x14;
  } while (pfVar18 != pfVar20);
  pfVar20 = (float *)*param_3;
  pfVar18 = (float *)param_3[1];
  iVar23 = (int)DAT_1808ad670;
  iVar16 = DAT_1808ad670._4_4_;
  iVar14 = _UNK_1808ad678;
  iVar15 = _UNK_1808ad67c;
  while( true ) {
    DAT_1808ad670._0_4_ = iVar23;
    DAT_1808ad670._4_4_ = iVar16;
    _UNK_1808ad678 = iVar14;
    _UNK_1808ad67c = iVar15;
    if ((pfVar20 == pfVar18) || (0xff < uVar25)) break;
    if ((*(char *)(pfVar20 + 10) == '\0') && ((fVar43 < pfVar20[6] && (fVar45 < pfVar20[7])))) {
      bVar32 = false;
      if ((param_6 != 1) &&
         (((*pfVar20 != pfVar20[3] || (pfVar20[1] != pfVar20[4])) || (pfVar20[2] != pfVar20[5])))) {
        bVar32 = (float)((uint)(pfVar20[5] - pfVar20[2]) & uVar29) <= fVar40;
      }
      fVar33 = pfVar20[6] + *(float *)((longlong)param_4 + 0x24);
      fVar42 = pfVar20[2];
      fVar38 = pfVar20[1];
      uVar31 = (ulonglong)uVar25;
      uVar25 = uVar25 + 1;
      if (fVar33 <= fVar43) {
        fVar33 = fVar43;
      }
      *(float *)(&DAT_180cc54c0 + uVar31 * 0x30) = *pfVar20;
      *(float *)(&DAT_180cc54c4 + uVar31 * 0x30) = fVar38;
      pfVar19 = pfVar20 + 3;
      if (!bVar32) {
        pfVar19 = pfVar20;
      }
      *(float *)(&DAT_180cc54c8 + uVar31 * 0x30) = fVar42;
      *(float *)(&DAT_180cc54cc + uVar31 * 0x30) = fVar33;
      fVar42 = pfVar19[2];
      fVar38 = pfVar19[1];
      *(float *)(&DAT_180cc54d0 + uVar31 * 0x30) = *pfVar19;
      *(float *)(&DAT_180cc54d4 + uVar31 * 0x30) = fVar38;
      *(float *)(&DAT_180cc54d8 + uVar31 * 0x30) = fVar42;
      *(undefined4 *)(&DAT_180cc54dc + uVar31 * 0x30) = 0x3f800000;
      if (!bVar32) {
        fVar42 = 0.0;
      }
      else {
        fVar42 = fVar46;
      }
      *(float *)(&DAT_180cc54e0 + uVar31 * 0x30) = pfVar20[7];
      *(float *)(&DAT_180cc54e4 + uVar31 * 0x30) = fVar42;
      *(undefined8 *)(&DAT_180cc54e8 + uVar31 * 0x30) = 0;
    }
    pfVar20 = pfVar20 + 0x14;
    iVar23 = (int)DAT_1808ad670;
    iVar16 = DAT_1808ad670._4_4_;
    iVar14 = _UNK_1808ad678;
    iVar15 = _UNK_1808ad67c;
  }
  if (uVar25 == 0) {
    return;
  }
  uVar29 = 0;
  if (uVar25 < 0x10) goto LAB_180037aa0;
  do {
    uVar28 = uVar29 + 4;
    uVar31 = (ulonglong)uVar29;
    *(uint *)(&DAT_180cc84c0 + uVar31 * 4) = uVar29 + iVar23;
    (&DAT_180cc84c4)[uVar31] = uVar29 + iVar16;
    (&DAT_180cc84c8)[uVar31] = uVar29 + iVar14;
    (&DAT_180cc84cc)[uVar31] = uVar29 + iVar15;
    *(ulonglong *)(&DAT_180cc84c0 + (ulonglong)uVar28 * 4) = CONCAT44(uVar29 + 5,uVar28);
    *(ulonglong *)(&DAT_180cc84c8 + uVar28) = CONCAT44(uVar29 + 7,uVar29 + 6);
    uVar28 = uVar29 + 8;
    iVar1 = uVar29 + 0xf;
    iVar2 = uVar29 + 0xd;
    iVar3 = uVar29 + 0xe;
    *(ulonglong *)(&DAT_180cc84c0 + (ulonglong)uVar28 * 4) = CONCAT44(uVar29 + 9,uVar28);
    *(ulonglong *)(&DAT_180cc84c8 + uVar28) = CONCAT44(uVar29 + 0xb,uVar29 + 10);
    uVar28 = uVar29 + 0xc;
    uVar29 = uVar29 + 0x10;
    auVar36._4_4_ = iVar2;
    auVar36._0_4_ = uVar28;
    auVar36._12_4_ = iVar1;
    auVar36._8_4_ = iVar3;
    *(undefined1 (*) [16])(&DAT_180cc84c0 + (ulonglong)uVar28 * 4) = auVar36;
  } while (uVar29 < (uVar25 & 0xfffffff0));
  for (; uVar29 < uVar25; uVar29 = uVar29 + 1) {
LAB_180037aa0:
    *(uint *)(&DAT_180cc84c0 + (ulonglong)uVar29 * 4) = uVar29;
  }
  if (param_6 != 1) {
    FUN_180039bf0(&DAT_180cc84c0,&DAT_180cc84c0 + (ulonglong)uVar25 * 4,(ulonglong)uVar25,local_178)
    ;
  }
  local_168 = DAT_1808acab0;
  uVar29 = 0;
  if (uVar25 != 0) {
    uVar28 = 0;
    if (param_6 == 1) {
      uVar28 = 0;
      if (3 < uVar25) {
        do {
          uVar8 = *(uint *)(&DAT_180cc84c0 + (ulonglong)uVar28 * 4);
          fVar45 = *(float *)(&DAT_180cc54c8 + (ulonglong)uVar8 * 0x30);
          if (uVar29 == 0) {
            uVar29 = 1;
            _DAT_180cc88f8 = 0;
            _DAT_180cc8900 = 0;
            DAT_180cc8908 = 0;
            DAT_180cc88f0 = fVar45;
            DAT_180cc88f4 = fVar45;
          }
          else {
            uVar31 = (ulonglong)(uVar29 - 1);
            fVar43 = fVar45;
            if ((&DAT_180cc88f0)[uVar31 * 7] <= fVar45) {
              fVar43 = (&DAT_180cc88f0)[uVar31 * 7];
            }
            (&DAT_180cc88f0)[uVar31 * 7] = fVar43;
            if (fVar45 <= (&DAT_180cc88f4)[uVar31 * 7]) {
              fVar45 = (&DAT_180cc88f4)[uVar31 * 7];
            }
            (&DAT_180cc88f4)[uVar31 * 7] = fVar45;
          }
          *(uint *)(&DAT_180cc4c90 + (ulonglong)uVar8 * 4) = uVar29 - 1;
          fVar45 = *(float *)(&DAT_180cc54c8 +
                             (ulonglong)*(uint *)(&DAT_180cc84c0 + (ulonglong)(uVar28 + 1) * 4) *
                             0x30);
          uVar31 = (ulonglong)(uVar29 - 1);
          *(uint *)(&DAT_180cc4c90 +
                   (ulonglong)*(uint *)(&DAT_180cc84c0 + (ulonglong)(uVar28 + 1) * 4) * 4) =
               uVar29 - 1;
          uVar8 = *(uint *)(&DAT_180cc84c0 + (ulonglong)(uVar28 + 2) * 4);
          fVar43 = fVar45;
          if ((&DAT_180cc88f0)[uVar31 * 7] <= fVar45) {
            fVar43 = (&DAT_180cc88f0)[uVar31 * 7];
          }
          (&DAT_180cc88f0)[uVar31 * 7] = fVar43;
          if (fVar45 <= (&DAT_180cc88f4)[uVar31 * 7]) {
            fVar45 = (&DAT_180cc88f4)[uVar31 * 7];
          }
          (&DAT_180cc88f4)[uVar31 * 7] = fVar45;
          fVar45 = *(float *)(&DAT_180cc54c8 + (ulonglong)uVar8 * 0x30);
          uVar31 = (ulonglong)(uVar29 - 1);
          uVar4 = uVar28 + 3;
          uVar28 = uVar28 + 4;
          *(uint *)(&DAT_180cc4c90 + (ulonglong)uVar8 * 4) = uVar29 - 1;
          uVar8 = *(uint *)(&DAT_180cc84c0 + (ulonglong)uVar4 * 4);
          fVar43 = fVar45;
          if ((&DAT_180cc88f0)[uVar31 * 7] <= fVar45) {
            fVar43 = (&DAT_180cc88f0)[uVar31 * 7];
          }
          (&DAT_180cc88f0)[uVar31 * 7] = fVar43;
          if (fVar45 <= (&DAT_180cc88f4)[uVar31 * 7]) {
            fVar45 = (&DAT_180cc88f4)[uVar31 * 7];
          }
          (&DAT_180cc88f4)[uVar31 * 7] = fVar45;
          fVar43 = *(float *)(&DAT_180cc54c8 + (ulonglong)uVar8 * 0x30);
          uVar31 = (ulonglong)(uVar29 - 1);
          *(uint *)(&DAT_180cc4c90 + (ulonglong)uVar8 * 4) = uVar29 - 1;
          fVar45 = fVar43;
          if ((&DAT_180cc88f0)[uVar31 * 7] <= fVar43) {
            fVar45 = (&DAT_180cc88f0)[uVar31 * 7];
          }
          (&DAT_180cc88f0)[uVar31 * 7] = fVar45;
          if (fVar43 <= (&DAT_180cc88f4)[uVar31 * 7]) {
            fVar43 = (&DAT_180cc88f4)[uVar31 * 7];
          }
          (&DAT_180cc88f4)[uVar31 * 7] = fVar43;
        } while (uVar28 < uVar25 - 3);
        if (uVar25 <= uVar28) goto LAB_180037dfb;
      }
      do {
        uVar8 = *(uint *)(&DAT_180cc84c0 + (ulonglong)uVar28 * 4);
        fVar45 = *(float *)(&DAT_180cc54c8 + (ulonglong)uVar8 * 0x30);
        if (uVar29 == 0) {
          uVar29 = 1;
          _DAT_180cc88f8 = 0;
          _DAT_180cc8900 = 0;
          DAT_180cc8908 = 0;
          DAT_180cc88f0 = fVar45;
          DAT_180cc88f4 = fVar45;
        }
        else {
          uVar31 = (ulonglong)(uVar29 - 1);
          fVar43 = fVar45;
          if ((&DAT_180cc88f0)[uVar31 * 7] <= fVar45) {
            fVar43 = (&DAT_180cc88f0)[uVar31 * 7];
          }
          (&DAT_180cc88f0)[uVar31 * 7] = fVar43;
          if (fVar45 <= (&DAT_180cc88f4)[uVar31 * 7]) {
            fVar45 = (&DAT_180cc88f4)[uVar31 * 7];
          }
          (&DAT_180cc88f4)[uVar31 * 7] = fVar45;
        }
        uVar28 = uVar28 + 1;
        *(uint *)(&DAT_180cc4c90 + (ulonglong)uVar8 * 4) = uVar29 - 1;
      } while (uVar28 < uVar25);
    }
    else {
      do {
        uVar31 = (ulonglong)(uVar29 - 1);
        uVar8 = *(uint *)(&DAT_180cc84c0 + (ulonglong)uVar28 * 4);
        bVar32 = uVar29 == 0;
        fVar45 = *(float *)(&DAT_180cc54c8 + (ulonglong)uVar8 * 0x30);
        if (uVar29 != 0) {
          fVar43 = (&DAT_180cc88f4)[uVar31 * 7];
          if ((&DAT_180cc88f4)[uVar31 * 7] <= fVar45) {
            fVar43 = fVar45;
          }
          fVar40 = (&DAT_180cc88f0)[uVar31 * 7];
          if (fVar45 <= (&DAT_180cc88f0)[uVar31 * 7]) {
            fVar40 = fVar45;
          }
          bVar32 = local_168 < fVar43 - fVar40;
        }
        if (bVar32) {
          uVar31 = (ulonglong)uVar29;
          lVar22 = uVar31 * 0x1c;
          uVar29 = uVar29 + 1;
          *(undefined8 *)(&DAT_180cc88f8 + uVar31 * 7) = 0;
          *(undefined8 *)(&DAT_180cc8900 + uVar31 * 7) = 0;
          (&DAT_180cc8908)[uVar31 * 7] = 0;
          (&DAT_180cc88f0)[uVar31 * 7] = fVar45;
        }
        else {
          lVar22 = uVar31 * 0x1c;
          fVar43 = fVar45;
          if ((&DAT_180cc88f0)[uVar31 * 7] <= fVar45) {
            fVar43 = (&DAT_180cc88f0)[uVar31 * 7];
          }
          (&DAT_180cc88f0)[uVar31 * 7] = fVar43;
          if (fVar45 <= (&DAT_180cc88f4)[uVar31 * 7]) {
            fVar45 = (&DAT_180cc88f4)[uVar31 * 7];
          }
        }
        uVar28 = uVar28 + 1;
        *(float *)((longlong)&DAT_180cc88f4 + lVar22) = fVar45;
        *(uint *)(&DAT_180cc4c90 + (ulonglong)uVar8 * 4) = uVar29 - 1;
      } while (uVar28 < uVar25);
    }
  }
LAB_180037dfb:
  uVar28 = 0;
  if (3 < uVar25) {
    do {
      local_198 = 0.0;
      uVar31 = (ulonglong)*(uint *)(&DAT_180cc4c90 + (ulonglong)uVar28 * 4);
      lVar22 = (ulonglong)uVar28 * 0x30;
      fVar45 = *(float *)(&DAT_180cc54e0 + lVar22);
      pfVar20 = &local_198;
      if (0.0 < *(float *)(&DAT_180cc54cc + lVar22)) {
        pfVar20 = (float *)(&DAT_180cc54cc + lVar22);
      }
      if (0.0 <= fVar45) {
        fVar43 = fVar46;
        if (fVar45 <= fVar46) {
          fVar43 = fVar45;
        }
      }
      else {
        fVar43 = 0.0;
      }
      fVar45 = *pfVar20;
      uVar17 = (ulonglong)*(uint *)(&DAT_180cc4c90 + (ulonglong)(uVar28 + 1) * 4);
      (&DAT_180cc88f8)[uVar31 * 7] =
           fVar43 * fVar45 * *(float *)(&DAT_180cc54c8 + lVar22) +
           (float)(&DAT_180cc88f8)[uVar31 * 7];
      (&DAT_180cc88fc)[uVar31 * 7] = fVar43 * fVar45 + (float)(&DAT_180cc88fc)[uVar31 * 7];
      (&DAT_180cc8900)[uVar31 * 7] = (&DAT_180cc8900)[uVar31 * 7] + 1;
      lVar22 = (ulonglong)(uVar28 + 1) * 0x30;
      fVar45 = *(float *)(&DAT_180cc54e0 + lVar22);
      pfVar20 = &local_198;
      if (0.0 < *(float *)(&DAT_180cc54cc + lVar22)) {
        pfVar20 = (float *)(&DAT_180cc54cc + lVar22);
      }
      if (0.0 <= fVar45) {
        fVar43 = fVar46;
        if (fVar45 <= fVar46) {
          fVar43 = fVar45;
        }
      }
      else {
        fVar43 = 0.0;
      }
      fVar45 = *pfVar20;
      uVar31 = (ulonglong)*(uint *)(&DAT_180cc4c90 + (ulonglong)(uVar28 + 2) * 4);
      lVar30 = (ulonglong)(uVar28 + 2) * 0x30;
      (&DAT_180cc88f8)[uVar17 * 7] =
           fVar43 * fVar45 * *(float *)(&DAT_180cc54c8 + lVar22) +
           (float)(&DAT_180cc88f8)[uVar17 * 7];
      fVar40 = *(float *)(&DAT_180cc54cc + lVar30);
      (&DAT_180cc88fc)[uVar17 * 7] = fVar43 * fVar45 + (float)(&DAT_180cc88fc)[uVar17 * 7];
      (&DAT_180cc8900)[uVar17 * 7] = (&DAT_180cc8900)[uVar17 * 7] + 1;
      fVar45 = *(float *)(&DAT_180cc54e0 + lVar30);
      pfVar20 = &local_198;
      if (0.0 < fVar40) {
        pfVar20 = (float *)(&DAT_180cc54cc + lVar30);
      }
      if (0.0 <= fVar45) {
        fVar43 = fVar46;
        if (fVar45 <= fVar46) {
          fVar43 = fVar45;
        }
      }
      else {
        fVar43 = 0.0;
      }
      fVar45 = *pfVar20;
      uVar17 = (ulonglong)*(uint *)(&DAT_180cc4c90 + (ulonglong)(uVar28 + 3) * 4);
      lVar22 = (ulonglong)(uVar28 + 3) * 0x30;
      (&DAT_180cc88f8)[uVar31 * 7] =
           fVar43 * fVar45 * *(float *)(&DAT_180cc54c8 + lVar30) +
           (float)(&DAT_180cc88f8)[uVar31 * 7];
      fVar40 = *(float *)(&DAT_180cc54cc + lVar22);
      (&DAT_180cc88fc)[uVar31 * 7] = fVar43 * fVar45 + (float)(&DAT_180cc88fc)[uVar31 * 7];
      (&DAT_180cc8900)[uVar31 * 7] = (&DAT_180cc8900)[uVar31 * 7] + 1;
      fVar45 = *(float *)(&DAT_180cc54e0 + lVar22);
      pfVar20 = &local_198;
      if (0.0 < fVar40) {
        pfVar20 = (float *)(&DAT_180cc54cc + lVar22);
      }
      if (0.0 <= fVar45) {
        fVar43 = fVar46;
        if (fVar45 <= fVar46) {
          fVar43 = fVar45;
        }
      }
      else {
        fVar43 = 0.0;
      }
      fVar45 = *pfVar20;
      uVar28 = uVar28 + 4;
      (&DAT_180cc88f8)[uVar17 * 7] =
           fVar43 * fVar45 * *(float *)(&DAT_180cc54c8 + lVar22) +
           (float)(&DAT_180cc88f8)[uVar17 * 7];
      (&DAT_180cc88fc)[uVar17 * 7] = fVar43 * fVar45 + (float)(&DAT_180cc88fc)[uVar17 * 7];
      (&DAT_180cc8900)[uVar17 * 7] = (&DAT_180cc8900)[uVar17 * 7] + 1;
    } while (uVar28 < uVar25 - 3);
  }
  if (uVar28 < uVar25) {
    uVar31 = (ulonglong)uVar28;
    do {
      uVar17 = (ulonglong)*(uint *)(&DAT_180cc4c90 + uVar31 * 4);
      lVar22 = uVar31 * 0x30;
      local_198 = 0.0;
      fVar45 = *(float *)(&DAT_180cc54e0 + lVar22);
      pfVar20 = &local_198;
      if (0.0 < *(float *)(&DAT_180cc54cc + lVar22)) {
        pfVar20 = (float *)(&DAT_180cc54cc + lVar22);
      }
      if (0.0 <= fVar45) {
        fVar43 = fVar46;
        if (fVar45 <= fVar46) {
          fVar43 = fVar45;
        }
      }
      else {
        fVar43 = 0.0;
      }
      fVar45 = *pfVar20;
      uVar28 = uVar28 + 1;
      (&DAT_180cc8900)[uVar17 * 7] = (&DAT_180cc8900)[uVar17 * 7] + 1;
      uVar31 = uVar31 + 1;
      fVar40 = *(float *)(&DAT_180cc54c8 + lVar22);
      (&DAT_180cc88fc)[uVar17 * 7] = fVar43 * fVar45 + (float)(&DAT_180cc88fc)[uVar17 * 7];
      (&DAT_180cc88f8)[uVar17 * 7] = fVar43 * fVar45 * fVar40 + (float)(&DAT_180cc88f8)[uVar17 * 7];
    } while (uVar28 < uVar25);
  }
  iVar23 = 0;
  if (uVar29 != 0) {
    lVar22 = 0;
    uVar28 = uVar29;
    do {
      (&DAT_180cc8904)[lVar22 * 7] = iVar23;
      iVar23 = iVar23 + (&DAT_180cc8900)[lVar22 * 7];
      (&DAT_180cc8908)[lVar22 * 7] = 0;
      uVar28 = uVar28 - 1;
      lVar22 = lVar22 + 1;
    } while (uVar28 != 0);
  }
  uVar28 = 0;
  if (uVar25 != 0) {
    do {
      uVar31 = (ulonglong)*(uint *)(&DAT_180cc4c90 + (ulonglong)uVar28 * 4);
      iVar23 = (&DAT_180cc8908)[uVar31 * 7];
      (&DAT_180cc8908)[uVar31 * 7] = iVar23 + 1;
      *(uint *)(&DAT_180cc50a0 + (ulonglong)(uint)((&DAT_180cc8904)[uVar31 * 7] + iVar23) * 4) =
           uVar28;
      uVar28 = uVar28 + 1;
    } while (uVar28 < uVar25);
  }
  fVar45 = *(float *)((longlong)local_100 + 0x1c);
  if (0.0 <= fVar45) {
    local_16c = fVar46;
    if (fVar45 <= fVar46) {
      local_16c = fVar45;
    }
  }
  else {
    local_16c = 0.0;
  }
  fVar45 = *(float *)(local_100 + 4);
  if (fVar45 <= local_168) {
    local_168 = fVar45;
    if (fVar45 <= 0.0) {
      local_168 = 0.0;
    }
  }
  if (local_16c <= 0.0) {
    local_164 = fVar46;
  }
  else {
    local_164 = local_168;
    if (local_168 <= fVar46) {
      local_164 = fVar46;
    }
  }
  fVar45 = local_164 + DAT_1808ac540 + local_164 + DAT_1808ac540;
  if (DAT_180cc4bec <= 0.0) {
    local_188 = fVar46;
  }
  else {
    local_188 = fVar45 / DAT_180cc4bec + fVar46;
  }
  if (0.0 < DAT_180cc4bf0) {
    fVar46 = fVar45 / DAT_180cc4bf0 + fVar46;
  }
  if (param_6 == 1) {
    local_174 = 0.0;
  }
  else {
    local_174 = DAT_1808ac838;
  }
  fVar43 = 0.0;
  fVar45 = 0.0;
  uVar17 = 0;
  local_120 = DAT_180cc4be4;
  local_11c = DAT_180cc4be8;
  uVar31 = 0;
  local_194 = DAT_180cc4be4;
  local_180 = DAT_180cc4be4;
  local_17c = DAT_180cc4be8;
  local_190 = 0.0;
  local_18c = 0.0;
  local_170 = 0;
  local_198 = 0.0;
  if (uVar29 != 0) {
    fVar38 = DAT_180cc4be4;
    fVar33 = DAT_180cc4be8;
    fVar44 = DAT_180cc4be8;
    fVar40 = DAT_1808acd08;
    fVar34 = DAT_1808ac1f4;
    fVar42 = DAT_1808aceb0;
    fVar35 = DAT_180cc4be4;
    do {
      if ((&DAT_180cc8900)[uVar21 * 7] != 0) {
        fVar37 = (float)(&DAT_180cc88fc)[uVar21 * 7];
        if (0.0 < fVar37) {
          fVar45 = (float)(&DAT_180cc88f8)[uVar21 * 7];
          uVar25 = 0;
          local_158 = fVar40;
          local_154 = fVar40;
          local_148 = fVar42;
          local_144 = fVar42;
          local_188 = (float)uVar31;
          local_108 = '\0';
          local_118 = _DAT_1808adf10;
          fStack_114 = _UNK_1808adf14;
          fStack_110 = _UNK_1808adf18;
          fStack_10c = _UNK_1808adf1c;
          fVar43 = fVar40;
          fVar44 = fVar42;
          if ((&DAT_180cc8900)[uVar21 * 7] != 0) {
            do {
              uVar17 = (ulonglong)
                       *(uint *)(&DAT_180cc50a0 +
                                (ulonglong)((&DAT_180cc8904)[uVar21 * 7] + uVar25) * 4);
              local_198 = (float)((int)uVar31 + 1);
              fVar38 = *(float *)(&DAT_180cc54cc + uVar17 * 0x30);
              uVar10 = *(undefined8 *)(&DAT_180cc54c8 + uVar17 * 0x30);
              if (fVar38 <= 0.0) {
                fVar38 = 0.0;
              }
              local_150 = *(float *)(&DAT_180cc54c0 + uVar17 * 0x30);
              local_14c = *(float *)(&DAT_180cc54c4 + uVar17 * 0x30);
              uVar11 = *(undefined8 *)(&DAT_180cc54d0 + uVar17 * 0x30);
              uVar12 = *(undefined8 *)(&DAT_180cc54d8 + uVar17 * 0x30);
              *(undefined8 *)(&DAT_180cca5c0 + uVar31 * 0x30) =
                   *(undefined8 *)(&DAT_180cc54c0 + uVar17 * 0x30);
              *(undefined8 *)(uVar31 * 0x30 + 0x180cca5c8) = uVar10;
              uVar10 = *(undefined8 *)(&DAT_180cc54e0 + uVar17 * 0x30);
              uVar13 = *(undefined8 *)(&DAT_180cc54e8 + uVar17 * 0x30);
              *(undefined8 *)(&DAT_180cca5d0 + uVar31 * 0x30) = uVar11;
              *(undefined8 *)(uVar31 * 0x30 + 0x180cca5d8) = uVar12;
              *(undefined8 *)(&DAT_180cca5e0 + uVar31 * 0x30) = uVar10;
              *(undefined8 *)(uVar31 * 0x30 + 0x180cca5e8) = uVar13;
              fVar33 = fVar38 + local_174;
              local_160 = local_150 - fVar33;
              local_15c = local_14c - fVar33;
              local_150 = local_150 + fVar33;
              local_14c = local_14c + fVar33;
              if (fVar34 < *(float *)(&DAT_180cc54e4 + uVar17 * 0x30)) {
                fVar33 = fVar38 * fVar34 + DAT_1808ac838;
                fVar38 = *(float *)(&DAT_180cc54d0 + uVar17 * 0x30) - fVar33;
                fVar34 = *(float *)(&DAT_180cc54d0 + uVar17 * 0x30) + fVar33;
                if (fVar38 <= local_160) {
                  local_160 = fVar38;
                }
                fVar38 = *(float *)(&DAT_180cc54d4 + uVar17 * 0x30) - fVar33;
                fVar33 = *(float *)(&DAT_180cc54d4 + uVar17 * 0x30) + fVar33;
                if (local_150 <= fVar34) {
                  local_150 = fVar34;
                }
                if (fVar38 <= local_15c) {
                  local_15c = fVar38;
                }
                if (local_14c <= fVar33) {
                  local_14c = fVar33;
                }
              }
              if (param_6 == 1) {
                pfVar20 = &local_158;
                if (local_160 <= fVar40) {
                  pfVar20 = &local_160;
                }
                fVar40 = *pfVar20;
                local_158 = fVar40;
                pfVar20 = &local_154;
                if (local_15c <= fVar43) {
                  pfVar20 = &local_15c;
                }
                fVar43 = *pfVar20;
                local_154 = fVar43;
                pfVar20 = &local_148;
                if (fVar42 <= local_150) {
                  pfVar20 = &local_150;
                }
                fVar42 = *pfVar20;
                local_148 = fVar42;
                pfVar20 = &local_144;
                if (fVar44 <= local_14c) {
                  pfVar20 = &local_14c;
                }
                fVar44 = *pfVar20;
                local_144 = fVar44;
              }
              else {
                local_1a0 = &local_118;
                local_1a8 = fVar46;
                local_140 = local_160;
                local_13c = local_15c;
                local_138 = local_150;
                local_134 = local_15c;
                local_130 = local_150;
                local_12c = local_14c;
                local_128 = local_160;
                local_124 = local_14c;
                FUN_1800365d0(uVar31 * 6,&local_140);
              }
              uVar31 = (ulonglong)(uint)local_198;
              uVar25 = uVar25 + 1;
              fVar34 = DAT_1808ac1f4;
            } while (uVar25 < (uint)(&DAT_180cc8900)[uVar21 * 7]);
            uVar17 = (ulonglong)local_170;
            fVar38 = local_120;
            fVar33 = local_11c;
          }
          if (param_6 == 1) {
            local_1a0 = &local_118;
            local_1a8 = fVar46;
            local_140 = fVar40;
            local_13c = fVar43;
            local_138 = fVar42;
            local_134 = fVar43;
            local_130 = fVar42;
            local_12c = fVar44;
            local_128 = fVar40;
            local_124 = fVar44;
            FUN_1800365d0();
          }
          if (local_108 != '\0') {
            local_f8 = local_118 - DAT_1808ac540;
            if (local_f8 <= fVar38) {
              if (local_f8 <= 0.0) {
                local_f8 = 0.0;
              }
            }
            else {
              local_f8 = fVar38;
            }
            fStack_f4 = fStack_110 - DAT_1808ac540;
            if (fStack_f4 <= fVar33) {
              if (fStack_f4 <= 0.0) {
                fStack_f4 = 0.0;
              }
            }
            else {
              fStack_f4 = fVar33;
            }
            fStack_f0 = fStack_114 + DAT_1808ac540;
            if (fStack_f0 <= fVar38) {
              if (fStack_f0 <= 0.0) {
                fStack_f0 = 0.0;
              }
            }
            else {
              fStack_f0 = fVar38;
            }
            fStack_ec = fStack_10c + DAT_1808ac540;
            if (fStack_ec <= fVar33) {
              if (fStack_ec <= 0.0) {
                fStack_ec = 0.0;
              }
            }
            else {
              fStack_ec = fVar33;
            }
            if ((local_f8 < fStack_f0) && (fStack_f4 < fStack_ec)) {
              pfVar20 = &local_180;
              if (local_f8 <= local_194) {
                pfVar20 = &local_f8;
              }
              pfVar18 = &local_17c;
              if (fStack_f4 <= local_17c) {
                pfVar18 = &fStack_f4;
              }
              local_180 = *pfVar20;
              pfVar19 = &local_190;
              if (local_190 <= fStack_f0) {
                pfVar19 = &fStack_f0;
              }
              local_194 = *pfVar20;
              pfVar20 = &local_18c;
              if (local_18c <= fStack_ec) {
                pfVar20 = &fStack_ec;
              }
              local_190 = *pfVar19;
              lVar22 = uVar17 * 0x20;
              local_170 = (int)uVar17 + 1;
              uVar17 = (ulonglong)local_170;
              local_17c = *pfVar18;
              local_18c = *pfVar20;
              *(float *)(&DAT_180ccd5c0 + lVar22) = local_188;
              *(undefined4 *)(&DAT_180ccd5c4 + lVar22) = (&DAT_180cc8900)[uVar21 * 7];
              *(float *)(&DAT_180ccd5c8 + lVar22) = fVar45 / fVar37;
              *(undefined4 *)(&DAT_180ccd5cc + lVar22) = 0;
              *(float *)(&DAT_180ccd5d0 + lVar22) = local_f8;
              *(float *)(lVar22 + 0x180ccd5d4) = fStack_f4;
              *(float *)(lVar22 + 0x180ccd5d8) = fStack_f0;
              *(float *)(lVar22 + 0x180ccd5dc) = fStack_ec;
            }
          }
          uVar31 = (ulonglong)(uint)local_198;
          fVar45 = local_18c;
          fVar43 = local_190;
          fVar44 = local_17c;
          fVar40 = DAT_1808acd08;
          fVar34 = DAT_1808ac1f4;
          fVar42 = DAT_1808aceb0;
          fVar35 = local_194;
        }
      }
      uVar25 = (int)uVar21 + 1;
      uVar21 = (ulonglong)uVar25;
    } while (uVar25 < uVar29);
    iVar23 = (int)uVar17;
    if (iVar23 != 0) {
      _DAT_180cca558 = (undefined4)uVar31;
      _DAT_180cca510 = _DAT_180cc4ba4;
      uRam0000000180cca518 = uRam0000000180cc4bac;
      _DAT_180cca520 = _DAT_180cc4bb4;
      uRam0000000180cca528 = uRam0000000180cc4bbc;
      _DAT_180cca530 = _DAT_180cc4bc4;
      uRam0000000180cca538 = uRam0000000180cc4bcc;
      _DAT_180cca540 = _DAT_180cc4bd4;
      uRam0000000180cca548 = uRam0000000180cc4bdc;
      _DAT_180cca560 = *local_100;
      uRam0000000180cca568 = local_100[1];
      _DAT_180cca570 = 0x41000000;
      fVar46 = *(float *)(local_100 + 2);
      if (0.0 <= fVar46) {
        _DAT_180cca574 = DAT_1808ac34c;
        if (fVar46 <= DAT_1808ac34c) {
          _DAT_180cca574 = fVar46;
        }
      }
      else {
        _DAT_180cca574 = 0.0;
      }
      _DAT_180cca578 = DAT_1808ac34c;
      if (param_5 <= DAT_1808ac34c) {
        _DAT_180cca578 = param_5;
      }
      _DAT_180cca57c = local_16c;
      _DAT_180cca584 = local_168;
      _DAT_180cca580 = 0x3f800000;
      _DAT_180cca588 = param_6;
      _DAT_180cca58c = 0;
      _DAT_180cca5a0 = 0;
      _DAT_180cca5a8 = 0;
      fVar46 = *(float *)((longlong)local_100 + 0x14);
      if (0.0 <= fVar46) {
        _DAT_180cca5b0 = DAT_1808ac34c;
        if (fVar46 <= DAT_1808ac34c) {
          _DAT_180cca5b0 = fVar46;
        }
      }
      else {
        _DAT_180cca5b0 = 0.0;
      }
      fVar46 = *(float *)(local_100 + 3);
      if (0.0 <= fVar46) {
        _DAT_180cca5b4 = DAT_1808ac34c;
        if (fVar46 <= DAT_1808ac34c) {
          _DAT_180cca5b4 = fVar46;
        }
      }
      else {
        _DAT_180cca5b4 = 0.0;
      }
      local_194 = fVar35 - local_164;
      _DAT_180cca5b8 = 0;
      fVar46 = fVar44 - local_164;
      if (local_194 <= 0.0) {
        local_194 = 0.0;
      }
      fVar40 = fVar43 + local_164;
      if (fVar38 <= fVar43 + local_164) {
        fVar40 = fVar38;
      }
      if (fVar46 <= 0.0) {
        fVar46 = 0.0;
      }
      fVar42 = fVar45 + local_164;
      if (fVar33 <= fVar45 + local_164) {
        fVar42 = fVar33;
      }
      fVar34 = (float)param_1[0x18];
      if ((float)param_1[0x18] <= local_194) {
        fVar34 = local_194;
      }
      fVar37 = (float)param_1[0x19];
      if ((float)param_1[0x19] <= fVar46) {
        fVar37 = fVar46;
      }
      fVar41 = (float)param_1[0x1a];
      if (fVar40 <= (float)param_1[0x1a]) {
        fVar41 = fVar40;
      }
      fVar9 = (float)param_1[0x1b];
      if (fVar42 <= (float)param_1[0x1b]) {
        fVar9 = fVar42;
      }
      iVar16 = param_1[0x29];
      piVar5 = param_1 + 0x28;
      fVar39 = fVar34;
      if (fVar34 <= fVar41) {
        fVar39 = fVar41;
      }
      fVar41 = fVar37;
      if (fVar37 <= fVar9) {
        fVar41 = fVar9;
      }
      _DAT_180cca550 = fVar38;
      _DAT_180cca554 = fVar33;
      _DAT_180cca55c = iVar23;
      _DAT_180cca590 = fVar35;
      _DAT_180cca594 = fVar44;
      _DAT_180cca598 = fVar43;
      _DAT_180cca59c = fVar45;
      if (*piVar5 == iVar16) {
        iVar23 = *piVar5 + 1;
        if (iVar16 == 0) {
          iVar16 = 8;
        }
        else {
          iVar16 = iVar16 / 2 + iVar16;
        }
        if (iVar23 < iVar16) {
          iVar23 = iVar16;
        }
        FUN_1803f7030(piVar5,iVar23);
      }
      lVar30 = (longlong)*piVar5;
      lVar22 = *(longlong *)(param_1 + 0x2a);
      *(float *)(lVar22 + lVar30 * 0x10) = fVar34;
      *(float *)(lVar22 + 4 + lVar30 * 0x10) = fVar37;
      *(float *)(lVar22 + 8 + lVar30 * 0x10) = fVar39;
      *(float *)(lVar22 + 0xc + lVar30 * 0x10) = fVar41;
      *piVar5 = *piVar5 + 1;
      param_1[0x18] = (int)fVar34;
      param_1[0x19] = (int)fVar37;
      param_1[0x1a] = (int)fVar39;
      param_1[0x1b] = (int)fVar41;
      FUN_1803fbff0(param_1);
      if ((0 < *param_1) &&
         (*(int *)(*(longlong *)(param_1 + 2) + 0x28 + ((longlong)*param_1 + -1) * 0x48) != 0)) {
        FUN_1803fbe60(param_1);
      }
      FUN_1803fc3a0(param_1,6,4);
      local_e8[0] = (short)param_1[0xd];
      local_e8[1] = local_e8[0] + 1;
      local_e8[2] = local_e8[0] + 2;
      local_e8[5] = local_e8[0] + 3;
      psVar24 = local_e8;
      local_e8[3] = local_e8[0] + 1;
      local_e8[4] = local_e8[0] + 2;
      do {
        sVar7 = *psVar24;
        psVar24 = psVar24 + 1;
        **(short **)(param_1 + 0x12) = sVar7;
        *(longlong *)(param_1 + 0x12) = *(longlong *)(param_1 + 0x12) + 2;
      } while (psVar24 != local_dc);
      pfVar20 = *(float **)(param_1 + 0x10);
      *pfVar20 = local_194;
      pfVar20[1] = fVar46;
      *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
      *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x10) = 0xffffffff;
      lVar22 = *(longlong *)(param_1 + 0x10);
      pfVar20 = (float *)(lVar22 + 0x14);
      *(float **)(param_1 + 0x10) = pfVar20;
      *pfVar20 = fVar40;
      *(float *)(lVar22 + 0x18) = fVar46;
      *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 8) = 0x3f800000;
      *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x10) = 0xffffffff;
      lVar22 = *(longlong *)(param_1 + 0x10);
      pfVar20 = (float *)(lVar22 + 0x14);
      *(float **)(param_1 + 0x10) = pfVar20;
      *pfVar20 = local_194;
      *(float *)(lVar22 + 0x18) = fVar42;
      lVar22 = *(longlong *)(param_1 + 0x10);
      *(undefined4 *)(lVar22 + 8) = 0;
      *(undefined4 *)(lVar22 + 0xc) = 0x3f800000;
      *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x10) = 0xffffffff;
      lVar22 = *(longlong *)(param_1 + 0x10);
      pfVar20 = (float *)(lVar22 + 0x14);
      *(float **)(param_1 + 0x10) = pfVar20;
      *pfVar20 = fVar40;
      *(float *)(lVar22 + 0x18) = fVar42;
      piVar6 = param_1 + 0x30;
      lVar22 = *(longlong *)(param_1 + 0x10);
      *(undefined4 *)(lVar22 + 8) = 0x3f800000;
      *(undefined4 *)(lVar22 + 0xc) = 0x3f800000;
      *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x10) = 0xffffffff;
      *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x14;
      param_1[0xd] = param_1[0xd] + 4;
      lVar22 = *(longlong *)(param_1 + 2);
      uVar21 = (ulonglong)(uint)local_198;
      lVar30 = (longlong)*param_1;
      lVar27 = uVar21 * 0x30;
      *(undefined8 *)(lVar22 + -0x10 + lVar30 * 0x48) = 0;
      *(code **)(lVar22 + -0x18 + lVar30 * 0x48) = FUN_180034e90;
      iVar23 = (int)(uVar17 * 0x20) + (int)lVar27;
      *(int *)(lVar22 + -8 + lVar30 * 0x48) = iVar23 + 0xb0;
      *(int *)(lVar22 + -4 + lVar30 * 0x48) = *piVar6;
      FUN_18000d5e0(piVar6,iVar23 + *piVar6 + 0xb0);
      uVar10 = uRam0000000180cca518;
      puVar26 = (undefined8 *)
                ((longlong)*(int *)(lVar22 + -4 + lVar30 * 0x48) + *(longlong *)(param_1 + 0x32));
      *puVar26 = _DAT_180cca510;
      puVar26[1] = uVar10;
      uVar10 = uRam0000000180cca528;
      puVar26[2] = _DAT_180cca520;
      puVar26[3] = uVar10;
      uVar10 = uRam0000000180cca538;
      puVar26[4] = _DAT_180cca530;
      puVar26[5] = uVar10;
      uVar10 = uRam0000000180cca548;
      puVar26[6] = _DAT_180cca540;
      puVar26[7] = uVar10;
      uVar10 = CONCAT44(_DAT_180cca55c,_DAT_180cca558);
      puVar26[8] = CONCAT44(_DAT_180cca554,_DAT_180cca550);
      puVar26[9] = uVar10;
      uVar10 = uRam0000000180cca568;
      puVar26[10] = _DAT_180cca560;
      puVar26[0xb] = uVar10;
      uVar10 = CONCAT44(_DAT_180cca57c,_DAT_180cca578);
      puVar26[0xc] = CONCAT44(_DAT_180cca574,_DAT_180cca570);
      puVar26[0xd] = uVar10;
      uVar10 = CONCAT44(_DAT_180cca58c,_DAT_180cca588);
      puVar26[0xe] = CONCAT44(_DAT_180cca584,_DAT_180cca580);
      puVar26[0xf] = uVar10;
      uVar10 = CONCAT44(_DAT_180cca59c,_DAT_180cca598);
      puVar26[0x10] = CONCAT44(_DAT_180cca594,_DAT_180cca590);
      puVar26[0x11] = uVar10;
      uVar10 = _DAT_180cca5a8;
      puVar26[0x12] = _DAT_180cca5a0;
      puVar26[0x13] = uVar10;
      uVar10 = _DAT_180cca5b8;
      puVar26[0x14] = CONCAT44(_DAT_180cca5b4,_DAT_180cca5b0);
      puVar26[0x15] = uVar10;
      FUN_180540530(puVar26 + 0x16,&DAT_180cca5c0,lVar27);
      FUN_180540530(puVar26 + uVar21 * 6 + 0x16,&DAT_180ccd5c0,uVar17 * 0x20);
      FUN_1803fbe60(param_1);
      iVar16 = *piVar5;
      iVar23 = iVar16 + -1;
      *piVar5 = iVar23;
      if (iVar23 == 0) {
        puVar26 = (undefined8 *)(*(longlong *)(param_1 + 0xe) + 0x34);
      }
      else {
        puVar26 = (undefined8 *)((longlong)(iVar16 + -2) * 0x10 + *(longlong *)(param_1 + 0x2a));
      }
      uVar10 = puVar26[1];
      *(undefined8 *)(param_1 + 0x18) = *puVar26;
      *(undefined8 *)(param_1 + 0x1a) = uVar10;
      FUN_1803fbff0(param_1);
    }
  }
  return;
}



/* ===== 180038d90 FUN_180038d90 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_180038d90(longlong param_1,int param_2,longlong param_3,int *param_4,uint *param_5,
                  float *param_6)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int iVar11;
  bool bVar12;
  float fVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  longlong lVar19;
  longlong lVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  
  uVar18 = 0;
  *param_4 = 0;
  uVar15 = DAT_1808adec0;
  uVar14 = _DAT_1808ade90;
  fVar13 = DAT_1808abfa0;
  if (0 < param_2) {
    do {
      uVar17 = uVar18 + 1;
      lVar20 = (longlong)((int)uVar17 % param_2) * 0x1c;
      lVar19 = (ulonglong)uVar18 * 0x1c;
      fVar3 = *(float *)(lVar20 + 0xc + param_1);
      fVar4 = *(float *)(lVar20 + param_1);
      fVar5 = *(float *)(param_1 + 0xc + lVar19);
      fVar6 = *(float *)(param_1 + lVar19);
      bVar12 = fVar4 < fVar3 * (float)(*param_5 ^ uVar15) - fVar13;
      if (fVar6 < fVar5 * (float)(*param_5 ^ uVar15) - fVar13) {
        if (!bVar12) {
          if (0xf < *param_4) {
            return false;
          }
          fVar26 = fVar5 * *param_6 + fVar6;
          fVar21 = fVar26 - (fVar3 * *param_6 + fVar4);
          if ((float)((uint)fVar21 & uVar14) <= fVar13) {
            fVar26 = 0.0;
          }
          else {
            fVar26 = fVar26 / fVar21;
          }
          fVar21 = *(float *)(param_1 + 0x18 + lVar19);
          uVar8 = *(undefined8 *)(param_1 + 4 + lVar19);
          fVar22 = (float)uVar8;
          fVar23 = (float)((ulonglong)uVar8 >> 0x20);
          uVar8 = *(undefined8 *)(param_1 + 0x10 + lVar19);
          fVar7 = *(float *)(lVar20 + 0x18 + param_1);
          uVar9 = *(undefined8 *)(lVar20 + 4 + param_1);
          uVar10 = *(undefined8 *)(lVar20 + 0x10 + param_1);
          lVar19 = (longlong)*param_4 * 0x1c;
          fVar24 = (float)uVar8;
          fVar25 = (float)((ulonglong)uVar8 >> 0x20);
          *(float *)(param_3 + lVar19) = (fVar4 - fVar6) * fVar26 + fVar6;
          *(ulonglong *)(param_3 + 4 + lVar19) =
               CONCAT44(((float)((ulonglong)uVar9 >> 0x20) - fVar23) * fVar26 + fVar23,
                        ((float)uVar9 - fVar22) * fVar26 + fVar22);
          *(float *)(param_3 + 0xc + lVar19) = (fVar3 - fVar5) * fVar26 + fVar5;
          *(ulonglong *)(param_3 + 0x10 + lVar19) =
               CONCAT44(((float)((ulonglong)uVar10 >> 0x20) - fVar25) * fVar26 + fVar25,
                        ((float)uVar10 - fVar24) * fVar26 + fVar24);
          *(float *)(param_3 + 0x18 + lVar19) = (fVar7 - fVar21) * fVar26 + fVar21;
          iVar11 = *param_4;
          iVar16 = iVar11 + 1;
          *param_4 = iVar16;
          if (0xf < iVar16) {
            return false;
          }
          uVar8 = ((undefined8 *)(lVar20 + param_1))[1];
          lVar19 = (longlong)iVar11 * 0x1c;
          puVar1 = (undefined8 *)(lVar19 + 0x1c + param_3);
          *puVar1 = *(undefined8 *)(lVar20 + param_1);
          puVar1[1] = uVar8;
          puVar1 = (undefined8 *)(lVar20 + 0xc + param_1);
          uVar8 = puVar1[1];
          puVar2 = (undefined8 *)(lVar19 + 0x28 + param_3);
          *puVar2 = *puVar1;
          puVar2[1] = uVar8;
          goto LAB_18003906f;
        }
      }
      else {
        iVar11 = *param_4;
        if (0xf < iVar11) {
          return false;
        }
        if (bVar12) {
          fVar26 = fVar5 * *param_6 + fVar6;
          fVar21 = fVar26 - (fVar3 * *param_6 + fVar4);
          if ((float)((uint)fVar21 & uVar14) <= fVar13) {
            fVar26 = 0.0;
          }
          else {
            fVar26 = fVar26 / fVar21;
          }
          fVar21 = *(float *)(param_1 + 0x18 + lVar19);
          uVar8 = *(undefined8 *)(param_1 + 4 + lVar19);
          fVar22 = (float)uVar8;
          fVar23 = (float)((ulonglong)uVar8 >> 0x20);
          uVar8 = *(undefined8 *)(param_1 + 0x10 + lVar19);
          fVar7 = *(float *)(lVar20 + 0x18 + param_1);
          uVar9 = *(undefined8 *)(lVar20 + 4 + param_1);
          uVar10 = *(undefined8 *)(lVar20 + 0x10 + param_1);
          lVar19 = (longlong)iVar11 * 0x1c;
          fVar24 = (float)uVar8;
          fVar25 = (float)((ulonglong)uVar8 >> 0x20);
          *(float *)(param_3 + lVar19) = (fVar4 - fVar6) * fVar26 + fVar6;
          *(ulonglong *)(param_3 + 4 + lVar19) =
               CONCAT44(((float)((ulonglong)uVar9 >> 0x20) - fVar23) * fVar26 + fVar23,
                        ((float)uVar9 - fVar22) * fVar26 + fVar22);
          *(float *)(param_3 + 0xc + lVar19) = (fVar3 - fVar5) * fVar26 + fVar5;
          *(ulonglong *)(param_3 + 0x10 + lVar19) =
               CONCAT44(((float)((ulonglong)uVar10 >> 0x20) - fVar25) * fVar26 + fVar25,
                        ((float)uVar10 - fVar24) * fVar26 + fVar24);
          *(float *)(param_3 + 0x18 + lVar19) = (fVar7 - fVar21) * fVar26 + fVar21;
        }
        else {
          uVar8 = ((undefined8 *)(lVar20 + param_1))[1];
          lVar19 = (longlong)iVar11 * 0x1c;
          puVar1 = (undefined8 *)(lVar19 + param_3);
          *puVar1 = *(undefined8 *)(lVar20 + param_1);
          puVar1[1] = uVar8;
          puVar1 = (undefined8 *)(lVar20 + 0xc + param_1);
          uVar8 = puVar1[1];
          puVar2 = (undefined8 *)(lVar19 + 0xc + param_3);
          *puVar2 = *puVar1;
          puVar2[1] = uVar8;
        }
LAB_18003906f:
        *param_4 = *param_4 + 1;
      }
      uVar18 = uVar17;
    } while ((int)uVar17 < param_2);
  }
  return 2 < *param_4;
}



/* ===== 1800390d0 FUN_1800390d0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1800390d0(longlong param_1,int param_2,longlong param_3,int *param_4,float *param_5,
                  float *param_6)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int iVar11;
  bool bVar12;
  float fVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  longlong lVar18;
  longlong lVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  
  uVar17 = 0;
  *param_4 = 0;
  uVar14 = _DAT_1808ade90;
  fVar13 = DAT_1808abfa0;
  if (0 < param_2) {
    do {
      uVar16 = uVar17 + 1;
      lVar19 = (longlong)((int)uVar16 % param_2) * 0x1c;
      lVar18 = (ulonglong)uVar17 * 0x1c;
      fVar3 = *(float *)(lVar19 + 0xc + param_1);
      fVar4 = *(float *)(lVar19 + param_1);
      fVar5 = *(float *)(param_1 + 0xc + lVar18);
      fVar6 = *(float *)(param_1 + lVar18);
      bVar12 = fVar3 * *param_5 + fVar13 < fVar4;
      if (fVar5 * *param_5 + fVar13 < fVar6) {
        if (!bVar12) {
          if (0xf < *param_4) {
            return false;
          }
          fVar25 = fVar5 * *param_6 - fVar6;
          fVar20 = fVar25 - (fVar3 * *param_6 - fVar4);
          if ((float)((uint)fVar20 & uVar14) <= fVar13) {
            fVar25 = 0.0;
          }
          else {
            fVar25 = fVar25 / fVar20;
          }
          fVar20 = *(float *)(param_1 + 0x18 + lVar18);
          uVar8 = *(undefined8 *)(param_1 + 4 + lVar18);
          fVar21 = (float)uVar8;
          fVar22 = (float)((ulonglong)uVar8 >> 0x20);
          uVar8 = *(undefined8 *)(param_1 + 0x10 + lVar18);
          fVar7 = *(float *)(lVar19 + 0x18 + param_1);
          uVar9 = *(undefined8 *)(lVar19 + 4 + param_1);
          uVar10 = *(undefined8 *)(lVar19 + 0x10 + param_1);
          lVar18 = (longlong)*param_4 * 0x1c;
          fVar23 = (float)uVar8;
          fVar24 = (float)((ulonglong)uVar8 >> 0x20);
          *(float *)(param_3 + lVar18) = (fVar4 - fVar6) * fVar25 + fVar6;
          *(ulonglong *)(param_3 + 4 + lVar18) =
               CONCAT44(((float)((ulonglong)uVar9 >> 0x20) - fVar22) * fVar25 + fVar22,
                        ((float)uVar9 - fVar21) * fVar25 + fVar21);
          *(float *)(param_3 + 0xc + lVar18) = (fVar3 - fVar5) * fVar25 + fVar5;
          *(ulonglong *)(param_3 + 0x10 + lVar18) =
               CONCAT44(((float)((ulonglong)uVar10 >> 0x20) - fVar24) * fVar25 + fVar24,
                        ((float)uVar10 - fVar23) * fVar25 + fVar23);
          *(float *)(param_3 + 0x18 + lVar18) = (fVar7 - fVar20) * fVar25 + fVar20;
          iVar11 = *param_4;
          iVar15 = iVar11 + 1;
          *param_4 = iVar15;
          if (0xf < iVar15) {
            return false;
          }
          uVar8 = ((undefined8 *)(lVar19 + param_1))[1];
          lVar18 = (longlong)iVar11 * 0x1c;
          puVar1 = (undefined8 *)(lVar18 + 0x1c + param_3);
          *puVar1 = *(undefined8 *)(lVar19 + param_1);
          puVar1[1] = uVar8;
          puVar1 = (undefined8 *)(lVar19 + 0xc + param_1);
          uVar8 = puVar1[1];
          puVar2 = (undefined8 *)(lVar18 + 0x28 + param_3);
          *puVar2 = *puVar1;
          puVar2[1] = uVar8;
          goto LAB_18003939b;
        }
      }
      else {
        iVar11 = *param_4;
        if (0xf < iVar11) {
          return false;
        }
        if (bVar12) {
          fVar25 = fVar5 * *param_6 - fVar6;
          fVar20 = fVar25 - (fVar3 * *param_6 - fVar4);
          if ((float)((uint)fVar20 & uVar14) <= fVar13) {
            fVar25 = 0.0;
          }
          else {
            fVar25 = fVar25 / fVar20;
          }
          fVar20 = *(float *)(param_1 + 0x18 + lVar18);
          uVar8 = *(undefined8 *)(param_1 + 4 + lVar18);
          fVar21 = (float)uVar8;
          fVar22 = (float)((ulonglong)uVar8 >> 0x20);
          uVar8 = *(undefined8 *)(param_1 + 0x10 + lVar18);
          fVar7 = *(float *)(lVar19 + 0x18 + param_1);
          uVar9 = *(undefined8 *)(lVar19 + 4 + param_1);
          uVar10 = *(undefined8 *)(lVar19 + 0x10 + param_1);
          lVar18 = (longlong)iVar11 * 0x1c;
          fVar23 = (float)uVar8;
          fVar24 = (float)((ulonglong)uVar8 >> 0x20);
          *(float *)(param_3 + lVar18) = (fVar4 - fVar6) * fVar25 + fVar6;
          *(ulonglong *)(param_3 + 4 + lVar18) =
               CONCAT44(((float)((ulonglong)uVar9 >> 0x20) - fVar22) * fVar25 + fVar22,
                        ((float)uVar9 - fVar21) * fVar25 + fVar21);
          *(float *)(param_3 + 0xc + lVar18) = (fVar3 - fVar5) * fVar25 + fVar5;
          *(ulonglong *)(param_3 + 0x10 + lVar18) =
               CONCAT44(((float)((ulonglong)uVar10 >> 0x20) - fVar24) * fVar25 + fVar24,
                        ((float)uVar10 - fVar23) * fVar25 + fVar23);
          *(float *)(param_3 + 0x18 + lVar18) = (fVar7 - fVar20) * fVar25 + fVar20;
        }
        else {
          uVar8 = ((undefined8 *)(lVar19 + param_1))[1];
          lVar18 = (longlong)iVar11 * 0x1c;
          puVar1 = (undefined8 *)(lVar18 + param_3);
          *puVar1 = *(undefined8 *)(lVar19 + param_1);
          puVar1[1] = uVar8;
          puVar1 = (undefined8 *)(lVar19 + 0xc + param_1);
          uVar8 = puVar1[1];
          puVar2 = (undefined8 *)(lVar18 + 0xc + param_3);
          *puVar2 = *puVar1;
          puVar2[1] = uVar8;
        }
LAB_18003939b:
        *param_4 = *param_4 + 1;
      }
      uVar17 = uVar16;
    } while ((int)uVar16 < param_2);
  }
  return 2 < *param_4;
}



/* ===== 1800393f0 FUN_1800393f0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_1800393f0(undefined8 *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  float *pfVar9;
  float *pfVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  pfVar9 = (float *)param_1[1];
  pfVar10 = (float *)param_1[2];
  fVar1 = pfVar10[3];
  fVar2 = pfVar10[1];
  fVar3 = pfVar9[3];
  fVar4 = pfVar9[1];
  fVar14 = fVar3 * **(float **)*param_1 + fVar4;
  fVar11 = fVar14 - (fVar1 * **(float **)*param_1 + fVar2);
  if ((float)((uint)fVar11 & _DAT_1808ade90) <= DAT_1808abfa0) {
    fVar14 = 0.0;
  }
  else {
    fVar14 = fVar14 / fVar11;
  }
  fVar11 = pfVar9[2];
  fVar5 = pfVar10[2];
  fVar6 = pfVar10[6];
  uVar8 = *(undefined8 *)(pfVar10 + 4);
  fVar12 = (float)*(undefined8 *)(pfVar9 + 4);
  fVar13 = (float)((ulonglong)*(undefined8 *)(pfVar9 + 4) >> 0x20);
  fVar7 = pfVar9[6];
  *param_2 = (*pfVar10 - *pfVar9) * fVar14 + *pfVar9;
  param_2[1] = (fVar2 - fVar4) * fVar14 + fVar4;
  param_2[2] = (fVar5 - fVar11) * fVar14 + fVar11;
  param_2[3] = (fVar1 - fVar3) * fVar14 + fVar3;
  *(ulonglong *)(param_2 + 4) =
       CONCAT44(((float)((ulonglong)uVar8 >> 0x20) - fVar13) * fVar14 + fVar13,
                ((float)uVar8 - fVar12) * fVar14 + fVar12);
  param_2[6] = (fVar6 - fVar7) * fVar14 + fVar7;
  return param_2;
}



/* ===== 180039550 FUN_180039550 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_180039550(undefined8 *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  float *pfVar9;
  float *pfVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  pfVar9 = (float *)param_1[1];
  pfVar10 = (float *)param_1[2];
  fVar1 = pfVar10[3];
  fVar2 = pfVar10[1];
  fVar3 = pfVar9[3];
  fVar4 = pfVar9[1];
  fVar14 = fVar3 * **(float **)*param_1 - fVar4;
  fVar11 = fVar14 - (fVar1 * **(float **)*param_1 - fVar2);
  if ((float)((uint)fVar11 & _DAT_1808ade90) <= DAT_1808abfa0) {
    fVar14 = 0.0;
  }
  else {
    fVar14 = fVar14 / fVar11;
  }
  fVar11 = pfVar9[2];
  fVar5 = pfVar10[2];
  fVar6 = pfVar10[6];
  uVar8 = *(undefined8 *)(pfVar10 + 4);
  fVar12 = (float)*(undefined8 *)(pfVar9 + 4);
  fVar13 = (float)((ulonglong)*(undefined8 *)(pfVar9 + 4) >> 0x20);
  fVar7 = pfVar9[6];
  *param_2 = (*pfVar10 - *pfVar9) * fVar14 + *pfVar9;
  param_2[1] = (fVar2 - fVar4) * fVar14 + fVar4;
  param_2[2] = (fVar5 - fVar11) * fVar14 + fVar11;
  param_2[3] = (fVar1 - fVar3) * fVar14 + fVar3;
  *(ulonglong *)(param_2 + 4) =
       CONCAT44(((float)((ulonglong)uVar8 >> 0x20) - fVar13) * fVar14 + fVar13,
                ((float)uVar8 - fVar12) * fVar14 + fVar12);
  param_2[6] = (fVar6 - fVar7) * fVar14 + fVar7;
  return param_2;
}



/* ===== 1800396b0 FUN_1800396b0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1800396b0(longlong param_1,int param_2,longlong param_3,int *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  float fVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  
  uVar13 = 0;
  *param_4 = 0;
  uVar11 = _DAT_1808ade90;
  fVar10 = DAT_1808acd1c;
  fVar9 = DAT_1808abfa0;
  if (0 < param_2) {
    do {
      uVar16 = uVar13 + 1;
      lVar14 = (longlong)((int)uVar16 % param_2) * 0x1c;
      lVar15 = (ulonglong)uVar13 * 0x1c;
      fVar3 = *(float *)(lVar14 + 8 + param_1);
      fVar23 = *(float *)(param_1 + 8 + lVar15);
      if (fVar23 < fVar10) {
        if (fVar3 >= fVar10) {
          if (0xf < *param_4) {
            return false;
          }
          if ((float)((uint)(fVar23 - fVar3) & uVar11) <= fVar9) {
            fVar23 = 0.0;
          }
          else {
            fVar23 = fVar23 / (fVar23 - fVar3);
          }
          fVar3 = *(float *)(param_1 + 0x18 + lVar15);
          uVar4 = *(undefined8 *)(param_1 + 8 + lVar15);
          uVar5 = *(undefined8 *)(param_1 + 0x10 + lVar15);
          fVar24 = *(float *)(lVar14 + 0x18 + param_1);
          uVar6 = *(undefined8 *)(lVar14 + 8 + param_1);
          fVar21 = (float)*(undefined8 *)(param_1 + lVar15);
          fVar22 = (float)((ulonglong)*(undefined8 *)(param_1 + lVar15) >> 0x20);
          uVar7 = *(undefined8 *)(lVar14 + 0x10 + param_1);
          fVar19 = (float)uVar4;
          fVar20 = (float)((ulonglong)uVar4 >> 0x20);
          lVar15 = (longlong)*param_4 * 0x1c;
          fVar17 = (float)uVar5;
          fVar18 = (float)((ulonglong)uVar5 >> 0x20);
          *(ulonglong *)(param_3 + lVar15) =
               CONCAT44(((float)((ulonglong)*(undefined8 *)(lVar14 + param_1) >> 0x20) - fVar22) *
                        fVar23 + fVar22,
                        ((float)*(undefined8 *)(lVar14 + param_1) - fVar21) * fVar23 + fVar21);
          *(ulonglong *)(param_3 + 8 + lVar15) =
               CONCAT44(((float)((ulonglong)uVar6 >> 0x20) - fVar20) * fVar23 + fVar20,
                        ((float)uVar6 - fVar19) * fVar23 + fVar19);
          *(ulonglong *)(param_3 + 0x10 + lVar15) =
               CONCAT44(((float)((ulonglong)uVar7 >> 0x20) - fVar18) * fVar23 + fVar18,
                        ((float)uVar7 - fVar17) * fVar23 + fVar17);
          *(float *)(param_3 + 0x18 + lVar15) = (fVar24 - fVar3) * fVar23 + fVar3;
          iVar8 = *param_4;
          iVar12 = iVar8 + 1;
          *param_4 = iVar12;
          if (0xf < iVar12) {
            return false;
          }
          uVar4 = ((undefined8 *)(lVar14 + param_1))[1];
          lVar15 = (longlong)iVar8 * 0x1c;
          puVar1 = (undefined8 *)(lVar15 + 0x1c + param_3);
          *puVar1 = *(undefined8 *)(lVar14 + param_1);
          puVar1[1] = uVar4;
          puVar1 = (undefined8 *)(lVar14 + 0xc + param_1);
          uVar4 = puVar1[1];
          puVar2 = (undefined8 *)(lVar15 + 0x28 + param_3);
          *puVar2 = *puVar1;
          puVar2[1] = uVar4;
          goto LAB_18003990b;
        }
      }
      else {
        iVar8 = *param_4;
        if (0xf < iVar8) {
          return false;
        }
        if (fVar3 < fVar10) {
          if ((float)((uint)(fVar23 - fVar3) & uVar11) <= fVar9) {
            fVar24 = 0.0;
          }
          else {
            fVar24 = fVar23 / (fVar23 - fVar3);
          }
          uVar4 = *(undefined8 *)(param_1 + 0xc + lVar15);
          uVar5 = *(undefined8 *)(param_1 + 0x14 + lVar15);
          fVar17 = (float)uVar5;
          fVar18 = (float)((ulonglong)uVar5 >> 0x20);
          uVar5 = *(undefined8 *)(lVar14 + 0xc + param_1);
          fVar19 = (float)*(undefined8 *)(param_1 + lVar15);
          fVar20 = (float)((ulonglong)*(undefined8 *)(param_1 + lVar15) >> 0x20);
          uVar6 = *(undefined8 *)(lVar14 + 0x14 + param_1);
          fVar21 = (float)uVar4;
          fVar22 = (float)((ulonglong)uVar4 >> 0x20);
          lVar15 = (longlong)iVar8 * 0x1c;
          *(ulonglong *)(param_3 + lVar15) =
               CONCAT44(((float)((ulonglong)*(undefined8 *)(lVar14 + param_1) >> 0x20) - fVar20) *
                        fVar24 + fVar20,
                        ((float)*(undefined8 *)(lVar14 + param_1) - fVar19) * fVar24 + fVar19);
          *(float *)(param_3 + 8 + lVar15) = (fVar3 - fVar23) * fVar24 + fVar23;
          *(ulonglong *)(param_3 + 0xc + lVar15) =
               CONCAT44(((float)((ulonglong)uVar5 >> 0x20) - fVar22) * fVar24 + fVar22,
                        ((float)uVar5 - fVar21) * fVar24 + fVar21);
          *(ulonglong *)(param_3 + 0x14 + lVar15) =
               CONCAT44(((float)((ulonglong)uVar6 >> 0x20) - fVar18) * fVar24 + fVar18,
                        ((float)uVar6 - fVar17) * fVar24 + fVar17);
        }
        else {
          uVar4 = ((undefined8 *)(lVar14 + param_1))[1];
          lVar15 = (longlong)iVar8 * 0x1c;
          puVar1 = (undefined8 *)(lVar15 + param_3);
          *puVar1 = *(undefined8 *)(lVar14 + param_1);
          puVar1[1] = uVar4;
          puVar1 = (undefined8 *)(lVar14 + 0xc + param_1);
          uVar4 = puVar1[1];
          puVar2 = (undefined8 *)(lVar15 + 0xc + param_3);
          *puVar2 = *puVar1;
          puVar2[1] = uVar4;
        }
LAB_18003990b:
        *param_4 = *param_4 + 1;
      }
      uVar13 = uVar16;
    } while ((int)uVar16 < param_2);
  }
  return 2 < *param_4;
}



/* ===== 180039960 FUN_180039960 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_180039960(longlong param_1,int param_2,longlong param_3,int *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  bool bVar8;
  float fVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  
  uVar12 = 0;
  *param_4 = 0;
  uVar10 = _DAT_1808ade90;
  fVar9 = DAT_1808abfa0;
  if (0 < param_2) {
    do {
      uVar15 = uVar12 + 1;
      lVar13 = (longlong)((int)uVar15 % param_2) * 0x1c;
      lVar14 = (ulonglong)uVar12 * 0x1c;
      uVar5 = *(undefined8 *)(lVar13 + 8 + param_1);
      fVar23 = (float)uVar5;
      fVar24 = (float)((ulonglong)uVar5 >> 0x20);
      uVar5 = *(undefined8 *)(param_1 + 8 + lVar14);
      fVar21 = (float)uVar5;
      fVar22 = (float)((ulonglong)uVar5 >> 0x20);
      bVar8 = fVar24 + fVar9 < fVar23;
      if (fVar22 + fVar9 < fVar21) {
        if (!bVar8) {
          if (0xf < *param_4) {
            return false;
          }
          fVar16 = (fVar22 - fVar21) - (fVar24 - fVar23);
          if ((float)((uint)fVar16 & uVar10) <= fVar9) {
            fVar16 = 0.0;
          }
          else {
            fVar16 = (fVar22 - fVar21) / fVar16;
          }
          fVar3 = *(float *)(param_1 + 0x18 + lVar14);
          uVar5 = *(undefined8 *)(param_1 + 0x10 + lVar14);
          fVar4 = *(float *)(lVar13 + 0x18 + param_1);
          uVar6 = *(undefined8 *)(lVar13 + 0x10 + param_1);
          fVar17 = (float)*(undefined8 *)(param_1 + lVar14);
          fVar18 = (float)((ulonglong)*(undefined8 *)(param_1 + lVar14) >> 0x20);
          lVar14 = (longlong)*param_4 * 0x1c;
          fVar19 = (float)uVar5;
          fVar20 = (float)((ulonglong)uVar5 >> 0x20);
          *(ulonglong *)(param_3 + lVar14) =
               CONCAT44(((float)((ulonglong)*(undefined8 *)(lVar13 + param_1) >> 0x20) - fVar18) *
                        fVar16 + fVar18,
                        ((float)*(undefined8 *)(lVar13 + param_1) - fVar17) * fVar16 + fVar17);
          *(ulonglong *)(param_3 + 8 + lVar14) =
               CONCAT44((fVar24 - fVar22) * fVar16 + fVar22,(fVar23 - fVar21) * fVar16 + fVar21);
          *(ulonglong *)(param_3 + 0x10 + lVar14) =
               CONCAT44(((float)((ulonglong)uVar6 >> 0x20) - fVar20) * fVar16 + fVar20,
                        ((float)uVar6 - fVar19) * fVar16 + fVar19);
          *(float *)(param_3 + 0x18 + lVar14) = (fVar4 - fVar3) * fVar16 + fVar3;
          iVar7 = *param_4;
          iVar11 = iVar7 + 1;
          *param_4 = iVar11;
          if (0xf < iVar11) {
            return false;
          }
          uVar5 = ((undefined8 *)(lVar13 + param_1))[1];
          lVar14 = (longlong)iVar7 * 0x1c;
          puVar1 = (undefined8 *)(lVar14 + 0x1c + param_3);
          *puVar1 = *(undefined8 *)(lVar13 + param_1);
          puVar1[1] = uVar5;
          puVar1 = (undefined8 *)(lVar13 + 0xc + param_1);
          uVar5 = puVar1[1];
          puVar2 = (undefined8 *)(lVar14 + 0x28 + param_3);
          *puVar2 = *puVar1;
          puVar2[1] = uVar5;
          goto LAB_180039bae;
        }
      }
      else {
        iVar7 = *param_4;
        if (0xf < iVar7) {
          return false;
        }
        if (bVar8) {
          fVar16 = (fVar22 - fVar21) - (fVar24 - fVar23);
          if ((float)((uint)fVar16 & uVar10) <= fVar9) {
            fVar16 = 0.0;
          }
          else {
            fVar16 = (fVar22 - fVar21) / fVar16;
          }
          fVar3 = *(float *)(param_1 + 0x18 + lVar14);
          uVar5 = *(undefined8 *)(param_1 + 0x10 + lVar14);
          fVar4 = *(float *)(lVar13 + 0x18 + param_1);
          uVar6 = *(undefined8 *)(lVar13 + 0x10 + param_1);
          fVar17 = (float)*(undefined8 *)(param_1 + lVar14);
          fVar18 = (float)((ulonglong)*(undefined8 *)(param_1 + lVar14) >> 0x20);
          lVar14 = (longlong)iVar7 * 0x1c;
          fVar19 = (float)uVar5;
          fVar20 = (float)((ulonglong)uVar5 >> 0x20);
          *(ulonglong *)(param_3 + lVar14) =
               CONCAT44(((float)((ulonglong)*(undefined8 *)(lVar13 + param_1) >> 0x20) - fVar18) *
                        fVar16 + fVar18,
                        ((float)*(undefined8 *)(lVar13 + param_1) - fVar17) * fVar16 + fVar17);
          *(ulonglong *)(param_3 + 8 + lVar14) =
               CONCAT44((fVar24 - fVar22) * fVar16 + fVar22,(fVar23 - fVar21) * fVar16 + fVar21);
          *(ulonglong *)(param_3 + 0x10 + lVar14) =
               CONCAT44(((float)((ulonglong)uVar6 >> 0x20) - fVar20) * fVar16 + fVar20,
                        ((float)uVar6 - fVar19) * fVar16 + fVar19);
          *(float *)(param_3 + 0x18 + lVar14) = (fVar4 - fVar3) * fVar16 + fVar3;
        }
        else {
          uVar5 = ((undefined8 *)(lVar13 + param_1))[1];
          lVar14 = (longlong)iVar7 * 0x1c;
          puVar1 = (undefined8 *)(lVar14 + param_3);
          *puVar1 = *(undefined8 *)(lVar13 + param_1);
          puVar1[1] = uVar5;
          puVar1 = (undefined8 *)(lVar13 + 0xc + param_1);
          uVar5 = puVar1[1];
          puVar2 = (undefined8 *)(lVar14 + 0xc + param_3);
          *puVar2 = *puVar1;
          puVar2[1] = uVar5;
        }
LAB_180039bae:
        *param_4 = *param_4 + 1;
      }
      uVar12 = uVar15;
    } while ((int)uVar15 < param_2);
  }
  return 2 < *param_4;
}



/* ===== 180039bf0 FUN_180039bf0 ===== */

void FUN_180039bf0(uint *param_1,uint *param_2,longlong param_3,undefined1 param_4)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  uint *puVar4;
  uint *puVar5;
  longlong lVar6;
  uint *puVar7;
  uint local_res8 [2];
  uint *local_48;
  uint *local_40;
  
  lVar3 = (longlong)param_2 - (longlong)param_1;
  while( true ) {
    if (lVar3 >> 2 < 0x21) {
      if (param_1 != param_2) {
        for (puVar5 = param_1 + 1; puVar5 != param_2; puVar5 = puVar5 + 1) {
          uVar2 = *puVar5;
          if (*(float *)(&DAT_180cc54c8 + (ulonglong)*param_1 * 0x30) <=
              *(float *)(&DAT_180cc54c8 + (ulonglong)uVar2 * 0x30)) {
            puVar4 = puVar5;
            puVar7 = puVar5;
            if (*(float *)(&DAT_180cc54c8 + (ulonglong)uVar2 * 0x30) <
                *(float *)(&DAT_180cc54c8 + (ulonglong)puVar5[-1] * 0x30)) {
              do {
                puVar7 = puVar4 + -1;
                *puVar4 = *puVar7;
                puVar1 = puVar4 + -2;
                puVar4 = puVar7;
              } while (*(float *)(&DAT_180cc54c8 + (ulonglong)uVar2 * 0x30) <=
                       *(float *)(&DAT_180cc54c8 + (ulonglong)*puVar1 * 0x30) &&
                       *(float *)(&DAT_180cc54c8 + (ulonglong)*puVar1 * 0x30) !=
                       *(float *)(&DAT_180cc54c8 + (ulonglong)uVar2 * 0x30));
            }
            *puVar7 = uVar2;
          }
          else {
            FUN_180540530(param_1 + 1,param_1,(longlong)puVar5 - (longlong)param_1);
            *param_1 = uVar2;
          }
        }
      }
      return;
    }
    lVar3 = (longlong)param_2 - (longlong)param_1 >> 3;
    if (param_3 < 1) break;
    puVar5 = param_1 + lVar3;
    lVar6 = (longlong)param_2 + (-4 - (longlong)param_1) >> 2;
    if (lVar6 < 0x29) {
      FUN_18003a300(param_1,puVar5,param_2 + -1);
    }
    else {
      lVar6 = lVar6 + 1 >> 3;
      FUN_18003a300(param_1,param_1 + lVar6,param_1 + lVar6 * 2);
      puVar5 = param_1 + lVar3;
      FUN_18003a300(puVar5 + -lVar6,puVar5,param_1 + lVar6 + lVar3);
      puVar4 = param_2 + (-1 - lVar6);
      FUN_18003a300(param_2 + lVar6 * -2 + -1,puVar4);
      FUN_18003a300(param_1 + lVar6,puVar5,puVar4);
    }
    FUN_180039fd0(&local_48,param_1,puVar5,param_2);
    puVar4 = local_40;
    puVar5 = local_48;
    param_3 = (param_3 >> 1) + (param_3 >> 2);
    if ((longlong)local_48 - (longlong)param_1 >> 2 < (longlong)param_2 - (longlong)local_40 >> 2) {
      FUN_180039bf0(param_1,local_48,param_3,param_4);
      puVar5 = param_2;
      param_1 = puVar4;
    }
    else {
      FUN_180039bf0(local_40,param_2,param_3,param_4);
    }
    lVar3 = (longlong)puVar5 - (longlong)param_1;
    param_2 = puVar5;
  }
  lVar6 = (longlong)param_2 - (longlong)param_1 >> 2;
  while (0 < lVar3) {
    local_res8[0] = param_1[lVar3 + -1];
    lVar3 = lVar3 + -1;
    FUN_180039ee0(param_1,lVar3,lVar6,local_res8,param_4);
  }
  if (lVar6 < 2) {
    return;
  }
  do {
    if (1 < (longlong)param_2 - (longlong)param_1 >> 2) {
      local_res8[0] = param_2[-1];
      param_2[-1] = *param_1;
      FUN_180039ee0(param_1,0,(longlong)(param_2 + -1) - (longlong)param_1 >> 2,local_res8,param_4);
    }
    param_2 = param_2 + -1;
  } while (7 < (longlong)param_2 - (longlong)param_1);
  return;
}



/* ===== 180039ee0 FUN_180039ee0 ===== */

void FUN_180039ee0(longlong param_1,longlong param_2,ulonglong param_3,uint *param_4)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = (longlong)(param_3 - 1) >> 1;
  lVar5 = param_2;
  while (lVar5 < lVar4) {
    lVar1 = (ulonglong)
            (*(float *)(&DAT_180cc54c8 + (ulonglong)*(uint *)(param_1 + 4 + lVar5 * 8) * 0x30) <
             *(float *)(&DAT_180cc54c8 + (ulonglong)*(uint *)(param_1 + 8 + lVar5 * 8) * 0x30) ||
            *(float *)(&DAT_180cc54c8 + (ulonglong)*(uint *)(param_1 + 4 + lVar5 * 8) * 0x30) ==
            *(float *)(&DAT_180cc54c8 + (ulonglong)*(uint *)(param_1 + 8 + lVar5 * 8) * 0x30)) + 1 +
            lVar5 * 2;
    *(undefined4 *)(param_1 + lVar5 * 4) = *(undefined4 *)(param_1 + lVar1 * 4);
    lVar5 = lVar1;
  }
  if ((lVar5 == lVar4) && ((param_3 & 1) == 0)) {
    *(undefined4 *)(param_1 + lVar5 * 4) = *(undefined4 *)(param_1 + -4 + param_3 * 4);
    lVar5 = param_3 - 1;
  }
  if (param_2 < lVar5) {
    uVar2 = *param_4;
    do {
      lVar4 = lVar5 + -1 >> 1;
      uVar3 = *(uint *)(param_1 + lVar4 * 4);
      if (*(float *)(&DAT_180cc54c8 + (ulonglong)uVar2 * 0x30) <
          *(float *)(&DAT_180cc54c8 + (ulonglong)uVar3 * 0x30) ||
          *(float *)(&DAT_180cc54c8 + (ulonglong)uVar2 * 0x30) ==
          *(float *)(&DAT_180cc54c8 + (ulonglong)uVar3 * 0x30)) break;
      *(uint *)(param_1 + lVar5 * 4) = uVar3;
      lVar5 = lVar4;
    } while (param_2 < lVar4);
  }
  *(uint *)(param_1 + lVar5 * 4) = *param_4;
  return;
}



/* ===== 180039fd0 FUN_180039fd0 ===== */

undefined8 * FUN_180039fd0(undefined8 *param_1,uint *param_2,uint *param_3,uint *param_4)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  
  puVar3 = param_3 + 1;
  while (puVar4 = param_3, param_2 < puVar4) {
    if ((*(float *)(&DAT_180cc54c8 + (ulonglong)puVar4[-1] * 0x30) <
         *(float *)(&DAT_180cc54c8 + (ulonglong)*puVar4 * 0x30)) ||
       (param_3 = puVar4 + -1,
       *(float *)(&DAT_180cc54c8 + (ulonglong)*puVar4 * 0x30) <
       *(float *)(&DAT_180cc54c8 + (ulonglong)puVar4[-1] * 0x30))) break;
  }
  if (puVar3 < param_4) {
    do {
      if ((*(float *)(&DAT_180cc54c8 + (ulonglong)*puVar3 * 0x30) <
           *(float *)(&DAT_180cc54c8 + (ulonglong)*puVar4 * 0x30)) ||
         (*(float *)(&DAT_180cc54c8 + (ulonglong)*puVar4 * 0x30) <
          *(float *)(&DAT_180cc54c8 + (ulonglong)*puVar3 * 0x30))) break;
      puVar3 = puVar3 + 1;
    } while (puVar3 < param_4);
  }
  puVar5 = puVar4;
  puVar7 = puVar3;
  do {
    puVar6 = puVar3;
    if (puVar3 < param_4) {
      if (0xf < (ulonglong)((longlong)param_4 + (3 - (longlong)puVar3))) {
        do {
          if (*(float *)(&DAT_180cc54c8 + (ulonglong)*puVar3 * 0x30) <=
              *(float *)(&DAT_180cc54c8 + (ulonglong)*puVar5 * 0x30)) {
            puVar6 = puVar3;
            if (*(float *)(&DAT_180cc54c8 + (ulonglong)*puVar3 * 0x30) <
                *(float *)(&DAT_180cc54c8 + (ulonglong)*puVar5 * 0x30)) goto joined_r0x00018003a1f8;
            if (puVar7 != puVar3) {
              uVar1 = *puVar7;
              *puVar7 = *puVar3;
              *puVar3 = uVar1;
            }
            puVar7 = puVar7 + 1;
          }
          puVar6 = puVar3 + 1;
          if (*(float *)(&DAT_180cc54c8 + (ulonglong)*puVar6 * 0x30) <=
              *(float *)(&DAT_180cc54c8 + (ulonglong)*puVar5 * 0x30)) {
            if (*(float *)(&DAT_180cc54c8 + (ulonglong)*puVar6 * 0x30) <
                *(float *)(&DAT_180cc54c8 + (ulonglong)*puVar5 * 0x30)) goto joined_r0x00018003a1f8;
            if (puVar7 != puVar6) {
              uVar1 = *puVar7;
              *puVar7 = *puVar6;
              *puVar6 = uVar1;
            }
            puVar7 = puVar7 + 1;
          }
          puVar6 = puVar3 + 2;
          if (*(float *)(&DAT_180cc54c8 + (ulonglong)*puVar6 * 0x30) <=
              *(float *)(&DAT_180cc54c8 + (ulonglong)*puVar5 * 0x30)) {
            if (*(float *)(&DAT_180cc54c8 + (ulonglong)*puVar6 * 0x30) <
                *(float *)(&DAT_180cc54c8 + (ulonglong)*puVar5 * 0x30)) goto joined_r0x00018003a1f8;
            if (puVar7 != puVar6) {
              uVar1 = *puVar7;
              *puVar7 = *puVar6;
              *puVar6 = uVar1;
            }
            puVar7 = puVar7 + 1;
          }
          puVar6 = puVar3 + 3;
          if (*(float *)(&DAT_180cc54c8 + (ulonglong)*puVar6 * 0x30) <=
              *(float *)(&DAT_180cc54c8 + (ulonglong)*puVar5 * 0x30)) {
            if (*(float *)(&DAT_180cc54c8 + (ulonglong)*puVar6 * 0x30) <
                *(float *)(&DAT_180cc54c8 + (ulonglong)*puVar5 * 0x30)) goto joined_r0x00018003a1f8;
            if (puVar7 != puVar6) {
              uVar1 = *puVar7;
              *puVar7 = *puVar6;
              *puVar6 = uVar1;
            }
            puVar7 = puVar7 + 1;
          }
          puVar3 = puVar3 + 4;
        } while (puVar3 < param_4 + -3);
      }
      for (; puVar6 = puVar3, puVar3 < param_4; puVar3 = puVar3 + 1) {
        if (*(float *)(&DAT_180cc54c8 + (ulonglong)*puVar3 * 0x30) <=
            *(float *)(&DAT_180cc54c8 + (ulonglong)*puVar5 * 0x30)) {
          if (*(float *)(&DAT_180cc54c8 + (ulonglong)*puVar3 * 0x30) <
              *(float *)(&DAT_180cc54c8 + (ulonglong)*puVar5 * 0x30)) break;
          if (puVar7 != puVar3) {
            uVar1 = *puVar7;
            *puVar7 = *puVar3;
            *puVar3 = uVar1;
          }
          puVar7 = puVar7 + 1;
        }
      }
    }
joined_r0x00018003a1f8:
    puVar3 = puVar6;
    puVar2 = puVar4;
    if (param_2 < puVar2) {
      puVar4 = puVar2 + -1;
      puVar6 = puVar3;
      if (*(float *)(&DAT_180cc54c8 + (ulonglong)*puVar5 * 0x30) <=
          *(float *)(&DAT_180cc54c8 + (ulonglong)puVar2[-1] * 0x30)) {
        if (*(float *)(&DAT_180cc54c8 + (ulonglong)*puVar5 * 0x30) <
            *(float *)(&DAT_180cc54c8 + (ulonglong)puVar2[-1] * 0x30)) goto LAB_18003a24e;
        if (puVar2 != puVar5) {
          uVar1 = puVar5[-1];
          puVar5[-1] = puVar2[-1];
          *puVar4 = uVar1;
        }
        puVar5 = puVar5 + -1;
      }
      goto joined_r0x00018003a1f8;
    }
LAB_18003a24e:
    if (puVar2 == param_2) {
      if (puVar3 == param_4) {
        *param_1 = puVar5;
        param_1[1] = puVar7;
        return param_1;
      }
      if (puVar7 != puVar3) {
        uVar1 = *puVar5;
        *puVar5 = *puVar7;
        *puVar7 = uVar1;
      }
      uVar1 = *puVar5;
      puVar7 = puVar7 + 1;
      *puVar5 = *puVar3;
      *puVar3 = uVar1;
      puVar3 = puVar3 + 1;
      puVar4 = puVar2;
      puVar5 = puVar5 + 1;
    }
    else {
      puVar4 = puVar2 + -1;
      if (puVar3 == param_4) {
        puVar6 = puVar5 + -1;
        if (puVar5 != puVar2) {
          uVar1 = *puVar4;
          *puVar4 = *puVar6;
          *puVar6 = uVar1;
        }
        puVar5 = puVar7 + -1;
        puVar7 = puVar7 + -1;
        uVar1 = *puVar6;
        *puVar6 = *puVar5;
        *puVar7 = uVar1;
        puVar5 = puVar6;
      }
      else {
        uVar1 = *puVar3;
        *puVar3 = *puVar4;
        puVar3 = puVar3 + 1;
        *puVar4 = uVar1;
      }
    }
  } while( true );
}



/* ===== 18003a300 FUN_18003a300 ===== */

void FUN_18003a300(uint *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  
  uVar1 = *param_2;
  if (*(float *)(&DAT_180cc54c8 + (ulonglong)uVar1 * 0x30) <=
      *(float *)(&DAT_180cc54c8 + (ulonglong)*param_1 * 0x30) &&
      *(float *)(&DAT_180cc54c8 + (ulonglong)*param_1 * 0x30) !=
      *(float *)(&DAT_180cc54c8 + (ulonglong)uVar1 * 0x30)) {
    *param_2 = *param_1;
    *param_1 = uVar1;
  }
  uVar1 = *param_3;
  if (*(float *)(&DAT_180cc54c8 + (ulonglong)uVar1 * 0x30) <=
      *(float *)(&DAT_180cc54c8 + (ulonglong)*param_2 * 0x30) &&
      *(float *)(&DAT_180cc54c8 + (ulonglong)*param_2 * 0x30) !=
      *(float *)(&DAT_180cc54c8 + (ulonglong)uVar1 * 0x30)) {
    *param_3 = *param_2;
    *param_2 = uVar1;
    if (*(float *)(&DAT_180cc54c8 + (ulonglong)uVar1 * 0x30) <=
        *(float *)(&DAT_180cc54c8 + (ulonglong)*param_1 * 0x30) &&
        *(float *)(&DAT_180cc54c8 + (ulonglong)*param_1 * 0x30) !=
        *(float *)(&DAT_180cc54c8 + (ulonglong)uVar1 * 0x30)) {
      *param_2 = *param_1;
      *param_1 = uVar1;
    }
  }
  return;
}



/* ===== 18003a390 FUN_18003a390 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_18003a390(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 *puVar6;
  undefined1 auStack_68 [40];
  longlong *local_40;
  undefined1 local_23 [3];
  ulonglong local_20;
  
  local_20 = DAT_180919500 ^ (ulonglong)auStack_68;
  lVar4 = 0;
  local_40 = param_1;
  if (param_2 < 0) {
    lVar1 = FUN_180042bb0(local_23,-param_2);
    *(undefined1 *)(lVar1 + -1) = 0x2d;
    puVar2 = (undefined1 *)(lVar1 + -1);
  }
  else {
    puVar2 = (undefined1 *)FUN_180042bb0(local_23);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = lVar4;
  param_1[3] = lVar4;
  if (puVar2 == local_23) {
    param_1[3] = 0xf;
    *(char *)param_1 = (char)lVar4;
  }
  else {
    puVar6 = local_23 + -(longlong)puVar2;
    if ((undefined1 *)0x7fffffffffffffff < puVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_180011990();
    }
    if (puVar6 < (undefined1 *)0x10) {
      param_1[2] = (longlong)puVar6;
      param_1[3] = 0xf;
      FUN_180540530(param_1,puVar2,puVar6);
      puVar6[(longlong)param_1] = 0;
    }
    else {
      uVar3 = (ulonglong)puVar6 | 0xf;
      uVar5 = 0x7fffffffffffffff;
      if ((uVar3 < 0x8000000000000000) && (uVar5 = uVar3, uVar3 < 0x16)) {
        uVar5 = 0x16;
      }
      lVar4 = FUN_18000fb70(uVar5 + 1);
      *param_1 = lVar4;
      param_1[2] = (longlong)puVar6;
      param_1[3] = uVar5;
      FUN_180540530(lVar4,puVar2,puVar6);
      puVar6[lVar4] = 0;
    }
  }
  return param_1;
}



/* ===== 18003a4d0 FUN_18003a4d0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18003a4d0(void)

{
  int iVar1;
  
  if ((DAT_180ccf610 == '\0') && (DAT_1811089f0 != 0)) {
    DAT_180ccf614 = FUN_18038eaf0("C_BaseEntity","m_hOwnerEntity");
    _DAT_180ccf618 = FUN_18038eaf0("C_BaseEntity","m_iHealth");
    DAT_180ccf61c = FUN_18038eaf0("C_BaseEntity","m_lifeState");
    DAT_180ccf620 = FUN_18038eaf0("C_BaseEntity","m_nCreationTick");
    DAT_180ccf624 = FUN_18038eaf0("C_BaseEntity","m_iTeamNum");
    DAT_180ccf628 = FUN_18038eaf0("C_BaseEntity","m_nSubclassID");
    DAT_180ccf62c = FUN_18038eaf0("CEntityIdentity","m_flags");
    DAT_180ccf630 = FUN_18038eaf0("CEntityIdentity","m_worldGroupId");
    DAT_180ccf634 = FUN_18038eaf0(&DAT_1806d4100,"m_bBombPlanted");
    DAT_180ccf638 = FUN_18038eaf0(&DAT_1806d4100,"m_bStartedArming");
    DAT_180ccf63c = FUN_18038eaf0(&DAT_1806d4100,"m_fArmedTime");
    DAT_180ccf640 = FUN_18038eaf0("C_PlantedC4","m_bC4Activated");
    DAT_180ccf644 = FUN_18038eaf0("C_PlantedC4","m_bBombTicking");
    DAT_180ccf648 = FUN_18038eaf0("C_PlantedC4","m_bHasExploded");
    DAT_180ccf64c = FUN_18038eaf0("C_PlantedC4","m_bBombDefused");
    DAT_180ccf650 = FUN_18038eaf0("C_PlantedC4","m_bBeingDefused");
    DAT_180ccf654 = FUN_18038eaf0("C_PlantedC4","m_flC4Blow");
    DAT_180ccf658 = FUN_18038eaf0("C_PlantedC4","m_flTimerLength");
    DAT_180ccf65c = FUN_18038eaf0("C_PlantedC4","m_flDefuseCountDown");
    DAT_180ccf660 = FUN_18038eaf0("C_PlantedC4","m_flDefuseLength");
    DAT_180ccf664 = FUN_18038eaf0("C_PlantedC4","m_hBombDefuser");
    DAT_180ccf668 = FUN_18038eaf0("C_Hostage","m_isRescued");
    DAT_180ccf66c = FUN_18038eaf0("C_Hostage","m_nHostageState");
    DAT_180ccf670 = FUN_18038eaf0("C_Hostage","m_hHostageGrabber");
    DAT_180ccf674 = FUN_18038eaf0("C_CSPlayerPawn","m_pHostageServices");
    iVar1 = FUN_18038eaf0("C_CSPlayerPawn","m_bIsGrabbingHostage");
    if (iVar1 == 0) {
      iVar1 = FUN_18038eaf0("C_CSPlayerPawnBase","m_bIsGrabbingHostage");
    }
    DAT_180ccf678 = iVar1;
    DAT_180ccf67c = FUN_18038eaf0("CCSPlayer_HostageServices","m_hCarriedHostage");
    iVar1 = FUN_18038eaf0("C_CSPlayerPawnBase","m_flProgressBarStartTime");
    if (iVar1 == 0) {
      iVar1 = FUN_18038eaf0("C_CSPlayerPawn","m_flProgressBarStartTime");
    }
    DAT_180ccf680 = iVar1;
    iVar1 = FUN_18038eaf0("C_CSPlayerPawnBase","m_iProgressBarDuration");
    if (iVar1 == 0) {
      iVar1 = FUN_18038eaf0("C_CSPlayerPawn","m_iProgressBarDuration");
    }
    DAT_180ccf684 = iVar1;
    DAT_180ccf688 = FUN_18038eaf0("C_CSWeaponBase","m_bUIWeapon");
    DAT_180ccf68c = FUN_18038eaf0("C_BasePlayerWeapon","m_iClip1");
    DAT_180ccf690 = FUN_18038eaf0("C_BasePlayerWeapon","m_pReserveAmmo");
    DAT_180ccf694 = FUN_18038eaf0("CBasePlayerWeaponVData","m_iMaxClip1");
    DAT_180ccf698 = FUN_18038eaf0("C_EconEntity","m_AttributeManager");
    DAT_180ccf69c = FUN_18038eaf0("C_AttributeContainer","m_Item");
    DAT_180ccf6a0 = FUN_18038eaf0("C_EconItemView","m_iItemDefinitionIndex");
    DAT_180ccf6a4 = FUN_18038eaf0("C_BaseModelEntity","m_pClientAlphaProperty");
    DAT_180ccf6a8 = FUN_18038eaf0("CClientAlphaProperty","m_nAlpha");
    DAT_180ccf6ac = FUN_18038eaf0("C_BaseModelEntity","m_nRenderMode");
    DAT_180ccf6b0 = FUN_18038eaf0("C_SmokeGrenadeProjectile","m_nSmokeEffectTickBegin");
    DAT_180ccf6b4 = FUN_18038eaf0("C_SmokeGrenadeProjectile","m_vSmokeColor");
    DAT_180ccf6b8 = FUN_18038eaf0("C_BaseGrenade","m_hThrower");
    DAT_180ccf6bc = FUN_18038eaf0("C_Inferno","m_nFireEffectTickBegin");
    DAT_180ccf6c0 = FUN_18038eaf0("C_Inferno","m_nFireLifetime");
    DAT_180ccf6c4 = FUN_18038eaf0("C_Inferno","m_fireCount");
    DAT_180ccf6c8 = FUN_18038eaf0("C_Inferno","m_nInfernoType");
    DAT_180ccf6cc = FUN_18038eaf0("C_MolotovProjectile","m_bIsIncGrenade");
    DAT_180ccf610 = '\x01';
  }
  return;
}



/* ===== 18003a9e0 FUN_18003a9e0 ===== */

uint FUN_18003a9e0(float *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  param_2 = param_2 * param_1[3];
  if (0.0 <= param_2) {
    fVar3 = DAT_1808ac34c;
    if (param_2 <= DAT_1808ac34c) {
      fVar3 = param_2;
    }
  }
  else {
    fVar3 = 0.0;
  }
  fVar1 = param_1[2];
  if (0.0 <= fVar1) {
    fVar4 = DAT_1808ac34c;
    if (fVar1 <= DAT_1808ac34c) {
      fVar4 = fVar1;
    }
  }
  else {
    fVar4 = 0.0;
  }
  fVar1 = param_1[1];
  if (0.0 <= fVar1) {
    fVar5 = DAT_1808ac34c;
    if (fVar1 <= DAT_1808ac34c) {
      fVar5 = fVar1;
    }
  }
  else {
    fVar5 = 0.0;
  }
  fVar1 = *param_1;
  fVar2 = 0.0;
  if ((0.0 <= fVar1) && (fVar2 = DAT_1808ac34c, fVar1 <= DAT_1808ac34c)) {
    fVar2 = fVar1;
  }
  return (int)(fVar2 * DAT_1808acb94 + DAT_1808ac1f4) |
         (int)(fVar5 * DAT_1808acb94 + DAT_1808ac1f4) << 8 |
         (int)(fVar4 * DAT_1808acb94 + DAT_1808ac1f4) << 0x10 |
         (int)(fVar3 * DAT_1808acb94 + DAT_1808ac1f4) << 0x18;
}



/* ===== 18003aaa0 FUN_18003aaa0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_18003aaa0(float *param_1,undefined8 param_2,float param_3,float param_4)

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



/* ===== 18003abe0 FUN_18003abe0 ===== */

void FUN_18003abe0(longlong param_1,longlong *param_2,undefined8 param_3,uint param_4,char *param_5)

{
  longlong lVar1;
  float fVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_res10;
  float local_res14;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  
  lVar1 = *param_2;
  if (((lVar1 != 0) && (param_5 != (char *)0x0)) && (*param_5 != '\0')) {
    local_a8 = param_3;
    fVar6 = (float)FUN_18053f0d0();
    local_a8 = CONCAT44(local_a8._4_4_,fVar6);
    fVar7 = (float)FUN_18053f0d0();
    fVar9 = DAT_1808acb94;
    fVar10 = DAT_1808ac34c;
    local_a8 = CONCAT44(fVar7,(undefined4)local_a8);
    fVar8 = (float)(param_4 >> 0x18) / DAT_1808acb94;
    if (*(char *)((longlong)param_2 + 0xc) == '\0') {
      local_res10 = fVar6 + DAT_1808ac34c;
      local_res14 = fVar7 + DAT_1808ac34c;
      iVar4 = (int)(fVar8 * fVar8 * DAT_1808acb60) << 0x18;
      if (iVar4 != 0) {
        fVar10 = *(float *)(param_2 + 1);
        if (fVar10 == 0.0) {
          fVar10 = *(float *)(*(longlong *)(param_1 + 0x38) + 0x20);
        }
        local_a0 = *(undefined8 *)(param_1 + 0x60);
        uStack_98 = *(undefined8 *)(param_1 + 0x68);
        FUN_18040a900(lVar1,param_1,fVar10,&local_res10,iVar4,&local_a0,param_5,0,0,0);
      }
    }
    else {
      fVar8 = DAT_1808ac34c - fVar8;
      if (fVar8 <= 0.0) {
        fVar8 = 0.0;
      }
      if (fVar8 < 0.0) {
        fVar8 = (float)FUN_18051af10();
      }
      else {
        fVar8 = SQRT(fVar8);
      }
      fVar2 = DAT_1808acda0;
      iVar4 = -1;
      iVar5 = (int)((fVar10 - fVar8) * fVar9 + DAT_1808ac1f4) << 0x18;
      do {
        local_res14 = fVar7 + fVar2;
        local_res10 = (float)iVar4 + fVar6;
        if ((iVar5 != 0) && (*param_5 != '\0')) {
          fVar9 = *(float *)(param_2 + 1);
          if (*param_2 == 0) {
            plVar3 = (longlong *)(*(longlong *)(param_1 + 0x38) + 0x18);
          }
          else {
            plVar3 = param_2;
          }
          if (fVar9 == 0.0) {
            fVar9 = *(float *)(*(longlong *)(param_1 + 0x38) + 0x20);
          }
          local_a0 = *(undefined8 *)(param_1 + 0x60);
          uStack_98 = *(undefined8 *)(param_1 + 0x68);
          FUN_18040a900(*plVar3,param_1,fVar9,&local_res10,iVar5,&local_a0,param_5,0,0,0);
        }
        if (((iVar4 == 0) || (local_res14 = fVar7 + 0.0, iVar5 == 0)) || (*param_5 == '\0')) {
          local_res14 = fVar7 + fVar10;
          if (iVar5 != 0) goto LAB_18003ae2e;
        }
        else {
          fVar9 = *(float *)(param_2 + 1);
          if (*param_2 == 0) {
            plVar3 = (longlong *)(*(longlong *)(param_1 + 0x38) + 0x18);
          }
          else {
            plVar3 = param_2;
          }
          if (fVar9 == 0.0) {
            fVar9 = *(float *)(*(longlong *)(param_1 + 0x38) + 0x20);
          }
          local_a0 = *(undefined8 *)(param_1 + 0x60);
          uStack_98 = *(undefined8 *)(param_1 + 0x68);
          FUN_18040a900(*plVar3,param_1,fVar9,&local_res10,iVar5,&local_a0,param_5,0,0,0);
LAB_18003ae2e:
          local_res14 = fVar7 + fVar10;
          if (*param_5 != '\0') {
            fVar9 = *(float *)(param_2 + 1);
            if (*param_2 == 0) {
              plVar3 = (longlong *)(*(longlong *)(param_1 + 0x38) + 0x18);
            }
            else {
              plVar3 = param_2;
            }
            if (fVar9 == 0.0) {
              fVar9 = *(float *)(*(longlong *)(param_1 + 0x38) + 0x20);
            }
            local_a0 = *(undefined8 *)(param_1 + 0x60);
            uStack_98 = *(undefined8 *)(param_1 + 0x68);
            FUN_18040a900(*plVar3,param_1,fVar9,&local_res10,iVar5,&local_a0,param_5,0,0,0);
          }
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < 2);
    }
    if (((param_4 & 0xff000000) != 0) && (*param_5 != '\0')) {
      fVar10 = *(float *)(param_2 + 1);
      if (*param_2 == 0) {
        param_2 = (longlong *)(*(longlong *)(param_1 + 0x38) + 0x18);
      }
      if (fVar10 == 0.0) {
        fVar10 = *(float *)(*(longlong *)(param_1 + 0x38) + 0x20);
      }
      local_a0 = *(undefined8 *)(param_1 + 0x60);
      uStack_98 = *(undefined8 *)(param_1 + 0x68);
      FUN_18040a900(*param_2,param_1,fVar10,&local_a8,param_4,&local_a0,param_5,0,0,0);
    }
  }
  return;
}



/* ===== 18003aff0 FUN_18003aff0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

char * FUN_18003aff0(char *param_1,int param_2)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 ****ppppuVar3;
  ulonglong uVar4;
  undefined8 ****ppppuVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [24];
  char *local_68;
  undefined8 ****local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStack_88;
  if (param_2 < 1) {
    param_1[0] = '\0';
    param_1[1] = '\0';
    param_1[2] = '\0';
    param_1[3] = '\0';
    param_1[4] = '\0';
    param_1[5] = '\0';
    param_1[6] = '\0';
    param_1[7] = '\0';
    param_1[8] = '\0';
    param_1[9] = '\0';
    param_1[10] = '\0';
    param_1[0xb] = '\0';
    param_1[0xc] = '\0';
    param_1[0xd] = '\0';
    param_1[0xe] = '\0';
    param_1[0xf] = '\0';
    param_1[0x10] = '\0';
    param_1[0x11] = '\0';
    param_1[0x12] = '\0';
    param_1[0x13] = '\0';
    param_1[0x14] = '\0';
    param_1[0x15] = '\0';
    param_1[0x16] = '\0';
    param_1[0x17] = '\0';
    param_1[0x18] = '\x0f';
    param_1[0x19] = '\0';
    param_1[0x1a] = '\0';
    param_1[0x1b] = '\0';
    param_1[0x1c] = '\0';
    param_1[0x1d] = '\0';
    param_1[0x1e] = '\0';
    param_1[0x1f] = '\0';
    *param_1 = '\0';
    puVar7 = auStack_88;
    goto LAB_18003b34b;
  }
  if (param_2 == 0x37) {
    param_1[0] = '\0';
    param_1[1] = '\0';
    param_1[2] = '\0';
    param_1[3] = '\0';
    param_1[4] = '\0';
    param_1[5] = '\0';
    param_1[6] = '\0';
    param_1[7] = '\0';
    param_1[8] = '\0';
    param_1[9] = '\0';
    param_1[10] = '\0';
    param_1[0xb] = '\0';
    param_1[0xc] = '\0';
    param_1[0xd] = '\0';
    param_1[0xe] = '\0';
    param_1[0xf] = '\0';
    param_1[0x10] = '\a';
    param_1[0x11] = '\0';
    param_1[0x12] = '\0';
    param_1[0x13] = '\0';
    param_1[0x14] = '\0';
    param_1[0x15] = '\0';
    param_1[0x16] = '\0';
    param_1[0x17] = '\0';
    param_1[0x18] = '\x0f';
    param_1[0x19] = '\0';
    param_1[0x1a] = '\0';
    param_1[0x1b] = '\0';
    param_1[0x1c] = '\0';
    param_1[0x1d] = '\0';
    param_1[0x1e] = '\0';
    param_1[0x1f] = '\0';
    *(undefined4 *)param_1 = s_defuser_18058b628._0_4_;
    *(undefined2 *)(param_1 + 4) = s_defuser_18058b628._4_2_;
    param_1[6] = s_defuser_18058b628[6];
    param_1[7] = '\0';
    puVar7 = auStack_88;
    goto LAB_18003b34b;
  }
  local_68 = param_1;
  lVar2 = FUN_180280c60(param_2);
  if (lVar2 == 0) {
LAB_18003b1a9:
    puVar6 = auStack_88;
    puVar7 = auStack_88;
    switch(param_2) {
    case 0x2b:
      goto switchD_18003b1cb_caseD_2b;
    case 0x2c:
      param_1[0] = '\0';
      param_1[1] = '\0';
      param_1[2] = '\0';
      param_1[3] = '\0';
      param_1[4] = '\0';
      param_1[5] = '\0';
      param_1[6] = '\0';
      param_1[7] = '\0';
      param_1[8] = '\0';
      param_1[9] = '\0';
      param_1[10] = '\0';
      param_1[0xb] = '\0';
      param_1[0xc] = '\0';
      param_1[0xd] = '\0';
      param_1[0xe] = '\0';
      param_1[0xf] = '\0';
      param_1[0x10] = '\t';
      param_1[0x11] = '\0';
      param_1[0x12] = '\0';
      param_1[0x13] = '\0';
      param_1[0x14] = '\0';
      param_1[0x15] = '\0';
      param_1[0x16] = '\0';
      param_1[0x17] = '\0';
      param_1[0x18] = '\x0f';
      param_1[0x19] = '\0';
      param_1[0x1a] = '\0';
      param_1[0x1b] = '\0';
      param_1[0x1c] = '\0';
      param_1[0x1d] = '\0';
      param_1[0x1e] = '\0';
      param_1[0x1f] = '\0';
      *(undefined8 *)param_1 = s_hegrenade_1806de600._0_8_;
      param_1[8] = s_hegrenade_1806de600[8];
      param_1[9] = '\0';
      break;
    case 0x2d:
      param_1[0] = '\0';
      param_1[1] = '\0';
      param_1[2] = '\0';
      param_1[3] = '\0';
      param_1[4] = '\0';
      param_1[5] = '\0';
      param_1[6] = '\0';
      param_1[7] = '\0';
      param_1[8] = '\0';
      param_1[9] = '\0';
      param_1[10] = '\0';
      param_1[0xb] = '\0';
      param_1[0xc] = '\0';
      param_1[0xd] = '\0';
      param_1[0xe] = '\0';
      param_1[0xf] = '\0';
      param_1[0x10] = '\f';
      param_1[0x11] = '\0';
      param_1[0x12] = '\0';
      param_1[0x13] = '\0';
      param_1[0x14] = '\0';
      param_1[0x15] = '\0';
      param_1[0x16] = '\0';
      param_1[0x17] = '\0';
      param_1[0x18] = '\x0f';
      param_1[0x19] = '\0';
      param_1[0x1a] = '\0';
      param_1[0x1b] = '\0';
      param_1[0x1c] = '\0';
      param_1[0x1d] = '\0';
      param_1[0x1e] = '\0';
      param_1[0x1f] = '\0';
      *(undefined8 *)param_1 = s_smokegrenade_1806de610._0_8_;
      *(undefined4 *)(param_1 + 8) = s_smokegrenade_1806de610._8_4_;
      param_1[0xc] = '\0';
      puVar7 = auStack_88;
      break;
    case 0x2e:
      param_1[0] = '\0';
      param_1[1] = '\0';
      param_1[2] = '\0';
      param_1[3] = '\0';
      param_1[4] = '\0';
      param_1[5] = '\0';
      param_1[6] = '\0';
      param_1[7] = '\0';
      param_1[8] = '\0';
      param_1[9] = '\0';
      param_1[10] = '\0';
      param_1[0xb] = '\0';
      param_1[0xc] = '\0';
      param_1[0xd] = '\0';
      param_1[0xe] = '\0';
      param_1[0xf] = '\0';
      param_1[0x10] = '\a';
      param_1[0x11] = '\0';
      param_1[0x12] = '\0';
      param_1[0x13] = '\0';
      param_1[0x14] = '\0';
      param_1[0x15] = '\0';
      param_1[0x16] = '\0';
      param_1[0x17] = '\0';
      param_1[0x18] = '\x0f';
      param_1[0x19] = '\0';
      param_1[0x1a] = '\0';
      param_1[0x1b] = '\0';
      param_1[0x1c] = '\0';
      param_1[0x1d] = '\0';
      param_1[0x1e] = '\0';
      param_1[0x1f] = '\0';
      *(undefined4 *)param_1 = s_molotov_1806de620._0_4_;
      *(undefined2 *)(param_1 + 4) = s_molotov_1806de620._4_2_;
      param_1[6] = s_molotov_1806de620[6];
      param_1[7] = '\0';
      puVar7 = auStack_88;
      break;
    case 0x2f:
      param_1[0] = '\0';
      param_1[1] = '\0';
      param_1[2] = '\0';
      param_1[3] = '\0';
      param_1[4] = '\0';
      param_1[5] = '\0';
      param_1[6] = '\0';
      param_1[7] = '\0';
      param_1[8] = '\0';
      param_1[9] = '\0';
      param_1[10] = '\0';
      param_1[0xb] = '\0';
      param_1[0xc] = '\0';
      param_1[0xd] = '\0';
      param_1[0xe] = '\0';
      param_1[0xf] = '\0';
      param_1[0x10] = '\x05';
      param_1[0x11] = '\0';
      param_1[0x12] = '\0';
      param_1[0x13] = '\0';
      param_1[0x14] = '\0';
      param_1[0x15] = '\0';
      param_1[0x16] = '\0';
      param_1[0x17] = '\0';
      param_1[0x18] = '\x0f';
      param_1[0x19] = '\0';
      param_1[0x1a] = '\0';
      param_1[0x1b] = '\0';
      param_1[0x1c] = '\0';
      param_1[0x1d] = '\0';
      param_1[0x1e] = '\0';
      param_1[0x1f] = '\0';
      *(undefined4 *)param_1 = DAT_1806de628;
      param_1[4] = DAT_1806de62c;
      param_1[5] = '\0';
      puVar7 = auStack_88;
      break;
    case 0x30:
      param_1[0] = '\0';
      param_1[1] = '\0';
      param_1[2] = '\0';
      param_1[3] = '\0';
      param_1[4] = '\0';
      param_1[5] = '\0';
      param_1[6] = '\0';
      param_1[7] = '\0';
      param_1[8] = '\0';
      param_1[9] = '\0';
      param_1[10] = '\0';
      param_1[0xb] = '\0';
      param_1[0xc] = '\0';
      param_1[0xd] = '\0';
      param_1[0xe] = '\0';
      param_1[0xf] = '\0';
      param_1[0x10] = '\n';
      param_1[0x11] = '\0';
      param_1[0x12] = '\0';
      param_1[0x13] = '\0';
      param_1[0x14] = '\0';
      param_1[0x15] = '\0';
      param_1[0x16] = '\0';
      param_1[0x17] = '\0';
      param_1[0x18] = '\x0f';
      param_1[0x19] = '\0';
      param_1[0x1a] = '\0';
      param_1[0x1b] = '\0';
      param_1[0x1c] = '\0';
      param_1[0x1d] = '\0';
      param_1[0x1e] = '\0';
      param_1[0x1f] = '\0';
      *(undefined8 *)param_1 = s_incgrenade_1806de630._0_8_;
      *(undefined2 *)(param_1 + 8) = s_incgrenade_1806de630._8_2_;
      param_1[10] = '\0';
      puVar7 = auStack_88;
      break;
    case 0x31:
      param_1[0] = '\0';
      param_1[1] = '\0';
      param_1[2] = '\0';
      param_1[3] = '\0';
      param_1[4] = '\0';
      param_1[5] = '\0';
      param_1[6] = '\0';
      param_1[7] = '\0';
      param_1[8] = '\0';
      param_1[9] = '\0';
      param_1[10] = '\0';
      param_1[0xb] = '\0';
      param_1[0xc] = '\0';
      param_1[0xd] = '\0';
      param_1[0xe] = '\0';
      param_1[0xf] = '\0';
      param_1[0x10] = '\x02';
      param_1[0x11] = '\0';
      param_1[0x12] = '\0';
      param_1[0x13] = '\0';
      param_1[0x14] = '\0';
      param_1[0x15] = '\0';
      param_1[0x16] = '\0';
      param_1[0x17] = '\0';
      param_1[0x18] = '\x0f';
      param_1[0x19] = '\0';
      param_1[0x1a] = '\0';
      param_1[0x1b] = '\0';
      param_1[0x1c] = '\0';
      param_1[0x1d] = '\0';
      param_1[0x1e] = '\0';
      param_1[0x1f] = '\0';
      *(undefined2 *)param_1 = DAT_1806de63c;
      param_1[2] = '\0';
      puVar7 = auStack_88;
      break;
    default:
      param_1[0] = '\0';
      param_1[1] = '\0';
      param_1[2] = '\0';
      param_1[3] = '\0';
      param_1[4] = '\0';
      param_1[5] = '\0';
      param_1[6] = '\0';
      param_1[7] = '\0';
      param_1[8] = '\0';
      param_1[9] = '\0';
      param_1[10] = '\0';
      param_1[0xb] = '\0';
      param_1[0xc] = '\0';
      param_1[0xd] = '\0';
      param_1[0xe] = '\0';
      param_1[0xf] = '\0';
      param_1[0x10] = '\0';
      param_1[0x11] = '\0';
      param_1[0x12] = '\0';
      param_1[0x13] = '\0';
      param_1[0x14] = '\0';
      param_1[0x15] = '\0';
      param_1[0x16] = '\0';
      param_1[0x17] = '\0';
      param_1[0x18] = '\x0f';
      param_1[0x19] = '\0';
      param_1[0x1a] = '\0';
      param_1[0x1b] = '\0';
      param_1[0x1c] = '\0';
      param_1[0x1d] = '\0';
      param_1[0x1e] = '\0';
      param_1[0x1f] = '\0';
      *param_1 = '\0';
      puVar7 = auStack_88;
    }
  }
  else {
    FUN_180024b50(&local_58,lVar2 + 8);
    ppppuVar5 = &local_58;
    if (0xf < uStack_40) {
      ppppuVar5 = local_58;
    }
    if (((local_48 < 7) ||
        (ppppuVar3 = (undefined8 ****)
                     thunk_FUN_1804e6890(ppppuVar5,(undefined8 ****)((longlong)ppppuVar5 + 7),
                                         "weapon_",7),
        ppppuVar3 == (undefined8 ****)((longlong)ppppuVar5 + 7))) || (ppppuVar3 != ppppuVar5)) {
      ppppuVar5 = &local_58;
      if (0xf < uStack_40) {
        ppppuVar5 = local_58;
      }
      if (((4 < local_48) &&
          (ppppuVar3 = (undefined8 ****)
                       thunk_FUN_1804e6890(ppppuVar5,(undefined8 ****)((longlong)ppppuVar5 + 5),
                                           "item_",5),
          ppppuVar3 != (undefined8 ****)((longlong)ppppuVar5 + 5))) && (ppppuVar3 == ppppuVar5)) {
        uVar4 = 5;
        goto LAB_18003b0e1;
      }
    }
    else {
      uVar4 = 7;
LAB_18003b0e1:
      if (local_48 < uVar4) {
        uVar4 = local_48;
      }
      ppppuVar5 = &local_58;
      if (0xf < uStack_40) {
        ppppuVar5 = local_58;
      }
      FUN_180540530(ppppuVar5,(longlong)ppppuVar5 + uVar4,(local_48 - uVar4) + 1);
      local_48 = local_48 - uVar4;
    }
    if (local_48 != 0) {
      *(undefined8 *****)param_1 = local_58;
      *(undefined8 *)(param_1 + 8) = uStack_50;
      *(ulonglong *)(param_1 + 0x10) = local_48;
      *(ulonglong *)(param_1 + 0x18) = uStack_40;
      puVar7 = auStack_88;
      goto LAB_18003b34b;
    }
    if (uStack_40 < 0x10) goto LAB_18003b1a9;
    uVar4 = uStack_40 + 1;
    ppppuVar5 = local_58;
    if (uVar4 < 0x1000) {
LAB_18003b1a4:
      thunk_FUN_1803d64e0(ppppuVar5,uVar4);
      goto LAB_18003b1a9;
    }
    ppppuVar5 = (undefined8 ****)local_58[-1];
    if ((ulonglong)((longlong)local_58 + (-8 - (longlong)ppppuVar5)) < 0x20) {
      uVar4 = uStack_40 + 0x28;
      goto LAB_18003b1a4;
    }
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar6 = auStack_80;
switchD_18003b1cb_caseD_2b:
    param_1[0] = '\0';
    param_1[1] = '\0';
    param_1[2] = '\0';
    param_1[3] = '\0';
    param_1[4] = '\0';
    param_1[5] = '\0';
    param_1[6] = '\0';
    param_1[7] = '\0';
    param_1[8] = '\0';
    param_1[9] = '\0';
    param_1[10] = '\0';
    param_1[0xb] = '\0';
    param_1[0xc] = '\0';
    param_1[0xd] = '\0';
    param_1[0xe] = '\0';
    param_1[0xf] = '\0';
    param_1[0x10] = '\t';
    param_1[0x11] = '\0';
    param_1[0x12] = '\0';
    param_1[0x13] = '\0';
    param_1[0x14] = '\0';
    param_1[0x15] = '\0';
    param_1[0x16] = '\0';
    param_1[0x17] = '\0';
    param_1[0x18] = '\x0f';
    param_1[0x19] = '\0';
    param_1[0x1a] = '\0';
    param_1[0x1b] = '\0';
    param_1[0x1c] = '\0';
    param_1[0x1d] = '\0';
    param_1[0x1e] = '\0';
    param_1[0x1f] = '\0';
    *(undefined8 *)param_1 = s_flashbang_1806de5f0._0_8_;
    param_1[8] = s_flashbang_1806de5f0[8];
    param_1[9] = '\0';
    puVar7 = puVar6;
  }
LAB_18003b34b:
  *(undefined8 *)(puVar7 + -8) = 0x18003b35a;
  return param_1;
}



/* ===== 18003b390 FUN_18003b390 ===== */

longlong * FUN_18003b390(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  char *_Str1;
  longlong local_res8;
  
  if (DAT_180ccf614 != 0) {
    iVar1 = FUN_180011200((ulonglong)DAT_180ccf614 + *param_2);
    if (iVar1 - 1U < 0xfffffffe) {
      FUN_1803a0940(&local_res8,iVar1);
      if (local_res8 != 0) {
        lVar2 = FUN_18000f3a0((ulonglong)DAT_180961968 + local_res8);
        if (lVar2 != 0) {
          lVar2 = FUN_18000f3a0((ulonglong)DAT_18096196c + lVar2);
          if (lVar2 != 0) {
            lVar2 = FUN_18000f3a0((ulonglong)DAT_180961970 + lVar2);
            if (lVar2 != 0) {
              _Str1 = (char *)FUN_18000f3a0((ulonglong)DAT_180961974 + lVar2);
              if (_Str1 + -0x10000 < (char *)0x7ffffffeffff) {
                iVar1 = strcmp(_Str1,"C_CSPlayerPawn");
                if (iVar1 == 0) {
                  *param_1 = local_res8;
                  return param_1;
                }
              }
            }
          }
        }
      }
    }
  }
  *param_1 = 0;
  return param_1;
}



/* ===== 18003b480 FUN_18003b480 ===== */

int FUN_18003b480(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  undefined1 local_res8 [8];
  
  lVar1 = *param_1;
  if (*(int *)((longlong)param_1 + 0xc) != 1) {
    if ((DAT_180ccf634 != 0) &&
       (cVar2 = FUN_180011220(lVar1 + (ulonglong)DAT_180ccf634), cVar2 != '\0')) {
      return 4;
    }
    if ((DAT_180ccf638 == 0) ||
       (cVar2 = FUN_180011220(lVar1 + (ulonglong)DAT_180ccf638), cVar2 == '\0')) {
      plVar3 = (longlong *)FUN_18003b390(local_res8,param_1);
      return 2 - (uint)(*plVar3 != 0);
    }
    return 3;
  }
  if ((DAT_180ccf64c != 0) &&
     (cVar2 = FUN_180011220(lVar1 + (ulonglong)DAT_180ccf64c), cVar2 != '\0')) {
    return 6;
  }
  if ((DAT_180ccf648 != 0) &&
     (cVar2 = FUN_180011220(lVar1 + (ulonglong)DAT_180ccf648), cVar2 != '\0')) {
    return 7;
  }
  if ((((DAT_180ccf640 == 0) ||
       (cVar2 = FUN_180011220(lVar1 + (ulonglong)DAT_180ccf640), cVar2 == '\0')) ||
      (DAT_180ccf644 == 0)) ||
     (cVar2 = FUN_180011220(lVar1 + (ulonglong)DAT_180ccf644), cVar2 == '\0')) {
    return 0;
  }
  if ((DAT_180ccf650 == 0) ||
     (cVar2 = FUN_180011220(lVar1 + (ulonglong)DAT_180ccf650), cVar2 == '\0')) {
    return 4;
  }
  return 5;
}



/* ===== 18003b5b0 FUN_18003b5b0 ===== */

undefined4 * FUN_18003b5b0(undefined4 *param_1,longlong *param_2)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  char *pcVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  ulonglong *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  longlong local_res8;
  undefined1 auStack_f8 [8];
  undefined1 auStack_f0 [24];
  ulonglong *local_d8;
  undefined6 local_d0;
  undefined2 uStack_ca;
  longlong local_c8;
  ulonglong *local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined8 local_a4;
  undefined8 uStack_9c;
  undefined8 local_94;
  undefined8 uStack_8c;
  undefined1 local_84;
  undefined4 local_80;
  undefined1 local_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined2 local_68;
  undefined8 local_64;
  undefined4 local_5c;
  undefined1 local_58;
  undefined8 local_54;
  undefined8 local_4c;
  undefined4 local_44;
  
  fVar14 = 0.0;
  if ((DAT_180961a50 == 0) || (lVar5 = FUN_18000f3a0(), lVar5 == 0)) {
    uVar13 = 0;
  }
  else {
    uVar13 = FUN_18000f3d0(lVar5 + 0x30);
  }
  if (7 < *(uint *)((longlong)param_2 + 0xc)) goto switchD_18003b631_caseD_4;
  lVar5 = *param_2;
  switch(*(uint *)((longlong)param_2 + 0xc)) {
  case 0:
    iVar3 = FUN_18003b480(param_2);
    if (iVar3 == 3) {
      if (DAT_180ccf63c != 0) {
        fVar14 = (float)FUN_18000f3d0(lVar5 + (ulonglong)DAT_180ccf63c);
      }
      *param_1 = uVar13;
      fVar15 = fVar14 - DAT_1808ac658;
      param_1[2] = fVar14;
      *(undefined2 *)(param_1 + 3) = 0x101;
      param_1[1] = fVar15;
      goto LAB_18003b91f;
    }
    break;
  case 1:
    if (DAT_180ccf654 == 0) {
      fVar15 = 0.0;
    }
    else {
      fVar15 = (float)FUN_18000f3d0(lVar5 + (ulonglong)DAT_180ccf654);
    }
    if (DAT_180ccf658 != 0) {
      fVar14 = (float)FUN_18000f3d0(lVar5 + (ulonglong)DAT_180ccf658);
    }
    *param_1 = uVar13;
    param_1[2] = fVar15;
    *(undefined2 *)(param_1 + 3) = 0x100;
    param_1[1] = fVar15 - fVar14;
    goto LAB_18003b91f;
  case 2:
    for (puVar9 = DAT_180ccf740; puVar9 != DAT_180ccf748; puVar9 = puVar9 + 0xf) {
      if (*(int *)((longlong)puVar9 + 0xc) == 1) {
        puVar10 = (ulonglong *)*puVar9;
        goto LAB_18003b837;
      }
    }
    FUN_1803a09f0(&local_d8);
    puVar11 = auStack_f8;
    puVar12 = auStack_f8;
    puVar7 = (ulonglong *)CONCAT26(uStack_ca,local_d0);
    puVar10 = local_d8;
    if (local_d8 == puVar7) {
LAB_18003b79d:
      if (local_d8 != (ulonglong *)0x0) {
        puVar7 = local_d8;
        if ((ulonglong)((local_c8 - (longlong)local_d8 >> 3) * 8) < 0x1000) {
LAB_18003b909:
          puVar12 = puVar11;
        }
        else {
          puVar7 = (ulonglong *)local_d8[-1];
          puVar10 = (ulonglong *)((longlong)local_d8 + (-8 - (longlong)puVar7));
          if (&DAT_0000001f < puVar10) {
LAB_18003b902:
            pcVar1 = (code *)swi(0x29);
            (*pcVar1)(5);
            puVar11 = auStack_f0;
            puVar7 = puVar10;
            goto LAB_18003b909;
          }
        }
        *(undefined8 *)(puVar12 + -8) = 0x18003b911;
        thunk_FUN_1803d64e0(puVar7);
      }
    }
    else {
      while ((pcVar6 = (char *)FUN_1803a0710(puVar10), pcVar6 == (char *)0x0 ||
             (iVar3 = strcmp(pcVar6,"C_PlantedC4"), iVar3 != 0))) {
        puVar10 = puVar10 + 1;
        if (puVar10 == puVar7) goto LAB_18003b79d;
      }
      puVar10 = (ulonglong *)*puVar10;
      if (local_d8 == (ulonglong *)0x0) goto LAB_18003b837;
      uVar8 = (local_c8 - (longlong)local_d8 >> 3) * 8;
      if (0xfff < uVar8) {
        if ((undefined1 *)0x1f < (undefined1 *)((longlong)local_d8 + (-8 - (longlong)local_d8[-1])))
        goto LAB_18003b902;
        uVar8 = uVar8 + 0x27;
        local_d8 = (ulonglong *)local_d8[-1];
      }
      thunk_FUN_1803d64e0(local_d8,uVar8);
LAB_18003b837:
      if (puVar10 != (ulonglong *)0x0) {
        local_a8 = 1;
        local_b0 = 0;
        local_84 = 0;
        local_7c = 0;
        local_78 = 0;
        uStack_70 = 0;
        local_a4 = 0;
        uStack_9c = 0;
        local_68 = 0;
        local_94 = 0;
        uStack_8c = 0;
        local_58 = 0;
        local_54 = 0;
        local_4c = 0;
        local_44 = 0;
        local_80 = 0x3f800000;
        local_64 = 0x3f800000;
        local_5c = 0xffffffff;
        local_ac = 1;
        local_b8 = puVar10;
        iVar3 = FUN_18003b480(&local_b8);
        if (iVar3 == 5) {
          if (DAT_180ccf65c == 0) {
            fVar15 = 0.0;
          }
          else {
            fVar15 = (float)FUN_18000f3d0((undefined1 *)
                                          ((longlong)puVar10 + (ulonglong)DAT_180ccf65c));
          }
          if (DAT_180ccf660 != 0) {
            fVar14 = (float)FUN_18000f3d0((undefined1 *)
                                          ((longlong)puVar10 + (ulonglong)DAT_180ccf660));
          }
          *param_1 = uVar13;
          param_1[2] = fVar15;
          *(undefined2 *)(param_1 + 3) = 0x101;
          param_1[1] = fVar15 - fVar14;
          goto LAB_18003b91f;
        }
        *param_1 = uVar13;
        goto LAB_18003b917;
      }
    }
    break;
  case 3:
    if ((((DAT_180ccf670 != 0) &&
         (iVar3 = FUN_180011200(lVar5 + (ulonglong)DAT_180ccf670), iVar3 - 1U < 0xfffffffe)) &&
        (((FUN_1803a0940(&local_res8,iVar3), local_res8 != 0 &&
          (((lVar5 = FUN_18000f3a0((ulonglong)DAT_180961968 + local_res8), lVar5 != 0 &&
            (lVar5 = FUN_18000f3a0((ulonglong)DAT_18096196c + lVar5), lVar5 != 0)) &&
           (lVar5 = FUN_18000f3a0((ulonglong)DAT_180961970 + lVar5), lVar5 != 0)))) &&
         ((pcVar6 = (char *)FUN_18000f3a0((ulonglong)DAT_180961974 + lVar5),
          pcVar6 + -0x10000 < (char *)0x7ffffffeffff &&
          (iVar3 = strcmp(pcVar6,"C_CSPlayerPawn"), iVar3 == 0)))))) &&
       ((DAT_180ccf678 != 0 &&
        (cVar2 = FUN_180011220(local_res8 + (ulonglong)DAT_180ccf678), cVar2 != '\0')))) {
      if (DAT_180ccf680 != 0) {
        fVar14 = (float)FUN_18000f3d0(local_res8 + (ulonglong)DAT_180ccf680);
      }
      if (DAT_180ccf684 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = FUN_180011200(local_res8 + (ulonglong)DAT_180ccf684);
      }
      *(undefined2 *)(param_1 + 3) = 0x101;
      *param_1 = uVar13;
      param_1[1] = fVar14;
      param_1[2] = (float)iVar3 + fVar14;
      goto LAB_18003b91f;
    }
    break;
  case 6:
    pcVar6 = (char *)FUN_1803a0710(param_2);
    if (((pcVar6 == (char *)0x0) || (iVar3 = strcmp(pcVar6,"C_SmokeGrenadeProjectile"), iVar3 != 0))
       || (DAT_180ccf6b0 == 0)) break;
    iVar3 = FUN_180011200(lVar5 + (ulonglong)DAT_180ccf6b0);
    *param_1 = uVar13;
    if (0 < iVar3) {
      *(undefined2 *)(param_1 + 3) = 0x100;
      fVar14 = (float)iVar3 * DAT_1808ac00c;
      param_1[1] = fVar14;
      param_1[2] = fVar14 + DAT_1808ac964;
      goto LAB_18003b91f;
    }
    goto LAB_18003b917;
  case 7:
    if ((((DAT_180ccf6bc != 0) &&
         (iVar3 = FUN_180011200(lVar5 + (ulonglong)DAT_180ccf6bc), 0 < iVar3)) &&
        (DAT_180ccf6c4 != 0)) &&
       (iVar4 = FUN_180011200((ulonglong)DAT_180ccf6c4 + lVar5), 0 < iVar4)) {
      fVar15 = (float)iVar3 * DAT_1808ac00c;
      if (DAT_180ccf6c0 != 0) {
        fVar14 = (float)FUN_18000f3d0(lVar5 + (ulonglong)DAT_180ccf6c0);
      }
      *param_1 = uVar13;
      param_1[1] = fVar15;
      *(undefined2 *)(param_1 + 3) = 0x100;
      param_1[2] = fVar14 + fVar15;
      goto LAB_18003b91f;
    }
  }
switchD_18003b631_caseD_4:
  *param_1 = uVar13;
LAB_18003b917:
  *(undefined2 *)(param_1 + 3) = 0;
  *(undefined8 *)(param_1 + 1) = 0;
LAB_18003b91f:
  *(undefined2 *)((longlong)param_1 + 0xe) = uStack_ca;
  return param_1;
}



/* ===== 18003bb50 FUN_18003bb50 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

char * FUN_18003bb50(char *param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 ******ppppppuVar5;
  undefined8 ******ppppppuVar6;
  size_t _Size;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  undefined1 auStack_88 [40];
  char *local_60;
  undefined8 ******local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStack_88;
  uVar1 = *(uint *)(param_2 + 0xc);
  if (uVar1 == 3) {
    param_1[0] = '\0';
    param_1[1] = '\0';
    param_1[2] = '\0';
    param_1[3] = '\0';
    param_1[4] = '\0';
    param_1[5] = '\0';
    param_1[6] = '\0';
    param_1[7] = '\0';
    param_1[8] = '\0';
    param_1[9] = '\0';
    param_1[10] = '\0';
    param_1[0xb] = '\0';
    param_1[0xc] = '\0';
    param_1[0xd] = '\0';
    param_1[0xe] = '\0';
    param_1[0xf] = '\0';
    param_1[0x10] = '\a';
    param_1[0x11] = '\0';
    param_1[0x12] = '\0';
    param_1[0x13] = '\0';
    param_1[0x14] = '\0';
    param_1[0x15] = '\0';
    param_1[0x16] = '\0';
    param_1[0x17] = '\0';
    param_1[0x18] = '\x0f';
    param_1[0x19] = '\0';
    param_1[0x1a] = '\0';
    param_1[0x1b] = '\0';
    param_1[0x1c] = '\0';
    param_1[0x1d] = '\0';
    param_1[0x1e] = '\0';
    param_1[0x1f] = '\0';
    *(undefined4 *)param_1 = s_Hostage_1806de640._0_4_;
    *(undefined2 *)(param_1 + 4) = s_Hostage_1806de640._4_2_;
    param_1[6] = s_Hostage_1806de640[6];
    param_1[7] = '\0';
    return param_1;
  }
  if (uVar1 == 2) {
    param_1[0] = '\0';
    param_1[1] = '\0';
    param_1[2] = '\0';
    param_1[3] = '\0';
    param_1[4] = '\0';
    param_1[5] = '\0';
    param_1[6] = '\0';
    param_1[7] = '\0';
    param_1[8] = '\0';
    param_1[9] = '\0';
    param_1[10] = '\0';
    param_1[0xb] = '\0';
    param_1[0xc] = '\0';
    param_1[0xd] = '\0';
    param_1[0xe] = '\0';
    param_1[0xf] = '\0';
    param_1[0x10] = '\b';
    param_1[0x11] = '\0';
    param_1[0x12] = '\0';
    param_1[0x13] = '\0';
    param_1[0x14] = '\0';
    param_1[0x15] = '\0';
    param_1[0x16] = '\0';
    param_1[0x17] = '\0';
    param_1[0x18] = '\x0f';
    param_1[0x19] = '\0';
    param_1[0x1a] = '\0';
    param_1[0x1b] = '\0';
    param_1[0x1c] = '\0';
    param_1[0x1d] = '\0';
    param_1[0x1e] = '\0';
    param_1[0x1f] = '\0';
    *(undefined8 *)param_1 = s_Defusing_1806de648._0_8_;
    param_1[8] = '\0';
    return param_1;
  }
  iVar2 = *(int *)(param_2 + 0x58);
  if (iVar2 == 0) {
    param_1[0] = '\0';
    param_1[1] = '\0';
    param_1[2] = '\0';
    param_1[3] = '\0';
    param_1[4] = '\0';
    param_1[5] = '\0';
    param_1[6] = '\0';
    param_1[7] = '\0';
    param_1[8] = '\0';
    param_1[9] = '\0';
    param_1[10] = '\0';
    param_1[0xb] = '\0';
    param_1[0xc] = '\0';
    param_1[0xd] = '\0';
    param_1[0xe] = '\0';
    param_1[0xf] = '\0';
    param_1[0x10] = '\0';
    param_1[0x11] = '\0';
    param_1[0x12] = '\0';
    param_1[0x13] = '\0';
    param_1[0x14] = '\0';
    param_1[0x15] = '\0';
    param_1[0x16] = '\0';
    param_1[0x17] = '\0';
    param_1[0x18] = '\x0f';
    param_1[0x19] = '\0';
    param_1[0x1a] = '\0';
    param_1[0x1b] = '\0';
    param_1[0x1c] = '\0';
    param_1[0x1d] = '\0';
    param_1[0x1e] = '\0';
    param_1[0x1f] = '\0';
    *param_1 = '\0';
    return param_1;
  }
  if (((uVar1 - 6 < 2) || (uVar1 < 2)) && (iVar2 < 0x232)) {
    if (iVar2 == 0x231) {
switchD_18003bc5a_caseD_2e:
      param_1[0] = '\0';
      param_1[1] = '\0';
      param_1[2] = '\0';
      param_1[3] = '\0';
      param_1[4] = '\0';
      param_1[5] = '\0';
      param_1[6] = '\0';
      param_1[7] = '\0';
      param_1[8] = '\0';
      param_1[9] = '\0';
      param_1[10] = '\0';
      param_1[0xb] = '\0';
      param_1[0xc] = '\0';
      param_1[0xd] = '\0';
      param_1[0xe] = '\0';
      param_1[0xf] = '\0';
      param_1[0x10] = '\x05';
      param_1[0x11] = '\0';
      param_1[0x12] = '\0';
      param_1[0x13] = '\0';
      param_1[0x14] = '\0';
      param_1[0x15] = '\0';
      param_1[0x16] = '\0';
      param_1[0x17] = '\0';
      param_1[0x18] = '\x0f';
      param_1[0x19] = '\0';
      param_1[0x1a] = '\0';
      param_1[0x1b] = '\0';
      param_1[0x1c] = '\0';
      param_1[0x1d] = '\0';
      param_1[0x1e] = '\0';
      param_1[0x1f] = '\0';
      *(undefined4 *)param_1 = s_Molly_1806de66c._0_4_;
      param_1[4] = s_Molly_1806de66c[4];
      param_1[5] = '\0';
      return param_1;
    }
    switch(iVar2) {
    case 0x2b:
      param_1[0] = '\0';
      param_1[1] = '\0';
      param_1[2] = '\0';
      param_1[3] = '\0';
      param_1[4] = '\0';
      param_1[5] = '\0';
      param_1[6] = '\0';
      param_1[7] = '\0';
      param_1[8] = '\0';
      param_1[9] = '\0';
      param_1[10] = '\0';
      param_1[0xb] = '\0';
      param_1[0xc] = '\0';
      param_1[0xd] = '\0';
      param_1[0xe] = '\0';
      param_1[0xf] = '\0';
      param_1[0x10] = '\x05';
      param_1[0x11] = '\0';
      param_1[0x12] = '\0';
      param_1[0x13] = '\0';
      param_1[0x14] = '\0';
      param_1[0x15] = '\0';
      param_1[0x16] = '\0';
      param_1[0x17] = '\0';
      param_1[0x18] = '\x0f';
      param_1[0x19] = '\0';
      param_1[0x1a] = '\0';
      param_1[0x1b] = '\0';
      param_1[0x1c] = '\0';
      param_1[0x1d] = '\0';
      param_1[0x1e] = '\0';
      param_1[0x1f] = '\0';
      *(undefined4 *)param_1 = s_Flash_1806de654._0_4_;
      param_1[4] = s_Flash_1806de654[4];
      param_1[5] = '\0';
      return param_1;
    case 0x2c:
      param_1[0] = '\0';
      param_1[1] = '\0';
      param_1[2] = '\0';
      param_1[3] = '\0';
      param_1[4] = '\0';
      param_1[5] = '\0';
      param_1[6] = '\0';
      param_1[7] = '\0';
      param_1[8] = '\0';
      param_1[9] = '\0';
      param_1[10] = '\0';
      param_1[0xb] = '\0';
      param_1[0xc] = '\0';
      param_1[0xd] = '\0';
      param_1[0xe] = '\0';
      param_1[0xf] = '\0';
      param_1[0x10] = '\x04';
      param_1[0x11] = '\0';
      param_1[0x12] = '\0';
      param_1[0x13] = '\0';
      param_1[0x14] = '\0';
      param_1[0x15] = '\0';
      param_1[0x16] = '\0';
      param_1[0x17] = '\0';
      param_1[0x18] = '\x0f';
      param_1[0x19] = '\0';
      param_1[0x1a] = '\0';
      param_1[0x1b] = '\0';
      param_1[0x1c] = '\0';
      param_1[0x1d] = '\0';
      param_1[0x1e] = '\0';
      param_1[0x1f] = '\0';
      *(undefined4 *)param_1 = DAT_1806de65c;
      param_1[4] = '\0';
      return param_1;
    case 0x2d:
      param_1[0] = '\0';
      param_1[1] = '\0';
      param_1[2] = '\0';
      param_1[3] = '\0';
      param_1[4] = '\0';
      param_1[5] = '\0';
      param_1[6] = '\0';
      param_1[7] = '\0';
      param_1[8] = '\0';
      param_1[9] = '\0';
      param_1[10] = '\0';
      param_1[0xb] = '\0';
      param_1[0xc] = '\0';
      param_1[0xd] = '\0';
      param_1[0xe] = '\0';
      param_1[0xf] = '\0';
      param_1[0x10] = '\x05';
      param_1[0x11] = '\0';
      param_1[0x12] = '\0';
      param_1[0x13] = '\0';
      param_1[0x14] = '\0';
      param_1[0x15] = '\0';
      param_1[0x16] = '\0';
      param_1[0x17] = '\0';
      param_1[0x18] = '\x0f';
      param_1[0x19] = '\0';
      param_1[0x1a] = '\0';
      param_1[0x1b] = '\0';
      param_1[0x1c] = '\0';
      param_1[0x1d] = '\0';
      param_1[0x1e] = '\0';
      param_1[0x1f] = '\0';
      *(undefined4 *)param_1 = DAT_1806de664;
      param_1[4] = DAT_1806de668;
      param_1[5] = '\0';
      return param_1;
    case 0x2e:
    case 0x30:
      goto switchD_18003bc5a_caseD_2e;
    case 0x2f:
      param_1[0] = '\0';
      param_1[1] = '\0';
      param_1[2] = '\0';
      param_1[3] = '\0';
      param_1[4] = '\0';
      param_1[5] = '\0';
      param_1[6] = '\0';
      param_1[7] = '\0';
      param_1[8] = '\0';
      param_1[9] = '\0';
      param_1[10] = '\0';
      param_1[0xb] = '\0';
      param_1[0xc] = '\0';
      param_1[0xd] = '\0';
      param_1[0xe] = '\0';
      param_1[0xf] = '\0';
      param_1[0x10] = '\x05';
      param_1[0x11] = '\0';
      param_1[0x12] = '\0';
      param_1[0x13] = '\0';
      param_1[0x14] = '\0';
      param_1[0x15] = '\0';
      param_1[0x16] = '\0';
      param_1[0x17] = '\0';
      param_1[0x18] = '\x0f';
      param_1[0x19] = '\0';
      param_1[0x1a] = '\0';
      param_1[0x1b] = '\0';
      param_1[0x1c] = '\0';
      param_1[0x1d] = '\0';
      param_1[0x1e] = '\0';
      param_1[0x1f] = '\0';
      *(undefined4 *)param_1 = DAT_1806de674;
      param_1[4] = DAT_1806de678;
      param_1[5] = '\0';
      return param_1;
    case 0x31:
      param_1[0] = '\0';
      param_1[1] = '\0';
      param_1[2] = '\0';
      param_1[3] = '\0';
      param_1[4] = '\0';
      param_1[5] = '\0';
      param_1[6] = '\0';
      param_1[7] = '\0';
      param_1[8] = '\0';
      param_1[9] = '\0';
      param_1[10] = '\0';
      param_1[0xb] = '\0';
      param_1[0xc] = '\0';
      param_1[0xd] = '\0';
      param_1[0xe] = '\0';
      param_1[0xf] = '\0';
      param_1[0x10] = '\x04';
      param_1[0x11] = '\0';
      param_1[0x12] = '\0';
      param_1[0x13] = '\0';
      param_1[0x14] = '\0';
      param_1[0x15] = '\0';
      param_1[0x16] = '\0';
      param_1[0x17] = '\0';
      param_1[0x18] = '\x0f';
      param_1[0x19] = '\0';
      param_1[0x1a] = '\0';
      param_1[0x1b] = '\0';
      param_1[0x1c] = '\0';
      param_1[0x1d] = '\0';
      param_1[0x1e] = '\0';
      param_1[0x1f] = '\0';
      *(undefined4 *)param_1 = DAT_1806de67c;
      param_1[4] = '\0';
      return param_1;
    }
  }
  local_60 = param_1;
  lVar3 = FUN_180280c60(iVar2);
  local_48 = 0;
  local_58 = (undefined8 ******)0x0;
  uStack_50 = 0;
  if (lVar3 == 0) {
    local_58 = (undefined8 ******)0x0;
  }
  else {
    puVar9 = (undefined8 *)(lVar3 + 0x28);
    uStack_40 = 0;
    uVar7 = *(ulonglong *)(lVar3 + 0x38);
    if (0xf < *(ulonglong *)(lVar3 + 0x40)) {
      puVar9 = (undefined8 *)*puVar9;
    }
    if (0x7fffffffffffffff < uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_180011990();
    }
    if (0xf < uVar7) {
      uVar4 = uVar7 | 0xf;
      uVar8 = 0x7fffffffffffffff;
      if ((uVar4 < 0x8000000000000000) && (uVar8 = uVar4, uVar4 < 0x16)) {
        uVar8 = 0x16;
      }
      ppppppuVar5 = (undefined8 ******)FUN_18000fb70(uVar8 + 1);
      local_58 = ppppppuVar5;
      local_48 = uVar7;
      uStack_40 = uVar8;
      FUN_180540530(ppppppuVar5,puVar9,uVar7 + 1);
      goto LAB_18003be36;
    }
    local_58 = (undefined8 ******)*puVar9;
    uStack_50 = puVar9[1];
    local_48 = uVar7;
  }
  uVar8 = 0xf;
  uStack_40 = 0xf;
  uVar7 = local_48;
  ppppppuVar5 = local_58;
LAB_18003be36:
  _Size = 4;
  if (uVar7 < 4) {
    _Size = uVar7;
  }
  ppppppuVar6 = &local_58;
  if (0xf < uVar8) {
    ppppppuVar6 = ppppppuVar5;
  }
  iVar2 = memcmp(ppppppuVar6,&DAT_1806de684,_Size);
  if ((iVar2 == 0) && (3 < _Size)) {
    ppppppuVar6 = &local_58;
    if (0xf < uVar8) {
      ppppppuVar6 = ppppppuVar5;
    }
    FUN_180540530(ppppppuVar6,(longlong)ppppppuVar6 + _Size,(uVar7 - _Size) + 1);
    local_48 = uVar7 - _Size;
  }
  *(undefined8 *******)param_1 = local_58;
  *(undefined8 *)(param_1 + 8) = uStack_50;
  *(ulonglong *)(param_1 + 0x10) = local_48;
  *(ulonglong *)(param_1 + 0x18) = uStack_40;
  return param_1;
}



/* ===== 18003bef0 FUN_18003bef0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

char * FUN_18003bef0(char *param_1,longlong param_2)

{
  undefined4 uVar1;
  int iVar2;
  float *pfVar3;
  size_t sVar4;
  float fVar5;
  float fVar6;
  undefined1 auStack_68 [40];
  char *local_40 [2];
  char local_30 [32];
  ulonglong local_10;
  
  local_10 = DAT_180919500 ^ (ulonglong)auStack_68;
  local_40[0] = param_1;
  if (*(int *)(param_2 + 0xc) == 1) {
    iVar2 = FUN_18003b480(param_2);
    uVar1 = s_Defused_1806de690._0_4_;
    if (iVar2 == 6) {
      param_1[0] = '\0';
      param_1[1] = '\0';
      param_1[2] = '\0';
      param_1[3] = '\0';
      param_1[4] = '\0';
      param_1[5] = '\0';
      param_1[6] = '\0';
      param_1[7] = '\0';
      param_1[8] = '\0';
      param_1[9] = '\0';
      param_1[10] = '\0';
      param_1[0xb] = '\0';
      param_1[0xc] = '\0';
      param_1[0xd] = '\0';
      param_1[0xe] = '\0';
      param_1[0xf] = '\0';
      param_1[0x10] = '\a';
      param_1[0x11] = '\0';
      param_1[0x12] = '\0';
      param_1[0x13] = '\0';
      param_1[0x14] = '\0';
      param_1[0x15] = '\0';
      param_1[0x16] = '\0';
      param_1[0x17] = '\0';
      param_1[0x18] = '\x0f';
      param_1[0x19] = '\0';
      param_1[0x1a] = '\0';
      param_1[0x1b] = '\0';
      param_1[0x1c] = '\0';
      param_1[0x1d] = '\0';
      param_1[0x1e] = '\0';
      param_1[0x1f] = '\0';
      *(undefined4 *)param_1 = uVar1;
      *(undefined2 *)(param_1 + 4) = s_Defused_1806de690._4_2_;
      param_1[6] = s_Defused_1806de690[6];
      param_1[7] = '\0';
      return param_1;
    }
    if (iVar2 == 7) {
      param_1[0] = '\0';
      param_1[1] = '\0';
      param_1[2] = '\0';
      param_1[3] = '\0';
      param_1[4] = '\0';
      param_1[5] = '\0';
      param_1[6] = '\0';
      param_1[7] = '\0';
      param_1[8] = '\0';
      param_1[9] = '\0';
      param_1[10] = '\0';
      param_1[0xb] = '\0';
      param_1[0xc] = '\0';
      param_1[0xd] = '\0';
      param_1[0xe] = '\0';
      param_1[0xf] = '\0';
      param_1[0x10] = '\b';
      param_1[0x11] = '\0';
      param_1[0x12] = '\0';
      param_1[0x13] = '\0';
      param_1[0x14] = '\0';
      param_1[0x15] = '\0';
      param_1[0x16] = '\0';
      param_1[0x17] = '\0';
      param_1[0x18] = '\x0f';
      param_1[0x19] = '\0';
      param_1[0x1a] = '\0';
      param_1[0x1b] = '\0';
      param_1[0x1c] = '\0';
      param_1[0x1d] = '\0';
      param_1[0x1e] = '\0';
      param_1[0x1f] = '\0';
      param_1[0] = 'E';
      param_1[1] = 'x';
      param_1[2] = 'p';
      param_1[3] = 'l';
      param_1[4] = 'o';
      param_1[5] = 'd';
      param_1[6] = 'e';
      param_1[7] = 'd';
      param_1[8] = '\0';
      return param_1;
    }
  }
  pfVar3 = (float *)FUN_18003b5b0(local_40,param_2);
  if (((*(char *)((longlong)pfVar3 + 0xd) == '\0') || (fVar6 = *pfVar3, fVar6 < pfVar3[1])) ||
     (pfVar3[2] <= fVar6)) {
    param_1[0] = '\0';
    param_1[1] = '\0';
    param_1[2] = '\0';
    param_1[3] = '\0';
    param_1[4] = '\0';
    param_1[5] = '\0';
    param_1[6] = '\0';
    param_1[7] = '\0';
    param_1[8] = '\0';
    param_1[9] = '\0';
    param_1[10] = '\0';
    param_1[0xb] = '\0';
    param_1[0xc] = '\0';
    param_1[0xd] = '\0';
    param_1[0xe] = '\0';
    param_1[0xf] = '\0';
    param_1[0x10] = '\0';
    param_1[0x11] = '\0';
    param_1[0x12] = '\0';
    param_1[0x13] = '\0';
    param_1[0x14] = '\0';
    param_1[0x15] = '\0';
    param_1[0x16] = '\0';
    param_1[0x17] = '\0';
    param_1[0x18] = '\x0f';
    param_1[0x19] = '\0';
    param_1[0x1a] = '\0';
    param_1[0x1b] = '\0';
    param_1[0x1c] = '\0';
    param_1[0x1d] = '\0';
    param_1[0x1e] = '\0';
    param_1[0x1f] = '\0';
    *param_1 = '\0';
  }
  else {
    fVar6 = pfVar3[2] - fVar6;
    local_30[0] = '\0';
    local_30[1] = '\0';
    local_30[2] = '\0';
    local_30[3] = '\0';
    local_30[4] = '\0';
    local_30[5] = '\0';
    local_30[6] = '\0';
    local_30[7] = '\0';
    local_30[8] = '\0';
    local_30[9] = '\0';
    local_30[10] = '\0';
    local_30[0xb] = '\0';
    local_30[0xc] = '\0';
    local_30[0xd] = '\0';
    local_30[0xe] = '\0';
    local_30[0xf] = '\0';
    local_30[0x10] = '\0';
    local_30[0x11] = '\0';
    local_30[0x12] = '\0';
    local_30[0x13] = '\0';
    local_30[0x14] = '\0';
    local_30[0x15] = '\0';
    local_30[0x16] = '\0';
    local_30[0x17] = '\0';
    local_30[0x18] = '\0';
    local_30[0x19] = '\0';
    local_30[0x1a] = '\0';
    local_30[0x1b] = '\0';
    local_30[0x1c] = '\0';
    local_30[0x1d] = '\0';
    local_30[0x1e] = '\0';
    local_30[0x1f] = '\0';
    fVar5 = 0.0;
    if (0.0 <= fVar6) {
      fVar5 = fVar6;
    }
    snprintf(local_30,0x20,"%.1f s",(double)fVar5);
    param_1[0] = '\0';
    param_1[1] = '\0';
    param_1[2] = '\0';
    param_1[3] = '\0';
    param_1[4] = '\0';
    param_1[5] = '\0';
    param_1[6] = '\0';
    param_1[7] = '\0';
    param_1[8] = '\0';
    param_1[9] = '\0';
    param_1[10] = '\0';
    param_1[0xb] = '\0';
    param_1[0xc] = '\0';
    param_1[0xd] = '\0';
    param_1[0xe] = '\0';
    param_1[0xf] = '\0';
    param_1[0x10] = '\0';
    param_1[0x11] = '\0';
    param_1[0x12] = '\0';
    param_1[0x13] = '\0';
    param_1[0x14] = '\0';
    param_1[0x15] = '\0';
    param_1[0x16] = '\0';
    param_1[0x17] = '\0';
    param_1[0x18] = '\0';
    param_1[0x19] = '\0';
    param_1[0x1a] = '\0';
    param_1[0x1b] = '\0';
    param_1[0x1c] = '\0';
    param_1[0x1d] = '\0';
    param_1[0x1e] = '\0';
    param_1[0x1f] = '\0';
    sVar4 = strlen(local_30);
    FUN_1800133a0(param_1,local_30,sVar4);
  }
  return param_1;
}



/* ===== 18003c060 FUN_18003c060 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_18003c060(undefined8 param_1,float *param_2,undefined8 param_3)

{
  float *pfVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auStack_58 [32];
  undefined1 local_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_58;
  pfVar1 = (float *)FUN_18003b5b0(local_38,param_1);
  if (*(char *)((longlong)pfVar1 + 0xd) != '\0') {
    fVar4 = *pfVar1;
    if ((pfVar1[1] <= fVar4) && (fVar5 = pfVar1[2], fVar4 < fVar5)) {
      fVar3 = fVar5 - pfVar1[1];
      fVar6 = 0.0;
      if (0.0 <= fVar5 - fVar4) {
        fVar6 = fVar5 - fVar4;
      }
      fVar4 = 0.0;
      if (0.0 <= fVar3) {
        fVar4 = fVar3;
      }
      fVar5 = fVar6 / fVar4;
      if (DAT_1808ac34c <= fVar6 / fVar4) {
        fVar5 = DAT_1808ac34c;
      }
      fVar4 = 0.0;
      if (((uint)fVar5 & 0x7f800000) != 0x7f800000) {
        fVar4 = fVar5;
      }
      if (*(char *)(pfVar1 + 3) != '\0') {
        fVar4 = DAT_1808ac34c - fVar4;
      }
      if (0 < (int)(fVar4 * DAT_1808acb08)) {
        *param_2 = (float)(int)(fVar4 * DAT_1808acb08);
        uVar2 = FUN_18003a390(local_38,(int)fVar6);
        FUN_18002ba60(param_3,uVar2);
        FUN_18000f890(local_38);
        return 1;
      }
    }
  }
  return 0;
}



/* ===== 18003c170 FUN_18003c170 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_18003c170(ulonglong *param_1,undefined8 param_2,longlong *param_3)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  ulonglong uVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 uStack_f0;
  undefined1 auStack_e8 [8];
  undefined1 auStack_e0 [24];
  undefined4 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  ulonglong local_a8;
  longlong local_a0;
  longlong lStack_98;
  longlong local_90;
  ulonglong uStack_88;
  undefined1 local_80 [32];
  ulonglong local_60;
  
  local_60 = DAT_180919500 ^ (ulonglong)auStack_e8;
  local_c8 = 0;
  uVar7 = local_60;
  if ((*(int *)((longlong)param_1 + 0xc) == 1) &&
     (uVar7 = (ulonglong)DAT_180ccf640, DAT_180ccf640 != 0)) {
    uVar11 = *param_1;
    uVar7 = FUN_180011220(uVar11 + DAT_180ccf640);
    if (((((char)uVar7 != '\0') &&
         ((uVar7 = (ulonglong)DAT_180ccf644, DAT_180ccf644 != 0 &&
          (uVar7 = FUN_180011220(uVar11 + DAT_180ccf644), (char)uVar7 != '\0')))) &&
        ((DAT_180ccf648 == 0 || (uVar7 = FUN_180011220(uVar11 + DAT_180ccf648), (char)uVar7 == '\0')
         ))) && ((DAT_180ccf64c == 0 ||
                 (uVar7 = FUN_180011220(uVar11 + DAT_180ccf64c), (char)uVar7 == '\0')))) {
      if ((DAT_180961a50 == 0) || (lVar8 = FUN_18000f3a0(), lVar8 == 0)) {
        fVar14 = 0.0;
      }
      else {
        fVar14 = (float)FUN_18000f3d0(lVar8 + 0x30);
      }
      uVar7 = *param_1;
      uStack_b8._0_5_ = (uint5)(uint)uStack_b8;
      if (DAT_180ccf654 == 0) {
        fVar15 = 0.0;
      }
      else {
        fVar15 = (float)FUN_18000f3d0(uVar7 + DAT_180ccf654);
      }
      if (DAT_180ccf658 == 0) {
        fVar16 = 0.0;
      }
      else {
        fVar16 = (float)FUN_18000f3d0(uVar7 + DAT_180ccf658);
      }
      iVar6 = DAT_180ccf600;
      iVar5 = DAT_180962b5c;
      uStack_b8._0_6_ = CONCAT15(1,(uint5)uStack_b8);
      uVar7 = uStack_b8 >> 0x28;
      if ((((fVar15 - fVar16 <= fVar14) && (fVar14 < fVar15)) &&
          (uVar7 = DAT_180ccf608, DAT_180ccf608 == *param_1)) && (0 < DAT_180962b5c)) {
        if ((DAT_180ccf600 < 1) || (DAT_180962b5c < DAT_180ccf600)) {
          uVar9 = FUN_18003a390(local_80,DAT_180962b5c);
          local_c8 = 2;
          plVar10 = (longlong *)FUN_1800134a0(uVar9,&DAT_1806de6a8,4);
          local_a0 = *plVar10;
          lStack_98 = plVar10[1];
          local_90 = plVar10[2];
          uStack_88 = plVar10[3];
          plVar10[2] = 0;
          plVar10[3] = 0xf;
          *(undefined1 *)plVar10 = 0;
          plVar10 = &local_a0;
          bVar4 = false;
          bVar3 = true;
          bVar2 = true;
        }
        else {
          uStack_b8 = 0;
          local_b0 = 5;
          local_a8 = 0xf;
          local_c0 = (ulonglong)CONCAT14(s_Fatal_1806de6a0[4],s_Fatal_1806de6a0._0_4_);
          plVar10 = &local_c0;
          bVar4 = true;
          bVar3 = false;
          bVar2 = false;
        }
        FUN_18002ba60(param_2,plVar10);
        if ((bVar2) && (0xf < uStack_88)) {
          uVar7 = uStack_88 + 1;
          lVar8 = local_a0;
          if (uVar7 < 0x1000) {
LAB_18003c3c6:
            thunk_FUN_1803d64e0(lVar8,uVar7);
            goto LAB_18003c3cc;
          }
          lVar8 = *(longlong *)(local_a0 + -8);
          if ((local_a0 - lVar8) - 8U < 0x20) {
            uVar7 = uStack_88 + 0x28;
            goto LAB_18003c3c6;
          }
          pcVar1 = (code *)swi(0x29);
          (*pcVar1)(5);
          puVar12 = auStack_e0;
LAB_18003c442:
          pcVar1 = (code *)swi(0x29);
          (*pcVar1)(5);
          puVar13 = puVar12 + 8;
        }
        else {
LAB_18003c3cc:
          if (bVar3) {
            FUN_18000f890(local_80);
          }
          puVar12 = auStack_e8;
          if ((bVar4) && (0xf < local_a8)) {
            uVar11 = local_a8 + 1;
            uVar7 = local_c0;
            if (0xfff < uVar11) {
              uVar7 = *(ulonglong *)(local_c0 - 8);
              if (0x1f < (local_c0 - uVar7) - 8) goto LAB_18003c442;
              uVar11 = local_a8 + 0x28;
            }
            thunk_FUN_1803d64e0(uVar7,uVar11);
          }
          puVar13 = auStack_e8;
          if (iVar6 < 1) {
            lVar8 = CONCAT44(DAT_18095d008,DAT_18095d004);
            *param_3 = CONCAT44(DAT_18095d000,DAT_18095cffc);
            param_3[1] = lVar8;
            uVar7 = CONCAT71((int7)((ulonglong)&local_c0 >> 8),1);
            puVar13 = auStack_e8;
            goto LAB_18003c501;
          }
        }
        fVar15 = (float)iVar5 / (float)iVar6;
        fVar14 = 0.0;
        if ((0.0 <= fVar15) && (fVar14 = DAT_1808ac34c, fVar15 <= DAT_1808ac34c)) {
          fVar14 = fVar15;
        }
        local_c0 = CONCAT44((DAT_18095d010 - DAT_18095d000) * fVar14 + DAT_18095d000,
                            (DAT_18095d00c - DAT_18095cffc) * fVar14 + DAT_18095cffc);
        uStack_b8 = CONCAT44((DAT_18095d018 - DAT_18095d008) * fVar14 + DAT_18095d008,
                             (DAT_18095d014 - DAT_18095d004) * fVar14 + DAT_18095d004);
        *param_3 = local_c0;
        param_3[1] = uStack_b8;
        uVar7 = CONCAT71((int7)((ulonglong)&local_c0 >> 8),1);
        goto LAB_18003c501;
      }
    }
  }
  puVar13 = auStack_e8;
  uVar7 = uVar7 & 0xffffffffffffff00;
LAB_18003c501:
  *(undefined8 *)(puVar13 + -8) = 0x18003c50d;
  return uVar7;
}



/* ===== 18003c540 FUN_18003c540 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_18003c540(undefined8 *param_1,longlong *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  float *pfVar5;
  undefined8 uVar6;
  undefined *puVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_88 [32];
  undefined8 *local_68 [3];
  undefined1 local_50 [32];
  ulonglong local_30;
  
  local_30 = DAT_180919500 ^ (ulonglong)auStack_88;
  if (*(int *)((longlong)param_2 + 0xc) == 2) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0xf;
    *(undefined1 *)param_1 = 0;
    return param_1;
  }
  local_68[0] = param_1;
  if ((((*(int *)((longlong)param_2 + 0xc) == 0) && (DAT_180ccf638 != 0)) &&
      (cVar2 = FUN_180011220((ulonglong)DAT_180ccf638 + *param_2), cVar2 != '\0')) ||
     (DAT_180ca12e9 == '\0')) goto LAB_18003c5b7;
  if (((*param_2 == 0) || (DAT_180ca09f8 == 0)) ||
     ((lVar4 = FUN_18000f3a0(*param_2 + (ulonglong)DAT_180ca09f8), lVar4 == 0 ||
      (DAT_180ca0950 == 0)))) {
    fVar9 = 0.0;
    fVar8 = 0.0;
    fVar10 = 0.0;
  }
  else {
    pfVar5 = (float *)FUN_1800111b0(local_68,lVar4 + (ulonglong)DAT_180ca0950);
    fVar9 = *pfVar5;
    fVar8 = pfVar5[1];
    fVar10 = pfVar5[2];
  }
  fVar9 = (fVar8 - _DAT_180ccf6dc) * (fVar8 - _DAT_180ccf6dc) +
          (fVar9 - _DAT_180ccf6d8) * (fVar9 - _DAT_180ccf6d8) +
          (fVar10 - _DAT_180ccf6e0) * (fVar10 - _DAT_180ccf6e0);
  if (fVar9 < 0.0) {
    fVar9 = (float)FUN_18051af10(fVar9);
  }
  else {
    fVar9 = SQRT(fVar9);
  }
  if (DAT_18091a1b8 == 2) {
LAB_18003c6d7:
    bVar1 = true;
    fVar9 = (float)FUN_18053f0d0((fVar9 / DAT_1808ac8b0) / DAT_1808ac750 + DAT_1808ac1f4);
    fVar9 = fVar9 * DAT_1808ac750;
  }
  else {
    if (DAT_18091a1b8 != 1) {
      if (DAT_180c9a700 < 0) {
        local_68[0] = (undefined8 *)((ulonglong)local_68[0] & 0xffffffff00000000);
        iVar3 = GetLocaleInfoEx((LPCWSTR)0x0,0x2000000d,(LPWSTR)local_68,2);
        if (0 < iVar3) {
          DAT_180c9a700 = 1;
          if ((int)local_68[0] == 1) goto LAB_18003c6c5;
        }
        DAT_180c9a700 = 0;
      }
LAB_18003c6c5:
      if (DAT_180c9a700 == 1) goto LAB_18003c6d7;
    }
    bVar1 = false;
    fVar9 = fVar9 * _DAT_1808ac034;
  }
  if (0.0 < fVar9) {
    fVar9 = (float)FUN_18053f0d0(fVar9);
    uVar6 = FUN_18003a390(local_50,(int)fVar9);
    puVar7 = &DAT_1806de6b4;
    if (bVar1) {
      puVar7 = &DAT_1806de6b0;
    }
    FUN_180042850(param_1,uVar6,puVar7);
    FUN_18000f890(local_50);
    return param_1;
  }
LAB_18003c5b7:
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  return param_1;
}



/* ===== 18003c780 FUN_18003c780 ===== */

float * FUN_18003c780(float *param_1,longlong param_2)

{
  float fVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  uVar2 = *(undefined8 *)(param_2 + 0x1c);
  *(undefined8 *)param_1 = *(undefined8 *)(param_2 + 0x14);
  *(undefined8 *)(param_1 + 2) = uVar2;
  if (*(char *)(param_2 + 0x34) != '\0') {
    if (*(char *)(param_2 + 0x3c) == '\0') {
      fVar5 = DAT_1808ac34c;
    }
    else {
      fVar5 = *(float *)(param_2 + 0x38);
      if (*(float *)(param_2 + 0x38) == 0.0) {
        return param_1;
      }
    }
    fVar1 = *(float *)(param_2 + 0x30);
    uVar2 = *(undefined8 *)(param_2 + 0x28);
    fVar3 = (float)*(undefined8 *)(param_1 + 1);
    fVar4 = (float)((ulonglong)*(undefined8 *)(param_1 + 1) >> 0x20);
    *param_1 = (*(float *)(param_2 + 0x24) - *param_1) * fVar5 + *param_1;
    param_1[3] = (fVar1 - param_1[3]) * fVar5 + param_1[3];
    *(ulonglong *)(param_1 + 1) =
         CONCAT44(((float)((ulonglong)uVar2 >> 0x20) - fVar4) * fVar5 + fVar4,
                  ((float)uVar2 - fVar3) * fVar5 + fVar3);
  }
  return param_1;
}



/* ===== 18003c820 FUN_18003c820 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_18003c820(longlong *param_1,char param_2)

{
  undefined1 auVar1 [12];
  undefined1 auVar2 [12];
  undefined1 auVar3 [12];
  undefined1 auVar4 [12];
  float fVar5;
  float fVar6;
  char cVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined4 *puVar10;
  float *pfVar11;
  longlong lVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  uint uVar21;
  float fVar22;
  float fVar23;
  float extraout_XMM0_Da;
  uint uVar24;
  float extraout_XMM0_Da_00;
  undefined1 auVar25 [12];
  undefined1 auVar26 [12];
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined8 local_res8;
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  undefined8 local_f8;
  undefined8 local_e8;
  float local_e0;
  float local_d8;
  undefined1 local_d0 [184];
  
  fVar6 = DAT_1811079b4;
  fVar5 = DAT_1811079b0;
  lVar12 = (longlong)DAT_181107a00;
  if ((((*param_1 != 0) && (DAT_180ca09f8 != 0)) &&
      (lVar8 = FUN_18000f3a0(*param_1 + (ulonglong)DAT_180ca09f8), lVar8 != 0)) &&
     (DAT_180ca0950 != 0)) {
    plVar9 = (longlong *)FUN_1800111b0(&local_e8,lVar8 + (ulonglong)DAT_180ca0950);
    local_e8 = *plVar9;
    fVar23 = (float)local_e8;
    fVar32 = (float)((ulonglong)local_e8 >> 0x20);
    fVar22 = *(float *)(plVar9 + 1);
    if (((fVar23 == 0.0) && (fVar32 == 0.0)) && (fVar22 == 0.0)) {
      return 0;
    }
    param_1[0xd] = local_e8;
    *(float *)(param_1 + 0xe) = fVar22;
    local_e0 = fVar22;
    if (((param_2 == '\0') && (DAT_180ca0a3c != 0)) &&
       (((uint)DAT_180ca09b0 != 0 && (DAT_180ca09b0._4_4_ != 0)))) {
      lVar8 = FUN_18000f3a0((ulonglong)DAT_180ca0a3c + *param_1);
      if (lVar8 - 0x10000U < 0x7ffffffeffff) {
        puVar10 = (undefined4 *)FUN_1800111b0(&local_f8,(ulonglong)(uint)DAT_180ca09b0 + lVar8);
        fVar29 = (float)puVar10[1];
        fVar31 = (float)puVar10[2];
        local_res8 = CONCAT44(local_res8._4_4_,*puVar10);
        pfVar11 = (float *)FUN_1800111b0(local_d0,(ulonglong)DAT_180ca09b0._4_4_ + lVar8);
        fVar14 = *pfVar11;
        local_f8 = CONCAT44(local_f8._4_4_,fVar14);
        if ((float)local_res8 < fVar14) {
          fVar33 = pfVar11[1];
          if (fVar29 < fVar33) {
            fVar15 = pfVar11[2];
            local_d8 = fVar15;
            if (fVar31 <= fVar15) {
              local_128 = DAT_1808ac34c;
              local_120 = DAT_1808ac34c;
              local_110 = DAT_1808ac34c;
              local_124 = 0.0;
              local_118 = 0.0;
              local_10c = 0.0;
              local_114 = 0.0;
              local_108 = 0.0;
              local_11c = 0.0;
              fVar16 = DAT_1808ac34c;
              if (((DAT_180ccf6d0 != 0) && (*param_1 != 0)) && (DAT_180ca09f8 != 0)) {
                lVar8 = FUN_18000f3a0(*param_1 + (ulonglong)DAT_180ca09f8);
                if (lVar8 == 0) {
                  fVar16 = DAT_1808ac34c;
                }
                else {
                  FUN_1800111b0(local_d0,(ulonglong)DAT_180ccf6d0 + lVar8);
                  fVar14 = (float)FUN_180517790();
                  fVar15 = (float)FUN_180517200();
                  fVar16 = (float)FUN_180517790();
                  fVar17 = (float)FUN_180517200();
                  fVar18 = (float)FUN_180517790();
                  fVar19 = (float)FUN_180517200();
                  local_128 = fVar17 * fVar15;
                  local_124 = fVar16 * fVar15;
                  local_118 = (float)((uint)fVar14 ^ DAT_1808adec0);
                  local_108 = fVar18 * fVar16 + fVar19 * fVar14 * fVar17;
                  local_110 = fVar19 * fVar15;
                  local_11c = fVar19 * fVar14 * fVar16 - fVar18 * fVar17;
                  local_114 = (float)((uint)fVar18 ^ DAT_1808adec0) * fVar15 * DAT_1808acda0;
                  local_10c = (fVar19 * fVar16 - fVar18 * fVar14 * fVar17) * DAT_1808acda0;
                  local_120 = ((float)((uint)fVar18 ^ DAT_1808adec0) * fVar14 * fVar16 -
                              fVar19 * fVar17) * DAT_1808acda0;
                  fVar14 = (float)local_f8;
                  fVar16 = local_128;
                  fVar15 = local_d8;
                }
              }
              uVar13 = 0;
              fVar18 = (float)local_res8;
              fVar19 = DAT_1808aceb0;
              fVar20 = DAT_1808acd08;
              fVar30 = DAT_1808aceb0;
              fVar17 = DAT_1808acd08;
              do {
                if ((uVar13 & 1) != 0) {
                  fVar18 = fVar14;
                }
                if ((uVar13 & 2) == 0) {
                  fVar27 = fVar29;
                }
                else {
                  fVar27 = fVar33;
                }
                if ((uVar13 & 4) == 0) {
                  fVar28 = fVar31;
                }
                else {
                  fVar28 = fVar15;
                }
                local_f8 = 0;
                local_e8 = CONCAT44(fVar28 * local_11c +
                                    fVar27 * local_120 + fVar18 * local_124 + fVar32,
                                    fVar28 * local_108 +
                                    fVar27 * local_10c + fVar18 * fVar16 + fVar23);
                local_e0 = fVar28 * local_110 + fVar27 * local_114 + fVar18 * local_118 + fVar22;
                cVar7 = FUN_1803a1bf0(&DAT_181107930 + lVar12 * 0x40,&local_e8,&local_f8,fVar5,fVar6
                                     );
                if (cVar7 == '\0') {
                  return 0;
                }
                auVar26._0_8_ = local_f8 & 0xffffffff;
                auVar26._8_4_ = 0;
                uVar13 = uVar13 + 1;
                auVar25._8_4_ = 0;
                auVar25._0_8_ = auVar26._0_8_;
                if (fVar20 <= (float)local_f8) {
                  auVar25._4_8_ = 0;
                  auVar25._0_4_ = fVar20;
                }
                if ((float)local_f8 <= fVar19) {
                  auVar26._4_8_ = 0;
                  auVar26._0_4_ = fVar19;
                }
                fVar20 = auVar25._0_4_;
                fVar16 = local_f8._4_4_;
                if (fVar17 <= local_f8._4_4_) {
                  fVar16 = fVar17;
                }
                fVar17 = fVar16;
                fVar19 = auVar26._0_4_;
                fVar27 = local_f8._4_4_;
                if (local_f8._4_4_ <= fVar30) {
                  fVar27 = fVar30;
                }
                fVar18 = (float)local_res8;
                fVar30 = fVar27;
                fVar16 = local_128;
              } while ((int)uVar13 < 8);
              fVar33 = (fVar33 + fVar29) * DAT_1808ac1f4;
              fVar29 = (fVar15 + fVar31) * DAT_1808ac1f4;
              fVar31 = (fVar14 + (float)local_res8) * DAT_1808ac1f4;
              uVar21 = DAT_1808ac1ec ^ (uint)fVar27;
              *(float *)(param_1 + 0xd) =
                   fVar29 * local_108 + fVar33 * local_10c + fVar31 * local_128 + fVar23;
              uVar24 = _UNK_1808ade98;
              uVar13 = _DAT_1808ade90;
              uVar21 = uVar21 & _DAT_1808ade90;
              *(float *)((longlong)param_1 + 0x6c) =
                   fVar29 * local_11c + fVar33 * local_120 + fVar31 * local_124 + fVar32;
              *(float *)(param_1 + 0xe) =
                   fVar29 * local_110 + fVar33 * local_114 + fVar31 * local_118 + fVar22;
              fVar22 = (float)FUN_18053fc00((float)(uVar21 ^ (uint)fVar27) + fVar27);
              auVar3._4_8_ = 0;
              auVar3._0_4_ = auVar26._8_4_ & uVar24 ^ auVar26._8_4_;
              auVar1._4_8_ = SUB128(auVar3 << 0x40,4);
              auVar1._0_4_ = (float)((DAT_1808ac1ec ^ (uint)fVar19) & uVar13 ^ (uint)fVar19) +
                             fVar19;
              fVar29 = (float)FUN_18053fc00(auVar1._0_8_);
              fVar23 = (float)FUN_18053fc00((float)((DAT_1808ac1ec ^ (uint)fVar17) & uVar13 ^
                                                   (uint)fVar17) + fVar17);
              auVar4._4_8_ = 0;
              auVar4._0_4_ = auVar25._8_4_ & uVar24 ^ auVar25._8_4_;
              auVar2._4_8_ = SUB128(auVar4 << 0x40,4);
              auVar2._0_4_ = (float)((DAT_1808ac1ec ^ (uint)fVar20) & uVar13 ^ (uint)fVar20) +
                             fVar20;
              FUN_18053fc00(auVar2._0_8_);
              fVar32 = extraout_XMM0_Da;
              goto LAB_18003cf7a;
            }
          }
        }
      }
    }
    local_res8 = 0;
    cVar7 = FUN_1803a1bf0(&DAT_181107930 + lVar12 * 0x40,&local_e8,&local_res8,fVar5,fVar6);
    uVar13 = _DAT_1808ade90;
    if (cVar7 != '\0') {
      uVar24 = (DAT_1808ac1ec ^ (uint)(float)local_res8) & _DAT_1808ade90;
      *(undefined1 *)(param_1 + 10) = 1;
      fVar29 = (float)FUN_18053fc00((float)(uVar24 ^ (uint)(float)local_res8) + (float)local_res8);
      FUN_18053fc00((float)((DAT_1808ac1ec ^ (uint)local_res8._4_4_) & uVar13 ^
                           (uint)local_res8._4_4_) + local_res8._4_4_);
      fVar22 = extraout_XMM0_Da_00;
      fVar23 = extraout_XMM0_Da_00;
      fVar32 = fVar29;
LAB_18003cf7a:
      *(float *)(param_1 + 8) = fVar32;
      *(float *)((longlong)param_1 + 0x44) = fVar23;
      *(float *)(param_1 + 9) = fVar29;
      *(float *)((longlong)param_1 + 0x4c) = fVar22;
      if (((0.0 <= fVar29) && (0.0 <= fVar22)) && ((fVar32 <= fVar5 && (fVar23 <= fVar6)))) {
        *(undefined1 *)((longlong)param_1 + 0x51) = 1;
        return 1;
      }
      *(undefined1 *)((longlong)param_1 + 0x51) = 0;
      return 1;
    }
  }
  return 0;
}



/* ===== 18003d010 FUN_18003d010 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18003d010(longlong *param_1,undefined1 param_2,float param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  char cVar7;
  ushort uVar8;
  uint uVar9;
  int iVar10;
  char *_Str1;
  float fVar11;
  float fVar12;
  
  _Str1 = (char *)FUN_1803a0710();
  if (_Str1 == (char *)0x0) goto switchD_18003d060_caseD_3;
  switch(*(undefined4 *)((longlong)param_1 + 0xc)) {
  case 1:
    uVar9 = 0x31;
    goto LAB_18003d180;
  case 2:
    uVar9 = 0x37;
    goto LAB_18003d180;
  case 3:
  case 5:
    break;
  default:
    if (((DAT_180ccf698 != 0) && (DAT_180ccf69c != 0)) && (DAT_180ccf6a0 != 0)) {
      uVar8 = FUN_180011440((ulonglong)DAT_180ccf6a0 + (ulonglong)DAT_180ccf69c +
                            (ulonglong)DAT_180ccf698 + *param_1);
      uVar9 = (uint)uVar8;
      goto LAB_18003d180;
    }
    break;
  case 6:
    iVar10 = strcmp(_Str1,"C_HEGrenadeProjectile");
    if (iVar10 == 0) {
      uVar9 = 0x2c;
      goto LAB_18003d180;
    }
    iVar10 = strcmp(_Str1,"C_FlashbangProjectile");
    if (iVar10 == 0) {
      uVar9 = 0x2b;
      goto LAB_18003d180;
    }
    iVar10 = strcmp(_Str1,"C_SmokeGrenadeProjectile");
    if (iVar10 == 0) {
      uVar9 = 0x2d;
      goto LAB_18003d180;
    }
    iVar10 = strcmp(_Str1,"C_DecoyProjectile");
    if (iVar10 == 0) {
      uVar9 = 0x2f;
      goto LAB_18003d180;
    }
    iVar10 = strcmp(_Str1,"C_MolotovProjectile");
    if (iVar10 == 0) {
      if ((DAT_180ccf6cc != 0) &&
         (cVar7 = FUN_180011220((ulonglong)DAT_180ccf6cc + *param_1), cVar7 != '\0')) {
        uVar9 = 0x30;
        goto LAB_18003d180;
      }
      goto LAB_18003d098;
    }
    break;
  case 7:
    if ((DAT_180ccf6c8 != 0) &&
       (iVar10 = FUN_180011200((ulonglong)DAT_180ccf6c8 + *param_1), iVar10 != 0)) {
      uVar9 = 0x30;
      goto LAB_18003d180;
    }
LAB_18003d098:
    uVar9 = 0x2e;
    goto LAB_18003d180;
  }
switchD_18003d060_caseD_3:
  uVar9 = 0;
LAB_18003d180:
  *(uint *)(param_1 + 0xb) = uVar9;
  cVar7 = FUN_18003c820(param_1,param_2);
  if (cVar7 != '\0') {
    if ((DAT_180ccf61c == 0) ||
       (cVar7 = FUN_180011220((ulonglong)DAT_180ccf61c + *param_1), cVar7 == '\0')) {
      if (DAT_180ccf620 == 0) {
        fVar11 = DAT_1808ac34c;
      }
      else {
        iVar10 = FUN_180011200((ulonglong)DAT_180ccf620 + *param_1);
        fVar11 = DAT_1808ac34c;
        if (0 < iVar10) {
          fVar12 = (param_3 - (float)iVar10 * DAT_1808ac00c) * DAT_1808ac710;
          if (0.0 <= fVar12) {
            if (fVar12 <= DAT_1808ac34c) {
              fVar11 = fVar12;
            }
          }
          else {
            fVar11 = 0.0;
          }
        }
      }
    }
    else {
      fVar11 = 0.0;
    }
    *(float *)((longlong)param_1 + 0x54) = fVar11;
    if (0.0 < fVar11) {
      if (DAT_180ca12e9 != '\0') {
        fVar11 = *(float *)((longlong)param_1 + 0x6c) - _DAT_180ccf6dc;
        *(float *)((longlong)param_1 + 100) =
             fVar11 * fVar11 +
             (*(float *)(param_1 + 0xd) - _DAT_180ccf6d8) *
             (*(float *)(param_1 + 0xd) - _DAT_180ccf6d8) +
             (*(float *)(param_1 + 0xe) - _DAT_180ccf6e0) *
             (*(float *)(param_1 + 0xe) - _DAT_180ccf6e0);
      }
      plVar6 = DAT_180ccf748;
      if (DAT_180ccf748 != DAT_180ccf750) {
        lVar1 = param_1[1];
        lVar2 = param_1[2];
        lVar3 = param_1[3];
        *DAT_180ccf748 = *param_1;
        plVar6[1] = lVar1;
        lVar1 = param_1[4];
        lVar4 = param_1[5];
        plVar6[2] = lVar2;
        plVar6[3] = lVar3;
        lVar2 = param_1[6];
        lVar3 = param_1[7];
        plVar6[4] = lVar1;
        plVar6[5] = lVar4;
        lVar1 = param_1[8];
        lVar4 = param_1[9];
        plVar6[6] = lVar2;
        plVar6[7] = lVar3;
        lVar2 = param_1[10];
        lVar3 = param_1[0xb];
        plVar6[8] = lVar1;
        plVar6[9] = lVar4;
        lVar4 = param_1[0xc];
        lVar5 = param_1[0xd];
        plVar6[10] = lVar2;
        plVar6[0xb] = lVar3;
        lVar1 = param_1[0xe];
        plVar6[0xc] = lVar4;
        plVar6[0xd] = lVar5;
        plVar6[0xe] = lVar1;
        DAT_180ccf748 = DAT_180ccf748 + 0xf;
        return;
      }
      FUN_180043a20();
    }
  }
  return;
}



/* ===== 18003d320 FUN_18003d320 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18003d320(float param_1)

{
  longlong *plVar1;
  code *pcVar2;
  float fVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  undefined1 uVar8;
  ushort uVar9;
  undefined4 uVar10;
  float fVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  char *pcVar17;
  float *pfVar18;
  undefined8 *puVar19;
  longlong lVar20;
  longlong **pplVar21;
  float *pfVar22;
  longlong lVar23;
  longlong *plVar24;
  ulonglong uVar25;
  undefined1 *puVar26;
  undefined1 *puVar27;
  undefined1 *puVar28;
  longlong *plVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  longlong *plVar33;
  int iVar34;
  int iVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined8 local_res10;
  float local_res18 [2];
  longlong local_res20;
  undefined8 uStack_2a0;
  undefined1 auStack_298 [8];
  undefined1 auStack_290 [24];
  longlong *local_278;
  undefined4 uStack_270;
  int iStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 local_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  uint local_244;
  float local_240;
  uint local_23c;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined2 local_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  uint uStack_21c;
  uint local_218;
  undefined8 uStack_214;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  longlong *local_1f8;
  undefined8 uStack_1f0;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 local_1c8;
  uint uStack_1c4;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined2 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  uint uStack_19c;
  uint local_198;
  undefined8 uStack_194;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  longlong *local_178;
  longlong *plStack_170;
  longlong *local_168;
  longlong *local_160;
  longlong *plStack_158;
  longlong *local_150;
  longlong *local_148;
  longlong *plStack_140;
  longlong *local_138;
  longlong *local_130;
  longlong *plStack_128;
  longlong *local_120;
  longlong *local_118;
  longlong *plStack_110;
  longlong *local_108;
  longlong *local_100;
  longlong *plStack_f8;
  longlong *local_f0;
  undefined8 local_e8;
  int iStack_e0;
  undefined4 uStack_dc;
  char *local_d8;
  longlong *local_d0;
  longlong *plStack_c8;
  longlong *local_c0;
  longlong local_b8;
  longlong local_b0;
  
  if (DAT_1809619d0 == 0) {
    return;
  }
  lVar15 = FUN_18000f3a0();
  if (0x7ffffffefffe < lVar15 - 0x10000U) {
    return;
  }
  local_b0 = lVar15;
  if (DAT_180cd1304 == '\0') {
    FUN_1803a0b60(&local_res10);
    plVar24 = local_res10;
  }
  else {
    plVar24 = DAT_181108a00;
  }
  if (plVar24 == (longlong *)0x0) {
    local_b8 = 0;
LAB_18003d410:
    local_res10 = (longlong *)((ulonglong)local_res10._4_4_ << 0x20);
  }
  else {
    local_b8 = FUN_18000f3a0((undefined1 *)((longlong)plVar24 + (ulonglong)DAT_180961968));
    if ((local_b8 == 0) || (DAT_180ccf630 == 0)) goto LAB_18003d410;
    uVar10 = FUN_180011200((ulonglong)DAT_180ccf630 + local_b8);
    local_res10 = (longlong *)CONCAT44(local_res10._4_4_,uVar10);
  }
  puVar28 = auStack_298;
  puVar26 = auStack_298;
  puVar27 = auStack_298;
  local_d0 = (longlong *)0x0;
  plStack_c8 = (longlong *)0x0;
  local_c0 = (longlong *)0x0;
  local_178 = (longlong *)0x0;
  plStack_170 = (longlong *)0x0;
  local_168 = (longlong *)0x0;
  local_100 = (longlong *)0x0;
  plStack_f8 = (longlong *)0x0;
  local_f0 = (longlong *)0x0;
  local_118 = (longlong *)0x0;
  plStack_110 = (longlong *)0x0;
  local_108 = (longlong *)0x0;
  local_130 = (longlong *)0x0;
  plStack_128 = (longlong *)0x0;
  local_120 = (longlong *)0x0;
  local_148 = (longlong *)0x0;
  plStack_140 = (longlong *)0x0;
  local_138 = (longlong *)0x0;
  local_160 = (longlong *)0x0;
  plStack_158 = (longlong *)0x0;
  local_150 = (longlong *)0x0;
  local_res18[0] = 0.0;
  do {
    fVar38 = local_res18[0];
    lVar16 = FUN_18000f3a0((ulonglong)DAT_180961940 +
                           (ulonglong)(uint)((int)local_res18[0] * DAT_180961944) + lVar15);
    lVar23 = local_b8;
    local_res20 = lVar16;
    if (lVar16 - 0x10000U < 0x7ffffffeffff) {
      iVar35 = 0;
      do {
        iVar34 = (int)fVar38 * 0x200 + iVar35;
        if (0x40 < iVar34) {
          lVar15 = FUN_18000f3a0((ulonglong)(uint)(iVar35 * DAT_180961948) + lVar16);
          if (((lVar15 - 0x10000U < 0x7ffffffeffff) &&
              (lVar16 = FUN_18000f3a0((ulonglong)DAT_180961968 + lVar15),
              lVar16 - 0x10000U < 0x7ffffffeffff)) &&
             ((DAT_180ccf62c == 0 || (cVar7 = FUN_180011220(), -1 < cVar7)))) {
            if ((DAT_180ccf630 != 0) && (lVar23 != 0)) {
              fVar11 = (float)FUN_180011200();
              if (fVar11 != (float)local_res10) goto LAB_18003d864;
            }
            if ((((lVar15 != 0) && (lVar16 = FUN_18000f3a0(), lVar16 != 0)) &&
                (lVar16 = FUN_18000f3a0(), lVar16 != 0)) && (lVar16 = FUN_18000f3a0(), lVar16 != 0))
            {
              pcVar17 = (char *)FUN_18000f3a0((ulonglong)DAT_180961974 + lVar16);
              uVar10 = uStack_dc;
              if (pcVar17 + -0x10000 < (char *)0x7ffffffeffff) {
                lVar16 = 0;
                do {
                  lVar20 = lVar16 + 1;
                  local_e8._0_4_ = (undefined4)lVar15;
                  uVar5 = (undefined4)local_e8;
                  local_e8._4_4_ = (undefined4)((ulonglong)lVar15 >> 0x20);
                  uVar6 = local_e8._4_4_;
                  local_e8 = lVar15;
                  iStack_e0 = iVar34;
                  local_d8 = pcVar17;
                  if (pcVar17[lVar16] != (&DAT_1806d4100)[lVar16]) {
                    iVar12 = strcmp(pcVar17,"C_PlantedC4");
                    if (iVar12 == 0) {
                      if (plStack_170 != local_168) {
                        *(undefined4 *)plStack_170 = uVar5;
                        *(undefined4 *)((longlong)plStack_170 + 4) = uVar6;
                        *(int *)(plStack_170 + 1) = iVar34;
                        *(undefined4 *)((longlong)plStack_170 + 0xc) = uVar10;
                        plStack_170[2] = (longlong)pcVar17;
                        plStack_170 = plStack_170 + 3;
                        goto LAB_18003d804;
                      }
                      pplVar21 = &local_178;
                      plVar24 = plStack_170;
                      goto LAB_18003d7f8;
                    }
                    iVar12 = strcmp(pcVar17,"C_Multimeter");
                    if (iVar12 == 0) {
                      if (plStack_f8 != local_f0) {
                        *(undefined4 *)plStack_f8 = uVar5;
                        *(undefined4 *)((longlong)plStack_f8 + 4) = uVar6;
                        *(int *)(plStack_f8 + 1) = iVar34;
                        *(undefined4 *)((longlong)plStack_f8 + 0xc) = uVar10;
                        plStack_f8[2] = (longlong)pcVar17;
                        plStack_f8 = plStack_f8 + 3;
                        goto LAB_18003d804;
                      }
                      pplVar21 = &local_100;
                      plVar24 = plStack_f8;
                      goto LAB_18003d7f8;
                    }
                    iVar12 = strcmp(pcVar17,"C_Hostage");
                    if (iVar12 == 0) {
                      if (plStack_110 != local_108) {
                        *(undefined4 *)plStack_110 = uVar5;
                        *(undefined4 *)((longlong)plStack_110 + 4) = uVar6;
                        *(int *)(plStack_110 + 1) = iVar34;
                        *(undefined4 *)((longlong)plStack_110 + 0xc) = uVar10;
                        plStack_110[2] = (longlong)pcVar17;
                        plStack_110 = plStack_110 + 3;
                        goto LAB_18003d804;
                      }
                      pplVar21 = &local_118;
                      plVar24 = plStack_110;
                      goto LAB_18003d7f8;
                    }
                    iVar12 = strcmp(pcVar17,"C_Inferno");
                    if ((((iVar12 == 0) ||
                         (iVar12 = strcmp(pcVar17,"C_HEGrenadeProjectile"), iVar12 == 0)) ||
                        ((iVar12 = strcmp(pcVar17,"C_FlashbangProjectile"), iVar12 == 0 ||
                         ((iVar12 = strcmp(pcVar17,"C_SmokeGrenadeProjectile"), iVar12 == 0 ||
                          (iVar12 = strcmp(pcVar17,"C_MolotovProjectile"), iVar12 == 0)))))) ||
                       (iVar12 = strcmp(pcVar17,"C_DecoyProjectile"), iVar12 == 0)) {
                      if (plStack_128 != local_120) {
                        *(undefined4 *)plStack_128 = uVar5;
                        *(undefined4 *)((longlong)plStack_128 + 4) = uVar6;
                        *(int *)(plStack_128 + 1) = iVar34;
                        *(undefined4 *)((longlong)plStack_128 + 0xc) = uVar10;
                        plStack_128[2] = (longlong)pcVar17;
                        plStack_128 = plStack_128 + 3;
                        goto LAB_18003d804;
                      }
                      pplVar21 = &local_130;
                      plVar24 = plStack_128;
                      goto LAB_18003d7f8;
                    }
                    iVar12 = strcmp(pcVar17,"C_BaseEntity");
                    if (iVar12 != 0) goto LAB_18003d804;
                    if (plStack_158 != local_150) {
                      *(undefined4 *)plStack_158 = uVar5;
                      *(undefined4 *)((longlong)plStack_158 + 4) = uVar6;
                      *(int *)(plStack_158 + 1) = iVar34;
                      *(undefined4 *)((longlong)plStack_158 + 0xc) = uVar10;
                      plStack_158[2] = (longlong)pcVar17;
                      plStack_158 = plStack_158 + 3;
                      goto LAB_18003d804;
                    }
                    pplVar21 = &local_160;
                    plVar24 = plStack_158;
                    goto LAB_18003d7f8;
                  }
                  lVar16 = lVar20;
                } while (lVar20 != 5);
                if (plStack_c8 == local_c0) {
                  pplVar21 = &local_d0;
                  plVar24 = plStack_c8;
LAB_18003d7f8:
                  FUN_1800435c0(pplVar21,plVar24,&local_e8);
                }
                else {
                  *(undefined4 *)plStack_c8 = (undefined4)local_e8;
                  *(undefined4 *)((longlong)plStack_c8 + 4) = local_e8._4_4_;
                  *(int *)(plStack_c8 + 1) = iVar34;
                  *(undefined4 *)((longlong)plStack_c8 + 0xc) = uStack_dc;
                  plStack_c8[2] = (longlong)pcVar17;
                  plStack_c8 = plStack_c8 + 3;
                }
LAB_18003d804:
                iVar12 = strncmp(pcVar17,"C_Weapon",8);
                if ((iVar12 == 0) || (lVar15 = FUN_18039e5c0(), lVar15 != 0)) {
                  if (plStack_140 == local_138) {
                    FUN_1800435c0(&local_148,plStack_140,&local_e8);
                  }
                  else {
                    *(undefined4 *)plStack_140 = uVar5;
                    *(undefined4 *)((longlong)plStack_140 + 4) = uVar6;
                    *(int *)(plStack_140 + 1) = iVar34;
                    *(undefined4 *)((longlong)plStack_140 + 0xc) = uVar10;
                    plStack_140[2] = (longlong)pcVar17;
                    plStack_140 = plStack_140 + 3;
                  }
                }
              }
            }
          }
LAB_18003d864:
          lVar16 = local_res20;
        }
        iVar35 = iVar35 + 1;
      } while (iVar35 < 0x200);
      lVar15 = local_b0;
      fVar38 = local_res18[0];
    }
    plVar24 = plStack_c8;
    fVar11 = DAT_1808ac34c;
    local_res18[0] = (float)((int)fVar38 + 1);
  } while ((int)local_res18[0] < 0x40);
  plVar33 = (longlong *)0x0;
  uVar31 = 0;
  fVar38 = DAT_1808ac140;
  fVar3 = DAT_1808ac710;
  plVar1 = plStack_170;
  plVar29 = local_d0;
  while( true ) {
    DAT_1808ac140 = fVar38;
    DAT_1808ac710 = fVar3;
    plStack_170 = plVar1;
    if (plVar29 == plVar24) break;
    local_254 = 0;
    uStack_250 = 0;
    uStack_24c = 0;
    uStack_248 = 0;
    local_244 = local_244 & 0xffffff00;
    local_240 = 1.0;
    local_23c = local_23c & 0xffffff00;
    local_238 = 0;
    uStack_230 = 0;
    local_228 = 0;
    uStack_224 = 0x3f800000;
    uStack_220 = 0;
    uStack_21c = 0xffffffff;
    local_218 = local_218 & 0xffffff00;
    uStack_214 = 0;
    uStack_20c = 0;
    uStack_208 = 0;
    uStack_204 = 0;
    local_278 = (longlong *)*plVar29;
    uStack_270 = (undefined4)plVar29[1];
    iStack_26c = 0;
    uStack_268 = 0;
    uStack_264 = _DAT_18095cf98;
    uStack_260 = uRam000000018095cf9c;
    uStack_25c = uRam000000018095cfa0;
    uStack_258 = uRam000000018095cfa4;
    if (DAT_18095cf94 == '\0') {
      if (DAT_18095d040 != '\0') {
        uStack_268 = 1;
        uStack_264 = _DAT_18095d044;
        uStack_260 = uRam000000018095d048;
        uStack_25c = uRam000000018095d04c;
        uStack_258 = uRam000000018095d050;
        goto LAB_18003d964;
      }
    }
    else {
LAB_18003d964:
      if ((DAT_180ccf614 == 0) ||
         (iVar35 = FUN_180011200((undefined1 *)((longlong)local_278 + (ulonglong)DAT_180ccf614)),
         0xfffffffd < iVar35 - 1U)) {
        local_res10 = (longlong *)0x0;
      }
      else {
        FUN_1803a0940(&local_res10,iVar35);
        plVar1 = local_res10;
        if (((((local_res10 != (longlong *)0x0) &&
              (lVar15 = FUN_18000f3a0((undefined1 *)
                                      ((ulonglong)DAT_180961968 + (longlong)local_res10)),
              lVar15 != 0)) &&
             (lVar15 = FUN_18000f3a0((ulonglong)DAT_18096196c + lVar15), lVar15 != 0)) &&
            (((lVar15 = FUN_18000f3a0((ulonglong)DAT_180961970 + lVar15), lVar15 != 0 &&
              (pcVar17 = (char *)FUN_18000f3a0((ulonglong)DAT_180961974 + lVar15),
              pcVar17 + -0x10000 < (char *)0x7ffffffeffff)) &&
             ((iVar35 = strcmp(pcVar17,"C_CSPlayerPawn"), iVar35 == 0 && (plVar1 != (longlong *)0x0)
              ))))) &&
           (((DAT_180ca09f0 == 0 || (iVar35 = FUN_180011200(), 999 < iVar35 - 1U)) ||
            (iVar35 = FUN_18003b480(), iVar35 != 3)))) goto LAB_18003dae4;
      }
      uVar13 = uVar31;
      if (((DAT_180ccf698 != 0) && (DAT_180ccf69c != 0)) && (DAT_180ccf6a0 != 0)) {
        uVar9 = FUN_180011440((ulonglong)DAT_180ccf69c + (ulonglong)DAT_180ccf6a0 +
                              (ulonglong)DAT_180ccf698 + *plVar29);
        uVar13 = (uint)uVar9;
      }
      uStack_1f0 = CONCAT44(iStack_26c,uStack_270);
      local_1f8 = local_278;
      local_1e8 = uStack_268;
      uStack_1e4 = uStack_264;
      uStack_1e0 = uStack_260;
      uStack_1dc = uStack_25c;
      local_1d8 = uStack_258;
      uStack_1d4 = local_254;
      uStack_1d0 = uStack_250;
      uStack_1cc = uStack_24c;
      uStack_1c0 = CONCAT44(local_23c,local_240);
      local_1c8 = uStack_248;
      uStack_1c4 = local_244;
      local_1b8 = 0;
      uStack_1b0 = 0;
      local_1a8 = local_228;
      uStack_1a4 = uStack_224;
      uStack_1a0 = uStack_220;
      local_198 = local_218;
      uStack_194 = uStack_214;
      uStack_18c = uStack_20c;
      uStack_188 = uStack_208;
      uStack_184 = uStack_204;
      uStack_21c = uVar13;
      uStack_19c = uVar13;
      FUN_18003d010(&local_1f8,0);
    }
LAB_18003dae4:
    plVar29 = plVar29 + 3;
    fVar38 = DAT_1808ac140;
    fVar3 = DAT_1808ac710;
    plVar1 = plStack_170;
  }
  plVar24 = local_178;
  if (DAT_18095cf94 != '\0') {
    for (; plVar24 != plVar1; plVar24 = plVar24 + 3) {
      local_254 = 0;
      uStack_250 = 0;
      uStack_24c = 0;
      uStack_248 = 0;
      local_244 = local_244 & 0xffffff00;
      local_240 = 1.0;
      local_23c = local_23c & 0xffffff00;
      local_238 = 0;
      uStack_230 = 0;
      local_228 = 0;
      uStack_224 = 0x3f800000;
      uStack_220 = 0;
      uStack_21c = 0xffffffff;
      local_218 = local_218 & 0xffffff00;
      uStack_214 = 0;
      uStack_20c = 0;
      uStack_208 = 0;
      uStack_204 = 0;
      plVar29 = (longlong *)*plVar24;
      uStack_270 = (undefined4)plVar24[1];
      iStack_26c = 1;
      uStack_268 = 0;
      local_278 = plVar29;
      uStack_264 = _DAT_18095cf98;
      uStack_260 = uRam000000018095cf9c;
      uStack_25c = uRam000000018095cfa0;
      uStack_258 = uRam000000018095cfa4;
      iVar35 = FUN_18003b480(&local_278);
      if (DAT_180ccf65c == 0) {
        fVar36 = 0.0;
      }
      else {
        fVar36 = (float)FUN_18000f3d0((undefined1 *)((longlong)plVar29 + (ulonglong)DAT_180ccf65c));
      }
      if (iVar35 == 5) {
        if (((((DAT_180ccf640 != 0) &&
              (cVar7 = FUN_180011220((undefined1 *)((longlong)plVar29 + (ulonglong)DAT_180ccf640)),
              cVar7 != '\0')) &&
             ((DAT_180ccf644 != 0 &&
              (cVar7 = FUN_180011220((undefined1 *)((longlong)plVar29 + (ulonglong)DAT_180ccf644)),
              cVar7 != '\0')))) &&
            ((DAT_180ccf648 == 0 ||
             (cVar7 = FUN_180011220((undefined1 *)((longlong)plVar29 + (ulonglong)DAT_180ccf648)),
             cVar7 == '\0')))) &&
           (((DAT_180ccf64c == 0 ||
             (cVar7 = FUN_180011220((undefined1 *)((longlong)plVar29 + (ulonglong)DAT_180ccf64c)),
             cVar7 == '\0')) &&
            ((DAT_180ccf650 != 0 &&
             (cVar7 = FUN_180011220((undefined1 *)((longlong)plVar29 + (ulonglong)DAT_180ccf650)),
             cVar7 != '\0')))))) {
          if (DAT_180ccf654 == 0) {
            fVar37 = 0.0;
          }
          else {
            fVar37 = (float)FUN_18000f3d0((undefined1 *)
                                          ((longlong)plVar29 + (ulonglong)DAT_180ccf654));
          }
          if (fVar36 <= fVar37) {
            local_254 = (undefined4)_DAT_18095cfc8;
            uStack_250 = (undefined4)((ulonglong)_DAT_18095cfc8 >> 0x20);
            uStack_24c = (undefined4)_DAT_18095cfd0;
            uStack_248 = (undefined4)((ulonglong)_DAT_18095cfd0 >> 0x20);
            local_res20 = CONCAT44(local_res20._4_4_,0x3e800000);
            local_res10 = (longlong *)((ulonglong)local_res10 & 0xffffffff00000000);
            local_res18[0] = fVar36 - param_1;
            pfVar22 = (float *)&local_res10;
            if (0.0 <= local_res18[0]) {
              pfVar22 = local_res18;
            }
            pfVar18 = (float *)&local_res20;
            if (local_res18[0] <= fVar38) {
              pfVar18 = pfVar22;
            }
            local_240 = fVar11 - *pfVar18 * fVar3;
            local_23c = CONCAT31(local_23c._1_3_,1);
            goto LAB_18003dcfd;
          }
        }
      }
      else if (iVar35 == 6) {
        local_254 = (undefined4)_DAT_18095cfc8;
        uStack_250 = (undefined4)((ulonglong)_DAT_18095cfc8 >> 0x20);
        uStack_24c = (undefined4)_DAT_18095cfd0;
        uStack_248 = (undefined4)((ulonglong)_DAT_18095cfd0 >> 0x20);
LAB_18003dcfd:
        local_244 = CONCAT31(local_244._1_3_,1);
      }
      uStack_1f0 = CONCAT44(iStack_26c,uStack_270);
      local_1f8 = local_278;
      local_1e8 = uStack_268;
      uStack_1e4 = uStack_264;
      uStack_1e0 = uStack_260;
      uStack_1dc = uStack_25c;
      local_1d8 = uStack_258;
      uStack_1d4 = local_254;
      uStack_1d0 = uStack_250;
      uStack_1cc = uStack_24c;
      uStack_1c0 = CONCAT44(local_23c,local_240);
      local_1c8 = uStack_248;
      uStack_1c4 = local_244;
      local_1b8 = 0;
      uStack_1b0 = 0;
      local_1a8 = local_228;
      uStack_1a4 = uStack_224;
      uStack_1a0 = uStack_220;
      uStack_19c = uStack_21c;
      local_198 = local_218;
      uStack_194 = uStack_214;
      uStack_18c = uStack_20c;
      uStack_188 = uStack_208;
      uStack_184 = uStack_204;
      FUN_18003d010(&local_1f8,0);
    }
  }
  plVar24 = plStack_f8;
  if (DAT_18095cfd8 != '\0') {
    plVar1 = local_100;
    plVar29 = plVar33;
    if (local_178 != plStack_170) {
      plVar29 = (longlong *)*local_178;
    }
    while ((plVar1 != plVar24 && (plVar29 != (longlong *)0x0))) {
      local_1e8 = 1;
      uStack_1e4 = 0;
      uStack_1e0 = 0;
      uStack_1dc = 0;
      local_1d8 = 0;
      uStack_1d4 = 0;
      uStack_1d0 = 0;
      uStack_1cc = 0;
      local_1c8 = 0;
      uStack_1c4 = uStack_1c4 & 0xffffff00;
      uVar25 = (ulonglong)uStack_1c0 >> 0x28;
      uStack_1c0 = CONCAT35((int3)uVar25,0x3f800000);
      local_1b8 = 0;
      uStack_1b0 = 0;
      local_1a8 = 0;
      uStack_1a4 = 0x3f800000;
      uStack_1a0 = 0;
      uStack_19c = 0xffffffff;
      local_198 = local_198 & 0xffffff00;
      uStack_194 = 0;
      uStack_18c = 0;
      uStack_188 = 0;
      uStack_184 = 0;
      uStack_1f0 = 0x100000000;
      local_1f8 = plVar29;
      iVar35 = FUN_18003b480();
      if (iVar35 == 5) {
        if ((DAT_180ccf664 == 0) ||
           (iVar35 = FUN_180011200((undefined1 *)((longlong)plVar29 + (ulonglong)DAT_180ccf664)),
           0xfffffffd < iVar35 - 1U)) {
          local_res10 = (longlong *)0x0;
        }
        else {
          FUN_1803a0940(&local_res10,iVar35);
          if (((local_res10 != (longlong *)0x0) && (DAT_180ca09f0 != 0)) &&
             (iVar35 = FUN_180011200(), iVar35 - 1U < 1000)) {
            bVar4 = true;
            if ((((DAT_180ccf640 != 0) &&
                 (cVar7 = FUN_180011220((undefined1 *)((longlong)plVar29 + (ulonglong)DAT_180ccf640)
                                       ), cVar7 != '\0')) &&
                ((DAT_180ccf644 != 0 &&
                 (cVar7 = FUN_180011220((undefined1 *)((longlong)plVar29 + (ulonglong)DAT_180ccf644)
                                       ), cVar7 != '\0')))) &&
               ((((DAT_180ccf648 == 0 ||
                  (cVar7 = FUN_180011220((undefined1 *)
                                         ((longlong)plVar29 + (ulonglong)DAT_180ccf648)),
                  cVar7 == '\0')) &&
                 ((DAT_180ccf64c == 0 ||
                  (cVar7 = FUN_180011220((undefined1 *)
                                         ((longlong)plVar29 + (ulonglong)DAT_180ccf64c)),
                  cVar7 == '\0')))) &&
                ((DAT_180ccf650 != 0 &&
                 (cVar7 = FUN_180011220((undefined1 *)((longlong)plVar29 + (ulonglong)DAT_180ccf650)
                                       ), cVar7 != '\0')))))) {
              if (DAT_180ccf654 == 0) {
                fVar38 = 0.0;
              }
              else {
                fVar38 = (float)FUN_18000f3d0((undefined1 *)
                                              ((longlong)plVar29 + (ulonglong)DAT_180ccf654));
              }
              if (DAT_180ccf65c == 0) {
                fVar11 = 0.0;
              }
              else {
                fVar11 = (float)FUN_18000f3d0((undefined1 *)
                                              ((longlong)plVar29 + (ulonglong)DAT_180ccf65c));
              }
              bVar4 = fVar38 < fVar11;
            }
            local_240 = 1.0;
            local_23c = local_23c & 0xffffff00;
            local_228 = 0;
            uStack_224 = 0x3f800000;
            uStack_220 = 0;
            uStack_21c = 0xffffffff;
            local_218 = local_218 & 0xffffff00;
            uStack_214 = 0;
            uStack_20c = 0;
            uStack_208 = 0;
            uStack_204 = 0;
            local_278 = (longlong *)*plVar1;
            uStack_270 = (undefined4)plVar1[1];
            iStack_26c = 2;
            uStack_268 = 0;
            uStack_264 = _DAT_18095cf98;
            uStack_260 = uRam000000018095cf9c;
            uStack_25c = uRam000000018095cfa0;
            uStack_258 = uRam000000018095cfa4;
            puVar19 = (undefined8 *)&DAT_18095cfdc;
            if (bVar4) {
              puVar19 = (undefined8 *)&DAT_18095cfec;
            }
            local_254 = (undefined4)*puVar19;
            uStack_250 = (undefined4)((ulonglong)*puVar19 >> 0x20);
            uStack_24c = (undefined4)puVar19[1];
            uStack_248 = (undefined4)((ulonglong)puVar19[1] >> 0x20);
            local_244 = CONCAT31(local_244._1_3_,1);
            uStack_1f0 = CONCAT44(2,uStack_270);
            local_1e8 = 0;
            uStack_1e4 = _DAT_18095cf98;
            uStack_1e0 = uRam000000018095cf9c;
            uStack_1dc = uRam000000018095cfa0;
            local_1d8 = uRam000000018095cfa4;
            uStack_1d4 = local_254;
            uStack_1d0 = uStack_250;
            uStack_1cc = uStack_24c;
            uStack_1c0 = CONCAT44(local_23c,0x3f800000);
            local_1c8 = uStack_248;
            uStack_1c4 = local_244;
            local_1b8 = 0;
            uStack_1b0 = 0;
            local_1a8 = 0;
            uStack_1a4 = 0x3f800000;
            uStack_1a0 = 0;
            uStack_19c = 0xffffffff;
            local_198 = local_218;
            uStack_194 = 0;
            uStack_18c = 0;
            uStack_188 = 0;
            uStack_184 = 0;
            local_1f8 = local_278;
            FUN_18003d010(&local_1f8,0);
          }
        }
      }
      plVar1 = plVar1 + 3;
    }
  }
  if (DAT_18095d098 != '\0') {
    if (DAT_180cd1304 == '\0') {
      FUN_1803a0b60(&local_res10);
      DAT_181108a00 = local_res10;
      DAT_1811089f8 = FUN_1803a0c50();
      DAT_180cd1304 = '\x01';
    }
    plVar24 = local_118;
    plVar1 = plStack_110;
    if (DAT_1811089f8 != 0) {
      if (DAT_180ccf674 != 0) {
        uVar25 = (ulonglong)DAT_180ccf67c;
        if (DAT_180ccf67c != 0) {
          lVar15 = FUN_18000f3a0((ulonglong)DAT_180ccf674 + DAT_1811089f8);
          plVar24 = local_118;
          plVar1 = plStack_110;
          if (lVar15 - 0x10000U < 0x7ffffffeffff) {
            iVar35 = FUN_180011200(lVar15 + uVar25);
            plVar24 = local_118;
            plVar1 = plStack_110;
            if (iVar35 - 1U < 0xfffffffe) {
              FUN_1803a0940(&local_res10,iVar35);
              plVar24 = local_118;
              plVar1 = plStack_110;
              plVar33 = local_res10;
            }
          }
        }
      }
    }
    while( true ) {
      plVar29 = plStack_110;
      bVar4 = plVar24 == plStack_110;
      plStack_110 = plVar1;
      if (bVar4) break;
      plVar1 = (longlong *)*plVar24;
      if (((DAT_180ccf668 == 0) || (cVar7 = FUN_180011220(), cVar7 == '\0')) &&
         ((DAT_180ccf66c == 0 ||
          ((iVar35 = FUN_180011200(), iVar35 != 3 && ((iVar35 < 2 || (plVar33 != plVar1)))))))) {
        local_254 = 0;
        uStack_250 = 0;
        uStack_24c = 0;
        uStack_248 = 0;
        local_244 = local_244 & 0xffffff00;
        local_240 = 1.0;
        local_23c = local_23c & 0xffffff00;
        local_228 = 0;
        uStack_224 = 0x3f800000;
        uStack_220 = 0;
        uStack_21c = 0xffffffff;
        local_218 = local_218 & 0xffffff00;
        uStack_214 = 0;
        uStack_20c = 0;
        uStack_208 = 0;
        uStack_204 = 0;
        local_278 = (longlong *)*plVar24;
        uStack_270 = (undefined4)plVar24[1];
        iStack_26c = 3;
        uStack_268 = 2;
        uStack_264 = (undefined4)_DAT_18095d09c;
        uStack_260 = (undefined4)((ulonglong)_DAT_18095d09c >> 0x20);
        uStack_25c = (undefined4)uRam000000018095d0a4;
        uStack_258 = (undefined4)((ulonglong)uRam000000018095d0a4 >> 0x20);
        uStack_1f0 = CONCAT44(3,uStack_270);
        local_1e8 = 2;
        uStack_1e4 = uStack_264;
        uStack_1e0 = uStack_260;
        uStack_1dc = uStack_25c;
        local_1d8 = uStack_258;
        uStack_1d4 = 0;
        uStack_1d0 = 0;
        uStack_1cc = 0;
        local_1c8 = 0;
        uStack_1c0 = CONCAT44(local_23c,0x3f800000);
        uStack_1c4 = local_244;
        local_1b8 = 0;
        uStack_1b0 = 0;
        local_1a8 = 0;
        uStack_1a4 = 0x3f800000;
        uStack_1a0 = 0;
        uStack_19c = 0xffffffff;
        local_198 = local_218;
        uStack_194 = 0;
        uStack_18c = 0;
        uStack_188 = 0;
        uStack_184 = 0;
        local_1f8 = local_278;
        FUN_18003d010(&local_1f8,0);
      }
      plVar24 = plVar24 + 3;
      plVar1 = plStack_110;
      plStack_110 = plVar29;
    }
  }
  plVar1 = plStack_128;
  plVar24 = local_130;
  if (DAT_18095d0cc != '\0') {
    for (; plVar24 != plVar1; plVar24 = plVar24 + 3) {
      local_254 = 0;
      uStack_250 = 0;
      uStack_24c = 0;
      uStack_248 = 0;
      local_244 = local_244 & 0xffffff00;
      local_240 = 1.0;
      local_23c = local_23c & 0xffffff00;
      local_228 = 0;
      uStack_224 = 0x3f800000;
      uStack_220 = 0;
      uStack_21c = 0xffffffff;
      local_218 = local_218 & 0xffffff00;
      uStack_214 = 0;
      uStack_20c = 0;
      uStack_208 = 0;
      uStack_204 = 0;
      local_278 = (longlong *)*plVar24;
      uStack_270 = (undefined4)plVar24[1];
      iVar35 = strcmp((char *)plVar24[2],"C_Inferno");
      iStack_26c = 7 - (uint)(iVar35 != 0);
      uStack_268 = 3;
      uStack_264 = (undefined4)_DAT_18095d0d0;
      uStack_260 = (undefined4)((ulonglong)_DAT_18095d0d0 >> 0x20);
      uStack_25c = (undefined4)uRam000000018095d0d8;
      uStack_258 = (undefined4)((ulonglong)uRam000000018095d0d8 >> 0x20);
      uStack_1f0 = CONCAT44(iStack_26c,uStack_270);
      local_1f8 = local_278;
      local_1e8 = 3;
      uStack_1e4 = uStack_264;
      uStack_1e0 = uStack_260;
      uStack_1dc = uStack_25c;
      local_1d8 = uStack_258;
      uStack_1d4 = local_254;
      uStack_1d0 = uStack_250;
      uStack_1cc = uStack_24c;
      uStack_1c0 = CONCAT44(local_23c,local_240);
      local_1c8 = uStack_248;
      uStack_1c4 = local_244;
      local_1b8 = 0;
      uStack_1b0 = 0;
      local_1a8 = local_228;
      uStack_1a4 = uStack_224;
      uStack_1a0 = uStack_220;
      uStack_19c = uStack_21c;
      local_198 = local_218;
      uStack_194 = uStack_214;
      uStack_18c = uStack_20c;
      uStack_188 = uStack_208;
      uStack_184 = uStack_204;
      FUN_18003d010(&local_1f8,1);
    }
  }
  if (DAT_18095d040 != '\0') {
    local_res10 = plStack_140;
    uVar31 = DAT_180ccf614;
    plVar24 = local_160;
    plVar1 = plStack_158;
    if (local_148 != plStack_140) {
      plVar29 = local_148;
      uVar13 = DAT_180ccf6a0;
      uVar30 = DAT_180ccf69c;
      uVar32 = DAT_180ccf698;
      do {
        lVar15 = 0;
        do {
          lVar23 = lVar15 + 1;
          if (*(char *)(plVar29[2] + lVar15) != (&DAT_1806d4100)[lVar15]) {
            if (DAT_180ccf688 != 0) {
              cVar7 = FUN_180011220();
              if (cVar7 != '\0') break;
            }
            if (uVar31 == 0) break;
            iVar35 = FUN_180011200();
            if (iVar35 != -1) break;
            if (((uVar32 == 0) || (uVar30 == 0)) || (uVar13 == 0)) {
              uVar14 = 0;
LAB_18003e417:
              if (DAT_180ccf68c != 0) {
                iVar35 = FUN_180011200();
                if (0 < iVar35) goto LAB_18003e44d;
              }
              if (DAT_180ccf690 == 0) break;
              iVar35 = FUN_180011200();
              if (iVar35 < 1) break;
            }
            else {
              uVar14 = FUN_180011440();
              uVar14 = uVar14 & 0xffff;
              if (uVar14 != 0x1f) goto LAB_18003e417;
            }
LAB_18003e44d:
            uStack_21c = uVar14;
            local_254 = 0;
            uStack_250 = 0;
            uStack_24c = 0;
            uStack_248 = 0;
            local_244 = local_244 & 0xffffff00;
            local_240 = 1.0;
            local_23c = local_23c & 0xffffff00;
            local_228 = 0;
            uStack_224 = 0x3f800000;
            uStack_220 = 0;
            uStack_214 = 0;
            uStack_20c = 0;
            uStack_208 = 0;
            uStack_204 = 0;
            local_278 = (longlong *)*plVar29;
            uStack_270 = (undefined4)plVar29[1];
            iStack_26c = 4;
            uStack_268 = 1;
            uStack_264 = _DAT_18095d044;
            uStack_260 = uRam000000018095d048;
            uStack_25c = uRam000000018095d04c;
            uStack_258 = uRam000000018095d050;
            pcVar17 = (char *)plVar29[2];
            if ((pcVar17 == (char *)0x0) ||
               ((((iVar35 = strcmp(pcVar17,"C_HEGrenade"), iVar35 != 0 &&
                  (iVar35 = strcmp(pcVar17,"C_Flashbang"), iVar35 != 0)) &&
                 ((iVar35 = strcmp(pcVar17,"C_SmokeGrenade"), iVar35 != 0 &&
                  ((iVar35 = strcmp(pcVar17,"C_MolotovGrenade"), iVar35 != 0 &&
                   (iVar35 = strcmp(pcVar17,"C_IncendiaryGrenade"), iVar35 != 0)))))) &&
                (iVar35 = strcmp(pcVar17,"C_DecoyGrenade"), iVar35 != 0)))) {
              uVar8 = 0;
            }
            else {
              uVar8 = 1;
            }
            local_218 = CONCAT31(local_218._1_3_,uVar8);
            uStack_1f0 = CONCAT44(iStack_26c,uStack_270);
            local_1f8 = local_278;
            local_1e8 = uStack_268;
            uStack_1e4 = uStack_264;
            uStack_1e0 = uStack_260;
            uStack_1dc = uStack_25c;
            local_1d8 = uStack_258;
            uStack_1d4 = local_254;
            uStack_1d0 = uStack_250;
            uStack_1cc = uStack_24c;
            uStack_1c0 = CONCAT44(local_23c,local_240);
            local_1c8 = uStack_248;
            uStack_1c4 = local_244;
            local_1b8 = 0;
            uStack_1b0 = 0;
            local_1a8 = local_228;
            uStack_1a4 = uStack_224;
            uStack_1a0 = uStack_220;
            uStack_19c = uStack_21c;
            local_198 = local_218;
            uStack_194 = uStack_214;
            uStack_18c = uStack_20c;
            uStack_188 = uStack_208;
            uStack_184 = uStack_204;
            FUN_18003d010(&local_1f8,0);
            uVar31 = DAT_180ccf614;
            uVar13 = DAT_180ccf6a0;
            uVar30 = DAT_180ccf69c;
            uVar32 = DAT_180ccf698;
            break;
          }
          lVar15 = lVar23;
        } while (lVar23 != 5);
        plVar29 = plVar29 + 3;
        plVar24 = local_160;
        plVar1 = plStack_158;
      } while (plVar29 != local_res10);
    }
    while( true ) {
      plVar29 = plStack_158;
      bVar4 = plVar24 == plStack_158;
      plStack_158 = plVar1;
      if (bVar4) break;
      if (uVar31 != 0) {
        iVar35 = FUN_180011200((ulonglong)uVar31 + *plVar24);
        if (iVar35 == -1) {
          local_254 = 0;
          uStack_250 = 0;
          uStack_24c = 0;
          uStack_248 = 0;
          local_244 = local_244 & 0xffffff00;
          local_240 = 1.0;
          local_23c = local_23c & 0xffffff00;
          local_228 = 0;
          uStack_224 = 0x3f800000;
          uStack_220 = 0;
          uStack_21c = 0xffffffff;
          local_218 = local_218 & 0xffffff00;
          uStack_214 = 0;
          uStack_20c = 0;
          uStack_208 = 0;
          uStack_204 = 0;
          local_278 = (longlong *)*plVar24;
          uStack_270 = (undefined4)plVar24[1];
          iStack_26c = 5;
          uStack_268 = 1;
          uStack_264 = _DAT_18095d044;
          uStack_260 = uRam000000018095d048;
          uStack_25c = uRam000000018095d04c;
          uStack_258 = uRam000000018095d050;
          uStack_1f0 = CONCAT44(5,uStack_270);
          local_1e8 = 1;
          uStack_1e4 = _DAT_18095d044;
          uStack_1e0 = uRam000000018095d048;
          uStack_1dc = uRam000000018095d04c;
          local_1d8 = uRam000000018095d050;
          uStack_1d4 = 0;
          uStack_1d0 = 0;
          uStack_1cc = 0;
          local_1c8 = 0;
          uStack_1c0 = CONCAT44(local_23c,0x3f800000);
          uStack_1c4 = local_244;
          local_1b8 = 0;
          uStack_1b0 = 0;
          local_1a8 = 0;
          uStack_1a4 = 0x3f800000;
          uStack_1a0 = 0;
          uStack_19c = 0xffffffff;
          local_198 = local_218;
          uStack_194 = 0;
          uStack_18c = 0;
          uStack_188 = 0;
          uStack_184 = 0;
          local_1f8 = local_278;
          FUN_18003d010(&local_1f8,0);
          uVar31 = DAT_180ccf614;
        }
      }
      plVar24 = plVar24 + 3;
      plVar1 = plStack_158;
      plStack_158 = plVar29;
    }
  }
  if (local_160 == (longlong *)0x0) goto LAB_18003e73d;
  plVar24 = local_160;
  if ((ulonglong)(((longlong)local_150 - (longlong)local_160 >> 3) * 8) < 0x1000) {
LAB_18003e720:
    puVar27 = puVar26;
  }
  else {
    plVar24 = (longlong *)local_160[-1];
    if ((undefined1 *)0x1f < (undefined1 *)((longlong)local_160 + (-8 - (longlong)plVar24))) {
      plVar24 = (longlong *)&DAT_00000005;
      pcVar2 = (code *)swi(0x29);
      (*pcVar2)(5);
      puVar26 = auStack_290;
      goto LAB_18003e720;
    }
  }
  *(undefined8 *)(puVar27 + -8) = 0x18003e72b;
  thunk_FUN_1803d64e0(plVar24);
  local_160 = (longlong *)0x0;
  plStack_158 = (longlong *)0x0;
  local_150 = (longlong *)0x0;
  puVar28 = puVar27;
LAB_18003e73d:
  if (local_148 != (longlong *)0x0) {
    plVar24 = local_148;
    if ((0xfff < (ulonglong)(((longlong)local_138 - (longlong)local_148 >> 3) * 8)) &&
       (plVar24 = (longlong *)local_148[-1],
       (undefined1 *)0x1f < (undefined1 *)((longlong)local_148 + (-8 - (longlong)plVar24)))) {
      plVar24 = (longlong *)&DAT_00000005;
      pcVar2 = (code *)swi(0x29);
      (*pcVar2)(5);
      puVar28 = puVar28 + 8;
    }
    *(undefined8 *)(puVar28 + -8) = 0x18003e793;
    thunk_FUN_1803d64e0(plVar24);
    local_148 = (longlong *)0x0;
    plStack_140 = (longlong *)0x0;
    local_138 = (longlong *)0x0;
  }
  if (local_130 != (longlong *)0x0) {
    plVar24 = local_130;
    if ((0xfff < (ulonglong)(((longlong)local_120 - (longlong)local_130 >> 3) * 8)) &&
       (plVar24 = (longlong *)local_130[-1],
       (undefined1 *)0x1f < (undefined1 *)((longlong)local_130 + (-8 - (longlong)plVar24)))) {
      plVar24 = (longlong *)&DAT_00000005;
      pcVar2 = (code *)swi(0x29);
      (*pcVar2)(5);
      puVar28 = puVar28 + 8;
    }
    *(undefined8 *)(puVar28 + -8) = 0x18003e7f5;
    thunk_FUN_1803d64e0(plVar24);
    local_130 = (longlong *)0x0;
    plStack_128 = (longlong *)0x0;
    local_120 = (longlong *)0x0;
  }
  if (local_118 != (longlong *)0x0) {
    plVar24 = local_118;
    if ((0xfff < (ulonglong)(((longlong)local_108 - (longlong)local_118 >> 3) * 8)) &&
       (plVar24 = (longlong *)local_118[-1],
       (undefined1 *)0x1f < (undefined1 *)((longlong)local_118 + (-8 - (longlong)plVar24)))) {
      plVar24 = (longlong *)&DAT_00000005;
      pcVar2 = (code *)swi(0x29);
      (*pcVar2)(5);
      puVar28 = puVar28 + 8;
    }
    *(undefined8 *)(puVar28 + -8) = 0x18003e85d;
    thunk_FUN_1803d64e0(plVar24);
    local_118 = (longlong *)0x0;
    plStack_110 = (longlong *)0x0;
    local_108 = (longlong *)0x0;
  }
  if (local_100 != (longlong *)0x0) {
    plVar24 = local_100;
    if ((0xfff < (ulonglong)(((longlong)local_f0 - (longlong)local_100 >> 3) * 8)) &&
       (plVar24 = (longlong *)local_100[-1],
       (undefined1 *)0x1f < (undefined1 *)((longlong)local_100 + (-8 - (longlong)plVar24)))) {
      plVar24 = (longlong *)&DAT_00000005;
      pcVar2 = (code *)swi(0x29);
      (*pcVar2)(5);
      puVar28 = puVar28 + 8;
    }
    *(undefined8 *)(puVar28 + -8) = 0x18003e8cb;
    thunk_FUN_1803d64e0(plVar24);
    local_100 = (longlong *)0x0;
    plStack_f8 = (longlong *)0x0;
    local_f0 = (longlong *)0x0;
  }
  if (local_178 != (longlong *)0x0) {
    plVar24 = local_178;
    if ((0xfff < (ulonglong)(((longlong)local_168 - (longlong)local_178 >> 3) * 8)) &&
       (plVar24 = (longlong *)local_178[-1],
       (undefined1 *)0x1f < (undefined1 *)((longlong)local_178 + (-8 - (longlong)plVar24)))) {
      plVar24 = (longlong *)&DAT_00000005;
      pcVar2 = (code *)swi(0x29);
      (*pcVar2)(5);
      puVar28 = puVar28 + 8;
    }
    *(undefined8 *)(puVar28 + -8) = 0x18003e933;
    thunk_FUN_1803d64e0(plVar24);
    local_178 = (longlong *)0x0;
    plStack_170 = (longlong *)0x0;
    local_168 = (longlong *)0x0;
  }
  if (local_d0 == (longlong *)0x0) {
    return;
  }
  plVar24 = local_d0;
  if ((0xfff < (ulonglong)(((longlong)local_c0 - (longlong)local_d0 >> 3) * 8)) &&
     (plVar24 = (longlong *)local_d0[-1],
     (undefined1 *)0x1f < (undefined1 *)((longlong)local_d0 + (-8 - (longlong)plVar24)))) {
    plVar24 = (longlong *)&DAT_00000005;
    pcVar2 = (code *)swi(0x29);
    (*pcVar2)(5);
    puVar28 = puVar28 + 8;
  }
  *(undefined8 *)(puVar28 + -8) = 0x18003e99b;
  thunk_FUN_1803d64e0(plVar24);
  return;
}



