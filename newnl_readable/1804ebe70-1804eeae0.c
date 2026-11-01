/* ===== 1804ebe70 FUN_1804ebe70 ===== */

void FUN_1804ebe70(undefined8 param_1,code *UNRECOVERED_JUMPTABLE,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001804ebe76. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_3);
  return;
}



/* ===== 1804ebe80 FUN_1804ebe80 ===== */

void FUN_1804ebe80(undefined8 param_1,code *UNRECOVERED_JUMPTABLE,undefined8 param_3,
                  undefined4 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x0001804ebe8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_3,param_4);
  return;
}



/* ===== 1804ebe90 FUN_1804ebe90 ===== */

/* WARNING: Switch with 1 destination removed at 0x0001804ebf2c */

void FUN_1804ebe90(undefined8 param_1,longlong *param_2,byte *param_3,longlong param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  if (((*param_3 & 1) == 0) && (iVar1 = *(int *)(param_3 + 0x18), iVar1 != 0)) {
    uVar2 = FUN_1804eed30(param_2,param_3 + 8);
    if ((*param_3 & 4) == 0) {
      FUN_1804ebe70(param_1,param_4 + iVar1,uVar2);
    }
    else {
      FUN_1804ebe80();
    }
  }
  else {
    FUN_180540530(param_1,param_2,(longlong)*(int *)(param_3 + 0x14));
    if (((*param_3 & 8) != 0) && ((longlong *)*param_2 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001805400f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)*param_2 + 8))();
      return;
    }
  }
  return;
}



/* ===== 1804ebf40 FUN_1804ebf40 ===== */

void FUN_1804ebf40(void)

{
  thunk_FUN_1805277b0();
  return;
}



/* ===== 1804ebf50 FUN_1804ebf50 ===== */

void FUN_1804ebf50(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if ((*(int *)(param_1 + 0x10) == -0x1f928c9d) && (*(int *)(param_1 + 0x28) == 4)) {
    if ((*(int *)(param_1 + 0x30) + 0xe66cfae0U < 3) || (*(int *)(param_1 + 0x30) == 0x1994000)) {
      lVar1 = *(longlong *)(param_1 + 0x40);
      if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      plVar2 = *(longlong **)(param_1 + 0x38);
      if (plVar2 != (longlong *)0x0) {
        lVar3 = *(longlong *)(param_1 + 0x48);
        if (*(int *)(lVar1 + 4) != 0) {
          FUN_1804ebe60(plVar2,lVar3 + *(int *)(lVar1 + 4));
          return;
        }
        if (((*(byte *)(*(int *)((longlong)*(int *)(lVar1 + 0xc) + 4 + lVar3) + lVar3) & 8) != 0) &&
           (*plVar2 != 0)) {
          (*(code *)PTR__guard_dispatch_icall_18056b850)();
        }
      }
    }
  }
  return;
}



/* ===== 1804ebfe0 FUN_1804ebfe0 ===== */

