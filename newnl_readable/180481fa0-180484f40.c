/* ===== 180481fa0 _vswprintf_c_l ===== */

int __cdecl
_vswprintf_c_l(wchar_t *_String,size_t _Count,wchar_t *_Format,_locale_t _Plocinfo,va_list _Ap)

{
  int iVar1;
  undefined8 *puVar2;
  
                    /* 0x481fa0  108  _vswprintf_c_l
                       0x481fa0  109  _vswprintf_l */
  puVar2 = (undefined8 *)FUN_180013640();
  iVar1 = FUN_180501d24(*puVar2,_String,_Count,_Format,_Plocinfo,_Ap);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}



/* ===== 180481ff0 _vswprintf_p ===== */

int __cdecl _vswprintf_p(wchar_t *_DstBuf,size_t _MaxCount,wchar_t *_Format,va_list _ArgList)

{
  int iVar1;
  undefined8 *puVar2;
  
                    /* 0x481ff0  110  _vswprintf_p */
  puVar2 = (undefined8 *)FUN_180013640();
  iVar1 = FUN_180501f80(*puVar2,_DstBuf,_MaxCount,_Format,0,_ArgList);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}



/* ===== 180482040 _vswprintf_p_l ===== */

int __cdecl
_vswprintf_p_l(wchar_t *_DstBuf,size_t _MaxCount,wchar_t *_Format,_locale_t _Locale,va_list _ArgList
              )

{
  int iVar1;
  undefined8 *puVar2;
  
                    /* 0x482040  111  _vswprintf_p_l */
  puVar2 = (undefined8 *)FUN_180013640();
  iVar1 = FUN_180501f80(*puVar2,_DstBuf,_MaxCount,_Format,_Locale,_ArgList);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}



/* ===== 180482090 _vswprintf_s_l ===== */

int __cdecl
_vswprintf_s_l(wchar_t *_DstBuf,size_t _DstSize,wchar_t *_Format,_locale_t _Locale,va_list _ArgList)

{
  int iVar1;
  undefined8 *puVar2;
  
                    /* 0x482090  112  _vswprintf_s_l */
  puVar2 = (undefined8 *)FUN_180013640();
  iVar1 = FUN_180502038(*puVar2,_DstBuf,_DstSize,_Format,_Locale,_ArgList);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}



/* ===== 1804820e0 _vswscanf_l ===== */

void _vswscanf_l(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
                    /* 0x4820e0  113  _vswscanf_l */
  puVar1 = (undefined8 *)FUN_180013650();
  FUN_18050fb68(*puVar1,param_1,0xffffffffffffffff,param_2,param_3,param_4);
  return;
}



/* ===== 180482130 _vswscanf_s_l ===== */

void _vswscanf_s_l(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  
                    /* 0x482130  114  _vswscanf_s_l */
  puVar1 = (ulonglong *)FUN_180013650();
  FUN_18050fb68(*puVar1 | 1,param_1,0xffffffffffffffff,param_2,param_3,param_4);
  return;
}



/* ===== 180482180 _vwprintf_l ===== */

int __cdecl _vwprintf_l(wchar_t *_Format,_locale_t _Locale,va_list _ArgList)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  
                    /* 0x482180  115  _vwprintf_l */
  uVar1 = __acrt_iob_func(1);
  puVar2 = (undefined8 *)FUN_180013640();
  iVar3 = FUN_180501210(*puVar2,uVar1,_Format,_Locale,_ArgList);
  return iVar3;
}



/* ===== 1804821d0 _vwprintf_p ===== */

int __cdecl _vwprintf_p(wchar_t *_Format,va_list _ArgList)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  
                    /* 0x4821d0  116  _vwprintf_p */
  uVar1 = __acrt_iob_func(1);
  puVar2 = (undefined8 *)FUN_180013640();
  iVar3 = FUN_180501334(*puVar2,uVar1,_Format,0,_ArgList);
  return iVar3;
}



/* ===== 180482220 _vwprintf_p_l ===== */

int __cdecl _vwprintf_p_l(wchar_t *_Format,_locale_t _Locale,va_list _ArgList)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  
                    /* 0x482220  117  _vwprintf_p_l */
  uVar1 = __acrt_iob_func(1);
  puVar2 = (undefined8 *)FUN_180013640();
  iVar3 = FUN_180501334(*puVar2,uVar1,_Format,_Locale,_ArgList);
  return iVar3;
}



/* ===== 180482270 _vwprintf_s_l ===== */

int __cdecl _vwprintf_s_l(wchar_t *_Format,_locale_t _Locale,va_list _ArgList)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  
                    /* 0x482270  118  _vwprintf_s_l */
  uVar1 = __acrt_iob_func(1);
  puVar2 = (undefined8 *)FUN_180013640();
  iVar3 = FUN_180501458(*puVar2,uVar1,_Format,_Locale,_ArgList);
  return iVar3;
}



/* ===== 1804822c0 _vwscanf_l ===== */

void _vwscanf_l(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
                    /* 0x4822c0  119  _vwscanf_l */
  uVar1 = __acrt_iob_func(0);
  puVar2 = (undefined8 *)FUN_180013650();
  FID_conflict___stdio_common_vfwscanf(*puVar2,uVar1,param_1,param_2,param_3);
  return;
}



/* ===== 180482300 _vwscanf_s_l ===== */

void _vwscanf_s_l(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulonglong *puVar2;
  
                    /* 0x482300  120  _vwscanf_s_l */
  uVar1 = __acrt_iob_func(0);
  puVar2 = (ulonglong *)FUN_180013650();
  FID_conflict___stdio_common_vfwscanf(*puVar2 | 1,uVar1,param_1,param_2,param_3);
  return;
}



/* ===== 180482350 _wprintf_l ===== */

int __cdecl _wprintf_l(wchar_t *_Format,_locale_t _Locale,...)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 in_R8;
  undefined8 in_R9;
  undefined8 local_res18;
  undefined8 local_res20;
  
                    /* 0x482350  121  _wprintf_l */
  local_res18 = in_R8;
  local_res20 = in_R9;
  uVar1 = __acrt_iob_func(1);
  puVar2 = (undefined8 *)FUN_180013640();
  iVar3 = FUN_180501210(*puVar2,uVar1,_Format,_Locale,&local_res18);
  return iVar3;
}



/* ===== 1804823b0 _wprintf_p ===== */

int __cdecl _wprintf_p(wchar_t *_Format,...)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 in_RDX;
  undefined8 in_R8;
  undefined8 in_R9;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  
                    /* 0x4823b0  122  _wprintf_p */
  local_res10 = in_RDX;
  local_res18 = in_R8;
  local_res20 = in_R9;
  uVar1 = __acrt_iob_func(1);
  puVar2 = (undefined8 *)FUN_180013640();
  iVar3 = FUN_180501334(*puVar2,uVar1,_Format,0,&local_res10);
  return iVar3;
}



/* ===== 180482410 _wprintf_p_l ===== */

int __cdecl _wprintf_p_l(wchar_t *_Format,_locale_t _Locale,...)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 in_R8;
  undefined8 in_R9;
  undefined8 local_res18;
  undefined8 local_res20;
  
                    /* 0x482410  123  _wprintf_p_l */
  local_res18 = in_R8;
  local_res20 = in_R9;
  uVar1 = __acrt_iob_func(1);
  puVar2 = (undefined8 *)FUN_180013640();
  iVar3 = FUN_180501334(*puVar2,uVar1,_Format,_Locale,&local_res18);
  return iVar3;
}



/* ===== 180482470 _wprintf_s_l ===== */

int __cdecl _wprintf_s_l(wchar_t *_Format,_locale_t _Locale,...)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 in_R8;
  undefined8 in_R9;
  undefined8 local_res18;
  undefined8 local_res20;
  
                    /* 0x482470  124  _wprintf_s_l */
  local_res18 = in_R8;
  local_res20 = in_R9;
  uVar1 = __acrt_iob_func(1);
  puVar2 = (undefined8 *)FUN_180013640();
  iVar3 = FUN_180501458(*puVar2,uVar1,_Format,_Locale,&local_res18);
  return iVar3;
}



/* ===== 1804824d0 _wscanf_l ===== */

int __cdecl _wscanf_l(wchar_t *_Format,_locale_t _Locale,...)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 in_R8;
  undefined8 in_R9;
  undefined8 local_res18;
  undefined8 local_res20;
  
                    /* 0x4824d0  125  _wscanf_l */
  local_res18 = in_R8;
  local_res20 = in_R9;
  uVar1 = __acrt_iob_func(0);
  puVar2 = (undefined8 *)FUN_180013650();
  iVar3 = FID_conflict___stdio_common_vfwscanf(*puVar2,uVar1,_Format,_Locale,&local_res18);
  return iVar3;
}



/* ===== 180482520 _wscanf_s_l ===== */

int __cdecl _wscanf_s_l(wchar_t *_Format,_locale_t _Locale,...)

{
  undefined8 uVar1;
  ulonglong *puVar2;
  int iVar3;
  undefined8 in_R8;
  undefined8 in_R9;
  undefined8 local_res18;
  undefined8 local_res20;
  
                    /* 0x482520  126  _wscanf_s_l */
  local_res18 = in_R8;
  local_res20 = in_R9;
  uVar1 = __acrt_iob_func(0);
  puVar2 = (ulonglong *)FUN_180013650();
  iVar3 = FID_conflict___stdio_common_vfwscanf(*puVar2 | 1,uVar1,_Format,_Locale,&local_res18);
  return iVar3;
}



/* ===== 180482580 FUN_180482580 ===== */

