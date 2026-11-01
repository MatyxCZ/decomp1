/* ===== 180295410 FUN_180295410 ===== */

void FUN_180295410(undefined8 param_1,longlong param_2)

{
  ulonglong uVar1;
  size_t sVar2;
  ulonglong uVar3;
  undefined1 local_res18 [8];
  
  FUN_18028ec90();
  if (DAT_180cfcaa0 != '\0') {
    if (DAT_180cfcac8 == '\0') {
      FUN_180290ae0(param_2,6);
    }
    else {
      FUN_180290880(param_2,PTR_s_set_item_texture_prefab_180650238,DAT_180cfcac4);
    }
    if (DAT_180cfcad0 == '\0') {
      FUN_180290ae0(param_2,7);
    }
    else {
      FUN_180290880(param_2,PTR_s_set_item_texture_seed_180650240,DAT_180cfcacc);
    }
    if (DAT_180cfcad8 == '\0') {
      FUN_180290ae0(param_2,8);
    }
    else {
      FUN_180290880(param_2,PTR_s_set_item_texture_wear_180650248,DAT_180cfcad4);
    }
    FUN_180066890((ulonglong)DAT_180cfe5d4 + param_2,&DAT_180cfcaa2);
    FUN_1800239d0((ulonglong)DAT_180cfe5d8 + param_2,&DAT_180cfcaa8);
    FUN_180013280((ulonglong)DAT_180cfe5dc + param_2,&DAT_180cfcab0);
    FUN_180013280((ulonglong)DAT_180cfe5e0 + param_2,&DAT_180cfcab4);
    FUN_180013280((ulonglong)DAT_180cfe5e4 + param_2,&DAT_180cfcab8);
    FUN_1800233d0((ulonglong)DAT_180cfe5f4 + param_2,&DAT_180cfcabc);
    FUN_1800233d0((ulonglong)DAT_180cfe5e8 + param_2,&DAT_180cfcabd);
    FUN_1800233d0((ulonglong)DAT_180cfe5f8 + param_2,&DAT_180cfcabe);
    FUN_180013280((ulonglong)DAT_180cfe5ec + param_2,&DAT_180cfcac0);
    uVar1 = (ulonglong)DAT_180cfe5f0;
    if ((DAT_180cfe5f0 != 0) && (param_2 != 0)) {
      sVar2 = strlen(&DAT_180cfcadc);
      if (0xa0 < sVar2) {
        sVar2 = 0xa0;
      }
      uVar3 = 0;
      if (sVar2 != 0) {
        do {
          FUN_1800233d0(uVar3 + param_2 + uVar1,&DAT_180cfcadc + uVar3);
          uVar3 = uVar3 + 1;
        } while (uVar3 < sVar2);
      }
      local_res18[0] = 0;
      FUN_1800233d0(sVar2 + param_2 + uVar1,local_res18);
    }
    FUN_18028fbf0("gloves | restore | def %d | id %llX | initialized %d | name \'%s\'",DAT_180cfcaa2
                  ,DAT_180cfcaa8,DAT_180cfcabd != '\0',&DAT_180cfcadc);
    FUN_1802950f0();
    FUN_180290b00(DAT_180961ea0,param_2);
    FUN_180294d90(param_1,"restore");
  }
  return;
}



/* ===== 180295660 FUN_180295660 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_180295660(longlong param_1)

{
  char cVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  if (DAT_180cfcaa0 == '\0') {
    cVar1 = FUN_180294b20(param_1,&DAT_180cfcac4);
    if (cVar1 == '\0') {
      return 0;
    }
    DAT_180cfcaa2 = FUN_180011440((ulonglong)DAT_180cfe5d4 + param_1);
    DAT_180cfcaa8 = FUN_18000f3a0((ulonglong)DAT_180cfe5d8 + param_1);
    _DAT_180cfcab0 = FUN_180011200((ulonglong)DAT_180cfe5dc + param_1);
    _DAT_180cfcab4 = FUN_180011200((ulonglong)DAT_180cfe5e0 + param_1);
    _DAT_180cfcab8 = FUN_180011200((ulonglong)DAT_180cfe5e4 + param_1);
    DAT_180cfcabc = FUN_180011220((ulonglong)DAT_180cfe5f4 + param_1);
    DAT_180cfcabd = FUN_180011220((ulonglong)DAT_180cfe5e8 + param_1);
    DAT_180cfcabe = FUN_180011220((ulonglong)DAT_180cfe5f8 + param_1);
    _DAT_180cfcac0 = FUN_180011200((ulonglong)DAT_180cfe5ec + param_1);
    uVar4 = (ulonglong)DAT_180cfe5f0;
    _DAT_180cfcadc = 0;
    uRam0000000180cfcae4 = 0;
    _DAT_180cfcaec = 0;
    uRam0000000180cfcaf4 = 0;
    _DAT_180cfcafc = 0;
    uRam0000000180cfcb04 = 0;
    _DAT_180cfcb0c = 0;
    uRam0000000180cfcb14 = 0;
    if (DAT_180cfe5f0 != 0) {
      lVar3 = 0;
      do {
        cVar1 = FUN_180011220(param_1 + uVar4 + lVar3);
        (&DAT_180cfcadc)[lVar3] = cVar1;
        if (cVar1 == '\0') break;
        uVar2 = lVar3 + 2;
        lVar3 = lVar3 + 1;
      } while (uVar2 < 0x40);
    }
    DAT_180cfcaa0 = '\x01';
  }
  return 1;
}



/* ===== 1802957d0 FUN_1802957d0 ===== */

void FUN_1802957d0(undefined8 param_1,longlong param_2,undefined4 param_3)

{
  char cVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  short sVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  longlong lVar7;
  ULONGLONG UVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  size_t sVar11;
  undefined8 uVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong local_80;
  char local_78 [64];
  
  if (DAT_180cd0254 == '\0') {
    DAT_180cd0254 = '\x01';
    FUN_18028fbf0("gloves | agent lock | agent %d: model has no separate third-person glove meshes (NL record+0x169 = 0) | custom gloves off, view cleared while it is used"
                  ,param_3);
  }
  cVar1 = FUN_180011220((ulonglong)DAT_180cfe5e8 + param_2);
  if (((cVar1 == '\0') && (sVar4 = FUN_180011440((ulonglong)DAT_180cfe5d4 + param_2), sVar4 == 0))
     && (lVar7 = FUN_18000f3a0((ulonglong)DAT_180cfe5d8 + param_2), lVar7 == 0)) {
    return;
  }
  if (((DAT_180cfca50 < 6) && (UVar8 = GetTickCount64(), DAT_180cfca48 <= UVar8)) &&
     (cVar1 = FUN_180295660(param_2), cVar1 != '\0')) {
    UVar8 = GetTickCount64();
    DAT_180cfca48 = UVar8 + 500;
    DAT_180cfca50 = DAT_180cfca50 + 1;
    if (DAT_180cfca50 == 6) {
      FUN_18028fbf0("[error] gloves | agent lock | the view keeps coming back, stopped clearing");
    }
    uVar10 = (ulonglong)DAT_180cfe5d4;
    uVar5 = FUN_180011440(uVar10 + param_2);
    uVar16 = (ulonglong)DAT_180cfe5d8;
    uVar9 = FUN_18000f3a0(uVar16 + param_2);
    uVar15 = (ulonglong)DAT_180cfe5e8;
    uVar2 = FUN_180011220(uVar15 + param_2);
    uVar13 = DAT_180cfe654;
    if (((DAT_180cfe654 != 0) || ((DAT_180cfe63c != 0 && (uVar13 = DAT_180cfe63c + 8, uVar13 != 0)))
        ) && (param_2 != 0)) {
      local_80 = local_80 & 0xffffffff00000000;
      FUN_180013280((ulonglong)uVar13 + param_2,&local_80);
    }
    local_80 = local_80 & 0xffffffffffff0000;
    FUN_180066890(uVar10 + param_2,&local_80);
    uVar14 = 0;
    local_80 = 0;
    FUN_1800239d0(uVar16 + param_2,&local_80);
    local_80 = local_80 & 0xffffffff00000000;
    FUN_180013280((ulonglong)DAT_180cfe5ec + param_2,&local_80);
    local_80 = local_80 & 0xffffffffffffff00;
    FUN_1800233d0(uVar15 + param_2,&local_80);
    uVar10 = (ulonglong)DAT_180cfe5f0;
    local_78[0] = '\0';
    local_78[1] = '\0';
    local_78[2] = '\0';
    local_78[3] = '\0';
    local_78[4] = '\0';
    local_78[5] = '\0';
    local_78[6] = '\0';
    local_78[7] = '\0';
    local_78[8] = '\0';
    local_78[9] = '\0';
    local_78[10] = '\0';
    local_78[0xb] = '\0';
    local_78[0xc] = '\0';
    local_78[0xd] = '\0';
    local_78[0xe] = '\0';
    local_78[0xf] = '\0';
    local_78[0x10] = '\0';
    local_78[0x11] = '\0';
    local_78[0x12] = '\0';
    local_78[0x13] = '\0';
    local_78[0x14] = '\0';
    local_78[0x15] = '\0';
    local_78[0x16] = '\0';
    local_78[0x17] = '\0';
    local_78[0x18] = '\0';
    local_78[0x19] = '\0';
    local_78[0x1a] = '\0';
    local_78[0x1b] = '\0';
    local_78[0x1c] = '\0';
    local_78[0x1d] = '\0';
    local_78[0x1e] = '\0';
    local_78[0x1f] = '\0';
    local_78[0x20] = '\0';
    local_78[0x21] = '\0';
    local_78[0x22] = '\0';
    local_78[0x23] = '\0';
    local_78[0x24] = '\0';
    local_78[0x25] = '\0';
    local_78[0x26] = '\0';
    local_78[0x27] = '\0';
    local_78[0x28] = '\0';
    local_78[0x29] = '\0';
    local_78[0x2a] = '\0';
    local_78[0x2b] = '\0';
    local_78[0x2c] = '\0';
    local_78[0x2d] = '\0';
    local_78[0x2e] = '\0';
    local_78[0x2f] = '\0';
    local_78[0x30] = '\0';
    local_78[0x31] = '\0';
    local_78[0x32] = '\0';
    local_78[0x33] = '\0';
    local_78[0x34] = '\0';
    local_78[0x35] = '\0';
    local_78[0x36] = '\0';
    local_78[0x37] = '\0';
    local_78[0x38] = '\0';
    local_78[0x39] = '\0';
    local_78[0x3a] = '\0';
    local_78[0x3b] = '\0';
    local_78[0x3c] = '\0';
    local_78[0x3d] = '\0';
    local_78[0x3e] = '\0';
    local_78[0x3f] = '\0';
    if ((DAT_180cfe5f0 != 0) && (param_2 != 0)) {
      sVar11 = strlen(local_78);
      if (0xa0 < sVar11) {
        sVar11 = 0xa0;
      }
      if (sVar11 != 0) {
        do {
          FUN_1800233d0(uVar14 + param_2 + uVar10,local_78 + uVar14);
          uVar14 = uVar14 + 1;
        } while (uVar14 < sVar11);
      }
      local_80 = local_80 & 0xffffffffffffff00;
      FUN_1800233d0(sVar11 + param_2 + uVar10,&local_80);
    }
    DAT_180cd0257 = 1;
    DAT_180cd0255 = 0;
    DAT_180cd0256 = 0;
    FUN_180295090();
    FUN_18028ec90();
    uVar3 = FUN_180011220((ulonglong)DAT_180cfe5e8 + param_2);
    uVar12 = FUN_18000f3a0((ulonglong)DAT_180cfe5d8 + param_2);
    uVar6 = FUN_180011440((ulonglong)DAT_180cfe5d4 + param_2);
    FUN_18028fbf0("gloves | agent lock | agent %d | view cleared (def %d, id %llX, initialized %d) -> def %d, id %llX, initialized %d"
                  ,param_3,uVar5,uVar9,uVar2,uVar6,uVar12,uVar3);
    FUN_180290b00(DAT_180961ea0,param_2);
    FUN_180294d90(param_1,"agent lock");
  }
  return;
}



/* ===== 180295ae0 FUN_180295ae0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180295ae0(longlong *param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  bool bVar10;
  int *piVar11;
  char cVar12;
  char cVar13;
  byte bVar14;
  undefined1 uVar15;
  short sVar16;
  int iVar17;
  undefined4 uVar18;
  int iVar19;
  uint uVar20;
  ULONGLONG UVar21;
  longlong lVar22;
  undefined4 *puVar23;
  ulonglong uVar24;
  size_t sVar25;
  int *piVar26;
  longlong **pplVar27;
  int *piVar28;
  int *piVar29;
  ulonglong uVar30;
  char *pcVar31;
  char *pcVar32;
  longlong **pplVar33;
  longlong lVar34;
  longlong lVar35;
  undefined1 auStack_dd8 [32];
  undefined4 local_db8;
  double local_db0;
  undefined8 local_da8;
  undefined4 local_da0;
  char *local_d98;
  char *local_d90;
  undefined4 local_d88;
  uint local_d78 [2];
  longlong *local_d70;
  char *local_d68;
  undefined1 local_d60 [32];
  undefined1 local_d40 [2856];
  undefined4 local_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  int local_1f8 [2];
  undefined4 uStack_1f0;
  float fStack_1ec;
  undefined4 local_1e8;
  char acStack_1dc [64];
  char cStack_19c;
  ulonglong local_58;
  
  local_58 = DAT_180919500 ^ (ulonglong)auStack_dd8;
  if (DAT_180cfe62c == 0) {
    return;
  }
  if (*param_1 == 0) {
    return;
  }
  if (DAT_180ca09f4 == 0) {
    return;
  }
  local_d70 = param_2;
  cVar12 = FUN_180011220(*param_1 + (ulonglong)DAT_180ca09f4);
  if (1 < (byte)(cVar12 - 2U)) {
    return;
  }
  lVar34 = *param_1;
  uVar24 = (ulonglong)DAT_180cfe62c;
  if (DAT_180cd011d != '\0') {
    if ((DAT_180cfe630 == 0) || (cVar13 = FUN_180011220(), cVar13 != '\0')) {
      if ((DAT_180cd031c == '\0') && (UVar21 = GetTickCount64(), 1999 < UVar21 - _DAT_180cfe668)) {
        DAT_180cd031c = '\x01';
        UVar21 = GetTickCount64();
        lVar22 = UVar21 - _DAT_180cfe668;
        if (DAT_180cfe630 == 0) {
          uVar30 = 0xffffffff;
        }
        else {
          bVar14 = FUN_180011220(lVar34 + (ulonglong)DAT_180cfe630);
          uVar30 = (ulonglong)bVar14;
        }
        FUN_18028fbf0("[error] gloves | reapply flag still %d after %llu ms: the pawn\'s ClientThink did not consume it"
                      ,uVar30,lVar22);
      }
    }
    else {
      DAT_180cd011d = cVar13;
      if (((DAT_180cfe658 == 0) || (lVar34 == 0)) || (iVar17 = FUN_180011200(), iVar17 == -1)) {
        pcVar32 = (char *)0x0;
      }
      else {
        FUN_1803a0940(&local_d68,iVar17);
        pcVar32 = local_d68;
      }
      pcVar31 = "not spawned";
      if (pcVar32 != (char *)0x0) {
        pcVar31 = "spawned";
      }
      if ((DAT_180cfe658 == 0) || (lVar34 == 0)) {
        uVar18 = 0xffffffff;
      }
      else {
        uVar18 = FUN_180011200((ulonglong)DAT_180cfe658 + lVar34);
      }
      UVar21 = GetTickCount64();
      FUN_18028fbf0("gloves | reapply flag consumed by the game after %llu ms | world gloves %08X %s"
                    ,UVar21 - _DAT_180cfe668,uVar18,pcVar31);
    }
  }
  if ((DAT_180cfe658 == 0) || (*param_1 == 0)) {
    iVar17 = -1;
  }
  else {
    iVar17 = FUN_180011200(*param_1 + (ulonglong)DAT_180cfe658);
  }
  if (iVar17 != DAT_1809f361c) {
    pcVar32 = "";
    if (DAT_180ccfedf != '\0') {
      pcVar32 = " | colours follow the new build";
    }
    FUN_18028fbf0("colors | gloves | world gloves handle %08X -> %08X%s",DAT_1809f361c,iVar17,
                  pcVar32);
    DAT_1809f361c = iVar17;
  }
  if (DAT_180921498 == '\0') {
    iVar17 = 0;
  }
  else {
    iVar17 = DAT_1809214b0;
    if (cVar12 != '\x02') {
      iVar17 = DAT_1809214ac;
    }
    if (iVar17 != 0) {
      iVar19 = FUN_1804e4d70(&DAT_1809f2710);
      if (iVar19 != 0) {
LAB_18029666d:
                    /* WARNING: Subroutine does not return */
        FUN_1804e4a90(5);
      }
      if (DAT_1809f275c == 0x7fffffff) {
        DAT_1809f275c = 0x7ffffffe;
LAB_180296662:
                    /* WARNING: Subroutine does not return */
        FUN_1804e4a90(6);
      }
      FUN_180540530(local_d40,&DAT_1809f1be0,0xb28);
      FUN_1804e4e90(&DAT_1809f2710);
      if ((((local_d40[0] != '\0') && (local_d40._4_4_ == iVar17)) &&
          (local_d40._8_4_ == (uint)(cVar12 == '\x02'))) && (local_d40[0xd] == '\0')) {
        FUN_1802957d0(*param_1,uVar24 + lVar34,iVar17);
        return;
      }
    }
  }
  lVar34 = uVar24 + lVar34;
  if ((DAT_180cd0254 != '\0') || (DAT_180cfca50 != 0)) {
    FUN_18028fbf0("gloves | agent lock | released (agent %d)",iVar17);
    DAT_180cd0254 = '\0';
    DAT_180cfca50 = 0;
  }
  if (cVar12 == '\x02') {
    iVar17 = DAT_1809214a8;
    if (DAT_1809214a8 < 0) {
      iVar17 = DAT_1809214a0;
    }
  }
  else {
    iVar17 = DAT_1809214a0;
  }
  if (((DAT_180921498 != '\0') && (iVar17 != 0)) &&
     ((lVar22 = FUN_180280c60(iVar17), lVar22 != 0 &&
      ((*(int *)(lVar22 + 0x48) == 3 && (0 < iVar17)))))) {
    piVar28 = &DAT_18092174c;
    do {
      if ((*piVar28 == iVar17) && (piVar28[1] == (uint)(cVar12 == '\x02'))) goto LAB_180295ee6;
      piVar28 = piVar28 + 0x68;
    } while (piVar28 != &DAT_180931b4c);
    piVar28 = &DAT_18092174c;
    do {
      if ((*piVar28 == iVar17) && (piVar28[1] < 0)) goto LAB_180295ee6;
      piVar28 = piVar28 + 0x68;
    } while (piVar28 != &DAT_180931b4c);
  }
LAB_180295e87:
  if (DAT_180cd0257 != '\0') {
    FUN_180295410(*param_1,lVar34);
  }
  return;
LAB_180295ee6:
  if (piVar28[2] == 0) goto LAB_180295e87;
  cVar12 = FUN_180295660(lVar34);
  if (cVar12 == '\0') {
    return;
  }
  lVar35 = 3;
  lVar22 = 3;
  piVar11 = local_1f8;
  do {
    piVar29 = piVar28;
    piVar26 = piVar11;
    uVar6 = *(undefined8 *)(piVar29 + 2);
    uVar7 = *(undefined8 *)(piVar29 + 4);
    uVar8 = *(undefined8 *)(piVar29 + 6);
    *(undefined8 *)piVar26 = *(undefined8 *)piVar29;
    *(undefined8 *)(piVar26 + 2) = uVar6;
    uVar6 = *(undefined8 *)(piVar29 + 8);
    uVar9 = *(undefined8 *)(piVar29 + 10);
    *(undefined8 *)(piVar26 + 4) = uVar7;
    *(undefined8 *)(piVar26 + 6) = uVar8;
    uVar7 = *(undefined8 *)(piVar29 + 0xc);
    uVar8 = *(undefined8 *)(piVar29 + 0xe);
    *(undefined8 *)(piVar26 + 8) = uVar6;
    *(undefined8 *)(piVar26 + 10) = uVar9;
    uVar6 = *(undefined8 *)(piVar29 + 0x10);
    uVar9 = *(undefined8 *)(piVar29 + 0x12);
    *(undefined8 *)(piVar26 + 0xc) = uVar7;
    *(undefined8 *)(piVar26 + 0xe) = uVar8;
    uVar7 = *(undefined8 *)(piVar29 + 0x14);
    uVar8 = *(undefined8 *)(piVar29 + 0x16);
    *(undefined8 *)(piVar26 + 0x10) = uVar6;
    *(undefined8 *)(piVar26 + 0x12) = uVar9;
    uVar6 = *(undefined8 *)(piVar29 + 0x18);
    uVar9 = *(undefined8 *)(piVar29 + 0x1a);
    *(undefined8 *)(piVar26 + 0x14) = uVar7;
    *(undefined8 *)(piVar26 + 0x16) = uVar8;
    uVar7 = *(undefined8 *)(piVar29 + 0x1c);
    uVar8 = *(undefined8 *)(piVar29 + 0x1e);
    *(undefined8 *)(piVar26 + 0x18) = uVar6;
    *(undefined8 *)(piVar26 + 0x1a) = uVar9;
    *(undefined8 *)(piVar26 + 0x1c) = uVar7;
    *(undefined8 *)(piVar26 + 0x1e) = uVar8;
    lVar22 = lVar22 + -1;
    piVar11 = piVar26 + 0x20;
    piVar28 = piVar29 + 0x20;
  } while (lVar22 != 0);
  iVar17 = piVar29[0x21];
  iVar19 = piVar29[0x22];
  iVar1 = piVar29[0x23];
  iVar2 = piVar29[0x24];
  iVar3 = piVar29[0x25];
  iVar4 = piVar29[0x26];
  iVar5 = piVar29[0x27];
  piVar26[0x20] = piVar29[0x20];
  piVar26[0x21] = iVar17;
  piVar26[0x22] = iVar19;
  piVar26[0x23] = iVar1;
  piVar26[0x24] = iVar2;
  piVar26[0x25] = iVar3;
  piVar26[0x26] = iVar4;
  piVar26[0x27] = iVar5;
  sVar16 = FUN_180011440((ulonglong)DAT_180cfe5d4 + lVar34);
  if (((sVar16 == (short)local_1f8[0]) &&
      (lVar22 = FUN_18000f3a0((ulonglong)DAT_180cfe5d8 + lVar34), lVar22 == -0xffffffffffffff0)) &&
     (cVar12 = FUN_180294c70(lVar34,local_1f8), cVar12 != '\0')) {
    bVar10 = true;
  }
  else {
    bVar10 = false;
  }
  if ((DAT_180cd0255 == '\0') || (cVar12 = FUN_18028ff10(&DAT_1809f37c0,local_1f8), cVar12 == '\0'))
  {
    UVar21 = GetTickCount64();
    if (UVar21 < DAT_180cfca48) {
      return;
    }
    local_d68 = "new";
    DAT_180cfe690 = 0;
    if (DAT_180cd0255 != '\0') {
      local_d68 = "changed";
    }
    DAT_180cfca1c = 0;
  }
  else if (bVar10) {
    DAT_180cfca1c = 0;
    FUN_180294e60(*param_1);
    if (DAT_180cd0256 != '\0') {
      return;
    }
    puVar23 = (undefined4 *)FUN_1802903e0(local_d60,local_1f8);
    local_218 = *puVar23;
    uStack_214 = puVar23[1];
    uStack_210 = puVar23[2];
    uStack_20c = puVar23[3];
    local_208 = puVar23[4];
    uStack_204 = puVar23[5];
    uStack_200 = puVar23[6];
    uStack_1fc = puVar23[7];
    cVar12 = FUN_18028ee00(&local_218);
    iVar17 = DAT_180cfe690;
    if ((cVar12 != '\0') || (2 < DAT_180cfe690)) {
      puVar23 = (undefined4 *)FUN_1802903e0(local_d60,local_1f8);
      local_218 = *puVar23;
      uStack_214 = puVar23[1];
      uStack_210 = puVar23[2];
      uStack_20c = puVar23[3];
      local_208 = puVar23[4];
      uStack_204 = puVar23[5];
      uStack_200 = puVar23[6];
      uStack_1fc = puVar23[7];
      uVar15 = FUN_18028ee00(&local_218);
      FUN_18028fbf0("colors | gloves | kit %d | consumed %d | attempts %d",uStack_1f0,uVar15,iVar17)
      ;
      DAT_180cd0256 = 1;
      FUN_18028ec90();
      return;
    }
    UVar21 = GetTickCount64();
    if (UVar21 < DAT_180cfca48) {
      return;
    }
    DAT_180cfe690 = DAT_180cfe690 + 1;
    local_d68 = "colors retry";
  }
  else {
    if (5 < DAT_180cfca1c) {
      return;
    }
    UVar21 = GetTickCount64();
    if (UVar21 < DAT_180cfca48) {
      return;
    }
    DAT_180cfca1c = DAT_180cfca1c + 1;
    if (DAT_180cfca1c == 6) {
      FUN_1802b2560("[error] skins | gloves keep resetting, stopped reapplying");
    }
    local_d68 = "view reset by the game";
  }
  UVar21 = GetTickCount64();
  DAT_180cfca48 = UVar21 + 500;
  uVar20 = DAT_180cfe654;
  if (((DAT_180cfe654 != 0) || ((DAT_180cfe63c != 0 && (uVar20 = DAT_180cfe63c + 8, uVar20 != 0))))
     && (lVar34 != 0)) {
    local_d78[0] = 0;
    FUN_180013280((ulonglong)uVar20 + lVar34,local_d78);
  }
  local_d78[0] = CONCAT22(local_d78[0]._2_2_,(short)local_1f8[0]);
  FUN_180066890((ulonglong)DAT_180cfe5d4 + lVar34,local_d78);
  FUN_1800239d0((ulonglong)DAT_180cfe5d8 + lVar34,&DAT_180650290);
  local_d78[0] = 0xf0000000;
  FUN_180013280((ulonglong)DAT_180cfe5dc + lVar34,local_d78);
  local_d78[0] = 0x10;
  FUN_180013280((ulonglong)DAT_180cfe5e0 + lVar34,local_d78);
  local_d78[0] = FUN_18000f3a0((ulonglong)DAT_180cfe638 + *local_d70);
  FUN_180013280((ulonglong)DAT_180cfe5e4 + lVar34,local_d78);
  local_d78[0]._0_1_ = 1;
  FUN_1800233d0((ulonglong)DAT_180cfe5f4 + lVar34,local_d78);
  local_d78[0]._0_1_ = 1;
  FUN_1800233d0((ulonglong)DAT_180cfe5e8 + lVar34,local_d78);
  local_d78[0] = CONCAT31(local_d78[0]._1_3_,1);
  FUN_1800233d0((ulonglong)DAT_180cfe5f8 + lVar34,local_d78);
  FUN_180013280((ulonglong)DAT_180cfe5ec + lVar34,&DAT_18065026c);
  FUN_180290880(lVar34,PTR_s_set_item_texture_prefab_180650238);
  FUN_180290880(lVar34,PTR_s_set_item_texture_seed_180650240);
  local_d70 = (longlong *)CONCAT44(local_d70._4_4_,0x3f800000);
  local_d78[0] = 0;
  FUN_180290880(lVar34,"set item texture wear");
  uVar24 = (ulonglong)DAT_180cfe5f0;
  if ((DAT_180cfe5f0 != 0) && (lVar34 != 0)) {
    sVar25 = strlen(acStack_1dc);
    if (0xa0 < sVar25) {
      sVar25 = 0xa0;
    }
    uVar30 = 0;
    if (sVar25 != 0) {
      do {
        FUN_1800233d0(uVar30 + lVar34 + uVar24,acStack_1dc + uVar30);
        uVar30 = uVar30 + 1;
      } while (uVar30 < sVar25);
    }
    local_d78[0] = local_d78[0] & 0xffffff00;
    FUN_1800233d0(sVar25 + lVar34 + uVar24,local_d78);
  }
  local_d88 = 0xffffffff;
  if ((DAT_180cfe658 != 0) && (*param_1 != 0)) {
    local_d88 = FUN_180011200(*param_1 + (ulonglong)DAT_180cfe658);
  }
  cVar12 = FUN_180294c70(lVar34,local_1f8);
  uVar18 = FUN_180011200((ulonglong)DAT_180cfe5e4 + lVar34);
  local_da8 = FUN_18000f3a0((ulonglong)DAT_180cfe5d8 + lVar34);
  local_d98 = "[error] do not match";
  local_d78[0] = 0x3f800000;
  local_d70 = (longlong *)((ulonglong)local_d70 & 0xffffffff00000000);
  pplVar33 = &local_d70;
  if (0.0 <= fStack_1ec) {
    pplVar33 = (longlong **)&fStack_1ec;
  }
  if (cVar12 != '\0') {
    local_d98 = "match";
  }
  pplVar27 = (longlong **)local_d78;
  if (fStack_1ec <= DAT_1808ac34c) {
    pplVar27 = pplVar33;
  }
  local_d90 = acStack_1dc;
  local_db0 = (double)*(float *)pplVar27;
  local_db8 = local_1e8;
  local_da0 = uVar18;
  FUN_18028fbf0("gloves | apply (%s) | def %d | kit %d | seed %d | wear %.6f | id %llX | account %u | attributes %s | name \'%s\' | world gloves %08X"
                ,local_d68,local_1f8[0],uStack_1f0);
  DAT_180cd0257 = '\x01';
  DAT_180cd0255 = '\x01';
  piVar28 = local_1f8;
  piVar11 = (int *)&DAT_1809f37c0;
  do {
    piVar29 = piVar11;
    piVar26 = piVar28;
    uVar6 = *(undefined8 *)(piVar26 + 2);
    uVar7 = *(undefined8 *)(piVar26 + 4);
    uVar8 = *(undefined8 *)(piVar26 + 6);
    *(undefined8 *)piVar29 = *(undefined8 *)piVar26;
    *(undefined8 *)(piVar29 + 2) = uVar6;
    uVar6 = *(undefined8 *)(piVar26 + 8);
    uVar9 = *(undefined8 *)(piVar26 + 10);
    *(undefined8 *)(piVar29 + 4) = uVar7;
    *(undefined8 *)(piVar29 + 6) = uVar8;
    uVar7 = *(undefined8 *)(piVar26 + 0xc);
    uVar8 = *(undefined8 *)(piVar26 + 0xe);
    *(undefined8 *)(piVar29 + 8) = uVar6;
    *(undefined8 *)(piVar29 + 10) = uVar9;
    uVar6 = *(undefined8 *)(piVar26 + 0x10);
    uVar9 = *(undefined8 *)(piVar26 + 0x12);
    *(undefined8 *)(piVar29 + 0xc) = uVar7;
    *(undefined8 *)(piVar29 + 0xe) = uVar8;
    uVar7 = *(undefined8 *)(piVar26 + 0x14);
    uVar8 = *(undefined8 *)(piVar26 + 0x16);
    *(undefined8 *)(piVar29 + 0x10) = uVar6;
    *(undefined8 *)(piVar29 + 0x12) = uVar9;
    uVar6 = *(undefined8 *)(piVar26 + 0x18);
    uVar9 = *(undefined8 *)(piVar26 + 0x1a);
    *(undefined8 *)(piVar29 + 0x14) = uVar7;
    *(undefined8 *)(piVar29 + 0x16) = uVar8;
    uVar7 = *(undefined8 *)(piVar26 + 0x1c);
    uVar8 = *(undefined8 *)(piVar26 + 0x1e);
    *(undefined8 *)(piVar29 + 0x18) = uVar6;
    *(undefined8 *)(piVar29 + 0x1a) = uVar9;
    *(undefined8 *)(piVar29 + 0x1c) = uVar7;
    *(undefined8 *)(piVar29 + 0x1e) = uVar8;
    lVar35 = lVar35 + -1;
    piVar28 = piVar26 + 0x20;
    piVar11 = piVar29 + 0x20;
  } while (lVar35 != 0);
  iVar17 = piVar26[0x21];
  iVar19 = piVar26[0x22];
  iVar1 = piVar26[0x23];
  iVar2 = piVar26[0x24];
  iVar3 = piVar26[0x25];
  iVar4 = piVar26[0x26];
  iVar5 = piVar26[0x27];
  piVar29[0x20] = piVar26[0x20];
  piVar29[0x21] = iVar17;
  piVar29[0x22] = iVar19;
  piVar29[0x23] = iVar1;
  piVar29[0x24] = iVar2;
  piVar29[0x25] = iVar3;
  piVar29[0x26] = iVar4;
  piVar29[0x27] = iVar5;
  if ((cStack_19c == '\0') || (DAT_180cd0256 = '\0', DAT_180ccfede != '\0')) {
    DAT_180cd0256 = '\x01';
  }
  if (cStack_19c != '\0') {
    if (DAT_180ccfede != '\0') {
      iVar17 = FUN_1804e4d70(&DAT_1809f3960);
      if (iVar17 != 0) goto LAB_18029666d;
      if (DAT_1809f39ac == 0x7fffffff) {
        DAT_1809f39ac = 0x7ffffffe;
        goto LAB_180296662;
      }
      DAT_180cfe4a0 = local_1f8[0];
      DAT_180cfe5c0 = uStack_1f0;
      DAT_180ccfedf = '\x01';
      puVar23 = (undefined4 *)FUN_1802903e0(local_d60,local_1f8);
      _DAT_180cfca20 = *puVar23;
      uRam0000000180cfca24 = puVar23[1];
      uRam0000000180cfca28 = puVar23[2];
      uRam0000000180cfca2c = puVar23[3];
      _DAT_180cfca30 = puVar23[4];
      uRam0000000180cfca34 = puVar23[5];
      uRam0000000180cfca38 = puVar23[6];
      uRam0000000180cfca3c = puVar23[7];
      DAT_180cfe678 = 0;
      FUN_1804e4e90(&DAT_1809f3960);
      puVar23 = (undefined4 *)FUN_1802903e0(local_d60,local_1f8);
      FUN_18028fbf0("colors | gloves | kit %d | armed for every build of the local world gloves / hud arms | tint1 %08X"
                    ,uStack_1f0,*puVar23);
      goto LAB_180296631;
    }
    if (cStack_19c != '\0') {
      FUN_180295090();
      puVar23 = (undefined4 *)FUN_1802903e0(local_d60,local_1f8);
      local_218 = *puVar23;
      uStack_214 = puVar23[1];
      uStack_210 = puVar23[2];
      uStack_20c = puVar23[3];
      local_208 = puVar23[4];
      uStack_204 = puVar23[5];
      uStack_200 = puVar23[6];
      uStack_1fc = puVar23[7];
      FUN_18028ebb0(&local_218);
      goto LAB_180296631;
    }
  }
  FUN_180295090();
  FUN_18028ec90();
  FUN_18028ef30();
LAB_180296631:
  lVar22 = *param_1;
  FUN_180290b00(DAT_180961ea0,lVar34);
  FUN_180294d90(lVar22,"apply");
  return;
}



/* ===== 180296680 FUN_180296680 ===== */

void FUN_180296680(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  char *_Str;
  uint uVar3;
  size_t sVar4;
  
  if ((param_1 != 0) && (lVar2 = FUN_1804ef120(param_1,"vCompMat failed to load"), lVar2 != 0)) {
    for (_Str = (char *)(lVar2 + 0x17); (*_Str == ':' || (*_Str == ' ')); _Str = _Str + 1) {
    }
    lVar2 = FUN_1804ef120(_Str,&DAT_1806e7944);
    if (lVar2 == 0) {
      sVar4 = strlen(_Str);
    }
    else {
      sVar4 = lVar2 - (longlong)_Str;
    }
    if (199 < sVar4) {
      sVar4 = 199;
    }
    iVar1 = FUN_1804e4d70(&DAT_1809f3b50);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1804e4a90(5);
    }
    if (DAT_1809f3b9c == 0x7fffffff) {
      DAT_1809f3b9c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1804e4a90(6);
    }
    snprintf(&DAT_180cfe4b0,0x100,&DAT_1806d3198,param_1);
    uVar3 = DAT_180cfca60 + 1;
    lVar2 = (ulonglong)(uVar3 & 0x1f) * 0xcc;
    FUN_180540530(&DAT_180cfcb24 + lVar2,_Str,sVar4);
    (&DAT_180cfcb24)[sVar4 + lVar2] = 0;
    (&DAT_180cfcb20)[(ulonglong)(uVar3 & 0x1f) * 0x33] = uVar3;
    LOCK();
    UNLOCK();
    DAT_180cfca60 = uVar3;
    FUN_1804e4e90(&DAT_1809f3b50);
  }
  return;
}



/* ===== 1802967e0 FUN_1802967e0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802967e0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined8 uStack_1cc;
  undefined1 uStack_1c4;
  undefined4 uStack_1c0;
  undefined8 uStack_1bc;
  undefined8 uStack_1b4;
  undefined8 local_1ac;
  undefined8 uStack_1a4;
  undefined8 local_19c;
  undefined8 uStack_194;
  undefined8 local_18c;
  undefined8 uStack_184;
  undefined1 local_17c;
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
  undefined8 local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined8 local_a4;
  undefined8 local_9c;
  undefined8 local_94;
  undefined4 local_8c;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_37;
  undefined4 local_36;
  undefined2 local_32;
  undefined2 local_27;
  undefined1 local_25;
  undefined2 local_12;
  
  DAT_180cfe660 = 0;
  if (DAT_180cfe710 != DAT_180cfe718) {
    DAT_180cfe718 = DAT_180cfe710;
  }
  FUN_180299020(&DAT_180cfe6a0);
  FUN_180023ae0(&DAT_180ca1600);
  FUN_18021c050(&DAT_180cec990);
  FUN_1801d4510(&DAT_180ca1640);
  FUN_180298f10(&DAT_180ca1680);
  FUN_180298e60(&DAT_180cfe730);
  _DAT_180cfe6ea = local_36;
  _DAT_180cfe6ee = local_32;
  _DAT_180cfe70e = local_12;
  DAT_180cfca69 = local_37;
  _DAT_180cfca79 = local_27;
  DAT_180cfca7b = local_25;
  _DAT_180cfe6e8 = 0;
  _DAT_180cfe6f0 = 0;
  _DAT_180cfe6f8 = 0;
  _DAT_180cfe700 = 0;
  _DAT_180cfe708 = 0;
  _DAT_180cfe70c = 0;
  DAT_180cfe6e0 = 0;
  _DAT_180cfe680 = 0;
  DAT_180cfe670 = 0;
  DAT_180cfe688 = 0;
  DAT_180cd011e = 0;
  DAT_180cfca68 = 0;
  DAT_180cfca6a = 0;
  _DAT_180cfca6c = 0;
  _DAT_180cfca74 = 0;
  DAT_180cfca78 = 0;
  _DAT_180cfca7c = 0;
  _DAT_180cfca84 = 0;
  _DAT_180cfca8c = 0;
  local_1d8 = 0;
  uStack_1d4 = 0xffffffff;
  uStack_1d0 = 0;
  uStack_1cc = 0x3a83126f;
  uStack_1c4 = 0;
  uStack_1c0 = 0;
  uStack_1bc = 0;
  uStack_1b4 = 0;
  local_17c = 0;
  local_1ac = 0;
  uStack_1a4 = 0;
  local_19c = 0;
  uStack_194 = 0;
  local_18c = 0;
  uStack_184 = 0;
  local_178 = _DAT_1808adc30;
  uStack_170 = _UNK_1808adc38;
  local_168 = _DAT_1808adc30;
  uStack_160 = _UNK_1808adc38;
  local_158 = _DAT_1808adc30;
  uStack_150 = _UNK_1808adc38;
  local_148 = _DAT_1808adc30;
  uStack_140 = _UNK_1808adc38;
  local_138 = _DAT_1808adc30;
  uStack_130 = _UNK_1808adc38;
  local_128 = _DAT_1808adc30;
  uStack_120 = _UNK_1808adc38;
  local_118 = _DAT_1808adc30;
  uStack_110 = _UNK_1808adc38;
  local_108 = _DAT_1808adc30;
  uStack_100 = _UNK_1808adc38;
  FUN_180540170(&local_f8,0,0xa8);
  local_d8 = _DAT_1808ad310;
  uStack_d0 = _UNK_1808ad318;
  local_b8 = _DAT_1808ad2c0;
  uStack_b0 = _UNK_1808ad2c8;
  local_f8 = 0;
  local_f0 = 0x3f800000;
  local_e8 = 0;
  local_e0 = 0xffffffff;
  local_dc = 0;
  local_c8 = 0;
  local_c4 = 0xffffffff;
  local_c0 = 0;
  local_a8 = 0xffffffff;
  local_a4 = 0;
  local_9c = 0x3f800000;
  local_94 = 0;
  lVar9 = 3;
  local_8c = 0xffffffff;
  local_88 = 0;
  local_80 = 0x3f800000;
  local_78 = 0;
  local_70 = 0xffffffff;
  local_6c = 0;
  local_68 = _DAT_1808ad310;
  uStack_60 = _UNK_1808ad318;
  local_58 = 0;
  local_54 = 0xffffffff;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  puVar5 = (undefined8 *)&DAT_1809f39b0;
  puVar6 = (undefined8 *)&local_1d8;
  do {
    puVar8 = puVar6;
    puVar7 = puVar5;
    uVar1 = puVar8[1];
    uVar2 = puVar8[2];
    uVar3 = puVar8[3];
    *puVar7 = *puVar8;
    puVar7[1] = uVar1;
    uVar1 = puVar8[4];
    uVar4 = puVar8[5];
    puVar7[2] = uVar2;
    puVar7[3] = uVar3;
    uVar2 = puVar8[6];
    uVar3 = puVar8[7];
    puVar7[4] = uVar1;
    puVar7[5] = uVar4;
    uVar1 = puVar8[8];
    uVar4 = puVar8[9];
    puVar7[6] = uVar2;
    puVar7[7] = uVar3;
    uVar2 = puVar8[10];
    uVar3 = puVar8[0xb];
    puVar7[8] = uVar1;
    puVar7[9] = uVar4;
    uVar1 = puVar8[0xc];
    uVar4 = puVar8[0xd];
    puVar7[10] = uVar2;
    puVar7[0xb] = uVar3;
    uVar2 = puVar8[0xe];
    uVar3 = puVar8[0xf];
    puVar7[0xc] = uVar1;
    puVar7[0xd] = uVar4;
    puVar7[0xe] = uVar2;
    puVar7[0xf] = uVar3;
    lVar9 = lVar9 + -1;
    puVar5 = puVar7 + 0x10;
    puVar6 = puVar8 + 0x10;
  } while (lVar9 != 0);
  uVar1 = puVar8[0x11];
  DAT_180cfe68c = 0;
  uVar2 = puVar8[0x12];
  uVar3 = puVar8[0x13];
  puVar7[0x10] = puVar8[0x10];
  puVar7[0x11] = uVar1;
  puVar7[0x12] = uVar2;
  puVar7[0x13] = uVar3;
  FUN_1802950f0();
  return;
}



/* ===== 180296ae0 FUN_180296ae0 ===== */

void FUN_180296ae0(void)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  HMODULE pHVar6;
  HANDLE pvVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  ulonglong uVar10;
  longlong *plVar11;
  char **ppcVar12;
  char **ppcVar13;
  char *pcVar14;
  char *local_198;
  ulonglong uStack_190;
  char *local_188;
  ulonglong uStack_180;
  undefined8 local_178;
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
  char *local_40 [2];
  
  ppcVar13 = &local_c8;
  if (DAT_1811089f0 == 0) {
    return;
  }
  local_50 = "C_EconEntity";
  local_e0 = "C_AttributeContainer";
  ppcVar12 = &local_e0;
  do {
    iVar3 = FUN_18038eaf0(*ppcVar12,"m_Item");
    if (iVar3 != 0) goto LAB_180296b5a;
    ppcVar12 = ppcVar12 + 1;
  } while (ppcVar12 != &local_d8);
  FUN_1802b2560("[error] skins | schema field not found | %s::%s",local_e0,"m_Item");
LAB_180296b5a:
  ppcVar12 = &local_50;
  do {
    iVar4 = FUN_18038eaf0(*ppcVar12,"m_AttributeManager");
    if (iVar4 != 0) goto LAB_180296b9c;
    ppcVar12 = ppcVar12 + 1;
  } while (ppcVar12 != &local_48);
  FUN_1802b2560("[error] skins | schema field not found | %s::%s",local_50,"m_AttributeManager");
  iVar4 = 0;
LAB_180296b9c:
  DAT_180cfe5d0 = iVar4 + iVar3;
  local_168 = "C_EconItemView";
  ppcVar12 = &local_168;
  do {
    iVar3 = FUN_18038eaf0(*ppcVar12,"m_iItemDefinitionIndex");
    if (iVar3 != 0) goto LAB_180296bfb;
    ppcVar12 = ppcVar12 + 1;
  } while (ppcVar12 != &local_160);
  FUN_1802b2560("[error] skins | schema field not found | %s::%s",local_168,"m_iItemDefinitionIndex"
               );
  iVar3 = 0;
LAB_180296bfb:
  local_160 = "C_EconItemView";
  ppcVar12 = &local_160;
  DAT_180cfe5d4 = iVar3;
  do {
    iVar3 = FUN_18038eaf0(*ppcVar12,"m_iItemID");
    if (iVar3 != 0) goto LAB_180296c4b;
    ppcVar12 = ppcVar12 + 1;
  } while (ppcVar12 != &local_158);
  FUN_1802b2560("[error] skins | schema field not found | %s::%s",local_160,"m_iItemID");
  iVar3 = 0;
LAB_180296c4b:
  local_158 = "C_EconItemView";
  ppcVar12 = &local_158;
  DAT_180cfe5d8 = iVar3;
  do {
    iVar3 = FUN_18038eaf0(*ppcVar12,"m_iItemIDHigh");
    if (iVar3 != 0) goto LAB_180296c9b;
    ppcVar12 = ppcVar12 + 1;
  } while (ppcVar12 != &local_150);
  FUN_1802b2560("[error] skins | schema field not found | %s::%s",local_158,"m_iItemIDHigh");
  iVar3 = 0;
LAB_180296c9b:
  local_150 = "C_EconItemView";
  ppcVar12 = &local_150;
  DAT_180cfe5dc = iVar3;
  do {
    iVar3 = FUN_18038eaf0(*ppcVar12,"m_iItemIDLow");
    if (iVar3 != 0) goto LAB_180296cea;
    ppcVar12 = ppcVar12 + 1;
  } while (ppcVar12 != &local_148);
  FUN_1802b2560("[error] skins | schema field not found | %s::%s",local_150,"m_iItemIDLow");
  iVar3 = 0;
LAB_180296cea:
  local_148 = "C_EconItemView";
  ppcVar12 = &local_148;
  DAT_180cfe5e0 = iVar3;
  do {
    iVar3 = FUN_18038eaf0(*ppcVar12,"m_iAccountID");
    if (iVar3 != 0) goto LAB_180296d39;
    ppcVar12 = ppcVar12 + 1;
  } while (ppcVar12 != &local_140);
  FUN_1802b2560("[error] skins | schema field not found | %s::%s",local_148,"m_iAccountID");
  iVar3 = 0;
LAB_180296d39:
  local_140 = "C_EconItemView";
  ppcVar12 = &local_140;
  DAT_180cfe5e4 = iVar3;
  do {
    iVar3 = FUN_18038eaf0(*ppcVar12,"m_bInitialized");
    if (iVar3 != 0) goto LAB_180296d89;
    ppcVar12 = ppcVar12 + 1;
  } while (ppcVar12 != &local_138);
  FUN_1802b2560("[error] skins | schema field not found | %s::%s",local_140,"m_bInitialized");
  iVar3 = 0;
LAB_180296d89:
  local_138 = "C_EconItemView";
  ppcVar12 = &local_138;
  DAT_180cfe5e8 = iVar3;
  do {
    iVar3 = FUN_18038eaf0(*ppcVar12,"m_iEntityQuality");
    if (iVar3 != 0) goto LAB_180296dd9;
    ppcVar12 = ppcVar12 + 1;
  } while (ppcVar12 != &local_130);
  FUN_1802b2560("[error] skins | schema field not found | %s::%s",local_138,"m_iEntityQuality");
  iVar3 = 0;
LAB_180296dd9:
  local_130 = "C_EconItemView";
  ppcVar12 = &local_130;
  DAT_180cfe5ec = iVar3;
  do {
    iVar3 = FUN_18038eaf0(*ppcVar12,"m_szCustomName");
    if (iVar3 != 0) goto LAB_180296e29;
    ppcVar12 = ppcVar12 + 1;
  } while (ppcVar12 != &local_128);
  FUN_1802b2560("[error] skins | schema field not found | %s::%s",local_130,"m_szCustomName");
  iVar3 = 0;
LAB_180296e29:
  local_128 = "C_EconItemView";
  ppcVar12 = &local_128;
  DAT_180cfe5f0 = iVar3;
  do {
    iVar3 = FUN_18038eaf0(*ppcVar12,"m_bRestoreCustomMaterialAfterPrecache");
    if (iVar3 != 0) goto LAB_180296e79;
    ppcVar12 = ppcVar12 + 1;
  } while (ppcVar12 != &local_120);
  FUN_1802b2560("[error] skins | schema field not found | %s::%s",local_128,
                "m_bRestoreCustomMaterialAfterPrecache");
  iVar3 = 0;
LAB_180296e79:
  local_120 = "C_EconItemView";
  ppcVar12 = &local_120;
  DAT_180cfe5f4 = iVar3;
  do {
    iVar3 = FUN_18038eaf0(*ppcVar12,"m_bDisallowSOC");
    if (iVar3 != 0) goto LAB_180296ec9;
    ppcVar12 = ppcVar12 + 1;
  } while (ppcVar12 != &local_118);
  FUN_1802b2560("[error] skins | schema field not found | %s::%s",local_120,"m_bDisallowSOC");
  iVar3 = 0;
LAB_180296ec9:
  local_118 = "C_EconEntity";
  ppcVar12 = &local_118;
  DAT_180cfe5f8 = iVar3;
  do {
    iVar3 = FUN_18038eaf0(*ppcVar12,"m_nFallbackPaintKit");
    if (iVar3 != 0) goto LAB_180296f19;
    ppcVar12 = ppcVar12 + 1;
  } while (ppcVar12 != &local_110);
  FUN_1802b2560("[error] skins | schema field not found | %s::%s",local_118,"m_nFallbackPaintKit");
  iVar3 = 0;
LAB_180296f19:
  local_110 = "C_EconEntity";
  ppcVar12 = &local_110;
  DAT_180cfe5fc = iVar3;
  do {
    iVar3 = FUN_18038eaf0(*ppcVar12,"m_nFallbackSeed");
    if (iVar3 != 0) goto LAB_180296f69;
    ppcVar12 = ppcVar12 + 1;
  } while (ppcVar12 != &local_108);
  FUN_1802b2560("[error] skins | schema field not found | %s::%s",local_110,"m_nFallbackSeed");
  iVar3 = 0;
LAB_180296f69:
  local_108 = "C_EconEntity";
  ppcVar12 = &local_108;
  DAT_180cfe600 = iVar3;
  do {
    iVar3 = FUN_18038eaf0(*ppcVar12,"m_flFallbackWear");
    if (iVar3 != 0) goto LAB_180296fb9;
    ppcVar12 = ppcVar12 + 1;
  } while (ppcVar12 != &local_100);
  FUN_1802b2560("[error] skins | schema field not found | %s::%s",local_108,"m_flFallbackWear");
  iVar3 = 0;
LAB_180296fb9:
  local_100 = "C_EconEntity";
  ppcVar12 = &local_100;
  DAT_180cfe604 = iVar3;
  do {
    iVar3 = FUN_18038eaf0(*ppcVar12,"m_nFallbackStatTrak");
    if (iVar3 != 0) goto LAB_180297009;
    ppcVar12 = ppcVar12 + 1;
  } while (ppcVar12 != &local_f8);
  FUN_1802b2560("[error] skins | schema field not found | %s::%s",local_100,"m_nFallbackStatTrak");
  iVar3 = 0;
LAB_180297009:
  local_f8 = "C_BaseEntity";
  ppcVar12 = &local_f8;
  DAT_180cfe608 = iVar3;
  do {
    iVar3 = FUN_18038eaf0(*ppcVar12,"m_nSubclassID");
    if (iVar3 != 0) goto LAB_180297059;
    ppcVar12 = ppcVar12 + 1;
  } while (ppcVar12 != &local_f0);
  FUN_1802b2560("[error] skins | schema field not found | %s::%s",local_f8,"m_nSubclassID");
  iVar3 = 0;
LAB_180297059:
  local_f0 = "C_BaseEntity";
  ppcVar12 = &local_f0;
  DAT_180cfe60c = iVar3;
  do {
    iVar3 = FUN_18038eaf0(*ppcVar12,"m_pGameSceneNode");
    if (iVar3 != 0) goto LAB_1802970a9;
    ppcVar12 = ppcVar12 + 1;
  } while (ppcVar12 != &local_e8);
  FUN_1802b2560("[error] skins | schema field not found | %s::%s",local_f0,"m_pGameSceneNode");
  iVar3 = 0;
LAB_1802970a9:
  local_e8 = "CGameSceneNode";
  ppcVar12 = &local_e8;
  DAT_180cfe610 = iVar3;
  do {
    iVar3 = FUN_18038eaf0(*ppcVar12,"m_pChild");
    if (iVar3 != 0) goto LAB_1802970f9;
    ppcVar12 = ppcVar12 + 1;
  } while (ppcVar12 != &local_e0);
  FUN_1802b2560("[error] skins | schema field not found | %s::%s",local_e8,"m_pChild");
  iVar3 = 0;
LAB_1802970f9:
  local_48 = "CGameSceneNode";
  ppcVar12 = &local_48;
  DAT_180cfe614 = iVar3;
  do {
    iVar3 = FUN_18038eaf0(*ppcVar12,"m_pNextSibling");
    if (iVar3 != 0) goto LAB_18029714f;
    ppcVar12 = ppcVar12 + 1;
  } while (ppcVar12 != local_40);
  FUN_1802b2560("[error] skins | schema field not found | %s::%s",local_48,"m_pNextSibling");
  iVar3 = 0;
LAB_18029714f:
  local_d8 = "CGameSceneNode";
  ppcVar12 = &local_d8;
  DAT_180cfe618 = iVar3;
  do {
    iVar3 = FUN_18038eaf0(*ppcVar12,"m_pOwner");
    if (iVar3 != 0) goto LAB_180297199;
    ppcVar12 = ppcVar12 + 1;
  } while (ppcVar12 != &local_d0);
  FUN_1802b2560("[error] skins | schema field not found | %s::%s",local_d8,"m_pOwner");
  iVar3 = 0;
LAB_180297199:
  local_d0 = "C_BasePlayerPawn";
  ppcVar12 = &local_d0;
  DAT_180cfe61c = iVar3;
  do {
    iVar3 = FUN_18038eaf0(*ppcVar12,"m_pWeaponServices");
    if (iVar3 != 0) goto LAB_1802971e9;
    ppcVar12 = ppcVar12 + 1;
  } while (ppcVar12 != ppcVar13);
  FUN_1802b2560("[error] skins | schema field not found | %s::%s",local_d0,"m_pWeaponServices");
  iVar3 = 0;
LAB_1802971e9:
  local_c8 = "CPlayer_WeaponServices";
  DAT_180cfe620 = iVar3;
  do {
    iVar3 = FUN_18038eaf0(*ppcVar13,"m_hMyWeapons");
    if (iVar3 != 0) goto LAB_180297239;
    ppcVar13 = ppcVar13 + 1;
  } while (ppcVar13 != &local_c0);
  FUN_1802b2560("[error] skins | schema field not found | %s::%s",local_c8,"m_hMyWeapons");
  iVar3 = 0;
LAB_180297239:
  local_c0 = "CPlayer_WeaponServices";
  ppcVar13 = &local_c0;
  DAT_180cfe624 = iVar3;
  do {
    iVar3 = FUN_18038eaf0(*ppcVar13,"m_hActiveWeapon");
    if (iVar3 != 0) goto LAB_180297289;
    ppcVar13 = ppcVar13 + 1;
  } while (ppcVar13 != &local_b8);
  FUN_1802b2560("[error] skins | schema field not found | %s::%s",local_c0,"m_hActiveWeapon");
  iVar3 = 0;
LAB_180297289:
  local_b8 = "C_CSPlayerPawn";
  ppcVar13 = &local_b8;
  DAT_180cfe628 = iVar3;
  do {
    iVar3 = FUN_18038eaf0(*ppcVar13,"m_EconGloves");
    if (iVar3 != 0) goto LAB_1802972d9;
    ppcVar13 = ppcVar13 + 1;
  } while (ppcVar13 != &local_b0);
  FUN_1802b2560("[error] skins | schema field not found | %s::%s",local_b8,"m_EconGloves");
  iVar3 = 0;
LAB_1802972d9:
  local_b0 = "C_CSPlayerPawn";
  ppcVar13 = &local_b0;
  DAT_180cfe62c = iVar3;
  do {
    iVar3 = FUN_18038eaf0(*ppcVar13,"m_bNeedToReApplyGloves");
    if (iVar3 != 0) goto LAB_180297329;
    ppcVar13 = ppcVar13 + 1;
  } while (ppcVar13 != &local_a8);
  FUN_1802b2560("[error] skins | schema field not found | %s::%s",local_b0,"m_bNeedToReApplyGloves")
  ;
  iVar3 = 0;
LAB_180297329:
  local_a8 = "C_CSPlayerPawn";
  ppcVar13 = &local_a8;
  DAT_180cfe630 = iVar3;
  do {
    iVar3 = FUN_18038eaf0(*ppcVar13,"m_flNextSprayDecalTime");
    if (iVar3 != 0) {
      DAT_180cfe658 = iVar3 + 8;
      goto LAB_180297382;
    }
    ppcVar13 = ppcVar13 + 1;
  } while (ppcVar13 != &local_a0);
  FUN_1802b2560("[error] skins | schema field not found | %s::%s",local_a8,"m_flNextSprayDecalTime")
  ;
LAB_180297382:
  local_a0 = "C_CSPlayerPawn";
  ppcVar13 = &local_a0;
  do {
    iVar3 = FUN_18038eaf0(*ppcVar13,"m_hHudModelArms");
    if (iVar3 != 0) goto LAB_1802973c9;
    ppcVar13 = ppcVar13 + 1;
  } while (ppcVar13 != &local_98);
  FUN_1802b2560("[error] skins | schema field not found | %s::%s",local_a0,"m_hHudModelArms");
  iVar3 = 0;
LAB_1802973c9:
  local_98 = "C_BaseEntity";
  ppcVar13 = &local_98;
  DAT_180cfe634 = iVar3;
  do {
    uVar5 = FUN_18038eaf0(*ppcVar13,"m_nBloodType");
    if (uVar5 != 0) goto LAB_180297419;
    ppcVar13 = ppcVar13 + 1;
  } while (ppcVar13 != &local_90);
  FUN_1802b2560("[error] skins | schema field not found | %s::%s",local_98,"m_nBloodType");
  uVar5 = 0;
LAB_180297419:
  local_90 = "C_CSWeaponBase";
  ppcVar13 = &local_90;
  DAT_180cfe65c = uVar5;
  do {
    uVar5 = FUN_18038eaf0(*ppcVar13,"m_iWeaponGameplayAnimState");
    if (uVar5 != 0) {
      if (0x18 < uVar5) {
        DAT_180cfe650 = uVar5 - 0x18;
      }
      goto LAB_180297477;
    }
    ppcVar13 = ppcVar13 + 1;
  } while (ppcVar13 != &local_88);
  FUN_1802b2560("[error] skins | schema field not found | %s::%s",local_90,
                "m_iWeaponGameplayAnimState");
LAB_180297477:
  local_88 = "C_EconItemView";
  ppcVar13 = &local_88;
  do {
    iVar3 = FUN_18038eaf0(*ppcVar13,"m_AttributeList");
    if (iVar3 != 0) {
      local_80 = "CAttributeList";
      ppcVar13 = &local_80;
      goto LAB_1802974d0;
    }
    ppcVar13 = ppcVar13 + 1;
  } while (ppcVar13 != &local_80);
  FUN_1802b2560("[error] skins | schema field not found | %s::%s",local_88,"m_AttributeList");
  goto LAB_180297511;
  while (ppcVar13 = ppcVar13 + 1, ppcVar13 != &local_78) {
LAB_1802974d0:
    iVar4 = FUN_18038eaf0(*ppcVar13,"m_Attributes");
    if (iVar4 != 0) {
      DAT_180cfe654 = iVar4 + iVar3;
      goto LAB_180297511;
    }
  }
  FUN_1802b2560("[error] skins | schema field not found | %s::%s",local_80,"m_Attributes");
LAB_180297511:
  local_78 = "CBasePlayerController";
  ppcVar13 = &local_78;
  do {
    iVar3 = FUN_18038eaf0(*ppcVar13,"m_steamID");
    if (iVar3 != 0) goto LAB_180297559;
    ppcVar13 = ppcVar13 + 1;
  } while (ppcVar13 != &local_70);
  FUN_1802b2560("[error] skins | schema field not found | %s::%s",local_78,"m_steamID");
  iVar3 = 0;
LAB_180297559:
  local_70 = "C_EconEntity";
  ppcVar13 = &local_70;
  DAT_180cfe638 = iVar3;
  do {
    iVar3 = FUN_18038eaf0(*ppcVar13,"m_OriginalOwnerXuidLow");
    if (iVar3 != 0) goto LAB_1802975a9;
    ppcVar13 = ppcVar13 + 1;
  } while (ppcVar13 != &local_68);
  FUN_1802b2560("[error] skins | schema field not found | %s::%s",local_70,"m_OriginalOwnerXuidLow")
  ;
  iVar3 = 0;
LAB_1802975a9:
  local_68 = "C_CSWeaponBase";
  ppcVar13 = &local_68;
  DAT_180cfe640 = iVar3;
  do {
    iVar3 = FUN_18038eaf0(*ppcVar13,"m_hPrevOwner");
    if (iVar3 != 0) goto LAB_1802975f9;
    ppcVar13 = ppcVar13 + 1;
  } while (ppcVar13 != &local_60);
  FUN_1802b2560("[error] skins | schema field not found | %s::%s",local_68,"m_hPrevOwner");
  iVar3 = 0;
LAB_1802975f9:
  local_60 = "CSkeletonInstance";
  ppcVar13 = &local_60;
  DAT_180cfe644 = iVar3;
  do {
    iVar3 = FUN_18038eaf0(*ppcVar13,"m_modelState");
    if (iVar3 != 0) goto LAB_180297649;
    ppcVar13 = ppcVar13 + 1;
  } while (ppcVar13 != &local_58);
  FUN_1802b2560("[error] skins | schema field not found | %s::%s",local_60,"m_modelState");
  iVar3 = 0;
LAB_180297649:
  local_58 = "CModelState";
  ppcVar13 = &local_58;
  DAT_180cfe648 = iVar3;
  do {
    iVar3 = FUN_18038eaf0(*ppcVar13,"m_MeshGroupMask");
    if (iVar3 != 0) goto LAB_180297699;
    ppcVar13 = ppcVar13 + 1;
  } while (ppcVar13 != &local_50);
  FUN_1802b2560("[error] skins | schema field not found | %s::%s",local_58,"m_MeshGroupMask");
  iVar3 = 0;
LAB_180297699:
  DAT_180cfe64c = iVar3;
  if (DAT_180961e90 != 0) {
    DAT_180cfe63c = FUN_180011200(DAT_180961e90 + 0xc);
  }
  FUN_18028fbf0("offsets | hud copy %X | attribute count %X | attribute list %X",DAT_180cfe650,
                DAT_180cfe654,DAT_180cfe63c);
  FUN_18028fbf0("offsets | gloves view %X | reapply flag %X | world gloves handle %X | quality %X",
                DAT_180cfe62c,DAT_180cfe630,DAT_180cfe658,DAT_180cfe5ec);
  pcVar14 = "m_nBloodType + 0x18";
  if (DAT_180961eec == 0) {
    if (DAT_180cfe65c == 0) {
      uVar10 = 0;
    }
    else {
      uVar10 = (ulonglong)DAT_180cfe65c + 0x18;
    }
  }
  else {
    pcVar14 = "C_BaseModelEntity ctor";
    uVar10 = (ulonglong)DAT_180961eec;
  }
  FUN_18028fbf0("offsets | composite owner %X (%s; m_nBloodType %X) | hud arms %X",uVar10,pcVar14,
                (ulonglong)DAT_180cfe65c,DAT_180cfe634);
  pHVar6 = GetModuleHandleA("client.dll");
  if (pHVar6 == (HMODULE)0x0) {
    uStack_190 = 0;
    local_198 = (char *)0x0;
  }
  else {
    local_188 = (char *)0x0;
    uStack_180 = 0;
    local_178 = 0;
    pvVar7 = GetCurrentProcess();
    iVar3 = K32GetModuleInformation(pvVar7,pHVar6,&local_188,0x18);
    if (iVar3 == 0) {
      uStack_190 = 0;
      local_198 = (char *)0x0;
    }
    else {
      uStack_190 = uStack_180 & 0xffffffff;
      local_198 = local_188;
    }
  }
  local_188 = "C_NametagModule";
  uStack_180 = 0xf;
  DAT_180cfe5b0 = FUN_1801d1f10(&local_198,&local_188);
  local_188 = "C_StattrakModule";
  uStack_180 = 0x10;
  DAT_180cfe5c8 = FUN_1801d1f10(&local_198,&local_188);
  plVar9 = &DAT_180d00d00;
  plVar11 = &DAT_180d00d00;
  do {
    if ((code *)*plVar11 == FUN_180296680) goto LAB_180297845;
    plVar11 = plVar11 + 1;
  } while (plVar11 != (longlong *)&DAT_180d00d40);
  do {
    LOCK();
    lVar1 = *plVar9;
    if (lVar1 == 0) {
      *plVar9 = (longlong)FUN_180296680;
    }
    UNLOCK();
  } while ((lVar1 != 0) && (plVar9 = plVar9 + 1, plVar9 != (longlong *)&DAT_180d00d40));
LAB_180297845:
  if (((DAT_180cfe5d0 == 0) ||
      (((DAT_180cfe5d4 == 0 || (DAT_180cfe5fc == 0)) || (DAT_180cfe620 == 0)))) ||
     (((DAT_180cfe624 == 0 || (DAT_180961e90 == 0)) || (DAT_180961e60 == 0)))) {
    DAT_180cd011c = 0;
    FUN_1802b2560("[error] skins | changer disabled, required offsets or patterns missing");
  }
  else {
    DAT_180cd011c = 1;
  }
  cVar2 = DAT_180ccfed8;
  LOCK();
  DAT_180ccfed8 = 1;
  UNLOCK();
  if (cVar2 != '\0') {
    DAT_180ccfed8 = 1;
    return;
  }
  LOCK();
  PTR_DAT_1809f3760 = s_waiting_for_schema_18073f078;
  UNLOCK();
  puVar8 = (undefined8 *)FUN_1804ecaa0(8);
  *puVar8 = FUN_18027f440;
  local_198 = (char *)FUN_180515e84(0,0,FUN_1800d5400,puVar8,0,&uStack_190);
  if (local_198 == (char *)0x0) {
    uStack_190 = uStack_190 & 0xffffffff00000000;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  if ((int)uStack_190 != 0) {
    uStack_180 = uStack_190;
    local_188 = local_198;
    iVar3 = FUN_1804eb410(&local_188);
    if (iVar3 == 0) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1804e4a90(1);
}



/* ===== 180297960 FUN_180297960 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180297960(int param_1)

{
  undefined4 uVar1;
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
  undefined4 *puVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  size_t sVar17;
  ULONGLONG UVar18;
  ulonglong uVar19;
  char *pcVar20;
  undefined8 *puVar21;
  uint uVar22;
  undefined4 *puVar23;
  undefined1 auStack_158 [32];
  undefined4 local_138;
  undefined8 local_130;
  longlong local_128;
  undefined8 local_120;
  char local_118 [256];
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_158;
  if (param_1 - 6U < 2) {
    uVar22 = -(uint)(DAT_180ccfeda != '\0') & 2 | (uint)(DAT_180cd011c != '\0');
    if (uVar22 != DAT_18091a18c) {
      local_130 = DAT_180961e68;
      local_138 = DAT_180961e70;
      pcVar20 = "not ready";
      if (uVar22 == 3) {
        pcVar20 = "ready";
      }
      DAT_18091a18c = uVar22;
      FUN_18028fbf0("changer %s | patterns and offsets %d | item list %d | own item flag %#x | composite manager %p"
                    ,pcVar20,DAT_180cd011c != '\0',DAT_180ccfeda != '\0');
    }
    if (uVar22 == 3) {
      if (((DAT_180cd011f == '\0') && (DAT_1809620c0 != 0)) &&
         (lVar16 = FUN_18000f3a0(), lVar16 != 0)) {
        DAT_180cd011f = FUN_180273b60("player_death",FUN_180293ef0);
      }
      iVar15 = DAT_180cfca60;
      if (DAT_180cfca60 != DAT_180cfe5c4) {
        DAT_180cfe5c4 = DAT_180cfca60;
        FUN_180540170(local_118,0,0x100);
        iVar14 = FUN_1804e4d70(&DAT_1809f3b50);
        if (iVar14 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1804e4a90(5);
        }
        if (DAT_1809f3b9c == 0x7fffffff) {
          DAT_1809f3b9c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
          FUN_1804e4a90(6);
        }
        lVar16 = 2;
        pcVar20 = local_118;
        puVar21 = (undefined8 *)&DAT_180cfe4b0;
        do {
          uVar9 = puVar21[1];
          uVar10 = puVar21[2];
          uVar11 = puVar21[3];
          *(undefined8 *)pcVar20 = *puVar21;
          *(undefined8 *)(pcVar20 + 8) = uVar9;
          uVar9 = puVar21[4];
          uVar12 = puVar21[5];
          *(undefined8 *)(pcVar20 + 0x10) = uVar10;
          *(undefined8 *)(pcVar20 + 0x18) = uVar11;
          uVar10 = puVar21[6];
          uVar11 = puVar21[7];
          *(undefined8 *)(pcVar20 + 0x20) = uVar9;
          *(undefined8 *)(pcVar20 + 0x28) = uVar12;
          uVar9 = puVar21[8];
          uVar12 = puVar21[9];
          *(undefined8 *)(pcVar20 + 0x30) = uVar10;
          *(undefined8 *)(pcVar20 + 0x38) = uVar11;
          uVar10 = puVar21[10];
          uVar11 = puVar21[0xb];
          *(undefined8 *)(pcVar20 + 0x40) = uVar9;
          *(undefined8 *)(pcVar20 + 0x48) = uVar12;
          uVar1 = *(undefined4 *)(puVar21 + 0xc);
          uVar2 = *(undefined4 *)((longlong)puVar21 + 100);
          uVar3 = *(undefined4 *)(puVar21 + 0xd);
          uVar4 = *(undefined4 *)((longlong)puVar21 + 0x6c);
          *(undefined8 *)(pcVar20 + 0x50) = uVar10;
          *(undefined8 *)(pcVar20 + 0x58) = uVar11;
          uVar5 = *(undefined4 *)(puVar21 + 0xe);
          uVar6 = *(undefined4 *)((longlong)puVar21 + 0x74);
          uVar7 = *(undefined4 *)(puVar21 + 0xf);
          uVar8 = *(undefined4 *)((longlong)puVar21 + 0x7c);
          *(undefined4 *)(pcVar20 + 0x60) = uVar1;
          *(undefined4 *)(pcVar20 + 100) = uVar2;
          *(undefined4 *)(pcVar20 + 0x68) = uVar3;
          *(undefined4 *)(pcVar20 + 0x6c) = uVar4;
          *(undefined4 *)(pcVar20 + 0x70) = uVar5;
          *(undefined4 *)(pcVar20 + 0x74) = uVar6;
          *(undefined4 *)(pcVar20 + 0x78) = uVar7;
          *(undefined4 *)(pcVar20 + 0x7c) = uVar8;
          lVar16 = lVar16 + -1;
          pcVar20 = pcVar20 + 0x80;
          puVar21 = puVar21 + 0x10;
        } while (lVar16 != 0);
        FUN_1804e4e90(&DAT_1809f3b50);
        sVar17 = strlen(local_118);
        if ((sVar17 != 0) && (local_118[sVar17 - 1] == '\n')) {
          if (0xff < sVar17 - 1) {
                    /* WARNING: Subroutine does not return */
            FUN_1804ed0f0();
          }
          local_118[sVar17 - 1] = '\0';
        }
        FUN_18028fbf0("game | %s | fallbacks so far %u",local_118,iVar15);
      }
      if (DAT_180cd1304 == '\0') {
        FUN_1803a0b60(&local_128);
        DAT_181108a00 = local_128;
        local_120 = FUN_1803a0c50(&local_128);
        DAT_180cd1304 = '\x01';
      }
      else {
        local_120 = DAT_1811089f8;
      }
      lVar16 = local_120;
      local_128 = DAT_181108a00;
      DAT_1811089f8 = local_120;
      if (((local_120 == 0) || (DAT_181108a00 == 0)) ||
         ((DAT_180ca09f0 == 0 ||
          (iVar15 = FUN_180011200((ulonglong)DAT_180ca09f0 + local_120), 999 < iVar15 - 1U)))) {
        FUN_1802967e0();
      }
      else {
        if (DAT_180cfe660 != lVar16) {
          FUN_1802967e0();
          DAT_180cfe660 = lVar16;
        }
        if (param_1 == 6) {
          if (DAT_180921498 != '\0') {
            FUN_1802925c0(&local_120,&local_128);
          }
        }
        else {
          FUN_180294140(&local_120,&local_128);
          FUN_180295ae0(&local_120,&local_128);
          if ((DAT_180cfe710 != DAT_180cfe718) &&
             (UVar18 = GetTickCount64(), puVar13 = DAT_180cfe718, DAT_180cfe5b8 <= UVar18)) {
            puVar23 = DAT_180cfe710;
            if (DAT_180cfe710 != DAT_180cfe718) {
              do {
                FUN_1803a0940(&local_128,*puVar23);
                if (local_128 != 0) {
                  FUN_180290b00(DAT_180961ea0,(ulonglong)DAT_180cfe5d0 + local_128);
                }
                puVar23 = puVar23 + 1;
              } while (puVar23 != puVar13);
              if (DAT_180cfe710 != DAT_180cfe718) {
                DAT_180cfe718 = DAT_180cfe710;
              }
            }
            if ((DAT_180961f28 != 0) && (uVar19 = FUN_18028fcc0(), 0x98 < uVar19)) {
              iVar15 = FUN_180011200(uVar19 - 0x48);
              lVar16 = FUN_18000f3a0(uVar19 - 0x40);
              if ((lVar16 != 0) && (iVar15 - 1U < 0x40)) {
                while (iVar15 = iVar15 + -1, -1 < iVar15) {
                  FUN_18028fcf0(uVar19 - 0x98,iVar15);
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



/* ===== 180297d80 FUN_180297d80 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_180297d80(undefined1 *param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  char cVar8;
  ushort uVar9;
  uint uVar10;
  int iVar11;
  undefined8 *puVar12;
  ULONGLONG UVar13;
  uint *puVar14;
  bool bVar15;
  undefined8 local_res8;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  undefined8 local_60;
  undefined1 local_58;
  undefined4 uStack_57;
  undefined2 uStack_53;
  undefined1 uStack_51;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  bVar15 = DAT_180cd011c == '\0';
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  param_1[0x38] = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  if (bVar15) {
    return param_1;
  }
  if (param_2 == 0) {
    return param_1;
  }
  if (DAT_180921498 == '\0') {
    return param_1;
  }
  uVar9 = FUN_180011440((ulonglong)DAT_180cfe5d0 + (ulonglong)DAT_180cfe5d4 + param_2);
  if (uVar9 == 0) {
    return param_1;
  }
  if (DAT_180cd1304 == '\0') {
    FUN_1803a0b60(&local_res8);
    DAT_181108a00 = local_res8;
    DAT_1811089f8 = FUN_1803a0c50(&local_res8);
    DAT_180cd1304 = '\x01';
  }
  if ((DAT_1811089f8 != 0) && (DAT_180ca09f4 != 0)) {
    cVar8 = FUN_180011220((ulonglong)DAT_180ca09f4 + DAT_1811089f8);
    uVar10 = 1;
    if (cVar8 == '\x02') goto LAB_180297e6b;
  }
  uVar10 = 0;
LAB_180297e6b:
  puVar14 = &DAT_18092174c;
  do {
    if ((*puVar14 == (uint)uVar9) && (puVar14[1] == uVar10)) goto LAB_180297ec9;
    puVar14 = puVar14 + 0x68;
  } while (puVar14 != &DAT_180931b4c);
  puVar14 = &DAT_18092174c;
  while ((*puVar14 != (uint)uVar9 || (-1 < (int)puVar14[1]))) {
    puVar14 = puVar14 + 0x68;
    if (puVar14 == &DAT_180931b4c) {
      return param_1;
    }
  }
LAB_180297ec9:
  if ((char)puVar14[0x17] == '\0') {
    return param_1;
  }
  iVar11 = FUN_1804e4d70(&DAT_1809f3770);
  uVar7 = DAT_180cfca18;
  uVar6 = DAT_180cfca10;
  uVar4 = uRam0000000180cfca08;
  uVar3 = _DAT_180cfca00;
  uVar2 = _DAT_180cfc9f8;
  uVar1 = _DAT_180cfc9f0;
  uVar5 = DAT_180ccfedc;
  if (iVar11 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809f37bc == 0x7fffffff) {
    DAT_1809f37bc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  FUN_1804e4e90(&DAT_1809f3770);
  uStack_84 = (undefined4)uVar1;
  uStack_80 = (undefined4)((ulonglong)uVar1 >> 0x20);
  uStack_7c = (undefined4)uVar2;
  uStack_78 = (undefined4)((ulonglong)uVar2 >> 0x20);
  uStack_74 = (undefined4)uVar3;
  uStack_70 = (undefined4)((ulonglong)uVar3 >> 0x20);
  uStack_6c = (undefined4)uVar4;
  uStack_68 = (undefined4)((ulonglong)uVar4 >> 0x20);
  local_88 = uVar7;
  local_60 = uVar6;
  uVar1 = local_60;
  *(ulonglong *)(param_1 + 8) = CONCAT44(uStack_84,uVar7);
  *(ulonglong *)(param_1 + 0x10) = CONCAT44(uStack_7c,uStack_80);
  local_58 = uVar5;
  local_60._0_4_ = (undefined4)uVar6;
  local_60._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
  *(ulonglong *)(param_1 + 0x18) = CONCAT44(uStack_74,uStack_78);
  *(ulonglong *)(param_1 + 0x20) = CONCAT44(uStack_6c,uStack_70);
  *(undefined4 *)(param_1 + 0x28) = uStack_68;
  *(undefined4 *)(param_1 + 0x2c) = local_64;
  *(undefined4 *)(param_1 + 0x30) = (undefined4)local_60;
  *(undefined4 *)(param_1 + 0x34) = local_60._4_4_;
  *(ulonglong *)(param_1 + 0x38) = CONCAT17(uStack_51,CONCAT25(uStack_53,CONCAT41(uStack_57,uVar5)))
  ;
  local_60 = uVar1;
  puVar12 = (undefined8 *)FUN_1802903e0(&local_88,puVar14);
  uVar1 = *puVar12;
  uVar2 = puVar12[1];
  uVar3 = puVar12[2];
  uVar4 = puVar12[3];
  iVar11 = FUN_1804e4d70(&DAT_1809f3770);
  if (iVar11 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809f37bc == 0x7fffffff) {
    DAT_1809f37bc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  DAT_180cfca18 = 1;
  _DAT_180cfc9f0 = uVar1;
  _DAT_180cfc9f8 = uVar2;
  _DAT_180cfca00 = uVar3;
  uRam0000000180cfca08 = uVar4;
  UVar13 = GetTickCount64();
  DAT_180ccfedc = 0;
  DAT_180cfca10 = UVar13 + 5000;
  FUN_1804e4e90(&DAT_1809f3770);
  *param_1 = 1;
  *(longlong *)(param_1 + 0x40) = param_2;
  *(uint *)(param_1 + 0x48) = (uint)uVar9;
  *(undefined4 *)(param_1 + 0x4c) = DAT_180cfc9e8;
  return param_1;
}



/* ===== 1802980b0 FUN_1802980b0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802980b0(longlong param_1,undefined4 *param_2)

{
  int iVar1;
  ulonglong uVar2;
  size_t sVar3;
  ulonglong uVar4;
  undefined1 auStack_88 [32];
  undefined1 local_68 [16];
  char local_58 [64];
  ulonglong local_18;
  
  if ((param_1 != 0) && (local_18 = DAT_180919500 ^ (ulonglong)auStack_88, DAT_180961e90 != 0)) {
    iVar1 = FUN_180512a60(0);
    FUN_180290960(param_1,"pet id",*param_2);
    FUN_180290960(param_1,"upgrade level",param_2[1]);
    FUN_180290960(param_1,"pet seed",param_2[2]);
    FUN_180290960(param_1,"deployment date",iVar1 + -0x1baf80);
    FUN_180290960(param_1,"pet next upgrade date",iVar1 + 0x278d00);
    FUN_180290960(param_1,"pet food expiration date",iVar1 + 0x278d00);
    local_58[0] = '\0';
    local_58[1] = '\0';
    local_58[2] = '\0';
    local_58[3] = '\0';
    local_58[4] = '\0';
    local_58[5] = '\0';
    local_58[6] = '\0';
    local_58[7] = '\0';
    local_58[8] = '\0';
    local_58[9] = '\0';
    local_58[10] = '\0';
    local_58[0xb] = '\0';
    local_58[0xc] = '\0';
    local_58[0xd] = '\0';
    local_58[0xe] = '\0';
    local_58[0xf] = '\0';
    local_58[0x10] = '\0';
    local_58[0x11] = '\0';
    local_58[0x12] = '\0';
    local_58[0x13] = '\0';
    local_58[0x14] = '\0';
    local_58[0x15] = '\0';
    local_58[0x16] = '\0';
    local_58[0x17] = '\0';
    local_58[0x18] = '\0';
    local_58[0x19] = '\0';
    local_58[0x1a] = '\0';
    local_58[0x1b] = '\0';
    local_58[0x1c] = '\0';
    local_58[0x1d] = '\0';
    local_58[0x1e] = '\0';
    local_58[0x1f] = '\0';
    local_58[0x20] = '\0';
    local_58[0x21] = '\0';
    local_58[0x22] = '\0';
    local_58[0x23] = '\0';
    local_58[0x24] = '\0';
    local_58[0x25] = '\0';
    local_58[0x26] = '\0';
    local_58[0x27] = '\0';
    local_58[0x28] = '\0';
    local_58[0x29] = '\0';
    local_58[0x2a] = '\0';
    local_58[0x2b] = '\0';
    local_58[0x2c] = '\0';
    local_58[0x2d] = '\0';
    local_58[0x2e] = '\0';
    local_58[0x2f] = '\0';
    local_58[0x30] = '\0';
    local_58[0x31] = '\0';
    local_58[0x32] = '\0';
    local_58[0x33] = '\0';
    local_58[0x34] = '\0';
    local_58[0x35] = '\0';
    local_58[0x36] = '\0';
    local_58[0x37] = '\0';
    local_58[0x38] = '\0';
    local_58[0x39] = '\0';
    local_58[0x3a] = '\0';
    local_58[0x3b] = '\0';
    local_58[0x3c] = '\0';
    local_58[0x3d] = '\0';
    local_58[0x3e] = '\0';
    local_58[0x3f] = '\0';
    if (*(char **)(param_2 + 4) != (char *)0x0) {
      strncpy(local_58,*(char **)(param_2 + 4),0x3f);
    }
    uVar2 = (ulonglong)DAT_180cfe5f0;
    if (DAT_180cfe5f0 != 0) {
      sVar3 = strlen(local_58);
      if (0xa0 < sVar3) {
        sVar3 = 0xa0;
      }
      uVar4 = 0;
      if (sVar3 != 0) {
        do {
          FUN_1800233d0(uVar4 + param_1 + uVar2,local_58 + uVar4);
          uVar4 = uVar4 + 1;
        } while (uVar4 < sVar3);
      }
      local_68[0] = 0;
      FUN_1800233d0(sVar3 + param_1 + uVar2,local_68);
    }
  }
  return;
}



/* ===== 180298230 FUN_180298230 ===== */

undefined8 * FUN_180298230(undefined8 *param_1,longlong param_2)

{
  char cVar1;
  size_t sVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  char local_c8 [176];
  
  if ((param_2 == 0) || (uVar4 = (ulonglong)DAT_180cfe5f0, DAT_180cfe5f0 == 0)) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0xf;
    *(undefined1 *)param_1 = 0;
  }
  else {
    FUN_180540170(local_c8,0,0xa1);
    uVar3 = 0;
    do {
      cVar1 = FUN_180011220(uVar4 + param_2 + uVar3);
      local_c8[uVar3] = cVar1;
      if (cVar1 == '\0') break;
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0xa0);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    sVar2 = strlen(local_c8);
    FUN_1800133a0(param_1,local_c8,sVar2);
  }
  return param_1;
}



/* ===== 180298300 FUN_180298300 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180298300(longlong param_1,char *param_2)

{
  ulonglong uVar1;
  size_t sVar2;
  ulonglong uVar3;
  undefined1 auStack_88 [32];
  undefined1 local_68 [16];
  char local_58 [64];
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_88;
  local_58[0] = '\0';
  local_58[1] = '\0';
  local_58[2] = '\0';
  local_58[3] = '\0';
  local_58[4] = '\0';
  local_58[5] = '\0';
  local_58[6] = '\0';
  local_58[7] = '\0';
  local_58[8] = '\0';
  local_58[9] = '\0';
  local_58[10] = '\0';
  local_58[0xb] = '\0';
  local_58[0xc] = '\0';
  local_58[0xd] = '\0';
  local_58[0xe] = '\0';
  local_58[0xf] = '\0';
  local_58[0x10] = '\0';
  local_58[0x11] = '\0';
  local_58[0x12] = '\0';
  local_58[0x13] = '\0';
  local_58[0x14] = '\0';
  local_58[0x15] = '\0';
  local_58[0x16] = '\0';
  local_58[0x17] = '\0';
  local_58[0x18] = '\0';
  local_58[0x19] = '\0';
  local_58[0x1a] = '\0';
  local_58[0x1b] = '\0';
  local_58[0x1c] = '\0';
  local_58[0x1d] = '\0';
  local_58[0x1e] = '\0';
  local_58[0x1f] = '\0';
  local_58[0x20] = '\0';
  local_58[0x21] = '\0';
  local_58[0x22] = '\0';
  local_58[0x23] = '\0';
  local_58[0x24] = '\0';
  local_58[0x25] = '\0';
  local_58[0x26] = '\0';
  local_58[0x27] = '\0';
  local_58[0x28] = '\0';
  local_58[0x29] = '\0';
  local_58[0x2a] = '\0';
  local_58[0x2b] = '\0';
  local_58[0x2c] = '\0';
  local_58[0x2d] = '\0';
  local_58[0x2e] = '\0';
  local_58[0x2f] = '\0';
  local_58[0x30] = '\0';
  local_58[0x31] = '\0';
  local_58[0x32] = '\0';
  local_58[0x33] = '\0';
  local_58[0x34] = '\0';
  local_58[0x35] = '\0';
  local_58[0x36] = '\0';
  local_58[0x37] = '\0';
  local_58[0x38] = '\0';
  local_58[0x39] = '\0';
  local_58[0x3a] = '\0';
  local_58[0x3b] = '\0';
  local_58[0x3c] = '\0';
  local_58[0x3d] = '\0';
  local_58[0x3e] = '\0';
  local_58[0x3f] = '\0';
  if (param_2 != (char *)0x0) {
    strncpy(local_58,param_2,0x3f);
  }
  uVar1 = (ulonglong)DAT_180cfe5f0;
  if ((DAT_180cfe5f0 != 0) && (param_1 != 0)) {
    sVar2 = strlen(local_58);
    if (0xa0 < sVar2) {
      sVar2 = 0xa0;
    }
    uVar3 = 0;
    if (sVar2 != 0) {
      do {
        FUN_1800233d0(uVar3 + param_1 + uVar1,local_58 + uVar3);
        uVar3 = uVar3 + 1;
      } while (uVar3 < sVar2);
    }
    local_68[0] = 0;
    FUN_1800233d0(sVar2 + param_1 + uVar1,local_68);
  }
  return;
}



/* ===== 1802983f0 FUN_1802983f0 ===== */

void FUN_1802983f0(longlong param_1,longlong param_2)

{
  int iVar1;
  
  if ((DAT_180cd011c != '\0') && (param_1 != 0)) {
    FUN_180290880(param_1,"set item texture prefab");
    FUN_180290880(param_1,"set item texture seed");
    FUN_180290880(param_1,"set item texture wear");
    FUN_1802913d0(param_1,param_2);
    FUN_18021b510(param_1,param_2 + 0x188);
    if (*(char *)(param_2 + 0x14) == '\0') {
      FUN_180290ae0(param_1,0x50);
      FUN_180290ae0(param_1,0x51);
    }
    else {
      iVar1 = *(int *)(param_2 + 0x18);
      if (iVar1 < 0) {
        iVar1 = 0;
      }
      FUN_180290960(param_1,"kill eater",iVar1);
      FUN_180290960(param_1,"kill eater score type",0);
    }
    FUN_180290c60(param_1,param_2 + 0x1c);
  }
  return;
}



/* ===== 180298510 FUN_180298510 ===== */

void FUN_180298510(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))();
  return;
}



/* ===== 180298530 FUN_180298530 ===== */

void FUN_180298530(void)

{
  longlong *plVar1;
  
  if (DAT_180961e68 != (code *)0x0) {
    plVar1 = (longlong *)(*DAT_180961e68)();
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x28))(plVar1);
    }
  }
  return;
}



/* ===== 180298560 FUN_180298560 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180298560(longlong param_1,char *param_2)

{
  byte *pbVar1;
  code *pcVar2;
  undefined8 ****ppppuVar3;
  ulonglong uVar4;
  size_t sVar5;
  longlong lVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  undefined8 ****ppppuVar9;
  undefined1 *puVar10;
  int iVar11;
  ulonglong uVar12;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [24];
  undefined1 local_58 [16];
  undefined8 ****local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_78;
  local_38 = 0;
  local_30 = 0;
  local_48 = (undefined8 ****)0x0;
  uStack_40 = 0;
  sVar5 = strlen(param_2);
  FUN_1800133a0(&local_48,param_2,sVar5);
  uVar4 = local_30;
  ppppuVar3 = local_48;
  if (DAT_180ccfeda == '\0') {
LAB_180298640:
    iVar11 = 0;
  }
  else {
    uVar12 = 0xcbf29ce484222325;
    ppppuVar9 = &local_48;
    if (0xf < local_30) {
      ppppuVar9 = local_48;
    }
    uVar8 = 0;
    if (local_38 != 0) {
      do {
        pbVar1 = (byte *)(uVar8 + (longlong)ppppuVar9);
        uVar8 = uVar8 + 1;
        uVar12 = (uVar12 ^ *pbVar1) * 0x100000001b3;
      } while (uVar8 < local_38);
    }
    lVar6 = FUN_1800268a0(&DAT_180ca1520,local_58,&local_48,uVar12);
    lVar6 = *(longlong *)(lVar6 + 8);
    if ((lVar6 == 0) || (lVar6 == DAT_180ca1528)) goto LAB_180298640;
    iVar11 = *(int *)(lVar6 + 0x30);
  }
  if (uVar4 < 0x10) {
LAB_180298675:
    puVar10 = auStack_78;
    if ((iVar11 != 0) && (puVar10 = auStack_78, param_1 != 0)) {
      lVar6 = FUN_1802908a0(param_1,iVar11);
      puVar10 = auStack_78;
      if (lVar6 != 0) {
        uVar7 = 1;
        puVar10 = auStack_78;
        goto LAB_18029869a;
      }
    }
  }
  else {
    uVar12 = uVar4 + 1;
    ppppuVar9 = ppppuVar3;
    if (uVar12 < 0x1000) {
LAB_18029866d:
      thunk_FUN_1803d64e0(ppppuVar9,uVar12);
      goto LAB_180298675;
    }
    ppppuVar9 = (undefined8 ****)ppppuVar3[-1];
    if ((ulonglong)((longlong)ppppuVar3 + (-8 - (longlong)ppppuVar9)) < 0x20) {
      uVar12 = uVar4 + 0x28;
      goto LAB_18029866d;
    }
    pcVar2 = (code *)swi(0x29);
    (*pcVar2)(5);
    puVar10 = auStack_70;
  }
  uVar7 = 0;
LAB_18029869a:
  *(undefined8 *)(puVar10 + -8) = 0x1802986a7;
  return uVar7;
}



/* ===== 1802986c0 FUN_1802986c0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802986c0(longlong param_1,int *param_2)

{
  char cVar1;
  int iVar2;
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
  if (DAT_180cd011c == '\0') {
    return;
  }
  if (param_1 == 0) {
    return;
  }
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  snprintf(&local_58,0x40,"sticker slot %zu id",0);
  if ((0 < *param_2) || (cVar1 = FUN_180298560(param_1,&local_58), cVar1 != '\0')) {
    iVar2 = *param_2;
    if (iVar2 < 0) {
      iVar2 = 0;
    }
    FUN_180290960(param_1,&local_58,iVar2);
  }
  snprintf(&local_58,0x40,"sticker slot %zu id",1);
  if ((0 < param_2[1]) || (cVar1 = FUN_180298560(param_1,&local_58), cVar1 != '\0')) {
    iVar2 = param_2[1];
    if (iVar2 < 0) {
      iVar2 = 0;
    }
    FUN_180290960(param_1,&local_58,iVar2);
  }
  snprintf(&local_58,0x40,"sticker slot %zu id",2);
  if ((0 < param_2[2]) || (cVar1 = FUN_180298560(param_1,&local_58), cVar1 != '\0')) {
    iVar2 = param_2[2];
    if (iVar2 < 0) {
      iVar2 = 0;
    }
    FUN_180290960(param_1,&local_58,iVar2);
  }
  snprintf(&local_58,0x40,"sticker slot %zu id",3);
  if ((0 < param_2[3]) || (cVar1 = FUN_180298560(param_1,&local_58), cVar1 != '\0')) {
    iVar2 = param_2[3];
    if (iVar2 < 0) {
      iVar2 = 0;
    }
    FUN_180290960(param_1,&local_58,iVar2);
  }
  snprintf(&local_58,0x40,"sticker slot %zu id",4);
  if ((param_2[4] < 1) && (cVar1 = FUN_180298560(param_1,&local_58), cVar1 == '\0')) {
    return;
  }
  iVar2 = param_2[4];
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  FUN_180290960(param_1,&local_58,iVar2);
  return;
}



/* ===== 1802988b0 FUN_1802988b0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802988b0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined2 *puVar9;
  longlong lVar10;
  char *pcVar11;
  undefined2 *puVar12;
  longlong lVar13;
  char *pcVar14;
  undefined1 auStack_118 [32];
  longlong local_f8;
  longlong local_f0;
  char *local_e8;
  undefined4 local_e0;
  longlong local_d8;
  longlong local_d0;
  undefined4 local_c8;
  longlong local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  char local_88 [64];
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_118;
  if (DAT_180961eec == 0) {
    if (DAT_180cfe65c == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = (ulonglong)DAT_180cfe65c + 0x18;
    }
  }
  else {
    uVar8 = (ulonglong)DAT_180961eec;
  }
  if ((((DAT_180cd011c != '\0') && (param_1 != 0)) && (param_2 != 0)) && (uVar8 != 0)) {
    local_b8 = DAT_180cd1e28;
    local_b0 = DAT_180cd19e0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_d0 = param_1;
    iVar4 = FUN_1804e4d70(&DAT_1809f3960);
    uVar6 = DAT_180cfe4a0;
    if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1804e4a90(5);
    }
    if (DAT_1809f39ac == 0x7fffffff) {
      DAT_1809f39ac = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1804e4a90(6);
    }
    if (DAT_180ccfedf == '\0') {
      FUN_1804e4e90(&DAT_1809f3960);
    }
    else {
      local_a8 = CONCAT44(uRam0000000180cfca24,_DAT_180cfca20);
      uStack_a0 = CONCAT44(uRam0000000180cfca2c,uRam0000000180cfca28);
      local_c8 = DAT_180cfe5c0;
      local_98 = CONCAT44(uRam0000000180cfca34,_DAT_180cfca30);
      uStack_90 = CONCAT44(uRam0000000180cfca3c,uRam0000000180cfca38);
      FUN_1804e4e90(&DAT_1809f3960);
      if (DAT_180cd1304 == '\0') {
        FUN_1803a0b60(&local_d8);
        DAT_181108a00 = local_d8;
        DAT_1811089f8 = FUN_1803a0c50(&local_d8);
        DAT_180cd1304 = '\x01';
      }
      lVar1 = DAT_1811089f8;
      if (DAT_1811089f8 != 0) {
        lVar13 = (ulonglong)DAT_180cfe62c + DAT_1811089f8;
        sVar3 = FUN_180011440((ulonglong)DAT_180cfe5d4 + lVar13);
        if ((sVar3 == (short)uVar6) &&
           (lVar13 = FUN_18000f3a0((ulonglong)DAT_180cfe5d8 + lVar13), lVar13 == -0xffffffffffffff0)
           ) {
          param_2 = param_2 - uVar8;
          uVar6 = 0xffffffff;
          if ((DAT_180cfe658 == 0) ||
             (iVar4 = FUN_180011200(lVar1 + (ulonglong)DAT_180cfe658), iVar4 == -1)) {
            lVar13 = 0;
          }
          else {
            FUN_1803a0940(&local_d8,iVar4);
            lVar13 = local_d8;
          }
          if (DAT_180cfe634 == 0) {
            local_c0 = 0;
          }
          else {
            uVar5 = FUN_180011200(lVar1 + (ulonglong)DAT_180cfe634);
            FUN_1803a0940(&local_c0,uVar5);
          }
          lVar10 = local_d0;
          if ((lVar13 == 0) || (param_2 != lVar13)) {
            pcVar14 = (char *)0x0;
            if ((local_c0 != 0) && (pcVar14 = "hud arms", param_2 != local_c0)) {
              pcVar14 = (char *)0x0;
            }
          }
          else {
            pcVar14 = "world gloves";
          }
          local_88[0] = '\0';
          local_88[1] = '\0';
          local_88[2] = '\0';
          local_88[3] = '\0';
          local_88[4] = '\0';
          local_88[5] = '\0';
          local_88[6] = '\0';
          local_88[7] = '\0';
          local_88[8] = '\0';
          local_88[9] = '\0';
          local_88[10] = '\0';
          local_88[0xb] = '\0';
          local_88[0xc] = '\0';
          local_88[0xd] = '\0';
          local_88[0xe] = '\0';
          local_88[0xf] = '\0';
          local_88[0x10] = '\0';
          local_88[0x11] = '\0';
          local_88[0x12] = '\0';
          local_88[0x13] = '\0';
          local_88[0x14] = '\0';
          local_88[0x15] = '\0';
          local_88[0x16] = '\0';
          local_88[0x17] = '\0';
          local_88[0x18] = '\0';
          local_88[0x19] = '\0';
          local_88[0x1a] = '\0';
          local_88[0x1b] = '\0';
          local_88[0x1c] = '\0';
          local_88[0x1d] = '\0';
          local_88[0x1e] = '\0';
          local_88[0x1f] = '\0';
          local_88[0x20] = '\0';
          local_88[0x21] = '\0';
          local_88[0x22] = '\0';
          local_88[0x23] = '\0';
          local_88[0x24] = '\0';
          local_88[0x25] = '\0';
          local_88[0x26] = '\0';
          local_88[0x27] = '\0';
          local_88[0x28] = '\0';
          local_88[0x29] = '\0';
          local_88[0x2a] = '\0';
          local_88[0x2b] = '\0';
          local_88[0x2c] = '\0';
          local_88[0x2d] = '\0';
          local_88[0x2e] = '\0';
          local_88[0x2f] = '\0';
          local_88[0x30] = '\0';
          local_88[0x31] = '\0';
          local_88[0x32] = '\0';
          local_88[0x33] = '\0';
          local_88[0x34] = '\0';
          local_88[0x35] = '\0';
          local_88[0x36] = '\0';
          local_88[0x37] = '\0';
          local_88[0x38] = '\0';
          local_88[0x39] = '\0';
          local_88[0x3a] = '\0';
          local_88[0x3b] = '\0';
          local_88[0x3c] = '\0';
          local_88[0x3d] = '\0';
          local_88[0x3e] = '\0';
          local_88[0x3f] = '\0';
          lVar7 = FUN_18000f3a0(local_d0 + 0x70);
          if (lVar7 - 0x10000U < 0x7ffffffeffff) {
            lVar10 = 0;
            do {
              cVar2 = FUN_180011220(lVar10 + lVar7);
              if (cVar2 == '\0') break;
              local_88[lVar10] = cVar2;
              uVar8 = lVar10 + 2;
              lVar10 = lVar10 + 1;
            } while (uVar8 < 0x40);
            local_88[lVar10] = '\0';
            lVar10 = local_d0;
          }
          if (pcVar14 == (char *)0x0) {
            if (DAT_180cfe678 < 0x28) {
              DAT_180cfe678 = DAT_180cfe678 + 1;
              if (param_2 - 0x10000U < 0x7ffffffeffff) {
                local_d0 = param_2;
                puVar9 = (undefined2 *)FUN_1803a0710(&local_d0);
              }
              else {
                puVar9 = (undefined2 *)0x0;
              }
              local_f0 = local_c0;
              puVar12 = &DAT_1806dfbb4;
              if (puVar9 != (undefined2 *)0x0) {
                puVar12 = puVar9;
              }
              local_f8 = lVar13;
              FUN_18028fbf0("colors | gloves | request \'%s\' | owner entity %p %s | not the local world gloves %p / hud arms %p, left alone"
                            ,local_88,param_2,puVar12);
            }
          }
          else {
            iVar4 = FUN_18028f3a0(lVar10,&local_a8,local_b0,local_b8);
            local_e0 = (undefined4)local_a8;
            if (iVar4 < 0) {
              pcVar11 = "[error] not painted";
            }
            else {
              pcVar11 = "consumed: tints overridden in place";
              if (iVar4 == 0) {
                pcVar11 = "consumed: tint container added";
              }
            }
            if (DAT_180cfe658 != 0) {
              uVar6 = FUN_180011200(lVar1 + (ulonglong)DAT_180cfe658);
            }
            local_f0 = CONCAT44(local_f0._4_4_,local_c8);
            local_f8 = CONCAT44(local_f8._4_4_,uVar6);
            local_e8 = pcVar11;
            FUN_18028fbf0("colors | gloves | request \'%s\' | %s %p (%08X) | kit %d | %s | tint1 %08X"
                          ,local_88,pcVar14,param_2);
          }
        }
      }
    }
  }
  return;
}



/* ===== 180298cb0 FUN_180298cb0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180298cb0(undefined4 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  undefined4 *puVar8;
  undefined8 *puVar9;
  ULONGLONG UVar10;
  char *pcVar11;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_48 [64];
  
  if (*(char *)(param_2 + 0x5c) != '\0') {
    lVar7 = FUN_180280c60();
    if ((lVar7 == 0) || (*(int *)(lVar7 + 0x48) != 3)) {
      puVar9 = (undefined8 *)FUN_1802903e0(local_48,param_2);
      uVar1 = *puVar9;
      uVar2 = puVar9[1];
      uVar3 = puVar9[2];
      uVar4 = puVar9[3];
      iVar6 = FUN_1804e4d70(&DAT_1809f3770);
      if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1804e4a90(5);
      }
      if (DAT_1809f37bc == 0x7fffffff) {
        DAT_1809f37bc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
        FUN_1804e4a90(6);
      }
      bVar5 = false;
      DAT_180cfca18 = 1;
      _DAT_180cfc9f0 = uVar1;
      _DAT_180cfc9f8 = uVar2;
      _DAT_180cfca00 = uVar3;
      uRam0000000180cfca08 = uVar4;
      UVar10 = GetTickCount64();
      DAT_180ccfedc = 0;
      DAT_180cfca10 = UVar10 + 5000;
      FUN_1804e4e90(&DAT_1809f3770);
    }
    else {
      bVar5 = true;
      puVar8 = (undefined4 *)FUN_1802903e0(local_48,param_2);
      local_68 = *puVar8;
      uStack_64 = puVar8[1];
      uStack_60 = puVar8[2];
      uStack_5c = puVar8[3];
      local_58 = puVar8[4];
      uStack_54 = puVar8[5];
      uStack_50 = puVar8[6];
      uStack_4c = puVar8[7];
      FUN_18028ebb0(&local_68);
    }
    pcVar11 = "weapon";
    if (bVar5) {
      pcVar11 = "glove";
    }
    FUN_18028fbf0("colors | preview | def %d | kit %d | %s armed",param_1,
                  *(undefined4 *)(param_2 + 8),pcVar11);
  }
  return;
}



/* ===== 180298e00 FUN_180298e00 ===== */

void FUN_180298e00(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)*param_1;
  *(undefined8 *)puVar1[1] = 0;
  puVar1 = (undefined8 *)*puVar1;
  while (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar1;
    thunk_FUN_1803d64e0(puVar1,0x40);
    puVar1 = puVar2;
  }
  thunk_FUN_1803d64e0(*param_1,0x40);
  return;
}



/* ===== 180298e60 FUN_180298e60 ===== */

void FUN_180298e60(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 local_res8;
  
  if (*(ulonglong *)(param_1 + 0x10) != 0) {
    puVar1 = *(undefined8 **)(param_1 + 8);
    if (*(ulonglong *)(param_1 + 0x10) < *(ulonglong *)(param_1 + 0x38) >> 3) {
      FUN_180299ab0(param_1,*puVar1,puVar1);
      return;
    }
    *(undefined8 *)puVar1[1] = 0;
    puVar1 = (undefined8 *)*puVar1;
    while (puVar1 != (undefined8 *)0x0) {
      puVar2 = (undefined8 *)*puVar1;
      thunk_FUN_1803d64e0(puVar1,0x40);
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



/* ===== 180298f10 FUN_180298f10 ===== */

void FUN_180298f10(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 local_res8;
  
  if (*(ulonglong *)(param_1 + 0x10) != 0) {
    puVar1 = *(undefined8 **)(param_1 + 8);
    if (*(ulonglong *)(param_1 + 0x10) < *(ulonglong *)(param_1 + 0x38) >> 3) {
      FUN_180299cc0(param_1,*puVar1,puVar1);
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



/* ===== 180298fc0 FUN_180298fc0 ===== */

void FUN_180298fc0(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)*param_1;
  *(undefined8 *)puVar1[1] = 0;
  puVar1 = (undefined8 *)*puVar1;
  while (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar1;
    thunk_FUN_1803d64e0(puVar1,0x1b8);
    puVar1 = puVar2;
  }
  thunk_FUN_1803d64e0(*param_1,0x1b8);
  return;
}



/* ===== 180299020 FUN_180299020 ===== */

void FUN_180299020(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 local_res8;
  
  if (*(ulonglong *)(param_1 + 0x10) != 0) {
    puVar1 = *(undefined8 **)(param_1 + 8);
    if (*(ulonglong *)(param_1 + 0x10) < *(ulonglong *)(param_1 + 0x38) >> 3) {
      FUN_180299ed0(param_1,*puVar1,puVar1);
      return;
    }
    *(undefined8 *)puVar1[1] = 0;
    puVar1 = (undefined8 *)*puVar1;
    while (puVar1 != (undefined8 *)0x0) {
      puVar2 = (undefined8 *)*puVar1;
      thunk_FUN_1803d64e0(puVar1,0x1b8);
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



/* ===== 1802990d0 FUN_1802990d0 ===== */

undefined8 * FUN_1802990d0(undefined8 param_1,undefined8 *param_2,byte *param_3,undefined4 param_4)

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
  puVar7 = (undefined8 *)(DAT_180cfe760 & uVar8);
  puVar4 = *(undefined8 **)(DAT_180cfe748 + 8 + (longlong)puVar7 * 0x10);
  puVar9 = DAT_180cfe738;
  if (puVar4 != DAT_180cfe738) {
    puVar7 = *(undefined8 **)(DAT_180cfe748 + (longlong)puVar7 * 0x10);
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
  if (DAT_180cfe740 == 0x3ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4cd0("unordered_map/set too long");
  }
  puVar4 = (undefined8 *)FUN_1804ecaa0(0x40,puVar7,DAT_180cfe748,param_4,&DAT_180cfe738,0);
  *(undefined4 *)(puVar4 + 2) = *(undefined4 *)param_3;
  *(undefined4 *)((longlong)puVar4 + 0x1a) = 0;
  *(undefined2 *)((longlong)puVar4 + 0x1e) = 0;
  puVar4[7] = 0;
  *(undefined2 *)(puVar4 + 3) = 0;
  puVar4[4] = 0;
  puVar4[5] = 0;
  puVar4[6] = 0;
  uVar3 = DAT_180cfe768;
  if (DAT_180cfe730 < (float)(DAT_180cfe740 + 1) / (float)DAT_180cfe768) {
    fVar11 = (float)FUN_18053ef70((float)(DAT_180cfe740 + 1) / DAT_180cfe730);
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
    FUN_18029a100(uVar6,uVar10);
    puVar7 = *(undefined8 **)(DAT_180cfe748 + 8 + (DAT_180cfe760 & uVar8) * 0x10);
    puVar9 = DAT_180cfe738;
    if (puVar7 != DAT_180cfe738) {
      iVar1 = *(int *)(puVar7 + 2);
      puVar9 = puVar7;
      while (*(int *)(puVar4 + 2) != iVar1) {
        if (puVar9 == *(undefined8 **)(DAT_180cfe748 + (DAT_180cfe760 & uVar8) * 0x10))
        goto LAB_180299318;
        puVar9 = (undefined8 *)puVar9[1];
        iVar1 = *(int *)(puVar9 + 2);
      }
      puVar9 = (undefined8 *)*puVar9;
    }
  }
LAB_180299318:
  puVar7 = (undefined8 *)puVar9[1];
  DAT_180cfe740 = DAT_180cfe740 + 1;
  *puVar4 = puVar9;
  puVar4[1] = puVar7;
  *puVar7 = puVar4;
  puVar9[1] = puVar4;
  lVar5 = DAT_180cfe748;
  uVar8 = DAT_180cfe760 & uVar8;
  puVar2 = *(undefined8 **)(DAT_180cfe748 + uVar8 * 0x10);
  if (puVar2 == DAT_180cfe738) {
    *(undefined8 **)(DAT_180cfe748 + uVar8 * 0x10) = puVar4;
  }
  else {
    if (puVar2 == puVar9) {
      *(undefined8 **)(DAT_180cfe748 + uVar8 * 0x10) = puVar4;
      goto LAB_180299377;
    }
    if (*(undefined8 **)(DAT_180cfe748 + 8 + uVar8 * 0x10) != puVar7) goto LAB_180299377;
  }
  *(undefined8 **)(lVar5 + 8 + uVar8 * 0x10) = puVar4;
LAB_180299377:
  *param_2 = puVar4;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



/* ===== 1802993a0 FUN_1802993a0 ===== */

undefined8 * FUN_1802993a0(undefined8 param_1,undefined8 *param_2,byte *param_3,undefined4 param_4)

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
  puVar7 = (undefined8 *)(DAT_180ca16b0 & uVar9);
  puVar4 = *(undefined8 **)(DAT_180ca1698 + 8 + (longlong)puVar7 * 0x10);
  puVar10 = DAT_180ca1688;
  if (puVar4 != DAT_180ca1688) {
    puVar7 = *(undefined8 **)(DAT_180ca1698 + (longlong)puVar7 * 0x10);
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
  if (DAT_180ca1690 == 0xaaaaaaaaaaaaaaa) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4cd0("unordered_map/set too long");
  }
  puVar4 = (undefined8 *)FUN_1804ecaa0(0x18,puVar7,DAT_180ca1698,param_4,&DAT_180ca1688,0);
  *(undefined4 *)(puVar4 + 2) = *(undefined4 *)param_3;
  *(undefined4 *)((longlong)puVar4 + 0x14) = 0;
  uVar3 = DAT_180ca16b8;
  if (DAT_180ca1680 < (float)(DAT_180ca1690 + 1) / (float)DAT_180ca16b8) {
    fVar11 = (float)FUN_18053ef70((float)(DAT_180ca1690 + 1) / DAT_180ca1680);
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
    FUN_18029a2d0(uVar6,uVar8);
    puVar7 = *(undefined8 **)(DAT_180ca1698 + 8 + (DAT_180ca16b0 & uVar9) * 0x10);
    puVar10 = DAT_180ca1688;
    if (puVar7 != DAT_180ca1688) {
      iVar1 = *(int *)(puVar7 + 2);
      puVar10 = puVar7;
      while (*(int *)(puVar4 + 2) != iVar1) {
        if (puVar10 == *(undefined8 **)(DAT_180ca1698 + (DAT_180ca16b0 & uVar9) * 0x10))
        goto LAB_1802995cd;
        puVar10 = (undefined8 *)puVar10[1];
        iVar1 = *(int *)(puVar10 + 2);
      }
      puVar10 = (undefined8 *)*puVar10;
    }
  }
LAB_1802995cd:
  puVar7 = (undefined8 *)puVar10[1];
  DAT_180ca1690 = DAT_180ca1690 + 1;
  *puVar4 = puVar10;
  puVar4[1] = puVar7;
  *puVar7 = puVar4;
  puVar10[1] = puVar4;
  lVar5 = DAT_180ca1698;
  uVar9 = DAT_180ca16b0 & uVar9;
  puVar2 = *(undefined8 **)(DAT_180ca1698 + uVar9 * 0x10);
  if (puVar2 == DAT_180ca1688) {
    *(undefined8 **)(DAT_180ca1698 + uVar9 * 0x10) = puVar4;
  }
  else {
    if (puVar2 == puVar10) {
      *(undefined8 **)(DAT_180ca1698 + uVar9 * 0x10) = puVar4;
      goto LAB_18029962c;
    }
    if (*(undefined8 **)(DAT_180ca1698 + 8 + uVar9 * 0x10) != puVar7) goto LAB_18029962c;
  }
  *(undefined8 **)(lVar5 + 8 + uVar9 * 0x10) = puVar4;
LAB_18029962c:
  *param_2 = puVar4;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



/* ===== 180299650 FUN_180299650 ===== */

undefined8 * FUN_180299650(undefined8 param_1,undefined8 *param_2,byte *param_3,undefined4 param_4)

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
  puVar7 = (undefined8 *)(DAT_180cfe6d0 & uVar9);
  puVar4 = *(undefined8 **)(DAT_180cfe6b8 + 8 + (longlong)puVar7 * 0x10);
  puVar10 = DAT_180cfe6a8;
  if (puVar4 != DAT_180cfe6a8) {
    puVar7 = *(undefined8 **)(DAT_180cfe6b8 + (longlong)puVar7 * 0x10);
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
  if (DAT_180cfe6b0 == 0x94f2094f2094f2) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4cd0("unordered_map/set too long");
  }
  puVar4 = (undefined8 *)FUN_1804ecaa0(0x1b8,puVar7,DAT_180cfe6b8,param_4,&DAT_180cfe6a8,0);
  *(undefined4 *)(puVar4 + 2) = *(undefined4 *)param_3;
  *(undefined2 *)((longlong)puVar4 + 0x29) = 0;
  *(undefined1 *)((longlong)puVar4 + 0x2b) = 0;
  *(undefined2 *)((longlong)puVar4 + 0x71) = 0;
  *(undefined1 *)((longlong)puVar4 + 0x73) = 0;
  *(undefined4 *)((longlong)puVar4 + 0x14) = 0;
  *(undefined4 *)(puVar4 + 3) = 0xffffffff;
  *(undefined4 *)((longlong)puVar4 + 0x1c) = 0;
  puVar4[4] = 0x3a83126f;
  *(undefined1 *)(puVar4 + 5) = 0;
  *(undefined4 *)((longlong)puVar4 + 0x2c) = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[8] = 0;
  puVar4[9] = 0;
  puVar4[10] = 0;
  puVar4[0xb] = 0;
  puVar4[0xc] = 0;
  puVar4[0xd] = 0;
  *(undefined1 *)(puVar4 + 0xe) = 0;
  *(undefined4 *)((longlong)puVar4 + 0x74) = 0x3f800000;
  *(undefined4 *)(puVar4 + 0xf) = 0x3f800000;
  *(undefined4 *)((longlong)puVar4 + 0x7c) = 0x3f800000;
  *(undefined4 *)(puVar4 + 0x10) = 0x3f800000;
  *(undefined4 *)((longlong)puVar4 + 0x84) = 0x3f800000;
  *(undefined4 *)(puVar4 + 0x11) = 0x3f800000;
  *(undefined4 *)((longlong)puVar4 + 0x8c) = 0x3f800000;
  *(undefined4 *)(puVar4 + 0x12) = 0x3f800000;
  *(undefined4 *)((longlong)puVar4 + 0x94) = 0x3f800000;
  *(undefined4 *)(puVar4 + 0x13) = 0x3f800000;
  *(undefined4 *)((longlong)puVar4 + 0x9c) = 0x3f800000;
  *(undefined4 *)(puVar4 + 0x14) = 0x3f800000;
  *(undefined4 *)((longlong)puVar4 + 0xa4) = 0x3f800000;
  *(undefined4 *)(puVar4 + 0x15) = 0x3f800000;
  *(undefined4 *)((longlong)puVar4 + 0xac) = 0x3f800000;
  *(undefined4 *)(puVar4 + 0x16) = 0x3f800000;
  *(undefined4 *)((longlong)puVar4 + 0xb4) = 0x3f800000;
  *(undefined4 *)(puVar4 + 0x17) = 0x3f800000;
  *(undefined4 *)((longlong)puVar4 + 0xbc) = 0x3f800000;
  *(undefined4 *)(puVar4 + 0x18) = 0x3f800000;
  *(undefined4 *)((longlong)puVar4 + 0xc4) = 0x3f800000;
  *(undefined4 *)(puVar4 + 0x19) = 0x3f800000;
  *(undefined4 *)((longlong)puVar4 + 0xcc) = 0x3f800000;
  *(undefined4 *)(puVar4 + 0x1a) = 0x3f800000;
  *(undefined4 *)((longlong)puVar4 + 0xd4) = 0x3f800000;
  *(undefined4 *)(puVar4 + 0x1b) = 0x3f800000;
  *(undefined4 *)((longlong)puVar4 + 0xdc) = 0x3f800000;
  *(undefined4 *)(puVar4 + 0x1c) = 0x3f800000;
  *(undefined4 *)((longlong)puVar4 + 0xe4) = 0x3f800000;
  *(undefined4 *)(puVar4 + 0x1d) = 0x3f800000;
  *(undefined4 *)((longlong)puVar4 + 0xec) = 0x3f800000;
  *(undefined4 *)(puVar4 + 0x1e) = 0x3f800000;
  FUN_180540170((longlong)puVar4 + 0xf4,0,0xa8);
  FUN_1800e0fd0((longlong)puVar4 + 0xf4);
  *(undefined8 *)((longlong)puVar4 + 0x19c) = 0;
  *(undefined8 *)((longlong)puVar4 + 0x1a4) = 0;
  *(undefined8 *)((longlong)puVar4 + 0x1ac) = 0;
  uVar3 = DAT_180cfe6d8;
  if (DAT_180cfe6a0 < (float)(DAT_180cfe6b0 + 1) / (float)DAT_180cfe6d8) {
    fVar11 = (float)FUN_18053ef70((float)(DAT_180cfe6b0 + 1) / DAT_180cfe6a0);
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
    FUN_18029a4a0(uVar6,uVar8);
    puVar7 = *(undefined8 **)(DAT_180cfe6b8 + 8 + (DAT_180cfe6d0 & uVar9) * 0x10);
    puVar10 = DAT_180cfe6a8;
    if (puVar7 != DAT_180cfe6a8) {
      iVar1 = *(int *)(puVar7 + 2);
      puVar10 = puVar7;
      while (*(int *)(puVar4 + 2) != iVar1) {
        if (puVar10 == *(undefined8 **)(DAT_180cfe6b8 + (DAT_180cfe6d0 & uVar9) * 0x10))
        goto LAB_180299a28;
        puVar10 = (undefined8 *)puVar10[1];
        iVar1 = *(int *)(puVar10 + 2);
      }
      puVar10 = (undefined8 *)*puVar10;
    }
  }
LAB_180299a28:
  puVar7 = (undefined8 *)puVar10[1];
  DAT_180cfe6b0 = DAT_180cfe6b0 + 1;
  *puVar4 = puVar10;
  puVar4[1] = puVar7;
  *puVar7 = puVar4;
  puVar10[1] = puVar4;
  lVar5 = DAT_180cfe6b8;
  uVar9 = DAT_180cfe6d0 & uVar9;
  puVar2 = *(undefined8 **)(DAT_180cfe6b8 + uVar9 * 0x10);
  if (puVar2 == DAT_180cfe6a8) {
    *(undefined8 **)(DAT_180cfe6b8 + uVar9 * 0x10) = puVar4;
  }
  else {
    if (puVar2 == puVar10) {
      *(undefined8 **)(DAT_180cfe6b8 + uVar9 * 0x10) = puVar4;
      goto LAB_180299a87;
    }
    if (*(undefined8 **)(DAT_180cfe6b8 + 8 + uVar9 * 0x10) != puVar7) goto LAB_180299a87;
  }
  *(undefined8 **)(lVar5 + 8 + uVar9 * 0x10) = puVar4;
LAB_180299a87:
  *param_2 = puVar4;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



/* ===== 180299ab0 FUN_180299ab0 ===== */

longlong * FUN_180299ab0(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
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
  lVar1 = *(longlong *)(param_1 + 0x18);
  puVar2 = *(undefined8 **)(param_1 + 8);
  puVar3 = (undefined8 *)param_2[1];
  lVar5 = (*(ulonglong *)(param_1 + 0x30) &
          (((((ulonglong)*(byte *)(param_2 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
            (ulonglong)*(byte *)((longlong)param_2 + 0x11)) * 0x100000001b3 ^
           (ulonglong)*(byte *)((longlong)param_2 + 0x12)) * 0x100000001b3 ^
          (ulonglong)*(byte *)((longlong)param_2 + 0x13)) * 0x100000001b3) * 0x10;
  plVar8 = (longlong *)(lVar1 + 8 + lVar5);
  plVar7 = (longlong *)(lVar5 + lVar1);
  plVar4 = *(longlong **)(lVar5 + lVar1);
  plVar10 = (longlong *)*plVar8;
  plVar9 = param_2;
  do {
    plVar11 = (longlong *)*plVar9;
    thunk_FUN_1803d64e0(plVar9,0x40);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
    if (plVar9 == plVar10) {
      if (plVar4 == param_2) {
        *plVar7 = (longlong)puVar2;
        puVar6 = puVar2;
      }
      else {
        puVar6 = puVar3;
      }
      *plVar8 = (longlong)puVar6;
      while (plVar11 != param_3) {
        uVar12 = *(ulonglong *)(param_1 + 0x30) &
                 (((((ulonglong)*(byte *)(plVar11 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                   (ulonglong)*(byte *)((longlong)plVar11 + 0x11)) * 0x100000001b3 ^
                  (ulonglong)*(byte *)((longlong)plVar11 + 0x12)) * 0x100000001b3 ^
                 (ulonglong)*(byte *)((longlong)plVar11 + 0x13)) * 0x100000001b3;
        plVar4 = *(longlong **)(lVar1 + 8 + uVar12 * 0x10);
        plVar7 = (longlong *)(lVar1 + uVar12 * 0x10);
        plVar10 = plVar11;
        while( true ) {
          plVar11 = (longlong *)*plVar10;
          thunk_FUN_1803d64e0(plVar10,0x40);
          *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
          if (plVar10 == plVar4) break;
          plVar10 = plVar11;
          if (plVar11 == param_3) goto LAB_180299c66;
        }
        *plVar7 = (longlong)puVar2;
        *(undefined8 **)(lVar1 + 8 + uVar12 * 0x10) = puVar2;
      }
      goto LAB_180299c69;
    }
    plVar9 = plVar11;
  } while (plVar11 != param_3);
  if (plVar4 == param_2) {
LAB_180299c66:
    *plVar7 = (longlong)plVar11;
  }
LAB_180299c69:
  *puVar3 = plVar11;
  plVar11[1] = (longlong)puVar3;
  return param_3;
}



/* ===== 180299cc0 FUN_180299cc0 ===== */

longlong * FUN_180299cc0(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
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
  lVar1 = *(longlong *)(param_1 + 0x18);
  puVar2 = *(undefined8 **)(param_1 + 8);
  puVar3 = (undefined8 *)param_2[1];
  lVar5 = (*(ulonglong *)(param_1 + 0x30) &
          (((((ulonglong)*(byte *)(param_2 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
            (ulonglong)*(byte *)((longlong)param_2 + 0x11)) * 0x100000001b3 ^
           (ulonglong)*(byte *)((longlong)param_2 + 0x12)) * 0x100000001b3 ^
          (ulonglong)*(byte *)((longlong)param_2 + 0x13)) * 0x100000001b3) * 0x10;
  plVar8 = (longlong *)(lVar1 + 8 + lVar5);
  plVar7 = (longlong *)(lVar5 + lVar1);
  plVar4 = *(longlong **)(lVar5 + lVar1);
  plVar10 = (longlong *)*plVar8;
  plVar9 = param_2;
  do {
    plVar11 = (longlong *)*plVar9;
    thunk_FUN_1803d64e0(plVar9,0x18);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
    if (plVar9 == plVar10) {
      if (plVar4 == param_2) {
        *plVar7 = (longlong)puVar2;
        puVar6 = puVar2;
      }
      else {
        puVar6 = puVar3;
      }
      *plVar8 = (longlong)puVar6;
      while (plVar11 != param_3) {
        uVar12 = *(ulonglong *)(param_1 + 0x30) &
                 (((((ulonglong)*(byte *)(plVar11 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                   (ulonglong)*(byte *)((longlong)plVar11 + 0x11)) * 0x100000001b3 ^
                  (ulonglong)*(byte *)((longlong)plVar11 + 0x12)) * 0x100000001b3 ^
                 (ulonglong)*(byte *)((longlong)plVar11 + 0x13)) * 0x100000001b3;
        plVar4 = *(longlong **)(lVar1 + 8 + uVar12 * 0x10);
        plVar7 = (longlong *)(lVar1 + uVar12 * 0x10);
        plVar10 = plVar11;
        while( true ) {
          plVar11 = (longlong *)*plVar10;
          thunk_FUN_1803d64e0(plVar10,0x18);
          *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
          if (plVar10 == plVar4) break;
          plVar10 = plVar11;
          if (plVar11 == param_3) goto LAB_180299e76;
        }
        *plVar7 = (longlong)puVar2;
        *(undefined8 **)(lVar1 + 8 + uVar12 * 0x10) = puVar2;
      }
      goto LAB_180299e79;
    }
    plVar9 = plVar11;
  } while (plVar11 != param_3);
  if (plVar4 == param_2) {
LAB_180299e76:
    *plVar7 = (longlong)plVar11;
  }
LAB_180299e79:
  *puVar3 = plVar11;
  plVar11[1] = (longlong)puVar3;
  return param_3;
}



/* ===== 180299ed0 FUN_180299ed0 ===== */

longlong * FUN_180299ed0(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
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
  lVar1 = *(longlong *)(param_1 + 0x18);
  puVar2 = *(undefined8 **)(param_1 + 8);
  puVar3 = (undefined8 *)param_2[1];
  lVar5 = (*(ulonglong *)(param_1 + 0x30) &
          (((((ulonglong)*(byte *)(param_2 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
            (ulonglong)*(byte *)((longlong)param_2 + 0x11)) * 0x100000001b3 ^
           (ulonglong)*(byte *)((longlong)param_2 + 0x12)) * 0x100000001b3 ^
          (ulonglong)*(byte *)((longlong)param_2 + 0x13)) * 0x100000001b3) * 0x10;
  plVar8 = (longlong *)(lVar1 + 8 + lVar5);
  plVar7 = (longlong *)(lVar5 + lVar1);
  plVar4 = *(longlong **)(lVar5 + lVar1);
  plVar10 = (longlong *)*plVar8;
  plVar9 = param_2;
  do {
    plVar11 = (longlong *)*plVar9;
    thunk_FUN_1803d64e0(plVar9,0x1b8);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
    if (plVar9 == plVar10) {
      if (plVar4 == param_2) {
        *plVar7 = (longlong)puVar2;
        puVar6 = puVar2;
      }
      else {
        puVar6 = puVar3;
      }
      *plVar8 = (longlong)puVar6;
      while (plVar11 != param_3) {
        uVar12 = *(ulonglong *)(param_1 + 0x30) &
                 (((((ulonglong)*(byte *)(plVar11 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                   (ulonglong)*(byte *)((longlong)plVar11 + 0x11)) * 0x100000001b3 ^
                  (ulonglong)*(byte *)((longlong)plVar11 + 0x12)) * 0x100000001b3 ^
                 (ulonglong)*(byte *)((longlong)plVar11 + 0x13)) * 0x100000001b3;
        plVar4 = *(longlong **)(lVar1 + 8 + uVar12 * 0x10);
        plVar7 = (longlong *)(lVar1 + uVar12 * 0x10);
        plVar10 = plVar11;
        while( true ) {
          plVar11 = (longlong *)*plVar10;
          thunk_FUN_1803d64e0(plVar10,0x1b8);
          *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
          if (plVar10 == plVar4) break;
          plVar10 = plVar11;
          if (plVar11 == param_3) goto LAB_18029a086;
        }
        *plVar7 = (longlong)puVar2;
        *(undefined8 **)(lVar1 + 8 + uVar12 * 0x10) = puVar2;
      }
      goto LAB_18029a089;
    }
    plVar9 = plVar11;
  } while (plVar11 != param_3);
  if (plVar4 == param_2) {
LAB_18029a086:
    *plVar7 = (longlong)plVar11;
  }
LAB_18029a089:
  *puVar3 = plVar11;
  plVar11[1] = (longlong)puVar3;
  return param_3;
}



/* ===== 18029a100 FUN_18029a100 ===== */

void FUN_18029a100(undefined8 param_1,ulonglong param_2)

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
  
  plVar8 = DAT_180cfe738;
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
  FUN_180029d30(&DAT_180cfe748,2L << (bVar10 & 0x3f),DAT_180cfe738);
  DAT_180cfe760 = lVar11 - 1;
  DAT_180cfe768 = lVar11;
  plVar7 = (longlong *)*DAT_180cfe738;
  lVar11 = DAT_180cfe748;
joined_r0x00018029a17c:
  do {
    while( true ) {
      while( true ) {
        if (plVar7 == plVar8) {
          DAT_180cfe748 = lVar11;
          return;
        }
        plVar1 = (longlong *)*plVar7;
        uVar9 = (((((ulonglong)*(byte *)(plVar7 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                  (ulonglong)*(byte *)((longlong)plVar7 + 0x11)) * 0x100000001b3 ^
                 (ulonglong)*(byte *)((longlong)plVar7 + 0x12)) * 0x100000001b3 ^
                (ulonglong)*(byte *)((longlong)plVar7 + 0x13)) * 0x100000001b3 & DAT_180cfe760;
        plVar2 = *(longlong **)(lVar11 + uVar9 * 0x10);
        DAT_180cfe748 = lVar11;
        if (plVar2 != plVar8) break;
        *(longlong **)(lVar11 + uVar9 * 0x10) = plVar7;
        *(longlong **)(lVar11 + 8 + uVar9 * 0x10) = plVar7;
        plVar7 = plVar1;
        lVar11 = DAT_180cfe748;
      }
      plVar3 = *(longlong **)(lVar11 + 8 + uVar9 * 0x10);
      if ((int)plVar7[2] != (int)plVar3[2]) break;
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
      lVar11 = DAT_180cfe748;
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
        lVar11 = DAT_180cfe748;
        goto joined_r0x00018029a17c;
      }
      plVar3 = (longlong *)plVar3[1];
    } while ((int)plVar7[2] != (int)plVar3[2]);
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
    lVar11 = DAT_180cfe748;
  } while( true );
}



/* ===== 18029a2d0 FUN_18029a2d0 ===== */

void FUN_18029a2d0(undefined8 param_1,ulonglong param_2)

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
  
  plVar8 = DAT_180ca1688;
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
  FUN_180029a30(&DAT_180ca1698,2L << (bVar10 & 0x3f),DAT_180ca1688);
  DAT_180ca16b0 = lVar11 - 1;
  DAT_180ca16b8 = lVar11;
  plVar7 = (longlong *)*DAT_180ca1688;
  lVar11 = DAT_180ca1698;
joined_r0x00018029a34c:
  do {
    while( true ) {
      while( true ) {
        if (plVar7 == plVar8) {
          DAT_180ca1698 = lVar11;
          return;
        }
        plVar1 = (longlong *)*plVar7;
        uVar9 = (((((ulonglong)*(byte *)(plVar7 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                  (ulonglong)*(byte *)((longlong)plVar7 + 0x11)) * 0x100000001b3 ^
                 (ulonglong)*(byte *)((longlong)plVar7 + 0x12)) * 0x100000001b3 ^
                (ulonglong)*(byte *)((longlong)plVar7 + 0x13)) * 0x100000001b3 & DAT_180ca16b0;
        plVar2 = *(longlong **)(lVar11 + uVar9 * 0x10);
        DAT_180ca1698 = lVar11;
        if (plVar2 != plVar8) break;
        *(longlong **)(lVar11 + uVar9 * 0x10) = plVar7;
        *(longlong **)(lVar11 + 8 + uVar9 * 0x10) = plVar7;
        plVar7 = plVar1;
        lVar11 = DAT_180ca1698;
      }
      plVar3 = *(longlong **)(lVar11 + 8 + uVar9 * 0x10);
      if ((int)plVar7[2] != (int)plVar3[2]) break;
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
      lVar11 = DAT_180ca1698;
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
        lVar11 = DAT_180ca1698;
        goto joined_r0x00018029a34c;
      }
      plVar3 = (longlong *)plVar3[1];
    } while ((int)plVar7[2] != (int)plVar3[2]);
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
    lVar11 = DAT_180ca1698;
  } while( true );
}



/* ===== 18029a4a0 FUN_18029a4a0 ===== */

void FUN_18029a4a0(undefined8 param_1,ulonglong param_2)

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
  
  plVar8 = DAT_180cfe6a8;
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
  FUN_180029a30(&DAT_180cfe6b8,2L << (bVar10 & 0x3f),DAT_180cfe6a8);
  DAT_180cfe6d0 = lVar11 - 1;
  DAT_180cfe6d8 = lVar11;
  plVar7 = (longlong *)*DAT_180cfe6a8;
  lVar11 = DAT_180cfe6b8;
joined_r0x00018029a51c:
  do {
    while( true ) {
      while( true ) {
        if (plVar7 == plVar8) {
          DAT_180cfe6b8 = lVar11;
          return;
        }
        plVar1 = (longlong *)*plVar7;
        uVar9 = (((((ulonglong)*(byte *)(plVar7 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                  (ulonglong)*(byte *)((longlong)plVar7 + 0x11)) * 0x100000001b3 ^
                 (ulonglong)*(byte *)((longlong)plVar7 + 0x12)) * 0x100000001b3 ^
                (ulonglong)*(byte *)((longlong)plVar7 + 0x13)) * 0x100000001b3 & DAT_180cfe6d0;
        plVar2 = *(longlong **)(lVar11 + uVar9 * 0x10);
        DAT_180cfe6b8 = lVar11;
        if (plVar2 != plVar8) break;
        *(longlong **)(lVar11 + uVar9 * 0x10) = plVar7;
        *(longlong **)(lVar11 + 8 + uVar9 * 0x10) = plVar7;
        plVar7 = plVar1;
        lVar11 = DAT_180cfe6b8;
      }
      plVar3 = *(longlong **)(lVar11 + 8 + uVar9 * 0x10);
      if ((int)plVar7[2] != (int)plVar3[2]) break;
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
      lVar11 = DAT_180cfe6b8;
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
        lVar11 = DAT_180cfe6b8;
        goto joined_r0x00018029a51c;
      }
      plVar3 = (longlong *)plVar3[1];
    } while ((int)plVar7[2] != (int)plVar3[2]);
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
    lVar11 = DAT_180cfe6b8;
  } while( true );
}



/* ===== 18029a670 FUN_18029a670 ===== */

void FUN_18029a670(void)

{
  HMODULE hModule;
  FARPROC pFVar1;
  char *pcVar2;
  char *pcVar3;
  
  if (DAT_180cd033d == '\0') {
    DAT_180cd033d = '\x01';
    hModule = GetModuleHandleA("tier0.dll");
    if (hModule != (HMODULE)0x0) {
      DAT_180cfe7a8 = GetProcAddress(hModule,"Plat_FloatTime");
      pFVar1 = GetProcAddress(hModule,"??0?$CUniformRandomStreamImpl@VCThreadNullMutex@@@@QEAA@XZ");
      DAT_180cfe8a0 =
           GetProcAddress(hModule,
                          "?SetSeed@?$CUniformRandomStreamImpl@VCThreadNullMutex@@@@QEAAXH@Z");
      DAT_180cfe898 =
           GetProcAddress(hModule,
                          "?RandomFloat@?$CUniformRandomStreamImpl@VCThreadNullMutex@@@@QEAAMMM@Z");
      if (((pFVar1 != (FARPROC)0x0) && (DAT_180cfe8a0 != (FARPROC)0x0)) &&
         (DAT_180cfe898 != (FARPROC)0x0)) {
        (*pFVar1)(&DAT_180cfe8b0);
        DAT_180cd031e = '\x01';
      }
      pcVar2 = "MISSING";
      pcVar3 = "MISSING";
      if (DAT_180cd031e != '\0') {
        pcVar3 = "ok";
      }
      if (DAT_180cfe7a8 != (FARPROC)0x0) {
        pcVar2 = "ok";
      }
      FUN_1802b2560("[legitbot] Plat_FloatTime %s | random stream %s",pcVar2,pcVar3);
    }
  }
  return;
}



/* ===== 18029a770 FUN_18029a770 ===== */

void FUN_18029a770(void)

{
  if ((DAT_180cfe7b0 == '\0') && (DAT_1811089f0 != 0)) {
    DAT_180cfe7b4 = FUN_18038eaf0("CCSWeaponBaseVData","m_WeaponCategory");
    DAT_180cfe7b8 = FUN_18038eaf0("CCSWeaponBaseVData","m_WeaponType");
    DAT_180cfe7bc = FUN_18038eaf0("CCSWeaponBaseVData","m_bIsFullAuto");
    DAT_180cfe7c0 = FUN_18038eaf0("CCSWeaponBaseVData","m_flCycleTime");
    DAT_180cfe7c4 = FUN_18038eaf0("CCSWeaponBaseVData","m_nZoomLevels");
    DAT_180cfe7c8 = FUN_18038eaf0("CCSWeaponBaseVData","m_flRange");
    DAT_180cfe7cc = FUN_18038eaf0("CCSWeaponBaseVData","m_nDamage");
    DAT_180cfe7d0 = FUN_18038eaf0("CCSWeaponBaseVData","m_flArmorRatio");
    DAT_180cfe7d4 = FUN_18038eaf0("CCSWeaponBaseVData","m_flHeadshotMultiplier");
    DAT_180cfe7d8 = FUN_18038eaf0("CCSWeaponBaseVData","m_nNumBullets");
    DAT_180cfe7dc = FUN_18038eaf0("CCSWeaponBaseVData","m_flMaxSpeed");
    DAT_180cfe7e0 = FUN_18038eaf0("C_CSWeaponBase","m_bInReload");
    DAT_180cfe7e4 = FUN_18038eaf0("C_BasePlayerWeapon","m_iClip1");
    DAT_180cfe7e8 = FUN_18038eaf0("C_BasePlayerWeapon","m_nNextPrimaryAttackTick");
    DAT_180cfe7ec = FUN_18038eaf0("C_BasePlayerWeapon","m_flNextPrimaryAttackTickRatio");
    DAT_180cfe7f0 = FUN_18038eaf0("C_BasePlayerWeapon","m_nNextSecondaryAttackTick");
    DAT_180cfe7f4 = FUN_18038eaf0("C_BasePlayerWeapon","m_flNextSecondaryAttackTickRatio");
    DAT_180cfe7f8 = FUN_18038eaf0("C_CSWeaponBase","m_iWeaponGameplayAnimState");
    DAT_180cfe7fc = FUN_18038eaf0("C_CSWeaponBaseGun","m_zoomLevel");
    DAT_180cfe800 = FUN_18038eaf0("C_CSWeaponBase","m_weaponMode");
    DAT_180cfe804 = FUN_18038eaf0("C_CSPlayerPawn","m_iShotsFired");
    DAT_180cfe808 = FUN_18038eaf0("C_CSPlayerPawnBase","m_flFlashScreenshotAlpha");
    DAT_180cfe80c = FUN_18038eaf0("C_CSPlayerPawn","m_bResumeZoom");
    DAT_180cfe810 = FUN_18038eaf0("C_BaseEntity","m_iHealth");
    DAT_180cfe814 = FUN_18038eaf0("C_CSPlayerPawn","m_ArmorValue");
    DAT_180cfe818 = FUN_18038eaf0("C_BasePlayerPawn","m_pItemServices");
    DAT_180cfe81c = FUN_18038eaf0("CCSPlayer_ItemServices","m_bHasHelmet");
    DAT_180cfe820 = FUN_18038eaf0("C_CSGameRules","m_fRoundStartTime");
    DAT_180cfe824 = FUN_18038eaf0("C_BasePlayerPawn","m_flFOVSensitivityAdjust");
    DAT_180cfe828 = FUN_18038eaf0("CPlayer_WeaponServices","m_hLastWeapon");
    DAT_180cfe82c = FUN_18038eaf0("C_BasePlayerPawn","m_pWeaponServices");
    DAT_180cfe830 = FUN_18038eaf0("C_BaseEntity","m_flFriction");
    DAT_180cfe834 = FUN_18038eaf0("CCSPlayer_MovementServices","m_nOldWaterLevel");
    DAT_180cfe838 = FUN_18038eaf0("C_BaseEntity","m_nActualMoveType");
    DAT_180cfe83c = FUN_18038eaf0("CCSPlayer_AimPunchServices","m_predictableBaseTick");
    DAT_180cfe840 = FUN_18038eaf0("CCSPlayer_AimPunchServices","m_predictableBaseTickInterpAmount");
    DAT_180cfe844 = FUN_18038eaf0("CCSPlayer_AimPunchServices","m_predictableBaseAngle");
    DAT_180cfe848 = FUN_18038eaf0("CCSPlayer_AimPunchServices","m_predictableBaseAngleVel");
    DAT_180cfe84c = FUN_18038eaf0("C_BasePlayerPawn","m_pCameraServices");
    DAT_180cfe850 = FUN_18038eaf0("CPlayer_CameraServices","m_vecCsViewPunchAngle");
    DAT_180cfe854 = FUN_18038eaf0("CPlayer_CameraServices","m_nCsViewPunchAngleTick");
    DAT_180cfe858 = FUN_18038eaf0("CPlayer_CameraServices","m_flCsViewPunchAngleTickRatio");
    DAT_180cfe85c = FUN_18038eaf0("C_CSWeaponBase","m_flRecoilIndex");
    DAT_180cfe860 = FUN_18038eaf0("CBasePlayerWeaponVData","m_iMaxClip1");
    if ((DAT_180cfe7b8 == 0) ||
       (((DAT_180cfe7e4 == 0 || (DAT_180cfe7e8 == 0)) ||
        (DAT_180cfe7b0 = '\x01', DAT_180cfe804 == 0)))) {
      DAT_180cfe7b0 = '\0';
    }
  }
  return;
}



/* ===== 18029ac20 FUN_18029ac20 ===== */

float * FUN_18029ac20(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  
  fVar3 = *param_2;
  if ((fVar3 == 0.0) && (param_2[1] == 0.0)) {
    if (param_2[2] <= 0.0) {
      *param_1 = DAT_1808acaf4;
      param_1[1] = 0.0;
      param_1[2] = 0.0;
    }
    else {
      *param_1 = DAT_1808acba8;
      param_1[1] = 0.0;
      param_1[2] = 0.0;
    }
  }
  else {
    fVar1 = param_2[1];
    fVar2 = (float)FUN_180516b00(fVar1,fVar3);
    uVar4 = (uint)param_2[2] ^ DAT_1808adec0;
    fVar2 = (fVar2 * DAT_1808acb58) / DAT_1808ac680;
    fVar3 = fVar3 * fVar3 + fVar1 * fVar1;
    if (fVar3 < 0.0) {
      fVar3 = (float)FUN_18051af10(fVar3);
    }
    else {
      fVar3 = SQRT(fVar3);
    }
    fVar3 = (float)FUN_180516b00(uVar4,fVar3);
    fVar3 = (fVar3 * DAT_1808acb58) / DAT_1808ac680;
    if (fVar2 < 0.0) {
      fVar2 = fVar2 + DAT_1808acbd0;
    }
    if (fVar3 < 0.0) {
      fVar3 = fVar3 + DAT_1808acbd0;
    }
    param_1[1] = fVar2;
    param_1[2] = 0.0;
    *param_1 = fVar3;
  }
  return param_1;
}



/* ===== 18029ad80 FUN_18029ad80 ===== */

ulonglong FUN_18029ad80(float *param_1,float *param_2,float param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  float fVar6;
  ulonglong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  fVar11 = DAT_1808ac014;
  param_3 = param_3 * DAT_1808ac014;
  fVar2 = (float)FUN_180517200(param_3);
  fVar9 = *param_1;
  fVar3 = (float)FUN_180517200(param_4 * fVar11);
  fVar6 = DAT_1808acc80;
  fVar1 = param_1[1];
  fVar3 = fVar3 * fVar2 * DAT_1808acc80 + fVar9;
  fVar4 = (float)FUN_180517790(param_4 * fVar11);
  fVar11 = param_1[2];
  fVar2 = fVar4 * fVar2 * fVar6 + fVar1;
  uVar5 = FUN_180517790(param_3);
  fVar12 = fVar2 - fVar1;
  fVar13 = fVar3 - fVar9;
  fVar6 = (float)(uVar5 ^ DAT_1808adec0) * fVar6 + fVar11;
  fVar11 = fVar6 - fVar11;
  fVar4 = fVar12 * fVar12 + fVar13 * fVar13 + fVar11 * fVar11;
  if (fVar4 < 0.0) {
    fVar4 = (float)FUN_18051af10(fVar4);
  }
  else {
    fVar4 = SQRT(fVar4);
  }
  if (fVar4 != 0.0) {
    fVar11 = fVar11 / fVar4;
    fVar12 = fVar12 / fVar4;
    fVar13 = fVar13 / fVar4;
  }
  fVar14 = *param_2 - fVar9;
  fVar15 = param_2[2] - param_1[2];
  fVar8 = param_2[1] - fVar1;
  fVar10 = fVar8 * fVar12 + fVar14 * fVar13 + fVar15 * fVar11;
  if (0.0 <= fVar10) {
    if (fVar10 <= fVar4) {
      fVar3 = fVar13 * fVar10 + fVar9;
      fVar2 = fVar12 * fVar10 + fVar1;
      fVar6 = fVar11 * fVar10 + param_1[2];
    }
    fVar6 = param_2[2] - fVar6;
    fVar3 = *param_2 - fVar3;
    fVar2 = param_2[1] - fVar2;
    fVar9 = fVar2 * fVar2 + fVar3 * fVar3 + fVar6 * fVar6;
    if (0.0 <= fVar9) {
      return (ulonglong)(uint)SQRT(fVar9);
    }
  }
  else {
    fVar9 = fVar8 * fVar8 + fVar14 * fVar14 + fVar15 * fVar15;
    if (0.0 <= fVar9) {
      return (ulonglong)(uint)SQRT(fVar9);
    }
  }
  uVar7 = FUN_18051af10(fVar9);
  return uVar7;
}



/* ===== 18029b030 FUN_18029b030 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_18029b030(longlong param_1)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  
  if ((param_1 != 0) && (uVar1 = (ulonglong)DAT_180961fb4, uVar1 != 0)) {
    uVar2 = FUN_18000f3d0(uVar1 + param_1);
    uVar3 = FUN_18000f3d0(uVar1 + param_1 + 4);
    if (((uVar2 & 0x7f800000) != 0x7f800000) &&
       ((((uVar3 & 0x7f800000) != 0x7f800000 && ((float)(uVar2 & _DAT_1808ade90) <= DAT_1808acaf4))
        && ((float)(uVar3 & _DAT_1808ade90) <= DAT_1808acbd0)))) {
      return uVar1;
    }
  }
  return 0;
}



/* ===== 18029b0e0 FUN_18029b0e0 ===== */

undefined8 FUN_18029b0e0(void)

{
  ULONGLONG UVar1;
  
  if (DAT_180cd033c == '\0') {
    if (DAT_180cd031f != '\0') {
      return 0;
    }
    DAT_180cd031f = '\x01';
    DAT_180cd033c = '\x01';
    UVar1 = GetTickCount64();
    FUN_1802b2870("wl_legit.log","\n===== wl_legit session %llu =====\n",UVar1);
    FUN_1802b2870("wl_legit.log",
                  "patterns | csgo_input %d view_angles_offset 0x%llX | frame_input_ring %d index %d interp %d | seed %d calculate_spread %d inaccuracy %d spread %d accuracy %d | aim_punch %d decay %d | shoot_position_at %d | trace_bullet %d data_init %d filter %d ray %d manager %d point_contents %d hitboxes %d | smoke %d taser %d recoil %d | global_vars %d\n"
                  ,DAT_180961a38 != 0,DAT_180961fb4,DAT_180962018 != 0,DAT_180962020 != 0,
                  DAT_180962028 != 0,DAT_180961ca0 != 0,DAT_180961ca8 != 0,DAT_180961cb8 != 0,
                  DAT_180961cc0 != 0,DAT_180961cb0 != 0,DAT_180961cc8 != 0,DAT_180962030 != 0,
                  DAT_180961f98 != 0,DAT_180961f68 != 0,DAT_180961f60 != 0,DAT_180961f50 != 0,
                  DAT_180961f48 != 0,DAT_180961f40 != 0,DAT_180961f58 != 0,DAT_180961f88 != 0,
                  DAT_180962048 != 0,DAT_180962040 != 0,DAT_180962038 != 0,DAT_180961a50 != 0);
  }
  return 1;
}



/* ===== 18029b410 FUN_18029b410 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_18029b410(undefined8 *param_1,int param_2,undefined4 param_3)

{
  float fVar1;
  code *pcVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  char cVar8;
  byte bVar9;
  int *piVar10;
  undefined8 uVar11;
  undefined4 *puVar12;
  longlong lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  size_t sVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  undefined1 *puVar20;
  int *piVar21;
  char *pcVar22;
  undefined1 *unaff_R12;
  int iVar23;
  longlong unaff_R15;
  undefined1 auStack_748 [8];
  undefined1 auStack_740 [280];
  int local_628 [7];
  uint local_60c;
  uint local_608;
  uint local_604;
  uint local_600;
  uint local_5fc;
  uint local_5f8;
  uint local_5f4;
  uint local_5f0;
  undefined4 local_5ec;
  undefined4 local_5e8;
  undefined4 local_5e4;
  uint local_5e0;
  uint local_5dc;
  uint local_5d8;
  uint local_5d4;
  uint local_5d0;
  uint local_5cc;
  undefined4 local_5c8;
  undefined4 local_5c4;
  uint local_5c0;
  undefined4 local_5bc;
  undefined8 *local_5b8;
  undefined8 local_5b0;
  undefined8 uStack_5a8;
  undefined8 local_5a0;
  ulonglong local_598;
  undefined4 local_590;
  undefined4 uStack_58c;
  undefined4 uStack_588;
  undefined4 uStack_584;
  undefined4 local_580;
  undefined4 uStack_57c;
  undefined4 uStack_578;
  undefined4 uStack_574;
  char *local_570;
  undefined8 uStack_568;
  undefined8 local_560;
  ulonglong local_558;
  undefined1 local_550 [32];
  undefined1 local_530 [32];
  undefined1 local_510 [32];
  undefined1 local_4f0 [32];
  undefined1 local_4d0 [32];
  undefined1 local_4b0 [32];
  undefined1 local_490 [32];
  undefined8 local_470;
  undefined8 uStack_468;
  char local_458 [1024];
  ulonglong local_58;
  
  local_58 = DAT_180919500 ^ (ulonglong)auStack_748;
  local_628[5] = 0;
  local_628[4] = 0x3f;
  local_628[0] = 0;
  piVar10 = local_628;
  if (-1 < param_2) {
    piVar10 = local_628 + 2;
  }
  piVar21 = local_628 + 4;
  if (param_2 < 0x40) {
    piVar21 = piVar10;
  }
  local_628[2] = param_2;
  local_5bc = param_3;
  local_5b8 = param_1;
  if (param_2 < 1) {
    uStack_5a8 = 0;
    local_5a0 = 6;
    local_598 = 0xf;
    local_5b0 = (ulonglong)CONCAT24(s_global_1806f2a8c._4_2_,s_global_1806f2a8c._0_4_);
  }
  else {
    uVar11 = FUN_18003a390(&local_590);
    local_628[5] = 2;
    FUN_180066ab0(&local_5b0,&DAT_1806e0b7c,uVar11);
    FUN_18000f890(&local_590);
  }
  uVar11 = FUN_180066ab0(local_550,"legitbot.",&local_5b0);
  puVar12 = (undefined4 *)FUN_1800134a0(uVar11,&DAT_1806e6f24,1);
  local_590 = *puVar12;
  uStack_58c = puVar12[1];
  uStack_588 = puVar12[2];
  uStack_584 = puVar12[3];
  local_580 = puVar12[4];
  uStack_57c = puVar12[5];
  uStack_578 = puVar12[6];
  uStack_574 = puVar12[7];
  *(undefined8 *)(puVar12 + 4) = 0;
  *(undefined8 *)(puVar12 + 6) = 0xf;
  *(undefined1 *)puVar12 = 0;
  FUN_18000f890(local_550);
  if (local_598 < 0x10) {
LAB_18029b57a:
    puVar20 = auStack_748;
    unaff_R15 = (longlong)*piVar21 * 100;
    unaff_R12 = &DAT_18091a190;
    piVar21 = (int *)((longlong)*piVar21 * 0x3c);
    local_5a0 = 0;
    local_598 = 0xf;
    local_5b0 = local_5b0 & 0xffffffffffffff00;
    local_470 = 0;
    uStack_468 = 0;
    if (piVar21[0x602558a1] < 0x65) goto LAB_18029b5d5;
    snprintf(&local_470,0x10,&DAT_180741008);
    puVar20 = auStack_748;
  }
  else {
    uVar18 = local_598 + 1;
    uVar19 = local_5b0;
    if (uVar18 < 0x1000) {
LAB_18029b575:
      thunk_FUN_1803d64e0(uVar19,uVar18);
      goto LAB_18029b57a;
    }
    uVar19 = *(ulonglong *)(local_5b0 - 8);
    if ((local_5b0 - uVar19) - 8 < 0x20) {
      uVar18 = local_598 + 0x28;
      goto LAB_18029b575;
    }
    pcVar2 = (code *)swi(0x29);
    (*pcVar2)(5);
    puVar20 = auStack_740;
LAB_18029b5d5:
    *(undefined8 *)(puVar20 + -8) = 0x18029b5e1;
    snprintf();
  }
  *(undefined8 *)(puVar20 + -8) = 0x18029b5f5;
  FUN_180540170(local_458,0,0x400);
  local_628[6] = DAT_180957234;
  if (DAT_1809f351c == 2) {
LAB_18029b647:
    bVar9 = 1;
  }
  else {
    if (DAT_1809f351c == 1) {
      *(undefined8 *)(puVar20 + -8) = 0x18029b613;
      lVar13 = FUN_180266660();
      if ((lVar13 != 0) && (DAT_180cf9f80 != 0)) {
        *(undefined8 *)(puVar20 + -8) = 0x18029b62a;
        cVar8 = FUN_180011220((ulonglong)DAT_180cf9f80 + lVar13);
        if (cVar8 != '\0') goto LAB_18029b647;
      }
    }
    *(undefined8 *)(puVar20 + -8) = 0x18029b635;
    cVar8 = FUN_18026b810(1);
    if (cVar8 != '\0') goto LAB_18029b647;
    bVar9 = 0;
  }
  iVar7 = DAT_1809f351c;
  local_60c = (uint)bVar9;
  if (DAT_1809f351c == 2) {
LAB_18029b67d:
    bVar9 = 1;
  }
  else {
    if (DAT_1809f351c == 1) {
      *(undefined8 *)(puVar20 + -8) = 0x18029b65e;
      lVar13 = FUN_180266660();
      if ((lVar13 != 0) && (DAT_180cf9f80 != 0)) {
        *(undefined8 *)(puVar20 + -8) = 0x18029b675;
        cVar8 = FUN_180011220((ulonglong)DAT_180cf9f80 + lVar13);
        if (cVar8 != '\0') goto LAB_18029b67d;
      }
    }
    bVar9 = 0;
  }
  local_608 = (uint)bVar9;
  local_604 = (uint)(DAT_18095723c != '\0');
  local_600 = (uint)(*(char *)((longlong)piVar21 + (longlong)(unaff_R12 + 0x3c0f0)) != '\0');
  local_5fc = (uint)(*(char *)((longlong)piVar21 + (longlong)(unaff_R12 + 0x3c0ef)) != '\0');
  local_5f8 = (uint)(*(char *)((longlong)piVar21 + (longlong)(unaff_R12 + 0x3c0ee)) != '\0');
  local_5f4 = (uint)(*(char *)((longlong)piVar21 + (longlong)(unaff_R12 + 0x3c0ed)) != '\0');
  local_5f0 = (uint)(*(char *)((longlong)piVar21 + (longlong)(unaff_R12 + 0x3c0ec)) != '\0');
  local_5ec = *(undefined4 *)((longlong)piVar21 + (longlong)(unaff_R12 + 0x3c104));
  local_5e8 = *(undefined4 *)((longlong)piVar21 + (longlong)(unaff_R12 + 0x3c100));
  local_5e4 = *(undefined4 *)((longlong)piVar21 + (longlong)(unaff_R12 + 0x3c0fc));
  *(undefined8 *)(puVar20 + -8) = 0x18029b722;
  uVar11 = FUN_180073a70(local_490,&local_590,"triggerbot.enabled");
  *(undefined8 *)(puVar20 + -8) = 0x18029b732;
  local_5b8 = (undefined8 *)FUN_1801c6930(local_4b0,uVar11);
  if (0xf < (ulonglong)local_5b8[3]) {
    local_5b8 = (undefined8 *)*local_5b8;
  }
  local_5e0 = (uint)(*(char *)((longlong)piVar21 + (longlong)(unaff_R12 + 0x3c0d8)) != '\0');
  local_5dc = (uint)(unaff_R12[unaff_R15 + 0x3a7f8] != '\0');
  local_5d8 = (uint)(unaff_R12[unaff_R15 + 0x3a7f7] != '\0');
  local_5d4 = (uint)(unaff_R12[unaff_R15 + 0x3a7f6] != '\0');
  local_5d0 = (uint)(unaff_R12[unaff_R15 + 0x3a7f5] != '\0');
  local_5cc = (uint)(unaff_R12[unaff_R15 + 0x3a7f4] != '\0');
  local_5c8 = *(undefined4 *)(unaff_R12 + unaff_R15 + 0x3a810);
  local_5c4 = *(undefined4 *)(unaff_R12 + unaff_R15 + 0x3a800);
  fVar1 = *(float *)(unaff_R12 + unaff_R15 + 0x3a7fc);
  iVar23 = *(int *)(unaff_R12 + unaff_R15 + 0x3a7dc);
  if (iVar23 == 0) {
    pcVar22 = "assisted";
  }
  else if (iVar23 == 1) {
    pcVar22 = "on attack";
  }
  else if (iVar23 == 2) {
    pcVar22 = "always on";
  }
  else {
    pcVar22 = "?";
  }
  *(undefined8 *)(puVar20 + -8) = 0x18029b81c;
  uVar11 = FUN_180073a70(local_4d0,&local_590,"aimbot.enabled");
  *(undefined8 *)(puVar20 + -8) = 0x18029b82c;
  puVar14 = (undefined8 *)FUN_1801c6930(local_4f0,uVar11);
  if (0xf < (ulonglong)puVar14[3]) {
    puVar14 = (undefined8 *)*puVar14;
  }
  local_5c0 = (uint)((&DAT_180954968)[unaff_R15] != '\0');
  iVar23 = DAT_18094f764;
  if (DAT_18094f764 < 1) {
    iVar23 = 1;
  }
  *(undefined8 *)(puVar20 + -8) = 0x18029b87b;
  puVar15 = (undefined8 *)FUN_1800ef330(local_510,&DAT_18094f764,param_2);
  if (0xf < (ulonglong)puVar15[3]) {
    puVar15 = (undefined8 *)*puVar15;
  }
  local_570 = (char *)0x0;
  uStack_568 = 0;
  *(undefined8 *)(puVar20 + -8) = 0x18029b899;
  local_570 = (char *)FUN_18000fb70(0x20);
  uVar6 = s_legitbot_enabled_1806f3788._12_4_;
  uVar5 = s_legitbot_enabled_1806f3788._8_4_;
  uVar4 = s_legitbot_enabled_1806f3788._4_4_;
  local_560 = 0x10;
  local_558 = 0x1f;
  *(undefined4 *)local_570 = s_legitbot_enabled_1806f3788._0_4_;
  *(undefined4 *)(local_570 + 4) = uVar4;
  *(undefined4 *)(local_570 + 8) = uVar5;
  *(undefined4 *)(local_570 + 0xc) = uVar6;
  local_570[0x10] = '\0';
  *(undefined8 *)(puVar20 + -8) = 0x18029b8c8;
  puVar16 = (undefined8 *)FUN_1801c6930(local_530,&local_570);
  if (0xf < (ulonglong)puVar16[3]) {
    puVar16 = (undefined8 *)*puVar16;
  }
  *(int *)(puVar20 + 0x118) = local_628[6];
  *(uint *)(puVar20 + 0x110) = local_60c;
  *(int *)(puVar20 + 0x108) = iVar7;
  *(uint *)(puVar20 + 0x100) = local_608;
  *(uint *)(puVar20 + 0xf8) = local_604;
  *(uint *)(puVar20 + 0xf0) = local_600;
  *(uint *)(puVar20 + 0xe8) = local_5fc;
  *(uint *)(puVar20 + 0xe0) = local_5f8;
  *(uint *)(puVar20 + 0xd8) = local_5f4;
  *(uint *)(puVar20 + 0xd0) = local_5f0;
  *(undefined4 *)(puVar20 + 200) = local_5ec;
  *(undefined4 *)(puVar20 + 0xc0) = local_5e8;
  *(undefined4 *)(puVar20 + 0xb8) = local_5e4;
  *(undefined8 **)(puVar20 + 0xb0) = &local_470;
  *(undefined8 **)(puVar20 + 0xa8) = local_5b8;
  *(uint *)(puVar20 + 0xa0) = local_5e0;
  *(uint *)(puVar20 + 0x98) = local_5dc;
  *(uint *)(puVar20 + 0x90) = local_5d8;
  *(uint *)(puVar20 + 0x88) = local_5d4;
  *(uint *)(puVar20 + 0x80) = local_5d0;
  *(uint *)(puVar20 + 0x78) = local_5cc;
  *(undefined4 *)(puVar20 + 0x70) = local_5c8;
  *(undefined4 *)(puVar20 + 0x68) = local_5c4;
  *(double *)(puVar20 + 0x60) = (double)fVar1;
  *(char **)(puVar20 + 0x58) = pcVar22;
  *(undefined8 **)(puVar20 + 0x50) = puVar14;
  *(uint *)(puVar20 + 0x48) = local_5c0;
  *(undefined4 *)(puVar20 + 0x40) = local_5bc;
  *(int *)(puVar20 + 0x38) = iVar23;
  *(undefined8 **)(puVar20 + 0x30) = puVar15;
  *(int *)(puVar20 + 0x28) = param_2;
  *(undefined8 **)(puVar20 + 0x20) = puVar16;
  *(undefined8 *)(puVar20 + -8) = 0x18029ba0b;
  snprintf(local_458,0x400,
           "state | legit %d [%s] | group %d \"%s\" of %d (weapon def %d) | aimbot %d [%s] activation %s fov %.0f smoothing %d reaction %dms hitboxes %d%d%d%d%d | trigger %d [%s] hit chance %s legitimacy %d%% min damage %d reaction %dms hitboxes %d%d%d%d%d | rage %d safe mode %d (setting %d) passthrough %d | randomize %d"
           ,DAT_18094f760 != '\0');
  *(undefined8 *)(puVar20 + -8) = 0x18029ba14;
  FUN_18000f890(local_530);
  if (0xf < local_558) {
    uVar19 = local_558 + 1;
    pcVar22 = local_570;
    if (0xfff < uVar19) {
      pcVar22 = *(char **)(local_570 + -8);
      if ((char *)0x1f < local_570 + (-8 - (longlong)pcVar22)) {
        pcVar2 = (code *)swi(0x29);
        (*pcVar2)(5);
        goto LAB_18029bb33;
      }
      uVar19 = local_558 + 0x28;
    }
    *(undefined8 *)(puVar20 + -8) = 0x18029ba50;
    thunk_FUN_1803d64e0(pcVar22,uVar19);
  }
  *(undefined8 *)(puVar20 + -8) = 0x18029ba5d;
  FUN_18000f890(local_510);
  *(undefined8 *)(puVar20 + -8) = 0x18029ba6a;
  FUN_18000f890(local_4f0);
  *(undefined8 *)(puVar20 + -8) = 0x18029ba77;
  FUN_18000f890(local_4d0);
  *(undefined8 *)(puVar20 + -8) = 0x18029ba84;
  FUN_18000f890(local_4b0);
  *(undefined8 *)(puVar20 + -8) = 0x18029ba91;
  FUN_18000f890(local_490);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined8 *)(puVar20 + -8) = 0x18029baad;
  sVar17 = strlen(local_458);
  *(undefined8 *)(puVar20 + -8) = 0x18029babf;
  FUN_1800133a0(param_1,local_458,sVar17);
  uVar19 = CONCAT44(uStack_574,uStack_578);
  if (0xf < uVar19) {
    uVar18 = uVar19 + 1;
    lVar3 = CONCAT44(uStack_58c,local_590);
    lVar13 = lVar3;
    if (0xfff < uVar18) {
      lVar13 = *(longlong *)(lVar3 + -8);
      if (0x1f < (lVar3 - lVar13) - 8U) {
LAB_18029bb33:
        pcVar2 = (code *)swi(0x29);
        (*pcVar2)(5);
        pcVar2 = (code *)swi(3);
        puVar14 = (undefined8 *)(*pcVar2)();
        return puVar14;
      }
      uVar18 = uVar19 + 0x28;
    }
    *(undefined8 *)(puVar20 + -8) = 0x18029baf7;
    thunk_FUN_1803d64e0(lVar13,uVar18);
  }
  *(undefined8 *)(puVar20 + -8) = 0x18029bb09;
  return param_1;
}



/* ===== 18029bb40 FUN_18029bb40 ===== */

bool FUN_18029bb40(longlong param_1,char param_2,int param_3,float param_4)

{
  uint uVar1;
  int iVar2;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float fVar3;
  float local_res10 [2];
  
  uVar1 = DAT_180cfe7e8;
  if (param_2 != '\0') {
    uVar1 = DAT_180cfe7f0;
  }
  if ((uVar1 == 0) || (param_1 == 0)) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_180011200((ulonglong)uVar1 + param_1);
  }
  uVar1 = DAT_180cfe7ec;
  if (param_2 != '\0') {
    uVar1 = DAT_180cfe7f4;
  }
  if ((uVar1 == 0) || (param_1 == 0)) {
    fVar3 = 0.0;
LAB_18029bbcd:
    if (fVar3 < DAT_1808ac34c) goto LAB_18029bc21;
  }
  else {
    FUN_18000f3d0((ulonglong)uVar1 + param_1);
    fVar3 = extraout_XMM0_Da;
    if (0.0 <= extraout_XMM0_Da) goto LAB_18029bbcd;
  }
  local_res10[0] = 0.0;
  FUN_180512fd0(fVar3,local_res10);
  fVar3 = extraout_XMM0_Da_00;
  if (extraout_XMM0_Da_00 < 0.0) {
    fVar3 = extraout_XMM0_Da_00 + DAT_1808ac34c;
    if (DAT_1808ac34c <= fVar3) {
      fVar3 = 0.0;
      iVar2 = (int)local_res10[0] + iVar2;
      goto LAB_18029bc21;
    }
    local_res10[0] = local_res10[0] + DAT_1808acda0;
  }
  iVar2 = (int)local_res10[0] + iVar2;
LAB_18029bc21:
  if (iVar2 == param_3) {
    return fVar3 < param_4;
  }
  return iVar2 < param_3;
}



/* ===== 18029bc60 FUN_18029bc60 ===== */

undefined8 FUN_18029bc60(longlong param_1)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 local_res8 [32];
  
  if (((param_1 != 0) && (DAT_180ca0a0c != 0)) &&
     (uVar6 = (ulonglong)DAT_180ca0a10, DAT_180ca0a10 != 0)) {
    lVar3 = FUN_18000f3a0(param_1 + (ulonglong)DAT_180ca0a0c);
    if (lVar3 != 0) {
      uVar1 = FUN_180011200(lVar3 + uVar6);
      plVar4 = (longlong *)FUN_1803a0940(local_res8,uVar1);
      lVar3 = *plVar4;
      if (lVar3 != 0) {
        lVar5 = FUN_18000f3a0((ulonglong)DAT_1809619a0 + (ulonglong)DAT_1809619c0 + lVar3);
        if ((lVar5 != 0) && (DAT_180cfe7c4 != 0)) {
          iVar2 = FUN_180011200((ulonglong)DAT_180cfe7c4 + lVar5);
          if ((0 < iVar2) && (DAT_180cfe7fc != 0)) {
            iVar2 = FUN_180011200(lVar3 + (ulonglong)DAT_180cfe7fc);
            if (0 < iVar2) {
              return 1;
            }
          }
        }
      }
    }
  }
  return 0;
}



/* ===== 18029bd10 FUN_18029bd10 ===== */

undefined8 FUN_18029bd10(longlong param_1)

{
  char cVar1;
  ushort uVar2;
  undefined8 uVar3;
  float extraout_XMM0_Da;
  
  if ((DAT_180cfe7f8 == 0) || (*(longlong *)(param_1 + 0x10) == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_180011440((ulonglong)DAT_180cfe7f8 + *(longlong *)(param_1 + 0x10));
  }
  if ((uVar2 - 10 < 2) || (uVar2 - 800 < 2)) {
    return 0;
  }
  if (((DAT_180cfe7bc != 0) && (*(longlong *)(param_1 + 0x18) != 0)) &&
     (cVar1 = FUN_180011220((ulonglong)DAT_180cfe7bc + *(longlong *)(param_1 + 0x18)), cVar1 != '\0'
     )) {
    return 1;
  }
  if (((DAT_180cfe7c0 != 0) && (*(longlong *)(param_1 + 0x18) != 0)) &&
     (FUN_18000f3d0(*(longlong *)(param_1 + 0x18) + (ulonglong)DAT_180cfe7c0),
     DAT_1808ac1f4 < extraout_XMM0_Da)) {
    uVar3 = FUN_18029bb40(*(undefined8 *)(param_1 + 0x10),0,*(undefined4 *)(param_1 + 0x4c),
                          *(undefined4 *)(param_1 + 0x50));
    return uVar3;
  }
  return 1;
}



/* ===== 18029bdd0 FUN_18029bdd0 ===== */

undefined8 FUN_18029bdd0(float param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_1 == 0.0) {
    return 0;
  }
  FUN_18029a670();
  if (DAT_180cd031e != '\0') {
    uVar1 = (*DAT_180cfe898)(&DAT_180cfe8b0,0,param_1);
  }
  return uVar1;
}



/* ===== 18029be40 FUN_18029be40 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18029be40(longlong *param_1,longlong param_2)

{
  float fVar1;
  longlong lVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  ulonglong uVar11;
  longlong lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 local_res8;
  undefined1 local_d8 [176];
  
  fVar17 = DAT_1808ac34c;
  if (*(int *)((longlong)param_1 + 0x54) == 0) {
    fVar13 = 0.0;
    *(float *)(param_1 + 9) = DAT_1809f3ea8;
    *(float *)((longlong)param_1 + 0x4c) = DAT_1809f3eac;
    *(float *)(param_1 + 10) = DAT_1809f3eb0;
    *(float *)((longlong)param_1 + 0x3c) = DAT_1809f3ea8;
    *(float *)(param_1 + 8) = DAT_1809f3eac;
    *(float *)((longlong)param_1 + 0x44) = DAT_1809f3eb0;
  }
  else {
    fVar13 = DAT_1809f3ec4 - *(float *)(param_1 + 0xb);
    iVar4 = DAT_1809f3ec0 - *(int *)((longlong)param_1 + 0x54);
    if (fVar13 < 0.0) {
      fVar13 = fVar13 + DAT_1808ac34c;
      if (fVar13 < DAT_1808ac34c) {
        iVar4 = iVar4 + -1;
      }
      else {
        fVar13 = 0.0;
      }
    }
    fVar13 = (float)iVar4 * DAT_1808ac00c + fVar13 * DAT_1808ac00c;
  }
  lVar2 = *param_1;
  *(int *)((longlong)param_1 + 0x54) = DAT_1809f3ec0;
  *(float *)(param_1 + 0xb) = DAT_1809f3ec4;
  iVar4 = *(int *)(lVar2 + 0xc);
  fVar8 = DAT_1809f3eac;
  fVar20 = DAT_1809f3eb0;
  fVar16 = DAT_1809f3ea8;
  if ((iVar4 == -1) || (*(char *)(param_2 + 0x88) == '\0')) goto LAB_18029c380;
  fVar7 = (float)FUN_18029bdd0(0);
  if ((DAT_180cfe7e8 == 0) || (*(longlong *)(param_2 + 0x10) == 0)) {
    iVar5 = 0;
  }
  else {
    iVar5 = FUN_180011200((ulonglong)DAT_180cfe7e8 + *(longlong *)(param_2 + 0x10));
  }
  if ((DAT_180cfe7ec == 0) || (*(longlong *)(param_2 + 0x10) == 0)) {
    uVar11 = 0;
LAB_18029bff2:
    if (fVar17 <= (float)uVar11) goto LAB_18029bff8;
  }
  else {
    uVar11 = FUN_18000f3d0(*(longlong *)(param_2 + 0x10) + (ulonglong)DAT_180cfe7ec);
    if (0.0 <= (float)uVar11) goto LAB_18029bff2;
LAB_18029bff8:
    local_res8 = (ulonglong)local_res8._4_4_ << 0x20;
    uVar11 = FUN_180512fd0(uVar11,&local_res8);
    if ((float)uVar11 < 0.0) {
      fVar8 = (float)uVar11 + fVar17;
      uVar11 = (ulonglong)(uint)fVar8;
      if (fVar17 <= fVar8) {
        uVar11 = 0;
        iVar5 = (int)(float)local_res8 + iVar5;
        goto LAB_18029c04c;
      }
      local_res8._0_4_ = (float)local_res8 + DAT_1808acda0;
    }
    iVar5 = (int)(float)local_res8 + iVar5;
  }
LAB_18029c04c:
  local_res8 = *(undefined8 *)(param_2 + 8);
  pfVar6 = (float *)FUN_1802ad890(local_d8,&local_res8,iVar5,(int)uVar11);
  fVar3 = DAT_1808ac1f4;
  fVar10 = DAT_1808abfd0;
  fVar18 = *(float *)((longlong)param_1 + 0x3c);
  fVar8 = *(float *)(param_1 + 8);
  fVar20 = *(float *)((longlong)param_1 + 0x44);
  fVar16 = fVar18;
  if (0.0 < fVar13) {
    fVar15 = *pfVar6 * DAT_1808ac3ac;
    local_res8 = CONCAT44(local_res8._4_4_,pfVar6[1]);
    fVar1 = pfVar6[2];
    fVar7 = (float)iVar4 / DAT_1808acc3c + fVar7;
    fVar16 = DAT_1808abfbc;
    if (DAT_1808abfbc <= fVar7) {
      fVar16 = fVar7;
    }
    fVar14 = DAT_1808ac540 / fVar16;
    fVar7 = fVar14 * fVar13;
    fVar17 = fVar17 / (fVar7 * _DAT_1808ac1dc * fVar7 + fVar7 + fVar17 +
                      fVar7 * _DAT_1808ac12c * fVar7 * fVar7);
    fVar9 = (float)FUN_18053f0d0((fVar18 - fVar15) * DAT_1808abfd0 + DAT_1808ac1f4);
    fVar7 = DAT_1808acbd0;
    fVar8 = fVar8 - (float)local_res8;
    fVar19 = (fVar18 - fVar15) - fVar9 * DAT_1808acbd0;
    fVar9 = (float)FUN_18053f0d0(fVar8 * fVar10 + fVar3);
    fVar20 = fVar20 - fVar1;
    fVar8 = fVar8 - fVar9 * fVar7;
    fVar10 = (float)FUN_18053f0d0(fVar20 * fVar10 + fVar3);
    fVar16 = fVar16 * _DAT_1808acc28;
    fVar20 = fVar20 - fVar10 * fVar7;
    fVar7 = fVar8 * fVar8 + fVar19 * fVar19 + fVar20 * fVar20;
    if (fVar7 < 0.0) {
      fVar7 = (float)FUN_18051af10(fVar7);
    }
    else {
      fVar7 = SQRT(fVar7);
    }
    if (fVar16 < fVar7) {
      fVar16 = fVar16 / fVar7;
      fVar19 = fVar19 * fVar16;
      fVar8 = fVar8 * fVar16;
      fVar20 = fVar20 * fVar16;
    }
    fVar7 = (fVar8 * fVar14 + *(float *)(param_1 + 0xc)) * fVar13;
    fVar16 = (fVar19 * fVar14 + *(float *)((longlong)param_1 + 0x5c)) * fVar13;
    fVar13 = (fVar20 * fVar14 + *(float *)((longlong)param_1 + 100)) * fVar13;
    *(float *)((longlong)param_1 + 0x5c) =
         (*(float *)((longlong)param_1 + 0x5c) - fVar16 * fVar14) * fVar17;
    *(float *)(param_1 + 0xc) = (*(float *)(param_1 + 0xc) - fVar7 * fVar14) * fVar17;
    *(float *)((longlong)param_1 + 100) =
         (*(float *)((longlong)param_1 + 100) - fVar13 * fVar14) * fVar17;
    fVar16 = (fVar19 + fVar16) * fVar17 + (fVar18 - fVar19);
    fVar8 = (fVar8 + fVar7) * fVar17 + (*(float *)(param_1 + 8) - fVar8);
    fVar20 = (fVar20 + fVar13) * fVar17 + (*(float *)((longlong)param_1 + 0x44) - fVar20);
    if (0.0 < (fVar8 - (float)local_res8) * ((float)local_res8 - *(float *)(param_1 + 8)) +
              (fVar16 - fVar15) * (fVar15 - fVar18) +
              (fVar20 - fVar1) * (fVar1 - *(float *)((longlong)param_1 + 0x44))) {
      *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
      *(undefined4 *)((longlong)param_1 + 100) = 0;
      fVar8 = (float)local_res8;
      fVar20 = fVar1;
      fVar16 = fVar15;
    }
  }
LAB_18029c380:
  pfVar6 = (float *)((longlong)param_1 + 0x3c);
  *(float *)(param_1 + 8) = fVar8;
  fVar17 = *(float *)(param_1 + 9);
  *(float *)((longlong)param_1 + 0x44) = fVar20;
  fVar10 = *(float *)(param_1 + 8) - *(float *)((longlong)param_1 + 0x4c);
  fVar13 = *(float *)(param_1 + 10);
  lVar12 = CONCAT44((int)((ulonglong)*(undefined8 *)pfVar6 >> 0x20),fVar16);
  *(longlong *)pfVar6 = lVar12;
  param_1[9] = lVar12;
  fVar8 = DAT_1808acb08;
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)((longlong)param_1 + 0x44);
  fVar7 = (float)*(int *)(lVar2 + 4) / fVar8;
  fVar8 = (float)*(int *)(lVar2 + 8) / fVar8;
  fVar18 = (*(float *)((longlong)param_1 + 0x44) - fVar13) * 0.0;
  *(float *)((longlong)param_1 + 0xc) = fVar7 * fVar16;
  *(float *)(param_1 + 2) = fVar8 * *(float *)(param_1 + 8);
  *(float *)((longlong)param_1 + 0x14) = *(float *)((longlong)param_1 + 0x44) * 0.0;
  *(float *)((longlong)param_1 + 0x24) = (fVar16 - fVar17) * fVar7;
  *(float *)(param_1 + 5) = fVar10 * fVar8;
  *(float *)((longlong)param_1 + 0x2c) = fVar18;
  fVar20 = (float)FUN_18029bdd0(0);
  fVar13 = 0.0;
  if (0.0 <= fVar7 - fVar20) {
    fVar13 = fVar7 - fVar20;
  }
  fVar7 = (float)FUN_18029bdd0(0);
  fVar20 = 0.0;
  if (0.0 <= fVar8 - fVar7) {
    fVar20 = fVar8 - fVar7;
  }
  *(float *)(param_1 + 3) = fVar13 * *pfVar6;
  *(float *)((longlong)param_1 + 0x1c) = fVar20 * *(float *)(param_1 + 8);
  *(float *)(param_1 + 4) = *(float *)((longlong)param_1 + 0x44) * 0.0;
  *(float *)(param_1 + 6) = fVar13 * (fVar16 - fVar17);
  *(float *)((longlong)param_1 + 0x34) = fVar20 * fVar10;
  *(float *)(param_1 + 7) = fVar18;
  return;
}



/* ===== 18029c4f0 FUN_18029c4f0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18029c4f0(longlong *param_1,longlong param_2,longlong *param_3,int *param_4,
                  longlong param_5,longlong param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  byte bVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  float *pfVar8;
  longlong *plVar9;
  longlong lVar10;
  int iVar11;
  longlong *plVar12;
  int iVar13;
  undefined4 uVar14;
  longlong lVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined4 uVar25;
  float fVar26;
  float fVar27;
  undefined1 auStack_388 [32];
  undefined4 local_368;
  longlong *local_360;
  float local_348;
  float local_344;
  undefined8 local_340;
  float local_338;
  int *local_330;
  undefined8 local_328;
  float local_320;
  float local_318;
  undefined4 local_314;
  undefined4 local_310;
  uint local_30c;
  longlong *local_308;
  longlong *local_300;
  longlong local_2f8 [2];
  char local_2e8 [4];
  float local_2e4 [7];
  undefined1 local_2c8;
  undefined8 local_2c4;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined1 local_2a8;
  undefined8 local_2a4;
  undefined8 local_298;
  undefined8 local_290;
  undefined1 local_288;
  undefined8 local_284;
  undefined8 local_278;
  undefined8 local_270;
  undefined1 local_268;
  undefined8 local_264;
  undefined8 local_258;
  undefined8 local_250;
  undefined1 local_248;
  undefined8 local_244;
  undefined8 local_238;
  undefined8 local_230;
  undefined1 local_228;
  undefined8 local_224;
  undefined8 local_218;
  undefined8 local_210;
  undefined1 local_208;
  undefined8 local_204;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined1 local_1e8;
  undefined8 local_1e4;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined1 local_1c8;
  undefined8 local_1c4;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined1 local_1a8;
  undefined8 local_1a4;
  undefined8 local_198;
  undefined8 local_190;
  undefined1 local_188;
  undefined8 local_184;
  undefined8 local_178;
  undefined8 local_170;
  undefined1 local_168;
  undefined8 local_164;
  undefined8 local_158;
  undefined8 local_150;
  undefined1 local_148;
  undefined8 local_144;
  undefined8 local_138;
  undefined8 local_130;
  undefined1 local_128;
  undefined8 local_124;
  undefined8 local_118;
  undefined8 local_110;
  undefined1 local_108;
  undefined8 local_104;
  ulonglong local_f8;
  
  local_f8 = DAT_180919500 ^ (ulonglong)auStack_388;
  if (*(char *)((longlong)param_3 + 0x19) == '\0') {
    return;
  }
  local_330 = param_4;
  local_308 = param_3;
  local_300 = param_1;
  local_344 = (float)FUN_18029ad80((float *)(param_5 + 0x40),param_3 + 1,
                                   DAT_1809f3de0 + *(float *)(param_5 + 0x28),
                                   DAT_1809f3de4 + *(float *)(param_5 + 0x2c));
  fVar19 = DAT_1808abf80;
  if (*(float *)(param_6 + 0x24) <= local_344 && local_344 != *(float *)(param_6 + 0x24)) {
    return;
  }
  if (param_1 == &DAT_1809f3d20) {
    DAT_1809f3c0c = DAT_1809f3c0c + 1;
  }
  uVar25 = 0;
  if (((DAT_1809f3cc0 == 0.0) && (DAT_1809f3cc4 == 0.0)) && (DAT_1809f3cc8 == 0.0)) {
    fVar27 = DAT_1808ac34c;
  }
  else {
    fVar27 = *(float *)(param_3 + 1) - *(float *)(param_5 + 0x40);
    fVar24 = *(float *)((longlong)param_3 + 0xc) - *(float *)(param_5 + 0x44);
    fVar26 = *(float *)(param_3 + 2) - *(float *)(param_5 + 0x48);
    local_338 = fVar24 * fVar24 + fVar27 * fVar27 + fVar26 * fVar26;
    if (local_338 < 0.0) {
      local_338 = (float)FUN_18051af10();
    }
    else {
      local_338 = SQRT(local_338);
    }
    if (local_338 <= 0.0) {
      fVar27 = 0.0;
      fVar24 = 0.0;
      local_338 = 0.0;
    }
    else {
      fVar27 = fVar27 / local_338;
      fVar24 = fVar24 / local_338;
      local_338 = fVar26 / local_338;
    }
    local_340 = (longlong *)CONCAT44(fVar24,fVar27);
    pfVar8 = (float *)FUN_18029ac20(&local_328);
    fVar18 = DAT_1808ac1f4;
    fVar22 = DAT_1808abfd0;
    fVar27 = *pfVar8;
    fVar24 = pfVar8[1];
    fVar16 = (float)FUN_18053f0d0(fVar27 * DAT_1808abfd0 + DAT_1808ac1f4);
    fVar23 = DAT_1808acbd0;
    fVar16 = fVar16 * DAT_1808acbd0;
    fVar26 = *(float *)(param_5 + 0x28);
    fVar17 = (float)FUN_18053f0d0(fVar24 * fVar22 + fVar18);
    fVar21 = *(float *)(param_5 + 0x2c);
    FUN_18053f0d0(((fVar27 - fVar16) - fVar26) * fVar22 + fVar18);
    FUN_18053f0d0(((fVar24 - fVar17 * fVar23) - fVar21) * fVar22 + fVar18);
    fVar27 = (float)FUN_180517200();
    fVar24 = (float)FUN_180517200();
    fVar24 = fVar24 * fVar27;
    fVar26 = (float)FUN_180517790();
    fVar26 = fVar26 * fVar27;
    uVar6 = FUN_180517790();
    fVar21 = (float)(uVar6 ^ DAT_1808adec0);
    fVar27 = fVar26 * fVar26 + fVar24 * fVar24 + fVar21 * fVar21;
    if (fVar27 < 0.0) {
      fVar27 = (float)FUN_18051af10();
    }
    else {
      fVar27 = SQRT(fVar27);
    }
    if (fVar27 <= 0.0) {
      fVar24 = 0.0;
      fVar26 = 0.0;
      fVar21 = 0.0;
    }
    else {
      fVar24 = fVar24 / fVar27;
      fVar26 = fVar26 / fVar27;
      fVar21 = fVar21 / fVar27;
    }
    fVar27 = (float)FUN_180517200();
    fVar22 = (float)FUN_180517200();
    fVar22 = fVar22 * fVar27;
    fVar18 = (float)FUN_180517790();
    fVar18 = fVar18 * fVar27;
    uVar6 = FUN_180517790();
    fVar23 = (float)(uVar6 ^ DAT_1808adec0);
    fVar27 = fVar18 * fVar18 + fVar22 * fVar22 + fVar23 * fVar23;
    if (fVar27 < 0.0) {
      fVar27 = (float)FUN_18051af10();
    }
    else {
      fVar27 = SQRT(fVar27);
    }
    if (fVar27 <= 0.0) {
      fVar22 = 0.0;
      fVar18 = 0.0;
      fVar23 = 0.0;
    }
    else {
      fVar22 = fVar22 / fVar27;
      fVar18 = fVar18 / fVar27;
      fVar23 = fVar23 / fVar27;
    }
    fVar27 = fVar18 * fVar26 + fVar22 * fVar24 + fVar23 * fVar21;
    if (fVar27 <= DAT_1808ac34c) {
      if (fVar27 <= fVar19) {
        fVar27 = fVar19;
      }
    }
    else {
      fVar27 = DAT_1808ac34c;
    }
  }
  fVar26 = DAT_1808ac34c;
  fVar24 = DAT_1808ac1f4;
  lVar15 = *param_1;
  fVar27 = local_344 / fVar27;
  local_344 = fVar27;
  if (lVar15 != 0) {
    if (*(float *)((longlong)param_3 + 0x14) <= *(float *)(param_1 + 2)) {
      if (*(float *)((longlong)param_3 + 0x14) < *(float *)(param_1 + 2)) {
        return;
      }
      if (*(float *)((longlong)param_1 + 0xc) - fVar19 <= fVar27) {
        if (fVar19 < (float)((uint)(*(float *)((longlong)param_1 + 0xc) - fVar27) & _DAT_1808ade90))
        {
          return;
        }
        FUN_1802a6b30();
        iVar11 = -1;
        if (((DAT_180cfeac8 == '\0') || (DAT_180cfeae8 == 0)) ||
           (uVar6 = FUN_180011200(lVar15 + (ulonglong)DAT_180cfeae8), uVar6 == 0xffffffff)) {
          iVar13 = -1;
        }
        else {
          plVar9 = (longlong *)FUN_1803a0940(&local_340);
          iVar13 = (uVar6 & 0x7fff) - 1;
          if (*plVar9 == 0) {
            iVar13 = -1;
          }
        }
        FUN_1802a6b30();
        if (((param_2 != 0) && (DAT_180cfeac8 != '\0')) &&
           ((DAT_180cfeae8 != 0 &&
            (uVar6 = FUN_180011200(param_2 + (ulonglong)DAT_180cfeae8), uVar6 != 0xffffffff)))) {
          plVar9 = (longlong *)FUN_1803a0940(&local_340);
          iVar11 = (uVar6 & 0x7fff) - 1;
          if (*plVar9 == 0) {
            iVar11 = -1;
          }
        }
        if (iVar13 <= iVar11) {
          return;
        }
      }
    }
  }
  if (*(int *)(param_6 + 0x40) == 1) goto LAB_18029d1d5;
  fVar19 = *(float *)(param_3 + 1) - *(float *)(param_5 + 0x40);
  fVar22 = *(float *)((longlong)param_3 + 0xc) - *(float *)(param_5 + 0x44);
  fVar21 = *(float *)(param_3 + 2) - *(float *)(param_5 + 0x48);
  fVar19 = fVar22 * fVar22 + fVar19 * fVar19 + fVar21 * fVar21;
  if (fVar19 < 0.0) {
    fVar19 = (float)FUN_18051af10();
  }
  else {
    fVar19 = SQRT(fVar19);
  }
  if ((DAT_180cfe7c8 == 0) || (*(longlong *)(param_5 + 0x18) == 0)) {
    fVar21 = 0.0;
  }
  else {
    fVar21 = (float)FUN_18000f3d0((ulonglong)DAT_180cfe7c8 + *(longlong *)(param_5 + 0x18));
  }
  if (fVar21 < fVar19) {
    return;
  }
  if (*(char *)((longlong)param_3 + 0x1c) == '\0') {
    if (*(char *)(param_6 + 8) == '\0') {
      uVar14 = 0;
    }
    else {
      uVar14 = *(undefined4 *)(param_6 + 0x10);
    }
    uVar1 = *(undefined8 *)(param_5 + 0x40);
    uVar2 = param_3[1];
    local_328 = CONCAT44((float)((ulonglong)uVar2 >> 0x20) - (float)((ulonglong)uVar1 >> 0x20),
                         (float)uVar2 - (float)uVar1);
    local_2f8[0] = 0;
    local_2f8[1] = 0;
    local_2e8[0] = '\0';
    local_2e4[0] = 0.0;
    local_2e4[1] = 0.0;
    local_2e4[3] = 0.0;
    local_2e4[4] = 0.0;
    local_2e4[5] = 0.0;
    local_2e4[6] = 0.0;
    local_2c8 = 0;
    local_2c4 = 0;
    local_2b8 = 0;
    local_2b0 = 0;
    local_2a8 = 0;
    local_2a4 = 0;
    local_298 = 0;
    local_290 = 0;
    local_288 = 0;
    local_284 = 0;
    local_278 = 0;
    local_270 = 0;
    local_268 = 0;
    local_264 = 0;
    local_258 = 0;
    local_250 = 0;
    local_248 = 0;
    local_244 = 0;
    local_238 = 0;
    local_230 = 0;
    local_228 = 0;
    local_224 = 0;
    local_218 = 0;
    local_210 = 0;
    local_208 = 0;
    local_204 = 0;
    local_1f8 = 0;
    local_1f0 = 0;
    local_1e8 = 0;
    local_1e4 = 0;
    local_1d8 = 0;
    local_1d0 = 0;
    local_1c8 = 0;
    local_1c4 = 0;
    local_1b8 = 0;
    local_1b0 = 0;
    local_1a8 = 0;
    local_1a4 = 0;
    local_198 = 0;
    local_190 = 0;
    local_188 = 0;
    local_184 = 0;
    local_178 = 0;
    local_170 = 0;
    local_168 = 0;
    local_164 = 0;
    local_158 = 0;
    local_150 = 0;
    local_148 = 0;
    local_144 = 0;
    local_138 = 0;
    local_130 = 0;
    local_128 = 0;
    local_124 = 0;
    local_118 = 0;
    local_110 = 0;
    local_108 = 0;
    local_104 = 0;
    local_320 = *(float *)(param_3 + 2) - *(float *)(param_5 + 0x48);
    if ((DAT_180cfe7cc == 0) || (*(longlong *)(param_5 + 0x18) == 0)) {
      iVar11 = 0;
    }
    else {
      iVar11 = FUN_180011200((ulonglong)DAT_180cfe7cc + *(longlong *)(param_5 + 0x18));
    }
    if (DAT_1811161ac == 0) {
      DAT_1811161ac = FUN_18038eaf0("CCSWeaponBaseVData","m_flPenetration");
      DAT_1811161a8 = FUN_18038eaf0("CCSWeaponBaseVData","m_flRangeModifier");
      DAT_1811161b0 = FUN_18038eaf0("C_BaseEntity","m_iTeamNum");
    }
    uVar6 = DAT_1811161b0;
    if (DAT_1811161ac == 0) {
LAB_18029cd2b:
      local_340 = (longlong *)(param_5 + 0x18);
      uVar20 = 0;
    }
    else {
      local_340 = (longlong *)(param_5 + 0x18);
      if (*(longlong *)(param_5 + 0x18) == 0) goto LAB_18029cd2b;
      uVar20 = FUN_18000f3d0((ulonglong)DAT_1811161ac + *(longlong *)(param_5 + 0x18));
    }
    if ((DAT_1811161a8 == 0) || (lVar15 = *(longlong *)(param_5 + 0x18), lVar15 == 0)) {
      local_310 = 0;
    }
    else {
      local_310 = FUN_18000f3d0((ulonglong)DAT_1811161a8 + lVar15);
    }
    lVar15 = *(longlong *)(param_5 + 8);
    if ((uVar6 == 0) || (lVar15 == 0)) {
      bVar4 = 0;
    }
    else {
      bVar4 = FUN_180011220((ulonglong)uVar6 + lVar15);
      lVar15 = *(longlong *)(param_5 + 8);
    }
    local_30c = (uint)bVar4;
    local_360 = local_2f8;
    local_368 = uVar14;
    local_318 = (float)iVar11;
    local_314 = uVar20;
    local_348 = (float)FUN_1802afa00(lVar15,&local_318,param_5 + 0x40,&local_328);
    plVar9 = local_340;
    fVar27 = 0.0;
    fVar19 = 0.0;
    plVar12 = (longlong *)(param_5 + 0x18);
    if (0 < (int)local_348) {
      lVar15 = 0;
      do {
        if ((local_2f8[lVar15 * 4] == param_2) && (local_2e8[lVar15 * 0x20] != '\0')) {
          fVar19 = local_2e4[lVar15 * 8];
          if ((*(int *)(param_5 + 0x20) != 0x1f) && (local_2f8[lVar15 * 4 + 1] != 0)) {
            uVar6 = FUN_180011200(local_2f8[lVar15 * 4 + 1] + 0x38);
            lVar3 = *plVar9;
            fVar19 = local_2e4[lVar15 * 8];
            if ((DAT_180cfe7d4 != 0) && (lVar3 != 0)) {
              FUN_18000f3d0(lVar3 + (ulonglong)DAT_180cfe7d4);
            }
            fVar21 = (float)FUN_18046e550(param_2,uVar6);
            fVar21 = fVar21 * fVar19;
            fVar19 = fVar21;
            if (((((DAT_180cfe814 != 0) && (param_2 != 0)) &&
                 (iVar11 = FUN_180011200(param_2 + (ulonglong)DAT_180cfe814), 0 < iVar11)) &&
                (uVar6 < 9)) &&
               (((0x13d >> ((byte)uVar6 & 0x1f) & 1U) != 0 ||
                (((uVar6 == 1 && (DAT_180cfe818 != 0)) &&
                 ((lVar10 = FUN_18000f3a0(param_2 + (ulonglong)DAT_180cfe818), lVar10 != 0 &&
                  ((DAT_180cfe81c != 0 &&
                   (cVar5 = FUN_180011220((ulonglong)DAT_180cfe81c + lVar10), cVar5 == '\x01')))))))
                ))) {
              if ((DAT_180cfe7d0 == 0) || (lVar3 == 0)) {
                fVar19 = 0.0;
              }
              else {
                fVar19 = (float)FUN_18000f3d0(lVar3 + (ulonglong)DAT_180cfe7d0);
              }
              fVar22 = (float)iVar11;
              fVar19 = fVar19 * fVar24 * fVar21;
              if (fVar22 < (fVar21 - fVar19) * fVar24) {
                fVar19 = fVar21 - (fVar22 + fVar22);
              }
            }
          }
          fVar27 = fVar27 + fVar19;
        }
        lVar15 = lVar15 + 1;
        local_348 = (float)((int)local_348 - 1);
      } while (local_348 != 0.0);
      local_348 = 0.0;
      plVar12 = local_340;
      param_3 = local_308;
      param_1 = local_300;
    }
    if (((DAT_180cfe7d8 != 0) && (*plVar12 != 0)) &&
       (iVar11 = FUN_180011200((ulonglong)DAT_180cfe7d8 + *plVar12), 1 < iVar11)) {
      if ((DAT_180cfe7d4 != 0) && (*plVar12 != 0)) {
        FUN_18000f3d0((ulonglong)DAT_180cfe7d4 + *plVar12);
      }
      FUN_18046ce00();
      if (DAT_180c8af20 == 0) {
        if (DAT_180c8af28 == '\0') {
          DAT_180c8af20 = FUN_180264b70(PTR_s_mp_damage_headshot_only_180c8af18);
          DAT_180c8af28 = DAT_180c8af20 == 0;
          if (DAT_180c8af20 != 0) goto LAB_18029cfbd;
        }
LAB_18029cfd2:
        if ((DAT_181112398 == 0) ||
           (cVar5 = FUN_180011220(param_2 + (ulonglong)DAT_181112398), cVar5 != '\x03')) {
          lVar15 = DAT_180c8af50;
          if (DAT_180c8af50 == 0) {
            if (DAT_180c8af58 == '\0') {
              lVar15 = FUN_180264b70(PTR_s_mp_damage_scale_t_body_180c8af48);
              DAT_180c8af58 = lVar15 == 0;
              DAT_180c8af50 = lVar15;
              goto LAB_18029d051;
            }
            goto LAB_18029d081;
          }
LAB_18029d056:
          local_348 = (float)FUN_180264d70(lVar15);
          if (((uint)local_348 & 0x7f800000) != 0x7f800000) {
            fVar26 = local_348;
          }
        }
        else {
          lVar15 = DAT_180c8af38;
          if (DAT_180c8af38 != 0) goto LAB_18029d056;
          if (DAT_180c8af40 == '\0') {
            lVar15 = FUN_180264b70(PTR_s_mp_damage_scale_ct_body_180c8af30);
            DAT_180c8af40 = lVar15 == 0;
            DAT_180c8af38 = lVar15;
LAB_18029d051:
            if (lVar15 != 0) goto LAB_18029d056;
          }
        }
LAB_18029d081:
        fVar26 = fVar26 * DAT_1808ac27c;
      }
      else {
LAB_18029cfbd:
        cVar5 = FUN_180264d70(DAT_180c8af20);
        if (cVar5 == '\0') goto LAB_18029cfd2;
        fVar26 = 0.0;
      }
      fVar27 = fVar27 + fVar26 * fVar19 * (float)iVar11 * fVar24;
    }
    if (*local_330 < 0) {
      iVar11 = *(int *)(param_6 + 0x40);
      if (iVar11 == 0x83) {
        iVar11 = 0;
        if (*(longlong *)(param_5 + 0x80) != 0) {
          iVar11 = *(int *)(*(longlong *)(param_5 + 0x80) + 0x28);
        }
      }
      if ((DAT_180cfe810 == 0) || (param_2 == 0)) {
        iVar13 = 0;
      }
      else {
        iVar13 = FUN_180011200(param_2 + (ulonglong)DAT_180cfe810);
      }
      if (iVar11 < 1) {
        lVar15 = *plVar12;
        if ((DAT_180cfe7c0 == 0) || (lVar15 == 0)) {
          fVar19 = 0.0;
        }
        else {
          fVar19 = (float)FUN_18000f3d0(lVar15 + (ulonglong)DAT_180cfe7c0);
          lVar15 = *plVar12;
        }
        iVar11 = 9;
        if (9 < iVar13) {
          iVar11 = iVar13;
        }
        iVar13 = (int)((float)(iVar11 + 1) * fVar19 * DAT_1808ac3d4);
        if (*(int *)(param_5 + 0x20) == 0x28) {
          iVar11 = 0x46;
LAB_18029d173:
          if (iVar11 < iVar13) {
            iVar13 = iVar11;
          }
        }
        else if (*(int *)(param_5 + 0x20) == 9) {
          iVar11 = 0x69;
          goto LAB_18029d173;
        }
        if ((DAT_180cfe7cc == 0) || (lVar15 == 0)) {
          iVar7 = 0;
        }
        else {
          iVar7 = FUN_180011200(lVar15 + (ulonglong)DAT_180cfe7cc);
        }
        iVar11 = iVar7 + -5;
        if ((iVar13 <= iVar7 + -5) && (iVar11 = 1, 1 < iVar13)) {
          iVar11 = iVar13;
        }
      }
      else if (iVar11 < 0x65) {
        if (iVar13 < iVar11) {
          iVar11 = iVar13;
        }
      }
      else {
        iVar11 = iVar11 + -100 + iVar13;
      }
      *local_330 = iVar11;
    }
    *(undefined1 *)((longlong)param_3 + 0x1c) = 1;
    *(bool *)((longlong)param_3 + 0x1d) = (float)*local_330 <= fVar27;
    fVar27 = local_344;
  }
  if (*(char *)((longlong)param_3 + 0x1d) == '\0') {
    return;
  }
LAB_18029d1d5:
  *param_1 = param_2;
  lVar15 = param_3[4];
  *(float *)((longlong)param_1 + 0xc) = fVar27;
  *(int *)(param_1 + 1) = (int)lVar15;
  *(longlong *)((longlong)param_1 + 0x14) = param_3[1];
  *(int *)((longlong)param_1 + 0x1c) = (int)param_3[2];
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)((longlong)param_3 + 0x14);
  if (*param_3 != 0) {
    uVar25 = FUN_18000f3d0(*param_3 + 0x30);
  }
  *(undefined4 *)(param_1 + 4) = uVar25;
  return;
}



/* ===== 18029d2a0 FUN_18029d2a0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18029d2a0(void)

{
  DAT_1809f3d0c = 0xffffffff;
  _DAT_1809f3d10 = 0;
  DAT_1809f3d00 = 0;
  FUN_18029a670();
  if (DAT_180cd031e == '\0') {
    _DAT_1809f3d18 = DAT_1808acd84;
    return;
  }
  _DAT_1809f3d18 = (*DAT_180cfe898)(&DAT_180cfe8b0,DAT_1808acd84,DAT_1808ac1f4);
  return;
}



/* ===== 18029d320 FUN_18029d320 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18029d320(double *param_1)

{
  double dVar1;
  double dVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  char *pcVar13;
  longlong lVar14;
  float *pfVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong lVar18;
  bool bVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined8 uVar24;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar27;
  double dVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float local_res8 [2];
  float local_res10 [2];
  longlong *local_res18;
  float local_res20;
  double *in_stack_fffffffffffffeb8;
  float local_138;
  float local_128;
  float local_124;
  float local_120;
  longlong local_118;
  longlong local_110;
  undefined4 local_f4;
  
  fVar30 = DAT_1808acb08;
  dVar2 = param_1[0xf];
  dVar1 = *param_1;
  fVar36 = 0.0;
  fVar20 = (float)FUN_18029bdd0();
  fVar21 = (float)FUN_18051afb0();
  fVar23 = DAT_1808ac34c;
  _DAT_1809f3cec = DAT_1808ac34c;
  if (fVar20 + fVar21 <= DAT_1808ac34c) {
    _DAT_1809f3cec = fVar20 + fVar21;
  }
  _DAT_1809f3cec = _DAT_1809f3cec * DAT_1808ac864;
  iVar7 = *(int *)((longlong)dVar2 + 0x30);
  fVar20 = (float)FUN_18029bdd0();
  fVar20 = fVar20 + (float)iVar7 / fVar30;
  DAT_1809f3cf0 = fVar23;
  if (fVar20 <= fVar23) {
    DAT_1809f3cf0 = fVar20;
  }
  iVar7 = *(int *)((longlong)dVar2 + 0x34);
  fVar22 = (float)FUN_18029bdd0();
  fVar21 = DAT_1808ac1f4;
  fVar20 = DAT_1808abfd0;
  fVar22 = fVar22 + (float)iVar7 / fVar30;
  fVar37 = fVar23;
  if (fVar22 <= fVar23) {
    fVar37 = fVar22;
  }
  DAT_1809f3cf4 = fVar37 * DAT_1808ac9e4 + 0.0;
  DAT_1809f3cf8 = (float)(dVar1 - _DAT_1809f3cd8) * DAT_1808acab0;
  if (DAT_1809f3cf8 <= DAT_1808ac750) {
    if (DAT_1809f3cf8 <= DAT_1808ac000) {
      DAT_1809f3cf8 = DAT_1808ac000;
    }
  }
  else {
    DAT_1809f3cf8 = 5.0;
  }
  fVar29 = *(float *)((longlong)param_1 + 0x34) - *(float *)(param_1 + 5);
  _DAT_1809f3cd8 = dVar1;
  fVar22 = (float)FUN_18053f0d0(fVar29 * DAT_1808abfd0 + DAT_1808ac1f4);
  fVar37 = DAT_1808acbd0;
  fVar29 = fVar29 - fVar22 * DAT_1808acbd0;
  fVar31 = *(float *)(param_1 + 7) - *(float *)((longlong)param_1 + 0x2c);
  fVar22 = (float)FUN_18053f0d0(fVar31 * fVar20 + fVar21);
  fVar31 = fVar31 - fVar22 * fVar37;
  fVar22 = *(float *)((longlong)param_1 + 0x3c) - *(float *)(param_1 + 6);
  fVar21 = (float)FUN_18053f0d0(fVar22 * fVar20 + fVar21);
  fVar22 = fVar22 - fVar21 * fVar37;
  fVar21 = fVar31 * fVar31 + fVar29 * fVar29 + fVar22 * fVar22;
  if (fVar21 < 0.0) {
    fVar21 = (float)FUN_18051af10();
  }
  else {
    fVar21 = SQRT(fVar21);
  }
  if (fVar21 <= DAT_1808abf80) {
    if (DAT_1808ac500 <
        (double)CONCAT44((uint)((ulonglong)(dVar1 - _DAT_1809f3cd0) >> 0x20) & _UNK_1808adea4,
                         SUB84(dVar1 - _DAT_1809f3cd0,0) & _DAT_1808adea0)) {
      _DAT_1809f3cc0 = 0;
      DAT_1809f3cc8 = 1.1920929e-07;
    }
  }
  else {
    _DAT_1809f3cc0 = CONCAT44(fVar31,fVar29);
    DAT_1809f3cc8 = fVar22;
    _DAT_1809f3cd0 = dVar1;
  }
  DAT_1809f3e98 = 0;
  DAT_1809f3dc8 = (int *)((longlong)dVar2 + 0x48);
  if (*(char *)((longlong)dVar2 + 0x44) == '\0') {
    DAT_1809f3dc8 = &DAT_180957220;
  }
  DAT_1809f3dd0 = DAT_18095721c;
  if (*(char *)((longlong)dVar2 + 0x44) != '\0') {
    DAT_1809f3dd0 = '\x01';
  }
  if ((DAT_180cfe804 == 0) || (param_1[1] == 0.0)) {
    iVar7 = 0;
  }
  else {
    iVar7 = FUN_180011200((longlong)param_1[1] + (ulonglong)DAT_180cfe804);
  }
  if ((DAT_1809f3dd0 == '\0') || ((*(char *)(param_1 + 0x11) != '\0' && (iVar7 < *DAT_1809f3dc8))))
  {
    _DAT_1809f3e24 = 0;
    _DAT_1809f3e2c = 0;
    _DAT_1809f3e10 = 0;
    _DAT_1809f3e18 = 0;
    _DAT_1809f3e0c = 0;
    _DAT_1809f3e04 = 0;
    _DAT_1809f3df8 = 0;
    _DAT_1809f3e00 = 0;
    _DAT_1809f3dec = 0;
    _DAT_1809f3df0 = 0;
    _DAT_1809f3df4 = 0;
    DAT_1809f3de0 = 0.0;
    DAT_1809f3de4 = 0.0;
    _DAT_1809f3de8 = 0.0;
    DAT_1809f3dd4 = 0;
    DAT_1809f3dd8 = 0;
    _DAT_1809f3ddc = 0;
    _DAT_1809f3e20 = 0;
  }
  else {
    FUN_18029be40(&DAT_1809f3dc8,param_1);
    DAT_1809f3e98 = 1;
  }
  if (*(char *)((longlong)dVar2 + 10) == '\0') {
    fVar30 = 0.0;
LAB_18029d835:
    if (((DAT_180cfe808 != 0) && (param_1[1] != 0.0)) &&
       (fVar21 = (float)FUN_18000f3d0((longlong)param_1[1] + (ulonglong)DAT_180cfe808), 0.0 < fVar21
       )) {
      fVar22 = (float)FUN_18029bdd0();
      if ((fVar30 - fVar22 <= 0.0) || (fVar30 - fVar22 < fVar21)) {
        PTR_DAT_1809f3be0 = s_flashed_180741010;
        return;
      }
    }
  }
  else {
    fVar30 = (float)*(int *)((longlong)dVar2 + 0x18) / fVar30;
    if (fVar30 < fVar23) goto LAB_18029d835;
  }
  fVar30 = DAT_1808acc3c;
  fVar22 = (float)*(int *)((longlong)dVar2 + 0x3c) / DAT_1808acc3c;
  fVar21 = (float)FUN_18029bdd0();
  DAT_1809f3d00 = fVar21 + fVar22;
  iVar7 = *(int *)((longlong)dVar2 + 0x38);
  fVar21 = (float)FUN_18029bdd0();
  DAT_1809f3cfc = fVar21 + (float)iVar7 / fVar30;
  iVar7 = *(int *)((longlong)dVar2 + 0x60);
  fVar21 = (float)FUN_18029bdd0();
  iVar3 = DAT_1809f3d0c;
  DAT_1809f3d04 = fVar21 + (float)iVar7 / fVar30;
  DAT_1809f3d08 = *(char *)((longlong)dVar2 + 0x2c);
  lVar14 = 0;
  if (DAT_1809f3d0c != -1) {
    if (-1 < DAT_1809f3d0c) {
      FUN_1803a13a0(&local_118);
      for (lVar18 = local_118; lVar18 != local_110; lVar18 = lVar18 + 0x10) {
        lVar14 = *(longlong *)(lVar18 + 8);
        if (lVar14 != 0) {
          FUN_1802a6b30();
          if (((DAT_180cfeac8 == '\0') || (DAT_180cfeae8 == 0)) ||
             (uVar8 = FUN_180011200(lVar14 + (ulonglong)DAT_180cfeae8), uVar8 == 0xffffffff)) {
            iVar7 = -1;
          }
          else {
            plVar10 = (longlong *)FUN_1803a0940(local_res8,uVar8);
            iVar7 = (uVar8 & 0x7fff) - 1;
            if (*plVar10 == 0) {
              iVar7 = -1;
            }
          }
          if (iVar7 + 1 == iVar3) {
            FUN_1800244c0(&local_118);
            plVar10 = DAT_180cfeb00;
            goto joined_r0x00018029da02;
          }
        }
      }
      FUN_1800244c0(&local_118);
    }
    goto LAB_18029d8b9;
  }
LAB_18029d8c1:
  DAT_1809f3d20 = 0;
  _DAT_1809f3d28 = 0xffffffff;
  _DAT_1809f3d2c = 0;
  _DAT_1809f3d30 = _DAT_1808ad2d0;
  _DAT_1809f3d38 = _UNK_1808ad2d8;
  _DAT_1809f3d40 = 0;
  _DAT_1809f3d44 = local_f4;
  DAT_1809f3d48 = 0;
  _DAT_1809f3d50 = 0xffffffff;
  _DAT_1809f3d54 = 0;
  _DAT_1809f3d58 = 0xbf800000;
  _DAT_1809f3d5c = 0;
  _DAT_1809f3d64 = 0;
  _DAT_1809f3d6c = local_f4;
  DAT_1809f3d70 = 0;
  _DAT_1809f3d78 = 0xffffffff;
  _DAT_1809f3d7c = 0;
  _DAT_1809f3d80 = _DAT_1808ad2d0;
  uRam00000001809f3d88 = _UNK_1808ad2d8;
  _DAT_1809f3d90 = 0;
  _DAT_1809f3d94 = local_f4;
  cVar6 = '\0';
  local_res8[0] = (float)((uint)local_res8[0] & 0xffffff00);
  local_res18 = DAT_180cfeb08;
  plVar10 = DAT_180cfeb00;
  if (DAT_180cfeb00 != DAT_180cfeb08) {
    do {
      lVar18 = *plVar10;
      lVar11 = FUN_1802a7c30(lVar18);
      DAT_1809f3c04 = DAT_1809f3c04 + 1;
      if (lVar11 == 0) {
LAB_18029dca3:
        cVar6 = local_res8[0]._0_1_;
      }
      else {
        if (*(char *)(lVar11 + 0x18) == '\0') {
          cVar6 = '\0';
        }
        else {
          DAT_1809f3c08 = DAT_1809f3c08 + 1;
          cVar6 = *(char *)(lVar11 + 0x18);
        }
        if (((*(char *)((longlong)dVar2 + 0x5e) != '\0') && (cVar6 != '\0')) &&
           ((DAT_1809f3d04 == 0.0 ||
            ((dVar28 = dVar1 - *(double *)(lVar11 + 8), dVar28 < 0.0 ||
             ((double)DAT_1809f3d04 <= dVar28)))))) {
          local_res10[0] = -NAN;
          lVar12 = *(longlong *)(lVar11 + 0x28);
          for (lVar16 = *(longlong *)(lVar11 + 0x20); lVar16 != lVar12; lVar16 = lVar16 + 0x28) {
            if (*(char *)(lVar16 + 0x18) != '\0') {
              in_stack_fffffffffffffeb8 = param_1;
              FUN_18029c4f0(&DAT_1809f3d70,lVar18,lVar16,local_res10,param_1,dVar2);
            }
          }
        }
        if (*(char *)(lVar11 + 0x18) == '\0') goto LAB_18029dca3;
        if (((DAT_1809f3cfc == 0.0) || (dVar28 = dVar1 - *(double *)(lVar11 + 8), dVar28 < 0.0)) ||
           ((double)DAT_1809f3cfc <= dVar28)) {
          if (DAT_1809f3d00 != 0.0) {
            local_res10[0] = -NAN;
            lVar12 = *(longlong *)(lVar11 + 0x28);
            for (lVar16 = *(longlong *)(lVar11 + 0x20); lVar16 != lVar12; lVar16 = lVar16 + 0x28) {
              if (*(char *)(lVar16 + 0x18) != '\0') {
                in_stack_fffffffffffffeb8 = param_1;
                FUN_18029c4f0(&DAT_1809f3d48,lVar18,lVar16,local_res10,param_1,dVar2);
              }
            }
          }
          if ((lVar18 != lVar14) && (DAT_1809f3d00 != 0.0)) {
            if ((DAT_180961a50 == 0) || (lVar12 = FUN_18000f3a0(), lVar12 == 0)) {
              fVar30 = 0.0;
            }
            else {
              fVar30 = (float)FUN_18000f3d0((ulonglong)DAT_180961950 + lVar12);
            }
            if (fVar30 - _DAT_1809f3d10 <= DAT_1809f3d00) goto LAB_18029dca3;
          }
          local_res10[0] = -NAN;
          lVar12 = *(longlong *)(lVar11 + 0x28);
          for (lVar11 = *(longlong *)(lVar11 + 0x20); lVar11 != lVar12; lVar11 = lVar11 + 0x28) {
            if (*(char *)(lVar11 + 0x18) != '\0') {
              in_stack_fffffffffffffeb8 = param_1;
              FUN_18029c4f0(&DAT_1809f3d20,lVar18,lVar11,local_res10,param_1,dVar2);
            }
          }
          goto LAB_18029dca3;
        }
        local_res8[0] = (float)CONCAT31(local_res8[0]._1_3_,1);
        cVar6 = '\x01';
      }
      plVar10 = plVar10 + 1;
    } while (plVar10 != local_res18);
  }
  DAT_1809f3ecc = DAT_1809f3ecc + 1;
  if (*(char *)((longlong)dVar2 + 0x5e) != '\0') {
    cVar4 = FUN_18029bd10(param_1);
    iVar7 = DAT_1809f3ec8;
    if (cVar4 != '\0') {
      DAT_1809f3ec8 = DAT_1809f3ecc;
      if (DAT_1809f3d70 == 0) {
        _DAT_1809f3ed0 = 0;
        goto LAB_18029de73;
      }
      if ((DAT_1809f3ecc == iVar7) || (bVar19 = true, DAT_1809f3ecc == iVar7 + 1)) {
        bVar19 = DAT_1809f3ed0 == '\0';
      }
      _DAT_1809f3ed0 = CONCAT11(DAT_1809f3ed1,1);
      if ((((DAT_1809f3f0d == '\0') && (DAT_1809f3f0e == '\0')) && (DAT_1809f3f0f == '\0')) &&
         (DAT_1809f3f10 == '\0')) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (*(char *)((longlong)dVar2 + 0x5f) == '\0') {
        if (bVar5) {
LAB_18029de61:
          DAT_1809f3ed9 = 1;
          goto LAB_18029de7d;
        }
      }
      else {
        if (!bVar19) {
          if (DAT_1809f3ed1 == '\0') {
            if (((DAT_1809f3f11 == '\0') && (DAT_1809f3f12 == '\0')) &&
               ((DAT_1809f3f13 == '\0' && (DAT_1809f3f14 == '\0')))) goto LAB_18029ddf8;
            _DAT_1809f3ed0 = 0x101;
            DAT_1809f3ed9 = 1;
          }
          else {
            if (bVar5) goto LAB_18029de61;
            _DAT_1809f3ed0 = 1;
            DAT_1809f3ed8 = 1;
          }
LAB_18029de73:
          DAT_1809f3ed4 = 0;
          goto LAB_18029de7d;
        }
        _DAT_1809f3ed0 = 1;
        DAT_1809f3ed4 =
             -(uint)(DAT_1809f3f10 != '\0') & 8 | -(uint)(DAT_1809f3f0f != '\0') & 4 |
             -(uint)(DAT_1809f3f0e != '\0') & 2 | (uint)(DAT_1809f3f0d != '\0') |
             DAT_1809f3ed4 & 0xfffffff0;
LAB_18029ddf8:
        if (((DAT_1809f3ed4 & 1) != 0) && (DAT_1809f3f0d == '\0')) {
          DAT_1809f3ed4 = DAT_1809f3ed4 & 0xfffffffe;
        }
        if (((DAT_1809f3ed4 & 2) != 0) && (DAT_1809f3f0e == '\0')) {
          DAT_1809f3ed4 = DAT_1809f3ed4 & 0xfffffffd;
        }
        if (((DAT_1809f3ed4 & 4) != 0) && (DAT_1809f3f0f == '\0')) {
          DAT_1809f3ed4 = DAT_1809f3ed4 & 0xfffffffb;
        }
        if (((DAT_1809f3ed4 & 8) != 0) && (DAT_1809f3f10 == '\0')) {
          DAT_1809f3ed4 = DAT_1809f3ed4 & 0xfffffff7;
        }
      }
      DAT_1809f3ed8 = 1;
    }
  }
LAB_18029de7d:
  if (DAT_1809f3d20 == 0) {
    if (DAT_1809f3c04 == 0) {
      pcVar13 = "no enemies";
    }
    else if (DAT_1809f3c08 == 0) {
      pcVar13 = "none visible";
    }
    else {
      if (cVar6 == '\0') {
        pcVar13 = "outside fov";
        if (DAT_1809f3c0c == 0) goto LAB_18029dedc;
      }
      else if (DAT_1809f3c0c == 0) {
        pcVar13 = "reaction time";
        goto LAB_18029dedc;
      }
      pcVar13 = "min damage / switch delay";
    }
LAB_18029dedc:
    PTR_DAT_1809f3be0 = pcVar13;
    if (DAT_1809f3d00 != 0.0) {
      if ((DAT_180961a50 != 0) && (lVar14 = FUN_18000f3a0(), lVar14 != 0)) {
        fVar36 = (float)FUN_18000f3d0((ulonglong)DAT_180961950 + lVar14);
      }
      if (fVar36 - _DAT_1809f3d10 <= DAT_1809f3d00) {
        return;
      }
    }
    FUN_18029d2a0();
    return;
  }
  if ((*(int *)((longlong)dVar2 + 4) != 1) || (*(char *)(param_1 + 0x11) != '\0')) {
    _DAT_1809f3da0 = dVar1;
  }
  if ((*(char *)((longlong)dVar2 + 0xd) != '\0') && (cVar6 = FUN_18029bd10(param_1), cVar6 == '\0'))
  {
    PTR_DAT_1809f3be0 = s_not_able_to_shoot_1807410c0;
    return;
  }
  if ((DAT_180ca0a18 == 0) || (param_1[1] == 0.0)) {
    uVar8 = 0;
  }
  else {
    uVar8 = FUN_180011200((ulonglong)DAT_180ca0a18 + (longlong)param_1[1]);
  }
  if (*(char *)((longlong)dVar2 + 0xb) == '\0' && (uVar8 & 1) == 0) {
    PTR_DAT_1809f3be0 = s_in_air_180741104;
    return;
  }
  if ((((*(char *)((longlong)dVar2 + 0xc) != '\0') || (*(char *)((longlong)dVar2 + 0x5c) != '\0'))
      && (DAT_180cfe7c4 != 0)) &&
     (((param_1[3] != 0.0 &&
       (iVar7 = FUN_180011200((ulonglong)DAT_180cfe7c4 + (longlong)param_1[3]), 0 < iVar7)) &&
      (cVar6 = FUN_18029bc60(param_1[1]), cVar6 == '\0')))) {
    PTR_DAT_1809f3be0 = s_not_scoped_1807410f8;
    return;
  }
  lVar14 = DAT_1809f3d20;
  PTR_DAT_1809f3be0 = s_target_1806e7218;
  FUN_1802a6b30();
  if (((lVar14 == 0) || (DAT_180cfeac8 == '\0')) ||
     ((DAT_180cfeae8 == 0 ||
      (uVar8 = FUN_180011200(lVar14 + (ulonglong)DAT_180cfeae8), uVar8 == 0xffffffff)))) {
    iVar7 = -1;
  }
  else {
    plVar10 = (longlong *)FUN_1803a0940(local_res8,uVar8);
    iVar7 = (uVar8 & 0x7fff) - 1;
    if (*plVar10 == 0) {
      iVar7 = -1;
    }
  }
  DAT_1809f3c10 = iVar7 + 1;
  DAT_1809f3d0c = DAT_1809f3c10;
  lVar14 = FUN_180266660();
  if ((lVar14 == 0) || (DAT_180cfe820 == 0)) {
    DAT_1809f3d14 = 0.0;
  }
  else {
    DAT_1809f3d14 = (float)FUN_18000f3d0((ulonglong)DAT_180cfe820 + lVar14);
  }
  uVar17 = (ulonglong)DAT_180961950;
  if ((DAT_1809f3d48 == 0) || (DAT_1809f3d48 == DAT_1809f3d20)) {
    if ((DAT_180961a50 == 0) || (lVar14 = FUN_18000f3a0(DAT_180961a50), lVar14 == 0)) {
      _DAT_1809f3d10 = 0.0;
    }
    else {
      _DAT_1809f3d10 = (float)FUN_18000f3d0(lVar14 + uVar17);
    }
  }
  lVar14 = DAT_180961a50;
  fVar30 = DAT_1809f3d34;
  fVar21 = DAT_1809f3d38;
  fVar22 = DAT_1809f3d3c;
  fVar34 = DAT_1809f3d34 - *(float *)(param_1 + 8);
  fVar31 = DAT_1809f3d38 - *(float *)((longlong)param_1 + 0x44);
  fVar29 = DAT_1809f3d3c - *(float *)(param_1 + 9);
  local_128 = fVar31 * fVar31 + fVar34 * fVar34 + fVar29 * fVar29;
  if (local_128 < 0.0) {
    local_128 = (float)FUN_18051af10();
  }
  else {
    local_128 = SQRT(local_128);
  }
  if (local_128 <= 0.0) {
    local_120 = 0.0;
    local_124 = 0.0;
    local_128 = 0.0;
  }
  else {
    local_120 = fVar29 / local_128;
    local_124 = fVar31 / local_128;
    local_128 = fVar34 / local_128;
  }
  pfVar15 = (float *)FUN_18029ac20(&local_118,&local_128);
  fVar29 = *pfVar15;
  fVar31 = pfVar15[1];
  fVar34 = pfVar15[2];
  fVar35 = fVar29 - DAT_1809f3de0;
  fVar20 = (float)FUN_18053f0d0(fVar35 * fVar20 + DAT_1808ac1f4);
  fVar35 = fVar35 - fVar20 * fVar37;
  local_res18 = (longlong *)CONCAT44(local_res18._4_4_,fVar35);
  fVar38 = fVar31 - DAT_1809f3de4;
  fVar20 = (float)FUN_18053f0d0(fVar38 * DAT_1808abfd0 + DAT_1808ac1f4);
  fVar38 = fVar38 - fVar20 * fVar37;
  fVar37 = 0.0 - _DAT_1809f3de8;
  fVar20 = (float)FUN_18053f0d0(fVar37 * DAT_1808abfd0 + DAT_1808ac1f4);
  fVar37 = fVar37 - fVar20 * DAT_1808acbd0;
  DAT_1809f3d98 = '\x01';
  DAT_1809f3da8 = fVar30;
  DAT_1809f3dac = fVar21;
  DAT_1809f3db0 = fVar22;
  _DAT_1809f3db4 = fVar29;
  _DAT_1809f3db8 = fVar31;
  _DAT_1809f3dbc = fVar34;
  if ((lVar14 == 0) || (lVar14 = FUN_18000f3a0(lVar14), lVar14 == 0)) {
    _DAT_1809f3dc0 = 0;
  }
  else {
    _DAT_1809f3dc0 = FUN_18000f3d0(lVar14 + uVar17);
  }
  uVar9 = (undefined4)((ulonglong)in_stack_fffffffffffffeb8 >> 0x20);
  local_138 = DAT_1809f3cf8;
  DAT_1809f3e9c = fVar35;
  DAT_1809f3ea0 = fVar38;
  DAT_1809f3ea4 = fVar37;
  if (0.0 < DAT_1809f3cf8) {
    fVar30 = *(float *)((longlong)param_1 + 0x34);
    fVar20 = *(float *)(param_1 + 7);
    local_res10[0] = *(float *)((longlong)param_1 + 0x3c);
    fVar21 = DAT_1809f3cc0 * DAT_1809f3cc0 + DAT_1809f3cc4 * DAT_1809f3cc4 + 0.0;
    local_res8[0] = fVar30;
    local_res20 = fVar20;
    do {
      iVar7 = *(int *)((longlong)dVar2 + 4);
      fVar22 = fVar23;
      if (iVar7 == 0) {
        if (((DAT_1809f3cc0 == 0.0) && (DAT_1809f3cc4 == 0.0)) && (DAT_1809f3cc8 == 0.0)) {
        }
        else {
          if (fVar21 < 0.0) {
            fVar29 = (float)FUN_18051af10();
            fVar30 = DAT_1809f3cc4;
            fVar22 = DAT_1809f3cc0;
          }
          else {
            fVar29 = SQRT(fVar21);
            fVar30 = DAT_1809f3cc4;
            fVar22 = DAT_1809f3cc0;
          }
          fVar31 = 0.0;
          if (fVar29 <= 0.0) {
            fVar30 = 0.0;
            fVar22 = 0.0;
          }
          else {
            fVar31 = 0.0 / fVar29;
            fVar30 = fVar30 / fVar29;
            fVar22 = fVar22 / fVar29;
          }
          fVar35 = local_res18._0_4_ - local_res8[0];
          fVar29 = (float)FUN_18053f0d0(fVar35 * DAT_1808abfd0 + DAT_1808ac1f4);
          fVar35 = fVar35 - fVar29 * DAT_1808acbd0;
          fVar29 = (float)FUN_18053f0d0((fVar38 - fVar20) * DAT_1808abfd0 + DAT_1808ac1f4);
          fVar29 = (fVar38 - fVar20) - fVar29 * DAT_1808acbd0;
          fVar34 = fVar35 * fVar35 + fVar29 * fVar29 + 0.0;
          if (fVar34 < 0.0) {
            fVar34 = (float)FUN_18051af10();
          }
          else {
            fVar34 = SQRT(fVar34);
          }
          fVar27 = 0.0;
          if (fVar34 <= 0.0) {
            fVar29 = 0.0;
            fVar35 = 0.0;
          }
          else {
            fVar27 = 0.0 / fVar34;
            fVar29 = fVar29 / fVar34;
            fVar35 = fVar35 / fVar34;
          }
          fVar22 = fVar29 * fVar30 + fVar35 * fVar22 + fVar27 * fVar31;
          fVar30 = local_res8[0];
          fVar35 = local_res18._0_4_;
          if (fVar22 <= fVar23) {
            if (fVar22 <= DAT_1808abf80) {
              fVar22 = DAT_1808abf80;
            }
          }
          else {
            fVar22 = fVar23;
          }
        }
      }
      else if (iVar7 == 1) {
        if (*(char *)(param_1 + 0x11) == '\0') goto LAB_18029e4f4;
      }
      else if (iVar7 != 2) {
LAB_18029e4f4:
        fVar22 = 0.0;
      }
      fVar31 = local_res10[0];
      fVar29 = DAT_1809f3cf0;
      if (DAT_1809f3c14 < 0.0) {
        DAT_1809f3c14 = fVar22;
      }
      fVar35 = fVar35 - fVar30;
      if (DAT_1809f3cf0 <= 0.0) {
        uVar9 = 0;
        uVar32 = 0;
        uVar33 = 0;
      }
      else {
        uVar24 = FUN_180519fe0(fVar20 - fVar38,DAT_1808acbd0);
        fVar30 = (float)uVar24;
        uVar9 = (undefined4)((ulonglong)uVar24 >> 0x20);
        uVar32 = (undefined4)extraout_XMM0_Qb;
        uVar33 = (undefined4)((ulonglong)extraout_XMM0_Qb >> 0x20);
        if (fVar20 <= fVar38) {
          if (fVar30 <= DAT_1808ace7c) {
            fVar30 = fVar30 + DAT_1808acbd0;
          }
        }
        else if (DAT_1808acb58 <= fVar30) {
          fVar30 = fVar30 - DAT_1808acbd0;
        }
        fVar35 = fVar30 * fVar29 * _DAT_1809f3d18 + fVar35;
      }
      fVar30 = DAT_1808abfd0;
      auVar25._4_4_ = uVar9;
      auVar25._0_4_ = fVar35;
      auVar25._8_4_ = uVar32;
      auVar25._12_4_ = uVar33;
      auVar26._4_12_ = auVar25._4_12_;
      auVar26._0_4_ = fVar35 * DAT_1808abfd0 + DAT_1808ac1f4;
      fVar29 = (float)FUN_18053f0d0(auVar26._0_8_);
      fVar20 = DAT_1808acbd0;
      fVar35 = fVar35 - fVar29 * DAT_1808acbd0;
      fVar34 = fVar38 - local_res20;
      fVar30 = (float)FUN_18053f0d0(fVar34 * fVar30 + DAT_1808ac1f4);
      fVar34 = fVar34 - fVar30 * fVar20;
      fVar30 = (float)FUN_18053f0d0((fVar37 - fVar31) * DAT_1808abfd0 + DAT_1808ac1f4);
      fVar29 = (fVar37 - fVar31) - fVar30 * fVar20;
      fVar30 = fVar35 * fVar35 + fVar34 * fVar34 + fVar29 * fVar29;
      if (fVar30 < 0.0) {
        fVar30 = (float)FUN_18051af10();
      }
      else {
        fVar30 = SQRT(fVar30);
      }
      uVar9 = (undefined4)((ulonglong)in_stack_fffffffffffffeb8 >> 0x20);
      if (fVar30 <= DAT_1808abfa0) break;
      fVar31 = fVar23;
      if (local_138 <= fVar23) {
        fVar31 = local_138;
      }
      fVar27 = (fVar23 / fVar30) / _DAT_1809f3cec;
      if (fVar27 <= fVar23) {
        if (fVar27 <= 0.0) {
          fVar27 = 0.0;
        }
      }
      else {
        fVar27 = fVar23;
      }
      if (0.0 < DAT_1809f3cf4) {
        fVar30 = fVar30 / DAT_1809f3cf4;
        if (fVar30 <= fVar23) {
          if (fVar30 <= DAT_1808abfbc) {
            fVar30 = DAT_1808abfbc;
          }
          fVar30 = fVar23 - fVar30;
        }
        else {
          fVar30 = 0.0;
        }
        fVar27 = (fVar23 - fVar30 * fVar30 * fVar30) * fVar27;
      }
      fVar30 = fVar27 * fVar35 * fVar31 * fVar22 + local_res8[0];
      fVar20 = (float)FUN_18053f0d0(fVar30 * DAT_1808abfd0 + DAT_1808ac1f4);
      fVar30 = fVar30 - fVar20 * DAT_1808acbd0;
      fVar20 = fVar27 * fVar34 * fVar31 * fVar22 + local_res20;
      local_res8[0] = fVar30;
      fVar34 = (float)FUN_18053f0d0(fVar20 * DAT_1808abfd0 + DAT_1808ac1f4);
      fVar20 = fVar20 - fVar34 * DAT_1808acbd0;
      fVar29 = fVar29 * fVar27 * fVar31 * fVar22 + local_res10[0];
      local_res20 = fVar20;
      fVar22 = (float)FUN_18053f0d0(fVar29 * DAT_1808abfd0 + DAT_1808ac1f4);
      uVar9 = (undefined4)((ulonglong)in_stack_fffffffffffffeb8 >> 0x20);
      DAT_1809f3ea4 = fVar29 - fVar22 * DAT_1808acbd0;
      local_138 = local_138 + DAT_1808acda0;
      fVar35 = local_res18._0_4_;
      DAT_1809f3e9c = fVar30;
      DAT_1809f3ea0 = fVar20;
      local_res10[0] = DAT_1809f3ea4;
    } while (0.0 < local_138);
  }
  if (((DAT_1809f3d08 == '\0') || (DAT_1809f3d20 == 0)) || (DAT_1809f3d98 == '\0'))
  goto LAB_18029e995;
  fVar23 = (float)FUN_180517200();
  fVar30 = (float)FUN_180517200();
  fVar20 = (float)FUN_180517790();
  uVar8 = FUN_180517790();
  fVar21 = (float)(uVar8 ^ DAT_1808adec0);
  if ((DAT_180cfe7c8 != 0) && (param_1[3] != 0.0)) {
    fVar36 = (float)FUN_18000f3d0((ulonglong)DAT_180cfe7c8 + (longlong)param_1[3]);
  }
  local_128 = fVar36 * fVar30 * fVar23 + *(float *)(param_1 + 8);
  local_124 = fVar36 * fVar20 * fVar23 + *(float *)((longlong)param_1 + 0x44);
  local_120 = fVar36 * fVar21 + *(float *)(param_1 + 9);
  if (*(char *)((longlong)dVar2 + 8) == '\0') {
    uVar32 = 0;
  }
  else {
    uVar32 = *(undefined4 *)((longlong)dVar2 + 0x10);
  }
  lVar14 = FUN_1802a7cf0(param_1[1],param_1 + 8,&local_128,DAT_1809f3d20,CONCAT44(uVar9,uVar32));
  if (lVar14 == 0) {
switchD_18029e939_default:
    DAT_1809f3edc = -1;
  }
  else {
    uVar9 = FUN_180011200(lVar14 + 0x38);
    iVar7 = DAT_1809f3edc;
    switch(uVar9) {
    case 1:
    case 8:
      cVar6 = *(char *)((longlong)dVar2 + 0x1c);
      break;
    case 2:
      cVar6 = *(char *)((longlong)dVar2 + 0x1d);
      break;
    case 3:
      cVar6 = *(char *)((longlong)dVar2 + 0x1e);
      break;
    case 4:
    case 5:
      cVar6 = *(char *)((longlong)dVar2 + 0x1f);
      break;
    case 6:
    case 7:
      cVar6 = *(char *)((longlong)dVar2 + 0x20);
      break;
    default:
      goto switchD_18029e939_default;
    }
    if (cVar6 == '\0') goto switchD_18029e939_default;
    DAT_1809f3edc = DAT_1809f3ecc;
    if (DAT_1809f3ecc == iVar7 + 1) goto LAB_18029e995;
  }
  if (DAT_1809f3bb4 == '\0') {
    DAT_1809f3ee0 = 1;
  }
LAB_18029e995:
  if (*(char *)((longlong)dVar2 + 0x5c) != '\0') {
    if ((float)(dVar1 - _DAT_1809f3da0) <= DAT_1809f3ba0) {
      DAT_1809f3ba0 = (float)(dVar1 - _DAT_1809f3da0);
    }
    DAT_1809f3ba4 = DAT_1809f3ba4 | *(byte *)((longlong)dVar2 + 0x5d);
  }
  return;
joined_r0x00018029da02:
  if (plVar10 == DAT_180cfeb08) goto LAB_18029da47;
  if (*plVar10 == lVar14) {
    lVar18 = FUN_180266660();
    if ((lVar18 == 0) || (DAT_180cfe820 == 0)) {
      fVar30 = 0.0;
    }
    else {
      fVar30 = (float)FUN_18000f3d0();
    }
    if (DAT_1809f3d14 == fVar30) goto LAB_18029dac6;
    goto LAB_18029da47;
  }
  plVar10 = plVar10 + 1;
  goto joined_r0x00018029da02;
LAB_18029da47:
  uVar8 = FUN_18038eaf0("C_BaseEntity","m_lifeState");
  if (((uVar8 != 0) && (cVar6 = FUN_180011220((ulonglong)uVar8 + lVar14), cVar6 != '\0')) &&
     (DAT_1809f3d00 != 0.0)) {
    if ((DAT_180961a50 == 0) || (lVar18 = FUN_18000f3a0(), lVar18 == 0)) {
      fVar30 = 0.0;
    }
    else {
      fVar30 = (float)FUN_18000f3d0();
    }
    if (fVar30 - _DAT_1809f3d10 <= DAT_1809f3d00) {
LAB_18029dac6:
      if (lVar14 == 0) goto LAB_18029d8b9;
      goto LAB_18029d8c1;
    }
  }
LAB_18029d8b9:
  FUN_18029d2a0();
  lVar14 = 0;
  goto LAB_18029d8c1;
}



/* ===== 18029ea40 FUN_18029ea40 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18029ea40(longlong param_1)

{
  float fVar1;
  char cVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if ((DAT_1809f3e98 == '\0') || (DAT_1809f3d98 == '\0')) {
    _DAT_1809f3e98 = 0;
    DAT_1809f3e30 = &DAT_180957220;
    if ((DAT_180cfe7bc != 0) &&
       (((*(longlong *)(param_1 + 0x18) != 0 && (cVar2 = FUN_180011220(), cVar2 == '\x01')) &&
        (DAT_18095721c != '\0')))) {
      if (*(char *)(param_1 + 0x88) == '\0') {
        if ((char)DAT_1809f3e30[4] != '\0') {
          fVar7 = (float)FUN_18029bdd0(0);
          fVar6 = DAT_1808acb08;
          fVar7 = (float)DAT_1809f3e30[1] / DAT_1808acb08 - fVar7;
          fVar8 = (float)FUN_18029bdd0(0);
          fVar1 = DAT_1808ac1f4;
          fVar5 = DAT_1808abfd0;
          fVar4 = 0.0;
          if (0.0 <= fVar7) {
            fVar4 = fVar7;
          }
          fVar4 = DAT_1809f3e9c - fVar4 * (DAT_1809f3ea8 - DAT_1809f3eb4);
          fVar8 = (float)DAT_1809f3e30[2] / fVar6 - fVar8;
          fVar6 = 0.0;
          if (0.0 <= fVar8) {
            fVar6 = fVar8;
          }
          fVar8 = DAT_1809f3ea0 - fVar6 * (DAT_1809f3eac - DAT_1809f3eb8);
          fVar9 = DAT_1809f3ea4 - (DAT_1809f3eb0 - DAT_1809f3ebc) * 0.0;
          fVar7 = (float)FUN_18053f0d0(fVar4 * DAT_1808abfd0 + DAT_1808ac1f4);
          fVar6 = DAT_1808acbd0;
          DAT_1809f3e9c = fVar4 - fVar7 * DAT_1808acbd0;
          fVar4 = (float)FUN_18053f0d0(fVar8 * fVar5 + fVar1);
          DAT_1809f3ea0 = fVar8 - fVar4 * fVar6;
          fVar5 = (float)FUN_18053f0d0(fVar9 * fVar5 + fVar1);
          DAT_1809f3ea4 = fVar9 - fVar5 * fVar6;
        }
      }
      else {
        if ((DAT_180cfe804 == 0) || (*(longlong *)(param_1 + 8) == 0)) {
          iVar3 = 0;
        }
        else {
          iVar3 = FUN_180011200(*(longlong *)(param_1 + 8) + (ulonglong)DAT_180cfe804);
        }
        if (*DAT_1809f3e30 <= iVar3) {
          FUN_18029be40(&DAT_1809f3e30,param_1);
          fVar1 = DAT_1808ac1f4;
          fVar5 = DAT_1808abfd0;
          fVar7 = DAT_1809f3e9c - _DAT_1809f3e60;
          fVar8 = DAT_1809f3ea0 - _DAT_1809f3e64;
          fVar9 = DAT_1809f3ea4 - _DAT_1809f3e68;
          fVar4 = (float)FUN_18053f0d0(fVar7 * DAT_1808abfd0 + DAT_1808ac1f4);
          fVar6 = DAT_1808acbd0;
          DAT_1809f3e9c = fVar7 - fVar4 * DAT_1808acbd0;
          fVar4 = (float)FUN_18053f0d0(fVar8 * fVar5 + fVar1);
          DAT_1809f3ea0 = fVar8 - fVar4 * fVar6;
          fVar5 = (float)FUN_18053f0d0(fVar9 * fVar5 + fVar1);
          _DAT_1809f3e98 = CONCAT11(1,DAT_1809f3e98);
          DAT_1809f3ea4 = fVar9 - fVar5 * fVar6;
          return;
        }
      }
    }
  }
  else {
    _DAT_1809f3e98 = 1;
    DAT_1809f3e30 = &DAT_180957220;
  }
  _DAT_1809f3e94 = 0;
  _DAT_1809f3e8c = 0;
  _DAT_1809f3e88 = 0;
  _DAT_1809f3e80 = 0;
  _DAT_1809f3e78 = 0;
  _DAT_1809f3e74 = 0;
  _DAT_1809f3e6c = 0;
  _DAT_1809f3e68 = 0.0;
  _DAT_1809f3e60 = 0;
  _DAT_1809f3e5c = 0;
  _DAT_1809f3e54 = 0;
  _DAT_1809f3e50 = 0;
  _DAT_1809f3e48 = 0;
  _DAT_1809f3e44 = 0;
  _DAT_1809f3e3c = 0;
  return;
}



/* ===== 18029ee30 FUN_18029ee30 ===== */

void FUN_18029ee30(double *param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  bool bVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  double dVar14;
  undefined4 uVar15;
  float local_res10 [2];
  
  if (DAT_180957214 == '\0') {
    return;
  }
  if (((DAT_180cfe7bc != 0) && (param_1[3] != 0.0)) &&
     (cVar2 = FUN_180011220((ulonglong)DAT_180cfe7bc + (longlong)param_1[3]), cVar2 != '\0')) {
    return;
  }
  iVar3 = *(int *)((longlong)param_1 + 0x24);
  if ((1 < iVar3 - 4U) && (iVar3 != 1)) {
    return;
  }
  iVar1 = *(int *)(param_1 + 4);
  lVar5 = 0x8b;
  if (iVar1 != 0x40) {
    lVar5 = 0x88;
  }
  if (*(char *)(lVar5 + (longlong)param_1) == '\0') {
    return;
  }
  iVar6 = 0;
  if (iVar1 == 0x40) {
    iVar6 = 4;
  }
  if ((DAT_180cfe7c0 + iVar6 == 0) || (param_1[3] == 0.0)) {
    fVar8 = 0.0;
  }
  else {
    fVar8 = (float)FUN_18000f3d0((ulonglong)(uint)(DAT_180cfe7c0 + iVar6) + (longlong)param_1[3]);
  }
  iVar6 = DAT_180957218;
  if ((iVar3 == 1) && (DAT_180957218 != 0x4a)) {
    fVar8 = (float)FUN_18029bdd0(0);
    fVar8 = fVar8 + (float)iVar6 / DAT_1808acc3c;
  }
  else {
    fVar8 = fVar8 - DAT_1808ac000;
    fVar9 = (float)FUN_18029bdd0(0);
    if (fVar9 + DAT_1808ac09c <= fVar8) {
      fVar8 = fVar9 + DAT_1808ac09c;
    }
  }
  fVar9 = (float)FUN_18029bdd0(0);
  fVar10 = (float)FUN_18029bdd0(0);
  uVar4 = DAT_180cfe7e8;
  if (iVar1 == 0x40) {
    uVar4 = DAT_180cfe7f0;
  }
  if ((uVar4 == 0) || (param_1[2] == 0.0)) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_180011200((ulonglong)uVar4 + (longlong)param_1[2]);
  }
  uVar4 = DAT_180cfe7ec;
  if (iVar1 == 0x40) {
    uVar4 = DAT_180cfe7f4;
  }
  if ((uVar4 == 0) || (param_1[2] == 0.0)) {
    fVar11 = 0.0;
    uVar15 = 0;
LAB_18029efbd:
    if (fVar11 < DAT_1808ac34c) goto LAB_18029f017;
  }
  else {
    uVar13 = FUN_18000f3d0((ulonglong)uVar4 + (longlong)param_1[2]);
    fVar11 = (float)uVar13;
    uVar15 = (undefined4)((ulonglong)uVar13 >> 0x20);
    if (0.0 <= fVar11) goto LAB_18029efbd;
  }
  local_res10[0] = 0.0;
  fVar11 = (float)FUN_180512fd0(CONCAT44(uVar15,fVar11),local_res10);
  fVar12 = local_res10[0];
  if (fVar11 < 0.0) {
    fVar11 = fVar11 + DAT_1808ac34c;
    if (DAT_1808ac34c <= fVar11) {
      fVar11 = 0.0;
      iVar3 = (int)local_res10[0] + iVar3;
      goto LAB_18029f017;
    }
    fVar12 = local_res10[0] + DAT_1808acda0;
  }
  iVar3 = (int)fVar12 + iVar3;
LAB_18029f017:
  lVar5 = 0x8c;
  if (iVar1 != 0x40) {
    lVar5 = 0x89;
  }
  if (*(char *)(lVar5 + (longlong)param_1) == '\0') {
    if ((float)iVar3 * DAT_1808ac00c + fVar11 * DAT_1808ac00c + fVar10 <=
        (float)*(int *)((longlong)param_1 + 0x4c) * DAT_1808ac00c +
        *(float *)(param_1 + 10) * DAT_1808ac00c) {
      bVar7 = iVar1 == 0x40;
      dVar14 = (double)FUN_1802a0cf0();
      if (((double)(&DAT_1809f3f18)[bVar7] <= dVar14) &&
         (fVar9 + DAT_1808ac000 <= (float)(*param_1 - (double)(&DAT_1809f3f18)[bVar7]))) {
        dVar14 = (double)FUN_1802a0cf0();
        (&DAT_1809f3f18)[bVar7] = dVar14 + (double)fVar8;
        (&DAT_1809f3f28)[bVar7] = 1;
      }
    }
  }
  else {
    (&DAT_1809f3f18)[iVar1 == 0x40] = (double)fVar8 + *param_1;
  }
  return;
}



/* ===== 18029f130 FUN_18029f130 ===== */

void FUN_18029f130(double *param_1)

{
  char cVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  double dVar10;
  float fVar11;
  
  fVar9 = DAT_1809f3ef8;
  if ((((DAT_180cfe7c4 != 0) && (param_1[3] != 0.0)) &&
      (iVar4 = FUN_180011200((ulonglong)DAT_180cfe7c4 + (longlong)param_1[3]), fVar9 = DAT_1809f3ef8
      , 0 < iVar4)) && (DAT_1809f3ba0 != DAT_1808acd08)) {
    fVar11 = 0.0;
    fVar7 = (float)FUN_18029bdd0(0);
    fVar7 = fVar7 + DAT_1808ac094;
    fVar8 = (float)FUN_18029bdd0(0);
    cVar1 = FUN_18029bc60(param_1[1]);
    cVar3 = '\0';
    if ((DAT_1809f3ee8 == 0.0) &&
       (((DAT_180cfe80c == 0 || (param_1[1] == 0.0)) ||
        (cVar2 = FUN_180011220((ulonglong)DAT_180cfe80c + (longlong)param_1[1]), cVar2 == '\0')))) {
      cVar3 = FUN_18029bb40(param_1[2],1,*(undefined4 *)((longlong)param_1 + 0x4c),
                            *(undefined4 *)(param_1 + 10));
    }
    fVar9 = DAT_1809f3ef8;
    if ((DAT_1809f3ba0 < 0.0) || (fVar8 + DAT_1808ac0c0 < DAT_1809f3ba0)) {
      if (DAT_1809f3ef0 != 0.0) {
        if (DAT_1809f3ef0 == param_1[2]) {
          lVar6 = FUN_180266660();
          if ((lVar6 != 0) && (DAT_180cfe820 != 0)) {
            fVar11 = (float)FUN_18000f3d0((ulonglong)DAT_180cfe820 + lVar6);
          }
          if (DAT_1809f3ef8 == fVar11) {
            fVar9 = DAT_1809f3ef8;
            if (cVar1 == '\0') goto LAB_18029f404;
            iVar4 = *(int *)(param_1 + 4);
            if (((iVar4 == 0x28) || (iVar4 == 9)) && (DAT_1809f3f00 == 0.0)) {
              DAT_1809f3f08 = 1;
              DAT_1809f3f00 = (double)fVar7 + *param_1;
            }
            else {
              if (((cVar3 == '\0') || (iVar4 == 9)) || (iVar4 == 0x28)) goto LAB_18029f404;
              dVar10 = (double)FUN_1802a0cf0();
              DAT_1809f3f29 = 1;
              DAT_1809f3f20 = dVar10 + (double)fVar7;
              DAT_1809f3ee8 = (double)fVar7 + *param_1;
              if ((DAT_180cfe7fc == 0) || (param_1[2] == 0.0)) {
                iVar4 = 0;
              }
              else {
                iVar4 = FUN_180011200((ulonglong)DAT_180cfe7fc + (longlong)param_1[2]);
              }
              if ((DAT_180cfe7c4 == 0) || (param_1[3] == 0.0)) {
                iVar5 = 0;
              }
              else {
                iVar5 = FUN_180011200((longlong)param_1[3] + (ulonglong)DAT_180cfe7c4);
              }
              fVar9 = DAT_1809f3ef8;
              if (iVar4 != iVar5) goto LAB_18029f404;
            }
          }
        }
        DAT_1809f3ef0 = 0.0;
        fVar9 = DAT_1809f3ef8;
      }
    }
    else if ((cVar1 == '\0') && (cVar3 != '\0')) {
      dVar10 = (double)FUN_1802a0cf0();
      DAT_1809f3f29 = 1;
      DAT_1809f3f20 = dVar10 + (double)fVar7;
      DAT_1809f3ee8 = (double)fVar7 + *param_1;
      fVar9 = DAT_1809f3ef8;
      if (DAT_1809f3ba4 != '\0') {
        DAT_1809f3ef0 = param_1[2];
        lVar6 = FUN_180266660();
        fVar9 = fVar11;
        if ((lVar6 != 0) && (DAT_180cfe820 != 0)) {
          fVar9 = (float)FUN_18000f3d0((ulonglong)DAT_180cfe820 + lVar6);
        }
      }
    }
  }
LAB_18029f404:
  DAT_1809f3ef8 = fVar9;
  if ((DAT_1809f3ee8 != 0.0) && (DAT_1809f3ee8 < *param_1)) {
    DAT_1809f3ee8 = 0.0;
  }
  if ((DAT_1809f3f00 != 0.0) && (DAT_1809f3f00 < *param_1)) {
    DAT_1809f3f00 = 0.0;
    DAT_1809f3f08 = 1;
  }
  return;
}



/* ===== 18029f470 FUN_18029f470 ===== */

undefined8 FUN_18029f470(longlong param_1,undefined8 param_2,char param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  longlong lVar5;
  char *pcVar6;
  
  if (param_1 != 0) {
    lVar5 = FUN_180265420();
    if (lVar5 != 0) {
      *(uint *)(lVar5 + 0x10) = *(uint *)(lVar5 + 0x10) | 7;
      *(undefined8 *)(lVar5 + 0x18) = param_2;
      *(char *)(lVar5 + 0x20) = param_3;
      *(undefined4 *)(lVar5 + 0x24) = 0;
      piVar3 = *(int **)(param_1 + 0x28);
      if (piVar3 != (int *)0x0) {
        iVar2 = *(int *)(param_1 + 0x20);
        if ((((1 < iVar2) && (iVar2 <= *piVar3)) &&
            (piVar1 = piVar3 + (longlong)iVar2 * 2, piVar3 + 2 != piVar1)) && (piVar1 != piVar1 + 2)
           ) {
          FUN_1804ea090();
        }
      }
      return 1;
    }
    DAT_181115098 = DAT_181115098 + 1;
    if (0x40 < (int)DAT_181115098) {
      uVar4 = DAT_181115098 & 0x8000003f;
      if ((int)uVar4 < 0) {
        uVar4 = (uVar4 - 1 | 0xffffffc0) + 1;
      }
      if (uVar4 != 0) {
        return 0;
      }
    }
    pcVar6 = "release";
    if (param_3 != '\0') {
      pcVar6 = "press";
    }
    FUN_1801ec960("button step dropped: no room for %llx %s at %.3f (steps %d)",param_2,pcVar6,0,
                  *(undefined4 *)(param_1 + 0x20));
  }
  return 0;
}



/* ===== 18029f560 FUN_18029f560 ===== */

undefined8 FUN_18029f560(longlong param_1,longlong param_2,float param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  ulonglong uVar8;
  float *pfVar9;
  float extraout_XMM0_Da;
  float fVar10;
  float fVar11;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  float extraout_XMM0_Da_02;
  float extraout_XMM0_Da_03;
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
  float local_res10 [2];
  float local_res18;
  float local_c8;
  float local_c0;
  float local_bc [41];
  
  fVar19 = *(float *)(param_2 + 0xc);
  fVar21 = *(float *)(param_2 + 0x10);
  fVar12 = fVar19 * fVar19 + fVar21 * fVar21;
  local_res18 = param_3;
  if (fVar12 < 0.0) {
    FUN_18051af10(fVar12);
    fVar12 = extraout_XMM0_Da;
  }
  else {
    fVar12 = SQRT(fVar12);
  }
  fVar18 = DAT_1808ac34c;
  if (fVar12 < DAT_1808ac0c0) {
    return 0;
  }
  if (DAT_180cfe830 == 0) {
    fVar10 = DAT_1808ac34c;
  }
  else if (param_1 == 0) {
    fVar10 = 0.0;
  }
  else {
    fVar10 = (float)FUN_18000f3d0(param_1 + (ulonglong)DAT_180cfe830);
  }
  lVar5 = FUN_180264b70("sv_friction");
  if ((lVar5 == 0) ||
     (local_res10[0] = (float)FUN_180264d70(lVar5), fVar11 = local_res10[0],
     ((uint)local_res10[0] & 0x7f800000) == 0x7f800000)) {
    fVar11 = DAT_1808ac770;
  }
  fVar20 = *(float *)(param_2 + 0x30);
  lVar5 = FUN_180264b70("sv_stopspeed");
  if ((lVar5 == 0) ||
     (local_res10[0] = (float)FUN_180264d70(lVar5), fVar13 = local_res10[0],
     ((uint)local_res10[0] & 0x7f800000) == 0x7f800000)) {
    fVar13 = DAT_1808acae0;
  }
  if (fVar13 <= fVar12) {
    fVar13 = fVar12;
  }
  fVar10 = fVar13 * fVar11 * fVar20 * fVar10 * DAT_1808ac00c;
  if (fVar10 <= fVar12) {
    local_c8 = 0.0;
  }
  else {
    local_c8 = fVar10 - fVar12;
    if (0.0 < local_c8) {
      return 0;
    }
  }
  param_3 = param_3 * DAT_1808ac014;
  fVar11 = 0.0;
  if (0.0 <= fVar12 - fVar10) {
    fVar11 = fVar12 - fVar10;
  }
  fVar21 = (fVar11 / fVar12) * fVar21;
  fVar19 = (fVar11 / fVar12) * fVar19;
  fVar12 = (float)FUN_180517200(param_3);
  fVar10 = (float)FUN_180517790(param_3);
  fVar11 = fVar10 * fVar10 + fVar12 * fVar12 + 0.0;
  if (fVar11 < 0.0) {
    fVar11 = (float)FUN_18051af10();
  }
  else {
    fVar11 = SQRT(fVar11);
  }
  if (fVar11 <= 0.0) {
    fVar20 = 0.0;
    fVar11 = 0.0;
  }
  else {
    fVar20 = fVar12 / fVar11;
    fVar11 = fVar10 / fVar11;
  }
  fVar10 = (float)((uint)fVar10 ^ DAT_1808adec0);
  fVar13 = fVar10 * fVar10 + fVar12 * fVar12 + 0.0;
  if (fVar13 < 0.0) {
    fVar13 = (float)FUN_18051af10(fVar13);
  }
  else {
    fVar13 = SQRT(fVar13);
  }
  if (fVar13 <= 0.0) {
    fVar10 = 0.0;
    fVar12 = 0.0;
  }
  else {
    fVar10 = fVar10 / fVar13;
    fVar12 = fVar12 / fVar13;
  }
  local_res10[0] = (float)FUN_1804633d0(param_1);
  fVar13 = fVar21 * fVar21 + fVar19 * fVar19;
  if (fVar13 + 0.0 < 0.0) {
    fVar15 = (float)FUN_18051af10();
  }
  else {
    fVar15 = SQRT(fVar13 + 0.0);
  }
  fVar17 = DAT_1808acbd0;
  if (fVar15 <= 0.0) {
    fVar14 = 0.0;
    fVar15 = 0.0;
  }
  else {
    fVar14 = fVar19 / fVar15;
    fVar15 = fVar21 / fVar15;
  }
  if ((fVar14 == 0.0) && (fVar15 == 0.0)) {
    fVar15 = 0.0;
  }
  else {
    fVar15 = (float)FUN_180516b00((uint)fVar15 ^ DAT_1808adec0,(uint)fVar14 ^ DAT_1808adec0);
    fVar15 = (fVar15 * DAT_1808acb58) / DAT_1808ac680;
    if (fVar15 < 0.0) {
      fVar15 = fVar15 + fVar17;
    }
  }
  fVar15 = fVar15 - local_res18;
  fVar14 = (float)FUN_18053f0d0(fVar15 * DAT_1808abfd4 + DAT_1808ac1f4);
  fVar14 = (fVar15 - fVar14 * fVar17) + DAT_1808ac96c;
  fVar15 = (float)FUN_18053f0d0(fVar14 * DAT_1808abfd4 + DAT_1808ac1f4);
  fVar14 = fVar14 - fVar15 * fVar17;
  if (fVar14 < 0.0) {
    fVar14 = fVar14 + fVar17;
  }
  fVar14 = fVar14 / DAT_1808aca68;
  fVar16 = (float)(int)fVar14 * DAT_1808aca68;
  fVar15 = (float)FUN_18053f0d0(fVar16 * DAT_1808abfd4 + DAT_1808ac1f4);
  fVar17 = (fVar16 - fVar15 * fVar17) * DAT_1808ac014;
  fVar15 = (float)FUN_180517790(fVar17);
  fVar15 = fVar15 * local_res10[0];
  FUN_180517200(fVar17);
  fVar20 = fVar15 * fVar10 + extraout_XMM0_Da_00 * local_res10[0] * fVar20;
  fVar10 = fVar15 * fVar12 + extraout_XMM0_Da_00 * local_res10[0] * fVar11;
  fVar12 = fVar10 * fVar10 + fVar20 * fVar20;
  if (fVar12 < 0.0) {
    FUN_18051af10(fVar12);
    fVar11 = extraout_XMM0_Da_01;
  }
  else {
    fVar11 = SQRT(fVar12);
  }
  if (fVar11 == 0.0) {
    fVar11 = 0.0;
  }
  else if (local_res10[0] <= fVar11) {
    fVar11 = local_res10[0];
  }
  fVar12 = fVar12 + 0.0;
  local_bc[0] = fVar11;
  if (fVar12 < 0.0) {
    FUN_18051af10(fVar12);
    fVar12 = extraout_XMM0_Da_02;
  }
  else {
    fVar12 = SQRT(fVar12);
  }
  fVar15 = 0.0;
  if (fVar12 <= 0.0) {
    fVar20 = 0.0;
    fVar10 = 0.0;
  }
  else {
    fVar20 = fVar20 / fVar12;
    fVar10 = fVar10 / fVar12;
    fVar15 = 0.0 / fVar12;
  }
  fVar19 = fVar11 - (fVar10 * fVar21 + fVar20 * fVar19 + fVar15 * 0.0);
  if (0.0 < fVar19) {
    lVar5 = (ulonglong)((int)fVar14 & 7) * 0x10;
    uVar1 = *(undefined8 *)(&DAT_180652270 + lVar5);
    uVar2 = *(undefined8 *)(&DAT_180652278 + lVar5);
    lVar5 = FUN_180264b70("sv_accelerate_use_weapon_speed");
    fVar21 = DAT_1808acb90;
    if (((((lVar5 != 0) &&
          (local_res10[0] = (float)FUN_180264d70(lVar5),
          ((uint)local_res10[0] & 0x7f800000) != 0x7f800000)) && (local_res10[0] == fVar18)) &&
        ((param_1 != 0 && (DAT_180ca0a0c != 0)))) &&
       ((uVar8 = (ulonglong)DAT_180ca0a10, DAT_180ca0a10 != 0 &&
        (lVar5 = FUN_18000f3a0(param_1 + (ulonglong)DAT_180ca0a0c), lVar5 != 0)))) {
      uVar3 = FUN_180011200(lVar5 + uVar8);
      plVar6 = (longlong *)FUN_1803a0940(local_res10,uVar3);
      lVar5 = *plVar6;
      if ((lVar5 != 0) &&
         (lVar7 = FUN_18000f3a0((ulonglong)DAT_1809619a0 + (ulonglong)DAT_1809619c0 + lVar5),
         lVar7 != 0)) {
        if ((DAT_180cfe800 == 0) ||
           (uVar4 = FUN_180011200((ulonglong)DAT_180cfe800 + lVar5), 1 < uVar4)) {
          uVar4 = 0;
        }
        uVar4 = DAT_180cfe7dc + uVar4 * 4;
        if (uVar4 == 0) {
          fVar12 = 0.0;
        }
        else {
          fVar12 = (float)FUN_18000f3d0((ulonglong)uVar4 + lVar7);
        }
        fVar12 = fVar12 / fVar21;
        if (fVar12 <= fVar18) {
          fVar18 = fVar12;
        }
      }
    }
    local_c0 = 250.0;
    pfVar9 = &local_c0;
    if (fVar21 <= fVar11) {
      pfVar9 = local_bc;
    }
    lVar5 = FUN_180264b70("sv_accelerate");
    if ((lVar5 == 0) ||
       (local_res10[0] = (float)FUN_180264d70(lVar5), fVar21 = local_res10[0],
       ((uint)local_res10[0] & 0x7f800000) == 0x7f800000)) {
      fVar21 = DAT_1808ac790;
    }
    local_c8 = fVar18 * *pfVar9 * fVar21 * DAT_1808ac00c * *(float *)(param_2 + 0x30) - local_c8;
    fVar21 = 0.0;
    if ((0.0 <= local_c8) && (fVar21 = local_c8, fVar19 <= local_c8)) {
      fVar21 = fVar19;
    }
    if (fVar13 < 0.0) {
      FUN_18051af10(fVar13);
      fVar13 = extraout_XMM0_Da_03;
    }
    else {
      fVar13 = SQRT(fVar13);
    }
    if (fVar13 - fVar21 <= DAT_1808ac0c0) {
      return 0;
    }
    *param_4 = uVar1;
    param_4[1] = uVar2;
    return 1;
  }
  return 0;
}



/* ===== 18029fcc0 FUN_18029fcc0 ===== */

undefined1 FUN_18029fcc0(undefined8 param_1,undefined8 param_2)

{
  (*DAT_180962038)(param_1,0,param_2);
  return 1;
}



/* ===== 18029fce0 FUN_18029fce0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_18029fce0(float *param_1,float *param_2,float *param_3,float *param_4,float param_5,
                     float param_6)

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
  
  fVar3 = DAT_1808ac1f4;
  if (0.0 < param_5) {
    if (0.0 < param_6) {
      fVar9 = *param_2;
      fVar11 = DAT_1808ac540 / param_5;
      fVar7 = fVar9 - *param_3;
      fVar4 = fVar11 * param_6;
      fVar5 = DAT_1808ac34c /
              (fVar4 * _DAT_1808ac1dc * fVar4 + fVar4 + DAT_1808ac34c +
              fVar4 * _DAT_1808ac12c * fVar4 * fVar4);
      fVar1 = (float)FUN_18053f0d0(fVar7 * DAT_1808abfd4 + DAT_1808ac1f4);
      fVar6 = DAT_1808acbd0;
      fVar4 = param_2[1];
      fVar8 = fVar4 - param_3[1];
      fVar7 = fVar7 - fVar1 * DAT_1808acbd0;
      fVar2 = (float)FUN_18053f0d0(fVar8 * DAT_1808abfd4 + fVar3);
      fVar1 = param_2[2];
      fVar10 = fVar1 - param_3[2];
      fVar8 = fVar8 - fVar2 * fVar6;
      fVar3 = (float)FUN_18053f0d0(fVar10 * DAT_1808abfd4 + fVar3);
      param_5 = param_5 * _DAT_1808acc28;
      fVar10 = fVar10 - fVar3 * fVar6;
      fVar3 = fVar8 * fVar8 + fVar7 * fVar7 + fVar10 * fVar10;
      if (fVar3 < 0.0) {
        fVar3 = (float)FUN_18051af10(fVar3);
      }
      else {
        fVar3 = SQRT(fVar3);
      }
      if (param_5 < fVar3) {
        param_5 = param_5 / fVar3;
        fVar7 = fVar7 * param_5;
        fVar8 = fVar8 * param_5;
        fVar10 = fVar10 * param_5;
      }
      fVar6 = (fVar8 * fVar11 + param_4[1]) * param_6;
      fVar3 = (fVar7 * fVar11 + *param_4) * param_6;
      param_6 = (fVar10 * fVar11 + param_4[2]) * param_6;
      *param_4 = (*param_4 - fVar3 * fVar11) * fVar5;
      param_4[1] = (param_4[1] - fVar6 * fVar11) * fVar5;
      param_4[2] = (param_4[2] - param_6 * fVar11) * fVar5;
      fVar3 = (fVar7 + fVar3) * fVar5 + (fVar9 - fVar7);
      fVar9 = (fVar8 + fVar6) * fVar5 + (fVar4 - fVar8);
      fVar4 = (fVar10 + param_6) * fVar5 + (fVar1 - fVar10);
      if ((fVar9 - param_3[1]) * (param_3[1] - param_2[1]) +
          (fVar3 - *param_3) * (*param_3 - *param_2) +
          (fVar4 - param_3[2]) * (param_3[2] - param_2[2]) <= 0.0) {
        *param_1 = fVar3;
        param_1[1] = fVar9;
        param_1[2] = fVar4;
      }
      else {
        param_4[0] = 0.0;
        param_4[1] = 0.0;
        param_4[2] = 0.0;
        fVar3 = param_3[2];
        *(undefined8 *)param_1 = *(undefined8 *)param_3;
        param_1[2] = fVar3;
      }
    }
    else {
      fVar3 = param_2[2];
      *(undefined8 *)param_1 = *(undefined8 *)param_2;
      param_1[2] = fVar3;
    }
  }
  else {
    fVar3 = param_3[2];
    *(undefined8 *)param_1 = *(undefined8 *)param_3;
    param_1[2] = fVar3;
  }
  return param_1;
}



/* ===== 1802a0090 FUN_1802a0090 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802a0090(double *param_1)

{
  float fVar1;
  double dVar2;
  bool bVar3;
  code *pcVar4;
  bool bVar5;
  undefined8 uVar6;
  float fVar7;
  char cVar8;
  undefined1 uVar9;
  int iVar10;
  undefined8 *puVar11;
  longlong lVar12;
  undefined8 *puVar13;
  longlong lVar14;
  float *pfVar15;
  int iVar16;
  ulonglong uVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  float fVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  char *pcVar23;
  int iVar24;
  ulonglong uVar25;
  undefined1 *puVar26;
  float fVar27;
  undefined8 uVar28;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar31 [16];
  float fVar32;
  float fVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  float fVar36;
  float fVar37;
  undefined1 auStack_2c8 [8];
  undefined1 auStack_2c0 [24];
  float local_2a8;
  float local_2a0;
  int local_298;
  int local_288;
  float local_284;
  float local_280;
  float local_27c;
  float local_278;
  float local_274;
  int local_270;
  float local_26c;
  undefined8 local_268;
  float local_260;
  float local_258;
  undefined4 local_254;
  undefined4 local_250;
  undefined4 local_24c;
  undefined8 local_248;
  float local_240;
  longlong local_238;
  float local_230;
  float fStack_22c;
  float fStack_228;
  int iStack_224;
  double local_220;
  undefined8 *local_218;
  undefined8 *puStack_210;
  undefined8 *local_208;
  undefined8 *local_200;
  undefined8 *puStack_1f8;
  undefined8 *local_1f0;
  longlong local_1e8;
  longlong lStack_1e0;
  undefined8 local_1d8;
  double local_1d0;
  longlong local_1c8;
  longlong local_1c0;
  int local_1b8;
  undefined4 local_1b4;
  undefined8 local_1b0;
  undefined4 local_1a8;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined4 local_198;
  undefined4 local_194;
  longlong local_190;
  undefined8 *local_188;
  undefined8 local_180;
  undefined4 local_178;
  undefined8 local_170;
  undefined4 local_168;
  undefined8 local_160;
  undefined4 local_158;
  undefined1 *local_150;
  undefined1 *local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined1 local_120 [16];
  undefined1 local_110 [16];
  undefined1 local_100 [192];
  
  fVar32 = *(float *)(param_1 + 0xb) * *(float *)(param_1 + 0xb) +
           *(float *)((longlong)param_1 + 0x54) * *(float *)((longlong)param_1 + 0x54) +
           *(float *)((longlong)param_1 + 0x5c) * *(float *)((longlong)param_1 + 0x5c);
  if (0.0 < fVar32) {
    if (fVar32 < 0.0) {
      fVar27 = (float)FUN_18051af10();
    }
    else {
      fVar27 = SQRT(fVar32);
    }
    if (fVar27 < DAT_1808ac750) {
      return;
    }
  }
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_180cfe770);
  if (DAT_180cfe868 != DAT_180cfe870) {
    DAT_180cfe870 = DAT_180cfe868;
  }
  _DAT_180cfe880 = (undefined8 *)0x0;
  if (DAT_180cfe778 != DAT_180cfe780) {
    DAT_180cfe780 = DAT_180cfe778;
  }
  _DAT_180cfe790 = (undefined8 *)0x0;
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_180cfe770);
  if (0.0 < fVar32) {
    return;
  }
  if (((DAT_180cfe804 != 0) && (param_1[1] != 0.0)) &&
     (iVar10 = FUN_180011200((longlong)param_1[1] + (ulonglong)DAT_180cfe804), iVar10 != 0)) {
    return;
  }
  if (DAT_180cfe7bc == 0) {
    return;
  }
  if (param_1[3] == 0.0) {
    return;
  }
  cVar8 = FUN_180011220((longlong)param_1[3] + (ulonglong)DAT_180cfe7bc);
  if (cVar8 != '\x01') {
    return;
  }
  if ((DAT_180ca0a40 == 0) || (param_1[1] == 0.0)) {
    puVar11 = (undefined8 *)0x0;
  }
  else {
    puVar11 = (undefined8 *)FUN_18000f3a0((longlong)param_1[1] + (ulonglong)DAT_180ca0a40);
  }
  local_188 = puVar11;
  if ((DAT_180cfe84c == 0) || (param_1[1] == 0.0)) {
    lVar12 = 0;
  }
  else {
    lVar12 = FUN_18000f3a0((longlong)param_1[1] + (ulonglong)DAT_180cfe84c);
  }
  if (puVar11 == (undefined8 *)0x0) {
    return;
  }
  if (lVar12 == 0) {
    return;
  }
  uVar17 = (ulonglong)DAT_180cfe83c;
  if (DAT_180cfe83c == 0) {
    return;
  }
  uVar22 = (ulonglong)DAT_180cfe840;
  if (DAT_180cfe840 == 0) {
    return;
  }
  uVar21 = (ulonglong)DAT_180cfe844;
  if (DAT_180cfe844 == 0) {
    return;
  }
  uVar25 = (ulonglong)DAT_180cfe848;
  if (DAT_180cfe848 == 0) {
    return;
  }
  if (DAT_180cfe850 == 0) {
    return;
  }
  if (DAT_180cfe854 == 0) {
    return;
  }
  if (DAT_180cfe858 == 0) {
    return;
  }
  if (DAT_180cfe85c == 0) {
    return;
  }
  if (DAT_18095721c == '\0') {
    return;
  }
  if (DAT_180962038 == 0) {
    return;
  }
  local_190 = lVar12;
  if (DAT_180961a50 == 0) {
    local_238 = 0;
  }
  else {
    local_238 = FUN_18000f3a0();
  }
  local_194 = FUN_180011200((undefined1 *)((longlong)puVar11 + uVar17));
  local_198 = FUN_18000f3d0((undefined1 *)((longlong)puVar11 + uVar22));
  puVar13 = (undefined8 *)FUN_1800111b0(&local_170,(undefined1 *)((longlong)puVar11 + uVar21));
  local_160 = *puVar13;
  local_158 = *(undefined4 *)(puVar13 + 1);
  puVar26 = (undefined1 *)(uVar25 + (longlong)puVar11);
  local_148 = puVar26;
  puVar11 = (undefined8 *)FUN_1800111b0(&local_180,puVar26);
  puVar19 = auStack_2c8;
  puVar18 = auStack_2c8;
  local_170 = *puVar11;
  local_168 = *(undefined4 *)(puVar11 + 1);
  local_140 = 0;
  uStack_138 = 0;
  local_130 = 0;
  uStack_128 = 0;
  uVar17 = 0;
  do {
    uVar9 = FUN_180011220(puVar26 + uVar17 + 0xc);
    local_120[uVar17 - 0x20] = uVar9;
    uVar17 = uVar17 + 1;
  } while (uVar17 < 0x20);
  fVar32 = (float)FUN_180011200(puVar26 + 0x2c);
  local_150 = puVar26 + 0x34;
  local_274 = fVar32;
  lVar14 = FUN_18000f3a0(local_150);
  local_1e8 = 0;
  lStack_1e0 = 0;
  local_1d8 = 0;
  if ((0 < (int)fVar32) && (lVar14 != 0)) {
    FUN_1800e88a0(&local_1e8,(longlong)(int)fVar32 * 0xc);
    uVar17 = 0;
    if (lStack_1e0 != local_1e8) {
      do {
        uVar9 = FUN_180011220(uVar17 + lVar14);
        *(undefined1 *)(local_1e8 + uVar17) = uVar9;
        uVar17 = uVar17 + 1;
      } while (uVar17 < (ulonglong)(lStack_1e0 - local_1e8));
    }
  }
  puVar11 = (undefined8 *)FUN_1800111b0(&local_1b0,(ulonglong)DAT_180cfe850 + lVar12);
  local_180 = *puVar11;
  local_178 = *(undefined4 *)(puVar11 + 1);
  local_19c = FUN_180011200((ulonglong)DAT_180cfe854 + lVar12);
  local_1a0 = FUN_18000f3d0((ulonglong)DAT_180cfe858 + lVar12);
  local_1b4 = FUN_18000f3d0((ulonglong)DAT_180cfe85c + (longlong)param_1[2]);
  dVar2 = *param_1;
  if ((DAT_180cfe860 == 0) || (param_1[3] == 0.0)) {
    iVar10 = 0;
  }
  else {
    iVar10 = FUN_180011200((longlong)param_1[3] + (ulonglong)DAT_180cfe860);
  }
  if (iVar10 < 0) {
    iVar10 = 0;
  }
  if (0x1e < iVar10) {
    iVar10 = 0x1e;
  }
  iVar16 = *(int *)((longlong)param_1 + 0x4c);
  fVar27 = *(float *)(param_1 + 10);
  local_1d0 = param_1[1];
  local_288 = iVar16;
  local_284 = fVar27;
  local_1b8 = iVar10;
  pfVar15 = (float *)FUN_1802ad890(&local_1b0,&local_1d0,iVar16,fVar27);
  fVar7 = DAT_1808ac34c;
  fVar36 = *pfVar15;
  fVar37 = pfVar15[1];
  local_248 = *(undefined8 *)pfVar15;
  local_268 = *(undefined8 *)pfVar15;
  fVar20 = pfVar15[2];
  local_1b0 = 0;
  local_1a8 = 0;
  local_200 = (undefined8 *)0x0;
  puStack_1f8 = (undefined8 *)0x0;
  local_1f0 = (undefined8 *)0x0;
  local_218 = (undefined8 *)0x0;
  puStack_210 = (undefined8 *)0x0;
  local_208 = (undefined8 *)0x0;
  iVar24 = 0;
  bVar5 = false;
  local_27c = fVar36;
  local_278 = fVar37;
  local_260 = fVar20;
  local_258 = fVar20;
  local_240 = fVar20;
  if (0 < iVar10) {
    dVar2 = dVar2 - DAT_1808ac500;
    lVar12 = local_238 + 0x30;
    local_1c0 = local_238 + 0x34;
    local_1c8 = local_238 + 0x44;
    uVar34 = (undefined4)local_248;
    uVar35 = (undefined4)((ulonglong)local_248 >> 0x20);
    do {
      fVar32 = DAT_1808acab0;
      if (bVar5) break;
      if (local_288 == iVar16) {
        bVar3 = fVar27 <= local_284;
      }
      else {
        bVar3 = iVar16 <= local_288;
      }
      if (bVar3) {
        local_288 = iVar16;
        local_284 = fVar27;
      }
      local_250 = 0;
      local_24c = 0;
      local_254 = 0;
      if (local_238 != 0) {
        local_250 = FUN_18000f3d0(lVar12);
        local_24c = FUN_18000f3d0(local_1c0);
        local_254 = FUN_180011200(local_1c8);
        local_26c = (float)local_288 * DAT_1808ac00c + local_284 * DAT_1808ac00c;
        local_270 = (int)(local_26c * fVar32 + DAT_1808ac1f4);
        FUN_180013280(local_1c8,&local_270);
        local_270 = 0x3c800000;
        FUN_180013280(local_1c0,&local_270);
        FUN_180013280(lVar12,&local_26c);
      }
      if (bVar3) {
        cVar8 = FUN_18029fcc0(param_1[2],&local_288);
        if (cVar8 == '\0') {
          bVar5 = true;
        }
        uVar17 = (ulonglong)DAT_180cfe85c;
        local_26c = (float)FUN_18000f3d0((longlong)param_1[2] + uVar17);
        local_26c = local_26c + fVar7;
        FUN_180013280((longlong)param_1[2] + uVar17,&local_26c);
        local_280 = 0.0;
        if ((DAT_180cfe7c0 == 0) || (param_1[3] == 0.0)) {
          auVar29 = ZEXT816(0);
        }
        else {
          auVar29._0_8_ = FUN_18000f3d0((ulonglong)DAT_180cfe7c0 + (longlong)param_1[3]);
          auVar29._8_8_ = extraout_XMM0_Qb;
        }
        auVar30._4_12_ = auVar29._4_12_;
        auVar30._0_4_ = auVar29._0_4_ * fVar32;
        uVar28 = FUN_180512fd0(auVar30._0_8_,&local_280);
        auVar31._8_4_ = (int)extraout_XMM0_Qb_00;
        auVar31._0_8_ = uVar28;
        auVar31._12_4_ = (int)((ulonglong)extraout_XMM0_Qb_00 >> 0x20);
        if ((float)uVar28 < 0.0) {
          auVar31._0_4_ = (float)uVar28 + fVar7;
          if (auVar31._0_4_ < fVar7) {
            local_280 = local_280 + DAT_1808acda0;
          }
          else {
            auVar31 = ZEXT816(0);
          }
        }
        iVar16 = (int)local_280 + local_288;
        fVar27 = auVar31._0_4_ + local_284;
        if (fVar7 <= fVar27) {
          fVar27 = fVar27 - fVar7;
          iVar16 = iVar16 + 1;
        }
        iVar24 = iVar24 + 1;
        puVar11 = (undefined8 *)FUN_1802ad890(local_120,&local_1d0,iVar16,fVar27);
        uVar34 = (undefined4)*puVar11;
        uVar35 = (undefined4)((ulonglong)*puVar11 >> 0x20);
        fVar20 = *(float *)(puVar11 + 1);
      }
      pfVar15 = (float *)FUN_1802ad890(local_110,&local_1d0,local_288,local_284);
      fVar32 = *pfVar15;
      fVar33 = pfVar15[1];
      uVar6 = *(undefined8 *)pfVar15;
      uVar28 = *(undefined8 *)pfVar15;
      fVar1 = pfVar15[2];
      local_230 = fVar32;
      fStack_22c = fVar33;
      fStack_228 = fVar1;
      iStack_224 = iVar24;
      local_220 = dVar2;
      if (puStack_1f8 == local_1f0) {
        FUN_1800435c0(&local_200,puStack_1f8,&local_230);
      }
      else {
        *puStack_1f8 = *(undefined8 *)pfVar15;
        puStack_1f8[1] = CONCAT44(iVar24,fVar1);
        puStack_1f8[2] = dVar2;
        puStack_1f8 = puStack_1f8 + 3;
      }
      if (iVar24 < DAT_180957220) {
        fVar36 = fVar32;
        fVar37 = fVar33;
        local_27c = fVar32;
        local_278 = fVar33;
        local_268 = uVar6;
        local_260 = fVar1;
        local_258 = fVar1;
      }
      else {
        if (DAT_18095722c == -1) {
          local_268 = uVar28;
          local_260 = fVar1;
        }
        else {
          local_2a8 = DAT_1808abfbc;
          if (DAT_1808abfbc <= (float)DAT_18095722c / DAT_1808acc3c) {
            local_2a8 = (float)DAT_18095722c / DAT_1808acc3c;
          }
          local_2a0 = DAT_1808ac00c;
          puVar11 = (undefined8 *)FUN_18029fce0(local_100,&local_268,&local_248,&local_1b0);
          local_268 = *puVar11;
          fVar32 = (float)local_268;
          fVar33 = (float)((ulonglong)local_268 >> 0x20);
          local_260 = *(float *)(puVar11 + 1);
        }
        fVar36 = fVar36 + ((float)DAT_180957224 / DAT_1808acb08) * (fVar32 - local_27c);
        fVar37 = fVar37 + ((float)DAT_180957228 / DAT_1808acb08) * (fVar33 - local_278);
        fStack_228 = local_258;
        local_27c = fVar32;
        local_278 = fVar33;
        local_230 = fVar36;
        fStack_22c = fVar37;
        if (puStack_210 == local_208) {
          iStack_224 = iVar24;
          local_220 = dVar2;
          FUN_1800435c0(&local_218,puStack_210,&local_230);
        }
        else {
          *puStack_210 = CONCAT44(fVar37,fVar36);
          puStack_210[1] = CONCAT44(iVar24,local_258);
          puStack_210[2] = dVar2;
          puStack_210 = puStack_210 + 3;
          iStack_224 = iVar24;
          local_220 = dVar2;
        }
      }
      local_288 = local_288 + 1;
      local_248 = CONCAT44(uVar35,uVar34);
      local_240 = fVar20;
      if (local_238 != 0) {
        FUN_180013280(local_1c8,&local_254);
        FUN_180013280(lVar12,&local_250);
        FUN_180013280(local_1c0,&local_24c);
      }
    } while (iVar24 < local_1b8);
    puVar26 = local_148;
    fVar32 = local_274;
  }
  FUN_180013280((ulonglong)DAT_180cfe85c + (longlong)param_1[2],&local_1b4);
  lVar12 = local_190;
  FUN_180013280((ulonglong)DAT_180cfe858 + local_190,&local_1a0);
  FUN_180013280((ulonglong)DAT_180cfe854 + lVar12,&local_19c);
  FUN_180023a50((ulonglong)DAT_180cfe850 + lVar12,&local_180);
  uVar17 = 0;
  do {
    FUN_1800233d0(puVar26 + uVar17 + 0xc,local_120 + (uVar17 - 0x20));
    uVar17 = uVar17 + 1;
  } while (uVar17 < 0x20);
  fVar27 = (float)FUN_180011200(puVar26 + 0x2c);
  iVar10 = FUN_180011200(puVar26 + 0x3c);
  lVar12 = FUN_18000f3a0(local_150);
  if (((int)fVar27 < (int)fVar32) && ((iVar10 < (int)fVar32 || (lVar12 == 0)))) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
    FUN_180013280(puVar26 + 0x2c,&local_274);
    uVar17 = 0;
    if (lStack_1e0 != local_1e8) {
      do {
        if (lVar12 == 0) break;
        FUN_1800233d0(uVar17 + lVar12,local_1e8 + uVar17);
        uVar17 = uVar17 + 1;
      } while (uVar17 < (ulonglong)(lStack_1e0 - local_1e8));
    }
  }
  puVar11 = local_188;
  FUN_180023a50((undefined1 *)((ulonglong)DAT_180cfe848 + (longlong)local_188),&local_170);
  FUN_180023a50((undefined1 *)((ulonglong)DAT_180cfe844 + (longlong)puVar11),&local_160);
  FUN_180013280((undefined1 *)((ulonglong)DAT_180cfe840 + (longlong)puVar11),&local_198);
  FUN_180013280((undefined1 *)((ulonglong)DAT_180cfe83c + (longlong)puVar11),&local_194);
  if ((bVar5) || (!bVar3)) {
    if (DAT_180cd033c != '\0') {
      pcVar23 = "punch vector not restored";
      if (bVar5) {
        pcVar23 = "game recoil routine faulted";
      }
      local_2a8 = local_274;
      local_2a0 = fVar27;
      local_298 = iVar10;
      FUN_1802b2870("wl_legit.log",
                    "[recoil] pattern %s | shots %d | punch events saved %d live %d alloc %d\n",
                    pcVar23,iVar24);
    }
    if (bVar5) goto LAB_1802a0c74;
  }
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_180cfe770);
  if (DAT_180cfe868 == (undefined8 *)0x0) {
LAB_1802a0ba0:
    DAT_180cfe868 = local_200;
    DAT_180cfe870 = puStack_1f8;
    DAT_180cfe878 = local_1f0;
    local_200 = (undefined8 *)0x0;
    puStack_1f8 = (undefined8 *)0x0;
    puVar11 = (undefined8 *)0x0;
    local_1f0 = (undefined8 *)0x0;
    puVar19 = auStack_2c8;
    if (DAT_180cfe778 != (undefined8 *)0x0) {
      puVar13 = DAT_180cfe778;
      if ((ulonglong)(((longlong)DAT_180cfe788 - (longlong)DAT_180cfe778 >> 3) * 8) < 0x1000)
      goto LAB_1802a0c20;
      puVar13 = (undefined8 *)DAT_180cfe778[-1];
      puVar19 = auStack_2c8;
      if ((undefined1 *)0x1f < (undefined1 *)((longlong)DAT_180cfe778 + (-8 - (longlong)puVar13)))
      goto LAB_1802a0c19;
      goto LAB_1802a0c23;
    }
  }
  else {
    uVar17 = ((longlong)DAT_180cfe878 - (longlong)DAT_180cfe868 >> 3) * 8;
    if (uVar17 < 0x1000) {
      puVar11 = DAT_180cfe868;
LAB_1802a0b98:
      thunk_FUN_1803d64e0(puVar11,uVar17);
      goto LAB_1802a0ba0;
    }
    if ((ulonglong)((longlong)DAT_180cfe868 + (-8 - (longlong)DAT_180cfe868[-1])) < 0x20) {
      uVar17 = uVar17 + 0x27;
      puVar11 = (undefined8 *)DAT_180cfe868[-1];
      goto LAB_1802a0b98;
    }
LAB_1802a0c19:
    puVar13 = (undefined8 *)&DAT_00000005;
    pcVar4 = (code *)swi(0x29);
    (*pcVar4)(5);
    puVar18 = auStack_2c0;
LAB_1802a0c20:
    puVar19 = puVar18;
LAB_1802a0c23:
    *(undefined8 *)(puVar19 + -8) = 0x1802a0c2b;
    thunk_FUN_1803d64e0(puVar13);
  }
  DAT_180cfe778 = local_218;
  DAT_180cfe780 = puStack_210;
  DAT_180cfe788 = local_208;
  local_218 = (undefined8 *)0x0;
  puStack_210 = (undefined8 *)0x0;
  *(undefined8 *)(puVar19 + -8) = 0x1802a0c73;
  _DAT_180cfe790 = puVar11;
  _DAT_180cfe880 = puVar11;
  local_208 = puVar11;
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_180cfe770);
LAB_1802a0c74:
  *(undefined8 *)(puVar19 + -8) = 0x1802a0c7d;
  FUN_180042970(&local_218);
  *(undefined8 *)(puVar19 + -8) = 0x1802a0c87;
  FUN_180042970(&local_200);
  *(undefined8 *)(puVar19 + -8) = 0x1802a0c91;
  FUN_180081c30(&local_1e8);
  return;
}



/* ===== 1802a0cf0 FUN_1802a0cf0 ===== */

double FUN_1802a0cf0(void)

{
  double dVar1;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res10 [3];
  
  FUN_18029a670();
  if (DAT_180cfe7a8 == (code *)0x0) {
    local_res8.QuadPart = (LONGLONG)DAT_180cfe7a8;
    local_res10[0].QuadPart = (LONGLONG)DAT_180cfe7a8;
    QueryPerformanceCounter(&local_res8);
    QueryPerformanceFrequency(local_res10);
    return (double)local_res8.QuadPart / (double)local_res10[0].QuadPart;
  }
  dVar1 = (double)(*DAT_180cfe7a8)();
  return dVar1;
}



/* ===== 1802a0d50 FUN_1802a0d50 ===== */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802a0d50(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong *puVar3;
  longlong lVar4;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStack_1048 [32];
  undefined8 local_1028;
  undefined8 *local_1020;
  undefined1 local_1018 [4096];
  ulonglong local_18;
  
  if (((param_1 != 0) && (local_18 = DAT_180919500 ^ (ulonglong)auStack_1048, DAT_180cfe694 < 40000)
      ) && (local_res10 = param_2, local_res18 = param_3, local_res20 = param_4,
           cVar1 = FUN_18029b0e0(), cVar1 != '\0')) {
    if (param_1 != 0) {
      puVar3 = (ulonglong *)FUN_180013640();
      local_1028 = 0;
      local_1020 = &local_res10;
      uVar2 = FUN_180501904(*puVar3 | 2,local_1018,0xfff,param_1);
      if ((int)uVar2 < 0) {
        uVar2 = 0xffffffff;
      }
      if (-1 < (int)uVar2) {
        lVar4 = (longlong)(int)uVar2;
        if (0xffe < uVar2) {
          lVar4 = 0xffe;
        }
        local_1018[lVar4] = 10;
      }
    }
    DAT_180cfe694 = DAT_180cfe694 + 1;
  }
  return;
}



/* ===== 1802a0e40 FUN_1802a0e40 ===== */

undefined8 FUN_1802a0e40(uint *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  bool bVar6;
  undefined8 local_res8;
  
  bVar6 = DAT_180cd1304 == '\0';
  *param_2 = 0;
  *param_1 = 0;
  if (bVar6) {
    FUN_1803a0b60(&local_res8);
    DAT_181108a00 = local_res8;
    DAT_1811089f8 = FUN_1803a0c50(&local_res8);
    DAT_180cd1304 = '\x01';
  }
  lVar3 = DAT_1811089f8;
  if (DAT_1811089f8 != 0) {
    FUN_18029a770();
    if (((DAT_180ca0a0c != 0) && (DAT_180ca0a10 != 0)) &&
       (lVar3 = FUN_18000f3a0(lVar3 + (ulonglong)DAT_180ca0a0c), lVar3 != 0)) {
      uVar1 = FUN_180011200((ulonglong)DAT_180ca0a10 + lVar3);
      plVar4 = (longlong *)FUN_1803a0940(&local_res8,uVar1);
      lVar3 = *plVar4;
      if (lVar3 != 0) {
        lVar5 = FUN_18000f3a0();
        if (DAT_180961998 == 0) {
          uVar2 = 0;
        }
        else {
          uVar2 = FUN_180011440((ulonglong)DAT_1809619a4 + lVar3 + (ulonglong)DAT_1809619a8 +
                                (ulonglong)DAT_180961998);
          uVar2 = uVar2 & 0xffff;
        }
        *param_1 = uVar2;
        if ((lVar5 == 0) || (DAT_180cfe7b8 == 0)) {
          *param_2 = 0;
          return 1;
        }
        uVar1 = FUN_180011200(lVar5 + (ulonglong)DAT_180cfe7b8);
        *param_2 = uVar1;
        return 1;
      }
    }
  }
  return 0;
}



/* ===== 1802a0f90 FUN_1802a0f90 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802a0f90(int param_1)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  undefined1 *puVar5;
  char cVar6;
  char cVar7;
  ushort uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined1 **ppuVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  undefined4 *puVar17;
  undefined8 *puVar18;
  char *pcVar19;
  float *pfVar20;
  char *pcVar21;
  undefined1 **ppuVar22;
  float *pfVar23;
  ulonglong uVar24;
  undefined4 uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  double dVar30;
  undefined8 uVar31;
  undefined8 extraout_XMM0_Qb;
  undefined4 uVar36;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  double dVar32;
  undefined1 auVar35 [16];
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  undefined1 auStack_258 [32];
  float local_238 [2];
  undefined1 *local_230;
  undefined8 local_228;
  double local_218;
  undefined1 *local_210;
  longlong local_208;
  longlong local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  int local_1a8;
  char *local_1a0;
  char *local_198;
  undefined4 local_190;
  undefined1 local_18c;
  undefined1 uStack_18b;
  undefined8 local_188;
  float local_170 [6];
  undefined1 *local_158;
  undefined2 uStack_150;
  ushort uStack_14e;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  float fStack_144;
  float fStack_140;
  uint uStack_13c;
  char local_138;
  undefined8 local_134;
  char local_12c;
  float local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  uint uStack_11c;
  uint uStack_118;
  uint uStack_114;
  uint uStack_110;
  uint uStack_10c;
  uint uStack_108;
  uint local_104;
  uint uStack_100;
  uint uStack_fc;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  uint local_e8;
  undefined2 local_e4;
  undefined4 local_e0;
  ulonglong local_d8;
  
  if (param_1 != 0) {
    return;
  }
  local_d8 = DAT_180919500 ^ (ulonglong)auStack_258;
  FUN_18029a670();
  FUN_18029a770();
  dVar30 = (double)FUN_1802a0cf0();
  local_228 = DAT_1808ac500;
  local_188 = (undefined1 *)(dVar30 - _DAT_1809f3ca0);
  local_128 = -NAN;
  local_230 = (undefined1 *)0x0;
  DAT_1809f3ba0 = 0x7f7fffff;
  _DAT_1809f3c00 = 0;
  _DAT_1809f3c08 = 0;
  ppuVar22 = &local_230;
  if (0.0 <= (double)local_188) {
    ppuVar22 = (undefined1 **)&local_188;
  }
  _DAT_1809f3c50 = 0;
  _DAT_1809f3c58 = 0;
  ppuVar11 = (undefined1 **)&local_228;
  if ((double)local_188 <= (double)DAT_1808ac500) {
    ppuVar11 = ppuVar22;
  }
  uStack_14c = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  DAT_1809f3ca8 = (float)(double)*ppuVar11;
  local_188._4_4_ = (undefined4)((ulonglong)local_188 >> 0x20);
  local_188 = (undefined1 *)CONCAT44(local_188._4_4_,DAT_1809f3cb8);
  local_228._4_4_ = (undefined4)((ulonglong)DAT_1808ac500 >> 0x20);
  local_228 = (undefined1 *)CONCAT44(local_228._4_4_,DAT_1809f3cbc);
  local_158 = &DAT_18058b643;
  fStack_144 = 0.0;
  fStack_140 = 0.0;
  uStack_13c = uStack_13c & 0xffffff00;
  _DAT_1809f3bf8 = (ulonglong)uStack_13c << 0x20;
  local_104 = 0;
  uStack_100 = 0;
  uStack_124 = (undefined4)_DAT_1808ad2d0;
  uStack_120 = (undefined4)((ulonglong)_DAT_1808ad2d0 >> 0x20);
  uStack_11c = (uint)_UNK_1808ad2d8;
  uStack_118 = (uint)((ulonglong)_UNK_1808ad2d8 >> 0x20);
  uStack_fc = uStack_fc & 0xffffff00;
  _DAT_1809f3bf0 = 0;
  uStack_114 = 0;
  uStack_110 = 0;
  uStack_10c = 0;
  uStack_108 = 0;
  uStack_f8 = 0;
  _DAT_1809f3be8 = (ulonglong)uStack_14e << 0x10;
  _DAT_1809f3c20 = (ulonglong)uStack_118;
  uStack_f0 = (ulonglong)uStack_f0._5_3_ << 0x28;
  PTR_DAT_1809f3be0 = &DAT_18058b643;
  _DAT_1809f3c10 = CONCAT44(uStack_124,0xffffffff);
  _DAT_1809f3c18 = CONCAT44(uStack_11c,uStack_120);
  _DAT_1809f3cb8 = 0;
  _DAT_1809f3c28 = 0;
  DAT_1809f3ee0 = 0;
  _DAT_1809f3c38 = (ulonglong)uStack_fc << 0x20;
  _DAT_1809f3ed8 = 0;
  DAT_1809f3d98 = 0;
  _DAT_1809f3c30 = 0;
  DAT_1809f3f58 = 0;
  DAT_1809f3bb4 = 0;
  DAT_1809f3ba4 = 0;
  _DAT_1809f3c40 = 0;
  _DAT_1809f3c48 = uStack_f0;
  _DAT_1809f3ca0 = dVar30;
  if (DAT_180cd1304 == '\0') {
    FUN_1803a0b60(&local_230);
    DAT_181108a00 = local_230;
    local_230 = (undefined1 *)FUN_1803a0c50(&local_230);
    DAT_180cd1304 = '\x01';
  }
  else {
    local_230 = DAT_1811089f8;
  }
  puVar5 = local_230;
  cVar7 = DAT_180cfe7b0;
  cVar6 = DAT_180cd1ac4;
  uVar4 = DAT_180ca09f0;
  DAT_1811089f8 = local_230;
  if ((local_230 != (undefined1 *)0x0) && (uVar24 = (ulonglong)DAT_180ca09f0, DAT_180ca09f0 != 0)) {
    iVar9 = FUN_180011200(local_230 + uVar24);
    if ((iVar9 - 1U < 1000) && (((cVar7 != '\0' && (cVar6 != '\0')) && (DAT_180961a38 != 0)))) {
      if (DAT_1809f3cb0 != puVar5) {
        FUN_1802a8b60();
        _DAT_1809f3e24 = 0;
        _DAT_1809f3e74 = 0;
        _DAT_1809f3e68 = 0;
        _DAT_1809f3e6c = 0;
        _DAT_1809f3e60 = 0;
        _DAT_1809f3e54 = 0;
        _DAT_1809f3e48 = 0;
        _DAT_1809f3e3c = 0;
        _DAT_1809f3e5c = 0;
        _DAT_1809f3e50 = 0;
        _DAT_1809f3e44 = 0;
        _DAT_1809f3e2c = 0;
        _DAT_1809f3e10 = 0;
        _DAT_1809f3e18 = 0;
        _DAT_1809f3e04 = 0;
        _DAT_1809f3e0c = 0;
        _DAT_1809f3df8 = 0;
        _DAT_1809f3e00 = 0;
        _DAT_1809f3dec = 0;
        _DAT_1809f3df4 = 0;
        _DAT_1809f3de0 = 0;
        _DAT_1809f3de8 = 0;
        _DAT_1809f3dd4 = 0;
        _DAT_1809f3ddc = 0;
        _DAT_1809f3e20 = 0;
        _DAT_1809f3e8c = 0;
        _DAT_1809f3e94 = 0;
        _DAT_1809f3e78 = 0;
        _DAT_1809f3e80 = 0;
        _DAT_1809f3e88 = 0;
        FUN_18029d2a0();
      }
      DAT_1809f3cb0 = puVar5;
      if (((puVar5 == (undefined1 *)0x0) || (DAT_180ca0a0c == 0)) ||
         ((uVar24 = (ulonglong)DAT_180ca0a10, DAT_180ca0a10 == 0 ||
          (lVar12 = FUN_18000f3a0(puVar5 + DAT_180ca0a0c), lVar12 == 0)))) {
LAB_1802a2162:
        PTR_DAT_1809f3be0 = "no weapon";
        return;
      }
      uVar10 = FUN_180011200(lVar12 + uVar24);
      plVar13 = (longlong *)FUN_1803a0940(local_238,uVar10);
      lVar12 = *plVar13;
      if (lVar12 == 0) goto LAB_1802a2162;
      lVar14 = FUN_18000f3a0((ulonglong)DAT_1809619a0 + (ulonglong)DAT_1809619c0 + lVar12);
      if (lVar14 == 0) {
        PTR_DAT_1809f3be0 = "no weapon vdata";
        return;
      }
      local_1f8 = 0;
      local_1f0 = 0;
      local_1e8 = 0;
      uStack_1e0 = 0;
      local_1d8 = 0;
      local_1d0 = 0;
      local_1c8 = 0;
      uStack_1c0 = 0;
      local_1b8 = 0;
      local_1b0 = 0;
      local_1a8 = 0;
      local_1a0 = (char *)0x0;
      local_198 = (char *)0x0;
      local_190 = 0;
      local_18c = 0;
      uStack_18b = 0;
      local_218 = dVar30;
      local_210 = puVar5;
      local_208 = lVar12;
      local_200 = lVar14;
      if (DAT_180961998 != 0) {
        uVar8 = FUN_180011440((ulonglong)DAT_180961998 +
                              (ulonglong)DAT_1809619a4 + lVar12 + (ulonglong)DAT_1809619a8);
        local_1f8 = CONCAT44(local_1f8._4_4_,(uint)uVar8);
      }
      if (DAT_180cfe7b8 == 0) {
        iVar9 = 0;
      }
      else {
        iVar9 = FUN_180011200(lVar14 + (ulonglong)DAT_180cfe7b8);
      }
      lVar16 = DAT_180961a38;
      local_1f8 = CONCAT44(iVar9,(int)local_1f8);
      lVar15 = FUN_18029b030(DAT_180961a38);
      if (lVar15 == 0) {
        PTR_DAT_1809f3be0 = "input view angles invalid";
        return;
      }
      lVar1 = lVar15 + lVar16;
      DAT_1809f3f30 = lVar16;
      DAT_1809f3f38 = lVar15;
      uVar10 = FUN_18000f3d0(lVar1);
      uVar25 = FUN_18000f3d0(lVar1 + 4);
      puVar5 = local_210;
      local_1f0 = CONCAT44(uVar25,uVar10);
      local_1e8 = local_1e8 & 0xffffffff00000000;
      lVar16 = FUN_180264b70("sensitivity");
      if ((lVar16 == 0) ||
         (local_238[0] = (float)FUN_180264d70(lVar16), fVar26 = local_238[0],
         ((uint)local_238[0] & 0x7f800000) == 0x7f800000)) {
        fVar26 = DAT_1808ac34c;
      }
      uVar36 = 0;
      uVar25 = 0;
      uVar10 = 0;
      if ((DAT_180cfe824 != 0) && (puVar5 != (undefined1 *)0x0)) {
        uVar31 = FUN_18000f3d0(puVar5 + DAT_180cfe824);
        if (0.0 < (float)uVar31) {
          fVar26 = (float)uVar31 * fVar26;
          uVar10 = (undefined4)((ulonglong)uVar31 >> 0x20);
          uVar25 = (undefined4)extraout_XMM0_Qb;
          uVar36 = (undefined4)((ulonglong)extraout_XMM0_Qb >> 0x20);
        }
      }
      lVar16 = FUN_180264b70("m_yaw");
      fVar29 = DAT_1808ac028;
      if ((lVar16 == 0) ||
         (local_238[0] = (float)FUN_180264d70(lVar16), fVar37 = local_238[0],
         ((uint)local_238[0] & 0x7f800000) == 0x7f800000)) {
        fVar37 = fVar29;
      }
      fVar37 = (float)((uint)fVar37 ^ DAT_1808adec0);
      lVar16 = FUN_180264b70("m_pitch");
      if ((lVar16 != 0) &&
         (local_238[0] = (float)FUN_180264d70(lVar16),
         ((uint)local_238[0] & 0x7f800000) != 0x7f800000)) {
        fVar29 = local_238[0];
      }
      fVar42 = DAT_1808ac1f4;
      fVar28 = DAT_1808abfd0;
      fVar39 = (float)local_1f0;
      fVar40 = fVar26 * fVar29 * (float)(int)local_228 + (float)local_1f0;
      auVar33._4_4_ = uVar10;
      auVar33._0_4_ = fVar40;
      auVar33._8_4_ = uVar25;
      auVar33._12_4_ = uVar36;
      auVar34._4_12_ = auVar33._4_12_;
      auVar34._0_4_ = fVar40 * DAT_1808abfd0 + DAT_1808ac1f4;
      fVar27 = (float)FUN_18053f0d0(auVar34._0_8_);
      fVar29 = DAT_1808acbd0;
      fVar41 = local_1f0._4_4_;
      fVar40 = fVar40 - fVar27 * DAT_1808acbd0;
      fVar27 = (float)(int)local_188 * fVar37 * fVar26 + local_1f0._4_4_;
      fVar37 = (float)FUN_18053f0d0(fVar27 * fVar28 + fVar42);
      fVar26 = (float)local_1e8;
      fVar27 = fVar27 - fVar37 * fVar29;
      fVar37 = (float)FUN_18053f0d0((float)local_1e8 * fVar28 + fVar42);
      DAT_1809f3f58 = 1;
      local_1e8 = CONCAT44(fVar40,(float)local_1e8);
      DAT_1809f3ea4 = fVar26 - fVar37 * fVar29;
      _DAT_1809f3f40 = fVar39;
      _DAT_1809f3f44 = fVar41;
      _DAT_1809f3f48 = fVar26;
      uStack_1e0 = CONCAT44(DAT_1809f3ea4,fVar27);
      DAT_1809f3e9c = fVar40;
      DAT_1809f3ea0 = fVar27;
      _DAT_1809f3f4c = fVar40;
      _DAT_1809f3f50 = fVar27;
      _DAT_1809f3f54 = DAT_1809f3ea4;
      puVar17 = (undefined4 *)FUN_1802ae840(&local_188,&local_230);
      DAT_1809f3ec0 = *puVar17;
      DAT_1809f3ec4 = puVar17[1];
      DAT_1809f3eb4 = DAT_1809f3ea8;
      DAT_1809f3ebc = DAT_1809f3eb0;
      local_1c8 = CONCAT44(local_1c8._4_4_,DAT_1809f3ec4);
      DAT_1809f3eb8 = DAT_1809f3eac;
      local_1d0._4_4_ = DAT_1809f3ec0;
      puVar17 = (undefined4 *)FUN_1802ad890(&local_188,&local_230);
      DAT_1809f3ea8 = *puVar17;
      DAT_1809f3eac = puVar17[1];
      DAT_1809f3eb0 = puVar17[2];
      uStack_1c0 = *(undefined8 *)(puVar17 + 1);
      local_1b0 = CONCAT44(local_1b0._4_4_,DAT_1809f3ebc);
      local_1c8 = CONCAT44(DAT_1809f3ea8,(undefined4)local_1c8);
      local_1b8 = CONCAT44(DAT_1809f3eb8,DAT_1809f3eb4);
      puVar18 = (undefined8 *)FUN_1802ae9b0(&local_188,&local_230);
      uVar10 = local_190;
      _DAT_1809f3f5c = *(undefined4 *)puVar18;
      _DAT_1809f3f60 = *(undefined4 *)((longlong)puVar18 + 4);
      local_1d8 = *puVar18;
      _DAT_1809f3f64 = *(undefined4 *)(puVar18 + 1);
      local_1d0 = CONCAT44(local_1d0._4_4_,_DAT_1809f3f64);
      local_190 = CONCAT31(local_190._1_3_,DAT_1809f3f09);
      if (DAT_1809f3f09 == '\0') {
LAB_1802a18c3:
        local_190._0_2_ = (ushort)(byte)local_190;
      }
      else {
        local_190._2_2_ = SUB42(uVar10,2);
        local_190._0_2_ = CONCAT11(1,DAT_1809f3f09);
        if (DAT_1809f3f0a != '\0') goto LAB_1802a18c3;
      }
      dVar32 = (double)FUN_1802a0cf0();
      local_190 = CONCAT13(DAT_1809f3f0b,CONCAT12(dVar32 < DAT_1809f3f18,(ushort)local_190));
      if ((DAT_1809f3f0b == '\0') || (local_18c = 1, DAT_1809f3f0c != '\0')) {
        local_18c = 0;
      }
      dVar32 = (double)FUN_1802a0cf0();
      iVar9 = DAT_180957234;
      if ((dVar32 < DAT_1809f3f20) || (uStack_18b = 0, DAT_1809f3ee8 != 0.0)) {
        uStack_18b = 1;
      }
      if ((DAT_180957234 == 0) &&
         ((DAT_1809f351c == 2 ||
          ((((DAT_1809f351c == 1 && (lVar16 = FUN_180266660(), lVar16 != 0)) && (DAT_180cf9f80 != 0)
            ) && (cVar6 = FUN_180011220((ulonglong)DAT_180cf9f80 + lVar16), cVar6 != '\0')))))) {
        iVar9 = 1;
      }
      local_1b0 = CONCAT44(iVar9,(undefined4)local_1b0);
      if (DAT_180cd031e != '\0') {
        (*DAT_180cfe8a0)(&DAT_180cfe8b0,(int)(dVar30 * DAT_1808ac6a8));
      }
      local_238[0] = 0.0;
      cVar6 = FUN_1802a0e40(local_238,&local_188);
      if (cVar6 == '\0') {
        local_1a8 = 0;
      }
      else {
        local_1a8 = FUN_1800ef270(&DAT_18094f764,local_238[0]);
      }
      uVar4 = DAT_180cfe7b4;
      uVar24 = (ulonglong)DAT_180cfe7b4;
      lVar16 = (longlong)local_1a8 * 100;
      local_1a0 = &DAT_180954968 + lVar16;
      local_198 = &DAT_180956268 + (longlong)local_1a8 * 0x3c;
      _DAT_1809f3f68 = *(undefined4 *)(&DAT_18095498c + lVar16);
      if ((DAT_18094f760 == '\0') ||
         (((int)local_1f8 != 0x1f &&
          ((DAT_180cfe7b4 == 0 || (iVar9 = FUN_180011200(lVar14 + uVar24), iVar9 < 2)))))) {
        cVar6 = '\0';
      }
      else {
        cVar6 = '\x01';
      }
      if (((DAT_180cfe7e0 == 0) ||
          (cVar7 = FUN_180011220(lVar12 + (ulonglong)DAT_180cfe7e0), cVar7 == '\0')) &&
         ((DAT_180cfe7e4 != 0 &&
          (iVar9 = FUN_180011200(lVar12 + (ulonglong)DAT_180cfe7e4), 0 < iVar9)))) {
        if (cVar6 == '\0') goto LAB_1802a1a66;
      }
      else {
        cVar6 = '\0';
LAB_1802a1a66:
        _DAT_1809f3cc0 = 0;
        DAT_1809f3cc8 = 0x34000000;
      }
      fVar29 = (float)local_1f0;
      fVar37 = local_1f0._4_4_;
      fVar39 = local_1e8._4_4_;
      fVar41 = (float)uStack_1e0;
      auVar33 = ZEXT416((uint)(float)uStack_1e0);
      fVar27 = local_1e8._4_4_ - (float)local_1f0;
      _DAT_1809f3be8 = CONCAT44(local_1a8,_DAT_1809f3be8);
      fVar40 = (float)uStack_1e0 - local_1f0._4_4_;
      _DAT_1809f3bf0 = CONCAT44(local_1d0._4_4_,(int)local_1f8);
      _DAT_1809f3be8 = CONCAT11(cVar6,1);
      _DAT_1809f3bf8 = CONCAT14(*local_1a0,(undefined4)local_1c8);
      _DAT_1809f3c20 = CONCAT44(DAT_1809f3c24,(float)local_1e8);
      _DAT_1809f3c00 = CONCAT44(DAT_1809f3c04,*(undefined4 *)(local_1a0 + 4));
      _DAT_1809f3c18 = local_1f0;
      DAT_1809f3f6c = cVar6;
      fVar26 = (float)FUN_18053f0d0(fVar27 * fVar28 + fVar42);
      _DAT_1809f3c20 = CONCAT44(fVar27 - fVar26 * DAT_1808acbd0,_DAT_1809f3c20);
      fVar28 = (float)FUN_18053f0d0(fVar40 * fVar28 + fVar42);
      pcVar21 = local_1a0;
      fVar26 = DAT_1808acbd0;
      _DAT_1809f3c28 = (ulonglong)(uint)(fVar40 - fVar28 * DAT_1808acbd0);
      if (DAT_18094f760 == '\0') {
        pcVar19 = "legit disabled";
LAB_1802a1bf9:
        PTR_DAT_1809f3be0 = pcVar19;
      }
      else {
        if (cVar6 == '\0') {
          if (uVar4 == 0) {
LAB_1802a1bbc:
            if ((int)local_1f8 != 0x1f) {
              PTR_DAT_1809f3be0 = s_knife___other_weapon_180741338;
              goto LAB_1802a1e52;
            }
          }
          else {
            iVar9 = FUN_180011200(lVar14 + uVar24);
            auVar33 = ZEXT416((uint)(float)uStack_1e0);
            fVar39 = local_1e8._4_4_;
            fVar29 = (float)local_1f0;
            fVar37 = local_1f0._4_4_;
            if (iVar9 < 2) goto LAB_1802a1bbc;
          }
          PTR_DAT_1809f3be0 = s_reloading___empty_clip_180741320;
          goto LAB_1802a1e52;
        }
        if (*local_1a0 == '\0') {
          pcVar19 = "aimbot disabled for group";
          goto LAB_1802a1bf9;
        }
      }
      if (cVar6 != '\0') {
        uStack_f0 = 0;
        local_e8 = 0;
        local_e0 = 0;
        uStack_150 = (undefined2)local_1d8;
        uStack_14e = (ushort)((ulonglong)local_1d8 >> 0x10);
        uStack_148 = (undefined4)local_1d0;
        uStack_14c = local_1d8._4_4_;
        uStack_13c = (uint)uStack_1e0._4_4_;
        fStack_144 = fVar39;
        fStack_140 = fVar41;
        local_158 = local_210;
        local_138 = *local_1a0;
        if (local_1a0[9] == '\0') {
          fVar29 = 0.0;
        }
        else {
          fVar29 = (float)*(int *)(local_1a0 + 0x14) / DAT_1808acb08;
        }
        if (local_1a0[8] == '\0') {
          local_134 = (ulonglong)(uint)fVar29;
        }
        else {
          local_134 = CONCAT44(*(undefined4 *)(local_1a0 + 0x10),fVar29);
        }
        local_12c = *local_198;
        if (local_198[2] == '\0') {
          local_128 = 0.0;
        }
        else {
          local_128 = (float)*(int *)(local_198 + 0xc) / DAT_1808acb08;
        }
        if (local_198[1] == '\0') {
          uStack_124 = 0;
        }
        else {
          uStack_124 = *(undefined4 *)(local_198 + 8);
        }
        uStack_118 = (uint)_DAT_1808adef0;
        uStack_114 = (uint)((ulonglong)_DAT_1808adef0 >> 0x20);
        uStack_110 = (uint)_UNK_1808adef8;
        uStack_10c = (uint)((ulonglong)_UNK_1808adef8 >> 0x20);
        uStack_108 = (uint)_DAT_1808ad5b0;
        local_104 = (uint)((ulonglong)_DAT_1808ad5b0 >> 0x20);
        uStack_100 = (uint)_UNK_1808ad5b8;
        uStack_fc = (uint)((ulonglong)_UNK_1808ad5b8 >> 0x20);
        uStack_120 = 0xbf800000;
        uStack_11c = 0xbf800000;
        uStack_f8 = 0;
        if (*local_1a0 != '\0') {
          if (local_1a0[0x1c] == '\0') {
            uStack_11c = DAT_1808acda0;
          }
          else {
            uStack_11c = DAT_1808ac294;
          }
          if (local_1a0[0x1d] == '\0') {
            uStack_118 = DAT_1808acda0;
          }
          else {
            uStack_118 = DAT_1808ac294;
          }
          uStack_114 = DAT_1808ac294;
          if (local_1a0[0x1e] == '\0') {
            uStack_114 = DAT_1808acda0;
          }
          uStack_110 = DAT_1808acda0;
          if (local_1a0[0x1f] != '\0') {
            uStack_110 = DAT_1808ac1b0;
          }
          uStack_108 = DAT_1808ac1b0;
          if (local_1a0[0x20] == '\0') {
            uStack_108 = DAT_1808acda0;
          }
          uStack_10c = uStack_110;
          local_104 = uStack_108;
          uStack_100 = uStack_11c;
        }
        if (*local_198 != '\0') {
          local_e8 = (uint)(byte)local_198[0x14];
          uStack_f0 = (ulonglong)
                      CONCAT16(local_198[0x18],
                               CONCAT15(local_198[0x18],
                                        CONCAT14(local_198[0x17],*(undefined4 *)(local_198 + 0x14)))
                              ) << 8;
        }
        local_e4 = (ushort)(byte)local_1a0[0x21];
        if (*local_198 != '\0') {
          local_e4 = CONCAT11(local_198[0x19] != '\0',local_1a0[0x21]);
        }
        FUN_1802a8510(&local_158);
        FUN_1802aafe0(&local_218);
        if (*pcVar21 == '\0') {
          DAT_1809f3e98 = 0;
        }
        else {
          FUN_18029d320(&local_218);
        }
        FUN_18029ea40(&local_218);
        FUN_18029ee30(&local_218);
        auVar33 = ZEXT416((uint)(float)uStack_1e0);
        fVar39 = local_1e8._4_4_;
        fVar29 = (float)local_1f0;
        fVar37 = local_1f0._4_4_;
      }
LAB_1802a1e52:
      fVar27 = DAT_1809f3ea4;
      fVar41 = DAT_1809f3ea0;
      fVar42 = DAT_1809f3e9c;
      fVar28 = DAT_1808abfd0;
      if (((((DAT_1809f3e9c != fVar39) || (DAT_1809f3ea0 != auVar33._0_4_)) ||
           (DAT_1809f3ea4 != uStack_1e0._4_4_)) &&
          ((((uint)DAT_1809f3e9c & 0x7f800000) != 0x7f800000 &&
           (((uint)DAT_1809f3ea0 & 0x7f800000) != 0x7f800000)))) &&
         (DAT_1809f3ea4 == _DAT_1808abf44)) {
        fVar38 = DAT_1809f3e9c - fVar29;
        fVar40 = (float)FUN_18053f0d0(fVar38 * DAT_1808abfd0 + DAT_1808ac1f4);
        fVar38 = fVar38 - fVar40 * fVar26;
        fVar26 = (float)FUN_18053f0d0((fVar41 - fVar37) * fVar28 + DAT_1808ac1f4);
        fVar28 = (fVar41 - fVar37) - fVar26 * DAT_1808acbd0;
        fVar40 = DAT_1809f3ca8 * DAT_1808acab0 * DAT_1808ac838;
        fVar26 = fVar28 * fVar28 + fVar38 * fVar38;
        if (fVar26 < 0.0) {
          fVar26 = (float)FUN_18051af10();
        }
        else {
          fVar26 = SQRT(fVar26);
        }
        fVar3 = DAT_1808ac1f4;
        fVar2 = DAT_1808abfd0;
        if ((_DAT_1808abf44 < fVar40) && (fVar40 < fVar26)) {
          fVar38 = (fVar38 / fVar26) * fVar40;
          fVar28 = (fVar28 / fVar26) * fVar40;
        }
        local_170[2] = 89.0;
        fVar26 = auVar33._0_4_ - fVar37;
        local_170[0] = -89.0;
        local_170[1] = (fVar38 + fVar29) - (fVar39 - fVar29);
        pfVar23 = local_170;
        if (DAT_1808ace64 <= local_170[1]) {
          pfVar23 = local_170 + 1;
        }
        auVar35._0_4_ = fVar26 * DAT_1808abfd0 + DAT_1808ac1f4;
        auVar35._4_12_ = auVar33._4_12_;
        pfVar20 = local_170 + 2;
        if (local_170[1] <= DAT_1808acaec) {
          pfVar20 = pfVar23;
        }
        fVar29 = *pfVar20;
        local_188 = (undefined1 *)CONCAT44(local_188._4_4_,fVar29);
        fVar40 = (float)FUN_18053f0d0(auVar35._0_8_);
        fVar39 = DAT_1808acbd0;
        fVar37 = (fVar28 + fVar37) - (fVar26 - fVar40 * DAT_1808acbd0);
        fVar26 = (float)FUN_18053f0d0(fVar37 * fVar2 + fVar3);
        fVar37 = fVar37 - fVar26 * fVar39;
        local_228 = (undefined1 *)CONCAT44(local_228._4_4_,fVar37);
        if ((((uint)fVar29 & 0x7f800000) != 0x7f800000) &&
           (((uint)fVar37 & 0x7f800000) != 0x7f800000)) {
          FUN_180013280(lVar1,&local_188);
          FUN_180013280(lVar1 + 4,&local_228);
          _DAT_1809f3c40 = CONCAT44(fVar37,fVar29);
          _DAT_1809f3c38 = CONCAT35(DAT_1809f3c38_4._1_3_,0x100000000);
          _DAT_1809f3c48 = _DAT_1809f3c48 & 0xffffffff00000000;
          fVar41 = DAT_1809f3ea0;
          fVar42 = DAT_1809f3e9c;
          fVar27 = DAT_1809f3ea4;
        }
      }
      _DAT_1809f3c30 = CONCAT44(fVar41,fVar42);
      _DAT_1809f3c38 = CONCAT44(_DAT_1809f3c3c,fVar27);
      FUN_18029f130(&local_218);
      if (cVar6 == '\0') {
        return;
      }
      if (DAT_180957168 == '\0') {
        return;
      }
      if (DAT_1809571b4 == '\0') {
        return;
      }
      FUN_1802a0090(&local_218);
      return;
    }
    if ((uVar4 != 0) && (iVar9 = FUN_180011200(puVar5 + uVar24), iVar9 - 1U < 1000)) {
      if (cVar7 == '\0') {
        pcVar21 = "schema offsets missing";
      }
      else {
        pcVar21 = "csgo_input missing";
        if (cVar6 == '\0') {
          pcVar21 = "layouts not ready";
        }
      }
      goto LAB_1802a21b0;
    }
  }
  pcVar21 = "no local pawn";
LAB_1802a21b0:
  PTR_DAT_1809f3be0 = pcVar21;
  if (DAT_1809f3cb0 != (undefined1 *)0x0) {
    FUN_1802a8b60();
    FUN_18029d2a0();
  }
  DAT_1809f3cb0 = (undefined1 *)0x0;
  return;
}



/* ===== 1802a21e0 FUN_1802a21e0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802a21e0(longlong param_1)

{
  ulonglong uVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  float *pfVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  double dVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  uint local_res8;
  undefined4 uStackX_c;
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  
  if (param_1 != 0) {
    if ((*(longlong *)(param_1 + 0x40) - 0x10000U < 0x7ffffffeffff) &&
       (lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x40),
       lVar8 - 0x10000U < 0x7ffffffeffff)) {
      DAT_1809f3c54 = *(undefined4 *)(lVar8 + 0x1c);
      _DAT_1809f3c58 = *(undefined4 *)(lVar8 + 0x20);
      DAT_1809f3c50 = *(undefined4 *)(lVar8 + 0x18);
      DAT_1809f3c4c = 1;
    }
    uVar1 = *(ulonglong *)(param_1 + 0x60);
    DAT_1809f3f0a = DAT_1809f3f09;
    DAT_1809f3f09 = (byte)uVar1 & 1;
    DAT_1809f3f0c = DAT_1809f3f0b;
    DAT_1809f3f0b = (byte)(uVar1 >> 0xb) & 1;
    bVar9 = (uVar1 & 0x200) != 0;
    bVar10 = (uVar1 & 0x400) != 0;
    bVar11 = (uVar1 & 8) != 0;
    bVar12 = (uVar1 & 0x10) != 0;
    if (((uVar1 & 0x200) == 0) || (DAT_1809f3f11 = 1, DAT_1809f3f0d != '\0')) {
      DAT_1809f3f11 = 0;
    }
    if (((uVar1 & 0x400) == 0) || (DAT_1809f3f12 = 1, DAT_1809f3f0e != '\0')) {
      DAT_1809f3f12 = 0;
    }
    if (((uVar1 & 8) == 0) || (DAT_1809f3f13 = 1, DAT_1809f3f0f != '\0')) {
      DAT_1809f3f13 = 0;
    }
    if (((uVar1 & 0x10) == 0) || (DAT_1809f3f14 = 1, DAT_1809f3f10 != '\0')) {
      DAT_1809f3f14 = 0;
    }
    DAT_1809f3f0d = bVar9;
    DAT_1809f3f0e = bVar10;
    DAT_1809f3f0f = bVar11;
    DAT_1809f3f10 = bVar12;
    if (DAT_1809f3cb0 == 0) {
      _DAT_1809f4980 = 0;
      DAT_1809f4988 = 0;
    }
    else {
      if (DAT_180cd1304 == '\0') {
        FUN_1803a0b60(&local_res8);
        lVar8 = CONCAT44(uStackX_c,local_res8);
      }
      else {
        lVar8 = DAT_181108a00;
      }
      uVar4 = 0;
      if ((lVar8 == 0) || (DAT_180ca09b8 == 0)) {
        iVar3 = 0;
      }
      else {
        iVar3 = FUN_180011200((ulonglong)DAT_180ca09b8 + lVar8);
      }
      if (iVar3 != DAT_1809f498c) {
        DAT_1809f498c = iVar3;
        if (DAT_180ca09c0 == 0) {
          if ((DAT_1809f3cb0 == 0) || (DAT_180ca0a1c == 0)) {
            fVar18 = 0.0;
            fVar17 = 0.0;
          }
          else {
            pfVar5 = (float *)FUN_1800111b0(local_38,DAT_1809f3cb0 + (ulonglong)DAT_180ca0a1c);
            fVar18 = *pfVar5;
            fVar17 = pfVar5[1];
          }
        }
        else {
          pfVar5 = (float *)FUN_1800111b0(local_48,DAT_1809f3cb0 + (ulonglong)DAT_180ca09c0);
          fVar18 = *pfVar5;
          fVar17 = pfVar5[1];
        }
        lVar8 = (longlong)DAT_1809f4984;
        fVar18 = fVar17 * fVar17 + fVar18 * fVar18;
        if (fVar18 < 0.0) {
          fVar18 = (float)FUN_18051af10();
        }
        else {
          fVar18 = SQRT(fVar18);
        }
        uVar7 = (ulonglong)DAT_180ca0a18;
        *(float *)(&DAT_1809f3f80 + lVar8 * 8) = fVar18;
        bVar2 = FUN_180011200(uVar7 + DAT_1809f3cb0);
        (&DAT_1809f3f84)[lVar8 * 8] = bVar2 & 1;
        (&DAT_1809f3f85)[lVar8 * 8] = (byte)(uVar1 >> 1) & 1;
        iVar3 = (DAT_1809f4984 + 1) % 0x140;
        _DAT_1809f4980 = CONCAT44(iVar3,DAT_1809f4980);
        if (DAT_1809f4988 < 0x140) {
          DAT_1809f4988 = DAT_1809f4988 + 1;
        }
        else {
          _DAT_1809f4980 = CONCAT44(iVar3,(DAT_1809f4980 + 1) % 0x140);
        }
      }
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (lVar8 - 0x10000U < 0x7ffffffeffff) {
        if (0x7ffffffefffe < *(longlong *)(lVar8 + 0x40) - 0x10000U) {
          lVar8 = 0;
        }
      }
      else {
        lVar8 = 0;
      }
      dVar13 = (double)FUN_1802a0cf0();
      if (dVar13 < DAT_1809f3f18) {
        *(ulonglong *)(param_1 + 0x70) = *(ulonglong *)(param_1 + 0x70) | 1;
        uVar7 = *(ulonglong *)(param_1 + 0x68) | _UNK_1808ad3a8;
        *(ulonglong *)(param_1 + 0x60) = *(ulonglong *)(param_1 + 0x60) | _DAT_1808ad3a0;
        *(ulonglong *)(param_1 + 0x68) = uVar7;
        if ((DAT_1809f3f28 != '\0') && (0 < *(int *)(param_1 + 0x30))) {
          *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 0x20;
          *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x30) + -1;
        }
        DAT_1809f3f28 = '\0';
      }
      if (dVar13 < DAT_1809f3f20) {
        *(ulonglong *)(param_1 + 0x60) = *(ulonglong *)(param_1 + 0x60) | 0x800;
        *(ulonglong *)(param_1 + 0x68) = *(ulonglong *)(param_1 + 0x68) | 0x800;
        *(ulonglong *)(param_1 + 0x70) = *(ulonglong *)(param_1 + 0x70) | 0x800;
        if ((DAT_1809f3f29 != '\0') && (0 < *(int *)(param_1 + 0x30))) {
          *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x30) + -1;
          *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 0x40;
        }
        DAT_1809f3f29 = '\0';
      }
      if (((DAT_1809f3ee0 != '\0') && (DAT_1809f3f18 <= dVar13)) && ((uVar1 & 1) != 0)) {
        *(ulonglong *)(param_1 + 0x70) = *(ulonglong *)(param_1 + 0x70) & 0xfffffffffffffffe;
        uVar14 = *(uint *)(param_1 + 100) & _UNK_1808adf74;
        uVar15 = *(uint *)(param_1 + 0x68) & _UNK_1808adf78;
        uVar16 = *(uint *)(param_1 + 0x6c) & _UNK_1808adf7c;
        *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) & _DAT_1808adf70;
        *(uint *)(param_1 + 100) = uVar14;
        *(uint *)(param_1 + 0x68) = uVar15;
        *(uint *)(param_1 + 0x6c) = uVar16;
        if (lVar8 != 0) {
          FUN_1801ec5d0(lVar8,1);
        }
      }
      if ((DAT_1809f3f08 != '\0') && (lVar8 != 0)) {
        DAT_1809f3f08 = '\0';
        if ((DAT_180cfe82c != 0) &&
           ((DAT_1809f3cb0 != 0 &&
            (lVar6 = FUN_18000f3a0(DAT_1809f3cb0 + (ulonglong)DAT_180cfe82c), lVar6 != 0)))) {
          if (DAT_180cfe828 != 0) {
            uVar4 = FUN_180011200((ulonglong)DAT_180cfe828 + lVar6);
          }
          if (uVar4 != 0xffffffff) {
            local_res8 = uVar4 & 0x7fff;
            FUN_180013280(lVar8 + 0x68,&local_res8);
            *(uint *)(lVar8 + 0x10) = *(uint *)(lVar8 + 0x10) | 0x400;
          }
        }
      }
    }
  }
  return;
}



/* ===== 1802a2680 FUN_1802a2680 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802a2680(longlong param_1)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  char *pcVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  float *pfVar10;
  undefined8 ****ppppuVar11;
  ulonglong uVar12;
  float *pfVar13;
  undefined2 *puVar14;
  undefined8 *puVar15;
  undefined1 *puVar16;
  size_t sVar17;
  undefined2 *puVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float unaff_XMM8_Da;
  float unaff_XMM10_Da;
  undefined1 auStack_278 [8];
  undefined1 auStack_270 [296];
  char local_148;
  uint local_144;
  undefined4 local_140;
  undefined1 local_13c [4];
  undefined1 local_138;
  undefined7 uStack_137;
  undefined8 uStack_130;
  size_t local_128;
  ulonglong uStack_120;
  undefined8 ****local_118 [3];
  ulonglong local_100;
  ulonglong local_f8;
  
  cVar4 = DAT_18094f760;
  local_f8 = DAT_180919500 ^ (ulonglong)auStack_278;
  DAT_180cfe798 = DAT_180cfe798 + 1;
  local_148 = DAT_18094f760;
  if (DAT_180cfe694 < 40000) {
    local_144 = DAT_1809f3bf0;
    if (DAT_1809f3be8 == '\0') {
      FUN_1802a0e40(&local_144,&local_140);
      if (DAT_1809f3be8 != '\0') goto LAB_1802a2777;
      local_140 = 0;
      cVar3 = FUN_1802a0e40(&local_140,local_13c);
      if (cVar3 == '\0') {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_1800ef270(&DAT_18094f764,local_140);
      }
    }
    else {
LAB_1802a2777:
      uVar5 = DAT_1809f3bec;
    }
    FUN_18029b410(&local_138,uVar5,local_144);
    puVar15 = &DAT_1809f3bb8;
    puVar9 = &DAT_1809f3bb8;
    if (0xf < DAT_1809f3bd0) {
      puVar9 = DAT_1809f3bb8;
    }
    puVar8 = &local_138;
    if (0xf < uStack_120) {
      puVar8 = (undefined1 *)CONCAT71(uStack_137,local_138);
    }
    sVar17 = local_128;
    if (local_128 == DAT_1809f3bc8) {
      if (local_128 != 0) {
        iVar6 = memcmp(puVar8,puVar9,local_128);
        if (iVar6 != 0) goto LAB_1802a27d8;
      }
LAB_1802a287f:
      FUN_18000f890(&local_138);
      goto LAB_1802a2895;
    }
LAB_1802a27d8:
    cVar3 = FUN_18029b0e0();
    if (cVar3 == '\0') goto LAB_1802a287f;
    if (DAT_1809f3bd0 < 0x10) {
LAB_1802a2826:
      uVar12 = uStack_120;
      DAT_1809f3bb8 = (undefined8 *)CONCAT71(uStack_137,local_138);
      uRam00000001809f3bc0 = uStack_130;
      DAT_1809f3bc8 = local_128;
      DAT_1809f3bd0 = uStack_120;
      local_128 = 0;
      uStack_120 = 0xf;
      local_138 = 0;
      if (0xf < uVar12) {
        puVar15 = DAT_1809f3bb8;
      }
      FUN_1802b2870("wl_legit.log",&DAT_180741350,puVar15);
      DAT_180cfe694 = DAT_180cfe694 + 1;
      goto LAB_1802a287f;
    }
    uVar12 = DAT_1809f3bd0 + 1;
    puVar9 = DAT_1809f3bb8;
    if (uVar12 < 0x1000) {
LAB_1802a2821:
      thunk_FUN_1803d64e0(puVar9,uVar12);
      goto LAB_1802a2826;
    }
    puVar9 = (undefined8 *)DAT_1809f3bb8[-1];
    if ((ulonglong)((longlong)DAT_1809f3bb8 + (-8 - (longlong)puVar9)) < 0x20) {
      uVar12 = DAT_1809f3bd0 + 0x28;
      goto LAB_1802a2821;
    }
    pcVar2 = (code *)swi(0x29);
    (*pcVar2)(5);
    puVar16 = auStack_270;
LAB_1802a28f0:
    cVar4 = (char)puVar15;
    puVar8 = puVar16;
    if (sVar17 < *(longlong *)(uVar12 + 0x40) - 0x10000U) {
      uVar12 = 0;
    }
LAB_1802a2902:
    if ((uVar12 != 0) && (lVar1 = *(longlong *)(uVar12 + 0x40), lVar1 - 0x10000U <= sVar17)) {
      unaff_XMM8_Da = *(float *)(lVar1 + 0x18);
      unaff_XMM10_Da = *(float *)(lVar1 + 0x1c);
      cVar4 = '\x01';
    }
LAB_1802a2925:
    fVar20 = DAT_1808acda0;
    pfVar10 = &DAT_1809f3c18;
    if (DAT_1809f3c3c != '\0') {
      pfVar10 = &DAT_1809f3c40;
    }
    pfVar13 = &DAT_1809f3c1c;
    if (DAT_1809f3c3c != '\0') {
      pfVar13 = &DAT_1809f3c44;
    }
    if ((DAT_1809f3c4c == '\0') || (DAT_1809f3be8 == '\0')) {
      fVar19 = DAT_1808acda0;
    }
    else {
      fVar21 = DAT_1809f3c50 - (DAT_1809f3c24 + *pfVar10);
      fVar19 = *pfVar13;
      *(undefined8 *)(puVar8 + -8) = 0x1802a29b0;
      fVar19 = (float)FUN_180516750(DAT_1809f3c54 - (DAT_1809f3c28 + fVar19));
      fVar19 = fVar19 * fVar19 + fVar21 * fVar21;
      if (fVar19 < 0.0) {
        *(undefined8 *)(puVar8 + -8) = 0x1802a29db;
        fVar19 = (float)FUN_18051af10();
      }
      else {
        fVar19 = SQRT(fVar19);
      }
    }
    if ((DAT_1809f3c4c != '\0') && (cVar4 != '\0')) {
      fVar21 = unaff_XMM8_Da - DAT_1809f3c50;
      *(undefined8 *)(puVar8 + -8) = 0x1802a2a15;
      fVar20 = (float)FUN_180516750(unaff_XMM10_Da - DAT_1809f3c54);
      fVar20 = fVar20 * fVar20 + fVar21 * fVar21;
      if (fVar20 < 0.0) {
        *(undefined8 *)(puVar8 + -8) = 0x1802a2a37;
        fVar20 = (float)FUN_18051af10();
      }
      else {
        fVar20 = SQRT(fVar20);
      }
    }
    *(undefined8 *)(puVar8 + -8) = 0x1802a2a51;
    FUN_1800ef330(local_118,&DAT_18094f764,DAT_1809f3bec);
    local_144 = (uint)(DAT_1809f3c3c != '\0');
    if (((DAT_1809f3be9 == '\0') || (PTR_DAT_1809f50d8 == (undefined *)0x0)) ||
       (puVar14 = (undefined2 *)PTR_DAT_1809f50d8, *PTR_DAT_1809f50d8 == '\0')) {
      puVar14 = &DAT_1806eb0d8;
    }
    if (DAT_1809f3c00 == 0) {
      pcVar7 = "assisted";
    }
    else if (DAT_1809f3c00 == 1) {
      pcVar7 = "on attack";
    }
    else if (DAT_1809f3c00 == 2) {
      pcVar7 = "always on";
    }
    else {
      pcVar7 = "?";
    }
    ppppuVar11 = local_118;
    if (0xf < local_100) {
      ppppuVar11 = local_118[0];
    }
    if ((PTR_DAT_1809f3be0 == (undefined *)0x0) ||
       (puVar18 = (undefined2 *)PTR_DAT_1809f3be0, *PTR_DAT_1809f3be0 == '\0')) {
      puVar18 = &DAT_1806eb0d8;
    }
    if (param_1 == 0) {
      uVar5 = 0xffffffff;
    }
    else {
      uVar5 = *(undefined4 *)(param_1 + 8);
    }
    *(double *)(puVar8 + 0x120) = (double)fVar20;
    *(double *)(puVar8 + 0x118) = (double)unaff_XMM10_Da;
    *(double *)(puVar8 + 0x110) = (double)unaff_XMM8_Da;
    *(double *)(puVar8 + 0x108) = (double)fVar19;
    *(double *)(puVar8 + 0x100) = (double)DAT_1809f3c54;
    *(double *)(puVar8 + 0xf8) = (double)DAT_1809f3c50;
    *(double *)(puVar8 + 0xf0) = (double)DAT_1809f3c44;
    *(double *)(puVar8 + 0xe8) = (double)DAT_1809f3c40;
    *(uint *)(puVar8 + 0xe0) = local_144;
    *(double *)(puVar8 + 0xd8) = (double)DAT_1809f3c34;
    *(double *)(puVar8 + 0xd0) = (double)DAT_1809f3c30;
    *(double *)(puVar8 + 200) = (double)DAT_1809f3c28;
    *(double *)(puVar8 + 0xc0) = (double)DAT_1809f3c24;
    *(double *)(puVar8 + 0xb8) = (double)DAT_1809f3c1c;
    *(double *)(puVar8 + 0xb0) = (double)DAT_1809f3c18;
    *(double *)(puVar8 + 0xa8) = (double)DAT_1809f3bf8;
    *(undefined4 *)(puVar8 + 0xa0) = DAT_1809f3bf4;
    *(undefined2 **)(puVar8 + 0x98) = puVar14;
    *(uint *)(puVar8 + 0x90) = (uint)(DAT_1809f3bb4 != '\0');
    *(double *)(puVar8 + 0x88) = (double)DAT_1809f3c14;
    *(undefined4 *)(puVar8 + 0x80) = DAT_1809f3c10;
    *(undefined4 *)(puVar8 + 0x78) = DAT_1809f3c0c;
    *(undefined4 *)(puVar8 + 0x70) = DAT_1809f3c08;
    *(undefined4 *)(puVar8 + 0x68) = DAT_1809f3c04;
    *(char **)(puVar8 + 0x60) = pcVar7;
    *(uint *)(puVar8 + 0x58) = (uint)(DAT_1809f3bfc != '\0');
    *(uint *)(puVar8 + 0x50) = DAT_1809f3bf0;
    *(undefined8 *****)(puVar8 + 0x48) = ppppuVar11;
    *(undefined4 *)(puVar8 + 0x40) = DAT_1809f3bec;
    *(uint *)(puVar8 + 0x38) = (uint)(DAT_1809f3be9 != '\0');
    *(uint *)(puVar8 + 0x30) = (uint)(DAT_180920fac != '\0');
    *(uint *)(puVar8 + 0x28) = (uint)(DAT_18095723c != '\0');
    *(uint *)(puVar8 + 0x20) = (uint)(local_148 != '\0');
    *(undefined8 *)(puVar8 + -8) = 0x1802a2d1d;
    FUN_1802b2870("wl_legit.log",
                  "cmd %d | %s | cfg legit %d rage %d aa %d | en %d grp %d \"%s\" def %d aim %d act %s | cand %d vis %d fov %d tgt %d k %.2f | trig %d %s | tick %d %.3f | raw %.2f %.2f mouse %+.3f %+.3f | desired %.2f %.2f | wrote %d %.2f %.2f | built %.2f %.2f dev %.3f | sent %.2f %.2f dev %.3f\n"
                  ,uVar5,puVar18);
    DAT_180cfe694 = DAT_180cfe694 + 1;
    DAT_1809f3c4c = 0;
    *(undefined8 *)(puVar8 + -8) = 0x1802a2d33;
    FUN_18000f890(local_118);
  }
  else {
LAB_1802a2895:
    puVar16 = auStack_278;
    puVar8 = auStack_278;
    if (((cVar4 != '\0') || ((char)DAT_180cfe798 == '\0')) && (DAT_180cfe694 < 40000)) {
      cVar4 = FUN_18029b0e0();
      if (cVar4 != '\0') {
        unaff_XMM8_Da = 0.0;
        unaff_XMM10_Da = 0.0;
        puVar15 = (undefined8 *)0x0;
        cVar4 = '\0';
        puVar8 = auStack_278;
        if (param_1 != 0) {
          uVar12 = *(ulonglong *)(param_1 + 0x40);
          sVar17 = 0x7ffffffefffe;
          if (uVar12 - 0x10000 < 0x7ffffffeffff) goto LAB_1802a28f0;
          uVar12 = 0;
          puVar8 = auStack_278;
          cVar4 = '\0';
          goto LAB_1802a2902;
        }
        goto LAB_1802a2925;
      }
    }
    DAT_1809f3c4c = 0;
  }
  *(undefined8 *)(puVar8 + -8) = 0x1802a2d48;
  return;
}



/* ===== 1802a2da0 FUN_1802a2da0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802a2da0(longlong param_1)

{
  ulonglong uVar1;
  bool bVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  char cVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  longlong lVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  double dVar17;
  longlong lVar18;
  char *pcVar19;
  ulonglong uVar20;
  char *pcVar21;
  undefined8 uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  char *pcVar25;
  char *pcVar26;
  undefined2 *puVar27;
  ulonglong *puVar28;
  longlong lVar29;
  bool bVar30;
  float fVar31;
  float fVar32;
  double dVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  char local_1a8;
  int local_1a4;
  uint local_19c;
  ulonglong local_198;
  ulonglong *local_190;
  ulonglong local_188;
  float local_180;
  ulonglong local_178;
  longlong local_170;
  longlong local_168;
  int local_160;
  ulonglong local_158;
  ulonglong local_150;
  double local_148;
  ulonglong local_140;
  longlong local_138;
  ulonglong local_130;
  ulonglong local_128;
  longlong local_120;
  uint local_118;
  undefined8 local_114;
  undefined8 uStack_10c;
  undefined8 local_104;
  undefined8 uStack_fc;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  ulonglong local_e8;
  char *local_e0 [23];
  
  if (param_1 == 0) {
    return;
  }
  local_170 = param_1;
  FUN_18029a770();
  lVar18 = *(longlong *)(param_1 + 0x40);
  if (lVar18 - 0x10000U < 0x7ffffffeffff) {
    if (0x7ffffffefffe < *(longlong *)(lVar18 + 0x40) - 0x10000U) {
      lVar18 = 0;
    }
  }
  else {
    lVar18 = 0;
  }
  local_138 = *(longlong *)(param_1 + 8);
  uVar20 = DAT_180ceb378;
  if (DAT_1809eeb00 != local_138) {
    uVar20 = *(ulonglong *)(param_1 + 0x60);
  }
  if ((DAT_1809f3c60 < 0) || (bVar30 = true, DAT_1809f3c60 != local_138 + -1)) {
    bVar30 = false;
  }
  local_150 = uVar20;
  local_168 = lVar18;
  if (DAT_180cd1304 == '\0') {
    FUN_1803a0b60(&local_190);
    DAT_181108a00 = local_190;
    local_190 = (ulonglong *)FUN_1803a0c50(&local_190);
    DAT_180cd1304 = '\x01';
  }
  else {
    local_190 = DAT_1811089f8;
  }
  puVar28 = local_190;
  fVar32 = DAT_1808ac34c;
  local_120 = 0;
  local_118 = 0;
  local_f4 = 0;
  local_f0 = 0x3f800000;
  local_ec = 0x437a0000;
  local_114 = 0;
  uStack_10c = 0;
  local_104 = 0;
  uStack_fc = 0;
  DAT_1811089f8 = local_190;
  if (local_190 == (ulonglong *)0x0) {
LAB_1802a2f29:
    bVar2 = false;
    local_e8 = 0;
    lVar29 = local_120;
  }
  else {
    cVar8 = FUN_1801ec0c0(&local_190,&local_120);
    lVar29 = local_120;
    if (cVar8 == '\0') goto LAB_1802a2f29;
    bVar2 = true;
    local_e8 = 0;
    if (DAT_180ca0990 != 0) {
      local_e8 = FUN_18000f3a0((ulonglong)DAT_180ca0990 + 8 + local_120);
    }
  }
  local_140 = uVar20;
  if (bVar30) {
    local_e8 = DAT_1809f3c70;
    local_140 = DAT_1809f3c68;
  }
  local_178 = 0;
  if (bVar30) {
    local_178 = DAT_1809f3c78;
  }
  local_158 = 0;
  if (bVar30) {
    local_158 = DAT_1809f3c80;
  }
  local_160 = DAT_180cfe888;
  DAT_180cfe888 = 0;
  dVar33 = (double)FUN_1802a0cf0();
  if ((DAT_1809f3c98 != 0.0) && (DAT_1809f3c98 < dVar33)) {
    DAT_1809f3c98 = 0.0;
  }
  uVar20 = 0;
  if (DAT_1809f3ed4 != 0) {
    uVar20 = (ulonglong)(DAT_1809f3ed4 & 1) << 9;
    uVar24 = uVar20 | 0x400;
    if ((DAT_1809f3ed4 & 2) == 0) {
      uVar24 = uVar20;
    }
    uVar20 = uVar24 | 8;
    if ((DAT_1809f3ed4 & 4) == 0) {
      uVar20 = uVar24;
    }
    if ((DAT_1809f3ed4 & 8) != 0) {
      uVar20 = uVar20 | 0x10;
    }
  }
  uVar24 = 0;
  local_198 = 0;
  if (DAT_1809f3c98 != 0.0) {
    uVar24 = 2;
    uVar20 = uVar20 | 2;
    local_198 = 2;
  }
  local_19c = 0;
  local_e0[0] = (char *)0x0;
  local_e0[1] = (undefined1 *)0x0;
  local_148 = dVar33;
  if ((((!bVar2) || (puVar28 == (ulonglong *)0x0)) || (DAT_180ca09f0 == 0)) ||
     (((iVar9 = FUN_180011200((ulonglong)DAT_180ca09f0 + (longlong)puVar28), 999 < iVar9 - 1U ||
       (DAT_180ca0a0c == 0)) ||
      ((uVar23 = (ulonglong)DAT_180ca0a10, DAT_180ca0a10 == 0 ||
       (lVar12 = FUN_18000f3a0((ulonglong)DAT_180ca0a0c + (longlong)puVar28), lVar12 == 0)))))) {
LAB_1802a38c0:
    local_180 = 0.0;
LAB_1802a38c3:
    DAT_1809f3c94 = 0;
  }
  else {
    uVar10 = FUN_180011200(lVar12 + uVar23);
    plVar13 = (longlong *)FUN_1803a0940(&local_190,uVar10);
    if (*plVar13 == 0) goto LAB_1802a38c0;
    bVar30 = false;
    if (lVar18 != 0) {
      bVar2 = false;
      uVar11 = local_118 & 1;
      uVar3 = local_118 & 1;
      uVar5 = local_118 & 1;
      if ((DAT_180cfe838 == 0) || (puVar28 == (ulonglong *)0x0)) {
        local_1a8 = '\0';
      }
      else {
        local_1a8 = FUN_180011220((ulonglong)DAT_180cfe838 + (longlong)puVar28);
      }
      if ((DAT_180cfe834 == 0) || (lVar29 == 0)) {
        local_1a4 = 0;
      }
      else {
        local_1a4 = FUN_180011200(lVar29 + (ulonglong)DAT_180cfe834);
      }
      local_190 = (ulonglong *)(ulonglong)((uint)local_150 & 2);
      local_188 = (ulonglong)((uint)local_150 & 0x618);
      fVar32 = *(float *)(*(longlong *)(lVar18 + 0x40) + 0x1c);
      local_180 = fVar32;
      if (DAT_180ca09c0 != 0) {
        puVar14 = (undefined8 *)
                  FUN_1800111b0(&local_130,(ulonglong)DAT_180ca09c0 + (longlong)puVar28);
        local_114 = *puVar14;
        uStack_10c = CONCAT44(uStack_10c._4_4_,*(undefined4 *)(puVar14 + 1));
      }
      if (DAT_180920ce8 != '\0') {
        if (local_190 != (ulonglong *)0x0) {
          if (local_1a8 == '\x02') {
            if (lVar29 != 0) {
              if (local_1a4 < 3) {
                if ((dVar33 < DAT_180cfe7a0) || (dVar33 < DAT_180cfe890)) {
                  uVar22 = 0;
                }
                else {
                  uVar22 = 1;
                }
                iVar9 = FUN_1801ff820(local_170,uVar22);
                if (iVar9 != -2) {
                  if (DAT_180cfe7a0 <= dVar33) {
                    if (DAT_180cfe890 <= dVar33) {
                      if (-1 < iVar9) {
                        uVar20 = uVar20 | 2;
                        uVar24 = 2;
                        if (iVar9 == 1) {
                          fVar38 = (float)FUN_18029bdd0(0);
                          dVar17 = DAT_1808ac410;
                          dVar33 = (double)fVar38 + dVar33 + DAT_1808ac410;
                          DAT_180cfe7a0 = dVar33;
                          fVar38 = (float)FUN_18029bdd0(0);
                          local_19c = 1;
                          local_e0[0] = 
                          "bunny hop: press at 0 jumps -> press 80 ms, then release 80 ms";
                          DAT_180cfe890 = (double)fVar38 + dVar33 + dVar17;
                          local_198 = uVar24;
                          dVar33 = local_148;
                        }
                        else {
                          uVar24 = 0;
                          local_198 = uVar24;
                        }
                      }
                    }
                    else {
                      uVar20 = uVar20 | 2;
                      local_198 = 0;
                      uVar24 = 0;
                    }
                  }
                  else {
                    uVar24 = 2;
                    uVar20 = uVar20 | 2;
                    local_198 = 2;
                  }
                }
              }
            }
          }
        }
      }
      dVar17 = DAT_1809f3c88;
      if (DAT_180920da8 != '\0') {
        if (uVar11 == 0) {
          if (local_1a8 == '\x02') {
            if (local_188 == 0) {
              if (local_1a4 < 3) {
                fVar38 = (float)local_160;
                if (fVar38 == 0.0) {
                  if (DAT_1809f3c88 <= dVar33) goto LAB_1802a35ad;
                }
                fVar35 = (float)local_114;
                fVar36 = local_114._4_4_;
                fVar34 = local_114._4_4_ * local_114._4_4_ + (float)local_114 * (float)local_114 +
                         0.0;
                if (fVar34 < 0.0) {
                  fVar34 = (float)FUN_18051af10(fVar34);
                }
                else {
                  fVar34 = SQRT(fVar34);
                }
                fVar7 = DAT_1808acbd0;
                if (fVar34 <= 0.0) {
                  fVar35 = 0.0;
                  fVar36 = 0.0;
                }
                else {
                  fVar35 = fVar35 / fVar34;
                  fVar36 = fVar36 / fVar34;
                }
                if ((fVar35 == 0.0) && (fVar36 == 0.0)) {
                  fVar35 = 0.0;
                }
                else {
                  fVar35 = (float)FUN_180516b00(fVar36);
                  fVar35 = (fVar35 * DAT_1808acb58) / DAT_1808ac680;
                  if (fVar35 < 0.0) {
                    fVar35 = fVar35 + fVar7;
                  }
                }
                fVar6 = DAT_1808acaf4;
                fVar34 = DAT_1808ac1f4;
                fVar36 = DAT_1808abfd4;
                fVar37 = (fVar35 - fVar32) + DAT_1808acaf4;
                fVar31 = (float)FUN_18053f0d0(fVar37 * DAT_1808abfd4 + DAT_1808ac1f4);
                fVar37 = (fVar37 - fVar31 * fVar7) + DAT_1808aca68;
                fVar31 = (float)FUN_18053f0d0(fVar37 * fVar36 + fVar34);
                fVar37 = fVar37 - fVar31 * fVar7;
                if (fVar37 < 0.0) {
                  fVar37 = fVar37 + fVar7;
                }
                fVar35 = (fVar35 - fVar32) - fVar6;
                uVar15 = (ulonglong)((int)(fVar37 / fVar6) * 2 & 7);
                uVar23 = *(ulonglong *)(&DAT_180652270 + uVar15 * 0x10);
                uVar15 = *(ulonglong *)(&DAT_180652278 + uVar15 * 0x10);
                fVar32 = (float)FUN_18053f0d0(fVar35 * fVar36 + fVar34);
                fVar35 = (fVar35 - fVar32 * fVar7) + DAT_1808aca68;
                fVar32 = (float)FUN_18053f0d0(fVar35 * fVar36 + fVar34);
                fVar35 = fVar35 - fVar32 * fVar7;
                if (fVar35 < 0.0) {
                  fVar35 = fVar35 + fVar7;
                }
                uVar16 = (ulonglong)((int)(fVar35 / fVar6) * 2 & 7);
                uVar1 = *(ulonglong *)(&DAT_180652270 + uVar16 * 0x10);
                uVar16 = *(ulonglong *)(&DAT_180652278 + uVar16 * 0x10);
                cVar8 = fVar38 < 0.0;
                if (local_148 < dVar17) {
                  cVar8 = DAT_1809f3c90;
                }
                if (uVar23 != 0) {
                  uVar20 = uVar20 | uVar23;
                  if (cVar8 == '\0') {
                    uVar24 = ~uVar23 & uVar24;
                  }
                  else {
                    uVar24 = uVar23 | uVar24;
                  }
                  local_198 = uVar24;
                }
                if (uVar15 != 0) {
                  uVar20 = uVar20 | uVar15;
                  if (cVar8 == '\0') {
                    uVar24 = ~uVar15 & uVar24;
                  }
                  else {
                    uVar24 = uVar15 | uVar24;
                  }
                  local_198 = uVar24;
                }
                if (uVar1 != 0) {
                  uVar20 = uVar20 | uVar1;
                  if (cVar8 == '\0') {
                    uVar24 = uVar1 | uVar24;
                  }
                  else {
                    uVar24 = ~uVar1 & uVar24;
                  }
                  local_198 = uVar24;
                }
                if (uVar16 != 0) {
                  uVar20 = uVar20 | uVar16;
                  if (cVar8 == '\0') {
                    uVar24 = uVar16 | uVar24;
                  }
                  else {
                    uVar24 = ~uVar16 & uVar24;
                  }
                  local_198 = uVar24;
                }
                bVar2 = true;
                if (fVar38 != 0.0) {
                  DAT_1809f3c88 = local_148 + DAT_1808ac3f0;
                  DAT_1809f3c90 = fVar38 < 0.0;
                }
                pcVar21 = "air strafe right";
                if (cVar8 != '\0') {
                  pcVar21 = "air strafe left";
                }
                local_e0[local_19c] = pcVar21;
                local_19c = local_19c + 1;
                fVar32 = local_180;
                dVar33 = local_148;
              }
            }
          }
        }
      }
LAB_1802a35ad:
      if (DAT_1809f3ed8 == '\0') {
        bVar4 = false;
        if (DAT_180920dc6 != '\0') goto LAB_1802a35dd;
      }
      else {
        bVar4 = true;
LAB_1802a35dd:
        if ((((uVar3 != 0) && (local_1a8 == '\x02')) && ((bVar4 || (local_188 == 0)))) &&
           ((local_190 == (ulonglong *)0x0 && (local_1a4 < 3)))) {
          local_130 = 0;
          local_128 = 0;
          cVar8 = FUN_18029f560(puVar28,&local_120,fVar32,&local_130);
          if (cVar8 != '\0') {
            pcVar21 = "standalone quick stop";
            bVar2 = true;
            uVar23 = local_130 | uVar24;
            if (local_130 == 0) {
              uVar23 = uVar24;
            }
            uVar24 = local_130 | uVar20;
            if (local_130 == 0) {
              uVar24 = uVar20;
            }
            if (bVar4) {
              pcVar21 = "aimbot quick stop";
            }
            local_e0[local_19c] = pcVar21;
            local_19c = local_19c + 1;
            uVar20 = local_128 | uVar24;
            if (local_128 == 0) {
              uVar20 = uVar24;
            }
            uVar24 = local_128 | uVar23;
            if (local_128 == 0) {
              uVar24 = uVar23;
            }
            local_198 = uVar24;
          }
        }
      }
      if (((DAT_180920dc7 != '\0') && (local_1a8 == '\x02')) && (!bVar2)) {
        uVar23 = ~local_140 & local_150;
        if ((uVar23 >> 9 & 1) != 0) {
          if ((local_150 & 0x400) != 0) {
            DAT_1809f3c94 = DAT_1809f3c94 & 0xfffffffe | 2;
          }
        }
        if ((uVar23 >> 10 & 1) != 0) {
          if ((local_150 & 0x200) != 0) {
            DAT_1809f3c94 = DAT_1809f3c94 & 0xfffffffd | 1;
          }
        }
        if ((uVar23 & 8) != 0) {
          if ((local_150 & 0x10) != 0) {
            DAT_1809f3c94 = DAT_1809f3c94 & 0xfffffffb | 8;
          }
        }
        if ((uVar23 & 0x10) != 0) {
          if ((local_150 & 8) != 0) {
            DAT_1809f3c94 = DAT_1809f3c94 & 0xfffffff7 | 4;
          }
        }
        if ((DAT_1809f3c94 & 1) != 0) {
          if (((local_150 & 0x200) == 0) || ((local_150 & 0x400) == 0)) {
            DAT_1809f3c94 = DAT_1809f3c94 & 0xfffffffe;
          }
          else {
            uVar20 = uVar20 | 0x200;
            uVar24 = uVar24 & 0xfffffffffffffdff;
            local_198 = uVar24;
          }
        }
        if ((DAT_1809f3c94 & 2) != 0) {
          if (((local_150 & 0x400) == 0) || ((local_150 & 0x200) == 0)) {
            DAT_1809f3c94 = DAT_1809f3c94 & 0xfffffffd;
          }
          else {
            uVar20 = uVar20 | 0x400;
            uVar24 = uVar24 & 0xfffffffffffffbff;
            local_198 = uVar24;
          }
        }
        if ((DAT_1809f3c94 & 4) != 0) {
          if (((local_150 & 8) == 0) || ((local_150 & 0x10) == 0)) {
            DAT_1809f3c94 = DAT_1809f3c94 & 0xfffffffb;
          }
          else {
            uVar20 = uVar20 | 8;
            uVar24 = uVar24 & 0xfffffffffffffff7;
            local_198 = uVar24;
          }
        }
        if ((DAT_1809f3c94 & 8) != 0) {
          if (((local_150 & 0x10) == 0) || ((local_150 & 8) == 0)) {
            DAT_1809f3c94 = DAT_1809f3c94 & 0xfffffff7;
          }
          else {
            uVar20 = uVar20 | 0x10;
            uVar24 = uVar24 & 0xffffffffffffffef;
            local_198 = uVar24;
          }
        }
        bVar30 = true;
      }
      if ((((DAT_180920dc8 != '\0') && (local_1a8 == '\x02')) && (uVar5 != 0)) &&
         ((local_190 == (ulonglong *)0x0 && (DAT_1809f3c98 == 0.0)))) {
        if ((DAT_1808ac000 <= (float)((uint)(float)local_114 & (uint)DAT_1808ade90)) ||
           ((DAT_1808ac000 <= (float)((uint)local_114._4_4_ & (uint)DAT_1808ade90) ||
            (local_188 != 0)))) {
          cVar8 = FUN_1801fef00(local_170);
          if (cVar8 != '\0') {
            fVar32 = (float)FUN_18029bdd0(0);
            uVar23 = (ulonglong)local_19c;
            uVar24 = uVar24 | 2;
            uVar20 = uVar20 | 2;
            local_19c = local_19c + 1;
            local_e0[uVar23] = "edge jump";
            DAT_1809f3c98 = (double)(fVar32 + DAT_1808ac0a0) + dVar33;
            local_198 = uVar24;
          }
        }
      }
      fVar32 = DAT_1808ac34c;
    }
    local_180 = (float)local_19c;
    if (!bVar30) goto LAB_1802a38c3;
  }
  uVar23 = local_140;
  lVar29 = local_168;
  fVar38 = local_180;
  local_1a4 = 0;
  if (lVar18 != 0) {
    local_190 = &DAT_1806522f0;
    puVar28 = &DAT_1806522f0;
    local_148 = *(double *)(local_170 + 0x60);
    uVar24 = *(ulonglong *)(local_170 + 0x68);
    bVar30 = ((ulonglong)local_148 & 2) != 0;
    uVar11 = (uint)bVar30;
    local_188 = CONCAT44(local_188._4_4_,(uint)bVar30);
    uVar15 = local_178;
    do {
      uVar1 = *puVar28;
      if ((uVar15 & uVar1) != 0) {
        if ((uVar20 & uVar1) == 0) {
          if ((((uVar1 & local_158) != 0) == ((uVar23 & uVar1) != 0)) ||
             ((uVar1 == 2 && (((uVar1 & local_158) != 0) == uVar11)))) {
            uVar15 = local_178;
          }
          else {
            cVar8 = FUN_18029f470(lVar29,uVar1);
            uVar15 = local_178;
            uVar11 = (uint)local_188;
            if (cVar8 != '\0') {
              uVar24 = uVar24 | uVar1;
              local_1a4 = local_1a4 + 1;
            }
          }
        }
      }
      puVar28 = puVar28 + 1;
    } while (puVar28 != (ulonglong *)&DAT_180652318);
    puVar28 = local_190;
    dVar33 = local_148;
    do {
      uVar23 = *puVar28;
      if ((uVar20 & uVar23) != 0) {
        FUN_1801ec5d0(local_168,uVar23);
        if ((((uVar23 & local_198) != 0) == ((local_e8 & uVar23) != 0)) ||
           (cVar8 = FUN_18029f470(local_168,uVar23), cVar8 == '\0')) {
          uVar24 = uVar24 & ~uVar23;
        }
        else {
          uVar24 = uVar24 | uVar23;
        }
        *(ulonglong *)(local_170 + 0x70) = *(ulonglong *)(local_170 + 0x70) & ~uVar23;
        dVar17 = (double)(~uVar23 & (ulonglong)dVar33);
        dVar33 = (double)(uVar23 | (ulonglong)dVar33);
        if ((uVar23 & local_198) == 0) {
          dVar33 = dVar17;
        }
      }
      puVar28 = puVar28 + 1;
    } while (puVar28 != (ulonglong *)&DAT_180652318);
    *(double *)(local_170 + 0x60) = dVar33;
    *(ulonglong *)(local_170 + 0x68) = uVar24;
    if ((uVar20 & 0x18) != 0) {
      if (((ulonglong)dVar33 & 8) == 0) {
        fVar35 = 0.0;
      }
      else {
        fVar35 = fVar32;
      }
      if (((ulonglong)dVar33 & 0x10) == 0) {
        fVar36 = 0.0;
      }
      else {
        fVar36 = fVar32;
      }
      *(float *)(local_168 + 0x58) = fVar35 - fVar36;
      if (fVar35 - fVar36 == 0.0) {
        *(uint *)(local_168 + 0x10) = *(uint *)(local_168 + 0x10) & 0xffffffbf;
      }
      else {
        *(uint *)(local_168 + 0x10) = *(uint *)(local_168 + 0x10) | 0x40;
      }
    }
    uVar24 = local_198;
    if ((uVar20 & 0x600) != 0) {
      if (((ulonglong)dVar33 >> 9 & 1) == 0) {
        fVar35 = 0.0;
      }
      else {
        fVar35 = fVar32;
      }
      if (((ulonglong)dVar33 >> 10 & 1) == 0) {
        fVar32 = 0.0;
      }
      *(float *)(local_168 + 0x5c) = fVar35 - fVar32;
      if (fVar35 - fVar32 == 0.0) {
        uVar11 = *(uint *)(local_168 + 0x10) & 0xffffff7f;
      }
      else {
        uVar11 = *(uint *)(local_168 + 0x10) | 0x80;
      }
      *(uint *)(local_168 + 0x10) = uVar11;
    }
  }
  uVar15 = local_158;
  uVar23 = local_178;
  bVar30 = false;
  if ((((fVar38 == 0.0) && (local_1a4 < 1)) && (uVar20 == local_178)) && (uVar24 == local_158))
  goto LAB_1802a3c09;
  if ((DAT_1809f351c == 2) ||
     (((DAT_1809f351c == 1 && (lVar18 = FUN_180266660(), lVar18 != 0)) &&
      ((DAT_180cf9f80 != 0 &&
       (cVar8 = FUN_180011220((ulonglong)DAT_180cf9f80 + lVar18), cVar8 != '\0')))))) {
    bVar30 = true;
  }
  lVar18 = local_138;
  uVar1 = local_150;
  pcVar21 = "legit conflict";
  if (bVar30) {
    pcVar21 = "safe mode";
  }
  pcVar25 = "";
  puVar27 = (undefined2 *)&DAT_18058b643;
  if (fVar38 != 0.0) {
    puVar27 = &DAT_1806efc00;
  }
  if ((uint)fVar38 < 2) {
    pcVar26 = "";
    pcVar19 = &DAT_18058b643;
    if (1 < (uint)fVar38) {
      pcVar26 = ", ";
    }
    if (fVar38 != 0.0) goto LAB_1802a3ba9;
  }
  else {
    if (1 < (uint)local_180) {
      pcVar25 = ", ";
    }
    pcVar19 = local_e0[1];
    pcVar26 = pcVar25;
LAB_1802a3ba9:
    pcVar25 = local_e0[0];
  }
  FUN_1801ec960("[legit move] cmd %lld | %s%s%s%s| forced %llx state %llx (was %llx/%llx) restored %d | phys %llx sent %llx | mouse %ld | %s"
                ,local_138,pcVar25,pcVar26,pcVar19,puVar27,uVar20,uVar24,uVar23,uVar15,local_1a4,
                local_150,*(undefined8 *)(local_170 + 0x60),local_160,pcVar21);
  local_150 = uVar1;
  local_138 = lVar18;
LAB_1802a3c09:
  DAT_1809f3c80 = uVar24;
  DAT_1809f3c78 = uVar20;
  DAT_1809f3c70 = *(undefined8 *)(local_170 + 0x60);
  DAT_1809f3c68 = local_150;
  DAT_1809f3c60 = local_138;
  return;
}



/* ===== 1802a3c70 FUN_1802a3c70 ===== */

uint FUN_1802a3c70(float param_1,float param_2,float param_3,float param_4)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float local_res8 [2];
  float local_res10 [2];
  float local_res18 [2];
  float local_res20 [2];
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c [9];
  
  local_44 = 1.0;
  local_48 = 0.0;
  local_3c = 1.0;
  local_40 = 0.0;
  local_34 = 1.0;
  local_38 = 0.0;
  local_2c[0] = 1.0;
  pfVar5 = &local_48;
  if (0.0 <= param_1) {
    pfVar5 = local_res8;
  }
  local_30 = 0.0;
  pfVar1 = &local_44;
  if (param_1 <= DAT_1808ac34c) {
    pfVar1 = pfVar5;
  }
  pfVar5 = &local_40;
  if (0.0 <= param_2) {
    pfVar5 = local_res10;
  }
  pfVar2 = &local_3c;
  if (param_2 <= DAT_1808ac34c) {
    pfVar2 = pfVar5;
  }
  pfVar5 = &local_38;
  if (0.0 <= param_3) {
    pfVar5 = local_res18;
  }
  pfVar3 = &local_34;
  if (param_3 <= DAT_1808ac34c) {
    pfVar3 = pfVar5;
  }
  pfVar5 = &local_30;
  if (0.0 <= param_4) {
    pfVar5 = local_res20;
  }
  pfVar4 = local_2c;
  if (param_4 <= DAT_1808ac34c) {
    pfVar4 = pfVar5;
  }
  return (((int)(*pfVar4 * DAT_1808acb94 + DAT_1808ac1f4) << 8 |
          (int)(*pfVar3 * DAT_1808acb94 + DAT_1808ac1f4)) << 8 |
         (int)(*pfVar2 * DAT_1808acb94 + DAT_1808ac1f4)) << 8 |
         (int)(*pfVar1 * DAT_1808acb94 + DAT_1808ac1f4);
}



/* ===== 1802a3dc0 FUN_1802a3dc0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802a3dc0(longlong param_1,float *param_2,float param_3,undefined8 param_4,longlong param_5
                  ,float param_6)

{
  longlong lVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  bool bVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  float *pfVar9;
  int *piVar10;
  short sVar11;
  int *piVar12;
  short *psVar13;
  short sVar14;
  int iVar15;
  uint uVar16;
  undefined2 uVar17;
  short sVar18;
  uint uVar19;
  float *pfVar20;
  int iVar21;
  float fVar22;
  float fVar23;
  undefined4 uVar24;
  float fVar25;
  float fVar26;
  float local_110;
  float local_10c;
  int local_108 [3];
  float local_fc;
  float local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  float local_ec;
  float local_e8;
  int local_e4;
  float local_e0;
  float local_dc;
  
  if (DAT_1808ac34c < param_3) {
    local_108[0] = 0x20;
    local_10c = 0.999;
    local_110 = 0.001;
    local_108[2] = 0x100;
    pfVar20 = &local_110;
    if (DAT_1808abfbc <= param_6) {
      pfVar20 = &param_6;
    }
    pfVar9 = &local_10c;
    if (param_6 <= DAT_1808ac33c) {
      pfVar9 = pfVar20;
    }
    local_108[1] = 0x20 - (int)(param_3 * DAT_1808acd84);
    piVar12 = local_108;
    if (0x1f < local_108[1]) {
      piVar12 = local_108 + 1;
    }
    piVar10 = local_108 + 2;
    if (local_108[1] < 0x101) {
      piVar10 = piVar12;
    }
    iVar21 = *piVar10;
    fVar25 = (param_3 - *pfVar9 * param_3) - DAT_1808ac540;
    uVar6 = *(undefined4 *)(DAT_180ca0a50 + 0x1218);
    uVar24 = *(undefined4 *)(DAT_180ca0a50 + 0x121c);
    if (fVar25 <= 0.0) {
      fVar25 = 0.0;
    }
    if ((*(float *)(param_5 + 0xc) <= 0.0) || (fVar25 <= 0.0)) {
      uVar16 = 0;
      bVar5 = false;
      iVar15 = 0;
    }
    else {
      bVar5 = true;
      iVar15 = iVar21 * 3;
      uVar16 = 1;
    }
    local_f4 = uVar6;
    local_f0 = uVar24;
    local_e4 = iVar21;
    FUN_1803fc3a0(param_1,iVar21 * 0x4e + iVar15,uVar16 | iVar21 * 0xe);
    iVar15 = 0;
    sVar18 = (short)*(undefined4 *)(param_1 + 0x34);
    if (0 < iVar21) {
      local_e0 = param_3 + param_3;
      local_dc = (float)iVar21;
      do {
        fVar23 = local_e0;
        uVar16 = _DAT_1808ade90;
        fVar22 = (float)FUN_180517200();
        local_f8 = fVar22;
        local_fc = (float)FUN_180517790();
        pfVar20 = *(float **)(param_1 + 0x40);
        uVar19 = 0;
        fVar22 = (float)((uint)local_fc & uVar16) + (float)((uint)fVar22 & uVar16);
        fVar26 = param_3 - fVar22 * DAT_1808ac1f4;
        local_e8 = fVar22 / fVar23;
        local_ec = fVar26 + fVar22;
        do {
          if (uVar19 < 0xd) {
            fVar23 = ((float)(int)uVar19 * (fVar26 - fVar25)) / DAT_1808ac8b0 + fVar25;
          }
          else {
            fVar23 = local_ec;
          }
          uVar6 = FUN_1802a3c70();
          uVar19 = uVar19 + 1;
          fVar22 = param_2[1];
          *pfVar20 = fVar23 * local_f8 + *param_2;
          pfVar20[1] = fVar23 * local_fc + fVar22;
          lVar1 = *(longlong *)(param_1 + 0x40);
          *(undefined4 *)(lVar1 + 8) = local_f4;
          *(undefined4 *)(lVar1 + 0xc) = local_f0;
          *(undefined4 *)(*(longlong *)(param_1 + 0x40) + 0x10) = uVar6;
          *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
          pfVar20 = (float *)(*(longlong *)(param_1 + 0x40) + 0x14);
          *(float **)(param_1 + 0x40) = pfVar20;
        } while ((int)uVar19 < 0xe);
        iVar15 = iVar15 + 1;
      } while (iVar15 < local_e4);
      iVar15 = 0;
      do {
        sVar3 = (short)iVar15;
        iVar15 = iVar15 + 1;
        sVar4 = sVar3 * 0xe + sVar18;
        sVar3 = (short)(iVar15 % local_e4) * 0xe + sVar18;
        iVar21 = 0;
        do {
          sVar2 = (short)iVar21;
          sVar14 = sVar2 + sVar4;
          **(short **)(param_1 + 0x48) = sVar14;
          psVar13 = (short *)(*(longlong *)(param_1 + 0x48) + 2);
          *(short **)(param_1 + 0x48) = psVar13;
          *psVar13 = sVar2 + sVar3;
          sVar11 = sVar3 + 1 + sVar2;
          psVar13 = (short *)(*(longlong *)(param_1 + 0x48) + 2);
          *(short **)(param_1 + 0x48) = psVar13;
          *psVar13 = sVar11;
          psVar13 = (short *)(*(longlong *)(param_1 + 0x48) + 2);
          *(short **)(param_1 + 0x48) = psVar13;
          *psVar13 = sVar14;
          psVar13 = (short *)(*(longlong *)(param_1 + 0x48) + 2);
          *(short **)(param_1 + 0x48) = psVar13;
          *psVar13 = sVar11;
          psVar13 = (short *)(*(longlong *)(param_1 + 0x48) + 2);
          *(short **)(param_1 + 0x48) = psVar13;
          *psVar13 = sVar4 + 1 + sVar2;
          iVar7 = iVar21 + 2;
          *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 2;
          iVar21 = iVar21 + 1;
        } while (iVar7 < 0xe);
        uVar24 = local_f0;
        iVar21 = local_e4;
        uVar6 = local_f4;
      } while (iVar15 < local_e4);
    }
    if (bVar5) {
      uVar17 = (undefined2)*(undefined4 *)(param_1 + 0x34);
      uVar8 = FUN_1802a3c70();
      iVar15 = 0;
      **(undefined8 **)(param_1 + 0x40) = *(undefined8 *)param_2;
      lVar1 = *(longlong *)(param_1 + 0x40);
      *(undefined4 *)(lVar1 + 8) = uVar6;
      *(undefined4 *)(lVar1 + 0xc) = uVar24;
      *(undefined4 *)(*(longlong *)(param_1 + 0x40) + 0x10) = uVar8;
      *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + 0x14;
      *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
      if (0 < iVar21) {
        do {
          **(undefined2 **)(param_1 + 0x48) = uVar17;
          psVar13 = (short *)(*(longlong *)(param_1 + 0x48) + 2);
          *(short **)(param_1 + 0x48) = psVar13;
          *psVar13 = (short)iVar15 * 0xe + sVar18;
          psVar13 = (short *)(*(longlong *)(param_1 + 0x48) + 2);
          iVar15 = iVar15 + 1;
          *(short **)(param_1 + 0x48) = psVar13;
          *psVar13 = (short)(iVar15 % iVar21) * 0xe + sVar18;
          *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 2;
        } while (iVar15 < iVar21);
      }
    }
  }
  return;
}



/* ===== 1802a44b0 FUN_1802a44b0 ===== */

uint * FUN_1802a44b0(uint *param_1,float *param_2,float *param_3)

{
  longlong lVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float local_58;
  float local_54;
  float local_50;
  undefined1 local_48 [64];
  
  fVar4 = *param_3 - *param_2;
  fVar5 = param_3[1] - param_2[1];
  fVar6 = param_3[2] - param_2[2];
  fVar3 = fVar5 * fVar5 + fVar4 * fVar4 + fVar6 * fVar6;
  if (fVar3 < 0.0) {
    fVar3 = (float)FUN_18051af10(fVar3);
  }
  else {
    fVar3 = SQRT(fVar3);
  }
  if (fVar3 <= 0.0) {
    local_58 = 0.0;
    local_54 = 0.0;
    local_50 = 0.0;
  }
  else {
    local_58 = fVar4 / fVar3;
    local_54 = fVar5 / fVar3;
    local_50 = fVar6 / fVar3;
  }
  lVar1 = FUN_18029ac20(local_48,&local_58);
  fVar3 = *(float *)(lVar1 + 4) * DAT_1808ac014;
  uVar2 = FUN_180517790(fVar3);
  *param_1 = uVar2 ^ DAT_1808adec0;
  uVar2 = FUN_180517200(fVar3);
  param_1[1] = uVar2;
  param_1[2] = 0;
  return param_1;
}



/* ===== 1802a45c0 FUN_1802a45c0 ===== */

void FUN_1802a45c0(undefined8 param_1,float *param_2,float param_3,float param_4,uint param_5,
                  undefined4 param_6)

{
  float fVar1;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  
  fVar1 = DAT_1808ac1f4;
  if ((param_5 & 0xff000000) != 0) {
    local_58 = (*param_2 - param_3) + DAT_1808ac1f4;
    local_50 = (*param_2 - param_4) + DAT_1808ac1f4;
    local_54 = (param_2[1] - param_3) + DAT_1808ac1f4;
    local_4c = (param_2[1] - param_4) + DAT_1808ac1f4;
    FUN_1803fc600(local_54,&local_58,2,param_5,param_6,0);
    local_58 = *param_2 + param_3 + fVar1;
    local_54 = (param_2[1] - param_3) + fVar1;
    local_50 = *param_2 + param_4 + fVar1;
    local_4c = (param_2[1] - param_4) + fVar1;
    FUN_1803fc600(param_1,&local_58,2,param_5,param_6,0);
    local_58 = *param_2 + param_3 + fVar1;
    local_54 = param_2[1] + param_3 + fVar1;
    local_50 = *param_2 + param_4 + fVar1;
    local_4c = param_2[1] + param_4 + fVar1;
    FUN_1803fc600(param_1,&local_58,2,param_5,param_6,0);
    local_58 = (*param_2 - param_3) + fVar1;
    local_54 = param_2[1] + param_3 + fVar1;
    local_50 = (*param_2 - param_4) + fVar1;
    local_4c = param_2[1] + param_4 + fVar1;
    FUN_1803fc600(param_1,&local_58,2,param_5,param_6,0);
  }
  return;
}



/* ===== 1802a47f0 FUN_1802a47f0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802a47f0(longlong param_1)

{
  code *pcVar1;
  bool bVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  longlong lVar10;
  float *pfVar11;
  longlong lVar12;
  float *pfVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  int iVar17;
  longlong lVar18;
  int iVar19;
  char cVar20;
  uint uVar21;
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
  undefined1 auStack_248 [8];
  undefined1 auStack_240 [24];
  float local_228;
  float *local_220;
  float *local_218;
  undefined8 local_210;
  undefined4 local_208;
  undefined4 local_200;
  char local_1f8;
  uint local_1f4;
  uint local_1f0;
  int local_1ec;
  float local_1e8;
  float local_1e4;
  float local_1e0;
  float *local_1d8;
  float *pfStack_1d0;
  float *local_1c8;
  float local_1c0;
  uint local_1bc;
  undefined8 local_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  float local_1a8;
  float local_1a4;
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
  float local_170;
  float local_16c;
  longlong local_168;
  longlong lStack_160;
  undefined8 local_158;
  longlong local_150;
  longlong lStack_148;
  undefined8 local_140;
  float local_138;
  float fStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  float local_128;
  float fStack_124;
  float fStack_120;
  undefined8 uStack_11c;
  undefined8 uStack_114;
  float local_108;
  float local_104;
  ulonglong local_f8;
  
  fVar30 = DAT_1808acae0;
  fVar23 = DAT_1808ac34c;
  local_f8 = DAT_180919500 ^ (ulonglong)auStack_248;
  fVar31 = DAT_1811079b0 * DAT_1808ac1f4 - DAT_1808acad8;
  if (DAT_18095ce00 == '\0') {
    fVar29 = 0.0;
  }
  else {
    fVar29 = DAT_180cd0d50;
  }
  fVar29 = ((DAT_1811079b4 - DAT_1808ac864) - DAT_1808acae0) - fVar29;
  uVar7 = FUN_180089560(&DAT_180920ef8,DAT_1808ac34c);
  uVar8 = FUN_180089560(&DAT_180920f08,fVar23);
  local_1a8 = fVar31 + DAT_1808acb34;
  local_1a4 = fVar29 + fVar30;
  local_208 = DAT_1808ac900;
  local_210 = CONCAT44(local_210._4_4_,uVar7);
  local_218 = (float *)CONCAT44(local_218._4_4_,uVar8);
  local_220 = (float *)CONCAT44(local_220._4_4_,fVar23);
  local_228 = fVar23;
  local_1a0 = fVar31;
  local_19c = fVar29;
  FUN_1800be550(param_1,&local_1a0,&local_1a8,DAT_1808ac924);
  puVar16 = auStack_248;
  if (DAT_1809f4988 == 0) goto LAB_1802a52ca;
  local_1b8 = DAT_181107a20;
  if ((DAT_181107a20 == 0) && (local_1b8 = *(longlong *)(DAT_180ca0a50 + 0x11f0), local_1b8 == 0)) {
    fVar30 = DAT_1808ac8d4;
  }
  else {
    fVar30 = *(float *)(local_1b8 + 0x1c);
  }
  lVar12 = local_1b8;
  uVar21 = *(uint *)(param_1 + 0x30);
  *(uint *)(param_1 + 0x30) = uVar21 & 0xfffffffc;
  fVar28 = DAT_1808ac750;
  fVar31 = fVar31 + DAT_1808ac750;
  local_168 = 0;
  lStack_160 = 0;
  local_158 = 0;
  local_150 = 0;
  lStack_148 = 0;
  local_140 = 0;
  local_1d8 = (float *)0x0;
  pfStack_1d0 = (float *)0x0;
  local_1c8 = (float *)0x0;
  local_1e0 = 0.0;
  local_1bc = uVar21;
  local_1f0 = FUN_1802a3c70(DAT_180957204,DAT_180957208,DAT_18095720c,DAT_180957210);
  fVar5 = DAT_1808ac540;
  fVar4 = DAT_1808ac068;
  puVar14 = auStack_248;
  puVar15 = auStack_248;
  fVar22 = 0.0;
  if (0 < DAT_1809f4988) {
    local_1c0 = fVar29 + fVar28;
    local_1e4 = local_1c0 + DAT_1808acac0;
    iVar17 = -1;
    iVar19 = -1;
    bVar2 = false;
    cVar20 = '\0';
    local_1f8 = '\0';
    local_1ec = 0;
    local_1e8 = (DAT_1808acac0 - fVar30) - DAT_1808ac540;
    local_1f4 = local_1f0 & 0xff000000;
    do {
      fVar28 = ((float)local_1ec * DAT_1808acb30) / DAT_1808acbc0 + fVar31;
      lVar12 = (longlong)((local_1ec + DAT_1809f4980) % 0x140);
      fVar29 = DAT_1808acbf8;
      if (*(float *)(&DAT_1809f3f80 + lVar12 * 8) <= DAT_1808acbf8) {
        fVar29 = *(float *)(&DAT_1809f3f80 + lVar12 * 8);
      }
      fVar29 = (fVar23 - fVar29 / DAT_1808acbf8) * DAT_1808acac0 + local_1c0;
      if (DAT_1809571d9 != '\0') {
        local_198 = fVar28;
        local_194 = fVar29;
        if ((ulonglong)(lStack_160 - local_168 >> 3) < 2) {
LAB_1802a4bb7:
          FUN_18008b8c0(&local_168,&local_198);
        }
        else {
          uVar9 = lStack_160 - local_168 & 0xfffffffffffffff8;
          fVar22 = *(float *)((uVar9 - 0x10) + local_168);
          fVar27 = *(float *)(lStack_160 + -8) - fVar22;
          if (0.0 < (*(float *)(lStack_160 + -8) - fVar28) * fVar27) goto LAB_1802a4bb7;
          fVar24 = *(float *)((uVar9 - 0xc) + local_168);
          fVar25 = *(float *)(lStack_160 + -4) - fVar24;
          if (0.0 < (*(float *)(lStack_160 + -4) - fVar29) * fVar25) goto LAB_1802a4bb7;
          fVar24 = fVar29 - fVar24;
          fVar22 = fVar28 - fVar22;
          fVar27 = fVar22 * fVar25 - fVar24 * fVar27;
          if ((fVar24 * fVar24 + fVar22 * fVar22) * DAT_1808ac000 < fVar27 * fVar27)
          goto LAB_1802a4bb7;
          *(float *)(lStack_160 + -8) = fVar28;
          *(float *)(lStack_160 + -4) = fVar29;
        }
        local_1e0 = *(float *)(&DAT_1809f3f80 + lVar12 * 8);
      }
      if (DAT_1809571ec != '\0') {
        if ((&DAT_1809f3f85)[lVar12 * 8] == '\0') {
          fVar22 = fVar5;
        }
        else {
          fVar22 = local_1e8;
        }
        fVar22 = local_1e4 - fVar22;
        local_190 = fVar28;
        local_18c = fVar22;
        if ((ulonglong)(lStack_148 - local_150 >> 3) < 2) {
LAB_1802a4cd0:
          FUN_18008b8c0(&local_150,&local_190);
        }
        else {
          uVar9 = lStack_148 - local_150 & 0xfffffffffffffff8;
          fVar27 = *(float *)((uVar9 - 0x10) + local_150);
          fVar24 = *(float *)(lStack_148 + -8) - fVar27;
          if (0.0 < (*(float *)(lStack_148 + -8) - fVar28) * fVar24) goto LAB_1802a4cd0;
          fVar25 = *(float *)((uVar9 - 0xc) + local_150);
          fVar26 = *(float *)(lStack_148 + -4) - fVar25;
          if (0.0 < (*(float *)(lStack_148 + -4) - fVar22) * fVar26) goto LAB_1802a4cd0;
          fVar25 = fVar22 - fVar25;
          fVar27 = fVar28 - fVar27;
          fVar24 = fVar27 * fVar26 - fVar25 * fVar24;
          if ((fVar25 * fVar25 + fVar27 * fVar27) * DAT_1808ac000 < fVar24 * fVar24)
          goto LAB_1802a4cd0;
          *(float *)(lStack_148 + -8) = fVar28;
          *(float *)(lStack_148 + -4) = fVar22;
        }
        if (bVar2) {
          if ((&DAT_1809f3f85)[lVar12 * 8] == '\0') {
            if ((cVar20 != '\0') && (0 < iVar19)) {
              fStack_124 = (fVar22 - fVar30) - fVar5;
              local_128 = fVar28;
              fStack_120 = (float)FUN_1802a3c70(DAT_1808ac30c,DAT_1808ac30c,DAT_1808ac30c,fVar23);
              uStack_11c = 0;
              uStack_114 = 0;
              snprintf(&uStack_11c,0x10,&DAT_1806dfdd8,iVar19);
              if (pfStack_1d0 == local_1c8) {
                FUN_1802a6990(&local_1d8,pfStack_1d0,&local_128);
              }
              else {
                *pfStack_1d0 = local_128;
                pfStack_1d0[1] = fStack_124;
                pfStack_1d0[2] = fStack_120;
                pfStack_1d0[3] = (float)uStack_11c;
                *(undefined8 *)(pfStack_1d0 + 3) = uStack_11c;
                *(undefined8 *)(pfStack_1d0 + 5) = uStack_114;
                pfStack_1d0 = pfStack_1d0 + 7;
              }
            }
            goto LAB_1802a4d93;
          }
        }
        else {
LAB_1802a4d93:
          if ((&DAT_1809f3f85)[lVar12 * 8] == '\0') {
            iVar19 = 0;
            goto LAB_1802a4db3;
          }
        }
        if (iVar19 < 0) {
          iVar19 = -1;
        }
        else {
          iVar19 = iVar19 + 1;
        }
      }
LAB_1802a4db3:
      if (DAT_180957200 != '\0') {
        if (bVar2) {
          if (((&DAT_1809f3f84)[lVar12 * 8] == '\0') || (local_1f8 != '\0')) {
LAB_1802a4e86:
            uVar21 = local_1f0;
          }
          else {
            local_178 = fVar28 + fVar5;
            local_17c = fVar29 - DAT_1808ac864;
            local_180 = fVar28 - fVar5;
            local_184 = fVar29 - fVar5;
            local_188 = fVar28;
            local_174 = local_17c;
            if (local_1f4 == 0) goto LAB_1802a4e86;
            FUN_18000b9c0(param_1 + 0x50,&local_188);
            FUN_18000b9c0(param_1 + 0x50,&local_180);
            FUN_18000b9c0(param_1 + 0x50,&local_178);
            uVar21 = local_1f0;
            FUN_1803fd460(param_1,*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x50),
                          local_1f0);
            *(undefined4 *)(param_1 + 0x50) = 0;
          }
          if ((&DAT_1809f3f84)[lVar12 * 8] == '\0') {
            if (local_1f8 != '\0') {
              fVar22 = fVar28 - fVar5;
              fStack_134 = fVar29 - fVar5;
              local_138 = fVar28 + fVar5;
              fVar29 = fVar29 - DAT_1808ac864;
              local_170 = fVar28;
              local_16c = fVar29;
              local_108 = fVar22;
              local_104 = fStack_134;
              if (local_1f4 != 0) {
                FUN_18000b9c0(param_1 + 0x50,&local_170);
                FUN_18000b9c0(param_1 + 0x50,&local_138);
                FUN_18000b9c0(param_1 + 0x50,&local_108);
                FUN_1803fd460(param_1,*(undefined8 *)(param_1 + 0x58),
                              *(undefined4 *)(param_1 + 0x50),uVar21);
                *(undefined4 *)(param_1 + 0x50) = 0;
              }
              if (-1 < iVar17) {
                fStack_124 = (fVar29 - fVar30) - fVar5;
                if (iVar17 == 1) {
                  fVar29 = fVar4;
                  fVar28 = fVar23;
                }
                else {
                  fVar29 = fVar23;
                  fVar28 = fVar4;
                }
                local_128 = fVar22;
                fStack_120 = (float)FUN_1802a3c70(fVar29,fVar28,fVar4,fVar23);
                uStack_11c = 0;
                uStack_114 = 0;
                snprintf(&uStack_11c,0x10,&DAT_1806dfdd8,iVar17);
                if (pfStack_1d0 == local_1c8) {
                  FUN_1802a6990(&local_1d8,pfStack_1d0,&local_128);
                }
                else {
                  *pfStack_1d0 = local_128;
                  pfStack_1d0[1] = fStack_124;
                  pfStack_1d0[2] = fStack_120;
                  pfStack_1d0[3] = (float)uStack_11c;
                  *(undefined8 *)(pfStack_1d0 + 3) = uStack_11c;
                  *(undefined8 *)(pfStack_1d0 + 5) = uStack_114;
                  pfStack_1d0 = pfStack_1d0 + 7;
                }
              }
            }
            goto LAB_1802a4fc8;
          }
        }
        else {
LAB_1802a4fc8:
          if ((&DAT_1809f3f84)[lVar12 * 8] == '\0') {
            iVar17 = 0;
            goto LAB_1802a4fe4;
          }
        }
        if (iVar17 < 0) {
          iVar17 = -1;
        }
        else {
          iVar17 = iVar17 + 1;
        }
      }
LAB_1802a4fe4:
      bVar2 = true;
      cVar20 = (&DAT_1809f3f85)[lVar12 * 8];
      local_1f8 = (&DAT_1809f3f84)[lVar12 * 8];
      local_1ec = local_1ec + 1;
    } while (local_1ec < DAT_1809f4988);
    lVar12 = local_1b8;
    fVar28 = DAT_1808ac750;
    fVar22 = local_1e0;
    uVar21 = local_1bc;
  }
  uVar9 = lStack_148 - local_150 >> 3;
  if (1 < uVar9) {
    lVar10 = local_150;
    uVar7 = FUN_1802a3c70(DAT_1809571f0,DAT_1809571f4,DAT_1809571f8,DAT_1809571fc);
    local_220 = (float *)((ulonglong)local_220 & 0xffffffff00000000);
    local_228 = fVar23;
    FUN_1803fc600(param_1,lVar10,uVar9 & 0xffffffff,uVar7);
  }
  fVar23 = local_228;
  pfVar11 = local_218;
  pfVar13 = local_1d8;
  pfVar3 = pfStack_1d0;
  if (local_168 != lStack_160) {
    lVar10 = lStack_160;
    lVar18 = local_168;
    fVar29 = (float)FUN_1802a3c70(DAT_1809571dc,DAT_1809571e0,DAT_1809571e4,DAT_1809571e8);
    uVar9 = lVar10 - lVar18 >> 3;
    if (1 < uVar9) {
      local_220 = (float *)((ulonglong)local_220 & 0xffffffff00000000);
      local_228 = fVar5;
      FUN_1803fc600(param_1,lVar18,uVar9 & 0xffffffff,fVar29);
    }
    snprintf(&local_108,0x10,&DAT_18074144c,(double)fVar22);
    local_1b8 = CONCAT44(*(float *)(lStack_160 + -4) - fVar30,fVar31 + DAT_1808acb30 + fVar28);
    fVar23 = local_228;
    pfVar11 = local_218;
    pfVar13 = local_1d8;
    pfVar3 = pfStack_1d0;
    if ((((uint)fVar29 & 0xff000000) != 0) && (local_108._0_1_ != '\0')) {
      lVar10 = lVar12;
      if (lVar12 == 0) {
        lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x18);
      }
      fVar23 = fVar30;
      if (fVar30 == 0.0) {
        fVar23 = *(float *)(*(longlong *)(param_1 + 0x38) + 0x20);
      }
      local_138 = *(float *)(param_1 + 0x60);
      fStack_134 = *(float *)(param_1 + 100);
      uStack_130 = *(undefined4 *)(param_1 + 0x68);
      uStack_12c = *(undefined4 *)(param_1 + 0x6c);
      local_200 = 0;
      local_208 = 0;
      local_210 = 0;
      local_218 = &local_108;
      local_220 = &local_138;
      local_228 = fVar29;
      FUN_18040a900(lVar10,param_1,fVar23,&local_1b8);
      fVar23 = local_228;
      pfVar11 = local_218;
      pfVar13 = local_1d8;
      pfVar3 = pfStack_1d0;
    }
  }
  for (; pfVar6 = pfStack_1d0, pfVar13 != pfStack_1d0; pfVar13 = pfVar13 + 7) {
    local_228 = pfVar13[2];
    pfStack_1d0 = pfVar3;
    if (((((uint)local_228 & 0xff000000) != 0) &&
        (local_218 = pfVar13 + 3, local_218 != (float *)0x0)) && (*(char *)local_218 != '\0')) {
      lVar10 = lVar12;
      if (lVar12 == 0) {
        lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x18);
      }
      fVar23 = fVar30;
      if (fVar30 == 0.0) {
        fVar23 = *(float *)(*(longlong *)(param_1 + 0x38) + 0x20);
      }
      local_1b8 = *(longlong *)(param_1 + 0x60);
      uStack_1b0 = *(undefined4 *)(param_1 + 0x68);
      uStack_1ac = *(undefined4 *)(param_1 + 0x6c);
      local_200 = 0;
      local_208 = 0;
      local_210 = 0;
      local_220 = (float *)&local_1b8;
      FUN_18040a900(lVar10,param_1,fVar23,pfVar13);
      fVar23 = local_228;
      pfVar11 = local_218;
    }
    local_218 = pfVar11;
    local_228 = fVar23;
    fVar23 = local_228;
    pfVar11 = local_218;
    pfVar3 = pfStack_1d0;
    pfStack_1d0 = pfVar6;
  }
  *(uint *)(param_1 + 0x30) = uVar21;
  puVar16 = auStack_248;
  local_228 = fVar23;
  local_218 = pfVar11;
  pfStack_1d0 = pfVar3;
  if (local_1d8 != (float *)0x0) {
    pfVar11 = local_1d8;
    if ((ulonglong)(((longlong)local_1c8 - (longlong)local_1d8 >> 2) * 4) < 0x1000) {
LAB_1802a52a2:
      puVar15 = puVar14;
    }
    else {
      pfVar11 = *(float **)(local_1d8 + -2);
      pfVar13 = (float *)((longlong)local_1d8 + (-8 - (longlong)pfVar11));
      if (&DAT_0000001f < pfVar13) {
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        puVar14 = auStack_240;
        pfVar11 = pfVar13;
        goto LAB_1802a52a2;
      }
    }
    *(undefined8 *)(puVar15 + -8) = 0x1802a52aa;
    thunk_FUN_1803d64e0(pfVar11);
    *(undefined8 *)(puVar15 + 0x70) = 0;
    *(undefined8 *)(puVar15 + 0x78) = 0;
    local_1c8 = (float *)0x0;
    puVar16 = puVar15;
  }
  *(undefined8 *)(puVar16 + -8) = 0x1802a52c0;
  FUN_1800132b0(&local_150);
  *(undefined8 *)(puVar16 + -8) = 0x1802a52ca;
  FUN_1800132b0(&local_168);
LAB_1802a52ca:
  *(undefined8 *)(puVar16 + -8) = 0x1802a52d6;
  return;
}



/* ===== 1802a5330 FUN_1802a5330 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802a5330(undefined8 param_1,longlong *param_2,float *param_3,float *param_4,float *param_5
                  ,float param_6,double param_7)

{
  bool bVar1;
  float fVar2;
  char cVar3;
  longlong lVar4;
  float *pfVar5;
  longlong lVar6;
  float *pfVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  uint uVar13;
  undefined8 uVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float *pfVar23;
  float *pfVar24;
  float local_138;
  float local_134;
  float local_130;
  int local_12c;
  undefined8 local_128;
  float local_120;
  float local_11c [4];
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  
  fVar16 = DAT_1811079b4;
  fVar2 = DAT_1808ac34c;
  uVar8 = param_2[3];
  uVar9 = (param_2[1] - *param_2 >> 3) * -0x5555555555555555;
  if (uVar8 < uVar9) {
    fVar17 = *param_3;
    if (param_3[2] < param_3[1] || param_3[2] == param_3[1]) {
      fVar10 = 0.0;
      lVar6 = 8;
      lVar4 = 4;
    }
    else {
      lVar6 = 4;
      lVar4 = 8;
      fVar10 = DAT_1808acda0;
    }
    fVar21 = *(float *)(lVar4 + (longlong)param_3);
    fVar22 = *(float *)(lVar6 + (longlong)param_3);
    if (fVar21 <= fVar17) {
      fVar12 = fVar21;
    }
    else {
      fVar10 = DAT_1808acd6c - fVar10;
      fVar12 = fVar17;
      fVar17 = fVar21;
    }
    fVar21 = fVar12;
    if (fVar22 <= fVar12) {
      fVar21 = fVar22;
    }
    local_130 = 0.0;
    local_134 = 0.0;
    local_138 = 0.0;
    fVar11 = fVar17 + DAT_1808abf50;
    uVar14 = FUN_180519fe0((float)((uint)((fVar12 - fVar22) /
                                          ((fVar17 - fVar21) * DAT_1808ac7ac + DAT_1808abf50) +
                                         fVar10) & _DAT_1808ade90) + DAT_1808ac064,DAT_1808ac34c);
    pfVar24 = &local_138;
    pfVar23 = &local_134;
    FUN_1803d80a0(uVar14,(fVar17 - fVar21) / fVar11,fVar17,&local_130,pfVar23,pfVar24);
    fVar10 = DAT_1808ac540;
    fVar17 = DAT_1808ac1f4;
    local_120 = fVar16 * DAT_1808ac1f4;
    local_12c = -1;
    bVar1 = false;
    fVar21 = 0.0;
    fVar22 = 0.0;
    while( true ) {
      uVar15 = (undefined4)((ulonglong)pfVar23 >> 0x20);
      lVar4 = *param_2;
      fVar11 = param_6 * *(float *)(lVar4 + uVar8 * 0x18) + *param_5;
      fVar18 = param_6 * *(float *)(lVar4 + 4 + uVar8 * 0x18) + param_5[1];
      fVar12 = (float)FUN_18053f0d0(fVar11 * DAT_1808abfd4 + fVar17);
      fVar20 = (fVar11 - fVar12 * DAT_1808acbd0) * DAT_1808ac014;
      fVar11 = (float)FUN_180517200(fVar20);
      fVar12 = (float)FUN_18053f0d0(fVar18 * DAT_1808abfd4 + fVar17);
      fVar18 = (fVar18 - fVar12 * DAT_1808acbd0) * DAT_1808ac014;
      fVar12 = (float)FUN_180517200(fVar18);
      local_100 = fVar12 * fVar11 * DAT_1808acc70 + *param_4;
      fVar18 = (float)FUN_180517790(fVar18);
      fVar12 = DAT_1808acc70;
      local_fc = fVar18 * fVar11 * DAT_1808acc70 + param_4[1];
      uVar13 = FUN_180517790(fVar20);
      local_128 = 0;
      local_f8 = (float)(uVar13 ^ DAT_1808adec0) * fVar12 + param_4[2];
      pfVar23 = (float *)CONCAT44(uVar15,fVar16);
      cVar3 = FUN_1803a1bf0(&DAT_181107930 + (longlong)DAT_181107a00 * 0x40,&local_100,&local_128,
                            DAT_1811079b0,pfVar23);
      if (cVar3 != '\0') {
        uVar15 = (undefined4)local_128;
        uVar19 = local_128._4_4_;
      }
      else {
        uVar15 = 0;
        uVar19 = 0;
      }
      fVar16 = (float)(param_7 - *(double *)(lVar4 + 0x10 + uVar8 * 0x18));
      if (DAT_1808ac064 <= fVar16) {
        if (fVar16 <= DAT_1808ac760) {
          fVar16 = fVar2;
        }
        else {
          fVar16 = (fVar16 - DAT_1808ac760) / DAT_1808ac0c0;
          if (fVar2 <= fVar16) {
            fVar16 = fVar2;
          }
          fVar16 = fVar2 - fVar16;
        }
      }
      else {
        fVar16 = fVar16 / DAT_1808ac064;
      }
      if (fVar16 <= 0.0) {
        param_2[3] = param_2[3] + 1;
      }
      local_11c[1] = fVar16;
      if (cVar3 != '\0') {
        fVar11 = (float)FUN_180519080(uVar15);
        fVar18 = (float)FUN_180519080(uVar19);
        fVar12 = local_120;
        if (fVar18 <= local_120) {
          fVar12 = fVar18;
        }
        fVar18 = (float)uVar8 / (float)uVar9;
        local_11c[2] = 1.0;
        local_11c[0] = 0.0;
        pfVar7 = local_11c;
        if (0.0 <= fVar16) {
          pfVar7 = local_11c + 1;
        }
        pfVar5 = local_11c + 2;
        if (fVar16 <= fVar2) {
          pfVar5 = pfVar7;
        }
        uVar13 = FUN_1802a3c70((local_130 - *param_3) * fVar18 + *param_3,
                               (local_134 - param_3[1]) * fVar18 + param_3[1],
                               (local_138 - param_3[2]) * fVar18 + param_3[2],*pfVar5 * param_3[3]);
        if ((bVar1) && ((uVar13 & 0xff000000) != 0)) {
          local_f0 = fVar21 + fVar17;
          pfVar24 = (float *)((ulonglong)pfVar24 & 0xffffffff00000000);
          pfVar23 = (float *)CONCAT44((int)((ulonglong)pfVar23 >> 0x20),fVar2);
          local_e8 = fVar11 + fVar17;
          local_e4 = fVar12 + fVar17;
          local_ec = fVar22 + fVar17;
          FUN_1803fc600(param_1,&local_f0,2,uVar13,pfVar23,pfVar24);
        }
        if (*(int *)(lVar4 + 0xc + uVar8 * 0x18) != local_12c) {
          pfVar24 = (float *)((ulonglong)pfVar24 & 0xffffffff00000000);
          local_11c[3] = fVar11 + fVar10;
          pfVar23 = (float *)((ulonglong)pfVar23 & 0xffffffff00000000);
          local_10c = fVar12 + fVar10;
          local_108 = fVar11 - fVar10;
          local_104 = fVar12 - fVar10;
          FUN_1803fe590(param_1,&local_108,local_11c + 3,uVar13,pfVar23,pfVar24);
          local_12c = *(int *)(lVar4 + 0xc + uVar8 * 0x18);
        }
        bVar1 = true;
      }
      else {
        bVar1 = false;
        fVar11 = fVar21;
        fVar12 = fVar22;
      }
      uVar8 = uVar8 + 1;
      if (uVar9 <= uVar8) break;
      fVar16 = DAT_1811079b4;
      fVar21 = fVar11;
      fVar22 = fVar12;
    }
  }
  return;
}



/* ===== 1802a5940 FUN_1802a5940 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802a5940(longlong param_1)

{
  double dVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  double *pdVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  float *pfVar12;
  float *pfVar13;
  double dVar14;
  undefined *puVar15;
  double *pdVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  uint uVar21;
  float fVar22;
  double dVar23;
  double dVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  ulonglong in_stack_fffffffffffffe58;
  undefined8 uVar30;
  undefined4 uVar31;
  undefined8 local_188;
  undefined8 local_180;
  float local_178;
  undefined8 local_170;
  undefined8 local_168;
  float local_160 [2];
  float local_158;
  undefined4 local_154;
  float local_150;
  float local_14c;
  double local_148;
  undefined8 local_140;
  float local_138;
  undefined8 local_130;
  undefined8 local_128;
  float local_120;
  undefined8 local_118;
  float local_110;
  float local_10c;
  undefined4 local_108;
  undefined4 local_104;
  float local_100;
  undefined4 local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  
  if (param_1 == 0) {
    return;
  }
  if (DAT_1809f3cb0 == 0) {
    return;
  }
  if (DAT_180957168 == '\0') {
    return;
  }
  local_130 = DAT_1809f3cb0;
  if (DAT_1809f3cb0 == 0) {
    return;
  }
  if (DAT_180ca09f0 == 0) {
    return;
  }
  iVar7 = FUN_180011200((ulonglong)DAT_180ca09f0 + DAT_1809f3cb0);
  if (999 < iVar7 - 1U) {
    return;
  }
  local_158 = 0.0;
  cVar6 = FUN_1802a0e40(&local_158,&local_170);
  if (cVar6 == '\0') {
    iVar7 = 0;
  }
  else {
    iVar7 = FUN_1800ef270(&DAT_18094f764,local_158);
  }
  puVar10 = (undefined8 *)FUN_1802ae9b0(&local_118,&local_130);
  local_180 = *puVar10;
  fVar19 = (float)local_180;
  fVar28 = *(float *)(puVar10 + 1);
  local_128 = local_180;
  local_120 = fVar28;
  local_148 = (double)FUN_1802a0cf0();
  pdVar5 = DAT_180cfeab8;
  fVar4 = DAT_1808ac34c;
  fVar3 = DAT_1808ac1f4;
  uVar17 = SUB84(local_148,0);
  uVar9 = (undefined4)((ulonglong)local_148 >> 0x20);
  if (DAT_1809f3f6c == '\0') goto LAB_1802a68d1;
  local_140 = (longlong)iVar7 * 100;
  if ((&DAT_180954968)[local_140] != '\0') {
    if (DAT_180957190 != '\0') {
      local_160[0] = DAT_1811079b0;
      local_170 = CONCAT44(local_170._4_4_,DAT_1811079b4);
      if (DAT_180cfeab0 != DAT_180cfeab8) {
        pdVar16 = DAT_180cfeab0;
        fVar19 = DAT_1811079b0;
        fVar18 = DAT_1811079b4;
        dVar24 = DAT_1808ac4a8;
        do {
          dVar23 = (double)CONCAT44(uVar9,uVar17) - *pdVar16;
          if ((0.0 <= dVar23) && (dVar23 <= dVar24)) {
            dVar14 = pdVar16[4];
            dVar1 = pdVar16[5];
            fVar29 = (float)(dVar24 - dVar23) + (float)(dVar24 - dVar23);
            if (dVar14 != dVar1) {
              do {
                uVar17 = (undefined4)(in_stack_fffffffffffffe58 >> 0x20);
                if (*(char *)((longlong)dVar14 + 0x18) != '\0') {
                  puVar10 = (undefined8 *)FUN_1802a44b0(&local_108,&local_128,(longlong)dVar14 + 8);
                  fVar27 = *(float *)((longlong)dVar14 + 0x14) * DAT_1808ac0c0 + DAT_1808ac154;
                  local_168 = 0;
                  local_110 = fVar27 * *(float *)(puVar10 + 1) + *(float *)((longlong)dVar14 + 0x10)
                  ;
                  local_118 = CONCAT44((float)((ulonglong)*puVar10 >> 0x20) * fVar27 +
                                       (float)((ulonglong)*(undefined8 *)((longlong)dVar14 + 8) >>
                                              0x20),
                                       (float)*puVar10 * fVar27 +
                                       (float)*(undefined8 *)((longlong)dVar14 + 8));
                  puVar15 = &DAT_181107930;
                  in_stack_fffffffffffffe58 = CONCAT44(uVar17,DAT_1811079b4);
                  cVar6 = FUN_1803a1bf0(&DAT_181107930 + (longlong)DAT_181107a00 * 0x40,
                                        (longlong)dVar14 + 8,&local_168,DAT_1811079b0,
                                        in_stack_fffffffffffffe58);
                  if (cVar6 != '\0') {
                    local_188 = 0;
                    in_stack_fffffffffffffe58 =
                         CONCAT44((int)(in_stack_fffffffffffffe58 >> 0x20),DAT_1811079b4);
                    cVar6 = FUN_1803a1bf0(puVar15 + (longlong)DAT_181107a00 * 0x40,&local_118,
                                          &local_188,DAT_1811079b0,in_stack_fffffffffffffe58);
                    if (cVar6 != '\0') {
                      fVar27 = (float)local_168;
                      if (0.0 <= (float)local_168) {
                        fVar20 = local_168._4_4_;
                        if (0.0 <= local_168._4_4_) {
                          if ((float)local_168 <= fVar19) {
                            if (local_168._4_4_ <= fVar18) {
                              if (*(char *)((longlong)dVar14 + 0x19) == '\0') {
                                local_150 = fVar29 * fVar3;
                              }
                              else {
                                local_150 = fVar29;
                              }
                              local_14c = 1.0;
                              local_158 = 0.0;
                              local_150 = ((fRam00000001809571a0 - fRam00000001809571b0) *
                                           *(float *)((longlong)dVar14 + 0x14) +
                                          fRam00000001809571b0) * local_150;
                              pfVar13 = &local_158;
                              if (0.0 <= local_150) {
                                pfVar13 = &local_150;
                              }
                              pfVar12 = &local_14c;
                              if (local_150 <= fVar4) {
                                pfVar12 = pfVar13;
                              }
                              fVar19 = *pfVar12;
                              fVar18 = (float)FUN_18053e9f0(pfVar13,local_188._4_4_ -
                                                                    local_168._4_4_);
                              uVar17 = (undefined4)(in_stack_fffffffffffffe58 >> 0x20);
                              if (fVar18 <= fVar4) {
                                fVar18 = fVar4;
                              }
                              if ((int)(fVar19 * fVar3 * DAT_1808acb94) != 0) {
                                uVar8 = FUN_1802a3c70();
                                uVar17 = (undefined4)(in_stack_fffffffffffffe58 >> 0x20);
                                if ((uVar8 & 0xff000000) != 0) {
                                  in_stack_fffffffffffffe58 =
                                       in_stack_fffffffffffffe58 & 0xffffffff00000000;
                                  fVar19 = fVar18 + fVar27 + fVar4;
                                  fVar22 = fVar18 + fVar20 + fVar4;
                                  fVar25 = ((fVar27 - fVar18) - fVar4) + fVar3;
                                  fVar26 = ((fVar20 - fVar18) - fVar4) + fVar3;
                                  if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
                                    pfVar13 = &local_e8;
                                    local_e8 = fVar19 - DAT_1808ac1e0;
                                    local_e4 = fVar22 - DAT_1808ac1e0;
                                    pfVar12 = &local_e0;
                                    local_e0 = fVar25;
                                    local_dc = fVar26;
                                  }
                                  else {
                                    local_f8 = fVar19 - fVar3;
                                    local_f4 = fVar22 - fVar3;
                                    pfVar13 = &local_f8;
                                    pfVar12 = &local_f0;
                                    local_f0 = fVar25;
                                    local_ec = fVar26;
                                  }
                                  FUN_1803fe160(param_1,pfVar12,pfVar13,fVar18 * fVar3,
                                                in_stack_fffffffffffffe58);
                                  uVar30 = CONCAT44((int)(in_stack_fffffffffffffe58 >> 0x20),fVar4);
                                  FUN_1803fc600(param_1,*(undefined8 *)(param_1 + 0x58),
                                                *(undefined4 *)(param_1 + 0x50),uVar8,uVar30,0x200);
                                  uVar17 = (undefined4)((ulonglong)uVar30 >> 0x20);
                                  *(undefined4 *)(param_1 + 0x50) = 0;
                                }
                              }
                              local_d4 = fVar18 + fVar20;
                              local_d8 = fVar18 + fVar27;
                              local_130 = CONCAT44(fVar20 - fVar18,fVar27 - fVar18);
                              uVar9 = FUN_1802a3c70();
                              in_stack_fffffffffffffe58 = CONCAT44(uVar17,fVar18 * fVar3);
                              FUN_1803fe590(param_1,&local_130,&local_d8,uVar9,
                                            in_stack_fffffffffffffe58,0);
                              fVar19 = local_160[0];
                              fVar18 = (float)local_170;
                            }
                          }
                        }
                      }
                    }
                  }
                }
                dVar14 = (double)((longlong)dVar14 + 0x28);
              } while (dVar14 != dVar1);
              uVar17 = SUB84(local_148,0);
              uVar9 = (undefined4)((ulonglong)local_148 >> 0x20);
            }
            dVar24 = DAT_1808ac4a8;
          }
          pdVar16 = pdVar16 + 10;
        } while (pdVar16 != pdVar5);
        fVar19 = (float)local_180;
      }
    }
    if (DAT_180957169 != '\0') {
      if ((DAT_180961a50 == 0) || (lVar11 = FUN_18000f3a0(), lVar11 == 0)) {
        fVar18 = 0.0;
      }
      else {
        fVar18 = (float)FUN_18000f3d0((ulonglong)DAT_180961950 + lVar11);
      }
      fVar18 = fVar18 - _DAT_1809f3dc0;
      if ((0.0 <= fVar18) && (fVar18 <= fVar4)) {
        local_170 = 0;
        in_stack_fffffffffffffe58 = CONCAT44((int)(in_stack_fffffffffffffe58 >> 0x20),DAT_1811079b4)
        ;
        cVar6 = FUN_1803a1bf0(&DAT_181107930 + (longlong)DAT_181107a00 * 0x40,&DAT_1809f3da8,
                              &local_170,DAT_1811079b0,in_stack_fffffffffffffe58);
        fVar20 = DAT_1809f3db0;
        fVar27 = DAT_1809f3dac;
        fVar29 = DAT_1809f3da8;
        uVar17 = (undefined4)(in_stack_fffffffffffffe58 >> 0x20);
        if (cVar6 != '\0') {
          fVar19 = DAT_1809f3da8 - fVar19;
          local_158 = (float)local_170;
          fVar22 = DAT_1809f3dac - local_128._4_4_;
          fVar28 = DAT_1809f3db0 - fVar28;
          local_154 = local_170._4_4_;
          local_178 = fVar22 * fVar22 + fVar19 * fVar19 + fVar28 * fVar28;
          if (local_178 < 0.0) {
            local_178 = (float)FUN_18051af10();
          }
          else {
            local_178 = SQRT(local_178);
          }
          if (local_178 <= 0.0) {
            fVar19 = 0.0;
            fVar22 = 0.0;
            local_178 = 0.0;
          }
          else {
            fVar19 = fVar19 / local_178;
            fVar22 = fVar22 / local_178;
            local_178 = fVar28 / local_178;
          }
          local_180 = CONCAT44(fVar22,fVar19);
          FUN_18029ac20(&local_108,&local_180);
          uVar8 = FUN_180517790();
          fVar19 = (float)(uVar8 ^ DAT_1808adec0);
          fVar28 = (float)FUN_180517200();
          local_188 = 0;
          local_178 = fVar20;
          local_180 = CONCAT44(fVar28 * fVar3 + fVar27,fVar19 * fVar3 + fVar29);
          in_stack_fffffffffffffe58 = CONCAT44(uVar17,DAT_1811079b4);
          cVar6 = FUN_1803a1bf0(&DAT_181107930 + (longlong)DAT_181107a00 * 0x40,&local_180,
                                &local_188,DAT_1811079b0,in_stack_fffffffffffffe58);
          if (cVar6 != '\0') {
            local_178 = DAT_1809f3db0;
            local_168 = 0;
            local_180 = CONCAT44(fVar28 + fVar28 + DAT_1809f3dac,fVar19 + fVar19 + DAT_1809f3da8);
            in_stack_fffffffffffffe58 =
                 CONCAT44((int)(in_stack_fffffffffffffe58 >> 0x20),DAT_1811079b4);
            cVar6 = FUN_1803a1bf0(&DAT_181107930 + (longlong)DAT_181107a00 * 0x40,&local_180,
                                  &local_168,DAT_1811079b0,in_stack_fffffffffffffe58);
            uVar17 = (undefined4)(in_stack_fffffffffffffe58 >> 0x20);
            if (cVar6 != '\0') {
              fVar28 = (float)FUN_18053e9f0((float)local_188 - (float)local_170,
                                            local_188._4_4_ - local_170._4_4_);
              if (fVar28 <= fVar4) {
                fVar28 = fVar4;
              }
              fVar19 = (float)FUN_18053e9f0();
              local_14c = 1.0;
              if (fVar19 <= DAT_1808ac658) {
                fVar19 = DAT_1808ac658;
              }
              local_170 = local_170 & 0xffffffff00000000;
              fVar18 = fVar4 - fVar18;
              local_150 = fVar18;
              local_160[0] = fVar18 * DAT_180957178;
              pfVar13 = (float *)&local_170;
              if (0.0 <= local_160[0]) {
                pfVar13 = local_160;
              }
              pfVar12 = &local_14c;
              if (local_160[0] <= fVar4) {
                pfVar12 = pfVar13;
              }
              uVar9 = FUN_1802a3c70(pfVar13,0,0,*pfVar12 * fVar3);
              uVar30 = CONCAT44(uVar17,uVar9);
              FUN_1802a45c0(param_1,&local_158,fVar28 - fVar4,fVar19 + fVar4,uVar30,DAT_1808ac710);
              uVar17 = (undefined4)((ulonglong)uVar30 >> 0x20);
              local_160[0] = 1.0;
              local_170 = local_170 & 0xffffffff00000000;
              pfVar13 = (float *)&local_170;
              if (0.0 <= fVar18) {
                pfVar13 = &local_150;
              }
              pfVar12 = local_160;
              if (fVar18 <= fVar4) {
                pfVar12 = pfVar13;
              }
              uVar9 = FUN_1802a3c70(pfVar13,DAT_180957170,DAT_180957174,DAT_180957178 * *pfVar12);
              in_stack_fffffffffffffe58 = CONCAT44(uVar17,uVar9);
              FUN_1802a45c0(param_1,&local_158,fVar28,fVar19,in_stack_fffffffffffffe58,DAT_1808ac540
                           );
            }
          }
        }
      }
    }
    fVar28 = DAT_1808abfd0;
    if (DAT_18095717c != '\0') {
      fVar29 = DAT_1809f3dd4 + DAT_1809f3e9c;
      fVar19 = (float)FUN_18053f0d0(fVar29 * DAT_1808abfd0 + fVar3);
      fVar18 = DAT_1809f3dd8 + DAT_1809f3ea0;
      fVar28 = (float)FUN_18053f0d0(fVar18 * fVar28 + fVar3);
      pdVar5 = DAT_180cfeab8;
      uVar17 = (undefined4)(in_stack_fffffffffffffe58 >> 0x20);
      fVar28 = fVar28 * DAT_1808acbd0;
      local_180 = 0;
      local_178 = 0.0;
      if (DAT_1809f3d20 == 0) {
        bVar2 = false;
        fVar19 = fVar19 * DAT_1808acbd0;
        pdVar16 = DAT_180cfeab0;
        fVar27 = DAT_1808acd08;
        if (DAT_180cfeab0 != DAT_180cfeab8) {
          do {
            if (*(char *)(pdVar16 + 3) != '\0') {
              dVar24 = pdVar16[5];
              for (dVar23 = pdVar16[4]; dVar23 != dVar24; dVar23 = (double)((longlong)dVar23 + 0x28)
                  ) {
                if (*(char *)((longlong)dVar23 + 0x19) != '\0') {
                  fVar20 = (float)FUN_18029ad80(&local_128,(longlong)dVar23 + 8,fVar29 - fVar19,
                                                fVar18 - fVar28);
                  if (fVar20 < fVar27) {
                    local_178 = *(float *)((longlong)dVar23 + 0x10);
                    local_180 = *(undefined8 *)((longlong)dVar23 + 8);
                    bVar2 = true;
                    fVar27 = fVar20;
                  }
                }
              }
            }
            uVar17 = (undefined4)(in_stack_fffffffffffffe58 >> 0x20);
            pdVar16 = pdVar16 + 10;
          } while (pdVar16 != pdVar5);
          if (bVar2) {
            fVar28 = (float)local_180;
            fVar19 = local_180._4_4_;
            goto LAB_1802a646d;
          }
        }
      }
      else {
        local_180 = CONCAT44(DAT_1809f3d38,DAT_1809f3d34);
        local_178 = DAT_1809f3d3c;
        fVar28 = DAT_1809f3d34;
        fVar19 = DAT_1809f3d38;
LAB_1802a646d:
        fVar29 = local_178;
        fVar18 = *(float *)(&DAT_18095498c + local_140);
        uVar8 = FUN_180517790();
        local_140 = CONCAT44(local_140._4_4_,(float)(uVar8 ^ DAT_1808adec0) * fVar18 + fVar28);
        fVar28 = (float)FUN_180517200();
        local_188 = 0;
        local_138 = fVar18 * 0.0 + fVar29;
        local_140 = CONCAT44(fVar28 * fVar18 + fVar19,(undefined4)local_140);
        puVar15 = &DAT_181107930;
        uVar30 = CONCAT44(uVar17,DAT_1811079b4);
        cVar6 = FUN_1803a1bf0(&DAT_181107930 + (longlong)DAT_181107a00 * 0x40,&local_180,&local_188,
                              DAT_1811079b0,uVar30);
        if (cVar6 != '\0') {
          fVar28 = (float)local_188;
          fVar19 = local_188._4_4_;
          local_168 = local_188;
          local_188 = 0;
          uVar30 = CONCAT44((int)((ulonglong)uVar30 >> 0x20),DAT_1811079b4);
          cVar6 = FUN_1803a1bf0(puVar15 + (longlong)DAT_181107a00 * 0x40,&local_140,&local_188,
                                DAT_1811079b0,uVar30);
          uVar31 = (undefined4)((ulonglong)uVar30 >> 0x20);
          if (cVar6 != '\0') {
            fVar28 = (float)FUN_18053e9f0((float)local_188 - fVar28,local_188._4_4_ - fVar19);
            uVar17 = SUB84(local_148,0);
            uVar9 = (undefined4)((ulonglong)local_148 >> 0x20);
            dVar23 = local_148 - _DAT_1809f3f78;
            _DAT_1809f3f78 = local_148;
            dVar24 = DAT_1808ac500;
            if (dVar23 <= DAT_1808ac500) {
              dVar24 = dVar23;
            }
            fVar19 = (float)FUN_18051ab90((float)dVar24 * DAT_1808ace50);
            fVar19 = DAT_1809f3f70 + (fVar4 - fVar19) * (fVar28 - DAT_1809f3f70);
            DAT_1809f3f70 = fVar19;
            if (fVar28 <= DAT_1808acaa8) {
              if ((((0.0 < fVar19) && ((int)(DAT_18095718c * DAT_1808acb94) != 0)) &&
                  (uVar8 = FUN_1802a3c70(), (uVar8 & 0xff000000) != 0)) && (fVar3 <= fVar19)) {
                FUN_1803fddf0(param_1,&local_168,fVar19 - fVar3,0,CONCAT44(uVar31,DAT_1808ac7c0),
                              0x3f);
                FUN_1803fc600(param_1,*(undefined8 *)(param_1 + 0x58),
                              *(undefined4 *)(param_1 + 0x50),uVar8,fVar4,0x200);
                *(undefined4 *)(param_1 + 0x50) = 0;
              }
            }
            else {
              local_104 = DAT_180957184;
              local_100 = DAT_180957188;
              local_110 = DAT_180957188;
              local_108 = DAT_180957180;
              local_118 = CONCAT44(DAT_180957184,DAT_180957180);
              local_10c = DAT_18095718c;
              local_fc = 0;
              FUN_1802a3dc0(param_1,&local_168,fVar19,&local_118,&local_108,DAT_1808ac064);
            }
            goto LAB_1802a675e;
          }
        }
      }
    }
    uVar17 = SUB84(local_148,0);
    uVar9 = (undefined4)((ulonglong)local_148 >> 0x20);
  }
LAB_1802a675e:
  if (((DAT_1809f3f6c != '\0') && (DAT_1809571b4 != '\0')) &&
     ((DAT_1809f3f30 != 0 && (DAT_1809f3f38 != 0)))) {
    uVar8 = FUN_18000f3d0(DAT_1809f3f38 + DAT_1809f3f30);
    local_140 = CONCAT44(local_140._4_4_,uVar8);
    uVar21 = FUN_18000f3d0(DAT_1809f3f30 + DAT_1809f3f38 + 4);
    local_140 = CONCAT44(uVar21,(undefined4)local_140);
    local_138 = 0.0;
    fVar28 = (float)FUN_18051afb0(DAT_180962cf8,DAT_1808ac3c8);
    if ((((uVar8 & 0x7f800000) != 0x7f800000) && ((uVar21 & 0x7f800000) != 0x7f800000)) &&
       (fVar28 = fVar28 * _DAT_1808ac004, ((uint)fVar28 & 0x7f800000) != 0x7f800000)) {
      AcquireSRWLockExclusive((PSRWLOCK)&DAT_180cfe770);
      FUN_1802a5330(param_1,&DAT_180cfe868,&DAT_1809571b8,&local_128,&local_140,fVar28,
                    CONCAT44(uVar9,uVar17));
      FUN_1802a5330(param_1,&DAT_180cfe778,&DAT_1809571c8,&local_128,&local_140,fVar28,
                    CONCAT44(uVar9,uVar17));
      ReleaseSRWLockExclusive((PSRWLOCK)&DAT_180cfe770);
    }
  }
LAB_1802a68d1:
  if (DAT_1809571d8 != '\0') {
    FUN_1802a47f0(param_1);
  }
  return;
}



/* ===== 1802a6910 FUN_1802a6910 ===== */

void FUN_1802a6910(ulonglong *param_1)

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
  *(undefined8 *)(puVar5 + -8) = 0x1802a6973;
  thunk_FUN_1803d64e0(uVar2,uVar3);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* ===== 1802a6990 FUN_1802a6990 ===== */

undefined4 * FUN_1802a6990(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined4 *puVar8;
  ulonglong uVar9;
  undefined4 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  ulonglong uVar13;
  undefined4 *puVar14;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  lVar2 = *param_1;
  uVar13 = 0x924924924924924;
  lVar7 = (param_1[1] - lVar2 >> 2) * 0x6db6db6db6db6db7;
  if (lVar7 == 0x924924924924924) {
                    /* WARNING: Subroutine does not return */
    FUN_18000fb10();
  }
  uVar1 = lVar7 + 1;
  uVar9 = (param_1[2] - lVar2 >> 2) * 0x6db6db6db6db6db7;
  if (uVar9 <= 0x924924924924924 - (uVar9 >> 1)) {
    uVar9 = (uVar9 >> 1) + uVar9;
    uVar13 = uVar1;
    if (uVar1 <= uVar9) {
      uVar13 = uVar9;
    }
    if (0x924924924924924 < uVar13) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  puVar8 = (undefined4 *)FUN_18000fb70(uVar13 * 0x1c);
  uVar4 = param_3[1];
  uVar5 = param_3[2];
  uVar6 = param_3[3];
  puVar14 = puVar8 + ((param_2 - lVar2) / 0x1c) * 7;
  *puVar14 = *param_3;
  puVar14[1] = uVar4;
  puVar14[2] = uVar5;
  puVar14[3] = uVar6;
  uVar4 = param_3[4];
  uVar5 = param_3[5];
  uVar6 = param_3[6];
  puVar14[3] = param_3[3];
  puVar14[4] = uVar4;
  puVar14[5] = uVar5;
  puVar14[6] = uVar6;
  lVar2 = *param_1;
  if (param_2 == param_1[1]) {
    lVar7 = param_1[1] - lVar2;
    puVar10 = puVar8;
    param_2 = lVar2;
  }
  else {
    FUN_180540530(puVar8,lVar2,param_2 - lVar2);
    puVar10 = puVar14 + 7;
    lVar7 = param_1[1] - param_2;
  }
  puVar11 = auStack_48;
  puVar12 = auStack_48;
  FUN_180540530(puVar10,param_2,lVar7);
  lVar2 = *param_1;
  if (lVar2 == 0) goto LAB_1802a6aec;
  lVar7 = lVar2;
  if ((ulonglong)((param_1[2] - lVar2 >> 2) * 4) < 0x1000) {
LAB_1802a6ae1:
    puVar12 = puVar11;
  }
  else {
    lVar7 = *(longlong *)(lVar2 + -8);
    if (0x1f < (lVar2 - lVar7) - 8U) {
      lVar7 = 5;
      pcVar3 = (code *)swi(0x29);
      (*pcVar3)(5);
      puVar11 = auStack_40;
      goto LAB_1802a6ae1;
    }
  }
  *(undefined8 *)(puVar12 + -8) = 0x1802a6aec;
  thunk_FUN_1803d64e0(lVar7);
LAB_1802a6aec:
  *param_1 = (longlong)puVar8;
  param_1[1] = (longlong)(puVar8 + uVar1 * 7);
  param_1[2] = (longlong)(puVar8 + uVar13 * 7);
  return puVar14;
}



/* ===== 1802a6b30 FUN_1802a6b30 ===== */

void FUN_1802a6b30(void)

{
  if ((DAT_180cfeac8 == '\0') && (DAT_1811089f0 != 0)) {
    DAT_180cfeacc = FUN_18038eaf0("C_BaseEntity","m_lifeState");
    DAT_180cfead0 = FUN_18038eaf0("C_BaseEntity","m_bTakesDamage");
    DAT_180cfead4 = FUN_18038eaf0("C_CSPlayerPawn","m_bGunGameImmunity");
    DAT_180cfead8 = FUN_18038eaf0("C_BaseEntity","m_nActualMoveType");
    DAT_180cfeadc = FUN_18038eaf0("C_BaseEntity","m_iHealth");
    DAT_180cfeae0 = FUN_18038eaf0("C_BaseEntity","m_pRenderComponent");
    DAT_180cfeae4 = FUN_18038eaf0("CRenderComponent","m_bEnableRendering");
    DAT_180cfeae8 = FUN_18038eaf0("C_BasePlayerPawn","m_hController");
    DAT_180cfeaec = FUN_18038eaf0("C_BaseEntity","m_pGameSceneNode");
    DAT_180cfeaf0 = FUN_18038eaf0("C_BaseEntity","m_iTeamNum");
    DAT_180cfeaf4 = FUN_18038eaf0("C_BaseEntity","m_vecAbsVelocity");
    if ((DAT_180cfeacc == 0) ||
       (((DAT_180cfeadc == 0 || (DAT_180cfeae8 == 0)) ||
        (DAT_180cfeac8 = '\x01', DAT_180cfeaec == 0)))) {
      DAT_180cfeac8 = '\0';
    }
  }
  return;
}



/* ===== 1802a6ca0 FUN_1802a6ca0 ===== */

undefined1 FUN_1802a6ca0(void)

{
  (*DAT_180961f88)();
  return 1;
}



/* ===== 1802a6cc0 FUN_1802a6cc0 ===== */

float * FUN_1802a6cc0(float *param_1,float *param_2,float *param_3)

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
  
  fVar1 = *param_3;
  fVar2 = param_3[1];
  fVar3 = param_2[3];
  fVar4 = param_2[6];
  fVar5 = param_2[5];
  fVar6 = param_2[4];
  fVar10 = param_3[2] * fVar5 - fVar2 * fVar4;
  fVar10 = fVar10 + fVar10;
  fVar9 = fVar1 * fVar4 - param_3[2] * fVar6;
  fVar8 = fVar2 * fVar6 - fVar1 * fVar5;
  fVar9 = fVar9 + fVar9;
  fVar8 = fVar8 + fVar8;
  fVar7 = param_2[7];
  *param_1 = fVar3 * ((fVar8 * fVar5 - fVar9 * fVar4) + fVar10 * param_2[7] + fVar1) + *param_2;
  fVar1 = param_2[1];
  param_1[2] = fVar3 * ((fVar9 * fVar6 - fVar10 * fVar5) + fVar8 * param_2[7] + param_3[2]) +
               param_2[2];
  param_1[1] = fVar3 * ((fVar10 * fVar4 - fVar8 * fVar6) + fVar9 * fVar7 + fVar2) + fVar1;
  return param_1;
}



/* ===== 1802a6e10 FUN_1802a6e10 ===== */

byte FUN_1802a6e10(longlong param_1,byte param_2,char param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  float *pfVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  bool bVar10;
  float fVar11;
  double dVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 local_a8 [136];
  
  pfVar7 = (float *)FUN_1800111b0(local_a8,param_1 + 0x18);
  fVar1 = *pfVar7;
  fVar2 = pfVar7[1];
  fVar3 = pfVar7[2];
  pfVar7 = (float *)FUN_1800111b0(local_a8,param_1 + 0x24);
  fVar4 = *pfVar7;
  fVar16 = pfVar7[1];
  fVar5 = pfVar7[2];
  fVar11 = (float)FUN_18000f3d0(param_1 + 0x30);
  uVar6 = FUN_180011200(param_1 + 0x34);
  fVar13 = (fVar4 + fVar1) * DAT_1808ac1f4;
  fVar15 = (fVar16 + fVar2) * DAT_1808ac1f4;
  fVar14 = (fVar5 + fVar3) * DAT_1808ac1f4;
  if ((param_2 & 0xc) == 4) {
    dVar12 = DAT_1808ac470;
  }
  else {
    dVar12 = DAT_1808ac4d0;
  }
  fVar17 = (float)((double)fVar11 * dVar12);
  fVar11 = fVar17 * DAT_1808ac25c;
  if (uVar6 < 0x43b3ec4b) {
    if (uVar6 == 0x43b3ec4a) {
      bVar10 = param_3 != '\0';
      if (bVar10) {
        *param_4 = fVar13;
        param_4[1] = fVar15;
        param_4[2] = fVar14;
        param_4[3] = 0.25;
      }
      uVar8 = (ulonglong)bVar10;
      param_4[uVar8 * 4] = fVar4 - fVar11;
      param_4[uVar8 * 4 + 1] = fVar16;
      param_4[uVar8 * 4 + 2] = fVar5;
      param_4[uVar8 * 4 + 3] = 0.25;
      return bVar10 + 1;
    }
    if (0x1c55957c < uVar6) {
      if (uVar6 == 0x204f6b7b) {
LAB_1802a717a:
        *param_4 = fVar13;
        param_4[1] = fVar15;
        param_4[2] = fVar14;
        param_4[3] = 0.5;
        return 1;
      }
      if (uVar6 == 0x21674212) goto LAB_1802a7091;
      if (uVar6 != 0x245860b7) {
        if (uVar6 != 0x2b85a35e) {
          return 0;
        }
        goto LAB_1802a717a;
      }
      *param_4 = fVar13 + fVar17;
      param_4[1] = fVar15;
      param_4[2] = fVar14;
      param_4[3] = 1.0;
      param_4[4] = fVar4 - fVar11;
      param_4[5] = fVar11 + fVar16;
      goto LAB_1802a725a;
    }
    if (uVar6 != 0x1c55957c) {
      if ((uVar6 != 0x6994cde) && (uVar6 != 0x9b0e3fd)) {
        if (uVar6 == 0xe116e7e) {
          bVar10 = param_3 != '\0';
          if (bVar10) {
            *param_4 = fVar13;
            param_4[1] = fVar15;
            param_4[2] = fVar14;
            param_4[3] = 0.25;
          }
          uVar8 = (ulonglong)bVar10;
          param_4[uVar8 * 4] = fVar11 + fVar1;
          param_4[uVar8 * 4 + 1] = fVar2;
          param_4[uVar8 * 4 + 2] = fVar3;
          param_4[uVar8 * 4 + 3] = 0.25;
          return bVar10 + 1;
        }
        if (uVar6 != 0x1338af55) {
          return 0;
        }
        bVar10 = param_3 != '\0';
        if (bVar10) {
          *param_4 = fVar13;
          param_4[1] = fVar15;
          param_4[2] = fVar14;
          param_4[3] = 0.5;
        }
        uVar9 = (ulonglong)bVar10;
        uVar8 = (ulonglong)(bVar10 + 1);
        param_4[uVar9 * 4] = fVar4;
        param_4[uVar9 * 4 + 1] = fVar16;
        param_4[uVar9 * 4 + 2] = fVar5;
        param_4[uVar9 * 4 + 3] = 0.5;
        param_4[uVar8 * 4] = fVar1;
        param_4[uVar8 * 4 + 1] = fVar2;
        param_4[uVar8 * 4 + 2] = fVar3;
        param_4[uVar8 * 4 + 3] = 0.5;
        goto LAB_1802a736b;
      }
LAB_1802a7091:
      *param_4 = fVar13;
      param_4[1] = fVar16 - fVar11;
      param_4[2] = fVar14;
      param_4[3] = 1.0;
      param_4[4] = fVar4;
      param_4[5] = fVar16;
      param_4[6] = fVar17 + fVar5;
      param_4[7] = 0.75;
      param_4[8] = fVar1;
      param_4[9] = fVar2;
      param_4[10] = fVar3 - fVar17;
      param_4[0xb] = 0.75;
      return 3;
    }
    fVar16 = fVar16 - fVar11;
    *param_4 = fVar13 - fVar17;
    param_4[1] = fVar15;
    param_4[2] = fVar14;
    param_4[3] = 1.0;
    param_4[4] = fVar11 + fVar4;
  }
  else {
    if (0x7d157434 < uVar6) {
      if (uVar6 == 0x87b67d5a) {
        bVar10 = param_3 != '\0';
        if (bVar10) {
          *param_4 = fVar13;
          param_4[1] = fVar15;
          param_4[2] = fVar14;
          param_4[3] = 0.5;
        }
        uVar9 = (ulonglong)bVar10;
        uVar8 = (ulonglong)(bVar10 + 1);
        param_4[uVar9 * 4] = fVar11 + fVar4;
        param_4[uVar9 * 4 + 1] = fVar17 + fVar16;
        param_4[uVar9 * 4 + 2] = fVar5;
        param_4[uVar9 * 4 + 3] = 0.25;
        param_4[uVar8 * 4] = fVar11 + fVar1;
        param_4[uVar8 * 4 + 1] = fVar17 + fVar2;
        param_4[uVar8 * 4 + 2] = fVar3;
        param_4[uVar8 * 4 + 3] = 0.25;
LAB_1802a736b:
        return param_3 != '\0' | 2;
      }
      if (uVar6 != 0x896e9f07) {
        if (uVar6 == 0xabdc5955) {
          fVar13 = fVar13 - fVar11;
          goto LAB_1802a72bc;
        }
        if (uVar6 != 0xe1791344) {
          return 0;
        }
      }
      *param_4 = fVar13;
      param_4[1] = fVar15;
      param_4[2] = fVar14;
      param_4[3] = 0.25;
      return 1;
    }
    if (uVar6 == 0x7d157434) {
      fVar13 = fVar13 + fVar11;
LAB_1802a72bc:
      *param_4 = fVar13;
      param_4[1] = fVar15;
      param_4[2] = fVar14;
      param_4[3] = 0.5;
      param_4[4] = fVar4;
      param_4[5] = fVar16;
      param_4[6] = fVar5;
      param_4[7] = 0.25;
      return 2;
    }
    if ((uVar6 != 0x4b0a2653) && (uVar6 != 0x4cfc8e4e)) {
      if (uVar6 == 0x57320e21) {
        *param_4 = fVar13;
        param_4[1] = fVar15;
        param_4[2] = fVar14;
        param_4[3] = 1.0;
        param_4[4] = fVar11 + fVar4;
        param_4[5] = fVar16 - fVar11;
        param_4[6] = fVar5;
        param_4[7] = 0.75;
        param_4[8] = fVar1;
        param_4[9] = fVar17 + fVar2;
        param_4[10] = fVar3;
        param_4[0xb] = 0.75;
        param_4[0xc] = fVar4;
        param_4[0xd] = fVar16;
        param_4[0xe] = fVar17 + fVar5;
        param_4[0xf] = 0.25;
        param_4[0x10] = fVar4;
        param_4[0x11] = fVar16;
        param_4[0x12] = fVar5 - fVar17;
        param_4[0x13] = 0.25;
        return 5;
      }
      if (uVar6 != 0x77b7406d) {
        return 0;
      }
      goto LAB_1802a717a;
    }
    *param_4 = fVar13;
    param_4[1] = fVar15;
    param_4[2] = fVar14;
    param_4[3] = 1.0;
    param_4[4] = fVar4;
  }
  param_4[5] = fVar16;
LAB_1802a725a:
  param_4[6] = fVar5;
  param_4[7] = 0.75;
  return 2;
}



/* ===== 1802a73b0 FUN_1802a73b0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802a73b0(undefined8 *param_1,longlong param_2,double *param_3,double param_4)

{
  undefined8 uVar1;
  longlong *plVar2;
  double dVar3;
  uint uVar4;
  char cVar5;
  char cVar6;
  longlong lVar7;
  float *pfVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  char cVar12;
  bool bVar13;
  bool bVar14;
  undefined4 *puVar15;
  int iVar16;
  float *pfVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  uint uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 auStack_298 [32];
  int local_278;
  char local_268;
  char local_267;
  char local_266;
  char local_265;
  char local_264;
  uint local_260;
  float local_25c;
  float local_258;
  float fStack_254;
  float local_250;
  longlong local_248;
  float fStack_240;
  float fStack_23c;
  float local_238;
  float fStack_234;
  char cStack_230;
  byte bStack_22f;
  char cStack_22e;
  byte bStack_22d;
  undefined1 uStack_22c;
  undefined1 uStack_22b;
  undefined2 uStack_22a;
  uint local_228;
  uint uStack_224;
  float local_220;
  float local_21c;
  float local_218;
  uint local_214;
  int local_210;
  int local_20c;
  double local_208;
  longlong local_200;
  undefined8 *local_1f8;
  undefined8 local_1f0;
  undefined4 local_1e8;
  undefined8 local_1e0;
  float local_1d8;
  float *local_1d0;
  longlong local_1c8;
  longlong local_1c0;
  undefined4 *local_1b8;
  undefined1 local_1b0 [16];
  undefined1 local_1a0 [16];
  undefined1 local_190 [16];
  undefined1 local_180 [24];
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
  
  local_e8 = DAT_180919500 ^ (ulonglong)auStack_298;
  if (param_3[4] != param_3[5]) {
    param_3[5] = param_3[4];
  }
  if (param_3[7] != param_3[8]) {
    param_3[8] = param_3[7];
  }
  local_265 = *(char *)(param_3 + 3);
  uVar9 = (ulonglong)DAT_180cfeaec;
  local_264 = *(char *)((longlong)param_3 + 0x19);
  *param_3 = param_4;
  *(undefined2 *)((longlong)param_3 + 0x19) = 0;
  *(undefined1 *)(param_3 + 3) = 0;
  local_208 = param_4;
  local_200 = param_2;
  lVar7 = FUN_18000f3a0(uVar9 + param_2);
  if (((lVar7 != 0) && (DAT_180961f88 != 0)) && (lVar7 = FUN_180047bf0(lVar7), lVar7 != 0)) {
    DAT_1809f4990 = 0;
    _DAT_1809f49a0 = 0x20;
    DAT_1809f4bc0 = 0;
    _DAT_1809f4bd8 = 0x20;
    _DAT_1809f49a4 = 0x80000000;
    DAT_1809f4998 = &DAT_1809f49b0;
    DAT_1809f4bd0 = &DAT_1809f4be0;
    _DAT_1809f4bdc = 0x80000000;
    cVar5 = FUN_1802a6ca0(lVar7,&DAT_1809f4990,&DAT_1809f4bc0);
    if (cVar5 != '\0') {
      iVar16 = DAT_1809f4990;
      if (DAT_1809f4bc0 < DAT_1809f4990) {
        iVar16 = DAT_1809f4bc0;
      }
      if (0x20 < iVar16) {
        iVar16 = 0x20;
      }
      if (0 < iVar16) {
        puVar10 = &DAT_1809f49b0;
        if (DAT_1809f4998 != (undefined8 *)0x0) {
          puVar10 = DAT_1809f4998;
        }
        puVar15 = &DAT_1809f4be0;
        if (DAT_1809f4bd0 != (undefined4 *)0x0) {
          puVar15 = DAT_1809f4bd0;
        }
        local_20c = iVar16;
        local_1f8 = puVar10;
        local_1b8 = puVar15;
        if (DAT_180cfeaf4 == 0) {
          fVar29 = 0.0;
          local_21c = 0.0;
          local_218 = 0.0;
        }
        else {
          pfVar8 = (float *)FUN_1800111b0(&local_1e0,param_2 + (ulonglong)DAT_180cfeaf4);
          fVar29 = *pfVar8;
          local_21c = pfVar8[1];
          local_218 = pfVar8[2];
        }
        fVar23 = DAT_1808ac014;
        local_21c = local_21c * DAT_1808ac000;
        local_218 = local_218 * DAT_1808ac000;
        fVar28 = *(float *)((longlong)param_1 + 0x14) * DAT_1808ac014;
        fVar29 = fVar29 * DAT_1808ac000;
        fVar18 = (float)FUN_180517200(fVar28);
        fVar20 = *(float *)(param_1 + 3);
        fVar19 = (float)FUN_180517200(fVar20 * fVar23);
        fVar19 = fVar19 * fVar18;
        fVar20 = (float)FUN_180517790(fVar20 * fVar23);
        fVar20 = fVar20 * fVar18;
        uVar21 = FUN_180517790(fVar28);
        fVar18 = (float)(uVar21 ^ DAT_1808adec0);
        fVar23 = fVar20 * fVar20 + fVar19 * fVar19 + fVar18 * fVar18;
        if (fVar23 < 0.0) {
          fVar23 = (float)FUN_18051af10(fVar23);
        }
        else {
          fVar23 = SQRT(fVar23);
        }
        if (0.0 < fVar23) {
          fVar19 = fVar19 / fVar23;
          fVar20 = fVar20 / fVar23;
          fVar18 = fVar18 / fVar23;
        }
        local_25c = fVar20;
        local_220 = (float)FUN_180517200(DAT_1808ac2a8);
        FUN_1802a8c20(param_3 + 7,puVar15,puVar15 + (longlong)iVar16 * 8);
        fVar28 = DAT_1808ac34c;
        fVar23 = DAT_1808ac110;
        uVar9 = 0;
        local_260 = 0;
        do {
          fVar25 = 0.0;
          pfVar17 = (float *)(param_1 + 1);
          pfVar8 = (float *)(puVar15 + uVar9 * 8);
          fVar24 = *pfVar8 - *pfVar17;
          fVar26 = pfVar8[1] - *(float *)((longlong)param_1 + 0xc);
          fVar27 = pfVar8[2] - *(float *)(param_1 + 2);
          fVar22 = fVar26 * fVar26 + fVar24 * fVar24 + fVar27 * fVar27;
          local_1d0 = pfVar8;
          if (fVar22 < 0.0) {
            fVar22 = (float)FUN_18051af10(fVar22);
          }
          else {
            fVar22 = SQRT(fVar22);
          }
          if (fVar22 <= 0.0) {
            fVar24 = fVar25;
            fVar22 = fVar25;
          }
          else {
            fVar25 = fVar24 / fVar22;
            fVar24 = fVar26 / fVar22;
            fVar22 = fVar27 / fVar22;
          }
          if (((local_220 <= fVar20 * fVar24 + fVar19 * fVar25 + fVar18 * fVar22) &&
              (lVar7 = puVar10[uVar9 * 2], local_1c0 = lVar7, lVar7 - 0x10000U < 0x7ffffffeffff)) &&
             (cVar5 = FUN_180011220(lVar7 + 0x3c), cVar5 == '\x02')) {
            local_214 = FUN_180011200(lVar7 + 0x38);
            lVar11 = (longlong)(int)local_214;
            if (local_214 < 0xc) {
              if ((*(char *)(param_1 + 4) == '\0') ||
                 (*(float *)((longlong)param_1 + lVar11 * 4 + 0x38) < 0.0)) {
                cVar5 = '\0';
              }
              else {
                cVar5 = '\x01';
              }
              if ((*(char *)((longlong)param_1 + 0x2c) == '\0') ||
                 (*(char *)((longlong)param_1 + lVar11 + 0x68) == '\0')) {
                cVar12 = '\0';
              }
              else {
                cVar12 = '\x01';
              }
              if ((*(char *)((longlong)param_1 + 0x75) == '\0') || (cVar12 == '\0')) {
                local_266 = '\0';
              }
              else {
                local_266 = '\x01';
              }
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
              local_268 = cVar5;
              local_267 = cVar12;
              local_1c8 = lVar11;
              local_210 = FUN_1802a6e10(lVar7,local_214,local_266,&local_168);
              if (0 < local_210) {
                puVar10 = (undefined8 *)FUN_1800111b0(local_1b0,lVar7 + 0x18);
                uVar1 = *puVar10;
                fVar20 = *(float *)(puVar10 + 1);
                puVar10 = (undefined8 *)FUN_1800111b0(local_1a0,lVar7 + 0x24);
                local_1d8 = (fVar20 + *(float *)(puVar10 + 1)) * DAT_1808ac1f4;
                local_1e0 = CONCAT44(((float)((ulonglong)*puVar10 >> 0x20) +
                                     (float)((ulonglong)uVar1 >> 0x20)) * _UNK_1808ad9f4,
                                     ((float)*puVar10 + (float)uVar1) * _DAT_1808ad9f0);
                puVar10 = (undefined8 *)FUN_1802a6cc0(local_190,pfVar8,&local_1e0);
                local_1f0 = *puVar10;
                local_1e8 = *(undefined4 *)(puVar10 + 1);
                if (cVar5 == '\0') {
                  cVar6 = '\0';
                }
                else {
                  cVar6 = FUN_1802a8290(pfVar17,&local_1f0,*(undefined4 *)((longlong)param_1 + 0x24)
                                        ,*(undefined4 *)(param_1 + 0xf));
                }
                if (cVar12 == '\0') {
                  cVar5 = '\0';
                }
                else if ((cVar5 == '\0') ||
                        (*(float *)(param_1 + 6) != *(float *)((longlong)param_1 + 0x24))) {
                  cVar5 = FUN_1802a8290(pfVar17,&local_1f0,*(undefined4 *)(param_1 + 6),
                                        *(undefined4 *)(param_1 + 0xf));
                }
                else {
                  cVar5 = cVar6;
                }
                fVar22 = local_218;
                fVar20 = local_21c;
                uVar9 = 0;
                do {
                  lVar11 = uVar9 * 0x10;
                  puVar10 = (undefined8 *)
                            FUN_1802a6cc0(local_180,local_1d0,local_180 + lVar11 + 0x18);
                  fStack_240 = (float)*puVar10 + fVar29;
                  fStack_254 = (float)((ulonglong)*puVar10 >> 0x20);
                  local_250 = *(float *)(puVar10 + 1) + fVar22;
                  fStack_23c = fStack_254 + fVar20;
                  _local_258 = CONCAT44(fStack_23c,fStack_240);
                  if (*(char *)((longlong)param_1 + 0x74) == '\0') {
                    fVar24 = fVar28;
                  }
                  else {
                    fVar24 = *(float *)((longlong)&uStack_160 + lVar11 + 4);
                  }
                  bVar13 = false;
                  bStack_22d = 0;
                  uStack_22c = 0;
                  uStack_22b = 0;
                  fStack_234 = fVar24 * fVar23 +
                               *(float *)((longlong)param_1 + local_1c8 * 4 + 0x38);
                  cStack_230 = local_268;
                  local_228 = local_214;
                  uStack_224 = local_260;
                  local_248 = lVar7;
                  local_238 = local_250;
                  if (cVar6 == '\0') {
LAB_1802a7a50:
                    bVar14 = false;
                  }
                  else {
                    local_278 = *(int *)(param_1 + 5);
                    lVar7 = FUN_1802a7cf0(*param_1,param_1 + 1,&local_258,local_200);
                    if (lVar7 == 0) goto LAB_1802a7a50;
                    bVar14 = true;
                  }
                  cStack_22e = local_267;
                  bStack_22f = bVar14;
                  if (cVar5 != '\0') {
                    if ((*(int *)((longlong)param_1 + 0x34) == *(int *)(param_1 + 5)) &&
                       (cVar6 != '\0')) {
                      bVar13 = bVar14;
                    }
                    else {
                      local_278 = *(int *)((longlong)param_1 + 0x34);
                      lVar7 = FUN_1802a7cf0(*param_1,param_1 + 1,&local_258,local_200);
                      bVar13 = lVar7 != 0;
                    }
                    bStack_22d = bVar13;
                  }
                  if ((local_266 != '\0') && ((int)uVar9 != 0)) {
                    cStack_230 = '\0';
                    cStack_22e = '\0';
                  }
                  *(byte *)(param_3 + 3) = *(byte *)(param_3 + 3) | bVar14;
                  *(byte *)((longlong)param_3 + 0x19) = *(byte *)((longlong)param_3 + 0x19) | bVar13
                  ;
                  *(undefined1 *)((longlong)param_3 + 0x1a) = 1;
                  plVar2 = (longlong *)param_3[5];
                  if (plVar2 == (longlong *)param_3[6]) {
                    FUN_1802a9050(param_3 + 4,plVar2,&local_248);
                  }
                  else {
                    *plVar2 = local_248;
                    plVar2[1] = CONCAT44(fStack_23c,fStack_240);
                    plVar2[2] = CONCAT44(fStack_234,local_238);
                    plVar2[3] = CONCAT26(uStack_22a,
                                         CONCAT15(uStack_22b,
                                                  CONCAT14(uStack_22c,
                                                           CONCAT13(bStack_22d,
                                                                    CONCAT12(cStack_22e,
                                                                             CONCAT11(bStack_22f,
                                                                                      cStack_230))))
                                                 ));
                    plVar2[4] = CONCAT44(uStack_224,local_228);
                    param_3[5] = (double)((longlong)param_3[5] + 0x28);
                  }
                  uVar21 = (int)uVar9 + 1;
                  uVar9 = (ulonglong)uVar21;
                  lVar7 = local_1c0;
                } while ((int)uVar21 < local_210);
                fVar20 = local_25c;
              }
              puVar10 = local_1f8;
            }
          }
          uVar4 = _UNK_1808adea4;
          uVar21 = _DAT_1808adea0;
          dVar3 = DAT_1808ac4e8;
          local_260 = local_260 + 1;
          uVar9 = (ulonglong)local_260;
          puVar15 = local_1b8;
        } while ((int)local_260 < local_20c);
        if (((local_265 == '\0') && (*(char *)(param_3 + 3) != '\0')) &&
           (DAT_1808ac4e8 <=
            (double)CONCAT44((uint)((ulonglong)(param_3[1] - local_208) >> 0x20) & _UNK_1808adea4,
                             SUB84(param_3[1] - local_208,0) & _DAT_1808adea0))) {
          param_3[1] = local_208;
        }
        if (((local_264 == '\0') && (*(char *)((longlong)param_3 + 0x19) != '\0')) &&
           (dVar3 <= (double)CONCAT44((uint)((ulonglong)(param_3[2] - local_208) >> 0x20) & uVar4,
                                      SUB84(param_3[2] - local_208,0) & uVar21))) {
          param_3[2] = local_208;
        }
      }
    }
  }
  return;
}



/* ===== 1802a7c30 FUN_1802a7c30 ===== */

longlong FUN_1802a7c30(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  int iVar3;
  undefined1 local_res8 [32];
  
  FUN_1802a6b30();
  if ((param_1 != 0) && (DAT_180cfeac8 != '\0')) {
    if (DAT_180cfeae8 == 0) {
      iVar3 = -1;
    }
    else {
      uVar1 = FUN_180011200(param_1 + (ulonglong)DAT_180cfeae8);
      if (uVar1 == 0xffffffff) {
        iVar3 = -1;
      }
      else {
        plVar2 = (longlong *)FUN_1803a0940(local_res8,uVar1);
        if (*plVar2 == 0) {
          iVar3 = -1;
        }
        else {
          iVar3 = (uVar1 & 0x7fff) - 1;
        }
      }
    }
    if ((-1 < iVar3) && (iVar3 < (int)(DAT_180cfeab8 - DAT_180cfeab0 >> 4) * -0x33333333)) {
      return (longlong)iVar3 * 0x50 + DAT_180cfeab0;
    }
  }
  return 0;
}



/* ===== 1802a7cf0 FUN_1802a7cf0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_1802a7cf0(longlong param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4,
                      int param_5)

{
  char cVar1;
  byte bVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong uVar8;
  undefined1 auStack_4a8 [32];
  undefined8 *local_488;
  longlong *local_480;
  float local_468;
  undefined4 local_464;
  undefined4 local_460;
  uint local_45c;
  undefined8 local_458;
  float local_450;
  undefined8 local_448;
  undefined8 uStack_440;
  ulonglong local_438;
  undefined8 uStack_430;
  undefined8 local_428;
  undefined8 uStack_420;
  undefined8 local_418;
  ulonglong uStack_410;
  undefined8 local_408;
  undefined8 uStack_400;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined1 local_388 [8];
  longlong local_380;
  longlong local_378;
  longlong local_248 [2];
  char local_238 [4];
  undefined8 local_234;
  undefined8 local_228;
  undefined8 local_220;
  undefined1 local_218;
  undefined8 local_214;
  undefined8 local_208;
  undefined8 local_200;
  undefined1 local_1f8;
  undefined8 local_1f4;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined1 local_1d8;
  undefined8 local_1d4;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined1 local_1b8;
  undefined8 local_1b4;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined1 local_198;
  undefined8 local_194;
  undefined8 local_188;
  undefined8 local_180;
  undefined1 local_178;
  undefined8 local_174;
  undefined8 local_168;
  undefined8 local_160;
  undefined1 local_158;
  undefined8 local_154;
  undefined8 local_148;
  undefined8 local_140;
  undefined1 local_138;
  undefined8 local_134;
  undefined8 local_128;
  undefined8 local_120;
  undefined1 local_118;
  undefined8 local_114;
  undefined8 local_108;
  undefined8 local_100;
  undefined1 local_f8;
  undefined8 local_f4;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined1 local_d8;
  undefined8 local_d4;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined1 local_b8;
  undefined8 local_b4;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined1 local_98;
  undefined8 local_94;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 local_78;
  undefined8 local_74;
  undefined8 local_68;
  undefined8 local_60;
  undefined1 local_58;
  undefined8 local_54;
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_4a8;
  if (param_5 == 0) {
    if ((((((DAT_180961f40 != 0) && (DAT_180961f48 != 0)) && (DAT_180961f50 != 0)) &&
         ((DAT_180961f60 != 0 && (DAT_180961f68 != 0)))) &&
        ((DAT_180cfee68 != 0 && ((DAT_180cfee80 != 0 && (DAT_1809619a0 != 0)))))) &&
       ((param_1 != 0 && ((param_4 != 0 && (lVar6 = FUN_18000f3a0(), lVar6 != 0)))))) {
      local_448 = 0;
      uStack_440 = 0;
      local_438 = 0;
      uStack_430 = 0;
      local_428 = 0;
      uStack_420 = 0;
      local_418 = 0;
      uStack_410 = 0;
      local_408 = 0;
      uStack_400 = 0;
      local_3f8 = 0;
      uStack_3f0 = 0;
      local_3e8 = 0;
      uStack_3e0 = 0;
      local_3d8 = 0;
      uStack_3d0 = 0;
      local_3c8 = 0;
      uStack_3c0 = 0;
      local_3b8 = 0;
      uStack_3b0 = 0;
      local_3a8 = 0;
      uStack_3a0 = 0;
      local_398 = 0;
      uStack_390 = 0;
      FUN_180540170(local_388,0,0x140);
      local_488 = (undefined8 *)CONCAT71(local_488._1_7_,0xf);
      cVar1 = FUN_1802ae0b0(&local_448,param_1,0x1c200b,3);
      if (cVar1 != '\0') {
        uStack_410 = uStack_410 | 0x200;
        local_438 = local_438 | 0x4000000000;
        local_480 = (longlong *)local_388;
        local_488 = &local_448;
        cVar1 = FUN_180044180(lVar6,&local_3c8,param_2,param_3);
        if (cVar1 != '\0') {
          if (local_380 == param_4) {
            return local_378;
          }
          return 0;
        }
      }
    }
    return 0;
  }
  FUN_1802a6b30();
  if (param_1 == 0) {
    return 0;
  }
  if (DAT_180ca0a0c == 0) {
    return 0;
  }
  uVar8 = (ulonglong)DAT_180ca0a10;
  if (DAT_180ca0a10 == 0) {
    return 0;
  }
  lVar6 = FUN_18000f3a0(param_1 + (ulonglong)DAT_180ca0a0c);
  if (lVar6 == 0) {
    return 0;
  }
  uVar3 = FUN_180011200(lVar6 + uVar8);
  plVar7 = (longlong *)FUN_1803a0940(&local_468,uVar3);
  if (*plVar7 == 0) {
    return 0;
  }
  lVar6 = FUN_18000f3a0((ulonglong)DAT_1809619a0 + (ulonglong)DAT_1809619c0 + *plVar7);
  if (lVar6 == 0) {
    return 0;
  }
  if (DAT_1811161bc == 0.0) {
    DAT_1811161bc = (float)FUN_18038eaf0("CCSWeaponBaseVData","m_nDamage");
    DAT_1811161b8 = FUN_18038eaf0("CCSWeaponBaseVData","m_flPenetration");
    uVar4 = FUN_18038eaf0("CCSWeaponBaseVData","m_flRangeModifier");
    DAT_1811161b4 = uVar4;
    if (DAT_1811161bc == 0.0) {
      local_468 = DAT_1811161bc;
      goto LAB_1802a7f96;
    }
  }
  uVar4 = DAT_1811161b4;
  iVar5 = FUN_180011200((ulonglong)(uint)DAT_1811161bc + lVar6);
  local_468 = (float)iVar5;
LAB_1802a7f96:
  if (DAT_1811161b8 == 0) {
    local_464 = 0;
  }
  else {
    local_464 = FUN_18000f3d0(lVar6 + (ulonglong)DAT_1811161b8);
  }
  if (uVar4 == 0) {
    local_460 = 0;
  }
  else {
    local_460 = FUN_18000f3d0((ulonglong)uVar4 + lVar6);
  }
  lVar6 = 0;
  if (DAT_180cfeaf0 == 0) {
    local_45c = 0;
  }
  else {
    bVar2 = FUN_180011220(param_1 + (ulonglong)DAT_180cfeaf0);
    local_45c = (uint)bVar2;
  }
  local_480 = local_248;
  local_458 = CONCAT44((float)((ulonglong)*param_3 >> 0x20) - (float)((ulonglong)*param_2 >> 0x20),
                       (float)*param_3 - (float)*param_2);
  local_450 = *(float *)(param_3 + 1) - *(float *)(param_2 + 1);
  local_248[0] = 0;
  local_248[1] = 0;
  local_238[0] = '\0';
  local_234 = 0;
  local_228 = 0;
  local_220 = 0;
  local_218 = 0;
  local_214 = 0;
  local_208 = 0;
  local_200 = 0;
  local_1f8 = 0;
  local_1f4 = 0;
  local_1e8 = 0;
  local_1e0 = 0;
  local_1d8 = 0;
  local_1d4 = 0;
  local_1c8 = 0;
  local_1c0 = 0;
  local_1b8 = 0;
  local_1b4 = 0;
  local_1a8 = 0;
  local_1a0 = 0;
  local_198 = 0;
  local_194 = 0;
  local_188 = 0;
  local_180 = 0;
  local_178 = 0;
  local_174 = 0;
  local_168 = 0;
  local_160 = 0;
  local_158 = 0;
  local_154 = 0;
  local_148 = 0;
  local_140 = 0;
  local_138 = 0;
  local_134 = 0;
  local_128 = 0;
  local_120 = 0;
  local_118 = 0;
  local_114 = 0;
  local_108 = 0;
  local_100 = 0;
  local_f8 = 0;
  local_f4 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_d4 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_b4 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_94 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_74 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_54 = 0;
  local_488 = (undefined8 *)CONCAT44(local_488._4_4_,param_5);
  iVar5 = FUN_1802afa00(param_1,&local_468,param_2,&local_458);
  uVar4 = 0;
  if (0 < iVar5) {
    do {
      uVar8 = (ulonglong)uVar4;
      if (local_248[uVar8 * 4] == param_4) {
        if (local_238[uVar8 * 0x20] != '\0') {
          lVar6 = local_248[uVar8 * 4 + 1];
        }
        return lVar6;
      }
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < iVar5);
  }
  return 0;
}



/* ===== 1802a8260 FUN_1802a8260 ===== */

undefined8 FUN_1802a8260(undefined4 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 extraout_XMM0_Da;
  
  (*DAT_180962048)(param_1,param_2,0);
  *param_3 = extraout_XMM0_Da;
  return 1;
}



/* ===== 1802a8290 FUN_1802a8290 ===== */

undefined8 FUN_1802a8290(float *param_1,float *param_2,float param_3,float param_4)

{
  float fVar1;
  char cVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float local_res18 [2];
  float local_res20;
  float local_b8 [44];
  
  fVar10 = DAT_1808ac34c;
  if (param_3 < DAT_1808ac34c) {
    local_res18[0] = 0.0;
    local_res20 = param_4;
    if ((DAT_180962048 == 0) || (cVar2 = FUN_1802a8260(param_1,param_2,local_res18), cVar2 == '\0'))
    {
      if (DAT_180d00c10 != DAT_180d00c18) {
        fVar1 = *param_1;
        fVar7 = param_1[1];
        fVar11 = *param_2 - fVar1;
        fVar6 = param_1[2];
        fVar12 = param_2[1] - fVar7;
        fVar13 = param_2[2] - fVar6;
        fVar9 = fVar12 * fVar12 + fVar11 * fVar11 + fVar13 * fVar13;
        pfVar5 = DAT_180d00c10;
        do {
          if (fVar9 <= DAT_1808abf8c) {
            fVar7 = 0.0;
          }
          else {
            local_b8[2] = 1.0;
            local_b8[0] = 0.0;
            local_b8[1] = ((pfVar5[1] - fVar7) * fVar12 + (*pfVar5 - fVar1) * fVar11 +
                          (pfVar5[2] - fVar6) * fVar13) / fVar9;
            pfVar4 = local_b8;
            if (0.0 <= local_b8[1]) {
              pfVar4 = local_b8 + 1;
            }
            pfVar3 = local_b8 + 2;
            if (local_b8[1] <= fVar10) {
              pfVar3 = pfVar4;
            }
            fVar7 = *pfVar3;
          }
          fVar8 = (fVar11 * fVar7 + fVar1) - *pfVar5;
          fVar6 = (fVar13 * fVar7 + param_1[2]) - pfVar5[2];
          fVar7 = (fVar12 * fVar7 + param_1[1]) - pfVar5[1];
          if (fVar8 * fVar8 + fVar7 * fVar7 + fVar6 * fVar6 < DAT_1808acc98) goto LAB_1802a8495;
          fVar7 = param_1[1];
          pfVar5 = pfVar5 + 4;
          fVar6 = param_1[2];
        } while (pfVar5 != DAT_180d00c18);
      }
      fVar10 = 0.0;
LAB_1802a8495:
      param_4 = local_res20;
    }
    else {
      fVar10 = local_res18[0];
    }
    if ((0.0 < fVar10) && ((param_3 - param_4 <= 0.0 || (param_3 - param_4 < fVar10)))) {
      return 0;
    }
  }
  return 1;
}



/* ===== 1802a8510 FUN_1802a8510 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802a8510(longlong *param_1,double param_2)

{
  double dVar1;
  uint uVar2;
  longlong lVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong *plVar14;
  int iVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  ulonglong uVar18;
  undefined8 *puVar19;
  longlong lVar20;
  undefined8 *puVar21;
  longlong lVar22;
  double dVar23;
  longlong local_res18;
  longlong local_res20;
  undefined1 local_a8 [8];
  longlong *local_a0;
  longlong local_98;
  longlong **local_90;
  undefined8 *local_88;
  undefined8 *local_78;
  uint local_70;
  undefined4 local_6c;
  longlong local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  
  FUN_1802a6b30();
  if (DAT_180cfeb00 != DAT_180cfeb08) {
    DAT_180cfeb08 = DAT_180cfeb00;
  }
  if (DAT_180cfeac8 != '\0') {
    FUN_1802b01d0();
    local_a0 = (longlong *)0x0;
    local_98 = 0;
    local_a0 = (longlong *)FUN_1804ecaa0(0x30);
    *local_a0 = (longlong)local_a0;
    local_a0[1] = (longlong)local_a0;
    local_a0[2] = (longlong)local_a0;
    *(undefined2 *)(local_a0 + 3) = 0x101;
    FUN_1803a13a0(&local_68);
    lVar22 = CONCAT44(uStack_5c,local_60);
    lVar20 = local_68;
    local_res18 = lVar22;
    if (local_68 != lVar22) {
      do {
        lVar12 = *(longlong *)(lVar20 + 8);
        local_res20 = lVar12;
        if ((((lVar12 != 0) && (lVar12 != *param_1)) &&
            (lVar8 = FUN_18000f3a0(lVar12 + 0x10), lVar8 != 0)) &&
           (((cVar4 = FUN_180011220(lVar8 + 0x30), -1 < cVar4 &&
             (lVar8 = FUN_18000f3a0((ulonglong)DAT_180cfeaec + lVar12), lVar8 != 0)) &&
            ((DAT_180cfeae8 != 0 &&
             (uVar5 = FUN_180011200(lVar12 + (ulonglong)DAT_180cfeae8), uVar5 != 0xffffffff)))))) {
          plVar9 = (longlong *)FUN_1803a0940(local_a8,uVar5);
          puVar19 = DAT_180cfeab8;
          if ((*plVar9 != 0) && ((uVar5 & 0x7fff) != 0)) {
            uVar5 = uVar5 & 0x7fff;
            if ((int)((longlong)DAT_180cfeab8 - DAT_180cfeab0 >> 4) * -0x33333333 <=
                (int)(uVar5 - 1)) {
              uVar16 = (ulonglong)uVar5;
              lVar8 = (longlong)DAT_180cfeab8 - DAT_180cfeab0 >> 4;
              uVar18 = lVar8 * -0x3333333333333333;
              if (uVar16 < uVar18) {
                puVar21 = (undefined8 *)((ulonglong)uVar5 * 0x50 + DAT_180cfeab0);
                lVar22 = local_res18;
                for (puVar17 = puVar21; local_res18 = lVar22, puVar17 != puVar19;
                    puVar17 = puVar17 + 10) {
                  FUN_1802a9370(puVar17 + 7);
                  FUN_1802a92f0(puVar17 + 4);
                  lVar22 = local_res18;
                }
                DAT_180cfeab8 = puVar21;
              }
              else if (uVar18 < uVar16) {
                if ((ulonglong)((DAT_180cfeac0 - DAT_180cfeab0 >> 4) * -0x3333333333333333) < uVar16
                   ) {
                  FUN_1802a8dd0(uVar16,uVar16);
                }
                else {
                  for (lVar8 = uVar16 + lVar8 * 0x3333333333333333; lVar8 != 0; lVar8 = lVar8 + -1)
                  {
                    DAT_180cfeab8[3] = 0;
                    *DAT_180cfeab8 = 0;
                    DAT_180cfeab8[1] = 0;
                    DAT_180cfeab8[2] = 0;
                    DAT_180cfeab8[4] = 0;
                    DAT_180cfeab8[5] = 0;
                    DAT_180cfeab8[6] = 0;
                    DAT_180cfeab8[7] = 0;
                    DAT_180cfeab8[8] = 0;
                    DAT_180cfeab8[9] = 0;
                    DAT_180cfeab8 = DAT_180cfeab8 + 10;
                  }
                }
              }
            }
            lVar3 = DAT_180cfeab0;
            lVar10 = (ulonglong)uVar5 - 1;
            lVar8 = *param_1;
            cVar4 = FUN_180011220((ulonglong)DAT_180cfeacc + lVar12);
            if ((((((cVar4 == '\0') && (lVar11 = FUN_18000f3a0(lVar12 + 0x10), lVar11 != 0)) &&
                  (cVar4 = FUN_180011220(lVar11 + 0x30), -1 < cVar4)) &&
                 ((DAT_180cfead0 == 0 ||
                  (cVar4 = FUN_180011220(lVar12 + (ulonglong)DAT_180cfead0), cVar4 == '\x01')))) &&
                ((DAT_180cfead4 == 0 ||
                 (cVar4 = FUN_180011220(lVar12 + (ulonglong)DAT_180cfead4), cVar4 == '\0')))) &&
               ((((lVar8 == 0 || (cVar4 = FUN_180469a20(lVar12,lVar8), cVar4 == '\0')) &&
                 ((DAT_180cfead8 == 0 ||
                  (cVar4 = FUN_180011220(lVar12 + (ulonglong)DAT_180cfead8), 1 < (byte)(cVar4 - 7U))
                  ))) && ((((iVar6 = FUN_180011200((ulonglong)DAT_180cfeadc + lVar12), 0 < iVar6 &&
                            (DAT_180cfeae0 != 0)) &&
                           (lVar12 = FUN_18000f3a0(lVar12 + (ulonglong)DAT_180cfeae0), lVar12 != 0))
                          && ((DAT_180cfeae4 == 0 ||
                              (cVar4 = FUN_180011220((ulonglong)DAT_180cfeae4 + lVar12),
                              cVar4 == '\x01')))))))) {
              FUN_1800242d0(&DAT_180cfeb00,&local_res20);
              plVar9 = local_a0;
              *(undefined1 *)(lVar3 + 0x1b + lVar10 * 0x50) = 0;
              local_90 = &local_a0;
              local_88 = (undefined8 *)0x0;
              local_88 = (undefined8 *)FUN_1804ecaa0(0x30);
              dVar1 = *(double *)(lVar3 + lVar10 * 0x50);
              local_88[4] = dVar1;
              *(uint *)(local_88 + 5) = uVar5 - 1;
              *local_88 = plVar9;
              local_88[1] = plVar9;
              local_88[2] = plVar9;
              *(undefined2 *)(local_88 + 3) = 0;
              puVar19 = (undefined8 *)local_a0[1];
              puVar17 = puVar19;
              if (*(char *)((longlong)puVar19 + 0x19) == '\0') {
                do {
                  puVar19 = puVar17;
                  if (dVar1 < (double)puVar19[4]) {
                    puVar17 = (undefined8 *)*puVar19;
                  }
                  else {
                    puVar17 = (undefined8 *)puVar19[2];
                  }
                  uVar5 = (uint)(dVar1 < (double)puVar19[4]);
                } while (*(char *)((longlong)puVar17 + 0x19) == '\0');
              }
              else {
                uVar5 = 0;
              }
              if (local_98 == 0x555555555555555) {
                    /* WARNING: Subroutine does not return */
                FUN_18006dab0();
              }
              local_88 = (undefined8 *)0x0;
              local_6c = uStack_5c;
              local_78 = puVar19;
              local_70 = uVar5;
              FUN_1800774d0(&local_a0,&local_78);
            }
            else {
              *(undefined2 *)(lVar3 + 0x19 + lVar10 * 0x50) = 0;
              *(undefined1 *)(lVar3 + 0x18 + lVar10 * 0x50) = 0;
            }
          }
        }
        lVar20 = lVar20 + 0x10;
      } while (lVar20 != lVar22);
    }
    FUN_1800244c0(&local_68);
    uVar2 = _UNK_1808adea4;
    uVar5 = _DAT_1808adea0;
    dVar1 = DAT_1808ac368;
    DAT_1809f4bb0 = (param_2 - _DAT_180cfeaf8) * DAT_1808ac420 + DAT_1809f4bb0 * DAT_1808ac4f0;
    iVar15 = (int)((longlong)DAT_180cfeb08 - (longlong)DAT_180cfeb00 >> 3);
    iVar7 = (int)(DAT_1809f4bb0 * DAT_1808ac6a8 * (double)iVar15);
    iVar6 = 1;
    if (1 < iVar7) {
      iVar6 = iVar7;
    }
    if (iVar15 < iVar6) {
      iVar6 = iVar15;
    }
    _DAT_180cfeaf8 = param_2;
    plVar9 = DAT_180cfeb00;
    plVar14 = DAT_180cfeb08;
    if (0 < iVar15) {
      iVar7 = 0;
      plVar13 = (longlong *)*local_a0;
      cVar4 = *(char *)((longlong)plVar13 + 0x19);
      while( true ) {
        plVar9 = DAT_180cfeb00;
        plVar14 = DAT_180cfeb08;
        if (cVar4 != '\0') break;
        dVar23 = param_2 - *(double *)(DAT_180cfeab0 + (longlong)(int)plVar13[5] * 0x50);
        if (dVar1 <= (double)CONCAT44((uint)((ulonglong)dVar23 >> 0x20) & uVar2,
                                      SUB84(dVar23,0) & uVar5)) {
          *(undefined1 *)(DAT_180cfeab0 + 0x1b + (longlong)(int)plVar13[5] * 0x50) = 1;
          iVar7 = iVar7 + 1;
        }
        plVar9 = DAT_180cfeb00;
        plVar14 = DAT_180cfeb08;
        if (iVar6 <= iVar7) break;
        plVar9 = (longlong *)plVar13[2];
        if (*(char *)((longlong)plVar9 + 0x19) == '\0') {
          cVar4 = *(char *)(*plVar9 + 0x19);
          plVar13 = plVar9;
          while (cVar4 == '\0') {
            plVar13 = (longlong *)*plVar13;
            cVar4 = *(char *)(*plVar13 + 0x19);
          }
        }
        else {
          cVar4 = *(char *)(plVar13[1] + 0x19);
          plVar14 = (longlong *)plVar13[1];
          plVar9 = plVar13;
          while ((plVar13 = plVar14, cVar4 == '\0' && (plVar9 == (longlong *)plVar13[2]))) {
            cVar4 = *(char *)(plVar13[1] + 0x19);
            plVar14 = (longlong *)plVar13[1];
            plVar9 = plVar13;
          }
        }
        cVar4 = *(char *)((longlong)plVar13 + 0x19);
      }
    }
    for (; plVar13 = DAT_180cfeb08, plVar9 != DAT_180cfeb08; plVar9 = plVar9 + 1) {
      DAT_180cfeb08 = plVar14;
      if (DAT_180cfeae8 != 0) {
        lVar22 = *plVar9;
        uVar5 = FUN_180011200(lVar22 + (ulonglong)DAT_180cfeae8);
        if ((((uVar5 != 0xffffffff) &&
             (plVar14 = (longlong *)FUN_1803a0940(&local_res18,uVar5), *plVar14 != 0)) &&
            ((uVar5 & 0x7fff) != 0)) &&
           (((int)((uVar5 & 0x7fff) - 1) <
             (int)((longlong)DAT_180cfeab8 - DAT_180cfeab0 >> 4) * -0x33333333 &&
            (*(char *)(((ulonglong)(uVar5 & 0x7fff) - 1) * 0x50 + DAT_180cfeab0 + 0x1b) != '\0'))))
        {
          FUN_1802a73b0(param_1,lVar22);
        }
      }
      plVar14 = DAT_180cfeb08;
      DAT_180cfeb08 = plVar13;
    }
    DAT_180cfeb08 = plVar14;
    FUN_1802a8d10(&local_a0);
  }
  return;
}



/* ===== 1802a8b60 FUN_1802a8b60 ===== */

void FUN_1802a8b60(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = DAT_180cfeab8;
  lVar2 = DAT_180cfeab0;
  if (DAT_180cfeab0 != DAT_180cfeab8) {
    do {
      if (*(longlong *)(lVar2 + 0x20) != *(longlong *)(lVar2 + 0x28)) {
        *(longlong *)(lVar2 + 0x28) = *(longlong *)(lVar2 + 0x20);
      }
      if (*(longlong *)(lVar2 + 0x38) != *(longlong *)(lVar2 + 0x40)) {
        *(longlong *)(lVar2 + 0x40) = *(longlong *)(lVar2 + 0x38);
      }
      lVar1 = DAT_180cfeab8;
      lVar2 = lVar2 + 0x50;
    } while (lVar2 != lVar3);
    lVar3 = DAT_180cfeab0;
    if (DAT_180cfeab0 != DAT_180cfeab8) {
      do {
        FUN_1802a9370(lVar3 + 0x38);
        FUN_1802a92f0(lVar3 + 0x20);
        lVar3 = lVar3 + 0x50;
      } while (lVar3 != lVar1);
      DAT_180cfeab8 = DAT_180cfeab0;
    }
  }
  if (DAT_180cfeb00 != DAT_180cfeb08) {
    DAT_180cfeb08 = DAT_180cfeb00;
  }
  return;
}



/* ===== 1802a8c20 FUN_1802a8c20 ===== */

void FUN_1802a8c20(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  lVar1 = *param_1;
  uVar3 = param_3 - param_2 >> 5;
  if ((ulonglong)(param_1[2] - lVar1 >> 5) < uVar3) {
    FUN_1802a9210(param_1,uVar3);
    lVar1 = *param_1;
    FUN_180540530(lVar1,param_2,uVar3 * 0x20);
    param_1[1] = uVar3 * 0x20 + lVar1;
    return;
  }
  uVar2 = param_1[1] - lVar1 >> 5;
  if (uVar2 < uVar3) {
    FUN_180540530(lVar1,param_2,uVar2 * 0x20);
    lVar1 = param_1[1];
    lVar4 = (uVar3 - uVar2) * 0x20;
    FUN_180540530(lVar1,uVar2 * 0x20 + param_2,lVar4);
    param_1[1] = lVar4 + lVar1;
  }
  else {
    FUN_180540530(lVar1,param_2,uVar3 * 0x20);
    param_1[1] = uVar3 * 0x20 + lVar1;
  }
  return;
}



/* ===== 1802a8d10 FUN_1802a8d10 ===== */

void FUN_1802a8d10(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  cVar1 = *(char *)((longlong)*(longlong **)(*param_1 + 8) + 0x19);
  plVar3 = *(longlong **)(*param_1 + 8);
  while (cVar1 == '\0') {
    FUN_1802a8d70(param_1,param_1,plVar3[2]);
    plVar2 = (longlong *)*plVar3;
    thunk_FUN_1803d64e0(plVar3,0x30);
    plVar3 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  thunk_FUN_1803d64e0(*param_1,0x30);
  return;
}



/* ===== 1802a8d70 FUN_1802a8d70 ===== */

void FUN_1802a8d70(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_3 + 0x19);
  while (cVar1 == '\0') {
    FUN_1802a8d70(param_1,param_2,param_3[2]);
    plVar2 = (longlong *)*param_3;
    thunk_FUN_1803d64e0(param_3,0x30);
    param_3 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  return;
}



/* ===== 1802a8dd0 FUN_1802a8dd0 ===== */

void FUN_1802a8dd0(undefined8 param_1,ulonglong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  ulonglong uVar13;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  
  if (0x333333333333333 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1800118d0();
  }
  uVar7 = ((longlong)DAT_180cfeac0 - (longlong)DAT_180cfeab0 >> 4) * -0x3333333333333333;
  uVar13 = 0x333333333333333;
  if (uVar7 <= 0x333333333333333 - (uVar7 >> 1)) {
    uVar13 = (uVar7 >> 1) + uVar7;
    if (uVar13 < param_2) {
      uVar13 = param_2;
    }
    else if (0x333333333333333 < uVar13) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  lVar9 = (longlong)DAT_180cfeab8 - (longlong)DAT_180cfeab0 >> 4;
  puVar6 = (undefined8 *)FUN_18000fb70(uVar13 * 0x50);
  puVar11 = auStack_38;
  puVar12 = auStack_38;
  puVar8 = puVar6 + lVar9 * 2;
  lVar9 = param_2 + lVar9 * 0x3333333333333333;
  puVar10 = DAT_180cfeab0;
  puVar5 = DAT_180cfeab8;
  while( true ) {
    DAT_180cfeab0 = puVar10;
    DAT_180cfeab8 = puVar5;
    if (lVar9 == 0) break;
    puVar8[3] = 0;
    *puVar8 = 0;
    puVar8[1] = 0;
    puVar8[2] = 0;
    puVar8[4] = 0;
    puVar8[5] = 0;
    puVar8[6] = 0;
    puVar8[7] = 0;
    puVar8[8] = 0;
    puVar8[9] = 0;
    puVar8 = puVar8 + 10;
    lVar9 = lVar9 + -1;
    puVar10 = DAT_180cfeab0;
    puVar5 = DAT_180cfeab8;
  }
  puVar8 = puVar6;
  if (puVar10 != puVar5) {
    do {
      *puVar8 = *puVar10;
      puVar8[1] = puVar10[1];
      puVar8[2] = puVar10[2];
      *(undefined1 *)(puVar8 + 3) = *(undefined1 *)(puVar10 + 3);
      *(undefined1 *)((longlong)puVar8 + 0x19) = *(undefined1 *)((longlong)puVar10 + 0x19);
      *(undefined1 *)((longlong)puVar8 + 0x1a) = *(undefined1 *)((longlong)puVar10 + 0x1a);
      *(undefined1 *)((longlong)puVar8 + 0x1b) = *(undefined1 *)((longlong)puVar10 + 0x1b);
      uVar1 = puVar10[6];
      uVar2 = puVar10[5];
      uVar3 = puVar10[4];
      puVar10[6] = 0;
      puVar10[5] = 0;
      puVar10[4] = 0;
      puVar8[4] = uVar3;
      puVar8[5] = uVar2;
      puVar8[6] = uVar1;
      uVar1 = puVar10[9];
      uVar2 = puVar10[8];
      uVar3 = puVar10[7];
      puVar10[9] = 0;
      puVar10[8] = 0;
      puVar10[7] = 0;
      puVar10 = puVar10 + 10;
      puVar8[7] = uVar3;
      puVar8[8] = uVar2;
      puVar8[9] = uVar1;
      puVar8 = puVar8 + 10;
    } while (puVar10 != puVar5);
  }
  puVar10 = DAT_180cfeab8;
  puVar8 = DAT_180cfeab0;
  if (DAT_180cfeab0 == (undefined8 *)0x0) goto LAB_1802a8ff2;
  for (; puVar8 != puVar10; puVar8 = puVar8 + 10) {
    FUN_1802a9370(puVar8 + 7);
    FUN_1802a92f0(puVar8 + 4);
  }
  puVar8 = DAT_180cfeab0;
  if ((ulonglong)(((longlong)DAT_180cfeac0 - (longlong)DAT_180cfeab0 >> 4) << 4) < 0x1000) {
LAB_1802a8fea:
    puVar12 = puVar11;
  }
  else {
    puVar8 = (undefined8 *)DAT_180cfeab0[-1];
    puVar10 = (undefined8 *)((longlong)DAT_180cfeab0 + (-8 - (longlong)puVar8));
    if (&DAT_0000001f < puVar10) {
      pcVar4 = (code *)swi(0x29);
      (*pcVar4)(5);
      puVar11 = auStack_30;
      puVar8 = puVar10;
      goto LAB_1802a8fea;
    }
  }
  *(undefined8 *)(puVar12 + -8) = 0x1802a8ff2;
  thunk_FUN_1803d64e0(puVar8);
LAB_1802a8ff2:
  DAT_180cfeab0 = puVar6;
  DAT_180cfeab8 = puVar6 + param_2 * 10;
  DAT_180cfeac0 = puVar6 + uVar13 * 10;
  return;
}



/* ===== 1802a9050 FUN_1802a9050 ===== */

longlong FUN_1802a9050(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  longlong lVar16;
  ulonglong uVar17;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  lVar4 = *param_1;
  uVar17 = 0x666666666666666;
  lVar10 = (param_1[1] - lVar4 >> 3) * -0x3333333333333333;
  if (lVar10 == 0x666666666666666) {
                    /* WARNING: Subroutine does not return */
    FUN_1800118d0();
  }
  uVar1 = lVar10 + 1;
  uVar12 = (param_1[2] - lVar4 >> 3) * -0x3333333333333333;
  if (uVar12 <= 0x666666666666666 - (uVar12 >> 1)) {
    uVar12 = (uVar12 >> 1) + uVar12;
    uVar17 = uVar1;
    if (uVar1 <= uVar12) {
      uVar17 = uVar12;
    }
    if (0x666666666666666 < uVar17) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  lVar11 = FUN_18000fb70(uVar17 * 0x28);
  uVar3 = param_3[1];
  uVar6 = *(undefined4 *)(param_3 + 2);
  uVar7 = *(undefined4 *)((longlong)param_3 + 0x14);
  uVar8 = *(undefined4 *)(param_3 + 3);
  uVar9 = *(undefined4 *)((longlong)param_3 + 0x1c);
  lVar4 = (param_2 - lVar4) / 0x28;
  puVar2 = (undefined8 *)(lVar11 + lVar4 * 0x28);
  *puVar2 = *param_3;
  puVar2[1] = uVar3;
  lVar4 = lVar11 + lVar4 * 0x28;
  uVar3 = param_3[4];
  *(undefined4 *)(lVar4 + 0x10) = uVar6;
  *(undefined4 *)(lVar4 + 0x14) = uVar7;
  *(undefined4 *)(lVar4 + 0x18) = uVar8;
  *(undefined4 *)(lVar4 + 0x1c) = uVar9;
  *(undefined8 *)(lVar4 + 0x20) = uVar3;
  lVar10 = *param_1;
  if (param_2 == param_1[1]) {
    lVar16 = param_1[1] - lVar10;
    lVar13 = lVar11;
    param_2 = lVar10;
  }
  else {
    FUN_180540530(lVar11,lVar10,param_2 - lVar10);
    lVar13 = lVar4 + 0x28;
    lVar16 = param_1[1] - param_2;
  }
  puVar14 = auStack_48;
  puVar15 = auStack_48;
  FUN_180540530(lVar13,param_2,lVar16);
  lVar10 = *param_1;
  if (lVar10 == 0) goto LAB_1802a91c7;
  lVar13 = lVar10;
  if ((ulonglong)((param_1[2] - lVar10 >> 3) * 8) < 0x1000) {
LAB_1802a91bc:
    puVar15 = puVar14;
  }
  else {
    lVar13 = *(longlong *)(lVar10 + -8);
    if (0x1f < (lVar10 - lVar13) - 8U) {
      lVar13 = 5;
      pcVar5 = (code *)swi(0x29);
      (*pcVar5)(5);
      puVar14 = auStack_40;
      goto LAB_1802a91bc;
    }
  }
  *(undefined8 *)(puVar15 + -8) = 0x1802a91c7;
  thunk_FUN_1803d64e0(lVar13);
LAB_1802a91c7:
  *param_1 = lVar11;
  param_1[1] = lVar11 + uVar1 * 0x28;
  param_1[2] = uVar17 * 0x28 + lVar11;
  return lVar4;
}



/* ===== 1802a9210 FUN_1802a9210 ===== */

void FUN_1802a9210(longlong *param_1,ulonglong param_2)

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
  if (0x7ffffffffffffff < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1800118d0();
  }
  lVar2 = *param_1;
  uVar7 = param_1[2] - lVar2 >> 5;
  if (0x7ffffffffffffff - (uVar7 >> 1) < uVar7) {
    uVar7 = 0x7ffffffffffffff;
  }
  else {
    uVar7 = (uVar7 >> 1) + uVar7;
    if (uVar7 < param_2) {
      uVar7 = param_2;
    }
  }
  puVar6 = auStack_28;
  if (lVar2 == 0) goto LAB_1802a92b5;
  lVar3 = lVar2;
  if ((param_1[2] - lVar2 & 0xffffffffffffffe0U) < 0x1000) {
LAB_1802a929d:
    puVar5 = puVar4;
  }
  else {
    lVar3 = *(longlong *)(lVar2 + -8);
    if (0x1f < (lVar2 - lVar3) - 8U) {
      lVar3 = 5;
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(5);
      puVar4 = auStack_20;
      goto LAB_1802a929d;
    }
  }
  *(undefined8 *)(puVar5 + -8) = 0x1802a92a8;
  thunk_FUN_1803d64e0(lVar3);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  puVar6 = puVar5;
LAB_1802a92b5:
  if (0x7ffffffffffffff < uVar7) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar6 + -8) = &UNK_1802a92e9;
    FUN_18000d840();
  }
  *(undefined8 *)(puVar6 + -8) = 0x1802a92c6;
  lVar2 = FUN_18000fb70(uVar7 * 0x20);
  *param_1 = lVar2;
  param_1[1] = lVar2;
  param_1[2] = lVar2 + uVar7 * 0x20;
  return;
}



/* ===== 1802a92f0 FUN_1802a92f0 ===== */

void FUN_1802a92f0(ulonglong *param_1)

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
  *(undefined8 *)(puVar5 + -8) = 0x1802a9357;
  thunk_FUN_1803d64e0(uVar3,uVar2);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* ===== 1802a9370 FUN_1802a9370 ===== */

void FUN_1802a9370(longlong *param_1)

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
    if ((lVar2 - lVar3) - 8U < 0x20) goto LAB_1802a93b6;
    pcVar1 = (code *)swi(0x29);
    lVar2 = (*pcVar1)(5);
    puVar4 = auStack_20;
  }
  lVar3 = lVar2;
  puVar5 = puVar4;
LAB_1802a93b6:
  *(undefined8 *)(puVar5 + -8) = 0x1802a93bb;
  thunk_FUN_1803d64e0(lVar3);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* ===== 1802a93d0 FUN_1802a93d0 ===== */

void FUN_1802a93d0(void)

{
  if ((DAT_180cfed40 == '\0') && (DAT_1811089f0 != 0)) {
    DAT_180cfed44 = FUN_18038eaf0("CCSWeaponBaseVData","m_flRange");
    DAT_180cfed48 = FUN_18038eaf0("CCSWeaponBaseVData","m_nDamage");
    DAT_180cfed4c = FUN_18038eaf0("CCSWeaponBaseVData","m_flPenetration");
    DAT_180cfed50 = FUN_18038eaf0("CCSWeaponBaseVData","m_flRangeModifier");
    DAT_180cfed54 = FUN_18038eaf0("CCSWeaponBaseVData","m_nNumBullets");
    DAT_180cfed58 = FUN_18038eaf0("CCSWeaponBaseVData","m_flCycleTime");
    DAT_180cfed5c = FUN_18038eaf0("CCSWeaponBaseVData","m_flHeadshotMultiplier");
    DAT_180cfed60 = FUN_18038eaf0("CCSWeaponBaseVData","m_flArmorRatio");
    DAT_180cfed64 = FUN_18038eaf0("CCSWeaponBaseVData","m_nZoomLevels");
    DAT_180cfeda0 = FUN_18038eaf0("CCSWeaponBaseVData","m_flSpread");
    DAT_180cfed68 = FUN_18038eaf0("C_CSWeaponBaseGun","m_zoomLevel");
    DAT_180cfed6c = FUN_18038eaf0("C_BaseEntity","m_iHealth");
    DAT_180cfed70 = FUN_18038eaf0("C_CSPlayerPawn","m_ArmorValue");
    DAT_180cfed74 = FUN_18038eaf0("C_BasePlayerPawn","m_pItemServices");
    DAT_180cfed78 = FUN_18038eaf0("CCSPlayer_ItemServices","m_bHasHelmet");
    DAT_180cfed7c = FUN_18038eaf0("C_CSPlayerPawnBase","m_flFlashScreenshotAlpha");
    DAT_180cfed80 = FUN_18038eaf0("C_BaseEntity","m_iTeamNum");
    DAT_180cfed84 = FUN_18038eaf0("C_BasePlayerWeapon","m_nNextPrimaryAttackTick");
    DAT_180cfed88 = FUN_18038eaf0("C_BasePlayerWeapon","m_flNextPrimaryAttackTickRatio");
    DAT_180cfed8c = FUN_18038eaf0("C_BasePlayerWeapon","m_nNextSecondaryAttackTick");
    DAT_180cfed90 = FUN_18038eaf0("C_BasePlayerWeapon","m_flNextSecondaryAttackTickRatio");
    DAT_180cfed94 = FUN_18038eaf0("C_CSWeaponBase","m_flRecoilIndex");
    DAT_180cfed98 = FUN_18038eaf0("C_CSWeaponBase","m_fAccuracyPenalty");
    DAT_180cfed9c = FUN_18038eaf0("C_CSWeaponBase","m_weaponMode");
    DAT_180cfeda4 = FUN_18038eaf0("C_BaseEntity","m_pGameSceneNode");
    DAT_180cfeda8 = FUN_18038eaf0("CGameSceneNode","m_vecAbsOrigin");
    if ((DAT_180cfed44 == 0) ||
       ((DAT_180cfed48 == 0 || (DAT_180cfed40 = '\x01', DAT_180cfed6c == 0)))) {
      DAT_180cfed40 = '\0';
    }
  }
  return;
}



/* ===== 1802a96b0 FUN_1802a96b0 ===== */

void FUN_1802a96b0(undefined *param_1)

{
  undefined *puVar1;
  
  PTR_DAT_1809f50d8 = param_1;
  if (DAT_1809f4fe0 != '\0') {
    DAT_1809f4fe0 = '\0';
    puVar1 = &DAT_1807415dc;
    if (*PTR_s_no_pellet_on_an_enemy_1809f5050 != '\0') {
      puVar1 = PTR_s_no_pellet_on_an_enemy_1809f5050;
    }
    FUN_1802a0d50("seed | tick %d %.3f | angles %.3f %.3f %.3f (view %.3f %.3f + punch %.3f %.3f %.3f) | inacc %.5f spread %.5f recoil %.2f mode %d | seed %u | pellets %d/%d on an enemy | best dmg %.1f need %d certainty %.3f threshold %.2f | hit test: %s | result: %s"
                  ,DAT_1809f4fe4,(double)DAT_1809f4fe8,(double)DAT_1809f4fec,(double)DAT_1809f4ff0,
                  (double)DAT_1809f4ff4,(double)DAT_1809f4ff8,(double)DAT_1809f4ffc,
                  (double)DAT_1809f5004,(double)DAT_1809f5008,(double)DAT_1809f500c,
                  (double)DAT_1809f5010,(double)DAT_1809f5014,(double)DAT_1809f5018,DAT_1809f501c,
                  DAT_1809f5030,DAT_1809f502c,DAT_1809f5028,(double)DAT_1809f5040,DAT_1809f5044,
                  (double)DAT_1809f5048,(double)DAT_1809f5020,puVar1,param_1);
  }
  return;
}



/* ===== 1802a98f0 FUN_1802a98f0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1802a98f0(undefined8 *param_1,float param_2,float param_3,undefined8 *param_4)

{
  float fVar1;
  longlong lVar2;
  char *pcVar3;
  longlong lVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined1 uVar13;
  longlong *plVar14;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  float fVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auStack_378 [32];
  undefined4 local_358;
  longlong *local_350;
  undefined1 local_338;
  uint local_334;
  int local_330;
  float local_328;
  float local_324;
  float local_320;
  longlong local_318 [2];
  undefined4 local_308;
  undefined4 uStack_304;
  longlong local_2f8 [2];
  char local_2e8 [4];
  float local_2e4 [7];
  undefined1 local_2c8;
  undefined8 local_2c4;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined1 local_2a8;
  undefined8 local_2a4;
  undefined8 local_298;
  undefined8 local_290;
  undefined1 local_288;
  undefined8 local_284;
  undefined8 local_278;
  undefined8 local_270;
  undefined1 local_268;
  undefined8 local_264;
  undefined8 local_258;
  undefined8 local_250;
  undefined1 local_248;
  undefined8 local_244;
  undefined8 local_238;
  undefined8 local_230;
  undefined1 local_228;
  undefined8 local_224;
  undefined8 local_218;
  undefined8 local_210;
  undefined1 local_208;
  undefined8 local_204;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined1 local_1e8;
  undefined8 local_1e4;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined1 local_1c8;
  undefined8 local_1c4;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined1 local_1a8;
  undefined8 local_1a4;
  undefined8 local_198;
  undefined8 local_190;
  undefined1 local_188;
  undefined8 local_184;
  undefined8 local_178;
  undefined8 local_170;
  undefined1 local_168;
  undefined8 local_164;
  undefined8 local_158;
  undefined8 local_150;
  undefined1 local_148;
  undefined8 local_144;
  undefined8 local_138;
  undefined8 local_130;
  undefined1 local_128;
  undefined8 local_124;
  undefined8 local_118;
  undefined8 local_110;
  undefined1 local_108;
  undefined8 local_104;
  ulonglong local_f8;
  
  local_f8 = DAT_180919500 ^ (ulonglong)auStack_378;
  uVar13 = 0;
  local_338 = 0;
  fVar22 = (*(float *)((longlong)param_1 + 0x34) - param_2 * *(float *)(param_1 + 8)) +
           param_3 * *(float *)((longlong)param_1 + 0x4c);
  fVar24 = (*(float *)(param_1 + 7) - param_2 * *(float *)((longlong)param_1 + 0x44)) +
           param_3 * *(float *)(param_1 + 10);
  fVar25 = (*(float *)((longlong)param_1 + 0x3c) - param_2 * *(float *)(param_1 + 9)) +
           param_3 * *(float *)((longlong)param_1 + 0x54);
  fVar21 = fVar24 * fVar24 + fVar22 * fVar22 + fVar25 * fVar25;
  if (fVar21 < 0.0) {
    fVar21 = (float)FUN_18051af10(fVar21);
  }
  else {
    fVar21 = SQRT(fVar21);
  }
  if (fVar21 <= 0.0) {
    fVar22 = 0.0;
    fVar24 = 0.0;
    fVar25 = 0.0;
  }
  else {
    fVar22 = fVar22 / fVar21;
    fVar24 = fVar24 / fVar21;
    fVar25 = fVar25 / fVar21;
  }
  if ((DAT_180cfed44 == 0) || (param_1[2] == 0)) {
    local_320 = 0.0;
  }
  else {
    local_320 = (float)FUN_18000f3d0(param_1[2] + (ulonglong)DAT_180cfed44);
  }
  local_2f8[0] = 0;
  local_328 = local_320 * fVar22;
  local_350 = local_2f8;
  local_2f8[1] = 0;
  local_324 = local_320 * fVar24;
  local_358 = *(undefined4 *)(param_1 + 0xd);
  local_320 = local_320 * fVar25;
  local_2e8[0] = '\0';
  local_2e4[0] = 0.0;
  local_2e4[1] = 0.0;
  local_2e4[3] = 0.0;
  local_2e4[4] = 0.0;
  local_2e4[5] = 0.0;
  local_2e4[6] = 0.0;
  local_2c8 = 0;
  local_2c4 = 0;
  local_2b8 = 0;
  local_2b0 = 0;
  local_2a8 = 0;
  local_2a4 = 0;
  local_298 = 0;
  local_290 = 0;
  local_288 = 0;
  local_284 = 0;
  local_278 = 0;
  local_270 = 0;
  local_268 = 0;
  local_264 = 0;
  local_258 = 0;
  local_250 = 0;
  local_248 = 0;
  local_244 = 0;
  local_238 = 0;
  local_230 = 0;
  local_228 = 0;
  local_224 = 0;
  local_218 = 0;
  local_210 = 0;
  local_208 = 0;
  local_204 = 0;
  local_1f8 = 0;
  local_1f0 = 0;
  local_1e8 = 0;
  local_1e4 = 0;
  local_1d8 = 0;
  local_1d0 = 0;
  local_1c8 = 0;
  local_1c4 = 0;
  local_1b8 = 0;
  local_1b0 = 0;
  local_1a8 = 0;
  local_1a4 = 0;
  local_198 = 0;
  local_190 = 0;
  local_188 = 0;
  local_184 = 0;
  local_178 = 0;
  local_170 = 0;
  local_168 = 0;
  local_164 = 0;
  local_158 = 0;
  local_150 = 0;
  local_148 = 0;
  local_144 = 0;
  local_138 = 0;
  local_130 = 0;
  local_128 = 0;
  local_124 = 0;
  local_118 = 0;
  local_110 = 0;
  local_108 = 0;
  local_104 = 0;
  local_330 = FUN_1802afa00(*param_1,param_1 + 0x10,(longlong)param_1 + 0x1c,&local_328);
  local_334 = 0;
  uVar12 = 0;
  if (local_330 < 1) {
    return 0;
  }
  fVar22 = DAT_1808ac1f4;
  fVar21 = DAT_1808ac014;
  iVar7 = local_330;
LAB_1802a9c30:
  uVar11 = (uint)uVar12;
  uVar10 = uVar12 * 0x20;
  lVar2 = local_2f8[uVar12 * 4];
  plVar14 = DAT_180cfeb00;
  if (lVar2 != 0) {
    while( true ) {
      if (plVar14 == DAT_180cfeb08) break;
      if (*plVar14 == lVar2) {
        DAT_180cd034e = lVar2 == DAT_180cfeb18;
        if (local_2e8[uVar10] == '\0') {
          plVar14 = (longlong *)((longlong)local_2f8 + (uVar10 | 8));
LAB_1802a9cbe:
          uVar6 = 0xffffffff;
        }
        else {
          plVar14 = local_2f8 + uVar12 * 4 + 1;
          if (*plVar14 == 0) goto LAB_1802a9cbe;
          uVar6 = FUN_180011200(*plVar14 + 0x38);
          iVar7 = local_330;
        }
        pcVar3 = (char *)param_1[0xe];
        if (pcVar3 != (char *)0x0) {
          switch(uVar6) {
          case 1:
          case 8:
            cVar5 = *pcVar3;
            break;
          case 2:
            cVar5 = pcVar3[1];
            break;
          case 3:
            cVar5 = pcVar3[2];
            break;
          case 4:
          case 5:
            cVar5 = pcVar3[3];
            break;
          case 6:
          case 7:
            cVar5 = pcVar3[4];
            break;
          default:
            goto LAB_1802aa14d;
          }
          if (cVar5 == '\0') {
LAB_1802aa14d:
            uVar13 = local_338;
            break;
          }
        }
        fVar24 = local_2e4[uVar12 * 8];
        if (((*(int *)(param_1 + 3) != 0x1f) && (*plVar14 != 0)) && (local_2e8[uVar10] != '\0')) {
          lVar4 = param_1[2];
          if ((DAT_180cfed5c != 0) && (lVar4 != 0)) {
            FUN_18000f3d0(lVar4 + (ulonglong)DAT_180cfed5c);
          }
          fVar25 = (float)FUN_18046e550(lVar2,uVar6);
          fVar25 = fVar25 * fVar24;
          fVar24 = fVar25;
          if ((((DAT_180cfed70 != 0) &&
               (iVar7 = FUN_180011200(lVar2 + (ulonglong)DAT_180cfed70), 0 < iVar7)) && (uVar6 < 9))
             && (((0x13d >> ((byte)uVar6 & 0x1f) & 1U) != 0 ||
                 ((((uVar6 == 1 && (DAT_180cfed74 != 0)) &&
                   (lVar8 = FUN_18000f3a0(lVar2 + (ulonglong)DAT_180cfed74), lVar8 != 0)) &&
                  ((DAT_180cfed78 != 0 &&
                   (cVar5 = FUN_180011220(lVar8 + (ulonglong)DAT_180cfed78), cVar5 != '\0')))))))) {
            if ((DAT_180cfed60 == 0) || (lVar4 == 0)) {
              fVar24 = 0.0;
            }
            else {
              fVar24 = (float)FUN_18000f3d0(lVar4 + (ulonglong)DAT_180cfed60);
            }
            fVar18 = (float)iVar7;
            fVar24 = fVar24 * fVar22 * fVar25;
            if (fVar18 < (fVar25 - fVar24) * fVar22) {
              fVar24 = fVar25 - (fVar18 + fVar18);
            }
          }
          uVar11 = local_334;
        }
        plVar14 = (longlong *)param_4[1];
        plVar9 = (longlong *)*param_4;
        if (plVar9 != plVar14) goto LAB_1802a9e34;
        goto LAB_1802a9e47;
      }
      plVar14 = plVar14 + 1;
    }
  }
  goto switchD_1802a9ce5_default;
  while (plVar9 = plVar9 + 3, plVar9 != plVar14) {
LAB_1802a9e34:
    if (*plVar9 == lVar2) break;
  }
  if (plVar9 == plVar14) {
LAB_1802a9e47:
    local_318[1] = 0;
    local_308 = 0x3f800000;
    local_318[0] = lVar2;
    if (plVar14 == (longlong *)param_4[2]) {
      FUN_1800435c0(param_4,plVar14,local_318);
    }
    else {
      *plVar14 = lVar2;
      plVar14[1] = 0;
      plVar14[2] = CONCAT44(uStack_304,0x3f800000);
      param_4[1] = param_4[1] + 0x18;
    }
    plVar9 = (longlong *)(param_4[1] + -0x18);
  }
  *(int *)((longlong)plVar9 + 0xc) = *(int *)((longlong)plVar9 + 0xc) + 1;
  uVar13 = 1;
  local_338 = 1;
  *(float *)(plVar9 + 1) = fVar24 + *(float *)(plVar9 + 1);
  if (*(float *)(param_1 + 0xf) != 0.0) {
    fVar22 = *(float *)(param_1 + 5);
    fVar24 = *(float *)((longlong)param_1 + 0x1c);
    fVar25 = local_2e4[uVar12 * 8 + 1];
    fVar18 = *(float *)(param_1 + 4);
    fVar26 = *(float *)((longlong)param_1 + 0x24);
    fVar1 = *(float *)((longlong)param_1 + 0x7c);
    fVar15 = (float)FUN_180517200(fVar22 * fVar21);
    fVar23 = *(float *)((longlong)param_1 + 0x2c) * fVar21;
    fVar16 = (float)FUN_180517200(fVar23);
    fVar23 = (float)FUN_180517790(fVar23);
    uVar6 = FUN_180517790(fVar22 * fVar21);
    fVar24 = (fVar25 * local_328 + fVar24) - fVar24;
    fVar18 = (fVar25 * local_324 + fVar18) - fVar18;
    fVar26 = (fVar25 * local_320 + fVar26) - fVar26;
    fVar22 = fVar23 * fVar15 * fVar18 + fVar16 * fVar15 * fVar24 +
             (float)(uVar6 ^ DAT_1808adec0) * fVar26;
    fVar24 = fVar24 - fVar16 * fVar15 * fVar22;
    fVar18 = fVar18 - fVar23 * fVar15 * fVar22;
    fVar26 = fVar26 - (float)(uVar6 ^ DAT_1808adec0) * fVar22;
    fVar21 = fVar24 * fVar24 + fVar18 * fVar18 + fVar26 * fVar26;
    if (fVar21 < 0.0) {
      fVar21 = (float)FUN_18051af10(fVar21);
    }
    else {
      fVar21 = SQRT(fVar21);
    }
    fVar22 = (*(float *)((longlong)param_1 + 0x5c) + *(float *)(param_1 + 0xb)) * fVar22;
    fVar24 = fVar22;
    if (fVar21 - fVar1 <= fVar22) {
      fVar24 = fVar21 - fVar1;
    }
    if (fVar24 <= 0.0) {
      if (fVar22 == 0.0) {
        auVar20 = ZEXT416((uint)DAT_1808ac34c);
      }
      else {
        fVar21 = fVar22;
        if (fVar1 <= fVar22) {
          fVar21 = fVar1;
        }
        auVar20 = ZEXT416((uint)(fVar21 / fVar22));
      }
    }
    else if (fVar22 == 0.0) {
      auVar20 = ZEXT816(0);
    }
    else {
      uVar17 = FUN_18051acf0(fVar1 / fVar21);
      auVar19._8_4_ = extraout_XMM0_Dc;
      auVar19._0_8_ = uVar17;
      auVar19._12_4_ = extraout_XMM0_Dd;
      fVar25 = fVar22;
      if (fVar1 + fVar21 <= fVar22) {
        fVar25 = fVar1 + fVar21;
      }
      auVar20._4_12_ = auVar19._4_12_;
      auVar20._0_4_ = ((float)uVar17 * ((fVar25 - fVar24) / fVar22)) / DAT_1808ac680;
    }
    fVar21 = DAT_1808ac34c;
    if (DAT_1808ac34c <= *(float *)(param_1 + 0xc)) {
      fVar22 = (float)FUN_18051afb0(DAT_1808ac34c - auVar20._0_4_);
      auVar20 = ZEXT416((uint)(fVar21 - fVar22));
    }
    fVar22 = DAT_1808ac1f4;
    fVar21 = DAT_1808ac014;
    if (*(float *)(plVar9 + 2) <= auVar20._0_4_) {
      auVar20._0_4_ = *(float *)(plVar9 + 2);
    }
    *(int *)(plVar9 + 2) = auVar20._0_4_;
  }
  iVar7 = local_330;
switchD_1802a9ce5_default:
  local_334 = uVar11 + 1;
  uVar12 = (ulonglong)local_334;
  if (iVar7 <= (int)local_334) {
    return uVar13;
  }
  goto LAB_1802a9c30;
}



/* ===== 1802aa180 FUN_1802aa180 ===== */

undefined8 FUN_1802aa180(longlong param_1)

{
  undefined8 uVar1;
  
  if ((DAT_180962040 == (code *)0x0) || (param_1 == 0)) {
    uVar1 = 0;
  }
  else {
    (*DAT_180962040)();
    uVar1 = 1;
  }
  return uVar1;
}



/* ===== 1802aa1c0 FUN_1802aa1c0 ===== */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1802aa1c0(longlong param_1,char param_2,undefined4 param_3,float param_4,int param_5,
                       undefined8 param_6,undefined8 param_7,int *param_8)

{
  float fVar1;
  code *pcVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  char cVar7;
  undefined1 uVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  float *pfVar12;
  ulonglong *puVar13;
  char *pcVar14;
  int iVar15;
  ulonglong uVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  ulonglong uVar20;
  ulonglong *puVar21;
  longlong lVar22;
  float fVar23;
  float fVar24;
  double dVar25;
  float fVar26;
  float fVar27;
  undefined1 auStack_12b8 [8];
  undefined1 auStack_12b0 [24];
  ulonglong local_1298;
  float *local_1290;
  undefined4 local_1288;
  undefined8 *local_1280;
  undefined8 *local_1278;
  undefined4 local_1270;
  char local_1268;
  ulonglong *local_1260;
  ulonglong *local_1258;
  ulonglong *puStack_1250;
  ulonglong *local_1248;
  int local_1240;
  undefined8 local_1238;
  float local_1230;
  float local_1228;
  float fStack_1224;
  float local_1220;
  float local_1218;
  float fStack_1214;
  float local_1210;
  ulonglong local_1208;
  float fStack_1200;
  int iStack_11fc;
  undefined4 local_11f8;
  undefined4 uStack_11f4;
  int local_11e4;
  longlong *local_11d8;
  ulonglong local_11d0;
  longlong local_11c8 [4];
  undefined8 local_11a8;
  undefined8 uStack_11a0;
  undefined8 local_1198;
  undefined8 uStack_1190;
  float local_112c;
  undefined4 local_1124;
  undefined2 local_1120;
  char local_111d;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
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
  undefined8 local_e8;
  undefined8 uStack_e0;
  ulonglong local_d8;
  
  local_d8 = DAT_180919500 ^ (ulonglong)auStack_12b8;
  param_8[0] = 0;
  param_8[1] = 0;
  param_8[2] = 0;
  param_8[3] = iStack_11fc;
  param_8[4] = 0;
  param_8[5] = 0;
  param_8[6] = 0;
  param_8[7] = 0;
  param_8[8] = 0x3f800000;
  param_8[9] = local_11e4;
  *(char **)(param_8 + 10) = "no pellet on an enemy";
  local_1258 = (ulonglong *)0x0;
  puStack_1250 = (ulonglong *)0x0;
  local_1248 = (ulonglong *)0x0;
  DAT_180cd034e = 0;
  local_1268 = param_2;
  if ((DAT_180cfed54 == 0) || (*(longlong *)(param_1 + 0x10) == 0)) {
    iVar9 = 0;
  }
  else {
    iVar9 = FUN_180011200((ulonglong)DAT_180cfed54 + *(longlong *)(param_1 + 0x10));
  }
  dVar6 = DAT_1808ac430;
  fVar4 = DAT_1808ac34c;
  iVar15 = 1;
  if (iVar9 < 1) {
    iVar9 = 1;
  }
  local_1240 = iVar9;
  if (*(int *)(param_1 + 0x18) == 0x1f) {
    FUN_180540170(&local_11d8,0,0x140);
    local_11a8 = _DAT_1808adae0;
    uStack_11a0 = _UNK_1808adae8;
    local_1198 = _DAT_1808adae0;
    uStack_1190 = _UNK_1808adae8;
    local_112c = 1.0;
    uVar10 = 0xffffffff;
    local_1124 = 0xffffffff;
    local_1120 = 0xffff;
    if ((DAT_180cfed44 == 0) || (*(longlong *)(param_1 + 0x10) == 0)) {
      fVar23 = 0.0;
    }
    else {
      fVar23 = (float)FUN_18000f3d0((ulonglong)DAT_180cfed44 + *(longlong *)(param_1 + 0x10));
    }
    local_1238 = *(undefined8 *)(param_1 + 0x1c);
    local_1230 = *(float *)(param_1 + 0x24);
    local_1228 = (float)*(undefined8 *)(param_1 + 0x34) * fVar23 + (float)local_1238;
    fStack_1224 = (float)((ulonglong)*(undefined8 *)(param_1 + 0x34) >> 0x20) * fVar23 +
                  (float)((ulonglong)local_1238 >> 0x20);
    local_1220 = fVar23 * *(float *)(param_1 + 0x3c) + *(float *)(param_1 + 0x24);
    local_1218 = local_1228;
    fStack_1214 = fStack_1224;
    local_1210 = local_1220;
    if (DAT_180cd034f == '\0') {
      DAT_180cd034f = '\x01';
      DAT_180cfeb30 = FUN_180264b70("mp_teammates_are_enemies");
    }
    if ((DAT_180cfeb30 == 0) || (cVar7 = FUN_180264d70(DAT_180cfeb30), cVar7 == '\0')) {
      uVar8 = 0;
    }
    else {
      uVar8 = 1;
    }
    local_1290 = &local_1218;
    local_1298 = CONCAT71(local_1298._1_7_,uVar8);
    cVar7 = FUN_1802aa180(*(undefined8 *)(param_1 + 8),&local_11d8,&local_1238,&local_1228);
    uVar16 = local_11d0;
    if (cVar7 != '\0') {
      local_1260 = (ulonglong *)CONCAT44(local_1260._4_4_,local_112c);
      if (((local_112c < fVar4) || (local_111d != '\0')) &&
         (puVar13 = DAT_180cfeb00, local_11d0 != 0)) {
        for (; puVar13 != DAT_180cfeb08; puVar13 = puVar13 + 1) {
          if (*puVar13 == local_11d0) {
            DAT_180cd034e = local_11d0 == DAT_180cfeb18;
            if (local_11c8[0] != 0) {
              uVar10 = FUN_180011200(local_11c8[0] + 0x38);
            }
            pcVar14 = *(char **)(param_1 + 0x70);
            if (pcVar14 != (char *)0x0) {
              switch(uVar10) {
              case 1:
              case 8:
                cVar7 = *pcVar14;
                break;
              case 2:
                cVar7 = pcVar14[1];
                break;
              case 3:
                cVar7 = pcVar14[2];
                break;
              case 4:
              case 5:
                cVar7 = pcVar14[3];
                break;
              case 6:
              case 7:
                cVar7 = pcVar14[4];
                break;
              default:
                goto LAB_1802aa44e;
              }
              if (cVar7 == '\0') break;
            }
            local_1208 = uVar16;
            if (DAT_180cfed6c == 0) {
              iVar9 = 0;
            }
            else {
              iVar9 = FUN_180011200(uVar16 + DAT_180cfed6c);
            }
            fStack_1200 = DAT_1808acbf8;
            if ((float)iVar9 <= DAT_1808acbf8) {
              fStack_1200 = (float)iVar9;
            }
            iStack_11fc = 1;
            local_11f8 = 0x3f800000;
            if (puStack_1250 == local_1248) {
              FUN_1800435c0(&local_1258,puStack_1250,&local_1208);
              fVar23 = 0.0;
            }
            else {
              *puStack_1250 = local_1208;
              puStack_1250[1] = CONCAT44(1,fStack_1200);
              puStack_1250[2] = CONCAT44(uStack_11f4,0x3f800000);
              puStack_1250 = puStack_1250 + 3;
              fVar23 = 0.0;
            }
            goto LAB_1802aa7d5;
          }
        }
      }
    }
LAB_1802aa44e:
    uVar16 = 0;
  }
  else {
    if (local_1268 == '\0') {
      pfVar12 = (float *)&DAT_180cfeb40;
      if (DAT_180cd034c == '\0') {
        do {
          iVar9 = 0;
          do {
            lVar22 = (longlong)(iVar9 + iVar15 * 8 + -8);
            dVar25 = (double)FUN_180519a60();
            (&DAT_180cfeb40)[lVar22 * 2] = (float)(dVar25 * (double)iVar15 * dVar6);
            dVar25 = (double)FUN_1805194f0();
            (&DAT_180cfeb44)[lVar22 * 2] = (float)(dVar25 * (double)iVar15 * dVar6);
            iVar9 = iVar9 + 1;
          } while (iVar9 < 8);
          iVar15 = iVar15 + 1;
        } while (iVar15 < 9);
        DAT_180cd034c = '\x01';
      }
      fVar23 = *(float *)(param_1 + 0x5c) + *(float *)(param_1 + 0x58);
      *param_8 = 0x40;
      do {
        cVar7 = FUN_1802a98f0(param_1,fVar23 * *pfVar12,fVar23 * pfVar12[1],&local_1258);
        if (cVar7 != '\0') {
          param_8[1] = param_8[1] + 1;
        }
        pfVar12 = pfVar12 + 2;
      } while (pfVar12 != (float *)&DAT_180cfed40);
      fVar23 = DAT_1808acab0;
    }
    else {
      if (DAT_180961ca0 == (code *)0x0) {
        iVar15 = 0;
      }
      else {
        iVar15 = (*DAT_180961ca0)(0,param_1 + 0x28,param_3);
      }
      param_8[2] = iVar15;
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
      local_e8 = 0;
      uStack_e0 = 0;
      local_1d8 = 0;
      uStack_1d0 = 0;
      local_1c8 = 0;
      uStack_1c0 = 0;
      local_1b8 = 0;
      uStack_1b0 = 0;
      local_1a8 = 0;
      uStack_1a0 = 0;
      local_198 = 0;
      uStack_190 = 0;
      local_188 = 0;
      uStack_180 = 0;
      local_178 = 0;
      uStack_170 = 0;
      local_168 = 0;
      uStack_160 = 0;
      local_1270 = 0x20;
      local_1278 = &local_1d8;
      local_1280 = &local_158;
      local_1288 = *(undefined4 *)(param_1 + 0x60);
      local_1290 = (float *)CONCAT44(local_1290._4_4_,*(undefined4 *)(param_1 + 0x5c));
      local_1298 = CONCAT44(local_1298._4_4_,*(undefined4 *)(param_1 + 0x58));
      iVar9 = FUN_1802ad610(*(undefined4 *)(param_1 + 0x18),iVar9,*(undefined4 *)(param_1 + 100),
                            iVar15);
      *param_8 = iVar9;
      if (iVar9 < 1) {
        if ((DAT_180961ca0 == (code *)0x0) || (pcVar14 = "no pellets", DAT_180961ca8 == 0)) {
          pcVar14 = "seed / spread function missing";
        }
        *(char **)(param_8 + 10) = pcVar14;
        fVar23 = 0.0;
      }
      else {
        iVar15 = 0;
        do {
          cVar7 = FUN_1802a98f0(param_1);
          if (cVar7 != '\0') {
            param_8[1] = param_8[1] + 1;
          }
          iVar15 = iVar15 + 1;
        } while (iVar15 < iVar9);
        fVar23 = 0.0;
      }
    }
LAB_1802aa7d5:
    puVar21 = puStack_1250;
    puVar13 = local_1258;
    lVar22 = ((longlong)puStack_1250 - (longlong)local_1258 >> 3) * -0x5555555555555555;
    if (lVar22 < 0x21) {
      FUN_1802ac0a0(local_1258,puStack_1250);
    }
    else {
      uVar20 = lVar22 - ((longlong)puStack_1250 - (longlong)local_1258) / 0x30;
      uVar16 = 0x7fffffffffffffff;
      if ((longlong)uVar20 < 0x7fffffffffffffff) {
        uVar16 = uVar20;
      }
      if (0xaa < uVar20) {
        if ((uVar16 < 0xaaaaaaaaaaaaaab) && (0 < (longlong)uVar16)) {
          do {
            local_11d8 = (longlong *)FUN_1804ed030(uVar16 * 0x18,&DAT_1805757b2);
            if (local_11d8 != (longlong *)0x0) {
              if (0xaa < uVar16) goto LAB_1802aa8ad;
              goto LAB_1802aa898;
            }
            uVar16 = uVar16 >> 1;
          } while (uVar16 != 0);
        }
        local_11d8 = (longlong *)0x0;
LAB_1802aa898:
        FUN_1803d64e0(local_11d8);
        uVar20 = 0xaa;
      }
      uVar16 = uVar20;
      local_11d8 = local_11c8;
LAB_1802aa8ad:
      local_1290 = (float *)CONCAT71(local_1290._1_7_,local_1268);
      local_1298 = uVar16;
      local_11d0 = uVar16;
      FUN_1802ac1b0(puVar13,puVar21,lVar22);
      if (0xaa < local_11d0) {
        FUN_1803d64e0(local_11d8);
      }
    }
    fVar5 = DAT_1808ac3d4;
    local_1260 = puStack_1250;
    if (local_1258 != puStack_1250) {
      bVar3 = true;
      puVar13 = puStack_1250;
      puVar21 = local_1258;
      do {
        if (bVar3) {
          *(ulonglong *)(param_8 + 4) = *puVar21;
          param_8[6] = (int)puVar21[1];
          param_8[8] = (int)puVar21[2];
          puVar13 = local_1260;
        }
        if ((local_1268 == '\0') && (*(int *)(param_1 + 0x18) != 0x1f)) {
          if (param_4 <= (float)*(int *)((longlong)puVar21 + 0xc) / fVar23) {
            fVar26 = (*(float *)(puVar21 + 1) / (float)*(int *)((longlong)puVar21 + 0xc)) *
                     (float)local_1240;
            *(float *)(puVar21 + 1) = fVar26;
            if (bVar3) {
              param_8[6] = (int)fVar26;
            }
            goto LAB_1802aa9c0;
          }
          if (bVar3) {
            *(char **)(param_8 + 10) = "hit chance";
          }
        }
        else {
LAB_1802aa9c0:
          if ((DAT_180cfed6c == 0) || (*puVar21 == 0)) {
            iVar9 = 0;
          }
          else {
            iVar9 = FUN_180011200((ulonglong)DAT_180cfed6c + *puVar21);
          }
          if (param_5 < 1) {
            lVar22 = *(longlong *)(param_1 + 0x10);
            if ((DAT_180cfed58 == 0) || (lVar22 == 0)) {
              fVar26 = 0.0;
            }
            else {
              fVar26 = (float)FUN_18000f3d0((ulonglong)DAT_180cfed58 + lVar22);
              lVar22 = *(longlong *)(param_1 + 0x10);
            }
            if (iVar9 < 10) {
              iVar9 = 9;
            }
            iVar9 = (int)((float)(iVar9 + 1) * fVar26 * fVar5);
            if (*(int *)(param_1 + 0x18) == 0x28) {
              if (0x46 < iVar9) {
                iVar9 = 0x46;
              }
            }
            else if ((*(int *)(param_1 + 0x18) == 9) && (0x69 < iVar9)) {
              iVar9 = 0x69;
            }
            if ((DAT_180cfed48 == 0) || (lVar22 == 0)) {
              iVar11 = 0;
            }
            else {
              iVar11 = FUN_180011200((ulonglong)DAT_180cfed48 + lVar22);
            }
            iVar15 = iVar11 + -5;
            if ((iVar9 <= iVar11 + -5) && (iVar15 = 1, 1 < iVar9)) {
              iVar15 = iVar9;
            }
          }
          else if (param_5 < 0x65) {
            iVar15 = param_5;
            if (iVar9 < param_5) {
              iVar15 = iVar9;
            }
          }
          else {
            iVar15 = param_5 + -100 + iVar9;
          }
          if (bVar3) {
            param_8[7] = iVar15;
          }
          puVar13 = local_1260;
          if ((float)iVar15 < *(float *)(puVar21 + 1) || (float)iVar15 == *(float *)(puVar21 + 1)) {
            if (((*(float *)(param_1 + 0x78) == 0.0) || (*(float *)(puVar21 + 2) == fVar4)) ||
               (*(float *)(param_1 + 0x78) < *(float *)(puVar21 + 2))) {
              if (((DAT_180cfeda4 == 0) || (*puVar21 == 0)) ||
                 ((lVar22 = FUN_18000f3a0((ulonglong)DAT_180cfeda4 + *puVar21), lVar22 == 0 ||
                  (DAT_180cfeda8 == 0)))) {
                fVar24 = 0.0;
                fVar27 = 0.0;
                fVar26 = 0.0;
              }
              else {
                pfVar12 = (float *)FUN_1800111b0(&local_1228,lVar22 + (ulonglong)DAT_180cfeda8);
                fVar26 = *pfVar12;
                fVar27 = pfVar12[1];
                fVar24 = pfVar12[2];
              }
              fVar26 = *(float *)(param_1 + 0x1c) - fVar26;
              fVar27 = *(float *)(param_1 + 0x20) - fVar27;
              fVar1 = *(float *)(param_1 + 0x24);
              fVar24 = fVar1 - fVar24;
              fVar26 = fVar27 * fVar27 + fVar26 * fVar26 + fVar24 * fVar24;
              if (fVar26 < 0.0) {
                fVar26 = (float)FUN_18051af10();
              }
              else {
                fVar26 = SQRT(fVar26);
              }
              local_1238 = CONCAT44((float)((ulonglong)*(undefined8 *)(param_1 + 0x34) >> 0x20) *
                                    fVar26 + (float)((ulonglong)*(undefined8 *)(param_1 + 0x1c) >>
                                                    0x20),
                                    (float)*(undefined8 *)(param_1 + 0x34) * fVar26 +
                                    (float)*(undefined8 *)(param_1 + 0x1c));
              local_1230 = fVar26 * *(float *)(param_1 + 0x3c) + fVar1;
              cVar7 = FUN_1802a8290(param_1 + 0x1c,&local_1238);
              if (cVar7 != '\0') {
                if (!bVar3) {
                  *(ulonglong *)(param_8 + 4) = *puVar21;
                  param_8[6] = (int)puVar21[1];
                  param_8[7] = iVar15;
                  param_8[8] = (int)puVar21[2];
                }
                *(undefined1 **)(param_8 + 10) = &DAT_18058b643;
                uVar16 = *puVar21;
                goto switchD_1802aa49d_default;
              }
              puVar13 = local_1260;
              if (bVar3) {
                pcVar14 = "smoke";
                goto LAB_1802aac1f;
              }
            }
            else if (bVar3) {
              pcVar14 = "legitimacy threshold";
              goto LAB_1802aac1f;
            }
          }
          else if (bVar3) {
            pcVar14 = "min damage";
LAB_1802aac1f:
            *(char **)(param_8 + 10) = pcVar14;
            puVar13 = local_1260;
          }
        }
        bVar3 = false;
        puVar21 = puVar21 + 3;
      } while (puVar21 != puVar13);
    }
    uVar16 = 0;
  }
switchD_1802aa49d_default:
  puVar17 = auStack_12b8;
  puVar18 = auStack_12b8;
  puVar19 = auStack_12b8;
  if (local_1258 == (ulonglong *)0x0) goto LAB_1802aaccc;
  puVar13 = local_1258;
  if ((ulonglong)(((longlong)local_1248 - (longlong)local_1258 >> 3) * 8) < 0x1000) {
LAB_1802aacc1:
    puVar18 = puVar17;
  }
  else {
    puVar13 = (ulonglong *)local_1258[-1];
    if ((undefined1 *)0x1f < (undefined1 *)((longlong)local_1258 + (-8 - (longlong)puVar13))) {
      puVar13 = (ulonglong *)&DAT_00000005;
      pcVar2 = (code *)swi(0x29);
      (*pcVar2)(5);
      puVar17 = auStack_12b0;
      goto LAB_1802aacc1;
    }
  }
  *(undefined8 *)(puVar18 + -8) = 0x1802aaccc;
  thunk_FUN_1803d64e0(puVar13);
  puVar19 = puVar18;
LAB_1802aaccc:
  *(undefined8 *)(puVar19 + -8) = 0x1802aacde;
  return uVar16;
}



/* ===== 1802aad50 FUN_1802aad50 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1802aad50(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  char cVar7;
  longlong lVar8;
  longlong *plVar9;
  float extraout_XMM0_Da;
  float fVar10;
  float extraout_XMM0_Da_00;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  lVar8 = FUN_1802a7c30(param_2);
  if (lVar8 != 0) {
    if ((DAT_180cfed44 == 0) || (*(longlong *)(param_1 + 0x10) == 0)) {
      fVar15 = 0.0;
    }
    else {
      FUN_18000f3d0(*(longlong *)(param_1 + 0x10) + (ulonglong)DAT_180cfed44);
      fVar15 = extraout_XMM0_Da;
    }
    uVar6 = DAT_1808adec0;
    fVar5 = DAT_1808ac34c;
    fVar4 = DAT_1808abf58;
    fVar16 = fVar15 * *(float *)(param_1 + 0x34);
    plVar2 = *(longlong **)(lVar8 + 0x28);
    fVar17 = fVar15 * *(float *)(param_1 + 0x38);
    fVar15 = fVar15 * *(float *)(param_1 + 0x3c);
    fVar13 = fVar17 * fVar17 + fVar16 * fVar16 + fVar15 * fVar15;
    for (plVar9 = *(longlong **)(lVar8 + 0x20); plVar9 != plVar2; plVar9 = plVar9 + 5) {
      if (((*(char *)((longlong)plVar9 + 0x1a) != '\0') && (*plVar9 != 0)) &&
         (cVar7 = FUN_180011220(*plVar9 + 0x3c), cVar7 == '\x02')) {
        iVar1 = *(int *)((longlong)plVar9 + 0x24);
        if ((-1 < iVar1) &&
           (lVar3 = *(longlong *)(lVar8 + 0x38),
           iVar1 < (int)(*(longlong *)(lVar8 + 0x40) - lVar3 >> 5))) {
          fVar10 = (float)FUN_18000f3d0(*plVar9 + 0x30);
          fVar10 = fVar10 * *(float *)(lVar3 + 0xc + (longlong)iVar1 * 0x20) * _DAT_1808ac278;
          if (DAT_1808abf94 <= fVar10) {
            fVar11 = *(float *)(param_1 + 0x1c) - *(float *)(plVar9 + 1);
            fVar12 = *(float *)(param_1 + 0x20) - *(float *)((longlong)plVar9 + 0xc);
            fVar14 = *(float *)(param_1 + 0x24) - *(float *)(plVar9 + 2);
            fVar10 = (fVar12 * fVar12 + fVar11 * fVar11 + fVar14 * fVar14) - fVar10 * fVar10;
            if (fVar10 <= 0.0) {
              return 1;
            }
            if (fVar4 <= fVar13) {
              fVar11 = fVar17 * fVar12 + fVar16 * fVar11 + fVar15 * fVar14;
              fVar10 = fVar11 * fVar11 - fVar10 * fVar13;
              if (0.0 <= fVar10) {
                if (fVar10 < 0.0) {
                  FUN_18051af10(fVar10);
                  fVar10 = extraout_XMM0_Da_00;
                }
                else {
                  fVar10 = SQRT(fVar10);
                }
                fVar10 = ((float)((uint)fVar11 ^ uVar6) - fVar10) / fVar13;
                if ((0.0 <= fVar10) && (fVar10 < fVar5)) {
                  return 1;
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}



/* ===== 1802aafe0 FUN_1802aafe0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802aafe0(double *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  char *pcVar4;
  bool bVar5;
  bool bVar6;
  float fVar7;
  char cVar8;
  undefined1 uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  double *pdVar15;
  longlong lVar16;
  longlong lVar17;
  undefined4 *puVar18;
  char *pcVar19;
  double *pdVar20;
  bool bVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined4 uVar27;
  double dVar28;
  float fVar29;
  double local_res20;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  float local_17c;
  undefined4 uStack_178;
  undefined4 local_174;
  undefined8 local_170;
  undefined4 local_168 [2];
  int local_160;
  double local_158;
  double local_150;
  double local_148;
  undefined4 local_140;
  undefined4 local_13c;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined4 local_f0;
  char *local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  ulonglong local_d0;
  
  FUN_1802a93d0();
  fVar7 = DAT_1808acb08;
  fVar23 = DAT_1808ac34c;
  DAT_1809f3bb4 = 0;
  _DAT_1809f4fe0 = _DAT_1809f4fe0 & 0xffffff00;
  if ((DAT_180cfed40 == '\0') || (pcVar19 = (char *)param_1[0x10], pcVar19 == (char *)0x0)) {
    pcVar19 = "no settings";
    if (DAT_180cfed40 == '\0') {
      pcVar19 = "schema offsets missing";
    }
    goto LAB_1802abcbf;
  }
  if (DAT_180cd033f == '\0') {
    DAT_180cfeb18 = 0;
  }
  DAT_180cd033f = '\0';
  if (*pcVar19 == '\0') {
    pcVar19 = "disabled for group";
    goto LAB_1802abcbf;
  }
  if (pcVar19[3] == '\0') {
    fVar29 = 0.0;
LAB_1802ab0d1:
    if ((((DAT_180cfed7c != 0) && (param_1[1] != 0.0)) &&
        (fVar22 = (float)FUN_18000f3d0((longlong)param_1[1] + (ulonglong)DAT_180cfed7c),
        0.0 < fVar22)) && ((fVar29 <= 0.0 || (fVar29 < fVar22)))) {
      pcVar19 = "flashed";
      goto LAB_1802abcbf;
    }
  }
  else {
    fVar29 = (float)*(int *)(pcVar19 + 0x10) / DAT_1808acb08;
    if (fVar29 < DAT_1808ac34c) goto LAB_1802ab0d1;
  }
  uVar10 = FUN_180011200((ulonglong)DAT_180ca0a18 + (longlong)param_1[1]);
  if (pcVar19[4] == '\0' && (uVar10 & 1) == 0) {
    pcVar19 = "in air";
    goto LAB_1802abcbf;
  }
  if (*(int *)((longlong)param_1 + 0x4c) < 1) {
    pcVar19 = "no frame tick";
    goto LAB_1802abcbf;
  }
  iVar13 = *(int *)(param_1 + 4);
  local_160 = iVar13;
  if (iVar13 == 0x40) {
    if (((*(char *)((longlong)param_1 + 0x8b) == '\0') &&
        (*(char *)((longlong)param_1 + 0x8c) == '\0')) &&
       ((*(char *)((longlong)param_1 + 0x8d) == '\0' &&
        ((*(char *)(param_1 + 0x11) == '\0' && (*(char *)((longlong)param_1 + 0x89) == '\0')))))) {
      cVar8 = *(char *)((longlong)param_1 + 0x8a);
      goto joined_r0x0001802ab185;
    }
  }
  else if ((*(char *)(param_1 + 0x11) == '\0') && (*(char *)((longlong)param_1 + 0x89) == '\0')) {
    cVar8 = *(char *)((longlong)param_1 + 0x8a);
joined_r0x0001802ab185:
    if (cVar8 == '\0') {
      iVar1 = *(int *)(pcVar19 + 0x1c);
      if ((DAT_180cfed64 == 0) || (param_1[3] == 0.0)) {
        iVar11 = 0;
      }
      else {
        iVar11 = FUN_180011200((ulonglong)DAT_180cfed64 + (longlong)param_1[3]);
      }
      if ((pcVar19[0x38] == '\0') || (iVar11 < 1)) {
        bVar21 = false;
      }
      else {
        bVar21 = true;
        if ((float)(*param_1 - _DAT_1809f3ba8) <= DAT_1809f3ba0) {
          DAT_1809f3ba0 = (float)(*param_1 - _DAT_1809f3ba8);
        }
        DAT_1809f3ba4 = DAT_1809f3ba4 | pcVar19[0x39];
      }
      fVar29 = *(float *)(param_1 + 10);
      uVar10 = DAT_180cfed84;
      if (iVar13 == 0x40) {
        uVar10 = DAT_180cfed8c;
      }
      iVar2 = *(int *)((longlong)param_1 + 0x4c);
      dVar28 = param_1[2];
      if ((uVar10 == 0) || (dVar28 == 0.0)) {
        iVar12 = 0;
      }
      else {
        iVar12 = FUN_180011200((ulonglong)uVar10 + (longlong)dVar28);
      }
      uVar10 = DAT_180cfed88;
      if (iVar13 == 0x40) {
        uVar10 = DAT_180cfed90;
      }
      if ((uVar10 == 0) || (dVar28 == 0.0)) {
        fVar22 = 0.0;
LAB_1802ab269:
        if (fVar23 <= fVar22) goto LAB_1802ab26e;
      }
      else {
        fVar22 = (float)FUN_18000f3d0((ulonglong)uVar10 + (longlong)dVar28);
        if (0.0 <= fVar22) goto LAB_1802ab269;
LAB_1802ab26e:
        local_res20 = (double)((ulonglong)local_res20 & 0xffffffff00000000);
        fVar22 = (float)FUN_180512fd0();
        fVar24 = local_res20._0_4_;
        if (fVar22 < 0.0) {
          fVar22 = fVar22 + fVar23;
          if (fVar23 <= fVar22) {
            fVar22 = 0.0;
            iVar12 = (int)local_res20._0_4_ + iVar12;
            goto LAB_1802ab2bb;
          }
          fVar24 = local_res20._0_4_ + DAT_1808acda0;
        }
        iVar12 = (int)fVar24 + iVar12;
      }
LAB_1802ab2bb:
      if (iVar12 == iVar2) {
        bVar3 = fVar22 < fVar29;
      }
      else {
        bVar3 = iVar12 < iVar2;
      }
      if (!bVar3) {
        pcVar19 = "weapon not ready";
        goto LAB_1802abcbf;
      }
      local_res20 = param_1[1];
      local_f0 = 0;
      local_e8 = (char *)0x0;
      local_148 = param_1[3];
      local_150 = param_1[2];
      local_140 = *(undefined4 *)(param_1 + 4);
      local_13c = 0;
      local_138 = 0;
      uStack_130 = 0;
      local_128 = 0;
      uStack_120 = 0;
      local_118 = 0;
      uStack_110 = 0;
      local_108 = 0;
      uStack_100 = 0;
      local_f8 = 0;
      local_e0 = 0;
      local_d8 = 0;
      local_d0 = 0;
      local_170 = 0.0;
      local_168[0] = 0;
      local_158 = local_res20;
      cVar8 = FUN_1802ae6f0(&local_res20,*(undefined4 *)((longlong)param_1 + 0x4c),
                            *(undefined4 *)(param_1 + 10),&local_170);
      if (cVar8 == '\0') {
        pdVar15 = param_1 + 8;
        puVar18 = (undefined4 *)((longlong)param_1 + 0x44);
        pdVar20 = param_1 + 9;
      }
      else {
        pdVar15 = (double *)&local_170;
        puVar18 = (undefined4 *)((longlong)&local_170 + 4);
        pdVar20 = (double *)local_168;
      }
      local_13c = *(undefined4 *)pdVar15;
      local_138 = CONCAT44(*(undefined4 *)pdVar20,*puVar18);
      local_128 = CONCAT44(local_128._4_4_,
                           *(float *)((longlong)param_1 + 0x5c) + *(float *)(param_1 + 6));
      uStack_130 = CONCAT44((float)((ulonglong)*(undefined8 *)((longlong)param_1 + 0x54) >> 0x20) +
                            (float)((ulonglong)param_1[5] >> 0x20),
                            (float)*(undefined8 *)((longlong)param_1 + 0x54) + SUB84(param_1[5],0));
      fVar23 = (float)FUN_180517790();
      fVar29 = (float)FUN_180517200();
      fVar22 = (float)FUN_180517790();
      fVar24 = (float)FUN_180517200();
      fVar25 = (float)FUN_180517790();
      fVar26 = (float)FUN_180517200();
      local_128 = CONCAT44(fVar24 * fVar29,(undefined4)local_128);
      uStack_120 = CONCAT44((uint)fVar23 ^ DAT_1808adec0,fVar22 * fVar29);
      local_118 = CONCAT44(fVar25 * fVar23 * fVar22 + fVar26 * fVar24,
                           fVar25 * fVar23 * fVar24 - fVar26 * fVar22);
      uStack_110 = CONCAT44(fVar26 * fVar23 * fVar24 + fVar25 * fVar22,fVar25 * fVar29);
      local_108 = CONCAT44(fVar26 * fVar29,fVar26 * fVar23 * fVar22 - fVar25 * fVar24);
      if ((DAT_180cfed64 == 0) || (param_1[3] == 0.0)) {
LAB_1802ab585:
        bVar3 = false;
      }
      else {
        dVar28 = param_1[2];
        iVar13 = FUN_180011200((ulonglong)DAT_180cfed64 + (longlong)param_1[3]);
        if ((iVar13 < 1) ||
           (((DAT_180cfed68 == 0 || (dVar28 == 0.0)) ||
            (iVar13 = FUN_180011200((longlong)dVar28 + (ulonglong)DAT_180cfed68), iVar13 < 1))))
        goto LAB_1802ab585;
        bVar3 = true;
      }
      if ((!bVar21) || (bVar3)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if ((pcVar19[0x20] == '\0') || (iVar1 == 0x65)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      local_res20 = param_1[1];
      local_1a0 = local_1a0 & 0xffffffffffffff00;
      local_198 = 0;
      local_190 = 0;
      local_188 = 0;
      local_17c = 0.0;
      uStack_178 = 0;
      local_174 = 0;
      uStack_184 = 1;
      uStack_180 = 0;
      FUN_1802ad2f0(&local_res20,&local_1a0);
      if (bVar5 || bVar6) {
        fVar23 = (float)FUN_1802acde0(param_1[2],&local_res20);
        uVar10 = DAT_180cfed9c;
        if (fVar23 < 0.0) {
          fVar23 = local_17c;
        }
        uStack_100 = CONCAT44(uStack_100._4_4_,fVar23);
        if (bVar5) {
          uVar14 = 1;
        }
        else if ((DAT_180cfed9c == 0) || (param_1[2] == 0.0)) {
          uVar14 = 0;
        }
        else {
          uVar14 = FUN_180011200((longlong)param_1[2] + (ulonglong)DAT_180cfed9c);
        }
        if (bVar6) {
          uStack_100 = uStack_100 & 0xffffffff;
        }
        else {
          if (1 < uVar14) {
            uVar14 = 0;
          }
          uVar14 = DAT_180cfeda0 + uVar14 * 4;
          if ((uVar14 == 0) || (param_1[3] == 0.0)) {
            uVar27 = 0;
          }
          else {
            uVar27 = FUN_18000f3d0((ulonglong)uVar14 + (longlong)param_1[3]);
          }
          uStack_100 = CONCAT44(uVar27,(undefined4)uStack_100);
        }
      }
      else {
        uStack_100 = CONCAT44(uStack_178,local_17c);
        uVar10 = DAT_180cfed9c;
      }
      if ((DAT_180cfed94 == 0) || (param_1[2] == 0.0)) {
        uVar27 = 0;
      }
      else {
        uVar27 = FUN_18000f3d0((ulonglong)DAT_180cfed94 + (longlong)param_1[2]);
      }
      local_f8 = CONCAT44(local_f8._4_4_,uVar27);
      if (bVar5) {
        local_f8 = CONCAT44(1,uVar27);
      }
      else {
        if ((uVar10 == 0) || (param_1[2] == 0.0)) {
          uVar27 = 0;
        }
        else {
          uVar27 = FUN_180011200((ulonglong)uVar10 + (longlong)param_1[2]);
        }
        local_f8 = CONCAT44(uVar27,(undefined4)local_f8);
      }
      if (pcVar19[1] == '\0') {
        local_f0 = 0;
      }
      else {
        local_f0 = *(undefined4 *)(pcVar19 + 8);
      }
      local_e8 = pcVar19 + 0x14;
      if (iVar1 == 0x65) {
        local_e0 = CONCAT44(0x40800000,(float)*(int *)(pcVar19 + 0x24) / fVar7);
      }
      else {
        local_e0 = 0;
      }
      if ((DAT_180cfed48 == 0) || (param_1[3] == 0.0)) {
        iVar13 = 0;
      }
      else {
        iVar13 = FUN_180011200((longlong)param_1[3] + (ulonglong)DAT_180cfed48);
      }
      local_d8 = CONCAT44(local_d8._4_4_,(float)iVar13);
      if ((DAT_180cfed4c == 0) || (param_1[3] == 0.0)) {
        uVar27 = 0;
      }
      else {
        uVar27 = FUN_18000f3d0((ulonglong)DAT_180cfed4c + (longlong)param_1[3]);
      }
      local_d8 = CONCAT44(uVar27,(undefined4)local_d8);
      if ((DAT_180cfed50 == 0) || (param_1[3] == 0.0)) {
        uVar27 = 0;
      }
      else {
        uVar27 = FUN_18000f3d0((ulonglong)DAT_180cfed50 + (longlong)param_1[3]);
      }
      local_d0 = CONCAT44(local_d0._4_4_,uVar27);
      if ((DAT_180cfed80 == 0) || (param_1[1] == 0.0)) {
        uVar9 = 0;
      }
      else {
        uVar9 = FUN_180011220((ulonglong)DAT_180cfed80 + (longlong)param_1[1]);
      }
      local_d0 = (ulonglong)CONCAT14(uVar9,(undefined4)local_d0);
      if (pcVar19[2] == '\0') {
        fVar23 = 0.0;
      }
      else {
        fVar23 = (float)*(int *)(pcVar19 + 0xc) / fVar7;
      }
      uStack_178 = 0x807414b0;
      local_174 = 1;
      local_1a0 = 0;
      local_198 = local_198 & 0xffffffff00000000;
      local_190 = 0;
      local_188 = 0;
      uStack_184 = 0;
      uStack_180 = 0x3f800000;
      lVar16 = FUN_1802aa1c0(&local_158,iVar1 == 0x65,*(undefined4 *)((longlong)param_1 + 0x4c),
                             (float)*(int *)(pcVar19 + 0x1c) / fVar7,*(undefined4 *)(pcVar19 + 0x28)
                             ,fVar23,0,&local_1a0);
      if ((DAT_180cfed98 == 0) || (param_1[2] == 0.0)) {
        fVar23 = 0.0;
      }
      else {
        fVar23 = (float)FUN_18000f3d0((ulonglong)DAT_180cfed98 + (longlong)param_1[2]);
      }
      pcVar4 = (char *)CONCAT44(local_174,uStack_178);
      if ((iVar1 == 0x65) && (*(int *)(param_1 + 4) != 0x1f)) {
        DAT_180cfedb0 = DAT_180cfedb0 + 1;
        if ((lVar16 != 0) || ((0 < local_1a0._4_4_ || (((byte)DAT_180cfedb0 & 0x7f) == 1)))) {
          _DAT_1809f4fe0 = CONCAT31(DAT_1809f4fe0_1,1);
          DAT_1809f4fe4 = *(undefined4 *)((longlong)param_1 + 0x4c);
          DAT_1809f4fe8 = *(undefined4 *)(param_1 + 10);
          DAT_1809f4ff0 = uStack_130._4_4_;
          DAT_1809f4fec = (undefined4)uStack_130;
          DAT_1809f4ff4 = (undefined4)local_128;
          _DAT_1809f4ff8 = param_1[5];
          _DAT_1809f5000 = *(undefined4 *)(param_1 + 6);
          DAT_1809f5004 = (undefined4)*(undefined8 *)((longlong)param_1 + 0x54);
          DAT_1809f5008 = (undefined4)((ulonglong)*(undefined8 *)((longlong)param_1 + 0x54) >> 0x20)
          ;
          DAT_1809f500c = *(undefined4 *)((longlong)param_1 + 0x5c);
          DAT_1809f501c = local_f8._4_4_;
          DAT_1809f5028 = (undefined4)local_1a0;
          DAT_1809f5010 = (undefined4)uStack_100;
          DAT_1809f5030 = (undefined4)local_198;
          DAT_1809f5018 = (undefined4)local_f8;
          _DAT_1809f5034 = local_198._4_4_;
          DAT_1809f5020 = (undefined4)local_e0;
          _DAT_1809f5038 = local_190;
          DAT_1809f5040 = local_188;
          DAT_1809f5044 = uStack_184;
          _DAT_1809f504c = local_17c;
          DAT_1809f5014 = uStack_100._4_4_;
          DAT_1809f5048 = uStack_180;
          DAT_1809f502c = local_1a0._4_4_;
          PTR_s_no_pellet_on_an_enemy_1809f5050 = pcVar4;
          goto LAB_1802aba13;
        }
      }
      else {
LAB_1802aba13:
        if (lVar16 != 0) {
          if (DAT_180cfeb18 != lVar16) {
            _DAT_180cfeb28 = *param_1;
            DAT_180cfeb18 = lVar16;
          }
          _DAT_180cfeb20 = *param_1;
          DAT_180cd033f = '\x01';
          lVar17 = FUN_1802a7c30(lVar16);
          fVar7 = DAT_1808acc3c;
          if ((lVar17 != 0) && (0.0 < (float)*(int *)(pcVar19 + 0x2c) / DAT_1808acc3c)) {
            if ((float)(*param_1 - *(double *)(lVar17 + 0x10)) <
                (float)*(int *)(pcVar19 + 0x2c) / DAT_1808acc3c) {
              pcVar19 = "reaction time";
              goto LAB_1802abcbf;
            }
            if (*(char *)(lVar17 + 0x19) == '\0') {
              pcVar19 = "reaction time: not visible to the scan";
              goto LAB_1802abcbf;
            }
          }
          if ((0.0 < (float)*(int *)(pcVar19 + 0x30) / DAT_1808acc3c) &&
             ((float)(*param_1 - _DAT_180cfeb28) < (float)*(int *)(pcVar19 + 0x30) / DAT_1808acc3c))
          {
            pcVar19 = "capture delay";
            goto LAB_1802abcbf;
          }
          if ((pcVar19[0x19] != '\0') && (cVar8 = FUN_1802aad50(&local_158,lVar16), cVar8 == '\0'))
          {
            pcVar19 = "force center";
            goto LAB_1802abcbf;
          }
          _DAT_1809f3ba8 = *param_1;
          if ((((pcVar19[5] != '\0') || (pcVar19[0x38] != '\0')) && (0 < iVar11)) && (!bVar3)) {
            pcVar19 = "not scoped";
            DAT_1809f3bb0 = fVar23;
            goto LAB_1802abcbf;
          }
          iVar13 = *(int *)(pcVar19 + 0x34);
          bVar21 = local_160 == 0x40;
          DAT_1809f3bb0 = fVar23;
          dVar28 = (double)FUN_1802a0cf0();
          uRam00000001809f50b8 = _DAT_1809f5038;
          DAT_1809f3bb4 = 1;
          DAT_180cd033e = 1;
          _DAT_1809f5070 = CONCAT44(DAT_1809f4ff4,DAT_1809f4ff0);
          dRam00000001809f5078 = _DAT_1809f4ff8;
          _DAT_1809f5090 = CONCAT44(DAT_1809f5014,DAT_1809f5010);
          uRam00000001809f5098 = CONCAT44(DAT_1809f501c,DAT_1809f5018);
          _DAT_1809f50b0 = CONCAT44(_DAT_1809f5034,DAT_1809f5030);
          (&DAT_1809f3f18)[bVar21] = dVar28 + (double)((float)iVar13 / fVar7);
          PTR_s_no_pellet_on_an_enemy_1809f50d0 = PTR_s_no_pellet_on_an_enemy_1809f5050;
          _DAT_1809f5060 = CONCAT44(DAT_1809f4fe4,_DAT_1809f4fe0);
          _DAT_1809f5068 = CONCAT44(DAT_1809f4fec,DAT_1809f4fe8);
          _DAT_1809f5080 = CONCAT44(DAT_1809f5004,_DAT_1809f5000);
          _DAT_1809f5088 = CONCAT44(DAT_1809f500c,DAT_1809f5008);
          _DAT_1809f50a0 = CONCAT44(uRam00000001809f5024,DAT_1809f5020);
          uRam00000001809f50a8 = CONCAT44(DAT_1809f502c,DAT_1809f5028);
          _DAT_1809f50c0 = CONCAT44(DAT_1809f5044,DAT_1809f5040);
          uRam00000001809f50c8 = CONCAT44(_DAT_1809f504c,DAT_1809f5048);
          (&DAT_1809f3f28)[bVar21] = 1;
          if (iVar1 == 0x65) {
            _DAT_1809f5060 = CONCAT71(DAT_1809f5060_1,1);
            if (*(int *)(param_1 + 4) == 0x1f) goto LAB_1802abc9b;
          }
          else {
LAB_1802abc9b:
            _DAT_1809f5060 = _DAT_1809f5060 & 0xffffffffffffff00;
          }
          pcVar19 = "fired";
          goto LAB_1802abcbf;
        }
      }
      if (bVar21) {
        if (bVar3) {
          if (DAT_1808abfbc < DAT_1809f3bb0 - fVar23) {
            if (*param_1 - _DAT_1809f3ba8 <= DAT_1808ac420) {
              _DAT_1809f3ba8 = *param_1;
              DAT_1809f3bb0 = fVar23;
            }
          }
        }
      }
      if ((iVar1 == 0x65) && (DAT_180cfeb18 != 0)) {
        if (DAT_180cd034e == '\0') {
          if (_DAT_1808ac3e0 < *param_1 - _DAT_180cfeb20) goto LAB_1802abaa8;
        }
        else {
          _DAT_180cfeb20 = *param_1;
        }
        DAT_180cd033f = '\x01';
      }
LAB_1802abaa8:
      pcVar19 = "no target";
      if (*pcVar4 != '\0') {
        pcVar19 = pcVar4;
      }
      goto LAB_1802abcbf;
    }
  }
  pcVar19 = "attack held";
LAB_1802abcbf:
  FUN_1802a96b0(pcVar19);
  return;
}



/* ===== 1802abd00 FUN_1802abd00 ===== */

void FUN_1802abd00(longlong param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  char *pcVar11;
  int iVar12;
  char *pcVar13;
  undefined8 local_78;
  float local_70;
  float local_68;
  float local_64;
  float local_60;
  
  cVar6 = DAT_180cd033e;
  DAT_180cd034d = DAT_180cd033e;
  DAT_180cd033e = 0;
  if (((cVar6 != '\0') && (DAT_1809f5060 != '\0')) && (DAT_1809f5060 = '\0', param_1 != 0)) {
    iVar1 = *(int *)(param_1 + 0x30);
    if ((iVar1 < 1) || (0x7ffffffefffe < *(longlong *)(param_1 + 0x38) - 0x10000U)) {
      FUN_1802a0d50("seed fired | cmd %d | no input history in the command",
                    *(undefined4 *)(param_1 + 8));
    }
    else {
      iVar12 = *(int *)(param_1 + 0x4c);
      if ((iVar12 < 0) || (iVar1 <= iVar12)) {
        iVar12 = iVar1 + -1;
      }
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 8 + (longlong)iVar12 * 8);
      if (lVar4 - 0x10000U < 0x7ffffffeffff) {
        local_78 = 0;
        local_70 = 0.0;
        lVar5 = *(longlong *)(lVar4 + 0x18);
        if (lVar5 - 0x10000U < 0x7ffffffeffff) {
          local_70 = *(float *)(lVar5 + 0x20);
          local_78 = *(undefined8 *)(lVar5 + 0x18);
        }
        uVar2 = *(uint *)(lVar4 + 0x10);
        uVar3 = *(undefined4 *)(lVar4 + 0x68);
        local_68 = DAT_1809f5084 + (float)local_78;
        local_64 = DAT_1809f5088 + local_78._4_4_;
        local_60 = DAT_1809f508c + local_70;
        if (DAT_180961ca0 == (code *)0x0) {
          iVar7 = 0;
          iVar8 = 0;
          iVar9 = 0;
        }
        else {
          iVar7 = (*DAT_180961ca0)(0,&local_78,uVar3);
          if (DAT_180961ca0 == (code *)0x0) {
            iVar8 = 0;
            iVar9 = 0;
          }
          else {
            iVar8 = (*DAT_180961ca0)(0,&local_68,uVar3);
            iVar9 = 0;
            if (DAT_180961ca0 != (code *)0x0) {
              iVar9 = (*DAT_180961ca0)(0,&DAT_1809f506c,uVar3);
            }
          }
        }
        pcVar13 = "DIFFERENT";
        pcVar11 = "DIFFERENT";
        if (iVar9 == DAT_1809f50b0) {
          pcVar11 = "same";
        }
        pcVar10 = "DIFFERENT";
        if (iVar8 == DAT_1809f50b0) {
          pcVar10 = "same";
        }
        if (iVar7 == DAT_1809f50b0) {
          pcVar13 = "same";
        }
        FUN_1802a0d50("seed fired | cmd %d | entry %d/%d | ours: tick %d %.3f angles %.3f %.3f %.3f seed %u | entry: render tick %d %.3f player tick %d %.3f (has %d) view %.3f %.3f %.3f | seed(entry view, player tick) %u %s | seed(entry view + punch, player tick) %u %s | seed(our angles, player tick) %u %s"
                      ,*(undefined4 *)(param_1 + 8),iVar12,iVar1,DAT_1809f5064,(double)DAT_1809f5068
                      ,(double)DAT_1809f506c,(double)DAT_1809f5070,(double)DAT_1809f5074,
                      DAT_1809f50b0,*(undefined4 *)(lVar4 + 0x60),(double)*(float *)(lVar4 + 100),
                      uVar3,(double)*(float *)(lVar4 + 0x6c),(uVar2 & 0x800) != 0,
                      (double)(float)local_78,(double)local_78._4_4_,(double)local_70,iVar7,pcVar13,
                      iVar8,pcVar10,iVar9,pcVar11);
      }
    }
  }
  return;
}



/* ===== 1802ac0a0 FUN_1802ac0a0 ===== */

undefined8 * FUN_1802ac0a0(undefined8 *param_1,undefined8 *param_2)

{
  float *pfVar1;
  float fVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  if (param_1 == param_2) {
    return param_2;
  }
  for (puVar8 = param_1 + 3; puVar8 != param_2; puVar8 = puVar8 + 3) {
    fVar2 = *(float *)(puVar8 + 1);
    uVar5 = *puVar8;
    uVar4 = *(undefined4 *)((longlong)puVar8 + 0x14);
    uVar3 = *(undefined8 *)((longlong)puVar8 + 0xc);
    if (fVar2 < *(float *)(param_1 + 1) || fVar2 == *(float *)(param_1 + 1)) {
      puVar7 = puVar8;
      puVar6 = puVar8;
      if (*(float *)(puVar8 + -2) <= fVar2 && fVar2 != *(float *)(puVar8 + -2)) {
        do {
          puVar7 = puVar6 + -3;
          *(undefined4 *)puVar6 = *(undefined4 *)puVar7;
          *(undefined4 *)((longlong)puVar6 + 4) = *(undefined4 *)((longlong)puVar6 + -0x14);
          *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(puVar6 + -2);
          *(undefined4 *)((longlong)puVar6 + 0xc) = *(undefined4 *)((longlong)puVar6 + -0xc);
          puVar6[2] = puVar6[-1];
          pfVar1 = (float *)(puVar6 + -5);
          puVar6 = puVar7;
        } while (*pfVar1 <= fVar2 && fVar2 != *pfVar1);
      }
      *(undefined8 *)((longlong)puVar7 + 0xc) = uVar3;
      *(undefined4 *)((longlong)puVar7 + 0x14) = uVar4;
      *(float *)(puVar7 + 1) = fVar2;
      *puVar7 = uVar5;
    }
    else {
      FUN_180540530(param_1 + 3,param_1,(longlong)puVar8 - (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 0xc) = uVar3;
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar4;
      *(float *)(param_1 + 1) = fVar2;
      *param_1 = uVar5;
    }
  }
  return param_2;
}



