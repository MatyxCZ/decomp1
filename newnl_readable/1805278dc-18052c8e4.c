/* ===== 1805278dc FUN_1805278dc ===== */

void FUN_1805278dc(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  if ((*param_2 != DAT_180c9ff88) && ((DAT_18091a130 & *(uint *)(param_1 + 0x3a8)) == 0)) {
    lVar1 = FUN_180536e08();
    *param_2 = lVar1;
  }
  return;
}



/* ===== 180527910 FUN_180527910 ===== */

void FUN_180527910(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  
  if ((*param_2 != (&DAT_180c9ff88)[param_3]) && ((DAT_18091a130 & *(uint *)(param_1 + 0x3a8)) == 0)
     ) {
    lVar1 = FUN_180536e08();
    *param_2 = lVar1;
  }
  return;
}



/* ===== 180527948 FUN_180527948 ===== */

undefined8
FUN_180527948(double *param_1,undefined1 *param_2,ulonglong param_3,undefined8 param_4,
             undefined8 param_5,uint param_6,byte param_7,undefined4 param_8,
             __acrt_rounding_mode param_9,longlong param_10)

{
  bool bVar1;
  ushort uVar2;
  undefined8 uVar3;
  char *pcVar4;
  char *pcVar5;
  longlong lVar6;
  longlong lVar7;
  char cVar8;
  short sVar9;
  short sVar10;
  char *pcVar11;
  uint uVar12;
  char *pcVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  
  *param_2 = 0;
  uVar12 = 0;
  if (-1 < (int)param_6) {
    uVar12 = param_6;
  }
  if (param_3 <= (ulonglong)(longlong)(int)(uVar12 + 0xb)) {
    *(undefined1 *)(param_10 + 0x30) = 1;
    *(undefined4 *)(param_10 + 0x2c) = 0x22;
    FUN_180527688(0,0,0,0,0,param_10);
    return 0x22;
  }
  if (((ulonglong)*param_1 >> 0x34 & 0x7ff) == 0x7ff) {
    uVar3 = FUN_180527cdc(param_1,param_2,param_3,param_4,param_5,uVar12,0,param_8,param_9,param_10)
    ;
    if ((int)uVar3 != 0) {
      *param_2 = 0;
      return uVar3;
    }
    pcVar4 = (char *)FUN_1804ef4b0(param_2,0x65);
    if (pcVar4 == (char *)0x0) {
      return 0;
    }
    *pcVar4 = (param_7 ^ 1) * ' ' + 'P';
    pcVar4[3] = '\0';
    return 0;
  }
  if ((longlong)*param_1 < 0) {
    *param_2 = 0x2d;
    param_2 = param_2 + 1;
  }
  pcVar4 = param_2 + 1;
  uVar15 = 0x3ff;
  sVar10 = (ushort)(param_7 ^ 1) * 0x20 + 7;
  if (((ulonglong)*param_1 & 0x7ff0000000000000) == 0) {
    *param_2 = 0x30;
    uVar15 = (ulonglong)(-(uint)(((ulonglong)*param_1 & 0xfffffffffffff) != 0) & 0x3fe);
  }
  else {
    *param_2 = 0x31;
  }
  pcVar11 = param_2 + 2;
  if (uVar12 == 0) {
    cVar8 = '\0';
  }
  else {
    if (*(char *)(param_10 + 0x28) == '\0') {
      FUN_1805002a0(param_10);
    }
    cVar8 = *(char *)**(undefined8 **)(*(longlong *)(param_10 + 0x18) + 0xf8);
  }
  *pcVar4 = cVar8;
  if (((ulonglong)*param_1 & 0xfffffffffffff) != 0) {
    sVar9 = 0x30;
    uVar14 = 0xf000000000000;
    while (0 < (int)uVar12) {
      uVar2 = (short)(((ulonglong)*param_1 & uVar14) >> ((byte)sVar9 & 0x3f)) + 0x30;
      if (0x39 < uVar2) {
        uVar2 = uVar2 + sVar10;
      }
      *pcVar11 = (char)uVar2;
      uVar12 = uVar12 - 1;
      pcVar11 = pcVar11 + 1;
      uVar14 = uVar14 >> 4;
      sVar9 = sVar9 + -4;
      if (sVar9 < 0) goto LAB_180527b9a;
    }
    bVar1 = should_round_up(param_1,uVar14,sVar9,param_9);
    pcVar13 = pcVar11;
    if (!bVar1) goto LAB_180527bc0;
    while( true ) {
      pcVar5 = pcVar13 + -1;
      cVar8 = *pcVar5;
      if ((cVar8 + 0xbaU & 0xdf) != 0) break;
      *pcVar5 = '0';
      pcVar13 = pcVar5;
    }
    if (pcVar5 == pcVar4) {
      pcVar13[-2] = pcVar13[-2] + '\x01';
    }
    else {
      if (cVar8 == '9') {
        cVar8 = (char)sVar10 + '9';
      }
      *pcVar5 = cVar8 + '\x01';
    }
  }
LAB_180527b9a:
  if (0 < (int)uVar12) {
    FUN_180540170(pcVar11,0x30,uVar12);
    pcVar11 = pcVar11 + uVar12;
  }
LAB_180527bc0:
  if (*pcVar4 == '\0') {
    pcVar11 = pcVar4;
  }
  *pcVar11 = (param_7 ^ 1) * ' ' + 'P';
  pcVar4 = pcVar11 + 2;
  uVar12 = (uint)((ulonglong)*param_1 >> 0x34) & 0x7ff;
  lVar6 = uVar12 - uVar15;
  lVar7 = lVar6;
  if (lVar6 < 0) {
    lVar7 = uVar15 - uVar12;
  }
  cVar8 = '+';
  if (lVar6 < 0) {
    cVar8 = '-';
  }
  pcVar11[1] = cVar8;
  *pcVar4 = '0';
  pcVar13 = pcVar4;
  if (lVar7 < 1000) {
LAB_180527c47:
    if (99 < lVar7) goto LAB_180527c4d;
LAB_180527c80:
    if (lVar7 < 10) goto LAB_180527cb1;
  }
  else {
    pcVar13 = pcVar11 + 3;
    *pcVar4 = (char)(lVar7 / 1000) + '0';
    lVar7 = lVar7 % 1000;
    if (pcVar13 == pcVar4) goto LAB_180527c47;
LAB_180527c4d:
    lVar6 = SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816(lVar7),8) + lVar7;
    lVar6 = (lVar6 >> 6) - (lVar6 >> 0x3f);
    *pcVar13 = (char)lVar6 + '0';
    pcVar13 = pcVar13 + 1;
    lVar7 = lVar7 + lVar6 * -100;
    if (pcVar13 == pcVar4) goto LAB_180527c80;
  }
  *pcVar13 = (char)(lVar7 / 10) + '0';
  pcVar13 = pcVar13 + 1;
  lVar7 = lVar7 % 10;
LAB_180527cb1:
  *pcVar13 = (char)lVar7 + '0';
  pcVar13[1] = '\0';
  return 0;
}



/* ===== 180527cdc FUN_180527cdc ===== */

void FUN_180527cdc(undefined8 *param_1,undefined1 *param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,int param_6,undefined1 param_7,undefined4 param_8,
                  undefined4 param_9,ulonglong param_10)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_18 = 0;
  uStack_10 = 0;
  uVar1 = FUN_18053a54c(*param_1,param_6 + 1,1,&local_18,param_4,param_5);
  lVar3 = (param_3 - (ulonglong)(0 < param_6)) - (ulonglong)((int)local_18 == 0x2d);
  if (param_3 == -1) {
    lVar3 = -1;
  }
  uVar4 = param_10;
  iVar2 = FUN_18053a43c(param_2 + (ulonglong)(0 < param_6) + (ulonglong)((int)local_18 == 0x2d),
                        lVar3,param_6 + 1,&local_18,uVar1,param_9,param_10);
  if (iVar2 == 0) {
    FUN_180527de0(param_2,param_3,param_6,param_7,param_8,&local_18,uVar4 & 0xffffffffffffff00,
                  param_10);
  }
  else {
    *param_2 = 0;
  }
  return;
}



/* ===== 180527de0 FUN_180527de0 ===== */

undefined8
FUN_180527de0(undefined1 *param_1,ulonglong param_2,int param_3,char param_4,int param_5,
             int *param_6,byte param_7,longlong param_8)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  longlong lVar5;
  longlong lVar4;
  
  iVar1 = 0;
  if (0 < param_3) {
    iVar1 = param_3;
  }
  if ((ulonglong)(longlong)(iVar1 + 9) < param_2) {
    if ((param_7 != 0) && (puVar3 = param_1 + (*param_6 == 0x2d), 0 < param_3)) {
      lVar4 = -1;
      do {
        lVar5 = lVar4;
        lVar4 = lVar5 + 1;
      } while (puVar3[lVar4] != '\0');
      FUN_180540530(puVar3 + 1,puVar3,lVar5 + 2);
    }
    if (*param_6 == 0x2d) {
      *param_1 = 0x2d;
      param_1 = param_1 + 1;
    }
    if (0 < param_3) {
      *param_1 = param_1[1];
      param_1 = param_1 + 1;
      if (*(char *)(param_8 + 0x28) == '\0') {
        FUN_1805002a0(param_8);
      }
      *param_1 = *(undefined1 *)**(undefined8 **)(*(longlong *)(param_8 + 0x18) + 0xf8);
    }
    param_1 = param_1 + ((ulonglong)param_7 ^ 1) + (longlong)param_3;
    iVar1 = FUN_180526580();
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    if (param_4 != '\0') {
      *param_1 = 0x45;
    }
    if (**(char **)(param_6 + 2) != '0') {
      iVar1 = param_6[1] + -1;
      if (iVar1 < 0) {
        iVar1 = -iVar1;
        param_1[1] = 0x2d;
      }
      if (99 < iVar1) {
        param_1[2] = param_1[2] + (char)(iVar1 / 100);
        iVar1 = iVar1 % 100;
      }
      if (9 < iVar1) {
        param_1[3] = param_1[3] + (char)(iVar1 / 10);
        iVar1 = iVar1 % 10;
      }
      param_1[4] = param_1[4] + (char)iVar1;
    }
    if ((param_5 == 2) && (param_1[2] == '0')) {
      FUN_180540530(param_1 + 2,param_1 + 3,3);
    }
    uVar2 = 0;
  }
  else {
    *(undefined1 *)(param_8 + 0x30) = 1;
    *(undefined4 *)(param_8 + 0x2c) = 0x22;
    FUN_180527688(0,0,0,0,0,param_8);
    uVar2 = 0x22;
  }
  return uVar2;
}



/* ===== 180527fc4 FUN_180527fc4 ===== */

void FUN_180527fc4(undefined8 *param_1,undefined1 *param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,int param_6,undefined4 param_7,undefined8 param_8)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_18 = 0;
  uStack_10 = 0;
  uVar1 = FUN_18053a54c(*param_1,param_6,0,&local_18,param_4,param_5);
  lVar3 = param_3 - (ulonglong)((int)local_18 == 0x2d);
  uVar4 = CONCAT44((int)((ulonglong)param_4 >> 0x20),uVar1);
  if (param_3 == -1) {
    lVar3 = -1;
  }
  iVar2 = FUN_18053a43c(param_2 + ((int)local_18 == 0x2d),lVar3,local_18._4_4_ + param_6,&local_18,
                        uVar4,param_7,param_8);
  if (iVar2 == 0) {
    FUN_18052809c(param_2,param_3,param_6,&local_18,uVar4 & 0xffffffffffffff00,param_8);
  }
  else {
    *param_2 = 0;
  }
  return;
}



/* ===== 18052809c FUN_18052809c ===== */

undefined8
FUN_18052809c(undefined1 *param_1,undefined8 param_2,int param_3,int *param_4,char param_5,
             longlong param_6)

{
  undefined1 *puVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  if ((param_5 != '\0') && (param_4[1] + -1 == param_3)) {
    *(undefined2 *)(param_1 + (longlong)param_4[1] + -1 + (ulonglong)(*param_4 == 0x2d)) = 0x30;
  }
  if (*param_4 == 0x2d) {
    *param_1 = 0x2d;
    param_1 = param_1 + 1;
  }
  iVar3 = param_4[1];
  if (iVar3 < 1) {
    if ((iVar3 == 0) && (**(char **)(param_4 + 2) == '0')) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if ((param_5 == '\0') || (!bVar2)) {
      lVar5 = -1;
      do {
        lVar4 = lVar5;
        lVar5 = lVar4 + 1;
      } while (param_1[lVar5] != '\0');
      FUN_180540530(param_1 + 1,param_1,lVar4 + 2);
    }
    *param_1 = 0x30;
    param_1 = param_1 + 1;
  }
  else {
    param_1 = param_1 + iVar3;
  }
  if (0 < param_3) {
    puVar1 = param_1 + 1;
    lVar5 = -1;
    do {
      lVar4 = lVar5;
      lVar5 = lVar4 + 1;
    } while (param_1[lVar5] != '\0');
    FUN_180540530(puVar1,param_1,lVar4 + 2);
    if (*(char *)(param_6 + 0x28) == '\0') {
      FUN_1805002a0(param_6);
    }
    *param_1 = *(undefined1 *)**(undefined8 **)(*(longlong *)(param_6 + 0x18) + 0xf8);
    if (param_4[1] < 0) {
      iVar3 = -param_4[1];
      if ((param_5 != '\0') || (iVar3 < param_3)) {
        param_3 = iVar3;
      }
      lVar5 = -1;
      do {
        lVar4 = lVar5;
        lVar5 = lVar4 + 1;
      } while (puVar1[lVar5] != '\0');
      FUN_180540530(puVar1 + param_3,puVar1,lVar4 + 2);
      FUN_180540170(puVar1,0x30,(longlong)param_3);
    }
  }
  return 0;
}



/* ===== 1805281ec FUN_1805281ec ===== */

void FUN_1805281ec(undefined8 *param_1,undefined1 *param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,int param_6,undefined1 param_7,undefined4 param_8,
                  undefined4 param_9,undefined8 param_10)

{
  char *pcVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  char *pcVar5;
  int iVar6;
  bool bVar7;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_18 = 0;
  uStack_10 = 0;
  uVar2 = FUN_18053a54c(*param_1,param_6,0,&local_18,param_4,param_5);
  bVar7 = (int)local_18 == 0x2d;
  lVar4 = param_3 - (ulonglong)bVar7;
  iVar6 = local_18._4_4_ + -1;
  if (param_3 == -1) {
    lVar4 = -1;
  }
  iVar3 = FUN_18053a43c(param_2 + bVar7,lVar4,param_6,&local_18,uVar2,param_9,param_10);
  if (iVar3 == 0) {
    iVar3 = local_18._4_4_ + -1;
    if ((iVar3 < -4) || (param_6 <= iVar3)) {
      FUN_180527de0(param_2,param_3,param_6,param_7,param_8,&local_18,1,param_10);
    }
    else {
      pcVar1 = param_2 + bVar7;
      if (iVar6 < iVar3) {
        do {
          pcVar5 = pcVar1;
          pcVar1 = pcVar5 + 1;
        } while (*pcVar5 != '\0');
        pcVar5[-1] = '\0';
      }
      FUN_18052809c(param_2,param_3,param_6,&local_18,1,param_10);
    }
  }
  else {
    *param_2 = 0;
  }
  return;
}



/* ===== 180528340 should_round_up ===== */

/* Library Function - Single Match
    bool __cdecl should_round_up(double const * __ptr64 const,unsigned __int64,short,enum
   __acrt_rounding_mode)
   
   Library: Visual Studio 2019 Release */

bool __cdecl
should_round_up(double *param_1,__uint64 param_2,short param_3,__acrt_rounding_mode param_4)

{
  double dVar1;
  ushort uVar2;
  int iVar3;
  byte bVar4;
  
  bVar4 = (byte)param_3;
  uVar2 = (ushort)(((ulonglong)*param_1 & param_2 & 0xfffffffffffff) >> (bVar4 & 0x3f));
  if (param_4 == 0) {
    return 7 < uVar2;
  }
  iVar3 = fegetround();
  if (iVar3 == 0) {
    dVar1 = *param_1;
    uVar2 = (ushort)(((ulonglong)dVar1 & param_2 & 0xfffffffffffff) >> (bVar4 & 0x3f));
    if (8 < uVar2) {
      return true;
    }
    if (7 < uVar2) {
      if (((1L << (bVar4 & 0x3f)) - 1U & (ulonglong)dVar1 & 0xfffffffffffff) != 0) {
        return true;
      }
      if (param_3 == 0x30) {
        bVar4 = ((ulonglong)dVar1 & 0x7ff0000000000000) != 0;
      }
      else {
        bVar4 = (byte)(((ulonglong)dVar1 >> 4 & param_2 & 0xffffffffffff) >> (bVar4 & 0x3f));
      }
      return (bool)(bVar4 & 1);
    }
  }
  else if (iVar3 == 0x200) {
    if ((uVar2 != 0) && (-1 < (longlong)*param_1)) {
      return true;
    }
  }
  else {
    if (iVar3 != 0x100) {
      return false;
    }
    if ((uVar2 != 0) && ((longlong)*param_1 < 0)) {
      return true;
    }
  }
  return false;
}



/* ===== 180528458 FUN_180528458 ===== */

undefined8
FUN_180528458(ulonglong *param_1,undefined1 *param_2,ulonglong param_3,longlong param_4,
             longlong param_5,int param_6,undefined4 param_7,ulonglong param_8,uint param_9,
             longlong param_10)

