/* ===== 18053e9f0 FUN_18053e9f0 ===== */

float FUN_18053e9f0(float param_1,float param_2)

{
  double dVar1;
  float fVar2;
  double dVar3;
  
  dVar1 = (double)param_1;
  dVar3 = (double)param_2;
  if ((ulonglong)ABS(dVar1) >> 0x34 == 0x7ff) {
    if (((ulonglong)dVar1 & 0xfffffffffffff) == 0) goto LAB_18053eb0f;
    if ((ulonglong)ABS(dVar3) >> 0x34 != 0x7ff) goto LAB_18053eaf1;
  }
  else if ((ulonglong)ABS(dVar3) >> 0x34 != 0x7ff) {
    dVar3 = SQRT(dVar3 * dVar3 + dVar1 * dVar1);
    if (DAT_1808accc0 < dVar3) {
      fVar2 = (float)FUN_18052fc70("_hypotf",0x18,0x7f800000,3,0x11,0x22,param_1,param_2,2);
      return fVar2;
    }
    return (float)dVar3;
  }
  if (((ulonglong)dVar3 & 0xfffffffffffff) != 0) {
LAB_18053eaf1:
    return param_1 * param_1 + param_2 * param_2;
  }
LAB_18053eb0f:
  FUN_18052f090(0);
  return INFINITY;
}



/* ===== 18053eb30 FUN_18053eb30 ===== */

ulonglong FUN_18053eb30(float param_1)

{
  double dVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  ulonglong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if (((byte)DAT_180c9fd94 & 3) != 3) {
    uVar5 = FUN_18053eb50();
    return uVar5;
  }
  uVar4 = (uint)param_1 >> 0x17 & 0xff;
  fVar6 = 0.0;
  if (0x7f800000 < (uint)ABS(param_1)) {
    uVar5 = FUN_18053bea0();
    return uVar5;
  }
  if (uVar4 < 0x65) {
    FUN_18052f090(0x20);
    return (ulonglong)DAT_1808ac440;
  }
  if (0x7e < uVar4) {
    if (param_1 == DAT_1808ac34c) {
      return 0;
    }
    if (param_1 == DAT_1808acda0) {
      FUN_18052f090(0x20);
      return (ulonglong)DAT_1808ac680;
    }
    uVar5 = FUN_18052fc70("acosf",0xd,0xffc00000,1,8,0x21,param_1,0,1);
    return uVar5;
  }
  fVar7 = param_1;
  if ((int)param_1 < 0) {
    fVar7 = (float)((uint)param_1 ^ DAT_1808adec0);
  }
  if (uVar4 < 0x7e) {
    fVar2 = fVar7 * fVar7;
  }
  else {
    fVar2 = (DAT_1808ac34c - fVar7) * DAT_1808ac1f4;
    fVar7 = SQRT(fVar2);
    fVar6 = fVar7;
  }
  fVar8 = ((fVar2 * (fVar2 * (-(fVar2 * DAT_1805799e4) + DAT_1805799fc) - DAT_1805799e8) +
           DAT_1805799ec) * fVar2) / (-(fVar2 * DAT_1805799f4) + DAT_1805799f8);
  if (uVar4 < 0x7e) {
    dVar1 = DAT_180578270 - ((double)param_1 - (DAT_1805798d8 - (double)(fVar8 * param_1)));
    return CONCAT44((int)((ulonglong)dVar1 >> 0x20),(float)dVar1);
  }
  if ((int)param_1 < 0) {
    dVar1 = ((double)(fVar7 * fVar8) - DAT_1805798d8) + (double)fVar6;
    dVar1 = DAT_1808ac588 - (dVar1 + dVar1);
    return CONCAT44((int)((ulonglong)dVar1 >> 0x20),(float)dVar1);
  }
  fVar3 = (float)((uint)fVar6 & 0xffff0000);
  fVar6 = (-(fVar3 * fVar3) + fVar2) / (fVar3 + fVar6);
  return (ulonglong)(uint)(fVar8 * (fVar7 + fVar7) + fVar6 + fVar6 + fVar3 + fVar3);
}



/* ===== 18053eb50 FUN_18053eb50 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_18053eb50(float param_1)

{
  float fVar1;
  uint uVar2;
  double dVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar6 = 0.0;
  uVar2 = (uint)param_1 >> 0x17 & 0xff;
  if (0x7f800000 < (uint)ABS(param_1)) {
    fVar6 = (float)FUN_18052fdd0();
    return fVar6;
  }
  if (uVar2 < 0x65) {
    FUN_18052f090(0x20);
    return DAT_1808ac440;
  }
  if (uVar2 < 0x7f) {
    fVar4 = param_1;
    if ((int)param_1 < 0) {
      fVar4 = (float)((uint)param_1 ^ DAT_1808adec0);
    }
    if (uVar2 < 0x7e) {
      fVar5 = fVar4 * fVar4;
    }
    else {
      fVar5 = (DAT_1808ac34c - fVar4) * DAT_1808ac1f4;
      fVar6 = SQRT(fVar5);
      fVar4 = fVar6;
    }
    fVar7 = ((((DAT_1805799fc - fVar5 * DAT_1805799e4) * fVar5 - DAT_1805799e8) * fVar5 +
             DAT_1805799ec) * fVar5) / (DAT_1805799f8 - fVar5 * DAT_1805799f4);
    if (uVar2 < 0x7e) {
      return (float)(DAT_180578270 - ((double)param_1 - (DAT_1805798d8 - (double)(fVar7 * param_1)))
                    );
    }
    if ((int)param_1 < 0) {
      dVar3 = ((double)(fVar4 * fVar7) - DAT_1805798d8) + (double)fVar6;
      return (float)(DAT_1808ac588 - (dVar3 + dVar3));
    }
    fVar1 = (float)((uint)fVar6 & 0xffff0000);
    fVar6 = (fVar5 - fVar1 * fVar1) / (fVar1 + fVar6);
    return (fVar4 + fVar4) * fVar7 + fVar6 + fVar6 + fVar1 + fVar1;
  }
  if (param_1 == DAT_1808ac34c) {
    return 0.0;
  }
  if (param_1 == DAT_1808acda0) {
    FUN_18052f090(0x20);
    return DAT_1808ac680;
  }
  fVar6 = (float)FUN_18052fc70("acosf",0xd,0xffc00000,1,8,0x21,param_1,0,1);
  return fVar6;
}



/* ===== 18053ed70 FUN_18053ed70 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_18053ed70(float param_1)

{
  double dVar1;
  double dVar2;
  ulonglong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  
  if (((byte)DAT_180c9fd94 & 3) != 3) {
    uVar3 = FUN_18053ed90();
    return uVar3;
  }
  dVar6 = (double)param_1;
  dVar2 = ABS(dVar6);
  dVar7 = dVar6;
  if ((longlong)dVar6 < 0) {
    dVar7 = (double)((ulonglong)dVar6 ^ DAT_1808adeb0);
  }
  if ((ulonglong)dVar2 < 0x3fdc000000000000) {
    dVar2 = 0.0;
  }
  else if ((ulonglong)dVar2 < 0x3fe6000000000000) {
    dVar7 = ((dVar7 + dVar7) - DAT_1808ac500) / (dVar7 + DAT_1808ac548);
    dVar2 = DAT_18057ad08;
  }
  else if ((ulonglong)dVar2 < 0x3ff3000000000000) {
    dVar7 = (dVar7 - DAT_1808ac500) / (dVar7 + DAT_1808ac500);
    dVar2 = DAT_180579910;
  }
  else if ((ulonglong)dVar2 < 0x4003800000000000) {
    dVar7 = (dVar7 - DAT_1808ac518) / (dVar7 * DAT_1808ac518 + DAT_1808ac500);
    dVar2 = DAT_18057ad18;
  }
  else {
    if (0x7ff0000000000000 < (ulonglong)dVar2) {
      uVar3 = FUN_18053bea0(param_1,0);
      return uVar3;
    }
    if (DAT_1808adfe0 < dVar7) {
      if ((longlong)dVar6 < 0) {
        FUN_18052f090(0x20);
        return (ulonglong)DAT_1808acdb0;
      }
      FUN_18052f090(0x20);
      return (ulonglong)DAT_1808ac440;
    }
    dVar7 = DAT_1808acdb8 / dVar7;
    dVar2 = DAT_180578270;
  }
  dVar1 = dVar7 * dVar7;
  dVar2 = dVar2 - (((dVar1 * (dVar1 * DAT_1808adfb0 + DAT_1808adfb8) + DAT_1808adfc0) *
                   dVar7 * dVar1) /
                   (dVar1 * (dVar1 * DAT_1808adfc8 + DAT_1808adfd8) + DAT_1808adfd0) - dVar7);
  auVar5._8_8_ = 0;
  auVar5._0_8_ = (ulonglong)dVar2;
  if ((longlong)dVar6 < 0) {
    auVar5._0_8_ = (ulonglong)dVar2 ^ DAT_1808adeb0;
    auVar5._8_8_ = _UNK_1808adeb8;
  }
  auVar4._0_4_ = (float)auVar5._0_8_;
  auVar4._4_12_ = auVar5._4_12_;
  return auVar4._0_8_;
}



/* ===== 18053ed90 FUN_18053ed90 ===== */

ulonglong FUN_18053ed90(float param_1)

{
  double dVar1;
  ulonglong uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar4 = (double)param_1;
  dVar1 = ABS(dVar4);
  dVar5 = dVar4;
  if ((longlong)dVar4 < 0) {
    dVar5 = (double)CONCAT44((uint)((ulonglong)dVar4 >> 0x20) ^ DAT_1808adeb0._4_4_,
                             SUB84(dVar4,0) ^ (uint)DAT_1808adeb0);
  }
  if ((ulonglong)dVar1 < 0x3fdc000000000000) {
    dVar1 = 0.0;
  }
  else if ((ulonglong)dVar1 < 0x3fe6000000000000) {
    dVar5 = ((dVar5 + dVar5) - DAT_1808ac500) / (dVar5 + DAT_1808ac548);
    dVar1 = DAT_18057ad08;
  }
  else if ((ulonglong)dVar1 < 0x3ff3000000000000) {
    dVar5 = (dVar5 - DAT_1808ac500) / (dVar5 + DAT_1808ac500);
    dVar1 = DAT_180579910;
  }
  else if ((ulonglong)dVar1 < 0x4003800000000000) {
    dVar5 = (dVar5 - DAT_1808ac518) / (dVar5 * DAT_1808ac518 + DAT_1808ac500);
    dVar1 = DAT_18057ad18;
  }
  else {
    if (0x7ff0000000000000 < (ulonglong)dVar1) {
      uVar2 = FUN_18052fdd0(param_1);
      return uVar2;
    }
    if (DAT_1808adfe0 < dVar5) {
      if ((longlong)dVar4 < 0) {
        FUN_18052f090(0x20);
        return (ulonglong)DAT_1808acdb0;
      }
      FUN_18052f090(0x20);
      return (ulonglong)DAT_1808ac440;
    }
    dVar5 = DAT_1808acdb8 / dVar5;
    dVar1 = DAT_180578270;
  }
  dVar3 = dVar5 * dVar5;
  dVar1 = dVar1 - ((((dVar3 * DAT_1808adfb0 + DAT_1808adfb8) * dVar3 + DAT_1808adfc0) *
                   dVar5 * dVar3) /
                   ((dVar3 * DAT_1808adfc8 + DAT_1808adfd8) * dVar3 + DAT_1808adfd0) - dVar5);
  if ((longlong)dVar4 < 0) {
    dVar1 = (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) ^ DAT_1808adeb0._4_4_,
                             SUB84(dVar1,0) ^ (uint)DAT_1808adeb0);
  }
  return (ulonglong)(uint)(float)dVar1;
}



/* ===== 18053ef70 FUN_18053ef70 ===== */

ulonglong FUN_18053ef70(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  ulonglong uVar4;
  undefined1 auVar5 [16];
  undefined1 in_XMM0 [16];
  
  uVar4 = in_XMM0._0_8_;
  if (1 < DAT_1809194c8) {
    auVar5 = roundss(in_XMM0,in_XMM0,10);
    return auVar5._0_8_;
  }
  fVar3 = in_XMM0._0_4_;
  fVar1 = ABS(fVar3);
  if ((uint)fVar1 < 0x4b000000) {
    if ((uint)fVar1 < 0x3f800000) {
      if (fVar1 != 0.0) {
        if (fVar3 != fVar1) {
          return SUB168(ZEXT416(0x80000000),0);
        }
        return (ulonglong)(uint)DAT_1808ac34c;
      }
    }
    else {
      fVar2 = (float)(-1 << (0x96U - (char)((uint)fVar1 >> 0x17) & 0x1f) & (uint)fVar3);
      uVar4 = (ulonglong)(uint)fVar2;
      if ((fVar3 == fVar1) && (fVar3 != fVar2)) {
        uVar4 = (ulonglong)(uint)(fVar2 + DAT_1808ac34c);
      }
    }
  }
  else if (0x7f800000 < (uint)fVar1) {
    uVar4 = FUN_18052fdd0(fVar3);
    return uVar4;
  }
  return uVar4;
}



/* ===== 18053f010 FUN_18053f010 ===== */

double FUN_18053f010(void)

{
  double dVar1;
  double dVar2;
  ulonglong uVar3;
  double dVar4;
  undefined1 auVar5 [16];
  undefined1 in_XMM0 [16];
  
  dVar4 = in_XMM0._0_8_;
  if (1 < DAT_1809194c8) {
    auVar5 = roundsd(in_XMM0,in_XMM0,9);
    return auVar5._0_8_;
  }
  dVar1 = ABS(dVar4);
  uVar3 = (ulonglong)dVar1 >> 0x34;
  dVar2 = dVar4;
  if (uVar3 < 0x433) {
    if (uVar3 < 0x3ff) {
      if (dVar1 != 0.0) {
        if (dVar4 != dVar1) {
          return DAT_1808acdb8;
        }
        return 0.0;
      }
    }
    else {
      dVar2 = (double)(~((1L << (0x33U - (char)uVar3 & 0x3f)) - 1U) & (ulonglong)dVar4);
      if ((dVar4 != dVar1) && (dVar2 != dVar4)) {
        dVar2 = dVar2 - DAT_1808ac500;
      }
    }
  }
  else if (0x7ff0000000000000 < (ulonglong)dVar1) {
    dVar4 = (double)FUN_18052fdb0();
    return dVar4;
  }
  return dVar2;
}



