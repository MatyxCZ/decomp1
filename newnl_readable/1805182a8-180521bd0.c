/* ===== 1805182a8 FUN_1805182a8 ===== */

ushort FUN_1805182a8(ushort param_1,__crt_locale_pointers *param_2)

{
  int iVar1;
  byte bVar2;
  ushort local_res8 [4];
  ushort local_res18 [8];
  longlong local_28;
  longlong local_20;
  char local_10;
  
  if (param_1 == 0xffff) {
    return 0xffff;
  }
  local_res8[0] = param_1;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_28,param_2);
  bVar2 = (byte)local_res8[0];
  if (*(int *)(local_20 + 0xc) == 0xfde9) {
    if (0x7f < local_res8[0]) {
LAB_18051834a:
      local_res18[0] = 0;
      iVar1 = __acrt_LCMapStringW(*(undefined8 *)(local_20 + 0x138),0x100,local_res8,1,local_res18,1
                                 );
      if (iVar1 != 0) {
        local_res8[0] = local_res18[0];
      }
      goto LAB_180518384;
    }
    if (((&DAT_18057c642)[(ulonglong)bVar2 * 2] & 1) == 0) {
      local_res8[0] = local_res8[0] & 0xff;
      goto LAB_180518384;
    }
  }
  else {
    if (0xff < local_res8[0]) {
      if (*(longlong *)(local_20 + 0x138) == 0) goto LAB_180518384;
      goto LAB_18051834a;
    }
    if (((&DAT_18057c642)[(ulonglong)bVar2 * 2] & 1) == 0) {
      local_res8[0] = local_res8[0] & 0xff;
      goto LAB_180518384;
    }
  }
  local_res8[0] = (ushort)*(byte *)(*(longlong *)(local_20 + 0x110) + (ulonglong)bVar2);
LAB_180518384:
  if (local_10 != '\0') {
    *(uint *)(local_28 + 0x3a8) = *(uint *)(local_28 + 0x3a8) & 0xfffffffd;
  }
  return local_res8[0];
}



/* ===== 1805183a4 FUN_1805183a4 ===== */

void FUN_1805183a4(undefined8 param_1)

{
  FUN_1805182a8(param_1,0);
  return;
}



/* ===== 1805183ac common_strtod_l<> ===== */

/* Library Function - Multiple Matches With Same Base Name
    double __cdecl common_strtod_l<double,char>(char const * __ptr64 const,char * __ptr64 * __ptr64
   const,struct __crt_locale_pointers * __ptr64 const)
    double __cdecl common_strtod_l<double,wchar_t>(wchar_t const * __ptr64 const,wchar_t * __ptr64 *
   __ptr64 const,struct __crt_locale_pointers * __ptr64 const)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined8 common_strtod_l<>(longlong param_1,longlong *param_2,__crt_locale_pointers *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined8 local_res8;
  longlong local_38;
  longlong *local_30;
  longlong local_28;
  undefined1 local_20 [16];
  char local_10;
  
  if (param_2 != (longlong *)0x0) {
    *param_2 = param_1;
  }
  if (param_1 == 0) {
    puVar2 = (undefined4 *)FUN_18051bfb0();
    *puVar2 = 0x16;
    FUN_180527740();
    local_res8 = 0;
  }
  else {
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_28,param_3);
    local_res8 = 0;
    if (param_2 != (longlong *)0x0) {
      *param_2 = param_1;
    }
    local_38 = param_1;
    local_30 = param_2;
    iVar1 = parse_floating_point<>(local_20,&local_38,&local_res8);
    if (iVar1 - 2U < 2) {
      puVar2 = (undefined4 *)FUN_18051bfb0();
      *puVar2 = 0x22;
    }
    if (local_10 != '\0') {
      *(uint *)(local_28 + 0x3a8) = *(uint *)(local_28 + 0x3a8) & 0xfffffffd;
    }
  }
  return local_res8;
}



/* ===== 180518454 FUN_180518454 ===== */

void FUN_180518454(undefined8 param_1,undefined8 param_2)

{
  common_strtod_l<>(param_1,param_2,0);
  return;
}



/* ===== 180518460 FUN_180518460 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_180518460(float param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  float fVar5;
  float local_res8 [2];
  ushort local_res10 [4];
  float local_res18 [4];
  
  iVar3 = 0;
  local_res10[0] = 0;
  local_res8[0] = param_1;
  sVar2 = FUN_1805312b0(local_res10,local_res8);
  if (((sVar2 == 0) || (sVar2 == 1)) || (sVar2 == 2)) {
    return local_res8[0];
  }
  uVar4 = (uint)(short)local_res10[0];
  if (((int)uVar4 / 3) * 3 != uVar4) {
    do {
      local_res10[0] = (short)uVar4 + 1;
      uVar4 = (uint)local_res10[0];
      iVar3 = iVar3 + -1;
    } while (((int)(short)local_res10[0] / 3) * 3 != (int)(short)local_res10[0]);
    if (iVar3 < 0) {
      FUN_180531160(local_res8,iVar3);
    }
  }
  fVar1 = local_res8[0];
  if ((int)local_res8[0] < 0) {
    local_res8[0] = (float)((uint)local_res8[0] ^ DAT_1808adec0);
  }
  fVar5 = ((local_res8[0] * _DAT_1805784fc + _DAT_180578504) * local_res8[0] + _DAT_1805784f8) /
          (local_res8[0] + _DAT_180578500);
  local_res18[0] =
       ((local_res8[0] * DAT_1808ac428) / ((local_res8[0] * DAT_1808ac1f4) / fVar5 + fVar5 * fVar5)
       + fVar5) * DAT_1808ac1f4;
  if ((int)fVar1 < 0) {
    local_res18[0] = (float)((uint)local_res18[0] ^ DAT_1808adec0);
  }
  FUN_180531160(local_res18,(int)(short)local_res10[0] / 3);
  return local_res18[0];
}



/* ===== 1805185c8 FUN_1805185c8 ===== */

uint FUN_1805185c8(void)

{
  longlong lVar1;
  uint uVar2;
  
  lVar1 = FUN_180529860();
  uVar2 = *(int *)(lVar1 + 0x28) * 0x343fd + 0x269ec3;
  *(uint *)(lVar1 + 0x28) = uVar2;
  return uVar2 >> 0x10 & 0x7fff;
}



/* ===== 180518600 FUN_180518600 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_180518600(float param_1)

{
  short sVar1;
  uint uVar2;
  longlong lVar3;
  float *pfVar4;
  int iVar5;
  ulonglong uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_res10 [6];
  
  sVar1 = FUN_1805266e0();
  if (sVar1 == 0) {
    return DAT_1808ac34c;
  }
  if (sVar1 == 1) {
    if ((int)param_1 < 0) {
      return DAT_1808ac540;
    }
  }
  else {
    if (sVar1 == 2) {
      return param_1;
    }
    if (param_1 < DAT_1805787dc) {
      fVar7 = (float)FUN_180531890(param_1);
      return DAT_1808ac34c - fVar7;
    }
    if (param_1 < DAT_1805787f8) {
      if (param_1 < DAT_1808ac34c) {
        param_1 = param_1 - DAT_1808ac27c;
        return ((((param_1 * DAT_1805787a4 - _DAT_1805787bc) * param_1 + DAT_1805787d4) * param_1 -
                _DAT_1805787e4) * param_1 + DAT_1805787d0) /
               ((((param_1 * DAT_1805787ac + DAT_1805787b0) * param_1 + DAT_1805787d8) * param_1 +
                DAT_1805787cc) * param_1 + DAT_1805787ec);
      }
      param_1 = param_1 - DAT_1805787f4;
      return ((((param_1 * DAT_1805787a0 - _DAT_1805787b8) * param_1 + DAT_1805787c8) * param_1 -
              _DAT_1805787c4) * param_1 + DAT_1805787b4) /
             ((((param_1 * DAT_1805787a8 + DAT_1805787c0) * param_1 + DAT_1805787e0) * param_1 +
              DAT_1805787e8) * param_1 + DAT_1805787f0);
    }
    uVar2 = 0;
    pfVar4 = (float *)&DAT_180578660;
    do {
      if (param_1 < *pfVar4) {
        lVar3 = (longlong)(int)uVar2;
        uVar2 = *(uint *)(&DAT_180578670 + lVar3 * 0x28);
        pfVar4 = (float *)(&PTR_DAT_180578668)[lVar3 * 5];
        iVar5 = uVar2 - 1;
        fVar8 = DAT_1808ac34c / param_1 - *(float *)(&DAT_180578664 + lVar3 * 0x28);
        fVar7 = *pfVar4;
        if (-1 < iVar5) {
          if (3 < (int)uVar2) {
            uVar6 = (ulonglong)(uVar2 >> 2);
            iVar5 = iVar5 + (uVar2 >> 2) * -4;
            do {
              fVar7 = (((fVar7 * fVar8 + pfVar4[1]) * fVar8 + pfVar4[2]) * fVar8 + pfVar4[3]) *
                      fVar8 + pfVar4[4];
              pfVar4 = pfVar4 + 4;
              uVar6 = uVar6 - 1;
            } while (uVar6 != 0);
          }
          for (; -1 < iVar5; iVar5 = iVar5 + -1) {
            pfVar4 = pfVar4 + 1;
            fVar7 = fVar7 * fVar8 + *pfVar4;
          }
        }
        uVar2 = *(uint *)(&DAT_180578680 + lVar3 * 0x28);
        pfVar4 = (float *)(&PTR_DAT_180578678)[lVar3 * 5];
        iVar5 = uVar2 - 1;
        fVar10 = *pfVar4;
        if (-1 < iVar5) {
          if (3 < (int)uVar2) {
            uVar6 = (ulonglong)(uVar2 >> 2);
            iVar5 = iVar5 + (uVar2 >> 2) * -4;
            do {
              fVar10 = (((fVar10 * fVar8 + pfVar4[1]) * fVar8 + pfVar4[2]) * fVar8 + pfVar4[3]) *
                       fVar8 + pfVar4[4];
              pfVar4 = pfVar4 + 4;
              uVar6 = uVar6 - 1;
            } while (uVar6 != 0);
          }
          for (; -1 < iVar5; iVar5 = iVar5 + -1) {
            pfVar4 = pfVar4 + 1;
            fVar10 = fVar10 * fVar8 + *pfVar4;
          }
        }
        local_res10[0] = param_1;
        FUN_180526660(local_res10,8);
        fVar8 = local_res10[0];
        fVar9 = (float)FUN_18051ab90((local_res10[0] - param_1) * (local_res10[0] + param_1));
        fVar8 = (float)FUN_18051ab90((float)((uint)fVar8 ^ DAT_1808adec0) * fVar8);
        return fVar9 * (fVar7 / fVar10) * fVar8;
      }
      uVar2 = uVar2 + 1;
      pfVar4 = pfVar4 + 10;
    } while (uVar2 < 8);
    FUN_180526a50(0x10);
  }
  return 0.0;
}



/* ===== 1805189a0 FUN_1805189a0 ===== */

ulonglong FUN_1805189a0(ulonglong param_1)

{
  short sVar1;
  float *pfVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  ulonglong uVar9;
  undefined1 auVar10 [16];
  float fVar11;
  undefined1 auVar12 [64];
  
  if (((byte)DAT_180c9fd94 & 3) != 3) {
    uVar9 = FUN_180518600();
    return uVar9;
  }
  sVar1 = FUN_1805266e0();
  if (sVar1 == 0) {
    return (ulonglong)(uint)DAT_1808ac34c;
  }
  fVar6 = (float)param_1;
  if (sVar1 == 1) {
    auVar10 = vpcmpeqd_avx(ZEXT416((uint)fVar6 & 0x80000000),SUB6416(ZEXT464(0),0));
    auVar10 = vblendvps_avx(ZEXT416(DAT_1808ac540),ZEXT816(0),auVar10);
    return auVar10._0_8_;
  }
  if (sVar1 == 2) {
    return param_1;
  }
  if (fVar6 < DAT_1805787dc) {
    fVar6 = (float)FUN_180531890(param_1);
    return (ulonglong)(uint)(DAT_1808ac34c - fVar6);
  }
  if (fVar6 < DAT_1805787f8) {
    if (fVar6 < DAT_1808ac34c) {
      fVar6 = fVar6 - DAT_1808ac27c;
      return (ulonglong)
             (uint)((fVar6 * (fVar6 * (fVar6 * (fVar6 * DAT_1805787a4 + DAT_18057e94c) +
                                      DAT_1805787d4) + DAT_18057e954) + DAT_1805787d0) /
                   (fVar6 * (fVar6 * (fVar6 * (fVar6 * DAT_1805787ac + DAT_1805787b0) +
                                     DAT_1805787d8) + DAT_1805787cc) + DAT_1805787ec));
    }
    fVar6 = fVar6 - DAT_1805787f4;
    return (ulonglong)
           (uint)((fVar6 * (fVar6 * (fVar6 * (fVar6 * DAT_1805787a0 + DAT_18057e948) + DAT_1805787c8
                                    ) + DAT_18057e950) + DAT_1805787b4) /
                 (fVar6 * (fVar6 * (fVar6 * (fVar6 * DAT_1805787a8 + DAT_1805787c0) + DAT_1805787e0)
                          + DAT_1805787e8) + DAT_1805787f0));
  }
  uVar4 = 0;
  pfVar2 = (float *)&DAT_180578660;
  do {
    if (fVar6 < *pfVar2) {
      lVar3 = (longlong)(int)uVar4;
      uVar4 = *(uint *)(&DAT_180578670 + lVar3 * 0x28);
      pfVar2 = (float *)(&PTR_DAT_180578668)[lVar3 * 5];
      fVar8 = DAT_1808ac34c / fVar6 - *(float *)(&DAT_180578664 + lVar3 * 0x28);
      iVar5 = uVar4 - 1;
      auVar12 = ZEXT464((uint)*pfVar2);
      fVar7 = DAT_1808ac34c;
      if (-1 < iVar5) {
        if (3 < (int)uVar4) {
          uVar9 = (ulonglong)(uVar4 >> 2);
          iVar5 = iVar5 + (uVar4 >> 2) * -4;
          do {
            fVar7 = fVar8 * (fVar8 * (auVar12._0_4_ * fVar8 + pfVar2[1]) + pfVar2[2]) + pfVar2[3];
            auVar12 = ZEXT464((uint)(fVar8 * fVar7 + pfVar2[4]));
            pfVar2 = pfVar2 + 4;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
        for (; -1 < iVar5; iVar5 = iVar5 + -1) {
          pfVar2 = pfVar2 + 1;
          auVar12._0_4_ = fVar8 * auVar12._0_4_ + *pfVar2;
          auVar12 = ZEXT1664(auVar12._0_16_);
        }
      }
      uVar4 = *(uint *)(&DAT_180578680 + lVar3 * 0x28);
      pfVar2 = (float *)(&PTR_DAT_180578678)[lVar3 * 5];
      iVar5 = uVar4 - 1;
      fVar11 = *pfVar2;
      if (-1 < iVar5) {
        if (3 < (int)uVar4) {
          uVar9 = (ulonglong)(uVar4 >> 2);
          iVar5 = iVar5 + (uVar4 >> 2) * -4;
          do {
            fVar7 = fVar8 * (fVar8 * (fVar11 * fVar8 + pfVar2[1]) + pfVar2[2]) + pfVar2[3];
            fVar11 = fVar8 * fVar7 + pfVar2[4];
            pfVar2 = pfVar2 + 4;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
        for (; -1 < iVar5; iVar5 = iVar5 + -1) {
          pfVar2 = pfVar2 + 1;
          fVar11 = fVar8 * fVar11 + *pfVar2;
        }
      }
      FUN_180526660(fVar7,8);
      fVar8 = (float)FUN_18051ab90((fVar6 - (float)param_1) * (fVar6 + (float)param_1));
      auVar10._0_4_ = auVar12._0_4_ / fVar11;
      auVar10._4_12_ = auVar12._4_12_;
      fVar8 = fVar8 * auVar10._0_4_;
      fVar6 = (float)FUN_18051ab90((float)((uint)fVar6 ^ DAT_1808adec0) * fVar6,auVar10._0_8_);
      return (ulonglong)(uint)(fVar8 * fVar6);
    }
    uVar4 = uVar4 + 1;
    pfVar2 = pfVar2 + 10;
  } while (uVar4 < 8);
  FUN_180526a50(0x10);
  return 0;
}



/* ===== 1805189b8 FUN_1805189b8 ===== */

ulonglong FUN_1805189b8(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  
  if (param_1 == 0) {
    *(undefined1 *)(param_2 + 0x30) = 1;
    *(undefined4 *)(param_2 + 0x2c) = 0x16;
    FUN_180527688(0,0,0,0,0,param_2);
    uVar1 = 0xffffffff;
  }
  else {
    FUN_1805110a4();
    uVar1 = FUN_180518ab4(param_1,param_2);
    if (0x7fffffff < (longlong)uVar1) {
      *(undefined1 *)(param_2 + 0x30) = 1;
      *(undefined4 *)(param_2 + 0x2c) = 0x16;
      uVar1 = 0xffffffff;
    }
    FUN_1805110b0(param_1);
    uVar1 = uVar1 & 0xffffffff;
  }
  return uVar1;
}



/* ===== 180518a48 FUN_180518a48 ===== */

undefined8 FUN_180518a48(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    *(undefined1 *)(param_2 + 0x30) = 1;
    *(undefined4 *)(param_2 + 0x2c) = 0x16;
    FUN_180527688(0,0,0,0,0,param_2);
    uVar1 = 0xffffffffffffffff;
  }
  else {
    FUN_1805110a4();
    uVar1 = FUN_180518ab4(param_1,param_2);
    FUN_1805110b0(param_1);
  }
  return uVar1;
}



/* ===== 180518ab4 FUN_180518ab4 ===== */

ulonglong FUN_180518ab4(FILE *param_1,longlong param_2)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  if (param_1 == (FILE *)0x0) {
    *(undefined1 *)(param_2 + 0x30) = 1;
    *(undefined4 *)(param_2 + 0x2c) = 0x16;
    FUN_180527688(0,0,0,0,0,param_2);
  }
  else {
    uVar2 = _fileno(param_1);
    if (*(int *)&param_1->_base < 0) {
      *(undefined4 *)&param_1->_base = 0;
    }
    lVar3 = thunk_FUN_18052dbc4(uVar2,0,1,param_2);
    if (-1 < lVar3) {
      if (((ulonglong)param_1->_base & 0xc000000000) == 0) {
        return lVar3 - *(int *)&param_1->_base;
      }
      uVar6 = (longlong)param_1->_ptr - *(longlong *)&param_1->_cnt;
      uVar4 = (ulonglong)(uVar2 & 0x3f);
      lVar5 = (longlong)(int)uVar2 >> 6;
      cVar1 = *(char *)((&DAT_180c9f990)[lVar5] + 0x39 + uVar4 * 0x48);
      if (((ulonglong)param_1->_base & 0x300000000) == 0) {
        if ((*(uint *)((longlong)&param_1->_base + 4) >> 2 & 1) == 0) {
          *(undefined1 *)(param_2 + 0x30) = 1;
          *(undefined4 *)(param_2 + 0x2c) = 0x16;
          return 0xffffffffffffffff;
        }
      }
      else {
        if ((cVar1 == '\x01') &&
           ((*(byte *)((&DAT_180c9f990)[lVar5] + 0x3d + uVar4 * 0x48) & 2) != 0)) {
          uVar4 = FUN_180518d60(param_1,lVar3,param_2);
          return uVar4;
        }
        if (*(char *)((&DAT_180c9f990)[lVar5] + 0x38 + uVar4 * 0x48) < '\0') {
          lVar5 = FUN_180518ee8(*(undefined8 *)&param_1->_cnt,param_1->_ptr,
                                CONCAT71(0x180c9f9,cVar1));
          uVar6 = uVar6 + lVar5;
        }
      }
      if (lVar3 == 0) {
        return uVar6;
      }
      if (((ulonglong)param_1->_base & 0x100000000) != 0) {
        uVar4 = FUN_180518c04(param_1,lVar3,uVar6,param_2);
        return uVar4;
      }
      if (cVar1 == '\x01') {
        uVar6 = uVar6 >> 1;
      }
      return uVar6 + lVar3;
    }
  }
  return 0xffffffffffffffff;
}



/* ===== 180518c04 FUN_180518c04 ===== */

longlong FUN_180518c04(FILE *param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  char *pcVar5;
  char *pcVar6;
  longlong lVar7;
  bool bVar8;
  
  uVar2 = _fileno(param_1);
  uVar4 = (ulonglong)(uVar2 & 0x3f);
  cVar1 = *(char *)((&DAT_180c9f990)[(longlong)(int)uVar2 >> 6] + 0x39 + uVar4 * 0x48);
  lVar7 = (ulonglong)(cVar1 == '\x01') + 1;
  if (*(int *)&param_1->_base != 0) {
    pcVar6 = param_1->_ptr + ((longlong)*(int *)&param_1->_base - *(longlong *)&param_1->_cnt);
    if (*(char *)((&DAT_180c9f990)[(longlong)(int)uVar2 >> 6] + 0x38 + uVar4 * 0x48) < '\0') {
      lVar3 = thunk_FUN_18052dbc4(uVar2,0,2,param_4);
      if (lVar3 == param_2) {
        lVar3 = FUN_180518ee8(*(longlong *)&param_1->_cnt,pcVar6 + *(longlong *)&param_1->_cnt,cVar1
                             );
        pcVar5 = pcVar6 + lVar3;
        bVar8 = (*(uint *)((longlong)&param_1->_base + 4) >> 5 & 1) == 0;
      }
      else {
        lVar3 = thunk_FUN_18052dbc4(uVar2,param_2,0,param_4);
        if (lVar3 == -1) {
          return -1;
        }
        pcVar5 = (char *)0x200;
        if (((0x200 < (longlong)pcVar6) ||
            ((*(uint *)((longlong)&param_1->_base + 4) >> 6 & 1) == 0)) ||
           ((*(uint *)((longlong)&param_1->_base + 4) >> 8 & 1) != 0)) {
          pcVar5 = (char *)(longlong)param_1->_charbuf;
        }
        bVar8 = (*(byte *)((&DAT_180c9f990)[(longlong)(int)uVar2 >> 6] + 0x38 + uVar4 * 0x48) & 4)
                == 0;
      }
      pcVar6 = pcVar5;
      if (!bVar8) {
        pcVar6 = pcVar5 + (ulonglong)((byte)(cVar1 - 1U) < 2) + 1;
      }
    }
    param_2 = (param_3 / lVar7 - (longlong)pcVar6 / lVar7) + param_2;
  }
  return param_2;
}



/* ===== 180518d60 FUN_180518d60 ===== */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

byte * FUN_180518d60(FILE *param_1,byte *param_2,undefined8 param_3)

{
  uint uVar1;
  BOOL BVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  byte *pbVar7;
  longlong lVar8;
  undefined1 auStackY_1088 [32];
  DWORD local_1058 [3];
  byte abStack_1049 [4097];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x180518d7a;
  local_48 = DAT_180919500 ^ (ulonglong)auStackY_1088;
  uVar1 = _fileno(param_1);
  lVar8 = 0;
  if (*(int *)&param_1->_base != 0) {
    uVar6 = (ulonglong)(uVar1 & 0x3f);
    lVar3 = ((longlong)param_1->_ptr - *(longlong *)&param_1->_cnt) / 2;
    lVar4 = thunk_FUN_18052dbc4(uVar1,*(undefined8 *)
                                       ((&DAT_180c9f990)[(longlong)(int)uVar1 >> 6] + 0x30 +
                                       uVar6 * 0x48),0,param_3);
    if (lVar4 == *(longlong *)((&DAT_180c9f990)[(longlong)(int)uVar1 >> 6] + 0x30 + uVar6 * 0x48)) {
      local_1058[0] = 0;
      BVar2 = ReadFile(*(HANDLE *)
                        ((&DAT_180c9f990)[(longlong)(int)uVar1 >> 6] + 0x28 + uVar6 * 0x48),
                       abStack_1049 + 1,0x1000,local_1058,(LPOVERLAPPED)0x0);
      if (((BVar2 != 0) && (lVar5 = thunk_FUN_18052dbc4(uVar1,param_2,0,param_3), -1 < lVar5)) &&
         (uVar6 = (ulonglong)local_1058[0], lVar3 <= (longlong)uVar6)) {
        pbVar7 = abStack_1049 + 1;
        if (lVar3 != 0) {
          do {
            if (abStack_1049 + uVar6 + 1 <= pbVar7) break;
            if (*pbVar7 == 0xd) {
              if ((pbVar7 < abStack_1049 + uVar6) && (pbVar7[1] == 10)) {
                pbVar7 = pbVar7 + 1;
              }
            }
            else {
              pbVar7 = pbVar7 + (char)(&DAT_180919920)[*pbVar7];
            }
            lVar8 = lVar8 + 1;
            pbVar7 = pbVar7 + 1;
          } while (lVar8 != lVar3);
        }
        return pbVar7 + (lVar4 - (longlong)(abStack_1049 + 1));
      }
    }
    param_2 = (byte *)0xffffffffffffffff;
  }
  return param_2;
}



/* ===== 180518ee8 FUN_180518ee8 ===== */

longlong FUN_180518ee8(short *param_1,short *param_2,char param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((byte)(param_3 - 1U) < 2) {
    lVar2 = 0;
    for (; param_1 != param_2; param_1 = param_1 + 1) {
      lVar1 = lVar2 + 1;
      if (*param_1 != 10) {
        lVar1 = lVar2;
      }
      lVar2 = lVar1;
    }
    return lVar2 * 2;
  }
  lVar2 = 0;
  for (; param_1 != param_2; param_1 = (short *)((longlong)param_1 + 1)) {
    lVar1 = lVar2 + 1;
    if ((char)*param_1 != '\n') {
      lVar1 = lVar2;
    }
    lVar2 = lVar1;
  }
  return lVar2;
}



/* ===== 180518f40 FUN_180518f40 ===== */

undefined8 FUN_180518f40(undefined4 param_1)

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
    param_1 = PTR_PTR_1809198b8._0_4_;
  }
  uVar1 = FUN_180518a48(param_1,local_48);
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



/* ===== 180518fdc thunk_FUN_180518ab4 ===== */

ulonglong thunk_FUN_180518ab4(FILE *param_1,longlong param_2)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  if (param_1 == (FILE *)0x0) {
    *(undefined1 *)(param_2 + 0x30) = 1;
    *(undefined4 *)(param_2 + 0x2c) = 0x16;
    FUN_180527688(0,0,0,0,0,param_2);
  }
  else {
    uVar2 = _fileno(param_1);
    if (*(int *)&param_1->_base < 0) {
      *(undefined4 *)&param_1->_base = 0;
    }
    lVar3 = thunk_FUN_18052dbc4(uVar2,0,1,param_2);
    if (-1 < lVar3) {
      if (((ulonglong)param_1->_base & 0xc000000000) == 0) {
        return lVar3 - *(int *)&param_1->_base;
      }
      uVar6 = (longlong)param_1->_ptr - *(longlong *)&param_1->_cnt;
      uVar4 = (ulonglong)(uVar2 & 0x3f);
      lVar5 = (longlong)(int)uVar2 >> 6;
      cVar1 = *(char *)((&DAT_180c9f990)[lVar5] + 0x39 + uVar4 * 0x48);
      if (((ulonglong)param_1->_base & 0x300000000) == 0) {
        if ((*(uint *)((longlong)&param_1->_base + 4) >> 2 & 1) == 0) {
          *(undefined1 *)(param_2 + 0x30) = 1;
          *(undefined4 *)(param_2 + 0x2c) = 0x16;
          return 0xffffffffffffffff;
        }
      }
      else {
        if ((cVar1 == '\x01') &&
           ((*(byte *)((&DAT_180c9f990)[lVar5] + 0x3d + uVar4 * 0x48) & 2) != 0)) {
          uVar4 = FUN_180518d60(param_1,lVar3,param_2);
          return uVar4;
        }
        if (*(char *)((&DAT_180c9f990)[lVar5] + 0x38 + uVar4 * 0x48) < '\0') {
          lVar5 = FUN_180518ee8(*(undefined8 *)&param_1->_cnt,param_1->_ptr,
                                CONCAT71(0x180c9f9,cVar1));
          uVar6 = uVar6 + lVar5;
        }
      }
      if (lVar3 == 0) {
        return uVar6;
      }
      if (((ulonglong)param_1->_base & 0x100000000) != 0) {
        uVar4 = FUN_180518c04(param_1,lVar3,uVar6,param_2);
        return uVar4;
      }
      if (cVar1 == '\x01') {
        uVar6 = uVar6 >> 1;
      }
      return uVar6 + lVar3;
    }
  }
  return 0xffffffffffffffff;
}



