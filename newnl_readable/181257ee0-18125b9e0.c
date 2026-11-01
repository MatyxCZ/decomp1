/* ===== 181257ee0 FUN_181257ee0 ===== */

void FUN_181257ee0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (((char)param_1[1] == '\0') || (*param_1 == 0)) {
    *param_2 = *param_1;
    *(undefined1 *)(param_2 + 1) = 0;
    return;
  }
  lVar2 = -1;
  do {
    lVar1 = lVar2;
    lVar2 = lVar1 + 1;
  } while (*(char *)(*param_1 + 1 + lVar1) != '\0');
  lVar2 = _malloc_base(lVar1 + 2);
  if (lVar2 != 0) {
    FUN_181258ea0(lVar2,lVar1 + 2,*param_1);
    *param_2 = lVar2;
    *(undefined1 *)(param_2 + 1) = 1;
  }
  thunk_FUN_181259da0(0);
  return;
}



/* ===== 181257f80 FUN_181257f80 ===== */

void FUN_181257f80(undefined8 *param_1)

{
  if (*(char *)(param_1 + 1) == '\0') {
    *(undefined1 *)(param_1 + 1) = 0;
    *param_1 = 0;
    return;
  }
  thunk_FUN_181259da0(*param_1);
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = 0;
  return;
}



/* ===== 181257fc0 FUN_181257fc0 ===== */

void FUN_181257fc0(longlong *param_1,byte *param_2)

{
  undefined8 uVar1;
  longlong local_38;
  undefined8 local_30;
  longlong *local_28;
  byte *local_20;
  longlong local_18;
  
  uVar1 = 0x19930520;
  if ((param_2 != (byte *)0x0) && ((*param_2 & 0x10) != 0)) {
    param_2 = *(byte **)(*(longlong *)(*param_1 + -8) + 0x30);
    (*DAT_1812625a8)();
  }
  local_38 = 0;
  if (param_2 != (byte *)0x0) {
    local_38 = (*DAT_181262430)(param_2,&local_38);
    if (((*param_2 & 8) != 0) || (local_38 == 0)) {
      uVar1 = 0x1994000;
    }
  }
  local_30 = uVar1;
  local_28 = param_1;
  local_20 = param_2;
  local_18 = local_38;
  (*DAT_181262428)(0xe06d7363,1,4,&local_30);
  return;
}



/* ===== 18125806c FUN_18125806c ===== */

void FUN_18125806c(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    do {
      if (*param_1 != 0) {
        FUN_1812609b0();
      }
      param_1 = param_1 + 1;
    } while (param_1 != param_2);
  }
  return;
}



/* ===== 1812580a4 FUN_1812580a4 ===== */

undefined8 FUN_1812580a4(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  
  while( true ) {
    if (param_1 == param_2) {
      return 0;
    }
    if ((*param_1 != 0) && (uVar1 = FUN_1812609b0(), (int)uVar1 != 0)) break;
    param_1 = param_1 + 1;
  }
  return uVar1;
}



/* ===== 1812580e0 FUN_1812580e0 ===== */

undefined4 FUN_1812580e0(int param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  int *piVar6;
  int *piVar7;
  undefined4 uVar8;
  
  if (param_1 != -0x1f928c9d) {
    return 0;
  }
  puVar5 = (undefined8 *)FUN_181259560();
  if (puVar5 != (undefined8 *)0x0) {
    piVar2 = (int *)*puVar5;
    for (piVar6 = piVar2; piVar6 != piVar2 + 0x30; piVar6 = piVar6 + 4) {
      if (*piVar6 == -0x1f928c9d) {
        if (piVar6 == (int *)0x0) {
          return 0;
        }
        lVar3 = *(longlong *)(piVar6 + 2);
        if (lVar3 == 0) {
          return 0;
        }
        if (lVar3 == 5) {
          piVar6[2] = 0;
          piVar6[3] = 0;
          return 1;
        }
        if (lVar3 != 1) {
          uVar4 = puVar5[1];
          puVar5[1] = param_2;
          if (piVar6[1] == 8) {
            for (piVar7 = piVar2 + 0xc; piVar7 != piVar2 + 0x30; piVar7 = piVar7 + 4) {
              piVar7[2] = 0;
              piVar7[3] = 0;
            }
            uVar1 = *(undefined4 *)(puVar5 + 2);
            if (*piVar6 == -0x3fffff73) {
              uVar8 = 0x82;
LAB_181258232:
              *(undefined4 *)(puVar5 + 2) = uVar8;
            }
            else {
              if (*piVar6 == -0x3fffff72) {
                uVar8 = 0x83;
                goto LAB_181258232;
              }
              if (*piVar6 == -0x3fffff71) {
                uVar8 = 0x86;
                goto LAB_181258232;
              }
              if (*piVar6 == -0x3fffff70) {
                uVar8 = 0x81;
                goto LAB_181258232;
              }
              if (*piVar6 == -0x3fffff6f) {
                uVar8 = 0x84;
                goto LAB_181258232;
              }
              if (*piVar6 == -0x3fffff6e) {
                uVar8 = 0x8a;
                goto LAB_181258232;
              }
              if (*piVar6 == -0x3fffff6d) {
                uVar8 = 0x85;
                goto LAB_181258232;
              }
              if (*piVar6 == -0x3ffffd4c) {
                uVar8 = 0x8e;
                goto LAB_181258232;
              }
              uVar8 = uVar1;
              if (*piVar6 == -0x3ffffd4b) {
                uVar8 = 0x8d;
                goto LAB_181258232;
              }
            }
            FUN_1812609b0(8,uVar8);
            *(undefined4 *)(puVar5 + 2) = uVar1;
          }
          else {
            piVar6[2] = 0;
            piVar6[3] = 0;
            FUN_1812609b0(piVar6[1]);
          }
          puVar5[1] = uVar4;
        }
        return 0xffffffff;
      }
    }
  }
  return 0;
}



/* ===== 181258260 operator()<> ===== */

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

void operator()<>(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined4 *param_4)

{
  __acrt_lock(*param_2);
  FUN_181258298(param_3);
  __acrt_unlock(*param_4);
  return;
}



/* ===== 181258298 FUN_181258298 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_181258298(undefined8 *param_1)

{
  undefined8 uVar1;
  
  if (DAT_18132f038 != '\0') {
    return;
  }
  LOCK();
  _DAT_18132f028 = 1;
  UNLOCK();
  if (*(int *)*param_1 == 0) {
    if (_DAT_18132f030 != DAT_18126c390) {
      FUN_1812609b0(0,0,0);
    }
    uVar1 = 0x18132f168;
  }
  else {
    if (*(int *)*param_1 != 1) goto LAB_181258307;
    uVar1 = 0x18132f180;
  }
  FUN_181258c40(uVar1);
LAB_181258307:
  if (*(int *)*param_1 == 0) {
    FUN_18125806c(&DAT_181262608,&DAT_181262628);
  }
  FUN_18125806c(&DAT_181262630,&DAT_181262638);
  if (*(int *)param_1[1] == 0) {
    DAT_18132f038 = '\x01';
    *(undefined1 *)param_1[2] = 1;
  }
  return;
}



/* ===== 181258358 FUN_181258358 ===== */