void FUN_1804ebfe0(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  if (param_2[1] != 0) {
    LOCK();
    piVar1 = (int *)(param_2[1] + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  uVar3 = param_2[1];
  *param_1 = *param_2;
  lVar4 = param_1[1];
  param_1[1] = uVar3;
  if (lVar4 != 0) {
    LOCK();
    piVar1 = (int *)(lVar4 + 8);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (*(code *)PTR__guard_dispatch_icall_18056b850)(lVar4);
      LOCK();
      piVar1 = (int *)(lVar4 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (*(code *)PTR__guard_dispatch_icall_18056b850)(lVar4);
      }
    }
  }
  return;
}



/* ===== 1804ec080 FUN_1804ec080 ===== */

void FUN_1804ec080(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  if (param_2[1] != 0) {
    LOCK();
    piVar1 = (int *)(param_2[1] + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  return;
}



/* ===== 1804ec0b0 FUN_1804ec0b0 ===== */

void FUN_1804ec0b0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



/* ===== 1804ec0c0 FUN_1804ec0c0 ===== */

void FUN_1804ec0c0(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  puVar3 = (undefined8 *)FUN_1804eedd0();
  piVar2 = (int *)*puVar3;
  if (((piVar2 != (int *)0x0) && (iVar1 = *piVar2, iVar1 != -0x1fbcb0b3)) && (iVar1 != -0x1fbcbcae))
  {
    if (((iVar1 == -0x1f928c9d) && (piVar2[6] == 4)) &&
       ((piVar2[8] + 0xe66cfae0U < 3 || (piVar2[8] == 0x1994000)))) {
      FUN_1804ebb30(param_1,piVar2);
      return;
    }
    uVar4 = _malloc_base(0xb0);
    FUN_1804ebd10(param_1,piVar2,uVar4);
  }
  return;
}



/* ===== 1804ec150 FUN_1804ec150 ===== */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804ec150(longlong *param_1)

{
  int iVar1;
  DWORD *pDVar2;
  longlong lVar3;
  DWORD dwExceptionCode;
  DWORD dwExceptionFlags;
  DWORD nNumberOfArguments;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 *puVar6;
  undefined *puStack_100;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [32];
  DWORD local_b8;
  DWORD DStack_b4;
  DWORD DStack_b0;
  DWORD DStack_ac;
  DWORD local_a8;
  DWORD DStack_a4;
  DWORD DStack_a0;
  DWORD DStack_9c;
  ULONG_PTR local_98;
  undefined1 *puStack_90;
  longlong local_88;
  longlong lStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  DWORD local_38;
  DWORD DStack_34;
  DWORD DStack_30;
  DWORD DStack_2c;
  undefined8 local_28;
  ulonglong local_18;
  
  puVar6 = auStack_f8;
  local_18 = DAT_180919500 ^ (ulonglong)local_d8;
  pDVar2 = (DWORD *)*param_1;
  if (pDVar2 == (DWORD *)0x0) {
    puStack_100 = (undefined *)0x1804ec187;
    FUN_1804eb830(local_d8);
                    /* WARNING: Subroutine does not return */
    puStack_100 = &UNK_1804ec197;
    FUN_1804ef5f0(local_d8,&DAT_180915c68);
  }
  local_b8 = *pDVar2;
  DStack_b4 = pDVar2[1];
  DStack_b0 = pDVar2[2];
  DStack_ac = pDVar2[3];
  local_a8 = pDVar2[4];
  DStack_a4 = pDVar2[5];
  DStack_a0 = pDVar2[6];
  DStack_9c = pDVar2[7];
  local_98 = *(ULONG_PTR *)(pDVar2 + 8);
  puStack_90 = *(undefined1 **)(pDVar2 + 10);
  local_88 = *(longlong *)(pDVar2 + 0xc);
  lStack_80 = *(longlong *)(pDVar2 + 0xe);
  local_78 = *(undefined8 *)(pDVar2 + 0x10);
  uStack_70 = *(undefined8 *)(pDVar2 + 0x12);
  local_68 = *(undefined8 *)(pDVar2 + 0x14);
  uStack_60 = *(undefined8 *)(pDVar2 + 0x16);
  local_58 = *(undefined8 *)(pDVar2 + 0x18);
  uStack_50 = *(undefined8 *)(pDVar2 + 0x1a);
  local_48 = *(undefined8 *)(pDVar2 + 0x1c);
  uStack_40 = *(undefined8 *)(pDVar2 + 0x1e);
  local_38 = pDVar2[0x20];
  DStack_34 = pDVar2[0x21];
  DStack_30 = pDVar2[0x22];
  DStack_2c = pDVar2[0x23];
  local_28 = *(undefined8 *)(pDVar2 + 0x24);
  if (((local_b8 == 0xe06d7363) && (puVar6 = auStack_f8, DStack_a0 == 4)) &&
     (((int)local_98 + 0xe66cfae0U < 3 || (puVar6 = auStack_f8, (int)local_98 == 0x1994000)))) {
    if ((((puStack_90 == (undefined1 *)0x0) || (local_88 == 0)) ||
        (iVar1 = *(int *)(local_88 + 0xc), iVar1 == 0)) || (*(int *)(iVar1 + lStack_80) < 1)) {
                    /* WARNING: Subroutine does not return */
      puStack_100 = &UNK_1804ec2f5;
      abort();
    }
    uVar4 = (ulonglong)*(int *)(*(int *)((longlong)iVar1 + 4 + lStack_80) + lStack_80 + 0x14);
    uVar5 = uVar4 + 0xf;
    if (uVar5 <= uVar4) {
      uVar5 = 0xffffffffffffff0;
    }
    puStack_100 = (undefined *)0x1804ec2a5;
    lVar3 = -(uVar5 & 0xfffffffffffffff0);
    *(undefined8 *)(auStack_f8 + lVar3 + -8) = 0x1804ec2b5;
    FUN_1804ebe90(local_d8 + lVar3);
    puVar6 = auStack_f8 + lVar3;
    puStack_90 = local_d8 + lVar3;
  }
  nNumberOfArguments = DStack_a0;
  dwExceptionFlags = DStack_b4;
  dwExceptionCode = local_b8;
  *(undefined8 *)(puVar6 + -8) = 0x1804ec2d1;
  RaiseException(dwExceptionCode,dwExceptionFlags,nNumberOfArguments,&local_98);
  *(undefined8 *)(puVar6 + -8) = 0x1804ec2e0;
  return;
}



/* ===== 1804ec300 FUN_1804ec300 ===== */

bool FUN_1804ec300(longlong *param_1)

{
  return *param_1 != 0;
}



/* ===== 1804ec310 FUN_1804ec310 ===== */

undefined8 * FUN_1804ec310(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  return param_1;
}



/* ===== 1804ec320 FUN_1804ec320 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804ec320(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_180919500 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  if (*(longlong *)(param_2 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4cb0();
  }
  (*(code *)PTR__guard_dispatch_icall_18056b850)();
  lVar1 = *(longlong *)(param_2 + 0x38);
  if (lVar1 != 0) {
    (*(code *)PTR__guard_dispatch_icall_18056b850)(lVar1,lVar1 != param_2);
    *(undefined8 *)(param_2 + 0x38) = 0;
  }
  return;
}



/* ===== 1804ec3b0 FUN_1804ec3b0 ===== */

void FUN_1804ec3b0(undefined8 *param_1)

{
  if ((PTP_WORK)*param_1 != (PTP_WORK)0x0) {
    CloseThreadpoolWork((PTP_WORK)*param_1);
    *param_1 = 0;
  }
  return;
}



/* ===== 1804ec3e0 FUN_1804ec3e0 ===== */

DWORD FUN_1804ec3e0(undefined8 *param_1)

{
  BOOL BVar1;
  DWORD DVar2;
  PTP_WORK p_Var3;
  IMAGE_DOS_HEADER *local_res8 [4];
  
  p_Var3 = CreateThreadpoolWork(FUN_1804ec470,param_1,(PTP_CALLBACK_ENVIRON)0x0);
  *param_1 = p_Var3;
  if (p_Var3 == (PTP_WORK)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001804ec45a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    DVar2 = GetLastError();
    return DVar2;
  }
  BVar1 = GetModuleHandleExW(2,(LPCWSTR)0x0,(HMODULE *)local_res8);
  if (((BVar1 == 0) || (local_res8[0] == (IMAGE_DOS_HEADER *)0x0)) ||
     (local_res8[0] != &IMAGE_DOS_HEADER_180000000)) {
    GetModuleHandleExW(4,(LPCWSTR)param_1[1],(HMODULE *)local_res8);
  }
  SubmitThreadpoolWork((PTP_WORK)*param_1);
  return 0;
}



/* ===== 1804ec470 FUN_1804ec470 ===== */

void FUN_1804ec470(PTP_CALLBACK_INSTANCE param_1,longlong param_2)

{
  BOOL BVar1;
  int iVar2;
  longlong lVar3;
  IMAGE_DOS_HEADER *local_res20;
  
  BVar1 = GetModuleHandleExW(2,(LPCWSTR)0x0,(HMODULE *)&local_res20);
  if (((BVar1 == 0) || (local_res20 == (IMAGE_DOS_HEADER *)0x0)) ||
     (local_res20 == &IMAGE_DOS_HEADER_180000000)) {
    iVar2 = FUN_1804e4d70(&DAT_180919460);
    if (iVar2 != 0) goto LAB_1804ec5db;
    if (DAT_1809194ac == 0x7fffffff) goto LAB_1804ec5c6;
    DAT_180c9f218 = DAT_180c9f218 + 1;
    FUN_1804e4e90(&DAT_180919460);
  }
  BVar1 = GetModuleHandleExW(2,(LPCWSTR)0x0,(HMODULE *)&local_res20);
  if (((BVar1 == 0) || (local_res20 == (IMAGE_DOS_HEADER *)0x0)) ||
     (local_res20 != &IMAGE_DOS_HEADER_180000000)) {
    BVar1 = GetModuleHandleExW(6,*(LPCWSTR *)(param_2 + 8),(HMODULE *)&local_res20);
    if ((BVar1 != 0) && (local_res20 != (IMAGE_DOS_HEADER *)0x0)) {
      FreeLibraryWhenCallbackReturns(param_1,(HMODULE)local_res20);
    }
  }
  (*(code *)PTR__guard_dispatch_icall_18056b850)(*(undefined8 *)(param_2 + 0x10));
  BVar1 = GetModuleHandleExW(2,(LPCWSTR)0x0,(HMODULE *)&local_res20);
  if (((BVar1 == 0) || (local_res20 == (IMAGE_DOS_HEADER *)0x0)) ||
     (local_res20 == &IMAGE_DOS_HEADER_180000000)) {
    iVar2 = FUN_1804e4d70(&DAT_180919460);
    if (iVar2 != 0) {
LAB_1804ec5db:
                    /* WARNING: Subroutine does not return */
      FUN_1804e4a90(5);
    }
    if (DAT_1809194ac == 0x7fffffff) {
LAB_1804ec5c6:
      DAT_1809194ac = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1804e4a90(6);
    }
    lVar3 = DAT_180c9f218 + -1;
    DAT_180c9f218 = lVar3;
    FUN_1804e4e90(&DAT_180919460);
    if (lVar3 == 0) {
      FUN_1804eb6a0(&DAT_180c9f220);
    }
  }
  return;
}



/* ===== 1804ec5f0 FUN_1804ec5f0 ===== */

undefined4 FUN_1804ec5f0(longlong param_1,longlong param_2,DWORD param_3)

{
  BOOL BVar1;
  DWORD DVar2;
  undefined4 uVar3;
  
  *(int *)(param_2 + 0x4c) = *(int *)(param_2 + 0x4c) + -1;
  *(undefined4 *)(param_2 + 0x48) = 0xffffffff;
  BVar1 = SleepConditionVariableSRW
                    ((PCONDITION_VARIABLE)(param_1 + 8),(PSRWLOCK)(param_2 + 0x10),param_3,0);
  uVar3 = 2;
  if (BVar1 != 0) {
    uVar3 = 0;
  }
  DVar2 = GetCurrentThreadId();
  *(int *)(param_2 + 0x4c) = *(int *)(param_2 + 0x4c) + 1;
  *(DWORD *)(param_2 + 0x48) = DVar2;
  return uVar3;
}



/* ===== 1804ec640 FUN_1804ec640 ===== */

void FUN_1804ec640(PTP_WORK param_1,ulonglong param_2)

{
  ulonglong uVar1;
  
  if (param_2 != 0) {
    uVar1 = 0;
    do {
      SubmitThreadpoolWork(param_1);
      uVar1 = uVar1 + 1;
    } while (uVar1 < param_2);
  }
  return;
}



/* ===== 1804ec690 KERNEL32.DLL::CloseThreadpoolWork ===== */

void __stdcall CloseThreadpoolWork(PTP_WORK pwk)

{
                    /* WARNING: Could not recover jumptable at 0x0001804ec690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CloseThreadpoolWork(pwk);
  return;
}



/* ===== 1804ec6a0 KERNEL32.DLL::CreateThreadpoolWork ===== */

PTP_WORK __stdcall CreateThreadpoolWork(PTP_WORK_CALLBACK pfnwk,PVOID pv,PTP_CALLBACK_ENVIRON pcbe)

{
  PTP_WORK p_Var1;
  
                    /* WARNING: Could not recover jumptable at 0x0001804ec6a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  p_Var1 = CreateThreadpoolWork(pfnwk,pv,pcbe);
  return p_Var1;
}



/* ===== 1804ec6b0 FUN_1804ec6b0 ===== */

void FUN_1804ec6b0(void)

{
  if (DAT_1809194b0 == -1) {
    DAT_1809194b0 = FUN_1804eb430();
  }
  return;
}



/* ===== 1804ec6d0 KERNEL32.DLL::SubmitThreadpoolWork ===== */

void __stdcall SubmitThreadpoolWork(PTP_WORK pwk)

{
                    /* WARNING: Could not recover jumptable at 0x0001804ec6d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SubmitThreadpoolWork(pwk);
  return;
}



/* ===== 1804ec6e0 KERNEL32.DLL::WaitForThreadpoolWorkCallbacks ===== */

void __stdcall WaitForThreadpoolWorkCallbacks(PTP_WORK pwk,BOOL fCancelPendingCallbacks)

{
                    /* WARNING: Could not recover jumptable at 0x0001804ec6e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WaitForThreadpoolWorkCallbacks(pwk,fCancelPendingCallbacks);
  return;
}



/* ===== 1804ec6f0 KERNEL32.DLL::DeleteCriticalSection ===== */

void __stdcall DeleteCriticalSection(LPCRITICAL_SECTION lpCriticalSection)

{
                    /* WARNING: Could not recover jumptable at 0x0001804ec6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection(lpCriticalSection);
  return;
}



/* ===== 1804ec700 FUN_1804ec700 ===== */

void FUN_1804ec700(LPCRITICAL_SECTION param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001804ec708. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  InitializeCriticalSectionEx(param_1,4000,0);
  return;
}



/* ===== 1804ec710 KERNEL32.DLL::EnterCriticalSection ===== */

void __stdcall EnterCriticalSection(LPCRITICAL_SECTION lpCriticalSection)

{
                    /* WARNING: Could not recover jumptable at 0x0001804ec710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EnterCriticalSection(lpCriticalSection);
  return;
}



/* ===== 1804ec720 KERNEL32.DLL::LeaveCriticalSection ===== */

void __stdcall LeaveCriticalSection(LPCRITICAL_SECTION lpCriticalSection)

{
                    /* WARNING: Could not recover jumptable at 0x0001804ec720. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(lpCriticalSection);
  return;
}



/* ===== 1804ec730 FUN_1804ec730 ===== */

void FUN_1804ec730(PVOID param_1)

{
  PVOID pvVar1;
  
  if (DAT_1809194b8 == 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  pvVar1 = EncodePointer(param_1);
  DAT_1809194b8 = DAT_1809194b8 + -1;
  *(PVOID *)(&DAT_180c9f2c0 + DAT_1809194b8 * 8) = pvVar1;
  return;
}



/* ===== 1804ec770 FUN_1804ec770 ===== */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1804ec770(LPCWSTR param_1,uint param_2,char *param_3,int param_4,undefined8 param_5,
                       int param_6,UINT param_7,int param_8)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  size_t sVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined4 *puVar8;
  DWORD dwFlags;
  ulonglong uVar9;
  LPCWSTR lpSrcStr;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  LPCWSTR lpWideCharStr;
  undefined1 auStackY_a8 [32];
  ulonglong local_58 [3];
  
  local_58[0] = DAT_180919500 ^ (ulonglong)local_58;
  iVar3 = param_4;
  if (0 < param_4) {
    sVar5 = __strncnt(param_3,(longlong)param_4);
    iVar2 = (int)sVar5;
    iVar3 = iVar2 + 1;
    if (param_4 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  dwFlags = 1;
  if (param_8 != 0) {
    dwFlags = 9;
  }
  iVar2 = MultiByteToWideChar(param_7,dwFlags,param_3,iVar3,(LPWSTR)0x0,0);
  puVar12 = auStackY_a8;
  if (iVar2 != 0) {
    uVar6 = (longlong)iVar2 * 2 + 0x10;
    uVar7 = 0;
    if ((ulonglong)((longlong)iVar2 * 2) < uVar6) {
      uVar7 = uVar6;
    }
    puVar12 = auStackY_a8;
    if (uVar7 != 0) {
      if (uVar7 < 0x401) {
        uVar6 = uVar7 + 0xf;
        if (uVar6 <= uVar7) {
          uVar6 = 0xffffffffffffff0;
        }
        lVar1 = -(uVar6 & 0xfffffffffffffff0);
        puVar10 = auStackY_a8 + lVar1;
        puVar8 = (undefined4 *)((longlong)local_58 + lVar1);
        puVar12 = auStackY_a8 + lVar1;
        if (puVar8 == (undefined4 *)0x0) goto LAB_1804ec8a6;
        *puVar8 = 0xcccc;
LAB_1804ec869:
        lpSrcStr = (LPCWSTR)(puVar8 + 4);
        puVar11 = puVar10;
      }
      else {
        puVar8 = (undefined4 *)_malloc_base(uVar7);
        puVar11 = auStackY_a8;
        puVar10 = auStackY_a8;
        lpSrcStr = (LPCWSTR)0x0;
        if (puVar8 != (undefined4 *)0x0) {
          *puVar8 = 0xdddd;
          goto LAB_1804ec869;
        }
      }
      puVar12 = puVar11;
      if (lpSrcStr != (LPCWSTR)0x0) {
        *(int *)(puVar11 + 0x28) = iVar2;
        *(LPCWSTR *)(puVar11 + 0x20) = lpSrcStr;
        *(undefined8 *)(puVar11 + -8) = 0x1804ec890;
        iVar3 = MultiByteToWideChar(param_7,1,param_3,iVar3,*(LPWSTR *)(puVar11 + 0x20),
                                    *(int *)(puVar11 + 0x28));
        if (iVar3 != 0) {
          *(undefined8 *)(puVar11 + 0x40) = 0;
          *(undefined8 *)(puVar11 + 0x38) = 0;
          *(undefined8 *)(puVar11 + 0x30) = 0;
          *(undefined4 *)(puVar11 + 0x28) = 0;
          *(undefined8 *)(puVar11 + 0x20) = 0;
          *(undefined8 *)(puVar11 + -8) = 0x1804ec8f1;
          iVar3 = LCMapStringEx(param_1,param_2,lpSrcStr,iVar2,*(LPWSTR *)(puVar11 + 0x20),
                                *(int *)(puVar11 + 0x28),*(LPNLSVERSIONINFO *)(puVar11 + 0x30),
                                *(LPVOID *)(puVar11 + 0x38),*(LPARAM *)(puVar11 + 0x40));
          uVar6 = (ulonglong)iVar3;
          if (iVar3 != 0) {
            if ((param_2 >> 10 & 1) == 0) {
              uVar7 = uVar6 * 2 + 0x10;
              uVar9 = 0;
              if (uVar6 * 2 < uVar7) {
                uVar9 = uVar7;
              }
              if (uVar9 != 0) {
                if (uVar9 < 0x401) {
                  uVar7 = uVar9 + 0xf;
                  if (uVar7 <= uVar9) {
                    uVar7 = 0xffffffffffffff0;
                  }
                  *(undefined8 *)(puVar11 + -8) = 0x1804ec98d;
                  lVar1 = -(uVar7 & 0xfffffffffffffff0);
                  puVar12 = puVar11 + lVar1;
                  puVar8 = (undefined4 *)(puVar11 + lVar1 + 0x50);
                  if (puVar8 == (undefined4 *)0x0) goto LAB_1804eca56;
                  *puVar8 = 0xcccc;
                  puVar11 = puVar11 + lVar1;
LAB_1804ec9bc:
                  lpWideCharStr = (LPCWSTR)(puVar8 + 4);
                  puVar12 = puVar11;
                }
                else {
                  *(undefined8 *)(puVar11 + -8) = 0x1804ec9ae;
                  puVar8 = (undefined4 *)_malloc_base(uVar9);
                  lpWideCharStr = (LPCWSTR)0x0;
                  if (puVar8 != (undefined4 *)0x0) {
                    *puVar8 = 0xdddd;
                    goto LAB_1804ec9bc;
                  }
                }
                if (lpWideCharStr != (LPCWSTR)0x0) {
                  *(undefined8 *)(puVar12 + 0x40) = 0;
                  *(undefined8 *)(puVar12 + 0x38) = 0;
                  *(undefined8 *)(puVar12 + 0x30) = 0;
                  *(int *)(puVar12 + 0x28) = iVar3;
                  *(LPCWSTR *)(puVar12 + 0x20) = lpWideCharStr;
                  *(undefined8 *)(puVar12 + -8) = 0x1804ec9f5;
                  iVar2 = LCMapStringEx(param_1,param_2,lpSrcStr,iVar2,*(LPWSTR *)(puVar12 + 0x20),
                                        *(int *)(puVar12 + 0x28),
                                        *(LPNLSVERSIONINFO *)(puVar12 + 0x30),
                                        *(LPVOID *)(puVar12 + 0x38),*(LPARAM *)(puVar12 + 0x40));
                  if (iVar2 != 0) {
                    if (param_6 == 0) {
                      param_5 = 0;
                      *(undefined8 *)(puVar12 + 0x38) = 0;
                      *(undefined8 *)(puVar12 + 0x30) = 0;
                      *(undefined4 *)(puVar12 + 0x28) = 0;
                    }
                    else {
                      *(undefined8 *)(puVar12 + 0x38) = 0;
                      *(undefined8 *)(puVar12 + 0x30) = 0;
                      *(int *)(puVar12 + 0x28) = param_6;
                    }
                    *(undefined8 *)(puVar12 + 0x20) = param_5;
                    *(undefined8 *)(puVar12 + -8) = 0x1804eca42;
                    uVar4 = WideCharToMultiByte(param_7,0,lpWideCharStr,iVar3,
                                                *(LPSTR *)(puVar12 + 0x20),*(int *)(puVar12 + 0x28),
                                                *(LPCSTR *)(puVar12 + 0x30),
                                                *(LPBOOL *)(puVar12 + 0x38));
                    uVar6 = (ulonglong)uVar4;
                  }
                  if (*(int *)(lpWideCharStr + -8) == 0xdddd) {
                    *(undefined8 *)(puVar12 + -8) = 0x1804eca56;
                    thunk_FUN_1805277b0(lpWideCharStr + -8);
                  }
                }
              }
            }
            else if ((param_6 != 0) && (iVar3 <= param_6)) {
              *(undefined8 *)(puVar11 + 0x40) = 0;
              *(undefined8 *)(puVar11 + 0x38) = 0;
              *(undefined8 *)(puVar11 + 0x30) = 0;
              *(int *)(puVar11 + 0x28) = param_6;
              *(undefined8 *)(puVar11 + 0x20) = param_5;
              *(undefined8 *)(puVar11 + -8) = 0x1804ec946;
              LCMapStringEx(param_1,param_2,lpSrcStr,iVar2,*(LPWSTR *)(puVar11 + 0x20),
                            *(int *)(puVar11 + 0x28),*(LPNLSVERSIONINFO *)(puVar11 + 0x30),
                            *(LPVOID *)(puVar11 + 0x38),*(LPARAM *)(puVar11 + 0x40));
            }
LAB_1804eca56:
            if (*(int *)(lpSrcStr + -8) == 0xdddd) {
              *(undefined8 *)(puVar12 + -8) = 0x1804eca68;
              thunk_FUN_1805277b0(lpSrcStr + -8);
            }
            uVar6 = uVar6 & 0xffffffff;
            goto LAB_1804ec8a8;
          }
        }
        if (*(int *)(lpSrcStr + -8) == 0xdddd) {
          *(undefined8 *)(puVar11 + -8) = 0x1804ec8a6;
          thunk_FUN_1805277b0(lpSrcStr + -8);
        }
      }
    }
  }
LAB_1804ec8a6:
  uVar6 = 0;
LAB_1804ec8a8:
  *(undefined8 *)(puVar12 + -8) = 0x1804ec8b4;
  return uVar6;
}



/* ===== 1804eca80 __security_check_cookie ===== */

/* WARNING: This is an inlined function */

void __cdecl __security_check_cookie(uintptr_t _StackCookie)

{
  if ((_StackCookie == DAT_180919500) && ((short)(_StackCookie >> 0x30) == 0)) {
    return;
  }
  FUN_1804ed0e0(_StackCookie);
  return;
}



/* ===== 1804ecaa0 FUN_1804ecaa0 ===== */

void FUN_1804ecaa0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = _malloc_base();
  while( true ) {
    if (lVar1 != 0) {
      return;
    }
    iVar2 = FUN_180523cb0(param_1);
    if (iVar2 == 0) break;
    lVar1 = _malloc_base(param_1);
  }
  if (param_1 == -1) {
                    /* WARNING: Subroutine does not return */
    FUN_18000d840();
  }
                    /* WARNING: Subroutine does not return */
  FUN_1804e4c90();
}



/* ===== 1804ecaf0 FUN_1804ecaf0 ===== */

undefined8 FUN_1804ecaf0(void)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  
  iVar2 = FUN_1804edbb0();
  if (iVar2 != 0) {
    lVar1 = *(longlong *)((longlong)Self + 8);
    lVar3 = 0;
    LOCK();
    bVar4 = DAT_180c9f408 == 0;
    if (bVar4) {
      DAT_180c9f408 = lVar1;
    }
    else {
      lVar3 = DAT_180c9f408;
    }
    UNLOCK();
    while (!bVar4) {
      if (lVar1 == lVar3) {
        return 1;
      }
      lVar3 = 0;
      LOCK();
      bVar4 = DAT_180c9f408 == 0;
      if (bVar4) {
        DAT_180c9f408 = lVar1;
      }
      else {
        lVar3 = DAT_180c9f408;
      }
      UNLOCK();
    }
  }
  return 0;
}



/* ===== 1804ecb40 FUN_1804ecb40 ===== */

undefined4 FUN_1804ecb40(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_1804edbb0();
  if (iVar1 != 0) {
    FUN_1804ed250();
    return 1;
  }
  uVar2 = FUN_18004de40();
  iVar1 = FUN_18052414c(uVar2);
  if (iVar1 == 0) {
    thunk_FUN_1805242cc();
    return 1;
  }
  return 0;
}



/* ===== 1804ecb80 FUN_1804ecb80 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1804ecb80(void)

{
  int iVar1;
  
  if (DAT_180c9f411 == '\0') {
    iVar1 = FUN_1804edbb0();
    if (iVar1 == 0) {
      DAT_180c9f418 = _DAT_1808adf90;
      uRam0000000180c9f420 = _UNK_1808adf98;
      _DAT_180c9f428 = 0xffffffffffffffff;
      _DAT_180c9f430 = _DAT_1808adf90;
      uRam0000000180c9f438 = _UNK_1808adf98;
      _DAT_180c9f440 = 0xffffffffffffffff;
    }
    else {
      iVar1 = _initialize_onexit_table(&DAT_180c9f418);
      if (iVar1 != 0) {
        return 0;
      }
      iVar1 = _initialize_onexit_table(&DAT_180c9f430);
      if (iVar1 != 0) {
        return 0;
      }
    }
    DAT_180c9f411 = '\x01';
  }
  return 1;
}



/* ===== 1804ecc00 FUN_1804ecc00 ===== */

undefined1 FUN_1804ecc00(void)

{
  char cVar1;
  
  cVar1 = FUN_1804ef6f0();
  if (cVar1 != '\0') {
    cVar1 = FUN_180524ce8();
    if (cVar1 != '\0') {
      return 1;
    }
    FUN_1804ef710();
  }
  return 0;
}



/* ===== 1804ecc30 FUN_1804ecc30 ===== */

undefined1 FUN_1804ecc30(void)

{
  FUN_180524cfc();
  FUN_1804ef710();
  return 1;
}



/* ===== 1804ecc50 FUN_1804ecc50 ===== */

void FUN_1804ecc50(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined8 param_6)

{
  int iVar1;
  
  iVar1 = FUN_1804edbb0();
  if ((iVar1 == 0) && (param_2 == 1)) {
    (*(code *)PTR__guard_dispatch_icall_18056b850)(param_1,0,param_3);
  }
  FUN_180523dac(param_5,param_6);
  return;
}



/* ===== 1804ecca0 FUN_1804ecca0 ===== */

void FUN_1804ecca0(void)

{
  int iVar1;
  
  iVar1 = FUN_1804edbb0();
  if (iVar1 != 0) {
    FUN_180524af4(&DAT_180c9f418);
    return;
  }
  iVar1 = FUN_18051c3cc();
  if (iVar1 == 0) {
    FUN_18051c3b0();
    return;
  }
  return;
}



/* ===== 1804ecce0 FUN_1804ecce0 ===== */

void FUN_1804ecce0(void)

{
  FUN_180524d44(0);
  FUN_1804ef740();
  return;
}



/* ===== 1804ecd00 FUN_1804ecd00 ===== */

undefined1 FUN_1804ecd00(int param_1)

{
  char cVar1;
  
  if (param_1 == 0) {
    DAT_180c9f410 = 1;
  }
  FUN_1804ed250();
  cVar1 = FUN_1804ef6c0();
  if (cVar1 != '\0') {
    cVar1 = FUN_180524cd4();
    if (cVar1 != '\0') {
      return 1;
    }
    FUN_1804ef720(0);
  }
  return 0;
}



/* ===== 1804ecd40 FUN_1804ecd40 ===== */

ulonglong FUN_1804ecd40(longlong param_1)

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
          return (ulonglong)uVar3 << 8;
        }
        if (((ulonglong)*(uint *)(uVar2 + 0xc) <= param_1 - 0x180000000U) &&
           (param_1 - 0x180000000U < (ulonglong)(*(int *)(uVar2 + 8) + *(uint *)(uVar2 + 0xc))))
        break;
        uVar2 = uVar2 + 0x28;
      }
      if (*(int *)(uVar2 + 0x24) < 0) {
        return uVar2 & 0xffffffffffffff00;
      }
      return CONCAT71(uVar3,1);
    }
  }
  return uVar1 & 0xffffffffffffff00;
}



/* ===== 1804ecde0 FUN_1804ecde0 ===== */

undefined8 FUN_1804ecde0(char param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_1804edbb0();
  uVar1 = DAT_180c9f408;
  if (((int)uVar2 != 0) && (param_1 == '\0')) {
    LOCK();
    DAT_180c9f408 = 0;
    UNLOCK();
    uVar2 = uVar1;
  }
  return uVar2;
}



/* ===== 1804ece10 FUN_1804ece10 ===== */

undefined1 FUN_1804ece10(undefined1 param_1,char param_2)

{
  if ((DAT_180c9f410 == '\0') || (param_2 == '\0')) {
    FUN_180524d0c();
    FUN_1804ef720(param_1);
  }
  return 1;
}



/* ===== 1804ece40 FUN_1804ece40 ===== */

int FUN_1804ece40(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  if (DAT_180c9f418 == -1) {
    iVar1 = FUN_180524ae4();
  }
  else {
    iVar1 = _register_onexit_function(&DAT_180c9f418,param_1);
  }
  lVar2 = 0;
  if (iVar1 == 0) {
    lVar2 = param_1;
  }
  return (lVar2 != 0) - 1;
}



/* ===== 1804ece80 thunk_FUN_1803d64e0 ===== */

void thunk_FUN_1803d64e0(LPVOID param_1)

{
  undefined4 *puVar1;
  BOOL BVar2;
  DWORD DVar3;
  undefined4 uVar4;
  
  if ((param_1 != (LPVOID)0x0) && (BVar2 = HeapFree(DAT_180c9ffc8,0,param_1), BVar2 == 0)) {
    DVar3 = GetLastError();
    uVar4 = FUN_18051be70(DVar3);
    puVar1 = (undefined4 *)FUN_18051bfb0();
    *puVar1 = uVar4;
  }
  return;
}



/* ===== 1804ece90 FUN_1804ece90 ===== */

undefined8 * FUN_1804ece90(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = type_info::vftable;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1803d64e0(param_1,0x18);
  }
  return param_1;
}



/* ===== 1804ecec0 thunk_FUN_1804ecaa0 ===== */

void thunk_FUN_1804ecaa0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = _malloc_base();
  while( true ) {
    if (lVar1 != 0) {
      return;
    }
    iVar2 = FUN_180523cb0(param_1);
    if (iVar2 == 0) break;
    lVar1 = _malloc_base(param_1);
  }
  if (param_1 == -1) {
                    /* WARNING: Subroutine does not return */
    FUN_18000d840();
  }
                    /* WARNING: Subroutine does not return */
  FUN_1804e4c90();
}



/* ===== 1804eced0 FUN_1804eced0 ===== */

void FUN_1804eced0(longlong param_1,longlong param_2,longlong param_3)

{
  param_1 = param_2 * param_3 + param_1;
  while( true ) {
    if (param_3 == 0) break;
    param_1 = param_1 - param_2;
    (*(code *)PTR__guard_dispatch_icall_18056b850)(param_1);
    param_3 = param_3 + -1;
  }
  return;
}



/* ===== 1804ecf50 FUN_1804ecf50 ===== */

void FUN_1804ecf50(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  
  for (lVar1 = 0; lVar1 != param_3; lVar1 = lVar1 + 1) {
    param_1 = param_1 - param_2;
    (*(code *)PTR__guard_dispatch_icall_18056b850)(param_1);
  }
  return;
}



/* ===== 1804ecfb0 FUN_1804ecfb0 ===== */

void FUN_1804ecfb0(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  
  for (lVar1 = 0; lVar1 != param_3; lVar1 = lVar1 + 1) {
    (*(code *)PTR__guard_dispatch_icall_18056b850)(param_1);
    param_1 = param_1 + param_2;
  }
  return;
}



/* ===== 1804ed030 FUN_1804ed030 ===== */

void FUN_1804ed030(void)

{
  FUN_1804ecaa0();
  return;
}



/* ===== 1804ed050 FUN_1804ed050 ===== */

void FUN_1804ed050(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  
  for (lVar1 = 0; lVar1 != param_4; lVar1 = lVar1 + 1) {
    (*(code *)PTR__guard_dispatch_icall_18056b850)(param_1,param_2);
    param_1 = param_1 + param_3;
    param_2 = param_2 + param_3;
  }
  return;
}



/* ===== 1804ed0e0 FUN_1804ed0e0 ===== */

void FUN_1804ed0e0(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x29);
  (*pcVar1)(2);
  return;
}



/* ===== 1804ed0f0 FUN_1804ed0f0 ===== */

void FUN_1804ed0f0(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x29);
  (*pcVar1)(8);
  return;
}



/* ===== 1804ed100 FUN_1804ed100 ===== */

void FUN_1804ed100(undefined4 *param_1)

{
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_180c9f450);
  *param_1 = 0;
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_180c9f450);
                    /* WARNING: Could not recover jumptable at 0x0001804ed135. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WakeAllConditionVariable((PCONDITION_VARIABLE)&DAT_180c9f448);
  return;
}



/* ===== 1804ed140 _Init_thread_footer ===== */