{
  ulonglong uVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 in_stack_ffffffffffffffe0;
  undefined4 uVar8;
  
  if (param_2 == (undefined1 *)0x0) {
    *(undefined1 *)(param_10 + 0x30) = 1;
    *(undefined4 *)(param_10 + 0x2c) = 0x16;
  }
  else {
    if (((param_3 != 0) && (param_4 != 0)) && (param_5 != 0)) {
      if ((param_6 == 0x41) || (param_6 - 0x45U < 3)) {
        uVar5 = 1;
      }
      else {
        uVar5 = 0;
      }
      if (((param_8 & 8) == 0) && (uVar1 = *param_1, ((uint)(uVar1 >> 0x34) & 0x7ff) == 0x7ff)) {
        uVar6 = 0xc;
        if ((uVar1 & 0xfffffffffffff) == 0) {
          lVar3 = 0;
        }
        else if (((longlong)uVar1 < 0) && ((uVar1 & 0xfffffffffffff) == 0x8000000000000)) {
          lVar3 = 0xc;
        }
        else {
          lVar3 = (-(ulonglong)((uVar1 & 0x8000000000000) != 0) & 0xfffffffffffffffc) + 8;
        }
        if (param_3 < -((longlong)uVar1 >> 0x3f) + 4U) {
          *param_2 = 0;
        }
        else {
          lVar7 = -1;
          if ((char)-((longlong)uVar1 >> 0x3f) != '\0') {
            *param_2 = 0x2d;
            param_2[1] = 0;
          }
          do {
            lVar7 = lVar7 + 1;
          } while ((&PTR_DAT_18057cd20)[(ulonglong)((uVar5 ^ 1) * 2) + lVar3][lVar7] != '\0');
          iVar2 = FUN_180526580();
          if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
          uVar6 = 0;
        }
        return uVar6;
      }
      uVar4 = (undefined4)(param_8 >> 4);
      param_9 = -(uint)((param_8 & 0x20) != 0) & param_9;
      uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffffe0 >> 0x20);
      if (param_6 == 0x41) {
LAB_1805286df:
        uVar6 = FUN_180527948(param_1,param_2,param_3,param_4,param_5,param_7,uVar5,
                              CONCAT44(uVar8,uVar4) & 0xffffffff00000001 | 2,param_9,param_10);
        return uVar6;
      }
      if (param_6 == 0x45) {
LAB_1805286a5:
        uVar6 = FUN_180527cdc(param_1,param_2,param_3,param_4,param_5,param_7,uVar5,
                              CONCAT44(uVar8,uVar4) & 0xffffffff00000001 | 2,param_9,param_10);
        return uVar6;
      }
      if (param_6 == 0x46) {
LAB_180528674:
        uVar6 = FUN_180527fc4(param_1,param_2,param_3,param_4,param_5,param_7,param_9,param_10);
        return uVar6;
      }
      if (param_6 != 0x47) {
        if (param_6 == 0x61) goto LAB_1805286df;
        if (param_6 == 0x65) goto LAB_1805286a5;
        if (param_6 == 0x66) goto LAB_180528674;
      }
      uVar6 = FUN_1805281ec(param_1,param_2,param_3,param_4,param_5,param_7,uVar5,
                            CONCAT44(uVar8,uVar4) & 0xffffffff00000001 | 2,param_9,param_10);
      return uVar6;
    }
    *(undefined1 *)(param_10 + 0x30) = 1;
    *(undefined4 *)(param_10 + 0x2c) = 0x16;
  }
  FUN_180527688(0,0,0,0,0,param_10);
  return 0x16;
}



/* ===== 180528740 FUN_180528740 ===== */

undefined4
FUN_180528740(int *param_1,undefined1 *param_2,ulonglong param_3,ushort param_4,longlong param_5)

{
  int iVar1;
  DWORD DVar2;
  undefined4 uVar3;
  ulonglong local_res10;
  ushort local_res20 [4];
  undefined8 in_stack_ffffffffffffffd0;
  undefined4 uVar4;
  
  uVar4 = (undefined4)((ulonglong)in_stack_ffffffffffffffd0 >> 0x20);
  uVar3 = 0;
  if ((param_2 == (undefined1 *)0x0) && (param_3 != 0)) {
    if (param_1 == (int *)0x0) {
      return 0;
    }
    *param_1 = 0;
    return 0;
  }
  if (param_1 != (int *)0x0) {
    *param_1 = -1;
  }
  local_res20[0] = param_4;
  if (param_3 < 0x80000000) {
    if (*(char *)(param_5 + 0x28) == '\0') {
      FUN_1805002a0(param_5);
    }
    iVar1 = *(int *)(*(longlong *)(param_5 + 0x18) + 0xc);
    if (iVar1 == 0xfde9) {
      local_res10 = 0;
      iVar1 = FUN_18053b7cc(param_2,local_res20[0],&local_res10,param_5);
      if (param_1 != (int *)0x0) {
        *param_1 = iVar1;
      }
      if (iVar1 < 5) {
        return 0;
      }
      if (*(char *)(param_5 + 0x30) != '\0') {
        uVar3 = *(undefined4 *)(param_5 + 0x2c);
      }
      return uVar3;
    }
    if (*(longlong *)(*(longlong *)(param_5 + 0x18) + 0x138) == 0) {
      if (0xff < local_res20[0]) {
        if ((param_2 != (undefined1 *)0x0) && (param_3 != 0)) {
          FUN_180540170(param_2,0,param_3);
        }
        goto LAB_180528822;
      }
      if (param_2 == (undefined1 *)0x0) {
LAB_18052884e:
        if (param_1 != (int *)0x0) {
          *param_1 = 1;
        }
        return 0;
      }
      if (param_3 != 0) {
        *param_2 = (char)local_res20[0];
        goto LAB_18052884e;
      }
    }
    else {
      local_res10 = local_res10 & 0xffffffff00000000;
      iVar1 = FUN_18052eef0(iVar1,0,local_res20,1,param_2,CONCAT44(uVar4,(int)param_3),0,
                            &local_res10);
      if (iVar1 != 0) {
        if ((int)local_res10 == 0) {
          if (param_1 == (int *)0x0) {
            return 0;
          }
          *param_1 = iVar1;
          return 0;
        }
LAB_180528822:
        *(undefined4 *)(param_5 + 0x2c) = 0x2a;
        *(undefined1 *)(param_5 + 0x30) = 1;
        return 0x2a;
      }
      DVar2 = GetLastError();
      if (DVar2 != 0x7a) goto LAB_180528822;
      if ((param_2 != (undefined1 *)0x0) && (param_3 != 0)) {
        FUN_180540170(param_2,0,param_3);
      }
    }
    uVar3 = 0x22;
  }
  else {
    uVar3 = 0x16;
  }
  *(undefined4 *)(param_5 + 0x2c) = uVar3;
  *(undefined1 *)(param_5 + 0x30) = 1;
  FUN_180527688(0,0,0,0,0,param_5);
  return uVar3;
}



/* ===== 1805288f0 FUN_1805288f0 ===== */

undefined4 FUN_1805288f0(void)

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
  uVar1 = FUN_180528740();
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



/* ===== 180528990 FUN_180528990 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_180528990(ushort *param_1,byte *param_2,ulonglong param_3,longlong param_4)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  
  if ((param_2 == (byte *)0x0) || (param_3 == 0)) {
    _DAT_180c9f950 = 0;
  }
  else {
    if (*param_2 != 0) {
      if (*(char *)(param_4 + 0x28) == '\0') {
        FUN_1805002a0(param_4);
      }
      plVar2 = *(longlong **)(param_4 + 0x18);
      iVar3 = *(int *)((longlong)plVar2 + 0xc);
      if (iVar3 == 0xfde9) {
        iVar3 = FUN_180528ee0(param_1,param_2,param_3,&DAT_180c9f950,param_4);
        if (iVar3 < 0) {
          return -1;
        }
        return iVar3;
      }
      if (plVar2[0x27] == 0) {
        if (param_1 != (ushort *)0x0) {
          *param_1 = (ushort)*param_2;
        }
        return 1;
      }
      if (*(short *)(*plVar2 + (ulonglong)*param_2 * 2) < 0) {
        iVar1 = (int)plVar2[1];
        if ((((1 < iVar1) && (iVar1 <= (int)param_3)) &&
            (iVar3 = FUN_18052ee60(iVar3,9,param_2,iVar1,param_1,param_1 != (ushort *)0x0),
            iVar3 != 0)) ||
           (((ulonglong)(longlong)*(int *)(*(longlong *)(param_4 + 0x18) + 8) <= param_3 &&
            (param_2[1] != 0)))) {
          return *(int *)(*(longlong *)(param_4 + 0x18) + 8);
        }
      }
      else {
        iVar3 = FUN_18052ee60(iVar3,9,param_2,1,param_1,param_1 != (ushort *)0x0);
        if (iVar3 != 0) {
          return 1;
        }
      }
      *(undefined1 *)(param_4 + 0x30) = 1;
      *(undefined4 *)(param_4 + 0x2c) = 0x2a;
      return -1;
    }
    if (param_1 != (ushort *)0x0) {
      *param_1 = 0;
    }
  }
  return 0;
}



/* ===== 180528b08 FUN_180528b08 ===== */

undefined4 FUN_180528b08(void)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined4 *in_R9;
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
  if (in_R9 == (undefined4 *)0x0) {
    if (DAT_180c9f7dc != 0) goto LAB_180528b53;
    local_30 = PTR_PTR_1809198b8._0_4_;
    uStack_2c = PTR_PTR_1809198b8._4_4_;
    uStack_28 = PTR_DAT_1809198c0._0_4_;
    uStack_24 = PTR_DAT_1809198c0._4_4_;
  }
  else {
    local_30 = *in_R9;
    uStack_2c = in_R9[1];
    uStack_28 = in_R9[2];
    uStack_24 = in_R9[3];
  }
  local_20 = '\x01';
LAB_180528b53:
  uVar1 = FUN_180528990();
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



/* ===== 180528bac FUN_180528bac ===== */

undefined4 FUN_180528bac(void)

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
  uVar1 = FUN_180528990();
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



/* ===== 180528c44 FUN_180528c44 ===== */

ulonglong FUN_180528c44(byte *param_1)

{
  byte bVar1;
  ulonglong uVar2;
  
  bVar1 = *param_1;
  if (-1 < (char)bVar1) {
    return (ulonglong)(bVar1 != 0);
  }
  if ((bVar1 & 0xe0) == 0xc0) {
    return 2;
  }
  if ((bVar1 & 0xf0) == 0xe0) {
    return 3;
  }
  uVar2 = 0xffffffff;
  if ((bVar1 & 0xf8) == 0xf0) {
    uVar2 = 4;
  }
  return uVar2;
}



/* ===== 180528c7c FUN_180528c7c ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_180528c7c(ulonglong param_1,byte *param_2,ulonglong param_3,uint *param_4,
                       undefined8 param_5)

{
  byte bVar1;
  uint uVar2;
  ulonglong uVar3;
  uint *puVar4;
  byte *pbVar5;
  byte bVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint *puVar10;
  undefined1 auStack_78 [24];
  uint auStack_60 [6];
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_78;
  puVar4 = (uint *)&DAT_180c9f958;
  if (param_4 != (uint *)0x0) {
    puVar4 = param_4;
  }
  pbVar5 = &DAT_18058b643;
  uVar3 = 1;
  if (param_2 != (byte *)0x0) {
    pbVar5 = param_2;
    uVar3 = param_3;
  }
  puVar10 = (uint *)(-(ulonglong)(param_2 != (byte *)0x0) & param_1);
  if (uVar3 == 0) {
LAB_180528cde:
    uVar3 = 0xfffffffffffffffe;
  }
  else {
    if (*(short *)((longlong)puVar4 + 6) == 0) {
      uVar2 = FUN_180528c44(pbVar5);
      uVar7 = (ulonglong)(int)uVar2;
      bVar1 = *pbVar5;
      pbVar5 = pbVar5 + 1;
      if (uVar2 < 2) {
        if (puVar10 != (uint *)0x0) {
          *puVar10 = (uint)bVar1;
        }
        return uVar7;
      }
      if (uVar2 - 2 < 3) {
        bVar6 = (byte)uVar2;
        uVar2 = (1 << (7 - bVar6 & 0x1f)) - 1U & (uint)bVar1;
LAB_180528d69:
        uVar9 = (ulonglong)bVar6;
        uVar8 = uVar9;
        if (uVar3 <= uVar9) {
          uVar8 = uVar3;
        }
        while ((ulonglong)((longlong)pbVar5 - (longlong)param_2) < uVar8) {
          bVar1 = *pbVar5;
          pbVar5 = pbVar5 + 1;
          if ((bVar1 & 0xc0) != 0x80) goto LAB_180528e12;
          uVar2 = bVar1 & 0x3f | uVar2 << 6;
        }
        if (uVar8 < uVar9) {
          *(ushort *)(puVar4 + 1) = (ushort)uVar7 & 0xff;
          *(ushort *)((longlong)puVar4 + 6) = (ushort)(byte)(bVar6 - (char)uVar8);
          *puVar4 = uVar2;
          goto LAB_180528cde;
        }
        if ((0x7ff < uVar2 - 0xd800) && (uVar2 < 0x110000)) {
          auStack_60[2] = 0x80;
          auStack_60[3] = 0x800;
          auStack_60[4] = 0x10000;
          if (auStack_60[uVar7 & 0xff] <= uVar2) {
            if (puVar10 != (uint *)0x0) {
              *puVar10 = uVar2;
            }
            uVar3 = FUN_18053b870(-(ulonglong)(uVar2 != 0) & uVar9,puVar4);
            return uVar3;
          }
        }
      }
    }
    else {
      bVar1 = (byte)puVar4[1];
      uVar7 = (ulonglong)bVar1;
      uVar2 = *puVar4;
      bVar6 = *(byte *)((longlong)puVar4 + 6);
      if ((((byte)(bVar1 - 2) < 3) && (bVar6 != 0)) && (bVar6 < bVar1)) goto LAB_180528d69;
    }
LAB_180528e12:
    uVar3 = FUN_18053b878(puVar4,param_5);
  }
  return uVar3;
}



/* ===== 180528e3c FUN_180528e3c ===== */

undefined8 FUN_180528e3c(undefined8 param_1,uint param_2,int *param_3,undefined8 param_4)

{
  ushort uVar1;
  undefined8 uVar2;
  int *piVar3;
  undefined8 local_res18 [2];
  
  piVar3 = &DAT_180c9f960;
  if (param_3 != (int *)0x0) {
    piVar3 = param_3;
  }
  uVar1 = (short)param_2 + 0x2400;
  if (*piVar3 == 0) {
    if (0x3ff < uVar1) {
      if ((ushort)((short)param_2 + 0x2800U) < 0x400) {
        *piVar3 = (param_2 & 0x27ff) * 0x400 + 0x10000;
        return 0;
      }
      uVar2 = FUN_18053b7cc(param_1,param_2 & 0xffff,piVar3);
      return uVar2;
    }
  }
  else if (uVar1 < 0x400) {
    local_res18[0] = 0;
    uVar2 = FUN_18053b7cc(param_1,(param_2 & 0x23ff) + *piVar3,local_res18);
    uVar2 = FUN_18053b870(uVar2,piVar3);
    return uVar2;
  }
  uVar2 = FUN_18053b878(piVar3,param_4);
  return uVar2;
}



/* ===== 180528ee0 FUN_180528ee0 ===== */

void FUN_180528ee0(undefined2 *param_1)

{
  ulonglong uVar1;
  uint local_18 [4];
  
  local_18[0] = 0;
  uVar1 = FUN_180528c7c(local_18);
  if (uVar1 < 5) {
    if (0xffff < local_18[0]) {
      local_18[0] = 0xfffd;
    }
    if (param_1 != (undefined2 *)0x0) {
      *param_1 = (short)local_18[0];
    }
  }
  return;
}



/* ===== 180528f28 FUN_180528f28 ===== */

longlong FUN_180528f28(ushort *param_1,undefined8 *param_2,ulonglong param_3,undefined8 param_4,
                      longlong param_5)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ushort *puVar4;
  char *pcVar5;
  char cVar6;
  uint local_res8 [2];
  
  pcVar5 = (char *)*param_2;
  puVar4 = param_1;
  if (param_1 == (ushort *)0x0) {
    lVar1 = 0;
    while( true ) {
      if (*pcVar5 == '\0') {
        cVar6 = '\x01';
      }
      else if (pcVar5[1] == '\0') {
        cVar6 = '\x02';
      }
      else {
        cVar6 = (pcVar5[2] != '\0') + '\x03';
      }
      lVar2 = FUN_180528c7c(0,pcVar5,cVar6,param_4,param_5);
      if (lVar2 == -1) {
        *(undefined1 *)(param_5 + 0x30) = 1;
        *(undefined4 *)(param_5 + 0x2c) = 0x2a;
        return -1;
      }
      if (lVar2 == 0) break;
      pcVar5 = pcVar5 + lVar2;
      lVar3 = lVar1 + 1;
      if (lVar2 != 4) {
        lVar3 = lVar1;
      }
      lVar1 = lVar3 + 1;
    }
  }
  else {
    for (; param_3 != 0; param_3 = param_3 - 1) {
      if (*pcVar5 == '\0') {
        cVar6 = '\x01';
      }
      else if (pcVar5[1] == '\0') {
        cVar6 = '\x02';
      }
      else {
        cVar6 = (pcVar5[2] != '\0') + '\x03';
      }
      local_res8[0] = 0;
      lVar1 = FUN_180528c7c(local_res8,pcVar5,cVar6,param_4,param_5);
      if (lVar1 == -1) {
        *param_2 = pcVar5;
        *(undefined1 *)(param_5 + 0x30) = 1;
        *(undefined4 *)(param_5 + 0x2c) = 0x2a;
        return -1;
      }
      if (lVar1 == 0) {
        pcVar5 = (char *)0x0;
        *puVar4 = 0;
        break;
      }
      if (0xffff < local_res8[0]) {
        if (param_3 < 2) break;
        param_3 = param_3 - 1;
        *puVar4 = (ushort)(local_res8[0] - 0x10000 >> 10) | 0xd800;
        puVar4 = puVar4 + 1;
        local_res8[0] = (uint)((ushort)(local_res8[0] - 0x10000) & 0x3ff | 0xdc00);
      }
      *puVar4 = (ushort)local_res8[0];
      pcVar5 = pcVar5 + lVar1;
      puVar4 = puVar4 + 1;
    }
    *param_2 = pcVar5;
    lVar1 = (longlong)puVar4 - (longlong)param_1 >> 1;
  }
  return lVar1;
}



/* ===== 1805290e0 FUN_1805290e0 ===== */

bool FUN_1805290e0(void)

{
  return DAT_180c9f968 == (DAT_180919500 | 1);
}