void FUN_181258358(undefined4 param_1,undefined4 param_2,int param_3)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  short *psVar4;
  int *piVar5;
  bool bVar6;
  undefined4 local_res10 [2];
  int local_res18 [2];
  undefined1 local_res20 [8];
  undefined1 local_38 [4];
  undefined4 local_34;
  undefined4 local_30 [2];
  undefined8 local_28;
  undefined4 *local_20;
  int *local_18;
  undefined1 *local_10;
  
  local_28 = 0xfffffffffffffffe;
  local_res10[0] = param_2;
  local_res18[0] = param_3;
  if (param_3 == 0) {
    psVar4 = (short *)(*DAT_181262360)(0);
    if ((((psVar4 != (short *)0x0) && (*psVar4 == 0x5a4d)) &&
        (piVar5 = (int *)((longlong)*(int *)(psVar4 + 0x1e) + (longlong)psVar4), *piVar5 == 0x4550))
       && ((((short)piVar5[6] == 0x20b && (0xe < (uint)piVar5[0x21])) && (piVar5[0x3e] != 0)))) {
      FUN_18125846c(param_1);
    }
  }
  local_res20[0] = 0;
  local_20 = local_res10;
  local_18 = local_res18;
  local_10 = local_res20;
  local_34 = 2;
  local_30[0] = 2;
  operator()<>(local_38,local_30,&local_20,&local_34);
  if (local_res18[0] == 0) {
    iVar3 = FUN_1812597a0();
    if (iVar3 == 1) {
      bVar6 = false;
    }
    else {
      cVar2 = FUN_18125976c();
      bVar6 = cVar2 == '\0';
    }
    if (local_res18[0] == 0) {
      FUN_18125843c(param_1,bVar6);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}



/* ===== 18125843c FUN_18125843c ===== */

void FUN_18125843c(undefined4 param_1,char param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  if (param_2 != '\0') {
    uVar2 = (*DAT_181262438)();
    (*DAT_181262448)(uVar2,param_1);
  }
  FUN_18125846c(param_1);
  (*DAT_181262440)(param_1);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ===== 18125846c FUN_18125846c ===== */

void FUN_18125846c(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  int iVar2;
  longlong local_res10 [3];
  
  local_res10[0] = 0;
  iVar2 = (*DAT_181262458)(0,u_api_ms_win_security_systemfuncti_181263770 + 0x1c,local_res10,param_4
                           ,0xfffffffffffffffe);
  if ((iVar2 != 0) &&
     (lVar1 = (*DAT_181262368)(local_res10[0],u_api_ms_win_security_systemfuncti_181263770 + 0x28),
     lVar1 != 0)) {
    FUN_1812609b0(param_1);
  }
  if (local_res10[0] != 0) {
    (*DAT_181262450)();
  }
  return;
}



/* ===== 1812584d8 FUN_1812584d8 ===== */

void FUN_1812584d8(void)

{
  FUN_181258358(0,0,1);
  return;
}



/* ===== 1812584e8 FUN_1812584e8 ===== */

void FUN_1812584e8(undefined8 param_1)

{
  FUN_181258358(param_1,2);
  return;
}



/* ===== 1812584f4 FUN_1812584f4 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1812584f4(void)

{
  return _DAT_18132f028;
}



/* ===== 1812584fc FUN_1812584fc ===== */

void FUN_1812584fc(char *param_1,undefined8 *param_2,char *param_3,longlong *param_4,
                  longlong *param_5)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  char *pcVar6;
  
  *param_5 = 0;
  *param_4 = 1;
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = param_3;
    param_2 = param_2 + 1;
  }
  bVar1 = false;
  do {
    if (*param_1 == '\"') {
      bVar1 = !bVar1;
      cVar2 = '\"';
      pcVar6 = param_1 + 1;
    }
    else {
      *param_5 = *param_5 + 1;
      if (param_3 != (char *)0x0) {
        *param_3 = *param_1;
        param_3 = param_3 + 1;
      }
      cVar2 = *param_1;
      pcVar6 = param_1 + 1;
      iVar4 = FUN_18125b71c((int)cVar2);
      if (iVar4 != 0) {
        *param_5 = *param_5 + 1;
        if (param_3 != (char *)0x0) {
          *param_3 = *pcVar6;
          param_3 = param_3 + 1;
        }
        pcVar6 = param_1 + 2;
      }
      if (cVar2 == '\0') {
        pcVar6 = pcVar6 + -1;
        goto LAB_1812585ae;
      }
    }
    param_1 = pcVar6;
  } while ((bVar1) || ((cVar2 != ' ' && (cVar2 != '\t'))));
  if (param_3 != (char *)0x0) {
    param_3[-1] = '\0';
  }
LAB_1812585ae:
  bVar1 = false;
  while (cVar2 = *pcVar6, cVar2 != '\0') {
    while ((cVar2 == ' ' || (cVar2 == '\t'))) {
      pcVar6 = pcVar6 + 1;
      cVar2 = *pcVar6;
    }
    if (cVar2 == '\0') break;
    if (param_2 != (undefined8 *)0x0) {
      *param_2 = param_3;
      param_2 = param_2 + 1;
    }
    *param_4 = *param_4 + 1;
    while( true ) {
      bVar5 = true;
      uVar3 = 0;
      while( true ) {
        if (*pcVar6 != '\\') break;
        pcVar6 = pcVar6 + 1;
        uVar3 = uVar3 + 1;
      }
      if (*pcVar6 == '\"') {
        if ((uVar3 & 1) == 0) {
          if ((bVar1) && (pcVar6[1] == '\"')) {
            pcVar6 = pcVar6 + 1;
          }
          else {
            bVar5 = false;
            bVar1 = !bVar1;
          }
        }
        uVar3 = uVar3 >> 1;
      }
      while (uVar3 != 0) {
        uVar3 = uVar3 - 1;
        if (param_3 != (char *)0x0) {
          *param_3 = '\\';
          param_3 = param_3 + 1;
        }
        *param_5 = *param_5 + 1;
      }
      cVar2 = *pcVar6;
      if ((cVar2 == '\0') || ((!bVar1 && ((cVar2 == ' ' || (cVar2 == '\t')))))) break;
      if (bVar5) {
        if (param_3 != (char *)0x0) {
          *param_3 = cVar2;
          param_3 = param_3 + 1;
        }
        iVar4 = FUN_18125b71c((int)*pcVar6);
        if (iVar4 != 0) {
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



/* ===== 1812586bc __acrt_allocate_buffer_for_argv ===== */

/* Library Function - Single Match
    __acrt_allocate_buffer_for_argv
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined8 __acrt_allocate_buffer_for_argv(ulonglong param_1,ulonglong param_2,ulonglong param_3)

{
  undefined8 uVar1;
  
  if ((param_1 < 0x1fffffffffffffff) && (param_2 < 0xffffffffffffffff / param_3)) {
    if (param_2 * param_3 < ~(param_1 * 8)) {
      uVar1 = _calloc_base(param_1 * 8 + param_2 * param_3,1);
      FUN_181259da0(0);
      return uVar1;
    }
  }
  return 0;
}



/* ===== 18125871c FUN_18125871c ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_18125871c(int param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  undefined4 *puVar4;
  longlong *plVar5;
  char *pcVar6;
  int iVar7;
  longlong *local_res10;
  longlong local_res18;
  undefined8 local_res20;
  
  iVar7 = 0;
  if (param_1 == 0) {
    return 0;
  }
  if (1 < param_1 - 1U) {
    puVar4 = (undefined4 *)FUN_181259cfc();
    *puVar4 = 0x16;
    FUN_181259b54();
    return 0x16;
  }
  __acrt_initialize_multibyte();
  FUN_18125aa38(0,0x18132f040,0x104);
  _DAT_18132f428 = 0x18132f040;
  if ((_DAT_18132f448 == (char *)0x0) || (pcVar6 = _DAT_18132f448, *_DAT_18132f448 == '\0')) {
    pcVar6 = (char *)0x18132f040;
  }
  local_res18 = 0;
  local_res20 = 0;
  FUN_1812584fc(pcVar6,0,0,&local_res18,&local_res20);
  lVar1 = local_res18;
  plVar5 = (longlong *)__acrt_allocate_buffer_for_argv(local_res18,local_res20,1);
  if (plVar5 == (longlong *)0x0) {
    puVar4 = (undefined4 *)FUN_181259cfc();
    iVar7 = 0xc;
    *puVar4 = 0xc;
  }
  else {
    FUN_1812584fc(pcVar6,plVar5,plVar5 + lVar1,&local_res18,&local_res20);
    if (param_1 != 1) {
      local_res10 = (longlong *)0x0;
      iVar3 = thunk_FUN_18125a158(plVar5,&local_res10);
      plVar2 = local_res10;
      if (iVar3 != 0) {
        FUN_181259da0(local_res10);
        local_res10 = (longlong *)0x0;
        FUN_181259da0(plVar5);
        return iVar3;
      }
      _DAT_18132f430 = 0;
      lVar1 = *local_res10;
      while (lVar1 != 0) {
        local_res10 = local_res10 + 1;
        _DAT_18132f430 = _DAT_18132f430 + 1;
        lVar1 = *local_res10;
      }
      local_res10 = (longlong *)0x0;
      _DAT_18132f438 = plVar2;
      FUN_181259da0(0);
      local_res10 = (longlong *)0x0;
      goto LAB_181258881;
    }
    _DAT_18132f430 = (int)local_res18 + -1;
    _DAT_18132f438 = plVar5;
  }
  plVar5 = (longlong *)0x0;
LAB_181258881:
  FUN_181259da0(plVar5);
  return iVar7;
}



/* ===== 18125889c FUN_18125889c ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_18125889c(void)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  uVar1 = 0;
  if (_DAT_18132f148 == 0) {
    __acrt_initialize_multibyte();
    lVar2 = FUN_18125b8c8();
    if (lVar2 == 0) {
      FUN_181259da0(0);
      uVar1 = 0xffffffff;
    }
    else {
      lVar3 = FUN_181258910(lVar2);
      if (lVar3 == 0) {
        uVar1 = 0xffffffff;
      }
      else {
        _DAT_18132f148 = lVar3;
        _DAT_18132f160 = lVar3;
      }
      FUN_181259da0(0);
      FUN_181259da0(lVar2);
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== 181258910 FUN_181258910 ===== */

longlong * FUN_181258910(char *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  char *pcVar7;
  longlong *plVar8;
  
  cVar4 = *param_1;
  lVar5 = 0;
  pcVar7 = param_1;
  while (cVar4 != '\0') {
    lVar6 = lVar5 + 1;
    if (cVar4 == '=') {
      lVar6 = lVar5;
    }
    lVar5 = -1;
    do {
      lVar2 = lVar5;
      lVar5 = lVar2 + 1;
    } while (pcVar7[lVar5] != '\0');
    pcVar7 = pcVar7 + lVar2 + 2;
    lVar5 = lVar6;
    cVar4 = *pcVar7;
  }
  plVar3 = (longlong *)_calloc_base(lVar5 + 1,8);
  if (plVar3 == (longlong *)0x0) {
LAB_181258973:
    FUN_181259da0(0);
    plVar3 = (longlong *)0x0;
  }
  else {
    plVar8 = plVar3;
    for (; *param_1 != '\0'; param_1 = param_1 + lVar6) {
      lVar5 = -1;
      do {
        lVar6 = lVar5;
        lVar5 = lVar6 + 1;
      } while (param_1[lVar5] != '\0');
      lVar6 = lVar6 + 2;
      if (*param_1 != '=') {
        lVar5 = _calloc_base(lVar6,1);
        if (lVar5 == 0) {
          free_environment<>(plVar3);
          FUN_181259da0(0);
          goto LAB_181258973;
        }
        iVar1 = FUN_181258ea0();
        if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        *plVar8 = lVar5;
        plVar8 = plVar8 + 1;
        FUN_181259da0();
      }
    }
    FUN_181259da0(0);
  }
  return plVar3;
}



/* ===== 181258a24 free_environment<> ===== */

/* Library Function - Multiple Matches With Same Base Name
    void __cdecl free_environment<char>(char * __ptr64 * __ptr64 const)
    void __cdecl free_environment<wchar_t>(wchar_t * __ptr64 * __ptr64 const)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void free_environment<>(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  if (param_1 != (longlong *)0x0) {
    lVar1 = *param_1;
    plVar2 = param_1;
    while (lVar1 != 0) {
      FUN_181259da0(lVar1);
      plVar2 = plVar2 + 1;
      lVar1 = *plVar2;
    }
    FUN_181259da0(param_1);
  }
  return;
}



/* ===== 181258a68 uninitialize_environment_internal<> ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Multiple Matches With Same Base Name
    void __cdecl uninitialize_environment_internal<char>(char * __ptr64 * __ptr64 & __ptr64)
    void __cdecl uninitialize_environment_internal<wchar_t>(wchar_t * __ptr64 * __ptr64 & __ptr64)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void uninitialize_environment_internal<>(longlong *param_1)

{
  if (*param_1 != _DAT_18132f160) {
    free_environment<>();
  }
  return;
}



/* ===== 181258ae4 thunk_FUN_18125889c ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 thunk_FUN_18125889c(void)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  uVar1 = 0;
  if (_DAT_18132f148 == 0) {
    __acrt_initialize_multibyte();
    lVar2 = FUN_18125b8c8();
    if (lVar2 == 0) {
      FUN_181259da0(0);
      uVar1 = 0xffffffff;
    }
    else {
      lVar3 = FUN_181258910(lVar2);
      if (lVar3 == 0) {
        uVar1 = 0xffffffff;
      }
      else {
        _DAT_18132f148 = lVar3;
        _DAT_18132f160 = lVar3;
      }
      FUN_181259da0(0);
      FUN_181259da0(lVar2);
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== 181258aec operator()<> ===== */

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

undefined4
operator()<>(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  
  __acrt_lock(*param_2);
  uVar1 = FUN_181258b28(param_3);
  __acrt_unlock(*param_4);
  return uVar1;
}



/* ===== 181258b28 FUN_181258b28 ===== */

undefined8 FUN_181258b28(undefined8 *param_1)

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
  
  uVar1 = DAT_18126c390;
  puVar8 = *(ulonglong **)*param_1;
  if (puVar8 == (ulonglong *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    bVar5 = (byte)DAT_18126c390 & 0x3f;
    puVar10 = (ulonglong *)
              ((DAT_18126c390 ^ *puVar8) >> bVar5 | (DAT_18126c390 ^ *puVar8) << 0x40 - bVar5);
    puVar8 = (ulonglong *)
             ((DAT_18126c390 ^ puVar8[1]) >> bVar5 | (DAT_18126c390 ^ puVar8[1]) << 0x40 - bVar5);
    if ((longlong)puVar10 - 1U < 0xfffffffffffffffe) {
      uVar7 = (uint)DAT_18126c390 & 0x3f;
      puVar9 = puVar8;
      uVar3 = DAT_18126c390;
      puVar13 = puVar10;
      while (puVar8 = puVar8 + -1, puVar10 <= puVar8) {
        if (*puVar8 != uVar1) {
          *puVar8 = uVar1;
          FUN_1812609b0(uVar7);
          uVar7 = (uint)DAT_18126c390 & 0x3f;
          uVar11 = DAT_18126c390 ^ **(ulonglong **)*param_1;
          uVar3 = DAT_18126c390 ^ (*(ulonglong **)*param_1)[1];
          sVar6 = (sbyte)uVar7;
          puVar12 = (ulonglong *)(uVar11 >> sVar6 | uVar11 << 0x40 - sVar6);
          puVar4 = (ulonglong *)(uVar3 >> sVar6 | uVar3 << 0x40 - sVar6);
          uVar3 = DAT_18126c390;
          if ((puVar12 != puVar13) || (puVar4 != puVar9)) {
            puVar8 = puVar4;
            puVar9 = puVar4;
            puVar10 = puVar12;
            puVar13 = puVar12;
          }
        }
      }
      if (puVar10 != (ulonglong *)0xffffffffffffffff) {
        FUN_181259da0(puVar10);
        uVar3 = DAT_18126c390;
      }
      **(ulonglong **)*param_1 = uVar3;
      *(ulonglong *)(*(longlong *)*param_1 + 8) = uVar3;
      *(ulonglong *)(*(longlong *)*param_1 + 0x10) = uVar3;
    }
    uVar2 = 0;
  }
  return uVar2;
}



/* ===== 181258c40 FUN_181258c40 ===== */

void FUN_181258c40(undefined8 param_1)

{
  undefined8 local_res8;
  undefined1 local_res10 [8];
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
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



/* ===== 181258c84 _initialize_onexit_table ===== */

/* Library Function - Single Match
    _initialize_onexit_table
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined8 _initialize_onexit_table(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = DAT_18126c390;
  if (param_1 == (longlong *)0x0) {
    return 0xffffffff;
  }
  if (*param_1 == param_1[2]) {
    *param_1 = DAT_18126c390;
    param_1[1] = lVar1;
    param_1[2] = lVar1;
  }
  return 0;
}



/* ===== 181258cc0 FUN_181258cc0 ===== */

undefined1 FUN_181258cc0(void)

{
  _initialize_onexit_table(0x18132f168);
  _initialize_onexit_table(0x18132f180);
  return 1;
}



/* ===== 181258d40 FUN_181258d40 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_181258d40(void)

{
  int iVar1;
  
  LOCK();
  iVar1 = *_DAT_18132f418;
  *_DAT_18132f418 = *_DAT_18132f418 + -1;
  UNLOCK();
  if ((iVar1 == 1) && (_DAT_18132f418 != (int *)&DAT_18126c430)) {
    FUN_181259da0();
    _DAT_18132f418 = (int *)&DAT_18126c430;
  }
  return 1;
}



/* ===== 181258ddc FUN_181258ddc ===== */

void FUN_181258ddc(void)

{
  FUN_18125c21c(u_ext_ms_win_ntuser_windowstation__181263820,u_user32_181263918 + 4);
  return;
}



/* ===== 181258df0 FUN_181258df0 ===== */

bool FUN_181258df0(void)

{
  longlong lVar1;
  
  lVar1 = FUN_181259560();
  return lVar1 != 0;
}



/* ===== 181258e04 FUN_181258e04 ===== */

undefined1 FUN_181258e04(void)

{
  FUN_1812594b0();
  return 1;
}



/* ===== 181258e14 FUN_181258e14 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_181258e14(bool param_1)

{
  undefined4 uVar1;
  
  if (param_1 == false) {
    uVar1 = FUN_18125c29c(u_ext_ms_win_ntuser_windowstation__181263820,u_user32_181263918 + 4);
    return uVar1;
  }
  if (_DAT_18132f968 != 0) {
    common_flush_all(param_1);
  }
  return 1;
}



/* ===== 181258e4c FUN_181258e4c ===== */

undefined1 FUN_181258e4c(void)

{
  FUN_181259690();
  return 1;
}



/* ===== 181258e5c FUN_181258e5c ===== */

void FUN_181258e5c(void)

{
  longlong lVar1;
  
  lVar1 = FUN_181259500();
  if (*(longlong *)(lVar1 + 0x18) != 0) {
    FUN_1812609b0();
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



/* ===== 181258e80 thunk_FUN_181259da0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_181259da0(longlong param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((param_1 != 0) && (iVar2 = (*DAT_181262498)(_DAT_18132f518,0,param_1), iVar2 == 0)) {
    uVar3 = (*DAT_1812623c8)();
    uVar3 = FUN_181259bbc(uVar3);
    puVar1 = (undefined4 *)FUN_181259cfc();
    *puVar1 = uVar3;
  }
  return;
}



/* ===== 181258e90 _malloc_base ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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



/* ===== 181258ea0 FUN_181258ea0 ===== */

undefined8 FUN_181258ea0(char *param_1,longlong param_2,longlong param_3)

{
  char cVar1;
  undefined4 *puVar2;
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
      puVar2 = (undefined4 *)FUN_181259cfc();
      *puVar2 = 0x22;
      FUN_181259b54();
      return 0x22;
    }
    *param_1 = '\0';
  }
  puVar2 = (undefined4 *)FUN_181259cfc();
  *puVar2 = 0x16;
  FUN_181259b54();
  return 0x16;
}



/* ===== 181258f20 abort ===== */

/* Library Function - Single Match
    abort
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl abort(void)

{
  code *pcVar1;
  longlong lVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [32];
  
  lVar2 = __acrt_get_sigabrt_handler();
  if (lVar2 != 0) {
    FUN_18125c474(0x16);
  }
  puVar4 = auStack_28;
  if ((DAT_18126c410 & 2) != 0) {
    iVar3 = (*DAT_181262468)(0x17);
    puVar4 = auStack_28;
    if (iVar3 != 0) {
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(7);
      puVar4 = auStack_20;
    }
    *(undefined8 *)(puVar4 + -8) = 0x181258f6b;
    FUN_181259888(3,0x40000015);
  }
  *(undefined8 *)(puVar4 + -8) = 0x181258f75;
  FUN_1812584e8(3);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ===== 181258f80 FUN_181258f80 ===== */

longlong FUN_181258f80(longlong *param_1)

{
  longlong lVar1;
  undefined4 local_res8 [2];
  
  if (*param_1 == 0) {
    local_res8[0] = (*DAT_1812623c8)();
    if ((char)param_1[2] == '\0') {
      lVar1 = 0;
      *(undefined1 *)(param_1 + 2) = 1;
      param_1[1] = 0;
    }
    else {
      lVar1 = param_1[1];
    }
    lVar1 = FUN_1812595f0(local_res8,lVar1);
    *param_1 = lVar1;
    (*DAT_1812623d0)(local_res8[0]);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
  return *param_1;
}



/* ===== 181258ff0 FUN_181258ff0 ===== */

void FUN_181258ff0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_181258f80();
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(lVar1 + 0x90);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(lVar1 + 0x88);
  FUN_18125cc54(lVar1,(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 8));
  FUN_18125ccc0(lVar1,param_1 + 0x20,*(undefined8 *)(param_1 + 8));
  if ((*(uint *)(lVar1 + 0x3a8) & 2) == 0) {
    *(uint *)(lVar1 + 0x3a8) = *(uint *)(lVar1 + 0x3a8) | 2;
    *(undefined1 *)(param_1 + 0x28) = 2;
  }
  return;
}



/* ===== 181259070 _calloc_base ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong _calloc_base(ulonglong param_1,ulonglong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 *puVar3;
  longlong lVar4;
  
  if ((param_1 == 0) || (param_2 <= 0xffffffffffffffe0 / param_1)) {
    lVar4 = param_1 * param_2;
    if (lVar4 == 0) {
      lVar4 = 1;
    }
    do {
      lVar2 = (*DAT_181262490)(_DAT_18132f518,8,lVar4);
      if (lVar2 != 0) {
        return lVar2;
      }
      iVar1 = FUN_18125d750();
    } while ((iVar1 != 0) && (iVar1 = FUN_18125c2e0(lVar4), iVar1 != 0));
  }
  puVar3 = (undefined4 *)FUN_181259cfc();
  *puVar3 = 0xc;
  return 0;
}



/* ===== 181259080 operator()<> ===== */

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

void operator()<>(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,undefined4 *param_4)

{
  __acrt_lock(*param_2);
  LOCK();
  **(int **)(*(longlong *)*param_3 + 0x88) = **(int **)(*(longlong *)*param_3 + 0x88) + 1;
  UNLOCK();
  __acrt_unlock(*param_4);
  return;
}



/* ===== 1812590c0 operator()<> ===== */

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

void operator()<>(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,undefined4 *param_4)

{
  __acrt_lock(*param_2);
  replace_current_thread_locale_nolock(*(__acrt_ptd **)*param_3,(__crt_locale_data *)0x0);
  __acrt_unlock(*param_4);
  return;
}



/* ===== 181259100 operator()<> ===== */

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

void operator()<>(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,undefined4 *param_4)

{
  __acrt_lock(*param_2);
  replace_current_thread_locale_nolock
            (*(__acrt_ptd **)*param_3,(__crt_locale_data *)**(undefined8 **)param_3[1]);
  __acrt_unlock(*param_4);
  return;
}



/* ===== 181259148 operator()<> ===== */

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

void operator()<>(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,undefined4 *param_4)

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
    if ((iVar1 == 1) && (piVar2 != (int *)&DAT_18126c430)) {
      FUN_181259da0();
    }
  }
  __acrt_unlock(*param_4);
  return;
}



/* ===== 1812591a8 construct_ptd_array ===== */

/* Library Function - Single Match
    void __cdecl construct_ptd_array(struct __acrt_ptd * __ptr64 const)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl construct_ptd_array(__acrt_ptd *param_1)

{
  undefined1 local_res10 [8];
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  undefined4 local_38;
  undefined4 local_34;
  __acrt_ptd *local_30;
  undefined1 *local_28;
  __acrt_ptd **local_20;
  __acrt_ptd **local_18;
  undefined1 **local_10;
  
  local_20 = &local_30;
  local_res18[0] = 5;
  local_res20[0] = 5;
  local_18 = &local_30;
  local_10 = &local_28;
  local_38 = 4;
  local_34 = 4;
  local_28 = &DAT_18132f958;
  *(undefined4 *)(param_1 + 0x28) = 1;
  *(wchar_t **)param_1 = u_api_ms_win_core_sysinfo_l1_2_1_181263660 + 0x10;
  *(undefined4 *)(param_1 + 0x3a8) = 1;
  *(undefined **)(param_1 + 0x88) = &DAT_18126c430;
  *(undefined2 *)(param_1 + 0xbc) = 0x43;
  *(undefined2 *)(param_1 + 0x1c2) = 0x43;
  *(undefined8 *)(param_1 + 0x3a0) = 0;
  local_30 = param_1;
  operator()<>(local_res10,local_res20,&local_20,local_res18);
  operator()<>(local_res10,&local_34,&local_18,&local_38);
  return;
}



/* ===== 181259298 destroy_ptd_array ===== */

/* Library Function - Single Match
    void __cdecl destroy_ptd_array(struct __acrt_ptd * __ptr64 const)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl destroy_ptd_array(__acrt_ptd *param_1)

{
  undefined1 local_res10 [8];
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  undefined4 local_28;
  undefined4 local_24;
  __acrt_ptd *local_20;
  __acrt_ptd **local_18;
  __acrt_ptd **local_10;
  
  local_18 = &local_20;
  local_res18[0] = 5;
  local_res20[0] = 5;
  local_10 = &local_20;
  local_28 = 4;
  local_24 = 4;
  local_20 = param_1;
  if (*(wchar_t **)param_1 != u_api_ms_win_core_sysinfo_l1_2_1_181263660 + 0x10) {
    FUN_181259da0(*(wchar_t **)param_1);
  }
  FUN_181259da0(*(undefined8 *)(local_20 + 0x70));
  FUN_181259da0(*(undefined8 *)(local_20 + 0x58));
  FUN_181259da0(*(undefined8 *)(local_20 + 0x60));
  FUN_181259da0(*(undefined8 *)(local_20 + 0x68));
  FUN_181259da0(*(undefined8 *)(local_20 + 0x48));
  FUN_181259da0(*(undefined8 *)(local_20 + 0x50));
  FUN_181259da0(*(undefined8 *)(local_20 + 0x78));
  FUN_181259da0(*(undefined8 *)(local_20 + 0x80));
  FUN_181259da0(*(undefined8 *)(local_20 + 0x3c0));
  operator()<>(local_res10,local_res20,&local_18,local_res18);
  operator()<>(local_res10,&local_24,&local_10,&local_28);
  return;
}



/* ===== 181259390 FUN_181259390 ===== */

__acrt_ptd * FUN_181259390(void)

{
  undefined4 uVar1;
  int iVar2;
  __acrt_ptd *p_Var3;
  
  uVar1 = (*DAT_1812623c8)();
  iVar2 = FUN_18125bd08(DAT_18126c420,0xffffffffffffffff);
  if (iVar2 != 0) {
    p_Var3 = (__acrt_ptd *)_calloc_base(1,0x3c8);
    if (p_Var3 != (__acrt_ptd *)0x0) {
      iVar2 = FUN_18125bd08(DAT_18126c420,p_Var3);
      if (iVar2 == 0) {
        FUN_18125bd08(DAT_18126c420,0);
        FUN_181259da0(p_Var3);
        p_Var3 = (__acrt_ptd *)0x0;
      }
      else {
        construct_ptd_array(p_Var3);
        FUN_181259da0(0);
      }
      (*DAT_1812623d0)(uVar1);
      return p_Var3;
    }
    FUN_18125bd08(DAT_18126c420,0);
    FUN_181259da0(0);
  }
  (*DAT_1812623d0)(uVar1);
  return (__acrt_ptd *)0x0;
}



/* ===== 181259448 replace_current_thread_locale_nolock ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    void __cdecl replace_current_thread_locale_nolock(struct __acrt_ptd * __ptr64 const,struct
   __crt_locale_data * __ptr64 const)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl replace_current_thread_locale_nolock(__acrt_ptd *param_1,__crt_locale_data *param_2)

{
  undefined *puVar1;
  
  if (*(longlong *)(param_1 + 0x90) != 0) {
    __acrt_release_locale_ref();
    puVar1 = *(undefined **)(param_1 + 0x90);
    if (((puVar1 != _DAT_18132f958) && (puVar1 != &DAT_18126c970)) && (*(int *)(puVar1 + 0x10) == 0)
       ) {
      __acrt_free_locale();
    }
  }
  *(__crt_locale_data **)(param_1 + 0x90) = param_2;
  if (param_2 != (__crt_locale_data *)0x0) {
    __acrt_add_locale_ref(param_2);
  }
  return;
}



/* ===== 1812594b0 FUN_1812594b0 ===== */

void FUN_1812594b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  __acrt_ptd *p_Var1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  if (DAT_18126c420 == -1) {
    p_Var1 = (__acrt_ptd *)0x0;
  }
  else {
    p_Var1 = (__acrt_ptd *)FUN_18125bcf4();
  }
  if (p_Var1 != (__acrt_ptd *)0x0) {
    FUN_18125bd08(DAT_18126c420,0,param_3,param_4,uVar2);
    destroy_ptd_array(p_Var1);
    FUN_181259da0(p_Var1);
  }
  return;
}



/* ===== 181259500 FUN_181259500 ===== */

void FUN_181259500(void)

{
  longlong lVar1;
  
  lVar1 = FUN_181259560();
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return;
}



/* ===== 18125951c FUN_18125951c ===== */

void FUN_18125951c(void)

{
  longlong lVar1;
  
  if (DAT_18126c420 == -1) {
    lVar1 = 0;
  }
  else {
    lVar1 = FUN_18125bcf4();
  }
  if (lVar1 == -1) {
LAB_181259558:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (lVar1 == 0) {
    lVar1 = FUN_181259390();
    if (lVar1 == 0) goto LAB_181259558;
  }
  return;
}



/* ===== 181259560 FUN_181259560 ===== */

longlong FUN_181259560(void)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = 0;
  if (DAT_18132f198 == '\0') {
    uVar1 = (*DAT_1812623c8)();
    if (DAT_18126c420 == -1) {
      lVar2 = 0;
    }
    else {
      lVar2 = FUN_18125bcf4();
    }
    if (lVar2 != -1) {
      if (lVar2 == 0) {
        lVar2 = FUN_181259390();
      }
      lVar3 = lVar2;
    }
    (*DAT_1812623d0)(uVar1);
  }
  else {
    if (DAT_18126c420 == -1) {
      lVar2 = 0;
    }
    else {
      lVar2 = FUN_18125bcfc();
    }
    if (lVar2 != -1) {
      if (lVar2 == 0) {
        lVar2 = FUN_181259390();
      }
      lVar3 = lVar2;
    }
  }
  return lVar3;
}



/* ===== 1812595f0 FUN_1812595f0 ===== */

longlong FUN_1812595f0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = 0;
  if (DAT_18126c420 == -1) {
    lVar1 = 0;
  }
  else {
    lVar1 = FUN_18125bcf4();
  }
  if (lVar1 != -1) {
    if ((lVar1 == 0) && (lVar1 = FUN_181259390(), lVar1 == 0)) {
      return 0;
    }
    lVar2 = param_2 * 0x3c8 + lVar1;
  }
  return lVar2;
}



/* ===== 181259690 FUN_181259690 ===== */

undefined1 FUN_181259690(void)

{
  if (DAT_18126c420 != -1) {
    FUN_18125bcec();
    DAT_18126c420 = -1;
  }
  return 1;
}



/* ===== 1812596b4 __acrt_initialize_locks ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __acrt_initialize_locks
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined4 __acrt_initialize_locks(void)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  do {
    iVar1 = FUN_18125bd10(uVar3 * 0x28 + 0x18132f1a0,4000,0);
    if (iVar1 == 0) {
      __acrt_uninitialize_locks(0);
      return 0;
    }
    _DAT_18132f3f8 = _DAT_18132f3f8 + 1;
    uVar2 = (int)uVar3 + 1;
    uVar3 = (ulonglong)uVar2;
  } while (uVar2 < 0xf);
  return 1;
}



/* ===== 1812596fc __acrt_lock ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Multiple Matches With Different Base Names
    __acrt_lock
    __acrt_unlock
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_lock(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00018125970e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*_DAT_1812623f8)((longlong)param_1 * 0x28 + 0x18132f1a0);
  return;
}



/* ===== 181259718 __acrt_uninitialize_locks ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __acrt_uninitialize_locks
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined8 __acrt_uninitialize_locks(void)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)_DAT_18132f3f8;
  while ((int)uVar1 != 0) {
    uVar1 = (ulonglong)((int)uVar1 - 1);
    (*DAT_181262410)(uVar1 * 0x28 + 0x18132f1a0);
    _DAT_18132f3f8 = _DAT_18132f3f8 - 1;
  }
  return 1;
}



/* ===== 181259750 __acrt_unlock ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __acrt_unlock
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_unlock(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000181259762. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*_DAT_181262400)((longlong)param_1 * 0x28 + 0x18132f1a0);
  return;
}



/* ===== 18125976c FUN_18125976c ===== */

ulonglong FUN_18125976c(void)

{
  return (ulonglong)(uint3)((uint)*(undefined4 *)(*(longlong *)((longlong)Self + 0x60) + 0xbc) >> 8)
         & 0xffffffffffffff01;
}



/* ===== 181259788 FUN_181259788 ===== */

uint FUN_181259788(void)

{
  return *(uint *)(*(longlong *)(*(longlong *)((longlong)Self + 0x60) + 0x20) + 8) >> 0x1f;
}



/* ===== 1812597a0 FUN_1812597a0 ===== */

bool FUN_1812597a0(void)

{
  char cVar1;
  int local_res8 [8];
  
  local_res8[0] = 0;
  cVar1 = FUN_181259788();
  if (cVar1 == '\0') {
    FUN_18125bc3c(local_res8);
  }
  return local_res8[0] != 1;
}



/* ===== 1812597d0 FUN_1812597d0 ===== */

longlong FUN_1812597d0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 local_res8 [2];
  
  lVar1 = *param_1;
  lVar2 = 0;
  if (lVar1 == 0) {
    local_res8[0] = (*DAT_1812623c8)();
    if ((char)param_1[2] == '\0') {
      param_1[1] = 0;
      *(undefined1 *)(param_1 + 2) = 1;
    }
    else {
      lVar2 = param_1[1];
    }
    lVar1 = FUN_1812595f0(local_res8,lVar2);
    *param_1 = lVar1;
    (*DAT_1812623d0)(local_res8[0]);
  }
  return lVar1;
}



/* ===== 18125983c FUN_18125983c ===== */

longlong FUN_18125983c(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  
  lVar2 = 0;
  if (*(char *)(param_2 + 0x10) == '\0') {
    uVar1 = (*DAT_1812623c8)();
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined1 *)(param_2 + 0x10) = 1;
    (*DAT_1812623d0)(uVar1);
  }
  else {
    lVar2 = *(longlong *)(param_2 + 8);
  }
  return param_1 + lVar2 * 8;
}