undefined8 FUN_180482580(longlong param_1,undefined8 param_2,longlong param_3)

{
  ulonglong *puVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  ulonglong uVar5;
  char cVar6;
  char *pcVar7;
  char cVar8;
  
  *(undefined4 *)(*(longlong *)(param_1 + 0x50) + 0x54) = 0xffffffff;
  iVar4 = FUN_18049b1d0(param_1,param_3);
  pcVar7 = *(char **)(param_3 + 0x88);
  if (pcVar7 == (char *)0x0) {
LAB_18048260f:
    if (iVar4 == 0) {
      uVar5 = FUN_1804a22c0(param_3);
    }
    else {
      uVar5 = FUN_18049c720();
    }
    if (*(int *)(param_3 + 0xb4) == 1) {
      uVar5 = FUN_180493b80(param_1,uVar5,*(undefined8 *)(param_1 + 0x48));
      puVar1 = *(ulonglong **)(param_1 + 0x28);
      *(ulonglong **)(param_1 + 0x28) = puVar1 + 1;
      *puVar1 = uVar5 | 0xfffb800000000000;
      return 0;
    }
    puVar1 = *(ulonglong **)(param_1 + 0x28);
    *(ulonglong **)(param_1 + 0x28) = puVar1 + 1;
    *puVar1 = uVar5 | 0xfffc000000000000;
    return 0;
  }
  cVar6 = *pcVar7;
  if (cVar6 != '\0') {
    cVar8 = 't';
    if (iVar4 != 0) {
      cVar8 = 'b';
    }
    bVar3 = true;
    do {
      pcVar7 = pcVar7 + 1;
      bVar2 = false;
      if (cVar6 != cVar8) {
        bVar2 = bVar3;
      }
      if (cVar6 == 'W') {
        *(undefined4 *)(param_3 + 0xb4) = 0;
      }
      cVar6 = *pcVar7;
      bVar3 = bVar2;
    } while (cVar6 != '\0');
    if (!bVar2) goto LAB_18048260f;
  }
  puVar1 = *(ulonglong **)(param_1 + 0x28);
  *(ulonglong **)(param_1 + 0x28) = puVar1 + 1;
  uVar5 = FUN_1804848e0(param_1,0x898);
  *puVar1 = uVar5 | 0xfffd800000000000;
                    /* WARNING: Subroutine does not return */
  FUN_180484920(param_1,3);
}



/* ===== 1804826d0 fprintf_s ===== */

int __cdecl fprintf_s(FILE *_File,char *_Format,...)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 in_R8;
  undefined8 in_R9;
  undefined8 local_res18;
  undefined8 local_res20;
  
                    /* 0x4826d0  128  fprintf_s */
  local_res18 = in_R8;
  local_res20 = in_R9;
  puVar1 = (undefined8 *)FUN_180013640();
  iVar2 = FUN_1805010ec(*puVar1,_File,_Format,0,&local_res18);
  return iVar2;
}



/* ===== 180482720 fscanf ===== */

int __cdecl fscanf(FILE *_File,char *_Format,...)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 in_R8;
  undefined8 in_R9;
  undefined8 local_res18;
  undefined8 local_res20;
  
                    /* 0x482720  129  fscanf */
  local_res18 = in_R8;
  local_res20 = in_R9;
  puVar1 = (undefined8 *)FUN_180013650();
  iVar2 = FID_conflict___stdio_common_vfwscanf(*puVar1,_File,_Format,0,&local_res18);
  return iVar2;
}



/* ===== 180482770 fscanf_s ===== */

int __cdecl fscanf_s(FILE *_File,char *_Format,...)

{
  ulonglong *puVar1;
  int iVar2;
  undefined8 in_R8;
  undefined8 in_R9;
  undefined8 local_res18;
  undefined8 local_res20;
  
                    /* 0x482770  130  fscanf_s */
  local_res18 = in_R8;
  local_res20 = in_R9;
  puVar1 = (ulonglong *)FUN_180013650();
  iVar2 = FID_conflict___stdio_common_vfwscanf(*puVar1 | 1,_File,_Format,0,&local_res18);
  return iVar2;
}



/* ===== 1804827c0 fwprintf ===== */

int __cdecl fwprintf(FILE *_File,wchar_t *_Format,...)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 in_R8;
  undefined8 in_R9;
  undefined8 local_res18;
  undefined8 local_res20;
  
                    /* 0x4827c0  131  fwprintf */
  local_res18 = in_R8;
  local_res20 = in_R9;
  puVar1 = (undefined8 *)FUN_180013640();
  iVar2 = FUN_180501210(*puVar1,_File,_Format,0,&local_res18);
  return iVar2;
}



/* ===== 180482810 fwprintf_s ===== */

int __cdecl fwprintf_s(FILE *_File,wchar_t *_Format,...)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 in_R8;
  undefined8 in_R9;
  undefined8 local_res18;
  undefined8 local_res20;
  
                    /* 0x482810  132  fwprintf_s */
  local_res18 = in_R8;
  local_res20 = in_R9;
  puVar1 = (undefined8 *)FUN_180013640();
  iVar2 = FUN_180501458(*puVar1,_File,_Format,0,&local_res18);
  return iVar2;
}



/* ===== 180482860 fwscanf ===== */

int __cdecl fwscanf(FILE *_File,wchar_t *_Format,...)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 in_R8;
  undefined8 in_R9;
  undefined8 local_res18;
  undefined8 local_res20;
  
                    /* 0x482860  133  fwscanf */
  local_res18 = in_R8;
  local_res20 = in_R9;
  puVar1 = (undefined8 *)FUN_180013650();
  iVar2 = FID_conflict___stdio_common_vfwscanf(*puVar1,_File,_Format,0,&local_res18);
  return iVar2;
}



/* ===== 1804828b0 fwscanf_s ===== */

int __cdecl fwscanf_s(FILE *_File,wchar_t *_Format,...)

{
  ulonglong *puVar1;
  int iVar2;
  undefined8 in_R8;
  undefined8 in_R9;
  undefined8 local_res18;
  undefined8 local_res20;
  
                    /* 0x4828b0  134  fwscanf_s */
  local_res18 = in_R8;
  local_res20 = in_R9;
  puVar1 = (ulonglong *)FUN_180013650();
  iVar2 = FID_conflict___stdio_common_vfwscanf(*puVar1 | 1,_File,_Format,0,&local_res18);
  return iVar2;
}