/* ===== 180518fe4 FUN_180518fe4 ===== */

undefined4 FUN_180518fe4(undefined4 param_1)

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
  uVar1 = FUN_1805189b8(param_1,local_48);
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



/* ===== 180519080 FUN_180519080 ===== */

uint FUN_180519080(uint param_1)

{
  bool bVar1;
  byte bVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  
  uVar3 = param_1 & 0x7fffffff;
  if (uVar3 < 0x4b000000) {
    if (uVar3 < 0x3f800000) {
      param_1 = param_1 & 0x80000000;
      if (0x3effffff < uVar3) {
        param_1 = param_1 | 0x3f800000;
      }
    }
    else {
      uVar5 = 0x96 - (uVar3 >> 0x17);
      bVar4 = (byte)uVar5;
      bVar2 = bVar4 & 0x1f;
      bVar1 = (uVar5 & 0x1f) == 0;
      param_1 = (param_1 >> bVar2) +
                (uint)(byte)(bVar1 * (0x96 < uVar3 >> 0x17) |
                            !bVar1 * ((param_1 >> bVar2 - 1 & 1) != 0)) << (bVar4 & 0x1f);
    }
  }
  return param_1;
}



/* ===== 1805190d0 FUN_1805190d0 ===== */

ulonglong FUN_1805190d0(ulonglong param_1)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  ulonglong uVar4;
  
  uVar4 = param_1 >> 0x34 & 0x7ff;
  if (uVar4 < 0x433) {
    if (uVar4 < 0x3ff) {
      param_1 = param_1 & 0x8000000000000000;
      if (uVar4 == 0x3fe) {
        param_1 = param_1 | 0x3ff0000000000000;
      }
    }
    else {
      bVar3 = (byte)(0x433 - uVar4);
      bVar2 = bVar3 & 0x3f;
      bVar1 = (0x433 - uVar4 & 0x3f) == 0;
      param_1 = (param_1 >> bVar2) +
                (ulonglong)
                (byte)(bVar1 * (0x433 < uVar4) | !bVar1 * ((param_1 >> bVar2 - 1 & 1) != 0)) <<
                (bVar3 & 0x3f);
    }
  }
  return param_1;
}



/* ===== 180519140 _realloc_base ===== */

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



/* ===== 180519150 FUN_180519150 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180519150(undefined1 *param_1,ulonglong param_2,ulonglong param_3,code *param_4)

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
  
  local_58 = DAT_180919500 ^ (ulonglong)auStack_468;
  if ((((param_1 == (undefined1 *)0x0) && (param_2 != 0)) || (param_3 == 0)) ||
     (param_4 == (code *)0x0)) {
    puVar3 = (undefined4 *)FUN_18051bfb0();
    *puVar3 = 0x16;
    FUN_180527740();
  }
  else {
    FUN_18053192c(param_4);
    FUN_180540170(local_438,0,0x1f0);
    FUN_180540170(local_248,0,0x1f0);
    if (1 < param_2) {
      local_448 = 0;
      puVar10 = param_1 + (param_2 - 1) * param_3;
LAB_180519210:
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
              if (puVar4 <= puVar6) goto LAB_1805193a0;
              iVar2 = (*param_4)(puVar6);
            } while (iVar2 < 1);
          }
          else {
LAB_1805193a0:
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
          if (puVar8 < puVar6) goto LAB_18051940a;
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
      goto LAB_180519293;
    }
  }
  return;
LAB_18051940a:
  if (puVar4 < puVar7) {
    do {
      puVar7 = puVar7 + -param_3;
      if (puVar7 <= puVar4) goto LAB_180519427;
      iVar2 = (*param_4)(puVar7);
    } while (iVar2 == 0);
  }
  else {
LAB_180519427:
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
      goto LAB_180519210;
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
      goto LAB_180519210;
    }
  }
LAB_180519293:
  local_448 = local_448 + -1;
  if (local_448 < 0) {
    return;
  }
  param_1 = (undefined1 *)local_438[local_448];
  puVar10 = (undefined1 *)local_248[local_448];
  goto LAB_180519210;
}



/* ===== 1805194f0 FUN_1805194f0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_1805194f0(double param_1,double param_2)

{
  ulonglong uVar1;
  double dVar2;
  uint uVar3;
  uint uVar4;
  double dVar5;
  double extraout_XMM0_Qa;
  double extraout_XMM0_Qa_00;
  double extraout_XMM0_Qa_01;
  double dVar6;
  double dVar7;
  double dVar8;
  
  if (DAT_180c9fd94 == 0) {
    dVar2 = ABS(param_1);
    if ((ulonglong)dVar2 < (ulonglong)DAT_1805788b8) {
      if ((longlong)dVar2 <= DAT_1805788a8) {
        return param_1;
      }
      dVar2 = param_1 * param_1;
      dVar5 = param_1 + param_1 * dVar2 *
                        (((DAT_18057ea40 * dVar2 + DAT_18057ea30) * dVar2 + DAT_18057ea20) *
                         dVar2 * dVar2 * dVar2 +
                        (DAT_18057ea10 * dVar2 + DAT_18057ea00) * dVar2 + DAT_18057e9f0);
    }
    else {
      if ((ulonglong)dVar2 < (ulonglong)DAT_1805788c0) {
        uVar4 = (uint)(dVar2 * _DAT_180578890 + DAT_180578898);
        dVar6 = (double)(int)uVar4;
        dVar7 = dVar2 - DAT_180578800 * dVar6;
        param_2 = DAT_180578810 * dVar6;
        dVar5 = dVar7 - param_2;
        dVar8 = dVar7;
        if (0xf < (longlong)(((ulonglong)dVar2 >> 0x34) - ((ulonglong)ABS(dVar5) >> 0x34))) {
          dVar8 = dVar7 - DAT_180578820 * dVar6;
          param_2 = DAT_180578830 * dVar6 - ((dVar7 - dVar8) - DAT_180578820 * dVar6);
          dVar5 = dVar8 - param_2;
        }
        param_2 = (dVar8 - dVar5) - param_2;
      }
      else {
        if ((ulonglong)DAT_1805788d0 <= (ulonglong)dVar2) {
          dVar2 = (double)FUN_180530630();
          return dVar2;
        }
        uVar4 = FUN_180531950();
        dVar5 = extraout_XMM0_Qa;
      }
      dVar2 = dVar5 * dVar5;
      if ((uVar4 & 1) == 0) {
        dVar5 = param_2 + (dVar5 * dVar2 *
                           (((DAT_18057ea40 * dVar2 + DAT_18057ea30) * dVar2 + DAT_18057ea20) *
                            dVar2 * dVar2 * dVar2 +
                           (DAT_18057ea10 * dVar2 + DAT_18057ea00) * dVar2 + DAT_18057e9f0) -
                          dVar2 * DAT_180578898 * param_2) + dVar5;
      }
      else {
        dVar5 = (((DAT_18057e9b0 * dVar2 + DAT_18057e9a0) * dVar2 + DAT_18057e990 +
                 ((DAT_18057e9e0 * dVar2 + DAT_18057e9d0) * dVar2 + DAT_18057e9c0) *
                 dVar2 * dVar2 * dVar2) * dVar2 * dVar2 +
                ((((DAT_180578898 * dVar2 - DAT_180578840) + DAT_180578840) - dVar2 * DAT_180578898)
                - param_2 * dVar5)) - (dVar2 * DAT_180578898 - DAT_180578840);
      }
      uVar3 = (uint)((ulonglong)param_1 >> 0x3f);
      if ((uVar4 >> 1 & uVar3) == 0 && (~(uVar4 >> 1) & ~uVar3 & 1) == 0) {
        dVar5 = 0.0 - dVar5;
      }
    }
    return dVar5;
  }
  dVar2 = ABS(param_1);
  if ((ulonglong)DAT_1805788b8 <= (ulonglong)dVar2) {
    if ((ulonglong)DAT_1805788d0 <= (ulonglong)dVar2) {
      dVar2 = (double)FUN_180530630();
      return dVar2;
    }
    if ((ulonglong)dVar2 < (ulonglong)DAT_1805788c8) {
      uVar4 = FUN_180530500(dVar2);
      dVar2 = extraout_XMM0_Qa_00;
    }
    else {
      uVar4 = FUN_180530310();
      dVar2 = extraout_XMM0_Qa_01;
    }
    dVar5 = dVar2 * dVar2;
    if ((uVar4 & 1) == 0) {
      dVar2 = dVar2 - (-(dVar2 * dVar5 * DAT_18057e9f0) +
                      (dVar5 * (param_2 * DAT_180578898 -
                               dVar2 * dVar5 *
                               (dVar5 * (dVar5 * (dVar5 * (dVar5 * DAT_18057ea40 + DAT_18057ea30) +
                                                 DAT_18057ea20) + DAT_18057ea10) + DAT_18057ea00)) -
                      param_2));
    }
    else {
      dVar8 = DAT_180578840 - dVar5 * DAT_180578898;
      dVar2 = dVar5 * dVar5 *
              (dVar5 * (dVar5 * (dVar5 * (dVar5 * (dVar5 * DAT_18057e9e0 + DAT_18057e9d0) +
                                         DAT_18057e9c0) + DAT_18057e9b0) + DAT_18057e9a0) +
              DAT_18057e990) +
              -(dVar2 * param_2) + ((DAT_180578840 - dVar8) - dVar5 * DAT_180578898) + dVar8;
    }
    uVar1 = 0;
    if ((uVar4 >> 1 & 1) != 0) {
      uVar1 = DAT_180578850;
    }
    return (double)((ulonglong)dVar2 ^ uVar1 ^ (ulonglong)param_1 & DAT_180578850);
  }
  if (DAT_1805788b0 <= (longlong)dVar2) {
    dVar2 = param_1 * param_1;
    return param_1 * dVar2 *
           (dVar2 * (dVar2 * (dVar2 * (dVar2 * (dVar2 * DAT_18057ea40 + DAT_18057ea30) +
                                      DAT_18057ea20) + DAT_18057ea10) + DAT_18057ea00) +
           DAT_18057e9f0) + param_1;
  }
  if ((longlong)dVar2 < DAT_1805788a8) {
    return param_1;
  }
  return -(param_1 * param_1 * param_1 * DAT_1805788a0) + param_1;
}



/* ===== 180519a60 FUN_180519a60 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_180519a60(double param_1,double param_2)

{
  ulonglong uVar1;
  double dVar2;
  uint uVar3;
  double dVar4;
  double extraout_XMM0_Qa;
  double extraout_XMM0_Qa_00;
  double extraout_XMM0_Qa_01;
  double dVar5;
  double dVar6;
  double dVar7;
  
  if (DAT_180c9fd94 != 0) {
    uVar1 = (ulonglong)param_1 & _DAT_1805789a0;
    if ((longlong)DAT_180578988 < (longlong)uVar1) {
      if ((double)((ulonglong)param_1 & (ulonglong)DAT_1805789a8) == DAT_1805789a8) {
        dVar2 = (double)FUN_180530580();
        return dVar2;
      }
      if (uVar1 < DAT_180578998) {
        uVar3 = FUN_180530500(uVar1);
        dVar2 = extraout_XMM0_Qa_00;
      }
      else {
        uVar3 = FUN_180530310();
        dVar2 = extraout_XMM0_Qa_01;
      }
      if ((uVar3 & 1) == 0) {
        dVar7 = dVar2 * dVar2;
        dVar4 = DAT_180578920 - dVar7 * DAT_180578968;
        dVar4 = dVar7 * dVar7 *
                (dVar7 * (dVar7 * (dVar7 * (dVar7 * (dVar7 * DAT_18057e9e0 + DAT_18057e9d0) +
                                           DAT_18057e9c0) + DAT_18057e9b0) + DAT_18057e9a0) +
                DAT_18057e990) +
                -(dVar2 * param_2) + ((DAT_180578920 - dVar4) - dVar7 * DAT_180578968) + dVar4;
      }
      else {
        dVar4 = dVar2 * dVar2;
        dVar4 = dVar2 - (-(dVar2 * dVar4 * DAT_18057e9f0) +
                        (dVar4 * (param_2 * DAT_180578968 -
                                 dVar2 * dVar4 *
                                 (dVar4 * (dVar4 * (dVar4 * (dVar4 * DAT_18057ea40 + DAT_18057ea30)
                                                   + DAT_18057ea20) + DAT_18057ea10) + DAT_18057ea00
                                 )) - param_2));
      }
      uVar1 = 0;
      if ((uVar3 + 1 & 2) != 0) {
        uVar1 = DAT_180578930;
      }
      return (double)((ulonglong)dVar4 ^ uVar1);
    }
    if ((longlong)DAT_180578980 <= (longlong)uVar1) {
      param_1 = param_1 * param_1;
      return param_1 * (param_1 * (param_1 * (param_1 * (param_1 * (param_1 * (param_1 * 
                                                  DAT_18057e9e0 + DAT_18057e9d0) + DAT_18057e9c0) +
                                                  DAT_18057e9b0) + DAT_18057e9a0) + DAT_18057e990) -
                       DAT_180578968) + DAT_180578920;
    }
    if ((longlong)uVar1 < (longlong)DAT_180578978) {
      return DAT_180578920;
    }
    return -(param_1 * DAT_180578968 * param_1) + DAT_180578920;
  }
  dVar2 = ABS(param_1);
  if ((ulonglong)DAT_180578988 <= (ulonglong)dVar2) {
    if ((ulonglong)dVar2 < (ulonglong)DAT_180578990) {
      uVar3 = (uint)(dVar2 * _DAT_180578960 + DAT_180578968);
      dVar5 = (double)(int)uVar3;
      dVar6 = dVar2 - DAT_1805788e0 * dVar5;
      param_2 = DAT_1805788f0 * dVar5;
      dVar4 = dVar6 - param_2;
      dVar7 = dVar6;
      if (0xf < (longlong)(((ulonglong)dVar2 >> 0x34) - ((ulonglong)ABS(dVar4) >> 0x34))) {
        dVar7 = dVar6 - DAT_180578900 * dVar5;
        param_2 = DAT_180578910 * dVar5 - ((dVar6 - dVar7) - DAT_180578900 * dVar5);
        dVar4 = dVar7 - param_2;
      }
      param_2 = (dVar7 - dVar4) - param_2;
    }
    else {
      if ((ulonglong)DAT_1805789a8 <= (ulonglong)dVar2) {
        dVar2 = (double)FUN_180530580();
        return dVar2;
      }
      uVar3 = FUN_180531950();
      dVar4 = extraout_XMM0_Qa;
    }
    dVar2 = dVar4 * dVar4;
    if ((uVar3 & 1) == 0) {
      dVar4 = (((DAT_18057e9b0 * dVar2 + DAT_18057e9a0) * dVar2 + DAT_18057e990 +
               ((DAT_18057e9e0 * dVar2 + DAT_18057e9d0) * dVar2 + DAT_18057e9c0) *
               dVar2 * dVar2 * dVar2) * dVar2 * dVar2 +
              ((((DAT_180578968 * dVar2 - DAT_180578920) + DAT_180578920) - dVar2 * DAT_180578968) -
              param_2 * dVar4)) - (dVar2 * DAT_180578968 - DAT_180578920);
    }
    else {
      dVar4 = param_2 + (dVar4 * dVar2 *
                         (((DAT_18057ea40 * dVar2 + DAT_18057ea30) * dVar2 + DAT_18057ea20) *
                          dVar2 * dVar2 * dVar2 +
                         (DAT_18057ea10 * dVar2 + DAT_18057ea00) * dVar2 + DAT_18057e9f0) -
                        dVar2 * DAT_180578968 * param_2) + dVar4;
    }
    if ((uVar3 + 1 & 2) != 0) {
      dVar4 = 0.0 - dVar4;
    }
    return dVar4;
  }
  if ((ulonglong)DAT_180578980 <= (ulonglong)dVar2) {
    param_1 = param_1 * param_1;
    dVar4 = param_1 * param_1;
    dVar2 = param_1 * _DAT_180578970 + DAT_180578920;
    return (DAT_180578920 - dVar2) + param_1 * _DAT_180578970 +
           (DAT_18057e9a0 * param_1 + DAT_18057e990) * dVar4 +
           (DAT_18057e9c0 * param_1 + DAT_18057e9b0) * dVar4 * dVar4 +
           dVar4 * dVar4 * dVar4 * (DAT_18057e9e0 * param_1 + DAT_18057e9d0) + dVar2;
  }
  if ((ulonglong)dVar2 < (ulonglong)DAT_180578978) {
    return DAT_180578920;
  }
  return DAT_180578920 - param_1 * param_1 * DAT_180578968;
}



/* ===== 180519fe0 FUN_180519fe0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_180519fe0(ulonglong param_1,float param_2)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  undefined8 uVar11;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar12;
  double dVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  
  fVar8 = (float)param_1;
  dVar12 = (double)fVar8;
  dVar13 = (double)param_2;
  dVar6 = ABS(dVar12);
  uVar2 = (uint)((ulonglong)dVar12 >> 0x34) & 0x7ff;
  dVar7 = ABS(dVar13);
  uVar4 = (uint)((ulonglong)dVar13 >> 0x34) & 0x7ff;
  if (uVar2 == 0) {
LAB_18051a293:
    if (uVar2 < 0x7ff) {
      if (0x7fe < uVar4) {
        if (((ulonglong)dVar13 & 0xfffffffffffff) == 0) {
          return param_1;
        }
        uVar3 = FUN_18052fdd0(param_2);
        return uVar3;
      }
      if ((uVar2 == 0) && (uVar4 != 0)) {
        return param_1;
      }
      goto LAB_18051a2f3;
    }
  }
  else if (uVar2 < 0x7ff) {
    if (uVar4 - 1 < 0x7fe) {
      if (dVar6 == dVar7) {
        return (ulonglong)(uint)(float)(double)((ulonglong)dVar12 & 0x8000000000000000);
      }
      auVar14._8_8_ = 0;
      auVar14._0_8_ = dVar6;
      if ((ulonglong)dVar6 < (ulonglong)dVar7) {
        if (fVar8 < 0.0) {
          dVar6 = (double)CONCAT44((uint)((ulonglong)dVar6 >> 0x20) ^ DAT_1808adeb0._4_4_,
                                   SUB84(dVar6,0) ^ (uint)DAT_1808adeb0);
        }
        return (ulonglong)(uint)(float)dVar6;
      }
      if (uVar4 < uVar2) {
        iVar5 = 0;
        iVar1 = (int)(uVar2 - uVar4) / 0x18;
        dVar7 = dVar7 * (double)((longlong)(iVar1 * 0x18 + 0x3ff) << 0x34);
        if (7 < iVar1) {
          uVar2 = (iVar1 - 8U >> 3) + 1;
          uVar3 = (ulonglong)uVar2;
          iVar5 = uVar2 * 8;
          do {
            uVar11 = auVar14._8_8_;
            dVar12 = dVar7 * 5.9604644775390625e-08;
            dVar6 = auVar14._0_8_ - (double)(int)(auVar14._0_8_ / dVar7) * dVar7;
            dVar7 = dVar12 * 5.9604644775390625e-08;
            dVar6 = dVar6 - (double)(int)(dVar6 / dVar12) * dVar12;
            dVar12 = dVar7 * 5.9604644775390625e-08;
            dVar6 = dVar6 - (double)(int)(dVar6 / dVar7) * dVar7;
            dVar7 = dVar12 * 5.9604644775390625e-08;
            dVar6 = dVar6 - (double)(int)(dVar6 / dVar12) * dVar12;
            dVar12 = dVar7 * 5.9604644775390625e-08;
            dVar6 = dVar6 - (double)(int)(dVar6 / dVar7) * dVar7;
            dVar7 = dVar12 * 5.9604644775390625e-08;
            dVar6 = dVar6 - (double)(int)(dVar6 / dVar12) * dVar12;
            dVar12 = dVar7 * 5.9604644775390625e-08;
            dVar6 = dVar6 - (double)(int)(dVar6 / dVar7) * dVar7;
            dVar7 = dVar12 * 5.9604644775390625e-08;
            auVar14._0_8_ = dVar6 - (double)(int)(dVar6 / dVar12) * dVar12;
            auVar14._8_8_ = uVar11;
            uVar3 = uVar3 - 1;
          } while (uVar3 != 0);
        }
        if (iVar5 < iVar1) {
          uVar3 = (ulonglong)(uint)(iVar1 - iVar5);
          do {
            uVar11 = auVar14._8_8_;
            dVar6 = (double)(int)(auVar14._0_8_ / dVar7) * dVar7;
            dVar7 = dVar7 * 5.9604644775390625e-08;
            auVar14._0_8_ = auVar14._0_8_ - dVar6;
            auVar14._8_8_ = uVar11;
            uVar3 = uVar3 - 1;
          } while (uVar3 != 0);
        }
      }
      auVar15._0_8_ = auVar14._0_8_ - (double)(int)(auVar14._0_8_ / dVar7) * dVar7;
      auVar15._8_8_ = auVar14._8_8_;
      auVar9 = auVar15;
      if (fVar8 < 0.0) {
        auVar9._0_4_ = SUB84(auVar15._0_8_,0) ^ (uint)DAT_1808adeb0;
        auVar9._4_4_ = (uint)((ulonglong)auVar15._0_8_ >> 0x20) ^ DAT_1808adeb0._4_4_;
        auVar9._8_4_ = auVar14._8_4_ ^ _UNK_1808adeb8;
        auVar9._12_4_ = auVar14._12_4_ ^ _UNK_1808adebc;
      }
      auVar10._4_12_ = auVar9._4_12_;
      auVar10._0_4_ = (float)auVar9._0_8_;
      return auVar10._0_8_;
    }
    goto LAB_18051a293;
  }
  if (((ulonglong)dVar12 & 0xfffffffffffff) != 0) {
    uVar3 = FUN_18052fdd0(param_1 & 0xffffffff);
    return uVar3;
  }
LAB_18051a2f3:
  uVar3 = FUN_18052fc70("fmodf",0x16,0xffc00000,1,8,0x21,fVar8,param_2,2);
  return uVar3;
}



/* ===== 18051a340 FUN_18051a340 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_18051a340(undefined8 param_1,undefined8 param_2)

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
  
  if (((byte)DAT_180c9fd94 & 3) != 3) {
    dVar10 = (double)FUN_18051a360();
    return dVar10;
  }
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



/* ===== 18051a360 FUN_18051a360 ===== */

void FUN_18051a360(void)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  double dVar4;
  uint uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 in_XMM0 [16];
  double dVar10;
  undefined1 in_XMM1 [16];
  
  dVar7 = in_XMM0._0_8_;
  dVar10 = in_XMM1._0_8_;
  uVar5 = in_XMM0._4_4_ >> 0x14 & 0x7ff;
  uVar1 = in_XMM1._4_4_ >> 0x14 & 0x7ff;
  iVar2 = uVar5 - uVar1;
  dVar4 = ABS(dVar10);
  dVar6 = ABS(dVar7);
  if (0x7ff0000000000000 < (ulonglong)dVar4) {
    FUN_18052fdb0();
    return;
  }
  if (0x7ff0000000000000 < (ulonglong)dVar6) {
    FUN_18052fdb0();
    return;
  }
  if (dVar6 == 0.0) {
    if (-1 < (longlong)dVar10) {
      return;
    }
joined_r0x00018051a670:
    if ((longlong)dVar7 < 0) {
      FUN_18052f090(0x20);
    }
    else {
      FUN_18052f090(0x20);
    }
  }
  else {
    if (dVar4 == 0.0) {
      if (-1 < (longlong)dVar7) {
        FUN_18052f090(0x20);
        goto LAB_18051a45f;
      }
    }
    else {
LAB_18051a45f:
      dVar8 = dVar10;
      dVar9 = dVar7;
      if ((uVar1 < 0x3fd) && (uVar5 < 0x3fd)) {
        if (((ulonglong)dVar10 & 0x7ff0000000000000) == 0) {
          if ((longlong)dVar10 < 0) {
            dVar8 = (double)((ulonglong)dVar10 | 0x4010000000000000) + DAT_1808ac598;
          }
          else {
            dVar8 = (double)((ulonglong)dVar10 | 0x4010000000000000) + DAT_180579948;
          }
        }
        else {
          dVar8 = (double)((longlong)dVar10 + 0x4000000000000000);
        }
        if (((ulonglong)dVar7 & 0x7ff0000000000000) == 0) {
          if ((longlong)dVar7 < 0) {
            dVar9 = (double)((ulonglong)dVar7 | 0x4010000000000000) + DAT_1808ac598;
          }
          else {
            dVar9 = (double)((ulonglong)dVar7 | 0x4010000000000000) + DAT_180579948;
          }
        }
        else {
          dVar9 = (double)((longlong)dVar7 + 0x4000000000000000);
        }
        iVar2 = ((uint)((ulonglong)dVar9 >> 0x34) & 0x7ff) -
                ((uint)((ulonglong)dVar8 >> 0x34) & 0x7ff);
      }
      if (iVar2 < 0x39) {
        if ((iVar2 < -0x1c) && (-1 < (longlong)dVar10)) {
          if (iVar2 < -0x432) {
            FUN_18052f090(0x20);
            return;
          }
          if (-0x3ff < iVar2) {
            return;
          }
          dVar8 = (dVar9 * 1.2676506002282294e+30) / dVar8;
          uVar1 = (uint)((ulonglong)ABS(dVar8) >> 0x20);
          uVar5 = uVar1 >> 0x14;
          if (uVar5 < 0x65) {
            if ((int)(0x65 - (uVar1 >> 0x14)) < 0x37) {
              uVar3 = ((ulonglong)dVar8 & 0x1fffffffffffff | 0x10000000000000) >>
                      (100U - (char)uVar5 & 0x3f);
              uVar3 = (uVar3 >> 1) + (ulonglong)((uint)uVar3 & 1);
            }
            else {
              uVar3 = 0;
            }
          }
          else {
            uVar3 = (ulonglong)uVar5 - 100 << 0x34;
          }
          if ((uVar3 & 0x7ff0000000000000) == 0) {
            FUN_18052f090(0x20);
            return;
          }
          return;
        }
        if ((-0x39 < iVar2) || (-1 < (longlong)dVar10)) {
          if (dVar6 != INFINITY) {
            return;
          }
          if (dVar4 == INFINITY) {
            FUN_18052f090(0x20);
            return;
          }
          return;
        }
        goto joined_r0x00018051a670;
      }
      if (-1 < (longlong)dVar7) {
        FUN_18052f090(0x20);
        return;
      }
    }
    FUN_18052f090(0x20);
  }
  return;
}



/* ===== 18051a9c0 FUN_18051a9c0 ===== */

undefined4 FUN_18051a9c0(undefined4 param_1)

{
  short sVar1;
  undefined4 uVar2;
  
  if (1 < DAT_1809194c8) {
    uVar2 = FUN_1805321b0();
    return uVar2;
  }
  sVar1 = FUN_1805266e0();
  if (sVar1 != 0) {
    if ((sVar1 != 1) && (sVar1 != 2)) {
      uVar2 = FUN_1805321c0(param_1);
      return uVar2;
    }
  }
  return param_1;
}