/* Library Function - Single Match
    _Init_thread_footer
   
   Library: Visual Studio 2019 Release */

void _Init_thread_footer(int *param_1)

{
  ulonglong uVar1;
  
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_180c9f450);
  uVar1 = (ulonglong)_tls_index;
  DAT_1809194c4 = DAT_1809194c4 + 1;
  *param_1 = DAT_1809194c4;
  *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 8) = DAT_1809194c4;
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_180c9f450);
                    /* WARNING: Could not recover jumptable at 0x0001804ed1a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WakeAllConditionVariable((PCONDITION_VARIABLE)&DAT_180c9f448);
  return;
}



/* ===== 1804ed1b0 FUN_1804ed1b0 ===== */

void FUN_1804ed1b0(int *param_1)

{
  int iVar1;
  
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_180c9f450);
  iVar1 = *param_1;
  while( true ) {
    if (iVar1 == 0) {
      *param_1 = -1;
                    /* WARNING: Could not recover jumptable at 0x0001804ed1de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockExclusive((PSRWLOCK)&DAT_180c9f450);
      return;
    }
    if (iVar1 != -1) break;
    SleepConditionVariableSRW
              ((PCONDITION_VARIABLE)&DAT_180c9f448,(PSRWLOCK)&DAT_180c9f450,0xffffffff,0);
    iVar1 = *param_1;
  }
  *(undefined4 *)
   (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 8) =
       DAT_1809194c4;
                    /* WARNING: Could not recover jumptable at 0x0001804ed247. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_180c9f450);
  return;
}



/* ===== 1804ed250 FUN_1804ed250 ===== */

/* WARNING: Removing unreachable block (ram,0x0001804ed357) */
/* WARNING: Removing unreachable block (ram,0x0001804ed345) */
/* WARNING: Removing unreachable block (ram,0x0001804ed333) */
/* WARNING: Removing unreachable block (ram,0x0001804ed30c) */
/* WARNING: Removing unreachable block (ram,0x0001804ed287) */
/* WARNING: Removing unreachable block (ram,0x0001804ed262) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1804ed250(void)

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
    DAT_1809194d0 = 0x8000;
    DAT_1809194d8 = 0xffffffffffffffff;
    if ((((uVar8 == 0x106c0) || (uVar8 == 0x20660)) || (uVar8 == 0x20670)) ||
       ((uVar8 - 0x30650 < 0x21 &&
        ((0x100010001U >> ((ulonglong)(uVar8 - 0x30650) & 0x3f) & 1) != 0)))) {
      DAT_180c9f458 = DAT_180c9f458 | 1;
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
      DAT_180c9f458 = DAT_180c9f458 | 2;
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
  DAT_1809194c8 = 1;
  DAT_1809194cc = 2;
  uVar6 = DAT_1809194e0 & 0xfffffffffffffffe;
  if ((uVar5 >> 0x14 & 1) != 0) {
    DAT_1809194c8 = 2;
    DAT_1809194cc = 6;
    uVar6 = DAT_1809194e0 & 0xffffffffffffffee;
  }
  DAT_1809194e0 = uVar6;
  if ((uVar5 >> 0x1b & 1) == 0) {
    return 0;
  }
  uVar6 = xinuse(0);
  uVar9 = in_XCR0 & uVar6 & 0xffffffff;
  uVar6 = DAT_1809194e0;
  if (((uVar5 >> 0x1c & 1) == 0) || (bVar7 = (byte)uVar9, (bVar7 & 6) != 6)) goto LAB_1804ed4c4;
  DAT_1809194c8 = 3;
  uVar5 = DAT_1809194cc | 8;
  if ((uVar12 & 0x20) == 0) {
LAB_1804ed46a:
    DAT_1809194e0 = uVar6;
    DAT_1809194cc = uVar5;
    uVar5 = DAT_1809194cc;
    uVar6 = DAT_1809194e0;
  }
  else {
    DAT_1809194c8 = 5;
    uVar5 = DAT_1809194cc | 0x28;
    uVar6 = DAT_1809194e0 & 0xfffffffffffffffd;
    if ((uVar12 & 0xd0030000) == 0xd0030000) {
      if ((bVar7 & 0xe0) != 0xe0) goto LAB_1804ed46a;
      DAT_1809194cc = DAT_1809194cc | 0x68;
      DAT_1809194c8 = 6;
      uVar5 = DAT_1809194cc;
      uVar6 = DAT_1809194e0 & 0xffffffffffffffd9;
    }
  }
  DAT_1809194e0 = uVar6;
  DAT_1809194cc = uVar5;
  if ((uVar10 >> 0x17 & 1) != 0) {
    DAT_1809194e0 = DAT_1809194e0 & 0xfffffffffeffffff;
  }
  uVar6 = DAT_1809194e0;
  if (((uVar13 >> 0x13 & 1) != 0) && ((bVar7 & 0xe0) == 0xe0)) {
    _DAT_180c9f45c = uVar8 & 0xff;
    uVar6 = DAT_1809194e0 & 0xfffffffffeffffd0;
    if (1 < _DAT_180c9f45c) {
      uVar6 = DAT_1809194e0 & 0xfffffffffeffff90;
    }
  }
LAB_1804ed4c4:
  DAT_1809194e0 = uVar6;
  if ((((uVar13 >> 0x15 & 1) != 0) && ((uVar11 & 1) != 0)) && ((uVar9 >> 0x13 & 1) != 0)) {
    DAT_1809194e0 = DAT_1809194e0 & 0xffffffffffffff7f;
  }
  return 0;
}



/* ===== 1804ed500 FUN_1804ed500 ===== */

void FUN_1804ed500(void)

{
  FUN_1804edbe0();
  return;
}



/* ===== 1804ed520 FUN_1804ed520 ===== */

void FUN_1804ed520(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  thunk_FUN_180524dd0(param_1,param_3);
  return;
}



/* ===== 1804ed530 FUN_1804ed530 ===== */

ulonglong FUN_1804ed530(undefined1 param_1,int param_2,longlong param_3)

{
  byte bVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = FUN_1804ed6a0(param_3 != 0);
    return uVar2;
  }
  if (param_2 == 1) {
    uVar2 = FUN_1804ed590(param_1,param_3);
    return uVar2;
  }
  if (param_2 == 2) {
    bVar1 = FUN_1804ecc00();
    return (ulonglong)bVar1;
  }
  if (param_2 == 3) {
    bVar1 = FUN_1804ecc30();
    return (ulonglong)bVar1;
  }
  return 1;
}



/* ===== 1804ed590 FUN_1804ed590 ===== */

undefined8 FUN_1804ed590(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 uVar7;
  
  cVar3 = FUN_1804ecd00(0);
  if (cVar3 != '\0') {
    uVar4 = FUN_1804ecaf0();
    bVar2 = true;
    if (DAT_180c9f400 != 0) {
      FUN_1804edbd0(7);
      pcVar1 = (code *)swi(3);
      uVar7 = (*pcVar1)();
      return uVar7;
    }
    DAT_180c9f400 = 1;
    cVar3 = FUN_1804ecb80();
    if (cVar3 != '\0') {
      FUN_1804edd60();
      FUN_1804edd10();
      FUN_1804edd30();
      iVar5 = FUN_180524d8c(&DAT_18056c5a8,&DAT_18056c5d8);
      if (iVar5 == 0) {
        cVar3 = FUN_1804ecb40();
        if (cVar3 != '\0') {
          FUN_180524d54(&DAT_18056b878,&DAT_18056c5a0);
          DAT_180c9f400 = 2;
          bVar2 = false;
        }
      }
    }
    FUN_1804ecde0(uVar4);
    if (!bVar2) {
      plVar6 = (longlong *)FUN_1804edd50();
      if (*plVar6 != 0) {
        cVar3 = FUN_1804ecd40(plVar6);
        if (cVar3 != '\0') {
          (*(code *)PTR__guard_dispatch_icall_18056b850)(param_1,2,param_2);
        }
      }
      DAT_180c9f460 = DAT_180c9f460 + 1;
      return 1;
    }
  }
  return 0;
}



/* ===== 1804ed6a0 FUN_1804ed6a0 ===== */

ulonglong FUN_1804ed6a0(undefined1 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined1 uVar2;
  byte bVar3;
  ulonglong uVar4;
  undefined1 uVar5;
  
  if (DAT_180c9f460 < 1) {
    return 0;
  }
  DAT_180c9f460 = DAT_180c9f460 + -1;
  uVar2 = FUN_1804ecaf0();
  if (DAT_180c9f400 == 2) {
    uVar5 = uVar2;
    FUN_1804ecca0();
    FUN_1804edd20();
    FUN_1804eddb0();
    DAT_180c9f400 = 0;
    FUN_1804ecde0(uVar2);
    bVar3 = FUN_1804ece10(param_1,0,param_3,param_4,uVar5);
    FUN_1804ecce0();
    return (ulonglong)bVar3;
  }
  FUN_1804edbd0(7);
  pcVar1 = (code *)swi(3);
  uVar4 = (*pcVar1)();
  return uVar4;
}



/* ===== 1804ed740 FUN_1804ed740 ===== */

int FUN_1804ed740(undefined8 param_1,int param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  
  if ((param_2 == 0) && (DAT_180c9f460 < 1)) {
    return 0;
  }
  if (param_2 - 1U < 2) {
    if (PTR_180575a90 == (undefined *)0x0) {
      iVar1 = 1;
    }
    else {
      iVar1 = (*(code *)PTR__guard_dispatch_icall_18056b850)();
    }
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = FUN_1804ed530(param_1,param_2,param_3);
    if (iVar1 == 0) {
      return 0;
    }
  }
  iVar1 = FUN_1803ca1e0(param_1,param_2,param_3);
  if ((param_2 == 1) && (iVar1 == 0)) {
    FUN_1803ca1e0(param_1,0,param_3);
    FUN_1804ed6a0(param_3 != 0);
    if (PTR_180575a90 != (undefined *)0x0) {
      (*(code *)PTR__guard_dispatch_icall_18056b850)(param_1,0,param_3);
    }
  }
  if ((param_2 == 0) || (param_2 == 3)) {
    iVar2 = FUN_1804ed530(param_1,param_2,param_3);
    iVar1 = 0;
    if (iVar2 != 0) {
      if (PTR_180575a90 == (undefined *)0x0) {
        iVar1 = 1;
      }
      else {
        iVar1 = (*(code *)PTR__guard_dispatch_icall_18056b850)(param_1,param_2,param_3);
      }
    }
  }
  return iVar1;
}



/* ===== 1804ed880 entry ===== */

void entry(undefined8 param_1,int param_2,undefined8 param_3)

{
  if (param_2 == 1) {
    FUN_1804edc50();
  }
  FUN_1804ed740(param_1,param_2,param_3);
  return;
}



/* ===== 1804ed8c0 FUN_1804ed8c0 ===== */

undefined8 FUN_1804ed8c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  FUN_1804ed8e0(param_2,param_4,*(undefined8 *)(param_4 + 0x38));
  return 1;
}



