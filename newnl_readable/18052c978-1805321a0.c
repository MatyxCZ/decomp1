/* ===== 18052c978 FUN_18052c978 ===== */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_18052c978(undefined8 param_1,DWORD param_2,SYSTEMTIME *param_3,LPCWSTR param_4,
                  LPWSTR param_5,int param_6)

{
  LCID Locale;
  code *pcVar1;
  
  if (DAT_181149068 == (code *)0xffffffffffffffff) {
LAB_18052c9ef:
    Locale = FUN_18052cc8c(param_1,0);
    GetTimeFormatW(Locale,param_2,param_3,param_4,param_5,param_6);
  }
  else {
    pcVar1 = DAT_181149068;
    if (DAT_181149068 == (code *)0x0) {
      pcVar1 = (code *)FUN_18052c3d0(0xd,"GetTimeFormatEx",&DAT_18057dce0,"GetTimeFormatEx");
      if (pcVar1 == (code *)0x0) goto LAB_18052c9ef;
    }
    (*pcVar1)(param_1,param_2,param_3,param_4,param_5,param_6);
  }
  return;
}



/* ===== 18052ca30 FUN_18052ca30 ===== */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_18052ca30(undefined8 param_1,undefined4 param_2)

{
  LCID LVar1;
  code *pcVar2;
  
  if (DAT_181149070 == (code *)0xffffffffffffffff) {
LAB_18052ca7f:
    LVar1 = GetUserDefaultLCID();
    FUN_18052cb10(LVar1,param_1,param_2,0);
  }
  else {
    pcVar2 = DAT_181149070;
    if (DAT_181149070 == (code *)0x0) {
      pcVar2 = (code *)FUN_18052c3d0(0xe,"GetUserDefaultLocaleName",&DAT_18057dcf8,
                                     "GetUserDefaultLocaleName");
      if (pcVar2 == (code *)0x0) goto LAB_18052ca7f;
    }
    (*pcVar2)(param_1,param_2);
  }
  return;
}



/* ===== 18052caa0 KERNEL32.DLL::InitializeCriticalSectionEx ===== */

BOOL __stdcall
InitializeCriticalSectionEx(LPCRITICAL_SECTION lpCriticalSection,DWORD dwSpinCount,DWORD Flags)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00018052caa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = InitializeCriticalSectionEx(lpCriticalSection,dwSpinCount,Flags);
  return BVar1;
}



/* ===== 18052caa8 FUN_18052caa8 ===== */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_18052caa8(undefined8 param_1)

{
  LCID Locale;
  code *pcVar1;
  
  if (DAT_181149088 == (code *)0xffffffffffffffff) {
LAB_18052caf2:
    Locale = FUN_18052cc8c(param_1,0);
                    /* WARNING: Could not recover jumptable at 0x00018052cb08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    IsValidLocale(Locale,1);
    return;
  }
  pcVar1 = DAT_181149088;
  if (DAT_181149088 == (code *)0x0) {
    pcVar1 = (code *)FUN_18052c3d0(0x11,"IsValidLocaleName",&DAT_18057dd20,"IsValidLocaleName");
    if (pcVar1 == (code *)0x0) goto LAB_18052caf2;
  }
  (*pcVar1)(param_1);
  return;
}



/* ===== 18052cb10 FUN_18052cb10 ===== */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_18052cb10(undefined4 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  
  if (DAT_181149098 == (code *)0xffffffffffffffff) {
LAB_18052cb75:
    FUN_18053b934(param_1,param_2,param_3);
  }
  else {
    pcVar1 = DAT_181149098;
    if (DAT_181149098 == (code *)0x0) {
      pcVar1 = (code *)FUN_18052c3d0(0x13,"LCIDToLocaleName",&DAT_18057dd58,"LCIDToLocaleName");
      if (pcVar1 == (code *)0x0) goto LAB_18052cb75;
    }
    (*pcVar1)(param_1,param_2,param_3,param_4);
  }
  return;
}



/* ===== 18052cb98 FUN_18052cb98 ===== */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_18052cb98(undefined8 param_1,DWORD param_2,LPCWSTR param_3,int param_4,LPWSTR param_5,
                  int param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  LCID Locale;
  code *pcVar1;
  
  if (DAT_181149090 == (code *)0xffffffffffffffff) {
LAB_18052cc43:
    Locale = FUN_18052cc8c(param_1,0);
    LCMapStringW(Locale,param_2,param_3,param_4,param_5,param_6);
  }
  else {
    pcVar1 = DAT_181149090;
    if (DAT_181149090 == (code *)0x0) {
      pcVar1 = (code *)FUN_18052c3d0(0x12,"LCMapStringEx",&DAT_18057dd40,"LCMapStringEx");
      if (pcVar1 == (code *)0x0) goto LAB_18052cc43;
    }
    (*pcVar1)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  }
  return;
}



/* ===== 18052cc8c FUN_18052cc8c ===== */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_18052cc8c(undefined8 param_1,undefined4 param_2)

{
  code *pcVar1;
  
  if (DAT_1811490a0 == (code *)0xffffffffffffffff) {
LAB_18052ccdb:
    FUN_18053ba1c(param_1);
  }
  else {
    pcVar1 = DAT_1811490a0;
    if (DAT_1811490a0 == (code *)0x0) {
      pcVar1 = (code *)FUN_18052c3d0(0x14,"LocaleNameToLCID",&DAT_18057dd78,"LocaleNameToLCID");
      if (pcVar1 == (code *)0x0) goto LAB_18052ccdb;
    }
    (*pcVar1)(param_1,param_2);
  }
  return;
}



/* ===== 18052ccf0 FUN_18052ccf0 ===== */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 FUN_18052ccf0(undefined4 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  
  if (DAT_1811490c0 == (code *)0xffffffffffffffff) {
    return 0;
  }
  pcVar1 = DAT_1811490c0;
  if ((DAT_1811490c0 == (code *)0x0) &&
     (pcVar1 = (code *)FUN_18052c3d0(0x18,"RoInitialize",&DAT_18057dd94,"RoInitialize"),
     pcVar1 == (code *)0x0)) {
    return 0;
  }
  uVar2 = (*pcVar1)(param_1);
  return uVar2;
}



/* ===== 18052cd40 FUN_18052cd40 ===== */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_18052cd40(void)

{
  code *pcVar1;
  
  if (DAT_1811490c8 != (code *)0xffffffffffffffff) {
    pcVar1 = DAT_1811490c8;
    if ((DAT_1811490c8 == (code *)0x0) &&
       (pcVar1 = (code *)FUN_18052c3d0(0x19,"RoUninitialize",&DAT_18057dda8,&DAT_18057ddac),
       pcVar1 == (code *)0x0)) {
      return;
    }
    (*pcVar1)();
  }
  return;
}



/* ===== 18052cd84 FUN_18052cd84 ===== */

bool FUN_18052cd84(void)

{
  longlong lVar1;
  
  lVar1 = FUN_18052c398();
  return lVar1 != 0;
}



/* ===== 18052cd98 FUN_18052cd98 ===== */

void FUN_18052cd98(void)

{
  if (DAT_181149000 == 0) {
    FUN_18052c3d0(0,"AreFileApisANSI",&DAT_18057dc48,&DAT_18057dc4c);
  }
  FUN_18052c398();
  if (DAT_181149010 == 0) {
    FUN_18052c3d0(2,"EnumSystemLocalesEx",&DAT_18057dc78,"EnumSystemLocalesEx");
  }
  if (DAT_181149028 == 0) {
    FUN_18052c3d0(5,"GetDateFormatEx",&DAT_18057dcb0,"GetDateFormatEx");
  }
  if (DAT_181149050 == 0) {
    FUN_18052c3d0(10,"GetLocaleInfoEx",&DAT_18057dcc8,"GetLocaleInfoEx");
  }
  if (DAT_181149068 == 0) {
    FUN_18052c3d0(0xd,"GetTimeFormatEx",&DAT_18057dce0,"GetTimeFormatEx");
  }
  if (DAT_181149070 == 0) {
    FUN_18052c3d0(0xe,"GetUserDefaultLocaleName",&DAT_18057dcf8,"GetUserDefaultLocaleName");
  }
  if (DAT_181149088 == 0) {
    FUN_18052c3d0(0x11,"IsValidLocaleName",&DAT_18057dd20,"IsValidLocaleName");
  }
  if (DAT_181149090 == 0) {
    FUN_18052c3d0(0x12,"LCMapStringEx",&DAT_18057dd40,"LCMapStringEx");
  }
  if (DAT_181149098 == 0) {
    FUN_18052c3d0(0x13,"LCIDToLocaleName",&DAT_18057dd58,"LCIDToLocaleName");
  }
  if (DAT_1811490a0 == 0) {
    FUN_18052c3d0(0x14,"LocaleNameToLCID",&DAT_18057dd78,"LocaleNameToLCID");
  }
  return;
}



/* ===== 18052cf40 FUN_18052cf40 ===== */

bool FUN_18052cf40(void)

{
  BOOL BVar1;
  DWORD local_res8 [8];
  
  local_res8[0] = 0;
  BVar1 = VirtualProtect(&DAT_181149000,0x100,2,local_res8);
  return BVar1 != 0;
}



/* ===== 18052cf70 FUN_18052cf70 ===== */

bool FUN_18052cf70(void)

{
  longlong lVar1;
  bool bVar2;
  
  if (DAT_181149018 == -1) {
    lVar1 = 0;
  }
  else {
    bVar2 = DAT_181149018 == 0;
    if (!bVar2) goto LAB_18052cfaa;
    lVar1 = FUN_18052c3d0(3,"FlsGetValue2",&DAT_18057dc98,"FlsGetValue2");
  }
  bVar2 = lVar1 == 0;
LAB_18052cfaa:
  return !bVar2;
}



/* ===== 18052cfb4 __acrt_uninitialize_winapi_thunks ===== */

/* Library Function - Single Match
    __acrt_uninitialize_winapi_thunks
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined8 __acrt_uninitialize_winapi_thunks(char param_1)

{
  HMODULE hLibModule;
  undefined8 *puVar1;
  
  if (param_1 == '\0') {
    puVar1 = &DAT_180c9fda0;
    do {
      hLibModule = (HMODULE)*puVar1;
      if (hLibModule != (HMODULE)0x0) {
        if (hLibModule != (HMODULE)0xffffffffffffffff) {
          FreeLibrary(hLibModule);
        }
        *puVar1 = 0;
      }
      puVar1 = puVar1 + 1;
    } while (puVar1 != &DAT_180c9fe58);
  }
  return 1;
}



/* ===== 18052cff8 FUN_18052cff8 ===== */

int FUN_18052cff8(void)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int local_18;
  
  local_18 = 0;
  __acrt_lock(8);
  for (iVar3 = 3; iVar3 != DAT_180c9f548; iVar3 = iVar3 + 1) {
    lVar4 = (longlong)iVar3;
    lVar1 = *(longlong *)(DAT_180c9f550 + lVar4 * 8);
    if (lVar1 != 0) {
      if (((*(uint *)(lVar1 + 0x14) >> 0xd & 1) != 0) &&
         (iVar2 = FUN_18051053c(*(undefined8 *)(DAT_180c9f550 + lVar4 * 8)), iVar2 != -1)) {
        local_18 = local_18 + 1;
      }
      DeleteCriticalSection((LPCRITICAL_SECTION)(*(longlong *)(DAT_180c9f550 + lVar4 * 8) + 0x30));
      FUN_1805277b0(*(undefined8 *)(DAT_180c9f550 + lVar4 * 8));
      *(undefined8 *)(DAT_180c9f550 + lVar4 * 8) = 0;
    }
  }
  __acrt_unlock(8);
  return local_18;
}



/* ===== 18052d0ac __acrt_stdio_allocate_buffer_nolock ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __acrt_stdio_allocate_buffer_nolock
   
   Library: Visual Studio 2019 Release */

void __acrt_stdio_allocate_buffer_nolock(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  _DAT_180c9f558 = _DAT_180c9f558 + 1;
  uVar2 = 0x1000;
  uVar1 = _calloc_base(0x1000);
  param_1[1] = uVar1;
  FUN_1805277b0(0);
  if (param_1[1] == 0) {
    LOCK();
    *(uint *)((longlong)param_1 + 0x14) = *(uint *)((longlong)param_1 + 0x14) | 0x400;
    UNLOCK();
    uVar2 = 2;
    param_1[1] = (longlong)param_1 + 0x1c;
  }
  else {
    LOCK();
    *(uint *)((longlong)param_1 + 0x14) = *(uint *)((longlong)param_1 + 0x14) | 0x40;
    UNLOCK();
  }
  *(undefined4 *)(param_1 + 4) = uVar2;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = param_1[1];
  return;
}



/* ===== 18052d118 FUN_18052d118 ===== */

int FUN_18052d118(uint param_1,short *param_2,longlong param_3)

{
  byte *pbVar1;
  byte bVar2;
  longlong lVar3;
  HANDLE hFile;
  short *psVar4;
  BOOL BVar5;
  ulonglong uVar6;
  short *psVar7;
  short sVar8;
  short *psVar9;
  longlong lVar10;
  longlong lVar11;
  short local_res8 [4];
  short local_res10 [4];
  DWORD local_res18 [2];
  
  lVar10 = 0;
  uVar6 = (ulonglong)(param_1 & 0x3f);
  lVar11 = (longlong)(int)param_1 >> 6;
  lVar3 = (&DAT_180c9f990)[lVar11];
  hFile = *(HANDLE *)(lVar3 + 0x28 + uVar6 * 0x48);
  if ((param_3 == 0) || (*param_2 != 10)) {
    pbVar1 = (byte *)(lVar3 + 0x38 + uVar6 * 0x48);
    *pbVar1 = *pbVar1 & 0xfb;
  }
  else {
    pbVar1 = (byte *)(lVar3 + 0x38 + uVar6 * 0x48);
    *pbVar1 = *pbVar1 | 4;
  }
  psVar9 = param_2;
  psVar4 = param_2;
  do {
    if (param_2 + param_3 <= psVar4) goto LAB_18052d2f2;
    sVar8 = *psVar4;
    if (sVar8 == 0x1a) {
      bVar2 = *(byte *)((&DAT_180c9f990)[lVar11] + 0x38 + (ulonglong)(param_1 & 0x3f) * 0x48);
      if ((bVar2 & 0x40) != 0) {
        *psVar9 = 0x1a;
        goto LAB_18052d2ef;
      }
      *(byte *)((&DAT_180c9f990)[lVar11] + 0x38 + (ulonglong)(param_1 & 0x3f) * 0x48) = bVar2 | 2;
      goto LAB_18052d2f2;
    }
    psVar7 = psVar4 + 1;
    if (sVar8 == 0xd) {
      if (param_2 + param_3 <= psVar7) {
        local_res8[0] = 0;
        local_res18[0] = 0;
        BVar5 = ReadFile(hFile,local_res8,2,local_res18,(LPOVERLAPPED)0x0);
        if ((BVar5 == 0) || (local_res18[0] == 0)) {
LAB_18052d2b6:
          *psVar9 = 0xd;
          goto LAB_18052d2ef;
        }
        if ((*(byte *)((&DAT_180c9f990)[lVar11] + 0x38 + uVar6 * 0x48) & 0x48) == 0) {
          if ((local_res8[0] != 10) || (psVar9 != param_2)) {
            FUN_18052de38(param_1,0xfffffffffffffffe,1);
            if (local_res8[0] != 10) goto LAB_18052d2b6;
            goto LAB_18052d2f2;
          }
        }
        else if (local_res8[0] != 10) {
          local_res10[0] = local_res8[0];
          *psVar9 = 0xd;
          do {
            *(undefined1 *)
             ((&DAT_180c9f990)[lVar11] + (ulonglong)(param_1 & 0x3f) * 0x48 + 0x3a + lVar10) =
                 *(undefined1 *)((longlong)local_res10 + lVar10);
            lVar10 = lVar10 + 1;
          } while (lVar10 < 2);
          *(undefined1 *)((&DAT_180c9f990)[lVar11] + 0x3c + (ulonglong)(param_1 & 0x3f) * 0x48) = 10
          ;
LAB_18052d2ef:
          psVar9 = psVar9 + 1;
LAB_18052d2f2:
          return (int)((longlong)psVar9 - (longlong)param_2 >> 1) * 2;
        }
        *psVar9 = 10;
        goto LAB_18052d2ef;
      }
      if (*psVar7 == 10) {
        psVar7 = psVar4 + 2;
        sVar8 = 10;
      }
    }
    *psVar9 = sVar8;
    psVar9 = psVar9 + 1;
    psVar4 = psVar7;
  } while( true );
}



/* ===== 18052d314 FUN_18052d314 ===== */

int FUN_18052d314(uint param_1,byte *param_2,longlong param_3,undefined8 param_4,undefined4 param_5)

{
  byte bVar1;
  longlong lVar2;
  HANDLE hFile;
  BOOL BVar3;
  DWORD DVar4;
  byte *pbVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  char local_res8 [8];
  DWORD local_res10 [2];
  
  lVar13 = (longlong)(int)param_1 >> 6;
  uVar12 = (ulonglong)(param_1 & 0x3f);
  lVar2 = (&DAT_180c9f990)[lVar13];
  hFile = *(HANDLE *)(lVar2 + 0x28 + uVar12 * 0x48);
  if ((param_3 == 0) || (*param_2 != 10)) {
    pbVar9 = (byte *)(lVar2 + 0x38 + uVar12 * 0x48);
    *pbVar9 = *pbVar9 & 0xfb;
  }
  else {
    pbVar9 = (byte *)(lVar2 + 0x38 + uVar12 * 0x48);
    *pbVar9 = *pbVar9 | 4;
  }
  pbVar9 = param_2;
  pbVar10 = param_2;
  do {
    if (param_2 + param_3 <= pbVar10) {
LAB_18052d480:
      iVar7 = (int)pbVar9 - (int)param_2;
      if (iVar7 == 0) {
        return 0;
      }
      if (*(char *)((&DAT_180c9f990)[lVar13] + 0x39 + uVar12 * 0x48) == '\0') {
        return iVar7;
      }
      pbVar9 = param_2 + iVar7;
      if ((char)pbVar9[-1] < '\0') {
        uVar12 = 1;
        for (pbVar9 = pbVar9 + -1;
            ((uVar11 = (uint)uVar12, (&DAT_180919920)[*pbVar9] == '\0' && (uVar11 < 5)) &&
            (param_2 <= pbVar9)); pbVar9 = pbVar9 + -1) {
          uVar12 = (ulonglong)(uVar11 + 1);
        }
        if ((char)(&DAT_180919920)[*pbVar9] == 0) {
          puVar6 = (undefined4 *)FUN_18051bfb0();
          *puVar6 = 0x2a;
          return -1;
        }
        if ((int)(char)(&DAT_180919920)[*pbVar9] + 1U == uVar11) {
          pbVar9 = pbVar9 + uVar12;
        }
        else if ((*(byte *)((&DAT_180c9f990)[lVar13] + 0x38 + (ulonglong)(param_1 & 0x3f) * 0x48) &
                 0x48) == 0) {
          FUN_18052de38(param_1,(longlong)(int)-uVar11,1);
        }
        else {
          pbVar10 = pbVar9 + 1;
          *(byte *)((&DAT_180c9f990)[lVar13] + 0x3a + (ulonglong)(param_1 & 0x3f) * 0x48) = *pbVar9;
          if (1 < uVar11) {
            bVar1 = *pbVar10;
            pbVar10 = pbVar9 + 2;
            *(byte *)((&DAT_180c9f990)[lVar13] + 0x3b + (ulonglong)(param_1 & 0x3f) * 0x48) = bVar1;
          }
          if (uVar11 == 3) {
            bVar1 = *pbVar10;
            pbVar10 = pbVar10 + 1;
            *(byte *)((&DAT_180c9f990)[lVar13] + 0x3c + (ulonglong)(param_1 & 0x3f) * 0x48) = bVar1;
          }
          pbVar9 = pbVar10 + -uVar12;
        }
      }
      iVar8 = (int)pbVar9 - (int)param_2;
      iVar7 = FUN_18052ee60(0xfde9,0,param_2,iVar8,param_4,param_5);
      if (iVar7 == 0) {
        DVar4 = GetLastError();
        FUN_18051bf40(DVar4);
        return -1;
      }
      *(byte *)((&DAT_180c9f990)[lVar13] + 0x3d + (ulonglong)(param_1 & 0x3f) * 0x48) =
           -(iVar7 != iVar8) & 2U |
           *(byte *)((&DAT_180c9f990)[lVar13] + 0x3d + (ulonglong)(param_1 & 0x3f) * 0x48) & 0xfd;
      return iVar7 * 2;
    }
    bVar1 = *pbVar10;
    if (bVar1 == 0x1a) {
      bVar1 = *(byte *)((&DAT_180c9f990)[lVar13] + 0x38 + uVar12 * 0x48);
      if ((bVar1 & 0x40) != 0) {
        *pbVar9 = 0x1a;
        goto LAB_18052d47d;
      }
      *(byte *)((&DAT_180c9f990)[lVar13] + 0x38 + uVar12 * 0x48) = bVar1 | 2;
      goto LAB_18052d480;
    }
    pbVar5 = pbVar10 + 1;
    if (bVar1 == 0xd) {
      if (param_2 + param_3 <= pbVar5) {
        local_res8[0] = '\0';
        local_res10[0] = 0;
        BVar3 = ReadFile(hFile,local_res8,1,local_res10,(LPOVERLAPPED)0x0);
        if ((BVar3 == 0) || (local_res10[0] == 0)) {
          *pbVar9 = 0xd;
        }
        else if ((*(byte *)((&DAT_180c9f990)[lVar13] + 0x38 + uVar12 * 0x48) & 0x48) == 0) {
          if ((local_res8[0] == '\n') && (pbVar9 == param_2)) goto LAB_18052d40e;
          FUN_18052de38(param_1,0xffffffffffffffff,1);
          if (local_res8[0] == '\n') goto LAB_18052d480;
          *pbVar9 = 0xd;
        }
        else if (local_res8[0] == '\n') {
LAB_18052d40e:
          *pbVar9 = 10;
        }
        else {
          *pbVar9 = 0xd;
          *(char *)((&DAT_180c9f990)[lVar13] + 0x3a + uVar12 * 0x48) = local_res8[0];
        }
LAB_18052d47d:
        pbVar9 = pbVar9 + 1;
        goto LAB_18052d480;
      }
      if (*pbVar5 != 10) goto LAB_18052d3ad;
      pbVar5 = pbVar10 + 2;
      *pbVar9 = 10;
    }
    else {
LAB_18052d3ad:
      *pbVar9 = bVar1;
    }
    pbVar9 = pbVar9 + 1;
    pbVar10 = pbVar5;
  } while( true );
}



/* ===== 18052d644 FUN_18052d644 ===== */

undefined4 FUN_18052d644(uint param_1,undefined8 param_2,uint param_3)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  if (param_1 == 0xfffffffe) {
    puVar3 = (undefined4 *)FUN_18051bf8c();
    *puVar3 = 0;
    puVar3 = (undefined4 *)FUN_18051bfb0();
    *puVar3 = 9;
    return 0xffffffff;
  }
  if (((int)param_1 < 0) || (DAT_180c9fd90 <= param_1)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    if ((*(byte *)((&DAT_180c9f990)[(longlong)(int)param_1 >> 6] + 0x38 +
                  (ulonglong)(param_1 & 0x3f) * 0x48) & 1) != 0) {
      if (param_3 < 0x80000000) {
        __acrt_lowio_lock_fh(param_1);
        uVar2 = 0xffffffff;
        if ((*(byte *)((&DAT_180c9f990)[(longlong)(int)param_1 >> 6] + 0x38 +
                      (ulonglong)(param_1 & 0x3f) * 0x48) & 1) == 0) {
          puVar3 = (undefined4 *)FUN_18051bfb0();
          *puVar3 = 9;
          puVar3 = (undefined4 *)FUN_18051bf8c();
          *puVar3 = 0;
        }
        else {
          uVar2 = FUN_18052d764(param_1,param_2,param_3);
        }
        __acrt_lowio_unlock_fh(param_1);
        return uVar2;
      }
      puVar3 = (undefined4 *)FUN_18051bf8c();
      *puVar3 = 0;
      puVar3 = (undefined4 *)FUN_18051bfb0();
      *puVar3 = 0x16;
      goto LAB_18052d6ca;
    }
  }
  puVar3 = (undefined4 *)FUN_18051bf8c();
  *puVar3 = 0;
  puVar3 = (undefined4 *)FUN_18051bfb0();
  *puVar3 = 9;
LAB_18052d6ca:
  FUN_180527740();
  return 0xffffffff;
}



