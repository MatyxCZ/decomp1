/* ===== 18047fe10 FUN_18047fe10 ===== */

uint FUN_18047fe10(longlong param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  
  puVar1 = (undefined8 *)FUN_18047dde0();
  uVar2 = (uint)((longlong)*puVar1 >> 0x2f);
  if (uVar2 < 0xfffffff3) {
    return 3;
  }
  if (puVar1 == (undefined8 *)(*(longlong *)(param_1 + 0x10) + 0xf8)) {
    return 0xffffffff;
  }
  return (uint)(0x75a0698042110 >> ((byte)(~uVar2 << 2) & 0x3f)) & 0xf;
}



/* ===== 18047fe70 FUN_18047fe70 ===== */

undefined * FUN_18047fe70(undefined8 param_1,int param_2)

{
  return (&PTR_DAT_18056e8e8)[param_2];
}



/* ===== 18047fe80 __swprintf_l ===== */

int __cdecl __swprintf_l(wchar_t *_Dest,wchar_t *_Format,_locale_t _Plocinfo,...)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 in_R9;
  undefined8 local_res20;
  
                    /* 0x47fe80  1  __swprintf_l */
  local_res20 = in_R9;
  puVar2 = (undefined8 *)FUN_180013640();
  iVar1 = FUN_180501d24(*puVar2,_Dest,0xffffffffffffffff,_Format,_Plocinfo,&local_res20);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}



/* ===== 18047fee0 __vswprintf_l ===== */

int __cdecl __vswprintf_l(wchar_t *_Dest,wchar_t *_Format,_locale_t _Plocinfo,va_list _Args)

{
  int iVar1;
  undefined8 *puVar2;
  
                    /* 0x47fee0  2  __vswprintf_l */
  puVar2 = (undefined8 *)FUN_180013640();
  iVar1 = FUN_180501d24(*puVar2,_Dest,0xffffffffffffffff,_Format,_Plocinfo,_Args);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}



/* ===== 18047ff30 _fprintf_l ===== */

int __cdecl _fprintf_l(FILE *_File,char *_Format,_locale_t _Locale,...)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 in_R9;
  undefined8 local_res20;
  
                    /* 0x47ff30  3  _fprintf_l */
  local_res20 = in_R9;
  puVar1 = (undefined8 *)FUN_180013640();
  iVar2 = FUN_180500ea4(*puVar1,_File,_Format,_Locale,&local_res20);
  return iVar2;
}



/* ===== 18047ff80 _fprintf_p ===== */

int __cdecl _fprintf_p(FILE *_File,char *_Format,...)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 in_R8;
  undefined8 in_R9;
  undefined8 local_res18;
  undefined8 local_res20;
  
                    /* 0x47ff80  4  _fprintf_p */
  local_res18 = in_R8;
  local_res20 = in_R9;
  puVar1 = (undefined8 *)FUN_180013640();
  iVar2 = FUN_180500fc8(*puVar1,_File,_Format,0,&local_res18);
  return iVar2;
}



/* ===== 18047ffd0 _fprintf_p_l ===== */

int __cdecl _fprintf_p_l(FILE *_File,char *_Format,_locale_t _Locale,...)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 in_R9;
  undefined8 local_res20;
  
                    /* 0x47ffd0  5  _fprintf_p_l */
  local_res20 = in_R9;
  puVar1 = (undefined8 *)FUN_180013640();
  iVar2 = FUN_180500fc8(*puVar1,_File,_Format,_Locale,&local_res20);
  return iVar2;
}



/* ===== 180480020 _fprintf_s_l ===== */

int __cdecl _fprintf_s_l(FILE *_File,char *_Format,_locale_t _Locale,...)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 in_R9;
  undefined8 local_res20;
  
                    /* 0x480020  6  _fprintf_s_l */
  local_res20 = in_R9;
  puVar1 = (undefined8 *)FUN_180013640();
  iVar2 = FUN_1805010ec(*puVar1,_File,_Format,_Locale,&local_res20);
  return iVar2;
}



/* ===== 180480070 _fscanf_l ===== */

int __cdecl _fscanf_l(FILE *_File,char *_Format,_locale_t _Locale,...)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 in_R9;
  undefined8 local_res20;
  
                    /* 0x480070  7  _fscanf_l */
  local_res20 = in_R9;
  puVar1 = (undefined8 *)FUN_180013650();
  iVar2 = FID_conflict___stdio_common_vfwscanf(*puVar1,_File,_Format,_Locale,&local_res20);
  return iVar2;
}



/* ===== 1804800c0 _fscanf_s_l ===== */

int __cdecl _fscanf_s_l(FILE *_File,char *_Format,_locale_t _Locale,...)

{
  ulonglong *puVar1;
  int iVar2;
  undefined8 in_R9;
  undefined8 local_res20;
  
                    /* 0x4800c0  8  _fscanf_s_l */
  local_res20 = in_R9;
  puVar1 = (ulonglong *)FUN_180013650();
  iVar2 = FID_conflict___stdio_common_vfwscanf(*puVar1 | 1,_File,_Format,_Locale,&local_res20);
  return iVar2;
}



/* ===== 180480110 _fwprintf_l ===== */

int __cdecl _fwprintf_l(FILE *_File,wchar_t *_Format,_locale_t _Locale,...)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 in_R9;
  undefined8 local_res20;
  
                    /* 0x480110  9  _fwprintf_l */
  local_res20 = in_R9;
  puVar1 = (undefined8 *)FUN_180013640();
  iVar2 = FUN_180501210(*puVar1,_File,_Format,_Locale,&local_res20);
  return iVar2;
}



/* ===== 180480160 _fwprintf_p ===== */

int __cdecl _fwprintf_p(FILE *_File,wchar_t *_Format,...)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 in_R8;
  undefined8 in_R9;
  undefined8 local_res18;
  undefined8 local_res20;
  
                    /* 0x480160  10  _fwprintf_p */
  local_res18 = in_R8;
  local_res20 = in_R9;
  puVar1 = (undefined8 *)FUN_180013640();
  iVar2 = FUN_180501334(*puVar1,_File,_Format,0,&local_res18);
  return iVar2;
}



/* ===== 1804801b0 _fwprintf_p_l ===== */

int __cdecl _fwprintf_p_l(FILE *_File,wchar_t *_Format,_locale_t _Locale,...)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 in_R9;
  undefined8 local_res20;
  
                    /* 0x4801b0  11  _fwprintf_p_l */
  local_res20 = in_R9;
  puVar1 = (undefined8 *)FUN_180013640();
  iVar2 = FUN_180501334(*puVar1,_File,_Format,_Locale,&local_res20);
  return iVar2;
}



