/* ===== 18004db90 FUN_18004db90 ===== */

undefined8 * FUN_18004db90(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = std::_Facet_base::vftable;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1803d64e0(param_1,8);
  }
  return param_1;
}



/* ===== 18004dbc0 FUN_18004dbc0 ===== */

longlong FUN_18004dbc0(longlong param_1,longlong param_2)

{
  FUN_1804ea500(param_1,0);
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined2 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined2 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined1 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined1 *)(param_1 + 0x60) = 0;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4d30("bad locale name");
  }
  FUN_1804ea850(param_1,param_2);
  return param_1;
}



/* ===== 18004dc40 FUN_18004dc40 ===== */

void FUN_18004dc40(longlong param_1)

{
  FUN_1804ea910();
  if (*(longlong *)(param_1 + 0x58) != 0) {
    thunk_FUN_1805277b0();
  }
  *(undefined8 *)(param_1 + 0x58) = 0;
  if (*(longlong *)(param_1 + 0x48) != 0) {
    thunk_FUN_1805277b0();
  }
  *(undefined8 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x38) != 0) {
    thunk_FUN_1805277b0();
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  if (*(longlong *)(param_1 + 0x28) != 0) {
    thunk_FUN_1805277b0();
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (*(longlong *)(param_1 + 0x18) != 0) {
    thunk_FUN_1805277b0();
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (*(longlong *)(param_1 + 8) != 0) {
    thunk_FUN_1805277b0();
  }
  *(undefined8 *)(param_1 + 8) = 0;
  FUN_1804ea5a0(param_1);
  return;
}



/* ===== 18004dce0 FUN_18004dce0 ===== */

void FUN_18004dce0(longlong param_1)

{
  LOCK();
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  UNLOCK();
  return;
}



/* ===== 18004dcf0 FUN_18004dcf0 ===== */

longlong FUN_18004dcf0(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  
  LOCK();
  piVar1 = (int *)(param_1 + 8);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  lVar2 = 0;
  if (*piVar1 == 0) {
    lVar2 = param_1;
  }
  return lVar2;
}



/* ===== 18004dd00 FUN_18004dd00 ===== */

void FUN_18004dd00(undefined8 *param_1)

{
  *param_1 = std::locale::facet::vftable;
  *param_1 = std::_Facet_base::vftable;
  return;
}



/* ===== 18004dd20 FUN_18004dd20 ===== */

void FUN_18004dd20(longlong param_1)

{
  undefined8 *puVar1;
  
  if (*(longlong **)(param_1 + 8) != (longlong *)0x0) {
    puVar1 = (undefined8 *)(**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
    if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00018004dd47. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar1)(puVar1,1);
      return;
    }
  }
  return;
}



/* ===== 18004dd50 FUN_18004dd50 ===== */

longlong FUN_18004dd50(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 8);
  if ((param_2 < *(ulonglong *)(lVar2 + 0x18)) &&
     (lVar1 = *(longlong *)(param_2 * 8 + *(longlong *)(lVar2 + 0x10)), lVar1 != 0)) {
    return lVar1;
  }
  if ((*(char *)(lVar2 + 0x24) == '\0') ||
     (lVar2 = FUN_1804ea750(), *(ulonglong *)(lVar2 + 0x18) <= param_2)) {
    return 0;
  }
  return *(longlong *)(param_2 * 8 + *(longlong *)(lVar2 + 0x10));
}



/* ===== 18004ddc0 FUN_18004ddc0 ===== */

undefined8 * FUN_18004ddc0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = std::locale::facet::vftable;
  *param_1 = std::_Facet_base::vftable;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1803d64e0(param_1,0x10);
  }
  return param_1;
}



/* ===== 18004de00 FUN_18004de00 ===== */

void FUN_18004de00(undefined8 *param_1)

{
  *param_1 = std::codecvt_base::vftable;
  *param_1 = std::locale::facet::vftable;
  *param_1 = std::_Facet_base::vftable;
  return;
}



/* ===== 18004de30 FUN_18004de30 ===== */

undefined1 FUN_18004de30(void)

{
  return 0;
}



/* ===== 18004de40 FUN_18004de40 ===== */

undefined8 FUN_18004de40(void)

{
  return 1;
}



/* ===== 18004de50 FUN_18004de50 ===== */

undefined8 * FUN_18004de50(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = std::codecvt_base::vftable;
  *param_1 = std::locale::facet::vftable;
  *param_1 = std::_Facet_base::vftable;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1803d64e0(param_1,0x10);
  }
  return param_1;
}



/* ===== 18004dea0 FUN_18004dea0 ===== */

void FUN_18004dea0(undefined8 *param_1)

{
  *param_1 = std::ctype_base::vftable;
  *param_1 = std::locale::facet::vftable;
  *param_1 = std::_Facet_base::vftable;
  return;
}



/* ===== 18004ded0 FUN_18004ded0 ===== */

undefined8 * FUN_18004ded0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = std::ctype_base::vftable;
  *param_1 = std::locale::facet::vftable;
  *param_1 = std::_Facet_base::vftable;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1803d64e0(param_1,0x10);
  }
  return param_1;
}



/* ===== 18004df20 FUN_18004df20 ===== */

undefined8 FUN_18004df20(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  undefined1 *puVar11;
  undefined1 local_a0 [8];
  longlong local_98;
  undefined1 local_90;
  longlong local_88;
  undefined1 local_80;
  longlong local_78;
  undefined2 local_70;
  longlong local_68;
  undefined2 local_60;
  longlong local_58;
  undefined1 local_50;
  longlong local_48;
  undefined1 local_40;
  undefined1 local_38 [32];
  
  if ((param_1 != (longlong *)0x0) && (*param_1 == 0)) {
    puVar9 = (undefined8 *)FUN_1804ecaa0(0x30,param_2,param_3,param_4,0);
    lVar1 = *(longlong *)(param_2 + 8);
    if (lVar1 == 0) {
      puVar11 = &DAT_18058b643;
    }
    else {
      puVar11 = *(undefined1 **)(lVar1 + 0x28);
      if (puVar11 == (undefined1 *)0x0) {
        puVar11 = (undefined1 *)(lVar1 + 0x30);
      }
    }
    FUN_1804ea500(local_a0,0);
    local_98 = 0;
    local_90 = 0;
    local_88 = 0;
    local_80 = 0;
    local_78 = 0;
    local_70 = 0;
    local_68 = 0;
    local_60 = 0;
    local_58 = 0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 0;
    if (puVar11 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_1804e4d30("bad locale name");
    }
    FUN_1804ea850(local_a0,puVar11);
    *puVar9 = std::_Facet_base::vftable;
    *puVar9 = std::locale::facet::vftable;
    *(undefined4 *)(puVar9 + 1) = 0;
    *puVar9 = std::ctype_base::vftable;
    *puVar9 = std::ctype<char>::vftable;
    puVar10 = (undefined4 *)FUN_1804eac90(local_38);
    uVar2 = puVar10[4];
    uVar3 = puVar10[5];
    uVar4 = puVar10[6];
    uVar5 = puVar10[7];
    uVar6 = puVar10[1];
    uVar7 = puVar10[2];
    uVar8 = puVar10[3];
    *(undefined4 *)(puVar9 + 2) = *puVar10;
    *(undefined4 *)((longlong)puVar9 + 0x14) = uVar6;
    *(undefined4 *)(puVar9 + 3) = uVar7;
    *(undefined4 *)((longlong)puVar9 + 0x1c) = uVar8;
    *(undefined4 *)(puVar9 + 4) = uVar2;
    *(undefined4 *)((longlong)puVar9 + 0x24) = uVar3;
    *(undefined4 *)(puVar9 + 5) = uVar4;
    *(undefined4 *)((longlong)puVar9 + 0x2c) = uVar5;
    *param_1 = (longlong)puVar9;
    FUN_1804ea910(local_a0);
    if (local_48 != 0) {
      thunk_FUN_1805277b0();
    }
    local_48 = 0;
    if (local_58 != 0) {
      thunk_FUN_1805277b0();
    }
    local_58 = 0;
    if (local_68 != 0) {
      thunk_FUN_1805277b0();
    }
    local_68 = 0;
    if (local_78 != 0) {
      thunk_FUN_1805277b0();
    }
    local_78 = 0;
    if (local_88 != 0) {
      thunk_FUN_1805277b0();
    }
    local_88 = 0;
    if (local_98 != 0) {
      thunk_FUN_1805277b0();
    }
    local_98 = 0;
    FUN_1804ea5a0(local_a0);
  }
  return 2;
}



/* ===== 18004e0e0 FUN_18004e0e0 ===== */

void FUN_18004e0e0(longlong param_1,undefined1 param_2)

{
  FUN_1804ead70(param_2,param_1 + 0x10);
  return;
}



/* ===== 18004e0f0 FUN_18004e0f0 ===== */

undefined1 * FUN_18004e0f0(longlong param_1,undefined1 *param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  if (param_2 != param_3) {
    do {
      uVar1 = FUN_1804ead70(*param_2,param_1 + 0x10);
      *param_2 = uVar1;
      param_2 = param_2 + 1;
    } while (param_2 != param_3);
  }
  return param_2;
}



/* ===== 18004e140 FUN_18004e140 ===== */

void FUN_18004e140(longlong param_1,undefined1 param_2)

{
  FUN_1804eaeb0(param_2,param_1 + 0x10);
  return;
}



/* ===== 18004e150 FUN_18004e150 ===== */

undefined1 * FUN_18004e150(longlong param_1,undefined1 *param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  if (param_2 != param_3) {
    do {
      uVar1 = FUN_1804eaeb0(*param_2,param_1 + 0x10);
      *param_2 = uVar1;
      param_2 = param_2 + 1;
    } while (param_2 != param_3);
  }
  return param_2;
}



/* ===== 18004e1a0 FUN_18004e1a0 ===== */

undefined1 FUN_18004e1a0(undefined8 param_1,undefined1 param_2)

{
  return param_2;
}



/* ===== 18004e1b0 FUN_18004e1b0 ===== */

longlong FUN_18004e1b0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  FUN_180540530(param_4,param_2,param_3 - param_2);
  return param_3;
}



/* ===== 18004e1d0 FUN_18004e1d0 ===== */

longlong FUN_18004e1d0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                      undefined8 param_5)

{
  FUN_180540530(param_5,param_2,param_3 - param_2);
  return param_3;
}



/* ===== 18004e1f0 FUN_18004e1f0 ===== */

undefined8 * FUN_18004e1f0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = std::ctype<char>::vftable;
  if (*(int *)(param_1 + 4) < 1) {
    if (*(int *)(param_1 + 4) < 0) {
      thunk_FUN_1803d64e0(param_1[3]);
    }
  }
  else {
    thunk_FUN_1805277b0(param_1[3]);
  }
  thunk_FUN_1805277b0(param_1[5]);
  *param_1 = std::ctype_base::vftable;
  *param_1 = std::locale::facet::vftable;
  *param_1 = std::_Facet_base::vftable;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1803d64e0(param_1,0x30);
  }
  return param_1;
}



/* ===== 18004e280 FUN_18004e280 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_18004e280(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [32];
  undefined8 *local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48 [32];
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_88;
  uVar1 = *param_3;
  uVar2 = param_3[1];
  local_68 = param_1;
  FUN_180013350(local_48);
  local_58 = uVar1;
  uStack_50 = uVar2;
  FUN_18004d810(param_1,&local_58,local_48);
  FUN_18000f890(local_48);
  *param_1 = std::system_error::vftable;
  *param_1 = std::ios_base::failure::vftable;
  return param_1;
}



/* ===== 18004e310 FUN_18004e310 ===== */

void FUN_18004e310(longlong param_1,uint param_2,char param_3)

{
  undefined8 uVar1;
  uint uVar2;
  char *pcVar3;
  undefined1 local_48 [16];
  undefined1 local_38 [48];
  
  uVar2 = param_2 & *(uint *)(param_1 + 0x14);
  *(uint *)(param_1 + 0x10) = param_2 & 0x17;
  if ((uVar2 & 0x17) == 0) {
    return;
  }
  if (param_3 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_1804ef5f0(0,0);
  }
  if ((uVar2 & 4) == 0) {
    pcVar3 = "ios_base::failbit set";
    if ((uVar2 & 2) == 0) {
      pcVar3 = "ios_base::eofbit set";
    }
  }
  else {
    pcVar3 = "ios_base::badbit set";
  }
  uVar1 = FUN_18004d7f0(local_48,1);
  FUN_18004e280(local_38,pcVar3,uVar1);
                    /* WARNING: Subroutine does not return */
  FUN_1804ef5f0(local_38,&DAT_180915ec0);
}



/* ===== 18004e3a0 FUN_18004e3a0 ===== */

void FUN_18004e3a0(undefined8 *param_1)

{
  *param_1 = std::ios_base::vftable;
  FUN_1804eaa10();
  return;
}



/* ===== 18004e3c0 FUN_18004e3c0 ===== */

undefined8 * FUN_18004e3c0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = std::exception::vftable;
  FUN_1804ef0e0(param_1 + 1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1803d64e0(param_1,0x28);
  }
  return param_1;
}



/* ===== 18004e410 FUN_18004e410 ===== */

void FUN_18004e410(undefined8 *param_1)

{
  *param_1 = std::exception::vftable;
  FUN_1804ef0e0(param_1 + 1);
  return;
}



/* ===== 18004e440 FUN_18004e440 ===== */

undefined8 * FUN_18004e440(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_1804ef040(param_2 + 8);
  *param_1 = std::runtime_error::vftable;
  *param_1 = std::_System_error::vftable;
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  param_1[4] = uVar1;
  *param_1 = std::system_error::vftable;
  *param_1 = std::ios_base::failure::vftable;
  return param_1;
}



/* ===== 18004e4b0 std::ios_base::`scalar_deleting_destructor' ===== */

/* Library Function - Single Match
    public: virtual void * __ptr64 __cdecl std::ios_base::`scalar deleting destructor'(unsigned int)
   __ptr64
   
   Library: Visual Studio 2019 Release */

void * __thiscall std::ios_base::_scalar_deleting_destructor_(ios_base *this,uint param_1)

