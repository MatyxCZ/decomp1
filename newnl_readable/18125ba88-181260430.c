/* ===== 18125ba88 FUN_18125ba88 ===== */

longlong FUN_18125ba88(uint param_1,undefined8 param_2,uint *param_3,uint *param_4)

{
  wchar_t *_Str1;
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined4 local_res18 [2];
  
  do {
    if (param_3 == param_4) {
      lVar3 = 0;
LAB_18125bb7a:
      __acrt_lock(0xe);
      local_res18[0] = 0;
      iVar1 = (*DAT_181262508)(&DAT_181331350,0x100,4,local_res18);
      if (iVar1 != 0) {
        lVar2 = lVar3;
        if (lVar3 == 0) {
          lVar2 = -1;
        }
        LOCK();
        *(longlong *)(&DAT_181331350 + (ulonglong)param_1 * 8) = lVar2;
        UNLOCK();
        iVar1 = (*DAT_181262508)(&DAT_181331350,0x100,2,local_res18);
        if (iVar1 != 0) {
          __acrt_unlock(0xe);
          return lVar3;
        }
      }
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar4 = (ulonglong)*param_3;
    lVar3 = *(longlong *)(&DAT_18132f460 + uVar4 * 8);
    if (lVar3 == 0) {
      _Str1 = *(wchar_t **)(&DAT_181263af0 + uVar4 * 8);
      lVar3 = (*DAT_181262510)(_Str1,0,0x800);
      if ((lVar3 != 0) ||
         ((((iVar1 = (*DAT_1812623c8)(), iVar1 == 0x57 &&
            (iVar1 = wcsncmp(_Str1,(wchar_t *)&DAT_181264128,7), iVar1 != 0)) &&
           (iVar1 = wcsncmp(_Str1,(wchar_t *)&DAT_181264138,7), iVar1 != 0)) &&
          (lVar3 = (*DAT_181262510)(_Str1,0,0), lVar3 != 0)))) {
        LOCK();
        lVar2 = *(longlong *)(&DAT_18132f460 + uVar4 * 8);
        *(longlong *)(&DAT_18132f460 + uVar4 * 8) = lVar3;
        UNLOCK();
        if (lVar2 != 0) {
          (*DAT_181262450)(lVar3);
        }
        goto LAB_18125bc20;
      }
      LOCK();
      *(undefined8 *)(&DAT_18132f460 + uVar4 * 8) = 0xffffffffffffffff;
      UNLOCK();
    }
    else if (lVar3 != -1) {
LAB_18125bc20:
      lVar3 = (*DAT_181262368)(lVar3,param_2);
      goto LAB_18125bb7a;
    }
    param_3 = param_3 + 1;
  } while( true );
}



/* ===== 18125bc3c FUN_18125bc3c ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_18125bc3c(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (_DAT_181331420 == -1) {
    return 0xc0000225;
  }
  if ((_DAT_181331420 == 0) &&
     (lVar1 = FUN_18125ba88(0x1a,&DAT_1812641b0,&DAT_1812641ac,&DAT_1812641b0), lVar1 == 0)) {
    return 0xc0000225;
  }
  uVar2 = FUN_1812609b0(0xfffffffffffffffa,param_1);
  return uVar2;
}



/* ===== 18125bc98 FUN_18125bc98 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_18125bc98(void)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (_DAT_181331350 == -1) {
    return 1;
  }
  if ((_DAT_181331350 == 0) &&
     (lVar1 = FUN_18125ba88(0,&DAT_181264150,&DAT_181264148,&DAT_18126414c), lVar1 == 0)) {
    return 1;
  }
  uVar2 = FUN_1812609b0();
  return uVar2;
}



/* ===== 18125bcec FUN_18125bcec ===== */

void FUN_18125bcec(void)

{
                    /* WARNING: Could not recover jumptable at 0x00018125bcec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_1812623f0)();
  return;
}



/* ===== 18125bcf4 FUN_18125bcf4 ===== */

void FUN_18125bcf4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00018125bcf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_1812623e0)();
  return;
}



/* ===== 18125bcfc FUN_18125bcfc ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18125bcfc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00018125bd03. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*_DAT_181331368)();
  return;
}



/* ===== 18125bd08 FUN_18125bd08 ===== */

void FUN_18125bd08(void)

{
                    /* WARNING: Could not recover jumptable at 0x00018125bd08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_1812623e8)();
  return;
}



/* ===== 18125bd10 FUN_18125bd10 ===== */

void FUN_18125bd10(void)

{
                    /* WARNING: Could not recover jumptable at 0x00018125bd10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_181262408)();
  return;
}



/* ===== 18125bd18 FUN_18125bd18 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18125bd18(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if (_DAT_1813313e0 == -1) {
LAB_18125bdc3:
    uVar1 = FUN_18125be0c(param_1,0);
    (*DAT_181262518)(uVar1,param_2,param_3,param_4,param_5,param_6);
  }
  else {
    if (_DAT_1813313e0 == 0) {
      lVar2 = FUN_18125ba88(0x12,&DAT_181264180,&DAT_181264178,&DAT_181264180);
      if (lVar2 == 0) goto LAB_18125bdc3;
    }
    FUN_1812609b0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  }
  return;
}



/* ===== 18125be0c FUN_18125be0c ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18125be0c(undefined8 param_1,undefined4 param_2)

{
  longlong lVar1;
  
  if (_DAT_1813313f0 == -1) {
LAB_18125be5b:
    FUN_18125e7d4(param_1);
  }
  else {
    if (_DAT_1813313f0 == 0) {
      lVar1 = FUN_18125ba88(0x14,&DAT_181264198,&DAT_181264190,&DAT_181264198);
      if (lVar1 == 0) goto LAB_18125be5b;
    }
    FUN_1812609b0(param_1,param_2);
  }
  return;
}



/* ===== 18125bee4 __acrt_uninitialize_winapi_thunks ===== */

/* Library Function - Single Match
    __acrt_uninitialize_winapi_thunks
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined8 __acrt_uninitialize_winapi_thunks(char param_1)

{
  longlong *plVar1;
  
  if (param_1 == '\0') {
    plVar1 = (longlong *)&DAT_18132f460;
    do {
      if (*plVar1 != 0) {
        if (*plVar1 != -1) {
          (*DAT_181262450)();
        }
        *plVar1 = 0;
      }
      plVar1 = plVar1 + 1;
    } while (plVar1 != (longlong *)&DAT_18132f518);
  }
  return 1;
}



/* ===== 18125bf40 FUN_18125bf40 ===== */

void FUN_18125bf40(void)

{
  (*DAT_181262520)();
  return;
}



/* ===== 18125c098 FUN_18125c098 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18125c098(void)

{
  byte *pbVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  uint uVar7;
  longlong lVar8;
  
  uVar7 = 0;
  lVar8 = 0;
  do {
    uVar5 = (ulonglong)(uVar7 & 0x3f);
    lVar2 = *(longlong *)(&DAT_18132f520 + ((longlong)(int)uVar7 >> 6) * 8);
    if (*(longlong *)(lVar2 + 0x28 + uVar5 * 0x48) + 2U < 2) {
      *(undefined1 *)(lVar2 + 0x38 + uVar5 * 0x48) = 0x81;
      if (uVar7 == 0) {
        uVar6 = 0xfffffff6;
      }
      else if (uVar7 == 1) {
        uVar6 = 0xfffffff5;
      }
      else {
        uVar6 = 0xfffffff4;
      }
      lVar4 = (*DAT_181262528)(uVar6);
      if (1 < lVar4 + 1U) {
        uVar3 = (*DAT_181262530)(lVar4);
        if (uVar3 != 0) {
          *(longlong *)(lVar2 + 0x28 + uVar5 * 0x48) = lVar4;
          if ((uVar3 & 0xff) == 2) {
            pbVar1 = (byte *)(lVar2 + 0x38 + uVar5 * 0x48);
            *pbVar1 = *pbVar1 | 0x40;
          }
          else if ((uVar3 & 0xff) == 3) {
            pbVar1 = (byte *)(lVar2 + 0x38 + uVar5 * 0x48);
            *pbVar1 = *pbVar1 | 8;
          }
          goto LAB_18125c176;
        }
      }
      pbVar1 = (byte *)(lVar2 + 0x38 + uVar5 * 0x48);
      *pbVar1 = *pbVar1 | 0x40;
      *(undefined8 *)(lVar2 + 0x28 + uVar5 * 0x48) = 0xfffffffffffffffe;
      if (_DAT_18132f968 != 0) {
        *(undefined4 *)(*(longlong *)(lVar8 + _DAT_18132f968) + 0x18) = 0xfffffffe;
      }
    }
    else {
      pbVar1 = (byte *)(lVar2 + 0x38 + uVar5 * 0x48);
      *pbVar1 = *pbVar1 | 0x80;
    }
LAB_18125c176:
    uVar7 = uVar7 + 1;
    lVar8 = lVar8 + 8;
    if (uVar7 == 3) {
      return;
    }
  } while( true );
}



/* ===== 18125c21c FUN_18125c21c ===== */

undefined8 FUN_18125c21c(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  
  if (param_1 != param_2) {
    plVar3 = param_1;
    do {
      if ((*plVar3 != 0) && (cVar2 = FUN_1812609b0(), cVar2 == '\0')) break;
      plVar3 = plVar3 + 2;
    } while (plVar3 != param_2);
    if (plVar3 != param_2) {
      if (plVar3 != param_1) {
        plVar3 = plVar3 + -1;
        do {
          if ((plVar3[-1] != 0) && (*plVar3 != 0)) {
            FUN_1812609b0(0);
          }
          plVar1 = plVar3 + -1;
          plVar3 = plVar3 + -2;
        } while (plVar1 != param_1);
      }
      return 0;
    }
  }
  return 1;
}



/* ===== 18125c29c FUN_18125c29c ===== */

undefined8 FUN_18125c29c(longlong param_1,longlong param_2)

{
  for (; param_1 != param_2; param_2 = param_2 + -0x10) {
    if (*(longlong *)(param_2 + -8) != 0) {
      FUN_1812609b0(0);
    }
  }
  return 1;
}



/* ===== 18125c2e0 FUN_18125c2e0 ===== */

bool FUN_18125c2e0(undefined8 param_1)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  
  lVar2 = FUN_18125c330();
  bVar3 = false;
  if (lVar2 != 0) {
    iVar1 = FUN_1812609b0(param_1);
    bVar3 = iVar1 != 0;
  }
  return bVar3;
}



/* ===== 18125c330 FUN_18125c330 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_18125c330(void)

{
  byte bVar1;
  ulonglong uVar2;
  
  __acrt_lock(0);
  bVar1 = (byte)DAT_18126c390 & 0x3f;
  uVar2 = _DAT_18132f928 ^ DAT_18126c390;
  __acrt_unlock(0);
  return uVar2 >> bVar1 | uVar2 << 0x40 - bVar1;
}



/* ===== 18125c370 _set_new_handler ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    _set_new_handler
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

ulonglong _set_new_handler(ulonglong param_1)

{
  byte bVar1;
  byte bVar2;
  ulonglong uVar3;
  
  __acrt_lock(0);
  bVar2 = (byte)DAT_18126c390 & 0x3f;
  uVar3 = DAT_18126c390 ^ _DAT_18132f928;
  bVar1 = 0x40 - bVar2 & 0x3f;
  _DAT_18132f928 = (param_1 >> bVar1 | param_1 << 0x40 - bVar1) ^ DAT_18126c390;
  __acrt_unlock(0);
  return uVar3 >> bVar2 | uVar3 << 0x40 - bVar2;
}



/* ===== 18125c3dc FUN_18125c3dc ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_18125c3dc(undefined8 param_1,undefined4 *param_2,undefined8 param_3,
                       undefined4 *param_4)

{
  byte bVar1;
  ulonglong uVar2;
  
  __acrt_lock(*param_2);
  bVar1 = (byte)DAT_18126c390 & 0x3f;
  uVar2 = _DAT_18132f940 ^ DAT_18126c390;
  __acrt_unlock(*param_4);
  return uVar2 >> bVar1 | uVar2 << 0x40 - bVar1;
}



/* ===== 18125c424 __acrt_get_sigabrt_handler ===== */

/* Library Function - Single Match
    __acrt_get_sigabrt_handler
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_get_sigabrt_handler(void)

{
  undefined1 local_res8 [8];
  undefined4 local_res10 [2];
  undefined4 local_res18 [4];
  
  local_res10[0] = 3;
  local_res18[0] = 3;
  FUN_18125c3dc(local_res8,local_res18,local_res8,local_res10);
  return;
}



/* ===== 18125c474 FUN_18125c474 ===== */

undefined8 FUN_18125c474(uint param_1)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  byte bVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong *puVar11;
  undefined4 local_res10;
  
  plVar3 = (longlong *)0x0;
  local_res10 = 0;
  bVar2 = true;
  if (param_1 == 2) {
LAB_18125c4cb:
    if (param_1 == 2) {
      puVar11 = (ulonglong *)0x18132f930;
    }
    else if (param_1 == 6) {
LAB_18125c56d:
      puVar11 = (ulonglong *)&DAT_18132f940;
    }
    else if (param_1 == 0xf) {
      puVar11 = (ulonglong *)0x18132f948;
    }
    else if (param_1 == 0x15) {
      puVar11 = (ulonglong *)0x18132f938;
    }
    else {
      if (param_1 == 0x16) goto LAB_18125c56d;
      puVar11 = (ulonglong *)0x0;
    }
  }
  else {
    if (param_1 != 4) {
      if (param_1 != 6) {
        if ((param_1 == 8) || (param_1 == 0xb)) goto LAB_18125c4fb;
        if ((param_1 != 0xf) && ((param_1 != 0x15 && (param_1 != 0x16)))) goto LAB_18125c54d;
      }
      goto LAB_18125c4cb;
    }
LAB_18125c4fb:
    plVar3 = (longlong *)FUN_181259560();
    if (plVar3 == (longlong *)0x0) {
      return 0xffffffff;
    }
    lVar6 = *plVar3;
    lVar5 = u_api_ms_win_rtcore_ntuser_window__181263720._32_8_ * 0x10 + lVar6;
    for (; lVar6 != lVar5; lVar6 = lVar6 + 0x10) {
      if (*(uint *)(lVar6 + 4) == param_1) goto LAB_18125c548;
    }
    lVar6 = 0;
LAB_18125c548:
    if (lVar6 == 0) {
LAB_18125c54d:
      puVar4 = (undefined4 *)FUN_181259cfc();
      *puVar4 = 0x16;
      FUN_181259b54();
      return 0xffffffff;
    }
    puVar11 = (ulonglong *)(lVar6 + 8);
    bVar2 = false;
  }
  lVar6 = 0;
  if (bVar2) {
    __acrt_lock(3);
  }
  uVar10 = *puVar11;
  if (bVar2) {
    bVar8 = (byte)DAT_18126c390 & 0x3f;
    uVar10 = (uVar10 ^ DAT_18126c390) >> bVar8 | (uVar10 ^ DAT_18126c390) << 0x40 - bVar8;
  }
  if (uVar10 == 1) goto LAB_18125c656;
  if (uVar10 == 0) {
    if (bVar2) {
      __acrt_unlock(3);
    }
    FUN_1812584e8(3);
    pcVar1 = (code *)swi(3);
    uVar7 = (*pcVar1)();
    return uVar7;
  }
  if ((param_1 < 0xc) && ((0x910U >> (param_1 & 0x1f) & 1) != 0)) {
    lVar6 = plVar3[1];
    plVar3[1] = 0;
    if (param_1 == 8) {
      lVar5 = FUN_181259500();
      local_res10 = *(undefined4 *)(lVar5 + 0x10);
      lVar5 = FUN_181259500();
      *(undefined4 *)(lVar5 + 0x10) = 0x8c;
      goto LAB_18125c60e;
    }
  }
  else {
LAB_18125c60e:
    if (param_1 == 8) {
      lVar5 = u_api_ms_win_rtcore_ntuser_window__181263720._40_8_ * 0x10 + *plVar3;
      lVar9 = u_api_ms_win_rtcore_ntuser_window__181263720._48_8_ * 0x10 + lVar5;
      for (; lVar5 != lVar9; lVar5 = lVar5 + 0x10) {
        *(undefined8 *)(lVar5 + 8) = 0;
      }
      goto LAB_18125c656;
    }
  }
  *puVar11 = DAT_18126c390;
LAB_18125c656:
  if (bVar2) {
    __acrt_unlock(3);
  }
  if (uVar10 != 1) {
    if (param_1 == 8) {
      lVar5 = FUN_181259500();
      FUN_1812609b0(8,*(undefined4 *)(lVar5 + 0x10));
    }
    else {
      FUN_1812609b0(param_1);
    }
    if (((param_1 < 0xc) && ((0x910U >> (param_1 & 0x1f) & 1) != 0)) &&
       (plVar3[1] = lVar6, param_1 == 8)) {
      lVar6 = FUN_181259500();
      *(undefined4 *)(lVar6 + 0x10) = local_res10;
    }
  }
  return 0;
}



/* ===== 18125c6d8 FUN_18125c6d8 ===== */

