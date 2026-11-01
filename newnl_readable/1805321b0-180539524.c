/* ===== 1805321b0 FUN_1805321b0 ===== */

undefined8 FUN_1805321b0(void)

{
  undefined1 in_XMM0 [16];
  undefined1 auVar1 [16];
  
  auVar1 = roundss(in_XMM0,in_XMM0,0xc);
  return auVar1._0_8_;
}



/* ===== 1805321c0 FUN_1805321c0 ===== */

float FUN_1805321c0(float param_1)

{
  short sVar1;
  int iVar2;
  float local_res8 [8];
  
  local_res8[0] = param_1;
  iVar2 = fegetround();
  if (iVar2 == 0) {
    sVar1 = FUN_180526660(local_res8,1);
    if (sVar1 == 0) {
      sVar1 = FUN_180526660(local_res8,0);
      if ((sVar1 != 0) && (sVar1 = FUN_180526660(local_res8,0xffffffff), sVar1 != 0)) {
        if (((uint)local_res8[0] & 0x80000000) == 0) {
          return local_res8[0] + DAT_1808ac540;
        }
        return local_res8[0] + DAT_1808acdc0;
      }
    }
    else {
      sVar1 = FUN_180526660(local_res8,0);
      if (sVar1 != 0) {
        if (((uint)local_res8[0] & 0x80000000) != 0) {
          return local_res8[0] + DAT_1808acda0;
        }
LAB_180532224:
        return local_res8[0] + DAT_1808ac34c;
      }
    }
  }
  else if (iVar2 == 0x100) {
    sVar1 = FUN_180526660(local_res8,0);
    if ((sVar1 != 0) && (((uint)local_res8[0] & 0x80000000) != 0)) {
      return local_res8[0] + DAT_1808acda0;
    }
  }
  else if (iVar2 == 0x200) {
    sVar1 = FUN_180526660(local_res8,0);
    if ((sVar1 != 0) && (((uint)local_res8[0] & 0x80000000) == 0)) goto LAB_180532224;
  }
  else if (iVar2 == 0x300) {
    FUN_180526660(local_res8,0);
  }
  return local_res8[0];
}



/* ===== 180532300 FUN_180532300 ===== */

undefined4 FUN_180532300(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (param_3 == 2) {
    uVar1 = 4;
    uVar2 = 0x12;
  }
  else {
    if (param_3 != 3) {
      return (int)param_2;
    }
    uVar2 = 0x11;
    uVar1 = 3;
  }
  FUN_18052fb30(&DAT_18057cc80,0x14,param_2,uVar1,uVar2,0x22,param_1,0,1);
  return (int)param_2;
}



/* ===== 1805323a0 FUN_1805323a0 ===== */

undefined4 FUN_1805323a0(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (param_3 == 2) {
    uVar1 = 4;
    uVar2 = 0x12;
  }
  else {
    if (param_3 != 3) {
      return param_2;
    }
    uVar2 = 0x11;
    uVar1 = 3;
  }
  FUN_18052fc70(&DAT_18057fd70,0x14,param_2,uVar1,uVar2,0x22,param_1,0,1);
  return param_2;
}



/* ===== 180532460 FUN_180532460 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_180532460(void)

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
  if (uVar3 < 0x7f) {
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



/* ===== 180532690 FUN_180532690 ===== */

undefined4
FUN_180532690(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  switch(param_4) {
  case 1:
    uVar1 = 0;
    uVar3 = 0;
    uVar2 = 8;
    break;
  case 2:
    uVar1 = 2;
    uVar3 = 0x22;
    uVar2 = 4;
    break;
  case 3:
  case 4:
  case 5:
    uVar2 = FUN_18052fdd0(param_3);
    return uVar2;
  case 6:
    uVar1 = 1;
    uVar3 = 0x21;
    uVar2 = 8;
    break;
  case 7:
    uVar1 = 4;
    uVar3 = 0x22;
    uVar2 = 0x12;
    break;
  default:
    goto switchD_1805326bb_caseD_8;
  case 9:
    uVar1 = 3;
    uVar3 = 0x22;
    uVar2 = 0x11;
  }
  FUN_18052fc70(&DAT_180580590,0x1d,param_3,uVar1,uVar2,uVar3,param_1,param_2,2);
switchD_1805326bb_caseD_8:
  return param_3;
}



/* ===== 180532800 FUN_180532800 ===== */

undefined ** FUN_180532800(void)

{
  return &PTR_s_No_error_180580700;
}



/* ===== 180532808 FUN_180532808 ===== */

undefined * FUN_180532808(void)

{
  return &DAT_180580bf8;
}



/* ===== 180532810 FUN_180532810 ===== */

undefined4
FUN_180532810(ulonglong *param_1,undefined2 *param_2,ulonglong param_3,undefined8 param_4,
             ulonglong param_5,longlong param_6)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar3 = 0;
  uVar4 = 0;
  if (param_2 == (undefined2 *)0x0) {
    if (param_3 == 0) {
LAB_18053287e:
      if (param_1 != (ulonglong *)0x0) {
        *param_1 = 0;
      }
      uVar2 = param_5;
      if (param_3 < param_5) {
        uVar2 = param_3;
      }
      if (uVar2 < 0x80000000) {
        lVar1 = FUN_180532930(param_2,param_4,uVar2,param_6);
        if (lVar1 == -1) {
          if (param_2 != (undefined2 *)0x0) {
            *param_2 = 0;
          }
          if (*(char *)(param_6 + 0x30) != '\0') {
            uVar3 = *(undefined4 *)(param_6 + 0x2c);
          }
          return uVar3;
        }
        uVar2 = lVar1 + 1;
        if (param_2 == (undefined2 *)0x0) goto LAB_18053290b;
        if (param_3 < uVar2) {
          if (param_5 != 0xffffffffffffffff) {
            *param_2 = 0;
            uVar3 = 0x22;
            goto LAB_1805328ec;
          }
          uVar4 = 0x50;
          uVar2 = param_3;
        }
        param_2[uVar2 - 1] = 0;
LAB_18053290b:
        if (param_1 != (ulonglong *)0x0) {
          *param_1 = uVar2;
        }
        return uVar4;
      }
      uVar3 = 0x16;
LAB_1805328ec:
      *(undefined4 *)(param_6 + 0x2c) = uVar3;
      *(undefined1 *)(param_6 + 0x30) = 1;
      goto LAB_180532860;
    }
  }
  else if (param_3 != 0) {
    *param_2 = 0;
    goto LAB_18053287e;
  }
  uVar3 = 0x16;
  *(undefined1 *)(param_6 + 0x30) = 1;
  *(undefined4 *)(param_6 + 0x2c) = 0x16;
LAB_180532860:
  FUN_180527688(0,0,0,0,0,param_6);
  return uVar3;
}



/* ===== 180532930 FUN_180532930 ===== */

ulonglong FUN_180532930(ushort *param_1,byte *param_2,ulonglong param_3,longlong param_4)

{
  int iVar1;
  DWORD DVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  byte *pbVar7;
  undefined8 local_res8;
  byte *local_res10;
  undefined8 in_stack_ffffffffffffffd0;
  uint uVar8;
  undefined8 uVar9;
  
  uVar8 = (uint)((ulonglong)in_stack_ffffffffffffffd0 >> 0x20);
  uVar9 = 0xfffffffffffffffe;
  uVar3 = 0;
  if (param_1 != (ushort *)0x0) {
    if (param_3 == 0) {
      return 0;
    }
    *param_1 = 0;
  }
  local_res10 = param_2;
  if (param_2 == (byte *)0x0) {
    *(undefined1 *)(param_4 + 0x30) = 1;
    *(undefined4 *)(param_4 + 0x2c) = 0x16;
    FUN_180527688(0,0,0,0,0,param_4);
    return 0xffffffffffffffff;
  }
  if (*(char *)(param_4 + 0x28) == '\0') {
    FUN_1805002a0(param_4);
  }
  iVar1 = *(int *)(*(longlong *)(param_4 + 0x18) + 0xc);
  if (iVar1 == 0xfde9) {
    local_res8 = 0;
    uVar3 = FUN_180528f28(param_1,&local_res10,param_3,&local_res8,param_4);
    return uVar3;
  }
  lVar4 = *(longlong *)(*(longlong *)(param_4 + 0x18) + 0x138);
  if (param_1 == (ushort *)0x0) {
    uVar3 = 0xffffffffffffffff;
    if (lVar4 == 0) {
      do {
        uVar3 = uVar3 + 1;
      } while (local_res10[uVar3] != 0);
    }
    else {
      iVar1 = FUN_18052ee60(iVar1,9,local_res10,0xffffffff,0,(ulonglong)uVar8 << 0x20,uVar9);
      lVar4 = (longlong)iVar1;
      if (lVar4 != 0) goto LAB_180532b12;
      *(undefined1 *)(param_4 + 0x30) = 1;
      *(undefined4 *)(param_4 + 0x2c) = 0x2a;
    }
  }
  else if (lVar4 == 0) {
    if (param_3 != 0) {
      do {
        *param_1 = (ushort)local_res10[uVar3];
        if (local_res10[uVar3] == 0) {
          return uVar3;
        }
        uVar3 = uVar3 + 1;
        param_1 = param_1 + 1;
      } while (uVar3 < param_3);
    }
  }
  else {
    uVar5 = (uint)param_3;
    uVar3 = 0xffffffffffffffff;
    iVar1 = FUN_18052ee60(iVar1,9,local_res10,0xffffffff,param_1,CONCAT44(uVar8,uVar5),uVar9);
    lVar4 = (longlong)iVar1;
    if (lVar4 != 0) {
LAB_180532b12:
      return lVar4 - 1;
    }
    DVar2 = GetLastError();
    if (DVar2 == 0x7a) {
      uVar6 = param_3 & 0xffffffff;
      pbVar7 = local_res10;
      while (uVar5 != 0) {
        uVar5 = (int)uVar6 - 1;
        uVar6 = (ulonglong)uVar5;
        if (*pbVar7 == 0) break;
        if ((*(short *)(**(longlong **)(param_4 + 0x18) + (ulonglong)*pbVar7 * 2) < 0) &&
           (pbVar7 = pbVar7 + 1, *pbVar7 == 0)) goto LAB_180532a57;
        pbVar7 = pbVar7 + 1;
      }
      iVar1 = FUN_18052ee60(*(undefined4 *)(*(longlong *)(param_4 + 0x18) + 0xc),1,local_res10,
                            (int)pbVar7 - (int)local_res10,param_1,param_3 & 0xffffffff);
      if ((longlong)iVar1 != 0) {
        return (longlong)iVar1;
      }
    }
LAB_180532a57:
    *(undefined1 *)(param_4 + 0x30) = 1;
    *(undefined4 *)(param_4 + 0x2c) = 0x2a;
    *param_1 = 0;
  }
  return uVar3;
}



/* ===== 180532b28 FUN_180532b28 ===== */

undefined4 FUN_180532b28(void)

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
  }
  uVar1 = FUN_180532810();
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



/* ===== 180532bd0 FUN_180532bd0 ===== */

ulonglong FUN_180532bd0(void)

{
  return (ulonglong)(uint3)((uint)*(undefined4 *)(*(longlong *)((longlong)Self + 0x60) + 0xbc) >> 8)
         & 0xffffffffffffff01;
}



/* ===== 180532bec FUN_180532bec ===== */

uint FUN_180532bec(void)

{
  return *(uint *)(*(longlong *)(*(longlong *)((longlong)Self + 0x60) + 0x20) + 8) >> 0x1f;
}



/* ===== 180532c10 FUN_180532c10 ===== */

void FUN_180532c10(void)

{
  FUN_180532c50();
  return;
}



/* ===== 180532c30 FUN_180532c30 ===== */

void FUN_180532c30(void)

{
  FUN_180532c50();
  return;
}



/* ===== 180532c50 FUN_180532c50 ===== */

undefined4
FUN_180532c50(undefined8 param_1,undefined8 param_2,int param_3,undefined4 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_3 == 1) {
    uVar1 = 2;
    uVar3 = 0x22;
    uVar2 = 4;
  }
  else {
    if (param_3 != 2) {
      return (int)param_2;
    }
    uVar1 = 1;
    uVar3 = 0x21;
    uVar2 = 8;
  }
  FUN_18052fb30(param_5,param_4,param_2,uVar1,uVar2,uVar3,param_1,0,1);
  return (int)param_2;
}



/* ===== 180532cf0 FUN_180532cf0 ===== */

void FUN_180532cf0(void)

{
  FUN_180532d10();
  return;
}



/* ===== 180532d10 FUN_180532d10 ===== */

undefined4
FUN_180532d10(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_3 == 1) {
    uVar1 = 2;
    uVar3 = 0x22;
    uVar2 = 4;
  }
  else {
    if (param_3 != 2) {
      return param_2;
    }
    uVar1 = 1;
    uVar3 = 0x21;
    uVar2 = 8;
  }
  FUN_18052fc70(param_5,param_4,param_2,uVar1,uVar2,uVar3,param_1,0,1);
  return param_2;
}



/* ===== 180532dc0 FUN_180532dc0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_180532dc0(double param_1)

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



/* ===== 180533550 FUN_180533550 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_180533550(undefined8 param_1)

{
  undefined4 *puVar1;
  
  if (_DAT_180581c70 <=
      (double)CONCAT44((uint)((ulonglong)param_1 >> 0x20) & _UNK_1808adea4,
                       (uint)param_1 & _DAT_1808adea0)) {
    puVar1 = (undefined4 *)FUN_18051bfb0();
    *puVar1 = 0x22;
  }
  return (uint)param_1;
}



/* ===== 180533590 FUN_180533590 ===== */

undefined4 FUN_180533590(double param_1)

{
  undefined4 *puVar1;
  
  if (param_1 == 0.0) {
    puVar1 = (undefined4 *)FUN_18051bfb0();
    *puVar1 = 0x22;
  }
  return SUB84(param_1,0);
}



/* ===== 1805335c0 FUN_1805335c0 ===== */

double FUN_1805335c0(int param_1)

{
  double dVar1;
  undefined4 *puVar2;
  double dVar3;
  
  if (param_1 == 0) {
    dVar3 = DAT_1808ac500;
  }
  else {
    dVar3 = DAT_1808acdb8;
  }
  dVar1 = DAT_1808ac500 / 0.0;
  puVar2 = (undefined4 *)FUN_18051bfb0();
  *puVar2 = 0x22;
  return dVar1 * dVar3;
}



/* ===== 180533620 FUN_180533620 ===== */

double FUN_180533620(double param_1)

{
  undefined4 *puVar1;
  
  if (!NAN(param_1) && !NAN(param_1)) {
    puVar1 = (undefined4 *)FUN_18051bfb0();
    *puVar1 = 0x21;
  }
  return (param_1 - param_1) / (param_1 - param_1);
}



/* ===== 180533660 FUN_180533660 ===== */

double FUN_180533660(int param_1)

{
  undefined4 *puVar1;
  double dVar2;
  
  if (param_1 == 0) {
    dVar2 = DAT_180581c58;
  }
  else {
    dVar2 = DAT_180581c60;
  }
  dVar2 = dVar2 * DAT_180581c58;
  puVar1 = (undefined4 *)FUN_18051bfb0();
  *puVar1 = 0x22;
  return dVar2;
}



/* ===== 1805336b0 FUN_1805336b0 ===== */

undefined8 FUN_1805336b0(int param_1)

{
  if (param_1 == 0) {
    return 0;
  }
  return DAT_18056eaf8;
}



/* ===== 1805336d0 FUN_1805336d0 ===== */

double FUN_1805336d0(void)

{
  uint uVar1;
  double dVar2;
  undefined1 in_ZMM0 [64];
  double dVar3;
  double dVar4;
  undefined1 auVar5 [64];
  double dVar6;
  double dVar7;
  
  dVar2 = in_ZMM0._0_8_;
  auVar5 = ZEXT1664(in_ZMM0._0_16_);
  uVar1 = in_ZMM0._4_4_ >> 0x14 & 0x7ff;
  dVar6 = 0.0;
  if (0x7ff0000000000000 < (ulonglong)ABS(dVar2)) {
    dVar2 = (double)FUN_18053be80(0);
    return dVar2;
  }
  if (uVar1 < 0x3e3) {
    FUN_18052f090(0x20);
    return auVar5._0_8_;
  }
  if (uVar1 < 0x3ff) {
    dVar4 = dVar2;
    if ((longlong)dVar2 < 0) {
      dVar4 = (double)((ulonglong)dVar2 ^ DAT_1808adeb0);
    }
    if (uVar1 < 0x3fe) {
      dVar3 = dVar4 * dVar4;
    }
    else {
      dVar3 = (DAT_1808ac500 - dVar4) * DAT_1808ac4a8;
      dVar6 = SQRT(dVar3);
      dVar4 = dVar6;
    }
    dVar7 = ((dVar3 * (dVar3 * (dVar3 * (dVar3 * (dVar3 * DAT_18057ac50 + DAT_18057ac58) -
                                        DAT_18057ac60) + DAT_18057ac78) - DAT_18057ac80) +
             DAT_18057ac70) * dVar3) /
            (dVar3 * (dVar3 * (dVar3 * (dVar3 * DAT_18057ac68 - DAT_18057ac88) + DAT_18057ac98) -
                     DAT_18057aca0) + DAT_18057ac90);
    if (uVar1 < 0x3fe) {
      dVar4 = dVar7 * dVar4 + dVar4;
    }
    else {
      dVar4 = (double)((ulonglong)dVar6 & 0xffffffff00000000);
      dVar3 = (-(dVar4 * dVar4) + dVar3) / (dVar4 + dVar6);
      dVar4 = DAT_180579910 -
              ((dVar7 * (dVar6 + dVar6) - (DAT_1805798d8 - (dVar3 + dVar3))) -
              (DAT_180579910 - (dVar4 + dVar4)));
    }
    if ((longlong)dVar2 < 0) {
      dVar4 = (double)((ulonglong)dVar4 ^ DAT_1808adeb0);
    }
    return dVar4;
  }
  if (dVar2 == DAT_1808ac500) {
    FUN_18052f090(0x20);
    return DAT_180578270;
  }
  if (dVar2 == DAT_1808acdb8) {
    FUN_18052f090(0x20);
    return DAT_180579930;
  }
  dVar2 = (double)FUN_18052fb30("asin",0xe,0xfff8000000000000,1,8,0x21);
  return dVar2;
}



/* ===== 180533970 FUN_180533970 ===== */

double FUN_180533970(void)