/* ===== 18053f0d0 FUN_18053f0d0 ===== */

ulonglong FUN_18053f0d0(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  ulonglong uVar4;
  undefined1 auVar5 [16];
  undefined1 in_XMM0 [16];
  
  uVar4 = in_XMM0._0_8_;
  if (1 < DAT_1809194c8) {
    auVar5 = roundss(in_XMM0,in_XMM0,9);
    return auVar5._0_8_;
  }
  fVar3 = in_XMM0._0_4_;
  fVar1 = ABS(fVar3);
  if ((uint)fVar1 < 0x4b000000) {
    if ((uint)fVar1 < 0x3f800000) {
      if (fVar1 != 0.0) {
        if (fVar3 != fVar1) {
          return (ulonglong)DAT_1808acda0;
        }
        return 0;
      }
    }
    else {
      fVar2 = (float)(-1 << (0x96U - (char)((uint)fVar1 >> 0x17) & 0x1f) & (uint)fVar3);
      uVar4 = (ulonglong)(uint)fVar2;
      if ((fVar3 != fVar1) && (fVar3 != fVar2)) {
        uVar4 = (ulonglong)(uint)(fVar2 - DAT_1808ac34c);
      }
    }
  }
  else if (0x7f800000 < (uint)fVar1) {
    uVar4 = FUN_18052fdd0(fVar3);
    return uVar4;
  }
  return uVar4;
}



/* ===== 18053f160 FUN_18053f160 ===== */

ulonglong FUN_18053f160(ulonglong param_1)

{
  uint uVar1;
  float fVar2;
  ulonglong uVar3;
  double dVar4;
  
  fVar2 = (float)param_1;
  if (((byte)DAT_180c9fd94 & 3) == 3) {
    if (fVar2 == 1.0) {
      return 0;
    }
    if (0x7effffff < (int)fVar2 - 0x800000U) {
      if ((int)fVar2 * 2 == 0) {
        uVar3 = FUN_180529d80(1);
        return uVar3;
      }
      if (fVar2 == INFINITY) {
        return param_1;
      }
      if (((int)fVar2 < 0) || (0xfeffffff < (uint)((int)fVar2 * 2))) {
        uVar3 = FUN_180529de0();
        return uVar3;
      }
      fVar2 = (float)((int)(fVar2 * DAT_1808adfe8) + -0xb800000);
    }
    uVar1 = (int)fVar2 + 0xc0cd0000;
    uVar3 = (ulonglong)(uVar1 >> 0x13 & 0xf);
    dVar4 = *(double *)(&DAT_1808ae220 + uVar3 * 0x10) *
            (double)(float)((int)fVar2 - (uVar1 & 0xff800000)) - DAT_1808ac500;
    dVar4 = dVar4 * dVar4 * (dVar4 * dVar4 * DAT_1808ae320 + DAT_1808ae328 * dVar4 + DAT_1808ae330)
            + dVar4 * DAT_1808ae338 +
              (double)((int)uVar1 >> 0x17) + *(double *)(&DAT_1808ae228 + uVar3 * 0x10);
    return CONCAT44((int)((ulonglong)dVar4 >> 0x20),(float)dVar4);
  }
  if (fVar2 == 1.0) {
    return 0;
  }
  if (0x7effffff < (int)fVar2 - 0x800000U) {
    if ((int)fVar2 * 2 == 0) {
      uVar3 = FUN_180529d80(1);
      return uVar3;
    }
    if (fVar2 == INFINITY) {
      return param_1;
    }
    if (((int)fVar2 < 0) || (0xfeffffff < (uint)((int)fVar2 * 2))) {
      uVar3 = FUN_180529de0();
      return uVar3;
    }
    fVar2 = (float)((int)(fVar2 * DAT_1808adfe8) + -0xb800000);
  }
  uVar1 = (int)fVar2 + 0xc0cd0000;
  uVar3 = (ulonglong)(uVar1 >> 0x13 & 0xf);
  dVar4 = (double)(float)((int)fVar2 - (uVar1 & 0xff800000)) *
          *(double *)(&DAT_1808ae220 + uVar3 * 0x10) - DAT_1808ac500;
  return (ulonglong)
         (uint)(float)((double)((int)uVar1 >> 0x17) + *(double *)(&DAT_1808ae228 + uVar3 * 0x10) +
                       dVar4 * DAT_1808ae338 +
                      (dVar4 * DAT_1808ae328 + DAT_1808ae330 + dVar4 * dVar4 * DAT_1808ae320) *
                      dVar4 * dVar4);
}



