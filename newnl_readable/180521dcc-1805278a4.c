/* ===== 180521dcc FUN_180521dcc ===== */

uint FUN_180521dcc(undefined8 param_1,longlong param_2)

{
  uint in_EAX;
  uint uVar1;
  int iVar2;
  
  if (*(int *)(param_2 + 0x10) == 2) {
    iVar2 = FUN_180515c10();
    if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    uVar1 = 1;
  }
  else {
    uVar1 = in_EAX & 0xffffff00;
  }
  return uVar1;
}



/* ===== 180521e14 FUN_180521e14 ===== */

undefined8 FUN_180521e14(undefined8 param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  
  if (((*(int *)(param_2 + 2) != 0) || (1 < param_2[1] - 2)) ||
     (cVar1 = FUN_180522024(*param_2), cVar1 == '\0')) {
    return 0;
  }
  iVar2 = FUN_180515c10();
  if ((iVar2 != 0) || (iVar2 = FUN_180515c10(), iVar2 != 0)) {
                    /* WARNING: Subroutine does not return */
    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  return 1;
}



/* ===== 180521ea0 FUN_180521ea0 ===== */

undefined8 FUN_180521ea0(undefined8 param_1,longlong *param_2)

{
  ushort uVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  ushort *puVar5;
  ulonglong uVar6;
  
  if ((int)param_2[2] != 0) {
    return 0;
  }
  if ((param_2[1] != 2) || (cVar3 = FUN_180522024(*param_2), cVar3 == '\0')) {
    if (param_2[1] != 3) {
      return 0;
    }
    lVar2 = *param_2;
    uVar6 = 0;
    do {
      uVar1 = *(ushort *)(lVar2 + uVar6 * 2);
      puVar5 = __pctype_func();
      if (0xff < uVar1) {
        return 0;
      }
      if ((puVar5[uVar1] >> 2 & 1) == 0) {
        return 0;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < 3);
  }
  iVar4 = FUN_180515c10();
  if (((iVar4 != 0) || (iVar4 = FUN_180535fc0(), iVar4 != 0)) ||
     (iVar4 = FUN_180535fc0(), iVar4 != 0)) {
                    /* WARNING: Subroutine does not return */
    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  return 1;
}



/* ===== 180521f94 FUN_180521f94 ===== */

uint FUN_180521f94(undefined8 param_1,undefined8 *param_2)

{
  uint in_EAX;
  int iVar1;
  
  if (((*(int *)(param_2 + 2) != 0) || (param_2[1] != 4)) ||
     (in_EAX = FUN_180522024(*param_2), (char)in_EAX == '\0')) {
    return in_EAX & 0xffffff00;
  }
  iVar1 = FUN_180535fc0();
  if ((iVar1 != 0) || (iVar1 = FUN_180535fc0(), iVar1 != 0)) {
                    /* WARNING: Subroutine does not return */
    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  return 1;
}



/* ===== 180522024 FUN_180522024 ===== */

undefined8 FUN_180522024(longlong param_1,ulonglong param_2)

{
  ushort uVar1;
  ushort *puVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  if (param_2 != 0) {
    do {
      uVar1 = *(ushort *)(param_1 + uVar3 * 2);
      puVar2 = __pctype_func();
      if ((0xff < uVar1) || ((puVar2[uVar1] & 0x103) == 0)) {
        return 0;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < param_2);
  }
  return 1;
}



/* ===== 180522090 operator()<> ===== */

/* Library Function - Multiple Matches With Same Base Name
    public: char * __ptr64 __cdecl __crt_seh_guarded_call<char * __ptr64>::operator()<class
   <lambda_41e84717acc955b55e9d0d529e507b68>,class <lambda_b37934c380d97b75fd242ea49540127a> &
   __ptr64,class <lambda_bb6db9f9ac473960206e0d4b942b5506> >(class
   <lambda_41e84717acc955b55e9d0d529e507b68> && __ptr64,class
   <lambda_b37934c380d97b75fd242ea49540127a> & __ptr64,class
   <lambda_bb6db9f9ac473960206e0d4b942b5506> && __ptr64) __ptr64
    public: char * __ptr64 __cdecl __crt_seh_guarded_call<char * __ptr64>::operator()<class
   <lambda_9bd929c17696992ce54f1d748594fc62>,class <lambda_082c17da81b0962e08c0587ee0fac50c> &
   __ptr64,class <lambda_9c08ac857f4975304d44e9f601d9b878> >(class
   <lambda_9bd929c17696992ce54f1d748594fc62> && __ptr64,class
   <lambda_082c17da81b0962e08c0587ee0fac50c> & __ptr64,class
   <lambda_9c08ac857f4975304d44e9f601d9b878> && __ptr64) __ptr64
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined8
operator()<>(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined8 uVar1;
  
  __acrt_lock(*param_2);
  uVar1 = FUN_1805220d0(param_3);
  __acrt_unlock(*param_4);
  return uVar1;
}



/* ===== 1805220d0 FUN_1805220d0 ===== */

wchar_t * FUN_1805220d0(undefined8 *param_1)

{
  longlong lVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  wchar_t *pwVar5;
  wchar_t *_Locale;
  longlong lVar6;
  
  iVar4 = *(int *)*param_1;
  if (*(longlong *)param_1[1] == 0) {
    pwVar5 = _wsetlocale(iVar4,(wchar_t *)0x0);
  }
  else {
    iVar3 = FUN_180532b28();
    if ((iVar3 == 0x16) || (iVar3 == 0x22)) {
LAB_180522343:
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    _Locale = (wchar_t *)_calloc_base(0,2);
    pwVar5 = (wchar_t *)0x0;
    if (_Locale == (wchar_t *)0x0) goto LAB_180522157;
    iVar3 = FUN_180532b28();
    if (iVar3 != 0) {
      if ((iVar3 == 0x16) || (iVar3 == 0x22)) goto LAB_180522343;
      pwVar5 = _Locale;
      goto LAB_180522157;
    }
    pwVar5 = _wsetlocale(iVar4,_Locale);
    FUN_1805277b0(_Locale);
  }
  if (pwVar5 == (wchar_t *)0x0) {
    return (wchar_t *)0x0;
  }
  lVar6 = FUN_180529860();
  lVar1 = *(longlong *)(lVar6 + 0x90);
  iVar4 = FUN_1805389d8();
  if (iVar4 == 0) {
    pwVar5 = (wchar_t *)_malloc_base();
    if (pwVar5 == (wchar_t *)0x0) {
      return (wchar_t *)0x0;
    }
    iVar4 = FUN_1805389d8();
    if (iVar4 == 0) {
      piVar2 = *(int **)((longlong)*(int *)*param_1 * 0x20 + 0x30 + lVar1);
      if (piVar2 != (int *)0x0) {
        LOCK();
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          FUN_1805277b0(*(undefined8 *)((longlong)*(int *)*param_1 * 0x20 + 0x30 + lVar1));
          *(undefined8 *)((longlong)*(int *)*param_1 * 0x20 + 0x30 + lVar1) = 0;
        }
      }
      if (((DAT_18091a130 & *(uint *)(lVar6 + 0x3a8)) == 0) &&
         (piVar2 = *(int **)((longlong)*(int *)*param_1 * 0x20 + 0x30 + lVar1), piVar2 != (int *)0x0
         )) {
        LOCK();
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          FUN_1805277b0(*(undefined8 *)((longlong)*(int *)*param_1 * 0x20 + 0x30 + lVar1));
          *(undefined8 *)((longlong)*(int *)*param_1 * 0x20 + 0x30 + lVar1) = 0;
        }
      }
      *(undefined4 *)pwVar5 = *(undefined4 *)(lVar1 + 0x10);
      *(wchar_t **)((longlong)*(int *)*param_1 * 0x20 + 0x30 + lVar1) = pwVar5;
      *(wchar_t **)(((longlong)*(int *)*param_1 + 1) * 0x20 + lVar1) = pwVar5 + 2;
      return pwVar5 + 2;
    }
    if ((iVar4 != 0x16) && (iVar4 != 0x22)) {
LAB_180522157:
      FUN_1805277b0(pwVar5);
      return (wchar_t *)0x0;
    }
  }
  else if ((iVar4 != 0x16) && (iVar4 != 0x22)) {
    return (wchar_t *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
}



/* ===== 180522370 setlocale ===== */

/* Library Function - Single Match
    setlocale
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

char * __cdecl setlocale(int _Category,char *_Locale)

{
  char *pcVar1;
  int local_res8 [2];
  char *local_res10;
  undefined1 local_res18 [8];
  undefined4 local_res20 [2];
  undefined4 local_28 [2];
  int *local_20;
  char **local_18;
  
  local_res8[0] = _Category;
  local_res10 = _Locale;
  FUN_18052cd98();
  local_20 = local_res8;
  local_18 = &local_res10;
  local_res20[0] = 4;
  local_28[0] = 4;
  pcVar1 = (char *)operator()<>(local_res18,local_28,&local_20,local_res20);
  return pcVar1;
}



/* ===== 1805223bc __pctype_func ===== */

/* Library Function - Single Match
    __pctype_func
   
   Library: Visual Studio 2019 Release */

ushort * __cdecl __pctype_func(void)

{
  longlong lVar1;
  undefined8 *local_res8 [4];
  
  lVar1 = FUN_180529860();
  local_res8[0] = *(undefined8 **)(lVar1 + 0x90);
  __acrt_update_locale_info(lVar1,local_res8);
  return (ushort *)*local_res8[0];
}



/* ===== 1805223f0 FUN_1805223f0 ===== */

longlong FUN_1805223f0(longlong param_1)

{
  int iVar1;
  longlong lVar3;
  longlong lVar2;
  
  if (param_1 != 0) {
    lVar2 = -1;
    do {
      lVar3 = lVar2;
      lVar2 = lVar3 + 1;
    } while (*(short *)(param_1 + lVar2 * 2) != 0);
    lVar2 = _malloc_base((lVar3 + 2) * 2);
    if (lVar2 != 0) {
      iVar1 = FUN_180535f30();
      if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      return lVar2;
    }
  }
  return 0;
}



/* ===== 180522480 __strncnt ===== */

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



/* ===== 180522498 __crt_time_is_leap_year<> ===== */

/* Library Function - Multiple Matches With Same Base Name
    bool __cdecl __crt_time_is_leap_year<int>(int)
    bool __cdecl __crt_time_is_leap_year<long>(long)
   
   Library: Visual Studio 2015 Release */

ulonglong __crt_time_is_leap_year<>(uint param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = param_1 & 0x80000003;
  if ((int)uVar1 < 0) {
    uVar1 = (uVar1 - 1 | 0xfffffffc) + 1;
  }
  if ((uVar1 == 0) && (param_1 != ((int)param_1 / 100) * 100)) {
    return CONCAT71((uint7)((ulonglong)((longlong)(int)param_1 * 0x51eb851f) >> 8) & 0xffffff,1);
  }
  iVar2 = ((int)(param_1 + 0x76c) / 400) * 400;
  return (ulonglong)CONCAT31((int3)((uint)iVar2 >> 8),param_1 + 0x76c == iVar2);
}



/* ===== 1805224f4 FUN_1805224f4 ===== */

int FUN_1805224f4(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = ((param_3 - (param_2 + 6) % 7) + 7) / 7;
  bVar2 = __crt_time_is_leap_year<>(param_1);
  iVar5 = param_3 - (uint)bVar2;
  iVar4 = ((param_2 - param_3) + 0x173) % 7;
  iVar3 = (int)(bVar2 + 0x16d + iVar4) % 7;
  if ((((iVar5 < 0x16c) || (iVar3 != 2)) && ((iVar5 < 0x16b || (iVar3 != 3)))) &&
     ((iVar5 < 0x16a || (iVar3 != 4)))) {
    iVar3 = iVar1 + 1;
    if ((1 < iVar4 - 2U) && (iVar4 != 4)) {
      iVar3 = iVar1;
    }
  }
  else {
    iVar3 = -1;
  }
  return iVar3;
}



/* ===== 1805225ec FUN_1805225ec ===== */

undefined8
FUN_1805225ec(undefined8 param_1,ushort param_2,uint *param_3,longlong *param_4,longlong *param_5,
             undefined **param_6,char param_7)

{
  short sVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  short *psVar10;
  undefined8 uVar11;
  short *psVar12;
  bool bVar13;
  bool bVar14;
  int local_res10 [2];
  int local_38 [4];
  
  if (param_2 < 0x5b) {
    if (param_2 == 0x5a) {
      __tzset();
      lVar7 = FUN_18052df4c();
      psVar10 = *(short **)((ulonglong)(-(uint)(param_3[8] != 0) & 8) + lVar7);
      lVar7 = *param_5;
      while( true ) {
        if (lVar7 == 0) {
          return 1;
        }
        sVar1 = *psVar10;
        if (sVar1 == 0) break;
        psVar10 = psVar10 + 1;
        *(short *)*param_4 = sVar1;
        *param_4 = *param_4 + 2;
        *param_5 = *param_5 + -1;
        lVar7 = *param_5;
      }
      return 1;
    }
    if (0x4d < param_2) {
      if (param_2 == 0x52) {
        cVar2 = FUN_1805225ec(param_1,0x48,param_3,param_4,param_5,param_6,param_7);
        if (cVar2 == '\0') goto LAB_1805227c4;
        lVar7 = *param_5;
        for (psVar10 = &DAT_18057c86c; (lVar7 != 0 && (*psVar10 != 0)); psVar10 = psVar10 + 1) {
          *(short *)*param_4 = *psVar10;
          *param_4 = *param_4 + 2;
          *param_5 = *param_5 + -1;
          lVar7 = *param_5;
        }
        uVar11 = 0x4d;
      }
      else {
        if (param_2 == 0x53) {
          uVar8 = *param_3;
          bVar13 = uVar8 < 0x3c;
          bVar14 = uVar8 == 0x3c;
          goto LAB_18052276a;
        }
        if (param_2 != 0x54) {
          if (param_2 != 0x55) {
            if (param_2 == 0x56) {
              uVar8 = param_3[6];
              uVar9 = param_3[5];
              uVar5 = FUN_1805224f4(uVar9,uVar8,param_3[7]);
              if (uVar5 == 0) {
                bVar3 = __crt_time_is_leap_year<>(uVar9 - 1);
                uVar8 = FUN_1805224f4(uVar9 - 1,(uVar8 - param_3[7]) + 7,bVar3 + 0x16d);
              }
              else {
                uVar8 = 1;
                if (0 < (int)uVar5) {
                  uVar8 = uVar5;
                }
              }
              goto LAB_18052269f;
            }
            if (param_2 != 0x57) {
              if (param_2 != 0x58) {
                if (param_2 != 0x59) {
                  return 0;
                }
                uVar8 = param_3[5] + 0x76c;
                if (9999 < uVar8) goto LAB_180522a18;
LAB_180522f0f:
                uVar11 = 4;
                goto LAB_1805226ab;
              }
              goto LAB_18052296b;
            }
          }
          uVar9 = param_3[6];
          if (6 < uVar9) goto LAB_180522a18;
          uVar8 = 0;
          if (param_2 == 0x57) {
            if (uVar9 == 0) {
              uVar9 = 6;
            }
            else {
              uVar9 = uVar9 - 1;
            }
          }
          uVar5 = param_3[7];
          if (0x16d < uVar5) goto LAB_180522a18;
          if (((int)uVar9 <= (int)uVar5) && (uVar8 = (int)uVar5 / 7, (int)uVar9 <= (int)uVar5 % 7))
          {
            uVar8 = uVar8 + 1;
          }
          goto LAB_18052269f;
        }
        cVar2 = FUN_1805225ec(param_1,0x48,param_3,param_4,param_5,param_6,param_7);
        if (cVar2 == '\0') goto LAB_1805227c4;
        psVar12 = &DAT_18057c86c;
        lVar7 = *param_5;
        for (psVar10 = &DAT_18057c86c; (lVar7 != 0 && (*psVar10 != 0)); psVar10 = psVar10 + 1) {
          *(short *)*param_4 = *psVar10;
          *param_4 = *param_4 + 2;
          *param_5 = *param_5 + -1;
          lVar7 = *param_5;
        }
        cVar2 = FUN_1805225ec(param_1,0x4d,param_3,param_4,param_5,param_6,param_7);
        if (cVar2 == '\0') goto LAB_1805227c4;
        lVar7 = *param_5;
        for (; (lVar7 != 0 && (*psVar12 != 0)); psVar12 = psVar12 + 1) {
          *(short *)*param_4 = *psVar12;
          *param_4 = *param_4 + 2;
          *param_5 = *param_5 + -1;
          lVar7 = *param_5;
        }
        uVar11 = 0x53;
      }
      goto LAB_1805228fd;
    }
    if (param_2 == 0x4d) {
      uVar8 = param_3[1];
      bVar13 = uVar8 < 0x3b;
      bVar14 = uVar8 == 0x3b;
LAB_18052276a:
      if (!bVar13 && !bVar14) {
LAB_180522a18:
        puVar6 = (undefined4 *)FUN_18051bfb0();
        *puVar6 = 0x16;
        FUN_180527740();
        return 0;
      }
      goto LAB_18052269f;
    }
    if (param_2 == 0x25) {
      psVar10 = &DAT_18057c878;
      lVar7 = *param_5;
      while( true ) {
        if (lVar7 == 0) {
          return 1;
        }
        sVar1 = *psVar10;
        if (sVar1 == 0) break;
        psVar10 = psVar10 + 1;
        *(short *)*param_4 = sVar1;
        *param_4 = *param_4 + 2;
        *param_5 = *param_5 + -1;
        lVar7 = *param_5;
      }
      return 1;
    }
    if (param_2 == 0x41) {
      if (param_3[6] < 7) {
        psVar10 = (short *)param_6[(longlong)(int)param_3[6] + 0x33];
        lVar7 = *param_5;
        while( true ) {
          if (lVar7 == 0) {
            return 1;
          }
          sVar1 = *psVar10;
          if (sVar1 == 0) break;
          psVar10 = psVar10 + 1;
          *(short *)*param_4 = sVar1;
          *param_4 = *param_4 + 2;
          *param_5 = *param_5 + -1;
          lVar7 = *param_5;
        }
        return 1;
      }
      goto LAB_180522a18;
    }
    if (param_2 == 0x42) {
      if (param_3[4] < 0xc) {
        psVar10 = (short *)param_6[(longlong)(int)param_3[4] + 0x46];
        lVar7 = *param_5;
        while( true ) {
          if (lVar7 == 0) {
            return 1;
          }
          sVar1 = *psVar10;
          if (sVar1 == 0) break;
          psVar10 = psVar10 + 1;
          *(short *)*param_4 = sVar1;
          *param_4 = *param_4 + 2;
          *param_5 = *param_5 + -1;
          lVar7 = *param_5;
        }
        return 1;
      }
      goto LAB_180522a18;
    }
    if (param_2 == 0x43) {
      if (9999 < param_3[5] + 0x76c) goto LAB_180522a18;
      uVar8 = (int)(param_3[5] + 0x76c) / 100;
LAB_18052269f:
      uVar11 = 2;
LAB_1805226ab:
      FUN_1805234c8(uVar8,uVar11);
      return 1;
    }
    if (param_2 == 0x44) {
      cVar2 = FUN_1805225ec(param_1,0x6d,param_3,param_4,param_5,param_6,param_7);
      if (cVar2 == '\0') goto LAB_1805227c4;
      psVar12 = &DAT_18057c864;
      lVar7 = *param_5;
      for (psVar10 = &DAT_18057c864; (lVar7 != 0 && (*psVar10 != 0)); psVar10 = psVar10 + 1) {
        *(short *)*param_4 = *psVar10;
        *param_4 = *param_4 + 2;
        *param_5 = *param_5 + -1;
        lVar7 = *param_5;
      }
      cVar2 = FUN_1805225ec(param_1,100,param_3,param_4,param_5,param_6,param_7);
      if (cVar2 == '\0') goto LAB_1805227c4;
      lVar7 = *param_5;
      for (; (lVar7 != 0 && (*psVar12 != 0)); psVar12 = psVar12 + 1) {
        *(short *)*param_4 = *psVar12;
        *param_4 = *param_4 + 2;
        *param_5 = *param_5 + -1;
        lVar7 = *param_5;
      }
      uVar11 = 0x79;
    }
    else {
      if (param_2 != 0x46) {
        if (param_2 == 0x47) {
          uVar8 = param_3[5];
          if (9999 < uVar8 + 0x76c) goto LAB_180522a18;
          iVar4 = FUN_1805224f4(uVar8,param_3[6],param_3[7]);
          if (iVar4 == 0) {
            uVar8 = uVar8 - 1;
          }
          else if (iVar4 < 1) {
            uVar8 = uVar8 + 1;
          }
          uVar8 = uVar8 + 0x76c;
          goto LAB_180522f0f;
        }
        if (param_2 == 0x48) {
          uVar8 = param_3[2];
          bVar13 = uVar8 < 0x17;
          bVar14 = uVar8 == 0x17;
          goto LAB_18052276a;
        }
        if (param_2 != 0x49) {
          return 0;
        }
        if (0x17 < param_3[2]) goto LAB_180522a18;
        uVar8 = (int)param_3[2] % 0xc;
        if (uVar8 == 0) {
          uVar8 = 0xc;
        }
        goto LAB_18052269f;
      }
      cVar2 = FUN_1805225ec(param_1,0x59,param_3,param_4,param_5,param_6,param_7);
      if (cVar2 == '\0') goto LAB_1805227c4;
      psVar12 = &DAT_180575a78;
      lVar7 = *param_5;
      for (psVar10 = &DAT_180575a78; (lVar7 != 0 && (*psVar10 != 0)); psVar10 = psVar10 + 1) {
        *(short *)*param_4 = *psVar10;
        *param_4 = *param_4 + 2;
        *param_5 = *param_5 + -1;
        lVar7 = *param_5;
      }
      cVar2 = FUN_1805225ec(param_1,0x6d,param_3,param_4,param_5,param_6,param_7);
      if (cVar2 == '\0') goto LAB_1805227c4;
      lVar7 = *param_5;
      for (; (lVar7 != 0 && (*psVar12 != 0)); psVar12 = psVar12 + 1) {
        *(short *)*param_4 = *psVar12;
        *param_4 = *param_4 + 2;
        *param_5 = *param_5 + -1;
        lVar7 = *param_5;
      }
      uVar11 = 100;
    }
LAB_1805228fd:
    cVar2 = FUN_1805225ec(param_1,uVar11,param_3,param_4,param_5,param_6,param_7);
  }
  else {
    if (param_2 < 0x6f) {
      if (param_2 == 0x6e) {
        psVar10 = &DAT_18057c868;
        lVar7 = *param_5;
        while( true ) {
          if (lVar7 == 0) {
            return 1;
          }
          sVar1 = *psVar10;
          if (sVar1 == 0) break;
          psVar10 = psVar10 + 1;
          *(short *)*param_4 = sVar1;
          *param_4 = *param_4 + 2;
          *param_5 = *param_5 + -1;
          lVar7 = *param_5;
        }
        return 1;
      }
      if (param_2 == 0x61) {
        if (param_3[6] < 7) {
          psVar10 = (short *)param_6[(longlong)(int)param_3[6] + 0x2c];
          lVar7 = *param_5;
          while( true ) {
            if (lVar7 == 0) {
              return 1;
            }
            sVar1 = *psVar10;
            if (sVar1 == 0) break;
            psVar10 = psVar10 + 1;
            *(short *)*param_4 = sVar1;
            *param_4 = *param_4 + 2;
            *param_5 = *param_5 + -1;
            lVar7 = *param_5;
          }
          return 1;
        }
        goto LAB_180522a18;
      }
      if (param_2 == 0x62) {
LAB_18052297a:
        if (param_3[4] < 0xc) {
          psVar10 = (short *)param_6[(longlong)(int)param_3[4] + 0x3a];
          lVar7 = *param_5;
          while( true ) {
            if (lVar7 == 0) {
              return 1;
            }
            sVar1 = *psVar10;
            if (sVar1 == 0) break;
            psVar10 = psVar10 + 1;
            *(short *)*param_4 = sVar1;
            *param_4 = *param_4 + 2;
            *param_5 = *param_5 + -1;
            lVar7 = *param_5;
          }
          return 1;
        }
        goto LAB_180522a18;
      }
      if (param_2 != 99) {
        if (param_2 == 100) {
          uVar8 = param_3[3];
          bVar13 = uVar8 - 1 < 0x1e;
          bVar14 = uVar8 - 1 == 0x1e;
          goto LAB_18052276a;
        }
        if (param_2 == 0x65) {
          uVar8 = param_3[3];
          if (0x1e < uVar8 - 1) goto LAB_180522a18;
        }
        else if (param_2 == 0x67) {
          uVar8 = param_3[5];
          if (9999 < uVar8 + 0x76c) goto LAB_180522a18;
          iVar4 = FUN_1805224f4(uVar8,param_3[6],param_3[7]);
          if (iVar4 == 0) {
            uVar8 = uVar8 - 1;
          }
          else if (iVar4 < 1) {
            uVar8 = uVar8 + 1;
          }
          uVar8 = (int)(uVar8 + 0x76c) % 100;
        }
        else {
          if (param_2 == 0x68) goto LAB_18052297a;
          if (param_2 == 0x6a) {
            if (param_3[7] < 0x16e) {
              uVar8 = param_3[7] + 1;
              uVar11 = 3;
              goto LAB_1805226ab;
            }
            goto LAB_180522a18;
          }
          if (param_2 != 0x6d) {
            return 0;
          }
          if (0xb < param_3[4]) goto LAB_180522a18;
          uVar8 = param_3[4] + 1;
        }
        goto LAB_18052269f;
      }
      if ((param_6 == &PTR_DAT_18057ce00) && (param_7 == '\0')) {
        cVar2 = FUN_1805225ec(param_1,0x61,param_3,param_4,param_5,&PTR_DAT_18057ce00,0);
        if (cVar2 == '\0') goto LAB_1805227c4;
        psVar12 = &DAT_18057c860;
        lVar7 = *param_5;
        for (psVar10 = &DAT_18057c860; (lVar7 != 0 && (*psVar10 != 0)); psVar10 = psVar10 + 1) {
          *(short *)*param_4 = *psVar10;
          *param_4 = *param_4 + 2;
          *param_5 = *param_5 + -1;
          lVar7 = *param_5;
        }
        cVar2 = FUN_1805225ec(param_1,0x62,param_3,param_4,param_5,&PTR_DAT_18057ce00,0);
        if (cVar2 == '\0') goto LAB_1805227c4;
        lVar7 = *param_5;
        for (psVar10 = &DAT_18057c860; (lVar7 != 0 && (*psVar10 != 0)); psVar10 = psVar10 + 1) {
          *(short *)*param_4 = *psVar10;
          *param_4 = *param_4 + 2;
          *param_5 = *param_5 + -1;
          lVar7 = *param_5;
        }
        cVar2 = FUN_1805225ec(param_1,0x65,param_3,param_4,param_5,&PTR_DAT_18057ce00,0);
        if (cVar2 == '\0') goto LAB_1805227c4;
        lVar7 = *param_5;
        for (psVar10 = &DAT_18057c860; (lVar7 != 0 && (*psVar10 != 0)); psVar10 = psVar10 + 1) {
          *(short *)*param_4 = *psVar10;
          *param_4 = *param_4 + 2;
          *param_5 = *param_5 + -1;
          lVar7 = *param_5;
        }
        cVar2 = FUN_1805225ec(param_1,0x54,param_3,param_4,param_5,&PTR_DAT_18057ce00,0);
        if (cVar2 == '\0') goto LAB_1805227c4;
        lVar7 = *param_5;
        for (; (lVar7 != 0 && (*psVar12 != 0)); psVar12 = psVar12 + 1) {
          *(short *)*param_4 = *psVar12;
          *param_4 = *param_4 + 2;
          *param_5 = *param_5 + -1;
          lVar7 = *param_5;
        }
        param_7 = '\0';
        uVar11 = 0x59;
        goto LAB_1805228fd;
      }
      cVar2 = FUN_180523618(param_1,param_7,param_3,param_4,param_5,param_6);
      if (cVar2 == '\0') goto LAB_1805227c4;
      lVar7 = *param_5;
      for (psVar10 = &DAT_18057c860; (lVar7 != 0 && (*psVar10 != 0)); psVar10 = psVar10 + 1) {
        *(short *)*param_4 = *psVar10;
        *param_4 = *param_4 + 2;
        *param_5 = *param_5 + -1;
        lVar7 = *param_5;
      }
LAB_18052296b:
      param_7 = '\x02';
    }
    else {
      if (param_2 == 0x70) {
        if (param_3[2] < 0x18) {
          if ((int)param_3[2] < 0xc) {
            psVar10 = (short *)param_6[0x52];
          }
          else {
            psVar10 = (short *)param_6[0x53];
          }
          lVar7 = *param_5;
          while( true ) {
            if (lVar7 == 0) {
              return 1;
            }
            sVar1 = *psVar10;
            if (sVar1 == 0) break;
            psVar10 = psVar10 + 1;
            *(short *)*param_4 = sVar1;
            *param_4 = *param_4 + 2;
            *param_5 = *param_5 + -1;
            lVar7 = *param_5;
          }
          return 1;
        }
        goto LAB_180522a18;
      }
      if (param_2 == 0x72) {
        if (param_6 == &PTR_DAT_18057ce00) {
          cVar2 = FUN_1805225ec(param_1,0x49,param_3,param_4,param_5,&PTR_DAT_18057ce00,param_7);
          if (cVar2 == '\0') goto LAB_1805227c4;
          psVar12 = &DAT_18057c86c;
          lVar7 = *param_5;
          for (psVar10 = &DAT_18057c86c; (lVar7 != 0 && (*psVar10 != 0)); psVar10 = psVar10 + 1) {
            *(short *)*param_4 = *psVar10;
            *param_4 = *param_4 + 2;
            *param_5 = *param_5 + -1;
            lVar7 = *param_5;
          }
          cVar2 = FUN_1805225ec(param_1,0x4d,param_3,param_4,param_5,&PTR_DAT_18057ce00,param_7);
          if (cVar2 == '\0') goto LAB_1805227c4;
          lVar7 = *param_5;
          for (; (lVar7 != 0 && (*psVar12 != 0)); psVar12 = psVar12 + 1) {
            *(short *)*param_4 = *psVar12;
            *param_4 = *param_4 + 2;
            *param_5 = *param_5 + -1;
            lVar7 = *param_5;
          }
          cVar2 = FUN_1805225ec(param_1,0x53,param_3,param_4,param_5,&PTR_DAT_18057ce00,param_7);
          if (cVar2 == '\0') goto LAB_1805227c4;
          lVar7 = *param_5;
          for (psVar10 = &DAT_18057c860; (lVar7 != 0 && (*psVar10 != 0)); psVar10 = psVar10 + 1) {
            *(short *)*param_4 = *psVar10;
            *param_4 = *param_4 + 2;
            *param_5 = *param_5 + -1;
            lVar7 = *param_5;
          }
          uVar11 = 0x70;
        }
        else {
          uVar11 = 0x58;
        }
        goto LAB_1805228fd;
      }
      if (param_2 == 0x74) {
        psVar10 = &DAT_18057c870;
        lVar7 = *param_5;
        while( true ) {
          if (lVar7 == 0) {
            return 1;
          }
          sVar1 = *psVar10;
          if (sVar1 == 0) break;
          psVar10 = psVar10 + 1;
          *(short *)*param_4 = sVar1;
          *param_4 = *param_4 + 2;
          *param_5 = *param_5 + -1;
          lVar7 = *param_5;
        }
        return 1;
      }
      if ((param_2 == 0x75) || (param_2 == 0x77)) {
        uVar8 = param_3[6];
        if (6 < uVar8) goto LAB_180522a18;
        if ((uVar8 == 0) && (param_2 == 0x75)) {
          uVar8 = 7;
        }
        uVar11 = 1;
        goto LAB_1805226ab;
      }
      if (param_2 != 0x78) {
        if (param_2 != 0x79) {
          if (param_2 != 0x7a) {
            return 0;
          }
          __tzset();
          local_res10[0] = 0;
          iVar4 = FUN_18052dfb4(local_res10);
          if (iVar4 == 0) {
            if (param_3[8] != 0) {
              local_38[0] = 0;
              iVar4 = FUN_18052df84(local_38);
              if (iVar4 != 0) goto LAB_180522a18;
              local_res10[0] = local_res10[0] + local_38[0];
            }
            psVar10 = &DAT_180575a78;
            iVar4 = -local_res10[0];
            if (-local_res10[0] < 0) {
              iVar4 = local_res10[0];
            }
            uVar8 = (iVar4 / 0x3c) % 0x3c;
            if (local_res10[0] < 1) {
              psVar10 = &DAT_18057c874;
            }
            lVar7 = *param_5;
            for (; (lVar7 != 0 && (*psVar10 != 0)); psVar10 = psVar10 + 1) {
              *(short *)*param_4 = *psVar10;
              *param_4 = *param_4 + 2;
              *param_5 = *param_5 + -1;
              lVar7 = *param_5;
            }
            FUN_1805234c8((iVar4 / 0x3c) / 0x3c,2,param_4,param_5,0x30);
            uVar11 = 2;
            goto LAB_1805226ab;
          }
          goto LAB_180522a18;
        }
        if (9999 < param_3[5] + 0x76c) goto LAB_180522a18;
        uVar8 = (int)(param_3[5] + 0x76c) % 100;
        goto LAB_18052269f;
      }
    }
    cVar2 = FUN_180523618(param_1,param_7,param_3,param_4,param_5,param_6);
  }
  if (cVar2 != '\0') {
    return 1;
  }
LAB_1805227c4:
  puVar6 = (undefined4 *)FUN_18051bfb0();
  *puVar6 = 0x16;
  return 0;
}



/* ===== 1805234c8 FUN_1805234c8 ===== */

void FUN_1805234c8(int param_1,int param_2,longlong *param_3,ulonglong *param_4,short param_5)

{
  ulonglong uVar1;
  short sVar2;
  int iVar3;
  short *psVar4;
  longlong lVar5;
  int iVar6;
  short *psVar7;
  bool bVar8;
  
  if (param_5 == 0) {
    psVar4 = (short *)*param_3;
    if (1 < *param_4) {
      do {
        psVar7 = psVar4;
        iVar3 = param_1 / 10;
        *psVar7 = (short)param_1 + (short)iVar3 * -10 + 0x30;
        uVar1 = *param_4;
        *param_4 = uVar1 - 1;
        if (iVar3 < 1) break;
        psVar4 = psVar7 + 1;
        param_1 = iVar3;
      } while (1 < uVar1 - 1);
      psVar4 = (short *)*param_3;
      *param_3 = (longlong)(psVar7 + 1);
      for (; psVar4 < psVar7; psVar4 = psVar4 + 1) {
        sVar2 = *psVar7;
        *psVar7 = *psVar4;
        psVar7 = psVar7 + -1;
        *psVar4 = sVar2;
      }
      return;
    }
    *param_3 = (longlong)((short *)*param_3 + -*param_4);
  }
  else if ((ulonglong)(longlong)param_2 < *param_4) {
    iVar3 = 0;
    if (param_2 != 0) {
      lVar5 = (longlong)(param_2 + -1) * 2;
      iVar6 = param_2 + -1;
      do {
        if (param_1 == 0) {
          sVar2 = param_5;
        }
        else {
          sVar2 = (short)param_1 + (short)(param_1 / 10) * -10 + 0x30;
        }
        *(short *)(lVar5 + *param_3) = sVar2;
        iVar3 = iVar3 + 1;
        lVar5 = lVar5 + -2;
        param_1 = param_1 / 10;
        bVar8 = iVar6 != 0;
        iVar6 = iVar6 + -1;
      } while (bVar8);
    }
    *param_3 = *param_3 + (longlong)iVar3 * 2;
    *param_4 = *param_4 - (longlong)iVar3;
    return;
  }
  *param_4 = 0;
  return;
}



/* ===== 180523618 FUN_180523618 ===== */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_180523618(undefined8 param_1,int param_2,undefined2 *param_3,longlong *param_4,longlong *param_5
             ,longlong param_6)

{
  undefined2 uVar1;
  short sVar2;
  longlong lVar3;
  undefined2 *puVar4;
  char cVar5;
  int iVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  ushort uVar10;
  uint uVar11;
  ulonglong uVar12;
  int iVar13;
  short *psVar14;
  undefined1 uVar16;
  undefined1 uVar15;
  undefined4 *puVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  ushort *puVar20;
  ushort *puVar21;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined2 *local_68;
  undefined8 local_60;
  short local_58;
  short sStack_56;
  undefined2 local_54;
  undefined2 local_52;
  undefined2 local_50;
  undefined2 local_4e;
  undefined2 local_4c;
  undefined2 local_4a;
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)&local_68;
  if (param_2 == 0) {
    puVar21 = *(ushort **)(param_6 + 0x2a0);
  }
  else if (param_2 == 1) {
    puVar21 = *(ushort **)(param_6 + 0x2a8);
  }
  else {
    puVar21 = *(ushort **)(param_6 + 0x2b0);
  }
  puVar19 = auStack_a8;
  local_68 = param_3;
  local_60 = param_1;
  if (*(int *)(param_6 + 0x158) != 1) {
    local_58 = param_3[10] + 0x76c;
    sStack_56 = param_3[8] + 1;
    local_54 = 0;
    local_52 = param_3[6];
    local_50 = param_3[4];
    local_4e = param_3[2];
    local_4c = *param_3;
    local_4a = 0;
    if (param_2 == 2) {
      local_80 = 0;
      local_88 = 0;
      iVar6 = FUN_18052c978();
    }
    else {
      local_78 = 0;
      local_80 = 0;
      local_88 = 0;
      iVar6 = FUN_18052c81c(*(undefined8 *)(param_6 + 0x2b8),0,&local_58,puVar21);
    }
    puVar19 = auStack_a8;
    if (iVar6 != 0) {
      uVar12 = (longlong)iVar6 * 2 + 0x10;
      uVar12 = -(ulonglong)((ulonglong)((longlong)iVar6 * 2) < uVar12) & uVar12;
      puVar19 = auStack_a8;
      if (uVar12 != 0) {
        if (uVar12 < 0x401) {
          uVar7 = uVar12 + 0xf;
          if (uVar7 <= uVar12) {
            uVar7 = 0xffffffffffffff0;
          }
          lVar3 = -(uVar7 & 0xfffffffffffffff0);
          puVar19 = auStack_a8 + lVar3;
          puVar18 = auStack_a8 + lVar3;
          puVar9 = (undefined4 *)((longlong)&local_68 + lVar3);
          if (puVar9 != (undefined4 *)0x0) {
            *puVar9 = 0xcccc;
            goto LAB_180523796;
          }
        }
        else {
          puVar9 = (undefined4 *)_malloc_base();
          puVar19 = auStack_a8;
          puVar18 = auStack_a8;
          puVar17 = (undefined4 *)0x0;
          if (puVar9 != (undefined4 *)0x0) {
            *puVar9 = 0xdddd;
LAB_180523796:
            puVar17 = puVar9 + 4;
            puVar19 = puVar18;
          }
          if (puVar17 != (undefined4 *)0x0) {
            uVar8 = *(undefined8 *)(param_6 + 0x2b8);
            if (param_2 == 2) {
              *(int *)(puVar19 + 0x28) = iVar6;
              *(undefined4 **)(puVar19 + 0x20) = puVar17;
              *(undefined8 *)(puVar19 + -8) = 0x1805237c7;
              iVar6 = FUN_18052c978();
            }
            else {
              *(undefined8 *)(puVar19 + 0x30) = 0;
              *(int *)(puVar19 + 0x28) = iVar6;
              *(undefined4 **)(puVar19 + 0x20) = puVar17;
              *(undefined8 *)(puVar19 + -8) = 0x1805237dc;
              iVar6 = FUN_18052c81c(uVar8,0,&local_58);
            }
            puVar9 = puVar17;
            while ((iVar6 = iVar6 + -1, 0 < iVar6 && (*param_5 != 0))) {
              uVar1 = *(undefined2 *)puVar9;
              puVar9 = (undefined4 *)((longlong)puVar9 + 2);
              *(undefined2 *)*param_4 = uVar1;
              *param_4 = *param_4 + 2;
              *param_5 = *param_5 + -1;
            }
            if (puVar17[-4] == 0xdddd) {
              *(undefined8 *)(puVar19 + -8) = 0x18052381a;
              FUN_1805277b0();
            }
            goto LAB_18052381a;
          }
        }
      }
    }
  }
  uVar8 = local_60;
  uVar10 = *puVar21;
  while ((uVar10 != 0 && (uVar12 = 0, *param_5 != 0))) {
    uVar16 = 0;
    uVar15 = 0;
    uVar7 = uVar12;
    puVar20 = puVar21;
    do {
      puVar20 = puVar20 + 1;
      iVar6 = (int)uVar7;
      uVar11 = iVar6 + 1;
      uVar7 = (ulonglong)uVar11;
      uVar12 = uVar12 + 1;
    } while (*puVar20 == *puVar21);
    uVar10 = *puVar21;
    iVar13 = 100;
    if (uVar10 < 0x65) {
      if (uVar10 == 100) {
        if (iVar6 != 0) {
          if (iVar6 != 1) {
            if (iVar6 == 2) {
              iVar13 = 0x61;
            }
            else {
              if (iVar6 != 3) goto LAB_180523aae;
              iVar13 = 0x41;
            }
          }
          goto LAB_180523acc;
        }
LAB_180523920:
        uVar15 = 1;
        goto LAB_180523acc;
      }
      if (uVar10 != 0x27) {
        if (uVar10 != 0x41) {
          iVar13 = 0x48;
          if (uVar10 == 0x48) {
            if (iVar6 == 0) goto LAB_180523920;
            if (iVar6 == 1) goto LAB_180523acc;
          }
          else {
            if (uVar10 == 0x4d) {
              if (iVar6 == 0) {
                uVar16 = 1;
              }
              else if (iVar6 != 1) {
                if (iVar6 == 2) {
                  iVar13 = 0x62;
                }
                else {
                  if (iVar6 != 3) goto LAB_180523aae;
                  iVar13 = 0x42;
                }
                goto LAB_180523acc;
              }
              uVar15 = uVar16;
              iVar13 = 0x6d;
              goto LAB_180523acc;
            }
            if (uVar10 == 0x61) goto LAB_1805238bd;
          }
          goto LAB_180523aae;
        }
LAB_1805238bd:
        *(undefined8 *)(puVar19 + -8) = 0x1805238cc;
        iVar6 = FUN_18052f5e0(puVar21,L"am/pm");
        if (iVar6 == 0) {
          puVar20 = puVar21 + 5;
        }
        else {
          *(undefined8 *)(puVar19 + -8) = 0x180523937;
          iVar6 = FUN_18052f5e0(puVar21,&DAT_18057c858);
          if (iVar6 == 0) {
            puVar20 = puVar21 + 3;
          }
        }
        iVar13 = 0x70;
        goto LAB_180523acc;
      }
      if ((uVar11 & 1) == 0) {
        puVar20 = puVar21 + (int)uVar11;
      }
      else {
        puVar20 = puVar21 + uVar12;
        uVar10 = *puVar20;
        if (uVar10 == 0) break;
        do {
          if ((*param_5 == 0) || (puVar20 = puVar20 + 1, uVar10 == 0x27)) break;
          *(ushort *)*param_4 = uVar10;
          *param_4 = *param_4 + 2;
          *param_5 = *param_5 + -1;
          uVar10 = *puVar20;
        } while (uVar10 != 0);
      }
    }
    else {
      if (uVar10 == 0x68) {
        if (iVar6 == 0) {
          uVar15 = 1;
        }
        else {
          uVar15 = uVar16;
          if (iVar6 != 1) goto LAB_180523aae;
        }
        iVar13 = 0x49;
      }
      else if (uVar10 == 0x6d) {
        if (iVar6 == 0) {
          uVar15 = 1;
        }
        else {
          uVar15 = uVar16;
          if (iVar6 != 1) goto LAB_180523aae;
        }
        iVar13 = 0x4d;
      }
      else if (uVar10 == 0x73) {
        if (iVar6 == 0) {
          uVar15 = 1;
        }
        else {
          uVar15 = uVar16;
          if (iVar6 != 1) goto LAB_180523aae;
        }
        iVar13 = 0x53;
      }
      else {
        if (uVar10 == 0x74) {
          if (*(int *)(local_68 + 4) < 0xc) {
            psVar14 = *(short **)(param_6 + 0x290);
          }
          else {
            psVar14 = *(short **)(param_6 + 0x298);
          }
          if ((uVar11 == 1) && (*param_5 != 0)) {
            *(short *)*param_4 = *psVar14;
            *param_4 = *param_4 + 2;
            *param_5 = *param_5 + -1;
          }
          else {
            while ((sVar2 = *psVar14, sVar2 != 0 && (*param_5 != 0))) {
              psVar14 = psVar14 + 1;
              *(short *)*param_4 = sVar2;
              *param_4 = *param_4 + 2;
              *param_5 = *param_5 + -1;
            }
          }
          goto LAB_180523af7;
        }
        if (uVar10 != 0x79) {
LAB_180523aae:
          puVar20 = puVar21 + 1;
          *(ushort *)*param_4 = uVar10;
          *param_4 = *param_4 + 2;
          *param_5 = *param_5 + -1;
          goto LAB_180523af7;
        }
        if (uVar11 == 2) {
          iVar13 = 0x79;
        }
        else {
          if (uVar11 != 4) goto LAB_180523aae;
          iVar13 = iVar6 + 0x56;
        }
      }
LAB_180523acc:
      puVar4 = local_68;
      puVar19[0x30] = uVar15;
      *(longlong *)(puVar19 + 0x28) = param_6;
      *(longlong **)(puVar19 + 0x20) = param_5;
      *(undefined8 *)(puVar19 + -8) = 0x180523ae9;
      cVar5 = FUN_1805225ec(uVar8,iVar13,puVar4,param_4);
      if (cVar5 == '\0') {
        *(undefined8 *)(puVar19 + -8) = 0x180523b0f;
        puVar9 = (undefined4 *)FUN_18051bfb0();
        *puVar9 = 0x16;
        uVar8 = 0;
        goto LAB_18052381c;
      }
    }
LAB_180523af7:
    uVar10 = *puVar20;
    puVar21 = puVar20;
  }
LAB_18052381a:
  uVar8 = 1;
LAB_18052381c:
  *(undefined8 *)(puVar19 + -8) = 0x180523828;
  return uVar8;
}



/* ===== 180523b1c FUN_180523b1c ===== */

longlong FUN_180523b1c(short *param_1,longlong param_2,short *param_3,longlong param_4,
                      longlong param_5,__crt_locale_pointers *param_6)

{
  short sVar1;
  short *psVar2;
  char cVar3;
  undefined4 *puVar4;
  bool bVar5;
  longlong local_res8;
  short *local_58;
  longlong local_50;
  longlong local_48 [2];
  char local_38;
  
  if (((param_1 == (short *)0x0) || (param_2 == 0)) || (*param_1 = 0, param_3 == (short *)0x0)) {
    puVar4 = (undefined4 *)FUN_18051bfb0();
    *puVar4 = 0x16;
    FUN_180527740();
    param_2 = 0;
  }
  else {
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_50,param_6);
    if (param_5 == 0) {
      param_5 = *(longlong *)(local_48[0] + 0x120);
    }
    local_res8 = param_2;
    local_58 = param_1;
    do {
      sVar1 = *param_3;
      if (sVar1 == 0) break;
      if (sVar1 == 0x25) {
        if (param_4 == 0) goto LAB_180523c4f;
        sVar1 = param_3[1];
        bVar5 = sVar1 == 0x23;
        psVar2 = param_3 + 1;
        if (bVar5) {
          sVar1 = param_3[2];
          psVar2 = param_3 + 2;
        }
        param_3 = psVar2;
        if ((sVar1 == 0x45) || (sVar1 == 0x4f)) {
          param_3 = param_3 + 1;
          sVar1 = *param_3;
        }
        cVar3 = FUN_1805225ec(local_48,sVar1,param_4,&local_58,&local_res8,param_5,bVar5);
        if (cVar3 == '\0') {
          if (local_res8 == 0) goto LAB_180523c8f;
          *param_1 = 0;
          goto LAB_180523c4f;
        }
      }
      else {
        *local_58 = sVar1;
        local_58 = local_58 + 1;
        local_res8 = local_res8 + -1;
      }
      param_3 = param_3 + 1;
    } while (local_res8 != 0);
    if (local_res8 == 0) {
LAB_180523c8f:
      *param_1 = 0;
      if (local_res8 == 0) {
        puVar4 = (undefined4 *)FUN_18051bfb0();
        *puVar4 = 0x22;
      }
      else {
LAB_180523c4f:
        puVar4 = (undefined4 *)FUN_18051bfb0();
        *puVar4 = 0x16;
        FUN_180527740();
      }
      param_2 = 0;
    }
    else {
      *local_58 = 0;
      param_2 = param_2 - local_res8;
    }
    if (local_38 != '\0') {
      *(uint *)(local_50 + 0x3a8) = *(uint *)(local_50 + 0x3a8) & 0xfffffffd;
    }
  }
  return param_2;
}



/* ===== 180523cb0 FUN_180523cb0 ===== */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

bool FUN_180523cb0(undefined8 param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  
  pcVar2 = (code *)FUN_180523d00();
  bVar3 = false;
  if (pcVar2 != (code *)0x0) {
    iVar1 = (*pcVar2)(param_1);
    bVar3 = iVar1 != 0;
  }
  return bVar3;
}



/* ===== 180523cf0 FUN_180523cf0 ===== */

void FUN_180523cf0(undefined8 param_1)

{
  DAT_180c9f7e0 = param_1;
  return;
}



/* ===== 180523d00 FUN_180523d00 ===== */

ulonglong FUN_180523d00(void)

{
  byte bVar1;
  ulonglong uVar2;
  
  __acrt_lock(0);
  bVar1 = (byte)DAT_180919500 & 0x3f;
  uVar2 = DAT_180c9f7e0 ^ DAT_180919500;
  __acrt_unlock(0);
  return uVar2 >> bVar1 | uVar2 << 0x40 - bVar1;
}



/* ===== 180523d40 _set_new_handler ===== */

/* Library Function - Single Match
    _set_new_handler
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

ulonglong _set_new_handler(ulonglong param_1)

{
  byte bVar1;
  byte bVar2;
  ulonglong uVar3;
  
  __acrt_lock(0);
  bVar2 = (byte)DAT_180919500 & 0x3f;
  uVar3 = DAT_180919500 ^ DAT_180c9f7e0;
  bVar1 = 0x40 - bVar2 & 0x3f;
  DAT_180c9f7e0 = (param_1 >> bVar1 | param_1 << 0x40 - bVar1) ^ DAT_180919500;
  __acrt_unlock(0);
  return uVar3 >> bVar2 | uVar3 << 0x40 - bVar2;
}



/* ===== 180523dac FUN_180523dac ===== */

undefined8 FUN_180523dac(int param_1)

{
  undefined8 uVar1;
  
  if (param_1 == -0x1f928c9d) {
    uVar1 = FUN_180523dc0(0xe06d7363);
    return uVar1;
  }
  return 0;
}



/* ===== 180523dc0 FUN_180523dc0 ===== */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined4 FUN_180523dc0(int param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int *piVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  int *piVar6;
  int *piVar7;
  undefined4 uVar8;
  
  puVar5 = (undefined8 *)FUN_1805298c0();
  if (puVar5 != (undefined8 *)0x0) {
    piVar2 = (int *)*puVar5;
    for (piVar6 = piVar2; piVar6 != piVar2 + 0x30; piVar6 = piVar6 + 4) {
      if (*piVar6 == param_1) {
        if (piVar6 == (int *)0x0) {
          return 0;
        }
        pcVar3 = *(code **)(piVar6 + 2);
        if (pcVar3 == (code *)0x0) {
          return 0;
        }
        if (pcVar3 == (code *)&DAT_00000005) {
          piVar6[2] = 0;
          piVar6[3] = 0;
          return 1;
        }
        if (pcVar3 != (code *)0x1) {
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
LAB_180523efe:
              *(undefined4 *)(puVar5 + 2) = uVar8;
            }
            else {
              if (*piVar6 == -0x3fffff72) {
                uVar8 = 0x83;
                goto LAB_180523efe;
              }
              if (*piVar6 == -0x3fffff71) {
                uVar8 = 0x86;
                goto LAB_180523efe;
              }
              if (*piVar6 == -0x3fffff70) {
                uVar8 = 0x81;
                goto LAB_180523efe;
              }
              if (*piVar6 == -0x3fffff6f) {
                uVar8 = 0x84;
                goto LAB_180523efe;
              }
              if (*piVar6 == -0x3fffff6e) {
                uVar8 = 0x8a;
                goto LAB_180523efe;
              }
              if (*piVar6 == -0x3fffff6d) {
                uVar8 = 0x85;
                goto LAB_180523efe;
              }
              if (*piVar6 == -0x3ffffd4c) {
                uVar8 = 0x8e;
                goto LAB_180523efe;
              }
              uVar8 = uVar1;
              if (*piVar6 == -0x3ffffd4b) {
                uVar8 = 0x8d;
                goto LAB_180523efe;
              }
            }
            (*pcVar3)(8,uVar8);
            *(undefined4 *)(puVar5 + 2) = uVar1;
          }
          else {
            piVar6[2] = 0;
            piVar6[3] = 0;
            (*pcVar3)(piVar6[1]);
          }
          puVar5[1] = uVar4;
        }
        return 0xffffffff;
      }
    }
  }
  return 0;
}



/* ===== 180523f2c FUN_180523f2c ===== */

void FUN_180523f2c(char *param_1,undefined8 *param_2,char *param_3,longlong *param_4,
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
      iVar4 = FUN_180539510((int)cVar2);
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
        goto LAB_180523fde;
      }
    }
    param_1 = pcVar6;
  } while ((bVar1) || ((cVar2 != ' ' && (cVar2 != '\t'))));
  if (param_3 != (char *)0x0) {
    param_3[-1] = '\0';
  }
