/* ===== 18053954c FUN_18053954c ===== */

longlong FUN_18053954c(void)

{
  WCHAR WVar1;
  int iVar2;
  LPWCH pWVar3;
  longlong lVar5;
  longlong lVar4;
  WCHAR *pWVar6;
  ulonglong uVar7;
  
  pWVar3 = GetEnvironmentStringsW();
  if (pWVar3 != (LPWCH)0x0) {
    WVar1 = *pWVar3;
    pWVar6 = pWVar3;
    while (WVar1 != L'\0') {
      lVar4 = -1;
      do {
        lVar5 = lVar4;
        lVar4 = lVar5 + 1;
      } while (pWVar6[lVar4] != L'\0');
      pWVar6 = pWVar6 + lVar5 + 2;
      WVar1 = *pWVar6;
    }
    uVar7 = (longlong)pWVar6 + (2 - (longlong)pWVar3) >> 1;
    iVar2 = FUN_18052eef0(0,0,pWVar3,uVar7 & 0xffffffff,0,0,0,0);
    if (iVar2 != 0) {
      lVar4 = _malloc_base((longlong)iVar2);
      if (lVar4 != 0) {
        iVar2 = FUN_18052eef0(0,0,pWVar3,uVar7 & 0xffffffff,lVar4,iVar2,0,0);
        if (iVar2 == 0) {
          FUN_1805277b0(lVar4);
          lVar4 = 0;
        }
        else {
          FUN_1805277b0(0);
        }
        FreeEnvironmentStringsW(pWVar3);
        return lVar4;
      }
      FUN_1805277b0(0);
    }
    FreeEnvironmentStringsW(pWVar3);
  }
  return 0;
}



/* ===== 18053965c FUN_18053965c ===== */

longlong FUN_18053965c(void)

{
  WCHAR WVar1;
  LPWCH pWVar2;
  longlong lVar4;
  longlong lVar3;
  longlong lVar5;
  WCHAR *pWVar6;
  
  pWVar2 = GetEnvironmentStringsW();
  lVar3 = 0;
  if (pWVar2 != (LPWCH)0x0) {
    WVar1 = *pWVar2;
    pWVar6 = pWVar2;
    while (WVar1 != L'\0') {
      lVar3 = -1;
      do {
        lVar4 = lVar3;
        lVar3 = lVar4 + 1;
      } while (pWVar6[lVar3] != L'\0');
      pWVar6 = pWVar6 + lVar4 + 2;
      WVar1 = *pWVar6;
    }
    lVar4 = ((longlong)pWVar6 + (2 - (longlong)pWVar2) >> 1) * 2;
    lVar5 = _malloc_base(lVar4);
    lVar3 = 0;
    if (lVar5 != 0) {
      FUN_180540530(lVar5,pWVar2,lVar4);
      lVar3 = lVar5;
    }
    FUN_1805277b0(0);
    FreeEnvironmentStringsW(pWVar2);
  }
  return lVar3;
}



/* ===== 1805396f8 FUN_1805396f8 ===== */

ulonglong FUN_1805396f8(longlong param_1,int param_2)

{
  ulonglong uVar1;
  short sVar2;
  int iVar3;
  BOOL BVar4;
  undefined4 *puVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  LPCWSTR lpName;
  longlong *plVar9;
  ulonglong uVar10;
  longlong lVar12;
  longlong lVar11;
  
  uVar10 = 0;
  if (param_1 == 0) {
    puVar5 = (undefined4 *)FUN_18051bfb0();
    *puVar5 = 0x16;
    return 0xffffffffffffffff;
  }
  lVar6 = FUN_18053e950(param_1,0x3d);
  if ((lVar6 == 0) || (lVar6 == param_1)) {
    puVar5 = (undefined4 *)FUN_18051bfb0();
    *puVar5 = 0x16;
    FUN_1805277b0(param_1);
    return 0xffffffffffffffff;
  }
  sVar2 = *(short *)(lVar6 + 2);
  if (DAT_180c9f900 == DAT_180c9f908) {
    DAT_180c9f900 = (longlong *)FUN_180539a5c(DAT_180c9f900);
  }
  if (DAT_180c9f900 == (longlong *)0x0) {
    if ((param_2 == 0) || (DAT_180c9f8f8 == 0)) {
      if (sVar2 == 0) goto LAB_18053990c;
      if (DAT_180c9f8f8 == 0) {
        DAT_180c9f8f8 = _calloc_base(1,8);
        FUN_1805277b0(0);
        if (DAT_180c9f8f8 == 0) goto LAB_1805397ac;
        if (DAT_180c9f900 != (longlong *)0x0) goto LAB_180539854;
      }
      DAT_180c9f900 = (longlong *)_calloc_base(1,8);
      FUN_1805277b0(0);
      if (DAT_180c9f900 != (longlong *)0x0) goto LAB_18053984b;
    }
    else {
      lVar7 = FUN_18052471c();
      if (lVar7 == 0) {
        puVar5 = (undefined4 *)FUN_18051bfb0();
        *puVar5 = 0x16;
      }
      else {
        if (DAT_180c9f900 == DAT_180c9f908) {
          DAT_180c9f900 = (longlong *)FUN_180539a5c(DAT_180c9f900);
        }
LAB_18053984b:
        if (DAT_180c9f900 != (longlong *)0x0) goto LAB_180539854;
      }
    }
  }
  else {
LAB_180539854:
    plVar8 = DAT_180c9f900;
    lVar7 = lVar6 - param_1 >> 1;
    lVar6 = *DAT_180c9f900;
    plVar9 = DAT_180c9f900;
    while (lVar6 != 0) {
      iVar3 = FUN_18053d9e0(param_1,lVar6,lVar7);
      if ((iVar3 == 0) &&
         ((*(short *)(*plVar9 + lVar7 * 2) == 0x3d || (*(short *)(*plVar9 + lVar7 * 2) == 0)))) {
        lVar6 = (longlong)plVar9 - (longlong)plVar8 >> 3;
        goto LAB_1805398a0;
      }
      plVar9 = plVar9 + 1;
      lVar6 = *plVar9;
    }
    lVar6 = -((longlong)plVar9 - (longlong)plVar8 >> 3);
LAB_1805398a0:
    if ((-1 < lVar6) && (*plVar8 != 0)) {
      FUN_1805277b0(plVar8[lVar6]);
      if (sVar2 == 0) {
        for (; plVar8[lVar6] != 0; lVar6 = lVar6 + 1) {
          plVar8[lVar6] = plVar8[lVar6 + 1];
        }
        plVar8 = (longlong *)_recalloc_base(plVar8,lVar6,8);
        FUN_1805277b0(0);
        lVar6 = param_1;
        if (plVar8 != (longlong *)0x0) {
          DAT_180c9f900 = plVar8;
        }
      }
      else {
        plVar8[lVar6] = param_1;
LAB_180539967:
        lVar6 = 0;
      }
      if (param_2 == 0) {
LAB_180539a07:
        FUN_1805277b0(lVar6);
        return 0;
      }
      lVar11 = -1;
      do {
        lVar12 = lVar11;
        lVar11 = lVar12 + 1;
      } while (*(short *)(param_1 + lVar11 * 2) != 0);
      lpName = (LPCWSTR)_calloc_base(lVar12 + 3);
      if (lpName == (LPCWSTR)0x0) {
        FUN_1805277b0(0);
      }
      else {
        iVar3 = FUN_180535f30();
        if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        lpName[lVar7] = L'\0';
        BVar4 = SetEnvironmentVariableW
                          (lpName,(LPCWSTR)(-(ulonglong)(sVar2 != 0) &
                                           (ulonglong)(lpName + lVar7 + 1)));
        if (BVar4 != 0) {
          FUN_1805277b0(lpName);
          goto LAB_180539a07;
        }
        puVar5 = (undefined4 *)FUN_18051bfb0();
        *puVar5 = 0x2a;
        FUN_1805277b0(lpName);
        uVar10 = 0xffffffff;
      }
      FUN_1805277b0(lVar6);
      return uVar10;
    }
    if (sVar2 == 0) {
LAB_18053990c:
      uVar10 = 0;
      goto LAB_1805397b0;
    }
    uVar1 = -lVar6 + 2;
    if (((ulonglong)-lVar6 <= uVar1) && (uVar1 < 0x1fffffffffffffff)) {
      plVar8 = (longlong *)_recalloc_base(plVar8,uVar1,8);
      FUN_1805277b0(0);
      if (plVar8 != (longlong *)0x0) {
        plVar8[-lVar6] = param_1;
        plVar8[1 - lVar6] = 0;
        DAT_180c9f900 = plVar8;
        goto LAB_180539967;
      }
    }
  }
LAB_1805397ac:
  uVar10 = 0xffffffffffffffff;
LAB_1805397b0:
  FUN_1805277b0(param_1);
  return uVar10 & 0xffffffff;
}



/* ===== 180539a5c FUN_180539a5c ===== */

longlong FUN_180539a5c(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar7;
  longlong lVar6;
  longlong lVar8;
  
  if (param_1 == (longlong *)0x0) {
    lVar3 = 0;
  }
  else {
    lVar5 = 0;
    lVar3 = *param_1;
    plVar1 = param_1;
    while (lVar3 != 0) {
      lVar5 = lVar5 + 1;
      plVar1 = plVar1 + 1;
      lVar3 = *plVar1;
    }
    lVar3 = _calloc_base(lVar5 + 1,8);
    if (lVar3 == 0) {
LAB_180539b45:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar5 = *param_1;
    if (lVar5 != 0) {
      lVar8 = lVar3 - (longlong)param_1;
      do {
        lVar6 = -1;
        do {
          lVar7 = lVar6;
          lVar6 = lVar7 + 1;
        } while (*(short *)(lVar5 + lVar6 * 2) != 0);
        uVar4 = _calloc_base(lVar7 + 2,2);
        *(undefined8 *)(lVar8 + (longlong)param_1) = uVar4;
        FUN_1805277b0(0);
        if (*(longlong *)(lVar8 + (longlong)param_1) == 0) goto LAB_180539b45;
        iVar2 = FUN_180535f30();
        if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        param_1 = param_1 + 1;
        lVar5 = *param_1;
      } while (lVar5 != 0);
    }
    FUN_1805277b0(0);
  }
  return lVar3;
}



/* ===== 180539b4c thunk_FUN_1805396f8 ===== */

ulonglong thunk_FUN_1805396f8(longlong param_1,int param_2)

{
  ulonglong uVar1;
  short sVar2;
  int iVar3;
  BOOL BVar4;
  undefined4 *puVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  LPCWSTR lpName;
  longlong *plVar9;
  ulonglong uVar10;
  longlong lVar12;
  longlong lVar11;
  
  uVar10 = 0;
  if (param_1 == 0) {
    puVar5 = (undefined4 *)FUN_18051bfb0();
    *puVar5 = 0x16;
    return 0xffffffffffffffff;
  }
  lVar6 = FUN_18053e950(param_1,0x3d);
  if ((lVar6 == 0) || (lVar6 == param_1)) {
    puVar5 = (undefined4 *)FUN_18051bfb0();
    *puVar5 = 0x16;
    FUN_1805277b0(param_1);
    return 0xffffffffffffffff;
  }
  sVar2 = *(short *)(lVar6 + 2);
  if (DAT_180c9f900 == DAT_180c9f908) {
    DAT_180c9f900 = (longlong *)FUN_180539a5c(DAT_180c9f900);
  }
  if (DAT_180c9f900 == (longlong *)0x0) {
    if ((param_2 == 0) || (DAT_180c9f8f8 == 0)) {
      if (sVar2 == 0) goto LAB_18053990c;
      if (DAT_180c9f8f8 == 0) {
        DAT_180c9f8f8 = _calloc_base(1,8);
        FUN_1805277b0(0);
        if (DAT_180c9f8f8 == 0) goto LAB_1805397ac;
        if (DAT_180c9f900 != (longlong *)0x0) goto LAB_180539854;
      }
      DAT_180c9f900 = (longlong *)_calloc_base(1,8);
      FUN_1805277b0(0);
      if (DAT_180c9f900 != (longlong *)0x0) goto LAB_18053984b;
    }
    else {
      lVar7 = FUN_18052471c();
      if (lVar7 == 0) {
        puVar5 = (undefined4 *)FUN_18051bfb0();
        *puVar5 = 0x16;
      }
      else {
        if (DAT_180c9f900 == DAT_180c9f908) {
          DAT_180c9f900 = (longlong *)FUN_180539a5c(DAT_180c9f900);
        }
LAB_18053984b:
        if (DAT_180c9f900 != (longlong *)0x0) goto LAB_180539854;
      }
    }
  }
  else {
LAB_180539854:
    plVar8 = DAT_180c9f900;
    lVar7 = lVar6 - param_1 >> 1;
    lVar6 = *DAT_180c9f900;
    plVar9 = DAT_180c9f900;
    while (lVar6 != 0) {
      iVar3 = FUN_18053d9e0(param_1,lVar6,lVar7);
      if ((iVar3 == 0) &&
         ((*(short *)(*plVar9 + lVar7 * 2) == 0x3d || (*(short *)(*plVar9 + lVar7 * 2) == 0)))) {
        lVar6 = (longlong)plVar9 - (longlong)plVar8 >> 3;
        goto LAB_1805398a0;
      }
      plVar9 = plVar9 + 1;
      lVar6 = *plVar9;
    }
    lVar6 = -((longlong)plVar9 - (longlong)plVar8 >> 3);
LAB_1805398a0:
    if ((-1 < lVar6) && (*plVar8 != 0)) {
      FUN_1805277b0(plVar8[lVar6]);
      if (sVar2 == 0) {
        for (; plVar8[lVar6] != 0; lVar6 = lVar6 + 1) {
          plVar8[lVar6] = plVar8[lVar6 + 1];
        }
        plVar8 = (longlong *)_recalloc_base(plVar8,lVar6,8);
        FUN_1805277b0(0);
        lVar6 = param_1;
        if (plVar8 != (longlong *)0x0) {
          DAT_180c9f900 = plVar8;
        }
      }
      else {
        plVar8[lVar6] = param_1;
LAB_180539967:
        lVar6 = 0;
      }
      if (param_2 == 0) {
LAB_180539a07:
        FUN_1805277b0(lVar6);
        return 0;
      }
      lVar11 = -1;
      do {
        lVar12 = lVar11;
        lVar11 = lVar12 + 1;
      } while (*(short *)(param_1 + lVar11 * 2) != 0);
      lpName = (LPCWSTR)_calloc_base(lVar12 + 3);
      if (lpName == (LPCWSTR)0x0) {
        FUN_1805277b0(0);
      }
      else {
        iVar3 = FUN_180535f30();
        if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        lpName[lVar7] = L'\0';
        BVar4 = SetEnvironmentVariableW
                          (lpName,(LPCWSTR)(-(ulonglong)(sVar2 != 0) &
                                           (ulonglong)(lpName + lVar7 + 1)));
        if (BVar4 != 0) {
          FUN_1805277b0(lpName);
          goto LAB_180539a07;
        }
        puVar5 = (undefined4 *)FUN_18051bfb0();
        *puVar5 = 0x2a;
        FUN_1805277b0(lpName);
        uVar10 = 0xffffffff;
      }
      FUN_1805277b0(lVar6);
      return uVar10;
    }
    if (sVar2 == 0) {
LAB_18053990c:
      uVar10 = 0;
      goto LAB_1805397b0;
    }
    uVar1 = -lVar6 + 2;
    if (((ulonglong)-lVar6 <= uVar1) && (uVar1 < 0x1fffffffffffffff)) {
      plVar8 = (longlong *)_recalloc_base(plVar8,uVar1,8);
      FUN_1805277b0(0);
      if (plVar8 != (longlong *)0x0) {
        plVar8[-lVar6] = param_1;
        plVar8[1 - lVar6] = 0;
        DAT_180c9f900 = plVar8;
        goto LAB_180539967;
      }
    }
  }
LAB_1805397ac:
  uVar10 = 0xffffffffffffffff;
LAB_1805397b0:
  FUN_1805277b0(param_1);
  return uVar10 & 0xffffffff;
}



/* ===== 180539b60 _recalloc_base ===== */

/* Library Function - Single Match
    _recalloc_base
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

longlong _recalloc_base(longlong param_1,ulonglong param_2,ulonglong param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  if ((param_2 == 0) ||
     (uVar3 = 0xffffffffffffffe0 % param_2, param_3 <= 0xffffffffffffffe0 / param_2)) {
    if (param_1 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = _msize_base(param_1,uVar3);
    }
    param_2 = param_2 * param_3;
    lVar2 = _realloc_base(param_1,param_2);
    if ((lVar2 != 0) && (uVar3 < param_2)) {
      FUN_180540170(lVar2 + uVar3,0,param_2 - uVar3);
    }
  }
  else {
    puVar1 = (undefined4 *)FUN_18051bfb0();
    *puVar1 = 0xc;
    lVar2 = 0;
  }
  return lVar2;
}



/* ===== 180539c20 FUN_180539c20 ===== */

bool FUN_180539c20(void)

{
  DAT_180c9ffc8 = GetProcessHeap();
  return DAT_180c9ffc8 != (HANDLE)0x0;
}



/* ===== 180539c78 FUN_180539c78 ===== */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 FUN_180539c78(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  char cVar2;
  undefined8 *puVar3;
  
  if (param_1 != param_2) {
    puVar3 = param_1;
    do {
      if (((code *)*puVar3 != (code *)0x0) && (cVar2 = (*(code *)*puVar3)(), cVar2 == '\0')) break;
      puVar3 = puVar3 + 2;
    } while (puVar3 != param_2);
    if (puVar3 != param_2) {
      if (puVar3 != param_1) {
        puVar3 = puVar3 + -1;
        do {
          if ((puVar3[-1] != 0) && ((code *)*puVar3 != (code *)0x0)) {
            (*(code *)*puVar3)(0);
          }
          puVar1 = puVar3 + -1;
          puVar3 = puVar3 + -2;
        } while (puVar1 != param_1);
      }
      return 0;
    }
  }
  return 1;
}



/* ===== 180539cf8 FUN_180539cf8 ===== */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 FUN_180539cf8(longlong param_1,longlong param_2)

{
  for (; param_1 != param_2; param_2 = param_2 + -0x10) {
    if (*(code **)(param_2 + -8) != (code *)0x0) {
      (**(code **)(param_2 + -8))(0);
    }
  }
  return 1;
}



/* ===== 180539d40 FUN_180539d40 ===== */

undefined8 FUN_180539d40(void)

{
  byte bVar1;
  
  bVar1 = (byte)DAT_180919500 & 0x3f;
  return CONCAT71((int7)(DAT_180919500 >> 8),
                  (DAT_180c9ffd0 ^ DAT_180919500) >> bVar1 != 0 ||
                  (DAT_180c9ffd0 ^ DAT_180919500) << 0x40 - bVar1 != 0);
}



/* ===== 180539d60 FUN_180539d60 ===== */

void FUN_180539d60(undefined8 param_1)

{
  DAT_180c9ffd0 = param_1;
  return;
}



/* ===== 180539d70 FUN_180539d70 ===== */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 FUN_180539d70(undefined8 param_1)

{
  undefined8 uVar1;
  byte bVar2;
  code *pcVar3;
  
  bVar2 = (byte)DAT_180919500 & 0x3f;
  pcVar3 = (code *)((DAT_180c9ffd0 ^ DAT_180919500) >> bVar2 |
                   (DAT_180c9ffd0 ^ DAT_180919500) << 0x40 - bVar2);
  if (pcVar3 == (code *)0x0) {
    return 0;
  }
  uVar1 = (*pcVar3)(param_1);
  return uVar1;
}



/* ===== 180539da0 thunk_FUN_180539db0 ===== */

LPCVOID thunk_FUN_180539db0(LPCVOID param_1,ulonglong param_2)

{
  BOOL BVar1;
  DWORD DVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  SIZE_T SVar5;
  LPVOID pvVar6;
  int aiStackX_8 [2];
  
  if (param_1 == (LPCVOID)0x0) {
    puVar4 = (undefined4 *)FUN_18051bfb0();
    *puVar4 = 0x16;
    FUN_180527740();
  }
  else if (param_2 < 0xffffffffffffffe1) {
    SVar5 = HeapSize(DAT_180c9ffc8,0,param_1);
    if (param_2 == 0) {
      param_2 = 1;
    }
    pvVar6 = HeapReAlloc(DAT_180c9ffc8,0x10,param_1,param_2);
    if (pvVar6 != (LPVOID)0x0) {
      return pvVar6;
    }
    if ((param_2 <= SVar5) && (SVar5 < 0x4001)) {
      aiStackX_8[0] = -1;
      BVar1 = HeapQueryInformation
                        (DAT_180c9ffc8,HeapCompatibilityInformation,aiStackX_8,4,(PSIZE_T)0x0);
      if ((BVar1 == 0) || (aiStackX_8[0] == 2)) {
        return param_1;
      }
    }
    DVar2 = GetLastError();
    uVar3 = FUN_18051be70(DVar2);
    puVar4 = (undefined4 *)FUN_18051bfb0();
    *puVar4 = uVar3;
  }
  else {
    puVar4 = (undefined4 *)FUN_18051bfb0();
    *puVar4 = 0xc;
  }
  return (LPCVOID)0x0;
}



/* ===== 180539db0 FUN_180539db0 ===== */

LPCVOID FUN_180539db0(LPCVOID param_1,ulonglong param_2)

{
  BOOL BVar1;
  DWORD DVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  SIZE_T SVar5;
  LPVOID pvVar6;
  int local_res8 [2];
  
  if (param_1 == (LPCVOID)0x0) {
    puVar4 = (undefined4 *)FUN_18051bfb0();
    *puVar4 = 0x16;
    FUN_180527740();
  }
  else if (param_2 < 0xffffffffffffffe1) {
    SVar5 = HeapSize(DAT_180c9ffc8,0,param_1);
    if (param_2 == 0) {
      param_2 = 1;
    }
    pvVar6 = HeapReAlloc(DAT_180c9ffc8,0x10,param_1,param_2);
    if (pvVar6 != (LPVOID)0x0) {
      return pvVar6;
    }
    if ((param_2 <= SVar5) && (SVar5 < 0x4001)) {
      local_res8[0] = -1;
      BVar1 = HeapQueryInformation
                        (DAT_180c9ffc8,HeapCompatibilityInformation,local_res8,4,(PSIZE_T)0x0);
      if ((BVar1 == 0) || (local_res8[0] == 2)) {
        return param_1;
      }
    }
    DVar2 = GetLastError();
    uVar3 = FUN_18051be70(DVar2);
    puVar4 = (undefined4 *)FUN_18051bfb0();
    *puVar4 = uVar3;
  }
  else {
    puVar4 = (undefined4 *)FUN_18051bfb0();
    *puVar4 = 0xc;
  }
  return (LPCVOID)0x0;
}



/* ===== 180539eb0 FUN_180539eb0 ===== */

bool FUN_180539eb0(ulonglong param_1)

{
  BOOL BVar1;
  bool bVar2;
  int local_res8 [8];
  
  if (param_1 < 0x4001) {
    local_res8[0] = -1;
    BVar1 = HeapQueryInformation
                      (DAT_180c9ffc8,HeapCompatibilityInformation,local_res8,4,(PSIZE_T)0x0);
    bVar2 = false;
    if (BVar1 != 0) {
      bVar2 = local_res8[0] != 2;
    }
  }
  else {
    bVar2 = true;
  }
  return bVar2;
}



/* ===== 180539f00 _msize_base ===== */

/* Library Function - Single Match
    _msize_base
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

SIZE_T _msize_base(LPCVOID param_1)

{
  undefined4 *puVar1;
  SIZE_T SVar2;
  
  if (param_1 == (LPCVOID)0x0) {
    puVar1 = (undefined4 *)FUN_18051bfb0();
    *puVar1 = 0x16;
    FUN_180527740();
    return 0xffffffffffffffff;
  }
                    /* WARNING: Could not recover jumptable at 0x000180539f32. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SVar2 = HeapSize(DAT_180c9ffc8,0,param_1);
  return SVar2;
}



/* ===== 180539f50 FUN_180539f50 ===== */

undefined8 FUN_180539f50(uint *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  if ((param_2 & 0x1f) == 0) {
    *param_1 = 0;
    return 0;
  }
  uVar1 = FUN_18053a120();
  uVar2 = FUN_18053a110(param_2 & 0x1f);
  *param_1 = uVar2 & uVar1;
  return 0;
}



/* ===== 180539fa0 FUN_180539fa0 ===== */

bool FUN_180539fa0(uint *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if ((param_2 & 0x1f) == 0) {
    return false;
  }
  uVar1 = FUN_18053a110(param_2 & 0x1f);
  uVar2 = FUN_18053a110(0x3f);
  uVar4 = *param_1;
  uVar3 = FUN_18053a120();
  uVar1 = uVar3 & ~uVar1 | uVar2 & uVar4 & uVar1;
  FUN_18053a2b0(uVar1);
  uVar1 = uVar1 & 0x1f;
  uVar4 = FUN_18053db80(uVar1);
  return uVar4 != uVar1;
}



/* ===== 18053a020 FUN_18053a020 ===== */

uint FUN_18053a020(uint param_1)

{
  return param_1 & 0x300;
}



/* ===== 18053a030 FUN_18053a030 ===== */

uint FUN_18053a030(void)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = (ushort)MXCSR & 0x8040;
  if (uVar1 == 0x8000) {
    uVar4 = 0xc00;
  }
  else if (uVar1 == 0x40) {
    uVar4 = 0x800;
  }
  else {
    uVar4 = 0;
    if (uVar1 == 0x8040) {
      uVar4 = 0x400;
    }
  }
  uVar2 = MXCSR & 0x6000;
  if (uVar2 == 0) {
    uVar3 = 0;
  }
  else if (uVar2 == 0x2000) {
    uVar3 = 0x100;
  }
  else if (uVar2 == 0x4000) {
    uVar3 = 0x200;
  }
  else {
    uVar3 = 0x300;
    if (uVar2 != 0x6000) {
      uVar3 = 0;
    }
  }
  uVar4 = ((((MXCSR >> 2 & 0x400 | MXCSR & 0x800) >> 2 | MXCSR & 0x400) >> 2 | MXCSR & 0x200) >> 3 |
          MXCSR & 0x180) >> 3 | uVar4 | uVar3;
  return (uVar3 | uVar4 * 4) << 0x16 | uVar4;
}