/* ===== 18053f270 FUN_18053f270 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_18053f270(undefined8 param_1,undefined8 param_2)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  undefined1 in_XMM0 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  
  uVar5 = in_XMM0._0_8_;
  fVar1 = in_XMM0._0_4_;
  if (0x7f7fffff < (uint)ABS(fVar1)) {
    if (fVar1 != INFINITY) {
      if (fVar1 == -INFINITY) goto LAB_18053f3fa;
      uVar5 = (ulonglong)((uint)fVar1 | 0x400000);
    }
    return uVar5;
  }
  if (0.0 < fVar1) {
    uVar2 = (uint)fVar1 & 0x7fffff;
    uVar3 = (uint)ABS(fVar1) >> 0x17;
    if (uVar3 == 0) {
      fVar8 = (float)(uVar2 | 0x3f800000) - DAT_1808adff0;
      uVar2 = (uint)fVar8 & 0x7fffff;
      iVar4 = ((uint)fVar8 >> 0x17) - _DAT_1808ae080;
    }
    else {
      iVar4 = uVar3 - 0x7f;
    }
    auVar7._4_12_ = in_XMM0._4_12_;
    if (DAT_1808ae11c <= (float)((uint)(fVar1 - DAT_1808adff0) & _DAT_1808ae050)) {
      uVar3 = (uVar2 >> 0x10) + (uint)((uVar2 >> 0xf & 1) != 0);
      uVar5 = (ulonglong)uVar3;
      fVar1 = ((float)(uVar3 * 0x10000 | 0x3f000000) - (float)(uVar2 | 0x3f000000)) *
              *(float *)(&DAT_1808ae760 + uVar5 * 4);
      auVar6._4_12_ = DAT_1808ae0d0._4_12_;
      auVar6._0_4_ = (float)DAT_1808ae0d0 * (float)iVar4 + *(float *)(&DAT_1808ae340 + uVar5 * 4) +
                     (_DAT_1808ae0e0 * (float)iVar4 -
                     (fVar1 + (fVar1 * _DAT_1808ae100 + DAT_1808ae110) * fVar1 * fVar1)) +
                     *(float *)(&DAT_1808ae550 + uVar5 * 4);
      return auVar6._0_8_;
    }
    fVar1 = fVar1 - DAT_1808adff0;
    fVar8 = fVar1 / (_DAT_1808ae000 + fVar1);
    fVar9 = fVar8 + fVar8;
    auVar7._0_4_ = fVar1 + ((fVar9 * fVar9 * _DAT_1808ae0c0 + DAT_1808ae0b0) * fVar9 * fVar9 * fVar9
                           - fVar1 * fVar8);
    return auVar7._0_8_;
  }
  if (fVar1 == 0.0) {
    uVar5 = FUN_180532cf0(param_1,param_2,DAT_1808ae120);
    return uVar5;
  }
LAB_18053f3fa:
  uVar5 = FUN_180532cf0(param_1,param_2,DAT_1808ae124);
  return uVar5;
}



/* ===== 18053f430 FUN_18053f430 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_18053f430(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  uint uVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined1 auVar6 [64];
  undefined1 auVar7 [64];
  undefined1 auVar8 [64];
  undefined1 in_ZMM0 [64];
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  
  uVar5 = in_ZMM0._0_8_;
  fVar9 = in_ZMM0._0_4_;
  auVar6._16_48_ = in_ZMM0._16_48_;
  if (DAT_180c9fd94 != 0) {
    if ((uint)ABS(fVar9) < 0x7f800000) {
      if (0.0 < fVar9) {
        uVar2 = (uint)fVar9 & 0x7fffff;
        uVar4 = (uint)ABS(fVar9) >> 0x17;
        if (uVar4 == 0) {
          auVar12._4_12_ = _UNK_1808adff4;
          auVar12._0_4_ = DAT_1808adff0;
          auVar12 = vpor_avx(ZEXT416(uVar2),auVar12);
          auVar12 = ZEXT416((uint)(auVar12._0_4_ - DAT_1808adff0));
          auVar13 = vpsrld_avx(auVar12,0x17);
          auVar12 = vpand_avx(auVar12,_DAT_1808ae060);
          in_ZMM0 = ZEXT1664(auVar12);
          uVar2 = auVar12._0_4_;
          auVar1._4_12_ = _UNK_1808ae084;
          auVar1._0_4_ = _DAT_1808ae080;
          auVar12 = vpsubd_avx(auVar13,auVar1);
          auVar12 = vcvtdq2ps_avx(auVar12);
          fVar9 = auVar12._0_4_;
        }
        else {
          auVar12 = vcvtdq2ps_avx(ZEXT416(uVar4 - 0x7f));
          fVar9 = auVar12._0_4_;
        }
        if (DAT_1808ae11c <= (float)((uint)(in_ZMM0._0_4_ - DAT_1808adff0) & _DAT_1808ae050)) {
          uVar4 = (uVar2 >> 0x10) + (uint)((uVar2 >> 0xf & 1) != 0);
          uVar5 = (ulonglong)uVar4;
          fVar10 = ((float)(uVar4 * 0x10000 | 0x3f000000) - (float)(uVar2 | 0x3f000000)) *
                   *(float *)(&DAT_1808ae760 + uVar5 * 4);
          return (ulonglong)
                 (uint)(fVar9 * _DAT_1808ae0d0 + *(float *)(&DAT_1808ae340 + uVar5 * 4) +
                       (fVar9 * _DAT_1808ae0e0 -
                       ((fVar10 * _DAT_1808ae100 + DAT_1808ae110) * fVar10 * fVar10 + fVar10)) +
                       *(float *)(&DAT_1808ae550 + uVar5 * 4));
        }
        fVar10 = in_ZMM0._0_4_ - DAT_1808adff0;
        fVar11 = fVar10 / (_DAT_1808ae000 + fVar10);
        fVar9 = fVar11 + fVar11;
        return (ulonglong)
               (uint)(fVar10 + (fVar9 * fVar9 * fVar9 *
                                (_DAT_1808ae0c0 * fVar9 * fVar9 + DAT_1808ae0b0) - fVar10 * fVar11))
        ;
      }
      if (fVar9 == 0.0) {
        uVar5 = FUN_180532cf0(param_1,_DAT_1808ae010,DAT_1808ae120);
        return uVar5;
      }
    }
    else {
      if (fVar9 == INFINITY) {
        return uVar5;
      }
      if (fVar9 != -INFINITY) {
        uVar5 = FUN_180532cf0(param_1,(uint)fVar9 | 0x400000,DAT_1808ae128);
        return uVar5;
      }
    }
    uVar5 = FUN_180532cf0(param_1,_DAT_1808ae040,DAT_1808ae124);
    return uVar5;
  }
  if (0x7f7fffff < (uint)ABS(fVar9)) {
    if (fVar9 != INFINITY) {
      if (fVar9 == -INFINITY) goto LAB_18053f3fa;
      uVar5 = (ulonglong)((uint)fVar9 | 0x400000);
    }
    return uVar5;
  }
  if (0.0 < fVar9) {
    uVar2 = (uint)fVar9 & 0x7fffff;
    uVar4 = (uint)ABS(fVar9) >> 0x17;
    if (uVar4 == 0) {
      fVar10 = (float)(uVar2 | 0x3f800000) - DAT_1808adff0;
      uVar2 = (uint)fVar10 & 0x7fffff;
      iVar3 = ((uint)fVar10 >> 0x17) - _DAT_1808ae080;
    }
    else {
      iVar3 = uVar4 - 0x7f;
    }
    auVar8._4_60_ = in_ZMM0._4_60_;
    if (DAT_1808ae11c <= (float)((uint)(fVar9 - DAT_1808adff0) & _DAT_1808ae050)) {
      uVar4 = (uVar2 >> 0x10) + (uint)((uVar2 >> 0xf & 1) != 0);
      uVar5 = (ulonglong)uVar4;
      fVar9 = ((float)(uVar4 * 0x10000 | 0x3f000000) - (float)(uVar2 | 0x3f000000)) *
              *(float *)(&DAT_1808ae760 + uVar5 * 4);
      auVar6._4_12_ = _UNK_1808ae0d4;
      auVar6._0_4_ = _DAT_1808ae0d0;
      auVar7._4_60_ = auVar6._4_60_;
      auVar7._0_4_ = _DAT_1808ae0d0 * (float)iVar3 + *(float *)(&DAT_1808ae340 + uVar5 * 4) +
                     (_DAT_1808ae0e0 * (float)iVar3 -
                     (fVar9 + (fVar9 * _DAT_1808ae100 + DAT_1808ae110) * fVar9 * fVar9)) +
                     *(float *)(&DAT_1808ae550 + uVar5 * 4);
      return auVar7._0_8_;
    }
    fVar9 = fVar9 - DAT_1808adff0;
    fVar10 = fVar9 / (_DAT_1808ae000 + fVar9);
    fVar11 = fVar10 + fVar10;
    auVar8._0_4_ = fVar9 + ((fVar11 * fVar11 * _DAT_1808ae0c0 + DAT_1808ae0b0) *
                            fVar11 * fVar11 * fVar11 - fVar9 * fVar10);
    return auVar8._0_8_;
  }
  if (fVar9 == 0.0) {
    uVar5 = FUN_180532cf0(param_1,param_2,DAT_1808ae120);
    return uVar5;
  }
LAB_18053f3fa:
  uVar5 = FUN_180532cf0(param_1,param_2,DAT_1808ae124);
  return uVar5;
}



/* ===== 18053f600 FUN_18053f600 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_18053f600(undefined8 param_1)

{
  bool bVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  sbyte sVar12;
  byte bVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  double dVar18;
  longlong lVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  undefined8 uVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  double dVar27;
  uint uVar28;
  double dVar29;
  ulonglong in_XMM5_Qb;
  
  fVar9 = ABS((float)param_1);
  if (0x7f7fffff < (uint)fVar9) {
    uVar22 = FUN_1805307b0();
    return uVar22;
  }
  dVar29 = (double)(float)param_1;
  dVar18 = ABS(dVar29);
  if ((uint)fVar9 < 0x3f490fdc) {
    if ((uint)fVar9 < 0x39000000) {
      if ((uint)fVar9 < 0x32000000) {
        return param_1;
      }
      dVar18 = dVar29 * dVar29 * dVar29 * DAT_1808ae1b8;
    }
    else {
      dVar18 = dVar29 * dVar29;
      dVar18 = dVar18 * dVar29 *
               ((DAT_1808ae188 * dVar18 + DAT_1808ae180) /
               ((DAT_1808ae1a0 * dVar18 + DAT_1808ae198) * dVar18 + DAT_1808ae190));
    }
    auVar23._0_8_ = dVar18 + dVar29;
    auVar23._8_8_ = in_XMM5_Qb;
    auVar26._4_12_ = auVar23._4_12_;
    auVar26._0_4_ = (float)auVar23._0_8_;
    return auVar26._0_8_;
  }
  if ((longlong)dVar18 < DAT_1808ae1a8) {
    uVar28 = (uint)(_DAT_1808ae140 * (double)((ulonglong)dVar18 & _DAT_1808ae130) + DAT_1808ae1d0);
    dVar27 = (double)(int)uVar28;
    uVar28 = uVar28 & _DAT_1808ae150;
    dVar18 = (dVar18 - dVar27 * DAT_1808ae1d8) - dVar27 * DAT_1808ae1e0;
  }
  else {
    uVar21 = ((ulonglong)dVar18 >> 0x34) - 0x3ff;
    lVar19 = -((uVar21 >> 3) - 0x86);
    uVar14 = (ulonglong)dVar18 & 0xfffffffffffff | 0x10000000000000;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = *(ulonglong *)(&DAT_18057e7a0 + lVar19);
    auVar5._8_8_ = 0;
    auVar5._0_8_ = uVar14;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = SUB168(auVar2 * auVar5,8);
    uVar10 = SUB168(auVar2 * auVar5,0);
    auVar3._8_8_ = 0;
    auVar3._0_8_ = *(ulonglong *)(&UNK_18057e7a8 + lVar19);
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar14;
    uVar21 = uVar21 & 7;
    auVar8 = auVar3 * auVar6 + auVar8;
    uVar11 = auVar8._0_8_;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = *(ulonglong *)(&UNK_18057e7b0 + lVar19);
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar14;
    uVar20 = auVar8._8_8_ + SUB168(auVar4 * auVar7,0);
    uVar17 = 0;
    bVar13 = (byte)(0x36 - uVar21) & 0x3f;
    uVar14 = uVar20 >> bVar13;
    bVar1 = (bool)(((0x36 - uVar21 & 0x3f) != 0) * ((uVar20 >> bVar13 - 1 & 1) != 0));
    if (bVar1) {
      uVar20 = ~uVar20;
      uVar11 = ~uVar11;
      uVar10 = ~uVar10;
      uVar17 = 0x8000000000000000;
    }
    uVar28 = (int)uVar14 + (uint)bVar1 & 3;
    sVar12 = (char)uVar21 + 10;
    uVar14 = (uVar20 << sVar12) >> sVar12;
    lVar15 = uVar21 - 0x36;
    lVar19 = 0x3f;
    if (uVar14 != 0) {
      for (; uVar14 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    uVar20 = uVar11;
    if (uVar14 == 0) {
      lVar19 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar19 == 0; lVar19 = lVar19 + -1) {
        }
      }
      lVar15 = uVar21 - 0x76;
      uVar20 = uVar10;
      uVar14 = uVar11;
    }
    lVar16 = lVar19 + -0x34;
    if (lVar16 < 0) {
      bVar13 = -(byte)lVar16;
      uVar14 = uVar14 << (bVar13 & 0x3f) | uVar20 >> (-(bVar13 - 0x40) & 0x3f);
    }
    else if (lVar16 != 0) {
      uVar14 = uVar14 >> ((byte)lVar16 & 0x3f);
    }
    dVar18 = (double)(uVar14 & 0xffefffffffffffff | uVar17 | lVar15 + lVar19 + 0x3ff << 0x34) *
             DAT_1808ae1e8;
  }
  dVar27 = dVar18 * dVar18;
  dVar18 = dVar18 + dVar27 * dVar18 *
                    ((DAT_1808ae188 * dVar27 + DAT_1808ae180) /
                    ((DAT_1808ae1a0 * dVar27 + DAT_1808ae198) * dVar27 + DAT_1808ae190));
  if ((uVar28 & 1) == 1) {
    dVar18 = DAT_1808ae1f0 / dVar18;
  }
  auVar24._0_8_ = (double)((ulonglong)dVar18 ^ (ulonglong)dVar29 & _DAT_1808ae170);
  auVar24._8_8_ = in_XMM5_Qb & _UNK_1808ae178;
  auVar25._4_12_ = auVar24._4_12_;
  auVar25._0_4_ = (float)auVar24._0_8_;
  return auVar25._0_8_;
}



/* ===== 18053f920 FUN_18053f920 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_18053f920(void)

{
  bool bVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  double dVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  sbyte sVar19;
  byte bVar20;
  ulonglong uVar21;
  longlong lVar22;
  longlong lVar23;
  ulonglong uVar24;
  double dVar25;
  longlong lVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  float fVar29;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined8 uVar30;
  undefined1 auVar36 [64];
  undefined1 auVar37 [64];
  undefined1 auVar38 [64];
  undefined1 auVar39 [64];
  undefined1 auVar40 [64];
  undefined1 auVar41 [64];
  undefined1 auVar42 [64];
  undefined1 auVar43 [64];
  undefined1 auVar44 [64];
  undefined1 auVar45 [64];
  undefined1 in_ZMM0 [64];
  undefined1 auVar46 [16];
  undefined1 auVar47 [64];
  undefined1 auVar48 [64];
  undefined1 auVar49 [64];
  undefined1 auVar50 [64];
  undefined1 in_ZMM2 [64];
  undefined1 auVar51 [64];
  undefined1 auVar52 [64];
  undefined1 auVar53 [64];
  undefined1 in_ZMM3 [64];
  uint uVar54;
  double dVar55;
  undefined1 auVar56 [64];
  undefined1 in_ZMM5 [64];
  
  fVar29 = in_ZMM0._0_4_;
  auVar56._8_56_ = in_ZMM5._8_56_;
  auVar47._16_48_ = in_ZMM2._16_48_;
  if (DAT_180c9fd94 == 0) {
    fVar16 = ABS(fVar29);
    if (0x7f7fffff < (uint)fVar16) {
      uVar30 = FUN_1805307b0();
      return uVar30;
    }
    auVar56._0_8_ = (double)fVar29;
    dVar25 = ABS(auVar56._0_8_);
    auVar51._16_48_ = in_ZMM3._16_48_;
    auVar36._16_48_ = in_ZMM0._16_48_;
    if ((uint)fVar16 < 0x3f490fdc) {
      auVar47._0_16_ = auVar56._0_16_;
      if ((uint)fVar16 < 0x39000000) {
        if ((uint)fVar16 < 0x32000000) {
          return in_ZMM0._0_8_;
        }
        auVar48._8_56_ = auVar47._8_56_;
        auVar48._0_8_ = auVar56._0_8_ * auVar56._0_8_;
        auVar36._0_16_ = auVar48._0_16_;
        auVar37._8_56_ = auVar36._8_56_;
        auVar37._0_8_ = auVar48._0_8_ * auVar56._0_8_ * DAT_1808ae1b8 + auVar56._0_8_;
      }
      else {
        auVar38._16_48_ = auVar36._16_48_;
        auVar38._0_16_ = auVar47._0_16_;
        dVar25 = auVar56._0_8_ * auVar56._0_8_;
        auVar37._8_56_ = auVar38._8_56_;
        auVar37._0_8_ =
             auVar56._0_8_ +
             dVar25 * auVar56._0_8_ *
             ((DAT_1808ae188 * dVar25 + DAT_1808ae180) /
             ((DAT_1808ae1a0 * dVar25 + DAT_1808ae198) * dVar25 + DAT_1808ae190));
      }
      auVar45._4_60_ = auVar37._4_60_;
      auVar45._0_4_ = (float)auVar37._0_8_;
      return auVar45._0_8_;
    }
    auVar49._8_8_ = 0;
    auVar49._0_8_ = dVar25;
    if ((longlong)dVar25 < DAT_1808ae1a8) {
      uVar54 = (uint)(_DAT_1808ae140 * (double)((ulonglong)dVar25 & _DAT_1808ae130) + DAT_1808ae1d0)
      ;
      dVar55 = (double)(int)uVar54;
      auVar51._8_8_ = (double)(int)_UNK_1808ae148;
      auVar51._0_8_ = dVar55;
      uVar54 = uVar54 & _DAT_1808ae150;
      auVar49._16_48_ = auVar47._16_48_;
      auVar50._8_56_ = auVar49._8_56_;
      auVar50._0_8_ = dVar25 - dVar55 * DAT_1808ae1d8;
      in_ZMM3._8_56_ = auVar51._8_56_;
      in_ZMM3._0_8_ = dVar55 * DAT_1808ae1e0;
      auVar39._0_16_ = auVar50._0_16_;
      auVar39._16_48_ = auVar36._16_48_;
      auVar40._8_56_ = auVar39._8_56_;
      auVar40._0_8_ = auVar50._0_8_ - in_ZMM3._0_8_;
    }
    else {
      uVar28 = ((ulonglong)dVar25 >> 0x34) - 0x3ff;
      lVar26 = -((uVar28 >> 3) - 0x86);
      uVar21 = (ulonglong)dVar25 & 0xfffffffffffff | 0x10000000000000;
      auVar32._8_8_ = 0;
      auVar32._0_8_ = *(ulonglong *)(&DAT_18057e7a0 + lVar26);
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar21;
      auVar14._8_8_ = 0;
      auVar14._0_8_ = SUB168(auVar32 * auVar7,8);
      uVar17 = SUB168(auVar32 * auVar7,0);
      auVar2._8_8_ = 0;
      auVar2._0_8_ = *(ulonglong *)(&UNK_18057e7a8 + lVar26);
      auVar8._8_8_ = 0;
      auVar8._0_8_ = uVar21;
      uVar28 = uVar28 & 7;
      auVar14 = auVar2 * auVar8 + auVar14;
      uVar18 = auVar14._0_8_;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = *(ulonglong *)(&UNK_18057e7b0 + lVar26);
      auVar9._8_8_ = 0;
      auVar9._0_8_ = uVar21;
      uVar27 = auVar14._8_8_ + SUB168(auVar3 * auVar9,0);
      uVar24 = 0;
      bVar20 = (byte)(0x36 - uVar28) & 0x3f;
      uVar21 = uVar27 >> bVar20;
      bVar1 = (bool)(((0x36 - uVar28 & 0x3f) != 0) * ((uVar27 >> bVar20 - 1 & 1) != 0));
      if (bVar1) {
        uVar27 = ~uVar27;
        uVar18 = ~uVar18;
        uVar17 = ~uVar17;
        uVar24 = 0x8000000000000000;
      }
      uVar54 = (int)uVar21 + (uint)bVar1 & 3;
      sVar19 = (char)uVar28 + 10;
      uVar21 = (uVar27 << sVar19) >> sVar19;
      lVar22 = uVar28 - 0x36;
      lVar26 = 0x3f;
      if (uVar21 != 0) {
        for (; uVar21 >> lVar26 == 0; lVar26 = lVar26 + -1) {
        }
      }
      uVar27 = uVar18;
      if (uVar21 == 0) {
        lVar26 = 0x3f;
        if (uVar18 != 0) {
          for (; uVar18 >> lVar26 == 0; lVar26 = lVar26 + -1) {
          }
        }
        lVar22 = uVar28 - 0x76;
        uVar27 = uVar17;
        uVar21 = uVar18;
      }
      lVar23 = lVar26 + -0x34;
      if (lVar23 < 0) {
        bVar20 = -(byte)lVar23;
        uVar21 = uVar21 << (bVar20 & 0x3f) | uVar27 >> (-(bVar20 - 0x40) & 0x3f);
      }
      else if (lVar23 != 0) {
        uVar21 = uVar21 >> ((byte)lVar23 & 0x3f);
      }
      dVar25 = (double)(uVar21 & 0xffefffffffffffff | uVar24 | lVar22 + lVar26 + 0x3ff << 0x34);
      auVar41._8_8_ = 0;
      auVar41._0_8_ = dVar25;
      auVar41._16_48_ = auVar36._16_48_;
      auVar40._8_56_ = auVar41._8_56_;
      auVar40._0_8_ = dVar25 * DAT_1808ae1e8;
    }
    dVar25 = auVar40._0_8_;
    dVar55 = dVar25 * dVar25;
    auVar52._16_48_ = in_ZMM3._16_48_;
    auVar42._8_56_ = auVar40._8_56_;
    auVar42._0_8_ =
         dVar25 + dVar55 * dVar25 *
                  ((DAT_1808ae188 * dVar55 + DAT_1808ae180) /
                  ((DAT_1808ae1a0 * dVar55 + DAT_1808ae198) * dVar55 + DAT_1808ae190));
    if ((uVar54 & 1) == 1) {
      auVar52._8_8_ = 0;
      auVar52._0_8_ = DAT_1808ae1f0;
      auVar53._8_56_ = auVar52._8_56_;
      auVar53._0_8_ = DAT_1808ae1f0 / auVar42._0_8_;
      auVar42._16_48_ = auVar40._16_48_;
      auVar42._0_16_ = auVar53._0_16_;
    }
    auVar43._0_8_ = (double)(auVar42._0_8_ ^ (ulonglong)auVar56._0_8_ & _DAT_1808ae170);
    auVar43._16_48_ = auVar42._16_48_;
    auVar43._8_8_ = auVar42._8_8_ ^ in_ZMM5._8_8_ & _UNK_1808ae178;
    auVar44._4_60_ = auVar43._4_60_;
    auVar44._0_4_ = (float)auVar43._0_8_;
    return auVar44._0_8_;
  }
  fVar16 = ABS(fVar29);
  if (0x7f7fffff < (uint)fVar16) {
    uVar30 = FUN_1805307b0();
    return uVar30;
  }
  dVar55 = (double)fVar29;
  dVar25 = ABS(dVar55);
  if ((uint)fVar16 < 0x3f490fdc) {
    if ((uint)fVar16 < 0x39000000) {
      if ((uint)fVar16 < 0x32000000) {
        return in_ZMM0._0_8_;
      }
      auVar31._0_8_ = dVar55 * dVar55 * dVar55 * DAT_1808ae1b8 + dVar55;
      auVar31._8_8_ = 0;
    }
    else {
      dVar25 = dVar55 * dVar55;
      auVar31._8_8_ = in_ZMM0._8_8_;
      auVar31._0_8_ =
           dVar25 * dVar55 *
           ((dVar25 * DAT_1808ae188 + DAT_1808ae180) /
           (dVar25 * (dVar25 * DAT_1808ae1a0 + DAT_1808ae198) + DAT_1808ae190)) + dVar55;
    }
    auVar35._0_4_ = (float)auVar31._0_8_;
    auVar35._4_12_ = auVar31._4_12_;
    return auVar35._0_8_;
  }
  if ((longlong)dVar25 < DAT_1808ae1b0) {
    auVar46._0_4_ =
         (int)((double)((ulonglong)dVar25 & _DAT_1808ae130) * _DAT_1808ae140 + DAT_1808ae1d0);
    auVar46._4_4_ = (int)_UNK_1808ae148;
    auVar46._8_8_ = 0;
    auVar32 = vpmovsxdq_avx(auVar46);
    uVar54 = auVar32._0_4_ & _DAT_1808ae150;
    auVar32 = vshufps_avx(auVar32,auVar32,8);
    auVar32 = vcvtdq2pd_avx(auVar32);
    dVar25 = (-(auVar32._0_8_ * DAT_1808ae1d8) + dVar25) - auVar32._0_8_ * DAT_1808ae1e0;
  }
  else {
    uVar28 = ((ulonglong)dVar25 >> 0x34) - 0x3ff;
    lVar26 = -((uVar28 >> 3) - 0x86);
    uVar21 = (ulonglong)dVar25 & 0xfffffffffffff | 0x10000000000000;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = *(ulonglong *)(&DAT_18057e7a0 + lVar26);
    auVar10._8_8_ = 0;
    auVar10._0_8_ = uVar21;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = SUB168(auVar4 * auVar10,8);
    uVar17 = SUB168(auVar4 * auVar10,0);
    auVar5._8_8_ = 0;
    auVar5._0_8_ = SUB168(*(undefined1 (*) [16])(&UNK_18057e7a8 + lVar26),0);
    auVar11._8_8_ = 0;
    auVar11._0_8_ = uVar21;
    uVar28 = uVar28 & 7;
    auVar32 = vpsrldq_avx(*(undefined1 (*) [16])(&UNK_18057e7a8 + lVar26),8);
    auVar15 = auVar5 * auVar11 + auVar15;
    uVar18 = auVar15._0_8_;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = auVar32._0_8_;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = uVar21;
    uVar27 = auVar15._8_8_ + SUB168(auVar6 * auVar12,0);
    uVar24 = 0;
    bVar20 = (byte)(0x36 - uVar28) & 0x3f;
    uVar21 = uVar27 >> bVar20;
    bVar1 = (bool)(((0x36 - uVar28 & 0x3f) != 0) * ((uVar27 >> bVar20 - 1 & 1) != 0));
    if (bVar1) {
      uVar27 = ~uVar27;
      uVar18 = ~uVar18;
      uVar17 = ~uVar17;
      uVar24 = 0x8000000000000000;
    }
    uVar54 = (int)uVar21 + (uint)bVar1 & 3;
    sVar19 = (char)uVar28 + 10;
    uVar21 = (uVar27 << sVar19) >> sVar19;
    lVar22 = uVar28 - 0x36;
    lVar26 = 0x3f;
    if (uVar21 != 0) {
      for (; uVar21 >> lVar26 == 0; lVar26 = lVar26 + -1) {
      }
    }
    uVar27 = uVar18;
    if (uVar21 == 0) {
      lVar26 = 0x3f;
      if (uVar18 != 0) {
        for (; uVar18 >> lVar26 == 0; lVar26 = lVar26 + -1) {
        }
      }
      lVar22 = uVar28 - 0x76;
      uVar27 = uVar17;
      uVar21 = uVar18;
    }
    lVar23 = lVar26 + -0x34;
    if (lVar23 < 0) {
      bVar20 = -(byte)lVar23;
      uVar21 = uVar21 << (bVar20 & 0x3f) | uVar27 >> (-(bVar20 - 0x40) & 0x3f);
    }
    else if (lVar23 != 0) {
      uVar21 = uVar21 >> ((byte)lVar23 & 0x3f);
    }
    dVar25 = (double)(uVar21 & 0xffefffffffffffff | uVar24 | lVar22 + lVar26 + 0x3ff << 0x34) *
             DAT_1808ae1e8;
  }
  dVar13 = dVar25 * dVar25;
  dVar25 = dVar13 * dVar25 *
           ((dVar13 * DAT_1808ae188 + DAT_1808ae180) /
           (dVar13 * (dVar13 * DAT_1808ae1a0 + DAT_1808ae198) + DAT_1808ae190)) + dVar25;
  if ((uVar54 & _DAT_1808ae160) == 1) {
    dVar25 = DAT_1808ae1f0 / dVar25;
  }
  auVar33._0_8_ = (double)((ulonglong)dVar25 ^ (ulonglong)dVar55 & _DAT_1808ae170);
  auVar33._8_8_ = in_ZMM0._8_8_ & _UNK_1808ae178;
  auVar34._0_4_ = (float)auVar33._0_8_;
  auVar34._4_12_ = auVar33._4_12_;
  return auVar34._0_8_;
}



/* ===== 18053fc00 FUN_18053fc00 ===== */

