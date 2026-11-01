/* ===== 1803728b0 FUN_1803728b0 ===== */

void FUN_1803728b0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *local_38;
  longlong *local_30;
  
  plVar6 = *(longlong **)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = 0;
  if (plVar6 != (longlong *)0x0) {
    do {
      plVar4 = (longlong *)plVar6[1];
      (**(code **)(*plVar6 + 0x10))(plVar6,&local_38);
      if ((*(int *)(param_1 + 8) == 4) && ((char)plVar6[4] == '\0')) {
        if (*(longlong *)(param_1 + 0x10) == 0) {
          (**(code **)(*local_38 + 8))(local_38,1,0,0,local_38 + 2);
          (**(code **)*plVar6)(plVar6,1);
        }
        else {
          (**(code **)(*local_38 + 8))(local_38,1,1,1,(longlong *)(param_1 + 0x10));
          (**(code **)*plVar6)(plVar6,1);
        }
      }
      else {
        FUN_180372540(local_38,plVar6);
      }
      plVar6 = local_30;
      if (local_30 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_30 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_30)(local_30);
          LOCK();
          piVar2 = (int *)((longlong)plVar6 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar6 + 8))(plVar6);
          }
        }
      }
      plVar6 = plVar4;
    } while (plVar4 != (longlong *)0x0);
  }
  return;
}



/* ===== 1803729c0 FUN_1803729c0 ===== */

undefined8 FUN_1803729c0(undefined8 param_1,ulonglong param_2)

{
  FUN_180372270();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1803d64e0(param_1,0x170);
  }
  return param_1;
}



/* ===== 180372a20 FUN_180372a20 ===== */

void FUN_180372a20(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x10);
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



/* ===== 180372a70 FUN_180372a70 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_180372a70(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 auStack_b8 [40];
  longlong local_90;
  undefined8 *local_88;
  undefined8 *local_80;
  longlong *local_78;
  longlong local_68 [7];
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_b8;
  local_30 = (longlong *)0x0;
  puVar2 = (undefined8 *)param_2[7];
  local_90 = param_1;
  local_78 = param_2;
  if (puVar2 != (undefined8 *)0x0) {
    local_30 = (longlong *)(**(code **)*puVar2)(puVar2,local_68);
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  puVar2 = (undefined8 *)FUN_1804ecaa0(0x48);
  *puVar2 = std::
            _Func_impl_no_alloc<`class_std::function<unsigned_char___cdecl(void)>___cdecl_Concurrency::details::_MakeVoidToUnitFunc(std::function<void___cdecl(void)>_const&___ptr64)'::`2'::<lambda_1>,unsigned_char>
            ::vftable;
  local_80 = puVar2 + 1;
  puVar2[8] = 0;
  local_88 = puVar2;
  if (local_30 != (longlong *)0x0) {
    uVar3 = (**(code **)*local_30)();
    puVar2[8] = uVar3;
  }
  *(undefined8 **)(param_1 + 0x38) = puVar2;
  if (local_30 != (longlong *)0x0) {
    (**(code **)(*local_30 + 0x20))(local_30,local_30 != local_68);
  }
  plVar1 = (longlong *)param_2[7];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_2);
    param_2[7] = 0;
  }
  return param_1;
}



/* ===== 180372b70 FUN_180372b70 ===== */

void FUN_180372b70(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  FUN_1800132b0(param_1 + 0x40);
  _guard_check_icall(param_1 + 0x20);
  plVar4 = *(longlong **)(param_1 + 0x18);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)(*plVar4 + 8))();
    }
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
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



/* ===== 180372c00 FUN_180372c00 ===== */

undefined8 * FUN_180372c00(undefined8 *param_1,undefined4 param_2)

{
  undefined1 *local_18;
  undefined1 local_10;
  
  local_10 = 1;
  *param_1 = std::exception::vftable;
  local_18 = &DAT_18058b643;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_1804ef040(&local_18);
  *param_1 = std::future_error::vftable;
  param_1[4] = &PTR_vftable_180c9a6f0;
  *(undefined4 *)(param_1 + 3) = param_2;
  return param_1;
}



/* ===== 180372c70 std::future_error::what ===== */

/* Library Function - Single Match
    public: virtual char const * __ptr64 __cdecl std::future_error::what(void)const __ptr64
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

char * __thiscall std::future_error::what(future_error *this)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 0x18);
  if (iVar1 == 1) {
    return "broken promise";
  }
  if (iVar1 == 2) {
    return "future already retrieved";
  }
  if (iVar1 == 3) {
    return "promise already satisfied";
  }
  if (iVar1 == 4) {
    return "no state";
  }
  return (char *)0x0;
}



/* ===== 180372cb0 FUN_180372cb0 ===== */

void FUN_180372cb0(undefined4 param_1)

{
  undefined1 local_38 [56];
  
  FUN_180372c00(local_38,param_1);
                    /* WARNING: Subroutine does not return */
  FUN_1804ef5f0(local_38,&DAT_180915fb8);
}



/* ===== 180372ce0 FUN_180372ce0 ===== */

undefined8 * FUN_180372ce0(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_1804ef040(param_2 + 8);
  *param_1 = std::future_error::vftable;
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  param_1[4] = uVar1;
  return param_1;
}



/* ===== 180372d30 FUN_180372d30 ===== */

undefined8 * FUN_180372d30(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_1804ef040(param_2 + 8);
  *param_1 = std::logic_error::vftable;
  return param_1;
}



/* ===== 180372d70 FUN_180372d70 ===== */

char * FUN_180372d70(void)

{
  return "future";
}



/* ===== 180372d80 FUN_180372d80 ===== */

undefined8 * FUN_180372d80(undefined8 param_1,undefined8 *param_2,int param_3)

{
  char *_Str;
  size_t sVar1;
  
  if (param_3 == 1) {
    _Str = "broken promise";
  }
  else if (param_3 == 2) {
    _Str = "future already retrieved";
  }
  else if (param_3 == 3) {
    _Str = "promise already satisfied";
  }
  else {
    if (param_3 != 4) {
      _Str = (char *)FUN_1804ea440(param_3);
      *param_2 = 0;
      param_2[1] = 0;
      param_2[2] = 0;
      param_2[3] = 0;
      goto LAB_180372dfc;
    }
    _Str = "no state";
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
LAB_180372dfc:
  sVar1 = strlen(_Str);
  FUN_1800133a0(param_2,_Str,sVar1);
  return param_2;
}



/* ===== 180372e30 FUN_180372e30 ===== */

void FUN_180372e30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong *plVar4;
  
  plVar4 = DAT_181107f50;
  DAT_181107f50 = (longlong *)0x0;
  if ((plVar4 == (longlong *)0x0) || ((char)plVar4[0x17] != '\0')) {
                    /* WARNING: Subroutine does not return */
    FUN_180372cb0(4);
  }
  (**(code **)(*plVar4 + 0x10))(plVar4,1,param_3,param_4,plVar4,1);
  LOCK();
  plVar1 = plVar4 + 1;
  lVar3 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)lVar3 != 1) {
    return;
  }
  puVar2 = (undefined8 *)plVar4[0x19];
  if (puVar2 == (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000180372eab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*plVar4)(plVar4,1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000180372e92. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*puVar2)(puVar2,plVar4);
  return;
}



/* ===== 180372f40 FUN_180372f40 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_180372f40(void)

{
  LARGE_INTEGER local_res8 [4];
  
  if (DAT_1811162c8 == 0) {
    QueryPerformanceFrequency((LARGE_INTEGER *)&DAT_1811162c8);
    QueryPerformanceCounter((LARGE_INTEGER *)&DAT_1811162c0);
  }
  local_res8[0].QuadPart = 0;
  QueryPerformanceCounter(local_res8);
  return (double)(local_res8[0].QuadPart - _DAT_1811162c0) / (double)DAT_1811162c8;
}



/* ===== 180372fb0 FUN_180372fb0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

char * FUN_180372fb0(char *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  short *psVar2;
  short *psVar3;
  code *pcVar4;
  bool bVar5;
  byte ****ppppbVar6;
  int iVar7;
  undefined8 uVar8;
  longlong ****pppplVar9;
  ulonglong uVar10;
  longlong lVar11;
  size_t sVar12;
  char *pcVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  short *psVar16;
  longlong *plVar17;
  char *pcVar18;
  byte ****ppppbVar19;
  char **ppcVar20;
  longlong lVar21;
  undefined1 *puVar22;
  short *psVar23;
  uint uVar24;
  undefined1 auStack_1e8 [8];
  undefined1 auStack_1e0 [24];
  uint local_1c8;
  longlong ****local_1b8;
  longlong ***local_1b0;
  char *local_1a8 [6];
  char *local_178 [2];
  longlong ****local_168;
  longlong lStack_160;
  longlong ***local_158;
  ulonglong uStack_150;
  byte ****local_148;
  undefined8 uStack_140;
  longlong local_138;
  ulonglong local_130;
  undefined1 local_128 [16];
  longlong local_118;
  undefined1 local_108 [32];
  undefined1 local_e8 [32];
  undefined1 local_c8 [32];
  undefined1 local_a8 [32];
  char *local_88 [8];
  char *local_48 [2];
  
  local_48[0] = (char *)(DAT_180919500 ^ (ulonglong)auStack_1e8);
  local_1c8 = 0;
  local_178[0] = param_1;
  uVar8 = FUN_180066c10(local_108);
  pppplVar9 = (longlong ****)FUN_180099cd0(uVar8,local_e8);
  if (pppplVar9[3] < (longlong ***)0x8) {
    local_1b8 = pppplVar9;
  }
  else {
    local_1b8 = (longlong ****)*pppplVar9;
  }
  local_1b0 = pppplVar9[2];
  FUN_180024c20(param_1,&local_1b8);
  uVar24 = 0x301;
  local_1c8 = 0x301;
  FUN_1800289e0(local_e8);
  FUN_1800289e0(local_108);
  pcVar13 = param_1;
  if (0xf < *(ulonglong *)(param_1 + 0x18)) {
    pcVar13 = *(char **)param_1;
  }
  uVar10 = FUN_1800ba730(pcVar13,*(undefined8 *)(param_1 + 0x10));
  if (uVar10 == 0xffffffffffffffff) {
LAB_180373128:
    bVar5 = false;
  }
  else {
    uVar1 = uVar10 + 1;
    local_148 = (byte ****)0x0;
    uStack_140 = 0;
    local_138 = 0;
    local_130 = 0;
    if (*(ulonglong *)(param_1 + 0x10) < uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_18002a1a0();
    }
    lVar11 = *(ulonglong *)(param_1 + 0x10) - uVar1;
    lVar21 = -1;
    if (lVar11 != -1) {
      lVar21 = lVar11;
    }
    if (*(ulonglong *)(param_1 + 0x18) < 0x10) {
      pcVar13 = param_1;
    }
    else {
      pcVar13 = *(char **)param_1;
    }
    FUN_1800133a0(&local_148,pcVar13 + uVar1,lVar21);
    uVar24 = 0x703;
    local_1c8 = 0x703;
    if (local_138 == 0) goto LAB_180373128;
    ppppbVar19 = (byte ****)&local_148;
    if (0xf < local_130) {
      ppppbVar19 = local_148;
    }
    ppppbVar19 = (byte ****)((longlong)ppppbVar19 + local_138);
    ppppbVar6 = (byte ****)&local_148;
    if (0xf < local_130) {
      ppppbVar6 = local_148;
    }
    for (; ppppbVar6 != ppppbVar19; ppppbVar6 = (byte ****)((longlong)ppppbVar6 + 1)) {
      iVar7 = isxdigit((uint)*(byte *)ppppbVar6);
      if (iVar7 == 0) goto LAB_180373128;
    }
    if ((*(longlong *)(param_1 + 0x10) - uVar10) - 1 < 6) goto LAB_180373128;
    bVar5 = true;
  }
  if ((uVar24 & 2) != 0) {
    uVar24 = uVar24 & 0xfffffffd;
    local_1c8 = uVar24;
    FUN_18000f890(&local_148);
  }
  if (bVar5) {
    puVar22 = auStack_1e8;
    if (*(ulonglong *)(param_1 + 0x10) < uVar10) goto LAB_180373571;
    *(ulonglong *)(param_1 + 0x10) = uVar10;
    pcVar13 = param_1;
    if (0xf < *(ulonglong *)(param_1 + 0x18)) {
      pcVar13 = *(char **)param_1;
    }
    pcVar13[uVar10] = '\0';
  }
  local_1a8[0] = "_exr";
  local_1a8[1] = "_pfm";
  local_1a8[2] = "_hdr";
  local_1a8[3] = "_cube";
  local_1a8[4] = "_png";
  local_1a8[5] = "_tga";
  do {
    bVar5 = false;
    ppcVar20 = local_1a8;
    do {
      pcVar13 = *ppcVar20;
      sVar12 = strlen(pcVar13);
      if ((sVar12 < *(ulonglong *)(param_1 + 0x10)) &&
         (iVar7 = FUN_180067470(param_1,*(ulonglong *)(param_1 + 0x10) - sVar12,sVar12,pcVar13),
         iVar7 == 0)) {
        uVar10 = *(ulonglong *)(param_1 + 0x10) - sVar12;
        puVar22 = auStack_1e8;
        if (*(ulonglong *)(param_1 + 0x10) < uVar10) goto LAB_180373571;
        *(ulonglong *)(param_1 + 0x10) = uVar10;
        if (*(ulonglong *)(param_1 + 0x18) < 0x10) {
          pcVar13 = param_1;
        }
        else {
          pcVar13 = *(char **)param_1;
        }
        pcVar13[uVar10] = '\0';
        bVar5 = true;
      }
      ppcVar20 = ppcVar20 + 1;
    } while (ppcVar20 != local_1a8 + 6);
  } while (bVar5);
  local_88[0] = "sky_de_";
  local_88[1] = "sky_hr_";
  local_88[2] = "sky_cs15_";
  local_88[3] = "sky_cs_";
  local_88[4] = "sky_csgo_";
  local_88[5] = "sky_";
  local_88[6] = "cs_";
  local_88[7] = "s2_";
  ppcVar20 = local_88;
  do {
    pcVar13 = *ppcVar20;
    sVar12 = strlen(pcVar13);
    if ((sVar12 < *(ulonglong *)(param_1 + 0x10)) &&
       (iVar7 = FUN_180067470(param_1,0,sVar12,pcVar13), iVar7 == 0)) {
      uVar10 = *(ulonglong *)(param_1 + 0x10);
      if (uVar10 < sVar12) {
        sVar12 = uVar10;
      }
      pcVar13 = param_1;
      if (0xf < *(ulonglong *)(param_1 + 0x18)) {
        pcVar13 = *(char **)param_1;
      }
      lVar21 = uVar10 - sVar12;
      FUN_180540530(pcVar13,pcVar13 + sVar12,lVar21 + 1);
      *(longlong *)(param_1 + 0x10) = lVar21;
      goto LAB_1803732d0;
    }
    ppcVar20 = ppcVar20 + 1;
  } while (ppcVar20 != local_88 + 8);
  lVar21 = *(longlong *)(param_1 + 0x10);
LAB_1803732d0:
  if (*(ulonglong *)(param_1 + 0x18) < 0x10) {
    pcVar13 = param_1;
  }
  else {
    pcVar13 = *(char **)param_1;
  }
  pcVar18 = pcVar13 + lVar21;
  for (; pcVar13 != pcVar18; pcVar13 = pcVar13 + 1) {
    if (*pcVar13 == '_') {
      *pcVar13 = ' ';
    }
  }
  if ((ulonglong)param_2[3] < 0x10) {
    puVar15 = param_2;
  }
  else {
    puVar15 = (undefined8 *)*param_2;
  }
  if ((((ulonglong)param_2[2] < 0x11) ||
      (puVar14 = (undefined8 *)
                 thunk_FUN_1804e6890(puVar15,(undefined8 *)((longlong)puVar15 + 0x11),
                                     "materials/skybox/",0x11),
      puVar14 == (undefined8 *)((longlong)puVar15 + 0x11))) || (puVar14 != puVar15)) {
    uVar8 = FUN_180066c10(local_a8,param_2);
    puVar15 = (undefined8 *)FUN_180014350(uVar8,local_c8);
    if ((ulonglong)puVar15[3] < 8) {
      puVar14 = puVar15;
    }
    else {
      puVar14 = (undefined8 *)*puVar15;
    }
    psVar3 = (short *)((longlong)puVar14 + puVar15[2] * 2);
    psVar23 = psVar3;
    for (psVar16 = (short *)FUN_180013e50(puVar14,psVar3); psVar16 != psVar3; psVar16 = psVar16 + 1)
    {
      if ((*psVar16 != 0x5c) && (*psVar16 != 0x2f)) goto LAB_1803733d0;
    }
LAB_1803733eb:
    local_168 = (longlong ****)0x0;
    lStack_160 = 0;
    local_158 = (longlong ***)0x0;
    uStack_150 = 0;
    FUN_180024d40(&local_168,psVar23,(longlong)psVar3 - (longlong)psVar23 >> 1);
    local_1c8 = uVar24 | 0x70;
    local_1b8 = (longlong ****)&local_168;
    if (7 < uStack_150) {
      local_1b8 = local_168;
    }
    local_1b0 = local_158;
    FUN_180024c20(local_128,&local_1b8);
    local_1c8 = uVar24 | 0x7c;
    FUN_1800289e0(&local_168);
    FUN_1800289e0(local_c8);
    FUN_1800289e0(local_a8);
    if (local_118 != 0) {
      uVar8 = FUN_180066a20(local_108,&DAT_1806e7944,local_128);
      plVar17 = (longlong *)FUN_1800134a0(uVar8,&DAT_1806e1ac0,1);
      local_168 = (longlong ****)*plVar17;
      lStack_160 = plVar17[1];
      local_158 = (longlong ***)plVar17[2];
      uStack_150 = plVar17[3];
      plVar17[2] = 0;
      plVar17[3] = 0xf;
      *(undefined1 *)plVar17 = 0;
      local_1c8 = uVar24 | 0xfc;
      pppplVar9 = (longlong ****)&local_168;
      if (0xf < uStack_150) {
        pppplVar9 = local_168;
      }
      FUN_1800134a0(param_1,pppplVar9,local_158);
      if (0xf < uStack_150) {
        uVar10 = uStack_150 + 1;
        pppplVar9 = local_168;
        if (0xfff < uVar10) {
          pppplVar9 = (longlong ****)local_168[-1];
          if (0x1f < (ulonglong)((longlong)local_168 + (-8 - (longlong)pppplVar9))) {
            pcVar4 = (code *)swi(0x29);
            (*pcVar4)(5);
            puVar22 = auStack_1e0;
LAB_180373571:
                    /* WARNING: Subroutine does not return */
            *(undefined **)(puVar22 + -8) = &UNK_180373576;
            FUN_18002a1a0();
          }
          uVar10 = uStack_150 + 0x28;
        }
        thunk_FUN_1803d64e0(pppplVar9,uVar10);
      }
      FUN_18000f890(local_108);
    }
    FUN_18000f890(local_128);
  }
  return param_1;
LAB_1803733d0:
  psVar2 = psVar23 + -1;
  if (*psVar2 == 0x5c) goto LAB_1803733eb;
  if ((*psVar2 == 0x2f) || (psVar23 = psVar2, psVar16 == psVar2)) goto LAB_1803733eb;
  goto LAB_1803733d0;
}



/* ===== 180373580 FUN_180373580 ===== */

ulonglong FUN_180373580(undefined8 *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  
  puVar5 = param_1;
  if (0xf < (ulonglong)param_1[3]) {
    puVar5 = (undefined8 *)*param_1;
  }
  if (3 < (ulonglong)param_1[2]) {
    lVar1 = param_1[2] + (longlong)puVar5;
    lVar3 = thunk_FUN_1804e92d0(puVar5,lVar1,&DAT_18088ca44,4);
    if ((lVar3 != lVar1) && (uVar4 = lVar3 - (longlong)puVar5, uVar4 != 0xffffffffffffffff))
    goto LAB_180373652;
  }
  puVar5 = param_1;
  if (0xf < (ulonglong)param_1[3]) {
    puVar5 = (undefined8 *)*param_1;
  }
  if (8 < (ulonglong)param_1[2]) {
    lVar1 = param_1[2] + (longlong)puVar5;
    lVar3 = thunk_FUN_1804e92d0(puVar5,lVar1,"_lighting",9);
    if ((lVar3 != lVar1) && (uVar4 = lVar3 - (longlong)puVar5, uVar4 != 0xffffffffffffffff))
    goto LAB_180373652;
  }
  uVar4 = param_1[2];
  if (0xf < (ulonglong)param_1[3]) {
    param_1 = (undefined8 *)*param_1;
  }
  if (3 < uVar4) {
    uVar2 = uVar4 + (longlong)param_1;
    uVar4 = thunk_FUN_1804e92d0(param_1,uVar2,&DAT_18088ca20,4);
    if ((uVar4 != uVar2) && (uVar4 = uVar4 - (longlong)param_1, uVar4 != 0xffffffffffffffff)) {
LAB_180373652:
      return CONCAT71((int7)(uVar4 >> 8),1);
    }
  }
  return uVar4 & 0xffffffffffffff00;
}



/* ===== 180373680 FUN_180373680 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180373680(undefined8 *param_1,undefined4 param_2)

{
  ulonglong uVar1;
  byte bVar2;
  ulonglong uVar3;
  size_t _Size;
  undefined8 *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  int iVar7;
  ulonglong ******ppppppuVar8;
  ulonglong ******ppppppuVar9;
  undefined8 *_Buf1;
  ulonglong ******_Buf2;
  ulonglong uVar10;
  ulonglong uVar11;
  bool bVar12;
  undefined4 uVar13;
  undefined1 auStack_e8 [32];
  ulonglong *****local_c8;
  ulonglong ******local_c0;
  undefined8 uStack_b8;
  ulonglong local_b0;
  ulonglong local_a8;
  ulonglong *****local_98;
  ulonglong *****pppppuStack_90;
  ulonglong local_88;
  ulonglong uStack_80;
  undefined1 local_78;
  undefined7 uStack_77;
  undefined8 local_70;
  ulonglong local_68;
  ulonglong uStack_60;
  undefined4 local_58;
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_e8;
  local_c0 = (ulonglong ******)0x0;
  uStack_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  uVar3 = param_1[2];
  if (0xf < (ulonglong)param_1[3]) {
    param_1 = (undefined8 *)*param_1;
  }
  if (0x7fffffffffffffff < uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_180011990();
  }
  if (uVar3 < 0x10) {
    local_b0 = uVar3;
    local_a8 = 0xf;
    local_c0 = (ulonglong ******)*param_1;
    uStack_b8 = param_1[1];
  }
  else {
    uVar10 = uVar3 | 0xf;
    if (uVar10 < 0x8000000000000000) {
      if (uVar10 < 0x16) {
        uVar10 = 0x16;
      }
    }
    else {
      uVar10 = 0x7fffffffffffffff;
    }
    local_c0 = (ulonglong ******)FUN_18000fb70(uVar10 + 1);
    local_b0 = uVar3;
    local_a8 = uVar10;
    FUN_180540530(local_c0,param_1,uVar3 + 1);
  }
  puVar5 = DAT_181107f40;
  puVar4 = DAT_181107f38;
  ppppppuVar9 = local_c0;
  uVar3 = local_b0;
  uVar10 = local_a8;
  if (2 < local_b0) {
    uVar1 = local_b0 - 2;
    if (local_b0 < uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_18002a1a0();
    }
    ppppppuVar8 = (ulonglong ******)&local_c0;
    if (0xf < local_a8) {
      ppppppuVar8 = local_c0;
    }
    bVar12 = *(byte *)((longlong)ppppppuVar8 + uVar1) < 0x5f;
    if ((*(byte *)((longlong)ppppppuVar8 + uVar1) == 0x5f) &&
       (bVar2 = *(byte *)((longlong)ppppppuVar8 + (local_b0 - 1)), bVar12 = bVar2 < 99, bVar2 == 99)
       ) {
      uVar6 = 0;
    }
    else {
      uVar6 = -(uint)bVar12 | 1;
    }
    if (uVar6 == 0) {
      local_b0 = uVar1;
      ppppppuVar9 = (ulonglong ******)&local_c0;
      if (0xf < local_a8) {
        ppppppuVar9 = local_c0;
      }
      *(undefined1 *)((longlong)ppppppuVar9 + uVar1) = 0;
      ppppppuVar9 = local_c0;
      uVar3 = local_b0;
      uVar10 = local_a8;
    }
  }
  for (; uVar11 = local_a8, uVar1 = local_b0, ppppppuVar8 = local_c0, puVar4 != puVar5;
      puVar4 = puVar4 + 9) {
    _Buf2 = (ulonglong ******)&local_c0;
    if (0xf < local_a8) {
      _Buf2 = local_c0;
    }
    _Size = puVar4[2];
    if ((ulonglong)puVar4[3] < 0x10) {
      _Buf1 = puVar4;
    }
    else {
      _Buf1 = (undefined8 *)*puVar4;
    }
    bVar12 = _Size == local_b0;
    local_c0 = ppppppuVar9;
    local_b0 = uVar3;
    local_a8 = uVar10;
    if ((bVar12) && ((_Size == 0 || (iVar7 = memcmp(_Buf1,_Buf2,_Size), iVar7 == 0))))
    goto LAB_180373978;
    ppppppuVar9 = local_c0;
    uVar3 = local_b0;
    uVar10 = local_a8;
    local_a8 = uVar11;
    local_b0 = uVar1;
    local_c0 = ppppppuVar8;
  }
  local_98 = (ulonglong *****)0x0;
  pppppuStack_90 = (ulonglong *****)0x0;
  local_88 = 0;
  uStack_80 = 0;
  ppppppuVar8 = (ulonglong ******)&local_c0;
  if (0xf < local_a8) {
    ppppppuVar8 = local_c0;
  }
  if (0x7fffffffffffffff < local_b0) {
    local_c0 = ppppppuVar9;
    local_b0 = uVar3;
    local_a8 = uVar10;
                    /* WARNING: Subroutine does not return */
    FUN_180011990();
  }
  if (local_b0 < 0x10) {
    local_88 = local_b0;
    uStack_80 = 0xf;
    local_98 = *ppppppuVar8;
    pppppuStack_90 = ppppppuVar8[1];
    local_c0 = ppppppuVar9;
    local_b0 = uVar3;
    local_a8 = uVar10;
  }
  else {
    local_b0 = local_b0 | 0xf;
    uVar11 = 0x7fffffffffffffff;
    if ((local_b0 < 0x8000000000000000) && (uVar11 = local_b0, local_b0 < 0x16)) {
      uVar11 = 0x16;
    }
    local_c0 = ppppppuVar9;
    local_b0 = uVar3;
    local_a8 = uVar10;
    local_c8 = (ulonglong *****)FUN_18000fb70(uVar11 + 1);
    local_98 = local_c8;
    local_88 = uVar1;
    uStack_80 = uVar11;
    FUN_180540530(local_c8,ppppppuVar8,uVar1 + 1);
  }
  uVar13 = FUN_180372fb0(&local_78,&local_c0);
  puVar4 = DAT_181107f40;
  local_58 = param_2;
  if (DAT_181107f40 == DAT_181107f48) {
    FUN_18037f220(uVar13,DAT_181107f40,&local_98);
  }
  else {
    *DAT_181107f40 = 0;
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[3] = 0;
    *puVar4 = local_98;
    puVar4[1] = pppppuStack_90;
    puVar4[2] = local_88;
    puVar4[3] = uStack_80;
    uVar10 = _UNK_1808ad418;
    uVar3 = _DAT_1808ad410;
    local_88 = _DAT_1808ad410;
    uStack_80 = _UNK_1808ad418;
    local_98 = (ulonglong *****)((ulonglong)local_98 & 0xffffffffffffff00);
    puVar4[4] = 0;
    puVar4[5] = 0;
    puVar4[6] = 0;
    puVar4[7] = 0;
    puVar4[4] = CONCAT71(uStack_77,local_78);
    puVar4[5] = local_70;
    puVar4[6] = local_68;
    puVar4[7] = uStack_60;
    local_68 = uVar3;
    uStack_60 = uVar10;
    local_78 = 0;
    *(undefined4 *)(puVar4 + 8) = param_2;
    DAT_181107f40 = DAT_181107f40 + 9;
  }
  FUN_18000f890(&local_78);
  FUN_18000f890(&local_98);
LAB_180373978:
  FUN_18000f890(&local_c0);
  return;
}



/* ===== 1803739c0 FUN_1803739c0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined * FUN_1803739c0(void)

{
  short *psVar1;
  short *psVar2;
  byte bVar3;
  ushort uVar4;
  longlong *plVar5;
  code *pcVar6;
  byte ****ppppbVar7;
  char cVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  undefined8 uVar12;
  longlong *plVar13;
  longlong lVar14;
  int *piVar15;
  short *psVar16;
  undefined8 ****ppppuVar17;
  undefined *puVar18;
  uint uVar19;
  longlong lVar20;
  ulonglong uVar21;
  undefined8 *puVar22;
  ulonglong uVar23;
  char *pcVar24;
  uint uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  size_t _Size;
  byte ****ppppbVar29;
  byte ****ppppbVar28;
  undefined1 *puVar30;
  undefined1 *puVar31;
  uint uVar32;
  ulonglong uVar33;
  short *psVar34;
  longlong *unaff_R13;
  undefined8 *puVar35;
  undefined8 uStack_460;
  undefined1 auStack_458 [8];
  undefined1 auStack_450 [24];
  undefined8 local_438;
  undefined4 local_428 [2];
  longlong local_420;
  longlong lStack_418;
  longlong local_410;
  undefined1 local_408 [16];
  char *local_3f8;
  longlong *plStack_3f0;
  undefined4 local_3e8 [2];
  undefined **local_3e0;
  ulonglong local_3d8;
  ulonglong uStack_3d0;
  ulonglong local_3c8;
  int local_3c0 [2];
  undefined4 local_3b8;
  char *local_3a8;
  longlong *plStack_3a0;
  undefined8 ****local_398;
  undefined8 local_390;
  undefined1 local_388 [32];
  char local_368;
  undefined1 local_358 [8];
  undefined8 local_350;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 local_230;
  byte ****local_228 [2];
  longlong local_218;
  ulonglong local_210;
  undefined8 ****local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  ulonglong local_1f0;
  undefined8 ****local_1e8 [2];
  ulonglong local_1d8;
  ulonglong local_1d0;
  undefined1 local_1c8 [32];
  undefined1 local_1a8 [32];
  undefined1 local_188 [32];
  undefined1 local_168 [32];
  undefined1 local_148 [32];
  undefined1 local_128 [32];
  undefined1 local_108 [32];
  undefined1 local_e8 [32];
  undefined1 local_c8 [48];
  longlong *local_98 [2];
  undefined1 local_88 [48];
  ulonglong local_58;
  
  uVar33 = DAT_181107f40;
  puVar31 = auStack_458;
  puVar30 = auStack_458;
  local_58 = DAT_180919500 ^ (ulonglong)auStack_458;
  puVar22 = (undefined8 *)0x0;
  local_428[0] = 0;
  uVar27 = DAT_181107f38;
  if (DAT_181107f38 != DAT_181107f40) {
    do {
      FUN_18000f890(uVar27 + 0x20);
      FUN_18000f890(uVar27);
      uVar27 = uVar27 + 0x48;
    } while (uVar27 != uVar33);
    DAT_181107f40 = DAT_181107f38;
  }
  FUN_180390a90(local_388);
  puVar18 = PTR_DAT_1809f77c0;
  if (local_368 == '\0') {
    LOCK();
    PTR_DAT_1809f77c0 = s_game_directory_not_found_18088ca28;
    UNLOCK();
  }
  else {
    FUN_1800e5e30(local_108);
    local_3f8 = "pak01_dir.vpk";
    plStack_3f0 = (longlong *)&DAT_0000000d;
    uVar9 = FUN_1804e5000();
    FUN_180013d60(local_1c8,uVar9,&local_3f8);
    uVar12 = FUN_180014f50(local_1a8,local_388,local_1c8);
    cVar8 = FUN_18038fa80(local_108,uVar12);
    FUN_1800289e0(local_1a8);
    FUN_1800289e0(local_1c8);
    if (cVar8 != '\0') {
      local_3d8 = 0;
      uStack_3d0 = 0;
      local_3c8 = 0;
      local_428[0] = 0x2600;
      plVar5 = (longlong *)*local_98[0];
      uVar27 = uStack_3d0;
      while( true ) {
        uVar23 = local_3d8;
        uStack_3d0 = uVar27;
        if (plVar5 == local_98[0]) break;
        uVar27 = plVar5[4];
        if (7 < uVar27) {
          puVar31 = auStack_458;
          if (uVar27 < uVar27 - 6) goto LAB_180374500;
          plVar13 = plVar5 + 2;
          uVar23 = plVar5[5];
          if (0xf < uVar23) {
            plVar13 = (longlong *)plVar5[2];
          }
          lVar14 = 0;
          do {
            bVar3 = *(byte *)((longlong)plVar13 + lVar14 + (uVar27 - 6));
            lVar20 = lVar14 + 1;
            if (bVar3 != (&DAT_18073ece0)[lVar14]) {
              uVar10 = -(uint)(bVar3 < (byte)(&DAT_18073ece0)[lVar14]) | 1;
              goto LAB_180373b7f;
            }
            lVar14 = lVar20;
          } while (lVar20 != 6);
          uVar10 = 0;
LAB_180373b7f:
          if (uVar10 == 0) {
            plVar13 = plVar5 + 2;
            if (0xf < uVar23) {
              plVar13 = (longlong *)plVar5[2];
            }
            if (*(char *)((uVar27 - 7) + (longlong)plVar13) == '.') {
              if (uVar23 < 0x10) {
                plVar13 = plVar5 + 2;
              }
              else {
                plVar13 = (longlong *)plVar5[2];
              }
              local_438 = 3;
              lVar14 = FUN_180068d80(plVar13,uVar27,0,&DAT_1806f8584);
              if (lVar14 != -1) {
                if (uStack_3d0 == local_3c8) {
                  FUN_180028f00(&local_3d8,uStack_3d0,plVar5 + 2);
                }
                else {
                  FUN_180024b50(uStack_3d0,plVar5 + 2);
                  uStack_3d0 = uStack_3d0 + 0x20;
                }
              }
            }
          }
        }
        plVar5 = (longlong *)*plVar5;
        uVar27 = uStack_3d0;
      }
      for (; uVar23 != uVar27; uVar23 = uVar23 + 0x20) {
        cVar8 = FUN_180373580(uVar23);
        if (cVar8 == '\0') {
          local_420 = 0;
          lStack_418 = 0;
          local_410 = 0;
          cVar8 = FUN_180390640(local_108,uVar23,&local_420,0x1000);
          if (cVar8 == '\0') {
LAB_180373c52:
            if (local_420 != 0) {
              uVar26 = local_410 - local_420;
              if (uVar26 < 0x1000) {
                lVar14 = local_420;
              }
              else {
                if (0x1f < (local_420 - *(longlong *)(local_420 + -8)) - 8U) goto LAB_180373f3a;
                uVar26 = uVar26 + 0x27;
                lVar14 = *(longlong *)(local_420 + -8);
              }
LAB_180373d60:
              thunk_FUN_1803d64e0(lVar14,uVar26);
            }
          }
          else {
            uVar26 = lStack_418 - local_420;
            if ((0xf < uVar26) && (uVar10 = *(uint *)(local_420 + 0xc), uVar10 < 0x21)) {
              uVar33 = (ulonglong)*(uint *)(local_420 + 8);
              uVar25 = 0;
              if (uVar10 != 0) {
                uVar32 = *(uint *)(local_420 + 8) + 8;
                uVar33 = (ulonglong)uVar32;
                while( true ) {
                  uVar19 = uVar32 + uVar25 * 0xc;
                  uVar21 = (ulonglong)uVar19;
                  if (uVar26 < uVar21 + 0xc) break;
                  if (*(int *)(local_420 + uVar21) == 0x41544144) {
                    lVar14 = (ulonglong)*(uint *)(local_420 + 4 + uVar21) + (ulonglong)uVar19;
                    if (((lVar14 + 0x1eU <= uVar26) &&
                        ((*(byte *)(local_420 + 6 + lVar14) >> 4 & 1) != 0)) &&
                       (uVar4 = *(ushort *)(local_420 + 0x18 + lVar14), 0x7f < uVar4)) {
                      FUN_180373680(uVar23,uVar4);
                      goto LAB_180373c52;
                    }
                    break;
                  }
                  uVar25 = uVar25 + 1;
                  if (uVar10 <= uVar25) break;
                }
              }
            }
            if (local_420 != 0) {
              uVar26 = local_410 - local_420;
              if (uVar26 < 0x1000) {
                lVar14 = local_420;
              }
              else {
                if (0x1f < (local_420 - *(longlong *)(local_420 + -8)) - 8U) {
LAB_180373f3a:
                  pcVar6 = (code *)swi(0x29);
                  (*pcVar6)(5);
                  puVar30 = auStack_450;
                  goto LAB_180373f41;
                }
                uVar26 = uVar26 + 0x27;
                lVar14 = *(longlong *)(local_420 + -8);
              }
              goto LAB_180373d60;
            }
          }
        }
      }
      FUN_1800288b0(&local_3d8);
    }
    local_3e8[0] = 0;
    local_3e0 = &PTR_vftable_18091a158;
    local_3f8 = "skybox";
    plStack_3f0 = (longlong *)0x6;
    uVar9 = FUN_1804e5000();
    FUN_180013d60(local_168,uVar9,&local_3f8);
    local_3f8 = "materials";
    plStack_3f0 = (longlong *)&DAT_00000009;
    uVar9 = FUN_1804e5000();
    FUN_180013d60(local_188,uVar9,&local_3f8);
    uVar12 = FUN_180014f50(local_128,local_388,local_188);
    FUN_180014f50(local_148,uVar12,local_168);
    FUN_1800289e0(local_128);
    FUN_1800289e0(local_188);
    FUN_1800289e0(local_168);
    piVar15 = (int *)FUN_180016ab0(local_428,local_148,local_3e8);
    puVar31 = auStack_458;
    if (*piVar15 == 3) {
      local_3a8 = (char *)0x0;
      plStack_3a0 = (longlong *)0x0;
      FUN_1800225b0(&local_3a8,local_148,2);
      unaff_R13 = plStack_3a0;
      if (plStack_3a0 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_3a0 + 1) = (int)plStack_3a0[1] + 1;
        UNLOCK();
      }
      local_3f8 = local_3a8;
      plStack_3f0 = plStack_3a0;
      if (plStack_3a0 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_3a0 + 1) = (int)plStack_3a0[1] + 1;
        UNLOCK();
      }
      local_3d8 = 0;
      uStack_3d0 = 0;
      if (plStack_3a0 != (longlong *)0x0) {
        LOCK();
        plVar5 = plStack_3a0 + 1;
        lVar14 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar14 == 1) {
          (**(code **)*plStack_3a0)(plStack_3a0);
          LOCK();
          piVar15 = (int *)((longlong)unaff_R13 + 0xc);
          iVar11 = *piVar15;
          *piVar15 = *piVar15 + -1;
          UNLOCK();
          if (iVar11 == 1) {
            (**(code **)(*unaff_R13 + 8))(unaff_R13);
          }
        }
      }
      uVar33 = local_3d8 >> 0x20;
      while (uVar23 = *(ulonglong *)(puVar30 + 0x60), uVar23 != 0) {
        *(undefined8 *)(puVar30 + -8) = 0x180373f10;
        FUN_180015fc0(uVar23,local_3c0,3);
        *(undefined4 *)(puVar30 + 0x70) = local_3b8;
        *(int *)(puVar30 + 0x74) = (int)uVar33;
        *(undefined ***)(puVar30 + 0x78) = &PTR_vftable_18091a158;
        if (local_3c0[0] == 2) {
          puVar35 = (undefined8 *)(uVar23 + 0x20);
          puVar22 = puVar35;
          if (*(ulonglong *)(uVar23 + 0x38) < 8) {
LAB_180373f41:
            puVar35 = puVar22;
          }
          else {
            puVar22 = (undefined8 *)*puVar35;
          }
          psVar2 = (short *)((longlong)puVar22 + *(longlong *)(uVar23 + 0x30) * 2);
          *(undefined8 *)(puVar30 + -8) = 0x180373f57;
          psVar34 = psVar2;
          for (psVar16 = (short *)FUN_180013e50(puVar22,psVar2); psVar16 != psVar2;
              psVar16 = psVar16 + 1) {
            if ((*psVar16 != 0x5c) && (*psVar16 != 0x2f)) goto LAB_180373f80;
          }
LAB_180373f9b:
          local_208 = (undefined8 ****)0x0;
          uStack_200 = 0;
          local_1f8 = 0;
          local_1f0 = 0;
          *(undefined8 *)(puVar30 + -8) = 0x180373fce;
          FUN_180024d40(&local_208,psVar34,(longlong)psVar2 - (longlong)psVar34 >> 1);
          local_398 = &local_208;
          if (7 < local_1f0) {
            local_398 = local_208;
          }
          local_390 = local_1f8;
          *(undefined8 *)(puVar30 + -8) = 0x18037400b;
          FUN_180024c20(local_1e8,&local_398);
          *(undefined8 *)(puVar30 + -8) = 0x18037401b;
          FUN_1800289e0(&local_208);
          if (7 < local_1d8) {
            uVar27 = local_1d8 - 7;
            if (local_1d8 < uVar27) {
                    /* WARNING: Subroutine does not return */
              *(undefined8 *)(puVar30 + -8) = 0x1803744f0;
              FUN_18002a1a0();
            }
            _Size = 7;
            if (local_1d8 - uVar27 < 7) {
              _Size = local_1d8 - uVar27;
            }
            ppppuVar17 = local_1e8;
            if (0xf < local_1d0) {
              ppppuVar17 = local_1e8[0];
            }
            *(undefined8 *)(puVar30 + -8) = 0x180374071;
            iVar11 = memcmp((void *)(uVar27 + (longlong)ppppuVar17),&DAT_1806e6d20,_Size);
            if ((iVar11 == 0) && (6 < _Size)) {
              *(undefined8 *)(puVar30 + -8) = 0x180374097;
              FUN_180016eb0(local_1c8,puVar35,puVar30 + 0x70);
              if (*(int *)(puVar30 + 0x70) == 0) {
                *(undefined8 *)(puVar30 + -8) = 0x1803740e4;
                FUN_180016eb0(local_1a8,local_388,puVar30 + 0x70);
                if (*(int *)(puVar30 + 0x70) == 0) {
                  *(undefined8 *)(puVar30 + -8) = 0x18037412c;
                  FUN_1800151a0(local_1c8,&local_248,local_1a8);
                }
                else {
                  uStack_240 = 0;
                  local_238 = 0;
                  local_230 = 7;
                  local_248 = 0;
                }
                *(undefined8 *)(puVar30 + -8) = 0x180374139;
                FUN_1800289e0(local_1a8);
              }
              else {
                uStack_240 = 0;
                local_238 = 0;
                local_230 = 7;
                local_248 = 0;
              }
              *(undefined8 *)(puVar30 + -8) = 0x180374146;
              FUN_1800289e0(local_1c8);
              *(undefined8 *)(puVar30 + -8) = 0x18037415a;
              FUN_180022220(&local_248,local_228);
              *(undefined8 *)(puVar30 + -8) = 0x18037416b;
              FUN_1800289e0(&local_248);
              ppppbVar29 = (byte ****)local_228;
              if (0xf < local_210) {
                ppppbVar29 = local_228[0];
              }
              ppppbVar28 = (byte ****)((longlong)ppppbVar29 + local_218);
              ppppbVar7 = (byte ****)local_228;
              if (0xf < local_210) {
                ppppbVar7 = local_228[0];
              }
              for (; ppppbVar7 != ppppbVar28; ppppbVar7 = (byte ****)((longlong)ppppbVar7 + 1)) {
                bVar3 = *(byte *)ppppbVar7;
                *(undefined8 *)(puVar30 + -8) = 0x1803741b8;
                iVar11 = tolower((uint)bVar3);
                *(byte *)ppppbVar29 = (byte)iVar11;
                ppppbVar29 = (byte ****)((longlong)ppppbVar29 + 1);
              }
              *(undefined8 *)(puVar30 + -8) = 0x1803741d3;
              cVar8 = FUN_180373580(local_228);
              if (cVar8 == '\0') {
                *(undefined8 *)(puVar30 + -8) = 0x1803741ed;
                FUN_180276480(local_358,puVar35,0x20);
                *(undefined8 *)(puVar30 + 0x38) = 0;
                *(undefined8 *)(puVar30 + 0x40) = 0;
                *(undefined8 *)(puVar30 + 0x48) = 0;
                *(undefined8 *)(puVar30 + -8) = 0x180374209;
                lVar20 = FUN_18000fb70(0x1000);
                *(longlong *)(puVar30 + 0x38) = lVar20;
                lVar14 = lVar20 + 0x1000;
                *(longlong *)(puVar30 + 0x48) = lVar14;
                *(undefined8 *)(puVar30 + -8) = 0x18037422a;
                FUN_180540170(lVar20,0,0x1000);
                *(longlong *)(puVar30 + 0x40) = lVar14;
                *(undefined8 *)(puVar30 + -8) = 0x180374243;
                FUN_180276e90(local_358,*(longlong *)(puVar30 + 0x38),
                              lVar14 - *(longlong *)(puVar30 + 0x38));
                *(undefined8 *)(puVar30 + -8) = 0x180374251;
                FUN_1800e88a0(puVar30 + 0x38,local_350);
                lVar14 = *(longlong *)(puVar30 + 0x38);
                uVar27 = *(longlong *)(puVar30 + 0x40) - lVar14;
                if ((0xf < uVar27) && (uVar10 = *(uint *)(lVar14 + 0xc), uVar10 < 0x21)) {
                  uVar25 = 0;
                  if (uVar10 != 0) {
                    while( true ) {
                      uVar32 = *(int *)(lVar14 + 8) + 8 + uVar25 * 0xc;
                      uVar23 = (ulonglong)uVar32;
                      if (uVar27 < uVar23 + 0xc) break;
                      if (*(int *)(uVar23 + lVar14) == 0x41544144) {
                        lVar20 = (ulonglong)*(uint *)(uVar23 + 4 + lVar14) + (ulonglong)uVar32;
                        if (((lVar20 + 0x1eU <= uVar27) &&
                            ((*(byte *)(lVar20 + 6 + lVar14) >> 4 & 1) != 0)) &&
                           (uVar4 = *(ushort *)(lVar20 + 0x18 + lVar14), 0x7f < uVar4)) {
                          *(undefined8 *)(puVar30 + -8) = 0x180374318;
                          FUN_180373680(local_228,uVar4);
                          lVar14 = *(longlong *)(puVar30 + 0x38);
                          if (lVar14 == 0) goto LAB_180374366;
                          uVar27 = *(longlong *)(puVar30 + 0x48) - lVar14;
                          if (uVar27 < 0x1000) goto LAB_180374353;
                          if (0x1f < (lVar14 - *(longlong *)(lVar14 + -8)) - 8U) goto LAB_1803743a7;
                          uVar27 = uVar27 + 0x27;
                          lVar14 = *(longlong *)(lVar14 + -8);
                          goto LAB_180374353;
                        }
                        break;
                      }
                      uVar25 = uVar25 + 1;
                      if (uVar10 <= uVar25) break;
                    }
                  }
                }
                if (lVar14 != 0) {
                  uVar27 = *(longlong *)(puVar30 + 0x48) - lVar14;
                  if (uVar27 < 0x1000) {
                  }
                  else {
                    if (0x1f < (lVar14 - *(longlong *)(lVar14 + -8)) - 8U) {
LAB_1803743a7:
                      pcVar6 = (code *)swi(0x29);
                      (*pcVar6)(5);
                      puVar30 = puVar30 + 8;
                      break;
                    }
                    uVar27 = uVar27 + 0x27;
                    lVar14 = *(longlong *)(lVar14 + -8);
                  }
LAB_180374353:
                  *(undefined8 *)(puVar30 + -8) = 0x180374358;
                  thunk_FUN_1803d64e0(lVar14,uVar27);
                  *(undefined8 *)(puVar30 + 0x38) = 0;
                  *(undefined8 *)(puVar30 + 0x40) = 0;
                  *(undefined8 *)(puVar30 + 0x48) = 0;
                }
LAB_180374366:
                *(undefined8 *)(puVar30 + -8) = 0x18037436f;
                FUN_18005e2f0(local_358);
              }
              *(undefined8 *)(puVar30 + -8) = 0x18037437c;
              FUN_18000f890(local_228);
            }
          }
          *(undefined8 *)(puVar30 + -8) = 0x180374389;
          FUN_18000f890(local_1e8);
        }
        *(undefined8 *)(puVar30 + -8) = 0x18037439a;
        iVar11 = FUN_1800164b0(puVar30 + 0x60);
        if (iVar11 != 0) {
          *(undefined8 *)(puVar30 + -8) = 0x1803744ff;
          FUN_18004e760("recursive_directory_iterator::operator++",iVar11);
          puVar31 = puVar30;
LAB_180374500:
                    /* WARNING: Subroutine does not return */
          *(undefined **)(puVar31 + -8) = &UNK_180374505;
          FUN_18002a1a0();
        }
      }
      plVar5 = *(longlong **)(puVar30 + 0x68);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar13 = plVar5 + 1;
        lVar14 = *plVar13;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)lVar14 == 1) {
          pcVar6 = *(code **)*plVar5;
          *(undefined8 *)(puVar30 + -8) = 0x1803743d1;
          (*pcVar6)(plVar5);
          LOCK();
          piVar15 = (int *)((longlong)plVar5 + 0xc);
          iVar11 = *piVar15;
          *piVar15 = *piVar15 + -1;
          UNLOCK();
          if (iVar11 == 1) {
            pcVar6 = *(code **)(*plVar5 + 8);
            *(undefined8 *)(puVar30 + -8) = 0x1803743e6;
            (*pcVar6)(plVar5);
          }
        }
      }
      puVar31 = puVar30;
      if (unaff_R13 != (longlong *)0x0) {
        LOCK();
        plVar5 = unaff_R13 + 1;
        lVar14 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar14 == 1) {
          pcVar6 = *(code **)*unaff_R13;
          *(undefined8 *)(puVar30 + -8) = 0x180374402;
          (*pcVar6)(unaff_R13);
          LOCK();
          piVar15 = (int *)((longlong)unaff_R13 + 0xc);
          iVar11 = *piVar15;
          *piVar15 = *piVar15 + -1;
          UNLOCK();
          if (iVar11 == 1) {
            pcVar6 = *(code **)(*unaff_R13 + 8);
            *(undefined8 *)(puVar30 + -8) = 0x180374417;
            (*pcVar6)(unaff_R13);
          }
        }
      }
    }
    *(undefined8 *)(puVar31 + -8) = 0x180374448;
    FUN_18037d410(DAT_181107f38,DAT_181107f40,
                  ((longlong)(DAT_181107f40 - DAT_181107f38) >> 3) * -0x71c71c71c71c71c7,
                  puVar31[0x50]);
    pcVar24 = "idle";
    if (DAT_181107f38 == DAT_181107f40) {
      pcVar24 = "no sky textures found";
    }
    LOCK();
    UNLOCK();
    *(undefined8 *)(puVar31 + -8) = 0x18037447b;
    PTR_DAT_1809f77c0 = pcVar24;
    FUN_1800289e0(local_148);
    *(undefined8 *)(puVar31 + -8) = 0x180374488;
    FUN_1800132b0(local_88);
    *(undefined8 *)(puVar31 + -8) = 0x180374494;
    FUN_1800e8810(local_98);
    *(undefined8 *)(puVar31 + -8) = 0x1803744a0;
    FUN_1800289e0(local_c8);
    *(undefined8 *)(puVar31 + -8) = 0x1803744ac;
    FUN_18000f890(local_e8);
    *(undefined8 *)(puVar31 + -8) = 0x1803744b8;
    puVar18 = (undefined *)FUN_1800289e0(local_108);
  }
  if (local_368 != '\0') {
    *(undefined8 *)(puVar31 + -8) = 0x1803744c8;
    puVar18 = (undefined *)FUN_1800289e0(local_388);
  }
  *(undefined8 *)(puVar31 + -8) = 0x1803744d7;
  return puVar18;
LAB_180373f80:
  psVar1 = psVar34 + -1;
  if (*psVar1 == 0x5c) goto LAB_180373f9b;
  if ((*psVar1 == 0x2f) || (psVar34 = psVar1, psVar16 == psVar1)) goto LAB_180373f9b;
  goto LAB_180373f80;
}



/* ===== 180374510 FUN_180374510 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180374510(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 auStack_298 [48];
  undefined4 local_268;
  int iStack_25c;
  longlong local_258;
  undefined1 local_250 [24];
  longlong *local_238;
  longlong *local_230;
  longlong *local_218;
  ulonglong *local_210;
  int *local_200;
  ulonglong local_1e8;
  uint local_1e0;
  undefined **local_1d0 [17];
  undefined1 local_148 [16];
  undefined1 local_138 [128];
  longlong local_b8;
  longlong local_38 [6];
  
  local_38[4] = DAT_180919500 ^ (ulonglong)auStack_298;
  local_268 = 0;
  FUN_180276480(local_148,param_1,0x20);
  if (local_b8 == 0) {
    uVar2 = 0;
    goto LAB_1803746d3;
  }
  FUN_1803605b0(&local_258);
  FUN_180360680(&local_258,local_138);
  local_38[1] = 0;
  local_38[2] = 0;
  local_38[3] = 0xf;
  local_38[0] = 0;
  local_268 = 2;
  if ((((byte)local_1e0 & 0x22) == 2) || (uVar4 = *local_210, uVar4 == 0)) {
    if (((local_1e0 & 4) == 0) && (*local_218 != 0)) {
      lVar3 = *local_238;
      uVar4 = (longlong)*local_200 + *local_218;
      goto LAB_1803745fd;
    }
  }
  else {
    lVar3 = *local_230;
    if (uVar4 < local_1e8) {
      uVar4 = local_1e8;
    }
LAB_1803745fd:
    if (lVar3 != 0) {
      FUN_180029840(local_38,lVar3,uVar4 - lVar3);
    }
  }
  FUN_18002ba60(param_2,local_38);
  if (0xf < (ulonglong)local_38[3]) {
    uVar4 = local_38[3] + 1;
    lVar3 = local_38[0];
    if (0xfff < uVar4) {
      lVar3 = *(longlong *)(local_38[0] + -8);
      if (0x1f < (local_38[0] - lVar3) - 8U) {
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        pcVar1 = (code *)swi(3);
        uVar2 = (*pcVar1)();
        return uVar2;
      }
      uVar4 = local_38[3] + 0x28;
    }
    thunk_FUN_1803d64e0(lVar3,uVar4);
  }
  uVar2 = 1;
  *(undefined ***)(local_250 + (longlong)*(int *)(local_258 + 4) + -8) =
       std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)(local_250 + (longlong)*(int *)(local_258 + 4) + -0xc) = *(int *)(local_258 + 4) + -0x88;
  FUN_180075e50(local_250);
  *(undefined ***)(local_250 + (longlong)*(int *)(local_258 + 4) + -8) =
       std::basic_ostream<char,std::char_traits<char>_>::vftable;
  *(int *)(local_250 + (longlong)*(int *)(local_258 + 4) + -0xc) = *(int *)(local_258 + 4) + -0x10;
  local_1d0[0] = std::ios_base::vftable;
  FUN_1804eaa10(local_1d0);
LAB_1803746d3:
  FUN_18005e2f0(local_148);
  return uVar2;
}



/* ===== 180374710 FUN_180374710 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void FUN_180374710(void)

{
  longlong *plVar1;
  undefined *puVar2;
  size_t _Size;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  float fVar6;
  char cVar7;
  undefined4 uVar8;
  int iVar9;
  size_t sVar10;
  int *piVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  int *piVar15;
  ulonglong *puVar16;
  undefined8 *******pppppppuVar17;
  ulonglong *puVar18;
  ushort *puVar19;
  ulonglong *puVar20;
  undefined8 *******pppppppuVar21;
  ulonglong *puVar22;
  ulonglong uVar23;
  undefined1 *puVar24;
  undefined1 *puVar25;
  undefined1 *puVar26;
  undefined1 *puVar27;
  undefined1 *puVar28;
  longlong lVar29;
  longlong lVar30;
  ushort *puVar31;
  ulonglong uVar32;
  uint uVar33;
  uint uVar34;
  ulonglong uVar35;
  char *pcVar36;
  undefined4 uVar37;
  float fVar38;
  float fVar39;
  undefined8 uStack_4c0;
  undefined1 auStack_4b8 [8];
  undefined1 auStack_4b0 [24];
  uint local_498;
  undefined1 local_494 [4];
  longlong local_490;
  longlong local_488 [2];
  char *local_478;
  longlong local_470;
  undefined4 local_468;
  undefined4 local_464;
  undefined **local_460;
  ulonglong local_458;
  undefined8 uStack_450;
  char *local_448;
  undefined8 uStack_440;
  uint local_438 [2];
  undefined4 uStack_430;
  undefined4 uStack_42c;
  char *local_428;
  longlong *local_420;
  undefined8 local_418;
  undefined8 local_410;
  char *local_408;
  undefined8 local_400;
  undefined8 *******local_3f8;
  undefined8 local_3f0;
  char *local_3e8;
  undefined8 local_3e0;
  undefined8 *******local_3d8;
  undefined8 local_3d0;
  undefined8 *local_3c8;
  undefined8 local_3c0;
  undefined *local_3b8;
  undefined8 local_3b0;
  undefined1 local_3a8 [8];
  undefined1 local_3a0 [16];
  undefined1 local_390 [16];
  undefined1 local_380 [16];
  undefined1 local_370 [16];
  undefined1 local_360 [16];
  undefined1 local_350 [16];
  undefined1 local_340 [16];
  undefined1 local_330 [16];
  undefined1 local_320 [16];
  undefined1 local_310 [16];
  undefined1 local_300 [16];
  undefined1 local_2f0 [24];
  undefined8 *******local_2d8;
  undefined8 uStack_2d0;
  size_t local_2c8;
  ulonglong local_2c0;
  undefined8 *******local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  ulonglong local_2a0;
  undefined8 *******local_298 [2];
  undefined8 local_288;
  ulonglong local_280;
  ulonglong local_278;
  ulonglong uStack_270;
  ulonglong local_268;
  ulonglong uStack_260;
  ulonglong local_258;
  ulonglong uStack_250;
  ulonglong local_248;
  ulonglong uStack_240;
  undefined8 local_238;
  ulonglong *puStack_230;
  ulonglong *local_228;
  ulonglong *puStack_220;
  undefined8 *******local_218;
  undefined8 uStack_210;
  size_t local_208;
  ulonglong local_200;
  longlong local_1f8;
  longlong lStack_1f0;
  longlong local_1e8;
  ulonglong local_1e0;
  int local_1d8;
  undefined1 local_1d4;
  ulonglong local_1d0;
  ulonglong local_1c8;
  ulonglong uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  longlong local_198;
  longlong local_190;
  longlong local_188;
  ulonglong local_180;
  float local_178;
  undefined8 local_174;
  ulonglong local_168;
  ulonglong uStack_160;
  ulonglong local_158;
  ulonglong local_150;
  ulonglong local_148;
  ulonglong uStack_140;
  ulonglong local_138;
  ulonglong local_130;
  int local_128;
  int local_124;
  int local_120;
  longlong local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  ulonglong local_100;
  undefined1 local_f8 [32];
  undefined1 local_d8 [32];
  ulonglong local_b8;
  
  puVar22 = DAT_181108110;
  puVar27 = auStack_4b8;
  puVar24 = auStack_4b8;
  puVar26 = auStack_4b8;
  puVar25 = auStack_4b8;
  puVar28 = auStack_4b8;
  local_b8 = DAT_180919500 ^ (ulonglong)auStack_4b8;
  local_498 = 0;
  puVar16 = DAT_181108108;
  if (DAT_181108108 != DAT_181108110) {
    do {
      FUN_18037e6d0(puVar16 + 9);
      FUN_18000f890(puVar16 + 4);
      FUN_18000f890(puVar16);
      puVar16 = puVar16 + 0xc;
    } while (puVar16 != puVar22);
    DAT_181108110 = DAT_181108108;
  }
  uVar32 = 0;
  do {
    uStack_270 = 0;
    local_268 = 0;
    uStack_260 = 0xf;
    local_278 = 0;
    uStack_250 = 0;
    local_248 = 0;
    uStack_240 = 0xf;
    local_258 = 0;
    local_238._0_5_ = 0x100000200;
    puStack_230 = (ulonglong *)0x0;
    local_228 = (ulonglong *)0x0;
    puStack_220 = (ulonglong *)0x0;
    pcVar36 = (&PTR_s_wl_starry_night_1806a6d60)[uVar32 * 6];
    sVar10 = strlen(pcVar36);
    FUN_180029840(&local_278,pcVar36,sVar10);
    pcVar36 = (&PTR_s_Starry_Night_1806a6d68)[uVar32 * 6];
    sVar10 = strlen(pcVar36);
    uVar37 = FUN_180029840(&local_258,pcVar36,sVar10);
    local_238._0_5_ = CONCAT14((&DAT_1806a6d74)[uVar32 * 0x30],(&DAT_1806a6d70)[uVar32 * 0xc]);
    uVar35 = 0;
    if ((&DAT_1806a6d80)[uVar32 * 6] != 0) {
      do {
        if (7 < uVar35) break;
        lVar29 = uVar35 * 0x20;
        puVar2 = (&PTR_PTR_1806a6d78)[uVar32 * 6];
        pcVar36 = *(char **)(puVar2 + lVar29);
        local_168 = 0;
        uStack_160 = 0;
        local_158 = 0;
        local_150 = 0;
        sVar10 = strlen(pcVar36);
        FUN_1800133a0(&local_168,pcVar36,sVar10);
        pcVar36 = *(char **)(puVar2 + lVar29 + 8);
        local_148 = 0;
        uStack_140 = 0;
        local_138 = 0;
        local_130 = 0;
        sVar10 = strlen(pcVar36);
        FUN_1800133a0(&local_148,pcVar36,sVar10);
        local_128 = *(int *)(puVar2 + lVar29 + 0x10);
        local_124 = *(int *)(puVar2 + lVar29 + 0x14);
        local_120 = *(int *)(puVar2 + lVar29 + 0x18);
        if (local_228 == puStack_220) {
          FUN_18037f470(&puStack_230,local_228,&local_168);
        }
        else {
          *local_228 = local_168;
          local_228[1] = uStack_160;
          local_228[2] = local_158;
          local_228[3] = local_150;
          local_158 = 0;
          local_150 = 0xf;
          local_168 = local_168 & 0xffffffffffffff00;
          local_228[4] = local_148;
          local_228[5] = uStack_140;
          local_228[6] = local_138;
          local_228[7] = local_130;
          local_138 = 0;
          local_130 = 0xf;
          local_148 = local_148 & 0xffffffffffffff00;
          *(int *)(local_228 + 8) = local_128;
          *(int *)((longlong)local_228 + 0x44) = local_124;
          *(int *)(local_228 + 9) = local_120;
          local_228 = local_228 + 10;
        }
        FUN_18000f890(&local_148);
        uVar37 = FUN_18000f890(&local_168);
        uVar35 = uVar35 + 1;
      } while (uVar35 < (ulonglong)(&DAT_1806a6d80)[uVar32 * 6]);
    }
    puVar18 = puStack_220;
    puVar20 = local_228;
    puVar16 = puStack_230;
    puVar22 = DAT_181108110;
    if (DAT_181108110 == DAT_181108118) {
      FUN_18037ef90(uVar37,DAT_181108110,&local_278);
    }
    else {
      *DAT_181108110 = 0;
      puVar22[1] = 0;
      puVar22[2] = 0;
      puVar22[3] = 0;
      *puVar22 = local_278;
      puVar22[1] = uStack_270;
      puVar22[2] = local_268;
      puVar22[3] = uStack_260;
      local_268 = 0;
      uStack_260 = 0xf;
      local_278 = local_278 & 0xffffffffffffff00;
      puVar22[4] = 0;
      puVar22[5] = 0;
      puVar22[6] = 0;
      puVar22[7] = 0;
      puVar22[4] = local_258;
      puVar22[5] = uStack_250;
      puVar22[6] = local_248;
      puVar22[7] = uStack_240;
      local_248 = 0;
      uStack_240 = 0xf;
      local_258 = local_258 & 0xffffffffffffff00;
      *(undefined4 *)(puVar22 + 8) = (undefined4)local_238;
      *(undefined1 *)((longlong)puVar22 + 0x44) = local_238._4_1_;
      puStack_220 = (ulonglong *)0x0;
      local_228 = (ulonglong *)0x0;
      puStack_230 = (ulonglong *)0x0;
      puVar22[9] = (ulonglong)puVar16;
      puVar22[10] = (ulonglong)puVar20;
      puVar22[0xb] = (ulonglong)puVar18;
      DAT_181108110 = DAT_181108110 + 0xc;
    }
    FUN_18037e6d0(&puStack_230);
    FUN_18000f890(&local_258);
    FUN_18000f890(&local_278);
    puVar16 = DAT_181108110;
    puVar22 = DAT_181108108;
    uVar32 = uVar32 + 1;
  } while (uVar32 < 6);
  local_468 = 0;
  local_460 = &PTR_vftable_18091a158;
  local_478 = "C:\\neverlose\\shaders\\sky";
  local_470 = 0x18;
  uVar37 = FUN_1804e5000();
  FUN_180013d60(local_298,uVar37,local_488 + 2);
  local_498 = 0x6000;
  FUN_180016bc0(local_298,&local_468);
  FUN_1800289e0(local_298);
  local_478 = "C:\\neverlose\\shaders\\sky";
  local_470 = 0x17;
  uVar37 = FUN_1804e5000();
  FUN_180013d60(local_298,uVar37,local_488 + 2);
  local_498 = 0x1e000;
  piVar11 = (int *)FUN_180016ab0(local_488,local_298,&local_468);
  iVar9 = *piVar11;
  FUN_1800289e0(local_298);
  if (iVar9 != 3) {
    FUN_180029840(&DAT_1809f77c8,"cannot open C:\\neverlose\\shaders\\sky",0x23);
    goto LAB_180376058;
  }
  lVar30 = (longlong)puVar16 - (longlong)puVar22 >> 5;
  lVar29 = lVar30 * -0x5555555555555555;
  local_448 = "C:\\neverlose\\shaders\\sky";
  uStack_440 = 0x17;
  local_488[0] = lVar29;
  uVar37 = FUN_1804e5000();
  FUN_180013d60(local_298,uVar37,&local_448);
  uVar33 = 0x19e000;
  local_498 = 0x19e000;
  FUN_18004e860(local_438,local_298,&local_468);
  FUN_1800289e0(local_298);
  if (CONCAT44(uStack_42c,uStack_430) != 0) {
    LOCK();
    piVar11 = (int *)(CONCAT44(uStack_42c,uStack_430) + 8);
    *piVar11 = *piVar11 + 1;
    UNLOCK();
  }
  local_458 = (ulonglong)local_438[0];
  uStack_450 = CONCAT44(uStack_42c,uStack_430);
  FUN_18004eae0(&local_428,&local_458);
  if (CONCAT44(uStack_42c,uStack_430) != 0) {
    LOCK();
    piVar11 = (int *)(CONCAT44(uStack_42c,uStack_430) + 8);
    *piVar11 = *piVar11 + 1;
    UNLOCK();
  }
  FUN_18004ebc0(local_488 + 2,&local_448);
  fVar6 = DAT_1808ac34c;
  puVar27 = auStack_4b8;
  if (local_428 != local_478) {
    lVar30 = lVar30 << 5;
    uVar37 = local_418._4_4_;
    local_490 = lVar30;
LAB_180374da0:
    pcVar36 = local_428;
    FUN_180015fc0(local_428,&local_458,3);
    local_468 = (undefined4)uStack_450;
    local_464 = uVar37;
    local_460 = &PTR_vftable_18091a158;
    if ((int)local_458 == 2) {
      local_408 = ".json";
      local_400 = 5;
      uVar8 = FUN_1804e5000();
      FUN_180013d60(local_298,uVar8,&local_408);
      local_498 = uVar33 | 0x1801;
      uVar12 = FUN_180099dd0(pcVar36 + 0x20,local_f8);
      uVar33 = uVar33 | 0x1803;
      local_3f8 = local_298;
      if (7 < local_280) {
        local_3f8 = local_298[0];
      }
      local_3f0 = local_288;
      local_498 = uVar33;
      iVar9 = FUN_180014140(uVar12,&local_3f8);
      if (iVar9 != 0) goto LAB_180374e77;
      bVar5 = false;
    }
    else {
LAB_180374e77:
      bVar5 = true;
    }
    pcVar36 = pcVar36 + 0x20;
    if ((uVar33 & 2) != 0) {
      uVar33 = uVar33 & 0xfffffffd;
      local_498 = uVar33;
      FUN_1800289e0(local_f8);
    }
    if ((uVar33 & 1) != 0) {
      uVar33 = uVar33 & 0xfffffffe;
      local_498 = uVar33;
      FUN_1800289e0(local_298);
    }
    if (!bVar5) {
      FUN_180024980(local_d8,pcVar36);
      local_3e8 = ".hlsl";
      local_3e0 = 5;
      uVar8 = FUN_1804e5000();
      FUN_180013d60(local_298,uVar8,&local_3e8);
      uVar34 = uVar33 | 0x600;
      local_498 = uVar34;
      FUN_180273ff0(local_d8,local_298);
      FUN_1800289e0(local_298);
      piVar11 = (int *)FUN_180016ab0(local_3a8,local_d8,&local_468);
      if (*piVar11 != 2) {
        FUN_1800289e0(local_d8);
        uVar33 = uVar34;
        goto LAB_180375f18;
      }
      uStack_2b0 = 0;
      local_2a8 = 0;
      local_2a0 = 0xf;
      local_2b8 = (undefined8 *******)0x0;
      cVar7 = FUN_180374510(pcVar36,&local_2b8);
      if (cVar7 != '\0') {
        local_278 = local_278 & 0xffffff0000000000;
        uStack_270 = 0;
        uStack_260 = 0;
        local_258 = 0;
        uStack_250 = 0xf;
        local_268 = 0;
        local_248 = 0;
        uStack_240 = 0;
        local_238 = 0;
        puStack_230 = (ulonglong *)0x0;
        local_228 = (ulonglong *)0x0;
        puStack_220 = (ulonglong *)0x0;
        uStack_110 = 0;
        local_108 = 0;
        local_100 = 0xf;
        local_118 = 0;
        local_3d8 = &local_2b8;
        if (0xf < local_2a0) {
          local_3d8 = local_2b8;
        }
        local_3d0 = local_2a8;
        cVar7 = FUN_180370c30(&local_3d8,&local_278,&local_118);
        puVar22 = puStack_230;
        if (cVar7 != '\0') {
          for (; puVar22 != local_228; puVar22 = puVar22 + 0x10) {
            if (puVar22[3] < 0x10) {
              puVar16 = puVar22;
            }
            else {
              puVar16 = (ulonglong *)*puVar22;
            }
            if ((puVar22[2] == 4) && ((int)*puVar16 == 0x65707974)) {
              puVar16 = puVar22 + 4;
              puVar22 = puVar22 + 6;
              goto LAB_18037514f;
            }
          }
          puVar16 = (ulonglong *)0x0;
          puVar22 = (ulonglong *)&DAT_00000010;
LAB_18037514f:
          if (puVar16 == (ulonglong *)0x0) {
            pppppppuVar21 = local_2d8;
            uVar32 = local_2c0;
            uVar33 = uVar34;
LAB_1803751fc:
            bVar5 = true;
          }
          else {
            if ((int)*puVar16 == 3) {
              FUN_180024b50(&local_2d8,puVar22);
            }
            else {
              local_2d8 = (undefined8 *******)0x0;
              uStack_2d0 = 0;
              local_2c8 = 0;
              local_2c0 = 0;
              FUN_1800133a0(&local_2d8,&DAT_18058b643,0);
            }
            uVar32 = local_2c0;
            pppppppuVar21 = local_2d8;
            uVar33 = uVar33 | 0x200604;
            pppppppuVar17 = &local_2d8;
            if (0xf < local_2c0) {
              pppppppuVar17 = local_2d8;
            }
            local_498 = uVar33;
            if ((local_2c8 != 3) || (iVar9 = memcmp(pppppppuVar17,&DAT_1806f8584,3), iVar9 != 0))
            goto LAB_1803751fc;
            bVar5 = false;
          }
          if (((uVar33 & 4) != 0) &&
             (uVar33 = uVar33 & 0xfffffffb, local_498 = uVar33, 0xf < uVar32)) {
            uVar35 = uVar32 + 1;
            pppppppuVar17 = pppppppuVar21;
            if (uVar35 < 0x1000) {
LAB_18037523d:
              thunk_FUN_1803d64e0(pppppppuVar17,uVar35);
              goto LAB_180375245;
            }
            pppppppuVar17 = (undefined8 *******)pppppppuVar21[-1];
            if ((ulonglong)((longlong)pppppppuVar21 + (-8 - (longlong)pppppppuVar17)) < 0x20) {
              uVar35 = uVar32 + 0x28;
              goto LAB_18037523d;
            }
            pcVar3 = (code *)swi(0x29);
            (*pcVar3)(5);
            puVar24 = auStack_4b0;
LAB_180375f3f:
            pcVar3 = (code *)swi(0x29);
            (*pcVar3)(5);
            puVar25 = puVar24 + 8;
LAB_180375f46:
            pcVar3 = (code *)swi(0x29);
            (*pcVar3)(5);
            puVar26 = puVar25 + 8;
LAB_180375f4d:
            pcVar3 = (code *)swi(0x29);
            (*pcVar3)(5);
            puVar27 = puVar26 + 8;
            goto LAB_180375f54;
          }
LAB_180375245:
          if (!bVar5) {
            uStack_210 = 0;
            local_208 = 0;
            local_200 = 0xf;
            local_218 = (undefined8 *******)0x0;
            lStack_1f0 = 0;
            local_1e8 = 0;
            local_1e0 = 0xf;
            local_1f8 = 0;
            local_1d8 = 0x200;
            local_1d4 = 1;
            local_1d0 = 0;
            local_1c8 = 0;
            uStack_1c0 = 0;
            puVar13 = (undefined8 *)FUN_180099cd0(pcVar36,local_f8);
            if ((ulonglong)puVar13[3] < 8) {
              local_3c8 = puVar13;
            }
            else {
              local_3c8 = (undefined8 *)*puVar13;
            }
            local_3c0 = puVar13[2];
            FUN_180024c20(&local_2d8,&local_3c8);
            local_498 = uVar33 | 0xc00000;
            if (0xf < local_200) {
              uVar32 = local_200 + 1;
              pppppppuVar21 = local_218;
              if (0xfff < uVar32) {
                pppppppuVar21 = (undefined8 *******)local_218[-1];
                if (0x1f < (ulonglong)((longlong)local_218 + (-8 - (longlong)pppppppuVar21)))
                goto LAB_180375f3f;
                uVar32 = local_200 + 0x28;
              }
              thunk_FUN_1803d64e0(pppppppuVar21,uVar32);
            }
            local_218 = local_2d8;
            uStack_210 = uStack_2d0;
            local_208 = local_2c8;
            local_200 = local_2c0;
            local_2c8 = 0;
            local_2c0 = 0xf;
            local_2d8 = (undefined8 *******)((ulonglong)local_2d8 & 0xffffffffffffff00);
            FUN_18000f890(&local_2d8);
            FUN_1800289e0(local_f8);
            for (puVar22 = puStack_230; puVar22 != local_228; puVar22 = puVar22 + 0x10) {
              if (puVar22[3] < 0x10) {
                puVar16 = puVar22;
              }
              else {
                puVar16 = (ulonglong *)*puVar22;
              }
              if ((puVar22[2] == 4) && ((int)*puVar16 == 0x656d616e)) {
                if (puVar22 != (ulonglong *)0xffffffffffffffe0) {
                  puVar13 = (undefined8 *)FUN_180010160(local_390,&DAT_18058b644);
                  local_2d8 = (undefined8 *******)*puVar13;
                  uStack_2d0 = puVar13[1];
                  uVar12 = FUN_180370aa0(&local_278,&local_2d8);
                  puVar13 = (undefined8 *)FUN_1801425e0(&local_218,local_380);
                  local_2d8 = (undefined8 *******)*puVar13;
                  uStack_2d0 = puVar13[1];
                  plVar14 = (longlong *)FUN_180370be0(uVar12,local_298,&local_2d8);
                  uVar33 = uVar33 | 0xc00008;
                  goto LAB_1803754c8;
                }
                break;
              }
            }
            plVar14 = (longlong *)FUN_180024b50(local_f8,&local_218);
            uVar33 = uVar33 | 0xc00010;
LAB_1803754c8:
            local_498 = uVar33;
            if (&local_1f8 == plVar14) goto LAB_180375571;
            if (0xf < local_1e0) {
              uVar32 = local_1e0 + 1;
              lVar29 = local_1f8;
              if (0xfff < uVar32) {
                lVar29 = *(longlong *)(local_1f8 + -8);
                if (0x1f < (local_1f8 - lVar29) - 8U) goto LAB_180375f46;
                uVar32 = local_1e0 + 0x28;
              }
              thunk_FUN_1803d64e0(lVar29,uVar32);
            }
            local_1f8 = *plVar14;
            lStack_1f0 = plVar14[1];
            local_1e8 = plVar14[2];
            local_1e0 = plVar14[3];
            plVar14[2] = 0;
            plVar14[3] = 0xf;
            *(undefined1 *)plVar14 = 0;
LAB_180375571:
            if ((uVar33 & 0x10) != 0) {
              uVar33 = uVar33 & 0xffffffef;
              local_498 = uVar33;
              FUN_18000f890(local_f8);
            }
            puVar22 = puStack_230;
            if ((uVar33 & 8) != 0) {
              uVar33 = uVar33 & 0xfffffff7;
              local_498 = uVar33;
              FUN_18000f890(local_298);
              puVar22 = puStack_230;
            }
            for (; puVar22 != local_228; puVar22 = puVar22 + 0x10) {
              if (puVar22[3] < 0x10) {
                puVar16 = puVar22;
              }
              else {
                puVar16 = (ulonglong *)*puVar22;
              }
              if (puVar22[2] == 10) {
                lVar29 = 0x6974756c6f736572 - *puVar16;
                if (lVar29 == 0) {
                  lVar29 = 0x6e6f - (ulonglong)(ushort)puVar16[1];
                }
                if (lVar29 == 0) {
                  if (puVar22 != (ulonglong *)0xffffffffffffffe0) {
                    puVar13 = (undefined8 *)FUN_180010160(local_370,"resolution");
                    local_2d8 = (undefined8 *******)*puVar13;
                    uStack_2d0 = puVar13[1];
                    uVar12 = FUN_180370aa0(&local_278,&local_2d8);
                    dVar4 = (double)FUN_180370b10(uVar12);
                    iVar9 = (int)dVar4;
                    puVar22 = puStack_230;
                    goto joined_r0x00018037568f;
                  }
                  break;
                }
              }
            }
            iVar9 = 0x200;
            puVar22 = puStack_230;
joined_r0x00018037568f:
            do {
              puVar20 = local_228;
              puVar16 = puStack_230;
              if (puVar22 == local_228) goto LAB_18037571d;
              if (puVar22[3] < 0x10) {
                puVar18 = puVar22;
              }
              else {
                puVar18 = (ulonglong *)*puVar22;
              }
              if ((puVar22[2] == 8) && (*puVar18 == 0x646574616d696e61)) {
                if (puVar22 != (ulonglong *)0xffffffffffffffe0) {
                  local_1d8 = iVar9;
                  puVar13 = (undefined8 *)FUN_180010160(local_360,"animated");
                  local_2d8 = (undefined8 *******)*puVar13;
                  uStack_2d0 = puVar13[1];
                  uVar12 = FUN_180370aa0(&local_278,&local_2d8);
                  local_1d4 = FUN_180370bb0(uVar12,1);
                  goto LAB_180375724;
                }
                goto LAB_18037571d;
              }
              puVar22 = puVar22 + 0x10;
            } while( true );
          }
          if (0xf < local_100) {
            uVar32 = local_100 + 1;
            lVar29 = local_118;
            if (0xfff < uVar32) {
              lVar29 = *(longlong *)(local_118 + -8);
              puVar27 = auStack_4b8;
              if (0x1f < (local_118 - lVar29) - 8U) goto LAB_180375f54;
              uVar32 = local_100 + 0x28;
            }
            thunk_FUN_1803d64e0(lVar29,uVar32);
          }
          FUN_1801a6920(&puStack_230);
          FUN_1801a69c0(&local_248);
          FUN_18000f890();
          if (0xf < local_2a0) {
            uVar32 = local_2a0 + 1;
            pppppppuVar21 = local_2b8;
            if (0xfff < uVar32) {
              pppppppuVar21 = (undefined8 *******)local_2b8[-1];
              puVar27 = auStack_4b8;
              if (0x1f < (ulonglong)((longlong)local_2b8 + (-8 - (longlong)pppppppuVar21)))
              goto LAB_180375f5b;
              uVar32 = local_2a0 + 0x28;
            }
            thunk_FUN_1803d64e0(pppppppuVar21,uVar32);
          }
          goto LAB_180375ef6;
        }
        if (local_100 < 0x10) {
LAB_1803750e8:
          FUN_1801a6920(&puStack_230);
          FUN_1801a69c0(&local_248);
          FUN_18000f890(&local_268);
          goto LAB_180374f86;
        }
        uVar32 = local_100 + 1;
        lVar29 = local_118;
        if (uVar32 < 0x1000) {
LAB_1803750e2:
          thunk_FUN_1803d64e0(lVar29,uVar32);
          goto LAB_1803750e8;
        }
        lVar29 = *(longlong *)(local_118 + -8);
        puVar27 = auStack_4b8;
        if ((local_118 - lVar29) - 8U < 0x20) {
          uVar32 = local_100 + 0x28;
          goto LAB_1803750e2;
        }
        goto LAB_180375f54;
      }
LAB_180374f86:
      if (local_2a0 < 0x10) {
LAB_180374fc7:
        local_2a8 = 0;
        local_2a0 = 0xf;
        local_2b8 = (undefined8 *******)((ulonglong)local_2b8 & 0xffffffffffffff00);
        FUN_1800289e0(local_d8);
        uVar33 = uVar34;
        goto LAB_180375f18;
      }
      uVar32 = local_2a0 + 1;
      pppppppuVar21 = local_2b8;
      if (uVar32 < 0x1000) {
LAB_180374fc2:
        thunk_FUN_1803d64e0(pppppppuVar21,uVar32);
        goto LAB_180374fc7;
      }
      pppppppuVar21 = (undefined8 *******)local_2b8[-1];
      puVar27 = auStack_4b8;
      if ((ulonglong)((longlong)local_2b8 + (-8 - (longlong)pppppppuVar21)) < 0x20) {
        uVar32 = local_2a0 + 0x28;
        goto LAB_180374fc2;
      }
      goto LAB_180375f5b;
    }
    goto LAB_180375f18;
  }
LAB_180375f71:
  plVar14 = *(longlong **)(puVar27 + 0x48);
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar14 + 1;
    lVar30 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar30 == 1) {
      pcVar3 = *(code **)*plVar14;
      *(undefined8 *)(puVar27 + -8) = 0x180375f94;
      (*pcVar3)(plVar14);
      LOCK();
      piVar11 = (int *)((longlong)plVar14 + 0xc);
      iVar9 = *piVar11;
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        pcVar3 = *(code **)(*plVar14 + 8);
        *(undefined8 *)(puVar27 + -8) = 0x180375fa9;
        (*pcVar3)(plVar14);
      }
    }
  }
  if (local_420 != (longlong *)0x0) {
    LOCK();
    plVar14 = local_420 + 1;
    lVar30 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar30 == 1) {
      pcVar3 = *(code **)*local_420;
      *(undefined8 *)(puVar27 + -8) = 0x180375fc7;
      (*pcVar3)(local_420);
      LOCK();
      piVar11 = (int *)((longlong)local_420 + 0xc);
      iVar9 = *piVar11;
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        pcVar3 = *(code **)(*local_420 + 8);
        *(undefined8 *)(puVar27 + -8) = 0x180375fdc;
        (*pcVar3)(local_420);
      }
    }
  }
  plVar14 = (longlong *)CONCAT44(uStack_42c,uStack_430);
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar14 + 1;
    lVar30 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar30 == 1) {
      pcVar3 = *(code **)*plVar14;
      *(undefined8 *)(puVar27 + -8) = 0x180375ffa;
      (*pcVar3)(plVar14);
      LOCK();
      piVar11 = (int *)((longlong)plVar14 + 0xc);
      iVar9 = *piVar11;
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        pcVar3 = *(code **)(*plVar14 + 8);
        *(undefined8 *)(puVar27 + -8) = 0x18037600d;
        (*pcVar3)(plVar14);
      }
    }
  }
  *(undefined8 *)(puVar27 + -8) = 0x18037602e;
  FUN_18037d720(DAT_181108108,DAT_181108108 + lVar29 * 0xc,lVar29,puVar27[0x24]);
  *(undefined8 *)(puVar27 + -8) = 0x180376058;
  FUN_18037d720(DAT_181108108 + lVar29 * 0xc,DAT_181108110,
                ((longlong)DAT_181108110 - (longlong)(DAT_181108108 + lVar29 * 0xc) >> 5) *
                -0x5555555555555555,puVar27[0x24]);
LAB_180376058:
  *(undefined8 *)(puVar27 + -8) = 0x180376067;
  return;
LAB_18037571d:
  local_1d4 = 1;
LAB_180375724:
  if (iVar9 < 0x800) {
    local_1d8 = 0x200;
    if (0x3ff < iVar9) {
      local_1d8 = 0x400;
    }
  }
  else {
    local_1d8 = 0x800;
  }
  for (; puVar16 != puVar20; puVar16 = puVar16 + 0x10) {
    if (puVar16[3] < 0x10) {
      puVar22 = puVar16;
    }
    else {
      puVar22 = (ulonglong *)*puVar16;
    }
    if (puVar16[2] == 10) {
      lVar29 = 0x6574656d61726170 - *puVar22;
      if (lVar29 == 0) {
        lVar29 = 0x7372 - (ulonglong)(ushort)puVar22[1];
      }
      if (lVar29 == 0) {
        if ((puVar16 + 4 != (ulonglong *)0x0) && ((int)puVar16[4] == 4)) {
          uVar32 = puVar16[10];
          uVar35 = puVar16[0xb];
          goto joined_r0x000180375808;
        }
        break;
      }
    }
  }
LAB_180375d28:
  uVar32 = local_200;
  sVar10 = local_208;
  pppppppuVar21 = local_218;
  puVar22 = (ulonglong *)((longlong)DAT_181108108 + lVar30);
  puVar16 = DAT_181108108;
  if (DAT_181108108 != puVar22) {
    do {
      pppppppuVar17 = &local_218;
      if (0xf < uVar32) {
        pppppppuVar17 = pppppppuVar21;
      }
      _Size = puVar16[2];
      if (puVar16[3] < 0x10) {
        puVar20 = puVar16;
      }
      else {
        puVar20 = (ulonglong *)*puVar16;
      }
    } while (((_Size != sVar10) ||
             ((_Size != 0 && (iVar9 = memcmp(puVar20,pppppppuVar17,_Size), iVar9 != 0)))) &&
            (puVar16 = puVar16 + 0xc, puVar16 != puVar22));
    lVar30 = local_490;
  }
  if (puVar16 == puVar22) {
    FUN_18037d160();
  }
  else {
    FUN_18002ba60(puVar16);
    FUN_18002ba60(puVar16 + 4,&local_1f8);
    *(int *)(puVar16 + 8) = local_1d8;
    *(undefined1 *)((longlong)puVar16 + 0x44) = local_1d4;
    puVar22 = puVar16 + 9;
    if (puVar22 != &local_1d0) {
      FUN_18037e6d0(puVar22);
      *puVar22 = local_1d0;
      puVar16[10] = local_1c8;
      puVar16[0xb] = uStack_1c0;
      local_1d0 = 0;
      local_1c8 = 0;
      uStack_1c0 = 0;
    }
  }
  FUN_18037e6d0(&local_1d0);
  FUN_18000f890(&local_1f8);
  FUN_18000f890(&local_218);
  if (0xf < local_100) {
    uVar32 = local_100 + 1;
    lVar29 = local_118;
    if (0xfff < uVar32) {
      lVar29 = *(longlong *)(local_118 + -8);
      puVar27 = auStack_4b8;
      if (0x1f < (local_118 - lVar29) - 8U) {
LAB_180375f54:
        pcVar3 = (code *)swi(0x29);
        (*pcVar3)(5);
        puVar27 = puVar27 + 8;
        goto LAB_180375f5b;
      }
      uVar32 = local_100 + 0x28;
    }
    thunk_FUN_1803d64e0(lVar29,uVar32);
  }
  FUN_1801a6920(&puStack_230);
  FUN_1801a69c0(&local_248);
  FUN_18000f890(&local_268);
  if (0xf < local_2a0) {
    uVar32 = local_2a0 + 1;
    pppppppuVar21 = local_2b8;
    if (0xfff < uVar32) {
      pppppppuVar21 = (undefined8 *******)local_2b8[-1];
      puVar27 = auStack_4b8;
      if (0x1f < (ulonglong)((longlong)local_2b8 + (-8 - (longlong)pppppppuVar21))) {
LAB_180375f5b:
        pcVar3 = (code *)swi(0x29);
        (*pcVar3)(5);
        puVar28 = puVar27 + 8;
        goto LAB_180375f62;
      }
      uVar32 = local_2a0 + 0x28;
    }
    thunk_FUN_1803d64e0(pppppppuVar21,uVar32);
  }
LAB_180375ef6:
  local_2a8 = 0;
  local_2b8 = (undefined8 *******)((ulonglong)local_2b8 & 0xffffffffffffff00);
  local_2a0 = 0xf;
  FUN_1800289e0(local_d8);
LAB_180375f18:
  FUN_18004e9d0(&local_428);
  if (local_428 == local_478) goto LAB_180375f62;
  goto LAB_180374da0;
joined_r0x000180375808:
  if ((uVar32 == uVar35) ||
     (7 < (ulonglong)(((longlong)(local_1c8 - local_1d0) >> 4) * -0x3333333333333333)))
  goto LAB_180375d28;
  uStack_1b0 = 0;
  local_1a8 = 0;
  local_1a0 = 0xf;
  local_1b8 = 0;
  FUN_18000f4c0(&local_198);
  local_178 = 0.0;
  local_174 = 0x3f800000;
  puVar13 = (undefined8 *)FUN_180010160(local_350,&DAT_18075bf8c);
  local_2d8 = (undefined8 *******)*puVar13;
  uStack_2d0 = puVar13[1];
  lVar29 = FUN_180370aa0(uVar32,&local_2d8);
  if (lVar29 == 0) {
    uVar12 = FUN_180013350(local_f8,&DAT_18058b643);
    uVar33 = uVar33 | 0x40;
  }
  else {
    puVar13 = (undefined8 *)FUN_180010160(local_340,&DAT_18075bf8c);
    local_2d8 = (undefined8 *******)*puVar13;
    uStack_2d0 = puVar13[1];
    uVar12 = FUN_180370aa0(uVar32,&local_2d8);
    puVar13 = (undefined8 *)FUN_180010160(local_330,&DAT_18058b643);
    local_2d8 = (undefined8 *******)*puVar13;
    uStack_2d0 = puVar13[1];
    uVar12 = FUN_180370be0(uVar12,local_298,&local_2d8);
    uVar33 = uVar33 | 0x20;
  }
  local_498 = uVar33;
  FUN_18002ba60(&local_1b8,uVar12);
  if ((uVar33 & 0x40) != 0) {
    uVar33 = uVar33 & 0xffffffbf;
    local_498 = uVar33;
    FUN_18000f890(local_f8);
  }
  if ((uVar33 & 0x20) != 0) {
    uVar33 = uVar33 & 0xffffffdf;
    local_498 = uVar33;
    FUN_18000f890(local_298);
  }
  for (piVar11 = *(int **)(uVar32 + 0x48); piVar11 != *(int **)(uVar32 + 0x50);
      piVar11 = piVar11 + 0x20) {
    if (*(ulonglong *)(piVar11 + 6) < 0x10) {
      piVar15 = piVar11;
    }
    else {
      piVar15 = *(int **)piVar11;
    }
    if (*(longlong *)(piVar11 + 4) == 5) {
      iVar9 = 0x6562616c - *piVar15;
      if (iVar9 == 0) {
        iVar9 = 0x6c - (uint)*(byte *)(piVar15 + 1);
      }
      if (iVar9 == 0) {
        if (piVar11 != (int *)0xffffffffffffffe0) {
          puVar13 = (undefined8 *)FUN_180010160(local_320,"label");
          local_2d8 = (undefined8 *******)*puVar13;
          uStack_2d0 = puVar13[1];
          uVar12 = FUN_180370aa0(uVar32,&local_2d8);
          puVar13 = (undefined8 *)FUN_1801425e0(&local_1b8,local_310);
          local_2d8 = (undefined8 *******)*puVar13;
          uStack_2d0 = puVar13[1];
          plVar14 = (longlong *)FUN_180370be0(uVar12,local_298,&local_2d8);
          uVar33 = uVar33 | 0x80;
          goto LAB_1803759d7;
        }
        break;
      }
    }
  }
  plVar14 = (longlong *)FUN_180024b50(local_f8,&local_1b8);
  uVar33 = uVar33 | 0x100;
LAB_1803759d7:
  local_498 = uVar33;
  if (&local_198 != plVar14) {
    if (0xf < local_180) {
      uVar23 = local_180 + 1;
      lVar29 = local_198;
      if (0xfff < uVar23) {
        lVar29 = *(longlong *)(local_198 + -8);
        if (0x1f < (local_198 - lVar29) - 8U) goto LAB_180375f4d;
        uVar23 = local_180 + 0x28;
      }
      thunk_FUN_1803d64e0(lVar29,uVar23);
    }
    local_198 = *plVar14;
    local_190 = plVar14[1];
    local_188 = plVar14[2];
    local_180 = plVar14[3];
    plVar14[2] = 0;
    plVar14[3] = 0xf;
    *(undefined1 *)plVar14 = 0;
  }
  if ((uVar33 >> 8 & 1) != 0) {
    uVar33 = uVar33 & 0xfffffeff;
    local_498 = uVar33;
    FUN_18000f890(local_f8);
  }
  if ((char)uVar33 < '\0') {
    uVar33 = uVar33 & 0xffffff7f;
    local_498 = uVar33;
    FUN_18000f890(local_298);
  }
  for (puVar19 = *(ushort **)(uVar32 + 0x48); puVar19 != *(ushort **)(uVar32 + 0x50);
      puVar19 = puVar19 + 0x40) {
    if (*(ulonglong *)(puVar19 + 0xc) < 0x10) {
      puVar31 = puVar19;
    }
    else {
      puVar31 = *(ushort **)puVar19;
    }
    if (*(longlong *)(puVar19 + 8) == 3) {
      iVar9 = 0x696d - (uint)*puVar31;
      if (iVar9 == 0) {
        iVar9 = 0x6e - (uint)(byte)puVar31[1];
      }
      if (iVar9 == 0) {
        if (puVar19 != (ushort *)0xffffffffffffffe0) {
          puVar13 = (undefined8 *)FUN_180010160(local_300,&DAT_18088caa0);
          local_2d8 = (undefined8 *******)*puVar13;
          uStack_2d0 = puVar13[1];
          uVar12 = FUN_180370aa0(uVar32,&local_2d8);
          dVar4 = (double)FUN_180370b10(uVar12);
          fVar38 = (float)dVar4;
          goto LAB_180375b97;
        }
        break;
      }
    }
  }
  fVar38 = 0.0;
LAB_180375b97:
  local_3b8 = &DAT_18088ca80;
  local_3b0 = 3;
  local_178 = fVar38;
  lVar29 = FUN_180370aa0(uVar32,&local_3b8);
  if (lVar29 == 0) {
    fVar39 = fVar6;
  }
  else {
    puVar13 = (undefined8 *)FUN_180010160(local_2f0,&DAT_18088ca80);
    local_2d8 = (undefined8 *******)*puVar13;
    uStack_2d0 = puVar13[1];
    uVar12 = FUN_180370aa0(uVar32,&local_2d8);
    dVar4 = (double)FUN_180370b10(uVar12);
    fVar38 = local_178;
    fVar39 = (float)dVar4;
  }
  local_174 = CONCAT44(local_174._4_4_,fVar39);
  local_418 = "default";
  local_410 = 7;
  lVar29 = FUN_180370aa0(uVar32,&local_418);
  if (lVar29 == 0) {
    local_174 = CONCAT44(fVar38,(float)local_174);
  }
  else {
    puVar13 = (undefined8 *)FUN_180010160(local_3a0,"default");
    local_2d8 = (undefined8 *******)*puVar13;
    uStack_2d0 = puVar13[1];
    uVar12 = FUN_180370aa0(uVar32,&local_2d8);
    dVar4 = (double)FUN_180370b10(uVar12,SUB84((double)fVar38,0));
    local_174 = CONCAT44((float)dVar4,(float)local_174);
    fVar38 = local_178;
    fVar39 = (float)local_174;
  }
  if (fVar39 < fVar38) {
    local_174 = CONCAT44(local_174._4_4_,fVar38);
    local_178 = fVar39;
  }
  FUN_18037d220(&local_1d0,&local_1b8);
  FUN_18001cb50(&local_1b8);
  uVar32 = uVar32 + 0x60;
  goto joined_r0x000180375808;
LAB_180375f62:
  lVar29 = *(longlong *)(puVar28 + 0x30);
  puVar27 = puVar28;
  goto LAB_180375f71;
}



/* ===== 1803760a0 FUN_1803760a0 ===== */

void FUN_1803760a0(longlong param_1)

{
  FUN_18037e6d0(param_1 + 0x48);
  FUN_18000f890(param_1 + 0x20);
  FUN_18000f890(param_1);
  return;
}



/* ===== 1803760d0 FUN_1803760d0 ===== */

longlong FUN_1803760d0(longlong param_1,longlong param_2)

{
  FUN_18002ba60();
  FUN_18002ba60(param_1 + 0x20,param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  *(undefined1 *)(param_1 + 0x44) = *(undefined1 *)(param_2 + 0x44);
  if (param_1 != param_2) {
    FUN_18037e6d0(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
    *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
    *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
    *(undefined8 *)(param_2 + 0x48) = 0;
    *(undefined8 *)(param_2 + 0x50) = 0;
    *(undefined8 *)(param_2 + 0x58) = 0;
  }
  return param_1;
}



/* ===== 180376150 FUN_180376150 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_180376150(byte *param_1)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  HMODULE hModule;
  FARPROC pFVar4;
  longlong lVar5;
  longlong lVar6;
  byte *pbVar7;
  char *pcVar8;
  byte *pbVar9;
  uint uVar10;
  undefined1 auStack_498 [32];
  byte *local_478;
  undefined1 local_468 [16];
  undefined8 local_458;
  undefined8 uStack_450;
  undefined8 local_448;
  undefined8 uStack_440;
  undefined8 local_438;
  undefined8 uStack_430;
  undefined8 local_428;
  undefined8 uStack_420;
  undefined1 local_418 [1024];
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_498;
  plVar3 = (longlong *)FUN_18037dca0(param_1,local_468,param_1);
  iVar2 = DAT_181108100;
  lVar1 = *plVar3;
  lVar5 = *(longlong *)(lVar1 + 0x30);
  if (lVar5 == 0) {
    if ((*(int *)(lVar1 + 0x40) < 0xc) && (*(int *)(lVar1 + 0x44) <= DAT_181108100)) {
      *(int *)(lVar1 + 0x40) = *(int *)(lVar1 + 0x40) + 1;
      *(int *)(lVar1 + 0x44) = iVar2 + 8;
      if (*(ulonglong *)(param_1 + 0x18) < 0x10) {
        pbVar7 = param_1;
      }
      else {
        pbVar7 = *(byte **)param_1;
      }
      if (((((pbVar7 == (byte *)0x0) || (*pbVar7 == 0)) ||
           ((DAT_181114308 == 0 &&
            (((hModule = GetModuleHandleA("resourcesystem.dll"), hModule == (HMODULE)0x0 ||
              (pFVar4 = GetProcAddress(hModule,"CreateInterface"), pFVar4 == (FARPROC)0x0)) ||
             (DAT_181114308 = (*pFVar4)("ResourceSystem013",0), DAT_181114308 == 0)))))) ||
          ((DAT_180961d08 == 0 || (DAT_180961d10 == 0)))) ||
         ((lVar5 = FUN_1801d6240(DAT_181114308,pbVar7), lVar5 == 0 ||
          (lVar6 = FUN_18000f3a0(lVar5), lVar6 == 0)))) {
        pcVar8 = "loading texture";
        if (0xb < *(int *)(lVar1 + 0x40)) {
          pcVar8 = "texture failed to load";
        }
        LOCK();
        UNLOCK();
        lVar5 = 0;
        PTR_DAT_1809f77c0 = pcVar8;
      }
      else {
        *(longlong *)(lVar1 + 0x38) = lVar5;
        FUN_180540170(local_418,0,0x400);
        if (*(ulonglong *)(param_1 + 0x18) < 0x10) {
          local_478 = param_1;
        }
        else {
          local_478 = *(byte **)param_1;
        }
        snprintf(local_418,0x400,
                 "<!-- kv3 encoding:text:version{e21c7f3c-8a33-41c5-9977-a76d3a32aa0d} format:generic:version{7412167c-06e9-4698-aff2-e63eb59037e7} -->\n{\n\tshader = \"sky.vfx\"\n\tg_flBrightnessExposureBias = 0.0\n\tg_flRenderOnlyExposureBias = 0.0\n\tSkyTexture = resource:\"%s\"\n\tg_tSkyTexture = resource:\"%s\"\n}\n"
                 ,local_478);
        local_458 = 0;
        uStack_450 = 0;
        uVar10 = 0x811c9dc5;
        local_448 = 0;
        uStack_440 = 0;
        local_438 = 0;
        uStack_430 = 0;
        local_428 = 0;
        uStack_420 = 0;
        if (*(ulonglong *)(param_1 + 0x18) < 0x10) {
          pbVar7 = param_1;
        }
        else {
          pbVar7 = *(byte **)param_1;
        }
        pbVar9 = pbVar7 + *(longlong *)(param_1 + 0x10);
        for (; pbVar7 != pbVar9; pbVar7 = pbVar7 + 1) {
          uVar10 = (*pbVar7 ^ uVar10) * 0x1000193;
        }
        snprintf(&local_458,0x40,"neverlose/sky_%08x.vmat",uVar10);
        lVar5 = FUN_1801d2330(local_418,&local_458);
        *(longlong *)(lVar1 + 0x30) = lVar5;
        pcVar8 = "sky material failed";
        if (lVar5 != 0) {
          pcVar8 = "ready";
        }
        LOCK();
        UNLOCK();
        lVar5 = *(longlong *)(lVar1 + 0x30);
        PTR_DAT_1809f77c0 = pcVar8;
      }
    }
    else {
      lVar5 = 0;
    }
  }
  return lVar5;
}



/* ===== 1803763c0 FUN_1803763c0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char FUN_1803763c0(ulonglong param_1)

{
  byte *pbVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  int iVar7;
  char *pcVar8;
  size_t sVar9;
  byte *pbVar10;
  longlong lVar11;
  undefined4 *puVar12;
  byte ****ppppbVar13;
  undefined2 *puVar14;
  byte ****ppppbVar15;
  undefined **ppuVar16;
  char cVar17;
  ulonglong uVar18;
  byte ****ppppbVar19;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  undefined4 extraout_XMM0_Da_06;
  undefined4 uVar20;
  undefined1 auStack_d8 [32];
  size_t local_b8;
  char local_a8 [8];
  ulonglong local_a0;
  undefined *local_98;
  byte ****local_90;
  undefined8 uStack_88;
  ulonglong local_80;
  ulonglong uStack_78;
  undefined1 local_70 [32];
  ulonglong local_50;
  
  local_50 = DAT_180919500 ^ (ulonglong)auStack_d8;
  local_98 = &DAT_1809f7770;
  local_a0 = param_1;
  iVar7 = FUN_1804e4d70(&DAT_1809f7770);
  if (iVar7 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809f77bc == 0x7fffffff) {
    DAT_1809f77bc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  uVar18 = ((((((((param_1 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^ param_1 >> 8 & 0xff) *
                 0x100000001b3 ^ param_1 >> 0x10 & 0xff) * 0x100000001b3 ^ param_1 >> 0x18 & 0xff) *
               0x100000001b3 ^ param_1 >> 0x20 & 0xff) * 0x100000001b3 ^ param_1 >> 0x28 & 0xff) *
             0x100000001b3 ^ param_1 >> 0x30 & 0xff) * 0x100000001b3 ^ param_1 >> 0x38) *
           0x100000001b3 & DAT_1811081a0;
  lVar11 = *(longlong *)(DAT_181108188 + 8 + uVar18 * 0x10);
  if (lVar11 == DAT_181108178) {
LAB_1803764f4:
    lVar11 = DAT_181108178;
  }
  else {
    uVar2 = *(ulonglong *)(lVar11 + 0x10);
    while (param_1 != uVar2) {
      if (lVar11 == *(longlong *)(DAT_181108188 + uVar18 * 0x10)) goto LAB_1803764f4;
      lVar11 = *(longlong *)(lVar11 + 8);
      uVar2 = *(ulonglong *)(lVar11 + 0x10);
    }
    if (lVar11 == 0) goto LAB_1803764f4;
  }
  if (lVar11 != DAT_181108178) {
    cVar17 = *(char *)(lVar11 + 0x18);
    goto LAB_1803768ef;
  }
  cVar17 = '\0';
  local_a8[0] = '\0';
  uStack_88 = 0;
  local_80 = _DAT_1808ad410;
  uStack_78 = _UNK_1808ad418;
  local_90 = (byte ****)0x0;
  pcVar8 = (char *)FUN_1801d2840(param_1);
  uVar20 = extraout_XMM0_Da;
  if (pcVar8 != (char *)0x0) {
    sVar9 = strlen(pcVar8);
    FUN_180029840(&local_90,pcVar8,sVar9);
    if (uStack_78 < 0x10) {
      ppppbVar13 = (byte ****)&local_90;
    }
    else {
      ppppbVar13 = local_90;
    }
    ppppbVar19 = (byte ****)((longlong)ppppbVar13 + local_80);
    for (ppppbVar15 = ppppbVar13; ppppbVar15 != ppppbVar19;
        ppppbVar15 = (byte ****)((longlong)ppppbVar15 + 1)) {
      iVar7 = tolower((uint)*(byte *)ppppbVar15);
      *(byte *)ppppbVar13 = (byte)iVar7;
      ppppbVar13 = (byte ****)((longlong)ppppbVar13 + 1);
    }
    ppppbVar13 = (byte ****)&local_90;
    if (0xf < uStack_78) {
      ppppbVar13 = local_90;
    }
    if (((local_80 < 0x12) ||
        (ppppbVar15 = (byte ****)
                      thunk_FUN_1804e6890(ppppbVar13,(byte ****)((longlong)ppppbVar13 + 0x12),
                                          "materials/effects/",0x12),
        ppppbVar15 == (byte ****)((longlong)ppppbVar13 + 0x12))) || (ppppbVar15 != ppppbVar13)) {
LAB_180376674:
      ppuVar16 = &PTR_s__sun__1806a4c00;
      do {
        ppppbVar13 = local_90;
        pcVar8 = *ppuVar16;
        local_b8 = strlen(pcVar8);
        ppppbVar15 = (byte ****)&local_90;
        if (0xf < uStack_78) {
          ppppbVar15 = ppppbVar13;
        }
        lVar11 = FUN_180068d80(ppppbVar15,local_80,0,pcVar8);
        if (lVar11 != -1) {
          cVar17 = '\x02';
        }
        ppuVar16 = ppuVar16 + 1;
      } while (ppuVar16 != &PTR_s_skydome_1806a4c40);
      ppuVar16 = &PTR_s_skydome_1806a4c40;
      do {
        pcVar8 = *ppuVar16;
        local_b8 = strlen(pcVar8);
        ppppbVar13 = (byte ****)&local_90;
        if (0xf < uStack_78) {
          ppppbVar13 = local_90;
        }
        lVar11 = FUN_180068d80(ppppbVar13,local_80,0,pcVar8);
        if (lVar11 != -1) {
          cVar17 = '\x01';
        }
        ppuVar16 = ppuVar16 + 1;
        uVar20 = extraout_XMM0_Da_03;
        local_a8[0] = cVar17;
      } while (ppuVar16 != &PTR_s_health_bar_1806a4c60);
    }
    else {
      ppppbVar13 = (byte ****)&local_90;
      if (0xf < uStack_78) {
        ppppbVar13 = local_90;
      }
      uVar20 = extraout_XMM0_Da_00;
      if (((3 < local_80) &&
          (pbVar1 = (byte *)((longlong)ppppbVar13 + local_80),
          pbVar10 = (byte *)thunk_FUN_1804e92d0(ppppbVar13,pbVar1,&DAT_1806f83d8,4),
          uVar20 = extraout_XMM0_Da_01, pbVar10 != pbVar1)) &&
         ((longlong)pbVar10 - (longlong)ppppbVar13 != -1)) goto LAB_180376674;
      ppppbVar13 = (byte ****)&local_90;
      if (0xf < uStack_78) {
        ppppbVar13 = local_90;
      }
      if (((4 < local_80) &&
          (pbVar1 = (byte *)((longlong)ppppbVar13 + local_80),
          pbVar10 = (byte *)thunk_FUN_1804e92d0(ppppbVar13,pbVar1,"cloud",5),
          uVar20 = extraout_XMM0_Da_02, pbVar10 != pbVar1)) &&
         ((longlong)pbVar10 - (longlong)ppppbVar13 != -1)) goto LAB_180376674;
    }
    ppppbVar13 = (byte ****)&local_90;
    if (0xf < uStack_78) {
      ppppbVar13 = local_90;
    }
    if (((local_80 < 3) ||
        (pbVar1 = (byte *)((longlong)ppppbVar13 + local_80),
        pbVar10 = (byte *)thunk_FUN_1804e92d0(ppppbVar13,pbVar1,&DAT_1806f8584,3),
        uVar20 = extraout_XMM0_Da_04, pbVar10 == pbVar1)) ||
       ((longlong)pbVar10 - (longlong)ppppbVar13 == -1)) {
      ppppbVar13 = (byte ****)&local_90;
      if (0xf < uStack_78) {
        ppppbVar13 = local_90;
      }
      if (((local_80 < 3) ||
          (pbVar1 = (byte *)((longlong)ppppbVar13 + local_80),
          pbVar10 = (byte *)thunk_FUN_1804e92d0(ppppbVar13,pbVar1,&DAT_1806d3d5c,3),
          uVar20 = extraout_XMM0_Da_05, pbVar10 == pbVar1)) ||
         ((longlong)pbVar10 - (longlong)ppppbVar13 == -1)) {
        ppppbVar13 = (byte ****)&local_90;
        if (0xf < uStack_78) {
          ppppbVar13 = local_90;
        }
        if (((local_80 < 5) ||
            (pbVar1 = (byte *)((longlong)ppppbVar13 + local_80),
            pbVar10 = (byte *)thunk_FUN_1804e92d0(ppppbVar13,pbVar1,"cloud",5),
            uVar20 = extraout_XMM0_Da_06, pbVar10 == pbVar1)) ||
           ((longlong)pbVar10 - (longlong)ppppbVar13 == -1)) goto LAB_1803768ba;
      }
    }
    if ((ulonglong)((longlong)DAT_181107f68 - _DAT_181107f60) < 0x400) {
      if (cVar17 == '\x01') {
        puVar14 = (undefined2 *)&DAT_18088cb14;
      }
      else {
        puVar14 = &DAT_1806f02a8;
        if (cVar17 == '\x02') {
          puVar14 = (undefined2 *)&DAT_18088cbf0;
        }
      }
      puVar12 = (undefined4 *)FUN_180066a20(local_70,puVar14,&local_90);
      puVar6 = DAT_181107f68;
      if (DAT_181107f68 == DAT_181107f70) {
        FUN_18009bb20(&DAT_181107f60,DAT_181107f68,puVar12);
      }
      else {
        *DAT_181107f68 = 0;
        puVar6[1] = 0;
        puVar6[2] = 0;
        puVar6[3] = 0;
        uVar20 = puVar12[1];
        uVar3 = puVar12[2];
        uVar4 = puVar12[3];
        *(undefined4 *)puVar6 = *puVar12;
        *(undefined4 *)((longlong)puVar6 + 4) = uVar20;
        *(undefined4 *)(puVar6 + 1) = uVar3;
        *(undefined4 *)((longlong)puVar6 + 0xc) = uVar4;
        uVar5 = *(undefined8 *)(puVar12 + 6);
        puVar6[2] = *(undefined8 *)(puVar12 + 4);
        puVar6[3] = uVar5;
        *(undefined8 *)(puVar12 + 4) = 0;
        *(undefined8 *)(puVar12 + 6) = 0xf;
        *(undefined1 *)puVar12 = 0;
        DAT_181107f68 = DAT_181107f68 + 4;
      }
      uVar20 = FUN_18000f890(local_70);
    }
  }
LAB_1803768ba:
  if (0x4000 < DAT_181108180) {
    uVar20 = FUN_180024000(&DAT_181108170);
  }
  FUN_18037bdb0(uVar20,local_70,&local_a0,local_a8);
  FUN_18000f890(&local_90);
LAB_1803768ef:
  FUN_1804e4e90(&DAT_1809f7770);
  return cVar17;
}



/* ===== 180376940 FUN_180376940 ===== */

undefined1 FUN_180376940(longlong param_1)

{
  longlong lVar1;
  
  if ((param_1 == 0) || (lVar1 = FUN_1804ef120(param_1,"jungle_cube_pfm_bc16d813"), lVar1 == 0)) {
    return 0;
  }
  return 1;
}



/* ===== 180376970 FUN_180376970 ===== */

void FUN_180376970(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = param_1 + 7;
  plVar2 = param_1 + 1;
  if (param_1 != param_1 + 6) {
    do {
      if ((longlong *)*plVar2 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar2 + 0x10))();
        *plVar2 = 0;
      }
      plVar2 = plVar2 + 1;
    } while (plVar2 != plVar1);
  }
  if ((longlong *)*plVar1 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*plVar1 + 0x10))();
    *plVar1 = 0;
  }
  if ((longlong *)*param_1 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_1 + 0x10))();
    *param_1 = 0;
  }
  param_1[8] = 0;
  return;
}



/* ===== 1803769e0 FUN_1803769e0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1803769e0(longlong *param_1,longlong *param_2,int param_3,byte param_4)

{
  int iVar1;
  ulonglong uVar2;
  uint uVar3;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined8 local_a4;
  uint local_9c;
  undefined4 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  int local_84;
  undefined8 local_80;
  int local_78;
  int local_74;
  int local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  uint local_58;
  undefined4 local_54;
  uint local_50;
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_c8;
  local_60 = 0;
  local_54 = 0;
  local_70 = 1;
  iVar1 = param_3 >> 1;
  while (0 < iVar1) {
    local_70 = local_70 + 1;
    iVar1 = param_3 >> ((byte)local_70 & 0x1f);
  }
  local_6c = 6;
  local_58 = (uint)param_4 << 5 | 8;
  local_68 = 0x1a;
  local_50 = param_4 | 4;
  local_64 = 1;
  local_5c = 0;
  local_78 = param_3;
  local_74 = param_3;
  uVar2 = (**(code **)(*param_1 + 0x28))(param_1,&local_78,0,param_2);
  if ((-1 < (int)uVar2) && (*param_2 != 0)) {
    if (param_4 != 0) {
      uVar3 = 0;
      do {
        local_a8 = local_68;
        local_a4 = 5;
        local_98 = 1;
        local_9c = uVar3;
        iVar1 = (**(code **)(*param_1 + 0x48))
                          (param_1,*param_2,&local_a8,param_2 + (ulonglong)uVar3 + 1);
        if (iVar1 < 0) goto LAB_180376b1b;
        uVar3 = uVar3 + 1;
      } while (uVar3 < 6);
    }
    local_90 = local_68;
    local_84 = local_70;
    local_8c = 9;
    local_80 = 0;
    iVar1 = (**(code **)(*param_1 + 0x38))(param_1,*param_2,&local_90,param_2 + 7);
    if (-1 < iVar1) {
      *(int *)((longlong)param_2 + 0x44) = local_70;
      *(int *)(param_2 + 8) = param_3;
      return CONCAT71((uint7)(uint3)((uint)local_70 >> 8),1);
    }
LAB_180376b1b:
    uVar2 = FUN_180376970(param_2);
  }
  return uVar2 & 0xffffffffffffff00;
}



/* ===== 180376b50 FUN_180376b50 ===== */

void FUN_180376b50(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  iVar1 = *(int *)(param_3 + 8);
  iVar2 = *(int *)(param_2 + 8);
  uVar4 = *(uint *)((longlong)param_3 + 0x44);
  uVar5 = (uint)(iVar1 < iVar2);
  if (uVar4 != 0) {
    uVar6 = 0;
    do {
      uVar3 = uVar6 + (iVar1 < iVar2);
      if (*(uint *)((longlong)param_2 + 0x44) <= uVar3) break;
      (**(code **)(*param_1 + 0x170))(param_1,*param_3,uVar6,0,0,0,*param_2,uVar3,0);
      uVar4 = *(uint *)((longlong)param_3 + 0x44);
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar4);
    if (uVar4 != 0) {
      uVar6 = 0;
      do {
        if (*(uint *)((longlong)param_2 + 0x44) <= uVar6 + uVar5) break;
        (**(code **)(*param_1 + 0x170))
                  (param_1,*param_3,uVar4 + uVar6,0,0,0,*param_2,
                   *(uint *)((longlong)param_2 + 0x44) + uVar6 + uVar5,0);
        uVar4 = *(uint *)((longlong)param_3 + 0x44);
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar4);
      if (uVar4 != 0) {
        uVar6 = 0;
        do {
          if (*(uint *)((longlong)param_2 + 0x44) <= uVar6 + uVar5) break;
          (**(code **)(*param_1 + 0x170))
                    (param_1,*param_3,uVar6 + uVar4 * 2,0,0,0,*param_2,
                     (*(uint *)((longlong)param_2 + 0x44) * 2 | uVar5) + uVar6,0);
          uVar4 = *(uint *)((longlong)param_3 + 0x44);
          uVar6 = uVar6 + 1;
        } while (uVar6 < uVar4);
        if (uVar4 != 0) {
          uVar6 = 0;
          do {
            if (*(uint *)((longlong)param_2 + 0x44) <= uVar6 + uVar5) break;
            (**(code **)(*param_1 + 0x170))
                      (param_1,*param_3,uVar6 + uVar4 * 3,0,0,0,*param_2,
                       uVar6 + *(uint *)((longlong)param_2 + 0x44) * 3 + uVar5,0);
            uVar4 = *(uint *)((longlong)param_3 + 0x44);
            uVar6 = uVar6 + 1;
          } while (uVar6 < uVar4);
          if (uVar4 != 0) {
            uVar6 = 0;
            do {
              if (*(uint *)((longlong)param_2 + 0x44) <= uVar6 + uVar5) break;
              (**(code **)(*param_1 + 0x170))
                        (param_1,*param_3,uVar6 + uVar4 * 4,0,0,0,*param_2,
                         (*(uint *)((longlong)param_2 + 0x44) * 4 | uVar5) + uVar6,0);
              uVar4 = *(uint *)((longlong)param_3 + 0x44);
              uVar6 = uVar6 + 1;
            } while (uVar6 < uVar4);
            if (uVar4 != 0) {
              uVar6 = 0;
              do {
                if (*(uint *)((longlong)param_2 + 0x44) <= uVar6 + uVar5) {
                  return;
                }
                (**(code **)(*param_1 + 0x170))
                          (param_1,*param_3,uVar6 + uVar4 * 5,0,0,0,*param_2,
                           uVar6 + *(uint *)((longlong)param_2 + 0x44) * 5 + uVar5,0);
                uVar4 = *(uint *)((longlong)param_3 + 0x44);
                uVar6 = uVar6 + 1;
              } while (uVar6 < uVar4);
            }
          }
        }
      }
    }
  }
  return;
}



/* ===== 180376de0 FUN_180376de0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_180376de0(longlong *param_1)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  uint7 uVar8;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *******pppppppuVar9;
  ulonglong uVar10;
  undefined1 auStack_98 [32];
  char *local_78;
  undefined4 local_70;
  undefined8 *******local_68;
  undefined8 *******local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_180919500 ^ (ulonglong)auStack_98;
  uVar8 = (uint7)(local_20 >> 8);
  if ((DAT_1811080c0 == param_1) && (DAT_181107ed8 != (longlong *)0x0)) {
    return CONCAT71(uVar8,1);
  }
  if (DAT_180cd10b9 != '\0') {
    return (ulonglong)uVar8 << 8;
  }
  uStack_50 = 0;
  local_48 = 0;
  local_40 = 0xf;
  local_58 = (undefined8 *******)0x0;
  local_68 = &local_58;
  local_70 = 0x8000;
  local_78 = "vs_5_0";
  plVar4 = (longlong *)
           FUN_18036e5f0("\nstruct vs_output {\n    float4 position : SV_Position;\n    float2 uv : TEXCOORD0;\n};\n\nvs_output vs_main(uint id : SV_VertexID) {\n    vs_output output;\n    float2 uv = float2((id << 1) & 2, id & 2);\n    output.uv = uv;\n    output.position = float4(uv * float2(2.0, -2.0) + float2(-1.0, 1.0), 0.0, 1.0);\n    return output;\n}\n"
                         ,0x143,"neverwin_sky_vs","vs_main");
  if (plVar4 == (longlong *)0x0) {
    pppppppuVar9 = &local_58;
    uVar5 = local_48;
    if (0xf < local_40) {
      pppppppuVar9 = local_58;
    }
  }
  else {
    lVar7 = *param_1;
    uVar5 = (**(code **)(*plVar4 + 0x20))(plVar4);
    uVar6 = (**(code **)(*plVar4 + 0x18))(plVar4);
    local_78 = (char *)&DAT_181107ed8;
    iVar3 = (**(code **)(lVar7 + 0x60))(param_1,uVar6,uVar5,0);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    local_28 = 0;
    local_38 = 0xe0;
    local_34 = 2;
    local_30 = 4;
    local_2c = 0x10000;
    if (((-1 < iVar3) &&
        (iVar3 = (**(code **)(*param_1 + 0x18))(param_1,&local_38,0,&DAT_181107ed0), -1 < iVar3)) &&
       (cVar2 = FUN_18036e1f0(&DAT_1811080d0,param_1), cVar2 != '\0')) {
      lVar7 = 1;
      DAT_1811080c0 = param_1;
      goto LAB_18037700a;
    }
    if (DAT_181107ed8 != (longlong *)0x0) {
      (**(code **)(*DAT_181107ed8 + 0x10))();
      DAT_181107ed8 = (longlong *)0x0;
    }
    if (DAT_181107ed0 != (longlong *)0x0) {
      (**(code **)(*DAT_181107ed0 + 0x10))();
      DAT_181107ed0 = (longlong *)0x0;
    }
    if (DAT_1811080e8 != (longlong *)0x0) {
      (**(code **)(*DAT_1811080e8 + 0x10))();
      DAT_1811080e8 = (longlong *)0x0;
    }
    if (DAT_1811080e0 != (longlong *)0x0) {
      (**(code **)(*DAT_1811080e0 + 0x10))();
      DAT_1811080e0 = (longlong *)0x0;
    }
    if (DAT_1811080d8 != (longlong *)0x0) {
      (**(code **)(*DAT_1811080d8 + 0x10))();
      DAT_1811080d8 = (longlong *)0x0;
    }
    if (DAT_1811080d0 != (longlong *)0x0) {
      (**(code **)(*DAT_1811080d0 + 0x10))();
      DAT_1811080d0 = (longlong *)0x0;
    }
    pppppppuVar9 = (undefined8 *******)"failed to create sky pipeline";
    uVar5 = 0x1d;
  }
  FUN_180029840(&DAT_1809f77c8,pppppppuVar9,uVar5);
  DAT_180cd10b9 = '\x01';
  lVar7 = 0;
LAB_18037700a:
  if (0xf < local_40) {
    uVar10 = local_40 + 1;
    pppppppuVar9 = local_58;
    if (0xfff < uVar10) {
      pppppppuVar9 = (undefined8 *******)local_58[-1];
      if ((char *)0x1f < (char *)((longlong)local_58 + (-8 - (longlong)pppppppuVar9))) {
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        pcVar1 = (code *)swi(3);
        lVar7 = (*pcVar1)();
        return lVar7;
      }
      uVar10 = local_40 + 0x28;
    }
    thunk_FUN_1803d64e0(pppppppuVar9,uVar10);
  }
  return lVar7;
}



/* ===== 180377080 FUN_180377080 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *** FUN_180377080(undefined8 ***param_1,char *param_2)

{
  code *pcVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  size_t sVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 ****ppppuVar9;
  ulonglong uVar10;
  undefined **ppuVar11;
  char *pcVar12;
  undefined1 auStack_148 [40];
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 **local_110;
  undefined8 **ppuStack_108;
  undefined8 ****local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  ulonglong local_e8;
  undefined8 ****local_d8;
  longlong lStack_d0;
  longlong local_c8;
  ulonglong uStack_c0;
  undefined1 local_b8 [32];
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  undefined1 local_58 [32];
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStack_148;
  uStack_f8 = 0;
  local_f0 = 0;
  local_e8 = 0xf;
  local_100 = (undefined8 ****)0x0;
  local_d8 = (undefined8 ****)param_1;
  uVar5 = FUN_180073a70(local_98,param_2,".hlsl");
  FUN_180066c10(local_78,uVar5);
  local_d8 = (undefined8 ****)0x1811bd078;
  lStack_d0 = 0x18;
  uVar3 = FUN_1804e5000();
  FUN_180013d60(local_b8,uVar3,&local_d8);
  uVar5 = FUN_180014f50(local_58,local_b8,local_78);
  cVar2 = FUN_180374510(uVar5,&local_100);
  FUN_1800289e0(local_58);
  FUN_1800289e0(local_b8);
  FUN_1800289e0(local_78);
  FUN_18000f890(local_98);
  if (cVar2 == '\0') {
    if (*(ulonglong *)(param_2 + 0x18) < 0x10) {
      pcVar12 = param_2;
    }
    else {
      pcVar12 = *(char **)param_2;
    }
    if (pcVar12 != (char *)0x0) {
      ppuVar11 = &PTR_s_wl_starry_night_1806a6d60;
      do {
        iVar4 = strcmp(*ppuVar11,pcVar12);
        if (iVar4 == 0) {
          pcVar12 = ppuVar11[5];
          sVar6 = strlen(pcVar12);
          FUN_180029840(&local_100,pcVar12,sVar6);
          goto LAB_1803771de;
        }
        ppuVar11 = ppuVar11 + 6;
      } while (ppuVar11 != &PTR_s_struct_neverwin_vs_output___floa_1806a6e80);
    }
    *param_1 = (undefined8 **)0x0;
    param_1[1] = (undefined8 **)0x0;
    param_1[2] = (undefined8 **)0x0;
    param_1[3] = (undefined8 **)0xf;
    *(undefined1 *)param_1 = 0;
  }
  else {
LAB_1803771de:
    local_120 = 0;
    uStack_118 = 0;
    local_110 = (undefined8 **)0x0;
    ppuStack_108 = (undefined8 **)0x0;
    uVar10 = FUN_18000fb70(0xc70);
    local_110 = (undefined8 **)0xc6a;
    ppuStack_108 = (undefined8 **)0xc6f;
    local_120 = uVar10;
    FUN_180540530(uVar10,
                  "\ncbuffer neverwin_sky_constants : register(b0) {\n    float4 Frame;\n    float4 Primary;\n    float4 Secondary;\n    float4 neverwin_orientation;\n    float4 neverwin_tint;\n    float4 neverwin_recolor;\n    float4 neverwin_parameters[8];\n};\n\nfloat Param(int index) {\n    return neverwin_parameters[clamp(index, 0, 7)].x;\n}\n\nfloat3 Palette(float x) {\n    return lerp(Primary.rgb, Secondary.rgb, saturate(x));\n}\n\nfloat Hash3(float3 p) {\n    p = frac(p * 0.1031);\n    p += dot(p, p.zyx + 31.32);\n    return frac((p.x + p.y) * p.z);\n}\n\nfloat Noise3(float3 p) {\n    float3 i = floor(p);\n    float3 f = frac(p);\n    float3 u = f * f * (3.0 - 2.0 * f);\n    float n000 = Hash3(i);\n    float n100 = Hash3(i + float3(1.0, 0.0, 0.0));\n    float n010 = Hash3(i + float3(0.0, 1.0, 0.0));\n    float n110 = Hash3(i + float3(1.0, 1.0, 0.0));\n    float n001 = Hash3(i + float3(0.0, 0.0, 1.0));\n    float n101 = Hash3(i + float3(1.0, 0.0, 1.0));\n    float n011 = Hash3(i + float3(0.0, 1.0, 1.0));\n    float n111 = Hash3(i + float3(1.0, 1.0, 1.0));\n    float x00 = lerp(n000, n100, u.x);\n    float x10 = lerp(n010, n110, u.x);\n    float x01 = lerp(n001, n101, u.x);\n    float x11 = lerp(n011, n111, u.x);\n    return lerp(lerp(x00, x10, u.y), lerp(x01, x11, u.y), u.z);\n}\n\nfloat Fbm3(float3 p) {\n    float sum = 0.0;\n    float amplitude = 0.5;\n    [unroll]\n    for (int i = 0; i < 5; i++) {\n        sum += amplitude * Noise3(p);\n        p = p * 2.03 + float3(17.1, 9.2, 3.7);\n        amplitude *= 0.5;\n    }\n    return sum / 0.96875;\n}\n\nfloat3 neverwin_star_layer(float3 d, float scale, float size, float density, float time, float seed) {\n    float3 p = d * scale;\n    float3 cell = floor(p);\n    float3 local = frac(p) - 0.5;\n    float h = Hash3(cell + seed);\n    float3 result = 0.0;\n    [branch]\n    if (h < density) {\n        float3 offset = float3(Hash3(cell + seed + 11.3), Hash3(cell + seed + 23.7), Hash3(cell + seed + 37.1)) - 0.5;\n        float3 delta = local - offset * 0.5;\n        delta -= d * dot(delta, d);\n        float distance_to_star = length(delta);\n   ..." /* TRUNCATED STRING LITERAL */
                  ,0xc6a);
    *(undefined1 *)(uVar10 + 0xc6a) = 0;
    uVar5 = FUN_180066a20(local_98,"\n#line 1 \"",param_2);
    plVar7 = (longlong *)FUN_1800134a0(uVar5,".hlsl\"\n",7);
    local_d8 = (undefined8 ****)*plVar7;
    lStack_d0 = plVar7[1];
    local_c8 = plVar7[2];
    uStack_c0 = plVar7[3];
    plVar7[2] = 0;
    plVar7[3] = 0xf;
    *(undefined1 *)plVar7 = 0;
    ppppuVar9 = &local_d8;
    if (0xf < uStack_c0) {
      ppppuVar9 = local_d8;
    }
    FUN_1800134a0(&local_120,ppppuVar9,local_c8);
    if (0xf < uStack_c0) {
      uVar10 = uStack_c0 + 1;
      ppppuVar9 = local_d8;
      if (0xfff < uVar10) {
        ppppuVar9 = (undefined8 ****)local_d8[-1];
        if (0x1f < (ulonglong)((longlong)local_d8 + (-8 - (longlong)ppppuVar9))) {
          pcVar1 = (code *)swi(0x29);
          (*pcVar1)(5);
          goto LAB_1803773c7;
        }
        uVar10 = uStack_c0 + 0x28;
      }
      thunk_FUN_1803d64e0(ppppuVar9,uVar10);
    }
    FUN_18000f890(local_98);
    ppppuVar9 = &local_100;
    if (0xf < local_e8) {
      ppppuVar9 = local_100;
    }
    FUN_1800134a0(&local_120,ppppuVar9,local_f0);
    FUN_1800134a0(&local_120,"\n#line 1 \"neverlose_entry\"\n",0x1a);
    FUN_1800134a0(&local_120,
                  "\nstruct neverwin_vs_output {\n    float4 position : SV_Position;\n    float2 uv : TEXCOORD0;\n};\n\nfloat3 neverwin_face_direction(uint face, float2 uv) {\n    float2 t = uv * 2.0 - 1.0;\n    float3 v;\n    if (face == 0) v = float3(1.0, -t.y, -t.x);\n    else if (face == 1) v = float3(-1.0, -t.y, t.x);\n    else if (face == 2) v = float3(t.x, 1.0, t.y);\n    else if (face == 3) v = float3(t.x, -1.0, -t.y);\n    else if (face == 4) v = float3(t.x, -t.y, 1.0);\n    else v = float3(-t.x, -t.y, -1.0);\n    return normalize(v);\n}\n\nfloat4 neverwin_sky_main(neverwin_vs_output input) : SV_Target {\n    float3 v = neverwin_face_direction((uint)Frame.x, input.uv);\n    float3 color = EvaluateSky(normalize(v), Frame.z) * Frame.w;\n    if (any(isnan(color)) || any(isinf(color))) color = 0.0;\n    float luminance = dot(max(color, 0.0), float3(0.2126, 0.7152, 0.0722));\n    float3 recolored = luminance * lerp(Primary.rgb, Secondary.rgb, smoothstep(0.0, 1.0, luminance)) * 1.5;\n    color = lerp(color, recolored, saturate(neverwin_recolor.x));\n    color *= neverwin_tint.rgb;\n    float noise = frac(sin(dot(input.position.xy + Frame.x * 37.0, float2(12.9898, 78.233))) * 43758.5453) - 0.5;\n    color *= 1.0 + noise * (1.0 / 96.0);\n    return float4(max(color, 0.0), 1.0);\n}\n"
                  ,0x4e7);
    *(undefined4 *)param_1 = (undefined4)local_120;
    *(undefined4 *)((longlong)param_1 + 4) = local_120._4_4_;
    *(undefined4 *)(param_1 + 1) = (undefined4)uStack_118;
    *(undefined4 *)((longlong)param_1 + 0xc) = uStack_118._4_4_;
    param_1[2] = local_110;
    param_1[3] = ppuStack_108;
    local_110 = (undefined8 **)0x0;
    ppuStack_108 = (undefined8 **)0xf;
    local_120 = local_120 & 0xffffffffffffff00;
  }
  if (0xf < local_e8) {
    uVar10 = local_e8 + 1;
    ppppuVar9 = local_100;
    if (0xfff < uVar10) {
      ppppuVar9 = (undefined8 ****)local_100[-1];
      if (0x1f < (ulonglong)((longlong)local_100 + (-8 - (longlong)ppppuVar9))) {
LAB_1803773c7:
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        pcVar1 = (code *)swi(3);
        puVar8 = (undefined8 *)(*pcVar1)();
        return (undefined8 ***)puVar8;
      }
      uVar10 = local_e8 + 0x28;
    }
    thunk_FUN_1803d64e0(ppppuVar9,uVar10);
  }
  return param_1;
}



/* ===== 1803773d0 FUN_1803773d0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

char * FUN_1803773d0(char *param_1,undefined8 *param_2)

{
  ulonglong *puVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 auStack_a8 [32];
  char *local_88;
  size_t local_80;
  undefined1 local_70 [32];
  undefined1 local_50 [32];
  char local_30 [32];
  ulonglong local_10;
  
  local_10 = DAT_180919500 ^ (ulonglong)auStack_a8;
  uVar4 = 0xcbf29ce484222325;
  puVar1 = param_2 + 2;
  if (0xf < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  uVar3 = 0;
  if (*puVar1 != 0) {
    do {
      uVar4 = (uVar4 ^ *(byte *)(uVar3 + (longlong)param_2)) * 0x100000001b3;
      uVar3 = uVar3 + 1;
    } while (uVar3 < *puVar1);
  }
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
  local_88 = param_1;
  snprintf(local_30,0x20,"%016llx.cso",uVar4 * -0x600553f7a9ca436f);
  local_80 = strlen(local_30);
  local_88 = local_30;
  uVar2 = FUN_1804e5000();
  FUN_180013d60(local_50,uVar2,&local_88);
  local_88 = "C:\\neverlose\\shaders\\cache";
  local_80 = 0x19;
  uVar2 = FUN_1804e5000();
  FUN_180013d60(local_70,uVar2,&local_88);
  FUN_180014f50(param_1,local_70,local_50);
  FUN_1800289e0(local_70);
  FUN_1800289e0(local_50);
  return param_1;
}



/* ===== 180377510 FUN_180377510 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180377510(undefined8 *param_1,longlong *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 ****ppppuVar4;
  undefined1 auStack_1a8 [48];
  undefined *local_178;
  undefined8 local_170;
  longlong local_168;
  undefined1 local_160 [128];
  longlong local_e0;
  undefined **local_c0 [13];
  undefined8 ****local_58 [3];
  ulonglong local_40;
  undefined8 ****local_38 [2];
  undefined8 local_28;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_1a8;
  local_178 = (undefined *)((ulonglong)local_178 & 0xffffffff00000000);
  local_170 = &PTR_vftable_18091a158;
  uVar3 = FUN_180014350(param_1,local_38);
  FUN_180016bc0(uVar3,&local_178);
  FUN_1800289e0(local_38);
  FUN_180024980(local_58,param_1);
  local_178 = &DAT_1806e6fbc;
  local_170 = (undefined **)0x4;
  uVar1 = FUN_1804e5000();
  FUN_180013d60(local_38,uVar1,&local_178);
  ppppuVar4 = local_38;
  if (7 < local_20) {
    ppppuVar4 = local_38[0];
  }
  FUN_180025260(local_58,ppppuVar4,local_28);
  FUN_1800289e0(local_38);
  FUN_180360300(&local_168,local_58);
  if (local_e0 == 0) {
    *(undefined ***)(local_160 + (longlong)*(int *)(local_168 + 4) + -8) =
         std::basic_ofstream<char,std::char_traits<char>_>::vftable;
    *(int *)(local_160 + (longlong)*(int *)(local_168 + 4) + -0xc) = *(int *)(local_168 + 4) + -0xa8
    ;
    FUN_1800681f0(local_160);
    *(undefined ***)(local_160 + (longlong)*(int *)(local_168 + 4) + -8) =
         std::basic_ostream<char,std::char_traits<char>_>::vftable;
    *(int *)(local_160 + (longlong)*(int *)(local_168 + 4) + -0xc) = *(int *)(local_168 + 4) + -0x10
    ;
    local_c0[0] = std::ios_base::vftable;
    FUN_1804eaa10(local_c0);
  }
  else {
    FUN_1800682a0(&local_168,*param_2,param_2[1] - *param_2);
    *(undefined ***)(local_160 + (longlong)*(int *)(local_168 + 4) + -8) =
         std::basic_ofstream<char,std::char_traits<char>_>::vftable;
    *(int *)(local_160 + (longlong)*(int *)(local_168 + 4) + -0xc) = *(int *)(local_168 + 4) + -0xa8
    ;
    FUN_1800681f0(local_160);
    *(undefined ***)(local_160 + (longlong)*(int *)(local_168 + 4) + -8) =
         std::basic_ostream<char,std::char_traits<char>_>::vftable;
    *(int *)(local_160 + (longlong)*(int *)(local_168 + 4) + -0xc) = *(int *)(local_168 + 4) + -0x10
    ;
    local_c0[0] = std::ios_base::vftable;
    FUN_1804eaa10(local_c0);
    if (7 < (ulonglong)param_1[3]) {
      param_1 = (undefined8 *)*param_1;
    }
    ppppuVar4 = local_58;
    if (7 < local_40) {
      ppppuVar4 = local_58[0];
    }
    iVar2 = FUN_1804e5f20(ppppuVar4,param_1);
    if (iVar2 != 0) {
      ppppuVar4 = local_58;
      if (7 < local_40) {
        ppppuVar4 = local_58[0];
      }
      FUN_1804e5bf0(ppppuVar4);
    }
  }
  FUN_1800289e0(local_58);
  return;
}



/* ===== 180377750 FUN_180377750 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong * FUN_180377750(ulonglong *param_1,ulonglong *param_2,undefined8 *param_3,byte param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 auStack_268 [32];
  char *local_248;
  int local_240;
  ulonglong *local_238;
  longlong local_228;
  undefined1 local_220;
  undefined1 local_21f;
  undefined4 local_21e;
  undefined2 local_21a;
  undefined8 local_218;
  undefined2 local_210;
  undefined4 local_20e;
  undefined2 local_20a;
  longlong local_1f8 [9];
  longlong alStack_1b0 [9];
  longlong local_168;
  ulonglong *local_e8;
  undefined8 *local_e0;
  ulonglong local_d8;
  ulonglong uStack_d0;
  ulonglong local_c8;
  ulonglong local_c0;
  int *local_b8;
  ulonglong uStack_b0;
  ulonglong local_a8;
  ulonglong local_a0;
  ulonglong uStack_98;
  ulonglong local_90;
  ulonglong local_88;
  byte local_80;
  undefined1 local_78 [32];
  ulonglong local_58;
  
  local_58 = DAT_180919500 ^ (ulonglong)auStack_268;
  uStack_d0 = 0;
  local_c8 = 0;
  local_c0 = 0xf;
  local_d8 = 0;
  local_b8 = (int *)0x0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_98 = 0;
  local_90 = 0;
  local_88 = 0xf;
  local_a0 = 0;
  if (&local_d8 != param_2) {
    local_d8 = *param_2;
    uStack_d0 = param_2[1];
    local_c8 = param_2[2];
    local_c0 = param_2[3];
    param_2[2] = 0;
    param_2[3] = 0xf;
    *(undefined1 *)param_2 = 0;
  }
  local_e8 = param_2;
  local_e0 = param_3;
  local_80 = param_4;
  FUN_1803773d0(local_78,param_3);
  FUN_180276480(local_1f8,local_78,0x20);
  if (local_168 != 0) {
    local_228 = *(longlong *)((longlong)alStack_1b0 + (longlong)*(int *)(local_1f8[0] + 4));
    local_218 = 0;
    local_210 = 1;
    local_20e = local_21e;
    local_20a = local_21a;
    local_220 = local_228 == 0;
    local_21f = 0;
    FUN_18023b240(&local_b8,&local_228,&local_218);
    if ((0x20 < uStack_b0 - (longlong)local_b8) && (*local_b8 == 0x43425844)) {
      FUN_18005e2f0(local_1f8);
      local_80 = 1;
      *param_1 = 0;
      param_1[1] = 0;
      *param_1 = local_d8;
      param_1[1] = uStack_d0;
      param_1[2] = local_c8;
      param_1[3] = local_c0;
      param_1[4] = (ulonglong)local_b8;
      param_1[5] = uStack_b0;
      param_1[6] = local_a8;
      param_1[7] = local_a0;
      param_1[8] = uStack_98;
      param_1[9] = local_90;
      param_1[10] = local_88;
      *(undefined1 *)(param_1 + 0xb) = 1;
      goto LAB_180377b84;
    }
  }
  FUN_18005e2f0(local_1f8);
  if ((ulonglong)param_3[3] < 0x10) {
    puVar4 = param_3;
  }
  else {
    puVar4 = (undefined8 *)*param_3;
  }
  local_240 = (uint)(param_4 ^ 1) << 2;
  local_238 = &local_a0;
  local_248 = "ps_5_0";
  plVar1 = (longlong *)FUN_18036e5f0(puVar4,param_3[2],"neverlose_sky","neverlose_sky_main");
  if (plVar1 == (longlong *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    *param_1 = local_d8;
    param_1[1] = uStack_d0;
    param_1[2] = local_c8;
    param_1[3] = local_c0;
    param_1[4] = (ulonglong)local_b8;
    param_1[5] = uStack_b0;
    param_1[6] = local_a8;
    param_1[7] = local_a0;
    param_1[8] = uStack_98;
    param_1[9] = local_90;
  }
  else {
    uVar2 = (**(code **)(*plVar1 + 0x18))(plVar1);
    uVar3 = (**(code **)(*plVar1 + 0x20))(plVar1);
    FUN_18028de20(&local_b8,uVar2,uVar3);
    (**(code **)(*plVar1 + 0x10))(plVar1);
    if (param_4 != 0) {
      FUN_180377510(local_78,&local_b8);
    }
    *param_1 = 0;
    param_1[1] = 0;
    *param_1 = local_d8;
    param_1[1] = uStack_d0;
    param_1[2] = local_c8;
    param_1[3] = local_c0;
    param_1[4] = (ulonglong)local_b8;
    param_1[5] = uStack_b0;
    param_1[6] = local_a8;
    param_1[7] = local_a0;
    param_1[8] = uStack_98;
    param_1[9] = local_90;
  }
  param_1[10] = local_88;
  *(byte *)(param_1 + 0xb) = local_80;
LAB_180377b84:
  local_88 = 0xf;
  local_c0 = 0xf;
  local_c8 = 0;
  local_d8 = local_d8 & 0xffffffffffffff00;
  local_a8 = 0;
  uStack_b0 = 0;
  local_b8 = (int *)0x0;
  local_90 = 0;
  local_a0 = local_a0 & 0xffffffffffffff00;
  FUN_1800289e0(local_78);
  FUN_18000f890(&local_a0);
  FUN_180081c30(&local_b8);
  FUN_18000f890(&local_d8);
  FUN_18000f890(param_2);
  FUN_18000f890(param_3);
  return param_1;
}



/* ===== 180377c20 FUN_180377c20 ===== */

void FUN_180377c20(longlong param_1)

{
  FUN_18000f890(param_1 + 0x38);
  FUN_180081c30(param_1 + 0x20);
  FUN_18000f890(param_1);
  return;
}



/* ===== 180377c50 FUN_180377c50 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180377c50(longlong *param_1)

{
  longlong lVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 auStack_128 [32];
  longlong *local_108;
  uint *local_100;
  uint local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined1 local_d0 [32];
  uint local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 local_88 [32];
  undefined1 local_68 [24];
  undefined1 local_50 [40];
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_128;
  lVar7 = *param_1;
  lVar1 = param_1[1];
  local_108 = param_1;
  while ((lVar7 != lVar1 && (DAT_180cd107e == '\0'))) {
    FUN_180377080(&local_b0,lVar7);
    if (local_a0 == 0) {
      uVar8 = uStack_98;
    }
    else {
      local_100 = &local_f0;
      local_f0 = local_b0;
      uStack_ec = uStack_ac;
      uStack_e8 = uStack_a8;
      uStack_e4 = uStack_a4;
      local_e0 = (undefined4)local_a0;
      uStack_dc = local_a0._4_4_;
      uStack_d8 = (undefined4)uStack_98;
      uStack_d4 = uStack_98._4_4_;
      local_a0 = 0;
      uStack_98 = 0xf;
      local_b0 = local_b0 & 0xffffff00;
      uVar4 = FUN_180024b50(local_d0,lVar7);
      FUN_180377750(local_88,uVar4,&local_f0,1);
      FUN_18000f890(local_50);
      FUN_180081c30(local_68);
      FUN_18000f890(local_88);
      uVar8 = 0xf;
    }
    LOCK();
    DAT_181107ee4 = DAT_181107ee4 + 1;
    UNLOCK();
    if (0xf < uVar8) {
      uVar6 = uVar8 + 1;
      lVar3 = CONCAT44(uStack_ac,local_b0);
      lVar5 = lVar3;
      if (0xfff < uVar6) {
        lVar5 = *(longlong *)(lVar3 + -8);
        if (0x1f < (lVar3 - lVar5) - 8U) {
          pcVar2 = (code *)swi(0x29);
          (*pcVar2)(5);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar6 = uVar8 + 0x28;
      }
      thunk_FUN_1803d64e0(lVar5,uVar6);
    }
    lVar7 = lVar7 + 0x20;
  }
  FUN_1800288b0(param_1);
  return;
}



/* ===== 180377de0 FUN_180377de0 ===== */

void FUN_180377de0(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  size_t _Size;
  undefined8 *puVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  HMODULE hModule;
  undefined8 *puVar8;
  undefined8 *_Buf1;
  undefined8 *_Buf2;
  undefined8 local_res10;
  longlong *local_48;
  undefined1 local_40;
  longlong local_38;
  longlong lStack_30;
  longlong local_28;
  
  plVar2 = DAT_181107f50;
  if (DAT_181107f50 == (longlong *)0x0) goto LAB_180377ee3;
  if (DAT_181107f58 == '\0') {
LAB_180377e2e:
    plVar1 = DAT_181107f50 + 4;
    local_48 = plVar1;
    iVar6 = FUN_1804e4d70(plVar1);
    if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1804e4a90(5);
    }
    if (*(int *)((longlong)plVar2 + 0x6c) == 0x7fffffff) {
      *(undefined4 *)((longlong)plVar2 + 0x6c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1804e4a90(6);
    }
    local_40 = 1;
    cVar5 = (**(code **)(*plVar2 + 0x18))(plVar2);
    if (cVar5 != '\0') {
LAB_180377e66:
      FUN_1804e4e90(plVar1);
      return;
    }
    FUN_1800ad890(&local_res10);
    iVar6 = *(int *)((longlong)plVar2 + 0xbc);
    do {
      if (iVar6 != 0) goto LAB_180377eb6;
      iVar7 = FUN_180381fa0(plVar2 + 0xe,&local_48,local_res10);
      iVar6 = *(int *)((longlong)plVar2 + 0xbc);
    } while (iVar7 != 1);
    if (iVar6 == 0) goto LAB_180377e66;
LAB_180377eb6:
    FUN_1804e4e90(plVar1);
  }
  else if ((char)DAT_181107f50[0x17] == '\0') {
    if ((DAT_181107f58 != '\0') && ((char)DAT_181107f50[0x17] != '\0')) {
                    /* WARNING: Subroutine does not return */
      FUN_180372cb0(4);
    }
    goto LAB_180377e2e;
  }
  if ((DAT_181107f50 != (longlong *)0x0) &&
     ((DAT_181107f58 == '\0' || ((char)DAT_181107f50[0x17] == '\0')))) {
    FUN_180372e30();
  }
LAB_180377ee3:
  local_38 = 0;
  lStack_30 = 0;
  local_28 = 0;
  FUN_180028f00(&local_38,0,param_1);
  puVar3 = DAT_181108110;
  for (puVar8 = DAT_181108108; puVar8 != puVar3; puVar8 = puVar8 + 0xc) {
    if ((ulonglong)param_1[3] < 0x10) {
      _Buf2 = param_1;
    }
    else {
      _Buf2 = (undefined8 *)*param_1;
    }
    _Size = puVar8[2];
    if ((ulonglong)puVar8[3] < 0x10) {
      _Buf1 = puVar8;
    }
    else {
      _Buf1 = (undefined8 *)*puVar8;
    }
    if ((_Size != param_1[2]) || ((_Size != 0 && (iVar6 = memcmp(_Buf1,_Buf2,_Size), iVar6 != 0))))
    {
      if (lStack_30 == local_28) {
        FUN_180028f00(&local_38,lStack_30,puVar8);
      }
      else {
        FUN_180024b50(lStack_30,puVar8);
        lStack_30 = lStack_30 + 0x20;
      }
    }
  }
  LOCK();
  DAT_181107ee4 = 0;
  UNLOCK();
  LOCK();
  DAT_181107ee0 = (undefined4)(lStack_30 - local_38 >> 5);
  UNLOCK();
  LOCK();
  DAT_180cd107e = 0;
  UNLOCK();
  if ((DAT_1811162a0 == (FARPROC)0x0) &&
     ((hModule = GetModuleHandleA("d3dcompiler_47.dll"), hModule != (HMODULE)0x0 ||
      (hModule = LoadLibraryA("d3dcompiler_47.dll"), hModule != (HMODULE)0x0)))) {
    DAT_1811162a0 = GetProcAddress(hModule,"D3DCompile");
  }
  puVar8 = (undefined8 *)FUN_18037c0a0(&local_48);
  plVar2 = DAT_181107f50;
  if ((longlong **)puVar8 != &DAT_181107f50) {
    if (DAT_181107f50 != (longlong *)0x0) {
      LOCK();
      plVar1 = DAT_181107f50 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        puVar3 = (undefined8 *)plVar2[0x19];
        if (puVar3 == (undefined8 *)0x0) {
          (**(code **)*plVar2)(plVar2,1);
        }
        else {
          (**(code **)*puVar3)(puVar3,plVar2);
        }
      }
    }
    DAT_181107f50 = (longlong *)*puVar8;
    *puVar8 = 0;
    DAT_181107f58 = *(char *)(puVar8 + 1);
  }
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_48 + 1;
    lVar4 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      puVar8 = (undefined8 *)local_48[0x19];
      if (puVar8 == (undefined8 *)0x0) {
        (**(code **)*local_48)(local_48,1);
      }
      else {
        (**(code **)*puVar8)(puVar8,local_48);
      }
    }
  }
  FUN_1800288b0(&local_38);
  return;
}



/* ===== 1803780f0 FUN_1803780f0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1803780f0(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  code *pcVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  int iVar14;
  int iVar13;
  undefined1 *puVar15;
  undefined4 uVar16;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [24];
  undefined1 *local_88;
  undefined1 *local_80;
  undefined1 local_78 [8];
  undefined1 local_70 [32];
  undefined1 local_50 [16];
  longlong local_40;
  ulonglong local_30;
  
  local_30 = DAT_180919500 ^ (ulonglong)auStack_a8;
  FUN_180377080(local_50,param_1);
  if (local_40 != 0) {
    FUN_18036e580();
    if (param_1 != (undefined8 *)&DAT_1809f77e8) {
      if ((ulonglong)param_1[3] < 0x10) {
        puVar11 = param_1;
      }
      else {
        puVar11 = (undefined8 *)*param_1;
      }
      FUN_180029840(&DAT_1809f77e8,puVar11,param_1[2]);
    }
    DAT_180cd10ba = 0;
    puVar11 = param_1 + 4;
    plVar7 = (longlong *)FUN_180066a20(local_70,"compiling ");
    if (plVar7 == &DAT_1809f77c8) {
LAB_1803782df:
      FUN_18000f890(local_70);
      local_78[0] = 0;
      local_80 = local_78;
      local_88 = local_50;
      plVar7 = (longlong *)FUN_18037c240(local_70);
      puVar11 = DAT_181108160;
      puVar15 = auStack_a8;
      param_1 = (undefined8 *)0xffffffff;
      iVar14 = -1;
      iVar13 = -1;
      if ((undefined8 **)plVar7 != &DAT_181108160) {
        puVar15 = auStack_a8;
        iVar13 = iVar14;
        if (DAT_181108160 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(DAT_181108160 + 1);
          iVar14 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          puVar15 = auStack_a8;
          if (iVar14 == 1) {
            puVar2 = (undefined8 *)puVar11[0x25];
            puVar15 = auStack_a8;
            if (puVar2 == (undefined8 *)0x0) goto LAB_180378359;
            (**(code **)*puVar2)(puVar2,puVar11);
            puVar15 = auStack_a8;
          }
        }
        goto LAB_180378366;
      }
    }
    else {
      if (DAT_1809f77e0 < 0x10) {
LAB_1803782a2:
        DAT_1809f77c8 = *plVar7;
        lRam00000001809f77d0 = plVar7[1];
        _DAT_1809f77d8 = plVar7[2];
        DAT_1809f77e0 = plVar7[3];
        plVar7[2] = 0;
        plVar7[3] = 0xf;
        *(undefined1 *)plVar7 = 0;
        goto LAB_1803782df;
      }
      uVar12 = DAT_1809f77e0 + 1;
      lVar9 = DAT_1809f77c8;
      if (uVar12 < 0x1000) {
LAB_18037829d:
        thunk_FUN_1803d64e0(lVar9,uVar12);
        goto LAB_1803782a2;
      }
      lVar9 = *(longlong *)(DAT_1809f77c8 + -8);
      if ((DAT_1809f77c8 - lVar9) - 8U < 0x20) {
        uVar12 = DAT_1809f77e0 + 0x28;
        goto LAB_18037829d;
      }
      pcVar3 = (code *)swi(0x29);
      (*pcVar3)(5);
      puVar15 = auStack_a0;
LAB_180378359:
      iVar13 = (int)param_1;
      pcVar3 = *(code **)*puVar11;
      *(undefined8 *)(puVar15 + -8) = 0x180378366;
      (*pcVar3)(puVar11,1);
LAB_180378366:
      DAT_181108160 = (undefined8 *)*plVar7;
      *plVar7 = 0;
      DAT_181108168 = (undefined1)plVar7[1];
    }
    puVar11 = *(undefined8 **)(puVar15 + 0x38);
    if (puVar11 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar11 + 1);
      iVar14 = *piVar1;
      *piVar1 = *piVar1 + iVar13;
      UNLOCK();
      if (iVar14 == 1) {
        puVar2 = (undefined8 *)puVar11[0x25];
        if (puVar2 == (undefined8 *)0x0) {
          pcVar3 = *(code **)*puVar11;
          *(undefined8 *)(puVar15 + -8) = 0x1803783b4;
          (*pcVar3)(puVar11,1);
        }
        else {
          pcVar3 = *(code **)*puVar2;
          *(undefined8 *)(puVar15 + -8) = 0x1803783a8;
          (*pcVar3)(puVar2,puVar11);
        }
      }
    }
    goto LAB_1803783b5;
  }
  uVar6 = FUN_180066a20(local_70,"cannot read ",param_1);
  plVar7 = (longlong *)FUN_1800134a0(uVar6,".hlsl",5);
  lVar9 = *plVar7;
  lVar4 = plVar7[1];
  lVar5 = plVar7[2];
  uVar12 = plVar7[3];
  plVar7[2] = 0;
  plVar7[3] = 0xf;
  *(undefined1 *)plVar7 = 0;
  if (DAT_1809f77e0 < 0x10) {
LAB_1803781b5:
    DAT_1809f77c8 = lVar9;
    lRam00000001809f77d0 = lVar4;
    _DAT_1809f77d8 = lVar5;
    DAT_1809f77e0 = uVar12;
    uVar16 = FUN_18000f890(local_70);
    puVar15 = auStack_a8;
    if (param_1 == &DAT_1809f7808) goto LAB_1803783b5;
    puVar15 = auStack_a8;
    if (0xf < (ulonglong)param_1[3]) {
      FUN_180029840(&DAT_1809f7808,*param_1,param_1[2]);
      puVar15 = auStack_a8;
      goto LAB_1803783b5;
    }
  }
  else {
    uVar10 = DAT_1809f77e0 + 1;
    lVar8 = DAT_1809f77c8;
    if (uVar10 < 0x1000) {
LAB_1803781b0:
      thunk_FUN_1803d64e0(lVar8,uVar10);
      goto LAB_1803781b5;
    }
    lVar8 = *(longlong *)(DAT_1809f77c8 + -8);
    if ((DAT_1809f77c8 - lVar8) - 8U < 0x20) {
      uVar10 = DAT_1809f77e0 + 0x28;
      goto LAB_1803781b0;
    }
    pcVar3 = (code *)swi(0x29);
    uVar16 = (*pcVar3)(5);
    puVar15 = auStack_a0;
  }
  uVar6 = param_1[2];
  *(undefined8 *)(puVar15 + -8) = 0x180378208;
  FUN_180029840(uVar16,param_1,uVar6);
LAB_1803783b5:
  *(undefined8 *)(puVar15 + -8) = 0x1803783bf;
  FUN_18000f890(puVar15 + 0x58);
  *(undefined8 *)(puVar15 + -8) = 0x1803783cc;
  return;
}



/* ===== 1803783f0 FUN_1803783f0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1803783f0(longlong ******param_1)

{
  longlong *plVar1;
  longlong ****pppplVar2;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  longlong ******pppppplVar11;
  longlong *plVar12;
  size_t sVar13;
  longlong lVar14;
  undefined8 *******pppppppuVar15;
  longlong *****ppppplVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  char *_Str;
  undefined1 *puVar19;
  undefined1 *puVar20;
  longlong ******pppppplVar21;
  ulonglong *puVar22;
  ulonglong *puVar23;
  longlong *******ppppppplVar24;
  undefined4 uVar25;
  undefined8 uStack_150;
  undefined1 auStack_148 [8];
  undefined1 auStack_140 [24];
  longlong alStack_128 [2];
  undefined4 local_118 [2];
  longlong *****local_110;
  char acStack_108 [4];
  char acStack_104 [2];
  undefined2 uStack_102;
  ulonglong local_100;
  ulonglong uStack_f8;
  undefined8 local_f0;
  longlong *local_e8;
  undefined1 local_e0;
  longlong ******local_d8;
  longlong ******pppppplStack_d0;
  ulonglong local_c8;
  ulonglong local_c0;
  undefined8 *******local_b8 [2];
  undefined8 local_a8;
  ulonglong local_a0;
  longlong local_98;
  longlong local_90;
  longlong *******local_80 [2];
  ulonglong local_70;
  ulonglong local_68;
  char local_60;
  ulonglong local_58;
  
  plVar12 = DAT_181108160;
  local_58 = DAT_180919500 ^ (ulonglong)auStack_148;
  puVar22 = (ulonglong *)0x0;
  local_118[0] = 0;
  puVar20 = auStack_148;
  if (DAT_181108160 == (longlong *)0x0) goto LAB_180378808;
  if (DAT_181108168 != '\0') {
    puVar20 = auStack_148;
    if ((char)DAT_181108160[0x23] != '\0') goto LAB_180378808;
    if ((DAT_181108168 != '\0') && ((char)DAT_181108160[0x23] != '\0')) {
                    /* WARNING: Subroutine does not return */
      FUN_180372cb0(4);
    }
  }
  plVar1 = DAT_181108160 + 0x10;
  local_e8 = plVar1;
  iVar8 = FUN_1804e4d70(plVar1);
  if (iVar8 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (*(int *)((longlong)plVar12 + 0xcc) == 0x7fffffff) {
    *(undefined4 *)((longlong)plVar12 + 0xcc) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  local_e0 = 1;
  cVar7 = (**(code **)(*plVar12 + 0x18))(plVar12);
  if (cVar7 == '\0') {
    FUN_1800ad890(&local_f0);
    puVar20 = auStack_148;
    puVar19 = auStack_148;
    iVar8 = *(int *)((longlong)plVar12 + 0x11c);
    do {
      if (iVar8 != 0) goto LAB_1803784e9;
      iVar9 = FUN_180381fa0(plVar12 + 0x1a,&local_e8,local_f0);
      iVar8 = *(int *)((longlong)plVar12 + 0x11c);
    } while (iVar9 != 1);
    if (iVar8 != 0) {
LAB_1803784e9:
      uVar25 = FUN_1804e4e90(plVar1);
      FUN_18037c720(uVar25,local_b8);
      pppppppuVar15 = local_b8;
      if (0xf < local_a0) {
        pppppppuVar15 = local_b8[0];
      }
      FUN_180029840(&DAT_1809f7808,pppppppuVar15,local_a8);
      if (local_98 == local_90) {
        if (local_70 == 0) {
          local_100 = 0xe;
          uStack_f8 = 0xf;
          local_110 = (longlong *****)s_compile_failed_18088cc60._0_8_;
          acStack_108[0] = s_compile_failed_18088cc60[8];
          acStack_108[1] = s_compile_failed_18088cc60[9];
          acStack_108[2] = s_compile_failed_18088cc60[10];
          acStack_108[3] = s_compile_failed_18088cc60[0xb];
          acStack_104[0] = s_compile_failed_18088cc60[0xc];
          acStack_104[1] = s_compile_failed_18088cc60[0xd];
          uStack_102 = 0;
          param_1 = &local_110;
          bVar6 = true;
          bVar5 = false;
          puVar22 = &local_100;
          puVar23 = &uStack_f8;
          uVar18 = local_c0;
          pppppplVar11 = local_d8;
        }
        else {
          pppppplStack_d0 = (longlong ******)0x0;
          ppppppplVar24 = (longlong *******)local_80;
          if (0xf < local_68) {
            ppppppplVar24 = local_80[0];
          }
          if (0x7fffffffffffffff < local_70) {
                    /* WARNING: Subroutine does not return */
            FUN_180011990();
          }
          if (local_70 < 0x10) {
            local_c8 = local_70;
            uVar18 = 0xf;
            local_c0 = 0xf;
            pppppplVar11 = *ppppppplVar24;
            local_d8 = pppppplVar11;
            pppppplStack_d0 = ppppppplVar24[1];
          }
          else {
            uVar10 = local_70 | 0xf;
            uVar18 = 0x7fffffffffffffff;
            if ((uVar10 < 0x8000000000000000) && (uVar18 = uVar10, uVar10 < 0x16)) {
              uVar18 = 0x16;
            }
            pppppplVar11 = (longlong ******)FUN_18000fb70(uVar18 + 1);
            local_c8 = local_70;
            local_d8 = pppppplVar11;
            local_c0 = uVar18;
            FUN_180540530(pppppplVar11,ppppppplVar24,local_70 + 1);
          }
          param_1 = (longlong ******)&local_d8;
          bVar6 = false;
          bVar5 = true;
          puVar22 = &local_c8;
          puVar23 = &local_c0;
        }
        if (param_1 != (longlong ******)&DAT_1809f77c8) {
          if (DAT_1809f77e0 < (longlong *****)0x10) {
LAB_180378688:
            DAT_1809f77c8._0_4_ = *(undefined4 *)param_1;
            DAT_1809f77c8._4_4_ = *(undefined4 *)((longlong)param_1 + 4);
            uRam00000001809f77d0 = *(undefined4 *)(param_1 + 1);
            uRam00000001809f77d4 = *(undefined4 *)((longlong)param_1 + 0xc);
            _DAT_1809f77d8 = param_1[2];
            DAT_1809f77e0 = param_1[3];
            *puVar22 = 0;
            *puVar23 = 0xf;
            *(undefined1 *)param_1 = 0;
            uVar18 = local_c0;
            pppppplVar11 = local_d8;
            goto LAB_1803786c1;
          }
          ppppplVar16 = (longlong *****)((longlong)DAT_1809f77e0 + 1);
          lVar4 = CONCAT44(DAT_1809f77c8._4_4_,(undefined4)DAT_1809f77c8);
          lVar14 = lVar4;
          if (ppppplVar16 < (longlong *****)0x1000) {
LAB_180378683:
            thunk_FUN_1803d64e0(lVar14,ppppplVar16);
            goto LAB_180378688;
          }
          lVar14 = *(longlong *)(lVar4 + -8);
          if ((lVar4 - lVar14) - 8U < 0x20) {
            ppppplVar16 = DAT_1809f77e0 + 5;
            goto LAB_180378683;
          }
LAB_180378746:
          pcVar3 = (code *)swi(0x29);
          (*pcVar3)(5);
          puVar19 = auStack_140;
LAB_18037874d:
          pcVar3 = (code *)swi(0x29);
          (*pcVar3)(5);
          puVar20 = puVar19 + 8;
          goto LAB_180378754;
        }
LAB_1803786c1:
        uVar10 = uStack_f8;
        if ((bVar5) && (0xf < uVar18)) {
          uVar17 = uVar18 + 1;
          pppppplVar21 = pppppplVar11;
          if (0xfff < uVar17) {
            pppppplVar21 = (longlong ******)pppppplVar11[-1];
            if (0x1f < (ulonglong)((longlong)pppppplVar11 + (-8 - (longlong)pppppplVar21)))
            goto LAB_180378746;
            uVar17 = uVar18 + 0x28;
          }
          thunk_FUN_1803d64e0(pppppplVar21,uVar17);
        }
        puVar20 = auStack_148;
        if ((bVar6) && (puVar20 = auStack_148, 0xf < uVar10)) {
          uVar18 = uVar10 + 1;
          ppppplVar16 = local_110;
          if (0xfff < uVar18) {
            ppppplVar16 = (longlong *****)local_110[-1];
            if (0x1f < (ulonglong)((longlong)local_110 + (-8 - (longlong)ppppplVar16)))
            goto LAB_18037874d;
            uVar18 = uVar10 + 0x28;
          }
          thunk_FUN_1803d64e0(ppppplVar16,uVar18);
          puVar20 = auStack_148;
        }
      }
      else {
LAB_180378754:
        *(ulonglong **)(puVar20 + 0x30) = puVar22;
        ppppplVar16 = *param_1;
        *(undefined1 **)(puVar20 + 0x20) = puVar20 + 0x30;
        pppplVar2 = ppppplVar16[0xf];
        *(undefined8 *)(puVar20 + -8) = 0x180378772;
        iVar8 = (*(code *)pppplVar2)(param_1);
        if ((iVar8 < 0) || (plVar12 = *(longlong **)(puVar20 + 0x30), plVar12 == (longlong *)0x0)) {
          sVar13 = 0x1d;
          _Str = "failed to create pixel shader";
        }
        else {
          if (DAT_1811080b8 != (longlong *)0x0) {
            pcVar3 = *(code **)(*DAT_1811080b8 + 0x10);
            *(undefined8 *)(puVar20 + -8) = 0x180378792;
            (*pcVar3)();
            plVar12 = *(longlong **)(puVar20 + 0x30);
          }
          DAT_180cd10ba = local_60;
          _Str = "ready (optimizing in background)";
          if (local_60 != '\0') {
            _Str = "ready";
          }
          *(undefined8 *)(puVar20 + -8) = 0x1803787cb;
          DAT_181107f78 = puVar22;
          DAT_1811080b8 = plVar12;
          sVar13 = strlen(_Str);
        }
        *(undefined8 *)(puVar20 + -8) = 0x1803787ec;
        FUN_180029840(&DAT_1809f77c8,_Str,sVar13);
      }
      *(undefined8 *)(puVar20 + -8) = 0x1803787f6;
      FUN_18000f890(local_80);
      *(undefined8 *)(puVar20 + -8) = 0x1803787ff;
      FUN_180081c30(&local_98);
      *(undefined8 *)(puVar20 + -8) = 0x180378808;
      FUN_18000f890(local_b8);
      goto LAB_180378808;
    }
  }
  puVar20 = auStack_148;
  FUN_1804e4e90(plVar1);
LAB_180378808:
  *(undefined8 *)(puVar20 + -8) = 0x180378814;
  return;
}



/* ===== 180378860 FUN_180378860 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180378860(longlong *param_1,undefined8 *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  int *piVar5;
  undefined8 *_Buf1;
  undefined8 *_Buf2;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  double dVar9;
  undefined1 auStack_1e8 [8];
  undefined1 auStack_1e0 [24];
  longlong **local_1c8;
  longlong *local_1b8;
  undefined2 local_1b0;
  undefined4 local_1ae;
  undefined2 local_1aa;
  longlong local_1a8;
  undefined1 local_1a0;
  undefined1 local_19f;
  undefined4 local_19e;
  undefined2 local_19a;
  int *local_198;
  longlong lStack_190;
  longlong local_188;
  longlong local_178 [9];
  longlong alStack_130 [9];
  longlong local_e8;
  undefined1 local_68 [16];
  longlong local_58;
  undefined1 local_48 [32];
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_1e8;
  puVar8 = auStack_1e8;
  if (DAT_180cd10ba != '\0') goto LAB_180378af8;
  _Buf2 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    _Buf2 = (undefined8 *)*param_2;
  }
  _Buf1 = &DAT_1809f7808;
  if (0xf < DAT_1809f7820) {
    _Buf1 = DAT_1809f7808;
  }
  puVar8 = auStack_1e8;
  if (DAT_1809f7818 != param_2[2]) goto LAB_180378af8;
  if (DAT_1809f7818 != 0) {
    iVar3 = memcmp(_Buf1,_Buf2,DAT_1809f7818);
    puVar8 = auStack_1e8;
    if (iVar3 != 0) goto LAB_180378af8;
  }
  puVar8 = auStack_1e8;
  dVar9 = (double)FUN_180372f40();
  if (dVar9 - _DAT_181107ee8 < DAT_1808ac4a8) goto LAB_180378af8;
  _DAT_181107ee8 = dVar9;
  FUN_180377080(local_68,param_2);
  puVar8 = auStack_1e8;
  if (local_58 != 0) {
    local_198 = (int *)0x0;
    lStack_190 = 0;
    local_188 = 0;
    uVar4 = FUN_1803773d0(local_48,local_68);
    FUN_180276480(local_178,uVar4,0x20);
    if (local_e8 == 0) {
      FUN_18005e2f0(local_178);
      FUN_1800289e0(local_48);
    }
    else {
      local_1a8 = *(longlong *)((longlong)alStack_130 + (longlong)*(int *)(local_178[0] + 4));
      local_1b8 = (longlong *)0x0;
      local_1b0 = 1;
      local_1ae = local_19e;
      local_1aa = local_19a;
      local_1a0 = local_1a8 == 0;
      local_19f = 0;
      FUN_18023b240(&local_198,&local_1a8,&local_1b8);
      if (((ulonglong)(lStack_190 - (longlong)local_198) < 0x21) || (*local_198 != 0x43425844)) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      FUN_18005e2f0(local_178);
      FUN_1800289e0(local_48);
      if (!bVar2) {
        local_1b8 = (longlong *)0x0;
        local_1c8 = &local_1b8;
        iVar3 = (**(code **)(*param_1 + 0x78))(param_1,local_198,lStack_190 - (longlong)local_198,0)
        ;
        if ((-1 < iVar3) && (local_1b8 != (longlong *)0x0)) {
          if (DAT_1811080b8 != (longlong *)0x0) {
            (**(code **)(*DAT_1811080b8 + 0x10))();
          }
          DAT_181107f78 = 0;
          DAT_180cd10ba = '\x01';
          DAT_1811080b8 = local_1b8;
          FUN_180029840(&DAT_1809f77c8,"ready",5);
        }
      }
    }
    puVar6 = auStack_1e8;
    puVar7 = auStack_1e8;
    puVar8 = auStack_1e8;
    if (local_198 != (int *)0x0) {
      piVar5 = local_198;
      if ((ulonglong)(local_188 - (longlong)local_198) < 0x1000) {
LAB_180378ad6:
        puVar7 = puVar6;
      }
      else {
        piVar5 = *(int **)(local_198 + -2);
        if (0x1f < (ulonglong)((longlong)local_198 + (-8 - (longlong)piVar5))) {
          pcVar1 = (code *)swi(0x29);
          piVar5 = (int *)(*pcVar1)(5);
          puVar6 = auStack_1e0;
          goto LAB_180378ad6;
        }
      }
      *(undefined8 *)(puVar7 + -8) = 0x180378ade;
      thunk_FUN_1803d64e0(piVar5);
      *(undefined8 *)(puVar7 + 0x50) = 0;
      *(undefined8 *)(puVar7 + 0x58) = 0;
      *(undefined8 *)(puVar7 + 0x60) = 0;
      puVar8 = puVar7;
    }
  }
  *(undefined8 *)(puVar8 + -8) = 0x180378af8;
  FUN_18000f890(local_68);
LAB_180378af8:
  *(undefined8 *)(puVar8 + -8) = 0x180378b07;
  return;
}



/* ===== 180378b20 FUN_180378b20 ===== */

longlong FUN_180378b20(undefined8 *param_1)

{
  ulonglong *puVar1;
  byte *pbVar2;
  byte *pbVar3;
  ulonglong uVar4;
  longlong lVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  ulonglong uVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *local_res8;
  byte *local_res10;
  byte *local_res18;
  byte *local_res20;
  byte *local_2b8;
  byte *local_2b0;
  byte *local_2a8;
  byte *local_2a0;
  byte *local_298;
  byte *local_290;
  byte *local_288;
  byte *local_280;
  byte *local_278;
  byte *local_270;
  byte *local_268;
  byte *local_260;
  byte *local_258;
  byte *local_250;
  byte *local_248;
  byte *local_240;
  byte *local_238;
  byte *local_230;
  byte *local_228;
  byte *local_220;
  byte *local_218;
  byte *local_210;
  byte *local_208;
  byte *local_200;
  byte *local_1f8;
  byte *local_1f0;
  byte *local_1e8;
  byte *local_1e0;
  byte *local_1d8;
  byte *local_1d0;
  byte *local_1c8;
  byte *local_1c0;
  byte *local_1b8;
  byte *local_1b0;
  byte *local_1a8;
  byte *local_1a0;
  byte *local_198;
  byte *local_190;
  byte *local_188;
  byte *local_180;
  byte *local_178;
  byte *local_170;
  byte *local_168;
  byte *local_160;
  byte *local_158;
  byte *local_150;
  byte *local_148;
  byte *local_140;
  byte *local_138;
  byte *local_130;
  byte *local_128;
  byte *local_120;
  byte *local_118;
  byte *local_110;
  byte *local_108;
  byte *local_100;
  byte *local_f8;
  byte *local_f0;
  byte *local_e8;
  byte *local_e0;
  byte *local_d8;
  byte *local_d0;
  byte *local_c8;
  byte *local_c0;
  byte *local_b8;
  byte *local_b0;
  byte *local_a8;
  byte *local_a0;
  byte *local_98;
  byte *local_90;
  byte *local_88;
  byte *local_80;
  byte *local_78;
  byte *local_70;
  byte *local_68;
  byte *local_60;
  
  if (DAT_1809ebfb8 == 0xfffffffe) {
    local_res10 = &DAT_18093cf32;
    local_res8 = &DAT_18093cf31;
    local_res18 = &DAT_18093cf33;
    pbVar11 = &DAT_18093cf28;
    local_res20 = &DAT_18093cf34;
    pbVar12 = &DAT_18093cf29;
    local_2b8 = &DAT_18093cf35;
    pbVar6 = &DAT_18093cf2a;
    local_2b0 = &DAT_18093cf36;
    pbVar9 = &DAT_18093cf2b;
    local_2a8 = &DAT_18093cf37;
    pbVar8 = &DAT_18093cf2c;
    local_2a0 = &DAT_18093cf38;
    pbVar7 = &DAT_18093cf2d;
    local_298 = &DAT_18093cf39;
    pbVar14 = &DAT_18093cf2e;
    local_290 = &DAT_18093cf3a;
    pbVar15 = &DAT_18093cf2f;
    local_288 = &DAT_18093cf3b;
    pbVar13 = &DAT_18093cf30;
    local_280 = &DAT_18093cf3c;
    local_278 = &DAT_18093cf3d;
    local_270 = &DAT_18093cf3e;
    local_268 = &DAT_18093cf3f;
    local_260 = &DAT_18093cf40;
    local_258 = &DAT_18093cf41;
    local_250 = &DAT_18093cf42;
    local_248 = &DAT_18093cf43;
    local_240 = &DAT_18093cf44;
    local_238 = &DAT_18093cf45;
    local_230 = &DAT_18093cf46;
    local_228 = &DAT_18093cf47;
    local_220 = &DAT_18093cf48;
    local_218 = &DAT_18093cf49;
    local_210 = &DAT_18093cf4a;
    local_208 = &DAT_18093cf4b;
    local_200 = &DAT_18093cf4c;
    local_1f8 = &DAT_18093cf4d;
    local_1f0 = &DAT_18093cf4e;
    local_1e8 = &DAT_18093cf4f;
    local_1e0 = &DAT_18093cf50;
    local_1d8 = &DAT_18093cf51;
    local_1d0 = &DAT_18093cf52;
    local_1c8 = &DAT_18093cf53;
    local_1c0 = &DAT_18093cf54;
    local_1b8 = &DAT_18093cf55;
    local_1b0 = &DAT_18093cf56;
    local_1a8 = &DAT_18093cf57;
    local_1a0 = &DAT_18093cf58;
    local_198 = &DAT_18093cf59;
    local_190 = &DAT_18093cf5a;
    local_188 = &DAT_18093cf5b;
    local_180 = &DAT_18093cf5c;
    local_178 = &DAT_18093cf5d;
    local_170 = &DAT_18093cf5e;
    local_168 = &DAT_18093cf5f;
    local_160 = &DAT_18093cf60;
    local_158 = &DAT_18093cf61;
    local_150 = &DAT_18093cf62;
    local_148 = &DAT_18093cf63;
    local_140 = &DAT_18093cf64;
    local_138 = &DAT_18093cf65;
    local_130 = &DAT_18093cf66;
    local_128 = &DAT_18093cf67;
    local_120 = &DAT_18093cf68;
    local_118 = &DAT_18093cf69;
    local_110 = &DAT_18093cf6a;
    local_108 = &DAT_18093cf6b;
    local_100 = &DAT_18093cf7c;
    local_f8 = &DAT_18093cf80;
    local_f0 = &DAT_18093cf81;
    local_e8 = &DAT_18093cf82;
    local_e0 = &DAT_18093cf83;
    local_d8 = &DAT_18093cf84;
    local_d0 = &DAT_18093cf85;
    local_c8 = &DAT_18093cf86;
    local_c0 = &DAT_18093cf87;
    local_b8 = &DAT_18093cf88;
    local_b0 = &DAT_18093cf89;
    local_a8 = &DAT_18093cf8a;
    local_a0 = &DAT_18093cf8b;
    local_98 = &DAT_18093cf8c;
    local_90 = &DAT_18093cf8d;
    local_88 = &DAT_18093cf8e;
    local_80 = &DAT_18093cf8f;
    local_78 = &DAT_18093cf75;
    local_70 = &DAT_18093cf78;
    local_68 = &DAT_18093cf79;
    local_60 = &DAT_18093cf7a;
    pbVar3 = &DAT_18093cf7b;
  }
  else if (DAT_1809ebfb8 < 0x30) {
    lVar5 = (longlong)(int)DAT_1809ebfb8 * 0x614;
    local_res10 = &DAT_18093d546 + lVar5;
    pbVar11 = &DAT_18093d53c + lVar5;
    local_res18 = &DAT_18093d547 + lVar5;
    pbVar12 = &DAT_18093d53d + lVar5;
    local_res20 = &DAT_18093d548 + lVar5;
    pbVar6 = &DAT_18093d53e + lVar5;
    local_2b8 = &DAT_18093d549 + lVar5;
    pbVar9 = &DAT_18093d53f + lVar5;
    local_2b0 = &DAT_18093d54a + lVar5;
    local_res8 = &DAT_18093d545 + lVar5;
    local_2a8 = &DAT_18093d54b + lVar5;
    pbVar8 = &DAT_18093d540 + lVar5;
    pbVar7 = &DAT_18093d541 + lVar5;
    local_2a0 = &DAT_18093d54c + lVar5;
    pbVar14 = &DAT_18093d542 + lVar5;
    pbVar15 = &DAT_18093d543 + lVar5;
    pbVar13 = &DAT_18093d544 + lVar5;
    local_298 = &DAT_18093d54d + lVar5;
    local_290 = &DAT_18093d54e + lVar5;
    local_288 = &DAT_18093d54f + lVar5;
    local_280 = &DAT_18093d550 + lVar5;
    local_278 = &DAT_18093d551 + lVar5;
    local_270 = &DAT_18093d552 + lVar5;
    local_268 = &DAT_18093d553 + lVar5;
    local_260 = &DAT_18093d554 + lVar5;
    local_258 = &DAT_18093d555 + lVar5;
    local_250 = &DAT_18093d556 + lVar5;
    local_248 = &DAT_18093d557 + lVar5;
    local_240 = &DAT_18093d558 + lVar5;
    local_238 = &DAT_18093d559 + lVar5;
    local_230 = &DAT_18093d55a + lVar5;
    local_228 = &DAT_18093d55b + lVar5;
    local_220 = &DAT_18093d55c + lVar5;
    local_218 = &DAT_18093d55d + lVar5;
    local_210 = &DAT_18093d55e + lVar5;
    local_208 = &DAT_18093d55f + lVar5;
    local_200 = &DAT_18093d560 + lVar5;
    local_1f8 = &DAT_18093d561 + lVar5;
    local_1f0 = &DAT_18093d562 + lVar5;
    local_1e8 = &DAT_18093d563 + lVar5;
    local_1e0 = &DAT_18093d564 + lVar5;
    local_1d8 = &DAT_18093d565 + lVar5;
    local_1d0 = &DAT_18093d566 + lVar5;
    local_1c8 = &DAT_18093d567 + lVar5;
    local_1c0 = &DAT_18093d568 + lVar5;
    local_1b8 = &DAT_18093d569 + lVar5;
    local_1b0 = &DAT_18093d56a + lVar5;
    local_1a8 = &DAT_18093d56b + lVar5;
    local_1a0 = &DAT_18093d56c + lVar5;
    local_198 = &DAT_18093d56d + lVar5;
    local_190 = &DAT_18093d56e + lVar5;
    local_188 = &DAT_18093d56f + lVar5;
    local_180 = &DAT_18093d570 + lVar5;
    local_178 = &DAT_18093d571 + lVar5;
    local_170 = &DAT_18093d572 + lVar5;
    local_168 = &DAT_18093d573 + lVar5;
    local_160 = &DAT_18093d574 + lVar5;
    local_158 = &DAT_18093d575 + lVar5;
    local_150 = &DAT_18093d576 + lVar5;
    local_148 = &DAT_18093d577 + lVar5;
    local_140 = &DAT_18093d578 + lVar5;
    local_138 = &DAT_18093d579 + lVar5;
    local_130 = &DAT_18093d57a + lVar5;
    local_128 = &DAT_18093d57b + lVar5;
    local_120 = &DAT_18093d57c + lVar5;
    local_118 = &DAT_18093d57d + lVar5;
    local_110 = &DAT_18093d57e + lVar5;
    local_108 = &DAT_18093d57f + lVar5;
    local_100 = &DAT_18093d590 + lVar5;
    local_f8 = &DAT_18093d594 + lVar5;
    local_f0 = &DAT_18093d595 + lVar5;
    local_e8 = &DAT_18093d596 + lVar5;
    local_e0 = &DAT_18093d597 + lVar5;
    local_d8 = &DAT_18093d598 + lVar5;
    local_d0 = &DAT_18093d599 + lVar5;
    local_c8 = &DAT_18093d59a + lVar5;
    local_c0 = &DAT_18093d59b + lVar5;
    local_b8 = &DAT_18093d59c + lVar5;
    local_b0 = &DAT_18093d59d + lVar5;
    local_a8 = &DAT_18093d59e + lVar5;
    local_a0 = &DAT_18093d59f + lVar5;
    local_98 = &DAT_18093d5a0 + lVar5;
    local_90 = &DAT_18093d5a1 + lVar5;
    local_88 = &DAT_18093d5a2 + lVar5;
    local_80 = &DAT_18093d5a3 + lVar5;
    local_78 = &DAT_18093d589 + lVar5;
    local_70 = &DAT_18093d58c + lVar5;
    local_68 = &DAT_18093d58d + lVar5;
    local_60 = &DAT_18093d58e + lVar5;
    pbVar3 = &DAT_18093d58f + lVar5;
  }
  else {
    local_res10 = &DAT_18093c95e;
    local_res8 = &DAT_18093c95d;
    local_res18 = &DAT_18093c95f;
    pbVar11 = &DAT_18093c954;
    local_res20 = &DAT_18093c960;
    pbVar12 = &DAT_18093c955;
    local_2b8 = &DAT_18093c961;
    pbVar6 = &DAT_18093c956;
    local_2b0 = &DAT_18093c962;
    pbVar9 = &DAT_18093c957;
    local_2a8 = &DAT_18093c963;
    pbVar8 = &DAT_18093c958;
    local_2a0 = &DAT_18093c964;
    pbVar7 = &DAT_18093c959;
    local_298 = &DAT_18093c965;
    pbVar14 = &DAT_18093c95a;
    local_290 = &DAT_18093c966;
    pbVar15 = &DAT_18093c95b;
    local_288 = &DAT_18093c967;
    pbVar13 = &DAT_18093c95c;
    local_280 = &DAT_18093c968;
    local_278 = &DAT_18093c969;
    local_270 = &DAT_18093c96a;
    local_268 = &DAT_18093c96b;
    local_260 = &DAT_18093c96c;
    local_258 = &DAT_18093c96d;
    local_250 = &DAT_18093c96e;
    local_248 = &DAT_18093c96f;
    local_240 = &DAT_18093c970;
    local_238 = &DAT_18093c971;
    local_230 = &DAT_18093c972;
    local_228 = &DAT_18093c973;
    local_220 = &DAT_18093c974;
    local_218 = &DAT_18093c975;
    local_210 = &DAT_18093c976;
    local_208 = &DAT_18093c977;
    local_200 = &DAT_18093c978;
    local_1f8 = &DAT_18093c979;
    local_1f0 = &DAT_18093c97a;
    local_1e8 = &DAT_18093c97b;
    local_1e0 = &DAT_18093c97c;
    local_1d8 = &DAT_18093c97d;
    local_1d0 = &DAT_18093c97e;
    local_1c8 = &DAT_18093c97f;
    local_1c0 = &DAT_18093c980;
    local_1b8 = &DAT_18093c981;
    local_1b0 = &DAT_18093c982;
    local_1a8 = &DAT_18093c983;
    local_1a0 = &DAT_18093c984;
    local_198 = &DAT_18093c985;
    local_190 = &DAT_18093c986;
    local_188 = &DAT_18093c987;
    local_180 = &DAT_18093c988;
    local_178 = &DAT_18093c989;
    local_170 = &DAT_18093c98a;
    local_168 = &DAT_18093c98b;
    local_160 = &DAT_18093c98c;
    local_158 = &DAT_18093c98d;
    local_150 = &DAT_18093c98e;
    local_148 = &DAT_18093c98f;
    local_140 = &DAT_18093c990;
    local_138 = &DAT_18093c991;
    local_130 = &DAT_18093c992;
    local_128 = &DAT_18093c993;
    local_120 = &DAT_18093c994;
    local_118 = &DAT_18093c995;
    local_110 = &DAT_18093c996;
    local_108 = &DAT_18093c997;
    local_100 = &DAT_18093c9a8;
    local_f8 = &DAT_18093c9ac;
    local_f0 = &DAT_18093c9ad;
    local_e8 = &DAT_18093c9ae;
    local_e0 = &DAT_18093c9af;
    local_d8 = &DAT_18093c9b0;
    local_d0 = &DAT_18093c9b1;
    local_c8 = &DAT_18093c9b2;
    local_c0 = &DAT_18093c9b3;
    local_b8 = &DAT_18093c9b4;
    local_b0 = &DAT_18093c9b5;
    local_a8 = &DAT_18093c9b6;
    local_a0 = &DAT_18093c9b7;
    local_98 = &DAT_18093c9b8;
    local_90 = &DAT_18093c9b9;
    local_88 = &DAT_18093c9ba;
    local_80 = &DAT_18093c9bb;
    local_78 = &DAT_18093c9a1;
    local_70 = &DAT_18093c9a4;
    local_68 = &DAT_18093c9a5;
    local_60 = &DAT_18093c9a6;
    pbVar3 = &DAT_18093c9a7;
  }
  uVar10 = 0xcbf29ce484222325;
  puVar1 = param_1 + 2;
  if (0xf < (ulonglong)param_1[3]) {
    param_1 = (undefined8 *)*param_1;
  }
  uVar4 = 0;
  if (*puVar1 != 0) {
    do {
      pbVar2 = (byte *)(uVar4 + (longlong)param_1);
      uVar4 = uVar4 + 1;
      uVar10 = (uVar10 ^ *pbVar2) * 0x100000001b3;
    } while (uVar4 < *puVar1);
  }
  return ((ulonglong)*pbVar3 ^
         ((((ulonglong)*local_70 ^
           ((ulonglong)*local_78 ^
           (((((((((((((((((ulonglong)*local_f8 ^
                          ((ulonglong)*local_100 ^
                          (((((ulonglong)*local_120 ^
                             (((((((((((((((((ulonglong)*local_1a0 ^
                                            (((((((((((((((((ulonglong)*local_220 ^
                                                           ((((((((((((((((((((((((((((((((*pbVar11 
                                                  ^ uVar10) * 0x100000001b3 ^ (ulonglong)*pbVar12) *
                                                  0x100000001b3 ^ (ulonglong)*pbVar6) *
                                                  0x100000001b3 ^ (ulonglong)*pbVar9) *
                                                  0x100000001b3 ^ (ulonglong)*pbVar8) *
                                                  0x100000001b3 ^ (ulonglong)*pbVar7) *
                                                  0x100000001b3 ^ (ulonglong)*pbVar14) *
                                                  0x100000001b3 ^ (ulonglong)*pbVar15) *
                                                  0x100000001b3 ^ (ulonglong)*pbVar13) *
                                                  0x100000001b3 ^ (ulonglong)*local_res8) *
                                                  0x100000001b3 ^ (ulonglong)*local_res10) *
                                                  0x100000001b3 ^ (ulonglong)*local_res18) *
                                                  0x100000001b3 ^ (ulonglong)*local_res20) *
                                                  0x100000001b3 ^ (ulonglong)*local_2b8) *
                                                  0x100000001b3 ^ (ulonglong)*local_2b0) *
                                                  0x100000001b3 ^ (ulonglong)*local_2a8) *
                                                  0x100000001b3 ^ (ulonglong)*local_2a0) *
                                                  0x100000001b3 ^ (ulonglong)*local_298) *
                                                  0x100000001b3 ^ (ulonglong)*local_290) *
                                                  0x100000001b3 ^ (ulonglong)*local_288) *
                                                  0x100000001b3 ^ (ulonglong)*local_280) *
                                                  0x100000001b3 ^ (ulonglong)*local_278) *
                                                  0x100000001b3 ^ (ulonglong)*local_270) *
                                                  0x100000001b3 ^ (ulonglong)*local_268) *
                                                  0x100000001b3 ^ (ulonglong)*local_260) *
                                                  0x100000001b3 ^ (ulonglong)*local_258) *
                                                  0x100000001b3 ^ (ulonglong)*local_250) *
                                                  0x100000001b3 ^ (ulonglong)*local_248) *
                                                  0x100000001b3 ^ (ulonglong)*local_240) *
                                                  0x100000001b3 ^ (ulonglong)*local_238) *
                                                  0x100000001b3 ^ (ulonglong)*local_230) *
                                                  0x100000001b3 ^ (ulonglong)*local_228) *
                                                  0x100000001b3) * 0x100000001b3 ^
                                                  (ulonglong)*local_218) * 0x100000001b3 ^
                                                  (ulonglong)*local_210) * 0x100000001b3 ^
                                                  (ulonglong)*local_208) * 0x100000001b3 ^
                                                  (ulonglong)*local_200) * 0x100000001b3 ^
                                                  (ulonglong)*local_1f8) * 0x100000001b3 ^
                                                  (ulonglong)*local_1f0) * 0x100000001b3 ^
                                                  (ulonglong)*local_1e8) * 0x100000001b3 ^
                                                  (ulonglong)*local_1e0) * 0x100000001b3 ^
                                                  (ulonglong)*local_1d8) * 0x100000001b3 ^
                                                 (ulonglong)*local_1d0) * 0x100000001b3 ^
                                                (ulonglong)*local_1c8) * 0x100000001b3 ^
                                               (ulonglong)*local_1c0) * 0x100000001b3 ^
                                              (ulonglong)*local_1b8) * 0x100000001b3 ^
                                             (ulonglong)*local_1b0) * 0x100000001b3 ^
                                            (ulonglong)*local_1a8) * 0x100000001b3) * 0x100000001b3
                                           ^ (ulonglong)*local_198) * 0x100000001b3 ^
                                          (ulonglong)*local_190) * 0x100000001b3 ^
                                         (ulonglong)*local_188) * 0x100000001b3 ^
                                        (ulonglong)*local_180) * 0x100000001b3 ^
                                       (ulonglong)*local_178) * 0x100000001b3 ^
                                      (ulonglong)*local_170) * 0x100000001b3 ^ (ulonglong)*local_168
                                     ) * 0x100000001b3 ^ (ulonglong)*local_160) * 0x100000001b3 ^
                                   (ulonglong)*local_158) * 0x100000001b3 ^ (ulonglong)*local_150) *
                                  0x100000001b3 ^ (ulonglong)*local_148) * 0x100000001b3 ^
                                (ulonglong)*local_140) * 0x100000001b3 ^ (ulonglong)*local_138) *
                               0x100000001b3 ^ (ulonglong)*local_130) * 0x100000001b3 ^
                             (ulonglong)*local_128) * 0x100000001b3) * 0x100000001b3 ^
                            (ulonglong)*local_118) * 0x100000001b3 ^ (ulonglong)*local_110) *
                           0x100000001b3 ^ (ulonglong)*local_108) * 0x100000001b3) * 0x100000001b3)
                          * 0x100000001b3 ^ (ulonglong)*local_f0) * 0x100000001b3 ^
                        (ulonglong)*local_e8) * 0x100000001b3 ^ (ulonglong)*local_e0) *
                       0x100000001b3 ^ (ulonglong)*local_d8) * 0x100000001b3 ^ (ulonglong)*local_d0)
                     * 0x100000001b3 ^ (ulonglong)*local_c8) * 0x100000001b3 ^ (ulonglong)*local_c0)
                   * 0x100000001b3 ^ (ulonglong)*local_b8) * 0x100000001b3 ^ (ulonglong)*local_b0) *
                 0x100000001b3 ^ (ulonglong)*local_a8) * 0x100000001b3 ^ (ulonglong)*local_a0) *
               0x100000001b3 ^ (ulonglong)*local_98) * 0x100000001b3 ^ (ulonglong)*local_90) *
             0x100000001b3 ^ (ulonglong)*local_88) * 0x100000001b3 ^ (ulonglong)*local_80) *
           0x100000001b3) * 0x100000001b3) * 0x100000001b3 ^ (ulonglong)*local_68) * 0x100000001b3 ^
         (ulonglong)*local_60) * 0x100000001b3) * 0x100000001b3;
}



/* ===== 18037a120 FUN_18037a120 ===== */

void FUN_18037a120(longlong *param_1,int param_2,int param_3)

{
  float *pfVar1;
  int iVar2;
  longlong lVar3;
  char *pcVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float *local_res8;
  undefined1 *local_res20;
  undefined1 *local_198;
  char *local_190;
  float *local_188;
  float *local_180;
  float *local_178;
  float *local_170;
  float *local_168;
  float *local_160;
  float *local_158;
  float *local_150;
  float *local_148;
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
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
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
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  
  if (DAT_1809ebfb8 == 0xfffffffe) {
    local_190 = &DAT_18093cf75;
    local_res8 = (float *)&DAT_18093cf68;
    local_188 = (float *)&DAT_18093cf28;
    local_198 = &DAT_18093cf58;
    local_180 = (float *)&DAT_18093cf2c;
    local_res20 = &DAT_18093cf48;
    local_178 = (float *)&DAT_18093cf30;
    pcVar4 = &DAT_18093cf7c;
    local_170 = (float *)&DAT_18093cf34;
    pfVar8 = (float *)&DAT_18093cf80;
    local_168 = (float *)&DAT_18093cf38;
    pfVar5 = (float *)&DAT_18093cfd4;
    local_160 = (float *)&DAT_18093cf3c;
    pfVar9 = (float *)&DAT_18093cf84;
    local_158 = (float *)&DAT_18093cf40;
    pfVar6 = (float *)&DAT_18093cf88;
    local_150 = (float *)&DAT_18093cf44;
    pfVar7 = (float *)&DAT_18093cf78;
  }
  else if (DAT_1809ebfb8 < 0x30) {
    lVar3 = (longlong)(int)DAT_1809ebfb8 * 0x614;
    local_190 = &DAT_18093d589 + lVar3;
    local_res8 = (float *)(&DAT_18093d57c + lVar3);
    local_188 = (float *)(&DAT_18093d53c + lVar3);
    local_198 = &DAT_18093d56c + lVar3;
    local_180 = (float *)(&DAT_18093d540 + lVar3);
    local_res20 = &DAT_18093d55c + lVar3;
    local_178 = (float *)(&DAT_18093d544 + lVar3);
    pcVar4 = &DAT_18093d590 + lVar3;
    local_170 = (float *)(&DAT_18093d548 + lVar3);
    pfVar8 = (float *)(&DAT_18093d594 + lVar3);
    local_168 = (float *)(&DAT_18093d54c + lVar3);
    pfVar5 = (float *)(&DAT_18093d5e8 + lVar3);
    local_160 = (float *)(&DAT_18093d550 + lVar3);
    pfVar9 = (float *)(&DAT_18093d598 + lVar3);
    pfVar6 = (float *)(&DAT_18093d59c + lVar3);
    pfVar7 = (float *)(&DAT_18093d58c + lVar3);
    local_158 = (float *)(&DAT_18093d554 + lVar3);
    local_150 = (float *)(&DAT_18093d558 + lVar3);
  }
  else {
    local_res8 = (float *)&DAT_18093c994;
    pcVar4 = &DAT_18093c9a8;
    local_198 = &DAT_18093c984;
    pfVar8 = (float *)&DAT_18093c9ac;
    local_res20 = &DAT_18093c974;
    pfVar5 = (float *)&DAT_18093ca00;
    local_190 = &DAT_18093c9a1;
    pfVar9 = (float *)&DAT_18093c9b0;
    local_188 = (float *)&DAT_18093c954;
    pfVar6 = (float *)&DAT_18093c9b4;
    local_180 = (float *)&DAT_18093c958;
    pfVar7 = (float *)&DAT_18093c9a4;
    local_178 = (float *)&DAT_18093c95c;
    local_170 = (float *)&DAT_18093c960;
    local_168 = (float *)&DAT_18093c964;
    local_160 = (float *)&DAT_18093c968;
    local_158 = (float *)&DAT_18093c96c;
    local_150 = (float *)&DAT_18093c970;
  }
  local_148 = (float *)0x0;
  uStack_140 = 0;
  iVar2 = (**(code **)(*param_1 + 0x70))(param_1,DAT_181107ed0,0,4,0,&local_148);
  pfVar1 = local_148;
  if (-1 < iVar2) {
    FUN_180540170(&local_138,0,0xe0);
    *(undefined8 *)pfVar1 = local_138;
    *(undefined8 *)(pfVar1 + 2) = uStack_130;
    *(undefined8 *)(pfVar1 + 4) = local_128;
    *(undefined8 *)(pfVar1 + 6) = uStack_120;
    *(undefined8 *)(pfVar1 + 8) = local_118;
    *(undefined8 *)(pfVar1 + 10) = uStack_110;
    *(undefined8 *)(pfVar1 + 0xc) = local_108;
    *(undefined8 *)(pfVar1 + 0xe) = uStack_100;
    *(undefined8 *)(pfVar1 + 0x10) = local_f8;
    *(undefined8 *)(pfVar1 + 0x12) = uStack_f0;
    *(undefined8 *)(pfVar1 + 0x14) = local_e8;
    *(undefined8 *)(pfVar1 + 0x16) = uStack_e0;
    *(undefined8 *)(pfVar1 + 0x18) = local_d8;
    *(undefined8 *)(pfVar1 + 0x1a) = uStack_d0;
    *(undefined8 *)(pfVar1 + 0x1c) = local_c8;
    *(undefined8 *)(pfVar1 + 0x1e) = uStack_c0;
    *(undefined8 *)(pfVar1 + 0x20) = local_b8;
    *(undefined8 *)(pfVar1 + 0x22) = uStack_b0;
    *(undefined8 *)(pfVar1 + 0x24) = local_a8;
    *(undefined8 *)(pfVar1 + 0x26) = uStack_a0;
    *(undefined8 *)(pfVar1 + 0x28) = local_98;
    *(undefined8 *)(pfVar1 + 0x2a) = uStack_90;
    *(undefined8 *)(pfVar1 + 0x2c) = local_88;
    *(undefined8 *)(pfVar1 + 0x2e) = uStack_80;
    *(undefined8 *)(pfVar1 + 0x30) = local_78;
    *(undefined8 *)(pfVar1 + 0x32) = uStack_70;
    pfVar1[0x34] = local_68;
    pfVar1[0x35] = fStack_64;
    pfVar1[0x36] = fStack_60;
    pfVar1[0x37] = fStack_5c;
    fVar12 = (float)param_3;
    *pfVar1 = (float)param_2;
    pfVar1[2] = DAT_181107f84;
    pfVar1[1] = fVar12;
    pfVar1[3] = *local_res8;
    FUN_180540530(pfVar1 + 4,local_res20,0x10);
    FUN_180540530(pfVar1 + 8,local_198,0x10);
    fVar10 = DAT_1808ac34c;
    if (*pcVar4 == '\0') {
      fVar11 = DAT_1808ac34c;
    }
    else {
      fVar11 = *pfVar8;
    }
    pfVar1[0x10] = fVar11 * *pfVar5;
    if (*pcVar4 == '\0') {
      fVar11 = fVar10;
    }
    else {
      fVar11 = *pfVar9;
    }
    pfVar1[0x11] = fVar11 * *pfVar5;
    if (*pcVar4 != '\0') {
      fVar10 = *pfVar6;
    }
    pfVar1[0x12] = fVar10 * *pfVar5;
    if (*local_190 == '\0') {
      fVar10 = 0.0;
    }
    else {
      fVar10 = *pfVar7;
    }
    pfVar1[0x14] = fVar10;
    pfVar1[0x18] = *local_188;
    pfVar1[0x1c] = *local_180;
    pfVar1[0x20] = *local_178;
    pfVar1[0x24] = *local_170;
    pfVar1[0x28] = *local_168;
    pfVar1[0x2c] = *local_160;
    pfVar1[0x30] = *local_158;
    pfVar1[0x34] = *local_150;
    (**(code **)(*param_1 + 0x78))(param_1,DAT_181107ed0,0);
    FUN_18036e3d0(&DAT_1811080d0,param_1,(&DAT_181107ef8)[param_2],fVar12,fVar12,DAT_181107ed8,
                  DAT_1811080b8,DAT_181107ed0);
    (**(code **)(*param_1 + 0x68))(param_1,3,0);
  }
  return;
}



/* ===== 18037a6f0 FUN_18037a6f0 ===== */

undefined8 * FUN_18037a6f0(longlong param_1)

{
  size_t _Size;
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  size_t sVar4;
  undefined8 *puVar5;
  
  puVar1 = DAT_181108108;
  puVar5 = DAT_181108110;
  if (DAT_180cd107f == '\0') {
    FUN_1803739c0();
    FUN_180374710();
    DAT_180cd107f = '\x01';
    puVar1 = DAT_181108108;
    puVar5 = DAT_181108110;
  }
  while( true ) {
    puVar2 = DAT_181108110;
    if (puVar1 == DAT_181108110) {
      DAT_181108110 = puVar5;
      return (undefined8 *)0x0;
    }
    DAT_181108110 = puVar5;
    sVar4 = strlen((char *)(param_1 + 0xa4));
    _Size = puVar1[2];
    if ((ulonglong)puVar1[3] < 0x10) {
      puVar5 = puVar1;
    }
    else {
      puVar5 = (undefined8 *)*puVar1;
    }
    if ((_Size == sVar4) &&
       ((_Size == 0 || (iVar3 = memcmp(puVar5,(void *)(param_1 + 0xa4),_Size), iVar3 == 0)))) break;
    puVar1 = puVar1 + 0xc;
    puVar5 = DAT_181108110;
    DAT_181108110 = puVar2;
  }
  return puVar1;
}



/* ===== 18037a7a0 FUN_18037a7a0 ===== */

void FUN_18037a7a0(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  
  if ((ulonglong)param_2[3] < 0x10) {
    puVar3 = param_2;
  }
  else {
    puVar3 = (undefined8 *)*param_2;
  }
  snprintf(param_1 + 0xa4,0x40,&DAT_1806d3198,puVar3);
  *(undefined8 *)(param_1 + 0xe4) = 0;
  *(undefined8 *)(param_1 + 0xec) = 0;
  uVar2 = 0;
  *(undefined8 *)(param_1 + 0xf4) = 0;
  *(undefined8 *)(param_1 + 0xfc) = 0;
  lVar1 = param_2[9];
  if ((param_2[10] - lVar1 >> 4) * -0x3333333333333333 != 0) {
    do {
      if (7 < uVar2) {
        return;
      }
      *(undefined4 *)(param_1 + 0xe4 + uVar2 * 4) = *(undefined4 *)(lVar1 + 0x48 + uVar2 * 0x50);
      uVar2 = uVar2 + 1;
    } while (uVar2 < (ulonglong)((param_2[10] - lVar1 >> 4) * -0x3333333333333333));
  }
  return;
}



/* ===== 18037a850 FUN_18037a850 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int * FUN_18037a850(void)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  size_t sVar7;
  int *piVar8;
  longlong lVar9;
  ulonglong uVar10;
  char *pcVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined1 auStack_98 [32];
  char *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  ulonglong local_60;
  char *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStack_98;
  DAT_181108100 = DAT_181108100 + 1;
  if (DAT_1809ebfb8 == 0xfffffffe) {
    piVar6 = &DAT_18093ce44;
    pcVar11 = &DAT_18093ce48;
  }
  else if (DAT_1809ebfb8 < 0x30) {
    piVar6 = (int *)(&DAT_18093d458 + (longlong)(int)DAT_1809ebfb8 * 0x614);
    pcVar11 = &DAT_18093d45c + (longlong)(int)DAT_1809ebfb8 * 0x614;
  }
  else {
    piVar6 = &DAT_18093c870;
    pcVar11 = &DAT_18093c874;
  }
  piVar8 = (int *)0x0;
  if (*piVar6 == 1) {
    if (*pcVar11 != '\0') {
      local_78 = (char *)0x0;
      uStack_70 = 0;
      local_68 = 0;
      local_60 = 0;
      sVar7 = strlen(pcVar11);
      FUN_1800133a0(&local_78,pcVar11,sVar7);
      piVar8 = (int *)FUN_180376150(&local_78);
      piVar6 = piVar8;
      if (0xf < local_60) {
        uVar10 = local_60 + 1;
        pcVar11 = local_78;
        if (0xfff < uVar10) {
          pcVar11 = *(char **)(local_78 + -8);
          if ((char *)0x1f < local_78 + (-8 - (longlong)pcVar11)) {
LAB_18037aaef:
            pcVar1 = (code *)swi(0x29);
            (*pcVar1)(5);
            pcVar1 = (code *)swi(3);
            piVar6 = (int *)(*pcVar1)();
            return piVar6;
          }
          uVar10 = local_60 + 0x28;
        }
        piVar6 = (int *)thunk_FUN_1803d64e0(pcVar11,uVar10);
      }
    }
  }
  else if ((*piVar6 == 2) && (piVar6 = (int *)(ulonglong)DAT_180cd10b8, DAT_180cd10b8 != 0)) {
    local_78 = (char *)0x0;
    uStack_70 = 0;
    local_68 = 0;
    local_60 = 0;
    local_78 = (char *)FUN_18000fb70(0x30);
    uVar3 = s_materials_skybox_jungle_cube_pfm_18088c980._8_8_;
    local_68 = 0x2e;
    local_60 = 0x2f;
    *(undefined8 *)local_78 = s_materials_skybox_jungle_cube_pfm_18088c980._0_8_;
    *(undefined8 *)(local_78 + 8) = uVar3;
    uVar5 = s_materials_skybox_jungle_cube_pfm_18088c980._24_4_;
    uVar4 = s_materials_skybox_jungle_cube_pfm_18088c980._20_4_;
    uVar2 = CONCAT22(s_materials_skybox_jungle_cube_pfm_18088c980._30_2_,
                     s_materials_skybox_jungle_cube_pfm_18088c980._28_2_);
    *(undefined4 *)(local_78 + 0x10) = s_materials_skybox_jungle_cube_pfm_18088c980._16_4_;
    *(undefined4 *)(local_78 + 0x14) = uVar4;
    *(undefined4 *)(local_78 + 0x18) = uVar5;
    *(undefined4 *)(local_78 + 0x1c) = uVar2;
    uVar5 = s_materials_skybox_jungle_cube_pfm_18088c980._42_4_;
    uVar4 = s_materials_skybox_jungle_cube_pfm_18088c980._38_4_;
    uVar2 = s_materials_skybox_jungle_cube_pfm_18088c980._34_4_;
    *(uint *)(local_78 + 0x1e) =
         CONCAT22(s_materials_skybox_jungle_cube_pfm_18088c980._32_2_,
                  s_materials_skybox_jungle_cube_pfm_18088c980._30_2_);
    *(undefined4 *)(local_78 + 0x22) = uVar2;
    *(undefined4 *)(local_78 + 0x26) = uVar4;
    *(undefined4 *)(local_78 + 0x2a) = uVar5;
    local_78[0x2e] = '\0';
    piVar8 = (int *)FUN_180376150(&local_78);
    if (0xf < local_60) {
      uVar10 = local_60 + 1;
      pcVar11 = local_78;
      if (0xfff < uVar10) {
        pcVar11 = *(char **)(local_78 + -8);
        if ((char *)0x1f < local_78 + (-8 - (longlong)pcVar11)) goto LAB_18037aaef;
        uVar10 = local_60 + 0x28;
      }
      thunk_FUN_1803d64e0(pcVar11,uVar10);
    }
    local_50 = 0;
    pcVar11 = (char *)FUN_18000fb70(0x30);
    uVar3 = s_materials_skybox_jungle_cube_pfm_18088c980._8_8_;
    local_48 = 0x2e;
    local_40 = 0x2f;
    *(undefined8 *)pcVar11 = s_materials_skybox_jungle_cube_pfm_18088c980._0_8_;
    *(undefined8 *)(pcVar11 + 8) = uVar3;
    uVar5 = s_materials_skybox_jungle_cube_pfm_18088c980._24_4_;
    uVar4 = s_materials_skybox_jungle_cube_pfm_18088c980._20_4_;
    uVar2 = CONCAT22(s_materials_skybox_jungle_cube_pfm_18088c980._30_2_,
                     s_materials_skybox_jungle_cube_pfm_18088c980._28_2_);
    *(undefined4 *)(pcVar11 + 0x10) = s_materials_skybox_jungle_cube_pfm_18088c980._16_4_;
    *(undefined4 *)(pcVar11 + 0x14) = uVar4;
    *(undefined4 *)(pcVar11 + 0x18) = uVar5;
    *(undefined4 *)(pcVar11 + 0x1c) = uVar2;
    uVar5 = s_materials_skybox_jungle_cube_pfm_18088c980._42_4_;
    uVar4 = s_materials_skybox_jungle_cube_pfm_18088c980._38_4_;
    uVar2 = s_materials_skybox_jungle_cube_pfm_18088c980._34_4_;
    *(uint *)(pcVar11 + 0x1e) =
         CONCAT22(s_materials_skybox_jungle_cube_pfm_18088c980._32_2_,
                  s_materials_skybox_jungle_cube_pfm_18088c980._30_2_);
    *(undefined4 *)(pcVar11 + 0x22) = uVar2;
    *(undefined4 *)(pcVar11 + 0x26) = uVar4;
    *(undefined4 *)(pcVar11 + 0x2a) = uVar5;
    pcVar11[0x2e] = '\0';
    uVar13 = 0xcbf29ce484222325;
    uVar10 = 0;
    do {
      uVar13 = (uVar13 ^ (byte)pcVar11[uVar10]) * 0x100000001b3;
      uVar10 = uVar10 + 1;
    } while (uVar10 < 0x2e);
    local_58 = pcVar11;
    lVar9 = FUN_18037eeb0(uVar10,&local_78,&local_58,uVar13);
    lVar12 = *(longlong *)(lVar9 + 8);
    if (*(longlong *)(lVar9 + 8) == 0) {
      lVar12 = DAT_181108128;
    }
    piVar6 = (int *)thunk_FUN_1803d64e0(pcVar11,0x30);
    if (lVar12 != DAT_181108128) {
      LOCK();
      UNLOCK();
      piVar6 = DAT_1811080b0;
      DAT_1811080b0 = *(int **)(lVar12 + 0x38);
    }
  }
  LOCK();
  DAT_1811080f0 = piVar8;
  UNLOCK();
  return piVar6;
}



/* ===== 18037ab00 FUN_18037ab00 ===== */

void FUN_18037ab00(longlong param_1,int param_2,longlong *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  bool bVar5;
  char cVar6;
  undefined1 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  float *pfVar11;
  char *pcVar12;
  float *pfVar13;
  longlong lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 local_f8;
  float local_f0;
  int *local_e8;
  float *local_e0;
  float *local_d8;
  float *local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined1 uStack_ac;
  undefined2 uStack_ab;
  undefined1 uStack_a9;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  uint uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined1 uStack_80;
  uint7 uStack_7f;
  
  uStack_a8 = 0;
  uStack_8c = 0;
  uStack_88 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  *param_3 = 0;
  param_3[1] = 0;
  local_b8 = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  uStack_a0 = 0;
  param_3[4] = 0;
  param_3[5] = 0;
  local_98 = 0;
  uStack_90 = uStack_90 & 0xffffff00;
  uStack_84 = 0;
  uStack_80 = 0;
  *(undefined4 *)(param_3 + 6) = 0;
  *(undefined4 *)((longlong)param_3 + 0x34) = 0;
  *(uint *)(param_3 + 7) = uStack_90;
  *(undefined4 *)((longlong)param_3 + 0x3c) = 0;
  param_3[8] = 0;
  param_3[9] = (ulonglong)uStack_7f << 8;
  if ((param_1 != 0) && (param_2 - 1U < 0x1000)) {
    uStack_ac = 0;
    uStack_ab = 0;
    uStack_a9 = 0;
    uStack_b4 = 0;
    uStack_b0 = 0;
    *(undefined8 *)((longlong)param_3 + 0x39) = 0;
    *(undefined4 *)((longlong)param_3 + 0x41) = 0;
    *(undefined2 *)((longlong)param_3 + 0x45) = 0;
    *(undefined1 *)((longlong)param_3 + 0x47) = 0;
    *(undefined4 *)((longlong)param_3 + 0x49) = 0;
    *(undefined2 *)((longlong)param_3 + 0x4d) = 0;
    *(undefined1 *)((longlong)param_3 + 0x4f) = 0;
    param_3[5] = 0;
    param_3[6] = 0;
    *(undefined1 *)(param_3 + 7) = 0;
    *(undefined1 *)(param_3 + 9) = 0;
    lVar8 = DAT_1811080f0;
    fVar17 = DAT_1808ac34c;
    lVar14 = (longlong)DAT_180ca3d60 * 0x90;
    if ((&DAT_1809628ac)[lVar14] == '\0') {
      if (DAT_1809ebfb8 == 0xfffffffe) {
        local_e8 = &DAT_18093ce44;
        pfVar13 = (float *)&DAT_18093cfd4;
        local_e0 = (float *)&DAT_18093cf80;
        pcVar12 = &DAT_18093cf7c;
        local_d8 = (float *)&DAT_18093cf84;
        local_d0 = (float *)&DAT_18093cf88;
      }
      else if (DAT_1809ebfb8 < 0x30) {
        lVar14 = (longlong)(int)DAT_1809ebfb8 * 0x614;
        local_e8 = (int *)(&DAT_18093d458 + lVar14);
        pfVar13 = (float *)(&DAT_18093d5e8 + lVar14);
        local_e0 = (float *)(&DAT_18093d594 + lVar14);
        pcVar12 = &DAT_18093d590 + lVar14;
        local_d8 = (float *)(&DAT_18093d598 + lVar14);
        local_d0 = (float *)(&DAT_18093d59c + lVar14);
      }
      else {
        local_e8 = &DAT_18093c870;
        pfVar13 = (float *)&DAT_18093ca00;
        local_e0 = (float *)&DAT_18093c9ac;
        pcVar12 = &DAT_18093c9a8;
        local_d8 = (float *)&DAT_18093c9b0;
        local_d0 = (float *)&DAT_18093c9b4;
      }
      bVar5 = *pfVar13 != DAT_1808ac34c;
      local_f8 = DAT_1811080f0;
      if ((((DAT_1811080f0 != 0) || (*pcVar12 != '\0')) || (bVar5)) &&
         (lVar14 = FUN_18000f3a0((longlong)param_2 * 0x70 + param_1 + -0x58), lVar14 != 0)) {
        if (((lVar8 != 0) && (lVar8 = FUN_18000f3a0(lVar14 + 0xd0), lVar8 != 0)) &&
           ((lVar9 = FUN_18000f3a0(lVar8), lVar9 != 0 &&
            (cVar6 = FUN_1800239d0(lVar8,&local_f8), cVar6 != '\0')))) {
          *param_3 = lVar8;
          param_3[1] = lVar9;
        }
        if (((*pcVar12 != '\0') || (bVar5)) && (*local_e8 != 2)) {
          pfVar11 = (float *)FUN_180023a00(&local_f8,lVar14 + 0xe8);
          local_f0 = *pfVar13;
          fVar1 = *pfVar11;
          fVar2 = pfVar11[1];
          fVar3 = pfVar11[2];
          fVar15 = fVar1;
          fVar16 = fVar2;
          if (*pcVar12 != '\0') {
            fVar15 = fVar1 * *local_e0;
            fVar16 = fVar2 * *local_d8;
            fVar17 = *local_d0;
          }
          local_f8 = CONCAT44(fVar16 * local_f0,fVar15 * local_f0);
          local_f0 = fVar3 * fVar17 * local_f0;
          cVar6 = FUN_180023a50(lVar14 + 0xe8,&local_f8);
          if (cVar6 != '\0') {
            *(float *)(param_3 + 3) = fVar1;
            *(float *)((longlong)param_3 + 0x1c) = fVar2;
            *(float *)(param_3 + 4) = fVar3;
            param_3[2] = lVar14;
          }
        }
      }
    }
    else {
      lVar8 = FUN_18000f3a0(param_1 + 0x18);
      if (lVar8 != 0) {
        param_3[5] = lVar8;
        if ((*(longlong *)(&DAT_1809628e0 + lVar14) != 0) && (lVar9 = FUN_18000f3a0(), lVar9 != 0))
        {
          lVar9 = FUN_18000f3a0(lVar8 + 0xd0);
          param_3[6] = lVar9;
          cVar6 = FUN_1800239d0(lVar8 + 0xd0,&DAT_1809628e0 + lVar14);
          if (cVar6 != '\0') {
            *(undefined1 *)(param_3 + 7) = 1;
          }
        }
        puVar10 = (undefined8 *)FUN_180023a00(&local_f8,lVar8 + 0xe8);
        uVar4 = *puVar10;
        local_f0 = *(float *)(puVar10 + 1);
        *(float *)((longlong)param_3 + 0x44) = local_f0;
        *(undefined8 *)((longlong)param_3 + 0x3c) = uVar4;
        local_f0 = local_f0 * *(float *)(&DAT_1809628b8 + lVar14);
        local_f8 = CONCAT44((float)((ulonglong)*(undefined8 *)(&DAT_1809628b0 + lVar14) >> 0x20) *
                            (float)((ulonglong)uVar4 >> 0x20),
                            (float)*(undefined8 *)(&DAT_1809628b0 + lVar14) * (float)uVar4);
        uVar7 = FUN_180023a50(lVar8 + 0xe8,&local_f8);
        *(undefined1 *)(param_3 + 9) = uVar7;
      }
    }
  }
  return;
}



/* ===== 18037af90 FUN_18037af90 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_18037af90(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  int *piVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  lVar1 = DAT_1811080c8;
  if (param_1 != 0) {
    if (DAT_1809ebfb8 == 0xfffffffe) {
      piVar3 = &DAT_18093ce44;
    }
    else if (DAT_1809ebfb8 < 0x30) {
      piVar3 = (int *)(&DAT_18093d458 + (longlong)(int)DAT_1809ebfb8 * 0x614);
    }
    else {
      piVar3 = &DAT_18093c870;
    }
    if ((((*piVar3 == 2) && ((&DAT_1809628ac)[(longlong)DAT_180ca3d60 * 0x90] == '\0')) &&
        (DAT_1811080c8 != 0)) && (DAT_180cd10b8 != '\0')) {
      if ((DAT_1811080b0 != 0) && (param_1 == DAT_1811080b0)) {
LAB_18037b04b:
        LOCK();
        _DAT_181107f80 = _DAT_181107f80 + 1;
        UNLOCK();
        return DAT_1811080c8;
      }
      if (DAT_1811080f8 == 0) {
        lVar4 = FUN_18000f3a0(param_1 + 8);
        uVar5 = 0;
        if (lVar4 != 0) {
          uVar5 = FUN_18000f3a0(lVar4);
        }
        cVar2 = FUN_180376940(uVar5);
        if (cVar2 != '\0') {
          LOCK();
          DAT_1811080f8 = param_1;
          UNLOCK();
          LOCK();
          _DAT_181107f80 = _DAT_181107f80 + 1;
          UNLOCK();
          return lVar1;
        }
      }
      else if (param_1 == DAT_1811080f8) goto LAB_18037b04b;
    }
  }
  return param_2;
}



/* ===== 18037b0c0 FUN_18037b0c0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18037b0c0(ulonglong param_1)

{
  float fVar1;
  ulonglong uVar2;
  longlong *plVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong lVar9;
  ulonglong uVar10;
  char *pcVar11;
  float *pfVar12;
  float *pfVar13;
  int *piVar14;
  float fVar15;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar16;
  float fVar17;
  ulonglong local_res8 [4];
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  float local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  ulonglong local_58;
  
  local_58 = DAT_180919500 ^ (ulonglong)auStack_b8;
  if (0x7ffffffefffe < param_1 - 0x10000) {
    return;
  }
  if (DAT_1809ebfb8 == 0xfffffffe) {
    pcVar11 = &DAT_18093cfb8;
    piVar14 = (int *)&DAT_18093cfd0;
    pfVar13 = (float *)&DAT_18093cfbc;
    pfVar12 = (float *)&DAT_18093cfcc;
  }
  else if (DAT_1809ebfb8 < 0x30) {
    lVar9 = (longlong)(int)DAT_1809ebfb8 * 0x614;
    pcVar11 = &DAT_18093d5cc + lVar9;
    piVar14 = (int *)(&DAT_18093d5e4 + lVar9);
    pfVar13 = (float *)(&DAT_18093d5d0 + lVar9);
    pfVar12 = (float *)(&DAT_18093d5e0 + lVar9);
  }
  else {
    pcVar11 = &DAT_18093c9e4;
    piVar14 = &DAT_18093c9fc;
    pfVar13 = (float *)&DAT_18093c9e8;
    pfVar12 = (float *)&DAT_18093c9f8;
  }
  local_98 = &DAT_1809f7720;
  local_res8[0] = param_1;
  iVar6 = FUN_1804e4d70(&DAT_1809f7720);
  if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809f776c == 0x7fffffff) {
    DAT_1809f776c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  if (((*pcVar11 == '\0') || ((&DAT_1809628fd)[(longlong)DAT_180ca3d60 * 0x90] != '\0')) ||
     (cVar5 = FUN_1802b08d0(local_res8[0]), cVar5 == '\0')) {
    if (DAT_181108080 != 0) {
      uVar10 = ((((((((local_res8[0] & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                     local_res8[0] >> 8 & 0xff) * 0x100000001b3 ^ local_res8[0] >> 0x10 & 0xff) *
                    0x100000001b3 ^ local_res8[0] >> 0x18 & 0xff) * 0x100000001b3 ^
                  local_res8[0] >> 0x20 & 0xff) * 0x100000001b3 ^ local_res8[0] >> 0x28 & 0xff) *
                 0x100000001b3 ^ local_res8[0] >> 0x30 & 0xff) * 0x100000001b3 ^
               local_res8[0] >> 0x38) * 0x100000001b3 & DAT_1811080a0;
      plVar8 = *(longlong **)(DAT_181108088 + 8 + uVar10 * 0x10);
      if (plVar8 == DAT_181108078) {
LAB_18037b461:
        plVar8 = (longlong *)0x0;
      }
      else {
        uVar2 = plVar8[2];
        while (local_res8[0] != uVar2) {
          if (plVar8 == *(longlong **)(DAT_181108088 + uVar10 * 0x10)) goto LAB_18037b461;
          plVar8 = (longlong *)plVar8[1];
          uVar2 = plVar8[2];
        }
      }
      if ((plVar8 != (longlong *)0x0) && (plVar8 != DAT_181108078)) {
        FUN_180023a50(local_res8[0] + 0xe4,plVar8 + 3);
        lVar9 = DAT_181108088;
        plVar4 = DAT_181108078;
        uVar10 = (((((((((ulonglong)*(byte *)(plVar8 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                       (ulonglong)*(byte *)((longlong)plVar8 + 0x11)) * 0x100000001b3 ^
                      (ulonglong)*(byte *)((longlong)plVar8 + 0x12)) * 0x100000001b3 ^
                     (ulonglong)*(byte *)((longlong)plVar8 + 0x13)) * 0x100000001b3 ^
                    (ulonglong)*(byte *)((longlong)plVar8 + 0x14)) * 0x100000001b3 ^
                   (ulonglong)*(byte *)((longlong)plVar8 + 0x15)) * 0x100000001b3 ^
                  (ulonglong)*(byte *)((longlong)plVar8 + 0x16)) * 0x100000001b3 ^
                 (ulonglong)*(byte *)((longlong)plVar8 + 0x17)) * 0x100000001b3 & DAT_1811080a0;
        plVar3 = *(longlong **)(DAT_181108088 + uVar10 * 0x10);
        if (*(longlong **)(DAT_181108088 + 8 + uVar10 * 0x10) == plVar8) {
          if (plVar3 == plVar8) {
            *(longlong **)(DAT_181108088 + uVar10 * 0x10) = DAT_181108078;
            *(longlong **)(lVar9 + 8 + uVar10 * 0x10) = plVar4;
          }
          else {
            *(longlong *)(DAT_181108088 + 8 + uVar10 * 0x10) = plVar8[1];
          }
        }
        else if (plVar3 == plVar8) {
          *(longlong *)(DAT_181108088 + uVar10 * 0x10) = *plVar8;
        }
        lVar9 = *plVar8;
        DAT_181108080 = DAT_181108080 - 1;
        *(longlong *)plVar8[1] = lVar9;
        *(longlong *)(lVar9 + 8) = plVar8[1];
        thunk_FUN_1803d64e0(plVar8,0x28);
      }
    }
  }
  else {
    uVar10 = ((((((((local_res8[0] & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                   local_res8[0] >> 8 & 0xff) * 0x100000001b3 ^ local_res8[0] >> 0x10 & 0xff) *
                  0x100000001b3 ^ local_res8[0] >> 0x18 & 0xff) * 0x100000001b3 ^
                local_res8[0] >> 0x20 & 0xff) * 0x100000001b3 ^ local_res8[0] >> 0x28 & 0xff) *
               0x100000001b3 ^ local_res8[0] >> 0x30 & 0xff) * 0x100000001b3 ^ local_res8[0] >> 0x38
             ) * 0x100000001b3 & DAT_1811080a0;
    plVar8 = *(longlong **)(DAT_181108088 + 8 + uVar10 * 0x10);
    if (plVar8 == DAT_181108078) {
LAB_18037b2b1:
      plVar8 = (longlong *)0x0;
    }
    else {
      uVar2 = plVar8[2];
      while (local_res8[0] != uVar2) {
        if (plVar8 == *(longlong **)(DAT_181108088 + uVar10 * 0x10)) goto LAB_18037b2b1;
        plVar8 = (longlong *)plVar8[1];
        uVar2 = plVar8[2];
      }
    }
    uVar16 = extraout_XMM0_Qa;
    if (plVar8 == (longlong *)0x0) {
      if (0x2000 < DAT_181108080) {
        FUN_18037c670(&DAT_181108070);
      }
      puVar7 = (undefined8 *)FUN_180023a00(local_68,local_res8[0] + 0xe4);
      local_88 = *puVar7;
      local_80 = *(undefined4 *)(puVar7 + 1);
      uVar16 = FUN_18037c440(local_88,local_78,local_res8,&local_88);
    }
    plVar8 = (longlong *)FUN_18037da80(uVar16,local_78,local_res8);
    if (*piVar14 == 1) {
      local_90 = *pfVar12;
      fVar15 = local_90 * *pfVar13;
      fVar17 = local_90 * pfVar13[1];
      fVar1 = DAT_1808ac34c;
    }
    else {
      lVar9 = *plVar8;
      local_90 = *pfVar12;
      fVar15 = *pfVar13 * *(float *)(lVar9 + 0x18) * local_90;
      fVar17 = pfVar13[1] * *(float *)(lVar9 + 0x1c) * local_90;
      fVar1 = *(float *)(lVar9 + 0x20);
    }
    local_98 = (undefined *)CONCAT44(fVar17,fVar15);
    local_90 = fVar1 * pfVar13[2] * local_90;
    FUN_180023a50(local_res8[0] + 0xe4,&local_98);
  }
  FUN_1804e4e90(&DAT_1809f7720);
  return;
}



/* ===== 18037b5a0 FUN_18037b5a0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_18037b5a0(longlong param_1,longlong *param_2)

{
  float fVar1;
  double dVar2;
  size_t _Size;
  char cVar3;
  int iVar4;
  uint uVar5;
  float *pfVar6;
  undefined8 *puVar7;
  int *piVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  float *pfVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  int *piVar15;
  longlong *plVar16;
  int *piVar17;
  int iVar18;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  float fVar19;
  undefined1 auStack_308 [32];
  int local_2e8 [2];
  float local_2e0;
  float local_2dc;
  char *local_2d8;
  float *local_2d0;
  int local_2c8 [4];
  longlong local_2b8;
  undefined4 local_2a8 [2];
  undefined8 local_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined4 local_230;
  undefined8 local_228;
  undefined4 local_220;
  undefined4 local_21c;
  undefined1 local_218 [384];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_308;
  if (DAT_1809ebfb8 == 0xfffffffe) {
    local_2d8 = &DAT_18093cf74;
    piVar15 = &DAT_18093ce44;
    pfVar6 = (float *)&DAT_18093cf6c;
    local_2d0 = (float *)&DAT_18093cf6c;
    piVar17 = (int *)&DAT_18093cf70;
  }
  else if (DAT_1809ebfb8 < 0x30) {
    lVar12 = (longlong)(int)DAT_1809ebfb8 * 0x614;
    local_2d8 = &DAT_18093d588 + lVar12;
    piVar15 = (int *)(&DAT_18093d458 + lVar12);
    piVar17 = (int *)(&DAT_18093d584 + lVar12);
    pfVar6 = (float *)(&DAT_18093d580 + lVar12);
    local_2d0 = pfVar6;
  }
  else {
    pfVar6 = (float *)&DAT_18093c9a0;
    local_2d8 = &DAT_18093c9a0;
    local_2d0 = (float *)&DAT_18093c998;
    piVar15 = &DAT_18093c870;
    piVar17 = &DAT_18093c99c;
  }
  if (*piVar15 != 2) {
    return pfVar6;
  }
  if (param_1 == 0) {
    return pfVar6;
  }
  if (param_2 == (longlong *)0x0) {
    return pfVar6;
  }
  local_2b8 = param_1;
  pfVar6 = (float *)FUN_180376de0(param_1);
  if ((char)pfVar6 == '\0') {
    return pfVar6;
  }
  puVar7 = (undefined8 *)FUN_18037a6f0(piVar15);
  if (puVar7 == (undefined8 *)0x0) {
    pfVar6 = (float *)FUN_180029840(&DAT_1809f77c8,"no shader selected",0x12);
    return pfVar6;
  }
  FUN_1803783f0(param_1);
  cVar3 = DAT_180cd10bb;
  _Size = DAT_1809f7818;
  pfVar6 = DAT_181108160;
  if ((DAT_181108160 == (float *)0x0) ||
     ((DAT_181108168 != '\0' && (*(char *)(DAT_181108160 + 0x46) != '\0')))) {
    puVar14 = puVar7;
    if (0xf < (ulonglong)puVar7[3]) {
      puVar14 = (undefined8 *)*puVar7;
    }
    puVar13 = &DAT_1809f7808;
    if (0xf < DAT_1809f7820) {
      puVar13 = DAT_1809f7808;
    }
    if (DAT_1809f7818 != puVar7[2]) {
LAB_18037bb19:
      DAT_180cd10bb = 0;
      FUN_1803780f0(puVar7);
      if ((cVar3 == '\0') && (DAT_181107f50 != (float *)0x0)) {
        if (DAT_181107f58 == '\0') {
          return DAT_181107f50;
        }
        if (*(char *)(DAT_181107f50 + 0x2e) == '\0') {
          return DAT_181107f50;
        }
      }
      pfVar6 = (float *)FUN_180377de0(puVar7);
      return pfVar6;
    }
    if (DAT_1809f7818 != 0) {
      iVar4 = memcmp(puVar13,puVar14,DAT_1809f7818);
      if (iVar4 != 0) goto LAB_18037bb19;
      pfVar6 = (float *)0x0;
    }
    if (cVar3 != '\0') goto LAB_18037bb19;
  }
  if (DAT_1811080b8 == 0) {
    return pfVar6;
  }
  if ((ulonglong)puVar7[3] < 0x10) {
    puVar14 = puVar7;
  }
  else {
    puVar14 = (undefined8 *)*puVar7;
  }
  puVar13 = &DAT_1809f7808;
  if (0xf < DAT_1809f7820) {
    puVar13 = DAT_1809f7808;
  }
  if (_Size != puVar7[2]) {
    return pfVar6;
  }
  if (_Size != 0) {
    uVar5 = memcmp(puVar13,puVar14,_Size);
    if (uVar5 != 0) {
      return (float *)(ulonglong)uVar5;
    }
  }
  FUN_180378860(param_1,puVar7);
  local_2c8[0] = *(int *)(puVar7 + 8);
  local_2e8[1] = 3;
  piVar15 = local_2e8;
  if (-1 < *piVar17) {
    piVar15 = piVar17;
  }
  local_2e8[0] = 0;
  local_2c8[1] = 0x200;
  local_2c8[2] = 0x400;
  piVar8 = local_2e8 + 1;
  if (*piVar17 < 4) {
    piVar8 = piVar15;
  }
  local_2c8[3] = 0x800;
  iVar4 = local_2c8[*piVar8];
  iVar18 = iVar4 * 2;
  if (*local_2d8 == '\0') {
    iVar18 = iVar4;
  }
  if (DAT_181107f30 != iVar18) {
    plVar16 = &DAT_181107ef8;
    do {
      if ((longlong *)*plVar16 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar16 + 0x10))();
        *plVar16 = 0;
      }
      plVar16 = plVar16 + 1;
    } while ((longlong **)plVar16 != &DAT_181107f28);
    if (DAT_181107f28 != (longlong *)0x0) {
      (**(code **)(*DAT_181107f28 + 0x10))();
      DAT_181107f28 = (longlong *)0x0;
    }
    if (DAT_181107ef0 != (longlong *)0x0) {
      (**(code **)(*DAT_181107ef0 + 0x10))();
      DAT_181107ef0 = (longlong *)0x0;
    }
    _DAT_181107f30 = 0;
    cVar3 = FUN_1803769e0(param_1,&DAT_181107ef0,iVar18,1);
    if (cVar3 == '\0') goto LAB_18037b92c;
    DAT_181107f78 = 0;
  }
  if (iVar4 < 0x800) {
    uVar9 = (ulonglong)(0x3ff < iVar4);
  }
  else {
    uVar9 = 2;
  }
  if (((*(int *)(&DAT_181107fd0 + uVar9 * 0x48) != 0) &&
      (*(int *)(&DAT_181107fd0 + uVar9 * 0x48) != iVar4)) ||
     ((*(longlong *)(&DAT_181107f90 + uVar9 * 0x48) == 0 &&
      (cVar3 = FUN_1803769e0(local_2b8,&DAT_181107f90 + uVar9 * 0x48,iVar4,0), cVar3 == '\0')))) {
LAB_18037b92c:
    pfVar6 = (float *)FUN_180029840(&DAT_1809f77c8,"failed to create sky cube",0x19);
    return pfVar6;
  }
  uVar10 = FUN_180378b20(puVar7);
  uVar10 = uVar10 ^ (longlong)iVar18;
  FUN_180372f40();
  fVar19 = 0.0;
  if (*(char *)((longlong)puVar7 + 0x44) == '\0') {
LAB_18037b9e3:
    pfVar6 = (float *)0x0;
  }
  else {
    fVar1 = *local_2d0;
    if (0.0 < fVar1) {
      local_2dc = 240.0;
      local_2e0 = 1.0;
      pfVar6 = &local_2e0;
      if (DAT_1808ac34c <= fVar1) {
        pfVar6 = local_2d0;
      }
      pfVar11 = &local_2dc;
      if (fVar1 <= DAT_1808acb84) {
        pfVar11 = pfVar6;
      }
      if ((double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da) - _DAT_1809f7710 <
          DAT_1808ac500 / (double)*pfVar11) goto LAB_18037b9e3;
    }
    pfVar6 = (float *)0x1;
  }
  if ((uVar10 == DAT_181107f78) && ((char)pfVar6 == '\0')) {
    return pfVar6;
  }
  _DAT_1809f7710 = (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
  DAT_181107f78 = uVar10;
  if (*(char *)((longlong)puVar7 + 0x44) != '\0') {
    dVar2 = (double)FUN_18051f830(extraout_XMM0_Da);
    fVar19 = (float)dVar2;
  }
  iVar4 = 0;
  local_2a8[0] = 0;
  local_2a0 = 0;
  local_298 = 0;
  uStack_290 = 0;
  local_288 = 0;
  uStack_280 = 0;
  local_278 = 0;
  uStack_270 = 0;
  local_268 = 0;
  uStack_260 = 0;
  local_258 = 0;
  uStack_250 = 0;
  local_248 = 0;
  local_240 = 0;
  uStack_238 = 0;
  local_230 = 0;
  local_228 = 0;
  local_220 = 0;
  local_21c = 0x10;
  DAT_181107f84 = fVar19;
  FUN_180540170(local_218,0,0x180);
  local_58 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_18036dda0(local_2a8,param_2);
  do {
    FUN_18037a120(param_2,iVar4,iVar18);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 6);
  FUN_18036df30(local_2a8,param_2);
  (**(code **)(*param_2 + 0x1b0))(param_2,DAT_181107f28);
  FUN_180376b50(param_2,&DAT_181107ef0,&DAT_181107f90 + uVar9 * 0x48);
  LOCK();
  UNLOCK();
  LOCK();
  UNLOCK();
  pfVar6 = DAT_1811080c8;
  DAT_180cd10b8 = 1;
  DAT_1811080c8 = (float *)*(undefined8 *)(uVar9 * 0x48 + 0x181107fc8);
  return pfVar6;
}



/* ===== 18037bb90 FUN_18037bb90 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_18037bb90(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined1 auStack_98 [32];
  undefined1 local_78 [32];
  undefined1 local_58 [24];
  undefined1 local_40 [40];
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_98;
  LOCK();
  DAT_180cd107e = 1;
  UNLOCK();
  if ((DAT_181108160 != 0) &&
     ((DAT_181108168 == '\0' || (*(char *)(DAT_181108160 + 0x118) == '\0')))) {
    FUN_18037c720(DAT_181108160,local_78);
    FUN_18000f890(local_40);
    FUN_180081c30(local_58);
    FUN_18000f890(local_78);
  }
  if ((DAT_181107f50 != 0) && ((DAT_181107f58 == '\0' || (*(char *)(DAT_181107f50 + 0xb8) == '\0')))
     ) {
    FUN_180372e30();
  }
  plVar3 = &DAT_181107ef8;
  do {
    if ((longlong *)*plVar3 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar3 + 0x10))();
      *plVar3 = 0;
    }
    plVar3 = plVar3 + 1;
  } while ((longlong **)plVar3 != &DAT_181107f28);
  if (DAT_181107f28 != (longlong *)0x0) {
    (**(code **)(*DAT_181107f28 + 0x10))();
    DAT_181107f28 = (longlong *)0x0;
  }
  if (DAT_181107ef0 != (longlong *)0x0) {
    (**(code **)(*DAT_181107ef0 + 0x10))();
    DAT_181107ef0 = (longlong *)0x0;
  }
  _DAT_181107f30 = 0;
  if (DAT_1811080b8 != (longlong *)0x0) {
    (**(code **)(*DAT_1811080b8 + 0x10))();
    DAT_1811080b8 = (longlong *)0x0;
  }
  if (DAT_181107ed8 != (longlong *)0x0) {
    (**(code **)(*DAT_181107ed8 + 0x10))();
    DAT_181107ed8 = (longlong *)0x0;
  }
  if (DAT_181107ed0 != (longlong *)0x0) {
    (**(code **)(*DAT_181107ed0 + 0x10))();
    DAT_181107ed0 = (longlong *)0x0;
  }
  if (DAT_1811080e8 != (longlong *)0x0) {
    (**(code **)(*DAT_1811080e8 + 0x10))();
    DAT_1811080e8 = (longlong *)0x0;
  }
  if (DAT_1811080e0 != (longlong *)0x0) {
    (**(code **)(*DAT_1811080e0 + 0x10))();
    DAT_1811080e0 = (longlong *)0x0;
  }
  if (DAT_1811080d8 != (longlong *)0x0) {
    (**(code **)(*DAT_1811080d8 + 0x10))();
    DAT_1811080d8 = (longlong *)0x0;
  }
  if (DAT_1811080d0 != (longlong *)0x0) {
    (**(code **)(*DAT_1811080d0 + 0x10))();
    DAT_1811080d0 = (longlong *)0x0;
  }
  DAT_1809f7818 = 0;
  puVar2 = &DAT_1809f7808;
  if (0xf < DAT_1809f7820) {
    puVar2 = DAT_1809f7808;
  }
  DAT_1811080c0 = 0;
  DAT_180cd10b9 = 0;
  *(undefined1 *)puVar2 = 0;
  uVar1 = DAT_1811080f0;
  LOCK();
  DAT_1811080f0 = 0;
  UNLOCK();
  return uVar1;
}



/* ===== 18037bda0 FUN_18037bda0 ===== */

undefined4 FUN_18037bda0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  LOCK();
  uVar1 = *param_1;
  *param_1 = param_2;
  UNLOCK();
  return uVar1;
}



/* ===== 18037bdb0 FUN_18037bdb0 ===== */

undefined8 * FUN_18037bdb0(undefined8 param_1,undefined8 *param_2,byte *param_3,undefined1 *param_4)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  float fVar10;
  
  uVar7 = (((((((((ulonglong)*param_3 ^ 0xcbf29ce484222325) * 0x100000001b3 ^ (ulonglong)param_3[1])
                * 0x100000001b3 ^ (ulonglong)param_3[2]) * 0x100000001b3 ^ (ulonglong)param_3[3]) *
              0x100000001b3 ^ (ulonglong)param_3[4]) * 0x100000001b3 ^ (ulonglong)param_3[5]) *
            0x100000001b3 ^ (ulonglong)param_3[6]) * 0x100000001b3 ^ (ulonglong)param_3[7]) *
          0x100000001b3;
  puVar6 = (undefined8 *)(DAT_1811081a0 & uVar7);
  puVar3 = *(undefined8 **)(DAT_181108188 + 8 + (longlong)puVar6 * 0x10);
  puVar8 = DAT_181108178;
  if (puVar3 != DAT_181108178) {
    puVar6 = *(undefined8 **)(DAT_181108188 + (longlong)puVar6 * 0x10);
    lVar4 = puVar3[2];
    puVar8 = puVar3;
    while( true ) {
      if (*(longlong *)param_3 == lVar4) {
        *param_2 = puVar8;
        *(undefined1 *)(param_2 + 1) = 0;
        return param_2;
      }
      if (puVar8 == puVar6) break;
      puVar8 = (undefined8 *)puVar8[1];
      lVar4 = puVar8[2];
    }
  }
  if (DAT_181108180 == 0x7ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4cd0("unordered_map/set too long");
  }
  puVar3 = (undefined8 *)FUN_1804ecaa0(0x20,puVar6,DAT_181108188,param_4,&DAT_181108178,0);
  puVar3[2] = *(undefined8 *)param_3;
  *(undefined1 *)(puVar3 + 3) = *param_4;
  uVar2 = DAT_1811081a8;
  if (DAT_181108170 < (float)(DAT_181108180 + 1) / (float)DAT_1811081a8) {
    fVar10 = (float)FUN_18053ef70((float)(DAT_181108180 + 1) / DAT_181108170);
    lVar4 = 0;
    if ((DAT_1808acd00 <= fVar10) && (fVar10 = fVar10 - DAT_1808acd00, fVar10 < DAT_1808acd00)) {
      lVar4 = -0x8000000000000000;
    }
    uVar5 = 8;
    if (8 < (ulonglong)((longlong)fVar10 + lVar4)) {
      uVar5 = (longlong)fVar10 + lVar4;
    }
    uVar9 = uVar2;
    if ((uVar2 < uVar5) && ((0x1ff < uVar2 || (uVar9 = uVar2 * 8, uVar2 * 8 < uVar5)))) {
      uVar9 = uVar5;
    }
    FUN_18037fd30(uVar5,uVar9);
    puVar6 = *(undefined8 **)(DAT_181108188 + 8 + (DAT_1811081a0 & uVar7) * 0x10);
    puVar8 = DAT_181108178;
    if (puVar6 != DAT_181108178) {
      lVar4 = puVar6[2];
      puVar8 = puVar6;
      while (puVar3[2] != lVar4) {
        if (puVar8 == *(undefined8 **)(DAT_181108188 + (DAT_1811081a0 & uVar7) * 0x10))
        goto LAB_18037c019;
        puVar8 = (undefined8 *)puVar8[1];
        lVar4 = puVar8[2];
      }
      puVar8 = (undefined8 *)*puVar8;
    }
  }
LAB_18037c019:
  puVar6 = (undefined8 *)puVar8[1];
  DAT_181108180 = DAT_181108180 + 1;
  *puVar3 = puVar8;
  puVar3[1] = puVar6;
  *puVar6 = puVar3;
  puVar8[1] = puVar3;
  lVar4 = DAT_181108188;
  uVar7 = DAT_1811081a0 & uVar7;
  puVar1 = *(undefined8 **)(DAT_181108188 + uVar7 * 0x10);
  if (puVar1 == DAT_181108178) {
    *(undefined8 **)(DAT_181108188 + uVar7 * 0x10) = puVar3;
  }
  else {
    if (puVar1 == puVar8) {
      *(undefined8 **)(DAT_181108188 + uVar7 * 0x10) = puVar3;
      goto LAB_18037c078;
    }
    if (*(undefined8 **)(DAT_181108188 + 8 + uVar7 * 0x10) != puVar6) goto LAB_18037c078;
  }
  *(undefined8 **)(lVar4 + 8 + uVar7 * 0x10) = puVar3;
LAB_18037c078:
  *param_2 = puVar3;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



/* ===== 18037c0a0 FUN_18037c0a0 ===== */

undefined8 *
FUN_18037c0a0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 local_c8 [8];
  longlong *local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  code *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 local_78 [16];
  undefined1 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined2 local_40;
  
  local_a8 = param_4[2];
  param_4[2] = 0;
  local_b0 = param_4[1];
  param_4[1] = 0;
  local_b8 = *param_4;
  *param_4 = 0;
  local_a0 = FUN_180377c50;
  puVar6 = (undefined8 *)FUN_1804ecaa0(0x120);
  FUN_180381100(puVar6,&local_b8);
  *puVar6 = std::_Task_async_state<void>::vftable;
  puVar4 = puVar6 + 0x22;
  *puVar4 = 0;
  puVar6[0x23] = 0;
  puVar7 = (undefined8 *)FUN_1803718a0();
  if (puVar7[1] != 0) {
    LOCK();
    piVar1 = (int *)(puVar7[1] + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  local_98 = *puVar7;
  local_90 = puVar7[1];
  local_80 = 0;
  local_88 = local_98;
  FUN_1804ec310(local_78);
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  local_60 = 0;
  local_68 = 0;
  local_40 = 0;
  puVar7 = (undefined8 *)FUN_180381220(local_c8,puVar6,&local_98);
  if (puVar4 != puVar7) {
    FUN_18025bd90(puVar4,puVar7);
  }
  if (local_c0 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_c0 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_c0)(local_c0);
      LOCK();
      piVar1 = (int *)((longlong)local_c0 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_c0 + 8))(local_c0);
      }
    }
  }
  *(undefined1 *)((longlong)puVar6 + 0xc2) = 1;
  FUN_1800288b0(&local_b8);
  *param_1 = puVar6;
  *(undefined1 *)(param_1 + 1) = 1;
  LOCK();
  *(int *)(puVar6 + 1) = *(int *)(puVar6 + 1) + 1;
  UNLOCK();
  LOCK();
  piVar1 = (int *)(puVar6 + 1);
  iVar3 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar3 == 1) {
    puVar4 = (undefined8 *)puVar6[0x19];
    if (puVar4 == (undefined8 *)0x0) {
      (**(code **)*puVar6)(puVar6,1);
    }
    else {
      (**(code **)*puVar4)(puVar4,puVar6);
    }
  }
  return param_1;
}



/* ===== 18037c240 FUN_18037c240 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
FUN_18037c240(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5,undefined1 *param_6)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 auStack_138 [32];
  undefined8 *local_118;
  undefined1 local_100 [8];
  longlong *local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 local_d0 [16];
  undefined1 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined2 local_98;
  undefined8 *local_90;
  undefined1 local_88 [8];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 local_60 [32];
  code *local_40;
  ulonglong local_20;
  
  local_20 = DAT_180919500 ^ (ulonglong)auStack_138;
  local_118 = (undefined8 *)local_88;
  local_88[0] = *param_6;
  local_80 = *param_5;
  uStack_78 = param_5[1];
  local_70 = param_5[2];
  local_68 = param_5[3];
  param_5[2] = 0;
  param_5[3] = 0xf;
  *(undefined1 *)param_5 = 0;
  FUN_180024b50(local_60,param_4);
  local_40 = FUN_180377750;
  puVar6 = (undefined8 *)FUN_1804ecaa0(0x180);
  local_118 = puVar6;
  FUN_1803812b0(puVar6,local_88);
  *puVar6 = std::_Task_async_state<skybox::_anon_13F7984E::compile_result>::vftable;
  puVar4 = puVar6 + 0x2e;
  *puVar4 = 0;
  puVar6[0x2f] = 0;
  local_90 = &local_f0;
  puVar7 = (undefined8 *)FUN_1803718a0();
  if (puVar7[1] != 0) {
    LOCK();
    piVar1 = (int *)(puVar7[1] + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  local_f0 = *puVar7;
  local_e8 = puVar7[1];
  local_d8 = 0;
  local_e0 = local_f0;
  FUN_1804ec310(local_d0);
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  local_b8 = 0;
  local_c0 = 0;
  local_98 = 0;
  puVar7 = (undefined8 *)FUN_180381470(local_100,puVar6,&local_f0);
  if (puVar4 != puVar7) {
    FUN_18025bd90(puVar4,puVar7);
  }
  if (local_f8 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_f8 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_f8)(local_f8);
      LOCK();
      piVar1 = (int *)((longlong)local_f8 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_f8 + 8))(local_f8);
      }
    }
  }
  *(undefined1 *)((longlong)puVar6 + 0x122) = 1;
  FUN_18000f890(local_60);
  FUN_18000f890(&local_80);
  *param_1 = puVar6;
  *(undefined1 *)(param_1 + 1) = 1;
  LOCK();
  *(int *)(puVar6 + 1) = *(int *)(puVar6 + 1) + 1;
  UNLOCK();
  LOCK();
  piVar1 = (int *)(puVar6 + 1);
  iVar3 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar3 == 1) {
    puVar4 = (undefined8 *)puVar6[0x25];
    if (puVar4 == (undefined8 *)0x0) {
      (**(code **)*puVar6)(puVar6,1);
    }
    else {
      (**(code **)*puVar4)(puVar4,puVar6);
    }
  }
  return param_1;
}



/* ===== 18037c440 FUN_18037c440 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_18037c440(undefined8 param_1,undefined8 *param_2,byte *param_3,undefined8 *param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  
  uVar7 = (((((((((ulonglong)*param_3 ^ 0xcbf29ce484222325) * 0x100000001b3 ^ (ulonglong)param_3[1])
                * 0x100000001b3 ^ (ulonglong)param_3[2]) * 0x100000001b3 ^ (ulonglong)param_3[3]) *
              0x100000001b3 ^ (ulonglong)param_3[4]) * 0x100000001b3 ^ (ulonglong)param_3[5]) *
            0x100000001b3 ^ (ulonglong)param_3[6]) * 0x100000001b3 ^ (ulonglong)param_3[7]) *
          0x100000001b3;
  puVar5 = (undefined8 *)(DAT_1811080a0 & uVar7);
  puVar4 = *(undefined8 **)(DAT_181108088 + 8 + (longlong)puVar5 * 0x10);
  puVar6 = DAT_181108078;
  if (puVar4 != DAT_181108078) {
    puVar5 = *(undefined8 **)(DAT_181108088 + (longlong)puVar5 * 0x10);
    lVar2 = puVar4[2];
    puVar6 = puVar4;
    while( true ) {
      if (*(longlong *)param_3 == lVar2) {
        *param_2 = puVar6;
        *(undefined1 *)(param_2 + 1) = 0;
        return param_2;
      }
      if (puVar6 == puVar5) break;
      puVar6 = (undefined8 *)puVar6[1];
      lVar2 = puVar6[2];
    }
  }
  if (DAT_181108080 == 0x666666666666666) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4cd0("unordered_map/set too long");
  }
  puVar8 = &DAT_181108078;
  lVar2 = FUN_1804ecaa0(0x28,puVar5,DAT_181108088,param_4,&DAT_181108078,0);
  *(undefined8 *)(lVar2 + 0x10) = *(undefined8 *)param_3;
  *(undefined8 *)(lVar2 + 0x18) = *param_4;
  *(undefined4 *)(lVar2 + 0x20) = *(undefined4 *)(param_4 + 1);
  puVar4 = DAT_1811080a8;
  if ((longlong)DAT_1811080a8 < 0) {
    puVar4 = (undefined8 *)(ulonglong)((uint)DAT_1811080a8 & 1);
  }
  lVar9 = lVar2;
  if (_DAT_181108070 < (float)(DAT_181108080 + 1) / (float)DAT_1811080a8) {
    FUN_18037df20();
    puVar4 = *(undefined8 **)(DAT_181108088 + 8 + (DAT_1811080a0 & uVar7) * 0x10);
    puVar6 = DAT_181108078;
    if (puVar4 != DAT_181108078) {
      lVar1 = puVar4[2];
      while (*(longlong *)(lVar2 + 0x10) != lVar1) {
        if (puVar4 == *(undefined8 **)(DAT_181108088 + (DAT_1811080a0 & uVar7) * 0x10)) {
          puVar6 = puVar4;
          goto LAB_18037c634;
        }
        puVar4 = (undefined8 *)puVar4[1];
        lVar1 = puVar4[2];
      }
      puVar6 = (undefined8 *)*puVar4;
    }
  }
LAB_18037c634:
  uVar3 = FUN_18037dfd0(puVar4,uVar7,puVar6,lVar2,puVar8,lVar9);
  *param_2 = uVar3;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



/* ===== 18037c670 FUN_18037c670 ===== */

void FUN_18037c670(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 local_res8;
  
  if (*(ulonglong *)(param_1 + 0x10) != 0) {
    puVar1 = *(undefined8 **)(param_1 + 8);
    if (*(ulonglong *)(param_1 + 0x10) < *(ulonglong *)(param_1 + 0x38) >> 3) {
      FUN_18037e040(param_1,*puVar1,puVar1);
      return;
    }
    *(undefined8 *)puVar1[1] = 0;
    puVar1 = (undefined8 *)*puVar1;
    while (puVar1 != (undefined8 *)0x0) {
      puVar2 = (undefined8 *)*puVar1;
      thunk_FUN_1803d64e0(puVar1,0x28);
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



/* ===== 18037c720 FUN_18037c720 ===== */

undefined8 * FUN_18037c720(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  
  plVar9 = DAT_181108160;
  DAT_181108160 = (longlong *)0x0;
  if ((plVar9 == (longlong *)0x0) || ((char)plVar9[0x23] != '\0')) {
                    /* WARNING: Subroutine does not return */
    FUN_180372cb0(4);
  }
  puVar10 = (undefined8 *)(**(code **)(*plVar9 + 0x10))(plVar9,1);
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  uVar2 = puVar10[1];
  *param_2 = *puVar10;
  param_2[1] = uVar2;
  uVar2 = puVar10[3];
  param_2[2] = puVar10[2];
  param_2[3] = uVar2;
  *(undefined1 *)puVar10 = 0;
  puVar10[2] = 0;
  puVar10[3] = 0xf;
  uVar2 = puVar10[6];
  puVar10[6] = 0;
  uVar3 = puVar10[5];
  puVar10[5] = 0;
  uVar4 = puVar10[4];
  puVar10[4] = 0;
  param_2[4] = uVar4;
  param_2[5] = uVar3;
  param_2[6] = uVar2;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  uVar5 = *(undefined4 *)((longlong)puVar10 + 0x3c);
  uVar6 = *(undefined4 *)(puVar10 + 8);
  uVar7 = *(undefined4 *)((longlong)puVar10 + 0x44);
  *(undefined4 *)(param_2 + 7) = *(undefined4 *)(puVar10 + 7);
  *(undefined4 *)((longlong)param_2 + 0x3c) = uVar5;
  *(undefined4 *)(param_2 + 8) = uVar6;
  *(undefined4 *)((longlong)param_2 + 0x44) = uVar7;
  uVar5 = *(undefined4 *)((longlong)puVar10 + 0x4c);
  uVar6 = *(undefined4 *)(puVar10 + 10);
  uVar7 = *(undefined4 *)((longlong)puVar10 + 0x54);
  *(undefined4 *)(param_2 + 9) = *(undefined4 *)(puVar10 + 9);
  *(undefined4 *)((longlong)param_2 + 0x4c) = uVar5;
  *(undefined4 *)(param_2 + 10) = uVar6;
  *(undefined4 *)((longlong)param_2 + 0x54) = uVar7;
  *(undefined1 *)(puVar10 + 7) = 0;
  puVar10[9] = 0;
  puVar10[10] = 0xf;
  *(undefined1 *)(param_2 + 0xb) = *(undefined1 *)(puVar10 + 0xb);
  LOCK();
  plVar1 = plVar9 + 1;
  lVar8 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)lVar8 == 1) {
    puVar10 = (undefined8 *)plVar9[0x25];
    if (puVar10 != (undefined8 *)0x0) {
      (**(code **)*puVar10)(puVar10,plVar9);
      return param_2;
    }
    (**(code **)*plVar9)(plVar9,1);
  }
  return param_2;
}



/* ===== 18037c860 FUN_18037c860 ===== */

void FUN_18037c860(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)*param_1;
  *(undefined8 *)puVar1[1] = 0;
  puVar1 = (undefined8 *)*puVar1;
  while (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar1;
    FUN_18000f890(puVar1 + 2);
    thunk_FUN_1803d64e0(puVar1,0x48);
    puVar1 = puVar2;
  }
  thunk_FUN_1803d64e0(*param_1,0x48);
  return;
}



/* ===== 18037c8d0 FUN_18037c8d0 ===== */

void FUN_18037c8d0(longlong param_1,undefined8 *param_2,char param_3)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_1 + 0xc1) = 1;
  if (param_3 == '\0') {
    *(undefined4 *)(param_1 + 0xbc) = 1;
    FUN_1804eb6a0(param_1 + 0x70);
    return;
  }
  uVar1 = *param_2;
  *param_2 = 0;
  *(undefined1 *)(param_2 + 1) = 0;
  FUN_1804eb270(param_1 + 0x70,uVar1,(undefined4 *)(param_1 + 0xbc));
  return;
}



/* ===== 18037c910 FUN_18037c910 ===== */

longlong FUN_18037c910(longlong *param_1,char param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *local_28;
  char local_20;
  undefined1 local_18 [16];
  
  local_28 = param_1 + 4;
  local_20 = 0;
  iVar2 = FUN_1804e4d70();
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (*(int *)((longlong)param_1 + 0x6c) == 0x7fffffff) {
    *(undefined4 *)((longlong)param_1 + 0x6c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  local_20 = '\x01';
  if ((param_2 != '\0') && ((char)param_1[0x17] != '\0')) {
                    /* WARNING: Subroutine does not return */
    FUN_180372cb0(2);
  }
  cVar1 = FUN_1804ec300(param_1 + 2);
  if (cVar1 != '\0') {
    uVar3 = FUN_1803716a0(local_18,param_1 + 2);
                    /* WARNING: Subroutine does not return */
    FUN_1803716f0(uVar3);
  }
  *(undefined1 *)(param_1 + 0x17) = 1;
  if (*(char *)((longlong)param_1 + 0xc2) == '\0') {
    *(undefined1 *)((longlong)param_1 + 0xc2) = 1;
    (**(code **)(*param_1 + 0x20))(param_1,&local_28);
  }
  iVar2 = *(int *)((longlong)param_1 + 0xbc);
  while (iVar2 == 0) {
    FUN_1804eb6e0(param_1 + 0xe,local_28);
    iVar2 = *(int *)((longlong)param_1 + 0xbc);
  }
  cVar1 = FUN_1804ec300(param_1 + 2);
  if (cVar1 != '\0') {
    uVar3 = FUN_1803716a0(local_18,param_1 + 2);
                    /* WARNING: Subroutine does not return */
    FUN_1803716f0(uVar3);
  }
  if (local_20 != '\0') {
    FUN_1804e4e90(local_28);
  }
  return (longlong)param_1 + 0xc;
}



/* ===== 18037ca40 FUN_18037ca40 ===== */

void FUN_18037ca40(longlong *param_1)

{
  int iVar1;
  longlong *local_18;
  char local_10;
  
  local_18 = param_1 + 4;
  local_10 = 0;
  iVar1 = FUN_1804e4d70();
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (*(int *)((longlong)param_1 + 0x6c) == 0x7fffffff) {
    *(undefined4 *)((longlong)param_1 + 0x6c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  local_10 = '\x01';
  if (*(char *)((longlong)param_1 + 0xc2) == '\0') {
    *(undefined1 *)((longlong)param_1 + 0xc2) = 1;
    (**(code **)(*param_1 + 0x20))(param_1,&local_18);
  }
  iVar1 = *(int *)((longlong)param_1 + 0xbc);
  while (iVar1 == 0) {
    FUN_1804eb6e0(param_1 + 0xe,local_18);
    iVar1 = *(int *)((longlong)param_1 + 0xbc);
  }
  if (local_10 != '\0') {
    FUN_1804e4e90(local_18);
  }
  return;
}



/* ===== 18037caf0 FUN_18037caf0 ===== */

void FUN_18037caf0(undefined8 *param_1,longlong param_2,undefined8 *param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong *local_68;
  longlong *plStack_60;
  longlong *local_50;
  longlong *plStack_48;
  undefined8 local_40;
  
  if (param_3[1] != 0) {
    LOCK();
    piVar1 = (int *)(param_3[1] + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  plVar3 = (longlong *)*param_3;
  plVar4 = (longlong *)param_3[1];
  uVar5 = param_3[2];
  plVar8 = (longlong *)FUN_1804ecaa0(0x1c8);
  *plVar8 = 0;
  plVar8[1] = 0;
  *(undefined4 *)(plVar8 + 1) = 1;
  *(undefined4 *)((longlong)plVar8 + 0xc) = 1;
  *plVar8 = (longlong)
            std::_Ref_count_obj2<Concurrency::details::_Task_impl<unsigned_char>_>::vftable;
  plVar6 = plVar8 + 2;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  local_50 = plVar3;
  plStack_48 = plVar4;
  local_40 = uVar5;
  FUN_180382560(plVar6,param_2,&local_50);
  local_50 = plVar6;
  plStack_48 = plVar8;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar4 + 1;
    lVar7 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
    }
  }
  FUN_18025bd90(param_1,&local_50);
  plVar6 = plStack_48;
  if (plStack_48 != (longlong *)0x0) {
    LOCK();
    plVar3 = plStack_48 + 1;
    lVar7 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plStack_48)(plStack_48);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6);
      }
    }
  }
  if (param_2 != 2) {
    plVar6 = (longlong *)*param_1;
    local_68 = (longlong *)0x0;
    plStack_60 = (longlong *)0x0;
    plVar3 = (longlong *)param_1[1];
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
      local_68 = plVar6;
      plStack_60 = plVar3;
    }
    local_50 = (longlong *)0x0;
    plStack_48 = (longlong *)0x0;
    if (plStack_60 != (longlong *)0x0) {
      local_50 = local_68;
      plStack_48 = plStack_60;
      LOCK();
      *(int *)((longlong)plStack_60 + 0xc) = *(int *)((longlong)plStack_60 + 0xc) + 1;
      UNLOCK();
    }
    plVar4 = plStack_48;
    plVar3 = local_50;
    puVar9 = (undefined8 *)FUN_1804ecaa0(0xd0);
    *puVar9 = Concurrency::details::_RefCounter::vftable;
    *(undefined4 *)(puVar9 + 1) = 1;
    *(undefined4 *)(puVar9 + 2) = 3;
    puVar9[3] = 0;
    puVar9[4] = 0;
    puVar9[5] = 0;
    puVar9[6] = 0;
    puVar9[7] = 0;
    puVar9[8] = 0;
    puVar9[9] = 0;
    puVar9[10] = 0;
    puVar9[0xb] = 0;
    puVar9[0xf] = 0;
    puVar9[0x10] = 0;
    puVar9[0x11] = 0;
    puVar9[0x12] = 0;
    puVar9[0x13] = 0;
    puVar9[0x14] = 0;
    puVar9[0xd] = 0;
    puVar9[0xe] = 0;
    *(undefined4 *)(puVar9 + 0x15) = 0xffffffff;
    *(undefined4 *)(puVar9 + 0xc) = 2;
    *(undefined4 *)((longlong)puVar9 + 0xac) = 0;
    *(undefined1 *)(puVar9 + 0x16) = 0;
    puVar9[0x17] = 0;
    *puVar9 = Concurrency::details::
              _CancellationTokenCallback<`public:_void___cdecl_Concurrency::details::_Task_impl_base::_RegisterCancellation(std::weak_ptr<Concurrency::details::_Task_impl_base>)___ptr64'::`2'::<lambda_1>_>
              ::vftable;
    puVar9[0x18] = 0;
    puVar9[0x19] = 0;
    if (plVar4 != (longlong *)0x0) {
      puVar9[0x18] = plVar3;
      puVar9[0x19] = plVar4;
      LOCK();
      *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
      UNLOCK();
    }
    plVar6[0x10] = (longlong)puVar9;
    FUN_1803719b0(plVar6[0xf],puVar9);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
    }
    if (plStack_60 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plStack_60 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plStack_60 + 8))();
      }
    }
  }
  plVar6 = (longlong *)param_3[1];
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar6 + 1;
    lVar7 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6);
      }
    }
  }
  return;
}



/* ===== 18037cdc0 FUN_18037cdc0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_18037cdc0(longlong param_1,char param_2,char param_3,undefined8 param_4,undefined8 *param_5)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  longlong *local_a0;
  longlong local_98 [2];
  undefined **local_88;
  longlong local_80;
  undefined ***local_50;
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_c8;
  lVar5 = param_1 + 0x20;
  local_a8 = (undefined8 *)lVar5;
  iVar4 = FUN_1804e4d70(lVar5);
  if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (*(int *)(param_1 + 0x6c) == 0x7fffffff) {
    *(undefined4 *)(param_1 + 0x6c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  if (param_3 == '\0') {
    if ((*(int *)(param_1 + 8) == 3) || (*(int *)(param_1 + 8) == 4)) goto LAB_18037cf66;
    if (*(int *)(param_1 + 8) != 2) goto LAB_18037ce84;
    if (param_2 == '\0') goto LAB_18037cf66;
  }
  else {
    if (*(int *)(param_1 + 8) == 4) {
LAB_18037cf66:
      FUN_1804e4e90(lVar5);
      return 0;
    }
    if (param_5[1] != 0) {
      LOCK();
      piVar1 = (int *)(param_5[1] + 8);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    uVar6 = param_5[1];
    *(undefined8 *)(param_1 + 0x10) = *param_5;
    plVar7 = *(longlong **)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = uVar6;
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar7 + 1;
      lVar3 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7);
        }
      }
    }
LAB_18037ce84:
    if (param_2 == '\0') {
      iVar4 = 2;
      if (*(int *)(param_1 + 8) != 1) {
        iVar4 = 0;
      }
      *(undefined4 *)(param_1 + 8) = 2;
      _guard_check_icall(param_1 + 0x160);
      FUN_1804e4e90(lVar5);
      if (iVar4 != 1) {
        if (iVar4 != 2) {
          return 1;
        }
        if (*(longlong *)(param_1 + 0x1b0) == 0) {
          return 1;
        }
        (**(code **)(**(longlong **)(param_1 + 0x1b0) + 0x10))();
        return 1;
      }
      goto LAB_18037ce9c;
    }
  }
  *(undefined4 *)(param_1 + 8) = 4;
  FUN_1804e4e90(lVar5);
LAB_18037ce9c:
  FUN_180371da0(param_1 + 0x88);
  if (*(longlong *)(param_1 + 0x70) != 0) {
    local_88 = std::
               _Func_impl_no_alloc<`public:_virtual_bool___cdecl_Concurrency::details::_Task_impl<unsigned_char>::_CancelAndRunContinuations(bool,bool,bool,std::shared_ptr<Concurrency::details::_ExceptionHolder>_const&___ptr64)___ptr64'::`34'::<lambda_1>,void>
               ::vftable;
    local_50 = &local_88;
    local_80 = param_1;
    lVar5 = FUN_1804ecaa0(0x40);
    *(undefined8 *)(lVar5 + 0x38) = 0;
    local_a8 = (undefined8 *)lVar5;
    local_98[0] = lVar5;
    if (local_50 != (undefined ***)0x0) {
      uVar6 = (*(code *)**local_50)(local_50,lVar5);
      *(undefined8 *)(lVar5 + 0x38) = uVar6;
    }
    plVar7 = (longlong *)FUN_1803718a0();
    if (plVar7[1] != 0) {
      LOCK();
      piVar1 = (int *)(plVar7[1] + 8);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    local_a8 = (undefined8 *)*plVar7;
    plVar7 = (longlong *)plVar7[1];
    local_a0 = plVar7;
    if (local_a8 == (undefined8 *)0x0) {
      FUN_1803717e0(local_98,FUN_180371e90,lVar5);
    }
    else {
      (**(code **)*local_a8)();
    }
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar7 + 1;
      lVar5 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7);
        }
      }
    }
    if (local_50 != (undefined ***)0x0) {
      (*(code *)(*local_50)[4])
                (local_50,CONCAT71((int7)((ulonglong)&local_88 >> 8),local_50 != &local_88));
    }
  }
  return 1;
}



/* ===== 18037d060 FUN_18037d060 ===== */

void FUN_18037d060(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  bool bVar7;
  
  lVar3 = *(longlong *)(param_1 + 200);
  if (lVar3 == 0) {
LAB_18037d09e:
    plVar5 = (longlong *)0x0;
    plVar6 = (longlong *)0x0;
  }
  else {
    iVar4 = *(int *)(lVar3 + 8);
    do {
      if (iVar4 == 0) goto LAB_18037d09e;
      LOCK();
      iVar2 = *(int *)(lVar3 + 8);
      bVar7 = iVar4 == iVar2;
      if (bVar7) {
        *(int *)(lVar3 + 8) = iVar4 + 1;
      }
      else {
        iVar4 = iVar2;
      }
      UNLOCK();
    } while (!bVar7);
    plVar5 = *(longlong **)(param_1 + 0xc0);
    plVar6 = *(longlong **)(param_1 + 200);
  }
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 8))(0,0,0,0,plVar5 + 2);
  }
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar6 + 1;
    lVar3 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6);
      }
    }
  }
  return;
}



/* ===== 18037d120 FUN_18037d120 ===== */

void FUN_18037d120(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    return;
  }
  FUN_1804ec3b0(lVar1);
  thunk_FUN_1803d64e0(lVar1,0x28);
  return;
}



/* ===== 18037d150 FUN_18037d150 ===== */

undefined4 FUN_18037d150(undefined4 *param_1)

{
  return *param_1;
}



/* ===== 18037d160 FUN_18037d160 ===== */

void FUN_18037d160(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar4 = DAT_181108110;
  if (DAT_181108110 == DAT_181108118) {
    FUN_18037ef90(param_1,DAT_181108110);
    return;
  }
  *DAT_181108110 = 0;
  puVar4[1] = 0;
  puVar4[2] = 0;
  puVar4[3] = 0;
  uVar1 = param_2[1];
  *puVar4 = *param_2;
  puVar4[1] = uVar1;
  uVar1 = param_2[3];
  puVar4[2] = param_2[2];
  puVar4[3] = uVar1;
  *(undefined1 *)param_2 = 0;
  param_2[2] = 0;
  param_2[3] = 0xf;
  puVar4[4] = 0;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  uVar1 = param_2[5];
  puVar4[4] = param_2[4];
  puVar4[5] = uVar1;
  uVar1 = param_2[7];
  puVar4[6] = param_2[6];
  puVar4[7] = uVar1;
  *(undefined1 *)(param_2 + 4) = 0;
  param_2[6] = 0;
  param_2[7] = 0xf;
  *(undefined4 *)(puVar4 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined1 *)((longlong)puVar4 + 0x44) = *(undefined1 *)((longlong)param_2 + 0x44);
  uVar1 = param_2[0xb];
  uVar2 = param_2[10];
  uVar3 = param_2[9];
  param_2[0xb] = 0;
  param_2[10] = 0;
  param_2[9] = 0;
  puVar4[9] = uVar3;
  puVar4[10] = uVar2;
  puVar4[0xb] = uVar1;
  DAT_181108110 = DAT_181108110 + 0xc;
  return;
}



/* ===== 18037d220 FUN_18037d220 ===== */

void FUN_18037d220(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_18037f620(param_1,lVar1,param_2);
    return;
  }
  FUN_180024b50(lVar1);
  FUN_180024b50(lVar1 + 0x20,param_2 + 0x20);
  *(undefined4 *)(lVar1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)(lVar1 + 0x44) = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)(lVar1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
  *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x50;
  return;
}



/* ===== 18037d2a0 FUN_18037d2a0 ===== */

undefined8 * FUN_18037d2a0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = std::_Associated_state<int>::vftable;
  if ((*(char *)((longlong)param_1 + 0xc1) != '\0') && (*(int *)((longlong)param_1 + 0xbc) == 0)) {
    FUN_1804eb360(param_1 + 4);
  }
  FUN_1804eb8c0(param_1 + 2);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1803d64e0(param_1,0xd0);
  }
  return param_1;
}



/* ===== 18037d300 FUN_18037d300 ===== */

undefined8 * FUN_18037d300(undefined8 *param_1,uint param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  
  *param_1 = Concurrency::details::_Task_impl<unsigned_char>::vftable;
  if (param_1[0x10] != 0) {
    FUN_180371b10(param_1[0xf]);
    plVar1 = (longlong *)param_1[0x10];
    LOCK();
    plVar2 = plVar1 + 1;
    lVar3 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)(*plVar1 + 8))();
    }
    param_1[0x10] = 0;
  }
  plVar2 = (longlong *)param_1[0x36];
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x20))(plVar2,plVar2 != param_1 + 0x2f);
    param_1[0x36] = 0;
  }
  FUN_180372270(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1803d64e0(param_1,0x1b8);
  }
  return param_1;
}



/* ===== 18037d3b0 FUN_18037d3b0 ===== */

undefined8 * FUN_18037d3b0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)param_1[0x19];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))();
    }
  }
  *param_1 = Concurrency::details::_RefCounter::vftable;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1803d64e0(param_1,0xd0);
  }
  return param_1;
}



/* ===== 18037d410 FUN_18037d410 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18037d410(longlong param_1,longlong param_2,longlong param_3,undefined1 param_4)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  longlong local_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined4 local_58;
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_d8;
  lVar3 = param_2 - param_1;
  while( true ) {
    if (lVar3 < 0x948) {
      FUN_18037e820(param_1,param_2);
      return;
    }
    lVar3 = (param_2 - param_1) / 0x12 + (param_2 - param_1 >> 0x3f);
    lVar4 = (lVar3 >> 2) - (lVar3 >> 0x3f);
    lVar3 = lVar4 >> 1;
    if (param_3 < 1) break;
    lVar3 = param_1 + lVar3 * 0x48;
    FUN_1803804f0(param_1,lVar3,param_2 + -0x48,param_4);
    FUN_180380740(&local_a8,param_1,lVar3,param_2);
    lVar3 = local_a0;
    lVar4 = local_a8;
    param_3 = (param_3 >> 1) + (param_3 >> 2);
    if ((local_a8 - param_1 >> 3) * -0x71c71c71c71c71c7 <
        (param_2 - local_a0 >> 3) * -0x71c71c71c71c71c7) {
      FUN_18037d410(param_1,local_a8,param_3,param_4);
      param_1 = lVar3;
      lVar4 = param_2;
    }
    else {
      FUN_18037d410(local_a0,param_2,param_3,param_4);
    }
    lVar3 = lVar4 - param_1;
    param_2 = lVar4;
  }
  while (0 < lVar3) {
    puVar2 = (undefined8 *)(param_1 + -0x48 + lVar3 * 0x48);
    local_98 = *puVar2;
    uStack_90 = puVar2[1];
    puVar2 = (undefined8 *)(param_1 + -0x38 + lVar3 * 0x48);
    local_88 = *puVar2;
    uStack_80 = puVar2[1];
    *(undefined1 *)(param_1 + -0x48 + lVar3 * 0x48) = 0;
    *(undefined8 *)(param_1 + -0x38 + lVar3 * 0x48) = 0;
    *(undefined8 *)(param_1 + -0x30 + lVar3 * 0x48) = 0xf;
    local_78 = *(undefined8 *)(param_1 + -0x28 + lVar3 * 0x48);
    local_60 = *(undefined8 *)(param_1 + -0x10 + lVar3 * 0x48);
    puVar2 = (undefined8 *)(param_1 + -0x20 + lVar3 * 0x48);
    uStack_70 = *puVar2;
    uStack_68 = *(undefined4 *)(puVar2 + 1);
    uStack_64 = *(undefined4 *)((longlong)puVar2 + 0xc);
    *(undefined1 *)(param_1 + -0x28 + lVar3 * 0x48) = 0;
    *(undefined8 *)(param_1 + -0x18 + lVar3 * 0x48) = 0;
    *(undefined8 *)(param_1 + -0x10 + lVar3 * 0x48) = 0xf;
    local_58 = *(undefined4 *)(param_1 + -8 + lVar3 * 0x48);
    local_b8 = param_4;
    FUN_180380340(param_1,lVar3 + -1,lVar4,&local_98);
    FUN_18000f890(&local_78);
    FUN_18000f890(&local_98);
    lVar3 = lVar3 + -1;
  }
  if (lVar4 < 2) {
    return;
  }
  do {
    if (1 < (param_2 - param_1 >> 3) * -0x71c71c71c71c71c7) {
      local_98 = *(undefined8 *)(param_2 + -0x48);
      uStack_90 = *(undefined8 *)(param_2 + -0x40);
      puVar1 = (undefined1 *)(param_2 + -0x48);
      local_88 = *(undefined8 *)(param_2 + -0x38);
      uStack_80 = *(undefined8 *)(param_2 + -0x30);
      *puVar1 = 0;
      *(undefined8 *)(param_2 + -0x38) = 0;
      *(undefined8 *)(param_2 + -0x30) = 0xf;
      local_78 = *(undefined8 *)(param_2 + -0x28);
      local_60 = *(undefined8 *)(param_2 + -0x10);
      uStack_70 = *(undefined8 *)(param_2 + -0x20);
      uStack_68 = *(undefined4 *)(param_2 + -0x18);
      uStack_64 = *(undefined4 *)(param_2 + -0x14);
      *(undefined1 *)(param_2 + -0x28) = 0;
      *(undefined8 *)(param_2 + -0x18) = 0;
      *(undefined8 *)(param_2 + -0x10) = 0xf;
      local_58 = *(undefined4 *)(param_2 + -8);
      FUN_18002ba60(puVar1,param_1);
      FUN_18002ba60(param_2 + -0x28,param_1 + 0x20);
      *(undefined4 *)(param_2 + -8) = *(undefined4 *)(param_1 + 0x40);
      local_b8 = param_4;
      FUN_180380340(param_1,0,((longlong)puVar1 - param_1 >> 3) * -0x71c71c71c71c71c7,&local_98);
      FUN_18000f890(&local_78);
      FUN_18000f890(&local_98);
    }
    param_2 = param_2 + -0x48;
  } while (0x8f < param_2 - param_1);
  return;
}



/* ===== 18037d720 FUN_18037d720 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18037d720(longlong param_1,longlong param_2,longlong param_3,undefined1 param_4)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  longlong local_b8;
  longlong local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined4 local_68;
  undefined1 local_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_e8;
  lVar3 = param_2 - param_1;
  while( true ) {
    if (lVar3 < 0xc60) {
      FUN_18037eb20(param_1,param_2);
      return;
    }
    lVar3 = (param_2 - param_1) / 6 + (param_2 - param_1 >> 0x3f);
    lVar4 = (lVar3 >> 4) - (lVar3 >> 0x3f);
    lVar3 = lVar4 >> 1;
    if (param_3 < 1) break;
    lVar3 = lVar3 * 0x60 + param_1;
    FUN_180380cb0(param_1,lVar3,param_2 + -0x60,param_4);
    FUN_180380f00(&local_b8,param_1,lVar3,param_2);
    lVar3 = local_b0;
    lVar4 = local_b8;
    param_3 = (param_3 >> 1) + (param_3 >> 2);
    if ((local_b8 - param_1 >> 5) * -0x5555555555555555 <
        (param_2 - local_b0 >> 5) * -0x5555555555555555) {
      FUN_18037d720(param_1,local_b8,param_3,param_4);
      lVar4 = param_2;
      param_1 = lVar3;
    }
    else {
      FUN_18037d720(local_b0,param_2,param_3,param_4);
    }
    lVar3 = lVar4 - param_1;
    param_2 = lVar4;
  }
  while (0 < lVar3) {
    lVar5 = lVar3 * 0x60;
    puVar2 = (undefined8 *)(param_1 + -0x60 + lVar5);
    local_a8 = *puVar2;
    uStack_a0 = puVar2[1];
    puVar2 = (undefined8 *)(param_1 + -0x50 + lVar5);
    local_98 = *puVar2;
    uStack_90 = puVar2[1];
    *(undefined1 *)(param_1 + -0x60 + lVar5) = 0;
    *(undefined8 *)(param_1 + -0x50 + lVar5) = 0;
    *(undefined8 *)(param_1 + -0x48 + lVar5) = 0xf;
    local_88 = *(undefined8 *)(param_1 + -0x40 + lVar5);
    local_70 = *(undefined8 *)(lVar5 + -0x28 + param_1);
    puVar2 = (undefined8 *)(lVar5 + -0x38 + param_1);
    uStack_80 = *puVar2;
    uStack_78 = *(undefined4 *)(puVar2 + 1);
    uStack_74 = *(undefined4 *)((longlong)puVar2 + 0xc);
    *(undefined1 *)(param_1 + -0x40 + lVar5) = 0;
    *(undefined8 *)(param_1 + -0x30 + lVar5) = 0;
    *(undefined8 *)(param_1 + -0x28 + lVar5) = 0xf;
    local_68 = *(undefined4 *)(param_1 + -0x20 + lVar5);
    local_50 = *(undefined8 *)(param_1 + -8 + lVar5);
    local_58 = *(undefined8 *)(param_1 + -0x10 + lVar5);
    local_64 = *(undefined1 *)(param_1 + -0x1c + lVar5);
    local_60 = *(undefined8 *)(param_1 + -0x18 + lVar5);
    *(undefined8 *)(param_1 + -0x18 + lVar5) = 0;
    *(undefined8 *)(param_1 + -8 + lVar5) = 0;
    *(undefined8 *)(param_1 + -0x10 + lVar5) = 0;
    local_c8 = param_4;
    FUN_180380a20(param_1,lVar3 + -1,lVar4,&local_a8);
    FUN_18037e6d0(&local_60);
    FUN_18000f890(&local_88);
    FUN_18000f890(&local_a8);
    lVar3 = lVar3 + -1;
  }
  if (lVar4 < 2) {
    return;
  }
  do {
    if (1 < (param_2 - param_1 >> 5) * -0x5555555555555555) {
      local_a8 = *(undefined8 *)(param_2 + -0x60);
      uStack_a0 = *(undefined8 *)(param_2 + -0x58);
      puVar1 = (undefined1 *)(param_2 + -0x60);
      local_98 = *(undefined8 *)(param_2 + -0x50);
      uStack_90 = *(undefined8 *)(param_2 + -0x48);
      *puVar1 = 0;
      *(undefined8 *)(param_2 + -0x50) = 0;
      *(undefined8 *)(param_2 + -0x48) = 0xf;
      local_88 = *(undefined8 *)(param_2 + -0x40);
      local_70 = *(undefined8 *)(param_2 + -0x28);
      uStack_80 = *(undefined8 *)(param_2 + -0x38);
      uStack_78 = *(undefined4 *)(param_2 + -0x30);
      uStack_74 = *(undefined4 *)(param_2 + -0x2c);
      *(undefined1 *)(param_2 + -0x40) = 0;
      *(undefined8 *)(param_2 + -0x30) = 0;
      *(undefined8 *)(param_2 + -0x28) = 0xf;
      local_68 = *(undefined4 *)(param_2 + -0x20);
      local_50 = *(undefined8 *)(param_2 + -8);
      local_58 = *(undefined8 *)(param_2 + -0x10);
      local_64 = *(undefined1 *)(param_2 + -0x1c);
      local_60 = *(undefined8 *)(param_2 + -0x18);
      *(undefined8 *)(param_2 + -8) = 0;
      *(undefined8 *)(param_2 + -0x10) = 0;
      *(undefined8 *)(param_2 + -0x18) = 0;
      FUN_1803760d0(puVar1,param_1);
      local_c8 = param_4;
      FUN_180380a20(param_1,0,((longlong)puVar1 - param_1 >> 5) * -0x5555555555555555,&local_a8);
      FUN_18037e6d0(&local_60);
      FUN_18000f890(&local_88);
      FUN_18000f890(&local_a8);
    }
    param_2 = param_2 + -0x60;
  } while (0xbf < param_2 - param_1);
  return;
}



/* ===== 18037da80 FUN_18037da80 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_18037da80(undefined8 param_1,undefined8 *param_2,byte *param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  
  uVar7 = (((((((((ulonglong)*param_3 ^ 0xcbf29ce484222325) * 0x100000001b3 ^ (ulonglong)param_3[1])
                * 0x100000001b3 ^ (ulonglong)param_3[2]) * 0x100000001b3 ^ (ulonglong)param_3[3]) *
              0x100000001b3 ^ (ulonglong)param_3[4]) * 0x100000001b3 ^ (ulonglong)param_3[5]) *
            0x100000001b3 ^ (ulonglong)param_3[6]) * 0x100000001b3 ^ (ulonglong)param_3[7]) *
          0x100000001b3;
  puVar5 = (undefined8 *)(DAT_1811080a0 & uVar7);
  puVar4 = *(undefined8 **)(DAT_181108088 + 8 + (longlong)puVar5 * 0x10);
  puVar6 = DAT_181108078;
  if (puVar4 != DAT_181108078) {
    puVar5 = *(undefined8 **)(DAT_181108088 + (longlong)puVar5 * 0x10);
    lVar2 = puVar4[2];
    puVar6 = puVar4;
    while( true ) {
      if (*(longlong *)param_3 == lVar2) {
        *param_2 = puVar6;
        *(undefined1 *)(param_2 + 1) = 0;
        return param_2;
      }
      if (puVar6 == puVar5) break;
      puVar6 = (undefined8 *)puVar6[1];
      lVar2 = puVar6[2];
    }
  }
  if (DAT_181108080 == 0x666666666666666) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4cd0("unordered_map/set too long");
  }
  puVar8 = &DAT_181108078;
  lVar2 = FUN_1804ecaa0(0x28,puVar5,DAT_181108088,param_4,&DAT_181108078,0);
  *(undefined8 *)(lVar2 + 0x10) = *(undefined8 *)param_3;
  *(undefined8 *)(lVar2 + 0x18) = 0;
  *(undefined4 *)(lVar2 + 0x20) = 0;
  puVar4 = DAT_1811080a8;
  if ((longlong)DAT_1811080a8 < 0) {
    puVar4 = (undefined8 *)(ulonglong)((uint)DAT_1811080a8 & 1);
  }
  lVar9 = lVar2;
  if (_DAT_181108070 < (float)(DAT_181108080 + 1) / (float)DAT_1811080a8) {
    FUN_18037df20();
    puVar4 = *(undefined8 **)(DAT_181108088 + 8 + (DAT_1811080a0 & uVar7) * 0x10);
    puVar6 = DAT_181108078;
    if (puVar4 != DAT_181108078) {
      lVar1 = puVar4[2];
      while (*(longlong *)(lVar2 + 0x10) != lVar1) {
        if (puVar4 == *(undefined8 **)(DAT_181108088 + (DAT_1811080a0 & uVar7) * 0x10)) {
          puVar6 = puVar4;
          goto LAB_18037dc69;
        }
        puVar4 = (undefined8 *)puVar4[1];
        lVar1 = puVar4[2];
      }
      puVar6 = (undefined8 *)*puVar4;
    }
  }
LAB_18037dc69:
  uVar3 = FUN_18037dfd0(puVar4,uVar7,puVar6,lVar2,puVar8,lVar9);
  *param_2 = uVar3;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



/* ===== 18037dca0 FUN_18037dca0 ===== */

longlong * FUN_18037dca0(undefined8 param_1,longlong *param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  float fVar10;
  undefined4 uVar11;
  longlong local_58;
  longlong lStack_50;
  undefined8 *local_48;
  longlong *local_40;
  
  if ((ulonglong)param_3[3] < 0x10) {
    puVar7 = param_3;
  }
  else {
    puVar7 = (undefined8 *)*param_3;
  }
  uVar8 = 0xcbf29ce484222325;
  uVar4 = 0;
  if (param_3[2] != 0) {
    do {
      uVar8 = (uVar8 ^ *(byte *)(uVar4 + (longlong)puVar7)) * 0x100000001b3;
      uVar4 = uVar4 + 1;
    } while (uVar4 < (ulonglong)param_3[2]);
  }
  FUN_18037eeb0(uVar4,&local_58,param_3,uVar8);
  if (lStack_50 != 0) {
    *param_2 = lStack_50;
    *(undefined1 *)(param_2 + 1) = 0;
    return param_2;
  }
  if (DAT_181108130 == 0x38e38e38e38e38e) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4cd0("unordered_map/set too long");
  }
  local_48 = &DAT_181108128;
  local_40 = (longlong *)0x0;
  plVar2 = (longlong *)FUN_1804ecaa0(0x48);
  local_40 = plVar2;
  FUN_180024b50(plVar2 + 2,param_3);
  plVar2[6] = 0;
  plVar2[7] = 0;
  plVar2[8] = 0;
  uVar4 = DAT_181108158;
  if (DAT_181108120 < (float)(DAT_181108130 + 1) / (float)DAT_181108158) {
    fVar10 = (float)FUN_18053ef70((float)(DAT_181108130 + 1) / DAT_181108120);
    lVar5 = 0;
    if ((DAT_1808acd00 <= fVar10) && (fVar10 = fVar10 - DAT_1808acd00, fVar10 < DAT_1808acd00)) {
      lVar5 = -0x8000000000000000;
    }
    uVar6 = 8;
    if (8 < (ulonglong)((longlong)fVar10 + lVar5)) {
      uVar6 = (longlong)fVar10 + lVar5;
    }
    uVar9 = uVar4;
    if ((uVar4 < uVar6) && ((0x1ff < uVar4 || (uVar9 = uVar4 * 8, uVar4 * 8 < uVar6)))) {
      uVar9 = uVar6;
    }
    uVar11 = FUN_1803818f0(uVar6,uVar9);
    plVar3 = (longlong *)FUN_18037eeb0(uVar11,&local_48,plVar2 + 2,uVar8);
    local_58 = *plVar3;
  }
  plVar3 = *(longlong **)(local_58 + 8);
  DAT_181108130 = DAT_181108130 + 1;
  *plVar2 = local_58;
  plVar2[1] = (longlong)plVar3;
  *plVar3 = (longlong)plVar2;
  *(longlong **)(local_58 + 8) = plVar2;
  lVar1 = DAT_181108138;
  uVar8 = DAT_181108150 & uVar8;
  lVar5 = *(longlong *)(DAT_181108138 + uVar8 * 0x10);
  if (lVar5 == DAT_181108128) {
    *(longlong **)(DAT_181108138 + uVar8 * 0x10) = plVar2;
  }
  else {
    if (lVar5 == local_58) {
      *(longlong **)(DAT_181108138 + uVar8 * 0x10) = plVar2;
      goto LAB_18037dee2;
    }
    if (*(longlong **)(DAT_181108138 + 8 + uVar8 * 0x10) != plVar3) goto LAB_18037dee2;
  }
  *(longlong **)(lVar1 + 8 + uVar8 * 0x10) = plVar2;
LAB_18037dee2:
  *param_2 = (longlong)plVar2;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



/* ===== 18037df10 FUN_18037df10 ===== */

void FUN_18037df10(longlong param_1)

{
  FUN_180371f50(param_1 + 0x10);
  return;
}



/* ===== 18037df20 FUN_18037df20 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18037df20(void)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  float fVar5;
  
  uVar1 = DAT_1811080a8;
  fVar5 = (float)FUN_18053ef70((float)(DAT_181108080 + 1) / _DAT_181108070);
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
  FUN_18037ff30(uVar3,uVar4);
  return;
}



/* ===== 18037dfd0 FUN_18037dfd0 ===== */

longlong * FUN_18037dfd0(undefined8 param_1,ulonglong param_2,longlong param_3,longlong *param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  puVar1 = *(undefined8 **)(param_3 + 8);
  DAT_181108080 = DAT_181108080 + 1;
  *param_4 = param_3;
  param_4[1] = (longlong)puVar1;
  *puVar1 = param_4;
  *(longlong **)(param_3 + 8) = param_4;
  lVar3 = DAT_181108088;
  param_2 = DAT_1811080a0 & param_2;
  lVar2 = *(longlong *)(DAT_181108088 + param_2 * 0x10);
  if (lVar2 == DAT_181108078) {
    *(longlong **)(DAT_181108088 + param_2 * 0x10) = param_4;
    *(longlong **)(lVar3 + 8 + param_2 * 0x10) = param_4;
    return param_4;
  }
  if (lVar2 == param_3) {
    *(longlong **)(DAT_181108088 + param_2 * 0x10) = param_4;
    return param_4;
  }
  if (*(undefined8 **)(DAT_181108088 + 8 + param_2 * 0x10) == puVar1) {
    *(longlong **)(DAT_181108088 + 8 + param_2 * 0x10) = param_4;
  }
  return param_4;
}



/* ===== 18037e040 FUN_18037e040 ===== */

longlong * FUN_18037e040(longlong param_1,longlong *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
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
  puVar1 = *(undefined8 **)(param_1 + 8);
  puVar2 = (undefined8 *)param_2[1];
  lVar3 = *(longlong *)(param_1 + 0x18);
  lVar5 = (*(ulonglong *)(param_1 + 0x30) &
          (((((((((ulonglong)*(byte *)(param_2 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                (ulonglong)*(byte *)((longlong)param_2 + 0x11)) * 0x100000001b3 ^
               (ulonglong)*(byte *)((longlong)param_2 + 0x12)) * 0x100000001b3 ^
              (ulonglong)*(byte *)((longlong)param_2 + 0x13)) * 0x100000001b3 ^
             (ulonglong)*(byte *)((longlong)param_2 + 0x14)) * 0x100000001b3 ^
            (ulonglong)*(byte *)((longlong)param_2 + 0x15)) * 0x100000001b3 ^
           (ulonglong)*(byte *)((longlong)param_2 + 0x16)) * 0x100000001b3 ^
          (ulonglong)*(byte *)((longlong)param_2 + 0x17)) * 0x100000001b3) * 0x10;
  plVar8 = (longlong *)(lVar3 + 8 + lVar5);
  plVar7 = (longlong *)(lVar5 + lVar3);
  plVar4 = *(longlong **)(lVar5 + lVar3);
  plVar10 = (longlong *)*plVar8;
  plVar9 = param_2;
  do {
    plVar11 = (longlong *)*plVar9;
    thunk_FUN_1803d64e0(plVar9,0x28);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
    if (plVar9 == plVar10) {
      if (plVar4 == param_2) {
        *plVar7 = (longlong)puVar1;
        puVar6 = puVar1;
      }
      else {
        puVar6 = puVar2;
      }
      *plVar8 = (longlong)puVar6;
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
        plVar4 = *(longlong **)(lVar3 + 8 + uVar12 * 0x10);
        plVar7 = (longlong *)(lVar3 + uVar12 * 0x10);
        plVar10 = plVar11;
        while( true ) {
          plVar11 = (longlong *)*plVar10;
          thunk_FUN_1803d64e0(plVar10,0x28);
          *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
          if (plVar10 == plVar4) break;
          plVar10 = plVar11;
          if (plVar11 == param_3) goto LAB_18037e259;
        }
        *plVar7 = (longlong)puVar1;
        *(undefined8 **)(lVar3 + 8 + uVar12 * 0x10) = puVar1;
      }
      goto LAB_18037e25c;
    }
    plVar9 = plVar11;
  } while (plVar11 != param_3);
  if (plVar4 == param_2) {
LAB_18037e259:
    *plVar7 = (longlong)plVar11;
  }
LAB_18037e25c:
  *puVar2 = plVar11;
  plVar11[1] = (longlong)puVar2;
  return param_3;
}



/* ===== 18037e2b0 FUN_18037e2b0 ===== */

void FUN_18037e2b0(longlong param_1,undefined8 *param_2,char param_3)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_1 + 0x121) = 1;
  if (param_3 == '\0') {
    *(undefined4 *)(param_1 + 0x11c) = 1;
    FUN_1804eb6a0(param_1 + 0xd0);
    return;
  }
  uVar1 = *param_2;
  *param_2 = 0;
  *(undefined1 *)(param_2 + 1) = 0;
  FUN_1804eb270(param_1 + 0xd0,uVar1,(undefined4 *)(param_1 + 0x11c));
  return;
}



/* ===== 18037e2f0 FUN_18037e2f0 ===== */

longlong * FUN_18037e2f0(longlong *param_1,char param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *local_28;
  char local_20;
  undefined1 local_18 [16];
  
  local_28 = param_1 + 0x10;
  local_20 = 0;
  iVar2 = FUN_1804e4d70();
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (*(int *)((longlong)param_1 + 0xcc) == 0x7fffffff) {
    *(undefined4 *)((longlong)param_1 + 0xcc) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  local_20 = '\x01';
  if ((param_2 != '\0') && ((char)param_1[0x23] != '\0')) {
                    /* WARNING: Subroutine does not return */
    FUN_180372cb0(2);
  }
  cVar1 = FUN_1804ec300(param_1 + 0xe);
  if (cVar1 != '\0') {
    uVar3 = FUN_1803716a0(local_18,param_1 + 0xe);
                    /* WARNING: Subroutine does not return */
    FUN_1803716f0(uVar3);
  }
  *(undefined1 *)(param_1 + 0x23) = 1;
  if (*(char *)((longlong)param_1 + 0x122) == '\0') {
    *(undefined1 *)((longlong)param_1 + 0x122) = 1;
    (**(code **)(*param_1 + 0x20))(param_1,&local_28);
  }
  iVar2 = *(int *)((longlong)param_1 + 0x11c);
  while (iVar2 == 0) {
    FUN_1804eb6e0(param_1 + 0x1a,local_28);
    iVar2 = *(int *)((longlong)param_1 + 0x11c);
  }
  cVar1 = FUN_1804ec300(param_1 + 0xe);
  if (cVar1 != '\0') {
    uVar3 = FUN_1803716a0(local_18,param_1 + 0xe);
                    /* WARNING: Subroutine does not return */
    FUN_1803716f0(uVar3);
  }
  if (local_20 != '\0') {
    FUN_1804e4e90(local_28);
  }
  return param_1 + 2;
}



/* ===== 18037e430 FUN_18037e430 ===== */

void FUN_18037e430(longlong *param_1)

{
  int iVar1;
  longlong *local_18;
  char local_10;
  
  local_18 = param_1 + 0x10;
  local_10 = 0;
  iVar1 = FUN_1804e4d70();
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (*(int *)((longlong)param_1 + 0xcc) == 0x7fffffff) {
    *(undefined4 *)((longlong)param_1 + 0xcc) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  local_10 = '\x01';
  if (*(char *)((longlong)param_1 + 0x122) == '\0') {
    *(undefined1 *)((longlong)param_1 + 0x122) = 1;
    (**(code **)(*param_1 + 0x20))(param_1,&local_18);
  }
  iVar1 = *(int *)((longlong)param_1 + 0x11c);
  while (iVar1 == 0) {
    FUN_1804eb6e0(param_1 + 0x1a,local_18);
    iVar1 = *(int *)((longlong)param_1 + 0x11c);
  }
  if (local_10 != '\0') {
    FUN_1804e4e90(local_18);
  }
  return;
}



/* ===== 18037e4f0 FUN_18037e4f0 ===== */

void FUN_18037e4f0(undefined8 *param_1)

{
  *param_1 = std::_Associated_state<skybox::_anon_13F7984E::compile_result>::vftable;
  if ((*(char *)((longlong)param_1 + 0x121) != '\0') && (*(int *)((longlong)param_1 + 0x11c) == 0))
  {
    FUN_1804eb360(param_1 + 0x10);
  }
  FUN_1804eb8c0(param_1 + 0xe);
  FUN_18000f890(param_1 + 9);
  FUN_180081c30(param_1 + 6);
  FUN_18000f890(param_1 + 2);
  return;
}



/* ===== 18037e550 FUN_18037e550 ===== */

void FUN_18037e550(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_28;
  undefined8 uStack_20;
  longlong *local_18;
  char local_10;
  
  local_18 = param_1 + 4;
  local_10 = 0;
  iVar1 = FUN_1804e4d70();
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (*(int *)((longlong)param_1 + 0x6c) == 0x7fffffff) {
    *(undefined4 *)((longlong)param_1 + 0x6c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  local_10 = '\x01';
  local_28 = 0;
  uStack_20 = 0;
  FUN_1804ec080(&local_28,param_2);
  if (*(char *)((longlong)param_1 + 0xc1) != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_180372cb0(3);
  }
  FUN_1804ebfe0(param_1 + 2,&local_28);
  (**(code **)(*param_1 + 0x28))(param_1,&local_18,0);
  FUN_1804eb8c0(&local_28);
  if (local_10 != '\0') {
    FUN_1804e4e90(local_18);
  }
  FUN_1804eb8c0(param_2);
  return;
}



/* ===== 18037e640 FUN_18037e640 ===== */

void FUN_18037e640(longlong param_1,undefined1 param_2)

{
  int iVar1;
  
  *(undefined1 *)(param_1 + 0x170) = param_2;
  iVar1 = FUN_1804e4d70(param_1 + 0x20);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (*(int *)(param_1 + 0x6c) == 0x7fffffff) {
    *(undefined4 *)(param_1 + 0x6c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  if (*(int *)(param_1 + 8) == 4) {
    FUN_1804e4e90(param_1 + 0x20);
    return;
  }
  *(undefined4 *)(param_1 + 8) = 3;
  FUN_1804e4e90(param_1 + 0x20);
  FUN_180371da0(param_1 + 0x88);
  FUN_1803728b0(param_1);
  return;
}



/* ===== 18037e6d0 FUN_18037e6d0 ===== */

void FUN_18037e6d0(longlong *param_1)

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
  for (; lVar3 != lVar2; lVar3 = lVar3 + 0x50) {
    FUN_18000f890(lVar3 + 0x20);
    FUN_18000f890(lVar3);
  }
  lVar3 = *param_1;
  lVar2 = lVar3;
  if (0xfff < (ulonglong)((param_1[2] - lVar3 >> 4) << 4)) {
    lVar2 = *(longlong *)(lVar3 + -8);
    if ((lVar3 - lVar2) - 8U < 0x20) goto LAB_18037e764;
    lVar2 = 5;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar4 = auStack_20;
  }
  puVar5 = puVar4;
LAB_18037e764:
  *(undefined8 *)(puVar5 + -8) = 0x18037e76c;
  thunk_FUN_1803d64e0(lVar2);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* ===== 18037e790 FUN_18037e790 ===== */

undefined8 * FUN_18037e790(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = std::_Ref_count_obj2<Concurrency::details::_ExceptionHolder>::vftable;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1803d64e0(param_1,0x48);
  }
  return param_1;
}



/* ===== 18037e7c0 FUN_18037e7c0 ===== */

undefined8 FUN_18037e7c0(undefined8 param_1,ulonglong param_2)

{
  FUN_18037e4f0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1803d64e0(param_1,0x130);
  }
  return param_1;
}



/* ===== 18037e820 FUN_18037e820 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_18037e820(undefined8 *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  int iVar4;
  char cVar5;
  undefined8 ****ppppuVar6;
  undefined8 *puVar7;
  undefined8 *_Buf2;
  undefined8 ****ppppuVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  undefined1 auStack_c8 [32];
  ulonglong local_a8;
  undefined8 ****local_a0;
  undefined8 *local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 ****local_68;
  undefined8 uStack_60;
  ulonglong local_58;
  ulonglong local_50;
  undefined4 local_48;
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStack_c8;
  if (param_1 != param_2) {
    puVar10 = param_1 + 9;
    local_98 = param_2;
    if (puVar10 != param_2) {
LAB_18037e890:
      puVar7 = param_1 + 4;
      local_78 = puVar10[2];
      uStack_70 = puVar10[3];
      local_88 = *puVar10;
      uStack_80 = puVar10[1];
      *(undefined1 *)puVar10 = 0;
      puVar10[2] = 0;
      puVar10[3] = 0xf;
      ppppuVar8 = (undefined8 ****)puVar10[4];
      uStack_60 = puVar10[5];
      local_a8 = puVar10[7];
      uVar1 = puVar10[6];
      *(undefined1 *)(puVar10 + 4) = 0;
      puVar10[6] = 0;
      puVar10[7] = 0xf;
      local_48 = *(undefined4 *)(puVar10 + 8);
      uVar2 = param_1[6];
      if (0xf < (ulonglong)param_1[7]) {
        puVar7 = (undefined8 *)*puVar7;
      }
      ppppuVar6 = &local_68;
      if (0xf < local_a8) {
        ppppuVar6 = ppppuVar8;
      }
      uVar9 = uVar1;
      if (uVar2 < uVar1) {
        uVar9 = uVar2;
      }
      local_a0 = ppppuVar8;
      local_68 = ppppuVar8;
      local_58 = uVar1;
      local_50 = local_a8;
      iVar4 = memcmp(ppppuVar6,puVar7,uVar9);
      if (iVar4 == 0) {
        if (uVar2 <= uVar1) goto LAB_18037e951;
      }
      else {
        cVar5 = -1;
        if (-1 < iVar4) {
          cVar5 = '\x01';
        }
        if (-1 < cVar5) {
LAB_18037e951:
          puVar7 = puVar10;
          do {
            puVar3 = puVar7 + -5;
            uVar2 = puVar7[-3];
            if ((ulonglong)puVar7[-2] < 0x10) {
              _Buf2 = puVar3;
            }
            else {
              _Buf2 = (undefined8 *)*puVar3;
            }
            ppppuVar6 = &local_68;
            if (0xf < local_a8) {
              ppppuVar6 = ppppuVar8;
            }
            uVar9 = uVar1;
            if (uVar2 < uVar1) {
              uVar9 = uVar2;
            }
            iVar4 = memcmp(ppppuVar6,_Buf2,uVar9);
            if (iVar4 == 0) {
              if (uVar1 < uVar2) {
                iVar4 = -1;
              }
              else {
                if (uVar1 <= uVar2) goto LAB_18037ea68;
                iVar4 = 1;
              }
            }
            if (-1 < iVar4) goto LAB_18037ea68;
            FUN_18002ba60(puVar7,puVar7 + -9);
            FUN_18002ba60(puVar7 + 4,puVar3);
            *(undefined4 *)(puVar7 + 8) = *(undefined4 *)(puVar7 + -1);
            ppppuVar8 = local_a0;
            puVar7 = puVar7 + -9;
          } while( true );
        }
      }
      puVar7 = puVar10 + 9;
      for (puVar3 = puVar10; puVar3 != param_1; puVar3 = puVar3 + -9) {
        FUN_18002ba60(puVar7 + -9,puVar3 + -9);
        FUN_18002ba60(puVar7 + -5,puVar3 + -5);
        *(undefined4 *)(puVar7 + -1) = *(undefined4 *)(puVar3 + -1);
        puVar7 = puVar7 + -9;
      }
      FUN_18002ba60(param_1,&local_88);
      FUN_18002ba60(param_1 + 4,&local_68);
      *(undefined4 *)(param_1 + 8) = local_48;
      goto LAB_18037ea8d;
    }
  }
LAB_18037eafd:
  return param_2;
LAB_18037ea68:
  FUN_18002ba60(puVar7,&local_88);
  FUN_18002ba60(puVar7 + 4,&local_68);
  *(undefined4 *)(puVar7 + 8) = local_48;
LAB_18037ea8d:
  FUN_18000f890(&local_68);
  FUN_18000f890(&local_88);
  puVar10 = puVar10 + 9;
  param_2 = local_98;
  if (puVar10 == local_98) goto LAB_18037eafd;
  goto LAB_18037e890;
}



/* ===== 18037eb20 FUN_18037eb20 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_18037eb20(undefined8 *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  int iVar2;
  char cVar3;
  undefined8 ****ppppuVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined8 ****ppppuVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  undefined1 auStack_f8 [32];
  undefined8 *local_d8;
  undefined8 *local_d0;
  undefined8 *local_c8;
  ulonglong local_c0;
  ulonglong local_b8;
  undefined8 ****local_b0;
  undefined8 *local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 ****local_78;
  undefined8 uStack_70;
  ulonglong local_68;
  ulonglong local_60;
  undefined4 local_58;
  undefined1 local_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStack_f8;
  if ((param_1 == param_2) || (puVar11 = param_1 + 0xc, puVar11 == param_2)) {
LAB_18037ee89:
    return param_2;
  }
  puVar6 = param_1 + 4;
  puVar8 = param_1 + 9;
  local_d8 = param_1;
  local_d0 = puVar6;
  local_c8 = puVar8;
  local_a8 = param_2;
LAB_18037eb90:
  local_88 = puVar11[2];
  uStack_80 = puVar11[3];
  local_98 = *puVar11;
  uStack_90 = puVar11[1];
  *(undefined1 *)puVar11 = 0;
  puVar11[2] = 0;
  puVar11[3] = 0xf;
  uStack_70 = puVar11[5];
  ppppuVar9 = (undefined8 ****)puVar11[4];
  uVar10 = puVar11[6];
  local_c0 = puVar11[7];
  *(undefined1 *)(puVar11 + 4) = 0;
  puVar11[6] = 0;
  puVar11[7] = 0xf;
  local_58 = *(undefined4 *)(puVar11 + 8);
  uStack_40 = puVar11[0xb];
  local_48 = puVar11[10];
  local_54 = *(undefined1 *)((longlong)puVar11 + 0x44);
  puVar11[0xb] = 0;
  puVar11[10] = 0;
  local_50 = puVar11[9];
  puVar11[9] = 0;
  uVar1 = param_1[6];
  if ((ulonglong)param_1[7] < 0x10) {
    puVar5 = puVar6;
  }
  else {
    puVar5 = (undefined8 *)*puVar6;
  }
  ppppuVar4 = &local_78;
  if (0xf < local_c0) {
    ppppuVar4 = ppppuVar9;
  }
  uVar7 = uVar10;
  if (uVar1 < uVar10) {
    uVar7 = uVar1;
  }
  local_b8 = uVar10;
  local_b0 = ppppuVar9;
  local_78 = ppppuVar9;
  local_68 = uVar10;
  local_60 = local_c0;
  iVar2 = memcmp(ppppuVar4,puVar5,uVar7);
  if (iVar2 == 0) {
    if (uVar1 <= uVar10) goto LAB_18037ec6b;
  }
  else {
    cVar3 = -1;
    if (-1 < iVar2) {
      cVar3 = '\x01';
    }
    if (-1 < cVar3) {
LAB_18037ec6b:
      puVar6 = puVar11;
      do {
        puVar8 = puVar6 + -8;
        uVar1 = puVar6[-6];
        if ((ulonglong)puVar6[-5] < 0x10) {
          puVar5 = puVar8;
        }
        else {
          puVar5 = (undefined8 *)*puVar8;
        }
        ppppuVar4 = &local_78;
        if (0xf < local_c0) {
          ppppuVar4 = ppppuVar9;
        }
        uVar7 = uVar10;
        if (uVar1 < uVar10) {
          uVar7 = uVar1;
        }
        iVar2 = memcmp(ppppuVar4,puVar5,uVar7);
        if (iVar2 == 0) {
          if (uVar10 < uVar1) {
            iVar2 = -1;
          }
          else {
            if (uVar10 <= uVar1) goto LAB_18037edbb;
            iVar2 = 1;
          }
        }
        if (-1 < iVar2) goto LAB_18037edbb;
        puVar5 = puVar6 + -0xc;
        FUN_18002ba60(puVar6,puVar5);
        FUN_18002ba60(puVar6 + 4,puVar8);
        *(undefined4 *)(puVar6 + 8) = *(undefined4 *)(puVar6 + -4);
        *(undefined1 *)((longlong)puVar6 + 0x44) = *(undefined1 *)((longlong)puVar6 + -0x1c);
        if (puVar6 != puVar5) {
          FUN_18037e6d0(puVar6 + 9);
          puVar6[9] = puVar6[-3];
          puVar6[10] = puVar6[-2];
          puVar6[0xb] = puVar6[-1];
          puVar6[-3] = 0;
          puVar6[-2] = 0;
          puVar6[-1] = 0;
        }
        puVar6 = puVar5;
        ppppuVar9 = local_b0;
        uVar10 = local_b8;
      } while( true );
    }
  }
  FUN_180380940(param_1,puVar11,puVar11 + 0xc);
  FUN_18002ba60(param_1,&local_98);
  FUN_18002ba60(puVar6,&local_78);
  *(undefined4 *)(param_1 + 8) = local_58;
  *(undefined1 *)((longlong)param_1 + 0x44) = local_54;
  if (puVar8 != &local_50) {
    FUN_18037e6d0(puVar8);
    *puVar8 = local_50;
    param_1[10] = local_48;
    param_1[0xb] = uStack_40;
    local_50 = 0;
    local_48 = 0;
    uStack_40 = 0;
  }
  goto LAB_18037ee24;
LAB_18037edbb:
  puVar8 = puVar6 + 9;
  FUN_18002ba60(puVar6,&local_98);
  FUN_18002ba60(puVar6 + 4,&local_78);
  *(undefined4 *)(puVar6 + 8) = local_58;
  *(undefined1 *)((longlong)puVar6 + 0x44) = local_54;
  if (puVar8 != &local_50) {
    FUN_18037e6d0(puVar8);
    *puVar8 = local_50;
    puVar6[10] = local_48;
    puVar6[0xb] = uStack_40;
    local_50 = 0;
    local_48 = 0;
    uStack_40 = 0;
  }
  puVar6 = local_d0;
  param_1 = local_d8;
  puVar8 = local_c8;
LAB_18037ee24:
  FUN_18037e6d0(&local_50);
  FUN_18000f890(&local_78);
  FUN_18000f890(&local_98);
  puVar11 = puVar11 + 0xc;
  param_2 = local_a8;
  if (puVar11 == local_a8) goto LAB_18037ee89;
  goto LAB_18037eb90;
}



/* ===== 18037eeb0 FUN_18037eeb0 ===== */

undefined8 *
FUN_18037eeb0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,ulonglong param_4)

{
  undefined8 *puVar1;
  size_t _Size;
  ulonglong uVar2;
  int iVar3;
  undefined8 *_Buf1;
  undefined8 *_Buf2;
  undefined8 *puVar4;
  
  puVar4 = *(undefined8 **)(DAT_181108138 + 8 + (DAT_181108150 & param_4) * 0x10);
  if (puVar4 == DAT_181108128) {
    *param_2 = DAT_181108128;
    param_2[1] = 0;
    return param_2;
  }
  puVar1 = *(undefined8 **)(DAT_181108138 + (DAT_181108150 & param_4) * 0x10);
  _Size = param_3[2];
  uVar2 = param_3[3];
  while( true ) {
    _Buf2 = puVar4 + 2;
    if (0xf < (ulonglong)puVar4[5]) {
      _Buf2 = (undefined8 *)*_Buf2;
    }
    if (uVar2 < 0x10) {
      _Buf1 = param_3;
    }
    else {
      _Buf1 = (undefined8 *)*param_3;
    }
    if ((_Size == puVar4[4]) && ((_Size == 0 || (iVar3 = memcmp(_Buf1,_Buf2,_Size), iVar3 == 0))))
    break;
    if (puVar4 == puVar1) {
      *param_2 = puVar4;
      param_2[1] = 0;
      return param_2;
    }
    puVar4 = (undefined8 *)puVar4[1];
  }
  *param_2 = *puVar4;
  param_2[1] = puVar4;
  return param_2;
}



/* ===== 18037ef90 FUN_18037ef90 ===== */

undefined8 * FUN_18037ef90(undefined8 param_1,ulonglong param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  uVar12 = (ulonglong)DAT_181108108;
  uVar17 = 0x2aaaaaaaaaaaaaa;
  lVar9 = ((longlong)DAT_181108110 - (longlong)DAT_181108108 >> 5) * -0x5555555555555555;
  if (lVar9 == 0x2aaaaaaaaaaaaaa) {
                    /* WARNING: Subroutine does not return */
    FUN_1800118d0();
  }
  uVar1 = lVar9 + 1;
  uVar11 = ((longlong)DAT_181108118 - (longlong)DAT_181108108 >> 5) * -0x5555555555555555;
  if (uVar11 <= 0x2aaaaaaaaaaaaaa - (uVar11 >> 1)) {
    uVar11 = (uVar11 >> 1) + uVar11;
    uVar17 = uVar1;
    if (uVar1 <= uVar11) {
      uVar17 = uVar11;
    }
    if (0x2aaaaaaaaaaaaaa < uVar17) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  puVar10 = (undefined8 *)FUN_18000fb70(uVar17 * 0x60);
  puVar15 = puVar10 + ((longlong)(param_2 - uVar12) / 0x60) * 0xc;
  *puVar15 = 0;
  puVar15[1] = 0;
  puVar15[2] = 0;
  puVar15[3] = 0;
  uVar2 = param_3[1];
  *puVar15 = *param_3;
  puVar15[1] = uVar2;
  uVar2 = param_3[3];
  puVar15[2] = param_3[2];
  puVar15[3] = uVar2;
  param_3[2] = 0;
  *(undefined1 *)param_3 = 0;
  param_3[3] = 0xf;
  puVar15[4] = 0;
  puVar15[5] = 0;
  puVar15[6] = 0;
  puVar15[7] = 0;
  uVar6 = *(undefined4 *)((longlong)param_3 + 0x24);
  uVar7 = *(undefined4 *)(param_3 + 5);
  uVar8 = *(undefined4 *)((longlong)param_3 + 0x2c);
  *(undefined4 *)(puVar15 + 4) = *(undefined4 *)(param_3 + 4);
  *(undefined4 *)((longlong)puVar15 + 0x24) = uVar6;
  *(undefined4 *)(puVar15 + 5) = uVar7;
  *(undefined4 *)((longlong)puVar15 + 0x2c) = uVar8;
  uVar6 = *(undefined4 *)((longlong)param_3 + 0x34);
  uVar7 = *(undefined4 *)(param_3 + 7);
  uVar8 = *(undefined4 *)((longlong)param_3 + 0x3c);
  *(undefined4 *)(puVar15 + 6) = *(undefined4 *)(param_3 + 6);
  *(undefined4 *)((longlong)puVar15 + 0x34) = uVar6;
  *(undefined4 *)(puVar15 + 7) = uVar7;
  *(undefined4 *)((longlong)puVar15 + 0x3c) = uVar8;
  param_3[6] = 0;
  *(undefined1 *)(param_3 + 4) = 0;
  param_3[7] = 0xf;
  *(undefined4 *)(puVar15 + 8) = *(undefined4 *)(param_3 + 8);
  *(undefined1 *)((longlong)puVar15 + 0x44) = *(undefined1 *)((longlong)param_3 + 0x44);
  uVar2 = param_3[0xb];
  uVar3 = param_3[10];
  uVar4 = param_3[9];
  param_3[0xb] = 0;
  param_3[10] = 0;
  param_3[9] = 0;
  puVar15[9] = uVar4;
  puVar15[10] = uVar3;
  puVar15[0xb] = uVar2;
  uVar12 = (ulonglong)DAT_181108108;
  puVar16 = puVar10;
  if ((undefined8 *)param_2 != DAT_181108110) {
    FUN_180381500(DAT_181108108,param_2,puVar10);
    puVar16 = puVar15 + 0xc;
    uVar12 = param_2;
  }
  puVar13 = auStack_48;
  puVar14 = auStack_48;
  FUN_180381500(uVar12,DAT_181108110,puVar16);
  uVar11 = (ulonglong)DAT_181108110;
  uVar12 = (ulonglong)DAT_181108108;
  if (DAT_181108108 == (undefined8 *)0x0) goto LAB_18037f1c3;
  for (; uVar12 != uVar11; uVar12 = uVar12 + 0x60) {
    FUN_18037e6d0(uVar12 + 0x48);
    FUN_18000f890(uVar12 + 0x20);
    FUN_18000f890(uVar12);
  }
  uVar12 = (ulonglong)DAT_181108108;
  if ((ulonglong)(((longlong)DAT_181108118 - (longlong)DAT_181108108 >> 5) << 5) < 0x1000) {
LAB_18037f1bb:
    puVar14 = puVar13;
  }
  else {
    uVar12 = *(ulonglong *)((longlong)DAT_181108108 - 8);
    uVar11 = ((longlong)DAT_181108108 - uVar12) - 8;
    if (0x1f < uVar11) {
      pcVar5 = (code *)swi(0x29);
      (*pcVar5)(5);
      puVar13 = auStack_40;
      uVar12 = uVar11;
      goto LAB_18037f1bb;
    }
  }
  *(undefined8 *)(puVar14 + -8) = 0x18037f1c3;
  thunk_FUN_1803d64e0(uVar12);
LAB_18037f1c3:
  DAT_181108108 = puVar10;
  DAT_181108110 = puVar10 + uVar1 * 0xc;
  DAT_181108118 = puVar10 + uVar17 * 0xc;
  return puVar15;
}



/* ===== 18037f220 FUN_18037f220 ===== */

undefined8 * FUN_18037f220(undefined8 param_1,ulonglong param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  uVar11 = (ulonglong)DAT_181107f38;
  uVar15 = 0x38e38e38e38e38e;
  lVar8 = ((longlong)DAT_181107f40 - (longlong)DAT_181107f38 >> 3) * -0x71c71c71c71c71c7;
  if (lVar8 == 0x38e38e38e38e38e) {
                    /* WARNING: Subroutine does not return */
    FUN_1800118d0();
  }
  uVar1 = lVar8 + 1;
  uVar10 = ((longlong)DAT_181107f48 - (longlong)DAT_181107f38 >> 3) * -0x71c71c71c71c71c7;
  if (uVar10 <= 0x38e38e38e38e38e - (uVar10 >> 1)) {
    uVar10 = (uVar10 >> 1) + uVar10;
    uVar15 = uVar1;
    if (uVar1 <= uVar10) {
      uVar15 = uVar10;
    }
    if (0x38e38e38e38e38e < uVar15) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  puVar9 = (undefined8 *)FUN_18000fb70(uVar15 * 0x48);
  lVar8 = (longlong)(param_2 - uVar11) / 0x48;
  puVar9[lVar8 * 9] = 0;
  (puVar9 + lVar8 * 9)[1] = 0;
  puVar9[lVar8 * 9 + 2] = 0;
  puVar2 = puVar9 + lVar8 * 9;
  puVar2[3] = 0;
  uVar7 = param_3[1];
  *puVar2 = *param_3;
  puVar2[1] = uVar7;
  uVar7 = param_3[3];
  puVar2[2] = param_3[2];
  puVar2[3] = uVar7;
  param_3[2] = 0;
  param_3[3] = 0xf;
  *(undefined1 *)param_3 = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  uVar4 = *(undefined4 *)((longlong)param_3 + 0x24);
  uVar5 = *(undefined4 *)(param_3 + 5);
  uVar6 = *(undefined4 *)((longlong)param_3 + 0x2c);
  *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(param_3 + 4);
  *(undefined4 *)((longlong)puVar2 + 0x24) = uVar4;
  *(undefined4 *)(puVar2 + 5) = uVar5;
  *(undefined4 *)((longlong)puVar2 + 0x2c) = uVar6;
  uVar4 = *(undefined4 *)((longlong)param_3 + 0x34);
  uVar5 = *(undefined4 *)(param_3 + 7);
  uVar6 = *(undefined4 *)((longlong)param_3 + 0x3c);
  *(undefined4 *)(puVar2 + 6) = *(undefined4 *)(param_3 + 6);
  *(undefined4 *)((longlong)puVar2 + 0x34) = uVar4;
  *(undefined4 *)(puVar2 + 7) = uVar5;
  *(undefined4 *)((longlong)puVar2 + 0x3c) = uVar6;
  param_3[6] = 0;
  param_3[7] = 0xf;
  *(undefined1 *)(param_3 + 4) = 0;
  *(undefined4 *)(puVar2 + 8) = *(undefined4 *)(param_3 + 8);
  uVar11 = (ulonglong)DAT_181107f38;
  puVar14 = puVar9;
  if ((undefined8 *)param_2 != DAT_181107f40) {
    FUN_18026e4d0(DAT_181107f38,param_2,puVar9);
    puVar14 = puVar2 + 9;
    uVar11 = param_2;
  }
  puVar12 = auStack_48;
  puVar13 = auStack_48;
  FUN_18026e4d0(uVar11,DAT_181107f40,puVar14);
  uVar10 = (ulonglong)DAT_181107f40;
  uVar11 = (ulonglong)DAT_181107f38;
  if (DAT_181107f38 == (undefined8 *)0x0) goto LAB_18037f41e;
  for (; uVar11 != uVar10; uVar11 = uVar11 + 0x48) {
    FUN_18000f890(uVar11 + 0x20);
    FUN_18000f890(uVar11);
  }
  uVar11 = (ulonglong)DAT_181107f38;
  if ((ulonglong)(((longlong)DAT_181107f48 - (longlong)DAT_181107f38 >> 3) * 8) < 0x1000) {
LAB_18037f416:
    puVar13 = puVar12;
  }
  else {
    uVar11 = *(ulonglong *)((longlong)DAT_181107f38 - 8);
    uVar10 = ((longlong)DAT_181107f38 - uVar11) - 8;
    if (0x1f < uVar10) {
      pcVar3 = (code *)swi(0x29);
      (*pcVar3)(5);
      puVar12 = auStack_40;
      uVar11 = uVar10;
      goto LAB_18037f416;
    }
  }
  *(undefined8 *)(puVar13 + -8) = 0x18037f41e;
  thunk_FUN_1803d64e0(uVar11);
LAB_18037f41e:
  DAT_181107f38 = puVar9;
  DAT_181107f40 = puVar9 + uVar1 * 9;
  DAT_181107f48 = puVar9 + uVar15 * 9;
  return puVar2;
}



/* ===== 18037f470 FUN_18037f470 ===== */

undefined8 * FUN_18037f470(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  
  lVar9 = *param_1;
  uVar10 = 0x333333333333333;
  lVar6 = (param_1[1] - lVar9 >> 4) * -0x3333333333333333;
  if (lVar6 == 0x333333333333333) {
                    /* WARNING: Subroutine does not return */
    FUN_1800118d0();
  }
  uVar1 = lVar6 + 1;
  uVar8 = (param_1[2] - lVar9 >> 4) * -0x3333333333333333;
  if (uVar8 <= 0x333333333333333 - (uVar8 >> 1)) {
    uVar8 = (uVar8 >> 1) + uVar8;
    uVar10 = uVar1;
    if (uVar1 <= uVar8) {
      uVar10 = uVar8;
    }
    if (0x333333333333333 < uVar10) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  puVar7 = (undefined8 *)FUN_18000fb70(uVar10 * 0x50);
  puVar11 = puVar7 + ((param_2 - lVar9) / 0x50) * 10;
  *puVar11 = 0;
  puVar11[1] = 0;
  puVar11[2] = 0;
  puVar11[3] = 0;
  uVar5 = param_3[1];
  *puVar11 = *param_3;
  puVar11[1] = uVar5;
  uVar5 = param_3[3];
  puVar11[2] = param_3[2];
  puVar11[3] = uVar5;
  param_3[2] = 0;
  param_3[3] = 0xf;
  *(undefined1 *)param_3 = 0;
  puVar11[4] = 0;
  puVar11[5] = 0;
  puVar11[6] = 0;
  puVar11[7] = 0;
  uVar2 = *(undefined4 *)((longlong)param_3 + 0x24);
  uVar3 = *(undefined4 *)(param_3 + 5);
  uVar4 = *(undefined4 *)((longlong)param_3 + 0x2c);
  *(undefined4 *)(puVar11 + 4) = *(undefined4 *)(param_3 + 4);
  *(undefined4 *)((longlong)puVar11 + 0x24) = uVar2;
  *(undefined4 *)(puVar11 + 5) = uVar3;
  *(undefined4 *)((longlong)puVar11 + 0x2c) = uVar4;
  uVar2 = *(undefined4 *)((longlong)param_3 + 0x34);
  uVar3 = *(undefined4 *)(param_3 + 7);
  uVar4 = *(undefined4 *)((longlong)param_3 + 0x3c);
  *(undefined4 *)(puVar11 + 6) = *(undefined4 *)(param_3 + 6);
  *(undefined4 *)((longlong)puVar11 + 0x34) = uVar2;
  *(undefined4 *)(puVar11 + 7) = uVar3;
  *(undefined4 *)((longlong)puVar11 + 0x3c) = uVar4;
  param_3[6] = 0;
  param_3[7] = 0xf;
  *(undefined1 *)(param_3 + 4) = 0;
  *(undefined4 *)(puVar11 + 8) = *(undefined4 *)(param_3 + 8);
  *(undefined4 *)((longlong)puVar11 + 0x44) = *(undefined4 *)((longlong)param_3 + 0x44);
  *(undefined4 *)(puVar11 + 9) = *(undefined4 *)(param_3 + 9);
  lVar9 = param_1[1];
  lVar6 = *param_1;
  puVar12 = puVar7;
  if (param_2 != lVar9) {
    FUN_1803815d0(*param_1,param_2,puVar7);
    lVar9 = param_1[1];
    puVar7 = puVar11 + 10;
    lVar6 = param_2;
  }
  FUN_1803815d0(lVar6,lVar9,puVar7);
  FUN_180381c20(param_1,puVar12,uVar1,uVar10);
  return puVar11;
}



/* ===== 18037f620 FUN_18037f620 ===== */

longlong FUN_18037f620(longlong *param_1,longlong param_2,longlong param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  
  lVar2 = *param_1;
  lVar3 = (param_1[1] - lVar2 >> 4) * -0x3333333333333333;
  uVar7 = 0x333333333333333;
  if (lVar3 == 0x333333333333333) {
                    /* WARNING: Subroutine does not return */
    FUN_1800118d0();
  }
  uVar1 = lVar3 + 1;
  uVar5 = (param_1[2] - lVar2 >> 4) * -0x3333333333333333;
  if (uVar5 <= 0x333333333333333 - (uVar5 >> 1)) {
    uVar5 = (uVar5 >> 1) + uVar5;
    uVar7 = uVar1;
    if (uVar1 <= uVar5) {
      uVar7 = uVar5;
    }
    if (0x333333333333333 < uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  lVar4 = FUN_18000fb70(uVar7 * 0x50);
  lVar9 = ((param_2 - lVar2) / 0x50) * 0x50 + lVar4;
  lVar2 = lVar9 + 0x50;
  plVar10 = param_1;
  lVar11 = lVar4;
  uVar5 = uVar7;
  lVar12 = lVar2;
  lVar13 = lVar2;
  FUN_180024b50(lVar9,param_3);
  FUN_180024b50(lVar9 + 0x20,param_3 + 0x20);
  *(undefined4 *)(lVar9 + 0x40) = *(undefined4 *)(param_3 + 0x40);
  *(undefined4 *)(lVar9 + 0x44) = *(undefined4 *)(param_3 + 0x44);
  *(undefined4 *)(lVar9 + 0x48) = *(undefined4 *)(param_3 + 0x48);
  lVar3 = param_1[1];
  lVar6 = *param_1;
  lVar8 = lVar4;
  if (param_2 != lVar3) {
    FUN_1803815d0(*param_1,param_2,lVar4);
    lVar3 = param_1[1];
    lVar6 = param_2;
    lVar8 = lVar2;
  }
  FUN_1803815d0(lVar6,lVar3,lVar8);
  FUN_180381c20(param_1,lVar4,uVar1,uVar7,plVar10,lVar11,uVar5,lVar12,lVar13);
  return lVar9;
}



/* ===== 18037f7a0 FUN_18037f7a0 ===== */

void FUN_18037f7a0(longlong param_1)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_18000f890(*(longlong *)(param_1 + 8) + 0x10);
  }
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  thunk_FUN_1803d64e0(*(longlong *)(param_1 + 8),0x48);
  return;
}



/* ===== 18037f7e0 FUN_18037f7e0 ===== */

longlong * FUN_18037f7e0(longlong *param_1,char param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *local_28;
  char local_20;
  undefined1 local_18 [16];
  
  if (param_1[0x2e] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_180371e20();
  }
  FUN_180372330();
  local_28 = param_1 + 0x10;
  local_20 = 0;
  iVar2 = FUN_1804e4d70();
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (*(int *)((longlong)param_1 + 0xcc) == 0x7fffffff) {
    *(undefined4 *)((longlong)param_1 + 0xcc) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  local_20 = '\x01';
  if ((param_2 != '\0') && ((char)param_1[0x23] != '\0')) {
                    /* WARNING: Subroutine does not return */
    FUN_180372cb0(2);
  }
  cVar1 = FUN_1804ec300(param_1 + 0xe);
  if (cVar1 != '\0') {
    uVar3 = FUN_1803716a0(local_18,param_1 + 0xe);
                    /* WARNING: Subroutine does not return */
    FUN_1803716f0(uVar3);
  }
  *(undefined1 *)(param_1 + 0x23) = 1;
  if (*(char *)((longlong)param_1 + 0x122) == '\0') {
    *(undefined1 *)((longlong)param_1 + 0x122) = 1;
    (**(code **)(*param_1 + 0x20))(param_1,&local_28);
  }
  iVar2 = *(int *)((longlong)param_1 + 0x11c);
  while (iVar2 == 0) {
    FUN_1804eb6e0(param_1 + 0x1a,local_28);
    iVar2 = *(int *)((longlong)param_1 + 0x11c);
  }
  cVar1 = FUN_1804ec300(param_1 + 0xe);
  if (cVar1 != '\0') {
    uVar3 = FUN_1803716a0(local_18,param_1 + 0xe);
                    /* WARNING: Subroutine does not return */
    FUN_1803716f0(uVar3);
  }
  if (local_20 != '\0') {
    FUN_1804e4e90(local_28);
  }
  return param_1 + 2;
}



/* ===== 18037f940 FUN_18037f940 ===== */

void FUN_18037f940(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x170) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_180371e20();
  }
  FUN_180372330();
  return;
}



/* ===== 18037f960 FUN_18037f960 ===== */

longlong FUN_18037f960(longlong *param_1,char param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *local_28;
  char local_20;
  undefined1 local_18 [16];
  
  if (param_1[0x22] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_180371e20();
  }
  FUN_180372330();
  local_28 = param_1 + 4;
  local_20 = 0;
  iVar2 = FUN_1804e4d70();
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (*(int *)((longlong)param_1 + 0x6c) == 0x7fffffff) {
    *(undefined4 *)((longlong)param_1 + 0x6c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  local_20 = '\x01';
  if ((param_2 != '\0') && ((char)param_1[0x17] != '\0')) {
                    /* WARNING: Subroutine does not return */
    FUN_180372cb0(2);
  }
  cVar1 = FUN_1804ec300(param_1 + 2);
  if (cVar1 != '\0') {
    uVar3 = FUN_1803716a0(local_18,param_1 + 2);
                    /* WARNING: Subroutine does not return */
    FUN_1803716f0(uVar3);
  }
  *(undefined1 *)(param_1 + 0x17) = 1;
  if (*(char *)((longlong)param_1 + 0xc2) == '\0') {
    *(undefined1 *)((longlong)param_1 + 0xc2) = 1;
    (**(code **)(*param_1 + 0x20))(param_1,&local_28);
  }
  iVar2 = *(int *)((longlong)param_1 + 0xbc);
  while (iVar2 == 0) {
    FUN_1804eb6e0(param_1 + 0xe,local_28);
    iVar2 = *(int *)((longlong)param_1 + 0xbc);
  }
  cVar1 = FUN_1804ec300(param_1 + 2);
  if (cVar1 != '\0') {
    uVar3 = FUN_1803716a0(local_18,param_1 + 2);
                    /* WARNING: Subroutine does not return */
    FUN_1803716f0(uVar3);
  }
  if (local_20 != '\0') {
    FUN_1804e4e90(local_28);
  }
  return (longlong)param_1 + 0xc;
}



/* ===== 18037fac0 FUN_18037fac0 ===== */

void FUN_18037fac0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x110) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_180371e20();
  }
  FUN_180372330();
  return;
}



/* ===== 18037fae0 FUN_18037fae0 ===== */

void FUN_18037fae0(longlong param_1,char param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x40);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_1 + 8));
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  if (param_2 != '\0') {
    thunk_FUN_1803d64e0(param_1,0x48);
  }
  return;
}