{
  double dVar1;
  double dVar2;
  uint uVar3;
  double dVar4;
  undefined1 in_ZMM0 [64];
  double dVar5;
  double dVar6;
  
  dVar2 = in_ZMM0._0_8_;
  uVar3 = in_ZMM0._4_4_ >> 0x14 & 0x7ff;
  dVar4 = 0.0;
  if (0x7ff0000000000000 < (ulonglong)ABS(dVar2)) {
    dVar4 = (double)FUN_18053be80(dVar2,0,dVar2);
    return dVar4;
  }
  if (uVar3 < 0x3c7) {
    FUN_18052f090(0x20);
    return DAT_180578270;
  }
  if (uVar3 < 0x3ff) {
    dVar5 = dVar2;
    if ((longlong)dVar2 < 0) {
      dVar5 = (double)((ulonglong)dVar2 ^ DAT_1808adeb0);
    }
    if (uVar3 < 0x3fe) {
      dVar1 = dVar5 * dVar5;
    }
    else {
      dVar1 = (DAT_1808ac500 - dVar5) * DAT_1808ac4a8;
      dVar5 = SQRT(dVar1);
      dVar4 = dVar5;
    }
    dVar6 = ((dVar1 * (dVar1 * (dVar1 * (dVar1 * (dVar1 * DAT_18057ac50 + DAT_18057ac58) -
                                        DAT_18057ac60) + DAT_18057ac78) - DAT_18057ac80) +
             DAT_18057ac70) * dVar1) /
            (dVar1 * (dVar1 * (dVar1 * (dVar1 * DAT_18057ac68 - DAT_18057ac88) + DAT_18057ac98) -
                     DAT_18057aca0) + DAT_18057ac90);
    if (uVar3 < 0x3fe) {
      return DAT_180578270 - (dVar2 - (-(dVar6 * dVar2) + DAT_1805798d8));
    }
    if ((longlong)dVar2 < 0) {
      dVar4 = (dVar5 * dVar6 - DAT_1805798d8) + dVar4;
      return DAT_1808ac588 - (dVar4 + dVar4);
    }
    dVar2 = (double)((ulonglong)dVar4 & 0xffffffff00000000);
    dVar4 = (-(dVar2 * dVar2) + dVar1) / (dVar2 + dVar4);
    return dVar6 * (dVar5 + dVar5) + dVar4 + dVar4 + dVar2 + dVar2;
  }
  if (dVar2 == DAT_1808ac500) {
    return 0.0;
  }
  if (dVar2 == DAT_1808acdb8) {
    FUN_18052f090(0x20);
    return DAT_1808ac588;
  }
  dVar4 = (double)FUN_18052fb30(&DAT_18057aca8,0xd,0xfff8000000000000,1,8,0x21);
  return dVar4;
}



/* ===== 180533bf0 FUN_180533bf0 ===== */

double FUN_180533bf0(double param_1)