LAB_180523fde:
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
        iVar4 = FUN_180539510((int)*pcVar6);
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



/* ===== 1805240ec __acrt_allocate_buffer_for_argv ===== */

/* Library Function - Single Match
    __acrt_allocate_buffer_for_argv
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined8 __acrt_allocate_buffer_for_argv(ulonglong param_1,ulonglong param_2,ulonglong param_3)

{
  undefined8 uVar1;
  
  if ((param_1 < 0x1fffffffffffffff) && (param_2 < 0xffffffffffffffff / param_3)) {
    if (param_2 * param_3 < ~(param_1 * 8)) {
      uVar1 = _calloc_base(param_1 * 8 + param_2 * param_3,1);
      FUN_1805277b0(0);
      return uVar1;
    }
  }
  return 0;
}



/* ===== 18052414c FUN_18052414c ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_18052414c(int param_1)

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
    puVar4 = (undefined4 *)FUN_18051bfb0();
    *puVar4 = 0x16;
    FUN_180527740();
    return 0x16;
  }
  __acrt_initialize_multibyte();
  FUN_180539378(0,&DAT_180c9f7f0,0x104);
  _DAT_180c9ff98 = &DAT_180c9f7f0;
  if ((DAT_180c9ffb8 == (char *)0x0) || (pcVar6 = DAT_180c9ffb8, *DAT_180c9ffb8 == '\0')) {
    pcVar6 = &DAT_180c9f7f0;
  }
  local_res18 = 0;
  local_res20 = 0;
  FUN_180523f2c(pcVar6,0,0,&local_res18,&local_res20);
  lVar1 = local_res18;
  plVar5 = (longlong *)__acrt_allocate_buffer_for_argv(local_res18,local_res20,1);
  if (plVar5 == (longlong *)0x0) {
    puVar4 = (undefined4 *)FUN_18051bfb0();
    iVar7 = 0xc;
    *puVar4 = 0xc;
  }
  else {
    FUN_180523f2c(pcVar6,plVar5,plVar5 + lVar1,&local_res18,&local_res20);
    if (param_1 != 1) {
      local_res10 = (longlong *)0x0;
      iVar3 = thunk_FUN_180538c50(plVar5,&local_res10);
      plVar2 = local_res10;
      if (iVar3 != 0) {
        FUN_1805277b0(local_res10);
        local_res10 = (longlong *)0x0;
        FUN_1805277b0(plVar5);
        return iVar3;
      }
      _DAT_180c9ffa0 = 0;
      lVar1 = *local_res10;
      while (lVar1 != 0) {
        local_res10 = local_res10 + 1;
        _DAT_180c9ffa0 = _DAT_180c9ffa0 + 1;
        lVar1 = *local_res10;
      }
      local_res10 = (longlong *)0x0;
      DAT_180c9ffa8 = plVar2;
      FUN_1805277b0(0);
      local_res10 = (longlong *)0x0;
      goto LAB_1805242b1;
    }
    _DAT_180c9ffa0 = (int)local_res18 + -1;
    DAT_180c9ffa8 = plVar5;
  }
  plVar5 = (longlong *)0x0;
LAB_1805242b1:
  FUN_1805277b0(plVar5);
  return iVar7;
}



/* ===== 1805242cc FUN_1805242cc ===== */