/* ===== 18053a110 FUN_18053a110 ===== */

uint FUN_18053a110(uint param_1)

{
  return (param_1 & 0x3f) << 0x18 | param_1;
}



/* ===== 18053a120 FUN_18053a120 ===== */

uint FUN_18053a120(void)

{
  uint uVar1;
  
  uVar1 = (((MXCSR & 0x3f) >> 2 & 8 | MXCSR & 0x10) >> 2 | MXCSR & 8) >> 1 |
          ((MXCSR & 2) << 3 | MXCSR & 4) * 2 | (MXCSR & 1) << 4;
  return uVar1 << 0x18 | uVar1;
}



/* ===== 18053a180 FUN_18053a180 ===== */

void FUN_18053a180(uint param_1)

{
  ushort uVar1;
  uint uVar2;
  ushort uVar3;
  uint uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  
  uVar4 = param_1 >> 0x18;
  uVar2 = param_1 >> 0x16 & 0x300;
  param_1 = param_1 & 0xc00;
  uVar6 = 0x400;
  uVar10 = 0x800;
  if (param_1 == 0x400) {
    uVar8 = 0x8040;
  }
  else if (param_1 == 0x800) {
    uVar8 = 0x40;
  }
  else if (param_1 == 0xc00) {
    uVar8 = 0x8000;
  }
  else {
    uVar8 = 0;
  }
  uVar5 = 0x100;
  uVar9 = 0x200;
  if (uVar2 != 0) {
    if (uVar2 == 0x100) {
      uVar7 = 0x2000;
      goto LAB_18053a21f;
    }
    if (uVar2 == 0x200) {
      uVar7 = 0x4000;
      goto LAB_18053a21f;
    }
    if (uVar2 == 0x300) {
      uVar7 = 0x6000;
      goto LAB_18053a21f;
    }
  }
  uVar7 = 0;
LAB_18053a21f:
  if ((uVar4 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0x1000;
  }
  if ((uVar4 & 2) == 0) {
    uVar10 = 0;
  }
  if ((uVar4 & 4) == 0) {
    uVar6 = 0;
  }
  if ((uVar4 & 8) == 0) {
    uVar9 = 0;
  }
  if ((uVar4 & 0x10) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0x80;
  }
  if ((uVar4 & 0x20) == 0) {
    uVar5 = 0;
  }
  MXCSR = MXCSR & 0xffff003f |
          (uint)(ushort)(uVar7 | uVar3 | uVar10 | uVar6 | uVar9 | uVar1 | uVar5 | uVar8);
  return;
}



/* ===== 18053a2b0 FUN_18053a2b0 ===== */

void FUN_18053a2b0(uint param_1)

{
  uint uVar1;
  bool bVar2;
  
  param_1 = param_1 >> 0x18;
  bVar2 = ((param_1 & 0x3f) >> 4 & 1) != 0;
  uVar1 = (uint)bVar2;
  MXCSR = MXCSR & 0xffffffc0 |
          -(uint)((param_1 & 1) != 0) & 0x20 | -(uint)((param_1 & 2) != 0) & 0x10 |
          -(uint)((param_1 & 4) != 0) & 8 | -(uint)((param_1 & 8) != 0) & 4 | uVar1 |
          (uVar1 - bVar2) - (uint)((param_1 & 0x20) != 0) & 2;
  return;
}



/* ===== 18053a330 FUN_18053a330 ===== */

undefined4 FUN_18053a330(void)

{
  return DAT_180c9ffd8;
}



/* ===== 18053a340 FUN_18053a340 ===== */

uint FUN_18053a340(uint param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  if (param_1 < 2) {
    LOCK();
    UNLOCK();
    uVar1 = param_1;
    uVar2 = DAT_180c9ffd8;
  }
  else {
    puVar3 = (undefined4 *)FUN_18051bfb0();
    *puVar3 = 0x16;
    FUN_180527740();
    uVar1 = DAT_180c9ffd8;
    uVar2 = 0xffffffff;
  }
  DAT_180c9ffd8 = uVar1;
  return uVar2;
}



/* ===== 18053a36c FUN_18053a36c ===== */

bool FUN_18053a36c(char *param_1,char *param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  char *pcVar2;
  
  if (param_5 == 0) {
    return '4' < *param_2;
  }
  iVar1 = fegetround();
  if (iVar1 != 0) {
    if (iVar1 == 0x200) {
      if (param_4 != 0) {
        for (; *param_2 == '0'; param_2 = param_2 + 1) {
        }
        if (*param_2 == '\0') {
          return false;
        }
      }
      if (param_3 != 0x2d) {
        return true;
      }
    }
    else {
      if (iVar1 != 0x100) {
        return false;
      }
      if (param_4 != 0) {
        for (; *param_2 == '0'; param_2 = param_2 + 1) {
        }
        if (*param_2 == '\0') {
          return false;
        }
      }
      if (param_3 == 0x2d) {
        return true;
      }
    }
    return false;
  }
  if ('5' < *param_2) {
    return true;
  }
  if (*param_2 < '5') {
    return false;
  }
  pcVar2 = param_2;
  if (param_4 == 0) {
    return true;
  }
  do {
    pcVar2 = pcVar2 + 1;
  } while (*pcVar2 == '0');
  if (*pcVar2 != '\0') {
    return true;
  }
  if (param_2 == param_1) {
    return false;
  }
  return (bool)(param_2[-1] & 1);
}



/* ===== 18053a43c FUN_18053a43c ===== */

undefined4
FUN_18053a43c(char *param_1,ulonglong param_2,int param_3,longlong param_4,undefined8 param_5,
             undefined8 param_6,longlong param_7)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  char *pcVar6;
  longlong lVar7;
  
  if ((param_1 != (char *)0x0) && (param_2 != 0)) {
    *param_1 = '\0';
    iVar3 = 0;
    if (0 < param_3) {
      iVar3 = param_3;
    }
    if (param_2 <= (ulonglong)(longlong)(iVar3 + 1)) {
      uVar5 = 0x22;
      goto LAB_18053a460;
    }
    if (param_4 != 0) {
      pcVar4 = *(char **)(param_4 + 8);
      *param_1 = '0';
      pcVar6 = param_1;
      while( true ) {
        pcVar6 = pcVar6 + 1;
        if (param_3 < 1) break;
        cVar2 = *pcVar4;
        if (cVar2 == '\0') {
          cVar2 = '0';
        }
        else {
          pcVar4 = pcVar4 + 1;
        }
        *pcVar6 = cVar2;
        param_3 = param_3 + -1;
      }
      *pcVar6 = '\0';
      if ((-1 < param_3) && (cVar2 = FUN_18053a36c(), cVar2 != '\0')) {
        while( true ) {
          pcVar6 = pcVar6 + -1;
          if (*pcVar6 != '9') break;
          *pcVar6 = '0';
        }
        *pcVar6 = *pcVar6 + '\x01';
      }
      if (*param_1 == '1') {
        *(int *)(param_4 + 4) = *(int *)(param_4 + 4) + 1;
      }
      else {
        lVar1 = -1;
        do {
          lVar7 = lVar1;
          lVar1 = lVar7 + 1;
        } while (param_1[lVar7 + 2] != '\0');
        FUN_180540530(param_1,param_1 + 1,lVar7 + 2);
      }
      return 0;
    }
  }
  uVar5 = 0x16;
LAB_18053a460:
  *(undefined4 *)(param_7 + 0x2c) = uVar5;
  *(undefined1 *)(param_7 + 0x30) = 1;
  FUN_180527688(0,0,0,0,0,param_7);
  return uVar5;
}