/* ===== 180482900 FUN_180482900 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_180482900(longlong param_1,undefined8 param_2,undefined8 param_3,undefined2 *param_4)

{
  undefined4 uVar1;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  undefined8 local_120;
  undefined1 local_118 [64];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  longlong local_c0;
  undefined1 *local_b8;
  undefined8 *local_b0;
  undefined2 *local_98;
  undefined8 local_90;
  ulonglong local_20;
  
  local_20 = DAT_180919500 ^ (ulonglong)auStack_148;
  local_b8 = &LAB_180483100;
  local_b0 = &local_128;
  local_98 = &DAT_1806dfbb4;
  if (param_4 != (undefined2 *)0x0) {
    local_98 = param_4;
  }
  local_90 = 0;
  local_c8 = 0;
  local_d0 = 0;
  local_d8 = 0;
  local_128 = param_2;
  local_120 = param_3;
  local_c0 = param_1;
  uVar1 = FUN_180003349(param_1,0,local_118,FUN_180482580);
  FUN_18049aff0(param_1,local_118);
  if (*(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x18) <=
      *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x10)) {
    FUN_180491200(param_1);
  }
  return uVar1;
}



/* ===== 1804829e0 FUN_1804829e0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4
FUN_1804829e0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined2 *param_4,
             undefined8 param_5)

{
  undefined4 uVar1;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  undefined8 local_120;
  undefined1 local_118 [64];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  longlong local_c0;
  undefined1 *local_b8;
  undefined8 *local_b0;
  undefined2 *local_98;
  undefined8 local_90;
  ulonglong local_20;
  
  local_20 = DAT_180919500 ^ (ulonglong)auStack_148;
  local_b8 = &LAB_180483100;
  local_b0 = &local_128;
  local_90 = param_5;
  local_98 = &DAT_1806dfbb4;
  if (param_4 != (undefined2 *)0x0) {
    local_98 = param_4;
  }
  local_c8 = 0;
  local_d0 = 0;
  local_d8 = 0;
  local_128 = param_2;
  local_120 = param_3;
  local_c0 = param_1;
  uVar1 = FUN_180003349(param_1,0,local_118,FUN_180482580);
  FUN_18049aff0(param_1,local_118);
  if (*(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x18) <=
      *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x10)) {
    FUN_180491200(param_1);
  }
  return uVar1;
}



/* ===== 180482ac0 FUN_180482ac0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_180482ac0(longlong param_1,char *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  int *piVar8;
  int iVar9;
  undefined1 auStack_358 [32];
  undefined1 local_338 [64];
  undefined8 local_2f8;
  undefined8 local_2f0;
  undefined8 local_2e8;
  longlong local_2e0;
  code *local_2d8;
  FILE **local_2d0;
  char *local_2b8;
  undefined8 local_2b0;
  FILE *local_238 [66];
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_358;
  if (param_2 == (char *)0x0) {
    local_238[0] = (FILE *)__acrt_iob_func();
    pcVar5 = "=stdin";
  }
  else {
    pcVar5 = (char *)FUN_18047f380(param_1,&DAT_18056c648,param_2);
    local_238[0] = (FILE *)FUN_1805181b0(param_2,&DAT_18089f780);
    if (local_238[0] == (FILE *)0x0) {
      *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + -8;
      puVar6 = (undefined4 *)FUN_18051bfb0();
      uVar7 = FUN_18051c098(*puVar6);
      FUN_18047f380(param_1,"cannot open %s: %s",param_2,uVar7);
      return 6;
    }
  }
  local_2b0 = 0;
  local_2d8 = FUN_180483090;
  local_2d0 = local_238;
  local_2e8 = 0;
  iVar9 = 0;
  local_2f0 = 0;
  local_2f8 = 0;
  local_2b8 = "?";
  if (pcVar5 != (char *)0x0) {
    local_2b8 = pcVar5;
  }
  local_2e0 = param_1;
  uVar3 = FUN_180003349(param_1,0,local_338,FUN_180482580);
  FUN_18049aff0(param_1,local_338);
  if (*(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x18) <=
      *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x10)) {
    FUN_180491200(param_1);
  }
  iVar4 = ferror(local_238[0]);
  if (iVar4 != 0) {
    piVar8 = (int *)FUN_18051bfb0();
    iVar9 = *piVar8;
  }
  if (param_2 != (char *)0x0) {
    FUN_18051053c(local_238[0]);
    lVar2 = *(longlong *)(param_1 + 0x28);
    puVar1 = (undefined8 *)(lVar2 + -8);
    *(undefined8 **)(param_1 + 0x28) = puVar1;
    *(undefined8 *)(lVar2 + -0x10) = *puVar1;
  }
  if (iVar9 != 0) {
    *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + -8;
    uVar7 = FUN_18051c098(iVar9);
    pcVar5 = "stdin";
    if (param_2 != (char *)0x0) {
      pcVar5 = param_2;
    }
    FUN_18047f380(param_1,"cannot read %s: %s",pcVar5,uVar7);
    uVar3 = 6;
  }
  return uVar3;
}



/* ===== 180482c90 FUN_180482c90 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_180482c90(longlong param_1,char *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  int *piVar8;
  int iVar9;
  undefined1 auStack_368 [32];
  undefined1 local_348 [64];
  undefined8 local_308;
  undefined8 local_300;
  undefined8 local_2f8;
  longlong local_2f0;
  code *local_2e8;
  FILE **local_2e0;
  char *local_2c8;
  undefined8 local_2c0;
  FILE *local_248 [66];
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStack_368;
  if (param_2 == (char *)0x0) {
    local_248[0] = (FILE *)__acrt_iob_func();
    pcVar5 = "=stdin";
  }
  else {
    pcVar5 = (char *)FUN_18047f380(param_1,&DAT_18056c648,param_2);
    local_248[0] = (FILE *)FUN_1805181b0(param_2,&DAT_18089f780);
    if (local_248[0] == (FILE *)0x0) {
      *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + -8;
      puVar6 = (undefined4 *)FUN_18051bfb0();
      uVar7 = FUN_18051c098(*puVar6);
      FUN_18047f380(param_1,"cannot open %s: %s",param_2,uVar7);
      return 6;
    }
  }
  local_2f8 = 0;
  local_2e8 = FUN_180483090;
  local_2e0 = local_248;
  local_300 = 0;
  iVar9 = 0;
  local_308 = 0;
  local_2c8 = "?";
  if (pcVar5 != (char *)0x0) {
    local_2c8 = pcVar5;
  }
  local_2f0 = param_1;
  local_2c0 = param_3;
  uVar3 = FUN_180003349(param_1,0,local_348,FUN_180482580);
  FUN_18049aff0(param_1,local_348);
  if (*(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x18) <=
      *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x10)) {
    FUN_180491200(param_1);
  }
  iVar4 = ferror(local_248[0]);
  if (iVar4 != 0) {
    piVar8 = (int *)FUN_18051bfb0();
    iVar9 = *piVar8;
  }
  if (param_2 != (char *)0x0) {
    FUN_18051053c(local_248[0]);
    lVar2 = *(longlong *)(param_1 + 0x28);
    puVar1 = (undefined8 *)(lVar2 + -8);
    *(undefined8 **)(param_1 + 0x28) = puVar1;
    *(undefined8 *)(lVar2 + -0x10) = *puVar1;
  }
  if (iVar9 != 0) {
    *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + -8;
    uVar7 = FUN_18051c098(iVar9);
    pcVar5 = "stdin";
    if (param_2 != (char *)0x0) {
      pcVar5 = param_2;
    }
    FUN_18047f380(param_1,"cannot read %s: %s",pcVar5,uVar7);
    uVar3 = 6;
  }
  return uVar3;
}



/* ===== 180482e70 FUN_180482e70 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_180482e70(longlong param_1,char *param_2)

{
  undefined4 uVar1;
  undefined1 auStack_138 [32];
  char *local_118;
  size_t local_110;
  undefined1 local_108 [64];
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  longlong local_b0;
  undefined1 *local_a8;
  char **local_a0;
  char *local_88;
  undefined8 local_80;
  ulonglong local_10;
  
  local_10 = DAT_180919500 ^ (ulonglong)auStack_138;
  local_118 = param_2;
  local_110 = strlen(param_2);
  local_a8 = &LAB_180483100;
  local_a0 = &local_118;
  local_88 = "?";
  if (param_2 != (char *)0x0) {
    local_88 = param_2;
  }
  local_80 = 0;
  local_b8 = 0;
  local_c0 = 0;
  local_c8 = 0;
  local_b0 = param_1;
  uVar1 = FUN_180003349(param_1,0,local_108,FUN_180482580);
  FUN_18049aff0(param_1,local_108);
  if (*(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x18) <=
      *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x10)) {
    FUN_180491200(param_1);
  }
  return uVar1;
}



/* ===== 180482f60 FUN_180482f60 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4
FUN_180482f60(longlong param_1,undefined8 param_2,undefined8 param_3,undefined2 *param_4,
             undefined8 param_5)

{
  undefined4 uVar1;
  undefined1 auStack_138 [32];
  undefined1 local_118 [64];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  longlong local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined2 *local_98;
  undefined8 local_90;
  ulonglong local_20;
  
  local_20 = DAT_180919500 ^ (ulonglong)auStack_138;
  local_90 = param_5;
  local_98 = &DAT_1806dfbb4;
  if (param_4 != (undefined2 *)0x0) {
    local_98 = param_4;
  }
  local_c8 = 0;
  local_d0 = 0;
  local_d8 = 0;
  local_c0 = param_1;
  local_b8 = param_2;
  local_b0 = param_3;
  uVar1 = FUN_180003349(param_1,0,local_118,FUN_180482580);
  FUN_18049aff0(param_1,local_118);
  if (*(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x18) <=
      *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x10)) {
    FUN_180491200(param_1);
  }
  return uVar1;
}



/* ===== 180483030 printf_s ===== */

int __cdecl printf_s(char *_Format,...)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 in_RDX;
  undefined8 in_R8;
  undefined8 in_R9;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  
                    /* 0x483030  136  printf_s */
  local_res10 = in_RDX;
  local_res18 = in_R8;
  local_res20 = in_R9;
  uVar1 = __acrt_iob_func(1);
  puVar2 = (undefined8 *)FUN_180013640();
  iVar3 = FUN_1805010ec(*puVar2,uVar1,_Format,0,&local_res10);
  return iVar3;
}



/* ===== 180483090 FUN_180483090 ===== */

undefined8 * FUN_180483090(undefined8 param_1,undefined8 *param_2,size_t *param_3)

{
  int iVar1;
  size_t sVar2;
  undefined8 *_DstBuf;
  
  iVar1 = feof((FILE *)*param_2);
  if (iVar1 != 0) {
    return (undefined8 *)0x0;
  }
  _DstBuf = param_2 + 1;
  sVar2 = fread(_DstBuf,1,0x200,(FILE *)*param_2);
  *param_3 = sVar2;
  if (sVar2 == 0) {
    _DstBuf = (undefined8 *)0x0;
  }
  return _DstBuf;
}



/* ===== 180483120 scanf ===== */

int __cdecl scanf(char *_Format,...)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 in_RDX;
  undefined8 in_R8;
  undefined8 in_R9;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  
                    /* 0x483120  137  scanf */
  local_res10 = in_RDX;
  local_res18 = in_R8;
  local_res20 = in_R9;
  uVar1 = __acrt_iob_func(0);
  puVar2 = (undefined8 *)FUN_180013650();
  iVar3 = FID_conflict___stdio_common_vfwscanf(*puVar2,uVar1,_Format,0,&local_res10);
  return iVar3;
}



/* ===== 180483170 scanf_s ===== */

int __cdecl scanf_s(char *_Format,...)

{
  undefined8 uVar1;
  ulonglong *puVar2;
  int iVar3;
  undefined8 in_RDX;
  undefined8 in_R8;
  undefined8 in_R9;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  
                    /* 0x483170  138  scanf_s */
  local_res10 = in_RDX;
  local_res18 = in_R8;
  local_res20 = in_R9;
  uVar1 = __acrt_iob_func(0);
  puVar2 = (ulonglong *)FUN_180013650();
  iVar3 = FID_conflict___stdio_common_vfwscanf(*puVar2 | 1,uVar1,_Format,0,&local_res10);
  return iVar3;
}



/* ===== 1804831d0 sprintf ===== */

int __cdecl sprintf(char *_Dest,char *_Format,...)