undefined8 FUN_1805242cc(void)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  uVar1 = 0;
  if (DAT_180c9f8f8 == 0) {
    __acrt_initialize_multibyte();
    lVar2 = FUN_18053954c();
    if (lVar2 == 0) {
      FUN_1805277b0(0);
      uVar1 = 0xffffffff;
    }
    else {
      lVar3 = FUN_1805243b0(lVar2);
      if (lVar3 == 0) {
        uVar1 = 0xffffffff;
      }
      else {
        DAT_180c9f8f8 = lVar3;
        DAT_180c9f910 = lVar3;
      }
      FUN_1805277b0(0);
      FUN_1805277b0(lVar2);
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== 180524340 FUN_180524340 ===== */

undefined8 FUN_180524340(void)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  uVar1 = 0;
  if (DAT_180c9f900 == 0) {
    lVar2 = FUN_18053965c();
    if (lVar2 == 0) {
      FUN_1805277b0(0);
      uVar1 = 0xffffffff;
    }
    else {
      lVar3 = FUN_1805244c4(lVar2);
      if (lVar3 == 0) {
        uVar1 = 0xffffffff;
      }
      else {
        DAT_180c9f900 = lVar3;
        DAT_180c9f908 = lVar3;
      }
      FUN_1805277b0(0);
      FUN_1805277b0(lVar2);
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== 1805243b0 FUN_1805243b0 ===== */

longlong * FUN_1805243b0(char *param_1)

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
LAB_180524413:
    FUN_1805277b0(0);
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
          FUN_1805277b0(0);
          goto LAB_180524413;
        }
        iVar1 = FUN_180526580();
        if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        *plVar8 = lVar5;
        plVar8 = plVar8 + 1;
        FUN_1805277b0();
      }
    }
    FUN_1805277b0(0);
  }
  return plVar3;
}