{
  *(undefined ***)this = vftable;
  FUN_1804eaa10();
  if ((param_1 & 1) != 0) {
    thunk_FUN_1803d64e0(this,0x48);
  }
  return this;
}



/* ===== 18004e4f0 FUN_18004e4f0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_18004e4f0(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  ulonglong uVar3;
  char *pcVar4;
  char *pcVar5;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined8 local_30;
  char local_16;
  undefined2 local_15;
  char local_13 [3];
  ulonglong local_10;
  
  local_10 = DAT_180919500 ^ (ulonglong)auStack_58;
  local_38 = 0;
  if (param_2 < 10) {
    local_15._1_1_ = (char)param_2 + '0';
    pcVar5 = (char *)((longlong)&local_15 + 1);
  }
  else {
    pcVar5 = local_13;
    do {
      pcVar4 = pcVar5;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = param_2;
      lVar2 = SUB168(ZEXT816(0x47ae147ae147ae15) * auVar1,8);
      uVar3 = (param_2 - lVar2 >> 1) + lVar2 >> 6;
      pcVar5 = pcVar4 + -2;
      *(undefined2 *)pcVar5 =
           *(undefined2 *)
            (
            "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
            + (param_2 + uVar3 * -100 & 0xffffffff) * 2);
      param_2 = uVar3;
    } while (9 < uVar3);
    if (uVar3 != 0) {
      pcVar5 = pcVar4 + -3;
      *pcVar5 = (char)uVar3 + '0';
    }
  }
  local_30 = param_1;
  FUN_180042c10(param_1,pcVar5,local_13);
  return param_1;
}



/* ===== 18004e5e0 FUN_18004e5e0 ===== */

undefined8 * FUN_18004e5e0(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  char *pcVar1;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = *param_3;
  uStack_14 = param_3[1];
  uStack_10 = param_3[2];
  uStack_c = param_3[3];
  FUN_18004d810(local_18,&local_18,param_2);
  *param_1 = std::system_error::vftable;
  *param_1 = std::filesystem::filesystem_error::vftable;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[8] = 7;
  *(undefined2 *)(param_1 + 5) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 7;
  *(undefined2 *)(param_1 + 9) = 0;
  pcVar1 = "Unknown exception";
  if ((char *)param_1[1] != (char *)0x0) {
    pcVar1 = (char *)param_1[1];
  }
  FUN_180013350(param_1 + 0xd,pcVar1);
  return param_1;
}



/* ===== 18004e680 FUN_18004e680 ===== */

longlong * FUN_18004e680(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(param_1 + 0x68);
  if (0xf < *(ulonglong *)(param_1 + 0x80)) {
    plVar1 = (longlong *)*plVar1;
  }
  return plVar1;
}



/* ===== 18004e6a0 FUN_18004e6a0 ===== */

undefined8 * FUN_18004e6a0(undefined8 *param_1,ulonglong param_2)

{
  FUN_18000f890(param_1 + 0xd);
  FUN_1800289e0(param_1 + 9);
  FUN_1800289e0(param_1 + 5);
  *param_1 = std::exception::vftable;
  FUN_1804ef0e0(param_1 + 1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1803d64e0(param_1,0x88);
  }
  return param_1;
}



/* ===== 18004e710 FUN_18004e710 ===== */

void FUN_18004e710(undefined8 *param_1)

{
  FUN_18000f890(param_1 + 0xd);
  FUN_1800289e0(param_1 + 9);
  FUN_1800289e0(param_1 + 5);
  *param_1 = std::exception::vftable;
  FUN_1804ef0e0(param_1 + 1);
  return;
}



/* ===== 18004e760 FUN_18004e760 ===== */

void FUN_18004e760(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined1 local_d8 [16];
  undefined1 local_c8 [32];
  undefined1 local_a8 [168];
  
  puVar3 = (undefined8 *)FUN_180013c90(local_d8,param_2,param_1);
  uVar1 = *puVar3;
  uVar2 = puVar3[1];
  FUN_180013350(local_c8,param_1);
  local_e8 = uVar1;
  uStack_e0 = uVar2;
  FUN_18004e5e0(local_a8,local_c8,&local_e8);
                    /* WARNING: Subroutine does not return */
  FUN_1804ef5f0(local_a8,&DAT_180915e80);
}



/* ===== 18004e7c0 FUN_18004e7c0 ===== */

undefined8 * FUN_18004e7c0(undefined8 *param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_1804ef040(param_2 + 8);
  *param_1 = std::runtime_error::vftable;
  *param_1 = std::_System_error::vftable;
  uVar1 = *(undefined4 *)(param_2 + 0x1c);
  uVar2 = *(undefined4 *)(param_2 + 0x20);
  uVar3 = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar1;
  *(undefined4 *)(param_1 + 4) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar3;
  *param_1 = std::system_error::vftable;
  *param_1 = std::filesystem::filesystem_error::vftable;
  FUN_1800150d0(param_1 + 5,param_2 + 0x28);
  FUN_1800150d0(param_1 + 9,param_2 + 0x48);
  FUN_180024b50(param_1 + 0xd,param_2 + 0x68);
  return param_1;
}



/* ===== 18004e860 FUN_18004e860 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_18004e860(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 auStack_318 [32];
  undefined4 local_2f8;
  undefined8 local_2f0;
  longlong *plStack_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 *local_2d0;
  undefined8 *local_2c8;
  undefined1 local_2b8 [32];
  undefined8 local_298;
  char local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStack_318;
  local_2f8 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  local_2d0 = param_1;
  FUN_180016260(local_2b8,param_2,0);
  if (local_40 != '\0') {
    puVar6 = (undefined8 *)FUN_1804ecaa0(0x58);
    *puVar6 = 0;
    puVar6[1] = 0;
    *(undefined4 *)(puVar6 + 1) = 1;
    *(undefined4 *)((longlong)puVar6 + 0xc) = 1;
    *puVar6 = std::_Ref_count_obj2<std::filesystem::_Dir_enum_impl>::vftable;
    local_2c8 = puVar6;
    FUN_180016430(puVar6 + 2,local_2b8);
    local_2f8 = 1;
    local_2e0 = 0;
    uStack_2d8 = 0;
    local_2f0 = *param_1;
    *param_1 = puVar6 + 2;
    plVar4 = (longlong *)param_1[1];
    param_1[1] = puVar6;
    plStack_2e8 = plVar4;
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
    local_2f8 = 0;
  }
  FUN_1804e56f0(local_298);
  FUN_1800289e0(local_2b8);
  *param_3 = local_3c;
  param_3[1] = local_2e0._4_4_;
  *(undefined ***)(param_3 + 2) = &PTR_vftable_18091a158;
  return param_1;
}



/* ===== 18004e9d0 FUN_18004e9d0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_18004e9d0(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  code *pcVar4;
  int iVar5;
  longlong *plVar6;
  undefined1 auStack_298 [32];
  longlong local_278;
  longlong *plStack_270;
  undefined1 local_268 [44];
  short local_23c;
  short local_23a;
  short local_238;
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_298;
  lVar3 = *param_1;
  do {
    iVar5 = FUN_1804e56d0(*(undefined8 *)(lVar3 + 0x40),local_268);
    if (iVar5 == 0x12) {
      local_278 = *param_1;
      *param_1 = 0;
      plVar6 = (longlong *)param_1[1];
      param_1[1] = 0;
      if (plVar6 == (longlong *)0x0) {
        return param_1;
      }
      LOCK();
      plVar1 = plVar6 + 1;
      lVar3 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar3 != 1) {
        return param_1;
      }
      plStack_270 = plVar6;
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6);
        return param_1;
      }
      return param_1;
    }
    if (iVar5 != 0) {
      FUN_18004e760("directory_iterator::operator++",iVar5);
      pcVar4 = (code *)swi(3);
      plVar6 = (longlong *)(*pcVar4)();
      return plVar6;
    }
  } while ((local_23c == 0x2e) && ((local_23a == 0 || ((local_23a == 0x2e && (local_238 == 0))))));
  FUN_1800162e0(lVar3,local_268);
  return param_1;
}



/* ===== 18004eae0 FUN_18004eae0 ===== */

undefined8 * FUN_18004eae0(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = 0;
  param_1[1] = 0;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  plVar4 = (longlong *)param_2[1];
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
  return param_1;
}



/* ===== 18004eb70 FUN_18004eb70 ===== */

void FUN_18004eb70(longlong param_1)

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



/* ===== 18004ebc0 FUN_18004ebc0 ===== */

undefined8 * FUN_18004ebc0(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  plVar4 = *(longlong **)(param_2 + 8);
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
  return param_1;
}



/* ===== 18004ec40 FUN_18004ec40 ===== */

undefined8 *
FUN_18004ec40(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  char *pcVar2;
  size_t sVar3;
  char *_Str;
  int iVar4;
  undefined4 uVar5;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  uVar5 = 1;
  iVar1 = FUN_18047ed40(param_2);
  FUN_18047eb70(param_2,0xffffd8ee,"tostring",param_4,uVar5);
  iVar4 = 1;
  if (0 < iVar1) {
    do {
      FUN_18047f610(param_2,0xffffffff);
      FUN_18047f610(param_2,iVar4);
      FUN_18047e730(param_2,1,1);
      pcVar2 = (char *)FUN_18047fc70(param_2,0xffffffff,0);
      if (1 < iVar4) {
        FUN_1800690a0(param_1,9);
      }
      _Str = "?";
      if (pcVar2 != (char *)0x0) {
        _Str = pcVar2;
      }
      sVar3 = strlen(_Str);
      FUN_1800134a0(param_1,_Str,sVar3);
      FUN_18047fb50(param_2,0xfffffffe);
      iVar4 = iVar4 + 1;
    } while (iVar4 <= iVar1);
  }
  FUN_18047fb50(param_2,0xfffffffe);
  return param_1;
}



/* ===== 18004ed60 FUN_18004ed60 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_18004ed60(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined1 local_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_58;
  uVar1 = FUN_18004ec40(local_38,param_1);
  FUN_18047eb70(param_1,0xffffd8f0,"wl_state");
  uVar2 = FUN_18047fd90(param_1,0xffffffff);
  FUN_18047fb50(param_1,0xfffffffe);
  FUN_180070170(uVar2,uVar1,0);
  FUN_18000f890(local_38);
  return 0;
}



/* ===== 18004ee00 FUN_18004ee00 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_18004ee00(undefined8 param_1)

{
  longlong lVar1;
  size_t _Size;
  undefined8 ***pppuVar2;
  ulonglong uVar3;
  char cVar4;
  int iVar5;
  char *_Str;
  longlong lVar6;
  size_t sVar7;
  undefined8 *_Buf1;
  undefined8 ***pppuVar8;
  undefined8 *puVar9;
  undefined8 ***pppuVar10;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined8 ***local_80;
  undefined8 uStack_78;
  size_t local_70;
  ulonglong local_68;
  undefined4 local_60;
  int local_5c;
  ulonglong local_58;
  
  local_58 = DAT_180919500 ^ (ulonglong)auStack_a8;
  _Str = (char *)FUN_18047e090(param_1,1,0);
  FUN_18047e240(param_1,2,6);
  FUN_18047eb70(param_1,0xffffd8f0,"wl_state");
  lVar6 = FUN_18047fd90(param_1,0xffffffff);
  FUN_18047fb50(param_1,0xfffffffe);
  FUN_18047f610(param_1,2);
  uStack_78 = 0;
  local_70 = 0;
  local_68 = 0xf;
  local_80 = (undefined8 ***)0x0;
  local_60 = 0xfffffffe;
  local_5c = 0;
  sVar7 = strlen(_Str);
  FUN_180029840(&local_80,_Str,sVar7);
  local_60 = FUN_1804851b0(param_1,0xffffd8f0);
  local_5c = *(int *)(lVar6 + 0x68);
  *(int *)(lVar6 + 0x68) = local_5c + 1;
  lVar1 = *(longlong *)(lVar6 + 0x58);
  if (lVar1 == *(longlong *)(lVar6 + 0x60)) {
    FUN_18006ade0(lVar6 + 0x50,lVar1,&local_80);
  }
  else {
    local_88 = lVar1;
    FUN_180024b50(lVar1,&local_80);
    *(undefined4 *)(lVar1 + 0x20) = local_60;
    *(int *)(lVar1 + 0x24) = local_5c;
    *(longlong *)(lVar6 + 0x58) = *(longlong *)(lVar6 + 0x58) + 0x28;
  }
  cVar4 = FUN_180070600(&local_80);
  uVar3 = local_68;
  sVar7 = local_70;
  pppuVar2 = local_80;
  if (cVar4 == '\0') {
    pppuVar10 = (undefined8 ***)&DAT_180962e00;
    puVar9 = (undefined8 *)&DAT_180962e00;
    do {
      pppuVar8 = &local_80;
      if (0xf < uVar3) {
        pppuVar8 = pppuVar2;
      }
      _Size = puVar9[2];
      if ((ulonglong)puVar9[3] < 0x10) {
        _Buf1 = puVar9;
      }
      else {
        _Buf1 = (undefined8 *)*puVar9;
      }
      if ((_Size == sVar7) && ((_Size == 0 || (iVar5 = memcmp(_Buf1,pppuVar8,_Size), iVar5 == 0))))
      goto LAB_18004efc2;
      puVar9 = puVar9 + 4;
    } while (puVar9 != &DAT_180963400);
    do {
      if (pppuVar10[2] == (undefined8 **)0x0) {
        if ((undefined8 ****)pppuVar10 != &local_80) {
          pppuVar8 = &local_80;
          if (0xf < uVar3) {
            pppuVar8 = pppuVar2;
          }
          FUN_180029840(pppuVar10,pppuVar8,sVar7);
        }
        break;
      }
      pppuVar10 = pppuVar10 + 4;
    } while (pppuVar10 != (undefined8 ***)&DAT_180963400);
  }
LAB_18004efc2:
  FUN_18047f3d0(param_1,(longlong)local_5c);
  FUN_18000f890(&local_80);
  return 1;
}



/* ===== 18004f000 FUN_18004f000 ===== */

void FUN_18004f000(void)

{
  FUN_18000f890();
  return;
}



/* ===== 18004f020 FUN_18004f020 ===== */