/* ===== 18051aa20 FUN_18051aa20 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_18051aa20(undefined8 param_1)

{
  undefined8 in_RCX;
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  double in_XMM0_Qb;
  double dVar6;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double dVar7;
  uint uVar8;
  
  fVar1 = (float)param_1;
  fVar2 = ABS(fVar1);
  if ((uint)fVar2 < 0x42b00000) {
    dVar7 = DAT_180579980 * (double)fVar1;
  }
  else {
    if (0x7f7fffff < (uint)fVar2) {
      if (fVar1 == INFINITY) {
        return param_1;
      }
      if (fVar1 == -INFINITY) {
        return 0;
      }
      uVar3 = FUN_1805323a0(in_RCX,(uint)fVar1 | 0x400000,DAT_1805799cc);
      return uVar3;
    }
    dVar7 = DAT_180579980 * (double)fVar1;
    if (DAT_180579960 <= dVar7) {
      uVar3 = FUN_1805323a0(fVar2,fVar2,DAT_1805799d4);
      return uVar3;
    }
    if (dVar7 < DAT_180579970) {
      uVar3 = FUN_1805323a0(fVar2,fVar2,DAT_1805799d0);
      return uVar3;
    }
  }
  uVar8 = (uint)dVar7;
  dVar7 = (double)fVar1 - DAT_180579990 * (double)(int)uVar8;
  dVar6 = in_XMM0_Qb - _UNK_180579998 * (double)(int)_UNK_180579988;
  auVar4._0_8_ = ((dVar7 * dVar7 * (_DAT_1805799a0 * dVar7 + DAT_1805799b0) + dVar7) *
                  *(double *)(&DAT_18057fb70 + (ulonglong)(uVar8 & 0x3f) * 8) +
                 *(double *)(&DAT_18057fb70 + (ulonglong)(uVar8 & 0x3f) * 8)) *
                 (double)((ulonglong)(uint)((int)(uVar8 - (uVar8 & 0x3f)) >> 6) + 0x3ff << 0x34);
  auVar4._8_8_ = ((dVar6 * dVar6 * (_UNK_1805799a8 * dVar6 + _UNK_1805799b8) + dVar6) * 0.0 + 0.0) *
                 0.0;
  auVar5._4_12_ = auVar4._4_12_;
  auVar5._0_4_ = (float)auVar4._0_8_;
  return auVar5._0_8_;
}



/* ===== 18051ab90 FUN_18051ab90 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_18051ab90(undefined8 param_1)

{
  undefined1 auVar1 [16];
  uint uVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  undefined8 uVar6;
  double dVar9;
  undefined1 auVar7 [64];
  undefined1 auVar8 [64];
  undefined1 in_ZMM0 [64];
  undefined1 auVar10 [16];
  
  fVar4 = in_ZMM0._0_4_;
  auVar7._16_48_ = in_ZMM0._16_48_;
  if (DAT_180c9fd94 == 0) {
    fVar3 = ABS(fVar4);
    if ((uint)fVar3 < 0x42b00000) {
      dVar5 = DAT_180579980 * (double)fVar4;
    }
    else {
      if (0x7f7fffff < (uint)fVar3) {
        if (fVar4 == INFINITY) {
          return in_ZMM0._0_8_;
        }
        if (fVar4 == -INFINITY) {
          return 0;
        }
        uVar6 = FUN_1805323a0(param_1,(uint)fVar4 | 0x400000,DAT_1805799cc);
        return uVar6;
      }
      dVar5 = DAT_180579980 * (double)fVar4;
      if (DAT_180579960 <= dVar5) {
        uVar6 = FUN_1805323a0(param_1,fVar3,DAT_1805799d4);
        return uVar6;
      }
      if (dVar5 < DAT_180579970) {
        uVar6 = FUN_1805323a0(param_1,fVar3,DAT_1805799d0);
        return uVar6;
      }
    }
    uVar2 = (uint)dVar5;
    dVar5 = (double)fVar4 - DAT_180579990 * (double)(int)uVar2;
    dVar9 = in_ZMM0._8_8_ - _UNK_180579998 * (double)(int)_UNK_180579988;
    auVar7._0_8_ = ((dVar5 * dVar5 * (_DAT_1805799a0 * dVar5 + DAT_1805799b0) + dVar5) *
                    *(double *)(&DAT_18057fb70 + (ulonglong)(uVar2 & 0x3f) * 8) +
                   *(double *)(&DAT_18057fb70 + (ulonglong)(uVar2 & 0x3f) * 8)) *
                   (double)((ulonglong)(uint)((int)(uVar2 - (uVar2 & 0x3f)) >> 6) + 0x3ff << 0x34);
    auVar7._8_8_ = ((dVar9 * dVar9 * (_UNK_1805799a8 * dVar9 + _UNK_1805799b8) + dVar9) * 0.0 + 0.0)
                   * 0.0;
    auVar8._4_60_ = auVar7._4_60_;
    auVar8._0_4_ = (float)auVar7._0_8_;
    return auVar8._0_8_;
  }
  fVar3 = ABS(fVar4);
  if ((uint)fVar3 < 0x42b00000) {
    dVar5 = (double)fVar4 * DAT_180579980;
  }
  else {
    if (0x7f7fffff < (uint)fVar3) {
      if (fVar4 == INFINITY) {
        return in_ZMM0._0_8_;
      }
      if (fVar4 == -INFINITY) {
        return 0;
      }
      uVar6 = FUN_1805323a0(param_1,(uint)fVar4 | 0x400000,DAT_1805799cc);
      return uVar6;
    }
    dVar5 = (double)fVar4 * DAT_180579980;
    if (DAT_180579960 <= dVar5) {
      uVar6 = FUN_1805323a0(fVar3,_DAT_180579950,DAT_1805799d4);
      return uVar6;
    }
    if (dVar5 < DAT_180579970) {
      uVar6 = FUN_1805323a0(fVar3,0,DAT_1805799d0);
      return uVar6;
    }
  }
  auVar10._8_8_ = 0;
  auVar10._0_8_ = dVar5;
  auVar1 = vcvtpd2dq_avx(auVar10);
  auVar10 = vcvtdq2pd_avx(auVar1);
  dVar5 = -(auVar10._0_8_ * DAT_180579990) + (double)fVar4;
  uVar2 = auVar1._0_4_ & 0x3f;
  dVar5 = (*(double *)(&DAT_18057fb70 + (ulonglong)uVar2 * 8) *
           ((dVar5 * _DAT_1805799a0 + DAT_1805799b0) * dVar5 * dVar5 + dVar5) +
          *(double *)(&DAT_18057fb70 + (ulonglong)uVar2 * 8)) *
          (double)((ulonglong)(uint)((int)(auVar1._0_4_ - uVar2) >> 6) + 0x3ff << 0x34);
  return CONCAT44((int)((ulonglong)dVar5 >> 0x20),(float)dVar5);
}



/* ===== 18051acf0 FUN_18051acf0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_18051acf0(void)

{
  undefined1 auVar1 [16];
  float fVar2;
  uint uVar3;
  float fVar4;
  ulonglong uVar5;
  undefined1 auVar6 [16];
  undefined1 in_ZMM0 [64];
  float fVar7;
  undefined1 auVar8 [64];
  float fVar9;
  float fVar10;
  
  if (((byte)DAT_180c9fd94 & 3) != 3) {
    uVar5 = FUN_18051ad10();
    return uVar5;
  }
  fVar4 = in_ZMM0._0_4_;
  uVar3 = (uint)fVar4 >> 0x17 & 0xff;
  auVar6 = in_ZMM0._0_16_;
  auVar8 = ZEXT1664(auVar6);
  fVar9 = 0.0;
  if (0x7f800000 < (uint)ABS(fVar4)) {
    uVar5 = FUN_18053bea0();
    return uVar5;
  }
  if (uVar3 < 0x71) {
    FUN_18052f090(0x20);
    return auVar8._0_8_;
  }
  if (0x7e < uVar3) {
    if (fVar4 == DAT_1808ac34c) {
      FUN_18052f090(0x20);
      return (ulonglong)DAT_1808ac440;
    }
    if (fVar4 == DAT_1808acda0) {
      FUN_18052f090(0x20);
      return (ulonglong)DAT_1808acdb0;
    }
    uVar5 = FUN_18052fc70("asinf",0xe,0xffc00000,1,8,0x21);
    return uVar5;
  }
  if ((int)fVar4 < 0) {
    auVar6._0_4_ = (uint)fVar4 ^ DAT_1808adec0;
    auVar6._4_4_ = in_ZMM0._4_4_ ^ _UNK_1808adec4;
    auVar6._8_4_ = in_ZMM0._8_4_ ^ _UNK_1808adec8;
    auVar6._12_4_ = in_ZMM0._12_4_ ^ _UNK_1808adecc;
  }
  fVar7 = auVar6._0_4_;
  if (uVar3 < 0x7e) {
    fVar7 = fVar7 * fVar7;
  }
  else {
    fVar7 = (DAT_1808ac34c - fVar7) * DAT_1808ac1f4;
    fVar9 = SQRT(fVar7);
    auVar6 = ZEXT416((uint)fVar9);
  }
  fVar10 = ((fVar7 * (fVar7 * (-(fVar7 * DAT_1805799e4) + DAT_1805799fc) - DAT_1805799e8) +
            DAT_1805799ec) * fVar7) / (-(fVar7 * DAT_1805799f4) + DAT_1805799f8);
  if (uVar3 < 0x7e) {
    auVar1._4_12_ = auVar6._4_12_;
    auVar1._0_4_ = fVar10 * auVar6._0_4_ + auVar6._0_4_;
    uVar5 = auVar1._0_8_;
  }
  else {
    fVar2 = (float)((uint)fVar9 & 0xffff0000);
    fVar7 = (-(fVar2 * fVar2) + fVar7) / (fVar2 + fVar9);
    uVar5 = (ulonglong)
            (uint)(DAT_1805799f0 -
                  ((fVar10 * (fVar9 + fVar9) - (DAT_1805799e0 - (fVar7 + fVar7))) -
                  (DAT_1805799f0 - (fVar2 + fVar2))));
  }
  if ((int)fVar4 < 0) {
    uVar5 = CONCAT44((uint)(uVar5 >> 0x20) ^ _UNK_1808adec4,(uint)uVar5 ^ DAT_1808adec0);
  }
  return uVar5;
}



/* ===== 18051ad10 FUN_18051ad10 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_18051ad10(ulonglong param_1)

{
  uint uVar1;
  float fVar2;
  ulonglong uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  
  uVar8 = (uint)(param_1 >> 0x20);
  fVar2 = (float)param_1;
  fVar5 = 0.0;
  uVar1 = (uint)fVar2 >> 0x17 & 0xff;
  if (0x7f800000 < (uint)ABS(fVar2)) {
    uVar3 = FUN_18052fdd0();
    return uVar3;
  }
  if (uVar1 < 0x71) {
    FUN_18052f090(0x20);
    return param_1;
  }
  if (uVar1 < 0x7f) {
    fVar7 = fVar2;
    if ((int)fVar2 < 0) {
      fVar7 = (float)((uint)fVar2 ^ DAT_1808adec0);
      uVar8 = uVar8 ^ _UNK_1808adec4;
    }
    if (uVar1 < 0x7e) {
      fVar4 = fVar7 * fVar7;
    }
    else {
      fVar4 = (DAT_1808ac34c - fVar7) * DAT_1808ac1f4;
      fVar5 = SQRT(fVar4);
      uVar8 = 0;
      fVar7 = fVar5;
    }
    fVar6 = ((((DAT_1805799fc - fVar4 * DAT_1805799e4) * fVar4 - DAT_1805799e8) * fVar4 +
             DAT_1805799ec) * fVar4) / (DAT_1805799f8 - fVar4 * DAT_1805799f4);
    if (uVar1 < 0x7e) {
      fVar7 = fVar7 * fVar6 + fVar7;
    }
    else {
      fVar7 = (float)((uint)fVar5 & 0xffff0000);
      fVar4 = (fVar4 - fVar7 * fVar7) / (fVar7 + fVar5);
      uVar8 = 0;
      fVar7 = DAT_1805799f0 -
              (((fVar5 + fVar5) * fVar6 - (DAT_1805799e0 - (fVar4 + fVar4))) -
              (DAT_1805799f0 - (fVar7 + fVar7)));
    }
    if ((int)fVar2 < 0) {
      fVar7 = (float)((uint)fVar7 ^ DAT_1808adec0);
      uVar8 = uVar8 ^ _UNK_1808adec4;
    }
    return CONCAT44(uVar8,fVar7);
  }
  if (fVar2 == DAT_1808ac34c) {
    FUN_18052f090(0x20);
    return (ulonglong)DAT_1808ac440;
  }
  if (fVar2 == DAT_1808acda0) {
    FUN_18052f090(0x20);
    return (ulonglong)DAT_1808acdb0;
  }
  uVar3 = FUN_18052fc70("asinf",0xe,0xffc00000,1,8,0x21,fVar2,0,1);
  return uVar3;
}



/* ===== 18051af10 FUN_18051af10 ===== */

float FUN_18051af10(float param_1)

{
  float fVar1;
  
  if (((uint)param_1 & 0x7f800000) == 0x7f800000) {
    if (((uint)param_1 & 0x7fffff) != 0) {
      fVar1 = (float)FUN_18052fdd0(param_1);
      return fVar1;
    }
    if ((int)param_1 < 0) goto LAB_18051af47;
  }
  if (-1 < (int)param_1 || ABS(param_1) == 0.0) {
    return SQRT(param_1);
  }
LAB_18051af47:
  fVar1 = (float)FUN_18052fc70("sqrtf",5,0xffc00000,1,8,0x21,param_1,0,1);
  return fVar1;
}



/* ===== 18051afb0 FUN_18051afb0 ===== */

/* WARNING: Removing unreachable block (ram,0x00018051b47f) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_18051afb0(undefined8 param_1,double param_2,undefined8 param_3)

{
  undefined1 auVar1 [60];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auVar11 [16];
  undefined1 in_ZMM0 [64];
  undefined4 uVar15;
  undefined1 auVar12 [64];
  undefined1 auVar13 [64];
  ulonglong uVar10;
  undefined1 auVar14 [64];
  float fVar16;
  double dVar17;
  undefined8 uVar18;
  undefined1 auVar19 [16];
  undefined1 in_ZMM1 [64];
  undefined1 auVar22 [64];
  undefined1 auVar21 [64];
  undefined1 auVar20 [64];
  float fVar23;
  double dVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 in_ZMM2 [64];
  undefined1 auVar29 [16];
  undefined1 in_ZMM3 [64];
  undefined1 auVar30 [64];
  undefined1 auVar31 [16];
  double dVar32;
  undefined1 auVar33 [16];
  double dVar34;
  
  fVar23 = in_ZMM0._0_4_;
  auVar14._16_48_ = in_ZMM0._16_48_;
  auVar26 = in_ZMM2._0_16_;
  if (DAT_180c9fd94 != 0) {
    auVar19 = vpunpckldq_avx(in_ZMM1._0_16_,in_ZMM0._0_16_);
    auVar27 = (undefined1  [16])0x0;
    uVar10 = 0;
    fVar16 = auVar19._0_4_;
    fVar5 = ABS(fVar16);
    fVar6 = ABS(fVar23);
    uVar18 = auVar19._0_8_;
    if ((uint)fVar5 < 0x7f800000) {
      if ((uint)fVar5 < 0x3f800001) {
        if (fVar5 == 0.0) {
          if ((0x7f800000 < (uint)fVar6) && ((uint)fVar6 < 0x7fc00000)) {
            uVar10 = FUN_180532690(fVar6,(uint)fVar6 | 0x400000,(uint)fVar6 | 0x400000,DAT_180579a18
                                  );
            return uVar10;
          }
          goto LAB_18051bc80;
        }
        if (fVar16 == 1.0) {
          if ((uint)fVar6 < 0x7f800001) {
            return in_ZMM0._0_8_;
          }
          uVar10 = FUN_180532690(fVar6,(uint)fVar23 | 0x400000,(uint)fVar23 | 0x400000,DAT_180579a18
                                );
          return uVar10;
        }
      }
      if ((uint)fVar6 < 0x7f800000) {
        auVar28 = vcvtps2pd_avx(auVar19);
        auVar14 = ZEXT1664(auVar28);
        if ((int)fVar23 < 0x3f880000) {
          if ((int)fVar23 < 1) {
            if (fVar6 == 0.0) {
              fVar5 = fVar16;
              if ((int)fVar16 < 0) {
                fVar5 = INFINITY;
              }
              iVar8 = 0;
              if ((int)fVar16 < 0) {
                iVar8 = 0x7f800000;
              }
              if (0 < (int)fVar16) {
                fVar5 = 0.0;
              }
              if (((uint)fVar16 & 0x7f800000) < 0x4b000001) {
                auVar26 = vroundss_avx(auVar26,auVar19,8);
                if (auVar26._0_4_ == fVar16) {
                  if (((int)ROUND(fVar16) & 1U) == 0) {
                    uVar7 = 0;
                  }
                  else {
                    uVar7 = (uint)fVar23 & 0x80000000;
                  }
                }
                else {
                  uVar7 = 0;
                }
              }
              else {
                uVar7 = 0;
              }
              uVar7 = uVar7 | (uint)fVar5;
              if (iVar8 == 0) {
                return (ulonglong)uVar7;
              }
              uVar10 = FUN_180532690(uVar7,uVar18,uVar7,DAT_180579a14);
              return uVar10;
            }
            if (((uint)fVar16 & 0x7f800000) < 0x4b000001) {
              auVar26 = vroundss_avx(auVar26,auVar19,8);
              if (auVar26._0_4_ != fVar16) {
                uVar10 = FUN_180532690(fVar6,0xffc00000,0xffc00000,DAT_180579a24);
                return uVar10;
              }
              if (((int)ROUND(fVar16) & 1U) != 0) {
                auVar27 = ZEXT416(DAT_180579a7c);
              }
            }
          }
          uVar10 = auVar27._0_8_;
          auVar26 = vpshufd_avx(auVar28,0xee);
          dVar17 = auVar26._0_8_ - DAT_180579a6c;
          param_2 = ABS(dVar17);
          if ((ulonglong)param_2 < (ulonglong)DAT_180579a64) {
            vpshufd_avx(auVar27,0x44);
            dVar32 = dVar17 / (dVar17 + DAT_180579a74);
            dVar24 = dVar32 + dVar32;
            dVar34 = dVar24 * dVar24;
            auVar26._8_8_ = 0;
            auVar26._0_8_ = dVar34;
            auVar26 = vpshufd_avx(auVar26,0x44);
            auVar19._8_8_ = 0;
            auVar19._0_8_ = dVar34 * dVar34 * dVar24 * dVar34;
            auVar27._8_8_ = 0;
            auVar27._0_8_ = dVar24 * dVar34;
            auVar19 = vunpcklpd_avx(auVar27,auVar19);
            auVar28._0_8_ = auVar19._0_8_ * (auVar26._0_8_ * _DAT_180579a90 + _DAT_180579aa0);
            auVar28._8_8_ = auVar19._8_8_ * (auVar26._8_8_ * _UNK_180579a98 + _UNK_180579aa8);
            auVar26 = vpshufd_avx(auVar28,0xee);
            auVar33._8_8_ = 0;
            auVar33._0_8_ = dVar32 * dVar17;
            auVar19 = vpshufd_avx(auVar33,0xee);
            uVar10 = auVar19._0_8_;
            dVar17 = dVar17 + ((auVar26._0_8_ + auVar28._0_8_) - dVar32 * dVar17);
            goto LAB_18051b0ae;
          }
        }
        auVar26 = vpshufd_avx(auVar28,0xee);
        auVar26 = vpand_avx(auVar26,_DAT_180579af0);
        uVar7 = (auVar26._4_4_ >> 0xc) + (uint)((auVar26._0_8_ >> 0x2b & 1) != 0);
        auVar3._8_8_ = _UNK_180579ad8;
        auVar3._0_8_ = DAT_180579ad0;
        auVar19 = vpor_avx(auVar26,auVar3);
        auVar26 = vpshufd_avx(auVar19,0xee);
        auVar26 = vpsrlq_avx(auVar26,0x34);
        auVar4._8_8_ = _UNK_180579ae8;
        auVar4._0_8_ = _DAT_180579ae0;
        auVar26 = vpsubq_avx(auVar26,auVar4);
        auVar26 = vcvtdq2pd_avx(auVar26);
        dVar17 = ((double)((ulonglong)(uVar7 | 0x3fe00) << 0x2c) - auVar19._0_8_) *
                 *(double *)(&DAT_18057fd80 + (ulonglong)uVar7 * 8);
        dVar17 = dVar17 * (dVar17 * (dVar17 * DAT_180579a34 + DAT_180579ad0) + DAT_180579a6c);
        dVar24 = auVar28._0_8_ *
                 ((auVar26._0_8_ * DAT_180579a3c +
                  *(double *)(&DAT_180579b00 + (ulonglong)uVar7 * 8)) - dVar17);
        if (DAT_180579a44 < dVar24) {
          uVar10 = FUN_180532690(&DAT_180579b00,0x7f800000,SUB648(ZEXT464(0x7f800000),0) | uVar10,
                                 DAT_180579a30);
          return uVar10;
        }
        if (DAT_180579a4c < dVar24) {
          auVar29._0_8_ = dVar24 * _DAT_180579ac0;
          auVar29._8_8_ = _UNK_180579ac8 * 0.0;
          auVar19 = vcvtpd2dq_avx(auVar29);
          auVar26 = vcvtdq2pd_avx(auVar19);
          dVar24 = -(auVar26._0_8_ * DAT_180579a54) + dVar24;
          auVar11._0_8_ =
               *(double *)(&DAT_18057fb70 + (ulonglong)(auVar19._0_4_ & 0x3f) * 8) *
               dVar24 * (dVar24 * (dVar24 * DAT_180579a5c + DAT_180579ad0) + DAT_180579a6c) +
               *(double *)(&DAT_18057fb70 + (ulonglong)(auVar19._0_4_ & 0x3f) * 8);
          auVar11._8_8_ = 0;
          auVar26 = vpsrad_avx(auVar19,6);
          auVar26 = vpsllq_avx(auVar26,0x34);
          auVar26 = vpaddq_avx(auVar26,auVar11);
          return CONCAT44((int)((ulonglong)auVar11._0_8_ >> 0x20),(float)auVar26._0_8_) | uVar10;
        }
        uVar10 = FUN_180532690(&DAT_180579b00,dVar17,uVar10,DAT_180579a28);
        return uVar10;
      }
      if (fVar5 == 0.0) goto LAB_18051bc80;
      if (fVar23 == INFINITY) {
        if ((int)fVar16 < 0) {
          return 0;
        }
        goto LAB_18051bce0;
      }
      if (fVar23 == -INFINITY) {
        fVar23 = fVar16;
        if ((int)fVar16 < 0) {
          fVar23 = 0.0;
        }
        if (0 < (int)fVar16) {
          fVar23 = INFINITY;
        }
        uVar7 = 0x80000000;
        if (((uint)fVar16 & 0x7f800000) < 0x4b000001) {
          auVar26 = vroundss_avx(auVar26,auVar19,8);
          if (auVar26._0_4_ == fVar16) {
            if (((int)ROUND(fVar16) & 1U) == 0) {
              uVar7 = 0;
            }
          }
          else {
            uVar7 = 0;
          }
        }
        else {
          uVar7 = 0;
        }
        return (ulonglong)(uVar7 | (uint)fVar23);
      }
    }
    else {
      if (0x7f800000 < (uint)fVar5) {
        if (0x7f800000 < (uint)fVar6) {
          if (fVar23 == -NAN) {
            uVar10 = FUN_180532690(0x7fc00000,uVar18,(uint)fVar16 | 0x400000,DAT_180579a20);
            return uVar10;
          }
          uVar10 = FUN_180532690((uint)fVar23 | 0x400000,uVar18,(uint)fVar23 | 0x400000,
                                 DAT_180579a20);
          return uVar10;
        }
        if (fVar23 != 1.0) {
          uVar10 = FUN_180532690(uVar18,uVar18,(uint)fVar16 | 0x400000,DAT_180579a1c);
          return uVar10;
        }
        if ((uint)fVar5 < 0x7fc00000) {
          uVar10 = FUN_180532690(0x3f800000,0x3f800000,0x3f800000,DAT_180579a1c);
          return uVar10;
        }
LAB_18051bc80:
        return SUB648(ZEXT464(0x3f800000),0);
      }
      if ((uint)fVar6 < 0x7f800001) {
        if (fVar6 == 1.0) {
          return SUB648(ZEXT464(0x3f800000),0);
        }
        if ((int)fVar16 < 0) {
          uVar7 = 0;
          if ((uint)fVar6 < 0x3f800000) {
            uVar7 = 0x7f800000;
          }
          return (ulonglong)uVar7;
        }
        if ((uint)fVar6 < 0x3f800000) {
          return 0;
        }
LAB_18051bce0:
        return SUB648(ZEXT464(0x7f800000),0);
      }
    }
    uVar10 = FUN_180532690((uint)fVar23 | 0x400000,uVar18,(uint)fVar23 | 0x400000,DAT_180579a18);
    return uVar10;
  }
  auVar22._16_48_ = in_ZMM1._16_48_;
  auVar22._0_12_ = in_ZMM1._0_12_;
  auVar22._12_4_ = in_ZMM0._4_4_;
  auVar21._12_52_ = auVar22._12_52_;
  auVar21._0_8_ = in_ZMM1._0_8_;
  auVar21._8_4_ = in_ZMM1._4_4_;
  auVar20._8_56_ = auVar21._8_56_;
  fVar16 = in_ZMM1._0_4_;
  auVar20._0_8_ = CONCAT44(fVar23,fVar16);
  uVar10 = 0;
  fVar5 = ABS(fVar16);
  fVar6 = ABS(fVar23);
  auVar19 = auVar20._0_16_;
  if (0x7f7fffff < (uint)fVar5) {
    if (0x7f800000 < (uint)fVar5) {
      if (0x7f800000 < (uint)fVar6) {
        if (fVar23 == -NAN) {
          uVar10 = FUN_180532690(0x7fc00000,auVar20._0_8_,param_3,DAT_180579a20);
          return uVar10;
        }
        uVar10 = FUN_180532690((uint)fVar23 | 0x400000,auVar20._0_8_,param_3,DAT_180579a20);
        return uVar10;
      }
      if (fVar23 != 1.0) {
        uVar10 = FUN_180532690(fVar6,auVar20._0_8_,param_3,DAT_180579a1c);
        return uVar10;
      }
      if ((uint)fVar5 < 0x7fc00000) {
        uVar10 = FUN_180532690(0x3f800000,0x3f800000,param_3,DAT_180579a1c);
        return uVar10;
      }
LAB_18051b5a0:
      return SUB168(ZEXT416(0x3f800000),0);
    }
    if ((uint)fVar6 < 0x7f800001) {
      if (fVar6 == 1.0) {
        return SUB168(ZEXT416(0x3f800000),0);
      }
      if ((int)fVar16 < 0) {
        if (fVar6 != 0.0) {
          uVar7 = 0;
          if ((uint)fVar6 < 0x3f800000) {
            uVar7 = 0x7f800000;
          }
          return (ulonglong)uVar7;
        }
      }
      else if ((uint)fVar6 < 0x3f800000) {
        return 0;
      }
LAB_18051b600:
      return SUB168(ZEXT416(0x7f800000),0);
    }
LAB_18051b620:
    uVar10 = FUN_180532690((uint)fVar23 | 0x400000,auVar20._0_8_,param_3,DAT_180579a18);
    return uVar10;
  }
  if ((uint)fVar5 < 0x3f800001) {
    if (fVar5 == 0.0) {
      if ((0x7f800000 < (uint)fVar6) && ((uint)fVar6 < 0x7fc00000)) {
        uVar10 = FUN_180532690(fVar6,(uint)fVar6 | 0x400000,param_3,DAT_180579a18);
        return uVar10;
      }
      goto LAB_18051b5a0;
    }
    param_2 = (double)(auVar21._0_8_ & 0xffffffff);
    if (fVar16 == 1.0) {
      if ((uint)ABS(fVar23) < 0x7f800001) {
        return in_ZMM0._0_8_;
      }
      uVar10 = FUN_180532690(fVar6,(uint)fVar23 | 0x400000,param_3,DAT_180579a18);
      return uVar10;
    }
  }
  if (0x7f7fffff < (uint)fVar6) {
    if (fVar5 == 0.0) goto LAB_18051b5a0;
    if (fVar23 == INFINITY) {
      if ((int)fVar16 < 0) {
        return 0;
      }
      goto LAB_18051b600;
    }
    if (fVar23 == -INFINITY) {
      fVar23 = fVar16;
      if ((int)fVar16 < 0) {
        fVar23 = 0.0;
      }
      if (0 < (int)fVar16) {
        fVar23 = INFINITY;
      }
      uVar7 = 0x80000000;
      if (((uint)fVar16 & 0x7f800000) < 0x4b000001) {
        if (DAT_1809194c8 < 2) {
          fVar5 = (float)(int)ROUND(fVar16);
        }
        else {
          auVar26 = roundss(auVar26,auVar19,8);
          fVar5 = auVar26._0_4_;
        }
        if (fVar5 == fVar16) {
          if (((int)ROUND(fVar16) & 1U) == 0) {
            uVar7 = 0;
          }
        }
        else {
          uVar7 = 0;
        }
      }
      else {
        uVar7 = 0;
      }
      return (ulonglong)(uVar7 | (uint)fVar23);
    }
    goto LAB_18051b620;
  }
  auVar14._0_8_ = (double)fVar16;
  auVar14._8_8_ = (double)fVar23;
  uVar15 = (undefined4)((ulonglong)auVar14._8_8_ >> 0x20);
  if ((int)fVar23 < 0x3f880000) {
    if ((int)fVar23 < 1) {
      if (fVar6 == 0.0) {
        fVar5 = fVar16;
        if ((int)fVar16 < 0) {
          fVar5 = INFINITY;
        }
        iVar8 = 0;
        if ((int)fVar16 < 0) {
          iVar8 = 0x7f800000;
        }
        if (0 < (int)fVar16) {
          fVar5 = 0.0;
        }
        uVar10 = (ulonglong)((uint)fVar16 & 0x7f800000);
        if (((uint)fVar16 & 0x7f800000) < 0x4b000001) {
          if (DAT_1809194c8 < 2) {
            uVar10 = (ulonglong)(uint)(int)ROUND(fVar16);
            fVar6 = (float)(int)ROUND(fVar16);
          }
          else {
            auVar26 = roundss(auVar26,auVar19,8);
            fVar6 = auVar26._0_4_;
          }
          if (fVar6 == fVar16) {
            uVar10 = (ulonglong)(CONCAT14(fVar6 < fVar16,(int)ROUND(fVar16)) >> 1);
            if (((int)ROUND(fVar16) & 1U) == 0) {
              uVar7 = 0;
            }
            else {
              uVar7 = (uint)fVar23 & 0x80000000;
            }
          }
          else {
            uVar7 = 0;
          }
        }
        else {
          uVar7 = 0;
        }
        uVar9 = (ulonglong)(uVar7 | (uint)fVar5);
        if (iVar8 != 0) {
          uVar9 = FUN_180532690(uVar7 | (uint)fVar5,auVar20._0_8_,uVar10,DAT_180579a14);
        }
        return uVar9;
      }
      if (((uint)fVar16 & 0x7f800000) < 0x4b000001) {
        if (DAT_1809194c8 < 2) {
          fVar23 = (float)(int)ROUND(fVar16);
        }
        else {
          auVar26 = roundss(auVar26,auVar19,8);
          fVar23 = auVar26._0_4_;
        }
        if (fVar23 != fVar16) {
          uVar10 = FUN_180532690(fVar6,0xffc00000,param_3,DAT_180579a24);
          return uVar10;
        }
        if (((int)ROUND(fVar16) & 1U) != 0) {
          uVar10 = (ulonglong)DAT_180579a7c;
        }
      }
    }
    auVar30._8_4_ = SUB84(auVar14._8_8_,0);
    auVar30._0_8_ = auVar14._8_8_;
    auVar30._16_48_ = in_ZMM3._16_48_;
    auVar30._12_4_ = uVar15;
    in_ZMM3._8_56_ = auVar30._8_56_;
    in_ZMM3._0_8_ = auVar14._8_8_ - DAT_180579a6c;
    param_2 = ABS(in_ZMM3._0_8_);
    if ((ulonglong)param_2 < (ulonglong)DAT_180579a64) {
      dVar34 = in_ZMM3._0_8_ / (in_ZMM3._0_8_ + DAT_180579a74);
      dVar24 = dVar34 + dVar34;
      dVar17 = dVar24 * dVar24;
      auVar31._8_4_ = SUB84(dVar17,0);
      auVar31._0_8_ = dVar17;
      auVar31._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
      dVar17 = in_ZMM3._0_8_ +
               ((dVar24 * dVar17 * (dVar17 * _DAT_180579a90 + _DAT_180579aa0) +
                dVar17 * dVar17 * dVar24 * dVar17 *
                (auVar31._8_8_ * _UNK_180579a98 + _UNK_180579aa8)) - dVar34 * in_ZMM3._0_8_);
      goto LAB_18051b0ae;
    }
  }
  auVar25._8_4_ = SUB84(auVar14._8_8_,0);
  auVar25._0_8_ = auVar14._8_8_;
  auVar25._12_4_ = uVar15;
  auVar25 = auVar25 & _DAT_180579af0;
  uVar7 = (auVar25._4_4_ >> 0xc) + (uint)((auVar25._0_8_ >> 0x2b & 1) != 0);
  auVar2._8_8_ = _UNK_180579ad8;
  auVar2._0_8_ = DAT_180579ad0;
  auVar1._4_56_ = in_ZMM3._8_56_;
  auVar1._0_4_ = SUB164(auVar25 | auVar2,0xc);
  dVar17 = ((double)((ulonglong)(uVar7 | 0x3fe00) << 0x2c) - SUB168(auVar25 | auVar2,0)) *
           *(double *)(&DAT_18057fd80 + (ulonglong)uVar7 * 8);
  dVar17 = ((double)(int)(((auVar1._0_8_ & 0xffffffff) >> 0x14) - _DAT_180579ae0) * DAT_180579a3c +
           *(double *)(&DAT_180579b00 + (ulonglong)uVar7 * 8)) -
           (dVar17 * dVar17 * (DAT_180579a34 * dVar17 + DAT_180579ad0) + dVar17);
LAB_18051b0ae:
  auVar12._8_56_ = auVar14._8_56_;
  dVar17 = auVar14._0_8_ * dVar17;
  if (DAT_180579a44 < dVar17) {
    uVar10 = FUN_180532690(dVar17,0x7f800000,param_3,DAT_180579a30);
    return uVar10;
  }
  if (DAT_180579a4c < dVar17) {
    uVar7 = (uint)(dVar17 * _DAT_180579ac0);
    dVar17 = dVar17 - (double)(int)uVar7 * DAT_180579a54;
    auVar12._0_8_ =
         (dVar17 * dVar17 * (DAT_180579a5c * dVar17 + DAT_180579ad0) + dVar17) *
         *(double *)(&DAT_18057fb70 + (ulonglong)(uVar7 & 0x3f) * 8) +
         *(double *)(&DAT_18057fb70 + (ulonglong)(uVar7 & 0x3f) * 8);
    auVar13._4_60_ = auVar12._4_60_;
    auVar13._0_4_ =
         (float)(double)(((ulonglong)(uint)((int)uVar7 >> 6) << 0x34) + (longlong)auVar12._0_8_);
    return auVar13._0_8_ | uVar10;
  }
  uVar10 = FUN_180532690(dVar17,param_2,param_3,DAT_180579a28);
  return uVar10;
}



/* ===== 18051be70 FUN_18051be70 ===== */