/* ===== 1805244c4 FUN_1805244c4 ===== */

longlong * FUN_1805244c4(short *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  short sVar4;
  longlong lVar5;
  longlong lVar6;
  short *psVar7;
  longlong *plVar8;
  
  sVar4 = *param_1;
  lVar5 = 0;
  psVar7 = param_1;
  while (sVar4 != 0) {
    lVar6 = lVar5 + 1;
    if (sVar4 == 0x3d) {
      lVar6 = lVar5;
    }
    lVar5 = -1;
    do {
      lVar2 = lVar5;
      lVar5 = lVar2 + 1;
    } while (psVar7[lVar5] != 0);
    psVar7 = psVar7 + lVar2 + 2;
    lVar5 = lVar6;
    sVar4 = *psVar7;
  }
  plVar3 = (longlong *)_calloc_base(lVar5 + 1,8);
  if (plVar3 == (longlong *)0x0) {
LAB_18052452f:
    FUN_1805277b0(0);
    plVar3 = (longlong *)0x0;
  }
  else {
    plVar8 = plVar3;
    for (; *param_1 != 0; param_1 = param_1 + lVar6) {
      lVar5 = -1;
      do {
        lVar6 = lVar5;
        lVar5 = lVar6 + 1;
      } while (param_1[lVar5] != 0);
      lVar6 = lVar6 + 2;
      if (*param_1 != 0x3d) {
        lVar5 = _calloc_base(lVar6,2);
        if (lVar5 == 0) {
          free_environment<>(plVar3);
          FUN_1805277b0(0);
          goto LAB_18052452f;
        }
        iVar1 = FUN_180535f30();
        if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        *plVar8 = lVar5;
        plVar8 = plVar8 + 1;
        FUN_1805277b0();
      }
    }
    FUN_1805277b0(0);
  }
  return plVar3;
}



/* ===== 1805245e4 free_environment<> ===== */

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
      FUN_1805277b0(lVar1);
      plVar2 = plVar2 + 1;
      lVar1 = *plVar2;
    }
    FUN_1805277b0(param_1);
  }
  return;
}



/* ===== 180524628 FUN_180524628 ===== */

undefined8 FUN_180524628(void)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  
  plVar4 = DAT_180c9f8f8;
  if (DAT_180c9f8f8 == (longlong *)0x0) {
LAB_18052464b:
    uVar2 = 0xffffffff;
  }
  else {
    for (; *plVar4 != 0; plVar4 = plVar4 + 1) {
      iVar1 = FUN_18052ee60(0,0,*plVar4,0xffffffff,0,0);
      if (iVar1 == 0) goto LAB_18052464b;
      lVar3 = _calloc_base((longlong)iVar1);
      if (lVar3 == 0) {
        lVar3 = 0;
LAB_1805246d8:
        FUN_1805277b0(lVar3);
        goto LAB_18052464b;
      }
      iVar1 = FUN_18052ee60(0,0,*plVar4,0xffffffff,lVar3,iVar1);
      if (iVar1 == 0) goto LAB_1805246d8;
      thunk_FUN_1805396f8();
      FUN_1805277b0();
    }
    uVar2 = 0;
  }
  return uVar2;
}



/* ===== 1805246e4 uninitialize_environment_internal<> ===== */

/* Library Function - Multiple Matches With Same Base Name
    void __cdecl uninitialize_environment_internal<char>(char * __ptr64 * __ptr64 & __ptr64)
    void __cdecl uninitialize_environment_internal<wchar_t>(wchar_t * __ptr64 * __ptr64 & __ptr64)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void uninitialize_environment_internal<>(longlong *param_1)

{
  if (*param_1 != DAT_180c9f910) {
    free_environment<>();
  }
  return;
}



/* ===== 180524700 uninitialize_environment_internal<> ===== */

/* Library Function - Multiple Matches With Same Base Name
    void __cdecl uninitialize_environment_internal<char>(char * __ptr64 * __ptr64 & __ptr64)
    void __cdecl uninitialize_environment_internal<wchar_t>(wchar_t * __ptr64 * __ptr64 & __ptr64)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void uninitialize_environment_internal<>(longlong *param_1)

{
  if (*param_1 != DAT_180c9f908) {
    free_environment<>();
  }
  return;
}



/* ===== 18052471c FUN_18052471c ===== */

longlong FUN_18052471c(void)

{
  int iVar1;
  longlong lVar2;
  
  if (DAT_180c9f900 != 0) {
    return DAT_180c9f900;
  }
  if ((DAT_180c9f8f8 == 0) ||
     ((iVar1 = FUN_180524340(), iVar1 != 0 && (iVar1 = FUN_180524628(), iVar1 != 0)))) {
    lVar2 = 0;
  }
  else {
    lVar2 = DAT_180c9f900;
  }
  return lVar2;
}



/* ===== 180524758 FUN_180524758 ===== */

void FUN_180524758(void)

{
  uninitialize_environment_internal<>(&DAT_180c9f8f8);
  uninitialize_environment_internal<>(&DAT_180c9f900);
  free_environment<>(DAT_180c9f910);
  free_environment<>(DAT_180c9f908);
  return;
}



/* ===== 18052479c thunk_FUN_1805242cc ===== */