ulonglong FUN_18053fc00(uint param_1)

{
  ulonglong uVar1;
  uint local_res8 [8];
  
  local_res8[0] = param_1;
  if (DAT_1809194c8 < 2) {
    FUN_180526660(local_res8,0);
    return (ulonglong)local_res8[0];
  }
  uVar1 = FUN_1805321a0();
  return uVar1;
}



/* ===== 18053fc40 FUN_18053fc40 ===== */

ulonglong FUN_18053fc40(float param_1)

{
  double dVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  ulonglong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  uVar4 = (uint)param_1 >> 0x17 & 0xff;
  fVar6 = 0.0;
  if (0x7f800000 < (uint)ABS(param_1)) {
    uVar5 = FUN_18053bea0();
    return uVar5;
  }
  if (uVar4 < 0x65) {
    FUN_18052f090(0x20);
    return (ulonglong)DAT_1808ac440;
  }
  if (uVar4 < 0x7f) {
    fVar7 = param_1;
    if ((int)param_1 < 0) {
      fVar7 = (float)((uint)param_1 ^ DAT_1808adec0);
    }
    if (uVar4 < 0x7e) {
      fVar2 = fVar7 * fVar7;
    }
    else {
      fVar2 = (DAT_1808ac34c - fVar7) * DAT_1808ac1f4;
      fVar7 = SQRT(fVar2);
      fVar6 = fVar7;
    }
    fVar8 = ((fVar2 * (fVar2 * (-(fVar2 * DAT_1805799e4) + DAT_1805799fc) - DAT_1805799e8) +
             DAT_1805799ec) * fVar2) / (-(fVar2 * DAT_1805799f4) + DAT_1805799f8);
    if (uVar4 < 0x7e) {
      dVar1 = DAT_180578270 - ((double)param_1 - (DAT_1805798d8 - (double)(fVar8 * param_1)));
      return CONCAT44((int)((ulonglong)dVar1 >> 0x20),(float)dVar1);
    }
    if ((int)param_1 < 0) {
      dVar1 = ((double)(fVar7 * fVar8) - DAT_1805798d8) + (double)fVar6;
      dVar1 = DAT_1808ac588 - (dVar1 + dVar1);
      return CONCAT44((int)((ulonglong)dVar1 >> 0x20),(float)dVar1);
    }
    fVar3 = (float)((uint)fVar6 & 0xffff0000);
    fVar6 = (-(fVar3 * fVar3) + fVar2) / (fVar3 + fVar6);
    return (ulonglong)(uint)(fVar8 * (fVar7 + fVar7) + fVar6 + fVar6 + fVar3 + fVar3);
  }
  if (param_1 == DAT_1808ac34c) {
    return 0;
  }
  if (param_1 == DAT_1808acda0) {
    FUN_18052f090(0x20);
    return (ulonglong)DAT_1808ac680;
  }
  uVar5 = FUN_18052fc70("acosf",0xd,0xffc00000,1,8,0x21,param_1,0,1);
  return uVar5;
}



/* ===== 18053fe40 FUN_18053fe40 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_18053fe40(float param_1)

{
  double dVar1;
  double dVar2;
  ulonglong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  
  dVar6 = (double)param_1;
  dVar2 = ABS(dVar6);
  dVar7 = dVar6;
  if ((longlong)dVar6 < 0) {
    dVar7 = (double)((ulonglong)dVar6 ^ DAT_1808adeb0);
  }
  if ((ulonglong)dVar2 < 0x3fdc000000000000) {
    dVar2 = 0.0;
  }
  else if ((ulonglong)dVar2 < 0x3fe6000000000000) {
    dVar7 = ((dVar7 + dVar7) - DAT_1808ac500) / (dVar7 + DAT_1808ac548);
    dVar2 = DAT_18057ad08;
  }
  else if ((ulonglong)dVar2 < 0x3ff3000000000000) {
    dVar7 = (dVar7 - DAT_1808ac500) / (dVar7 + DAT_1808ac500);
    dVar2 = DAT_180579910;
  }
  else if ((ulonglong)dVar2 < 0x4003800000000000) {
    dVar7 = (dVar7 - DAT_1808ac518) / (dVar7 * DAT_1808ac518 + DAT_1808ac500);
    dVar2 = DAT_18057ad18;
  }
  else {
    if (0x7ff0000000000000 < (ulonglong)dVar2) {
      uVar3 = FUN_18053bea0(param_1,0);
      return uVar3;
    }
    if (DAT_1808adfe0 < dVar7) {
      if ((longlong)dVar6 < 0) {
        FUN_18052f090(0x20);
        return (ulonglong)DAT_1808acdb0;
      }
      FUN_18052f090(0x20);
      return (ulonglong)DAT_1808ac440;
    }
    dVar7 = DAT_1808acdb8 / dVar7;
    dVar2 = DAT_180578270;
  }
  dVar1 = dVar7 * dVar7;
  dVar2 = dVar2 - (((dVar1 * (dVar1 * DAT_1808adfb0 + DAT_1808adfb8) + DAT_1808adfc0) *
                   dVar7 * dVar1) /
                   (dVar1 * (dVar1 * DAT_1808adfc8 + DAT_1808adfd8) + DAT_1808adfd0) - dVar7);
  auVar5._8_8_ = 0;
  auVar5._0_8_ = (ulonglong)dVar2;
  if ((longlong)dVar6 < 0) {
    auVar5._0_8_ = (ulonglong)dVar2 ^ DAT_1808adeb0;
    auVar5._8_8_ = _UNK_1808adeb8;
  }
  auVar4._0_4_ = (float)auVar5._0_8_;
  auVar4._4_12_ = auVar5._4_12_;
  return auVar4._0_8_;
}



/* ===== 1805400f0 _guard_dispatch_icall ===== */

/* WARNING: This is an inlined function */

void _guard_dispatch_icall(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x0001805400f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* ===== 180540110 _guard_dispatch_icall ===== */

/* WARNING: This is an inlined function */

void _guard_dispatch_icall(void)

{
  (*(code *)PTR__guard_dispatch_icall_18056b850)();
  return;
}



/* ===== 180540130 _guard_dispatch_icall ===== */

/* WARNING: This is an inlined function */

void _guard_dispatch_icall(void)

{
  (*(code *)PTR__guard_dispatch_icall_18056b850)();
  return;
}



/* ===== 180540160 FUN_180540160 ===== */

undefined8 FUN_180540160(undefined1 *param_1,undefined1 param_2,longlong param_3,undefined8 param_4)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *param_1 = param_2;
    param_1 = param_1 + 1;
  }
  return param_4;
}



/* ===== 180540170 FUN_180540170 ===== */

undefined1 (*) [32] FUN_180540170(undefined1 (*param_1) [32],byte param_2,ulonglong param_3)