/* ===== 180480200 _fwprintf_s_l ===== */

int __cdecl _fwprintf_s_l(FILE *_File,wchar_t *_Format,_locale_t _Locale,...)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 in_R9;
  undefined8 local_res20;
  
                    /* 0x480200  12  _fwprintf_s_l */
  local_res20 = in_R9;
  puVar1 = (undefined8 *)FUN_180013640();
  iVar2 = FUN_180501458(*puVar1,_File,_Format,_Locale,&local_res20);
  return iVar2;
}



/* ===== 180480250 _fwscanf_l ===== */

int __cdecl _fwscanf_l(FILE *_File,wchar_t *_Format,_locale_t _Locale,...)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 in_R9;
  undefined8 local_res20;
  
                    /* 0x480250  13  _fwscanf_l */
  local_res20 = in_R9;
  puVar1 = (undefined8 *)FUN_180013650();
  iVar2 = FID_conflict___stdio_common_vfwscanf(*puVar1,_File,_Format,_Locale,&local_res20);
  return iVar2;
}



/* ===== 1804802a0 _fwscanf_s_l ===== */

int __cdecl _fwscanf_s_l(FILE *_File,wchar_t *_Format,_locale_t _Locale,...)

{
  ulonglong *puVar1;
  int iVar2;
  undefined8 in_R9;
  undefined8 local_res20;
  
                    /* 0x4802a0  14  _fwscanf_s_l */
  local_res20 = in_R9;
  puVar1 = (ulonglong *)FUN_180013650();
  iVar2 = FID_conflict___stdio_common_vfwscanf(*puVar1 | 1,_File,_Format,_Locale,&local_res20);
  return iVar2;
}



/* ===== 1804802f0 _printf_l ===== */

int __cdecl _printf_l(char *_Format,_locale_t _Locale,...)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 in_R8;
  undefined8 in_R9;
  undefined8 local_res18;
  undefined8 local_res20;
  
                    /* 0x4802f0  15  _printf_l */
  local_res18 = in_R8;
  local_res20 = in_R9;
  uVar1 = __acrt_iob_func(1);
  puVar2 = (undefined8 *)FUN_180013640();
  iVar3 = FUN_180500ea4(*puVar2,uVar1,_Format,_Locale,&local_res18);
  return iVar3;
}



/* ===== 180480350 _printf_p ===== */

int __cdecl _printf_p(char *_Format,...)

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
  
                    /* 0x480350  16  _printf_p */
  local_res10 = in_RDX;
  local_res18 = in_R8;
  local_res20 = in_R9;
  uVar1 = __acrt_iob_func(1);
  puVar2 = (undefined8 *)FUN_180013640();
  iVar3 = FUN_180500fc8(*puVar2,uVar1,_Format,0,&local_res10);
  return iVar3;
}



/* ===== 1804803b0 _printf_p_l ===== */

int __cdecl _printf_p_l(char *_Format,_locale_t _Locale,...)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 in_R8;
  undefined8 in_R9;
  undefined8 local_res18;
  undefined8 local_res20;
  
                    /* 0x4803b0  17  _printf_p_l */
  local_res18 = in_R8;
  local_res20 = in_R9;
  uVar1 = __acrt_iob_func(1);
  puVar2 = (undefined8 *)FUN_180013640();
  iVar3 = FUN_180500fc8(*puVar2,uVar1,_Format,_Locale,&local_res18);
  return iVar3;
}



/* ===== 180480410 _printf_s_l ===== */

int __cdecl _printf_s_l(char *_Format,_locale_t _Locale,...)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 in_R8;
  undefined8 in_R9;
  undefined8 local_res18;
  undefined8 local_res20;
  
                    /* 0x480410  18  _printf_s_l */
  local_res18 = in_R8;
  local_res20 = in_R9;
  uVar1 = __acrt_iob_func(1);
  puVar2 = (undefined8 *)FUN_180013640();
  iVar3 = FUN_1805010ec(*puVar2,uVar1,_Format,_Locale,&local_res18);
  return iVar3;
}



/* ===== 180480470 _scanf_l ===== */

int __cdecl _scanf_l(char *_Format,_locale_t _Locale,...)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 in_R8;
  undefined8 in_R9;
  undefined8 local_res18;
  undefined8 local_res20;
  
                    /* 0x480470  19  _scanf_l */
  local_res18 = in_R8;
  local_res20 = in_R9;
  uVar1 = __acrt_iob_func(0);
  puVar2 = (undefined8 *)FUN_180013650();
  iVar3 = FID_conflict___stdio_common_vfwscanf(*puVar2,uVar1,_Format,_Locale,&local_res18);
  return iVar3;
}



/* ===== 1804804c0 _scanf_s_l ===== */

int __cdecl _scanf_s_l(char *_Format,_locale_t _Locale,...)

{
  undefined8 uVar1;
  ulonglong *puVar2;
  int iVar3;
  undefined8 in_R8;
  undefined8 in_R9;
  undefined8 local_res18;
  undefined8 local_res20;
  
                    /* 0x4804c0  20  _scanf_s_l */
  local_res18 = in_R8;
  local_res20 = in_R9;
  uVar1 = __acrt_iob_func(0);
  puVar2 = (ulonglong *)FUN_180013650();
  iVar3 = FID_conflict___stdio_common_vfwscanf(*puVar2 | 1,uVar1,_Format,_Locale,&local_res18);
  return iVar3;
}



/* ===== 180480520 _scprintf_l ===== */

int __cdecl _scprintf_l(char *_Format,_locale_t _Locale,...)

{
  int iVar1;
  ulonglong *puVar2;
  undefined8 in_R8;
  undefined8 in_R9;
  undefined8 local_res18;
  undefined8 local_res20;
  
                    /* 0x480520  22  _scprintf_l */
  local_res18 = in_R8;
  local_res20 = in_R9;
  puVar2 = (ulonglong *)FUN_180013640();
  iVar1 = FUN_180501904(*puVar2 | 2,0,0,_Format,_Locale,&local_res18);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}



/* ===== 180480580 _scprintf_p ===== */

int __cdecl _scprintf_p(char *_Format,...)

{
  int iVar1;
  ulonglong *puVar2;
  undefined8 in_RDX;
  undefined8 in_R8;
  undefined8 in_R9;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  
                    /* 0x480580  23  _scprintf_p */
  local_res10 = in_RDX;
  local_res18 = in_R8;
  local_res20 = in_R9;
  puVar2 = (ulonglong *)FUN_180013640();
  iVar1 = FUN_180501b58(*puVar2 | 2,0,0,_Format,0,&local_res10);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}