/* ===== 18053a54c FUN_18053a54c ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_18053a54c(ulonglong param_1,int param_2,int param_3,undefined4 *param_4,char *param_5,
             longlong param_6)

{
  uint *puVar1;
  sbyte sVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  longlong lVar8;
  byte bVar9;
  char cVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  char *pcVar15;
  char *pcVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  ulonglong uVar20;
  uint uVar21;
  rsize_t _MaxCount;
  uint uVar22;
  uint uVar23;
  undefined8 uVar24;
  bool bVar25;
  double dVar26;
  undefined1 auStackY_828 [32];
  uint local_7f8;
  uint local_7f0;
  uint local_7ec;
  undefined8 local_7e8;
  uint local_7e0;
  int local_7dc;
  uint local_7d8 [2];
  undefined4 local_7d0;
  undefined4 local_7cc;
  uint *local_7c8;
  byte local_7c0 [8];
  char local_7b8;
  uint *local_7b0;
  char *local_7a8;
  undefined4 *local_7a0;
  uint local_798;
  undefined8 local_794;
  uint local_5c8;
  uint local_5c4 [115];
  uint local_3f8;
  uint local_3f4 [115];
  uint local_228;
  uint local_224 [115];
  ulonglong local_58;
  
  local_58 = DAT_180919500 ^ (ulonglong)auStackY_828;
  local_7a8 = param_5;
  local_7dc = param_3;
  local_7a0 = param_4;
  FUN_18053dc20(local_7c0);
  uVar24 = 1;
  local_7b8 = (local_7c0[0] & 0x1f) != 0x1f;
  if ((bool)local_7b8) {
    FUN_18053dcb0(local_7c0);
  }
  *(char **)(param_4 + 2) = param_5;
  uVar3 = 0x20;
  if ((longlong)param_1 < 0) {
    uVar3 = 0x2d;
  }
  local_7d8[0] = 0;
  *param_4 = uVar3;
  FUN_18053dbb0(local_7d8,0,0);
  uVar6 = param_1 >> 0x34 & 0x7ff;
  if (uVar6 == 0) {
    if (((param_1 & 0xfffffffffffff) == 0) || ((local_7d8[0] & 0x1000000) != 0)) {
      param_4[1] = 0;
LAB_18053a69a:
      iVar4 = FUN_180526580();
      if (iVar4 != 0) {
LAB_18053b7b5:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      goto LAB_18053b778;
    }
  }
  else if (uVar6 == 0x7ff) {
    if ((param_1 & 0xfffffffffffff) == 0) {
      uVar21 = 1;
    }
    else if (((longlong)param_1 < 0) && ((param_1 & 0xfffffffffffff) == 0x8000000000000)) {
      uVar21 = 4;
    }
    else {
      uVar21 = ~(uint)(param_1 >> 0x33) & 1 | 2;
    }
    param_4[1] = 1;
    if (uVar21 == 1) {
      iVar4 = FUN_180526580();
      if (iVar4 != 0) goto LAB_18053b7b5;
      uVar24 = 0;
      goto LAB_18053b778;
    }
    if (((uVar21 == 2) || (uVar21 == 3)) || (uVar21 == 4)) goto LAB_18053a69a;
  }
  local_7ec = 0;
  local_7cc = 0x8001f;
  FUN_18053dbb0(&local_7d0,0,0);
  FUN_18053dbb0(&local_7ec,0x8001f,local_7cc);
  local_7ec = param_2 + 1;
  uVar20 = (param_1 & 0x7fffffffffffffff) >> 0x34;
  uVar6 = (-(ulonglong)(uVar20 != 0) & 0x10000000000000) + (param_1 & 0xfffffffffffff);
  uVar23 = (2 - (uint)(uVar20 != 0)) + (uint)((param_1 & 0x7fffffffffffffff) >> 0x34);
  FUN_18051d3c0(-uVar20);
  dVar26 = (double)FUN_18053dd10();
  uVar5 = -(uint)(((int)dVar26 + 0x80000001U & 0xfffffffe) != 0) & (int)dVar26;
  uVar17 = (uint)(uVar6 >> 0x20);
  local_794 = uVar6;
  uVar21 = (uint)(uVar17 != 0);
  uVar14 = uVar21 + 1;
  if (uVar23 < 0x434) {
    if (uVar23 == 0x36) {
LAB_18053ab84:
      local_7e8 = (uint *)((ulonglong)local_7e8._4_4_ << 0x20);
      puVar1 = (uint *)((longlong)&local_794 + (ulonglong)(-(uint)(uVar17 != 0) & 4));
      iVar4 = 0x1f;
      bVar25 = *puVar1 == 0;
      if (!bVar25) {
        for (; *puVar1 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      if (bVar25) {
        iVar4 = 0;
      }
      else {
        iVar4 = iVar4 + 1;
      }
      uVar21 = (iVar4 == 0x20) + uVar14;
      if (uVar21 < 0x74) {
        uVar17 = uVar21 - 1;
        if (uVar21 - 1 != 0xffffffff) {
          while( true ) {
            uVar22 = uVar17 - 1;
            if (uVar17 < uVar14) {
              iVar4 = *(int *)((longlong)&local_794 + (ulonglong)uVar17 * 4);
            }
            else {
              iVar4 = 0;
            }
            if (uVar22 < uVar14) {
              uVar11 = *(uint *)((longlong)&local_794 + (ulonglong)uVar22 * 4);
            }
            else {
              uVar11 = 0;
            }
            *(uint *)((longlong)&local_794 + (ulonglong)uVar17 * 4) = uVar11 >> 0x1f | iVar4 * 2;
            if (uVar22 == 0xffffffff) break;
            uVar17 = uVar22;
          }
        }
      }
      else {
        uVar21 = 0;
      }
      uVar14 = 0x435 - uVar23 >> 5;
      local_798 = uVar21;
      FUN_180540170(local_3f4,0,(ulonglong)uVar14 * 4);
      local_3f4[uVar14] = 1 << ((byte)(0x435 - uVar23) & 0x1f);
    }
    else {
      local_3f4[1] = 0x100000;
      local_3f4[0] = 0;
      local_3f8 = 2;
      if (uVar17 == 0) goto LAB_18053ab84;
      uVar6 = 0;
      do {
        if (local_3f4[uVar6] != *(uint *)((longlong)&local_794 + uVar6 * 4)) goto LAB_18053ab84;
        uVar21 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar21;
      } while (uVar21 != 2);
      local_7e8 = (uint *)((ulonglong)local_7e8._4_4_ << 0x20);
      iVar4 = 0x1f;
      if (uVar17 != 0) {
        for (; uVar17 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      if (uVar17 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = iVar4 + 1;
      }
      local_798 = (0x20U - iVar4 < 2) + uVar14;
      if (local_798 < 0x74) {
        uVar21 = local_798 - 1;
        if (local_798 - 1 != 0xffffffff) {
          while( true ) {
            uVar17 = uVar21 - 1;
            if (uVar21 < uVar14) {
              iVar4 = *(int *)((longlong)&local_794 + (ulonglong)uVar21 * 4);
            }
            else {
              iVar4 = 0;
            }
            if (uVar17 < uVar14) {
              uVar22 = *(uint *)((longlong)&local_794 + (ulonglong)uVar17 * 4);
            }
            else {
              uVar22 = 0;
            }
            *(uint *)((longlong)&local_794 + (ulonglong)uVar21 * 4) = uVar22 >> 0x1e | iVar4 * 4;
            if (uVar17 == 0xffffffff) break;
            uVar21 = uVar17;
          }
        }
      }
      else {
        local_3f8 = 0;
        local_798 = 0;
        memcpy_s(&local_794,0x1cc,local_3f4,0);
      }
      uVar21 = local_798;
      uVar14 = 0x436 - uVar23 >> 5;
      FUN_180540170(local_3f4,0,(ulonglong)uVar14 * 4);
      local_3f4[uVar14] = 1 << ((byte)(0x436 - uVar23) & 0x1f);
    }
    local_3f8 = uVar14 + 1;
    _MaxCount = (ulonglong)local_3f8 << 2;
  }
  else {
    local_3f4[1] = 0x100000;
    local_3f4[0] = 0;
    local_3f8 = 2;
    if (uVar17 == 0) {
LAB_18053a945:
      local_7e8 = (uint *)((ulonglong)local_7e8._4_4_ << 0x20);
      uVar22 = uVar23 - 0x433 & 0x1f;
      uVar23 = uVar23 - 0x433 >> 5;
      sVar2 = (sbyte)uVar22;
      bVar9 = 0x20 - sVar2;
      uVar17 = (int)(1L << (bVar9 & 0x3f)) - 1;
      puVar1 = (uint *)((longlong)&local_794 + (ulonglong)uVar21 * 4);
      iVar4 = 0x1f;
      bVar25 = *puVar1 == 0;
      if (!bVar25) {
        for (; *puVar1 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      if (bVar25) {
        iVar4 = 0;
      }
      else {
        iVar4 = iVar4 + 1;
      }
      if ((uVar14 + uVar23 < 0x74) &&
         (local_798 = (0x20U - iVar4 < uVar22) + uVar14 + uVar23, local_798 < 0x74)) {
        uVar21 = local_798;
        while (uVar21 = uVar21 - 1, uVar21 != uVar23 - 1) {
          uVar22 = uVar21 - uVar23;
          if (uVar22 < uVar14) {
            uVar11 = *(uint *)((longlong)&local_794 + (ulonglong)uVar22 * 4);
          }
          else {
            uVar11 = 0;
          }
          if (uVar22 - 1 < uVar14) {
            uVar22 = *(uint *)((longlong)&local_794 + (ulonglong)(uVar22 - 1) * 4);
          }
          else {
            uVar22 = 0;
          }
          *(uint *)((longlong)&local_794 + (ulonglong)uVar21 * 4) =
               (uVar22 & ~uVar17) >> (bVar9 & 0x1f) | (uVar11 & uVar17) << sVar2;
        }
        uVar6 = 0;
        if (uVar23 != 0) {
          do {
            *(undefined4 *)((longlong)&local_794 + uVar6 * 4) = 0;
            uVar21 = (int)uVar6 + 1;
            uVar6 = (ulonglong)uVar21;
          } while (uVar21 != uVar23);
        }
      }
      else {
        local_3f8 = 0;
        local_798 = 0;
        memcpy_s(&local_794,0x1cc,local_3f4,0);
      }
      local_3f4[0] = 2;
    }
    else {
      uVar6 = 0;
      do {
        if (local_3f4[uVar6] != *(uint *)((longlong)&local_794 + uVar6 * 4)) goto LAB_18053a945;
        uVar17 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar17;
      } while (uVar17 != 2);
      local_7e8 = (uint *)((ulonglong)local_7e8._4_4_ << 0x20);
      uVar22 = uVar23 - 0x432 & 0x1f;
      uVar23 = uVar23 - 0x432 >> 5;
      sVar2 = (sbyte)uVar22;
      bVar9 = 0x20 - sVar2;
      uVar17 = (int)(1L << (bVar9 & 0x3f)) - 1;
      puVar1 = (uint *)((longlong)&local_794 + (ulonglong)uVar21 * 4);
      iVar4 = 0x1f;
      bVar25 = *puVar1 == 0;
      if (!bVar25) {
        for (; *puVar1 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      if (bVar25) {
        iVar4 = 0;
      }
      else {
        iVar4 = iVar4 + 1;
      }
      if ((uVar14 + uVar23 < 0x74) &&
         (local_798 = (0x20U - iVar4 < uVar22) + uVar14 + uVar23, local_798 < 0x74)) {
        uVar21 = local_798;
        while (uVar21 = uVar21 - 1, uVar21 != uVar23 - 1) {
          uVar22 = uVar21 - uVar23;
          if (uVar22 < uVar14) {
            uVar11 = *(uint *)((longlong)&local_794 + (ulonglong)uVar22 * 4);
          }
          else {
            uVar11 = 0;
          }
          if (uVar22 - 1 < uVar14) {
            uVar22 = *(uint *)((longlong)&local_794 + (ulonglong)(uVar22 - 1) * 4);
          }
          else {
            uVar22 = 0;
          }
          *(uint *)((longlong)&local_794 + (ulonglong)uVar21 * 4) =
               (uVar22 & ~uVar17) >> (bVar9 & 0x1f) | (uVar11 & uVar17) << sVar2;
        }
        uVar6 = 0;
        if (uVar23 != 0) {
          do {
            *(undefined4 *)((longlong)&local_794 + uVar6 * 4) = 0;
            uVar21 = (int)uVar6 + 1;
            uVar6 = (ulonglong)uVar21;
          } while (uVar21 != uVar23);
        }
      }
      else {
        local_3f8 = 0;
        local_798 = 0;
        memcpy_s(&local_794,0x1cc,local_3f4,0);
      }
      local_3f4[0] = 4;
    }
    local_3f4[1] = 0;
    _MaxCount = 4;
    local_3f8 = 1;
    uVar21 = local_798;
  }
  uVar24 = 1;
  local_5c8 = local_3f8;
  memcpy_s(local_5c4,0x1cc,local_3f4,_MaxCount);
  if ((int)uVar5 < 0) {
    uVar14 = -uVar5;
    local_7e8 = (uint *)CONCAT44(local_7e8._4_4_,uVar14);
    local_7f0 = uVar14 / 10;
    if (local_7f0 != 0) {
      do {
        local_7e0 = local_7f0;
        if (0x26 < local_7f0) {
          local_7e0 = 0x26;
        }
        uVar14 = local_7e0 - 1;
        bVar9 = (&DAT_180577622)[(ulonglong)uVar14 * 4];
        local_3f8 = (uint)(byte)(&DAT_180577623)[(ulonglong)uVar14 * 4] + (uint)bVar9;
        FUN_180540170(local_3f4,0,(ulonglong)bVar9 * 4);
        FUN_180540530(local_3f4 + bVar9,
                      &DAT_180576d10 +
                      (ulonglong)*(ushort *)(&DAT_180577620 + (ulonglong)uVar14 * 4) * 4);
        if (local_3f8 < 2) {
          uVar6 = (ulonglong)local_3f4[0];
          if (local_3f4[0] == 0) {
LAB_18053b1d1:
            local_798 = 0;
LAB_18053b1d4:
            uVar21 = local_798;
            goto LAB_18053b497;
          }
          if ((local_3f4[0] == 1) || (uVar21 == 0)) goto LAB_18053b497;
          uVar20 = 0;
          uVar13 = 0;
          do {
            uVar12 = *(uint *)((longlong)&local_794 + uVar13 * 4) * uVar6 + uVar20;
            *(int *)((longlong)&local_794 + uVar13 * 4) = (int)uVar12;
            uVar20 = uVar12 >> 0x20;
            iVar4 = (int)(uVar12 >> 0x20);
            uVar14 = (int)uVar13 + 1;
            uVar13 = (ulonglong)uVar14;
          } while (uVar14 != uVar21);
LAB_18053b21b:
          if (iVar4 == 0) goto LAB_18053b493;
          if (local_798 < 0x73) {
            *(int *)((longlong)&local_794 + (ulonglong)local_798 * 4) = iVar4;
            local_798 = local_798 + 1;
            goto LAB_18053b1d4;
          }
          uVar21 = 0;
          local_798 = 0;
          bVar25 = false;
        }
        else {
          if (uVar21 < 2) {
            uVar14 = (uint)local_794;
            uVar6 = local_794 & 0xffffffff;
            local_798 = local_3f8;
            if ((ulonglong)local_3f8 != 0) {
              if ((ulonglong)local_3f8 * 4 < 0x1cd) {
                FUN_180540530(&local_794,local_3f4);
              }
              else {
                FUN_180540170(&local_794,0);
                puVar7 = (undefined4 *)FUN_18051bfb0();
                *puVar7 = 0x22;
                FUN_180527740();
              }
            }
            if (uVar14 == 0) goto LAB_18053b1d1;
            uVar21 = local_798;
            if ((uVar14 != 1) && (local_798 != 0)) {
              uVar20 = 0;
              uVar13 = 0;
              do {
                uVar12 = *(uint *)((longlong)&local_794 + uVar13 * 4) * uVar6 + uVar20;
                *(int *)((longlong)&local_794 + uVar13 * 4) = (int)uVar12;
                uVar20 = uVar12 >> 0x20;
                iVar4 = (int)(uVar12 >> 0x20);
                uVar21 = (int)uVar13 + 1;
                uVar13 = (ulonglong)uVar21;
              } while (uVar21 != local_798);
              goto LAB_18053b21b;
            }
          }
          else {
            local_7b0 = local_3f4;
            local_7c8 = (uint *)&local_794;
            if (local_3f8 < uVar21) {
              uVar14 = uVar21;
              uVar21 = local_3f8;
            }
            else {
              uVar14 = local_3f8;
              local_7c8 = local_3f4;
              local_7b0 = (uint *)&local_794;
            }
            uVar20 = 0;
            uVar6 = 0;
            local_228 = 0;
            if (uVar21 != 0) {
              do {
                uVar17 = local_7b0[uVar6];
                iVar4 = (int)uVar6;
                if (uVar17 == 0) {
                  if (iVar4 == (int)uVar20) {
                    local_224[uVar6] = 0;
                    uVar20 = (ulonglong)(iVar4 + 1U);
                    local_228 = iVar4 + 1U;
                  }
                }
                else {
                  uVar13 = 0;
                  if (uVar14 != 0) {
                    do {
                      iVar19 = (int)uVar6;
                      uVar12 = uVar6;
                      if (iVar19 == 0x73) break;
                      if (iVar19 == (int)uVar20) {
                        local_224[uVar6] = 0;
                        local_228 = iVar19 + 1;
                      }
                      uVar12 = (ulonglong)(iVar19 + 1U);
                      uVar13 = (ulonglong)local_7c8[(uint)(iVar19 + -iVar4)] * (ulonglong)uVar17 +
                               uVar13 + (ulonglong)local_224[uVar6];
                      local_224[uVar6] = (uint)uVar13;
                      uVar20 = (ulonglong)local_228;
                      uVar13 = uVar13 >> 0x20;
                      uVar6 = uVar12;
                    } while (iVar19 + 1U + -iVar4 != uVar14);
                    uVar17 = (uint)uVar13;
                    uVar6 = uVar12;
                    while (uVar17 != 0) {
                      iVar19 = (int)uVar6;
                      if (iVar19 == 0x73) goto LAB_18053b53e;
                      if (iVar19 == (int)uVar20) {
                        local_224[uVar6] = 0;
                        local_228 = iVar19 + 1;
                      }
                      uVar17 = local_224[uVar6];
                      local_224[uVar6] = (uint)(uVar17 + uVar13);
                      uVar20 = (ulonglong)local_228;
                      uVar17 = (uint)(uVar17 + uVar13 >> 0x20);
                      uVar13 = (ulonglong)uVar17;
                      uVar6 = (ulonglong)(iVar19 + 1);
                    }
                  }
                  if ((int)uVar6 == 0x73) goto LAB_18053b53e;
                }
                uVar6 = (ulonglong)(iVar4 + 1U);
              } while (iVar4 + 1U != uVar21);
            }
            local_798 = (uint)uVar20;
            uVar21 = 0;
            if (uVar20 != 0) {
              if (uVar20 * 4 < 0x1cd) {
                FUN_180540530(&local_794,local_224);
              }
              else {
                FUN_180540170(&local_794,0);
                puVar7 = (undefined4 *)FUN_18051bfb0();
                *puVar7 = 0x22;
                FUN_180527740();
              }
LAB_18053b493:
              uVar21 = local_798;
            }
          }
LAB_18053b497:
          bVar25 = true;
        }
        if (!bVar25) goto LAB_18053b53e;
        local_7f0 = local_7f0 - local_7e0;
      } while (local_7f0 != 0);
      uVar14 = (uint)local_7e8;
    }
    if (uVar14 % 10 != 0) {
      uVar14 = *(uint *)(&DAT_1805776b8 + (ulonglong)(uVar14 % 10 - 1) * 4);
      if (uVar14 == 0) {
LAB_18053b53e:
        local_798 = 0;
LAB_18053b541:
        uVar21 = local_798;
      }
      else if ((uVar14 != 1) && (uVar21 != 0)) {
        uVar6 = 0;
        uVar20 = 0;
        do {
          uVar13 = (ulonglong)*(uint *)((longlong)&local_794 + uVar20 * 4) * (ulonglong)uVar14 +
                   uVar6;
          *(int *)((longlong)&local_794 + uVar20 * 4) = (int)uVar13;
          uVar6 = uVar13 >> 0x20;
          uVar17 = (int)uVar20 + 1;
          uVar20 = (ulonglong)uVar17;
        } while (uVar17 != uVar21);
        iVar4 = (int)(uVar13 >> 0x20);
        if (iVar4 != 0) {
          if (0x72 < local_798) goto LAB_18053b53e;
          *(int *)((longlong)&local_794 + (ulonglong)local_798 * 4) = iVar4;
          local_798 = local_798 + 1;
          goto LAB_18053b541;
        }
        uVar21 = local_798;
      }
    }
LAB_18053b545:
    uVar14 = local_5c8;
  }
  else {
    local_7f8 = uVar5 / 10;
    uVar14 = local_5c8;
    uVar17 = local_5c8;
    if (local_7f8 != 0) {
      do {
        local_7e0 = local_7f8;
        if (0x26 < local_7f8) {
          local_7e0 = 0x26;
        }
        uVar14 = local_7e0 - 1;
        bVar9 = (&DAT_180577622)[(ulonglong)uVar14 * 4];
        local_3f8 = (uint)(byte)(&DAT_180577623)[(ulonglong)uVar14 * 4] + (uint)bVar9;
        FUN_180540170(local_3f4,0,(ulonglong)bVar9 * 4);
        FUN_180540530(local_3f4 + bVar9,
                      &DAT_180576d10 +
                      (ulonglong)*(ushort *)(&DAT_180577620 + (ulonglong)uVar14 * 4) * 4);
        uVar23 = local_5c4[0];
        if (local_3f8 < 2) {
          uVar6 = (ulonglong)local_3f4[0];
          if (local_3f4[0] == 0) {
LAB_18053acf1:
            local_5c8 = 0;
LAB_18053acf4:
            uVar14 = local_5c8;
            goto LAB_18053b04c;
          }
          uVar14 = uVar17;
          if ((local_3f4[0] == 1) || (uVar17 == 0)) goto LAB_18053b04c;
          uVar20 = 0;
          uVar13 = 0;
          do {
            uVar12 = local_5c4[uVar13] * uVar6 + uVar20;
            local_5c4[uVar13] = (uint)uVar12;
            uVar20 = uVar12 >> 0x20;
            uVar14 = (uint)(uVar12 >> 0x20);
            uVar23 = (int)uVar13 + 1;
            uVar13 = (ulonglong)uVar23;
          } while (uVar23 != uVar17);
LAB_18053ad93:
          if (uVar14 == 0) goto LAB_18053b045;
          if (local_5c8 < 0x73) {
            local_5c4[local_5c8] = uVar14;
            local_5c8 = local_5c8 + 1;
            goto LAB_18053acf4;
          }
          uVar14 = 0;
          local_5c8 = 0;
          bVar25 = false;
        }
        else {
          if (uVar17 < 2) {
            uVar6 = (ulonglong)local_5c4[0];
            local_5c8 = local_3f8;
            if ((ulonglong)local_3f8 != 0) {
              if ((ulonglong)local_3f8 * 4 < 0x1cd) {
                FUN_180540530(local_5c4,local_3f4);
              }
              else {
                FUN_180540170(local_5c4,0);
                puVar7 = (undefined4 *)FUN_18051bfb0();
                *puVar7 = 0x22;
                FUN_180527740();
              }
            }
            if (uVar23 == 0) goto LAB_18053acf1;
            uVar14 = local_5c8;
            if ((uVar23 != 1) && (local_5c8 != 0)) {
              uVar20 = 0;
              uVar13 = 0;
              do {
                uVar12 = local_5c4[uVar13] * uVar6 + uVar20;
                local_5c4[uVar13] = (uint)uVar12;
                uVar20 = uVar12 >> 0x20;
                uVar14 = (uint)(uVar12 >> 0x20);
                uVar17 = (int)uVar13 + 1;
                uVar13 = (ulonglong)uVar17;
              } while (uVar17 != local_5c8);
              goto LAB_18053ad93;
            }
          }
          else {
            local_7c8 = local_5c4;
            local_7e8 = local_3f4;
            uVar23 = local_3f8;
            if (local_3f8 < uVar17) {
              uVar23 = uVar17;
              local_7e8 = local_5c4;
              uVar17 = local_3f8;
              local_7c8 = local_3f4;
            }
            uVar14 = 0;
            uVar6 = 0;
            local_228 = 0;
            if (uVar17 != 0) {
              do {
                uVar22 = local_7c8[uVar6];
                uVar11 = (uint)uVar6;
                if (uVar22 == 0) {
                  if (uVar11 == uVar14) {
                    local_224[uVar6] = 0;
                    uVar14 = uVar11 + 1;
                    local_228 = uVar14;
                  }
                }
                else {
                  uVar20 = 0;
                  if (uVar23 != 0) {
                    do {
                      uVar18 = (uint)uVar6;
                      uVar13 = uVar6;
                      if (uVar18 == 0x73) break;
                      if (uVar18 == uVar14) {
                        local_224[uVar6] = 0;
                        local_228 = uVar18 + 1;
                      }
                      uVar13 = (ulonglong)(uVar18 + 1);
                      uVar20 = (ulonglong)local_7e8[uVar18 + -uVar11] * (ulonglong)uVar22 +
                               (ulonglong)local_224[uVar6] + uVar20;
                      local_224[uVar6] = (uint)uVar20;
                      uVar20 = uVar20 >> 0x20;
                      uVar6 = uVar13;
                      uVar14 = local_228;
                    } while (uVar18 + 1 + -uVar11 != uVar23);
                    uVar22 = (uint)uVar20;
                    uVar6 = uVar13;
                    while (uVar22 != 0) {
                      uVar18 = (uint)uVar6;
                      if (uVar18 == 0x73) goto LAB_18053b116;
                      if (uVar18 == uVar14) {
                        local_224[uVar6] = 0;
                        local_228 = uVar18 + 1;
                      }
                      uVar14 = local_224[uVar6];
                      local_224[uVar6] = (uint)(uVar14 + uVar20);
                      uVar22 = (uint)(uVar14 + uVar20 >> 0x20);
                      uVar20 = (ulonglong)uVar22;
                      uVar6 = (ulonglong)(uVar18 + 1);
                      uVar14 = local_228;
                    }
                  }
                  if ((int)uVar6 == 0x73) goto LAB_18053b116;
                }
                uVar6 = (ulonglong)(uVar11 + 1);
              } while (uVar11 + 1 != uVar17);
            }
            local_5c8 = uVar14;
            if ((ulonglong)uVar14 != 0) {
              if ((ulonglong)uVar14 * 4 < 0x1cd) {
                FUN_180540530(local_5c4,local_224);
              }
              else {
                FUN_180540170(local_5c4,0);
                puVar7 = (undefined4 *)FUN_18051bfb0();
                *puVar7 = 0x22;
                FUN_180527740();
              }
LAB_18053b045:
              uVar14 = local_5c8;
            }
          }
LAB_18053b04c:
          bVar25 = true;
        }
        if (!bVar25) goto LAB_18053b116;
        local_7f8 = local_7f8 - local_7e0;
        uVar17 = uVar14;
      } while (local_7f8 != 0);
    }
    if (uVar5 % 10 != 0) {
      uVar17 = *(uint *)(&DAT_1805776b8 + (ulonglong)(uVar5 % 10 - 1) * 4);
      if (uVar17 == 0) {
LAB_18053b116:
        local_5c8 = 0;
      }
      else {
        if ((uVar17 == 1) || (uVar14 == 0)) goto LAB_18053b54c;
        uVar6 = 0;
        uVar20 = 0;
        do {
          uVar13 = (ulonglong)local_5c4[uVar20] * (ulonglong)uVar17 + uVar6;
          local_5c4[uVar20] = (uint)uVar13;
          uVar6 = uVar13 >> 0x20;
          uVar23 = (int)uVar20 + 1;
          uVar20 = (ulonglong)uVar23;
        } while (uVar23 != uVar14);
        uVar14 = (uint)(uVar13 >> 0x20);
        if (uVar14 == 0) goto LAB_18053b545;
        if (0x72 < local_5c8) goto LAB_18053b116;
        local_5c4[local_5c8] = uVar14;
        local_5c8 = local_5c8 + 1;
      }
      uVar14 = local_5c8;
    }
  }
LAB_18053b54c:
  pcVar16 = local_7a8;
  if (uVar21 != 0) {
    uVar6 = 0;
    uVar20 = 0;
    do {
      uVar13 = uVar6 + (ulonglong)*(uint *)((longlong)&local_794 + uVar20 * 4) * 10;
      *(int *)((longlong)&local_794 + uVar20 * 4) = (int)uVar13;
      uVar17 = (int)uVar20 + 1;
      uVar20 = (ulonglong)uVar17;
      uVar6 = uVar13 >> 0x20;
    } while (uVar17 != uVar21);
    iVar4 = (int)(uVar13 >> 0x20);
    if (iVar4 != 0) {
      if (local_798 < 0x73) {
        *(int *)((longlong)&local_794 + (ulonglong)local_798 * 4) = iVar4;
        local_798 = local_798 + 1;
      }
      else {
        local_798 = 0;
      }
    }
  }
  iVar4 = FUN_18050d070(&local_798,&local_5c8);
  if (iVar4 == 10) {
    uVar5 = uVar5 + 1;
    *pcVar16 = '1';
    pcVar15 = pcVar16 + 1;
    if (uVar14 != 0) {
      uVar6 = 0;
      uVar20 = 0;
      do {
        uVar13 = uVar6 + (ulonglong)local_5c4[uVar20] * 10;
        local_5c4[uVar20] = (uint)uVar13;
        uVar21 = (int)uVar20 + 1;
        uVar20 = (ulonglong)uVar21;
        uVar6 = uVar13 >> 0x20;
      } while (uVar21 != uVar14);
      uVar21 = (uint)(uVar13 >> 0x20);
      if (uVar21 != 0) {
        if (local_5c8 < 0x73) {
          local_5c4[local_5c8] = uVar21;
          local_5c8 = local_5c8 + 1;
        }
        else {
          local_5c8 = 0;
        }
      }
    }
  }
  else if (iVar4 == 0) {
    uVar5 = uVar5 - 1;
    pcVar15 = pcVar16;
  }
  else {
    pcVar15 = pcVar16 + 1;
    *pcVar16 = (char)iVar4 + '0';
  }
  local_7a0[1] = uVar5;
  uVar21 = local_7ec;
  if (((-1 < (int)uVar5) && (local_7ec < 0x80000000)) && (local_7dc == 0)) {
    uVar21 = local_7ec + uVar5;
  }
  uVar6 = (ulonglong)uVar21;
  if (param_6 - 1U < (ulonglong)uVar21) {
    uVar6 = param_6 - 1U;
  }
  pcVar16 = pcVar16 + uVar6;
  bVar25 = false;
  while ((pcVar15 != pcVar16 && (local_798 != 0))) {
    uVar6 = 0;
    uVar20 = 0;
    do {
      uVar13 = (ulonglong)*(uint *)((longlong)&local_794 + uVar20 * 4) * 1000000000 + uVar6;
      *(int *)((longlong)&local_794 + uVar20 * 4) = (int)uVar13;
      uVar6 = uVar13 >> 0x20;
      uVar21 = (int)uVar20 + 1;
      uVar20 = (ulonglong)uVar21;
    } while (uVar21 != local_798);
    iVar4 = (int)(uVar13 >> 0x20);
    if (iVar4 != 0) {
      if (local_798 < 0x73) {
        *(int *)((longlong)&local_794 + (ulonglong)local_798 * 4) = iVar4;
        local_798 = local_798 + 1;
      }
      else {
        local_798 = 0;
      }
    }
    uVar6 = FUN_18050d070(&local_798,&local_5c8);
    uVar21 = 8;
    do {
      uVar20 = (uVar6 & 0xffffffff) / 10;
      cVar10 = (char)uVar6 + (char)uVar20 * -10 + '0';
      if (uVar21 < (uint)((int)pcVar16 - (int)pcVar15)) {
        pcVar15[uVar21] = cVar10;
      }
      else if (cVar10 != '0') {
        bVar25 = true;
      }
      uVar21 = uVar21 - 1;
      uVar6 = uVar20;
    } while (uVar21 != 0xffffffff);
    lVar8 = (longlong)pcVar16 - (longlong)pcVar15;
    if (9 < lVar8) {
      lVar8 = 9;
    }
    pcVar15 = pcVar15 + lVar8;
  }
  *pcVar15 = '\0';
  if ((local_798 != 0) || (bVar25)) {
    uVar24 = 0;
  }
  local_7dc = 0;
  FUN_18053dbb0(&local_7dc,local_7d0,local_7cc);
LAB_18053b778:
  if (local_7b8 != '\0') {
    FUN_18053dc40(local_7c0);
  }
  return uVar24;
}



/* ===== 18053b7cc FUN_18053b7cc ===== */