/* ===== 18052d764 FUN_18052d764 ===== */

int FUN_18052d764(uint param_1,short *param_2,ulonglong param_3)

{
  short *psVar1;
  byte *pbVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  BOOL BVar6;
  DWORD DVar7;
  int iVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  short *psVar12;
  short sVar13;
  short *psVar14;
  ulonglong uVar15;
  longlong lVar16;
  uint uVar17;
  short *psVar18;
  DWORD local_res20 [2];
  DWORD local_68 [2];
  HANDLE local_60;
  ulonglong local_58;
  ulonglong local_50;
  short *local_48;
  
  if (param_1 == 0xfffffffe) {
    puVar9 = (undefined4 *)FUN_18051bf8c();
    *puVar9 = 0;
    puVar9 = (undefined4 *)FUN_18051bfb0();
    *puVar9 = 9;
    return -1;
  }
  if ((-1 < (int)param_1) && (param_1 < DAT_180c9fd90)) {
    uVar10 = (ulonglong)(param_1 & 0x3f);
    local_50 = 1;
    local_58 = (ulonglong)(longlong)(int)param_1 >> 6;
    lVar16 = (&DAT_180c9f990)[local_58];
    if ((*(byte *)(lVar16 + 0x38 + uVar10 * 0x48) & 1) != 0) {
      uVar17 = (uint)param_3;
      if (uVar17 < 0x80000000) {
        if ((uVar17 == 0) || ((*(byte *)(lVar16 + 0x38 + uVar10 * 0x48) & 2) != 0)) {
          return 0;
        }
        if (param_2 != (short *)0x0) {
          local_60 = *(HANDLE *)(lVar16 + 0x28 + uVar10 * 0x48);
          psVar14 = (short *)0x0;
          cVar3 = *(char *)(lVar16 + 0x39 + uVar10 * 0x48);
          if (cVar3 == '\x01') {
            if ((~uVar17 & 1) == 0) goto LAB_18052d85e;
            uVar15 = param_3 >> 1 & 0x7fffffff;
            if ((uint)uVar15 < 4) {
              uVar15 = 4;
            }
            psVar14 = (short *)_malloc_base(uVar15);
            FUN_1805277b0(0);
            FUN_1805277b0(0);
            if (psVar14 != (short *)0x0) {
              uVar11 = FUN_18052de38(param_1,0,1);
              *(undefined8 *)((&DAT_180c9f990)[local_58] + 0x30 + uVar10 * 0x48) = uVar11;
              local_48 = psVar14;
              goto LAB_18052d900;
            }
            puVar9 = (undefined4 *)FUN_18051bfb0();
            *puVar9 = 0xc;
            puVar9 = (undefined4 *)FUN_18051bf8c();
            *puVar9 = 8;
          }
          else if ((cVar3 == '\x02') && ((~uVar17 & 1) == 0)) {
LAB_18052d85e:
            puVar9 = (undefined4 *)FUN_18051bf8c();
            *puVar9 = 0;
            puVar9 = (undefined4 *)FUN_18051bfb0();
            *puVar9 = 0x16;
            FUN_180527740();
          }
          else {
            uVar15 = param_3 & 0xffffffff;
            local_48 = param_2;
LAB_18052d900:
            iVar8 = 0;
            psVar18 = local_48;
            if ((((*(byte *)((&DAT_180c9f990)[local_58] + 0x38 + uVar10 * 0x48) & 0x48) != 0) &&
                (cVar4 = *(char *)((&DAT_180c9f990)[local_58] + 0x3a + uVar10 * 0x48), cVar4 != '\n'
                )) && (iVar5 = (int)uVar15, iVar5 != 0)) {
              *(char *)local_48 = cVar4;
              uVar15 = (ulonglong)(iVar5 - 1U);
              psVar18 = (short *)((longlong)local_48 + 1);
              iVar8 = 1;
              *(undefined1 *)((&DAT_180c9f990)[local_58] + 0x3a + uVar10 * 0x48) = 10;
              if (((cVar3 != '\0') &&
                  (cVar4 = *(char *)((&DAT_180c9f990)[local_58] + 0x3b + uVar10 * 0x48),
                  cVar4 != '\n')) && (iVar5 - 1U != 0)) {
                *(char *)psVar18 = cVar4;
                iVar8 = 2;
                psVar18 = local_48 + 1;
                uVar15 = (ulonglong)(iVar5 - 2U);
                *(undefined1 *)((&DAT_180c9f990)[local_58] + 0x3b + uVar10 * 0x48) = 10;
                if (((cVar3 == '\x01') &&
                    (cVar4 = *(char *)((&DAT_180c9f990)[local_58] + 0x3c + uVar10 * 0x48),
                    cVar4 != '\n')) && (iVar5 - 2U != 0)) {
                  *(char *)psVar18 = cVar4;
                  iVar8 = 3;
                  psVar18 = (short *)((longlong)local_48 + 3);
                  uVar15 = (ulonglong)(iVar5 - 3);
                  *(undefined1 *)((&DAT_180c9f990)[local_58] + 0x3c + uVar10 * 0x48) = 10;
                }
              }
            }
            local_68[0] = 0;
            iVar5 = FUN_18053b88c(param_1);
            if (((iVar5 == 0) || (-1 < *(char *)((&DAT_180c9f990)[local_58] + 0x38 + uVar10 * 0x48))
                ) || (BVar6 = GetConsoleMode(local_60,local_68), BVar6 == 0)) {
              local_50 = local_50 & 0xffffffffffffff00;
LAB_18052da36:
              local_res20[0] = 0;
              BVar6 = ReadFile(local_60,psVar18,(DWORD)uVar15,local_res20,(LPOVERLAPPED)0x0);
              if ((BVar6 != 0) && (local_res20[0] <= uVar17)) {
                uVar17 = local_res20[0];
LAB_18052da78:
                iVar8 = iVar8 + uVar17;
                if (*(char *)((&DAT_180c9f990)[local_58] + 0x38 + uVar10 * 0x48) < '\0') {
                  if (cVar3 == '\x02') {
                    if ((char)local_50 == '\0') {
                      iVar8 = FUN_18052d118(param_1,local_48);
                    }
                    else {
                      psVar1 = (short *)((longlong)local_48 +
                                        ((longlong)iVar8 & 0xfffffffffffffffeU));
                      psVar18 = local_48;
                      for (psVar12 = local_48; psVar12 < psVar1;
                          psVar12 = (short *)((longlong)psVar12 + lVar16)) {
                        sVar13 = *psVar12;
                        if (sVar13 == 0x1a) {
                          pbVar2 = (byte *)((&DAT_180c9f990)[local_58] + 0x38 + uVar10 * 0x48);
                          *pbVar2 = *pbVar2 | 2;
                          break;
                        }
                        if (((sVar13 == 0xd) && (psVar12 + 1 < psVar1)) && (psVar12[1] == 10)) {
                          sVar13 = 10;
                          lVar16 = 4;
                        }
                        else {
                          lVar16 = 2;
                        }
                        *psVar18 = sVar13;
                        psVar18 = psVar18 + 1;
                      }
                      iVar8 = (int)((longlong)psVar18 - (longlong)local_48 >> 1) * 2;
                    }
                  }
                  else {
                    iVar8 = FUN_18052d314(param_1,psVar18,(longlong)iVar8,param_2,
                                          (param_3 & 0xffffffff) >> 1);
                  }
                }
                goto LAB_18052da16;
              }
              DVar7 = GetLastError();
              if (DVar7 != 5) {
                if (DVar7 == 0x6d) {
                  iVar8 = 0;
                  goto LAB_18052da16;
                }
                goto LAB_18052da0c;
              }
              puVar9 = (undefined4 *)FUN_18051bfb0();
              *puVar9 = 9;
              puVar9 = (undefined4 *)FUN_18051bf8c();
              *puVar9 = 5;
            }
            else {
              if (cVar3 != '\x02') goto LAB_18052da36;
              local_res20[0] = 0;
              BVar6 = ReadConsoleW(local_60,psVar18,(DWORD)(uVar15 >> 1),local_res20,
                                   (PCONSOLE_READCONSOLE_CONTROL)0x0);
              if (BVar6 != 0) {
                uVar17 = local_res20[0] * 2;
                goto LAB_18052da78;
              }
              DVar7 = GetLastError();
LAB_18052da0c:
              FUN_18051bf40(DVar7);
            }
          }
          iVar8 = -1;
LAB_18052da16:
          FUN_1805277b0(psVar14);
          return iVar8;
        }
      }
      puVar9 = (undefined4 *)FUN_18051bf8c();
      *puVar9 = 0;
      puVar9 = (undefined4 *)FUN_18051bfb0();
      *puVar9 = 0x16;
      goto LAB_18052dba3;
    }
  }
  puVar9 = (undefined4 *)FUN_18051bf8c();
  *puVar9 = 0;
  puVar9 = (undefined4 *)FUN_18051bfb0();
  *puVar9 = 9;
LAB_18052dba3:
  FUN_180527740();
  return -1;
}



/* ===== 18052dbc4 FUN_18052dbc4 ===== */

undefined8 FUN_18052dbc4(uint param_1,undefined8 param_2,undefined4 param_3,longlong param_4)

{
  bool bVar1;
  undefined8 uVar2;
  
  if (param_1 == 0xfffffffe) {
    *(undefined1 *)(param_4 + 0x38) = 1;
    *(undefined4 *)(param_4 + 0x34) = 0;
    *(undefined1 *)(param_4 + 0x30) = 1;
    *(undefined4 *)(param_4 + 0x2c) = 9;
  }
  else {
    if (((int)param_1 < 0) || (DAT_180c9fd90 <= param_1)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      if ((*(byte *)((&DAT_180c9f990)[(longlong)(int)param_1 >> 6] + 0x38 +
                    (ulonglong)(param_1 & 0x3f) * 0x48) & 1) != 0) {
        __acrt_lowio_lock_fh(param_1);
        uVar2 = 0xffffffffffffffff;
        if ((*(byte *)((&DAT_180c9f990)[(longlong)(int)param_1 >> 6] + 0x38 +
                      (ulonglong)(param_1 & 0x3f) * 0x48) & 1) == 0) {
          *(undefined1 *)(param_4 + 0x30) = 1;
          *(undefined4 *)(param_4 + 0x2c) = 9;
          *(undefined1 *)(param_4 + 0x38) = 1;
          *(undefined4 *)(param_4 + 0x34) = 0;
        }
        else {
          uVar2 = FUN_18052dce4(param_1,param_2,param_3,param_4);
        }
        __acrt_lowio_unlock_fh(param_1);
        return uVar2;
      }
    }
    *(undefined1 *)(param_4 + 0x38) = 1;
    *(undefined4 *)(param_4 + 0x34) = 0;
    *(undefined1 *)(param_4 + 0x30) = 1;
    *(undefined4 *)(param_4 + 0x2c) = 9;
    FUN_180527688(0,0,0,0,0,param_4);
  }
  return 0xffffffffffffffff;
}



/* ===== 18052dce4 FUN_18052dce4 ===== */

longlong FUN_18052dce4(uint param_1,LARGE_INTEGER param_2,DWORD param_3,longlong param_4)

{
  byte *pbVar1;
  BOOL BVar2;
  DWORD DVar3;
  HANDLE hFile;
  LARGE_INTEGER local_18 [2];
  
  hFile = (HANDLE)FUN_180517f94(param_1);
  if (hFile == (HANDLE)0xffffffffffffffff) {
    *(undefined1 *)(param_4 + 0x30) = 1;
    *(undefined4 *)(param_4 + 0x2c) = 9;
  }
  else {
    local_18[0].QuadPart = 0;
    BVar2 = SetFilePointerEx(hFile,param_2,local_18,param_3);
    if (BVar2 == 0) {
      DVar3 = GetLastError();
      FUN_18051bf68(DVar3,param_4);
    }
    else if (local_18[0].QuadPart != -1) {
      pbVar1 = (byte *)((&DAT_180c9f990)[(longlong)(int)param_1 >> 6] + 0x38 +
                       (ulonglong)(param_1 & 0x3f) * 0x48);
      *pbVar1 = *pbVar1 & 0xfd;
      return local_18[0].QuadPart;
    }
  }
  return -1;
}



/* ===== 18052dd94 FUN_18052dd94 ===== */

undefined8 FUN_18052dd94(void)

{
  undefined8 uVar1;
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
  local_20 = DAT_180c9f7dc == 0;
  local_38 = 0;
  local_18 = '\0';
  local_10 = '\0';
  if ((bool)local_20) {
    local_30 = PTR_PTR_1809198b8._0_4_;
    uStack_2c = PTR_PTR_1809198b8._4_4_;
    uStack_28 = PTR_DAT_1809198c0._0_4_;
    uStack_24 = PTR_DAT_1809198c0._4_4_;
  }
  uVar1 = FUN_18052dbc4();
  if (local_20 == '\x02') {
    *(uint *)(local_48[0] + 0x3a8) = *(uint *)(local_48[0] + 0x3a8) & 0xfffffffd;
  }
  if (local_18 != '\0') {
    lVar2 = FUN_1804f84e0(local_48);
    *(undefined4 *)(lVar2 + 0x20) = local_1c;
  }
  if (local_10 != '\0') {
    lVar2 = FUN_1804f84e0(local_48);
    *(undefined4 *)(lVar2 + 0x24) = local_14;
  }
  return uVar1;
}



/* ===== 18052de30 thunk_FUN_18052dbc4 ===== */

undefined8 thunk_FUN_18052dbc4(uint param_1,undefined8 param_2,undefined4 param_3,longlong param_4)

{
  bool bVar1;
  undefined8 uVar2;
  
  if (param_1 == 0xfffffffe) {
    *(undefined1 *)(param_4 + 0x38) = 1;
    *(undefined4 *)(param_4 + 0x34) = 0;
    *(undefined1 *)(param_4 + 0x30) = 1;
    *(undefined4 *)(param_4 + 0x2c) = 9;
  }
  else {
    if (((int)param_1 < 0) || (DAT_180c9fd90 <= param_1)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      if ((*(byte *)((&DAT_180c9f990)[(longlong)(int)param_1 >> 6] + 0x38 +
                    (ulonglong)(param_1 & 0x3f) * 0x48) & 1) != 0) {
        __acrt_lowio_lock_fh(param_1);
        uVar2 = 0xffffffffffffffff;
        if ((*(byte *)((&DAT_180c9f990)[(longlong)(int)param_1 >> 6] + 0x38 +
                      (ulonglong)(param_1 & 0x3f) * 0x48) & 1) == 0) {
          *(undefined1 *)(param_4 + 0x30) = 1;
          *(undefined4 *)(param_4 + 0x2c) = 9;
          *(undefined1 *)(param_4 + 0x38) = 1;
          *(undefined4 *)(param_4 + 0x34) = 0;
        }
        else {
          uVar2 = FUN_18052dce4(param_1,param_2,param_3,param_4);
        }
        __acrt_lowio_unlock_fh(param_1);
        return uVar2;
      }
    }
    *(undefined1 *)(param_4 + 0x38) = 1;
    *(undefined4 *)(param_4 + 0x34) = 0;
    *(undefined1 *)(param_4 + 0x30) = 1;
    *(undefined4 *)(param_4 + 0x2c) = 9;
    FUN_180527688(0,0,0,0,0,param_4);
  }
  return 0xffffffffffffffff;
}