/* ===== 1805290f8 FUN_1805290f8 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined2 FUN_1805290f8(undefined2 param_1,FILE *param_2,undefined8 param_3)

{
  char **ppcVar1;
  undefined2 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  undefined *puVar7;
  char *pcVar8;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  int local_48;
  char local_44 [12];
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStack_78;
  if ((*(uint *)((longlong)&param_2->_base + 4) >> 0xc & 1) == 0) {
    iVar3 = _fileno(param_2);
    puVar7 = &DAT_1809198d0;
    if ((iVar3 == -1) || (iVar3 = _fileno(param_2), iVar3 == -2)) {
      puVar6 = &DAT_1809198d0;
    }
    else {
      iVar3 = _fileno(param_2);
      uVar4 = _fileno(param_2);
      puVar6 = (undefined *)
               ((&DAT_180c9f990)[(longlong)iVar3 >> 6] + (ulonglong)(uVar4 & 0x3f) * 0x48);
    }
    if (1 < (byte)(puVar6[0x39] - 1)) {
      iVar3 = _fileno(param_2);
      if ((iVar3 != -1) && (iVar3 = _fileno(param_2), iVar3 != -2)) {
        iVar3 = _fileno(param_2);
        uVar4 = _fileno(param_2);
        puVar7 = (undefined *)
                 ((ulonglong)(uVar4 & 0x3f) * 0x48 + (&DAT_180c9f990)[(longlong)iVar3 >> 6]);
      }
      iVar3 = 0;
      if ((char)puVar7[0x38] < '\0') {
        local_48 = 0;
        local_58 = param_3;
        iVar5 = FUN_180528740(&local_48,local_44,5,param_1);
        if (iVar5 != 0) {
          return 0xffff;
        }
        if (local_48 < 1) {
          return param_1;
        }
        pcVar8 = local_44;
        do {
          iVar5 = FUN_18050ff4c((int)*pcVar8,param_2,param_3);
          if (iVar5 == -1) {
            return 0xffff;
          }
          iVar3 = iVar3 + 1;
          pcVar8 = pcVar8 + 1;
        } while (iVar3 < local_48);
        return param_1;
      }
    }
    ppcVar1 = &param_2->_base;
    *(int *)ppcVar1 = *(int *)ppcVar1 + -2;
    if (-1 < *(int *)ppcVar1) {
      *(undefined2 *)param_2->_ptr = param_1;
      param_2->_ptr = param_2->_ptr + 2;
      return param_1;
    }
  }
  else {
    ppcVar1 = &param_2->_base;
    *(int *)ppcVar1 = *(int *)ppcVar1 + -2;
    if (-1 < *(int *)ppcVar1) {
      *(undefined2 *)param_2->_ptr = param_1;
      param_2->_ptr = param_2->_ptr + 2;
      return param_1;
    }
  }
  uVar2 = FUN_18052a8fc(param_1,param_2,param_3);
  return uVar2;
}



/* ===== 18052928c FUN_18052928c ===== */

bool FUN_18052928c(FILE *param_1)

{
  int iVar1;
  FILE *pFVar2;
  bool bVar3;
  
  pFVar2 = (FILE *)__acrt_iob_func(2);
  if (param_1 == pFVar2) {
    bVar3 = true;
  }
  else {
    pFVar2 = (FILE *)__acrt_iob_func(1);
    if (param_1 == pFVar2) {
      iVar1 = _fileno(param_1);
      iVar1 = FUN_18053b88c(iVar1);
      bVar3 = iVar1 != 0;
    }
    else {
      bVar3 = false;
    }
  }
  return bVar3;
}



/* ===== 1805292d8 FUN_1805292d8 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1805292d8(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  
  cVar1 = FUN_18052928c();
  if (cVar1 != '\0') {
    plVar2 = (longlong *)__acrt_iob_func(1);
    if (param_1 == plVar2) {
      plVar2 = &DAT_180c9f970;
    }
    else {
      plVar2 = (longlong *)__acrt_iob_func(2);
      if (param_1 != plVar2) {
        return 0;
      }
      plVar2 = &DAT_180c9f978;
    }
    _DAT_180c9f558 = _DAT_180c9f558 + 1;
    if ((*(uint *)((longlong)param_1 + 0x14) & 0x4c0) == 0) {
      LOCK();
      *(uint *)((longlong)param_1 + 0x14) = *(uint *)((longlong)param_1 + 0x14) | 0x282;
      UNLOCK();
      if (*plVar2 == 0) {
        lVar3 = _malloc_base(0x1000);
        *plVar2 = lVar3;
        FUN_1805277b0(0);
      }
      if (*plVar2 == 0) {
        *(undefined4 *)(param_1 + 2) = 2;
        param_1[1] = (longlong)param_1 + 0x1c;
        *param_1 = (longlong)param_1 + 0x1c;
        *(undefined4 *)(param_1 + 4) = 2;
      }
      else {
        param_1[1] = *plVar2;
        *param_1 = *plVar2;
        *(undefined4 *)(param_1 + 2) = 0x1000;
        *(undefined4 *)(param_1 + 4) = 0x1000;
      }
      return 1;
    }
  }
  return 0;
}



/* ===== 1805293a0 FUN_1805293a0 ===== */

void FUN_1805293a0(char param_1,undefined8 *param_2,undefined8 param_3)

{
  if ((param_1 != '\0') && ((*(uint *)((longlong)param_2 + 0x14) >> 9 & 1) != 0)) {
    FUN_180510248(param_2,param_3);
    LOCK();
    *(uint *)((longlong)param_2 + 0x14) = *(uint *)((longlong)param_2 + 0x14) & 0xfffffd7f;
    UNLOCK();
    *(undefined4 *)(param_2 + 4) = 0;
    param_2[1] = 0;
    *param_2 = 0;
  }
  return;
}



/* ===== 1805293e0 operator()<> ===== */

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



/* ===== 180529420 operator()<> ===== */

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



/* ===== 180529460 operator()<> ===== */

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



/* ===== 1805294a8 operator()<> ===== */

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
    if ((iVar1 == 1) && (piVar2 != (int *)&DAT_180919bf0)) {
      FUN_1805277b0();
    }
  }
  __acrt_unlock(*param_4);
  return;
}



/* ===== 180529508 construct_ptd_array ===== */

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
  undefined8 *local_28;
  __acrt_ptd **local_20;
  __acrt_ptd **local_18;
  undefined8 **local_10;
  
  local_20 = &local_30;
  local_res18[0] = 5;
  local_res20[0] = 5;
  local_18 = &local_30;
  local_10 = &local_28;
  local_38 = 4;
  local_34 = 4;
  local_28 = &DAT_180c9f988;
  *(undefined4 *)(param_1 + 0x28) = 1;
  *(undefined **)param_1 = &DAT_18057c880;
  *(undefined4 *)(param_1 + 0x3a8) = 1;
  *(undefined **)(param_1 + 0x88) = &DAT_180919bf0;
  *(undefined2 *)(param_1 + 0xbc) = 0x43;
  *(undefined2 *)(param_1 + 0x1c2) = 0x43;
  *(undefined8 *)(param_1 + 0x3a0) = 0;
  local_30 = param_1;
  operator()<>(local_res10,local_res20,&local_20,local_res18);
  operator()<>(local_res10,&local_34,&local_18,&local_38);
  return;
}



/* ===== 1805295d8 FUN_1805295d8 ===== */

void FUN_1805295d8(__acrt_ptd *param_1)

{
  if (param_1 != (__acrt_ptd *)0x0) {
    destroy_ptd_array(param_1);
    FUN_1805277b0(param_1);
  }
  return;
}



/* ===== 1805295f8 destroy_ptd_array ===== */

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
  if (*(undefined **)param_1 != &DAT_18057c880) {
    FUN_1805277b0(*(undefined **)param_1);
  }
  FUN_1805277b0(*(undefined8 *)(local_20 + 0x70));
  FUN_1805277b0(*(undefined8 *)(local_20 + 0x58));
  FUN_1805277b0(*(undefined8 *)(local_20 + 0x60));
  FUN_1805277b0(*(undefined8 *)(local_20 + 0x68));
  FUN_1805277b0(*(undefined8 *)(local_20 + 0x48));
  FUN_1805277b0(*(undefined8 *)(local_20 + 0x50));
  FUN_1805277b0(*(undefined8 *)(local_20 + 0x78));
  FUN_1805277b0(*(undefined8 *)(local_20 + 0x80));
  FUN_1805277b0(*(undefined8 *)(local_20 + 0x3c0));
  operator()<>(local_res10,local_res20,&local_18,local_res18);
  operator()<>(local_res10,&local_24,&local_10,&local_28);
  return;
}



/* ===== 1805296f0 FUN_1805296f0 ===== */

__acrt_ptd * FUN_1805296f0(void)

{
  DWORD dwErrCode;
  BOOL BVar1;
  __acrt_ptd *lpFlsData;
  
  dwErrCode = GetLastError();
  BVar1 = FlsSetValue(DAT_180919750,(PVOID)0xffffffffffffffff);
  if (BVar1 != 0) {
    lpFlsData = (__acrt_ptd *)_calloc_base(1);
    if (lpFlsData != (__acrt_ptd *)0x0) {
      BVar1 = FlsSetValue(DAT_180919750,lpFlsData);
      if (BVar1 == 0) {
        FlsSetValue(DAT_180919750,(PVOID)0x0);
        FUN_1805277b0(lpFlsData);
        lpFlsData = (__acrt_ptd *)0x0;
      }
      else {
        construct_ptd_array(lpFlsData);
        FUN_1805277b0(0);
      }
      SetLastError(dwErrCode);
      return lpFlsData;
    }
    FlsSetValue(DAT_180919750,(PVOID)0x0);
    FUN_1805277b0(0);
  }
  SetLastError(dwErrCode);
  return (__acrt_ptd *)0x0;
}



/* ===== 1805297a8 replace_current_thread_locale_nolock ===== */

/* Library Function - Single Match
    void __cdecl replace_current_thread_locale_nolock(struct __acrt_ptd * __ptr64 const,struct
   __crt_locale_data * __ptr64 const)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl replace_current_thread_locale_nolock(__acrt_ptd *param_1,__crt_locale_data *param_2)

{
  undefined **ppuVar1;
  
  if (*(longlong *)(param_1 + 0x90) != 0) {
    __acrt_release_locale_ref();
    ppuVar1 = *(undefined ***)(param_1 + 0x90);
    if (((ppuVar1 != DAT_180c9f988) && (ppuVar1 != &PTR_DAT_180919760)) &&
       (*(int *)(ppuVar1 + 2) == 0)) {
      __acrt_free_locale();
    }
  }
  *(__crt_locale_data **)(param_1 + 0x90) = param_2;
  if (param_2 != (__crt_locale_data *)0x0) {
    __acrt_add_locale_ref(param_2);
  }
  return;
}



/* ===== 180529810 FUN_180529810 ===== */

void FUN_180529810(void)

{
  __acrt_ptd *p_Var1;
  
  if (DAT_180919750 == 0xffffffff) {
    p_Var1 = (__acrt_ptd *)0x0;
  }
  else {
    p_Var1 = FlsGetValue(DAT_180919750);
  }
  if (p_Var1 != (__acrt_ptd *)0x0) {
    FlsSetValue(DAT_180919750,(PVOID)0x0);
    destroy_ptd_array(p_Var1);
    FUN_1805277b0(p_Var1);
  }
  return;
}



/* ===== 180529860 FUN_180529860 ===== */

void FUN_180529860(void)

{
  longlong lVar1;
  
  lVar1 = FUN_1805298c0();
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return;
}



/* ===== 18052987c FUN_18052987c ===== */

void FUN_18052987c(void)