/* ===== 181259888 FUN_181259888 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_181259888(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined1 local_res8 [8];
  undefined1 auStack_608 [32];
  undefined1 *local_5e8;
  undefined8 *local_5e0;
  undefined8 *local_5d8;
  undefined8 local_5d0;
  undefined8 local_5c8;
  undefined8 local_5c0;
  undefined8 local_5b8;
  undefined4 *local_5b0;
  undefined1 *local_5a8;
  undefined4 local_598;
  undefined4 local_594;
  undefined1 local_4f8 [152];
  undefined1 *local_460;
  undefined8 local_400;
  ulonglong local_28;
  
  local_28 = DAT_18126c390 ^ (ulonglong)auStack_608;
  if (param_1 != -1) {
    FUN_181255380();
  }
  FUN_181261130(&local_598,0,0x98);
  FUN_181261130(local_4f8,0,0x4d0);
  local_5c0 = 0;
  local_5b0 = &local_598;
  local_5c8 = 0;
  local_5b8 = 0;
  local_5a8 = local_4f8;
  (*DAT_181262470)(local_4f8);
  lVar3 = (*DAT_181262418)(local_400,&local_5c8,0);
  if (lVar3 != 0) {
    local_5d0 = 0;
    local_5d8 = &local_5c0;
    local_5e0 = &local_5b8;
    local_5e8 = local_4f8;
    (*DAT_181262478)(0,local_5c8,local_400,lVar3);
  }
  local_460 = local_res8;
  local_598 = param_2;
  local_594 = param_3;
  iVar1 = (*DAT_181262480)();
  (*DAT_1812623a0)(0);
  iVar2 = (*DAT_181262488)(&local_5b0);
  if (((iVar2 == 0) && (iVar1 == 0)) && (param_1 != -1)) {
    FUN_181255380(param_1);
  }
  return;
}



/* ===== 181259a00 FUN_181259a00 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_181259a00(void)

{
  longlong lVar1;
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
  }
  FUN_181259a9c();
  if (local_20 == '\x02') {
    *(uint *)(local_48[0] + 0x3a8) = *(uint *)(local_48[0] + 0x3a8) & 0xfffffffd;
  }
  if (local_18 != '\0') {
    lVar1 = FUN_181258f80(local_48);
    *(undefined4 *)(lVar1 + 0x20) = local_1c;
  }
  if (local_10 != '\0') {
    lVar1 = FUN_181258f80(local_48);
    *(undefined4 *)(lVar1 + 0x24) = local_14;
  }
  return;
}



/* ===== 181259a9c FUN_181259a9c ===== */