{
  double dVar1;
  double dVar2;
  bool bVar3;
  double dVar4;
  
  dVar2 = ABS(param_1);
  bVar3 = param_1 != dVar2;
  if (bVar3) {
    param_1 = (double)((ulonglong)param_1 ^ DAT_1808adeb0);
  }
  if ((ulonglong)dVar2 < 0x4003800000000001) {
    if ((ulonglong)dVar2 < 0x3ff3000000000001) {
      if ((ulonglong)dVar2 < 0x3fe6000000000001) {
        if ((ulonglong)dVar2 < 0x3fdc000000000001) {
          dVar2 = 0.0;
          dVar4 = 0.0;
        }
        else {
          param_1 = ((param_1 + param_1) - DAT_1808ac500) / (param_1 + DAT_1808ac548);
          dVar4 = DAT_18057acb8;
          dVar2 = DAT_18057ad08;
        }
      }
      else {
        param_1 = (param_1 - DAT_1808ac500) / (param_1 + DAT_1808ac500);
        dVar4 = DAT_18057acc0;
        dVar2 = DAT_180579910;
      }
    }
    else {
      param_1 = (param_1 - DAT_1808ac518) / (param_1 * DAT_1808ac518 + DAT_1808ac500);
      dVar4 = DAT_18057acb0;
      dVar2 = DAT_18057ad18;
    }
  }
  else {
    if (0x7ff0000000000000 < (ulonglong)dVar2) {
      dVar2 = (double)FUN_18053be80(0);
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
    param_1 = DAT_1808acdb8 / param_1;
    dVar4 = DAT_18057acc8;
    dVar2 = DAT_180578270;
  }
  dVar1 = param_1 * param_1;
  dVar2 = dVar2 - ((((dVar1 * (dVar1 * (dVar1 * (dVar1 * DAT_18057acd0 + DAT_18057acd8) +
                                       DAT_18057ace8) + DAT_18057ad00) + DAT_18057acf0) *
                    dVar1 * param_1) /
                    (dVar1 * (dVar1 * (dVar1 * (dVar1 * DAT_18057ace0 + DAT_18057acf8) +
                                      DAT_18057ad20) + DAT_18057ad28) + DAT_18057ad10) - dVar4) -
                  param_1);
  if (bVar3) {
    dVar2 = (double)((ulonglong)dVar2 ^ DAT_1808adeb0);
  }
  return dVar2;
}



/* ===== 180533e10 FUN_180533e10 ===== */

double FUN_180533e10(double param_1)

{
  double dVar1;
  double dVar2;
  uint uVar3;
  double dVar4;
  double dVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  double dVar11;
  
  dVar4 = ABS(param_1);
  if ((ulonglong)dVar4 < 0x3e30000000000000) {
    if (dVar4 != 0.0) {
      FUN_18052f090(0x20);
    }
    return param_1;
  }
  if (0x7fefffffffffffff < (ulonglong)dVar4) {
    if ((ulonglong)dVar4 < 0x7ff0000000000001) {
      return param_1 + param_1;
    }
    dVar4 = (double)FUN_18053be80();
    return dVar4;
  }
  bVar10 = dVar4 != param_1;
  dVar4 = param_1;
  if (bVar10) {
    dVar4 = (double)((ulonglong)param_1 ^ DAT_1808adeb0);
  }
  if (DAT_18057b4a8 <= dVar4) {
    if (bVar10) {
      dVar4 = (double)FUN_18052fb30(&DAT_18057b3f8,0x1f,0xfff0000000000000,3,1,0x22,param_1,0,1);
      return dVar4;
    }
    dVar4 = (double)FUN_18052fb30(&DAT_18057b3f8,0x1f,0x7ff0000000000000,3,1,0x22,param_1,0,1);
    return dVar4;
  }
  if (dVar4 < DAT_18057b498) {
    dVar2 = dVar4 - (double)(int)dVar4;
    dVar11 = dVar2 * dVar2;
    dVar1 = (dVar11 * (dVar11 * (dVar11 * (dVar11 * (dVar11 * (dVar11 * DAT_18057b408 +
                                                              DAT_18057b420) + DAT_18057b430) +
                                          DAT_18057b440) + DAT_18057b450) + DAT_18057b480) +
            DAT_1808ac4a8) * dVar11;
    dVar5 = (double)((ulonglong)dVar2 & 0xfffffffff8000000);
    lVar6 = (longlong)(int)dVar4;
    dVar4 = dVar11 * dVar2 *
            (dVar11 * (dVar11 * (dVar11 * (dVar11 * (dVar11 * (dVar11 * DAT_18057b400 +
                                                              DAT_18057b418) + DAT_18057b428) +
                                          DAT_18057b438) + DAT_18057b448) + DAT_18057b460) +
            DAT_18057b490) + (dVar2 - dVar5);
    dVar4 = dVar5 * *(double *)(&DAT_1805855c0 + lVar6 * 8) +
            dVar1 * *(double *)(&DAT_180585360 + lVar6 * 8) +
            dVar4 * *(double *)(&DAT_1805855c0 + lVar6 * 8) +
            dVar5 * *(double *)(&DAT_1805856f0 + lVar6 * 8) +
            dVar4 * *(double *)(&DAT_1805856f0 + lVar6 * 8) +
            *(double *)(&DAT_180585490 + lVar6 * 8) * dVar1 +
            *(double *)(&DAT_180585490 + lVar6 * 8) + *(double *)(&DAT_180585360 + lVar6 * 8);
  }
  else {
    dVar11 = dVar4 * DAT_18057b4a0;
    if (dVar11 <= 0.0) {
      dVar11 = dVar11 - DAT_1808ac4a8;
    }
    else {
      dVar11 = dVar11 + DAT_1808ac4a8;
    }
    uVar7 = (uint)dVar11;
    uVar3 = uVar7 & 0x1f;
    dVar4 = -((double)(int)uVar7 * DAT_18057b470) + dVar4;
    dVar11 = (double)(int)-uVar7 * DAT_18057b410 + dVar4;
    iVar8 = (int)(((int)(uVar7 - uVar3) >> 0x1f & 0x1fU) + (uVar7 - uVar3)) >> 5;
    iVar9 = iVar8 + -1;
    dVar4 = *(double *)(&DAT_180585160 + (ulonglong)uVar3 * 8) +
            (*(double *)(&DAT_180585260 + (ulonglong)uVar3 * 8) +
            *(double *)(&DAT_180585160 + (ulonglong)uVar3 * 8)) *
            (dVar11 * dVar11 *
             (dVar11 * (dVar11 * (dVar11 * (dVar11 * DAT_18057b458 + DAT_18057b468) + DAT_18057b478)
                       + DAT_18057b488) + DAT_1808ac4a8) + (double)(int)-uVar7 * DAT_18057b410 +
            dVar4) + *(double *)(&DAT_180585260 + (ulonglong)uVar3 * 8);
    if (iVar8 + 0x3fdU < 0x7fe) {
      dVar4 = dVar4 * (double)((longlong)iVar9 + 0x3ff << 0x34);
    }
    else {
      dVar4 = dVar4 * (double)((longlong)(iVar9 / 2) + 0x3ff << 0x34) *
              (double)((longlong)(iVar9 - iVar9 / 2) + 0x3ff << 0x34);
    }
  }
  if (bVar10) {
    dVar4 = (double)((ulonglong)dVar4 ^ DAT_1808adeb0);
  }
  return dVar4;
}



/* ===== 1805341b0 FUN_1805341b0 ===== */

double FUN_1805341b0(double param_1)

{
  double dVar1;
  double dVar2;
  uint uVar3;
  double dVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  double dVar9;
  
  dVar4 = ABS(param_1);
  if ((ulonglong)dVar4 < 0x3e30000000000000) {
    if (dVar4 != 0.0) {
      FUN_18052f090(0x20,0);
    }
    return DAT_1808ac500;
  }
  if (0x7fefffffffffffff < (ulonglong)dVar4) {
    if ((ulonglong)dVar4 < 0x7ff0000000000001) {
      FUN_18052f090(0);
      return INFINITY;
    }
    dVar4 = (double)FUN_18053be80();
    return dVar4;
  }
  dVar9 = param_1;
  if (dVar4 != param_1) {
    dVar9 = (double)((ulonglong)param_1 ^ DAT_1808adeb0);
  }
  if (DAT_18057b4a8 <= dVar9) {
    dVar4 = (double)FUN_18052fb30(&DAT_18057bb68,0x13,0x7ff0000000000000,3,0x11,0x22,param_1,0,1);
    return dVar4;
  }
  if (dVar9 < DAT_1808ac638) {
    dVar2 = dVar9 - (double)(int)dVar9;
    dVar1 = dVar2 * dVar2;
    dVar4 = (dVar1 * (dVar1 * (dVar1 * (dVar1 * (dVar1 * (dVar1 * DAT_18057b400 + DAT_18057b418) +
                                                DAT_18057b428) + DAT_18057b438) + DAT_18057b448) +
                     DAT_18057b460) + DAT_18057b490) * dVar1 * dVar2;
    dVar1 = (dVar1 * (dVar1 * (dVar1 * (dVar1 * (dVar1 * (dVar1 * DAT_18057b408 + DAT_18057b420) +
                                                DAT_18057b430) + DAT_18057b440) + DAT_18057b450) +
                     DAT_18057b480) + DAT_1808ac4a8) * dVar1;
    lVar5 = (longlong)(int)dVar9;
    return dVar2 * *(double *)(&DAT_180585a20 + lVar5 * 8) +
           dVar4 * *(double *)(&DAT_180585a20 + lVar5 * 8) +
           dVar1 * *(double *)(&DAT_180585c80 + lVar5 * 8) +
           dVar2 * *(double *)(&DAT_180585b50 + lVar5 * 8) +
           dVar1 * *(double *)(&DAT_180585db0 + lVar5 * 8) +
           *(double *)(&DAT_180585b50 + lVar5 * 8) * dVar4 + *(double *)(&DAT_180585db0 + lVar5 * 8)
           + *(double *)(&DAT_180585c80 + lVar5 * 8);
  }
  dVar4 = dVar9 * DAT_18057b4a0;
  if (dVar4 <= 0.0) {
    dVar4 = dVar4 - DAT_1808ac4a8;
  }
  else {
    dVar4 = dVar4 + DAT_1808ac4a8;
  }
  uVar6 = (uint)dVar4;
  uVar3 = uVar6 & 0x1f;
  dVar9 = -((double)(int)uVar6 * DAT_18057b470) + dVar9;
  dVar4 = (double)(int)-uVar6 * DAT_18057b410 + dVar9;
  iVar7 = (int)(((int)(uVar6 - uVar3) >> 0x1f & 0x1fU) + (uVar6 - uVar3)) >> 5;
  iVar8 = iVar7 + -1;
  dVar4 = *(double *)(&DAT_180585820 + (ulonglong)uVar3 * 8) +
          (*(double *)(&DAT_180585920 + (ulonglong)uVar3 * 8) +
          *(double *)(&DAT_180585820 + (ulonglong)uVar3 * 8)) *
          (dVar4 * dVar4 *
           (dVar4 * (dVar4 * (dVar4 * (dVar4 * DAT_18057b458 + DAT_18057b468) + DAT_18057b478) +
                    DAT_18057b488) + DAT_1808ac4a8) + (double)(int)-uVar6 * DAT_18057b410 + dVar9) +
          *(double *)(&DAT_180585920 + (ulonglong)uVar3 * 8);
  if (iVar7 + 0x3fdU < 0x7fe) {
    return dVar4 * (double)((longlong)iVar8 + 0x3ff << 0x34);
  }
  return dVar4 * (double)((longlong)(iVar8 / 2) + 0x3ff << 0x34) *
         (double)((longlong)(iVar8 - iVar8 / 2) + 0x3ff << 0x34);
}



/* ===== 180534530 FUN_180534530 ===== */

double FUN_180534530(double param_1)

{
  int iVar1;
  int iVar2;
  double dVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  double dVar7;
  
  dVar3 = ABS(param_1);
  if ((ulonglong)dVar3 < 0x3e30000000000000) {
    if (dVar3 != 0.0) {
      FUN_18052f090(0x20);
    }
    return param_1;
  }
  if (0x7ff0000000000000 < (ulonglong)dVar3) {
    dVar3 = (double)FUN_18053be80();
    return dVar3;
  }
  bVar6 = dVar3 != param_1;
  if (bVar6) {
    param_1 = (double)((ulonglong)param_1 ^ DAT_1808adeb0);
  }
  if (param_1 <= DAT_1808ac638) {
    if (DAT_1808ac500 < param_1) {
      dVar3 = (param_1 + param_1) * DAT_18057b4a0;
      if (dVar3 <= 0.0) {
        dVar3 = dVar3 - DAT_1808ac4a8;
      }
      else {
        dVar3 = dVar3 + DAT_1808ac4a8;
      }
      uVar5 = (uint)dVar3;
      uVar4 = uVar5 & 0x1f;
      dVar7 = -((double)(int)uVar5 * DAT_18057b470) + param_1 + param_1;
      iVar1 = (uVar5 - uVar4) + ((int)(uVar5 - uVar4) >> 0x1f & 0x1fU);
      iVar2 = iVar1 >> 5;
      iVar1 = iVar2 - (iVar1 >> 0x1f) >> 1;
      dVar3 = (double)(int)-uVar5 * DAT_18057b410 + dVar7;
      param_1 = DAT_1808ac500 -
                DAT_1808ac548 /
                ((double)((longlong)(iVar2 - iVar1) + 0x3ff << 0x34) *
                 ((*(double *)(&DAT_180585fe0 + (ulonglong)uVar4 * 8) +
                  *(double *)(&DAT_180585ee0 + (ulonglong)uVar4 * 8)) *
                  (dVar3 * dVar3 *
                   (dVar3 * (dVar3 * (dVar3 * (dVar3 * DAT_18057b458 + DAT_18057b468) +
                                     DAT_18057b478) + DAT_18057b488) + DAT_1808ac4a8) +
                   (double)(int)-uVar5 * DAT_18057b410 + dVar7) +
                  *(double *)(&DAT_180585fe0 + (ulonglong)uVar4 * 8) +
                 *(double *)(&DAT_180585ee0 + (ulonglong)uVar4 * 8)) *
                 (double)((longlong)iVar1 + 0x3ff << 0x34) + DAT_1808ac500);
    }
    else {
      dVar3 = param_1 * param_1;
      if (DAT_1808ac4f0 <= param_1) {
        param_1 = param_1 + ((dVar3 * (dVar3 * (-(dVar3 * DAT_18057bd70) + DAT_18057bde0) -
                                      DAT_18057bd90) - DAT_18057bdb0) * dVar3 * param_1) /
                            (dVar3 * (dVar3 * (dVar3 * DAT_18057bd80 + DAT_18057bd98) +
                                     DAT_18057bdc0) + DAT_18057bdd0);
      }
      else {
        param_1 = param_1 + ((dVar3 * (dVar3 * (-(dVar3 * DAT_18057bd78) + DAT_18057bde8) -
                                      DAT_18057bda0) - DAT_18057bdb8) * dVar3 * param_1) /
                            (dVar3 * (dVar3 * (dVar3 * DAT_18057bd88 + DAT_18057bda8) +
                                     DAT_18057bdc8) + DAT_18057bdd8);
      }
    }
  }
  else {
    param_1 = DAT_1808ac500;
  }
  if (bVar6) {
    param_1 = (double)((ulonglong)param_1 ^ DAT_1808adeb0);
  }
  return param_1;
}



/* ===== 180534810 FUN_180534810 ===== */

void FUN_180534810(void)

{
  return;
}



/* ===== 180534840 FUN_180534840 ===== */

ulonglong FUN_180534840(undefined8 param_1,undefined4 *param_2,undefined8 param_3,
                       undefined4 *param_4)

{
  byte bVar1;
  ulonglong uVar2;
  
  __acrt_lock(*param_2);
  bVar1 = (byte)DAT_180919500 & 0x3f;
  uVar2 = DAT_180c9ff68 ^ DAT_180919500;
  __acrt_unlock(*param_4);
  return uVar2 >> bVar1 | uVar2 << 0x40 - bVar1;
}



/* ===== 180534888 __acrt_get_sigabrt_handler ===== */

/* Library Function - Single Match
    __acrt_get_sigabrt_handler
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_get_sigabrt_handler(void)

{
  undefined1 local_res8 [8];
  undefined4 local_res10 [2];
  undefined4 local_res18 [4];
  
  local_res10[0] = 3;
  local_res18[0] = 3;
  FUN_180534840(local_res8,local_res18,local_res8,local_res10);
  return;
}



/* ===== 1805348b8 FUN_1805348b8 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1805348b8(undefined8 param_1)

{
  _DAT_180c9ff58 = param_1;
  _DAT_180c9ff60 = param_1;
  DAT_180c9ff68 = param_1;
  _DAT_180c9ff70 = param_1;
  return;
}



/* ===== 1805348d8 FUN_1805348d8 ===== */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 FUN_1805348d8(uint param_1)

{
  bool bVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  byte bVar7;
  longlong lVar8;
  code *pcVar9;
  ulonglong *puVar10;
  undefined4 local_res10;
  
  plVar2 = (longlong *)0x0;
  local_res10 = 0;
  bVar1 = true;
  if (param_1 == 2) {
LAB_18053492f:
    if (param_1 == 2) {
      puVar10 = (ulonglong *)&DAT_180c9ff58;
    }
    else if (param_1 == 6) {
LAB_1805349d1:
      puVar10 = &DAT_180c9ff68;
    }
    else if (param_1 == 0xf) {
      puVar10 = (ulonglong *)&DAT_180c9ff70;
    }
    else if (param_1 == 0x15) {
      puVar10 = (ulonglong *)&DAT_180c9ff60;
    }
    else {
      if (param_1 == 0x16) goto LAB_1805349d1;
      puVar10 = (ulonglong *)0x0;
    }
  }
  else {
    if (param_1 != 4) {
      if (param_1 != 6) {
        if ((param_1 == 8) || (param_1 == 0xb)) goto LAB_18053495f;
        if ((param_1 != 0xf) && ((param_1 != 0x15 && (param_1 != 0x16)))) goto LAB_1805349b1;
      }
      goto LAB_18053492f;
    }
LAB_18053495f:
    plVar2 = (longlong *)FUN_1805298c0();
    if (plVar2 == (longlong *)0x0) {
      return 0xffffffff;
    }
    lVar5 = *plVar2;
    lVar4 = DAT_18057c940 * 0x10 + lVar5;
    for (; lVar5 != lVar4; lVar5 = lVar5 + 0x10) {
      if (*(uint *)(lVar5 + 4) == param_1) goto LAB_1805349ac;
    }
    lVar5 = 0;
LAB_1805349ac:
    if (lVar5 == 0) {
LAB_1805349b1:
      puVar3 = (undefined4 *)FUN_18051bfb0();
      *puVar3 = 0x16;
      FUN_180527740();
      return 0xffffffff;
    }
    puVar10 = (ulonglong *)(lVar5 + 8);
    bVar1 = false;
  }
  lVar5 = 0;
  if (bVar1) {
    __acrt_lock(3);
  }
  pcVar9 = (code *)*puVar10;
  if (bVar1) {
    bVar7 = (byte)DAT_180919500 & 0x3f;
    pcVar9 = (code *)(((ulonglong)pcVar9 ^ DAT_180919500) >> bVar7 |
                     ((ulonglong)pcVar9 ^ DAT_180919500) << 0x40 - bVar7);
  }
  if (pcVar9 == (code *)0x1) goto LAB_180534aba;
  if (pcVar9 == (code *)0x0) {
    if (bVar1) {
      __acrt_unlock(3);
    }
    FUN_18051c3c0(3);
    pcVar9 = (code *)swi(3);
    uVar6 = (*pcVar9)();
    return uVar6;
  }
  if ((param_1 < 0xc) && ((0x910U >> (param_1 & 0x1f) & 1) != 0)) {
    lVar5 = plVar2[1];
    plVar2[1] = 0;
    if (param_1 == 8) {
      lVar4 = FUN_180529860();
      local_res10 = *(undefined4 *)(lVar4 + 0x10);
      lVar4 = FUN_180529860();
      *(undefined4 *)(lVar4 + 0x10) = 0x8c;
      goto LAB_180534a72;
    }
  }
  else {
LAB_180534a72:
    if (param_1 == 8) {
      lVar4 = DAT_18057c948 * 0x10 + *plVar2;
      lVar8 = DAT_18057c950 * 0x10 + lVar4;
      for (; lVar4 != lVar8; lVar4 = lVar4 + 0x10) {
        *(undefined8 *)(lVar4 + 8) = 0;
      }
      goto LAB_180534aba;
    }
  }
  *puVar10 = DAT_180919500;
LAB_180534aba:
  if (bVar1) {
    __acrt_unlock(3);
  }
  if (pcVar9 != (code *)0x1) {
    if (param_1 == 8) {
      lVar4 = FUN_180529860();
      (*pcVar9)(8,*(undefined4 *)(lVar4 + 0x10));
    }
    else {
      (*pcVar9)(param_1);
    }
    if (((param_1 < 0xc) && ((0x910U >> (param_1 & 0x1f) & 1) != 0)) &&
       (plVar2[1] = lVar5, param_1 == 8)) {
      lVar5 = FUN_180529860();
      *(undefined4 *)(lVar5 + 0x10) = local_res10;
    }
  }
  return 0;
}



/* ===== 180534b34 FUN_180534b34 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
FUN_180534b34(__crt_locale_pointers *param_1,undefined8 param_2,undefined4 param_3,ulonglong param_4
             ,int param_5)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 auStack_88 [64];
  undefined4 local_48 [2];
  longlong local_40;
  longlong local_38;
  char local_28;
  ulonglong local_20;
  
  local_20 = DAT_180919500 ^ (ulonglong)local_48;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_40,param_1);
  uVar3 = *(undefined4 *)(local_38 + 0xc);
  iVar2 = FUN_18052c8e4(param_2,param_3,0,0);
  puVar9 = auStack_88;
  if (iVar2 == 0) {
    uVar3 = 0;
    puVar9 = auStack_88;
    goto LAB_180534c76;
  }
  uVar6 = (longlong)iVar2 * 2 + 0x10;
  uVar6 = -(ulonglong)((ulonglong)((longlong)iVar2 * 2) < uVar6) & uVar6;
  if (uVar6 == 0) {
    puVar7 = (undefined4 *)0x0;
LAB_180534c5e:
    uVar3 = 0;
    if (puVar7 == (undefined4 *)0x0) goto LAB_180534c76;
  }
  else {
    if (uVar6 < 0x401) {
      uVar4 = uVar6 + 0xf;
      if (uVar4 <= uVar6) {
        uVar4 = 0xffffffffffffff0;
      }
      lVar1 = -(uVar4 & 0xfffffffffffffff0);
      puVar9 = auStack_88 + lVar1;
      puVar8 = auStack_88 + lVar1;
      puVar5 = (undefined4 *)((longlong)local_48 + lVar1);
      puVar7 = (undefined4 *)0x0;
      if (puVar5 == (undefined4 *)0x0) goto LAB_180534c5e;
      *puVar5 = 0xcccc;
LAB_180534c05:
      puVar7 = puVar5 + 4;
      puVar9 = puVar8;
    }
    else {
      puVar5 = (undefined4 *)_malloc_base(uVar6);
      puVar9 = auStack_88;
      puVar8 = auStack_88;
      puVar7 = (undefined4 *)0x0;
      if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = 0xdddd;
        goto LAB_180534c05;
      }
    }
    if (puVar7 == (undefined4 *)0x0) goto LAB_180534c5e;
    *(undefined8 *)(puVar9 + -8) = 0x180534c1e;
    iVar2 = FUN_18052c8e4(param_2,param_3,puVar7,iVar2);
    if (iVar2 == 0) goto LAB_180534c5e;
    *(undefined8 *)(puVar9 + 0x38) = 0;
    *(undefined8 *)(puVar9 + 0x30) = 0;
    *(int *)(puVar9 + 0x28) = param_5;
    *(ulonglong *)(puVar9 + 0x20) = -(ulonglong)(param_5 != 0) & param_4;
    *(undefined8 *)(puVar9 + -8) = 0x180534c58;
    uVar3 = FUN_18052eef0(uVar3,0,puVar7,0xffffffff);
  }
  if (puVar7[-4] == 0xdddd) {
    *(undefined8 *)(puVar9 + -8) = 0x180534c76;
    FUN_1805277b0();
  }
LAB_180534c76:
  if (local_28 != '\0') {
    *(uint *)(local_40 + 0x3a8) = *(uint *)(local_40 + 0x3a8) & 0xfffffffd;
  }
  *(undefined8 *)(puVar9 + -8) = 0x180534c95;
  return uVar3;
}



/* ===== 180534cb0 FUN_180534cb0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_180534cb0(undefined8 param_1,int param_2,undefined8 param_3,uint param_4,longlong *param_5)

{
  int iVar1;
  DWORD DVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStackY_108 [32];
  undefined4 local_d8 [4];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStackY_108;
  uVar4 = 0;
  *param_5 = 0;
  if (param_2 == 1) {
    iVar1 = FUN_180534b34(param_1,param_3,param_4,local_c8);
    if (iVar1 != 0) {
      lVar3 = _calloc_base((longlong)iVar1,1);
      *param_5 = lVar3;
      FUN_1805277b0(0);
      if (*param_5 == 0) {
        return 0xffffffff;
      }
      iVar1 = FUN_1805124f0();
      if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      return 0;
    }
    DVar2 = GetLastError();
    if (DVar2 != 0x7a) {
      return 0xffffffff;
    }
    iVar1 = FUN_180534b34(param_1,param_3,param_4,0);
    if (iVar1 == 0) {
      return 0xffffffff;
    }
    lVar3 = _calloc_base((longlong)iVar1,1);
    if (lVar3 != 0) {
      iVar1 = FUN_180534b34(param_1,param_3,param_4,lVar3);
LAB_180534daf:
      if (iVar1 != 0) {
        *param_5 = lVar3;
        lVar3 = 0;
        goto LAB_180534dc1;
      }
    }
  }
  else {
    if (param_2 != 2) {
      if (param_2 != 0) {
        return 0xffffffff;
      }
      local_d8[0] = 0;
      iVar1 = FUN_18052c8e4(param_3,param_4 | 0x20000000,local_d8,2);
      if (iVar1 == 0) {
        return 0xffffffff;
      }
      *(undefined1 *)param_5 = (undefined1)local_d8[0];
      return 0;
    }
    iVar1 = FUN_18052c8e4(param_3,param_4,0,0);
    if (iVar1 == 0) {
      return 0xffffffff;
    }
    lVar3 = _calloc_base((longlong)iVar1,2);
    if (lVar3 != 0) {
      iVar1 = FUN_18052c8e4(param_3,param_4,lVar3,iVar1);
      goto LAB_180534daf;
    }
  }
  uVar4 = 0xffffffff;
LAB_180534dc1:
  FUN_1805277b0(lVar3);
  return uVar4;
}



/* ===== 180534e78 FUN_180534e78 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

BOOL FUN_180534e78(__crt_locale_pointers *param_1,DWORD param_2,undefined8 param_3,
                  undefined4 param_4,LPWORD param_5,int param_6,int param_7)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  LPCWSTR lpSrcStr;
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
  
  local_30 = DAT_180919500 ^ (ulonglong)local_58;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_50,param_1);
  if (param_6 == 0) {
    param_6 = *(int *)(local_48 + 0xc);
  }
  local_60 = 0;
  local_68 = 0;
  iVar3 = FUN_18052ee60(param_6,(-(param_7 != 0) & 8U) + 1,param_3,param_4);
  puVar8 = auStack_88;
  if (iVar3 == 0) {
    BVar9 = 0;
    puVar8 = auStack_88;
    goto LAB_180534fce;
  }
  uVar1 = (longlong)iVar3 * 2;
  uVar6 = -(ulonglong)(uVar1 < uVar1 + 0x10) & uVar1 + 0x10;
  if (uVar6 == 0) {
    lpSrcStr = (LPCWSTR)0x0;
LAB_180534fb6:
    BVar9 = 0;
    if (lpSrcStr == (LPCWSTR)0x0) goto LAB_180534fce;
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
      lpSrcStr = (LPCWSTR)0x0;
      if (puVar5 == (undefined4 *)0x0) goto LAB_180534fb6;
      *puVar5 = 0xcccc;
LAB_180534f64:
      lpSrcStr = (LPCWSTR)(puVar5 + 4);
      puVar8 = puVar7;
    }
    else {
      puVar5 = (undefined4 *)_malloc_base();
      puVar8 = auStack_88;
      puVar7 = auStack_88;
      lpSrcStr = (LPCWSTR)0x0;
      if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = 0xdddd;
        goto LAB_180534f64;
      }
    }
    if (lpSrcStr == (LPCWSTR)0x0) goto LAB_180534fb6;
    *(undefined8 *)(puVar8 + -8) = 0x180534f7a;
    FUN_180540170(lpSrcStr,0,uVar1);
    *(int *)(puVar8 + 0x28) = iVar3;
    *(LPCWSTR *)(puVar8 + 0x20) = lpSrcStr;
    *(undefined8 *)(puVar8 + -8) = 0x180534f96;
    iVar3 = FUN_18052ee60(param_6,1,param_3,param_4);
    if (iVar3 == 0) goto LAB_180534fb6;
    *(undefined8 *)(puVar8 + -8) = 0x180534fb0;
    BVar9 = GetStringTypeW(param_2,lpSrcStr,iVar3,param_5);
  }
  if (*(int *)(lpSrcStr + -8) == 0xdddd) {
    *(undefined8 *)(puVar8 + -8) = 0x180534fce;
    FUN_1805277b0();
  }
LAB_180534fce:
  if (local_38 != '\0') {
    *(uint *)(local_50 + 0x3a8) = *(uint *)(local_50 + 0x3a8) & 0xfffffffd;
  }
  *(undefined8 *)(puVar8 + -8) = 0x180534fed;
  return BVar9;
}



/* ===== 180535008 __acrt_locale_free_monetary ===== */

/* Library Function - Single Match
    __acrt_locale_free_monetary
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_locale_free_monetary(longlong param_1)

{
  if (param_1 != 0) {
    if (*(undefined **)(param_1 + 0x18) != PTR_DAT_180919688) {
      FUN_1805277b0();
    }
    if (*(undefined **)(param_1 + 0x20) != PTR_DAT_180919690) {
      FUN_1805277b0();
    }
    if (*(undefined **)(param_1 + 0x28) != PTR_DAT_180919698) {
      FUN_1805277b0();
    }
    if (*(undefined **)(param_1 + 0x30) != PTR_DAT_1809196a0) {
      FUN_1805277b0();
    }
    if (*(undefined **)(param_1 + 0x38) != PTR_DAT_1809196a8) {
      FUN_1805277b0();
    }
    if (*(undefined **)(param_1 + 0x40) != PTR_DAT_1809196b0) {
      FUN_1805277b0();
    }
    if (*(undefined **)(param_1 + 0x48) != PTR_DAT_1809196b8) {
      FUN_1805277b0();
    }
    if (*(undefined **)(param_1 + 0x68) != PTR_DAT_1809196d8) {
      FUN_1805277b0();
    }
    if (*(undefined **)(param_1 + 0x70) != PTR_DAT_1809196e0) {
      FUN_1805277b0();
    }
    if (*(undefined **)(param_1 + 0x78) != PTR_DAT_1809196e8) {
      FUN_1805277b0();
    }
    if (*(undefined **)(param_1 + 0x80) != PTR_DAT_1809196f0) {
      FUN_1805277b0();
    }
    if (*(undefined **)(param_1 + 0x88) != PTR_DAT_1809196f8) {
      FUN_1805277b0();
    }
    if (*(undefined **)(param_1 + 0x90) != PTR_DAT_180919700) {
      FUN_1805277b0();
    }
  }
  return;
}



/* ===== 180535114 FUN_180535114 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_180535114(longlong param_1)

{
  byte *pbVar1;
  longlong *plVar2;
  byte bVar3;
  int *piVar4;
  undefined *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  undefined8 uVar30;
  undefined **ppuVar31;
  undefined4 *puVar32;
  byte *pbVar33;
  undefined **ppuVar34;
  byte *pbVar35;
  longlong local_38 [2];
  
  puVar32 = (undefined4 *)0x0;
  local_38[1] = 0;
  local_38[0] = param_1;
  if ((*(longlong *)(param_1 + 0x140) == 0) && (*(longlong *)(param_1 + 0x148) == 0)) {
    ppuVar31 = (undefined **)0x0;
    ppuVar34 = &PTR_DAT_180919670;
LAB_1805355c3:
    piVar4 = *(int **)(param_1 + 0xf0);
    if (piVar4 != (int *)0x0) {
      LOCK();
      *piVar4 = *piVar4 + -1;
      UNLOCK();
    }
    piVar4 = *(int **)(param_1 + 0xe0);
    if (piVar4 != (int *)0x0) {
      LOCK();
      iVar9 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        FUN_1805277b0(*(undefined8 *)(param_1 + 0xf8));
        FUN_1805277b0(*(undefined8 *)(param_1 + 0xe0));
      }
    }
    *(undefined4 **)(param_1 + 0xf0) = puVar32;
    uVar30 = 0;
    *(undefined ***)(param_1 + 0xe0) = ppuVar31;
    *(undefined8 *)(param_1 + 0xf8) = ppuVar34;
  }
  else {
    ppuVar34 = (undefined **)_calloc_base(1,0x98);
    FUN_1805277b0(0);
    if (ppuVar34 != (undefined **)0x0) {
      ppuVar31 = (undefined **)_calloc_base(1,4);
      FUN_1805277b0(0);
      puVar5 = PTR_DAT_180919678;
      if (ppuVar31 != (undefined **)0x0) {
        if (*(longlong *)(param_1 + 0x140) == 0) {
          *ppuVar34 = PTR_DAT_180919670;
          ppuVar34[1] = puVar5;
          puVar5 = PTR_DAT_180919688;
          ppuVar34[2] = PTR_DAT_180919680;
          ppuVar34[3] = puVar5;
          puVar5 = PTR_DAT_180919698;
          ppuVar34[4] = PTR_DAT_180919690;
          ppuVar34[5] = puVar5;
          puVar5 = PTR_DAT_1809196a8;
          ppuVar34[6] = PTR_DAT_1809196a0;
          ppuVar34[7] = puVar5;
          puVar5 = PTR_DAT_1809196b8;
          ppuVar34[8] = PTR_DAT_1809196b0;
          ppuVar34[9] = puVar5;
          puVar5 = PTR_DAT_1809196c8;
          ppuVar34[10] = _DAT_1809196c0;
          ppuVar34[0xb] = puVar5;
          puVar5 = PTR_DAT_1809196d8;
          ppuVar34[0xc] = PTR_DAT_1809196d0;
          ppuVar34[0xd] = puVar5;
          uVar8 = PTR_DAT_1809196e8._4_4_;
          uVar7 = PTR_DAT_1809196e8._0_4_;
          uVar6 = PTR_DAT_1809196e0._4_4_;
          *(undefined4 *)(ppuVar34 + 0xe) = PTR_DAT_1809196e0._0_4_;
          *(undefined4 *)((longlong)ppuVar34 + 0x74) = uVar6;
          *(undefined4 *)(ppuVar34 + 0xf) = uVar7;
          *(undefined4 *)((longlong)ppuVar34 + 0x7c) = uVar8;
          puVar5 = PTR_DAT_1809196f8;
          ppuVar34[0x10] = PTR_DAT_1809196f0;
          ppuVar34[0x11] = puVar5;
          ppuVar34[0x12] = PTR_DAT_180919700;
        }
        else {
          puVar32 = (undefined4 *)_calloc_base(1,4);
          FUN_1805277b0(0);
          if (puVar32 == (undefined4 *)0x0) {
            FUN_1805277b0(ppuVar34);
            goto LAB_1805351b4;
          }
          uVar30 = *(undefined8 *)(param_1 + 0x140);
          iVar9 = FUN_180534cb0(local_38,1,uVar30,0x15,ppuVar34 + 3);
          iVar10 = FUN_180534cb0(local_38,1,uVar30,0x14,ppuVar34 + 4);
          iVar11 = FUN_180534cb0(local_38,1,uVar30,0x16,ppuVar34 + 5);
          iVar12 = FUN_180534cb0(local_38,1,uVar30,0x17,ppuVar34 + 6);
          iVar13 = FUN_180534cb0(local_38,1,uVar30,0x18,ppuVar34 + 7);
          iVar14 = FUN_180534cb0(local_38,1,uVar30,0x50,ppuVar34 + 8);
          iVar15 = FUN_180534cb0(local_38,1,uVar30,0x51,ppuVar34 + 9);
          iVar16 = FUN_180534cb0(local_38,0,uVar30,0x1a,ppuVar34 + 10);
          iVar17 = FUN_180534cb0(local_38,0,uVar30,0x19,(longlong)ppuVar34 + 0x51);
          iVar18 = FUN_180534cb0(local_38,0,uVar30,0x54,(longlong)ppuVar34 + 0x52);
          iVar19 = FUN_180534cb0(local_38,0,uVar30,0x55,(longlong)ppuVar34 + 0x53);
          iVar20 = FUN_180534cb0(local_38,0,uVar30,0x56,(undefined4 *)((longlong)ppuVar34 + 0x54));
          iVar21 = FUN_180534cb0(local_38,0,uVar30,0x57,(longlong)ppuVar34 + 0x55);
          iVar22 = FUN_180534cb0(local_38,0,uVar30,0x52,(longlong)ppuVar34 + 0x56);
          iVar23 = FUN_180534cb0(local_38,0,uVar30,0x53,(longlong)ppuVar34 + 0x57);
          iVar24 = FUN_180534cb0(local_38,2,uVar30,0x15,ppuVar34 + 0xd);
          iVar25 = FUN_180534cb0(local_38,2,uVar30,0x14,ppuVar34 + 0xe);
          iVar26 = FUN_180534cb0(local_38,2,uVar30,0x16,ppuVar34 + 0xf);
          iVar27 = FUN_180534cb0(local_38,2,uVar30,0x17,ppuVar34 + 0x10);
          iVar28 = FUN_180534cb0(local_38,2,uVar30,0x50,ppuVar34 + 0x11);
          iVar29 = FUN_180534cb0(local_38,2,uVar30,0x51,ppuVar34 + 0x12);
          if (iVar29 != 0 ||
              (((((((((((((((((((iVar9 != 0 || iVar10 != 0) || iVar11 != 0) || iVar12 != 0) ||
                             iVar13 != 0) || iVar14 != 0) || iVar15 != 0) || iVar16 != 0) ||
                         iVar17 != 0) || iVar18 != 0) || iVar19 != 0) || iVar20 != 0) || iVar21 != 0
                     ) || iVar22 != 0) || iVar23 != 0) || iVar24 != 0) || iVar25 != 0) ||
                iVar26 != 0) || iVar27 != 0) || iVar28 != 0)) {
            __acrt_locale_free_monetary(ppuVar34);
            FUN_1805277b0(ppuVar34);
            FUN_1805277b0(ppuVar31);
            FUN_1805277b0(puVar32);
            return 1;
          }
          pbVar33 = ppuVar34[7];
          bVar3 = *pbVar33;
          while (bVar3 != 0) {
            if ((byte)(bVar3 - 0x30) < 10) {
              *pbVar33 = bVar3 - 0x30;
LAB_1805354e4:
              pbVar33 = pbVar33 + 1;
            }
            else {
              if (bVar3 != 0x3b) goto LAB_1805354e4;
              pbVar35 = pbVar33;
              do {
                pbVar1 = pbVar35 + 1;
                *pbVar35 = *pbVar1;
                pbVar35 = pbVar35 + 1;
              } while (*pbVar1 != 0);
            }
            bVar3 = *pbVar33;
          }
        }
        plVar2 = (longlong *)(param_1 + 0xf8);
        *ppuVar34 = *(undefined **)*plVar2;
        ppuVar34[1] = *(undefined **)(*plVar2 + 8);
        ppuVar34[2] = *(undefined **)(*plVar2 + 0x10);
        ppuVar34[0xb] = *(undefined **)(*plVar2 + 0x58);
        ppuVar34[0xc] = *(undefined **)(*plVar2 + 0x60);
        *(undefined4 *)ppuVar31 = 1;
        if (puVar32 != (undefined4 *)0x0) {
          *puVar32 = 1;
        }
        goto LAB_1805355c3;
      }
      ppuVar31 = ppuVar34;
LAB_1805351b4:
      FUN_1805277b0(ppuVar31);
    }
    uVar30 = 1;
  }
  return uVar30;
}



/* ===== 180535630 __acrt_locale_free_numeric ===== */

/* Library Function - Single Match
    __acrt_locale_free_numeric
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_locale_free_numeric(longlong *param_1)

{
  if (param_1 != (longlong *)0x0) {
    if ((undefined *)*param_1 != PTR_DAT_180919670) {
      FUN_1805277b0();
    }
    if ((undefined *)param_1[1] != PTR_DAT_180919678) {
      FUN_1805277b0();
    }
    if ((undefined *)param_1[2] != PTR_DAT_180919680) {
      FUN_1805277b0();
    }
    if ((undefined *)param_1[0xb] != PTR_DAT_1809196c8) {
      FUN_1805277b0();
    }
    if ((undefined *)param_1[0xc] != PTR_DAT_1809196d0) {
      FUN_1805277b0();
    }
  }
  return;
}



/* ===== 18053569c FUN_18053569c ===== */

undefined8 FUN_18053569c(longlong param_1)

{
  byte *pbVar1;
  byte bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined **ppuVar14;
  byte *pbVar15;
  undefined **ppuVar16;
  byte *pbVar17;
  undefined4 *puVar18;
  undefined8 uVar19;
  longlong local_38 [2];
  
  local_38[1] = 0;
  local_38[0] = param_1;
  if ((*(longlong *)(param_1 + 0x148) != 0) || (*(longlong *)(param_1 + 0x140) != 0)) {
    uVar19 = 1;
    ppuVar16 = (undefined **)_calloc_base(1,0x98);
    if (ppuVar16 == (undefined **)0x0) goto LAB_180535965;
    puVar3 = *(undefined8 **)(param_1 + 0xf8);
    puVar8 = (undefined *)puVar3[1];
    *ppuVar16 = (undefined *)*puVar3;
    ppuVar16[1] = puVar8;
    puVar8 = (undefined *)puVar3[3];
    ppuVar16[2] = (undefined *)puVar3[2];
    ppuVar16[3] = puVar8;
    puVar8 = (undefined *)puVar3[5];
    ppuVar16[4] = (undefined *)puVar3[4];
    ppuVar16[5] = puVar8;
    puVar8 = (undefined *)puVar3[7];
    ppuVar16[6] = (undefined *)puVar3[6];
    ppuVar16[7] = puVar8;
    puVar8 = (undefined *)puVar3[9];
    ppuVar16[8] = (undefined *)puVar3[8];
    ppuVar16[9] = puVar8;
    puVar8 = (undefined *)puVar3[0xb];
    ppuVar16[10] = (undefined *)puVar3[10];
    ppuVar16[0xb] = puVar8;
    puVar8 = (undefined *)puVar3[0xd];
    ppuVar16[0xc] = (undefined *)puVar3[0xc];
    ppuVar16[0xd] = puVar8;
    uVar5 = *(undefined4 *)((longlong)puVar3 + 0x74);
    uVar6 = *(undefined4 *)(puVar3 + 0xf);
    uVar7 = *(undefined4 *)((longlong)puVar3 + 0x7c);
    *(undefined4 *)(ppuVar16 + 0xe) = *(undefined4 *)(puVar3 + 0xe);
    *(undefined4 *)((longlong)ppuVar16 + 0x74) = uVar5;
    *(undefined4 *)(ppuVar16 + 0xf) = uVar6;
    *(undefined4 *)((longlong)ppuVar16 + 0x7c) = uVar7;
    uVar5 = *(undefined4 *)((longlong)puVar3 + 0x84);
    uVar6 = *(undefined4 *)(puVar3 + 0x11);
    uVar7 = *(undefined4 *)((longlong)puVar3 + 0x8c);
    *(undefined4 *)(ppuVar16 + 0x10) = *(undefined4 *)(puVar3 + 0x10);
    *(undefined4 *)((longlong)ppuVar16 + 0x84) = uVar5;
    *(undefined4 *)(ppuVar16 + 0x11) = uVar6;
    *(undefined4 *)((longlong)ppuVar16 + 0x8c) = uVar7;
    ppuVar16[0x12] = (undefined *)puVar3[0x12];
    ppuVar14 = (undefined **)_malloc_base(4);
    FUN_1805277b0(0);
    if (ppuVar14 == (undefined **)0x0) {
      ppuVar14 = ppuVar16;
    }
    else {
      *(undefined4 *)ppuVar14 = 0;
      if (*(longlong *)(param_1 + 0x148) == 0) {
        *ppuVar16 = PTR_DAT_180919670;
        ppuVar16[1] = PTR_DAT_180919678;
        ppuVar16[2] = PTR_DAT_180919680;
        ppuVar16[0xb] = PTR_DAT_1809196c8;
        ppuVar16[0xc] = PTR_DAT_1809196d0;
        *(undefined4 *)ppuVar14 = 1;
        goto LAB_180535912;
      }
      puVar18 = (undefined4 *)_malloc_base(4);
      FUN_1805277b0(0);
      if (puVar18 == (undefined4 *)0x0) {
        FUN_1805277b0(ppuVar16);
      }
      else {
        *puVar18 = 0;
        uVar19 = *(undefined8 *)(param_1 + 0x148);
        iVar9 = FUN_180534cb0(local_38,1,uVar19,0xe,ppuVar16);
        iVar10 = FUN_180534cb0(local_38,1,uVar19,0xf,ppuVar16 + 1);
        iVar11 = FUN_180534cb0(local_38,1,uVar19,0x10,ppuVar16 + 2);
        iVar12 = FUN_180534cb0(local_38,2,uVar19,0xe,ppuVar16 + 0xb);
        iVar13 = FUN_180534cb0(local_38,2,uVar19,0xf,ppuVar16 + 0xc);
        if (iVar13 == 0 && (((iVar9 == 0 && iVar10 == 0) && iVar11 == 0) && iVar12 == 0)) {
          pbVar15 = ppuVar16[2];
LAB_1805358b2:
          do {
            bVar2 = *pbVar15;
            if (bVar2 == 0) goto code_r0x0001805358b8;
            if ((byte)(bVar2 - 0x30) < 10) {
              *pbVar15 = bVar2 - 0x30;
            }
            else if (bVar2 == 0x3b) {
              pbVar17 = pbVar15;
              do {
                pbVar1 = pbVar17 + 1;
                *pbVar17 = *pbVar1;
                pbVar17 = pbVar17 + 1;
              } while (*pbVar1 != 0);
              goto LAB_1805358b2;
            }
            pbVar15 = pbVar15 + 1;
          } while( true );
        }
        __acrt_locale_free_numeric(ppuVar16);
        FUN_1805277b0(ppuVar16);
        FUN_1805277b0(puVar18);
        uVar19 = 0xffffffff;
      }
    }
    FUN_1805277b0(ppuVar14);
    goto LAB_180535965;
  }
  ppuVar14 = (undefined **)0x0;
  ppuVar16 = &PTR_DAT_180919670;
LAB_180535912:
  puVar18 = (undefined4 *)0x0;
LAB_180535915:
  piVar4 = *(int **)(param_1 + 0xe8);
  if (piVar4 != (int *)0x0) {
    LOCK();
    *piVar4 = *piVar4 + -1;
    UNLOCK();
  }
  piVar4 = *(int **)(param_1 + 0xe0);
  if (piVar4 != (int *)0x0) {
    LOCK();
    iVar9 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar9 == 1) {
      FUN_1805277b0(*(undefined8 *)(param_1 + 0xe0));
      FUN_1805277b0(*(undefined8 *)(param_1 + 0xf8));
    }
  }
  *(undefined4 **)(param_1 + 0xe8) = puVar18;
  uVar19 = 0;
  *(undefined ***)(param_1 + 0xe0) = ppuVar14;
  *(undefined8 *)(param_1 + 0xf8) = ppuVar16;
LAB_180535965:
  return uVar19;
code_r0x0001805358b8:
  *(undefined4 *)ppuVar14 = 1;
  *puVar18 = 1;
  goto LAB_180535915;
}