uint FUN_18051be70(uint param_1)

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
      return *(uint *)(&DAT_18057a314 + (ulonglong)(param_1 - 1) * 8);
    }
    if (param_1 < 0x719) {
      uVar5 = 0x2d;
      uVar9 = 0;
      uVar7 = 0x2c;
      do {
        uVar8 = uVar5 >> 1;
        if (uVar8 == 0) {
          if (uVar5 != 0) {
            puVar4 = (uint *)(&DAT_18057a310 + uVar9 * 8);
            if (param_1 != *puVar4) {
              puVar4 = (uint *)0x0;
            }
LAB_18051bf11:
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
        puVar4 = (uint *)(&DAT_18057a310 + lVar1 * 8);
        if (param_1 == *puVar4) goto LAB_18051bf11;
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



/* ===== 18051bf40 FUN_18051bf40 ===== */

void FUN_18051bf40(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)FUN_18051bf8c();
  *puVar1 = param_1;
  uVar2 = FUN_18051be70(param_1);
  puVar1 = (undefined4 *)FUN_18051bfb0();
  *puVar1 = uVar2;
  return;
}



/* ===== 18051bf68 FUN_18051bf68 ===== */

void FUN_18051bf68(undefined4 param_1,longlong param_2)

{
  undefined4 uVar1;
  
  *(undefined1 *)(param_2 + 0x38) = 1;
  *(undefined4 *)(param_2 + 0x34) = param_1;
  uVar1 = FUN_18051be70();
  *(undefined4 *)(param_2 + 0x2c) = uVar1;
  *(undefined1 *)(param_2 + 0x30) = 1;
  return;
}



/* ===== 18051bf8c FUN_18051bf8c ===== */

undefined * FUN_18051bf8c(void)

{
  longlong lVar1;
  undefined *puVar2;
  
  lVar1 = FUN_1805298c0();
  puVar2 = (undefined *)(lVar1 + 0x24);
  if (lVar1 == 0) {
    puVar2 = &DAT_180919724;
  }
  return puVar2;
}



/* ===== 18051bfb0 FUN_18051bfb0 ===== */

undefined * FUN_18051bfb0(void)

{
  longlong lVar1;
  undefined *puVar2;
  
  lVar1 = FUN_1805298c0();
  puVar2 = (undefined *)(lVar1 + 0x20);
  if (lVar1 == 0) {
    puVar2 = &DAT_180919720;
  }
  return puVar2;
}



/* ===== 18051bfd4 feof ===== */

/* Library Function - Single Match
    feof
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl feof(FILE *_File)

{
  uint uVar1;
  undefined4 *puVar2;
  
  if (_File == (FILE *)0x0) {
    puVar2 = (undefined4 *)FUN_18051bfb0();
    *puVar2 = 0x16;
    FUN_180527740();
    uVar1 = 0;
  }
  else {
    uVar1 = *(uint *)((longlong)&_File->_base + 4) >> 3 & 1;
  }
  return uVar1;
}



/* ===== 18051c000 ferror ===== */

/* Library Function - Single Match
    ferror
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl ferror(FILE *_File)

{
  uint uVar1;
  undefined4 *puVar2;
  
  if (_File == (FILE *)0x0) {
    puVar2 = (undefined4 *)FUN_18051bfb0();
    *puVar2 = 0x16;
    FUN_180527740();
    uVar1 = 0;
  }
  else {
    uVar1 = *(uint *)((longlong)&_File->_base + 4) >> 4 & 1;
  }
  return uVar1;
}



/* ===== 18051c02c FUN_18051c02c ===== */

undefined * FUN_18051c02c(ulonglong param_1)

{
  int *piVar1;
  undefined **ppuVar2;
  longlong lVar3;
  
  if ((DAT_1805805a0 < param_1) ||
     ((piVar1 = (int *)FUN_180532808(), (ulonglong)(longlong)*piVar1 < param_1 &&
      (param_1 < DAT_180580598)))) {
    lVar3 = FUN_180532800();
    piVar1 = (int *)FUN_180532808();
    return *(undefined **)(lVar3 + (longlong)*piVar1 * 8);
  }
  piVar1 = (int *)FUN_180532808();
  if ((ulonglong)(longlong)*piVar1 < param_1) {
    param_1 = param_1 - DAT_180580598;
    ppuVar2 = &PTR_s_address_in_use_1805805b0;
  }
  else {
    ppuVar2 = (undefined **)FUN_180532800();
  }
  return ppuVar2[param_1];
}



/* ===== 18051c098 FUN_18051c098 ===== */

char * FUN_18051c098(int param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_1805298c0();
  if (lVar2 != 0) {
    if (*(longlong *)(lVar2 + 0x78) == 0) {
      uVar3 = _calloc_base(0x86,1);
      *(undefined8 *)(lVar2 + 0x78) = uVar3;
      FUN_1805277b0(0);
    }
    if (*(longlong *)(lVar2 + 0x78) != 0) {
      FUN_18051c02c((longlong)param_1);
      iVar1 = FUN_1805124f0();
      if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      return *(char **)(lVar2 + 0x78);
    }
  }
  return "Visual C++ CRT: Not enough memory to complete call to strerror.";
}



/* ===== 18051c138 operator()<> ===== */

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
  FUN_18051c170(param_3);
  __acrt_unlock(*param_4);
  return;
}



/* ===== 18051c170 FUN_18051c170 ===== */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_18051c170(undefined8 *param_1)

{
  byte bVar1;
  undefined *puVar2;
  
  if (DAT_180c9f570 != '\0') {
    return;
  }
  LOCK();
  DAT_180c9f564 = 1;
  UNLOCK();
  if (*(int *)*param_1 == 0) {
    if (DAT_180c9f568 != DAT_180919500) {
      bVar1 = (byte)DAT_180919500 & 0x3f;
      (*(code *)((DAT_180919500 ^ DAT_180c9f568) >> bVar1 |
                (DAT_180919500 ^ DAT_180c9f568) << 0x40 - bVar1))(0,0,0);
    }
    puVar2 = &DAT_180c9f918;
  }
  else {
    if (*(int *)*param_1 != 1) goto LAB_18051c1df;
    puVar2 = &DAT_180c9f930;
  }
  FUN_180524af4(puVar2);
LAB_18051c1df:
  if (*(int *)*param_1 == 0) {
    FUN_180524d54(&DAT_18056c5f0,&DAT_18056c610);
  }
  FUN_180524d54(&DAT_18056c618,&DAT_18056c620);
  if (*(int *)param_1[1] == 0) {
    DAT_180c9f570 = '\x01';
    *(undefined1 *)param_1[2] = 1;
  }
  return;
}



/* ===== 18051c230 FUN_18051c230 ===== */

void FUN_18051c230(undefined4 param_1,undefined4 param_2,int param_3)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  HMODULE pHVar4;
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
    pHVar4 = GetModuleHandleW((LPCWSTR)0x0);
    if ((((pHVar4 != (HMODULE)0x0) && ((short)pHVar4->unused == 0x5a4d)) &&
        (piVar5 = (int *)((longlong)&pHVar4->unused + (longlong)pHVar4[0xf].unused),
        *piVar5 == 0x4550)) &&
       ((((short)piVar5[6] == 0x20b && (0xe < (uint)piVar5[0x21])) && (piVar5[0x3e] != 0)))) {
      FUN_18051c344(param_1);
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
    iVar3 = FUN_18052f100();
    if (iVar3 == 1) {
      bVar6 = false;
    }
    else {
      cVar2 = FUN_180532bd0();
      bVar6 = cVar2 == '\0';
    }
    if (local_res18[0] == 0) {
      FUN_18051c314(param_1,bVar6);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}



/* ===== 18051c314 FUN_18051c314 ===== */

void FUN_18051c314(UINT param_1,char param_2)

{
  HANDLE hProcess;
  
  if (param_2 != '\0') {
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,param_1);
  }
  FUN_18051c344(param_1);
                    /* WARNING: Subroutine does not return */
  ExitProcess(param_1);
}



/* ===== 18051c344 FUN_18051c344 ===== */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_18051c344(uint param_1)

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



/* ===== 18051c3a8 FUN_18051c3a8 ===== */

void FUN_18051c3a8(undefined8 param_1)

{
  DAT_180c9f568 = param_1;
  return;
}



/* ===== 18051c3b0 FUN_18051c3b0 ===== */

void FUN_18051c3b0(void)

{
  FUN_18051c230(0,0,1);
  return;
}



/* ===== 18051c3c0 FUN_18051c3c0 ===== */

void FUN_18051c3c0(undefined8 param_1)

{
  FUN_18051c230(param_1,2);
  return;
}



/* ===== 18051c3cc FUN_18051c3cc ===== */

undefined4 FUN_18051c3cc(void)

{
  return DAT_180c9f564;
}



/* ===== 18051c3d4 FUN_18051c3d4 ===== */

void FUN_18051c3d4(undefined8 param_1)

{
  FUN_18051c230(param_1,0,0);
  return;
}



/* ===== 18051c3e0 operator()<> ===== */

/* Library Function - Multiple Matches With Same Base Name
    public: int __cdecl __crt_seh_guarded_call<int>::operator()<class
   <lambda_047e091329b3cc2dd92c1150cfbc4be8>,class <lambda_3126a0d026c48c72336a1719c85146ae> &
   __ptr64,class <lambda_8e8daf2dfdb49c56842017fc8f5e8e6a> >(class
   <lambda_047e091329b3cc2dd92c1150cfbc4be8> && __ptr64,class
   <lambda_3126a0d026c48c72336a1719c85146ae> & __ptr64,class
   <lambda_8e8daf2dfdb49c56842017fc8f5e8e6a> && __ptr64) __ptr64
    public: int __cdecl __crt_seh_guarded_call<int>::operator()<class
   <lambda_055ea3fc45cdc376d473b135b391c6de>,class <lambda_c695f53ca71df4e62c0528096d5d0bf6> &
   __ptr64,class <lambda_872dedf902327e54f4e2de7ca48e001f> >(class
   <lambda_055ea3fc45cdc376d473b135b391c6de> && __ptr64,class
   <lambda_c695f53ca71df4e62c0528096d5d0bf6> & __ptr64,class
   <lambda_872dedf902327e54f4e2de7ca48e001f> && __ptr64) __ptr64
    public: int __cdecl __crt_seh_guarded_call<int>::operator()<class
   <lambda_082dd7c0feb7dbdaf245f261e54a6583>,class <lambda_f3caf1ecae5fe01a9a1a6239afa44510> &
   __ptr64,class <lambda_c640b76c0755ae85b317b35c67c61e6b> >(class
   <lambda_082dd7c0feb7dbdaf245f261e54a6583> && __ptr64,class
   <lambda_f3caf1ecae5fe01a9a1a6239afa44510> & __ptr64,class
   <lambda_c640b76c0755ae85b317b35c67c61e6b> && __ptr64) __ptr64
    public: int __cdecl __crt_seh_guarded_call<int>::operator()<class
   <lambda_0d412022a4b28cc8a401ea49574e8ae6>,class <lambda_a775ed57af18ba8e4d5dc780aa9068fe> &
   __ptr64,class <lambda_975a71a6baa488a08f4e15f6b0339b9e> >(class
   <lambda_0d412022a4b28cc8a401ea49574e8ae6> && __ptr64,class
   <lambda_a775ed57af18ba8e4d5dc780aa9068fe> & __ptr64,class
   <lambda_975a71a6baa488a08f4e15f6b0339b9e> && __ptr64) __ptr64
     36 names - too many to list
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined4
operator()<>(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  
  FUN_1805110a4(*param_2);
  uVar1 = FUN_18051c420(param_3);
  FUN_1805110b0(*param_4);
  return uVar1;
}



/* ===== 18051c420 FUN_18051c420 ===== */

int FUN_18051c420(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 uVar4;
  longlong lVar5;
  
  uVar1 = param_1[1];
  uVar2 = *(undefined8 *)*param_1;
  uVar4 = FUN_1805292d8(uVar2);
  lVar5 = FUN_180511218(*(undefined8 *)param_1[2],1,*(undefined8 *)param_1[3],
                        *(undefined8 *)*param_1,param_1[1]);
  lVar3 = *(longlong *)param_1[3];
  FUN_1805293a0(CONCAT71((int7)((ulonglong)param_1[3] >> 8),uVar4),uVar2,uVar1);
  return -(uint)(lVar5 != lVar3);
}



/* ===== 18051c4a4 FUN_18051c4a4 ===== */

undefined4 FUN_18051c4a4(longlong param_1,FILE *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 local_res8 [8];
  longlong local_res10;
  FILE *local_res18;
  longlong local_res20;
  FILE *local_98;
  FILE *local_90;
  FILE **local_88;
  longlong *local_80;
  longlong *local_78;
  longlong *local_70;
  longlong local_68 [2];
  undefined1 local_58;
  undefined *local_50;
  undefined *puStack_48;
  char local_40;
  undefined4 local_3c;
  char local_38;
  undefined4 local_34;
  char local_30;
  
  local_40 = DAT_180c9f7dc == 0;
  local_68[0] = 0;
  local_58 = 0;
  local_38 = '\0';
  local_30 = '\0';
  if ((bool)local_40) {
    local_50 = PTR_PTR_1809198b8;
    puStack_48 = PTR_DAT_1809198c0;
  }
  local_res10 = param_1;
  local_res18 = param_2;
  if ((param_1 != 0) && (param_2 != (FILE *)0x0)) {
    if ((*(uint *)((longlong)&param_2->_base + 4) >> 0xc & 1) != 0) {
LAB_18051c5a8:
      local_res20 = -1;
      do {
        local_res20 = local_res20 + 1;
      } while (*(char *)(local_res10 + local_res20) != '\0');
      local_88 = &local_res18;
      local_80 = local_68;
      local_78 = &local_res10;
      local_70 = &local_res20;
      local_98 = local_res18;
      local_90 = local_res18;
      uVar3 = operator()<>(local_res8,&local_90,&local_88,&local_98);
      goto LAB_18051c600;
    }
    uVar2 = _fileno(param_2);
    puVar5 = &DAT_1809198d0;
    if (uVar2 + 2 < 2) {
      puVar6 = &DAT_1809198d0;
    }
    else {
      puVar6 = (undefined *)
               ((&DAT_180c9f990)[(longlong)(int)uVar2 >> 6] + (ulonglong)(uVar2 & 0x3f) * 0x48);
    }
    if (puVar6[0x39] == '\0') {
      if (1 < uVar2 + 2) {
        puVar5 = (undefined *)
                 ((&DAT_180c9f990)[(longlong)(int)uVar2 >> 6] + (ulonglong)(uVar2 & 0x3f) * 0x48);
      }
      if ((puVar5[0x3d] & 1) == 0) goto LAB_18051c5a8;
    }
  }
  local_38 = '\x01';
  local_3c = 0x16;
  FUN_180527688(0,0,0,0,0,local_68);
  uVar3 = 0xffffffff;
LAB_18051c600:
  uVar1 = local_3c;
  if (local_40 == '\x02') {
    *(uint *)(local_68[0] + 0x3a8) = *(uint *)(local_68[0] + 0x3a8) & 0xfffffffd;
  }
  if (local_38 != '\0') {
    lVar4 = FUN_1804f84e0(local_68);
    *(undefined4 *)(lVar4 + 0x20) = uVar1;
  }
  if (local_30 != '\0') {
    lVar4 = FUN_1804f84e0(local_68);
    *(undefined4 *)(lVar4 + 0x24) = local_34;
  }
  return uVar3;
}



/* ===== 18051c650 FUN_18051c650 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_18051c650(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  ulonglong uVar5;
  ulonglong uVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 in_ZMM0 [64];
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  double dVar16;
  
  dVar8 = in_ZMM0._0_8_;
  auVar9 = in_ZMM0._0_16_;
  if (DAT_180c9fd94 == 0) {
    dVar7 = ABS(dVar8);
    if ((ulonglong)dVar7 < (ulonglong)DAT_18057a550) {
      dVar16 = (double)(int)(((ulonglong)dVar8 >> 0x34) - _DAT_18057a5a0);
      dVar11 = (double)((ulonglong)dVar8 & (ulonglong)DAT_18057a590);
      dVar10 = dVar8;
      if (dVar16 == DAT_18057a6a0) {
        dVar11 = (double)((ulonglong)dVar11 | (ulonglong)DAT_18057a5f0) - DAT_18057a5f0;
        dVar10 = (double)((ulonglong)dVar11 & (ulonglong)DAT_18057a590);
        dVar16 = (double)(int)((uint)((ulonglong)dVar11 >> 0x34) - _DAT_18057a6b0);
        dVar11 = dVar10;
      }
      uVar5 = ((ulonglong)dVar10 & _DAT_18057a5c0) + ((ulonglong)dVar10 & _DAT_18057a5d0) * 2;
      if ((double)((ulonglong)(dVar8 - DAT_18057a5f0) & _DAT_18057a6d0) < DAT_18057a6c0) {
        dVar8 = dVar8 - DAT_18057a5f0;
        dVar7 = dVar8 / (DAT_18057a5e0 + dVar8);
        dVar10 = dVar7 + dVar7;
        dVar11 = dVar10 * dVar10;
        dVar16 = dVar11 * dVar10;
        return dVar8 + (((DAT_18057a6f0 * dVar11 + DAT_18057a6e0) * dVar16 +
                        (DAT_18057a710 * dVar11 + DAT_18057a700) * dVar16 * dVar16 * dVar10) -
                       dVar8 * dVar7);
      }
      uVar6 = uVar5 >> 0x2c;
      if (0.0 < dVar8) {
        dVar7 = ((double)(uVar5 | (ulonglong)DAT_18057a620) -
                (double)((ulonglong)dVar11 | (ulonglong)DAT_18057a620)) *
                *(double *)(&DAT_18057fd80 + uVar6 * 8);
        dVar8 = dVar7 * dVar7;
        return *(double *)(&DAT_180580c30 + uVar6 * 8) + DAT_18057a720 * dVar16 +
               *(double *)(&DAT_180581440 + uVar6 * 8) +
               (DAT_18057a730 * dVar16 -
               ((DAT_18057a660 * dVar7 + DAT_18057a650) * dVar8 + dVar7 +
               ((DAT_18057a690 * dVar7 + DAT_18057a680) * dVar7 + DAT_18057a670) * dVar8 * dVar8));
      }
      if (dVar8 == 0.0) {
        dVar8 = (double)FUN_180532c30(dVar7,param_2,DAT_18057a740);
        return dVar8;
      }
    }
    else {
      if (dVar8 == DAT_18057a550) {
        return dVar8;
      }
      if (dVar8 != DAT_18057a540) {
        return (double)((ulonglong)dVar8 | _DAT_18057a570);
      }
    }
    dVar8 = (double)FUN_180532c30(dVar7,param_2,DAT_18057a744);
    return dVar8;
  }
  auVar13 = vpsrlq_avx(auVar9,0x34);
  auVar1._8_8_ = _UNK_18057a5a8;
  auVar1._0_8_ = _DAT_18057a5a0;
  auVar13 = vpsubq_avx(auVar13,auVar1);
  auVar13 = vcvtdq2pd_avx(auVar13);
  dVar7 = auVar13._0_8_;
  auVar13._8_8_ = _UNK_18057a558;
  auVar13._0_8_ = DAT_18057a550;
  auVar13 = vpand_avx(auVar9,auVar13);
  if (auVar13._0_8_ == DAT_18057a550) {
    if (dVar8 != DAT_18057a550) {
      if (dVar8 == DAT_18057a540) goto LAB_18051cb20;
      dVar8 = (double)FUN_180532c30(param_1,(ulonglong)dVar8 | _DAT_18057a570,DAT_18057a748);
    }
    return dVar8;
  }
  if (0.0 < dVar8) {
    auVar13 = vpand_avx(auVar9,_DAT_18057a590);
    if (dVar7 == DAT_18057a6a0) {
      auVar9._8_8_ = _UNK_18057a5f8;
      auVar9._0_8_ = DAT_18057a5f0;
      auVar9 = vpor_avx(auVar13,auVar9);
      auVar12._8_8_ = 0;
      auVar12._0_8_ = auVar9._0_8_ - DAT_18057a5f0;
      auVar13 = vpsrlq_avx(auVar12,0x34);
      auVar9 = vpand_avx(auVar12,_DAT_18057a590);
      auVar14._4_12_ = _UNK_18057a6b4;
      auVar14._0_4_ = _DAT_18057a6b0;
      auVar13 = vpsubd_avx(auVar13,auVar14);
      auVar13 = vcvtdq2pd_avx(auVar13);
      dVar7 = auVar13._0_8_;
      auVar13 = auVar9;
    }
    auVar2._8_8_ = _UNK_18057a5c8;
    auVar2._0_8_ = _DAT_18057a5c0;
    auVar1 = vpand_avx(auVar9,auVar2);
    auVar3._8_8_ = _UNK_18057a5d8;
    auVar3._0_8_ = _DAT_18057a5d0;
    auVar14 = vpand_avx(auVar9,auVar3);
    auVar14 = vpsllq_avx(auVar14,1);
    auVar1 = vpaddq_avx(auVar14,auVar1);
    auVar15._8_8_ = 0;
    auVar15._0_8_ = dVar8 - DAT_18057a5f0;
    auVar4._8_8_ = _UNK_18057a6d8;
    auVar4._0_8_ = _DAT_18057a6d0;
    auVar14 = vpand_avx(auVar15,auVar4);
    if (auVar14._0_8_ < DAT_18057a6c0) {
      dVar11 = auVar9._0_8_ - DAT_18057a5f0;
      dVar16 = dVar11 / (DAT_18057a5e0 + dVar11);
      dVar8 = dVar16 + dVar16;
      dVar7 = dVar8 * dVar8;
      dVar10 = dVar7 * dVar8;
      return dVar11 + (((dVar7 * DAT_18057a710 + DAT_18057a700) * dVar10 * dVar10 * dVar8 +
                       (dVar7 * DAT_18057a6f0 + DAT_18057a6e0) * dVar10) - dVar11 * dVar16);
    }
    uVar5 = auVar1._0_8_ >> 0x2c;
    auVar9 = vpor_avx(auVar13,_DAT_18057a620);
    auVar13 = vpor_avx(auVar1,_DAT_18057a620);
    dVar8 = (auVar13._0_8_ - auVar9._0_8_) * *(double *)(&DAT_18057fd80 + uVar5 * 8);
    dVar10 = dVar8 * dVar8;
    return dVar7 * DAT_18057a720 + *(double *)(&DAT_180580c30 + uVar5 * 8) +
           *(double *)(&DAT_180581440 + uVar5 * 8) +
           (dVar7 * DAT_18057a730 -
           ((dVar8 * (dVar8 * DAT_18057a690 + DAT_18057a680) + DAT_18057a670) * dVar10 * dVar10 +
           (dVar8 * DAT_18057a660 + DAT_18057a650) * dVar10 + dVar8));
  }
  if (dVar8 == 0.0) {
    dVar8 = (double)FUN_180532c30(param_1,DAT_18057a540,DAT_18057a740);
    return dVar8;
  }
LAB_18051cb20:
  dVar8 = (double)FUN_180532c30(param_1,DAT_18057a560,DAT_18057a744);
  return dVar8;
}



/* ===== 18051cb80 FUN_18051cb80 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_18051cb80(double param_1)

{
  ulonglong uVar1;
  uint uVar2;
  int iVar3;
  double dVar4;
  longlong lVar5;
  double dVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 in_ZMM1 [64];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined1 auVar21 [16];
  
  if (((byte)DAT_180c9fd94 & 3) != 3) {
    dVar11 = (double)FUN_18051cba0();
    return dVar11;
  }
  uVar10 = (uint)((ulonglong)param_1 >> 0x20);
  uVar8 = uVar10 >> 0x14;
  lVar9 = 0;
  dVar4 = in_ZMM1._0_8_;
  uVar2 = in_ZMM1._4_4_;
  dVar11 = param_1;
  if ((0x7fd < (uVar10 >> 0x14) - 1) || (0x7f < (uVar2 >> 0x14 & 0x7ff) - 0x3be)) {
    uVar7 = (longlong)dVar4 * 2;
    if (0xffdffffffffffffe < uVar7 - 1) {
      if ((uVar7 == 0) || (dVar11 = dVar4, param_1 == 1.0)) {
        if (0xfff0000000000000 < ((ulonglong)dVar11 ^ 0x8000000000000) * 2) goto LAB_180532ed8;
      }
      else {
        uVar1 = (longlong)param_1 * 2;
        if ((0xffe0000000000000 < uVar1) || (0xffe0000000000000 < uVar7)) {
LAB_180532ed8:
          return param_1 + dVar4;
        }
        if (uVar1 != 0x7fe0000000000000) {
          if ((uint)(uVar1 < 0x7fe0000000000000) == (uVar2 >> 0x1f ^ 1)) {
            return 0.0;
          }
          return dVar4 * dVar4;
        }
      }
      return DAT_1808ac500;
    }
    if (0xffdffffffffffffe < (longlong)param_1 * 2 - 1U) {
      dVar11 = param_1 * param_1;
      if ((((((ulonglong)param_1 & 0x8000000000000000) != 0) &&
           (uVar10 = uVar2 >> 0x14 & 0x7ff, uVar10 - 0x3ff < 0x35)) &&
          (uVar7 = 1L << ((ulonglong)(0x433 - uVar10) & 0x3f), ((ulonglong)dVar4 & uVar7 - 1) == 0))
         && (((ulonglong)dVar4 & uVar7) != 0)) {
        dVar11 = (double)((ulonglong)dVar11 ^ DAT_1808adeb0);
        lVar9 = 1;
      }
      if ((longlong)param_1 * 2 == 0) {
        if (((ulonglong)dVar4 & 0x8000000000000000) == 0) {
          return dVar11;
        }
        dVar11 = (double)FUN_1805335c0(lVar9);
        return dVar11;
      }
      if (((ulonglong)dVar4 & 0x8000000000000000) == 0) {
        return dVar11;
      }
      return DAT_1808ac500 / dVar11;
    }
    if (((ulonglong)param_1 & 0x8000000000000000) != 0) {
      uVar8 = uVar2 >> 0x14 & 0x7ff;
      if (uVar8 < 0x3ff) {
LAB_180533094:
        dVar11 = (double)FUN_180533620();
        return dVar11;
      }
      if (uVar8 < 0x434) {
        uVar7 = 1L << ((ulonglong)(0x433 - uVar8) & 0x3f);
        if (((ulonglong)dVar4 & uVar7 - 1) != 0) goto LAB_180533094;
        iVar3 = 2 - (uint)((uVar7 & (ulonglong)dVar4) != 0);
      }
      else {
        iVar3 = 2;
      }
      dVar11 = ABS(param_1);
      uVar8 = uVar10 >> 0x14 & 0x7ff;
      lVar9 = 0x80000;
      if (iVar3 != 1) {
        lVar9 = 0;
      }
    }
    uVar10 = uVar2 >> 0x14 & 0x7ff;
    if (0x7f < uVar10 - 0x3be) {
      if (dVar11 == 1.0) {
        return DAT_1808ac500;
      }
      if (uVar10 < 0x3be) {
        if ((ulonglong)dVar11 < 0x3ff0000000000001) {
          return DAT_1808ac500 - dVar4;
        }
        return dVar4 + DAT_1808ac500;
      }
      if (0x3ff0000000000000 < (ulonglong)dVar11 == uVar2 >> 0x14 < 0x800) {
        dVar11 = (double)FUN_180533660();
        return dVar11;
      }
      dVar11 = (double)FUN_1805336b0(0);
      return dVar11;
    }
    if (uVar8 == 0) {
      dVar11 = (double)((longlong)ABS(param_1 * DAT_18057a758) + 0xfcc0000000000000);
    }
  }
  if (dVar4 == 1.0) {
    return param_1;
  }
  if (dVar11 == 1.0) {
    auVar13._8_8_ = 0;
    auVar13._0_8_ = DAT_1808ac500;
    auVar15._0_8_ = -(ulonglong)(lVar9 == 0);
    auVar15._8_8_ = 0xffffffffffffffff;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = DAT_1808acdb8;
    auVar12 = vblendvpd_avx(auVar12,auVar13,auVar15);
    return auVar12._0_8_;
  }
  auVar21._8_8_ = 0;
  auVar21._0_8_ = DAT_1808acdb8;
  uVar10 = (uint)((longlong)dVar11 + 0xc0196aab00000000U >> 0x20);
  lVar5 = (ulonglong)(uVar10 >> 0xd & 0x7f) * 0x20;
  dVar20 = (double)((int)uVar10 >> 0x14);
  dVar18 = dVar20 * DAT_180582cf0 + *(double *)(&DAT_180582d48 + lVar5);
  dVar19 = (double)((longlong)dVar11 - ((longlong)dVar11 + 0xc0196aab00000000U & 0xfff0000000000000)
                   ) * *(double *)(&DAT_180582d38 + lVar5) + DAT_1808acdb8;
  dVar17 = dVar19 * DAT_180582d00 * dVar19;
  dVar11 = dVar18 + dVar19;
  dVar6 = dVar17 + dVar11;
  dVar18 = dVar17 * dVar19 *
           (dVar17 * (dVar17 * (dVar19 * DAT_180582d30 + DAT_180582d28) +
                     dVar19 * DAT_180582d20 + DAT_180582d18) +
           DAT_180582d10 * dVar19 + DAT_180582d08) +
           dVar19 * dVar19 * DAT_180582d00 + (double)((ulonglong)dVar17 ^ DAT_1808adeb0) +
           dVar20 * DAT_180582cf8 + *(double *)(&DAT_180582d50 + lVar5) + (dVar18 - dVar11) + dVar19
           + (dVar11 - dVar6) + dVar17;
  dVar11 = dVar18 + dVar6;
  dVar17 = dVar11 * dVar4;
  uVar10 = (uint)((ulonglong)dVar17 >> 0x34) & 0x7ff;
  if (0x3e < uVar10 - 0x3c9) {
    if (0x7fffffff < uVar10 - 0x3c9) {
      if ((int)lVar9 == 0) {
        return dVar17 + DAT_1808ac500;
      }
      return (double)((ulonglong)(dVar17 + DAT_1808ac500) ^ DAT_1808adeb0);
    }
    if (0x408 < uVar10) {
      if (((ulonglong)dVar17 & 0x8000000000000000) == 0) {
        dVar11 = (double)FUN_180533660(lVar9);
        return dVar11;
      }
      dVar11 = (double)FUN_1805336b0();
      return dVar11;
    }
    uVar10 = 0;
  }
  dVar19 = DAT_180581c80 * dVar17 + DAT_180581c88;
  uVar7 = (ulonglong)dVar19 >> 0x10;
  dVar19 = (double)(int)((ulonglong)dVar19 >> 0x10);
  dVar11 = dVar19 * DAT_180581c98 + dVar19 * DAT_180581c90 + dVar17 +
           dVar4 * ((dVar6 - dVar11) + dVar18) +
           dVar11 * dVar4 + (double)((ulonglong)dVar17 ^ DAT_1808adeb0);
  dVar4 = dVar11 * dVar11;
  dVar6 = (double)((lVar9 + uVar7 << 0x2c) + *(longlong *)(&DAT_180581cf8 + (uVar7 & 0xff) * 0x10));
  dVar11 = dVar4 * dVar4 * (DAT_180581cb8 * dVar11 + DAT_180581cb0) +
           dVar4 * (DAT_180581ca8 * dVar11 + DAT_180581ca0) +
           dVar11 + *(double *)(&DAT_180581cf0 + (uVar7 & 0xff) * 0x10);
  if (uVar10 == 0) {
    if ((uVar7 & 0x80000000) == 0) {
      dVar6 = (double)FUN_180533550((dVar11 * (double)((longlong)dVar6 + -0x3f10000000000000) +
                                    (double)((longlong)dVar6 + -0x3f10000000000000)) * DAT_18057a760
                                   );
    }
    else {
      auVar16._8_8_ = 0;
      auVar16._0_8_ = DAT_1808ac500;
      dVar6 = (double)((longlong)dVar6 + 0x3fe0000000000000);
      dVar4 = dVar6 + dVar6 * dVar11;
      if ((double)((ulonglong)dVar4 & _DAT_1808adea0) < DAT_1808ac500) {
        auVar14._8_8_ = 0;
        auVar14._0_8_ = dVar4;
        auVar12 = vcmpsd_avx(auVar14,ZEXT816(0),1);
        auVar12 = vblendvpd_avx(auVar16,auVar21,auVar12);
        dVar17 = auVar12._0_8_;
        dVar4 = ((dVar6 - dVar4) + dVar6 * dVar11 + (dVar17 - (dVar17 + dVar4)) + dVar4 +
                dVar17 + dVar4) - dVar17;
        if (dVar4 == 0.0) {
          dVar4 = (double)((ulonglong)dVar6 & 0x8000000000000000);
        }
      }
      dVar6 = (double)FUN_180533590(dVar4 * DAT_18057a750);
    }
  }
  else {
    dVar6 = dVar6 * dVar11 + dVar6;
  }
  return dVar6;
}



/* ===== 18051cba0 FUN_18051cba0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18051cba0(double param_1)

{
  double dVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  double dVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  double dVar9;
  uint uVar10;
  double dVar11;
  undefined1 in_XMM1 [16];
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  
  uVar8 = (uint)((ulonglong)param_1 >> 0x20);
  uVar3 = uVar8 >> 0x14;
  uVar10 = 0;
  dVar14 = in_XMM1._0_8_;
  uVar2 = in_XMM1._4_4_;
  dVar5 = param_1;
  if ((0x7fd < (uVar8 >> 0x14) - 1) || (0x7f < (uVar2 >> 0x14 & 0x7ff) - 0x3be)) {
    if (0xffdffffffffffffe < (longlong)dVar14 * 2 - 1U) {
      return;
    }
    if (0xffdffffffffffffe < (longlong)param_1 * 2 - 1U) {
      if ((((((ulonglong)param_1 & 0x8000000000000000) != 0) &&
           (uVar8 = uVar2 >> 0x14 & 0x7ff, uVar8 - 0x3ff < 0x35)) &&
          (uVar7 = 1L << (0x33U - (char)uVar8 & 0x3f), ((ulonglong)dVar14 & uVar7 - 1) == 0)) &&
         (((ulonglong)dVar14 & uVar7) != 0)) {
        uVar10 = 1;
      }
      if ((longlong)param_1 * 2 != 0) {
        return;
      }
      if (((ulonglong)dVar14 & 0x8000000000000000) == 0) {
        return;
      }
      FUN_1805335c0(uVar10);
      return;
    }
    if (((ulonglong)param_1 & 0x8000000000000000) != 0) {
      uVar3 = uVar2 >> 0x14 & 0x7ff;
      if (uVar3 < 0x3ff) {
LAB_18051ce4b:
        FUN_180533620();
        return;
      }
      if (uVar3 < 0x434) {
        uVar7 = 1L << (0x33U - (char)uVar3 & 0x3f);
        if (((ulonglong)dVar14 & uVar7 - 1) != 0) goto LAB_18051ce4b;
        iVar4 = 2 - (uint)((uVar7 & (ulonglong)dVar14) != 0);
      }
      else {
        iVar4 = 2;
      }
      dVar5 = ABS(param_1);
      uVar3 = uVar8 >> 0x14 & 0x7ff;
      uVar10 = 0x80000;
      if (iVar4 != 1) {
        uVar10 = 0;
      }
    }
    uVar8 = uVar2 >> 0x14 & 0x7ff;
    if (0x7f < uVar8 - 0x3be) {
      if (dVar5 == 1.0) {
        return;
      }
      if (uVar8 < 0x3be) {
        return;
      }
      if (0x3ff0000000000000 < (ulonglong)dVar5 == uVar2 >> 0x14 < 0x800) {
        FUN_180533660();
        return;
      }
      FUN_1805336b0(0);
      return;
    }
    if (uVar3 == 0) {
      dVar5 = (double)((longlong)ABS(param_1 * DAT_18057a758) + 0xfcc0000000000000);
    }
  }
  if (dVar14 == 1.0) {
    return;
  }
  if (dVar5 == 1.0) {
    return;
  }
  uVar18 = SUB84(DAT_1808ac500,0);
  uVar19 = (undefined4)((ulonglong)DAT_1808ac500 >> 0x20);
  dVar9 = (double)((longlong)dVar5 - ((longlong)dVar5 + 0xc0196aab00000000U & 0xfff0000000000000));
  uVar8 = (uint)((longlong)dVar5 + 0xc0196aab00000000U >> 0x20);
  lVar6 = (ulonglong)(uVar8 >> 0xd & 0x7f) * 0x20;
  dVar15 = (double)((int)uVar8 >> 0x14);
  dVar5 = (double)((longlong)dVar9 + 0x80000000U & 0xffffffff00000000);
  dVar17 = (dVar9 - dVar5) * *(double *)(&DAT_180582d38 + lVar6);
  dVar12 = dVar5 * *(double *)(&DAT_180582d38 + lVar6) - DAT_1808ac500;
  dVar5 = dVar15 * DAT_180582cf0 + *(double *)(&DAT_180582d48 + lVar6);
  dVar9 = dVar17 + dVar12;
  dVar13 = dVar5 + dVar9;
  dVar16 = dVar12 * DAT_180582d00 * dVar12;
  dVar1 = dVar16 + dVar13;
  dVar11 = dVar9 * DAT_180582d00 * dVar9;
  dVar5 = (((dVar9 * DAT_180582d30 + DAT_180582d28) * dVar11 + dVar9 * DAT_180582d20 + DAT_180582d18
           ) * dVar11 + dVar9 * DAT_180582d10 + DAT_180582d08) * dVar11 * dVar9 +
          dVar15 * DAT_180582cf8 + *(double *)(&DAT_180582d50 + lVar6) + (dVar5 - dVar13) + dVar9 +
          (dVar12 * DAT_180582d00 + dVar9 * DAT_180582d00) * dVar17 + (dVar13 - dVar1) + dVar16;
  dVar13 = dVar5 + dVar1;
  dVar9 = (double)((ulonglong)dVar13 & 0xfffffffff8000000);
  dVar15 = (double)(CONCAT44((int)((ulonglong)dVar9 >> 0x20),SUB84(dVar13,0)) & 0xfffffffff8000000)
           * (double)((ulonglong)dVar14 & 0xfffffffff8000000);
  uVar8 = (uint)((ulonglong)dVar15 >> 0x34) & 0x7ff;
  if (0x3e < uVar8 - 0x3c9) {
    if (0x7fffffff < uVar8 - 0x3c9) {
      return;
    }
    if (0x408 < uVar8) {
      if (((ulonglong)dVar15 & 0x8000000000000000) == 0) {
        FUN_180533660(uVar10);
        return;
      }
      FUN_1805336b0();
      return;
    }
    uVar8 = 0;
  }
  dVar11 = dVar15 * DAT_180581c80 + DAT_180581c88;
  uVar7 = (ulonglong)dVar11 >> 0x10;
  dVar11 = (double)(int)((ulonglong)dVar11 >> 0x10);
  lVar6 = (uVar10 + uVar7 << 0x2c) + *(longlong *)(&DAT_180581cf8 + (uVar7 & 0xff) * 0x10);
  dVar14 = dVar11 * DAT_180581c90 + dVar15 + dVar11 * DAT_180581c98 +
           ((dVar1 - dVar13) + dVar5 + (dVar13 - dVar9)) * dVar14 +
           (dVar14 - (double)((ulonglong)dVar14 & 0xfffffffff8000000)) * dVar9;
  dVar5 = dVar14 * dVar14;
  dVar5 = (dVar14 * DAT_180581ca8 + DAT_180581ca0) * dVar5 +
          *(double *)(&DAT_180581cf0 + (uVar7 & 0xff) * 0x10) + dVar14 +
          (dVar14 * DAT_180581cb8 + DAT_180581cb0) * dVar5 * dVar5;
  if (uVar8 == 0) {
    if ((uVar7 & 0x80000000) == 0) {
      FUN_180533550(((double)(lVar6 + -0x3f10000000000000) * dVar5 +
                    (double)(lVar6 + -0x3f10000000000000)) * DAT_18057a760);
    }
    else {
      dVar14 = (double)(lVar6 + 0x3fe0000000000000);
      dVar5 = dVar14 * dVar5;
      dVar9 = dVar14 + dVar5;
      if ((double)CONCAT44((uint)((ulonglong)dVar9 >> 0x20) & _UNK_1808adea4,
                           SUB84(dVar9,0) & _DAT_1808adea0) < DAT_1808ac500) {
        if (dVar9 < 0.0) {
          uVar18 = (undefined4)DAT_1808acdb8;
          uVar19 = (undefined4)((ulonglong)DAT_1808acdb8 >> 0x20);
        }
        dVar13 = (double)CONCAT44(uVar19,uVar18) + dVar9;
        dVar9 = ((dVar14 - dVar9) + dVar5 + ((double)CONCAT44(uVar19,uVar18) - dVar13) + dVar9 +
                dVar13) - (double)CONCAT44(uVar19,uVar18);
        if (dVar9 == 0.0) {
          dVar9 = (double)((ulonglong)dVar14 & 0x8000000000000000);
        }
      }
      FUN_180533590(lVar6,uVar7,dVar9 * DAT_18057a750);
    }
  }
  return;
}



/* ===== 18051d3c0 FUN_18051d3c0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_18051d3c0(void)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  ulonglong uVar7;
  ulonglong uVar8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 in_ZMM0 [64];
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  double dVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  double dVar20;
  
  dVar9 = in_ZMM0._0_8_;
  auVar10 = in_ZMM0._0_16_;
  if (DAT_180c9fd94 == 0) {
    if ((double)((ulonglong)dVar9 & (ulonglong)DAT_18057a780) == DAT_18057a780) {
      if (dVar9 == DAT_18057a780) {
        return dVar9;
      }
      if (dVar9 != DAT_18057a770) {
        return (double)((ulonglong)dVar9 | _DAT_18057a7a0);
      }
    }
    else {
      dVar20 = (double)(int)(((ulonglong)dVar9 >> 0x34) - _DAT_18057a7b0);
      if (0.0 < dVar9) {
        dVar13 = (double)((ulonglong)dVar9 & (ulonglong)DAT_18057a7d0);
        dVar12 = dVar9;
        if (dVar20 == DAT_18057a8f0) {
          dVar20 = (double)((ulonglong)dVar13 | (ulonglong)DAT_18057a860) - DAT_18057a860;
          dVar12 = (double)((ulonglong)dVar20 & (ulonglong)DAT_18057a7d0);
          dVar20 = (double)(int)((uint)((ulonglong)dVar20 >> 0x34) - _DAT_18057a900);
          dVar13 = dVar12;
        }
        uVar7 = ((ulonglong)dVar12 & _DAT_18057a7e0) + ((ulonglong)dVar12 & _DAT_18057a7f0) * 2;
        if ((double)((ulonglong)(dVar9 - DAT_18057a860) & _DAT_18057a950) < DAT_18057a910) {
          dVar9 = dVar9 - DAT_18057a860;
          dVar20 = dVar9 / (DAT_18057a850 + dVar9);
          dVar12 = dVar20 + dVar20;
          dVar13 = dVar12 * dVar12;
          dVar14 = dVar13 * dVar12;
          dVar16 = (double)((ulonglong)dVar9 & (ulonglong)DAT_18057a9a0);
          dVar9 = (((DAT_18057a970 * dVar13 + DAT_18057a960) * dVar14 +
                   (DAT_18057a990 * dVar13 + DAT_18057a980) * dVar14 * dVar14 * dVar12) -
                  dVar9 * dVar20) + (dVar9 - dVar16);
          return dVar16 * DAT_18057a820 + dVar9 * DAT_18057a820 + dVar9 * DAT_18057a810 +
                 dVar16 * DAT_18057a810;
        }
        uVar8 = uVar7 >> 0x2c;
        dVar12 = ((double)(uVar7 | (ulonglong)DAT_18057a870) -
                 (double)((ulonglong)dVar13 | (ulonglong)DAT_18057a870)) *
                 *(double *)(&DAT_18057fd80 + uVar8 * 8);
        dVar9 = dVar12 * dVar12;
        return *(double *)(&DAT_180583d40 + uVar8 * 8) + DAT_18057a830 * dVar20 +
               *(double *)(&DAT_180584550 + uVar8 * 8) +
               (DAT_18057a840 * dVar20 -
               ((DAT_18057a8b0 * dVar12 + _DAT_18057a8a0) * dVar9 + dVar12 +
               ((DAT_18057a8e0 * dVar12 + DAT_18057a8d0) * dVar12 + DAT_18057a8c0) * dVar9 * dVar9)
               * DAT_18057a800);
      }
      if (dVar9 == 0.0) {
        dVar9 = (double)FUN_180532c10();
        return dVar9;
      }
    }
    dVar9 = (double)FUN_180532c10();
    return dVar9;
  }
  auVar17 = vpsrlq_avx(auVar10,0x34);
  auVar1._8_8_ = _UNK_18057a7b8;
  auVar1._0_8_ = _DAT_18057a7b0;
  auVar17 = vpsubq_avx(auVar17,auVar1);
  auVar17 = vcvtdq2pd_avx(auVar17);
  dVar20 = auVar17._0_8_;
  auVar17._8_8_ = _UNK_18057a788;
  auVar17._0_8_ = DAT_18057a780;
  auVar17 = vpand_avx(auVar10,auVar17);
  if (auVar17._0_8_ == DAT_18057a780) {
    if (dVar9 != DAT_18057a780) {
      if (dVar9 == DAT_18057a770) goto LAB_18051d910;
      dVar9 = (double)FUN_180532c10();
    }
    return dVar9;
  }
  if (0.0 < dVar9) {
    auVar17 = vpand_avx(auVar10,_DAT_18057a7d0);
    if (dVar20 == DAT_18057a8f0) {
      auVar10._8_8_ = _UNK_18057a868;
      auVar10._0_8_ = DAT_18057a860;
      auVar10 = vpor_avx(auVar17,auVar10);
      auVar15._8_8_ = 0;
      auVar15._0_8_ = auVar10._0_8_ - DAT_18057a860;
      auVar17 = vpsrlq_avx(auVar15,0x34);
      auVar10 = vpand_avx(auVar15,_DAT_18057a7d0);
      auVar18._4_12_ = _UNK_18057a904;
      auVar18._0_4_ = _DAT_18057a900;
      auVar17 = vpsubd_avx(auVar17,auVar18);
      auVar17 = vcvtdq2pd_avx(auVar17);
      dVar20 = auVar17._0_8_;
      auVar17 = auVar10;
    }
    auVar2._8_8_ = _UNK_18057a7e8;
    auVar2._0_8_ = _DAT_18057a7e0;
    auVar1 = vpand_avx(auVar10,auVar2);
    auVar3._8_8_ = _UNK_18057a7f8;
    auVar3._0_8_ = _DAT_18057a7f0;
    auVar18 = vpand_avx(auVar10,auVar3);
    auVar18 = vpsllq_avx(auVar18,1);
    auVar1 = vpaddq_avx(auVar18,auVar1);
    auVar19._8_8_ = 0;
    auVar19._0_8_ = dVar9 - DAT_18057a860;
    auVar6._8_8_ = _UNK_18057a958;
    auVar6._0_8_ = _DAT_18057a950;
    auVar18 = vpand_avx(auVar19,auVar6);
    if (auVar18._0_8_ < DAT_18057a910) {
      dVar13 = auVar10._0_8_ - DAT_18057a860;
      dVar14 = dVar13 / (DAT_18057a850 + dVar13);
      dVar9 = dVar14 + dVar14;
      dVar20 = dVar9 * dVar9;
      dVar12 = dVar20 * dVar9;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = dVar13;
      auVar10 = vpand_avx(auVar11,_DAT_18057a9a0);
      dVar16 = auVar10._0_8_;
      dVar9 = (((dVar20 * DAT_18057a970 + DAT_18057a960) * dVar12 +
               (dVar20 * DAT_18057a990 + DAT_18057a980) * dVar12 * dVar12 * dVar9) - dVar13 * dVar14
              ) + (dVar13 - dVar16);
      return dVar16 * DAT_18057a820 + dVar9 * DAT_18057a820 + dVar9 * DAT_18057a810 +
             dVar16 * DAT_18057a810;
    }
    uVar7 = auVar1._0_8_ >> 0x2c;
    auVar4._8_8_ = _UNK_18057a878;
    auVar4._0_8_ = DAT_18057a870;
    auVar10 = vpor_avx(auVar17,auVar4);
    auVar5._8_8_ = _UNK_18057a878;
    auVar5._0_8_ = DAT_18057a870;
    auVar17 = vpor_avx(auVar1,auVar5);
    dVar9 = (auVar17._0_8_ - auVar10._0_8_) * *(double *)(&DAT_18057fd80 + uVar7 * 8);
    dVar12 = dVar9 * dVar9;
    return dVar20 * DAT_18057a830 + *(double *)(&DAT_180583d40 + uVar7 * 8) +
           *(double *)(&DAT_180584550 + uVar7 * 8) +
           (dVar20 * DAT_18057a840 -
           ((dVar9 * (dVar9 * DAT_18057a8e0 + DAT_18057a8d0) + DAT_18057a8c0) * dVar12 * dVar12 +
           (dVar9 * DAT_18057a8b0 + DAT_18057a870) * dVar12 + dVar9) * DAT_18057a800);
  }
  if (dVar9 == 0.0) {
    dVar9 = (double)FUN_180532c10();
    return dVar9;
  }
LAB_18051d910:
  dVar9 = (double)FUN_180532c10();
  return dVar9;
}



/* ===== 18051d970 FUN_18051d970 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_18051d970(double param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  ulonglong uVar3;
  uint uVar4;
  undefined8 in_RCX;
  double dVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  uint uVar9;
  double dVar10;
  undefined1 auVar11 [16];
  
  auVar6._8_8_ = 0;
  auVar6._0_8_ = param_1;
  dVar5 = ABS(param_1);
  if ((longlong)dVar5 < (longlong)DAT_18057aa60) {
    if (DAT_180c9fd94 != 0) {
      auVar1._8_8_ = 0;
      auVar1._0_8_ = DAT_18057aa40;
      auVar1 = vcmpsd_avx(auVar6,auVar1,2);
      auVar2._8_8_ = 0;
      auVar2._0_8_ = DAT_18057aa48;
      auVar6 = vcmpsd_avx(auVar6,auVar2,5);
      if (NAN((double)CONCAT44(auVar6._4_4_ & auVar1._4_4_,auVar6._0_4_ & auVar1._0_4_))) {
        if ((ulonglong)ABS(param_1) <= (ulonglong)DAT_18057aaa0) {
          return param_1 + DAT_18057aa98;
        }
        auVar8._8_8_ = 0;
        auVar8._0_8_ = param_1 * DAT_18057aa58;
        auVar6 = vroundsd_avx(auVar8,auVar8,3);
        uVar4 = (uint)(param_1 * DAT_18057aa58);
        dVar5 = auVar6._0_8_ * DAT_18057aa88 + auVar6._0_8_ * DAT_18057aa80 + param_1;
        uVar3 = (ulonglong)(uVar4 & 0x3f);
        uVar4 = (int)uVar4 >> 6;
        dVar5 = ((dVar5 * (dVar5 * (dVar5 * (dVar5 * _DAT_18057a9d0 + DAT_18057a9e0) + DAT_18057aa10
                                   ) + DAT_18057a9f0) + DAT_18057aa00) * dVar5 * dVar5 + dVar5) *
                *(double *)(&DAT_18057fb70 + uVar3 * 8) + *(double *)(&DAT_180584f60 + uVar3 * 8) +
                *(double *)(&DAT_180584d60 + uVar3 * 8);
        if ((-0x3fe < (int)uVar4) || ((-0x3ff < (int)uVar4 && (DAT_18057aa98 <= dVar5)))) {
          auVar7._8_8_ = 0;
          auVar7._0_8_ = dVar5;
          auVar11._8_8_ = 0;
          auVar11._0_8_ = (ulonglong)uVar4 << 0x34;
          auVar6 = vpaddq_avx(auVar7,auVar11);
          return auVar6._0_8_;
        }
        dVar5 = dVar5 * (double)(1L << ((char)uVar4 + 0x32U & 0x3f));
      }
      else if (DAT_18057aa40 < param_1) {
        dVar5 = (double)FUN_180532300(in_RCX,0x7ff0000000000000,DAT_18057a9c8);
      }
      else if (param_1 < DAT_18057aa50) {
        dVar5 = (double)FUN_180532300(in_RCX,0,DAT_18057a9c4);
      }
      else {
        dVar5 = _DAT_18057aa90;
      }
      return dVar5;
    }
    if (NAN((double)-(ulonglong)(param_1 <= DAT_18057aa40 && DAT_18057aa48 <= param_1))) {
      if ((ulonglong)ABS(param_1) <= (ulonglong)DAT_18057aaa0) {
        return param_1 + DAT_18057aa98;
      }
      uVar9 = (uint)(param_1 * DAT_18057aa58);
      uVar3 = (ulonglong)(uVar9 & 0x3f);
      uVar4 = (int)uVar9 >> 6;
      dVar10 = (double)(int)uVar9 * DAT_18057aa88 + param_1 + (double)(int)uVar9 * DAT_18057aa80;
      dVar5 = dVar10 * dVar10;
      param_1 = ((DAT_18057a9f0 * dVar10 + DAT_18057aa00) * dVar5 + dVar10 +
                ((_DAT_18057a9d0 * dVar10 + DAT_18057a9e0) * dVar10 + DAT_18057aa10) * dVar5 * dVar5
                ) * *(double *)(&DAT_18057fb70 + uVar3 * 8) +
                *(double *)(&DAT_180584f60 + uVar3 * 8) + *(double *)(&DAT_180584d60 + uVar3 * 8);
      if ((-0x3fe < (int)uVar4) || ((-0x3ff < (int)uVar4 && (DAT_18057aa98 <= param_1)))) {
        return (double)((longlong)param_1 + ((ulonglong)uVar4 << 0x34));
      }
      param_1 = param_1 * (double)(1L << ((char)uVar4 + 0x32U & 0x3f));
    }
    else if (DAT_18057aa40 < param_1) {
      param_1 = (double)FUN_180532300(in_RCX,dVar5,DAT_18057a9c8);
    }
    else if (param_1 < DAT_18057aa50) {
      param_1 = (double)FUN_180532300(in_RCX,dVar5,DAT_18057a9c4);
    }
    else {
      param_1 = _DAT_18057aa90;
    }
  }
  else if (param_1 != DAT_18057aa60) {
    if (param_1 == DAT_18057aa68) {
      return 0.0;
    }
    param_1 = (double)((ulonglong)param_1 | _DAT_18057aa70);
  }
  return param_1;
}



/* ===== 18051dd90 FUN_18051dd90 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_18051dd90(double param_1,double param_2)

{
  ulonglong uVar1;
  double dVar2;
  uint uVar3;
  double extraout_XMM0_Qa;
  double extraout_XMM0_Qa_00;
  double dVar4;
  double dVar5;
  
  if (DAT_180c9fd94 == 0) {
    dVar2 = ABS(param_1);
    if ((ulonglong)DAT_18057ab90 < (ulonglong)dVar2) {
      if ((ulonglong)DAT_18057abf0 <= (ulonglong)dVar2) {
        dVar2 = (double)FUN_180530790();
        return dVar2;
      }
      if (DAT_18057ac38 <= (double)((ulonglong)param_1 & _DAT_18057aad0)) {
        FUN_180531950();
      }
      uVar3 = (uint)(dVar2 != param_1);
      dVar2 = (double)FUN_18051e350();
      if (uVar3 != 0) {
        dVar2 = (double)((ulonglong)dVar2 ^ _DAT_18057aac0);
      }
      return dVar2;
    }
    if ((ulonglong)dVar2 < (ulonglong)DAT_18057abe8) {
      if ((ulonglong)DAT_18057abe0 <= (ulonglong)dVar2) {
        return param_1 * param_1 * param_1 * _DAT_18057ab00 + param_1;
      }
    }
    else {
      param_1 = (double)FUN_18051e350();
    }
    return param_1;
  }
  dVar2 = ABS(param_1);
  if ((ulonglong)dVar2 < (ulonglong)DAT_18057ab90) {
    if ((ulonglong)DAT_18057ac00 < (ulonglong)dVar2) {
      if (param_1 < DAT_18057ac10) {
        param_1 = DAT_18057ab90 + param_1 + DAT_18057aba0;
        dVar5 = DAT_18057ac20;
      }
      else {
        param_1 = (DAT_18057ab90 - param_1) + DAT_18057aba0;
        dVar5 = DAT_18057ac18;
      }
    }
    else {
      dVar5 = 0.0;
      if ((longlong)dVar2 < (longlong)DAT_18057abe0) {
        return param_1;
      }
    }
    dVar2 = param_1 * param_1;
    param_1 = param_1 * ((dVar2 * (dVar2 * DAT_18057ab30 + DAT_18057ab20) + DAT_18057ab10) /
                        (dVar2 * (dVar2 * (dVar2 * DAT_18057ab70 + DAT_18057ab60) + DAT_18057ab50) +
                        DAT_18057ab40)) * dVar2 + param_1;
    if (dVar5 != DAT_18057ac10) {
      param_1 = (-((param_1 / (param_1 + DAT_18057ac18)) * DAT_18057ac28) + DAT_18057ac18) * dVar5;
    }
    return param_1;
  }
  if ((ulonglong)DAT_18057abf0 <= (ulonglong)dVar2) {
    dVar2 = (double)FUN_180530790();
    return dVar2;
  }
  if ((longlong)dVar2 < _DAT_18057ac40) {
    uVar1 = FUN_180530500(dVar2);
    dVar2 = extraout_XMM0_Qa;
  }
  else {
    uVar1 = FUN_180530310();
    dVar2 = extraout_XMM0_Qa_00;
  }
  dVar5 = 0.0;
  if (dVar2 <= DAT_18057ac00) {
    if (dVar2 < DAT_18057ac08) {
      dVar2 = DAT_18057ab90 + dVar2 + DAT_18057aba0 + param_2;
      param_2 = 0.0;
      dVar5 = DAT_18057ac20;
    }
  }
  else {
    dVar2 = (DAT_18057ab90 - dVar2) + (DAT_18057aba0 - param_2);
    param_2 = 0.0;
    dVar5 = DAT_18057ac18;
  }
  dVar4 = param_2 * dVar2 * DAT_18057ac28 + dVar2 * dVar2;
  param_2 = dVar2 * ((dVar4 * (dVar4 * DAT_18057ab30 + DAT_18057ab20) + DAT_18057ab10) /
                    (dVar4 * (dVar4 * (dVar4 * DAT_18057ab70 + DAT_18057ab60) + DAT_18057ab50) +
                    DAT_18057ab40)) * dVar4 + param_2;
  dVar4 = dVar2 + param_2;
  if (dVar5 == 0.0) {
    if ((uVar1 & 1) != 0) {
      dVar5 = (double)((ulonglong)(DAT_18057ac20 / dVar4) & _DAT_18057ab80);
      dVar4 = (DAT_18057ac20 / dVar4) *
              ((param_2 - ((double)((ulonglong)dVar4 & _DAT_18057ab80) - dVar2)) * dVar5 +
              dVar5 * (double)((ulonglong)dVar4 & _DAT_18057ab80) + DAT_18057ac18) + dVar5;
    }
  }
  else if ((uVar1 & 1) == 0) {
    dVar4 = (-((dVar4 / (dVar4 + DAT_18057ac18)) * DAT_18057ac28) + DAT_18057ac18) * dVar5;
  }
  else {
    dVar4 = ((dVar4 / (dVar4 - DAT_18057ac18)) * DAT_18057ac28 - DAT_18057ac18) * dVar5;
  }
  return (double)((ulonglong)dVar4 ^ (ulonglong)param_1 & _DAT_18057aac0);
}



/* ===== 18051e350 FUN_18051e350 ===== */

double FUN_18051e350(double param_1,double param_2,int param_3)

{
  int iVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  iVar1 = 0;
  if (param_1 <= DAT_18057ac00) {
    if (param_1 < DAT_18057ac08) {
      iVar1 = -1;
      param_1 = param_1 + DAT_18057ab90 + param_2 + DAT_18057aba0;
      param_2 = 0.0;
    }
  }
  else {
    iVar1 = 1;
    param_1 = (DAT_18057ab90 - param_1) + (DAT_18057aba0 - param_2);
    param_2 = 0.0;
  }
  dVar3 = (param_1 + param_1) * param_2 + param_1 * param_1;
  param_2 = (((dVar3 * DAT_18057ab30 + DAT_18057ab20) * dVar3 + DAT_18057ab10) * dVar3 * param_1) /
            (((DAT_18057ab60 + dVar3 * DAT_18057ab70) * dVar3 + DAT_18057ab50) * dVar3 +
            DAT_18057ab40) + param_2;
  if (iVar1 == 0) {
    if (param_3 == 0) {
      return param_2 + param_1;
    }
    dVar4 = DAT_18057ac20 / (param_2 + param_1);
    dVar3 = (double)((ulonglong)(param_2 + param_1) & 0xffffffff00000000);
    dVar2 = (double)((ulonglong)dVar4 & 0xffffffff00000000);
    return (dVar2 * dVar3 + DAT_18057ac18 + (param_2 - (dVar3 - param_1)) * dVar2) * dVar4 + dVar2;
  }
  param_2 = param_2 + param_1;
  if (param_3 == 0) {
    return (DAT_18057ac18 - (param_2 + param_2) / (param_2 + DAT_18057ac18)) * (double)iVar1;
  }
  return ((param_2 + param_2) / (param_2 - DAT_18057ac18) - DAT_18057ac18) * (double)iVar1;
}



/* ===== 18051e550 FUN_18051e550 ===== */

double FUN_18051e550(double param_1)

{
  double dVar1;
  uint uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  uint uVar6;
  uint uVar7;
  
  uVar6 = SUB84(param_1,0);
  uVar7 = (uint)((ulonglong)param_1 >> 0x20);
  dVar3 = 0.0;
  uVar2 = uVar7 >> 0x14 & 0x7ff;
  if (0x7ff0000000000000 < (ulonglong)ABS(param_1)) {
    dVar3 = (double)FUN_18052fdb0();
    return dVar3;
  }
  if (uVar2 < 0x3e3) {
    FUN_18052f090(0x20);
    return param_1;
  }
  if (uVar2 < 0x3ff) {
    if ((longlong)param_1 < 0) {
      uVar6 = uVar6 ^ (uint)DAT_1808adeb0;
      uVar7 = uVar7 ^ DAT_1808adeb0._4_4_;
    }
    dVar1 = (double)CONCAT44(uVar7,uVar6);
    if (uVar2 < 0x3fe) {
      dVar4 = (double)CONCAT44(uVar7,uVar6) * (double)CONCAT44(uVar7,uVar6);
    }
    else {
      dVar4 = (DAT_1808ac500 - (double)CONCAT44(uVar7,uVar6)) * DAT_1808ac4a8;
      dVar3 = SQRT(dVar4);
      dVar1 = dVar3;
    }
    dVar5 = ((((((dVar4 * DAT_18057ac50 + DAT_18057ac58) * dVar4 - DAT_18057ac60) * dVar4 +
               DAT_18057ac78) * dVar4 - DAT_18057ac80) * dVar4 + DAT_18057ac70) * dVar4) /
            ((((dVar4 * DAT_18057ac68 - DAT_18057ac88) * dVar4 + DAT_18057ac98) * dVar4 -
             DAT_18057aca0) * dVar4 + DAT_18057ac90);
    if (uVar2 < 0x3fe) {
      dVar1 = dVar1 * dVar5 + dVar1;
    }
    else {
      dVar1 = (double)((ulonglong)dVar3 & 0xffffffff00000000);
      dVar4 = (dVar4 - dVar1 * dVar1) / (dVar1 + dVar3);
      dVar1 = DAT_180579910 -
              (((dVar3 + dVar3) * dVar5 - (DAT_1805798d8 - (dVar4 + dVar4))) -
              (DAT_180579910 - (dVar1 + dVar1)));
    }
    if ((longlong)param_1 < 0) {
      dVar1 = (double)(ulonglong)(SUB84(dVar1,0) ^ (uint)DAT_1808adeb0);
    }
    return dVar1;
  }
  if (param_1 == DAT_1808ac500) {
    FUN_18052f090(0x20);
    return DAT_180578270;
  }
  if (param_1 == DAT_1808acdb8) {
    FUN_18052f090(0x20);
    return DAT_180579930;
  }
  dVar3 = (double)FUN_18052fb30("asin",0xe,0xfff8000000000000,1,8,0x21,param_1,0,1);
  return dVar3;
}



/* ===== 18051e7e0 FUN_18051e7e0 ===== */

double FUN_18051e7e0(double param_1)

{
  double dVar1;
  double dVar2;
  uint uVar3;
  uint uVar5;
  double dVar4;
  double dVar6;
  double dVar7;
  
  uVar5 = (uint)((ulonglong)param_1 >> 0x20);
  dVar4 = 0.0;
  uVar3 = uVar5 >> 0x14 & 0x7ff;
  if (0x7ff0000000000000 < (ulonglong)ABS(param_1)) {
    dVar4 = (double)FUN_18052fdb0();
    return dVar4;
  }
  if (uVar3 < 0x3c7) {
    FUN_18052f090(0x20);
    return DAT_180578270;
  }
  if (uVar3 < 0x3ff) {
    dVar6 = param_1;
    if ((longlong)param_1 < 0) {
      dVar6 = (double)CONCAT44(uVar5 ^ DAT_1808adeb0._4_4_,SUB84(param_1,0) ^ (uint)DAT_1808adeb0);
    }
    if (uVar3 < 0x3fe) {
      dVar7 = dVar6 * dVar6;
    }
    else {
      dVar7 = (DAT_1808ac500 - dVar6) * DAT_1808ac4a8;
      dVar6 = SQRT(dVar7);
      dVar4 = dVar6;
    }
    dVar1 = ((((((dVar7 * DAT_18057ac50 + DAT_18057ac58) * dVar7 - DAT_18057ac60) * dVar7 +
               DAT_18057ac78) * dVar7 - DAT_18057ac80) * dVar7 + DAT_18057ac70) * dVar7) /
            ((((dVar7 * DAT_18057ac68 - DAT_18057ac88) * dVar7 + DAT_18057ac98) * dVar7 -
             DAT_18057aca0) * dVar7 + DAT_18057ac90);
    if (uVar3 < 0x3fe) {
      return DAT_180578270 - (param_1 - (DAT_1805798d8 - dVar1 * param_1));
    }
    if ((longlong)param_1 < 0) {
      dVar4 = (dVar6 * dVar1 - DAT_1805798d8) + dVar4;
      return DAT_1808ac588 - (dVar4 + dVar4);
    }
    dVar2 = (double)((ulonglong)dVar4 & 0xffffffff00000000);
    dVar4 = (dVar7 - dVar2 * dVar2) / (dVar2 + dVar4);
    return (dVar6 + dVar6) * dVar1 + dVar4 + dVar4 + dVar2 + dVar2;
  }
  if (param_1 == DAT_1808ac500) {
    return 0.0;
  }
  if (param_1 == DAT_1808acdb8) {
    FUN_18052f090(0x20);
    return DAT_1808ac588;
  }
  dVar4 = (double)FUN_18052fb30(&DAT_18057aca8,0xd,0xfff8000000000000,1,8,0x21,param_1,0,1);
  return dVar4;
}



/* ===== 18051eaa0 FUN_18051eaa0 ===== */

double FUN_18051eaa0(double param_1)

{
  double dVar1;
  double dVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  dVar2 = ABS(param_1);
  bVar3 = param_1 != dVar2;
  if (bVar3) {
    param_1 = (double)CONCAT44((uint)((ulonglong)param_1 >> 0x20) ^ DAT_1808adeb0._4_4_,
                               SUB84(param_1,0) ^ (uint)DAT_1808adeb0);
  }
  if ((ulonglong)dVar2 < 0x4003800000000001) {
    if ((ulonglong)dVar2 < 0x3ff3000000000001) {
      if ((ulonglong)dVar2 < 0x3fe6000000000001) {
        if ((ulonglong)dVar2 < 0x3fdc000000000001) {
          dVar2 = 0.0;
          uVar4 = 0;
          uVar5 = 0;
        }
        else {
          uVar4 = (undefined4)DAT_18057acb8;
          uVar5 = (undefined4)((ulonglong)DAT_18057acb8 >> 0x20);
          param_1 = ((param_1 + param_1) - DAT_1808ac500) / (param_1 + DAT_1808ac548);
          dVar2 = DAT_18057ad08;
        }
      }
      else {
        uVar4 = (undefined4)DAT_18057acc0;
        uVar5 = (undefined4)((ulonglong)DAT_18057acc0 >> 0x20);
        param_1 = (param_1 - DAT_1808ac500) / (param_1 + DAT_1808ac500);
        dVar2 = DAT_180579910;
      }
    }
    else {
      uVar4 = (undefined4)DAT_18057acb0;
      uVar5 = (undefined4)((ulonglong)DAT_18057acb0 >> 0x20);
      param_1 = (param_1 - DAT_1808ac518) / (param_1 * DAT_1808ac518 + DAT_1808ac500);
      dVar2 = DAT_18057ad18;
    }
  }
  else {
    if (0x7ff0000000000000 < (ulonglong)dVar2) {
      dVar2 = (double)FUN_18052fdb0();
      return dVar2;
    }
    if (DAT_18057ad30 < param_1) {
      if (bVar3) {
        FUN_18052f090(0x20);
        return DAT_180579930;
      }
      FUN_18052f090(0x20);
      return DAT_180578270;
    }
    uVar4 = (undefined4)DAT_18057acc8;
    uVar5 = (undefined4)((ulonglong)DAT_18057acc8 >> 0x20);
    param_1 = DAT_1808acdb8 / param_1;
    dVar2 = DAT_180578270;
  }
  dVar1 = param_1 * param_1;
  dVar2 = dVar2 - (((((((dVar1 * DAT_18057acd0 + DAT_18057acd8) * dVar1 + DAT_18057ace8) * dVar1 +
                      DAT_18057ad00) * dVar1 + DAT_18057acf0) * dVar1 * param_1) /
                    ((((dVar1 * DAT_18057ace0 + DAT_18057acf8) * dVar1 + DAT_18057ad20) * dVar1 +
                     DAT_18057ad28) * dVar1 + DAT_18057ad10) - (double)CONCAT44(uVar5,uVar4)) -
                  param_1);
  if (bVar3) {
    dVar2 = (double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) ^ DAT_1808adeb0._4_4_,
                             SUB84(dVar2,0) ^ (uint)DAT_1808adeb0);
  }
  return dVar2;
}



/* ===== 18051ecf0 FUN_18051ecf0 ===== */

void FUN_18051ecf0(void)

{
  double dVar1;
  bool bVar2;
  undefined1 in_XMM0 [16];
  double dVar3;
  
  dVar3 = in_XMM0._0_8_;
  dVar1 = ABS(dVar3);
  if ((ulonglong)dVar1 < 0x3e30000000000000) {
    if (dVar1 != 0.0) {
      FUN_18052f090(0x20);
      return;
    }
  }
  else {
    if (0x7fefffffffffffff < (ulonglong)dVar1) {
      if ((ulonglong)dVar1 < 0x7ff0000000000001) {
        return;
      }
      FUN_18052fdb0();
      return;
    }
    bVar2 = dVar1 != dVar3;
    if (bVar2) {
      dVar3 = (double)CONCAT44(in_XMM0._4_4_ ^ DAT_1808adeb0._4_4_,
                               in_XMM0._0_4_ ^ (uint)DAT_1808adeb0);
    }
    if (DAT_18057b4a8 <= dVar3) {
      if (bVar2) {
        FUN_18052fb30(&DAT_18057b3f8,0x1f,0xfff0000000000000,3,1,0x22);
        return;
      }
      FUN_18052fb30(&DAT_18057b3f8,0x1f,0x7ff0000000000000,3,1,0x22);
      return;
    }
  }
  return;
}



/* ===== 18051f120 FUN_18051f120 ===== */

double FUN_18051f120(void)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  double dVar7;
  double dVar8;
  undefined1 in_XMM0 [16];
  double dVar9;
  uint uVar10;
  uint uVar11;
  
  uVar10 = in_XMM0._0_4_;
  uVar11 = in_XMM0._4_4_;
  uVar2 = in_XMM0._0_8_ & 0x7fffffffffffffff;
  if (uVar2 < 0x3e30000000000000) {
    if (uVar2 != 0) {
      FUN_18052f090(0x20);
    }
    return DAT_1808ac500;
  }
  if (0x7fefffffffffffff < uVar2) {
    if (uVar2 < 0x7ff0000000000001) {
      FUN_18052f090(0);
      return INFINITY;
    }
    dVar7 = (double)FUN_18052fdb0();
    return dVar7;
  }
  if (uVar2 != in_XMM0._0_8_) {
    uVar10 = uVar10 ^ (uint)DAT_1808adeb0;
    uVar11 = uVar11 ^ DAT_1808adeb0._4_4_;
  }
  if ((double)CONCAT44(uVar11,uVar10) < DAT_18057b4a8) {
    if ((double)CONCAT44(uVar11,uVar10) < DAT_1808ac638) {
      lVar3 = (longlong)(int)(double)CONCAT44(uVar11,uVar10);
      dVar8 = (double)CONCAT44(uVar11,uVar10) - (double)(int)(double)CONCAT44(uVar11,uVar10);
      dVar9 = dVar8 * dVar8;
      dVar7 = ((((((dVar9 * DAT_18057b400 + DAT_18057b418) * dVar9 + DAT_18057b428) * dVar9 +
                 DAT_18057b438) * dVar9 + DAT_18057b448) * dVar9 + DAT_18057b460) * dVar9 +
              DAT_18057b490) * dVar9 * dVar8;
      dVar9 = ((((((dVar9 * DAT_18057b408 + DAT_18057b420) * dVar9 + DAT_18057b430) * dVar9 +
                 DAT_18057b440) * dVar9 + DAT_18057b450) * dVar9 + DAT_18057b480) * dVar9 +
              DAT_1808ac4a8) * dVar9;
      dVar7 = *(double *)(&DAT_18057b7e0 + lVar3 * 8) * dVar7 +
              *(double *)(&DAT_18057ba40 + lVar3 * 8) * dVar9 +
              *(double *)(&DAT_18057b7e0 + lVar3 * 8) * dVar8 +
              *(double *)(&DAT_18057ba40 + lVar3 * 8) +
              *(double *)(&DAT_18057b910 + lVar3 * 8) * dVar9 +
              *(double *)(&DAT_18057b6b0 + lVar3 * 8) * dVar7 +
              *(double *)(&DAT_18057b6b0 + lVar3 * 8) * dVar8 +
              *(double *)(&DAT_18057b910 + lVar3 * 8);
    }
    else {
      dVar7 = (double)CONCAT44(uVar11,uVar10) * DAT_18057b4a0;
      if (dVar7 <= 0.0) {
        dVar7 = dVar7 - DAT_1808ac4a8;
      }
      else {
        dVar7 = dVar7 + DAT_1808ac4a8;
      }
      uVar4 = (uint)dVar7;
      uVar1 = uVar4 & 0x1f;
      dVar7 = (double)CONCAT44(uVar11,uVar10) - (double)(int)uVar4 * DAT_18057b470;
      dVar8 = (double)(int)-uVar4 * DAT_18057b410 + dVar7;
      iVar5 = (int)(((int)(uVar4 - uVar1) >> 0x1f & 0x1fU) + (uVar4 - uVar1)) >> 5;
      iVar6 = iVar5 + -1;
      dVar7 = *(double *)(&DAT_18057b4b0 + (ulonglong)uVar1 * 8) +
              (((((dVar8 * DAT_18057b458 + DAT_18057b468) * dVar8 + DAT_18057b478) * dVar8 +
                DAT_18057b488) * dVar8 + DAT_1808ac4a8) * dVar8 * dVar8 +
               (double)(int)-uVar4 * DAT_18057b410 + dVar7) *
              (*(double *)(&DAT_18057b5b0 + (ulonglong)uVar1 * 8) +
              *(double *)(&DAT_18057b4b0 + (ulonglong)uVar1 * 8)) +
              *(double *)(&DAT_18057b5b0 + (ulonglong)uVar1 * 8);
      if (iVar5 + 0x3fdU < 0x7fe) {
        dVar7 = dVar7 * (double)((longlong)iVar6 + 0x3ff << 0x34);
      }
      else {
        dVar7 = dVar7 * (double)((longlong)(iVar6 / 2) + 0x3ff << 0x34) *
                (double)((longlong)(iVar6 - iVar6 / 2) + 0x3ff << 0x34);
      }
    }
  }
  else {
    dVar7 = (double)FUN_18052fb30(&DAT_18057bb68,0x13,0x7ff0000000000000,3,0x11,0x22);
  }
  return dVar7;
}