/* ===== 1804ed8e0 FUN_1804ed8e0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804ed8e0(ulonglong param_1,longlong param_2,int *param_3)

{
  byte bVar1;
  code *pcVar2;
  float fVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  float *pfVar7;
  byte *pbVar8;
  float *pfVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  byte bVar13;
  int unaff_R14D;
  float fVar14;
  float fVar15;
  float unaff_XMM6_Da;
  float unaff_XMM7_Da;
  float fVar16;
  float unaff_XMM9_Da;
  
  uVar10 = (ulonglong)*param_3;
  if ((uVar10 & 4) != 0) {
    param_1 = (longlong)param_3[1] + param_1 & (longlong)-param_3[2];
  }
  pbVar8 = (byte *)(*(longlong *)(param_2 + 8) +
                   (ulonglong)*(uint *)(*(longlong *)(param_2 + 0x10) + 8));
  bVar1 = pbVar8[3];
  if (2 < (*pbVar8 & 7)) {
    uVar11 = bVar1 & 0x1f;
    uVar12 = (ulonglong)uVar11;
    if ((bVar1 & 0x1f) != 0) {
      if ((*pbVar8 & 0x40) == 0) {
        lVar5 = (ulonglong)uVar11 + 4;
      }
      else {
        lVar5 = uVar12 * 2 + 5;
      }
      pfVar9 = (float *)(pbVar8 + lVar5);
      uVar6 = 0;
      pfVar7 = pfVar9;
      if (bVar1 >> 5 != 0) {
        do {
          pfVar9 = (float *)((longlong)pfVar7 + 3);
          bVar13 = *(byte *)pfVar7 >> 3;
          if (bVar13 != 0) {
            if ((*(byte *)pfVar7 & 2) == 0) {
              pfVar9 = (float *)((longlong)pfVar7 + (ulonglong)bVar13 + 6);
            }
            else {
              pfVar9 = (float *)((longlong)pfVar9 + (ulonglong)bVar13 * 2 + 4);
            }
          }
          uVar6 = uVar6 + 1;
          pfVar7 = pfVar9;
        } while (uVar6 < bVar1 >> 5);
      }
      uVar6 = 0;
      if ((bVar1 & 0x1f) != 0) {
        do {
          bVar1 = *(byte *)pfVar9;
          bVar13 = bVar1;
          if (((bVar1 < 4) || (bVar13 = bVar1 & 0xf, (byte)(bVar13 - 8) < 3)) ||
             (bVar13 = bVar1 & 7, (byte)(bVar13 - 4) < 4)) {
            if (bVar13 == 0) {
              return;
            }
            if (0x20 < bVar13) goto switchD_1804eda1f_caseD_4;
          }
          else {
            if ((bVar1 & 0x3f) != 0x20) goto switchD_1804eda1f_caseD_4;
            bVar13 = 0x20;
          }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
          switch(*(byte *)((longlong)&UINT_1804eda98 + (ulonglong)bVar13)) {
          case 0:
            lVar5 = 2;
            break;
          case 1:
            lVar5 = 5;
            break;
          case 2:
            lVar5 = 3;
            break;
          case 3:
            lVar5 = 1;
            break;
          case 4:
switchD_1804eda1f_caseD_4:
            FUN_1804ed0e0();
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          case 5:
            if (*(byte *)((longlong)&UINT_1804eda98 + (ulonglong)bVar13) == 0x942763) {
            }
            else {
              DAT_180962868 = (undefined1)unaff_R14D;
              DAT_18096286c = unaff_XMM6_Da;
            }
            *(float *)(uVar10 + 0x48) = DAT_18096286c;
            if (DAT_18096286c <= unaff_XMM6_Da) {
              if (DAT_1808abf94 < unaff_XMM6_Da - DAT_18096286c) {
                iVar4 = 1;
                if (1 < *(int *)(param_1 + 0x2a4)) {
                  iVar4 = *(int *)(param_1 + 0x2a4);
                }
                fVar14 = (float)iVar4 * *pfVar9 * (unaff_XMM6_Da - DAT_18096286c);
                if (fVar14 <= DAT_1808abf94) {
                  fVar14 = DAT_1808abf94;
                }
                fVar16 = fVar14 + DAT_18096286c;
                if (unaff_XMM6_Da <= fVar14 + DAT_18096286c) {
                  fVar16 = unaff_XMM6_Da;
                }
                *(float *)(uVar10 + 0x48) = fVar16;
                DAT_18096286c = fVar16;
              }
              unaff_XMM6_Da = DAT_18096286c;
            }
            else {
              *(float *)(uVar10 + 0x48) = unaff_XMM6_Da;
            }
            *(undefined4 *)(uVar10 + 0x58) = 0x45ea6000;
            *(int *)(uVar10 + 0x50) = unaff_R14D;
            pfVar7 = (float *)(uVar10 + 0x50);
            if (unaff_XMM7_Da <= unaff_XMM6_Da) {
              pfVar7 = (float *)(uVar10 + 0x48);
            }
            pfVar9 = (float *)(uVar10 + 0x58);
            if (unaff_XMM6_Da <= unaff_XMM9_Da) {
              pfVar9 = pfVar7;
            }
            fVar14 = *pfVar9;
            iVar4 = *(int *)(param_1 + 0x2a8);
            if (iVar4 < 0x97) {
              if (0 < iVar4) {
                unaff_R14D = iVar4;
              }
              fVar16 = (float)unaff_R14D * DAT_1808aca80 * DAT_1808ac1f4;
            }
            else {
              fVar16 = DAT_1808acc68;
            }
            DAT_18096286c = unaff_XMM6_Da;
            *(undefined1 *)(uVar10 + 0x48) = 1;
            FUN_1800233d0(uVar12 + 0x4d8,uVar10 + 0x48);
            fVar3 = DAT_1808acc4c;
            fVar15 = fVar14 - fVar16;
            *(float *)(uVar10 + 0x48) = fVar15 - DAT_1808acc4c;
            FUN_180013280(uVar12 + 0x4dc,uVar10 + 0x48);
            *(float *)(uVar10 + 0x48) = fVar15;
            FUN_180013280(uVar12 + 0x4e0,uVar10 + 0x48);
            fVar16 = fVar16 + fVar14;
            *(float *)(uVar10 + 0x48) = fVar16;
            FUN_180013280(uVar12 + 0x4e4,uVar10 + 0x48);
            *(float *)(uVar10 + 0x48) = fVar16 + fVar3;
            FUN_180013280(uVar12 + 0x4e8,uVar10 + 0x48);
            *(undefined4 *)(uVar10 + 0x48) = 0x3f400000;
            FUN_180013280(uVar12 + 0x4ec,uVar10 + 0x48);
            return;
          }
          pfVar9 = (float *)((longlong)pfVar9 + lVar5);
          uVar6 = uVar6 + 1;
        } while (uVar6 < uVar11);
      }
    }
  }
  return;
}



/* ===== 1804edac0 FUN_1804edac0 ===== */