/* ===== 18052de38 FUN_18052de38 ===== */

undefined8 FUN_18052de38(void)

{
  undefined8 uVar1;
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
  local_20 = DAT_180c9f7dc == 0;
  local_38 = 0;
  local_18 = '\0';
  local_10 = '\0';
  if ((bool)local_20) {
    local_30 = PTR_PTR_1809198b8._0_4_;
    uStack_2c = PTR_PTR_1809198b8._4_4_;
    uStack_28 = PTR_DAT_1809198c0._0_4_;
    uStack_24 = PTR_DAT_1809198c0._4_4_;
  }
  uVar1 = FUN_18052dce4();
  if (local_20 == '\x02') {
    *(uint *)(local_48[0] + 0x3a8) = *(uint *)(local_48[0] + 0x3a8) & 0xfffffffd;
  }
  if (local_18 != '\0') {
    lVar2 = FUN_1804f84e0(local_48);
    *(undefined4 *)(lVar2 + 0x20) = local_1c;
  }
  if (local_10 != '\0') {
    lVar2 = FUN_1804f84e0(local_48);
    *(undefined4 *)(lVar2 + 0x24) = local_14;
  }
  return uVar1;
}



/* ===== 18052ded4 thunk_FUN_18052dce4 ===== */

longlong thunk_FUN_18052dce4(uint param_1,LARGE_INTEGER param_2,DWORD param_3,longlong param_4)

{
  byte *pbVar1;
  BOOL BVar2;
  DWORD DVar3;
  HANDLE hFile;
  LARGE_INTEGER aLStack_18 [2];
  
  hFile = (HANDLE)FUN_180517f94(param_1);
  if (hFile == (HANDLE)0xffffffffffffffff) {
    *(undefined1 *)(param_4 + 0x30) = 1;
    *(undefined4 *)(param_4 + 0x2c) = 9;
  }
  else {
    aLStack_18[0].QuadPart = 0;
    BVar2 = SetFilePointerEx(hFile,param_2,aLStack_18,param_3);
    if (BVar2 == 0) {
      DVar3 = GetLastError();
      FUN_18051bf68(DVar3,param_4);
    }
    else if (aLStack_18[0].QuadPart != -1) {
      pbVar1 = (byte *)((&DAT_180c9f990)[(longlong)(int)param_1 >> 6] + 0x38 +
                       (ulonglong)(param_1 & 0x3f) * 0x48);
      *pbVar1 = *pbVar1 & 0xfd;
      return aLStack_18[0].QuadPart;
    }
  }
  return -1;
}



/* ===== 18052df2c FUN_18052df2c ===== */

undefined4 * FUN_18052df2c(void)

{
  return &DAT_180c9fe64;
}



/* ===== 18052df34 FUN_18052df34 ===== */

undefined4 * FUN_18052df34(void)

{
  return &DAT_180c9fe68;
}



/* ===== 18052df3c FUN_18052df3c ===== */

undefined4 * FUN_18052df3c(void)

{
  return &DAT_180c9fe60;
}



/* ===== 18052df44 FUN_18052df44 ===== */

undefined8 FUN_18052df44(void)

{
  return DAT_180c9fe70;
}



/* ===== 18052df4c FUN_18052df4c ===== */

undefined8 FUN_18052df4c(void)

{
  return DAT_180c9fe78;
}



/* ===== 18052df54 FUN_18052df54 ===== */

undefined8 FUN_18052df54(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  
  if (param_1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)FUN_18051bfb0();
    *puVar1 = 0x16;
    FUN_180527740();
    uVar2 = 0x16;
  }
  else {
    *param_1 = DAT_180c9fe64;
    uVar2 = 0;
  }
  return uVar2;
}



/* ===== 18052df84 FUN_18052df84 ===== */

undefined8 FUN_18052df84(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  
  if (param_1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)FUN_18051bfb0();
    *puVar1 = 0x16;
    FUN_180527740();
    uVar2 = 0x16;
  }
  else {
    *param_1 = DAT_180c9fe68;
    uVar2 = 0;
  }
  return uVar2;
}



/* ===== 18052dfb4 FUN_18052dfb4 ===== */

undefined8 FUN_18052dfb4(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  
  if (param_1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)FUN_18051bfb0();
    *puVar1 = 0x16;
    FUN_180527740();
    uVar2 = 0x16;
  }
  else {
    *param_1 = DAT_180c9fe60;
    uVar2 = 0;
  }
  return uVar2;
}



/* ===== 18052dfe4 common_gmtime_s<__int64> ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    int __cdecl common_gmtime_s<__int64>(struct tm * __ptr64 const,__int64 const * __ptr64 const)
   
   Library: Visual Studio 2019 Release */

int __cdecl common_gmtime_s<__int64>(tm *param_1,__int64 *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  longlong lVar8;
  int iVar9;
  int *piVar10;
  bool local_res8 [8];
  longlong local_res18 [2];
  
  uVar3 = _UNK_1808adf98;
  uVar1 = _DAT_1808adf90;
  if (param_1 != (tm *)0x0) {
    uVar2 = _UNK_1808adf94;
    param_1->tm_sec = _DAT_1808adf90;
    uVar4 = _UNK_1808adf98;
    param_1->tm_min = uVar2;
    _UNK_1808adf98 = (undefined4)uVar3;
    _UNK_1808adf9c = SUB84(uVar3,4);
    uVar2 = _UNK_1808adf9c;
    param_1->tm_hour = _UNK_1808adf98;
    _UNK_1808adf98 = uVar4;
    uVar4 = _DAT_1808adf90;
    param_1->tm_mday = uVar2;
    _DAT_1808adf90 = (undefined4)uVar1;
    _UNK_1808adf94 = SUB84(uVar1,4);
    uVar2 = _UNK_1808adf94;
    param_1->tm_mon = _DAT_1808adf90;
    _DAT_1808adf90 = uVar4;
    uVar4 = _UNK_1808adf98;
    param_1->tm_year = uVar2;
    _UNK_1808adf98 = (undefined4)uVar3;
    _UNK_1808adf9c = SUB84(uVar3,4);
    uVar2 = _UNK_1808adf9c;
    param_1->tm_wday = _UNK_1808adf98;
    _UNK_1808adf98 = uVar4;
    param_1->tm_yday = uVar2;
    param_1->tm_isdst = (int)uVar1;
    if (param_2 != (__int64 *)0x0) {
      local_res18[0] = *param_2;
      if ((local_res18[0] < -0xa8c0) || (0x79358efdf < local_res18[0])) {
        puVar6 = (undefined4 *)FUN_18051bfb0();
        *puVar6 = 0x16;
        return 0x16;
      }
      local_res8[0] = false;
      iVar5 = compute_year(local_res18,local_res8);
      piVar10 = (int *)&DAT_18058a438;
      param_1->tm_year = iVar5;
      iVar9 = 1;
      iVar5 = (int)(local_res18[0] / 0x15180);
      param_1->tm_yday = iVar5;
      local_res18[0] = local_res18[0] + (longlong)iVar5 * -0x15180;
      if (local_res8[0] != false) {
        piVar10 = &DAT_18058a470;
      }
      piVar7 = piVar10;
      while (piVar7 = piVar7 + 1, *piVar7 < iVar5) {
        iVar9 = iVar9 + 1;
      }
      param_1->tm_mon = iVar9 + -1;
      param_1->tm_mday = iVar5 - piVar10[(longlong)iVar9 + -1];
      lVar8 = *param_2;
      param_1->tm_isdst = 0;
      param_1->tm_wday = ((int)(lVar8 / 0x15180) + 4) % 7;
      iVar5 = (int)(local_res18[0] / 0xe10);
      param_1->tm_hour = iVar5;
      local_res18[0] = local_res18[0] + (longlong)iVar5 * -0xe10;
      lVar8 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(local_res18[0]),8) + local_res18[0];
      iVar5 = (int)(lVar8 >> 5) - (int)(lVar8 >> 0x3f);
      param_1->tm_min = iVar5;
      param_1->tm_sec = (int)local_res18[0] + iVar5 * -0x3c;
      return 0;
    }
  }
  puVar6 = (undefined4 *)FUN_18051bfb0();
  *puVar6 = 0x16;
  FUN_180527740();
  return 0x16;
}



/* ===== 18052e17c compute_year ===== */

/* Library Function - Single Match
    int __cdecl compute_year(__int64 & __ptr64,bool & __ptr64)
   
   Library: Visual Studio 2019 Release */

int __cdecl compute_year(__int64 *param_1,bool *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  
  lVar6 = *param_1;
  lVar2 = lVar6 + SUB168(SEXT816(-0x77ceb70a34ed8f47) * SEXT816(lVar6),8);
  iVar3 = (int)((ulonglong)lVar2 >> 0x18) - (int)(lVar2 >> 0x3f);
  iVar5 = iVar3 + 0x46;
  iVar1 = iVar3 + 0x45;
  lVar6 = lVar6 + ((longlong)
                   (((iVar3 + 0x171) / 400 - iVar1 / 100) +
                   ((int)(iVar1 + (iVar1 >> 0x1f & 3U)) >> 2) + -0x11) + (longlong)iVar3 * 0x16d) *
                  -0x15180;
  *param_1 = lVar6;
  if (lVar6 < 0) {
    *param_1 = lVar6 + 0x1e13380;
    cVar4 = __crt_time_is_leap_year<>(iVar1);
    if (cVar4 == '\0') {
      return iVar1;
    }
    *param_1 = lVar6 + 0x1e28500;
    iVar5 = iVar1;
  }
  else {
    cVar4 = __crt_time_is_leap_year<>(iVar5);
    if (cVar4 == '\0') {
      return iVar5;
    }
  }
  *param_2 = true;
  return iVar5;
}



/* ===== 18052e26c common_gmtime_s<__int64> ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl common_gmtime_s<__int64>(tm *param_1,__int64 *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  longlong lVar8;
  int iVar9;
  int *piVar10;
  bool abStackX_8 [8];
  longlong alStackX_18 [2];
  
  uVar3 = _UNK_1808adf98;
  uVar1 = _DAT_1808adf90;
  if (param_1 != (tm *)0x0) {
    uVar2 = _UNK_1808adf94;
    param_1->tm_sec = _DAT_1808adf90;
    uVar4 = _UNK_1808adf98;
    param_1->tm_min = uVar2;
    _UNK_1808adf98 = (undefined4)uVar3;
    _UNK_1808adf9c = SUB84(uVar3,4);
    uVar2 = _UNK_1808adf9c;
    param_1->tm_hour = _UNK_1808adf98;
    _UNK_1808adf98 = uVar4;
    uVar4 = _DAT_1808adf90;
    param_1->tm_mday = uVar2;
    _DAT_1808adf90 = (undefined4)uVar1;
    _UNK_1808adf94 = SUB84(uVar1,4);
    uVar2 = _UNK_1808adf94;
    param_1->tm_mon = _DAT_1808adf90;
    _DAT_1808adf90 = uVar4;
    uVar4 = _UNK_1808adf98;
    param_1->tm_year = uVar2;
    _UNK_1808adf98 = (undefined4)uVar3;
    _UNK_1808adf9c = SUB84(uVar3,4);
    uVar2 = _UNK_1808adf9c;
    param_1->tm_wday = _UNK_1808adf98;
    _UNK_1808adf98 = uVar4;
    param_1->tm_yday = uVar2;
    param_1->tm_isdst = (int)uVar1;
    if (param_2 != (__int64 *)0x0) {
      alStackX_18[0] = *param_2;
      if ((alStackX_18[0] < -0xa8c0) || (0x79358efdf < alStackX_18[0])) {
        puVar6 = (undefined4 *)FUN_18051bfb0();
        *puVar6 = 0x16;
        return 0x16;
      }
      abStackX_8[0] = false;
      iVar5 = compute_year(alStackX_18,abStackX_8);
      piVar10 = (int *)&DAT_18058a438;
      param_1->tm_year = iVar5;
      iVar9 = 1;
      iVar5 = (int)(alStackX_18[0] / 0x15180);
      param_1->tm_yday = iVar5;
      alStackX_18[0] = alStackX_18[0] + (longlong)iVar5 * -0x15180;
      if (abStackX_8[0] != false) {
        piVar10 = &DAT_18058a470;
      }
      piVar7 = piVar10;
      while (piVar7 = piVar7 + 1, *piVar7 < iVar5) {
        iVar9 = iVar9 + 1;
      }
      param_1->tm_mon = iVar9 + -1;
      param_1->tm_mday = iVar5 - piVar10[(longlong)iVar9 + -1];
      lVar8 = *param_2;
      param_1->tm_isdst = 0;
      param_1->tm_wday = ((int)(lVar8 / 0x15180) + 4) % 7;
      iVar5 = (int)(alStackX_18[0] / 0xe10);
      param_1->tm_hour = iVar5;
      alStackX_18[0] = alStackX_18[0] + (longlong)iVar5 * -0xe10;
      lVar8 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(alStackX_18[0]),8) + alStackX_18[0];
      iVar5 = (int)(lVar8 >> 5) - (int)(lVar8 >> 0x3f);
      param_1->tm_min = iVar5;
      param_1->tm_sec = (int)alStackX_18[0] + iVar5 * -0x3c;
      return 0;
    }
  }
  puVar6 = (undefined4 *)FUN_18051bfb0();
  *puVar6 = 0x16;
  FUN_180527740();
  return 0x16;
}



/* ===== 18052e274 FUN_18052e274 ===== */

/* WARNING: Removing unreachable block (ram,0x00018052e2b6) */
/* WARNING: Removing unreachable block (ram,0x00018052e2c5) */
/* WARNING: Removing unreachable block (ram,0x00018052e2d1) */
/* WARNING: Removing unreachable block (ram,0x00018052e442) */
/* WARNING: Removing unreachable block (ram,0x00018052e4aa) */
/* WARNING: Removing unreachable block (ram,0x00018052e4ae) */
/* WARNING: Removing unreachable block (ram,0x00018052e2dd) */
/* WARNING: Removing unreachable block (ram,0x00018052e34d) */
/* WARNING: Removing unreachable block (ram,0x00018052e38f) */
/* WARNING: Removing unreachable block (ram,0x00018052e386) */
/* WARNING: Removing unreachable block (ram,0x00018052e396) */
/* WARNING: Removing unreachable block (ram,0x00018052e2e6) */
/* WARNING: Removing unreachable block (ram,0x00018052e3cd) */
/* WARNING: Removing unreachable block (ram,0x00018052e413) */
/* WARNING: Removing unreachable block (ram,0x00018052e3fd) */
/* WARNING: Removing unreachable block (ram,0x00018052e421) */
/* WARNING: Removing unreachable block (ram,0x00018052e4bd) */
/* WARNING: Removing unreachable block (ram,0x00018052e4c9) */
/* WARNING: Removing unreachable block (ram,0x00018052e511) */
/* WARNING: Removing unreachable block (ram,0x00018052e515) */
/* WARNING: Removing unreachable block (ram,0x00018052e51a) */
/* WARNING: Removing unreachable block (ram,0x00018052e51e) */
/* WARNING: Removing unreachable block (ram,0x00018052e4de) */
/* WARNING: Removing unreachable block (ram,0x00018052e4e3) */
/* WARNING: Removing unreachable block (ram,0x00018052e4e7) */
/* WARNING: Removing unreachable block (ram,0x00018052e4ec) */
/* WARNING: Removing unreachable block (ram,0x00018052e523) */
/* WARNING: Removing unreachable block (ram,0x00018052e549) */
/* WARNING: Removing unreachable block (ram,0x00018052e53b) */
/* WARNING: Removing unreachable block (ram,0x00018052e545) */
/* WARNING: Removing unreachable block (ram,0x00018052e4f0) */

undefined8 FUN_18052e274(void)

{
  int iVar1;
  
  iVar1 = FUN_18052df54();
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  return 0;
}



/* ===== 18052e570 FUN_18052e570 ===== */

void FUN_18052e570(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                  int param_7,int param_8,int param_9,int param_10,int param_11)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  
  lVar3 = (longlong)param_4;
  cVar1 = __crt_time_is_leap_year<>(param_3);
  if (param_2 == 1) {
    if (cVar1 == '\0') {
      iVar2 = *(int *)(&DAT_18058a434 + lVar3 * 4);
    }
    else {
      iVar2 = *(int *)(&DAT_18058a46c + lVar3 * 4);
    }
    iVar4 = param_3 + -1;
    iVar5 = (((int)((iVar4 >> 0x1f & 3U) + iVar4) >> 2) + iVar2 + 1 +
             ((param_3 + 299) / 400 - iVar4 / 100) + param_3 * 0x16d + -0x63db) % 7;
    iVar4 = (param_5 * 7 - iVar5) + iVar2 + 1 + param_6;
    iVar2 = iVar4 + -7;
    if (param_6 < iVar5) {
      iVar2 = iVar4;
    }
    if (cVar1 == '\0') {
      iVar4 = *(int *)(&DAT_18058a438 + lVar3 * 4);
    }
    else {
      iVar4 = (&DAT_18058a470)[lVar3];
    }
    if ((param_5 == 5) && (iVar4 < iVar2)) {
      iVar2 = iVar2 + -7;
    }
  }
  else {
    if (cVar1 == '\0') {
      iVar2 = *(int *)(&DAT_18058a434 + lVar3 * 4);
    }
    else {
      iVar2 = *(int *)(&DAT_18058a46c + lVar3 * 4);
    }
    iVar2 = iVar2 + param_7;
  }
  param_11 = ((param_8 * 0x3c + param_9) * 0x3c + param_10) * 1000 + param_11;
  if (param_1 == 0) {
    DAT_180919bc0 = param_3;
    DAT_180919bc4 = iVar2;
    DAT_180919bc8 = param_11;
    return;
  }
  DAT_180919bd4 = iVar2;
  DAT_180919bd8 = param_11;
  iVar2 = FUN_18052df84();
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  if (DAT_180919bd8 < 0) {
    DAT_180919bd8 = DAT_180919bd8 + 86400000;
    DAT_180919bd4 = DAT_180919bd4 + -1;
  }
  else {
    if (DAT_180919bd8 < 86400000) {
      DAT_180919bd0 = param_3;
      return;
    }
    DAT_180919bd8 = DAT_180919bd8 + -86400000;
    DAT_180919bd4 = DAT_180919bd4 + 1;
  }
  DAT_180919bd0 = param_3;
  return;
}



/* ===== 18052e768 FUN_18052e768 ===== */

void FUN_18052e768(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  undefined8 uVar2;
  longlong local_28;
  longlong local_20;
  char local_10;
  
  iVar1 = FUN_180515c10();
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_28,(__crt_locale_pointers *)0x0);
  uVar2 = 0xfde9;
  if (*(int *)(local_20 + 0xc) == 0xfde9) {
    if (local_10 != '\0') {
      *(uint *)(local_28 + 0x3a8) = *(uint *)(local_28 + 0x3a8) & 0xfffffffd;
    }
  }
  else {
    iVar1 = FUN_18052c63c();
    if (iVar1 == 0) {
      if (local_10 != '\0') {
        *(uint *)(local_28 + 0x3a8) = *(uint *)(local_28 + 0x3a8) & 0xfffffffd;
      }
      uVar2 = 1;
    }
    else {
      if (local_10 != '\0') {
        *(uint *)(local_28 + 0x3a8) = *(uint *)(local_28 + 0x3a8) & 0xfffffffd;
      }
      uVar2 = 0;
    }
  }
  FUN_18052eef0(uVar2,0,param_2,param_4,param_3,0x3f,0,0);
  return;
}