{
  PVOID pvVar1;
  longlong lVar2;
  
  if (DAT_180919750 == 0xffffffff) {
    pvVar1 = (PVOID)0x0;
  }
  else {
    pvVar1 = FlsGetValue(DAT_180919750);
  }
  if (pvVar1 == (PVOID)0xffffffffffffffff) {
LAB_1805298b8:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (pvVar1 == (PVOID)0x0) {
    lVar2 = FUN_1805296f0();
    if (lVar2 == 0) goto LAB_1805298b8;
  }
  return;
}



/* ===== 1805298c0 FUN_1805298c0 ===== */

PVOID FUN_1805298c0(void)

{
  DWORD dwErrCode;
  PVOID pvVar1;
  PVOID pvVar2;
  
  pvVar2 = (PVOID)0x0;
  if (DAT_180c9f980 == '\0') {
    dwErrCode = GetLastError();
    if (DAT_180919750 == 0xffffffff) {
      pvVar1 = (PVOID)0x0;
    }
    else {
      pvVar1 = FlsGetValue(DAT_180919750);
    }
    if (pvVar1 != (PVOID)0xffffffffffffffff) {
      if (pvVar1 == (PVOID)0x0) {
        pvVar1 = (PVOID)FUN_1805296f0();
      }
      pvVar2 = pvVar1;
    }
    SetLastError(dwErrCode);
  }
  else {
    if (DAT_180919750 == 0xffffffff) {
      pvVar1 = (PVOID)0x0;
    }
    else {
      pvVar1 = (PVOID)FUN_18052c808();
    }
    if (pvVar1 != (PVOID)0xffffffffffffffff) {
      if (pvVar1 == (PVOID)0x0) {
        pvVar1 = (PVOID)FUN_1805296f0();
      }
      pvVar2 = pvVar1;
    }
  }
  return pvVar2;
}



/* ===== 180529950 FUN_180529950 ===== */

PVOID FUN_180529950(undefined8 param_1,longlong param_2)

{
  PVOID pvVar1;
  PVOID pvVar2;
  
  pvVar2 = (PVOID)0x0;
  if (DAT_180919750 == 0xffffffff) {
    pvVar1 = (PVOID)0x0;
  }
  else {
    pvVar1 = FlsGetValue(DAT_180919750);
  }
  if (pvVar1 != (PVOID)0xffffffffffffffff) {
    if ((pvVar1 == (PVOID)0x0) && (pvVar1 = (PVOID)FUN_1805296f0(), pvVar1 == (PVOID)0x0)) {
      return (PVOID)0x0;
    }
    pvVar2 = (PVOID)(param_2 * 0x3c8 + (longlong)pvVar1);
  }
  return pvVar2;
}



/* ===== 1805299ac FUN_1805299ac ===== */

undefined4 FUN_1805299ac(void)

{
  longlong lVar1;
  
  DAT_180c9f980 = FUN_18052cf70();
  DAT_180919750 = FlsAlloc(FUN_1805295d8);
  if (DAT_180919750 != 0xffffffff) {
    lVar1 = FUN_1805298c0();
    if (lVar1 != 0) {
      return 1;
    }
    FUN_1805299f0(0);
  }
  return 0;
}



/* ===== 1805299f0 FUN_1805299f0 ===== */

undefined4 FUN_1805299f0(void)

{
  if (DAT_180919750 != 0xffffffff) {
    FlsFree(DAT_180919750);
    DAT_180919750 = 0xffffffff;
  }
  return 1;
}



/* ===== 180529a14 FUN_180529a14 ===== */

void FUN_180529a14(void)

{
  longlong lVar1;
  DWORD DVar2;
  ulonglong uVar3;
  byte *pbVar4;
  longlong lVar5;
  uint *puVar6;
  uint uVar7;
  ulonglong uVar8;
  _STARTUPINFOW local_78;
  
  FUN_180540170(&local_78,0,0x68);
  GetStartupInfoW(&local_78);
  if ((local_78.cbReserved2 != 0) && ((uint *)local_78.lpReserved2 != (uint *)0x0)) {
    puVar6 = (uint *)((longlong)local_78.lpReserved2 + 4);
    pbVar4 = (byte *)((longlong)(int)*(uint *)local_78.lpReserved2 + (longlong)puVar6);
    uVar7 = 0x2000;
    if ((int)*(uint *)local_78.lpReserved2 < 0x2000) {
      uVar7 = *(uint *)local_78.lpReserved2;
    }
    __acrt_lowio_ensure_fh_exists(uVar7);
    if ((int)DAT_180c9fd90 < (int)uVar7) {
      uVar7 = DAT_180c9fd90;
    }
    uVar8 = (ulonglong)uVar7;
    if (uVar7 != 0) {
      lVar5 = 0;
      do {
        if (((*(longlong *)pbVar4 != -1) && (*(longlong *)pbVar4 != -2)) && ((*puVar6 & 1) != 0)) {
          if ((*puVar6 & 8) == 0) {
            DVar2 = GetFileType(*(HANDLE *)pbVar4);
            if (DVar2 == 0) goto LAB_180529ae3;
          }
          uVar3 = (ulonglong)((uint)lVar5 & 0x3f);
          lVar1 = (&DAT_180c9f990)[lVar5 >> 6];
          *(undefined8 *)(lVar1 + 0x28 + uVar3 * 0x48) = *(undefined8 *)pbVar4;
          *(byte *)(lVar1 + 0x38 + uVar3 * 0x48) = (byte)*puVar6;
        }
LAB_180529ae3:
        lVar5 = lVar5 + 1;
        puVar6 = (uint *)((longlong)puVar6 + 1);
        pbVar4 = pbVar4 + 8;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
  }
  return;
}



/* ===== 180529b14 FUN_180529b14 ===== */

void FUN_180529b14(void)

{
  byte *pbVar1;
  longlong lVar2;
  DWORD DVar3;
  HANDLE hFile;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar5 = 0;
  lVar6 = 0;
  do {
    uVar4 = (ulonglong)(uVar5 & 0x3f);
    lVar2 = (&DAT_180c9f990)[(longlong)(int)uVar5 >> 6];
    if (*(longlong *)(lVar2 + 0x28 + uVar4 * 0x48) + 2U < 2) {
      *(undefined1 *)(lVar2 + 0x38 + uVar4 * 0x48) = 0x81;
      if (uVar5 == 0) {
        DVar3 = 0xfffffff6;
      }
      else if (uVar5 == 1) {
        DVar3 = 0xfffffff5;
      }
      else {
        DVar3 = 0xfffffff4;
      }
      hFile = GetStdHandle(DVar3);
      if (1 < (longlong)hFile + 1U) {
        DVar3 = GetFileType(hFile);
        if (DVar3 != 0) {
          *(HANDLE *)(lVar2 + 0x28 + uVar4 * 0x48) = hFile;
          if ((DVar3 & 0xff) == 2) {
            pbVar1 = (byte *)(lVar2 + 0x38 + uVar4 * 0x48);
            *pbVar1 = *pbVar1 | 0x40;
          }
          else if ((DVar3 & 0xff) == 3) {
            pbVar1 = (byte *)(lVar2 + 0x38 + uVar4 * 0x48);
            *pbVar1 = *pbVar1 | 8;
          }
          goto LAB_180529bf2;
        }
      }
      pbVar1 = (byte *)(lVar2 + 0x38 + uVar4 * 0x48);
      *pbVar1 = *pbVar1 | 0x40;
      *(undefined8 *)(lVar2 + 0x28 + uVar4 * 0x48) = 0xfffffffffffffffe;
      if (DAT_180c9f550 != 0) {
        *(undefined4 *)(*(longlong *)(lVar6 + DAT_180c9f550) + 0x18) = 0xfffffffe;
      }
    }
    else {
      pbVar1 = (byte *)(lVar2 + 0x38 + uVar4 * 0x48);
      *pbVar1 = *pbVar1 | 0x80;
    }
LAB_180529bf2:
    uVar5 = uVar5 + 1;
    lVar6 = lVar6 + 8;
    if (uVar5 == 3) {
      return;
    }
  } while( true );
}



/* ===== 180529c1c __acrt_initialize_lowio ===== */

/* Library Function - Single Match
    __acrt_initialize_lowio
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

bool __acrt_initialize_lowio(void)

{
  int iVar1;
  
  __acrt_lock(7);
  iVar1 = __acrt_lowio_ensure_fh_exists(0);
  if (iVar1 == 0) {
    FUN_180529a14();
    FUN_180529b14();
  }
  __acrt_unlock(7);
  return iVar1 == 0;
}



/* ===== 180529c58 __acrt_uninitialize_lowio ===== */

/* Library Function - Single Match
    __acrt_uninitialize_lowio
   
   Library: Visual Studio 2019 Release */

undefined1 __acrt_uninitialize_lowio(void)

{
  ulonglong uVar1;
  
  uVar1 = 0;
  do {
    if (*(longlong *)((longlong)&DAT_180c9f990 + uVar1) != 0) {
      __acrt_lowio_destroy_handle_array();
      *(undefined8 *)((longlong)&DAT_180c9f990 + uVar1) = 0;
    }
    uVar1 = uVar1 + 8;
  } while (uVar1 < 0x400);
  return 1;
}



/* ===== 180529d80 FUN_180529d80 ===== */

float FUN_180529d80(int param_1)

{
  undefined4 *puVar1;
  float fVar2;
  float fVar3;
  
  if (param_1 == 0) {
    fVar2 = DAT_1808ac34c;
  }
  else {
    fVar2 = DAT_1808acda0;
  }
  fVar3 = DAT_1808ac34c / 0.0;
  puVar1 = (undefined4 *)FUN_18051bfb0();
  *puVar1 = 0x22;
  return fVar3 * fVar2;
}



/* ===== 180529de0 FUN_180529de0 ===== */

float FUN_180529de0(float param_1)

{
  undefined4 *puVar1;
  
  if (!NAN(param_1)) {
    puVar1 = (undefined4 *)FUN_18051bfb0();
    *puVar1 = 0x21;
  }
  return (param_1 - param_1) / (param_1 - param_1);
}



/* ===== 180529e20 FUN_180529e20 ===== */

float FUN_180529e20(int param_1)

{
  undefined4 *puVar1;
  float fVar2;
  
  if (param_1 == 0) {
    fVar2 = DAT_18057d474;
  }
  else {
    fVar2 = DAT_18057d478;
  }
  fVar2 = fVar2 * DAT_18057d474;
  puVar1 = (undefined4 *)FUN_18051bfb0();
  *puVar1 = 0x22;
  return fVar2;
}



/* ===== 180529e70 FUN_180529e70 ===== */

undefined4 FUN_180529e70(int param_1)

{
  if (param_1 == 0) {
    return 0;
  }
  return DAT_1808acd10;
}



/* ===== 180529e90 FUN_180529e90 ===== */

/* WARNING: Removing unreachable block (ram,0x000180529f10) */
/* WARNING: Removing unreachable block (ram,0x000180529f02) */
/* WARNING: Removing unreachable block (ram,0x000180529ea7) */

undefined8 FUN_180529e90(void)

{
  longlong lVar1;
  int *piVar2;
  undefined8 uVar3;
  byte in_XCR0;
  
  DAT_180c9fd94 = 0;
  DAT_180c9fd98 = 0;
  lVar1 = cpuid_Version_info(1);
  if ((*(uint *)(lVar1 + 0xc) & 0x18001000) == 0x18001000) {
    uVar3 = xinuse(0);
    if ((in_XCR0 & (byte)uVar3 & 6) == 6) {
      DAT_180c9fd94 = 1;
      DAT_180c9fd98 = 1;
    }
    else {
      DAT_180c9fd94 = 0;
    }
  }
  if ((DAT_180c9fd94 != 0) && (piVar2 = (int *)cpuid_basic_info(0), 6 < *piVar2)) {
    lVar1 = cpuid_Extended_Feature_Enumeration_info(7);
    if ((*(uint *)(lVar1 + 4) & 0x20) != 0) {
      DAT_180c9fd98 = 3;
      DAT_180c9fd94 = 3;
      return 0;
    }
  }
  return 0;
}



/* ===== 180529f44 iswctype ===== */

/* Library Function - Single Match
    iswctype
   
   Library: Visual Studio 2019 Release */

int __cdecl iswctype(wint_t _C,wctype_t _Type)

{
  uint uVar1;
  BOOL BVar2;
  WORD local_res8 [4];
  WCHAR local_res18 [8];
  
  if (_C == 0xffff) {
LAB_180529fa3:
    uVar1 = 0;
  }
  else {
    if (_C < 0x100) {
      local_res8[0] = *(WORD *)(PTR_DAT_180919748 + (ulonglong)_C * 2);
    }
    else {
      local_res8[0] = 0;
      local_res18[0] = _C;
      BVar2 = GetStringTypeW(1,local_res18,1,local_res8);
      if (BVar2 == 0) goto LAB_180529fa3;
    }
    uVar1 = (uint)(local_res8[0] & _Type);
  }
  return uVar1;
}



/* ===== 180529fb0 _isctype_l ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    _isctype_l
   
   Library: Visual Studio 2019 Release */

int __cdecl _isctype_l(int _C,int _Type,_locale_t _Locale)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [32];
  undefined4 *local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined1 local_48;
  undefined1 local_47;
  undefined1 local_46;
  longlong local_40;
  longlong *local_38 [2];
  char local_28;
  undefined4 local_20;
  undefined2 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_88;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_40,(__crt_locale_pointers *)_Locale);
  if (_C + 1U < 0x101) {
    local_20._0_2_ = *(ushort *)(*local_38[0] + (longlong)_C * 2);
  }
  else {
    if (*(short *)(*local_38[0] + (ulonglong)(_C >> 8 & 0xff) * 2) < 0) {
      uVar2 = 2;
      local_46 = 0;
      local_48 = (char)((uint)_C >> 8);
      local_47 = (char)_C;
    }
    else {
      uVar2 = 1;
      local_47 = 0;
      local_48 = (char)_C;
    }
    local_58 = 1;
    local_20 = 0;
    local_1c = 0;
    local_60 = *(undefined4 *)((longlong)local_38[0] + 0xc);
    local_68 = &local_20;
    iVar1 = FUN_180534e78(local_38,1,&local_48,uVar2);
    if (iVar1 == 0) {
      if (local_28 != '\0') {
        *(uint *)(local_40 + 0x3a8) = *(uint *)(local_40 + 0x3a8) & 0xfffffffd;
      }
      return 0;
    }
  }
  if (local_28 != '\0') {
    *(uint *)(local_40 + 0x3a8) = *(uint *)(local_40 + 0x3a8) & 0xfffffffd;
  }
  return (uint)(ushort)local_20 & _Type;
}



/* ===== 18052a0c0 _calloc_base ===== */

/* Library Function - Single Match
    _calloc_base
   
   Library: Visual Studio 2019 Release */

LPVOID _calloc_base(ulonglong param_1,ulonglong param_2)

{
  int iVar1;
  LPVOID pvVar2;
  undefined4 *puVar3;
  SIZE_T dwBytes;
  
  if ((param_1 == 0) || (param_2 <= 0xffffffffffffffe0 / param_1)) {
    dwBytes = param_1 * param_2;
    if (dwBytes == 0) {
      dwBytes = 1;
    }
    do {
      pvVar2 = HeapAlloc(DAT_180c9ffc8,8,dwBytes);
      if (pvVar2 != (LPVOID)0x0) {
        return pvVar2;
      }
      iVar1 = FUN_18053a330();
    } while ((iVar1 != 0) && (iVar1 = FUN_180523cb0(dwBytes), iVar1 != 0));
  }
  puVar3 = (undefined4 *)FUN_18051bfb0();
  *puVar3 = 0xc;
  return (LPVOID)0x0;
}



/* ===== 18052a138 FUN_18052a138 ===== */

ulonglong FUN_18052a138(FILE *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  undefined *puVar5;
  ushort *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  ushort local_res8 [4];
  byte local_res10;
  undefined1 local_res11;
  ushort local_38;
  ushort local_36 [7];
  
  puVar8 = &DAT_1809198d0;
  uVar7 = 1;
  if ((*(uint *)((longlong)&param_1->_base + 4) >> 0xc & 1) == 0) {
    iVar1 = _fileno(param_1);
    if ((iVar1 == -1) || (iVar1 = _fileno(param_1), iVar1 == -2)) {
      puVar5 = &DAT_1809198d0;
    }
    else {
      iVar1 = _fileno(param_1);
      uVar2 = _fileno(param_1);
      puVar5 = (undefined *)
               ((ulonglong)(uVar2 & 0x3f) * 0x48 + (&DAT_180c9f990)[(longlong)iVar1 >> 6]);
    }
    if (puVar5[0x39] != '\0') {
      local_38 = 0;
      puVar6 = &local_38;
      do {
        iVar1 = _fgetc_nolock(param_1);
        if (iVar1 == -1) {
          return 0xffff;
        }
        *(char *)puVar6 = (char)iVar1;
        puVar6 = (ushort *)((longlong)puVar6 + 1);
      } while (puVar6 != local_36);
      return (ulonglong)local_38;
    }
  }
  if ((*(uint *)((longlong)&param_1->_base + 4) >> 0xc & 1) == 0) {
    iVar1 = _fileno(param_1);
    if ((iVar1 != -1) && (iVar1 = _fileno(param_1), iVar1 != -2)) {
      iVar1 = _fileno(param_1);
      uVar2 = _fileno(param_1);
      puVar8 = (undefined *)
               ((ulonglong)(uVar2 & 0x3f) * 0x48 + (&DAT_180c9f990)[(longlong)iVar1 >> 6]);
    }
    if ((char)puVar8[0x38] < '\0') {
      local_res8[0] = 0;
      iVar1 = _fgetc_nolock(param_1);
      if (iVar1 != -1) {
        local_res10 = (byte)iVar1;
        puVar6 = __pctype_func();
        if ((short)puVar6[local_res10] < 0) {
          iVar1 = _fgetc_nolock(param_1);
          if (iVar1 == -1) {
            ungetc((int)(char)local_res10,param_1);
            return 0xffff;
          }
          local_res11 = (undefined1)iVar1;
          uVar7 = 2;
        }
        iVar1 = FUN_180528bac(local_res8,&local_res10,uVar7);
        if (iVar1 != -1) {
          return (ulonglong)local_res8[0];
        }
        puVar3 = (undefined4 *)FUN_18051bfb0();
        *puVar3 = 0x2a;
      }
      return 0xffff;
    }
  }
  if (*(int *)&param_1->_base < 2) {
    uVar4 = thunk_FUN_18052c010(param_1);
  }
  else {
    *(int *)&param_1->_base = *(int *)&param_1->_base + -2;
    uVar4 = (ulonglong)*(ushort *)param_1->_ptr;
    param_1->_ptr = (char *)((longlong)param_1->_ptr + 2);
  }
  return uVar4;
}



/* ===== 18052a300 thunk_FUN_18052a138 ===== */

ulonglong thunk_FUN_18052a138(FILE *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  undefined *puVar5;
  ushort *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  ushort auStackX_8 [4];
  byte bStackX_10;
  undefined1 uStackX_11;
  ushort uStack_38;
  ushort auStack_36 [7];
  
  puVar8 = &DAT_1809198d0;
  uVar7 = 1;
  if ((*(uint *)((longlong)&param_1->_base + 4) >> 0xc & 1) == 0) {
    iVar1 = _fileno(param_1);
    if ((iVar1 == -1) || (iVar1 = _fileno(param_1), iVar1 == -2)) {
      puVar5 = &DAT_1809198d0;
    }
    else {
      iVar1 = _fileno(param_1);
      uVar2 = _fileno(param_1);
      puVar5 = (undefined *)
               ((ulonglong)(uVar2 & 0x3f) * 0x48 + (&DAT_180c9f990)[(longlong)iVar1 >> 6]);
    }
    if (puVar5[0x39] != '\0') {
      uStack_38 = 0;
      puVar6 = &uStack_38;
      do {
        iVar1 = _fgetc_nolock(param_1);
        if (iVar1 == -1) {
          return 0xffff;
        }
        *(char *)puVar6 = (char)iVar1;
        puVar6 = (ushort *)((longlong)puVar6 + 1);
      } while (puVar6 != auStack_36);
      return (ulonglong)uStack_38;
    }
  }
  if ((*(uint *)((longlong)&param_1->_base + 4) >> 0xc & 1) == 0) {
    iVar1 = _fileno(param_1);
    if ((iVar1 != -1) && (iVar1 = _fileno(param_1), iVar1 != -2)) {
      iVar1 = _fileno(param_1);
      uVar2 = _fileno(param_1);
      puVar8 = (undefined *)
               ((ulonglong)(uVar2 & 0x3f) * 0x48 + (&DAT_180c9f990)[(longlong)iVar1 >> 6]);
    }
    if ((char)puVar8[0x38] < '\0') {
      auStackX_8[0] = 0;
      iVar1 = _fgetc_nolock(param_1);
      if (iVar1 != -1) {
        bStackX_10 = (byte)iVar1;
        puVar6 = __pctype_func();
        if ((short)puVar6[bStackX_10] < 0) {
          iVar1 = _fgetc_nolock(param_1);
          if (iVar1 == -1) {
            ungetc((int)(char)bStackX_10,param_1);
            return 0xffff;
          }
          uStackX_11 = (undefined1)iVar1;
          uVar7 = 2;
        }
        iVar1 = FUN_180528bac(auStackX_8,&bStackX_10,uVar7);
        if (iVar1 != -1) {
          return (ulonglong)auStackX_8[0];
        }
        puVar3 = (undefined4 *)FUN_18051bfb0();
        *puVar3 = 0x2a;
      }
      return 0xffff;
    }
  }
  if (*(int *)&param_1->_base < 2) {
    uVar4 = thunk_FUN_18052c010(param_1);
  }
  else {
    *(int *)&param_1->_base = *(int *)&param_1->_base + -2;
    uVar4 = (ulonglong)*(ushort *)param_1->_ptr;
    param_1->_ptr = (char *)((longlong)param_1->_ptr + 2);
  }
  return uVar4;
}



/* ===== 18052a308 FUN_18052a308 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined2 FUN_18052a308(undefined2 param_1,FILE *param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  char *pcVar5;
  longlong lVar6;
  undefined1 auStack_48 [32];
  int local_28 [2];
  undefined2 local_20;
  uint local_18;
  undefined1 local_14;
  ulonglong local_10;
  
  local_10 = DAT_180919500 ^ (ulonglong)auStack_48;
  local_20 = param_1;
  iVar2 = _fileno(param_2);
  if ((iVar2 == -1) || (iVar2 = _fileno(param_2), iVar2 == -2)) {
    puVar4 = &DAT_1809198d0;
  }
  else {
    iVar2 = _fileno(param_2);
    uVar3 = _fileno(param_2);
    puVar4 = (undefined *)
             ((&DAT_180c9f990)[(longlong)iVar2 >> 6] + (ulonglong)(uVar3 & 0x3f) * 0x48);
  }
  local_28[0] = 0;
  local_18 = 0;
  local_14 = 0;
  if (puVar4[0x39] == '\0') {
    iVar2 = FUN_1805288f0(local_28,&local_18,5,param_1);
    if (iVar2 == 0) goto LAB_18052a3db;
LAB_18052a44c:
    param_1 = 0xffff;
  }
  else {
    local_28[0] = 2;
    local_18 = (uint)CONCAT11(local_20._1_1_,(char)param_1);
LAB_18052a3db:
    pcVar5 = (char *)(*(longlong *)&param_2->_cnt + (longlong)local_28[0]);
    if (param_2->_ptr < pcVar5) {
      if ((*(int *)&param_2->_base != 0) || (param_2->_charbuf < local_28[0])) goto LAB_18052a44c;
      param_2->_ptr = pcVar5;
    }
    lVar6 = (longlong)(local_28[0] + -1);
    if (-1 < local_28[0] + -1) {
      do {
        param_2->_ptr = param_2->_ptr + -1;
        pcVar5 = (char *)((longlong)&local_18 + lVar6);
        lVar6 = lVar6 + -1;
        *param_2->_ptr = *pcVar5;
      } while (-1 < lVar6);
    }
    *(int *)&param_2->_base = *(int *)&param_2->_base + local_28[0];
    LOCK();
    puVar1 = (uint *)((longlong)&param_2->_base + 4);
    *puVar1 = *puVar1 & 0xfffffff7;
    UNLOCK();
    LOCK();
    puVar1 = (uint *)((longlong)&param_2->_base + 4);
    *puVar1 = *puVar1 | 1;
    UNLOCK();
  }
  return param_1;
}



/* ===== 18052a454 FUN_18052a454 ===== */

ulonglong FUN_18052a454(ushort param_1,FILE *param_2)

{
  ushort *puVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  char *pcVar6;
  undefined *puVar7;
  ushort uVar8;
  
  uVar8 = 0xffff;
  if (param_1 != 0xffff) {
    if ((((ulonglong)param_2->_base & 0x100000000) != 0) ||
       (((*(uint *)((longlong)&param_2->_base + 4) >> 2 & 1) != 0 &&
        ((*(uint *)((longlong)&param_2->_base + 4) >> 1 & 1) == 0)))) {
      if (*(longlong *)&param_2->_cnt == 0) {
        __acrt_stdio_allocate_buffer_nolock(param_2);
      }
      if ((*(uint *)((longlong)&param_2->_base + 4) >> 0xc & 1) == 0) {
        iVar3 = _fileno(param_2);
        if ((iVar3 == -1) || (iVar3 = _fileno(param_2), iVar3 == -2)) {
          puVar7 = &DAT_1809198d0;
        }
        else {
          iVar3 = _fileno(param_2);
          uVar4 = _fileno(param_2);
          puVar7 = (undefined *)
                   ((ulonglong)(uVar4 & 0x3f) * 0x48 + (&DAT_180c9f990)[(longlong)iVar3 >> 6]);
        }
        if ((char)puVar7[0x38] < '\0') {
          uVar5 = FUN_18052a308(param_1,param_2);
          return uVar5;
        }
      }
      pcVar6 = (char *)(*(longlong *)&param_2->_cnt + 2);
      if (param_2->_ptr < pcVar6) {
        if ((*(int *)&param_2->_base != 0) || ((uint)param_2->_charbuf < 2)) goto LAB_18052a574;
        param_2->_ptr = pcVar6;
      }
      uVar4 = *(uint *)((longlong)&param_2->_base + 4);
      pcVar6 = param_2->_ptr;
      puVar1 = (ushort *)(pcVar6 + -2);
      param_2->_ptr = (char *)puVar1;
      if ((uVar4 >> 0xc & 1) == 0) {
        *puVar1 = param_1;
      }
      else if (*puVar1 != param_1) {
        param_2->_ptr = pcVar6;
        goto LAB_18052a574;
      }
      *(int *)&param_2->_base = *(int *)&param_2->_base + 2;
      LOCK();
      puVar2 = (uint *)((longlong)&param_2->_base + 4);
      *puVar2 = *puVar2 & 0xfffffff7;
      UNLOCK();
      LOCK();
      puVar2 = (uint *)((longlong)&param_2->_base + 4);
      *puVar2 = *puVar2 | 1;
      UNLOCK();
      uVar8 = param_1;
    }
  }
LAB_18052a574:
  return (ulonglong)uVar8;
}



/* ===== 18052a5a0 fegetround ===== */

/* Library Function - Single Match
    fegetround
   
   Library: Visual Studio 2019 Release */

void fegetround(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_18053a030();
  FUN_18053a020(uVar1);
  return;
}



/* ===== 18052a5b4 FUN_18052a5b4 ===== */

bool FUN_18052a5b4(undefined1 param_1,FILE *param_2,undefined8 param_3)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  undefined *puVar5;
  int iVar6;
  bool bVar7;
  undefined1 local_res8 [8];
  
  local_res8[0] = param_1;
  uVar2 = _fileno(param_2);
  if (((ulonglong)param_2->_base & 0xc000000000) == 0) {
    iVar3 = FUN_18052b3ac(uVar2,local_res8,1,param_3);
    bVar7 = iVar3 == 1;
  }
  else {
    iVar3 = 0;
    iVar6 = *(int *)&param_2->_ptr - param_2->_cnt;
    param_2->_ptr = (char *)(*(longlong *)&param_2->_cnt + 1);
    *(int *)&param_2->_base = param_2->_charbuf + -1;
    if (iVar6 < 1) {
      if (uVar2 + 2 < 2) {
        puVar5 = &DAT_1809198d0;
      }
      else {
        puVar5 = (undefined *)
                 ((&DAT_180c9f990)[(longlong)(int)uVar2 >> 6] + (ulonglong)(uVar2 & 0x3f) * 0x48);
      }
      if (((puVar5[0x38] & 0x20) != 0) && (lVar4 = FUN_18052dd94(uVar2,0,2), lVar4 == -1)) {
        LOCK();
        puVar1 = (uint *)((longlong)&param_2->_base + 4);
        *puVar1 = *puVar1 | 0x10;
        UNLOCK();
        return true;
      }
    }
    else {
      iVar3 = FUN_18052b3ac(uVar2,*(longlong *)&param_2->_cnt,iVar6,param_3);
    }
    bVar7 = iVar3 == iVar6;
    **(undefined1 **)&param_2->_cnt = local_res8[0];
  }
  return bVar7;
}