undefined8 FUN_1804edac0(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_4 + 0x38);
  FUN_1804ed8e0(param_2,param_4,lVar1 + 4);
  if ((*(uint *)(lVar1 + 4) & ((*(byte *)(param_1 + 4) & 0x66) != 0) + 1) == 0) {
    return 1;
  }
  uVar2 = FUN_1804eebc0(param_1,param_2,param_3,param_4);
  return uVar2;
}



/* ===== 1804edb30 FUN_1804edb30 ===== */

void FUN_1804edb30(void)

{
  thunk_FUN_1804ecaa0();
  return;
}



/* ===== 1804edb60 __chkstk ===== */

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



/* ===== 1804edbb0 FUN_1804edbb0 ===== */

bool FUN_1804edbb0(void)

{
  return DAT_1811164c8 != 0;
}



/* ===== 1804edbc0 FUN_1804edbc0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1804edbc0(void)

{
  _DAT_180c9f464 = 0;
  return;
}



/* ===== 1804edbd0 FUN_1804edbd0 ===== */

void FUN_1804edbd0(undefined4 param_1)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x29);
  (*pcVar1)(param_1);
  return;
}



/* ===== 1804edbe0 FUN_1804edbe0 ===== */

void FUN_1804edbe0(size_t param_1,size_t param_2)