undefined8 FUN_18004f020(undefined8 param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  iVar2 = FUN_18047e010(param_1,1);
  FUN_18047eb70(param_1,0xffffd8f0,"wl_state");
  lVar3 = FUN_18047fd90(param_1,0xffffffff);
  FUN_18047fb50(param_1,0xfffffffe);
  lVar6 = *(longlong *)(lVar3 + 0x50);
  do {
    lVar5 = lVar6;
    if (lVar5 == *(longlong *)(lVar3 + 0x58)) {
      uVar4 = 0;
      goto LAB_18004f093;
    }
    lVar6 = lVar5 + 0x28;
  } while (*(int *)(lVar5 + 0x24) != iVar2);
  FUN_180485280(param_1,0xffffd8f0,*(undefined4 *)(lVar5 + 0x20));
  lVar1 = *(longlong *)(lVar3 + 0x58);
  for (; lVar6 != lVar1; lVar6 = lVar6 + 0x28) {
    FUN_18002ba60(lVar5,lVar6);
    *(undefined4 *)(lVar5 + 0x20) = *(undefined4 *)(lVar6 + 0x20);
    *(undefined4 *)(lVar5 + 0x24) = *(undefined4 *)(lVar6 + 0x24);
    lVar5 = lVar5 + 0x28;
  }
  FUN_18000f890();
  *(longlong *)(lVar3 + 0x58) = *(longlong *)(lVar3 + 0x58) + -0x28;
  uVar4 = 1;
LAB_18004f093:
  FUN_18047f270(param_1,uVar4);
  return 1;
}



/* ===== 18004f120 FUN_18004f120 ===== */

undefined8 FUN_18004f120(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_18047e2c0(param_1,1,"wl.event");
  FUN_18047f530(param_1,lVar1 + 8);
  return 1;
}



/* ===== 18004f160 FUN_18004f160 ===== */

undefined8 FUN_18004f160(undefined8 param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  float fVar4;
  
  plVar2 = (longlong *)FUN_18047e2c0(param_1,1,"wl.event");
  if ((*plVar2 == 0) || (*plVar2 != DAT_180ccfa88)) {
    FUN_180484c10(param_1,"a game event is only valid inside its callback");
  }
  lVar1 = *plVar2;
  uVar3 = FUN_18047e090(param_1,2,0);
  fVar4 = (float)FUN_180273cc0(lVar1,uVar3);
  FUN_18047f3d0(param_1,(longlong)fVar4);
  return 1;
}



/* ===== 18004f1e0 FUN_18004f1e0 ===== */

undefined8 FUN_18004f1e0(undefined8 param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  float fVar4;
  
  plVar2 = (longlong *)FUN_18047e2c0(param_1,1,"wl.event");
  if ((*plVar2 == 0) || (*plVar2 != DAT_180ccfa88)) {
    FUN_180484c10(param_1,"a game event is only valid inside its callback");
  }
  lVar1 = *plVar2;
  uVar3 = FUN_18047e090(param_1,2,0);
  fVar4 = (float)FUN_180273cc0(lVar1,uVar3);
  FUN_18047f4f0(param_1,(double)fVar4);
  return 1;
}



/* ===== 18004f260 FUN_18004f260 ===== */

undefined8 FUN_18004f260(undefined8 param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  float fVar4;
  
  plVar2 = (longlong *)FUN_18047e2c0(param_1,1,"wl.event");
  if ((*plVar2 == 0) || (*plVar2 != DAT_180ccfa88)) {
    FUN_180484c10(param_1,"a game event is only valid inside its callback");
  }
  lVar1 = *plVar2;
  uVar3 = FUN_18047e090(param_1,2,0);
  fVar4 = (float)FUN_180273cc0(lVar1,uVar3);
  FUN_18047f270(param_1,fVar4 != 0.0);
  return 1;
}



/* ===== 18004f2f0 FUN_18004f2f0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_18004f2f0(undefined8 param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 ***pppuVar4;
  undefined1 auStack_58 [32];
  undefined8 ***local_38 [2];
  undefined8 local_28;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_58;
  plVar2 = (longlong *)FUN_18047e2c0(param_1,1,"wl.event");
  if ((*plVar2 == 0) || (*plVar2 != DAT_180ccfa88)) {
    FUN_180484c10(param_1,"a game event is only valid inside its callback");
  }
  lVar1 = *plVar2;
  uVar3 = FUN_18047e090(param_1,2,0);
  FUN_180273d10(local_38,lVar1,uVar3);
  pppuVar4 = local_38;
  if (0xf < local_20) {
    pppuVar4 = local_38[0];
  }
  FUN_18047f450(param_1,pppuVar4,local_28);
  FUN_18000f890(local_38);
  return 1;
}



/* ===== 18004f3b0 FUN_18004f3b0 ===== */

undefined8 FUN_18004f3b0(undefined8 param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  plVar1 = (longlong *)FUN_18047e2c0(param_1,1,"wl.event");
  if ((*plVar1 == 0) || (*plVar1 != DAT_180ccfa88)) {
    FUN_180484c10(param_1,"a game event is only valid inside its callback");
  }
  lVar3 = *plVar1;
  uVar2 = FUN_18047e090(param_1,2,0);
  lVar3 = FUN_180273f90(lVar3,uVar2);
  if (lVar3 == 0) {
    FUN_18047f4d0();
    return 1;
  }
  plVar1 = (longlong *)FUN_18047efb0(param_1,8);
  *plVar1 = lVar3;
  FUN_18047eb70(param_1,0xffffd8f0,"wl.entity");
  FUN_18047f990(param_1,0xfffffffe);
  return 1;
}



/* ===== 18004f470 FUN_18004f470 ===== */

undefined8 FUN_18004f470(undefined8 param_1)

{
  undefined4 uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 local_res10 [24];
  
  plVar2 = (longlong *)FUN_18047e2c0(param_1,1,"wl.event");
  if ((*plVar2 == 0) || (*plVar2 != DAT_180ccfa88)) {
    FUN_180484c10(param_1,"a game event is only valid inside its callback");
  }
  lVar4 = *plVar2;
  uVar3 = FUN_18047e090(param_1,2,0);
  lVar4 = FUN_180273f90(lVar4,uVar3);
  if (lVar4 != 0) {
    if (DAT_180ca09fc == 0) {
      lVar4 = 0;
    }
    else {
      uVar1 = FUN_180011200(lVar4 + (ulonglong)DAT_180ca09fc);
      plVar2 = (longlong *)FUN_1803a0940(local_res10,uVar1);
      lVar4 = *plVar2;
    }
    if (lVar4 != 0) {
      plVar2 = (longlong *)FUN_18047efb0(param_1,8);
      *plVar2 = lVar4;
      FUN_18047eb70(param_1,0xffffd8f0,"wl.entity");
      FUN_18047f990(param_1,0xfffffffe);
      return 1;
    }
  }
  FUN_18047f4d0(param_1);
  return 1;
}



/* ===== 18004f560 FUN_18004f560 ===== */

undefined8 FUN_18004f560(undefined8 param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FUN_18047e2c0(param_1,1,"wl.entity");
  lVar1 = *plVar2;
  plVar2 = (longlong *)FUN_18047e2c0(param_1,2,"wl.entity");
  FUN_18047f270(param_1,lVar1 == *plVar2);
  return 1;
}



/* ===== 18004f5c0 FUN_18004f5c0 ===== */

undefined8 FUN_18004f5c0(undefined8 param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  
  plVar2 = (longlong *)FUN_18047e2c0(param_1,1,"wl.entity");
  lVar1 = *plVar2;
  if ((((lVar1 == 0) || (lVar3 = FUN_18000f3a0((ulonglong)DAT_180961968 + lVar1), lVar3 == 0)) ||
      (lVar3 = FUN_18000f3a0((ulonglong)DAT_18096196c + lVar3), lVar3 == 0)) ||
     (lVar3 = FUN_18000f3a0((ulonglong)DAT_180961970 + lVar3), lVar3 == 0)) {
    puVar4 = (undefined2 *)0x0;
  }
  else {
    puVar4 = (undefined2 *)FUN_18000f3a0((ulonglong)DAT_180961974 + lVar3);
    if ((undefined2 *)0x7ffffffefffe < puVar4 + -0x8000) {
      puVar4 = (undefined2 *)0x0;
    }
  }
  puVar5 = &DAT_1806dfbb4;
  if (puVar4 != (undefined2 *)0x0) {
    puVar5 = puVar4;
  }
  FUN_18047f380(param_1,"entity(%s: %p)",puVar5,lVar1);
  return 1;
}



/* ===== 18004f680 FUN_18004f680 ===== */

undefined8 FUN_18004f680(undefined8 param_1)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  
  puVar2 = (ulonglong *)FUN_18047e2c0(param_1,1,"wl.entity");
  uVar1 = *puVar2;
  if ((longlong)uVar1 < 0) {
    FUN_18047f4f0(param_1,(double)uVar1);
    return 1;
  }
  FUN_18047f4f0(param_1,(double)(longlong)uVar1);
  return 1;
}



/* ===== 18004f6f0 FUN_18004f6f0 ===== */

undefined8 FUN_18004f6f0(undefined8 param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  
  plVar1 = (longlong *)FUN_18047e2c0(param_1,1);
  if ((((*plVar1 == 0) || (lVar2 = FUN_18000f3a0((ulonglong)DAT_180961968 + *plVar1), lVar2 == 0))
      || (lVar2 = FUN_18000f3a0((ulonglong)DAT_18096196c + lVar2), lVar2 == 0)) ||
     (lVar2 = FUN_18000f3a0((ulonglong)DAT_180961970 + lVar2), lVar2 == 0)) {
    puVar3 = (undefined1 *)0x0;
  }
  else {
    puVar3 = (undefined1 *)FUN_18000f3a0((ulonglong)DAT_180961974 + lVar2);
    if ((undefined1 *)0x7ffffffefffe < puVar3 + -0x10000) {
      puVar3 = (undefined1 *)0x0;
    }
  }
  puVar4 = &DAT_18058b643;
  if (puVar3 != (undefined1 *)0x0) {
    puVar4 = puVar3;
  }
  FUN_18047f530(param_1,puVar4);
  return 1;
}



/* ===== 18004f7a0 FUN_18004f7a0 ===== */

undefined8 FUN_18004f7a0(undefined8 param_1)

{
  int iVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FUN_18047e2c0(param_1,1,"wl.entity");
  if ((*plVar2 == 0) || (DAT_180ca09f0 == 0)) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_180011200(*plVar2 + (ulonglong)DAT_180ca09f0);
  }
  FUN_18047f3d0(param_1,(longlong)iVar1);
  return 1;
}



/* ===== 18004f7f0 FUN_18004f7f0 ===== */

undefined8 FUN_18004f7f0(undefined8 param_1)

{
  int iVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FUN_18047e2c0(param_1,1,"wl.entity");
  if ((*plVar2 == 0) || (DAT_180ca0a14 == 0)) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_180011200(*plVar2 + (ulonglong)DAT_180ca0a14);
  }
  FUN_18047f3d0(param_1,(longlong)iVar1);
  return 1;
}



/* ===== 18004f840 FUN_18004f840 ===== */

undefined8 FUN_18004f840(undefined8 param_1)

{
  undefined1 uVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FUN_18047e2c0(param_1,1,"wl.entity");
  if ((*plVar2 == 0) || (DAT_180ca09f4 == 0)) {
    FUN_18047f3d0(param_1,0);
    return 1;
  }
  uVar1 = FUN_180011220(*plVar2 + (ulonglong)DAT_180ca09f4);
  FUN_18047f3d0(param_1,uVar1);
  return 1;
}



/* ===== 18004f8a0 FUN_18004f8a0 ===== */

undefined8 FUN_18004f8a0(undefined8 param_1)

{
  int iVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FUN_18047e2c0(param_1,1,"wl.entity");
  if ((*plVar2 != 0) && (DAT_180ca09f0 != 0)) {
    iVar1 = FUN_180011200(*plVar2 + (ulonglong)DAT_180ca09f0);
    if (iVar1 - 1U < 1000) {
      FUN_18047f270(param_1,1);
      return 1;
    }
  }
  FUN_18047f270(param_1,0);
  return 1;
}



/* ===== 18004f910 FUN_18004f910 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_18004f910(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 ***pppuVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 ***local_30 [2];
  undefined8 local_20;
  ulonglong local_18;
  ulonglong local_10;
  
  local_10 = DAT_180919500 ^ (ulonglong)auStack_58;
  puVar1 = (undefined8 *)FUN_18047e2c0(param_1,1,"wl.entity");
  local_38 = *puVar1;
  FUN_1803a0620(&local_38,local_30);
  pppuVar2 = local_30;
  if (0xf < local_18) {
    pppuVar2 = local_30[0];
  }
  FUN_18047f450(param_1,pppuVar2,local_20);
  FUN_18000f890(local_30);
  return 1;
}



/* ===== 18004f9a0 FUN_18004f9a0 ===== */

undefined8 FUN_18004f9a0(undefined8 param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 local_48 [64];
  
  plVar2 = (longlong *)FUN_18047e2c0(param_1,1,"wl.entity");
  if ((*plVar2 != 0) && (DAT_180ca09f8 != 0)) {
    lVar3 = FUN_18000f3a0(*plVar2 + (ulonglong)DAT_180ca09f8);
    if ((lVar3 != 0) && (DAT_180ca0950 != 0)) {
      pfVar4 = (float *)FUN_1800111b0(local_48,lVar3 + (ulonglong)DAT_180ca0950);
      fVar5 = *pfVar4;
      fVar6 = pfVar4[1];
      fVar7 = pfVar4[2];
      goto LAB_18004fa21;
    }
  }
  fVar5 = 0.0;
  fVar6 = 0.0;
  fVar7 = 0.0;
LAB_18004fa21:
  FUN_18047eb70(param_1,0xffffd8f0,"wl_state");
  lVar3 = FUN_18047fd90(param_1,0xffffffff);
  FUN_18047fb50(param_1,0xfffffffe);
  uVar1 = *(undefined8 *)(lVar3 + 0x40);
  FUN_18047f6f0(uVar1,0xffffd8f0,*(undefined4 *)(lVar3 + 0x140));
  FUN_18047f4f0(uVar1,(double)fVar5);
  FUN_18047f4f0(uVar1,(double)fVar6);
  FUN_18047f4f0(uVar1,(double)fVar7);
  FUN_18047e730(uVar1,3,1);
  return 1;
}