{
  undefined1 auVar1 [32];
  undefined1 (*pauVar2) [32];
  undefined1 (*pauVar3) [32];
  undefined1 (*pauVar4) [16];
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
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
  if (DAT_1809194c8 < 3) {
    if ((param_3 <= DAT_1809194d0) || (((byte)DAT_180c9f458 & 2) == 0)) {
      lVar11 = ((ulonglong)param_1 & 0xf) - 0x10;
      pauVar4 = (undefined1 (*) [16])((longlong)param_1 - lVar11);
      param_3 = param_3 + lVar11;
      if (0x80 < param_3) {
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
          param_3 = param_3 - 0x80;
        } while (0x7f < param_3);
      }
                    /* WARNING: Could not recover jumptable at 0x0001805404b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pauVar2 = (undefined1 (*) [32])
                (*(code *)((ulonglong)*(uint *)(&DAT_1808aeba8 + (param_3 + 0xf >> 4) * 4) +
                          0x180000000))(pauVar4,uVar5 - lVar11);
      return pauVar2;
    }
  }
  else if (((param_3 <= DAT_1809194d0) || (DAT_1809194d8 < param_3)) ||
          (((byte)DAT_180c9f458 & 2) == 0)) {
    auVar13._16_16_ = auVar12;
    auVar13._0_16_ = auVar12;
    lVar6 = ((ulonglong)param_1 & 0x1f) - 0x20;
    pauVar2 = (undefined1 (*) [32])((longlong)param_1 - lVar6);
    param_3 = param_3 + lVar6;
    if (0x100 < param_3) {
      if (DAT_1809194d8 < param_3) {
        do {
          uVar5 = param_3;
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
          param_3 = uVar5 - 0x100;
        } while (0xff < uVar5 - 0x100);
        uVar7 = uVar5 - 0xe1 & 0xffffffffffffffe0;
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
          *(undefined1 (*) [32])(*pauVar3 + uVar7) = auVar1;
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
          *(undefined1 (*) [32])(pauVar3[1] + uVar7) = auVar1;
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
          *(undefined1 (*) [32])(pauVar3[2] + uVar7) = auVar1;
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
          *(undefined1 (*) [32])(pauVar3[3] + uVar7) = auVar1;
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
          *(undefined1 (*) [32])(pauVar3[4] + uVar7) = auVar1;
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
          *(undefined1 (*) [32])(pauVar3[5] + uVar7) = auVar1;
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
          *(undefined1 (*) [32])(pauVar3[6] + uVar7) = auVar1;
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
        param_3 = param_3 - 0x100;
      } while (0xff < param_3);
    }
                    /* WARNING: Could not recover jumptable at 0x000180540304. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pauVar2 = (undefined1 (*) [32])
              (*(code *)((ulonglong)*(uint *)(&DAT_1808aeb60 + (param_3 + 0x1f >> 5) * 4) +
                        0x180000000))(lVar11,uVar5 - lVar6);
    return pauVar2;
  }
  pauVar2 = param_1;
  for (; param_3 != 0; param_3 = param_3 - 1) {
    (*pauVar2)[0] = param_2;
    pauVar2 = (undefined1 (*) [32])(*pauVar2 + 1);
  }
  return param_1;
}



/* ===== 180540520 FUN_180540520 ===== */

void FUN_180540520(undefined1 *param_1,undefined1 *param_2,longlong param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *param_1 = *param_2;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}



/* ===== 180540530 FUN_180540530 ===== */

void FUN_180540530(undefined8 *param_1,undefined8 *param_2,ulonglong param_3)

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
  undefined8 *puVar26;
  undefined1 (*pauVar27) [32];
  undefined1 (*pauVar28) [32];
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
    puVar26 = (undefined8 *)((longlong)param_2 + (param_3 - 0x10));
    uVar11 = *puVar26;
    uVar12 = puVar26[1];
    *param_1 = *param_2;
    param_1[1] = uVar10;
    param_1 = (undefined8 *)((longlong)param_1 + (param_3 - 0x10));
    *param_1 = uVar11;
    param_1[1] = uVar12;
    return;
  }
  puVar26 = (undefined8 *)((longlong)param_2 + param_3);
  if (param_1 <= param_2) {
    puVar26 = param_1;
  }
  if (param_1 < puVar26) {
    uVar10 = *param_2;
    uVar11 = param_2[1];
    lVar30 = (longlong)param_2 - (longlong)param_1;
    puVar26 = (undefined8 *)((longlong)param_1 + lVar30 + (param_3 - 0x10));
    uVar12 = *puVar26;
    uVar13 = puVar26[1];
    puVar25 = (undefined8 *)((longlong)param_1 + (param_3 - 0x10));
    uVar29 = param_3 - 0x10;
    puVar26 = puVar25;
    uVar32 = uVar12;
    uVar33 = uVar13;
    if (((ulonglong)puVar25 & 0xf) != 0) {
      puVar26 = (undefined8 *)((ulonglong)puVar25 & 0xfffffffffffffff0);
      uVar32 = *(undefined8 *)((longlong)puVar26 + lVar30);
      uVar33 = ((undefined8 *)((longlong)puVar26 + lVar30))[1];
      *puVar25 = uVar12;
      *(undefined8 *)((longlong)param_1 + (param_3 - 8)) = uVar13;
      uVar29 = (longlong)puVar26 - (longlong)param_1;
    }
    uVar31 = uVar29 >> 7;
    if (uVar31 != 0) {
      *puVar26 = uVar32;
      puVar26[1] = uVar33;
      puVar25 = puVar26;
      while( true ) {
        puVar1 = (undefined8 *)((longlong)puVar25 + lVar30 + -0x10);
        uVar12 = puVar1[1];
        puVar26 = (undefined8 *)((longlong)puVar25 + lVar30 + -0x20);
        uVar13 = *puVar26;
        uVar32 = puVar26[1];
        puVar26 = puVar25 + -0x10;
        puVar25[-2] = *puVar1;
        puVar25[-1] = uVar12;
        puVar25[-4] = uVar13;
        puVar25[-3] = uVar32;
        puVar1 = (undefined8 *)((longlong)puVar25 + lVar30 + -0x30);
        uVar12 = puVar1[1];
        puVar2 = (undefined8 *)((longlong)puVar25 + lVar30 + -0x40);
        uVar13 = *puVar2;
        uVar32 = puVar2[1];
        uVar31 = uVar31 - 1;
        puVar25[-6] = *puVar1;
        puVar25[-5] = uVar12;
        puVar25[-8] = uVar13;
        puVar25[-7] = uVar32;
        puVar1 = (undefined8 *)((longlong)puVar25 + lVar30 + -0x50);
        uVar12 = puVar1[1];
        puVar2 = (undefined8 *)((longlong)puVar25 + lVar30 + -0x60);
        uVar13 = *puVar2;
        uVar32 = puVar2[1];
        puVar25[-10] = *puVar1;
        puVar25[-9] = uVar12;
        puVar25[-0xc] = uVar13;
        puVar25[-0xb] = uVar32;
        puVar1 = (undefined8 *)((longlong)puVar25 + lVar30 + -0x70);
        uVar12 = *puVar1;
        uVar13 = puVar1[1];
        uVar32 = *(undefined8 *)((longlong)puVar26 + lVar30);
        uVar33 = ((undefined8 *)((longlong)puVar26 + lVar30))[1];
        if (uVar31 == 0) break;
        puVar25[-0xe] = uVar12;
        puVar25[-0xd] = uVar13;
        *puVar26 = uVar32;
        puVar25[-0xf] = uVar33;
        puVar25 = puVar26;
      }
      puVar25[-0xe] = uVar12;
      puVar25[-0xd] = uVar13;
      uVar29 = uVar29 & 0x7f;
    }
    for (uVar31 = uVar29 >> 4; uVar31 != 0; uVar31 = uVar31 - 1) {
      *puVar26 = uVar32;
      puVar26[1] = uVar33;
      puVar26 = puVar26 + -2;
      uVar32 = *(undefined8 *)((longlong)puVar26 + lVar30);
      uVar33 = ((undefined8 *)((longlong)puVar26 + lVar30))[1];
    }
    if ((uVar29 & 0xf) != 0) {
      *param_1 = uVar10;
      param_1[1] = uVar11;
    }
    *puVar26 = uVar32;
    puVar26[1] = uVar33;
    return;
  }
  if (DAT_1809194c8 < 3) {
    if ((param_3 < 0x801) || (((byte)DAT_180c9f458 & 2) == 0)) {
      if (0x80 < param_3) {
        lVar30 = ((ulonglong)param_1 & 0xf) - 0x10;
        param_1 = (undefined8 *)((longlong)param_1 - lVar30);
        param_2 = (undefined8 *)((longlong)param_2 - lVar30);
        param_3 = param_3 + lVar30;
        if (0x80 < param_3) {
          do {
            uVar10 = param_2[1];
            uVar11 = param_2[2];
            uVar12 = param_2[3];
            uVar13 = param_2[4];
            uVar32 = param_2[5];
            uVar33 = param_2[6];
            uVar14 = param_2[7];
            *param_1 = *param_2;
            param_1[1] = uVar10;
            param_1[2] = uVar11;
            param_1[3] = uVar12;
            param_1[4] = uVar13;
            param_1[5] = uVar32;
            param_1[6] = uVar33;
            param_1[7] = uVar14;
            uVar10 = param_2[9];
            uVar11 = param_2[10];
            uVar12 = param_2[0xb];
            uVar13 = param_2[0xc];
            uVar32 = param_2[0xd];
            uVar33 = param_2[0xe];
            uVar14 = param_2[0xf];
            param_1[8] = param_2[8];
            param_1[9] = uVar10;
            param_1[10] = uVar11;
            param_1[0xb] = uVar12;
            param_1[0xc] = uVar13;
            param_1[0xd] = uVar32;
            param_1[0xe] = uVar33;
            param_1[0xf] = uVar14;
            param_1 = param_1 + 0x10;
            param_2 = param_2 + 0x10;
            param_3 = param_3 - 0x80;
          } while (0x7f < param_3);
        }
      }
                    /* WARNING: Could not recover jumptable at 0x000180540a56. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulonglong)*(uint *)(&DAT_1808aec58 + (param_3 + 0xf >> 4) * 4) + 0x180000000))();
      return;
    }
FUN_180540520:
    for (; param_3 != 0; param_3 = param_3 - 1) {
      *(undefined1 *)param_1 = *(undefined1 *)param_2;
      param_2 = (undefined8 *)((longlong)param_2 + 1);
      param_1 = (undefined8 *)((longlong)param_1 + 1);
    }
    return;
  }
  if ((0x2000 < param_3) && (param_3 < 0x180001)) {
    puVar26 = param_1 + 8;
    if (param_2 < param_1) {
      puVar26 = param_2;
    }
    if ((puVar26 <= param_2) && (((byte)DAT_180c9f458 & 2) != 0)) goto FUN_180540520;
  }
  uVar10 = *param_2;
  uVar11 = param_2[1];
  uVar12 = param_2[2];
  uVar13 = param_2[3];
  puVar26 = (undefined8 *)((longlong)param_2 + (param_3 - 0x20));
  uVar32 = *puVar26;
  uVar33 = puVar26[1];
  uVar14 = puVar26[2];
  uVar15 = puVar26[3];
  if (0x100 < param_3) {
    lVar30 = ((ulonglong)param_1 & 0x1f) - 0x20;
    pauVar23 = (undefined1 (*) [32])((longlong)param_1 - lVar30);
    pauVar27 = (undefined1 (*) [32])((longlong)param_2 - lVar30);
    param_3 = param_3 + lVar30;
    if (0x100 < param_3) {
      if (0x180000 < param_3) {
        do {
          uVar29 = param_3;
          pauVar28 = pauVar27;
          pauVar24 = pauVar23;
          auVar3 = pauVar28[1];
          auVar4 = pauVar28[2];
          auVar5 = pauVar28[3];
          auVar6 = vmovntdq_avx(*pauVar28);
          *pauVar24 = auVar6;
          auVar3 = vmovntdq_avx(auVar3);
          pauVar24[1] = auVar3;
          auVar3 = vmovntdq_avx(auVar4);
          pauVar24[2] = auVar3;
          auVar3 = vmovntdq_avx(auVar5);
          pauVar24[3] = auVar3;
          auVar3 = pauVar28[5];
          auVar4 = pauVar28[6];
          auVar5 = pauVar28[7];
          auVar6 = vmovntdq_avx(pauVar28[4]);
          pauVar24[4] = auVar6;
          auVar3 = vmovntdq_avx(auVar3);
          pauVar24[5] = auVar3;
          auVar3 = vmovntdq_avx(auVar4);
          pauVar24[6] = auVar3;
          auVar3 = vmovntdq_avx(auVar5);
          pauVar24[7] = auVar3;
          pauVar23 = pauVar24 + 8;
          pauVar27 = pauVar28 + 8;
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
          auVar3 = vmovntdq_avx(*(undefined1 (*) [32])(*pauVar28 + uVar31));
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
          auVar3 = vmovntdq_avx(*(undefined1 (*) [32])(pauVar28[1] + uVar31));
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
          auVar3 = vmovntdq_avx(*(undefined1 (*) [32])(pauVar28[2] + uVar31));
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
          auVar3 = vmovntdq_avx(*(undefined1 (*) [32])(pauVar28[3] + uVar31));
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
          auVar3 = vmovntdq_avx(*(undefined1 (*) [32])(pauVar28[4] + uVar31));
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
          auVar3 = vmovntdq_avx(*(undefined1 (*) [32])(pauVar28[5] + uVar31));
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
          auVar3 = vmovntdq_avx(*(undefined1 (*) [32])(pauVar28[6] + uVar31));
          *(undefined1 (*) [32])(pauVar24[6] + uVar31) = auVar3;
        default:
          puVar26 = (undefined8 *)(pauVar24[-1] + uVar29);
          *puVar26 = uVar32;
          puVar26[1] = uVar33;
          puVar26[2] = uVar14;
          puVar26[3] = uVar15;
        case 0x100:
          *param_1 = uVar10;
          param_1[1] = uVar11;
          param_1[2] = uVar12;
          param_1[3] = uVar13;
          return;
        }
      }
      do {
        uVar10 = *(undefined8 *)(*pauVar27 + 8);
        uVar11 = *(undefined8 *)(*pauVar27 + 0x10);
        uVar12 = *(undefined8 *)(*pauVar27 + 0x18);
        uVar13 = *(undefined8 *)pauVar27[1];
        uVar32 = *(undefined8 *)(pauVar27[1] + 8);
        uVar33 = *(undefined8 *)(pauVar27[1] + 0x10);
        uVar14 = *(undefined8 *)(pauVar27[1] + 0x18);
        uVar15 = *(undefined8 *)pauVar27[2];
        uVar16 = *(undefined8 *)(pauVar27[2] + 8);
        uVar17 = *(undefined8 *)(pauVar27[2] + 0x10);
        uVar18 = *(undefined8 *)(pauVar27[2] + 0x18);
        uVar19 = *(undefined8 *)pauVar27[3];
        uVar20 = *(undefined8 *)(pauVar27[3] + 8);
        uVar21 = *(undefined8 *)(pauVar27[3] + 0x10);
        uVar22 = *(undefined8 *)(pauVar27[3] + 0x18);
        *(undefined8 *)*pauVar23 = *(undefined8 *)*pauVar27;
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
        uVar10 = *(undefined8 *)(pauVar27[4] + 8);
        uVar11 = *(undefined8 *)(pauVar27[4] + 0x10);
        uVar12 = *(undefined8 *)(pauVar27[4] + 0x18);
        uVar13 = *(undefined8 *)pauVar27[5];
        uVar32 = *(undefined8 *)(pauVar27[5] + 8);
        uVar33 = *(undefined8 *)(pauVar27[5] + 0x10);
        uVar14 = *(undefined8 *)(pauVar27[5] + 0x18);
        uVar15 = *(undefined8 *)pauVar27[6];
        uVar16 = *(undefined8 *)(pauVar27[6] + 8);
        uVar17 = *(undefined8 *)(pauVar27[6] + 0x10);
        uVar18 = *(undefined8 *)(pauVar27[6] + 0x18);
        uVar19 = *(undefined8 *)pauVar27[7];
        uVar20 = *(undefined8 *)(pauVar27[7] + 8);
        uVar21 = *(undefined8 *)(pauVar27[7] + 0x10);
        uVar22 = *(undefined8 *)(pauVar27[7] + 0x18);
        *(undefined8 *)pauVar23[4] = *(undefined8 *)pauVar27[4];
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
        pauVar27 = pauVar27 + 8;
        param_3 = param_3 - 0x100;
      } while (0xff < param_3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001805407b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((ulonglong)*(uint *)(&DAT_1808aec10 + (param_3 + 0x1f >> 5) * 4) + 0x180000000))();
  return;
}



/* ===== 180540bc0 memcmp ===== */

/* Library Function - Single Match
    memcmp
   
   Library: Visual Studio */

int __cdecl memcmp(void *_Buf1,void *_Buf2,size_t _Size)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  bool bVar5;
  
  lVar3 = (longlong)_Buf2 - (longlong)_Buf1;
  if (7 < _Size) {
    for (; ((ulonglong)_Buf1 & 7) != 0; _Buf1 = (void *)((longlong)_Buf1 + 1)) {
      bVar5 = (byte)*(ulonglong *)_Buf1 < *(byte *)((longlong)_Buf1 + lVar3);
      if ((byte)*(ulonglong *)_Buf1 != *(byte *)((longlong)_Buf1 + lVar3)) goto LAB_180540c03;
      _Size = _Size - 1;
    }
    if (_Size >> 3 != 0) {
      uVar4 = _Size >> 5;
      if (uVar4 != 0) {
        do {
          uVar2 = *(ulonglong *)_Buf1;
          if (uVar2 != *(ulonglong *)((longlong)_Buf1 + lVar3)) goto LAB_180540c74;
          uVar2 = *(ulonglong *)((longlong)_Buf1 + 8);
          if (uVar2 != *(ulonglong *)((longlong)_Buf1 + lVar3 + 8)) {
LAB_180540c70:
            _Buf1 = (void *)((longlong)_Buf1 + 8);
            goto LAB_180540c74;
          }
          uVar2 = *(ulonglong *)((longlong)_Buf1 + 0x10);
          if (uVar2 != *(ulonglong *)((longlong)_Buf1 + lVar3 + 0x10)) {
LAB_180540c6c:
            _Buf1 = (void *)((longlong)_Buf1 + 8);
            goto LAB_180540c70;
          }
          uVar2 = *(ulonglong *)((longlong)_Buf1 + 0x18);
          if (uVar2 != *(ulonglong *)((longlong)_Buf1 + lVar3 + 0x18)) {
            _Buf1 = (void *)((longlong)_Buf1 + 8);
            goto LAB_180540c6c;
          }
          _Buf1 = (void *)((longlong)_Buf1 + 0x20);
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
        _Size = _Size & 0x1f;
      }
      uVar4 = _Size >> 3;
      if (uVar4 != 0) {
        do {
          uVar2 = *(ulonglong *)_Buf1;
          if (uVar2 != *(ulonglong *)((longlong)_Buf1 + lVar3)) {
LAB_180540c74:
            uVar4 = *(ulonglong *)(lVar3 + (longlong)_Buf1);
            uVar1 = (uint)((uVar2 >> 0x38 | (uVar2 & 0xff000000000000) >> 0x28 |
                            (uVar2 & 0xff0000000000) >> 0x18 | (uVar2 & 0xff00000000) >> 8 |
                            (uVar2 & 0xff000000) << 8 | (uVar2 & 0xff0000) << 0x18 |
                            (uVar2 & 0xff00) << 0x28 | uVar2 << 0x38) <
                          (uVar4 >> 0x38 | (uVar4 & 0xff000000000000) >> 0x28 |
                           (uVar4 & 0xff0000000000) >> 0x18 | (uVar4 & 0xff00000000) >> 8 |
                           (uVar4 & 0xff000000) << 8 | (uVar4 & 0xff0000) << 0x18 |
                           (uVar4 & 0xff00) << 0x28 | uVar4 << 0x38));
            return (1 - uVar1) - (uint)(uVar1 != 0);
          }
          _Buf1 = (void *)((longlong)_Buf1 + 8);
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
        _Size = _Size & 7;
      }
    }
  }
  while( true ) {
    if (_Size == 0) {
      return 0;
    }
    bVar5 = (byte)*(ulonglong *)_Buf1 < *(byte *)((longlong)_Buf1 + lVar3);
    if ((byte)*(ulonglong *)_Buf1 != *(byte *)((longlong)_Buf1 + lVar3)) break;
    _Buf1 = (void *)((longlong)_Buf1 + 1);
    _Size = _Size - 1;
  }
LAB_180540c03:
  return (1 - (uint)bVar5) - (uint)(bVar5 != 0);
}



/* ===== 180540ca0 FUN_180540ca0 ===== */

/* WARNING: Type propagation algorithm not settling */

char * FUN_180540ca0(char *param_1,byte param_2,undefined1 *param_3)

{
  ushort uVar1;
  char *pcVar2;
  char *pcVar3;
  char cVar4;
  int iVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  iVar5 = (uint)param_2 * 0x1010101;
  pcVar2 = (char *)0x0;
  cVar4 = (char)iVar5;
  pcVar3 = param_1;
  if (&DAT_0000001f < param_3) {
    if (((ulonglong)param_1 & 0xf) != 0) {
      pcVar2 = (char *)((ulonglong)((uint)param_1 & 0xf) - 0x10);
      param_3 = param_3 + (longlong)pcVar2;
      param_1 = param_1 + -(longlong)pcVar2;
      do {
        pcVar3 = param_1;
        if (cVar4 == param_1[(longlong)pcVar2]) goto LAB_180540d2c;
        pcVar2 = pcVar2 + 1;
      } while (pcVar2 != (char *)0x0);
      if (param_3 < &DAT_00000020) goto joined_r0x000180540d1c;
    }
    do {
      auVar9[0] = -(*param_1 == cVar4);
      cVar6 = (char)((uint)iVar5 >> 8);
      auVar9[1] = -(param_1[1] == cVar6);
      cVar7 = (char)((uint)iVar5 >> 0x10);
      auVar9[2] = -(param_1[2] == cVar7);
      cVar8 = (char)((uint)iVar5 >> 0x18);
      auVar9[3] = -(param_1[3] == cVar8);
      auVar9[4] = -(param_1[4] == cVar4);
      auVar9[5] = -(param_1[5] == cVar6);
      auVar9[6] = -(param_1[6] == cVar7);
      auVar9[7] = -(param_1[7] == cVar8);
      auVar9[8] = -(param_1[8] == cVar4);
      auVar9[9] = -(param_1[9] == cVar6);
      auVar9[10] = -(param_1[10] == cVar7);
      auVar9[0xb] = -(param_1[0xb] == cVar8);
      auVar9[0xc] = -(param_1[0xc] == cVar4);
      auVar9[0xd] = -(param_1[0xd] == cVar6);
      auVar9[0xe] = -(param_1[0xe] == cVar7);
      auVar9[0xf] = -(param_1[0xf] == cVar8);
      uVar1 = (ushort)(SUB161(auVar9 >> 7,0) & 1) | (ushort)(SUB161(auVar9 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar9 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar9 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar9 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar9 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar9 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar9 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar9 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar9 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar9 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar9 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar9 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar9 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar9 >> 0x77,0) & 1) << 0xe | (ushort)(auVar9[0xf] >> 7) << 0xf;
      pcVar2 = (char *)0x0;
      if (uVar1 != 0) {
        for (; (uVar1 >> (longlong)pcVar2 & 1) == 0; pcVar2 = pcVar2 + 1) {
        }
      }
      pcVar3 = param_1;
      if (uVar1 != 0) goto LAB_180540d2c;
      pcVar3 = param_1 + 0x10;
      auVar10[0] = -(param_1[0x10] == cVar4);
      auVar10[1] = -(param_1[0x11] == cVar6);
      auVar10[2] = -(param_1[0x12] == cVar7);
      auVar10[3] = -(param_1[0x13] == cVar8);
      auVar10[4] = -(param_1[0x14] == cVar4);
      auVar10[5] = -(param_1[0x15] == cVar6);
      auVar10[6] = -(param_1[0x16] == cVar7);
      auVar10[7] = -(param_1[0x17] == cVar8);
      auVar10[8] = -(param_1[0x18] == cVar4);
      auVar10[9] = -(param_1[0x19] == cVar6);
      auVar10[10] = -(param_1[0x1a] == cVar7);
      auVar10[0xb] = -(param_1[0x1b] == cVar8);
      auVar10[0xc] = -(param_1[0x1c] == cVar4);
      auVar10[0xd] = -(param_1[0x1d] == cVar6);
      auVar10[0xe] = -(param_1[0x1e] == cVar7);
      auVar10[0xf] = -(param_1[0x1f] == cVar8);
      uVar1 = (ushort)(SUB161(auVar10 >> 7,0) & 1) | (ushort)(SUB161(auVar10 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar10 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar10 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar10 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar10 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar10 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar10 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar10 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar10 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar10 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar10 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar10 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar10 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar10 >> 0x77,0) & 1) << 0xe | (ushort)(auVar10[0xf] >> 7) << 0xf;
      pcVar2 = (char *)0x0;
      if (uVar1 != 0) {
        for (; (uVar1 >> (longlong)pcVar2 & 1) == 0; pcVar2 = pcVar2 + 1) {
        }
      }
      if (uVar1 != 0) goto LAB_180540d2c;
      param_1 = param_1 + 0x20;
      param_3 = param_3 + -0x20;
      pcVar3 = param_1;
    } while (&DAT_0000001f < param_3);
  }
joined_r0x000180540d1c:
  while( true ) {
    if (param_3 == (undefined1 *)0x0) {
      return pcVar2;
    }
    if (cVar4 == *pcVar3) break;
    param_3 = param_3 + -1;
    pcVar3 = pcVar3 + 1;
  }
LAB_180540d2c:
  return pcVar2 + (longlong)pcVar3;
}



/* ===== 180540d40 strcmp ===== */

/* Library Function - Single Match
    strcmp
   
   Libraries: Visual Studio 2012, Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

int __cdecl strcmp(char *_Str1,char *_Str2)

{
  byte bVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  lVar3 = (longlong)_Str2 - (longlong)_Str1;
  while( true ) {
    if (((ulonglong)_Str1 & 7) == 0) {
      while ((((int)lVar3 + (int)_Str1 & 0xfffU) < 0xff9 &&
             (uVar2 = *(ulonglong *)_Str1, uVar2 == *(ulonglong *)(lVar3 + (longlong)_Str1)))) {
        _Str1 = (char *)((longlong)_Str1 + 8);
        if ((~uVar2 & uVar2 + 0xfefefefefefefeff & 0x8080808080808080) != 0) {
          return 0;
        }
      }
    }
    bVar1 = (byte)*(ulonglong *)_Str1;
    if (bVar1 != *(byte *)(lVar3 + (longlong)_Str1)) break;
    _Str1 = (char *)((longlong)_Str1 + 1);
    if (bVar1 == 0) {
      return 0;
    }
  }
  return -(uint)(bVar1 < *(byte *)(lVar3 + (longlong)_Str1)) | 1;
}



/* ===== 180540dc0 strlen ===== */

/* Library Function - Single Match
    strlen
   
   Library: Visual Studio */

size_t __cdecl strlen(char *_Str)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  longlong lVar3;
  
  lVar3 = -(longlong)_Str;
  while (((ulonglong)_Str & 7) != 0) {
    uVar1 = *(ulonglong *)_Str;
    _Str = (char *)((longlong)_Str + 1);
    if ((char)uVar1 == '\0') goto LAB_180540e38;
  }
  do {
    do {
      puVar2 = (ulonglong *)_Str;
      _Str = (char *)(puVar2 + 1);
    } while (((~*puVar2 ^ *puVar2 + 0x7efefefefefefeff) & 0x8101010101010100) == 0);
    uVar1 = *puVar2;
    if ((char)uVar1 == '\0') {
      return (longlong)puVar2 + lVar3;
    }
    if ((char)(uVar1 >> 8) == '\0') {
      return (size_t)(char *)((longlong)puVar2 + lVar3 + 1);
    }
    if ((char)(uVar1 >> 0x10) == '\0') {
      return (size_t)(char *)((longlong)puVar2 + lVar3 + 2);
    }
    if ((char)(uVar1 >> 0x18) == '\0') {
      return (size_t)(char *)((longlong)puVar2 + lVar3 + 3);
    }
    if ((char)(uVar1 >> 0x20) == '\0') {
      return (size_t)(char *)((longlong)puVar2 + lVar3 + 4);
    }
    if ((char)(uVar1 >> 0x28) == '\0') {
      return (size_t)(char *)((longlong)puVar2 + lVar3 + 5);
    }
    if ((char)(uVar1 >> 0x30) == '\0') {
      return (size_t)(char *)((longlong)puVar2 + lVar3 + 6);
    }
  } while ((char)(uVar1 >> 0x38) != '\0');
LAB_180540e38:
  return (size_t)(char *)((longlong)_Str + lVar3 + -1);
}



/* ===== 180540e80 strncmp ===== */

/* Library Function - Single Match
    strncmp
   
   Library: Visual Studio 2019 Release */

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



/* ===== 180540f10 FUN_180540f10 ===== */

ulonglong * FUN_180540f10(ulonglong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  char cVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  longlong lVar5;
  
  for (puVar3 = param_1; ((ulonglong)puVar3 & 7) != 0; puVar3 = (ulonglong *)((longlong)puVar3 + 1))
  {
    if ((char)*puVar3 == '\0') goto LAB_180540fb3;
  }
  while( true ) {
    do {
      puVar4 = puVar3;
      uVar1 = *puVar4;
      puVar3 = puVar4 + 1;
    } while (((uVar1 ^ 0xffffffffffffffff ^ uVar1 + 0x7efefefefefefeff) & 0x8101010101010100) == 0);
    puVar3 = puVar4;
    if ((((((char)uVar1 == '\0') ||
          (puVar3 = (ulonglong *)((longlong)puVar4 + 1), (char)(uVar1 >> 8) == '\0')) ||
         (puVar3 = (ulonglong *)((longlong)puVar4 + 2), (char)(uVar1 >> 0x10) == '\0')) ||
        ((puVar3 = (ulonglong *)((longlong)puVar4 + 3), (char)(uVar1 >> 0x18) == '\0' ||
         (puVar3 = (ulonglong *)((longlong)puVar4 + 4), (char)(uVar1 >> 0x20) == '\0')))) ||
       ((puVar3 = (ulonglong *)((longlong)puVar4 + 5), (char)(uVar1 >> 0x28) == '\0' ||
        ((puVar3 = (ulonglong *)((longlong)puVar4 + 6), (char)(uVar1 >> 0x30) == '\0' ||
         (puVar3 = (ulonglong *)((longlong)puVar4 + 7), (char)(uVar1 >> 0x38) == '\0')))))) break;
    puVar3 = puVar4 + 1;
  }
LAB_180540fb3:
  lVar5 = (longlong)puVar3 - (longlong)param_2;
  while( true ) {
    if (((ulonglong)param_2 & 7) == 0) {
      while( true ) {
        while (uVar1 = *param_2,
              ((uVar1 ^ 0xffffffffffffffff ^ uVar1 + 0x7efefefefefefeff) & 0x8101010101010100) == 0)
        {
          *(ulonglong *)((longlong)param_2 + lVar5) = uVar1;
          param_2 = param_2 + 1;
        }
        *(char *)((longlong)param_2 + lVar5) = (char)uVar1;
        if (((((char)uVar1 == '\0') ||
             (cVar2 = (char)(uVar1 >> 8), *(char *)((longlong)param_2 + lVar5 + 1) = cVar2,
             cVar2 == '\0')) ||
            (cVar2 = (char)(uVar1 >> 0x10), *(char *)((longlong)param_2 + lVar5 + 2) = cVar2,
            cVar2 == '\0')) ||
           (((cVar2 = (char)(uVar1 >> 0x18), *(char *)((longlong)param_2 + lVar5 + 3) = cVar2,
             cVar2 == '\0' ||
             (cVar2 = (char)(uVar1 >> 0x20), *(char *)((longlong)param_2 + lVar5 + 4) = cVar2,
             cVar2 == '\0')) ||
            ((cVar2 = (char)(uVar1 >> 0x28), *(char *)((longlong)param_2 + lVar5 + 5) = cVar2,
             cVar2 == '\0' ||
             ((cVar2 = (char)(uVar1 >> 0x30), *(char *)((longlong)param_2 + lVar5 + 6) = cVar2,
              cVar2 == '\0' ||
              (cVar2 = (char)(uVar1 >> 0x38), *(char *)((longlong)param_2 + lVar5 + 7) = cVar2,
              cVar2 == '\0')))))))) break;
        param_2 = param_2 + 1;
      }
      return param_1;
    }
    uVar1 = *param_2;
    *(char *)((longlong)param_2 + lVar5) = (char)uVar1;
    if ((char)uVar1 == '\0') break;
    param_2 = (ulonglong *)((longlong)param_2 + 1);
  }
  return param_1;
}



/* ===== 180540fb0 FUN_180540fb0 ===== */

longlong FUN_180540fb0(longlong param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  char cVar2;
  longlong lVar3;
  
  lVar3 = param_1 - (longlong)param_2;
  while( true ) {
    if (((ulonglong)param_2 & 7) == 0) {
      while( true ) {
        while (uVar1 = *param_2,
              ((uVar1 ^ 0xffffffffffffffff ^ uVar1 + 0x7efefefefefefeff) & 0x8101010101010100) == 0)
        {
          *(ulonglong *)((longlong)param_2 + lVar3) = uVar1;
          param_2 = param_2 + 1;
        }
        *(char *)((longlong)param_2 + lVar3) = (char)uVar1;
        if ((((((char)uVar1 == '\0') ||
              (cVar2 = (char)(uVar1 >> 8), *(char *)((longlong)param_2 + lVar3 + 1) = cVar2,
              cVar2 == '\0')) ||
             (cVar2 = (char)(uVar1 >> 0x10), *(char *)((longlong)param_2 + lVar3 + 2) = cVar2,
             cVar2 == '\0')) ||
            ((cVar2 = (char)(uVar1 >> 0x18), *(char *)((longlong)param_2 + lVar3 + 3) = cVar2,
             cVar2 == '\0' ||
             (cVar2 = (char)(uVar1 >> 0x20), *(char *)((longlong)param_2 + lVar3 + 4) = cVar2,
             cVar2 == '\0')))) ||
           ((cVar2 = (char)(uVar1 >> 0x28), *(char *)((longlong)param_2 + lVar3 + 5) = cVar2,
            cVar2 == '\0' ||
            ((cVar2 = (char)(uVar1 >> 0x30), *(char *)((longlong)param_2 + lVar3 + 6) = cVar2,
             cVar2 == '\0' ||
             (cVar2 = (char)(uVar1 >> 0x38), *(char *)((longlong)param_2 + lVar3 + 7) = cVar2,
             cVar2 == '\0')))))) break;
        param_2 = param_2 + 1;
      }
      return param_1;
    }
    uVar1 = *param_2;
    *(char *)((longlong)param_2 + lVar3) = (char)uVar1;
    if ((char)uVar1 == '\0') break;
    param_2 = (ulonglong *)((longlong)param_2 + 1);
  }
  return param_1;
}



/* ===== 180541080 strncpy ===== */

/* Library Function - Single Match
    strncpy
   
   Library: Visual Studio */

char * __cdecl strncpy(char *_Dest,char *_Source,size_t _Count)

{
  ulonglong uVar1;
  char cVar2;
  longlong lVar3;
  char *pcVar4;
  ulonglong *puVar5;
  size_t sVar6;
  bool bVar7;
  
  if (_Count != 0) {
    lVar3 = (longlong)_Dest - (longlong)_Source;
    do {
      if (((ulonglong)_Source & 7) == 0) goto LAB_1805410b8;
      uVar1 = *(ulonglong *)_Source;
      *(char *)((longlong)_Source + lVar3) = (char)uVar1;
      puVar5 = (ulonglong *)_Source;
      sVar6 = _Count;
      if ((char)uVar1 == '\0') goto LAB_180541180;
      _Source = (char *)((longlong)_Source + 1);
      _Count = _Count - 1;
    } while (_Count != 0);
  }
  return _Dest;
LAB_1805410b8:
  while( true ) {
    uVar1 = *(ulonglong *)_Source;
    if ((_Count < 8 || _Count - 8 == 0) ||
       (((uVar1 ^ 0xffffffffffffffff ^ uVar1 + 0x7efefefefefefeff) & 0x8101010101010100) != 0))
    break;
    *(ulonglong *)((longlong)_Source + lVar3) = uVar1;
    _Source = (char *)((longlong)_Source + 8);
    _Count = _Count - 8;
  }
  if (_Count == 0) {
    return _Dest;
  }
  *(char *)((longlong)_Source + lVar3) = (char)uVar1;
  puVar5 = (ulonglong *)_Source;
  sVar6 = _Count;
  if ((char)uVar1 == '\0') {
LAB_180541180:
    pcVar4 = (char *)(lVar3 + (longlong)puVar5);
    if (0xf < sVar6) {
      while (((ulonglong)pcVar4 & 7) != 0) {
        pcVar4 = pcVar4 + 1;
        *pcVar4 = '\0';
        sVar6 = sVar6 - 1;
      }
      for (; 0x1f < sVar6; sVar6 = sVar6 - 0x20) {
        pcVar4[0] = '\0';
        pcVar4[1] = '\0';
        pcVar4[2] = '\0';
        pcVar4[3] = '\0';
        pcVar4[4] = '\0';
        pcVar4[5] = '\0';
        pcVar4[6] = '\0';
        pcVar4[7] = '\0';
        pcVar4[8] = '\0';
        pcVar4[9] = '\0';
        pcVar4[10] = '\0';
        pcVar4[0xb] = '\0';
        pcVar4[0xc] = '\0';
        pcVar4[0xd] = '\0';
        pcVar4[0xe] = '\0';
        pcVar4[0xf] = '\0';
        pcVar4[0x10] = '\0';
        pcVar4[0x11] = '\0';
        pcVar4[0x12] = '\0';
        pcVar4[0x13] = '\0';
        pcVar4[0x14] = '\0';
        pcVar4[0x15] = '\0';
        pcVar4[0x16] = '\0';
        pcVar4[0x17] = '\0';
        pcVar4[0x18] = '\0';
        pcVar4[0x19] = '\0';
        pcVar4[0x1a] = '\0';
        pcVar4[0x1b] = '\0';
        pcVar4[0x1c] = '\0';
        pcVar4[0x1d] = '\0';
        pcVar4[0x1e] = '\0';
        pcVar4[0x1f] = '\0';
        pcVar4 = pcVar4 + 0x20;
      }
      for (; 7 < sVar6; sVar6 = sVar6 - 8) {
        pcVar4[0] = '\0';
        pcVar4[1] = '\0';
        pcVar4[2] = '\0';
        pcVar4[3] = '\0';
        pcVar4[4] = '\0';
        pcVar4[5] = '\0';
        pcVar4[6] = '\0';
        pcVar4[7] = '\0';
        pcVar4 = pcVar4 + 8;
      }
    }
    while (bVar7 = sVar6 != 0, sVar6 = sVar6 - 1, bVar7) {
      *pcVar4 = '\0';
      pcVar4 = pcVar4 + 1;
    }
    return _Dest;
  }
  puVar5 = (ulonglong *)((longlong)_Source + 1);
  sVar6 = _Count - 1;
  if (sVar6 == 0) {
    return _Dest;
  }
  cVar2 = (char)(uVar1 >> 8);
  *(char *)((longlong)puVar5 + lVar3) = cVar2;
  if (cVar2 == '\0') goto LAB_180541180;
  puVar5 = (ulonglong *)((longlong)_Source + 2);
  sVar6 = _Count - 2;
  if (sVar6 == 0) {
    return _Dest;
  }
  cVar2 = (char)(uVar1 >> 0x10);
  *(char *)((longlong)puVar5 + lVar3) = cVar2;
  if (cVar2 == '\0') goto LAB_180541180;
  puVar5 = (ulonglong *)((longlong)_Source + 3);
  sVar6 = _Count - 3;
  if (sVar6 == 0) {
    return _Dest;
  }
  cVar2 = (char)(uVar1 >> 0x18);
  *(char *)((longlong)puVar5 + lVar3) = cVar2;
  if (cVar2 == '\0') goto LAB_180541180;
  puVar5 = (ulonglong *)((longlong)_Source + 4);
  sVar6 = _Count - 4;
  if (sVar6 == 0) {
    return _Dest;
  }
  cVar2 = (char)(uVar1 >> 0x20);
  *(char *)((longlong)puVar5 + lVar3) = cVar2;
  if (cVar2 == '\0') goto LAB_180541180;
  puVar5 = (ulonglong *)((longlong)_Source + 5);
  sVar6 = _Count - 5;
  if (sVar6 == 0) {
    return _Dest;
  }
  cVar2 = (char)(uVar1 >> 0x28);
  *(char *)((longlong)puVar5 + lVar3) = cVar2;
  if (cVar2 == '\0') goto LAB_180541180;
  puVar5 = (ulonglong *)((longlong)_Source + 6);
  sVar6 = _Count - 6;
  if (sVar6 == 0) {
    return _Dest;
  }
  cVar2 = (char)(uVar1 >> 0x30);
  *(char *)((longlong)puVar5 + lVar3) = cVar2;
  if (cVar2 == '\0') goto LAB_180541180;
  puVar5 = (ulonglong *)((longlong)_Source + 7);
  sVar6 = _Count - 7;
  if (sVar6 == 0) {
    return _Dest;
  }
  cVar2 = (char)(uVar1 >> 0x38);
  *(char *)((longlong)puVar5 + lVar3) = cVar2;
  if (cVar2 == '\0') goto LAB_180541180;
  _Source = (char *)((longlong)_Source + 8);
  _Count = _Count - 8;
  if (_Count == 0) {
    return _Dest;
  }
  goto LAB_1805410b8;
}



/* ===== 1805412e0 FUN_1805412e0 ===== */

void FUN_1805412e0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;
    thunk_FUN_1800289e0(*(undefined8 *)(param_2 + 0x60));
  }
  return;
}



/* ===== 180541330 FUN_180541330 ===== */

void FUN_180541330(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x70) & 1) != 0) {
    *(uint *)(param_2 + 0x70) = *(uint *)(param_2 + 0x70) & 0xfffffffe;
    thunk_FUN_1800289e0(*(undefined8 *)(param_2 + 0x60));
  }
  return;
}