void FUN_181259a9c(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,uint param_4,uintptr_t param_5
                  ,undefined8 param_6)

{
  longlong lVar1;
  ulonglong *puVar2;
  byte bVar3;
  
  lVar1 = FUN_1812597d0(param_6);
  if (((lVar1 == 0) || (*(longlong *)(lVar1 + 0x3b8) == 0)) &&
     (puVar2 = (ulonglong *)FUN_18125983c(0x18132f400,param_6), bVar3 = (byte)DAT_18126c390 & 0x3f,
     (*puVar2 ^ DAT_18126c390) >> bVar3 == 0 && (*puVar2 ^ DAT_18126c390) << 0x40 - bVar3 == 0)) {
                    /* WARNING: Subroutine does not return */
    _invoke_watson(param_1,param_2,param_3,param_4,param_5);
  }
  FUN_1812609b0(param_1,param_2,param_3,param_4,param_5);
  return;
}



/* ===== 181259b54 FUN_181259b54 ===== */

void FUN_181259b54(void)

{
  FUN_181259a00(0,0,0,0,0);
  return;
}



/* ===== 181259b74 _invoke_watson ===== */

/* Library Function - Single Match
    _invoke_watson
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl
_invoke_watson(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,uint param_4,uintptr_t param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [32];
  
  iVar3 = (*DAT_181262468)(0x17);
  puVar4 = auStack_28;
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar4 = auStack_20;
  }
  *(undefined8 *)(puVar4 + -8) = 0x181259ba2;
  FUN_181259888(2,0xc0000417);
  *(undefined8 *)(puVar4 + -8) = 0x181259ba8;
  uVar2 = (*DAT_181262438)();
                    /* WARNING: Could not recover jumptable at 0x000181259bb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_181262448)(uVar2,0xc0000417);
  return;
}



/* ===== 181259bbc FUN_181259bbc ===== */