/* ===== 18004fac0 FUN_18004fac0 ===== */

undefined8 FUN_18004fac0(undefined8 param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  float *pfVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 local_48 [64];
  
  plVar2 = (longlong *)FUN_18047e2c0(param_1,1,"wl.entity");
  if ((*plVar2 == 0) || (DAT_180ca0a1c == 0)) {
    fVar5 = 0.0;
    fVar6 = 0.0;
    fVar7 = 0.0;
  }
  else {
    pfVar3 = (float *)FUN_1800111b0(local_48,*plVar2 + (ulonglong)DAT_180ca0a1c);
    fVar5 = *pfVar3;
    fVar6 = pfVar3[1];
    fVar7 = pfVar3[2];
  }
  FUN_18047eb70(param_1,0xffffd8f0,"wl_state");
  lVar4 = FUN_18047fd90(param_1,0xffffffff);
  FUN_18047fb50(param_1,0xfffffffe);
  uVar1 = *(undefined8 *)(lVar4 + 0x40);
  FUN_18047f6f0(uVar1,0xffffd8f0,*(undefined4 *)(lVar4 + 0x140));
  FUN_18047f4f0(uVar1,(double)fVar5);
  FUN_18047f4f0(uVar1,(double)fVar6);
  FUN_18047f4f0(uVar1,(double)fVar7);
  FUN_18047e730(uVar1,3,1);
  return 1;
}



/* ===== 18004fbd0 FUN_18004fbd0 ===== */

undefined8 FUN_18004fbd0(undefined8 param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 local_58 [80];
  
  plVar2 = (longlong *)FUN_18047e2c0(param_1,1,"wl.entity");
  if ((*plVar2 != 0) && (DAT_180ca09f8 != 0)) {
    lVar3 = FUN_18000f3a0(*plVar2 + (ulonglong)DAT_180ca09f8);
    if ((lVar3 != 0) && (DAT_180ca0950 != 0)) {
      pfVar4 = (float *)FUN_1800111b0(local_58,lVar3 + (ulonglong)DAT_180ca0950);
      fVar5 = *pfVar4;
      fVar6 = pfVar4[1];
      fVar7 = pfVar4[2];
      goto LAB_18004fc5c;
    }
  }
  fVar5 = 0.0;
  fVar6 = 0.0;
  fVar7 = 0.0;
LAB_18004fc5c:
  FUN_18047eb70(param_1,0xffffd8f0,"wl_state");
  lVar3 = FUN_18047fd90(param_1,0xffffffff);
  FUN_18047fb50(param_1,0xfffffffe);
  uVar1 = *(undefined8 *)(lVar3 + 0x40);
  FUN_18047f6f0(uVar1,0xffffd8f0,*(undefined4 *)(lVar3 + 0x140));
  FUN_18047f4f0(uVar1,(double)(fVar5 + 0.0));
  FUN_18047f4f0(uVar1,(double)(fVar6 + 0.0));
  FUN_18047f4f0(uVar1,(double)(fVar7 + DAT_1808acab0));
  FUN_18047e730(uVar1,3,1);
  return 1;
}



/* ===== 18004fd20 FUN_18004fd20 ===== */

undefined8 FUN_18004fd20(undefined8 param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  float *pfVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 local_48 [64];
  
  plVar2 = (longlong *)FUN_18047e2c0(param_1,1,"wl.entity");
  if ((*plVar2 == 0) || (DAT_180ca0a20 == 0)) {
    fVar5 = 0.0;
    fVar6 = 0.0;
    fVar7 = 0.0;
  }
  else {
    pfVar3 = (float *)FUN_1800111b0(local_48,*plVar2 + (ulonglong)DAT_180ca0a20);
    fVar5 = *pfVar3;
    fVar6 = pfVar3[1];
    fVar7 = pfVar3[2];
  }
  FUN_18047eb70(param_1,0xffffd8f0,"wl_state");
  lVar4 = FUN_18047fd90(param_1,0xffffffff);
  FUN_18047fb50(param_1,0xfffffffe);
  uVar1 = *(undefined8 *)(lVar4 + 0x40);
  FUN_18047f6f0(uVar1,0xffffd8f0,*(undefined4 *)(lVar4 + 0x140));
  FUN_18047f4f0(uVar1,(double)fVar5);
  FUN_18047f4f0(uVar1,(double)fVar6);
  FUN_18047f4f0(uVar1,(double)fVar7);
  FUN_18047e730(uVar1,3,1);
  return 1;
}



/* ===== 18004fe30 FUN_18004fe30 ===== */

undefined8 FUN_18004fe30(undefined8 param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  float *pfVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 local_48 [64];
  
  plVar2 = (longlong *)FUN_18047e2c0(param_1,1,"wl.entity");
  if ((*plVar2 == 0) || (DAT_180ca0a30 == 0)) {
    fVar5 = 0.0;
    fVar6 = 0.0;
    fVar7 = 0.0;
  }
  else {
    pfVar3 = (float *)FUN_1800111b0(local_48,*plVar2 + (ulonglong)DAT_180ca0a30);
    fVar5 = *pfVar3;
    fVar6 = pfVar3[1];
    fVar7 = pfVar3[2];
  }
  FUN_18047eb70(param_1,0xffffd8f0,"wl_state");
  lVar4 = FUN_18047fd90(param_1,0xffffffff);
  FUN_18047fb50(param_1,0xfffffffe);
  uVar1 = *(undefined8 *)(lVar4 + 0x40);
  FUN_18047f6f0(uVar1,0xffffd8f0,*(undefined4 *)(lVar4 + 0x140));
  FUN_18047f4f0(uVar1,(double)fVar5);
  FUN_18047f4f0(uVar1,(double)fVar6);
  FUN_18047f4f0(uVar1,(double)fVar7);
  FUN_18047e730(uVar1,3,1);
  return 1;
}



/* ===== 18004ff40 FUN_18004ff40 ===== */

undefined8 FUN_18004ff40(undefined8 param_1)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 local_res10 [3];
  undefined8 local_18;
  float local_10;
  
  local_18 = 0;
  local_10 = 0.0;
  puVar2 = (undefined8 *)FUN_18047e2c0(param_1,1,"wl.entity");
  local_res10[0] = *puVar2;
  uVar3 = FUN_18047e010(param_1,2);
  cVar1 = FUN_1803a07f0(local_res10,uVar3,&local_18);
  if (cVar1 == '\0') {
    return 0;
  }
  FUN_18047eb70(param_1,0xffffd8f0,"wl_state");
  lVar4 = FUN_18047fd90(param_1,0xffffffff);
  FUN_18047fb50(param_1,0xfffffffe);
  uVar3 = *(undefined8 *)(lVar4 + 0x40);
  FUN_18047f6f0(uVar3,0xffffd8f0,*(undefined4 *)(lVar4 + 0x140));
  FUN_18047f4f0(uVar3,(double)(float)local_18);
  FUN_18047f4f0(uVar3,(double)local_18._4_4_);
  FUN_18047f4f0(uVar3,(double)local_10);
  FUN_18047e730(uVar3,3,1);
  return 1;
}



/* ===== 180050050 FUN_180050050 ===== */

undefined8 FUN_180050050(undefined8 param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined1 local_res10 [24];
  
  plVar3 = (longlong *)FUN_18047e2c0(param_1,1,"wl.entity");
  if ((*plVar3 != 0) && (DAT_180ca09fc != 0)) {
    uVar2 = FUN_180011200(*plVar3 + (ulonglong)DAT_180ca09fc);
    plVar3 = (longlong *)FUN_1803a0940(local_res10,uVar2);
    lVar1 = *plVar3;
    if (lVar1 != 0) {
      plVar3 = (longlong *)FUN_18047efb0(param_1,8);
      *plVar3 = lVar1;
      FUN_18047eb70(param_1,0xffffd8f0,"wl.entity");
      FUN_18047f990(param_1,0xfffffffe);
      return 1;
    }
  }
  FUN_18047f4d0(param_1);
  return 1;
}



/* ===== 180050100 FUN_180050100 ===== */

undefined8 FUN_180050100(undefined8 param_1)

{
  undefined4 uVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 local_res10 [24];
  
  plVar2 = (longlong *)FUN_18047e2c0(param_1,1,"wl.entity");
  if (((*plVar2 != 0) && (DAT_180ca0a0c != 0)) &&
     (uVar4 = (ulonglong)DAT_180ca0a10, DAT_180ca0a10 != 0)) {
    lVar3 = FUN_18000f3a0(*plVar2 + (ulonglong)DAT_180ca0a0c);
    if (lVar3 != 0) {
      uVar1 = FUN_180011200(lVar3 + uVar4);
      plVar2 = (longlong *)FUN_1803a0940(local_res10,uVar1);
      lVar3 = *plVar2;
      if (lVar3 != 0) {
        plVar2 = (longlong *)FUN_18047efb0(param_1,8);
        *plVar2 = lVar3;
        FUN_18047eb70(param_1,0xffffd8f0,"wl.entity");
        FUN_18047f990(param_1,0xfffffffe);
        return 1;
      }
    }
  }
  FUN_18047f4d0(param_1);
  return 1;
}



/* ===== 1800501d0 FUN_1800501d0 ===== */

undefined8 FUN_1800501d0(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  undefined8 local_res10;
  
  if (DAT_180cd1304 == '\0') {
    FUN_1803a0b60(&local_res10);
    DAT_181108a00 = local_res10;
    DAT_1811089f8 = FUN_1803a0c50(&local_res10);
    DAT_180cd1304 = '\x01';
  }
  lVar2 = DAT_1811089f8;
  if (DAT_1811089f8 != 0) {
    plVar6 = (longlong *)FUN_18047e2c0(param_1,1,"wl.entity");
    lVar1 = *plVar6;
    if ((((lVar1 != 0) && (DAT_180ca09f0 != 0)) &&
        (iVar5 = FUN_180011200(lVar1 + (ulonglong)DAT_180ca09f0), iVar5 - 1U < 1000)) &&
       (lVar1 != lVar2)) {
      uVar8 = (ulonglong)DAT_180ca09f4;
      if (DAT_180ca09f4 == 0) {
        cVar3 = '\0';
        cVar4 = '\0';
      }
      else {
        cVar3 = FUN_180011220(lVar1 + uVar8);
        cVar4 = FUN_180011220(lVar2 + uVar8);
      }
      if (cVar3 != cVar4) {
        uVar7 = 1;
        goto LAB_1800502b0;
      }
    }
  }
  uVar7 = 0;
LAB_1800502b0:
  FUN_18047f270(param_1,uVar7);
  return 1;
}



/* ===== 1800502d0 FUN_1800502d0 ===== */

undefined8 FUN_1800502d0(undefined8 param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong local_res10 [3];
  
  plVar2 = (longlong *)FUN_18047e2c0(param_1,1,"wl.entity");
  lVar1 = *plVar2;
  if (DAT_180cd1304 == '\0') {
    FUN_1803a0b60(local_res10);
    DAT_181108a00 = local_res10[0];
    DAT_1811089f8 = FUN_1803a0c50(local_res10);
    DAT_180cd1304 = '\x01';
  }
  if (lVar1 != DAT_1811089f8) {
    if (DAT_180cd1304 == '\0') {
      FUN_1803a0b60(local_res10);
    }
    else {
      local_res10[0] = DAT_181108a00;
    }
    if (lVar1 != local_res10[0]) {
      uVar3 = 0;
      goto LAB_180050363;
    }
  }
  uVar3 = 1;
LAB_180050363:
  FUN_18047f270(param_1,uVar3);
  return 1;
}



/* ===== 180050380 FUN_180050380 ===== */

ulonglong FUN_180050380(undefined8 param_1)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  iVar1 = FUN_18047edb0(param_1,2);
  if (iVar1 != 0) {
    uVar3 = FUN_18047fc10();
    return uVar3;
  }
  uVar4 = FUN_18047e090(param_1,2,0);
  uVar5 = FUN_18047e090(param_1,3,0);
  uVar2 = FUN_18038eaf0(uVar4,uVar5);
  if (uVar2 == 0) {
    FUN_180484c10(param_1,"schema: no field %s::%s",uVar4,uVar5);
  }
  return (ulonglong)uVar2;
}