/* ===== 18051f510 FUN_18051f510 ===== */

void FUN_18051f510(ulonglong param_1)

{
  param_1 = param_1 & 0x7fffffffffffffff;
  if (param_1 < 0x3e30000000000000) {
    if (param_1 != 0) {
      FUN_18052f090(0x20);
      return;
    }
  }
  else if (0x7ff0000000000000 < param_1) {
    FUN_18052fdb0();
    return;
  }
  return;
}



/* ===== 18051f830 FUN_18051f830 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18051f830(ulonglong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ushort in_FPUStatusWord;
  
  uVar1 = param_1 & DAT_18057be50;
  uVar3 = param_2 & DAT_18057be50;
  if ((longlong)DAT_18057be10 < (longlong)uVar3) {
    return;
  }
  if ((longlong)DAT_18057be10 < (longlong)uVar1) {
    return;
  }
  if (uVar1 != DAT_18057be10) {
    if (uVar3 == 0) {
      uVar1 = _DAT_18057be60;
      goto LAB_18051fa6c;
    }
    if (uVar1 == uVar3) {
      return;
    }
    if ((double)(param_1 & DAT_18057be50) <= (double)(param_2 & DAT_18057be50)) {
      return;
    }
    uVar1 = (param_1 & DAT_18057be10) >> 0x34 | (param_1 & DAT_18057be10) << 0xc;
    uVar3 = (param_2 & DAT_18057be10) >> 0x34 | (param_2 & DAT_18057be10) << 0xc;
    if (((uVar1 == 0) || (uVar3 == 0)) || (lVar2 = uVar1 - uVar3, 0x33 < lVar2)) {
LAB_18051fa10:
      do {
      } while ((in_FPUStatusWord & 0x400) == 0x400);
      return;
    }
    if (lVar2 != 0x7ff) {
      if (DAT_180c9fd94 != 0) {
        return;
      }
      uVar1 = (ulonglong)
              (double)(longlong)
                      ((double)(param_1 & DAT_18057be50) / (double)(param_2 & DAT_18057be50)) &
              DAT_18057be10;
      if ((longlong)((uVar1 >> 0x34 | uVar1 << 0xc) + (uVar3 - 0x7fe)) < 0x3ff) {
        return;
      }
      goto LAB_18051fa10;
    }
  }
  uVar1 = param_1 | (ulonglong)DAT_18057be40;
LAB_18051fa6c:
  FUN_18052fb30(&DAT_18057bdf0,0x16,uVar1,1,8,0x21);
  return;
}



/* ===== 18051fbc0 FUN_18051fbc0 ===== */