{
  int iVar1;
  ulonglong *puVar2;
  undefined8 in_R8;
  undefined8 in_R9;
  undefined8 local_res18;
  undefined8 local_res20;
  
                    /* 0x4831d0  140  sprintf */
  local_res18 = in_R8;
  local_res20 = in_R9;
  puVar2 = (ulonglong *)FUN_180013640();
  iVar1 = FUN_180501904(*puVar2 | 1,_Dest,0xffffffffffffffff,_Format,0,&local_res18);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}



/* ===== 180483230 swprintf_s ===== */

int __cdecl swprintf_s(wchar_t *_Dst,size_t _SizeInWords,wchar_t *_Format,...)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 in_R9;
  undefined8 local_res20;
  
                    /* 0x483230  145  swprintf_s */
  local_res20 = in_R9;
  puVar2 = (undefined8 *)FUN_180013640();
  iVar1 = FUN_180502038(*puVar2,_Dst,_SizeInWords,_Format,0,&local_res20);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}



/* ===== 180483290 swscanf ===== */

int __cdecl swscanf(wchar_t *_Src,wchar_t *_Format,...)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 in_R8;
  undefined8 in_R9;
  undefined8 local_res18;
  undefined8 local_res20;
  
                    /* 0x483290  146  swscanf */
  local_res18 = in_R8;
  local_res20 = in_R9;
  puVar1 = (undefined8 *)FUN_180013650();
  iVar2 = FUN_18050fb68(*puVar1,_Src,0xffffffffffffffff,_Format,0,&local_res18);
  return iVar2;
}



/* ===== 1804832f0 swscanf_s ===== */

int __cdecl swscanf_s(wchar_t *_Src,wchar_t *_Format,...)

{
  ulonglong *puVar1;
  int iVar2;
  undefined8 in_R8;
  undefined8 in_R9;
  undefined8 local_res18;
  undefined8 local_res20;
  
                    /* 0x4832f0  147  swscanf_s */
  local_res18 = in_R8;
  local_res20 = in_R9;
  puVar1 = (ulonglong *)FUN_180013650();
  iVar2 = FUN_18050fb68(*puVar1 | 1,_Src,0xffffffffffffffff,_Format,0,&local_res18);
  return iVar2;
}



/* ===== 180483350 vfprintf ===== */

int __cdecl vfprintf(FILE *_File,char *_Format,va_list _ArgList)

{
  undefined8 *puVar1;
  int iVar2;
  
                    /* 0x483350  148  vfprintf */
  puVar1 = (undefined8 *)FUN_180013640();
  iVar2 = FUN_180500ea4(*puVar1,_File,_Format,0,_ArgList);
  return iVar2;
}



/* ===== 1804833a0 vfprintf_s ===== */

int __cdecl vfprintf_s(FILE *_File,char *_Format,va_list _ArgList)

{
  undefined8 *puVar1;
  int iVar2;
  
                    /* 0x4833a0  149  vfprintf_s */
  puVar1 = (undefined8 *)FUN_180013640();
  iVar2 = FUN_1805010ec(*puVar1,_File,_Format,0,_ArgList);
  return iVar2;
}



/* ===== 1804833f0 vfscanf ===== */

void vfscanf(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
                    /* 0x4833f0  150  vfscanf */
  puVar1 = (undefined8 *)FUN_180013650();
  FID_conflict___stdio_common_vfwscanf(*puVar1,param_1,param_2,0,param_3);
  return;
}



/* ===== 180483440 vfscanf_s ===== */

void vfscanf_s(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  
                    /* 0x483440  151  vfscanf_s */
  puVar1 = (ulonglong *)FUN_180013650();
  FID_conflict___stdio_common_vfwscanf(*puVar1 | 1,param_1,param_2,0,param_3);
  return;
}



/* ===== 180483490 vfwprintf ===== */

int __cdecl vfwprintf(FILE *_File,wchar_t *_Format,va_list _ArgList)

{
  undefined8 *puVar1;
  int iVar2;
  
                    /* 0x483490  152  vfwprintf */
  puVar1 = (undefined8 *)FUN_180013640();
  iVar2 = FUN_180501210(*puVar1,_File,_Format,0,_ArgList);
  return iVar2;
}



/* ===== 1804834e0 vfwprintf_s ===== */

int __cdecl vfwprintf_s(FILE *_File,wchar_t *_Format,va_list _ArgList)

{
  undefined8 *puVar1;
  int iVar2;
  
                    /* 0x4834e0  153  vfwprintf_s */
  puVar1 = (undefined8 *)FUN_180013640();
  iVar2 = FUN_180501458(*puVar1,_File,_Format,0,_ArgList);
  return iVar2;
}



/* ===== 180483530 vfwscanf ===== */

void vfwscanf(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
                    /* 0x483530  154  vfwscanf */
  puVar1 = (undefined8 *)FUN_180013650();
  FID_conflict___stdio_common_vfwscanf(*puVar1,param_1,param_2,0,param_3);
  return;
}



/* ===== 180483580 vfwscanf_s ===== */

void vfwscanf_s(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  
                    /* 0x483580  155  vfwscanf_s */
  puVar1 = (ulonglong *)FUN_180013650();
  FID_conflict___stdio_common_vfwscanf(*puVar1 | 1,param_1,param_2,0,param_3);
  return;
}



/* ===== 1804835d0 vprintf ===== */

int __cdecl vprintf(char *_Format,va_list _ArgList)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  
                    /* 0x4835d0  156  vprintf */
  uVar1 = __acrt_iob_func(1);
  puVar2 = (undefined8 *)FUN_180013640();
  iVar3 = FUN_180500ea4(*puVar2,uVar1,_Format,0,_ArgList);
  return iVar3;
}



/* ===== 180483620 vprintf_s ===== */

int __cdecl vprintf_s(char *_Format,va_list _ArgList)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  
                    /* 0x483620  157  vprintf_s */
  uVar1 = __acrt_iob_func(1);
  puVar2 = (undefined8 *)FUN_180013640();
  iVar3 = FUN_1805010ec(*puVar2,uVar1,_Format,0,_ArgList);
  return iVar3;
}



/* ===== 180483670 vscanf ===== */

void vscanf(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
                    /* 0x483670  158  vscanf */
  uVar1 = __acrt_iob_func(0);
  puVar2 = (undefined8 *)FUN_180013650();
  FID_conflict___stdio_common_vfwscanf(*puVar2,uVar1,param_1,0,param_2);
  return;
}



/* ===== 1804836c0 vscanf_s ===== */

void vscanf_s(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulonglong *puVar2;
  
                    /* 0x4836c0  159  vscanf_s */
  uVar1 = __acrt_iob_func(0);
  puVar2 = (ulonglong *)FUN_180013650();
  FID_conflict___stdio_common_vfwscanf(*puVar2 | 1,uVar1,param_1,0,param_2);
  return;
}



/* ===== 180483710 vsprintf ===== */

int __cdecl vsprintf(char *_Dest,char *_Format,va_list _Args)

{
  int iVar1;
  ulonglong *puVar2;
  
                    /* 0x483710  162  vsprintf */
  puVar2 = (ulonglong *)FUN_180013640();
  iVar1 = FUN_180501904(*puVar2 | 1,_Dest,0xffffffffffffffff,_Format,0,_Args);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}



/* ===== 180483770 vsprintf_s ===== */

int __cdecl vsprintf_s(char *_DstBuf,size_t _SizeInBytes,char *_Format,va_list _ArgList)

{
  int iVar1;
  undefined8 *puVar2;
  
                    /* 0x483770  163  vsprintf_s */
  puVar2 = (undefined8 *)FUN_180013640();
  iVar1 = FUN_180501c10(*puVar2,_DstBuf,_SizeInBytes,_Format,0,_ArgList);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}



/* ===== 1804837c0 vsscanf ===== */

void vsscanf(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
                    /* 0x4837c0  164  vsscanf */
  puVar1 = (undefined8 *)FUN_180013650();
  FUN_18050fa44(*puVar1,param_1,0xffffffffffffffff,param_2,0,param_3);
  return;
}



/* ===== 180483810 vswprintf_s ===== */

int __cdecl vswprintf_s(wchar_t *_Dst,size_t _SizeInWords,wchar_t *_Format,va_list _ArgList)

{
  int iVar1;
  undefined8 *puVar2;
  
                    /* 0x483810  167  vswprintf_s */
  puVar2 = (undefined8 *)FUN_180013640();
  iVar1 = FUN_180502038(*puVar2,_Dst,_SizeInWords,_Format,0,_ArgList);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}



/* ===== 180483860 vswscanf ===== */

void vswscanf(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
                    /* 0x483860  168  vswscanf */
  puVar1 = (undefined8 *)FUN_180013650();
  FUN_18050fb68(*puVar1,param_1,0xffffffffffffffff,param_2,0,param_3);
  return;
}



/* ===== 1804838b0 vswscanf_s ===== */

void vswscanf_s(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  
                    /* 0x4838b0  169  vswscanf_s */
  puVar1 = (ulonglong *)FUN_180013650();
  FUN_18050fb68(*puVar1 | 1,param_1,0xffffffffffffffff,param_2,0,param_3);
  return;
}



/* ===== 180483910 vwprintf ===== */

int __cdecl vwprintf(wchar_t *_Format,va_list _ArgList)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  
                    /* 0x483910  170  vwprintf */
  uVar1 = __acrt_iob_func(1);
  puVar2 = (undefined8 *)FUN_180013640();
  iVar3 = FUN_180501210(*puVar2,uVar1,_Format,0,_ArgList);
  return iVar3;
}



/* ===== 180483960 vwprintf_s ===== */