/* ===== 180535984 FUN_180535984 ===== */

void FUN_180535984(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + param_2;
  for (; param_1 != puVar1; param_1 = param_1 + 1) {
    FUN_1805277b0(*param_1);
  }
  return;
}



/* ===== 1805359b8 initialize_lc_time ===== */

/* Library Function - Single Match
    bool __cdecl initialize_lc_time(struct __crt_lc_time_data * __ptr64 const,struct
   __crt_locale_data * __ptr64 const)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

bool __cdecl initialize_lc_time(__crt_lc_time_data *param_1,__crt_locale_data *param_2)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined8 uVar15;
  uint uVar16;
  __crt_lc_time_data *p_Var17;
  longlong lVar18;
  longlong lVar19;
  ulonglong uVar20;
  int iVar21;
  int iVar22;
  __crt_locale_data *local_38;
  undefined8 local_30;
  
  uVar1 = *(undefined8 *)(param_2 + 0x150);
  uVar16 = 0;
  local_30 = 0;
  local_38 = param_2;
  uVar15 = FUN_180520acc(uVar1);
  *(undefined8 *)(param_1 + 0x2b8) = uVar15;
  iVar21 = 0x31;
  lVar19 = 7;
  do {
    lVar18 = lVar19;
    p_Var17 = param_1 + (ulonglong)((iVar21 - 0x30U) % 7) * 8;
    uVar2 = FUN_180534cb0(&local_38,1,uVar1,iVar21,p_Var17);
    uVar3 = FUN_180534cb0(&local_38,1,uVar1,iVar21 + -7,p_Var17 + 0x38);
    uVar4 = FUN_180534cb0(&local_38,2,uVar1,iVar21,p_Var17 + 0x160);
    uVar5 = FUN_180534cb0(&local_38,2,uVar1,iVar21 + -7,p_Var17 + 0x198);
    uVar16 = uVar16 | uVar2 | uVar3 | uVar4 | uVar5;
    iVar21 = iVar21 + 1;
    lVar19 = lVar18 + -1;
  } while (lVar19 != 0);
  iVar21 = (int)lVar18;
  iVar22 = iVar21 + 0x37;
  uVar20 = (ulonglong)(iVar21 + 0xb);
  p_Var17 = param_1 + 0xd0;
  do {
    uVar2 = FUN_180534cb0(&local_38,1,uVar1,iVar22 + 0xc,p_Var17 + -0x60);
    uVar3 = FUN_180534cb0(&local_38,1,uVar1,iVar22,p_Var17);
    uVar4 = FUN_180534cb0(&local_38,2,uVar1,iVar22 + 0xc,p_Var17 + 0x100);
    uVar5 = FUN_180534cb0(&local_38,2,uVar1,iVar22,p_Var17 + 0x160);
    uVar16 = uVar16 | uVar2 | uVar3 | uVar4 | uVar5;
    p_Var17 = p_Var17 + 8;
    iVar22 = iVar22 + 1;
    uVar20 = uVar20 - 1;
  } while (uVar20 != 0);
  iVar21 = FUN_180534cb0(&local_38,1,uVar1,0x28,param_1 + 0x130);
  iVar22 = FUN_180534cb0(&local_38,1,uVar1,0x29,param_1 + 0x138);
  iVar6 = FUN_180534cb0(&local_38,2,uVar1,0x28,param_1 + 0x290);
  iVar7 = FUN_180534cb0(&local_38,2,uVar1,0x29,param_1 + 0x298);
  iVar8 = FUN_180534cb0(&local_38,1,uVar1,0x1f,param_1 + 0x140);
  iVar9 = FUN_180534cb0(&local_38,1,uVar1,0x20,param_1 + 0x148);
  iVar10 = FUN_180534cb0(&local_38,1,uVar1,0x1003,param_1 + 0x150);
  iVar11 = FUN_180534cb0(&local_38,0,uVar1,0x1009,param_1 + 0x158);
  iVar12 = FUN_180534cb0(&local_38,2,uVar1,0x1f,param_1 + 0x2a0);
  iVar13 = FUN_180534cb0(&local_38,2,uVar1,0x20,param_1 + 0x2a8);
  iVar14 = FUN_180534cb0(&local_38,2,uVar1,0x1003,param_1 + 0x2b0);
  return iVar14 == 0 &&
         ((((((((((uVar16 == 0 && iVar21 == 0) && iVar22 == 0) && iVar6 == 0) && iVar7 == 0) &&
              iVar8 == 0) && iVar9 == 0) && iVar10 == 0) && iVar11 == 0) && iVar12 == 0) &&
         iVar13 == 0);
}



/* ===== 180535cf8 __acrt_locale_free_time ===== */

/* Library Function - Single Match
    __acrt_locale_free_time
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_locale_free_time(longlong param_1)

{
  if (param_1 != 0) {
    FUN_180535984(param_1,7);
    FUN_180535984(param_1 + 0x38,7);
    FUN_180535984(param_1 + 0x70,0xc);
    FUN_180535984(param_1 + 0xd0,0xc);
    FUN_180535984(param_1 + 0x130,2);
    FUN_1805277b0(*(undefined8 *)(param_1 + 0x140));
    FUN_1805277b0(*(undefined8 *)(param_1 + 0x148));
    FUN_1805277b0(*(undefined8 *)(param_1 + 0x150));
    FUN_180535984(param_1 + 0x160,7);
    FUN_180535984(param_1 + 0x198,7);
    FUN_180535984(param_1 + 0x1d0,0xc);
    FUN_180535984(param_1 + 0x230,0xc);
    FUN_180535984(param_1 + 0x290,2);
    FUN_1805277b0(*(undefined8 *)(param_1 + 0x2a0));
    FUN_1805277b0(*(undefined8 *)(param_1 + 0x2a8));
    FUN_1805277b0(*(undefined8 *)(param_1 + 0x2b0));
    FUN_1805277b0(*(undefined8 *)(param_1 + 0x2b8));
  }
  return;
}



/* ===== 180535e00 __acrt_locale_initialize_time ===== */

/* Library Function - Single Match
    __acrt_locale_initialize_time
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined8 __acrt_locale_initialize_time(__crt_locale_data *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  __crt_lc_time_data *p_Var4;
  
  if (*(longlong *)(param_1 + 0x150) == 0) {
    ppuVar3 = &PTR_DAT_18057ce00;
LAB_180535e77:
    __acrt_locale_release_lc_time_reference(*(undefined8 *)(param_1 + 0x120));
    uVar2 = 0;
    *(undefined ***)(param_1 + 0x120) = ppuVar3;
  }
  else {
    ppuVar3 = (undefined **)_calloc_base(1,0x2c0);
    p_Var4 = (__crt_lc_time_data *)0x0;
    if ((__crt_lc_time_data *)ppuVar3 != (__crt_lc_time_data *)0x0) {
      bVar1 = initialize_lc_time((__crt_lc_time_data *)ppuVar3,param_1);
      if (bVar1) {
        *(undefined4 *)((longlong)ppuVar3 + 0x15c) = 1;
        FUN_1805277b0(0);
        goto LAB_180535e77;
      }
      __acrt_locale_free_time(ppuVar3);
      p_Var4 = (__crt_lc_time_data *)ppuVar3;
    }
    FUN_1805277b0(p_Var4);
    uVar2 = 1;
  }
  return uVar2;
}



/* ===== 180535ea0 FUN_180535ea0 ===== */

undefined8 FUN_180535ea0(short *param_1,longlong param_2,longlong param_3)

{
  short sVar1;
  undefined4 *puVar2;
  short *psVar3;
  
  if ((param_1 != (short *)0x0) && (param_2 != 0)) {
    psVar3 = param_1;
    if (param_3 == 0) {
      *param_1 = 0;
    }
    else {
      do {
        if (*psVar3 == 0) {
          param_3 = param_3 - (longlong)psVar3;
          do {
            sVar1 = *(short *)(param_3 + (longlong)psVar3);
            *psVar3 = sVar1;
            psVar3 = psVar3 + 1;
            if (sVar1 == 0) {
              return 0;
            }
            param_2 = param_2 + -1;
          } while (param_2 != 0);
          *param_1 = 0;
          puVar2 = (undefined4 *)FUN_18051bfb0();
          *puVar2 = 0x22;
          FUN_180527740();
          return 0x22;
        }
        psVar3 = psVar3 + 1;
        param_2 = param_2 + -1;
      } while (param_2 != 0);
      *param_1 = 0;
    }
  }
  puVar2 = (undefined4 *)FUN_18051bfb0();
  *puVar2 = 0x16;
  FUN_180527740();
  return 0x16;
}



/* ===== 180535f30 FUN_180535f30 ===== */