/* ===== 18052a6ac FUN_18052a6ac ===== */

bool FUN_18052a6ac(ushort param_1,FILE *param_2,undefined8 param_3)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  undefined *puVar5;
  int iVar6;
  bool bVar7;
  ushort local_res8 [4];
  
  local_res8[0] = param_1;
  uVar2 = _fileno(param_2);
  if (((ulonglong)param_2->_base & 0xc000000000) == 0) {
    iVar3 = FUN_18052b3ac(uVar2,local_res8,2,param_3);
    bVar7 = iVar3 == 2;
  }
  else {
    iVar3 = 0;
    iVar6 = *(int *)&param_2->_ptr - param_2->_cnt;
    param_2->_ptr = (char *)(*(longlong *)&param_2->_cnt + 2);
    *(int *)&param_2->_base = param_2->_charbuf + -2;
    if (iVar6 < 1) {
      if (uVar2 + 2 < 2) {
        puVar5 = &DAT_1809198d0;
      }
      else {
        puVar5 = (undefined *)
                 ((&DAT_180c9f990)[(longlong)(int)uVar2 >> 6] + (ulonglong)(uVar2 & 0x3f) * 0x48);
      }
      if (((puVar5[0x38] & 0x20) != 0) && (lVar4 = FUN_18052dd94(uVar2,0,2), lVar4 == -1)) {
        LOCK();
        puVar1 = (uint *)((longlong)&param_2->_base + 4);
        *puVar1 = *puVar1 | 0x10;
        UNLOCK();
        return true;
      }
    }
    else {
      iVar3 = FUN_18052b3ac(uVar2,*(longlong *)&param_2->_cnt,iVar6,param_3);
    }
    bVar7 = iVar3 == iVar6;
    **(ushort **)&param_2->_cnt = local_res8[0];
  }
  return bVar7;
}



/* ===== 18052a7a8 FUN_18052a7a8 ===== */

bool FUN_18052a7a8(longlong *param_1)