/* ===== 1804805e0 _scprintf_p_l ===== */

int __cdecl _scprintf_p_l(char *_Format,_locale_t _Locale,...)

{
  int iVar1;
  ulonglong *puVar2;
  undefined8 in_R8;
  undefined8 in_R9;
  undefined8 local_res18;
  undefined8 local_res20;
  
                    /* 0x4805e0  24  _scprintf_p_l */
  local_res18 = in_R8;
  local_res20 = in_R9;
  puVar2 = (ulonglong *)FUN_180013640();
  iVar1 = FUN_180501b58(*puVar2 | 2,0,0,_Format,_Locale,&local_res18);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}



/* ===== 180480640 _scwprintf ===== */

int __cdecl _scwprintf(wchar_t *_Format,...)

{
  int iVar1;
  ulonglong *puVar2;
  undefined8 in_RDX;
  undefined8 in_R8;
  undefined8 in_R9;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  
                    /* 0x480640  25  _scwprintf */
  local_res10 = in_RDX;
  local_res18 = in_R8;
  local_res20 = in_R9;
  puVar2 = (ulonglong *)FUN_180013640();
  iVar1 = FUN_180501d24(*puVar2 | 2,0,0,_Format,0,&local_res10);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}



/* ===== 1804806a0 _scwprintf_l ===== */

int __cdecl _scwprintf_l(wchar_t *_Format,_locale_t _Locale,...)

{
  int iVar1;
  ulonglong *puVar2;
  undefined8 in_R8;
  undefined8 in_R9;
  undefined8 local_res18;
  undefined8 local_res20;
  
                    /* 0x4806a0  26  _scwprintf_l */
  local_res18 = in_R8;
  local_res20 = in_R9;
  puVar2 = (ulonglong *)FUN_180013640();
  iVar1 = FUN_180501d24(*puVar2 | 2,0,0,_Format,_Locale,&local_res18);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}



/* ===== 180480700 _scwprintf_p ===== */

int __cdecl _scwprintf_p(wchar_t *_Format,...)

{
  int iVar1;
  ulonglong *puVar2;
  undefined8 in_RDX;
  undefined8 in_R8;
  undefined8 in_R9;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  
                    /* 0x480700  27  _scwprintf_p */
  local_res10 = in_RDX;
  local_res18 = in_R8;
  local_res20 = in_R9;
  puVar2 = (ulonglong *)FUN_180013640();
  iVar1 = FUN_180501f80(*puVar2 | 2,0,0,_Format,0,&local_res10);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}



/* ===== 180480760 _scwprintf_p_l ===== */

int __cdecl _scwprintf_p_l(wchar_t *_Format,_locale_t _Locale,...)

{
  int iVar1;
  ulonglong *puVar2;
  undefined8 in_R8;
  undefined8 in_R9;
  undefined8 local_res18;
  undefined8 local_res20;
  
                    /* 0x480760  28  _scwprintf_p_l */
  local_res18 = in_R8;
  local_res20 = in_R9;
  puVar2 = (ulonglong *)FUN_180013640();
  iVar1 = FUN_180501f80(*puVar2 | 2,0,0,_Format,_Locale,&local_res18);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}



/* ===== 1804807c0 _snprintf ===== */

int __cdecl _snprintf(char *_Dest,size_t _Count,char *_Format,...)

{
  int iVar1;
  ulonglong *puVar2;
  undefined8 in_R9;
  undefined8 local_res20;
  
                    /* 0x4807c0  29  _snprintf */
  local_res20 = in_R9;
  puVar2 = (ulonglong *)FUN_180013640();
  iVar1 = FUN_180501904(*puVar2 | 1,_Dest,_Count,_Format,0,&local_res20);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}



/* ===== 180480820 _snprintf_c ===== */

int __cdecl _snprintf_c(char *_DstBuf,size_t _MaxCount,char *_Format,...)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 in_R9;
  undefined8 local_res20;
  
                    /* 0x480820  30  _snprintf_c */
  local_res20 = in_R9;
  puVar2 = (undefined8 *)FUN_180013640();
  iVar1 = FUN_180501904(*puVar2,_DstBuf,_MaxCount,_Format,0,&local_res20);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}



/* ===== 180480880 _snprintf_c_l ===== */

int __cdecl _snprintf_c_l(char *_DstBuf,size_t _MaxCount,char *_Format,_locale_t _Locale,...)

{
  int iVar1;
  undefined8 *puVar2;
  undefined1 uStack0000000000000028;
  
                    /* 0x480880  31  _snprintf_c_l */
  puVar2 = (undefined8 *)FUN_180013640();
  iVar1 = FUN_180501904(*puVar2,_DstBuf,_MaxCount,_Format,_Locale,&uStack0000000000000028);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}



/* ===== 1804808e0 _snprintf_l ===== */

int __cdecl _snprintf_l(char *_DstBuf,size_t _MaxCount,char *_Format,_locale_t _Locale,...)

{
  int iVar1;
  ulonglong *puVar2;
  undefined1 uStack0000000000000028;
  
                    /* 0x4808e0  32  _snprintf_l */
  puVar2 = (ulonglong *)FUN_180013640();
  iVar1 = FUN_180501904(*puVar2 | 1,_DstBuf,_MaxCount,_Format,_Locale,&uStack0000000000000028);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}



/* ===== 180480940 _snprintf_s ===== */

int __cdecl _snprintf_s(char *_DstBuf,size_t _SizeInBytes,size_t _MaxCount,char *_Format,...)

{
  int iVar1;
  undefined8 *puVar2;
  undefined1 uStack0000000000000028;
  
                    /* 0x480940  33  _snprintf_s */
  puVar2 = (undefined8 *)FUN_180013640();
  iVar1 = FUN_18050157c(*puVar2,_DstBuf,_SizeInBytes,_MaxCount,_Format,0,&uStack0000000000000028);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}



/* ===== 1804809b0 _snprintf_s_l ===== */

int __cdecl
_snprintf_s_l(char *_DstBuf,size_t _DstSize,size_t _MaxCount,char *_Format,_locale_t _Locale,...)

{
  int iVar1;
  undefined8 *puVar2;
  undefined1 uStack0000000000000030;
  
                    /* 0x4809b0  34  _snprintf_s_l */
  puVar2 = (undefined8 *)FUN_180013640();
  iVar1 = FUN_18050157c(*puVar2,_DstBuf,_DstSize,_MaxCount,_Format,_Locale,&uStack0000000000000030);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}



/* ===== 180480a10 _snscanf ===== */