undefined8 FUN_180535f30(short *param_1,longlong param_2,longlong param_3)

{
  short sVar1;
  undefined4 *puVar2;
  short *psVar3;
  
  if ((param_1 != (short *)0x0) && (param_2 != 0)) {
    if (param_3 != 0) {
      psVar3 = param_1;
      do {
        sVar1 = *(short *)((param_3 - (longlong)param_1) + (longlong)psVar3);
        *psVar3 = sVar1;
        psVar3 = psVar3 + 1;
        if (sVar1 == 0) {
          return 0;
        }
        param_2 = param_2 + -1;
      } while (param_2 != 0);
      *param_1 = 0;
      puVar2 = (undefined4 *)FUN_18051bfb0();
      *puVar2 = 0x22;
      FUN_180527740();
      return 0x22;
    }
    *param_1 = 0;
  }
  puVar2 = (undefined4 *)FUN_18051bfb0();
  *puVar2 = 0x16;
  FUN_180527740();
  return 0x16;
}



/* ===== 180535fc0 FUN_180535fc0 ===== */

undefined8 FUN_180535fc0(short *param_1,longlong param_2,short *param_3,longlong param_4)

{
  short sVar1;
  undefined4 *puVar2;
  short *psVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (param_4 == 0) {
    if (param_1 == (short *)0x0) {
      if (param_2 == 0) {
        return 0;
      }
      goto LAB_18053600b;
    }
  }
  else if (param_1 == (short *)0x0) goto LAB_18053600b;
  if (param_2 != 0) {
    psVar3 = param_1;
    lVar4 = param_2;
    if ((param_4 == 0) || (param_3 != (short *)0x0)) {
      do {
        if (*psVar3 == 0) {
          lVar5 = param_4;
          if (param_4 != -1) goto joined_r0x00018053607c;
          lVar5 = (longlong)param_3 - (longlong)psVar3;
          goto LAB_180536060;
        }
        lVar4 = lVar4 + -1;
        psVar3 = psVar3 + 1;
      } while (lVar4 != 0);
      *param_1 = 0;
    }
    else {
      *param_1 = 0;
    }
  }
LAB_18053600b:
  puVar2 = (undefined4 *)FUN_18051bfb0();
  *puVar2 = 0x16;
  FUN_180527740();
  return 0x16;
joined_r0x00018053607c:
  if (lVar5 == 0) goto LAB_1805360a4;
  sVar1 = *param_3;
  param_3 = param_3 + 1;
  *psVar3 = sVar1;
  psVar3 = psVar3 + 1;
  if (sVar1 == 0) {
    return 0;
  }
  lVar4 = lVar4 + -1;
  if (lVar4 == 0) goto LAB_1805360a4;
  lVar5 = lVar5 + -1;
  goto joined_r0x00018053607c;
LAB_1805360a4:
  if (lVar5 == 0) {
    *psVar3 = 0;
  }
  goto LAB_1805360ad;
  while (lVar4 = lVar4 + -1, lVar4 != 0) {
LAB_180536060:
    sVar1 = *(short *)(lVar5 + (longlong)psVar3);
    *psVar3 = sVar1;
    psVar3 = psVar3 + 1;
    if (sVar1 == 0) break;
  }
LAB_1805360ad:
  if (lVar4 != 0) {
    return 0;
  }
  if (param_4 == -1) {
    param_1[param_2 + -1] = 0;
    return 0x50;
  }
  *param_1 = 0;
  puVar2 = (undefined4 *)FUN_18051bfb0();
  *puVar2 = 0x22;
  FUN_180527740();
  return 0x22;
}



/* ===== 180536100 FUN_180536100 ===== */

longlong FUN_180536100(short *param_1,undefined8 param_2)

{
  short sVar1;
  longlong lVar2;
  short *psVar3;
  
  sVar1 = *param_1;
  psVar3 = param_1;
  while ((sVar1 != 0 && (lVar2 = FUN_18053e950(param_2,sVar1), lVar2 == 0))) {
    sVar1 = psVar3[1];
    psVar3 = psVar3 + 1;
  }
  return (longlong)psVar3 - (longlong)param_1 >> 1;
}



/* ===== 180536160 wcsncmp ===== */

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



/* ===== 180536194 __acrt_add_locale_ref ===== */

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
    if (((undefined *)puVar2[-2] != &DAT_1809198c8) &&
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
  __acrt_locale_add_lc_time_reference(*(undefined8 *)(param_1 + 0x120));
  return;
}



/* ===== 180536220 __acrt_free_locale ===== */

/* Library Function - Single Match
    __acrt_free_locale
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_free_locale(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if ((((*(undefined ***)(param_1 + 0xf8) != (undefined **)0x0) &&
       (*(undefined ***)(param_1 + 0xf8) != &PTR_DAT_180919670)) &&
      (*(int **)(param_1 + 0xe0) != (int *)0x0)) && (**(int **)(param_1 + 0xe0) == 0)) {
    if ((*(int **)(param_1 + 0xf0) != (int *)0x0) && (**(int **)(param_1 + 0xf0) == 0)) {
      FUN_1805277b0();
      __acrt_locale_free_monetary(*(undefined8 *)(param_1 + 0xf8));
    }
    if ((*(int **)(param_1 + 0xe8) != (int *)0x0) && (**(int **)(param_1 + 0xe8) == 0)) {
      FUN_1805277b0();
      __acrt_locale_free_numeric(*(undefined8 *)(param_1 + 0xf8));
    }
    FUN_1805277b0(*(undefined8 *)(param_1 + 0xe0));
    FUN_1805277b0(*(undefined8 *)(param_1 + 0xf8));
  }
  if ((*(int **)(param_1 + 0x100) != (int *)0x0) && (**(int **)(param_1 + 0x100) == 0)) {
    FUN_1805277b0(*(longlong *)(param_1 + 0x108) + -0xfe);
    FUN_1805277b0(*(longlong *)(param_1 + 0x110) + -0x80);
    FUN_1805277b0(*(longlong *)(param_1 + 0x118) + -0x80);
    FUN_1805277b0(*(undefined8 *)(param_1 + 0x100));
  }
  __acrt_locale_free_lc_time_if_unreferenced(*(undefined8 *)(param_1 + 0x120));
  puVar2 = (undefined8 *)(param_1 + 0x128);
  lVar1 = 6;
  puVar3 = (undefined8 *)(param_1 + 0x38);
  do {
    if ((((undefined *)puVar3[-2] != &DAT_1809198c8) && ((int *)*puVar3 != (int *)0x0)) &&
       (*(int *)*puVar3 == 0)) {
      FUN_1805277b0();
      FUN_1805277b0(*puVar2);
    }
    if (((puVar3[-3] != 0) && ((int *)puVar3[-1] != (int *)0x0)) && (*(int *)puVar3[-1] == 0)) {
      FUN_1805277b0();
    }
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 4;
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  FUN_1805277b0(param_1);
  return;
}



/* ===== 180536398 __acrt_locale_add_lc_time_reference ===== */

/* Library Function - Single Match
    __acrt_locale_add_lc_time_reference
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

int __acrt_locale_add_lc_time_reference(undefined **param_1)

{
  int *piVar1;
  int iVar2;
  
  if ((param_1 == (undefined **)0x0) || (param_1 == &PTR_DAT_18057ce00)) {
    return 0x7fffffff;
  }
  LOCK();
  piVar1 = (int *)((longlong)param_1 + 0x15c);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return iVar2 + 1;
}



/* ===== 1805363c0 __acrt_locale_free_lc_time_if_unreferenced ===== */

/* Library Function - Single Match
    __acrt_locale_free_lc_time_if_unreferenced
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_locale_free_lc_time_if_unreferenced(undefined **param_1)

{
  if (((param_1 != (undefined **)0x0) && (param_1 != &PTR_DAT_18057ce00)) &&
     (*(int *)((longlong)param_1 + 0x15c) == 0)) {
    __acrt_locale_free_time();
    FUN_1805277b0(param_1);
  }
  return;
}



/* ===== 1805363f8 __acrt_locale_release_lc_time_reference ===== */

/* Library Function - Single Match
    __acrt_locale_release_lc_time_reference
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int __acrt_locale_release_lc_time_reference(undefined **param_1)

{
  int *piVar1;
  int iVar2;
  
  if ((param_1 == (undefined **)0x0) || (param_1 == &PTR_DAT_18057ce00)) {
    return 0x7fffffff;
  }
  LOCK();
  piVar1 = (int *)((longlong)param_1 + 0x15c);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  return iVar2 + -1;
}



/* ===== 180536420 __acrt_release_locale_ref ===== */

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
      if (((undefined *)puVar2[-2] != &DAT_1809198c8) &&
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
    __acrt_locale_release_lc_time_reference(*(undefined8 *)(param_1 + 0x120));
  }
  return;
}



/* ===== 1805364c8 __acrt_update_thread_locale_data ===== */

/* Library Function - Single Match
    __acrt_update_thread_locale_data
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

longlong __acrt_update_thread_locale_data(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_180529860();
  if (((DAT_18091a130 & *(uint *)(lVar1 + 0x3a8)) == 0) ||
     (lVar2 = *(longlong *)(lVar1 + 0x90), lVar2 == 0)) {
    __acrt_lock(4);
    lVar2 = _updatetlocinfoEx_nolock((longlong *)(lVar1 + 0x90),DAT_180c9f988);
    __acrt_unlock(4);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
  return lVar2;
}



/* ===== 180536538 _updatetlocinfoEx_nolock ===== */

/* Library Function - Single Match
    _updatetlocinfoEx_nolock
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined ** _updatetlocinfoEx_nolock(longlong *param_1,undefined **param_2)

{
  undefined **ppuVar1;
  
  if ((param_2 == (undefined **)0x0) || (param_1 == (longlong *)0x0)) {
    param_2 = (undefined **)0x0;
  }
  else {
    ppuVar1 = (undefined **)*param_1;
    if (ppuVar1 != param_2) {
      *param_1 = (longlong)param_2;
      __acrt_add_locale_ref(param_2);
      if (((ppuVar1 != (undefined **)0x0) &&
          (__acrt_release_locale_ref(ppuVar1), *(int *)(ppuVar1 + 2) == 0)) &&
         (ppuVar1 != &PTR_DAT_180919760)) {
        __acrt_free_locale(ppuVar1);
      }
    }
  }
  return param_2;
}



/* ===== 1805365a0 FUN_1805365a0 ===== */

void FUN_1805365a0(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,undefined4 *param_4)

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
  if (DAT_180c9ff78 == (undefined8 *)0x0) {
LAB_180536653:
    puVar8 = (undefined4 *)FUN_18051bfb0();
    *puVar8 = 0x16;
    FUN_180527740();
  }
  else {
    if (puVar7 == (undefined8 *)0x0) {
      FUN_180540170(DAT_180c9ff78,0,0x101);
      goto LAB_180536653;
    }
    lVar11 = 2;
    puVar10 = DAT_180c9ff78;
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
  if (DAT_180c9ff80 != (undefined8 *)0x0) {
    puVar10 = DAT_180c9ff80;
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
      goto LAB_180536704;
    }
    FUN_180540170(DAT_180c9ff80,0,0x100);
  }
  puVar8 = (undefined4 *)FUN_18051bfb0();
  *puVar8 = 0x16;
  FUN_180527740();
LAB_180536704:
  piVar2 = (int *)**(undefined8 **)param_3[1];
  LOCK();
  iVar1 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if ((iVar1 == 1) && ((undefined *)**(undefined8 **)param_3[1] != &DAT_180919bf0)) {
    FUN_1805277b0(**(undefined8 **)param_3[1]);
  }
  **(undefined8 **)param_3[1] = *(undefined8 *)(*(longlong *)*param_3 + 0x88);
  LOCK();
  **(int **)(*(longlong *)*param_3 + 0x88) = **(int **)(*(longlong *)*param_3 + 0x88) + 1;
  UNLOCK();
  __acrt_unlock(*param_4);
  return;
}



/* ===== 180536770 getSystemCP ===== */

/* Library Function - Single Match
    int __cdecl getSystemCP(int)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl getSystemCP(int param_1)

{
  longlong local_28;
  longlong local_20;
  char local_10;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_28,(__crt_locale_pointers *)0x0);
  DAT_180c9ff90 = 0;
  if (param_1 == -2) {
    DAT_180c9ff90 = 1;
    param_1 = GetOEMCP();
  }
  else if (param_1 == -3) {
    DAT_180c9ff90 = 1;
    param_1 = GetACP();
  }
  else if (param_1 == -4) {
    DAT_180c9ff90 = 1;
    param_1 = *(UINT *)(local_20 + 0xc);
  }
  if (local_10 != '\0') {
    *(uint *)(local_28 + 0x3a8) = *(uint *)(local_28 + 0x3a8) & 0xfffffffd;
  }
  return param_1;
}



/* ===== 1805367f0 FUN_1805367f0 ===== */

void FUN_1805367f0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined2 *puVar3;
  longlong lVar4;
  
  FUN_180540170(param_1 + 0x18,0,0x101);
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
    *(undefined1 *)(param_1 + lVar1 + 0x18) = (&DAT_180919c08)[lVar1];
    lVar1 = lVar4;
  } while (lVar4 < 0x101);
  do {
    lVar1 = lVar2 + 1;
    *(undefined1 *)(param_1 + lVar2 + 0x119) = (&DAT_180919d09)[lVar2];
    lVar2 = lVar1;
  } while (lVar1 < 0x100);
  return;
}



/* ===== 180536888 FUN_180536888 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180536888(longlong param_1)

{
  byte bVar1;
  byte bVar2;
  BOOL BVar3;
  uint uVar4;
  byte *pbVar5;
  undefined1 *puVar6;
  ulonglong uVar7;
  BYTE *pBVar8;
  byte *pbVar9;
  longlong lVar10;
  undefined1 auStack_788 [32];
  byte *local_768;
  undefined1 *local_760;
  undefined4 local_758;
  undefined4 local_750;
  undefined4 local_748;
  _cpinfo local_738;
  undefined1 local_718 [231];
  byte abStack_631 [25];
  undefined1 local_618 [231];
  byte abStack_531 [25];
  undefined1 local_518 [256];
  byte local_418 [1024];
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_788;
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
    puVar6 = local_718;
    lVar10 = 0x100;
    do {
      *puVar6 = (char)uVar4;
      uVar4 = uVar4 + 1;
      puVar6 = puVar6 + 1;
    } while (uVar4 < 0x100);
    pBVar8 = local_738.LeadByte;
    local_718[0] = 0x20;
    bVar2 = local_738.LeadByte[0];
    while (bVar2 != 0) {
      bVar1 = pBVar8[1];
      uVar7 = (ulonglong)bVar2;
      while ((uVar4 = (uint)uVar7, uVar4 <= bVar1 && (uVar4 < 0x100))) {
        local_718[uVar7] = 0x20;
        uVar7 = (ulonglong)(uVar4 + 1);
      }
      pBVar8 = pBVar8 + 2;
      bVar2 = *pBVar8;
    }
    local_758 = 0;
    local_760 = (undefined1 *)CONCAT44(local_760._4_4_,*(undefined4 *)(param_1 + 4));
    local_768 = local_418;
    FUN_180534e78(0,1,local_718,0x100);
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
    pbVar9 = local_418;
    pbVar5 = (byte *)(param_1 + 0x19);
    do {
      if ((*pbVar9 & 1) == 0) {
        if ((*pbVar9 & 2) == 0) {
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
      pbVar9 = pbVar9 + 2;
      pbVar5 = pbVar5 + 1;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  return;
}



/* ===== 180536a80 FUN_180536a80 ===== */

int FUN_180536a80(int param_1,char param_2,__acrt_ptd *param_3,__crt_multibyte_data **param_4)

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
      FUN_1805277b0(0);
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
      iVar16 = FUN_180536e24(iVar16,puVar17);
      if (iVar16 == -1) {
        puVar19 = (undefined4 *)FUN_18051bfb0();
        *puVar19 = 0x16;
        FUN_1805277b0(puVar17);
        iVar16 = -1;
      }
      else {
        if (param_2 == '\0') {
          FUN_180520b50();
        }
        piVar3 = *(int **)(local_res18 + 0x88);
        LOCK();
        iVar1 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if ((iVar1 == 1) && (*(undefined **)(local_res18 + 0x88) != &DAT_180919bf0)) {
          FUN_1805277b0();
        }
        *(undefined4 *)puVar17 = 1;
        *(undefined8 **)(local_res18 + 0x88) = puVar17;
        if ((DAT_18091a130 & *(uint *)(local_res18 + 0x3a8)) == 0) {
          local_258 = &local_res18;
          local_250 = &local_res20;
          local_264 = 5;
          local_260[0] = 5;
          FUN_1805365a0(local_268,local_260,&local_258,&local_264);
          if (param_2 != '\0') {
            PTR_DAT_1809198c0 = *local_res20;
          }
        }
        FUN_1805277b0(0);
      }
    }
  }
  return iVar16;
}



/* ===== 180536cf0 update_thread_multibyte_data_internal ===== */

/* Library Function - Single Match
    struct __crt_multibyte_data * __ptr64 __cdecl update_thread_multibyte_data_internal(struct
   __acrt_ptd * __ptr64 const,struct __crt_multibyte_data * __ptr64 * __ptr64 const)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

__crt_multibyte_data * __cdecl
update_thread_multibyte_data_internal(__acrt_ptd *param_1,__crt_multibyte_data **param_2)

{
  int iVar1;
  __crt_multibyte_data *p_Var2;
  
  if (((*(uint *)(param_1 + 0x3a8) & DAT_18091a130) == 0) || (*(longlong *)(param_1 + 0x90) == 0)) {
    __acrt_lock(5);
    p_Var2 = *(__crt_multibyte_data **)(param_1 + 0x88);
    if (p_Var2 != *param_2) {
      if (p_Var2 != (__crt_multibyte_data *)0x0) {
        LOCK();
        iVar1 = *(int *)p_Var2;
        *(int *)p_Var2 = *(int *)p_Var2 + -1;
        UNLOCK();
        if ((iVar1 == 1) && (p_Var2 != (__crt_multibyte_data *)&DAT_180919bf0)) {
          FUN_1805277b0();
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



/* ===== 180536da8 __acrt_initialize_multibyte ===== */

/* Library Function - Single Match
    __acrt_initialize_multibyte
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined8 __acrt_initialize_multibyte(void)

{
  undefined8 uVar1;
  
  if (DAT_180c9ff94 == '\0') {
    DAT_180c9ff80 = &DAT_180919f30;
    DAT_180c9ff88 = &DAT_180919bf0;
    DAT_180c9ff78 = &DAT_180919e20;
    uVar1 = FUN_18052987c();
    FUN_180536a80(0xfffffffd,1,uVar1,&DAT_180c9ff88);
    DAT_180c9ff94 = '\x01';
  }
  return 1;
}



/* ===== 180536e08 FUN_180536e08 ===== */

void FUN_180536e08(void)

{
  __acrt_ptd *p_Var1;
  
  p_Var1 = (__acrt_ptd *)FUN_180529860();
  update_thread_multibyte_data_internal(p_Var1,(__crt_multibyte_data **)&DAT_180c9ff88);
  return;
}