/* ===== 180541356 FUN_180541356 ===== */

void FUN_180541356(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x70) & 2) != 0) {
    *(uint *)(param_2 + 0x70) = *(uint *)(param_2 + 0x70) & 0xfffffffd;
    thunk_FUN_1800289e0(*(undefined8 *)(param_2 + 0x60));
  }
  return;
}



/* ===== 180541380 FUN_180541380 ===== */

void FUN_180541380(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;
    thunk_FUN_1800289e0(param_2 + 0x200);
  }
  return;
}



/* ===== 1805413a9 FUN_1805413a9 ===== */

void FUN_1805413a9(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 2) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffd;
    thunk_FUN_1800289e0(param_2 + 0x2a0);
  }
  return;
}



/* ===== 1805413d2 FUN_1805413d2 ===== */

void FUN_1805413d2(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 4) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffb;
    thunk_FUN_1800289e0(param_2 + 0x1e0);
  }
  return;
}



/* ===== 1805413fb FUN_1805413fb ===== */

void FUN_1805413fb(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 8) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffff7;
    thunk_FUN_1800289e0(param_2 + 0x220);
  }
  return;
}



/* ===== 180541424 FUN_180541424 ===== */

void FUN_180541424(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x10) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffffef;
    thunk_FUN_1800289e0(*(undefined8 *)(param_2 + 0x148));
  }
  return;
}