undefined8 FUN_18053b7cc(byte *param_1,uint param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  byte bVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (param_1 != (byte *)0x0) {
    if (param_2 != 0) {
      if ((param_2 & 0xffffff80) == 0) {
        *param_1 = (byte)param_2;
        return 1;
      }
      if ((param_2 & 0xfffff800) == 0) {
        lVar4 = 1;
        bVar2 = 0xc0;
      }
      else if ((param_2 & 0xffff0000) == 0) {
        if (param_2 - 0xd800 < 0x800) {
LAB_18053b863:
          uVar1 = FUN_18053b878(param_3,param_4);
          return uVar1;
        }
        lVar4 = 2;
        bVar2 = 0xe0;
      }
      else {
        if (((param_2 & 0xffe00000) != 0) || (0x10ffff < param_2)) goto LAB_18053b863;
        lVar4 = 3;
        bVar2 = 0xf0;
      }
      lVar5 = lVar4;
      do {
        bVar3 = (byte)param_2;
        param_2 = param_2 >> 6;
        param_1[lVar5] = bVar3 & 0x3f | 0x80;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
      *param_1 = bVar2 | (byte)param_2;
      uVar1 = FUN_18053b870(lVar4 + 1,param_3);
      return uVar1;
    }
    *param_1 = 0;
  }
  *param_3 = 0;
  return 1;
}



/* ===== 18053b870 FUN_18053b870 ===== */

undefined8 FUN_18053b870(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  return param_1;
}



/* ===== 18053b878 FUN_18053b878 ===== */

undefined8 FUN_18053b878(undefined8 *param_1,longlong param_2)

{
  *param_1 = 0;
  *(undefined1 *)(param_2 + 0x30) = 1;
  *(undefined4 *)(param_2 + 0x2c) = 0x2a;
  return 0xffffffffffffffff;
}



/* ===== 18053b88c FUN_18053b88c ===== */

byte FUN_18053b88c(uint param_1)

{
  undefined4 *puVar1;
  
  if (param_1 == 0xfffffffe) {
    puVar1 = (undefined4 *)FUN_18051bfb0();
    *puVar1 = 9;
  }
  else {
    if ((-1 < (int)param_1) && (param_1 < DAT_180c9fd90)) {
      return *(byte *)((&DAT_180c9f990)[(ulonglong)(longlong)(int)param_1 >> 6] + 0x38 +
                      (ulonglong)(param_1 & 0x3f) * 0x48) & 0x40;
    }
    puVar1 = (undefined4 *)FUN_18051bfb0();
    *puVar1 = 9;
    FUN_180527740();
  }
  return 0;
}



/* ===== 18053b8ec KERNEL32.DLL::GetStringTypeW ===== */

BOOL __stdcall GetStringTypeW(DWORD dwInfoType,LPCWSTR lpSrcStr,int cchSrc,LPWORD lpCharType)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00018053b8ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetStringTypeW(dwInfoType,lpSrcStr,cchSrc,lpCharType);
  return BVar1;
}



/* ===== 18053b8f4 FUN_18053b8f4 ===== */

undefined2 FUN_18053b8f4(undefined2 param_1)

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



/* ===== 18053b934 FUN_18053b934 ===== */

int FUN_18053b934(uint param_1,longlong param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (((((param_1 & 0xfffff3ff) != 0) || (param_1 == 0xc00)) && ((param_2 != 0 || (param_3 < 1))))
     && (-1 < param_3)) {
    iVar4 = 0;
    iVar3 = 0xe3;
    do {
      iVar2 = (iVar3 + iVar4) / 2;
      if (param_1 == *(uint *)(&DAT_180587150 + (longlong)iVar2 * 0x10)) {
        if (iVar2 < 0) {
          return 0;
        }
        iVar3 = FUN_180512dc0((&PTR_DAT_180587158)[(longlong)iVar2 * 2],0x55);
        if (0 < param_3) {
          if (param_3 <= iVar3) {
            return 0;
          }
          iVar4 = FUN_180535f30();
          if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
        }
        return iVar3 + 1;
      }
      iVar1 = iVar2 + -1;
      if (-1 < (int)(param_1 - *(uint *)(&DAT_180587150 + (longlong)iVar2 * 0x10))) {
        iVar1 = iVar3;
        iVar4 = iVar2 + 1;
      }
      iVar3 = iVar1;
    } while (iVar4 <= iVar3);
  }
  return 0;
}



/* ===== 18053ba1c FUN_18053ba1c ===== */

undefined4 FUN_18053ba1c(longlong param_1)

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
      iVar3 = FUN_18053beb0(param_1,(&PTR_DAT_180588ba0)[(longlong)iVar2 * 2],0x55);
      if (iVar3 == 0) {
        iVar5 = *(int *)(&DAT_180588ba8 + (longlong)iVar2 * 0x10);
        if (iVar5 < 0) {
          return 0;
        }
        if ((ulonglong)(longlong)iVar5 < 0xe4) {
          return *(undefined4 *)(&DAT_180587150 + (longlong)iVar5 * 0x10);
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



/* ===== 18053bac4 FUN_18053bac4 ===== */

longlong FUN_18053bac4(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  plVar2 = (longlong *)FUN_18052471c();
  if ((plVar2 != (longlong *)0x0) && (param_1 != 0)) {
    uVar5 = 0xffffffffffffffff;
    do {
      uVar5 = uVar5 + 1;
    } while (*(short *)(param_1 + uVar5 * 2) != 0);
    lVar3 = *plVar2;
    while (lVar3 != 0) {
      uVar4 = 0xffffffffffffffff;
      do {
        uVar4 = uVar4 + 1;
      } while (*(short *)(lVar3 + uVar4 * 2) != 0);
      if (((uVar5 < uVar4) && (*(short *)(lVar3 + uVar5 * 2) == 0x3d)) &&
         (iVar1 = FUN_18053d9e0(lVar3,param_1,uVar5), iVar1 == 0)) {
        return *plVar2 + uVar5 * 2 + 2;
      }
      plVar2 = plVar2 + 1;
      lVar3 = *plVar2;
    }
  }
  return 0;
}



/* ===== 18053bb5c FUN_18053bb5c ===== */

undefined8
FUN_18053bb5c(ulonglong *param_1,undefined2 *param_2,ulonglong param_3,undefined8 param_4)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  longlong lVar4;
  longlong lVar6;
  longlong lVar5;
  ulonglong uVar7;
  undefined8 uVar8;
  
  __acrt_lock(0xb);
  uVar8 = 0;
  if (param_1 != (ulonglong *)0x0) {
    *param_1 = 0;
    if (param_2 == (undefined2 *)0x0) {
LAB_18053bbb8:
      if (param_3 == 0) goto LAB_18053bbbd;
LAB_18053bbc4:
      bVar1 = false;
    }
    else {
      if (param_3 == 0) {
        if (param_2 == (undefined2 *)0x0) goto LAB_18053bbb8;
        goto LAB_18053bbc4;
      }
LAB_18053bbbd:
      bVar1 = true;
    }
    if (bVar1) {
      if (param_2 != (undefined2 *)0x0) {
        *param_2 = 0;
      }
      lVar4 = FUN_18053bac4(param_4);
      if (lVar4 != 0) {
        lVar5 = -1;
        do {
          lVar6 = lVar5;
          lVar5 = lVar6 + 1;
        } while (*(short *)(lVar4 + lVar5 * 2) != 0);
        uVar7 = lVar6 + 2;
        *param_1 = uVar7;
        if (param_3 != 0) {
          if (param_3 < uVar7) {
            uVar8 = 0x22;
          }
          else {
            iVar2 = FUN_180535f30();
            if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
              _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
            }
          }
        }
      }
      goto LAB_18053bc16;
    }
  }
  puVar3 = (undefined4 *)FUN_18051bfb0();
  uVar8 = 0x16;
  *puVar3 = 0x16;
  FUN_180527740();
LAB_18053bc16:
  __acrt_unlock(0xb);
  return uVar8;
}



/* ===== 18053bc54 thunk_FUN_18053bb5c ===== */

undefined8
thunk_FUN_18053bb5c(ulonglong *param_1,undefined2 *param_2,ulonglong param_3,undefined8 param_4)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  longlong lVar4;
  longlong lVar6;
  longlong lVar5;
  ulonglong uVar7;
  undefined8 uVar8;
  
  __acrt_lock(0xb);
  uVar8 = 0;
  if (param_1 != (ulonglong *)0x0) {
    *param_1 = 0;
    if (param_2 == (undefined2 *)0x0) {
LAB_18053bbb8:
      if (param_3 == 0) goto LAB_18053bbbd;
LAB_18053bbc4:
      bVar1 = false;
    }
    else {
      if (param_3 == 0) {
        if (param_2 == (undefined2 *)0x0) goto LAB_18053bbb8;
        goto LAB_18053bbc4;
      }
LAB_18053bbbd:
      bVar1 = true;
    }
    if (bVar1) {
      if (param_2 != (undefined2 *)0x0) {
        *param_2 = 0;
      }
      lVar4 = FUN_18053bac4(param_4);
      if (lVar4 != 0) {
        lVar5 = -1;
        do {
          lVar6 = lVar5;
          lVar5 = lVar6 + 1;
        } while (*(short *)(lVar4 + lVar5 * 2) != 0);
        uVar7 = lVar6 + 2;
        *param_1 = uVar7;
        if (param_3 != 0) {
          if (param_3 < uVar7) {
            uVar8 = 0x22;
          }
          else {
            iVar2 = FUN_180535f30();
            if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
              _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
            }
          }
        }
      }
      goto LAB_18053bc16;
    }
  }
  puVar3 = (undefined4 *)FUN_18051bfb0();
  uVar8 = 0x16;
  *puVar3 = 0x16;
  FUN_180527740();
LAB_18053bc16:
  __acrt_unlock(0xb);
  return uVar8;
}



/* ===== 18053bc5c FUN_18053bc5c ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined2 * FUN_18053bc5c(int param_1,undefined2 *param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined2 *puVar3;
  longlong lVar4;
  short sVar5;
  undefined1 auStack_98 [32];
  short *local_78;
  undefined2 *local_70;
  longlong local_68;
  undefined2 *local_60;
  longlong local_58;
  undefined8 local_50;
  char local_48;
  short local_40 [4];
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStack_98;
  lVar4 = (longlong)param_3;
  sVar5 = (short)param_1;
  if (-1 < param_3) {
    if (param_1 == 0) {
      iVar1 = _getdrive();
      sVar5 = (short)iVar1;
      if (iVar1 != 0) goto LAB_18053bcce;
      local_40[0] = 0x2e;
      local_40[1] = 0;
    }
    else {
      iVar1 = FUN_18053bdc8();
      if (iVar1 == 0) {
        puVar2 = (undefined4 *)FUN_18051bf8c();
        *puVar2 = 0xf;
        puVar2 = (undefined4 *)FUN_18051bfb0();
        *puVar2 = 0xd;
        goto LAB_18053bc92;
      }
LAB_18053bcce:
      local_40[0] = sVar5 + 0x40;
      local_40[1] = 0x3a;
      local_40[2] = 0x2e;
      local_40[3] = 0;
    }
    local_58 = lVar4;
    if (param_2 == (undefined2 *)0x0) {
      local_70 = (undefined2 *)0x0;
      local_68 = 0;
      local_50 = 0;
      local_60 = (undefined2 *)_malloc_base(lVar4 * 2);
      local_48 = local_60 != (undefined2 *)0x0;
      if (!(bool)local_48) {
        local_58 = 0;
      }
      local_78 = local_40;
      iVar1 = FUN_18052f29c(&local_70,&local_78);
      if (iVar1 != 0) {
        if (local_48 == '\0') {
          return (undefined2 *)0x0;
        }
        thunk_FUN_1805277b0(local_60);
        return (undefined2 *)0x0;
      }
      puVar3 = (undefined2 *)FUN_18052f388(&local_70);
      if (local_48 != '\0') {
        thunk_FUN_1805277b0(local_60);
      }
      return puVar3;
    }
    if (0 < param_3) {
      *param_2 = 0;
      local_78 = local_40;
      local_50 = 0;
      local_48 = 0;
      local_70 = param_2;
      local_68 = lVar4;
      local_60 = param_2;
      iVar1 = FUN_18052f228(&local_70,&local_78);
      puVar3 = (undefined2 *)0x0;
      if (iVar1 == 0) {
        puVar3 = param_2;
      }
      return puVar3;
    }
  }
  puVar2 = (undefined4 *)FUN_18051bfb0();
  *puVar2 = 0x16;
LAB_18053bc92:
  FUN_180527740();
  return (undefined2 *)0x0;
}



/* ===== 18053bdc8 FUN_18053bdc8 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool FUN_18053bdc8(uint param_1)

{
  UINT UVar1;
  undefined4 *puVar2;
  undefined1 auStack_38 [32];
  WCHAR local_18 [4];
  ulonglong local_10;
  
  local_10 = DAT_180919500 ^ (ulonglong)auStack_38;
  if (param_1 < 0x1b) {
    if (param_1 == 0) {
      return true;
    }
    local_18[0] = (short)param_1 + L'@';
    local_18[1] = L':';
    local_18[2] = L'\\';
    local_18[3] = 0;
    UVar1 = GetDriveTypeW(local_18);
    if (UVar1 != 0) {
      return UVar1 != 1;
    }
  }
  else {
    puVar2 = (undefined4 *)FUN_18051bf8c();
    *puVar2 = 0xf;
    puVar2 = (undefined4 *)FUN_18051bfb0();
    *puVar2 = 0xd;
    FUN_180527740();
  }
  return false;
}



/* ===== 18053be4c FUN_18053be4c ===== */