{
  bool bVar1;
  BOOL BVar2;
  HANDLE hFile;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res10 [3];
  
  if ((*(uint *)((longlong)param_1 + 0x14) >> 3 & 1) == 0) {
    if ((((*(uint *)((longlong)param_1 + 0x14) & 0xc0) == 0) || (*param_1 != param_1[1])) &&
       (hFile = (HANDLE)FUN_180517f94((int)param_1[3]), hFile != (HANDLE)0xffffffffffffffff)) {
      local_res10[0].QuadPart = 0;
      BVar2 = SetFilePointerEx(hFile,(LARGE_INTEGER)0x0,local_res10,1);
      if (BVar2 != 0) {
        local_res8.QuadPart = 0;
        BVar2 = GetFileSizeEx(hFile,&local_res8);
        if (BVar2 != 0) {
          return local_res10[0].QuadPart == local_res8.QuadPart;
        }
      }
    }
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}



/* ===== 18052a830 FUN_18052a830 ===== */

ulonglong FUN_18052a830(byte param_1,FILE *param_2,longlong param_3)

{
  uint *puVar1;
  char cVar2;
  
  _fileno(param_2);
  if (((ulonglong)param_2->_base & 0x600000000) == 0) {
    *(undefined4 *)(param_3 + 0x2c) = 9;
  }
  else {
    if ((*(uint *)((longlong)&param_2->_base + 4) >> 0xc & 1) == 0) {
      if (((ulonglong)param_2->_base & 0x100000000) != 0) {
        cVar2 = FUN_18052a7a8(param_2);
        *(undefined4 *)&param_2->_base = 0;
        if (cVar2 == '\0') goto LAB_18052a862;
        param_2->_ptr = *(char **)&param_2->_cnt;
        LOCK();
        puVar1 = (uint *)((longlong)&param_2->_base + 4);
        *puVar1 = *puVar1 & 0xfffffffe;
        UNLOCK();
      }
      LOCK();
      puVar1 = (uint *)((longlong)&param_2->_base + 4);
      *puVar1 = *puVar1 | 2;
      UNLOCK();
      LOCK();
      puVar1 = (uint *)((longlong)&param_2->_base + 4);
      *puVar1 = *puVar1 & 0xfffffff7;
      UNLOCK();
      *(undefined4 *)&param_2->_base = 0;
      if ((((ulonglong)param_2->_base & 0x4c000000000) == 0) &&
         (cVar2 = FUN_18052928c(param_2), cVar2 == '\0')) {
        __acrt_stdio_allocate_buffer_nolock(param_2);
      }
      cVar2 = FUN_18052a5b4(param_1,param_2,param_3);
      if (cVar2 != '\0') {
        return (ulonglong)param_1;
      }
      goto LAB_18052a862;
    }
    *(undefined4 *)(param_3 + 0x2c) = 0x22;
  }
  *(undefined1 *)(param_3 + 0x30) = 1;
LAB_18052a862:
  LOCK();
  puVar1 = (uint *)((longlong)&param_2->_base + 4);
  *puVar1 = *puVar1 | 0x10;
  UNLOCK();
  return 0xffffffff;
}



/* ===== 18052a8fc FUN_18052a8fc ===== */

undefined2 FUN_18052a8fc(undefined2 param_1,FILE *param_2,longlong param_3)

{
  uint *puVar1;
  char cVar2;
  
  _fileno(param_2);
  if (((ulonglong)param_2->_base & 0x600000000) == 0) {
    *(undefined4 *)(param_3 + 0x2c) = 9;
  }
  else {
    if ((*(uint *)((longlong)&param_2->_base + 4) >> 0xc & 1) == 0) {
      if (((ulonglong)param_2->_base & 0x100000000) != 0) {
        cVar2 = FUN_18052a7a8(param_2);
        *(undefined4 *)&param_2->_base = 0;
        if (cVar2 == '\0') goto LAB_18052a92e;
        param_2->_ptr = *(char **)&param_2->_cnt;
        LOCK();
        puVar1 = (uint *)((longlong)&param_2->_base + 4);
        *puVar1 = *puVar1 & 0xfffffffe;
        UNLOCK();
      }
      LOCK();
      puVar1 = (uint *)((longlong)&param_2->_base + 4);
      *puVar1 = *puVar1 | 2;
      UNLOCK();
      LOCK();
      puVar1 = (uint *)((longlong)&param_2->_base + 4);
      *puVar1 = *puVar1 & 0xfffffff7;
      UNLOCK();
      *(undefined4 *)&param_2->_base = 0;
      if ((((ulonglong)param_2->_base & 0x4c000000000) == 0) &&
         (cVar2 = FUN_18052928c(param_2), cVar2 == '\0')) {
        __acrt_stdio_allocate_buffer_nolock(param_2);
      }
      cVar2 = FUN_18052a6ac(param_1,param_2,param_3);
      if (cVar2 != '\0') {
        return param_1;
      }
      goto LAB_18052a92e;
    }
    *(undefined4 *)(param_3 + 0x2c) = 0x22;
  }
  *(undefined1 *)(param_3 + 0x30) = 1;
LAB_18052a92e:
  LOCK();
  puVar1 = (uint *)((longlong)&param_2->_base + 4);
  *puVar1 = *puVar1 | 0x10;
  UNLOCK();
  return 0xffff;
}



/* ===== 18052a9c8 FUN_18052a9c8 ===== */

undefined8
FUN_18052a9c8(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,undefined4 *param_4)

{
  BOOL BVar1;
  DWORD DVar2;
  HANDLE hFile;
  DWORD *pDVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  
  __acrt_lowio_lock_fh(*param_2);
  if ((*(byte *)((&DAT_180c9f990)[(longlong)(int)*(uint *)*param_3 >> 6] + 0x38 +
                (ulonglong)(*(uint *)*param_3 & 0x3f) * 0x48) & 1) != 0) {
    hFile = (HANDLE)FUN_180517f94();
    BVar1 = FlushFileBuffers(hFile);
    uVar5 = 0;
    if (BVar1 != 0) goto LAB_18052aa3f;
    DVar2 = GetLastError();
    pDVar3 = (DWORD *)FUN_18051bf8c();
    *pDVar3 = DVar2;
  }
  puVar4 = (undefined4 *)FUN_18051bfb0();
  *puVar4 = 9;
  uVar5 = 0xffffffff;
LAB_18052aa3f:
  __acrt_lowio_unlock_fh(*param_4);
  return uVar5;
}



/* ===== 18052aa54 _commit ===== */

/* Library Function - Single Match
    _commit
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl _commit(int _FileHandle)

{
  int iVar1;
  undefined4 *puVar2;
  int local_res8 [2];
  undefined1 local_res10 [8];
  int local_res18 [2];
  int local_res20 [2];
  int *local_18 [3];
  
  local_res8[0] = _FileHandle;
  if (_FileHandle == -2) {
    puVar2 = (undefined4 *)FUN_18051bfb0();
    *puVar2 = 9;
  }
  else {
    if (((-1 < _FileHandle) && ((uint)_FileHandle < DAT_180c9fd90)) &&
       ((*(byte *)((&DAT_180c9f990)[(longlong)_FileHandle >> 6] + 0x38 +
                  (ulonglong)(_FileHandle & 0x3f) * 0x48) & 1) != 0)) {
      local_18[0] = local_res8;
      local_res18[0] = _FileHandle;
      local_res20[0] = _FileHandle;
      iVar1 = FUN_18052a9c8(local_res10,local_res20,local_18,local_res18);
      return iVar1;
    }
    puVar2 = (undefined4 *)FUN_18051bfb0();
    *puVar2 = 9;
    FUN_180527740();
  }
  return -1;
}



/* ===== 18052aae8 FUN_18052aae8 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

DWORD * FUN_18052aae8(DWORD *param_1,uint param_2,byte *param_3,ulonglong param_4,longlong param_5)

{
  char cVar1;
  byte bVar2;
  HANDLE hFile;
  char cVar3;
  uint nNumberOfBytesToWrite;
  BOOL BVar4;
  ulonglong uVar5;
  char *pcVar6;
  int iVar7;
  DWORD DVar8;
  undefined1 *puVar9;
  byte *pbVar10;
  int iVar11;
  longlong lVar12;
  undefined8 uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 auStackY_108 [32];
  undefined2 local_c8 [2];
  undefined4 local_c4;
  DWORD local_c0 [2];
  byte *local_b8;
  longlong local_b0;
  undefined8 local_a8;
  UINT local_a0;
  int local_9c;
  byte *local_98;
  longlong local_90;
  undefined8 local_88;
  undefined1 *local_80;
  byte *local_78;
  HANDLE local_70;
  longlong local_68;
  undefined8 local_60;
  undefined1 local_58 [8];
  byte local_50;
  byte local_4f;
  undefined1 local_48 [8];
  ulonglong local_40;
  
  local_60 = 0xfffffffffffffffe;
  local_40 = DAT_180919500 ^ (ulonglong)auStackY_108;
  local_b0 = param_5;
  lVar15 = (longlong)(int)param_2 >> 6;
  uVar5 = (ulonglong)(param_2 & 0x3f);
  local_70 = *(HANDLE *)((&DAT_180c9f990)[lVar15] + 0x28 + uVar5 * 0x48);
  local_b8 = param_3 + (param_4 & 0xffffffff);
  local_98 = param_3;
  local_90 = lVar15;
  local_a0 = GetConsoleOutputCP();
  iVar11 = 0;
  if (*(char *)(local_b0 + 0x28) == '\0') {
    FUN_1805002a0(local_b0);
  }
  local_9c = *(int *)(*(longlong *)(local_b0 + 0x18) + 0xc);
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_3 + (param_4 & 0xffffffff) <= local_98) {
    return param_1;
  }
  DVar8 = 0;
  local_68 = lVar15;
  do {
    local_c8[0] = CONCAT11(local_c8[0]._1_1_,*param_3);
    local_c4 = 0;
    cVar3 = '\x01';
    if (local_9c == 0xfde9) {
      iVar7 = 0;
      lVar16 = 0;
      pcVar6 = (char *)(uVar5 * 0x48 + 0x3e + (&DAT_180c9f990)[local_68]);
      do {
        if (*pcVar6 == '\0') break;
        iVar7 = iVar7 + 1;
        lVar16 = lVar16 + 1;
        pcVar6 = pcVar6 + 1;
      } while (lVar16 < 5);
      if (lVar16 < 1) {
        cVar1 = (&DAT_180919920)[*param_3];
        iVar7 = cVar1 + 1;
        lVar15 = (longlong)local_b8 - (longlong)param_3;
        if (lVar15 < iVar7) {
          if (0 < lVar15) {
            lVar16 = 0;
            do {
              *(byte *)(lVar16 + uVar5 * 0x48 + 0x3e + (&DAT_180c9f990)[local_90]) = param_3[lVar16]
              ;
              iVar11 = iVar11 + 1;
              lVar16 = lVar16 + 1;
            } while (iVar11 < lVar15);
          }
          param_1[1] = param_1[1] + (int)lVar15;
          return param_1;
        }
        local_a8 = 0;
        cVar3 = (iVar7 == 4) + '\x01';
        local_78 = param_3;
        lVar15 = FUN_180528f28(&local_c4,&local_78,cVar3,&local_a8);
        if (lVar15 == -1) {
          return param_1;
        }
        pbVar10 = param_3 + cVar1;
        lVar15 = local_90;
      }
      else {
        cVar3 = (&DAT_180919920)[*(byte *)((&DAT_180c9f990)[lVar15] + 0x3e + uVar5 * 0x48)];
        iVar7 = (cVar3 + 1) - iVar7;
        local_a8 = CONCAT44(local_a8._4_4_,iVar7);
        lVar12 = (longlong)local_b8 - (longlong)param_3;
        lVar14 = (longlong)iVar7;
        if (lVar12 < lVar14) {
          if (0 < lVar12) {
            lVar14 = lVar16;
            do {
              *(byte *)(lVar14 + uVar5 * 0x48 + 0x3e + (&DAT_180c9f990)[lVar15]) =
                   param_3[lVar14 - lVar16];
              iVar11 = iVar11 + 1;
              lVar14 = lVar14 + 1;
            } while (iVar11 < lVar12);
          }
          param_1[1] = param_1[1] + (int)lVar12;
          return param_1;
        }
        lVar12 = 0;
        puVar9 = (undefined1 *)(uVar5 * 0x48 + 0x3e + (&DAT_180c9f990)[local_68]);
        do {
          local_58[lVar12] = *puVar9;
          lVar12 = lVar12 + 1;
          puVar9 = puVar9 + 1;
        } while (lVar12 < lVar16);
        if (0 < lVar14) {
          FUN_180540530(local_58 + lVar16,param_3,lVar14);
        }
        lVar12 = 0;
        do {
          *(undefined1 *)(lVar12 + uVar5 * 0x48 + 0x3e + (&DAT_180c9f990)[lVar15]) = 0;
          lVar12 = lVar12 + 1;
        } while (lVar12 < lVar16);
        local_88 = 0;
        local_80 = local_58;
        cVar3 = (cVar3 + 1 == 4) + '\x01';
        lVar16 = FUN_180528f28(&local_c4,&local_80,cVar3,&local_88);
        if (lVar16 == -1) {
          return param_1;
        }
        pbVar10 = param_3 + ((int)local_a8 + -1);
      }
    }
    else {
      lVar16 = (&DAT_180c9f990)[lVar15];
      bVar2 = *(byte *)(lVar16 + 0x3d + uVar5 * 0x48);
      if ((bVar2 & 4) == 0) {
        if (*(short *)(**(longlong **)(local_b0 + 0x18) + (ulonglong)*param_3 * 2) < 0) {
          pbVar10 = param_3 + 1;
          if (local_b8 <= pbVar10) {
            *(byte *)(lVar16 + 0x3e + uVar5 * 0x48) = *param_3;
            pbVar10 = (byte *)((&DAT_180c9f990)[lVar15] + 0x3d + uVar5 * 0x48);
            *pbVar10 = *pbVar10 | 4;
            param_1[1] = DVar8 + 1;
            return param_1;
          }
          iVar7 = FUN_180528990(&local_c4,param_3,2,local_b0);
          if (iVar7 == -1) {
            return param_1;
          }
          goto LAB_18052adf0;
        }
        uVar13 = 1;
        pbVar10 = param_3;
      }
      else {
        local_50 = *(byte *)(lVar16 + 0x3e + uVar5 * 0x48);
        local_4f = *param_3;
        *(byte *)(lVar16 + 0x3d + uVar5 * 0x48) = bVar2 & 0xfb;
        uVar13 = 2;
        pbVar10 = &local_50;
      }
      iVar7 = FUN_180528990(&local_c4,pbVar10,uVar13,local_b0);
      pbVar10 = param_3;
      if (iVar7 == -1) {
        return param_1;
      }
    }
LAB_18052adf0:
    param_3 = pbVar10 + 1;
    nNumberOfBytesToWrite = FUN_18052eef0(local_a0,0,&local_c4,cVar3);
    hFile = local_70;
    if (nNumberOfBytesToWrite == 0) {
      return param_1;
    }
    local_c0[0] = 0;
    BVar4 = WriteFile(local_70,local_48,nNumberOfBytesToWrite,local_c0,(LPOVERLAPPED)0x0);
    if (BVar4 == 0) {
LAB_18052af49:
      DVar8 = GetLastError();
      *param_1 = DVar8;
      return param_1;
    }
    DVar8 = (param_1[2] - (int)local_98) + (int)param_3;
    param_1[1] = DVar8;
    if (local_c0[0] < nNumberOfBytesToWrite) {
      return param_1;
    }
    if ((char)local_c8[0] == '\n') {
      local_c8[0] = 0xd;
      BVar4 = WriteFile(hFile,local_c8,1,local_c0,(LPOVERLAPPED)0x0);
      if (BVar4 == 0) goto LAB_18052af49;
      if (local_c0[0] == 0) {
        return param_1;
      }
      param_1[2] = param_1[2] + 1;
      param_1[1] = param_1[1] + 1;
      DVar8 = param_1[1];
    }
    if (local_b8 <= param_3) {
      return param_1;
    }
  } while( true );
}



/* ===== 18052af7c FUN_18052af7c ===== */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

DWORD * FUN_18052af7c(DWORD *param_1,uint param_2,char *param_3,ulonglong param_4)

{
  char cVar1;
  HANDLE hFile;
  BOOL BVar2;
  DWORD DVar3;
  uint nNumberOfBytesToWrite;
  char *pcVar4;
  char *pcVar5;
  undefined1 auStackY_1468 [32];
  DWORD local_1438 [4];
  char local_1428 [5120];
  ulonglong local_28;
  undefined8 local_20;
  
  local_20 = 0x18052af94;
  local_28 = DAT_180919500 ^ (ulonglong)auStackY_1468;
  pcVar5 = param_3 + (param_4 & 0xffffffff);
  hFile = *(HANDLE *)
           ((&DAT_180c9f990)[(longlong)(int)param_2 >> 6] + 0x28 +
           (ulonglong)(param_2 & 0x3f) * 0x48);
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  do {
    if (pcVar5 <= param_3) {
      return param_1;
    }
    pcVar4 = local_1428;
    do {
      if (pcVar5 <= param_3) break;
      cVar1 = *param_3;
      param_3 = param_3 + 1;
      if (cVar1 == '\n') {
        param_1[2] = param_1[2] + 1;
        *pcVar4 = '\r';
        pcVar4 = pcVar4 + 1;
      }
      *pcVar4 = cVar1;
      pcVar4 = pcVar4 + 1;
    } while (pcVar4 < local_1428 + 0x13ff);
    local_1438[0] = 0;
    nNumberOfBytesToWrite = (int)pcVar4 - (int)local_1428;
    BVar2 = WriteFile(hFile,local_1428,nNumberOfBytesToWrite,local_1438,(LPOVERLAPPED)0x0);
    if (BVar2 == 0) {
      DVar3 = GetLastError();
      *param_1 = DVar3;
      return param_1;
    }
    param_1[1] = param_1[1] + local_1438[0];
    if (local_1438[0] < nNumberOfBytesToWrite) {
      return param_1;
    }
  } while( true );
}



/* ===== 18052b084 FUN_18052b084 ===== */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

DWORD * FUN_18052b084(DWORD *param_1,uint param_2,short *param_3,ulonglong param_4)

{
  short sVar1;
  HANDLE hFile;
  uint nNumberOfBytesToWrite;
  BOOL BVar2;
  DWORD DVar3;
  short *psVar4;
  short *psVar5;
  undefined1 auStackY_1468 [32];
  DWORD local_1438 [4];
  short local_1428 [2560];
  ulonglong local_28;
  undefined8 local_20;
  
  local_20 = 0x18052b09c;
  local_28 = DAT_180919500 ^ (ulonglong)auStackY_1468;
  psVar5 = (short *)((param_4 & 0xffffffff) + (longlong)param_3);
  hFile = *(HANDLE *)
           ((&DAT_180c9f990)[(longlong)(int)param_2 >> 6] + 0x28 +
           (ulonglong)(param_2 & 0x3f) * 0x48);
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  do {
    if (psVar5 <= param_3) {
      return param_1;
    }
    psVar4 = local_1428;
    do {
      if (psVar5 <= param_3) break;
      sVar1 = *param_3;
      param_3 = param_3 + 1;
      if (sVar1 == 10) {
        param_1[2] = param_1[2] + 2;
        *psVar4 = 0xd;
        psVar4 = psVar4 + 1;
      }
      *psVar4 = sVar1;
      psVar4 = psVar4 + 1;
    } while (psVar4 < local_1428 + 0x9ff);
    local_1438[0] = 0;
    nNumberOfBytesToWrite = (int)((longlong)psVar4 - (longlong)local_1428 >> 1) * 2;
    BVar2 = WriteFile(hFile,local_1428,nNumberOfBytesToWrite,local_1438,(LPOVERLAPPED)0x0);
    if (BVar2 == 0) {
      DVar3 = GetLastError();
      *param_1 = DVar3;
      return param_1;
    }
    param_1[1] = param_1[1] + local_1438[0];
    if (local_1438[0] < nNumberOfBytesToWrite) {
      return param_1;
    }
  } while( true );
}



/* ===== 18052b1a0 FUN_18052b1a0 ===== */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

DWORD * FUN_18052b1a0(DWORD *param_1,uint param_2,short *param_3,uint param_4)

{
  short sVar1;
  HANDLE hFile;
  uint uVar2;
  BOOL BVar3;
  DWORD DVar4;
  uint uVar5;
  ulonglong uVar6;
  short *psVar7;
  short *psVar8;
  undefined1 auStackY_1498 [32];
  DWORD local_1458 [4];
  short local_1448 [856];
  undefined1 local_d98 [3424];
  ulonglong local_38;
  undefined8 local_30;
  
  local_30 = 0x18052b1bc;
  local_38 = DAT_180919500 ^ (ulonglong)auStackY_1498;
  hFile = *(HANDLE *)
           ((&DAT_180c9f990)[(longlong)(int)param_2 >> 6] + 0x28 +
           (ulonglong)(param_2 & 0x3f) * 0x48);
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  psVar7 = param_3;
  do {
    if ((short *)((ulonglong)param_4 + (longlong)param_3) <= psVar7) {
      return param_1;
    }
    psVar8 = local_1448;
    do {
      if ((short *)((ulonglong)param_4 + (longlong)param_3) <= psVar7) break;
      sVar1 = *psVar7;
      psVar7 = psVar7 + 1;
      if (sVar1 == 10) {
        *psVar8 = 0xd;
        psVar8 = psVar8 + 1;
      }
      *psVar8 = sVar1;
      psVar8 = psVar8 + 1;
    } while (psVar8 < local_1448 + 0x354);
    uVar2 = FUN_18052eef0(0xfde9,0,local_1448,(longlong)psVar8 - (longlong)local_1448 >> 1);
    if (uVar2 == 0) {
LAB_18052b2dd:
      DVar4 = GetLastError();
      *param_1 = DVar4;
      return param_1;
    }
    uVar6 = 0;
    if (uVar2 != 0) {
      do {
        local_1458[0] = 0;
        BVar3 = WriteFile(hFile,local_d98 + uVar6,uVar2 - (int)uVar6,local_1458,(LPOVERLAPPED)0x0);
        if (BVar3 == 0) goto LAB_18052b2dd;
        uVar5 = (int)uVar6 + local_1458[0];
        uVar6 = (ulonglong)uVar5;
      } while (uVar5 < uVar2);
    }
    param_1[1] = (int)psVar7 - (int)param_3;
  } while( true );
}



/* ===== 18052b314 FUN_18052b314 ===== */

undefined4 FUN_18052b314(void)

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
  uVar1 = FUN_18052b3ac();
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



/* ===== 18052b3ac FUN_18052b3ac ===== */

undefined4 FUN_18052b3ac(uint param_1,undefined8 param_2,undefined4 param_3,longlong param_4)

{
  bool bVar1;
  undefined4 uVar2;
  
  if (param_1 == 0xfffffffe) {
    *(undefined1 *)(param_4 + 0x38) = 1;
    *(undefined4 *)(param_4 + 0x34) = 0;
    *(undefined1 *)(param_4 + 0x30) = 1;
    *(undefined4 *)(param_4 + 0x2c) = 9;
  }
  else {
    if (((int)param_1 < 0) || (DAT_180c9fd90 <= param_1)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      if ((*(byte *)((&DAT_180c9f990)[(longlong)(int)param_1 >> 6] + 0x38 +
                    (ulonglong)(param_1 & 0x3f) * 0x48) & 1) != 0) {
        __acrt_lowio_lock_fh(param_1);
        uVar2 = 0xffffffff;
        if ((*(byte *)((&DAT_180c9f990)[(longlong)(int)param_1 >> 6] + 0x38 +
                      (ulonglong)(param_1 & 0x3f) * 0x48) & 1) == 0) {
          *(undefined1 *)(param_4 + 0x30) = 1;
          *(undefined4 *)(param_4 + 0x2c) = 9;
          *(undefined1 *)(param_4 + 0x38) = 1;
          *(undefined4 *)(param_4 + 0x34) = 0;
        }
        else {
          uVar2 = FUN_18052b4cc(param_1,param_2,param_3,param_4);
        }
        __acrt_lowio_unlock_fh(param_1);
        return uVar2;
      }
    }
    *(undefined1 *)(param_4 + 0x38) = 1;
    *(undefined4 *)(param_4 + 0x34) = 0;
    *(undefined1 *)(param_4 + 0x30) = 1;
    *(undefined4 *)(param_4 + 0x2c) = 9;
    FUN_180527688(0,0,0,0,0,param_4);
  }
  return 0xffffffff;
}



/* ===== 18052b4cc FUN_18052b4cc ===== */

int FUN_18052b4cc(uint param_1,short *param_2,uint param_3,longlong param_4)

{
  char cVar1;
  int iVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  BOOL BVar6;
  DWORD DVar7;
  ulonglong uVar8;
  ulonglong *puVar9;
  int iVar10;
  longlong lVar11;
  ulonglong uVar12;
  short *psVar13;
  undefined8 local_70;
  int local_68;
  ulonglong local_60;
  DWORD local_50 [4];
  
  iVar10 = 0;
  uVar12 = (ulonglong)param_3;
  if (param_3 == 0) {
    return 0;
  }
  if (param_2 == (short *)0x0) {
LAB_18052b4fc:
    *(undefined1 *)(param_4 + 0x38) = 1;
    *(undefined4 *)(param_4 + 0x34) = 0;
    *(undefined1 *)(param_4 + 0x30) = 1;
    *(undefined4 *)(param_4 + 0x2c) = 0x16;
    FUN_180527688(0,0,0,0,0,param_4);
    return -1;
  }
  uVar8 = (ulonglong)(param_1 & 0x3f);
  lVar11 = (longlong)(int)param_1 >> 6;
  cVar1 = *(char *)((&DAT_180c9f990)[lVar11] + 0x39 + uVar8 * 0x48);
  if (((byte)(cVar1 - 1U) < 2) && ((~param_3 & 1) == 0)) goto LAB_18052b4fc;
  if ((*(byte *)((&DAT_180c9f990)[lVar11] + 0x38 + uVar8 * 0x48) & 0x20) != 0) {
    thunk_FUN_18052dce4(param_1,0,2);
  }
  local_60 = 0;
  iVar5 = FUN_18053b88c();
  if ((iVar5 == 0) || (-1 < *(char *)((&DAT_180c9f990)[lVar11] + 0x38 + uVar8 * 0x48))) {
LAB_18052b6b4:
    if (-1 < *(char *)((&DAT_180c9f990)[lVar11] + 0x38 + (ulonglong)(param_1 & 0x3f) * 0x48)) {
      local_70 = 0;
      local_68 = 0;
      BVar6 = WriteFile(*(HANDLE *)
                         ((&DAT_180c9f990)[lVar11] + 0x28 + (ulonglong)(param_1 & 0x3f) * 0x48),
                        param_2,param_3,(LPDWORD)((longlong)&local_70 + 4),(LPOVERLAPPED)0x0);
      iVar10 = local_68;
      uVar8 = local_70;
      if (BVar6 == 0) {
        DVar7 = GetLastError();
        local_70 = CONCAT44(local_70._4_4_,DVar7);
        iVar10 = local_68;
        uVar8 = local_70;
      }
      goto LAB_18052b769;
    }
    if (cVar1 == '\0') {
      puVar9 = (ulonglong *)FUN_18052af7c(&local_70,param_1,param_2,uVar12);
    }
    else if (cVar1 == '\x01') {
      puVar9 = (ulonglong *)FUN_18052b1a0(&local_70,param_1,param_2,uVar12);
    }
    else {
      uVar8 = local_60;
      if (cVar1 != '\x02') goto LAB_18052b769;
      puVar9 = (ulonglong *)FUN_18052b084(&local_70,param_1,param_2,uVar12);
    }
  }
  else {
    if (*(char *)(param_4 + 0x28) == '\0') {
      FUN_1805002a0();
    }
    if ((*(longlong *)(*(longlong *)(param_4 + 0x18) + 0x138) == 0) &&
       (*(char *)((&DAT_180c9f990)[lVar11] + 0x39 + uVar8 * 0x48) == '\0')) goto LAB_18052b6b4;
    local_50[0] = 0;
    BVar6 = GetConsoleMode(*(HANDLE *)((&DAT_180c9f990)[lVar11] + 0x28 + uVar8 * 0x48),local_50);
    if (BVar6 == 0) goto LAB_18052b6b4;
    if (cVar1 != '\0') {
      if ((cVar1 == '\x01') || (uVar8 = local_60, cVar1 == '\x02')) {
        local_70 = 0;
        uVar8 = local_70;
        if (param_2 < (short *)((longlong)param_2 + uVar12)) {
          local_70._4_4_ = 0;
          psVar13 = param_2;
          iVar5 = local_70._4_4_;
          do {
            sVar4 = *psVar13;
            sVar3 = FUN_18053b8f4(sVar4);
            if (sVar3 != sVar4) {
LAB_18052b67c:
              DVar7 = GetLastError();
              local_70 = CONCAT44(local_70._4_4_,DVar7);
              uVar8 = local_70;
              break;
            }
            local_70 = CONCAT44(iVar5 + 2,(undefined4)local_70);
            iVar2 = iVar5 + 2;
            if (sVar4 == 10) {
              sVar4 = FUN_18053b8f4(0xd);
              if (sVar4 != 0xd) goto LAB_18052b67c;
              local_70 = CONCAT44(iVar5 + 3,(undefined4)local_70);
              iVar10 = iVar10 + 1;
              iVar2 = iVar5 + 3;
            }
            iVar5 = iVar2;
            psVar13 = psVar13 + 1;
            uVar8 = local_70;
          } while (psVar13 < (short *)((longlong)param_2 + uVar12));
        }
      }
      goto LAB_18052b769;
    }
    puVar9 = (ulonglong *)FUN_18052aae8(&local_70,param_1,param_2,uVar12,param_4);
  }
  iVar10 = (int)puVar9[1];
  uVar8 = *puVar9;
LAB_18052b769:
  local_60 = uVar8;
  iVar5 = (int)(local_60 >> 0x20);
  if (iVar5 != 0) {
    return iVar5 - iVar10;
  }
  if ((int)local_60 != 0) {
    if ((int)local_60 == 5) {
      *(undefined1 *)(param_4 + 0x30) = 1;
      *(undefined4 *)(param_4 + 0x2c) = 9;
      *(undefined1 *)(param_4 + 0x38) = 1;
      *(undefined4 *)(param_4 + 0x34) = 5;
      return -1;
    }
    FUN_18051bf68(local_60 & 0xffffffff,param_4);
    return -1;
  }
  if (((*(byte *)((&DAT_180c9f990)[lVar11] + 0x38 + (ulonglong)(param_1 & 0x3f) * 0x48) & 0x40) == 0
      ) || ((char)*param_2 != '\x1a')) {
    *(undefined4 *)(param_4 + 0x34) = 0;
    *(undefined1 *)(param_4 + 0x30) = 1;
    *(undefined4 *)(param_4 + 0x2c) = 0x1c;
    *(undefined1 *)(param_4 + 0x38) = 1;
    return -1;
  }
  return 0;
}



/* ===== 18052b7fc FUN_18052b7fc ===== */

undefined4
FUN_18052b7fc(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,undefined4 *param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  
  __acrt_lowio_lock_fh(*param_2);
  lVar1 = param_3[1];
  if ((*(byte *)((&DAT_180c9f990)[(longlong)(int)*(uint *)*param_3 >> 6] + 0x38 +
                (ulonglong)(*(uint *)*param_3 & 0x3f) * 0x48) & 1) == 0) {
    *(undefined1 *)(lVar1 + 0x30) = 1;
    *(undefined4 *)(lVar1 + 0x2c) = 9;
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = FUN_18052b9d0();
  }
  __acrt_lowio_unlock_fh(*param_4);
  return uVar2;
}



/* ===== 18052b874 FUN_18052b874 ===== */

undefined8 FUN_18052b874(uint param_1,longlong param_2)

{
  undefined8 uVar1;
  uint local_res8 [4];
  undefined1 local_res18 [8];
  uint local_res20 [2];
  uint local_28 [2];
  uint *local_20;
  longlong local_18;
  
  if (param_1 == 0xfffffffe) {
    *(undefined1 *)(param_2 + 0x38) = 1;
    *(undefined4 *)(param_2 + 0x34) = 0;
    *(undefined1 *)(param_2 + 0x30) = 1;
    *(undefined4 *)(param_2 + 0x2c) = 9;
  }
  else {
    local_res8[0] = param_1;
    if (((-1 < (int)param_1) && (param_1 < DAT_180c9fd90)) &&
       ((*(byte *)((&DAT_180c9f990)[(longlong)(int)param_1 >> 6] + 0x38 +
                  (ulonglong)(param_1 & 0x3f) * 0x48) & 1) != 0)) {
      local_20 = local_res8;
      local_res20[0] = param_1;
      local_28[0] = param_1;
      local_18 = param_2;
      uVar1 = FUN_18052b7fc(local_res18,local_28,&local_20,local_res20);
      return uVar1;
    }
    *(undefined1 *)(param_2 + 0x38) = 1;
    *(undefined4 *)(param_2 + 0x34) = 0;
    *(undefined1 *)(param_2 + 0x30) = 1;
    *(undefined4 *)(param_2 + 0x2c) = 9;
    FUN_180527688(0,0,0,0,0,param_2);
  }
  return 0xffffffff;
}



/* ===== 18052b938 FUN_18052b938 ===== */

undefined4 FUN_18052b938(undefined4 param_1)

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
  uVar1 = FUN_18052b9d0(param_1,local_48);
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



/* ===== 18052b9d0 FUN_18052b9d0 ===== */

undefined8 FUN_18052b9d0(uint param_1,undefined8 param_2)

{
  BOOL BVar1;
  DWORD DVar2;
  longlong lVar3;
  longlong lVar4;
  HANDLE hObject;
  undefined8 uVar5;
  
  lVar3 = FUN_180517f94(param_1);
  if (lVar3 != -1) {
    if (((param_1 == 1) && ((*(byte *)(DAT_180c9f990 + 200) & 1) != 0)) ||
       ((param_1 == 2 && ((*(byte *)(DAT_180c9f990 + 0x80) & 1) != 0)))) {
      lVar3 = FUN_180517f94();
      lVar4 = FUN_180517f94(1);
      if (lVar4 == lVar3) goto LAB_18052b9f2;
    }
    hObject = (HANDLE)FUN_180517f94(param_1);
    BVar1 = CloseHandle(hObject);
    if (BVar1 == 0) {
      DVar2 = GetLastError();
      goto LAB_18052ba50;
    }
  }
LAB_18052b9f2:
  DVar2 = 0;
LAB_18052ba50:
  FUN_180517ed8(param_1);
  *(undefined1 *)
   ((&DAT_180c9f990)[(longlong)(int)param_1 >> 6] + 0x38 + (ulonglong)(param_1 & 0x3f) * 0x48) = 0;
  if (DVar2 == 0) {
    uVar5 = 0;
  }
  else {
    FUN_18051bf68(DVar2,param_2);
    uVar5 = 0xffffffff;
  }
  return uVar5;
}



/* ===== 18052baa0 FUN_18052baa0 ===== */

undefined8 * FUN_18052baa0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  *param_1 = 0;
  __acrt_lock(8);
  puVar1 = (undefined8 *)FUN_18052bb14(local_res8);
  puVar1 = (undefined8 *)*puVar1;
  *param_1 = puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 2) = 0;
    puVar1[5] = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 3) = 0xffffffff;
  }
  __acrt_unlock(8);
  return param_1;
}