{
  int iVar1;
  void *pvVar2;
  
  pvVar2 = _aligned_malloc(param_1,param_2);
  while( true ) {
    if (pvVar2 != (void *)0x0) {
      return;
    }
    iVar1 = FUN_180523cb0(param_1);
    if (iVar1 == 0) break;
    pvVar2 = _aligned_malloc(param_1,param_2);
  }
  if (param_1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_18000d840();
  }
                    /* WARNING: Subroutine does not return */
  FUN_1804e4c90();
}



/* ===== 1804edc40 thunk_FUN_180524dd0 ===== */

void thunk_FUN_180524dd0(void)

{
  FUN_180524dd0();
  return;
}



/* ===== 1804edc50 FUN_1804edc50 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1804edc50(void)

{
  DWORD DVar1;
  _FILETIME local_res8;
  LARGE_INTEGER local_res10 [3];
  _FILETIME local_18 [2];
  
  if (DAT_180919500 != 0x2b992ddfa232) {
    _DAT_180919540 = ~DAT_180919500;
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
  DAT_180919500 =
       (local_res10[0].QuadPart << 0x20 ^ local_res10[0].QuadPart ^ (ulonglong)local_18[0] ^
       (ulonglong)local_18) & 0xffffffffffff;
  if (DAT_180919500 == 0x2b992ddfa232) {
    DAT_180919500 = 0x2b992ddfa233;
  }
  _DAT_180919540 = ~DAT_180919500;
  return;
}



/* ===== 1804edd10 FUN_1804edd10 ===== */

void FUN_1804edd10(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001804edd17. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  InitializeSListHead(&DAT_180c9f470);
  return;
}



/* ===== 1804edd20 FUN_1804edd20 ===== */

void FUN_1804edd20(void)

{
  FUN_1804ef780(&DAT_180c9f470);
  return;
}



/* ===== 1804edd30 FUN_1804edd30 ===== */

void FUN_1804edd30(void)

{
  ulonglong *puVar1;
  
  puVar1 = (ulonglong *)FUN_180013640();
  *puVar1 = *puVar1 | 0x24;
  puVar1 = (ulonglong *)FUN_180013650();
  *puVar1 = *puVar1 | 2;
  return;
}



/* ===== 1804edd50 FUN_1804edd50 ===== */

undefined * FUN_1804edd50(void)

{
  return &DAT_1811164c0;
}



/* ===== 1804edd60 FUN_1804edd60 ===== */

/* WARNING: Removing unreachable block (ram,0x0001804edd80) */
/* WARNING: Removing unreachable block (ram,0x0001804edd88) */
/* WARNING: Removing unreachable block (ram,0x0001804edd8e) */

void FUN_1804edd60(void)

{
  return;
}



/* ===== 1804eddb0 FUN_1804eddb0 ===== */

/* WARNING: Removing unreachable block (ram,0x0001804eddd0) */
/* WARNING: Removing unreachable block (ram,0x0001804eddd8) */
/* WARNING: Removing unreachable block (ram,0x0001804eddde) */

void FUN_1804eddb0(void)

{
  return;
}



/* ===== 1804ede00 FUN_1804ede00 ===== */

undefined8 FUN_1804ede00(undefined4 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 *local_28;
  undefined8 local_20;
  
  local_28 = param_1;
  local_20 = param_3;
  FUN_1804ef840();
  (*(code *)PTR__guard_dispatch_icall_18056b850)(*param_1,&local_28);
  return 0;
}



/* ===== 1804ede50 FUN_1804ede50 ===== */

undefined8 FUN_1804ede50(undefined4 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 *local_28;
  undefined8 local_20;
  
  local_28 = param_1;
  local_20 = param_3;
  FUN_1804ef840();
  (*(code *)PTR__guard_dispatch_icall_18056b850)(*param_1,&local_28);
  return 0;
}



/* ===== 1804edea0 FUN_1804edea0 ===== */

longlong FUN_1804edea0(byte *param_1,byte *param_2,longlong param_3,int param_4,char param_5)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  
  bVar1 = *param_1;
  pbVar8 = param_1 + 1;
  *param_2 = bVar1;
  if ((bVar1 & 4) != 0) {
    bVar2 = *pbVar8;
    pbVar8 = pbVar8 + -(longlong)(char)(&DAT_180575a98)[bVar2 & 0xf];
    *(uint *)(param_2 + 4) = *(uint *)(pbVar8 + -4) >> ((&DAT_180575aa8)[bVar2 & 0xf] & 0x1f);
  }
  if ((bVar1 & 8) != 0) {
    uVar3 = *(undefined4 *)pbVar8;
    pbVar8 = pbVar8 + 4;
    *(undefined4 *)(param_2 + 8) = uVar3;
  }
  if ((bVar1 & 0x10) != 0) {
    uVar3 = *(undefined4 *)pbVar8;
    pbVar8 = pbVar8 + 4;
    *(undefined4 *)(param_2 + 0xc) = uVar3;
  }
  pbVar7 = pbVar8 + 4;
  if ((param_5 == '\0') && ((bVar1 & 2) != 0)) {
    param_2[0x10] = 0;
    param_2[0x11] = 0;
    param_2[0x12] = 0;
    param_2[0x13] = 0;
    if (*(int *)pbVar8 == 0) {
      pcVar4 = (code *)swi(0x29);
      (*pcVar4)(7);
    }
    else {
      pbVar8 = (byte *)(*(int *)pbVar8 + param_3);
      uVar5 = *pbVar8 & 0xf;
      pbVar8 = pbVar8 + -(longlong)(char)(&DAT_180575a98)[uVar5];
      uVar6 = 0;
      uVar5 = *(uint *)(pbVar8 + -4) >> ((&DAT_180575aa8)[uVar5] & 0x1f);
      if (uVar5 != 0) {
        do {
          if (*(int *)pbVar8 == param_4) {
            *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(pbVar8 + 4);
            break;
          }
          pbVar8 = pbVar8 + 8;
          uVar6 = uVar6 + 1;
        } while (uVar6 < uVar5);
      }
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)pbVar8;
  }
  if ((bVar1 & 1) != 0) {
    bVar1 = *pbVar7;
    pbVar7 = pbVar7 + -(longlong)(char)(&DAT_180575a98)[bVar1 & 0xf];
    *(uint *)(param_2 + 0x14) = *(uint *)(pbVar7 + -4) >> ((&DAT_180575aa8)[bVar1 & 0xf] & 0x1f);
  }
  return (longlong)pbVar7 - (longlong)param_1;
}



/* ===== 1804edfb0 FUN_1804edfb0 ===== */