int __cdecl vwprintf_s(wchar_t *_Format,va_list _ArgList)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  
                    /* 0x483960  171  vwprintf_s */
  uVar1 = __acrt_iob_func(1);
  puVar2 = (undefined8 *)FUN_180013640();
  iVar3 = FUN_180501458(*puVar2,uVar1,_Format,0,_ArgList);
  return iVar3;
}



/* ===== 1804839b0 vwscanf ===== */

void vwscanf(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
                    /* 0x4839b0  172  vwscanf */
  uVar1 = __acrt_iob_func(0);
  puVar2 = (undefined8 *)FUN_180013650();
  FID_conflict___stdio_common_vfwscanf(*puVar2,uVar1,param_1,0,param_2);
  return;
}



/* ===== 180483a00 vwscanf_s ===== */

void vwscanf_s(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulonglong *puVar2;
  
                    /* 0x483a00  173  vwscanf_s */
  uVar1 = __acrt_iob_func(0);
  puVar2 = (ulonglong *)FUN_180013650();
  FID_conflict___stdio_common_vfwscanf(*puVar2 | 1,uVar1,param_1,0,param_2);
  return;
}



/* ===== 180483a50 wprintf ===== */

int __cdecl wprintf(wchar_t *_Format,...)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 in_RDX;
  undefined8 in_R8;
  undefined8 in_R9;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  
                    /* 0x483a50  174  wprintf */
  local_res10 = in_RDX;
  local_res18 = in_R8;
  local_res20 = in_R9;
  uVar1 = __acrt_iob_func(1);
  puVar2 = (undefined8 *)FUN_180013640();
  iVar3 = FUN_180501210(*puVar2,uVar1,_Format,0,&local_res10);
  return iVar3;
}



/* ===== 180483ab0 wprintf_s ===== */

int __cdecl wprintf_s(wchar_t *_Format,...)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 in_RDX;
  undefined8 in_R8;
  undefined8 in_R9;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  
                    /* 0x483ab0  175  wprintf_s */
  local_res10 = in_RDX;
  local_res18 = in_R8;
  local_res20 = in_R9;
  uVar1 = __acrt_iob_func(1);
  puVar2 = (undefined8 *)FUN_180013640();
  iVar3 = FUN_180501458(*puVar2,uVar1,_Format,0,&local_res10);
  return iVar3;
}



/* ===== 180483b10 wscanf ===== */

int __cdecl wscanf(wchar_t *_Format,...)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 in_RDX;
  undefined8 in_R8;
  undefined8 in_R9;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  
                    /* 0x483b10  176  wscanf */
  local_res10 = in_RDX;
  local_res18 = in_R8;
  local_res20 = in_R9;
  uVar1 = __acrt_iob_func(0);
  puVar2 = (undefined8 *)FUN_180013650();
  iVar3 = FID_conflict___stdio_common_vfwscanf(*puVar2,uVar1,_Format,0,&local_res10);
  return iVar3;
}



/* ===== 180483b60 wscanf_s ===== */

int __cdecl wscanf_s(wchar_t *_Format,...)

{
  undefined8 uVar1;
  ulonglong *puVar2;
  int iVar3;
  undefined8 in_RDX;
  undefined8 in_R8;
  undefined8 in_R9;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  
                    /* 0x483b60  177  wscanf_s */
  local_res10 = in_RDX;
  local_res18 = in_R8;
  local_res20 = in_R9;
  uVar1 = __acrt_iob_func(0);
  puVar2 = (ulonglong *)FUN_180013650();
  iVar3 = FID_conflict___stdio_common_vfwscanf(*puVar2 | 1,uVar1,_Format,0,&local_res10);
  return iVar3;
}



/* ===== 180483bc0 FUN_180483bc0 ===== */

void FUN_180483bc0(longlong param_1,int param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined2 *local_res8;
  
  local_res8 = &DAT_1806dfbb4;
  lVar1 = FUN_18048a510(param_1,*(longlong *)(param_1 + 0x20) + -8,&local_res8);
  if ((param_2 < 0) && (-10000 < param_2)) {
    param_2 = param_2 + 1 +
              (int)(*(longlong *)(param_1 + 0x28) - *(longlong *)(param_1 + 0x20) >> 3);
  }
  if (((lVar1 == 0) || (*(char *)(lVar1 + 3) != 'h')) || (param_2 = param_2 + -1, param_2 != 0)) {
    uVar2 = FUN_180498630(param_1,PTR_s_not_enough_memory_180919000 + 0x1e7,param_2,local_res8,
                          param_3);
  }
  else {
    uVar2 = FUN_180498630(param_1,PTR_s_not_enough_memory_180919000 + 0x1c9,local_res8,param_3);
  }
                    /* WARNING: Subroutine does not return */
  FUN_180484240(param_1,uVar2);
}



/* ===== 180483c70 FUN_180483c70 ===== */

void FUN_180483c70(longlong param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined8 local_res18;
  undefined8 local_res20;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x180);
  if (lVar1 != 0) {
    *(longlong *)(param_1 + 0x20) = lVar1;
  }
  uVar2 = *(ulonglong *)(*(longlong *)(param_1 + 0x20) + -0x10) & 0x7fffffffffff;
  if (*(char *)(uVar2 + 10) == '\0') {
    *(ulonglong *)(param_1 + 0x28) =
         *(longlong *)(param_1 + 0x20) +
         (ulonglong)*(byte *)(*(longlong *)(uVar2 + 0x20) + -0x5d) * 8;
  }
  local_res18 = param_3;
  local_res20 = param_4;
  uVar3 = FUN_180498660(param_1,PTR_s_not_enough_memory_180919000 + param_2,&local_res18);
  FUN_180489ff0(param_1,uVar3,*(longlong *)(param_1 + 0x20) + -8,0);
                    /* WARNING: Subroutine does not return */
  FUN_1804846a0(param_1);
}



/* ===== 180483d00 FUN_180483d00 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180483d00(longlong param_1,uint param_2)

{
  DWORD64 ControlPc;
  DWORD64 DVar1;
  PRUNTIME_FUNCTION FunctionEntry;
  undefined1 auStackY_638 [32];
  DWORD64 local_5f8;
  undefined1 local_5f0 [8];
  ulonglong local_5e8;
  PVOID local_5e0;
  _UNWIND_HISTORY_TABLE local_5d8;
  _CONTEXT local_4f8;
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStackY_638;
  if (*(longlong *)(param_1 + 0x180) == 0) {
    RaiseException(param_2 | 0xe24c4a00,1,0,(ULONG_PTR *)0x0);
  }
  else {
    FUN_180540170(&local_5d8,0,0xd8);
    RtlCaptureContext(&local_4f8);
    ControlPc = local_4f8.Rip;
    FunctionEntry = RtlLookupFunctionEntry(local_4f8.Rip,&local_5f8,&local_5d8);
    while (FunctionEntry != (PRUNTIME_FUNCTION)0x0) {
      RtlVirtualUnwind(0,local_5f8,ControlPc,FunctionEntry,&local_4f8,&local_5e0,&local_5e8,
                       (PKNONVOLATILE_CONTEXT_POINTERS)0x0);
      DVar1 = local_4f8.Rip;
      if (ControlPc == 0) {
        return;
      }
      FunctionEntry = RtlLookupFunctionEntry(local_4f8.Rip,&local_5f8,&local_5d8);
      ControlPc = DVar1;
    }
    local_4f8.Rip = FUN_180495e40(param_1 + 0x2e8,ControlPc - 1,local_5f0);
    if (local_4f8.Rip != 0) {
      *(uint *)(param_1 + 0xeb8) = param_2;
      RtlRestoreContext(&local_4f8,(_EXCEPTION_RECORD *)0x0);
    }
  }
  return;
}



/* ===== 180483e60 FUN_180483e60 ===== */

ulonglong FUN_180483e60(ulonglong param_1,ulonglong param_2,int param_3)