/* ===== 18052baf8 __acrt_stdio_free_stream ===== */

/* Library Function - Single Match
    void __cdecl __acrt_stdio_free_stream(class __crt_stdio_stream)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl __acrt_stdio_free_stream(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  param_1[5] = 0;
  LOCK();
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  UNLOCK();
  return;
}



/* ===== 18052bb14 FUN_18052bb14 ===== */

longlong * FUN_18052bb14(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  bool bVar6;
  
  plVar5 = (longlong *)(DAT_180c9f550 + 0x18);
  plVar1 = plVar5 + (longlong)DAT_180c9f548 + -3;
  do {
    if (plVar5 == plVar1) {
LAB_18052bb90:
      *param_1 = 0;
      return param_1;
    }
    lVar4 = *plVar5;
    if (lVar4 == 0) {
      lVar4 = _calloc_base(1);
      *plVar5 = lVar4;
      FUN_1805277b0(0);
      if (*plVar5 != 0) {
        *(undefined4 *)(*plVar5 + 0x18) = 0xffffffff;
        InitializeCriticalSectionEx((LPCRITICAL_SECTION)(*plVar5 + 0x30),4000,0);
        lVar4 = *plVar5;
        LOCK();
        *(uint *)(lVar4 + 0x14) = *(uint *)(lVar4 + 0x14) | 0x2000;
        UNLOCK();
        FUN_1805110a4(lVar4);
LAB_18052bbac:
        *param_1 = lVar4;
        return param_1;
      }
      goto LAB_18052bb90;
    }
    if ((*(uint *)(lVar4 + 0x14) >> 0xd & 1) == 0) {
      FUN_1805110a4(lVar4);
      uVar3 = *(uint *)(lVar4 + 0x14);
      do {
        LOCK();
        uVar2 = *(uint *)(lVar4 + 0x14);
        bVar6 = uVar3 == uVar2;
        if (bVar6) {
          *(uint *)(lVar4 + 0x14) = uVar3 | 0x2000;
        }
        else {
          uVar3 = uVar2;
        }
        UNLOCK();
      } while (!bVar6);
      if ((~(byte)(uVar3 >> 0xd) & 1) != 0) goto LAB_18052bbac;
      FUN_1805110b0(lVar4);
    }
    plVar5 = plVar5 + 1;
  } while( true );
}



/* ===== 18052bc00 __acrt_stdio_free_buffer_nolock ===== */

/* Library Function - Single Match
    __acrt_stdio_free_buffer_nolock
   
   Library: Visual Studio 2019 Release */

void __acrt_stdio_free_buffer_nolock(undefined8 *param_1)

{
  if (((*(uint *)((longlong)param_1 + 0x14) >> 0xd & 1) != 0) &&
     ((*(uint *)((longlong)param_1 + 0x14) >> 6 & 1) != 0)) {
    FUN_1805277b0(param_1[1]);
    LOCK();
    *(uint *)((longlong)param_1 + 0x14) = *(uint *)((longlong)param_1 + 0x14) & 0xfffffebf;
    UNLOCK();
    param_1[1] = 0;
    *param_1 = 0;
    *(undefined4 *)(param_1 + 2) = 0;
  }
  return;
}



/* ===== 18052bc44 FUN_18052bc44 ===== */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_18052bc44(longlong *param_1,undefined8 param_2,uint param_3,char *param_4,int param_5,
                       undefined8 param_6,int param_7,int param_8,int param_9)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  size_t sVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined4 *puVar8;
  ulonglong uVar9;
  undefined4 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined4 *puVar15;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_38 [2];
  ulonglong local_30;
  
  local_30 = DAT_180919500 ^ (ulonglong)local_38;
  iVar2 = param_5;
  if (0 < param_5) {
    sVar5 = __strncnt(param_4,(longlong)param_5);
    iVar4 = (int)sVar5;
    iVar2 = iVar4 + 1;
    if (param_5 <= iVar4) {
      iVar2 = iVar4;
    }
  }
  if (param_8 == 0) {
    param_8 = *(int *)(*param_1 + 0xc);
  }
  local_60 = 0;
  local_68 = 0;
  uVar6 = FUN_18052ee60(param_8,(-(param_9 != 0) & 8U) + 1,param_4,iVar2);
  puVar13 = auStack_88;
  iVar4 = (int)uVar6;
  puVar14 = auStack_88;
  if (iVar4 == 0) goto LAB_18052bf4f;
  uVar7 = (longlong)iVar4 * 2 + 0x10;
  uVar7 = -(ulonglong)((ulonglong)((longlong)iVar4 * 2) < uVar7) & uVar7;
  if (uVar7 == 0) {
    puVar10 = (undefined4 *)0x0;
LAB_18052bf35:
    uVar7 = 0;
    if (puVar10 != (undefined4 *)0x0) goto LAB_18052bf3c;
  }
  else {
    if (uVar7 < 0x401) {
      uVar9 = uVar7 + 0xf;
      if (uVar9 <= uVar7) {
        uVar9 = 0xffffffffffffff0;
      }
      lVar1 = -(uVar9 & 0xfffffffffffffff0);
      puVar13 = auStack_88 + lVar1;
      puVar11 = auStack_88 + lVar1;
      puVar15 = (undefined4 *)((longlong)local_38 + lVar1);
      puVar10 = (undefined4 *)0x0;
      if (puVar15 == (undefined4 *)0x0) goto LAB_18052bf35;
      *puVar15 = 0xcccc;
LAB_18052bd50:
      puVar10 = puVar15 + 4;
      puVar13 = puVar11;
    }
    else {
      puVar15 = (undefined4 *)_malloc_base(uVar7);
      puVar13 = auStack_88;
      puVar11 = auStack_88;
      puVar10 = (undefined4 *)0x0;
      if (puVar15 != (undefined4 *)0x0) {
        *puVar15 = 0xdddd;
        goto LAB_18052bd50;
      }
    }
    if (puVar10 == (undefined4 *)0x0) goto LAB_18052bf35;
    *(int *)(puVar13 + 0x28) = iVar4;
    *(undefined4 **)(puVar13 + 0x20) = puVar10;
    *(undefined8 *)(puVar13 + -8) = 0x18052bd7a;
    iVar2 = FUN_18052ee60(param_8,1,param_4,iVar2);
    if (iVar2 == 0) goto LAB_18052bf35;
    *(undefined8 *)(puVar13 + 0x40) = 0;
    *(undefined8 *)(puVar13 + 0x38) = 0;
    *(undefined8 *)(puVar13 + 0x30) = 0;
    *(undefined4 *)(puVar13 + 0x28) = 0;
    *(undefined8 *)(puVar13 + 0x20) = 0;
    *(undefined8 *)(puVar13 + -8) = 0x18052bdad;
    iVar2 = FUN_18052cb98(param_2,param_3,puVar10,uVar6 & 0xffffffff);
    uVar7 = (ulonglong)iVar2;
    if (iVar2 == 0) goto LAB_18052bf35;
    if ((param_3 & 0x400) == 0) {
      uVar9 = uVar7 * 2 + 0x10;
      uVar9 = -(ulonglong)(uVar7 * 2 < uVar9) & uVar9;
      if (uVar9 == 0) {
        puVar15 = (undefined4 *)0x0;
        goto LAB_18052bf18;
      }
      if (uVar9 < 0x401) {
        uVar7 = uVar9 + 0xf;
        if (uVar7 <= uVar9) {
          uVar7 = 0xffffffffffffff0;
        }
        *(undefined8 *)(puVar13 + -8) = 0x18052be50;
        lVar1 = -(uVar7 & 0xfffffffffffffff0);
        puVar12 = puVar13 + lVar1;
        puVar8 = (undefined4 *)(puVar13 + lVar1 + 0x50);
        puVar13 = puVar13 + lVar1;
        if (puVar8 != (undefined4 *)0x0) {
          *puVar8 = 0xcccc;
          puVar13 = puVar12;
LAB_18052be7e:
          puVar15 = puVar8 + 4;
          goto LAB_18052be82;
        }
      }
      else {
        *(undefined8 *)(puVar13 + -8) = 0x18052be6e;
        puVar8 = (undefined4 *)_malloc_base();
        puVar15 = (undefined4 *)0x0;
        if (puVar8 != (undefined4 *)0x0) {
          *puVar8 = 0xdddd;
          goto LAB_18052be7e;
        }
LAB_18052be82:
        if (puVar15 != (undefined4 *)0x0) {
          *(undefined8 *)(puVar13 + 0x40) = 0;
          *(undefined8 *)(puVar13 + 0x38) = 0;
          *(undefined8 *)(puVar13 + 0x30) = 0;
          *(int *)(puVar13 + 0x28) = iVar2;
          *(undefined4 **)(puVar13 + 0x20) = puVar15;
          *(undefined8 *)(puVar13 + -8) = 0x18052beb4;
          iVar4 = FUN_18052cb98(param_2,param_3,puVar10,uVar6 & 0xffffffff);
          if (iVar4 != 0) {
            *(undefined8 *)(puVar13 + 0x38) = 0;
            *(undefined8 *)(puVar13 + 0x30) = 0;
            if (param_7 == 0) {
              *(undefined4 *)(puVar13 + 0x28) = 0;
              *(undefined8 *)(puVar13 + 0x20) = 0;
              *(undefined8 *)(puVar13 + -8) = 0x18052bee2;
              uVar3 = FUN_18052eef0(param_8,0,puVar15,iVar2);
              if (uVar3 == 0) goto LAB_18052bf18;
            }
            else {
              *(int *)(puVar13 + 0x28) = param_7;
              *(undefined8 *)(puVar13 + 0x20) = param_6;
              *(undefined8 *)(puVar13 + -8) = 0x18052befc;
              uVar3 = FUN_18052eef0(param_8,0,puVar15,iVar2);
              if (uVar3 == 0) goto LAB_18052bf1d;
            }
            uVar7 = (ulonglong)uVar3;
            if (puVar15[-4] == 0xdddd) {
              *(undefined8 *)(puVar13 + -8) = 0x18052bf13;
              FUN_1805277b0();
            }
            goto LAB_18052bf3c;
          }
LAB_18052bf18:
          if (puVar15 != (undefined4 *)0x0) {
LAB_18052bf1d:
            if (puVar15[-4] == 0xdddd) {
              *(undefined8 *)(puVar13 + -8) = 0x18052bf2e;
              FUN_1805277b0();
            }
          }
        }
      }
      uVar7 = 0;
    }
    else if (param_7 != 0) {
      if (iVar2 <= param_7) {
        *(undefined8 *)(puVar13 + 0x40) = 0;
        *(undefined8 *)(puVar13 + 0x38) = 0;
        *(undefined8 *)(puVar13 + 0x30) = 0;
        *(int *)(puVar13 + 0x28) = param_7;
        *(undefined8 *)(puVar13 + 0x20) = param_6;
        *(undefined8 *)(puVar13 + -8) = 0x18052be05;
        uVar3 = FUN_18052cb98(param_2,param_3,puVar10,uVar6 & 0xffffffff);
        uVar7 = (ulonglong)uVar3;
        if (uVar3 != 0) goto LAB_18052bf3c;
      }
      goto LAB_18052bf35;
    }
LAB_18052bf3c:
    if (puVar10[-4] == 0xdddd) {
      *(undefined8 *)(puVar13 + -8) = 0x18052bf4d;
      FUN_1805277b0();
    }
  }
  uVar6 = uVar7 & 0xffffffff;
  puVar14 = puVar13;
LAB_18052bf4f:
  *(undefined8 *)(puVar14 + -8) = 0x18052bf5b;
  return uVar6;
}



/* ===== 18052bf78 __acrt_LCMapStringA ===== */

/* Library Function - Single Match
    __acrt_LCMapStringA
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_LCMapStringA(__crt_locale_pointers *param_1,undefined8 param_2,undefined4 param_3,
                        undefined8 param_4,undefined4 param_5,undefined8 param_6,undefined4 param_7,
                        undefined4 param_8,undefined4 param_9)

{
  longlong local_28;
  undefined1 local_20 [16];
  char local_10;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_28,param_1);
  FUN_18052bc44(local_20,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  if (local_10 != '\0') {
    *(uint *)(local_28 + 0x3a8) = *(uint *)(local_28 + 0x3a8) & 0xfffffffd;
  }
  return;
}



/* ===== 18052c010 FUN_18052c010 ===== */

undefined2 FUN_18052c010(FILE *param_1)

{
  uint *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined *puVar8;
  undefined2 uVar9;
  char *pcVar10;
  char cVar11;
  
  if (param_1 == (FILE *)0x0) {
    puVar7 = (undefined4 *)FUN_18051bfb0();
    *puVar7 = 0x16;
    FUN_180527740();
  }
  else if (((*(uint *)((longlong)&param_1->_base + 4) >> 0xd & 1) != 0) &&
          ((*(uint *)((longlong)&param_1->_base + 4) >> 0xc & 1) == 0)) {
    if ((*(uint *)((longlong)&param_1->_base + 4) >> 1 & 1) == 0) {
      LOCK();
      puVar1 = (uint *)((longlong)&param_1->_base + 4);
      *puVar1 = *puVar1 | 1;
      UNLOCK();
      if (((ulonglong)param_1->_base & 0x4c000000000) == 0) {
        __acrt_stdio_allocate_buffer_nolock();
      }
      iVar3 = *(int *)&param_1->_base;
      if (iVar3 == 1) {
        cVar11 = *param_1->_ptr;
      }
      else {
        cVar11 = '\0';
      }
      pcVar10 = *(char **)&param_1->_cnt;
      iVar5 = param_1->_charbuf;
      param_1->_ptr = pcVar10;
      iVar4 = _fileno(param_1);
      iVar5 = FUN_18052d644(iVar4,pcVar10,iVar5);
      *(int *)&param_1->_base = iVar5;
      if (2 < iVar5 + 1U) {
        if (((ulonglong)param_1->_base & 0x600000000) == 0) {
          iVar5 = _fileno(param_1);
          if ((iVar5 == -1) || (iVar5 = _fileno(param_1), iVar5 == -2)) {
            puVar8 = &DAT_1809198d0;
          }
          else {
            iVar5 = _fileno(param_1);
            uVar6 = _fileno(param_1);
            puVar8 = (undefined *)
                     ((&DAT_180c9f990)[(longlong)iVar5 >> 6] + (ulonglong)(uVar6 & 0x3f) * 0x48);
          }
          if ((puVar8[0x38] & 0x82) == 0x82) {
            LOCK();
            puVar1 = (uint *)((longlong)&param_1->_base + 4);
            *puVar1 = *puVar1 | 0x20;
            UNLOCK();
          }
        }
        if (((param_1->_charbuf == 0x200) &&
            ((*(uint *)((longlong)&param_1->_base + 4) >> 6 & 1) != 0)) &&
           ((*(uint *)((longlong)&param_1->_base + 4) >> 8 & 1) == 0)) {
          param_1->_charbuf = 0x1000;
        }
        pcVar10 = param_1->_ptr;
        if (iVar3 == 1) {
          cVar2 = *pcVar10;
          *(int *)&param_1->_base = *(int *)&param_1->_base + -1;
          uVar9 = CONCAT11(cVar2,cVar11);
          pcVar10 = pcVar10 + 1;
        }
        else {
          uVar9 = *(undefined2 *)pcVar10;
          *(int *)&param_1->_base = *(int *)&param_1->_base + -2;
          pcVar10 = pcVar10 + 2;
        }
        param_1->_ptr = pcVar10;
        return uVar9;
      }
      LOCK();
      puVar1 = (uint *)((longlong)&param_1->_base + 4);
      *puVar1 = *puVar1 | (-(uint)(iVar5 != 0) & 8) + 8;
      UNLOCK();
      *(undefined4 *)&param_1->_base = 0;
    }
    else {
      LOCK();
      puVar1 = (uint *)((longlong)&param_1->_base + 4);
      *puVar1 = *puVar1 | 0x10;
      UNLOCK();
    }
  }
  return 0xffff;
}