void FUN_18053be4c(undefined8 param_1,undefined4 param_2)

{
  FUN_18053bc5c(0,param_1,param_2,1,0,0);
  return;
}



/* ===== 18053be80 FUN_18053be80 ===== */

ulonglong FUN_18053be80(ulonglong param_1)

{
  return param_1 | 0x8000000000000;
}



/* ===== 18053bea0 FUN_18053bea0 ===== */

uint FUN_18053bea0(uint param_1)

{
  return param_1 | 0x400000;
}



/* ===== 18053beb0 FUN_18053beb0 ===== */

int FUN_18053beb0(ushort *param_1,ushort *param_2,longlong param_3)

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



/* ===== 18053bf20 FUN_18053bf20 ===== */

ulonglong FUN_18053bf20(ushort *param_1,ushort *param_2,longlong param_3)

{
  ushort uVar1;
  ushort uVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  
  if (DAT_180c9f7dc != 0) {
    uVar3 = FUN_18053bf50();
    return uVar3;
  }
  if ((param_1 == (ushort *)0x0) || (param_2 == (ushort *)0x0)) {
    uVar3 = FUN_180511780();
    return uVar3;
  }
  if (param_3 == 0) {
    return 0;
  }
  do {
    uVar1 = *param_1;
    uVar4 = (uint)uVar1;
    param_1 = param_1 + 1;
    uVar2 = *param_2;
    uVar5 = (uint)uVar2;
    param_2 = param_2 + 1;
    if ((uint)uVar1 != (uint)uVar2) {
      uVar4 = uVar1 + 0x20;
      if (0x19 < uVar1 - 0x41) {
        uVar4 = (uint)uVar1;
      }
      uVar5 = uVar2 + 0x20;
      if (0x19 < uVar2 - 0x41) {
        uVar5 = (uint)uVar2;
      }
    }
  } while (((uVar4 - uVar5 == 0) && (uVar4 != 0)) && (param_3 = param_3 + -1, param_3 != 0));
  return (ulonglong)(uVar4 - uVar5);
}



/* ===== 18053bf50 FUN_18053bf50 ===== */

int FUN_18053bf50(ushort *param_1,ushort *param_2,longlong param_3,longlong *param_4)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  longlong lVar6;
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
  if (param_3 == 0) {
    return 0;
  }
  local_20 = '\0';
  if (param_4 == (longlong *)0x0) {
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
    local_30 = *param_4;
    uStack_28 = param_4[1];
  }
  lVar6 = local_30;
  if (*(longlong *)(local_30 + 0x138) == 0) {
    iVar3 = FUN_18053beb0(param_1,param_2,param_3);
  }
  else {
    do {
      uVar1 = *param_1;
      param_1 = param_1 + 1;
      if (uVar1 < 0x100) {
        uVar5 = (ulonglong)(byte)uVar1;
        if (((&DAT_18057c642)[uVar5 * 2] & 1) != 0) {
          uVar5 = (ulonglong)*(byte *)(uVar5 + *(longlong *)(lVar6 + 0x110));
        }
        uVar1 = (ushort)uVar5;
      }
      else {
        uVar1 = FUN_1805182a8(uVar1,&local_30);
        lVar6 = local_30;
      }
      uVar2 = *param_2;
      param_2 = param_2 + 1;
      if (uVar2 < 0x100) {
        uVar5 = (ulonglong)(byte)uVar2;
        if (((&DAT_18057c642)[uVar5 * 2] & 1) != 0) {
          uVar5 = (ulonglong)*(byte *)(uVar5 + *(longlong *)(lVar6 + 0x110));
        }
        uVar2 = (ushort)uVar5;
      }
      else {
        uVar2 = FUN_1805182a8(uVar2,&local_30);
        lVar6 = local_30;
      }
      iVar3 = (uint)uVar1 - (uint)uVar2;
    } while (((iVar3 == 0) && (uVar1 != 0)) && (param_3 = param_3 + -1, param_3 != 0));
  }
  if (local_20 != '\0') {
    *(uint *)(local_38 + 0x3a8) = *(uint *)(local_38 + 0x3a8) & 0xfffffffd;
  }
  return iVar3;
}



/* ===== 18053c130 FUN_18053c130 ===== */

undefined8 FUN_18053c130(longlong param_1,longlong param_2,ulonglong param_3)

{
  undefined4 *puVar1;
  
  if (((param_1 == 0) || (param_2 == 0)) || (0x7fffffff < param_3)) {
    puVar1 = (undefined4 *)FUN_18051bfb0();
    *puVar1 = 0x16;
    FUN_180527740();
  }
  return 0x7fffffff;
}



/* ===== 18053c170 FUN_18053c170 ===== */

ulonglong FUN_18053c170(byte *param_1,byte *param_2,ulonglong param_3)

{
  byte bVar1;
  byte bVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  
  if (DAT_180c9f7dc != 0) {
    uVar3 = FUN_18053c200();
    return uVar3;
  }
  if (((param_1 == (byte *)0x0) || (param_2 == (byte *)0x0)) || (0x7fffffff < param_3)) {
    uVar3 = FUN_18053c130();
    return uVar3;
  }
  if (param_3 == 0) {
    return 0;
  }
  while( true ) {
    bVar1 = *param_1;
    uVar4 = (uint)bVar1;
    param_1 = param_1 + 1;
    bVar2 = *param_2;
    uVar5 = (uint)bVar2;
    param_2 = param_2 + 1;
    if ((uint)bVar1 != (uint)bVar2) {
      uVar4 = bVar1 + 0x20;
      if (0x19 < bVar1 - 0x41) {
        uVar4 = (uint)bVar1;
      }
      if (bVar2 - 0x41 < 0x1a) {
        uVar5 = bVar2 + 0x20;
      }
    }
    uVar3 = (ulonglong)(uVar4 - uVar5);
    if ((uVar4 - uVar5 != 0) || (uVar4 == 0)) break;
    param_3 = param_3 - 1;
    if (param_3 == 0) {
      return uVar3;
    }
  }
  return uVar3;
}



/* ===== 18053c200 FUN_18053c200 ===== */

int FUN_18053c200(byte *param_1,byte *param_2,ulonglong param_3,undefined8 *param_4)

{
  byte bVar1;
  int iVar2;
  undefined4 *puVar3;
  longlong local_28;
  undefined *local_20;
  undefined8 uStack_18;
  char local_10;
  
  if (((param_1 == (byte *)0x0) || (param_2 == (byte *)0x0)) || (0x7fffffff < param_3)) {
    puVar3 = (undefined4 *)FUN_18051bfb0();
    *puVar3 = 0x16;
    FUN_180527740();
    return 0x7fffffff;
  }
  if (param_3 == 0) {
    return 0;
  }
  local_10 = '\0';
  if (param_4 == (undefined8 *)0x0) {
    if (DAT_180c9f7dc == 0) {
      local_20 = PTR_PTR_1809198b8;
      local_10 = '\0';
    }
    else {
      local_28 = FUN_180529860();
      local_20 = *(undefined **)(local_28 + 0x90);
      uStack_18 = *(undefined8 *)(local_28 + 0x88);
      __acrt_update_locale_info(local_28,&local_20);
      FUN_1805278dc(local_28,&uStack_18);
      if ((*(uint *)(local_28 + 0x3a8) & 2) == 0) {
        local_10 = '\x01';
        *(uint *)(local_28 + 0x3a8) = *(uint *)(local_28 + 0x3a8) | 2;
      }
    }
  }
  else {
    local_20 = (undefined *)*param_4;
    local_10 = '\0';
  }
  do {
    bVar1 = *param_1;
    param_1 = param_1 + 1;
    bVar1 = *(byte *)((ulonglong)bVar1 + *(longlong *)(local_20 + 0x110));
    iVar2 = (uint)bVar1 - (uint)*(byte *)((ulonglong)*param_2 + *(longlong *)(local_20 + 0x110));
    if ((iVar2 != 0) || (bVar1 == 0)) break;
    param_3 = param_3 - 1;
    param_2 = param_2 + 1;
  } while (param_3 != 0);
  if (local_10 != '\0') {
    *(uint *)(local_28 + 0x3a8) = *(uint *)(local_28 + 0x3a8) & 0xfffffffd;
  }
  return iVar2;
}



/* ===== 18053c35c common_sopen_dispatch<> ===== */

/* Library Function - Multiple Matches With Same Base Name
    int __cdecl common_sopen_dispatch<char>(char const * __ptr64 const,int,int,int,int * __ptr64
   const,int)
    int __cdecl common_sopen_dispatch<wchar_t>(wchar_t const * __ptr64 const,int,int,int,int *
   __ptr64 const,int)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int common_sopen_dispatch<>
              (longlong param_1,undefined4 param_2,undefined4 param_3,uint param_4,uint *param_5,
              int param_6)

{
  byte *pbVar1;
  int iVar2;
  undefined4 *puVar3;
  int local_18;
  int local_14;
  
  if (((param_5 == (uint *)0x0) || (*param_5 = 0xffffffff, param_1 == 0)) ||
     ((param_6 != 0 && ((param_4 & 0xfffffe7f) != 0)))) {
    puVar3 = (undefined4 *)FUN_18051bfb0();
    *puVar3 = 0x16;
    FUN_180527740();
    return 0x16;
  }
  local_18 = 0;
  local_14 = 0;
  iVar2 = FUN_18053ca3c(&local_18,param_5,param_1,param_2,param_3,param_4,param_6);
  if (local_18 != 0) {
    if (iVar2 != 0) {
      pbVar1 = (byte *)((&DAT_180c9f990)[(longlong)(int)*param_5 >> 6] + 0x38 +
                       (ulonglong)(*param_5 & 0x3f) * 0x48);
      *pbVar1 = *pbVar1 & 0xfe;
    }
    local_14 = iVar2;
    __acrt_lowio_unlock_fh(*param_5);
  }
  if (iVar2 != 0) {
    *param_5 = 0xffffffff;
  }
  return iVar2;
}



/* ===== 18053c420 common_sopen_dispatch<> ===== */

/* Library Function - Multiple Matches With Same Base Name
    int __cdecl common_sopen_dispatch<char>(char const * __ptr64 const,int,int,int,int * __ptr64
   const,int)
    int __cdecl common_sopen_dispatch<wchar_t>(wchar_t const * __ptr64 const,int,int,int,int *
   __ptr64 const,int)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int common_sopen_dispatch<>
              (longlong param_1,undefined4 param_2,undefined4 param_3,uint param_4,uint *param_5,
              int param_6)

{
  byte *pbVar1;
  int iVar2;
  undefined4 *puVar3;
  int local_18;
  int local_14;
  
  if (((param_5 == (uint *)0x0) || (*param_5 = 0xffffffff, param_1 == 0)) ||
     ((param_6 != 0 && ((param_4 & 0xfffffe7f) != 0)))) {
    puVar3 = (undefined4 *)FUN_18051bfb0();
    *puVar3 = 0x16;
    FUN_180527740();
    return 0x16;
  }
  local_18 = 0;
  local_14 = 0;
  iVar2 = FUN_18053cb8c(&local_18,param_5,param_1,param_2,param_3,param_4,param_6);
  if (local_18 != 0) {
    if (iVar2 != 0) {
      pbVar1 = (byte *)((&DAT_180c9f990)[(longlong)(int)*param_5 >> 6] + 0x38 +
                       (ulonglong)(*param_5 & 0x3f) * 0x48);
      *pbVar1 = *pbVar1 & 0xfe;
    }
    local_14 = iVar2;
    __acrt_lowio_unlock_fh(*param_5);
  }
  if (iVar2 != 0) {
    *param_5 = 0xffffffff;
  }
  return iVar2;
}



/* ===== 18053c4e4 FUN_18053c4e4 ===== */

undefined4 FUN_18053c4e4(uint param_1,byte *param_2,uint param_3,char *param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  uint local_res8 [2];
  
  iVar6 = 0;
  *param_4 = '\0';
  if (-1 < *(char *)((&DAT_180c9f990)[(longlong)(int)param_1 >> 6] + 0x38 +
                    (ulonglong)(param_1 & 0x3f) * 0x48)) {
    return 0;
  }
  if ((param_3 & 0x74000) == 0) {
    local_res8[0] = 0;
    iVar1 = FUN_18053df0c();
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    if ((local_res8[0] & 0x74000) == 0) {
      param_3 = param_3 | 0x4000;
    }
    else {
      param_3 = param_3 | local_res8[0] & 0x74000;
    }
  }
  uVar5 = param_3 & 0x74000;
  iVar1 = 2;
  if (uVar5 == 0x4000) {
    *param_4 = '\0';
  }
  else if ((uVar5 - 0x10000 & 0xffffbfff) == 0) {
    if ((param_3 & 0x301) == 0x301) goto LAB_18053c5ab;
  }
  else if ((uVar5 - 0x20000 & 0xffffbfff) == 0) {
LAB_18053c5ab:
    *param_4 = '\x02';
  }
  else if ((uVar5 - 0x40000 & 0xffffbfff) == 0) {
    *param_4 = '\x01';
  }
  if ((param_3 & 0x70000) == 0) {
    return 0;
  }
  if ((*param_2 & 0x40) != 0) {
    return 0;
  }
  uVar5 = *(uint *)(param_2 + 4) & 0xc0000000;
  if (uVar5 == 0x40000000) {
LAB_18053c5ef:
    iVar2 = *(int *)(param_2 + 8);
    if ((iVar2 != 1) && (iVar2 != 2)) {
      if ((iVar2 == 3) || (iVar2 == 4)) {
        lVar3 = FUN_18052de38(param_1,0,2);
        if (lVar3 != 0) {
          lVar3 = FUN_18052de38(param_1,0,0);
          if (lVar3 == -1) goto LAB_18053c658;
          if ((*(uint *)(param_2 + 4) & 0x80000000) == 0) {
            return 0;
          }
          goto LAB_18053c66d;
        }
      }
      else if (iVar2 != 5) {
        return 0;
      }
    }
    if (*param_4 == '\x01') {
      iVar1 = 3;
      local_res8[0] = 0xbfbbef;
    }
    else {
      if (*param_4 != '\x02') {
        return 0;
      }
      local_res8[0] = 0xfeff;
    }
    while (iVar2 = FUN_18052b314(param_1,(longlong)local_res8 + (longlong)iVar6,iVar1 - iVar6),
          iVar2 != -1) {
      iVar6 = iVar6 + iVar2;
      if (iVar1 <= iVar6) {
        return 0;
      }
    }
    goto LAB_18053c658;
  }
  if (uVar5 != 0x80000000) {
    if (uVar5 != 0xc0000000) {
      return 0;
    }
    goto LAB_18053c5ef;
  }
LAB_18053c66d:
  local_res8[0] = 0;
  iVar6 = FUN_18052d764(param_1,local_res8,3);
  if (iVar6 == -1) goto LAB_18053c658;
  if (iVar6 == 2) {
LAB_18053c6a6:
    if ((local_res8[0] & 0xffff) == 0xfffe) {
      puVar4 = (undefined4 *)FUN_18051bfb0();
      *puVar4 = 0x16;
      goto LAB_18053c658;
    }
    if ((local_res8[0] & 0xffff) == 0xfeff) {
      lVar3 = FUN_18052de38(param_1,2,0);
      if (lVar3 != -1) {
        *param_4 = '\x02';
        return 0;
      }
      goto LAB_18053c658;
    }
  }
  else if (iVar6 == 3) {
    if (local_res8[0] == 0xbfbbef) {
      *param_4 = '\x01';
      return 0;
    }
    goto LAB_18053c6a6;
  }
  lVar3 = FUN_18052de38(param_1,0,0);
  if (lVar3 != -1) {
    return 0;
  }
LAB_18053c658:
  puVar4 = (undefined4 *)FUN_18051bfb0();
  return *puVar4;
}



/* ===== 18053c764 FUN_18053c764 ===== */

byte * FUN_18053c764(byte *param_1,uint param_2,int param_3,byte param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  
  param_1[0] = 0;
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
  uVar5 = 0xffffffff;
  uVar4 = param_2 & 3;
  if (uVar4 == 0) {
    iVar2 = -0x80000000;
  }
  else if (uVar4 == 1) {
    iVar2 = (-(uint)((param_2 & 0x70000) != 0 && (param_2 & 8) != 0) & 0x80000000) + 0x40000000;
  }
  else if (uVar4 == 2) {
    iVar2 = -0x40000000;
  }
  else {
    puVar3 = (undefined4 *)FUN_18051bfb0();
    *puVar3 = 0x16;
    FUN_180527740();
    iVar2 = -1;
  }
  *(int *)(param_1 + 4) = iVar2;
  uVar4 = param_2 & 0x700;
  if (uVar4 != 0) {
    if (uVar4 == 0x100) {
      uVar1 = 4;
      goto LAB_18053c855;
    }
    if (uVar4 == 0x200) {
LAB_18053c842:
      uVar1 = 5;
      goto LAB_18053c855;
    }
    if (uVar4 == 0x300) {
      uVar1 = 2;
      goto LAB_18053c855;
    }
    if (uVar4 != 0x400) {
      if (uVar4 != 0x500) {
        if (uVar4 == 0x600) goto LAB_18053c842;
        if (uVar4 != 0x700) {
          puVar3 = (undefined4 *)FUN_18051bfb0();
          *puVar3 = 0x16;
          FUN_180527740();
          uVar1 = 0xffffffff;
          goto LAB_18053c855;
        }
      }
      uVar1 = 1;
      goto LAB_18053c855;
    }
  }
  uVar1 = 3;
LAB_18053c855:
  *(undefined4 *)(param_1 + 8) = uVar1;
  if (param_3 == 0x10) {
    uVar5 = 0;
  }
  else if (param_3 == 0x20) {
    uVar5 = 1;
  }
  else if (param_3 == 0x30) {
    uVar5 = 2;
  }
  else if (param_3 == 0x40) {
    uVar5 = 3;
  }
  else if (param_3 == 0x80) {
    uVar5 = (uint)(*(int *)(param_1 + 4) == -0x80000000);
  }
  else {
    puVar3 = (undefined4 *)FUN_18051bfb0();
    *puVar3 = 0x16;
    FUN_180527740();
  }
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(uint *)(param_1 + 0xc) = uVar5;
  param_1[0x10] = 0x80;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  if ((char)param_2 < '\0') {
    *param_1 = *param_1 | 0x10;
  }
  if ((param_2 & 0x8000) == 0) {
    if (((param_2 & 0x74000) == 0) && (iVar2 = FUN_18053df0c(), iVar2 != 0)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    *param_1 = *param_1 | 0x80;
  }
  if (((param_2 & 0x100) != 0) && (-1 < (char)(~(byte)DAT_180c9ffe0 & param_4))) {
    param_1[0x10] = 1;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
  }
  if ((param_2 & 0x40) != 0) {
    *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | 0x4000000;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x10000;
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 4;
  }
  if ((param_2 >> 0xc & 1) != 0) {
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x100;
  }
  if ((param_2 >> 0xd & 1) != 0) {
    *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | 0x2000000;
  }
  if ((param_2 & 0x20) == 0) {
    if ((param_2 & 0x10) != 0) {
      *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | 0x10000000;
    }
  }
  else {
    *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | 0x8000000;
  }
  return param_1;
}



/* ===== 18053c978 truncate_ctrl_z_if_present ===== */

/* Library Function - Single Match
    int __cdecl truncate_ctrl_z_if_present(int)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl truncate_ctrl_z_if_present(int param_1)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  int *piVar4;
  short local_res8 [4];
  
  bVar1 = *(byte *)((&DAT_180c9f990)[(longlong)param_1 >> 6] + 0x38 +
                   (ulonglong)(param_1 & 0x3f) * 0x48);
  if (((bVar1 & 0x48) == 0) && ((char)bVar1 < '\0')) {
    lVar3 = FUN_18052de38(param_1,0xffffffffffffffff,2);
    if (lVar3 == -1) {
      piVar4 = (int *)FUN_18051bf8c();
      if (*piVar4 == 0x83) goto LAB_18053ca27;
    }
    else {
      local_res8[0] = 0;
      iVar2 = FUN_18052d764(param_1,local_res8,1);
      if ((iVar2 == 0) && (local_res8[0] == 0x1a)) {
        iVar2 = FUN_18053e020(param_1,lVar3);
        if (iVar2 == -1) goto LAB_18053c9da;
      }
      lVar3 = FUN_18052de38(param_1,0,0);
      if (lVar3 != -1) goto LAB_18053ca27;
    }
LAB_18053c9da:
    piVar4 = (int *)FUN_18051bfb0();
    iVar2 = *piVar4;
  }
  else {
LAB_18053ca27:
    iVar2 = 0;
  }
  return iVar2;
}



/* ===== 18053ca3c FUN_18053ca3c ===== */

undefined4
FUN_18053ca3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 local_68 [8];
  longlong local_60;
  longlong local_58;
  char local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  char local_18;
  
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = '\0';
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_60,(__crt_locale_pointers *)0x0);
  uVar3 = 0xfde9;
  if (*(int *)(local_58 + 0xc) == 0xfde9) {
    if (local_48 != '\0') {
      *(uint *)(local_60 + 0x3a8) = *(uint *)(local_60 + 0x3a8) & 0xfffffffd;
    }
  }
  else {
    iVar1 = FUN_18052c63c();
    if (iVar1 == 0) {
      if (local_48 != '\0') {
        *(uint *)(local_60 + 0x3a8) = *(uint *)(local_60 + 0x3a8) & 0xfffffffd;
      }
      uVar3 = 1;
    }
    else {
      if (local_48 != '\0') {
        *(uint *)(local_60 + 0x3a8) = *(uint *)(local_60 + 0x3a8) & 0xfffffffd;
      }
      uVar3 = 0;
    }
  }
  iVar1 = FUN_18051261c(param_3,&local_40,local_68,uVar3);
  if (iVar1 == 0) {
    uVar2 = FUN_18053cb8c(param_1,param_2,local_30,param_4,param_5,param_6,param_7);
  }
  else {
    uVar2 = 0xffffffff;
  }
  if (local_18 != '\0') {
    FUN_1805277b0(local_30);
  }
  return uVar2;
}