void FUN_18125c6d8(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  uint uVar1;
  int iVar2;
  
  FUN_18125cb9c(*param_2);
  if ((*(longlong *)*param_3 != 0) &&
     (uVar1 = *(uint *)(*(longlong *)*param_3 + 0x14), (uVar1 >> 0xd & 1) != 0)) {
    if (((((byte)uVar1 & 3) == 2) && ((uVar1 & 0xc0) != 0)) || ((uVar1 >> 0xb & 1) != 0)) {
      if ((*(char *)param_3[2] != '\0') || ((*(uint *)(*(longlong *)*param_3 + 0x14) >> 1 & 1) != 0)
         ) {
        iVar2 = FUN_18125c944(*(undefined8 *)*param_3);
        if (iVar2 == -1) {
          *(undefined4 *)param_3[3] = 0xffffffff;
        }
        else {
          *(int *)param_3[1] = *(int *)param_3[1] + 1;
        }
      }
    }
    else {
      *(int *)param_3[1] = *(int *)param_3[1] + 1;
    }
  }
  FUN_18125cba8(*param_4);
  return;
}



/* ===== 18125c774 FUN_18125c774 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18125c774(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,undefined4 *param_4)

{
  longlong *plVar1;
  uint uVar2;
  longlong *plVar3;
  undefined1 local_res10 [16];
  undefined4 *local_res20;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong *local_40;
  longlong *local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_res20 = param_4;
  __acrt_lock(*param_2);
  plVar1 = _DAT_18132f968 + _DAT_18132f960;
  for (plVar3 = _DAT_18132f968; local_40 = plVar3, plVar3 != plVar1; plVar3 = plVar3 + 1) {
    local_58 = *plVar3;
    if ((local_58 != 0) && (uVar2 = *(uint *)(local_58 + 0x14), (uVar2 >> 0xd & 1) != 0)) {
      if (((((byte)uVar2 & 3) == 2) && ((uVar2 & 0xc0) != 0)) || ((uVar2 >> 0xb & 1) != 0)) {
        local_20 = param_3[2];
        local_28 = param_3[1];
        local_30 = *param_3;
        local_38 = &local_58;
        local_50 = local_58;
        local_48 = local_58;
        FUN_18125c6d8(local_res10,&local_48,&local_38,&local_50);
      }
      else {
        *(int *)*param_3 = *(int *)*param_3 + 1;
      }
    }
  }
  __acrt_unlock(*param_4);
  return;
}



/* ===== 18125c858 common_flush_all ===== */

/* Library Function - Single Match
    int __cdecl common_flush_all(bool)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl common_flush_all(bool param_1)

{
  char local_res8 [8];
  undefined1 local_res10 [8];
  int local_res18 [2];
  int local_res20 [2];
  undefined4 local_28;
  undefined4 local_24;
  int *local_20;
  char *local_18;
  int *local_10;
  
  local_res20[0] = 0;
  local_20 = local_res20;
  local_res18[0] = 0;
  local_18 = local_res8;
  local_10 = local_res18;
  local_28 = 8;
  local_24 = 8;
  local_res8[0] = param_1;
  FUN_18125c774(local_res10,&local_24,&local_20,&local_28);
  if (local_res8[0] != '\0') {
    local_res18[0] = local_res20[0];
  }
  return local_res18[0];
}



/* ===== 18125c8b8 FUN_18125c8b8 ===== */

undefined8 FUN_18125c8b8(int *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  if ((((byte)param_1[5] & 3) == 2) && ((param_1[5] & 0xc0U) != 0)) {
    iVar4 = *param_1 - param_1[2];
    param_1[4] = 0;
    uVar1 = *(undefined8 *)(param_1 + 2);
    *(undefined8 *)param_1 = uVar1;
    if (0 < iVar4) {
      uVar2 = FUN_18125d268(param_1);
      iVar3 = FUN_18125f4ec(uVar2,uVar1,iVar4,param_2);
      if (iVar4 != iVar3) {
        LOCK();
        param_1[5] = param_1[5] | 0x10;
        UNLOCK();
        return 0xffffffff;
      }
      if (((uint)param_1[5] >> 2 & 1) != 0) {
        LOCK();
        param_1[5] = param_1[5] & 0xfffffffd;
        UNLOCK();
      }
    }
  }
  return 0;
}



/* ===== 18125c944 FUN_18125c944 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_18125c944(undefined4 param_1)

{
  int iVar1;
  longlong lVar2;
  longlong in_RCX;
  longlong local_48 [2];
  undefined1 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  char local_20;
  undefined4 local_1c;
  char local_18;
  undefined4 local_14;
  char local_10;
  
  local_48[0] = 0;
  local_20 = _DAT_18132f990 == 0;
  local_38 = 0;
  local_18 = '\0';
  local_10 = '\0';
  if ((bool)local_20) {
    local_30 = _DAT_18126cac8;
    uStack_2c = uRam000000018126cacc;
    uStack_28 = _DAT_18126cad0;
    uStack_24 = uRam000000018126cad4;
    param_1 = _DAT_18126cac8;
  }
  if (in_RCX == 0) {
    iVar1 = common_flush_all(false);
    goto LAB_18125c9c9;
  }
  iVar1 = FUN_18125c8b8(param_1,local_48);
  if (iVar1 == 0) {
    if ((*(uint *)(in_RCX + 0x14) >> 0xb & 1) != 0) {
      iVar1 = FUN_18125d268(in_RCX);
      iVar1 = _commit(iVar1);
      if (iVar1 != 0) goto LAB_18125c9a4;
    }
    iVar1 = 0;
  }
  else {
LAB_18125c9a4:
    iVar1 = -1;
  }
LAB_18125c9c9:
  if (local_20 == '\x02') {
    *(uint *)(local_48[0] + 0x3a8) = *(uint *)(local_48[0] + 0x3a8) & 0xfffffffd;
  }
  if (local_18 != '\0') {
    lVar2 = FUN_181258f80(local_48);
    *(undefined4 *)(lVar2 + 0x20) = local_1c;
  }
  if (local_10 != '\0') {
    lVar2 = FUN_181258f80(local_48);
    *(undefined4 *)(lVar2 + 0x24) = local_14;
  }
  return iVar1;
}



/* ===== 18125ca18 common_flush_all ===== */

int __cdecl common_flush_all(bool param_1)

{
  int iVar1;
  
  iVar1 = common_flush_all(true);
  return iVar1;
}



/* ===== 18125cb9c FUN_18125cb9c ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18125cb9c(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00018125cba0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*_DAT_1812623f8)(param_1 + 0x30);
  return;
}



/* ===== 18125cba8 FUN_18125cba8 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18125cba8(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00018125cbac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*_DAT_181262400)(param_1 + 0x30);
  return;
}



/* ===== 18125cbc0 _malloc_base ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    _malloc_base
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

longlong _malloc_base(ulonglong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined4 *puVar3;
  
  if (param_1 < 0xffffffffffffffe1) {
    if (param_1 == 0) {
      param_1 = 1;
    }
    do {
      lVar2 = (*DAT_181262490)(_DAT_18132f518,0,param_1);
      if (lVar2 != 0) {
        return lVar2;
      }
      iVar1 = FUN_18125d750();
    } while ((iVar1 != 0) && (iVar1 = FUN_18125c2e0(param_1), iVar1 != 0));
  }
  puVar3 = (undefined4 *)FUN_181259cfc();
  *puVar3 = 0xc;
  return 0;
}



/* ===== 18125cc20 __acrt_update_locale_info ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __acrt_update_locale_info
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_update_locale_info(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  if ((*param_2 != _DAT_18132f958) && ((DAT_18126cbe8 & *(uint *)(param_1 + 0x3a8)) == 0)) {
    lVar1 = __acrt_update_thread_locale_data();
    *param_2 = lVar1;
  }
  return;
}



/* ===== 18125cc54 FUN_18125cc54 ===== */

void FUN_18125cc54(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  
  if ((*param_2 != *(longlong *)(&DAT_18132f958 + param_3 * 8)) &&
     ((DAT_18126cbe8 & *(uint *)(param_1 + 0x3a8)) == 0)) {
    lVar1 = __acrt_update_thread_locale_data();
    *param_2 = lVar1;
  }
  return;
}



/* ===== 18125cc8c FUN_18125cc8c ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18125cc8c(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  if ((*param_2 != _DAT_18132f418) && ((DAT_18126cbe8 & *(uint *)(param_1 + 0x3a8)) == 0)) {
    lVar1 = FUN_18125b3c4();
    *param_2 = lVar1;
  }
  return;
}



/* ===== 18125ccc0 FUN_18125ccc0 ===== */

void FUN_18125ccc0(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  
  if ((*param_2 != *(longlong *)(&DAT_18132f418 + param_3 * 8)) &&
     ((DAT_18126cbe8 & *(uint *)(param_1 + 0x3a8)) == 0)) {
    lVar1 = FUN_18125b3c4();
    *param_2 = lVar1;
  }
  return;
}



/* ===== 18125ccf8 FUN_18125ccf8 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_18125ccf8(ushort *param_1,byte *param_2,ulonglong param_3,longlong param_4)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  
  if ((param_2 == (byte *)0x0) || (param_3 == 0)) {
    _DAT_18132f980 = 0;
  }
  else {
    if (*param_2 != 0) {
      if (*(char *)(param_4 + 0x28) == '\0') {
        FUN_181258ff0(param_4);
      }
      plVar2 = *(longlong **)(param_4 + 0x18);
      iVar3 = *(int *)((longlong)plVar2 + 0xc);
      if (iVar3 == 0xfde9) {
        iVar3 = FUN_18125d068(param_1,param_2,param_3,&DAT_18132f980,param_4);
        if (iVar3 < 0) {
          return -1;
        }
        return iVar3;
      }
      if (plVar2[0x27] == 0) {
        if (param_1 != (ushort *)0x0) {
          *param_1 = (ushort)*param_2;
        }
        return 1;
      }
      if (*(short *)(*plVar2 + (ulonglong)*param_2 * 2) < 0) {
        iVar1 = (int)plVar2[1];
        if ((((1 < iVar1) && (iVar1 <= (int)param_3)) &&
            (iVar3 = FUN_18125b758(iVar3,9,param_2,iVar1,param_1,param_1 != (ushort *)0x0),
            iVar3 != 0)) ||
           (((ulonglong)(longlong)*(int *)(*(longlong *)(param_4 + 0x18) + 8) <= param_3 &&
            (param_2[1] != 0)))) {
          return *(int *)(*(longlong *)(param_4 + 0x18) + 8);
        }
      }
      else {
        iVar3 = FUN_18125b758(iVar3,9,param_2,1,param_1,param_1 != (ushort *)0x0);
        if (iVar3 != 0) {
          return 1;
        }
      }
      *(undefined1 *)(param_4 + 0x30) = 1;
      *(undefined4 *)(param_4 + 0x2c) = 0x2a;
      return -1;
    }
    if (param_1 != (ushort *)0x0) {
      *param_1 = 0;
    }
  }
  return 0;
}



/* ===== 18125ce70 FUN_18125ce70 ===== */

ulonglong FUN_18125ce70(byte *param_1)

{
  byte bVar1;
  ulonglong uVar2;
  
  bVar1 = *param_1;
  if (-1 < (char)bVar1) {
    return (ulonglong)(bVar1 != 0);
  }
  if ((bVar1 & 0xe0) == 0xc0) {
    return 2;
  }
  if ((bVar1 & 0xf0) == 0xe0) {
    return 3;
  }
  uVar2 = 0xffffffff;
  if ((bVar1 & 0xf8) == 0xf0) {
    uVar2 = 4;
  }
  return uVar2;
}



/* ===== 18125cea8 FUN_18125cea8 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_18125cea8(ulonglong param_1,byte *param_2,ulonglong param_3,uint *param_4,
                       undefined8 param_5)

{
  byte bVar1;
  uint uVar2;
  ulonglong uVar3;
  uint *puVar4;
  byte *pbVar5;
  byte bVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint *puVar10;
  undefined1 auStack_78 [24];
  uint auStack_60 [6];
  ulonglong local_48;
  
  local_48 = DAT_18126c390 ^ (ulonglong)auStack_78;
  puVar4 = (uint *)0x18132f988;
  if (param_4 != (uint *)0x0) {
    puVar4 = param_4;
  }
  pbVar5 = &DAT_181262fa2;
  uVar3 = 1;
  if (param_2 != (byte *)0x0) {
    pbVar5 = param_2;
    uVar3 = param_3;
  }
  puVar10 = (uint *)(-(ulonglong)(param_2 != (byte *)0x0) & param_1);
  if (uVar3 == 0) {
LAB_18125cf0a:
    uVar3 = 0xfffffffffffffffe;
  }
  else {
    if (*(short *)((longlong)puVar4 + 6) == 0) {
      uVar2 = FUN_18125ce70(pbVar5);
      uVar7 = (ulonglong)(int)uVar2;
      bVar1 = *pbVar5;
      pbVar5 = pbVar5 + 1;
      if (uVar2 < 2) {
        if (puVar10 != (uint *)0x0) {
          *puVar10 = (uint)bVar1;
        }
        return uVar7;
      }
      if (uVar2 - 2 < 3) {
        bVar6 = (byte)uVar2;
        uVar2 = (1 << (7 - bVar6 & 0x1f)) - 1U & (uint)bVar1;
LAB_18125cf95:
        uVar9 = (ulonglong)bVar6;
        uVar8 = uVar9;
        if (uVar3 <= uVar9) {
          uVar8 = uVar3;
        }
        while ((ulonglong)((longlong)pbVar5 - (longlong)param_2) < uVar8) {
          bVar1 = *pbVar5;
          pbVar5 = pbVar5 + 1;
          if ((bVar1 & 0xc0) != 0x80) goto LAB_18125d03e;
          uVar2 = bVar1 & 0x3f | uVar2 << 6;
        }
        if (uVar8 < uVar9) {
          *(ushort *)(puVar4 + 1) = (ushort)uVar7 & 0xff;
          *(ushort *)((longlong)puVar4 + 6) = (ushort)(byte)(bVar6 - (char)uVar8);
          *puVar4 = uVar2;
          goto LAB_18125cf0a;
        }
        if ((0x7ff < uVar2 - 0xd800) && (uVar2 < 0x110000)) {
          auStack_60[2] = 0x80;
          auStack_60[3] = 0x800;
          auStack_60[4] = 0x10000;
          if (auStack_60[uVar7 & 0xff] <= uVar2) {
            if (puVar10 != (uint *)0x0) {
              *puVar10 = uVar2;
            }
            uVar3 = FUN_18125fa94(-(ulonglong)(uVar2 != 0) & uVar9,puVar4);
            return uVar3;
          }
        }
      }
    }
    else {
      bVar1 = (byte)puVar4[1];
      uVar7 = (ulonglong)bVar1;
      uVar2 = *puVar4;
      bVar6 = *(byte *)((longlong)puVar4 + 6);
      if ((((byte)(bVar1 - 2) < 3) && (bVar6 != 0)) && (bVar6 < bVar1)) goto LAB_18125cf95;
    }
LAB_18125d03e:
    uVar3 = FUN_18125fa9c(puVar4,param_5);
  }
  return uVar3;
}



/* ===== 18125d068 FUN_18125d068 ===== */

void FUN_18125d068(undefined2 *param_1)

{
  ulonglong uVar1;
  uint local_18 [4];
  
  local_18[0] = 0;
  uVar1 = FUN_18125cea8(local_18);
  if (uVar1 < 5) {
    if (0xffff < local_18[0]) {
      local_18[0] = 0xfffd;
    }
    if (param_1 != (undefined2 *)0x0) {
      *param_1 = (short)local_18[0];
    }
  }
  return;
}



/* ===== 18125d0b0 FUN_18125d0b0 ===== */

longlong FUN_18125d0b0(ushort *param_1,undefined8 *param_2,ulonglong param_3,undefined8 param_4,
                      longlong param_5)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ushort *puVar4;
  char *pcVar5;
  char cVar6;
  uint local_res8 [2];
  
  pcVar5 = (char *)*param_2;
  puVar4 = param_1;
  if (param_1 == (ushort *)0x0) {
    lVar1 = 0;
    while( true ) {
      if (*pcVar5 == '\0') {
        cVar6 = '\x01';
      }
      else if (pcVar5[1] == '\0') {
        cVar6 = '\x02';
      }
      else {
        cVar6 = (pcVar5[2] != '\0') + '\x03';
      }
      lVar2 = FUN_18125cea8(0,pcVar5,cVar6,param_4,param_5);
      if (lVar2 == -1) {
        *(undefined1 *)(param_5 + 0x30) = 1;
        *(undefined4 *)(param_5 + 0x2c) = 0x2a;
        return -1;
      }
      if (lVar2 == 0) break;
      pcVar5 = pcVar5 + lVar2;
      lVar3 = lVar1 + 1;
      if (lVar2 != 4) {
        lVar3 = lVar1;
      }
      lVar1 = lVar3 + 1;
    }
  }
  else {
    for (; param_3 != 0; param_3 = param_3 - 1) {
      if (*pcVar5 == '\0') {
        cVar6 = '\x01';
      }
      else if (pcVar5[1] == '\0') {
        cVar6 = '\x02';
      }
      else {
        cVar6 = (pcVar5[2] != '\0') + '\x03';
      }
      local_res8[0] = 0;
      lVar1 = FUN_18125cea8(local_res8,pcVar5,cVar6,param_4,param_5);
      if (lVar1 == -1) {
        *param_2 = pcVar5;
        *(undefined1 *)(param_5 + 0x30) = 1;
        *(undefined4 *)(param_5 + 0x2c) = 0x2a;
        return -1;
      }
      if (lVar1 == 0) {
        pcVar5 = (char *)0x0;
        *puVar4 = 0;
        break;
      }
      if (0xffff < local_res8[0]) {
        if (param_3 < 2) break;
        param_3 = param_3 - 1;
        *puVar4 = (ushort)(local_res8[0] - 0x10000 >> 10) | 0xd800;
        puVar4 = puVar4 + 1;
        local_res8[0] = (uint)((ushort)(local_res8[0] - 0x10000) & 0x3ff | 0xdc00);
      }
      *puVar4 = (ushort)local_res8[0];
      pcVar5 = pcVar5 + lVar1;
      puVar4 = puVar4 + 1;
    }
    *param_2 = pcVar5;
    lVar1 = (longlong)puVar4 - (longlong)param_1 >> 1;
  }
  return lVar1;
}