int __cdecl _snscanf(char *_Src,size_t _MaxCount,char *_Format,...)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 in_R9;
  undefined8 local_res20;
  
                    /* 0x480a10  35  _snscanf */
  local_res20 = in_R9;
  puVar1 = (undefined8 *)FUN_180013650();
  iVar2 = FUN_18050fa44(*puVar1,_Src,_MaxCount,_Format,0,&local_res20);
  return iVar2;
}



/* ===== 180480a60 _snscanf_l ===== */

int __cdecl _snscanf_l(char *_Src,size_t _MaxCount,char *_Format,_locale_t _Locale,...)

{
  undefined8 *puVar1;
  int iVar2;
  undefined1 uStack0000000000000028;
  
                    /* 0x480a60  36  _snscanf_l */
  puVar1 = (undefined8 *)FUN_180013650();
  iVar2 = FUN_18050fa44(*puVar1,_Src,_MaxCount,_Format,_Locale,&uStack0000000000000028);
  return iVar2;
}



/* ===== 180480ab0 _snscanf_s ===== */

int __cdecl _snscanf_s(char *_Src,size_t _MaxCount,char *_Format,...)

{
  ulonglong *puVar1;
  int iVar2;
  undefined8 in_R9;
  undefined8 local_res20;
  
                    /* 0x480ab0  37  _snscanf_s */
  local_res20 = in_R9;
  puVar1 = (ulonglong *)FUN_180013650();
  iVar2 = FUN_18050fa44(*puVar1 | 1,_Src,_MaxCount,_Format,0,&local_res20);
  return iVar2;
}



/* ===== 180480b10 _snscanf_s_l ===== */

int __cdecl _snscanf_s_l(char *_Src,size_t _MaxCount,char *_Format,_locale_t _Locale,...)

{
  ulonglong *puVar1;
  int iVar2;
  undefined1 uStack0000000000000028;
  
                    /* 0x480b10  38  _snscanf_s_l */
  puVar1 = (ulonglong *)FUN_180013650();
  iVar2 = FUN_18050fa44(*puVar1 | 1,_Src,_MaxCount,_Format,_Locale,&uStack0000000000000028);
  return iVar2;
}



/* ===== 180480b70 _snwprintf ===== */

int __cdecl _snwprintf(wchar_t *_Dest,size_t _Count,wchar_t *_Format,...)

{
  int iVar1;
  ulonglong *puVar2;
  undefined8 in_R9;
  undefined8 local_res20;
  
                    /* 0x480b70  39  _snwprintf */
  local_res20 = in_R9;
  puVar2 = (ulonglong *)FUN_180013640();
  iVar1 = FUN_180501d24(*puVar2 | 1,_Dest,_Count,_Format,0,&local_res20);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}



/* ===== 180480bd0 _snwprintf_l ===== */

int __cdecl _snwprintf_l(wchar_t *_DstBuf,size_t _MaxCount,wchar_t *_Format,_locale_t _Locale,...)

{
  int iVar1;
  ulonglong *puVar2;
  undefined1 uStack0000000000000028;
  
                    /* 0x480bd0  40  _snwprintf_l */
  puVar2 = (ulonglong *)FUN_180013640();
  iVar1 = FUN_180501d24(*puVar2 | 1,_DstBuf,_MaxCount,_Format,_Locale,&uStack0000000000000028);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}



/* ===== 180480c30 _snwprintf_s ===== */

int __cdecl _snwprintf_s(wchar_t *_DstBuf,size_t _SizeInWords,size_t _MaxCount,wchar_t *_Format,...)

{
  int iVar1;
  undefined8 *puVar2;
  undefined1 uStack0000000000000028;
  
                    /* 0x480c30  41  _snwprintf_s */
  puVar2 = (undefined8 *)FUN_180013640();
  iVar1 = FUN_180501740(*puVar2,_DstBuf,_SizeInWords,_MaxCount,_Format,0,&uStack0000000000000028);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}



/* ===== 180480ca0 _snwprintf_s_l ===== */

int __cdecl
_snwprintf_s_l(wchar_t *_DstBuf,size_t _DstSize,size_t _MaxCount,wchar_t *_Format,_locale_t _Locale,
              ...)

{
  int iVar1;
  undefined8 *puVar2;
  undefined1 uStack0000000000000030;
  
                    /* 0x480ca0  42  _snwprintf_s_l */
  puVar2 = (undefined8 *)FUN_180013640();
  iVar1 = FUN_180501740(*puVar2,_DstBuf,_DstSize,_MaxCount,_Format,_Locale,&uStack0000000000000030);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}



/* ===== 180480d00 _snwscanf ===== */

int __cdecl _snwscanf(wchar_t *_Src,size_t _MaxCount,wchar_t *_Format,...)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 in_R9;
  undefined8 local_res20;
  
                    /* 0x480d00  43  _snwscanf */
  local_res20 = in_R9;
  puVar1 = (undefined8 *)FUN_180013650();
  iVar2 = FUN_18050fb68(*puVar1,_Src,_MaxCount,_Format,0,&local_res20);
  return iVar2;
}



/* ===== 180480d50 _snwscanf_l ===== */

int __cdecl _snwscanf_l(wchar_t *_Src,size_t _MaxCount,wchar_t *_Format,_locale_t _Locale,...)

{
  undefined8 *puVar1;
  int iVar2;
  undefined1 uStack0000000000000028;
  
                    /* 0x480d50  44  _snwscanf_l */
  puVar1 = (undefined8 *)FUN_180013650();
  iVar2 = FUN_18050fb68(*puVar1,_Src,_MaxCount,_Format,_Locale,&uStack0000000000000028);
  return iVar2;
}



/* ===== 180480da0 _snwscanf_s ===== */

int __cdecl _snwscanf_s(wchar_t *_Src,size_t _MaxCount,wchar_t *_Format,...)

{
  ulonglong *puVar1;
  int iVar2;
  undefined8 in_R9;
  undefined8 local_res20;
  
                    /* 0x480da0  45  _snwscanf_s */
  local_res20 = in_R9;
  puVar1 = (ulonglong *)FUN_180013650();
  iVar2 = FUN_18050fb68(*puVar1 | 1,_Src,_MaxCount,_Format,0,&local_res20);
  return iVar2;
}



/* ===== 180480e00 _snwscanf_s_l ===== */

int __cdecl _snwscanf_s_l(wchar_t *_Src,size_t _MaxCount,wchar_t *_Format,_locale_t _Locale,...)

{
  ulonglong *puVar1;
  int iVar2;
  undefined1 uStack0000000000000028;
  
                    /* 0x480e00  46  _snwscanf_s_l */
  puVar1 = (ulonglong *)FUN_180013650();
  iVar2 = FUN_18050fb68(*puVar1 | 1,_Src,_MaxCount,_Format,_Locale,&uStack0000000000000028);
  return iVar2;
}