/* ===== 18054144d FUN_18054144d ===== */

void FUN_18054144d(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x20) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffffdf;
    thunk_FUN_1800289e0(param_2 + 0x1c0);
  }
  return;
}



/* ===== 1805418b8 FUN_1805418b8 ===== */

void FUN_1805418b8(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1803d64e0(*(undefined8 *)(param_2 + 0x20),0x78);
  return;
}



/* ===== 180541960 FUN_180541960 ===== */

void FUN_180541960(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 2) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffd;
    thunk_FUN_18000f890(*(undefined8 *)(param_2 + 0x38));
  }
  return;
}



/* ===== 180541b40 FUN_180541b40 ===== */

void FUN_180541b40(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    thunk_FUN_18000f890(param_2 + 0x28);
  }
  return;
}



/* ===== 180541b66 FUN_180541b66 ===== */

void FUN_180541b66(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;
    thunk_FUN_18000f890(param_2 + 0x68);
  }
  return;
}



/* ===== 180541ca0 FUN_180541ca0 ===== */

void FUN_180541ca0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;
    thunk_FUN_18000f890(param_2 + 0x100);
  }
  return;
}



/* ===== 180541cc9 FUN_180541cc9 ===== */

void FUN_180541cc9(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 2) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffd;
    thunk_FUN_18000f890(param_2 + 0xb8);
  }
  return;
}