/* ===== 18125d268 FUN_18125d268 ===== */

undefined4 FUN_18125d268(longlong param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  if (param_1 == 0) {
    puVar2 = (undefined4 *)FUN_181259cfc();
    *puVar2 = 0x16;
    FUN_181259b54();
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x18);
  }
  return uVar1;
}



/* ===== 18125d300 FUN_18125d300 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_18125d300(void)

{
  undefined4 uVar1;
  
  uVar1 = _DAT_18132f990;
  LOCK();
  _DAT_18132f990 = 1;
  UNLOCK();
  return uVar1;
}



/* ===== 18125d33c __acrt_add_locale_ref ===== */

/* Library Function - Single Match
    __acrt_add_locale_ref
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_add_locale_ref(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  LOCK();
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  UNLOCK();
  piVar1 = *(int **)(param_1 + 0xe0);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  piVar1 = *(int **)(param_1 + 0xf0);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  piVar1 = *(int **)(param_1 + 0xe8);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  piVar1 = *(int **)(param_1 + 0x100);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  puVar2 = (undefined8 *)(param_1 + 0x38);
  lVar3 = 6;
  do {
    if (((undefined *)puVar2[-2] != &DAT_18126cad8) &&
       (piVar1 = (int *)*puVar2, piVar1 != (int *)0x0)) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    if ((puVar2[-3] != 0) && (piVar1 = (int *)puVar2[-1], piVar1 != (int *)0x0)) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    puVar2 = puVar2 + 4;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  __acrt_locale_add_lc_time_reference(*(undefined8 *)(param_1 + 0x120));
  return;
}



/* ===== 18125d3c8 __acrt_free_locale ===== */

/* Library Function - Single Match
    __acrt_free_locale
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_free_locale(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if ((((*(undefined8 **)(param_1 + 0xf8) != (undefined8 *)0x0) &&
       (*(undefined8 **)(param_1 + 0xf8) != &DAT_18126cbf0)) &&
      (*(int **)(param_1 + 0xe0) != (int *)0x0)) && (**(int **)(param_1 + 0xe0) == 0)) {
    if ((*(int **)(param_1 + 0xf0) != (int *)0x0) && (**(int **)(param_1 + 0xf0) == 0)) {
      FUN_181259da0();
      __acrt_locale_free_monetary(*(undefined8 *)(param_1 + 0xf8));
    }
    if ((*(int **)(param_1 + 0xe8) != (int *)0x0) && (**(int **)(param_1 + 0xe8) == 0)) {
      FUN_181259da0();
      __acrt_locale_free_numeric(*(undefined8 *)(param_1 + 0xf8));
    }
    FUN_181259da0(*(undefined8 *)(param_1 + 0xe0));
    FUN_181259da0(*(undefined8 *)(param_1 + 0xf8));
  }
  if ((*(int **)(param_1 + 0x100) != (int *)0x0) && (**(int **)(param_1 + 0x100) == 0)) {
    FUN_181259da0(*(longlong *)(param_1 + 0x108) + -0xfe);
    FUN_181259da0(*(longlong *)(param_1 + 0x110) + -0x80);
    FUN_181259da0(*(longlong *)(param_1 + 0x118) + -0x80);
    FUN_181259da0(*(undefined8 *)(param_1 + 0x100));
  }
  __acrt_locale_free_lc_time_if_unreferenced(*(undefined8 *)(param_1 + 0x120));
  puVar2 = (undefined8 *)(param_1 + 0x128);
  lVar1 = 6;
  puVar3 = (undefined8 *)(param_1 + 0x38);
  do {
    if ((((undefined *)puVar3[-2] != &DAT_18126cad8) && ((int *)*puVar3 != (int *)0x0)) &&
       (*(int *)*puVar3 == 0)) {
      FUN_181259da0();
      FUN_181259da0(*puVar2);
    }
    if (((puVar3[-3] != 0) && ((int *)puVar3[-1] != (int *)0x0)) && (*(int *)puVar3[-1] == 0)) {
      FUN_181259da0();
    }
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 4;
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  FUN_181259da0(param_1);
  return;
}



/* ===== 18125d540 __acrt_locale_add_lc_time_reference ===== */

/* Library Function - Single Match
    __acrt_locale_add_lc_time_reference
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

int __acrt_locale_add_lc_time_reference(undefined *param_1)

{
  int *piVar1;
  int iVar2;
  
  if ((param_1 == (undefined *)0x0) || (param_1 == &DAT_1812641e0)) {
    return 0x7fffffff;
  }
  LOCK();
  piVar1 = (int *)(param_1 + 0x15c);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return iVar2 + 1;
}



/* ===== 18125d568 __acrt_locale_free_lc_time_if_unreferenced ===== */

/* Library Function - Single Match
    __acrt_locale_free_lc_time_if_unreferenced
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_locale_free_lc_time_if_unreferenced(undefined *param_1)

{
  if (((param_1 != (undefined *)0x0) && (param_1 != &DAT_1812641e0)) &&
     (*(int *)(param_1 + 0x15c) == 0)) {
    __acrt_locale_free_time();
    FUN_181259da0(param_1);
  }
  return;
}



/* ===== 18125d5a0 __acrt_locale_release_lc_time_reference ===== */

/* Library Function - Single Match
    __acrt_locale_release_lc_time_reference
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

int __acrt_locale_release_lc_time_reference(undefined *param_1)

{
  int *piVar1;
  int iVar2;
  
  if ((param_1 == (undefined *)0x0) || (param_1 == &DAT_1812641e0)) {
    return 0x7fffffff;
  }
  LOCK();
  piVar1 = (int *)(param_1 + 0x15c);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  return iVar2 + -1;
}



/* ===== 18125d5c8 __acrt_release_locale_ref ===== */

/* Library Function - Single Match
    __acrt_release_locale_ref
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_release_locale_ref(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  if (param_1 != 0) {
    LOCK();
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
    UNLOCK();
    piVar1 = *(int **)(param_1 + 0xe0);
    if (piVar1 != (int *)0x0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
      UNLOCK();
    }
    piVar1 = *(int **)(param_1 + 0xf0);
    if (piVar1 != (int *)0x0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
      UNLOCK();
    }
    piVar1 = *(int **)(param_1 + 0xe8);
    if (piVar1 != (int *)0x0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
      UNLOCK();
    }
    piVar1 = *(int **)(param_1 + 0x100);
    if (piVar1 != (int *)0x0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
      UNLOCK();
    }
    puVar2 = (undefined8 *)(param_1 + 0x38);
    lVar3 = 6;
    do {
      if (((undefined *)puVar2[-2] != &DAT_18126cad8) &&
         (piVar1 = (int *)*puVar2, piVar1 != (int *)0x0)) {
        LOCK();
        *piVar1 = *piVar1 + -1;
        UNLOCK();
      }
      if ((puVar2[-3] != 0) && (piVar1 = (int *)puVar2[-1], piVar1 != (int *)0x0)) {
        LOCK();
        *piVar1 = *piVar1 + -1;
        UNLOCK();
      }
      puVar2 = puVar2 + 4;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    __acrt_locale_release_lc_time_reference(*(undefined8 *)(param_1 + 0x120));
  }
  return;
}



/* ===== 18125d670 __acrt_update_thread_locale_data ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __acrt_update_thread_locale_data
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

longlong __acrt_update_thread_locale_data(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_181259500();
  if (((DAT_18126cbe8 & *(uint *)(lVar1 + 0x3a8)) == 0) ||
     (lVar2 = *(longlong *)(lVar1 + 0x90), lVar2 == 0)) {
    __acrt_lock(4);
    lVar2 = _updatetlocinfoEx_nolock((longlong *)(lVar1 + 0x90),_DAT_18132f958);
    __acrt_unlock(4);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
  return lVar2;
}



/* ===== 18125d6e0 _updatetlocinfoEx_nolock ===== */

/* Library Function - Single Match
    _updatetlocinfoEx_nolock
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined * _updatetlocinfoEx_nolock(undefined8 *param_1,undefined *param_2)

{
  undefined *puVar1;
  
  if ((param_2 == (undefined *)0x0) || (param_1 == (undefined8 *)0x0)) {
    param_2 = (undefined *)0x0;
  }
  else {
    puVar1 = (undefined *)*param_1;
    if (puVar1 != param_2) {
      *param_1 = param_2;
      __acrt_add_locale_ref(param_2);
      if (((puVar1 != (undefined *)0x0) &&
          (__acrt_release_locale_ref(puVar1), *(int *)(puVar1 + 0x10) == 0)) &&
         (puVar1 != &DAT_18126c970)) {
        __acrt_free_locale(puVar1);
      }
    }
  }
  return param_2;
}



/* ===== 18125d750 FUN_18125d750 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_18125d750(void)

{
  return _DAT_18132f994;
}



/* ===== 18125d760 FUN_18125d760 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_18125d760(uint param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  if (param_1 < 2) {
    LOCK();
    UNLOCK();
    uVar1 = param_1;
    uVar2 = _DAT_18132f994;
  }
  else {
    puVar3 = (undefined4 *)FUN_181259cfc();
    *puVar3 = 0x16;
    FUN_181259b54();
    uVar1 = _DAT_18132f994;
    uVar2 = 0xffffffff;
  }
  _DAT_18132f994 = uVar1;
  return uVar2;
}



/* ===== 18125d790 FUN_18125d790 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18125d790(undefined1 *param_1,ulonglong param_2,ulonglong param_3,code *param_4)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  longlong lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  ulonglong uVar9;
  undefined1 *puVar10;
  undefined1 auStack_468 [32];
  longlong local_448;
  undefined8 local_438 [62];
  undefined8 local_248 [62];
  ulonglong local_58;
  
  local_58 = DAT_18126c390 ^ (ulonglong)auStack_468;
  if ((((param_1 == (undefined1 *)0x0) && (param_2 != 0)) || (param_3 == 0)) ||
     (param_4 == (code *)0x0)) {
    puVar3 = (undefined4 *)FUN_181259cfc();
    *puVar3 = 0x16;
    FUN_181259b54();
  }
  else {
    FUN_18125fd64(param_4);
    FUN_181261130(local_438,0,0x1f0);
    FUN_181261130(local_248,0,0x1f0);
    if (1 < param_2) {
      local_448 = 0;
      puVar10 = param_1 + (param_2 - 1) * param_3;
LAB_18125d850:
      uVar9 = (ulonglong)((longlong)puVar10 - (longlong)param_1) / param_3 + 1;
      if (8 < uVar9) {
        lVar5 = (uVar9 >> 1) * param_3;
        puVar4 = param_1 + lVar5;
        iVar2 = (*param_4)(param_1,puVar4);
        if (0 < iVar2) {
          puVar6 = puVar4;
          uVar9 = param_3;
          if (param_1 != puVar4) {
            do {
              uVar1 = puVar6[-lVar5];
              puVar6[-lVar5] = *puVar6;
              *puVar6 = uVar1;
              uVar9 = uVar9 - 1;
              puVar6 = puVar6 + 1;
            } while (uVar9 != 0);
          }
        }
        iVar2 = (*param_4)(param_1,puVar10);
        if ((0 < iVar2) && (param_1 != puVar10)) {
          puVar6 = puVar10;
          uVar9 = param_3;
          do {
            uVar1 = puVar6[(longlong)param_1 - (longlong)puVar10];
            puVar6[(longlong)param_1 - (longlong)puVar10] = *puVar6;
            *puVar6 = uVar1;
            puVar6 = puVar6 + 1;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
        iVar2 = (*param_4)(puVar4);
        if ((0 < iVar2) && (puVar4 != puVar10)) {
          puVar6 = puVar10;
          uVar9 = param_3;
          do {
            uVar1 = puVar6[(longlong)puVar4 - (longlong)puVar10];
            puVar6[(longlong)puVar4 - (longlong)puVar10] = *puVar6;
            *puVar6 = uVar1;
            puVar6 = puVar6 + 1;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
        puVar6 = param_1;
        puVar8 = puVar10;
        do {
          if (puVar6 < puVar4) {
            do {
              puVar6 = puVar6 + param_3;
              if (puVar4 <= puVar6) goto LAB_18125d9e0;
              iVar2 = (*param_4)(puVar6);
            } while (iVar2 < 1);
          }
          else {
LAB_18125d9e0:
            do {
              puVar6 = puVar6 + param_3;
              if (puVar10 < puVar6) break;
              iVar2 = (*param_4)(puVar6);
            } while (iVar2 < 1);
          }
          do {
            puVar7 = puVar8;
            puVar8 = puVar7 + -param_3;
            if (puVar8 <= puVar4) break;
            iVar2 = (*param_4)(puVar8);
          } while (0 < iVar2);
          if (puVar8 < puVar6) goto LAB_18125da4a;
          if (puVar8 != puVar6) {
            puVar7 = puVar8;
            uVar9 = param_3;
            do {
              uVar1 = puVar7[(longlong)puVar6 - (longlong)puVar8];
              puVar7[(longlong)puVar6 - (longlong)puVar8] = *puVar7;
              *puVar7 = uVar1;
              puVar7 = puVar7 + 1;
              uVar9 = uVar9 - 1;
            } while (uVar9 != 0);
          }
          puVar7 = puVar6;
          if (puVar4 != puVar8) {
            puVar7 = puVar4;
          }
          puVar4 = puVar7;
        } while( true );
      }
      puVar6 = param_1;
      puVar4 = param_1;
      if (param_1 < puVar10) {
        do {
          while( true ) {
            puVar8 = puVar6;
            puVar4 = puVar4 + param_3;
            if (puVar10 < puVar4) break;
            iVar2 = (*param_4)(puVar4,puVar8);
            puVar6 = puVar4;
            if (iVar2 < 1) {
              puVar6 = puVar8;
            }
          }
          if (puVar8 != puVar10) {
            puVar4 = puVar10;
            uVar9 = param_3;
            do {
              uVar1 = puVar4[(longlong)puVar8 - (longlong)puVar10];
              puVar4[(longlong)puVar8 - (longlong)puVar10] = *puVar4;
              *puVar4 = uVar1;
              puVar4 = puVar4 + 1;
              uVar9 = uVar9 - 1;
            } while (uVar9 != 0);
          }
          puVar10 = puVar10 + -param_3;
          puVar6 = param_1;
          puVar4 = param_1;
        } while (param_1 < puVar10);
      }
      goto LAB_18125d8d3;
    }
  }
  return;
LAB_18125da4a:
  if (puVar4 < puVar7) {
    do {
      puVar7 = puVar7 + -param_3;
      if (puVar7 <= puVar4) goto LAB_18125da67;
      iVar2 = (*param_4)(puVar7);
    } while (iVar2 == 0);
  }
  else {
LAB_18125da67:
    do {
      puVar7 = puVar7 + -param_3;
      if (puVar7 <= param_1) break;
      iVar2 = (*param_4)(puVar7);
    } while (iVar2 == 0);
  }
  if ((longlong)puVar7 - (longlong)param_1 < (longlong)puVar10 - (longlong)puVar6) {
    if (puVar6 < puVar10) {
      local_438[local_448] = puVar6;
      local_248[local_448] = puVar10;
      local_448 = local_448 + 1;
    }
    if (param_1 < puVar7) {
      puVar10 = puVar7;
      goto LAB_18125d850;
    }
  }
  else {
    if (param_1 < puVar7) {
      local_438[local_448] = param_1;
      local_248[local_448] = puVar7;
      local_448 = local_448 + 1;
    }
    if (puVar6 < puVar10) {
      param_1 = puVar6;
      goto LAB_18125d850;
    }
  }
LAB_18125d8d3:
  local_448 = local_448 + -1;
  if (local_448 < 0) {
    return;
  }
  param_1 = (undefined1 *)local_438[local_448];
  puVar10 = (undefined1 *)local_248[local_448];
  goto LAB_18125d850;
}



/* ===== 18125db30 FUN_18125db30 ===== */

undefined4 FUN_18125db30(char *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  char cVar1;
  undefined4 *puVar2;
  longlong lVar3;
  char *pcVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (param_4 == 0) {
    if (param_1 == (char *)0x0) {
      if (param_2 == 0) {
        return 0;
      }
      goto LAB_18125db89;
    }
  }
  else if (param_1 == (char *)0x0) goto LAB_18125db89;
  if (param_2 != 0) {
    if (param_4 == 0) {
      *param_1 = '\0';
      return 0;
    }
    if (param_3 != 0) {
      pcVar4 = param_1;
      lVar5 = param_2;
      lVar3 = param_4;
      if (param_4 == -1) {
        do {
          cVar1 = pcVar4[param_3 - (longlong)param_1];
          *pcVar4 = cVar1;
          if (cVar1 == '\0') {
            return 0;
          }
          lVar5 = lVar5 + -1;
          pcVar4 = pcVar4 + 1;
        } while (lVar5 != 0);
        lVar5 = 0;
      }
      else {
        do {
          lVar6 = lVar3;
          cVar1 = pcVar4[param_3 - (longlong)param_1];
          *pcVar4 = cVar1;
          pcVar4 = pcVar4 + 1;
          if (cVar1 == '\0') {
            return 0;
          }
          lVar5 = lVar5 + -1;
        } while ((lVar5 != 0) && (lVar3 = lVar6 + -1, lVar6 + -1 != 0));
        lVar3 = lVar6 + -1;
        if (lVar5 == 0) {
          lVar3 = lVar6;
        }
        if (lVar3 == 0) {
          *pcVar4 = '\0';
        }
      }
      if (lVar5 != 0) {
        return 0;
      }
      if (param_4 == -1) {
        param_1[param_2 + -1] = '\0';
        return 0x50;
      }
      *param_1 = '\0';
      puVar2 = (undefined4 *)FUN_181259cfc();
      *puVar2 = 0x22;
      FUN_181259b54();
      return 0x22;
    }
    *param_1 = '\0';
  }
LAB_18125db89:
  puVar2 = (undefined4 *)FUN_181259cfc();
  *puVar2 = 0x16;
  FUN_181259b54();
  return 0x16;
}