void FUN_18051fbc0(undefined8 param_1,int param_2)

{
  double dVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  undefined1 in_XMM0 [16];
  
  dVar1 = in_XMM0._0_8_;
  if (((ulonglong)dVar1 & 0x7ff0000000000000) == 0x7ff0000000000000) {
    if (((longlong)dVar1 + 0x10000000000000U & 0x7fffffffffffffff) != 0) {
      if (((ulonglong)dVar1 & 0x7ff8000000000000) == 0x7ff8000000000000) {
        uVar2 = FUN_18052eff0(0x1f80,0xffc0);
        FUN_180526ea0();
        FUN_18052eff0(uVar2,0xffc0);
      }
      else {
        FUN_18052eff0(0x1f80,0xffc0);
        FUN_1805268a0(8);
      }
    }
  }
  else if (dVar1 != 0.0) {
    if ((((ulonglong)dVar1 & 0x7ff0000000000000) == 0) &&
       (((ulonglong)dVar1 & 0xfffffffffffff) != 0)) {
      lVar4 = 0x3f;
      if (((ulonglong)dVar1 & 0xfffffffffffff) != 0) {
        for (; ((ulonglong)dVar1 & 0xfffffffffffff) >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      iVar3 = (int)lVar4 + -0x431;
    }
    else {
      iVar3 = (in_XMM0._4_4_ >> 0x14 & 0x7ff) - 0x3fe;
    }
    lVar4 = (longlong)iVar3 + (longlong)param_2;
    if (lVar4 < 0x401) {
      if (lVar4 < -0x3fd) {
        FUN_18052eff0(0x1f80,0xffc0);
        FUN_1805268a0(0x12);
      }
    }
    else {
      FUN_18052eff0(0x1f80,0xffc0);
      if (0xa00 < lVar4) {
        FUN_180534810(DAT_180577a58);
      }
      FUN_1805268a0(0x11);
    }
  }
  return;
}



/* ===== 18051ff18 FUN_18051ff18 ===== */

undefined4 * FUN_18051ff18(void)

{
  return &DAT_180c9f574;
}



/* ===== 18051ff20 FUN_18051ff20 ===== */

double FUN_18051ff20(double param_1)

{
  double dVar1;
  
  if (((uint)((ulonglong)param_1 >> 0x20) & 0x7ff00000) == 0x7ff00000) {
    if (((ulonglong)param_1 & 0xfffffffffffff) != 0) {
      dVar1 = (double)FUN_18052fdb0(param_1);
      return dVar1;
    }
    if ((longlong)param_1 < 0) goto LAB_18051ff68;
  }
  if (-1 < (longlong)param_1 || ABS(param_1) == 0.0) {
    return SQRT(param_1);
  }
LAB_18051ff68:
  dVar1 = (double)FUN_18052fb30(&DAT_18057be70,5,0xfff8000000000000,1,8,0x21,param_1,0,1);
  return dVar1;
}



/* ===== 18051ffd8 abort ===== */

/* Library Function - Single Match
    abort
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl abort(void)

{
  code *pcVar1;
  longlong lVar2;
  BOOL BVar3;
  undefined1 *puVar4;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [32];
  
  lVar2 = __acrt_get_sigabrt_handler();
  if (lVar2 != 0) {
    FUN_1805348d8(0x16);
  }
  puVar4 = auStack_28;
  if ((DAT_180919730 & 2) != 0) {
    BVar3 = IsProcessorFeaturePresent(0x17);
    puVar4 = auStack_28;
    if (BVar3 != 0) {
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(7);
      puVar4 = auStack_20;
    }
    *(undefined8 *)(puVar4 + -8) = 0x180520023;
    FUN_180527474(3,0x40000015);
  }
  *(undefined8 *)(puVar4 + -8) = 0x18052002d;
  FUN_18051c3c0(3);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ===== 180520030 FUN_180520030 ===== */

undefined4 FUN_180520030(void)

{
  longlong lVar1;
  longlong local_res8 [4];
  
  lVar1 = FUN_180529860();
  local_res8[0] = *(longlong *)(lVar1 + 0x90);
  __acrt_update_locale_info(lVar1,local_res8);
  return *(undefined4 *)(local_res8[0] + 0xc);
}



/* ===== 180520060 FUN_180520060 ===== */

longlong FUN_180520060(void)

{
  longlong lVar1;
  longlong local_res8 [4];
  
  lVar1 = FUN_180529860();
  local_res8[0] = *(longlong *)(lVar1 + 0x90);
  __acrt_update_locale_info(lVar1,local_res8);
  return local_res8[0] + 0x128;
}



/* ===== 180520094 FUN_180520094 ===== */

undefined4 FUN_180520094(void)

{
  longlong lVar1;
  longlong local_res8 [4];
  
  lVar1 = FUN_180529860();
  local_res8[0] = *(longlong *)(lVar1 + 0x90);
  __acrt_update_locale_info(lVar1,local_res8);
  return *(undefined4 *)(local_res8[0] + 8);
}



/* ===== 1805200c4 FUN_1805200c4 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_1805200c4(longlong *param_1)

{
  UINT *pUVar1;
  byte bVar2;
  int *piVar3;
  undefined2 uVar4;
  int iVar5;
  BOOL BVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  undefined1 *puVar14;
  undefined8 *puVar15;
  BYTE *pBVar16;
  undefined4 uVar17;
  undefined8 *puVar18;
  undefined1 auStack_b8 [32];
  UINT *local_98;
  longlong local_90;
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined4 *local_68;
  uint local_60;
  longlong *local_58;
  undefined8 local_50;
  _cpinfo local_48;
  ulonglong local_30;
  
  local_30 = DAT_180919500 ^ (ulonglong)auStack_b8;
  uVar17 = 0;
  local_50 = 0;
  puVar7 = (undefined8 *)0x0;
  puVar8 = (undefined8 *)0x0;
  puVar9 = (undefined8 *)0x0;
  puVar10 = (undefined1 *)0x0;
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
  if (param_1[0x27] == 0) {
    piVar3 = (int *)param_1[0x20];
    if (piVar3 != (int *)0x0) {
      LOCK();
      *piVar3 = *piVar3 + -1;
      UNLOCK();
    }
    param_1[0x20] = 0;
    *param_1 = (longlong)&DAT_18057c140;
    param_1[0x22] = (longlong)&DAT_18057c3c0;
    param_1[0x23] = (longlong)&DAT_18057c540;
    param_1[0x21] = 0;
    *(undefined4 *)(param_1 + 1) = 1;
    return 0;
  }
  pUVar1 = (UINT *)((longlong)param_1 + 0xc);
  local_68 = (undefined4 *)0x0;
  local_58 = param_1;
  if ((*pUVar1 != 0) ||
     (local_98 = pUVar1, iVar5 = FUN_180534cb0(&local_58,0,param_1[0x27],0x1004), iVar5 == 0)) {
    local_68 = (undefined4 *)_calloc_base(1,4);
    FUN_1805277b0(0);
    puVar7 = (undefined8 *)_calloc_base(0x180,2);
    FUN_1805277b0(0);
    puVar8 = (undefined8 *)_calloc_base(0x180,1);
    FUN_1805277b0(0);
    puVar9 = (undefined8 *)_calloc_base(0x180,1);
    FUN_1805277b0(0);
    puVar10 = (undefined1 *)_calloc_base(0x101,1);
    FUN_1805277b0(0);
    if ((local_68 != (undefined4 *)0x0) &&
       ((((puVar7 != (undefined8 *)0x0 && (puVar10 != (undefined1 *)0x0)) &&
         (puVar8 != (undefined8 *)0x0)) && (puVar9 != (undefined8 *)0x0)))) {
      iVar5 = 0;
      puVar14 = puVar10;
      do {
        *puVar14 = (char)iVar5;
        puVar14 = puVar14 + 1;
        iVar5 = iVar5 + 1;
      } while (iVar5 < 0x100);
      BVar6 = GetCPInfo(*pUVar1,&local_48);
      if ((BVar6 != 0) && (local_48.MaxCharSize < 6)) {
        local_60 = (uint)(ushort)local_48.MaxCharSize;
        if (1 < local_60) {
          if (*(int *)((longlong)param_1 + 0xc) == 0xfde9) {
            FUN_180540170(puVar10 + 0x80,0x20,0x80);
          }
          else {
            pBVar16 = local_48.LeadByte;
            bVar2 = local_48.LeadByte[0];
            while ((bVar2 != 0 && (pBVar16[1] != 0))) {
              uVar13 = (uint)*pBVar16;
              if (*pBVar16 <= pBVar16[1]) {
                do {
                  lVar11 = (longlong)(int)uVar13;
                  uVar13 = uVar13 + 1;
                  puVar10[lVar11] = 0x20;
                } while ((int)uVar13 <= (int)(uint)pBVar16[1]);
              }
              pBVar16 = pBVar16 + 2;
              bVar2 = *pBVar16;
            }
          }
        }
        local_80 = *(undefined4 *)((longlong)param_1 + 0xc);
        local_90 = (longlong)puVar8 + 0x81;
        local_78 = 0;
        local_88 = 0xff;
        local_98 = (UINT *)CONCAT44(local_98._4_4_,0xff);
        iVar5 = __acrt_LCMapStringA(0,param_1[0x27],0x100,puVar10 + 1);
        if (iVar5 != 0) {
          local_80 = *(undefined4 *)((longlong)param_1 + 0xc);
          local_90 = (longlong)puVar9 + 0x81;
          local_78 = 0;
          local_88 = 0xff;
          local_98 = (UINT *)CONCAT44(local_98._4_4_,0xff);
          iVar5 = __acrt_LCMapStringA(0,param_1[0x27],0x200,puVar10 + 1);
          if (iVar5 != 0) {
            local_98 = (UINT *)(puVar7 + 0x20);
            local_88 = 0;
            local_90 = CONCAT44(local_90._4_4_,*(undefined4 *)((longlong)param_1 + 0xc));
            iVar5 = FUN_180534e78(0,1,puVar10,0x100);
            uVar13 = local_60;
            if (iVar5 != 0) {
              *(undefined2 *)((longlong)puVar7 + 0xfe) = 0;
              *(undefined1 *)((longlong)puVar8 + 0x7f) = 0;
              *(undefined1 *)((longlong)puVar9 + 0x7f) = 0;
              *(undefined1 *)(puVar8 + 0x10) = 0;
              *(undefined1 *)(puVar9 + 0x10) = 0;
              if (1 < local_60) {
                if (*(int *)((longlong)param_1 + 0xc) == 0xfde9) {
                  puVar15 = puVar9 + 0x20;
                  puVar18 = puVar7 + 0x40;
                  iVar5 = 0x80;
                  do {
                    if (iVar5 - 0xc2U < 0x33) {
                      uVar4 = 0x8000;
                    }
                    else {
                      uVar4 = 0;
                    }
                    *(undefined2 *)puVar18 = uVar4;
                    puVar18 = (undefined8 *)((longlong)puVar18 + 2);
                    *(char *)(((longlong)puVar8 - (longlong)puVar9) + (longlong)puVar15) =
                         (char)iVar5;
                    *(char *)puVar15 = (char)iVar5;
                    iVar5 = iVar5 + 1;
                    puVar15 = (undefined8 *)((longlong)puVar15 + 1);
                  } while (iVar5 < 0x100);
                }
                else {
                  pBVar16 = local_48.LeadByte;
                  bVar2 = local_48.LeadByte[0];
                  while ((bVar2 != 0 && (pBVar16[1] != 0))) {
                    uVar12 = (uint)*pBVar16;
                    if (*pBVar16 <= pBVar16[1]) {
                      do {
                        lVar11 = (longlong)(int)uVar12;
                        *(undefined2 *)((longlong)puVar7 + lVar11 * 2 + 0x100) = 0x8000;
                        *(char *)(lVar11 + 0x80 + (longlong)puVar8) = (char)uVar12;
                        *(char *)(lVar11 + 0x80 + (longlong)puVar9) = (char)uVar12;
                        uVar12 = uVar12 + 1;
                      } while ((int)uVar12 <= (int)(uint)pBVar16[1]);
                    }
                    pBVar16 = pBVar16 + 2;
                    bVar2 = *pBVar16;
                  }
                }
              }
              *puVar7 = puVar7[0x40];
              puVar7[1] = puVar7[0x41];
              puVar7[2] = puVar7[0x42];
              puVar7[3] = puVar7[0x43];
              puVar7[4] = puVar7[0x44];
              puVar7[5] = puVar7[0x45];
              puVar7[6] = puVar7[0x46];
              puVar7[7] = puVar7[0x47];
              puVar7[8] = puVar7[0x48];
              puVar7[9] = puVar7[0x49];
              puVar7[10] = puVar7[0x4a];
              puVar7[0xb] = puVar7[0x4b];
              puVar7[0xc] = puVar7[0x4c];
              puVar7[0xd] = puVar7[0x4d];
              puVar7[0xe] = puVar7[0x4e];
              puVar7[0xf] = puVar7[0x4f];
              puVar7[0x10] = puVar7[0x50];
              puVar7[0x11] = puVar7[0x51];
              puVar7[0x12] = puVar7[0x52];
              puVar7[0x13] = puVar7[0x53];
              puVar7[0x14] = puVar7[0x54];
              puVar7[0x15] = puVar7[0x55];
              puVar7[0x16] = puVar7[0x56];
              puVar7[0x17] = puVar7[0x57];
              puVar7[0x18] = puVar7[0x58];
              puVar7[0x19] = puVar7[0x59];
              puVar7[0x1a] = puVar7[0x5a];
              puVar7[0x1b] = puVar7[0x5b];
              puVar7[0x1c] = puVar7[0x5c];
              puVar7[0x1d] = puVar7[0x5d];
              puVar7[0x1e] = puVar7[0x5e];
              *(undefined4 *)(puVar7 + 0x1f) = *(undefined4 *)(puVar7 + 0x5f);
              *(undefined2 *)((longlong)puVar7 + 0xfc) = *(undefined2 *)((longlong)puVar7 + 0x2fc);
              *puVar8 = puVar8[0x20];
              puVar8[1] = puVar8[0x21];
              puVar8[2] = puVar8[0x22];
              puVar8[3] = puVar8[0x23];
              puVar8[4] = puVar8[0x24];
              puVar8[5] = puVar8[0x25];
              puVar8[6] = puVar8[0x26];
              puVar8[7] = puVar8[0x27];
              puVar8[8] = puVar8[0x28];
              puVar8[9] = puVar8[0x29];
              puVar8[10] = puVar8[0x2a];
              puVar8[0xb] = puVar8[0x2b];
              puVar8[0xc] = puVar8[0x2c];
              puVar8[0xd] = puVar8[0x2d];
              puVar8[0xe] = puVar8[0x2e];
              *(undefined4 *)(puVar8 + 0xf) = *(undefined4 *)(puVar8 + 0x2f);
              *(undefined2 *)((longlong)puVar8 + 0x7c) = *(undefined2 *)((longlong)puVar8 + 0x17c);
              *(undefined1 *)((longlong)puVar8 + 0x7e) = *(undefined1 *)((longlong)puVar8 + 0x17e);
              *puVar9 = puVar9[0x20];
              puVar9[1] = puVar9[0x21];
              puVar9[2] = puVar9[0x22];
              puVar9[3] = puVar9[0x23];
              puVar9[4] = puVar9[0x24];
              puVar9[5] = puVar9[0x25];
              puVar9[6] = puVar9[0x26];
              puVar9[7] = puVar9[0x27];
              puVar9[8] = puVar9[0x28];
              puVar9[9] = puVar9[0x29];
              puVar9[10] = puVar9[0x2a];
              puVar9[0xb] = puVar9[0x2b];
              *(undefined4 *)(puVar9 + 0xc) = *(undefined4 *)(puVar9 + 0x2c);
              *(undefined4 *)((longlong)puVar9 + 100) = *(undefined4 *)((longlong)puVar9 + 0x164);
              *(undefined4 *)(puVar9 + 0xd) = *(undefined4 *)(puVar9 + 0x2d);
              *(undefined4 *)((longlong)puVar9 + 0x6c) = *(undefined4 *)((longlong)puVar9 + 0x16c);
              puVar9[0xe] = puVar9[0x2e];
              *(undefined4 *)(puVar9 + 0xf) = *(undefined4 *)(puVar9 + 0x2f);
              *(undefined2 *)((longlong)puVar9 + 0x7c) = *(undefined2 *)((longlong)puVar9 + 0x17c);
              *(undefined1 *)((longlong)puVar9 + 0x7e) = *(undefined1 *)((longlong)puVar9 + 0x17e);
              piVar3 = (int *)param_1[0x20];
              if (piVar3 != (int *)0x0) {
                LOCK();
                iVar5 = *piVar3;
                *piVar3 = *piVar3 + -1;
                UNLOCK();
                if (iVar5 == 1) {
                  FUN_1805277b0(param_1[0x21] + -0xfe);
                  FUN_1805277b0(param_1[0x22] + -0x80);
                  FUN_1805277b0(param_1[0x23] + -0x80);
                  FUN_1805277b0(param_1[0x20]);
                }
              }
              *local_68 = 1;
              param_1[0x20] = (longlong)local_68;
              *param_1 = (longlong)(puVar7 + 0x20);
              param_1[0x21] = (longlong)puVar7 + 0xfe;
              param_1[0x22] = (longlong)(puVar8 + 0x10);
              param_1[0x23] = (longlong)(puVar9 + 0x10);
              *(uint *)(param_1 + 1) = uVar13;
              goto LAB_18052067f;
            }
          }
        }
      }
    }
  }
  FUN_1805277b0(local_68);
  FUN_1805277b0(puVar7);
  FUN_1805277b0(puVar8);
  FUN_1805277b0(puVar9);
  uVar17 = 1;
LAB_18052067f:
  FUN_1805277b0(puVar10);
  return uVar17;
}



/* ===== 180520708 __acrt_initialize_locks ===== */

/* Library Function - Single Match
    __acrt_initialize_locks
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined4 __acrt_initialize_locks(void)

{
  BOOL BVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  do {
    BVar1 = InitializeCriticalSectionEx((LPCRITICAL_SECTION)(&DAT_180c9f580 + uVar3 * 0x28),4000,0);
    if (BVar1 == 0) {
      __acrt_uninitialize_locks(0);
      return 0;
    }
    DAT_180c9f7d8 = DAT_180c9f7d8 + 1;
    uVar2 = (int)uVar3 + 1;
    uVar3 = (ulonglong)uVar2;
  } while (uVar2 < 0xf);
  return 1;
}



/* ===== 180520750 __acrt_lock ===== */

/* Library Function - Multiple Matches With Different Base Names
    __acrt_lock
    __acrt_unlock
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_lock(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000180520762. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EnterCriticalSection((LPCRITICAL_SECTION)(&DAT_180c9f580 + (longlong)param_1 * 0x28));
  return;
}



/* ===== 18052076c __acrt_uninitialize_locks ===== */

/* Library Function - Single Match
    __acrt_uninitialize_locks
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined8 __acrt_uninitialize_locks(void)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)DAT_180c9f7d8;
  while ((int)uVar1 != 0) {
    uVar1 = (ulonglong)((int)uVar1 - 1);
    DeleteCriticalSection((LPCRITICAL_SECTION)(&DAT_180c9f580 + uVar1 * 0x28));
    DAT_180c9f7d8 = DAT_180c9f7d8 - 1;
  }
  return 1;
}



/* ===== 1805207a4 __acrt_unlock ===== */

/* Library Function - Single Match
    __acrt_unlock
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_unlock(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001805207b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(&DAT_180c9f580 + (longlong)param_1 * 0x28));
  return;
}



/* ===== 1805207c0 FUN_1805207c0 ===== */

void FUN_1805207c0(void)

{
  FUN_18052cd98();
                    /* WARNING: Could not recover jumptable at 0x0001805207d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_180c9f620);
  return;
}



/* ===== 1805207ec FUN_1805207ec ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1805207ec(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,undefined4 *param_4)

{
  short sVar1;
  short sVar2;
  longlong lVar3;
  short *psVar4;
  
  __acrt_lock(*param_2);
  FUN_180520d94(*(undefined8 *)*param_3,*(undefined8 *)(*(longlong *)param_3[1] + 0x90));
  lVar3 = FUN_1805215d0(*(undefined8 *)*param_3,*(undefined4 *)param_3[3],*(undefined8 *)param_3[4])
  ;
  *(longlong *)param_3[2] = lVar3;
  if (lVar3 == 0) {
    __acrt_release_locale_ref(*(undefined8 *)*param_3);
    __acrt_free_locale(*(undefined8 *)*param_3);
  }
  else {
    psVar4 = *(short **)param_3[4];
    if (psVar4 != (short *)0x0) {
      lVar3 = (longlong)&DAT_1809198c8 - (longlong)psVar4;
      do {
        sVar1 = *psVar4;
        sVar2 = *(short *)((longlong)psVar4 + lVar3);
        if (sVar1 != sVar2) break;
        psVar4 = psVar4 + 1;
      } while (sVar2 != 0);
      if (sVar1 != sVar2) {
        LOCK();
        DAT_180c9f7dc = 1;
        UNLOCK();
      }
    }
    _updatetlocinfoEx_nolock(*(longlong *)param_3[1] + 0x90,*(undefined8 *)*param_3);
    __acrt_release_locale_ref(*(undefined8 *)*param_3);
    if (((*(byte *)(*(longlong *)param_3[1] + 0x3a8) & 2) == 0) && (((byte)DAT_18091a130 & 1) == 0))
    {
      _updatetlocinfoEx_nolock(&DAT_180c9f988,*(undefined8 *)(*(longlong *)param_3[1] + 0x90));
      PTR_PTR_180919708 = (undefined *)DAT_180c9f988[0x1f];
      PTR_DAT_180919740 = (undefined *)*DAT_180c9f988;
      _DAT_1809198cc = *(undefined4 *)(DAT_180c9f988 + 1);
    }
  }
  __acrt_unlock(*param_4);
  return;
}



/* ===== 180520928 __crt_seh_guarded_call<void>::operator()<<lambda_410d79af7f07d98d83a3f525b3859a53>,<lambda_3e16ef9562a7dcce91392c22ab16ea36>&___ptr64,<lambda_38119f0e861e05405d8a144b9b982f0a>_> ===== */

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
  longlong lVar1;
  longlong *plVar2;
  
  __acrt_lock(*(undefined4 *)param_1);
  for (plVar2 = &DAT_180c9f988; plVar2 != &DAT_180c9f990; plVar2 = plVar2 + 1) {
    if ((undefined **)*plVar2 != &PTR_DAT_180919760) {
      lVar1 = _updatetlocinfoEx_nolock(plVar2,&PTR_DAT_180919760);
      *plVar2 = lVar1;
    }
  }
  __acrt_unlock(*(undefined4 *)param_3);
  return;
}



/* ===== 180520998 __crt_seh_guarded_call<void>::operator()<<lambda_7f2adfce497ff2baa965cd4f576ecfd1>,<lambda_2a444430fde8c29194d880d93eed5e8f>&___ptr64,<lambda_8dff2cf36a5417162780cd64fa2883ef>&___ptr64> ===== */

/* Library Function - Single Match
    public: void __cdecl __crt_seh_guarded_call<void>::operator()<class
   <lambda_7f2adfce497ff2baa965cd4f576ecfd1>,class <lambda_2a444430fde8c29194d880d93eed5e8f> &
   __ptr64,class <lambda_8dff2cf36a5417162780cd64fa2883ef> & __ptr64>(class
   <lambda_7f2adfce497ff2baa965cd4f576ecfd1> && __ptr64,class
   <lambda_2a444430fde8c29194d880d93eed5e8f> & __ptr64,class
   <lambda_8dff2cf36a5417162780cd64fa2883ef> & __ptr64) __ptr64
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __thiscall
__crt_seh_guarded_call<void>::
operator()<<lambda_7f2adfce497ff2baa965cd4f576ecfd1>,<lambda_2a444430fde8c29194d880d93eed5e8f>&___ptr64,<lambda_8dff2cf36a5417162780cd64fa2883ef>&___ptr64>
          (__crt_seh_guarded_call<void> *this,<lambda_7f2adfce497ff2baa965cd4f576ecfd1> *param_1,
          <lambda_2a444430fde8c29194d880d93eed5e8f> *param_2,
          <lambda_8dff2cf36a5417162780cd64fa2883ef> *param_3)

{
  <lambda_2a444430fde8c29194d880d93eed5e8f>::operator()(param_2);
  *(uint *)(**(longlong **)param_3 + 0x3a8) = *(uint *)(**(longlong **)param_3 + 0x3a8) & 0xffffffef
  ;
  return;
}



/* ===== 1805209c4 <lambda_2a444430fde8c29194d880d93eed5e8f>::operator() ===== */

/* Library Function - Single Match
    public: __cdecl <lambda_2a444430fde8c29194d880d93eed5e8f>::operator()(void)const __ptr64
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __thiscall
<lambda_2a444430fde8c29194d880d93eed5e8f>::operator()
          (<lambda_2a444430fde8c29194d880d93eed5e8f> *this)

{
  longlong lVar1;
  undefined1 local_res8 [8];
  undefined4 local_res10 [2];
  undefined4 local_res18 [2];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  lVar1 = _calloc_base(1,0x158);
  **(longlong **)this = lVar1;
  FUN_1805277b0(0);
  if (lVar1 != 0) {
    local_38 = *(undefined8 *)this;
    local_30 = *(undefined8 *)(this + 8);
    local_28 = *(undefined8 *)(this + 0x10);
    local_20 = *(undefined8 *)(this + 0x18);
    local_18 = *(undefined8 *)(this + 0x20);
    local_res10[0] = 4;
    local_res18[0] = 4;
    FUN_1805207ec(local_res8,local_res18,&local_38,local_res10);
  }
  return;
}



/* ===== 180520a54 FUN_180520a54 ===== */

void FUN_180520a54(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_180515c10();
  if (iVar1 == 0) {
    iVar1 = FUN_180515c10();
    if (iVar1 == 0) {
      *(undefined1 *)(param_1 + 0x18) = 1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
}



/* ===== 180520acc FUN_180520acc ===== */

longlong FUN_180520acc(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  if (((param_1 == 0) || (uVar2 = FUN_180512dc0(param_1,0x55), 0x54 < uVar2)) ||
     (lVar3 = _malloc_base(uVar2 * 2 + 2), lVar3 == 0)) {
    return 0;
  }
  iVar1 = FUN_180515c10();
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  return lVar3;
}



/* ===== 180520b50 FUN_180520b50 ===== */

undefined4 FUN_180520b50(void)

{
  undefined4 uVar1;
  
  uVar1 = DAT_180c9f7dc;
  LOCK();
  DAT_180c9f7dc = 1;
  UNLOCK();
  return uVar1;
}



/* ===== 180520b5c __acrt_uninitialize_locale ===== */

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



/* ===== 180520b8c FUN_180520b8c ===== */

void FUN_180520b8c(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  
  iVar1 = FUN_180535f30();
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  if (*(short *)(param_3 + 0x80) != 0) {
    FUN_1805212d8(param_1,param_2,2,&DAT_18057c038,(short *)(param_3 + 0x80));
  }
  if (*(short *)(param_3 + 0x100) != 0) {
    FUN_1805212d8(param_1,param_2,2,&DAT_1806d2b54,(short *)(param_3 + 0x100));
  }
  return;
}



/* ===== 180520c30 FUN_180520c30 ===== */

undefined8 FUN_180520c30(longlong param_1,short *param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  
  FUN_180540170(param_1,0,0x1ca);
  if (*param_2 != 0) {
    if ((*param_2 != 0x2e) || (param_2[1] == 0)) {
      iVar2 = 0;
      do {
        uVar4 = FUN_180536100(param_2,&DAT_18057c030);
        if (uVar4 == 0) {
          return 0xffffffff;
        }
        sVar1 = param_2[uVar4];
        if (iVar2 == 0) {
          if (0x3f < uVar4) {
            return 0xffffffff;
          }
          iVar3 = FUN_180515c10();
          if (iVar3 != 0) goto LAB_180520d7f;
          if (sVar1 != 0x2e) goto LAB_180520d32;
          iVar2 = 1;
        }
        else {
          if (iVar2 == 1) {
            if (0x3f < uVar4) {
              return 0xffffffff;
            }
            if (sVar1 == 0x5f) {
              return 0xffffffff;
            }
          }
          else {
            if (iVar2 != 2) {
              return 0xffffffff;
            }
            if (0xf < uVar4) {
              return 0xffffffff;
            }
            if ((sVar1 != 0) && (sVar1 != 0x2c)) {
              return 0xffffffff;
            }
          }
          iVar3 = FUN_180515c10();
          if (iVar3 != 0) goto LAB_180520d7f;
LAB_180520d32:
          if (sVar1 == 0x2c) {
            return 0;
          }
          if (sVar1 == 0) {
            return 0;
          }
        }
        param_2 = param_2 + uVar4 + 1;
        iVar2 = iVar2 + 1;
      } while( true );
    }
    iVar2 = FUN_180515c10();
    if (iVar2 != 0) {
LAB_180520d7f:
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    *(undefined2 *)(param_1 + 0x11e) = 0;
  }
  return 0;
}



/* ===== 180520d94 FUN_180520d94 ===== */

void FUN_180520d94(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  if (((param_2 != (undefined8 *)0x0) && (param_1 != (undefined8 *)0x0)) && (param_1 != param_2)) {
    lVar6 = 2;
    puVar5 = param_1;
    do {
      puVar8 = puVar5;
      puVar7 = param_2;
      uVar4 = puVar7[1];
      *puVar8 = *puVar7;
      puVar8[1] = uVar4;
      uVar4 = puVar7[3];
      puVar8[2] = puVar7[2];
      puVar8[3] = uVar4;
      uVar4 = puVar7[5];
      puVar8[4] = puVar7[4];
      puVar8[5] = uVar4;
      uVar4 = puVar7[7];
      puVar8[6] = puVar7[6];
      puVar8[7] = uVar4;
      uVar4 = puVar7[9];
      puVar8[8] = puVar7[8];
      puVar8[9] = uVar4;
      uVar4 = puVar7[0xb];
      puVar8[10] = puVar7[10];
      puVar8[0xb] = uVar4;
      uVar4 = puVar7[0xd];
      puVar8[0xc] = puVar7[0xc];
      puVar8[0xd] = uVar4;
      uVar4 = puVar7[0xf];
      puVar8[0xe] = puVar7[0xe];
      puVar8[0xf] = uVar4;
      lVar6 = lVar6 + -1;
      param_2 = puVar7 + 0x10;
      puVar5 = puVar8 + 0x10;
    } while (lVar6 != 0);
    uVar4 = puVar7[0x11];
    puVar8[0x10] = puVar7[0x10];
    puVar8[0x11] = uVar4;
    uVar4 = puVar7[0x13];
    puVar8[0x12] = puVar7[0x12];
    puVar8[0x13] = uVar4;
    uVar4 = puVar7[0x15];
    puVar8[0x14] = puVar7[0x14];
    puVar8[0x15] = uVar4;
    uVar1 = *(undefined4 *)((longlong)puVar7 + 0xb4);
    uVar2 = *(undefined4 *)(puVar7 + 0x17);
    uVar3 = *(undefined4 *)((longlong)puVar7 + 0xbc);
    *(undefined4 *)(puVar8 + 0x16) = *(undefined4 *)(puVar7 + 0x16);
    *(undefined4 *)((longlong)puVar8 + 0xb4) = uVar1;
    *(undefined4 *)(puVar8 + 0x17) = uVar2;
    *(undefined4 *)((longlong)puVar8 + 0xbc) = uVar3;
    uVar1 = *(undefined4 *)((longlong)puVar7 + 0xc4);
    uVar2 = *(undefined4 *)(puVar7 + 0x19);
    uVar3 = *(undefined4 *)((longlong)puVar7 + 0xcc);
    *(undefined4 *)(puVar8 + 0x18) = *(undefined4 *)(puVar7 + 0x18);
    *(undefined4 *)((longlong)puVar8 + 0xc4) = uVar1;
    *(undefined4 *)(puVar8 + 0x19) = uVar2;
    *(undefined4 *)((longlong)puVar8 + 0xcc) = uVar3;
    puVar8[0x1a] = puVar7[0x1a];
    *(undefined4 *)(param_1 + 2) = 0;
    __acrt_add_locale_ref();
  }
  return;
}



/* ===== 180520e54 FUN_180520e54 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

short * FUN_180520e54(short *param_1,short *param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5,uint *param_6)

{
  short sVar1;
  short sVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  short *psVar8;
  short *psVar9;
  uint *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  short *psVar13;
  char cVar14;
  ulonglong uVar15;
  undefined1 auStackY_2a8 [32];
  uint *local_278;
  short *local_270;
  undefined8 local_268;
  undefined8 local_260;
  longlong local_258;
  char local_250;
  undefined8 local_248;
  uint *local_240;
  undefined8 local_238;
  short *local_230;
  undefined1 local_228 [256];
  ushort local_128;
  ushort local_126;
  ushort local_124;
  short local_122;
  short local_120;
  short sStack_11e;
  short local_108 [88];
  ulonglong local_58;
  
  local_58 = DAT_180919500 ^ (ulonglong)auStackY_2a8;
  local_248 = param_5;
  local_240 = param_6;
  if (param_1 == (short *)0x0) {
    return (short *)0x0;
  }
  local_238 = param_3;
  local_230 = param_2;
  if ((*param_1 == 0x43) && (param_1[1] == 0)) {
    iVar4 = FUN_180535f30();
    if (iVar4 == 0) {
      *param_6 = 0;
      return param_2;
    }
    goto LAB_1805212ab;
  }
  lVar7 = FUN_180529860();
  local_258 = lVar7 + 0x98;
  local_260 = param_5;
  cVar14 = '\0';
  local_250 = '\0';
  local_278 = (uint *)(lVar7 + 0xb8);
  psVar9 = (short *)(lVar7 + 0xbc);
  psVar13 = (short *)(lVar7 + 0x1c2);
  local_270 = psVar9;
  local_268 = param_4;
  iVar4 = FUN_180515c10();
  if (iVar4 != 0) goto LAB_1805212ab;
  uVar11 = 0xffffffffffffffff;
  uVar15 = 0xffffffffffffffff;
  do {
    uVar12 = uVar15;
    uVar15 = uVar12 + 1;
  } while (param_1[uVar15] != 0);
  if (uVar15 < 0x83) {
    psVar8 = psVar13;
    do {
      sVar1 = *psVar8;
      sVar2 = *(short *)((longlong)psVar8 + ((longlong)param_1 - (longlong)psVar13));
      if (sVar1 != sVar2) break;
      psVar8 = psVar8 + 1;
    } while (sVar2 != 0);
    if (sVar1 != sVar2) {
      lVar7 = (longlong)param_1 - (longlong)psVar9;
      do {
        sVar1 = *psVar9;
        sVar2 = *(short *)((longlong)psVar9 + lVar7);
        if (sVar1 != sVar2) break;
        psVar9 = psVar9 + 1;
      } while (sVar2 != 0);
      if (sVar1 != sVar2) goto LAB_180520fd0;
    }
    puVar10 = local_278;
LAB_180521284:
    *local_240 = *puVar10;
    iVar4 = FUN_180535f30();
    if (iVar4 != 0) goto LAB_1805212ab;
  }
  else {
LAB_180520fd0:
    FUN_180540170(local_228,0,0x1ca);
    cVar3 = FUN_18052cd84();
    iVar4 = FUN_180520c30(local_228,param_1);
    puVar10 = local_278;
    if (iVar4 == 0) {
      if (cVar3 == '\0') {
        iVar4 = FUN_180538304();
      }
      else {
        iVar4 = FUN_1805378a4(local_228,local_278,local_228);
      }
      if (iVar4 == 0) goto LAB_180521074;
      FUN_180520b8c(psVar13,0x83,local_228);
      do {
        uVar11 = uVar11 + 1;
      } while (local_108[uVar11] != 0);
      cVar14 = '\x01';
      iVar4 = FUN_180515c10();
      if (iVar4 != 0) goto LAB_1805212c0;
LAB_180521248:
      if ((*param_1 == 0) || (0x82 < uVar15)) {
        *local_270 = 0;
      }
      else {
        iVar4 = FUN_180515c10();
        if (iVar4 != 0) {
LAB_1805212c0:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      goto LAB_180521284;
    }
LAB_180521074:
    iVar4 = FUN_18052caa8(param_1);
    if (iVar4 != 0) {
      local_278 = (uint *)((ulonglong)local_278 & 0xffffffff00000000);
      iVar4 = FUN_18052c8e4(param_1,0x20001004,&local_278,2);
      if ((iVar4 == 0) || (uVar5 = (uint)local_278, (uint)local_278 == 0)) {
        uVar5 = 0xfde9;
      }
      *puVar10 = uVar5 & 0xffff;
      iVar4 = FUN_180515c10();
      if (iVar4 != 0) goto LAB_1805212c0;
      psVar9 = param_1;
LAB_180521239:
      FUN_180520a54(&local_268,psVar9,uVar12 + 2);
      cVar14 = local_250;
      goto LAB_180521248;
    }
    cVar3 = FUN_180521bd0(local_228,param_1);
    if ((cVar3 != '\0') && (iVar4 = FUN_18052caa8(local_108), iVar4 != 0)) {
      if (local_128 == 0) {
        local_278 = (uint *)((ulonglong)local_278 & 0xffffffff00000000);
        iVar4 = FUN_18052c8e4(local_108,0x20001004,&local_278,2);
        if ((iVar4 == 0) || (uVar5 = (uint)local_278, (uint)local_278 == 0)) goto LAB_1805211f2;
      }
      else {
        uVar6 = (uint)local_128;
        uVar5 = uVar6 + 0x20;
        if (0x19 < uVar6 - 0x41) {
          uVar5 = uVar6;
        }
        if (uVar5 == 0x75) {
          uVar5 = local_126 + 0x20;
          if (0x19 < local_126 - 0x41) {
            uVar5 = (uint)local_126;
          }
          if (uVar5 == 0x74) {
            uVar5 = local_124 + 0x20;
            if (0x19 < local_124 - 0x41) {
              uVar5 = (uint)local_124;
            }
            if (((uVar5 == 0x66) && (local_122 == 0x38)) && (local_120 == 0)) goto LAB_1805211f2;
          }
        }
        if (((local_122 != 0x2d) || (local_120 != 0x38)) || (sStack_11e != 0)) goto LAB_18052118d;
LAB_1805211f2:
        uVar5 = 0xfde9;
      }
      *puVar10 = uVar5 & 0xffff;
      iVar4 = FUN_180515c10();
      if (iVar4 != 0) goto LAB_1805212c0;
      do {
        uVar12 = uVar11;
        uVar11 = uVar12 + 1;
      } while (local_108[uVar12 + 1] != 0);
      psVar9 = local_108;
      goto LAB_180521239;
    }
LAB_18052118d:
    psVar13 = (short *)0x0;
  }
  if ((cVar14 != '\0') || (iVar4 = FUN_180515c10(), iVar4 == 0)) {
    return psVar13;
  }
LAB_1805212ab:
                    /* WARNING: Subroutine does not return */
  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
}



/* ===== 1805212d8 FUN_1805212d8 ===== */

void FUN_1805212d8(undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if (0 < param_3) {
    iVar2 = 0;
    do {
      iVar1 = FUN_180535ea0();
      if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_3);
  }
  return;
}



/* ===== 180521340 _wsetlocale ===== */

/* Library Function - Single Match
    _wsetlocale
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

wchar_t * __cdecl _wsetlocale(int _Category,wchar_t *_Locale)

{
  undefined4 *puVar1;
  int local_res8 [2];
  wchar_t *local_res10;
  <lambda_7f2adfce497ff2baa965cd4f576ecfd1> local_res18 [8];
  longlong local_res20;
  wchar_t *local_48;
  undefined8 local_40;
  longlong *local_38;
  undefined8 *local_30;
  longlong *local_28;
  wchar_t **local_20;
  int *local_18;
  wchar_t **local_10;
  
  local_48 = (wchar_t *)0x0;
  local_40 = 0;
  local_res8[0] = _Category;
  local_res10 = _Locale;
  if ((uint)_Category < 6) {
    local_res20 = FUN_180529860();
    FUN_18052cd98();
    __acrt_update_thread_locale_data();
    *(uint *)(local_res20 + 0x3a8) = *(uint *)(local_res20 + 0x3a8) | 0x10;
    local_38 = &local_res20;
    local_30 = &local_40;
    local_28 = &local_res20;
    local_20 = &local_48;
    local_18 = local_res8;
    local_10 = &local_res10;
    __crt_seh_guarded_call<void>::
    operator()<<lambda_7f2adfce497ff2baa965cd4f576ecfd1>,<lambda_2a444430fde8c29194d880d93eed5e8f>&___ptr64,<lambda_8dff2cf36a5417162780cd64fa2883ef>&___ptr64>
              ((__crt_seh_guarded_call<void> *)local_res18,local_res18,
               (<lambda_2a444430fde8c29194d880d93eed5e8f> *)&local_30,
               (<lambda_8dff2cf36a5417162780cd64fa2883ef> *)&local_38);
  }
  else {
    puVar1 = (undefined4 *)FUN_18051bfb0();
    *puVar1 = 0x16;
    FUN_180527740();
    local_48 = (wchar_t *)0x0;
  }
  return local_48;
}



/* ===== 1805213e4 FUN_1805213e4 ===== */

undefined4 * FUN_1805213e4(longlong param_1)

{
  longlong *plVar1;
  short sVar2;
  short sVar3;
  int *piVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  short *psVar10;
  longlong lVar11;
  undefined **ppuVar12;
  undefined8 *puVar13;
  
  puVar8 = (undefined4 *)_malloc_base(0x6a6);
  puVar9 = puVar8;
  if (puVar8 != (undefined4 *)0x0) {
    puVar9 = puVar8 + 1;
    *puVar8 = 1;
    *(undefined2 *)puVar9 = 0;
    puVar13 = (undefined8 *)(param_1 + 0x48);
    FUN_1805212d8(puVar9,0x351,3,PTR_u_LC_COLLATE_18057bf18,&DAT_18057c01c,*puVar13);
    ppuVar12 = &PTR_u_LC_COLLATE_18057bf18;
    bVar6 = true;
    do {
      iVar7 = FUN_180535ea0();
      if (iVar7 != 0) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      plVar1 = puVar13 + 4;
      psVar10 = (short *)*puVar13;
      lVar11 = *plVar1 - (longlong)psVar10;
      do {
        sVar2 = *psVar10;
        sVar3 = *(short *)((longlong)psVar10 + lVar11);
        if (sVar2 != sVar3) break;
        psVar10 = psVar10 + 1;
      } while (sVar3 != 0);
      bVar5 = false;
      if (sVar2 == sVar3) {
        bVar5 = bVar6;
      }
      ppuVar12 = ppuVar12 + 3;
      puVar13 = puVar13 + 4;
      FUN_1805212d8(puVar9,0x351,3,*ppuVar12,&DAT_18057c01c,*plVar1);
      bVar6 = bVar5;
    } while ((longlong)ppuVar12 < 0x18057bf78);
    if (bVar5) {
      FUN_1805277b0(puVar8);
      piVar4 = *(int **)(param_1 + 0x38);
      if (piVar4 != (int *)0x0) {
        LOCK();
        iVar7 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          FUN_1805277b0(*(undefined8 *)(param_1 + 0x38));
        }
      }
      piVar4 = *(int **)(param_1 + 0x30);
      if (piVar4 != (int *)0x0) {
        LOCK();
        iVar7 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          FUN_1805277b0(*(undefined8 *)(param_1 + 0x30));
        }
      }
      puVar9 = *(undefined4 **)(param_1 + 0x68);
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(undefined8 *)(param_1 + 0x20) = 0;
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(undefined8 *)(param_1 + 0x28) = 0;
    }
    else {
      piVar4 = *(int **)(param_1 + 0x38);
      if (piVar4 != (int *)0x0) {
        LOCK();
        iVar7 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          FUN_1805277b0(*(undefined8 *)(param_1 + 0x38));
        }
      }
      piVar4 = *(int **)(param_1 + 0x30);
      if (piVar4 != (int *)0x0) {
        LOCK();
        iVar7 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          FUN_1805277b0(*(undefined8 *)(param_1 + 0x30));
        }
      }
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(undefined8 *)(param_1 + 0x20) = 0;
      *(undefined4 **)(param_1 + 0x38) = puVar8;
      *(undefined4 **)(param_1 + 0x28) = puVar9;
    }
  }
  return puVar9;
}