/* ===== 180541dcc FUN_180541dcc ===== */

void FUN_180541dcc(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    thunk_FUN_18000f890(param_2 + 0x70);
  }
  return;
}



/* ===== 180541e30 FUN_180541e30 ===== */

void FUN_180541e30(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    thunk_FUN_18000f890(*(undefined8 *)(param_2 + 0x48));
  }
  return;
}



/* ===== 180541f50 FUN_180541f50 ===== */

void FUN_180541f50(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1803d64e0(*(undefined8 *)(param_2 + 0xd0),0x30);
  return;
}



/* ===== 180541fdc FUN_180541fdc ===== */

void FUN_180541fdc(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    FUN_18004dc40(param_2 + 0x28);
  }
  return;
}



/* ===== 180542100 FUN_180542100 ===== */

void FUN_180542100(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;
    thunk_FUN_18000f890(*(undefined8 *)(param_2 + 0x28));
  }
  return;
}



/* ===== 180542126 FUN_180542126 ===== */

void FUN_180542126(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    thunk_FUN_18000f890(*(undefined8 *)(param_2 + 0x28));
  }
  return;
}



/* ===== 1805421f8 FUN_1805421f8 ===== */

void FUN_1805421f8(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    FUN_180016860(param_2 + 0x38);
  }
  return;
}



/* ===== 18054221e FUN_18054221e ===== */

void FUN_18054221e(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1803d64e0(*(undefined8 *)(param_2 + 0x50),0x58);
  return;
}



/* ===== 180542278 FUN_180542278 ===== */

void FUN_180542278(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    FUN_18004eb70(*(undefined8 *)(param_2 + 0x40));
  }
  return;
}



/* ===== 1805422c0 FUN_1805422c0 ===== */

void FUN_1805422c0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    thunk_FUN_18000f890(*(undefined8 *)(param_2 + 0x70));
  }
  return;
}



/* ===== 180542370 FUN_180542370 ===== */

void FUN_180542370(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    thunk_FUN_1800132b0(*(undefined8 *)(param_2 + 0xe0));
  }
  return;
}



/* ===== 1805423e0 FUN_1805423e0 ===== */

void FUN_1805423e0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    FUN_180042970(*(undefined8 *)(param_2 + 0x70));
  }
  return;
}



/* ===== 180542450 FUN_180542450 ===== */

void FUN_180542450(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    thunk_FUN_18000f890(*(undefined8 *)(param_2 + 0x40));
  }
  return;
}



/* ===== 180542480 FUN_180542480 ===== */

void FUN_180542480(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    thunk_FUN_18000f890(*(undefined8 *)(param_2 + 0x28));
  }
  return;
}



/* ===== 180542538 FUN_180542538 ===== */

void FUN_180542538(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 4) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffb;
    thunk_FUN_18000f890(param_2 + 0x290);
  }
  return;
}



/* ===== 180542680 FUN_180542680 ===== */

void FUN_180542680(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    thunk_FUN_1800288b0(*(undefined8 *)(param_2 + 0x50));
  }
  return;
}



/* ===== 1805426cc FUN_1805426cc ===== */

void FUN_1805426cc(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    FUN_1800670a0(param_2 + 0x28);
  }
  return;
}



/* ===== 180542730 FUN_180542730 ===== */

void FUN_180542730(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    thunk_FUN_18000f890(param_2 + 0x30);
  }
  return;
}



/* ===== 18054287c FUN_18054287c ===== */

void FUN_18054287c(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x28) & 1) != 0) {
    *(uint *)(param_2 + 0x28) = *(uint *)(param_2 + 0x28) & 0xfffffffe;
    thunk_FUN_18000f890(param_2 + 0x48);
  }
  return;
}



/* ===== 1805428c8 FUN_1805428c8 ===== */

void FUN_1805428c8(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;
    thunk_FUN_180068f30(param_2 + 0x50);
  }
  return;
}



/* ===== 1805428ee FUN_1805428ee ===== */

void FUN_1805428ee(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    thunk_FUN_180068f30(*(undefined8 *)(param_2 + 0xc0));
  }
  return;
}



/* ===== 180542c10 FUN_180542c10 ===== */

void FUN_180542c10(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x24) & 1) != 0) {
    *(uint *)(param_2 + 0x24) = *(uint *)(param_2 + 0x24) & 0xfffffffe;
    thunk_FUN_18000f890(*(undefined8 *)(param_2 + 0x28));
  }
  return;
}



/* ===== 1805430cc FUN_1805430cc ===== */

void FUN_1805430cc(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 1) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffe;
    thunk_FUN_18000f890(param_2 + 0x68);
  }
  return;
}



/* ===== 1805430fe FUN_1805430fe ===== */

void FUN_1805430fe(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 2) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffd;
    thunk_FUN_18000f890(param_2 + 0x48);
  }
  return;
}



/* ===== 180543154 FUN_180543154 ===== */

void FUN_180543154(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;
    thunk_FUN_18000f890(*(undefined8 *)(param_2 + 0x28));
  }
  return;
}



/* ===== 18054317a FUN_18054317a ===== */

void FUN_18054317a(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    thunk_FUN_18000f890(*(undefined8 *)(param_2 + 0x28));
  }
  return;
}



/* ===== 18054321c FUN_18054321c ===== */

void FUN_18054321c(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;
    thunk_FUN_1800289e0(*(undefined8 *)(param_2 + 0x40));
  }
  return;
}



/* ===== 1805432fc FUN_1805432fc ===== */

void FUN_1805432fc(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    thunk_FUN_1800289e0(*(undefined8 *)(param_2 + 0x28));
  }
  return;
}



/* ===== 18054333c FUN_18054333c ===== */

void FUN_18054333c(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    thunk_FUN_1800289e0(*(undefined8 *)(param_2 + 0x40));
  }
  return;
}



/* ===== 180543388 FUN_180543388 ===== */

void FUN_180543388(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    thunk_FUN_1800289e0(*(undefined8 *)(param_2 + 0x40));
  }
  return;
}



/* ===== 180543468 FUN_180543468 ===== */

void FUN_180543468(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;
    thunk_FUN_18000f890(param_2 + 0x1a8);
  }
  return;
}



/* ===== 1805434f8 FUN_1805434f8 ===== */

void FUN_1805434f8(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;
    thunk_FUN_18000f890(param_2 + 0x1d8);
  }
  return;
}



/* ===== 180543588 FUN_180543588 ===== */

void FUN_180543588(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;
    thunk_FUN_18000f890(param_2 + 0x50);
  }
  return;
}



/* ===== 1805436fc FUN_1805436fc ===== */

void FUN_1805436fc(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 1) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffe;
    thunk_FUN_18000f890(param_2 + 0x68);
  }
  return;
}



/* ===== 180543798 FUN_180543798 ===== */

void FUN_180543798(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    thunk_FUN_18000f890(*(undefined8 *)(param_2 + 0x28));
  }
  return;
}



/* ===== 1805439b0 FUN_1805439b0 ===== */

void FUN_1805439b0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 1) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffe;
    thunk_FUN_18000f890(*(undefined8 *)(param_2 + 0x60));
  }
  return;
}



/* ===== 1805439e0 FUN_1805439e0 ===== */

void FUN_1805439e0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    thunk_FUN_18000f890(*(undefined8 *)(param_2 + 0x60));
  }
  return;
}



/* ===== 180543a10 FUN_180543a10 ===== */

void FUN_180543a10(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    thunk_FUN_1800289e0(*(undefined8 *)(param_2 + 0x58));
  }
  return;
}



/* ===== 180543ac8 FUN_180543ac8 ===== */

undefined8 FUN_180543ac8(undefined8 param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  uint uVar3;
  
  plVar2 = *(longlong **)(param_2 + 0x90);
  iVar1 = *(int *)(*plVar2 + 4);
  uVar3 = 4;
  if (*(longlong *)((longlong)plVar2 + (longlong)iVar1 + 0x48) != 0) {
    uVar3 = 0;
  }
  uVar3 = uVar3 | *(uint *)((longlong)plVar2 + (longlong)iVar1 + 0x10) & 0x17 | 4;
  *(uint *)((longlong)plVar2 + (longlong)iVar1 + 0x10) = uVar3;
  if ((*(uint *)((longlong)plVar2 + (longlong)iVar1 + 0x14) & uVar3) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804ef5f0(0);
  }
  return 0;
}



/* ===== 180543b9c FUN_180543b9c ===== */

void FUN_180543b9c(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    FUN_1800686b0(*(longlong *)(param_2 + 0x90) + 0xa8);
  }
  return;
}



/* ===== 180543bfc FUN_180543bfc ===== */

void FUN_180543bfc(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    FUN_1800686b0(*(longlong *)(param_2 + 0x90) + 0xb0);
  }
  return;
}



/* ===== 180543e60 FUN_180543e60 ===== */

void FUN_180543e60(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1803d64e0(*(undefined8 *)(param_2 + 0xb0),0x10);
  return;
}



/* ===== 180543eec FUN_180543eec ===== */

void FUN_180543eec(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    FUN_18004dc40(param_2 + 0x28);
  }
  return;
}



/* ===== 180543fb0 FUN_180543fb0 ===== */

void FUN_180543fb0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    FUN_18004dd20(param_2 + 0x28);
  }
  return;
}



/* ===== 180543fec FUN_180543fec ===== */

undefined8 FUN_180543fec(undefined8 param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  uint uVar3;
  
  plVar2 = *(longlong **)(param_2 + 0x80);
  iVar1 = *(int *)(*plVar2 + 4);
  uVar3 = 4;
  if (*(longlong *)((longlong)plVar2 + (longlong)iVar1 + 0x48) != 0) {
    uVar3 = 0;
  }
  uVar3 = uVar3 | *(uint *)((longlong)plVar2 + (longlong)iVar1 + 0x10) & 0x17 | 4;
  *(uint *)((longlong)plVar2 + (longlong)iVar1 + 0x10) = uVar3;
  if ((*(uint *)((longlong)plVar2 + (longlong)iVar1 + 0x14) & uVar3) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804ef5f0(0);
  }
  return 0;
}



/* ===== 180544060 FUN_180544060 ===== */

undefined8 FUN_180544060(void)

{
  return 0;
}



/* ===== 180544300 FUN_180544300 ===== */

void FUN_180544300(void)

{
  FUN_1804eced0(&DAT_180962e00,0x20,0x30,thunk_FUN_18000f890);
  return;
}



/* ===== 180544330 FUN_180544330 ===== */

void FUN_180544330(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    thunk_FUN_1800289e0(*(undefined8 *)(param_2 + 0x28));
  }
  return;
}



/* ===== 180544388 FUN_180544388 ===== */

void FUN_180544388(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 1) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffe;
    thunk_FUN_18000f890(*(undefined8 *)(param_2 + 0x48));
  }
  return;
}



/* ===== 1805443ae FUN_1805443ae ===== */

void FUN_1805443ae(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 2) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffd;
    thunk_FUN_18000f890(param_2 + 0x170);
  }
  return;
}



/* ===== 180544484 FUN_180544484 ===== */

void FUN_180544484(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    thunk_FUN_18000f890(param_2 + 0x48);
  }
  return;
}



/* ===== 1805444e8 FUN_1805444e8 ===== */

void FUN_1805444e8(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 1) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffe;
    thunk_FUN_18000f890(param_2 + 0x68);
  }
  return;
}



/* ===== 180544600 FUN_180544600 ===== */

void FUN_180544600(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 1) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffe;
    thunk_FUN_18000f890(param_2 + 0x98);
  }
  return;
}



/* ===== 180544635 FUN_180544635 ===== */

void FUN_180544635(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 2) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffd;
    thunk_FUN_18000f890(param_2 + 0x98);
  }
  return;
}