/* ===== 180050420 FUN_180050420 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180050420(undefined8 param_1,longlong param_2,longlong param_3)

{
  float fVar1;
  float fVar2;
  undefined1 uVar3;
  char cVar4;
  short sVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  float *pfVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  float fVar14;
  undefined8 uVar15;
  undefined1 auStack_188 [32];
  undefined1 local_168 [16];
  char local_158 [256];
  ulonglong local_58;
  
  local_58 = DAT_180919500 ^ (ulonglong)auStack_188;
  lVar11 = 0;
  while (lVar13 = lVar11 + 1, *(char *)(param_2 + lVar11) == (&DAT_1806dfc10)[lVar11]) {
    lVar11 = lVar13;
    if (lVar13 == 4) {
      iVar6 = FUN_180011200(param_3);
      FUN_18047f3d0(param_1,(longlong)iVar6);
      return;
    }
  }
  lVar11 = 0;
  while (lVar13 = lVar11 + 1, *(char *)(param_2 + lVar11) == (&DAT_1806dfc14)[lVar11]) {
    lVar11 = lVar13;
    if (lVar13 == 5) {
      uVar7 = FUN_180011200(param_3);
      uVar9 = (ulonglong)uVar7;
LAB_18005055c:
      FUN_18047f4f0(param_1,(double)(longlong)uVar9);
      return;
    }
  }
  lVar11 = 0;
  while (lVar13 = lVar11 + 1, *(char *)(param_2 + lVar11) == "short"[lVar11]) {
    lVar11 = lVar13;
    if (lVar13 == 6) {
      sVar5 = FUN_180011440(param_3);
      FUN_18047f3d0(param_1,(longlong)sVar5);
      return;
    }
  }
  lVar11 = 0;
  while (lVar13 = lVar11 + 1, *(char *)(param_2 + lVar11) == (&DAT_1806dfc24)[lVar11]) {
    lVar11 = lVar13;
    if (lVar13 == 5) {
      uVar3 = FUN_180011220(param_3);
      FUN_18047f3d0(param_1,uVar3);
      return;
    }
  }
  lVar11 = 0;
  while (lVar13 = lVar11 + 1, *(char *)(param_2 + lVar11) == (&DAT_1806dfc2c)[lVar11]) {
    lVar11 = lVar13;
    if (lVar13 == 6) {
      uVar9 = FUN_18000f3a0(param_3);
      goto LAB_18005055c;
    }
  }
  lVar11 = 0;
  while (lVar13 = lVar11 + 1, *(char *)(param_2 + lVar11) == "float"[lVar11]) {
    lVar11 = lVar13;
    if (lVar13 == 6) {
      fVar14 = (float)FUN_18000f3d0(param_3);
      FUN_18047f4f0(param_1,(double)fVar14);
      return;
    }
  }
  lVar11 = 0;
  while (lVar13 = lVar11 + 1, *(char *)(param_2 + lVar11) == "double"[lVar11]) {
    lVar11 = lVar13;
    if (lVar13 == 7) {
      uVar15 = FUN_180066860(param_3);
      FUN_18047f4f0(param_1,uVar15);
      return;
    }
  }
  lVar11 = 0;
  while (lVar13 = lVar11 + 1, *(char *)(param_2 + lVar11) == (&DAT_1806dfc44)[lVar11]) {
    lVar11 = lVar13;
    if (lVar13 == 5) {
      uVar3 = FUN_180011220(param_3);
      FUN_18047f270(param_1,uVar3);
      return;
    }
  }
  lVar11 = 0;
  while (lVar13 = lVar11 + 1, *(char *)(param_2 + lVar11) == (&DAT_1806dfc4c)[lVar11]) {
    lVar11 = lVar13;
    if (lVar13 == 4) {
      uVar9 = FUN_18000f3a0(param_3);
      if ((longlong)uVar9 < 0) {
        FUN_18047f4f0(param_1,(double)uVar9);
        return;
      }
      FUN_18047f4f0(param_1,(double)(longlong)uVar9);
      return;
    }
  }
  lVar11 = 0;
  while (lVar13 = lVar11 + 1, *(char *)(param_2 + lVar11) == "vector"[lVar11]) {
    lVar11 = lVar13;
    if (lVar13 == 7) {
      pfVar10 = (float *)FUN_1800111b0(local_168,param_3);
      fVar14 = *pfVar10;
      fVar1 = pfVar10[1];
      fVar2 = pfVar10[2];
      FUN_18047eb70(param_1,0xffffd8f0,"wl_state");
      lVar11 = FUN_18047fd90(param_1,0xffffffff);
      FUN_18047fb50(param_1,0xfffffffe);
      uVar15 = *(undefined8 *)(lVar11 + 0x40);
      FUN_18047f6f0(uVar15,0xffffd8f0,*(undefined4 *)(lVar11 + 0x140));
      FUN_18047f4f0(uVar15,(double)fVar14);
      FUN_18047f4f0(uVar15,(double)fVar1);
      FUN_18047f4f0(uVar15,(double)fVar2);
      FUN_18047e730(uVar15,3,1);
      return;
    }
  }
  lVar11 = 0;
  while (lVar13 = lVar11 + 1, *(char *)(param_2 + lVar11) == "handle"[lVar11]) {
    lVar11 = lVar13;
    if (lVar13 == 7) {
      uVar8 = FUN_180011200(param_3);
      plVar12 = (longlong *)FUN_1803a0940(local_168,uVar8);
      lVar11 = *plVar12;
      if (lVar11 == 0) {
        FUN_18047f4d0();
        return;
      }
      plVar12 = (longlong *)FUN_18047efb0(param_1,8);
      *plVar12 = lVar11;
      FUN_18047eb70(param_1,0xffffd8f0,"wl.entity");
      FUN_18047f990(param_1,0xfffffffe);
      return;
    }
  }
  lVar11 = 0;
  do {
    lVar13 = lVar11 + 1;
    if (*(char *)(param_2 + lVar11) != "string"[lVar11]) {
      FUN_180484c10(param_1,
                    "unknown type \'%s\' (int uint short byte int64 float double bool ptr vector handle string)"
                    ,param_2);
      return;
    }
    lVar11 = lVar13;
  } while (lVar13 != 7);
  FUN_180540170(local_158,0,0x100);
  lVar11 = 0;
  do {
    cVar4 = FUN_180011220(param_3 + lVar11);
    local_158[lVar11] = cVar4;
    if (cVar4 == '\0') break;
    uVar9 = lVar11 + 2;
    lVar11 = lVar11 + 1;
  } while (uVar9 < 0x100);
  FUN_18047f530(param_1,local_158);
  return;
}



/* ===== 1800508c0 FUN_1800508c0 ===== */

void FUN_1800508c0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  double dVar8;
  longlong local_28;
  undefined4 local_20;
  undefined1 local_18 [16];
  
  lVar6 = 0;
  do {
    lVar7 = lVar6 + 1;
    if (*(char *)(param_2 + lVar6) != (&DAT_1806dfc10)[lVar6]) {
      lVar6 = 0;
      do {
        lVar7 = lVar6 + 1;
        if (*(char *)(param_2 + lVar6) != (&DAT_1806dfc14)[lVar6]) {
          lVar6 = 0;
          do {
            lVar7 = lVar6 + 1;
            if (*(char *)(param_2 + lVar6) != "short"[lVar6]) {
              lVar6 = 0;
              do {
                lVar7 = lVar6 + 1;
                if (*(char *)(param_2 + lVar6) != (&DAT_1806dfc24)[lVar6]) {
                  lVar6 = 0;
                  do {
                    lVar7 = lVar6 + 1;
                    if (*(char *)(param_2 + lVar6) != (&DAT_1806dfc2c)[lVar6]) {
                      lVar6 = 0;
                      do {
                        lVar7 = lVar6 + 1;
                        if (*(char *)(param_2 + lVar6) != "float"[lVar6]) {
                          lVar6 = 0;
                          do {
                            lVar7 = lVar6 + 1;
                            if (*(char *)(param_2 + lVar6) != "double"[lVar6]) {
                              lVar6 = 0;
                              do {
                                lVar7 = lVar6 + 1;
                                if (*(char *)(param_2 + lVar6) != (&DAT_1806dfc44)[lVar6]) {
                                  lVar6 = 0;
                                  do {
                                    lVar7 = lVar6 + 1;
                                    if (*(char *)(param_2 + lVar6) != (&DAT_1806dfc4c)[lVar6]) {
                                      lVar6 = 0;
                                      do {
                                        lVar7 = lVar6 + 1;
                                        if (*(char *)(param_2 + lVar6) != "vector"[lVar6]) {
                                          FUN_180484c10(param_1,"unknown type \'%s\' for writing",
                                                        param_2);
                                          return;
                                        }
                                        lVar6 = lVar7;
                                      } while (lVar7 != 7);
                                      plVar5 = (longlong *)FUN_180063d70(local_18,param_1,param_4);
                                      local_28 = *plVar5;
                                      local_20 = (undefined4)plVar5[1];
                                      FUN_180023a50(param_3,&local_28);
                                      return;
                                    }
                                    lVar6 = lVar7;
                                  } while (lVar7 != 4);
                                  dVar8 = (double)FUN_18047e140(param_1,param_4);
                                  local_28 = 0;
                                  if ((DAT_1808acbe8 <= dVar8) &&
                                     (dVar8 = dVar8 - DAT_1808acbe8, dVar8 < DAT_1808acbe8)) {
                                    local_28 = -0x8000000000000000;
                                  }
                                  local_28 = (longlong)dVar8 + local_28;
                                  FUN_1800239d0(param_3,&local_28);
                                  return;
                                }
                                lVar6 = lVar7;
                              } while (lVar7 != 5);
                              iVar4 = FUN_18047fbf0(param_1,param_4);
                              local_28 = CONCAT71(local_28._1_7_,iVar4 != 0);
                              FUN_1800233d0(param_3,&local_28);
                              return;
                            }
                            lVar6 = lVar7;
                          } while (lVar7 != 7);
                          local_28 = FUN_18047e140(param_1,param_4);
                          FUN_1800239d0(param_3,&local_28);
                          return;
                        }
                        lVar6 = lVar7;
                      } while (lVar7 != 6);
                      dVar8 = (double)FUN_18047e140(param_1,param_4);
                      local_28 = CONCAT44(local_28._4_4_,(float)dVar8);
                      FUN_180013280(param_3,&local_28);
                      return;
                    }
                    lVar6 = lVar7;
                  } while (lVar7 != 6);
                  dVar8 = (double)FUN_18047e140(param_1,param_4);
                  local_28 = (longlong)dVar8;
                  FUN_1800239d0(param_3,&local_28);
                  return;
                }
                lVar6 = lVar7;
              } while (lVar7 != 5);
              uVar1 = FUN_18047e010(param_1,param_4);
              local_28 = CONCAT71(local_28._1_7_,uVar1);
              FUN_1800233d0(param_3,&local_28);
              return;
            }
            lVar6 = lVar7;
          } while (lVar7 != 6);
          uVar2 = FUN_18047e010(param_1,param_4);
          local_28 = CONCAT62(local_28._2_6_,uVar2);
          FUN_180066890(param_3,&local_28);
          return;
        }
        lVar6 = lVar7;
      } while (lVar7 != 5);
      dVar8 = (double)FUN_18047e140(param_1,param_4);
      local_28 = CONCAT44(local_28._4_4_,(int)(longlong)dVar8);
      FUN_180013280(param_3,&local_28);
      return;
    }
    lVar6 = lVar7;
  } while (lVar7 != 4);
  uVar3 = FUN_18047e010(param_1,param_4);
  local_28 = CONCAT44(local_28._4_4_,uVar3);
  FUN_180013280(param_3,&local_28);
  return;
}



/* ===== 180050bf0 FUN_180050bf0 ===== */

undefined8 FUN_180050bf0(undefined8 param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  
  plVar4 = (longlong *)FUN_18047e2c0(param_1,1,"wl.entity");
  lVar1 = *plVar4;
  iVar2 = FUN_18047edb0(param_1,2);
  uVar3 = FUN_180050380(param_1);
  uVar5 = FUN_18047e090(param_1,4 - (uint)(iVar2 != 0),0);
  FUN_180050420(param_1,uVar5,lVar1 + (ulonglong)uVar3);
  return 1;
}



/* ===== 180050c70 FUN_180050c70 ===== */

undefined8 FUN_180050c70(undefined8 param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  FUN_18047eb70(param_1,0xffffd8f0,"wl_state");
  lVar3 = FUN_18047fd90(param_1,0xffffffff);
  FUN_18047fb50(param_1,0xfffffffe);
  if (*(char *)(lVar3 + 0x4b) == '\0') {
    uVar4 = FUN_180484c10(param_1,
                          "%s needs \"allow insecure\" (lua page) and the script loaded again",
                          "entity:set");
    return uVar4;
  }
  plVar5 = (longlong *)FUN_18047e2c0(param_1,1,"wl.entity");
  lVar3 = *plVar5;
  iVar1 = FUN_18047edb0(param_1,2);
  uVar2 = FUN_180050380(param_1);
  uVar4 = FUN_18047e090(param_1,4 - (uint)(iVar1 != 0),0);
  FUN_1800508c0(param_1,uVar4,(ulonglong)uVar2 + lVar3,5 - (uint)(iVar1 != 0));
  return 0;
}



/* ===== 180050d50 FUN_180050d50 ===== */

undefined8 FUN_180050d50(undefined8 param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 local_res10 [3];
  
  if (DAT_180cd1304 == '\0') {
    FUN_1803a0b60(local_res10);
    DAT_181108a00 = local_res10[0];
    DAT_1811089f8 = FUN_1803a0c50(local_res10);
    DAT_180cd1304 = '\x01';
  }
  lVar1 = DAT_1811089f8;
  if (DAT_1811089f8 == 0) {
    FUN_18047f4d0();
    return 1;
  }
  plVar2 = (longlong *)FUN_18047efb0(param_1,8);
  *plVar2 = lVar1;
  FUN_18047eb70(param_1,0xffffd8f0,"wl.entity");
  FUN_18047f990(param_1,0xfffffffe);
  return 1;
}



/* ===== 180050e00 FUN_180050e00 ===== */

undefined8 FUN_180050e00(undefined8 param_1)

{
  longlong *plVar1;
  longlong local_res10 [3];
  
  if (DAT_180cd1304 == '\0') {
    FUN_1803a0b60(local_res10);
  }
  else {
    local_res10[0] = DAT_181108a00;
  }
  if (local_res10[0] == 0) {
    FUN_18047f4d0();
    return 1;
  }
  plVar1 = (longlong *)FUN_18047efb0(param_1,8);
  *plVar1 = local_res10[0];
  FUN_18047eb70(param_1,0xffffd8f0,"wl.entity");
  FUN_18047f990(param_1,0xfffffffe);
  return 1;
}



/* ===== 180050e90 FUN_180050e90 ===== */

undefined8 FUN_180050e90(undefined8 param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  uVar1 = FUN_18047e010(param_1,1);
  if (-1 < (int)uVar1) {
    lVar2 = FUN_18000f3a0(DAT_1809619d0);
    if (lVar2 != 0) {
      lVar2 = FUN_18000f3a0((ulonglong)DAT_180961940 +
                            (ulonglong)(uint)(((int)uVar1 >> 9) * DAT_180961944) + lVar2);
      if (lVar2 - 0x10000U < 0xfffffffffffeffff) {
        lVar2 = FUN_18000f3a0((ulonglong)((uVar1 & 0x1ff) * DAT_180961948) + lVar2);
        if (lVar2 - 0x10000U < 0xfffffffffffeffff) {
          plVar3 = (longlong *)FUN_18047efb0(param_1,8);
          *plVar3 = lVar2;
          FUN_18047eb70(param_1,0xffffd8f0,"wl.entity");
          FUN_18047f990(param_1,0xfffffffe);
          return 1;
        }
      }
    }
  }
  FUN_18047f4d0(param_1);
  return 1;
}