/* ===== 180480e60 _sprintf_l ===== */

int __cdecl _sprintf_l(char *_DstBuf,char *_Format,_locale_t _Locale,...)

{
  int iVar1;
  ulonglong *puVar2;
  undefined8 in_R9;
  undefined8 local_res20;
  
                    /* 0x480e60  47  _sprintf_l */
  local_res20 = in_R9;
  puVar2 = (ulonglong *)FUN_180013640();
  iVar1 = FUN_180501904(*puVar2 | 1,_DstBuf,0xffffffffffffffff,_Format,_Locale,&local_res20);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}



/* ===== 180480ec0 _sprintf_p ===== */

int __cdecl _sprintf_p(char *_Dst,size_t _MaxCount,char *_Format,...)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 in_R9;
  undefined8 local_res20;
  
                    /* 0x480ec0  48  _sprintf_p */
  local_res20 = in_R9;
  puVar2 = (undefined8 *)FUN_180013640();
  iVar1 = FUN_180501b58(*puVar2,_Dst,_MaxCount,_Format,0,&local_res20);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}



/* ===== 180480f20 _sprintf_p_l ===== */

int __cdecl _sprintf_p_l(char *_DstBuf,size_t _MaxCount,char *_Format,_locale_t _Locale,...)

{
  int iVar1;
  undefined8 *puVar2;
  undefined1 uStack0000000000000028;
  
                    /* 0x480f20  49  _sprintf_p_l */
  puVar2 = (undefined8 *)FUN_180013640();
  iVar1 = FUN_180501b58(*puVar2,_DstBuf,_MaxCount,_Format,_Locale,&uStack0000000000000028);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}



/* ===== 180480f80 _sprintf_s_l ===== */

int __cdecl _sprintf_s_l(char *_DstBuf,size_t _DstSize,char *_Format,_locale_t _Locale,...)

{
  int iVar1;
  undefined8 *puVar2;
  undefined1 uStack0000000000000028;
  
                    /* 0x480f80  50  _sprintf_s_l */
  puVar2 = (undefined8 *)FUN_180013640();
  iVar1 = FUN_180501c10(*puVar2,_DstBuf,_DstSize,_Format,_Locale,&uStack0000000000000028);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}



/* ===== 180480fe0 _sscanf_l ===== */

int __cdecl _sscanf_l(char *_Src,char *_Format,_locale_t _Locale,...)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 in_R9;
  undefined8 local_res20;
  
                    /* 0x480fe0  51  _sscanf_l */
  local_res20 = in_R9;
  puVar1 = (undefined8 *)FUN_180013650();
  iVar2 = FUN_18050fa44(*puVar1,_Src,0xffffffffffffffff,_Format,_Locale,&local_res20);
  return iVar2;
}



/* ===== 180481030 _sscanf_s_l ===== */

int __cdecl _sscanf_s_l(char *_Src,char *_Format,_locale_t _Locale,...)

{
  ulonglong *puVar1;
  int iVar2;
  undefined8 in_R9;
  undefined8 local_res20;
  
                    /* 0x481030  52  _sscanf_s_l */
  local_res20 = in_R9;
  puVar1 = (ulonglong *)FUN_180013650();
  iVar2 = FUN_18050fa44(*puVar1 | 1,_Src,0xffffffffffffffff,_Format,_Locale,&local_res20);
  return iVar2;
}



/* ===== 180481090 _swprintf ===== */

int __cdecl _swprintf(wchar_t *_Dest,wchar_t *_Format,...)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 in_R8;
  undefined8 in_R9;
  undefined8 local_res18;
  undefined8 local_res20;
  
                    /* 0x481090  53  _swprintf */
  local_res18 = in_R8;
  local_res20 = in_R9;
  puVar2 = (undefined8 *)FUN_180013640();
  iVar1 = FUN_180501d24(*puVar2,_Dest,0xffffffffffffffff,_Format,0,&local_res18);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}



/* ===== 1804810f0 _swprintf_c ===== */

int _swprintf_c(wchar_t *_String,size_t _Count,wchar_t *_Format,...)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 in_R9;
  undefined8 local_res20;
  
                    /* 0x4810f0  54  _swprintf_c
                       0x4810f0  144  swprintf */
  local_res20 = in_R9;
  puVar2 = (undefined8 *)FUN_180013640();
  iVar1 = FUN_180501d24(*puVar2,_String,_Count,_Format,0,&local_res20);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}



/* ===== 180481150 _swprintf_c_l ===== */

int _swprintf_c_l(wchar_t *_String,size_t _Count,wchar_t *_Format,_locale_t _Plocinfo,...)

{
  int iVar1;
  undefined8 *puVar2;
  undefined1 uStack0000000000000028;
  
                    /* 0x481150  55  _swprintf_c_l
                       0x481150  56  _swprintf_l */
  puVar2 = (undefined8 *)FUN_180013640();
  iVar1 = FUN_180501d24(*puVar2,_String,_Count,_Format,_Plocinfo,&uStack0000000000000028);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}



/* ===== 1804811b0 _swprintf_p ===== */

int __cdecl _swprintf_p(wchar_t *_DstBuf,size_t _MaxCount,wchar_t *_Format,...)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 in_R9;
  undefined8 local_res20;
  
                    /* 0x4811b0  57  _swprintf_p */
  local_res20 = in_R9;
  puVar2 = (undefined8 *)FUN_180013640();
  iVar1 = FUN_180501f80(*puVar2,_DstBuf,_MaxCount,_Format,0,&local_res20);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}



/* ===== 180481210 _swprintf_p_l ===== */

int __cdecl _swprintf_p_l(wchar_t *_DstBuf,size_t _MaxCount,wchar_t *_Format,_locale_t _Locale,...)

{
  int iVar1;
  undefined8 *puVar2;
  undefined1 uStack0000000000000028;
  
                    /* 0x481210  58  _swprintf_p_l */
  puVar2 = (undefined8 *)FUN_180013640();
  iVar1 = FUN_180501f80(*puVar2,_DstBuf,_MaxCount,_Format,_Locale,&uStack0000000000000028);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}



/* ===== 180481270 _swprintf_s_l ===== */

int __cdecl _swprintf_s_l(wchar_t *_DstBuf,size_t _DstSize,wchar_t *_Format,_locale_t _Locale,...)