/* ===== 180536e24 FUN_180536e24 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180536e24(int param_1,longlong param_2)

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
  
  local_30 = DAT_180919500 ^ (ulonglong)auStack_68;
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
LAB_1805370bc:
    FUN_1805367f0(param_2);
    return 0;
  }
  uVar17 = 0;
  puVar6 = &DAT_18091a040;
  uVar14 = 1;
  do {
    if (*puVar6 == uVar4) {
      FUN_180540170(param_2 + 0x18,0,0x101);
      pbVar18 = &DAT_18091a030;
      lVar9 = 4;
      pbVar7 = &DAT_18091a050 + (ulonglong)uVar17 * 0x30;
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
        puVar8 = PTR_u_ja_JP_1805860e0;
      }
      else if (uVar4 == 0x3a8) {
        puVar8 = PTR_u_zh_CN_1805860e8;
      }
      else if (uVar4 == 0x3b5) {
        puVar8 = PTR_u_ko_KR_1805860f0;
      }
      else {
        puVar8 = (undefined *)0x0;
        if (uVar4 == 0x3b6) {
          puVar8 = PTR_u_zh_TW_1805860f8;
        }
      }
      *(undefined **)(param_2 + 0x220) = puVar8;
      puVar13 = (undefined2 *)(param_2 + 0xc);
      lVar9 = 6;
      do {
        *puVar13 = *(undefined2 *)
                    (((ulonglong)uVar17 * 0x30 - param_2) + 0x18091a038 + (longlong)puVar13);
        puVar13 = puVar13 + 1;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
      goto LAB_1805370b2;
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
      if (DAT_180c9ff90 == 0) {
        return 0xffffffff;
      }
      goto LAB_1805370bc;
    }
    FUN_180540170(param_2 + 0x18,0,0x101);
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
        puVar8 = PTR_u_ja_JP_1805860e0;
      }
      else if (iVar3 == 0x3a8) {
        puVar8 = PTR_u_zh_CN_1805860e8;
      }
      else if (iVar3 == 0x3b5) {
        puVar8 = PTR_u_ko_KR_1805860f0;
      }
      else if (iVar3 == 0x3b6) {
        puVar8 = PTR_u_zh_TW_1805860f8;
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
LAB_1805370b2:
  FUN_180536888(param_2);
  return 0;
}



/* ===== 1805370ec FUN_1805370ec ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1805370ec(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStackY_f8 [32];
  short local_c8 [88];
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStackY_f8;
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x104;
  iVar1 = FUN_18052ca30(local_c8,0x55);
  if (1 < iVar1) {
    lVar2 = -1;
    do {
      lVar2 = lVar2 + 1;
    } while (local_c8[lVar2] != 0);
    iVar1 = FUN_180515c10();
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
  }
  return;
}



/* ===== 180537194 GetLocaleNameFromLangCountry ===== */

/* Library Function - Single Match
    GetLocaleNameFromLangCountry
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void GetLocaleNameFromLangCountry(undefined8 *param_1)

{
  short sVar1;
  uint uVar2;
  longlong lVar3;
  short *psVar4;
  longlong lVar5;
  int iVar6;
  
  psVar4 = (short *)*param_1;
  lVar5 = -1;
  lVar3 = -1;
  do {
    lVar3 = lVar3 + 1;
  } while (psVar4[lVar3] != 0);
  *(uint *)(param_1 + 3) = (uint)(lVar3 == 3);
  do {
    lVar5 = lVar5 + 1;
  } while (*(short *)(param_1[1] + lVar5 * 2) != 0);
  *(uint *)((longlong)param_1 + 0x1c) = (uint)(lVar5 == 3);
  if (lVar3 == 3) {
    iVar6 = 2;
  }
  else {
    iVar6 = 0;
    if (psVar4 == (short *)0x0) {
      iVar6 = 0;
    }
    else {
      while( true ) {
        sVar1 = *psVar4;
        psVar4 = psVar4 + 1;
        if ((0x19 < (ushort)(sVar1 - 0x41U)) && (0x19 < (ushort)(sVar1 - 0x61U))) break;
        iVar6 = iVar6 + 1;
      }
    }
  }
  *(int *)((longlong)param_1 + 0x14) = iVar6;
  FUN_18052c74c(FUN_1805372fc,3,0);
  uVar2 = *(uint *)(param_1 + 2);
  if ((uVar2 >> 8 & 1) == 0 || ((uVar2 & 7) == 0 || (uVar2 >> 9 & 1) == 0)) {
    *(undefined4 *)(param_1 + 2) = 0;
  }
  return;
}



/* ===== 180537264 GetLocaleNameFromLanguage ===== */

/* Library Function - Single Match
    GetLocaleNameFromLanguage
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void GetLocaleNameFromLanguage(undefined8 *param_1)

{
  short sVar1;
  short *psVar2;
  longlong lVar3;
  int iVar4;
  
  psVar2 = (short *)*param_1;
  lVar3 = -1;
  do {
    lVar3 = lVar3 + 1;
  } while (psVar2[lVar3] != 0);
  *(uint *)(param_1 + 3) = (uint)(lVar3 == 3);
  if (lVar3 == 3) {
    iVar4 = 2;
  }
  else {
    iVar4 = 0;
    if (psVar2 == (short *)0x0) {
      iVar4 = 0;
    }
    else {
      while( true ) {
        sVar1 = *psVar2;
        psVar2 = psVar2 + 1;
        if ((0x19 < (ushort)(sVar1 - 0x41U)) && (0x19 < (ushort)(sVar1 - 0x61U))) break;
        iVar4 = iVar4 + 1;
      }
    }
  }
  *(int *)((longlong)param_1 + 0x14) = iVar4;
  FUN_18052c74c(FUN_1805375f0,3,0);
  if ((*(byte *)(param_1 + 2) & 4) == 0) {
    *(undefined4 *)(param_1 + 2) = 0;
  }
  return;
}



/* ===== 1805372fc FUN_1805372fc ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint FUN_1805372fc(longlong param_1)

{
  longlong *plVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  short *psVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStackY_c8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStackY_c8;
  lVar5 = FUN_180529860();
  plVar1 = (longlong *)(lVar5 + 0x98);
  iVar3 = FUN_18052c8e4(param_1,(-(uint)(*(int *)(lVar5 + 0xb4) != 0) & 0xfffff005) + 0x1002,
                        local_98,0x40);
  if (iVar3 == 0) {
LAB_180537362:
    *(undefined4 *)(lVar5 + 0xa8) = 0;
    uVar4 = 1;
  }
  else {
    iVar3 = FUN_18052f5e0(*(undefined8 *)(lVar5 + 0xa0),local_98);
    lVar7 = -1;
    if (iVar3 != 0) goto LAB_180537456;
    iVar3 = FUN_18052c8e4(param_1,(-(uint)(*(int *)(lVar5 + 0xb0) != 0) & 0xfffff002) + 0x1001,
                          local_98,0x40);
    if (iVar3 == 0) goto LAB_180537362;
    iVar3 = FUN_18052f5e0(*plVar1,local_98);
    if (iVar3 == 0) {
      lVar8 = -1;
      *(uint *)(lVar5 + 0xa8) = *(uint *)(lVar5 + 0xa8) | 0x304;
      do {
        lVar8 = lVar8 + 1;
      } while (*(short *)(param_1 + lVar8 * 2) != 0);
LAB_180537437:
      iVar3 = FUN_180515c10();
      if (iVar3 != 0) goto LAB_1805375d9;
    }
    else if ((*(uint *)(lVar5 + 0xa8) & 2) == 0) {
      if ((*(int *)(lVar5 + 0xac) == 0) ||
         (iVar3 = FUN_18053bf20(*plVar1,local_98,(longlong)*(int *)(lVar5 + 0xac)), iVar3 != 0)) {
        if (((*(byte *)(lVar5 + 0xa8) & 1) != 0) || (iVar3 = FUN_18053779c(param_1), iVar3 == 0))
        goto LAB_180537456;
        *(uint *)(lVar5 + 0xa8) = *(uint *)(lVar5 + 0xa8) | 1;
        lVar8 = -1;
        do {
          lVar8 = lVar8 + 1;
        } while (*(short *)(param_1 + lVar8 * 2) != 0);
      }
      else {
        *(uint *)(lVar5 + 0xa8) = *(uint *)(lVar5 + 0xa8) | 2;
        lVar8 = -1;
        do {
          lVar8 = lVar8 + 1;
        } while (*(short *)(param_1 + lVar8 * 2) != 0);
      }
      goto LAB_180537437;
    }
LAB_180537456:
    if ((*(uint *)(lVar5 + 0xa8) & 0x300) != 0x300) {
      iVar3 = FUN_18052c8e4(param_1,(-(uint)(*(int *)(lVar5 + 0xb0) != 0) & 0xfffff002) + 0x1001,
                            local_98,0x40);
      if (iVar3 == 0) goto LAB_180537362;
      iVar3 = FUN_18052f5e0(*plVar1,local_98);
      if (iVar3 == 0) {
        uVar4 = *(uint *)(lVar5 + 0xa8);
        *(uint *)(lVar5 + 0xa8) = uVar4 | 0x200;
        if (*(int *)(lVar5 + 0xb0) == 0) {
          if (*(int *)(lVar5 + 0xac) != 0) {
            lVar8 = -1;
            do {
              lVar8 = lVar8 + 1;
            } while (*(short *)(*plVar1 + lVar8 * 2) != 0);
            if ((int)lVar8 == *(int *)(lVar5 + 0xac)) {
              iVar3 = FUN_18053779c(param_1);
              if (iVar3 == 0) {
                psVar6 = (short *)*plVar1;
                iVar3 = 0;
                if (psVar6 != (short *)0x0) {
                  while( true ) {
                    sVar2 = *psVar6;
                    psVar6 = psVar6 + 1;
                    if ((0x19 < (ushort)(sVar2 - 0x41U)) && (0x19 < (ushort)(sVar2 - 0x61U))) break;
                    iVar3 = iVar3 + 1;
                  }
                }
                lVar8 = -1;
                do {
                  lVar8 = lVar8 + 1;
                } while (*(short *)(*plVar1 + lVar8 * 2) != 0);
                if (iVar3 == (int)lVar8) goto LAB_180537583;
              }
              *(uint *)(lVar5 + 0xa8) = *(uint *)(lVar5 + 0xa8) | 0x100;
              if (*(short *)(lVar5 + 0x2f0) == 0) {
                do {
                  lVar7 = lVar7 + 1;
                } while (*(short *)(param_1 + lVar7 * 2) != 0);
                goto LAB_18053756e;
              }
              goto LAB_180537583;
            }
          }
          *(uint *)(lVar5 + 0xa8) = uVar4 | 0x300;
          if (*(short *)(lVar5 + 0x2f0) == 0) {
            do {
              lVar7 = lVar7 + 1;
            } while (*(short *)(param_1 + lVar7 * 2) != 0);
            goto LAB_18053756e;
          }
        }
        else {
          *(uint *)(lVar5 + 0xa8) = uVar4 | 0x300;
          if (*(short *)(lVar5 + 0x2f0) == 0) {
            do {
              lVar7 = lVar7 + 1;
            } while (*(short *)(param_1 + lVar7 * 2) != 0);
LAB_18053756e:
            iVar3 = FUN_180515c10();
            if (iVar3 != 0) {
LAB_1805375d9:
                    /* WARNING: Subroutine does not return */
              _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
            }
          }
        }
      }
    }
LAB_180537583:
    uVar4 = ~(*(uint *)(lVar5 + 0xa8) >> 2) & 1;
  }
  return uVar4;
}



/* ===== 1805375f0 FUN_1805375f0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint FUN_1805375f0(longlong param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStackY_138 [32];
  undefined1 local_108 [240];
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStackY_138;
  lVar3 = FUN_180529860();
  iVar1 = FUN_18052c8e4(param_1,(-(uint)(*(int *)(lVar3 + 0xb0) != 0) & 0xfffff002) + 0x1001,
                        local_108);
  if (iVar1 == 0) {
    *(undefined4 *)(lVar3 + 0xa8) = 0;
    uVar2 = 1;
  }
  else {
    iVar1 = FUN_18052f5e0(*(undefined8 *)(lVar3 + 0x98),local_108);
    if (iVar1 == 0) {
      lVar4 = -1;
      do {
        lVar4 = lVar4 + 1;
      } while (*(short *)(param_1 + lVar4 * 2) != 0);
      iVar1 = FUN_180515c10();
      if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      *(uint *)(lVar3 + 0xa8) = *(uint *)(lVar3 + 0xa8) | 4;
    }
    uVar2 = ~(*(uint *)(lVar3 + 0xa8) >> 2) & 1;
  }
  return uVar2;
}



/* ===== 1805376dc FUN_1805376dc ===== */

ulonglong FUN_1805376dc(short *param_1,longlong param_2)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  uint local_res8 [2];
  
  local_res8[0] = 0;
  if (((param_1 == (short *)0x0) || (*param_1 == 0)) ||
     (iVar1 = FUN_18053d350(param_1,&DAT_1805870f8), iVar1 == 0)) {
    uVar3 = 0x20001004;
  }
  else {
    iVar1 = FUN_18052f5e0(param_1,L"utf8");
    if (iVar1 == 0) {
      return 0xfde9;
    }
    iVar1 = FUN_18052f5e0(param_1,L"utf-8");
    if (iVar1 == 0) {
      return 0xfde9;
    }
    iVar1 = FUN_18053d350(param_1,&DAT_180587110);
    if (iVar1 != 0) {
      uVar2 = FUN_180514534(param_1);
      return uVar2;
    }
    uVar3 = 0x2000000b;
  }
  uVar2 = FUN_18052c8e4(param_2 + 600,uVar3,local_res8,2);
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  if ((int)local_res8[0] < 3) {
    return 0xfde9;
  }
  return (ulonglong)local_res8[0];
}



/* ===== 18053779c FUN_18053779c ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool FUN_18053779c(wchar_t *param_1)

{
  int iVar1;
  bool bVar2;
  undefined1 auStack_48 [32];
  wchar_t local_28 [12];
  ulonglong local_10;
  
  local_10 = DAT_180919500 ^ (ulonglong)auStack_48;
  iVar1 = FUN_18052c8e4(param_1,0x59,local_28);
  if (iVar1 == 0) {
    bVar2 = false;
  }
  else {
    iVar1 = wcsncmp(local_28,param_1,9);
    bVar2 = iVar1 == 0;
  }
  return bVar2;
}



/* ===== 180537808 TranslateName ===== */

/* Library Function - Single Match
    TranslateName
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

bool TranslateName(longlong param_1,int param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 1;
  iVar3 = 0;
  iVar1 = 1;
  if (-1 < param_2) {
    do {
      if (iVar1 == 0) {
        return true;
      }
      iVar1 = (iVar3 + param_2) / 2;
      iVar2 = FUN_18052f5e0(*param_3,*(undefined8 *)((longlong)iVar1 * 0x10 + param_1));
      if (iVar2 == 0) {
        *param_3 = param_1 + 8 + (longlong)iVar1 * 0x10;
      }
      else if (iVar2 < 0) {
        param_2 = iVar1 + -1;
      }
      else {
        iVar3 = iVar1 + 1;
      }
      iVar1 = iVar2;
    } while (iVar3 <= param_2);
  }
  return iVar2 == 0;
}



/* ===== 1805378a4 FUN_1805378a4 ===== */