/* ===== 18053cb58 FID_conflict:_sopen_s ===== */

/* Library Function - Multiple Matches With Different Base Names
    _sopen_s
    _wsopen_s
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

errno_t __cdecl
FID_conflict__sopen_s
          (int *_FileHandle,char *_Filename,int _OpenFlag,int _ShareFlag,int _PermissionMode)

{
  errno_t eVar1;
  
  eVar1 = common_sopen_dispatch<>(_Filename,_OpenFlag,_ShareFlag,_PermissionMode,_FileHandle,1);
  return eVar1;
}



/* ===== 18053cb8c FUN_18053cb8c ===== */

int FUN_18053cb8c(undefined4 *param_1,uint *param_2,LPCWSTR param_3,uint param_4,undefined4 param_5,
                 undefined4 param_6)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  DWORD DVar4;
  int iVar5;
  ulonglong *puVar6;
  undefined4 *puVar7;
  int *piVar8;
  HANDLE pvVar9;
  ulonglong uVar10;
  byte bVar11;
  undefined1 local_c8 [4];
  DWORD local_c4;
  undefined8 local_c0;
  ulonglong uStack_b8;
  ulonglong local_b0;
  byte local_a8;
  _SECURITY_ATTRIBUTES local_a0;
  ulonglong local_88;
  ulonglong local_80;
  ulonglong local_78;
  ulonglong local_68;
  ulonglong uStack_60;
  ulonglong local_58;
  undefined1 local_48 [32];
  
  puVar6 = (ulonglong *)FUN_18053c764(local_48,param_4,param_5,param_6);
  local_c0 = *puVar6;
  uStack_b8 = puVar6[1];
  local_b0 = puVar6[2];
  local_78 = puVar6[1] >> 0x20;
  DVar4 = (DWORD)(puVar6[1] >> 0x20);
  local_88 = local_b0;
  local_68 = local_c0;
  uStack_60 = uStack_b8;
  if (DVar4 == 0xffffffff) {
    puVar7 = (undefined4 *)FUN_18051bf8c();
    *puVar7 = 0;
    *param_2 = 0xffffffff;
    goto LAB_18053cc0b;
  }
  uVar3 = _alloc_osfhnd();
  *param_2 = uVar3;
  if (uVar3 == 0xffffffff) {
    puVar7 = (undefined4 *)FUN_18051bf8c();
    *puVar7 = 0;
    *param_2 = 0xffffffff;
    puVar7 = (undefined4 *)FUN_18051bfb0();
    *puVar7 = 0x18;
    goto LAB_18053cc0b;
  }
  local_c4 = (DWORD)uStack_60;
  *param_1 = 1;
  uVar3 = (uint)(local_b0 >> 0x20) | (uint)local_b0;
  local_80 = (ulonglong)uVar3;
  local_a0.bInheritHandle = ~(param_4 >> 7) & 1;
  local_a0.nLength = 0x18;
  local_a0._4_4_ = 0;
  local_a0._20_4_ = 0;
  local_a0.lpSecurityDescriptor = (LPVOID)0x0;
  pvVar9 = CreateFileW(param_3,(DWORD)(local_68 >> 0x20),DVar4,&local_a0,local_c4,uVar3,(HANDLE)0x0)
  ;
  if (pvVar9 == (HANDLE)0xffffffffffffffff) {
    uVar2 = (uint)(local_68 >> 0x20);
    if (((uVar2 & 0xc0000000) == 0xc0000000) && ((param_4 & 1) != 0)) {
      local_c0 = CONCAT44(uVar2,(undefined4)local_c0) & 0x7fffffffffffffff;
      pvVar9 = CreateFileW(param_3,(DWORD)(local_c0 >> 0x20),DVar4,&local_a0,local_c4,uVar3,
                           (HANDLE)0x0);
      uVar3 = uVar2 & 0x7fffffff;
      if (pvVar9 != (HANDLE)0xffffffffffffffff) goto LAB_18053cd45;
    }
    pbVar1 = (byte *)((&DAT_180c9f990)[(longlong)(int)*param_2 >> 6] + 0x38 +
                     (ulonglong)(*param_2 & 0x3f) * 0x48);
    *pbVar1 = *pbVar1 & 0xfe;
    DVar4 = GetLastError();
    FUN_18051bf40(DVar4);
  }
  else {
    uVar3 = local_c0._4_4_;
LAB_18053cd45:
    DVar4 = GetFileType(pvVar9);
    if (DVar4 != 0) {
      if (DVar4 == 2) {
        bVar11 = (byte)local_c0 | 0x40;
      }
      else {
        bVar11 = (byte)local_c0;
        if (DVar4 == 3) {
          bVar11 = (byte)local_c0 | 8;
        }
      }
      FUN_180517cb0(*param_2,pvVar9);
      local_a8 = bVar11 | 1;
      local_c0 = CONCAT71(local_c0._1_7_,bVar11) | 1;
      *(byte *)((&DAT_180c9f990)[(longlong)(int)*param_2 >> 6] + 0x38 +
               (ulonglong)(*param_2 & 0x3f) * 0x48) = local_a8;
      *(undefined1 *)
       ((&DAT_180c9f990)[(longlong)(int)*param_2 >> 6] + 0x39 + (ulonglong)(*param_2 & 0x3f) * 0x48)
           = 0;
      if (((param_4 & 2) == 0) || (iVar5 = truncate_ctrl_z_if_present(*param_2), iVar5 == 0)) {
        local_68 = local_c0;
        uStack_60 = uStack_b8;
        local_c8[0] = 0;
        local_58 = local_88;
        iVar5 = FUN_18053c4e4(*param_2,&local_68,param_4,local_c8);
        uVar2 = *param_2;
        if (iVar5 == 0) {
          *(undefined1 *)
           ((&DAT_180c9f990)[(longlong)(int)uVar2 >> 6] + 0x39 + (ulonglong)(uVar2 & 0x3f) * 0x48) =
               local_c8[0];
          uVar10 = (ulonglong)(*param_2 & 0x3f);
          pbVar1 = (byte *)((&DAT_180c9f990)[(longlong)(int)*param_2 >> 6] + 0x3d + uVar10 * 0x48);
          *pbVar1 = *pbVar1 ^ ((byte)(param_4 >> 0x10) ^
                              *(byte *)((&DAT_180c9f990)[(longlong)(int)*param_2 >> 6] + 0x3d +
                                       uVar10 * 0x48)) & 1;
          if (((local_a8 & 0x48) == 0) && ((param_4 & 8) != 0)) {
            pbVar1 = (byte *)((&DAT_180c9f990)[(longlong)(int)*param_2 >> 6] + 0x38 +
                             (ulonglong)(*param_2 & 0x3f) * 0x48);
            *pbVar1 = *pbVar1 | 0x20;
          }
          if (((uVar3 & 0xc0000000) == 0xc0000000) && ((param_4 & 1) != 0)) {
            CloseHandle(pvVar9);
            local_c0 = CONCAT44(uVar3,(undefined4)local_c0) & 0x7fffffffffffffff;
            pvVar9 = CreateFileW(param_3,(DWORD)(local_c0 >> 0x20),(DWORD)local_78,&local_a0,
                                 local_c4,(DWORD)local_80,(HANDLE)0x0);
            if (pvVar9 == (HANDLE)0xffffffffffffffff) {
              DVar4 = GetLastError();
              FUN_18051bf40(DVar4);
              pbVar1 = (byte *)((&DAT_180c9f990)[(longlong)(int)*param_2 >> 6] + 0x38 +
                               (ulonglong)(*param_2 & 0x3f) * 0x48);
              *pbVar1 = *pbVar1 & 0xfe;
              FUN_180517ed8(*param_2);
              goto LAB_18053cc0b;
            }
            *(HANDLE *)
             ((&DAT_180c9f990)[(longlong)(int)*param_2 >> 6] + 0x28 +
             (ulonglong)(*param_2 & 0x3f) * 0x48) = pvVar9;
          }
          return 0;
        }
      }
      else {
        uVar2 = *param_2;
      }
      FUN_18052b938(uVar2);
      return iVar5;
    }
    DVar4 = GetLastError();
    FUN_18051bf40(DVar4);
    pbVar1 = (byte *)((&DAT_180c9f990)[(longlong)(int)*param_2 >> 6] + 0x38 +
                     (ulonglong)(*param_2 & 0x3f) * 0x48);
    *pbVar1 = *pbVar1 & 0xfe;
    CloseHandle(pvVar9);
    if (DVar4 == 0) {
      puVar7 = (undefined4 *)FUN_18051bfb0();
      *puVar7 = 0xd;
    }
  }
LAB_18053cc0b:
  piVar8 = (int *)FUN_18051bfb0();
  return *piVar8;
}



/* ===== 18053cfa0 FID_conflict:_sopen_s ===== */

/* Library Function - Multiple Matches With Different Base Names
    _sopen_s
    _wsopen_s
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

errno_t __cdecl
FID_conflict__sopen_s
          (int *_FileHandle,char *_Filename,int _OpenFlag,int _ShareFlag,int _PermissionMode)

{
  errno_t eVar1;
  
  eVar1 = common_sopen_dispatch<>(_Filename,_OpenFlag,_ShareFlag,_PermissionMode,_FileHandle,1);
  return eVar1;
}



/* ===== 18053cfe0 FUN_18053cfe0 ===== */

int FUN_18053cfe0(uint *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  iVar2 = 1;
  uVar5 = *param_1 & 0x80000000;
  uVar3 = *param_1 & 0x7fffff;
  uVar4 = 0;
  if (uVar3 != 0) {
    iVar1 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> iVar1 == 0; iVar1 = iVar1 + -1) {
      }
    }
    if (uVar3 == 0) {
      *param_1 = uVar5;
      return -0x16;
    }
    iVar2 = iVar1 + -0x16;
    uVar4 = uVar3 << (0x17U - (char)iVar1 & 0x1f) & 0x7fffff;
  }
  *param_1 = uVar5 | uVar4;
  return iVar2;
}



/* ===== 18053d040 FUN_18053d040 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_18053d040(void)

{
  undefined1 auVar1 [16];
  short sVar2;
  undefined1 in_ZMM0 [64];
  undefined1 extraout_var [56];
  undefined1 auVar3 [64];
  float fVar4;
  ulonglong uVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [64];
  
  auVar8 = ZEXT1664(in_ZMM0._0_16_);
  sVar2 = FUN_1805266e0();
  if (sVar2 != 0) {
    fVar4 = auVar8._0_4_;
    if (sVar2 == 1) {
      auVar1 = vpcmpeqd_avx(ZEXT416((uint)fVar4 & 0x80000000),SUB6416(ZEXT464(0),0));
      auVar1 = vblendvps_avx(ZEXT416(DAT_1808acda0),ZEXT416((uint)DAT_1808ac34c),auVar1);
      return auVar1._0_8_;
    }
    if (sVar2 != 2) {
      fVar6 = (float)((uint)fVar4 & _DAT_1808ade90);
      if (fVar6 < DAT_180919be4) {
        fVar6 = fVar4 * fVar4;
        return (ulonglong)
               (uint)(((fVar6 * (fVar6 * (fVar6 * DAT_18057e95c + DAT_18057e968) + DAT_18057e970) +
                       DAT_18057e988) /
                      (fVar6 * (fVar6 * (fVar6 * DAT_18057e964 + DAT_18057e96c) + DAT_18057e978) +
                      DAT_1808ac34c)) * fVar4);
      }
      if (DAT_180919be0 <= fVar6) {
        uVar5 = (ulonglong)(uint)DAT_1808ac34c;
      }
      else {
        fVar4 = fVar6 * (fVar6 * (fVar6 * DAT_18058a4a4 + DAT_18057e960) + DAT_18057e974) +
                DAT_18057e980;
        fVar7 = fVar4 / (fVar6 * (fVar6 * DAT_18057e97c + DAT_18057e98c) + DAT_18057e984);
        auVar3._0_8_ = FUN_18051ab90((float)((uint)fVar6 ^ DAT_1808adec0) * fVar6,fVar4);
        auVar3._8_56_ = extraout_var;
        auVar1._4_12_ = auVar3._4_12_;
        auVar1._0_4_ = -(fVar7 * (float)auVar3._0_8_) + DAT_1808ac34c;
        uVar5 = auVar1._0_8_;
      }
      if (auVar8._0_4_ < 0.0) {
        return CONCAT44((uint)(uVar5 >> 0x20) ^ _UNK_1808adec4,(uint)uVar5 ^ DAT_1808adec0);
      }
      return uVar5;
    }
  }
  return auVar8._0_8_;
}



/* ===== 18053d1dc FUN_18053d1dc ===== */

byte FUN_18053d1dc(void)

{
  byte bVar1;
  
  bVar1 = __acrt_initialize_multibyte();
  return bVar1 ^ 1;
}



/* ===== 18053d1f0 FUN_18053d1f0 ===== */

undefined8
FUN_18053d1f0(ulonglong param_1,short *param_2,ulonglong param_3,uint param_4,char param_5)

{
  short *psVar1;
  short sVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  short *psVar7;
  short *psVar8;
  
  psVar7 = param_2;
  if (param_5 != '\0') {
    *param_2 = 0x2d;
    psVar7 = param_2 + 1;
    param_1 = (ulonglong)(uint)-(int)param_1;
  }
  uVar6 = (ulonglong)(param_5 != '\0');
  psVar1 = psVar7;
  do {
    psVar8 = psVar1;
    uVar3 = param_1 & 0xffffffff;
    param_1 = uVar3 / param_4;
    uVar3 = uVar3 % (ulonglong)param_4;
    sVar2 = 0x57;
    if ((uint)uVar3 < 10) {
      sVar2 = 0x30;
    }
    uVar6 = uVar6 + 1;
    *psVar8 = sVar2 + (short)uVar3;
  } while (((int)param_1 != 0) && (psVar1 = psVar8 + 1, uVar6 < param_3));
  if (uVar6 < param_3) {
    psVar8[1] = 0;
    do {
      sVar2 = *psVar8;
      *psVar8 = *psVar7;
      psVar8 = psVar8 + -1;
      *psVar7 = sVar2;
      psVar7 = psVar7 + 1;
    } while (psVar7 < psVar8);
    uVar5 = 0;
  }
  else {
    *param_2 = 0;
    puVar4 = (undefined4 *)FUN_18051bfb0();
    *puVar4 = 0x22;
    FUN_180527740();
    uVar5 = 0x22;
  }
  return uVar5;
}



/* ===== 18053d2c4 common_xtox_s<unsigned_long,wchar_t> ===== */

/* Library Function - Single Match
    int __cdecl common_xtox_s<unsigned long,wchar_t>(unsigned long,wchar_t * __ptr64 const,unsigned
   __int64,unsigned int,bool)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl
common_xtox_s<unsigned_long,wchar_t>
          (ulong param_1,wchar_t *param_2,__uint64 param_3,uint param_4,bool param_5)

{
  int iVar1;
  int *piVar2;
  
  if ((param_2 != (wchar_t *)0x0) && (param_3 != 0)) {
    *param_2 = L'\0';
    if (param_3 <= (ulonglong)param_5 + 1) {
      piVar2 = (int *)FUN_18051bfb0();
      iVar1 = 0x22;
      goto LAB_18053d2de;
    }
    if (param_4 - 2 < 0x23) {
      iVar1 = FUN_18053d1f0(param_1);
      return iVar1;
    }
  }
  piVar2 = (int *)FUN_18051bfb0();
  iVar1 = 0x16;
LAB_18053d2de:
  *piVar2 = iVar1;
  FUN_180527740();
  return iVar1;
}



/* ===== 18053d330 FID_conflict:_ltow_s ===== */

/* Library Function - Multiple Matches With Different Base Names
    _itow_s
    _ltow_s
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

errno_t __cdecl FID_conflict__ltow_s(long _Val,wchar_t *_DstBuf,size_t _SizeInWords,int _Radix)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = false;
  if ((_Radix == 10) && (_Val < 0)) {
    bVar1 = true;
  }
  iVar2 = common_xtox_s<unsigned_long,wchar_t>(_Val,_DstBuf,_SizeInWords,_Radix,bVar1);
  return iVar2;
}



/* ===== 18053d350 FUN_18053d350 ===== */

int FUN_18053d350(ushort *param_1,ushort *param_2)

{
  ushort uVar1;
  int iVar2;
  longlong lVar3;
  
  uVar1 = *param_2;
  iVar2 = (uint)*param_1 - (uint)uVar1;
  if (iVar2 == 0) {
    lVar3 = (longlong)param_1 - (longlong)param_2;
    do {
      if (uVar1 == 0) break;
      uVar1 = param_2[1];
      param_2 = param_2 + 1;
      iVar2 = (uint)*(ushort *)(lVar3 + (longlong)param_2) - (uint)uVar1;
    } while (iVar2 == 0);
  }
  return (iVar2 >> 0x1f) - (-iVar2 >> 0x1f);
}



/* ===== 18053d388 FUN_18053d388 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_18053d388(undefined1 *param_1,undefined8 *param_2,ulonglong param_3,undefined8 param_4,
                      undefined8 param_5)

{
  undefined8 uVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined1 *puVar4;
  longlong lVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  undefined1 *puVar8;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_48 [8];
  ulonglong local_40;
  
  local_40 = DAT_180919500 ^ (ulonglong)auStack_78;
  puVar6 = (undefined2 *)*param_2;
  local_58 = param_5;
  local_50 = param_4;
  if (param_1 == (undefined1 *)0x0) {
    lVar5 = 0;
    lVar3 = FUN_180528e3c(local_48,*puVar6,param_4,param_5);
    uVar1 = local_58;
    if (lVar3 != -1) {
      do {
        if ((lVar3 != 0) && (local_48[lVar3 + -1] == '\0')) {
          return lVar3 + -1 + lVar5;
        }
        puVar6 = puVar6 + 1;
        lVar5 = lVar5 + lVar3;
        lVar3 = FUN_180528e3c(local_48,*puVar6,param_4,uVar1);
      } while (lVar3 != -1);
      lVar3 = -1;
    }
    return lVar3;
  }
  puVar4 = param_1;
  puVar7 = puVar6;
  do {
    puVar8 = local_48;
    if (3 < param_3) {
      puVar8 = puVar4;
    }
    uVar2 = FUN_180528e3c(puVar8,*puVar7,local_50,local_58);
    if (uVar2 == 0xffffffffffffffff) {
      *param_2 = puVar6;
      return -1;
    }
    if (puVar8 != puVar4) {
      if (param_3 < uVar2) goto LAB_18053d44e;
      FUN_180540530(puVar4,puVar8,uVar2);
    }
    if (uVar2 != 0) {
      if (puVar4[uVar2 - 1] == '\0') {
        puVar6 = (undefined2 *)0x0;
        puVar4 = puVar4 + (uVar2 - 1);
LAB_18053d44e:
        *param_2 = puVar6;
        return (longlong)puVar4 - (longlong)param_1;
      }
      puVar6 = puVar7 + 1;
    }
    puVar7 = puVar7 + 1;
    param_3 = param_3 - uVar2;
    puVar4 = puVar4 + uVar2;
  } while( true );
}



/* ===== 18053d4e0 FUN_18053d4e0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

byte * FUN_18053d4e0(byte *param_1,byte *param_2)

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



/* ===== 18053d580 FUN_18053d580 ===== */