{
  byte *pbVar1;
  int iVar2;
  ulonglong uVar3;
  code *pcVar4;
  longlong lVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  ulonglong *puVar8;
  
  uVar7 = *(ulonglong *)(param_1 + 0x50);
  if (uVar7 != 0) {
    puVar6 = (ulonglong *)(*(longlong *)(param_1 + 0x20) + -8);
    do {
      iVar2 = *(int *)((uVar7 & 0xfffffffffffffffc) + 0x50);
      if ((iVar2 < 0) &&
         (puVar8 = (ulonglong *)((longlong)-iVar2 + *(longlong *)(param_1 + 0x38)), puVar6 < puVar8)
         ) {
        if (param_3 == 0) {
          return uVar7;
        }
        *(ulonglong **)(param_1 + 0x20) = puVar6 + 1;
        *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(uVar7 + 0x68);
        FUN_180484c90(param_1,puVar8);
        return uVar7;
      }
      if (puVar6 <= (ulonglong *)(*(longlong *)(param_1 + 0x38) + 8)) break;
      uVar3 = *puVar6;
      switch((uint)uVar3 & 7) {
      default:
        lVar5 = (ulonglong)*(byte *)(uVar3 - 3) * -8 + -0x10;
        goto LAB_180483f20;
      case 1:
switchD_180483ed1_caseD_1:
        if (param_3 != 0) {
          *(byte **)(param_1 + 0x20) =
               (byte *)((longlong)puVar6 + (8 - (uVar3 & 0xfffffffffffffff8)));
          *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(uVar7 + 0x68);
          FUN_180484c90(param_1,puVar6 + -1);
          return 0;
        }
        if (uVar7 == param_2) {
          return 0;
        }
        uVar7 = *(ulonglong *)(uVar7 + 0x68);
        break;
      case 2:
        if (puVar6[-3] == 1) goto switchD_180483ed1_caseD_1;
        break;
      case 3:
        break;
      case 5:
        if ((uVar7 & 1) == 0) {
          if (param_3 == 0) {
            return uVar7;
          }
          *(byte **)(param_1 + 0x20) =
               (byte *)((longlong)puVar6 + (8 - (uVar3 & 0xfffffffffffffff8)));
          *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(uVar7 + 0x68);
          FUN_180484c90(param_1,puVar6 + -1);
          return uVar7;
        }
        if (param_3 == 0) {
          return uVar7;
        }
        pbVar1 = (byte *)(*(longlong *)(param_1 + 0x10) + 0x91);
        *pbVar1 = *pbVar1 & 0xef;
        *(undefined8 *)(param_1 + 0x50) = 0;
        *(char *)(param_1 + 0xb) = (char)param_3;
        return uVar7;
      case 6:
      case 7:
        if (param_3 == 0) {
LAB_180483fd5:
          return uVar7 | 2;
        }
        if (param_3 != 1) {
          lVar5 = *(longlong *)(param_1 + 0x10);
          *(ulonglong *)(lVar5 + 0x178) = param_1;
          if ((*puVar6 & 7) == 6) {
            pbVar1 = (byte *)(lVar5 + 0x91);
            *pbVar1 = *pbVar1 & 0xef;
          }
          uVar3 = *puVar6;
          *(ulonglong *)(param_1 + 0x50) = uVar7;
          *(byte **)(param_1 + 0x20) =
               (byte *)((longlong)puVar6 + (8 - (uVar3 & 0xfffffffffffffff8)));
          FUN_180484c90(param_1);
          goto LAB_180483fd5;
        }
      }
      lVar5 = -(uVar3 & 0xfffffffffffffff8);
LAB_180483f20:
      puVar6 = (ulonglong *)((longlong)puVar6 + lVar5);
    } while (uVar7 != 0);
  }
  if (param_3 == 0) {
    return param_1;
  }
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x38) + 0x10;
  FUN_180484c90(param_1);
  pcVar4 = *(code **)(*(longlong *)(param_1 + 0x10) + 0x168);
  if (pcVar4 != (code *)0x0) {
    (*pcVar4)(param_1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_18051c3d4(1);
}



/* ===== 1804840c0 FUN_1804840c0 ===== */

void FUN_1804840c0(undefined8 param_1,undefined8 param_2,int param_3)

{
                    /* WARNING: Subroutine does not return */
  FUN_180483bc0(param_1,param_2,PTR_s_not_enough_memory_180919000 + param_3);
}



/* ===== 1804840e0 FUN_1804840e0 ===== */

void FUN_1804840e0(undefined8 param_1,undefined8 param_2,int param_3)

{
                    /* WARNING: Subroutine does not return */
  FUN_180484100(param_1,param_2,(&PTR_DAT_18056e8e8)[param_3]);
}



/* ===== 180484100 FUN_180484100 ===== */

void FUN_180484100(longlong param_1,int param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  ulonglong uVar4;
  undefined *puVar5;
  
  if (param_2 < -9999) {
    if (-0x2713 < param_2) {
      puVar5 = PTR_s_table_18056e998;
      goto LAB_1804841b6;
    }
    uVar4 = *(ulonglong *)(*(longlong *)(param_1 + 0x20) + -0x10) & 0x7fffffffffff;
    if ((int)(uint)*(byte *)(uVar4 + 0xb) < -0x2712 - param_2) goto LAB_1804841af;
    iVar3 = (int)((ulonglong)*(undefined8 *)(uVar4 + 0x30 + (longlong)(-0x2713 - param_2) * 8) >>
                 0x20);
  }
  else {
    if (param_2 < 0) {
      puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x28) + (longlong)param_2 * 8);
    }
    else {
      puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x20) + ((longlong)param_2 + -1) * 8);
    }
    if (*(undefined8 **)(param_1 + 0x28) <= puVar2) {
LAB_1804841af:
      puVar5 = PTR_s_no_value_18056e8e0;
      goto LAB_1804841b6;
    }
    iVar3 = (int)((ulonglong)*puVar2 >> 0x20);
  }
  if ((uint)(iVar3 >> 0xf) < 0xfffffff3) {
    puVar5 = PTR_s_number_18056e9a8;
  }
  else {
    puVar5 = (&PTR_DAT_18056e940)[(uint)~(iVar3 >> 0xf)];
  }
LAB_1804841b6:
  uVar1 = FUN_180498630(param_1,PTR_s_not_enough_memory_180919000 + 0x205,param_3,puVar5);
                    /* WARNING: Subroutine does not return */
  FUN_180483bc0(param_1,param_2,uVar1);
}



/* ===== 1804841e0 FUN_1804841e0 ===== */

void FUN_1804841e0(undefined8 param_1,undefined4 param_2,int param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 local_res20;
  
  local_res20 = param_4;
  uVar1 = FUN_180498660(param_1,PTR_s_not_enough_memory_180919000 + param_3,&local_res20);
                    /* WARNING: Subroutine does not return */
  FUN_180483bc0(param_1,param_2,uVar1);
}



/* ===== 180484220 FUN_180484220 ===== */

void FUN_180484220(undefined8 param_1,int param_2)

{
                    /* WARNING: Subroutine does not return */
  FUN_180484240(param_1,PTR_s_not_enough_memory_180919000 + param_2);
}



/* ===== 180484240 FUN_180484240 ===== */

void FUN_180484240(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = 0;
  lVar4 = 0;
  if (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x180) == 0) {
    lVar1 = *(longlong *)(param_1 + 0x20);
    uVar2 = *(ulonglong *)(lVar1 + -8);
    lVar4 = lVar1 + -8;
    if ((uVar2 & 3) == 0) {
      lVar3 = lVar4 - ((ulonglong)*(byte *)(uVar2 - 3) * 8 + 0x10);
    }
    else if (((byte)uVar2 & 7) == 2) {
      if (*(longlong *)(lVar1 + -0x20) == 1) {
        lVar3 = lVar4;
        lVar4 = 0;
      }
      else {
        lVar3 = lVar4 - (uVar2 & 0xfffffffffffffff8);
        if ((byte)(*(char *)((*(ulonglong *)(lVar1 + -0x10) & 0x7fffffffffff) + 10) + 0x58U) < 0x10)
        {
          *(longlong *)(param_1 + 0x20) = lVar3 + 8;
          *(longlong *)(param_1 + 0x28) = lVar4;
          *(undefined8 *)((*(ulonglong *)(param_1 + 0x50) & 0xfffffffffffffffc) + 0x60) =
               *(undefined8 *)(lVar1 + -0x18);
        }
      }
    }
  }
  FUN_180489ff0(param_1,param_2,lVar3,lVar4);
                    /* WARNING: Subroutine does not return */
  FUN_1804846a0(param_1);
}



/* ===== 1804842f0 FUN_1804842f0 ===== */

void FUN_1804842f0(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res18 = param_3;
  local_res20 = param_4;
  uVar1 = FUN_180498660(param_1,PTR_s_not_enough_memory_180919000 + param_2,&local_res18);
                    /* WARNING: Subroutine does not return */
  FUN_180484240(param_1,uVar1);
}



/* ===== 180484330 FUN_180484330 ===== */

void FUN_180484330(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  undefined8 uVar4;
  
  uVar3 = 0xd;
  uVar1 = (uint)((longlong)*param_2 >> 0x2f);
  if (uVar1 < 0xfffffff3) {
    uVar2 = 0xd;
  }
  else {
    uVar2 = (ulonglong)~uVar1;
  }
  uVar1 = (uint)((longlong)*param_3 >> 0x2f);
  if (0xfffffff2 < uVar1) {
    uVar3 = ~uVar1;
  }
  uVar4 = 0x12d;
  if ((&PTR_DAT_18056e940)[uVar2] == (&PTR_DAT_18056e940)[uVar3]) {
    uVar4 = 0x14b;
  }
                    /* WARNING: Subroutine does not return */
  FUN_180483c70(param_1,uVar4);
}



/* ===== 180484390 FUN_180484390 ===== */

void FUN_180484390(longlong param_1)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  
  puVar1 = *(ulonglong **)(param_1 + 0x28);
  *(ulonglong **)(param_1 + 0x28) = puVar1 + 1;
  uVar2 = FUN_1804848e0(param_1,0x12);
  *puVar1 = uVar2 | 0xfffd800000000000;
                    /* WARNING: Subroutine does not return */
  FUN_180484920(param_1,5);
}



/* ===== 1804843e0 FUN_1804843e0 ===== */