/* ===== 18052e84c FUN_18052e84c ===== */

void FUN_18052e84c(ushort *param_1)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ushort *puVar6;
  int *piVar7;
  uint *puVar8;
  longlong lVar9;
  longlong lVar10;
  int local_res10;
  undefined8 local_res20;
  
  puVar4 = (undefined8 *)FUN_18052df44();
  puVar5 = (undefined8 *)FUN_18052df4c();
  iVar3 = FUN_18052dfb4();
  if ((iVar3 != 0) || (iVar3 = FUN_18052df54(), iVar3 != 0)) {
LAB_18052eab5:
                    /* WARNING: Subroutine does not return */
    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  if (DAT_180c9fe80 != 0) {
    puVar6 = param_1;
    do {
      uVar1 = *puVar6;
      uVar2 = *(ushort *)((longlong)puVar6 + (DAT_180c9fe80 - (longlong)param_1));
      if (uVar1 != uVar2) break;
      puVar6 = puVar6 + 1;
    } while (uVar2 != 0);
    if (uVar1 == uVar2) {
      return;
    }
  }
  lVar10 = -1;
  lVar9 = -1;
  do {
    lVar9 = lVar9 + 1;
  } while (param_1[lVar9] != 0);
  lVar9 = _malloc_base(lVar9 * 2 + 2);
  if (lVar9 != 0) {
    FUN_1805277b0(DAT_180c9fe80);
    do {
      lVar10 = lVar10 + 1;
    } while (param_1[lVar10] != 0);
    DAT_180c9fe80 = lVar9;
    iVar3 = FUN_180535f30();
    if (iVar3 != 0) goto LAB_18052eab5;
    FUN_180540170(*puVar5,0,0x80);
    FUN_180540170(puVar5[1],0,0x80);
    FUN_180540170(*puVar4,0,0x40);
    FUN_180540170(puVar4[1],0,0x40);
    FUN_18052e768(param_1,*puVar5,*puVar4,3);
    lVar9 = 3;
    do {
      lVar10 = lVar9;
      if (*param_1 != 0) {
        param_1 = param_1 + 1;
      }
      lVar9 = lVar10 + -1;
    } while (lVar9 != 0);
    uVar1 = *param_1;
    local_res20 = 0;
    puVar6 = param_1 + 1;
    if (uVar1 != 0x2d) {
      puVar6 = param_1;
    }
    local_res10 = FUN_1805157d4(puVar6,&local_res20,(int)lVar10 + 9);
    local_res10 = local_res10 * 0xe10;
    for (; (*puVar6 == 0x2b || ((ushort)(*puVar6 - 0x30) < 10)); puVar6 = puVar6 + 1) {
    }
    if (*puVar6 == 0x3a) {
      puVar6 = puVar6 + 1;
      iVar3 = FUN_1805157d4(puVar6,&local_res20,10);
      local_res10 = local_res10 + iVar3 * 0x3c;
      uVar2 = *puVar6;
      while ((0x2f < uVar2 && (uVar2 < 0x3a))) {
        puVar6 = puVar6 + 1;
        uVar2 = *puVar6;
      }
      if (uVar2 == 0x3a) {
        puVar6 = puVar6 + 1;
        iVar3 = FUN_1805157d4(puVar6,&local_res20,10);
        local_res10 = local_res10 + iVar3;
        for (; (0x2f < *puVar6 && (*puVar6 < 0x3a)); puVar6 = puVar6 + 1) {
        }
      }
    }
    if (uVar1 == 0x2d) {
      local_res10 = -local_res10;
    }
    uVar1 = *puVar6;
    if (uVar1 != 0) {
      FUN_18052e768(puVar6,puVar5[1],puVar4[1],3);
    }
    piVar7 = (int *)FUN_18052df3c();
    *piVar7 = local_res10;
    puVar8 = (uint *)FUN_18052df2c();
    *puVar8 = (uint)(uVar1 != 0);
  }
  FUN_1805277b0(0);
  return;
}



/* ===== 18052eacc FUN_18052eacc ===== */

void FUN_18052eacc(void)

{
  int iVar1;
  DWORD DVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int *piVar6;
  undefined4 *puVar7;
  int iVar8;
  int local_res8;
  undefined4 local_res10;
  int local_res18;
  
  puVar4 = (undefined8 *)FUN_18052df44();
  puVar5 = (undefined8 *)FUN_18052df4c();
  iVar8 = 0;
  local_res8 = 0;
  local_res10 = 0;
  local_res18 = 0;
  iVar1 = FUN_18052dfb4();
  if (iVar1 == 0) {
    iVar1 = FUN_18052df54();
    if (iVar1 == 0) {
      iVar1 = FUN_18052df84();
      if (iVar1 == 0) {
        FUN_1805277b0(DAT_180c9fe80);
        DAT_180c9fe80 = 0;
        DVar2 = GetTimeZoneInformation((LPTIME_ZONE_INFORMATION)&DAT_180c9fea0);
        if (DVar2 != 0xffffffff) {
          local_res8 = DAT_180c9fea0 * 0x3c;
          local_res10 = 1;
          DAT_180c9fe90 = 1;
          if (DAT_180c9fee6 != 0) {
            local_res8 = DAT_180c9fef4 * 0x3c + local_res8;
          }
          if ((DAT_180c9ff3a == 0) || (DAT_180c9ff48 == 0)) {
            local_res10 = 0;
          }
          else {
            iVar8 = (DAT_180c9ff48 - DAT_180c9fef4) * 0x3c;
          }
          FUN_180540170(*puVar5,0,0x80);
          FUN_180540170(puVar5[1],0,0x80);
          FUN_180540170(*puVar4,0,0x40);
          FUN_180540170(puVar4[1],0,0x40);
          uVar3 = FUN_180520030();
          FUN_18052ed6c(&DAT_180c9fea4,*puVar5,*puVar4,uVar3);
          FUN_18052ed6c(&DAT_180c9fef8,puVar5[1],puVar4[1],uVar3);
          local_res18 = iVar8;
        }
        piVar6 = (int *)FUN_18052df3c();
        *piVar6 = local_res8;
        puVar7 = (undefined4 *)FUN_18052df2c();
        *puVar7 = local_res10;
        piVar6 = (int *)FUN_18052df34();
        *piVar6 = local_res18;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
}



/* ===== 18052ec54 FUN_18052ec54 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18052ec54(void)

{
  int iVar1;
  short *psVar2;
  short *psVar3;
  undefined1 auStack_248 [32];
  longlong local_228 [2];
  short local_218 [256];
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_248;
  DAT_180919bd0 = 0xffffffff;
  DAT_180c9fe90 = 0;
  DAT_180919bc0 = 0xffffffff;
  local_228[0] = 0;
  iVar1 = thunk_FUN_18053bb5c(local_228,local_218,0x100,&DAT_18057de20);
  if (iVar1 == 0) {
    psVar2 = local_218;
    psVar3 = (short *)0x0;
LAB_18052ed55:
    if (*psVar2 != 0) {
      FUN_18052e84c(psVar2);
      goto LAB_18052eccd;
    }
  }
  else {
    if (iVar1 == 0x22) {
      psVar2 = (short *)_malloc_base(local_228[0] * 2);
      if (psVar2 == (short *)0x0) {
        psVar2 = (short *)0x0;
      }
      else {
        local_228[1] = 0;
        iVar1 = thunk_FUN_18053bb5c(local_228 + 1,psVar2,local_228[0],&DAT_18057de20);
        if (iVar1 == 0) {
          FUN_1805277b0(0);
          psVar3 = psVar2;
          if (psVar2 == local_218) {
            psVar3 = (short *)0x0;
          }
          goto LAB_18052ed55;
        }
      }
      FUN_1805277b0(psVar2);
    }
    psVar3 = (short *)0x0;
  }
  FUN_18052eacc();
LAB_18052eccd:
  FUN_1805277b0(psVar3);
  return;
}



/* ===== 18052ed6c FUN_18052ed6c ===== */

void FUN_18052ed6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_180515c10();
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  FUN_18052eef0(param_4,0,param_1,0xffffffff,param_3,0x40,0,0);
  return;
}



/* ===== 18052edec __tzset ===== */

/* Library Function - Single Match
    __tzset
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl __tzset(void)

{
  if (DAT_180c9fe94 != 0) {
    return;
  }
  __acrt_lock(6);
  if (DAT_180c9fe94 == 0) {
    FUN_18052ec54();
    LOCK();
    DAT_180c9fe94 = DAT_180c9fe94 + 1;
    UNLOCK();
  }
  __acrt_unlock(6);
  return;
}



/* ===== 18052ee30 _isindst ===== */

/* Library Function - Single Match
    _isindst
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl _isindst(tm *_Time)

{
  int iVar1;
  
  __acrt_lock(6);
  iVar1 = FUN_18052e274(_Time);
  __acrt_unlock(6);
  return iVar1;
}



/* ===== 18052ee60 FUN_18052ee60 ===== */

void FUN_18052ee60(UINT param_1,DWORD param_2,LPCSTR param_3,int param_4,LPWSTR param_5,int param_6)

{
  bool bVar1;
  
  if (param_1 < 0xdead) {
    if (param_1 != 0xdeac) {
      if (param_1 < 0xc434) {
        if ((((param_1 != 0xc433) && (param_1 != 0x2a)) && (param_1 != 0xc42c)) &&
           ((param_1 != 0xc42d && (param_1 != 0xc42e)))) {
          bVar1 = param_1 == 0xc431;
LAB_18052eead:
          if (!bVar1) goto LAB_18052eeb1;
        }
      }
      else if (param_1 != 0xc435) {
        if (param_1 == 0xd698) goto LAB_18052eeeb;
        if (param_1 != 0xdeaa) {
          bVar1 = param_1 == 0xdeab;
          goto LAB_18052eead;
        }
      }
    }
  }
  else if ((((param_1 != 0xdead) && (param_1 != 0xdeae)) && (param_1 != 0xdeaf)) &&
          (((param_1 != 0xdeb0 && (param_1 != 0xdeb1)) &&
           ((param_1 != 0xdeb2 && ((param_1 != 0xdeb3 && (param_1 != 65000)))))))) {
    if (param_1 != 0xfde9) goto LAB_18052eeb1;
LAB_18052eeeb:
    param_2 = param_2 & 8;
    goto LAB_18052eeb1;
  }
  param_2 = 0;
LAB_18052eeb1:
                    /* WARNING: Could not recover jumptable at 0x00018052eeb1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  MultiByteToWideChar(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}



/* ===== 18052eef0 FUN_18052eef0 ===== */

void FUN_18052eef0(uint param_1,uint param_2,LPCWSTR param_3,int param_4,LPSTR param_5,int param_6,
                  LPCSTR param_7,LPBOOL param_8)

{
  int iVar1;
  DWORD dwFlags;
  LPBOOL lpUsedDefaultChar;
  bool bVar2;
  
  if (param_1 < 0xdead) {
    if (param_1 != 0xdeac) {
      if (param_1 < 0xc434) {
        if ((((param_1 != 0xc433) && (param_1 != 0x2a)) && (param_1 != 0xc42c)) &&
           ((param_1 != 0xc42d && (param_1 != 0xc42e)))) {
          bVar2 = param_1 == 0xc431;
          goto LAB_18052ef86;
        }
      }
      else if ((param_1 != 0xc435) && (param_1 != 0xd698)) {
        iVar1 = param_1 - 0xdeaa;
        goto LAB_18052ef81;
      }
    }
  }
  else if ((((param_1 != 0xdead) && (param_1 != 0xdeae)) && (param_1 != 0xdeaf)) &&
          (((param_1 != 0xdeb0 && (param_1 != 0xdeb1)) &&
           ((param_1 != 0xdeb2 && (param_1 != 0xdeb3)))))) {
    iVar1 = param_1 - 65000;
LAB_18052ef81:
    if (iVar1 != 0) {
      bVar2 = iVar1 == 1;
LAB_18052ef86:
      if (!bVar2) {
        dwFlags = param_2 & 0xffffff7f;
        goto LAB_18052ef90;
      }
    }
  }
  dwFlags = 0;
LAB_18052ef90:
  lpUsedDefaultChar = param_8;
  if (param_1 - 65000 < 2) {
    lpUsedDefaultChar = (LPBOOL)0x0;
    param_7 = (LPCSTR)0x0;
    if (param_8 != (LPBOOL)0x0) {
      *param_8 = 0;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00018052efc7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WideCharToMultiByte(param_1,dwFlags,param_3,param_4,param_5,param_6,param_7,lpUsedDefaultChar);
  return;
}



/* ===== 18052efd0 FUN_18052efd0 ===== */

uint FUN_18052efd0(void)

{
  uint uVar1;
  
  uVar1 = MXCSR;
  MXCSR = MXCSR & 0xffffffc0;
  return uVar1 & 0x3f;
}



/* ===== 18052eff0 FUN_18052eff0 ===== */

uint FUN_18052eff0(uint param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = MXCSR;
  MXCSR = (~param_2 | 0xffff807f) & MXCSR | param_1 & param_2;
  if ((DAT_180919bdc == '\0') || ((MXCSR & 0x40) == 0)) {
    MXCSR = MXCSR & 0xffffffbf;
    return uVar1;
  }
  return uVar1;
}



/* ===== 18052f070 FUN_18052f070 ===== */

undefined4 FUN_18052f070(void)

{
  return MXCSR;
}



/* ===== 18052f080 FUN_18052f080 ===== */

void FUN_18052f080(undefined4 param_1)

{
  MXCSR = param_1;
  return;
}



/* ===== 18052f090 FUN_18052f090 ===== */

void FUN_18052f090(uint param_1)

{
  if ((param_1 & 0x3f) != 0) {
    MXCSR = MXCSR | param_1 & 0x3f;
  }
  return;
}



/* ===== 18052f0b0 FUN_18052f0b0 ===== */

uint FUN_18052f0b0(void)

{
  return MXCSR & 0x3f;
}



/* ===== 18052f0c0 FUN_18052f0c0 ===== */

void FUN_18052f0c0(void)

{
  char cVar1;
  int local_res8 [8];
  
  if (DAT_180c9ff4c == 0) {
    local_res8[0] = 0;
    cVar1 = FUN_180532bec();
    if (cVar1 == '\0') {
      FUN_18052c5e0(local_res8);
    }
    DAT_180c9ff4c = (local_res8[0] == 1) + 1;
    LOCK();
    UNLOCK();
  }
  return;
}



/* ===== 18052f100 FUN_18052f100 ===== */

bool FUN_18052f100(void)

{
  char cVar1;
  int local_res8 [8];
  
  local_res8[0] = 0;
  cVar1 = FUN_180532bec();
  if (cVar1 == '\0') {
    FUN_18052c584(local_res8);
  }
  return local_res8[0] != 1;
}



/* ===== 18052f130 _getdrive ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    _getdrive
   
   Library: Visual Studio 2019 Release */

int __cdecl _getdrive(void)

{
  WCHAR WVar1;
  DWORD DVar2;
  LPWSTR lpBuffer;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  undefined1 auStack_248 [32];
  WCHAR local_228;
  short local_226;
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_248;
  FUN_180540170(&local_228,0,0x20a);
  DVar2 = GetCurrentDirectoryW(0x105,&local_228);
  if (0x104 < DVar2) {
    lpBuffer = (LPWSTR)_calloc_base(DVar2 + 1,2);
    iVar5 = 0;
    if ((lpBuffer == (LPWSTR)0x0) || (DVar2 = GetCurrentDirectoryW(DVar2 + 1,lpBuffer), DVar2 == 0))
    {
      puVar3 = (undefined4 *)FUN_18051bfb0();
      *puVar3 = 0xc;
    }
    else if ((*lpBuffer != L'\0') && (lpBuffer[1] == L':')) {
      WVar1 = *lpBuffer;
      uVar4 = (ushort)WVar1 - 0x20;
      if (0x19 < (ushort)WVar1 - 0x61) {
        uVar4 = (uint)(ushort)WVar1;
      }
      iVar5 = uVar4 - 0x40;
    }
    FUN_1805277b0(lpBuffer);
    return iVar5;
  }
  if (local_228 == L'\0') {
    return 0;
  }
  if (local_226 != 0x3a) {
    return 0;
  }
  uVar4 = (ushort)local_228 - 0x20;
  if (0x19 < (ushort)local_228 - 0x61) {
    uVar4 = (uint)(ushort)local_228;
  }
  return uVar4 - 0x40;
}



/* ===== 18052f228 FUN_18052f228 ===== */

undefined4 FUN_18052f228(longlong param_1,undefined8 *param_2)

{
  DWORD DVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  
  DVar1 = GetFullPathNameW((LPCWSTR)*param_2,*(DWORD *)(param_1 + 0x18),*(LPWSTR *)(param_1 + 0x10),
                           (LPWSTR *)0x0);
  uVar3 = (ulonglong)DVar1;
  if (uVar3 == 0) {
    DVar1 = GetLastError();
    FUN_18051bf40(DVar1);
    puVar4 = (undefined4 *)FUN_18051bfb0();
    uVar2 = *puVar4;
  }
  else if (*(ulonglong *)(param_1 + 0x18) < uVar3) {
    if (*(char *)(param_1 + 0x28) != '\0') {
      *(undefined1 *)(param_1 + 0x28) = 0;
    }
    puVar4 = (undefined4 *)FUN_18051bfb0();
    *puVar4 = 0x22;
    uVar2 = 0x22;
    *(undefined1 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  else {
    *(ulonglong *)(param_1 + 0x20) = uVar3;
    uVar2 = 0;
  }
  return uVar2;
}



/* ===== 18052f29c FUN_18052f29c ===== */

uint FUN_18052f29c(longlong param_1,undefined8 *param_2)

{
  DWORD DVar1;
  uint uVar2;
  uint *puVar3;
  LPWSTR lpBuffer;
  ulonglong uVar4;
  
  DVar1 = GetFullPathNameW((LPCWSTR)*param_2,*(DWORD *)(param_1 + 0x18),*(LPWSTR *)(param_1 + 0x10),
                           (LPWSTR *)0x0);
  uVar4 = (ulonglong)DVar1;
  if (DVar1 == 0) {
LAB_18052f2d7:
    DVar1 = GetLastError();
    FUN_18051bf40(DVar1);
    puVar3 = (uint *)FUN_18051bfb0();
    uVar2 = *puVar3;
  }
  else {
    if (*(ulonglong *)(param_1 + 0x18) < uVar4) {
      if (*(char *)(param_1 + 0x28) != '\0') {
        thunk_FUN_1805277b0(*(undefined8 *)(param_1 + 0x10));
        *(undefined1 *)(param_1 + 0x28) = 0;
      }
      lpBuffer = (LPWSTR)_malloc_base(uVar4 * 2 + 2);
      *(LPWSTR *)(param_1 + 0x10) = lpBuffer;
      uVar2 = ~-(uint)(lpBuffer != (LPWSTR)0x0) & 0xc;
      if (lpBuffer != (LPWSTR)0x0) {
        uVar2 = 0;
      }
      *(bool *)(param_1 + 0x28) = lpBuffer != (LPWSTR)0x0;
      uVar4 = -(ulonglong)(lpBuffer != (LPWSTR)0x0) & uVar4 + 1;
      *(ulonglong *)(param_1 + 0x18) = uVar4;
      if (uVar2 != 0) {
        return uVar2;
      }
      DVar1 = GetFullPathNameW((LPCWSTR)*param_2,(DWORD)uVar4,lpBuffer,(LPWSTR *)0x0);
      if ((ulonglong)DVar1 == 0) goto LAB_18052f2d7;
      *(ulonglong *)(param_1 + 0x20) = (ulonglong)DVar1;
    }
    else {
      *(ulonglong *)(param_1 + 0x20) = uVar4;
    }
    uVar2 = 0;
  }
  return uVar2;
}



/* ===== 18052f388 FUN_18052f388 ===== */

longlong FUN_18052f388(undefined8 *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined4 *puVar5;
  
  lVar4 = param_1[2];
  if ((lVar4 == 0) || (param_1[4] == 0)) {
    return 0;
  }
  if (*(char *)(param_1 + 5) != '\0') goto LAB_18052f433;
  lVar4 = _malloc_base(param_1[4] * 2);
  uVar1 = param_1[3];
  lVar2 = param_1[2];
  uVar3 = param_1[4];
  if (uVar1 == 0) goto LAB_18052f433;
  if (lVar4 == 0) {
LAB_18052f3e5:
    puVar5 = (undefined4 *)FUN_18051bfb0();
    *puVar5 = 0x16;
  }
  else {
    if ((lVar2 != 0) && (uVar1 <= uVar3)) {
      FUN_180540530(lVar4,lVar2,uVar1);
      goto LAB_18052f433;
    }
    FUN_180540170(lVar4,0,uVar3);
    if (lVar2 == 0) goto LAB_18052f3e5;
    if (uVar1 <= uVar3) goto LAB_18052f433;
    puVar5 = (undefined4 *)FUN_18051bfb0();
    *puVar5 = 0x22;
  }
  FUN_180527740();
LAB_18052f433:
  param_1[4] = 0;
  param_1[2] = *param_1;
  param_1[3] = param_1[1];
  return lVar4;
}



/* ===== 18052f46c FUN_18052f46c ===== */

longlong FUN_18052f46c(longlong param_1,short *param_2,ulonglong param_3)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  short *local_res8;
  longlong local_38;
  ulonglong local_30;
  longlong local_28;
  ulonglong local_20;
  undefined8 local_18;
  char local_10;
  
  if ((param_2 == (short *)0x0) || (*param_2 == 0)) {
    uVar3 = 0x7fffffff;
    if (param_3 < 0x7fffffff) {
      uVar3 = (int)param_3;
    }
    lVar2 = FUN_18053be4c(param_1,uVar3);
  }
  else {
    local_18 = 0;
    local_10 = '\0';
    local_res8 = param_2;
    if (param_1 == 0) {
      local_38 = 0;
      local_30 = 0;
      local_28 = 0;
      local_20 = 0;
      FUN_18052f29c(&local_38,&local_res8);
      lVar2 = FUN_18052f388(&local_38);
      if (local_10 != '\0') {
        thunk_FUN_1805277b0(local_28);
      }
    }
    else {
      local_38 = param_1;
      local_30 = param_3;
      local_28 = param_1;
      local_20 = param_3;
      iVar1 = FUN_18052f228();
      lVar2 = 0;
      if (iVar1 == 0) {
        lVar2 = param_1;
      }
    }
  }
  return lVar2;
}



/* ===== 18052f520 FUN_18052f520 ===== */

short * FUN_18052f520(short *param_1,undefined8 param_2)

{
  short sVar1;
  longlong lVar2;
  
  sVar1 = *param_1;
  while( true ) {
    if (sVar1 == 0) {
      return (short *)0x0;
    }
    lVar2 = FUN_18053e950(param_2,sVar1);
    if (lVar2 != 0) break;
    sVar1 = param_1[1];
    param_1 = param_1 + 1;
  }
  return param_1;
}



/* ===== 18052f580 FUN_18052f580 ===== */

void FUN_18052f580(ushort *param_1,ushort *param_2)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  
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
  } while ((uVar3 == uVar4) && (uVar3 != 0));
  return;
}



/* ===== 18052f5e0 FUN_18052f5e0 ===== */

void FUN_18052f5e0(ushort *param_1,ushort *param_2)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  
  if (DAT_180c9f7dc != 0) {
    FUN_18052f610(param_1,param_2,0);
    return;
  }
  if ((param_1 == (ushort *)0x0) || (param_2 == (ushort *)0x0)) {
    FUN_180511780();
    return;
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
  } while ((uVar3 == uVar4) && (uVar3 != 0));
  return;
}



/* ===== 18052f610 FUN_18052f610 ===== */

int FUN_18052f610(ushort *param_1,ushort *param_2,longlong *param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  longlong local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  char local_20;
  
  if ((param_1 == (ushort *)0x0) || (param_2 == (ushort *)0x0)) {
    puVar4 = (undefined4 *)FUN_18051bfb0();
    *puVar4 = 0x16;
    FUN_180527740();
    return 0x7fffffff;
  }
  local_20 = '\0';
  if (param_3 == (longlong *)0x0) {
    if (DAT_180c9f7dc == 0) {
      local_30 = CONCAT44(PTR_PTR_1809198b8._4_4_,PTR_PTR_1809198b8._0_4_);
      uStack_28 = CONCAT44(PTR_DAT_1809198c0._4_4_,PTR_DAT_1809198c0._0_4_);
    }
    else {
      local_38 = FUN_180529860();
      local_30 = *(longlong *)(local_38 + 0x90);
      uStack_28 = *(longlong *)(local_38 + 0x88);
      __acrt_update_locale_info(local_38,&local_30);
      FUN_1805278dc(local_38,&uStack_28);
      if ((*(uint *)(local_38 + 0x3a8) & 2) == 0) {
        *(uint *)(local_38 + 0x3a8) = *(uint *)(local_38 + 0x3a8) | 2;
        local_20 = '\x01';
      }
    }
  }
  else {
    local_30 = *param_3;
    uStack_28 = param_3[1];
  }
  lVar6 = local_30;
  if (*(longlong *)(local_30 + 0x138) == 0) {
    iVar3 = FUN_18052f580(param_1,param_2);
  }
  else {
    do {
      uVar2 = *param_1;
      uVar7 = (uint)uVar2;
      param_1 = param_1 + 1;
      uVar1 = *param_2;
      uVar8 = (uint)uVar1;
      param_2 = param_2 + 1;
      if (uVar2 != uVar1) {
        if (uVar2 < 0x100) {
          uVar5 = (ulonglong)uVar2 & 0xff;
          if (((&DAT_18057c642)[uVar5 * 2] & 1) != 0) {
            uVar5 = (ulonglong)*(byte *)(uVar5 + *(longlong *)(lVar6 + 0x110));
          }
          uVar2 = (ushort)uVar5;
        }
        else {
          uVar2 = FUN_1805182a8(uVar2,&local_30);
          lVar6 = local_30;
        }
        uVar7 = (uint)uVar2;
        if (uVar2 != uVar1) {
          if (uVar1 < 0x100) {
            uVar5 = (ulonglong)uVar1 & 0xff;
            if (((&DAT_18057c642)[uVar5 * 2] & 1) != 0) {
              uVar5 = (ulonglong)*(byte *)(uVar5 + *(longlong *)(lVar6 + 0x110));
            }
            uVar2 = (ushort)uVar5;
          }
          else {
            uVar2 = FUN_1805182a8(uVar1,&local_30);
            lVar6 = local_30;
          }
          uVar8 = (uint)uVar2;
        }
      }
      iVar3 = uVar7 - uVar8;
    } while ((iVar3 == 0) && (uVar7 != 0));
  }
  if (local_20 != '\0') {
    *(uint *)(local_38 + 0x3a8) = *(uint *)(local_38 + 0x3a8) & 0xfffffffd;
  }
  return iVar3;
}



/* ===== 18052f7d4 FUN_18052f7d4 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00018052f9b7) */
/* WARNING: Removing unreachable block (ram,0x00018052f9c2) */

longlong FUN_18052f7d4(int param_1,int param_2,int param_3,uint param_4,uint param_5,uint param_6,
                      int param_7)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  longlong lVar5;
  
  uVar4 = param_1 - 0x76c;
  lVar5 = (longlong)param_2;
  if (((((((int)uVar4 < 0x46) || (0x44d < uVar4)) || (0xb < param_2 - 1U)) || (param_3 < 1)) ||
      ((*(int *)(&DAT_18058a438 + lVar5 * 4) - *(int *)(&DAT_18058a434 + lVar5 * 4) < param_3 &&
       (((cVar1 = __crt_time_is_leap_year<>(uVar4), cVar1 == '\0' || (param_2 != 2)) ||
        (0x1d < param_3)))))) || (((0x17 < param_4 || (0x3b < param_5)) || (0x3b < param_6)))) {
    puVar3 = (undefined4 *)FUN_18051bfb0();
    *puVar3 = 0x16;
    lVar5 = -1;
  }
  else {
    do {
      param_3 = param_3 + *(int *)(&DAT_18058a434 + lVar5 * 4);
      cVar1 = __crt_time_is_leap_year<>(uVar4);
      if ((cVar1 != '\0') && (2 < param_2)) {
        param_3 = param_3 + 1;
      }
      __tzset();
      iVar2 = FUN_18052df54();
      if (((iVar2 != 0) || (iVar2 = FUN_18052df84(), iVar2 != 0)) ||
         (iVar2 = FUN_18052dfb4(), iVar2 != 0)) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      iVar2 = param_1 + -0x76d;
      lVar5 = ((((longlong)
                 (((int)((iVar2 >> 0x1f & 3U) + iVar2) >> 2) + -0x11 +
                 ((param_1 + -0x641) / 400 - iVar2 / 100)) + ((longlong)(int)uVar4 + -0x46) * 0x16d
                + (longlong)param_3) * 0x18 + (longlong)(int)param_4) * 0x3c +
              (longlong)(int)param_5) * 0x3c + (longlong)(int)param_6;
    } while (param_7 == 1);
  }
  return lVar5;
}



/* ===== 18052fa14 thunk_FUN_18052f7d4 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00018052f9b7) */
/* WARNING: Removing unreachable block (ram,0x00018052f9c2) */

longlong thunk_FUN_18052f7d4(int param_1,int param_2,int param_3,uint param_4,uint param_5,
                            uint param_6,int param_7)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  longlong lVar5;
  
  uVar4 = param_1 - 0x76c;
  lVar5 = (longlong)param_2;
  if (((((((int)uVar4 < 0x46) || (0x44d < uVar4)) || (0xb < param_2 - 1U)) || (param_3 < 1)) ||
      ((*(int *)(&DAT_18058a438 + lVar5 * 4) - *(int *)(&DAT_18058a434 + lVar5 * 4) < param_3 &&
       (((cVar1 = __crt_time_is_leap_year<>(uVar4), cVar1 == '\0' || (param_2 != 2)) ||
        (0x1d < param_3)))))) || (((0x17 < param_4 || (0x3b < param_5)) || (0x3b < param_6)))) {
    puVar3 = (undefined4 *)FUN_18051bfb0();
    *puVar3 = 0x16;
    lVar5 = -1;
  }
  else {
    do {
      param_3 = param_3 + *(int *)(&DAT_18058a434 + lVar5 * 4);
      cVar1 = __crt_time_is_leap_year<>(uVar4);
      if ((cVar1 != '\0') && (2 < param_2)) {
        param_3 = param_3 + 1;
      }
      __tzset();
      iVar2 = FUN_18052df54();
      if (((iVar2 != 0) || (iVar2 = FUN_18052df84(), iVar2 != 0)) ||
         (iVar2 = FUN_18052dfb4(), iVar2 != 0)) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      iVar2 = param_1 + -0x76d;
      lVar5 = ((((longlong)
                 (((int)((iVar2 >> 0x1f & 3U) + iVar2) >> 2) + -0x11 +
                 ((param_1 + -0x641) / 400 - iVar2 / 100)) + ((longlong)(int)uVar4 + -0x46) * 0x16d
                + (longlong)param_3) * 0x18 + (longlong)(int)param_4) * 0x3c +
              (longlong)(int)param_5) * 0x3c + (longlong)(int)param_6;
    } while (param_7 == 1);
  }
  return lVar5;
}



/* ===== 18052fa20 FUN_18052fa20 ===== */

uint FUN_18052fa20(uint param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  uVar2 = param_1 & 0x1f;
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_18052f070();
    *param_2 = uVar1;
    if (((param_1 & 8) == 0) || (-1 < (char)uVar1)) {
      if (((param_1 & 4) == 0) || ((uVar1 >> 9 & 1) == 0)) {
        if (((param_1 & 1) == 0) || ((uVar1 >> 10 & 1) == 0)) {
          if (((param_1 & 2) != 0) && ((uVar1 >> 0xb & 1) != 0)) {
            uVar2 = param_1 & 0x1d;
            uVar3 = (ulonglong)(param_1 & 0x10);
          }
        }
        else {
          uVar3 = 8;
          uVar2 = param_1 & 0x1e;
        }
      }
      else {
        uVar3 = 4;
        uVar2 = param_1 & 0x1b;
      }
    }
    else {
      uVar3 = 1;
      uVar2 = param_1 & 0x17;
    }
    if (((param_1 & 0x10) != 0) && ((uVar1 >> 0xc & 1) != 0)) {
      uVar3 = uVar3 | 0x20;
      uVar2 = uVar2 & 0xffffffef;
    }
    if (uVar2 != 0) {
      FUN_18052eff0(0x1f80,0xffc0);
    }
    if ((uVar3 != 0) && ((uVar3 & ~uVar1) != 0)) {
      if (uVar2 == 0) {
        FUN_18052f080(uVar1 | uVar3);
      }
      else {
        FUN_18052f090(uVar3);
      }
    }
  }
  return uVar2;
}