{
  int iVar1;
  undefined8 *puVar2;
  undefined1 uStack0000000000000028;
  
                    /* 0x481270  59  _swprintf_s_l */
  puVar2 = (undefined8 *)FUN_180013640();
  iVar1 = FUN_180502038(*puVar2,_DstBuf,_DstSize,_Format,_Locale,&uStack0000000000000028);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}



/* ===== 1804812d0 _swscanf_l ===== */

int __cdecl _swscanf_l(wchar_t *_Src,wchar_t *_Format,_locale_t _Locale,...)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 in_R9;
  undefined8 local_res20;
  
                    /* 0x4812d0  60  _swscanf_l */
  local_res20 = in_R9;
  puVar1 = (undefined8 *)FUN_180013650();
  iVar2 = FUN_18050fb68(*puVar1,_Src,0xffffffffffffffff,_Format,_Locale,&local_res20);
  return iVar2;
}



/* ===== 180481320 _swscanf_s_l ===== */

int __cdecl _swscanf_s_l(wchar_t *_Src,wchar_t *_Format,_locale_t _Locale,...)

{
  ulonglong *puVar1;
  int iVar2;
  undefined8 in_R9;
  undefined8 local_res20;
  
                    /* 0x481320  61  _swscanf_s_l */
  local_res20 = in_R9;
  puVar1 = (ulonglong *)FUN_180013650();
  iVar2 = FUN_18050fb68(*puVar1 | 1,_Src,0xffffffffffffffff,_Format,_Locale,&local_res20);
  return iVar2;
}



/* ===== 180481380 _vfprintf_p ===== */

int __cdecl _vfprintf_p(FILE *_File,char *_Format,va_list _ArgList)

{
  undefined8 *puVar1;
  int iVar2;
  
                    /* 0x481380  63  _vfprintf_p */
  puVar1 = (undefined8 *)FUN_180013640();
  iVar2 = FUN_180500fc8(*puVar1,_File,_Format,0,_ArgList);
  return iVar2;
}



/* ===== 1804813d0 _vfprintf_p_l ===== */

int __cdecl _vfprintf_p_l(FILE *_File,char *_Format,_locale_t _Locale,va_list _ArgList)

{
  undefined8 *puVar1;
  int iVar2;
  
                    /* 0x4813d0  64  _vfprintf_p_l */
  puVar1 = (undefined8 *)FUN_180013640();
  iVar2 = FUN_180500fc8(*puVar1,_File,_Format,_Locale,_ArgList);
  return iVar2;
}



/* ===== 180481410 _vfprintf_s_l ===== */

int __cdecl _vfprintf_s_l(FILE *_File,char *_Format,_locale_t _Locale,va_list _ArgList)

{
  undefined8 *puVar1;
  int iVar2;
  
                    /* 0x481410  65  _vfprintf_s_l */
  puVar1 = (undefined8 *)FUN_180013640();
  iVar2 = FUN_1805010ec(*puVar1,_File,_Format,_Locale,_ArgList);
  return iVar2;
}



/* ===== 180481450 _vfscanf_l ===== */

void _vfscanf_l(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
                    /* 0x481450  66  _vfscanf_l */
  puVar1 = (undefined8 *)FUN_180013650();
  FID_conflict___stdio_common_vfwscanf(*puVar1,param_1,param_2,param_3,param_4);
  return;
}



/* ===== 180481490 _vfscanf_s_l ===== */

void _vfscanf_s_l(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  
                    /* 0x481490  67  _vfscanf_s_l */
  puVar1 = (ulonglong *)FUN_180013650();
  FID_conflict___stdio_common_vfwscanf(*puVar1 | 1,param_1,param_2,param_3,param_4);
  return;
}



/* ===== 1804814d0 _vfwprintf_l ===== */

int __cdecl _vfwprintf_l(FILE *_File,wchar_t *_Format,_locale_t _Locale,va_list _ArgList)

{
  undefined8 *puVar1;
  int iVar2;
  
                    /* 0x4814d0  68  _vfwprintf_l */
  puVar1 = (undefined8 *)FUN_180013640();
  iVar2 = FUN_180501210(*puVar1,_File,_Format,_Locale,_ArgList);
  return iVar2;
}



/* ===== 180481510 _vfwprintf_p ===== */

int __cdecl _vfwprintf_p(FILE *_File,wchar_t *_Format,va_list _ArgList)

{
  undefined8 *puVar1;
  int iVar2;
  
                    /* 0x481510  69  _vfwprintf_p */
  puVar1 = (undefined8 *)FUN_180013640();
  iVar2 = FUN_180501334(*puVar1,_File,_Format,0,_ArgList);
  return iVar2;
}



/* ===== 180481560 _vfwprintf_p_l ===== */

int __cdecl _vfwprintf_p_l(FILE *_File,wchar_t *_Format,_locale_t _Locale,va_list _ArgList)

{
  undefined8 *puVar1;
  int iVar2;
  
                    /* 0x481560  70  _vfwprintf_p_l */
  puVar1 = (undefined8 *)FUN_180013640();
  iVar2 = FUN_180501334(*puVar1,_File,_Format,_Locale,_ArgList);
  return iVar2;
}



/* ===== 1804815a0 _vfwprintf_s_l ===== */

int __cdecl _vfwprintf_s_l(FILE *_File,wchar_t *_Format,_locale_t _Locale,va_list _ArgList)

{
  undefined8 *puVar1;
  int iVar2;
  
                    /* 0x4815a0  71  _vfwprintf_s_l */
  puVar1 = (undefined8 *)FUN_180013640();
  iVar2 = FUN_180501458(*puVar1,_File,_Format,_Locale,_ArgList);
  return iVar2;
}



/* ===== 1804815e0 _vfwscanf_l ===== */

void _vfwscanf_l(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
                    /* 0x4815e0  72  _vfwscanf_l */
  puVar1 = (undefined8 *)FUN_180013650();
  FID_conflict___stdio_common_vfwscanf(*puVar1,param_1,param_2,param_3,param_4);
  return;
}



/* ===== 180481620 _vfwscanf_s_l ===== */

void _vfwscanf_s_l(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  
                    /* 0x481620  73  _vfwscanf_s_l */
  puVar1 = (ulonglong *)FUN_180013650();
  FID_conflict___stdio_common_vfwscanf(*puVar1 | 1,param_1,param_2,param_3,param_4);
  return;
}



/* ===== 180481660 _vprintf_l ===== */

int __cdecl _vprintf_l(char *_Format,_locale_t _Locale,va_list _ArgList)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  
                    /* 0x481660  74  _vprintf_l */
  uVar1 = __acrt_iob_func(1);
  puVar2 = (undefined8 *)FUN_180013640();
  iVar3 = FUN_180500ea4(*puVar2,uVar1,_Format,_Locale,_ArgList);
  return iVar3;
}