bool FUN_1804edfb0(undefined8 param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  
  iVar1 = FUN_1804efc10(param_2,param_1);
  uVar3 = *(uint *)(param_2 + 0xc);
  uVar4 = (ulonglong)uVar3;
  do {
    if (uVar3 == 0) {
      lVar2 = 0;
      break;
    }
    uVar3 = (int)uVar4 - 1;
    uVar4 = (ulonglong)uVar3;
    lVar2 = FUN_1804ef840();
    lVar2 = (longlong)*(int *)(param_2 + 0x10) + *(longlong *)(lVar2 + 0x60) + uVar4 * 0x14;
  } while ((iVar1 <= *(int *)(lVar2 + 4)) || (*(int *)(lVar2 + 8) < iVar1));
  return lVar2 != 0;
}



/* ===== 1804ee020 FUN_1804ee020 ===== */

byte FUN_1804ee020(undefined8 param_1,byte *param_2)

{
  return *param_2 & 1;
}



/* ===== 1804ee030 FUN_1804ee030 ===== */

void FUN_1804ee030(longlong *param_1,DWORD64 *param_2,longlong param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  PRUNTIME_FUNCTION p_Var4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  longlong local_res8;
  ulonglong local_res18 [2];
  
  uVar8 = *(uint *)(param_3 + 0xc);
  uVar7 = (ulonglong)uVar8;
  iVar2 = FUN_1804efc10(param_3);
  local_res8 = *param_1;
  do {
    do {
      if (uVar8 == 0) goto LAB_1804ee0f5;
      uVar8 = (int)uVar7 - 1;
      uVar7 = (ulonglong)uVar8;
      lVar6 = (longlong)*(int *)(param_3 + 0x10) + uVar7 * 0x14 + param_2[1];
    } while ((iVar2 <= *(int *)(lVar6 + 4)) || (*(int *)(lVar6 + 8) < iVar2));
    p_Var4 = RtlLookupFunctionEntry(*param_2,local_res18,(PUNWIND_HISTORY_TABLE)0x0);
    lVar10 = (longlong)*(int *)(lVar6 + 0x10) + local_res18[0];
    uVar1 = *(uint *)(lVar6 + 0xc);
    uVar5 = 0;
    if (uVar1 != 0) {
      do {
        if ((longlong)*(int *)(lVar10 + 0xc + uVar5 * 0x14) == (ulonglong)p_Var4->BeginAddress)
        goto LAB_1804ee0e0;
        uVar3 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar3;
      } while (uVar3 < uVar1);
    }
  } while (uVar1 <= (uint)uVar5);
LAB_1804ee0e0:
  local_res8 = *(longlong *)((longlong)*(int *)(lVar10 + 0x10 + uVar5 * 0x14) + *param_1);
LAB_1804ee0f5:
  iVar2 = FUN_1804efc10(param_3,param_2);
  uVar8 = *(uint *)(param_3 + 0xc);
  uVar7 = (ulonglong)uVar8;
  do {
    if (uVar8 == 0) {
      iVar9 = -1;
      break;
    }
    lVar6 = FUN_1804ef840();
    uVar8 = (int)uVar7 - 1;
    uVar7 = (ulonglong)uVar8;
    lVar6 = (longlong)*(int *)(param_3 + 0x10) + *(longlong *)(lVar6 + 0x60);
    iVar9 = *(int *)(lVar6 + 4 + uVar7 * 0x14);
  } while ((iVar2 <= iVar9) || (*(int *)(lVar6 + 8 + uVar7 * 0x14) < iVar2));
  FUN_1804f2470(&local_res8,param_2,param_3,iVar9);
  return;
}



/* ===== 1804ee160 FUN_1804ee160 ===== */

void FUN_1804ee160(longlong *param_1,undefined8 param_2,byte *param_3)

{
  longlong local_res8 [4];
  
  local_res8[0] = *param_1;
  if ((*param_3 & 1) != 0) {
    local_res8[0] = *(longlong *)((ulonglong)*(uint *)(param_3 + 0x14) + local_res8[0]);
  }
  FUN_1804f2620(local_res8,param_2,param_3,0xffffffff);
  return;
}



/* ===== 1804ee1a0 FUN_1804ee1a0 ===== */

longlong * FUN_1804ee1a0(longlong *param_1,DWORD64 *param_2,longlong param_3,longlong *param_4)

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
  iVar2 = FUN_1804efc10(param_3);
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
          goto LAB_1804ee250;
          uVar3 = (int)uVar5 + 1;
          uVar5 = (ulonglong)uVar3;
        } while (uVar3 < uVar1);
      }
      if ((uint)uVar5 < uVar1) {
LAB_1804ee250:
        *param_4 = *(longlong *)((longlong)*(int *)(lVar9 + 0x10 + uVar5 * 0x14) + *param_1);
        return param_4;
      }
    }
    if (uVar7 == 0) {
      return param_4;
    }
  } while( true );
}



/* ===== 1804ee2a0 FUN_1804ee2a0 ===== */

longlong * FUN_1804ee2a0(longlong *param_1,undefined8 param_2,byte *param_3,longlong *param_4)

{
  *param_4 = *param_1;
  if ((*param_3 & 1) != 0) {
    *param_4 = *(longlong *)((ulonglong)*(uint *)(param_3 + 0x14) + *param_1);
  }
  return param_4;
}



/* ===== 1804ee2d0 FUN_1804ee2d0 ===== */

undefined8 *
FUN_1804ee2d0(undefined8 *param_1,undefined8 param_2,int param_3,longlong param_4,longlong param_5)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  undefined4 local_3c;
  
  uVar5 = *(uint *)(param_5 + 0xc);
  iVar4 = FUN_1804efc10(param_5,param_4);
  if (uVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar3 = *(longlong *)(param_4 + 8);
  uVar9 = 0xffffffff;
  lVar8 = (longlong)*(int *)(param_5 + 0x10);
  uVar10 = 0xffffffff;
  lVar2 = lVar3 + lVar8;
  uVar7 = uVar5;
  while( true ) {
    uVar1 = uVar7 - 1;
    if ((*(int *)(lVar3 + (ulonglong)uVar1 * 0x14 + 4 + lVar8) < iVar4) &&
       (iVar4 <= *(int *)(lVar2 + 8 + (ulonglong)uVar1 * 0x14))) break;
    uVar7 = uVar1;
    if (uVar1 == 0) {
      lVar8 = 0;
LAB_1804ee35c:
      uVar7 = 0;
      do {
        uVar6 = (ulonglong)uVar7;
        if ((((lVar8 == 0) ||
             ((*(int *)(lVar8 + 4) < *(int *)(lVar2 + uVar6 * 0x14) &&
              (*(int *)(lVar2 + 4 + uVar6 * 0x14) <= *(int *)(lVar8 + 8))))) &&
            (*(int *)(lVar2 + uVar6 * 0x14) <= param_3)) &&
           (param_3 <= *(int *)(lVar2 + 4 + uVar6 * 0x14))) {
          uVar10 = uVar7;
          if (uVar9 == 0xffffffff) {
            uVar9 = uVar7;
          }
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar5);
      *param_1 = param_2;
      param_1[2] = param_2;
      uVar5 = 0;
      if (uVar9 != 0xffffffff) {
        uVar5 = uVar9;
      }
      *(uint *)(param_1 + 1) = uVar5;
      *(undefined4 *)((longlong)param_1 + 0xc) = local_3c;
      uVar5 = 0;
      if (uVar9 != 0xffffffff) {
        uVar5 = uVar10 + 1;
      }
      *(undefined4 *)((longlong)param_1 + 0x1c) = local_3c;
      *(uint *)(param_1 + 3) = uVar5;
      return param_1;
    }
  }
  lVar8 = lVar3 + (ulonglong)(uVar7 - 1) * 0x14 + lVar8;
  goto LAB_1804ee35c;
}



/* ===== 1804ee400 FUN_1804ee400 ===== */

undefined8 * FUN_1804ee400(undefined8 *param_1,int *param_2,int param_3)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  undefined4 uVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  byte *pbVar12;
  int *local_38;
  int local_30;
  undefined4 local_2c;
  
  uVar6 = local_2c;
  iVar7 = 0;
  local_30 = 0;
  iVar11 = 0;
  local_38 = param_2;
  FUN_1804ee830(param_2,&local_38);
  if (*param_2 != 0) {
    uVar10 = param_2[6];
    iVar9 = 0;
    pbVar12 = *(byte **)(param_2 + 2);
    iVar11 = 0;
    do {
      if (((int)uVar10 <= param_3) && (param_3 <= param_2[7])) {
        iVar11 = iVar9;
        if (iVar7 == 0) {
          iVar11 = iVar7;
        }
        iVar7 = iVar11;
        iVar11 = iVar9;
      }
      iVar9 = iVar9 + 1;
      lVar8 = (longlong)(char)(&DAT_180575a98)[*pbVar12 & 0xf];
      bVar1 = (&DAT_180575aa8)[*pbVar12 & 0xf];
      pbVar5 = pbVar12 + -lVar8;
      uVar10 = *(uint *)(pbVar5 + -4);
      *(byte **)(param_2 + 2) = pbVar5;
      uVar10 = uVar10 >> (bVar1 & 0x1f);
      param_2[6] = uVar10;
      cVar2 = (&DAT_180575a98)[*pbVar5 & 0xf];
      bVar1 = (&DAT_180575aa8)[*pbVar5 & 0xf];
      pbVar5 = pbVar12 + (-lVar8 - (longlong)cVar2);
      uVar3 = *(uint *)(pbVar5 + -4);
      *(byte **)(param_2 + 2) = pbVar5;
      param_2[7] = uVar3 >> (bVar1 & 0x1f);
      bVar1 = (&DAT_180575aa8)[*pbVar5 & 0xf];
      pbVar12 = pbVar12 + ((-(longlong)cVar2 - (longlong)(char)(&DAT_180575a98)[*pbVar5 & 0xf]) -
                          lVar8);
      uVar3 = *(uint *)(pbVar12 + -4);
      *(byte **)(param_2 + 2) = pbVar12;
      param_2[8] = uVar3 >> (bVar1 & 0x1f);
      iVar4 = *(int *)pbVar12;
      pbVar12 = pbVar12 + 4;
      *(byte **)(param_2 + 2) = pbVar12;
      param_2[9] = iVar4;
    } while (iVar9 != *param_2);
    uVar6 = local_2c;
  }
  local_38 = param_2;
  local_30 = iVar7;
  local_2c = uVar6;
  FUN_1804ee830(param_2,&local_38);
  *(int *)(param_1 + 3) = iVar11 + 1;
  *(undefined4 *)((longlong)param_1 + 0x1c) = local_2c;
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar6;
  *param_1 = param_2;
  *(int *)(param_1 + 1) = iVar7;
  param_1[2] = param_2;
  return param_1;
}