/* ===== 1805215d0 FUN_1805215d0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1805215d0(longlong param_1,int param_2,wchar_t *param_3)

{
  short sVar1;
  short sVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  short *psVar6;
  size_t sVar7;
  longlong lVar8;
  longlong lVar9;
  size_t _MaxCount;
  int iVar10;
  int iVar11;
  longlong *plVar12;
  undefined **ppuVar13;
  undefined1 auStackY_248 [32];
  short local_208 [136];
  undefined1 local_f8 [176];
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStackY_248;
  if (param_2 != 0) {
    if (param_3 == (wchar_t *)0x0) {
      return *(undefined8 *)((longlong)param_2 * 0x20 + 0x28 + param_1);
    }
    uVar5 = FUN_180521868();
    return uVar5;
  }
  bVar3 = true;
  iVar10 = 0;
  if (param_3 != (wchar_t *)0x0) {
    if (((*param_3 == L'L') && (param_3[1] == L'C')) && (param_3[2] == L'_')) {
      do {
        psVar6 = (short *)FUN_18052f520(param_3,&DAT_18057c010);
        if (((psVar6 == (short *)0x0) ||
            (_MaxCount = (longlong)psVar6 - (longlong)param_3 >> 1, _MaxCount == 0)) ||
           (*psVar6 == 0x3b)) {
          return 0;
        }
        iVar11 = 1;
        ppuVar13 = &PTR_u_LC_COLLATE_18057bf18;
        do {
          iVar4 = wcsncmp((wchar_t *)*ppuVar13,param_3,_MaxCount);
          if (iVar4 == 0) {
            sVar7 = 0xffffffffffffffff;
            do {
              sVar7 = sVar7 + 1;
            } while (*(short *)(*ppuVar13 + sVar7 * 2) != 0);
            if (_MaxCount == sVar7) break;
          }
          iVar11 = iVar11 + 1;
          ppuVar13 = ppuVar13 + 3;
        } while ((longlong)ppuVar13 < 0x18057bf79);
        psVar6 = psVar6 + 1;
        lVar8 = FUN_180536100(psVar6,&DAT_18057c018);
        if ((lVar8 == 0) && (*psVar6 != 0x3b)) {
          return 0;
        }
        if (iVar11 < 6) {
          iVar4 = FUN_180515c10();
          if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
          if (0x105 < (ulonglong)(lVar8 * 2)) {
                    /* WARNING: Subroutine does not return */
            FUN_1804ed0f0();
          }
          local_208[lVar8] = 0;
          lVar9 = FUN_180521868(param_1,iVar11,local_208);
          if (lVar9 != 0) {
            iVar10 = iVar10 + 1;
          }
        }
      } while ((psVar6[lVar8] != 0) && (param_3 = psVar6 + lVar8 + 1, *param_3 != L'\0'));
    }
    else {
      lVar8 = FUN_180520e54(param_3,local_208,0x83,local_f8);
      if (lVar8 == 0) {
        return 0;
      }
      iVar11 = 0;
      plVar12 = (longlong *)(param_1 + 0x28);
      do {
        if (iVar11 != 0) {
          psVar6 = local_208;
          lVar8 = *plVar12 - (longlong)psVar6;
          do {
            sVar1 = *psVar6;
            sVar2 = *(short *)((longlong)psVar6 + lVar8);
            if (sVar1 != sVar2) break;
            psVar6 = psVar6 + 1;
          } while (sVar2 != 0);
          if ((sVar1 == sVar2) || (lVar8 = FUN_180521868(param_1,iVar11,local_208), lVar8 != 0)) {
            iVar10 = iVar10 + 1;
          }
          else {
            bVar3 = false;
          }
        }
        iVar11 = iVar11 + 1;
        plVar12 = plVar12 + 4;
      } while (iVar11 < 6);
      if (bVar3) goto LAB_180521773;
    }
    if (iVar10 == 0) {
      return 0;
    }
  }