/* ===== 180050f80 FUN_180050f80 ===== */

undefined8 FUN_180050f80(undefined8 param_1)

{
  longlong lVar1;
  longlong *plVar2;
  double dVar3;
  undefined1 local_res10 [24];
  
  dVar3 = (double)FUN_18047e140(param_1,1);
  plVar2 = (longlong *)FUN_1803a0940(local_res10,(longlong)dVar3);
  lVar1 = *plVar2;
  if (lVar1 == 0) {
    FUN_18047f4d0();
    return 1;
  }
  plVar2 = (longlong *)FUN_18047efb0(param_1,8);
  *plVar2 = lVar1;
  FUN_18047eb70(param_1,0xffffd8f0,"wl.entity");
  FUN_18047f990(param_1,0xfffffffe);
  return 1;
}



/* ===== 180051010 FUN_180051010 ===== */

undefined8 FUN_180051010(undefined8 param_1)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *local_48;
  longlong *local_40;
  
  FUN_1803a13a0(&local_48);
  FUN_18047e8f0(param_1,(longlong)local_40 - (longlong)local_48 >> 4,0);
  iVar2 = 1;
  for (plVar4 = local_48; plVar4 != local_40; plVar4 = plVar4 + 2) {
    FUN_18047e8f0(param_1,0,2);
    lVar1 = *plVar4;
    if (lVar1 == 0) {
      FUN_18047f4d0();
    }
    else {
      plVar3 = (longlong *)FUN_18047efb0(param_1,8);
      *plVar3 = lVar1;
      FUN_18047eb70(param_1,0xffffd8f0,"wl.entity");
      FUN_18047f990(param_1,0xfffffffe);
    }
    FUN_18047f8e0(param_1,0xfffffffe,"controller");
    lVar1 = plVar4[1];
    if (lVar1 == 0) {
      FUN_18047f4d0();
    }
    else {
      plVar3 = (longlong *)FUN_18047efb0(param_1,8);
      *plVar3 = lVar1;
      FUN_18047eb70(param_1,0xffffd8f0,"wl.entity");
      FUN_18047f990(param_1,0xfffffffe);
    }
    FUN_18047f8e0(param_1,0xfffffffe,&DAT_1806dfd0c);
    FUN_18047f7e0(param_1,0xfffffffe,iVar2);
    iVar2 = iVar2 + 1;
  }
  FUN_1800244c0(&local_48);
  return 1;
}



/* ===== 180051160 FUN_180051160 ===== */

undefined8 FUN_180051160(undefined8 param_1)

{
  longlong lVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  char *_Str2;
  char *_Str1;
  longlong *plVar5;
  longlong *plVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  int iVar9;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [24];
  longlong *local_58;
  longlong *plStack_50;
  longlong local_48;
  
  _Str2 = (char *)FUN_18047e510(param_1,1,0,0);
  FUN_1803a09f0(&local_58);
  FUN_18047e8f0(param_1,0,0);
  puVar7 = auStack_78;
  puVar8 = auStack_78;
  iVar3 = 1;
  for (plVar6 = local_58; plVar6 != plStack_50; plVar6 = plVar6 + 1) {
    if ((_Str2 == (char *)0x0) ||
       ((_Str1 = (char *)FUN_1803a0710(plVar6), iVar9 = iVar3, _Str1 != (char *)0x0 &&
        (iVar4 = strcmp(_Str1,_Str2), iVar4 == 0)))) {
      lVar1 = *plVar6;
      if (lVar1 == 0) {
        FUN_18047f4d0();
      }
      else {
        plVar5 = (longlong *)FUN_18047efb0(param_1,8);
        *plVar5 = lVar1;
        FUN_18047eb70(param_1,0xffffd8f0,"wl.entity");
        FUN_18047f990(param_1,0xfffffffe);
      }
      iVar9 = iVar3 + 1;
      FUN_18047f7e0(param_1,0xfffffffe,iVar3);
    }
    iVar3 = iVar9;
  }
  if (local_58 == (longlong *)0x0) {
    return 1;
  }
  plVar6 = local_58;
  if (0xfff < (ulonglong)((local_48 - (longlong)local_58 >> 3) * 8)) {
    plVar6 = (longlong *)local_58[-1];
    if ((undefined1 *)((longlong)local_58 + (-8 - (longlong)plVar6)) < (undefined1 *)0x20)
    goto LAB_180051274;
    plVar6 = (longlong *)&DAT_00000005;
    pcVar2 = (code *)swi(0x29);
    (*pcVar2)(5);
    puVar7 = auStack_70;
  }
  puVar8 = puVar7;
LAB_180051274:
  *(undefined8 *)(puVar8 + -8) = 0x18005127c;
  thunk_FUN_1803d64e0(plVar6);
  *(undefined8 *)(puVar8 + 0x20) = 0;
  *(undefined8 *)(puVar8 + 0x28) = 0;
  *(undefined8 *)(puVar8 + 0x30) = 0;
  return 1;
}



/* ===== 1800512a0 FUN_1800512a0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1800512a0(undefined8 param_1,undefined4 param_2)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  code *pcVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  byte *pbVar9;
  undefined8 ****ppppuVar10;
  undefined8 ****ppppuVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  ulonglong uVar14;
  undefined1 uVar15;
  undefined8 uStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [24];
  uint local_78 [2];
  undefined8 ****local_70;
  uint *local_68;
  undefined8 ****local_60;
  undefined8 uStack_58;
  ulonglong local_50;
  ulonglong local_48;
  ulonglong local_40;
  
  local_40 = DAT_180919500 ^ (ulonglong)auStack_98;
  iVar7 = FUN_18047fe10();
  puVar12 = auStack_98;
  if (iVar7 < 1) {
    uVar8 = 0;
  }
  else {
    iVar7 = FUN_18047edb0(param_1,param_2);
    if (iVar7 == 0) {
      pbVar9 = (byte *)FUN_18047e090(param_1,param_2,0);
      puVar13 = auStack_98;
      puVar12 = auStack_98;
      local_78[0] = 0;
      uStack_58 = 0;
      local_50 = 0;
      local_48 = 0xf;
      local_60 = (undefined8 ****)0x0;
      local_70 = &local_60;
      local_68 = local_78;
LAB_180051340:
      while( true ) {
        while( true ) {
          while ((*pbVar9 == 0 || (iVar7 = isalpha((uint)*pbVar9), iVar7 == 0))) {
            FUN_180051520(&local_70);
            if (*pbVar9 == 0) goto LAB_18005149a;
            pbVar9 = pbVar9 + 1;
          }
          iVar7 = tolower((uint)*pbVar9);
          uVar6 = local_48;
          uVar8 = local_50;
          uVar15 = (undefined1)iVar7;
          if (local_48 <= local_50) break;
          ppppuVar11 = &local_60;
          if (0xf < local_48) {
            ppppuVar11 = local_60;
          }
          puVar2 = (undefined1 *)((longlong)ppppuVar11 + local_50);
          local_50 = local_50 + 1;
          *puVar2 = uVar15;
          *(undefined1 *)((longlong)ppppuVar11 + uVar8 + 1) = 0;
          pbVar9 = pbVar9 + 1;
        }
        if (local_50 == 0x7fffffffffffffff) goto LAB_180051515;
        uVar1 = local_50 + 1;
        uVar14 = uVar1 | 0xf;
        if (uVar14 < 0x8000000000000000) {
          if (0x7fffffffffffffff - (local_48 >> 1) < local_48) {
            uVar14 = 0x7fffffffffffffff;
          }
          else {
            uVar3 = (local_48 >> 1) + local_48;
            if (uVar14 < uVar3) {
              uVar14 = uVar3;
            }
          }
        }
        else {
          uVar14 = 0x7fffffffffffffff;
        }
        ppppuVar10 = (undefined8 ****)FUN_18000fb70(uVar14 + 1);
        ppppuVar11 = local_60;
        local_50 = uVar1;
        local_48 = uVar14;
        if (0xf < uVar6) break;
        FUN_180540530(ppppuVar10,&local_60,uVar8);
        *(undefined1 *)((longlong)ppppuVar10 + uVar8) = uVar15;
        *(undefined1 *)((longlong)ppppuVar10 + uVar8 + 1) = 0;
        pbVar9 = pbVar9 + 1;
        local_60 = ppppuVar10;
      }
      FUN_180540530(ppppuVar10,local_60,uVar8);
      *(undefined1 *)((longlong)ppppuVar10 + uVar8) = uVar15;
      *(undefined1 *)((longlong)ppppuVar10 + uVar8 + 1) = 0;
      uVar8 = uVar6 + 1;
      if (0xfff < uVar8) {
        if (0x1f < (ulonglong)((longlong)ppppuVar11 + (-8 - (longlong)ppppuVar11[-1]))) {
          pcVar4 = (code *)swi(0x29);
          (*pcVar4)(5);
          puVar12 = auStack_90;
LAB_18005149a:
          uVar5 = local_78[0];
          if (0xf < local_48) {
            uVar8 = local_48 + 1;
            ppppuVar11 = local_60;
            if (0xfff < uVar8) {
              ppppuVar11 = (undefined8 ****)local_60[-1];
              if (0x1f < (ulonglong)((longlong)local_60 + (-8 - (longlong)ppppuVar11))) {
                pcVar4 = (code *)swi(0x29);
                (*pcVar4)(5);
                puVar13 = puVar12 + 8;
LAB_180051515:
                    /* WARNING: Subroutine does not return */
                *(undefined **)(puVar13 + -8) = &UNK_18005151a;
                FUN_180011990();
              }
              uVar8 = local_48 + 0x28;
            }
            *(undefined8 *)(puVar12 + -8) = 0x1800514d4;
            thunk_FUN_1803d64e0(ppppuVar11,uVar8);
          }
          uVar8 = (ulonglong)uVar5;
          goto LAB_1800514ea;
        }
        uVar8 = uVar6 + 0x28;
        ppppuVar11 = (undefined8 ****)ppppuVar11[-1];
      }
      thunk_FUN_1803d64e0(ppppuVar11,uVar8);
      pbVar9 = pbVar9 + 1;
      local_60 = ppppuVar10;
      goto LAB_180051340;
    }
    uVar8 = FUN_18047fc10();
    puVar12 = auStack_98;
  }
LAB_1800514ea:
  *(undefined8 *)(puVar12 + -8) = 0x1800514f6;
  return uVar8;
}



/* ===== 180051520 FUN_180051520 ===== */

void FUN_180051520(undefined8 *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *_Buf1;
  
  _Buf1 = (undefined8 *)*param_1;
  uVar1 = _Buf1[3];
  lVar2 = _Buf1[2];
  puVar4 = param_1;
  if (0xf < uVar1) {
    puVar4 = _Buf1;
  }
  if (lVar2 == 2) {
    iVar3 = memcmp((void *)*puVar4,&DAT_1806dfd44,2);
    if (iVar3 == 0) {
      *(uint *)param_1[1] = *(uint *)param_1[1] | 0x10;
      goto LAB_1800517c4;
    }
  }
  puVar4 = _Buf1;
  if (0xf < uVar1) {
    puVar4 = (undefined8 *)*_Buf1;
  }
  if (lVar2 == 2) {
    iVar3 = memcmp(puVar4,&DAT_1806dfd48,2);
    if (iVar3 == 0) {
      *(uint *)param_1[1] = *(uint *)param_1[1] | 0x20;
      goto LAB_1800517c4;
    }
  }
  puVar4 = _Buf1;
  if (0xf < uVar1) {
    puVar4 = (undefined8 *)*_Buf1;
  }
  if (lVar2 == 2) {
    iVar3 = memcmp(puVar4,&DAT_1806dfd4c,2);
    if (iVar3 == 0) {
      *(uint *)param_1[1] = *(uint *)param_1[1] | 0x40;
      goto LAB_1800517c4;
    }
  }
  puVar4 = _Buf1;
  if (0xf < uVar1) {
    puVar4 = (undefined8 *)*_Buf1;
  }
  if (lVar2 == 2) {
    iVar3 = memcmp(puVar4,&DAT_1806dfd50,2);
    if (iVar3 == 0) {
      *(uint *)param_1[1] = *(uint *)param_1[1] | 0x80;
      goto LAB_1800517c4;
    }
  }
  puVar4 = _Buf1;
  if (0xf < uVar1) {
    puVar4 = (undefined8 *)*_Buf1;
  }
  if (lVar2 == 1) {
    iVar3 = memcmp(puVar4,&DAT_1806dfd54,1);
    if (iVar3 != 0) goto LAB_180051622;
LAB_180051647:
    *(uint *)param_1[1] = *(uint *)param_1[1] | 0x30;
    goto LAB_1800517c4;
  }
LAB_180051622:
  puVar4 = _Buf1;
  if (0xf < uVar1) {
    puVar4 = (undefined8 *)*_Buf1;
  }
  if (lVar2 == 3) {
    iVar3 = memcmp(puVar4,&DAT_1806dfd58,3);
    if (iVar3 == 0) goto LAB_180051647;
  }
  if (uVar1 < 0x10) {
    puVar4 = _Buf1;
  }
  else {
    puVar4 = (undefined8 *)*_Buf1;
  }
  if (lVar2 == 1) {
    iVar3 = memcmp(puVar4,&DAT_1806dfd5c,1);
    if (iVar3 != 0) goto LAB_18005167a;
LAB_1800516a1:
    *(uint *)param_1[1] = *(uint *)param_1[1] | 0xc0;
    goto LAB_1800517c4;
  }
LAB_18005167a:
  puVar4 = param_1;
  if (0xf < uVar1) {
    puVar4 = _Buf1;
  }
  if (lVar2 == 6) {
    iVar3 = memcmp((void *)*puVar4,"bottom",6);
    if (iVar3 == 0) goto LAB_1800516a1;
  }
  if (uVar1 < 0x10) {
    puVar4 = _Buf1;
  }
  else {
    puVar4 = (undefined8 *)*_Buf1;
  }
  if (lVar2 == 1) {
    iVar3 = memcmp(puVar4,&DAT_1806dfd68,1);
    if (iVar3 != 0) goto LAB_1800516d7;
LAB_1800516fe:
    *(uint *)param_1[1] = *(uint *)param_1[1] | 0x50;
    goto LAB_1800517c4;
  }
LAB_1800516d7:
  puVar4 = param_1;
  if (0xf < uVar1) {
    puVar4 = _Buf1;
  }
  if (lVar2 == 4) {
    iVar3 = memcmp((void *)*puVar4,&DAT_1806dfd6c,4);
    if (iVar3 == 0) goto LAB_1800516fe;
  }
  if (uVar1 < 0x10) {
    puVar4 = _Buf1;
  }
  else {
    puVar4 = (undefined8 *)*_Buf1;
  }
  if (lVar2 == 1) {
    iVar3 = memcmp(puVar4,&DAT_1806dfd74,1);
    if (iVar3 != 0) goto LAB_180051731;
LAB_180051758:
    *(uint *)param_1[1] = *(uint *)param_1[1] | 0xa0;
  }
  else {
LAB_180051731:
    puVar4 = param_1;
    if (0xf < uVar1) {
      puVar4 = _Buf1;
    }
    if (lVar2 == 5) {
      iVar3 = memcmp((void *)*puVar4,"right",5);
      if (iVar3 == 0) goto LAB_180051758;
    }
    puVar4 = _Buf1;
    if (0xf < uVar1) {
      puVar4 = (undefined8 *)*_Buf1;
    }
    if (lVar2 == 3) {
      iVar3 = memcmp(puVar4,&DAT_1806dfd80,3);
      if (iVar3 == 0) {
        *(uint *)param_1[1] = *(uint *)param_1[1] | 0xf0;
        goto LAB_1800517c4;
      }
    }
    if (0xf < uVar1) {
      _Buf1 = (undefined8 *)*_Buf1;
    }
    if (lVar2 == 4) {
      iVar3 = memcmp(_Buf1,&DAT_1806dfd84,4);
      if (iVar3 == 0) {
        *(uint *)param_1[1] = *(uint *)param_1[1] | 0x100;
      }
    }
  }
LAB_1800517c4:
  param_1 = (undefined8 *)*param_1;
  param_1[2] = 0;
  if (0xf < (ulonglong)param_1[3]) {
    param_1 = (undefined8 *)*param_1;
  }
  *(undefined1 *)param_1 = 0;
  return;
}