/* ===== 18125dc60 FUN_18125dc60 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

byte * FUN_18125dc60(byte *param_1,byte *param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte local_38 [56];
  
  bVar2 = *param_2;
  local_38[0] = 0;
  local_38[1] = 0;
  local_38[2] = 0;
  local_38[3] = 0;
  local_38[4] = 0;
  local_38[5] = 0;
  local_38[6] = 0;
  local_38[7] = 0;
  local_38[8] = 0;
  local_38[9] = 0;
  local_38[10] = 0;
  local_38[0xb] = 0;
  local_38[0xc] = 0;
  local_38[0xd] = 0;
  local_38[0xe] = 0;
  local_38[0xf] = 0;
  local_38[0x10] = 0;
  local_38[0x11] = 0;
  local_38[0x12] = 0;
  local_38[0x13] = 0;
  local_38[0x14] = 0;
  local_38[0x15] = 0;
  local_38[0x16] = 0;
  local_38[0x17] = 0;
  local_38[0x18] = 0;
  local_38[0x19] = 0;
  local_38[0x1a] = 0;
  local_38[0x1b] = 0;
  local_38[0x1c] = 0;
  local_38[0x1d] = 0;
  local_38[0x1e] = 0;
  local_38[0x1f] = 0;
  while (bVar2 != 0) {
    local_38[(longlong)(int)(uint)bVar2 >> 3] =
         local_38[(longlong)(int)(uint)bVar2 >> 3] | '\x01' << (bVar2 & 7);
    pbVar1 = param_2 + 1;
    param_2 = param_2 + 1;
    bVar2 = *pbVar1;
  }
  bVar2 = *param_1;
  while( true ) {
    if (bVar2 == 0) {
      return (byte *)0x0;
    }
    if ((local_38[bVar2 >> 3] >> (bVar2 & 7) & 1) != 0) break;
    bVar2 = param_1[1];
    param_1 = param_1 + 1;
  }
  return param_1;
}



/* ===== 18125dd00 FUN_18125dd00 ===== */

/* WARNING: Removing unreachable block (ram,0x00018125df9c) */
/* WARNING: Removing unreachable block (ram,0x00018125df95) */
/* WARNING: Removing unreachable block (ram,0x00018125df8e) */
/* WARNING: Removing unreachable block (ram,0x00018125df87) */
/* WARNING: Removing unreachable block (ram,0x00018125df80) */
/* WARNING: Removing unreachable block (ram,0x00018125df79) */
/* WARNING: Removing unreachable block (ram,0x00018125df72) */
/* WARNING: Removing unreachable block (ram,0x00018125df6b) */
/* WARNING: Removing unreachable block (ram,0x00018125df64) */
/* WARNING: Removing unreachable block (ram,0x00018125df5d) */
/* WARNING: Removing unreachable block (ram,0x00018125df56) */
/* WARNING: Removing unreachable block (ram,0x00018125df4f) */
/* WARNING: Removing unreachable block (ram,0x00018125df48) */
/* WARNING: Removing unreachable block (ram,0x00018125df41) */
/* WARNING: Removing unreachable block (ram,0x00018125df3a) */
/* WARNING: Removing unreachable block (ram,0x00018125ddfd) */
/* WARNING: Removing unreachable block (ram,0x00018125de0c) */
/* WARNING: Removing unreachable block (ram,0x00018125de1b) */
/* WARNING: Removing unreachable block (ram,0x00018125de2a) */
/* WARNING: Removing unreachable block (ram,0x00018125de39) */
/* WARNING: Removing unreachable block (ram,0x00018125de45) */
/* WARNING: Removing unreachable block (ram,0x00018125de51) */
/* WARNING: Removing unreachable block (ram,0x00018125de5d) */
/* WARNING: Removing unreachable block (ram,0x00018125de69) */
/* WARNING: Removing unreachable block (ram,0x00018125de75) */
/* WARNING: Removing unreachable block (ram,0x00018125de81) */
/* WARNING: Removing unreachable block (ram,0x00018125de8d) */
/* WARNING: Removing unreachable block (ram,0x00018125de99) */
/* WARNING: Removing unreachable block (ram,0x00018125dea5) */
/* WARNING: Removing unreachable block (ram,0x00018125deb1) */

char * FUN_18125dd00(char *param_1,longlong param_2)