LAB_180521773:
  uVar5 = FUN_1805213e4(param_1);
  return uVar5;
}



/* ===== 180521868 FUN_180521868 ===== */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_180521868(longlong param_1,int param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  short sVar2;
  short sVar3;
  undefined4 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int *piVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  undefined4 *puVar12;
  undefined8 uVar13;
  ushort *puVar14;
  uint uVar15;
  uint uVar16;
  short *psVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  undefined1 auStackY_368 [32];
  short local_308 [136];
  undefined1 local_1f8 [176];
  ushort local_148 [128];
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStackY_368;
  lVar19 = (longlong)param_2;
  lVar10 = FUN_180529860();
  puVar1 = (undefined8 *)(lVar10 + 0x2c8);
  lVar11 = FUN_180520e54(param_3,local_308,0x83,local_1f8);
  if (lVar11 != 0) {
    psVar17 = local_308;
    lVar20 = lVar19 * 0x20;
    lVar11 = *(longlong *)(lVar20 + 0x28 + param_1);
    lVar18 = lVar11 - (longlong)psVar17;
    do {
      sVar2 = *psVar17;
      sVar3 = *(short *)((longlong)psVar17 + lVar18);
      if (sVar2 != sVar3) break;
      psVar17 = psVar17 + 1;
    } while (sVar3 != 0);
    if (sVar2 == sVar3) {
      return lVar11;
    }
    lVar11 = -1;
    do {
      lVar11 = lVar11 + 1;
    } while (local_308[lVar11] != 0);
    puVar12 = (undefined4 *)_malloc_base(lVar11 * 2 + 6);
    if (puVar12 != (undefined4 *)0x0) {
      puVar5 = *(undefined **)(lVar20 + 0x28 + param_1);
      uVar6 = *(undefined8 *)(param_1 + 0x128 + lVar19 * 8);
      uVar4 = *(undefined4 *)(param_1 + 0xc);
      iVar9 = FUN_180535f30();
      if (iVar9 != 0) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      *(undefined4 **)(lVar20 + 0x28 + param_1) = puVar12 + 1;
      if ((local_308[0] == 0x43) && (local_308[1] == 0)) {
        uVar13 = 0;
      }
      else {
        uVar13 = FUN_180520acc(local_1f8);
      }
      *(undefined8 *)(param_1 + 0x128 + lVar19 * 8) = uVar13;
      if (param_2 == 2) {
        iVar9 = 0;
        *(undefined4 *)(param_1 + 0xc) = 0;
        lVar11 = 0;
        uVar13 = *(undefined8 *)(lVar10 + 0x2e8);
        do {
          if (*(int *)(param_1 + 0xc) == *(int *)(puVar1 + lVar11)) {
            if (iVar9 != 0) {
              *puVar1 = puVar1[iVar9];
              puVar1[iVar9] = uVar13;
            }
            break;
          }
          uVar7 = puVar1[lVar11];
          iVar9 = iVar9 + 1;
          puVar1[lVar11] = uVar13;
          lVar11 = lVar11 + 1;
          uVar13 = uVar7;
        } while (lVar11 < 5);
        if (iVar9 == 5) {
          iVar9 = FUN_180534e78(0,1,&DAT_18057be80);
          uVar16 = 0;
          uVar15 = 0;
          if (iVar9 != 0) {
            puVar14 = local_148;
            do {
              uVar16 = uVar16 + 1;
              *puVar14 = *puVar14 & 0x1ff;
              puVar14 = puVar14 + 1;
            } while (uVar16 < 0x7f);
            iVar9 = memcmp(local_148,PTR_DAT_180919738,0xfe);
            uVar15 = (uint)(iVar9 == 0);
          }
          *(uint *)(lVar10 + 0x2cc) = uVar15;
          *(undefined4 *)puVar1 = *(undefined4 *)(param_1 + 0xc);
        }
        *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(lVar10 + 0x2cc);
      }
      else if (param_2 == 1) {
        *(undefined4 *)(param_1 + 0x14) = 0;
      }
      else if (param_2 == 5) {
        *(undefined4 *)(param_1 + 0x18) = 0;
      }
      iVar9 = (*(code *)(&PTR_FUN_18057bf10)[lVar19 * 3])();
      if (iVar9 == 0) {
        if (puVar5 != &DAT_1809198c8) {
          piVar8 = *(int **)(lVar19 * 0x20 + 0x38 + param_1);
          LOCK();
          iVar9 = *piVar8;
          *piVar8 = *piVar8 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            FUN_1805277b0(*(undefined8 *)(lVar19 * 0x20 + 0x38 + param_1));
            FUN_1805277b0(*(undefined8 *)(lVar19 * 0x20 + 0x30 + param_1));
            FUN_1805277b0(*(undefined8 *)(param_1 + 0x128 + lVar19 * 8));
            *(undefined8 *)(lVar19 * 0x20 + 0x28 + param_1) = 0;
            *(undefined8 *)(param_1 + 0x128 + lVar19 * 8) = 0;
          }
        }
        *puVar12 = 1;
        *(undefined4 **)(lVar19 * 0x20 + 0x38 + param_1) = puVar12;
        return *(longlong *)(lVar19 * 0x20 + 0x28 + param_1);
      }
      *(undefined **)(lVar19 * 0x20 + 0x28 + param_1) = puVar5;
      FUN_1805277b0(*(undefined8 *)(param_1 + 0x128 + lVar19 * 8));
      *(undefined8 *)(param_1 + 0x128 + lVar19 * 8) = uVar6;
      FUN_1805277b0(puVar12);
      *(undefined4 *)(param_1 + 0xc) = uVar4;
    }
  }
  return 0;
}



/* ===== 180521bd0 FUN_180521bd0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 FUN_180521bd0(undefined8 param_1,short *param_2)

{
  short sVar1;
  char cVar2;
  undefined1 uVar3;
  longlong lVar4;
  undefined1 *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  int iVar9;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  longlong local_a0 [2];
  undefined1 local_90 [24];
  undefined1 local_78 [24];
  undefined1 local_60 [24];
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_c8;
  FUN_180540170(param_1,0,0x1ca);
  plVar8 = local_a0;
  uVar7 = 0;
LAB_180521c1b:
  do {
    iVar9 = 0;
    uVar6 = uVar7;
    while( true ) {
      if (3 < uVar6) {
        return 0;
      }
      if (iVar9 == 2) {
        lVar4 = -1;
        do {
          lVar4 = lVar4 + 1;
        } while (param_2[lVar4] != 0);
      }
      else {
        lVar4 = FUN_180536100(param_2,&DAT_18057c020);
      }
      plVar8[-1] = (longlong)param_2;
      uVar7 = uVar6 + 1;
      *plVar8 = lVar4;
      sVar1 = param_2[lVar4];
      param_2 = param_2 + lVar4 + 1;
      *(int *)(plVar8 + 1) = iVar9;
      plVar8 = plVar8 + 3;
      if (sVar1 == 0) goto LAB_180521c82;
      if (sVar1 == 0x2d) goto LAB_180521c1b;
      if (sVar1 != 0x2e) break;
      iVar9 = 2;
      uVar6 = uVar7;
    }
  } while (sVar1 == 0x5f);
LAB_180521c82:
  if (uVar6 == 0) {
    uVar3 = FUN_180521e14(param_1,local_a8);
    return uVar3;
  }
  if (uVar6 == 1) {
    cVar2 = FUN_180521e14(param_1,local_a8);
    if (cVar2 == '\0') {
      return 0;
    }
    cVar2 = FUN_180521f94(param_1,local_90);
    if (cVar2 != '\0') {
      return 1;
    }
    cVar2 = FUN_180521ea0(param_1,local_90);
    if (cVar2 != '\0') {
      return 1;
    }
    puVar5 = local_90;
  }
  else if (uVar6 == 2) {
    cVar2 = FUN_180521e14(param_1,local_a8);
    if (cVar2 == '\0') {
      return 0;
    }
    cVar2 = FUN_180521f94(param_1,local_90);
    if (cVar2 != '\0') {
      cVar2 = FUN_180521ea0(param_1,local_78);
      if (cVar2 != '\0') {
        return 1;
      }
      cVar2 = FUN_180521dcc(param_1,local_78);
      if (cVar2 != '\0') {
        return 1;
      }
    }
    cVar2 = FUN_180521ea0(param_1,local_90);
    if (cVar2 == '\0') {
      return 0;
    }
    puVar5 = local_78;
  }
  else {
    if (uVar6 != 3) {
      return 0;
    }
    cVar2 = FUN_180521e14(param_1,local_a8);
    if (cVar2 == '\0') {
      return 0;
    }
    cVar2 = FUN_180521f94(param_1,local_90);
    if (cVar2 == '\0') {
      return 0;
    }
    cVar2 = FUN_180521ea0(param_1,local_78);
    if (cVar2 == '\0') {
      return 0;
    }
    puVar5 = local_60;
  }
  cVar2 = FUN_180521dcc(param_1,puVar5);
  if (cVar2 == '\0') {
    return 0;
  }
  return 1;
}



