/* Ghidra pseudocode; not original or buildable source. Input SHA-256: 5166d43e2ec15d1dad82823bbffc4508064ed0dac8720498ae165d3d0314ce6a */

/* ===== 180001000 FUN_180001000 ===== */


uint FUN_180001000(byte *param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  
  uVar2 = 0xffffffff;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    bVar1 = *param_1;
    param_1 = param_1 + 1;
    uVar2 = -((bVar1 ^ uVar2) & 1) & 0xedb88320 ^ (bVar1 ^ uVar2) >> 1;
    uVar2 = -(uVar2 & 1) & 0xedb88320 ^ uVar2 >> 1;
    uVar2 = -(uVar2 & 1) & 0xedb88320 ^ uVar2 >> 1;
    uVar2 = -(uVar2 & 1) & 0xedb88320 ^ uVar2 >> 1;
    uVar2 = -(uVar2 & 1) & 0xedb88320 ^ uVar2 >> 1;
    uVar2 = -(uVar2 & 1) & 0xedb88320 ^ uVar2 >> 1;
    uVar2 = -(uVar2 & 1) & 0xedb88320 ^ uVar2 >> 1;
    uVar2 = -(uVar2 & 1) & 0xedb88320 ^ uVar2 >> 1;
  }
  return ~uVar2;
}



/* ===== 1800010c0 get_steam_profile ===== */


ulonglong get_steam_profile(undefined8 *param_1,undefined8 *param_2,int *param_3)

{
  ulonglong uVar1;
  
                    /* 0x10c0  1  get_steam_profile */
  if (((param_1 == (undefined8 *)0x0) || (param_2 == (undefined8 *)0x0)) || (param_3 == (int *)0x0))
  {
    return 0;
  }
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_1800dbb80);
  if (DAT_1800dbb88 != 0) {
    *param_1 = &DAT_1800dba80;
    *param_2 = &DAT_180019ad0;
    *param_3 = DAT_1800dbb8c;
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_1800dbb80);
    return 3;
  }
  uVar1 = FUN_1800011b0(param_1,param_2,param_3);
  if ((int)uVar1 == 3) {
    DAT_1800dbb8c = *param_3;
    DAT_1800dbb88 = 1;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_1800dbb80);
  return uVar1 & 0xffffffff;
}



/* ===== 1800011b0 FUN_1800011b0 ===== */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1800011b0(undefined8 *param_1,undefined8 *param_2,int *param_3)

{
  uint uVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  HMODULE hModule;
  FARPROC pFVar5;
  FARPROC pFVar6;
  FARPROC pFVar7;
  FARPROC pFVar8;
  FARPROC pFVar9;
  FARPROC pFVar10;
  INT_PTR IVar11;
  INT_PTR IVar12;
  INT_PTR IVar13;
  LPCSTR lpString2;
  ulonglong uVar14;
  undefined8 uVar15;
  uint uVar16;
  int iVar17;
  byte *pbVar18;
  longlong lVar19;
  ulonglong uVar20;
  uint uVar21;
  uint uVar22;
  longlong lVar23;
  undefined *puVar24;
  uint uVar25;
  int iVar26;
  uint uVar27;
  uint local_res20 [2];
  uint local_68 [2];
  FARPROC local_60;
  FARPROC local_58;
  undefined8 local_50;
  undefined4 local_48;
  
  hModule = GetModuleHandleW(L"steam_api64.dll");
  if ((((hModule != (HMODULE)0x0) && (param_1 != (undefined8 *)0x0)) &&
      (param_2 != (undefined8 *)0x0)) && (param_3 != (int *)0x0)) {
    local_60 = GetProcAddress(hModule,"SteamAPI_SteamFriends_v018");
    pFVar5 = GetProcAddress(hModule,"SteamAPI_SteamUser_v023");
    pFVar6 = GetProcAddress(hModule,"SteamAPI_SteamUtils_v010");
    pFVar7 = GetProcAddress(hModule,"SteamAPI_ISteamFriends_GetPersonaName");
    pFVar8 = GetProcAddress(hModule,"SteamAPI_ISteamUser_GetSteamID");
    pFVar9 = GetProcAddress(hModule,"SteamAPI_ISteamFriends_GetMediumFriendAvatar");
    local_58 = pFVar9;
    pFVar10 = GetProcAddress(hModule,"SteamAPI_ISteamUtils_GetImageSize");
    local_50 = GetProcAddress(hModule,"SteamAPI_ISteamUtils_GetImageRGBA");
    if ((((local_60 != (FARPROC)0x0) && (pFVar5 != (FARPROC)0x0)) &&
        ((pFVar6 != (FARPROC)0x0 && ((pFVar7 != (FARPROC)0x0 && (pFVar8 != (FARPROC)0x0)))))) &&
       ((pFVar9 != (FARPROC)0x0 && ((pFVar10 != (FARPROC)0x0 && (local_50 != (FARPROC)0x0)))))) {
      IVar11 = (*local_60)();
      IVar12 = (*pFVar5)();
      IVar13 = (*pFVar6)();
      if (((IVar11 != 0) &&
          (((IVar12 != 0 && (IVar13 != 0)) &&
           (lpString2 = (LPCSTR)(*pFVar7)(IVar11), lpString2 != (LPCSTR)0x0)))) &&
         (*lpString2 != '\0')) {
        lstrcpynA(&DAT_1800dba80,lpString2,0x100);
        *param_1 = &DAT_1800dba80;
        *param_2 = 0;
        *param_3 = 0;
        IVar12 = (*pFVar8)(IVar12);
        uVar14 = (*local_58)(IVar11,IVar12);
        local_res20[0] = 0;
        local_68[0] = 0;
        if (((((int)uVar14 < 1) ||
             (IVar11 = (*pFVar10)(IVar13,uVar14 & 0xffffffff,local_res20,local_68), (int)IVar11 == 0
             )) || ((local_res20[0] == 0 || ((local_68[0] == 0 || (0x100 < local_res20[0])))))) ||
           ((0x100 < local_68[0] ||
            (IVar11 = (*local_50)(IVar13,uVar14 & 0xffffffff,&DAT_18005b980,
                                  (ulonglong)(local_68[0] * local_res20[0] * 4)),
            uVar27 = local_68[0], uVar4 = local_res20[0], (int)IVar11 == 0)))) {
          return 1;
        }
        uVar14 = (ulonglong)local_res20[0];
        uVar20 = (ulonglong)local_68[0];
        uVar21 = 0;
        uVar25 = local_res20[0] * 4;
        iVar26 = uVar25 + 1;
        if (local_68[0] != 0) {
          do {
            uVar22 = uVar21 * iVar26;
            if (0x400ff < uVar22) {
LAB_1800017e4:
              FUN_180001800();
              pcVar2 = (code *)swi(3);
              uVar15 = (*pcVar2)();
              return uVar15;
            }
            (&DAT_18009b980)[uVar22] = 0;
            FUN_18000d6a0((undefined8 *)(&DAT_18009b981 + uVar22),
                          (undefined8 *)(&DAT_18005b980 + uVar21 * uVar4 * 4),(ulonglong)uVar25);
            if (uVar4 != 0) {
              uVar3 = 0;
              do {
                lVar19 = (uVar3 * 2 | 1) - uVar14;
                lVar23 = (uVar21 * 2 | 1) - uVar20;
                if ((longlong)(uVar20 * uVar20 * uVar14 * uVar14) <
                    (longlong)
                    (uVar20 * uVar20 * lVar19 * lVar19 + uVar14 * uVar14 * lVar23 * lVar23)) {
                  uVar16 = uVar22 + (uVar3 + 1) * 4;
                  if (0x400ff < uVar16) goto LAB_1800017e4;
                  (&DAT_18009b980)[uVar16] = 0;
                }
                uVar3 = uVar3 + 1;
              } while (uVar3 < uVar4);
            }
            uVar21 = uVar21 + 1;
          } while (uVar21 < uVar27);
        }
        local_50._0_7_ = (uint7)(byte)uVar4 << 0x18;
        _DAT_180019ad0 = 0xa1a0a0d474e5089;
        local_50 = (FARPROC)CONCAT17((char)uVar27,(int7)local_50);
        uVar15 = local_50;
        local_50._3_5_ = SUB85(uVar15,3);
        local_50._0_3_ =
             CONCAT12((char)(uVar4 >> 8),CONCAT11((char)(uVar4 >> 0x10),(char)(uVar4 >> 0x18)));
        local_50._0_7_ =
             CONCAT16((char)(uVar27 >> 8),
                      CONCAT15((char)(uVar27 >> 0x10),
                               CONCAT14((char)(uVar27 >> 0x18),(undefined4)local_50)));
        local_50 = (FARPROC)CONCAT17((char)uVar27,(int7)local_50);
        local_48 = 0x608;
        _DAT_180019ae0 = local_50;
        uVar27 = iVar26 * uVar27;
        _DAT_180019ad8 = 0xd000000;
        _DAT_180019adc = 0x52444849;
        _DAT_180019ae8 = 0x608;
        DAT_180019aec = 0;
        uVar21 = FUN_180001000(&DAT_180019adc,0x11);
        DAT_180019af0 = (undefined1)uVar21;
        DAT_180019aed = (undefined1)(uVar21 >> 0x18);
        uVar4 = 0;
        _DAT_180019af9 = 0x178;
        uVar22 = 0;
        DAT_180019aee = (undefined1)(uVar21 >> 0x10);
        uVar25 = 1;
        uVar14 = 0x2b;
        DAT_180019aef = (undefined1)(uVar21 >> 8);
        if (uVar27 != 0) {
          do {
            uVar21 = uVar27 - uVar4;
            if (0xffff < uVar21) {
              uVar21 = 0xffff;
            }
            iVar26 = (int)uVar14;
            uVar3 = uVar21 + uVar4;
            (&DAT_180019ad0)[uVar14] = uVar3 == uVar27;
            (&DAT_180019ad0)[iVar26 + 1] = (char)uVar21;
            (&DAT_180019ad0)[iVar26 + 2] = (char)(uVar21 >> 8);
            (&DAT_180019ad0)[iVar26 + 3] = (char)(~uVar21 & 0xffff);
            (&DAT_180019ad0)[iVar26 + 4] = (char)((~uVar21 & 0xffff) >> 8);
            FUN_18000d6a0((undefined8 *)(&DAT_180019ad0 + (iVar26 + 5)),
                          (undefined8 *)(&DAT_18009b980 + uVar4),(ulonglong)uVar21);
            uVar16 = 0;
            if (uVar21 != 0) {
              do {
                uVar1 = uVar16 + uVar4;
                uVar16 = uVar16 + 1;
                uVar25 = (uVar25 + (byte)(&DAT_18009b980)[uVar1]) % 0xfff1;
                uVar22 = (uVar22 + uVar25) % 0xfff1;
              } while (uVar16 < uVar21);
            }
            uVar14 = (ulonglong)(iVar26 + 5 + uVar21);
            uVar4 = uVar3;
          } while (uVar3 < uVar27);
        }
        puVar24 = &DAT_180019ad0;
        iVar26 = (int)uVar14;
        (&DAT_180019ad0)[uVar14] = (char)(uVar22 >> 8);
        *(char *)(uVar14 + 0x180019ad1) = (char)uVar22;
        *(char *)(uVar14 + 0x180019ad2) = (char)(uVar25 >> 8);
        *(char *)(uVar14 + 0x180019ad3) = (char)uVar25;
        iVar17 = iVar26 + -0x25;
        DAT_180019af4 = (undefined1)iVar17;
        DAT_180019af1 = (undefined1)((uint)iVar17 >> 0x18);
        DAT_180019af2 = (undefined1)((uint)iVar17 >> 0x10);
        DAT_180019af3 = (undefined1)((uint)iVar17 >> 8);
        _DAT_180019af5 = 0x54414449;
        uVar4 = FUN_180001000(&DAT_180019af5,iVar26 + -0x21);
        uVar14 = (ulonglong)(iVar26 + 4);
        puVar24[uVar14] = (char)(uVar4 >> 0x18);
        puVar24[uVar14 + 1] = (char)(uVar4 >> 0x10);
        puVar24[uVar14 + 3] = (char)uVar4;
        puVar24[uVar14 + 2] = (char)(uVar4 >> 8);
        uVar14 = (ulonglong)(iVar26 + 8U);
        pbVar18 = &DAT_180019ad4 + uVar14;
        *(undefined4 *)(&DAT_180019ad0 + (iVar26 + 8U)) = 0;
        pbVar18[0] = 0x49;
        pbVar18[1] = 0x45;
        pbVar18[2] = 0x4e;
        pbVar18[3] = 0x44;
        uVar4 = FUN_180001000(pbVar18,4);
        *(char *)(uVar14 + 0x180019adb) = (char)uVar4;
        (&DAT_180019ad8)[uVar14] = (char)(uVar4 >> 0x18);
        *(char *)(uVar14 + 0x180019ad9) = (char)(uVar4 >> 0x10);
        *(char *)(uVar14 + 0x180019ada) = (char)(uVar4 >> 8);
        *param_2 = &DAT_180019ad0;
        *param_3 = iVar26 + 0x14;
        return 3;
      }
    }
  }
  return 0;
}



/* ===== 1800017f0 FUN_1800017f0 ===== */


void FUN_1800017f0(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x29);
  (*pcVar1)(2);
  return;
}



/* ===== 180001800 FUN_180001800 ===== */


void FUN_180001800(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x29);
  (*pcVar1)(8);
  return;
}



/* ===== 180001810 FUN_180001810 ===== */


ulonglong FUN_180001810(undefined8 param_1,int param_2,longlong param_3)

{
  byte bVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = FUN_180001980(param_3 != 0);
    return uVar2;
  }
  if (param_2 == 1) {
    uVar2 = FUN_180001870(param_1,param_3);
    return uVar2;
  }
  if (param_2 == 2) {
    bVar1 = FUN_180001de0();
    return (ulonglong)bVar1;
  }
  if (param_2 == 3) {
    bVar1 = FUN_180001e10();
    return (ulonglong)bVar1;
  }
  return 1;
}



/* ===== 180001870 FUN_180001870 ===== */


undefined8 FUN_180001870(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined *puVar6;
  
  uVar3 = FUN_180001ee0(0);
  if ((char)uVar3 != '\0') {
    uVar3 = FUN_180001cd0();
    bVar2 = true;
    if (DAT_1800dbbc0 != 0) {
      FUN_180002040(7);
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
    DAT_1800dbbc0 = 1;
    uVar4 = FUN_180001d60();
    if ((char)uVar4 != '\0') {
      FUN_180002050();
      FUN_180001c70();
      FUN_180001cb0();
      uVar4 = FUN_180004d54((undefined8 *)&DAT_18000f290,(undefined8 *)&DAT_18000f2b0);
      if ((int)uVar4 == 0) {
        uVar4 = FUN_180001d20();
        if ((char)uVar4 != '\0') {
          FUN_180004d1c((undefined8 *)&DAT_18000f280,(undefined8 *)&DAT_18000f288);
          DAT_1800dbbc0 = 2;
          bVar2 = false;
        }
      }
    }
    FUN_180001fc0((char)uVar3);
    if (!bVar2) {
      plVar5 = (longlong *)FUN_180002020();
      if (*plVar5 != 0) {
        puVar6 = FUN_180001f20((longlong)plVar5);
        if ((char)puVar6 != '\0') {
          (*(code *)PTR__guard_dispatch_icall_18000f258)(param_1,2,param_2);
        }
      }
      DAT_1800dbb90 = DAT_1800dbb90 + 1;
      return 1;
    }
  }
  return 0;
}



/* ===== 180001980 FUN_180001980 ===== */


ulonglong FUN_180001980(bool param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  
  if (DAT_1800dbb90 < 1) {
    return 0;
  }
  DAT_1800dbb90 = DAT_1800dbb90 + -1;
  uVar2 = FUN_180001cd0();
  if (DAT_1800dbbc0 == 2) {
    FUN_180001e80();
    FUN_180001c80();
    FUN_1800020a0();
    DAT_1800dbbc0 = 0;
    FUN_180001fc0((char)uVar2);
    uVar3 = FUN_180001ff0(param_1,'\0');
    FUN_180001ec0();
    return uVar3 & 0xff;
  }
  FUN_180002040(7);
  pcVar1 = (code *)swi(3);
  uVar3 = (*pcVar1)();
  return uVar3;
}



/* ===== 180001a20 FUN_180001a20 ===== */


ulonglong FUN_180001a20(undefined8 param_1,int param_2,longlong param_3)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  if ((param_2 == 0) && (DAT_1800dbb90 < 1)) {
    return 0;
  }
  if (param_2 - 1U < 2) {
    if (DAT_18000f430 == 0) {
      uVar2 = 1;
    }
    else {
      uVar1 = (*(code *)PTR__guard_dispatch_icall_18000f258)();
      uVar2 = (ulonglong)uVar1;
    }
    if ((int)uVar2 == 0) {
      return uVar2;
    }
    uVar2 = FUN_180001810(param_1,param_2,param_3);
    if ((int)uVar2 == 0) {
      return uVar2 & 0xffffffff;
    }
  }
  uVar2 = FUN_180001c60();
  uVar3 = uVar2 & 0xffffffff;
  if ((param_2 == 1) && ((int)uVar2 == 0)) {
    FUN_180001c60();
    FUN_180001980(param_3 != 0);
    if (DAT_18000f430 != 0) {
      (*(code *)PTR__guard_dispatch_icall_18000f258)(param_1,0,param_3);
    }
  }
  if ((param_2 == 0) || (param_2 == 3)) {
    uVar2 = FUN_180001810(param_1,param_2,param_3);
    uVar3 = uVar2 & 0xffffffff;
    if ((int)uVar2 != 0) {
      if (DAT_18000f430 == 0) {
        uVar3 = 1;
      }
      else {
        uVar1 = (*(code *)PTR__guard_dispatch_icall_18000f258)(param_1,param_2,param_3);
        uVar3 = (ulonglong)uVar1;
      }
    }
  }
  return uVar3;
}



/* ===== 180001b60 entry ===== */


void entry(undefined8 param_1,int param_2,longlong param_3)

{
  if (param_2 == 1) {
    FUN_180001ba0();
  }
  FUN_180001a20(param_1,param_2,param_3);
  return;
}



/* ===== 180001ba0 FUN_180001ba0 ===== */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180001ba0(void)

{
  DWORD DVar1;
  _FILETIME local_res8;
  LARGE_INTEGER local_res10 [3];
  _FILETIME local_18 [2];
  
  if (DAT_180019040 != 0x2b992ddfa232) {
    _DAT_180019080 = ~DAT_180019040;
    return;
  }
  local_res8.dwLowDateTime = 0;
  local_res8.dwHighDateTime = 0;
  GetSystemTimeAsFileTime(&local_res8);
  local_18[0] = local_res8;
  DVar1 = GetCurrentThreadId();
  local_18[0] = (_FILETIME)((ulonglong)local_18[0] ^ (ulonglong)DVar1);
  DVar1 = GetCurrentProcessId();
  local_18[0] = (_FILETIME)((ulonglong)local_18[0] ^ (ulonglong)DVar1);
  QueryPerformanceCounter(local_res10);
  DAT_180019040 =
       (local_res10[0].QuadPart << 0x20 ^ local_res10[0].QuadPart ^ (ulonglong)local_18[0] ^
       (ulonglong)local_18) & 0xffffffffffff;
  if (DAT_180019040 == 0x2b992ddfa232) {
    DAT_180019040 = 0x2b992ddfa233;
  }
  _DAT_180019080 = ~DAT_180019040;
  return;
}



/* ===== 180001c60 FUN_180001c60 ===== */


undefined8 FUN_180001c60(void)

{
  return 1;
}



/* ===== 180001c70 FUN_180001c70 ===== */


void FUN_180001c70(void)

{
                    /* WARNING: Could not recover jumptable at 0x000180001c77. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  InitializeSListHead(&DAT_1800dbba0);
  return;
}



/* ===== 180001c80 FUN_180001c80 ===== */


void FUN_180001c80(void)

{
  FUN_180002610((PSLIST_HEADER)&DAT_1800dbba0);
  return;
}



/* ===== 180001c90 FUN_180001c90 ===== */


undefined * FUN_180001c90(void)

{
  return &DAT_1800dbbb0;
}



/* ===== 180001ca0 FUN_180001ca0 ===== */


undefined * FUN_180001ca0(void)

{
  return &DAT_1800dbbb8;
}



/* ===== 180001cb0 FUN_180001cb0 ===== */


void FUN_180001cb0(void)

{
  ulonglong *puVar1;
  
  puVar1 = (ulonglong *)FUN_180001c90();
  *puVar1 = *puVar1 | 0x24;
  puVar1 = (ulonglong *)FUN_180001ca0();
  *puVar1 = *puVar1 | 2;
  return;
}



/* ===== 180001cd0 FUN_180001cd0 ===== */


ulonglong FUN_180001cd0(void)

{
  ulonglong uVar1;
  bool bVar2;
  undefined7 extraout_var;
  ulonglong uVar3;
  
  bVar2 = FUN_1800023b0();
  uVar3 = CONCAT71(extraout_var,bVar2);
  if ((int)uVar3 != 0) {
    uVar1 = *(ulonglong *)((longlong)Self + 8);
    uVar3 = 0;
    LOCK();
    bVar2 = DAT_1800dbbc8 == 0;
    if (bVar2) {
      DAT_1800dbbc8 = uVar1;
    }
    else {
      uVar3 = DAT_1800dbbc8;
    }
    UNLOCK();
    while (!bVar2) {
      if (uVar1 == uVar3) {
        return CONCAT71((int7)(uVar3 >> 8),1);
      }
      uVar3 = 0;
      LOCK();
      bVar2 = DAT_1800dbbc8 == 0;
      if (bVar2) {
        DAT_1800dbbc8 = uVar1;
      }
      else {
        uVar3 = DAT_1800dbbc8;
      }
      UNLOCK();
    }
  }
  return uVar3 & 0xffffffffffffff00;
}



/* ===== 180001d20 FUN_180001d20 ===== */


undefined8 FUN_180001d20(void)

{
  bool bVar1;
  int iVar2;
  undefined7 extraout_var;
  undefined8 uVar3;
  undefined4 extraout_var_00;
  
  bVar1 = FUN_1800023b0();
  if ((int)CONCAT71(extraout_var,bVar1) != 0) {
    uVar3 = FUN_180002100();
    return CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
  }
  uVar3 = FUN_180001c60();
  iVar2 = FUN_1800053cc((int)uVar3);
  if (iVar2 == 0) {
    uVar3 = thunk_FUN_18000554c();
    return CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
  }
  return CONCAT44(extraout_var_00,iVar2) & 0xffffffffffffff00;
}



/* ===== 180001d60 FUN_180001d60 ===== */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_180001d60(void)

{
  bool bVar1;
  ulonglong in_RAX;
  undefined7 extraout_var;
  
  if (DAT_1800dbbd1 == '\0') {
    bVar1 = FUN_1800023b0();
    in_RAX = CONCAT71(extraout_var,bVar1);
    if ((int)in_RAX == 0) {
      _DAT_1800dbbd8 = _DAT_18000f440;
      uRam00000001800dbbe0 = _UNK_18000f448;
      _DAT_1800dbbe8 = 0xffffffffffffffff;
      _DAT_1800dbbf0 = _DAT_18000f440;
      uRam00000001800dbbf8 = _UNK_18000f448;
      _DAT_1800dbc00 = 0xffffffffffffffff;
    }
    else {
      in_RAX = _initialize_onexit_table((longlong *)&DAT_1800dbbd8);
      if ((int)in_RAX != 0) {
LAB_180001d96:
        return in_RAX & 0xffffffffffffff00;
      }
      in_RAX = _initialize_onexit_table((longlong *)&DAT_1800dbbf0);
      if ((int)in_RAX != 0) goto LAB_180001d96;
    }
    DAT_1800dbbd1 = '\x01';
  }
  return CONCAT71((int7)(in_RAX >> 8),1);
}



/* ===== 180001de0 FUN_180001de0 ===== */


undefined1 FUN_180001de0(void)

{
  bool bVar1;
  
  bVar1 = FUN_180002680();
  if (bVar1) {
    bVar1 = FUN_180005aa0();
    if (bVar1) {
      return 1;
    }
    FUN_1800026a0();
  }
  return 0;
}



/* ===== 180001e10 FUN_180001e10 ===== */


undefined1 FUN_180001e10(void)

{
  FUN_180005ab4();
  FUN_1800026a0();
  return 1;
}



/* ===== 180001e30 FUN_180001e30 ===== */


void FUN_180001e30(undefined8 param_1,int param_2,undefined8 param_3,undefined *param_4,int param_5,
                  undefined8 param_6)

{
  bool bVar1;
  undefined7 extraout_var;
  
  bVar1 = FUN_1800023b0();
  if (((int)CONCAT71(extraout_var,bVar1) == 0) && (param_2 == 1)) {
    (*(code *)PTR__guard_dispatch_icall_18000f258)(param_1,0,param_3);
  }
  FUN_180004d90(param_5,param_6);
  return;
}



/* ===== 180001e80 FUN_180001e80 ===== */


void FUN_180001e80(void)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  
  bVar1 = FUN_1800023b0();
  if (CONCAT31(extraout_var,bVar1) != 0) {
    FUN_1800058f0(&DAT_1800dbbd8);
    return;
  }
  iVar2 = FUN_1800051a4();
  if (iVar2 == 0) {
    FUN_180005188();
    return;
  }
  return;
}



/* ===== 180001ec0 FUN_180001ec0 ===== */


void FUN_180001ec0(void)

{
  FUN_180005afc();
  FUN_1800026d0();
  return;
}



/* ===== 180001ee0 FUN_180001ee0 ===== */


ulonglong FUN_180001ee0(int param_1)

{
  undefined4 uVar1;
  undefined4 extraout_var_00;
  undefined8 uVar2;
  uint7 extraout_var;
  ulonglong uVar3;
  
  if (param_1 == 0) {
    DAT_1800dbbd0 = 1;
  }
  FUN_180002100();
  uVar1 = FUN_180002650();
  uVar3 = CONCAT44(extraout_var_00,uVar1);
  if ((char)uVar1 != '\0') {
    uVar2 = FUN_180005a8c();
    if ((char)uVar2 != '\0') {
      return CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
    }
    FUN_1800026b0('\0');
    uVar3 = (ulonglong)extraout_var << 8;
  }
  return uVar3 & 0xffffffffffffff00;
}



/* ===== 180001f20 FUN_180001f20 ===== */


undefined * FUN_180001f20(longlong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  uint7 uVar3;
  longlong lVar4;
  
  uVar1 = 0x5a4d;
  if (IMAGE_DOS_HEADER_180000000.e_magic == (char  [2])0x5a4d) {
    lVar4 = (longlong)(int)IMAGE_DOS_HEADER_180000000.e_lfanew;
    if ((*(int *)(lVar4 + 0x180000000) == 0x4550) &&
       (uVar1 = 0x20b,
       *(short *)((longlong)IMAGE_DOS_HEADER_180000000.e_res_4_ + lVar4 + -4) == 0x20b)) {
      uVar2 = (ulonglong)*(ushort *)((longlong)IMAGE_DOS_HEADER_180000000.e_res_4_ + lVar4 + -8) +
              0x18 + lVar4 + 0x180000000;
      uVar1 = uVar2 + (ulonglong)*(ushort *)(IMAGE_DOS_HEADER_180000000.e_magic + lVar4 + 6) * 0x28;
      while( true ) {
        uVar3 = (uint7)(uVar2 >> 8);
        if (uVar2 == uVar1) {
          return (undefined *)((ulonglong)uVar3 << 8);
        }
        if (((ulonglong)*(uint *)(uVar2 + 0xc) <= param_1 - 0x180000000U) &&
           (param_1 - 0x180000000U < (ulonglong)(*(int *)(uVar2 + 8) + *(uint *)(uVar2 + 0xc))))
        break;
        uVar2 = uVar2 + 0x28;
      }
      if (*(int *)(uVar2 + 0x24) < 0) {
        return (undefined *)(uVar2 & 0xffffffffffffff00);
      }
      return (undefined *)CONCAT71(uVar3,1);
    }
  }
  return (undefined *)(uVar1 & 0xffffffffffffff00);
}



/* ===== 180001fc0 FUN_180001fc0 ===== */


undefined8 FUN_180001fc0(char param_1)

{
  undefined8 uVar1;
  bool bVar2;
  undefined7 extraout_var;
  undefined8 uVar3;
  
  bVar2 = FUN_1800023b0();
  uVar1 = DAT_1800dbbc8;
  uVar3 = CONCAT71(extraout_var,bVar2);
  if (((int)uVar3 != 0) && (param_1 == '\0')) {
    LOCK();
    DAT_1800dbbc8 = 0;
    UNLOCK();
    uVar3 = uVar1;
  }
  return uVar3;
}



/* ===== 180001ff0 FUN_180001ff0 ===== */


undefined8 FUN_180001ff0(bool param_1,char param_2)

{
  longlong in_RAX;
  uint7 extraout_var;
  
  if ((DAT_1800dbbd0 == '\0') || (param_2 == '\0')) {
    FUN_180005ac4(param_1);
    FUN_1800026b0(param_1);
    in_RAX = (ulonglong)extraout_var << 8;
  }
  return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
}



/* ===== 180002020 FUN_180002020 ===== */


undefined * FUN_180002020(void)

{
  return &DAT_1800dc660;
}



/* ===== 180002030 FUN_180002030 ===== */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180002030(void)

{
  _DAT_1800dbc08 = 0;
  return;
}



/* ===== 180002040 FUN_180002040 ===== */


void FUN_180002040(undefined4 param_1)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x29);
  (*pcVar1)(param_1);
  return;
}



/* ===== 180002050 FUN_180002050 ===== */


/* WARNING: Removing unreachable block (ram,0x000180002070) */
/* WARNING: Removing unreachable block (ram,0x000180002078) */
/* WARNING: Removing unreachable block (ram,0x00018000207e) */

void FUN_180002050(void)

{
  return;
}



/* ===== 1800020a0 FUN_1800020a0 ===== */


/* WARNING: Removing unreachable block (ram,0x0001800020c0) */
/* WARNING: Removing unreachable block (ram,0x0001800020c8) */
/* WARNING: Removing unreachable block (ram,0x0001800020ce) */

void FUN_1800020a0(void)

{
  return;
}



/* ===== 1800020f0 _guard_check_icall ===== */


void _guard_check_icall(void)

{
  return;
}



/* ===== 180002100 FUN_180002100 ===== */


/* WARNING: Removing unreachable block (ram,0x000180002207) */
/* WARNING: Removing unreachable block (ram,0x0001800021f5) */
/* WARNING: Removing unreachable block (ram,0x0001800021e3) */
/* WARNING: Removing unreachable block (ram,0x0001800021bc) */
/* WARNING: Removing unreachable block (ram,0x000180002137) */
/* WARNING: Removing unreachable block (ram,0x000180002112) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_180002100(void)

{
  int *piVar1;
  uint *puVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  byte bVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  ulonglong in_XCR0;
  
  piVar1 = (int *)cpuid_basic_info(0);
  iVar4 = *piVar1;
  puVar2 = (uint *)cpuid_Version_info(1);
  uVar5 = puVar2[3];
  if ((piVar1[2] == 0x49656e69 && piVar1[3] == 0x6c65746e) && piVar1[1] == 0x756e6547) {
    uVar8 = *puVar2 & 0xfff3ff0;
    DAT_180019090 = 0x8000;
    DAT_180019098 = 0xffffffffffffffff;
    if ((((uVar8 == 0x106c0) || (uVar8 == 0x20660)) || (uVar8 == 0x20670)) ||
       ((uVar8 - 0x30650 < 0x21 &&
        ((0x100010001U >> ((ulonglong)(uVar8 - 0x30650) & 0x3f) & 1) != 0)))) {
      DAT_1800dbc0c = DAT_1800dbc0c | 1;
    }
  }
  uVar13 = 0;
  uVar8 = 0;
  uVar11 = 0;
  if (iVar4 < 7) {
    uVar12 = 0;
    uVar10 = 0;
  }
  else {
    piVar1 = (int *)cpuid_Extended_Feature_Enumeration_info(7);
    uVar12 = piVar1[1];
    uVar10 = piVar1[2];
    if ((uVar12 >> 9 & 1) != 0) {
      DAT_1800dbc0c = DAT_1800dbc0c | 2;
    }
    if (0 < *piVar1) {
      lVar3 = cpuid_Extended_Feature_Enumeration_info(7);
      uVar13 = *(uint *)(lVar3 + 8);
    }
    if (0x23 < iVar4) {
      lVar3 = cpuid(0x24);
      uVar8 = *(uint *)(lVar3 + 4);
    }
    if (0x28 < iVar4) {
      lVar3 = cpuid(0x29);
      uVar11 = *(uint *)(lVar3 + 4);
    }
  }
  DAT_180019088 = 1;
  DAT_18001908c = 2;
  uVar6 = DAT_1800190a0 & 0xfffffffffffffffe;
  if ((uVar5 >> 0x14 & 1) != 0) {
    DAT_180019088 = 2;
    DAT_18001908c = 6;
    uVar6 = DAT_1800190a0 & 0xffffffffffffffee;
  }
  DAT_1800190a0 = uVar6;
  if ((uVar5 >> 0x1b & 1) == 0) {
    return 0;
  }
  uVar6 = xinuse(0);
  uVar9 = in_XCR0 & uVar6 & 0xffffffff;
  uVar6 = DAT_1800190a0;
  if (((uVar5 >> 0x1c & 1) == 0) || (bVar7 = (byte)uVar9, (bVar7 & 6) != 6)) goto LAB_180002374;
  DAT_180019088 = 3;
  uVar5 = DAT_18001908c | 8;
  if ((uVar12 & 0x20) == 0) {
LAB_18000231a:
    DAT_1800190a0 = uVar6;
    DAT_18001908c = uVar5;
    uVar5 = DAT_18001908c;
    uVar6 = DAT_1800190a0;
  }
  else {
    DAT_180019088 = 5;
    uVar5 = DAT_18001908c | 0x28;
    uVar6 = DAT_1800190a0 & 0xfffffffffffffffd;
    if ((uVar12 & 0xd0030000) == 0xd0030000) {
      if ((bVar7 & 0xe0) != 0xe0) goto LAB_18000231a;
      DAT_18001908c = DAT_18001908c | 0x68;
      DAT_180019088 = 6;
      uVar5 = DAT_18001908c;
      uVar6 = DAT_1800190a0 & 0xffffffffffffffd9;
    }
  }
  DAT_1800190a0 = uVar6;
  DAT_18001908c = uVar5;
  if ((uVar10 >> 0x17 & 1) != 0) {
    DAT_1800190a0 = DAT_1800190a0 & 0xfffffffffeffffff;
  }
  uVar6 = DAT_1800190a0;
  if (((uVar13 >> 0x13 & 1) != 0) && ((bVar7 & 0xe0) == 0xe0)) {
    _DAT_1800dbc10 = uVar8 & 0xff;
    uVar6 = DAT_1800190a0 & 0xfffffffffeffffd0;
    if (1 < _DAT_1800dbc10) {
      uVar6 = DAT_1800190a0 & 0xfffffffffeffff90;
    }
  }
LAB_180002374:
  DAT_1800190a0 = uVar6;
  if ((((uVar13 >> 0x15 & 1) != 0) && ((uVar11 & 1) != 0)) && ((uVar9 >> 0x13 & 1) != 0)) {
    DAT_1800190a0 = DAT_1800190a0 & 0xffffffffffffff7f;
  }
  return 0;
}



/* ===== 1800023b0 FUN_1800023b0 ===== */


bool FUN_1800023b0(void)

{
  return DAT_1800dc65c != 0;
}



/* ===== 1800023c0 FUN_1800023c0 ===== */


undefined8 FUN_1800023c0(PEXCEPTION_RECORD param_1,PVOID param_2,longlong param_3,longlong *param_4)

{
  longlong lVar1;
  uint *puVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  PEXCEPTION_RECORD local_58;
  longlong local_50;
  
  __except_validate_context_record(param_3);
  lVar1 = param_4[1];
  puVar2 = (uint *)param_4[7];
  uVar11 = *param_4 - lVar1;
  uVar9 = *(uint *)(param_4 + 9);
  if ((param_1->ExceptionFlags & 0x66) == 0) {
    local_58 = param_1;
    local_50 = param_3;
    if (uVar9 < *puVar2) {
      do {
        if (((puVar2[(ulonglong)uVar9 * 4 + 1] <= uVar11) &&
            (uVar11 < puVar2[(ulonglong)uVar9 * 4 + 2])) && (puVar2[(ulonglong)uVar9 * 4 + 4] != 0))
        {
          if (puVar2[(ulonglong)uVar9 * 4 + 3] != 1) {
            iVar3 = (*(code *)((ulonglong)puVar2[(ulonglong)uVar9 * 4 + 3] + lVar1))
                              (&local_58,param_2);
            if (iVar3 < 0) {
              return 0;
            }
            if (iVar3 < 1) goto LAB_1800024db;
          }
          if (((param_1->ExceptionCode == 0xe06d7363) &&
              (PTR___DestructExceptionObject_18000f450 != (undefined *)0x0)) &&
             (uVar4 = FUN_18000d1f0(0x18000f450), (int)uVar4 != 0)) {
            (*(code *)PTR___DestructExceptionObject_18000f450)(param_1,1);
          }
          FUN_180002880();
          RtlUnwindEx(param_2,(PVOID)((ulonglong)puVar2[(ulonglong)uVar9 * 4 + 4] + lVar1),param_1,
                      (PVOID)(ulonglong)param_1->ExceptionCode,(PCONTEXT)param_4[5],
                      (PUNWIND_HISTORY_TABLE)param_4[8]);
          FUN_1800028b0();
        }
LAB_1800024db:
        uVar9 = uVar9 + 1;
      } while (uVar9 < *puVar2);
    }
  }
  else {
    uVar10 = *puVar2;
    if (uVar9 < uVar10) {
      uVar4 = param_4[4] - lVar1;
      do {
        uVar5 = (ulonglong)uVar9;
        if ((puVar2[uVar5 * 4 + 1] <= uVar11) && (uVar11 < puVar2[uVar5 * 4 + 2])) {
          uVar8 = param_1->ExceptionFlags & 0x20;
          if (uVar8 != 0) {
            uVar7 = 0;
            if (uVar10 != 0) {
              do {
                if ((((puVar2[uVar7 * 4 + 1] <= uVar4) && (uVar4 < puVar2[uVar7 * 4 + 2])) &&
                    (puVar2[uVar7 * 4 + 4] == puVar2[uVar5 * 4 + 4])) &&
                   (puVar2[uVar7 * 4 + 3] == puVar2[uVar5 * 4 + 3])) break;
                uVar6 = (int)uVar7 + 1;
                uVar7 = (ulonglong)uVar6;
              } while (uVar6 < uVar10);
            }
            if ((uint)uVar7 != *puVar2) {
              return 1;
            }
          }
          if (puVar2[uVar5 * 4 + 4] == 0) {
            *(uint *)(param_4 + 9) = uVar9 + 1;
            (*(code *)((ulonglong)puVar2[uVar5 * 4 + 3] + lVar1))(1);
          }
          else if ((uVar4 == puVar2[uVar5 * 4 + 4]) && (uVar8 != 0)) {
            return 1;
          }
        }
        uVar10 = *puVar2;
        uVar9 = uVar9 + 1;
      } while (uVar9 < uVar10);
    }
  }
  return 1;
}



/* ===== 1800025e0 FUN_1800025e0 ===== */


uint FUN_1800025e0(longlong param_1,longlong param_2)

{
  byte bVar1;
  byte *pbVar2;
  longlong lVar3;
  
  if (param_1 != param_2) {
    pbVar2 = (byte *)(param_1 + 9);
    lVar3 = (param_2 + 9) - (longlong)pbVar2;
    do {
      bVar1 = *pbVar2;
      if (bVar1 != pbVar2[lVar3]) {
        return -(uint)(bVar1 < pbVar2[lVar3]) | 1;
      }
      pbVar2 = pbVar2 + 1;
    } while (bVar1 != 0);
  }
  return 0;
}



/* ===== 180002610 FUN_180002610 ===== */


void FUN_180002610(PSLIST_HEADER param_1)

{
  PSLIST_ENTRY p_Var1;
  PSLIST_ENTRY_conflict p_Var2;
  
  p_Var2 = InterlockedFlushSList(param_1);
  while (p_Var2 != (PSLIST_ENTRY_conflict)0x0) {
    p_Var1 = p_Var2->Next;
    thunk_FUN_180006a50(p_Var2);
    p_Var2 = p_Var1;
  }
  return;
}



/* ===== 180002650 FUN_180002650 ===== */


uint FUN_180002650(void)

{
  uint uVar1;
  undefined4 uVar2;
  uint3 extraout_var;
  
  uVar1 = FUN_180002be0();
  if ((char)uVar1 != '\0') {
    uVar2 = FUN_180002b40();
    if ((char)uVar2 != '\0') {
      return CONCAT31((int3)((uint)uVar2 >> 8),1);
    }
    FUN_180002c70();
    uVar1 = (uint)extraout_var << 8;
  }
  return uVar1 & 0xffffff00;
}



/* ===== 180002680 FUN_180002680 ===== */


bool FUN_180002680(void)

{
  PVOID pvVar1;
  
  pvVar1 = FUN_180002a60();
  return pvVar1 != (PVOID)0x0;
}



/* ===== 1800026a0 FUN_1800026a0 ===== */


undefined1 FUN_1800026a0(void)

{
  FUN_180002920();
  return 1;
}



/* ===== 1800026b0 FUN_1800026b0 ===== */


undefined1 FUN_1800026b0(char param_1)

{
  if (param_1 == '\0') {
    FUN_180002bb0();
    FUN_180002c70();
  }
  return 1;
}



/* ===== 1800026d0 FUN_1800026d0 ===== */


undefined1 FUN_1800026d0(void)

{
  FUN_180002bb0();
  return 1;
}



/* ===== 1800026e0 __DestructExceptionObject ===== */


/* Library Function - Single Match
    __DestructExceptionObject
   
   Library: Visual Studio 2019 Release */

void __DestructExceptionObject(int *param_1)

{
  byte *pbVar1;
  
  if ((((param_1 != (int *)0x0) && (*param_1 == -0x1f928c9d)) && (param_1[6] == 4)) &&
     ((param_1[8] + 0xe66cfae0U < 3 && (pbVar1 = *(byte **)(param_1 + 0xc), pbVar1 != (byte *)0x0)))
     ) {
    if (*(int *)(pbVar1 + 4) == 0) {
      if (((*pbVar1 & 0x10) != 0) && (**(longlong **)(param_1 + 10) != 0)) {
        (*(code *)PTR__guard_dispatch_icall_18000f258)();
      }
    }
    else {
      FUN_180002750(*(undefined8 *)(param_1 + 10),
                    (undefined *)((longlong)*(int *)(pbVar1 + 4) + *(longlong *)(param_1 + 0xe)));
    }
  }
  return;
}



/* ===== 180002750 FUN_180002750 ===== */


void FUN_180002750(undefined8 param_1,undefined *UNRECOVERED_JUMPTABLE)

{
                    /* WARNING: Could not recover jumptable at 0x000180002750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}



/* ===== 180002760 FUN_180002760 ===== */


undefined8 FUN_180002760(longlong param_1)

{
  longlong *plVar1;
  PVOID pvVar2;
  
  pvVar2 = FUN_180002980();
  plVar1 = *(longlong **)((longlong)pvVar2 + 0x58);
  while( true ) {
    if (plVar1 == (longlong *)0x0) {
      return 1;
    }
    if (*plVar1 == param_1) break;
    plVar1 = (longlong *)plVar1[1];
  }
  return 0;
}



/* ===== 1800027a0 FUN_1800027a0 ===== */


longlong FUN_1800027a0(longlong param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = param_2[1];
  if (iVar1 < 0) {
    return *param_2 + param_1;
  }
  return (longlong)*(int *)((longlong)param_2[2] + *(longlong *)(iVar1 + param_1)) + (longlong)iVar1
         + *param_2 + param_1;
}



/* ===== 1800027d0 FUN_1800027d0 ===== */


undefined8 FUN_1800027d0(undefined8 *param_1)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  PVOID pvVar4;
  
  piVar2 = (int *)*param_1;
  iVar1 = *piVar2;
  if ((iVar1 == -0x1fbcbcae) || (iVar1 == -0x1fbcb0b3)) {
    pvVar4 = FUN_180002980();
    if (0 < *(int *)((longlong)pvVar4 + 0x30)) {
      pvVar4 = FUN_180002980();
      *(int *)((longlong)pvVar4 + 0x30) = *(int *)((longlong)pvVar4 + 0x30) + -1;
    }
  }
  else if (iVar1 == -0x1f928c9d) {
    pvVar4 = FUN_180002980();
    *(int **)((longlong)pvVar4 + 0x20) = piVar2;
    uVar3 = param_1[1];
    pvVar4 = FUN_180002980();
    *(undefined8 *)((longlong)pvVar4 + 0x28) = uVar3;
                    /* WARNING: Subroutine does not return */
    FUN_180005b0c();
  }
  return 0;
}



/* ===== 180002840 Unwind@180002840 ===== */


void Unwind_180002840(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_180005b0c();
}



/* ===== 180002880 FUN_180002880 ===== */


void FUN_180002880(void)

{
  FUN_1800028a0();
  return;
}



/* ===== 1800028a0 FUN_1800028a0 ===== */


void FUN_1800028a0(void)

{
  return;
}



/* ===== 1800028b0 FUN_1800028b0 ===== */


void FUN_1800028b0(void)

{
  return;
}



/* ===== 1800028c0 __except_validate_context_record ===== */


/* Library Function - Single Match
    __except_validate_context_record
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __except_validate_context_record(longlong param_1)

{
  code *pcVar1;
  
  if ((code *)PTR__guard_check_icall_18000f248 != _guard_check_icall) {
    if ((*(ulonglong *)(param_1 + 0x98) < *(ulonglong *)((longlong)Self + 0x10)) ||
       (*(ulonglong *)((longlong)Self + 8) < *(ulonglong *)(param_1 + 0x98))) {
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(0xd);
    }
  }
  return;
}



/* ===== 180002920 FUN_180002920 ===== */


void FUN_180002920(void)

{
  undefined *puVar1;
  
  if (DAT_1800190b0 != 0xffffffff) {
    puVar1 = FlsGetValue(DAT_1800190b0);
    FlsSetValue(DAT_1800190b0,(PVOID)0x0);
    if ((puVar1 != (undefined *)0x0) && (puVar1 != &DAT_1800dbc20)) {
      thunk_FUN_180006a50(puVar1);
      return;
    }
  }
  return;
}



/* ===== 180002980 FUN_180002980 ===== */


PVOID FUN_180002980(void)

{
  DWORD dwErrCode;
  BOOL BVar1;
  PVOID lpFlsData;
  
  if (DAT_1800190b0 != 0xffffffff) {
    dwErrCode = GetLastError();
    lpFlsData = FlsGetValue(DAT_1800190b0);
    if (lpFlsData != (PVOID)0xffffffffffffffff) {
      if (lpFlsData != (PVOID)0x0) {
LAB_180002a18:
        SetLastError(dwErrCode);
        return lpFlsData;
      }
      BVar1 = FlsSetValue(DAT_1800190b0,(PVOID)0xffffffffffffffff);
      if (BVar1 != 0) {
        lpFlsData = _calloc_base(1,0x80);
        if (lpFlsData == (LPVOID)0x0) {
          FlsSetValue(DAT_1800190b0,(PVOID)0x0);
          lpFlsData = (LPVOID)0x0;
        }
        else {
          BVar1 = FlsSetValue(DAT_1800190b0,lpFlsData);
          if (BVar1 != 0) {
            *(undefined4 *)((longlong)lpFlsData + 0x78) = 0xfffffffe;
            thunk_FUN_180006a50((LPVOID)0x0);
            goto LAB_180002a18;
          }
          FlsSetValue(DAT_1800190b0,(PVOID)0x0);
        }
        thunk_FUN_180006a50(lpFlsData);
      }
    }
    SetLastError(dwErrCode);
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



/* ===== 180002a60 FUN_180002a60 ===== */


PVOID FUN_180002a60(void)

{
  DWORD dwErrCode;
  BOOL BVar1;
  LPVOID pvVar2;
  LPVOID lpFlsData;
  LPVOID pvVar3;
  
  if (DAT_1800190b0 == 0xffffffff) {
    return (PVOID)0x0;
  }
  dwErrCode = GetLastError();
  pvVar2 = FlsGetValue(DAT_1800190b0);
  if (pvVar2 != (PVOID)0xffffffffffffffff) {
    if (pvVar2 != (PVOID)0x0) goto LAB_180002b17;
    BVar1 = FlsSetValue(DAT_1800190b0,(PVOID)0xffffffffffffffff);
    if (BVar1 != 0) {
      lpFlsData = _calloc_base(1,0x80);
      if ((lpFlsData == (LPVOID)0x0) || (BVar1 = FlsSetValue(DAT_1800190b0,lpFlsData), BVar1 == 0))
      {
        FlsSetValue(DAT_1800190b0,(PVOID)0x0);
        pvVar2 = (PVOID)0x0;
        pvVar3 = lpFlsData;
      }
      else {
        *(undefined4 *)((longlong)lpFlsData + 0x78) = 0xfffffffe;
        pvVar3 = (LPVOID)0x0;
        pvVar2 = lpFlsData;
      }
      thunk_FUN_180006a50(pvVar3);
      goto LAB_180002b17;
    }
  }
  pvVar2 = (PVOID)0x0;
LAB_180002b17:
  SetLastError(dwErrCode);
  return pvVar2;
}



/* ===== 180002b40 FUN_180002b40 ===== */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_180002b40(void)

{
  uint dwFlsIndex;
  BOOL BVar1;
  
  dwFlsIndex = FlsAlloc((PFLS_CALLBACK_FUNCTION)&LAB_180002900);
  DAT_1800190b0 = dwFlsIndex;
  if (dwFlsIndex != 0xffffffff) {
    BVar1 = FlsSetValue(dwFlsIndex,&DAT_1800dbc20);
    if (BVar1 != 0) {
      _DAT_1800dbc98 = 0xfffffffe;
      return CONCAT31((int3)((uint)BVar1 >> 8),1);
    }
    dwFlsIndex = 0;
    if (DAT_1800190b0 != 0xffffffff) {
      dwFlsIndex = FlsFree(DAT_1800190b0);
      DAT_1800190b0 = 0xffffffff;
    }
  }
  return dwFlsIndex & 0xffffff00;
}



/* ===== 180002bb0 FUN_180002bb0 ===== */


undefined1 FUN_180002bb0(void)

{
  if (DAT_1800190b0 != 0xffffffff) {
    FlsFree(DAT_1800190b0);
    DAT_1800190b0 = 0xffffffff;
  }
  return 1;
}



/* ===== 180002be0 FUN_180002be0 ===== */


undefined4 FUN_180002be0(void)

{
  BOOL BVar1;
  uint extraout_EAX;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar4 = 0;
  do {
    BVar1 = InitializeCriticalSectionEx((LPCRITICAL_SECTION)(&DAT_1800dbca0 + uVar4 * 0x28),4000,0);
    if (BVar1 == 0) {
      uVar4 = (ulonglong)DAT_1800dbcc8;
      uVar2 = 0;
      uVar3 = DAT_1800dbcc8;
      while (uVar3 != 0) {
        uVar3 = (int)uVar4 - 1;
        uVar4 = (ulonglong)uVar3;
        DeleteCriticalSection((LPCRITICAL_SECTION)(&DAT_1800dbca0 + uVar4 * 0x28));
        DAT_1800dbcc8 = DAT_1800dbcc8 - 1;
        uVar2 = extraout_EAX;
      }
      return uVar2 & 0xffffff00;
    }
    DAT_1800dbcc8 = DAT_1800dbcc8 + 1;
    uVar2 = (int)uVar4 + 1;
    uVar4 = (ulonglong)uVar2;
  } while (uVar2 == 0);
  return CONCAT31((int3)((uint)BVar1 >> 8),1);
}



/* ===== 180002c70 FUN_180002c70 ===== */


undefined1 FUN_180002c70(void)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar2 = (ulonglong)DAT_1800dbcc8;
  uVar1 = DAT_1800dbcc8;
  while (uVar1 != 0) {
    uVar1 = (int)uVar2 - 1;
    uVar2 = (ulonglong)uVar1;
    DeleteCriticalSection((LPCRITICAL_SECTION)(&DAT_1800dbca0 + uVar2 * 0x28));
    DAT_1800dbcc8 = DAT_1800dbcc8 - 1;
  }
  return 1;
}



/* ===== 180002cc0 FUN_180002cc0 ===== */


undefined8 FUN_180002cc0(undefined4 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 *local_28;
  undefined8 local_20;
  
  local_28 = param_1;
  local_20 = param_3;
  FUN_180002980();
  (*(code *)PTR__guard_dispatch_icall_18000f258)(*param_1,&local_28);
  return 0;
}



/* ===== 180002d10 FUN_180002d10 ===== */


bool FUN_180002d10(ulonglong *param_1,longlong param_2)

{
  int iVar1;
  PVOID pvVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  
  iVar1 = FUN_1800034c0(param_2,param_1);
  uVar4 = *(uint *)(param_2 + 0xc);
  uVar5 = (ulonglong)uVar4;
  do {
    if (uVar4 == 0) {
      lVar3 = 0;
      break;
    }
    uVar4 = (int)uVar5 - 1;
    uVar5 = (ulonglong)uVar4;
    pvVar2 = FUN_180002980();
    lVar3 = (longlong)*(int *)(param_2 + 0x10) +
            *(longlong *)((longlong)pvVar2 + 0x60) + uVar5 * 0x14;
  } while ((iVar1 <= *(int *)(lVar3 + 4)) || (*(int *)(lVar3 + 8) < iVar1));
  return lVar3 != 0;
}



/* ===== 180002d80 FUN_180002d80 ===== */


void FUN_180002d80(longlong *param_1,ulonglong *param_2,longlong param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  PRUNTIME_FUNCTION p_Var4;
  ulonglong uVar5;
  PVOID pvVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  longlong local_res8;
  ulonglong local_res18 [2];
  
  uVar9 = *(uint *)(param_3 + 0xc);
  uVar8 = (ulonglong)uVar9;
  iVar2 = FUN_1800034c0(param_3,param_2);
  local_res8 = *param_1;
  do {
    do {
      if (uVar9 == 0) goto LAB_180002e45;
      uVar9 = (int)uVar8 - 1;
      uVar8 = (ulonglong)uVar9;
      lVar7 = (longlong)*(int *)(param_3 + 0x10) + uVar8 * 0x14 + param_2[1];
    } while ((iVar2 <= *(int *)(lVar7 + 4)) || (*(int *)(lVar7 + 8) < iVar2));
    p_Var4 = RtlLookupFunctionEntry(*param_2,local_res18,(PUNWIND_HISTORY_TABLE)0x0);
    lVar11 = (longlong)*(int *)(lVar7 + 0x10) + local_res18[0];
    uVar1 = *(uint *)(lVar7 + 0xc);
    uVar5 = 0;
    if (uVar1 != 0) {
      do {
        if ((longlong)*(int *)(lVar11 + 0xc + uVar5 * 0x14) == (ulonglong)p_Var4->BeginAddress)
        goto LAB_180002e30;
        uVar3 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar3;
      } while (uVar3 < uVar1);
    }
  } while (uVar1 <= (uint)uVar5);
LAB_180002e30:
  local_res8 = *(longlong *)((longlong)*(int *)(lVar11 + 0x10 + uVar5 * 0x14) + *param_1);
LAB_180002e45:
  iVar2 = FUN_1800034c0(param_3,param_2);
  uVar9 = *(uint *)(param_3 + 0xc);
  uVar8 = (ulonglong)uVar9;
  do {
    if (uVar9 == 0) {
      iVar10 = -1;
      break;
    }
    pvVar6 = FUN_180002980();
    uVar9 = (int)uVar8 - 1;
    uVar8 = (ulonglong)uVar9;
    lVar7 = (longlong)*(int *)(param_3 + 0x10) + *(longlong *)((longlong)pvVar6 + 0x60);
    iVar10 = *(int *)(lVar7 + 4 + uVar8 * 0x14);
  } while ((iVar2 <= iVar10) || (*(int *)(lVar7 + 8 + uVar8 * 0x14) < iVar2));
  FUN_180004780(&local_res8,param_2,param_3,iVar10);
  return;
}



/* ===== 180002eb0 FUN_180002eb0 ===== */


longlong * FUN_180002eb0(longlong *param_1,ulonglong *param_2,longlong param_3,longlong *param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  PRUNTIME_FUNCTION p_Var4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong local_res8;
  
  uVar7 = *(uint *)(param_3 + 0xc);
  uVar8 = (ulonglong)uVar7;
  iVar2 = FUN_1800034c0(param_3,param_2);
  *param_4 = *param_1;
  if (uVar7 == 0) {
    return param_4;
  }
  do {
    uVar7 = (int)uVar8 - 1;
    uVar8 = (ulonglong)uVar7;
    lVar6 = (longlong)*(int *)(param_3 + 0x10) + uVar8 * 0x14 + param_2[1];
    if ((*(int *)(lVar6 + 4) < iVar2) && (iVar2 <= *(int *)(lVar6 + 8))) {
      p_Var4 = RtlLookupFunctionEntry(*param_2,&local_res8,(PUNWIND_HISTORY_TABLE)0x0);
      lVar9 = (longlong)*(int *)(lVar6 + 0x10) + local_res8;
      uVar1 = *(uint *)(lVar6 + 0xc);
      uVar5 = 0;
      if (uVar1 != 0) {
        do {
          if ((longlong)*(int *)(lVar9 + 0xc + uVar5 * 0x14) == (ulonglong)p_Var4->BeginAddress)
          goto LAB_180002f60;
          uVar3 = (int)uVar5 + 1;
          uVar5 = (ulonglong)uVar3;
        } while (uVar3 < uVar1);
      }
      if ((uint)uVar5 < uVar1) {
LAB_180002f60:
        *param_4 = *(longlong *)((longlong)*(int *)(lVar9 + 0x10 + uVar5 * 0x14) + *param_1);
        return param_4;
      }
    }
    if (uVar7 == 0) {
      return param_4;
    }
  } while( true );
}



/* ===== 180002fb0 FUN_180002fb0 ===== */


undefined8 *
FUN_180002fb0(undefined8 *param_1,undefined8 param_2,int param_3,ulonglong *param_4,longlong param_5
             )

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 local_3c;
  
  uVar3 = *(uint *)(param_5 + 0xc);
  iVar2 = FUN_1800034c0(param_5,param_4);
  if (uVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar4 = param_4[1];
  uVar7 = 0xffffffff;
  lVar6 = (longlong)*(int *)(param_5 + 0x10);
  uVar9 = 0xffffffff;
  lVar1 = uVar4 + lVar6;
  uVar5 = uVar3;
  while( true ) {
    uVar8 = uVar5 - 1;
    if ((*(int *)(uVar4 + (ulonglong)uVar8 * 0x14 + 4 + lVar6) < iVar2) &&
       (iVar2 <= *(int *)(lVar1 + 8 + (ulonglong)uVar8 * 0x14))) break;
    uVar5 = uVar8;
    if (uVar8 == 0) {
      lVar6 = 0;
LAB_18000303c:
      uVar8 = 0;
      uVar5 = uVar8;
      do {
        uVar4 = (ulonglong)uVar5;
        if ((((lVar6 == 0) ||
             ((*(int *)(lVar6 + 4) < *(int *)(lVar1 + uVar4 * 0x14) &&
              (*(int *)(lVar1 + 4 + uVar4 * 0x14) <= *(int *)(lVar6 + 8))))) &&
            (*(int *)(lVar1 + uVar4 * 0x14) <= param_3)) &&
           (param_3 <= *(int *)(lVar1 + 4 + uVar4 * 0x14))) {
          uVar9 = uVar5;
          if (uVar7 == 0xffffffff) {
            uVar7 = uVar5;
          }
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar3);
      *param_1 = param_2;
      param_1[2] = param_2;
      uVar3 = uVar8;
      if (uVar7 != 0xffffffff) {
        uVar3 = uVar7;
      }
      *(uint *)(param_1 + 1) = uVar3;
      *(undefined4 *)((longlong)param_1 + 0xc) = local_3c;
      if (uVar7 != 0xffffffff) {
        uVar8 = uVar9 + 1;
      }
      *(undefined4 *)((longlong)param_1 + 0x1c) = local_3c;
      *(uint *)(param_1 + 3) = uVar8;
      return param_1;
    }
  }
  lVar6 = uVar4 + (ulonglong)(uVar5 - 1) * 0x14 + lVar6;
  goto LAB_18000303c;
}



/* ===== 1800030e0 FUN_1800030e0 ===== */


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800030e0(undefined8 *param_1,ULONG_PTR param_2,ULONG_PTR param_3,ULONG_PTR param_4,
                  ULONG_PTR param_5,ULONG_PTR param_6,int param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 *param_10,byte param_11)

{
  undefined1 auStackY_e8 [32];
  EXCEPTION_RECORD local_b8;
  ulonglong local_18;
  
  local_18 = DAT_180019040 ^ (ulonglong)auStackY_e8;
  local_b8._0_8_ = _DAT_180010240;
  local_b8.ExceptionRecord = _UNK_180010248;
  local_b8.ExceptionAddress = _DAT_180010250;
  local_b8._24_8_ = _UNK_180010258;
  local_b8.ExceptionInformation[9] = _UNK_1800102a8;
  local_b8.ExceptionInformation[10] = _DAT_1800102b0;
  local_b8.ExceptionInformation[0xb] = _UNK_1800102b8;
  local_b8.ExceptionInformation[0xe] = DAT_1800102d0;
  local_b8.ExceptionInformation[0xc]._0_4_ = _DAT_1800102c0;
  local_b8.ExceptionInformation[0xc]._4_4_ = _UNK_1800102c4;
  local_b8.ExceptionInformation[0xd]._0_4_ = _UNK_1800102c8;
  local_b8.ExceptionInformation[0xd]._4_4_ = _UNK_1800102cc;
  local_b8.ExceptionInformation[0] = (ULONG_PTR)FUN_1800044e0;
  local_b8.ExceptionInformation[2] = param_5;
  local_b8.ExceptionInformation[3] = (ULONG_PTR)param_7;
  local_b8.ExceptionInformation[5] = param_6;
  local_b8.ExceptionInformation[7] = (ULONG_PTR)param_11;
  local_b8.ExceptionInformation[8] = 0x19930520;
  local_b8.ExceptionInformation[1] = param_4;
  local_b8.ExceptionInformation[4] = param_3;
  local_b8.ExceptionInformation[6] = param_2;
  RtlUnwindEx((PVOID)*param_1,(PVOID)*param_10,&local_b8,(PVOID)0x0,(PCONTEXT)param_10[5],
              (PUNWIND_HISTORY_TABLE)param_10[8]);
  return;
}



/* ===== 180003210 _CreateFrameInfo ===== */


/* Library Function - Single Match
    _CreateFrameInfo
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined8 * _CreateFrameInfo(undefined8 *param_1,undefined8 param_2)

{
  PVOID pvVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  pvVar1 = FUN_180002980();
  if (param_1 < *(undefined8 **)((longlong)pvVar1 + 0x58)) {
    pvVar1 = FUN_180002980();
    uVar2 = *(undefined8 *)((longlong)pvVar1 + 0x58);
  }
  else {
    uVar2 = 0;
  }
  param_1[1] = uVar2;
  pvVar1 = FUN_180002980();
  *(undefined8 **)((longlong)pvVar1 + 0x58) = param_1;
  return param_1;
}



/* ===== 180003250 FUN_180003250 ===== */


void FUN_180003250(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  PVOID pvVar3;
  bool bVar4;
  
  pvVar3 = FUN_180002980();
  if (param_1 == *(longlong *)((longlong)pvVar3 + 0x58)) {
    pvVar3 = FUN_180002980();
    lVar2 = *(longlong *)((longlong)pvVar3 + 0x58);
    while (lVar2 != 0) {
      lVar1 = *(longlong *)(lVar2 + 8);
      bVar4 = param_1 == lVar2;
      lVar2 = lVar1;
      if (bVar4) {
        pvVar3 = FUN_180002980();
        *(longlong *)((longlong)pvVar3 + 0x58) = lVar1;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



/* ===== 1800032b0 FUN_1800032b0 ===== */


undefined8 FUN_1800032b0(void)

{
  PVOID pvVar1;
  
  pvVar1 = FUN_180002980();
  return *(undefined8 *)((longlong)pvVar1 + 0x60);
}



/* ===== 1800032d0 FUN_1800032d0 ===== */


undefined8 FUN_1800032d0(void)

{
  PVOID pvVar1;
  
  pvVar1 = FUN_180002980();
  return *(undefined8 *)((longlong)pvVar1 + 0x68);
}



/* ===== 1800032f0 FUN_1800032f0 ===== */


void FUN_1800032f0(undefined8 param_1)

{
  PVOID pvVar1;
  
  pvVar1 = FUN_180002980();
  *(undefined8 *)((longlong)pvVar1 + 0x60) = param_1;
  return;
}



/* ===== 180003310 FUN_180003310 ===== */


void FUN_180003310(undefined8 param_1)

{
  PVOID pvVar1;
  
  pvVar1 = FUN_180002980();
  *(undefined8 *)((longlong)pvVar1 + 0x68) = param_1;
  return;
}



/* ===== 180003330 FUN_180003330 ===== */


void FUN_180003330(int *param_1,longlong param_2,ULONG_PTR param_3,ulonglong *param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  PVOID pvVar3;
  longlong local_res8 [4];
  
  uVar1 = param_4[1];
  local_res8[0] = param_2;
  pvVar3 = FUN_180002980();
  *(ulonglong *)((longlong)pvVar3 + 0x60) = uVar1;
  uVar2 = *(undefined8 *)(param_1 + 0xe);
  pvVar3 = FUN_180002980();
  *(undefined8 *)((longlong)pvVar3 + 0x68) = uVar2;
  pvVar3 = FUN_180002980();
  FUN_1800043b0(param_1,local_res8,param_3,param_4,
                (uint *)((ulonglong)*(uint *)param_4[7] + *(longlong *)((longlong)pvVar3 + 0x60)),0,
                0,0);
  return;
}



/* ===== 1800033b0 FUN_1800033b0 ===== */


int FUN_1800033b0(longlong *param_1,ulonglong *param_2,longlong param_3)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  iVar2 = *(int *)((longlong)*(int *)(param_3 + 0x1c) + *param_1);
  if (iVar2 != -2) {
    return iVar2;
  }
  uVar3 = param_2[1];
  lVar1 = uVar3 + (longlong)*(int *)(param_3 + 0x18);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (*(uint *)(param_3 + 0x14) != 0) {
    uVar5 = 0;
    do {
      if (*param_2 < (longlong)*(int *)(lVar1 + uVar5 * 8) + uVar3) break;
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
    } while (uVar4 < *(uint *)(param_3 + 0x14));
    if ((int)uVar5 != 0) {
      return *(int *)(uVar3 + (ulonglong)((int)uVar5 - 1) * 8 + 4 +
                     (longlong)*(int *)(param_3 + 0x18));
    }
  }
  return -1;
}



/* ===== 180003440 GetUnwindTryBlock ===== */


/* Library Function - Multiple Matches With Same Base Name
    public: static int __cdecl __FrameHandler3::GetUnwindTryBlock(unsigned __int64 * __ptr64,struct
   _xDISPATCHER_CONTEXT * __ptr64,struct _s_FuncInfo const * __ptr64)
    int __cdecl __GetUnwindTryBlock(unsigned __int64 * __ptr64,struct _xDISPATCHER_CONTEXT *
   __ptr64,struct _s_FuncInfo const * __ptr64)
   
   Library: Visual Studio */

undefined4 GetUnwindTryBlock(longlong *param_1,ulonglong *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong local_res18 [2];
  
  plVar1 = FUN_180002eb0(param_1,param_2,param_3,local_res18);
  return *(undefined4 *)((longlong)*(int *)(param_3 + 0x1c) + 4 + *plVar1);
}



/* ===== 180003470 FUN_180003470 ===== */


void FUN_180003470(longlong *param_1,undefined8 param_2,longlong param_3,undefined4 param_4)

{
  *(undefined4 *)((longlong)*(int *)(param_3 + 0x1c) + *param_1) = param_4;
  return;
}



/* ===== 180003480 SetUnwindTryBlock ===== */


/* Library Function - Multiple Matches With Same Base Name
    public: static void __cdecl __FrameHandler3::SetUnwindTryBlock(unsigned __int64 * __ptr64,struct
   _xDISPATCHER_CONTEXT * __ptr64,struct _s_FuncInfo const * __ptr64,int)
    void __cdecl __SetUnwindTryBlock(unsigned __int64 * __ptr64,struct _xDISPATCHER_CONTEXT *
   __ptr64,struct _s_FuncInfo const * __ptr64,int)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void SetUnwindTryBlock(longlong *param_1,ulonglong *param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  longlong local_res18 [2];
  
  plVar1 = FUN_180002eb0(param_1,param_2,param_3,local_res18);
  if (*(int *)((longlong)*(int *)(param_3 + 0x1c) + 4 + *plVar1) < param_4) {
    *(int *)((longlong)*(int *)(param_3 + 0x1c) + 4 + *plVar1) = param_4;
  }
  return;
}



/* ===== 1800034c0 FUN_1800034c0 ===== */


undefined4 FUN_1800034c0(longlong param_1,ulonglong *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  if (param_1 != 0) {
    uVar2 = param_2[1];
    lVar1 = uVar2 + (longlong)*(int *)(param_1 + 0x18);
    if (lVar1 != 0) {
      if (*(uint *)(param_1 + 0x14) != 0) {
        uVar4 = 0;
        do {
          if (*param_2 < (longlong)*(int *)(lVar1 + uVar4 * 8) + uVar2) break;
          uVar3 = (int)uVar4 + 1;
          uVar4 = (ulonglong)uVar3;
        } while (uVar3 < *(uint *)(param_1 + 0x14));
        if ((int)uVar4 != 0) {
          return *(undefined4 *)
                  (uVar2 + (ulonglong)((int)uVar4 - 1) * 8 + 4 + (longlong)*(int *)(param_1 + 0x18))
          ;
        }
      }
      return 0xffffffff;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



/* ===== 180003530 FUN_180003530 ===== */


undefined4 FUN_180003530(longlong param_1,longlong param_2,ulonglong param_3)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  
  if (param_1 != 0) {
    lVar2 = *(longlong *)(param_2 + 8);
    lVar1 = lVar2 + *(int *)(param_1 + 0x18);
    if (lVar1 != 0) {
      if (*(uint *)(param_1 + 0x14) != 0) {
        uVar4 = 0;
        do {
          if (param_3 < (ulonglong)(*(int *)(lVar1 + uVar4 * 8) + lVar2)) break;
          uVar3 = (int)uVar4 + 1;
          uVar4 = (ulonglong)uVar3;
        } while (uVar3 < *(uint *)(param_1 + 0x14));
        if ((int)uVar4 != 0) {
          return *(undefined4 *)
                  (lVar2 + (ulonglong)((int)uVar4 - 1) * 8 + 4 + (longlong)*(int *)(param_1 + 0x18))
          ;
        }
      }
      return 0xffffffff;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



/* ===== 1800035a0 FUN_1800035a0 ===== */


char FUN_1800035a0(longlong param_1,longlong *param_2,uint *param_3,byte *param_4)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  
  uVar1 = param_3[1];
  if ((uVar1 != 0) && (lVar4 = FUN_1800032b0(), lVar4 + (int)uVar1 != 0)) {
    uVar1 = param_3[1];
    if (uVar1 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = FUN_1800032b0();
      lVar4 = lVar4 + (int)uVar1;
    }
    if ((*(char *)(lVar4 + 0x10) != '\0') && ((param_3[2] != 0 || ((int)*param_3 < 0)))) {
      uVar1 = *param_3;
      if (-1 < (int)uVar1) {
        param_2 = (longlong *)((longlong)(int)param_3[2] + *param_2);
      }
      if ((((char)uVar1 < '\0') && ((*param_4 & 0x10) != 0)) && (DAT_1800dbc18 != 0)) {
        lVar4 = (*(code *)PTR__guard_dispatch_icall_18000f258)();
        if ((lVar4 == 0) || (param_2 == (longlong *)0x0)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *param_2 = lVar4;
        lVar4 = FUN_1800027a0(lVar4,(int *)(param_4 + 8));
        *param_2 = lVar4;
      }
      else if ((uVar1 & 8) == 0) {
        if ((*param_4 & 1) == 0) {
          iVar2 = *(int *)(param_4 + 0x18);
          if (iVar2 == 0) {
            lVar4 = 0;
          }
          else {
            lVar4 = FUN_1800032d0();
            lVar4 = lVar4 + iVar2;
          }
          lVar3 = *(longlong *)(param_1 + 0x28);
          if (lVar4 != 0) {
            if (((lVar3 == 0) || (param_2 == (longlong *)0x0)) ||
               ((iVar2 = *(int *)(param_4 + 0x18), iVar2 == 0 ||
                (lVar4 = FUN_1800032d0(), lVar4 + iVar2 == 0)))) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            return ((*param_4 & 4) != 0) + '\x01';
          }
          if ((lVar3 == 0) || (param_2 == (longlong *)0x0)) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          iVar2 = *(int *)(param_4 + 0x14);
          puVar5 = (undefined8 *)FUN_1800027a0(lVar3,(int *)(param_4 + 8));
          FUN_18000d6a0(param_2,puVar5,(longlong)iVar2);
        }
        else {
          if ((*(undefined8 **)(param_1 + 0x28) == (undefined8 *)0x0) ||
             (param_2 == (longlong *)0x0)) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          FUN_18000d6a0(param_2,*(undefined8 **)(param_1 + 0x28),(longlong)*(int *)(param_4 + 0x14))
          ;
          if ((*(int *)(param_4 + 0x14) == 8) && (*param_2 != 0)) {
            lVar4 = FUN_1800027a0(*param_2,(int *)(param_4 + 8));
            *param_2 = lVar4;
          }
        }
      }
      else {
        lVar4 = *(longlong *)(param_1 + 0x28);
        if ((lVar4 == 0) || (param_2 == (longlong *)0x0)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *param_2 = lVar4;
        lVar4 = FUN_1800027a0(lVar4,(int *)(param_4 + 8));
        *param_2 = lVar4;
      }
      return '\0';
    }
  }
  return '\0';
}



/* ===== 180003780 FUN_180003780 ===== */


void FUN_180003780(longlong param_1,longlong *param_2,uint *param_3,byte *param_4)

{
  char cVar1;
  int iVar2;
  undefined7 extraout_var;
  longlong lVar3;
  longlong lVar4;
  undefined *puVar5;
  longlong *plVar6;
  
  if ((int)*param_3 < 0) {
    plVar6 = param_2;
  }
  else {
    plVar6 = (longlong *)((longlong)(int)param_3[2] + *param_2);
  }
  cVar1 = FUN_1800035a0(param_1,param_2,param_3,param_4);
  iVar2 = (int)CONCAT71(extraout_var,cVar1);
  if (iVar2 == 1) {
    lVar3 = FUN_1800027a0(*(longlong *)(param_1 + 0x28),(int *)(param_4 + 8));
    iVar2 = *(int *)(param_4 + 0x18);
    if (iVar2 == 0) {
      puVar5 = (undefined *)0x0;
    }
    else {
      lVar4 = FUN_1800032d0();
      puVar5 = (undefined *)(lVar4 + iVar2);
    }
    FUN_180004ad0(plVar6,puVar5,lVar3);
  }
  else if (iVar2 == 2) {
    lVar3 = FUN_1800027a0(*(longlong *)(param_1 + 0x28),(int *)(param_4 + 8));
    iVar2 = *(int *)(param_4 + 0x18);
    if (iVar2 == 0) {
      puVar5 = (undefined *)0x0;
    }
    else {
      lVar4 = FUN_1800032d0();
      puVar5 = (undefined *)(lVar4 + iVar2);
    }
    FUN_180004ae0(plVar6,puVar5,lVar3,1);
  }
  return;
}



/* ===== 180003840 FUN_180003840 ===== */


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180003840(int *param_1,longlong *param_2,ULONG_PTR param_3,ulonglong *param_4,uint *param_5
                  ,byte param_6)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  PVOID pvVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong lVar12;
  int *piVar13;
  byte *pbVar14;
  uint uVar15;
  uint uVar16;
  undefined1 auStackY_138 [32];
  undefined8 in_stack_ffffffffffffff00;
  undefined4 uVar17;
  int local_d8;
  ULONG_PTR local_d0;
  longlong *local_c8;
  undefined4 local_c0;
  int local_bc;
  longlong *local_b8;
  longlong local_b0;
  longlong local_a8;
  uint *local_a0;
  ulonglong local_98;
  longlong *local_90;
  uint local_88;
  uint local_78;
  longlong local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  ulonglong local_58;
  
  local_58 = DAT_180019040 ^ (ulonglong)auStackY_138;
  local_b8 = param_2;
  local_d8 = FUN_1800034c0((longlong)param_5,param_4);
  FUN_180002eb0(param_2,param_4,(longlong)param_5,(longlong *)&local_c8);
  iVar6 = GetUnwindTryBlock(param_2,param_4,(longlong)param_5);
  if (iVar6 < local_d8) {
    FUN_180003470((longlong *)&local_c8,param_4,(longlong)param_5,local_d8);
    SetUnwindTryBlock(param_2,param_4,(longlong)param_5,local_d8);
  }
  else {
    local_d8 = GetUnwindTryBlock(param_2,param_4,(longlong)param_5);
  }
  if ((-2 < local_d8) && (local_d8 < (int)param_5[1])) {
    local_d0 = param_3;
    if ((*param_1 == -0x1f928c9d) &&
       (((param_1[6] == 4 && (param_1[8] + 0xe66cfae0U < 3)) && (*(longlong *)(param_1 + 0xc) == 0))
       )) {
      pvVar7 = FUN_180002980();
      if (*(longlong *)((longlong)pvVar7 + 0x20) == 0) {
        return;
      }
      pvVar7 = FUN_180002980();
      param_1 = *(int **)((longlong)pvVar7 + 0x20);
      pvVar7 = FUN_180002980();
      local_d0 = *(ULONG_PTR *)((longlong)pvVar7 + 0x28);
      FUN_180003310(*(undefined8 *)(param_1 + 0xe));
      if ((param_1 == (int *)0x0) ||
         (((*param_1 == -0x1f928c9d && (param_1[6] == 4)) &&
          ((param_1[8] + 0xe66cfae0U < 3 && (*(longlong *)(param_1 + 0xc) == 0))))))
      goto LAB_180003de1;
      pvVar7 = FUN_180002980();
      if (*(longlong *)((longlong)pvVar7 + 0x38) != 0) {
        pvVar7 = FUN_180002980();
        piVar13 = *(int **)((longlong)pvVar7 + 0x38);
        pvVar7 = FUN_180002980();
        *(undefined8 *)((longlong)pvVar7 + 0x38) = 0;
        cVar4 = FUN_180004930((longlong)param_1,piVar13);
        if (cVar4 == '\0') {
          uVar8 = FUN_180004a40(piVar13);
          if ((char)uVar8 == '\0') {
                    /* WARNING: Subroutine does not return */
            FUN_180005b0c();
          }
          __DestructExceptionObject(param_1);
          FUN_180004400(&local_70);
          FUN_180004c70(&local_70,&DAT_1800181b0);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
    }
    uVar17 = (undefined4)((ulonglong)in_stack_ffffffffffffff00 >> 0x20);
    local_98 = param_4[1];
    local_a0 = param_5;
    if (((*param_1 == -0x1f928c9d) && (param_1[6] == 4)) && (param_1[8] + 0xe66cfae0U < 3)) {
      if (param_5[3] != 0) {
        FUN_180002fb0(&local_90,&local_a0,local_d8,param_4,(longlong)param_5);
        uVar17 = (undefined4)((ulonglong)in_stack_ffffffffffffff00 >> 0x20);
        local_c8 = local_90;
        uVar15 = local_88;
        if (local_88 < local_78) {
          do {
            lVar12 = local_90[1];
            lVar9 = (longlong)*(int *)(*local_90 + 0x10) + (ulonglong)uVar15 * 0x14;
            local_bc = *(int *)(lVar9 + lVar12);
            if (local_bc <= local_d8) {
              if (local_d8 <= *(int *)(lVar9 + 4 + lVar12)) {
                local_c0 = *(undefined4 *)(lVar9 + 8 + lVar12);
                uVar8 = 0;
                uVar1 = *(uint *)(lVar9 + 0xc + lVar12);
                local_b0 = (longlong)*(int *)(lVar9 + 0x10 + lVar12) + param_4[1];
                if (uVar1 != 0) {
                  do {
                    plVar11 = (longlong *)(local_b0 + uVar8 * 0x14);
                    local_70 = *plVar11;
                    uStack_68 = plVar11[1];
                    local_60 = *(undefined4 *)(local_b0 + 0x10 + uVar8 * 0x14);
                    iVar6 = *(int *)(*(longlong *)(param_1 + 0xc) + 0xc);
                    lVar9 = FUN_1800032d0();
                    piVar13 = (int *)((longlong)iVar6 + lVar9 + 4);
                    iVar6 = *(int *)(*(longlong *)(param_1 + 0xc) + 0xc);
                    lVar9 = FUN_1800032d0();
                    local_90 = local_c8;
                    for (iVar6 = *(int *)(lVar9 + iVar6); local_c8 = local_90, 0 < iVar6;
                        iVar6 = iVar6 + -1) {
                      iVar2 = *piVar13;
                      lVar9 = FUN_1800032d0();
                      pbVar14 = (byte *)(iVar2 + lVar9);
                      uVar10 = FUN_180004050((byte *)&local_70,pbVar14,*(uint **)(param_1 + 0xc));
                      param_2 = local_b8;
                      uVar17 = (undefined4)((ulonglong)in_stack_ffffffffffffff00 >> 0x20);
                      if ((int)uVar10 != 0) {
                        plVar11 = FUN_180002eb0(local_b8,param_4,(longlong)param_5,&local_a8);
                        if (pbVar14 != (byte *)0x0) {
                          FUN_180003780((longlong)param_1,plVar11,(uint *)&local_70,pbVar14);
                        }
                        lVar12 = (longlong)uStack_68._4_4_;
                        lVar9 = FUN_1800032b0();
                        in_stack_ffffffffffffff00 = CONCAT44(uVar17,local_c0);
                        FUN_1800030e0(param_2,(ULONG_PTR)param_1,local_d0,(ULONG_PTR)plVar11,
                                      lVar9 + lVar12,(ULONG_PTR)param_5,local_bc,
                                      in_stack_ffffffffffffff00,&local_70,param_4,param_6);
                        local_90 = local_c8;
                        goto LAB_180003c36;
                      }
                      piVar13 = piVar13 + 1;
                      local_90 = local_c8;
                    }
                    uVar16 = (int)uVar8 + 1;
                    uVar8 = (ulonglong)uVar16;
                  } while (uVar16 != uVar1);
                }
                param_2 = local_b8;
              }
            }
LAB_180003c36:
            uVar17 = (undefined4)((ulonglong)in_stack_ffffffffffffff00 >> 0x20);
            uVar15 = uVar15 + 1;
          } while (uVar15 < local_78);
        }
      }
      if ((0x19930520 < (*param_5 & 0x1fffffff)) &&
         (((uVar15 = param_5[8], uVar15 != 0 && (lVar9 = FUN_1800032b0(), lVar9 + (int)uVar15 != 0))
          || (((param_5[9] & 4) != 0 && (bVar5 = FUN_180002d10(param_4,(longlong)param_5), !bVar5)))
          ))) {
        if ((param_5[9] & 4) != 0) {
          pvVar7 = FUN_180002980();
          *(int **)((longlong)pvVar7 + 0x20) = param_1;
          pvVar7 = FUN_180002980();
          *(ULONG_PTR *)((longlong)pvVar7 + 0x28) = local_d0;
                    /* WARNING: Subroutine does not return */
          FUN_180005b0c();
        }
        uVar15 = param_5[8];
        if (uVar15 == 0) {
          piVar13 = (int *)0x0;
        }
        else {
          lVar9 = FUN_1800032b0();
          piVar13 = (int *)((int)uVar15 + lVar9);
        }
        cVar4 = FUN_180004930((longlong)param_1,piVar13);
        if (cVar4 == '\0') {
          plVar11 = FUN_180002eb0(param_2,param_4,(longlong)param_5,&local_a8);
          FUN_1800030e0(param_2,(ULONG_PTR)param_1,local_d0,(ULONG_PTR)plVar11,0,(ULONG_PTR)param_5,
                        -1,CONCAT44(uVar17,0xffffffff),0,param_4,param_6);
        }
      }
    }
    else if (param_5[3] != 0) {
      if (param_6 != 0) goto LAB_180003de1;
      FUN_180003df0(param_1,param_2,local_d0,param_4,(ULONG_PTR)param_5,local_d8);
    }
    pvVar7 = FUN_180002980();
    if (*(longlong *)((longlong)pvVar7 + 0x38) == 0) {
      return;
    }
  }
LAB_180003de1:
                    /* WARNING: Subroutine does not return */
  abort();
}



/* ===== 180003df0 FUN_180003df0 ===== */


void FUN_180003df0(int *param_1,longlong *param_2,ULONG_PTR param_3,ulonglong *param_4,
                  ULONG_PTR param_5,int param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  PVOID pvVar4;
  PVOID pvVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  byte *pbVar9;
  uint uVar10;
  int *piVar11;
  undefined4 in_stack_ffffffffffffff64;
  longlong local_70;
  ULONG_PTR local_68;
  ulonglong local_60;
  longlong *local_58;
  uint local_50;
  uint local_40;
  
  if (*param_1 != -0x7ffffffd) {
    pvVar4 = FUN_180002980();
    if (*(longlong *)((longlong)pvVar4 + 0x10) != 0) {
      pvVar4 = FUN_180002980();
      pvVar4 = *(PVOID *)((longlong)pvVar4 + 0x10);
      pvVar5 = EncodePointer((PVOID)0x0);
      if ((((pvVar4 != pvVar5) && (*param_1 != -0x1fbcb0b3)) && (*param_1 != -0x1fbcbcae)) &&
         (uVar6 = FUN_180002cc0(param_1,param_2,param_3), (int)uVar6 != 0)) {
        return;
      }
    }
    local_60 = param_4[1];
    local_68 = param_5;
    if (*(int *)(param_5 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    FUN_180002fb0(&local_58,&local_68,param_6,param_4,param_5);
    uVar10 = local_50;
    if (local_50 < local_40) {
      do {
        piVar11 = (int *)((longlong)*(int *)(*local_58 + 0x10) + (ulonglong)uVar10 * 0x14 +
                         local_58[1]);
        iVar1 = *piVar11;
        if ((iVar1 <= param_6) && (param_6 <= piVar11[1])) {
          iVar2 = piVar11[2];
          pbVar9 = (byte *)((param_4[1] - 0x14) +
                           (longlong)piVar11[4] + (ulonglong)(uint)piVar11[3] * 0x14);
          iVar3 = *(int *)(pbVar9 + 4);
          if ((iVar3 != 0) && (lVar7 = FUN_1800032b0(), lVar7 + iVar3 != 0)) {
            iVar3 = *(int *)(pbVar9 + 4);
            if (iVar3 == 0) {
              lVar7 = 0;
            }
            else {
              lVar7 = FUN_1800032b0();
              lVar7 = lVar7 + iVar3;
            }
            if (*(char *)(lVar7 + 0x10) != '\0') goto LAB_180003ffd;
          }
          if ((*pbVar9 & 0x40) == 0) {
            plVar8 = FUN_180002eb0(param_2,param_4,param_5,&local_70);
            lVar7 = FUN_1800032b0();
            FUN_1800030e0(param_2,(ULONG_PTR)param_1,param_3,(ULONG_PTR)plVar8,
                          *(int *)(pbVar9 + 0xc) + lVar7,param_5,iVar1,
                          CONCAT44(in_stack_ffffffffffffff64,iVar2),pbVar9,param_4,0);
          }
        }
LAB_180003ffd:
        uVar10 = uVar10 + 1;
      } while (uVar10 < local_40);
    }
  }
  return;
}



/* ===== 180004050 FUN_180004050 ===== */


undefined8 FUN_180004050(byte *param_1,byte *param_2,uint *param_3)

{
  char cVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  char *pcVar7;
  
  iVar3 = *(int *)(param_1 + 4);
  if (iVar3 == 0) {
    return 1;
  }
  lVar5 = FUN_1800032b0();
  if (lVar5 + iVar3 == 0) {
    return 1;
  }
  iVar3 = *(int *)(param_1 + 4);
  if (iVar3 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = FUN_1800032b0();
    lVar5 = lVar5 + iVar3;
  }
  if (*(char *)(lVar5 + 0x10) == '\0') {
    return 1;
  }
  if (((*param_1 & 0x80) != 0) && ((*param_2 & 0x10) != 0)) {
    return 1;
  }
  iVar3 = *(int *)(param_1 + 4);
  if (iVar3 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = FUN_1800032b0();
    lVar5 = lVar5 + iVar3;
  }
  lVar6 = FUN_1800032d0();
  if (lVar5 != *(int *)(param_2 + 4) + lVar6) {
    iVar3 = *(int *)(param_1 + 4);
    if (iVar3 == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = FUN_1800032b0();
      lVar5 = lVar5 + iVar3;
    }
    iVar3 = *(int *)(param_2 + 4);
    lVar6 = FUN_1800032d0();
    pcVar7 = (char *)(lVar5 + 0x10);
    lVar5 = ((longlong)iVar3 + 0x10 + lVar6) - (longlong)pcVar7;
    do {
      cVar1 = *pcVar7;
      cVar2 = pcVar7[lVar5];
      if (cVar1 != cVar2) break;
      pcVar7 = pcVar7 + 1;
    } while (cVar2 != '\0');
    if (cVar1 != cVar2) {
      return 0;
    }
  }
  if ((((((*param_2 & 2) == 0) || ((*param_1 & 8) != 0)) &&
       ((uVar4 = *param_3, (uVar4 & 1) == 0 || ((*param_1 & 1) != 0)))) &&
      (((uVar4 & 4) == 0 || ((*param_1 & 4) != 0)))) &&
     (((uVar4 & 2) == 0 || ((*param_1 & 2) != 0)))) {
    return 1;
  }
  return 0;
}



/* ===== 180004180 FUN_180004180 ===== */


undefined8
FUN_180004180(int *param_1,longlong *param_2,ULONG_PTR param_3,ulonglong *param_4,uint *param_5,
             int param_6,undefined8 param_7,byte param_8)

{
  uint uVar1;
  int iVar2;
  PVOID pvVar3;
  longlong lVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined8 in_stack_ffffffffffffffb0;
  undefined4 uVar7;
  
  uVar7 = (undefined4)((ulonglong)in_stack_ffffffffffffffb0 >> 0x20);
  __except_validate_context_record(param_3);
  pvVar3 = FUN_180002980();
  if ((*(int *)((longlong)pvVar3 + 0x40) == 0) && (iVar2 = *param_1, iVar2 != -0x1f928c9d)) {
    if (iVar2 == -0x7fffffd7) {
      if (param_1[6] == 0xf) {
        bVar6 = *(longlong *)(param_1 + 0x18) == 0x19930520;
        goto LAB_1800041d9;
      }
    }
    else {
      bVar6 = iVar2 == -0x7fffffda;
LAB_1800041d9:
      if (bVar6) goto LAB_1800041f3;
    }
    if ((0x19930521 < (*param_5 & 0x1fffffff)) && ((param_5[9] & 1) != 0)) {
      return 1;
    }
  }
LAB_1800041f3:
  if ((param_1[1] & 0x66U) == 0) {
    if ((param_5[3] == 0) &&
       ((((*param_5 & 0x1fffffff) < 0x19930521 || (uVar1 = param_5[8], uVar1 == 0)) ||
        (lVar4 = FUN_1800032b0(), lVar4 + (int)uVar1 == 0)))) {
      if ((*param_5 & 0x1fffffff) < 0x19930522) {
        return 1;
      }
      if ((param_5[9] & 4) == 0) {
        return 1;
      }
    }
    if (((*param_1 == -0x1f928c9d) && (2 < (uint)param_1[6])) &&
       ((0x19930522 < (uint)param_1[8] &&
        ((iVar2 = *(int *)(*(longlong *)(param_1 + 0xc) + 8), iVar2 != 0 &&
         (lVar4 = FUN_1800032d0(), lVar4 + iVar2 != 0)))))) {
      uVar5 = (*(code *)PTR__guard_dispatch_icall_18000f258)
                        (param_1,param_2,param_3,param_4,param_5,param_6,param_7,
                         CONCAT44(uVar7,(uint)param_8));
      return uVar5;
    }
    FUN_180003840(param_1,param_2,param_3,param_4,param_5,param_8);
    return 1;
  }
  if (param_5[1] == 0) {
    return 1;
  }
  if (param_6 != 0) {
    return 1;
  }
  if ((param_1[1] & 0x20U) == 0) {
LAB_18000428d:
    FUN_180002d80(param_2,param_4,(longlong)param_5);
    return 1;
  }
  if (*param_1 == -0x7fffffda) {
    iVar2 = FUN_180003530((longlong)param_5,(longlong)param_4,param_4[4]);
    if ((-2 < iVar2) && (iVar2 < (int)param_5[1])) {
      FUN_180004780(param_2,param_4,(longlong)param_5,iVar2);
      return 1;
    }
  }
  else {
    if (*param_1 != -0x7fffffd7) goto LAB_18000428d;
    iVar2 = param_1[0xe];
    if ((-2 < iVar2) && (iVar2 < (int)param_5[1])) {
      FUN_180004780(*(longlong **)(param_1 + 10),param_4,(longlong)param_5,iVar2);
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



/* ===== 1800043b0 FUN_1800043b0 ===== */


void FUN_1800043b0(int *param_1,longlong *param_2,ULONG_PTR param_3,ulonglong *param_4,uint *param_5
                  ,int param_6,undefined8 param_7,byte param_8)

{
  FUN_180004180(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}



/* ===== 1800043c0 FUN_1800043c0 ===== */


undefined8 * FUN_1800043c0(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_180004b90((longlong *)(param_2 + 8),param_1 + 1);
  *param_1 = std::bad_exception::vftable;
  return param_1;
}



/* ===== 180004400 FUN_180004400 ===== */


undefined8 * FUN_180004400(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[1] = "bad exception";
  *param_1 = std::bad_exception::vftable;
  return param_1;
}



/* ===== 180004430 exception ===== */


/* Library Function - Single Match
    public: __cdecl std::exception::exception(class std::exception const & __ptr64) __ptr64
   
   Library: Visual Studio 2019 Release */

exception * __thiscall std::exception::exception(exception *this,exception *param_1)

{
  *(undefined ***)this = vftable;
  *(longlong *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  FUN_180004b90((longlong *)(param_1 + 8),(longlong *)(this + 8));
  return this;
}



/* ===== 180004490 FUN_180004490 ===== */


undefined8 * FUN_180004490(undefined8 *param_1,uint param_2)

{
  *param_1 = std::exception::vftable;
  FUN_180004c30(param_1 + 1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_180006a50(param_1);
  }
  return param_1;
}



/* ===== 1800044e0 FUN_1800044e0 ===== */


undefined8 FUN_1800044e0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int *piVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  PVOID pvVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 local_48 [2];
  
  pvVar7 = FUN_180002980();
  uVar1 = *(undefined8 *)((longlong)pvVar7 + 0x28);
  pvVar7 = FUN_180002980();
  uVar2 = *(undefined8 *)((longlong)pvVar7 + 0x20);
  piVar3 = *(int **)(param_1 + 0x50);
  lVar4 = *(longlong *)(param_1 + 0x48);
  lVar5 = *(longlong *)(param_1 + 0x40);
  plVar6 = *(longlong **)(param_1 + 0x28);
  __except_validate_context_record(lVar5);
  pvVar7 = FUN_180002980();
  *(int **)((longlong)pvVar7 + 0x20) = piVar3;
  pvVar7 = FUN_180002980();
  *(longlong *)((longlong)pvVar7 + 0x28) = lVar5;
  pvVar7 = FUN_180002980();
  puVar8 = _CreateFrameInfo(local_48,*(undefined8 *)(*(longlong *)((longlong)pvVar7 + 0x20) + 0x28))
  ;
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_180002980();
  }
  uVar9 = _CallSettingFrame();
  FUN_180003250((longlong)puVar8);
  if ((((*piVar3 == -0x1f928c9d) && (piVar3[6] == 4)) && (piVar3[8] + 0xe66cfae0U < 3)) &&
     (uVar10 = FUN_180002760(*(longlong *)(piVar3 + 10)), (int)uVar10 != 0)) {
    __DestructExceptionObject(piVar3);
  }
  pvVar7 = FUN_180002980();
  *(undefined8 *)((longlong)pvVar7 + 0x20) = uVar2;
  pvVar7 = FUN_180002980();
  *(undefined8 *)((longlong)pvVar7 + 0x28) = uVar1;
  *(undefined8 *)((longlong)*(int *)(lVar4 + 0x1c) + *plVar6) = 0xfffffffffffffffe;
  return uVar9;
}



/* ===== 1800046f0 FUN_1800046f0 ===== */


undefined8 FUN_1800046f0(undefined8 *param_1,longlong param_2,undefined4 *param_3)

{
  int *piVar1;
  PVOID pvVar2;
  
  piVar1 = (int *)*param_1;
  *param_3 = 0;
  if (*piVar1 == -0x1f928c9d) {
    if (((piVar1[6] == 4) && (piVar1[8] + 0xe66cfae0U < 3)) &&
       (*(longlong *)(piVar1 + 10) == *(longlong *)(param_2 + 0x28))) {
      *param_3 = 1;
    }
    if (((*piVar1 == -0x1f928c9d) && (piVar1[6] == 4)) &&
       ((piVar1[8] + 0xe66cfae0U < 3 && (*(longlong *)(piVar1 + 0xc) == 0)))) {
      pvVar2 = FUN_180002980();
      *(undefined4 *)((longlong)pvVar2 + 0x40) = 1;
      *param_3 = 1;
      return 1;
    }
  }
  return 0;
}



/* ===== 180004780 FUN_180004780 ===== */


void FUN_180004780(longlong *param_1,ulonglong *param_2,longlong param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  PVOID pvVar4;
  longlong lVar5;
  longlong lVar6;
  
  uVar3 = FUN_1800032b0();
  iVar2 = FUN_1800033b0(param_1,param_2,param_3);
  pvVar4 = FUN_180002980();
  *(int *)((longlong)pvVar4 + 0x30) = *(int *)((longlong)pvVar4 + 0x30) + 1;
  while ((iVar2 != -1 && (param_4 < iVar2))) {
    if ((iVar2 < 0) || (*(int *)(param_3 + 4) <= iVar2)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar5 = FUN_1800032b0();
    lVar6 = (longlong)iVar2 * 8;
    iVar2 = *(int *)(*(int *)(param_3 + 8) + lVar6 + lVar5);
    iVar1 = *(int *)(param_3 + 8);
    lVar5 = FUN_1800032b0();
    if (*(int *)(lVar5 + iVar1 + 4 + lVar6) != 0) {
      iVar1 = *(int *)(param_3 + 8);
      lVar5 = FUN_1800032b0();
      iVar1 = *(int *)(lVar5 + iVar1 + 4 + lVar6);
      lVar5 = FUN_1800032b0();
      if (lVar5 + iVar1 != 0) {
        FUN_180003470(param_1,param_2,param_3,iVar2);
        iVar1 = *(int *)(param_3 + 8);
        lVar5 = FUN_1800032b0();
        if (*(int *)(lVar5 + iVar1 + 4 + lVar6) != 0) {
          FUN_1800032b0();
          FUN_1800032b0();
        }
        _CallSettingFrame();
        FUN_1800032f0(uVar3);
      }
    }
  }
  pvVar4 = FUN_180002980();
  if (0 < *(int *)((longlong)pvVar4 + 0x30)) {
    pvVar4 = FUN_180002980();
    *(int *)((longlong)pvVar4 + 0x30) = *(int *)((longlong)pvVar4 + 0x30) + -1;
  }
  if ((iVar2 != -1) && (param_4 < iVar2)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  FUN_180003470(param_1,param_2,param_3,iVar2);
  return;
}



/* ===== 180004930 FUN_180004930 ===== */


undefined1 FUN_180004930(longlong param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  undefined1 uVar8;
  int *piVar9;
  int iVar10;
  undefined1 local_res10;
  
  if (param_2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar8 = 0;
  iVar10 = 0;
  local_res10 = 0;
  if (0 < *param_2) {
    do {
      iVar7 = *(int *)(*(longlong *)(param_1 + 0x30) + 0xc);
      lVar4 = FUN_1800032d0();
      piVar9 = (int *)((longlong)iVar7 + lVar4 + 4);
      iVar7 = *(int *)(*(longlong *)(param_1 + 0x30) + 0xc);
      lVar4 = FUN_1800032d0();
      iVar7 = *(int *)(lVar4 + iVar7);
      if (0 < iVar7) {
        do {
          iVar1 = *piVar9;
          lVar4 = FUN_1800032d0();
          puVar3 = *(uint **)(param_1 + 0x30);
          iVar2 = param_2[1];
          lVar5 = FUN_1800032b0();
          uVar6 = FUN_180004050((byte *)(lVar5 + (longlong)iVar10 * 0x14 + (longlong)iVar2),
                                (byte *)(iVar1 + lVar4),puVar3);
          if ((int)uVar6 != 0) {
            uVar8 = 1;
            local_res10 = 1;
            goto LAB_1800049fc;
          }
          iVar7 = iVar7 + -1;
          piVar9 = piVar9 + 1;
        } while (0 < iVar7);
        uVar8 = local_res10;
      }
LAB_1800049fc:
      iVar10 = iVar10 + 1;
    } while (iVar10 < *param_2);
  }
  return uVar8;
}



/* ===== 180004a40 FUN_180004a40 ===== */


ulonglong FUN_180004a40(int *param_1)

{
  int iVar1;
  uint uVar2;
  ulonglong in_RAX;
  longlong lVar3;
  undefined4 extraout_var;
  int iVar4;
  
  iVar4 = 0;
  if (0 < *param_1) {
    do {
      iVar1 = param_1[1];
      lVar3 = FUN_1800032b0();
      if (*(int *)(lVar3 + iVar1 + 4 + (longlong)iVar4 * 0x14) == 0) {
        lVar3 = 0;
      }
      else {
        iVar1 = param_1[1];
        lVar3 = FUN_1800032b0();
        iVar1 = *(int *)(lVar3 + (longlong)iVar4 * 0x14 + 4 + (longlong)iVar1);
        lVar3 = FUN_1800032b0();
        lVar3 = lVar3 + iVar1;
      }
      uVar2 = FUN_1800025e0(lVar3 + 8,0x180019a68);
      in_RAX = CONCAT44(extraout_var,uVar2);
      if (uVar2 == 0) {
        return CONCAT71((int7)(in_RAX >> 8),1);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *param_1);
  }
  return in_RAX & 0xffffffffffffff00;
}



/* ===== 180004ad0 FUN_180004ad0 ===== */


void FUN_180004ad0(undefined8 param_1,undefined *UNRECOVERED_JUMPTABLE,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000180004ad6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)(param_1,param_3);
  return;
}



/* ===== 180004ae0 FUN_180004ae0 ===== */


void FUN_180004ae0(undefined8 param_1,undefined *UNRECOVERED_JUMPTABLE,undefined8 param_3,
                  undefined4 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x000180004aec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)(param_1,param_3,param_4);
  return;
}



/* ===== 180004af0 FUN_180004af0 ===== */


char * FUN_180004af0(longlong param_1)

{
  char *pcVar1;
  
  pcVar1 = "Unknown exception";
  if (*(char **)(param_1 + 8) != (char *)0x0) {
    pcVar1 = *(char **)(param_1 + 8);
  }
  return pcVar1;
}



/* ===== 180004b50 _CallSettingFrame ===== */


/* Library Function - Single Match
    _CallSettingFrame
   
   Library: Visual Studio */

void _CallSettingFrame(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)FUN_180002880();
  (*pcVar1)();
  FUN_1800028b0();
  FUN_180002880();
  return;
}



/* ===== 180004b90 FUN_180004b90 ===== */


void FUN_180004b90(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  char *pcVar3;
  
  if (((char)param_1[1] == '\0') || (*param_1 == 0)) {
    *param_2 = *param_1;
    *(undefined1 *)(param_2 + 1) = 0;
    return;
  }
  lVar1 = -1;
  do {
    lVar2 = lVar1;
    lVar1 = lVar2 + 1;
  } while (*(char *)(*param_1 + 1 + lVar2) != '\0');
  pcVar3 = _malloc_base(lVar2 + 2U);
  if (pcVar3 != (char *)0x0) {
    FUN_180005b50(pcVar3,lVar2 + 2U,*param_1);
    *param_2 = (longlong)pcVar3;
    *(undefined1 *)(param_2 + 1) = 1;
  }
  thunk_FUN_180006a50((LPVOID)0x0);
  return;
}



/* ===== 180004c30 FUN_180004c30 ===== */


void FUN_180004c30(undefined8 *param_1)

{
  if (*(char *)(param_1 + 1) == '\0') {
    *(undefined1 *)(param_1 + 1) = 0;
    *param_1 = 0;
    return;
  }
  thunk_FUN_180006a50((LPVOID)*param_1);
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = 0;
  return;
}



/* ===== 180004c70 FUN_180004c70 ===== */


void FUN_180004c70(longlong *param_1,byte *param_2)

{
  ULONG_PTR UVar1;
  PVOID local_38;
  ULONG_PTR local_30;
  longlong *local_28;
  byte *local_20;
  PVOID local_18;
  
  UVar1 = 0x19930520;
  if ((param_2 != (byte *)0x0) && ((*param_2 & 0x10) != 0)) {
    param_2 = *(byte **)(*(longlong *)(*param_1 + -8) + 0x30);
    (*(code *)PTR__guard_dispatch_icall_18000f258)();
  }
  local_38 = (PVOID)0x0;
  if (param_2 != (byte *)0x0) {
    local_38 = RtlPcToFileHeader(param_2,&local_38);
    if (((*param_2 & 8) != 0) || (local_38 == (PVOID)0x0)) {
      UVar1 = 0x1994000;
    }
  }
  local_30 = UVar1;
  local_28 = param_1;
  local_20 = param_2;
  local_18 = local_38;
  RaiseException(0xe06d7363,1,4,&local_30);
  return;
}



/* ===== 180004d1c FUN_180004d1c ===== */


/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_180004d1c(undefined8 *param_1,undefined8 *param_2)

{
  if (param_1 != param_2) {
    do {
      if ((code *)*param_1 != (code *)0x0) {
        (*(code *)*param_1)();
      }
      param_1 = param_1 + 1;
    } while (param_1 != param_2);
  }
  return;
}



/* ===== 180004d54 FUN_180004d54 ===== */


/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 FUN_180004d54(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  while( true ) {
    if (param_1 == param_2) {
      return 0;
    }
    if (((code *)*param_1 != (code *)0x0) && (uVar1 = (*(code *)*param_1)(), (int)uVar1 != 0))
    break;
    param_1 = param_1 + 1;
  }
  return uVar1;
}



/* ===== 180004d90 FUN_180004d90 ===== */


undefined4 FUN_180004d90(int param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  if (param_1 == -0x1f928c9d) {
    uVar1 = FUN_180004da4(-0x1f928c9d,param_2);
    return uVar1;
  }
  return 0;
}



/* ===== 180004da4 FUN_180004da4 ===== */


/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined4 FUN_180004da4(int param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int *piVar2;
  code *pcVar3;
  undefined8 uVar4;
  __acrt_ptd *p_Var5;
  int *piVar6;
  int *piVar7;
  undefined4 uVar8;
  
  p_Var5 = FUN_180006210();
  if (p_Var5 != (__acrt_ptd *)0x0) {
    piVar2 = *(int **)p_Var5;
    for (piVar6 = piVar2; piVar6 != piVar2 + 0x30; piVar6 = piVar6 + 4) {
      if (*piVar6 == param_1) {
        if (piVar6 == (int *)0x0) {
          return 0;
        }
        pcVar3 = *(code **)(piVar6 + 2);
        if (pcVar3 == (code *)0x0) {
          return 0;
        }
        if (pcVar3 == (code *)0x5) {
          piVar6[2] = 0;
          piVar6[3] = 0;
          return 1;
        }
        if (pcVar3 != (code *)0x1) {
          uVar4 = *(undefined8 *)(p_Var5 + 8);
          *(undefined8 *)(p_Var5 + 8) = param_2;
          if (piVar6[1] == 8) {
            for (piVar7 = piVar2 + 0xc; piVar7 != piVar2 + 0x30; piVar7 = piVar7 + 4) {
              piVar7[2] = 0;
              piVar7[3] = 0;
            }
            uVar1 = *(undefined4 *)(p_Var5 + 0x10);
            if (*piVar6 == -0x3fffff73) {
              uVar8 = 0x82;
LAB_180004ee2:
              *(undefined4 *)(p_Var5 + 0x10) = uVar8;
            }
            else {
              if (*piVar6 == -0x3fffff72) {
                uVar8 = 0x83;
                goto LAB_180004ee2;
              }
              if (*piVar6 == -0x3fffff71) {
                uVar8 = 0x86;
                goto LAB_180004ee2;
              }
              if (*piVar6 == -0x3fffff70) {
                uVar8 = 0x81;
                goto LAB_180004ee2;
              }
              if (*piVar6 == -0x3fffff6f) {
                uVar8 = 0x84;
                goto LAB_180004ee2;
              }
              if (*piVar6 == -0x3fffff6e) {
                uVar8 = 0x8a;
                goto LAB_180004ee2;
              }
              if (*piVar6 == -0x3fffff6d) {
                uVar8 = 0x85;
                goto LAB_180004ee2;
              }
              if (*piVar6 == -0x3ffffd4c) {
                uVar8 = 0x8e;
                goto LAB_180004ee2;
              }
              uVar8 = uVar1;
              if (*piVar6 == -0x3ffffd4b) {
                uVar8 = 0x8d;
                goto LAB_180004ee2;
              }
            }
            (*pcVar3)(8,uVar8);
            *(undefined4 *)(p_Var5 + 0x10) = uVar1;
          }
          else {
            piVar6[2] = 0;
            piVar6[3] = 0;
            (*pcVar3)(piVar6[1]);
          }
          *(undefined8 *)(p_Var5 + 8) = uVar4;
        }
        return 0xffffffff;
      }
    }
  }
  return 0;
}



/* ===== 180004f10 operator()<> ===== */


/* Library Function - Multiple Matches With Same Base Name
    public: void __cdecl __crt_seh_guarded_call<void>::operator()<class
   <lambda_99476a1ad63dd22509b5d3e65b0ffc95>,class <lambda_ad1ced32f4ac17aa236e5ef05d6b3b7c> &
   __ptr64,class <lambda_f7424dd8d45958661754dc4f2697e9c3> >(class
   <lambda_99476a1ad63dd22509b5d3e65b0ffc95> && __ptr64,class
   <lambda_ad1ced32f4ac17aa236e5ef05d6b3b7c> & __ptr64,class
   <lambda_f7424dd8d45958661754dc4f2697e9c3> && __ptr64) __ptr64
    public: void __cdecl __crt_seh_guarded_call<void>::operator()<class
   <lambda_d80eeec6fff315bfe5c115232f3240e3>,class <lambda_6e4b09c48022b2350581041d5f6b0c4c> &
   __ptr64,class <lambda_2358e3775559c9db80273638284d5e45> >(class
   <lambda_d80eeec6fff315bfe5c115232f3240e3> && __ptr64,class
   <lambda_6e4b09c48022b2350581041d5f6b0c4c> & __ptr64,class
   <lambda_2358e3775559c9db80273638284d5e45> && __ptr64) __ptr64
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void operator()<>(undefined8 param_1,int *param_2,undefined8 *param_3,int *param_4)

{
  __acrt_lock(*param_2);
  FUN_180004f48(param_3);
  __acrt_unlock(*param_4);
  return;
}



/* ===== 180004f48 FUN_180004f48 ===== */


/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_180004f48(undefined8 *param_1)

{
  byte bVar1;
  undefined *puVar2;
  
  if (DAT_1800dbce8 != '\0') {
    return;
  }
  LOCK();
  DAT_1800dbcd8 = 1;
  UNLOCK();
  if (*(int *)*param_1 == 0) {
    if (DAT_1800dbce0 != DAT_180019040) {
      bVar1 = (byte)DAT_180019040 & 0x3f;
      (*(code *)((DAT_180019040 ^ DAT_1800dbce0) >> bVar1 |
                (DAT_180019040 ^ DAT_1800dbce0) << 0x40 - bVar1))(0,0,0);
    }
    puVar2 = &DAT_1800dbe18;
  }
  else {
    if (*(int *)*param_1 != 1) goto LAB_180004fb7;
    puVar2 = &DAT_1800dbe30;
  }
  FUN_1800058f0(puVar2);
LAB_180004fb7:
  if (*(int *)*param_1 == 0) {
    FUN_180004d1c((undefined8 *)&DAT_18000f2b8,(undefined8 *)&DAT_18000f2d8);
  }
  FUN_180004d1c((undefined8 *)&DAT_18000f2e0,(undefined8 *)&DAT_18000f2e8);
  if (*(int *)param_1[1] == 0) {
    DAT_1800dbce8 = '\x01';
    *(undefined1 *)param_1[2] = 1;
  }
  return;
}



/* ===== 180005008 FUN_180005008 ===== */


void FUN_180005008(uint param_1,undefined4 param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  HMODULE pHVar3;
  undefined7 extraout_var;
  ulonglong uVar4;
  int *piVar5;
  undefined4 local_res10 [2];
  int local_res18 [2];
  undefined1 local_res20 [8];
  undefined1 local_38 [4];
  int local_34 [3];
  undefined8 local_28;
  undefined4 *local_20;
  int *local_18;
  undefined1 *local_10;
  
  local_28 = 0xfffffffffffffffe;
  local_res10[0] = param_2;
  local_res18[0] = param_3;
  if (param_3 == 0) {
    pHVar3 = GetModuleHandleW((LPCWSTR)0x0);
    if ((((pHVar3 != (HMODULE)0x0) && ((short)pHVar3->unused == 0x5a4d)) &&
        (piVar5 = (int *)((longlong)&pHVar3->unused + (longlong)pHVar3[0xf].unused),
        *piVar5 == 0x4550)) &&
       ((((short)piVar5[6] == 0x20b && (0xe < (uint)piVar5[0x21])) && (piVar5[0x3e] != 0)))) {
      FUN_18000511c(param_1);
    }
  }
  local_res20[0] = 0;
  local_20 = local_res10;
  local_18 = local_res18;
  local_10 = local_res20;
  local_34[0] = 2;
  local_34[1] = 2;
  operator()<>(local_38,local_34 + 1,&local_20,local_34);
  if (local_res18[0] == 0) {
    bVar2 = FUN_180006450();
    if ((int)CONCAT71(extraout_var,bVar2) == 1) {
      bVar2 = false;
    }
    else {
      uVar4 = FUN_18000641c();
      bVar2 = (char)uVar4 == '\0';
    }
    if (local_res18[0] == 0) {
      FUN_1800050ec(param_1,bVar2);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}



/* ===== 1800050ec FUN_1800050ec ===== */


void FUN_1800050ec(uint param_1,char param_2)

{
  HANDLE hProcess;
  
  if (param_2 != '\0') {
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,param_1);
  }
  FUN_18000511c(param_1);
                    /* WARNING: Subroutine does not return */
  ExitProcess(param_1);
}



/* ===== 18000511c FUN_18000511c ===== */


/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_18000511c(uint param_1)

{
  BOOL BVar1;
  FARPROC pFVar2;
  HMODULE local_res10 [3];
  
  local_res10[0] = (HMODULE)0x0;
  BVar1 = GetModuleHandleExW(0,L"mscoree.dll",local_res10);
  if ((BVar1 != 0) &&
     (pFVar2 = GetProcAddress(local_res10[0],"CorExitProcess"), pFVar2 != (FARPROC)0x0)) {
    (*pFVar2)((ulonglong)param_1);
  }
  if (local_res10[0] != (HMODULE)0x0) {
    FreeLibrary(local_res10[0]);
  }
  return;
}



/* ===== 180005180 FUN_180005180 ===== */


void FUN_180005180(undefined8 param_1)

{
  DAT_1800dbce0 = param_1;
  return;
}



/* ===== 180005188 FUN_180005188 ===== */


void FUN_180005188(void)

{
  FUN_180005008(0,0,1);
  return;
}



/* ===== 180005198 FUN_180005198 ===== */


void FUN_180005198(uint param_1)

{
  FUN_180005008(param_1,2,0);
  return;
}



/* ===== 1800051a4 FUN_1800051a4 ===== */


undefined4 FUN_1800051a4(void)

{
  return DAT_1800dbcd8;
}



/* ===== 1800051ac FUN_1800051ac ===== */


void FUN_1800051ac(char *param_1,undefined8 *param_2,char *param_3,longlong *param_4,
                  longlong *param_5)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  
  *param_5 = 0;
  *param_4 = 1;
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = param_3;
    param_2 = param_2 + 1;
  }
  bVar2 = false;
  do {
    if (*param_1 == '\"') {
      bVar2 = !bVar2;
      cVar3 = '\"';
      pcVar6 = param_1 + 1;
    }
    else {
      *param_5 = *param_5 + 1;
      if (param_3 != (char *)0x0) {
        *param_3 = *param_1;
        param_3 = param_3 + 1;
      }
      cVar3 = *param_1;
      pcVar6 = param_1 + 1;
      iVar5 = FUN_1800083cc((int)cVar3);
      if (iVar5 != 0) {
        *param_5 = *param_5 + 1;
        if (param_3 != (char *)0x0) {
          *param_3 = *pcVar6;
          param_3 = param_3 + 1;
        }
        pcVar6 = param_1 + 2;
      }
      if (cVar3 == '\0') {
        pcVar6 = pcVar6 + -1;
        goto LAB_18000525e;
      }
    }
    param_1 = pcVar6;
  } while ((bVar2) || ((cVar3 != ' ' && (cVar3 != '\t'))));
  if (param_3 != (char *)0x0) {
    param_3[-1] = '\0';
  }
LAB_18000525e:
  bVar2 = false;
  while (cVar3 = *pcVar6, cVar3 != '\0') {
    while ((cVar3 == ' ' || (cVar3 == '\t'))) {
      pcVar6 = pcVar6 + 1;
      cVar3 = *pcVar6;
    }
    if (cVar3 == '\0') break;
    if (param_2 != (undefined8 *)0x0) {
      *param_2 = param_3;
      param_2 = param_2 + 1;
    }
    *param_4 = *param_4 + 1;
    while( true ) {
      bVar1 = true;
      uVar4 = 0;
      while( true ) {
        if (*pcVar6 != '\\') break;
        pcVar6 = pcVar6 + 1;
        uVar4 = uVar4 + 1;
      }
      if (*pcVar6 == '\"') {
        if ((uVar4 & 1) == 0) {
          if ((bVar2) && (pcVar6[1] == '\"')) {
            pcVar6 = pcVar6 + 1;
          }
          else {
            bVar1 = false;
            bVar2 = !bVar2;
          }
        }
        uVar4 = uVar4 >> 1;
      }
      while (uVar4 != 0) {
        uVar4 = uVar4 - 1;
        if (param_3 != (char *)0x0) {
          *param_3 = '\\';
          param_3 = param_3 + 1;
        }
        *param_5 = *param_5 + 1;
      }
      cVar3 = *pcVar6;
      if ((cVar3 == '\0') || ((!bVar2 && ((cVar3 == ' ' || (cVar3 == '\t')))))) break;
      if (bVar1) {
        if (param_3 != (char *)0x0) {
          *param_3 = cVar3;
          param_3 = param_3 + 1;
        }
        iVar5 = FUN_1800083cc((int)*pcVar6);
        if (iVar5 != 0) {
          *param_5 = *param_5 + 1;
          pcVar6 = pcVar6 + 1;
          if (param_3 != (char *)0x0) {
            *param_3 = *pcVar6;
            param_3 = param_3 + 1;
          }
        }
        *param_5 = *param_5 + 1;
      }
      pcVar6 = pcVar6 + 1;
    }
    if (param_3 != (char *)0x0) {
      *param_3 = '\0';
      param_3 = param_3 + 1;
    }
    *param_5 = *param_5 + 1;
  }
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = 0;
  }
  *param_4 = *param_4 + 1;
  return;
}



/* ===== 18000536c __acrt_allocate_buffer_for_argv ===== */


/* Library Function - Single Match
    __acrt_allocate_buffer_for_argv
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

LPVOID __acrt_allocate_buffer_for_argv(ulonglong param_1,ulonglong param_2,ulonglong param_3)

{
  LPVOID pvVar1;
  
  if ((param_1 < 0x1fffffffffffffff) && (param_2 < 0xffffffffffffffff / param_3)) {
    if (param_2 * param_3 < ~(param_1 * 8)) {
      pvVar1 = _calloc_base(param_1 * 8 + param_2 * param_3,1);
      FUN_180006a50((LPVOID)0x0);
      return pvVar1;
    }
  }
  return (LPVOID)0x0;
}



/* ===== 1800053cc FUN_1800053cc ===== */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1800053cc(int param_1)

{
  longlong lVar1;
  longlong *plVar2;
  __acrt_ptd *p_Var3;
  longlong *plVar4;
  ulonglong uVar5;
  char *pcVar6;
  int iVar7;
  longlong *local_res10;
  ulonglong local_res18;
  ulonglong local_res20;
  
  iVar7 = 0;
  if (param_1 == 0) {
    return 0;
  }
  if (1 < param_1 - 1U) {
    p_Var3 = FUN_1800069ac();
    *(undefined4 *)p_Var3 = 0x16;
    FUN_180006804();
    return 0x16;
  }
  __acrt_initialize_multibyte();
  FUN_1800076e8((HMODULE)0x0,&DAT_1800dbcf0,0x104);
  _DAT_1800dc0d8 = &DAT_1800dbcf0;
  if ((DAT_1800dc0f8 == (char *)0x0) || (pcVar6 = DAT_1800dc0f8, *DAT_1800dc0f8 == '\0')) {
    pcVar6 = &DAT_1800dbcf0;
  }
  local_res18 = 0;
  local_res20 = 0;
  FUN_1800051ac(pcVar6,(undefined8 *)0x0,(char *)0x0,(longlong *)&local_res18,
                (longlong *)&local_res20);
  uVar5 = local_res18;
  plVar4 = __acrt_allocate_buffer_for_argv(local_res18,local_res20,1);
  if (plVar4 == (longlong *)0x0) {
    p_Var3 = FUN_1800069ac();
    iVar7 = 0xc;
    *(undefined4 *)p_Var3 = 0xc;
  }
  else {
    FUN_1800051ac(pcVar6,plVar4,(char *)(plVar4 + uVar5),(longlong *)&local_res18,
                  (longlong *)&local_res20);
    if (param_1 != 1) {
      local_res10 = (longlong *)0x0;
      uVar5 = thunk_FUN_180006e08(plVar4,&local_res10);
      plVar2 = local_res10;
      if ((int)uVar5 != 0) {
        FUN_180006a50(local_res10);
        local_res10 = (longlong *)0x0;
        FUN_180006a50(plVar4);
        return (int)uVar5;
      }
      _DAT_1800dc0e0 = 0;
      lVar1 = *local_res10;
      while (lVar1 != 0) {
        local_res10 = local_res10 + 1;
        _DAT_1800dc0e0 = _DAT_1800dc0e0 + 1;
        lVar1 = *local_res10;
      }
      local_res10 = (longlong *)0x0;
      DAT_1800dc0e8 = plVar2;
      FUN_180006a50((LPVOID)0x0);
      local_res10 = (longlong *)0x0;
      goto LAB_180005531;
    }
    _DAT_1800dc0e0 = (int)local_res18 + -1;
    DAT_1800dc0e8 = plVar4;
  }
  plVar4 = (longlong *)0x0;
LAB_180005531:
  FUN_180006a50(plVar4);
  return iVar7;
}



/* ===== 18000554c FUN_18000554c ===== */


undefined8 FUN_18000554c(void)

{
  undefined8 uVar1;
  char *pcVar2;
  undefined8 *puVar3;
  
  uVar1 = 0;
  if (DAT_1800dbdf8 == (undefined8 *)0x0) {
    __acrt_initialize_multibyte();
    pcVar2 = FUN_180008578();
    if (pcVar2 == (char *)0x0) {
      FUN_180006a50((LPVOID)0x0);
      uVar1 = 0xffffffff;
    }
    else {
      puVar3 = FUN_1800055c0(pcVar2);
      if (puVar3 == (undefined8 *)0x0) {
        uVar1 = 0xffffffff;
      }
      else {
        DAT_1800dbdf8 = puVar3;
        DAT_1800dbe10 = puVar3;
      }
      FUN_180006a50((LPVOID)0x0);
      FUN_180006a50(pcVar2);
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== 1800055c0 FUN_1800055c0 ===== */


undefined8 * FUN_1800055c0(char *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  char *pcVar4;
  undefined8 uVar5;
  char cVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  
  cVar6 = *param_1;
  lVar7 = 0;
  pcVar4 = param_1;
  while (cVar6 != '\0') {
    lVar1 = lVar7 + 1;
    if (cVar6 == '=') {
      lVar1 = lVar7;
    }
    lVar7 = -1;
    do {
      lVar2 = lVar7;
      lVar7 = lVar2 + 1;
    } while (pcVar4[lVar7] != '\0');
    pcVar4 = pcVar4 + lVar2 + 2;
    lVar7 = lVar1;
    cVar6 = *pcVar4;
  }
  puVar3 = _calloc_base(lVar7 + 1,8);
  if (puVar3 == (undefined8 *)0x0) {
LAB_180005623:
    FUN_180006a50((LPVOID)0x0);
    puVar3 = (undefined8 *)0x0;
  }
  else {
    puVar9 = puVar3;
    for (; *param_1 != '\0'; param_1 = param_1 + uVar8) {
      lVar7 = -1;
      do {
        lVar1 = lVar7;
        lVar7 = lVar1 + 1;
      } while (param_1[lVar7] != '\0');
      uVar8 = lVar1 + 2;
      if (*param_1 != '=') {
        pcVar4 = _calloc_base(uVar8,1);
        if (pcVar4 == (char *)0x0) {
          free_environment<>(puVar3);
          FUN_180006a50((LPVOID)0x0);
          goto LAB_180005623;
        }
        uVar5 = FUN_180005b50(pcVar4,uVar8,(longlong)param_1);
        if ((int)uVar5 != 0) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        *puVar9 = pcVar4;
        puVar9 = puVar9 + 1;
        FUN_180006a50((LPVOID)0x0);
      }
    }
    FUN_180006a50((LPVOID)0x0);
  }
  return puVar3;
}



/* ===== 1800056d4 free_environment<> ===== */


/* Library Function - Multiple Matches With Same Base Name
    void __cdecl free_environment<char>(char * __ptr64 * __ptr64 const)
    void __cdecl free_environment<wchar_t>(wchar_t * __ptr64 * __ptr64 const)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void free_environment<>(undefined8 *param_1)

{
  LPVOID pvVar1;
  undefined8 *puVar2;
  
  if (param_1 != (undefined8 *)0x0) {
    pvVar1 = (LPVOID)*param_1;
    puVar2 = param_1;
    while (pvVar1 != (LPVOID)0x0) {
      FUN_180006a50(pvVar1);
      puVar2 = puVar2 + 1;
      pvVar1 = (LPVOID)*puVar2;
    }
    FUN_180006a50(param_1);
  }
  return;
}



/* ===== 180005718 uninitialize_environment_internal<> ===== */


/* Library Function - Multiple Matches With Same Base Name
    void __cdecl uninitialize_environment_internal<char>(char * __ptr64 * __ptr64 & __ptr64)
    void __cdecl uninitialize_environment_internal<wchar_t>(wchar_t * __ptr64 * __ptr64 & __ptr64)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void uninitialize_environment_internal<>(undefined8 *param_1)

{
  if ((undefined8 *)*param_1 != DAT_1800dbe10) {
    free_environment<>((undefined8 *)*param_1);
  }
  return;
}



/* ===== 180005734 uninitialize_environment_internal<> ===== */


/* Library Function - Multiple Matches With Same Base Name
    void __cdecl uninitialize_environment_internal<char>(char * __ptr64 * __ptr64 & __ptr64)
    void __cdecl uninitialize_environment_internal<wchar_t>(wchar_t * __ptr64 * __ptr64 & __ptr64)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void uninitialize_environment_internal<>(undefined8 *param_1)

{
  if ((undefined8 *)*param_1 != DAT_1800dbe08) {
    free_environment<>((undefined8 *)*param_1);
  }
  return;
}



/* ===== 180005750 FUN_180005750 ===== */


void FUN_180005750(void)

{
  uninitialize_environment_internal<>(&DAT_1800dbdf8);
  uninitialize_environment_internal<>((undefined8 *)&DAT_1800dbe00);
  free_environment<>(DAT_1800dbe10);
  free_environment<>(DAT_1800dbe08);
  return;
}



/* ===== 180005794 thunk_FUN_18000554c ===== */


undefined8 thunk_FUN_18000554c(void)

{
  undefined8 uVar1;
  char *pcVar2;
  undefined8 *puVar3;
  
  uVar1 = 0;
  if (DAT_1800dbdf8 == (undefined8 *)0x0) {
    __acrt_initialize_multibyte();
    pcVar2 = FUN_180008578();
    if (pcVar2 == (char *)0x0) {
      FUN_180006a50((LPVOID)0x0);
      uVar1 = 0xffffffff;
    }
    else {
      puVar3 = FUN_1800055c0(pcVar2);
      if (puVar3 == (undefined8 *)0x0) {
        uVar1 = 0xffffffff;
      }
      else {
        DAT_1800dbdf8 = puVar3;
        DAT_1800dbe10 = puVar3;
      }
      FUN_180006a50((LPVOID)0x0);
      FUN_180006a50(pcVar2);
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== 18000579c operator()<> ===== */


/* Library Function - Multiple Matches With Same Base Name
    public: int __cdecl __crt_seh_guarded_call<int>::operator()<class
   <lambda_638799b9deba96c50f710eeac98168cd>,class <lambda_22ebabd17bc4fa466a2aca6d8deb888d> &
   __ptr64,class <lambda_a6f7d7db0129f75315ebf26d50c089f1> >(class
   <lambda_638799b9deba96c50f710eeac98168cd> && __ptr64,class
   <lambda_22ebabd17bc4fa466a2aca6d8deb888d> & __ptr64,class
   <lambda_a6f7d7db0129f75315ebf26d50c089f1> && __ptr64) __ptr64
    public: int __cdecl __crt_seh_guarded_call<int>::operator()<class
   <lambda_7777bce6b2f8c936911f934f8298dc43>,class <lambda_f03950bc5685219e0bcd2087efbe011e> &
   __ptr64,class <lambda_3883c3dff614d5e0c5f61bb1ac94921c> >(class
   <lambda_7777bce6b2f8c936911f934f8298dc43> && __ptr64,class
   <lambda_f03950bc5685219e0bcd2087efbe011e> & __ptr64,class
   <lambda_3883c3dff614d5e0c5f61bb1ac94921c> && __ptr64) __ptr64
    public: int __cdecl __crt_seh_guarded_call<int>::operator()<class
   <lambda_8b90c8310d35b3462fe809c44bbb350d>,class <lambda_c1ccdfe150d00dafd355d15f2a9edeaa> &
   __ptr64,class <lambda_e797892004ba4c0bb152531b9d8c3715> >(class
   <lambda_8b90c8310d35b3462fe809c44bbb350d> && __ptr64,class
   <lambda_c1ccdfe150d00dafd355d15f2a9edeaa> & __ptr64,class
   <lambda_e797892004ba4c0bb152531b9d8c3715> && __ptr64) __ptr64
    public: int __cdecl __crt_seh_guarded_call<int>::operator()<class
   <lambda_b8c45f8f788dd370798f47cfe8ac3a86>,class <lambda_4e60a939b0d047cfe11ddc22648dfba9> &
   __ptr64,class <lambda_332c3edc96d0294ec56c57d38c1cdfd5> >(class
   <lambda_b8c45f8f788dd370798f47cfe8ac3a86> && __ptr64,class
   <lambda_4e60a939b0d047cfe11ddc22648dfba9> & __ptr64,class
   <lambda_332c3edc96d0294ec56c57d38c1cdfd5> && __ptr64) __ptr64
     5 names - too many to list
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

ulonglong operator()<>(undefined8 param_1,int *param_2,undefined8 *param_3,int *param_4)

{
  ulonglong uVar1;
  
  __acrt_lock(*param_2);
  uVar1 = FUN_1800057d8(param_3);
  __acrt_unlock(*param_4);
  return uVar1 & 0xffffffff;
}



/* ===== 1800057d8 FUN_1800057d8 ===== */


/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 FUN_1800057d8(undefined8 *param_1)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  byte bVar5;
  sbyte sVar6;
  uint uVar7;
  ulonglong *puVar8;
  ulonglong *puVar9;
  ulonglong *puVar10;
  ulonglong uVar11;
  ulonglong *puVar12;
  ulonglong *puVar13;
  
  uVar1 = DAT_180019040;
  puVar8 = *(ulonglong **)*param_1;
  if (puVar8 == (ulonglong *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    bVar5 = (byte)DAT_180019040 & 0x3f;
    puVar10 = (ulonglong *)
              ((DAT_180019040 ^ *puVar8) >> bVar5 | (DAT_180019040 ^ *puVar8) << 0x40 - bVar5);
    puVar8 = (ulonglong *)
             ((DAT_180019040 ^ puVar8[1]) >> bVar5 | (DAT_180019040 ^ puVar8[1]) << 0x40 - bVar5);
    if ((longlong)puVar10 - 1U < 0xfffffffffffffffe) {
      uVar7 = (uint)DAT_180019040 & 0x3f;
      puVar9 = puVar8;
      uVar3 = DAT_180019040;
      puVar13 = puVar10;
      while (puVar8 = puVar8 + -1, puVar10 <= puVar8) {
        if (*puVar8 != uVar1) {
          uVar3 = *puVar8 ^ uVar3;
          *puVar8 = uVar1;
          (*(code *)(uVar3 >> (sbyte)uVar7 | uVar3 << 0x40 - (sbyte)uVar7))();
          uVar7 = (uint)DAT_180019040 & 0x3f;
          uVar11 = DAT_180019040 ^ **(ulonglong **)*param_1;
          uVar3 = DAT_180019040 ^ (*(ulonglong **)*param_1)[1];
          sVar6 = (sbyte)uVar7;
          puVar12 = (ulonglong *)(uVar11 >> sVar6 | uVar11 << 0x40 - sVar6);
          puVar4 = (ulonglong *)(uVar3 >> sVar6 | uVar3 << 0x40 - sVar6);
          uVar3 = DAT_180019040;
          if ((puVar12 != puVar13) || (puVar4 != puVar9)) {
            puVar8 = puVar4;
            puVar9 = puVar4;
            puVar10 = puVar12;
            puVar13 = puVar12;
          }
        }
      }
      if (puVar10 != (ulonglong *)0xffffffffffffffff) {
        FUN_180006a50(puVar10);
        uVar3 = DAT_180019040;
      }
      **(ulonglong **)*param_1 = uVar3;
      *(ulonglong *)(*(longlong *)*param_1 + 8) = uVar3;
      *(ulonglong *)(*(longlong *)*param_1 + 0x10) = uVar3;
    }
    uVar2 = 0;
  }
  return uVar2;
}



/* ===== 1800058f0 FUN_1800058f0 ===== */


void FUN_1800058f0(undefined8 param_1)

{
  undefined8 local_res8;
  undefined1 local_res10 [8];
  int local_res18 [2];
  int local_res20 [2];
  undefined8 *local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  local_18 = &local_res8;
  local_res18[0] = 2;
  local_res20[0] = 2;
  local_res8 = param_1;
  operator()<>(local_res10,local_res20,&local_18,local_res18);
  return;
}



/* ===== 180005934 _initialize_onexit_table ===== */


/* Library Function - Single Match
    _initialize_onexit_table
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined8 _initialize_onexit_table(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = DAT_180019040;
  if (param_1 == (longlong *)0x0) {
    return 0xffffffff;
  }
  if (*param_1 == param_1[2]) {
    *param_1 = DAT_180019040;
    param_1[1] = lVar1;
    param_1[2] = lVar1;
  }
  return 0;
}



/* ===== 180005970 FUN_180005970 ===== */


undefined8 FUN_180005970(void)

{
  undefined8 uVar1;
  
  _initialize_onexit_table((longlong *)&DAT_1800dbe18);
  uVar1 = _initialize_onexit_table((longlong *)&DAT_1800dbe30);
  return CONCAT71((int7)((ulonglong)uVar1 >> 8),1);
}



/* ===== 180005998 FUN_180005998 ===== */


undefined1 FUN_180005998(void)

{
  FUN_180005750();
  return 1;
}



/* ===== 1800059a8 FUN_1800059a8 ===== */


undefined1 FUN_1800059a8(void)

{
  undefined8 uVar1;
  
  uVar1 = DAT_180019040;
  FUN_1800066a8(DAT_180019040);
  FUN_180008fd0(uVar1);
  FUN_180009104(uVar1);
  FUN_180009380(uVar1);
  FUN_180005180(uVar1);
  return 1;
}



/* ===== 1800059f0 FUN_1800059f0 ===== */


undefined8 FUN_1800059f0(void)

{
  uint uVar1;
  ulonglong uVar2;
  
  LOCK();
  uVar1 = *DAT_1800dc0c8;
  uVar2 = (ulonglong)uVar1;
  *DAT_1800dc0c8 = *DAT_1800dc0c8 - 1;
  UNLOCK();
  if ((uVar1 == 1) && (DAT_1800dc0c8 != (uint *)&DAT_1800190e0)) {
    uVar2 = FUN_180006a50(DAT_1800dc0c8);
    DAT_1800dc0c8 = (uint *)&DAT_1800190e0;
  }
  return CONCAT71((int7)(uVar2 >> 8),1);
}



/* ===== 180005a30 FUN_180005a30 ===== */


undefined1 FUN_180005a30(void)

{
  FUN_180006a50(DAT_1800dc620);
  DAT_1800dc620 = (LPVOID)0x0;
  FUN_180006a50(DAT_1800dc628);
  DAT_1800dc628 = (LPVOID)0x0;
  FUN_180006a50(DAT_1800dc0e8);
  DAT_1800dc0e8 = (LPVOID)0x0;
  FUN_180006a50(DAT_1800dc0f0);
  DAT_1800dc0f0 = (LPVOID)0x0;
  return 1;
}



/* ===== 180005a8c FUN_180005a8c ===== */


void FUN_180005a8c(void)

{
  FUN_180008ecc(&PTR_LAB_1800104d0,(undefined8 *)&DAT_1800105d0);
  return;
}



/* ===== 180005aa0 FUN_180005aa0 ===== */


bool FUN_180005aa0(void)

{
  __acrt_ptd *p_Var1;
  
  p_Var1 = FUN_180006210();
  return p_Var1 != (__acrt_ptd *)0x0;
}



/* ===== 180005ab4 FUN_180005ab4 ===== */


undefined1 FUN_180005ab4(void)

{
  FUN_180006160();
  return 1;
}



/* ===== 180005ac4 FUN_180005ac4 ===== */


undefined8 FUN_180005ac4(bool param_1)

{
  int iVar1;
  undefined8 in_RAX;
  undefined4 extraout_var;
  undefined8 uVar2;
  
  if (param_1) {
    if (DAT_1800dc618 != 0) {
      iVar1 = common_flush_all(true);
      in_RAX = CONCAT44(extraout_var,iVar1);
    }
    return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
  }
  uVar2 = FUN_180008f4c(0x1800104d0,0x1800105d0);
  return uVar2;
}



/* ===== 180005afc FUN_180005afc ===== */


undefined4 FUN_180005afc(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_180006340();
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}



/* ===== 180005b0c FUN_180005b0c ===== */


/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_180005b0c(void)

{
  longlong lVar1;
  
  lVar1 = FUN_1800061b0();
  if (*(code **)(lVar1 + 0x18) != (code *)0x0) {
    (**(code **)(lVar1 + 0x18))();
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



/* ===== 180005b30 thunk_FUN_180006a50 ===== */


void thunk_FUN_180006a50(LPVOID param_1)

{
  BOOL BVar1;
  DWORD DVar2;
  uint uVar3;
  __acrt_ptd *p_Var4;
  
  if ((param_1 != (LPVOID)0x0) && (BVar1 = HeapFree(DAT_1800dc1c8,0,param_1), BVar1 == 0)) {
    DVar2 = GetLastError();
    uVar3 = FUN_18000686c(DVar2);
    p_Var4 = FUN_1800069ac();
    *(uint *)p_Var4 = uVar3;
  }
  return;
}



/* ===== 180005b40 _malloc_base ===== */


LPVOID _malloc_base(ulonglong param_1)

{
  bool bVar1;
  int iVar2;
  undefined7 extraout_var;
  LPVOID pvVar3;
  __acrt_ptd *p_Var4;
  
  if (param_1 < 0xffffffffffffffe1) {
    if (param_1 == 0) {
      param_1 = 1;
    }
    do {
      pvVar3 = HeapAlloc(DAT_1800dc1c8,0,param_1);
      if (pvVar3 != (LPVOID)0x0) {
        return pvVar3;
      }
      iVar2 = FUN_18000a400();
    } while ((iVar2 != 0) &&
            (bVar1 = FUN_180008f90(param_1), (int)CONCAT71(extraout_var,bVar1) != 0));
  }
  p_Var4 = FUN_1800069ac();
  *(undefined4 *)p_Var4 = 0xc;
  return (LPVOID)0x0;
}



/* ===== 180005b50 FUN_180005b50 ===== */


undefined8 FUN_180005b50(char *param_1,longlong param_2,longlong param_3)

{
  char cVar1;
  __acrt_ptd *p_Var2;
  char *pcVar3;
  
  if ((param_1 != (char *)0x0) && (param_2 != 0)) {
    if (param_3 != 0) {
      pcVar3 = param_1;
      do {
        cVar1 = pcVar3[param_3 - (longlong)param_1];
        *pcVar3 = cVar1;
        pcVar3 = pcVar3 + 1;
        if (cVar1 == '\0') {
          return 0;
        }
        param_2 = param_2 + -1;
      } while (param_2 != 0);
      *param_1 = '\0';
      p_Var2 = FUN_1800069ac();
      *(undefined4 *)p_Var2 = 0x22;
      FUN_180006804();
      return 0x22;
    }
    *param_1 = '\0';
  }
  p_Var2 = FUN_1800069ac();
  *(undefined4 *)p_Var2 = 0x16;
  FUN_180006804();
  return 0x16;
}



/* ===== 180005bd0 abort ===== */


/* Library Function - Single Match
    abort
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl abort(void)

{
  code *pcVar1;
  BOOL BVar2;
  longlong lVar3;
  undefined1 *puVar4;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [32];
  
  lVar3 = __acrt_get_sigabrt_handler();
  if (lVar3 != 0) {
    FUN_180009124(0x16);
  }
  puVar4 = auStack_28;
  if ((DAT_1800190c0 & 2) != 0) {
    BVar2 = IsProcessorFeaturePresent(0x17);
    puVar4 = auStack_28;
    if (BVar2 != 0) {
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(7);
      puVar4 = auStack_20;
    }
    *(undefined8 *)(puVar4 + -8) = 0x180005c1b;
    FUN_180006538(3,0x40000015,1);
  }
  *(undefined8 *)(puVar4 + -8) = 0x180005c25;
  FUN_180005198(3);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ===== 180005c30 FUN_180005c30 ===== */


longlong FUN_180005c30(longlong *param_1)

{
  __acrt_ptd *p_Var1;
  longlong lVar2;
  DWORD local_res8 [2];
  
  if (*param_1 == 0) {
    local_res8[0] = GetLastError();
    if ((char)param_1[2] == '\0') {
      lVar2 = 0;
      *(undefined1 *)(param_1 + 2) = 1;
      param_1[1] = 0;
    }
    else {
      lVar2 = param_1[1];
    }
    p_Var1 = FUN_1800062a0(local_res8,lVar2);
    *param_1 = (longlong)p_Var1;
    SetLastError(local_res8[0]);
    if (p_Var1 == (__acrt_ptd *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
  return *param_1;
}



/* ===== 180005ca0 FUN_180005ca0 ===== */


void FUN_180005ca0(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_180005c30(param_1);
  param_1[3] = *(longlong *)(lVar1 + 0x90);
  param_1[4] = *(longlong *)(lVar1 + 0x88);
  FUN_180009904(lVar1,param_1 + 3,param_1[1]);
  FUN_180009970(lVar1,param_1 + 4,param_1[1]);
  if ((*(uint *)(lVar1 + 0x3a8) & 2) == 0) {
    *(uint *)(lVar1 + 0x3a8) = *(uint *)(lVar1 + 0x3a8) | 2;
    *(undefined1 *)(param_1 + 5) = 2;
  }
  return;
}



/* ===== 180005d20 _calloc_base ===== */


LPVOID _calloc_base(ulonglong param_1,ulonglong param_2)

{
  bool bVar1;
  int iVar2;
  undefined7 extraout_var;
  LPVOID pvVar3;
  __acrt_ptd *p_Var4;
  SIZE_T dwBytes;
  
  if ((param_1 == 0) || (param_2 <= 0xffffffffffffffe0 / param_1)) {
    dwBytes = param_1 * param_2;
    if (dwBytes == 0) {
      dwBytes = 1;
    }
    do {
      pvVar3 = HeapAlloc(DAT_1800dc1c8,8,dwBytes);
      if (pvVar3 != (LPVOID)0x0) {
        return pvVar3;
      }
      iVar2 = FUN_18000a400();
    } while ((iVar2 != 0) &&
            (bVar1 = FUN_180008f90(dwBytes), (int)CONCAT71(extraout_var,bVar1) != 0));
  }
  p_Var4 = FUN_1800069ac();
  *(undefined4 *)p_Var4 = 0xc;
  return (LPVOID)0x0;
}



/* ===== 180005d30 operator()<> ===== */


/* Library Function - Multiple Matches With Same Base Name
    public: void __cdecl __crt_seh_guarded_call<void>::operator()<class
   <lambda_0ae27a3a962d80f24befdcbee591983d>,class <lambda_8d0ee55de4b1038c4002e0adecdf1839> &
   __ptr64,class <lambda_dc504788e8f1664fe9b84e20bfb512f2> >(class
   <lambda_0ae27a3a962d80f24befdcbee591983d> && __ptr64,class
   <lambda_8d0ee55de4b1038c4002e0adecdf1839> & __ptr64,class
   <lambda_dc504788e8f1664fe9b84e20bfb512f2> && __ptr64) __ptr64
    public: void __cdecl __crt_seh_guarded_call<void>::operator()<class
   <lambda_72d1df2b273a38828b1ce30cbf4cdab5>,class <lambda_876a65b173b8412d3a47c70a915b0cf4> &
   __ptr64,class <lambda_41932305e351933ebe8f8be3ed8bb5dc> >(class
   <lambda_72d1df2b273a38828b1ce30cbf4cdab5> && __ptr64,class
   <lambda_876a65b173b8412d3a47c70a915b0cf4> & __ptr64,class
   <lambda_41932305e351933ebe8f8be3ed8bb5dc> && __ptr64) __ptr64
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void operator()<>(undefined8 param_1,int *param_2,undefined8 *param_3,int *param_4)

{
  __acrt_lock(*param_2);
  LOCK();
  **(int **)(*(longlong *)*param_3 + 0x88) = **(int **)(*(longlong *)*param_3 + 0x88) + 1;
  UNLOCK();
  __acrt_unlock(*param_4);
  return;
}



/* ===== 180005d70 operator()<> ===== */


/* Library Function - Multiple Matches With Same Base Name
    public: void __cdecl __crt_seh_guarded_call<void>::operator()<class
   <lambda_2d41944a1d46af3157314b8a01080d33>,class <lambda_8f455de75cd7d7f24b4096f044d8b9e6> &
   __ptr64,class <lambda_aa500f224e6afead328df44964fe2772> >(class
   <lambda_2d41944a1d46af3157314b8a01080d33> && __ptr64,class
   <lambda_8f455de75cd7d7f24b4096f044d8b9e6> & __ptr64,class
   <lambda_aa500f224e6afead328df44964fe2772> && __ptr64) __ptr64
    public: void __cdecl __crt_seh_guarded_call<void>::operator()<class
   <lambda_fb3a7dec4e47f37f22dae91bb15c9095>,class <lambda_698284760c8add0bfb0756c19673e34b> &
   __ptr64,class <lambda_dfb8eca1e75fef3034a8fb18dd509707> >(class
   <lambda_fb3a7dec4e47f37f22dae91bb15c9095> && __ptr64,class
   <lambda_698284760c8add0bfb0756c19673e34b> & __ptr64,class
   <lambda_dfb8eca1e75fef3034a8fb18dd509707> && __ptr64) __ptr64
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void operator()<>(undefined8 param_1,int *param_2,undefined8 *param_3,int *param_4)

{
  __acrt_lock(*param_2);
  replace_current_thread_locale_nolock(*(__acrt_ptd **)*param_3,(__crt_locale_data *)0x0);
  __acrt_unlock(*param_4);
  return;
}



/* ===== 180005db0 operator()<> ===== */


/* Library Function - Multiple Matches With Same Base Name
    public: void __cdecl __crt_seh_guarded_call<void>::operator()<class
   <lambda_5e887d1dcbef67a5eb4283622ba103bf>,class <lambda_4466841279450cc726390878d4a41900> &
   __ptr64,class <lambda_341c25c0346d94847f1f3c463c57e077> >(class
   <lambda_5e887d1dcbef67a5eb4283622ba103bf> && __ptr64,class
   <lambda_4466841279450cc726390878d4a41900> & __ptr64,class
   <lambda_341c25c0346d94847f1f3c463c57e077> && __ptr64) __ptr64
    public: void __cdecl __crt_seh_guarded_call<void>::operator()<class
   <lambda_aa87e3671a710a21b5dc78c0bdf72e11>,class <lambda_92619d2358a28f41a33ba319515a20b9> &
   __ptr64,class <lambda_6992ecaafeb10aed2b74cb1fae11a551> >(class
   <lambda_aa87e3671a710a21b5dc78c0bdf72e11> && __ptr64,class
   <lambda_92619d2358a28f41a33ba319515a20b9> & __ptr64,class
   <lambda_6992ecaafeb10aed2b74cb1fae11a551> && __ptr64) __ptr64
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void operator()<>(undefined8 param_1,int *param_2,undefined8 *param_3,int *param_4)

{
  __acrt_lock(*param_2);
  replace_current_thread_locale_nolock
            (*(__acrt_ptd **)*param_3,(__crt_locale_data *)**(undefined8 **)param_3[1]);
  __acrt_unlock(*param_4);
  return;
}



/* ===== 180005df8 operator()<> ===== */


/* Library Function - Multiple Matches With Same Base Name
    public: void __cdecl __crt_seh_guarded_call<void>::operator()<class
   <lambda_46352004c1216016012b18bd6f87e700>,class <lambda_3bd07e1a1191394380780325891bf33f> &
   __ptr64,class <lambda_334532d3f185bcaa59b5be82d7d22bff> >(class
   <lambda_46352004c1216016012b18bd6f87e700> && __ptr64,class
   <lambda_3bd07e1a1191394380780325891bf33f> & __ptr64,class
   <lambda_334532d3f185bcaa59b5be82d7d22bff> && __ptr64) __ptr64
    public: void __cdecl __crt_seh_guarded_call<void>::operator()<class
   <lambda_f2e299630e499de9f9a165e60fcd3db5>,class <lambda_2ae9d31cdba2644fcbeaf08da7c24588> &
   __ptr64,class <lambda_40d01ff24d0e7b3814fdbdcee8eab3c7> >(class
   <lambda_f2e299630e499de9f9a165e60fcd3db5> && __ptr64,class
   <lambda_2ae9d31cdba2644fcbeaf08da7c24588> & __ptr64,class
   <lambda_40d01ff24d0e7b3814fdbdcee8eab3c7> && __ptr64) __ptr64
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void operator()<>(undefined8 param_1,int *param_2,undefined8 *param_3,int *param_4)

{
  int iVar1;
  int *piVar2;
  
  __acrt_lock(*param_2);
  piVar2 = *(int **)(*(longlong *)*param_3 + 0x88);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((iVar1 == 1) && (piVar2 != (int *)&DAT_1800190e0)) {
      FUN_180006a50(piVar2);
    }
  }
  __acrt_unlock(*param_4);
  return;
}



/* ===== 180005e58 construct_ptd_array ===== */


/* Library Function - Single Match
    void __cdecl construct_ptd_array(struct __acrt_ptd * __ptr64 const)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl construct_ptd_array(__acrt_ptd *param_1)

{
  undefined1 local_res10 [8];
  int local_res18 [2];
  int local_res20 [2];
  int local_38 [2];
  __acrt_ptd *local_30;
  undefined8 *local_28;
  __acrt_ptd **local_20;
  __acrt_ptd **local_18;
  undefined8 **local_10;
  
  local_20 = &local_30;
  local_res18[0] = 5;
  local_res20[0] = 5;
  local_18 = &local_30;
  local_10 = &local_28;
  local_38[0] = 4;
  local_38[1] = 4;
  local_28 = &DAT_1800dc608;
  *(undefined4 *)(param_1 + 0x28) = 1;
  *(undefined **)param_1 = &DAT_180010330;
  *(undefined4 *)(param_1 + 0x3a8) = 1;
  *(undefined **)(param_1 + 0x88) = &DAT_1800190e0;
  *(undefined2 *)(param_1 + 0xbc) = 0x43;
  *(undefined2 *)(param_1 + 0x1c2) = 0x43;
  *(undefined8 *)(param_1 + 0x3a0) = 0;
  local_30 = param_1;
  operator()<>(local_res10,local_res20,&local_20,local_res18);
  operator()<>(local_res10,local_38 + 1,&local_18,local_38);
  return;
}



/* ===== 180005f28 FUN_180005f28 ===== */


void FUN_180005f28(__acrt_ptd *param_1)

{
  if (param_1 != (__acrt_ptd *)0x0) {
    destroy_ptd_array(param_1);
    FUN_180006a50(param_1);
  }
  return;
}



/* ===== 180005f48 destroy_ptd_array ===== */


/* Library Function - Single Match
    void __cdecl destroy_ptd_array(struct __acrt_ptd * __ptr64 const)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl destroy_ptd_array(__acrt_ptd *param_1)

{
  undefined1 local_res10 [8];
  int local_res18 [2];
  int local_res20 [2];
  int local_28 [2];
  __acrt_ptd *local_20;
  __acrt_ptd **local_18;
  __acrt_ptd **local_10;
  
  local_18 = &local_20;
  local_res18[0] = 5;
  local_res20[0] = 5;
  local_10 = &local_20;
  local_28[0] = 4;
  local_28[1] = 4;
  local_20 = param_1;
  if (*(undefined **)param_1 != &DAT_180010330) {
    FUN_180006a50(*(undefined **)param_1);
  }
  FUN_180006a50(*(LPVOID *)(local_20 + 0x70));
  FUN_180006a50(*(LPVOID *)(local_20 + 0x58));
  FUN_180006a50(*(LPVOID *)(local_20 + 0x60));
  FUN_180006a50(*(LPVOID *)(local_20 + 0x68));
  FUN_180006a50(*(LPVOID *)(local_20 + 0x48));
  FUN_180006a50(*(LPVOID *)(local_20 + 0x50));
  FUN_180006a50(*(LPVOID *)(local_20 + 0x78));
  FUN_180006a50(*(LPVOID *)(local_20 + 0x80));
  FUN_180006a50(*(LPVOID *)(local_20 + 0x3c0));
  operator()<>(local_res10,local_res20,&local_18,local_res18);
  operator()<>(local_res10,local_28 + 1,&local_10,local_28);
  return;
}



/* ===== 180006040 FUN_180006040 ===== */


__acrt_ptd * FUN_180006040(void)

{
  DWORD dwErrCode;
  BOOL BVar1;
  __acrt_ptd *lpFlsData;
  
  dwErrCode = GetLastError();
  BVar1 = FlsSetValue(DAT_1800190d0,(PVOID)0xffffffffffffffff);
  if (BVar1 != 0) {
    lpFlsData = _calloc_base(1,0x3c8);
    if (lpFlsData != (__acrt_ptd *)0x0) {
      BVar1 = FlsSetValue(DAT_1800190d0,lpFlsData);
      if (BVar1 == 0) {
        FlsSetValue(DAT_1800190d0,(PVOID)0x0);
        FUN_180006a50(lpFlsData);
        lpFlsData = (__acrt_ptd *)0x0;
      }
      else {
        construct_ptd_array(lpFlsData);
        FUN_180006a50((LPVOID)0x0);
      }
      SetLastError(dwErrCode);
      return lpFlsData;
    }
    FlsSetValue(DAT_1800190d0,(PVOID)0x0);
    FUN_180006a50((LPVOID)0x0);
  }
  SetLastError(dwErrCode);
  return (__acrt_ptd *)0x0;
}



/* ===== 1800060f8 replace_current_thread_locale_nolock ===== */


/* Library Function - Single Match
    void __cdecl replace_current_thread_locale_nolock(struct __acrt_ptd * __ptr64 const,struct
   __crt_locale_data * __ptr64 const)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl replace_current_thread_locale_nolock(__acrt_ptd *param_1,__crt_locale_data *param_2)

{
  undefined **ppuVar1;
  
  if (*(longlong *)(param_1 + 0x90) != 0) {
    __acrt_release_locale_ref(*(longlong *)(param_1 + 0x90));
    ppuVar1 = *(undefined ***)(param_1 + 0x90);
    if (((ppuVar1 != DAT_1800dc608) && (ppuVar1 != &PTR_DAT_180019620)) &&
       (*(int *)(ppuVar1 + 2) == 0)) {
      __acrt_free_locale(ppuVar1);
    }
  }
  *(__crt_locale_data **)(param_1 + 0x90) = param_2;
  if (param_2 != (__crt_locale_data *)0x0) {
    __acrt_add_locale_ref((longlong)param_2);
  }
  return;
}



/* ===== 180006160 FUN_180006160 ===== */


void FUN_180006160(void)

{
  __acrt_ptd *p_Var1;
  
  if (DAT_1800190d0 == 0xffffffff) {
    p_Var1 = (__acrt_ptd *)0x0;
  }
  else {
    p_Var1 = FlsGetValue(DAT_1800190d0);
  }
  if (p_Var1 != (__acrt_ptd *)0x0) {
    FlsSetValue(DAT_1800190d0,(PVOID)0x0);
    destroy_ptd_array(p_Var1);
    FUN_180006a50(p_Var1);
  }
  return;
}



/* ===== 1800061b0 FUN_1800061b0 ===== */


void FUN_1800061b0(void)

{
  __acrt_ptd *p_Var1;
  
  p_Var1 = FUN_180006210();
  if (p_Var1 == (__acrt_ptd *)0x0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return;
}



/* ===== 1800061cc FUN_1800061cc ===== */


void FUN_1800061cc(void)

{
  PVOID pvVar1;
  __acrt_ptd *p_Var2;
  
  if (DAT_1800190d0 == 0xffffffff) {
    pvVar1 = (PVOID)0x0;
  }
  else {
    pvVar1 = FlsGetValue(DAT_1800190d0);
  }
  if (pvVar1 == (PVOID)0xffffffffffffffff) {
LAB_180006208:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (pvVar1 == (PVOID)0x0) {
    p_Var2 = FUN_180006040();
    if (p_Var2 == (__acrt_ptd *)0x0) goto LAB_180006208;
  }
  return;
}



/* ===== 180006210 FUN_180006210 ===== */


__acrt_ptd * FUN_180006210(void)

{
  DWORD dwErrCode;
  __acrt_ptd *p_Var1;
  __acrt_ptd *p_Var2;
  
  p_Var2 = (__acrt_ptd *)0x0;
  if (DAT_1800dbe48 == '\0') {
    dwErrCode = GetLastError();
    if (DAT_1800190d0 == 0xffffffff) {
      p_Var1 = (__acrt_ptd *)0x0;
    }
    else {
      p_Var1 = FlsGetValue(DAT_1800190d0);
    }
    if (p_Var1 != (__acrt_ptd *)0xffffffffffffffff) {
      if (p_Var1 == (__acrt_ptd *)0x0) {
        p_Var1 = FUN_180006040();
      }
      p_Var2 = p_Var1;
    }
    SetLastError(dwErrCode);
  }
  else {
    if (DAT_1800190d0 == 0xffffffff) {
      p_Var1 = (__acrt_ptd *)0x0;
    }
    else {
      p_Var1 = (__acrt_ptd *)FUN_1800089ac();
    }
    if (p_Var1 != (__acrt_ptd *)0xffffffffffffffff) {
      if (p_Var1 == (__acrt_ptd *)0x0) {
        p_Var1 = FUN_180006040();
      }
      p_Var2 = p_Var1;
    }
  }
  return p_Var2;
}



/* ===== 1800062a0 FUN_1800062a0 ===== */


__acrt_ptd * FUN_1800062a0(undefined8 param_1,longlong param_2)

{
  __acrt_ptd *p_Var1;
  __acrt_ptd *p_Var2;
  
  p_Var2 = (__acrt_ptd *)0x0;
  if (DAT_1800190d0 == 0xffffffff) {
    p_Var1 = (__acrt_ptd *)0x0;
  }
  else {
    p_Var1 = FlsGetValue(DAT_1800190d0);
  }
  if (p_Var1 != (__acrt_ptd *)0xffffffffffffffff) {
    if ((p_Var1 == (__acrt_ptd *)0x0) && (p_Var1 = FUN_180006040(), p_Var1 == (__acrt_ptd *)0x0)) {
      return (__acrt_ptd *)0x0;
    }
    p_Var2 = p_Var1 + param_2 * 0x3c8;
  }
  return p_Var2;
}



/* ===== 1800062fc FUN_1800062fc ===== */


ulonglong FUN_1800062fc(void)

{
  undefined4 uVar1;
  undefined4 extraout_var;
  ulonglong uVar2;
  __acrt_ptd *p_Var3;
  undefined4 extraout_var_00;
  
  DAT_1800dbe48 = FUN_180008b50();
  DAT_1800190d0 = FlsAlloc(FUN_180005f28);
  uVar2 = CONCAT44(extraout_var,DAT_1800190d0);
  if (DAT_1800190d0 != 0xffffffff) {
    p_Var3 = FUN_180006210();
    if (p_Var3 != (__acrt_ptd *)0x0) {
      return CONCAT71((int7)((ulonglong)p_Var3 >> 8),1);
    }
    uVar1 = FUN_180006340();
    uVar2 = CONCAT44(extraout_var_00,uVar1);
  }
  return uVar2 & 0xffffffffffffff00;
}



/* ===== 180006340 FUN_180006340 ===== */


undefined4 FUN_180006340(void)

{
  BOOL in_EAX;
  
  if (DAT_1800190d0 != 0xffffffff) {
    in_EAX = FlsFree(DAT_1800190d0);
    DAT_1800190d0 = 0xffffffff;
  }
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}



/* ===== 180006364 __acrt_initialize_locks ===== */


/* Library Function - Single Match
    __acrt_initialize_locks
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

ulonglong __acrt_initialize_locks(void)

{
  BOOL BVar1;
  undefined4 extraout_var;
  ulonglong uVar2;
  uint uVar3;
  
  uVar2 = 0;
  do {
    BVar1 = InitializeCriticalSectionEx((LPCRITICAL_SECTION)(&DAT_1800dbe50 + uVar2 * 0x28),4000,0);
    if (BVar1 == 0) {
      uVar2 = __acrt_uninitialize_locks();
      return uVar2 & 0xffffffffffffff00;
    }
    DAT_1800dc0a8 = DAT_1800dc0a8 + 1;
    uVar3 = (int)uVar2 + 1;
    uVar2 = (ulonglong)uVar3;
  } while (uVar3 < 0xf);
  return CONCAT71((int7)(CONCAT44(extraout_var,BVar1) >> 8),1);
}



/* ===== 1800063ac __acrt_lock ===== */


/* Library Function - Multiple Matches With Different Base Names
    __acrt_lock
    __acrt_unlock
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_lock(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001800063be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EnterCriticalSection(&DAT_1800dbe50 + (longlong)param_1 * 0x28);
  return;
}



/* ===== 1800063c8 __acrt_uninitialize_locks ===== */


/* Library Function - Single Match
    __acrt_uninitialize_locks
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined8 __acrt_uninitialize_locks(void)

{
  undefined8 in_RAX;
  undefined8 extraout_RAX;
  ulonglong uVar1;
  
  uVar1 = (ulonglong)DAT_1800dc0a8;
  while ((int)uVar1 != 0) {
    uVar1 = (ulonglong)((int)uVar1 - 1);
    DeleteCriticalSection((LPCRITICAL_SECTION)(&DAT_1800dbe50 + uVar1 * 0x28));
    DAT_1800dc0a8 = DAT_1800dc0a8 - 1;
    in_RAX = extraout_RAX;
  }
  return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
}



/* ===== 180006400 __acrt_unlock ===== */


/* Library Function - Single Match
    __acrt_unlock
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_unlock(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000180006412. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(&DAT_1800dbe50 + (longlong)param_1 * 0x28);
  return;
}



/* ===== 18000641c FUN_18000641c ===== */


ulonglong FUN_18000641c(void)

{
  return (ulonglong)(uint3)((uint)*(undefined4 *)(*(longlong *)((longlong)Self + 0x60) + 0xbc) >> 8)
         & 0xffffffffffffff01;
}



/* ===== 180006438 FUN_180006438 ===== */


uint FUN_180006438(void)

{
  return *(uint *)(*(longlong *)(*(longlong *)((longlong)Self + 0x60) + 0x20) + 8) >> 0x1f;
}



/* ===== 180006450 FUN_180006450 ===== */


bool FUN_180006450(void)

{
  uint uVar1;
  int local_res8 [8];
  
  local_res8[0] = 0;
  uVar1 = FUN_180006438();
  if ((char)uVar1 == '\0') {
    FUN_1800088ec(local_res8);
  }
  return local_res8[0] != 1;
}



/* ===== 180006480 FUN_180006480 ===== */


__acrt_ptd * FUN_180006480(longlong *param_1)

{
  __acrt_ptd *p_Var1;
  longlong lVar2;
  DWORD local_res8 [2];
  
  p_Var1 = (__acrt_ptd *)*param_1;
  lVar2 = 0;
  if (p_Var1 == (__acrt_ptd *)0x0) {
    local_res8[0] = GetLastError();
    if ((char)param_1[2] == '\0') {
      param_1[1] = 0;
      *(undefined1 *)(param_1 + 2) = 1;
    }
    else {
      lVar2 = param_1[1];
    }
    p_Var1 = FUN_1800062a0(local_res8,lVar2);
    *param_1 = (longlong)p_Var1;
    SetLastError(local_res8[0]);
  }
  return p_Var1;
}



/* ===== 1800064ec FUN_1800064ec ===== */


longlong FUN_1800064ec(longlong param_1,longlong param_2)

{
  DWORD dwErrCode;
  longlong lVar1;
  
  lVar1 = 0;
  if (*(char *)(param_2 + 0x10) == '\0') {
    dwErrCode = GetLastError();
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined1 *)(param_2 + 0x10) = 1;
    SetLastError(dwErrCode);
  }
  else {
    lVar1 = *(longlong *)(param_2 + 8);
  }
  return param_1 + lVar1 * 8;
}



/* ===== 180006538 FUN_180006538 ===== */


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180006538(int param_1,DWORD param_2,DWORD param_3)

{
  BOOL BVar1;
  LONG LVar2;
  PRUNTIME_FUNCTION FunctionEntry;
  undefined1 local_res8 [8];
  undefined1 auStackY_608 [32];
  ulonglong local_5c8 [2];
  PVOID local_5b8;
  _EXCEPTION_POINTERS local_5b0;
  EXCEPTION_RECORD local_598;
  _CONTEXT local_4f8;
  ulonglong local_28;
  
  local_28 = DAT_180019040 ^ (ulonglong)auStackY_608;
  if (param_1 != -1) {
    FUN_180002030();
  }
  FUN_18000dde0((undefined1 (*) [32])&local_598,0,0x98);
  FUN_18000dde0((undefined1 (*) [32])&local_4f8,0,0x4d0);
  local_5c8[1] = 0;
  local_5b0.ExceptionRecord = &local_598;
  local_5c8[0] = 0;
  local_5b8 = (PVOID)0x0;
  local_5b0.ContextRecord = &local_4f8;
  RtlCaptureContext(&local_4f8);
  FunctionEntry = RtlLookupFunctionEntry(local_4f8.Rip,local_5c8,(PUNWIND_HISTORY_TABLE)0x0);
  if (FunctionEntry != (PRUNTIME_FUNCTION)0x0) {
    RtlVirtualUnwind(0,local_5c8[0],local_4f8.Rip,FunctionEntry,&local_4f8,&local_5b8,local_5c8 + 1,
                     (PKNONVOLATILE_CONTEXT_POINTERS)0x0);
  }
  local_4f8.Rsp = (DWORD64)local_res8;
  local_598.ExceptionCode = param_2;
  local_598.ExceptionFlags = param_3;
  BVar1 = IsDebuggerPresent();
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  LVar2 = UnhandledExceptionFilter(&local_5b0);
  if (((LVar2 == 0) && (BVar1 == 0)) && (param_1 != -1)) {
    FUN_180002030();
  }
  return;
}



/* ===== 1800066a8 FUN_1800066a8 ===== */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800066a8(undefined8 param_1)

{
  _DAT_1800dc0b0 = param_1;
  return;
}



/* ===== 1800066b0 FUN_1800066b0 ===== */


void FUN_1800066b0(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,uint param_4,uintptr_t param_5
                  )

{
  longlong lVar1;
  longlong local_48 [2];
  undefined1 local_38;
  undefined *local_30;
  undefined *puStack_28;
  char local_20;
  undefined4 local_1c;
  char local_18;
  undefined4 local_14;
  char local_10;
  
  local_48[0] = 0;
  local_20 = DAT_1800dc640 == 0;
  local_38 = 0;
  local_18 = '\0';
  local_10 = '\0';
  if ((bool)local_20) {
    local_30 = PTR_PTR_180019778;
    puStack_28 = PTR_DAT_180019780;
  }
  FUN_18000674c(param_1,param_2,param_3,param_4,param_5,local_48);
  if (local_20 == '\x02') {
    *(uint *)(local_48[0] + 0x3a8) = *(uint *)(local_48[0] + 0x3a8) & 0xfffffffd;
  }
  if (local_18 != '\0') {
    lVar1 = FUN_180005c30(local_48);
    *(undefined4 *)(lVar1 + 0x20) = local_1c;
  }
  if (local_10 != '\0') {
    lVar1 = FUN_180005c30(local_48);
    *(undefined4 *)(lVar1 + 0x24) = local_14;
  }
  return;
}



/* ===== 18000674c FUN_18000674c ===== */


/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_18000674c(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,uint param_4,uintptr_t param_5
                  ,longlong *param_6)

{
  __acrt_ptd *p_Var1;
  ulonglong *puVar2;
  byte bVar3;
  code *pcVar4;
  
  p_Var1 = FUN_180006480(param_6);
  if ((p_Var1 == (__acrt_ptd *)0x0) || (pcVar4 = *(code **)(p_Var1 + 0x3b8), pcVar4 == (code *)0x0))
  {
    puVar2 = (ulonglong *)FUN_1800064ec(0x1800dc0b0,(longlong)param_6);
    bVar3 = (byte)DAT_180019040 & 0x3f;
    pcVar4 = (code *)((*puVar2 ^ DAT_180019040) >> bVar3 | (*puVar2 ^ DAT_180019040) << 0x40 - bVar3
                     );
    if (pcVar4 == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson(param_1,param_2,param_3,param_4,param_5);
    }
  }
  (*pcVar4)(param_1,param_2,param_3,param_4,param_5);
  return;
}



/* ===== 180006804 FUN_180006804 ===== */


void FUN_180006804(void)

{
  FUN_1800066b0((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return;
}



/* ===== 180006824 _invoke_watson ===== */


/* Library Function - Single Match
    _invoke_watson
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl
_invoke_watson(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,uint param_4,uintptr_t param_5)

{
  code *pcVar1;
  BOOL BVar2;
  HANDLE hProcess;
  undefined1 *puVar3;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [32];
  
  BVar2 = IsProcessorFeaturePresent(0x17);
  puVar3 = auStack_28;
  if (BVar2 != 0) {
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar3 = auStack_20;
  }
  *(undefined8 *)(puVar3 + -8) = 0x180006852;
  FUN_180006538(2,0xc0000417,1);
  *(undefined8 *)(puVar3 + -8) = 0x180006858;
  hProcess = GetCurrentProcess();
                    /* WARNING: Could not recover jumptable at 0x000180006864. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  TerminateProcess(hProcess,0xc0000417);
  return;
}



/* ===== 18000686c FUN_18000686c ===== */


uint FUN_18000686c(uint param_1)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  uint *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  if (param_1 != 0) {
    if (param_1 < 0xe) {
      return *(uint *)(&DAT_1800105d4 + (ulonglong)(param_1 - 1) * 8);
    }
    if (param_1 < 0x719) {
      uVar5 = 0x2d;
      uVar9 = 0;
      uVar7 = 0x2c;
      do {
        uVar8 = uVar5 >> 1;
        if (uVar8 == 0) {
          if (uVar5 != 0) {
            puVar4 = (uint *)(&DAT_1800105d0 + uVar9 * 8);
            if (param_1 != *puVar4) {
              puVar4 = (uint *)0x0;
            }
LAB_18000690d:
            if (puVar4 != (uint *)0x0) {
              return puVar4[1];
            }
          }
          break;
        }
        uVar6 = uVar8 - 1;
        if ((uVar5 & 1) != 0) {
          uVar6 = uVar8;
        }
        lVar1 = uVar6 + uVar9;
        puVar4 = (uint *)(&DAT_1800105d0 + lVar1 * 8);
        if (param_1 == *puVar4) goto LAB_18000690d;
        uVar3 = lVar1 - 1;
        uVar5 = uVar6;
        if (*puVar4 <= param_1) {
          uVar9 = lVar1 + 1;
          uVar3 = uVar7;
          uVar5 = uVar8;
        }
        uVar7 = uVar3;
      } while (uVar9 <= uVar3);
    }
  }
  if (param_1 - 0x13 < 0x12) {
    uVar2 = 0xd;
  }
  else {
    uVar2 = 0x16;
    if (param_1 - 0xbc < 0xf) {
      uVar2 = 8;
    }
  }
  return uVar2;
}



/* ===== 18000693c FUN_18000693c ===== */


void FUN_18000693c(uint param_1)

{
  uint uVar1;
  __acrt_ptd *p_Var2;
  
  p_Var2 = FUN_180006988();
  *(uint *)p_Var2 = param_1;
  uVar1 = FUN_18000686c(param_1);
  p_Var2 = FUN_1800069ac();
  *(uint *)p_Var2 = uVar1;
  return;
}



/* ===== 180006964 FUN_180006964 ===== */


void FUN_180006964(uint param_1,longlong param_2)

{
  uint uVar1;
  
  *(undefined1 *)(param_2 + 0x38) = 1;
  *(uint *)(param_2 + 0x34) = param_1;
  uVar1 = FUN_18000686c(param_1);
  *(uint *)(param_2 + 0x2c) = uVar1;
  *(undefined1 *)(param_2 + 0x30) = 1;
  return;
}



/* ===== 180006988 FUN_180006988 ===== */


__acrt_ptd * FUN_180006988(void)

{
  __acrt_ptd *p_Var1;
  __acrt_ptd *p_Var2;
  
  p_Var1 = FUN_180006210();
  p_Var2 = p_Var1 + 0x24;
  if (p_Var1 == (__acrt_ptd *)0x0) {
    p_Var2 = (__acrt_ptd *)&DAT_1800190d8;
  }
  return p_Var2;
}



/* ===== 1800069ac FUN_1800069ac ===== */


__acrt_ptd * FUN_1800069ac(void)

{
  __acrt_ptd *p_Var1;
  __acrt_ptd *p_Var2;
  
  p_Var1 = FUN_180006210();
  p_Var2 = p_Var1 + 0x20;
  if (p_Var1 == (__acrt_ptd *)0x0) {
    p_Var2 = (__acrt_ptd *)&DAT_1800190d4;
  }
  return p_Var2;
}



/* ===== 1800069d0 _calloc_base ===== */


/* Library Function - Single Match
    _calloc_base
   
   Library: Visual Studio 2019 Release */

LPVOID _calloc_base(ulonglong param_1,ulonglong param_2)

{
  bool bVar1;
  int iVar2;
  undefined7 extraout_var;
  LPVOID pvVar3;
  __acrt_ptd *p_Var4;
  SIZE_T dwBytes;
  
  if ((param_1 == 0) || (param_2 <= 0xffffffffffffffe0 / param_1)) {
    dwBytes = param_1 * param_2;
    if (dwBytes == 0) {
      dwBytes = 1;
    }
    do {
      pvVar3 = HeapAlloc(DAT_1800dc1c8,8,dwBytes);
      if (pvVar3 != (LPVOID)0x0) {
        return pvVar3;
      }
      iVar2 = FUN_18000a400();
    } while ((iVar2 != 0) &&
            (bVar1 = FUN_180008f90(dwBytes), (int)CONCAT71(extraout_var,bVar1) != 0));
  }
  p_Var4 = FUN_1800069ac();
  *(undefined4 *)p_Var4 = 0xc;
  return (LPVOID)0x0;
}



/* ===== 180006a50 FUN_180006a50 ===== */


void FUN_180006a50(LPVOID param_1)

{
  BOOL BVar1;
  DWORD DVar2;
  uint uVar3;
  __acrt_ptd *p_Var4;
  
  if ((param_1 != (LPVOID)0x0) && (BVar1 = HeapFree(DAT_1800dc1c8,0,param_1), BVar1 == 0)) {
    DVar2 = GetLastError();
    uVar3 = FUN_18000686c(DVar2);
    p_Var4 = FUN_1800069ac();
    *(uint *)p_Var4 = uVar3;
  }
  return;
}



/* ===== 180006abc FUN_180006abc ===== */


uint FUN_180006abc(char *param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  int iVar1;
  DWORD DVar2;
  LPVOID pvVar3;
  __acrt_ptd *p_Var4;
  uint uVar5;
  ulonglong uVar6;
  bool bVar7;
  
  if (param_1 == (char *)0x0) {
    if (*(char *)(param_2 + 0x28) != '\0') {
      FUN_180006a50(*(LPVOID *)(param_2 + 0x10));
      *(undefined1 *)(param_2 + 0x28) = 0;
    }
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined8 *)(param_2 + 0x18) = 0;
  }
  else {
    if (*param_1 != '\0') {
      iVar1 = FUN_180008408(param_4,9);
      uVar6 = (ulonglong)iVar1;
      if (iVar1 != 0) {
        if (*(ulonglong *)(param_2 + 0x18) < uVar6) {
          if (*(char *)(param_2 + 0x28) != '\0') {
            FUN_180006a50(*(LPVOID *)(param_2 + 0x10));
            *(undefined1 *)(param_2 + 0x28) = 0;
          }
          pvVar3 = _malloc_base(uVar6 * 2);
          *(LPVOID *)(param_2 + 0x10) = pvVar3;
          uVar5 = ~-(uint)(pvVar3 != (LPVOID)0x0) & 0xc;
          if (pvVar3 != (LPVOID)0x0) {
            uVar5 = 0;
          }
          *(bool *)(param_2 + 0x28) = pvVar3 != (LPVOID)0x0;
          *(ulonglong *)(param_2 + 0x18) = -(ulonglong)(pvVar3 != (LPVOID)0x0) & uVar6;
          if (uVar5 != 0) {
            return uVar5;
          }
        }
        iVar1 = FUN_180008408(param_4,9);
        if ((longlong)iVar1 != 0) {
          *(longlong *)(param_2 + 0x20) = (longlong)iVar1 + -1;
          return 0;
        }
      }
      DVar2 = GetLastError();
      FUN_18000693c(DVar2);
      p_Var4 = FUN_1800069ac();
      return *(uint *)p_Var4;
    }
    if (*(longlong *)(param_2 + 0x18) == 0) {
      if (*(char *)(param_2 + 0x28) != '\0') {
        FUN_180006a50(*(LPVOID *)(param_2 + 0x10));
        *(undefined1 *)(param_2 + 0x28) = 0;
      }
      pvVar3 = _malloc_base(2);
      *(LPVOID *)(param_2 + 0x10) = pvVar3;
      uVar5 = ~-(uint)(pvVar3 != (LPVOID)0x0) & 0xc;
      bVar7 = pvVar3 != (LPVOID)0x0;
      if (bVar7) {
        uVar5 = 0;
      }
      *(bool *)(param_2 + 0x28) = bVar7;
      *(ulonglong *)(param_2 + 0x18) = (ulonglong)bVar7;
      if (uVar5 != 0) {
        return uVar5;
      }
    }
    **(undefined2 **)(param_2 + 0x10) = 0;
  }
  *(undefined8 *)(param_2 + 0x20) = 0;
  return 0;
}



/* ===== 180006c5c FUN_180006c5c ===== */


uint FUN_180006c5c(short *param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  int iVar1;
  DWORD DVar2;
  LPVOID pvVar3;
  __acrt_ptd *p_Var4;
  uint uVar5;
  ulonglong uVar6;
  bool bVar7;
  
  if (param_1 == (short *)0x0) {
    if (*(char *)(param_2 + 0x28) != '\0') {
      FUN_180006a50(*(LPVOID *)(param_2 + 0x10));
      *(undefined1 *)(param_2 + 0x28) = 0;
    }
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined8 *)(param_2 + 0x18) = 0;
  }
  else {
    if (*param_1 != 0) {
      iVar1 = FUN_180008498(param_4,0,param_1,0xffffffff);
      uVar6 = (ulonglong)iVar1;
      if (iVar1 != 0) {
        if (*(ulonglong *)(param_2 + 0x18) < uVar6) {
          if (*(char *)(param_2 + 0x28) != '\0') {
            FUN_180006a50(*(LPVOID *)(param_2 + 0x10));
            *(undefined1 *)(param_2 + 0x28) = 0;
          }
          pvVar3 = _malloc_base(uVar6);
          *(LPVOID *)(param_2 + 0x10) = pvVar3;
          uVar5 = ~-(uint)(pvVar3 != (LPVOID)0x0) & 0xc;
          if (pvVar3 != (LPVOID)0x0) {
            uVar5 = 0;
          }
          *(bool *)(param_2 + 0x28) = pvVar3 != (LPVOID)0x0;
          *(ulonglong *)(param_2 + 0x18) = -(ulonglong)(pvVar3 != (LPVOID)0x0) & uVar6;
          if (uVar5 != 0) {
            return uVar5;
          }
        }
        iVar1 = FUN_180008498(param_4,0,param_1,0xffffffff);
        if ((longlong)iVar1 != 0) {
          *(longlong *)(param_2 + 0x20) = (longlong)iVar1 + -1;
          return 0;
        }
      }
      DVar2 = GetLastError();
      FUN_18000693c(DVar2);
      p_Var4 = FUN_1800069ac();
      return *(uint *)p_Var4;
    }
    if (*(longlong *)(param_2 + 0x18) == 0) {
      if (*(char *)(param_2 + 0x28) != '\0') {
        FUN_180006a50(*(LPVOID *)(param_2 + 0x10));
        *(undefined1 *)(param_2 + 0x28) = 0;
      }
      pvVar3 = _malloc_base(1);
      *(LPVOID *)(param_2 + 0x10) = pvVar3;
      uVar5 = ~-(uint)(pvVar3 != (LPVOID)0x0) & 0xc;
      bVar7 = pvVar3 != (LPVOID)0x0;
      if (bVar7) {
        uVar5 = 0;
      }
      *(bool *)(param_2 + 0x28) = bVar7;
      *(ulonglong *)(param_2 + 0x18) = (ulonglong)bVar7;
      if (uVar5 != 0) {
        return uVar5;
      }
    }
    **(undefined1 **)(param_2 + 0x10) = 0;
  }
  *(undefined8 *)(param_2 + 0x20) = 0;
  return 0;
}



/* ===== 180006e08 FUN_180006e08 ===== */


ulonglong FUN_180006e08(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  __acrt_ptd *p_Var2;
  byte *pbVar3;
  longlong *plVar4;
  LPVOID pvVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong *plVar9;
  char *pcVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong local_res10;
  ulonglong local_res18;
  char *local_res20;
  longlong *local_58;
  longlong *plStack_50;
  undefined8 local_48;
  
  if (param_2 == (undefined8 *)0x0) {
    p_Var2 = FUN_1800069ac();
    *(undefined4 *)p_Var2 = 0x16;
    FUN_180006804();
    uVar11 = 0x16;
  }
  else {
    *param_2 = 0;
    pbVar3 = (byte *)*param_1;
    local_58 = (longlong *)0x0;
    plStack_50 = (longlong *)0x0;
    local_48 = 0;
    while (plVar8 = plStack_50, plVar9 = local_58, pbVar3 != (byte *)0x0) {
      local_res10 = CONCAT53(local_res10._3_5_,0x3f2a);
      pbVar3 = FUN_18000a9b0(pbVar3,(byte *)&local_res10);
      if (pbVar3 == (byte *)0x0) {
        uVar7 = FUN_180007044((longlong)*param_1,0,0,(longlong *)&local_58);
        plVar9 = local_58;
        uVar11 = uVar7 & 0xffffffff;
        if ((int)uVar7 != 0) {
          plVar8 = local_58;
          if (local_58 != plStack_50) {
            do {
              FUN_180006a50((LPVOID)*plVar8);
              plVar8 = plVar8 + 1;
            } while (plVar8 != plStack_50);
          }
          goto LAB_180006f57;
        }
      }
      else {
        uVar7 = FUN_1800071c8((uchar *)*param_1,pbVar3,(longlong *)&local_58);
        plVar9 = local_58;
        uVar11 = uVar7 & 0xffffffff;
        if ((int)uVar7 != 0) {
          plVar8 = local_58;
          if (local_58 != plStack_50) {
            do {
              FUN_180006a50((LPVOID)*plVar8);
              plVar8 = plVar8 + 1;
            } while (plVar8 != plStack_50);
          }
          goto LAB_180006f57;
        }
      }
      param_1 = param_1 + 1;
      pbVar3 = (byte *)*param_1;
    }
    uVar7 = 0;
    local_res18 = 0;
    uVar11 = ((longlong)plStack_50 - (longlong)local_58 >> 3) + 1;
    plVar4 = local_58;
    if (local_58 != plStack_50) {
      do {
        lVar6 = -1;
        do {
          lVar6 = lVar6 + 1;
        } while (*(char *)(*plVar4 + lVar6) != '\0');
        plVar4 = plVar4 + 1;
        uVar7 = uVar7 + 1 + lVar6;
      } while (plVar4 != plStack_50);
      local_res18 = uVar7;
    }
    pvVar5 = __acrt_allocate_buffer_for_argv(uVar11,local_res18,1);
    if (pvVar5 == (LPVOID)0x0) {
      FUN_180006a50((LPVOID)0x0);
      for (plVar4 = plVar9; plVar4 != plVar8; plVar4 = plVar4 + 1) {
        FUN_180006a50((LPVOID)*plVar4);
      }
      uVar11 = 0xffffffff;
LAB_180006f57:
      FUN_180006a50(plVar9);
    }
    else {
      pcVar10 = (char *)((longlong)pvVar5 + uVar11 * 8);
      local_res20 = pcVar10;
      if (plVar9 != plVar8) {
        local_res10 = (longlong)pvVar5 - (longlong)plVar9;
        plVar4 = plVar9;
        do {
          lVar6 = -1;
          do {
            lVar12 = lVar6;
            lVar6 = lVar12 + 1;
          } while (*(char *)(*plVar4 + lVar6) != '\0');
          lVar12 = lVar12 + 2;
          iVar1 = FUN_18000a7e0(pcVar10,(longlong)(local_res20 + (local_res18 - (longlong)pcVar10)),
                                *plVar4,lVar12);
          if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
          *(char **)(local_res10 + (longlong)plVar4) = pcVar10;
          pcVar10 = pcVar10 + lVar12;
          plVar4 = plVar4 + 1;
        } while (plVar4 != plVar8);
      }
      *param_2 = pvVar5;
      FUN_180006a50((LPVOID)0x0);
      for (plVar4 = plVar9; plVar4 != plVar8; plVar4 = plVar4 + 1) {
        FUN_180006a50((LPVOID)*plVar4);
      }
      FUN_180006a50(plVar9);
      uVar11 = 0;
    }
  }
  return uVar11;
}



/* ===== 180007044 FUN_180007044 ===== */


undefined8 FUN_180007044(longlong param_1,longlong param_2,ulonglong param_3,longlong *param_4)

{
  int iVar1;
  char *pcVar2;
  LPVOID pvVar3;
  longlong lVar5;
  longlong lVar4;
  ulonglong uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  
  uVar7 = 0;
  lVar4 = -1;
  do {
    lVar5 = lVar4;
    lVar4 = lVar5 + 1;
  } while (*(char *)(param_1 + lVar4) != '\0');
  uVar6 = lVar5 + 2;
  if (~param_3 < uVar6) {
    return 0xc;
  }
  uVar8 = param_3 + 1 + uVar6;
  pcVar2 = _calloc_base(uVar8,1);
  if (((param_3 != 0) && (iVar1 = FUN_18000a7e0(pcVar2,uVar8,param_2,param_3), iVar1 != 0)) ||
     (iVar1 = FUN_18000a7e0(pcVar2 + param_3,uVar8 - param_3,param_1,uVar6), iVar1 != 0)) {
                    /* WARNING: Subroutine does not return */
    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  if (param_4[1] == param_4[2]) {
    if (*param_4 == 0) {
      pvVar3 = _calloc_base(4,8);
      *param_4 = (longlong)pvVar3;
      FUN_180006a50((LPVOID)0x0);
      lVar4 = *param_4;
      if (lVar4 != 0) {
        param_4[1] = lVar4;
        param_4[2] = lVar4 + 0x20;
        goto LAB_18000719a;
      }
    }
    else {
      uVar6 = param_4[2] - *param_4 >> 3;
      if (uVar6 < 0x8000000000000000) {
        pvVar3 = _recalloc_base((LPVOID)*param_4,uVar6 * 2,8);
        if (pvVar3 != (LPVOID)0x0) {
          *param_4 = (longlong)pvVar3;
          param_4[1] = (longlong)((longlong)pvVar3 + uVar6 * 8);
          param_4[2] = (longlong)((longlong)pvVar3 + uVar6 * 0x10);
          FUN_180006a50((LPVOID)0x0);
          goto LAB_18000719a;
        }
        FUN_180006a50((LPVOID)0x0);
      }
    }
    uVar7 = 0xc;
    FUN_180006a50(pcVar2);
  }
  else {
LAB_18000719a:
    *(char **)param_4[1] = pcVar2;
    param_4[1] = param_4[1] + 8;
  }
  FUN_180006a50((LPVOID)0x0);
  return uVar7;
}



/* ===== 1800071c8 FUN_1800071c8 ===== */


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1800071c8(uchar *param_1,uchar *param_2,longlong *param_3)

{
  byte bVar1;
  char *pcVar2;
  uint uVar3;
  BOOL BVar4;
  ulonglong uVar5;
  HANDLE hFindFile;
  INT_PTR IVar6;
  LPCWSTR lpFileName;
  char *pcVar7;
  longlong lVar8;
  longlong lVar9;
  byte bVar10;
  undefined1 auStackY_378 [32];
  undefined1 local_348 [8];
  ulonglong local_340;
  undefined8 local_338;
  undefined8 local_330;
  LPCWSTR local_328;
  undefined8 local_320;
  undefined8 local_318;
  char local_310;
  longlong local_308;
  longlong local_300;
  char local_2f0;
  longlong local_2e8;
  longlong local_2e0;
  char local_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  char *local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  char local_2a0;
  _WIN32_FIND_DATAW local_298;
  ulonglong local_48;
  
  local_48 = DAT_180019040 ^ (ulonglong)auStackY_378;
  while ((param_2 != param_1 &&
         ((0x2d < (byte)(*param_2 - 0x2f) ||
          ((0x200000000801U >> ((longlong)(char)(*param_2 - 0x2f) & 0x3fU) & 1) == 0))))) {
    param_2 = (uchar *)FUN_18000ad68(param_1,param_2);
  }
  if ((*param_2 == ':') && (param_2 != param_1 + 1)) {
    uVar5 = FUN_180007044((longlong)param_1,0,0,param_3);
  }
  else {
    bVar10 = *param_2 - 0x2f;
    if ((0x2d < bVar10) ||
       (bVar1 = 1, (0x200000000801U >> ((longlong)(char)bVar10 & 0x3fU) & 1) == 0)) {
      bVar1 = 0;
    }
    uVar5 = -(ulonglong)bVar1 & (ulonglong)(param_2 + (1 - (longlong)param_1));
    local_340 = uVar5;
    FUN_18000dde0((undefined1 (*) [32])&local_298,0,0x250);
    local_338 = 0;
    local_330 = 0;
    local_328 = (LPCWSTR)0x0;
    local_320 = 0;
    local_318 = 0;
    local_310 = '\0';
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_308,(__crt_locale_pointers *)0x0);
    if (*(int *)(local_300 + 0xc) == 0xfde9) {
      if (local_2f0 != '\0') {
        *(uint *)(local_308 + 0x3a8) = *(uint *)(local_308 + 0x3a8) & 0xfffffffd;
      }
      uVar3 = 0xfde9;
    }
    else {
      IVar6 = FUN_180008948();
      if ((int)IVar6 == 0) {
        if (local_2f0 != '\0') {
          *(uint *)(local_308 + 0x3a8) = *(uint *)(local_308 + 0x3a8) & 0xfffffffd;
        }
        uVar3 = 1;
      }
      else {
        if (local_2f0 != '\0') {
          *(uint *)(local_308 + 0x3a8) = *(uint *)(local_308 + 0x3a8) & 0xfffffffd;
        }
        uVar3 = 0;
      }
    }
    uVar3 = FUN_180006abc((char *)param_1,(longlong)&local_338,local_348,uVar3);
    lpFileName = local_328;
    if (uVar3 != 0) {
      lpFileName = (LPCWSTR)0x0;
    }
    hFindFile = FindFirstFileExW(lpFileName,FindExInfoStandard,&local_298,FindExSearchNameMatch,
                                 (LPVOID)0x0,0);
    if (hFindFile == (HANDLE)0xffffffffffffffff) {
      uVar5 = FUN_180007044((longlong)param_1,0,0,param_3);
      uVar5 = uVar5 & 0xffffffff;
      if (local_310 != '\0') {
        FUN_180006a50(local_328);
      }
    }
    else {
      lVar9 = param_3[1] - *param_3 >> 3;
      do {
        uVar3 = 0;
        local_2c8 = 0;
        local_2c0 = 0;
        local_2b8 = (char *)0x0;
        local_2b0 = 0;
        local_2a8 = 0;
        local_2a0 = '\0';
        _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_2e8,(__crt_locale_pointers *)0x0);
        if (*(int *)(local_2e0 + 0xc) == 0xfde9) {
          if (local_2d0 != '\0') {
            *(uint *)(local_2e8 + 0x3a8) = *(uint *)(local_2e8 + 0x3a8) & 0xfffffffd;
          }
          uVar3 = 0xfde9;
        }
        else {
          IVar6 = FUN_180008948();
          if ((int)IVar6 == 0) {
            if (local_2d0 != '\0') {
              *(uint *)(local_2e8 + 0x3a8) = *(uint *)(local_2e8 + 0x3a8) & 0xfffffffd;
            }
            uVar3 = 1;
          }
          else if (local_2d0 != '\0') {
            *(uint *)(local_2e8 + 0x3a8) = *(uint *)(local_2e8 + 0x3a8) & 0xfffffffd;
          }
        }
        uVar3 = FUN_180006c5c(local_298.cFileName,(longlong)&local_2c8,local_348,uVar3);
        pcVar2 = local_2b8;
        pcVar7 = local_2b8;
        if (uVar3 != 0) {
          pcVar7 = (char *)0x0;
        }
        if ((*pcVar7 == '.') && ((pcVar7[1] == '\0' || ((pcVar7[1] == '.' && (pcVar7[2] == '\0')))))
           ) {
          if (local_2a0 != '\0') {
            FUN_180006a50(local_2b8);
          }
        }
        else {
          uVar5 = FUN_180007044((longlong)pcVar7,(longlong)param_1,uVar5,param_3);
          if ((int)uVar5 != 0) {
            if (local_2a0 != '\0') {
              FUN_180006a50(pcVar2);
            }
            FindClose(hFindFile);
            if (local_310 != '\0') {
              FUN_180006a50(local_328);
            }
            return uVar5 & 0xffffffff;
          }
          if (local_2a0 != (char)uVar5) {
            FUN_180006a50(pcVar2);
          }
          uVar5 = local_340;
        }
        BVar4 = FindNextFileW(hFindFile,&local_298);
      } while (BVar4 != 0);
      lVar8 = param_3[1] - *param_3 >> 3;
      if (lVar9 != lVar8) {
        FUN_18000a440((undefined1 *)(*param_3 + lVar9 * 8),lVar8 - lVar9,8,&LAB_180006aa8);
      }
      FindClose(hFindFile);
      if (local_310 != '\0') {
        FUN_180006a50(local_328);
      }
      uVar5 = 0;
    }
  }
  return uVar5;
}



/* ===== 180007528 _LocaleUpdate ===== */


/* Library Function - Single Match
    public: __cdecl _LocaleUpdate::_LocaleUpdate(struct __crt_locale_pointers * __ptr64 const)
   __ptr64
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

_LocaleUpdate * __thiscall
_LocaleUpdate::_LocaleUpdate(_LocaleUpdate *this,__crt_locale_pointers *param_1)

{
  _LocaleUpdate *p_Var1;
  uint uVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  this[0x18] = (_LocaleUpdate)0x0;
  p_Var1 = this + 8;
  if (param_1 == (__crt_locale_pointers *)0x0) {
    if (DAT_1800dc640 != 0) {
      lVar3 = FUN_1800061b0();
      *(longlong *)this = lVar3;
      *(longlong *)p_Var1 = *(longlong *)(lVar3 + 0x90);
      *(undefined8 *)(this + 0x10) = *(undefined8 *)(lVar3 + 0x88);
      __acrt_update_locale_info(lVar3,(longlong *)p_Var1);
      FUN_18000993c(*(longlong *)this,(longlong *)(this + 0x10));
      uVar2 = *(uint *)(*(longlong *)this + 0x3a8);
      if ((uVar2 & 2) == 0) {
        *(uint *)(*(longlong *)this + 0x3a8) = uVar2 | 2;
        this[0x18] = (_LocaleUpdate)0x1;
        return this;
      }
      return this;
    }
    uVar4 = PTR_PTR_180019778._0_4_;
    uVar5 = PTR_PTR_180019778._4_4_;
    uVar6 = PTR_DAT_180019780._0_4_;
    uVar7 = PTR_DAT_180019780._4_4_;
  }
  else {
    uVar4 = *(undefined4 *)param_1;
    uVar5 = *(undefined4 *)(param_1 + 4);
    uVar6 = *(undefined4 *)(param_1 + 8);
    uVar7 = *(undefined4 *)(param_1 + 0xc);
  }
  *(undefined4 *)p_Var1 = uVar4;
  *(undefined4 *)(this + 0xc) = uVar5;
  *(undefined4 *)(this + 0x10) = uVar6;
  *(undefined4 *)(this + 0x14) = uVar7;
  return this;
}



/* ===== 1800075c4 thunk_FUN_180006e08 ===== */


ulonglong thunk_FUN_180006e08(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  __acrt_ptd *p_Var2;
  byte *pbVar3;
  longlong *plVar4;
  LPVOID pvVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong *plVar9;
  char *pcVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lStackX_10;
  ulonglong uStackX_18;
  char *pcStackX_20;
  longlong *plStack_58;
  longlong *plStack_50;
  undefined8 uStack_48;
  
  if (param_2 == (undefined8 *)0x0) {
    p_Var2 = FUN_1800069ac();
    *(undefined4 *)p_Var2 = 0x16;
    FUN_180006804();
    uVar11 = 0x16;
  }
  else {
    *param_2 = 0;
    pbVar3 = (byte *)*param_1;
    plStack_58 = (longlong *)0x0;
    plStack_50 = (longlong *)0x0;
    uStack_48 = 0;
    while (plVar8 = plStack_50, plVar9 = plStack_58, pbVar3 != (byte *)0x0) {
      lStackX_10 = CONCAT53(lStackX_10._3_5_,0x3f2a);
      pbVar3 = FUN_18000a9b0(pbVar3,(byte *)&lStackX_10);
      if (pbVar3 == (byte *)0x0) {
        uVar7 = FUN_180007044((longlong)*param_1,0,0,(longlong *)&plStack_58);
        plVar9 = plStack_58;
        uVar11 = uVar7 & 0xffffffff;
        if ((int)uVar7 != 0) {
          plVar8 = plStack_58;
          if (plStack_58 != plStack_50) {
            do {
              FUN_180006a50((LPVOID)*plVar8);
              plVar8 = plVar8 + 1;
            } while (plVar8 != plStack_50);
          }
          goto LAB_180006f57;
        }
      }
      else {
        uVar7 = FUN_1800071c8((uchar *)*param_1,pbVar3,(longlong *)&plStack_58);
        plVar9 = plStack_58;
        uVar11 = uVar7 & 0xffffffff;
        if ((int)uVar7 != 0) {
          plVar8 = plStack_58;
          if (plStack_58 != plStack_50) {
            do {
              FUN_180006a50((LPVOID)*plVar8);
              plVar8 = plVar8 + 1;
            } while (plVar8 != plStack_50);
          }
          goto LAB_180006f57;
        }
      }
      param_1 = param_1 + 1;
      pbVar3 = (byte *)*param_1;
    }
    uVar7 = 0;
    uStackX_18 = 0;
    uVar11 = ((longlong)plStack_50 - (longlong)plStack_58 >> 3) + 1;
    plVar4 = plStack_58;
    if (plStack_58 != plStack_50) {
      do {
        lVar6 = -1;
        do {
          lVar6 = lVar6 + 1;
        } while (*(char *)(*plVar4 + lVar6) != '\0');
        plVar4 = plVar4 + 1;
        uVar7 = uVar7 + 1 + lVar6;
      } while (plVar4 != plStack_50);
      uStackX_18 = uVar7;
    }
    pvVar5 = __acrt_allocate_buffer_for_argv(uVar11,uStackX_18,1);
    if (pvVar5 == (LPVOID)0x0) {
      FUN_180006a50((LPVOID)0x0);
      for (plVar4 = plVar9; plVar4 != plVar8; plVar4 = plVar4 + 1) {
        FUN_180006a50((LPVOID)*plVar4);
      }
      uVar11 = 0xffffffff;
LAB_180006f57:
      FUN_180006a50(plVar9);
    }
    else {
      pcVar10 = (char *)((longlong)pvVar5 + uVar11 * 8);
      pcStackX_20 = pcVar10;
      if (plVar9 != plVar8) {
        lStackX_10 = (longlong)pvVar5 - (longlong)plVar9;
        plVar4 = plVar9;
        do {
          lVar6 = -1;
          do {
            lVar12 = lVar6;
            lVar6 = lVar12 + 1;
          } while (*(char *)(*plVar4 + lVar6) != '\0');
          lVar12 = lVar12 + 2;
          iVar1 = FUN_18000a7e0(pcVar10,(longlong)(pcStackX_20 + (uStackX_18 - (longlong)pcVar10)),
                                *plVar4,lVar12);
          if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
          *(char **)(lStackX_10 + (longlong)plVar4) = pcVar10;
          pcVar10 = pcVar10 + lVar12;
          plVar4 = plVar4 + 1;
        } while (plVar4 != plVar8);
      }
      *param_2 = pvVar5;
      FUN_180006a50((LPVOID)0x0);
      for (plVar4 = plVar9; plVar4 != plVar8; plVar4 = plVar4 + 1) {
        FUN_180006a50((LPVOID)*plVar4);
      }
      FUN_180006a50(plVar9);
      uVar11 = 0;
    }
  }
  return uVar11;
}



/* ===== 1800075cc FUN_1800075cc ===== */


undefined4 FUN_1800075cc(short *param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  int iVar1;
  DWORD DVar2;
  __acrt_ptd *p_Var3;
  
  if (param_1 == (short *)0x0) {
    if (*(char *)(param_2 + 0x28) != '\0') {
      *(undefined1 *)(param_2 + 0x28) = 0;
    }
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined8 *)(param_2 + 0x18) = 0;
  }
  else {
    if (*param_1 != 0) {
      iVar1 = FUN_180008498(param_4,0,param_1,0xffffffff);
      if (iVar1 != 0) {
        if (*(ulonglong *)(param_2 + 0x18) < (ulonglong)(longlong)iVar1) {
          if (*(char *)(param_2 + 0x28) != '\0') {
            *(undefined1 *)(param_2 + 0x28) = 0;
          }
          goto LAB_180007620;
        }
        iVar1 = FUN_180008498(param_4,0,param_1,0xffffffff);
        if ((longlong)iVar1 != 0) {
          *(longlong *)(param_2 + 0x20) = (longlong)iVar1 + -1;
          return 0;
        }
      }
      DVar2 = GetLastError();
      FUN_18000693c(DVar2);
      p_Var3 = FUN_1800069ac();
      return *(undefined4 *)p_Var3;
    }
    if (*(longlong *)(param_2 + 0x18) == 0) {
      if (*(char *)(param_2 + 0x28) != '\0') {
        *(undefined1 *)(param_2 + 0x28) = 0;
      }
LAB_180007620:
      p_Var3 = FUN_1800069ac();
      *(undefined4 *)p_Var3 = 0x22;
      *(undefined1 *)(param_2 + 0x28) = 0;
      *(undefined8 *)(param_2 + 0x18) = 0;
      return 0x22;
    }
    **(undefined1 **)(param_2 + 0x10) = 0;
  }
  *(undefined8 *)(param_2 + 0x20) = 0;
  return 0;
}



/* ===== 1800076e8 FUN_1800076e8 ===== */


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1800076e8(HMODULE param_1,undefined8 param_2,ulonglong param_3)

{
  DWORD DVar1;
  INT_PTR IVar2;
  uint uVar3;
  undefined1 auStack_2a8 [32];
  undefined1 local_288 [8];
  longlong local_280;
  longlong local_278;
  char local_268;
  undefined8 local_260;
  ulonglong local_258;
  undefined8 local_250;
  ulonglong local_248;
  ulonglong local_240;
  undefined1 local_238;
  WCHAR local_228 [264];
  ulonglong local_18;
  
  local_18 = DAT_180019040 ^ (ulonglong)auStack_2a8;
  DVar1 = GetModuleFileNameW(param_1,local_228,0x105);
  if (DVar1 == 0) {
    DVar1 = GetLastError();
    FUN_18000693c(DVar1);
    local_240 = 0;
  }
  else {
    local_240 = 0;
    local_238 = 0;
    local_260 = param_2;
    local_258 = param_3 & 0xffffffff;
    local_250 = param_2;
    local_248 = param_3 & 0xffffffff;
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_280,(__crt_locale_pointers *)0x0);
    uVar3 = 0xfde9;
    if (*(int *)(local_278 + 0xc) == 0xfde9) {
      if (local_268 != '\0') {
        *(uint *)(local_280 + 0x3a8) = *(uint *)(local_280 + 0x3a8) & 0xfffffffd;
      }
    }
    else {
      IVar2 = FUN_180008948();
      if ((int)IVar2 == 0) {
        if (local_268 != (char)IVar2) {
          *(uint *)(local_280 + 0x3a8) = *(uint *)(local_280 + 0x3a8) & 0xfffffffd;
        }
        uVar3 = 1;
      }
      else {
        if (local_268 != '\0') {
          *(uint *)(local_280 + 0x3a8) = *(uint *)(local_280 + 0x3a8) & 0xfffffffd;
        }
        uVar3 = 0;
      }
    }
    FUN_1800075cc(local_228,(longlong)&local_260,local_288,uVar3);
    local_240 = local_240 & 0xffffffff;
  }
  return local_240;
}



/* ===== 18000780c FUN_18000780c ===== */


void FUN_18000780c(undefined8 param_1,int *param_2,undefined8 *param_3,int *param_4)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  __acrt_ptd *p_Var5;
  undefined1 (*pauVar6) [32];
  undefined1 (*pauVar7) [32];
  longlong lVar8;
  
  __acrt_lock(*param_2);
  puVar4 = (undefined8 *)(*(longlong *)(*(longlong *)*param_3 + 0x88) + 0x18);
  if (DAT_1800dc0b8 == (undefined1 (*) [32])0x0) {
LAB_1800078bf:
    p_Var5 = FUN_1800069ac();
    *(undefined4 *)p_Var5 = 0x16;
    FUN_180006804();
  }
  else {
    if (puVar4 == (undefined8 *)0x0) {
      FUN_18000dde0(DAT_1800dc0b8,0,0x101);
      goto LAB_1800078bf;
    }
    lVar8 = 2;
    pauVar7 = DAT_1800dc0b8;
    do {
      uVar3 = puVar4[1];
      *(undefined8 *)*pauVar7 = *puVar4;
      *(undefined8 *)(*pauVar7 + 8) = uVar3;
      uVar3 = puVar4[3];
      *(undefined8 *)(*pauVar7 + 0x10) = puVar4[2];
      *(undefined8 *)(*pauVar7 + 0x18) = uVar3;
      uVar3 = puVar4[5];
      *(undefined8 *)pauVar7[1] = puVar4[4];
      *(undefined8 *)(pauVar7[1] + 8) = uVar3;
      uVar3 = puVar4[7];
      *(undefined8 *)(pauVar7[1] + 0x10) = puVar4[6];
      *(undefined8 *)(pauVar7[1] + 0x18) = uVar3;
      uVar3 = puVar4[9];
      *(undefined8 *)pauVar7[2] = puVar4[8];
      *(undefined8 *)(pauVar7[2] + 8) = uVar3;
      uVar3 = puVar4[0xb];
      *(undefined8 *)(pauVar7[2] + 0x10) = puVar4[10];
      *(undefined8 *)(pauVar7[2] + 0x18) = uVar3;
      uVar3 = puVar4[0xd];
      *(undefined8 *)pauVar7[3] = puVar4[0xc];
      *(undefined8 *)(pauVar7[3] + 8) = uVar3;
      pauVar6 = pauVar7 + 4;
      uVar3 = puVar4[0xf];
      *(undefined8 *)(pauVar7[3] + 0x10) = puVar4[0xe];
      *(undefined8 *)(pauVar7[3] + 0x18) = uVar3;
      puVar4 = puVar4 + 0x10;
      lVar8 = lVar8 + -1;
      pauVar7 = pauVar6;
    } while (lVar8 != 0);
    (*pauVar6)[0] = *(undefined1 *)puVar4;
  }
  lVar8 = 2;
  puVar4 = (undefined8 *)(*(longlong *)(*(longlong *)*param_3 + 0x88) + 0x119);
  if (DAT_1800dc0c0 != (undefined1 (*) [32])0x0) {
    pauVar7 = DAT_1800dc0c0;
    if (puVar4 != (undefined8 *)0x0) {
      do {
        uVar3 = puVar4[1];
        *(undefined8 *)*pauVar7 = *puVar4;
        *(undefined8 *)(*pauVar7 + 8) = uVar3;
        uVar3 = puVar4[3];
        *(undefined8 *)(*pauVar7 + 0x10) = puVar4[2];
        *(undefined8 *)(*pauVar7 + 0x18) = uVar3;
        uVar3 = puVar4[5];
        *(undefined8 *)pauVar7[1] = puVar4[4];
        *(undefined8 *)(pauVar7[1] + 8) = uVar3;
        uVar3 = puVar4[7];
        *(undefined8 *)(pauVar7[1] + 0x10) = puVar4[6];
        *(undefined8 *)(pauVar7[1] + 0x18) = uVar3;
        uVar3 = puVar4[9];
        *(undefined8 *)pauVar7[2] = puVar4[8];
        *(undefined8 *)(pauVar7[2] + 8) = uVar3;
        uVar3 = puVar4[0xb];
        *(undefined8 *)(pauVar7[2] + 0x10) = puVar4[10];
        *(undefined8 *)(pauVar7[2] + 0x18) = uVar3;
        uVar3 = puVar4[0xd];
        *(undefined8 *)pauVar7[3] = puVar4[0xc];
        *(undefined8 *)(pauVar7[3] + 8) = uVar3;
        uVar3 = puVar4[0xf];
        *(undefined8 *)(pauVar7[3] + 0x10) = puVar4[0xe];
        *(undefined8 *)(pauVar7[3] + 0x18) = uVar3;
        puVar4 = puVar4 + 0x10;
        lVar8 = lVar8 + -1;
        pauVar7 = pauVar7 + 4;
      } while (lVar8 != 0);
      goto LAB_180007970;
    }
    FUN_18000dde0(DAT_1800dc0c0,0,0x100);
  }
  p_Var5 = FUN_1800069ac();
  *(undefined4 *)p_Var5 = 0x16;
  FUN_180006804();
LAB_180007970:
  piVar2 = (int *)**(undefined8 **)param_3[1];
  LOCK();
  iVar1 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if ((iVar1 == 1) && ((undefined *)**(undefined8 **)param_3[1] != &DAT_1800190e0)) {
    FUN_180006a50((LPVOID)**(undefined8 **)param_3[1]);
  }
  **(undefined8 **)param_3[1] = *(undefined8 *)(*(longlong *)*param_3 + 0x88);
  LOCK();
  **(int **)(*(longlong *)*param_3 + 0x88) = **(int **)(*(longlong *)*param_3 + 0x88) + 1;
  UNLOCK();
  __acrt_unlock(*param_4);
  return;
}



/* ===== 1800079dc getSystemCP ===== */


/* Library Function - Single Match
    int __cdecl getSystemCP(int)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl getSystemCP(int param_1)

{
  longlong local_28;
  longlong local_20;
  char local_10;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_28,(__crt_locale_pointers *)0x0);
  DAT_1800dc0d0 = 0;
  if (param_1 == -2) {
    DAT_1800dc0d0 = 1;
    param_1 = GetOEMCP();
  }
  else if (param_1 == -3) {
    DAT_1800dc0d0 = 1;
    param_1 = GetACP();
  }
  else if (param_1 == -4) {
    DAT_1800dc0d0 = 1;
    param_1 = *(UINT *)(local_20 + 0xc);
  }
  if (local_10 != '\0') {
    *(uint *)(local_28 + 0x3a8) = *(uint *)(local_28 + 0x3a8) & 0xfffffffd;
  }
  return param_1;
}



/* ===== 180007a5c FUN_180007a5c ===== */


void FUN_180007a5c(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined2 *puVar3;
  longlong lVar4;
  
  FUN_18000dde0((undefined1 (*) [32])(param_1 + 0x18),0,0x101);
  lVar2 = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 0x220) = 0;
  puVar3 = (undefined2 *)(param_1 + 0xc);
  for (lVar1 = 6; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  lVar1 = 0;
  do {
    lVar4 = lVar1 + 1;
    *(undefined1 *)(param_1 + lVar1 + 0x18) = (&DAT_1800190f8)[lVar1];
    lVar1 = lVar4;
  } while (lVar4 < 0x101);
  do {
    lVar1 = lVar2 + 1;
    *(undefined1 *)(param_1 + lVar2 + 0x119) = (&DAT_1800191f9)[lVar2];
    lVar2 = lVar1;
  } while (lVar1 < 0x100);
  return;
}



/* ===== 180007af4 FUN_180007af4 ===== */


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180007af4(longlong param_1)

{
  byte bVar1;
  byte bVar2;
  BOOL BVar3;
  uint uVar4;
  byte *pbVar5;
  char *pcVar6;
  ulonglong uVar7;
  BYTE *pBVar8;
  WORD *pWVar9;
  longlong lVar10;
  undefined1 auStackY_788 [32];
  _cpinfo local_738;
  char local_718 [231];
  byte abStack_631 [25];
  undefined1 local_618 [231];
  byte abStack_531 [25];
  undefined1 local_518 [256];
  WORD local_418 [512];
  ulonglong local_18;
  
  local_18 = DAT_180019040 ^ (ulonglong)auStackY_788;
  local_738.LeadByte[10] = '\0';
  local_738.LeadByte[0xb] = '\0';
  local_738._18_2_ = 0;
  local_738.MaxCharSize = 0;
  local_738.DefaultChar[0] = '\0';
  local_738.DefaultChar[1] = '\0';
  local_738.LeadByte[0] = '\0';
  local_738.LeadByte[1] = '\0';
  local_738.LeadByte[2] = '\0';
  local_738.LeadByte[3] = '\0';
  local_738.LeadByte[4] = '\0';
  local_738.LeadByte[5] = '\0';
  local_738.LeadByte[6] = '\0';
  local_738.LeadByte[7] = '\0';
  local_738.LeadByte[8] = '\0';
  local_738.LeadByte[9] = '\0';
  if ((*(UINT *)(param_1 + 4) == 0xfde9) ||
     (BVar3 = GetCPInfo(*(UINT *)(param_1 + 4),&local_738), BVar3 == 0)) {
    uVar4 = 0;
    pbVar5 = (byte *)(param_1 + 0x19);
    do {
      if (uVar4 - 0x41 < 0x1a) {
        *pbVar5 = *pbVar5 | 0x10;
        bVar2 = (char)uVar4 + 0x20;
      }
      else if (uVar4 - 0x61 < 0x1a) {
        *pbVar5 = *pbVar5 | 0x20;
        bVar2 = (char)uVar4 - 0x20;
      }
      else {
        bVar2 = 0;
      }
      pbVar5[0x100] = bVar2;
      uVar4 = uVar4 + 1;
      pbVar5 = pbVar5 + 1;
    } while (uVar4 < 0x100);
  }
  else {
    uVar4 = 0;
    pcVar6 = local_718;
    lVar10 = 0x100;
    do {
      *pcVar6 = (char)uVar4;
      uVar4 = uVar4 + 1;
      pcVar6 = pcVar6 + 1;
    } while (uVar4 < 0x100);
    pBVar8 = local_738.LeadByte;
    local_718[0] = ' ';
    bVar2 = local_738.LeadByte[0];
    while (bVar2 != 0) {
      bVar1 = pBVar8[1];
      uVar7 = (ulonglong)bVar2;
      while ((uVar4 = (uint)uVar7, uVar4 <= bVar1 && (uVar4 < 0x100))) {
        local_718[uVar7] = ' ';
        uVar7 = (ulonglong)(uVar4 + 1);
      }
      pBVar8 = pBVar8 + 2;
      bVar2 = *pBVar8;
    }
    FUN_18000ae04((__crt_locale_pointers *)0x0,1,local_718,0x100,local_418,*(uint *)(param_1 + 4),0)
    ;
    __acrt_LCMapStringA((__crt_locale_pointers *)0x0,*(ushort **)(param_1 + 0x220),0x100,local_718,
                        0x100,local_618,0x100,*(uint *)(param_1 + 4),0);
    __acrt_LCMapStringA((__crt_locale_pointers *)0x0,*(ushort **)(param_1 + 0x220),0x200,local_718,
                        0x100,local_518,0x100,*(uint *)(param_1 + 4),0);
    pWVar9 = local_418;
    pbVar5 = (byte *)(param_1 + 0x19);
    do {
      if ((*pWVar9 & 1) == 0) {
        if ((*pWVar9 & 2) == 0) {
          bVar2 = 0;
        }
        else {
          *pbVar5 = *pbVar5 | 0x20;
          bVar2 = pbVar5[(longlong)(abStack_531 + -param_1)];
        }
      }
      else {
        *pbVar5 = *pbVar5 | 0x10;
        bVar2 = pbVar5[(longlong)(abStack_631 + -param_1)];
      }
      pbVar5[0x100] = bVar2;
      pWVar9 = pWVar9 + 1;
      pbVar5 = pbVar5 + 1;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  return;
}



/* ===== 180007cec FUN_180007cec ===== */


ulonglong FUN_180007cec(int param_1,char param_2,__acrt_ptd *param_3,__crt_multibyte_data **param_4)

{
  undefined8 uVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int iVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  __acrt_ptd *p_Var13;
  undefined8 *puVar14;
  longlong lVar15;
  longlong lVar16;
  __acrt_ptd *local_res18;
  __crt_multibyte_data **local_res20;
  undefined1 local_268 [4];
  int local_264 [3];
  __acrt_ptd **local_258;
  __crt_multibyte_data ***local_250;
  undefined8 local_248 [70];
  
  local_res18 = param_3;
  local_res20 = param_4;
  update_thread_multibyte_data_internal(param_3,param_4);
  iVar8 = getSystemCP(param_1);
  if (iVar8 == *(int *)(*(longlong *)(local_res18 + 0x88) + 4)) {
    uVar9 = 0;
  }
  else {
    puVar10 = _malloc_base(0x228);
    if (puVar10 == (undefined8 *)0x0) {
      FUN_180006a50((LPVOID)0x0);
      uVar9 = 0xffffffff;
    }
    else {
      lVar15 = 4;
      lVar16 = 4;
      puVar6 = *(undefined8 **)(local_res18 + 0x88);
      puVar7 = local_248;
      do {
        puVar14 = puVar7;
        puVar11 = puVar6;
        uVar1 = puVar11[1];
        uVar3 = puVar11[2];
        uVar4 = puVar11[3];
        *puVar14 = *puVar11;
        puVar14[1] = uVar1;
        uVar1 = puVar11[4];
        uVar5 = puVar11[5];
        puVar14[2] = uVar3;
        puVar14[3] = uVar4;
        uVar3 = puVar11[6];
        uVar4 = puVar11[7];
        puVar14[4] = uVar1;
        puVar14[5] = uVar5;
        uVar1 = puVar11[8];
        uVar5 = puVar11[9];
        puVar14[6] = uVar3;
        puVar14[7] = uVar4;
        uVar3 = puVar11[10];
        uVar4 = puVar11[0xb];
        puVar14[8] = uVar1;
        puVar14[9] = uVar5;
        uVar1 = puVar11[0xc];
        uVar5 = puVar11[0xd];
        puVar14[10] = uVar3;
        puVar14[0xb] = uVar4;
        uVar3 = puVar11[0xe];
        uVar4 = puVar11[0xf];
        puVar14[0xc] = uVar1;
        puVar14[0xd] = uVar5;
        puVar14[0xe] = uVar3;
        puVar14[0xf] = uVar4;
        lVar16 = lVar16 + -1;
        puVar6 = puVar11 + 0x10;
        puVar7 = puVar14 + 0x10;
      } while (lVar16 != 0);
      uVar3 = puVar11[0x11];
      uVar4 = puVar11[0x12];
      uVar5 = puVar11[0x13];
      uVar1 = puVar11[0x14];
      puVar14[0x10] = puVar11[0x10];
      puVar14[0x11] = uVar3;
      puVar14[0x12] = uVar4;
      puVar14[0x13] = uVar5;
      puVar14[0x14] = uVar1;
      puVar6 = local_248;
      puVar7 = puVar10;
      do {
        puVar14 = puVar7;
        puVar11 = puVar6;
        uVar1 = puVar11[1];
        uVar3 = puVar11[2];
        uVar4 = puVar11[3];
        *puVar14 = *puVar11;
        puVar14[1] = uVar1;
        uVar1 = puVar11[4];
        uVar5 = puVar11[5];
        puVar14[2] = uVar3;
        puVar14[3] = uVar4;
        uVar3 = puVar11[6];
        uVar4 = puVar11[7];
        puVar14[4] = uVar1;
        puVar14[5] = uVar5;
        uVar1 = puVar11[8];
        uVar5 = puVar11[9];
        puVar14[6] = uVar3;
        puVar14[7] = uVar4;
        uVar3 = puVar11[10];
        uVar4 = puVar11[0xb];
        puVar14[8] = uVar1;
        puVar14[9] = uVar5;
        uVar1 = puVar11[0xc];
        uVar5 = puVar11[0xd];
        puVar14[10] = uVar3;
        puVar14[0xb] = uVar4;
        uVar3 = puVar11[0xe];
        uVar4 = puVar11[0xf];
        puVar14[0xc] = uVar1;
        puVar14[0xd] = uVar5;
        puVar14[0xe] = uVar3;
        puVar14[0xf] = uVar4;
        lVar15 = lVar15 + -1;
        puVar6 = puVar11 + 0x10;
        puVar7 = puVar14 + 0x10;
      } while (lVar15 != 0);
      uVar3 = puVar11[0x11];
      uVar4 = puVar11[0x12];
      uVar5 = puVar11[0x13];
      uVar1 = puVar11[0x14];
      puVar14[0x10] = puVar11[0x10];
      puVar14[0x11] = uVar3;
      puVar14[0x12] = uVar4;
      puVar14[0x13] = uVar5;
      puVar14[0x14] = uVar1;
      *(undefined4 *)puVar10 = 0;
      uVar12 = FUN_180008090(iVar8,(longlong)puVar10);
      uVar9 = uVar12 & 0xffffffff;
      if ((int)uVar12 == -1) {
        p_Var13 = FUN_1800069ac();
        *(undefined4 *)p_Var13 = 0x16;
        FUN_180006a50(puVar10);
        uVar9 = 0xffffffff;
      }
      else {
        if (param_2 == '\0') {
          FUN_180009fb0();
        }
        piVar2 = *(int **)(local_res18 + 0x88);
        LOCK();
        iVar8 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if ((iVar8 == 1) && (*(undefined **)(local_res18 + 0x88) != &DAT_1800190e0)) {
          FUN_180006a50(*(undefined **)(local_res18 + 0x88));
        }
        *(undefined4 *)puVar10 = 1;
        *(undefined8 **)(local_res18 + 0x88) = puVar10;
        if ((DAT_180019898 & *(uint *)(local_res18 + 0x3a8)) == 0) {
          local_258 = &local_res18;
          local_250 = &local_res20;
          local_264[0] = 5;
          local_264[1] = 5;
          FUN_18000780c(local_268,local_264 + 1,&local_258,local_264);
          if (param_2 != '\0') {
            PTR_DAT_180019780 = *local_res20;
          }
        }
        FUN_180006a50((LPVOID)0x0);
      }
    }
  }
  return uVar9;
}



/* ===== 180007f5c update_thread_multibyte_data_internal ===== */


/* Library Function - Single Match
    struct __crt_multibyte_data * __ptr64 __cdecl update_thread_multibyte_data_internal(struct
   __acrt_ptd * __ptr64 const,struct __crt_multibyte_data * __ptr64 * __ptr64 const)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

__crt_multibyte_data * __cdecl
update_thread_multibyte_data_internal(__acrt_ptd *param_1,__crt_multibyte_data **param_2)

{
  int iVar1;
  __crt_multibyte_data *p_Var2;
  
  if (((*(uint *)(param_1 + 0x3a8) & DAT_180019898) == 0) || (*(longlong *)(param_1 + 0x90) == 0)) {
    __acrt_lock(5);
    p_Var2 = *(__crt_multibyte_data **)(param_1 + 0x88);
    if (p_Var2 != *param_2) {
      if (p_Var2 != (__crt_multibyte_data *)0x0) {
        LOCK();
        iVar1 = *(int *)p_Var2;
        *(int *)p_Var2 = *(int *)p_Var2 + -1;
        UNLOCK();
        if ((iVar1 == 1) && (p_Var2 != (__crt_multibyte_data *)&DAT_1800190e0)) {
          FUN_180006a50(p_Var2);
        }
      }
      p_Var2 = *param_2;
      *(__crt_multibyte_data **)(param_1 + 0x88) = p_Var2;
      LOCK();
      *(int *)p_Var2 = *(int *)p_Var2 + 1;
      UNLOCK();
    }
    __acrt_unlock(5);
  }
  else {
    p_Var2 = *(__crt_multibyte_data **)(param_1 + 0x88);
  }
  if (p_Var2 == (__crt_multibyte_data *)0x0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return p_Var2;
}



/* ===== 180008014 __acrt_initialize_multibyte ===== */


/* Library Function - Single Match
    __acrt_initialize_multibyte
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined8 __acrt_initialize_multibyte(void)

{
  ulonglong in_RAX;
  __acrt_ptd *p_Var1;
  
  if (DAT_1800dc0d4 == '\0') {
    DAT_1800dc0c0 = &DAT_180019420;
    DAT_1800dc0c8 = &DAT_1800190e0;
    DAT_1800dc0b8 = &DAT_180019310;
    p_Var1 = (__acrt_ptd *)FUN_1800061cc();
    in_RAX = FUN_180007cec(-3,'\x01',p_Var1,(__crt_multibyte_data **)&DAT_1800dc0c8);
    DAT_1800dc0d4 = '\x01';
  }
  return CONCAT71((int7)(in_RAX >> 8),1);
}



/* ===== 180008074 FUN_180008074 ===== */


void FUN_180008074(void)

{
  __acrt_ptd *p_Var1;
  
  p_Var1 = (__acrt_ptd *)FUN_1800061b0();
  update_thread_multibyte_data_internal(p_Var1,(__crt_multibyte_data **)&DAT_1800dc0c8);
  return;
}



/* ===== 180008090 FUN_180008090 ===== */


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180008090(int param_1,longlong param_2)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  BOOL BVar5;
  uint *puVar6;
  byte *pbVar7;
  undefined *puVar8;
  longlong lVar9;
  BYTE *pBVar10;
  ulonglong uVar11;
  byte *pbVar12;
  undefined2 *puVar13;
  undefined4 uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  byte *pbVar18;
  undefined1 auStack_68 [32];
  _cpinfo local_48;
  ulonglong local_30;
  
  local_30 = DAT_180019040 ^ (ulonglong)auStack_68;
  local_48.MaxCharSize = 0;
  local_48.DefaultChar[0] = '\0';
  local_48.DefaultChar[1] = '\0';
  local_48.LeadByte[0] = '\0';
  local_48.LeadByte[1] = '\0';
  local_48.LeadByte[2] = '\0';
  local_48.LeadByte[3] = '\0';
  local_48.LeadByte[4] = '\0';
  local_48.LeadByte[5] = '\0';
  local_48.LeadByte[6] = '\0';
  local_48.LeadByte[7] = '\0';
  local_48.LeadByte[8] = '\0';
  local_48.LeadByte[9] = '\0';
  local_48.LeadByte[10] = '\0';
  local_48.LeadByte[0xb] = '\0';
  local_48._18_2_ = 0;
  uVar4 = getSystemCP(param_1);
  if (uVar4 == 0) {
LAB_180008328:
    FUN_180007a5c(param_2);
    return 0;
  }
  uVar17 = 0;
  puVar6 = &DAT_180019530;
  uVar14 = 1;
  do {
    if (*puVar6 == uVar4) {
      FUN_18000dde0((undefined1 (*) [32])(param_2 + 0x18),0,0x101);
      pbVar18 = &DAT_180019520;
      lVar9 = 4;
      pbVar7 = &DAT_180019540 + (ulonglong)uVar17 * 0x30;
      do {
        bVar2 = *pbVar7;
        pbVar12 = pbVar7;
        while ((bVar2 != 0 && (pbVar12[1] != 0))) {
          bVar2 = *pbVar12;
          uVar15 = (uint)bVar2;
          if (bVar2 <= pbVar12[1]) {
            uVar16 = (uint)bVar2;
            do {
              uVar16 = uVar16 + 1;
              if (0x100 < uVar16) break;
              uVar15 = uVar15 + 1;
              pbVar1 = (byte *)((ulonglong)uVar16 + 0x18 + param_2);
              *pbVar1 = *pbVar1 | *pbVar18;
            } while (uVar15 <= pbVar12[1]);
          }
          pbVar12 = pbVar12 + 2;
          bVar2 = *pbVar12;
        }
        pbVar7 = pbVar7 + 8;
        pbVar18 = pbVar18 + 1;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
      *(uint *)(param_2 + 4) = uVar4;
      *(undefined4 *)(param_2 + 8) = 1;
      if (uVar4 == 0x3a4) {
        puVar8 = PTR_u_ja_JP_180010738;
      }
      else if (uVar4 == 0x3a8) {
        puVar8 = PTR_u_zh_CN_180010740;
      }
      else if (uVar4 == 0x3b5) {
        puVar8 = PTR_u_ko_KR_180010748;
      }
      else {
        puVar8 = (undefined *)0x0;
        if (uVar4 == 0x3b6) {
          puVar8 = PTR_u_zh_TW_180010750;
        }
      }
      *(undefined **)(param_2 + 0x220) = puVar8;
      puVar13 = (undefined2 *)(param_2 + 0xc);
      lVar9 = 6;
      do {
        *puVar13 = *(undefined2 *)
                    (((ulonglong)uVar17 * 0x30 - param_2) + 0x180019528 + (longlong)puVar13);
        puVar13 = puVar13 + 1;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
      goto LAB_18000831e;
    }
    uVar17 = uVar17 + 1;
    puVar6 = puVar6 + 0xc;
  } while (uVar17 < 5);
  if ((uVar4 == 65000) || (BVar5 = IsValidCodePage(uVar4 & 0xffff), BVar5 == 0)) {
    return 0xffffffff;
  }
  if (uVar4 == 0xfde9) {
    *(undefined8 *)(param_2 + 4) = 0xfde9;
    *(undefined8 *)(param_2 + 0x220) = 0;
    *(undefined4 *)(param_2 + 0x18) = 0;
    *(undefined2 *)(param_2 + 0x1c) = 0;
  }
  else {
    BVar5 = GetCPInfo(uVar4,&local_48);
    if (BVar5 == 0) {
      if (DAT_1800dc0d0 == 0) {
        return 0xffffffff;
      }
      goto LAB_180008328;
    }
    FUN_18000dde0((undefined1 (*) [32])(param_2 + 0x18),0,0x101);
    *(uint *)(param_2 + 4) = uVar4;
    *(undefined8 *)(param_2 + 0x220) = 0;
    if (local_48.MaxCharSize == 2) {
      pBVar10 = local_48.LeadByte;
      bVar2 = local_48.LeadByte[0];
      while ((bVar2 != 0 && (pBVar10[1] != 0))) {
        bVar2 = *pBVar10;
        if ((uint)bVar2 <= (uint)pBVar10[1]) {
          uVar4 = (uint)bVar2;
          uVar11 = (ulonglong)(((uint)pBVar10[1] - (uint)bVar2) + 1);
          do {
            uVar4 = uVar4 + 1;
            pbVar7 = (byte *)((ulonglong)uVar4 + 0x18 + param_2);
            *pbVar7 = *pbVar7 | 4;
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
        pBVar10 = pBVar10 + 2;
        bVar2 = *pBVar10;
      }
      pbVar7 = (byte *)(param_2 + 0x1a);
      lVar9 = 0xfe;
      do {
        *pbVar7 = *pbVar7 | 8;
        pbVar7 = pbVar7 + 1;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
      iVar3 = *(int *)(param_2 + 4);
      if (iVar3 == 0x3a4) {
        puVar8 = PTR_u_ja_JP_180010738;
      }
      else if (iVar3 == 0x3a8) {
        puVar8 = PTR_u_zh_CN_180010740;
      }
      else if (iVar3 == 0x3b5) {
        puVar8 = PTR_u_ko_KR_180010748;
      }
      else if (iVar3 == 0x3b6) {
        puVar8 = PTR_u_zh_TW_180010750;
      }
      else {
        puVar8 = (undefined *)0x0;
      }
      *(undefined **)(param_2 + 0x220) = puVar8;
    }
    else {
      uVar14 = 0;
    }
    *(undefined4 *)(param_2 + 8) = uVar14;
  }
  puVar13 = (undefined2 *)(param_2 + 0xc);
  for (lVar9 = 6; lVar9 != 0; lVar9 = lVar9 + -1) {
    *puVar13 = 0;
    puVar13 = puVar13 + 1;
  }
LAB_18000831e:
  FUN_180007af4(param_2);
  return 0;
}



/* ===== 180008358 FUN_180008358 ===== */


undefined8 FUN_180008358(__crt_locale_pointers *param_1,uint param_2,uint param_3,byte param_4)

{
  undefined8 uVar1;
  longlong local_28;
  longlong *local_20;
  longlong local_18;
  char local_10;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_28,param_1);
  if (((*(byte *)((ulonglong)(param_2 & 0xff) + 0x19 + local_18) & param_4) == 0) &&
     ((param_3 == 0 || ((param_3 & *(ushort *)(*local_20 + (ulonglong)(param_2 & 0xff) * 2)) == 0)))
     ) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  if (local_10 != '\0') {
    *(uint *)(local_28 + 0x3a8) = *(uint *)(local_28 + 0x3a8) & 0xfffffffd;
  }
  return uVar1;
}



/* ===== 1800083cc FUN_1800083cc ===== */


void FUN_1800083cc(uint param_1)

{
  FUN_180008358((__crt_locale_pointers *)0x0,param_1,0,4);
  return;
}



/* ===== 1800083e0 FUN_1800083e0 ===== */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1800083e0(void)

{
  DAT_1800dc0f8 = GetCommandLineA();
  _DAT_1800dc100 = GetCommandLineW();
  return 1;
}



/* ===== 180008408 FUN_180008408 ===== */


void FUN_180008408(uint param_1,ulonglong param_2)

{
  bool bVar1;
  
  if (param_1 < 0xdead) {
    if (param_1 != 0xdeac) {
      if (param_1 < 0xc434) {
        if ((((param_1 != 0xc433) && (param_1 != 0x2a)) && (param_1 != 0xc42c)) &&
           ((param_1 != 0xc42d && (param_1 != 0xc42e)))) {
          bVar1 = param_1 == 0xc431;
LAB_180008455:
          if (!bVar1) goto LAB_180008459;
        }
      }
      else if (param_1 != 0xc435) {
        if (param_1 == 0xd698) goto LAB_180008493;
        if (param_1 != 0xdeaa) {
          bVar1 = param_1 == 0xdeab;
          goto LAB_180008455;
        }
      }
    }
  }
  else if ((((param_1 != 0xdead) && (param_1 != 0xdeae)) && (param_1 != 0xdeaf)) &&
          (((param_1 != 0xdeb0 && (param_1 != 0xdeb1)) &&
           ((param_1 != 0xdeb2 && ((param_1 != 0xdeb3 && (param_1 != 65000)))))))) {
    if (param_1 != 0xfde9) goto LAB_180008459;
LAB_180008493:
    param_2 = (ulonglong)((uint)param_2 & 8);
    goto LAB_180008459;
  }
  param_2 = 0;
LAB_180008459:
                    /* WARNING: Could not recover jumptable at 0x000180008459. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  MultiByteToWideChar(param_1,param_2);
  return;
}



/* ===== 180008498 FUN_180008498 ===== */


void FUN_180008498(uint param_1,uint param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  undefined4 *in_stack_00000040;
  
  if (param_1 < 0xdead) {
    if (param_1 != 0xdeac) {
      if (param_1 < 0xc434) {
        if ((((param_1 != 0xc433) && (param_1 != 0x2a)) && (param_1 != 0xc42c)) &&
           ((param_1 != 0xc42d && (param_1 != 0xc42e)))) {
          bVar3 = param_1 == 0xc431;
          goto LAB_18000852e;
        }
      }
      else if ((param_1 != 0xc435) && (param_1 != 0xd698)) {
        iVar1 = param_1 - 0xdeaa;
        goto LAB_180008529;
      }
    }
  }
  else if (((((param_1 != 0xdead) && (param_1 != 0xdeae)) && (param_1 != 0xdeaf)) &&
           ((param_1 != 0xdeb0 && (param_1 != 0xdeb1)))) &&
          ((param_1 != 0xdeb2 && (param_1 != 0xdeb3)))) {
    iVar1 = param_1 - 65000;
LAB_180008529:
    if (iVar1 != 0) {
      bVar3 = iVar1 == 1;
LAB_18000852e:
      if (!bVar3) {
        uVar2 = param_2 & 0xffffff7f;
        goto LAB_180008538;
      }
    }
  }
  uVar2 = 0;
LAB_180008538:
  if ((param_1 - 65000 < 2) && (in_stack_00000040 != (undefined4 *)0x0)) {
    *in_stack_00000040 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00018000856f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WideCharToMultiByte(param_1,uVar2,param_3,param_4);
  return;
}



/* ===== 180008578 FUN_180008578 ===== */


LPVOID FUN_180008578(void)

{
  WCHAR WVar1;
  int iVar2;
  LPWCH pWVar3;
  longlong lVar5;
  longlong lVar4;
  LPVOID pvVar6;
  undefined4 uVar7;
  WCHAR *pWVar8;
  
  pWVar3 = GetEnvironmentStringsW();
  if (pWVar3 != (LPWCH)0x0) {
    WVar1 = *pWVar3;
    pWVar8 = pWVar3;
    while (WVar1 != L'\0') {
      lVar4 = -1;
      do {
        lVar5 = lVar4;
        lVar4 = lVar5 + 1;
      } while (pWVar8[lVar4] != L'\0');
      pWVar8 = pWVar8 + lVar5 + 2;
      WVar1 = *pWVar8;
    }
    uVar7 = (undefined4)((longlong)pWVar8 + (2 - (longlong)pWVar3) >> 1);
    iVar2 = FUN_180008498(0,0,pWVar3,uVar7);
    if (iVar2 != 0) {
      pvVar6 = _malloc_base((longlong)iVar2);
      if (pvVar6 != (LPVOID)0x0) {
        iVar2 = FUN_180008498(0,0,pWVar3,uVar7);
        if (iVar2 == 0) {
          FUN_180006a50(pvVar6);
          pvVar6 = (LPVOID)0x0;
        }
        else {
          FUN_180006a50((LPVOID)0x0);
        }
        FreeEnvironmentStringsW(pWVar3);
        return pvVar6;
      }
      FUN_180006a50((LPVOID)0x0);
    }
    FreeEnvironmentStringsW(pWVar3);
  }
  return (LPVOID)0x0;
}



/* ===== 180008690 _recalloc_base ===== */


/* Library Function - Single Match
    _recalloc_base
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

LPVOID _recalloc_base(LPVOID param_1,ulonglong param_2,ulonglong param_3)

{
  __acrt_ptd *p_Var1;
  ulonglong uVar2;
  LPVOID pvVar3;
  ulonglong uVar4;
  
  if ((param_2 == 0) || (param_3 <= 0xffffffffffffffe0 / param_2)) {
    if (param_1 == (LPVOID)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = _msize_base((longlong)param_1);
    }
    uVar4 = param_2 * param_3;
    pvVar3 = _realloc_base(param_1,uVar4);
    if ((pvVar3 != (LPVOID)0x0) && (uVar2 < uVar4)) {
      FUN_18000dde0((undefined1 (*) [32])((longlong)pvVar3 + uVar2),0,uVar4 - uVar2);
    }
  }
  else {
    p_Var1 = FUN_1800069ac();
    *(undefined4 *)p_Var1 = 0xc;
    pvVar3 = (LPVOID)0x0;
  }
  return pvVar3;
}



/* ===== 180008738 FUN_180008738 ===== */


FARPROC FUN_180008738(uint param_1,LPCSTR param_2,uint *param_3,uint *param_4)

{
  longlong lVar1;
  uint uVar2;
  wchar_t *lpLibFileName;
  DWORD DVar3;
  int iVar4;
  BOOL BVar5;
  HMODULE hLibModule;
  FARPROC pFVar6;
  FARPROC pFVar7;
  DWORD local_res18 [2];
  
  do {
    if (param_3 == param_4) {
      pFVar7 = (FARPROC)0x0;
LAB_18000882a:
      __acrt_lock(0xe);
      local_res18[0] = 0;
      BVar5 = VirtualProtect(&DAT_1800de000,0x100,4,local_res18);
      if (BVar5 != 0) {
        pFVar6 = pFVar7;
        if (pFVar7 == (FARPROC)0x0) {
          pFVar6 = (FARPROC)0xffffffffffffffff;
        }
        LOCK();
        (&DAT_1800de000)[param_1] = pFVar6;
        UNLOCK();
        BVar5 = VirtualProtect(&DAT_1800de000,0x100,2,local_res18);
        if (BVar5 != 0) {
          __acrt_unlock(0xe);
          return pFVar7;
        }
      }
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar2 = *param_3;
    hLibModule = (HMODULE)(&DAT_1800dc110)[uVar2];
    if (hLibModule == (HMODULE)0x0) {
      lpLibFileName = (wchar_t *)(&PTR_u_api_ms_win_core_datetime_l1_1_1_1800107a0)[uVar2];
      hLibModule = LoadLibraryExW(lpLibFileName,(HANDLE)0x0,0x800);
      if ((hLibModule != (HMODULE)0x0) ||
         ((((DVar3 = GetLastError(), DVar3 == 0x57 &&
            (iVar4 = wcsncmp(lpLibFileName,L"api-ms-",7), iVar4 != 0)) &&
           (iVar4 = wcsncmp(lpLibFileName,L"ext-ms-",7), iVar4 != 0)) &&
          (hLibModule = LoadLibraryExW(lpLibFileName,(HANDLE)0x0,0), hLibModule != (HMODULE)0x0))))
      {
        LOCK();
        lVar1 = (&DAT_1800dc110)[uVar2];
        (&DAT_1800dc110)[uVar2] = hLibModule;
        UNLOCK();
        if (lVar1 != 0) {
          FreeLibrary(hLibModule);
        }
        goto LAB_1800088d0;
      }
      LOCK();
      (&DAT_1800dc110)[uVar2] = 0xffffffffffffffff;
      UNLOCK();
    }
    else if (hLibModule != (HMODULE)0xffffffffffffffff) {
LAB_1800088d0:
      pFVar7 = GetProcAddress(hLibModule,param_2);
      goto LAB_18000882a;
    }
    param_3 = param_3 + 1;
  } while( true );
}



/* ===== 1800088ec FUN_1800088ec ===== */


/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

INT_PTR FUN_1800088ec(undefined8 param_1)

{
  FARPROC pFVar1;
  INT_PTR IVar2;
  
  if (DAT_1800de0d0 == (FARPROC)0xffffffffffffffff) {
    return 0xc0000225;
  }
  pFVar1 = DAT_1800de0d0;
  if ((DAT_1800de0d0 == (FARPROC)0x0) &&
     (pFVar1 = FUN_180008738(0x1a,"AppPolicyGetProcessTerminationMethod",(uint *)&DAT_180010e5c,
                             (uint *)"AppPolicyGetProcessTerminationMethod"), pFVar1 == (FARPROC)0x0
     )) {
    return 0xc0000225;
  }
  IVar2 = (*pFVar1)(0xfffffffffffffffa,param_1);
  return IVar2;
}



/* ===== 180008948 FUN_180008948 ===== */


/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

INT_PTR FUN_180008948(void)

{
  FARPROC pFVar1;
  INT_PTR IVar2;
  
  if (DAT_1800de000 == (FARPROC)0xffffffffffffffff) {
    return 1;
  }
  pFVar1 = DAT_1800de000;
  if ((DAT_1800de000 == (FARPROC)0x0) &&
     (pFVar1 = FUN_180008738(0,"AreFileApisANSI",(uint *)&DAT_180010df8,(uint *)&DAT_180010dfc),
     pFVar1 == (FARPROC)0x0)) {
    return 1;
  }
  IVar2 = (*pFVar1)();
  return IVar2;
}



/* ===== 180008994 FlsAlloc ===== */


DWORD __stdcall FlsAlloc(PFLS_CALLBACK_FUNCTION lpCallback)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000180008994. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = FlsAlloc(lpCallback);
  return DVar1;
}



/* ===== 18000899c FlsFree ===== */


BOOL __stdcall FlsFree(DWORD dwFlsIndex)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00018000899c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = FlsFree(dwFlsIndex);
  return BVar1;
}



/* ===== 1800089a4 FlsGetValue ===== */


PVOID __stdcall FlsGetValue(DWORD dwFlsIndex)

{
  PVOID pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001800089a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = FlsGetValue(dwFlsIndex);
  return pvVar1;
}



/* ===== 1800089ac FUN_1800089ac ===== */


void FUN_1800089ac(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001800089b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_1800de018)();
  return;
}



/* ===== 1800089b8 FlsSetValue ===== */


BOOL __stdcall FlsSetValue(DWORD dwFlsIndex,PVOID lpFlsData)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001800089b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = FlsSetValue(dwFlsIndex,lpFlsData);
  return BVar1;
}



/* ===== 1800089c0 InitializeCriticalSectionEx ===== */


BOOL __stdcall
InitializeCriticalSectionEx(LPCRITICAL_SECTION lpCriticalSection,DWORD dwSpinCount,DWORD Flags)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001800089c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = InitializeCriticalSectionEx(lpCriticalSection,dwSpinCount,Flags);
  return BVar1;
}



/* ===== 1800089c8 FUN_1800089c8 ===== */


/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1800089c8(ushort *param_1,uint param_2,LPCWSTR param_3,uint param_4,LPWSTR param_5,
                  int param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  LCID Locale;
  FARPROC pFVar1;
  
  if (DAT_1800de090 == (FARPROC)0xffffffffffffffff) {
LAB_180008a73:
    Locale = FUN_180008abc(param_1,0);
    LCMapStringW(Locale,param_2,param_3,param_4,param_5,param_6);
  }
  else {
    pFVar1 = DAT_1800de090;
    if (DAT_1800de090 == (FARPROC)0x0) {
      pFVar1 = FUN_180008738(0x12,"LCMapStringEx",(uint *)&DAT_180010e28,(uint *)"LCMapStringEx");
      if (pFVar1 == (FARPROC)0x0) goto LAB_180008a73;
    }
    (*pFVar1)(param_1,(ulonglong)param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  }
  return;
}



/* ===== 180008abc FUN_180008abc ===== */


/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_180008abc(ushort *param_1,uint param_2)

{
  FARPROC pFVar1;
  
  if (DAT_1800de0a0 == (FARPROC)0xffffffffffffffff) {
LAB_180008b0b:
    FUN_18000b484(param_1);
  }
  else {
    pFVar1 = DAT_1800de0a0;
    if (DAT_1800de0a0 == (FARPROC)0x0) {
      pFVar1 = FUN_180008738(0x14,"LocaleNameToLCID",(uint *)&DAT_180010e40,
                             (uint *)"LocaleNameToLCID");
      if (pFVar1 == (FARPROC)0x0) goto LAB_180008b0b;
    }
    (*pFVar1)(param_1,(ulonglong)param_2);
  }
  return;
}



/* ===== 180008b20 FUN_180008b20 ===== */


bool FUN_180008b20(void)

{
  BOOL BVar1;
  DWORD local_res8 [8];
  
  local_res8[0] = 0;
  BVar1 = VirtualProtect(&DAT_1800de000,0x100,2,local_res8);
  return BVar1 != 0;
}



/* ===== 180008b50 FUN_180008b50 ===== */


bool FUN_180008b50(void)

{
  FARPROC pFVar1;
  bool bVar2;
  
  if (DAT_1800de018 == -1) {
    pFVar1 = (FARPROC)0x0;
  }
  else {
    bVar2 = DAT_1800de018 == 0;
    if (!bVar2) goto LAB_180008b8a;
    pFVar1 = FUN_180008738(3,"FlsGetValue2",(uint *)&DAT_180010e10,(uint *)"FlsGetValue2");
  }
  bVar2 = pFVar1 == (FARPROC)0x0;
LAB_180008b8a:
  return !bVar2;
}



/* ===== 180008b94 __acrt_uninitialize_winapi_thunks ===== */


/* Library Function - Single Match
    __acrt_uninitialize_winapi_thunks
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined8 __acrt_uninitialize_winapi_thunks(char param_1)

{
  HMODULE hLibModule;
  undefined8 *in_RAX;
  undefined8 *puVar1;
  
  if (param_1 == '\0') {
    puVar1 = &DAT_1800dc110;
    do {
      hLibModule = (HMODULE)*puVar1;
      if (hLibModule != (HMODULE)0x0) {
        if (hLibModule != (HMODULE)0xffffffffffffffff) {
          FreeLibrary(hLibModule);
        }
        *puVar1 = 0;
      }
      puVar1 = puVar1 + 1;
      in_RAX = &DAT_1800dc1c8;
    } while (puVar1 != &DAT_1800dc1c8);
  }
  return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
}



/* ===== 180008bf0 FUN_180008bf0 ===== */


bool FUN_180008bf0(void)

{
  DAT_1800dc1c8 = GetProcessHeap();
  return DAT_1800dc1c8 != (HANDLE)0x0;
}



/* ===== 180008c48 FUN_180008c48 ===== */


void FUN_180008c48(void)

{
  longlong lVar1;
  DWORD DVar2;
  ulonglong uVar3;
  byte *pbVar4;
  longlong lVar5;
  uint *puVar6;
  uint uVar7;
  ulonglong uVar8;
  _STARTUPINFOW local_78;
  
  FUN_18000dde0((undefined1 (*) [32])&local_78,0,0x68);
  GetStartupInfoW(&local_78);
  if ((local_78.cbReserved2 != 0) && ((uint *)local_78.lpReserved2 != (uint *)0x0)) {
    puVar6 = (uint *)((longlong)local_78.lpReserved2 + 4);
    pbVar4 = (byte *)((longlong)(int)*(uint *)local_78.lpReserved2 + (longlong)puVar6);
    uVar7 = 0x2000;
    if ((int)*(uint *)local_78.lpReserved2 < 0x2000) {
      uVar7 = *(uint *)local_78.lpReserved2;
    }
    __acrt_lowio_ensure_fh_exists(uVar7);
    if ((int)DAT_1800dc5d0 < (int)uVar7) {
      uVar7 = DAT_1800dc5d0;
    }
    uVar8 = (ulonglong)uVar7;
    if (uVar7 != 0) {
      lVar5 = 0;
      do {
        if (((*(longlong *)pbVar4 != -1) && (*(longlong *)pbVar4 != -2)) && ((*puVar6 & 1) != 0)) {
          if ((*puVar6 & 8) == 0) {
            DVar2 = GetFileType(*(HANDLE *)pbVar4);
            if (DVar2 == 0) goto LAB_180008d17;
          }
          uVar3 = (ulonglong)((uint)lVar5 & 0x3f);
          lVar1 = (&DAT_1800dc1d0)[lVar5 >> 6];
          *(undefined8 *)(lVar1 + 0x28 + uVar3 * 0x48) = *(undefined8 *)pbVar4;
          *(byte *)(lVar1 + 0x38 + uVar3 * 0x48) = (byte)*puVar6;
        }
LAB_180008d17:
        lVar5 = lVar5 + 1;
        puVar6 = (uint *)((longlong)puVar6 + 1);
        pbVar4 = pbVar4 + 8;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
  }
  return;
}



/* ===== 180008d48 FUN_180008d48 ===== */


void FUN_180008d48(void)

{
  byte *pbVar1;
  longlong lVar2;
  DWORD DVar3;
  HANDLE hFile;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar5 = 0;
  lVar6 = 0;
  do {
    uVar4 = (ulonglong)(uVar5 & 0x3f);
    lVar2 = (&DAT_1800dc1d0)[(longlong)(int)uVar5 >> 6];
    if (*(longlong *)(lVar2 + 0x28 + uVar4 * 0x48) + 2U < 2) {
      *(undefined1 *)(lVar2 + 0x38 + uVar4 * 0x48) = 0x81;
      if (uVar5 == 0) {
        DVar3 = 0xfffffff6;
      }
      else if (uVar5 == 1) {
        DVar3 = 0xfffffff5;
      }
      else {
        DVar3 = 0xfffffff4;
      }
      hFile = GetStdHandle(DVar3);
      if (1 < (longlong)hFile + 1U) {
        DVar3 = GetFileType(hFile);
        if (DVar3 != 0) {
          *(HANDLE *)(lVar2 + 0x28 + uVar4 * 0x48) = hFile;
          if ((DVar3 & 0xff) == 2) {
            pbVar1 = (byte *)(lVar2 + 0x38 + uVar4 * 0x48);
            *pbVar1 = *pbVar1 | 0x40;
          }
          else if ((DVar3 & 0xff) == 3) {
            pbVar1 = (byte *)(lVar2 + 0x38 + uVar4 * 0x48);
            *pbVar1 = *pbVar1 | 8;
          }
          goto LAB_180008e26;
        }
      }
      pbVar1 = (byte *)(lVar2 + 0x38 + uVar4 * 0x48);
      *pbVar1 = *pbVar1 | 0x40;
      *(undefined8 *)(lVar2 + 0x28 + uVar4 * 0x48) = 0xfffffffffffffffe;
      if (DAT_1800dc618 != 0) {
        *(undefined4 *)(*(longlong *)(lVar6 + DAT_1800dc618) + 0x18) = 0xfffffffe;
      }
    }
    else {
      pbVar1 = (byte *)(lVar2 + 0x38 + uVar4 * 0x48);
      *pbVar1 = *pbVar1 | 0x80;
    }
LAB_180008e26:
    uVar5 = uVar5 + 1;
    lVar6 = lVar6 + 8;
    if (uVar5 == 3) {
      return;
    }
  } while( true );
}



/* ===== 180008e50 __acrt_initialize_lowio ===== */


/* Library Function - Single Match
    __acrt_initialize_lowio
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

bool __acrt_initialize_lowio(void)

{
  int iVar1;
  
  __acrt_lock(7);
  iVar1 = __acrt_lowio_ensure_fh_exists(0);
  if (iVar1 == 0) {
    FUN_180008c48();
    FUN_180008d48();
  }
  __acrt_unlock(7);
  return iVar1 == 0;
}



/* ===== 180008e8c __acrt_uninitialize_lowio ===== */


/* Library Function - Single Match
    __acrt_uninitialize_lowio
   
   Library: Visual Studio 2019 Release */

undefined1 __acrt_uninitialize_lowio(void)

{
  ulonglong uVar1;
  
  uVar1 = 0;
  do {
    if (*(LPCRITICAL_SECTION *)((longlong)&DAT_1800dc1d0 + uVar1) != (LPCRITICAL_SECTION)0x0) {
      __acrt_lowio_destroy_handle_array(*(LPCRITICAL_SECTION *)((longlong)&DAT_1800dc1d0 + uVar1));
      *(undefined8 *)((longlong)&DAT_1800dc1d0 + uVar1) = 0;
    }
    uVar1 = uVar1 + 8;
  } while (uVar1 < 0x400);
  return 1;
}



/* ===== 180008ecc FUN_180008ecc ===== */


/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 FUN_180008ecc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *in_RAX;
  undefined8 *puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_1;
    do {
      in_RAX = (undefined8 *)0x0;
      if (((code *)*puVar1 != (code *)0x0) &&
         (in_RAX = (undefined8 *)(*(code *)*puVar1)(), (char)in_RAX == '\0')) break;
      puVar1 = puVar1 + 2;
    } while (puVar1 != param_2);
    if (puVar1 != param_2) {
      if (puVar1 != param_1) {
        puVar1 = puVar1 + -1;
        do {
          if ((puVar1[-1] != 0) && ((code *)*puVar1 != (code *)0x0)) {
            (*(code *)*puVar1)(0);
          }
          in_RAX = puVar1 + -1;
          puVar1 = puVar1 + -2;
        } while (in_RAX != param_1);
      }
      return (ulonglong)in_RAX & 0xffffffffffffff00;
    }
  }
  return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
}



/* ===== 180008f4c FUN_180008f4c ===== */


/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 FUN_180008f4c(longlong param_1,longlong param_2)

{
  undefined8 in_RAX;
  
  for (; param_1 != param_2; param_2 = param_2 + -0x10) {
    in_RAX = 0;
    if (*(code **)(param_2 + -8) != (code *)0x0) {
      in_RAX = (**(code **)(param_2 + -8))(0);
    }
  }
  return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
}



/* ===== 180008f90 FUN_180008f90 ===== */


/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

bool FUN_180008f90(undefined8 param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  
  pcVar2 = (code *)FUN_180008fe0();
  bVar3 = false;
  if (pcVar2 != (code *)0x0) {
    iVar1 = (*pcVar2)(param_1);
    bVar3 = iVar1 != 0;
  }
  return bVar3;
}



/* ===== 180008fd0 FUN_180008fd0 ===== */


void FUN_180008fd0(undefined8 param_1)

{
  DAT_1800dc5d8 = param_1;
  return;
}



/* ===== 180008fe0 FUN_180008fe0 ===== */


ulonglong FUN_180008fe0(void)

{
  byte bVar1;
  ulonglong uVar2;
  
  __acrt_lock(0);
  bVar1 = (byte)DAT_180019040 & 0x3f;
  uVar2 = DAT_1800dc5d8 ^ DAT_180019040;
  __acrt_unlock(0);
  return uVar2 >> bVar1 | uVar2 << 0x40 - bVar1;
}



/* ===== 180009020 _set_new_handler ===== */


/* Library Function - Single Match
    _set_new_handler
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

ulonglong _set_new_handler(ulonglong param_1)

{
  byte bVar1;
  byte bVar2;
  ulonglong uVar3;
  
  __acrt_lock(0);
  bVar2 = (byte)DAT_180019040 & 0x3f;
  uVar3 = DAT_180019040 ^ DAT_1800dc5d8;
  bVar1 = 0x40 - bVar2 & 0x3f;
  DAT_1800dc5d8 = (param_1 >> bVar1 | param_1 << 0x40 - bVar1) ^ DAT_180019040;
  __acrt_unlock(0);
  return uVar3 >> bVar2 | uVar3 << 0x40 - bVar2;
}



/* ===== 18000908c FUN_18000908c ===== */


ulonglong FUN_18000908c(undefined8 param_1,int *param_2,undefined8 param_3,int *param_4)

{
  byte bVar1;
  ulonglong uVar2;
  
  __acrt_lock(*param_2);
  bVar1 = (byte)DAT_180019040 & 0x3f;
  uVar2 = DAT_1800dc5f0 ^ DAT_180019040;
  __acrt_unlock(*param_4);
  return uVar2 >> bVar1 | uVar2 << 0x40 - bVar1;
}



/* ===== 1800090d4 __acrt_get_sigabrt_handler ===== */


/* Library Function - Single Match
    __acrt_get_sigabrt_handler
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_get_sigabrt_handler(void)

{
  undefined1 local_res8 [8];
  int local_res10 [2];
  int local_res18 [4];
  
  local_res10[0] = 3;
  local_res18[0] = 3;
  FUN_18000908c(local_res8,local_res18,local_res8,local_res10);
  return;
}



/* ===== 180009104 FUN_180009104 ===== */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180009104(undefined8 param_1)

{
  _DAT_1800dc5e0 = param_1;
  _DAT_1800dc5e8 = param_1;
  DAT_1800dc5f0 = param_1;
  _DAT_1800dc5f8 = param_1;
  return;
}



/* ===== 180009124 FUN_180009124 ===== */


/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 FUN_180009124(uint param_1)

{
  bool bVar1;
  __acrt_ptd *p_Var2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  byte bVar6;
  longlong lVar7;
  code *pcVar8;
  ulonglong *puVar9;
  undefined4 local_res10;
  
  p_Var2 = (__acrt_ptd *)0x0;
  local_res10 = 0;
  bVar1 = true;
  if (param_1 == 2) {
LAB_18000917b:
    if (param_1 == 2) {
      puVar9 = (ulonglong *)&DAT_1800dc5e0;
    }
    else if (param_1 == 6) {
LAB_18000921d:
      puVar9 = &DAT_1800dc5f0;
    }
    else if (param_1 == 0xf) {
      puVar9 = (ulonglong *)&DAT_1800dc5f8;
    }
    else if (param_1 == 0x15) {
      puVar9 = (ulonglong *)&DAT_1800dc5e8;
    }
    else {
      if (param_1 == 0x16) goto LAB_18000921d;
      puVar9 = (ulonglong *)0x0;
    }
  }
  else {
    if (param_1 != 4) {
      if (param_1 != 6) {
        if ((param_1 == 8) || (param_1 == 0xb)) goto LAB_1800091ab;
        if ((param_1 != 0xf) && ((param_1 != 0x15 && (param_1 != 0x16)))) goto LAB_1800091fd;
      }
      goto LAB_18000917b;
    }
LAB_1800091ab:
    p_Var2 = FUN_180006210();
    if (p_Var2 == (__acrt_ptd *)0x0) {
      return 0xffffffff;
    }
    lVar4 = *(longlong *)p_Var2;
    lVar3 = DAT_1800103f0 * 0x10 + lVar4;
    for (; lVar4 != lVar3; lVar4 = lVar4 + 0x10) {
      if (*(uint *)(lVar4 + 4) == param_1) goto LAB_1800091f8;
    }
    lVar4 = 0;
LAB_1800091f8:
    if (lVar4 == 0) {
LAB_1800091fd:
      p_Var2 = FUN_1800069ac();
      *(undefined4 *)p_Var2 = 0x16;
      FUN_180006804();
      return 0xffffffff;
    }
    puVar9 = (ulonglong *)(lVar4 + 8);
    bVar1 = false;
  }
  lVar4 = 0;
  if (bVar1) {
    __acrt_lock(3);
  }
  pcVar8 = (code *)*puVar9;
  if (bVar1) {
    bVar6 = (byte)DAT_180019040 & 0x3f;
    pcVar8 = (code *)(((ulonglong)pcVar8 ^ DAT_180019040) >> bVar6 |
                     ((ulonglong)pcVar8 ^ DAT_180019040) << 0x40 - bVar6);
  }
  if (pcVar8 == (code *)0x1) goto LAB_180009306;
  if (pcVar8 == (code *)0x0) {
    if (bVar1) {
      __acrt_unlock(3);
    }
    FUN_180005198(3);
    pcVar8 = (code *)swi(3);
    uVar5 = (*pcVar8)();
    return uVar5;
  }
  if ((param_1 < 0xc) && ((0x910U >> (param_1 & 0x1f) & 1) != 0)) {
    lVar4 = *(longlong *)(p_Var2 + 8);
    *(longlong *)(p_Var2 + 8) = 0;
    if (param_1 == 8) {
      lVar3 = FUN_1800061b0();
      local_res10 = *(undefined4 *)(lVar3 + 0x10);
      lVar3 = FUN_1800061b0();
      *(undefined4 *)(lVar3 + 0x10) = 0x8c;
      goto LAB_1800092be;
    }
  }
  else {
LAB_1800092be:
    if (param_1 == 8) {
      lVar3 = DAT_1800103f8 * 0x10 + *(longlong *)p_Var2;
      lVar7 = DAT_180010400 * 0x10 + lVar3;
      for (; lVar3 != lVar7; lVar3 = lVar3 + 0x10) {
        *(undefined8 *)(lVar3 + 8) = 0;
      }
      goto LAB_180009306;
    }
  }
  *puVar9 = DAT_180019040;
LAB_180009306:
  if (bVar1) {
    __acrt_unlock(3);
  }
  if (pcVar8 != (code *)0x1) {
    if (param_1 == 8) {
      lVar3 = FUN_1800061b0();
      (*pcVar8)(8,*(undefined4 *)(lVar3 + 0x10));
    }
    else {
      (*pcVar8)(param_1);
    }
    if (((param_1 < 0xc) && ((0x910U >> (param_1 & 0x1f) & 1) != 0)) &&
       (*(longlong *)(p_Var2 + 8) = lVar4, param_1 == 8)) {
      lVar4 = FUN_1800061b0();
      *(undefined4 *)(lVar4 + 0x10) = local_res10;
    }
  }
  return 0;
}



/* ===== 180009380 FUN_180009380 ===== */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180009380(undefined8 param_1)

{
  _DAT_1800dc600 = param_1;
  return;
}



/* ===== 180009388 FUN_180009388 ===== */


void FUN_180009388(undefined8 param_1,longlong *param_2,undefined8 *param_3,longlong *param_4)

{
  uint uVar1;
  int iVar2;
  
  FUN_18000984c(*param_2);
  if ((*(longlong *)*param_3 != 0) &&
     (uVar1 = *(uint *)(*(longlong *)*param_3 + 0x14), (uVar1 >> 0xd & 1) != 0)) {
    if (((((byte)uVar1 & 3) == 2) && ((uVar1 & 0xc0) != 0)) || ((uVar1 >> 0xb & 1) != 0)) {
      if ((*(char *)param_3[2] != '\0') || ((*(uint *)(*(longlong *)*param_3 + 0x14) >> 1 & 1) != 0)
         ) {
        iVar2 = FUN_1800095f4(*(int **)*param_3);
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
  FUN_180009858(*param_4);
  return;
}



/* ===== 180009424 FUN_180009424 ===== */


void FUN_180009424(undefined8 param_1,int *param_2,undefined8 *param_3,int *param_4)

{
  longlong *plVar1;
  uint uVar2;
  longlong *plVar3;
  undefined1 local_res10 [16];
  int *local_res20;
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
  plVar1 = DAT_1800dc618 + (int)DAT_1800dc610;
  for (plVar3 = DAT_1800dc618; local_40 = plVar3, plVar3 != plVar1; plVar3 = plVar3 + 1) {
    local_58 = *plVar3;
    if ((local_58 != 0) && (uVar2 = *(uint *)(local_58 + 0x14), (uVar2 >> 0xd & 1) != 0)) {
      if (((((byte)uVar2 & 3) == 2) && ((uVar2 & 0xc0) != 0)) || ((uVar2 >> 0xb & 1) != 0)) {
        local_20 = param_3[2];
        local_28 = param_3[1];
        local_30 = *param_3;
        local_38 = &local_58;
        local_50 = local_58;
        local_48 = local_58;
        FUN_180009388(local_res10,&local_48,&local_38,&local_50);
      }
      else {
        *(int *)*param_3 = *(int *)*param_3 + 1;
      }
    }
  }
  __acrt_unlock(*param_4);
  return;
}



/* ===== 180009508 common_flush_all ===== */


/* Library Function - Single Match
    int __cdecl common_flush_all(bool)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl common_flush_all(bool param_1)

{
  char local_res8 [8];
  undefined1 local_res10 [8];
  int local_res18 [2];
  int local_res20 [2];
  int local_28 [2];
  int *local_20;
  char *local_18;
  int *local_10;
  
  local_res20[0] = 0;
  local_20 = local_res20;
  local_res18[0] = 0;
  local_18 = local_res8;
  local_10 = local_res18;
  local_28[0] = 8;
  local_28[1] = 8;
  local_res8[0] = param_1;
  FUN_180009424(local_res10,local_28 + 1,&local_20,local_28);
  if (local_res8[0] != '\0') {
    local_res18[0] = local_res20[0];
  }
  return local_res18[0];
}



/* ===== 180009568 FUN_180009568 ===== */


undefined8 FUN_180009568(int *param_1,longlong *param_2)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  
  if ((((byte)param_1[5] & 3) == 2) && ((param_1[5] & 0xc0U) != 0)) {
    uVar3 = *param_1 - param_1[2];
    param_1[4] = 0;
    pbVar1 = *(byte **)(param_1 + 2);
    *(byte **)param_1 = pbVar1;
    if (0 < (int)uVar3) {
      uVar2 = FUN_180009f18((longlong)param_1);
      uVar2 = FUN_18000c19c(uVar2,pbVar1,uVar3,param_2);
      if (uVar3 != uVar2) {
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



/* ===== 1800095f4 FUN_1800095f4 ===== */


int FUN_1800095f4(int *param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong local_48 [2];
  undefined1 local_38;
  undefined *local_30;
  undefined *puStack_28;
  char local_20;
  undefined4 local_1c;
  char local_18;
  undefined4 local_14;
  char local_10;
  
  local_48[0] = 0;
  local_20 = DAT_1800dc640 == 0;
  local_38 = 0;
  local_18 = '\0';
  local_10 = '\0';
  if ((bool)local_20) {
    local_30 = PTR_PTR_180019778;
    puStack_28 = PTR_DAT_180019780;
  }
  if (param_1 == (int *)0x0) {
    iVar1 = common_flush_all(false);
    goto LAB_180009679;
  }
  uVar2 = FUN_180009568(param_1,local_48);
  if ((int)uVar2 == 0) {
    if (((uint)param_1[5] >> 0xb & 1) != 0) {
      iVar1 = FUN_180009f18((longlong)param_1);
      iVar1 = _commit(iVar1);
      if (iVar1 != 0) goto LAB_180009654;
    }
    iVar1 = 0;
  }
  else {
LAB_180009654:
    iVar1 = -1;
  }
LAB_180009679:
  if (local_20 == '\x02') {
    *(uint *)(local_48[0] + 0x3a8) = *(uint *)(local_48[0] + 0x3a8) & 0xfffffffd;
  }
  if (local_18 != '\0') {
    lVar3 = FUN_180005c30(local_48);
    *(undefined4 *)(lVar3 + 0x20) = local_1c;
  }
  if (local_10 != '\0') {
    lVar3 = FUN_180005c30(local_48);
    *(undefined4 *)(lVar3 + 0x24) = local_14;
  }
  return iVar1;
}



/* ===== 1800096c8 common_flush_all ===== */


int __cdecl common_flush_all(bool param_1)

{
  int iVar1;
  
  iVar1 = common_flush_all(true);
  return iVar1;
}



/* ===== 1800096d0 FUN_1800096d0 ===== */


undefined8 FUN_1800096d0(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  longlong lVar4;
  undefined *puVar5;
  
  lVar1 = 0;
  lVar4 = 3;
  if ((int)DAT_1800dc610 == 0) {
    DAT_1800dc610._0_4_ = 0x200;
  }
  else if ((int)DAT_1800dc610 < 3) {
    DAT_1800dc610._0_4_ = 3;
  }
  DAT_1800dc618 = _calloc_base((longlong)(int)DAT_1800dc610,8);
  FUN_180006a50((LPVOID)0x0);
  if (DAT_1800dc618 == (LPVOID)0x0) {
    DAT_1800dc610._0_4_ = 3;
    DAT_1800dc618 = _calloc_base(3,8);
    FUN_180006a50((LPVOID)0x0);
    if (DAT_1800dc618 == (LPVOID)0x0) {
      return 0xffffffff;
    }
  }
  lVar2 = 0;
  puVar3 = &DAT_1800197a8;
  puVar5 = &DAT_180019790;
  do {
    InitializeCriticalSectionEx((LPCRITICAL_SECTION)(puVar5 + 0x30),4000,0);
    *(undefined **)(lVar1 + (longlong)DAT_1800dc618) = puVar5;
    if (*(longlong *)((&DAT_1800dc1d0)[lVar2 >> 6] + 0x28 + (ulonglong)((uint)lVar2 & 0x3f) * 0x48)
        + 2U < 3) {
      *puVar3 = 0xfffffffe;
    }
    lVar2 = lVar2 + 1;
    puVar5 = puVar5 + 0x58;
    lVar1 = lVar1 + 8;
    puVar3 = puVar3 + 0x16;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  return 0;
}



/* ===== 1800097f0 __acrt_uninitialize_stdio ===== */


/* Library Function - Single Match
    __acrt_uninitialize_stdio
   
   Library: Visual Studio 2019 Release */

void __acrt_uninitialize_stdio(bool param_1)

{
  longlong lVar1;
  
  common_flush_all(param_1);
  FUN_18000c5ec();
  lVar1 = 0;
  do {
    __acrt_stdio_free_buffer_nolock(*(undefined8 **)(lVar1 + (longlong)DAT_1800dc618));
    DeleteCriticalSection
              ((LPCRITICAL_SECTION)(*(longlong *)(lVar1 + (longlong)DAT_1800dc618) + 0x30));
    lVar1 = lVar1 + 8;
  } while (lVar1 != 0x18);
  FUN_180006a50(DAT_1800dc618);
  DAT_1800dc618 = (LPVOID)0x0;
  return;
}



/* ===== 18000984c FUN_18000984c ===== */


void FUN_18000984c(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000180009850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EnterCriticalSection(param_1 + 0x30);
  return;
}



/* ===== 180009858 FUN_180009858 ===== */


void FUN_180009858(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00018000985c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(param_1 + 0x30);
  return;
}



/* ===== 180009870 _malloc_base ===== */


/* Library Function - Single Match
    _malloc_base
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

LPVOID _malloc_base(ulonglong param_1)

{
  bool bVar1;
  int iVar2;
  undefined7 extraout_var;
  LPVOID pvVar3;
  __acrt_ptd *p_Var4;
  
  if (param_1 < 0xffffffffffffffe1) {
    if (param_1 == 0) {
      param_1 = 1;
    }
    do {
      pvVar3 = HeapAlloc(DAT_1800dc1c8,0,param_1);
      if (pvVar3 != (LPVOID)0x0) {
        return pvVar3;
      }
      iVar2 = FUN_18000a400();
    } while ((iVar2 != 0) &&
            (bVar1 = FUN_180008f90(param_1), (int)CONCAT71(extraout_var,bVar1) != 0));
  }
  p_Var4 = FUN_1800069ac();
  *(undefined4 *)p_Var4 = 0xc;
  return (LPVOID)0x0;
}



/* ===== 1800098d0 __acrt_update_locale_info ===== */


/* Library Function - Single Match
    __acrt_update_locale_info
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_update_locale_info(longlong param_1,longlong *param_2)

{
  undefined **ppuVar1;
  
  if ((*param_2 != DAT_1800dc608) && ((DAT_180019898 & *(uint *)(param_1 + 0x3a8)) == 0)) {
    ppuVar1 = __acrt_update_thread_locale_data();
    *param_2 = (longlong)ppuVar1;
  }
  return;
}



/* ===== 180009904 FUN_180009904 ===== */


void FUN_180009904(longlong param_1,longlong *param_2,longlong param_3)

{
  undefined **ppuVar1;
  
  if ((*param_2 != (&DAT_1800dc608)[param_3]) && ((DAT_180019898 & *(uint *)(param_1 + 0x3a8)) == 0)
     ) {
    ppuVar1 = __acrt_update_thread_locale_data();
    *param_2 = (longlong)ppuVar1;
  }
  return;
}



/* ===== 18000993c FUN_18000993c ===== */


void FUN_18000993c(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  if ((*param_2 != DAT_1800dc0c8) && ((DAT_180019898 & *(uint *)(param_1 + 0x3a8)) == 0)) {
    lVar1 = FUN_180008074();
    *param_2 = lVar1;
  }
  return;
}



/* ===== 180009970 FUN_180009970 ===== */


void FUN_180009970(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  
  if ((*param_2 != (&DAT_1800dc0c8)[param_3]) && ((DAT_180019898 & *(uint *)(param_1 + 0x3a8)) == 0)
     ) {
    lVar1 = FUN_180008074();
    *param_2 = lVar1;
  }
  return;
}



/* ===== 1800099a8 FUN_1800099a8 ===== */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1800099a8(ushort *param_1,byte *param_2,ulonglong param_3,longlong *param_4)

{
  uint uVar1;
  longlong *plVar2;
  int iVar3;
  
  if ((param_2 == (byte *)0x0) || (param_3 == 0)) {
    _DAT_1800dc630 = 0;
  }
  else {
    if (*param_2 != 0) {
      if ((char)param_4[5] == '\0') {
        FUN_180005ca0(param_4);
      }
      plVar2 = (longlong *)param_4[3];
      uVar1 = *(uint *)((longlong)plVar2 + 0xc);
      if (uVar1 == 0xfde9) {
        iVar3 = FUN_180009d18(param_1,param_2,param_3,(uint *)&DAT_1800dc630,(longlong)param_4);
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
        if ((((1 < (int)plVar2[1]) && ((int)plVar2[1] <= (int)param_3)) &&
            (iVar3 = FUN_180008408(uVar1,9), iVar3 != 0)) ||
           (((ulonglong)(longlong)*(int *)(param_4[3] + 8) <= param_3 && (param_2[1] != 0)))) {
          return *(int *)(param_4[3] + 8);
        }
      }
      else {
        iVar3 = FUN_180008408(uVar1,9);
        if (iVar3 != 0) {
          return 1;
        }
      }
      *(undefined1 *)(param_4 + 6) = 1;
      *(undefined4 *)((longlong)param_4 + 0x2c) = 0x2a;
      return -1;
    }
    if (param_1 != (ushort *)0x0) {
      *param_1 = 0;
    }
  }
  return 0;
}



/* ===== 180009b20 FUN_180009b20 ===== */


ulonglong FUN_180009b20(byte *param_1)

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



/* ===== 180009b58 FUN_180009b58 ===== */


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_180009b58(ulonglong param_1,byte *param_2,ulonglong param_3,uint *param_4,
                       longlong param_5)

{
  byte bVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  uint *puVar5;
  byte *pbVar6;
  byte bVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint *puVar10;
  undefined1 auStack_78 [24];
  uint auStack_60 [6];
  ulonglong local_48;
  
  local_48 = DAT_180019040 ^ (ulonglong)auStack_78;
  puVar5 = (uint *)&DAT_1800dc638;
  if (param_4 != (uint *)0x0) {
    puVar5 = param_4;
  }
  pbVar6 = (byte *)0x18000fc52;
  uVar2 = 1;
  if (param_2 != (byte *)0x0) {
    pbVar6 = param_2;
    uVar2 = param_3;
  }
  puVar10 = (uint *)(-(ulonglong)(param_2 != (byte *)0x0) & param_1);
  if (uVar2 == 0) {
LAB_180009bba:
    uVar2 = 0xfffffffffffffffe;
  }
  else {
    if (*(short *)((longlong)puVar5 + 6) == 0) {
      uVar3 = FUN_180009b20(pbVar6);
      uVar4 = (uint)uVar3;
      uVar8 = (ulonglong)(int)uVar4;
      bVar1 = *pbVar6;
      pbVar6 = pbVar6 + 1;
      if (uVar4 < 2) {
        if (puVar10 != (uint *)0x0) {
          *puVar10 = (uint)bVar1;
        }
        return uVar8;
      }
      if (uVar4 - 2 < 3) {
        bVar7 = (byte)uVar3;
        uVar4 = (1 << (7 - bVar7 & 0x1f)) - 1U & (uint)bVar1;
LAB_180009c45:
        uVar9 = (ulonglong)bVar7;
        uVar3 = uVar9;
        if (uVar2 <= uVar9) {
          uVar3 = uVar2;
        }
        while ((ulonglong)((longlong)pbVar6 - (longlong)param_2) < uVar3) {
          bVar1 = *pbVar6;
          pbVar6 = pbVar6 + 1;
          if ((bVar1 & 0xc0) != 0x80) goto LAB_180009cee;
          uVar4 = bVar1 & 0x3f | uVar4 << 6;
        }
        if (uVar3 < uVar9) {
          *(ushort *)(puVar5 + 1) = (ushort)uVar8 & 0xff;
          *(ushort *)((longlong)puVar5 + 6) = (ushort)(byte)(bVar7 - (char)uVar3);
          *puVar5 = uVar4;
          goto LAB_180009bba;
        }
        if ((0x7ff < uVar4 - 0xd800) && (uVar4 < 0x110000)) {
          auStack_60[2] = 0x80;
          auStack_60[3] = 0x800;
          auStack_60[4] = 0x10000;
          if (auStack_60[uVar8 & 0xff] <= uVar4) {
            if (puVar10 != (uint *)0x0) {
              *puVar10 = uVar4;
            }
            uVar2 = FUN_18000c744(-(ulonglong)(uVar4 != 0) & uVar9,(undefined8 *)puVar5);
            return uVar2;
          }
        }
      }
    }
    else {
      bVar1 = (byte)puVar5[1];
      uVar8 = (ulonglong)bVar1;
      uVar4 = *puVar5;
      bVar7 = *(byte *)((longlong)puVar5 + 6);
      if ((((byte)(bVar1 - 2) < 3) && (bVar7 != 0)) && (bVar7 < bVar1)) goto LAB_180009c45;
    }
LAB_180009cee:
    uVar2 = FUN_18000c74c((undefined8 *)puVar5,param_5);
  }
  return uVar2;
}



/* ===== 180009d18 FUN_180009d18 ===== */


void FUN_180009d18(undefined2 *param_1,byte *param_2,ulonglong param_3,uint *param_4,
                  longlong param_5)

{
  ulonglong uVar1;
  uint local_18 [4];
  
  local_18[0] = 0;
  uVar1 = FUN_180009b58((ulonglong)local_18,param_2,param_3,param_4,param_5);
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



/* ===== 180009d60 FUN_180009d60 ===== */


longlong FUN_180009d60(ushort *param_1,undefined8 *param_2,ulonglong param_3,uint *param_4,
                      longlong param_5)

{
  longlong lVar1;
  ushort *puVar2;
  longlong lVar3;
  byte *pbVar4;
  ulonglong uVar5;
  uint local_res8 [2];
  
  pbVar4 = (byte *)*param_2;
  puVar2 = param_1;
  if (param_1 == (ushort *)0x0) {
    lVar3 = 0;
    while( true ) {
      if (*pbVar4 == 0) {
        uVar5 = 1;
      }
      else if (pbVar4[1] == 0) {
        uVar5 = 2;
      }
      else {
        uVar5 = (ulonglong)(pbVar4[2] != 0) + 3;
      }
      uVar5 = FUN_180009b58(0,pbVar4,uVar5,param_4,param_5);
      if (uVar5 == 0xffffffffffffffff) {
        *(undefined1 *)(param_5 + 0x30) = 1;
        *(undefined4 *)(param_5 + 0x2c) = 0x2a;
        return -1;
      }
      if (uVar5 == 0) break;
      pbVar4 = pbVar4 + uVar5;
      lVar1 = lVar3 + 1;
      if (uVar5 != 4) {
        lVar1 = lVar3;
      }
      lVar3 = lVar1 + 1;
    }
  }
  else {
    for (; param_3 != 0; param_3 = param_3 - 1) {
      if (*pbVar4 == 0) {
        uVar5 = 1;
      }
      else if (pbVar4[1] == 0) {
        uVar5 = 2;
      }
      else {
        uVar5 = (ulonglong)(pbVar4[2] != 0) + 3;
      }
      local_res8[0] = 0;
      uVar5 = FUN_180009b58((ulonglong)local_res8,pbVar4,uVar5,param_4,param_5);
      if (uVar5 == 0xffffffffffffffff) {
        *param_2 = pbVar4;
        *(undefined1 *)(param_5 + 0x30) = 1;
        *(undefined4 *)(param_5 + 0x2c) = 0x2a;
        return -1;
      }
      if (uVar5 == 0) {
        pbVar4 = (byte *)0x0;
        *puVar2 = 0;
        break;
      }
      if (0xffff < local_res8[0]) {
        if (param_3 < 2) break;
        param_3 = param_3 - 1;
        *puVar2 = (ushort)(local_res8[0] - 0x10000 >> 10) | 0xd800;
        puVar2 = puVar2 + 1;
        local_res8[0] = (uint)((ushort)(local_res8[0] - 0x10000) & 0x3ff | 0xdc00);
      }
      *puVar2 = (ushort)local_res8[0];
      pbVar4 = pbVar4 + uVar5;
      puVar2 = puVar2 + 1;
    }
    *param_2 = pbVar4;
    lVar3 = (longlong)puVar2 - (longlong)param_1 >> 1;
  }
  return lVar3;
}



/* ===== 180009f18 FUN_180009f18 ===== */


undefined4 FUN_180009f18(longlong param_1)

{
  undefined4 uVar1;
  __acrt_ptd *p_Var2;
  
  if (param_1 == 0) {
    p_Var2 = FUN_1800069ac();
    *(undefined4 *)p_Var2 = 0x16;
    FUN_180006804();
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x18);
  }
  return uVar1;
}



/* ===== 180009f40 operator()<<lambda_410d79af7f07d98d83a3f525b3859a53>,<lambda_3e16ef9562a7dcce91392c22ab16ea36>&___ptr64,<lambda_38119f0e861e05405d8a144b9b982f0a>_> ===== */


/* Library Function - Single Match
    public: void __cdecl __crt_seh_guarded_call<void>::operator()<class
   <lambda_410d79af7f07d98d83a3f525b3859a53>,class <lambda_3e16ef9562a7dcce91392c22ab16ea36> &
   __ptr64,class <lambda_38119f0e861e05405d8a144b9b982f0a> >(class
   <lambda_410d79af7f07d98d83a3f525b3859a53> && __ptr64,class
   <lambda_3e16ef9562a7dcce91392c22ab16ea36> & __ptr64,class
   <lambda_38119f0e861e05405d8a144b9b982f0a> && __ptr64) __ptr64
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __thiscall
__crt_seh_guarded_call<void>::
operator()<<lambda_410d79af7f07d98d83a3f525b3859a53>,<lambda_3e16ef9562a7dcce91392c22ab16ea36>&___ptr64,<lambda_38119f0e861e05405d8a144b9b982f0a>_>
          (__crt_seh_guarded_call<void> *this,<lambda_410d79af7f07d98d83a3f525b3859a53> *param_1,
          <lambda_3e16ef9562a7dcce91392c22ab16ea36> *param_2,
          <lambda_38119f0e861e05405d8a144b9b982f0a> *param_3)

{
  undefined **ppuVar1;
  longlong *plVar2;
  
  __acrt_lock(*(int *)param_1);
  for (plVar2 = &DAT_1800dc608; plVar2 != &DAT_1800dc610; plVar2 = plVar2 + 1) {
    if ((undefined **)*plVar2 != &PTR_DAT_180019620) {
      ppuVar1 = _updatetlocinfoEx_nolock(plVar2,&PTR_DAT_180019620);
      *plVar2 = (longlong)ppuVar1;
    }
  }
  __acrt_unlock(*(int *)param_3);
  return;
}



/* ===== 180009fb0 FUN_180009fb0 ===== */


undefined4 FUN_180009fb0(void)

{
  undefined4 uVar1;
  
  uVar1 = DAT_1800dc640;
  LOCK();
  DAT_1800dc640 = 1;
  UNLOCK();
  return uVar1;
}



/* ===== 180009fbc __acrt_uninitialize_locale ===== */


/* Library Function - Single Match
    __acrt_uninitialize_locale
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_uninitialize_locale(void)

{
  <lambda_3e16ef9562a7dcce91392c22ab16ea36> local_res8 [8];
  undefined4 local_res10 [2];
  undefined4 local_res18 [4];
  
  local_res10[0] = 4;
  local_res18[0] = 4;
  __crt_seh_guarded_call<void>::
  operator()<<lambda_410d79af7f07d98d83a3f525b3859a53>,<lambda_3e16ef9562a7dcce91392c22ab16ea36>&___ptr64,<lambda_38119f0e861e05405d8a144b9b982f0a>_>
            ((__crt_seh_guarded_call<void> *)local_res8,
             (<lambda_410d79af7f07d98d83a3f525b3859a53> *)local_res18,local_res8,
             (<lambda_38119f0e861e05405d8a144b9b982f0a> *)local_res10);
  return;
}



/* ===== 180009fec __acrt_add_locale_ref ===== */


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
    if (((undefined *)puVar2[-2] != &DAT_180019788) &&
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
  __acrt_locale_add_lc_time_reference(*(undefined ***)(param_1 + 0x120));
  return;
}



/* ===== 18000a078 __acrt_free_locale ===== */


/* Library Function - Single Match
    __acrt_free_locale
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_free_locale(LPVOID param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if ((((*(undefined ***)((longlong)param_1 + 0xf8) != (undefined **)0x0) &&
       (*(undefined ***)((longlong)param_1 + 0xf8) != &PTR_DAT_1800198a0)) &&
      (*(int **)((longlong)param_1 + 0xe0) != (int *)0x0)) &&
     (**(int **)((longlong)param_1 + 0xe0) == 0)) {
    piVar1 = *(int **)((longlong)param_1 + 0xf0);
    if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
      FUN_180006a50(piVar1);
      __acrt_locale_free_monetary(*(longlong *)((longlong)param_1 + 0xf8));
    }
    piVar1 = *(int **)((longlong)param_1 + 0xe8);
    if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
      FUN_180006a50(piVar1);
      __acrt_locale_free_numeric(*(undefined8 **)((longlong)param_1 + 0xf8));
    }
    FUN_180006a50(*(LPVOID *)((longlong)param_1 + 0xe0));
    FUN_180006a50(*(LPVOID *)((longlong)param_1 + 0xf8));
  }
  if ((*(int **)((longlong)param_1 + 0x100) != (int *)0x0) &&
     (**(int **)((longlong)param_1 + 0x100) == 0)) {
    FUN_180006a50((LPVOID)(*(longlong *)((longlong)param_1 + 0x108) + -0xfe));
    FUN_180006a50((LPVOID)(*(longlong *)((longlong)param_1 + 0x110) + -0x80));
    FUN_180006a50((LPVOID)(*(longlong *)((longlong)param_1 + 0x118) + -0x80));
    FUN_180006a50(*(LPVOID *)((longlong)param_1 + 0x100));
  }
  __acrt_locale_free_lc_time_if_unreferenced(*(undefined ***)((longlong)param_1 + 0x120));
  puVar3 = (undefined8 *)((longlong)param_1 + 0x128);
  lVar2 = 6;
  puVar4 = (undefined8 *)((longlong)param_1 + 0x38);
  do {
    if ((((undefined *)puVar4[-2] != &DAT_180019788) &&
        (piVar1 = (int *)*puVar4, piVar1 != (int *)0x0)) && (*piVar1 == 0)) {
      FUN_180006a50(piVar1);
      FUN_180006a50((LPVOID)*puVar3);
    }
    if (((puVar4[-3] != 0) && (piVar1 = (int *)puVar4[-1], piVar1 != (int *)0x0)) && (*piVar1 == 0))
    {
      FUN_180006a50(piVar1);
    }
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 4;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  FUN_180006a50(param_1);
  return;
}



/* ===== 18000a1f0 __acrt_locale_add_lc_time_reference ===== */


/* Library Function - Single Match
    __acrt_locale_add_lc_time_reference
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

int __acrt_locale_add_lc_time_reference(undefined **param_1)

{
  int *piVar1;
  int iVar2;
  
  if ((param_1 == (undefined **)0x0) || (param_1 == &PTR_DAT_180010e90)) {
    return 0x7fffffff;
  }
  LOCK();
  piVar1 = (int *)((longlong)param_1 + 0x15c);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return iVar2 + 1;
}



/* ===== 18000a218 __acrt_locale_free_lc_time_if_unreferenced ===== */


/* Library Function - Single Match
    __acrt_locale_free_lc_time_if_unreferenced
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_locale_free_lc_time_if_unreferenced(undefined **param_1)

{
  if (((param_1 != (undefined **)0x0) && (param_1 != &PTR_DAT_180010e90)) &&
     (*(int *)((longlong)param_1 + 0x15c) == 0)) {
    __acrt_locale_free_time(param_1);
    FUN_180006a50(param_1);
  }
  return;
}



/* ===== 18000a250 __acrt_locale_release_lc_time_reference ===== */


/* Library Function - Single Match
    __acrt_locale_release_lc_time_reference
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

int __acrt_locale_release_lc_time_reference(undefined **param_1)

{
  int *piVar1;
  int iVar2;
  
  if ((param_1 == (undefined **)0x0) || (param_1 == &PTR_DAT_180010e90)) {
    return 0x7fffffff;
  }
  LOCK();
  piVar1 = (int *)((longlong)param_1 + 0x15c);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  return iVar2 + -1;
}



/* ===== 18000a278 __acrt_release_locale_ref ===== */


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
      if (((undefined *)puVar2[-2] != &DAT_180019788) &&
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
    __acrt_locale_release_lc_time_reference(*(undefined ***)(param_1 + 0x120));
  }
  return;
}



/* ===== 18000a320 __acrt_update_thread_locale_data ===== */


/* Library Function - Single Match
    __acrt_update_thread_locale_data
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined ** __acrt_update_thread_locale_data(void)

{
  longlong lVar1;
  undefined **ppuVar2;
  
  lVar1 = FUN_1800061b0();
  if (((DAT_180019898 & *(uint *)(lVar1 + 0x3a8)) == 0) ||
     (ppuVar2 = *(undefined ***)(lVar1 + 0x90), ppuVar2 == (undefined **)0x0)) {
    __acrt_lock(4);
    ppuVar2 = _updatetlocinfoEx_nolock((longlong *)(lVar1 + 0x90),DAT_1800dc608);
    __acrt_unlock(4);
    if (ppuVar2 == (undefined **)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
  return ppuVar2;
}



/* ===== 18000a390 _updatetlocinfoEx_nolock ===== */


/* Library Function - Single Match
    _updatetlocinfoEx_nolock
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined ** _updatetlocinfoEx_nolock(undefined8 *param_1,undefined **param_2)

{
  undefined **ppuVar1;
  
  if ((param_2 == (undefined **)0x0) || (param_1 == (undefined8 *)0x0)) {
    param_2 = (undefined **)0x0;
  }
  else {
    ppuVar1 = (undefined **)*param_1;
    if (ppuVar1 != param_2) {
      *param_1 = param_2;
      __acrt_add_locale_ref((longlong)param_2);
      if (((ppuVar1 != (undefined **)0x0) &&
          (__acrt_release_locale_ref((longlong)ppuVar1), *(int *)(ppuVar1 + 2) == 0)) &&
         (ppuVar1 != &PTR_DAT_180019620)) {
        __acrt_free_locale(ppuVar1);
      }
    }
  }
  return param_2;
}



/* ===== 18000a400 FUN_18000a400 ===== */


undefined4 FUN_18000a400(void)

{
  return DAT_1800dc644;
}



/* ===== 18000a410 FUN_18000a410 ===== */


uint FUN_18000a410(uint param_1)

{
  uint uVar1;
  __acrt_ptd *p_Var2;
  
  if (param_1 < 2) {
    LOCK();
    UNLOCK();
    uVar1 = DAT_1800dc644;
    DAT_1800dc644 = param_1;
  }
  else {
    p_Var2 = FUN_1800069ac();
    *(undefined4 *)p_Var2 = 0x16;
    FUN_180006804();
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



/* ===== 18000a440 FUN_18000a440 ===== */


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18000a440(undefined1 *param_1,ulonglong param_2,ulonglong param_3,undefined *param_4)

{
  undefined1 uVar1;
  int iVar2;
  __acrt_ptd *p_Var3;
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
  
  local_58 = DAT_180019040 ^ (ulonglong)auStack_468;
  if ((((param_1 == (undefined1 *)0x0) && (param_2 != 0)) || (param_3 == 0)) ||
     (param_4 == (undefined *)0x0)) {
    p_Var3 = FUN_1800069ac();
    *(undefined4 *)p_Var3 = 0x16;
    FUN_180006804();
  }
  else {
    FUN_18000ca14();
    FUN_18000dde0((undefined1 (*) [32])local_438,0,0x1f0);
    FUN_18000dde0((undefined1 (*) [32])local_248,0,0x1f0);
    if (1 < param_2) {
      local_448 = 0;
      puVar10 = param_1 + (param_2 - 1) * param_3;
LAB_18000a500:
      uVar9 = (ulonglong)((longlong)puVar10 - (longlong)param_1) / param_3 + 1;
      if (8 < uVar9) {
        lVar5 = (uVar9 >> 1) * param_3;
        puVar4 = param_1 + lVar5;
        iVar2 = (*(code *)param_4)(param_1,puVar4);
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
        iVar2 = (*(code *)param_4)(param_1,puVar10);
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
        iVar2 = (*(code *)param_4)(puVar4);
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
              if (puVar4 <= puVar6) goto LAB_18000a690;
              iVar2 = (*(code *)param_4)(puVar6);
            } while (iVar2 < 1);
          }
          else {
LAB_18000a690:
            do {
              puVar6 = puVar6 + param_3;
              if (puVar10 < puVar6) break;
              iVar2 = (*(code *)param_4)(puVar6);
            } while (iVar2 < 1);
          }
          do {
            puVar7 = puVar8;
            puVar8 = puVar7 + -param_3;
            if (puVar8 <= puVar4) break;
            iVar2 = (*(code *)param_4)(puVar8);
          } while (0 < iVar2);
          if (puVar8 < puVar6) goto LAB_18000a6fa;
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
            iVar2 = (*(code *)param_4)(puVar4,puVar8);
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
      goto LAB_18000a583;
    }
  }
  return;
LAB_18000a6fa:
  if (puVar4 < puVar7) {
    do {
      puVar7 = puVar7 + -param_3;
      if (puVar7 <= puVar4) goto LAB_18000a717;
      iVar2 = (*(code *)param_4)(puVar7);
    } while (iVar2 == 0);
  }
  else {
LAB_18000a717:
    do {
      puVar7 = puVar7 + -param_3;
      if (puVar7 <= param_1) break;
      iVar2 = (*(code *)param_4)(puVar7);
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
      goto LAB_18000a500;
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
      goto LAB_18000a500;
    }
  }
LAB_18000a583:
  local_448 = local_448 + -1;
  if (local_448 < 0) {
    return;
  }
  param_1 = (undefined1 *)local_438[local_448];
  puVar10 = (undefined1 *)local_248[local_448];
  goto LAB_18000a500;
}



/* ===== 18000a7e0 FUN_18000a7e0 ===== */


undefined4 FUN_18000a7e0(char *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  char cVar1;
  __acrt_ptd *p_Var2;
  longlong lVar3;
  char *pcVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (param_4 == 0) {
    if (param_1 == (char *)0x0) {
      if (param_2 == 0) {
        return 0;
      }
      goto LAB_18000a839;
    }
  }
  else if (param_1 == (char *)0x0) goto LAB_18000a839;
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
      p_Var2 = FUN_1800069ac();
      *(undefined4 *)p_Var2 = 0x22;
      FUN_180006804();
      return 0x22;
    }
    *param_1 = '\0';
  }
LAB_18000a839:
  p_Var2 = FUN_1800069ac();
  *(undefined4 *)p_Var2 = 0x16;
  FUN_180006804();
  return 0x16;
}



/* ===== 18000a910 FUN_18000a910 ===== */


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

byte * FUN_18000a910(byte *param_1,byte *param_2)

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



/* ===== 18000a9b0 FUN_18000a9b0 ===== */


/* WARNING: Removing unreachable block (ram,0x00018000ac4c) */
/* WARNING: Removing unreachable block (ram,0x00018000ac45) */
/* WARNING: Removing unreachable block (ram,0x00018000ac3e) */
/* WARNING: Removing unreachable block (ram,0x00018000ac37) */
/* WARNING: Removing unreachable block (ram,0x00018000ac30) */
/* WARNING: Removing unreachable block (ram,0x00018000ac29) */
/* WARNING: Removing unreachable block (ram,0x00018000ac22) */
/* WARNING: Removing unreachable block (ram,0x00018000ac1b) */
/* WARNING: Removing unreachable block (ram,0x00018000ac14) */
/* WARNING: Removing unreachable block (ram,0x00018000ac0d) */
/* WARNING: Removing unreachable block (ram,0x00018000ac06) */
/* WARNING: Removing unreachable block (ram,0x00018000abff) */
/* WARNING: Removing unreachable block (ram,0x00018000abf8) */
/* WARNING: Removing unreachable block (ram,0x00018000abf1) */
/* WARNING: Removing unreachable block (ram,0x00018000abea) */
/* WARNING: Removing unreachable block (ram,0x00018000aaad) */
/* WARNING: Removing unreachable block (ram,0x00018000aabc) */
/* WARNING: Removing unreachable block (ram,0x00018000aacb) */
/* WARNING: Removing unreachable block (ram,0x00018000aada) */
/* WARNING: Removing unreachable block (ram,0x00018000aae9) */
/* WARNING: Removing unreachable block (ram,0x00018000aaf5) */
/* WARNING: Removing unreachable block (ram,0x00018000ab01) */
/* WARNING: Removing unreachable block (ram,0x00018000ab0d) */
/* WARNING: Removing unreachable block (ram,0x00018000ab19) */
/* WARNING: Removing unreachable block (ram,0x00018000ab25) */
/* WARNING: Removing unreachable block (ram,0x00018000ab31) */
/* WARNING: Removing unreachable block (ram,0x00018000ab3d) */
/* WARNING: Removing unreachable block (ram,0x00018000ab49) */
/* WARNING: Removing unreachable block (ram,0x00018000ab55) */
/* WARNING: Removing unreachable block (ram,0x00018000ab61) */

byte * FUN_18000a9b0(byte *param_1,byte *param_2)

{
  byte bVar1;
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
  byte *pbVar19;
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
  undefined1 auVar34 [16];
  
  uVar21 = (ulonglong)((uint)param_2 & 0xf);
  pauVar20 = (undefined1 (*) [16])(param_2 + -uVar21);
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
        pbVar19 = FUN_18000a910(param_1,param_2);
        return pbVar19;
      }
      goto LAB_18000ac59;
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
    if (uVar21 == 0 || (ulonglong)uVar2 < 0x10 - uVar21) goto LAB_18000ac59;
  }
  auVar34 = pauVar20[1];
  auVar23[0] = -(auVar34[0] == '\0');
  auVar23[1] = -(auVar34[1] == '\0');
  auVar23[2] = -(auVar34[2] == '\0');
  auVar23[3] = -(auVar34[3] == '\0');
  auVar23[4] = -(auVar34[4] == '\0');
  auVar23[5] = -(auVar34[5] == '\0');
  auVar23[6] = -(auVar34[6] == '\0');
  lVar25 = auVar34._8_8_;
  auVar23[7] = -(auVar34[7] == '\0');
  auVar23[8] = -(auVar34[8] == '\0');
  auVar23[9] = -(auVar34[9] == '\0');
  auVar23[10] = -(auVar34[10] == '\0');
  auVar23[0xb] = -(auVar34[0xb] == '\0');
  auVar23[0xc] = -(auVar34[0xc] == '\0');
  auVar23[0xd] = -(auVar34[0xd] == '\0');
  auVar23[0xe] = -(auVar34[0xe] == '\0');
  auVar23[0xf] = -(auVar34[0xf] == '\0');
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
  if (uVar3 != 0) {
    uVar2 = 0;
    if (uVar3 != 0) {
      for (; (uVar3 >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
      }
    }
    if ((uVar2 - uVar21) + 0x10 < 0x11) {
      uVar21 = auVar34._0_8_;
      switch(-uVar2) {
      case 0:
        auVar34 = ZEXT816(0);
        break;
      case 0xfffffff1:
        auVar34._0_8_ = uVar21 << 8;
        auVar34._8_8_ = lVar25 << 8 | uVar21 >> 0x38;
        break;
      case 0xfffffff2:
        auVar34._0_8_ = uVar21 << 0x10;
        auVar34._8_8_ = lVar25 << 0x10 | uVar21 >> 0x30;
        break;
      case 0xfffffff3:
        auVar34._0_8_ = uVar21 << 0x18;
        auVar34._8_8_ = lVar25 << 0x18 | uVar21 >> 0x28;
        break;
      case 0xfffffff4:
        auVar34._0_8_ = uVar21 << 0x20;
        auVar34._8_8_ = lVar25 << 0x20 | uVar21 >> 0x20;
        break;
      case 0xfffffff5:
        auVar34._0_8_ = uVar21 << 0x28;
        auVar34._8_8_ = lVar25 << 0x28 | uVar21 >> 0x18;
        break;
      case 0xfffffff6:
        auVar34._0_8_ = uVar21 << 0x30;
        auVar34._8_8_ = lVar25 << 0x30 | uVar21 >> 0x10;
        break;
      case 0xfffffff7:
        auVar34._0_8_ = uVar21 << 0x38;
        auVar34._8_8_ = lVar25 << 0x38 | uVar21 >> 8;
        break;
      case 0xfffffff8:
        auVar11._8_8_ = 0;
        auVar11._0_8_ = uVar21;
        auVar34 = auVar11 << 0x40;
        break;
      case 0xfffffff9:
        auVar12._8_8_ = 0;
        auVar12._0_8_ = uVar21 << 8;
        auVar34 = auVar12 << 0x40;
        break;
      case 0xfffffffa:
        auVar13._8_8_ = 0;
        auVar13._0_8_ = uVar21 << 0x10;
        auVar34 = auVar13 << 0x40;
        break;
      case 0xfffffffb:
        auVar14._8_8_ = 0;
        auVar14._0_8_ = uVar21 << 0x18;
        auVar34 = auVar14 << 0x40;
        break;
      case 0xfffffffc:
        auVar15._8_8_ = 0;
        auVar15._0_8_ = uVar21 << 0x20;
        auVar34 = auVar15 << 0x40;
        break;
      case 0xfffffffd:
        auVar16._8_8_ = 0;
        auVar16._0_8_ = uVar21 << 0x28;
        auVar34 = auVar16 << 0x40;
        break;
      case 0xfffffffe:
        auVar17._8_8_ = 0;
        auVar17._0_8_ = uVar21 << 0x30;
        auVar34 = auVar17 << 0x40;
        break;
      case 0xffffffff:
        auVar18._8_8_ = 0;
        auVar18._0_8_ = uVar21 << 0x38;
        auVar34 = auVar18 << 0x40;
      }
      auVar33 = auVar33 | auVar34;
LAB_18000ac59:
      bVar1 = *param_1;
      while( true ) {
        if (bVar1 == 0) {
          return (byte *)0x0;
        }
        auVar24[0] = -(bVar1 == auVar33[0]);
        auVar24[1] = -(bVar1 == auVar33[1]);
        auVar24[2] = -(bVar1 == auVar33[2]);
        auVar24[3] = -(bVar1 == auVar33[3]);
        auVar24[4] = -(bVar1 == auVar33[4]);
        auVar24[5] = -(bVar1 == auVar33[5]);
        auVar24[6] = -(bVar1 == auVar33[6]);
        auVar24[7] = -(bVar1 == auVar33[7]);
        auVar24[8] = -(bVar1 == auVar33[8]);
        auVar24[9] = -(bVar1 == auVar33[9]);
        auVar24[10] = -(bVar1 == auVar33[10]);
        auVar24[0xb] = -(bVar1 == auVar33[0xb]);
        auVar24[0xc] = -(bVar1 == auVar33[0xc]);
        auVar24[0xd] = -(bVar1 == auVar33[0xd]);
        auVar24[0xe] = -(bVar1 == auVar33[0xe]);
        auVar24[0xf] = -(bVar1 == auVar33[0xf]);
        if ((((((((((((((((SUB161(auVar24 >> 7,0) & 1) != 0 || (SUB161(auVar24 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar24 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar24 >> 0x1f,0) & 1) != 0) || (SUB161(auVar24 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar24 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar24 >> 0x37,0) & 1) != 0) || (SUB161(auVar24 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar24 >> 0x47,0) & 1) != 0) || (SUB161(auVar24 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar24 >> 0x57,0) & 1) != 0) || (SUB161(auVar24 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar24 >> 0x67,0) & 1) != 0) || (SUB161(auVar24 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar24 >> 0x77,0) & 1) != 0) || auVar24[0xf] < '\0') break;
        bVar1 = param_1[1];
        param_1 = param_1 + 1;
      }
      return param_1;
    }
  }
  pbVar19 = FUN_18000a910(param_1,param_2);
  return pbVar19;
}



/* ===== 18000ad68 FUN_18000ad68 ===== */


void FUN_18000ad68(uchar *param_1,uchar *param_2)

{
  _mbsdec_l(param_1,param_2,(_locale_t)0x0);
  return;
}



/* ===== 18000ad70 _mbsdec_l ===== */


/* Library Function - Single Match
    _mbsdec_l
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

uchar * __cdecl _mbsdec_l(uchar *_Start,uchar *_Pos,_locale_t _Locale)

{
  __acrt_ptd *p_Var1;
  byte *pbVar2;
  longlong local_28 [2];
  longlong local_18;
  char local_10;
  
  if ((_Start == (uchar *)0x0) || (_Pos == (uchar *)0x0)) {
    p_Var1 = FUN_1800069ac();
    *(undefined4 *)p_Var1 = 0x16;
    FUN_180006804();
  }
  else if (_Start < _Pos) {
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_28,(__crt_locale_pointers *)_Locale);
    pbVar2 = _Pos + -1;
    if (*(int *)(local_18 + 8) != 0) {
      do {
        pbVar2 = pbVar2 + -1;
        if (pbVar2 < _Start) break;
      } while ((*(byte *)((ulonglong)*pbVar2 + 0x19 + local_18) & 4) != 0);
      pbVar2 = _Pos + (-1 - (ulonglong)((int)_Pos - (int)pbVar2 & 1));
    }
    if (local_10 != '\0') {
      *(uint *)(local_28[0] + 0x3a8) = *(uint *)(local_28[0] + 0x3a8) & 0xfffffffd;
    }
    return pbVar2;
  }
  return (uchar *)0x0;
}



/* ===== 18000ae04 FUN_18000ae04 ===== */


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

BOOL FUN_18000ae04(__crt_locale_pointers *param_1,DWORD param_2,undefined8 param_3,
                  undefined8 param_4,LPWORD param_5,uint param_6,int param_7)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  undefined1 (*lpSrcStr) [32];
  undefined1 *puVar7;
  undefined1 *puVar8;
  BOOL BVar9;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_58 [2];
  longlong local_50;
  longlong local_48;
  char local_38;
  ulonglong local_30;
  
  local_30 = DAT_180019040 ^ (ulonglong)local_58;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_50,param_1);
  if (param_6 == 0) {
    param_6 = *(uint *)(local_48 + 0xc);
  }
  local_60 = 0;
  local_68 = 0;
  iVar3 = FUN_180008408(param_6,(ulonglong)((-(uint)(param_7 != 0) & 8) + 1));
  puVar8 = auStack_88;
  if (iVar3 == 0) {
    BVar9 = 0;
    puVar8 = auStack_88;
    goto LAB_18000af5a;
  }
  uVar1 = (longlong)iVar3 * 2;
  uVar6 = -(ulonglong)(uVar1 < uVar1 + 0x10) & uVar1 + 0x10;
  if (uVar6 == 0) {
    lpSrcStr = (undefined1 (*) [32])0x0;
LAB_18000af42:
    BVar9 = 0;
    if (lpSrcStr == (undefined1 (*) [32])0x0) goto LAB_18000af5a;
  }
  else {
    if (uVar6 < 0x401) {
      uVar4 = uVar6 + 0xf;
      if (uVar4 <= uVar6) {
        uVar4 = 0xffffffffffffff0;
      }
      lVar2 = -(uVar4 & 0xfffffffffffffff0);
      puVar8 = auStack_88 + lVar2;
      puVar7 = auStack_88 + lVar2;
      puVar5 = (undefined4 *)((longlong)local_58 + lVar2);
      lpSrcStr = (undefined1 (*) [32])0x0;
      if (puVar5 == (undefined4 *)0x0) goto LAB_18000af42;
      *puVar5 = 0xcccc;
LAB_18000aef0:
      lpSrcStr = (undefined1 (*) [32])(puVar5 + 4);
      puVar8 = puVar7;
    }
    else {
      puVar5 = _malloc_base(uVar6);
      puVar8 = auStack_88;
      puVar7 = auStack_88;
      lpSrcStr = (undefined1 (*) [32])0x0;
      if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = 0xdddd;
        goto LAB_18000aef0;
      }
    }
    if (lpSrcStr == (undefined1 (*) [32])0x0) goto LAB_18000af42;
    *(undefined8 *)(puVar8 + -8) = 0x18000af06;
    FUN_18000dde0(lpSrcStr,0,uVar1);
    *(int *)(puVar8 + 0x28) = iVar3;
    *(undefined1 (**) [32])(puVar8 + 0x20) = lpSrcStr;
    *(undefined8 *)(puVar8 + -8) = 0x18000af22;
    iVar3 = FUN_180008408(param_6,1);
    if (iVar3 == 0) goto LAB_18000af42;
    *(undefined8 *)(puVar8 + -8) = 0x18000af3c;
    BVar9 = GetStringTypeW(param_2,(LPCWSTR)lpSrcStr,iVar3,param_5);
  }
  if (*(int *)(lpSrcStr[-1] + 0x10) == 0xdddd) {
    *(undefined8 *)(puVar8 + -8) = 0x18000af5a;
    FUN_180006a50(lpSrcStr[-1] + 0x10);
  }
LAB_18000af5a:
  if (local_38 != '\0') {
    *(uint *)(local_50 + 0x3a8) = *(uint *)(local_50 + 0x3a8) & 0xfffffffd;
  }
  *(undefined8 *)(puVar8 + -8) = 0x18000af79;
  return BVar9;
}



/* ===== 18000af94 FUN_18000af94 ===== */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_18000af94(longlong *param_1,ushort *param_2,uint param_3,char *param_4,int param_5,
                       undefined8 param_6,int param_7,uint param_8,int param_9)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  LPCWSTR pWVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined4 *puVar13;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_38 [2];
  ulonglong local_30;
  
  local_30 = DAT_180019040 ^ (ulonglong)local_38;
  if (0 < param_5) {
    __strncnt(param_4,(longlong)param_5);
  }
  if (param_8 == 0) {
    param_8 = *(uint *)(*param_1 + 0xc);
  }
  local_60 = 0;
  local_68 = 0;
  uVar5 = FUN_180008408(param_8,(ulonglong)((-(uint)(param_9 != 0) & 8) + 1));
  puVar11 = auStack_88;
  uVar3 = (uint)uVar5;
  puVar12 = auStack_88;
  if (uVar3 == 0) goto LAB_18000b29f;
  uVar5 = (longlong)(int)uVar3 * 2 + 0x10;
  uVar5 = -(ulonglong)((ulonglong)((longlong)(int)uVar3 * 2) < uVar5) & uVar5;
  if (uVar5 == 0) {
    pWVar8 = (LPCWSTR)0x0;
LAB_18000b285:
    uVar5 = 0;
    if (pWVar8 != (LPCWSTR)0x0) goto LAB_18000b28c;
  }
  else {
    if (uVar5 < 0x401) {
      uVar7 = uVar5 + 0xf;
      if (uVar7 <= uVar5) {
        uVar7 = 0xffffffffffffff0;
      }
      lVar1 = -(uVar7 & 0xfffffffffffffff0);
      puVar11 = auStack_88 + lVar1;
      puVar9 = auStack_88 + lVar1;
      puVar13 = (undefined4 *)((longlong)local_38 + lVar1);
      pWVar8 = (LPCWSTR)0x0;
      if (puVar13 == (undefined4 *)0x0) goto LAB_18000b285;
      *puVar13 = 0xcccc;
LAB_18000b0a0:
      pWVar8 = (LPCWSTR)(puVar13 + 4);
      puVar11 = puVar9;
    }
    else {
      puVar13 = _malloc_base(uVar5);
      puVar11 = auStack_88;
      puVar9 = auStack_88;
      pWVar8 = (LPCWSTR)0x0;
      if (puVar13 != (undefined4 *)0x0) {
        *puVar13 = 0xdddd;
        goto LAB_18000b0a0;
      }
    }
    if (pWVar8 == (LPCWSTR)0x0) goto LAB_18000b285;
    *(uint *)(puVar11 + 0x28) = uVar3;
    *(LPCWSTR *)(puVar11 + 0x20) = pWVar8;
    *(undefined8 *)(puVar11 + -8) = 0x18000b0ca;
    iVar2 = FUN_180008408(param_8,1);
    if (iVar2 == 0) goto LAB_18000b285;
    *(undefined8 *)(puVar11 + 0x40) = 0;
    *(undefined8 *)(puVar11 + 0x38) = 0;
    *(undefined8 *)(puVar11 + 0x30) = 0;
    *(undefined4 *)(puVar11 + 0x28) = 0;
    *(undefined8 *)(puVar11 + 0x20) = 0;
    *(undefined8 *)(puVar11 + -8) = 0x18000b0fd;
    iVar2 = FUN_1800089c8(param_2,param_3,pWVar8,uVar3,*(LPWSTR *)(puVar11 + 0x20),
                          *(int *)(puVar11 + 0x28),*(undefined8 *)(puVar11 + 0x30),
                          *(undefined8 *)(puVar11 + 0x38),*(undefined8 *)(puVar11 + 0x40));
    uVar5 = (ulonglong)iVar2;
    if (iVar2 == 0) goto LAB_18000b285;
    if ((param_3 & 0x400) == 0) {
      uVar7 = uVar5 * 2 + 0x10;
      uVar7 = -(ulonglong)(uVar5 * 2 < uVar7) & uVar7;
      if (uVar7 == 0) {
        puVar13 = (undefined4 *)0x0;
        goto LAB_18000b268;
      }
      if (uVar7 < 0x401) {
        uVar5 = uVar7 + 0xf;
        if (uVar5 <= uVar7) {
          uVar5 = 0xffffffffffffff0;
        }
        *(undefined8 *)(puVar11 + -8) = 0x18000b1a0;
        lVar1 = -(uVar5 & 0xfffffffffffffff0);
        puVar10 = puVar11 + lVar1;
        puVar6 = (undefined4 *)(puVar11 + lVar1 + 0x50);
        puVar11 = puVar11 + lVar1;
        if (puVar6 != (undefined4 *)0x0) {
          *puVar6 = 0xcccc;
          puVar11 = puVar10;
LAB_18000b1ce:
          puVar13 = puVar6 + 4;
          goto LAB_18000b1d2;
        }
      }
      else {
        *(undefined8 *)(puVar11 + -8) = 0x18000b1be;
        puVar6 = _malloc_base(uVar7);
        puVar13 = (undefined4 *)0x0;
        if (puVar6 != (undefined4 *)0x0) {
          *puVar6 = 0xdddd;
          goto LAB_18000b1ce;
        }
LAB_18000b1d2:
        if (puVar13 != (undefined4 *)0x0) {
          *(undefined8 *)(puVar11 + 0x40) = 0;
          *(undefined8 *)(puVar11 + 0x38) = 0;
          *(undefined8 *)(puVar11 + 0x30) = 0;
          *(int *)(puVar11 + 0x28) = iVar2;
          *(undefined4 **)(puVar11 + 0x20) = puVar13;
          *(undefined8 *)(puVar11 + -8) = 0x18000b204;
          iVar4 = FUN_1800089c8(param_2,param_3,pWVar8,uVar3,*(LPWSTR *)(puVar11 + 0x20),
                                *(int *)(puVar11 + 0x28),*(undefined8 *)(puVar11 + 0x30),
                                *(undefined8 *)(puVar11 + 0x38),*(undefined8 *)(puVar11 + 0x40));
          if (iVar4 != 0) {
            *(undefined8 *)(puVar11 + 0x38) = 0;
            *(undefined8 *)(puVar11 + 0x30) = 0;
            if (param_7 == 0) {
              *(undefined4 *)(puVar11 + 0x28) = 0;
              *(undefined8 *)(puVar11 + 0x20) = 0;
              *(undefined8 *)(puVar11 + -8) = 0x18000b232;
              uVar3 = FUN_180008498(param_8,0,puVar13,iVar2);
              if (uVar3 == 0) goto LAB_18000b268;
            }
            else {
              *(int *)(puVar11 + 0x28) = param_7;
              *(undefined8 *)(puVar11 + 0x20) = param_6;
              *(undefined8 *)(puVar11 + -8) = 0x18000b24c;
              uVar3 = FUN_180008498(param_8,0,puVar13,iVar2);
              if (uVar3 == 0) goto LAB_18000b26d;
            }
            uVar5 = (ulonglong)uVar3;
            if (puVar13[-4] == 0xdddd) {
              *(undefined8 *)(puVar11 + -8) = 0x18000b263;
              FUN_180006a50(puVar13 + -4);
            }
            goto LAB_18000b28c;
          }
LAB_18000b268:
          if (puVar13 != (undefined4 *)0x0) {
LAB_18000b26d:
            if (puVar13[-4] == 0xdddd) {
              *(undefined8 *)(puVar11 + -8) = 0x18000b27e;
              FUN_180006a50(puVar13 + -4);
            }
          }
        }
      }
      uVar5 = 0;
    }
    else if (param_7 != 0) {
      if (iVar2 <= param_7) {
        *(undefined8 *)(puVar11 + 0x40) = 0;
        *(undefined8 *)(puVar11 + 0x38) = 0;
        *(undefined8 *)(puVar11 + 0x30) = 0;
        *(int *)(puVar11 + 0x28) = param_7;
        *(undefined8 *)(puVar11 + 0x20) = param_6;
        *(undefined8 *)(puVar11 + -8) = 0x18000b155;
        uVar3 = FUN_1800089c8(param_2,param_3,pWVar8,uVar3,*(LPWSTR *)(puVar11 + 0x20),
                              *(int *)(puVar11 + 0x28),*(undefined8 *)(puVar11 + 0x30),
                              *(undefined8 *)(puVar11 + 0x38),*(undefined8 *)(puVar11 + 0x40));
        uVar5 = (ulonglong)uVar3;
        if (uVar3 != 0) goto LAB_18000b28c;
      }
      goto LAB_18000b285;
    }
LAB_18000b28c:
    if (*(int *)(pWVar8 + -8) == 0xdddd) {
      *(undefined8 *)(puVar11 + -8) = 0x18000b29d;
      FUN_180006a50(pWVar8 + -8);
    }
  }
  uVar5 = uVar5 & 0xffffffff;
  puVar12 = puVar11;
LAB_18000b29f:
  *(undefined8 *)(puVar12 + -8) = 0x18000b2ab;
  return uVar5;
}



/* ===== 18000b2c8 __acrt_LCMapStringA ===== */


/* Library Function - Single Match
    __acrt_LCMapStringA
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_LCMapStringA(__crt_locale_pointers *param_1,ushort *param_2,uint param_3,char *param_4,
                        int param_5,undefined8 param_6,int param_7,uint param_8,int param_9)

{
  longlong local_28;
  longlong local_20 [2];
  char local_10;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_28,param_1);
  FUN_18000af94(local_20,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  if (local_10 != '\0') {
    *(uint *)(local_28 + 0x3a8) = *(uint *)(local_28 + 0x3a8) & 0xfffffffd;
  }
  return;
}



/* ===== 18000b360 FUN_18000b360 ===== */


uint FUN_18000b360(void)

{
  undefined8 uVar1;
  
  uVar1 = __acrt_initialize_multibyte();
  return (uint)uVar1 & 0xff ^ 1;
}



/* ===== 18000b380 _msize_base ===== */


/* Library Function - Single Match
    _msize_base
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined8 _msize_base(longlong param_1)

{
  __acrt_ptd *p_Var1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    p_Var1 = FUN_1800069ac();
    *(undefined4 *)p_Var1 = 0x16;
    FUN_180006804();
    return 0xffffffffffffffff;
  }
                    /* WARNING: Could not recover jumptable at 0x00018000b3b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = HeapSize(DAT_1800dc1c8,0,param_1);
  return uVar2;
}



/* ===== 18000b3d0 _realloc_base ===== */


/* Library Function - Single Match
    _realloc_base
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

LPVOID _realloc_base(LPVOID param_1,ulonglong param_2)

{
  bool bVar1;
  int iVar2;
  LPVOID pvVar3;
  __acrt_ptd *p_Var4;
  undefined7 extraout_var;
  
  if (param_1 == (LPVOID)0x0) {
    pvVar3 = _malloc_base(param_2);
  }
  else {
    if (param_2 == 0) {
      FUN_180006a50(param_1);
    }
    else {
      if (param_2 < 0xffffffffffffffe1) {
        do {
          pvVar3 = HeapReAlloc(DAT_1800dc1c8,0,param_1,param_2);
          if (pvVar3 != (LPVOID)0x0) {
            return pvVar3;
          }
          iVar2 = FUN_18000a400();
        } while ((iVar2 != 0) &&
                (bVar1 = FUN_180008f90(param_2), (int)CONCAT71(extraout_var,bVar1) != 0));
      }
      p_Var4 = FUN_1800069ac();
      *(undefined4 *)p_Var4 = 0xc;
    }
    pvVar3 = (LPVOID)0x0;
  }
  return pvVar3;
}



/* ===== 18000b450 wcsncmp ===== */


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



/* ===== 18000b484 FUN_18000b484 ===== */


undefined4 FUN_18000b484(ushort *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (param_1 != (ushort *)0x0) {
    iVar4 = 0;
    iVar5 = 0xe3;
    do {
      iVar2 = (iVar5 + iVar4) / 2;
      iVar3 = FUN_18000ca50(param_1,(ushort *)(&PTR_DAT_180013570)[(longlong)iVar2 * 2],0x55);
      if (iVar3 == 0) {
        iVar5 = *(int *)(&DAT_180013578 + (longlong)iVar2 * 0x10);
        if (iVar5 < 0) {
          return 0;
        }
        if ((ulonglong)(longlong)iVar5 < 0xe4) {
          return *(undefined4 *)(&DAT_180011b10 + (longlong)iVar5 * 0x10);
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



/* ===== 18000b52c __acrt_lowio_create_handle_array ===== */


/* Library Function - Single Match
    __acrt_lowio_create_handle_array
   
   Library: Visual Studio 2019 Release */

undefined8 * __acrt_lowio_create_handle_array(void)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  
  puVar3 = _calloc_base(0x40,0x48);
  puVar5 = (undefined8 *)0x0;
  if (puVar3 != (undefined8 *)0x0) {
    if (puVar3 != puVar3 + 0x240) {
      puVar5 = puVar3 + 6;
      do {
        InitializeCriticalSectionEx((LPCRITICAL_SECTION)(puVar5 + -6),4000,0);
        puVar5[-1] = 0xffffffffffffffff;
        puVar4 = (undefined1 *)((longlong)puVar5 + 0xe);
        *(byte *)((longlong)puVar5 + 0xd) = *(byte *)((longlong)puVar5 + 0xd) & 0xf8;
        uVar2 = 0;
        *puVar5 = 0;
        *(undefined4 *)(puVar5 + 1) = 0xa0a0000;
        *(undefined1 *)((longlong)puVar5 + 0xc) = 10;
        do {
          *puVar4 = 0;
          uVar2 = uVar2 + 1;
          puVar4 = puVar4 + 1;
        } while (uVar2 < 5);
        puVar1 = puVar5 + 3;
        puVar5 = puVar5 + 9;
      } while (puVar1 != puVar3 + 0x240);
    }
    puVar5 = puVar3;
  }
  FUN_180006a50((LPVOID)0x0);
  return puVar5;
}



/* ===== 18000b5d4 __acrt_lowio_destroy_handle_array ===== */


/* Library Function - Single Match
    __acrt_lowio_destroy_handle_array
   
   Library: Visual Studio 2019 Release */

void __acrt_lowio_destroy_handle_array(LPCRITICAL_SECTION param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
    for (lpCriticalSection = param_1;
        lpCriticalSection != (LPCRITICAL_SECTION)&param_1[0x73].LockCount;
        lpCriticalSection = (LPCRITICAL_SECTION)&lpCriticalSection[1].SpinCount) {
      DeleteCriticalSection(lpCriticalSection);
    }
    FUN_180006a50(param_1);
  }
  return;
}



/* ===== 18000b624 __acrt_lowio_ensure_fh_exists ===== */


/* Library Function - Single Match
    __acrt_lowio_ensure_fh_exists
   
   Library: Visual Studio 2019 Release */

undefined4 __acrt_lowio_ensure_fh_exists(uint param_1)

{
  int iVar1;
  __acrt_ptd *p_Var2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined4 uVar5;
  
  if (param_1 < 0x2000) {
    uVar5 = 0;
    __acrt_lock(7);
    lVar4 = 0;
    iVar1 = DAT_1800dc5d0;
    while (iVar1 <= (int)param_1) {
      if ((&DAT_1800dc1d0)[lVar4] == 0) {
        puVar3 = __acrt_lowio_create_handle_array();
        (&DAT_1800dc1d0)[lVar4] = puVar3;
        if (puVar3 == (undefined8 *)0x0) {
          uVar5 = 0xc;
          break;
        }
        iVar1 = DAT_1800dc5d0 + 0x40;
        DAT_1800dc5d0 = iVar1;
      }
      lVar4 = lVar4 + 1;
    }
    __acrt_unlock(7);
  }
  else {
    p_Var2 = FUN_1800069ac();
    *(undefined4 *)p_Var2 = 9;
    FUN_180006804();
    uVar5 = 9;
  }
  return uVar5;
}



/* ===== 18000b6cc FUN_18000b6cc ===== */


void FUN_18000b6cc(uint param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00018000b6ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EnterCriticalSection
            ((&DAT_1800dc1d0)[(longlong)(int)param_1 >> 6] + (ulonglong)(param_1 & 0x3f) * 0x48);
  return;
}



/* ===== 18000b6f4 FUN_18000b6f4 ===== */


void FUN_18000b6f4(uint param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00018000b714. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection
            ((&DAT_1800dc1d0)[(longlong)(int)param_1 >> 6] + (ulonglong)(param_1 & 0x3f) * 0x48);
  return;
}



/* ===== 18000b71c FUN_18000b71c ===== */


undefined8 FUN_18000b71c(uint param_1)

{
  int iVar1;
  ulonglong uVar2;
  __acrt_ptd *p_Var3;
  DWORD nStdHandle;
  
  if ((-1 < (int)param_1) && (param_1 < DAT_1800dc5d0)) {
    uVar2 = (ulonglong)(param_1 & 0x3f);
    if (((*(byte *)((&DAT_1800dc1d0)[(ulonglong)(longlong)(int)param_1 >> 6] + 0x38 + uVar2 * 0x48)
         & 1) != 0) &&
       (*(longlong *)
         ((&DAT_1800dc1d0)[(ulonglong)(longlong)(int)param_1 >> 6] + 0x28 + uVar2 * 0x48) != -1)) {
      iVar1 = FUN_18000cab8();
      if (iVar1 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_18000b79c;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,(HANDLE)0x0);
      }
LAB_18000b79c:
      *(undefined8 *)
       ((&DAT_1800dc1d0)[(ulonglong)(longlong)(int)param_1 >> 6] + 0x28 + uVar2 * 0x48) =
           0xffffffffffffffff;
      return 0;
    }
  }
  p_Var3 = FUN_1800069ac();
  *(undefined4 *)p_Var3 = 9;
  p_Var3 = FUN_180006988();
  *(undefined4 *)p_Var3 = 0;
  return 0xffffffff;
}



/* ===== 18000b7d8 FUN_18000b7d8 ===== */


undefined8 FUN_18000b7d8(uint param_1)

{
  __acrt_ptd *p_Var1;
  
  if (param_1 == 0xfffffffe) {
    p_Var1 = FUN_180006988();
    *(undefined4 *)p_Var1 = 0;
    p_Var1 = FUN_1800069ac();
    *(undefined4 *)p_Var1 = 9;
  }
  else {
    if ((-1 < (int)param_1) && (param_1 < DAT_1800dc5d0)) {
      if ((*(byte *)((&DAT_1800dc1d0)[(ulonglong)(longlong)(int)param_1 >> 6] + 0x38 +
                    (ulonglong)(param_1 & 0x3f) * 0x48) & 1) != 0) {
        return *(undefined8 *)
                ((&DAT_1800dc1d0)[(ulonglong)(longlong)(int)param_1 >> 6] + 0x28 +
                (ulonglong)(param_1 & 0x3f) * 0x48);
      }
    }
    p_Var1 = FUN_180006988();
    *(undefined4 *)p_Var1 = 0;
    p_Var1 = FUN_1800069ac();
    *(undefined4 *)p_Var1 = 9;
    FUN_180006804();
  }
  return 0xffffffffffffffff;
}



/* ===== 18000b850 FUN_18000b850 ===== */


undefined8 FUN_18000b850(undefined8 param_1,uint *param_2,undefined8 *param_3,uint *param_4)

{
  uint uVar1;
  BOOL BVar2;
  DWORD DVar3;
  HANDLE hFile;
  __acrt_ptd *p_Var4;
  undefined8 uVar5;
  
  FUN_18000b6cc(*param_2);
  uVar1 = *(uint *)*param_3;
  if ((*(byte *)((&DAT_1800dc1d0)[(longlong)(int)uVar1 >> 6] + 0x38 +
                (ulonglong)(uVar1 & 0x3f) * 0x48) & 1) != 0) {
    hFile = (HANDLE)FUN_18000b7d8(uVar1);
    BVar2 = FlushFileBuffers(hFile);
    uVar5 = 0;
    if (BVar2 != 0) goto LAB_18000b8c7;
    DVar3 = GetLastError();
    p_Var4 = FUN_180006988();
    *(DWORD *)p_Var4 = DVar3;
  }
  p_Var4 = FUN_1800069ac();
  *(undefined4 *)p_Var4 = 9;
  uVar5 = 0xffffffff;
LAB_18000b8c7:
  FUN_18000b6f4(*param_4);
  return uVar5;
}



/* ===== 18000b8dc _commit ===== */


/* Library Function - Single Match
    _commit
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl _commit(int _FileHandle)

{
  __acrt_ptd *p_Var1;
  undefined8 uVar2;
  int local_res8 [2];
  undefined1 local_res10 [8];
  uint local_res18 [2];
  uint local_res20 [2];
  int *local_18 [3];
  
  local_res8[0] = _FileHandle;
  if (_FileHandle == -2) {
    p_Var1 = FUN_1800069ac();
    *(undefined4 *)p_Var1 = 9;
  }
  else {
    if (((-1 < _FileHandle) && ((uint)_FileHandle < DAT_1800dc5d0)) &&
       ((*(byte *)((&DAT_1800dc1d0)[(longlong)_FileHandle >> 6] + 0x38 +
                  (ulonglong)(_FileHandle & 0x3f) * 0x48) & 1) != 0)) {
      local_18[0] = local_res8;
      local_res18[0] = _FileHandle;
      local_res20[0] = _FileHandle;
      uVar2 = FUN_18000b850(local_res10,local_res20,local_18,local_res18);
      return (int)uVar2;
    }
    p_Var1 = FUN_1800069ac();
    *(undefined4 *)p_Var1 = 9;
    FUN_180006804();
  }
  return -1;
}



/* ===== 18000b970 FUN_18000b970 ===== */


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

DWORD * FUN_18000b970(DWORD *param_1,uint param_2,byte *param_3,ulonglong param_4,longlong *param_5)

{
  char cVar1;
  byte bVar2;
  HANDLE hFile;
  uint uVar3;
  BOOL BVar4;
  ulonglong uVar5;
  char *pcVar6;
  int iVar7;
  DWORD DVar8;
  undefined1 *puVar9;
  byte *pbVar10;
  int iVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 auStackY_108 [32];
  undefined2 local_c8 [2];
  ushort local_c4 [2];
  DWORD local_c0 [2];
  byte *local_b8;
  longlong *local_b0;
  uint local_a8 [2];
  UINT local_a0;
  int local_9c;
  byte *local_98;
  longlong local_90;
  uint local_88 [2];
  undefined8 *local_80;
  byte *local_78;
  HANDLE local_70;
  longlong local_68;
  undefined8 local_60;
  undefined8 local_58;
  byte local_50;
  byte local_4f;
  undefined1 local_48 [8];
  ulonglong local_40;
  
  local_60 = 0xfffffffffffffffe;
  local_40 = DAT_180019040 ^ (ulonglong)auStackY_108;
  local_b0 = param_5;
  lVar14 = (longlong)(int)param_2 >> 6;
  uVar5 = (ulonglong)(param_2 & 0x3f);
  local_70 = *(HANDLE *)((&DAT_1800dc1d0)[lVar14] + 0x28 + uVar5 * 0x48);
  local_b8 = param_3 + (param_4 & 0xffffffff);
  local_98 = param_3;
  local_90 = lVar14;
  local_a0 = GetConsoleOutputCP();
  iVar11 = 0;
  if ((char)local_b0[5] == '\0') {
    FUN_180005ca0(local_b0);
  }
  local_9c = *(int *)(local_b0[3] + 0xc);
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_3 + (param_4 & 0xffffffff) <= local_98) {
    return param_1;
  }
  DVar8 = 0;
  local_68 = lVar14;
  do {
    local_c8[0] = CONCAT11(local_c8[0]._1_1_,*param_3);
    local_c4[0] = 0;
    local_c4[1] = 0;
    uVar3 = 1;
    if (local_9c == 0xfde9) {
      iVar7 = 0;
      lVar15 = 0;
      pcVar6 = (char *)(uVar5 * 0x48 + 0x3e + (&DAT_1800dc1d0)[local_68]);
      do {
        if (*pcVar6 == '\0') break;
        iVar7 = iVar7 + 1;
        lVar15 = lVar15 + 1;
        pcVar6 = pcVar6 + 1;
      } while (lVar15 < 5);
      if (lVar15 < 1) {
        cVar1 = (&DAT_180019940)[*param_3];
        iVar7 = cVar1 + 1;
        lVar14 = (longlong)local_b8 - (longlong)param_3;
        if (lVar14 < iVar7) {
          if (0 < lVar14) {
            lVar15 = 0;
            do {
              *(byte *)(lVar15 + uVar5 * 0x48 + 0x3e + (&DAT_1800dc1d0)[local_90]) = param_3[lVar15]
              ;
              iVar11 = iVar11 + 1;
              lVar15 = lVar15 + 1;
            } while (iVar11 < lVar14);
          }
          param_1[1] = param_1[1] + (int)lVar14;
          return param_1;
        }
        local_a8[0] = 0;
        local_a8[1] = 0;
        uVar3 = (iVar7 == 4) + 1;
        local_78 = param_3;
        lVar14 = FUN_180009d60(local_c4,&local_78,(ulonglong)uVar3,local_a8,(longlong)local_b0);
        if (lVar14 == -1) {
          return param_1;
        }
        pbVar10 = param_3 + cVar1;
        lVar14 = local_90;
      }
      else {
        cVar1 = (&DAT_180019940)[*(byte *)((&DAT_1800dc1d0)[lVar14] + 0x3e + uVar5 * 0x48)];
        iVar7 = (cVar1 + 1) - iVar7;
        local_a8[0] = iVar7;
        lVar12 = (longlong)local_b8 - (longlong)param_3;
        uVar13 = (ulonglong)iVar7;
        if (lVar12 < (longlong)uVar13) {
          if (0 < lVar12) {
            lVar16 = lVar15;
            do {
              *(byte *)(lVar16 + uVar5 * 0x48 + 0x3e + (&DAT_1800dc1d0)[lVar14]) =
                   param_3[lVar16 - lVar15];
              iVar11 = iVar11 + 1;
              lVar16 = lVar16 + 1;
            } while (iVar11 < lVar12);
          }
          param_1[1] = param_1[1] + (int)lVar12;
          return param_1;
        }
        lVar12 = 0;
        puVar9 = (undefined1 *)(uVar5 * 0x48 + 0x3e + (&DAT_1800dc1d0)[local_68]);
        do {
          local_48[lVar12 + -0x10] = *puVar9;
          lVar12 = lVar12 + 1;
          puVar9 = puVar9 + 1;
        } while (lVar12 < lVar15);
        if (0 < (longlong)uVar13) {
          FUN_18000d6a0((undefined8 *)(local_48 + lVar15 + -0x10),(undefined8 *)param_3,uVar13);
        }
        lVar12 = 0;
        do {
          *(undefined1 *)(lVar12 + uVar5 * 0x48 + 0x3e + (&DAT_1800dc1d0)[lVar14]) = 0;
          lVar12 = lVar12 + 1;
        } while (lVar12 < lVar15);
        local_88[0] = 0;
        local_88[1] = 0;
        local_80 = &local_58;
        uVar3 = (cVar1 + 1 == 4) + 1;
        lVar15 = FUN_180009d60(local_c4,&local_80,(ulonglong)uVar3,local_88,(longlong)local_b0);
        if (lVar15 == -1) {
          return param_1;
        }
        pbVar10 = param_3 + (int)(local_a8[0] - 1);
      }
    }
    else {
      lVar15 = (&DAT_1800dc1d0)[lVar14];
      bVar2 = *(byte *)(lVar15 + 0x3d + uVar5 * 0x48);
      if ((bVar2 & 4) == 0) {
        if (*(short *)(*(longlong *)local_b0[3] + (ulonglong)*param_3 * 2) < 0) {
          pbVar10 = param_3 + 1;
          if (local_b8 <= pbVar10) {
            *(byte *)(lVar15 + 0x3e + uVar5 * 0x48) = *param_3;
            pbVar10 = (byte *)((&DAT_1800dc1d0)[lVar14] + 0x3d + uVar5 * 0x48);
            *pbVar10 = *pbVar10 | 4;
            param_1[1] = DVar8 + 1;
            return param_1;
          }
          iVar7 = FUN_1800099a8(local_c4,param_3,2,local_b0);
          if (iVar7 == -1) {
            return param_1;
          }
          goto LAB_18000bc78;
        }
        uVar13 = 1;
        pbVar10 = param_3;
      }
      else {
        local_50 = *(byte *)(lVar15 + 0x3e + uVar5 * 0x48);
        local_4f = *param_3;
        *(byte *)(lVar15 + 0x3d + uVar5 * 0x48) = bVar2 & 0xfb;
        uVar13 = 2;
        pbVar10 = &local_50;
      }
      iVar7 = FUN_1800099a8(local_c4,pbVar10,uVar13,local_b0);
      pbVar10 = param_3;
      if (iVar7 == -1) {
        return param_1;
      }
    }
LAB_18000bc78:
    param_3 = pbVar10 + 1;
    uVar3 = FUN_180008498(local_a0,0,local_c4,uVar3);
    hFile = local_70;
    if (uVar3 == 0) {
      return param_1;
    }
    local_c0[0] = 0;
    BVar4 = WriteFile(local_70,local_48,uVar3,local_c0,(LPOVERLAPPED)0x0);
    if (BVar4 == 0) {
LAB_18000bdd1:
      DVar8 = GetLastError();
      *param_1 = DVar8;
      return param_1;
    }
    DVar8 = (param_1[2] - (int)local_98) + (int)param_3;
    param_1[1] = DVar8;
    if (local_c0[0] < uVar3) {
      return param_1;
    }
    if ((char)local_c8[0] == '\n') {
      local_c8[0] = 0xd;
      BVar4 = WriteFile(hFile,local_c8,1,local_c0,(LPOVERLAPPED)0x0);
      if (BVar4 == 0) goto LAB_18000bdd1;
      if (local_c0[0] == 0) {
        return param_1;
      }
      param_1[2] = param_1[2] + 1;
      param_1[1] = param_1[1] + 1;
      DVar8 = param_1[1];
    }
    if (local_b8 <= param_3) {
      return param_1;
    }
  } while( true );
}



/* ===== 18000be04 FUN_18000be04 ===== */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

DWORD * FUN_18000be04(DWORD *param_1,uint param_2,char *param_3,ulonglong param_4)

{
  char cVar1;
  HANDLE hFile;
  BOOL BVar2;
  DWORD DVar3;
  uint nNumberOfBytesToWrite;
  char *pcVar4;
  char *pcVar5;
  undefined1 auStackY_1468 [32];
  DWORD local_1438 [4];
  char local_1428 [5120];
  ulonglong local_28;
  undefined8 local_20;
  
  local_20 = 0x18000be1c;
  local_28 = DAT_180019040 ^ (ulonglong)auStackY_1468;
  pcVar5 = param_3 + (param_4 & 0xffffffff);
  hFile = *(HANDLE *)
           ((&DAT_1800dc1d0)[(longlong)(int)param_2 >> 6] + 0x28 +
           (ulonglong)(param_2 & 0x3f) * 0x48);
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  do {
    if (pcVar5 <= param_3) {
      return param_1;
    }
    pcVar4 = local_1428;
    do {
      if (pcVar5 <= param_3) break;
      cVar1 = *param_3;
      param_3 = param_3 + 1;
      if (cVar1 == '\n') {
        param_1[2] = param_1[2] + 1;
        *pcVar4 = '\r';
        pcVar4 = pcVar4 + 1;
      }
      *pcVar4 = cVar1;
      pcVar4 = pcVar4 + 1;
    } while (pcVar4 < local_1428 + 0x13ff);
    local_1438[0] = 0;
    nNumberOfBytesToWrite = (int)pcVar4 - (int)local_1428;
    BVar2 = WriteFile(hFile,local_1428,nNumberOfBytesToWrite,local_1438,(LPOVERLAPPED)0x0);
    if (BVar2 == 0) {
      DVar3 = GetLastError();
      *param_1 = DVar3;
      return param_1;
    }
    param_1[1] = param_1[1] + local_1438[0];
    if (local_1438[0] < nNumberOfBytesToWrite) {
      return param_1;
    }
  } while( true );
}



/* ===== 18000bf0c FUN_18000bf0c ===== */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

DWORD * FUN_18000bf0c(DWORD *param_1,uint param_2,short *param_3,ulonglong param_4)

{
  short sVar1;
  HANDLE hFile;
  uint nNumberOfBytesToWrite;
  BOOL BVar2;
  DWORD DVar3;
  short *psVar4;
  short *psVar5;
  undefined1 auStackY_1468 [32];
  DWORD local_1438 [4];
  short local_1428 [2560];
  ulonglong local_28;
  undefined8 local_20;
  
  local_20 = 0x18000bf24;
  local_28 = DAT_180019040 ^ (ulonglong)auStackY_1468;
  psVar5 = (short *)((param_4 & 0xffffffff) + (longlong)param_3);
  hFile = *(HANDLE *)
           ((&DAT_1800dc1d0)[(longlong)(int)param_2 >> 6] + 0x28 +
           (ulonglong)(param_2 & 0x3f) * 0x48);
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  do {
    if (psVar5 <= param_3) {
      return param_1;
    }
    psVar4 = local_1428;
    do {
      if (psVar5 <= param_3) break;
      sVar1 = *param_3;
      param_3 = param_3 + 1;
      if (sVar1 == 10) {
        param_1[2] = param_1[2] + 2;
        *psVar4 = 0xd;
        psVar4 = psVar4 + 1;
      }
      *psVar4 = sVar1;
      psVar4 = psVar4 + 1;
    } while (psVar4 < local_1428 + 0x9ff);
    local_1438[0] = 0;
    nNumberOfBytesToWrite = (int)((longlong)psVar4 - (longlong)local_1428 >> 1) * 2;
    BVar2 = WriteFile(hFile,local_1428,nNumberOfBytesToWrite,local_1438,(LPOVERLAPPED)0x0);
    if (BVar2 == 0) {
      DVar3 = GetLastError();
      *param_1 = DVar3;
      return param_1;
    }
    param_1[1] = param_1[1] + local_1438[0];
    if (local_1438[0] < nNumberOfBytesToWrite) {
      return param_1;
    }
  } while( true );
}



/* ===== 18000c028 FUN_18000c028 ===== */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

DWORD * FUN_18000c028(DWORD *param_1,uint param_2,short *param_3,uint param_4)

{
  short sVar1;
  HANDLE hFile;
  uint uVar2;
  BOOL BVar3;
  DWORD DVar4;
  uint uVar5;
  ulonglong uVar6;
  short *psVar7;
  short *psVar8;
  undefined1 auStackY_1498 [32];
  DWORD local_1458 [4];
  short local_1448 [856];
  undefined1 local_d98 [3424];
  ulonglong local_38;
  undefined8 local_30;
  
  local_30 = 0x18000c044;
  local_38 = DAT_180019040 ^ (ulonglong)auStackY_1498;
  hFile = *(HANDLE *)
           ((&DAT_1800dc1d0)[(longlong)(int)param_2 >> 6] + 0x28 +
           (ulonglong)(param_2 & 0x3f) * 0x48);
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  psVar7 = param_3;
  do {
    if ((short *)((ulonglong)param_4 + (longlong)param_3) <= psVar7) {
      return param_1;
    }
    psVar8 = local_1448;
    do {
      if ((short *)((ulonglong)param_4 + (longlong)param_3) <= psVar7) break;
      sVar1 = *psVar7;
      psVar7 = psVar7 + 1;
      if (sVar1 == 10) {
        *psVar8 = 0xd;
        psVar8 = psVar8 + 1;
      }
      *psVar8 = sVar1;
      psVar8 = psVar8 + 1;
    } while (psVar8 < local_1448 + 0x354);
    uVar2 = FUN_180008498(0xfde9,0,local_1448,(int)((longlong)psVar8 - (longlong)local_1448 >> 1));
    if (uVar2 == 0) {
LAB_18000c165:
      DVar4 = GetLastError();
      *param_1 = DVar4;
      return param_1;
    }
    uVar6 = 0;
    if (uVar2 != 0) {
      do {
        local_1458[0] = 0;
        BVar3 = WriteFile(hFile,local_d98 + uVar6,uVar2 - (int)uVar6,local_1458,(LPOVERLAPPED)0x0);
        if (BVar3 == 0) goto LAB_18000c165;
        uVar5 = (int)uVar6 + local_1458[0];
        uVar6 = (ulonglong)uVar5;
      } while (uVar5 < uVar2);
    }
    param_1[1] = (int)psVar7 - (int)param_3;
  } while( true );
}



/* ===== 18000c19c FUN_18000c19c ===== */


int FUN_18000c19c(uint param_1,byte *param_2,uint param_3,longlong *param_4)

{
  bool bVar1;
  int iVar2;
  
  if (param_1 == 0xfffffffe) {
    *(undefined1 *)(param_4 + 7) = 1;
    *(undefined4 *)((longlong)param_4 + 0x34) = 0;
    *(undefined1 *)(param_4 + 6) = 1;
    *(undefined4 *)((longlong)param_4 + 0x2c) = 9;
  }
  else {
    if (((int)param_1 < 0) || (DAT_1800dc5d0 <= param_1)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      if ((*(byte *)((&DAT_1800dc1d0)[(longlong)(int)param_1 >> 6] + 0x38 +
                    (ulonglong)(param_1 & 0x3f) * 0x48) & 1) != 0) {
        FUN_18000b6cc(param_1);
        iVar2 = -1;
        if ((*(byte *)((&DAT_1800dc1d0)[(longlong)(int)param_1 >> 6] + 0x38 +
                      (ulonglong)(param_1 & 0x3f) * 0x48) & 1) == 0) {
          *(undefined1 *)(param_4 + 6) = 1;
          *(undefined4 *)((longlong)param_4 + 0x2c) = 9;
          *(undefined1 *)(param_4 + 7) = 1;
          *(undefined4 *)((longlong)param_4 + 0x34) = 0;
        }
        else {
          iVar2 = FUN_18000c2bc(param_1,param_2,param_3,param_4);
        }
        FUN_18000b6f4(param_1);
        return iVar2;
      }
    }
    *(undefined1 *)(param_4 + 7) = 1;
    *(undefined4 *)((longlong)param_4 + 0x34) = 0;
    *(undefined1 *)(param_4 + 6) = 1;
    *(undefined4 *)((longlong)param_4 + 0x2c) = 9;
    FUN_18000674c((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_4);
  }
  return -1;
}



/* ===== 18000c2bc FUN_18000c2bc ===== */


int FUN_18000c2bc(uint param_1,byte *param_2,uint param_3,longlong *param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  byte bVar4;
  short sVar5;
  short sVar6;
  BOOL BVar7;
  DWORD DVar8;
  int iVar9;
  ulonglong uVar10;
  undefined7 extraout_var;
  DWORD *pDVar11;
  DWORD DVar12;
  longlong lVar13;
  ulonglong uVar14;
  byte *pbVar15;
  undefined8 local_70;
  DWORD local_68;
  undefined8 local_60;
  DWORD local_50 [4];
  
  DVar12 = 0;
  uVar14 = (ulonglong)param_3;
  if (param_3 == 0) {
    return 0;
  }
  if (param_2 == (byte *)0x0) {
LAB_18000c2ec:
    *(undefined1 *)(param_4 + 7) = 1;
    *(undefined4 *)((longlong)param_4 + 0x34) = 0;
    *(undefined1 *)(param_4 + 6) = 1;
    *(undefined4 *)((longlong)param_4 + 0x2c) = 0x16;
    FUN_18000674c((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_4);
    return -1;
  }
  uVar10 = (ulonglong)(param_1 & 0x3f);
  lVar13 = (longlong)(int)param_1 >> 6;
  cVar1 = *(char *)((&DAT_1800dc1d0)[lVar13] + 0x39 + uVar10 * 0x48);
  if (((byte)(cVar1 - 1U) < 2) && ((~param_3 & 1) == 0)) goto LAB_18000c2ec;
  if ((*(byte *)((&DAT_1800dc1d0)[lVar13] + 0x38 + uVar10 * 0x48) & 0x20) != 0) {
    thunk_FUN_18000cac0(param_1,(LARGE_INTEGER)0x0,2,(longlong)param_4);
  }
  local_60 = 0;
  bVar4 = FUN_18000c6e4(param_1);
  if (((int)CONCAT71(extraout_var,bVar4) == 0) ||
     (-1 < *(char *)((&DAT_1800dc1d0)[lVar13] + 0x38 + uVar10 * 0x48))) {
LAB_18000c4a4:
    if (-1 < *(char *)((&DAT_1800dc1d0)[lVar13] + 0x38 + (ulonglong)(param_1 & 0x3f) * 0x48)) {
      local_70 = 0;
      local_68 = 0;
      BVar7 = WriteFile(*(HANDLE *)
                         ((&DAT_1800dc1d0)[lVar13] + 0x28 + (ulonglong)(param_1 & 0x3f) * 0x48),
                        param_2,param_3,(LPDWORD)((longlong)&local_70 + 4),(LPOVERLAPPED)0x0);
      DVar12 = local_68;
      uVar3 = local_70;
      if (BVar7 == 0) {
        DVar12 = GetLastError();
        local_70 = CONCAT44(local_70._4_4_,DVar12);
        DVar12 = local_68;
        uVar3 = local_70;
      }
      goto LAB_18000c559;
    }
    if (cVar1 == '\0') {
      pDVar11 = FUN_18000be04((DWORD *)&local_70,param_1,(char *)param_2,uVar14);
    }
    else if (cVar1 == '\x01') {
      pDVar11 = FUN_18000c028((DWORD *)&local_70,param_1,(short *)param_2,param_3);
    }
    else {
      uVar3 = local_60;
      if (cVar1 != '\x02') goto LAB_18000c559;
      pDVar11 = FUN_18000bf0c((DWORD *)&local_70,param_1,(short *)param_2,uVar14);
    }
  }
  else {
    if ((char)param_4[5] == '\0') {
      FUN_180005ca0(param_4);
    }
    if ((*(longlong *)(param_4[3] + 0x138) == 0) &&
       (*(char *)((&DAT_1800dc1d0)[lVar13] + 0x39 + uVar10 * 0x48) == '\0')) goto LAB_18000c4a4;
    local_50[0] = 0;
    BVar7 = GetConsoleMode(*(HANDLE *)((&DAT_1800dc1d0)[lVar13] + 0x28 + uVar10 * 0x48),local_50);
    if (BVar7 == 0) goto LAB_18000c4a4;
    if (cVar1 != '\0') {
      if ((cVar1 == '\x01') || (uVar3 = local_60, cVar1 == '\x02')) {
        local_70 = 0;
        uVar3 = local_70;
        if (param_2 < param_2 + uVar14) {
          local_70._4_4_ = 0;
          pbVar15 = param_2;
          iVar9 = local_70._4_4_;
          do {
            sVar6 = *(short *)pbVar15;
            sVar5 = FUN_18000cb78(sVar6);
            if (sVar5 != sVar6) {
LAB_18000c46c:
              DVar8 = GetLastError();
              local_70 = CONCAT44(local_70._4_4_,DVar8);
              uVar3 = local_70;
              break;
            }
            local_70 = CONCAT44(iVar9 + 2,(DWORD)local_70);
            iVar2 = iVar9 + 2;
            if (sVar6 == 10) {
              sVar6 = FUN_18000cb78(0xd);
              if (sVar6 != 0xd) goto LAB_18000c46c;
              local_70 = CONCAT44(iVar9 + 3,(DWORD)local_70);
              DVar12 = DVar12 + 1;
              iVar2 = iVar9 + 3;
            }
            iVar9 = iVar2;
            pbVar15 = pbVar15 + 2;
            uVar3 = local_70;
          } while (pbVar15 < param_2 + uVar14);
        }
      }
      goto LAB_18000c559;
    }
    pDVar11 = FUN_18000b970((DWORD *)&local_70,param_1,param_2,uVar14,param_4);
  }
  DVar12 = pDVar11[2];
  uVar3 = *(undefined8 *)pDVar11;
LAB_18000c559:
  local_60 = uVar3;
  iVar9 = (int)((ulonglong)local_60 >> 0x20);
  if (iVar9 != 0) {
    return iVar9 - DVar12;
  }
  if ((uint)local_60 != 0) {
    if ((uint)local_60 == 5) {
      *(undefined1 *)(param_4 + 6) = 1;
      *(undefined4 *)((longlong)param_4 + 0x2c) = 9;
      *(undefined1 *)(param_4 + 7) = 1;
      *(undefined4 *)((longlong)param_4 + 0x34) = 5;
      return -1;
    }
    FUN_180006964((uint)local_60,(longlong)param_4);
    return -1;
  }
  if (((*(byte *)((&DAT_1800dc1d0)[lVar13] + 0x38 + (ulonglong)(param_1 & 0x3f) * 0x48) & 0x40) == 0
      ) || (*param_2 != 0x1a)) {
    *(undefined4 *)((longlong)param_4 + 0x34) = 0;
    *(undefined1 *)(param_4 + 6) = 1;
    *(undefined4 *)((longlong)param_4 + 0x2c) = 0x1c;
    *(undefined1 *)(param_4 + 7) = 1;
    return -1;
  }
  return 0;
}



/* ===== 18000c5ec FUN_18000c5ec ===== */


int FUN_18000c5ec(void)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  int local_18;
  
  local_18 = 0;
  __acrt_lock(8);
  for (iVar3 = 3; iVar3 != (int)DAT_1800dc610; iVar3 = iVar3 + 1) {
    lVar4 = (longlong)iVar3;
    lVar1 = *(longlong *)(DAT_1800dc618 + lVar4 * 8);
    if (lVar1 != 0) {
      if (((*(uint *)(lVar1 + 0x14) >> 0xd & 1) != 0) &&
         (uVar2 = FUN_18000ccdc(*(int **)(DAT_1800dc618 + lVar4 * 8)), (int)uVar2 != -1)) {
        local_18 = local_18 + 1;
      }
      DeleteCriticalSection((LPCRITICAL_SECTION)(*(longlong *)(DAT_1800dc618 + lVar4 * 8) + 0x30));
      FUN_180006a50(*(LPVOID *)(DAT_1800dc618 + lVar4 * 8));
      *(undefined8 *)(DAT_1800dc618 + lVar4 * 8) = 0;
    }
  }
  __acrt_unlock(8);
  return local_18;
}



/* ===== 18000c6a0 __acrt_stdio_free_buffer_nolock ===== */


/* Library Function - Single Match
    __acrt_stdio_free_buffer_nolock
   
   Library: Visual Studio 2019 Release */

void __acrt_stdio_free_buffer_nolock(undefined8 *param_1)

{
  if (((*(uint *)((longlong)param_1 + 0x14) >> 0xd & 1) != 0) &&
     ((*(uint *)((longlong)param_1 + 0x14) >> 6 & 1) != 0)) {
    FUN_180006a50((LPVOID)param_1[1]);
    LOCK();
    *(uint *)((longlong)param_1 + 0x14) = *(uint *)((longlong)param_1 + 0x14) & 0xfffffebf;
    UNLOCK();
    param_1[1] = 0;
    *param_1 = 0;
    *(undefined4 *)(param_1 + 2) = 0;
  }
  return;
}



/* ===== 18000c6e4 FUN_18000c6e4 ===== */


byte FUN_18000c6e4(uint param_1)

{
  __acrt_ptd *p_Var1;
  
  if (param_1 == 0xfffffffe) {
    p_Var1 = FUN_1800069ac();
    *(undefined4 *)p_Var1 = 9;
  }
  else {
    if ((-1 < (int)param_1) && (param_1 < DAT_1800dc5d0)) {
      return *(byte *)((&DAT_1800dc1d0)[(ulonglong)(longlong)(int)param_1 >> 6] + 0x38 +
                      (ulonglong)(param_1 & 0x3f) * 0x48) & 0x40;
    }
    p_Var1 = FUN_1800069ac();
    *(undefined4 *)p_Var1 = 9;
    FUN_180006804();
  }
  return 0;
}



/* ===== 18000c744 FUN_18000c744 ===== */


undefined8 FUN_18000c744(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  return param_1;
}



/* ===== 18000c74c FUN_18000c74c ===== */


undefined8 FUN_18000c74c(undefined8 *param_1,longlong param_2)

{
  *param_1 = 0;
  *(undefined1 *)(param_2 + 0x30) = 1;
  *(undefined4 *)(param_2 + 0x2c) = 0x2a;
  return 0xffffffffffffffff;
}



/* ===== 18000c760 __acrt_locale_free_monetary ===== */


/* Library Function - Single Match
    __acrt_locale_free_monetary
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_locale_free_monetary(longlong param_1)

{
  if (param_1 != 0) {
    if (*(undefined **)(param_1 + 0x18) != PTR_DAT_1800198b8) {
      FUN_180006a50(*(undefined **)(param_1 + 0x18));
    }
    if (*(undefined **)(param_1 + 0x20) != PTR_DAT_1800198c0) {
      FUN_180006a50(*(undefined **)(param_1 + 0x20));
    }
    if (*(undefined **)(param_1 + 0x28) != PTR_DAT_1800198c8) {
      FUN_180006a50(*(undefined **)(param_1 + 0x28));
    }
    if (*(undefined **)(param_1 + 0x30) != PTR_DAT_1800198d0) {
      FUN_180006a50(*(undefined **)(param_1 + 0x30));
    }
    if (*(undefined **)(param_1 + 0x38) != PTR_DAT_1800198d8) {
      FUN_180006a50(*(undefined **)(param_1 + 0x38));
    }
    if (*(undefined **)(param_1 + 0x40) != PTR_DAT_1800198e0) {
      FUN_180006a50(*(undefined **)(param_1 + 0x40));
    }
    if (*(undefined **)(param_1 + 0x48) != PTR_DAT_1800198e8) {
      FUN_180006a50(*(undefined **)(param_1 + 0x48));
    }
    if (*(undefined **)(param_1 + 0x68) != PTR_DAT_180019908) {
      FUN_180006a50(*(undefined **)(param_1 + 0x68));
    }
    if (*(undefined **)(param_1 + 0x70) != PTR_DAT_180019910) {
      FUN_180006a50(*(undefined **)(param_1 + 0x70));
    }
    if (*(undefined **)(param_1 + 0x78) != PTR_DAT_180019918) {
      FUN_180006a50(*(undefined **)(param_1 + 0x78));
    }
    if (*(undefined **)(param_1 + 0x80) != PTR_DAT_180019920) {
      FUN_180006a50(*(undefined **)(param_1 + 0x80));
    }
    if (*(undefined **)(param_1 + 0x88) != PTR_DAT_180019928) {
      FUN_180006a50(*(undefined **)(param_1 + 0x88));
    }
    if (*(undefined **)(param_1 + 0x90) != PTR_DAT_180019930) {
      FUN_180006a50(*(undefined **)(param_1 + 0x90));
    }
  }
  return;
}



/* ===== 18000c86c __acrt_locale_free_numeric ===== */


/* Library Function - Single Match
    __acrt_locale_free_numeric
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_locale_free_numeric(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    if ((undefined *)*param_1 != PTR_DAT_1800198a0) {
      FUN_180006a50((undefined *)*param_1);
    }
    if ((undefined *)param_1[1] != PTR_DAT_1800198a8) {
      FUN_180006a50((undefined *)param_1[1]);
    }
    if ((undefined *)param_1[2] != PTR_DAT_1800198b0) {
      FUN_180006a50((undefined *)param_1[2]);
    }
    if ((undefined *)param_1[0xb] != PTR_DAT_1800198f8) {
      FUN_180006a50((undefined *)param_1[0xb]);
    }
    if ((undefined *)param_1[0xc] != PTR_DAT_180019900) {
      FUN_180006a50((undefined *)param_1[0xc]);
    }
  }
  return;
}



/* ===== 18000c8d8 FUN_18000c8d8 ===== */


void FUN_18000c8d8(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + param_2;
  for (; param_1 != puVar1; param_1 = param_1 + 1) {
    FUN_180006a50((LPVOID)*param_1);
  }
  return;
}



/* ===== 18000c90c __acrt_locale_free_time ===== */


/* Library Function - Single Match
    __acrt_locale_free_time
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_locale_free_time(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_18000c8d8(param_1,7);
    FUN_18000c8d8(param_1 + 7,7);
    FUN_18000c8d8(param_1 + 0xe,0xc);
    FUN_18000c8d8(param_1 + 0x1a,0xc);
    FUN_18000c8d8(param_1 + 0x26,2);
    FUN_180006a50((LPVOID)param_1[0x28]);
    FUN_180006a50((LPVOID)param_1[0x29]);
    FUN_180006a50((LPVOID)param_1[0x2a]);
    FUN_18000c8d8(param_1 + 0x2c,7);
    FUN_18000c8d8(param_1 + 0x33,7);
    FUN_18000c8d8(param_1 + 0x3a,0xc);
    FUN_18000c8d8(param_1 + 0x46,0xc);
    FUN_18000c8d8(param_1 + 0x52,2);
    FUN_180006a50((LPVOID)param_1[0x54]);
    FUN_180006a50((LPVOID)param_1[0x55]);
    FUN_180006a50((LPVOID)param_1[0x56]);
    FUN_180006a50((LPVOID)param_1[0x57]);
  }
  return;
}



/* ===== 18000ca14 FUN_18000ca14 ===== */


void FUN_18000ca14(void)

{
  (*(code *)PTR__guard_check_icall_18000f248)();
  return;
}



/* ===== 18000ca30 __strncnt ===== */


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



/* ===== 18000ca50 FUN_18000ca50 ===== */


int FUN_18000ca50(ushort *param_1,ushort *param_2,longlong param_3)

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



/* ===== 18000cab8 FUN_18000cab8 ===== */


undefined4 FUN_18000cab8(void)

{
  return DAT_1800dc650;
}



/* ===== 18000cac0 FUN_18000cac0 ===== */


longlong FUN_18000cac0(uint param_1,LARGE_INTEGER param_2,DWORD param_3,longlong param_4)

{
  byte *pbVar1;
  BOOL BVar2;
  DWORD DVar3;
  HANDLE hFile;
  LARGE_INTEGER local_18 [2];
  
  hFile = (HANDLE)FUN_18000b7d8(param_1);
  if (hFile == (HANDLE)0xffffffffffffffff) {
    *(undefined1 *)(param_4 + 0x30) = 1;
    *(undefined4 *)(param_4 + 0x2c) = 9;
  }
  else {
    local_18[0].QuadPart = 0;
    BVar2 = SetFilePointerEx(hFile,param_2,local_18,param_3);
    if (BVar2 == 0) {
      DVar3 = GetLastError();
      FUN_180006964(DVar3,param_4);
    }
    else if (local_18[0].QuadPart != -1) {
      pbVar1 = (byte *)((&DAT_1800dc1d0)[(longlong)(int)param_1 >> 6] + 0x38 +
                       (ulonglong)(param_1 & 0x3f) * 0x48);
      *pbVar1 = *pbVar1 & 0xfd;
      return local_18[0].QuadPart;
    }
  }
  return -1;
}



/* ===== 18000cb70 thunk_FUN_18000cac0 ===== */


longlong thunk_FUN_18000cac0(uint param_1,LARGE_INTEGER param_2,DWORD param_3,longlong param_4)

{
  byte *pbVar1;
  BOOL BVar2;
  DWORD DVar3;
  HANDLE hFile;
  LARGE_INTEGER aLStack_18 [2];
  
  hFile = (HANDLE)FUN_18000b7d8(param_1);
  if (hFile == (HANDLE)0xffffffffffffffff) {
    *(undefined1 *)(param_4 + 0x30) = 1;
    *(undefined4 *)(param_4 + 0x2c) = 9;
  }
  else {
    aLStack_18[0].QuadPart = 0;
    BVar2 = SetFilePointerEx(hFile,param_2,aLStack_18,param_3);
    if (BVar2 == 0) {
      DVar3 = GetLastError();
      FUN_180006964(DVar3,param_4);
    }
    else if (aLStack_18[0].QuadPart != -1) {
      pbVar1 = (byte *)((&DAT_1800dc1d0)[(longlong)(int)param_1 >> 6] + 0x38 +
                       (ulonglong)(param_1 & 0x3f) * 0x48);
      *pbVar1 = *pbVar1 & 0xfd;
      return aLStack_18[0].QuadPart;
    }
  }
  return -1;
}



/* ===== 18000cb78 FUN_18000cb78 ===== */


undefined2 FUN_18000cb78(undefined2 param_1)

{
  bool bVar1;
  BOOL BVar2;
  undefined7 extraout_var;
  undefined2 local_res8 [4];
  DWORD local_res10 [6];
  
  local_res8[0] = param_1;
  bVar1 = __dcrt_lowio_ensure_console_output_initialized();
  if ((int)CONCAT71(extraout_var,bVar1) != 0) {
    local_res10[0] = 0;
    BVar2 = __dcrt_write_console(local_res8,1,local_res10);
    if (BVar2 != 0) {
      return local_res8[0];
    }
  }
  return 0xffff;
}



/* ===== 18000cbb8 FUN_18000cbb8 ===== */


ulonglong FUN_18000cbb8(int *param_1,longlong *param_2)

{
  ulonglong uVar1;
  
  if (param_1 == (int *)0x0) {
    *(undefined1 *)(param_2 + 6) = 1;
    *(undefined4 *)((longlong)param_2 + 0x2c) = 0x16;
    FUN_18000674c((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_2);
  }
  else {
    if (((uint)param_1[5] >> 0xc & 1) == 0) {
      FUN_18000984c((longlong)param_1);
      uVar1 = FUN_18000cc34(param_1,param_2);
      FUN_180009858((longlong)param_1);
      return uVar1 & 0xffffffff;
    }
    FUN_18000d0bc((undefined8 *)param_1);
  }
  return 0xffffffff;
}



/* ===== 18000cc34 FUN_18000cc34 ===== */


ulonglong FUN_18000cc34(int *param_1,longlong *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  if (param_1 == (int *)0x0) {
    *(undefined1 *)(param_2 + 6) = 1;
    *(undefined4 *)((longlong)param_2 + 0x2c) = 0x16;
    FUN_18000674c((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_2);
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 0xffffffff;
    if (((uint)param_1[5] >> 0xd & 1) != 0) {
      uVar2 = FUN_180009568(param_1,param_2);
      uVar2 = uVar2 & 0xffffffff;
      __acrt_stdio_free_buffer_nolock((undefined8 *)param_1);
      uVar1 = FUN_180009f18((longlong)param_1);
      uVar3 = FUN_18000cf28(uVar1,param_2);
      if ((int)uVar3 < 0) {
        uVar2 = 0xffffffff;
      }
      else if (*(LPVOID *)(param_1 + 10) != (LPVOID)0x0) {
        FUN_180006a50(*(LPVOID *)(param_1 + 10));
        param_1[10] = 0;
        param_1[0xb] = 0;
      }
    }
    FUN_18000d0bc((undefined8 *)param_1);
  }
  return uVar2;
}



/* ===== 18000ccdc FUN_18000ccdc ===== */


ulonglong FUN_18000ccdc(int *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong local_48 [2];
  undefined1 local_38;
  undefined *local_30;
  undefined *puStack_28;
  char local_20;
  undefined4 local_1c;
  char local_18;
  undefined4 local_14;
  char local_10;
  
  local_48[0] = 0;
  local_20 = DAT_1800dc640 == 0;
  local_38 = 0;
  local_18 = '\0';
  local_10 = '\0';
  if ((bool)local_20) {
    local_30 = PTR_PTR_180019778;
    puStack_28 = PTR_DAT_180019780;
  }
  uVar1 = FUN_18000cbb8(param_1,local_48);
  if (local_20 == '\x02') {
    *(uint *)(local_48[0] + 0x3a8) = *(uint *)(local_48[0] + 0x3a8) & 0xfffffffd;
  }
  if (local_18 != '\0') {
    lVar2 = FUN_180005c30(local_48);
    *(undefined4 *)(lVar2 + 0x20) = local_1c;
  }
  if (local_10 != '\0') {
    lVar2 = FUN_180005c30(local_48);
    *(undefined4 *)(lVar2 + 0x24) = local_14;
  }
  return uVar1 & 0xffffffff;
}



/* ===== 18000cd80 __dcrt_lowio_ensure_console_output_initialized ===== */


/* Library Function - Single Match
    __dcrt_lowio_ensure_console_output_initialized
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

bool __dcrt_lowio_ensure_console_output_initialized(void)

{
  if (DAT_180019a40 == (HANDLE)0xfffffffffffffffe) {
    DAT_180019a40 = CreateFileW(L"CONOUT$",0x40000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
  }
  return DAT_180019a40 != (HANDLE)0xffffffffffffffff;
}



/* ===== 18000cdd4 FUN_18000cdd4 ===== */


void FUN_18000cdd4(void)

{
  if (DAT_180019a40 < (HANDLE)0xfffffffffffffffe) {
    CloseHandle(DAT_180019a40);
  }
  return;
}



/* ===== 18000cdf0 __dcrt_write_console ===== */


/* Library Function - Single Match
    __dcrt_write_console
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

BOOL __dcrt_write_console(void *param_1,DWORD param_2,LPDWORD param_3)

{
  BOOL BVar1;
  DWORD DVar2;
  
  BVar1 = WriteConsoleW(DAT_180019a40,param_1,param_2,param_3,(LPVOID)0x0);
  if (BVar1 == 0) {
    DVar2 = GetLastError();
    if (DVar2 == 6) {
      if (DAT_180019a40 < (HANDLE)0xfffffffffffffffe) {
        CloseHandle(DAT_180019a40);
      }
      DAT_180019a40 =
           CreateFileW(L"CONOUT$",0x40000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
      BVar1 = WriteConsoleW(DAT_180019a40,param_1,param_2,param_3,(LPVOID)0x0);
    }
  }
  return BVar1;
}



/* ===== 18000ceb0 FUN_18000ceb0 ===== */


ulonglong FUN_18000ceb0(undefined8 param_1,uint *param_2,undefined8 *param_3,uint *param_4)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  FUN_18000b6cc(*param_2);
  uVar1 = *(uint *)*param_3;
  lVar2 = param_3[1];
  if ((*(byte *)((&DAT_1800dc1d0)[(longlong)(int)uVar1 >> 6] + 0x38 +
                (ulonglong)(uVar1 & 0x3f) * 0x48) & 1) == 0) {
    *(undefined1 *)(lVar2 + 0x30) = 1;
    *(undefined4 *)(lVar2 + 0x2c) = 9;
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = FUN_18000cfec(uVar1,lVar2);
    uVar3 = uVar3 & 0xffffffff;
  }
  FUN_18000b6f4(*param_4);
  return uVar3;
}



/* ===== 18000cf28 FUN_18000cf28 ===== */


ulonglong FUN_18000cf28(uint param_1,longlong *param_2)

{
  ulonglong uVar1;
  uint local_res8 [4];
  undefined1 local_res18 [8];
  uint local_res20 [2];
  uint local_28 [2];
  uint *local_20;
  longlong *local_18;
  
  if (param_1 == 0xfffffffe) {
    *(undefined1 *)(param_2 + 7) = 1;
    *(undefined4 *)((longlong)param_2 + 0x34) = 0;
    *(undefined1 *)(param_2 + 6) = 1;
    *(undefined4 *)((longlong)param_2 + 0x2c) = 9;
  }
  else {
    local_res8[0] = param_1;
    if (((-1 < (int)param_1) && (param_1 < DAT_1800dc5d0)) &&
       ((*(byte *)((&DAT_1800dc1d0)[(longlong)(int)param_1 >> 6] + 0x38 +
                  (ulonglong)(param_1 & 0x3f) * 0x48) & 1) != 0)) {
      local_20 = local_res8;
      local_res20[0] = param_1;
      local_28[0] = param_1;
      local_18 = param_2;
      uVar1 = FUN_18000ceb0(local_res18,local_28,&local_20,local_res20);
      return uVar1;
    }
    *(undefined1 *)(param_2 + 7) = 1;
    *(undefined4 *)((longlong)param_2 + 0x34) = 0;
    *(undefined1 *)(param_2 + 6) = 1;
    *(undefined4 *)((longlong)param_2 + 0x2c) = 9;
    FUN_18000674c((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_2);
  }
  return 0xffffffff;
}



/* ===== 18000cfec FUN_18000cfec ===== */


undefined8 FUN_18000cfec(uint param_1,longlong param_2)

{
  BOOL BVar1;
  DWORD DVar2;
  longlong lVar3;
  longlong lVar4;
  HANDLE hObject;
  undefined8 uVar5;
  
  lVar3 = FUN_18000b7d8(param_1);
  if (lVar3 != -1) {
    if (((param_1 == 1) && ((*(byte *)(DAT_1800dc1d0 + 200) & 1) != 0)) ||
       ((param_1 == 2 && ((*(byte *)(DAT_1800dc1d0 + 0x80) & 1) != 0)))) {
      lVar3 = FUN_18000b7d8(2);
      lVar4 = FUN_18000b7d8(1);
      if (lVar4 == lVar3) goto LAB_18000d00e;
    }
    hObject = (HANDLE)FUN_18000b7d8(param_1);
    BVar1 = CloseHandle(hObject);
    if (BVar1 == 0) {
      DVar2 = GetLastError();
      goto LAB_18000d06c;
    }
  }
LAB_18000d00e:
  DVar2 = 0;
LAB_18000d06c:
  FUN_18000b71c(param_1);
  *(undefined1 *)
   ((&DAT_1800dc1d0)[(longlong)(int)param_1 >> 6] + 0x38 + (ulonglong)(param_1 & 0x3f) * 0x48) = 0;
  if (DVar2 == 0) {
    uVar5 = 0;
  }
  else {
    FUN_180006964(DVar2,param_2);
    uVar5 = 0xffffffff;
  }
  return uVar5;
}



/* ===== 18000d0bc FUN_18000d0bc ===== */


undefined4 FUN_18000d0bc(undefined8 *param_1)

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



/* ===== 18000d0e0 FUN_18000d0e0 ===== */


/* WARNING: Removing unreachable block (ram,0x00018000d160) */
/* WARNING: Removing unreachable block (ram,0x00018000d152) */
/* WARNING: Removing unreachable block (ram,0x00018000d0f7) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_18000d0e0(void)

{
  longlong lVar1;
  int *piVar2;
  undefined8 uVar3;
  byte in_XCR0;
  
  _DAT_1800dc654 = 0;
  DAT_1800dc658 = 0;
  lVar1 = cpuid_Version_info(1);
  if ((*(uint *)(lVar1 + 0xc) & 0x18001000) == 0x18001000) {
    uVar3 = xinuse(0);
    if ((in_XCR0 & (byte)uVar3 & 6) == 6) {
      _DAT_1800dc654 = 1;
      DAT_1800dc658 = 1;
    }
    else {
      _DAT_1800dc654 = 0;
    }
  }
  if ((_DAT_1800dc654 != 0) && (piVar2 = (int *)cpuid_basic_info(0), 6 < *piVar2)) {
    lVar1 = cpuid_Extended_Feature_Enumeration_info(7);
    if ((*(uint *)(lVar1 + 4) & 0x20) != 0) {
      DAT_1800dc658 = 3;
      _DAT_1800dc654 = 3;
      return 0;
    }
  }
  return 0;
}



/* ===== 18000d1a0 FUN_18000d1a0 ===== */


longlong FUN_18000d1a0(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  
  uVar3 = 0;
  lVar2 = *(int *)(param_1 + 0x3c) + param_1;
  lVar1 = (ulonglong)*(ushort *)(lVar2 + 0x14) + 0x18 + lVar2;
  if (*(ushort *)(lVar2 + 6) != 0) {
    do {
      if ((*(uint *)(lVar1 + 0xc) <= param_2) &&
         (param_2 < *(int *)(lVar1 + 8) + *(uint *)(lVar1 + 0xc))) {
        return lVar1;
      }
      uVar3 = uVar3 + 1;
      lVar1 = lVar1 + 0x28;
    } while (uVar3 < *(ushort *)(lVar2 + 6));
  }
  return 0;
}



/* ===== 18000d1f0 FUN_18000d1f0 ===== */


ulonglong FUN_18000d1f0(longlong param_1)

{
  bool bVar1;
  undefined7 extraout_var;
  ulonglong uVar2;
  longlong lVar3;
  
  bVar1 = FUN_18000d240((short *)&IMAGE_DOS_HEADER_180000000);
  uVar2 = CONCAT71(extraout_var,bVar1);
  if ((int)uVar2 != 0) {
    lVar3 = FUN_18000d1a0(0x180000000,param_1 - 0x180000000);
    uVar2 = 0;
    if (lVar3 != 0) {
      uVar2 = (ulonglong)(~*(uint *)(lVar3 + 0x24) >> 0x1f);
    }
  }
  return uVar2;
}



/* ===== 18000d240 FUN_18000d240 ===== */


bool FUN_18000d240(short *param_1)

{
  if ((*param_1 == 0x5a4d) &&
     (*(int *)((longlong)*(int *)(param_1 + 0x1e) + (longlong)param_1) == 0x4550)) {
    return (short)((int *)((longlong)*(int *)(param_1 + 0x1e) + (longlong)param_1))[6] == 0x20b;
  }
  return false;
}



/* ===== 18000d270 FUN_18000d270 ===== */


undefined8 * FUN_18000d270(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = type_info::vftable;
  if ((param_2 & 1) != 0) {
    thunk_FUN_180006a50(param_1);
  }
  return param_1;
}



/* ===== 18000d2a0 FUN_18000d2a0 ===== */


undefined8 FUN_18000d2a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  FUN_18000d2c0(param_2,param_4,*(undefined8 *)(param_4 + 0x38));
  return 1;
}



/* ===== 18000d2c0 FUN_18000d2c0 ===== */

/* DECOMPILATION FAILED: Low-level Error: Flow exceeded maximum allowable instructions */

/* ===== 18000d4b0 __security_check_cookie ===== */


/* WARNING: This is an inlined function */

void __cdecl __security_check_cookie(uintptr_t _StackCookie)

{
  if ((_StackCookie == DAT_180019040) && ((short)(_StackCookie >> 0x30) == 0)) {
    return;
  }
  FUN_1800017f0();
  return;
}



/* ===== 18000d4d0 thunk_FUN_180006a50 ===== */


void thunk_FUN_180006a50(LPVOID param_1)

{
  BOOL BVar1;
  DWORD DVar2;
  uint uVar3;
  __acrt_ptd *p_Var4;
  
  if ((param_1 != (LPVOID)0x0) && (BVar1 = HeapFree(DAT_1800dc1c8,0,param_1), BVar1 == 0)) {
    DVar2 = GetLastError();
    uVar3 = FUN_18000686c(DVar2);
    p_Var4 = FUN_1800069ac();
    *(uint *)p_Var4 = uVar3;
  }
  return;
}



/* ===== 18000d4e0 FUN_18000d4e0 ===== */


undefined8 FUN_18000d4e0(int *param_1,longlong param_2,ULONG_PTR param_3,ulonglong *param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  
  uVar1 = param_4[7];
  FUN_18000d2c0(param_2,param_4,uVar1 + 4);
  if ((*(uint *)(uVar1 + 4) & ((*(byte *)(param_1 + 1) & 0x66) != 0) + 1) == 0) {
    return 1;
  }
  uVar2 = FUN_180003330(param_1,param_2,param_3,param_4);
  return uVar2;
}



/* ===== 18000d560 __chkstk ===== */


/* WARNING: This is an inlined function */
/* Library Function - Single Match
    __chkstk
   
   Libraries: Visual Studio 2005, Visual Studio 2008, Visual Studio 2010, Visual Studio 2012 */

void __chkstk(void)

{
  undefined1 *in_RAX;
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = local_res8 + -(longlong)in_RAX;
  if (local_res8 < in_RAX) {
    puVar1 = (undefined1 *)0x0;
  }
  if (puVar1 < StackLimit) {
    puVar2 = StackLimit;
    do {
      puVar2 = puVar2 + -0x1000;
      *puVar2 = 0;
    } while ((undefined1 *)((ulonglong)puVar1 & 0xfffffffffffff000) != puVar2);
  }
  return;
}



/* ===== 18000d5b0 thunk_FUN_180006a50 ===== */


void thunk_FUN_180006a50(LPVOID param_1)

{
  BOOL BVar1;
  DWORD DVar2;
  uint uVar3;
  __acrt_ptd *p_Var4;
  
  if ((param_1 != (LPVOID)0x0) && (BVar1 = HeapFree(DAT_1800dc1c8,0,param_1), BVar1 == 0)) {
    DVar2 = GetLastError();
    uVar3 = FUN_18000686c(DVar2);
    p_Var4 = FUN_1800069ac();
    *(uint *)p_Var4 = uVar3;
  }
  return;
}



/* ===== 18000d5c0 FUN_18000d5c0 ===== */


void FUN_18000d5c0(PEXCEPTION_RECORD param_1,PVOID param_2,longlong param_3,longlong *param_4)

{
  undefined8 uVar1;
  PVOID pvVar2;
  
  uVar1 = FUN_1800023c0(param_1,param_2,param_3,param_4);
  if ((((param_1->ExceptionFlags & 0x66) == 0) && (param_1->ExceptionCode == 0xe06d7363)) &&
     ((int)uVar1 == 1)) {
    pvVar2 = FUN_180002980();
    *(PEXCEPTION_RECORD *)((longlong)pvVar2 + 0x20) = param_1;
    pvVar2 = FUN_180002980();
    *(longlong *)((longlong)pvVar2 + 0x28) = param_3;
                    /* WARNING: Subroutine does not return */
    FUN_180005b0c();
  }
  return;
}



/* ===== 18000d620 _guard_dispatch_icall ===== */


/* WARNING: This is an inlined function */

void _guard_dispatch_icall(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x00018000d620. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* ===== 18000d640 _guard_dispatch_icall ===== */


/* WARNING: This is an inlined function */

void _guard_dispatch_icall(void)

{
  (*(code *)PTR__guard_dispatch_icall_18000f258)();
  return;
}



/* ===== 18000d660 _guard_dispatch_icall ===== */


/* WARNING: This is an inlined function */

void _guard_dispatch_icall(void)

{
  (*(code *)PTR__guard_dispatch_icall_18000f258)();
  return;
}



/* ===== 18000d690 FUN_18000d690 ===== */


void FUN_18000d690(undefined1 *param_1,undefined1 *param_2,longlong param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *param_1 = *param_2;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}



/* ===== 18000d6a0 FUN_18000d6a0 ===== */


void FUN_18000d6a0(undefined8 *param_1,undefined8 *param_2,ulonglong param_3)

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
  undefined1 (*pauVar26) [32];
  undefined1 (*pauVar27) [32];
  undefined8 *puVar28;
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
    puVar25 = (undefined8 *)((longlong)param_2 + (param_3 - 0x10));
    uVar11 = *puVar25;
    uVar12 = puVar25[1];
    *param_1 = *param_2;
    param_1[1] = uVar10;
    puVar25 = (undefined8 *)((longlong)param_1 + (param_3 - 0x10));
    *puVar25 = uVar11;
    puVar25[1] = uVar12;
    return;
  }
  puVar25 = (undefined8 *)((longlong)param_2 + param_3);
  if (param_1 <= param_2) {
    puVar25 = param_1;
  }
  if (param_1 < puVar25) {
    uVar10 = *param_2;
    uVar11 = param_2[1];
    lVar30 = (longlong)param_2 - (longlong)param_1;
    puVar25 = (undefined8 *)((longlong)param_1 + lVar30 + (param_3 - 0x10));
    uVar12 = *puVar25;
    uVar13 = puVar25[1];
    puVar28 = (undefined8 *)((longlong)param_1 + (param_3 - 0x10));
    uVar29 = param_3 - 0x10;
    puVar25 = puVar28;
    uVar32 = uVar12;
    uVar33 = uVar13;
    if (((ulonglong)puVar28 & 0xf) != 0) {
      puVar25 = (undefined8 *)((ulonglong)puVar28 & 0xfffffffffffffff0);
      uVar32 = *(undefined8 *)((longlong)puVar25 + lVar30);
      uVar33 = ((undefined8 *)((longlong)puVar25 + lVar30))[1];
      *puVar28 = uVar12;
      *(undefined8 *)((longlong)param_1 + (param_3 - 8)) = uVar13;
      uVar29 = (longlong)puVar25 - (longlong)param_1;
    }
    uVar31 = uVar29 >> 7;
    if (uVar31 != 0) {
      *puVar25 = uVar32;
      puVar25[1] = uVar33;
      puVar28 = puVar25;
      while( true ) {
        puVar1 = (undefined8 *)((longlong)puVar28 + lVar30 + -0x10);
        uVar12 = puVar1[1];
        puVar25 = (undefined8 *)((longlong)puVar28 + lVar30 + -0x20);
        uVar13 = *puVar25;
        uVar32 = puVar25[1];
        puVar25 = puVar28 + -0x10;
        puVar28[-2] = *puVar1;
        puVar28[-1] = uVar12;
        puVar28[-4] = uVar13;
        puVar28[-3] = uVar32;
        puVar1 = (undefined8 *)((longlong)puVar28 + lVar30 + -0x30);
        uVar12 = puVar1[1];
        puVar2 = (undefined8 *)((longlong)puVar28 + lVar30 + -0x40);
        uVar13 = *puVar2;
        uVar32 = puVar2[1];
        uVar31 = uVar31 - 1;
        puVar28[-6] = *puVar1;
        puVar28[-5] = uVar12;
        puVar28[-8] = uVar13;
        puVar28[-7] = uVar32;
        puVar1 = (undefined8 *)((longlong)puVar28 + lVar30 + -0x50);
        uVar12 = puVar1[1];
        puVar2 = (undefined8 *)((longlong)puVar28 + lVar30 + -0x60);
        uVar13 = *puVar2;
        uVar32 = puVar2[1];
        puVar28[-10] = *puVar1;
        puVar28[-9] = uVar12;
        puVar28[-0xc] = uVar13;
        puVar28[-0xb] = uVar32;
        puVar1 = (undefined8 *)((longlong)puVar28 + lVar30 + -0x70);
        uVar12 = *puVar1;
        uVar13 = puVar1[1];
        uVar32 = *(undefined8 *)((longlong)puVar25 + lVar30);
        uVar33 = ((undefined8 *)((longlong)puVar25 + lVar30))[1];
        if (uVar31 == 0) break;
        puVar28[-0xe] = uVar12;
        puVar28[-0xd] = uVar13;
        *puVar25 = uVar32;
        puVar28[-0xf] = uVar33;
        puVar28 = puVar25;
      }
      puVar28[-0xe] = uVar12;
      puVar28[-0xd] = uVar13;
      uVar29 = uVar29 & 0x7f;
    }
    for (uVar31 = uVar29 >> 4; uVar31 != 0; uVar31 = uVar31 - 1) {
      *puVar25 = uVar32;
      puVar25[1] = uVar33;
      puVar25 = puVar25 + -2;
      uVar32 = *(undefined8 *)((longlong)puVar25 + lVar30);
      uVar33 = ((undefined8 *)((longlong)puVar25 + lVar30))[1];
    }
    if ((uVar29 & 0xf) != 0) {
      *param_1 = uVar10;
      param_1[1] = uVar11;
    }
    *puVar25 = uVar32;
    puVar25[1] = uVar33;
    return;
  }
  if (DAT_180019088 < 3) {
    if ((param_3 < 0x801) || (((byte)DAT_1800dbc0c & 2) == 0)) {
      if (0x80 < param_3) {
        lVar30 = ((ulonglong)param_1 & 0xf) - 0x10;
        puVar25 = (undefined8 *)((longlong)param_1 - lVar30);
        puVar28 = (undefined8 *)((longlong)param_2 - lVar30);
        param_3 = param_3 + lVar30;
        if (0x80 < param_3) {
          do {
            uVar10 = puVar28[1];
            uVar11 = puVar28[2];
            uVar12 = puVar28[3];
            uVar13 = puVar28[4];
            uVar32 = puVar28[5];
            uVar33 = puVar28[6];
            uVar14 = puVar28[7];
            *puVar25 = *puVar28;
            puVar25[1] = uVar10;
            puVar25[2] = uVar11;
            puVar25[3] = uVar12;
            puVar25[4] = uVar13;
            puVar25[5] = uVar32;
            puVar25[6] = uVar33;
            puVar25[7] = uVar14;
            uVar10 = puVar28[9];
            uVar11 = puVar28[10];
            uVar12 = puVar28[0xb];
            uVar13 = puVar28[0xc];
            uVar32 = puVar28[0xd];
            uVar33 = puVar28[0xe];
            uVar14 = puVar28[0xf];
            puVar25[8] = puVar28[8];
            puVar25[9] = uVar10;
            puVar25[10] = uVar11;
            puVar25[0xb] = uVar12;
            puVar25[0xc] = uVar13;
            puVar25[0xd] = uVar32;
            puVar25[0xe] = uVar33;
            puVar25[0xf] = uVar14;
            puVar25 = puVar25 + 0x10;
            puVar28 = puVar28 + 0x10;
            param_3 = param_3 - 0x80;
          } while (0x7f < param_3);
        }
      }
                    /* WARNING: Could not recover jumptable at 0x00018000dbc6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulonglong)*(uint *)(&DAT_180016af8 + (param_3 + 0xf >> 4) * 4) + 0x180000000))();
      return;
    }
FUN_18000d690:
    for (; param_3 != 0; param_3 = param_3 - 1) {
      *(undefined1 *)param_1 = *(undefined1 *)param_2;
      param_2 = (undefined8 *)((longlong)param_2 + 1);
      param_1 = (undefined8 *)((longlong)param_1 + 1);
    }
    return;
  }
  if ((0x2000 < param_3) && (param_3 < 0x180001)) {
    puVar25 = param_1 + 8;
    if (param_2 < param_1) {
      puVar25 = param_2;
    }
    if ((puVar25 <= param_2) && (((byte)DAT_1800dbc0c & 2) != 0)) goto FUN_18000d690;
  }
  uVar10 = *param_2;
  uVar11 = param_2[1];
  uVar12 = param_2[2];
  uVar13 = param_2[3];
  puVar25 = (undefined8 *)((longlong)param_2 + (param_3 - 0x20));
  uVar32 = *puVar25;
  uVar33 = puVar25[1];
  uVar14 = puVar25[2];
  uVar15 = puVar25[3];
  if (0x100 < param_3) {
    lVar30 = ((ulonglong)param_1 & 0x1f) - 0x20;
    pauVar23 = (undefined1 (*) [32])((longlong)param_1 - lVar30);
    pauVar26 = (undefined1 (*) [32])((longlong)param_2 - lVar30);
    param_3 = param_3 + lVar30;
    if (0x100 < param_3) {
      if (0x180000 < param_3) {
        do {
          uVar29 = param_3;
          pauVar27 = pauVar26;
          pauVar24 = pauVar23;
          auVar3 = pauVar27[1];
          auVar4 = pauVar27[2];
          auVar5 = pauVar27[3];
          auVar6 = vmovntdq_avx(*pauVar27);
          *pauVar24 = auVar6;
          auVar3 = vmovntdq_avx(auVar3);
          pauVar24[1] = auVar3;
          auVar3 = vmovntdq_avx(auVar4);
          pauVar24[2] = auVar3;
          auVar3 = vmovntdq_avx(auVar5);
          pauVar24[3] = auVar3;
          auVar3 = pauVar27[5];
          auVar4 = pauVar27[6];
          auVar5 = pauVar27[7];
          auVar6 = vmovntdq_avx(pauVar27[4]);
          pauVar24[4] = auVar6;
          auVar3 = vmovntdq_avx(auVar3);
          pauVar24[5] = auVar3;
          auVar3 = vmovntdq_avx(auVar4);
          pauVar24[6] = auVar3;
          auVar3 = vmovntdq_avx(auVar5);
          pauVar24[7] = auVar3;
          pauVar23 = pauVar24 + 8;
          pauVar26 = pauVar27 + 8;
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
          auVar3 = vmovntdq_avx(*(undefined1 (*) [32])(*pauVar27 + uVar31));
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
          auVar3 = vmovntdq_avx(*(undefined1 (*) [32])(pauVar27[1] + uVar31));
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
          auVar3 = vmovntdq_avx(*(undefined1 (*) [32])(pauVar27[2] + uVar31));
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
          auVar3 = vmovntdq_avx(*(undefined1 (*) [32])(pauVar27[3] + uVar31));
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
          auVar3 = vmovntdq_avx(*(undefined1 (*) [32])(pauVar27[4] + uVar31));
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
          auVar3 = vmovntdq_avx(*(undefined1 (*) [32])(pauVar27[5] + uVar31));
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
          auVar3 = vmovntdq_avx(*(undefined1 (*) [32])(pauVar27[6] + uVar31));
          *(undefined1 (*) [32])(pauVar24[6] + uVar31) = auVar3;
        default:
          puVar25 = (undefined8 *)(pauVar24[-1] + uVar29);
          *puVar25 = uVar32;
          puVar25[1] = uVar33;
          puVar25[2] = uVar14;
          puVar25[3] = uVar15;
        case 0x100:
          *param_1 = uVar10;
          param_1[1] = uVar11;
          param_1[2] = uVar12;
          param_1[3] = uVar13;
          return;
        }
      }
      do {
        uVar10 = *(undefined8 *)(*pauVar26 + 8);
        uVar11 = *(undefined8 *)(*pauVar26 + 0x10);
        uVar12 = *(undefined8 *)(*pauVar26 + 0x18);
        uVar13 = *(undefined8 *)pauVar26[1];
        uVar32 = *(undefined8 *)(pauVar26[1] + 8);
        uVar33 = *(undefined8 *)(pauVar26[1] + 0x10);
        uVar14 = *(undefined8 *)(pauVar26[1] + 0x18);
        uVar15 = *(undefined8 *)pauVar26[2];
        uVar16 = *(undefined8 *)(pauVar26[2] + 8);
        uVar17 = *(undefined8 *)(pauVar26[2] + 0x10);
        uVar18 = *(undefined8 *)(pauVar26[2] + 0x18);
        uVar19 = *(undefined8 *)pauVar26[3];
        uVar20 = *(undefined8 *)(pauVar26[3] + 8);
        uVar21 = *(undefined8 *)(pauVar26[3] + 0x10);
        uVar22 = *(undefined8 *)(pauVar26[3] + 0x18);
        *(undefined8 *)*pauVar23 = *(undefined8 *)*pauVar26;
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
        uVar10 = *(undefined8 *)(pauVar26[4] + 8);
        uVar11 = *(undefined8 *)(pauVar26[4] + 0x10);
        uVar12 = *(undefined8 *)(pauVar26[4] + 0x18);
        uVar13 = *(undefined8 *)pauVar26[5];
        uVar32 = *(undefined8 *)(pauVar26[5] + 8);
        uVar33 = *(undefined8 *)(pauVar26[5] + 0x10);
        uVar14 = *(undefined8 *)(pauVar26[5] + 0x18);
        uVar15 = *(undefined8 *)pauVar26[6];
        uVar16 = *(undefined8 *)(pauVar26[6] + 8);
        uVar17 = *(undefined8 *)(pauVar26[6] + 0x10);
        uVar18 = *(undefined8 *)(pauVar26[6] + 0x18);
        uVar19 = *(undefined8 *)pauVar26[7];
        uVar20 = *(undefined8 *)(pauVar26[7] + 8);
        uVar21 = *(undefined8 *)(pauVar26[7] + 0x10);
        uVar22 = *(undefined8 *)(pauVar26[7] + 0x18);
        *(undefined8 *)pauVar23[4] = *(undefined8 *)pauVar26[4];
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
        pauVar26 = pauVar26 + 8;
        param_3 = param_3 - 0x100;
      } while (0xff < param_3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00018000d922. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((ulonglong)*(uint *)(&DAT_180016ab0 + (param_3 + 0x1f >> 5) * 4) + 0x180000000))();
  return;
}



/* ===== 18000dd30 strncmp ===== */


/* Library Function - Single Match
    strncmp
   
   Libraries: Visual Studio 2012, Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

int __cdecl strncmp(char *_Str1,char *_Str2,size_t _MaxCount)

{
  byte bVar1;
  ulonglong uVar2;
  longlong lVar3;
  bool bVar4;
  
  lVar3 = (longlong)_Str2 - (longlong)_Str1;
  if (_MaxCount != 0) {
    do {
      if (((ulonglong)_Str1 & 7) == 0) {
        while ((((int)lVar3 + (int)_Str1 & 0xfffU) < 0xff9 &&
               (uVar2 = *(ulonglong *)_Str1, uVar2 == *(ulonglong *)(lVar3 + (longlong)_Str1)))) {
          _Str1 = (char *)((longlong)_Str1 + 8);
          bVar4 = _MaxCount < 8;
          _MaxCount = _MaxCount - 8;
          if (bVar4 || _MaxCount == 0) {
            return 0;
          }
          if ((~uVar2 & uVar2 + 0xfefefefefefefeff & 0x8080808080808080) != 0) {
            return 0;
          }
        }
      }
      bVar1 = (byte)*(ulonglong *)_Str1;
      if (bVar1 != *(byte *)(lVar3 + (longlong)_Str1)) {
        return -(uint)(bVar1 < *(byte *)(lVar3 + (longlong)_Str1)) | 1;
      }
      _Str1 = (char *)((longlong)_Str1 + 1);
      _MaxCount = _MaxCount - 1;
    } while ((_MaxCount != 0) && (bVar1 != 0));
  }
  return 0;
}



/* ===== 18000ddd0 FUN_18000ddd0 ===== */


undefined8 FUN_18000ddd0(undefined1 *param_1,undefined1 param_2,longlong param_3,undefined8 param_4)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *param_1 = param_2;
    param_1 = param_1 + 1;
  }
  return param_4;
}



/* ===== 18000dde0 FUN_18000dde0 ===== */


undefined1 (*) [32] FUN_18000dde0(undefined1 (*param_1) [32],byte param_2,ulonglong param_3)

{
  undefined1 auVar1 [32];
  undefined1 (*pauVar2) [32];
  undefined1 (*pauVar3) [32];
  undefined1 (*pauVar4) [16];
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 uVar8;
  undefined2 uVar9;
  undefined4 uVar10;
  longlong lVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [32];
  
  uVar5 = (ulonglong)param_2;
  lVar11 = uVar5 * 0x101010101010101;
  uVar8 = (undefined1)lVar11;
  uVar9 = (undefined2)lVar11;
  uVar10 = (undefined4)lVar11;
  switch(param_3) {
  case 0:
    return param_1;
  case 8:
    *(longlong *)(param_1[-1] + param_3 + 0x18) = lVar11;
    return param_1;
  case 9:
    *(longlong *)(param_1[-1] + param_3 + 0x17) = lVar11;
    param_1[-1][param_3 + 0x1f] = uVar8;
    return param_1;
  case 10:
    *(longlong *)(param_1[-1] + param_3 + 0x16) = lVar11;
    *(undefined2 *)(param_1[-1] + param_3 + 0x1e) = uVar9;
    return param_1;
  case 0xb:
    *(longlong *)(param_1[-1] + param_3 + 0x15) = lVar11;
    *(undefined2 *)(param_1[-1] + param_3 + 0x1d) = uVar9;
    param_1[-1][param_3 + 0x1f] = uVar8;
    return param_1;
  case 0xc:
    *(longlong *)(param_1[-1] + param_3 + 0x14) = lVar11;
  case 4:
    *(undefined4 *)(param_1[-1] + param_3 + 0x1c) = uVar10;
    return param_1;
  case 0xd:
    *(longlong *)(param_1[-1] + param_3 + 0x13) = lVar11;
  case 5:
    *(undefined4 *)(param_1[-1] + param_3 + 0x1b) = uVar10;
    param_1[-1][param_3 + 0x1f] = uVar8;
    return param_1;
  case 0xe:
    *(longlong *)(param_1[-1] + param_3 + 0x12) = lVar11;
  case 6:
    *(undefined4 *)(param_1[-1] + param_3 + 0x1a) = uVar10;
  case 2:
    *(undefined2 *)(param_1[-1] + param_3 + 0x1e) = uVar9;
    return param_1;
  case 0xf:
    *(longlong *)(param_1[-1] + param_3 + 0x11) = lVar11;
  case 7:
    *(undefined4 *)(param_1[-1] + param_3 + 0x19) = uVar10;
  case 3:
    *(undefined2 *)(param_1[-1] + param_3 + 0x1d) = uVar9;
  case 1:
    param_1[-1][param_3 + 0x1f] = uVar8;
    return param_1;
  }
  auVar12._8_8_ = lVar11;
  auVar12._0_8_ = lVar11;
  if (param_3 < 0x21) {
    *(undefined1 (*) [16])*param_1 = auVar12;
    *(undefined1 (*) [16])(param_1[-1] + param_3 + 0x10) = auVar12;
    return param_1;
  }
  if (DAT_180019088 < 3) {
    if ((param_3 <= DAT_180019090) || (((byte)DAT_1800dbc0c & 2) == 0)) {
      lVar11 = ((ulonglong)param_1 & 0xf) - 0x10;
      pauVar4 = (undefined1 (*) [16])((longlong)param_1 - lVar11);
      uVar6 = param_3 + lVar11;
      if (0x80 < uVar6) {
        do {
          *pauVar4 = auVar12;
          pauVar4[1] = auVar12;
          pauVar4[2] = auVar12;
          pauVar4[3] = auVar12;
          pauVar4[4] = auVar12;
          pauVar4[5] = auVar12;
          pauVar4[6] = auVar12;
          pauVar4[7] = auVar12;
          pauVar4 = pauVar4 + 8;
          uVar6 = uVar6 - 0x80;
        } while (0x7f < uVar6);
      }
                    /* WARNING: Could not recover jumptable at 0x00018000e128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pauVar2 = (undefined1 (*) [32])
                (*(code *)((ulonglong)*(uint *)(&DAT_180016ba8 + (uVar6 + 0xf >> 4) * 4) +
                          0x180000000))(pauVar4,uVar5 - lVar11);
      return pauVar2;
    }
  }
  else if (((param_3 <= DAT_180019090) || (DAT_180019098 < param_3)) ||
          (((byte)DAT_1800dbc0c & 2) == 0)) {
    auVar13._16_16_ = auVar12;
    auVar13._0_16_ = auVar12;
    lVar7 = ((ulonglong)param_1 & 0x1f) - 0x20;
    pauVar2 = (undefined1 (*) [32])((longlong)param_1 - lVar7);
    uVar6 = param_3 + lVar7;
    if (0x100 < uVar6) {
      if (DAT_180019098 < uVar6) {
        do {
          uVar5 = uVar6;
          pauVar3 = pauVar2;
          auVar1 = vmovntdq_avx(auVar13);
          *pauVar3 = auVar1;
          auVar1 = vmovntdq_avx(auVar13);
          pauVar3[1] = auVar1;
          auVar1 = vmovntdq_avx(auVar13);
          pauVar3[2] = auVar1;
          auVar1 = vmovntdq_avx(auVar13);
          pauVar3[3] = auVar1;
          auVar1 = vmovntdq_avx(auVar13);
          pauVar3[4] = auVar1;
          auVar1 = vmovntdq_avx(auVar13);
          pauVar3[5] = auVar1;
          auVar1 = vmovntdq_avx(auVar13);
          pauVar3[6] = auVar1;
          auVar1 = vmovntdq_avx(auVar13);
          pauVar3[7] = auVar1;
          pauVar2 = pauVar3 + 8;
          uVar6 = uVar5 - 0x100;
        } while (0xff < uVar5 - 0x100);
        uVar6 = uVar5 - 0xe1 & 0xffffffffffffffe0;
        switch(uVar5) {
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
          auVar1 = vmovntdq_avx(auVar13);
          *(undefined1 (*) [32])(*pauVar3 + uVar6) = auVar1;
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
          auVar1 = vmovntdq_avx(auVar13);
          *(undefined1 (*) [32])(pauVar3[1] + uVar6) = auVar1;
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
          auVar1 = vmovntdq_avx(auVar13);
          *(undefined1 (*) [32])(pauVar3[2] + uVar6) = auVar1;
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
          auVar1 = vmovntdq_avx(auVar13);
          *(undefined1 (*) [32])(pauVar3[3] + uVar6) = auVar1;
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
          auVar1 = vmovntdq_avx(auVar13);
          *(undefined1 (*) [32])(pauVar3[4] + uVar6) = auVar1;
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
          auVar1 = vmovntdq_avx(auVar13);
          *(undefined1 (*) [32])(pauVar3[5] + uVar6) = auVar1;
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
          auVar1 = vmovntdq_avx(auVar13);
          *(undefined1 (*) [32])(pauVar3[6] + uVar6) = auVar1;
        default:
          *(undefined1 (*) [32])(pauVar3[-1] + uVar5) = auVar13;
        case 0x100:
          *param_1 = auVar13;
          return param_1;
        }
      }
      do {
        *pauVar2 = auVar13;
        pauVar2[1] = auVar13;
        pauVar2[2] = auVar13;
        pauVar2[3] = auVar13;
        pauVar2[4] = auVar13;
        pauVar2[5] = auVar13;
        pauVar2[6] = auVar13;
        pauVar2[7] = auVar13;
        pauVar2 = pauVar2 + 8;
        uVar6 = uVar6 - 0x100;
      } while (0xff < uVar6);
    }
                    /* WARNING: Could not recover jumptable at 0x00018000df74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pauVar2 = (undefined1 (*) [32])
              (*(code *)((ulonglong)*(uint *)(&DAT_180016b60 + (uVar6 + 0x1f >> 5) * 4) +
                        0x180000000))(lVar11,uVar5 - lVar7);
    return pauVar2;
  }
  pauVar2 = param_1;
  for (; param_3 != 0; param_3 = param_3 - 1) {
    (*pauVar2)[0] = param_2;
    pauVar2 = (undefined1 (*) [32])(*pauVar2 + 1);
  }
  return param_1;
}



/* ===== 18000e180 FUN_18000e180 ===== */


void FUN_18000e180(undefined8 param_1,longlong param_2)

{
  FUN_180001fc0(*(char *)(param_2 + 0x60));
  return;
}



/* ===== 18000e1a0 FUN_18000e1a0 ===== */


void FUN_18000e1a0(undefined8 param_1,longlong param_2)

{
  FUN_180001fc0(*(char *)(param_2 + 0x20));
  return;
}



/* ===== 18000e1ba FUN_18000e1ba ===== */


void FUN_18000e1ba(void)

{
  FUN_180001ec0();
  return;
}



/* ===== 18000e1d0 FUN_18000e1d0 ===== */


void FUN_18000e1d0(undefined8 *param_1,longlong param_2)

{
  FUN_180001e30(*(undefined8 *)(param_2 + 0x60),*(int *)(param_2 + 0x68),
                *(undefined8 *)(param_2 + 0x70),FUN_180001810,*(int *)*param_1,param_1);
  return;
}



/* ===== 18000e210 FUN_18000e210 ===== */


bool FUN_18000e210(undefined8 *param_1)

{
  return *(int *)*param_1 == -0x3ffffffb;
}



/* ===== 18000e230 FUN_18000e230 ===== */


undefined4 FUN_18000e230(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  PVOID pvVar2;
  
  *(undefined8 *)(param_2 + 0x30) = param_1;
  if ((((*(char *)(param_2 + 0x58) != '\0') &&
       (*(undefined8 *)(param_2 + 0x28) = **(undefined8 **)(param_2 + 0x30),
       **(int **)(param_2 + 0x28) == -0x1f928c9d)) &&
      (*(int *)(*(longlong *)(param_2 + 0x28) + 0x18) == 4)) &&
     (((*(int *)(*(longlong *)(param_2 + 0x28) + 0x20) == 0x19930520 ||
       (*(int *)(*(longlong *)(param_2 + 0x28) + 0x20) == 0x19930521)) ||
      (*(int *)(*(longlong *)(param_2 + 0x28) + 0x20) == 0x19930522)))) {
    pvVar2 = FUN_180002980();
    *(undefined8 *)((longlong)pvVar2 + 0x20) = *(undefined8 *)(param_2 + 0x28);
    uVar1 = *(undefined8 *)(*(longlong *)(param_2 + 0x30) + 8);
    pvVar2 = FUN_180002980();
    *(undefined8 *)((longlong)pvVar2 + 0x28) = uVar1;
                    /* WARNING: Subroutine does not return */
    FUN_180005b0c();
  }
  *(undefined4 *)(param_2 + 0x20) = 0;
  return *(undefined4 *)(param_2 + 0x20);
}



/* ===== 18000e2d0 FUN_18000e2d0 ===== */


undefined4 FUN_18000e2d0(undefined8 param_1,longlong param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  PVOID pvVar4;
  
  *(undefined8 *)(param_2 + 0x48) = param_1;
  pvVar4 = FUN_180002980();
  *(undefined8 *)((longlong)pvVar4 + 0x70) = *(undefined8 *)(param_2 + 0x80);
  puVar1 = *(ulonglong **)(param_2 + 0x98);
  uVar2 = puVar1[1];
  pvVar4 = FUN_180002980();
  *(ulonglong *)((longlong)pvVar4 + 0x60) = uVar2;
  uVar3 = *(undefined8 *)(**(longlong **)(param_2 + 0x48) + 0x38);
  pvVar4 = FUN_180002980();
  *(undefined8 *)((longlong)pvVar4 + 0x68) = uVar3;
  FUN_1800043b0((int *)**(undefined8 **)(param_2 + 0x48),*(longlong **)(param_2 + 0x88),
                *(ULONG_PTR *)(param_2 + 0x90),puVar1,*(uint **)(param_2 + 0xa0),0,0,1);
  pvVar4 = FUN_180002980();
  *(undefined8 *)((longlong)pvVar4 + 0x70) = 0;
  *(undefined4 *)(param_2 + 0x40) = 1;
  *(undefined4 *)(param_2 + 0x44) = 1;
  return *(undefined4 *)(param_2 + 0x44);
}



/* ===== 18000e380 FUN_18000e380 ===== */


void FUN_18000e380(undefined8 *param_1,longlong param_2)

{
  FUN_1800046f0(param_1,*(longlong *)(param_2 + 0xd8),(undefined4 *)(param_2 + 0x20));
  return;
}



/* ===== 18000e3a1 FUN_18000e3a1 ===== */


void FUN_18000e3a1(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  undefined8 uVar2;
  PVOID pvVar3;
  
  FUN_180003250(*(longlong *)(param_2 + 0x30));
  if ((((*(int *)(param_2 + 0x20) == 0) &&
       (piVar1 = *(int **)(param_2 + 0xd8), *piVar1 == -0x1f928c9d)) && (piVar1[6] == 4)) &&
     (((piVar1[8] == 0x19930520 || (piVar1[8] == 0x19930521)) || (piVar1[8] == 0x19930522)))) {
    uVar2 = FUN_180002760(*(longlong *)(piVar1 + 10));
    if ((int)uVar2 != 0) {
      __DestructExceptionObject(piVar1);
    }
  }
  pvVar3 = FUN_180002980();
  *(undefined8 *)((longlong)pvVar3 + 0x20) = *(undefined8 *)(param_2 + 0x70);
  pvVar3 = FUN_180002980();
  *(undefined8 *)((longlong)pvVar3 + 0x28) = *(undefined8 *)(param_2 + 0x78);
  return;
}



/* ===== 18000e430 FUN_18000e430 ===== */


void FUN_18000e430(undefined8 *param_1)

{
  FUN_1800027d0(param_1);
  return;
}



/* ===== 18000e446 FUN_18000e446 ===== */


void FUN_18000e446(void)

{
  PVOID pvVar1;
  
  pvVar1 = FUN_180002980();
  if (0 < *(int *)((longlong)pvVar1 + 0x30)) {
    pvVar1 = FUN_180002980();
    *(int *)((longlong)pvVar1 + 0x30) = *(int *)((longlong)pvVar1 + 0x30) + -1;
  }
  return;
}



/* ===== 18000e469 FUN_18000e469 ===== */


void FUN_18000e469(undefined8 param_1,longlong param_2)

{
  __acrt_unlock(**(int **)(param_2 + 0x48));
  return;
}



/* ===== 18000e483 FUN_18000e483 ===== */


undefined4 FUN_18000e483(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  
  *(undefined8 **)(param_2 + 0x28) = param_1;
  iVar1 = *(int *)*param_1;
  *(int *)(param_2 + 0x24) = iVar1;
  *(uint *)(param_2 + 0x20) = (uint)(iVar1 == -0x1f928c9d);
  return *(undefined4 *)(param_2 + 0x20);
}



/* ===== 18000e4b0 FUN_18000e4b0 ===== */


void FUN_18000e4b0(undefined8 param_1,longlong param_2)

{
  __acrt_unlock(**(int **)(param_2 + 0x68));
  return;
}



/* ===== 18000e4ca FUN_18000e4ca ===== */


void FUN_18000e4ca(void)

{
  __acrt_unlock(5);
  return;
}



/* ===== 18000e4e3 FUN_18000e4e3 ===== */


void FUN_18000e4e3(void)

{
  __acrt_unlock(7);
  return;
}



/* ===== 18000e500 FUN_18000e500 ===== */


void FUN_18000e500(void)

{
  __acrt_unlock(0);
  return;
}



/* ===== 18000e516 FUN_18000e516 ===== */


void FUN_18000e516(void)

{
  __acrt_unlock(0);
  return;
}



/* ===== 18000e52c FUN_18000e52c ===== */


void FUN_18000e52c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x70) != '\0') {
    __acrt_unlock(3);
  }
  return;
}



/* ===== 18000e54d FUN_18000e54d ===== */


void FUN_18000e54d(undefined8 param_1,longlong param_2)

{
  FUN_180009858(**(longlong **)(param_2 + 0x48));
  return;
}



/* ===== 18000e568 FUN_18000e568 ===== */


void FUN_18000e568(undefined8 param_1,longlong param_2)

{
  __acrt_unlock(**(int **)(param_2 + 0x98));
  return;
}



/* ===== 18000e585 FUN_18000e585 ===== */


void FUN_18000e585(undefined8 param_1,longlong param_2)

{
  __acrt_unlock(**(int **)(param_2 + 0x58));
  return;
}



/* ===== 18000e59f FUN_18000e59f ===== */


void FUN_18000e59f(void)

{
  __acrt_unlock(4);
  return;
}



/* ===== 18000e5b8 FUN_18000e5b8 ===== */


void FUN_18000e5b8(undefined8 param_1,longlong param_2)

{
  FUN_18000b6f4(**(uint **)(param_2 + 0x48));
  return;
}



/* ===== 18000e5d2 FUN_18000e5d2 ===== */


void FUN_18000e5d2(undefined8 param_1,longlong param_2)

{
  FUN_18000b6f4(*(uint *)(param_2 + 0x60));
  return;
}



/* ===== 18000e5e9 FUN_18000e5e9 ===== */


void FUN_18000e5e9(void)

{
  __acrt_unlock(8);
  return;
}



/* ===== 18000e602 FUN_18000e602 ===== */


void FUN_18000e602(undefined8 param_1,longlong param_2)

{
  FUN_180009858(*(longlong *)(param_2 + 0x40));
  return;
}



/* ===== 18000e620 FUN_18000e620 ===== */


bool FUN_18000e620(undefined8 *param_1)

{
  return *(int *)*param_1 == -0x3ffffffb;
}