/* ===== 18052fb30 FUN_18052fb30 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_18052fb30(undefined8 param_1,undefined4 param_2,undefined8 param_3,int param_4,
             undefined4 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,int param_9
             )

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 auStack_128 [32];
  undefined8 *local_108;
  undefined8 *local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  int local_e8 [2];
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
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
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_128;
  local_f0 = 0;
  local_f8 = param_3;
  iVar3 = FUN_18052fa20(param_5,&local_f0);
  uVar1 = param_8;
  if (iVar3 != 0) {
    local_b8 = 0;
    uStack_b0 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    uStack_50 = 0;
    if (param_9 == 2) {
      local_88 = param_8;
      local_78 = 3;
    }
    local_100 = &local_f8;
    local_108 = &param_7;
    FUN_180526eb0(&local_b8,&local_f0,param_5,param_2);
  }
  cVar2 = FUN_180539d40();
  if ((cVar2 == '\0') || (param_4 == 0)) {
    FUN_180527220(param_4);
    uVar4 = (undefined4)local_f8;
    uVar5 = (undefined4)((ulonglong)local_f8 >> 0x20);
  }
  else {
    local_d8 = param_7;
    local_c8 = local_f8;
    local_e8[1] = 0;
    local_d0 = uVar1;
    local_e8[0] = param_4;
    local_e0 = param_1;
    iVar3 = FUN_180539d70(local_e8);
    if (iVar3 == 0) {
      FUN_180527220(param_4);
    }
    uVar4 = (undefined4)local_c8;
    uVar5 = (undefined4)((ulonglong)local_c8 >> 0x20);
  }
  return CONCAT44(uVar5,uVar4);
}



/* ===== 18052fc70 FUN_18052fc70 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

float FUN_18052fc70(undefined8 param_1,undefined4 param_2,float param_3,int param_4,
                   undefined4 param_5,undefined8 param_6,float param_7,float param_8,int param_9)

{
  float fVar1;
  char cVar2;
  int iVar3;
  undefined1 auStack_128 [32];
  undefined4 *local_108;
  float *local_100;
  float local_f8 [2];
  undefined8 local_f0;
  int local_e8 [2];
  undefined8 local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  ulonglong local_88;
  undefined8 uStack_80;
  ulonglong local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_128;
  local_f0 = 0;
  local_f8[0] = param_3;
  iVar3 = FUN_18052fa20(param_5,&local_f0);
  fVar1 = param_8;
  if (iVar3 != 0) {
    local_b8 = 0;
    uStack_b0 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    uStack_80 = 0;
    uStack_70 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    uStack_50 = 0;
    if (param_9 == 2) {
      local_88 = (ulonglong)(uint)param_8;
    }
    local_78 = (ulonglong)(param_9 == 2);
    local_100 = local_f8;
    local_108 = &param_7;
    FUN_1805271f0(&local_b8,&local_f0,param_5,param_2);
  }
  cVar2 = FUN_180539d40();
  if ((cVar2 == '\0') || (param_4 == 0)) {
    FUN_180527220(param_4);
  }
  else {
    local_d8 = (double)param_7;
    local_e8[1] = 0;
    local_d0 = (double)fVar1;
    local_c8 = (double)local_f8[0];
    local_e8[0] = param_4;
    local_e0 = param_1;
    iVar3 = FUN_180539d70(local_e8);
    if (iVar3 == 0) {
      FUN_180527220(param_4);
    }
    local_f8[0] = (float)local_c8;
  }
  return local_f8[0];
}



/* ===== 18052fdb0 FUN_18052fdb0 ===== */

ulonglong FUN_18052fdb0(ulonglong param_1)

{
  return param_1 | 0x8000000000000;
}



/* ===== 18052fdd0 FUN_18052fdd0 ===== */

uint FUN_18052fdd0(uint param_1)

{
  return param_1 | 0x400000;
}



/* ===== 18052fde0 FUN_18052fde0 ===== */