uint FUN_181259bbc(uint param_1)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  wchar_t *pwVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  if (param_1 != 0) {
    if (param_1 < 0xe) {
      return *(uint *)(u_user32_181263918 + (ulonglong)(param_1 - 1) * 4 + 6);
    }
    if (param_1 < 0x719) {
      uVar5 = 0x2d;
      uVar9 = 0;
      uVar7 = 0x2c;
      do {
        uVar8 = uVar5 >> 1;
        if (uVar8 == 0) {
          if (uVar5 != 0) {
            pwVar4 = u_user32_181263918 + uVar9 * 4 + 4;
            if (param_1 != *(uint *)pwVar4) {
              pwVar4 = (wchar_t *)0x0;
            }
LAB_181259c5d:
            if (pwVar4 != (wchar_t *)0x0) {
              return *(uint *)(pwVar4 + 2);
            }
          }
          break;
        }
        uVar6 = uVar8 - 1;
        if ((uVar5 & 1) != 0) {
          uVar6 = uVar8;
        }
        lVar1 = uVar6 + uVar9;
        pwVar4 = u_user32_181263918 + lVar1 * 4 + 4;
        if (param_1 == *(uint *)pwVar4) goto LAB_181259c5d;
        uVar3 = lVar1 - 1;
        uVar5 = uVar6;
        if (*(uint *)pwVar4 <= param_1) {
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



/* ===== 181259c8c FUN_181259c8c ===== */

void FUN_181259c8c(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)FUN_181259cd8();
  *puVar1 = param_1;
  uVar2 = FUN_181259bbc(param_1);
  puVar1 = (undefined4 *)FUN_181259cfc();
  *puVar1 = uVar2;
  return;
}



/* ===== 181259cb4 FUN_181259cb4 ===== */

void FUN_181259cb4(undefined4 param_1,longlong param_2)

{
  undefined4 uVar1;
  
  *(undefined1 *)(param_2 + 0x38) = 1;
  *(undefined4 *)(param_2 + 0x34) = param_1;
  uVar1 = FUN_181259bbc();
  *(undefined4 *)(param_2 + 0x2c) = uVar1;
  *(undefined1 *)(param_2 + 0x30) = 1;
  return;
}



/* ===== 181259cd8 FUN_181259cd8 ===== */

undefined * FUN_181259cd8(void)

{
  longlong lVar1;
  undefined *puVar2;
  
  lVar1 = FUN_181259560();
  puVar2 = (undefined *)(lVar1 + 0x24);
  if (lVar1 == 0) {
    puVar2 = &DAT_18126c428;
  }
  return puVar2;
}



/* ===== 181259cfc FUN_181259cfc ===== */

undefined * FUN_181259cfc(void)

{
  longlong lVar1;
  undefined *puVar2;
  
  lVar1 = FUN_181259560();
  puVar2 = (undefined *)(lVar1 + 0x20);
  if (lVar1 == 0) {
    puVar2 = &DAT_18126c424;
  }
  return puVar2;
}



/* ===== 181259d20 _calloc_base ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    _calloc_base
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

longlong _calloc_base(ulonglong param_1,ulonglong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 *puVar3;
  longlong lVar4;
  
  if ((param_1 == 0) || (param_2 <= 0xffffffffffffffe0 / param_1)) {
    lVar4 = param_1 * param_2;
    if (lVar4 == 0) {
      lVar4 = 1;
    }
    do {
      lVar2 = (*DAT_181262490)(_DAT_18132f518,8,lVar4);
      if (lVar2 != 0) {
        return lVar2;
      }
      iVar1 = FUN_18125d750();
    } while ((iVar1 != 0) && (iVar1 = FUN_18125c2e0(lVar4), iVar1 != 0));
  }
  puVar3 = (undefined4 *)FUN_181259cfc();
  *puVar3 = 0xc;
  return 0;
}



/* ===== 181259da0 FUN_181259da0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_181259da0(longlong param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((param_1 != 0) && (iVar2 = (*DAT_181262498)(_DAT_18132f518,0,param_1), iVar2 == 0)) {
    uVar3 = (*DAT_1812623c8)();
    uVar3 = FUN_181259bbc(uVar3);
    puVar1 = (undefined4 *)FUN_181259cfc();
    *puVar1 = uVar3;
  }
  return;
}



/* ===== 181259e0c FUN_181259e0c ===== */

uint FUN_181259e0c(char *param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  uint *puVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  bool bVar8;
  
  if (param_1 == (char *)0x0) {
    if (*(char *)(param_2 + 0x28) != '\0') {
      FUN_181259da0(*(undefined8 *)(param_2 + 0x10));
      *(undefined1 *)(param_2 + 0x28) = 0;
    }
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined8 *)(param_2 + 0x18) = 0;
  }
  else {
    if (*param_1 != '\0') {
      iVar1 = FUN_18125b758(param_4,9,param_1,0xffffffff,0,0);
      uVar7 = (ulonglong)iVar1;
      if (iVar1 != 0) {
        uVar6 = *(ulonglong *)(param_2 + 0x18);
        if (uVar6 < uVar7) {
          if (*(char *)(param_2 + 0x28) != '\0') {
            FUN_181259da0(*(undefined8 *)(param_2 + 0x10));
            *(undefined1 *)(param_2 + 0x28) = 0;
          }
          lVar3 = _malloc_base(uVar7 * 2);
          *(longlong *)(param_2 + 0x10) = lVar3;
          uVar6 = -(ulonglong)(lVar3 != 0) & uVar7;
          uVar5 = ~-(uint)(lVar3 != 0) & 0xc;
          if (lVar3 != 0) {
            uVar5 = 0;
          }
          *(bool *)(param_2 + 0x28) = lVar3 != 0;
          *(ulonglong *)(param_2 + 0x18) = uVar6;
          if (uVar5 != 0) {
            return uVar5;
          }
        }
        iVar1 = FUN_18125b758(param_4,9,param_1,0xffffffff,*(undefined8 *)(param_2 + 0x10),
                              (int)uVar6);
        if ((longlong)iVar1 != 0) {
          *(longlong *)(param_2 + 0x20) = (longlong)iVar1 + -1;
          return 0;
        }
      }
      uVar2 = (*DAT_1812623c8)();
      FUN_181259c8c(uVar2);
      puVar4 = (uint *)FUN_181259cfc();
      return *puVar4;
    }
    if (*(longlong *)(param_2 + 0x18) == 0) {
      if (*(char *)(param_2 + 0x28) != '\0') {
        FUN_181259da0(*(undefined8 *)(param_2 + 0x10));
        *(undefined1 *)(param_2 + 0x28) = 0;
      }
      lVar3 = _malloc_base(2);
      *(longlong *)(param_2 + 0x10) = lVar3;
      uVar5 = ~-(uint)(lVar3 != 0) & 0xc;
      bVar8 = lVar3 != 0;
      if (bVar8) {
        uVar5 = 0;
      }
      *(bool *)(param_2 + 0x28) = bVar8;
      *(ulonglong *)(param_2 + 0x18) = (ulonglong)bVar8;
      if (uVar5 != 0) {
        return uVar5;
      }
    }
    **(undefined2 **)(param_2 + 0x10) = 0;
  }
  *(undefined8 *)(param_2 + 0x20) = 0;
  return 0;
}



/* ===== 181259fac FUN_181259fac ===== */

uint FUN_181259fac(short *param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  uint *puVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  bool bVar8;
  
  if (param_1 == (short *)0x0) {
    if (*(char *)(param_2 + 0x28) != '\0') {
      FUN_181259da0(*(undefined8 *)(param_2 + 0x10));
      *(undefined1 *)(param_2 + 0x28) = 0;
    }
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined8 *)(param_2 + 0x18) = 0;
  }
  else {
    if (*param_1 != 0) {
      iVar1 = FUN_18125b7e8(param_4,0,param_1,0xffffffff,0,0,0,0);
      uVar7 = (ulonglong)iVar1;
      if (iVar1 != 0) {
        uVar6 = *(ulonglong *)(param_2 + 0x18);
        if (uVar6 < uVar7) {
          if (*(char *)(param_2 + 0x28) != '\0') {
            FUN_181259da0(*(undefined8 *)(param_2 + 0x10));
            *(undefined1 *)(param_2 + 0x28) = 0;
          }
          lVar3 = _malloc_base(uVar7);
          *(longlong *)(param_2 + 0x10) = lVar3;
          uVar6 = -(ulonglong)(lVar3 != 0) & uVar7;
          uVar5 = ~-(uint)(lVar3 != 0) & 0xc;
          if (lVar3 != 0) {
            uVar5 = 0;
          }
          *(bool *)(param_2 + 0x28) = lVar3 != 0;
          *(ulonglong *)(param_2 + 0x18) = uVar6;
          if (uVar5 != 0) {
            return uVar5;
          }
        }
        iVar1 = FUN_18125b7e8(param_4,0,param_1,0xffffffff,*(undefined8 *)(param_2 + 0x10),
                              (int)uVar6,0,0);
        if ((longlong)iVar1 != 0) {
          *(longlong *)(param_2 + 0x20) = (longlong)iVar1 + -1;
          return 0;
        }
      }
      uVar2 = (*DAT_1812623c8)();
      FUN_181259c8c(uVar2);
      puVar4 = (uint *)FUN_181259cfc();
      return *puVar4;
    }
    if (*(longlong *)(param_2 + 0x18) == 0) {
      if (*(char *)(param_2 + 0x28) != '\0') {
        FUN_181259da0(*(undefined8 *)(param_2 + 0x10));
        *(undefined1 *)(param_2 + 0x28) = 0;
      }
      lVar3 = _malloc_base(1);
      *(longlong *)(param_2 + 0x10) = lVar3;
      uVar5 = ~-(uint)(lVar3 != 0) & 0xc;
      bVar8 = lVar3 != 0;
      if (bVar8) {
        uVar5 = 0;
      }
      *(bool *)(param_2 + 0x28) = bVar8;
      *(ulonglong *)(param_2 + 0x18) = (ulonglong)bVar8;
      if (uVar5 != 0) {
        return uVar5;
      }
    }
    **(undefined1 **)(param_2 + 0x10) = 0;
  }
  *(undefined8 *)(param_2 + 0x20) = 0;
  return 0;
}



/* ===== 18125a158 FUN_18125a158 ===== */

int FUN_18125a158(longlong *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong local_res10;
  longlong local_res18;
  longlong local_res20;
  longlong *local_58;
  longlong *plStack_50;
  undefined8 local_48;
  
  if (param_2 == (longlong *)0x0) {
    puVar1 = (undefined4 *)FUN_181259cfc();
    iVar5 = 0x16;
    *puVar1 = 0x16;
    FUN_181259b54();
  }
  else {
    *param_2 = 0;
    lVar4 = *param_1;
    local_58 = (longlong *)0x0;
    plStack_50 = (longlong *)0x0;
    local_48 = 0;
    while (plVar6 = plStack_50, plVar7 = local_58, lVar4 != 0) {
      local_res10 = CONCAT53(local_res10._3_5_,0x3f2a);
      lVar4 = FUN_18125dd00(lVar4,&local_res10);
      if (lVar4 == 0) {
        iVar5 = FUN_18125a394(*param_1,0,0,&local_58);
        plVar7 = local_58;
        if (iVar5 != 0) {
          plVar6 = local_58;
          if (local_58 != plStack_50) {
            do {
              FUN_181259da0(*plVar6);
              plVar6 = plVar6 + 1;
            } while (plVar6 != plStack_50);
          }
          goto LAB_18125a2a7;
        }
      }
      else {
        iVar5 = FUN_18125a518(*param_1,lVar4,&local_58);
        plVar7 = local_58;
        if (iVar5 != 0) {
          plVar6 = local_58;
          if (local_58 != plStack_50) {
            do {
              FUN_181259da0(*plVar6);
              plVar6 = plVar6 + 1;
            } while (plVar6 != plStack_50);
          }
          goto LAB_18125a2a7;
        }
      }
      param_1 = param_1 + 1;
      lVar4 = *param_1;
    }
    lVar4 = 0;
    local_res18 = 0;
    lVar8 = ((longlong)plStack_50 - (longlong)local_58 >> 3) + 1;
    plVar2 = local_58;
    if (local_58 != plStack_50) {
      do {
        lVar3 = -1;
        do {
          lVar3 = lVar3 + 1;
        } while (*(char *)(*plVar2 + lVar3) != '\0');
        plVar2 = plVar2 + 1;
        lVar4 = lVar4 + 1 + lVar3;
      } while (plVar2 != plStack_50);
      local_res18 = lVar4;
    }
    lVar4 = __acrt_allocate_buffer_for_argv(lVar8,local_res18,1);
    if (lVar4 == 0) {
      FUN_181259da0(0);
      for (plVar2 = plVar7; plVar2 != plVar6; plVar2 = plVar2 + 1) {
        FUN_181259da0(*plVar2);
      }
      iVar5 = -1;
LAB_18125a2a7:
      FUN_181259da0(plVar7);
    }
    else {
      lVar8 = lVar4 + lVar8 * 8;
      local_res20 = lVar8;
      if (plVar7 != plVar6) {
        local_res10 = lVar4 - (longlong)plVar7;
        plVar2 = plVar7;
        do {
          lVar3 = -1;
          do {
            lVar9 = lVar3;
            lVar3 = lVar9 + 1;
          } while (*(char *)(*plVar2 + lVar3) != '\0');
          iVar5 = FUN_18125db30();
          if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
          *(longlong *)(local_res10 + (longlong)plVar2) = lVar8;
          lVar8 = lVar8 + lVar9 + 2;
          plVar2 = plVar2 + 1;
        } while (plVar2 != plVar6);
      }
      *param_2 = lVar4;
      FUN_181259da0(0);
      for (plVar2 = plVar7; plVar2 != plVar6; plVar2 = plVar2 + 1) {
        FUN_181259da0(*plVar2);
      }
      FUN_181259da0(plVar7);
      iVar5 = 0;
    }
  }
  return iVar5;
}



/* ===== 18125a394 FUN_18125a394 ===== */

undefined8 FUN_18125a394(longlong param_1,undefined8 param_2,ulonglong param_3,longlong *param_4)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar4;
  longlong lVar3;
  ulonglong uVar5;
  undefined8 uVar6;
  
  uVar6 = 0;
  lVar3 = -1;
  do {
    lVar4 = lVar3;
    lVar3 = lVar4 + 1;
  } while (*(char *)(param_1 + lVar3) != '\0');
  uVar5 = lVar4 + 2;
  if (~param_3 < uVar5) {
    return 0xc;
  }
  uVar2 = _calloc_base(param_3 + 1 + uVar5);
  if (((param_3 != 0) && (iVar1 = FUN_18125db30(), iVar1 != 0)) ||
     (iVar1 = FUN_18125db30(), iVar1 != 0)) {
                    /* WARNING: Subroutine does not return */
    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  if (param_4[1] == param_4[2]) {
    if (*param_4 == 0) {
      lVar3 = _calloc_base(4,8);
      *param_4 = lVar3;
      FUN_181259da0(0);
      lVar3 = *param_4;
      if (lVar3 != 0) {
        param_4[1] = lVar3;
        param_4[2] = lVar3 + 0x20;
        goto LAB_18125a4ea;
      }
    }
    else {
      uVar5 = param_4[2] - *param_4 >> 3;
      if (uVar5 < 0x8000000000000000) {
        lVar3 = _recalloc_base(*param_4,uVar5 * 2,8);
        if (lVar3 != 0) {
          *param_4 = lVar3;
          param_4[1] = lVar3 + uVar5 * 8;
          param_4[2] = lVar3 + uVar5 * 0x10;
          FUN_181259da0(0);
          goto LAB_18125a4ea;
        }
        FUN_181259da0(0);
      }
    }
    uVar6 = 0xc;
    FUN_181259da0(uVar2);
  }
  else {
LAB_18125a4ea:
    *(undefined8 *)param_4[1] = uVar2;
    param_4[1] = param_4[1] + 8;
  }
  FUN_181259da0(0);
  return uVar6;
}



/* ===== 18125a518 FUN_18125a518 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_18125a518(char *param_1,char *param_2,longlong *param_3)

{
  byte bVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined8 uVar7;
  char *pcVar8;
  longlong lVar9;
  longlong lVar10;
  byte bVar11;
  undefined1 auStack_378 [32];
  undefined8 local_358;
  undefined4 local_350;
  undefined1 local_348 [8];
  ulonglong local_340;
  undefined8 local_338;
  undefined8 local_330;
  undefined8 local_328;
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
  undefined1 local_298 [44];
  undefined1 local_26c [548];
  ulonglong local_48;
  
  local_48 = DAT_18126c390 ^ (ulonglong)auStack_378;
  while ((param_2 != param_1 &&
         ((0x2d < (byte)(*param_2 - 0x2fU) ||
          ((0x200000000801U >> ((longlong)(char)(*param_2 - 0x2fU) & 0x3fU) & 1) == 0))))) {
    param_2 = (char *)FUN_18125e0b8(param_1);
  }
  if ((*param_2 == ':') && (param_2 != param_1 + 1)) {
    uVar5 = FUN_18125a394(param_1,0,0,param_3);
  }
  else {
    bVar11 = *param_2 - 0x2f;
    if ((0x2d < bVar11) ||
       (bVar1 = 1, (0x200000000801U >> ((longlong)(char)bVar11 & 0x3fU) & 1) == 0)) {
      bVar1 = 0;
    }
    uVar5 = -(ulonglong)bVar1 & (ulonglong)(param_2 + (1 - (longlong)param_1));
    local_340 = uVar5;
    FUN_181261130(local_298,0,0x250);
    local_338 = 0;
    local_330 = 0;
    local_328 = 0;
    local_320 = 0;
    local_318 = 0;
    local_310 = '\0';
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_308,(__crt_locale_pointers *)0x0);
    if (*(int *)(local_300 + 0xc) == 0xfde9) {
      if (local_2f0 != '\0') {
        *(uint *)(local_308 + 0x3a8) = *(uint *)(local_308 + 0x3a8) & 0xfffffffd;
      }
      uVar7 = 0xfde9;
    }
    else {
      iVar3 = FUN_18125bc98();
      if (iVar3 == 0) {
        if (local_2f0 != '\0') {
          *(uint *)(local_308 + 0x3a8) = *(uint *)(local_308 + 0x3a8) & 0xfffffffd;
        }
        uVar7 = 1;
      }
      else {
        if (local_2f0 != '\0') {
          *(uint *)(local_308 + 0x3a8) = *(uint *)(local_308 + 0x3a8) & 0xfffffffd;
        }
        uVar7 = 0;
      }
    }
    iVar3 = FUN_181259e0c(param_1,&local_338,local_348,uVar7);
    local_350 = 0;
    local_358 = 0;
    uVar7 = local_328;
    if (iVar3 != 0) {
      uVar7 = 0;
    }
    lVar6 = (*DAT_1812624a8)(uVar7,0,local_298,0);
    if (lVar6 == -1) {
      uVar4 = FUN_18125a394(param_1,0,0,param_3);
      uVar5 = (ulonglong)uVar4;
      if (local_310 != '\0') {
        FUN_181259da0(local_328);
      }
    }
    else {
      lVar10 = param_3[1] - *param_3 >> 3;
      do {
        uVar7 = 0;
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
          uVar7 = 0xfde9;
        }
        else {
          iVar3 = FUN_18125bc98();
          if (iVar3 == 0) {
            if (local_2d0 != '\0') {
              *(uint *)(local_2e8 + 0x3a8) = *(uint *)(local_2e8 + 0x3a8) & 0xfffffffd;
            }
            uVar7 = 1;
          }
          else if (local_2d0 != '\0') {
            *(uint *)(local_2e8 + 0x3a8) = *(uint *)(local_2e8 + 0x3a8) & 0xfffffffd;
          }
        }
        iVar3 = FUN_181259fac(local_26c,&local_2c8,local_348,uVar7);
        pcVar2 = local_2b8;
        pcVar8 = local_2b8;
        if (iVar3 != 0) {
          pcVar8 = (char *)0x0;
        }
        if ((*pcVar8 == '.') && ((pcVar8[1] == '\0' || ((pcVar8[1] == '.' && (pcVar8[2] == '\0')))))
           ) {
          if (local_2a0 != '\0') {
            FUN_181259da0(local_2b8);
          }
        }
        else {
          uVar4 = FUN_18125a394(pcVar8,param_1,uVar5,param_3);
          if (uVar4 != 0) {
            if (local_2a0 != '\0') {
              FUN_181259da0(pcVar2);
            }
            (*DAT_1812624a0)(lVar6);
            if (local_310 != '\0') {
              FUN_181259da0(local_328);
            }
            return (ulonglong)uVar4;
          }
          if (local_2a0 != '\0') {
            FUN_181259da0(pcVar2);
          }
          uVar5 = local_340;
        }
        iVar3 = (*DAT_1812624b0)(lVar6);
      } while (iVar3 != 0);
      lVar9 = param_3[1] - *param_3 >> 3;
      if (lVar10 != lVar9) {
        FUN_18125d790(*param_3 + lVar10 * 8,lVar9 - lVar10,8,&LAB_181259df8);
      }
      (*DAT_1812624a0)(lVar6);
      if (local_310 != '\0') {
        FUN_181259da0(local_328);
      }
      uVar5 = 0;
    }
  }
  return uVar5;
}



/* ===== 18125a878 _LocaleUpdate::_LocaleUpdate ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
    if (_DAT_18132f990 != 0) {
      lVar3 = FUN_181259500();
      *(longlong *)this = lVar3;
      *(undefined8 *)p_Var1 = *(undefined8 *)(lVar3 + 0x90);
      *(undefined8 *)(this + 0x10) = *(undefined8 *)(lVar3 + 0x88);
      __acrt_update_locale_info(lVar3,p_Var1);
      FUN_18125cc8c(*(undefined8 *)this,this + 0x10);
      uVar2 = *(uint *)(*(longlong *)this + 0x3a8);
      if ((uVar2 & 2) == 0) {
        *(uint *)(*(longlong *)this + 0x3a8) = uVar2 | 2;
        this[0x18] = (_LocaleUpdate)0x1;
        return this;
      }
      return this;
    }
    uVar4 = _DAT_18126cac8;
    uVar5 = uRam000000018126cacc;
    uVar6 = _DAT_18126cad0;
    uVar7 = uRam000000018126cad4;
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



/* ===== 18125a914 thunk_FUN_18125a158 ===== */

int thunk_FUN_18125a158(longlong *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lStackX_10;
  longlong lStackX_18;
  longlong lStackX_20;
  longlong *plStack_58;
  longlong *plStack_50;
  undefined8 uStack_48;
  
  if (param_2 == (longlong *)0x0) {
    puVar1 = (undefined4 *)FUN_181259cfc();
    iVar5 = 0x16;
    *puVar1 = 0x16;
    FUN_181259b54();
  }
  else {
    *param_2 = 0;
    lVar4 = *param_1;
    plStack_58 = (longlong *)0x0;
    plStack_50 = (longlong *)0x0;
    uStack_48 = 0;
    while (plVar6 = plStack_50, plVar7 = plStack_58, lVar4 != 0) {
      lStackX_10 = CONCAT53(lStackX_10._3_5_,0x3f2a);
      lVar4 = FUN_18125dd00(lVar4,&lStackX_10);
      if (lVar4 == 0) {
        iVar5 = FUN_18125a394(*param_1,0,0,&plStack_58);
        plVar7 = plStack_58;
        if (iVar5 != 0) {
          plVar6 = plStack_58;
          if (plStack_58 != plStack_50) {
            do {
              FUN_181259da0(*plVar6);
              plVar6 = plVar6 + 1;
            } while (plVar6 != plStack_50);
          }
          goto LAB_18125a2a7;
        }
      }
      else {
        iVar5 = FUN_18125a518(*param_1,lVar4,&plStack_58);
        plVar7 = plStack_58;
        if (iVar5 != 0) {
          plVar6 = plStack_58;
          if (plStack_58 != plStack_50) {
            do {
              FUN_181259da0(*plVar6);
              plVar6 = plVar6 + 1;
            } while (plVar6 != plStack_50);
          }
          goto LAB_18125a2a7;
        }
      }
      param_1 = param_1 + 1;
      lVar4 = *param_1;
    }
    lVar4 = 0;
    lStackX_18 = 0;
    lVar8 = ((longlong)plStack_50 - (longlong)plStack_58 >> 3) + 1;
    plVar2 = plStack_58;
    if (plStack_58 != plStack_50) {
      do {
        lVar3 = -1;
        do {
          lVar3 = lVar3 + 1;
        } while (*(char *)(*plVar2 + lVar3) != '\0');
        plVar2 = plVar2 + 1;
        lVar4 = lVar4 + 1 + lVar3;
      } while (plVar2 != plStack_50);
      lStackX_18 = lVar4;
    }
    lVar4 = __acrt_allocate_buffer_for_argv(lVar8,lStackX_18,1);
    if (lVar4 == 0) {
      FUN_181259da0(0);
      for (plVar2 = plVar7; plVar2 != plVar6; plVar2 = plVar2 + 1) {
        FUN_181259da0(*plVar2);
      }
      iVar5 = -1;
LAB_18125a2a7:
      FUN_181259da0(plVar7);
    }
    else {
      lVar8 = lVar4 + lVar8 * 8;
      lStackX_20 = lVar8;
      if (plVar7 != plVar6) {
        lStackX_10 = lVar4 - (longlong)plVar7;
        plVar2 = plVar7;
        do {
          lVar3 = -1;
          do {
            lVar9 = lVar3;
            lVar3 = lVar9 + 1;
          } while (*(char *)(*plVar2 + lVar3) != '\0');
          iVar5 = FUN_18125db30();
          if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
          *(longlong *)(lStackX_10 + (longlong)plVar2) = lVar8;
          lVar8 = lVar8 + lVar9 + 2;
          plVar2 = plVar2 + 1;
        } while (plVar2 != plVar6);
      }
      *param_2 = lVar4;
      FUN_181259da0(0);
      for (plVar2 = plVar7; plVar2 != plVar6; plVar2 = plVar2 + 1) {
        FUN_181259da0(*plVar2);
      }
      FUN_181259da0(plVar7);
      iVar5 = 0;
    }
  }
  return iVar5;
}



/* ===== 18125a91c FUN_18125a91c ===== */

undefined4 FUN_18125a91c(short *param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  if (param_1 == (short *)0x0) {
    if (*(char *)(param_2 + 0x28) != '\0') {
      *(undefined1 *)(param_2 + 0x28) = 0;
    }
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined8 *)(param_2 + 0x18) = 0;
  }
  else {
    if (*param_1 != 0) {
      iVar1 = FUN_18125b7e8(param_4,0,param_1,0xffffffff,0,0,0,0);
      if (iVar1 != 0) {
        if (*(ulonglong *)(param_2 + 0x18) < (ulonglong)(longlong)iVar1) {
          if (*(char *)(param_2 + 0x28) != '\0') {
            *(undefined1 *)(param_2 + 0x28) = 0;
          }
          goto LAB_18125a970;
        }
        iVar1 = FUN_18125b7e8(param_4,0,param_1,0xffffffff,*(undefined8 *)(param_2 + 0x10),
                              (int)*(ulonglong *)(param_2 + 0x18),0,0);
        if ((longlong)iVar1 != 0) {
          *(longlong *)(param_2 + 0x20) = (longlong)iVar1 + -1;
          return 0;
        }
      }
      uVar2 = (*DAT_1812623c8)();
      FUN_181259c8c(uVar2);
      puVar3 = (undefined4 *)FUN_181259cfc();
      return *puVar3;
    }
    if (*(longlong *)(param_2 + 0x18) == 0) {
      if (*(char *)(param_2 + 0x28) != '\0') {
        *(undefined1 *)(param_2 + 0x28) = 0;
      }
LAB_18125a970:
      puVar3 = (undefined4 *)FUN_181259cfc();
      *puVar3 = 0x22;
      *(undefined1 *)(param_2 + 0x28) = 0;
      *(undefined8 *)(param_2 + 0x18) = 0;
      return 0x22;
    }
    **(undefined1 **)(param_2 + 0x10) = 0;
  }
  *(undefined8 *)(param_2 + 0x20) = 0;
  return 0;
}