undefined8 thunk_FUN_1805242cc(void)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  uVar1 = 0;
  if (DAT_180c9f8f8 == 0) {
    __acrt_initialize_multibyte();
    lVar2 = FUN_18053954c();
    if (lVar2 == 0) {
      FUN_1805277b0(0);
      uVar1 = 0xffffffff;
    }
    else {
      lVar3 = FUN_1805243b0(lVar2);
      if (lVar3 == 0) {
        uVar1 = 0xffffffff;
      }
      else {
        DAT_180c9f8f8 = lVar3;
        DAT_180c9f910 = lVar3;
      }
      FUN_1805277b0(0);
      FUN_1805277b0(lVar2);
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== 1805247a4 operator()<> ===== */

/* Library Function - Multiple Matches With Same Base Name
    public: int __cdecl __crt_seh_guarded_call<int>::operator()<class
   <lambda_638799b9deba96c50f710eeac98168cd>,class <lambda_22ebabd17bc4fa466a2aca6d8deb888d> &
   __ptr64,class <lambda_a6f7d7db0129f75315ebf26d50c089f1> >(class
   <lambda_638799b9deba96c50f710eeac98168cd> && __ptr64,class
   <lambda_22ebabd17bc4fa466a2aca6d8deb888d> & __ptr64,class
   <lambda_a6f7d7db0129f75315ebf26d50c089f1> && __ptr64) __ptr64
    public: int __cdecl __crt_seh_guarded_call<int>::operator()<class
   <lambda_b8c45f8f788dd370798f47cfe8ac3a86>,class <lambda_4e60a939b0d047cfe11ddc22648dfba9> &
   __ptr64,class <lambda_332c3edc96d0294ec56c57d38c1cdfd5> >(class
   <lambda_b8c45f8f788dd370798f47cfe8ac3a86> && __ptr64,class
   <lambda_4e60a939b0d047cfe11ddc22648dfba9> & __ptr64,class
   <lambda_332c3edc96d0294ec56c57d38c1cdfd5> && __ptr64) __ptr64
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined4
operator()<>(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  
  __acrt_lock(*param_2);
  uVar1 = FUN_18052481c(param_3);
  __acrt_unlock(*param_4);
  return uVar1;
}



/* ===== 1805247e0 operator()<> ===== */

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
  uVar1 = FUN_1805249cc(param_3);
  __acrt_unlock(*param_4);
  return uVar1;
}



/* ===== 18052481c FUN_18052481c ===== */

undefined8 FUN_18052481c(undefined8 *param_1)

{
  ulonglong uVar1;
  undefined8 uVar2;
  byte bVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong *puVar8;
  ulonglong *puVar9;
  
  puVar4 = *(ulonglong **)*param_1;
  if (puVar4 == (ulonglong *)0x0) {
LAB_1805249ae:
    uVar2 = 0xffffffff;
  }
  else {
    bVar3 = (byte)DAT_180919500 & 0x3f;
    uVar6 = (DAT_180919500 ^ *puVar4) >> bVar3 | (DAT_180919500 ^ *puVar4) << 0x40 - bVar3;
    puVar9 = (ulonglong *)
             ((DAT_180919500 ^ puVar4[1]) >> bVar3 | (DAT_180919500 ^ puVar4[1]) << 0x40 - bVar3);
    puVar4 = (ulonglong *)
             ((DAT_180919500 ^ puVar4[2]) >> bVar3 | (DAT_180919500 ^ puVar4[2]) << 0x40 - bVar3);
    if (puVar9 == puVar4) {
      uVar5 = (longlong)((longlong)puVar4 - uVar6) >> 3;
      uVar7 = uVar5;
      if (0x200 < uVar5) {
        uVar7 = 0x200;
      }
      uVar7 = uVar7 + uVar5;
      if (uVar7 == 0) {
        uVar7 = 0x20;
      }
      if (uVar7 < uVar5) {
LAB_1805248be:
        uVar7 = uVar5 + 4;
        uVar1 = _recalloc_base(uVar6,uVar7,8);
        FUN_1805277b0(0);
        if (uVar1 == 0) goto LAB_1805249ae;
      }
      else {
        uVar1 = _recalloc_base(uVar6,uVar7,8);
        FUN_1805277b0(0);
        if (uVar1 == 0) goto LAB_1805248be;
      }
      uVar6 = uVar1;
      uVar1 = DAT_180919500;
      puVar9 = (ulonglong *)(uVar6 + uVar5 * 8);
      puVar4 = (ulonglong *)(uVar6 + uVar7 * 8);
      uVar7 = (ulonglong)((longlong)puVar4 + (7 - (longlong)puVar9)) >> 3;
      if (puVar4 < puVar9) {
        uVar7 = 0;
      }
      if (uVar7 != 0) {
        puVar8 = puVar9;
        for (; uVar7 != 0; uVar7 = uVar7 - 1) {
          *puVar8 = uVar1;
          puVar8 = puVar8 + 1;
        }
      }
    }
    bVar3 = -((byte)DAT_180919500 & 0x3f) & 0x3f;
    *puVar9 = (*(ulonglong *)param_1[1] >> bVar3 | *(ulonglong *)param_1[1] << 0x40 - bVar3) ^
              DAT_180919500;
    bVar3 = -((byte)DAT_180919500 & 0x3f) & 0x3f;
    **(ulonglong **)*param_1 = (uVar6 >> bVar3 | uVar6 << 0x40 - bVar3) ^ DAT_180919500;
    bVar3 = -((byte)DAT_180919500 & 0x3f) & 0x3f;
    *(ulonglong *)(*(longlong *)*param_1 + 8) =
         ((ulonglong)(puVar9 + 1) >> bVar3 | (longlong)(puVar9 + 1) << 0x40 - bVar3) ^ DAT_180919500
    ;
    bVar3 = 0x40 - ((byte)DAT_180919500 & 0x3f) & 0x3f;
    uVar2 = 0;
    *(ulonglong *)(*(longlong *)*param_1 + 0x10) =
         ((ulonglong)puVar4 >> bVar3 | (longlong)puVar4 << 0x40 - bVar3) ^ DAT_180919500;
  }
  return uVar2;
}



/* ===== 1805249cc FUN_1805249cc ===== */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 FUN_1805249cc(undefined8 *param_1)

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
  
  uVar1 = DAT_180919500;
  puVar8 = *(ulonglong **)*param_1;
  if (puVar8 == (ulonglong *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    bVar5 = (byte)DAT_180919500 & 0x3f;
    puVar10 = (ulonglong *)
              ((DAT_180919500 ^ *puVar8) >> bVar5 | (DAT_180919500 ^ *puVar8) << 0x40 - bVar5);
    puVar8 = (ulonglong *)
             ((DAT_180919500 ^ puVar8[1]) >> bVar5 | (DAT_180919500 ^ puVar8[1]) << 0x40 - bVar5);
    if ((longlong)puVar10 - 1U < 0xfffffffffffffffe) {
      uVar7 = (uint)DAT_180919500 & 0x3f;
      puVar9 = puVar8;
      uVar3 = DAT_180919500;
      puVar13 = puVar10;
      while (puVar8 = puVar8 + -1, puVar10 <= puVar8) {
        if (*puVar8 != uVar1) {
          uVar3 = *puVar8 ^ uVar3;
          *puVar8 = uVar1;
          (*(code *)(uVar3 >> (sbyte)uVar7 | uVar3 << 0x40 - (sbyte)uVar7))();
          uVar7 = (uint)DAT_180919500 & 0x3f;
          uVar11 = DAT_180919500 ^ **(ulonglong **)*param_1;
          uVar3 = DAT_180919500 ^ (*(ulonglong **)*param_1)[1];
          sVar6 = (sbyte)uVar7;
          puVar12 = (ulonglong *)(uVar11 >> sVar6 | uVar11 << 0x40 - sVar6);
          puVar4 = (ulonglong *)(uVar3 >> sVar6 | uVar3 << 0x40 - sVar6);
          uVar3 = DAT_180919500;
          if ((puVar12 != puVar13) || (puVar4 != puVar9)) {
            puVar8 = puVar4;
            puVar9 = puVar4;
            puVar10 = puVar12;
            puVar13 = puVar12;
          }
        }
      }
      if (puVar10 != (ulonglong *)0xffffffffffffffff) {
        FUN_1805277b0(puVar10);
        uVar3 = DAT_180919500;
      }
      **(ulonglong **)*param_1 = uVar3;
      *(ulonglong *)(*(longlong *)*param_1 + 8) = uVar3;
      *(ulonglong *)(*(longlong *)*param_1 + 0x10) = uVar3;
    }
    uVar2 = 0;
  }
  return uVar2;
}



/* ===== 180524ae4 FUN_180524ae4 ===== */

void FUN_180524ae4(undefined8 param_1)

{
  _register_onexit_function(&DAT_180c9f918,param_1);
  return;
}



/* ===== 180524af4 FUN_180524af4 ===== */

void FUN_180524af4(undefined8 param_1)

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



/* ===== 180524b38 _initialize_onexit_table ===== */

/* Library Function - Single Match
    _initialize_onexit_table
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined8 _initialize_onexit_table(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = DAT_180919500;
  if (param_1 == (longlong *)0x0) {
    return 0xffffffff;
  }
  if (*param_1 == param_1[2]) {
    *param_1 = DAT_180919500;
    param_1[1] = lVar1;
    param_1[2] = lVar1;
  }
  return 0;
}



/* ===== 180524b60 _register_onexit_function ===== */

/* Library Function - Single Match
    _register_onexit_function
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void _register_onexit_function(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_res8;
  undefined8 local_res10;
  undefined1 local_res18 [8];
  undefined4 local_res20 [2];
  undefined4 local_28 [2];
  undefined8 *local_20;
  undefined8 *local_18;
  
  local_20 = &local_res8;
  local_18 = &local_res10;
  local_res20[0] = 2;
  local_28[0] = 2;
  local_res8 = param_1;
  local_res10 = param_2;
  operator()<>(local_res18,local_28,&local_20,local_res20);
  return;
}



/* ===== 180524bbc FUN_180524bbc ===== */

undefined1 FUN_180524bbc(void)

{
  _initialize_onexit_table(&DAT_180c9f918);
  _initialize_onexit_table(&DAT_180c9f930);
  return 1;
}



/* ===== 180524be0 FUN_180524be0 ===== */

undefined1 FUN_180524be0(void)

{
  FUN_180524758();
  return 1;
}



/* ===== 180524bf0 FUN_180524bf0 ===== */

undefined1 FUN_180524bf0(void)

{
  undefined8 uVar1;
  
  uVar1 = DAT_180919500;
  FUN_1805275e4(DAT_180919500);
  FUN_180523cf0(uVar1);
  FUN_1805348b8(uVar1);
  FUN_180539d60(uVar1);
  FUN_18051c3a8(uVar1);
  return 1;
}



/* ===== 180524c38 FUN_180524c38 ===== */

undefined8 FUN_180524c38(void)

{
  int iVar1;
  
  LOCK();
  iVar1 = *DAT_180c9ff88;
  *DAT_180c9ff88 = *DAT_180c9ff88 + -1;
  UNLOCK();
  if ((iVar1 == 1) && (DAT_180c9ff88 != (int *)&DAT_180919bf0)) {
    FUN_1805277b0();
    DAT_180c9ff88 = (int *)&DAT_180919bf0;
  }
  return 1;
}



/* ===== 180524c78 FUN_180524c78 ===== */

undefined1 FUN_180524c78(void)

{
  FUN_1805277b0(DAT_180c9f970);
  DAT_180c9f970 = 0;
  FUN_1805277b0(DAT_180c9f978);
  DAT_180c9f978 = 0;
  FUN_1805277b0(DAT_180c9ffa8);
  DAT_180c9ffa8 = 0;
  FUN_1805277b0(DAT_180c9ffb0);
  DAT_180c9ffb0 = 0;
  return 1;
}



/* ===== 180524cd4 FUN_180524cd4 ===== */

void FUN_180524cd4(void)

{
  FUN_180539c78(&PTR_LAB_18057c9b0,&DAT_18057cab0);
  return;
}



/* ===== 180524ce8 FUN_180524ce8 ===== */

bool FUN_180524ce8(void)

{
  longlong lVar1;
  
  lVar1 = FUN_1805298c0();
  return lVar1 != 0;
}



/* ===== 180524cfc FUN_180524cfc ===== */

undefined1 FUN_180524cfc(void)

{
  FUN_180529810();
  return 1;
}



/* ===== 180524d0c FUN_180524d0c ===== */

undefined4 FUN_180524d0c(bool param_1)

{
  undefined4 uVar1;
  
  if (param_1 == false) {
    uVar1 = FUN_180539cf8(&PTR_LAB_18057c9b0,&DAT_18057cab0);
    return uVar1;
  }
  if (DAT_180c9f550 != 0) {
    common_flush_all(param_1);
  }
  return 1;
}



/* ===== 180524d44 FUN_180524d44 ===== */

undefined1 FUN_180524d44(void)

{
  FUN_1805299f0();
  return 1;
}



/* ===== 180524d54 FUN_180524d54 ===== */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_180524d54(undefined8 *param_1,undefined8 *param_2)

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



/* ===== 180524d8c FUN_180524d8c ===== */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 FUN_180524d8c(undefined8 *param_1,undefined8 *param_2)

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



/* ===== 180524dd0 FUN_180524dd0 ===== */

void FUN_180524dd0(ulonglong param_1)

{
  if (param_1 != 0) {
    thunk_FUN_1805277b0(*(undefined8 *)((param_1 & 0xfffffffffffffff8) - 8));
  }
  return;
}



/* ===== 180524dec FUN_180524dec ===== */

longlong FUN_180524dec(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  longlong *plVar1;
  code *pcVar2;
  ulonglong uVar3;
  ulonglong in_RAX;
  longlong lVar4;
  ulonglong unaff_RBX;
  longlong unaff_RDI;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong in_R11;
  undefined1 auStackX_8 [32];
  longlong in_stack_00000040;
  
  if (in_RAX <= unaff_RBX) {
    uVar6 = 0;
    do {
      uVar3 = 0;
      uVar5 = (longlong)(unaff_RDI - param_3) >> 1;
      if (uVar5 == 0) {
LAB_1801d1e8f:
        lVar4 = in_R11 + uVar6;
        goto LAB_1801d1e93;
      }
      while ((*(char *)(param_3 + 1 + uVar3 * 2) != '\0' ||
             (*(char *)(in_R11 + uVar3 + uVar6) == *(char *)(param_3 + uVar3 * 2)))) {
        uVar3 = uVar3 + 1;
        if (uVar5 <= uVar3) goto LAB_1801d1e8f;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 <= unaff_RBX - in_RAX);
  }
  lVar4 = 0;
LAB_1801d1e93:
  if (param_3 != 0) {
    uVar6 = ((longlong)(in_stack_00000040 - param_3) >> 1) * 2;
    if (0xfff < uVar6) {
      plVar1 = (longlong *)(param_3 - 8);
      param_3 = (param_3 - *plVar1) - 8;
      if (param_3 < 0x20) {
        thunk_FUN_1803d64e0(*plVar1,uVar6 + 0x27);
        return lVar4;
      }
      pcVar2 = (code *)swi(0x29);
      (*pcVar2)(5);
      register0x00000020 = (BADSPACEBASE *)auStackX_8;
    }
    *(undefined8 *)((longlong)register0x00000020 + -8) = 0x1801d1ef3;
    thunk_FUN_1803d64e0(param_3);
  }
  return lVar4;
}



/* ===== 180524e00 _aligned_malloc ===== */

/* Library Function - Single Match
    _aligned_malloc
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void * __cdecl _aligned_malloc(size_t _Size,size_t _Alignment)

{
  size_t sVar1;
  ulonglong uVar2;
  undefined4 *puVar3;
  longlong lVar4;
  void *pvVar5;
  
  pvVar5 = (void *)0x0;
  if ((_Alignment == 0) || ((_Alignment & _Alignment - 1) != 0)) {
    puVar3 = (undefined4 *)FUN_18051bfb0();
    *puVar3 = 0x16;
    FUN_180527740();
  }
  else {
    sVar1 = 8;
    if (8 < _Alignment) {
      sVar1 = _Alignment;
    }
    uVar2 = _Size + 8 + (sVar1 - 1);
    if (uVar2 < _Size) {
      puVar3 = (undefined4 *)FUN_18051bfb0();
      *puVar3 = 0xc;
    }
    else {
      lVar4 = _malloc_base(uVar2);
      if (lVar4 != 0) {
        pvVar5 = (void *)(sVar1 + 7 + lVar4 & ~(sVar1 - 1));
        *(longlong *)((longlong)pvVar5 + -8) = lVar4;
      }
    }
  }
  return pvVar5;
}



/* ===== 180524e90 _aligned_offset_malloc ===== */

/* Library Function - Single Match
    _aligned_offset_malloc
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void * __cdecl _aligned_offset_malloc(size_t _Size,size_t _Alignment,size_t _Offset)

{
  ulonglong uVar1;
  undefined4 *puVar2;
  longlong lVar3;
  void *pvVar4;
  ulonglong uVar5;
  size_t sVar6;
  longlong lVar7;
  
  pvVar4 = (void *)0x0;
  if (((_Alignment == 0) || ((_Alignment & _Alignment - 1) != 0)) ||
     ((_Offset != 0 && (_Size <= _Offset)))) {
    puVar2 = (undefined4 *)FUN_18051bfb0();
    *puVar2 = 0x16;
    FUN_180527740();
  }
  else {
    sVar6 = 8;
    if (8 < _Alignment) {
      sVar6 = _Alignment;
    }
    uVar5 = (ulonglong)(-(int)_Offset & 7);
    lVar7 = sVar6 + 7 + uVar5;
    uVar1 = lVar7 + _Size;
    if (uVar1 < _Size) {
      puVar2 = (undefined4 *)FUN_18051bfb0();
      *puVar2 = 0xc;
    }
    else {
      lVar3 = _malloc_base(uVar1);
      if (lVar3 != 0) {
        pvVar4 = (void *)((lVar7 + lVar3 + _Offset & ~(sVar6 - 1)) - _Offset);
        *(longlong *)((longlong)pvVar4 + (-8 - uVar5)) = lVar3;
      }
    }
  }
  return pvVar4;
}



/* ===== 180524f60 FID_conflict:_aligned_msize ===== */

/* Library Function - Multiple Matches With Different Base Names
    _aligned_msize
    _aligned_msize_base
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

size_t __cdecl FID_conflict__aligned_msize(void *_Memory,size_t _Alignment,size_t _Offset)

{
  undefined4 *puVar1;
  size_t sVar2;
  longlong lVar3;
  
  if (_Memory == (void *)0x0) {
    puVar1 = (undefined4 *)FUN_18051bfb0();
    *puVar1 = 0x16;
    FUN_180527740();
    sVar2 = 0xffffffffffffffff;
  }
  else {
    lVar3 = _msize_base(*(undefined8 *)(((ulonglong)_Memory & 0xfffffffffffffff8) - 8));
    sVar2 = 8;
    if (8 < _Alignment) {
      sVar2 = _Alignment;
    }
    sVar2 = lVar3 + ((-7 - sVar2) - (ulonglong)(-(int)_Offset & 7));
  }
  return sVar2;
}



/* ===== 180524fd0 FUN_180524fd0 ===== */

ulonglong FUN_180524fd0(ulonglong param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4)

{
  undefined4 uVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  
  bVar2 = false;
  if (param_1 == 0) {
    if (((param_3 != 0) && ((param_3 & param_3 - 1) == 0)) &&
       ((param_4 == 0 || (param_4 < param_2)))) {
      uVar7 = 8;
      if (8 < param_3) {
        uVar7 = param_3;
      }
      uVar6 = (ulonglong)(-(int)param_4 & 7);
      lVar10 = uVar7 + 7 + uVar6;
      if (param_2 <= lVar10 + param_2) {
        lVar3 = _malloc_base();
        if (lVar3 == 0) {
          return 0;
        }
        param_4 = (lVar10 + lVar3 + param_4 & ~(uVar7 - 1)) - param_4;
        *(longlong *)((param_4 - uVar6) + -8) = lVar3;
        return param_4;
      }
LAB_180525125:
      puVar5 = (undefined4 *)FUN_18051bfb0();
      *puVar5 = 0xc;
      return 0;
    }
LAB_1805251fc:
    puVar5 = (undefined4 *)FUN_18051bfb0();
    *puVar5 = 0x16;
    FUN_180527740();
    return 0;
  }
  if (param_2 == 0) {
    thunk_FUN_1805277b0(*(undefined8 *)((param_1 & 0xfffffffffffffff8) - 8));
    return 0;
  }
  if (((param_3 == 0) || ((param_3 & param_3 - 1) != 0)) || ((param_4 != 0 && (param_2 <= param_4)))
     ) goto LAB_1805251fc;
  uVar7 = 8;
  if (8 < param_3) {
    uVar7 = param_3;
  }
  lVar10 = *(longlong *)((param_1 & 0xfffffffffffffff8) - 8);
  uVar8 = uVar7 - 1;
  lVar3 = param_1 - lVar10;
  uVar9 = (ulonglong)(-(int)param_4 & 7);
  lVar4 = _msize_base(lVar10);
  uVar6 = lVar4 + (lVar10 - param_1);
  if (param_2 < uVar6) {
    uVar6 = param_2;
  }
  uVar7 = uVar7 + 7 + uVar9 + param_2;
  if (uVar7 < param_2) goto LAB_180525125;
  if (param_1 <= uVar9 + 8 + lVar10 + uVar8) {
    puVar5 = (undefined4 *)FUN_18051bfb0();
    uVar1 = *puVar5;
    lVar4 = thunk_FUN_180539db0(lVar10,uVar7);
    if (lVar4 != 0) {
      lVar11 = lVar4;
      goto LAB_180525199;
    }
    puVar5 = (undefined4 *)FUN_18051bfb0();
    *puVar5 = uVar1;
  }
  lVar4 = _malloc_base(uVar7);
  if (lVar4 == 0) {
    return 0;
  }
  bVar2 = true;
  lVar11 = lVar10;
LAB_180525199:
  if ((lVar4 != lVar10) || ((~uVar8 & uVar9 + param_1 + param_4) != 0)) {
    param_1 = (uVar9 + 8 + lVar4 + uVar8 + param_4 & ~uVar8) - param_4;
    FUN_180540530(param_1,lVar3 + lVar11,uVar6);
    if (bVar2) {
      thunk_FUN_1805277b0(lVar11);
    }
    *(longlong *)((param_1 - uVar9) + -8) = lVar4;
  }
  return param_1;
}



/* ===== 180525230 FUN_180525230 ===== */

ulonglong FUN_180525230(ulonglong param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4,
                       ulonglong param_5)

{
  undefined4 uVar1;
  int iVar2;
  bool bVar3;
  undefined4 *puVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  
  uVar11 = 0;
  if ((param_2 != 0) &&
     (uVar11 = 0xffffffffffffffe0 % param_2, 0xffffffffffffffe0 / param_2 < param_3)) {
    puVar4 = (undefined4 *)FUN_18051bfb0();
    *puVar4 = 0xc;
    return 0;
  }
  param_2 = param_2 * param_3;
  iVar2 = (int)param_5;
  if (param_1 == 0) {
    uVar12 = 0;
    if (((param_4 == 0) || ((param_4 & param_4 - 1) != 0)) ||
       ((param_5 != 0 && (param_2 <= param_5)))) {
      puVar4 = (undefined4 *)FUN_18051bfb0(0,uVar11);
      *puVar4 = 0x16;
      FUN_180527740();
LAB_1805254fa:
      param_1 = 0;
    }
    else {
      uVar9 = 8;
      if (8 < param_4) {
        uVar9 = param_4;
      }
      lVar5 = (ulonglong)(-iVar2 & 7) + 8 + (uVar9 - 1);
      uVar13 = lVar5 + param_2;
      if (uVar13 < param_2) {
        puVar4 = (undefined4 *)FUN_18051bfb0(uVar13,uVar11);
        *puVar4 = 0xc;
        goto LAB_1805254fa;
      }
      lVar6 = _malloc_base();
      if (lVar6 == 0) goto LAB_1805254fa;
      param_1 = (lVar5 + lVar6 + param_5 & ~(uVar9 - 1)) - param_5;
      *(longlong *)((param_1 - (-iVar2 & 7)) + -8) = lVar6;
    }
LAB_1805254fd:
    if (param_1 == 0) {
      return 0;
    }
LAB_180525502:
    if (uVar12 < param_2) {
      FUN_180540170(param_1 + uVar12,0,param_2 - uVar12);
    }
  }
  else {
    lVar5 = _msize_base(*(undefined8 *)((param_1 & 0xfffffffffffffff8) - 8));
    uVar11 = 8;
    if (8 < param_4) {
      uVar11 = param_4;
    }
    uVar12 = ((-7 - uVar11) - (ulonglong)(-iVar2 & 7)) + lVar5;
    if (param_2 == 0) {
      thunk_FUN_1805277b0(*(undefined8 *)((param_1 & 0xfffffffffffffff8) - 8));
    }
    else {
      if (((param_4 != 0) && ((param_4 & param_4 - 1) == 0)) &&
         ((param_5 == 0 || (param_5 < param_2)))) {
        bVar3 = true;
        uVar11 = 8;
        if (8 < param_4) {
          uVar11 = param_4;
        }
        lVar5 = *(longlong *)((param_1 & 0xfffffffffffffff8) - 8);
        uVar13 = (ulonglong)(-iVar2 & 7);
        lVar6 = param_1 - lVar5;
        uVar11 = uVar11 - 1;
        lVar7 = _msize_base(lVar5);
        uVar9 = lVar7 + (lVar5 - param_1);
        if (param_2 < uVar9) {
          uVar9 = param_2;
        }
        uVar10 = uVar13 + 8 + uVar11 + param_2;
        if (uVar10 < param_2) {
          puVar4 = (undefined4 *)FUN_18051bfb0();
          *puVar4 = 0xc;
          goto LAB_1805252d1;
        }
        if (uVar13 + 8 + lVar5 + uVar11 < param_1) {
LAB_18052538d:
          lVar8 = _malloc_base(uVar10);
          lVar7 = lVar5;
          if (lVar8 == 0) goto LAB_1805252d1;
        }
        else {
          puVar4 = (undefined4 *)FUN_18051bfb0();
          uVar1 = *puVar4;
          lVar7 = thunk_FUN_180539db0(lVar5,uVar10);
          if (lVar7 == 0) {
            puVar4 = (undefined4 *)FUN_18051bfb0();
            *puVar4 = uVar1;
            goto LAB_18052538d;
          }
          bVar3 = false;
          lVar8 = lVar7;
        }
        if ((lVar8 != lVar5) || ((~uVar11 & uVar13 + param_1 + param_5) != 0)) {
          param_1 = (uVar13 + 8 + lVar8 + uVar11 + param_5 & ~uVar11) - param_5;
          FUN_180540530(param_1,lVar6 + lVar7,uVar9);
          if (bVar3) {
            thunk_FUN_1805277b0(lVar7);
          }
          *(longlong *)((param_1 - uVar13) + -8) = lVar8;
          goto LAB_1805254fd;
        }
        goto LAB_180525502;
      }
      puVar4 = (undefined4 *)FUN_18051bfb0();
      *puVar4 = 0x16;
      FUN_180527740();
    }
LAB_1805252d1:
    param_1 = 0;
  }
  return param_1;
}



/* ===== 180525550 FUN_180525550 ===== */

ulonglong FUN_180525550(ulonglong param_1,ulonglong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  undefined4 uVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  bVar3 = false;
  if (param_1 == 0) {
    if ((param_3 != 0) && ((param_3 & param_3 - 1) == 0)) {
      uVar9 = 8;
      if (8 < param_3) {
        uVar9 = param_3;
      }
      if (param_2 <= param_2 + 8 + (uVar9 - 1)) {
        lVar4 = _malloc_base();
        if (lVar4 == 0) {
          return 0;
        }
        uVar9 = uVar9 + 7 + lVar4 & ~(uVar9 - 1);
        *(longlong *)(uVar9 - 8) = lVar4;
        return uVar9;
      }
LAB_180525652:
      puVar7 = (undefined4 *)FUN_18051bfb0();
      *puVar7 = 0xc;
      return 0;
    }
LAB_1805256f6:
    puVar7 = (undefined4 *)FUN_18051bfb0();
    *puVar7 = 0x16;
    FUN_180527740();
    return 0;
  }
  if (param_2 == 0) {
    thunk_FUN_1805277b0(*(undefined8 *)((param_1 & 0xfffffffffffffff8) - 8));
    return 0;
  }
  if ((param_3 == 0) || ((param_3 & param_3 - 1) != 0)) goto LAB_1805256f6;
  lVar4 = *(longlong *)((param_1 & 0xfffffffffffffff8) - 8);
  uVar9 = 8;
  if (8 < param_3) {
    uVar9 = param_3;
  }
  uVar1 = uVar9 - 1;
  lVar5 = param_1 - lVar4;
  lVar6 = _msize_base(lVar4);
  uVar8 = lVar6 + (lVar4 - param_1);
  if (param_2 < uVar8) {
    uVar8 = param_2;
  }
  uVar11 = param_2 + 8 + uVar1;
  if (uVar11 < param_2) goto LAB_180525652;
  if (param_1 <= uVar9 + 7 + lVar4) {
    puVar7 = (undefined4 *)FUN_18051bfb0();
    uVar2 = *puVar7;
    lVar6 = thunk_FUN_180539db0(lVar4,uVar11);
    if (lVar6 != 0) {
      lVar10 = lVar6;
      goto LAB_1805256ab;
    }
    puVar7 = (undefined4 *)FUN_18051bfb0();
    *puVar7 = uVar2;
  }
  lVar6 = _malloc_base(uVar11);
  if (lVar6 == 0) {
    return 0;
  }
  bVar3 = true;
  lVar10 = lVar4;
LAB_1805256ab:
  if ((lVar6 != lVar4) || ((param_1 & ~uVar1) != 0)) {
    param_1 = uVar9 + 7 + lVar6 & ~uVar1;
    FUN_180540530(param_1,lVar5 + lVar10,uVar8);
    if (bVar3) {
      thunk_FUN_1805277b0(lVar10);
    }
    *(longlong *)(param_1 - 8) = lVar6;
  }
  return param_1;
}



/* ===== 180525730 FUN_180525730 ===== */

ulonglong FUN_180525730(ulonglong param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4)

{
  undefined4 uVar1;
  bool bVar2;
  undefined4 *puVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  
  uVar9 = 0;
  if ((param_2 != 0) &&
     (uVar9 = 0xffffffffffffffe0 % param_2, 0xffffffffffffffe0 / param_2 < param_3)) {
    puVar3 = (undefined4 *)FUN_18051bfb0();
    *puVar3 = 0xc;
    return 0;
  }
  param_2 = param_2 * param_3;
  if (param_1 == 0) {
    uVar10 = 0;
    if ((param_4 == 0) || ((param_4 & param_4 - 1) != 0)) {
      puVar3 = (undefined4 *)FUN_18051bfb0(0,uVar9);
      *puVar3 = 0x16;
      FUN_180527740();
LAB_180525960:
      param_1 = 0;
    }
    else {
      uVar11 = 8;
      if (8 < param_4) {
        uVar11 = param_4;
      }
      uVar8 = param_2 + 8 + (uVar11 - 1);
      if (uVar8 < param_2) {
        puVar3 = (undefined4 *)FUN_18051bfb0(uVar8,uVar9);
        *puVar3 = 0xc;
        goto LAB_180525960;
      }
      lVar4 = _malloc_base();
      if (lVar4 == 0) goto LAB_180525960;
      param_1 = uVar11 + 7 + lVar4 & ~(uVar11 - 1);
      *(longlong *)(param_1 - 8) = lVar4;
    }
LAB_180525963:
    if (param_1 == 0) {
      return 0;
    }
LAB_180525968:
    if (uVar10 < param_2) {
      FUN_180540170(param_1 + uVar10,0,param_2 - uVar10);
    }
  }
  else {
    uVar11 = param_1 & 0xfffffffffffffff8;
    lVar4 = _msize_base(*(undefined8 *)(uVar11 - 8));
    uVar9 = 8;
    if (8 < param_4) {
      uVar9 = param_4;
    }
    uVar10 = (-7 - uVar9) + lVar4;
    if (param_2 == 0) {
      thunk_FUN_1805277b0(*(undefined8 *)(uVar11 - 8));
    }
    else {
      if ((param_4 != 0) && ((param_4 & param_4 - 1) == 0)) {
        lVar4 = *(longlong *)(uVar11 - 8);
        uVar9 = 8;
        if (8 < param_4) {
          uVar9 = param_4;
        }
        lVar5 = param_1 - lVar4;
        uVar11 = uVar9 - 1;
        lVar6 = _msize_base(lVar4);
        uVar8 = lVar6 + (lVar4 - param_1);
        if (param_2 < uVar8) {
          uVar8 = param_2;
        }
        uVar12 = param_2 + 8 + uVar11;
        if (uVar12 < param_2) {
          puVar3 = (undefined4 *)FUN_18051bfb0();
          *puVar3 = 0xc;
          goto LAB_1805257bf;
        }
        if (lVar4 + 8 + uVar11 < param_1) {
LAB_180525847:
          lVar7 = _malloc_base(uVar12);
          if (lVar7 == 0) goto LAB_1805257bf;
          bVar2 = true;
          lVar6 = lVar4;
        }
        else {
          puVar3 = (undefined4 *)FUN_18051bfb0();
          uVar1 = *puVar3;
          lVar6 = thunk_FUN_180539db0(lVar4,uVar12);
          if (lVar6 == 0) {
            puVar3 = (undefined4 *)FUN_18051bfb0();
            *puVar3 = uVar1;
            goto LAB_180525847;
          }
          bVar2 = false;
          lVar7 = lVar6;
        }
        if ((lVar7 != lVar4) || ((param_1 & ~uVar11) != 0)) {
          param_1 = uVar9 + 7 + lVar7 & ~uVar11;
          FUN_180540530(param_1,lVar5 + lVar6,uVar8);
          if (bVar2) {
            thunk_FUN_1805277b0(lVar6);
          }
          *(longlong *)(param_1 - 8) = lVar7;
          goto LAB_180525963;
        }
        goto LAB_180525968;
      }
      puVar3 = (undefined4 *)FUN_18051bfb0();
      *puVar3 = 0x16;
      FUN_180527740();
    }
LAB_1805257bf:
    param_1 = 0;
  }
  return param_1;
}



/* ===== 1805259b0 FUN_1805259b0 ===== */

void FUN_1805259b0(ulonglong param_1)

{
  if (param_1 != 0) {
    thunk_FUN_1805277b0(*(undefined8 *)((param_1 & 0xfffffffffffffff8) - 8));
  }
  return;
}



/* ===== 1805259e0 _aligned_malloc ===== */

/* Library Function - Single Match
    _aligned_malloc
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void * __cdecl _aligned_malloc(size_t _Size,size_t _Alignment)

{
  size_t sVar1;
  ulonglong uVar2;
  undefined4 *puVar3;
  longlong lVar4;
  void *pvVar5;
  
  pvVar5 = (void *)0x0;
  if ((_Alignment == 0) || ((_Alignment & _Alignment - 1) != 0)) {
    puVar3 = (undefined4 *)FUN_18051bfb0();
    *puVar3 = 0x16;
    FUN_180527740();
  }
  else {
    sVar1 = 8;
    if (8 < _Alignment) {
      sVar1 = _Alignment;
    }
    uVar2 = _Size + 8 + (sVar1 - 1);
    if (uVar2 < _Size) {
      puVar3 = (undefined4 *)FUN_18051bfb0();
      *puVar3 = 0xc;
    }
    else {
      lVar4 = _malloc_base(uVar2);
      if (lVar4 != 0) {
        pvVar5 = (void *)(sVar1 + 7 + lVar4 & ~(sVar1 - 1));
        *(longlong *)((longlong)pvVar5 + -8) = lVar4;
      }
    }
  }
  return pvVar5;
}



/* ===== 180525a70 FID_conflict:_aligned_msize ===== */

/* Library Function - Multiple Matches With Different Base Names
    _aligned_msize
    _aligned_msize_base
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

size_t __cdecl FID_conflict__aligned_msize(void *_Memory,size_t _Alignment,size_t _Offset)

{
  undefined4 *puVar1;
  size_t sVar2;
  longlong lVar3;
  
  if (_Memory == (void *)0x0) {
    puVar1 = (undefined4 *)FUN_18051bfb0();
    *puVar1 = 0x16;
    FUN_180527740();
    sVar2 = 0xffffffffffffffff;
  }
  else {
    lVar3 = _msize_base(*(undefined8 *)(((ulonglong)_Memory & 0xfffffffffffffff8) - 8));
    sVar2 = 8;
    if (8 < _Alignment) {
      sVar2 = _Alignment;
    }
    sVar2 = lVar3 + ((-7 - sVar2) - (ulonglong)(-(int)_Offset & 7));
  }
  return sVar2;
}



/* ===== 180525ae0 _aligned_offset_malloc_base ===== */

/* Library Function - Single Match
    _aligned_offset_malloc_base
   
   Library: Visual Studio 2015 Release */

longlong _aligned_offset_malloc_base(ulonglong param_1,ulonglong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  undefined4 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  if (((param_2 == 0) || ((param_2 & param_2 - 1) != 0)) || ((param_3 != 0 && (param_1 <= param_3)))
     ) {
    puVar2 = (undefined4 *)FUN_18051bfb0();
    *puVar2 = 0x16;
    FUN_180527740();
  }
  else {
    uVar5 = 8;
    if (8 < param_2) {
      uVar5 = param_2;
    }
    uVar4 = (ulonglong)(-(int)param_3 & 7);
    lVar6 = uVar5 + 7 + uVar4;
    uVar1 = lVar6 + param_1;
    if (uVar1 < param_1) {
      puVar2 = (undefined4 *)FUN_18051bfb0();
      *puVar2 = 0xc;
    }
    else {
      lVar3 = _malloc_base(uVar1);
      if (lVar3 != 0) {
        lVar6 = (lVar3 + lVar6 + param_3 & ~(uVar5 - 1)) - param_3;
        *(longlong *)((lVar6 - uVar4) + -8) = lVar3;
        return lVar6;
      }
    }
  }
  return 0;
}



/* ===== 180525ba0 FUN_180525ba0 ===== */

ulonglong FUN_180525ba0(ulonglong param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4)

{
  undefined4 uVar1;
  bool bVar2;
  undefined4 *puVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  
  uVar7 = 0;
  bVar2 = false;
  if (param_1 == 0) {
    if (((param_3 == 0) || ((param_3 & param_3 - 1) != 0)) ||
       ((param_4 != 0 && (param_2 <= param_4)))) {
      puVar3 = (undefined4 *)FUN_18051bfb0();
      *puVar3 = 0x16;
      FUN_180527740();
    }
    else {
      uVar6 = 8;
      if (8 < param_3) {
        uVar6 = param_3;
      }
      uVar8 = (ulonglong)(-(int)param_4 & 7);
      lVar10 = uVar6 + 7 + uVar8;
      if (lVar10 + param_2 < param_2) {
        puVar3 = (undefined4 *)FUN_18051bfb0();
        *puVar3 = 0xc;
      }
      else {
        lVar4 = _malloc_base();
        if (lVar4 != 0) {
          uVar7 = (lVar10 + lVar4 + param_4 & ~(uVar6 - 1)) - param_4;
          *(longlong *)((uVar7 - uVar8) + -8) = lVar4;
        }
      }
    }
    return uVar7;
  }
  if (param_2 == 0) {
    thunk_FUN_1805277b0(*(undefined8 *)((param_1 & 0xfffffffffffffff8) - 8));
  }
  else {
    if (((param_3 == 0) || ((param_3 & param_3 - 1) != 0)) ||
       ((param_4 != 0 && (param_2 <= param_4)))) {
      puVar3 = (undefined4 *)FUN_18051bfb0();
      *puVar3 = 0x16;
      FUN_180527740();
      return 0;
    }
    uVar7 = 8;
    if (8 < param_3) {
      uVar7 = param_3;
    }
    lVar10 = *(longlong *)((param_1 & 0xfffffffffffffff8) - 8);
    uVar8 = uVar7 - 1;
    lVar4 = param_1 - lVar10;
    uVar9 = (ulonglong)(-(int)param_4 & 7);
    lVar5 = _msize_base(lVar10);
    uVar6 = lVar5 + (lVar10 - param_1);
    if (param_2 < uVar6) {
      uVar6 = param_2;
    }
    uVar7 = uVar7 + 7 + uVar9 + param_2;
    if (uVar7 < param_2) {
      puVar3 = (undefined4 *)FUN_18051bfb0();
      *puVar3 = 0xc;
      return 0;
    }
    if (param_1 <= uVar9 + 8 + lVar10 + uVar8) {
      puVar3 = (undefined4 *)FUN_18051bfb0();
      uVar1 = *puVar3;
      lVar5 = thunk_FUN_180539db0(lVar10,uVar7);
      if (lVar5 != 0) {
        lVar11 = lVar5;
        goto LAB_180525d70;
      }
      puVar3 = (undefined4 *)FUN_18051bfb0();
      *puVar3 = uVar1;
    }
    lVar5 = _malloc_base(uVar7);
    if (lVar5 != 0) {
      bVar2 = true;
      lVar11 = lVar10;
LAB_180525d70:
      if ((lVar5 != lVar10) || ((~uVar8 & uVar9 + param_1 + param_4) != 0)) {
        param_1 = (uVar9 + 8 + lVar5 + uVar8 + param_4 & ~uVar8) - param_4;
        FUN_180540530(param_1,lVar4 + lVar11,uVar6);
        if (bVar2) {
          thunk_FUN_1805277b0(lVar11);
        }
        *(longlong *)((param_1 - uVar9) + -8) = lVar5;
      }
      return param_1;
    }
  }
  return 0;
}



/* ===== 180525e10 FUN_180525e10 ===== */

ulonglong FUN_180525e10(ulonglong param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4,
                       ulonglong param_5)

{
  undefined4 uVar1;
  int iVar2;
  bool bVar3;
  undefined4 *puVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  
  uVar10 = 0;
  if ((param_2 != 0) &&
     (uVar10 = 0xffffffffffffffe0 % param_2, 0xffffffffffffffe0 / param_2 < param_3)) {
    puVar4 = (undefined4 *)FUN_18051bfb0();
    *puVar4 = 0xc;
    return 0;
  }
  param_2 = param_2 * param_3;
  iVar2 = (int)param_5;
  if (param_1 == 0) {
    uVar11 = 0;
    if (((param_4 == 0) || ((param_4 & param_4 - 1) != 0)) ||
       ((param_5 != 0 && (param_2 <= param_5)))) {
      puVar4 = (undefined4 *)FUN_18051bfb0(0,uVar10);
      *puVar4 = 0x16;
      FUN_180527740();
LAB_1805260d0:
      param_1 = 0;
    }
    else {
      uVar8 = 8;
      if (8 < param_4) {
        uVar8 = param_4;
      }
      lVar5 = (ulonglong)(-iVar2 & 7) + 8 + (uVar8 - 1);
      uVar12 = lVar5 + param_2;
      if (uVar12 < param_2) {
        puVar4 = (undefined4 *)FUN_18051bfb0(uVar12,uVar10);
        *puVar4 = 0xc;
        goto LAB_1805260d0;
      }
      lVar6 = _malloc_base();
      if (lVar6 == 0) goto LAB_1805260d0;
      param_1 = (lVar5 + lVar6 + param_5 & ~(uVar8 - 1)) - param_5;
      *(longlong *)((param_1 - (-iVar2 & 7)) + -8) = lVar6;
    }
LAB_1805260d2:
    if (param_1 == 0) {
      return 0;
    }
LAB_1805260d7:
    if (uVar11 < param_2) {
      FUN_180540170(param_1 + uVar11,0,param_2 - uVar11);
    }
  }
  else {
    lVar5 = _msize_base(*(undefined8 *)((param_1 & 0xfffffffffffffff8) - 8));
    uVar10 = 8;
    if (8 < param_4) {
      uVar10 = param_4;
    }
    uVar11 = ((-7 - uVar10) - (ulonglong)(-iVar2 & 7)) + lVar5;
    if (param_2 == 0) {
      thunk_FUN_1805277b0(*(undefined8 *)((param_1 & 0xfffffffffffffff8) - 8));
    }
    else {
      if (((param_4 != 0) && ((param_4 & param_4 - 1) == 0)) &&
         ((param_5 == 0 || (param_5 < param_2)))) {
        bVar3 = true;
        uVar10 = 8;
        if (8 < param_4) {
          uVar10 = param_4;
        }
        lVar5 = *(longlong *)((param_1 & 0xfffffffffffffff8) - 8);
        uVar12 = (ulonglong)(-iVar2 & 7);
        lVar6 = param_1 - lVar5;
        uVar10 = uVar10 - 1;
        lVar7 = _msize_base(lVar5);
        uVar8 = lVar7 + (lVar5 - param_1);
        if (param_2 < uVar8) {
          uVar8 = param_2;
        }
        uVar9 = uVar12 + 8 + uVar10 + param_2;
        if (uVar9 < param_2) {
          puVar4 = (undefined4 *)FUN_18051bfb0();
          *puVar4 = 0xc;
          goto LAB_180525eb1;
        }
        if (uVar12 + 8 + lVar5 + uVar10 < param_1) {
LAB_180525f6c:
          lVar7 = _malloc_base(uVar9);
          lVar13 = lVar5;
          if (lVar7 == 0) goto LAB_180525eb1;
        }
        else {
          puVar4 = (undefined4 *)FUN_18051bfb0();
          uVar1 = *puVar4;
          lVar7 = thunk_FUN_180539db0(lVar5,uVar9);
          if (lVar7 == 0) {
            puVar4 = (undefined4 *)FUN_18051bfb0();
            *puVar4 = uVar1;
            goto LAB_180525f6c;
          }
          bVar3 = false;
          lVar13 = lVar7;
        }
        if ((lVar7 != lVar5) || ((~uVar10 & uVar12 + param_1 + param_5) != 0)) {
          param_1 = (uVar12 + 8 + lVar7 + uVar10 + param_5 & ~uVar10) - param_5;
          FUN_180540530(param_1,lVar6 + lVar13,uVar8);
          if (bVar3) {
            thunk_FUN_1805277b0(lVar13);
          }
          *(longlong *)((param_1 - uVar12) + -8) = lVar7;
          goto LAB_1805260d2;
        }
        goto LAB_1805260d7;
      }
      puVar4 = (undefined4 *)FUN_18051bfb0();
      *puVar4 = 0x16;
      FUN_180527740();
    }
LAB_180525eb1:
    param_1 = 0;
  }
  return param_1;
}



/* ===== 180526120 FUN_180526120 ===== */

ulonglong FUN_180526120(ulonglong param_1,ulonglong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  undefined4 uVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  bVar3 = false;
  if (param_1 == 0) {
    if ((param_3 != 0) && ((param_3 & param_3 - 1) == 0)) {
      uVar9 = 8;
      if (8 < param_3) {
        uVar9 = param_3;
      }
      if (param_2 <= param_2 + 8 + (uVar9 - 1)) {
        lVar4 = _malloc_base();
        if (lVar4 == 0) {
          return 0;
        }
        uVar9 = uVar9 + 7 + lVar4 & ~(uVar9 - 1);
        *(longlong *)(uVar9 - 8) = lVar4;
        return uVar9;
      }
LAB_180526222:
      puVar7 = (undefined4 *)FUN_18051bfb0();
      *puVar7 = 0xc;
      return 0;
    }
LAB_1805262c6:
    puVar7 = (undefined4 *)FUN_18051bfb0();
    *puVar7 = 0x16;
    FUN_180527740();
    return 0;
  }
  if (param_2 == 0) {
    thunk_FUN_1805277b0(*(undefined8 *)((param_1 & 0xfffffffffffffff8) - 8));
    return 0;
  }
  if ((param_3 == 0) || ((param_3 & param_3 - 1) != 0)) goto LAB_1805262c6;
  lVar4 = *(longlong *)((param_1 & 0xfffffffffffffff8) - 8);
  uVar9 = 8;
  if (8 < param_3) {
    uVar9 = param_3;
  }
  uVar1 = uVar9 - 1;
  lVar5 = param_1 - lVar4;
  lVar6 = _msize_base(lVar4);
  uVar8 = lVar6 + (lVar4 - param_1);
  if (param_2 < uVar8) {
    uVar8 = param_2;
  }
  uVar11 = param_2 + 8 + uVar1;
  if (uVar11 < param_2) goto LAB_180526222;
  if (param_1 <= uVar9 + 7 + lVar4) {
    puVar7 = (undefined4 *)FUN_18051bfb0();
    uVar2 = *puVar7;
    lVar6 = thunk_FUN_180539db0(lVar4,uVar11);
    if (lVar6 != 0) {
      lVar10 = lVar6;
      goto LAB_18052627b;
    }
    puVar7 = (undefined4 *)FUN_18051bfb0();
    *puVar7 = uVar2;
  }
  lVar6 = _malloc_base(uVar11);
  if (lVar6 == 0) {
    return 0;
  }
  bVar3 = true;
  lVar10 = lVar4;
LAB_18052627b:
  if ((lVar6 != lVar4) || ((param_1 & ~uVar1) != 0)) {
    param_1 = uVar9 + 7 + lVar6 & ~uVar1;
    FUN_180540530(param_1,lVar5 + lVar10,uVar8);
    if (bVar3) {
      thunk_FUN_1805277b0(lVar10);
    }
    *(longlong *)(param_1 - 8) = lVar6;
  }
  return param_1;
}



/* ===== 180526300 FUN_180526300 ===== */

ulonglong FUN_180526300(ulonglong param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4)

{
  undefined4 uVar1;
  bool bVar2;
  undefined4 *puVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  
  uVar9 = 0;
  if ((param_2 != 0) &&
     (uVar9 = 0xffffffffffffffe0 % param_2, 0xffffffffffffffe0 / param_2 < param_3)) {
    puVar3 = (undefined4 *)FUN_18051bfb0();
    *puVar3 = 0xc;
    return 0;
  }
  param_2 = param_2 * param_3;
  if (param_1 == 0) {
    uVar10 = 0;
    if ((param_4 == 0) || ((param_4 & param_4 - 1) != 0)) {
      puVar3 = (undefined4 *)FUN_18051bfb0(0,uVar9);
      *puVar3 = 0x16;
      FUN_180527740();
LAB_180526530:
      param_1 = 0;
    }
    else {
      uVar11 = 8;
      if (8 < param_4) {
        uVar11 = param_4;
      }
      uVar8 = param_2 + 8 + (uVar11 - 1);
      if (uVar8 < param_2) {
        puVar3 = (undefined4 *)FUN_18051bfb0(uVar8,uVar9);
        *puVar3 = 0xc;
        goto LAB_180526530;
      }
      lVar4 = _malloc_base();
      if (lVar4 == 0) goto LAB_180526530;
      param_1 = uVar11 + 7 + lVar4 & ~(uVar11 - 1);
      *(longlong *)(param_1 - 8) = lVar4;
    }
LAB_180526533:
    if (param_1 == 0) {
      return 0;
    }
LAB_180526538:
    if (uVar10 < param_2) {
      FUN_180540170(param_1 + uVar10,0,param_2 - uVar10);
    }
  }
  else {
    uVar11 = param_1 & 0xfffffffffffffff8;
    lVar4 = _msize_base(*(undefined8 *)(uVar11 - 8));
    uVar9 = 8;
    if (8 < param_4) {
      uVar9 = param_4;
    }
    uVar10 = (-7 - uVar9) + lVar4;
    if (param_2 == 0) {
      thunk_FUN_1805277b0(*(undefined8 *)(uVar11 - 8));
    }
    else {
      if ((param_4 != 0) && ((param_4 & param_4 - 1) == 0)) {
        lVar4 = *(longlong *)(uVar11 - 8);
        uVar9 = 8;
        if (8 < param_4) {
          uVar9 = param_4;
        }
        lVar5 = param_1 - lVar4;
        uVar11 = uVar9 - 1;
        lVar6 = _msize_base(lVar4);
        uVar8 = lVar6 + (lVar4 - param_1);
        if (param_2 < uVar8) {
          uVar8 = param_2;
        }
        uVar12 = param_2 + 8 + uVar11;
        if (uVar12 < param_2) {
          puVar3 = (undefined4 *)FUN_18051bfb0();
          *puVar3 = 0xc;
          goto LAB_18052638f;
        }
        if (lVar4 + 8 + uVar11 < param_1) {
LAB_180526417:
          lVar7 = _malloc_base(uVar12);
          if (lVar7 == 0) goto LAB_18052638f;
          bVar2 = true;
          lVar6 = lVar4;
        }
        else {
          puVar3 = (undefined4 *)FUN_18051bfb0();
          uVar1 = *puVar3;
          lVar6 = thunk_FUN_180539db0(lVar4,uVar12);
          if (lVar6 == 0) {
            puVar3 = (undefined4 *)FUN_18051bfb0();
            *puVar3 = uVar1;
            goto LAB_180526417;
          }
          bVar2 = false;
          lVar7 = lVar6;
        }
        if ((lVar7 != lVar4) || ((param_1 & ~uVar11) != 0)) {
          param_1 = uVar9 + 7 + lVar7 & ~uVar11;
          FUN_180540530(param_1,lVar5 + lVar6,uVar8);
          if (bVar2) {
            thunk_FUN_1805277b0(lVar6);
          }
          *(longlong *)(param_1 - 8) = lVar7;
          goto LAB_180526533;
        }
        goto LAB_180526538;
      }
      puVar3 = (undefined4 *)FUN_18051bfb0();
      *puVar3 = 0x16;
      FUN_180527740();
    }
LAB_18052638f:
    param_1 = 0;
  }
  return param_1;
}



/* ===== 180526580 FUN_180526580 ===== */

undefined8 FUN_180526580(char *param_1,longlong param_2,longlong param_3)

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
      puVar2 = (undefined4 *)FUN_18051bfb0();
      *puVar2 = 0x22;
      FUN_180527740();
      return 0x22;
    }
    *param_1 = '\0';
  }
  puVar2 = (undefined4 *)FUN_18051bfb0();
  *puVar2 = 0x16;
  FUN_180527740();
  return 0x16;
}