/* ===== 1804816b0 _vprintf_p ===== */

int __cdecl _vprintf_p(char *_Format,va_list _ArgList)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  
                    /* 0x4816b0  75  _vprintf_p */
  uVar1 = __acrt_iob_func(1);
  puVar2 = (undefined8 *)FUN_180013640();
  iVar3 = FUN_180500fc8(*puVar2,uVar1,_Format,0,_ArgList);
  return iVar3;
}



/* ===== 180481700 _vprintf_p_l ===== */

int __cdecl _vprintf_p_l(char *_Format,_locale_t _Locale,va_list _ArgList)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  
                    /* 0x481700  76  _vprintf_p_l */
  uVar1 = __acrt_iob_func(1);
  puVar2 = (undefined8 *)FUN_180013640();
  iVar3 = FUN_180500fc8(*puVar2,uVar1,_Format,_Locale,_ArgList);
  return iVar3;
}



/* ===== 180481750 _vprintf_s_l ===== */

int __cdecl _vprintf_s_l(char *_Format,_locale_t _Locale,va_list _ArgList)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  
                    /* 0x481750  77  _vprintf_s_l */
  uVar1 = __acrt_iob_func(1);
  puVar2 = (undefined8 *)FUN_180013640();
  iVar3 = FUN_1805010ec(*puVar2,uVar1,_Format,_Locale,_ArgList);
  return iVar3;
}



/* ===== 1804817a0 _vscanf_l ===== */

void _vscanf_l(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
                    /* 0x4817a0  78  _vscanf_l */
  uVar1 = __acrt_iob_func(0);
  puVar2 = (undefined8 *)FUN_180013650();
  FID_conflict___stdio_common_vfwscanf(*puVar2,uVar1,param_1,param_2,param_3);
  return;
}



/* ===== 1804817e0 _vscanf_s_l ===== */

void _vscanf_s_l(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulonglong *puVar2;
  
                    /* 0x4817e0  79  _vscanf_s_l */
  uVar1 = __acrt_iob_func(0);
  puVar2 = (ulonglong *)FUN_180013650();
  FID_conflict___stdio_common_vfwscanf(*puVar2 | 1,uVar1,param_1,param_2,param_3);
  return;
}



/* ===== 180481830 _vscprintf ===== */

int __cdecl _vscprintf(char *_Format,va_list _ArgList)

{
  int iVar1;
  ulonglong *puVar2;
  
                    /* 0x481830  80  _vscprintf */
  puVar2 = (ulonglong *)FUN_180013640();
  iVar1 = FUN_180501904(*puVar2 | 2,0,0,_Format,0,_ArgList);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}



/* ===== 180481880 _vscprintf_p ===== */

int __cdecl _vscprintf_p(char *_Format,va_list _ArgList)

{
  int iVar1;
  ulonglong *puVar2;
  
                    /* 0x481880  82  _vscprintf_p */
  puVar2 = (ulonglong *)FUN_180013640();
  iVar1 = FUN_180501b58(*puVar2 | 2,0,0,_Format,0,_ArgList);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}



/* ===== 1804818d0 _vscprintf_p_l ===== */

int __cdecl _vscprintf_p_l(char *_Format,_locale_t _Locale,va_list _ArgList)

{
  int iVar1;
  ulonglong *puVar2;
  
                    /* 0x4818d0  83  _vscprintf_p_l */
  puVar2 = (ulonglong *)FUN_180013640();
  iVar1 = FUN_180501b58(*puVar2 | 2,0,0,_Format,_Locale,_ArgList);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}



/* ===== 180481930 _vscwprintf ===== */

int __cdecl _vscwprintf(wchar_t *_Format,va_list _ArgList)

{
  int iVar1;
  ulonglong *puVar2;
  
                    /* 0x481930  84  _vscwprintf */
  puVar2 = (ulonglong *)FUN_180013640();
  iVar1 = FUN_180501d24(*puVar2 | 2,0,0,_Format,0,_ArgList);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}



/* ===== 180481980 _vscwprintf_l ===== */

int __cdecl _vscwprintf_l(wchar_t *_Format,_locale_t _Locale,va_list _ArgList)

{
  int iVar1;
  ulonglong *puVar2;
  
                    /* 0x481980  85  _vscwprintf_l */
  puVar2 = (ulonglong *)FUN_180013640();
  iVar1 = FUN_180501d24(*puVar2 | 2,0,0,_Format,_Locale,_ArgList);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}



/* ===== 1804819e0 _vscwprintf_p ===== */

int __cdecl _vscwprintf_p(wchar_t *_Format,va_list _ArgList)

{
  int iVar1;
  ulonglong *puVar2;
  
                    /* 0x4819e0  86  _vscwprintf_p */
  puVar2 = (ulonglong *)FUN_180013640();
  iVar1 = FUN_180501f80(*puVar2 | 2,0,0,_Format,0,_ArgList);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}



/* ===== 180481a30 _vscwprintf_p_l ===== */

int __cdecl _vscwprintf_p_l(wchar_t *_Format,_locale_t _Locale,va_list _ArgList)

{
  int iVar1;
  ulonglong *puVar2;
  
                    /* 0x481a30  87  _vscwprintf_p_l */
  puVar2 = (ulonglong *)FUN_180013640();
  iVar1 = FUN_180501f80(*puVar2 | 2,0,0,_Format,_Locale,_ArgList);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}



/* ===== 180481a90 _vsnprintf_c ===== */

int __cdecl _vsnprintf_c(char *_DstBuf,size_t _MaxCount,char *_Format,va_list _ArgList)

{
  int iVar1;
  undefined8 *puVar2;
  
                    /* 0x481a90  89  _vsnprintf_c */
  puVar2 = (undefined8 *)FUN_180013640();
  iVar1 = FUN_180501904(*puVar2,_DstBuf,_MaxCount,_Format,0,_ArgList);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}



/* ===== 180481ae0 _vsnprintf_c_l ===== */

int __cdecl
_vsnprintf_c_l(char *_DstBuf,size_t _MaxCount,char *param_3,_locale_t _Locale,va_list _ArgList)

{
  int iVar1;
  undefined8 *puVar2;
  
                    /* 0x481ae0  90  _vsnprintf_c_l */
  puVar2 = (undefined8 *)FUN_180013640();
  iVar1 = FUN_180501904(*puVar2,_DstBuf,_MaxCount,param_3,_Locale,_ArgList);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}



/* ===== 180481b30 _vsnprintf_s ===== */

int __cdecl
_vsnprintf_s(char *_DstBuf,size_t _SizeInBytes,size_t _MaxCount,char *_Format,va_list _ArgList)