/* ===== 18125aa38 FUN_18125aa38 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_18125aa38(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
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
  undefined1 local_228 [528];
  ulonglong local_18;
  
  local_18 = DAT_18126c390 ^ (ulonglong)auStack_2a8;
  iVar1 = (*DAT_181262460)(param_1,local_228,0x105);
  if (iVar1 == 0) {
    uVar2 = (*DAT_1812623c8)();
    FUN_181259c8c(uVar2);
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
      iVar1 = FUN_18125bc98();
      if (iVar1 == 0) {
        if (local_268 != '\0') {
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
    FUN_18125a91c(local_228,&local_260,local_288,uVar3);
    local_240 = local_240 & 0xffffffff;
  }
  return local_240;
}



/* ===== 18125ab5c FUN_18125ab5c ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18125ab5c(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,undefined4 *param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong lVar11;
  
  __acrt_lock(*param_2);
  puVar7 = (undefined8 *)(*(longlong *)(*(longlong *)*param_3 + 0x88) + 0x18);
  if (_DAT_18132f408 == (undefined8 *)0x0) {
LAB_18125ac0f:
    puVar8 = (undefined4 *)FUN_181259cfc();
    *puVar8 = 0x16;
    FUN_181259b54();
  }
  else {
    if (puVar7 == (undefined8 *)0x0) {
      FUN_181261130(_DAT_18132f408,0,0x101);
      goto LAB_18125ac0f;
    }
    lVar11 = 2;
    puVar10 = _DAT_18132f408;
    do {
      uVar6 = puVar7[1];
      *puVar10 = *puVar7;
      puVar10[1] = uVar6;
      uVar6 = puVar7[3];
      puVar10[2] = puVar7[2];
      puVar10[3] = uVar6;
      uVar6 = puVar7[5];
      puVar10[4] = puVar7[4];
      puVar10[5] = uVar6;
      uVar6 = puVar7[7];
      puVar10[6] = puVar7[6];
      puVar10[7] = uVar6;
      uVar6 = puVar7[9];
      puVar10[8] = puVar7[8];
      puVar10[9] = uVar6;
      uVar6 = puVar7[0xb];
      puVar10[10] = puVar7[10];
      puVar10[0xb] = uVar6;
      uVar3 = *(undefined4 *)((longlong)puVar7 + 100);
      uVar4 = *(undefined4 *)(puVar7 + 0xd);
      uVar5 = *(undefined4 *)((longlong)puVar7 + 0x6c);
      *(undefined4 *)(puVar10 + 0xc) = *(undefined4 *)(puVar7 + 0xc);
      *(undefined4 *)((longlong)puVar10 + 100) = uVar3;
      *(undefined4 *)(puVar10 + 0xd) = uVar4;
      *(undefined4 *)((longlong)puVar10 + 0x6c) = uVar5;
      puVar9 = puVar10 + 0x10;
      uVar6 = puVar7[0xf];
      puVar10[0xe] = puVar7[0xe];
      puVar10[0xf] = uVar6;
      puVar7 = puVar7 + 0x10;
      lVar11 = lVar11 + -1;
      puVar10 = puVar9;
    } while (lVar11 != 0);
    *(undefined1 *)puVar9 = *(undefined1 *)puVar7;
  }
  lVar11 = 2;
  puVar7 = (undefined8 *)(*(longlong *)(*(longlong *)*param_3 + 0x88) + 0x119);
  if (_DAT_18132f410 != (undefined8 *)0x0) {
    puVar10 = _DAT_18132f410;
    if (puVar7 != (undefined8 *)0x0) {
      do {
        uVar6 = puVar7[1];
        *puVar10 = *puVar7;
        puVar10[1] = uVar6;
        uVar6 = puVar7[3];
        puVar10[2] = puVar7[2];
        puVar10[3] = uVar6;
        uVar6 = puVar7[5];
        puVar10[4] = puVar7[4];
        puVar10[5] = uVar6;
        uVar6 = puVar7[7];
        puVar10[6] = puVar7[6];
        puVar10[7] = uVar6;
        uVar6 = puVar7[9];
        puVar10[8] = puVar7[8];
        puVar10[9] = uVar6;
        uVar6 = puVar7[0xb];
        puVar10[10] = puVar7[10];
        puVar10[0xb] = uVar6;
        uVar3 = *(undefined4 *)((longlong)puVar7 + 100);
        uVar4 = *(undefined4 *)(puVar7 + 0xd);
        uVar5 = *(undefined4 *)((longlong)puVar7 + 0x6c);
        *(undefined4 *)(puVar10 + 0xc) = *(undefined4 *)(puVar7 + 0xc);
        *(undefined4 *)((longlong)puVar10 + 100) = uVar3;
        *(undefined4 *)(puVar10 + 0xd) = uVar4;
        *(undefined4 *)((longlong)puVar10 + 0x6c) = uVar5;
        uVar6 = puVar7[0xf];
        puVar10[0xe] = puVar7[0xe];
        puVar10[0xf] = uVar6;
        puVar7 = puVar7 + 0x10;
        lVar11 = lVar11 + -1;
        puVar10 = puVar10 + 0x10;
      } while (lVar11 != 0);
      goto LAB_18125acc0;
    }
    FUN_181261130(_DAT_18132f410,0,0x100);
  }
  puVar8 = (undefined4 *)FUN_181259cfc();
  *puVar8 = 0x16;
  FUN_181259b54();
LAB_18125acc0:
  piVar2 = (int *)**(undefined8 **)param_3[1];
  LOCK();
  iVar1 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if ((iVar1 == 1) && ((undefined *)**(undefined8 **)param_3[1] != &DAT_18126c430)) {
    FUN_181259da0(**(undefined8 **)param_3[1]);
  }
  **(undefined8 **)param_3[1] = *(undefined8 *)(*(longlong *)*param_3 + 0x88);
  LOCK();
  **(int **)(*(longlong *)*param_3 + 0x88) = **(int **)(*(longlong *)*param_3 + 0x88) + 1;
  UNLOCK();
  __acrt_unlock(*param_4);
  return;
}



/* ===== 18125ad2c getSystemCP ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    int __cdecl getSystemCP(int)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl getSystemCP(int param_1)

{
  longlong local_28;
  longlong local_20;
  char local_10;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_28,(__crt_locale_pointers *)0x0);
  _DAT_18132f420 = 0;
  if (param_1 == -2) {
    _DAT_18132f420 = 1;
    param_1 = (*DAT_1812624c8)();
  }
  else if (param_1 == -3) {
    _DAT_18132f420 = 1;
    param_1 = (*DAT_1812624c0)();
  }
  else if (param_1 == -4) {
    _DAT_18132f420 = 1;
    param_1 = *(int *)(local_20 + 0xc);
  }
  if (local_10 != '\0') {
    *(uint *)(local_28 + 0x3a8) = *(uint *)(local_28 + 0x3a8) & 0xfffffffd;
  }
  return param_1;
}



/* ===== 18125adac FUN_18125adac ===== */