/* ===== 180526600 FUN_180526600 ===== */

ulonglong FUN_180526600(ulonglong param_1)

{
  uint uVar1;
  
  uVar1 = (uint)(param_1 >> 0x34) & 0x7ff;
  if (uVar1 == 0x7ff) {
    return (ulonglong)(ushort)(((param_1 & 0xfffffffffffff) != 0) + 1);
  }
  if (uVar1 == 0) {
    return CONCAT62((int6)(-(param_1 & 0x7fffffffffffffff) >> 0x10),
                    -(ushort)((param_1 & 0x7fffffffffffffff) != 0)) & 0xfffffffffffffffe;
  }
  return 0xffffffff;
}



/* ===== 180526660 FUN_180526660 ===== */

uint FUN_180526660(uint *param_1,short param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = *param_1;
  uVar4 = uVar1 >> 0x17 & 0xff;
  if (uVar4 == 0xff) {
    return (uint)(ushort)(((uVar1 & 0x7fffff) != 0) + 1);
  }
  if ((((char)(uVar1 >> 0x17) == '\0') && ((uVar1 & 0x7fffffff) == 0)) ||
     (iVar2 = (0x96 - param_2) - uVar4, iVar2 < 1)) {
    return 0;
  }
  if (iVar2 < 0x18) {
    uVar3 = (1 << ((byte)iVar2 & 0x1f)) - 1;
    uVar4 = ~uVar3 & uVar1;
    *param_1 = uVar4;
    return CONCAT22((short)(uVar4 >> 0x10),-(ushort)((uVar1 & uVar3) != 0));
  }
  *param_1 = uVar1 & 0x80000000;
  return 0xffffffff;
}