ulonglong FUN_18052fde0(float param_1,float param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  double dVar4;
  int iVar5;
  ulonglong uVar6;
  double dVar7;
  ulonglong uVar8;
  undefined8 in_XMM0_Qb;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined8 in_XMM1_Qb;
  undefined1 auVar14 [16];
  double dVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  double dVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [64];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [64];
  
  auVar25._0_8_ = (double)param_2;
  auVar25._8_8_ = in_XMM1_Qb;
  auVar27 = ZEXT1664(auVar25);
  auVar21._0_8_ = (double)param_1;
  auVar21._8_8_ = in_XMM0_Qb;
  auVar24 = ZEXT1664(auVar21);
  iVar5 = ((uint)((ulonglong)auVar21._0_8_ >> 0x34) & 0x7ff) -
          ((uint)((ulonglong)auVar25._0_8_ >> 0x34) & 0x7ff);
  dVar7 = ABS(auVar25._0_8_);
  dVar4 = ABS(auVar21._0_8_);
  if ((0x7ff0000000000000 < (ulonglong)dVar7) ||
     (param_2 = param_1, 0x7ff0000000000000 < (ulonglong)dVar4)) {
    auVar14._4_12_ = ZEXT812(0);
    auVar14._0_4_ = param_2;
    uVar8 = FUN_18053bea0(0,auVar14._0_8_,0);
    return uVar8;
  }
  if (dVar4 == 0.0) {
    if (-1 < (longlong)auVar25._0_8_) {
      auVar9._4_12_ = auVar21._4_12_;
      auVar9._0_4_ = param_1;
      return auVar9._0_8_;
    }
LAB_18052fe89:
    FUN_18052f090(0x20);
    if ((longlong)auVar21._0_8_ < 0) {
      uVar8 = (ulonglong)DAT_180578290;
    }
    else {
      uVar8 = (ulonglong)DAT_1808ac680;
    }
  }
  else {
    auVar23 = auVar21;
    auVar14 = auVar25;
    if (dVar7 == 0.0) {
      FUN_18052f090();
      auVar14 = auVar27._0_16_;
      auVar23 = auVar24._0_16_;
      if (-1 < (longlong)auVar21._0_8_) goto LAB_18052fedb;
    }
    else {
LAB_18052fedb:
      if (iVar5 < 0x1b) {
        dVar20 = auVar23._0_8_;
        dVar15 = auVar14._0_8_;
        if ((iVar5 < -0xd) && (-1 < (longlong)auVar25._0_8_)) {
          if (-0x97 < iVar5) {
            if (-0x7f < iVar5) {
              auVar11._0_8_ = dVar20 / dVar15;
              auVar11._8_8_ = auVar23._8_8_;
              auVar12._0_4_ = (float)auVar11._0_8_;
              auVar12._4_12_ = auVar11._4_12_;
              return auVar12._0_8_;
            }
            dVar15 = (dVar20 * 1.2676506002282294e+30) / dVar15;
            uVar3 = (uint)((ulonglong)ABS(dVar15) >> 0x20);
            uVar2 = uVar3 >> 0x14;
            uVar3 = uVar3 >> 0x14;
            if (uVar2 < 0x65) {
              if ((int)(0x65 - uVar2) < 0x37) {
                uVar8 = ((ulonglong)dVar15 & 0x1fffffffffffff | 0x10000000000000) >>
                        (100 - (ulonglong)uVar3 & 0x3f);
                uVar8 = (uVar8 >> 1) + (ulonglong)((uint)uVar8 & 1);
              }
              else {
                uVar8 = 0;
              }
            }
            else {
              uVar8 = (ulonglong)uVar3 - 100 << 0x34 | (ulonglong)dVar15 & 0xfffffffffffff;
            }
            uVar6 = (ulonglong)dVar15 & 0x8000000000000000 | uVar8;
            auVar24 = ZEXT864(uVar6);
            auVar22._8_8_ = 0;
            auVar22._0_8_ = uVar6;
            if ((uVar8 & 0x7ff0000000000000) == 0) {
              FUN_18052f090(0x30);
              auVar22 = auVar24._0_16_;
            }
            auVar10._0_4_ = (float)auVar22._0_8_;
            auVar10._4_12_ = auVar22._4_12_;
            return auVar10._0_8_;
          }
          FUN_18052f090(0x30);
          if ((longlong)auVar21._0_8_ < 0) {
            return (ulonglong)DAT_1808acd10;
          }
          return 0;
        }
        if ((-0x1b < iVar5) || (-1 < (longlong)auVar25._0_8_)) {
          if ((dVar4 != INFINITY) || (dVar7 != INFINITY)) {
            auVar26 = auVar14;
            if ((longlong)auVar25._0_8_ < 0) {
              auVar26._0_8_ = (ulonglong)dVar15 ^ DAT_1808adeb0;
              auVar26._8_8_ = auVar14._8_8_;
            }
            if ((longlong)auVar21._0_8_ < 0) {
              auVar23._0_8_ = (ulonglong)dVar20 ^ DAT_1808adeb0;
            }
            bVar1 = auVar26._0_8_ < auVar23._0_8_;
            auVar16._0_8_ = -(ulonglong)!bVar1;
            auVar16._8_8_ = 0xffffffffffffffff;
            auVar14 = vblendvpd_avx(auVar26,auVar23,auVar16);
            auVar17._0_8_ = -(ulonglong)!bVar1;
            auVar17._8_8_ = 0xffffffffffffffff;
            auVar23 = vblendvpd_avx(auVar23,auVar26,auVar17);
            dVar4 = auVar23._0_8_;
            dVar7 = auVar14._0_8_;
            auVar18._0_8_ = dVar7 / dVar4;
            auVar18._8_8_ = auVar14._8_8_;
            if (auVar18._0_8_ <= DAT_180578248) {
              if (DAT_1808ac220 <= auVar18._0_8_) {
                dVar4 = auVar18._0_8_ * auVar18._0_8_;
                auVar18._0_8_ =
                     -(dVar4 * auVar18._0_8_ *
                      (-(dVar4 * (-(dVar4 * DAT_180578250) + DAT_180578258)) + DAT_180578268)) +
                     auVar18._0_8_;
              }
            }
            else {
              uVar3 = (uint)(auVar18._0_8_ * DAT_180578280 + DAT_1808ac4a8);
              dVar15 = (double)uVar3;
              dVar4 = (dVar7 * DAT_180578280 - dVar4 * dVar15) /
                      (dVar7 * dVar15 + dVar4 * DAT_180578280);
              auVar18._0_8_ =
                   -(dVar4 * dVar4 * dVar4 * DAT_180578260) +
                   dVar4 + *(double *)(&DAT_18057de30 + (ulonglong)(uVar3 - 0x10) * 8);
              auVar18._8_8_ = 0;
            }
            if (bVar1) {
              dVar4 = auVar18._0_8_;
              auVar18._8_8_ = 0;
              auVar18._0_8_ = DAT_180578270 - dVar4;
            }
            if ((longlong)auVar25._0_8_ < 0) {
              dVar4 = auVar18._0_8_;
              auVar18._8_8_ = 0;
              auVar18._0_8_ = DAT_1808ac588 - dVar4;
            }
            auVar19 = auVar18;
            if ((longlong)auVar21._0_8_ < 0) {
              auVar19._0_8_ = auVar18._0_8_ ^ DAT_1808adeb0;
              auVar19._8_8_ = auVar18._8_8_;
            }
            auVar13._0_4_ = (float)auVar19._0_8_;
            auVar13._4_12_ = auVar19._4_12_;
            return auVar13._0_8_;
          }
          FUN_18052f090(0x20);
          if (-1 < (longlong)auVar25._0_8_) {
            if ((longlong)auVar21._0_8_ < 0) {
              return (ulonglong)DAT_180578288;
            }
            return (ulonglong)DAT_1808ac28c;
          }
          if ((longlong)auVar21._0_8_ < 0) {
            return (ulonglong)DAT_18057828c;
          }
          return (ulonglong)DAT_180578278;
        }
        goto LAB_18052fe89;
      }
      FUN_18052f090(0x20);
      if (-1 < (longlong)auVar21._0_8_) {
        return (ulonglong)DAT_1808ac440;
      }
    }
    uVar8 = (ulonglong)DAT_1808acdb0;
  }
  return uVar8;
}



/* ===== 1805301c0 FUN_1805301c0 ===== */

ulonglong FUN_1805301c0(ulonglong param_1)

{
  bool bVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  byte bVar6;
  undefined1 auVar7 [16];
  ulonglong uVar8;
  sbyte sVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  uVar14 = (param_1 >> 0x34) - 0x3ff;
  lVar12 = -((uVar14 >> 3) - 0x86);
  uVar10 = param_1 & 0xfffffffffffff | 0x10000000000000;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = *(ulonglong *)(&DAT_18057e7a0 + lVar12);
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar10;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = SUB168(auVar2 * auVar4,8);
  auVar3._8_8_ = 0;
  auVar3._0_8_ = *(ulonglong *)(&UNK_18057e7a8 + lVar12);
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar10;
  uVar14 = uVar14 & 7;
  auVar7 = auVar3 * auVar5 + auVar7;
  uVar8 = auVar7._0_8_;
  uVar13 = auVar7._8_8_ + *(longlong *)(&UNK_18057e7b0 + lVar12) * uVar10;
  uVar11 = 0x36 - uVar14;
  bVar6 = (byte)uVar11 & 0x3f;
  uVar10 = uVar13 >> bVar6;
  bVar1 = (bool)(((uVar11 & 0x3f) != 0) * ((uVar13 >> bVar6 - 1 & 1) != 0));
  if (bVar1) {
    uVar13 = ~uVar13;
    uVar8 = ~uVar8;
  }
  sVar9 = (char)uVar14 + 10;
  uVar11 = (uVar13 << sVar9) >> sVar9;
  lVar12 = 0x3f;
  if (uVar11 != 0) {
    for (; uVar11 >> lVar12 == 0; lVar12 = lVar12 + -1) {
    }
  }
  if ((uVar11 == 0) && (lVar12 = 0x3f, uVar8 != 0)) {
    for (; uVar8 >> lVar12 == 0; lVar12 = lVar12 + -1) {
    }
  }
  return uVar10 + bVar1 & 3;
}



/* ===== 180530310 FUN_180530310 ===== */

ulonglong FUN_180530310(ulonglong param_1)