undefined8 FUN_1805378a4(short *param_1,uint *param_2,longlong param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined2 *puVar3;
  int iVar4;
  uint _Val;
  BOOL BVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar6 = FUN_180529860();
  puVar1 = (undefined8 *)(lVar6 + 0x98);
  *(undefined4 *)(lVar6 + 0xa8) = 0;
  *puVar1 = param_1;
  plVar2 = (longlong *)(lVar6 + 0xa0);
  *(undefined2 *)(lVar6 + 0x2f0) = 0;
  *plVar2 = (longlong)(param_1 + 0x40);
  if (param_1[0x40] != 0) {
    TranslateName(&PTR_u_america_180586560,0x16,plVar2);
  }
  if (*(short *)*puVar1 == 0) {
    FUN_1805370ec(puVar1);
LAB_18053797c:
    if (*(int *)(lVar6 + 0xa8) == 0) {
      return 0;
    }
  }
  else {
    if (*(short *)*plVar2 == 0) {
      GetLocaleNameFromLanguage();
    }
    else {
      GetLocaleNameFromLangCountry();
    }
    if (*(int *)(lVar6 + 0xa8) == 0) {
      iVar4 = TranslateName(&PTR_u_american_180586140,0x40,puVar1);
      if (iVar4 != 0) {
        if (*(short *)*plVar2 == 0) {
          GetLocaleNameFromLanguage(puVar1);
        }
        else {
          GetLocaleNameFromLangCountry();
        }
      }
      goto LAB_18053797c;
    }
  }
  if (((param_1 == (short *)0x0) || (*param_1 != 0)) || (param_1[0x80] != 0)) {
    _Val = FUN_1805376dc(-(ulonglong)(param_1 != (short *)0x0) & (ulonglong)(param_1 + 0x80),puVar1)
    ;
  }
  else {
    _Val = GetACP();
  }
  if (((_Val != 0) && (_Val != 65000)) && (BVar5 = IsValidCodePage(_Val & 0xffff), BVar5 != 0)) {
    if (param_2 != (uint *)0x0) {
      *param_2 = _Val;
    }
    if (param_3 == 0) {
      return 1;
    }
    puVar3 = (undefined2 *)(param_3 + 0x120);
    lVar7 = -1;
    *puVar3 = 0;
    do {
      lVar7 = lVar7 + 1;
    } while (((undefined2 *)(lVar6 + 0x2f0))[lVar7] != 0);
    iVar4 = FUN_180515c10();
    if (iVar4 != 0) {
LAB_180537b08:
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    iVar4 = FUN_18052c8e4(puVar3,0x1001,param_3,0x40);
    if (iVar4 != 0) {
      lVar6 = param_3 + 0x80;
      iVar4 = FUN_18052c8e4(puVar3,0x1002,lVar6,0x40);
      if ((iVar4 != 0) &&
         (((lVar7 = FUN_18053e950(lVar6,0x5f), lVar7 == 0 &&
           (lVar7 = FUN_18053e950(lVar6,0x2e), lVar7 == 0)) ||
          (iVar4 = FUN_18052c8e4(puVar3,7,lVar6,0x40), iVar4 != 0)))) {
        if (_Val != 0xfde9) {
          FID_conflict__ltow_s(_Val,(wchar_t *)(param_3 + 0x100),0x10,10);
          return 1;
        }
        iVar4 = FUN_180515c10();
        if (iVar4 == 0) {
          return 1;
        }
        goto LAB_180537b08;
      }
    }
  }
  return 0;
}



/* ===== 180537b20 FUN_180537b20 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint FUN_180537b20(undefined8 param_1)

{
  uint *puVar1;
  LCID Locale;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  short *psVar5;
  uint uVar6;
  undefined1 auStack_128 [32];
  WCHAR local_108 [120];
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_128;
  lVar3 = FUN_180529860();
  lVar4 = FUN_180529860();
  puVar1 = *(uint **)(lVar4 + 0x3a0);
  Locale = FUN_1805380bc(param_1);
  iVar2 = GetLocaleInfoW(Locale,(-(uint)(*(int *)(lVar3 + 0xb4) != 0) & 0xfffff005) + 0x1002,
                         local_108,0x78);
  uVar6 = 0;
  if (iVar2 == 0) {
    *puVar1 = 0;
    uVar6 = 1;
  }
  else {
    iVar2 = FUN_18052f5e0(*(undefined8 *)(lVar3 + 0xa0),local_108);
    if (iVar2 == 0) {
      psVar5 = &DAT_180587118;
      do {
        if ((short)Locale == *psVar5) goto LAB_180537bd5;
        uVar6 = uVar6 + 1;
        psVar5 = psVar5 + 1;
      } while (uVar6 < 10);
      *puVar1 = *puVar1 | 4;
      puVar1[2] = Locale;
      puVar1[1] = Locale;
    }
LAB_180537bd5:
    uVar6 = ~(*puVar1 >> 2) & 1;
  }
  return uVar6;
}



/* ===== 180537c08 GetLcidFromLangCountry ===== */

/* Library Function - Single Match
    GetLcidFromLangCountry
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void GetLcidFromLangCountry(uint *param_1)

{
  short sVar1;
  uint uVar2;
  longlong lVar3;
  short *psVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  
  lVar3 = FUN_180529860();
  lVar5 = -1;
  lVar6 = -1;
  do {
    lVar6 = lVar6 + 1;
  } while (*(short *)(*(longlong *)(lVar3 + 0x98) + lVar6 * 2) != 0);
  *(uint *)(lVar3 + 0xb0) = (uint)(lVar6 == 3);
  do {
    lVar5 = lVar5 + 1;
  } while (*(short *)(*(longlong *)(lVar3 + 0xa0) + lVar5 * 2) != 0);
  iVar7 = 2;
  *(uint *)(lVar3 + 0xb4) = (uint)(lVar5 == 3);
  param_1[1] = 0;
  if (*(int *)(lVar3 + 0xb0) == 0) {
    psVar4 = *(short **)(lVar3 + 0x98);
    iVar7 = 0;
    while( true ) {
      sVar1 = *psVar4;
      psVar4 = psVar4 + 1;
      if ((0x19 < (ushort)(sVar1 - 0x41U)) && (0x19 < (ushort)(sVar1 - 0x61U))) break;
      iVar7 = iVar7 + 1;
    }
  }
  *(int *)(lVar3 + 0xac) = iVar7;
  EnumSystemLocalesW(FUN_180537d70,1);
  uVar2 = *param_1;
  if ((uVar2 >> 8 & 1) == 0 || ((uVar2 & 7) == 0 || (uVar2 >> 9 & 1) == 0)) {
    *param_1 = 0;
  }
  return;
}



/* ===== 180537cd8 GetLcidFromLanguage ===== */

/* Library Function - Single Match
    GetLcidFromLanguage
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void GetLcidFromLanguage(byte *param_1)

{
  short sVar1;
  longlong lVar2;
  short *psVar3;
  longlong lVar4;
  int iVar5;
  
  lVar2 = FUN_180529860();
  lVar4 = -1;
  psVar3 = *(short **)(lVar2 + 0x98);
  do {
    lVar4 = lVar4 + 1;
  } while (psVar3[lVar4] != 0);
  iVar5 = 2;
  *(uint *)(lVar2 + 0xb0) = (uint)(lVar4 == 3);
  if (lVar4 != 3) {
    iVar5 = 0;
    while( true ) {
      sVar1 = *psVar3;
      psVar3 = psVar3 + 1;
      if ((0x19 < (ushort)(sVar1 - 0x41U)) && (0x19 < (ushort)(sVar1 - 0x61U))) break;
      iVar5 = iVar5 + 1;
    }
  }
  *(int *)(lVar2 + 0xac) = iVar5;
  EnumSystemLocalesW(FUN_180537fb4,1);
  if ((*param_1 & 4) == 0) {
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return;
}



/* ===== 180537d70 FUN_180537d70 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint FUN_180537d70(undefined8 param_1)

{
  longlong *plVar1;
  uint *puVar2;
  LCID Locale;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  short *psVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined1 auStack_138 [32];
  WCHAR local_118 [120];
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_138;
  lVar4 = FUN_180529860();
  plVar1 = (longlong *)(lVar4 + 0x98);
  lVar5 = FUN_180529860();
  puVar2 = *(uint **)(lVar5 + 0x3a0);
  Locale = FUN_1805380bc(param_1);
  iVar3 = GetLocaleInfoW(Locale,(-(uint)(*(int *)(lVar4 + 0xb4) != 0) & 0xfffff005) + 0x1002,
                         local_118,0x78);
  if (iVar3 == 0) goto LAB_180537f83;
  iVar3 = FUN_18052f5e0(*(undefined8 *)(lVar4 + 0xa0),local_118);
  lVar5 = -1;
  if (iVar3 == 0) {
    iVar3 = GetLocaleInfoW(Locale,(-(uint)(*(int *)(lVar4 + 0xb0) != 0) & 0xfffff002) + 0x1001,
                           local_118,0x78);
    if (iVar3 == 0) goto LAB_180537f83;
    iVar3 = FUN_18052f5e0(*plVar1,local_118);
    if (iVar3 == 0) {
      puVar2[1] = Locale;
      *puVar2 = *puVar2 | 0x304;
LAB_180537eb5:
      puVar2[2] = Locale;
    }
    else if ((*puVar2 & 2) == 0) {
      if ((*(int *)(lVar4 + 0xac) == 0) ||
         (iVar3 = FUN_18053bf20(*plVar1,local_118,(longlong)*(int *)(lVar4 + 0xac)), iVar3 != 0)) {
        if ((*puVar2 & 1) == 0) {
          uVar8 = 0;
          psVar7 = &DAT_180587118;
          do {
            if ((short)Locale == *psVar7) goto LAB_180537eb8;
            uVar8 = uVar8 + 1;
            psVar7 = psVar7 + 1;
          } while (uVar8 < 10);
          *puVar2 = *puVar2 | 1;
          goto LAB_180537eb5;
        }
      }
      else {
        *puVar2 = *puVar2 | 2;
        lVar6 = -1;
        puVar2[2] = Locale;
        do {
          lVar6 = lVar6 + 1;
        } while (*(short *)(*plVar1 + lVar6 * 2) != 0);
        if ((int)lVar6 == *(int *)(lVar4 + 0xac)) {
          puVar2[1] = Locale;
        }
      }
    }
  }
LAB_180537eb8:
  if ((*puVar2 & 0x300) == 0x300) goto LAB_180537f77;
  iVar3 = GetLocaleInfoW(Locale,(-(uint)(*(int *)(lVar4 + 0xb0) != 0) & 0xfffff002) + 0x1001,
                         local_118,0x78);
  if (iVar3 == 0) {
LAB_180537f83:
    *puVar2 = 0;
    return 1;
  }
  iVar3 = FUN_18052f5e0(*plVar1,local_118);
  if (iVar3 == 0) {
    uVar8 = *puVar2;
    *puVar2 = uVar8 | 0x200;
    if ((*(int *)(lVar4 + 0xb0) == 0) && (*(int *)(lVar4 + 0xac) != 0)) {
      do {
        lVar5 = lVar5 + 1;
      } while (*(short *)(*plVar1 + lVar5 * 2) != 0);
      if ((int)lVar5 == *(int *)(lVar4 + 0xac)) {
        uVar9 = 1;
        goto LAB_180537f5c;
      }
    }
    *puVar2 = uVar8 | 0x300;
  }
  else {
    if (((*(int *)(lVar4 + 0xb0) != 0) || (*(int *)(lVar4 + 0xac) == 0)) ||
       (iVar3 = FUN_18052f5e0(*plVar1,local_118), iVar3 != 0)) goto LAB_180537f77;
    uVar9 = 0;
LAB_180537f5c:
    iVar3 = FUN_1805381c0(Locale,uVar9,puVar2);
    if (iVar3 == 0) goto LAB_180537f77;
    *puVar2 = *puVar2 | 0x100;
  }
  if (puVar2[1] == 0) {
    puVar2[1] = Locale;
  }
LAB_180537f77:
  return ~(*puVar2 >> 2) & 1;
}



/* ===== 180537fb4 FUN_180537fb4 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint FUN_180537fb4(undefined8 param_1)

{
  uint *puVar1;
  LCID Locale;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined1 auStack_128 [32];
  WCHAR local_108 [120];
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_128;
  lVar3 = FUN_180529860();
  lVar4 = FUN_180529860();
  puVar1 = *(uint **)(lVar4 + 0x3a0);
  Locale = FUN_1805380bc(param_1);
  iVar2 = GetLocaleInfoW(Locale,(-(uint)(*(int *)(lVar3 + 0xb0) != 0) & 0xfffff002) + 0x1001,
                         local_108,0x78);
  if (iVar2 == 0) {
    *puVar1 = 0;
    return 1;
  }
  iVar2 = FUN_18052f5e0(*(undefined8 *)(lVar3 + 0x98),local_108);
  if (iVar2 == 0) {
    if (*(int *)(lVar3 + 0xb0) == 0) {
      uVar5 = 1;
      goto LAB_180538076;
    }
  }
  else {
    if (((*(int *)(lVar3 + 0xb0) != 0) || (*(int *)(lVar3 + 0xac) == 0)) ||
       (iVar2 = FUN_18052f5e0(*(undefined8 *)(lVar3 + 0x98),local_108), iVar2 != 0))
    goto LAB_18053808d;
    uVar5 = 0;
LAB_180538076:
    iVar2 = FUN_1805381c0(Locale,uVar5,puVar1);
    if (iVar2 == 0) goto LAB_18053808d;
  }
  *puVar1 = *puVar1 | 4;
  puVar1[1] = Locale;
  puVar1[2] = Locale;
LAB_18053808d:
  return ~(*puVar1 >> 2) & 1;
}



/* ===== 1805380bc FUN_1805380bc ===== */

int FUN_1805380bc(ushort *param_1)

{
  short sVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  
  uVar3 = *param_1;
  iVar4 = 0;
  do {
    param_1 = param_1 + 1;
    if (uVar3 == 0) {
      return iVar4;
    }
    if ((ushort)(uVar3 - 0x61) < 6) {
      sVar1 = -0x27;
LAB_1805380e9:
      uVar2 = uVar3 + sVar1;
    }
    else {
      uVar2 = uVar3;
      if ((ushort)(uVar3 - 0x41) < 6) {
        sVar1 = -7;
        goto LAB_1805380e9;
      }
    }
    uVar3 = *param_1;
    iVar4 = iVar4 * 0x10 + -0x30 + (uint)uVar2;
  } while( true );
}



/* ===== 18053810c FUN_18053810c ===== */

UINT FUN_18053810c(short *param_1,longlong param_2)

{
  int iVar1;
  UINT UVar2;
  UINT local_res8 [2];
  
  local_res8[0] = 0;
  if (((param_1 == (short *)0x0) || (*param_1 == 0)) ||
     (iVar1 = FUN_18053d350(param_1,&DAT_1805870f8), iVar1 == 0)) {
    iVar1 = GetLocaleInfoW(*(LCID *)(param_2 + 8),0x20001004,(LPWSTR)local_res8,2);
    if (iVar1 != 0) {
      if (local_res8[0] == 0) {
        UVar2 = GetACP();
        return UVar2;
      }
      return local_res8[0];
    }
  }
  else {
    iVar1 = FUN_18053d350(param_1,&DAT_180587110);
    if (iVar1 != 0) {
      UVar2 = FUN_180514534(param_1);
      return UVar2;
    }
    iVar1 = GetLocaleInfoW(*(LCID *)(param_2 + 8),0x2000000b,(LPWSTR)local_res8,2);
    if (iVar1 != 0) {
      return local_res8[0];
    }
  }
  return 0;
}



/* ===== 1805381c0 FUN_1805381c0 ===== */

bool FUN_1805381c0(uint param_1,int param_2)

{
  short sVar1;
  short *psVar2;
  int iVar3;
  longlong lVar4;
  short *psVar5;
  bool bVar6;
  uint local_res8 [2];
  
  local_res8[0] = 0;
  lVar4 = FUN_180529860();
  iVar3 = GetLocaleInfoW(param_1 & 0x3ff | 0x400,0x20000001,(LPWSTR)local_res8,2);
  if (iVar3 == 0) {
    bVar6 = false;
  }
  else if ((param_1 == local_res8[0]) || (param_2 == 0)) {
    bVar6 = true;
  }
  else {
    psVar2 = *(short **)(lVar4 + 0x98);
    iVar3 = 0;
    sVar1 = *psVar2;
    psVar5 = psVar2;
    while ((psVar5 = psVar5 + 1, (ushort)(sVar1 - 0x41U) < 0x1a || ((ushort)(sVar1 - 0x61U) < 0x1a))
          ) {
      iVar3 = iVar3 + 1;
      sVar1 = *psVar5;
    }
    lVar4 = -1;
    do {
      lVar4 = lVar4 + 1;
    } while (psVar2[lVar4] != 0);
    bVar6 = iVar3 != (int)lVar4;
  }
  return bVar6;
}



/* ===== 18053827c FUN_18053827c ===== */

ulonglong FUN_18053827c(longlong param_1,int param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  ulonglong in_RAX;
  longlong lVar3;
  int iVar4;
  
  iVar4 = 0;
  if (-1 < param_2) {
    do {
      iVar2 = (iVar4 + param_2) / 2;
      in_RAX = FUN_18052f5e0(*param_3,*(undefined8 *)((longlong)iVar2 * 0x10 + param_1));
      if ((int)in_RAX == 0) {
        lVar3 = param_1 + 8 + (longlong)iVar2 * 0x10;
        *param_3 = lVar3;
        return CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
      }
      iVar1 = iVar2 + -1;
      if (-1 < (int)in_RAX) {
        iVar4 = iVar2 + 1;
        iVar1 = param_2;
      }
      param_2 = iVar1;
    } while (iVar4 <= param_2);
  }
  return in_RAX & 0xffffffffffffff00;
}



/* ===== 180538304 FUN_180538304 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180538304(longlong param_1,uint *param_2,LPWSTR param_3)

{
  longlong *plVar1;
  short *psVar2;
  ulonglong uVar3;
  char cVar4;
  uint _Val;
  BOOL BVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  LCID local_50;
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_78;
  lVar7 = FUN_180529860();
  local_58 = 0;
  local_50 = 0;
  lVar8 = FUN_180529860();
  plVar1 = (longlong *)(lVar7 + 0xa0);
  *(undefined8 **)(lVar8 + 0x3a0) = &local_58;
  psVar2 = (short *)(param_1 + 0x80);
  *(longlong *)(lVar7 + 0x98) = param_1;
  *plVar1 = (longlong)psVar2;
  if ((psVar2 != (short *)0x0) && (*psVar2 != 0)) {
    FUN_18053827c(&PTR_u_america_180586560,(int)DAT_1805866d0 + -1,plVar1);
  }
  uVar3 = local_58 >> 0x20;
  local_58 = local_58 & 0xffffffff00000000;
  if ((*(short **)(lVar7 + 0x98) == (short *)0x0) || (**(short **)(lVar7 + 0x98) == 0)) {
    if (((short *)*plVar1 == (short *)0x0) || (*(short *)*plVar1 == 0)) {
      local_58 = CONCAT44((int)uVar3,0x104);
      local_50 = GetUserDefaultLCID();
      local_58 = CONCAT44(local_50,(int)local_58);
    }
    else {
      lVar8 = FUN_180529860();
      lVar9 = -1;
      do {
        lVar9 = lVar9 + 1;
      } while (*(short *)(*(longlong *)(lVar8 + 0xa0) + lVar9 * 2) != 0);
      *(uint *)(lVar8 + 0xb4) = (uint)(lVar9 == 3);
      EnumSystemLocalesW(FUN_180537b20,1);
      if ((local_58 & 4) == 0) {
        local_58 = local_58 & 0xffffffff00000000;
      }
    }
  }
  else {
    if (((short *)*plVar1 == (short *)0x0) || (*(short *)*plVar1 == 0)) {
      GetLcidFromLanguage(&local_58);
    }
    else {
      GetLcidFromLangCountry(&local_58);
    }
    if ((int)local_58 != 0) goto LAB_18053848c;
    cVar4 = FUN_18053827c(&PTR_u_american_180586140,(int)DAT_180586550 + -1,lVar7 + 0x98);
    if (cVar4 != '\0') {
      if (((short *)*plVar1 == (short *)0x0) || (*(short *)*plVar1 == 0)) {
        GetLcidFromLanguage(&local_58);
      }
      else {
        GetLcidFromLangCountry(&local_58);
      }
    }
  }
  if ((int)local_58 == 0) {
    return 0;
  }
LAB_18053848c:
  _Val = FUN_18053810c(-(ulonglong)(param_1 != 0) & param_1 + 0x100U,&local_58);
  if ((_Val != 0) && (BVar5 = IsValidCodePage(_Val & 0xffff), BVar5 != 0)) {
    BVar5 = IsValidLocale(local_58._4_4_,1);
    if (BVar5 != 0) {
      if (param_2 != (uint *)0x0) {
        *param_2 = _Val;
      }
      FUN_18052cb10(local_58._4_4_,lVar7 + 0x2f0,0x55);
      if (param_3 != (LPWSTR)0x0) {
        FUN_18052cb10(local_58._4_4_,param_3 + 0x90,0x55,0);
        iVar6 = GetLocaleInfoW(local_58._4_4_,0x1001,param_3,0x40);
        if (iVar6 == 0) {
          return 0;
        }
        iVar6 = GetLocaleInfoW(local_50,0x1002,param_3 + 0x40,0x40);
        if (iVar6 == 0) {
          return 0;
        }
        FID_conflict__ltow_s(_Val,param_3 + 0x80,0x10,10);
      }
      return 1;
    }
  }
  return 0;
}



/* ===== 180538584 FUN_180538584 ===== */

undefined4
FUN_180538584(ulonglong *param_1,undefined1 *param_2,ulonglong param_3,undefined8 param_4,
             ulonglong param_5,longlong param_6)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar3 = 0;
  uVar4 = 0;
  if (param_2 == (undefined1 *)0x0) {
    if (param_3 == 0) goto LAB_1805385b9;
  }
  else if (param_3 != 0) {
    *param_2 = 0;
LAB_1805385b9:
    if (param_1 != (ulonglong *)0x0) {
      *param_1 = 0;
    }
    uVar2 = param_5;
    if (param_3 < param_5) {
      uVar2 = param_3;
    }
    if (uVar2 < 0x80000000) {
      lVar1 = FUN_180538698(param_2,param_4,uVar2,param_6);
      if (lVar1 == -1) {
        if (param_2 != (undefined1 *)0x0) {
          *param_2 = 0;
        }
        if (*(char *)(param_6 + 0x30) != '\0') {
          uVar3 = *(undefined4 *)(param_6 + 0x2c);
        }
        return uVar3;
      }
      uVar2 = lVar1 + 1;
      if (param_2 == (undefined1 *)0x0) goto LAB_180538673;
      if (param_3 < uVar2) {
        if (param_5 != 0xffffffffffffffff) {
          *param_2 = 0;
          uVar3 = 0x22;
          goto LAB_180538658;
        }
        uVar4 = 0x50;
        uVar2 = param_3;
      }
      param_2[uVar2 - 1] = 0;
LAB_180538673:
      if (param_1 != (ulonglong *)0x0) {
        *param_1 = uVar2;
      }
      return uVar4;
    }
    uVar3 = 0x16;
LAB_180538658:
    *(undefined4 *)(param_6 + 0x2c) = uVar3;
    *(undefined1 *)(param_6 + 0x30) = 1;
    goto LAB_1805385fd;
  }
  uVar3 = 0x16;
  *(undefined1 *)(param_6 + 0x30) = 1;
  *(undefined4 *)(param_6 + 0x2c) = 0x16;
LAB_1805385fd:
  FUN_180527688(0,0,0,0,0,param_6);
  return uVar3;
}