void FUN_18125adac(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined2 *puVar3;
  longlong lVar4;
  
  FUN_181261130(param_1 + 0x18,0,0x101);
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
    *(undefined1 *)(param_1 + lVar1 + 0x18) = (&DAT_18126c448)[lVar1];
    lVar1 = lVar4;
  } while (lVar4 < 0x101);
  do {
    lVar1 = lVar2 + 1;
    *(undefined1 *)(param_1 + lVar2 + 0x119) = (&DAT_18126c549)[lVar2];
    lVar2 = lVar1;
  } while (lVar1 < 0x100);
  return;
}



/* ===== 18125ae44 FUN_18125ae44 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18125ae44(longlong param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  undefined1 *puVar6;
  ulonglong uVar7;
  byte *pbVar8;
  longlong lVar9;
  undefined1 auStack_788 [32];
  byte *local_768;
  undefined1 *local_760;
  undefined4 local_758;
  undefined4 local_750;
  undefined4 local_748;
  undefined8 local_738;
  byte abStack_730 [24];
  undefined1 local_718 [231];
  byte abStack_631 [25];
  undefined1 local_618 [231];
  byte abStack_531 [25];
  undefined1 local_518 [256];
  byte local_418 [1024];
  ulonglong local_18;
  
  local_18 = DAT_18126c390 ^ (ulonglong)auStack_788;
  abStack_730[8] = 0;
  abStack_730[9] = 0;
  abStack_730[10] = 0;
  abStack_730[0xb] = 0;
  local_738 = 0;
  abStack_730[0] = 0;
  abStack_730[1] = 0;
  abStack_730[2] = 0;
  abStack_730[3] = 0;
  abStack_730[4] = 0;
  abStack_730[5] = 0;
  abStack_730[6] = 0;
  abStack_730[7] = 0;
  if ((*(int *)(param_1 + 4) == 0xfde9) || (iVar3 = (*DAT_1812624d0)(), iVar3 == 0)) {
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
    puVar6 = local_718;
    lVar9 = 0x100;
    do {
      *puVar6 = (char)uVar4;
      uVar4 = uVar4 + 1;
      puVar6 = puVar6 + 1;
    } while (uVar4 < 0x100);
    pbVar5 = (byte *)((longlong)&local_738 + 6);
    local_718[0] = 0x20;
    bVar2 = local_738._6_1_;
    while (bVar2 != 0) {
      bVar1 = pbVar5[1];
      uVar7 = (ulonglong)bVar2;
      while ((uVar4 = (uint)uVar7, uVar4 <= bVar1 && (uVar4 < 0x100))) {
        local_718[uVar7] = 0x20;
        uVar7 = (ulonglong)(uVar4 + 1);
      }
      pbVar5 = pbVar5 + 2;
      bVar2 = *pbVar5;
    }
    local_758 = 0;
    local_760 = (undefined1 *)CONCAT44(local_760._4_4_,*(undefined4 *)(param_1 + 4));
    local_768 = local_418;
    FUN_18125e154(0,1,local_718,0x100);
    local_748 = 0;
    local_750 = *(undefined4 *)(param_1 + 4);
    local_760 = local_618;
    local_758 = 0x100;
    local_768._0_4_ = 0x100;
    __acrt_LCMapStringA(0,*(undefined8 *)(param_1 + 0x220),0x100,local_718);
    local_748 = 0;
    local_750 = *(undefined4 *)(param_1 + 4);
    local_760 = local_518;
    local_758 = 0x100;
    local_768 = (byte *)CONCAT44(local_768._4_4_,0x100);
    __acrt_LCMapStringA(0,*(undefined8 *)(param_1 + 0x220),0x200,local_718);
    pbVar8 = local_418;
    pbVar5 = (byte *)(param_1 + 0x19);
    do {
      if ((*pbVar8 & 1) == 0) {
        if ((*pbVar8 & 2) == 0) {
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
      pbVar8 = pbVar8 + 2;
      pbVar5 = pbVar5 + 1;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  return;
}



/* ===== 18125b03c FUN_18125b03c ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_18125b03c(int param_1,char param_2,__acrt_ptd *param_3,__crt_multibyte_data **param_4)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  int iVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined4 *puVar19;
  undefined8 *puVar20;
  longlong lVar21;
  longlong lVar22;
  __acrt_ptd *local_res18;
  __crt_multibyte_data **local_res20;
  undefined1 local_268 [4];
  undefined4 local_264;
  undefined4 local_260 [2];
  __acrt_ptd **local_258;
  __crt_multibyte_data ***local_250;
  undefined8 local_248 [70];
  
  local_res18 = param_3;
  local_res20 = param_4;
  update_thread_multibyte_data_internal(param_3,param_4);
  iVar16 = getSystemCP(param_1);
  if (iVar16 == *(int *)(*(longlong *)(local_res18 + 0x88) + 4)) {
    iVar16 = 0;
  }
  else {
    puVar17 = (undefined8 *)_malloc_base(0x228);
    if (puVar17 == (undefined8 *)0x0) {
      FUN_181259da0(0);
      iVar16 = -1;
    }
    else {
      lVar21 = 4;
      lVar22 = 4;
      puVar14 = *(undefined8 **)(local_res18 + 0x88);
      puVar15 = local_248;
      do {
        puVar20 = puVar15;
        puVar18 = puVar14;
        uVar2 = puVar18[1];
        uVar11 = puVar18[2];
        uVar12 = puVar18[3];
        *puVar20 = *puVar18;
        puVar20[1] = uVar2;
        uVar2 = puVar18[4];
        uVar13 = puVar18[5];
        puVar20[2] = uVar11;
        puVar20[3] = uVar12;
        uVar11 = puVar18[6];
        uVar12 = puVar18[7];
        puVar20[4] = uVar2;
        puVar20[5] = uVar13;
        uVar2 = puVar18[8];
        uVar13 = puVar18[9];
        puVar20[6] = uVar11;
        puVar20[7] = uVar12;
        uVar11 = puVar18[10];
        uVar12 = puVar18[0xb];
        puVar20[8] = uVar2;
        puVar20[9] = uVar13;
        uVar2 = puVar18[0xc];
        uVar13 = puVar18[0xd];
        puVar20[10] = uVar11;
        puVar20[0xb] = uVar12;
        uVar11 = puVar18[0xe];
        uVar12 = puVar18[0xf];
        puVar20[0xc] = uVar2;
        puVar20[0xd] = uVar13;
        puVar20[0xe] = uVar11;
        puVar20[0xf] = uVar12;
        lVar22 = lVar22 + -1;
        puVar14 = puVar18 + 0x10;
        puVar15 = puVar20 + 0x10;
      } while (lVar22 != 0);
      uVar11 = puVar18[0x11];
      uVar12 = puVar18[0x12];
      uVar13 = puVar18[0x13];
      uVar2 = puVar18[0x14];
      puVar20[0x10] = puVar18[0x10];
      puVar20[0x11] = uVar11;
      puVar20[0x12] = uVar12;
      puVar20[0x13] = uVar13;
      puVar20[0x14] = uVar2;
      puVar14 = local_248;
      puVar15 = puVar17;
      do {
        puVar20 = puVar15;
        puVar18 = puVar14;
        uVar2 = puVar18[1];
        uVar11 = puVar18[2];
        uVar12 = puVar18[3];
        *puVar20 = *puVar18;
        puVar20[1] = uVar2;
        uVar2 = puVar18[4];
        uVar13 = puVar18[5];
        puVar20[2] = uVar11;
        puVar20[3] = uVar12;
        uVar11 = puVar18[6];
        uVar12 = puVar18[7];
        puVar20[4] = uVar2;
        puVar20[5] = uVar13;
        uVar2 = puVar18[8];
        uVar13 = puVar18[9];
        puVar20[6] = uVar11;
        puVar20[7] = uVar12;
        uVar11 = puVar18[10];
        uVar12 = puVar18[0xb];
        puVar20[8] = uVar2;
        puVar20[9] = uVar13;
        uVar2 = puVar18[0xc];
        uVar13 = puVar18[0xd];
        puVar20[10] = uVar11;
        puVar20[0xb] = uVar12;
        uVar11 = puVar18[0xe];
        uVar12 = puVar18[0xf];
        puVar20[0xc] = uVar2;
        puVar20[0xd] = uVar13;
        puVar20[0xe] = uVar11;
        puVar20[0xf] = uVar12;
        lVar21 = lVar21 + -1;
        puVar14 = puVar18 + 0x10;
        puVar15 = puVar20 + 0x10;
      } while (lVar21 != 0);
      uVar4 = *(undefined4 *)((longlong)puVar18 + 0x84);
      uVar5 = *(undefined4 *)(puVar18 + 0x11);
      uVar6 = *(undefined4 *)((longlong)puVar18 + 0x8c);
      uVar7 = *(undefined4 *)(puVar18 + 0x12);
      uVar8 = *(undefined4 *)((longlong)puVar18 + 0x94);
      uVar9 = *(undefined4 *)(puVar18 + 0x13);
      uVar10 = *(undefined4 *)((longlong)puVar18 + 0x9c);
      uVar2 = puVar18[0x14];
      *(undefined4 *)(puVar20 + 0x10) = *(undefined4 *)(puVar18 + 0x10);
      *(undefined4 *)((longlong)puVar20 + 0x84) = uVar4;
      *(undefined4 *)(puVar20 + 0x11) = uVar5;
      *(undefined4 *)((longlong)puVar20 + 0x8c) = uVar6;
      *(undefined4 *)(puVar20 + 0x12) = uVar7;
      *(undefined4 *)((longlong)puVar20 + 0x94) = uVar8;
      *(undefined4 *)(puVar20 + 0x13) = uVar9;
      *(undefined4 *)((longlong)puVar20 + 0x9c) = uVar10;
      puVar20[0x14] = uVar2;
      *(undefined4 *)puVar17 = 0;
      iVar16 = FUN_18125b3e0(iVar16,puVar17);
      if (iVar16 == -1) {
        puVar19 = (undefined4 *)FUN_181259cfc();
        *puVar19 = 0x16;
        FUN_181259da0(puVar17);
        iVar16 = -1;
      }
      else {
        if (param_2 == '\0') {
          FUN_18125d300();
        }
        piVar3 = *(int **)(local_res18 + 0x88);
        LOCK();
        iVar1 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if ((iVar1 == 1) && (*(undefined **)(local_res18 + 0x88) != &DAT_18126c430)) {
          FUN_181259da0();
        }
        *(undefined4 *)puVar17 = 1;
        *(undefined8 **)(local_res18 + 0x88) = puVar17;
        if ((DAT_18126cbe8 & *(uint *)(local_res18 + 0x3a8)) == 0) {
          local_258 = &local_res18;
          local_250 = &local_res20;
          local_264 = 5;
          local_260[0] = 5;
          FUN_18125ab5c(local_268,local_260,&local_258,&local_264);
          if (param_2 != '\0') {
            _DAT_18126cad0 = *local_res20;
          }
        }
        FUN_181259da0(0);
      }
    }
  }
  return iVar16;
}



/* ===== 18125b2ac update_thread_multibyte_data_internal ===== */