/* ===== 18052c1b4 FUN_18052c1b4 ===== */

ulonglong FUN_18052c1b4(FILE *param_1)

{
  uint *puVar1;
  byte bVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined *puVar8;
  
  if (param_1 == (FILE *)0x0) {
    puVar7 = (undefined4 *)FUN_18051bfb0();
    *puVar7 = 0x16;
    FUN_180527740();
  }
  else if (((*(uint *)((longlong)&param_1->_base + 4) >> 0xd & 1) != 0) &&
          ((*(uint *)((longlong)&param_1->_base + 4) >> 0xc & 1) == 0)) {
    if ((*(uint *)((longlong)&param_1->_base + 4) >> 1 & 1) == 0) {
      LOCK();
      puVar1 = (uint *)((longlong)&param_1->_base + 4);
      *puVar1 = *puVar1 | 1;
      UNLOCK();
      if (((ulonglong)param_1->_base & 0x4c000000000) == 0) {
        __acrt_stdio_allocate_buffer_nolock();
      }
      pcVar3 = *(char **)&param_1->_cnt;
      iVar5 = param_1->_charbuf;
      param_1->_ptr = pcVar3;
      iVar4 = _fileno(param_1);
      iVar5 = FUN_18052d644(iVar4,pcVar3,iVar5);
      *(int *)&param_1->_base = iVar5;
      if (1 < iVar5 + 1U) {
        if (((ulonglong)param_1->_base & 0x600000000) == 0) {
          iVar5 = _fileno(param_1);
          if ((iVar5 == -1) || (iVar5 = _fileno(param_1), iVar5 == -2)) {
            puVar8 = &DAT_1809198d0;
          }
          else {
            iVar5 = _fileno(param_1);
            uVar6 = _fileno(param_1);
            puVar8 = (undefined *)
                     ((&DAT_180c9f990)[(longlong)iVar5 >> 6] + (ulonglong)(uVar6 & 0x3f) * 0x48);
          }
          if ((puVar8[0x38] & 0x82) == 0x82) {
            LOCK();
            puVar1 = (uint *)((longlong)&param_1->_base + 4);
            *puVar1 = *puVar1 | 0x20;
            UNLOCK();
          }
        }
        if (((param_1->_charbuf == 0x200) &&
            ((*(uint *)((longlong)&param_1->_base + 4) >> 6 & 1) != 0)) &&
           ((*(uint *)((longlong)&param_1->_base + 4) >> 8 & 1) == 0)) {
          param_1->_charbuf = 0x1000;
        }
        *(int *)&param_1->_base = *(int *)&param_1->_base + -1;
        bVar2 = *param_1->_ptr;
        param_1->_ptr = param_1->_ptr + 1;
        return (ulonglong)bVar2;
      }
      LOCK();
      puVar1 = (uint *)((longlong)&param_1->_base + 4);
      *puVar1 = *puVar1 | (-(uint)(iVar5 != 0) & 8) + 8;
      UNLOCK();
      *(undefined4 *)&param_1->_base = 0;
    }
    else {
      LOCK();
      puVar1 = (uint *)((longlong)&param_1->_base + 4);
      *puVar1 = *puVar1 | 0x10;
      UNLOCK();
    }
  }
  return 0xffffffff;
}



/* ===== 18052c320 thunk_FUN_18052c010 ===== */

undefined2 thunk_FUN_18052c010(FILE *param_1)

{
  uint *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined *puVar8;
  undefined2 uVar9;
  char *pcVar10;
  char cVar11;
  
  if (param_1 == (FILE *)0x0) {
    puVar7 = (undefined4 *)FUN_18051bfb0();
    *puVar7 = 0x16;
    FUN_180527740();
  }
  else if (((*(uint *)((longlong)&param_1->_base + 4) >> 0xd & 1) != 0) &&
          ((*(uint *)((longlong)&param_1->_base + 4) >> 0xc & 1) == 0)) {
    if ((*(uint *)((longlong)&param_1->_base + 4) >> 1 & 1) == 0) {
      LOCK();
      puVar1 = (uint *)((longlong)&param_1->_base + 4);
      *puVar1 = *puVar1 | 1;
      UNLOCK();
      if (((ulonglong)param_1->_base & 0x4c000000000) == 0) {
        __acrt_stdio_allocate_buffer_nolock();
      }
      iVar3 = *(int *)&param_1->_base;
      if (iVar3 == 1) {
        cVar11 = *param_1->_ptr;
      }
      else {
        cVar11 = '\0';
      }
      pcVar10 = *(char **)&param_1->_cnt;
      iVar5 = param_1->_charbuf;
      param_1->_ptr = pcVar10;
      iVar4 = _fileno(param_1);
      iVar5 = FUN_18052d644(iVar4,pcVar10,iVar5);
      *(int *)&param_1->_base = iVar5;
      if (2 < iVar5 + 1U) {
        if (((ulonglong)param_1->_base & 0x600000000) == 0) {
          iVar5 = _fileno(param_1);
          if ((iVar5 == -1) || (iVar5 = _fileno(param_1), iVar5 == -2)) {
            puVar8 = &DAT_1809198d0;
          }
          else {
            iVar5 = _fileno(param_1);
            uVar6 = _fileno(param_1);
            puVar8 = (undefined *)
                     ((&DAT_180c9f990)[(longlong)iVar5 >> 6] + (ulonglong)(uVar6 & 0x3f) * 0x48);
          }
          if ((puVar8[0x38] & 0x82) == 0x82) {
            LOCK();
            puVar1 = (uint *)((longlong)&param_1->_base + 4);
            *puVar1 = *puVar1 | 0x20;
            UNLOCK();
          }
        }
        if (((param_1->_charbuf == 0x200) &&
            ((*(uint *)((longlong)&param_1->_base + 4) >> 6 & 1) != 0)) &&
           ((*(uint *)((longlong)&param_1->_base + 4) >> 8 & 1) == 0)) {
          param_1->_charbuf = 0x1000;
        }
        pcVar10 = param_1->_ptr;
        if (iVar3 == 1) {
          cVar2 = *pcVar10;
          *(int *)&param_1->_base = *(int *)&param_1->_base + -1;
          uVar9 = CONCAT11(cVar2,cVar11);
          pcVar10 = pcVar10 + 1;
        }
        else {
          uVar9 = *(undefined2 *)pcVar10;
          *(int *)&param_1->_base = *(int *)&param_1->_base + -2;
          pcVar10 = pcVar10 + 2;
        }
        param_1->_ptr = pcVar10;
        return uVar9;
      }
      LOCK();
      puVar1 = (uint *)((longlong)&param_1->_base + 4);
      *puVar1 = *puVar1 | (-(uint)(iVar5 != 0) & 8) + 8;
      UNLOCK();
      *(undefined4 *)&param_1->_base = 0;
    }
    else {
      LOCK();
      puVar1 = (uint *)((longlong)&param_1->_base + 4);
      *puVar1 = *puVar1 | 0x10;
      UNLOCK();
    }
  }
  return 0xffff;
}



/* ===== 18052c33c FUN_18052c33c ===== */

BOOL FUN_18052c33c(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,undefined4 *param_4)

{
  BOOL BVar1;
  
  __acrt_lock(*param_2);
  DAT_180c9fe58 = *(undefined8 *)*param_3;
  BVar1 = EnumSystemLocalesW((LOCALE_ENUMPROCW)&LAB_18052c328,1);
  DAT_180c9fe58 = 0;
  __acrt_unlock(*param_4);
  return BVar1;
}



/* ===== 18052c398 FUN_18052c398 ===== */

longlong FUN_18052c398(void)

{
  longlong lVar1;
  
  if (DAT_181149008 == -1) {
    return 0;
  }
  if (DAT_181149008 == 0) {
    lVar1 = FUN_18052c3d0(1,"CompareStringEx",&DAT_18057dc60,"CompareStringEx");
    return lVar1;
  }
  return DAT_181149008;
}



/* ===== 18052c3d0 FUN_18052c3d0 ===== */

FARPROC FUN_18052c3d0(uint param_1,LPCSTR param_2,uint *param_3,uint *param_4)

{
  longlong lVar1;
  uint uVar2;
  wchar_t *lpLibFileName;
  DWORD DVar3;
  int iVar4;
  BOOL BVar5;
  HMODULE hLibModule;
  FARPROC pFVar6;
  FARPROC pFVar7;
  DWORD local_res18 [2];
  
  do {
    if (param_3 == param_4) {
      pFVar7 = (FARPROC)0x0;
LAB_18052c4c2:
      __acrt_lock(0xe);
      local_res18[0] = 0;
      BVar5 = VirtualProtect(&DAT_181149000,0x100,4,local_res18);
      if (BVar5 != 0) {
        pFVar6 = pFVar7;
        if (pFVar7 == (FARPROC)0x0) {
          pFVar6 = (FARPROC)0xffffffffffffffff;
        }
        LOCK();
        (&DAT_181149000)[param_1] = pFVar6;
        UNLOCK();
        BVar5 = VirtualProtect(&DAT_181149000,0x100,2,local_res18);
        if (BVar5 != 0) {
          __acrt_unlock(0xe);
          return pFVar7;
        }
      }
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar2 = *param_3;
    hLibModule = (HMODULE)(&DAT_180c9fda0)[uVar2];
    if (hLibModule == (HMODULE)0x0) {
      lpLibFileName = (wchar_t *)(&PTR_u_api_ms_win_core_datetime_l1_1_1_18057d5f0)[uVar2];
      hLibModule = LoadLibraryExW(lpLibFileName,(HANDLE)0x0,0x800);
      if ((hLibModule != (HMODULE)0x0) ||
         ((((DVar3 = GetLastError(), DVar3 == 0x57 &&
            (iVar4 = wcsncmp(lpLibFileName,L"api-ms-",7), iVar4 != 0)) &&
           (iVar4 = wcsncmp(lpLibFileName,L"ext-ms-",7), iVar4 != 0)) &&
          (hLibModule = LoadLibraryExW(lpLibFileName,(HANDLE)0x0,0), hLibModule != (HMODULE)0x0))))
      {
        LOCK();
        lVar1 = (&DAT_180c9fda0)[uVar2];
        (&DAT_180c9fda0)[uVar2] = hLibModule;
        UNLOCK();
        if (lVar1 != 0) {
          FreeLibrary(hLibModule);
        }
        goto LAB_18052c568;
      }
      LOCK();
      (&DAT_180c9fda0)[uVar2] = 0xffffffffffffffff;
      UNLOCK();
    }
    else if (hLibModule != (HMODULE)0xffffffffffffffff) {
LAB_18052c568:
      pFVar7 = GetProcAddress(hLibModule,param_2);
      goto LAB_18052c4c2;
    }
    param_3 = param_3 + 1;
  } while( true );
}



/* ===== 18052c584 FUN_18052c584 ===== */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 FUN_18052c584(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  
  if (DAT_1811490d0 == (code *)0xffffffffffffffff) {
    return 0xc0000225;
  }
  pcVar1 = DAT_1811490d0;
  if ((DAT_1811490d0 == (code *)0x0) &&
     (pcVar1 = (code *)FUN_18052c3d0(0x1a,"AppPolicyGetProcessTerminationMethod",&DAT_18057ddc0,
                                     &DAT_18057ddc4), pcVar1 == (code *)0x0)) {
    return 0xc0000225;
  }
  uVar2 = (*pcVar1)(0xfffffffffffffffa,param_1);
  return uVar2;
}



/* ===== 18052c5e0 FUN_18052c5e0 ===== */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 FUN_18052c5e0(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  
  if (DAT_1811490d8 == (code *)0xffffffffffffffff) {
    return 0xc0000225;
  }
  pcVar1 = DAT_1811490d8;
  if ((DAT_1811490d8 == (code *)0x0) &&
     (pcVar1 = (code *)FUN_18052c3d0(0x1b,"AppPolicyGetThreadInitializationType",&DAT_18057ddf0,
                                     &DAT_18057ddf4), pcVar1 == (code *)0x0)) {
    return 0xc0000225;
  }
  uVar2 = (*pcVar1)(0xfffffffffffffffa,param_1);
  return uVar2;
}



/* ===== 18052c63c FUN_18052c63c ===== */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 FUN_18052c63c(void)

{
  code *pcVar1;
  undefined8 uVar2;
  
  if (DAT_181149000 == (code *)0xffffffffffffffff) {
    return 1;
  }
  pcVar1 = DAT_181149000;
  if ((DAT_181149000 == (code *)0x0) &&
     (pcVar1 = (code *)FUN_18052c3d0(0,"AreFileApisANSI",&DAT_18057dc48,&DAT_18057dc4c),
     pcVar1 == (code *)0x0)) {
    return 1;
  }
  uVar2 = (*pcVar1)();
  return uVar2;
}



/* ===== 18052c688 FUN_18052c688 ===== */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_18052c688(undefined8 param_1,DWORD param_2,PCNZWCH param_3,int param_4,PCNZWCH param_5,
                  int param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  LCID Locale;
  code *pcVar1;
  
  pcVar1 = (code *)FUN_18052c398();
  if (pcVar1 == (code *)0x0) {
    Locale = FUN_18052cc8c(param_1,0);
    CompareStringW(Locale,param_2,param_3,param_4,param_5,param_6);
  }
  else {
    (*pcVar1)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  }
  return;
}



/* ===== 18052c74c FUN_18052c74c ===== */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_18052c74c(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 local_res8;
  undefined1 local_28 [4];
  undefined4 local_24;
  undefined4 local_20 [2];
  undefined8 *local_18 [2];
  
  local_res8 = param_1;
  if (DAT_181149010 == (code *)0xffffffffffffffff) {
LAB_18052c7b0:
    local_18[0] = &local_res8;
    local_24 = 4;
    local_20[0] = 4;
    FUN_18052c33c(local_28,local_20,local_18,&local_24);
  }
  else {
    pcVar1 = DAT_181149010;
    if (DAT_181149010 == (code *)0x0) {
      pcVar1 = (code *)FUN_18052c3d0(2,"EnumSystemLocalesEx",&DAT_18057dc78,"EnumSystemLocalesEx");
      if (pcVar1 == (code *)0x0) goto LAB_18052c7b0;
    }
    (*pcVar1)(local_res8,param_2,param_3,param_4);
  }
  return;
}



/* ===== 18052c7f0 KERNEL32.DLL::FlsAlloc ===== */

DWORD __stdcall FlsAlloc(PFLS_CALLBACK_FUNCTION lpCallback)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00018052c7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = FlsAlloc(lpCallback);
  return DVar1;
}



/* ===== 18052c7f8 KERNEL32.DLL::FlsFree ===== */

BOOL __stdcall FlsFree(DWORD dwFlsIndex)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00018052c7f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = FlsFree(dwFlsIndex);
  return BVar1;
}



/* ===== 18052c800 KERNEL32.DLL::FlsGetValue ===== */

PVOID __stdcall FlsGetValue(DWORD dwFlsIndex)

{
  PVOID pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00018052c800. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = FlsGetValue(dwFlsIndex);
  return pvVar1;
}



/* ===== 18052c808 FUN_18052c808 ===== */

void FUN_18052c808(void)

{
                    /* WARNING: Could not recover jumptable at 0x00018052c80f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_181149018)();
  return;
}



/* ===== 18052c814 KERNEL32.DLL::FlsSetValue ===== */

BOOL __stdcall FlsSetValue(DWORD dwFlsIndex,PVOID lpFlsData)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00018052c814. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = FlsSetValue(dwFlsIndex,lpFlsData);
  return BVar1;
}



/* ===== 18052c81c FUN_18052c81c ===== */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_18052c81c(undefined8 param_1,DWORD param_2,SYSTEMTIME *param_3,LPCWSTR param_4,
                  LPWSTR param_5,int param_6,undefined8 param_7)

{
  LCID Locale;
  code *pcVar1;
  
  if (DAT_181149028 == (code *)0xffffffffffffffff) {
LAB_18052c8a0:
    Locale = FUN_18052cc8c(param_1,0);
    GetDateFormatW(Locale,param_2,param_3,param_4,param_5,param_6);
  }
  else {
    pcVar1 = DAT_181149028;
    if (DAT_181149028 == (code *)0x0) {
      pcVar1 = (code *)FUN_18052c3d0(5,"GetDateFormatEx",&DAT_18057dcb0,"GetDateFormatEx");
      if (pcVar1 == (code *)0x0) goto LAB_18052c8a0;
    }
    (*pcVar1)(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  }
  return;
}



/* ===== 18052c8e4 FUN_18052c8e4 ===== */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_18052c8e4(undefined8 param_1,LCTYPE param_2,LPWSTR param_3,int param_4)

{
  LCID Locale;
  code *pcVar1;
  
  if (DAT_181149050 == (code *)0xffffffffffffffff) {
LAB_18052c949:
    Locale = FUN_18052cc8c(param_1,0);
    GetLocaleInfoW(Locale,param_2,param_3,param_4);
  }
  else {
    pcVar1 = DAT_181149050;
    if (DAT_181149050 == (code *)0x0) {
      pcVar1 = (code *)FUN_18052c3d0(10,"GetLocaleInfoEx",&DAT_18057dcc8,"GetLocaleInfoEx");
      if (pcVar1 == (code *)0x0) goto LAB_18052c949;
    }
    (*pcVar1)(param_1,param_2,param_3,param_4);
  }
  return;
}