{
  char cVar1;
  uint uVar2;
  ushort uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  char *pcVar19;
  undefined1 (*pauVar20) [16];
  ulonglong uVar21;
  undefined1 auVar22 [16];
  longlong lVar25;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  ulonglong uVar34;
  undefined1 auVar35 [16];
  
  uVar21 = (ulonglong)((uint)param_2 & 0xf);
  pauVar20 = (undefined1 (*) [16])(param_2 - uVar21);
  auVar33 = *pauVar20;
  switch(uVar21) {
  case 1:
    auVar33 = auVar33 >> 8;
    break;
  case 2:
    auVar33 = auVar33 >> 0x10;
    break;
  case 3:
    auVar33 = auVar33 >> 0x18;
    break;
  case 4:
    auVar33 = auVar33 >> 0x20;
    break;
  case 5:
    auVar33 = auVar33 >> 0x28;
    break;
  case 6:
    auVar33 = auVar33 >> 0x30;
    break;
  case 7:
    auVar33 = auVar33 >> 0x38;
    break;
  case 8:
    auVar33 = auVar33 >> 0x40;
    break;
  case 9:
    auVar33 = auVar33 >> 0x48;
    break;
  case 10:
    auVar33 = auVar33 >> 0x50;
    break;
  case 0xb:
    auVar33 = auVar33 >> 0x58;
    break;
  case 0xc:
    auVar33 = auVar33 >> 0x60;
    break;
  case 0xd:
    auVar33 = auVar33 >> 0x68;
    break;
  case 0xe:
    auVar33 = auVar33 >> 0x70;
    break;
  case 0xf:
    auVar33 = auVar33 >> 0x78;
  }
  auVar22[0] = -(auVar33[0] == '\0');
  auVar22[1] = -(auVar33[1] == '\0');
  auVar22[2] = -(auVar33[2] == '\0');
  auVar22[3] = -(auVar33[3] == '\0');
  auVar22[4] = -(auVar33[4] == '\0');
  auVar22[5] = -(auVar33[5] == '\0');
  auVar22[6] = -(auVar33[6] == '\0');
  auVar22[7] = -(auVar33[7] == '\0');
  auVar22[8] = -(auVar33[8] == '\0');
  auVar22[9] = -(auVar33[9] == '\0');
  auVar22[10] = -(auVar33[10] == '\0');
  auVar22[0xb] = -(auVar33[0xb] == '\0');
  auVar22[0xc] = -(auVar33[0xc] == '\0');
  auVar22[0xd] = -(auVar33[0xd] == '\0');
  auVar22[0xe] = -(auVar33[0xe] == '\0');
  auVar22[0xf] = -(auVar33[0xf] == '\0');
  uVar3 = (ushort)(SUB161(auVar22 >> 7,0) & 1) | (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
          (ushort)(SUB161(auVar22 >> 0x17,0) & 1) << 2 |
          (ushort)(SUB161(auVar22 >> 0x1f,0) & 1) << 3 |
          (ushort)(SUB161(auVar22 >> 0x27,0) & 1) << 4 |
          (ushort)(SUB161(auVar22 >> 0x2f,0) & 1) << 5 |
          (ushort)(SUB161(auVar22 >> 0x37,0) & 1) << 6 |
          (ushort)(SUB161(auVar22 >> 0x3f,0) & 1) << 7 |
          (ushort)(SUB161(auVar22 >> 0x47,0) & 1) << 8 |
          (ushort)(SUB161(auVar22 >> 0x4f,0) & 1) << 9 |
          (ushort)(SUB161(auVar22 >> 0x57,0) & 1) << 10 |
          (ushort)(SUB161(auVar22 >> 0x5f,0) & 1) << 0xb |
          (ushort)(SUB161(auVar22 >> 0x67,0) & 1) << 0xc |
          (ushort)(SUB161(auVar22 >> 0x6f,0) & 1) << 0xd |
          (ushort)(SUB161(auVar22 >> 0x77,0) & 1) << 0xe | (ushort)(auVar22[0xf] >> 7) << 0xf;
  if (uVar3 == 0) {
    if (uVar21 == 0) {
      if ((*pauVar20)[1] != '\0') {
        pcVar19 = (char *)FUN_18125dc60();
        return pcVar19;
      }
      goto LAB_18125dfa9;
    }
  }
  else {
    uVar2 = 0;
    if (uVar3 != 0) {
      for (; (uVar3 >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
      }
    }
    lVar25 = auVar33._8_8_;
    switch(-uVar2) {
    case 0:
      auVar33 = ZEXT816(0);
      break;
    case 0xfffffff1:
      auVar26._0_8_ = auVar33._0_8_ << 8;
      auVar26._8_8_ = lVar25 << 8 | auVar33._0_8_ >> 0x38;
      auVar33 = auVar26 >> 8;
      break;
    case 0xfffffff2:
      auVar27._0_8_ = auVar33._0_8_ << 0x10;
      auVar27._8_8_ = lVar25 << 0x10 | auVar33._0_8_ >> 0x30;
      auVar33 = auVar27 >> 0x10;
      break;
    case 0xfffffff3:
      auVar28._0_8_ = auVar33._0_8_ << 0x18;
      auVar28._8_8_ = lVar25 << 0x18 | auVar33._0_8_ >> 0x28;
      auVar33 = auVar28 >> 0x18;
      break;
    case 0xfffffff4:
      auVar29._0_8_ = auVar33._0_8_ << 0x20;
      auVar29._8_8_ = lVar25 << 0x20 | auVar33._0_8_ >> 0x20;
      auVar33 = auVar29 >> 0x20;
      break;
    case 0xfffffff5:
      auVar30._0_8_ = auVar33._0_8_ << 0x28;
      auVar30._8_8_ = lVar25 << 0x28 | auVar33._0_8_ >> 0x18;
      auVar33 = auVar30 >> 0x28;
      break;
    case 0xfffffff6:
      auVar31._0_8_ = auVar33._0_8_ << 0x30;
      auVar31._8_8_ = lVar25 << 0x30 | auVar33._0_8_ >> 0x10;
      auVar33 = auVar31 >> 0x30;
      break;
    case 0xfffffff7:
      auVar32._0_8_ = auVar33._0_8_ << 0x38;
      auVar32._8_8_ = lVar25 << 0x38 | auVar33._0_8_ >> 8;
      auVar33 = auVar32 >> 0x38;
      break;
    case 0xfffffff8:
      auVar33._8_8_ = 0;
      break;
    case 0xfffffff9:
      auVar4._8_8_ = 0;
      auVar4._0_8_ = auVar33._0_8_ << 8;
      auVar33 = (auVar4 << 0x40) >> 0x48;
      break;
    case 0xfffffffa:
      auVar5._8_8_ = 0;
      auVar5._0_8_ = auVar33._0_8_ << 0x10;
      auVar33 = (auVar5 << 0x40) >> 0x50;
      break;
    case 0xfffffffb:
      auVar6._8_8_ = 0;
      auVar6._0_8_ = auVar33._0_8_ << 0x18;
      auVar33 = (auVar6 << 0x40) >> 0x58;
      break;
    case 0xfffffffc:
      auVar7._8_8_ = 0;
      auVar7._0_8_ = auVar33._0_8_ << 0x20;
      auVar33 = (auVar7 << 0x40) >> 0x60;
      break;
    case 0xfffffffd:
      auVar8._8_8_ = 0;
      auVar8._0_8_ = auVar33._0_8_ << 0x28;
      auVar33 = (auVar8 << 0x40) >> 0x68;
      break;
    case 0xfffffffe:
      auVar9._8_8_ = 0;
      auVar9._0_8_ = auVar33._0_8_ << 0x30;
      auVar33 = (auVar9 << 0x40) >> 0x70;
      break;
    case 0xffffffff:
      auVar10._8_8_ = 0;
      auVar10._0_8_ = auVar33._0_8_ << 0x38;
      auVar33 = (auVar10 << 0x40) >> 0x78;
    }
    if (uVar21 == 0 || (ulonglong)uVar2 < 0x10 - uVar21) goto LAB_18125dfa9;
  }
  auVar35 = pauVar20[1];
  auVar23[0] = -(auVar35[0] == '\0');
  auVar23[1] = -(auVar35[1] == '\0');
  auVar23[2] = -(auVar35[2] == '\0');
  auVar23[3] = -(auVar35[3] == '\0');
  auVar23[4] = -(auVar35[4] == '\0');
  auVar23[5] = -(auVar35[5] == '\0');
  auVar23[6] = -(auVar35[6] == '\0');
  lVar25 = auVar35._8_8_;
  auVar23[7] = -(auVar35[7] == '\0');
  auVar23[8] = -(auVar35[8] == '\0');
  auVar23[9] = -(auVar35[9] == '\0');
  auVar23[10] = -(auVar35[10] == '\0');
  auVar23[0xb] = -(auVar35[0xb] == '\0');
  auVar23[0xc] = -(auVar35[0xc] == '\0');
  auVar23[0xd] = -(auVar35[0xd] == '\0');
  auVar23[0xe] = -(auVar35[0xe] == '\0');
  auVar23[0xf] = -(auVar35[0xf] == '\0');
  uVar3 = (ushort)(SUB161(auVar23 >> 7,0) & 1) | (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
          (ushort)(SUB161(auVar23 >> 0x17,0) & 1) << 2 |
          (ushort)(SUB161(auVar23 >> 0x1f,0) & 1) << 3 |
          (ushort)(SUB161(auVar23 >> 0x27,0) & 1) << 4 |
          (ushort)(SUB161(auVar23 >> 0x2f,0) & 1) << 5 |
          (ushort)(SUB161(auVar23 >> 0x37,0) & 1) << 6 |
          (ushort)(SUB161(auVar23 >> 0x3f,0) & 1) << 7 |
          (ushort)(SUB161(auVar23 >> 0x47,0) & 1) << 8 |
          (ushort)(SUB161(auVar23 >> 0x4f,0) & 1) << 9 |
          (ushort)(SUB161(auVar23 >> 0x57,0) & 1) << 10 |
          (ushort)(SUB161(auVar23 >> 0x5f,0) & 1) << 0xb |
          (ushort)(SUB161(auVar23 >> 0x67,0) & 1) << 0xc |
          (ushort)(SUB161(auVar23 >> 0x6f,0) & 1) << 0xd |
          (ushort)(SUB161(auVar23 >> 0x77,0) & 1) << 0xe | (ushort)(auVar23[0xf] >> 7) << 0xf;
  uVar34 = auVar35._0_8_;
  if (uVar3 != 0) {
    uVar2 = 0;
    if (uVar3 != 0) {
      for (; (uVar3 >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
      }
    }
    if ((uVar2 - uVar21) + 0x10 < 0x11) {
      switch(-uVar2) {
      case 0:
        auVar35 = ZEXT816(0);
        break;
      case 0xfffffff1:
        auVar35._0_8_ = uVar34 << 8;
        auVar35._8_8_ = lVar25 << 8 | uVar34 >> 0x38;
        break;
      case 0xfffffff2:
        auVar35._0_8_ = uVar34 << 0x10;
        auVar35._8_8_ = lVar25 << 0x10 | uVar34 >> 0x30;
        break;
      case 0xfffffff3:
        auVar35._0_8_ = uVar34 << 0x18;
        auVar35._8_8_ = lVar25 << 0x18 | uVar34 >> 0x28;
        break;
      case 0xfffffff4:
        auVar35._0_8_ = uVar34 << 0x20;
        auVar35._8_8_ = lVar25 << 0x20 | uVar34 >> 0x20;
        break;
      case 0xfffffff5:
        auVar35._0_8_ = uVar34 << 0x28;
        auVar35._8_8_ = lVar25 << 0x28 | uVar34 >> 0x18;
        break;
      case 0xfffffff6:
        auVar35._0_8_ = uVar34 << 0x30;
        auVar35._8_8_ = lVar25 << 0x30 | uVar34 >> 0x10;
        break;
      case 0xfffffff7:
        auVar35._0_8_ = uVar34 << 0x38;
        auVar35._8_8_ = lVar25 << 0x38 | uVar34 >> 8;
        break;
      case 0xfffffff8:
        auVar11._8_8_ = 0;
        auVar11._0_8_ = uVar34;
        auVar35 = auVar11 << 0x40;
        break;
      case 0xfffffff9:
        auVar12._8_8_ = 0;
        auVar12._0_8_ = uVar34 << 8;
        auVar35 = auVar12 << 0x40;
        break;
      case 0xfffffffa:
        auVar13._8_8_ = 0;
        auVar13._0_8_ = uVar34 << 0x10;
        auVar35 = auVar13 << 0x40;
        break;
      case 0xfffffffb:
        auVar14._8_8_ = 0;
        auVar14._0_8_ = uVar34 << 0x18;
        auVar35 = auVar14 << 0x40;
        break;
      case 0xfffffffc:
        auVar15._8_8_ = 0;
        auVar15._0_8_ = uVar34 << 0x20;
        auVar35 = auVar15 << 0x40;
        break;
      case 0xfffffffd:
        auVar16._8_8_ = 0;
        auVar16._0_8_ = uVar34 << 0x28;
        auVar35 = auVar16 << 0x40;
        break;
      case 0xfffffffe:
        auVar17._8_8_ = 0;
        auVar17._0_8_ = uVar34 << 0x30;
        auVar35 = auVar17 << 0x40;
        break;
      case 0xffffffff:
        auVar18._8_8_ = 0;
        auVar18._0_8_ = uVar34 << 0x38;
        auVar35 = auVar18 << 0x40;
      }
      auVar33 = auVar33 | auVar35;
LAB_18125dfa9:
      cVar1 = *param_1;
      while( true ) {
        if (cVar1 == '\0') {
          return (char *)0x0;
        }
        auVar24[0] = -(cVar1 == auVar33[0]);
        auVar24[1] = -(cVar1 == auVar33[1]);
        auVar24[2] = -(cVar1 == auVar33[2]);
        auVar24[3] = -(cVar1 == auVar33[3]);
        auVar24[4] = -(cVar1 == auVar33[4]);
        auVar24[5] = -(cVar1 == auVar33[5]);
        auVar24[6] = -(cVar1 == auVar33[6]);
        auVar24[7] = -(cVar1 == auVar33[7]);
        auVar24[8] = -(cVar1 == auVar33[8]);
        auVar24[9] = -(cVar1 == auVar33[9]);
        auVar24[10] = -(cVar1 == auVar33[10]);
        auVar24[0xb] = -(cVar1 == auVar33[0xb]);
        auVar24[0xc] = -(cVar1 == auVar33[0xc]);
        auVar24[0xd] = -(cVar1 == auVar33[0xd]);
        auVar24[0xe] = -(cVar1 == auVar33[0xe]);
        auVar24[0xf] = -(cVar1 == auVar33[0xf]);
        if ((((((((((((((((SUB161(auVar24 >> 7,0) & 1) != 0 || (SUB161(auVar24 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar24 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar24 >> 0x1f,0) & 1) != 0) || (SUB161(auVar24 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar24 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar24 >> 0x37,0) & 1) != 0) || (SUB161(auVar24 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar24 >> 0x47,0) & 1) != 0) || (SUB161(auVar24 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar24 >> 0x57,0) & 1) != 0) || (SUB161(auVar24 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar24 >> 0x67,0) & 1) != 0) || (SUB161(auVar24 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar24 >> 0x77,0) & 1) != 0) || auVar24[0xf] < '\0') break;
        cVar1 = param_1[1];
        param_1 = param_1 + 1;
      }
      return param_1;
    }
  }
  pcVar19 = (char *)FUN_18125dc60(param_1,param_2);
  return pcVar19;
}



/* ===== 18125e0b8 FUN_18125e0b8 ===== */

byte * FUN_18125e0b8(byte *param_1,byte *param_2)

{
  undefined4 *puVar1;
  byte *pbVar2;
  longlong local_28 [2];
  longlong local_18;
  char local_10;
  
  if ((param_1 == (byte *)0x0) || (param_2 == (byte *)0x0)) {
    puVar1 = (undefined4 *)FUN_181259cfc();
    *puVar1 = 0x16;
    FUN_181259b54();
  }
  else if (param_1 < param_2) {
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_28,(__crt_locale_pointers *)0x0);
    pbVar2 = param_2 + -1;
    if (*(int *)(local_18 + 8) != 0) {
      do {
        pbVar2 = pbVar2 + -1;
        if (pbVar2 < param_1) break;
      } while ((*(byte *)((ulonglong)*pbVar2 + 0x19 + local_18) & 4) != 0);
      pbVar2 = param_2 + (-1 - (ulonglong)((int)param_2 - (int)pbVar2 & 1));
    }
    if (local_10 != '\0') {
      *(uint *)(local_28[0] + 0x3a8) = *(uint *)(local_28[0] + 0x3a8) & 0xfffffffd;
    }
    return pbVar2;
  }
  return (byte *)0x0;
}



/* ===== 18125e154 FUN_18125e154 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
FUN_18125e154(__crt_locale_pointers *param_1,undefined4 param_2,undefined8 param_3,
             undefined4 param_4,undefined8 param_5,int param_6,int param_7)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined4 uVar10;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_58 [2];
  longlong local_50;
  longlong local_48;
  char local_38;
  ulonglong local_30;
  
  local_30 = DAT_18126c390 ^ (ulonglong)local_58;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_50,param_1);
  if (param_6 == 0) {
    param_6 = *(int *)(local_48 + 0xc);
  }
  local_60 = 0;
  local_68 = 0;
  iVar3 = FUN_18125b758(param_6,(-(param_7 != 0) & 8U) + 1,param_3,param_4);
  puVar9 = auStack_88;
  if (iVar3 == 0) {
    uVar10 = 0;
    puVar9 = auStack_88;
    goto LAB_18125e2aa;
  }
  uVar1 = (longlong)iVar3 * 2;
  uVar6 = -(ulonglong)(uVar1 < uVar1 + 0x10) & uVar1 + 0x10;
  if (uVar6 == 0) {
    puVar7 = (undefined4 *)0x0;
LAB_18125e292:
    uVar10 = 0;
    if (puVar7 == (undefined4 *)0x0) goto LAB_18125e2aa;
  }
  else {
    if (uVar6 < 0x401) {
      uVar4 = uVar6 + 0xf;
      if (uVar4 <= uVar6) {
        uVar4 = 0xffffffffffffff0;
      }
      lVar2 = -(uVar4 & 0xfffffffffffffff0);
      puVar9 = auStack_88 + lVar2;
      puVar8 = auStack_88 + lVar2;
      puVar5 = (undefined4 *)((longlong)local_58 + lVar2);
      puVar7 = (undefined4 *)0x0;
      if (puVar5 == (undefined4 *)0x0) goto LAB_18125e292;
      *puVar5 = 0xcccc;
LAB_18125e240:
      puVar7 = puVar5 + 4;
      puVar9 = puVar8;
    }
    else {
      puVar5 = (undefined4 *)_malloc_base();
      puVar9 = auStack_88;
      puVar8 = auStack_88;
      puVar7 = (undefined4 *)0x0;
      if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = 0xdddd;
        goto LAB_18125e240;
      }
    }
    if (puVar7 == (undefined4 *)0x0) goto LAB_18125e292;
    *(undefined8 *)(puVar9 + -8) = 0x18125e256;
    FUN_181261130(puVar7,0,uVar1);
    *(int *)(puVar9 + 0x28) = iVar3;
    *(undefined4 **)(puVar9 + 0x20) = puVar7;
    *(undefined8 *)(puVar9 + -8) = 0x18125e272;
    iVar3 = FUN_18125b758(param_6,1,param_3,param_4);
    if (iVar3 == 0) goto LAB_18125e292;
    *(undefined8 *)(puVar9 + -8) = 0x18125e28c;
    uVar10 = (*DAT_181262538)(param_2,puVar7,iVar3,param_5);
  }
  if (puVar7[-4] == 0xdddd) {
    *(undefined8 *)(puVar9 + -8) = 0x18125e2aa;
    FUN_181259da0();
  }
LAB_18125e2aa:
  if (local_38 != '\0') {
    *(uint *)(local_50 + 0x3a8) = *(uint *)(local_50 + 0x3a8) & 0xfffffffd;
  }
  *(undefined8 *)(puVar9 + -8) = 0x18125e2c9;
  return uVar10;
}



/* ===== 18125e2e4 FUN_18125e2e4 ===== */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_18125e2e4(longlong *param_1,undefined8 param_2,uint param_3,char *param_4,int param_5,
                       undefined8 param_6,int param_7,int param_8,int param_9)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  size_t sVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined4 *puVar8;
  ulonglong uVar9;
  undefined4 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined4 *puVar15;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_38 [2];
  ulonglong local_30;
  
  local_30 = DAT_18126c390 ^ (ulonglong)local_38;
  iVar2 = param_5;
  if (0 < param_5) {
    sVar5 = __strncnt(param_4,(longlong)param_5);
    iVar4 = (int)sVar5;
    iVar2 = iVar4 + 1;
    if (param_5 <= iVar4) {
      iVar2 = iVar4;
    }
  }
  if (param_8 == 0) {
    param_8 = *(int *)(*param_1 + 0xc);
  }
  local_60 = 0;
  local_68 = 0;
  uVar6 = FUN_18125b758(param_8,(-(param_9 != 0) & 8U) + 1,param_4,iVar2);
  puVar13 = auStack_88;
  iVar4 = (int)uVar6;
  puVar14 = auStack_88;
  if (iVar4 == 0) goto LAB_18125e5ef;
  uVar7 = (longlong)iVar4 * 2 + 0x10;
  uVar7 = -(ulonglong)((ulonglong)((longlong)iVar4 * 2) < uVar7) & uVar7;
  if (uVar7 == 0) {
    puVar10 = (undefined4 *)0x0;
LAB_18125e5d5:
    uVar7 = 0;
    if (puVar10 != (undefined4 *)0x0) goto LAB_18125e5dc;
  }
  else {
    if (uVar7 < 0x401) {
      uVar9 = uVar7 + 0xf;
      if (uVar9 <= uVar7) {
        uVar9 = 0xffffffffffffff0;
      }
      lVar1 = -(uVar9 & 0xfffffffffffffff0);
      puVar13 = auStack_88 + lVar1;
      puVar11 = auStack_88 + lVar1;
      puVar15 = (undefined4 *)((longlong)local_38 + lVar1);
      puVar10 = (undefined4 *)0x0;
      if (puVar15 == (undefined4 *)0x0) goto LAB_18125e5d5;
      *puVar15 = 0xcccc;
LAB_18125e3f0:
      puVar10 = puVar15 + 4;
      puVar13 = puVar11;
    }
    else {
      puVar15 = (undefined4 *)_malloc_base(uVar7);
      puVar13 = auStack_88;
      puVar11 = auStack_88;
      puVar10 = (undefined4 *)0x0;
      if (puVar15 != (undefined4 *)0x0) {
        *puVar15 = 0xdddd;
        goto LAB_18125e3f0;
      }
    }
    if (puVar10 == (undefined4 *)0x0) goto LAB_18125e5d5;
    *(int *)(puVar13 + 0x28) = iVar4;
    *(undefined4 **)(puVar13 + 0x20) = puVar10;
    *(undefined8 *)(puVar13 + -8) = 0x18125e41a;
    iVar2 = FUN_18125b758(param_8,1,param_4,iVar2);
    if (iVar2 == 0) goto LAB_18125e5d5;
    *(undefined8 *)(puVar13 + 0x40) = 0;
    *(undefined8 *)(puVar13 + 0x38) = 0;
    *(undefined8 *)(puVar13 + 0x30) = 0;
    *(undefined4 *)(puVar13 + 0x28) = 0;
    *(undefined8 *)(puVar13 + 0x20) = 0;
    *(undefined8 *)(puVar13 + -8) = 0x18125e44d;
    iVar2 = FUN_18125bd18(param_2,param_3,puVar10,uVar6 & 0xffffffff);
    uVar7 = (ulonglong)iVar2;
    if (iVar2 == 0) goto LAB_18125e5d5;
    if ((param_3 & 0x400) == 0) {
      uVar9 = uVar7 * 2 + 0x10;
      uVar9 = -(ulonglong)(uVar7 * 2 < uVar9) & uVar9;
      if (uVar9 == 0) {
        puVar15 = (undefined4 *)0x0;
        goto LAB_18125e5b8;
      }
      if (uVar9 < 0x401) {
        uVar7 = uVar9 + 0xf;
        if (uVar7 <= uVar9) {
          uVar7 = 0xffffffffffffff0;
        }
        *(undefined8 *)(puVar13 + -8) = 0x18125e4f0;
        lVar1 = -(uVar7 & 0xfffffffffffffff0);
        puVar12 = puVar13 + lVar1;
        puVar8 = (undefined4 *)(puVar13 + lVar1 + 0x50);
        puVar13 = puVar13 + lVar1;
        if (puVar8 != (undefined4 *)0x0) {
          *puVar8 = 0xcccc;
          puVar13 = puVar12;
LAB_18125e51e:
          puVar15 = puVar8 + 4;
          goto LAB_18125e522;
        }
      }
      else {
        *(undefined8 *)(puVar13 + -8) = 0x18125e50e;
        puVar8 = (undefined4 *)_malloc_base();
        puVar15 = (undefined4 *)0x0;
        if (puVar8 != (undefined4 *)0x0) {
          *puVar8 = 0xdddd;
          goto LAB_18125e51e;
        }
LAB_18125e522:
        if (puVar15 != (undefined4 *)0x0) {
          *(undefined8 *)(puVar13 + 0x40) = 0;
          *(undefined8 *)(puVar13 + 0x38) = 0;
          *(undefined8 *)(puVar13 + 0x30) = 0;
          *(int *)(puVar13 + 0x28) = iVar2;
          *(undefined4 **)(puVar13 + 0x20) = puVar15;
          *(undefined8 *)(puVar13 + -8) = 0x18125e554;
          iVar4 = FUN_18125bd18(param_2,param_3,puVar10,uVar6 & 0xffffffff);
          if (iVar4 != 0) {
            *(undefined8 *)(puVar13 + 0x38) = 0;
            *(undefined8 *)(puVar13 + 0x30) = 0;
            if (param_7 == 0) {
              *(undefined4 *)(puVar13 + 0x28) = 0;
              *(undefined8 *)(puVar13 + 0x20) = 0;
              *(undefined8 *)(puVar13 + -8) = 0x18125e582;
              uVar3 = FUN_18125b7e8(param_8,0,puVar15,iVar2);
              if (uVar3 == 0) goto LAB_18125e5b8;
            }
            else {
              *(int *)(puVar13 + 0x28) = param_7;
              *(undefined8 *)(puVar13 + 0x20) = param_6;
              *(undefined8 *)(puVar13 + -8) = 0x18125e59c;
              uVar3 = FUN_18125b7e8(param_8,0,puVar15,iVar2);
              if (uVar3 == 0) goto LAB_18125e5bd;
            }
            uVar7 = (ulonglong)uVar3;
            if (puVar15[-4] == 0xdddd) {
              *(undefined8 *)(puVar13 + -8) = 0x18125e5b3;
              FUN_181259da0();
            }
            goto LAB_18125e5dc;
          }
LAB_18125e5b8:
          if (puVar15 != (undefined4 *)0x0) {
LAB_18125e5bd:
            if (puVar15[-4] == 0xdddd) {
              *(undefined8 *)(puVar13 + -8) = 0x18125e5ce;
              FUN_181259da0();
            }
          }
        }
      }
      uVar7 = 0;
    }
    else if (param_7 != 0) {
      if (iVar2 <= param_7) {
        *(undefined8 *)(puVar13 + 0x40) = 0;
        *(undefined8 *)(puVar13 + 0x38) = 0;
        *(undefined8 *)(puVar13 + 0x30) = 0;
        *(int *)(puVar13 + 0x28) = param_7;
        *(undefined8 *)(puVar13 + 0x20) = param_6;
        *(undefined8 *)(puVar13 + -8) = 0x18125e4a5;
        uVar3 = FUN_18125bd18(param_2,param_3,puVar10,uVar6 & 0xffffffff);
        uVar7 = (ulonglong)uVar3;
        if (uVar3 != 0) goto LAB_18125e5dc;
      }
      goto LAB_18125e5d5;
    }
LAB_18125e5dc:
    if (puVar10[-4] == 0xdddd) {
      *(undefined8 *)(puVar13 + -8) = 0x18125e5ed;
      FUN_181259da0();
    }
  }
  uVar6 = uVar7 & 0xffffffff;
  puVar14 = puVar13;
LAB_18125e5ef:
  *(undefined8 *)(puVar14 + -8) = 0x18125e5fb;
  return uVar6;
}



/* ===== 18125e618 __acrt_LCMapStringA ===== */

/* Library Function - Single Match
    __acrt_LCMapStringA
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_LCMapStringA(__crt_locale_pointers *param_1,undefined8 param_2,undefined4 param_3,
                        undefined8 param_4,undefined4 param_5,undefined8 param_6,undefined4 param_7,
                        undefined4 param_8,undefined4 param_9)

{
  longlong local_28;
  undefined1 local_20 [16];
  char local_10;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_28,param_1);
  FUN_18125e2e4(local_20,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  if (local_10 != '\0') {
    *(uint *)(local_28 + 0x3a8) = *(uint *)(local_28 + 0x3a8) & 0xfffffffd;
  }
  return;
}



/* ===== 18125e6d0 _msize_base ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    _msize_base
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined8 _msize_base(longlong param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    puVar1 = (undefined4 *)FUN_181259cfc();
    *puVar1 = 0x16;
    FUN_181259b54();
    return 0xffffffffffffffff;
  }
                    /* WARNING: Could not recover jumptable at 0x00018125e702. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*_DAT_181262540)(_DAT_18132f518,0,param_1);
  return uVar2;
}



/* ===== 18125e720 _realloc_base ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    _realloc_base
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

longlong _realloc_base(longlong param_1,ulonglong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 *puVar3;
  
  if (param_1 == 0) {
    lVar2 = _malloc_base(param_2);
  }
  else {
    if (param_2 == 0) {
      FUN_181259da0();
    }
    else {
      if (param_2 < 0xffffffffffffffe1) {
        do {
          lVar2 = (*DAT_181262548)(_DAT_18132f518,0,param_1,param_2);
          if (lVar2 != 0) {
            return lVar2;
          }
          iVar1 = FUN_18125d750();
        } while ((iVar1 != 0) && (iVar1 = FUN_18125c2e0(param_2), iVar1 != 0));
      }
      puVar3 = (undefined4 *)FUN_181259cfc();
      *puVar3 = 0xc;
    }
    lVar2 = 0;
  }
  return lVar2;
}



/* ===== 18125e7a0 wcsncmp ===== */

/* Library Function - Single Match
    wcsncmp
   
   Library: Visual Studio 2005 Release */

int __cdecl wcsncmp(wchar_t *_Str1,wchar_t *_Str2,size_t _MaxCount)

{
  if (_MaxCount == 0) {
    return 0;
  }
  for (; ((_MaxCount = _MaxCount - 1, _MaxCount != 0 && (*_Str1 != L'\0')) && (*_Str1 == *_Str2));
      _Str1 = _Str1 + 1) {
    _Str2 = _Str2 + 1;
  }
  return (uint)(ushort)*_Str1 - (uint)(ushort)*_Str2;
}



/* ===== 18125e7d4 FUN_18125e7d4 ===== */

undefined4 FUN_18125e7d4(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (param_1 != 0) {
    iVar4 = 0;
    iVar5 = 0xe3;
    do {
      iVar2 = (iVar5 + iVar4) / 2;
      iVar3 = FUN_18125fda0(param_1,*(undefined8 *)(&DAT_1812668c0 + (longlong)iVar2 * 0x10),0x55);
      if (iVar3 == 0) {
        iVar5 = *(int *)(&DAT_1812668c8 + (longlong)iVar2 * 0x10);
        if (iVar5 < 0) {
          return 0;
        }
        if ((ulonglong)(longlong)iVar5 < 0xe4) {
          return *(undefined4 *)(&DAT_181264e60 + (longlong)iVar5 * 0x10);
        }
        return 0;
      }
      iVar1 = iVar2 + -1;
      if (-1 < iVar3) {
        iVar4 = iVar2 + 1;
        iVar1 = iVar5;
      }
      iVar5 = iVar1;
    } while (iVar4 <= iVar5);
  }
  return 0;
}



/* ===== 18125ea1c FUN_18125ea1c ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18125ea1c(uint param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00018125ea3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*_DAT_1812623f8)(*(longlong *)(&DAT_18132f520 + ((longlong)(int)param_1 >> 6) * 8) +
                    (ulonglong)(param_1 & 0x3f) * 0x48);
  return;
}



/* ===== 18125ea44 FUN_18125ea44 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18125ea44(uint param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00018125ea64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*_DAT_181262400)(*(longlong *)(&DAT_18132f520 + ((longlong)(int)param_1 >> 6) * 8) +
                    (ulonglong)(param_1 & 0x3f) * 0x48);
  return;
}



/* ===== 18125ea6c FUN_18125ea6c ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_18125ea6c(uint param_1)

{
  int iVar1;
  ulonglong uVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  
  if ((-1 < (int)param_1) && (param_1 < _DAT_18132f920)) {
    uVar2 = (ulonglong)(param_1 & 0x3f);
    if (((*(byte *)(*(longlong *)(&DAT_18132f520 + ((ulonglong)(longlong)(int)param_1 >> 6) * 8) +
                    0x38 + uVar2 * 0x48) & 1) != 0) &&
       (*(longlong *)
         (*(longlong *)(&DAT_18132f520 + ((ulonglong)(longlong)(int)param_1 >> 6) * 8) + 0x28 +
         uVar2 * 0x48) != -1)) {
      iVar1 = FUN_18125fe08();
      if (iVar1 == 1) {
        if (param_1 == 0) {
          uVar4 = 0xfffffff6;
        }
        else if (param_1 == 1) {
          uVar4 = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_18125eaec;
          uVar4 = 0xfffffff4;
        }
        (*DAT_181262550)(uVar4,0);
      }
LAB_18125eaec:
      *(undefined8 *)
       (*(longlong *)(&DAT_18132f520 + ((ulonglong)(longlong)(int)param_1 >> 6) * 8) + 0x28 +
       uVar2 * 0x48) = 0xffffffffffffffff;
      return 0;
    }
  }
  puVar3 = (undefined4 *)FUN_181259cfc();
  *puVar3 = 9;
  puVar3 = (undefined4 *)FUN_181259cd8();
  *puVar3 = 0;
  return 0xffffffff;
}



/* ===== 18125eb28 FUN_18125eb28 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_18125eb28(uint param_1)

{
  undefined4 *puVar1;
  
  if (param_1 == 0xfffffffe) {
    puVar1 = (undefined4 *)FUN_181259cd8();
    *puVar1 = 0;
    puVar1 = (undefined4 *)FUN_181259cfc();
    *puVar1 = 9;
  }
  else {
    if ((-1 < (int)param_1) && (param_1 < _DAT_18132f920)) {
      if ((*(byte *)(*(longlong *)(&DAT_18132f520 + ((ulonglong)(longlong)(int)param_1 >> 6) * 8) +
                     0x38 + (ulonglong)(param_1 & 0x3f) * 0x48) & 1) != 0) {
        return *(undefined8 *)
                (*(longlong *)(&DAT_18132f520 + ((ulonglong)(longlong)(int)param_1 >> 6) * 8) + 0x28
                + (ulonglong)(param_1 & 0x3f) * 0x48);
      }
    }
    puVar1 = (undefined4 *)FUN_181259cd8();
    *puVar1 = 0;
    puVar1 = (undefined4 *)FUN_181259cfc();
    *puVar1 = 9;
    FUN_181259b54();
  }
  return 0xffffffffffffffff;
}



/* ===== 18125eba0 FUN_18125eba0 ===== */

undefined8
FUN_18125eba0(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  
  FUN_18125ea1c(*param_2);
  if ((*(byte *)(*(longlong *)(&DAT_18132f520 + ((longlong)(int)*(uint *)*param_3 >> 6) * 8) + 0x38
                + (ulonglong)(*(uint *)*param_3 & 0x3f) * 0x48) & 1) != 0) {
    uVar3 = FUN_18125eb28();
    iVar1 = (*DAT_181262558)(uVar3);
    uVar3 = 0;
    if (iVar1 != 0) goto LAB_18125ec17;
    uVar2 = (*DAT_1812623c8)();
    puVar4 = (undefined4 *)FUN_181259cd8();
    *puVar4 = uVar2;
  }
  puVar4 = (undefined4 *)FUN_181259cfc();
  *puVar4 = 9;
  uVar3 = 0xffffffff;
LAB_18125ec17:
  FUN_18125ea44(*param_4);
  return uVar3;
}



/* ===== 18125ec2c _commit ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    _commit
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl _commit(int _FileHandle)

{
  int iVar1;
  undefined4 *puVar2;
  int local_res8 [2];
  undefined1 local_res10 [8];
  int local_res18 [2];
  int local_res20 [2];
  int *local_18 [3];
  
  local_res8[0] = _FileHandle;
  if (_FileHandle == -2) {
    puVar2 = (undefined4 *)FUN_181259cfc();
    *puVar2 = 9;
  }
  else {
    if (((-1 < _FileHandle) && ((uint)_FileHandle < _DAT_18132f920)) &&
       ((*(byte *)(*(longlong *)(&DAT_18132f520 + ((longlong)_FileHandle >> 6) * 8) + 0x38 +
                  (ulonglong)(_FileHandle & 0x3f) * 0x48) & 1) != 0)) {
      local_18[0] = local_res8;
      local_res18[0] = _FileHandle;
      local_res20[0] = _FileHandle;
      iVar1 = FUN_18125eba0(local_res10,local_res20,local_18,local_res18);
      return iVar1;
    }
    puVar2 = (undefined4 *)FUN_181259cfc();
    *puVar2 = 9;
    FUN_181259b54();
  }
  return -1;
}



/* ===== 18125ecc0 FUN_18125ecc0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
FUN_18125ecc0(undefined8 *param_1,uint param_2,byte *param_3,ulonglong param_4,longlong param_5)

{
  char cVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  char *pcVar7;
  int iVar8;
  undefined1 *puVar9;
  byte *pbVar10;
  int iVar11;
  longlong lVar12;
  undefined8 uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 auStack_108 [32];
  undefined1 *local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined2 local_c8 [2];
  undefined4 local_c4;
  uint local_c0 [2];
  byte *local_b8;
  longlong local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  int local_9c;
  byte *local_98;
  longlong local_90;
  undefined8 local_88;
  undefined1 *local_80;
  byte *local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  undefined1 local_58 [8];
  byte local_50;
  byte local_4f;
  undefined1 local_48 [8];
  ulonglong local_40;
  
  local_60 = 0xfffffffffffffffe;
  local_40 = DAT_18126c390 ^ (ulonglong)auStack_108;
  local_b0 = param_5;
  lVar15 = (longlong)(int)param_2 >> 6;
  uVar6 = (ulonglong)(param_2 & 0x3f);
  local_70 = *(undefined8 *)(*(longlong *)(&DAT_18132f520 + lVar15 * 8) + 0x28 + uVar6 * 0x48);
  local_b8 = param_3 + (param_4 & 0xffffffff);
  local_98 = param_3;
  local_90 = lVar15;
  local_a0 = (*DAT_181262568)();
  iVar11 = 0;
  if (*(char *)(local_b0 + 0x28) == '\0') {
    FUN_181258ff0(local_b0);
  }
  local_9c = *(int *)(*(longlong *)(local_b0 + 0x18) + 0xc);
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  if (param_3 + (param_4 & 0xffffffff) <= local_98) {
    return param_1;
  }
  iVar8 = 0;
  local_68 = lVar15;
  do {
    local_c8[0] = CONCAT11(local_c8[0]._1_1_,*param_3);
    local_c4 = 0;
    cVar3 = '\x01';
    if (local_9c == 0xfde9) {
      iVar8 = 0;
      lVar16 = 0;
      pcVar7 = (char *)(uVar6 * 0x48 + 0x3e + *(longlong *)(&DAT_18132f520 + local_68 * 8));
      do {
        if (*pcVar7 == '\0') break;
        iVar8 = iVar8 + 1;
        lVar16 = lVar16 + 1;
        pcVar7 = pcVar7 + 1;
      } while (lVar16 < 5);
      if (lVar16 < 1) {
        cVar1 = (&DAT_18126cc90)[*param_3];
        iVar8 = cVar1 + 1;
        lVar15 = (longlong)local_b8 - (longlong)param_3;
        if (lVar15 < iVar8) {
          if (0 < lVar15) {
            lVar16 = 0;
            do {
              *(byte *)(lVar16 + uVar6 * 0x48 + 0x3e + *(longlong *)(&DAT_18132f520 + local_90 * 8))
                   = param_3[lVar16];
              iVar11 = iVar11 + 1;
              lVar16 = lVar16 + 1;
            } while (iVar11 < lVar15);
          }
          *(int *)((longlong)param_1 + 4) = *(int *)((longlong)param_1 + 4) + (int)lVar15;
          return param_1;
        }
        local_a8 = 0;
        cVar3 = (iVar8 == 4) + '\x01';
        local_e8 = (undefined1 *)local_b0;
        local_78 = param_3;
        lVar15 = FUN_18125d0b0(&local_c4,&local_78,cVar3,&local_a8);
        if (lVar15 == -1) {
          return param_1;
        }
        pbVar10 = param_3 + cVar1;
        lVar15 = local_90;
      }
      else {
        cVar3 = (&DAT_18126cc90)
                [*(byte *)(*(longlong *)(&DAT_18132f520 + lVar15 * 8) + 0x3e + uVar6 * 0x48)];
        iVar8 = (cVar3 + 1) - iVar8;
        local_a8 = CONCAT44(local_a8._4_4_,iVar8);
        lVar12 = (longlong)local_b8 - (longlong)param_3;
        lVar14 = (longlong)iVar8;
        if (lVar12 < lVar14) {
          if (0 < lVar12) {
            lVar14 = lVar16;
            do {
              *(byte *)(lVar14 + uVar6 * 0x48 + 0x3e + *(longlong *)(&DAT_18132f520 + lVar15 * 8)) =
                   param_3[lVar14 - lVar16];
              iVar11 = iVar11 + 1;
              lVar14 = lVar14 + 1;
            } while (iVar11 < lVar12);
          }
          *(int *)((longlong)param_1 + 4) = *(int *)((longlong)param_1 + 4) + (int)lVar12;
          return param_1;
        }
        lVar12 = 0;
        puVar9 = (undefined1 *)(uVar6 * 0x48 + 0x3e + *(longlong *)(&DAT_18132f520 + local_68 * 8));
        do {
          local_58[lVar12] = *puVar9;
          lVar12 = lVar12 + 1;
          puVar9 = puVar9 + 1;
        } while (lVar12 < lVar16);
        if (0 < lVar14) {
          FUN_1812609f0(local_58 + lVar16,param_3,lVar14);
        }
        lVar12 = 0;
        do {
          *(undefined1 *)(lVar12 + uVar6 * 0x48 + 0x3e + *(longlong *)(&DAT_18132f520 + lVar15 * 8))
               = 0;
          lVar12 = lVar12 + 1;
        } while (lVar12 < lVar16);
        local_88 = 0;
        local_80 = local_58;
        cVar3 = (cVar3 + 1 == 4) + '\x01';
        local_e8 = (undefined1 *)local_b0;
        lVar16 = FUN_18125d0b0(&local_c4,&local_80,cVar3,&local_88);
        if (lVar16 == -1) {
          return param_1;
        }
        pbVar10 = param_3 + ((int)local_a8 + -1);
      }
    }
    else {
      lVar16 = *(longlong *)(&DAT_18132f520 + lVar15 * 8);
      bVar2 = *(byte *)(lVar16 + 0x3d + uVar6 * 0x48);
      if ((bVar2 & 4) == 0) {
        if (*(short *)(**(longlong **)(local_b0 + 0x18) + (ulonglong)*param_3 * 2) < 0) {
          pbVar10 = param_3 + 1;
          if (local_b8 <= pbVar10) {
            *(byte *)(lVar16 + 0x3e + uVar6 * 0x48) = *param_3;
            pbVar10 = (byte *)(*(longlong *)(&DAT_18132f520 + lVar15 * 8) + 0x3d + uVar6 * 0x48);
            *pbVar10 = *pbVar10 | 4;
            *(int *)((longlong)param_1 + 4) = iVar8 + 1;
            return param_1;
          }
          iVar8 = FUN_18125ccf8(&local_c4,param_3,2,local_b0);
          if (iVar8 == -1) {
            return param_1;
          }
          goto LAB_18125efc8;
        }
        uVar13 = 1;
        pbVar10 = param_3;
      }
      else {
        local_50 = *(byte *)(lVar16 + 0x3e + uVar6 * 0x48);
        local_4f = *param_3;
        *(byte *)(lVar16 + 0x3d + uVar6 * 0x48) = bVar2 & 0xfb;
        uVar13 = 2;
        pbVar10 = &local_50;
      }
      iVar8 = FUN_18125ccf8(&local_c4,pbVar10,uVar13,local_b0);
      pbVar10 = param_3;
      if (iVar8 == -1) {
        return param_1;
      }
    }
LAB_18125efc8:
    param_3 = pbVar10 + 1;
    local_d0 = 0;
    local_d8 = 0;
    local_e0 = 5;
    local_e8 = local_48;
    uVar4 = FUN_18125b7e8(local_a0,0,&local_c4,cVar3);
    uVar13 = local_70;
    if (uVar4 == 0) {
      return param_1;
    }
    local_c0[0] = 0;
    local_e8 = (undefined1 *)0x0;
    iVar8 = (*DAT_181262560)(local_70,local_48,uVar4,local_c0);
    if (iVar8 == 0) {
LAB_18125f121:
      uVar5 = (*DAT_1812623c8)();
      *(undefined4 *)param_1 = uVar5;
      return param_1;
    }
    iVar8 = (*(int *)(param_1 + 1) - (int)local_98) + (int)param_3;
    *(int *)((longlong)param_1 + 4) = iVar8;
    if (local_c0[0] < uVar4) {
      return param_1;
    }
    if ((char)local_c8[0] == '\n') {
      local_c8[0] = 0xd;
      local_e8 = (undefined1 *)0x0;
      iVar8 = (*DAT_181262560)(uVar13,local_c8,1,local_c0);
      if (iVar8 == 0) goto LAB_18125f121;
      if (local_c0[0] == 0) {
        return param_1;
      }
      *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
      *(int *)((longlong)param_1 + 4) = *(int *)((longlong)param_1 + 4) + 1;
      iVar8 = *(int *)((longlong)param_1 + 4);
    }
    if (local_b8 <= param_3) {
      return param_1;
    }
  } while( true );
}



/* ===== 18125f154 FUN_18125f154 ===== */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_18125f154(undefined8 *param_1,uint param_2,char *param_3,ulonglong param_4)

{
  char cVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  undefined1 auStack_1468 [32];
  undefined8 local_1448;
  uint local_1438 [4];
  char local_1428 [5120];
  ulonglong local_28;
  undefined8 local_20;
  
  local_20 = 0x18125f16c;
  local_28 = DAT_18126c390 ^ (ulonglong)auStack_1468;
  pcVar7 = param_3 + (param_4 & 0xffffffff);
  uVar2 = *(undefined8 *)
           (*(longlong *)(&DAT_18132f520 + ((longlong)(int)param_2 >> 6) * 8) + 0x28 +
           (ulonglong)(param_2 & 0x3f) * 0x48);
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  do {
    if (pcVar7 <= param_3) {
      return param_1;
    }
    pcVar6 = local_1428;
    do {
      if (pcVar7 <= param_3) break;
      cVar1 = *param_3;
      param_3 = param_3 + 1;
      if (cVar1 == '\n') {
        *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
        *pcVar6 = '\r';
        pcVar6 = pcVar6 + 1;
      }
      *pcVar6 = cVar1;
      pcVar6 = pcVar6 + 1;
    } while (pcVar6 < local_1428 + 0x13ff);
    local_1438[0] = 0;
    local_1448 = 0;
    uVar5 = (int)pcVar6 - (int)local_1428;
    iVar3 = (*DAT_181262560)(uVar2,local_1428,uVar5,local_1438);
    if (iVar3 == 0) {
      uVar4 = (*DAT_1812623c8)();
      *(undefined4 *)param_1 = uVar4;
      return param_1;
    }
    *(int *)((longlong)param_1 + 4) = *(int *)((longlong)param_1 + 4) + local_1438[0];
    if (local_1438[0] < uVar5) {
      return param_1;
    }
  } while( true );
}



/* ===== 18125f25c FUN_18125f25c ===== */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_18125f25c(undefined8 *param_1,uint param_2,short *param_3,ulonglong param_4)

{
  short sVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  short *psVar6;
  short *psVar7;
  undefined1 auStack_1468 [32];
  undefined8 local_1448;
  uint local_1438 [4];
  short local_1428 [2560];
  ulonglong local_28;
  undefined8 local_20;
  
  local_20 = 0x18125f274;
  local_28 = DAT_18126c390 ^ (ulonglong)auStack_1468;
  psVar7 = (short *)((param_4 & 0xffffffff) + (longlong)param_3);
  uVar2 = *(undefined8 *)
           (*(longlong *)(&DAT_18132f520 + ((longlong)(int)param_2 >> 6) * 8) + 0x28 +
           (ulonglong)(param_2 & 0x3f) * 0x48);
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  do {
    if (psVar7 <= param_3) {
      return param_1;
    }
    psVar6 = local_1428;
    do {
      if (psVar7 <= param_3) break;
      sVar1 = *param_3;
      param_3 = param_3 + 1;
      if (sVar1 == 10) {
        *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 2;
        *psVar6 = 0xd;
        psVar6 = psVar6 + 1;
      }
      *psVar6 = sVar1;
      psVar6 = psVar6 + 1;
    } while (psVar6 < local_1428 + 0x9ff);
    local_1438[0] = 0;
    local_1448 = 0;
    uVar3 = (int)((longlong)psVar6 - (longlong)local_1428 >> 1) * 2;
    iVar4 = (*DAT_181262560)(uVar2,local_1428,uVar3,local_1438);
    if (iVar4 == 0) {
      uVar5 = (*DAT_1812623c8)();
      *(undefined4 *)param_1 = uVar5;
      return param_1;
    }
    *(int *)((longlong)param_1 + 4) = *(int *)((longlong)param_1 + 4) + local_1438[0];
    if (local_1438[0] < uVar3) {
      return param_1;
    }
  } while( true );
}



/* ===== 18125f378 FUN_18125f378 ===== */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_18125f378(undefined8 *param_1,uint param_2,short *param_3,uint param_4)

{
  short sVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  ulonglong uVar7;
  short *psVar8;
  short *psVar9;
  undefined1 auStack_1498 [32];
  undefined1 *local_1478;
  undefined4 local_1470;
  undefined8 local_1468;
  undefined8 local_1460;
  int local_1458 [4];
  short local_1448 [856];
  undefined1 local_d98 [3424];
  ulonglong local_38;
  undefined8 local_30;
  
  local_30 = 0x18125f394;
  local_38 = DAT_18126c390 ^ (ulonglong)auStack_1498;
  uVar2 = *(undefined8 *)
           (*(longlong *)(&DAT_18132f520 + ((longlong)(int)param_2 >> 6) * 8) + 0x28 +
           (ulonglong)(param_2 & 0x3f) * 0x48);
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  psVar8 = param_3;
  do {
    if ((short *)((ulonglong)param_4 + (longlong)param_3) <= psVar8) {
      return param_1;
    }
    psVar9 = local_1448;
    do {
      if ((short *)((ulonglong)param_4 + (longlong)param_3) <= psVar8) break;
      sVar1 = *psVar8;
      psVar8 = psVar8 + 1;
      if (sVar1 == 10) {
        *psVar9 = 0xd;
        psVar9 = psVar9 + 1;
      }
      *psVar9 = sVar1;
      psVar9 = psVar9 + 1;
    } while (psVar9 < local_1448 + 0x354);
    local_1460 = 0;
    local_1468 = 0;
    local_1470 = 0xd55;
    local_1478 = local_d98;
    uVar3 = FUN_18125b7e8(0xfde9,0,local_1448,(longlong)psVar9 - (longlong)local_1448 >> 1);
    if (uVar3 == 0) {
LAB_18125f4b5:
      uVar5 = (*DAT_1812623c8)();
      *(undefined4 *)param_1 = uVar5;
      return param_1;
    }
    uVar7 = 0;
    if (uVar3 != 0) {
      do {
        local_1458[0] = 0;
        local_1478 = (undefined1 *)0x0;
        iVar4 = (*DAT_181262560)(uVar2,local_d98 + uVar7,uVar3 - (int)uVar7,local_1458);
        if (iVar4 == 0) goto LAB_18125f4b5;
        uVar6 = (int)uVar7 + local_1458[0];
        uVar7 = (ulonglong)uVar6;
      } while (uVar6 < uVar3);
    }
    *(int *)((longlong)param_1 + 4) = (int)psVar8 - (int)param_3;
  } while( true );
}



/* ===== 18125f4ec FUN_18125f4ec ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_18125f4ec(uint param_1,undefined8 param_2,undefined4 param_3,longlong param_4)

{
  bool bVar1;
  undefined4 uVar2;
  
  if (param_1 == 0xfffffffe) {
    *(undefined1 *)(param_4 + 0x38) = 1;
    *(undefined4 *)(param_4 + 0x34) = 0;
    *(undefined1 *)(param_4 + 0x30) = 1;
    *(undefined4 *)(param_4 + 0x2c) = 9;
  }
  else {
    if (((int)param_1 < 0) || (_DAT_18132f920 <= param_1)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      if ((*(byte *)(*(longlong *)(&DAT_18132f520 + ((longlong)(int)param_1 >> 6) * 8) + 0x38 +
                    (ulonglong)(param_1 & 0x3f) * 0x48) & 1) != 0) {
        FUN_18125ea1c(param_1);
        uVar2 = 0xffffffff;
        if ((*(byte *)(*(longlong *)(&DAT_18132f520 + ((longlong)(int)param_1 >> 6) * 8) + 0x38 +
                      (ulonglong)(param_1 & 0x3f) * 0x48) & 1) == 0) {
          *(undefined1 *)(param_4 + 0x30) = 1;
          *(undefined4 *)(param_4 + 0x2c) = 9;
          *(undefined1 *)(param_4 + 0x38) = 1;
          *(undefined4 *)(param_4 + 0x34) = 0;
        }
        else {
          uVar2 = FUN_18125f60c(param_1,param_2,param_3,param_4);
        }
        FUN_18125ea44(param_1);
        return uVar2;
      }
    }
    *(undefined1 *)(param_4 + 0x38) = 1;
    *(undefined4 *)(param_4 + 0x34) = 0;
    *(undefined1 *)(param_4 + 0x30) = 1;
    *(undefined4 *)(param_4 + 0x2c) = 9;
    FUN_181259a9c(0,0,0,0,0,param_4);
  }
  return 0xffffffff;
}



/* ===== 18125f60c FUN_18125f60c ===== */

int FUN_18125f60c(uint param_1,short *param_2,uint param_3,longlong param_4)

{
  char cVar1;
  int iVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  ulonglong *puVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  short *psVar12;
  undefined8 local_70;
  int local_68;
  ulonglong local_60;
  undefined4 local_50 [4];
  
  iVar9 = 0;
  uVar11 = (ulonglong)param_3;
  if (param_3 == 0) {
    return 0;
  }
  if (param_2 == (short *)0x0) {
LAB_18125f63c:
    *(undefined1 *)(param_4 + 0x38) = 1;
    *(undefined4 *)(param_4 + 0x34) = 0;
    *(undefined1 *)(param_4 + 0x30) = 1;
    *(undefined4 *)(param_4 + 0x2c) = 0x16;
    FUN_181259a9c(0,0,0,0,0,param_4);
    return -1;
  }
  uVar7 = (ulonglong)(param_1 & 0x3f);
  lVar10 = (longlong)(int)param_1 >> 6;
  cVar1 = *(char *)(*(longlong *)(&DAT_18132f520 + lVar10 * 8) + 0x39 + uVar7 * 0x48);
  if (((byte)(cVar1 - 1U) < 2) && ((~param_3 & 1) == 0)) goto LAB_18125f63c;
  if ((*(byte *)(*(longlong *)(&DAT_18132f520 + lVar10 * 8) + 0x38 + uVar7 * 0x48) & 0x20) != 0) {
    thunk_FUN_18125fe10(param_1,0,2);
  }
  local_60 = 0;
  iVar5 = FUN_18125fa34();
  if ((iVar5 == 0) ||
     (-1 < *(char *)(*(longlong *)(&DAT_18132f520 + lVar10 * 8) + 0x38 + uVar7 * 0x48))) {
LAB_18125f7f4:
    if (-1 < *(char *)(*(longlong *)(&DAT_18132f520 + lVar10 * 8) + 0x38 +
                      (ulonglong)(param_1 & 0x3f) * 0x48)) {
      local_70 = 0;
      local_68 = 0;
      iVar5 = (*DAT_181262560)(*(undefined8 *)
                                (*(longlong *)(&DAT_18132f520 + lVar10 * 8) + 0x28 +
                                (ulonglong)(param_1 & 0x3f) * 0x48),param_2,uVar11,
                               (longlong)&local_70 + 4,0);
      iVar9 = local_68;
      uVar7 = local_70;
      if (iVar5 == 0) {
        uVar6 = (*DAT_1812623c8)();
        local_70 = CONCAT44(local_70._4_4_,uVar6);
        iVar9 = local_68;
        uVar7 = local_70;
      }
      goto LAB_18125f8a9;
    }
    if (cVar1 == '\0') {
      puVar8 = (ulonglong *)FUN_18125f154(&local_70,param_1,param_2,uVar11);
    }
    else if (cVar1 == '\x01') {
      puVar8 = (ulonglong *)FUN_18125f378(&local_70,param_1,param_2,uVar11);
    }
    else {
      uVar7 = local_60;
      if (cVar1 != '\x02') goto LAB_18125f8a9;
      puVar8 = (ulonglong *)FUN_18125f25c(&local_70,param_1,param_2,uVar11);
    }
  }
  else {
    if (*(char *)(param_4 + 0x28) == '\0') {
      FUN_181258ff0();
    }
    if ((*(longlong *)(*(longlong *)(param_4 + 0x18) + 0x138) == 0) &&
       (*(char *)(*(longlong *)(&DAT_18132f520 + lVar10 * 8) + 0x39 + uVar7 * 0x48) == '\0'))
    goto LAB_18125f7f4;
    local_50[0] = 0;
    iVar5 = (*DAT_181262570)(*(undefined8 *)
                              (*(longlong *)(&DAT_18132f520 + lVar10 * 8) + 0x28 + uVar7 * 0x48),
                             local_50);
    if (iVar5 == 0) goto LAB_18125f7f4;
    if (cVar1 != '\0') {
      if ((cVar1 == '\x01') || (uVar7 = local_60, cVar1 == '\x02')) {
        local_70 = 0;
        uVar7 = local_70;
        if (param_2 < (short *)((longlong)param_2 + uVar11)) {
          local_70._4_4_ = 0;
          psVar12 = param_2;
          iVar5 = local_70._4_4_;
          do {
            sVar4 = *psVar12;
            sVar3 = FUN_18125fec8(sVar4);
            if (sVar3 != sVar4) {
LAB_18125f7bc:
              uVar6 = (*DAT_1812623c8)();
              local_70 = CONCAT44(local_70._4_4_,uVar6);
              uVar7 = local_70;
              break;
            }
            local_70 = CONCAT44(iVar5 + 2,(undefined4)local_70);
            iVar2 = iVar5 + 2;
            if (sVar4 == 10) {
              sVar4 = FUN_18125fec8(0xd);
              if (sVar4 != 0xd) goto LAB_18125f7bc;
              local_70 = CONCAT44(iVar5 + 3,(undefined4)local_70);
              iVar9 = iVar9 + 1;
              iVar2 = iVar5 + 3;
            }
            iVar5 = iVar2;
            psVar12 = psVar12 + 1;
            uVar7 = local_70;
          } while (psVar12 < (short *)((longlong)param_2 + uVar11));
        }
      }
      goto LAB_18125f8a9;
    }
    puVar8 = (ulonglong *)FUN_18125ecc0(&local_70,param_1,param_2,uVar11,param_4);
  }
  iVar9 = (int)puVar8[1];
  uVar7 = *puVar8;
LAB_18125f8a9:
  local_60 = uVar7;
  iVar5 = (int)(local_60 >> 0x20);
  if (iVar5 != 0) {
    return iVar5 - iVar9;
  }
  if ((int)local_60 != 0) {
    if ((int)local_60 == 5) {
      *(undefined1 *)(param_4 + 0x30) = 1;
      *(undefined4 *)(param_4 + 0x2c) = 9;
      *(undefined1 *)(param_4 + 0x38) = 1;
      *(undefined4 *)(param_4 + 0x34) = 5;
      return -1;
    }
    FUN_181259cb4(local_60 & 0xffffffff,param_4);
    return -1;
  }
  if (((*(byte *)(*(longlong *)(&DAT_18132f520 + lVar10 * 8) + 0x38 +
                 (ulonglong)(param_1 & 0x3f) * 0x48) & 0x40) == 0) || ((char)*param_2 != '\x1a')) {
    *(undefined4 *)(param_4 + 0x34) = 0;
    *(undefined1 *)(param_4 + 0x30) = 1;
    *(undefined4 *)(param_4 + 0x2c) = 0x1c;
    *(undefined1 *)(param_4 + 0x38) = 1;
    return -1;
  }
  return 0;
}



/* ===== 18125f9f0 __acrt_stdio_free_buffer_nolock ===== */

/* Library Function - Single Match
    __acrt_stdio_free_buffer_nolock
   
   Library: Visual Studio 2019 Release */

void __acrt_stdio_free_buffer_nolock(undefined8 *param_1)

{
  if (((*(uint *)((longlong)param_1 + 0x14) >> 0xd & 1) != 0) &&
     ((*(uint *)((longlong)param_1 + 0x14) >> 6 & 1) != 0)) {
    FUN_181259da0(param_1[1]);
    LOCK();
    *(uint *)((longlong)param_1 + 0x14) = *(uint *)((longlong)param_1 + 0x14) & 0xfffffebf;
    UNLOCK();
    param_1[1] = 0;
    *param_1 = 0;
    *(undefined4 *)(param_1 + 2) = 0;
  }
  return;
}



/* ===== 18125fa34 FUN_18125fa34 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_18125fa34(uint param_1)

{
  undefined4 *puVar1;
  
  if (param_1 == 0xfffffffe) {
    puVar1 = (undefined4 *)FUN_181259cfc();
    *puVar1 = 9;
  }
  else {
    if ((-1 < (int)param_1) && (param_1 < _DAT_18132f920)) {
      return *(byte *)(*(longlong *)(&DAT_18132f520 + ((ulonglong)(longlong)(int)param_1 >> 6) * 8)
                       + 0x38 + (ulonglong)(param_1 & 0x3f) * 0x48) & 0x40;
    }
    puVar1 = (undefined4 *)FUN_181259cfc();
    *puVar1 = 9;
    FUN_181259b54();
  }
  return 0;
}



/* ===== 18125fa94 FUN_18125fa94 ===== */

undefined8 FUN_18125fa94(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  return param_1;
}



/* ===== 18125fa9c FUN_18125fa9c ===== */

undefined8 FUN_18125fa9c(undefined8 *param_1,longlong param_2)

{
  *param_1 = 0;
  *(undefined1 *)(param_2 + 0x30) = 1;
  *(undefined4 *)(param_2 + 0x2c) = 0x2a;
  return 0xffffffffffffffff;
}



/* ===== 18125fab0 __acrt_locale_free_monetary ===== */

/* Library Function - Single Match
    __acrt_locale_free_monetary
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_locale_free_monetary(longlong param_1)

{
  if (param_1 != 0) {
    if (*(longlong *)(param_1 + 0x18) != DAT_18126cc08) {
      FUN_181259da0();
    }
    if (*(longlong *)(param_1 + 0x20) != DAT_18126cc10) {
      FUN_181259da0();
    }
    if (*(longlong *)(param_1 + 0x28) != DAT_18126cc18) {
      FUN_181259da0();
    }
    if (*(longlong *)(param_1 + 0x30) != DAT_18126cc20) {
      FUN_181259da0();
    }
    if (*(longlong *)(param_1 + 0x38) != DAT_18126cc28) {
      FUN_181259da0();
    }
    if (*(longlong *)(param_1 + 0x40) != DAT_18126cc30) {
      FUN_181259da0();
    }
    if (*(longlong *)(param_1 + 0x48) != DAT_18126cc38) {
      FUN_181259da0();
    }
    if (*(longlong *)(param_1 + 0x68) != DAT_18126cc58) {
      FUN_181259da0();
    }
    if (*(longlong *)(param_1 + 0x70) != DAT_18126cc60) {
      FUN_181259da0();
    }
    if (*(longlong *)(param_1 + 0x78) != DAT_18126cc68) {
      FUN_181259da0();
    }
    if (*(longlong *)(param_1 + 0x80) != DAT_18126cc70) {
      FUN_181259da0();
    }
    if (*(longlong *)(param_1 + 0x88) != DAT_18126cc78) {
      FUN_181259da0();
    }
    if (*(longlong *)(param_1 + 0x90) != DAT_18126cc80) {
      FUN_181259da0();
    }
  }
  return;
}



/* ===== 18125fbbc __acrt_locale_free_numeric ===== */

/* Library Function - Single Match
    __acrt_locale_free_numeric
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_locale_free_numeric(longlong *param_1)

{
  if (param_1 != (longlong *)0x0) {
    if (*param_1 != DAT_18126cbf0) {
      FUN_181259da0();
    }
    if (param_1[1] != DAT_18126cbf8) {
      FUN_181259da0();
    }
    if (param_1[2] != DAT_18126cc00) {
      FUN_181259da0();
    }
    if (param_1[0xb] != DAT_18126cc48) {
      FUN_181259da0();
    }
    if (param_1[0xc] != DAT_18126cc50) {
      FUN_181259da0();
    }
  }
  return;
}



/* ===== 18125fc28 FUN_18125fc28 ===== */

void FUN_18125fc28(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + param_2;
  for (; param_1 != puVar1; param_1 = param_1 + 1) {
    FUN_181259da0(*param_1);
  }
  return;
}



/* ===== 18125fc5c __acrt_locale_free_time ===== */

/* Library Function - Single Match
    __acrt_locale_free_time
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_locale_free_time(longlong param_1)

{
  if (param_1 != 0) {
    FUN_18125fc28(param_1,7);
    FUN_18125fc28(param_1 + 0x38,7);
    FUN_18125fc28(param_1 + 0x70,0xc);
    FUN_18125fc28(param_1 + 0xd0,0xc);
    FUN_18125fc28(param_1 + 0x130,2);
    FUN_181259da0(*(undefined8 *)(param_1 + 0x140));
    FUN_181259da0(*(undefined8 *)(param_1 + 0x148));
    FUN_181259da0(*(undefined8 *)(param_1 + 0x150));
    FUN_18125fc28(param_1 + 0x160,7);
    FUN_18125fc28(param_1 + 0x198,7);
    FUN_18125fc28(param_1 + 0x1d0,0xc);
    FUN_18125fc28(param_1 + 0x230,0xc);
    FUN_18125fc28(param_1 + 0x290,2);
    FUN_181259da0(*(undefined8 *)(param_1 + 0x2a0));
    FUN_181259da0(*(undefined8 *)(param_1 + 0x2a8));
    FUN_181259da0(*(undefined8 *)(param_1 + 0x2b0));
    FUN_181259da0(*(undefined8 *)(param_1 + 0x2b8));
  }
  return;
}



/* ===== 18125fd64 FUN_18125fd64 ===== */

void FUN_18125fd64(void)

{
  (*DAT_181262598)();
  return;
}



/* ===== 18125fd80 __strncnt ===== */

/* Library Function - Single Match
    __strncnt
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

size_t __cdecl __strncnt(char *_String,size_t _Cnt)

{
  char cVar1;
  size_t sVar2;
  
  sVar2 = 0;
  cVar1 = *_String;
  while ((cVar1 != '\0' && (sVar2 != _Cnt))) {
    sVar2 = sVar2 + 1;
    cVar1 = _String[sVar2];
  }
  return sVar2;
}



/* ===== 18125fda0 FUN_18125fda0 ===== */

int FUN_18125fda0(ushort *param_1,ushort *param_2,longlong param_3)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_3 == 0) {
    return 0;
  }
  do {
    uVar1 = *param_1;
    uVar3 = (uint)uVar1;
    param_1 = param_1 + 1;
    uVar2 = *param_2;
    uVar4 = (uint)uVar2;
    param_2 = param_2 + 1;
    if ((uint)uVar1 != (uint)uVar2) {
      uVar3 = uVar1 + 0x20;
      if (0x19 < uVar1 - 0x41) {
        uVar3 = (uint)uVar1;
      }
      uVar4 = uVar2 + 0x20;
      if (0x19 < uVar2 - 0x41) {
        uVar4 = (uint)uVar2;
      }
    }
  } while (((uVar3 - uVar4 == 0) && (uVar3 != 0)) && (param_3 = param_3 + -1, param_3 != 0));
  return uVar3 - uVar4;
}



/* ===== 18125fe08 FUN_18125fe08 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_18125fe08(void)

{
  return _DAT_18132f9a0;
}



/* ===== 18125fe10 FUN_18125fe10 ===== */

longlong FUN_18125fe10(uint param_1,undefined8 param_2,undefined4 param_3,longlong param_4)

{
  byte *pbVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong local_18 [2];
  
  lVar4 = FUN_18125eb28(param_1);
  if (lVar4 == -1) {
    *(undefined1 *)(param_4 + 0x30) = 1;
    *(undefined4 *)(param_4 + 0x2c) = 9;
  }
  else {
    local_18[0] = 0;
    iVar2 = (*DAT_181262578)(lVar4,param_2,local_18,param_3);
    if (iVar2 == 0) {
      uVar3 = (*DAT_1812623c8)();
      FUN_181259cb4(uVar3,param_4);
    }
    else if (local_18[0] != -1) {
      pbVar1 = (byte *)(*(longlong *)(&DAT_18132f520 + ((longlong)(int)param_1 >> 6) * 8) + 0x38 +
                       (ulonglong)(param_1 & 0x3f) * 0x48);
      *pbVar1 = *pbVar1 & 0xfd;
      return local_18[0];
    }
  }
  return -1;
}



/* ===== 18125fec0 thunk_FUN_18125fe10 ===== */

longlong thunk_FUN_18125fe10(uint param_1,undefined8 param_2,undefined4 param_3,longlong param_4)

{
  byte *pbVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong alStack_18 [2];
  
  lVar4 = FUN_18125eb28(param_1);
  if (lVar4 == -1) {
    *(undefined1 *)(param_4 + 0x30) = 1;
    *(undefined4 *)(param_4 + 0x2c) = 9;
  }
  else {
    alStack_18[0] = 0;
    iVar2 = (*DAT_181262578)(lVar4,param_2,alStack_18,param_3);
    if (iVar2 == 0) {
      uVar3 = (*DAT_1812623c8)();
      FUN_181259cb4(uVar3,param_4);
    }
    else if (alStack_18[0] != -1) {
      pbVar1 = (byte *)(*(longlong *)(&DAT_18132f520 + ((longlong)(int)param_1 >> 6) * 8) + 0x38 +
                       (ulonglong)(param_1 & 0x3f) * 0x48);
      *pbVar1 = *pbVar1 & 0xfd;
      return alStack_18[0];
    }
  }
  return -1;
}



/* ===== 18125fec8 FUN_18125fec8 ===== */

undefined2 FUN_18125fec8(undefined2 param_1)

{
  int iVar1;
  undefined2 local_res8 [4];
  undefined4 local_res10 [6];
  
  local_res8[0] = param_1;
  iVar1 = __dcrt_lowio_ensure_console_output_initialized();
  if (iVar1 != 0) {
    local_res10[0] = 0;
    iVar1 = __dcrt_write_console(local_res8,1,local_res10);
    if (iVar1 != 0) {
      return local_res8[0];
    }
  }
  return 0xffff;
}



/* ===== 18125ff08 FUN_18125ff08 ===== */

undefined4 FUN_18125ff08(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    *(undefined1 *)(param_2 + 0x30) = 1;
    *(undefined4 *)(param_2 + 0x2c) = 0x16;
    FUN_181259a9c(0,0,0,0,0,param_2);
  }
  else {
    if ((*(uint *)(param_1 + 0x14) >> 0xc & 1) == 0) {
      FUN_18125cb9c();
      uVar1 = FUN_18125ff84(param_1,param_2);
      FUN_18125cba8(param_1);
      return uVar1;
    }
    FUN_18126040c();
  }
  return 0xffffffff;
}



/* ===== 18125ff84 FUN_18125ff84 ===== */

undefined4 FUN_18125ff84(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_1 == 0) {
    *(undefined1 *)(param_2 + 0x30) = 1;
    *(undefined4 *)(param_2 + 0x2c) = 0x16;
    FUN_181259a9c(0,0,0,0,0,param_2);
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = 0xffffffff;
    if ((*(uint *)(param_1 + 0x14) >> 0xd & 1) != 0) {
      uVar1 = FUN_18125c8b8();
      __acrt_stdio_free_buffer_nolock(param_1);
      uVar2 = FUN_18125d268(param_1);
      iVar3 = FUN_181260278(uVar2,param_2);
      if (iVar3 < 0) {
        uVar1 = 0xffffffff;
      }
      else if (*(longlong *)(param_1 + 0x28) != 0) {
        FUN_181259da0();
        *(undefined8 *)(param_1 + 0x28) = 0;
      }
    }
    FUN_18126040c(param_1);
  }
  return uVar1;
}



/* ===== 18126002c FUN_18126002c ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_18126002c(undefined4 param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong local_48 [2];
  undefined1 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  char local_20;
  undefined4 local_1c;
  char local_18;
  undefined4 local_14;
  char local_10;
  
  local_48[0] = 0;
  local_20 = _DAT_18132f990 == 0;
  local_38 = 0;
  local_18 = '\0';
  local_10 = '\0';
  if ((bool)local_20) {
    local_30 = _DAT_18126cac8;
    uStack_2c = uRam000000018126cacc;
    uStack_28 = _DAT_18126cad0;
    uStack_24 = uRam000000018126cad4;
    param_1 = _DAT_18126cac8;
  }
  uVar1 = FUN_18125ff08(param_1,local_48);
  if (local_20 == '\x02') {
    *(uint *)(local_48[0] + 0x3a8) = *(uint *)(local_48[0] + 0x3a8) & 0xfffffffd;
  }
  if (local_18 != '\0') {
    lVar2 = FUN_181258f80(local_48);
    *(undefined4 *)(lVar2 + 0x20) = local_1c;
  }
  if (local_10 != '\0') {
    lVar2 = FUN_181258f80(local_48);
    *(undefined4 *)(lVar2 + 0x24) = local_14;
  }
  return uVar1;
}



/* ===== 1812600d0 __dcrt_lowio_ensure_console_output_initialized ===== */

/* Library Function - Single Match
    __dcrt_lowio_ensure_console_output_initialized
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

bool __dcrt_lowio_ensure_console_output_initialized(void)

{
  if (DAT_18126cd90 == -2) {
    DAT_18126cd90 = (*DAT_181262580)(&DAT_1812683d0,0x40000000,3,0,3,0,0);
  }
  return DAT_18126cd90 != -1;
}



/* ===== 181260140 __dcrt_write_console ===== */

/* Library Function - Single Match
    __dcrt_write_console
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

int __dcrt_write_console(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  iVar1 = (*DAT_1812623b0)(DAT_18126cd90,param_1,param_2,param_3,0);
  if (iVar1 == 0) {
    iVar2 = (*DAT_1812623c8)();
    if (iVar2 == 6) {
      if (DAT_18126cd90 < 0xfffffffffffffffe) {
        (*DAT_181262588)();
      }
      DAT_18126cd90 = (*DAT_181262580)(&DAT_1812683d0,0x40000000,3,0,CONCAT44(uVar3,3),0,0);
      iVar1 = (*DAT_1812623b0)(DAT_18126cd90,param_1,param_2,param_3,0);
    }
  }
  return iVar1;
}



/* ===== 181260200 FUN_181260200 ===== */

undefined4
FUN_181260200(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,undefined4 *param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  
  FUN_18125ea1c(*param_2);
  lVar1 = param_3[1];
  if ((*(byte *)(*(longlong *)(&DAT_18132f520 + ((longlong)(int)*(uint *)*param_3 >> 6) * 8) + 0x38
                + (ulonglong)(*(uint *)*param_3 & 0x3f) * 0x48) & 1) == 0) {
    *(undefined1 *)(lVar1 + 0x30) = 1;
    *(undefined4 *)(lVar1 + 0x2c) = 9;
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = FUN_18126033c();
  }
  FUN_18125ea44(*param_4);
  return uVar2;
}



/* ===== 181260278 FUN_181260278 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_181260278(uint param_1,longlong param_2)

{
  undefined8 uVar1;
  uint local_res8 [4];
  undefined1 local_res18 [8];
  uint local_res20 [2];
  uint local_28 [2];
  uint *local_20;
  longlong local_18;
  
  if (param_1 == 0xfffffffe) {
    *(undefined1 *)(param_2 + 0x38) = 1;
    *(undefined4 *)(param_2 + 0x34) = 0;
    *(undefined1 *)(param_2 + 0x30) = 1;
    *(undefined4 *)(param_2 + 0x2c) = 9;
  }
  else {
    local_res8[0] = param_1;
    if (((-1 < (int)param_1) && (param_1 < _DAT_18132f920)) &&
       ((*(byte *)(*(longlong *)(&DAT_18132f520 + ((longlong)(int)param_1 >> 6) * 8) + 0x38 +
                  (ulonglong)(param_1 & 0x3f) * 0x48) & 1) != 0)) {
      local_20 = local_res8;
      local_res20[0] = param_1;
      local_28[0] = param_1;
      local_18 = param_2;
      uVar1 = FUN_181260200(local_res18,local_28,&local_20,local_res20);
      return uVar1;
    }
    *(undefined1 *)(param_2 + 0x38) = 1;
    *(undefined4 *)(param_2 + 0x34) = 0;
    *(undefined1 *)(param_2 + 0x30) = 1;
    *(undefined4 *)(param_2 + 0x2c) = 9;
    FUN_181259a9c(0,0,0,0,0,param_2);
  }
  return 0xffffffff;
}



/* ===== 18126033c FUN_18126033c ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_18126033c(uint param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  lVar2 = FUN_18125eb28(param_1);
  if (lVar2 != -1) {
    if (((param_1 == 1) && ((*(byte *)(_DAT_18132f520 + 200) & 1) != 0)) ||
       ((param_1 == 2 && ((*(byte *)(_DAT_18132f520 + 0x80) & 1) != 0)))) {
      lVar2 = FUN_18125eb28();
      lVar3 = FUN_18125eb28(1);
      if (lVar3 == lVar2) goto LAB_18126035e;
    }
    uVar4 = FUN_18125eb28(param_1);
    iVar1 = (*DAT_181262588)(uVar4);
    if (iVar1 == 0) {
      iVar1 = (*DAT_1812623c8)();
      goto LAB_1812603bc;
    }
  }
LAB_18126035e:
  iVar1 = 0;
LAB_1812603bc:
  FUN_18125ea6c(param_1);
  *(undefined1 *)
   (*(longlong *)(&DAT_18132f520 + ((longlong)(int)param_1 >> 6) * 8) + 0x38 +
   (ulonglong)(param_1 & 0x3f) * 0x48) = 0;
  if (iVar1 == 0) {
    uVar4 = 0;
  }
  else {
    FUN_181259cb4(iVar1,param_2);
    uVar4 = 0xffffffff;
  }
  return uVar4;
}



/* ===== 18126040c FUN_18126040c ===== */

undefined4 FUN_18126040c(undefined8 *param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  param_1[5] = 0;
  LOCK();
  uVar1 = *(undefined4 *)((longlong)param_1 + 0x14);
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  UNLOCK();
  return uVar1;
}



/* ===== 181260430 FUN_181260430 ===== */

/* WARNING: Removing unreachable block (ram,0x0001812604b0) */
/* WARNING: Removing unreachable block (ram,0x0001812604a2) */
/* WARNING: Removing unreachable block (ram,0x000181260447) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_181260430(void)

{
  longlong lVar1;
  int *piVar2;
  undefined8 uVar3;
  byte in_XCR0;
  
  _DAT_18132f9a4 = 0;
  _DAT_18132f9a8 = 0;
  lVar1 = cpuid_Version_info(1);
  if ((*(uint *)(lVar1 + 0xc) & 0x18001000) == 0x18001000) {
    uVar3 = xinuse(0);
    if ((in_XCR0 & (byte)uVar3 & 6) == 6) {
      _DAT_18132f9a4 = 1;
      _DAT_18132f9a8 = 1;
    }
    else {
      _DAT_18132f9a4 = 0;
    }
  }
  if ((_DAT_18132f9a4 != 0) && (piVar2 = (int *)cpuid_basic_info(0), 6 < *piVar2)) {
    lVar1 = cpuid_Extended_Feature_Enumeration_info(7);
    if ((*(uint *)(lVar1 + 4) & 0x20) != 0) {
      _DAT_18132f9a8 = 3;
      _DAT_18132f9a4 = 3;
      return 0;
    }
  }
  return 0;
}