/* WARNING: Removing unreachable block (ram,0x00018053d81c) */
/* WARNING: Removing unreachable block (ram,0x00018053d815) */
/* WARNING: Removing unreachable block (ram,0x00018053d80e) */
/* WARNING: Removing unreachable block (ram,0x00018053d807) */
/* WARNING: Removing unreachable block (ram,0x00018053d800) */
/* WARNING: Removing unreachable block (ram,0x00018053d7f9) */
/* WARNING: Removing unreachable block (ram,0x00018053d7f2) */
/* WARNING: Removing unreachable block (ram,0x00018053d7eb) */
/* WARNING: Removing unreachable block (ram,0x00018053d7e4) */
/* WARNING: Removing unreachable block (ram,0x00018053d7dd) */
/* WARNING: Removing unreachable block (ram,0x00018053d7d6) */
/* WARNING: Removing unreachable block (ram,0x00018053d7cf) */
/* WARNING: Removing unreachable block (ram,0x00018053d7c8) */
/* WARNING: Removing unreachable block (ram,0x00018053d7c1) */
/* WARNING: Removing unreachable block (ram,0x00018053d7ba) */
/* WARNING: Removing unreachable block (ram,0x00018053d67d) */
/* WARNING: Removing unreachable block (ram,0x00018053d68c) */
/* WARNING: Removing unreachable block (ram,0x00018053d69b) */
/* WARNING: Removing unreachable block (ram,0x00018053d6aa) */
/* WARNING: Removing unreachable block (ram,0x00018053d6b9) */
/* WARNING: Removing unreachable block (ram,0x00018053d6c5) */
/* WARNING: Removing unreachable block (ram,0x00018053d6d1) */
/* WARNING: Removing unreachable block (ram,0x00018053d6dd) */
/* WARNING: Removing unreachable block (ram,0x00018053d6e9) */
/* WARNING: Removing unreachable block (ram,0x00018053d6f5) */
/* WARNING: Removing unreachable block (ram,0x00018053d701) */
/* WARNING: Removing unreachable block (ram,0x00018053d70d) */
/* WARNING: Removing unreachable block (ram,0x00018053d719) */
/* WARNING: Removing unreachable block (ram,0x00018053d725) */
/* WARNING: Removing unreachable block (ram,0x00018053d731) */

char * FUN_18053d580(char *param_1,longlong param_2)

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
        pcVar19 = (char *)FUN_18053d4e0();
        return pcVar19;
      }
      goto LAB_18053d829;
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
    if (uVar21 == 0 || (ulonglong)uVar2 < 0x10 - uVar21) goto LAB_18053d829;
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
LAB_18053d829:
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
  pcVar19 = (char *)FUN_18053d4e0(param_1,param_2);
  return pcVar19;
}



/* ===== 18053d938 FUN_18053d938 ===== */

void FUN_18053d938(uchar *param_1,uchar *param_2)

{
  _mbsdec_l(param_1,param_2,(_locale_t)0x0);
  return;
}



/* ===== 18053d940 _mbsdec_l ===== */

/* Library Function - Single Match
    _mbsdec_l
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

uchar * __cdecl _mbsdec_l(uchar *_Start,uchar *_Pos,_locale_t _Locale)

{
  undefined4 *puVar1;
  byte *pbVar2;
  longlong local_28 [2];
  longlong local_18;
  char local_10;
  
  if ((_Start == (uchar *)0x0) || (_Pos == (uchar *)0x0)) {
    puVar1 = (undefined4 *)FUN_18051bfb0();
    *puVar1 = 0x16;
    FUN_180527740();
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



/* ===== 18053d9e0 FUN_18053d9e0 ===== */

ulonglong FUN_18053d9e0(longlong param_1,longlong param_2,ulonglong param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong local_20;
  undefined8 local_18;
  char local_10;
  
  if (DAT_180c9f7dc == 0) {
    if ((param_1 == 0) || (param_2 == 0)) {
      puVar3 = (undefined4 *)FUN_18051bfb0();
      *puVar3 = 0x16;
      FUN_180527740();
      return 0x7fffffff;
    }
    if (param_3 < 0x80000000) {
      uVar4 = FUN_18053beb0();
      return uVar4;
    }
  }
  else {
    if (param_3 == 0) {
      return 0;
    }
    if ((param_1 == 0) || (param_2 == 0)) {
      puVar3 = (undefined4 *)FUN_18051bfb0();
      *puVar3 = 0x16;
      FUN_180527740();
      return 0x7fffffff;
    }
    uVar4 = 0x7fffffff;
    if (param_3 < 0x80000000) {
      local_10 = '\0';
      lVar5 = FUN_180529860();
      local_20 = *(longlong *)(lVar5 + 0x90);
      local_18 = *(undefined8 *)(lVar5 + 0x88);
      __acrt_update_locale_info(lVar5,&local_20);
      FUN_1805278dc(lVar5,&local_18);
      if ((*(uint *)(lVar5 + 0x3a8) & 2) == 0) {
        *(uint *)(lVar5 + 0x3a8) = *(uint *)(lVar5 + 0x3a8) | 2;
        local_10 = '\x01';
      }
      if (*(longlong *)(local_20 + 0x130) == 0) {
        uVar1 = FUN_18053beb0(param_1,param_2,param_3);
        if (local_10 != '\0') {
          *(uint *)(lVar5 + 0x3a8) = *(uint *)(lVar5 + 0x3a8) & 0xfffffffd;
        }
        return (ulonglong)uVar1;
      }
      iVar2 = __acrt_CompareStringW
                        (*(longlong *)(local_20 + 0x130),0x1001,param_1,param_3 & 0xffffffff,param_2
                         ,(int)param_3);
      if (iVar2 == 0) {
        puVar3 = (undefined4 *)FUN_18051bfb0();
        *puVar3 = 0x16;
      }
      else {
        uVar4 = (ulonglong)(iVar2 - 2);
      }
      if (local_10 == '\0') {
        return uVar4;
      }
      *(uint *)(lVar5 + 0x3a8) = *(uint *)(lVar5 + 0x3a8) & 0xfffffffd;
      return uVar4;
    }
  }
  puVar3 = (undefined4 *)FUN_18051bfb0();
  *puVar3 = 0x16;
  FUN_180527740();
  return 0x7fffffff;
}



/* ===== 18053db80 FUN_18053db80 ===== */

uint FUN_18053db80(undefined4 param_1)

{
  uint local_res10 [6];
  
  local_res10[0] = 0;
  FUN_180539f50(local_res10,param_1);
  return local_res10[0] & 0x1f;
}



/* ===== 18053dbb0 FUN_18053dbb0 ===== */

undefined8 FUN_18053dbb0(undefined4 *param_1,uint param_2,uint param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  param_3 = param_3 & 0xfff7ffff;
  if ((param_2 & param_3 & 0xfcf0fce0) != 0) {
    if (param_1 != (undefined4 *)0x0) {
      uVar1 = thunk_FUN_18053e390(0,0);
      *param_1 = uVar1;
    }
    puVar2 = (undefined4 *)FUN_18051bfb0();
    *puVar2 = 0x16;
    FUN_180527740();
    return 0x16;
  }
  if (param_1 == (undefined4 *)0x0) {
    thunk_FUN_18053e390(param_2,param_3);
    return 0;
  }
  uVar1 = thunk_FUN_18053e390(param_2,param_3);
  *param_1 = uVar1;
  return 0;
}



/* ===== 18053dc20 FUN_18053dc20 ===== */

undefined8 FUN_18053dc20(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_18053a030();
  *param_1 = uVar1;
  uVar1 = FUN_18053a120();
  param_1[1] = uVar1;
  return 0;
}



/* ===== 18053dc40 FUN_18053dc40 ===== */

bool FUN_18053dc40(int *param_1)

{
  int iVar1;
  undefined8 local_res8;
  
  FUN_18053a180(*param_1);
  FUN_18053a2b0(param_1[1]);
  local_res8 = 0;
  iVar1 = FUN_18053dc20(&local_res8);
  if ((iVar1 == 0) && (*param_1 == (int)local_res8)) {
    return param_1[1] != local_res8._4_4_;
  }
  return true;
}



/* ===== 18053dcb0 FUN_18053dcb0 ===== */

undefined8 FUN_18053dcb0(ulonglong *param_1)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong local_res10 [3];
  
  local_res10[0] = 0;
  iVar2 = FUN_18053dc20(local_res10);
  uVar1 = local_res10[0];
  if (iVar2 == 0) {
    local_res10[0] = local_res10[0] | 0x1f;
    *param_1 = uVar1;
    iVar2 = FUN_18053dc40(local_res10);
    if (iVar2 == 0) {
      FUN_18053e310();
      return 0;
    }
  }
  return 1;
}



/* ===== 18053dd10 FUN_18053dd10 ===== */

double FUN_18053dd10(void)

{
  double dVar1;
  double dVar2;
  ulonglong uVar3;
  double dVar4;
  undefined1 auVar5 [16];
  undefined1 in_XMM0 [16];
  
  dVar4 = in_XMM0._0_8_;
  if (1 < DAT_1809194c8) {
    auVar5 = roundsd(in_XMM0,in_XMM0,10);
    return auVar5._0_8_;
  }
  dVar1 = ABS(dVar4);
  uVar3 = (ulonglong)dVar1 >> 0x34;
  dVar2 = dVar4;
  if (uVar3 < 0x433) {
    if (uVar3 < 0x3ff) {
      if (dVar1 != 0.0) {
        if (dVar4 != dVar1) {
          return -0.0;
        }
        return DAT_1808ac500;
      }
    }
    else {
      dVar2 = (double)(~((1L << (0x33U - (char)uVar3 & 0x3f)) - 1U) & (ulonglong)dVar4);
      if ((dVar4 == dVar1) && (dVar2 != dVar4)) {
        dVar2 = dVar2 + DAT_1808ac500;
      }
    }
  }
  else if (0x7ff0000000000000 < (ulonglong)dVar1) {
    dVar4 = (double)FUN_18052fdb0();
    return dVar4;
  }
  return dVar2;
}



/* ===== 18053dddc __dcrt_lowio_ensure_console_output_initialized ===== */

/* Library Function - Single Match
    __dcrt_lowio_ensure_console_output_initialized
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

bool __dcrt_lowio_ensure_console_output_initialized(void)

{
  if (DAT_18091a138 == (HANDLE)0xfffffffffffffffe) {
    DAT_18091a138 = CreateFileW(L"CONOUT$",0x40000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
  }
  return DAT_18091a138 != (HANDLE)0xffffffffffffffff;
}



/* ===== 18053de30 FUN_18053de30 ===== */

void FUN_18053de30(void)

{
  if (DAT_18091a138 < (HANDLE)0xfffffffffffffffe) {
    CloseHandle(DAT_18091a138);
  }
  return;
}



/* ===== 18053de4c __dcrt_write_console ===== */

/* Library Function - Single Match
    __dcrt_write_console
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

BOOL __dcrt_write_console(void *param_1,DWORD param_2,LPDWORD param_3)

{
  BOOL BVar1;
  DWORD DVar2;
  
  BVar1 = WriteConsoleW(DAT_18091a138,param_1,param_2,param_3,(LPVOID)0x0);
  if (BVar1 == 0) {
    DVar2 = GetLastError();
    if (DVar2 == 6) {
      if (DAT_18091a138 < (HANDLE)0xfffffffffffffffe) {
        CloseHandle(DAT_18091a138);
      }
      DAT_18091a138 =
           CreateFileW(L"CONOUT$",0x40000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
      BVar1 = WriteConsoleW(DAT_18091a138,param_1,param_2,param_3,(LPVOID)0x0);
    }
  }
  return BVar1;
}



/* ===== 18053df0c FUN_18053df0c ===== */

undefined8 FUN_18053df0c(undefined4 *param_1)

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
    *param_1 = DAT_180c9f574;
    uVar2 = 0;
  }
  return uVar2;
}



/* ===== 18053df3c FUN_18053df3c ===== */

undefined8 FUN_18053df3c(uint param_1,int param_2)

{
  byte bVar1;
  char cVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  lVar6 = (longlong)(int)param_1 >> 6;
  uVar4 = (ulonglong)(param_1 & 0x3f);
  lVar3 = (&DAT_180c9f990)[lVar6];
  bVar1 = *(byte *)(lVar3 + 0x38 + uVar4 * 0x48);
  cVar2 = *(char *)(lVar3 + 0x39 + uVar4 * 0x48);
  if (param_2 == 0x4000) {
    *(byte *)(lVar3 + 0x38 + uVar4 * 0x48) = bVar1 | 0x80;
    *(undefined1 *)((&DAT_180c9f990)[lVar6] + 0x39 + uVar4 * 0x48) = 0;
  }
  else if (param_2 == 0x8000) {
    *(byte *)(lVar3 + 0x38 + uVar4 * 0x48) = bVar1 & 0x7f;
  }
  else if ((param_2 - 0x10000U & 0xfffeffff) == 0) {
    *(byte *)(lVar3 + 0x38 + uVar4 * 0x48) = bVar1 | 0x80;
    *(undefined1 *)((&DAT_180c9f990)[lVar6] + 0x39 + uVar4 * 0x48) = 2;
  }
  else if (param_2 == 0x40000) {
    *(byte *)(lVar3 + 0x38 + uVar4 * 0x48) = bVar1 | 0x80;
    *(undefined1 *)((&DAT_180c9f990)[lVar6] + 0x39 + uVar4 * 0x48) = 1;
  }
  if ((bVar1 & 0x80) == 0) {
    uVar5 = 0x8000;
  }
  else if (cVar2 == '\0') {
    uVar5 = 0x4000;
  }
  else {
    uVar5 = 0x10000;
    if (cVar2 == '\x01') {
      uVar5 = 0x40000;
    }
  }
  return uVar5;
}



/* ===== 18053e020 FUN_18053e020 ===== */

undefined4 FUN_18053e020(undefined4 param_1,undefined8 param_2)

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
  local_20 = DAT_180c9f7dc == 0;
  local_38 = 0;
  local_18 = '\0';
  local_10 = '\0';
  if ((bool)local_20) {
    local_30 = PTR_PTR_1809198b8._0_4_;
    uStack_2c = PTR_PTR_1809198b8._4_4_;
    uStack_28 = PTR_DAT_1809198c0._0_4_;
    uStack_24 = PTR_DAT_1809198c0._4_4_;
    param_1 = PTR_PTR_1809198b8._0_4_;
  }
  uVar1 = FUN_18053e0b8(param_1,param_2,local_48);
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



/* ===== 18053e0b8 FUN_18053e0b8 ===== */

undefined4 FUN_18053e0b8(ulonglong param_1,longlong param_2,longlong param_3)

{
  undefined4 uVar1;
  int iVar2;
  BOOL BVar3;
  DWORD DVar4;
  longlong lVar5;
  longlong lVar6;
  HANDLE hFile;
  ulonglong uVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  uVar10 = param_1 & 0xffffffff;
  lVar5 = FUN_18052de38(param_1,0,1);
  lVar6 = FUN_18052de38(uVar10,0,2);
  uVar7 = param_2 - lVar6;
  if ((lVar5 == -1) || (lVar6 == -1)) {
    if (*(char *)(param_3 + 0x30) == '\0') {
      uVar8 = 0x16;
      goto LAB_18053e217;
    }
  }
  else {
    uVar8 = 0;
    if (0 < (longlong)uVar7) {
      lVar6 = _calloc_base(0x1000,1);
      if (lVar6 == 0) {
        uVar8 = 0xc;
        *(undefined1 *)(param_3 + 0x30) = 1;
        *(undefined4 *)(param_3 + 0x2c) = 0xc;
      }
      else {
        uVar1 = FUN_18053df3c(param_1 & 0xffffffff,0x8000);
        do {
          uVar9 = uVar7 & 0xffffffff;
          if (0xfff < (longlong)uVar7) {
            uVar9 = 0x1000;
          }
          iVar2 = FUN_18052b4cc(uVar10,lVar6,uVar9,param_3);
          if (iVar2 == -1) {
            if ((*(char *)(param_3 + 0x38) != '\0') && (*(int *)(param_3 + 0x34) == 5)) {
              *(undefined1 *)(param_3 + 0x30) = 1;
              *(undefined4 *)(param_3 + 0x2c) = 0xd;
            }
            if (*(char *)(param_3 + 0x30) != '\0') {
              uVar8 = *(undefined4 *)(param_3 + 0x2c);
            }
            goto LAB_18053e1a9;
          }
          uVar7 = uVar7 - (longlong)iVar2;
        } while (0 < (longlong)uVar7);
        FUN_18053df3c(uVar10,uVar1);
      }
LAB_18053e1a9:
      FUN_1805277b0(lVar6);
      goto LAB_18053e217;
    }
    if (-1 < (longlong)uVar7) goto LAB_18053e217;
    lVar6 = FUN_18052de38(param_1 & 0xffffffff,param_2,0);
    if (lVar6 != -1) {
      hFile = (HANDLE)FUN_180517f94(param_1 & 0xffffffff);
      BVar3 = SetEndOfFile(hFile);
      if (BVar3 == 0) {
        DVar4 = GetLastError();
        *(undefined1 *)(param_3 + 0x38) = 1;
        uVar8 = 0xd;
        *(DWORD *)(param_3 + 0x34) = DVar4;
        *(undefined1 *)(param_3 + 0x30) = 1;
        *(undefined4 *)(param_3 + 0x2c) = 0xd;
      }
      goto LAB_18053e217;
    }
    if (*(char *)(param_3 + 0x30) == '\0') goto LAB_18053e217;
  }
  uVar8 = *(undefined4 *)(param_3 + 0x2c);
LAB_18053e217:
  FUN_18052de38(uVar10,lVar5,0);
  return uVar8;
}



/* ===== 18053e248 __acrt_CompareStringW ===== */

/* Library Function - Single Match
    __acrt_CompareStringW
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

ulonglong __acrt_CompareStringW
                    (undefined8 param_1,undefined4 param_2,undefined8 param_3,int param_4,
                    undefined8 param_5,int param_6)

{
  ulonglong uVar1;
  
  if (0 < param_4) {
    param_4 = FUN_180512dc0(param_3,(longlong)param_4);
  }
  if (0 < param_6) {
    param_6 = FUN_180512dc0(param_5,(longlong)param_6);
  }
  if ((param_4 == 0) || (param_6 == 0)) {
    uVar1 = (ulonglong)((param_4 - param_6 >> 0x1f & 0xfffffffeU) + 3);
    if (param_4 - param_6 == 0) {
      uVar1 = 2;
    }
  }
  else {
    uVar1 = FUN_18052c688(param_1,param_2,param_3,param_4,param_5,param_6,0,0,0);
  }
  return uVar1;
}



/* ===== 18053e310 FUN_18053e310 ===== */

uint FUN_18053e310(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = FUN_18052efd0();
  if ((uVar1 & 0x3f) == 0) {
    uVar4 = 0;
  }
  else {
    uVar2 = (uVar1 & 1) << 4;
    uVar4 = uVar2 | 8;
    if ((uVar1 & 4) == 0) {
      uVar4 = uVar2;
    }
    uVar2 = uVar4 | 4;
    if ((uVar1 & 8) == 0) {
      uVar2 = uVar4;
    }
    uVar3 = uVar2 | 2;
    if ((uVar1 & 0x10) == 0) {
      uVar3 = uVar2;
    }
    uVar4 = uVar3 | 1;
    if ((uVar1 & 0x20) == 0) {
      uVar4 = uVar3;
    }
    if ((uVar1 & 2) != 0) {
      return uVar4 | 0x80000;
    }
  }
  return uVar4;
}