/* ===== 180538698 FUN_180538698 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_180538698(longlong param_1,ushort *param_2,ulonglong param_3,longlong param_4)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  DWORD DVar4;
  ulonglong uVar5;
  ushort *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 auStack_b8 [32];
  char *local_98;
  undefined8 local_90;
  undefined8 local_88;
  int *local_80;
  int local_78 [2];
  ushort *local_70;
  undefined8 local_68;
  char local_60 [8];
  ulonglong local_58;
  
  local_58 = DAT_180919500 ^ (ulonglong)auStack_b8;
  local_78[0] = 0;
  uVar5 = 0;
  if ((param_1 != 0) && (param_3 == 0)) {
    return 0;
  }
  local_70 = param_2;
  if (param_2 == (ushort *)0x0) {
    *(undefined1 *)(param_4 + 0x30) = 1;
    *(undefined4 *)(param_4 + 0x2c) = 0x16;
    local_98 = (char *)0x0;
    local_90 = param_4;
    FUN_180527688(0,0,0,0);
    return 0xffffffffffffffff;
  }
  if (*(char *)(param_4 + 0x28) == '\0') {
    FUN_1805002a0(param_4);
  }
  lVar7 = *(longlong *)(param_4 + 0x18);
  iVar3 = *(int *)(lVar7 + 0xc);
  if (iVar3 == 0xfde9) {
    local_68 = 0;
    local_98 = (char *)param_4;
    uVar5 = FUN_18053d388(param_1,&local_70,param_3,&local_68);
    return uVar5;
  }
  if (param_1 == 0) {
    if (*(longlong *)(lVar7 + 0x138) != 0) {
      local_80 = local_78;
      local_88 = 0;
      local_90 = (ulonglong)local_90._4_4_ << 0x20;
      local_98 = (char *)0x0;
      iVar3 = FUN_18052eef0(iVar3,0,local_70,0xffffffff);
      if (((longlong)iVar3 != 0) && (local_78[0] == 0)) {
        return (longlong)iVar3 - 1;
      }
LAB_1805389ac:
      *(undefined4 *)(param_4 + 0x2c) = 0x2a;
      *(undefined1 *)(param_4 + 0x30) = 1;
      return 0xffffffffffffffff;
    }
    uVar2 = *local_70;
    uVar5 = 0;
    while( true ) {
      if (uVar2 == 0) {
        return uVar5;
      }
      if (0xff < uVar2) break;
      local_70 = local_70 + 1;
      uVar5 = uVar5 + 1;
      uVar2 = *local_70;
    }
  }
  else if (*(longlong *)(lVar7 + 0x138) == 0) {
    if (param_3 == 0) {
      return 0;
    }
    while (*local_70 < 0x100) {
      *(char *)(param_1 + uVar5) = (char)*local_70;
      uVar2 = *local_70;
      local_70 = local_70 + 1;
      if (uVar2 == 0) {
        return uVar5;
      }
      uVar5 = uVar5 + 1;
      if (param_3 <= uVar5) {
        return uVar5;
      }
    }
  }
  else {
    local_98 = (char *)param_1;
    if (*(int *)(lVar7 + 8) != 1) {
      local_80 = local_78;
      local_88 = 0;
      local_90 = CONCAT44(local_90._4_4_,(int)param_3);
      iVar3 = FUN_18052eef0(iVar3,0,local_70,0xffffffff);
      if (local_78[0] == 0) {
        if (iVar3 != 0) {
          return (longlong)iVar3 - 1;
        }
        DVar4 = GetLastError();
        if (DVar4 == 0x7a) {
          uVar5 = 0;
          if (param_3 != 0) {
            do {
              local_80 = local_78;
              local_88 = 0;
              iVar3 = *(int *)(*(longlong *)(param_4 + 0x18) + 8);
              if (5 < iVar3) {
                iVar3 = 5;
              }
              local_90 = CONCAT44(local_90._4_4_,iVar3);
              local_98 = local_60;
              iVar3 = FUN_18052eef0(*(undefined4 *)(*(longlong *)(param_4 + 0x18) + 0xc),0,local_70,
                                    1);
              if ((((iVar3 == 0) || (local_78[0] != 0)) || (iVar3 < 0)) ||
                 (uVar8 = (ulonglong)iVar3, 5 < uVar8)) goto LAB_1805389ac;
              if (param_3 < uVar8 + uVar5) {
                return uVar5;
              }
              lVar7 = 0;
              if (0 < (longlong)uVar8) {
                do {
                  cVar1 = local_60[lVar7];
                  *(char *)(param_1 + uVar5) = cVar1;
                  if (cVar1 == '\0') {
                    return uVar5;
                  }
                  lVar7 = lVar7 + 1;
                  uVar5 = uVar5 + 1;
                } while (lVar7 < (longlong)uVar8);
              }
              local_70 = local_70 + 1;
            } while (uVar5 < param_3);
          }
          return uVar5;
        }
      }
      goto LAB_1805389ac;
    }
    if (param_3 != 0) {
      puVar6 = local_70;
      uVar5 = param_3;
      do {
        if (*puVar6 == 0) {
          param_3 = ((longlong)puVar6 - (longlong)local_70 >> 1) + 1;
          break;
        }
        puVar6 = puVar6 + 1;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    local_80 = local_78;
    local_88 = 0;
    local_90 = CONCAT44(local_90._4_4_,(int)param_3);
    iVar3 = FUN_18052eef0(iVar3,0,local_70,param_3 & 0xffffffff);
    uVar5 = (ulonglong)iVar3;
    if ((iVar3 != 0) && (local_78[0] == 0)) {
      if (*(char *)(param_1 + -1 + uVar5) == '\0') {
        return uVar5 - 1;
      }
      return uVar5;
    }
  }
  *(undefined1 *)(param_4 + 0x30) = 1;
  *(undefined4 *)(param_4 + 0x2c) = 0x2a;
  return 0xffffffffffffffff;
}



/* ===== 1805389d8 FUN_1805389d8 ===== */

undefined4 FUN_1805389d8(void)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined4 *in_stack_00000030;
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
  local_38 = 0;
  local_20 = '\0';
  local_18 = '\0';
  local_10 = '\0';
  if (in_stack_00000030 == (undefined4 *)0x0) {
    if (DAT_180c9f7dc != 0) goto LAB_180538a26;
    local_30 = PTR_PTR_1809198b8._0_4_;
    uStack_2c = PTR_PTR_1809198b8._4_4_;
    uStack_28 = PTR_DAT_1809198c0._0_4_;
    uStack_24 = PTR_DAT_1809198c0._4_4_;
  }
  else {
    local_30 = *in_stack_00000030;
    uStack_2c = in_stack_00000030[1];
    uStack_28 = in_stack_00000030[2];
    uStack_24 = in_stack_00000030[3];
  }
  local_20 = '\x01';
LAB_180538a26:
  uVar1 = FUN_180538584();
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



/* ===== 180538aa4 FUN_180538aa4 ===== */

uint FUN_180538aa4(short *param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  DWORD DVar2;
  longlong lVar3;
  uint *puVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  bool bVar8;
  
  if (param_1 == (short *)0x0) {
    if (*(char *)(param_2 + 0x28) != '\0') {
      FUN_1805277b0(*(undefined8 *)(param_2 + 0x10));
      *(undefined1 *)(param_2 + 0x28) = 0;
    }
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined8 *)(param_2 + 0x18) = 0;
  }
  else {
    if (*param_1 != 0) {
      iVar1 = FUN_18052eef0(param_4,0,param_1,0xffffffff,0,0,0,0);
      uVar7 = (ulonglong)iVar1;
      if (iVar1 != 0) {
        uVar6 = *(ulonglong *)(param_2 + 0x18);
        if (uVar6 < uVar7) {
          if (*(char *)(param_2 + 0x28) != '\0') {
            FUN_1805277b0(*(undefined8 *)(param_2 + 0x10));
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
        iVar1 = FUN_18052eef0(param_4,0,param_1,0xffffffff,*(undefined8 *)(param_2 + 0x10),
                              (int)uVar6,0,0);
        if ((longlong)iVar1 != 0) {
          *(longlong *)(param_2 + 0x20) = (longlong)iVar1 + -1;
          return 0;
        }
      }
      DVar2 = GetLastError();
      FUN_18051bf40(DVar2);
      puVar4 = (uint *)FUN_18051bfb0();
      return *puVar4;
    }
    if (*(longlong *)(param_2 + 0x18) == 0) {
      if (*(char *)(param_2 + 0x28) != '\0') {
        FUN_1805277b0(*(undefined8 *)(param_2 + 0x10));
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



/* ===== 180538c50 FUN_180538c50 ===== */

int FUN_180538c50(longlong *param_1,longlong *param_2)

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
    puVar1 = (undefined4 *)FUN_18051bfb0();
    iVar5 = 0x16;
    *puVar1 = 0x16;
    FUN_180527740();
  }
  else {
    *param_2 = 0;
    lVar4 = *param_1;
    local_58 = (longlong *)0x0;
    plStack_50 = (longlong *)0x0;
    local_48 = 0;
    while (plVar6 = plStack_50, plVar7 = local_58, lVar4 != 0) {
      local_res10 = CONCAT53(local_res10._3_5_,0x3f2a);
      lVar4 = FUN_18053d580(lVar4,&local_res10);
      if (lVar4 == 0) {
        iVar5 = FUN_180538e8c(*param_1,0,0,&local_58);
        plVar7 = local_58;
        if (iVar5 != 0) {
          plVar6 = local_58;
          if (local_58 != plStack_50) {
            do {
              FUN_1805277b0(*plVar6);
              plVar6 = plVar6 + 1;
            } while (plVar6 != plStack_50);
          }
          goto LAB_180538d9f;
        }
      }
      else {
        iVar5 = FUN_180539010(*param_1,lVar4,&local_58);
        plVar7 = local_58;
        if (iVar5 != 0) {
          plVar6 = local_58;
          if (local_58 != plStack_50) {
            do {
              FUN_1805277b0(*plVar6);
              plVar6 = plVar6 + 1;
            } while (plVar6 != plStack_50);
          }
          goto LAB_180538d9f;
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
      FUN_1805277b0(0);
      for (plVar2 = plVar7; plVar2 != plVar6; plVar2 = plVar2 + 1) {
        FUN_1805277b0(*plVar2);
      }
      iVar5 = -1;
LAB_180538d9f:
      FUN_1805277b0(plVar7);
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
          iVar5 = FUN_1805124f0();
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
      FUN_1805277b0(0);
      for (plVar2 = plVar7; plVar2 != plVar6; plVar2 = plVar2 + 1) {
        FUN_1805277b0(*plVar2);
      }
      FUN_1805277b0(plVar7);
      iVar5 = 0;
    }
  }
  return iVar5;
}



/* ===== 180538e8c FUN_180538e8c ===== */

undefined8 FUN_180538e8c(longlong param_1,undefined8 param_2,ulonglong param_3,longlong *param_4)

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
  if (((param_3 != 0) && (iVar1 = FUN_1805124f0(), iVar1 != 0)) ||
     (iVar1 = FUN_1805124f0(), iVar1 != 0)) {
                    /* WARNING: Subroutine does not return */
    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  if (param_4[1] == param_4[2]) {
    if (*param_4 == 0) {
      lVar3 = _calloc_base(4,8);
      *param_4 = lVar3;
      FUN_1805277b0(0);
      lVar3 = *param_4;
      if (lVar3 != 0) {
        param_4[1] = lVar3;
        param_4[2] = lVar3 + 0x20;
        goto LAB_180538fe2;
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
          FUN_1805277b0(0);
          goto LAB_180538fe2;
        }
        FUN_1805277b0(0);
      }
    }
    uVar6 = 0xc;
    FUN_1805277b0(uVar2);
  }
  else {
LAB_180538fe2:
    *(undefined8 *)param_4[1] = uVar2;
    param_4[1] = param_4[1] + 8;
  }
  FUN_1805277b0(0);
  return uVar6;
}



/* ===== 180539010 FUN_180539010 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_180539010(char *param_1,char *param_2,longlong *param_3)

{
  byte bVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  BOOL BVar5;
  ulonglong uVar6;
  HANDLE hFindFile;
  LPCWSTR lpFileName;
  char *pcVar7;
  longlong lVar8;
  longlong lVar9;
  byte bVar10;
  undefined8 uVar11;
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
  
  local_48 = DAT_180919500 ^ (ulonglong)auStackY_378;
  while ((param_2 != param_1 &&
         ((0x2d < (byte)(*param_2 - 0x2fU) ||
          ((0x200000000801U >> ((longlong)(char)(*param_2 - 0x2fU) & 0x3fU) & 1) == 0))))) {
    param_2 = (char *)FUN_18053d938(param_1);
  }
  if ((*param_2 == ':') && (param_2 != param_1 + 1)) {
    uVar6 = FUN_180538e8c(param_1,0,0,param_3);
  }
  else {
    bVar10 = *param_2 - 0x2f;
    if ((0x2d < bVar10) ||
       (bVar1 = 1, (0x200000000801U >> ((longlong)(char)bVar10 & 0x3fU) & 1) == 0)) {
      bVar1 = 0;
    }
    uVar6 = -(ulonglong)bVar1 & (ulonglong)(param_2 + (1 - (longlong)param_1));
    local_340 = uVar6;
    FUN_180540170(&local_298,0,0x250);
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
      uVar11 = 0xfde9;
    }
    else {
      iVar3 = FUN_18052c63c();
      if (iVar3 == 0) {
        if (local_2f0 != '\0') {
          *(uint *)(local_308 + 0x3a8) = *(uint *)(local_308 + 0x3a8) & 0xfffffffd;
        }
        uVar11 = 1;
      }
      else {
        if (local_2f0 != '\0') {
          *(uint *)(local_308 + 0x3a8) = *(uint *)(local_308 + 0x3a8) & 0xfffffffd;
        }
        uVar11 = 0;
      }
    }
    iVar3 = FUN_18051261c(param_1,&local_338,local_348,uVar11);
    lpFileName = local_328;
    if (iVar3 != 0) {
      lpFileName = (LPCWSTR)0x0;
    }
    hFindFile = FindFirstFileExW(lpFileName,FindExInfoStandard,&local_298,FindExSearchNameMatch,
                                 (LPVOID)0x0,0);
    if (hFindFile == (HANDLE)0xffffffffffffffff) {
      uVar4 = FUN_180538e8c(param_1,0,0,param_3);
      uVar6 = (ulonglong)uVar4;
      if (local_310 != '\0') {
        FUN_1805277b0(local_328);
      }
    }
    else {
      lVar9 = param_3[1] - *param_3 >> 3;
      do {
        uVar11 = 0;
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
          uVar11 = 0xfde9;
        }
        else {
          iVar3 = FUN_18052c63c();
          if (iVar3 == 0) {
            if (local_2d0 != '\0') {
              *(uint *)(local_2e8 + 0x3a8) = *(uint *)(local_2e8 + 0x3a8) & 0xfffffffd;
            }
            uVar11 = 1;
          }
          else if (local_2d0 != '\0') {
            *(uint *)(local_2e8 + 0x3a8) = *(uint *)(local_2e8 + 0x3a8) & 0xfffffffd;
          }
        }
        iVar3 = FUN_180538aa4(local_298.cFileName,&local_2c8,local_348,uVar11);
        pcVar2 = local_2b8;
        pcVar7 = local_2b8;
        if (iVar3 != 0) {
          pcVar7 = (char *)0x0;
        }
        if ((*pcVar7 == '.') && ((pcVar7[1] == '\0' || ((pcVar7[1] == '.' && (pcVar7[2] == '\0')))))
           ) {
          if (local_2a0 != '\0') {
            FUN_1805277b0(local_2b8);
          }
        }
        else {
          uVar4 = FUN_180538e8c(pcVar7,param_1,uVar6,param_3);
          if (uVar4 != 0) {
            if (local_2a0 != '\0') {
              FUN_1805277b0(pcVar2);
            }
            FindClose(hFindFile);
            if (local_310 != '\0') {
              FUN_1805277b0(local_328);
            }
            return (ulonglong)uVar4;
          }
          if (local_2a0 != '\0') {
            FUN_1805277b0(pcVar2);
          }
          uVar6 = local_340;
        }
        BVar5 = FindNextFileW(hFindFile,&local_298);
      } while (BVar5 != 0);
      lVar8 = param_3[1] - *param_3 >> 3;
      if (lVar9 != lVar8) {
        FUN_180519150(*param_3 + lVar9 * 8,lVar8 - lVar9,8,&LAB_180538a90);
      }
      FindClose(hFindFile);
      if (local_310 != '\0') {
        FUN_1805277b0(local_328);
      }
      uVar6 = 0;
    }
  }
  return uVar6;
}



/* ===== 180539370 thunk_FUN_180538c50 ===== */

int thunk_FUN_180538c50(longlong *param_1,longlong *param_2)

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
    puVar1 = (undefined4 *)FUN_18051bfb0();
    iVar5 = 0x16;
    *puVar1 = 0x16;
    FUN_180527740();
  }
  else {
    *param_2 = 0;
    lVar4 = *param_1;
    plStack_58 = (longlong *)0x0;
    plStack_50 = (longlong *)0x0;
    uStack_48 = 0;
    while (plVar6 = plStack_50, plVar7 = plStack_58, lVar4 != 0) {
      lStackX_10 = CONCAT53(lStackX_10._3_5_,0x3f2a);
      lVar4 = FUN_18053d580(lVar4,&lStackX_10);
      if (lVar4 == 0) {
        iVar5 = FUN_180538e8c(*param_1,0,0,&plStack_58);
        plVar7 = plStack_58;
        if (iVar5 != 0) {
          plVar6 = plStack_58;
          if (plStack_58 != plStack_50) {
            do {
              FUN_1805277b0(*plVar6);
              plVar6 = plVar6 + 1;
            } while (plVar6 != plStack_50);
          }
          goto LAB_180538d9f;
        }
      }
      else {
        iVar5 = FUN_180539010(*param_1,lVar4,&plStack_58);
        plVar7 = plStack_58;
        if (iVar5 != 0) {
          plVar6 = plStack_58;
          if (plStack_58 != plStack_50) {
            do {
              FUN_1805277b0(*plVar6);
              plVar6 = plVar6 + 1;
            } while (plVar6 != plStack_50);
          }
          goto LAB_180538d9f;
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
      FUN_1805277b0(0);
      for (plVar2 = plVar7; plVar2 != plVar6; plVar2 = plVar2 + 1) {
        FUN_1805277b0(*plVar2);
      }
      iVar5 = -1;
LAB_180538d9f:
      FUN_1805277b0(plVar7);
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
          iVar5 = FUN_1805124f0();
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
      FUN_1805277b0(0);
      for (plVar2 = plVar7; plVar2 != plVar6; plVar2 = plVar2 + 1) {
        FUN_1805277b0(*plVar2);
      }
      FUN_1805277b0(plVar7);
      iVar5 = 0;
    }
  }
  return iVar5;
}



/* ===== 180539378 FUN_180539378 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_180539378(HMODULE param_1,undefined8 param_2,ulonglong param_3)

{
  DWORD DVar1;
  int iVar2;
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
  WCHAR local_228 [264];
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_2a8;
  DVar1 = GetModuleFileNameW(param_1,local_228,0x105);
  if (DVar1 == 0) {
    DVar1 = GetLastError();
    FUN_18051bf40(DVar1);
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
      iVar2 = FUN_18052c63c();
      if (iVar2 == 0) {
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
    FUN_1805127bc(local_228,&local_260,local_288,uVar3);
    local_240 = local_240 & 0xffffffff;
  }
  return local_240;
}



/* ===== 18053949c FUN_18053949c ===== */

undefined8 FUN_18053949c(__crt_locale_pointers *param_1,uint param_2,uint param_3,byte param_4)

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



/* ===== 180539510 FUN_180539510 ===== */

void FUN_180539510(undefined4 param_1)

{
  FUN_18053949c(0,param_1,0,4);
  return;
}



/* ===== 180539524 FUN_180539524 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_180539524(void)

{
  DAT_180c9ffb8 = GetCommandLineA();
  _DAT_180c9ffc0 = GetCommandLineW();
  return 1;
}