/* ===== 1800517f0 FUN_1800517f0 ===== */

undefined8 FUN_1800517f0(undefined8 param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  float local_res10;
  float local_res14;
  float local_res18;
  float local_res1c;
  
  lVar1 = DAT_180ccfa78;
  if (DAT_180ccfa78 == 0) {
    FUN_180484c10(param_1,"render.* draws only inside a paint callback");
  }
  dVar4 = (double)FUN_18047e140(param_1,1);
  dVar5 = (double)FUN_18047e140(param_1,2);
  dVar6 = (double)FUN_18047e140(param_1,3);
  dVar7 = (double)FUN_18047e140(param_1,4);
  dVar8 = (double)FUN_18047e5f0(param_1,7,DAT_1808ac500);
  uVar2 = FUN_1800512a0(param_1,8);
  dVar9 = (double)FUN_18047e5f0(param_1,6,0);
  local_res10 = (float)dVar6 + (float)dVar4;
  local_res14 = (float)dVar7 + (float)dVar5;
  local_res18 = (float)dVar4;
  local_res1c = (float)dVar5;
  uVar3 = FUN_180063eb0(param_1,5);
  FUN_1803fe480(lVar1,&local_res18,&local_res10,uVar3,(float)dVar9,(float)dVar8,uVar2);
  return 0;
}



/* ===== 180051980 FUN_180051980 ===== */

undefined8 FUN_180051980(undefined8 param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  float local_res10;
  float local_res14;
  float local_res18;
  float local_res1c;
  
  lVar1 = DAT_180ccfa78;
  if (DAT_180ccfa78 == 0) {
    FUN_180484c10(param_1,"render.* draws only inside a paint callback");
  }
  dVar4 = (double)FUN_18047e140(param_1,1);
  dVar5 = (double)FUN_18047e140(param_1,2);
  dVar6 = (double)FUN_18047e140(param_1,3);
  dVar7 = (double)FUN_18047e140(param_1,4);
  uVar2 = FUN_1800512a0(param_1,7);
  dVar8 = (double)FUN_18047e5f0(param_1,6,0);
  local_res10 = (float)dVar6 + (float)dVar4;
  local_res14 = (float)dVar7 + (float)dVar5;
  local_res18 = (float)dVar4;
  local_res1c = (float)dVar5;
  uVar3 = FUN_180063eb0(param_1,5);
  FUN_1803fe590(lVar1,&local_res18,&local_res10,uVar3,(float)dVar8,uVar2);
  return 0;
}



/* ===== 180051ae0 FUN_180051ae0 ===== */

undefined8 FUN_180051ae0(undefined8 param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  float local_res10;
  float local_res14;
  float local_res18;
  float local_res1c;
  
  lVar1 = DAT_180ccfa78;
  if (DAT_180ccfa78 == 0) {
    FUN_180484c10(param_1,"render.* draws only inside a paint callback");
  }
  dVar7 = (double)FUN_18047e140(param_1,1);
  dVar8 = (double)FUN_18047e140(param_1,2);
  dVar9 = (double)FUN_18047e140(param_1,3);
  dVar10 = (double)FUN_18047e140(param_1,4);
  uVar2 = FUN_180063eb0(param_1,5);
  uVar3 = FUN_180063eb0(param_1,6);
  iVar4 = FUN_18047fbf0(param_1,7);
  local_res10 = (float)dVar9 + (float)dVar7;
  uVar6 = uVar3;
  if (iVar4 != 0) {
    uVar6 = uVar2;
  }
  local_res14 = (float)dVar10 + (float)dVar8;
  uVar5 = uVar2;
  if (iVar4 != 0) {
    uVar5 = uVar3;
  }
  local_res18 = (float)dVar7;
  local_res1c = (float)dVar8;
  FUN_1803fe730(lVar1,&local_res18,&local_res10,uVar2,uVar5,uVar3,uVar6);
  return 0;
}



/* ===== 180051c40 FUN_180051c40 ===== */

undefined8 FUN_180051c40(undefined8 param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  longlong lVar6;
  uint uVar7;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  
  lVar6 = DAT_180ccfa78;
  if (DAT_180ccfa78 == 0) {
    FUN_180484c10(param_1,"render.* draws only inside a paint callback");
  }
  dVar2 = (double)FUN_18047e5f0(param_1,6,DAT_1808ac500);
  uVar7 = FUN_180063eb0(param_1,5);
  dVar3 = (double)FUN_18047e140(param_1,4);
  dVar4 = (double)FUN_18047e140(param_1,3);
  dVar5 = (double)FUN_18047e140(param_1,2);
  dVar1 = (double)FUN_18047e140(param_1,1);
  if ((uVar7 & 0xff000000) != 0) {
    local_58 = (float)dVar1 + DAT_1808ac1f4;
    local_54 = (float)dVar5 + DAT_1808ac1f4;
    local_50 = (float)dVar4 + DAT_1808ac1f4;
    local_4c = (float)dVar3 + DAT_1808ac1f4;
    FUN_1803fc600(lVar6,&local_58,2,uVar7,(float)dVar2,0);
  }
  return 0;
}



/* ===== 180051da0 FUN_180051da0 ===== */

undefined8 FUN_180051da0(undefined8 param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  float local_res10;
  float local_res14;
  
  lVar1 = DAT_180ccfa78;
  if (DAT_180ccfa78 == 0) {
    FUN_180484c10(param_1,"render.* draws only inside a paint callback");
  }
  dVar4 = (double)FUN_18047e5f0(param_1,6,DAT_1808ac500);
  uVar2 = FUN_18047e470(param_1,5,0);
  uVar3 = FUN_180063eb0(param_1,4);
  dVar5 = (double)FUN_18047e140(param_1,3);
  dVar6 = (double)FUN_18047e140(param_1,2);
  dVar7 = (double)FUN_18047e140(param_1,1);
  local_res10 = (float)dVar7;
  local_res14 = (float)dVar6;
  FUN_1803fe8f0(lVar1,&local_res10,(float)dVar5,uVar3,uVar2,(float)dVar4);
  return 0;
}



/* ===== 180051ea0 FUN_180051ea0 ===== */

undefined8 FUN_180051ea0(undefined8 param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  float local_res10;
  float local_res14;
  
  lVar1 = DAT_180ccfa78;
  if (DAT_180ccfa78 == 0) {
    FUN_180484c10(param_1,"render.* draws only inside a paint callback");
  }
  uVar2 = FUN_18047e470(param_1,5,0);
  uVar3 = FUN_180063eb0(param_1,4);
  dVar4 = (double)FUN_18047e140(param_1,3);
  dVar5 = (double)FUN_18047e140(param_1,2);
  dVar6 = (double)FUN_18047e140(param_1,1);
  local_res10 = (float)dVar6;
  local_res14 = (float)dVar5;
  FUN_1803fe9d0(lVar1,&local_res10,(float)dVar4,uVar3,uVar2);
  return 0;
}



/* ===== 180051f70 FUN_180051f70 ===== */

undefined8 FUN_180051f70(undefined8 param_1)

{
  longlong lVar1;
  uint uVar2;
  double dVar3;
  double dVar4;
  float local_res10;
  float local_res14;
  float local_res18;
  float local_res1c;
  float local_res20;
  float local_res24;
  
  lVar1 = DAT_180ccfa78;
  if (DAT_180ccfa78 == 0) {
    FUN_180484c10(param_1,"render.* draws only inside a paint callback");
  }
  uVar2 = FUN_180063eb0(param_1,7);
  dVar3 = (double)FUN_18047e140(param_1,6);
  dVar4 = (double)FUN_18047e140(param_1,5);
  local_res20 = (float)dVar4;
  local_res24 = (float)dVar3;
  dVar3 = (double)FUN_18047e140(param_1,4);
  dVar4 = (double)FUN_18047e140(param_1,3);
  local_res18 = (float)dVar4;
  local_res1c = (float)dVar3;
  dVar3 = (double)FUN_18047e140(param_1,2);
  dVar4 = (double)FUN_18047e140(param_1,1);
  local_res10 = (float)dVar4;
  if ((uVar2 & 0xff000000) != 0) {
    local_res14 = (float)dVar3;
    FUN_18000b9c0(lVar1 + 0x50,&local_res10);
    FUN_18000b9c0(lVar1 + 0x50,&local_res18);
    FUN_18000b9c0(lVar1 + 0x50,&local_res20);
    FUN_1803fd460(lVar1,*(undefined8 *)(lVar1 + 0x58),*(undefined4 *)(lVar1 + 0x50),uVar2);
    *(undefined4 *)(lVar1 + 0x50) = 0;
  }
  return 0;
}



/* ===== 1800520a0 FUN_1800520a0 ===== */

longlong * FUN_1800520a0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  float *pfVar5;
  float *pfVar6;
  ulonglong uVar7;
  float *pfVar8;
  float *pfVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  double dVar12;
  double dVar13;
  undefined4 uVar14;
  ulonglong uVar15;
  longlong *plVar16;
  float *pfVar17;
  float *pfVar18;
  
  FUN_18047e240(param_2,1,5,param_4,0);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar14 = 1;
  iVar1 = FUN_18047f0e0(param_2,1);
  FUN_18047f6f0(param_2,1,1);
  iVar2 = FUN_18047fe10(param_2,0xffffffff);
  FUN_18047fb50(param_2,0xfffffffe);
  if (iVar2 == 5) {
    if (0 < iVar1) {
      iVar2 = 1;
      do {
        FUN_18047f6f0(param_2,1,iVar2);
        iVar3 = FUN_18047fe10(param_2,0xffffffff);
        if (iVar3 == 5) {
          FUN_18047f6f0(param_2,0xffffffff,1);
          FUN_18047f6f0(param_2,0xfffffffe,2);
          dVar12 = (double)FUN_18047fd30(param_2,0xfffffffe);
          dVar13 = (double)FUN_18047fd30(param_2,0xffffffff);
          FUN_18047fb50(param_2,0xfffffffd);
          pfVar9 = (float *)param_1[1];
          if (pfVar9 == (float *)param_1[2]) {
            uVar11 = (longlong)pfVar9 - *param_1;
            lVar4 = (longlong)uVar11 >> 3;
            if (lVar4 == 0x1fffffffffffffff) {
LAB_1800524d7:
                    /* WARNING: Subroutine does not return */
              FUN_1800118d0();
            }
            uVar15 = lVar4 + 1;
            uVar7 = param_1[2] - *param_1 >> 3;
            if (0x1fffffffffffffff - (uVar7 >> 1) < uVar7) {
              uVar10 = 0x1fffffffffffffff;
            }
            else {
              uVar7 = (uVar7 >> 1) + uVar7;
              uVar10 = uVar15;
              if (uVar15 <= uVar7) {
                uVar10 = uVar7;
              }
              if (0x1fffffffffffffff < uVar10) {
LAB_1800524d1:
                    /* WARNING: Subroutine does not return */
                FUN_18000d840();
              }
            }
            pfVar5 = (float *)FUN_18000fb70(uVar10 * 8);
            pfVar17 = (float *)((uVar11 & 0xfffffffffffffff8) + (longlong)pfVar5);
            pfVar8 = pfVar17 + 2;
            *pfVar17 = (float)dVar12;
            pfVar17[1] = (float)dVar13;
            pfVar6 = (float *)*param_1;
            plVar16 = param_1;
            uVar11 = uVar10;
            pfVar18 = pfVar8;
            if (pfVar9 == (float *)param_1[1]) {
              lVar4 = param_1[1] - (longlong)pfVar6;
              pfVar8 = pfVar5;
              pfVar9 = pfVar6;
            }
            else {
              FUN_180540530(pfVar5,pfVar6,(longlong)pfVar9 - (longlong)pfVar6);
              lVar4 = param_1[1] - (longlong)pfVar9;
              pfVar17 = pfVar5;
            }
            FUN_180540530(pfVar8,pfVar9,lVar4);
            FUN_18002b8d0(param_1,pfVar5,uVar15,uVar10,uVar14,uVar15,plVar16,0,uVar11,pfVar17,
                          pfVar18);
          }
          else {
            *pfVar9 = (float)dVar12;
            pfVar9[1] = (float)dVar13;
            param_1[1] = (longlong)(pfVar9 + 2);
          }
        }
        FUN_18047fb50(param_2,0xfffffffe);
        iVar2 = iVar2 + 1;
      } while (iVar2 <= iVar1);
    }
  }
  else if (1 < iVar1) {
    iVar2 = 1;
    do {
      FUN_18047f6f0(param_2,1,iVar2);
      FUN_18047f6f0(param_2,1,iVar2 + 1);
      dVar12 = (double)FUN_18047fd30(param_2,0xffffffff);
      dVar13 = (double)FUN_18047fd30(param_2,0xfffffffe);
      pfVar9 = (float *)param_1[1];
      if (pfVar9 == (float *)param_1[2]) {
        uVar11 = (longlong)pfVar9 - *param_1;
        lVar4 = (longlong)uVar11 >> 3;
        if (lVar4 == 0x1fffffffffffffff) goto LAB_1800524d7;
        uVar15 = lVar4 + 1;
        uVar7 = param_1[2] - *param_1 >> 3;
        if (0x1fffffffffffffff - (uVar7 >> 1) < uVar7) {
          uVar10 = 0x1fffffffffffffff;
        }
        else {
          uVar7 = (uVar7 >> 1) + uVar7;
          uVar10 = uVar15;
          if (uVar15 <= uVar7) {
            uVar10 = uVar7;
          }
          if (0x1fffffffffffffff < uVar10) goto LAB_1800524d1;
        }
        pfVar6 = (float *)FUN_18000fb70(uVar10 * 8);
        pfVar17 = (float *)((uVar11 & 0xfffffffffffffff8) + (longlong)pfVar6);
        pfVar8 = pfVar17 + 2;
        *pfVar17 = (float)dVar13;
        pfVar17[1] = (float)dVar12;
        pfVar17 = (float *)*param_1;
        if (pfVar9 == (float *)param_1[1]) {
          lVar4 = param_1[1] - (longlong)pfVar17;
          pfVar8 = pfVar6;
          pfVar9 = pfVar17;
        }
        else {
          FUN_180540530(pfVar6,pfVar17,(longlong)pfVar9 - (longlong)pfVar17);
          lVar4 = param_1[1] - (longlong)pfVar9;
        }
        FUN_180540530(pfVar8,pfVar9,lVar4);
        FUN_18002b8d0(param_1,pfVar6,uVar15,uVar10);
      }
      else {
        *pfVar9 = (float)dVar13;
        pfVar9[1] = (float)dVar12;
        param_1[1] = param_1[1] + 8;
      }
      FUN_18047fb50(param_2,0xfffffffd);
      iVar3 = iVar2 + 3;
      iVar2 = iVar2 + 2;
    } while (iVar3 <= iVar1);
  }
  return param_1;
}