void FUN_1804843e0(undefined8 param_1,undefined8 param_2,longlong param_3,undefined4 param_4,
                  int param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 local_68 [64];
  
  FUN_18048abd0(local_68,param_2,param_4);
  uVar1 = FUN_180498660(param_1,PTR_s_not_enough_memory_180919000 + param_5,param_6);
  uVar2 = FUN_180498630(param_1,"%s:%d: %s",local_68,param_4,uVar1);
  if (param_3 != 0) {
    FUN_180498630(param_1,PTR_s_not_enough_memory_180919000 + 0x8be,uVar2,param_3,uVar1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_180484920(param_1,3);
}



/* ===== 180484480 FUN_180484480 ===== */

void FUN_180484480(ulonglong param_1)

{
  longlong lVar1;
  ulonglong *puVar2;
  code *pcVar3;
  ulonglong uVar4;
  
  if (*(char *)(param_1 + 0xb) == '\x05') {
    FUN_180484390();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (*(char *)(param_1 + 0xb) == '\x06') {
    FUN_180003147(*(undefined8 *)(param_1 + 0x50),4);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x180);
  if (lVar1 != 0) {
    *(longlong *)(param_1 + 0x20) = lVar1;
  }
  lVar1 = *(longlong *)(param_1 + 0x20);
  uVar4 = *(ulonglong *)(lVar1 + -0x10) & 0x7fffffffffff;
  if ((*(char *)(uVar4 + 10) == '\0') &&
     (uVar4 = lVar1 + (ulonglong)*(byte *)(*(longlong *)(uVar4 + 0x20) + -0x5d) * 8,
     *(ulonglong *)(param_1 + 0x28) = uVar4, *(ulonglong *)(param_1 + 0x30) < uVar4)) {
    *(longlong *)(param_1 + 0x28) = lVar1;
    *(ulonglong *)(lVar1 + -0x10) = param_1 | 0xfffc800000000000;
  }
  puVar2 = *(ulonglong **)(param_1 + 0x28);
  *(ulonglong **)(param_1 + 0x28) = puVar2 + 1;
  uVar4 = FUN_1804848e0(param_1,0);
  *puVar2 = uVar4 | 0xfffd800000000000;
                    /* WARNING: Subroutine does not return */
  FUN_180484920(param_1,4);
}



/* ===== 180484550 FUN_180484550 ===== */

void FUN_180484550(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_180483c70();
}



/* ===== 180484560 FUN_180484560 ===== */

void FUN_180484560(longlong param_1,undefined8 *param_2,int param_3)

{
  undefined *puVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined *puVar5;
  undefined8 local_res8;
  
  uVar2 = (uint)((longlong)*param_2 >> 0x2f);
  if (uVar2 < 0xfffffff3) {
    uVar3 = 0xd;
  }
  else {
    uVar3 = (ulonglong)~uVar2;
  }
  puVar1 = (&PTR_DAT_18056e940)[uVar3];
  puVar5 = PTR_s_not_enough_memory_180919000 + param_3;
  uVar3 = *(ulonglong *)(*(longlong *)(param_1 + 0x20) + -0x10) & 0x7fffffffffff;
  if (*(char *)(uVar3 + 10) == '\0') {
    local_res8 = 0;
    lVar4 = FUN_18048acf0(*(longlong *)(uVar3 + 0x20) + -0x68,
                          *(longlong *)
                           ((*(ulonglong *)(param_1 + 0x50) & 0xfffffffffffffffc) + 0x60) + -4,
                          (longlong)param_2 - *(longlong *)(param_1 + 0x20) >> 3,&local_res8);
    if (lVar4 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_180483c70(param_1,0xf1,puVar5,lVar4,local_res8,puVar1);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_180483c70(param_1,0x114,puVar5,puVar1);
}



/* ===== 180484630 FUN_180484630 ===== */

void FUN_180484630(ulonglong param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  undefined *puVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar1 = *(ulonglong *)((*(ulonglong *)(param_1 + 0x50) & 0xfffffffffffffffc) + 0x60);
  if ((uVar1 & 3) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_180484560(param_1,param_2,0x18e);
  }
  uVar3 = (uint)((longlong)*param_2 >> 0x2f);
  if (uVar3 < 0xfffffff3) {
    uVar4 = 0xd;
  }
  else {
    uVar4 = (ulonglong)~uVar3;
  }
  puVar2 = (&PTR_DAT_18056e940)[uVar4];
  param_2[1] = uVar1;
  *param_2 = param_1 | 0xfffc800000000000;
  *(ulonglong **)(param_1 + 0x20) = param_2 + 2;
  *(ulonglong **)(param_1 + 0x28) = param_2 + 2;
                    /* WARNING: Subroutine does not return */
  FUN_180483c70(param_1,0xd6,puVar2);
}



/* ===== 1804846a0 FUN_1804846a0 ===== */

void FUN_1804846a0(longlong param_1)

{
  uint *puVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong *puVar8;
  
  if (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x180) == 0) {
    lVar6 = *(longlong *)(param_1 + 0x38);
    uVar5 = *(ulonglong *)(param_1 + 0x50);
    puVar8 = (ulonglong *)(*(longlong *)(param_1 + 0x20) + -8);
    if ((ulonglong *)(lVar6 + 8U) < puVar8) {
      while (uVar5 != 0) {
        iVar2 = *(int *)((uVar5 & 0xfffffffffffffffc) + 0x50);
        while ((iVar2 < 0 && (puVar8 < (ulonglong *)(-*(int *)(uVar5 + 0x50) + lVar6)))) {
          iVar2 = *(int *)(uVar5 + 0x54);
          if (-1 < iVar2) goto LAB_1804847a2;
          uVar5 = *(ulonglong *)(uVar5 + 0x68);
          if (uVar5 == 0) goto LAB_180484794;
          iVar2 = *(int *)((uVar5 & 0xfffffffffffffffc) + 0x50);
        }
        uVar3 = *puVar8;
        switch((uint)uVar3 & 7) {
        default:
          lVar7 = (ulonglong)*(byte *)(uVar3 - 3) * -8 + -0x10;
          goto LAB_18048478b;
        case 1:
          goto switchD_180484752_caseD_1;
        case 2:
          if (puVar8[-3] == 1) goto switchD_180484752_caseD_1;
          break;
        case 3:
          break;
        case 5:
          if ((uVar5 & 1) != 0) goto LAB_180484794;
          iVar2 = *(int *)(uVar5 + 0x54);
          if (-1 < iVar2) {
LAB_1804847a2:
            lVar6 = (longlong)iVar2;
            goto LAB_1804847cc;
          }
switchD_180484752_caseD_1:
          uVar5 = *(ulonglong *)(uVar5 + 0x68);
          break;
        case 6:
        case 7:
          if (*(char *)((*(ulonglong *)((longlong)puVar8 + (-8 - (uVar3 & 0xfffffffffffffff8))) &
                        0x7fffffffffff) + 10) == '\x16') {
            lVar6 = (longlong)puVar8 + (-lVar6 - (uVar3 & 0xfffffffffffffff8)) + 8;
LAB_1804847cc:
            if (lVar6 != 0) {
              if (*(longlong *)(param_1 + 0x30) - *(longlong *)(param_1 + 0x28) < 0x141) {
                FUN_18048e920(param_1,0x28);
              }
              puVar1 = (uint *)(*(longlong *)(param_1 + 0x10) + 0x3d4);
              *puVar1 = *puVar1 & 0xffffffef;
              lVar7 = *(longlong *)(param_1 + 0x38);
              puVar4 = *(undefined8 **)(param_1 + 0x28);
              if (((int)((longlong)*(undefined8 *)(lVar7 + lVar6) >> 0x2f) != -9) ||
                 (*(char *)(param_1 + 0xb) == '\x05')) {
                uVar5 = FUN_1804848e0(param_1,0x12);
                puVar4[-1] = uVar5 | 0xfffd800000000000;
                    /* WARNING: Subroutine does not return */
                FUN_180484920(param_1,5);
              }
              *(undefined1 *)(param_1 + 0xb) = 5;
              puVar4[1] = puVar4[-1];
              puVar4[-1] = *(undefined8 *)(lVar7 + lVar6);
              *puVar4 = 0xffffffffffffffff;
              *(undefined8 **)(param_1 + 0x28) = puVar4 + 2;
              FUN_1800032b0(param_1,puVar4 + 1,2);
            }
          }
          goto LAB_180484794;
        }
        lVar7 = -(uVar3 & 0xfffffffffffffff8);
LAB_18048478b:
        puVar8 = (ulonglong *)((longlong)puVar8 + lVar7);
        if (puVar8 <= (ulonglong *)(lVar6 + 8U)) break;
      }
    }
  }
LAB_180484794:
                    /* WARNING: Subroutine does not return */
  FUN_180484920(param_1,2);
}



/* ===== 1804848a0 FUN_1804848a0 ===== */

void FUN_1804848a0(longlong param_1)

{
  code *pcVar1;
  
  if (*(char *)(param_1 + 0xb) != '\x05') {
    FUN_180489ff0(param_1,PTR_s_not_enough_memory_180919000 + 0x68,
                  *(longlong *)(param_1 + 0x20) + -8,0);
                    /* WARNING: Subroutine does not return */
    FUN_1804846a0(param_1);
  }
  FUN_180484390();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ===== 1804848e0 FUN_1804848e0 ===== */

void FUN_1804848e0(undefined8 param_1,int param_2)

{
  size_t sVar1;
  char *_Str;
  
  _Str = PTR_s_not_enough_memory_180919000 + param_2;
  sVar1 = strlen(_Str);
  FUN_180491d30(param_1,_Str,sVar1);
  return;
}



/* ===== 180484920 FUN_180484920 ===== */

void FUN_180484920(longlong param_1)

{
  uint *puVar1;
  code *pcVar2;
  
  puVar1 = (uint *)(*(longlong *)(param_1 + 0x10) + 0x3d4);
  *puVar1 = *puVar1 & 0xffffffef;
  *(undefined1 *)(param_1 + 0xb) = 0;
  FUN_180483d00();
  pcVar2 = *(code **)(*(longlong *)(param_1 + 0x10) + 0x168);
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)(param_1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_18051c3d4(1);
}



/* ===== 180484960 FUN_180484960 ===== */

void FUN_180484960(undefined8 param_1,int param_2)

{
  if (param_2 == 2) {
                    /* WARNING: Subroutine does not return */
    FUN_1804846a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_180484920();
}



/* ===== 180484980 FUN_180484980 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180484980(PEXCEPTION_RECORD param_1,PVOID param_2,ULONG_PTR param_3,longlong param_4)

{
  uint uVar1;
  int iVar2;
  PVOID pvVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong *puVar6;
  code *TargetIp;
  uint uVar7;
  PVOID pvVar8;
  EXCEPTION_RECORD *ExceptionRecord;
  undefined1 auStackY_118 [32];
  EXCEPTION_RECORD local_e8;
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStackY_118;
  uVar1 = param_1->ExceptionCode;
  pvVar3 = *(PVOID *)((longlong)param_2 + 0x58);
  uVar7 = uVar1 & 0xff;
  if (0xff < (uVar1 ^ 0xe24c4a00)) {
    uVar7 = 2;
  }
  if ((param_1->ExceptionFlags & 6) == 0) {
    pvVar8 = *(PVOID *)((longlong)pvVar3 + 0x50);
    if (pvVar8 != (PVOID)0x0) {
      puVar6 = (ulonglong *)(*(longlong *)((longlong)pvVar3 + 0x20) + -8);
      do {
        iVar2 = *(int *)(((ulonglong)pvVar8 & 0xfffffffffffffffc) + 0x50);
        if ((iVar2 < 0) &&
           (puVar6 < (ulonglong *)((longlong)-iVar2 + *(longlong *)((longlong)pvVar3 + 0x38))))
        goto switchD_180484a8d_caseD_5;
        if (puVar6 <= (ulonglong *)(*(longlong *)((longlong)pvVar3 + 0x38) + 8)) break;
        uVar5 = *puVar6;
        switch((uint)uVar5 & 7) {
        default:
          lVar4 = (ulonglong)*(byte *)(uVar5 - 3) * -8 + -0x10;
          goto LAB_180484ac1;
        case 1:
switchD_180484a8d_caseD_1:
          if (pvVar8 == param_2) {
            return 1;
          }
          pvVar8 = *(PVOID *)((longlong)pvVar8 + 0x68);
          break;
        case 2:
          if (puVar6[-3] == 1) goto switchD_180484a8d_caseD_1;
          break;
        case 3:
          break;
        case 5:
          goto switchD_180484a8d_caseD_5;
        case 6:
        case 7:
          pvVar8 = (PVOID)((ulonglong)pvVar8 | 2);
          goto switchD_180484a8d_caseD_5;
        }
        lVar4 = -(uVar5 & 0xfffffffffffffff8);
LAB_180484ac1:
        puVar6 = (ulonglong *)((longlong)puVar6 + lVar4);
      } while (pvVar8 != (PVOID)0x0);
    }
    pvVar8 = pvVar3;
switchD_180484a8d_caseD_5:
    if (pvVar8 != (PVOID)0x0) {
      if ((uVar1 == 0xe06d7363) || (uVar1 == 0x20474343)) {
        __DestructExceptionObject(param_1,1);
        puVar6 = *(ulonglong **)((longlong)pvVar3 + 0x28);
        *(ulonglong **)((longlong)pvVar3 + 0x28) = puVar6 + 1;
        uVar5 = FUN_1804848e0(pvVar3,0x2a);
        *puVar6 = uVar5 | 0xfffd800000000000;
      }
      else if (0xff < (uVar1 ^ 0xe24c4a00)) {
        return 1;
      }
      ExceptionRecord = param_1;
      if ((param_1->ExceptionCode ^ 0xe24c4a00) < 0x100) {
        ExceptionRecord = &local_e8;
        local_e8.ExceptionCode = 0x80000026;
        local_e8.ExceptionAddress = (PVOID)0x0;
        local_e8.NumberParameters = 1;
        local_e8.ExceptionRecord = param_1;
        local_e8.ExceptionInformation[0] = param_3;
      }
      if ((((ulonglong)pvVar8 & 2) == 0) || (TargetIp = (code *)&DAT_180003168, uVar7 == 1)) {
        TargetIp = FUN_180003147 + 5;
      }
      RtlUnwindEx(param_2,TargetIp,ExceptionRecord,(PVOID)(ulonglong)uVar7,
                  *(PCONTEXT *)(param_4 + 0x28),*(PUNWIND_HISTORY_TABLE *)(param_4 + 0x40));
    }
  }
  else {
    if ((((uVar1 == 0x80000026) && (param_1->ExceptionRecord != (_EXCEPTION_RECORD *)0x0)) &&
        (uVar1 = param_1->ExceptionRecord->ExceptionCode, (uVar1 ^ 0xe24c4a00) < 0x100)) &&
       (uVar7 = uVar1 & 0xff, (param_1->ExceptionFlags & 0x20) != 0)) {
      param_1->ExceptionCode = 0;
    }
    FUN_180483e60(pvVar3,param_2,uVar7);
  }
  return 1;
}



/* ===== 180484c00 FUN_180484c00 ===== */

void FUN_180484c00(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_180483bc0();
}



/* ===== 180484c10 FUN_180484c10 ===== */

void FUN_180484c10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res18 = param_3;
  local_res20 = param_4;
  uVar1 = FUN_180498660(param_1,param_2,&local_res18);
                    /* WARNING: Subroutine does not return */
  FUN_180484240(param_1,uVar1);
}



/* ===== 180484c40 FUN_180484c40 ===== */

void FUN_180484c40(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  int local_res18 [4];
  
  lVar1 = FUN_18048a470(param_1,param_2,local_res18);
  if (local_res18[0] == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1 + (longlong)local_res18[0] * 8;
  }
  FUN_180489ff0(param_1,&DAT_18058b643,lVar1,lVar2);
  return;
}



/* ===== 180484c80 FUN_180484c80 ===== */

void FUN_180484c80(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1804846a0();
}



/* ===== 180484c90 FUN_180484c90 ===== */

void FUN_180484c90(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  FUN_1804939e0();
  puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x28) + -8);
  if (param_2 < puVar1) {
    *param_2 = *puVar1;
    *(undefined8 **)(param_1 + 0x28) = param_2 + 1;
  }
  FUN_18048ea90(param_1);
  return;
}



/* ===== 180484ce0 FUN_180484ce0 ===== */

void FUN_180484ce0(longlong param_1)

{
  undefined8 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  
  if (1 < *(int *)(param_1 + 8)) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    uVar4 = 1;
    uVar2 = FUN_18047f0e0(uVar1,0xffffffff);
    do {
      uVar3 = FUN_18047f0e0(uVar1,~uVar4);
      if (((int)((*(int *)(param_1 + 8) - uVar4) + 1) < 10) && (uVar2 <= uVar3)) break;
      uVar2 = uVar2 + uVar3;
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < *(int *)(param_1 + 8));
    FUN_18047e7f0(uVar1,uVar4);
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + (1 - uVar4);
  }
  return;
}



/* ===== 180484d80 FUN_180484d80 ===== */

undefined8 FUN_180484d80(undefined8 param_1)

{
  undefined2 *puVar1;
  undefined8 uVar2;
  FILE *_File;
  undefined2 *puVar3;
  
  puVar1 = (undefined2 *)FUN_18047fc70(param_1,0xffffffff,0);
  uVar2 = __acrt_iob_func(2);
  FUN_18051c4a4("ERROR in finalizer: ",uVar2);
  uVar2 = __acrt_iob_func(2);
  puVar3 = &DAT_1806dfbb4;
  if (puVar1 != (undefined2 *)0x0) {
    puVar3 = puVar1;
  }
  FUN_18051c4a4(puVar3,uVar2);
  uVar2 = __acrt_iob_func(2);
  FUN_18050ff88(10,uVar2);
  _File = (FILE *)__acrt_iob_func(2);
  fflush(_File);
  return 0;
}



/* ===== 180484e00 FUN_180484e00 ===== */

void FUN_180484e00(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  longlong *plVar1;
  
  plVar1 = param_1 + 3;
  if (param_3 <= (ulonglong)((longlong)plVar1 + (0x200 - *param_1))) {
    FUN_180540530();
    *param_1 = *param_1 + param_3;
    return;
  }
  if (*param_1 - (longlong)param_1 != 0x18) {
    FUN_18047f450(param_1[2],plVar1);
    *(int *)(param_1 + 1) = (int)param_1[1] + 1;
    *param_1 = (longlong)plVar1;
  }
  FUN_18047f450(param_1[2],param_2,param_3);
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  FUN_180484ce0(param_1);
  return;
}



/* ===== 180484e80 FUN_180484e80 ===== */

void FUN_180484e80(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong local_res8;
  
  lVar1 = param_1[2];
  uVar3 = FUN_18047fc70(lVar1,0xffffffff,&local_res8);
  lVar2 = *param_1;
  if (local_res8 <= (ulonglong)((longlong)param_1 + (0x218 - lVar2))) {
    FUN_180540530(lVar2,uVar3);
    *param_1 = *param_1 + local_res8;
    FUN_18047fb50(lVar1,0xfffffffe);
    return;
  }
  if (lVar2 - (longlong)param_1 != 0x18) {
    FUN_18047f450(param_1[2],param_1 + 3);
    *(int *)(param_1 + 1) = (int)param_1[1] + 1;
    *param_1 = (longlong)(param_1 + 3);
    FUN_18047ed50(lVar1,0xfffffffe);
  }
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  FUN_180484ce0(param_1);
  return;
}



/* ===== 180484f40 FUN_180484f40 ===== */

void FUN_180484f40(longlong param_1,longlong *param_2)

{
  param_2[2] = param_1;
  *param_2 = (longlong)(param_2 + 3);
  *(undefined4 *)(param_2 + 1) = 0;
  return;
}