{
  int iVar1;
  undefined8 *puVar2;
  
                    /* 0x481b30  92  _vsnprintf_s
                       0x481b30  161  vsnprintf_s */
  puVar2 = (undefined8 *)FUN_180013640();
  iVar1 = FUN_18050157c(*puVar2,_DstBuf,_SizeInBytes,_MaxCount,_Format,0,_ArgList);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}



/* ===== 180481b90 _vsnprintf_s_l ===== */

int __cdecl
_vsnprintf_s_l(char *_DstBuf,size_t _DstSize,size_t _MaxCount,char *_Format,_locale_t _Locale,
              va_list _ArgList)

{
  int iVar1;
  undefined8 *puVar2;
  
                    /* 0x481b90  93  _vsnprintf_s_l */
  puVar2 = (undefined8 *)FUN_180013640();
  iVar1 = FUN_18050157c(*puVar2,_DstBuf,_DstSize,_MaxCount,_Format,_Locale,_ArgList);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}



/* ===== 180481bf0 _vsnwprintf ===== */

int __cdecl _vsnwprintf(wchar_t *_Dest,size_t _Count,wchar_t *_Format,va_list _Args)

{
  int iVar1;
  ulonglong *puVar2;
  
                    /* 0x481bf0  94  _vsnwprintf */
  puVar2 = (ulonglong *)FUN_180013640();
  iVar1 = FUN_180501d24(*puVar2 | 1,_Dest,_Count,_Format,0,_Args);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}



/* ===== 180481c40 _vsnwprintf_l ===== */

int __cdecl
_vsnwprintf_l(wchar_t *_DstBuf,size_t _MaxCount,wchar_t *_Format,_locale_t _Locale,va_list _ArgList)

{
  int iVar1;
  ulonglong *puVar2;
  
                    /* 0x481c40  95  _vsnwprintf_l */
  puVar2 = (ulonglong *)FUN_180013640();
  iVar1 = FUN_180501d24(*puVar2 | 1,_DstBuf,_MaxCount,_Format,_Locale,_ArgList);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}



/* ===== 180481ca0 _vsnwprintf_s ===== */

int __cdecl
_vsnwprintf_s(wchar_t *_DstBuf,size_t _SizeInWords,size_t _MaxCount,wchar_t *_Format,
             va_list _ArgList)

{
  int iVar1;
  undefined8 *puVar2;
  
                    /* 0x481ca0  96  _vsnwprintf_s */
  puVar2 = (undefined8 *)FUN_180013640();
  iVar1 = FUN_180501740(*puVar2,_DstBuf,_SizeInWords,_MaxCount,_Format,0,_ArgList);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}



/* ===== 180481d00 _vsnwprintf_s_l ===== */

int __cdecl
_vsnwprintf_s_l(wchar_t *_DstBuf,size_t _DstSize,size_t _MaxCount,wchar_t *_Format,_locale_t _Locale
               ,va_list _ArgList)

{
  int iVar1;
  undefined8 *puVar2;
  
                    /* 0x481d00  97  _vsnwprintf_s_l */
  puVar2 = (undefined8 *)FUN_180013640();
  iVar1 = FUN_180501740(*puVar2,_DstBuf,_DstSize,_MaxCount,_Format,_Locale,_ArgList);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}



/* ===== 180481d60 _vsnwscanf_l ===== */

void _vsnwscanf_l(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 *puVar1;
  
                    /* 0x481d60  98  _vsnwscanf_l */
  puVar1 = (undefined8 *)FUN_180013650();
  FUN_18050fb68(*puVar1,param_1,param_2,param_3,param_4,param_5);
  return;
}



/* ===== 180481db0 _vsnwscanf_s_l ===== */

void _vsnwscanf_s_l(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5)

{
  ulonglong *puVar1;
  
                    /* 0x481db0  99  _vsnwscanf_s_l */
  puVar1 = (ulonglong *)FUN_180013650();
  FUN_18050fb68(*puVar1 | 1,param_1,param_2,param_3,param_4,param_5);
  return;
}



/* ===== 180481e00 _vsprintf_l ===== */

int __cdecl _vsprintf_l(char *_DstBuf,char *_Format,_locale_t param_3,va_list _ArgList)

{
  int iVar1;
  ulonglong *puVar2;
  
                    /* 0x481e00  100  _vsprintf_l */
  puVar2 = (ulonglong *)FUN_180013640();
  iVar1 = FUN_180501904(*puVar2 | 1,_DstBuf,0xffffffffffffffff,_Format,param_3,_ArgList);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}



/* ===== 180481e50 _vsprintf_p ===== */

int __cdecl _vsprintf_p(char *_Dst,size_t _MaxCount,char *_Format,va_list _ArgList)

{
  int iVar1;
  undefined8 *puVar2;
  
                    /* 0x481e50  101  _vsprintf_p */
  puVar2 = (undefined8 *)FUN_180013640();
  iVar1 = FUN_180501b58(*puVar2,_Dst,_MaxCount,_Format,0,_ArgList);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}



/* ===== 180481ea0 _vsprintf_p_l ===== */

int __cdecl
_vsprintf_p_l(char *_DstBuf,size_t _MaxCount,char *_Format,_locale_t _Locale,va_list _ArgList)

{
  int iVar1;
  undefined8 *puVar2;
  
                    /* 0x481ea0  102  _vsprintf_p_l */
  puVar2 = (undefined8 *)FUN_180013640();
  iVar1 = FUN_180501b58(*puVar2,_DstBuf,_MaxCount,_Format,_Locale,_ArgList);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}



/* ===== 180481ef0 _vswprintf ===== */

int __cdecl _vswprintf(wchar_t *_Dest,wchar_t *_Format,va_list _Args)

{
  int iVar1;
  undefined8 *puVar2;
  
                    /* 0x481ef0  106  _vswprintf */
  puVar2 = (undefined8 *)FUN_180013640();
  iVar1 = FUN_180501d24(*puVar2,_Dest,0xffffffffffffffff,_Format,0,_Args);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}



/* ===== 180481f50 _vswprintf_c ===== */

int __cdecl _vswprintf_c(wchar_t *_DstBuf,size_t _SizeInWords,wchar_t *_Format,va_list _ArgList)

{
  int iVar1;
  undefined8 *puVar2;
  
                    /* 0x481f50  107  _vswprintf_c
                       0x481f50  166  vswprintf */
  puVar2 = (undefined8 *)FUN_180013640();
  iVar1 = FUN_180501d24(*puVar2,_DstBuf,_SizeInWords,_Format,0,_ArgList);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}