{
  bool bVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  ulonglong uVar6;
  ulonglong uVar7;
  sbyte sVar8;
  byte bVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined1 auVar15 [16];
  
  uVar14 = (param_1 >> 0x34) - 0x3ff;
  lVar12 = -((uVar14 >> 3) - 0x86);
  uVar10 = param_1 & 0xfffffffffffff | 0x10000000000000;
  auVar15._8_8_ = 0;
  auVar15._0_8_ = *(ulonglong *)(&DAT_18057e7a0 + lVar12);
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar10;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = SUB168(auVar15 * auVar3,8);
  uVar6 = SUB168(auVar15 * auVar3,0);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = SUB168(*(undefined1 (*) [16])(&UNK_18057e7a8 + lVar12),0);
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar10;
  uVar14 = uVar14 & 7;
  auVar15 = vpsrldq_avx(*(undefined1 (*) [16])(&UNK_18057e7a8 + lVar12),8);
  auVar5 = auVar2 * auVar4 + auVar5;
  uVar7 = auVar5._0_8_;
  uVar13 = auVar5._8_8_ + auVar15._0_8_ * uVar10;
  uVar11 = 0x36 - uVar14;
  bVar9 = (byte)uVar11 & 0x3f;
  uVar10 = uVar13 >> bVar9;
  bVar1 = (bool)(((uVar11 & 0x3f) != 0) * ((uVar13 >> bVar9 - 1 & 1) != 0));
  if (bVar1) {
    uVar13 = ~uVar13;
    uVar7 = ~uVar7;
    uVar6 = ~uVar6;
  }
  sVar8 = (char)uVar14 + 10;
  uVar11 = (uVar13 << sVar8) >> sVar8;
  lVar12 = 0x3f;
  if (uVar11 != 0) {
    for (; uVar11 >> lVar12 == 0; lVar12 = lVar12 + -1) {
    }
  }
  uVar13 = uVar6;
  uVar14 = uVar7;
  if (uVar11 == 0) {
    uVar13 = 0;
    lVar12 = 0x3f;
    if (uVar7 != 0) {
      for (; uVar7 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar14 = uVar6;
    uVar11 = uVar7;
  }
  lVar12 = lVar12 + -0x34;
  bVar9 = (byte)lVar12;
  if (lVar12 < 0) {
    uVar14 = uVar14 << (-bVar9 & 0x3f) | uVar13 >> (-(-bVar9 - 0x40) & 0x3f);
  }
  else if (lVar12 != 0) {
    uVar14 = uVar14 >> (bVar9 & 0x3f) | uVar11 << (-(bVar9 - 0x40) & 0x3f);
  }
  lVar12 = 0x3f;
  if (uVar14 != 0) {
    for (; uVar14 >> lVar12 == 0; lVar12 = lVar12 + -1) {
    }
  }
  return uVar10 + bVar1 & 3;
}



/* ===== 180530500 FUN_180530500 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_180530500(double param_1)

{
  return (int)((param_1 * DAT_18057e6e0 + _DAT_18057e720) - _DAT_18057e720) & 3;
}



/* ===== 180530580 FUN_180530580 ===== */

void FUN_180530580(undefined8 param_1)

{
  FUN_180530650(param_1,&DAT_18057ccac,0x12);
  return;
}



/* ===== 1805305a0 FUN_1805305a0 ===== */

void FUN_1805305a0(uint param_1)

{
  if (((param_1 & 0x7f800000) == 0x7f800000) && ((param_1 & 0x7fffff) == 0)) {
    FUN_18052fc70(&DAT_18057e738,0x12,0xffc00000,1,8,0x21,param_1,0,1);
    return;
  }
  return;
}



/* ===== 180530630 FUN_180530630 ===== */

void FUN_180530630(undefined8 param_1)

{
  FUN_180530650(param_1,&DAT_18057cca8,0x1e);
  return;
}



/* ===== 180530650 FUN_180530650 ===== */

ulonglong FUN_180530650(ulonglong param_1,undefined8 param_2,undefined4 param_3)

{
  if ((param_1 & 0x7ff0000000000000) == 0x7ff0000000000000) {
    if ((param_1 & 0xfffffffffffff) == 0) {
      FUN_18052fb30(param_2,param_3,0xfff8000000000000,1,8,0x21,param_1,0,1);
      return 0xfff8000000000000;
    }
    param_1 = param_1 | 0x8000000000000;
  }
  return param_1;
}



/* ===== 180530700 FUN_180530700 ===== */

void FUN_180530700(uint param_1)

{
  if (((param_1 & 0x7f800000) == 0x7f800000) && ((param_1 & 0x7fffff) == 0)) {
    FUN_18052fc70(&DAT_18057e730,0x1e,0xffc00000,1,8,0x21,param_1,0,1);
    return;
  }
  return;
}



/* ===== 180530790 FUN_180530790 ===== */

void FUN_180530790(undefined8 param_1)

{
  FUN_180530650(param_1,&DAT_18089f3fc,0x20);
  return;
}



/* ===== 1805307b0 FUN_1805307b0 ===== */

void FUN_1805307b0(uint param_1)

{
  if (((param_1 & 0x7f800000) == 0x7f800000) && ((param_1 & 0x7fffff) == 0)) {
    FUN_18052fc70(&DAT_18057e740,0x20,0xffc00000,1,8,0x21,param_1,0,1);
    return;
  }
  return;
}



/* ===== 180530840 __remainder_piby2d2f_forC ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __remainder_piby2d2f_forC
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void __remainder_piby2d2f_forC(ulonglong param_1,double *param_2,uint *param_3)

{
  bool bVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  ulonglong uVar9;
  ulonglong uVar10;
  sbyte sVar11;
  byte bVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  longlong lVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  
  uVar19 = (param_1 >> 0x34) - 0x3ff;
  lVar17 = -((uVar19 >> 3) - 0x86);
  uVar13 = param_1 & 0xfffffffffffff | 0x10000000000000;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = *(ulonglong *)(&DAT_18057e850 + lVar17);
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar13;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = SUB168(auVar2 * auVar5,8);
  uVar9 = SUB168(auVar2 * auVar5,0);
  auVar3._8_8_ = 0;
  auVar3._0_8_ = *(ulonglong *)(&UNK_18057e858 + lVar17);
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar13;
  uVar19 = uVar19 & 7;
  auVar8 = auVar3 * auVar6 + auVar8;
  uVar10 = auVar8._0_8_;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = *(ulonglong *)(&UNK_18057e860 + lVar17);
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uVar13;
  uVar18 = auVar8._8_8_ + SUB168(auVar4 * auVar7,0);
  uVar16 = 0;
  bVar12 = (byte)(0x36 - uVar19) & 0x3f;
  uVar13 = uVar18 >> bVar12;
  bVar1 = (bool)(((0x36 - uVar19 & 0x3f) != 0) * ((uVar18 >> bVar12 - 1 & 1) != 0));
  if (bVar1) {
    uVar18 = ~uVar18;
    uVar10 = ~uVar10;
    uVar9 = ~uVar9;
    uVar16 = 0x8000000000000000;
  }
  *param_3 = (int)uVar13 + (uint)bVar1 & 3;
  sVar11 = (char)uVar19 + 10;
  uVar13 = (uVar18 << sVar11) >> sVar11;
  lVar14 = uVar19 - 0x36;
  lVar17 = 0x3f;
  if (uVar13 != 0) {
    for (; uVar13 >> lVar17 == 0; lVar17 = lVar17 + -1) {
    }
  }
  uVar18 = uVar10;
  if (uVar13 == 0) {
    lVar17 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    lVar14 = uVar19 - 0x76;
    uVar18 = uVar9;
    uVar13 = uVar10;
  }
  lVar15 = lVar17 + -0x34;
  if (lVar15 < 0) {
    bVar12 = -(byte)lVar15;
    uVar13 = uVar13 << (bVar12 & 0x3f) | uVar18 >> (-(bVar12 - 0x40) & 0x3f);
  }
  else if (lVar15 != 0) {
    uVar13 = uVar13 >> ((byte)lVar15 & 0x3f);
  }
  *param_2 = (double)(uVar13 & 0xffefffffffffffff | uVar16 | lVar14 + lVar17 + 0x3ff << 0x34) *
             _DAT_18057e840;
  return;
}



/* ===== 1805309cc FUN_1805309cc ===== */

undefined4 FUN_1805309cc(void)

{
  return DAT_180c9ff50;
}



/* ===== 1805309d4 __acrt_stdio_parse_mode<char> ===== */

/* Library Function - Single Match
    struct __acrt_stdio_stream_mode __cdecl __acrt_stdio_parse_mode<char>(char const * __ptr64
   const)
   
   Library: Visual Studio 2019 Release */

char * __cdecl __acrt_stdio_parse_mode<char>(char *param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  char *in_RDX;
  longlong lVar10;
  char *pcVar11;
  char *pcVar12;
  
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
  *(undefined4 *)(param_1 + 4) = DAT_180c9ffdc;
  cVar6 = *in_RDX;
  while (cVar6 == ' ') {
    in_RDX = in_RDX + 1;
    cVar6 = *in_RDX;
  }
  if (cVar6 == 'a') {
    param_1[0] = '\t';
    param_1[1] = '\x01';
    param_1[2] = '\0';
    param_1[3] = '\0';
LAB_180530a34:
    param_1[4] = '\x02';
    param_1[5] = '\0';
    param_1[6] = '\0';
    param_1[7] = '\0';
  }
  else {
    if (cVar6 != 'r') {
      if (cVar6 != 'w') goto LAB_180530c72;
      param_1[0] = '\x01';
      param_1[1] = '\x03';
      param_1[2] = '\0';
      param_1[3] = '\0';
      goto LAB_180530a34;
    }
    param_1[4] = '\x01';
    param_1[5] = '\0';
    param_1[6] = '\0';
    param_1[7] = '\0';
  }
  pcVar12 = in_RDX + 1;
  bVar4 = false;
  bVar3 = false;
  bVar2 = false;
  bVar5 = false;
  bVar1 = true;
LAB_180530a48:
  if (*pcVar12 == '\0') goto LAB_180530b97;
  cVar6 = *pcVar12;
  if (cVar6 < 'T') {
    if (cVar6 == 'S') {
      if (bVar2) goto LAB_180530b79;
      *(uint *)param_1 = *(uint *)param_1 | 0x20;
LAB_180530afa:
      bVar2 = true;
      bVar1 = true;
      goto LAB_180530b85;
    }
    if (cVar6 == ' ') goto LAB_180530b85;
    if (cVar6 == '+') {
      if (!bVar3) {
        bVar3 = true;
        if ((*(uint *)param_1 & 2) == 0) {
          bVar1 = true;
          *(uint *)param_1 = *(uint *)param_1 & 0xfffffffe | 2;
          *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffc | 4;
          goto LAB_180530b85;
        }
      }
    }
    else if (cVar6 == ',') {
      bVar5 = true;
    }
    else {
      if (cVar6 != 'D') {
        if (cVar6 == 'N') {
          *(uint *)param_1 = *(uint *)param_1 | 0x80;
LAB_180530b83:
          bVar1 = true;
          goto LAB_180530b85;
        }
        if (cVar6 == 'R') {
          if (!bVar2) {
            *(uint *)param_1 = *(uint *)param_1 | 0x10;
            goto LAB_180530afa;
          }
          goto LAB_180530b79;
        }
        goto LAB_180530c72;
      }
      if ((*(uint *)param_1 & 0x40) == 0) {
        uVar7 = *(uint *)param_1 | 0x40;
        goto LAB_180530b81;
      }
    }
  }
  else if (cVar6 == 'T') {
    if ((*(uint *)param_1 >> 0xc & 1) == 0) {
      uVar7 = *(uint *)param_1 | 0x1000;
      goto LAB_180530b81;
    }
  }
  else if (cVar6 == 'b') {
    if ((*(uint *)param_1 & 0xc000) == 0) {
      uVar7 = *(uint *)param_1 | 0x8000;
      goto LAB_180530b81;
    }
  }
  else if (cVar6 == 'c') {
    if (!bVar4) {
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x800;
LAB_180530b5a:
      bVar4 = true;
      bVar1 = true;
      goto LAB_180530b85;
    }
  }
  else if (cVar6 == 'n') {
    if (!bVar4) {
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffff7ff;
      goto LAB_180530b5a;
    }
  }
  else if (cVar6 == 't') {
    if ((*(uint *)param_1 & 0xc000) == 0) {
      uVar7 = *(uint *)param_1 | 0x4000;
      goto LAB_180530b81;
    }
  }
  else {
    if (cVar6 != 'x') goto LAB_180530c72;
    if ((*(uint *)param_1 >> 9 & 1) != 0) {
      uVar7 = *(uint *)param_1 | 0x400;
LAB_180530b81:
      *(uint *)param_1 = uVar7;
      goto LAB_180530b83;
    }
  }
LAB_180530b79:
  bVar1 = false;
LAB_180530b85:
  pcVar12 = pcVar12 + bVar1;
  if (!bVar1) goto LAB_180530b97;
  goto LAB_180530a48;
LAB_180530b97:
  pcVar11 = pcVar12 + 1;
  if (!bVar5) {
    pcVar11 = pcVar12;
  }
  for (; *pcVar11 == ' '; pcVar11 = pcVar11 + 1) {
  }
  if (bVar5) {
    iVar8 = strncmp(pcVar11,"ccs",3);
    if (iVar8 != 0) goto LAB_180530c72;
    for (pcVar11 = pcVar11 + 3; *pcVar11 == ' '; pcVar11 = pcVar11 + 1) {
    }
    if (*pcVar11 != '=') goto LAB_180530c72;
    do {
      pcVar11 = pcVar11 + 1;
    } while (*pcVar11 == ' ');
    lVar10 = 5;
    iVar8 = FUN_18053c170(pcVar11,"UTF-8",5);
    if (iVar8 == 0) {
      *(uint *)param_1 = *(uint *)param_1 | 0x40000;
    }
    else {
      lVar10 = 8;
      iVar8 = FUN_18053c170(pcVar11,"UTF-16LEUNICODE",8);
      if (iVar8 == 0) {
        *(uint *)param_1 = *(uint *)param_1 | 0x20000;
      }
      else {
        lVar10 = 7;
        iVar8 = FUN_18053c170(pcVar11,"UNICODE",7);
        if (iVar8 != 0) goto LAB_180530c72;
        *(uint *)param_1 = *(uint *)param_1 | 0x10000;
      }
    }
    for (pcVar11 = pcVar11 + lVar10; cVar6 = *pcVar11, cVar6 == ' '; pcVar11 = pcVar11 + 1) {
    }
  }
  else {
    cVar6 = *pcVar11;
  }
  if (cVar6 == '\0') {
    param_1[8] = '\x01';
    return param_1;
  }
LAB_180530c72:
  puVar9 = (undefined4 *)FUN_18051bfb0();
  *puVar9 = 0x16;
  FUN_180527740();
  return param_1;
}



/* ===== 180530c98 __acrt_stdio_parse_mode<wchar_t> ===== */

/* Library Function - Single Match
    struct __acrt_stdio_stream_mode __cdecl __acrt_stdio_parse_mode<wchar_t>(wchar_t const * __ptr64
   const)
   
   Library: Visual Studio 2019 Release */

wchar_t * __cdecl __acrt_stdio_parse_mode<wchar_t>(wchar_t *param_1)

{
  wchar_t wVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  short sVar7;
  uint uVar8;
  int iVar9;
  undefined4 *puVar10;
  wchar_t *pwVar11;
  short *in_RDX;
  longlong lVar12;
  wchar_t *pwVar13;
  
  param_1[0] = L'\0';
  param_1[1] = L'\0';
  param_1[2] = L'\0';
  param_1[3] = L'\0';
  param_1[4] = L'\0';
  param_1[5] = L'\0';
  *(undefined4 *)(param_1 + 2) = DAT_180c9ffdc;
  sVar7 = *in_RDX;
  while (sVar7 == 0x20) {
    in_RDX = in_RDX + 1;
    sVar7 = *in_RDX;
  }
  if (sVar7 == 0x61) {
    param_1[0] = L'ĉ';
    param_1[1] = L'\0';
LAB_180530d0e:
    param_1[2] = L'\x02';
    param_1[3] = L'\0';
  }
  else {
    if (sVar7 != 0x72) {
      if (sVar7 != 0x77) goto LAB_180530f6c;
      param_1[0] = L'́';
      param_1[1] = L'\0';
      goto LAB_180530d0e;
    }
    param_1[2] = L'\x01';
    param_1[3] = L'\0';
  }
  pwVar13 = in_RDX + 1;
  bVar5 = true;
  bVar4 = false;
  bVar3 = false;
  bVar2 = false;
  bVar6 = false;
  lVar12 = 10;
LAB_180530d2c:
  if (*pwVar13 == L'\0') goto LAB_180530e7e;
  wVar1 = *pwVar13;
  if ((ushort)wVar1 < 0x54) {
    if (wVar1 == L'S') {
      if (bVar2) goto LAB_180530e5c;
      *(uint *)param_1 = *(uint *)param_1 | 0x20;
LAB_180530ddd:
      bVar2 = true;
      bVar5 = true;
      goto LAB_180530e69;
    }
    if (wVar1 == L' ') goto LAB_180530e69;
    if (wVar1 == L'+') {
      if (!bVar3) {
        bVar3 = true;
        if ((*(uint *)param_1 & 2) == 0) {
          bVar5 = true;
          *(uint *)param_1 = *(uint *)param_1 & 0xfffffffe | 2;
          *(uint *)(param_1 + 2) = *(uint *)(param_1 + 2) & 0xfffffffc | 4;
          goto LAB_180530e69;
        }
      }
    }
    else if (wVar1 == L',') {
      bVar6 = true;
    }
    else {
      if (wVar1 == L'D') {
        if ((*(uint *)param_1 & 0x40) == 0) {
          uVar8 = *(uint *)param_1 | 0x40;
          goto LAB_180530e65;
        }
        goto LAB_180530e5c;
      }
      if (wVar1 == L'N') {
        *(uint *)param_1 = *(uint *)param_1 | 0x80;
        goto LAB_180530e67;
      }
      if (wVar1 != L'R') goto LAB_180530f6c;
      if (!bVar2) {
        *(uint *)param_1 = *(uint *)param_1 | 0x10;
        goto LAB_180530ddd;
      }
    }
  }
  else if (wVar1 == L'T') {
    if ((*(uint *)param_1 >> 0xc & 1) == 0) {
      uVar8 = *(uint *)param_1 | 0x1000;
      goto LAB_180530e65;
    }
  }
  else if (wVar1 == L'b') {
    if ((*(uint *)param_1 & 0xc000) == 0) {
      uVar8 = *(uint *)param_1 | 0x8000;
      goto LAB_180530e65;
    }
  }
  else if (wVar1 == L'c') {
    if (!bVar4) {
      *(uint *)(param_1 + 2) = *(uint *)(param_1 + 2) | 0x800;
LAB_180530e3d:
      bVar4 = true;
      bVar5 = true;
      goto LAB_180530e69;
    }
  }
  else if (wVar1 == L'n') {
    if (!bVar4) {
      *(uint *)(param_1 + 2) = *(uint *)(param_1 + 2) & 0xfffff7ff;
      goto LAB_180530e3d;
    }
  }
  else if (wVar1 == L't') {
    if ((*(uint *)param_1 & 0xc000) == 0) {
      uVar8 = *(uint *)param_1 | 0x4000;
      goto LAB_180530e65;
    }
  }
  else {
    if (wVar1 != L'x') goto LAB_180530f6c;
    if ((*(uint *)param_1 >> 9 & 1) != 0) {
      uVar8 = *(uint *)param_1 | 0x400;
LAB_180530e65:
      *(uint *)param_1 = uVar8;
LAB_180530e67:
      bVar5 = true;
      goto LAB_180530e69;
    }
  }
LAB_180530e5c:
  bVar5 = false;
LAB_180530e69:
  pwVar13 = (wchar_t *)((longlong)pwVar13 + (ulonglong)(-(uint)bVar5 & 2));
  if (!bVar5) goto LAB_180530e7e;
  goto LAB_180530d2c;
LAB_180530e7e:
  pwVar11 = pwVar13 + 1;
  if (!bVar6) {
    pwVar11 = pwVar13;
  }
  for (; *pwVar11 == L' '; pwVar11 = pwVar11 + 1) {
  }
  if (bVar6) {
    iVar9 = wcsncmp(pwVar11,L"ccs",3);
    if (iVar9 != 0) goto LAB_180530f6c;
    for (pwVar11 = pwVar11 + 3; *pwVar11 == L' '; pwVar11 = pwVar11 + 1) {
    }
    if (*pwVar11 != L'=') goto LAB_180530f6c;
    do {
      pwVar11 = pwVar11 + 1;
    } while (*pwVar11 == L' ');
    iVar9 = FUN_18053bf20(pwVar11,L"UTF-8",5);
    if (iVar9 == 0) {
      *(uint *)param_1 = *(uint *)param_1 | 0x40000;
    }
    else {
      iVar9 = FUN_18053bf20(pwVar11,L"UTF-16LEUNICODE",8);
      if (iVar9 == 0) {
        *(uint *)param_1 = *(uint *)param_1 | 0x20000;
        lVar12 = 0x10;
      }
      else {
        iVar9 = FUN_18053bf20(pwVar11,L"UNICODE",7);
        if (iVar9 != 0) goto LAB_180530f6c;
        *(uint *)param_1 = *(uint *)param_1 | 0x10000;
        lVar12 = 0xe;
      }
    }
    for (pwVar11 = (wchar_t *)((longlong)pwVar11 + lVar12); wVar1 = *pwVar11, wVar1 == L' ';
        pwVar11 = pwVar11 + 1) {
    }
  }
  else {
    wVar1 = *pwVar11;
  }
  if (wVar1 == L'\0') {
    *(undefined1 *)(param_1 + 4) = 1;
    return param_1;
  }
LAB_180530f6c:
  puVar10 = (undefined4 *)FUN_18051bfb0();
  *puVar10 = 0x16;
  FUN_180527740();
  return param_1;
}



/* ===== 180530f9c FUN_180530f9c ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_180530f9c(char *param_1,undefined8 param_2,int param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  errno_t eVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int local_res18 [2];
  int local_28;
  uint uStack_24;
  char local_18 [16];
  
  puVar3 = (undefined8 *)__acrt_stdio_parse_mode<char>(local_18);
  uVar1 = *puVar3;
  puVar4 = (undefined8 *)0x0;
  if (*(char *)(puVar3 + 1) != '\0') {
    local_28 = (int)uVar1;
    local_res18[0] = 0;
    eVar2 = FID_conflict__sopen_s(local_res18,param_1,local_28,param_3,0x180);
    if (eVar2 == 0) {
      _DAT_180c9f558 = _DAT_180c9f558 + 1;
      uStack_24 = (uint)((ulonglong)uVar1 >> 0x20);
      LOCK();
      *(uint *)((longlong)param_4 + 0x14) = *(uint *)((longlong)param_4 + 0x14) | uStack_24;
      UNLOCK();
      *(undefined4 *)(param_4 + 2) = 0;
      param_4[5] = 0;
      param_4[1] = 0;
      *param_4 = 0;
      *(int *)(param_4 + 3) = local_res18[0];
      puVar4 = param_4;
    }
  }
  return puVar4;
}



/* ===== 180531038 FUN_180531038 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_180531038(char *param_1,undefined8 param_2,int param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  errno_t eVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int local_res18 [2];
  int local_28;
  uint uStack_24;
  wchar_t local_18 [8];
  
  puVar3 = (undefined8 *)__acrt_stdio_parse_mode<wchar_t>(local_18);
  uVar1 = *puVar3;
  puVar4 = (undefined8 *)0x0;
  if (*(char *)(puVar3 + 1) != '\0') {
    local_28 = (int)uVar1;
    local_res18[0] = 0;
    eVar2 = FID_conflict__sopen_s(local_res18,param_1,local_28,param_3,0x180);
    if (eVar2 == 0) {
      _DAT_180c9f558 = _DAT_180c9f558 + 1;
      uStack_24 = (uint)((ulonglong)uVar1 >> 0x20);
      LOCK();
      *(uint *)((longlong)param_4 + 0x14) = *(uint *)((longlong)param_4 + 0x14) | uStack_24;
      UNLOCK();
      *(undefined4 *)(param_4 + 2) = 0;
      param_4[5] = 0;
      param_4[1] = 0;
      *param_4 = 0;
      *(int *)(param_4 + 3) = local_res18[0];
      puVar4 = param_4;
    }
  }
  return puVar4;
}



/* ===== 1805310d4 __acrt_LCMapStringW ===== */

/* Library Function - Single Match
    __acrt_LCMapStringW
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_LCMapStringW(undefined8 param_1,undefined4 param_2,undefined8 param_3,int param_4,
                        undefined8 param_5,undefined4 param_6)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_4;
  if (0 < param_4) {
    iVar1 = FUN_180512dc0(param_3,(longlong)param_4);
    iVar2 = iVar1 + 1;
    if (param_4 <= iVar1) {
      iVar2 = iVar1;
    }
  }
  FUN_18052cb98(param_1,param_2,param_3,iVar2,param_5,param_6,0,0,0);
  return;
}



/* ===== 180531160 FUN_180531160 ===== */

uint FUN_180531160(uint *param_1,int param_2)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar5 = *param_1;
  uVar2 = (ushort)(uVar5 >> 0x17) & 0xff;
  if (uVar2 == 0xff) {
    return (uint)(ushort)(((uVar5 & 0x7fffff) != 0) + 1);
  }
  if (uVar2 == 0) {
    if ((uVar5 & 0x7fffff) == 0) {
      return 0;
    }
    uVar2 = FUN_18053cfe0();
    uVar5 = *param_1;
  }
  iVar3 = (int)(short)uVar2;
  if ((0 < param_2) && (0xff - iVar3 <= param_2)) {
    *param_1 = uVar5 & 0xff800000 | 0x7f800000;
    return 1;
  }
  if (-iVar3 < param_2) {
    *param_1 = (iVar3 + param_2) * 0x800000 | uVar5 & 0x807fffff;
    return 0xffffffff;
  }
  uVar4 = uVar5 & 0x80000000;
  iVar3 = param_2 + -1 + iVar3;
  if ((iVar3 < -0x18) || (-1 < iVar3)) {
    *param_1 = uVar4;
    return 0;
  }
  uVar5 = uVar5 & 0x7fffff | 0x800000;
  bVar1 = (byte)-(short)iVar3;
  uVar7 = uVar5 << (0x20 - bVar1 & 0x1f);
  uVar5 = uVar5 >> (bVar1 & 0x1f);
  uVar6 = uVar5 | uVar4;
  if ((0x80000000 < uVar7) || ((uVar7 == 0x80000000 && ((uVar5 & 1) != 0)))) {
    uVar6 = uVar6 + 1;
  }
  *param_1 = uVar6;
  return CONCAT22((short)-(short)iVar3 >> 0xf,-(ushort)(uVar6 != uVar4));
}



/* ===== 1805312b0 FUN_1805312b0 ===== */

int FUN_1805312b0(short *param_1,uint *param_2)

{
  ushort uVar1;
  uint uVar2;
  
  uVar2 = *param_2;
  uVar1 = (ushort)(uVar2 >> 0x17) & 0xff;
  if (uVar1 == 0xff) {
    *param_1 = 0;
    return ((uVar2 & 0x7fffff) != 0) + 1;
  }
  if (uVar1 == 0) {
    if ((uVar2 & 0x7fffff) == 0) {
      *param_1 = 0;
      return 0;
    }
    uVar1 = FUN_18053cfe0(param_2);
    uVar2 = *param_2;
  }
  *param_2 = uVar2 & 0xbf7fffff | 0x3f000000;
  *param_1 = uVar1 - 0x7e;
  return -1;
}



/* ===== 180531370 FUN_180531370 ===== */

ulonglong FUN_180531370(ulonglong param_1)

{
  short sVar1;
  float *pfVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  float fVar11;
  undefined1 auVar12 [64];
  
  sVar1 = FUN_1805266e0();
  if (sVar1 == 0) {
    return (ulonglong)(uint)DAT_1808ac34c;
  }
  fVar7 = (float)param_1;
  if (sVar1 == 1) {
    auVar10 = vpcmpeqd_avx(ZEXT416((uint)fVar7 & 0x80000000),SUB6416(ZEXT464(0),0));
    auVar10 = vblendvps_avx(ZEXT416(DAT_1808ac540),ZEXT816(0),auVar10);
    return auVar10._0_8_;
  }
  if (sVar1 == 2) {
    return param_1;
  }
  if (fVar7 < DAT_1805787dc) {
    fVar7 = (float)FUN_180531890(param_1);
    return (ulonglong)(uint)(DAT_1808ac34c - fVar7);
  }
  if (DAT_1805787f8 <= fVar7) {
    uVar4 = 0;
    pfVar2 = (float *)&DAT_180578660;
    do {
      if (fVar7 < *pfVar2) {
        lVar3 = (longlong)(int)uVar4;
        uVar4 = *(uint *)(&DAT_180578670 + lVar3 * 0x28);
        pfVar2 = (float *)(&PTR_DAT_180578668)[lVar3 * 5];
        fVar9 = DAT_1808ac34c / fVar7 - *(float *)(&DAT_180578664 + lVar3 * 0x28);
        iVar5 = uVar4 - 1;
        auVar12 = ZEXT464((uint)*pfVar2);
        fVar8 = DAT_1808ac34c;
        if (-1 < iVar5) {
          if (3 < (int)uVar4) {
            uVar6 = (ulonglong)(uVar4 >> 2);
            iVar5 = iVar5 + (uVar4 >> 2) * -4;
            do {
              fVar8 = fVar9 * (fVar9 * (auVar12._0_4_ * fVar9 + pfVar2[1]) + pfVar2[2]) + pfVar2[3];
              auVar12 = ZEXT464((uint)(fVar9 * fVar8 + pfVar2[4]));
              pfVar2 = pfVar2 + 4;
              uVar6 = uVar6 - 1;
            } while (uVar6 != 0);
          }
          for (; -1 < iVar5; iVar5 = iVar5 + -1) {
            pfVar2 = pfVar2 + 1;
            auVar12._0_4_ = fVar9 * auVar12._0_4_ + *pfVar2;
            auVar12 = ZEXT1664(auVar12._0_16_);
          }
        }
        uVar4 = *(uint *)(&DAT_180578680 + lVar3 * 0x28);
        pfVar2 = (float *)(&PTR_DAT_180578678)[lVar3 * 5];
        iVar5 = uVar4 - 1;
        fVar11 = *pfVar2;
        if (-1 < iVar5) {
          if (3 < (int)uVar4) {
            uVar6 = (ulonglong)(uVar4 >> 2);
            iVar5 = iVar5 + (uVar4 >> 2) * -4;
            do {
              fVar8 = fVar9 * (fVar9 * (fVar11 * fVar9 + pfVar2[1]) + pfVar2[2]) + pfVar2[3];
              fVar11 = fVar9 * fVar8 + pfVar2[4];
              pfVar2 = pfVar2 + 4;
              uVar6 = uVar6 - 1;
            } while (uVar6 != 0);
          }
          for (; -1 < iVar5; iVar5 = iVar5 + -1) {
            pfVar2 = pfVar2 + 1;
            fVar11 = fVar9 * fVar11 + *pfVar2;
          }
        }
        FUN_180526660(fVar8,8);
        fVar9 = (float)FUN_18051ab90((fVar7 - (float)param_1) * (fVar7 + (float)param_1));
        auVar10._0_4_ = auVar12._0_4_ / fVar11;
        auVar10._4_12_ = auVar12._4_12_;
        fVar9 = fVar9 * auVar10._0_4_;
        fVar7 = (float)FUN_18051ab90((float)((uint)fVar7 ^ DAT_1808adec0) * fVar7,auVar10._0_8_);
        return (ulonglong)(uint)(fVar9 * fVar7);
      }
      uVar4 = uVar4 + 1;
      pfVar2 = pfVar2 + 10;
    } while (uVar4 < 8);
    FUN_180526a50(0x10);
    return 0;
  }
  if (fVar7 < DAT_1808ac34c) {
    fVar7 = fVar7 - DAT_1808ac27c;
    return (ulonglong)
           (uint)((fVar7 * (fVar7 * (fVar7 * (fVar7 * DAT_1805787a4 + DAT_18057e94c) + DAT_1805787d4
                                    ) + DAT_18057e954) + DAT_1805787d0) /
                 (fVar7 * (fVar7 * (fVar7 * (fVar7 * DAT_1805787ac + DAT_1805787b0) + DAT_1805787d8)
                          + DAT_1805787cc) + DAT_1805787ec));
  }
  fVar7 = fVar7 - DAT_1805787f4;
  return (ulonglong)
         (uint)((fVar7 * (fVar7 * (fVar7 * (fVar7 * DAT_1805787a0 + DAT_18057e948) + DAT_1805787c8)
                         + DAT_18057e950) + DAT_1805787b4) /
               (fVar7 * (fVar7 * (fVar7 * (fVar7 * DAT_1805787a8 + DAT_1805787c0) + DAT_1805787e0) +
                        DAT_1805787e8) + DAT_1805787f0));
}



/* ===== 1805316e0 FUN_1805316e0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_1805316e0(float param_1)

{
  short sVar1;
  float fVar2;
  float fVar3;
  
  sVar1 = FUN_1805266e0();
  if (sVar1 != 0) {
    if (sVar1 == 1) {
      if ((int)param_1 < 0) {
        return DAT_1808acda0;
      }
      return DAT_1808ac34c;
    }
    if (sVar1 != 2) {
      fVar3 = (float)((uint)param_1 & _DAT_1808ade90);
      if (fVar3 < DAT_180919be4) {
        fVar3 = param_1 * param_1;
        return ((((fVar3 * DAT_18057e95c + DAT_18057e968) * fVar3 + DAT_18057e970) * fVar3 +
                DAT_18057e988) /
               (((fVar3 * DAT_18057e964 + DAT_18057e96c) * fVar3 + DAT_18057e978) * fVar3 +
               DAT_1808ac34c)) * param_1;
      }
      if (DAT_180919be0 <= fVar3) {
        fVar3 = DAT_1808ac34c;
      }
      else {
        fVar2 = (float)FUN_18051ab90((float)((uint)fVar3 ^ DAT_1808adec0) * fVar3);
        fVar3 = DAT_1808ac34c -
                fVar2 * ((((DAT_18057e960 - fVar3 * _DAT_18057e958) * fVar3 + DAT_18057e974) * fVar3
                         + DAT_18057e980) /
                        ((fVar3 * DAT_18057e97c + DAT_18057e98c) * fVar3 + DAT_18057e984));
      }
      if (param_1 < 0.0) {
        fVar3 = (float)((uint)fVar3 ^ DAT_1808adec0);
      }
      return fVar3;
    }
  }
  return param_1;
}



/* ===== 180531890 FUN_180531890 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_180531890(void)

{
  undefined1 auVar1 [16];
  short sVar2;
  ulonglong uVar3;
  undefined1 in_ZMM0 [64];
  undefined1 extraout_var [56];
  undefined1 auVar4 [64];
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [64];
  
  if (((byte)DAT_180c9fd94 & 3) != 3) {
    uVar3 = FUN_1805316e0();
    return uVar3;
  }
  auVar8 = ZEXT1664(in_ZMM0._0_16_);
  sVar2 = FUN_1805266e0();
  if (sVar2 != 0) {
    fVar5 = auVar8._0_4_;
    if (sVar2 == 1) {
      auVar1 = vpcmpeqd_avx(ZEXT416((uint)fVar5 & 0x80000000),SUB6416(ZEXT464(0),0));
      auVar1 = vblendvps_avx(ZEXT416(DAT_1808acda0),ZEXT416((uint)DAT_1808ac34c),auVar1);
      return auVar1._0_8_;
    }
    if (sVar2 != 2) {
      fVar6 = (float)((uint)fVar5 & _DAT_1808ade90);
      if (fVar6 < DAT_180919be4) {
        fVar6 = fVar5 * fVar5;
        return (ulonglong)
               (uint)(((fVar6 * (fVar6 * (fVar6 * DAT_18057e95c + DAT_18057e968) + DAT_18057e970) +
                       DAT_18057e988) /
                      (fVar6 * (fVar6 * (fVar6 * DAT_18057e964 + DAT_18057e96c) + DAT_18057e978) +
                      DAT_1808ac34c)) * fVar5);
      }
      if (DAT_180919be0 <= fVar6) {
        uVar3 = (ulonglong)(uint)DAT_1808ac34c;
      }
      else {
        fVar5 = fVar6 * (fVar6 * (fVar6 * DAT_18058a4a4 + DAT_18057e960) + DAT_18057e974) +
                DAT_18057e980;
        fVar7 = fVar5 / (fVar6 * (fVar6 * DAT_18057e97c + DAT_18057e98c) + DAT_18057e984);
        auVar4._0_8_ = FUN_18051ab90((float)((uint)fVar6 ^ DAT_1808adec0) * fVar6,fVar5);
        auVar4._8_56_ = extraout_var;
        auVar1._4_12_ = auVar4._4_12_;
        auVar1._0_4_ = -(fVar7 * (float)auVar4._0_8_) + DAT_1808ac34c;
        uVar3 = auVar1._0_8_;
      }
      if (auVar8._0_4_ < 0.0) {
        return CONCAT44((uint)(uVar3 >> 0x20) ^ _UNK_1808adec4,(uint)uVar3 ^ DAT_1808adec0);
      }
      return uVar3;
    }
  }
  return auVar8._0_8_;
}



/* ===== 1805318b0 _realloc_base ===== */

/* Library Function - Single Match
    _realloc_base
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

LPVOID _realloc_base(LPVOID param_1,ulonglong param_2)

{
  int iVar1;
  LPVOID pvVar2;
  undefined4 *puVar3;
  
  if (param_1 == (LPVOID)0x0) {
    pvVar2 = (LPVOID)_malloc_base(param_2);
  }
  else {
    if (param_2 == 0) {
      FUN_1805277b0();
    }
    else {
      if (param_2 < 0xffffffffffffffe1) {
        do {
          pvVar2 = HeapReAlloc(DAT_180c9ffc8,0,param_1,param_2);
          if (pvVar2 != (LPVOID)0x0) {
            return pvVar2;
          }
          iVar1 = FUN_18053a330();
        } while ((iVar1 != 0) && (iVar1 = FUN_180523cb0(param_2), iVar1 != 0));
      }
      puVar3 = (undefined4 *)FUN_18051bfb0();
      *puVar3 = 0xc;
    }
    pvVar2 = (LPVOID)0x0;
  }
  return pvVar2;
}



/* ===== 18053192c FUN_18053192c ===== */

void FUN_18053192c(void)

{
  (*(code *)PTR__guard_check_icall_18056b840)();
  return;
}



/* ===== 180531950 FUN_180531950 ===== */

ulonglong FUN_180531950(ulonglong param_1)

{
  bool bVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  ulonglong uVar7;
  ulonglong uVar8;
  sbyte sVar9;
  byte bVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  
  uVar15 = (param_1 >> 0x34) - 0x3ff;
  lVar13 = -((uVar15 >> 3) - 0x86);
  uVar11 = param_1 & 0xfffffffffffff | 0x10000000000000;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = *(ulonglong *)(&DAT_18057eb70 + lVar13);
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar11;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = SUB168(auVar2 * auVar4,8);
  uVar7 = SUB168(auVar2 * auVar4,0);
  auVar3._8_8_ = 0;
  auVar3._0_8_ = *(ulonglong *)(&UNK_18057eb78 + lVar13);
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar11;
  uVar15 = uVar15 & 7;
  auVar6 = auVar3 * auVar5 + auVar6;
  uVar8 = auVar6._0_8_;
  uVar14 = auVar6._8_8_ + *(longlong *)(&UNK_18057eb80 + lVar13) * uVar11;
  uVar12 = 0x36 - uVar15;
  bVar10 = (byte)uVar12 & 0x3f;
  uVar11 = uVar14 >> bVar10;
  bVar1 = (bool)(((uVar12 & 0x3f) != 0) * ((uVar14 >> bVar10 - 1 & 1) != 0));
  if (bVar1) {
    uVar14 = ~uVar14;
    uVar8 = ~uVar8;
    uVar7 = ~uVar7;
  }
  sVar9 = (char)uVar15 + 10;
  uVar12 = (uVar14 << sVar9) >> sVar9;
  lVar13 = 0x3f;
  if (uVar12 != 0) {
    for (; uVar12 >> lVar13 == 0; lVar13 = lVar13 + -1) {
    }
  }
  uVar14 = uVar7;
  uVar15 = uVar8;
  if (uVar12 == 0) {
    uVar14 = 0;
    lVar13 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    uVar15 = uVar7;
    uVar12 = uVar8;
  }
  lVar13 = lVar13 + -0x34;
  bVar10 = (byte)lVar13;
  if (lVar13 < 0) {
    uVar15 = uVar15 << (-bVar10 & 0x3f) | uVar14 >> (-(-bVar10 - 0x40) & 0x3f);
  }
  else if (lVar13 != 0) {
    uVar15 = uVar15 >> (bVar10 & 0x3f) | uVar12 << (-(bVar10 - 0x40) & 0x3f);
  }
  lVar13 = 0x3f;
  if (uVar15 != 0) {
    for (; uVar15 >> lVar13 == 0; lVar13 = lVar13 + -1) {
    }
  }
  return uVar11 + bVar1 & 3;
}



/* ===== 180531b60 FUN_180531b60 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_180531b60(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  int iVar5;
  double dVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 in_ZMM0 [64];
  ulonglong uVar13;
  undefined1 auVar14 [16];
  undefined1 in_ZMM1 [64];
  double dVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  double dVar18;
  ulonglong uVar20;
  undefined1 auVar19 [64];
  undefined1 auVar21 [16];
  undefined1 auVar22 [64];
  
  uVar13 = in_ZMM1._0_8_;
  dVar11 = in_ZMM0._0_8_;
  uVar9 = in_ZMM0._4_4_ >> 0x14 & 0x7ff;
  uVar4 = in_ZMM1._4_4_ >> 0x14 & 0x7ff;
  iVar5 = uVar9 - uVar4;
  uVar8 = uVar13 & 0x7fffffffffffffff;
  dVar10 = ABS(dVar11);
  auVar14 = in_ZMM1._0_16_;
  auVar22 = ZEXT1664(auVar14);
  auVar12 = in_ZMM0._0_16_;
  auVar19 = ZEXT1664(auVar12);
  if (0x7ff0000000000000 < uVar8) {
    dVar10 = (double)FUN_18053be80(uVar13,param_2,0);
    return dVar10;
  }
  if (0x7ff0000000000000 < (ulonglong)dVar10) {
    dVar10 = (double)FUN_18053be80(dVar11,param_2,0);
    return dVar10;
  }
  if (dVar10 == 0.0) {
    if (-1 < (longlong)uVar13) {
      return dVar11;
    }
LAB_180531c20:
    FUN_18052f090(0x20);
    if ((longlong)dVar11 < 0) {
      dVar10 = DAT_180579940;
    }
    else {
      dVar10 = DAT_1808ac588;
    }
  }
  else {
    if (uVar8 == 0) {
      FUN_18052f090();
      auVar12 = auVar19._0_16_;
      auVar14 = auVar22._0_16_;
      if (-1 < (longlong)dVar11) goto LAB_180531c74;
    }
    else {
LAB_180531c74:
      if ((uVar4 < 0x3fd) && (uVar9 < 0x3fd)) {
        if ((uVar13 & 0x7ff0000000000000) == 0) {
          if ((longlong)uVar13 < 0) {
            dVar15 = (double)(uVar13 | 0x4010000000000000) + DAT_1808ac598;
          }
          else {
            dVar15 = (double)(uVar13 | 0x4010000000000000) + DAT_180579948;
          }
        }
        else {
          dVar15 = (double)(uVar13 + 0x4000000000000000);
        }
        if (((ulonglong)dVar11 & 0x7ff0000000000000) == 0) {
          if ((longlong)dVar11 < 0) {
            dVar6 = (double)((ulonglong)dVar11 | 0x4010000000000000) + DAT_1808ac598;
          }
          else {
            dVar6 = (double)((ulonglong)dVar11 | 0x4010000000000000) + DAT_180579948;
          }
        }
        else {
          dVar6 = (double)((longlong)dVar11 + 0x4000000000000000);
        }
        auVar12._8_8_ = 0;
        auVar12._0_8_ = (ulonglong)dVar6;
        auVar14._8_8_ = 0;
        auVar14._0_8_ = dVar15;
        iVar5 = ((uint)((ulonglong)dVar6 >> 0x34) & 0x7ff) -
                ((uint)((ulonglong)dVar15 >> 0x34) & 0x7ff);
      }
      if (iVar5 < 0x39) {
        dVar15 = auVar14._0_8_;
        dVar6 = auVar12._0_8_;
        uVar20 = auVar12._8_8_;
        if ((iVar5 < -0x1c) && (-1 < (longlong)uVar13)) {
          if (iVar5 < -0x432) {
            FUN_18052f090(0x20);
            if ((longlong)dVar11 < 0) {
              return DAT_18056eaf8;
            }
            return 0.0;
          }
          if (-0x3ff < iVar5) {
            return dVar6 / dVar15;
          }
          dVar15 = (dVar6 * 1.2676506002282294e+30) / dVar15;
          uVar4 = (uint)((ulonglong)ABS(dVar15) >> 0x20);
          uVar9 = uVar4 >> 0x14;
          uVar4 = uVar4 >> 0x14;
          if (uVar9 < 0x65) {
            if ((int)(0x65 - uVar9) < 0x37) {
              uVar8 = ((ulonglong)dVar15 & 0x1fffffffffffff | 0x10000000000000) >>
                      (100 - (ulonglong)uVar4 & 0x3f);
              uVar8 = (uVar8 >> 1) + (ulonglong)((uint)uVar8 & 1);
            }
            else {
              uVar8 = 0;
            }
          }
          else {
            uVar8 = (ulonglong)uVar4 - 100 << 0x34 | (ulonglong)dVar15 & 0xfffffffffffff;
          }
          dVar10 = (double)((ulonglong)dVar15 & 0x8000000000000000 | uVar8);
          if ((uVar8 & 0x7ff0000000000000) == 0) {
            FUN_18052f090(0x20);
            return dVar10;
          }
          return dVar10;
        }
        if ((-0x39 < iVar5) || (-1 < (longlong)uVar13)) {
          if ((dVar10 != INFINITY) || (uVar8 != 0x7ff0000000000000)) {
            auVar21 = auVar14;
            if ((longlong)uVar13 < 0) {
              auVar21._0_8_ = (ulonglong)dVar15 ^ DAT_1808adeb0;
              auVar21._8_8_ = auVar14._8_8_ ^ _UNK_1808adeb8;
            }
            if ((longlong)dVar11 < 0) {
              auVar12._0_8_ = (ulonglong)dVar6 ^ DAT_1808adeb0;
              auVar12._8_8_ = uVar20 ^ _UNK_1808adeb8;
            }
            bVar1 = auVar21._0_8_ < auVar12._0_8_;
            auVar16._0_8_ = -(ulonglong)!bVar1;
            auVar16._8_8_ = 0xffffffffffffffff;
            auVar14 = vblendvpd_avx(auVar21,auVar12,auVar16);
            auVar17._0_8_ = -(ulonglong)!bVar1;
            auVar17._8_8_ = 0xffffffffffffffff;
            auVar12 = vblendvpd_avx(auVar12,auVar21,auVar17);
            dVar15 = auVar12._0_8_;
            dVar6 = auVar14._0_8_;
            dVar10 = dVar6 / dVar15;
            if (dVar10 <= DAT_180578248) {
              dVar18 = 0.0;
              if (DAT_1805798e0 <= dVar10) {
                dVar2 = dVar10 * dVar10;
                dVar3 = (double)((ulonglong)dVar10 & 0xffffffff00000000);
                dVar10 = -(dVar2 * dVar10 *
                          (-(dVar2 * (-(dVar2 * (-(dVar2 * (-(dVar2 * DAT_1805798f8) + DAT_180579900
                                                           )) + DAT_180578250)) + DAT_180578258)) +
                          DAT_180578268)) +
                         (-(dVar15 * (dVar10 - dVar3)) +
                         -(dVar3 * (dVar15 - (double)((ulonglong)dVar15 & 0xffffffff00000000))) +
                         -((double)((ulonglong)dVar15 & 0xffffffff00000000) * dVar3) + dVar6) /
                         dVar15 + dVar10;
              }
            }
            else {
              uVar9 = (uint)(dVar10 * DAT_180578280 + DAT_1808ac4a8);
              uVar4 = uVar9 - 0x10;
              dVar18 = *(double *)(&DAT_18057ec10 + (ulonglong)uVar4 * 8);
              dVar10 = (double)uVar9 * DAT_1805798f0;
              iVar7 = 0x3ff - (auVar12._4_4_ >> 0x14 & 0x7ff);
              iVar5 = iVar7 / 2;
              dVar3 = (double)((longlong)iVar5 + 0x3ff << 0x34);
              dVar2 = (double)((longlong)(iVar7 - iVar5) + 0x3ff << 0x34);
              dVar15 = dVar15 * dVar3 * dVar2;
              dVar2 = dVar6 * dVar3 * dVar2;
              dVar10 = (-(dVar10 * (dVar15 - (double)((ulonglong)dVar15 & 0xfffffffff8000000))) +
                       -((double)((ulonglong)dVar15 & 0xfffffffff8000000) * dVar10) + dVar2) /
                       (dVar2 * dVar10 + dVar15);
              dVar10 = -(dVar10 * (-(dVar10 * dVar10 * DAT_180579908) + DAT_180578260) *
                                  dVar10 * dVar10) +
                       dVar10 + *(double *)(&DAT_18057f3a0 + (ulonglong)uVar4 * 8);
            }
            if (bVar1) {
              dVar18 = DAT_180578270 - dVar18;
              dVar10 = DAT_1805798d8 - dVar10;
            }
            if ((longlong)uVar13 < 0) {
              dVar18 = DAT_180579920 - dVar18;
              dVar10 = DAT_1805798e8 - dVar10;
            }
            if ((longlong)dVar11 < 0) {
              return (double)((ulonglong)(dVar18 + dVar10) ^ DAT_1808adeb0);
            }
            return dVar18 + dVar10;
          }
          FUN_18052f090(0x20);
          if (-1 < (longlong)uVar13) {
            if ((longlong)dVar11 < 0) {
              return DAT_180579928;
            }
            return DAT_180579910;
          }
          if ((longlong)dVar11 < 0) {
            return DAT_180579938;
          }
          return DAT_180579918;
        }
        goto LAB_180531c20;
      }
      FUN_18052f090(0x20);
      if (-1 < (longlong)dVar11) {
        return DAT_180578270;
      }
    }
    dVar10 = DAT_180579930;
  }
  return dVar10;
}



/* ===== 1805321a0 FUN_1805321a0 ===== */

undefined8 FUN_1805321a0(void)

{
  undefined1 in_XMM0 [16];
  undefined1 auVar1 [16];
  
  auVar1 = roundss(in_XMM0,in_XMM0,0xb);
  return auVar1._0_8_;
}