/* ===== 1800524e0 FUN_1800524e0 ===== */

undefined8 FUN_1800524e0(undefined8 param_1)

{
  double dVar1;
  longlong lVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  longlong local_58;
  longlong local_50;
  
  lVar2 = DAT_180ccfa78;
  if (DAT_180ccfa78 == 0) {
    FUN_180484c10(param_1,"render.* draws only inside a paint callback");
  }
  uVar3 = FUN_180063eb0(param_1,2);
  dVar1 = (double)FUN_18047e5f0(param_1,3,DAT_1808ac500);
  iVar4 = FUN_18047fe10(param_1,4);
  if (0 < iVar4) {
    iVar4 = FUN_18047fbf0(param_1,4);
    if (iVar4 == 0) {
      uVar5 = 0;
      goto LAB_18005255b;
    }
  }
  uVar5 = 0x200;
LAB_18005255b:
  FUN_1800520a0(&local_58,param_1);
  uVar6 = local_50 - local_58 >> 3;
  if (1 < uVar6) {
    FUN_1803fc600(lVar2,local_58,uVar6,uVar3,(float)dVar1,uVar5);
  }
  FUN_1800132b0(&local_58);
  return 0;
}



/* ===== 1800525c0 FUN_1800525c0 ===== */

undefined8 FUN_1800525c0(undefined8 param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  longlong local_28;
  longlong local_20;
  
  lVar1 = DAT_180ccfa78;
  if (DAT_180ccfa78 == 0) {
    FUN_180484c10(param_1,"render.* draws only inside a paint callback");
  }
  uVar2 = FUN_180063eb0(param_1,2);
  FUN_1800520a0(&local_28,param_1);
  uVar3 = local_20 - local_28 >> 3;
  if (2 < uVar3) {
    FUN_1803fd460(lVar1,local_28,uVar3,uVar2);
  }
  FUN_1800132b0(&local_28);
  return 0;
}



/* ===== 180052650 FUN_180052650 ===== */

longlong * FUN_180052650(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  double dVar2;
  longlong lVar3;
  longlong lVar4;
  char *pcVar5;
  longlong lVar6;
  float fVar7;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  pcVar5 = (char *)FUN_18047e510(param_2,param_3,&DAT_18058b643,0);
  lVar4 = DAT_1811079f0;
  cVar1 = *pcVar5;
  lVar3 = DAT_180ca0a50;
  while (DAT_180ca0a50 = lVar3, cVar1 != '\0') {
    switch(*pcVar5) {
    case 'c':
      *(undefined1 *)((longlong)param_1 + 0xc) = 1;
      break;
    case 'o':
      *(undefined1 *)(param_1 + 2) = 1;
      break;
    case 'p':
      *param_1 = lVar4;
      break;
    case 'r':
      *(undefined1 *)((longlong)param_1 + 0xe) = 1;
      break;
    case 's':
      *(undefined1 *)((longlong)param_1 + 0xf) = 1;
      break;
    case 'v':
      *(undefined1 *)((longlong)param_1 + 0xd) = 1;
    }
    pcVar5 = pcVar5 + 1;
    lVar3 = DAT_180ca0a50;
    cVar1 = *pcVar5;
  }
  lVar6 = *param_1;
  if (lVar6 == 0) {
    lVar6 = *(longlong *)(lVar3 + 0x11f0);
    *param_1 = lVar6;
  }
  if (lVar6 == lVar4) {
    fVar7 = DAT_1808ac864;
  }
  else {
    fVar7 = *(float *)(lVar3 + 0x1200);
  }
  dVar2 = (double)FUN_18047e5f0(param_2,param_4,(double)fVar7);
  *(float *)(param_1 + 1) = (float)dVar2;
  return param_1;
}



/* ===== 1800527a0 FUN_1800527a0 ===== */

ulonglong FUN_1800527a0(char *param_1,longlong param_2,uint *param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong in_RAX;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  
  if (7 < param_2 - (longlong)param_1) {
    cVar1 = *param_1;
    iVar7 = (int)cVar1;
    if ((byte)(cVar1 - 0x30U) < 10) {
      iVar7 = iVar7 + -0x30;
    }
    else if ((byte)(cVar1 + 0x9fU) < 6) {
      iVar7 = iVar7 + -0x57;
    }
    else {
      in_RAX = (ulonglong)(iVar7 - 0x41U);
      if (5 < (byte)(iVar7 - 0x41U)) goto LAB_18005293a;
      iVar7 = iVar7 + -0x37;
    }
    cVar1 = param_1[1];
    iVar6 = (int)cVar1;
    if ((byte)(cVar1 - 0x30U) < 10) {
      uVar9 = iVar6 - 0x30;
    }
    else if ((byte)(cVar1 + 0x9fU) < 6) {
      uVar9 = iVar6 - 0x57;
    }
    else {
      in_RAX = (ulonglong)(iVar6 - 0x41U);
      if (5 < (byte)(iVar6 - 0x41U)) goto LAB_18005293a;
      uVar9 = iVar6 - 0x37;
    }
    cVar1 = param_1[2];
    iVar6 = (int)cVar1;
    if ((byte)(cVar1 - 0x30U) < 10) {
      uVar2 = iVar6 - 0x30;
    }
    else if ((byte)(cVar1 + 0x9fU) < 6) {
      uVar2 = iVar6 - 0x57;
    }
    else {
      in_RAX = (ulonglong)(iVar6 - 0x41U);
      if (5 < (byte)(iVar6 - 0x41U)) goto LAB_18005293a;
      uVar2 = iVar6 - 0x37;
    }
    cVar1 = param_1[3];
    iVar6 = (int)cVar1;
    if ((byte)(cVar1 - 0x30U) < 10) {
      uVar3 = iVar6 - 0x30;
    }
    else if ((byte)(cVar1 + 0x9fU) < 6) {
      uVar3 = iVar6 - 0x57;
    }
    else {
      in_RAX = (ulonglong)(iVar6 - 0x41U);
      if (5 < (byte)(iVar6 - 0x41U)) goto LAB_18005293a;
      uVar3 = iVar6 - 0x37;
    }
    cVar1 = param_1[4];
    iVar6 = (int)cVar1;
    if ((byte)(cVar1 - 0x30U) < 10) {
      uVar4 = iVar6 - 0x30;
    }
    else if ((byte)(cVar1 + 0x9fU) < 6) {
      uVar4 = iVar6 - 0x57;
    }
    else {
      in_RAX = (ulonglong)(iVar6 - 0x41U);
      if (5 < (byte)(iVar6 - 0x41U)) goto LAB_18005293a;
      uVar4 = iVar6 - 0x37;
    }
    cVar1 = param_1[5];
    iVar6 = (int)cVar1;
    if ((byte)(cVar1 - 0x30U) < 10) {
      uVar5 = iVar6 - 0x30;
    }
    else if ((byte)(cVar1 + 0x9fU) < 6) {
      uVar5 = iVar6 - 0x57;
    }
    else {
      in_RAX = (ulonglong)(iVar6 - 0x41U);
      if (5 < (byte)(iVar6 - 0x41U)) goto LAB_18005293a;
      uVar5 = iVar6 - 0x37;
    }
    cVar1 = param_1[6];
    iVar6 = (int)cVar1;
    if ((byte)(cVar1 - 0x30U) < 10) {
      uVar8 = iVar6 - 0x30;
    }
    else if ((byte)(cVar1 + 0x9fU) < 6) {
      uVar8 = iVar6 - 0x57;
    }
    else {
      in_RAX = (ulonglong)(iVar6 - 0x41U);
      if (5 < (byte)(iVar6 - 0x41U)) goto LAB_18005293a;
      uVar8 = iVar6 - 0x37;
    }
    cVar1 = param_1[7];
    iVar6 = (int)cVar1;
    uVar8 = (((((iVar7 << 4 | uVar9) << 4 | uVar2) << 4 | uVar3) << 4 | uVar4) << 4 | uVar5) << 4 |
            uVar8;
    if ((byte)(cVar1 - 0x30U) < 10) {
      uVar9 = uVar8 << 4 | iVar6 - 0x30U;
      *param_3 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18;
      return CONCAT71((uint7)(uint3)(iVar6 - 0x30U >> 8),1);
    }
    if ((byte)(cVar1 + 0x9fU) < 6) {
      uVar9 = uVar8 << 4 | iVar6 - 0x57U;
      *param_3 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18;
      return CONCAT71((uint7)(uint3)(iVar6 - 0x57U >> 8),1);
    }
    in_RAX = (ulonglong)(iVar6 - 0x41U);
    if ((byte)(iVar6 - 0x41U) < 6) {
      uVar9 = uVar8 << 4 | iVar6 - 0x37U;
      *param_3 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18;
      return CONCAT71((uint7)(uint3)(iVar6 - 0x37U >> 8),1);
    }
  }
LAB_18005293a:
  return in_RAX & 0xffffffffffffff00;
}



/* ===== 180052940 FUN_180052940 ===== */

undefined8 * FUN_180052940(undefined8 *param_1,char *param_2,longlong param_3,undefined4 param_4)

{
  char *pcVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  char cVar4;
  undefined4 uVar5;
  char *pcVar6;
  undefined4 local_res20 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  pcVar1 = param_2 + param_3;
  if (param_2 < pcVar1) {
    pcVar6 = param_2;
    uVar5 = param_4;
    do {
      if ((*param_2 - 8U & 0xfb) == 0) {
        if (pcVar6 < param_2) {
          puVar2 = (undefined4 *)param_1[1];
          local_40 = pcVar6;
          uStack_38 = param_2;
          local_30 = uVar5;
          if (puVar2 == (undefined4 *)param_1[2]) {
            FUN_18006a230(param_1,puVar2,&local_40);
          }
          else {
            local_40._0_4_ = SUB84(pcVar6,0);
            local_40._4_4_ = (undefined4)((ulonglong)pcVar6 >> 0x20);
            uStack_38._0_4_ = SUB84(param_2,0);
            uStack_38._4_4_ = (undefined4)((ulonglong)param_2 >> 0x20);
            *puVar2 = (undefined4)local_40;
            puVar2[1] = local_40._4_4_;
            puVar2[2] = (undefined4)uStack_38;
            puVar2[3] = uStack_38._4_4_;
            *(ulonglong *)(puVar2 + 4) = CONCAT44(uStack_2c,uVar5);
            param_1[1] = param_1[1] + 0x18;
          }
        }
        pcVar6 = param_2 + 1;
        if (*param_2 == '\b') {
          uVar5 = param_4;
        }
        else {
          local_res20[0] = 0;
          cVar4 = FUN_1800527a0(pcVar6,pcVar1,local_res20);
          if (cVar4 != '\0') {
            pcVar6 = param_2 + 9;
            param_2 = param_2 + 8;
            uVar5 = local_res20[0];
          }
        }
      }
      param_2 = param_2 + 1;
    } while (param_2 < pcVar1);
    if (pcVar6 < pcVar1) {
      puVar3 = (undefined8 *)param_1[1];
      if (puVar3 == (undefined8 *)param_1[2]) {
        local_40 = pcVar6;
        uStack_38 = pcVar1;
        local_30 = uVar5;
        FUN_18006a230(param_1,puVar3,&local_40);
      }
      else {
        *puVar3 = pcVar6;
        puVar3[1] = pcVar1;
        puVar3[2] = CONCAT44(uStack_2c,uVar5);
        param_1[1] = param_1[1] + 0x18;
      }
    }
  }
  return param_1;
}