/* ===== 1805266e0 FUN_1805266e0 ===== */

uint FUN_1805266e0(uint param_1)

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



/* ===== 180526720 FUN_180526720 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_180526720(ulonglong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_f8 [32];
  undefined8 *local_d8;
  undefined8 *local_d0;
  int local_c8;
  undefined8 local_b8;
  undefined8 local_b0;
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
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  uVar4 = param_5;
  local_38 = DAT_180919500 ^ (ulonglong)auStack_f8;
  local_b8 = param_4;
  local_b0 = param_3;
  iVar2 = FUN_180526b20(param_1,&local_b8,param_5);
  if (iVar2 == 0) {
    local_d0 = &local_b8;
    local_d8 = &local_b0;
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
    local_48 = 0;
    uStack_40 = 0;
    local_c8 = iVar2;
    FUN_180526ee0(&local_a8,&param_5,param_1 & 0xffffffff,param_2);
    uVar4 = param_5;
  }
  if ((param_1 & 0x20) == 0) {
    if ((param_1 & 8) == 0) {
      if ((param_1 & 4) == 0) {
        if ((param_1 & 1) == 0) {
          iVar2 = ((uint)param_1 & 2) * 2;
        }
        else {
          iVar2 = 3;
        }
      }
      else {
        iVar2 = 2;
      }
    }
    else {
      iVar2 = 1;
    }
  }
  else {
    iVar2 = 5;
  }
  cVar1 = FUN_180539d40();
  if (cVar1 == '\0') {
    if (iVar2 == 1) {
      puVar3 = (undefined4 *)FUN_18051bfb0();
      *puVar3 = 0x21;
    }
    else if ((iVar2 == 2) || (iVar2 == 3)) {
      puVar3 = (undefined4 *)FUN_18051bfb0();
      *puVar3 = 0x22;
    }
  }
  else if (iVar2 != 0) {
    local_d8 = (undefined8 *)local_b8;
    local_d0 = (undefined8 *)uVar4;
    uVar4 = FUN_180527260(iVar2,param_2,(int)param_3,0);
    return uVar4;
  }
  FUN_18052eff0(uVar4,0xffc0);
  return local_b8;
}



/* ===== 1805268a0 FUN_1805268a0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_1805268a0(ulonglong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 auStack_108 [32];
  undefined8 *local_e8;
  undefined8 *local_e0;
  int local_d8;
  undefined8 local_c8 [2];
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
  
  uVar5 = param_6;
  local_48 = DAT_180919500 ^ (ulonglong)auStack_108;
  local_c8[0] = param_3;
  iVar2 = FUN_180526b20(param_1,&param_5,param_6);
  iVar4 = 3;
  if (iVar2 == 0) {
    local_e0 = &param_5;
    local_e8 = local_c8;
    uStack_80 = 0;
    uStack_70 = 0;
    local_78 = 3;
    local_b8 = 0;
    uStack_b0 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_d8 = iVar2;
    local_88 = param_4;
    FUN_180526ee0(&local_b8,&param_6,param_1 & 0xffffffff,param_2);
    uVar5 = param_6;
  }
  if ((param_1 & 0x20) == 0) {
    if ((param_1 & 8) == 0) {
      if ((param_1 & 4) == 0) {
        if ((param_1 & 1) == 0) {
          iVar4 = ((uint)param_1 & 2) * 2;
        }
      }
      else {
        iVar4 = 2;
      }
    }
    else {
      iVar4 = 1;
    }
  }
  else {
    iVar4 = 5;
  }
  cVar1 = FUN_180539d40();
  if (cVar1 == '\0') {
    if (iVar4 == 1) {
      puVar3 = (undefined4 *)FUN_18051bfb0();
      *puVar3 = 0x21;
    }
    else if ((iVar4 == 2) || (iVar4 == 3)) {
      puVar3 = (undefined4 *)FUN_18051bfb0();
      *puVar3 = 0x22;
    }
  }
  else if (iVar4 != 0) {
    local_e8 = (undefined8 *)param_5;
    local_e0 = (undefined8 *)uVar5;
    uVar5 = FUN_180527260(iVar4,param_2,(int)param_3,(int)param_4);
    return uVar5;
  }
  FUN_18052eff0(uVar5,0xffc0);
  return param_5;
}



/* ===== 180526a50 FUN_180526a50 ===== */

void FUN_180526a50(uint param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  uint local_res8 [2];
  uint local_res10 [2];
  
  local_res10[0] = 0;
  FUN_180539f50(local_res10,0x1f);
  local_res8[0] = local_res10[0];
  uVar4 = param_1 | 0x20;
  if ((param_1 & 0x18) == 0) {
    uVar4 = param_1;
  }
  uVar3 = uVar4 >> 5 & 1;
  uVar1 = uVar3 | 2;
  if ((uVar4 & 0x10) == 0) {
    uVar1 = uVar3;
  }
  uVar3 = uVar1 | 4;
  if ((uVar4 & 8) == 0) {
    uVar3 = uVar1;
  }
  uVar1 = uVar3 | 8;
  if ((uVar4 & 4) == 0) {
    uVar1 = uVar3;
  }
  uVar3 = uVar1 | 0x10;
  if ((uVar4 & 1) == 0) {
    uVar3 = uVar1;
  }
  uVar1 = FUN_18053a110(uVar3);
  local_res8[0] = local_res8[0] | uVar1;
  FUN_180539fa0(local_res8,0x1f);
  if ((uVar4 & 1) != 0) {
    puVar2 = (undefined4 *)FUN_18051bfb0();
    *puVar2 = 0x21;
    return;
  }
  if ((uVar4 & 0x1c) != 0) {
    puVar2 = (undefined4 *)FUN_18051bfb0();
    *puVar2 = 0x22;
  }
  return;
}



/* ===== 180526b20 FUN_180526b20 ===== */