/* Library Function - Single Match
    struct __crt_multibyte_data * __ptr64 __cdecl update_thread_multibyte_data_internal(struct
   __acrt_ptd * __ptr64 const,struct __crt_multibyte_data * __ptr64 * __ptr64 const)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

__crt_multibyte_data * __cdecl
update_thread_multibyte_data_internal(__acrt_ptd *param_1,__crt_multibyte_data **param_2)

{
  int iVar1;
  __crt_multibyte_data *p_Var2;
  
  if (((*(uint *)(param_1 + 0x3a8) & DAT_18126cbe8) == 0) || (*(longlong *)(param_1 + 0x90) == 0)) {
    __acrt_lock(5);
    p_Var2 = *(__crt_multibyte_data **)(param_1 + 0x88);
    if (p_Var2 != *param_2) {
      if (p_Var2 != (__crt_multibyte_data *)0x0) {
        LOCK();
        iVar1 = *(int *)p_Var2;
        *(int *)p_Var2 = *(int *)p_Var2 + -1;
        UNLOCK();
        if ((iVar1 == 1) && (p_Var2 != (__crt_multibyte_data *)&DAT_18126c430)) {
          FUN_181259da0();
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



/* ===== 18125b364 __acrt_initialize_multibyte ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __acrt_initialize_multibyte
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined8 __acrt_initialize_multibyte(void)

{
  undefined8 uVar1;
  
  if (DAT_18132f424 == '\0') {
    _DAT_18132f410 = &DAT_18126c770;
    _DAT_18132f418 = &DAT_18126c430;
    _DAT_18132f408 = &DAT_18126c660;
    uVar1 = FUN_18125951c();
    FUN_18125b03c(0xfffffffd,1,uVar1,&DAT_18132f418);
    DAT_18132f424 = '\x01';
  }
  return 1;
}



/* ===== 18125b3c4 FUN_18125b3c4 ===== */

void FUN_18125b3c4(void)

{
  __acrt_ptd *p_Var1;
  
  p_Var1 = (__acrt_ptd *)FUN_181259500();
  update_thread_multibyte_data_internal(p_Var1,(__crt_multibyte_data **)&DAT_18132f418);
  return;
}



/* ===== 18125b3e0 FUN_18125b3e0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_18125b3e0(int param_1,longlong param_2)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  byte *pbVar8;
  ulonglong uVar9;
  byte *pbVar10;
  undefined2 *puVar11;
  undefined4 uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  byte *pbVar16;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  byte abStack_40 [16];
  ulonglong local_30;
  
  local_30 = DAT_18126c390 ^ (ulonglong)auStack_68;
  local_48 = 0;
  abStack_40[0] = 0;
  abStack_40[1] = 0;
  abStack_40[2] = 0;
  abStack_40[3] = 0;
  abStack_40[4] = 0;
  abStack_40[5] = 0;
  abStack_40[6] = 0;
  abStack_40[7] = 0;
  abStack_40[8] = 0;
  abStack_40[9] = 0;
  abStack_40[10] = 0;
  abStack_40[0xb] = 0;
  uVar3 = getSystemCP(param_1);
  if (uVar3 == 0) {
LAB_18125b678:
    FUN_18125adac(param_2);
    return 0;
  }
  uVar15 = 0;
  puVar5 = &DAT_18126c880;
  uVar12 = 1;
  do {
    if (*puVar5 == uVar3) {
      FUN_181261130(param_2 + 0x18,0,0x101);
      pbVar16 = &DAT_18126c870;
      lVar7 = 4;
      pbVar8 = &DAT_18126c890 + (ulonglong)uVar15 * 0x30;
      do {
        bVar2 = *pbVar8;
        pbVar10 = pbVar8;
        while ((bVar2 != 0 && (pbVar10[1] != 0))) {
          bVar2 = *pbVar10;
          uVar13 = (uint)bVar2;
          if (bVar2 <= pbVar10[1]) {
            uVar14 = (uint)bVar2;
            do {
              uVar14 = uVar14 + 1;
              if (0x100 < uVar14) break;
              uVar13 = uVar13 + 1;
              pbVar1 = (byte *)((ulonglong)uVar14 + 0x18 + param_2);
              *pbVar1 = *pbVar1 | *pbVar16;
            } while (uVar13 <= pbVar10[1]);
          }
          pbVar10 = pbVar10 + 2;
          bVar2 = *pbVar10;
        }
        pbVar8 = pbVar8 + 8;
        pbVar16 = pbVar16 + 1;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
      *(uint *)(param_2 + 4) = uVar3;
      *(undefined4 *)(param_2 + 8) = 1;
      if (uVar3 == 0x3a4) {
        uVar6 = DAT_181263a88;
      }
      else if (uVar3 == 0x3a8) {
        uVar6 = DAT_181263a90;
      }
      else if (uVar3 == 0x3b5) {
        uVar6 = DAT_181263a98;
      }
      else {
        uVar6 = 0;
        if (uVar3 == 0x3b6) {
          uVar6 = DAT_181263aa0;
        }
      }
      *(undefined8 *)(param_2 + 0x220) = uVar6;
      puVar11 = (undefined2 *)(param_2 + 0xc);
      lVar7 = 6;
      do {
        *puVar11 = *(undefined2 *)
                    (((ulonglong)uVar15 * 0x30 - param_2) + 0x18126c878 + (longlong)puVar11);
        puVar11 = puVar11 + 1;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
      goto LAB_18125b66e;
    }
    uVar15 = uVar15 + 1;
    puVar5 = puVar5 + 0xc;
  } while (uVar15 < 5);
  if ((uVar3 == 65000) || (iVar4 = (*DAT_1812624b8)(uVar3 & 0xffff), iVar4 == 0)) {
    return 0xffffffff;
  }
  if (uVar3 == 0xfde9) {
    *(undefined8 *)(param_2 + 4) = 0xfde9;
    *(undefined8 *)(param_2 + 0x220) = 0;
    *(undefined4 *)(param_2 + 0x18) = 0;
    *(undefined2 *)(param_2 + 0x1c) = 0;
  }
  else {
    iVar4 = (*DAT_1812624d0)(uVar3,&local_48);
    if (iVar4 == 0) {
      if (_DAT_18132f420 == 0) {
        return 0xffffffff;
      }
      goto LAB_18125b678;
    }
    FUN_181261130(param_2 + 0x18,0,0x101);
    *(uint *)(param_2 + 4) = uVar3;
    *(undefined8 *)(param_2 + 0x220) = 0;
    if ((int)local_48 == 2) {
      pbVar8 = (byte *)((longlong)&local_48 + 6);
      bVar2 = local_48._6_1_;
      while ((bVar2 != 0 && (pbVar8[1] != 0))) {
        bVar2 = *pbVar8;
        if ((uint)bVar2 <= (uint)pbVar8[1]) {
          uVar3 = (uint)bVar2;
          uVar9 = (ulonglong)(((uint)pbVar8[1] - (uint)bVar2) + 1);
          do {
            uVar3 = uVar3 + 1;
            pbVar16 = (byte *)((ulonglong)uVar3 + 0x18 + param_2);
            *pbVar16 = *pbVar16 | 4;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
        pbVar8 = pbVar8 + 2;
        bVar2 = *pbVar8;
      }
      pbVar8 = (byte *)(param_2 + 0x1a);
      lVar7 = 0xfe;
      do {
        *pbVar8 = *pbVar8 | 8;
        pbVar8 = pbVar8 + 1;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
      iVar4 = *(int *)(param_2 + 4);
      if (iVar4 == 0x3a4) {
        uVar6 = DAT_181263a88;
      }
      else if (iVar4 == 0x3a8) {
        uVar6 = DAT_181263a90;
      }
      else if (iVar4 == 0x3b5) {
        uVar6 = DAT_181263a98;
      }
      else if (iVar4 == 0x3b6) {
        uVar6 = DAT_181263aa0;
      }
      else {
        uVar6 = 0;
      }
      *(undefined8 *)(param_2 + 0x220) = uVar6;
    }
    else {
      uVar12 = 0;
    }
    *(undefined4 *)(param_2 + 8) = uVar12;
  }
  puVar11 = (undefined2 *)(param_2 + 0xc);
  for (lVar7 = 6; lVar7 != 0; lVar7 = lVar7 + -1) {
    *puVar11 = 0;
    puVar11 = puVar11 + 1;
  }
LAB_18125b66e:
  FUN_18125ae44(param_2);
  return 0;
}



/* ===== 18125b6a8 FUN_18125b6a8 ===== */

undefined8 FUN_18125b6a8(__crt_locale_pointers *param_1,uint param_2,uint param_3,byte param_4)

{
  undefined8 uVar1;
  longlong local_28;
  longlong *local_20;
  longlong local_18;
  char local_10;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_28,param_1);
  if (((*(byte *)(((ulonglong)param_2 & 0xff) + 0x19 + local_18) & param_4) == 0) &&
     ((param_3 == 0 || ((param_3 & *(ushort *)(*local_20 + ((ulonglong)param_2 & 0xff) * 2)) == 0)))
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



/* ===== 18125b71c FUN_18125b71c ===== */

void FUN_18125b71c(undefined4 param_1)

{
  FUN_18125b6a8(0,param_1,0,4);
  return;
}



/* ===== 18125b758 FUN_18125b758 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18125b758(uint param_1,ulonglong param_2)

{
  bool bVar1;
  
  if (param_1 < 0xdead) {
    if (param_1 != 0xdeac) {
      if (param_1 < 0xc434) {
        if ((((param_1 != 0xc433) && (param_1 != 0x2a)) && (param_1 != 0xc42c)) &&
           ((param_1 != 0xc42d && (param_1 != 0xc42e)))) {
          bVar1 = param_1 == 0xc431;
LAB_18125b7a5:
          if (!bVar1) goto LAB_18125b7a9;
        }
      }
      else if (param_1 != 0xc435) {
        if (param_1 == 0xd698) goto LAB_18125b7e3;
        if (param_1 != 0xdeaa) {
          bVar1 = param_1 == 0xdeab;
          goto LAB_18125b7a5;
        }
      }
    }
  }
  else if ((((param_1 != 0xdead) && (param_1 != 0xdeae)) && (param_1 != 0xdeaf)) &&
          (((param_1 != 0xdeb0 && (param_1 != 0xdeb1)) &&
           ((param_1 != 0xdeb2 && ((param_1 != 0xdeb3 && (param_1 != 65000)))))))) {
    if (param_1 != 0xfde9) goto LAB_18125b7a9;
LAB_18125b7e3:
    param_2 = (ulonglong)((uint)param_2 & 8);
    goto LAB_18125b7a9;
  }
  param_2 = 0;
LAB_18125b7a9:
                    /* WARNING: Could not recover jumptable at 0x00018125b7a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*_DAT_1812624e8)(param_1,param_2);
  return;
}



/* ===== 18125b7e8 FUN_18125b7e8 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18125b7e8(uint param_1,uint param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  bool bVar2;
  undefined4 *in_stack_00000040;
  
  if (param_1 < 0xdead) {
    if (param_1 != 0xdeac) {
      if (param_1 < 0xc434) {
        if ((((param_1 != 0xc433) && (param_1 != 0x2a)) && (param_1 != 0xc42c)) &&
           ((param_1 != 0xc42d && (param_1 != 0xc42e)))) {
          bVar2 = param_1 == 0xc431;
          goto LAB_18125b87e;
        }
      }
      else if ((param_1 != 0xc435) && (param_1 != 0xd698)) {
        iVar1 = param_1 - 0xdeaa;
        goto LAB_18125b879;
      }
    }
  }
  else if (((((param_1 != 0xdead) && (param_1 != 0xdeae)) && (param_1 != 0xdeaf)) &&
           ((param_1 != 0xdeb0 && (param_1 != 0xdeb1)))) &&
          ((param_1 != 0xdeb2 && (param_1 != 0xdeb3)))) {
    iVar1 = param_1 - 65000;
LAB_18125b879:
    if (iVar1 != 0) {
      bVar2 = iVar1 == 1;
LAB_18125b87e:
      if (!bVar2) {
        param_2 = param_2 & 0xffffff7f;
        goto LAB_18125b888;
      }
    }
  }
  param_2 = 0;
LAB_18125b888:
  if ((param_1 - 65000 < 2) && (in_stack_00000040 != (undefined4 *)0x0)) {
    *in_stack_00000040 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00018125b8bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*_DAT_1812624f0)(param_1,param_2,param_3,param_4);
  return;
}



/* ===== 18125b8c8 FUN_18125b8c8 ===== */

longlong FUN_18125b8c8(void)

{
  short sVar1;
  int iVar2;
  short *psVar3;
  longlong lVar5;
  longlong lVar4;
  short *psVar6;
  ulonglong uVar7;
  
  psVar3 = (short *)(*DAT_1812624f8)();
  if (psVar3 != (short *)0x0) {
    sVar1 = *psVar3;
    psVar6 = psVar3;
    while (sVar1 != 0) {
      lVar4 = -1;
      do {
        lVar5 = lVar4;
        lVar4 = lVar5 + 1;
      } while (psVar6[lVar4] != 0);
      psVar6 = psVar6 + lVar5 + 2;
      sVar1 = *psVar6;
    }
    uVar7 = (longlong)psVar6 + (2 - (longlong)psVar3) >> 1;
    iVar2 = FUN_18125b7e8(0,0,psVar3,uVar7 & 0xffffffff,0,0,0,0);
    if (iVar2 != 0) {
      lVar4 = _malloc_base((longlong)iVar2);
      if (lVar4 != 0) {
        iVar2 = FUN_18125b7e8(0,0,psVar3,uVar7 & 0xffffffff,lVar4,iVar2,0,0);
        if (iVar2 == 0) {
          FUN_181259da0(lVar4);
          lVar4 = 0;
        }
        else {
          FUN_181259da0(0);
        }
        (*DAT_181262500)(psVar3);
        return lVar4;
      }
      FUN_181259da0(0);
    }
    (*DAT_181262500)(psVar3);
  }
  return 0;
}



/* ===== 18125b9e0 _recalloc_base ===== */

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
      FUN_181261130(lVar2 + uVar3,0,param_2 - uVar3);
    }
  }
  else {
    puVar1 = (undefined4 *)FUN_181259cfc();
    *puVar1 = 0xc;
    lVar2 = 0;
  }
  return lVar2;
}