/* ===== 1804ee580 FUN_1804ee580 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1804ee580(undefined8 *param_1,ULONG_PTR param_2,ULONG_PTR param_3,ULONG_PTR param_4,
                  ULONG_PTR param_5,ULONG_PTR param_6,int param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 *param_10,byte param_11)

{
  undefined1 auStackY_e8 [32];
  EXCEPTION_RECORD local_b8;
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStackY_e8;
  local_b8._0_8_ = _DAT_180575b60;
  local_b8.ExceptionRecord = _UNK_180575b68;
  local_b8.ExceptionAddress = _DAT_180575b70;
  local_b8._24_8_ = _UNK_180575b78;
  local_b8.ExceptionInformation[9] = _UNK_180575bc8;
  local_b8.ExceptionInformation[10] = _DAT_180575bd0;
  local_b8.ExceptionInformation[0xb] = _UNK_180575bd8;
  local_b8.ExceptionInformation[0xe] = DAT_180575bf0;
  local_b8.ExceptionInformation[0xc]._0_4_ = _DAT_180575be0;
  local_b8.ExceptionInformation[0xc]._4_4_ = _UNK_180575be4;
  local_b8.ExceptionInformation[0xd]._0_4_ = _UNK_180575be8;
  local_b8.ExceptionInformation[0xd]._4_4_ = _UNK_180575bec;
  local_b8.ExceptionInformation[0] = (ULONG_PTR)FUN_1804f1db0;
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



/* ===== 1804ee6b0 FUN_1804ee6b0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1804ee6b0(undefined8 *param_1,ULONG_PTR param_2,ULONG_PTR param_3,ULONG_PTR param_4,
                  ULONG_PTR param_5,undefined8 param_6,int param_7,int param_8,longlong param_9,
                  undefined8 *param_10,byte param_11)

{
  undefined1 auStackY_e8 [32];
  EXCEPTION_RECORD local_b8;
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStackY_e8;
  local_b8._0_8_ = _DAT_180575ac0;
  local_b8.ExceptionRecord = _UNK_180575ac8;
  local_b8.ExceptionInformation[0] = (ULONG_PTR)FUN_1804f1fc0;
  local_b8.ExceptionAddress = _DAT_180575ad0;
  local_b8._24_8_ = _UNK_180575ad8;
  local_b8.ExceptionInformation[2] = param_5;
  local_b8.ExceptionInformation[3] = (ULONG_PTR)param_7;
  local_b8.ExceptionInformation[7] = (ULONG_PTR)param_11;
  local_b8.ExceptionInformation[5] = *(longlong *)(param_9 + 0x18) + param_10[1];
  local_b8.ExceptionInformation[9] = *(longlong *)(param_9 + 0x20) + param_10[1];
  local_b8.ExceptionInformation[0xb] = (ULONG_PTR)param_8;
  local_b8.ExceptionInformation[10] = _DAT_180575b30;
  local_b8.ExceptionInformation[0xc]._0_4_ = _DAT_180575b40;
  local_b8.ExceptionInformation[0xc]._4_4_ = _UNK_180575b44;
  local_b8.ExceptionInformation[0xd]._0_4_ = _UNK_180575b48;
  local_b8.ExceptionInformation[0xd]._4_4_ = _UNK_180575b4c;
  local_b8.ExceptionInformation[0xe] = DAT_180575b50;
  local_b8.ExceptionInformation[8] = 0x19930520;
  local_b8.ExceptionInformation[1] = param_4;
  local_b8.ExceptionInformation[4] = param_3;
  local_b8.ExceptionInformation[6] = param_2;
  RtlUnwindEx((PVOID)*param_1,(PVOID)*param_10,&local_b8,(PVOID)0x0,(PCONTEXT)param_10[5],
              (PUNWIND_HISTORY_TABLE)param_10[8]);
  return;
}



/* ===== 1804ee830 FUN_1804ee830 ===== */

void FUN_1804ee830(longlong param_1,longlong param_2)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  byte *pbVar7;
  longlong lVar8;
  byte *pbVar9;
  
  pbVar9 = *(byte **)(param_1 + 0x10);
  iVar3 = *(int *)(param_2 + 8);
  *(byte **)(param_1 + 8) = pbVar9;
  iVar6 = 0;
  pbVar7 = pbVar9 + -(longlong)(char)(&DAT_180575a98)[*pbVar9 & 0xf];
  *(uint *)(param_1 + 0x18) = *(uint *)(pbVar7 + -4) >> ((&DAT_180575aa8)[*pbVar9 & 0xf] & 0x1f);
  *(byte **)(param_1 + 8) = pbVar7;
  bVar1 = (&DAT_180575aa8)[*pbVar7 & 0xf];
  pbVar7 = pbVar7 + -(longlong)(char)(&DAT_180575a98)[*pbVar7 & 0xf];
  uVar4 = *(uint *)(pbVar7 + -4);
  *(byte **)(param_1 + 8) = pbVar7;
  *(uint *)(param_1 + 0x1c) = uVar4 >> (bVar1 & 0x1f);
  bVar1 = (&DAT_180575aa8)[*pbVar7 & 0xf];
  pbVar7 = pbVar7 + -(longlong)(char)(&DAT_180575a98)[*pbVar7 & 0xf];
  uVar4 = *(uint *)(pbVar7 + -4);
  pbVar9 = pbVar7 + 4;
  *(byte **)(param_1 + 8) = pbVar7;
  *(uint *)(param_1 + 0x20) = uVar4 >> (bVar1 & 0x1f);
  uVar5 = *(undefined4 *)pbVar7;
  *(byte **)(param_1 + 8) = pbVar9;
  *(undefined4 *)(param_1 + 0x24) = uVar5;
  if (iVar3 != 0) {
    do {
      iVar6 = iVar6 + 1;
      lVar8 = (longlong)(char)(&DAT_180575a98)[*pbVar9 & 0xf];
      bVar1 = (&DAT_180575aa8)[*pbVar9 & 0xf];
      pbVar7 = pbVar9 + -lVar8;
      uVar4 = *(uint *)(pbVar7 + -4);
      *(byte **)(param_1 + 8) = pbVar7;
      *(uint *)(param_1 + 0x18) = uVar4 >> (bVar1 & 0x1f);
      cVar2 = (&DAT_180575a98)[*pbVar7 & 0xf];
      bVar1 = (&DAT_180575aa8)[*pbVar7 & 0xf];
      pbVar7 = pbVar9 + (-lVar8 - (longlong)cVar2);
      uVar4 = *(uint *)(pbVar7 + -4);
      *(byte **)(param_1 + 8) = pbVar7;
      *(uint *)(param_1 + 0x1c) = uVar4 >> (bVar1 & 0x1f);
      bVar1 = (&DAT_180575aa8)[*pbVar7 & 0xf];
      pbVar9 = pbVar9 + ((-(longlong)cVar2 - (longlong)(char)(&DAT_180575a98)[*pbVar7 & 0xf]) -
                        lVar8);
      uVar4 = *(uint *)(pbVar9 + -4);
      *(byte **)(param_1 + 8) = pbVar9;
      *(uint *)(param_1 + 0x20) = uVar4 >> (bVar1 & 0x1f);
      uVar5 = *(undefined4 *)pbVar9;
      pbVar9 = pbVar9 + 4;
      *(byte **)(param_1 + 8) = pbVar9;
      *(undefined4 *)(param_1 + 0x24) = uVar5;
      lVar8 = (longlong)(char)(&DAT_180575a98)[*pbVar9 & 0xf];
      bVar1 = (&DAT_180575aa8)[*pbVar9 & 0xf];
      pbVar7 = pbVar9 + -lVar8;
      uVar4 = *(uint *)(pbVar7 + -4);
      *(byte **)(param_1 + 8) = pbVar7;
      *(uint *)(param_1 + 0x18) = uVar4 >> (bVar1 & 0x1f);
      cVar2 = (&DAT_180575a98)[*pbVar7 & 0xf];
      bVar1 = (&DAT_180575aa8)[*pbVar7 & 0xf];
      pbVar7 = pbVar9 + (-lVar8 - (longlong)cVar2);
      uVar4 = *(uint *)(pbVar7 + -4);
      *(byte **)(param_1 + 8) = pbVar7;
      *(uint *)(param_1 + 0x1c) = uVar4 >> (bVar1 & 0x1f);
      bVar1 = (&DAT_180575aa8)[*pbVar7 & 0xf];
      pbVar9 = pbVar9 + ((-(longlong)cVar2 - (longlong)(char)(&DAT_180575a98)[*pbVar7 & 0xf]) -
                        lVar8);
      uVar4 = *(uint *)(pbVar9 + -4);
      *(byte **)(param_1 + 8) = pbVar9;
      *(uint *)(param_1 + 0x20) = uVar4 >> (bVar1 & 0x1f);
      uVar5 = *(undefined4 *)pbVar9;
      pbVar9 = pbVar9 + 4;
      *(byte **)(param_1 + 8) = pbVar9;
      *(undefined4 *)(param_1 + 0x24) = uVar5;
    } while (iVar6 != iVar3);
  }
  return;
}



/* ===== 1804eea20 _CreateFrameInfo ===== */

/* Library Function - Single Match
    _CreateFrameInfo
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined8 * _CreateFrameInfo(undefined8 *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  lVar1 = FUN_1804ef840();
  if (param_1 < *(undefined8 **)(lVar1 + 0x58)) {
    lVar1 = FUN_1804ef840();
    uVar2 = *(undefined8 *)(lVar1 + 0x58);
  }
  else {
    uVar2 = 0;
  }
  param_1[1] = uVar2;
  lVar1 = FUN_1804ef840();
  *(undefined8 **)(lVar1 + 0x58) = param_1;
  return param_1;
}



/* ===== 1804eea60 FUN_1804eea60 ===== */

void FUN_1804eea60(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  
  lVar2 = FUN_1804ef840();
  if (param_1 == *(longlong *)(lVar2 + 0x58)) {
    lVar2 = FUN_1804ef840();
    lVar2 = *(longlong *)(lVar2 + 0x58);
    while (lVar2 != 0) {
      lVar1 = *(longlong *)(lVar2 + 8);
      bVar3 = param_1 == lVar2;
      lVar2 = lVar1;
      if (bVar3) {
        lVar2 = FUN_1804ef840();
        *(longlong *)(lVar2 + 0x58) = lVar1;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



/* ===== 1804eeac0 FUN_1804eeac0 ===== */

undefined8 FUN_1804eeac0(void)

{
  longlong lVar1;
  
  lVar1 = FUN_1804ef840();
  return *(undefined8 *)(lVar1 + 0x60);
}



/* ===== 1804eeae0 FUN_1804eeae0 ===== */

undefined8 FUN_1804eeae0(void)

{
  longlong lVar1;
  
  lVar1 = FUN_1804ef840();
  return *(undefined8 *)(lVar1 + 0x68);
}