bool FUN_180526b20(uint param_1,double *param_2,ulonglong param_3)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  ulonglong uVar7;
  bool bVar8;
  double dVar9;
  int local_res8 [2];
  undefined8 local_res20;
  
  bVar2 = 0;
  uVar5 = param_1 & 0x1f;
  if (((param_1 & 8) != 0) && ((char)param_3 < '\0')) {
    bVar2 = 1;
    uVar5 = param_1 & 0x17;
    goto LAB_180526e50;
  }
  if (((param_1 & 4) != 0) && ((param_3 >> 9 & 1) != 0)) {
    bVar2 = 4;
    uVar5 = param_1 & 0x1b;
    goto LAB_180526e50;
  }
  if (((param_1 & 1) == 0) || ((param_3 >> 10 & 1) == 0)) {
    if (((param_1 & 2) == 0) || ((param_3 >> 0xb & 1) == 0)) goto LAB_180526e50;
    uVar4 = param_1 >> 4 & 1;
    if (*param_2 == 0.0) {
      uVar4 = 1;
    }
    else {
      local_res8[0] = 0;
      dVar9 = (double)FUN_180515940(0,local_res8);
      iVar3 = local_res8[0] + -0x600;
      if (iVar3 < -0x432) {
        local_res20 = dVar9 * 0.0;
        uVar4 = 1;
      }
      else {
        bVar1 = false;
        cVar6 = '\0';
        local_res20 = (double)((ulonglong)dVar9 & 0xfffffffffffff | 0x10000000000000);
        if (iVar3 < -0x3fd) {
          local_res20._0_4_ = (uint)((ulonglong)dVar9 & 0xfffffffffffff);
          uVar7 = (ulonglong)(-iVar3 - 0x3fd);
          bVar1 = false;
          do {
            if ((((uint)local_res20 & 1) != 0) && (uVar4 == 0)) {
              uVar4 = 1;
            }
            bVar8 = cVar6 != '\0';
            cVar6 = (char)((uint)local_res20 & 1);
            if (bVar8) {
              bVar1 = true;
            }
            local_res20._0_4_ = (uint)local_res20 >> 1;
            if ((local_res20._4_4_ & 1) != 0) {
              local_res20._0_4_ = (uint)local_res20 | 0x80000000;
            }
            local_res20._4_4_ = local_res20._4_4_ >> 1;
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
        }
        if (dVar9 < 0.0) {
          local_res20 = (double)CONCAT44((uint)((ulonglong)local_res20 >> 0x20) ^
                                         DAT_1808adeb0._4_4_,
                                         SUB84(local_res20,0) ^ (uint)DAT_1808adeb0);
        }
        bVar8 = dVar9 < 0.0;
        if ((cVar6 != '\0') || (bVar1)) {
          iVar3 = fegetround();
          if (iVar3 == 0) {
            if (cVar6 != '\0') {
              if (!bVar1) {
                bVar8 = ((ulonglong)local_res20 & 1) == 0;
                goto LAB_180526e13;
              }
              goto LAB_180526e15;
            }
          }
          else {
            if (iVar3 != 0x100) {
              if (iVar3 != 0x200) goto LAB_180526e2f;
              bVar8 = !bVar8;
            }
            bVar8 = !bVar8;
LAB_180526e13:
            if (!bVar8) {
LAB_180526e15:
              local_res20 = (double)((longlong)local_res20 + 1);
            }
          }
        }
      }
LAB_180526e2f:
      *param_2 = local_res20;
    }
    uVar5 = param_1 & 0x1d;
    bVar2 = -(uVar4 != 0) & 0x10;
    goto LAB_180526e50;
  }
  bVar2 = 8;
  uVar5 = (uint)param_3 & 0x6000;
  if ((param_3 & 0x6000) == 0) {
    if (0.0 < *param_2) {
      uVar5 = param_1 & 0x1e;
      *param_2 = DAT_180577a58;
      goto LAB_180526e50;
    }
LAB_180526c6b:
    dVar9 = (double)CONCAT44((uint)((ulonglong)DAT_180577a58 >> 0x20) ^ DAT_1808adeb0._4_4_,
                             SUB84(DAT_180577a58,0) ^ (uint)DAT_1808adeb0);
LAB_180526c7a:
    *param_2 = dVar9;
  }
  else {
    if (uVar5 == 0x2000) {
      if (0.0 < *param_2) {
        uVar5 = param_1 & 0x1e;
        *param_2 = DAT_180577a60;
        goto LAB_180526e50;
      }
      goto LAB_180526c6b;
    }
    uVar4 = (uint)((ulonglong)DAT_180577a60 >> 0x20);
    if (uVar5 == 0x4000) {
      if (*param_2 <= 0.0) {
        uVar5 = param_1 & 0x1e;
        *param_2 = (double)CONCAT44(uVar4 ^ DAT_1808adeb0._4_4_,
                                    SUB84(DAT_180577a60,0) ^ (uint)DAT_1808adeb0);
      }
      else {
        uVar5 = param_1 & 0x1e;
        *param_2 = DAT_180577a58;
      }
      goto LAB_180526e50;
    }
    if (uVar5 == 0x6000) {
      dVar9 = DAT_180577a60;
      if (*param_2 <= 0.0) {
        uVar5 = param_1 & 0x1e;
        *param_2 = (double)CONCAT44(uVar4 ^ DAT_1808adeb0._4_4_,
                                    SUB84(DAT_180577a60,0) ^ (uint)DAT_1808adeb0);
        goto LAB_180526e50;
      }
      goto LAB_180526c7a;
    }
  }
  uVar5 = param_1 & 0x1e;
LAB_180526e50:
  if (((param_1 & 0x10) != 0) && ((param_3 >> 0xc & 1) != 0)) {
    bVar2 = bVar2 | 0x20;
    uVar5 = uVar5 & 0xffffffef;
  }
  if (bVar2 != 0) {
    FUN_18052f090();
  }
  return uVar5 == 0;
}



/* ===== 180526ea0 FUN_180526ea0 ===== */

double FUN_180526ea0(double param_1,double param_2)

{
  return param_1 + param_2;
}



/* ===== 180526eb0 FUN_180526eb0 ===== */

void FUN_180526eb0(void)

{
  FUN_180526ee0();
  return;
}



/* ===== 180526ee0 FUN_180526ee0 ===== */

void FUN_180526ee0(uint *param_1,ulonglong *param_2,ulonglong param_3,int param_4,uint *param_5,
                  uint *param_6,int param_7)

{
  uint uVar1;
  ulonglong uVar2;
  DWORD dwExceptionCode;
  uint *local_res8;
  
  dwExceptionCode = 0xc000000d;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if ((param_3 & 0x10) != 0) {
    dwExceptionCode = 0xc000008f;
    param_1[1] = param_1[1] | 1;
  }
  if ((param_3 & 2) != 0) {
    dwExceptionCode = 0xc0000093;
    param_1[1] = param_1[1] | 2;
  }
  if ((param_3 & 1) != 0) {
    dwExceptionCode = 0xc0000091;
    param_1[1] = param_1[1] | 4;
  }
  if ((param_3 & 4) != 0) {
    dwExceptionCode = 0xc000008e;
    param_1[1] = param_1[1] | 8;
  }
  if ((param_3 & 8) != 0) {
    dwExceptionCode = 0xc0000090;
    param_1[1] = param_1[1] | 0x10;
  }
  param_1[2] = param_1[2] ^ (~((int)(*param_2 >> 7) << 4) ^ param_1[2]) & 0x10;
  param_1[2] = param_1[2] ^ (~((int)(*param_2 >> 9) << 3) ^ param_1[2]) & 8;
  param_1[2] = param_1[2] ^ (~((int)(*param_2 >> 10) << 2) ^ param_1[2]) & 4;
  param_1[2] = param_1[2] ^ (~((int)(*param_2 >> 0xb) * 2) ^ param_1[2]) & 2;
  param_1[2] = param_1[2] ^ (~((uint)*param_2 >> 0xc) ^ param_1[2]) & 1;
  local_res8 = param_1;
  uVar2 = FUN_18052f0b0();
  if ((uVar2 & 1) != 0) {
    local_res8[3] = local_res8[3] | 0x10;
  }
  if ((uVar2 & 4) != 0) {
    local_res8[3] = local_res8[3] | 8;
  }
  if ((uVar2 & 8) != 0) {
    local_res8[3] = local_res8[3] | 4;
  }
  if ((uVar2 & 0x10) != 0) {
    local_res8[3] = local_res8[3] | 2;
  }
  if ((uVar2 & 0x20) != 0) {
    local_res8[3] = local_res8[3] | 1;
  }
  uVar1 = (uint)*param_2 & 0x6000;
  if (uVar1 == 0) {
    *local_res8 = *local_res8 & 0xfffffffc;
  }
  else if (uVar1 == 0x2000) {
    *local_res8 = *local_res8 & 0xfffffffd;
    *local_res8 = *local_res8 | 1;
  }
  else if (uVar1 == 0x4000) {
    *local_res8 = *local_res8 & 0xfffffffe;
    *local_res8 = *local_res8 | 2;
  }
  else if (uVar1 == 0x6000) {
    *local_res8 = *local_res8 | 3;
  }
  *local_res8 = *local_res8 ^ (param_4 << 5 ^ *local_res8) & 0x1ffe0;
  local_res8[8] = local_res8[8] | 1;
  if (param_7 == 0) {
    local_res8[8] = local_res8[8] & 0xffffffe3 | 2;
    *(undefined8 *)(local_res8 + 4) = *(undefined8 *)param_5;
    local_res8[0x18] = local_res8[0x18] | 1;
    local_res8[0x18] = local_res8[0x18] & 0xffffffe3 | 2;
    *(undefined8 *)(local_res8 + 0x14) = *(undefined8 *)param_6;
  }
  else {
    local_res8[8] = local_res8[8] & 0xffffffe1;
    local_res8[4] = *param_5;
    local_res8[0x18] = local_res8[0x18] | 1;
    local_res8[0x18] = local_res8[0x18] & 0xffffffe1;
    local_res8[0x14] = *param_6;
  }
  FUN_18052efd0();
  RaiseException(dwExceptionCode,0,1,(ULONG_PTR *)&local_res8);
  if ((local_res8[2] & 0x10) != 0) {
    *param_2 = *param_2 & 0xffffffffffffff7f;
  }
  if ((local_res8[2] & 8) != 0) {
    *param_2 = *param_2 & 0xfffffffffffffdff;
  }
  if ((local_res8[2] & 4) != 0) {
    *param_2 = *param_2 & 0xfffffffffffffbff;
  }
  if ((local_res8[2] & 2) != 0) {
    *param_2 = *param_2 & 0xfffffffffffff7ff;
  }
  if ((local_res8[2] & 1) != 0) {
    *param_2 = *param_2 & 0xffffffffffffefff;
  }
  uVar1 = *local_res8 & 3;
  if (uVar1 == 0) {
    *param_2 = *param_2 & 0xffffffffffff9fff;
  }
  else if (uVar1 == 1) {
    *param_2 = *param_2 & 0xffffffffffffbfff;
    *param_2 = *param_2 | 0x2000;
  }
  else if (uVar1 == 2) {
    *param_2 = *param_2 & 0xffffffffffffdfff;
    *param_2 = *param_2 | 0x4000;
  }
  else if (uVar1 == 3) {
    *param_2 = *param_2 | 0x6000;
  }
  if (param_7 == 0) {
    *(undefined8 *)param_6 = *(undefined8 *)(local_res8 + 0x14);
  }
  else {
    *param_6 = local_res8[0x14];
  }
  return;
}



/* ===== 1805271f0 FUN_1805271f0 ===== */

void FUN_1805271f0(void)

{
  FUN_180526ee0();
  return;
}



/* ===== 180527220 FUN_180527220 ===== */

void FUN_180527220(int param_1)

{
  undefined4 *puVar1;
  
  if (param_1 == 1) {
    puVar1 = (undefined4 *)FUN_18051bfb0();
    *puVar1 = 0x21;
  }
  else if ((param_1 == 2) || (param_1 == 3)) {
    puVar1 = (undefined4 *)FUN_18051bfb0();
    *puVar1 = 0x22;
    return;
  }
  return;
}



/* ===== 180527260 FUN_180527260 ===== */

undefined8
FUN_180527260(uint param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  ulonglong local_38;
  undefined *local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  local_38 = 0;
  local_18 = 0;
  local_28 = 0;
  uStack_20 = 0;
  iVar3 = 0;
  piVar1 = &DAT_18057cab0;
  do {
    if (*piVar1 == param_2) {
      local_30 = (&PTR_DAT_18057cab8)[(longlong)iVar3 * 2];
      if (local_30 != (undefined *)0x0) {
        local_18 = param_5;
        local_38 = (ulonglong)param_1;
        local_28 = param_3;
        uStack_20 = param_4;
        FUN_18052eff0(param_6,0xffc0);
        iVar3 = FUN_180539d70(&local_38);
        if (iVar3 == 0) {
          if (param_1 == 1) {
            puVar2 = (undefined4 *)FUN_18051bfb0();
            *puVar2 = 0x21;
          }
          else if ((param_1 == 2) || (param_1 == 3)) {
            puVar2 = (undefined4 *)FUN_18051bfb0();
            *puVar2 = 0x22;
            return local_18;
          }
        }
        return local_18;
      }
      goto LAB_1805272b4;
    }
    iVar3 = iVar3 + 1;
    piVar1 = piVar1 + 4;
  } while ((longlong)piVar1 < 0x18057cc80);
  local_30 = (undefined *)0x0;
LAB_1805272b4:
  FUN_18052eff0(param_6,0xffc0);
  if (param_1 == 1) {
    puVar2 = (undefined4 *)FUN_18051bfb0();
    *puVar2 = 0x21;
  }
  else if ((param_1 == 2) || (param_1 == 3)) {
    puVar2 = (undefined4 *)FUN_18051bfb0();
    *puVar2 = 0x22;
    return param_5;
  }
  return param_5;
}



/* ===== 1805273bc FUN_1805273bc ===== */

longlong FUN_1805273bc(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  DWORD local_res8 [2];
  
  lVar1 = *param_1;
  lVar2 = 0;
  if (lVar1 == 0) {
    local_res8[0] = GetLastError();
    if ((char)param_1[2] == '\0') {
      param_1[1] = 0;
      *(undefined1 *)(param_1 + 2) = 1;
    }
    else {
      lVar2 = param_1[1];
    }
    lVar1 = FUN_180529950(local_res8,lVar2);
    *param_1 = lVar1;
    SetLastError(local_res8[0]);
  }
  return lVar1;
}



/* ===== 180527428 FUN_180527428 ===== */

longlong FUN_180527428(longlong param_1,longlong param_2)

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



/* ===== 180527474 FUN_180527474 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180527474(int param_1,DWORD param_2,DWORD param_3)

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
  
  local_28 = DAT_180919500 ^ (ulonglong)auStackY_608;
  if (param_1 != -1) {
    FUN_1804edbc0();
  }
  FUN_180540170(&local_598,0,0x98);
  FUN_180540170(&local_4f8,0,0x4d0);
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
    FUN_1804edbc0(param_1);
  }
  return;
}



/* ===== 1805275e4 FUN_1805275e4 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1805275e4(undefined8 param_1)

{
  _DAT_180c9f948 = param_1;
  return;
}



/* ===== 1805275ec FUN_1805275ec ===== */

void FUN_1805275ec(void)

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
  FUN_180527688();
  if (local_20 == '\x02') {
    *(uint *)(local_48[0] + 0x3a8) = *(uint *)(local_48[0] + 0x3a8) & 0xfffffffd;
  }
  if (local_18 != '\0') {
    lVar1 = FUN_1804f84e0(local_48);
    *(undefined4 *)(lVar1 + 0x20) = local_1c;
  }
  if (local_10 != '\0') {
    lVar1 = FUN_1804f84e0(local_48);
    *(undefined4 *)(lVar1 + 0x24) = local_14;
  }
  return;
}



/* ===== 180527688 FUN_180527688 ===== */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_180527688(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,uint param_4,uintptr_t param_5
                  ,undefined8 param_6)

{
  longlong lVar1;
  ulonglong *puVar2;
  byte bVar3;
  code *pcVar4;
  
  lVar1 = FUN_1805273bc(param_6);
  if ((lVar1 == 0) || (pcVar4 = *(code **)(lVar1 + 0x3b8), pcVar4 == (code *)0x0)) {
    puVar2 = (ulonglong *)FUN_180527428(&DAT_180c9f948,param_6);
    bVar3 = (byte)DAT_180919500 & 0x3f;
    pcVar4 = (code *)((*puVar2 ^ DAT_180919500) >> bVar3 | (*puVar2 ^ DAT_180919500) << 0x40 - bVar3
                     );
    if (pcVar4 == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson(param_1,param_2,param_3,param_4,param_5);
    }
  }
  (*pcVar4)(param_1,param_2,param_3,param_4,param_5);
  return;
}



/* ===== 180527740 FUN_180527740 ===== */

void FUN_180527740(void)

{
  FUN_1805275ec(0,0,0,0,0);
  return;
}



/* ===== 180527760 _invoke_watson ===== */

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
  *(undefined8 *)(puVar3 + -8) = 0x18052778e;
  FUN_180527474(2,0xc0000417);
  *(undefined8 *)(puVar3 + -8) = 0x180527794;
  hProcess = GetCurrentProcess();
                    /* WARNING: Could not recover jumptable at 0x0001805277a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  TerminateProcess(hProcess,0xc0000417);
  return;
}



/* ===== 1805277b0 FUN_1805277b0 ===== */

void FUN_1805277b0(LPVOID param_1)

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



/* ===== 180527810 _malloc_base ===== */

/* Library Function - Single Match
    _malloc_base
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

LPVOID _malloc_base(ulonglong param_1)

{
  int iVar1;
  LPVOID pvVar2;
  undefined4 *puVar3;
  
  if (param_1 < 0xffffffffffffffe1) {
    if (param_1 == 0) {
      param_1 = 1;
    }
    do {
      pvVar2 = HeapAlloc(DAT_180c9ffc8,0,param_1);
      if (pvVar2 != (LPVOID)0x0) {
        return pvVar2;
      }
      iVar1 = FUN_18053a330();
    } while ((iVar1 != 0) && (iVar1 = FUN_180523cb0(param_1), iVar1 != 0));
  }
  puVar3 = (undefined4 *)FUN_18051bfb0();
  *puVar3 = 0xc;
  return (LPVOID)0x0;
}



/* ===== 180527870 __acrt_update_locale_info ===== */

/* Library Function - Single Match
    __acrt_update_locale_info
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_update_locale_info(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  if ((*param_2 != DAT_180c9f988) && ((DAT_18091a130 & *(uint *)(param_1 + 0x3a8)) == 0)) {
    lVar1 = __acrt_update_thread_locale_data();
    *param_2 = lVar1;
  }
  return;
}



/* ===== 1805278a4 FUN_1805278a4 ===== */

void FUN_1805278a4(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  
  if ((*param_2 != (&DAT_180c9f988)[param_3]) && ((DAT_18091a130 & *(uint *)(param_1 + 0x3a8)) == 0)
     ) {
    lVar1 = __acrt_update_thread_locale_data();
    *param_2 = lVar1;
  }
  return;
}