/* ===== 18053e380 thunk_FUN_18053e390 ===== */

uint thunk_FUN_18053e390(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = FUN_18052f070();
  uVar4 = uVar1 >> 3 & 0x10;
  uVar2 = uVar4 | 8;
  if ((uVar1 >> 9 & 1) == 0) {
    uVar2 = uVar4;
  }
  uVar4 = uVar2 | 4;
  if ((uVar1 >> 10 & 1) == 0) {
    uVar4 = uVar2;
  }
  uVar2 = uVar4 | 2;
  if ((uVar1 >> 0xb & 1) == 0) {
    uVar2 = uVar4;
  }
  uVar4 = uVar2 | 1;
  if ((uVar1 >> 0xc & 1) == 0) {
    uVar4 = uVar2;
  }
  uVar2 = uVar4 | 0x80000;
  if ((uVar1 >> 8 & 1) == 0) {
    uVar2 = uVar4;
  }
  uVar4 = uVar1 & 0x6000;
  if (uVar4 != 0) {
    if (uVar4 == 0x2000) {
      uVar2 = uVar2 | 0x100;
    }
    else if (uVar4 == 0x4000) {
      uVar2 = uVar2 | 0x200;
    }
    else if (uVar4 == 0x6000) {
      uVar2 = uVar2 | 0x300;
    }
  }
  uVar1 = uVar1 & 0x8040;
  if (uVar1 == 0x40) {
    uVar2 = uVar2 | 0x2000000;
  }
  else if (uVar1 == 0x8000) {
    uVar2 = uVar2 | 0x3000000;
  }
  else if (uVar1 == 0x8040) {
    uVar2 = uVar2 | 0x1000000;
  }
  uVar1 = ~(param_2 & 0x308031f) & uVar2 | param_1 & param_2 & 0x308031f;
  if (uVar1 != uVar2) {
    uVar4 = (uVar1 & 0x10) << 3;
    uVar2 = uVar4 | 0x200;
    if ((uVar1 & 8) == 0) {
      uVar2 = uVar4;
    }
    uVar4 = uVar2 | 0x400;
    if ((uVar1 & 4) == 0) {
      uVar4 = uVar2;
    }
    uVar2 = uVar4 | 0x800;
    if ((uVar1 & 2) == 0) {
      uVar2 = uVar4;
    }
    uVar4 = uVar2 | 0x1000;
    if ((uVar1 & 1) == 0) {
      uVar4 = uVar2;
    }
    uVar3 = uVar4 | 0x100;
    if ((uVar1 >> 0x13 & 1) == 0) {
      uVar3 = uVar4;
    }
    uVar2 = uVar1 & 0x300;
    if (uVar2 != 0) {
      if (uVar2 == 0x100) {
        uVar3 = uVar3 | 0x2000;
      }
      else if (uVar2 == 0x200) {
        uVar3 = uVar3 | 0x4000;
      }
      else if (uVar2 == 0x300) {
        uVar3 = uVar3 | 0x6000;
      }
    }
    uVar1 = uVar1 & 0x3000000;
    if (uVar1 == 0x1000000) {
      uVar3 = uVar3 | 0x8040;
    }
    else if (uVar1 == 0x2000000) {
      uVar3 = uVar3 | 0x40;
    }
    else if (uVar1 == 0x3000000) {
      uVar3 = uVar3 | 0x8000;
    }
    if ((DAT_18091a140 == '\0') || ((uVar3 & 0x40) == 0)) {
      uVar3 = uVar3 & 0xffffffbf;
      FUN_18052f080(uVar3);
    }
    else {
      FUN_18052f080(uVar3);
    }
    uVar1 = uVar3 >> 3 & 0x10;
    uVar2 = uVar1 | 8;
    if ((uVar3 >> 9 & 1) == 0) {
      uVar2 = uVar1;
    }
    uVar1 = uVar2 | 4;
    if ((uVar3 >> 10 & 1) == 0) {
      uVar1 = uVar2;
    }
    uVar2 = uVar1 | 2;
    if ((uVar3 >> 0xb & 1) == 0) {
      uVar2 = uVar1;
    }
    uVar1 = uVar2 | 1;
    if ((uVar3 >> 0xc & 1) == 0) {
      uVar1 = uVar2;
    }
    uVar2 = uVar1 | 0x80000;
    if ((uVar3 >> 8 & 1) == 0) {
      uVar2 = uVar1;
    }
    uVar1 = uVar3 & 0x6000;
    if (uVar1 != 0) {
      if (uVar1 == 0x2000) {
        uVar2 = uVar2 | 0x100;
      }
      else if (uVar1 == 0x4000) {
        uVar2 = uVar2 | 0x200;
      }
      else if (uVar1 == 0x6000) {
        uVar2 = uVar2 | 0x300;
      }
    }
    uVar3 = uVar3 & 0x8040;
    if (uVar3 == 0x40) {
      uVar2 = uVar2 | 0x2000000;
    }
    else {
      if (uVar3 == 0x8000) {
        return uVar2 | 0x3000000;
      }
      if (uVar3 == 0x8040) {
        return uVar2 | 0x1000000;
      }
    }
  }
  return uVar2;
}



/* ===== 18053e390 FUN_18053e390 ===== */

uint FUN_18053e390(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = FUN_18052f070();
  uVar4 = uVar1 >> 3 & 0x10;
  uVar2 = uVar4 | 8;
  if ((uVar1 >> 9 & 1) == 0) {
    uVar2 = uVar4;
  }
  uVar4 = uVar2 | 4;
  if ((uVar1 >> 10 & 1) == 0) {
    uVar4 = uVar2;
  }
  uVar2 = uVar4 | 2;
  if ((uVar1 >> 0xb & 1) == 0) {
    uVar2 = uVar4;
  }
  uVar4 = uVar2 | 1;
  if ((uVar1 >> 0xc & 1) == 0) {
    uVar4 = uVar2;
  }
  uVar2 = uVar4 | 0x80000;
  if ((uVar1 >> 8 & 1) == 0) {
    uVar2 = uVar4;
  }
  uVar4 = uVar1 & 0x6000;
  if (uVar4 != 0) {
    if (uVar4 == 0x2000) {
      uVar2 = uVar2 | 0x100;
    }
    else if (uVar4 == 0x4000) {
      uVar2 = uVar2 | 0x200;
    }
    else if (uVar4 == 0x6000) {
      uVar2 = uVar2 | 0x300;
    }
  }
  uVar1 = uVar1 & 0x8040;
  if (uVar1 == 0x40) {
    uVar2 = uVar2 | 0x2000000;
  }
  else if (uVar1 == 0x8000) {
    uVar2 = uVar2 | 0x3000000;
  }
  else if (uVar1 == 0x8040) {
    uVar2 = uVar2 | 0x1000000;
  }
  uVar1 = ~(param_2 & 0x308031f) & uVar2 | param_1 & param_2 & 0x308031f;
  if (uVar1 != uVar2) {
    uVar4 = (uVar1 & 0x10) << 3;
    uVar2 = uVar4 | 0x200;
    if ((uVar1 & 8) == 0) {
      uVar2 = uVar4;
    }
    uVar4 = uVar2 | 0x400;
    if ((uVar1 & 4) == 0) {
      uVar4 = uVar2;
    }
    uVar2 = uVar4 | 0x800;
    if ((uVar1 & 2) == 0) {
      uVar2 = uVar4;
    }
    uVar4 = uVar2 | 0x1000;
    if ((uVar1 & 1) == 0) {
      uVar4 = uVar2;
    }
    uVar3 = uVar4 | 0x100;
    if ((uVar1 >> 0x13 & 1) == 0) {
      uVar3 = uVar4;
    }
    uVar2 = uVar1 & 0x300;
    if (uVar2 != 0) {
      if (uVar2 == 0x100) {
        uVar3 = uVar3 | 0x2000;
      }
      else if (uVar2 == 0x200) {
        uVar3 = uVar3 | 0x4000;
      }
      else if (uVar2 == 0x300) {
        uVar3 = uVar3 | 0x6000;
      }
    }
    uVar1 = uVar1 & 0x3000000;
    if (uVar1 == 0x1000000) {
      uVar3 = uVar3 | 0x8040;
    }
    else if (uVar1 == 0x2000000) {
      uVar3 = uVar3 | 0x40;
    }
    else if (uVar1 == 0x3000000) {
      uVar3 = uVar3 | 0x8000;
    }
    if ((DAT_18091a140 == '\0') || ((uVar3 & 0x40) == 0)) {
      uVar3 = uVar3 & 0xffffffbf;
      FUN_18052f080(uVar3);
    }
    else {
      FUN_18052f080(uVar3);
    }
    uVar1 = uVar3 >> 3 & 0x10;
    uVar2 = uVar1 | 8;
    if ((uVar3 >> 9 & 1) == 0) {
      uVar2 = uVar1;
    }
    uVar1 = uVar2 | 4;
    if ((uVar3 >> 10 & 1) == 0) {
      uVar1 = uVar2;
    }
    uVar2 = uVar1 | 2;
    if ((uVar3 >> 0xb & 1) == 0) {
      uVar2 = uVar1;
    }
    uVar1 = uVar2 | 1;
    if ((uVar3 >> 0xc & 1) == 0) {
      uVar1 = uVar2;
    }
    uVar2 = uVar1 | 0x80000;
    if ((uVar3 >> 8 & 1) == 0) {
      uVar2 = uVar1;
    }
    uVar1 = uVar3 & 0x6000;
    if (uVar1 != 0) {
      if (uVar1 == 0x2000) {
        uVar2 = uVar2 | 0x100;
      }
      else if (uVar1 == 0x4000) {
        uVar2 = uVar2 | 0x200;
      }
      else if (uVar1 == 0x6000) {
        uVar2 = uVar2 | 0x300;
      }
    }
    uVar3 = uVar3 & 0x8040;
    if (uVar3 == 0x40) {
      uVar2 = uVar2 | 0x2000000;
    }
    else {
      if (uVar3 == 0x8000) {
        return uVar2 | 0x3000000;
      }
      if (uVar3 == 0x8040) {
        return uVar2 | 0x1000000;
      }
    }
  }
  return uVar2;
}



/* ===== 18053e630 FUN_18053e630 ===== */

longlong FUN_18053e630(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  uint uVar2;
  
  uVar2 = 0;
  param_1 = *(int *)(param_1 + 0x3c) + param_1;
  lVar1 = (ulonglong)*(ushort *)(param_1 + 0x14) + 0x18 + param_1;
  if (*(ushort *)(param_1 + 6) != 0) {
    do {
      if ((*(uint *)(lVar1 + 0xc) <= param_2) &&
         (param_2 < *(int *)(lVar1 + 8) + *(uint *)(lVar1 + 0xc))) {
        return lVar1;
      }
      uVar2 = uVar2 + 1;
      lVar1 = lVar1 + 0x28;
    } while (uVar2 < *(ushort *)(param_1 + 6));
  }
  return 0;
}



/* ===== 18053e680 FUN_18053e680 ===== */

ulonglong FUN_18053e680(longlong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  
  uVar1 = FUN_18053e6d0(0x180000000);
  if ((int)uVar1 != 0) {
    lVar2 = FUN_18053e630(0x180000000,param_1 + -0x180000000);
    uVar1 = 0;
    if (lVar2 != 0) {
      uVar1 = (ulonglong)(~*(uint *)(lVar2 + 0x24) >> 0x1f);
    }
  }
  return uVar1;
}



/* ===== 18053e6d0 FUN_18053e6d0 ===== */

bool FUN_18053e6d0(short *param_1)

{
  if ((*param_1 == 0x5a4d) &&
     (*(int *)((longlong)*(int *)(param_1 + 0x1e) + (longlong)param_1) == 0x4550)) {
    return (short)((int *)((longlong)*(int *)(param_1 + 0x1e) + (longlong)param_1))[6] == 0x20b;
  }
  return false;
}



/* ===== 18053e700 FUN_18053e700 ===== */

undefined8 FUN_18053e700(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  uint uVar1;
  uint *puVar2;
  undefined8 uVar3;
  
  puVar2 = *(uint **)(param_4 + 0x38);
  uVar1 = *puVar2;
  FUN_1804ed8e0(param_2,param_4,puVar2 + (ulonglong)uVar1 * 4 + 1);
  if ((puVar2[(ulonglong)uVar1 * 4 + 1] & ((*(byte *)(param_1 + 4) & 0x66) != 0) + 1) == 0) {
    return 1;
  }
  uVar3 = FUN_1804eee20(param_1,param_2,param_3,param_4);
  return uVar3;
}



/* ===== 18053e780 FUN_18053e780 ===== */

undefined8 FUN_18053e780(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_4 + 0x38);
  FUN_1804ed8e0(param_2,param_4,lVar1 + 4);
  if ((*(uint *)(lVar1 + 4) & ((*(byte *)(param_1 + 4) & 0x66) != 0) + 1) == 0) {
    return 1;
  }
  uVar2 = FUN_1804eeb40(param_1,param_2,param_3,param_4);
  return uVar2;
}



/* ===== 18053e7f0 FUN_18053e7f0 ===== */

void FUN_18053e7f0(PVOID param_1,PVOID param_2)

{
  RtlUnwind(param_1,param_2,(PEXCEPTION_RECORD)0x0,(PVOID)0x0);
  return;
}



/* ===== 18053e820 FUN_18053e820 ===== */

void FUN_18053e820(int *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = FUN_1804eee20();
  if ((((*(byte *)(param_1 + 1) & 0x66) == 0) && (*param_1 == -0x1f928c9d)) && (iVar2 == 1)) {
    lVar1 = FUN_1804ef840();
    *(int **)(lVar1 + 0x20) = param_1;
    lVar1 = FUN_1804ef840();
    *(undefined8 *)(lVar1 + 0x28) = param_3;
                    /* WARNING: Subroutine does not return */
    FUN_180515f70();
  }
  return;
}



/* ===== 18053e870 FUN_18053e870 ===== */

/* WARNING: Removing unreachable block (ram,0x00018053e8f7) */
/* WARNING: Removing unreachable block (ram,0x00018053e900) */

undefined1 (*) [16] FUN_18053e870(undefined1 (*param_1) [16],ushort param_2)

{
  undefined1 *puVar1;
  undefined1 (*pauVar2) [16];
  undefined1 (*pauVar3) [16];
  uint uVar4;
  int iVar5;
  undefined1 (*pauVar6) [16];
  bool bVar7;
  bool bVar8;
  
  pauVar3 = param_1;
  if (DAT_1809194c8 < 2) {
    do {
      puVar1 = *pauVar3;
      pauVar3 = (undefined1 (*) [16])(*pauVar3 + 2);
    } while (*(short *)puVar1 != 0);
    do {
      pauVar2 = pauVar3 + -1;
      pauVar3 = (undefined1 (*) [16])(pauVar3[-1] + 0xe);
      if (pauVar3 == param_1) {
        pauVar6 = (undefined1 (*) [16])0x0;
        if (*(ushort *)(*pauVar2 + 0xe) == param_2) {
          pauVar6 = pauVar3;
        }
        return pauVar6;
      }
    } while (*(ushort *)(*pauVar2 + 0xe) != param_2);
    return pauVar3;
  }
  uVar4 = (int)param_1 + 1;
  pauVar3 = (undefined1 (*) [16])0x0;
  while( true ) {
    if ((uVar4 & 0xe) == 0) {
      bVar7 = param_2 != 0;
      if (param_2 == 0) {
        iVar5 = pcmpistri(ZEXT416(0xffff0001),*param_1,0x15);
        return (undefined1 (*) [16])(*param_1 + (longlong)iVar5 * 2);
      }
      bVar8 = false;
      while( true ) {
        iVar5 = pcmpistri(ZEXT216(param_2),*param_1,0x41);
        if (bVar7) {
          pauVar3 = (undefined1 (*) [16])(*param_1 + (longlong)iVar5 * 2);
          pcmpistri(ZEXT216(param_2),*param_1,0x41);
        }
        if (bVar8) break;
        bVar7 = (undefined1 (*) [16])0xffffffffffffffef < param_1;
        param_1 = param_1 + 1;
        bVar8 = param_1 == (undefined1 (*) [16])0x0;
      }
      return pauVar3;
    }
    if (*(ushort *)*param_1 == param_2) {
      pauVar3 = param_1;
    }
    if (*(ushort *)*param_1 == 0) break;
    uVar4 = (int)param_1 + 3;
    param_1 = (undefined1 (*) [16])(*param_1 + 2);
  }
  return pauVar3;
}



/* ===== 18053e950 FUN_18053e950 ===== */

ushort * FUN_18053e950(ushort *param_1,ushort param_2)

{
  uint uVar1;
  ushort *puVar2;
  undefined1 auVar3 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  ushort uVar6;
  ushort uVar7;
  
  auVar4 = pshuflw(in_XMM1,ZEXT416((uint)param_2),0);
  while( true ) {
    for (; ((uint)param_1 & 0xfff) < 0xff1; param_1 = param_1 + 8) {
      auVar5._0_2_ = -(ushort)(*param_1 == 0);
      auVar5._2_2_ = -(ushort)(param_1[1] == 0);
      auVar5._4_2_ = -(ushort)(param_1[2] == 0);
      auVar5._6_2_ = -(ushort)(param_1[3] == 0);
      auVar5._8_2_ = -(ushort)(param_1[4] == 0);
      auVar5._10_2_ = -(ushort)(param_1[5] == 0);
      auVar5._12_2_ = -(ushort)(param_1[6] == 0);
      auVar5._14_2_ = -(ushort)(param_1[7] == 0);
      uVar6 = auVar4._0_2_;
      auVar3._0_2_ = -(ushort)(*param_1 == uVar6);
      uVar7 = auVar4._2_2_;
      auVar3._2_2_ = -(ushort)(param_1[1] == uVar7);
      auVar3._4_2_ = -(ushort)(param_1[2] == uVar6);
      auVar3._6_2_ = -(ushort)(param_1[3] == uVar7);
      auVar3._8_2_ = -(ushort)(param_1[4] == uVar6);
      auVar3._10_2_ = -(ushort)(param_1[5] == uVar7);
      auVar3._12_2_ = -(ushort)(param_1[6] == uVar6);
      auVar3._14_2_ = -(ushort)(param_1[7] == uVar7);
      auVar5 = auVar5 | auVar3;
      uVar6 = (ushort)(SUB161(auVar5 >> 7,0) & 1) | (ushort)(SUB161(auVar5 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar5 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar5 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar5 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar5 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar5 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar5 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar5 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar5 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar5 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar5 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar5 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar5 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar5 >> 0x77,0) & 1) << 0xe |
              (ushort)(byte)(auVar5[0xf] >> 7) << 0xf;
      if (uVar6 != 0) {
        uVar1 = 0;
        if (uVar6 != 0) {
          for (; (uVar6 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
          }
        }
        puVar2 = (ushort *)0x0;
        if ((uint)*(ushort *)((ulonglong)uVar1 + (longlong)param_1) == (uint)param_2) {
          puVar2 = (ushort *)((ulonglong)uVar1 + (longlong)param_1);
        }
        return puVar2;
      }
    }
    if (*param_1 == param_2) {
      return param_1;
    }
    if (*param_1 == 0) break;
    param_1 = param_1 + 1;
  }
  return (ushort *)0x0;
}



/* ===== 18053e9e0 thunk_FUN_1805266e0 ===== */

uint thunk_FUN_1805266e0(uint param_1)

{
  if ((param_1 & 0x7f800000) == 0x7f800000) {
    return (uint)(ushort)(((param_1 & 0x7fffff) != 0) + 1);
  }
  if ((param_1 & 0x7f800000) == 0) {
    return CONCAT22((short)(-(param_1 & 0x7fffffff) >> 0x10),-(ushort)((param_1 & 0x7fffffff) != 0))
           & 0xfffffffe;
  }
  return 0xffffffff;
}



