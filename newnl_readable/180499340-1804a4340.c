/* ===== 180499340 FUN_180499340 ===== */

longlong * FUN_180499340(longlong *param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  
  if ((uint)((int)param_1[1] - (int)*param_1) < 0x12) {
    puVar3 = (undefined4 *)FUN_1804a9db0(param_1,0x12);
  }
  else {
    puVar3 = (undefined4 *)*param_1;
  }
  if (param_2 == 0) {
    *puVar3 = 0x4c4c554e;
    uVar4 = 4;
  }
  else {
    if (param_2 >> 0x20 == 0) {
      uVar6 = 9;
      uVar4 = 10;
    }
    else {
      uVar2 = 0x1f;
      uVar5 = (uint)((ulonglong)param_2 >> 0x20);
      if (uVar5 != 0) {
        for (; uVar5 >> uVar2 == 0; uVar2 = uVar2 - 1) {
        }
      }
      iVar1 = (uVar2 >> 3) * 2;
      uVar4 = (ulonglong)(iVar1 + 0xc);
      uVar6 = (ulonglong)(iVar1 + 0xb);
    }
    *(undefined2 *)puVar3 = 0x7830;
    do {
      uVar2 = (uint)param_2;
      param_2 = param_2 >> 4;
      uVar5 = (int)uVar6 - 1;
      *(char *)((longlong)puVar3 + uVar6) = "0123456789abcdef"[uVar2 & 0xf];
      uVar6 = (ulonglong)uVar5;
    } while (1 < uVar5);
  }
  *param_1 = uVar4 + (longlong)puVar3;
  return param_1;
}



/* ===== 180499410 FUN_180499410 ===== */

char * FUN_180499410(char *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  
  if ((int)param_2 < 0) {
    param_2 = -param_2;
    *param_1 = '-';
    param_1 = param_1 + 1;
  }
  if (param_2 < 10000) {
    if (param_2 < 10) goto LAB_180499561;
    if (99 < param_2) {
      if (999 < param_2) goto LAB_180499519;
      goto LAB_180499535;
    }
  }
  else {
    uVar2 = param_2 / 10000;
    param_2 = param_2 % 10000;
    if (uVar2 < 10000) {
      if (9 < uVar2) {
        if (99 < uVar2) {
          if (999 < uVar2) goto LAB_1804994c7;
          goto LAB_1804994e3;
        }
        goto LAB_1804994f9;
      }
    }
    else {
      uVar3 = (ulonglong)uVar2 / 10000;
      uVar1 = (uint)uVar3;
      uVar2 = uVar2 + uVar1 * -10000;
      if (9 < uVar1) {
        *param_1 = (char)(uVar1 / 10) + '0';
        uVar3 = (ulonglong)(uVar1 % 10);
        param_1 = param_1 + 1;
      }
      *param_1 = (char)uVar3 + '0';
      param_1 = param_1 + 1;
LAB_1804994c7:
      uVar1 = uVar2 * 0x20c5 >> 0x17;
      *param_1 = (char)uVar1 + '0';
      uVar2 = uVar2 + uVar1 * -1000;
      param_1 = param_1 + 1;
LAB_1804994e3:
      uVar1 = uVar2 * 0x29 >> 0xc;
      *param_1 = (char)uVar1 + '0';
      uVar2 = uVar2 + uVar1 * -100;
      param_1 = param_1 + 1;
LAB_1804994f9:
      uVar1 = uVar2 * 0x67 >> 10;
      *param_1 = (char)uVar1 + '0';
      uVar2 = uVar2 + uVar1 * -10;
      param_1 = param_1 + 1;
    }
    *param_1 = (char)uVar2 + '0';
    param_1 = param_1 + 1;
LAB_180499519:
    uVar2 = param_2 * 0x20c5 >> 0x17;
    *param_1 = (char)uVar2 + '0';
    param_2 = param_2 + uVar2 * -1000;
    param_1 = param_1 + 1;
LAB_180499535:
    uVar2 = param_2 * 0x29 >> 0xc;
    *param_1 = (char)uVar2 + '0';
    param_2 = param_2 + uVar2 * -100;
    param_1 = param_1 + 1;
  }
  uVar2 = param_2 * 0x67 >> 10;
  *param_1 = (char)uVar2 + '0';
  param_2 = param_2 + uVar2 * -10;
  param_1 = param_1 + 1;
LAB_180499561:
  *param_1 = (char)param_2 + '0';
  return param_1 + 1;
}



/* ===== 180499570 FUN_180499570 ===== */

undefined1 * FUN_180499570(longlong param_1,ulonglong *param_2,int *param_3)

{
  longlong lVar1;
  uint uVar2;
  undefined1 *puVar3;
  int *piVar4;
  ulonglong uVar5;
  
  uVar5 = *param_2;
  uVar2 = (uint)((longlong)uVar5 >> 0x2f);
  if (uVar2 == 0xfffffffb) {
    *param_3 = *(int *)((uVar5 & 0x7fffffffffff) + 0x14);
    return (undefined1 *)((*param_2 & 0x7fffffffffff) + 0x18);
  }
  if (uVar2 == 0xfffffff3) {
    uVar5 = uVar5 & 0x7fffffffffff;
    if (*(char *)(uVar5 + 10) == '\x03') {
      *param_3 = *(int *)(uVar5 + 0x30) - *(int *)(uVar5 + 0x58);
      puVar3 = &DAT_18058b643;
      if (*(undefined1 **)(uVar5 + 0x58) != (undefined1 *)0x0) {
        puVar3 = *(undefined1 **)(uVar5 + 0x58);
      }
      return puVar3;
    }
  }
  else if (uVar2 < 0xfffffff2) {
    lVar1 = *(longlong *)(param_1 + 0x10);
    *(longlong *)(lVar1 + 0xe0) = param_1;
    *(undefined8 *)(lVar1 + 200) = *(undefined8 *)(lVar1 + 0xd8);
    piVar4 = (int *)FUN_1804b8ff0((undefined8 *)(lVar1 + 200),0xf000035,*param_2);
    *param_3 = *piVar4 - piVar4[4];
    return *(undefined1 **)(piVar4 + 4);
  }
  return (undefined1 *)0x0;
}



/* ===== 180499630 FUN_180499630 ===== */

byte * FUN_180499630(byte *param_1,uint param_2)

{
  for (; 0x7f < param_2; param_2 = param_2 >> 7) {
    *param_1 = (byte)param_2 | 0x80;
    param_1 = param_1 + 1;
  }
  *param_1 = (byte)param_2;
  return param_1 + 1;
}



/* ===== 180499660 FUN_180499660 ===== */

longlong * FUN_180499660(longlong *param_1,uint param_2,undefined8 param_3,uint param_4)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  
  uVar3 = param_2 >> 0x10 & 0xff;
  uVar1 = (param_2 >> 0x18) - 1;
  if (uVar1 < param_4) {
    param_4 = uVar1;
  }
  uVar1 = param_4;
  if (param_4 < uVar3) {
    uVar1 = uVar3;
  }
  if ((uint)((int)param_1[1] - (int)*param_1) < uVar1) {
    lVar2 = FUN_1804a9db0();
  }
  else {
    lVar2 = *param_1;
  }
  if ((param_2 & 0x100) != 0) {
    lVar2 = FUN_180540530(lVar2,param_3,param_4);
    lVar2 = lVar2 + (ulonglong)param_4;
  }
  if (param_4 < uVar3) {
    FUN_180540170(lVar2,0x20,uVar3 - param_4);
    lVar2 = lVar2 + (ulonglong)(uVar3 - param_4);
  }
  if ((param_2 & 0x100) == 0) {
    lVar2 = FUN_180540530(lVar2,param_3,param_4);
    *param_1 = lVar2 + (ulonglong)param_4;
  }
  else {
    *param_1 = lVar2;
  }
  return param_1;
}



/* ===== 180499740 FUN_180499740 ===== */

int * FUN_180499740(int *param_1,byte *param_2,int param_3)

{
  char cVar1;
  byte *pbVar2;
  byte *pbVar3;
  undefined1 *puVar4;
  byte *pbVar5;
  byte bVar6;
  uint uVar7;
  
  if (param_1[2] == *param_1) {
    pbVar2 = (byte *)FUN_1804a9db0(param_1,1);
  }
  else {
    pbVar2 = *(byte **)param_1;
  }
  *pbVar2 = 0x22;
  pbVar3 = pbVar2 + 1;
  *(byte **)param_1 = pbVar3;
  if (param_3 != 0) {
    pbVar5 = pbVar3;
    do {
      param_3 = param_3 + -1;
      bVar6 = *param_2;
      uVar7 = (uint)bVar6;
      param_2 = param_2 + 1;
      if ((uint)(param_1[2] - (int)pbVar5) < 4) {
        pbVar3 = (byte *)FUN_1804a9db0(param_1,4);
      }
      if (((bVar6 == 0x22) || (bVar6 == 0x5c)) || (bVar6 == 10)) {
        *pbVar3 = 0x5c;
        pbVar2 = pbVar3 + 1;
      }
      else {
        pbVar2 = pbVar3;
        if (((&DAT_18056fcb1)[bVar6] & 1) != 0) {
          *pbVar3 = 0x5c;
          pbVar2 = pbVar3 + 1;
          if ((bVar6 < 100) && (((&DAT_18056fcb1)[*param_2] & 8) == 0)) {
            if (9 < bVar6) goto LAB_180499812;
          }
          else {
            *pbVar2 = (99 < bVar6) + 0x30;
            pbVar2 = pbVar3 + 2;
            if (99 < bVar6) {
              uVar7 = bVar6 - 100;
            }
LAB_180499812:
            cVar1 = (char)(uVar7 * 0xcd >> 0xb);
            *pbVar2 = cVar1 + 0x30;
            bVar6 = (char)uVar7 + cVar1 * -10;
            pbVar2 = pbVar2 + 1;
          }
          bVar6 = bVar6 + 0x30;
        }
      }
      *pbVar2 = bVar6;
      pbVar3 = pbVar2 + 1;
      *(byte **)param_1 = pbVar3;
      pbVar5 = (byte *)((ulonglong)pbVar3 & 0xffffffff);
    } while (param_3 != 0);
  }
  if (param_1[2] == (int)pbVar2 + 1) {
    puVar4 = (undefined1 *)FUN_1804a9db0(param_1,1);
    *puVar4 = 0x22;
    *(undefined1 **)param_1 = puVar4 + 1;
    return param_1;
  }
  pbVar2[1] = 0x22;
  *(byte **)param_1 = pbVar2 + 2;
  return param_1;
}



/* ===== 1804998b0 FUN_1804998b0 ===== */

void FUN_1804998b0(longlong param_1,ulonglong *param_2,int param_3)

{
  byte bVar1;
  byte *pbVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined1 *puVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  
  uVar3 = *(undefined4 *)(param_1 + 0x30);
  if (*(int *)(param_1 + 0x48) == *(int *)(param_1 + 0x40)) {
    puVar6 = (undefined1 *)FUN_1804a9db0(param_1 + 0x40,1);
  }
  else {
    puVar6 = *(undefined1 **)(param_1 + 0x40);
  }
  *puVar6 = (char)uVar3;
  *(undefined1 **)(param_1 + 0x40) = puVar6 + 1;
  pbVar2 = *(byte **)(param_1 + 0x20);
  if (pbVar2 < *(byte **)(param_1 + 0x28)) {
    uVar5 = (uint)*pbVar2;
    *(byte **)(param_1 + 0x20) = pbVar2 + 1;
  }
  else {
    uVar5 = FUN_180499ab0(param_1);
  }
  *(uint *)(param_1 + 0x30) = uVar5;
  if ((uVar5 == 10) || (uVar5 == 0xd)) {
    FUN_180499b40(param_1);
  }
  iVar4 = *(int *)(param_1 + 0x30);
  if (iVar4 != -1) {
    do {
      if ((iVar4 == 10) || (iVar4 == 0xd)) {
        if (*(int *)(param_1 + 0x48) == *(int *)(param_1 + 0x40)) {
          puVar6 = (undefined1 *)FUN_1804a9db0(param_1 + 0x40,1);
        }
        else {
          puVar6 = *(undefined1 **)(param_1 + 0x40);
        }
        *puVar6 = 10;
        *(undefined1 **)(param_1 + 0x40) = puVar6 + 1;
        FUN_180499b40(param_1);
        if (param_2 == (ulonglong *)0x0) {
          *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_1 + 0x50);
        }
      }
      else if (iVar4 == 0x5d) {
        iVar4 = FUN_18049a810(param_1);
        if (iVar4 == param_3) {
          uVar3 = *(undefined4 *)(param_1 + 0x30);
          if (*(int *)(param_1 + 0x48) == *(int *)(param_1 + 0x40)) {
            puVar6 = (undefined1 *)FUN_1804a9db0(param_1 + 0x40,1);
          }
          else {
            puVar6 = *(undefined1 **)(param_1 + 0x40);
          }
          *puVar6 = (char)uVar3;
          *(undefined1 **)(param_1 + 0x40) = puVar6 + 1;
          pbVar2 = *(byte **)(param_1 + 0x20);
          if (pbVar2 < *(byte **)(param_1 + 0x28)) {
            uVar5 = (uint)*pbVar2;
            *(byte **)(param_1 + 0x20) = pbVar2 + 1;
          }
          else {
            uVar5 = FUN_180499ab0(param_1);
          }
          *(uint *)(param_1 + 0x30) = uVar5;
          if (param_2 != (ulonglong *)0x0) {
            uVar7 = FUN_1804a2560(param_1,(ulonglong)(param_3 + 2) + *(longlong *)(param_1 + 0x50),
                                  *(int *)(param_1 + 0x40) +
                                  (param_3 * -2 - *(int *)(param_1 + 0x50)) + -4);
            *param_2 = uVar7 | 0xfffd800000000000;
          }
          return;
        }
      }
      else {
        if (*(int *)(param_1 + 0x48) == *(int *)(param_1 + 0x40)) {
          puVar6 = (undefined1 *)FUN_1804a9db0(param_1 + 0x40,1);
        }
        else {
          puVar6 = *(undefined1 **)(param_1 + 0x40);
        }
        *puVar6 = (char)iVar4;
        *(undefined1 **)(param_1 + 0x40) = puVar6 + 1;
        pbVar2 = *(byte **)(param_1 + 0x20);
        if (pbVar2 < *(byte **)(param_1 + 0x28)) {
          bVar1 = *pbVar2;
          *(byte **)(param_1 + 0x20) = pbVar2 + 1;
          *(uint *)(param_1 + 0x30) = (uint)bVar1;
        }
        else {
          uVar3 = FUN_180499ab0(param_1);
          *(undefined4 *)(param_1 + 0x30) = uVar3;
        }
      }
      iVar4 = *(int *)(param_1 + 0x30);
    } while (iVar4 != -1);
  }
  uVar8 = 0x92d;
  if (param_2 != (ulonglong *)0x0) {
    uVar8 = 0x916;
  }
                    /* WARNING: Subroutine does not return */
  FUN_18049b070(param_1,300,uVar8);
}



/* ===== 180499ab0 FUN_180499ab0 ===== */

ulonglong FUN_180499ab0(longlong param_1)

{
  byte *pbVar1;
  ulonglong local_res8 [4];
  
  pbVar1 = (byte *)(**(code **)(param_1 + 0x60))
                             (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x68),
                              local_res8);
  if ((pbVar1 == (byte *)0x0) || (local_res8[0] == 0)) {
    return 0xffffffffffffffff;
  }
  if (0x7ffffeff < local_res8[0]) {
    if (local_res8[0] != 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_180484480(*(undefined8 *)(param_1 + 8));
    }
    local_res8[0] = -(longlong)pbVar1 - 1;
    if (0x7ffffeff < local_res8[0]) {
      local_res8[0] = 0x7ffffeff;
    }
    *(undefined4 *)(param_1 + 0xb0) = 1;
  }
  *(byte **)(param_1 + 0x28) = pbVar1 + local_res8[0];
  *(byte **)(param_1 + 0x20) = pbVar1 + 1;
  return (ulonglong)*pbVar1;
}



/* ===== 180499b40 FUN_180499b40 ===== */

void FUN_180499b40(longlong param_1)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  
  pbVar1 = *(byte **)(param_1 + 0x20);
  uVar3 = *(uint *)(param_1 + 0x30);
  if (pbVar1 < *(byte **)(param_1 + 0x28)) {
    uVar2 = (uint)*pbVar1;
    *(byte **)(param_1 + 0x20) = pbVar1 + 1;
  }
  else {
    uVar2 = FUN_180499ab0();
  }
  *(uint *)(param_1 + 0x30) = uVar2;
  if (((uVar2 == 10) || (uVar2 == 0xd)) && (uVar2 != uVar3)) {
    pbVar1 = *(byte **)(param_1 + 0x20);
    if (pbVar1 < *(byte **)(param_1 + 0x28)) {
      uVar3 = (uint)*pbVar1;
      *(byte **)(param_1 + 0x20) = pbVar1 + 1;
    }
    else {
      uVar3 = FUN_180499ab0(param_1);
    }
    *(uint *)(param_1 + 0x30) = uVar3;
  }
  *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
  if (0x7ffffeff < *(int *)(param_1 + 0x70)) {
                    /* WARNING: Subroutine does not return */
    FUN_18049b070(param_1,*(undefined4 *)(param_1 + 0x34),0x8cb);
  }
  return;
}



/* ===== 180499bd0 FUN_180499bd0 ===== */

void FUN_180499bd0(longlong param_1,undefined8 *param_2)

{
  byte bVar1;
  byte *pbVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  undefined1 *puVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  
  uVar9 = *(uint *)(param_1 + 0x30);
  uVar10 = 0x65;
  if (uVar9 == 0x30) {
    if (*(int *)(param_1 + 0x48) == *(int *)(param_1 + 0x40)) {
      puVar7 = (undefined1 *)FUN_1804a9db0(param_1 + 0x40,1);
    }
    else {
      puVar7 = *(undefined1 **)(param_1 + 0x40);
    }
    *puVar7 = 0x30;
    *(undefined1 **)(param_1 + 0x40) = puVar7 + 1;
    do {
      pbVar2 = *(byte **)(param_1 + 0x20);
      if (pbVar2 < *(byte **)(param_1 + 0x28)) {
        uVar9 = (uint)*pbVar2;
        *(byte **)(param_1 + 0x20) = pbVar2 + 1;
      }
      else {
        uVar9 = FUN_180499ab0(param_1);
      }
      *(uint *)(param_1 + 0x30) = uVar9;
    } while (uVar9 == 0x5f);
    if ((uVar9 | 0x20) == 0x78) {
      uVar10 = 0x70;
    }
  }
  uVar5 = uVar9;
  do {
    if ((char)(&DAT_18056fcb1)[(int)uVar5] < '\0') {
LAB_180499c92:
      if (uVar5 != 0x5f) goto LAB_180499c97;
    }
    else {
      if (uVar5 != 0x2e) {
        if (((uVar5 - 0x2b & 0xfffffffd) != 0) || ((uVar9 | 0x20) != uVar10)) {
          if (*(int *)(param_1 + 0x48) == *(int *)(param_1 + 0x40)) {
            puVar7 = (undefined1 *)FUN_1804a9db0(param_1 + 0x40,1);
          }
          else {
            puVar7 = *(undefined1 **)(param_1 + 0x40);
          }
          *puVar7 = 0;
          *(undefined1 **)(param_1 + 0x40) = puVar7 + 1;
          iVar6 = FUN_1804972d0(*(undefined8 *)(param_1 + 0x50),
                                ~*(uint *)(param_1 + 0x50) + (int)(puVar7 + 1),param_2,0xe);
          if (iVar6 != 1) {
            if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_18049b070(param_1,0x129,0x905);
            }
            lVar8 = *(longlong *)(param_1 + 8);
            if (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x188) == 0) {
              lVar3 = *(longlong *)(lVar8 + 0x28);
              lVar4 = *(longlong *)(lVar8 + 0x38);
              FUN_180489a10(lVar8);
              *(longlong *)(lVar8 + 0x28) = *(longlong *)(lVar8 + 0x38) + (lVar3 - lVar4);
            }
            if (iVar6 == 2) {
              lVar8 = FUN_1804916f0(lVar8,0x20);
              *(undefined1 *)(lVar8 + 9) = 10;
              *(undefined2 *)(lVar8 + 10) = 0x12;
              *(undefined8 *)(lVar8 + 0x10) = 0;
              *(undefined8 *)(lVar8 + 0x18) = *param_2;
            }
            else {
              lVar8 = FUN_1804916f0(lVar8,0x18);
              *(undefined1 *)(lVar8 + 9) = 10;
              *(ushort *)(lVar8 + 10) = (iVar6 != 5) + 0xb;
              *(undefined8 *)(lVar8 + 0x10) = *param_2;
            }
            FUN_1804a2520(param_1,param_2);
          }
          return;
        }
        goto LAB_180499c92;
      }
LAB_180499c97:
      if (*(int *)(param_1 + 0x48) == *(int *)(param_1 + 0x40)) {
        puVar7 = (undefined1 *)FUN_1804a9db0(param_1 + 0x40,1);
      }
      else {
        puVar7 = *(undefined1 **)(param_1 + 0x40);
      }
      *puVar7 = (char)uVar5;
      *(undefined1 **)(param_1 + 0x40) = puVar7 + 1;
      uVar9 = uVar5;
    }
    pbVar2 = *(byte **)(param_1 + 0x20);
    if (pbVar2 < *(byte **)(param_1 + 0x28)) {
      bVar1 = *pbVar2;
      uVar5 = (uint)bVar1;
      *(byte **)(param_1 + 0x20) = pbVar2 + 1;
      *(uint *)(param_1 + 0x30) = (uint)bVar1;
    }
    else {
      uVar5 = FUN_180499ab0(param_1);
      *(uint *)(param_1 + 0x30) = uVar5;
    }
  } while( true );
}



/* ===== 180499e00 FUN_180499e00 ===== */

ulonglong FUN_180499e00(longlong param_1,ulonglong *param_2)

{
  char cVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined1 *puVar7;
  ulonglong uVar8;
  
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_1 + 0x50);
  uVar8 = (ulonglong)*(int *)(param_1 + 0x30);
  cVar1 = (&DAT_18056fcb1)[uVar8];
  while (-1 < cVar1) {
    switch((int)uVar8) {
    default:
      pbVar3 = *(byte **)(param_1 + 0x20);
      if (pbVar3 < *(byte **)(param_1 + 0x28)) {
        bVar2 = *pbVar3;
        *(byte **)(param_1 + 0x20) = pbVar3 + 1;
        *(uint *)(param_1 + 0x30) = (uint)bVar2;
        return uVar8 & 0xffffffff;
      }
      uVar5 = FUN_180499ab0(param_1);
      *(undefined4 *)(param_1 + 0x30) = uVar5;
      return uVar8 & 0xffffffff;
    case 9:
    case 0xb:
    case 0xc:
    case 0x20:
      pbVar3 = *(byte **)(param_1 + 0x20);
      if (pbVar3 < *(byte **)(param_1 + 0x28)) {
        bVar2 = *pbVar3;
        *(byte **)(param_1 + 0x20) = pbVar3 + 1;
        *(uint *)(param_1 + 0x30) = (uint)bVar2;
      }
      else {
        uVar5 = FUN_180499ab0(param_1);
        *(undefined4 *)(param_1 + 0x30) = uVar5;
      }
      break;
    case 10:
    case 0xd:
      FUN_180499b40(param_1);
      break;
    case 0x21:
      pbVar3 = *(byte **)(param_1 + 0x20);
      if (pbVar3 < *(byte **)(param_1 + 0x28)) {
        uVar6 = (uint)*pbVar3;
        *(byte **)(param_1 + 0x20) = pbVar3 + 1;
      }
      else {
        uVar6 = FUN_180499ab0(param_1);
      }
      *(uint *)(param_1 + 0x30) = uVar6;
      if (uVar6 != 0x3d) {
        return 0x21;
      }
      pbVar3 = *(byte **)(param_1 + 0x20);
      if (pbVar3 < *(byte **)(param_1 + 0x28)) {
        bVar2 = *pbVar3;
        *(byte **)(param_1 + 0x20) = pbVar3 + 1;
        *(uint *)(param_1 + 0x30) = (uint)bVar2;
        return 0x126;
      }
      uVar5 = FUN_180499ab0(param_1);
      *(undefined4 *)(param_1 + 0x30) = uVar5;
      return 0x126;
    case 0x22:
    case 0x27:
      FUN_18049a8b0(param_1,param_2);
      return 299;
    case 0x26:
      pbVar3 = *(byte **)(param_1 + 0x20);
      if (pbVar3 < *(byte **)(param_1 + 0x28)) {
        uVar6 = (uint)*pbVar3;
        *(byte **)(param_1 + 0x20) = pbVar3 + 1;
      }
      else {
        uVar6 = FUN_180499ab0(param_1);
      }
      *(uint *)(param_1 + 0x30) = uVar6;
      if (uVar6 != 0x26) {
        return 0x26;
      }
      pbVar3 = *(byte **)(param_1 + 0x20);
      if (pbVar3 < *(byte **)(param_1 + 0x28)) {
        bVar2 = *pbVar3;
        *(byte **)(param_1 + 0x20) = pbVar3 + 1;
        *(uint *)(param_1 + 0x30) = (uint)bVar2;
        return 0x124;
      }
      uVar5 = FUN_180499ab0(param_1);
      *(undefined4 *)(param_1 + 0x30) = uVar5;
      return 0x124;
    case 0x2d:
      pbVar3 = *(byte **)(param_1 + 0x20);
      if (pbVar3 < *(byte **)(param_1 + 0x28)) {
        uVar6 = (uint)*pbVar3;
        *(byte **)(param_1 + 0x20) = pbVar3 + 1;
      }
      else {
        uVar6 = FUN_180499ab0(param_1);
      }
      *(uint *)(param_1 + 0x30) = uVar6;
      if (uVar6 != 0x2d) {
        if (uVar6 != 0x3e) {
          return 0x2d;
        }
        pbVar3 = *(byte **)(param_1 + 0x20);
        if (pbVar3 < *(byte **)(param_1 + 0x28)) {
          bVar2 = *pbVar3;
          *(byte **)(param_1 + 0x20) = pbVar3 + 1;
          *(uint *)(param_1 + 0x30) = (uint)bVar2;
          return 0x127;
        }
        uVar5 = FUN_180499ab0(param_1);
        *(undefined4 *)(param_1 + 0x30) = uVar5;
        return 0x127;
      }
      pbVar3 = *(byte **)(param_1 + 0x20);
      if (pbVar3 < *(byte **)(param_1 + 0x28)) {
        uVar6 = (uint)*pbVar3;
        *(byte **)(param_1 + 0x20) = pbVar3 + 1;
      }
      else {
        uVar6 = FUN_180499ab0(param_1);
      }
      *(uint *)(param_1 + 0x30) = uVar6;
      if (uVar6 == 0x5b) {
        iVar4 = FUN_18049a810(param_1);
        *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_1 + 0x50);
        if (-1 < iVar4) {
          FUN_1804998b0(param_1,0,iVar4);
          *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_1 + 0x50);
          break;
        }
        uVar6 = *(uint *)(param_1 + 0x30);
      }
      while (((uVar6 != 10 && (uVar6 != 0xd)) && (uVar6 != 0xffffffff))) {
        pbVar3 = *(byte **)(param_1 + 0x20);
        if (pbVar3 < *(byte **)(param_1 + 0x28)) {
          uVar6 = (uint)*pbVar3;
          *(byte **)(param_1 + 0x20) = pbVar3 + 1;
        }
        else {
          uVar6 = FUN_180499ab0(param_1);
        }
        *(uint *)(param_1 + 0x30) = uVar6;
      }
      break;
    case 0x2e:
      if (*(int *)(param_1 + 0x48) == *(int *)(param_1 + 0x40)) {
        puVar7 = (undefined1 *)FUN_1804a9db0(param_1 + 0x40,1);
      }
      else {
        puVar7 = *(undefined1 **)(param_1 + 0x40);
      }
      *puVar7 = (char)uVar8;
      *(undefined1 **)(param_1 + 0x40) = puVar7 + 1;
      pbVar3 = *(byte **)(param_1 + 0x20);
      if (pbVar3 < *(byte **)(param_1 + 0x28)) {
        uVar6 = (uint)*pbVar3;
        *(byte **)(param_1 + 0x20) = pbVar3 + 1;
      }
      else {
        uVar6 = FUN_180499ab0(param_1);
      }
      *(uint *)(param_1 + 0x30) = uVar6;
      if (uVar6 == 0x2e) {
        pbVar3 = *(byte **)(param_1 + 0x20);
        if (pbVar3 < *(byte **)(param_1 + 0x28)) {
          uVar6 = (uint)*pbVar3;
          *(byte **)(param_1 + 0x20) = pbVar3 + 1;
        }
        else {
          uVar6 = FUN_180499ab0(param_1);
        }
        *(uint *)(param_1 + 0x30) = uVar6;
        if (uVar6 != 0x2e) {
          return 0x119;
        }
        pbVar3 = *(byte **)(param_1 + 0x20);
        if (pbVar3 < *(byte **)(param_1 + 0x28)) {
          bVar2 = *pbVar3;
          *(byte **)(param_1 + 0x20) = pbVar3 + 1;
          *(uint *)(param_1 + 0x30) = (uint)bVar2;
          return 0x11a;
        }
        uVar5 = FUN_180499ab0(param_1);
        *(undefined4 *)(param_1 + 0x30) = uVar5;
        return 0x11a;
      }
      if (((&DAT_18056fcb1)[(int)uVar6] & 8) == 0) {
        return 0x2e;
      }
      goto LAB_18049a6fe;
    case 0x3a:
      pbVar3 = *(byte **)(param_1 + 0x20);
      if (pbVar3 < *(byte **)(param_1 + 0x28)) {
        uVar6 = (uint)*pbVar3;
        *(byte **)(param_1 + 0x20) = pbVar3 + 1;
      }
      else {
        uVar6 = FUN_180499ab0(param_1);
      }
      *(uint *)(param_1 + 0x30) = uVar6;
      if (uVar6 != 0x3a) {
        return 0x3a;
      }
      pbVar3 = *(byte **)(param_1 + 0x20);
      if (pbVar3 < *(byte **)(param_1 + 0x28)) {
        bVar2 = *pbVar3;
        *(byte **)(param_1 + 0x20) = pbVar3 + 1;
        *(uint *)(param_1 + 0x30) = (uint)bVar2;
        return 0x128;
      }
      uVar5 = FUN_180499ab0(param_1);
      *(undefined4 *)(param_1 + 0x30) = uVar5;
      return 0x128;
    case 0x3c:
      pbVar3 = *(byte **)(param_1 + 0x20);
      if (pbVar3 < *(byte **)(param_1 + 0x28)) {
        uVar6 = (uint)*pbVar3;
        *(byte **)(param_1 + 0x20) = pbVar3 + 1;
      }
      else {
        uVar6 = FUN_180499ab0(param_1);
      }
      *(uint *)(param_1 + 0x30) = uVar6;
      if (uVar6 == 0x3d) {
        pbVar3 = *(byte **)(param_1 + 0x20);
        if (pbVar3 < *(byte **)(param_1 + 0x28)) {
          bVar2 = *pbVar3;
          *(byte **)(param_1 + 0x20) = pbVar3 + 1;
          *(uint *)(param_1 + 0x30) = (uint)bVar2;
          return 0x11d;
        }
        uVar5 = FUN_180499ab0(param_1);
        *(undefined4 *)(param_1 + 0x30) = uVar5;
        return 0x11d;
      }
      if (uVar6 != 0x3c) {
        return 0x3c;
      }
      pbVar3 = *(byte **)(param_1 + 0x20);
      if (pbVar3 < *(byte **)(param_1 + 0x28)) {
        bVar2 = *pbVar3;
        *(byte **)(param_1 + 0x20) = pbVar3 + 1;
        *(uint *)(param_1 + 0x30) = (uint)bVar2;
        return 0x121;
      }
      uVar5 = FUN_180499ab0(param_1);
      *(undefined4 *)(param_1 + 0x30) = uVar5;
      return 0x121;
    case 0x3d:
      pbVar3 = *(byte **)(param_1 + 0x20);
      if (pbVar3 < *(byte **)(param_1 + 0x28)) {
        uVar6 = (uint)*pbVar3;
        *(byte **)(param_1 + 0x20) = pbVar3 + 1;
      }
      else {
        uVar6 = FUN_180499ab0(param_1);
      }
      *(uint *)(param_1 + 0x30) = uVar6;
      if (uVar6 != 0x3d) {
        return 0x3d;
      }
      pbVar3 = *(byte **)(param_1 + 0x20);
      if (pbVar3 < *(byte **)(param_1 + 0x28)) {
        bVar2 = *pbVar3;
        *(byte **)(param_1 + 0x20) = pbVar3 + 1;
        *(uint *)(param_1 + 0x30) = (uint)bVar2;
        return 0x11b;
      }
      uVar5 = FUN_180499ab0(param_1);
      *(undefined4 *)(param_1 + 0x30) = uVar5;
      return 0x11b;
    case 0x3e:
      pbVar3 = *(byte **)(param_1 + 0x20);
      if (pbVar3 < *(byte **)(param_1 + 0x28)) {
        uVar6 = (uint)*pbVar3;
        *(byte **)(param_1 + 0x20) = pbVar3 + 1;
      }
      else {
        uVar6 = FUN_180499ab0(param_1);
      }
      *(uint *)(param_1 + 0x30) = uVar6;
      if (uVar6 == 0x3d) {
        pbVar3 = *(byte **)(param_1 + 0x20);
        if (pbVar3 < *(byte **)(param_1 + 0x28)) {
          bVar2 = *pbVar3;
          *(byte **)(param_1 + 0x20) = pbVar3 + 1;
          *(uint *)(param_1 + 0x30) = (uint)bVar2;
          return 0x11c;
        }
        uVar5 = FUN_180499ab0(param_1);
        *(undefined4 *)(param_1 + 0x30) = uVar5;
        return 0x11c;
      }
      if (uVar6 != 0x3e) {
        return 0x3e;
      }
      pbVar3 = *(byte **)(param_1 + 0x20);
      if (pbVar3 < *(byte **)(param_1 + 0x28)) {
        bVar2 = *pbVar3;
        *(byte **)(param_1 + 0x20) = pbVar3 + 1;
        *(uint *)(param_1 + 0x30) = (uint)bVar2;
        return 0x122;
      }
      uVar5 = FUN_180499ab0(param_1);
      *(undefined4 *)(param_1 + 0x30) = uVar5;
      return 0x122;
    case 0x3f:
      pbVar3 = *(byte **)(param_1 + 0x20);
      if (pbVar3 < *(byte **)(param_1 + 0x28)) {
        uVar6 = (uint)*pbVar3;
        *(byte **)(param_1 + 0x20) = pbVar3 + 1;
      }
      else {
        uVar6 = FUN_180499ab0(param_1);
      }
      *(uint *)(param_1 + 0x30) = uVar6;
      if (uVar6 == 0x2e) {
        pbVar3 = *(byte **)(param_1 + 0x20);
        if (pbVar3 < *(byte **)(param_1 + 0x28)) {
          bVar2 = *pbVar3;
          *(byte **)(param_1 + 0x20) = pbVar3 + 1;
          *(uint *)(param_1 + 0x30) = (uint)bVar2;
          return 0x11f;
        }
        uVar5 = FUN_180499ab0(param_1);
        *(undefined4 *)(param_1 + 0x30) = uVar5;
        return 0x11f;
      }
      if (uVar6 != 0x3f) {
        return 0x3f;
      }
      pbVar3 = *(byte **)(param_1 + 0x20);
      if (pbVar3 < *(byte **)(param_1 + 0x28)) {
        bVar2 = *pbVar3;
        *(byte **)(param_1 + 0x20) = pbVar3 + 1;
        *(uint *)(param_1 + 0x30) = (uint)bVar2;
        return 0x120;
      }
      uVar5 = FUN_180499ab0(param_1);
      *(undefined4 *)(param_1 + 0x30) = uVar5;
      return 0x120;
    case 0x5b:
      iVar4 = FUN_18049a810(param_1);
      if (-1 < iVar4) {
        FUN_1804998b0(param_1,param_2,iVar4);
        return 299;
      }
      if (iVar4 != -1) {
                    /* WARNING: Subroutine does not return */
        FUN_18049b070(param_1,299,0x96f);
      }
      return 0x5b;
    case 0x7c:
      pbVar3 = *(byte **)(param_1 + 0x20);
      if (pbVar3 < *(byte **)(param_1 + 0x28)) {
        uVar6 = (uint)*pbVar3;
        *(byte **)(param_1 + 0x20) = pbVar3 + 1;
      }
      else {
        uVar6 = FUN_180499ab0(param_1);
      }
      *(uint *)(param_1 + 0x30) = uVar6;
      if (uVar6 != 0x7c) {
        return 0x7c;
      }
      pbVar3 = *(byte **)(param_1 + 0x20);
      if (pbVar3 < *(byte **)(param_1 + 0x28)) {
        bVar2 = *pbVar3;
        *(byte **)(param_1 + 0x20) = pbVar3 + 1;
        *(uint *)(param_1 + 0x30) = (uint)bVar2;
        return 0x125;
      }
      uVar5 = FUN_180499ab0(param_1);
      *(undefined4 *)(param_1 + 0x30) = uVar5;
      return 0x125;
    case 0x7e:
      pbVar3 = *(byte **)(param_1 + 0x20);
      if (pbVar3 < *(byte **)(param_1 + 0x28)) {
        uVar6 = (uint)*pbVar3;
        *(byte **)(param_1 + 0x20) = pbVar3 + 1;
      }
      else {
        uVar6 = FUN_180499ab0(param_1);
      }
      *(uint *)(param_1 + 0x30) = uVar6;
      if (uVar6 == 0x3d) {
        pbVar3 = *(byte **)(param_1 + 0x20);
        if (pbVar3 < *(byte **)(param_1 + 0x28)) {
          bVar2 = *pbVar3;
          *(byte **)(param_1 + 0x20) = pbVar3 + 1;
          *(uint *)(param_1 + 0x30) = (uint)bVar2;
          return 0x11e;
        }
        uVar5 = FUN_180499ab0(param_1);
        *(undefined4 *)(param_1 + 0x30) = uVar5;
        return 0x11e;
      }
      if (uVar6 != 0x3e) {
        return 0x7e;
      }
      pbVar3 = *(byte **)(param_1 + 0x20);
      if (pbVar3 < *(byte **)(param_1 + 0x28)) {
        uVar6 = (uint)*pbVar3;
        *(byte **)(param_1 + 0x20) = pbVar3 + 1;
      }
      else {
        uVar6 = FUN_180499ab0(param_1);
      }
      *(uint *)(param_1 + 0x30) = uVar6;
      if (uVar6 != 0x3e) {
                    /* WARNING: Subroutine does not return */
        FUN_18049b070(param_1,0x7e,0xacb);
      }
      pbVar3 = *(byte **)(param_1 + 0x20);
      if (pbVar3 < *(byte **)(param_1 + 0x28)) {
        bVar2 = *pbVar3;
        *(byte **)(param_1 + 0x20) = pbVar3 + 1;
        *(uint *)(param_1 + 0x30) = (uint)bVar2;
        return 0x123;
      }
      uVar5 = FUN_180499ab0(param_1);
      *(undefined4 *)(param_1 + 0x30) = uVar5;
      return 0x123;
    case -1:
      return 300;
    }
    uVar8 = (ulonglong)*(int *)(param_1 + 0x30);
    cVar1 = (&DAT_18056fcb1)[uVar8];
  }
  if (((&DAT_18056fcb1)[(int)uVar8] & 8) == 0) {
    do {
      if (*(int *)(param_1 + 0x48) == *(int *)(param_1 + 0x40)) {
        puVar7 = (undefined1 *)FUN_1804a9db0(param_1 + 0x40,1);
      }
      else {
        puVar7 = *(undefined1 **)(param_1 + 0x40);
      }
      *puVar7 = (char)uVar8;
      *(undefined1 **)(param_1 + 0x40) = puVar7 + 1;
      pbVar3 = *(byte **)(param_1 + 0x20);
      if (pbVar3 < *(byte **)(param_1 + 0x28)) {
        uVar8 = (ulonglong)*pbVar3;
        *(byte **)(param_1 + 0x20) = pbVar3 + 1;
      }
      else {
        uVar6 = FUN_180499ab0(param_1);
        uVar8 = (ulonglong)uVar6;
      }
      *(int *)(param_1 + 0x30) = (int)uVar8;
    } while ((char)(&DAT_18056fcb1)[(int)uVar8] < '\0');
    uVar8 = FUN_1804a2560(param_1,*(undefined8 *)(param_1 + 0x50),
                          *(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x50));
    *param_2 = uVar8 | 0xfffd800000000000;
    if (*(byte *)(uVar8 + 10) == 0) {
      uVar8 = 0x12a;
    }
    else {
      uVar8 = (ulonglong)(*(byte *)(uVar8 + 10) | 0x100);
    }
  }
  else {
LAB_18049a6fe:
    FUN_180499bd0(param_1,param_2);
    uVar8 = 0x129;
  }
  return uVar8;
}



/* ===== 18049a810 FUN_18049a810 ===== */

uint FUN_18049a810(longlong param_1)

{
  uint uVar1;
  byte *pbVar2;
  uint uVar3;
  undefined1 *puVar4;
  uint uVar5;
  
  uVar1 = *(uint *)(param_1 + 0x30);
  uVar5 = 0;
  uVar3 = uVar1;
  while( true ) {
    if (*(int *)(param_1 + 0x48) == *(int *)(param_1 + 0x40)) {
      puVar4 = (undefined1 *)FUN_1804a9db0(param_1 + 0x40,1);
    }
    else {
      puVar4 = *(undefined1 **)(param_1 + 0x40);
    }
    *puVar4 = (char)uVar3;
    *(undefined1 **)(param_1 + 0x40) = puVar4 + 1;
    pbVar2 = *(byte **)(param_1 + 0x20);
    if (pbVar2 < *(byte **)(param_1 + 0x28)) {
      uVar3 = (uint)*pbVar2;
      *(byte **)(param_1 + 0x20) = pbVar2 + 1;
    }
    else {
      uVar3 = FUN_180499ab0(param_1);
    }
    *(uint *)(param_1 + 0x30) = uVar3;
    if ((uVar3 != 0x3d) || (0x1fffffff < (int)uVar5)) break;
    uVar5 = uVar5 + 1;
    uVar3 = 0x3d;
  }
  if (uVar3 != uVar1) {
    uVar5 = ~uVar5;
  }
  return uVar5;
}



/* ===== 18049a8b0 FUN_18049a8b0 ===== */

void FUN_18049a8b0(longlong param_1,ulonglong *param_2)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined1 *puVar7;
  byte *pbVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  
  uVar6 = *(uint *)(param_1 + 0x30);
  if (*(int *)(param_1 + 0x48) == *(int *)(param_1 + 0x40)) {
    puVar7 = (undefined1 *)FUN_1804a9db0(param_1 + 0x40,1);
  }
  else {
    puVar7 = *(undefined1 **)(param_1 + 0x40);
  }
  *puVar7 = (char)uVar6;
  *(undefined1 **)(param_1 + 0x40) = puVar7 + 1;
  pbVar8 = *(byte **)(param_1 + 0x20);
  if (pbVar8 < *(byte **)(param_1 + 0x28)) {
    uVar9 = (ulonglong)*pbVar8;
    *(byte **)(param_1 + 0x20) = pbVar8 + 1;
  }
  else {
    uVar5 = FUN_180499ab0(param_1);
    uVar9 = (ulonglong)uVar5;
  }
  uVar5 = (uint)uVar9;
  *(uint *)(param_1 + 0x30) = uVar5;
  do {
    if (uVar5 == uVar6) {
      if (*(int *)(param_1 + 0x48) == *(int *)(param_1 + 0x40)) {
        puVar7 = (undefined1 *)FUN_1804a9db0(param_1 + 0x40,1);
      }
      else {
        puVar7 = *(undefined1 **)(param_1 + 0x40);
      }
      *puVar7 = (char)uVar9;
      *(undefined1 **)(param_1 + 0x40) = puVar7 + 1;
      pbVar8 = *(byte **)(param_1 + 0x20);
      if (pbVar8 < *(byte **)(param_1 + 0x28)) {
        uVar6 = (uint)*pbVar8;
        *(byte **)(param_1 + 0x20) = pbVar8 + 1;
      }
      else {
        uVar6 = FUN_180499ab0(param_1);
      }
      *(uint *)(param_1 + 0x30) = uVar6;
      uVar9 = FUN_1804a2560(param_1,*(longlong *)(param_1 + 0x50) + 1,
                            (*(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x50)) + -2);
      *param_2 = uVar9 | 0xfffd800000000000;
      return;
    }
    iVar11 = (int)uVar9;
    if (iVar11 == -1) {
                    /* WARNING: Subroutine does not return */
      FUN_18049b070(param_1,300,0x945);
    }
    if ((iVar11 == 10) || (iVar11 == 0xd)) {
                    /* WARNING: Subroutine does not return */
      FUN_18049b070(param_1,299,0x945);
    }
    if (iVar11 != 0x5c) goto switchD_18049a9f1_caseD_22;
    pbVar8 = *(byte **)(param_1 + 0x20);
    if (pbVar8 < *(byte **)(param_1 + 0x28)) {
      uVar5 = (uint)*pbVar8;
      *(byte **)(param_1 + 0x20) = pbVar8 + 1;
    }
    else {
      uVar5 = FUN_180499ab0(param_1);
    }
    *(uint *)(param_1 + 0x30) = uVar5;
    uVar9 = (ulonglong)(int)uVar5;
    switch(uVar5) {
    default:
      if (((&DAT_18056fcb1)[uVar9] & 8) == 0) {
LAB_18049aef8:
                    /* WARNING: Subroutine does not return */
        FUN_18049b070(param_1,299,0x957);
      }
      pbVar8 = *(byte **)(param_1 + 0x20);
      iVar11 = uVar5 - 0x30;
      if (pbVar8 < *(byte **)(param_1 + 0x28)) {
        uVar4 = (uint)*pbVar8;
        *(byte **)(param_1 + 0x20) = pbVar8 + 1;
      }
      else {
        uVar4 = FUN_180499ab0(param_1);
      }
      *(uint *)(param_1 + 0x30) = uVar4;
      if (((&DAT_18056fcb1)[(int)uVar4] & 8) != 0) {
        pbVar8 = *(byte **)(param_1 + 0x20);
        iVar10 = uVar4 + uVar5 * 10;
        iVar11 = iVar10 + -0x210;
        if (pbVar8 < *(byte **)(param_1 + 0x28)) {
          uVar5 = (uint)*pbVar8;
          *(byte **)(param_1 + 0x20) = pbVar8 + 1;
        }
        else {
          uVar5 = FUN_180499ab0(param_1);
        }
        *(uint *)(param_1 + 0x30) = uVar5;
        if (((&DAT_18056fcb1)[(int)uVar5] & 8) != 0) {
          iVar11 = uVar5 + iVar10 * 10 + -0x14d0;
          if (0xff < iVar11) goto LAB_18049aef8;
          pbVar8 = *(byte **)(param_1 + 0x20);
          if (pbVar8 < *(byte **)(param_1 + 0x28)) {
            uVar5 = (uint)*pbVar8;
            *(byte **)(param_1 + 0x20) = pbVar8 + 1;
          }
          else {
            uVar5 = FUN_180499ab0(param_1);
          }
          *(uint *)(param_1 + 0x30) = uVar5;
        }
      }
      if (*(int *)(param_1 + 0x48) == *(int *)(param_1 + 0x40)) {
        puVar7 = (undefined1 *)FUN_1804a9db0(param_1 + 0x40,1);
      }
      else {
        puVar7 = *(undefined1 **)(param_1 + 0x40);
      }
      *puVar7 = (char)iVar11;
      *(undefined1 **)(param_1 + 0x40) = puVar7 + 1;
      goto switchD_18049a9f1_caseD_ffffffff;
    case 10:
    case 0xd:
      if (*(int *)(param_1 + 0x48) == *(int *)(param_1 + 0x40)) {
        puVar7 = (undefined1 *)FUN_1804a9db0(param_1 + 0x40,1);
      }
      else {
        puVar7 = *(undefined1 **)(param_1 + 0x40);
      }
      *puVar7 = 10;
      *(undefined1 **)(param_1 + 0x40) = puVar7 + 1;
      FUN_180499b40(param_1);
      goto switchD_18049a9f1_caseD_ffffffff;
    case 0x22:
    case 0x27:
    case 0x5c:
      break;
    case 0x61:
      uVar9 = 7;
      break;
    case 0x62:
      uVar9 = 8;
      break;
    case 0x66:
      uVar9 = 0xc;
      break;
    case 0x6e:
      uVar9 = 10;
      break;
    case 0x72:
      uVar9 = 0xd;
      break;
    case 0x74:
      uVar9 = 9;
      break;
    case 0x75:
      pbVar8 = *(byte **)(param_1 + 0x20);
      if (pbVar8 < *(byte **)(param_1 + 0x28)) {
        uVar5 = (uint)*pbVar8;
        *(byte **)(param_1 + 0x20) = pbVar8 + 1;
      }
      else {
        uVar5 = FUN_180499ab0(param_1);
      }
      *(uint *)(param_1 + 0x30) = uVar5;
      if (uVar5 != 0x7b) goto LAB_18049aef8;
      pbVar8 = *(byte **)(param_1 + 0x20);
      if (pbVar8 < *(byte **)(param_1 + 0x28)) {
        uVar5 = (uint)*pbVar8;
        *(byte **)(param_1 + 0x20) = pbVar8 + 1;
      }
      else {
        uVar5 = FUN_180499ab0(param_1);
      }
      *(uint *)(param_1 + 0x30) = uVar5;
      uVar9 = 0;
      do {
        uVar4 = uVar5 & 0xf | (int)uVar9 << 4;
        if (((&DAT_18056fcb1)[(int)uVar5] & 8) == 0) {
          if (((&DAT_18056fcb1)[(int)uVar5] & 0x10) == 0) goto LAB_18049aef8;
          uVar4 = uVar4 + 9;
        }
        uVar9 = (ulonglong)uVar4;
        if (0x10ffff < (int)uVar4) goto LAB_18049aef8;
        pbVar8 = *(byte **)(param_1 + 0x20);
        if (pbVar8 < *(byte **)(param_1 + 0x28)) {
          uVar5 = (uint)*pbVar8;
          *(byte **)(param_1 + 0x20) = pbVar8 + 1;
        }
        else {
          uVar5 = FUN_180499ab0(param_1);
        }
        *(uint *)(param_1 + 0x30) = uVar5;
      } while (uVar5 != 0x7d);
      bVar1 = (byte)((int)uVar4 >> 6);
      if ((int)uVar4 < 0x800) {
        if ((int)uVar4 < 0x80) break;
        if (*(int *)(param_1 + 0x48) == *(int *)(param_1 + 0x40)) {
          pbVar8 = (byte *)FUN_1804a9db0(param_1 + 0x40,1);
          bVar1 = bVar1 | 0xc0;
        }
        else {
          pbVar8 = *(byte **)(param_1 + 0x40);
          bVar1 = bVar1 | 0xc0;
        }
      }
      else {
        bVar2 = (byte)((int)uVar4 >> 0xc);
        if ((int)uVar4 < 0x10000) {
          if (uVar4 - 0xd800 < 0x800) goto LAB_18049aef8;
          if (*(int *)(param_1 + 0x48) == *(int *)(param_1 + 0x40)) {
            pbVar8 = (byte *)FUN_1804a9db0(param_1 + 0x40,1);
          }
          else {
            pbVar8 = *(byte **)(param_1 + 0x40);
          }
          bVar2 = bVar2 | 0xe0;
        }
        else {
          if (*(int *)(param_1 + 0x48) == *(int *)(param_1 + 0x40)) {
            pbVar8 = (byte *)FUN_1804a9db0(param_1 + 0x40,1);
          }
          else {
            pbVar8 = *(byte **)(param_1 + 0x40);
          }
          *pbVar8 = (byte)((int)uVar4 >> 0x12) | 0xf0;
          pbVar8 = pbVar8 + 1;
          *(byte **)(param_1 + 0x40) = pbVar8;
          if (*(int *)(param_1 + 0x48) == (int)pbVar8) {
            pbVar8 = (byte *)FUN_1804a9db0(param_1 + 0x40,1);
          }
          bVar2 = bVar2 & 0x3f | 0x80;
        }
        *pbVar8 = bVar2;
        pbVar8 = pbVar8 + 1;
        *(byte **)(param_1 + 0x40) = pbVar8;
        if (*(int *)(param_1 + 0x48) == (int)pbVar8) {
          pbVar8 = (byte *)FUN_1804a9db0(param_1 + 0x40,1);
        }
        bVar1 = bVar1 & 0x3f | 0x80;
      }
      *pbVar8 = bVar1;
      uVar9 = (ulonglong)(uVar4 & 0x3f | 0x80);
      *(byte **)(param_1 + 0x40) = pbVar8 + 1;
      break;
    case 0x76:
      uVar9 = 0xb;
      break;
    case 0x78:
      pbVar8 = *(byte **)(param_1 + 0x20);
      if (pbVar8 < *(byte **)(param_1 + 0x28)) {
        uVar5 = (uint)*pbVar8;
        *(byte **)(param_1 + 0x20) = pbVar8 + 1;
      }
      else {
        uVar5 = FUN_180499ab0(param_1);
      }
      *(uint *)(param_1 + 0x30) = uVar5;
      uVar4 = (uVar5 & 0xf) * 0x10;
      if (((&DAT_18056fcb1)[(int)uVar5] & 8) == 0) {
        if (((&DAT_18056fcb1)[(int)uVar5] & 0x10) == 0) goto LAB_18049aef8;
        uVar4 = uVar4 + 0x90;
      }
      pbVar8 = *(byte **)(param_1 + 0x20);
      if (pbVar8 < *(byte **)(param_1 + 0x28)) {
        uVar5 = (uint)*pbVar8;
        *(byte **)(param_1 + 0x20) = pbVar8 + 1;
      }
      else {
        uVar5 = FUN_180499ab0(param_1);
      }
      *(uint *)(param_1 + 0x30) = uVar5;
      uVar4 = uVar5 & 0xf | uVar4;
      uVar9 = (ulonglong)uVar4;
      if (((&DAT_18056fcb1)[(int)uVar5] & 8) == 0) {
        if (((&DAT_18056fcb1)[(int)uVar5] & 0x10) == 0) goto LAB_18049aef8;
        uVar9 = (ulonglong)(uVar4 + 9);
      }
      break;
    case 0x7a:
      pbVar8 = *(byte **)(param_1 + 0x20);
      if (pbVar8 < *(byte **)(param_1 + 0x28)) {
        uVar9 = (ulonglong)*pbVar8;
        *(byte **)(param_1 + 0x20) = pbVar8 + 1;
      }
      else {
        uVar5 = FUN_180499ab0(param_1);
        uVar9 = (ulonglong)uVar5;
      }
      *(int *)(param_1 + 0x30) = (int)uVar9;
      bVar1 = (&DAT_18056fcb1)[(int)uVar9];
      while ((bVar1 & 2) != 0) {
        if (((int)uVar9 == 10) || ((int)uVar9 == 0xd)) {
          FUN_180499b40(param_1);
        }
        else {
          pbVar8 = *(byte **)(param_1 + 0x20);
          if (pbVar8 < *(byte **)(param_1 + 0x28)) {
            bVar1 = *pbVar8;
            *(byte **)(param_1 + 0x20) = pbVar8 + 1;
            *(uint *)(param_1 + 0x30) = (uint)bVar1;
          }
          else {
            uVar3 = FUN_180499ab0(param_1);
            *(undefined4 *)(param_1 + 0x30) = uVar3;
          }
        }
        uVar9 = (ulonglong)*(int *)(param_1 + 0x30);
        bVar1 = (&DAT_18056fcb1)[uVar9];
      }
    case 0xffffffff:
      goto switchD_18049a9f1_caseD_ffffffff;
    }
switchD_18049a9f1_caseD_22:
    if (*(int *)(param_1 + 0x48) == *(int *)(param_1 + 0x40)) {
      puVar7 = (undefined1 *)FUN_1804a9db0(param_1 + 0x40,1);
    }
    else {
      puVar7 = *(undefined1 **)(param_1 + 0x40);
    }
    *puVar7 = (char)uVar9;
    *(undefined1 **)(param_1 + 0x40) = puVar7 + 1;
    pbVar8 = *(byte **)(param_1 + 0x20);
    if (pbVar8 < *(byte **)(param_1 + 0x28)) {
      bVar1 = *pbVar8;
      *(byte **)(param_1 + 0x20) = pbVar8 + 1;
      *(uint *)(param_1 + 0x30) = (uint)bVar1;
    }
    else {
      uVar3 = FUN_180499ab0(param_1);
      *(undefined4 *)(param_1 + 0x30) = uVar3;
    }
switchD_18049a9f1_caseD_ffffffff:
    uVar5 = *(uint *)(param_1 + 0x30);
    uVar9 = (ulonglong)uVar5;
  } while( true );
}



/* ===== 18049aff0 FUN_18049aff0 ===== */

void FUN_18049aff0(longlong param_1,longlong param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_2 + 0xa8);
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_2 + 0xa0);
  puVar2[2] = puVar2[2] + (ulonglong)uVar1 * -8;
  (*(code *)*puVar2)(puVar2[1],uVar3,(ulonglong)uVar1 * 8,0);
  uVar1 = *(uint *)(param_2 + 0x98);
  uVar3 = *(undefined8 *)(param_2 + 0x90);
  puVar2[2] = puVar2[2] + (ulonglong)uVar1 * -0x18;
  (*(code *)*puVar2)(puVar2[1],uVar3,(ulonglong)uVar1 * 0x18,0);
  uVar4 = (ulonglong)(uint)(*(int *)(param_2 + 0x48) - *(int *)(param_2 + 0x50));
  uVar3 = *(undefined8 *)(param_2 + 0x50);
  puVar2[2] = puVar2[2] - uVar4;
                    /* WARNING: Could not recover jumptable at 0x00018049b069. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(puVar2[1],uVar3,uVar4,0);
  return;
}



/* ===== 18049b070 FUN_18049b070 ===== */

void FUN_18049b070(longlong param_1,int param_2,undefined4 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined8 local_res20;
  
  local_res20 = param_4;
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else if (param_2 - 0x129U < 3) {
    if (*(int *)(param_1 + 0x48) == *(int *)(param_1 + 0x40)) {
      puVar3 = (undefined1 *)FUN_1804a9db0(param_1 + 0x40,1);
    }
    else {
      puVar3 = *(undefined1 **)(param_1 + 0x40);
    }
    *puVar3 = 0;
    *(undefined1 **)(param_1 + 0x40) = puVar3 + 1;
    uVar2 = *(undefined8 *)(param_1 + 0x50);
  }
  else {
    uVar2 = FUN_18049b3d0();
  }
  FUN_1804843e0(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x78),uVar2,
                *(undefined4 *)(param_1 + 0x70),param_3,&local_res20);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ===== 18049b100 FUN_18049b100 ===== */

void FUN_18049b100(undefined8 param_1)

{
  char *_Str;
  char cVar1;
  size_t sVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  
  uVar5 = 0;
  do {
    _Str = (&PTR_DAT_18056eb70)[uVar5];
    sVar2 = strlen(_Str);
    lVar3 = FUN_180491d30(param_1,_Str,sVar2);
    cVar1 = (char)uVar5;
    uVar4 = (int)uVar5 + 1;
    uVar5 = (ulonglong)uVar4;
    *(byte *)(lVar3 + 8) = *(byte *)(lVar3 + 8) | 0x20;
    *(char *)(lVar3 + 10) = cVar1 + '\x01';
  } while (uVar4 < 0x18);
  return;
}



/* ===== 18049b160 FUN_18049b160 ===== */

void FUN_18049b160(longlong param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_180499e00(param_1,param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x38) = uVar1;
  return;
}



/* ===== 18049b180 FUN_18049b180 ===== */

void FUN_18049b180(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x38);
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_1 + 0x70);
  if (iVar1 == 300) {
    uVar2 = FUN_180499e00(param_1,param_1 + 0x10);
    *(undefined4 *)(param_1 + 0x34) = uVar2;
    return;
  }
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x38) = 300;
  *(int *)(param_1 + 0x34) = iVar1;
  return;
}



/* ===== 18049b1d0 FUN_18049b1d0 ===== */

undefined8 FUN_18049b1d0(longlong param_1,undefined8 *param_2)

{
  byte *pbVar1;
  byte bVar2;
  char *pcVar3;
  ulonglong *puVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  
  param_2[1] = param_1;
  *param_2 = 0;
  param_2[4] = 0;
  bVar5 = false;
  param_2[5] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  *(undefined4 *)(param_2 + 0x15) = 0;
  *(undefined4 *)((longlong)param_2 + 0x34) = 0;
  *(undefined4 *)(param_2 + 0x16) = 0;
  *(undefined4 *)(param_2 + 7) = 300;
  *(undefined4 *)(param_2 + 0xe) = 1;
  *(undefined4 *)((longlong)param_2 + 0x74) = 1;
  *(undefined4 *)((longlong)param_2 + 0xb4) = 1;
  uVar6 = FUN_180499ab0(param_2);
  uVar7 = 0xef;
  *(uint *)(param_2 + 6) = uVar6;
  if (uVar6 == 0xef) {
    pcVar3 = (char *)param_2[4];
    pbVar1 = (byte *)(pcVar3 + 2);
    if ((((byte *)param_2[5] < pbVar1) || (*pcVar3 != -0x45)) || (pcVar3[1] != -0x41))
    goto LAB_18049b34f;
    param_2[4] = pbVar1;
    if (pbVar1 < (byte *)param_2[5]) {
      bVar2 = *pbVar1;
      *(uint *)(param_2 + 6) = (uint)bVar2;
      param_2[4] = pcVar3 + 3;
      uVar7 = (uint)bVar2;
      bVar5 = true;
    }
    else {
      uVar7 = FUN_180499ab0(param_2);
      *(uint *)(param_2 + 6) = uVar7;
      bVar5 = true;
    }
  }
  else {
    uVar7 = uVar6;
    bVar5 = false;
  }
  if (uVar7 == 0x23) {
    do {
      pbVar1 = (byte *)param_2[4];
      if (pbVar1 < (byte *)param_2[5]) {
        uVar6 = (uint)*pbVar1;
        param_2[4] = pbVar1 + 1;
      }
      else {
        uVar6 = FUN_180499ab0(param_2);
      }
      *(uint *)(param_2 + 6) = uVar6;
      if (uVar6 == 0xffffffff) {
        return 0;
      }
    } while ((uVar6 != 10) && (uVar6 != 0xd));
    pbVar1 = (byte *)param_2[4];
    if (pbVar1 < (byte *)param_2[5]) {
      uVar7 = (uint)*pbVar1;
      param_2[4] = pbVar1 + 1;
    }
    else {
      uVar7 = FUN_180499ab0(param_2);
    }
    *(uint *)(param_2 + 6) = uVar7;
    if (((uVar7 == 10) || (uVar7 == 0xd)) && (uVar7 != uVar6)) {
      pbVar1 = (byte *)param_2[4];
      if (pbVar1 < (byte *)param_2[5]) {
        uVar7 = (uint)*pbVar1;
        param_2[4] = pbVar1 + 1;
      }
      else {
        uVar7 = FUN_180499ab0(param_2);
      }
      *(uint *)(param_2 + 6) = uVar7;
    }
    *(int *)(param_2 + 0xe) = *(int *)(param_2 + 0xe) + 1;
    if (0x7ffffeff < *(int *)(param_2 + 0xe)) {
                    /* WARNING: Subroutine does not return */
      FUN_18049b070(param_2,*(undefined4 *)((longlong)param_2 + 0x34),0x8cb);
    }
    bVar5 = true;
  }
LAB_18049b34f:
  if (uVar7 != 0x1b) {
    return 0;
  }
  if (bVar5) {
    puVar4 = *(ulonglong **)(param_1 + 0x28);
    *(ulonglong **)(param_1 + 0x28) = puVar4 + 1;
    uVar8 = FUN_1804848e0(param_1,0xc49);
    *puVar4 = uVar8 | 0xfffd800000000000;
                    /* WARNING: Subroutine does not return */
    FUN_180484920(param_1,3);
  }
  return 1;
}



/* ===== 18049b3d0 FUN_18049b3d0 ===== */

undefined * FUN_18049b3d0(longlong param_1,int param_2)

{
  undefined *puVar1;
  char *pcVar2;
  
  if (0x100 < param_2) {
    return (&PTR_FUN_18056e368)[param_2];
  }
  pcVar2 = "%c";
  if (((&DAT_18056fcb1)[param_2] & 1) != 0) {
    pcVar2 = "char(%d)";
  }
  puVar1 = (undefined *)FUN_180498630(*(undefined8 *)(param_1 + 8),pcVar2,param_2);
  return puVar1;
}



/* ===== 18049b420 FUN_18049b420 ===== */

void FUN_18049b420(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  
  iVar10 = 0;
  uVar8 = 0;
  uVar14 = 0;
  if (*(uint *)(param_3 + 0x30) != 0) {
    lVar5 = (ulonglong)*(uint *)(param_3 + 0x30) - 1;
    do {
      if (*(longlong *)(*(longlong *)(param_3 + 0x10) + lVar5 * 8) != -1) break;
      lVar5 = lVar5 + -1;
    } while (-1 < lVar5);
    iVar10 = (int)lVar5 + 1;
  }
  uVar1 = *(uint *)(param_3 + 0x34);
  if (uVar1 == 0) goto LAB_18049b4d4;
  lVar5 = *(longlong *)(param_3 + 0x28);
  iVar12 = 0;
  iVar13 = 0;
  uVar8 = 0;
  if (uVar1 + 1 < 2) {
LAB_18049b4c1:
    uVar14 = (uint)(*(longlong *)(lVar5 + uVar8 * 0x18) != -1);
  }
  else {
    do {
      iVar12 = iVar12 + (uint)(*(longlong *)(lVar5 + uVar8 * 0x18) != -1);
      iVar4 = (int)uVar8;
      uVar7 = iVar4 + 2;
      uVar8 = (ulonglong)uVar7;
      iVar13 = iVar13 + (uint)(*(longlong *)(lVar5 + (ulonglong)(iVar4 + 1) * 0x18) != -1);
    } while (uVar7 <= uVar1 - 1);
    if (uVar7 <= uVar1) goto LAB_18049b4c1;
  }
  uVar8 = (ulonglong)(uVar14 + iVar13 + iVar12);
LAB_18049b4d4:
  uVar6 = FUN_180499630(param_2,iVar10);
  uVar14 = (uint)uVar8;
  uVar6 = FUN_180499630(uVar6,uVar8);
  *param_1 = uVar6;
  if (iVar10 != 0) {
    lVar5 = *(longlong *)(param_3 + 0x10);
    do {
      FUN_18049b660(param_1,lVar5,1);
      lVar5 = lVar5 + 8;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
  if (uVar14 == 0) {
    return;
  }
  plVar9 = (longlong *)(*(longlong *)(param_3 + 0x28) + (ulonglong)*(uint *)(param_3 + 0x34) * 0x18)
  ;
  if ((-1 < *(int *)((longlong)param_1 + 0x44)) || (uVar14 < 2)) {
    do {
      if (*plVar9 != -1) {
        FUN_18049b660(param_1,plVar9 + 1,0);
        FUN_18049b660(param_1,plVar9);
        uVar14 = (int)uVar8 - 1;
        uVar8 = (ulonglong)uVar14;
        if (uVar14 == 0) {
          return;
        }
      }
      plVar9 = plVar9 + -3;
    } while( true );
  }
  uVar1 = *(uint *)(param_1 + 8);
  if (uVar1 < uVar14) {
    uVar11 = param_1[3];
    uVar14 = *(uint *)(param_3 + 0x34) + 1;
    if (uVar1 != 0) {
      uVar6 = param_1[7];
      puVar2 = *(undefined8 **)((uVar11 & 0xfffffffffffffff8) + 0x10);
      puVar2[2] = puVar2[2] + (ulonglong)uVar1 * -8;
      (*(code *)*puVar2)(puVar2[1],uVar6,(ulonglong)uVar1 * 8,0);
      *(undefined4 *)(param_1 + 8) = 0;
    }
    if (uVar14 != 0) {
      uVar6 = FUN_180491760(uVar11 & 0xfffffffffffffff8,0,0,(ulonglong)uVar14 << 3);
      param_1[7] = uVar6;
      *(uint *)(param_1 + 8) = uVar14;
    }
  }
  plVar3 = (longlong *)param_1[7];
  uVar11 = uVar8;
  do {
    if (*plVar9 != -1) {
      uVar14 = (int)uVar11 - 1;
      uVar11 = (ulonglong)uVar14;
      FUN_18049b780(plVar3,uVar11,uVar8,plVar9 + 1);
      if (uVar14 == 0) {
        do {
          lVar5 = *plVar3;
          FUN_18049b660(param_1,lVar5,0);
          FUN_18049b660(param_1,lVar5 + -8,1);
          uVar14 = (int)uVar8 - 1;
          uVar8 = (ulonglong)uVar14;
          FUN_18049b780(plVar3,0,uVar14,plVar3[uVar8]);
        } while (uVar14 != 0);
        return;
      }
    }
    plVar9 = plVar9 + -3;
  } while( true );
}



/* ===== 18049b660 FUN_18049b660 ===== */

void FUN_18049b660(longlong *param_1,ulonglong *param_2,int param_3)

{
  uint uVar1;
  byte *pbVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  uint uVar6;
  
  if ((uint)((int)param_1[1] - (int)*param_1) < 0xb) {
    pbVar2 = (byte *)FUN_1804a9db0(param_1,0xb);
  }
  else {
    pbVar2 = (byte *)*param_1;
  }
  uVar5 = *param_2;
  uVar1 = (uint)((longlong)uVar5 >> 0x2f);
  if (uVar1 == 0xfffffffb) {
    uVar1 = *(uint *)((uVar5 & 0x7fffffffffff) + 0x14);
    uVar6 = uVar1 + 5;
    if ((uint)((int)param_1[1] - (int)*param_1) < uVar6) {
      lVar3 = FUN_1804a9db0(param_1,uVar6);
    }
    else {
      lVar3 = *param_1;
    }
    uVar4 = FUN_180499630(lVar3,uVar6);
    lVar3 = FUN_180540530(uVar4,(uVar5 & 0x7fffffffffff) + 0x18,(ulonglong)uVar1);
    *param_1 = (ulonglong)uVar1 + lVar3;
    return;
  }
  if (0xfffffff1 < uVar1) {
    if (uVar1 == 0xfffffff4) {
      *pbVar2 = 0;
      *param_1 = (longlong)(pbVar2 + 1);
      return;
    }
    *pbVar2 = ~(byte)((longlong)uVar5 >> 0x2f);
    *param_1 = (longlong)(pbVar2 + 1);
    return;
  }
  if (param_3 != 0) {
    uVar5 = FUN_1800052ed(*param_2);
    if (-1 < (longlong)uVar5) {
      *pbVar2 = 3;
      lVar3 = FUN_180499630(pbVar2 + 1,uVar5 & 0xffffffff);
      *param_1 = lVar3;
      return;
    }
  }
  *pbVar2 = 4;
  uVar4 = FUN_180499630(pbVar2 + 1,(int)*param_2);
  lVar3 = FUN_180499630(uVar4,*(undefined4 *)((longlong)param_2 + 4));
  *param_1 = lVar3;
  return;
}



/* ===== 18049b780 FUN_18049b780 ===== */

void FUN_18049b780(longlong param_1,uint param_2,uint param_3,ulonglong *param_4)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong *puVar8;
  ulonglong uVar9;
  bool bVar10;
  
  uVar9 = (ulonglong)param_2;
  uVar6 = param_2 * 2 | 1;
  if (param_3 <= uVar6) {
    *(ulonglong **)(param_1 + uVar9 * 8) = param_4;
    return;
  }
  do {
    uVar7 = (ulonglong)uVar6;
    puVar8 = *(ulonglong **)(param_1 + uVar7 * 8);
    uVar6 = uVar6 + 1;
    if (uVar6 < param_3) {
      puVar1 = *(ulonglong **)(param_1 + (ulonglong)uVar6 * 8);
      uVar2 = *puVar8;
      uVar3 = *puVar1;
      uVar5 = (uint)((longlong)uVar2 >> 0x2f);
      uVar4 = (uint)((longlong)uVar3 >> 0x2f);
      if (uVar4 == uVar5) {
        if (uVar4 != 0xfffffffb) {
          bVar10 = uVar3 < uVar2;
          goto LAB_18049b81c;
        }
        uVar4 = FUN_180491b00(uVar3 & 0x7fffffffffff,uVar2 & 0x7fffffffffff);
        uVar4 = uVar4 >> 0x1f;
      }
      else {
        bVar10 = uVar4 < uVar5;
LAB_18049b81c:
        uVar4 = (uint)bVar10;
      }
      if (uVar4 != 0) {
        uVar7 = (ulonglong)uVar6;
        puVar8 = puVar1;
      }
    }
    uVar2 = *param_4;
    uVar3 = *puVar8;
    uVar4 = (uint)((longlong)uVar3 >> 0x2f);
    uVar6 = (uint)((longlong)uVar2 >> 0x2f);
    if (uVar6 == uVar4) {
      if (uVar6 != 0xfffffffb) {
        bVar10 = uVar2 < uVar3;
        goto LAB_18049b867;
      }
      uVar6 = FUN_180491b00(uVar2 & 0x7fffffffffff,uVar3 & 0x7fffffffffff);
      uVar6 = uVar6 >> 0x1f;
    }
    else {
      bVar10 = uVar6 < uVar4;
LAB_18049b867:
      uVar6 = (uint)bVar10;
    }
    if (uVar6 != 0) break;
    *(ulonglong **)(param_1 + uVar9 * 8) = puVar8;
    uVar6 = (int)uVar7 * 2 | 1;
    uVar9 = uVar7;
  } while (uVar6 < param_3);
  *(ulonglong **)(param_1 + uVar9 * 8) = param_4;
  return;
}



/* ===== 18049b8c0 FUN_18049b8c0 ===== */

void FUN_18049b8c0(longlong *param_1,longlong param_2)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  byte *pbVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  longlong *plVar10;
  longlong lVar11;
  uint *puVar12;
  ulonglong uVar13;
  uint uVar14;
  int iVar15;
  
  uVar13 = 0;
  if ((*(byte *)(param_2 + 0x3d) & 1) != 0) {
    plVar10 = *(longlong **)(param_2 + 0x20);
    lVar11 = 0;
    uVar14 = *(uint *)(param_2 + 0x30);
    if (uVar14 != 0) {
      do {
        plVar10 = plVar10 + -1;
        if (*(char *)(*plVar10 + 9) == '\a') {
          FUN_18049b8c0(param_1);
        }
        lVar11 = lVar11 + 1;
      } while (lVar11 < (longlong)(ulonglong)uVar14);
    }
  }
  if ((uint)((int)param_1[1] - (int)param_1[2]) <
      ((uint)*(byte *)(param_2 + 0x3c) + *(int *)(param_2 + 0xc) * 2) * 2 + 0x23) {
    lVar11 = FUN_1804a9e80(param_1);
  }
  else {
    lVar11 = param_1[2];
  }
  *(byte *)(lVar11 + 5) = *(byte *)(param_2 + 0x3d) & 0x87;
  *(undefined1 *)(lVar11 + 6) = *(undefined1 *)(param_2 + 10);
  *(undefined1 *)(lVar11 + 7) = *(undefined1 *)(param_2 + 0xb);
  *(undefined1 *)(lVar11 + 8) = *(undefined1 *)(param_2 + 0x3c);
  uVar4 = FUN_180499630(lVar11 + 9,*(undefined4 *)(param_2 + 0x30));
  uVar4 = FUN_180499630(uVar4,*(undefined4 *)(param_2 + 0x34));
  pbVar5 = (byte *)FUN_180499630(uVar4,*(int *)(param_2 + 0xc) + -1);
  if ((*(byte *)((longlong)param_1 + 0x44) & 2) == 0) {
    if (*(longlong *)(param_2 + 0x50) != 0) {
      uVar13 = (ulonglong)
               (uint)((*(int *)(param_2 + 0x38) - (int)*(longlong *)(param_2 + 0x50)) + (int)param_2
                     );
    }
    pbVar5 = (byte *)FUN_180499630(pbVar5,uVar13);
    if ((int)uVar13 != 0) {
      uVar4 = FUN_180499630(pbVar5,*(undefined4 *)(param_2 + 0x48));
      pbVar5 = (byte *)FUN_180499630(uVar4,*(undefined4 *)(param_2 + 0x4c));
    }
  }
  iVar15 = *(int *)(param_2 + 0xc);
  uVar14 = iVar15 * 4 - 4;
  lVar11 = FUN_180540530(pbVar5,param_2 + 0x6c,uVar14);
  if (((*(byte *)(param_2 + 0x3d) & 0x10) != 0) || (*(short *)(param_2 + 0x3e) != 0)) {
    lVar6 = *(longlong *)((param_1[3] & 0xfffffffffffffff8U) + 0x10);
    while (iVar15 = iVar15 + -1, iVar15 != 0) {
      bVar1 = *pbVar5;
      if (((byte)(bVar1 - 0x4e) < 9) && ((0x125U >> (bVar1 - 0x4e & 0x1f) & 1) != 0)) {
        *pbVar5 = bVar1 - 1;
      }
      else if (((byte)(bVar1 + 0xaf) < 7) && ((0x49U >> ((byte)(bVar1 + 0xaf) & 0x1f) & 1) != 0)) {
        *(undefined4 *)pbVar5 =
             *(undefined4 *)
              (*(longlong *)(*(longlong *)(lVar6 + 0x468) + (ulonglong)*(ushort *)(pbVar5 + 2) * 8)
              + 0x50);
      }
      pbVar5 = pbVar5 + 4;
    }
  }
  lVar6 = (ulonglong)*(byte *)(param_2 + 0x3c) * 2;
  lVar11 = FUN_180540530((ulonglong)uVar14 + lVar11,*(undefined8 *)(param_2 + 0x28),lVar6);
  *param_1 = lVar11 + lVar6;
  uVar14 = *(uint *)(param_2 + 0x30);
  plVar10 = (longlong *)(*(longlong *)(param_2 + 0x20) + (ulonglong)uVar14 * -8);
  do {
    if (uVar14 == 0) {
      iVar15 = *(int *)(param_2 + 0x34);
      puVar12 = *(uint **)(param_2 + 0x20);
      if ((uint)((int)param_1[1] - (int)*param_1) < (uint)(iVar15 * 10)) {
        lVar11 = FUN_1804a9db0(param_1);
      }
      else {
        lVar11 = *param_1;
      }
      for (; iVar15 != 0; iVar15 = iVar15 + -1) {
        if ((puVar12[1] == 0xfffe7fff) || (lVar6 = FUN_1800052ed(*(undefined8 *)puVar12), lVar6 < 0)
           ) {
          lVar11 = FUN_180499630(lVar11,(*puVar12 & 0x80000000 | *puVar12 * 2) + 1);
          uVar14 = *puVar12;
          if (0x7fffffff < uVar14) {
            *(byte *)(lVar11 + -1) = *(byte *)(lVar11 + -1) & 7;
            *(byte *)(lVar11 + -1) = *(byte *)(lVar11 + -1) | (byte)(uVar14 >> 0x1b) & 0x18;
          }
          lVar11 = FUN_180499630(lVar11,puVar12[1]);
        }
        else {
          uVar14 = (uint)lVar6;
          lVar11 = FUN_180499630(lVar11,uVar14 & 0x80000000 | uVar14 * 2);
          if ((int)uVar14 < 0) {
            *(byte *)(lVar11 + -1) = *(byte *)(lVar11 + -1) & 7;
            *(byte *)(lVar11 + -1) =
                 *(byte *)(lVar11 + -1) | (char)((ulonglong)lVar6 >> 0x18) >> 3 & 0x18U;
          }
        }
        puVar12 = puVar12 + 2;
      }
      *param_1 = lVar11;
      if ((uint)uVar13 != 0) {
        if ((uint)((int)param_1[1] - (int)lVar11) < (uint)uVar13) {
          lVar11 = FUN_1804a9db0(param_1,uVar13);
        }
        lVar11 = FUN_180540530(lVar11,*(undefined8 *)(param_2 + 0x50),uVar13);
        lVar11 = lVar11 + uVar13;
        *param_1 = lVar11;
      }
      if ((int)param_1[9] == 0) {
        iVar9 = (int)lVar11 - (int)param_1[2];
        uVar14 = iVar9 - 5;
        iVar15 = 0x1f;
        if (uVar14 != 0) {
          for (; uVar14 >> iVar15 == 0; iVar15 = iVar15 + -1) {
          }
        }
        uVar14 = (uint)((iVar15 + 8) * 9) >> 6;
        lVar11 = (ulonglong)(5 - uVar14) + param_1[2];
        FUN_180499630(lVar11);
        uVar3 = (*(code *)param_1[5])
                          (param_1[3] & 0xfffffffffffffff8,lVar11,iVar9 + -5 + uVar14,param_1[6]);
        *(undefined4 *)(param_1 + 9) = uVar3;
      }
      return;
    }
    lVar11 = *plVar10;
    cVar2 = *(char *)(lVar11 + 9);
    if (cVar2 == '\x04') {
      uVar8 = *(int *)(lVar11 + 0x14) + 5;
      uVar7 = uVar8;
    }
    else if (cVar2 == '\a') {
      uVar7 = 1;
      uVar8 = 0;
    }
    else if (cVar2 == '\n') {
      uVar7 = 0x15;
      if (*(short *)(lVar11 + 10) == 0xb) {
        uVar8 = 2;
      }
      else {
        uVar8 = (*(short *)(lVar11 + 10) != 0xc) + 3;
      }
    }
    else {
      uVar8 = 1;
      uVar7 = 0xb;
    }
    if ((uint)((int)param_1[1] - (int)*param_1) < uVar7) {
      lVar6 = FUN_1804a9db0(param_1);
    }
    else {
      lVar6 = *param_1;
    }
    lVar6 = FUN_180499630(lVar6,uVar8);
    if (uVar8 < 5) {
      if (uVar8 != 1) {
        if (uVar8 != 0) {
          uVar4 = FUN_180499630(lVar6,*(undefined4 *)(lVar11 + 0x10));
          lVar6 = FUN_180499630(uVar4,*(undefined4 *)(lVar11 + 0x14));
          if (uVar8 == 4) {
            uVar4 = FUN_180499630(lVar6,*(undefined4 *)(lVar11 + 0x18));
            lVar6 = FUN_180499630(uVar4,*(undefined4 *)(lVar11 + 0x1c));
          }
        }
        goto LAB_18049bb7c;
      }
      FUN_18049b420(param_1,lVar6,lVar11);
    }
    else {
      uVar7 = *(uint *)(lVar11 + 0x14);
      lVar6 = FUN_180540530(lVar6,lVar11 + 0x18,uVar7);
      lVar6 = lVar6 + (ulonglong)uVar7;
LAB_18049bb7c:
      *param_1 = lVar6;
    }
    plVar10 = plVar10 + 1;
    uVar14 = uVar14 - 1;
  } while( true );
}



/* ===== 18049bcf0 FUN_18049bcf0 ===== */

undefined8 FUN_18049bcf0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 local_res18 [8];
  
  if ((uint)(*(int *)(param_3 + 8) - *(int *)(param_3 + 0x10)) < 0x400) {
    FUN_1804a9e80(param_3,0x400);
  }
  lVar3 = *(longlong *)(*(longlong *)(param_3 + 0x20) + 0x40);
  uVar2 = *(uint *)(lVar3 + 0x14);
  uVar8 = (ulonglong)uVar2;
  if ((uint)(*(int *)(param_3 + 8) - *(int *)(param_3 + 0x10)) < uVar2 + 10) {
    puVar5 = (undefined4 *)FUN_1804a9e80(param_3);
  }
  else {
    puVar5 = *(undefined4 **)(param_3 + 0x10);
  }
  *puVar5 = 0x24a4c1b;
  bVar1 = *(byte *)(*(longlong *)(param_3 + 0x20) + 0x3d);
  lVar7 = (longlong)puVar5 + 5;
  *(byte *)(puVar5 + 1) = bVar1 >> 3 & 0x10 | *(byte *)(param_3 + 0x44) & 10 | bVar1 & 4;
  if ((*(byte *)(param_3 + 0x44) & 2) == 0) {
    uVar6 = FUN_180499630(lVar7,uVar8);
    lVar7 = FUN_180540530(uVar6,lVar3 + 0x18,uVar8);
    lVar7 = lVar7 + uVar8;
  }
  uVar4 = (**(code **)(param_3 + 0x28))
                    (*(ulonglong *)(param_3 + 0x18) & 0xfffffffffffffff8,
                     *(undefined8 *)(param_3 + 0x10),(int)lVar7 - *(int *)(param_3 + 0x10),
                     *(undefined8 *)(param_3 + 0x30));
  *(undefined4 *)(param_3 + 0x48) = uVar4;
  FUN_18049b8c0(param_3,*(undefined8 *)(param_3 + 0x20));
  if (*(int *)(param_3 + 0x48) == 0) {
    local_res18[0] = 0;
    uVar4 = (**(code **)(param_3 + 0x28))
                      (*(ulonglong *)(param_3 + 0x18) & 0xfffffffffffffff8,local_res18,1,
                       *(undefined8 *)(param_3 + 0x30));
    *(undefined4 *)(param_3 + 0x48) = uVar4;
  }
  return 0;
}



/* ===== 18049be10 FUN_18049be10 ===== */

int FUN_18049be10(ulonglong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                 uint param_5)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  longlong local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  uint local_18;
  uint local_14;
  int local_10;
  
  local_18 = 0;
  local_14 = param_5 | 8;
  if (*(char *)(param_2 + 0x68) == '\x13') {
    local_14 = param_5;
  }
  local_10 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_40 = param_1;
  local_38 = param_2;
  local_30 = param_3;
  local_28 = param_4;
  iVar2 = FUN_180003349(param_1,0,&local_58,FUN_18049bcf0);
  if (iVar2 == 0) {
    iVar2 = local_10;
  }
  puVar1 = *(undefined8 **)((local_40 & 0xfffffffffffffff8) + 0x10);
  puVar1[2] = puVar1[2] - (ulonglong)(uint)((int)local_50 - (int)local_48);
  (*(code *)*puVar1)(puVar1[1],local_48,(ulonglong)(uint)((int)local_50 - (int)local_48),0);
  if (local_18 != 0) {
    puVar1 = *(undefined8 **)((local_40 & 0xfffffffffffffff8) + 0x10);
    puVar1[2] = puVar1[2] + (ulonglong)local_18 * -8;
    (*(code *)*puVar1)(puVar1[1],local_20,(ulonglong)local_18 * 8,0);
  }
  return iVar2;
}



/* ===== 18049bee0 FUN_18049bee0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18049bee0(longlong param_1,longlong param_2,uint param_3)

{
  ulonglong uVar1;
  ushort uVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  
  lVar3 = *(longlong *)(param_2 + 0x50);
  *(ulonglong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + (ulonglong)param_3;
  FUN_180540530(lVar3);
  auVar9 = _DAT_18056edb0;
  if ((*(byte *)(param_1 + 0xac) & 1) == 0) {
    return;
  }
  if (*(int *)(param_2 + 0x4c) < 0x100) {
    return;
  }
  uVar7 = *(int *)(param_2 + 0xc) - 1;
  if (0xffff < *(int *)(param_2 + 0x4c)) {
    if (uVar7 == 0) {
      return;
    }
    uVar6 = 0;
    if ((uVar7 < 2) || (DAT_1809194c8 < 2)) goto LAB_18049c110;
    if (uVar7 < 0x10) {
LAB_18049c0e3:
      do {
        auVar8._8_8_ = 0;
        auVar8._0_8_ = *(ulonglong *)(lVar3 + uVar6 * 4);
        auVar8 = pshufb(auVar8,auVar9);
        *(longlong *)(lVar3 + uVar6 * 4) = auVar8._0_8_;
        uVar5 = (int)uVar6 + 2;
        uVar6 = (ulonglong)uVar5;
      } while (uVar5 < (uVar7 & 0xfffffffe));
    }
    else {
      do {
        iVar4 = (int)uVar6;
        auVar8 = pshufb(*(undefined1 (*) [16])(lVar3 + uVar6 * 4),auVar9);
        *(undefined1 (*) [16])(lVar3 + uVar6 * 4) = auVar8;
        auVar8 = pshufb(*(undefined1 (*) [16])(lVar3 + (ulonglong)(iVar4 + 4) * 4),auVar9);
        *(undefined1 (*) [16])(lVar3 + (ulonglong)(iVar4 + 4) * 4) = auVar8;
        auVar8 = pshufb(*(undefined1 (*) [16])(lVar3 + (ulonglong)(iVar4 + 8) * 4),auVar9);
        *(undefined1 (*) [16])(lVar3 + (ulonglong)(iVar4 + 8) * 4) = auVar8;
        uVar6 = (ulonglong)(iVar4 + 0x10U);
        auVar8 = pshufb(*(undefined1 (*) [16])(lVar3 + (ulonglong)(iVar4 + 0xc) * 4),auVar9);
        *(undefined1 (*) [16])(lVar3 + (ulonglong)(iVar4 + 0xc) * 4) = auVar8;
      } while (iVar4 + 0x10U < (uVar7 & 0xfffffff0));
      if ((uVar7 & 0xe) != 0) goto LAB_18049c0e3;
    }
    if (uVar7 <= (uint)uVar6) {
      return;
    }
LAB_18049c110:
    do {
      uVar5 = *(uint *)(lVar3 + uVar6 * 4);
      *(uint *)(lVar3 + uVar6 * 4) =
           uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
      uVar5 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar5;
    } while (uVar5 < uVar7);
    return;
  }
  if (uVar7 == 0) {
    return;
  }
  uVar6 = 0;
  if (uVar7 < 4) goto LAB_18049c030;
  if (uVar7 < 0x20) {
LAB_18049bff3:
    do {
      uVar1 = *(ulonglong *)(lVar3 + uVar6 * 2);
      auVar9._8_8_ = 0;
      auVar9._0_8_ = uVar1;
      auVar9 = psllw(auVar9,8);
      *(ulonglong *)(lVar3 + uVar6 * 2) =
           CONCAT26((ushort)(uVar1 >> 0x38),
                    CONCAT24((ushort)(uVar1 >> 0x20) >> 8,
                             CONCAT22((ushort)(uVar1 >> 0x10) >> 8,(ushort)uVar1 >> 8))) |
           auVar9._0_8_;
      uVar5 = (int)uVar6 + 4;
      uVar6 = (ulonglong)uVar5;
    } while (uVar5 < (uVar7 & 0xfffffffc));
  }
  else {
    do {
      auVar9 = *(undefined1 (*) [16])(lVar3 + uVar6 * 2);
      iVar4 = (int)uVar6;
      auVar8 = psllw(auVar9,8);
      auVar10._0_2_ = auVar9._0_2_ >> 8;
      auVar10._2_2_ = auVar9._2_2_ >> 8;
      auVar10._4_2_ = auVar9._4_2_ >> 8;
      auVar10._6_2_ = auVar9._6_2_ >> 8;
      auVar10._8_2_ = auVar9._8_2_ >> 8;
      auVar10._10_2_ = auVar9._10_2_ >> 8;
      auVar10._12_2_ = auVar9._12_2_ >> 8;
      auVar10._14_2_ = auVar9._14_2_ >> 8;
      *(undefined1 (*) [16])(lVar3 + uVar6 * 2) = auVar10 | auVar8;
      auVar9 = *(undefined1 (*) [16])(lVar3 + (ulonglong)(iVar4 + 8) * 2);
      auVar8 = psllw(auVar9,8);
      auVar11._0_2_ = auVar9._0_2_ >> 8;
      auVar11._2_2_ = auVar9._2_2_ >> 8;
      auVar11._4_2_ = auVar9._4_2_ >> 8;
      auVar11._6_2_ = auVar9._6_2_ >> 8;
      auVar11._8_2_ = auVar9._8_2_ >> 8;
      auVar11._10_2_ = auVar9._10_2_ >> 8;
      auVar11._12_2_ = auVar9._12_2_ >> 8;
      auVar11._14_2_ = auVar9._14_2_ >> 8;
      *(undefined1 (*) [16])(lVar3 + (ulonglong)(iVar4 + 8) * 2) = auVar11 | auVar8;
      auVar9 = *(undefined1 (*) [16])(lVar3 + (ulonglong)(iVar4 + 0x10) * 2);
      auVar8 = psllw(auVar9,8);
      auVar12._0_2_ = auVar9._0_2_ >> 8;
      auVar12._2_2_ = auVar9._2_2_ >> 8;
      auVar12._4_2_ = auVar9._4_2_ >> 8;
      auVar12._6_2_ = auVar9._6_2_ >> 8;
      auVar12._8_2_ = auVar9._8_2_ >> 8;
      auVar12._10_2_ = auVar9._10_2_ >> 8;
      auVar12._12_2_ = auVar9._12_2_ >> 8;
      auVar12._14_2_ = auVar9._14_2_ >> 8;
      *(undefined1 (*) [16])(lVar3 + (ulonglong)(iVar4 + 0x10) * 2) = auVar12 | auVar8;
      uVar6 = (ulonglong)(iVar4 + 0x20U);
      auVar9 = *(undefined1 (*) [16])(lVar3 + (ulonglong)(iVar4 + 0x18) * 2);
      auVar8 = psllw(auVar9,8);
      auVar13._0_2_ = auVar9._0_2_ >> 8;
      auVar13._2_2_ = auVar9._2_2_ >> 8;
      auVar13._4_2_ = auVar9._4_2_ >> 8;
      auVar13._6_2_ = auVar9._6_2_ >> 8;
      auVar13._8_2_ = auVar9._8_2_ >> 8;
      auVar13._10_2_ = auVar9._10_2_ >> 8;
      auVar13._12_2_ = auVar9._12_2_ >> 8;
      auVar13._14_2_ = auVar9._14_2_ >> 8;
      *(undefined1 (*) [16])(lVar3 + (ulonglong)(iVar4 + 0x18) * 2) = auVar13 | auVar8;
    } while (iVar4 + 0x20U < (uVar7 & 0xffffffe0));
    if ((uVar7 & 0x1c) != 0) goto LAB_18049bff3;
  }
  if (uVar7 <= (uint)uVar6) {
    return;
  }
LAB_18049c030:
  do {
    uVar2 = *(ushort *)(lVar3 + uVar6 * 2);
    *(ushort *)(lVar3 + uVar6 * 2) = uVar2 >> 8 | uVar2 << 8;
    uVar5 = (int)uVar6 + 1;
    uVar6 = (ulonglong)uVar5;
  } while (uVar5 < uVar7);
  return;
}



/* ===== 18049c130 FUN_18049c130 ===== */

void FUN_18049c130(longlong param_1,int param_2)

{
  char cVar1;
  undefined8 uVar2;
  char *pcVar3;
  
  pcVar3 = *(char **)(param_1 + 0x80);
  uVar2 = *(undefined8 *)(param_1 + 8);
  cVar1 = *pcVar3;
  if (cVar1 == '\x1b') {
    pcVar3 = "(binary)";
  }
  else if ((cVar1 == '@') || (cVar1 == '=')) {
    pcVar3 = pcVar3 + 1;
  }
  FUN_180498630(uVar2,"%s: %s",pcVar3,PTR_s_not_enough_memory_180919000 + param_2);
                    /* WARNING: Subroutine does not return */
  FUN_180484920(uVar2,3);
}



/* ===== 18049c190 FUN_18049c190 ===== */

void FUN_18049c190(longlong param_1,uint param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  ulonglong local_res20;
  
  if ((0x7fffff00 < param_2) || (*(int *)(param_1 + 0x30) < 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_18049c130(param_1,0xc49);
  }
  do {
    lVar1 = *(longlong *)(param_1 + 0x50);
    uVar5 = *(int *)(param_1 + 0x28) - *(int *)(param_1 + 0x20);
    if (uVar5 != 0) {
      if (*(int *)(param_1 + 0x40) == (int)lVar1) {
        if ((uint)(*(int *)(param_1 + 0x48) - (int)lVar1) < param_2) {
          lVar1 = FUN_1804a9e80(param_1 + 0x40,param_2);
        }
        FUN_180540530(lVar1,*(undefined8 *)(param_1 + 0x20),uVar5);
      }
      else if (*(longlong *)(param_1 + 0x20) != lVar1) {
        FUN_180540530(lVar1,*(longlong *)(param_1 + 0x20),uVar5);
      }
      *(longlong *)(param_1 + 0x20) = lVar1;
      *(ulonglong *)(param_1 + 0x28) = (ulonglong)uVar5 + lVar1;
    }
    *(ulonglong *)(param_1 + 0x40) = (ulonglong)uVar5 + lVar1;
    lVar1 = (**(code **)(param_1 + 0x60))
                      (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x68),&local_res20);
    if ((lVar1 == 0) || (local_res20 == 0)) {
      if (param_3 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_18049c130(param_1,0xc49);
      }
      *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
      return;
    }
    if (0x7fffff00 - uVar5 <= local_res20) {
                    /* WARNING: Subroutine does not return */
      FUN_180484480(*(undefined8 *)(param_1 + 8));
    }
    if (uVar5 == 0) {
      lVar3 = local_res20 + lVar1;
    }
    else {
      uVar5 = uVar5 + (int)local_res20;
      uVar4 = uVar5;
      if (uVar5 < param_2) {
        uVar4 = param_2;
      }
      if ((uint)(*(int *)(param_1 + 0x48) - *(int *)(param_1 + 0x50)) < uVar4) {
        lVar2 = FUN_1804a9e80(param_1 + 0x40);
      }
      else {
        lVar2 = *(longlong *)(param_1 + 0x50);
      }
      FUN_180540530(*(undefined8 *)(param_1 + 0x40),lVar1,local_res20);
      lVar3 = (ulonglong)uVar5 + lVar2;
      *(longlong *)(param_1 + 0x40) = lVar3;
      lVar1 = lVar2;
    }
    *(longlong *)(param_1 + 0x20) = lVar1;
    *(longlong *)(param_1 + 0x28) = lVar3;
  } while ((uint)((int)lVar3 - (int)lVar1) < param_2);
  return;
}



/* ===== 18049c320 FUN_18049c320 ===== */

longlong FUN_18049c320(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  double dVar9;
  undefined8 uVar10;
  double *pdVar11;
  undefined8 local_res8;
  
  iVar2 = FUN_1804aa350(param_1 + 0x20);
  iVar3 = FUN_1804aa350(param_1 + 0x20);
  if (iVar3 == 0) {
    iVar5 = 0;
  }
  else if (iVar3 == 1) {
    iVar5 = 1;
  }
  else {
    iVar5 = 0x1f;
    if (iVar3 - 1U != 0) {
      for (; iVar3 - 1U >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    iVar5 = iVar5 + 1;
  }
  lVar7 = FUN_180492ab0(*(undefined8 *)(param_1 + 8),iVar2,iVar5);
  if (iVar2 != 0) {
    pdVar11 = *(double **)(lVar7 + 0x10);
    do {
      uVar4 = FUN_1804aa350(param_1 + 0x20);
      if (uVar4 < 5) {
        if (uVar4 == 3) {
          iVar5 = FUN_1804aa350(param_1 + 0x20);
          *pdVar11 = (double)iVar5;
        }
        else {
          if (uVar4 != 4) {
            dVar9 = (double)~((ulonglong)uVar4 << 0x2f);
            goto LAB_18049c401;
          }
          uVar6 = FUN_1804aa350(param_1 + 0x20);
          *(undefined4 *)pdVar11 = uVar6;
          uVar6 = FUN_1804aa350(param_1 + 0x20);
          *(undefined4 *)((longlong)pdVar11 + 4) = uVar6;
        }
      }
      else {
        lVar1 = *(longlong *)(param_1 + 0x20);
        *(ulonglong *)(param_1 + 0x20) = (ulonglong)(uVar4 - 5) + lVar1;
        uVar8 = FUN_180491d30(*(undefined8 *)(param_1 + 8),lVar1,uVar4 - 5);
        dVar9 = (double)(uVar8 | 0xfffd800000000000);
LAB_18049c401:
        *pdVar11 = dVar9;
      }
      pdVar11 = pdVar11 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  for (; iVar3 != 0; iVar3 = iVar3 + -1) {
    uVar4 = FUN_1804aa350(param_1 + 0x20);
    if (uVar4 < 5) {
      if (uVar4 == 3) {
        iVar2 = FUN_1804aa350(param_1 + 0x20);
        local_res8 = (double)iVar2;
      }
      else if (uVar4 == 4) {
        uVar6 = FUN_1804aa350(param_1 + 0x20);
        local_res8 = (double)CONCAT44(local_res8._4_4_,uVar6);
        uVar6 = FUN_1804aa350(param_1 + 0x20);
        local_res8 = (double)CONCAT44(uVar6,(undefined4)local_res8);
      }
      else {
        local_res8 = (double)~((ulonglong)uVar4 << 0x2f);
      }
    }
    else {
      lVar1 = *(longlong *)(param_1 + 0x20);
      *(ulonglong *)(param_1 + 0x20) = (ulonglong)(uVar4 - 5) + lVar1;
      uVar8 = FUN_180491d30(*(undefined8 *)(param_1 + 8),lVar1,uVar4 - 5);
      local_res8 = (double)(uVar8 | 0xfffd800000000000);
    }
    uVar10 = FUN_1804931f0(*(undefined8 *)(param_1 + 8),lVar7,&local_res8);
    FUN_18049c4e0(param_1,uVar10,lVar7);
  }
  return lVar7;
}



/* ===== 18049c4e0 FUN_18049c4e0 ===== */

void FUN_18049c4e0(longlong param_1,double *param_2,ulonglong param_3)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  
  uVar2 = FUN_1804aa350(param_1 + 0x20);
  if (4 < uVar2) {
    lVar1 = *(longlong *)(param_1 + 0x20);
    *(ulonglong *)(param_1 + 0x20) = (ulonglong)(uVar2 - 5) + lVar1;
    uVar5 = FUN_180491d30(*(undefined8 *)(param_1 + 8),lVar1,uVar2 - 5);
    *param_2 = (double)(uVar5 | 0xfffd800000000000);
    return;
  }
  if (uVar2 == 3) {
    iVar3 = FUN_1804aa350(param_1 + 0x20);
    *param_2 = (double)iVar3;
    return;
  }
  if (uVar2 == 4) {
    uVar4 = FUN_1804aa350(param_1 + 0x20);
    *(undefined4 *)param_2 = uVar4;
    uVar4 = FUN_1804aa350(param_1 + 0x20);
    *(undefined4 *)((longlong)param_2 + 4) = uVar4;
    return;
  }
  if ((param_3 == 0) || (uVar2 != 0)) {
    *param_2 = (double)~((ulonglong)uVar2 << 0x2f);
    return;
  }
  *param_2 = (double)(param_3 | 0xfffa000000000000);
  return;
}



/* ===== 18049c5c0 FUN_18049c5c0 ===== */

void FUN_18049c5c0(longlong param_1,longlong param_2,uint param_3)

{
  ulonglong uVar1;
  ushort uVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  
  if (param_3 == 0) {
    return;
  }
  lVar3 = *(longlong *)(param_2 + 0x28);
  lVar4 = *(longlong *)(param_1 + 0x20);
  *(ulonglong *)(param_1 + 0x20) = (ulonglong)(param_3 * 2) + lVar4;
  FUN_180540530(lVar3,lVar4,param_3 * 2);
  if ((*(byte *)(param_1 + 0xac) & 1) == 0) {
    return;
  }
  if (param_3 == 0) {
    return;
  }
  uVar7 = 0;
  if (param_3 < 4) goto LAB_18049c6f0;
  if (param_3 < 0x20) {
LAB_18049c6b3:
    do {
      uVar1 = *(ulonglong *)(lVar3 + uVar7 * 2);
      auVar9._8_8_ = 0;
      auVar9._0_8_ = uVar1;
      auVar9 = psllw(auVar9,8);
      *(ulonglong *)(lVar3 + uVar7 * 2) =
           CONCAT26((ushort)(uVar1 >> 0x38),
                    CONCAT24((ushort)(uVar1 >> 0x20) >> 8,
                             CONCAT22((ushort)(uVar1 >> 0x10) >> 8,(ushort)uVar1 >> 8))) |
           auVar9._0_8_;
      uVar6 = (int)uVar7 + 4;
      uVar7 = (ulonglong)uVar6;
    } while (uVar6 < (param_3 & 0xfffffffc));
  }
  else {
    do {
      auVar9 = *(undefined1 (*) [16])(lVar3 + uVar7 * 2);
      iVar5 = (int)uVar7;
      auVar8 = psllw(auVar9,8);
      auVar10._0_2_ = auVar9._0_2_ >> 8;
      auVar10._2_2_ = auVar9._2_2_ >> 8;
      auVar10._4_2_ = auVar9._4_2_ >> 8;
      auVar10._6_2_ = auVar9._6_2_ >> 8;
      auVar10._8_2_ = auVar9._8_2_ >> 8;
      auVar10._10_2_ = auVar9._10_2_ >> 8;
      auVar10._12_2_ = auVar9._12_2_ >> 8;
      auVar10._14_2_ = auVar9._14_2_ >> 8;
      *(undefined1 (*) [16])(lVar3 + uVar7 * 2) = auVar10 | auVar8;
      auVar9 = *(undefined1 (*) [16])(lVar3 + (ulonglong)(iVar5 + 8) * 2);
      auVar8 = psllw(auVar9,8);
      auVar11._0_2_ = auVar9._0_2_ >> 8;
      auVar11._2_2_ = auVar9._2_2_ >> 8;
      auVar11._4_2_ = auVar9._4_2_ >> 8;
      auVar11._6_2_ = auVar9._6_2_ >> 8;
      auVar11._8_2_ = auVar9._8_2_ >> 8;
      auVar11._10_2_ = auVar9._10_2_ >> 8;
      auVar11._12_2_ = auVar9._12_2_ >> 8;
      auVar11._14_2_ = auVar9._14_2_ >> 8;
      *(undefined1 (*) [16])(lVar3 + (ulonglong)(iVar5 + 8) * 2) = auVar11 | auVar8;
      auVar9 = *(undefined1 (*) [16])(lVar3 + (ulonglong)(iVar5 + 0x10) * 2);
      auVar8 = psllw(auVar9,8);
      auVar12._0_2_ = auVar9._0_2_ >> 8;
      auVar12._2_2_ = auVar9._2_2_ >> 8;
      auVar12._4_2_ = auVar9._4_2_ >> 8;
      auVar12._6_2_ = auVar9._6_2_ >> 8;
      auVar12._8_2_ = auVar9._8_2_ >> 8;
      auVar12._10_2_ = auVar9._10_2_ >> 8;
      auVar12._12_2_ = auVar9._12_2_ >> 8;
      auVar12._14_2_ = auVar9._14_2_ >> 8;
      *(undefined1 (*) [16])(lVar3 + (ulonglong)(iVar5 + 0x10) * 2) = auVar12 | auVar8;
      uVar7 = (ulonglong)(iVar5 + 0x20U);
      auVar9 = *(undefined1 (*) [16])(lVar3 + (ulonglong)(iVar5 + 0x18) * 2);
      auVar8 = psllw(auVar9,8);
      auVar13._0_2_ = auVar9._0_2_ >> 8;
      auVar13._2_2_ = auVar9._2_2_ >> 8;
      auVar13._4_2_ = auVar9._4_2_ >> 8;
      auVar13._6_2_ = auVar9._6_2_ >> 8;
      auVar13._8_2_ = auVar9._8_2_ >> 8;
      auVar13._10_2_ = auVar9._10_2_ >> 8;
      auVar13._12_2_ = auVar9._12_2_ >> 8;
      auVar13._14_2_ = auVar9._14_2_ >> 8;
      *(undefined1 (*) [16])(lVar3 + (ulonglong)(iVar5 + 0x18) * 2) = auVar13 | auVar8;
    } while (iVar5 + 0x20U < (param_3 & 0xffffffe0));
    if ((param_3 & 0x1c) != 0) goto LAB_18049c6b3;
  }
  if (param_3 <= (uint)uVar7) {
    return;
  }
LAB_18049c6f0:
  do {
    uVar2 = *(ushort *)(lVar3 + uVar7 * 2);
    *(ushort *)(lVar3 + uVar7 * 2) = uVar2 >> 8 | uVar2 << 8;
    uVar6 = (int)uVar7 + 1;
    uVar7 = (ulonglong)uVar6;
  } while (uVar6 < param_3);
  return;
}



/* ===== 18049c720 FUN_18049c720 ===== */

ulonglong FUN_18049c720(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  size_t sVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  char *pcVar10;
  ulonglong *puVar11;
  
  lVar2 = *(longlong *)(param_1 + 8);
  *(int *)(param_1 + 0x74) = *(int *)(lVar2 + 0x28) - *(int *)(lVar2 + 0x38);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_1 + 0x50);
  if ((uint)(*(int *)(param_1 + 0x28) - *(int *)(param_1 + 0x20)) < 0xd) {
    FUN_18049c190(param_1,0xd,0);
  }
  pcVar10 = *(char **)(param_1 + 0x20);
  cVar1 = *pcVar10;
  *(char **)(param_1 + 0x20) = pcVar10 + 1;
  if (cVar1 == 'L') {
    cVar1 = pcVar10[1];
    *(char **)(param_1 + 0x20) = pcVar10 + 2;
    if ((cVar1 == 'J') &&
       (cVar1 = pcVar10[2], *(char **)(param_1 + 0x20) = pcVar10 + 3, cVar1 == '\x02')) {
      uVar6 = FUN_1804aa350(param_1 + 0x20);
      *(uint *)(param_1 + 0xac) = uVar6;
      if (((uVar6 & 0xffffffe0) == 0) && ((uVar6 & 8) == *(int *)(param_1 + 0xb4) * 8)) {
        if (((uVar6 & 4) != 0) &&
           (lVar3 = *(longlong *)(param_1 + 8),
           *(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x188) == 0)) {
          lVar4 = *(longlong *)(lVar3 + 0x28);
          lVar5 = *(longlong *)(lVar3 + 0x38);
          FUN_180489a10(lVar3);
          *(longlong *)(lVar3 + 0x28) = *(longlong *)(lVar3 + 0x38) + (lVar4 - lVar5);
        }
        if ((uVar6 & 2) == 0) {
          uVar6 = FUN_1804aa350(param_1 + 0x20);
          sVar7 = (size_t)uVar6;
          if ((uint)(*(int *)(param_1 + 0x28) - *(int *)(param_1 + 0x20)) < uVar6) {
            FUN_18049c190(param_1,sVar7,1);
          }
          pcVar10 = *(char **)(param_1 + 0x20);
          *(char **)(param_1 + 0x20) = pcVar10 + sVar7;
        }
        else {
          pcVar10 = *(char **)(param_1 + 0x80);
          if (*pcVar10 == '\x1b') {
            pcVar10 = "=?";
          }
          sVar7 = strlen(pcVar10);
        }
        uVar8 = FUN_180491d30(*(undefined8 *)(param_1 + 8),pcVar10,sVar7);
        *(undefined8 *)(param_1 + 0x78) = uVar8;
        while( true ) {
          pcVar10 = *(char **)(param_1 + 0x20);
          if ((pcVar10 < *(char **)(param_1 + 0x28)) && (*pcVar10 == '\0')) break;
          if ((uint)((int)*(char **)(param_1 + 0x28) - (int)pcVar10) < 5) {
            FUN_18049c190(param_1,5,0);
          }
          uVar6 = FUN_1804aa350(param_1 + 0x20);
          if (uVar6 == 0) goto LAB_18049c926;
          if ((uint)(*(int *)(param_1 + 0x28) - *(int *)(param_1 + 0x20)) < uVar6) {
            FUN_18049c190(param_1,uVar6,1);
          }
          lVar3 = *(longlong *)(param_1 + 0x20);
          uVar9 = FUN_18049c9a0(param_1);
          if (*(longlong *)(param_1 + 0x20) != lVar3 + (ulonglong)uVar6) goto LAB_18049c987;
          **(ulonglong **)(lVar2 + 0x28) = uVar9 | 0xfffc000000000000;
          *(longlong *)(lVar2 + 0x28) = *(longlong *)(lVar2 + 0x28) + 8;
          if (*(ulonglong *)(lVar2 + 0x30) <= *(ulonglong *)(lVar2 + 0x28)) {
            FUN_18048ea20(lVar2);
          }
        }
        *(char **)(param_1 + 0x20) = pcVar10 + 1;
LAB_18049c926:
        if (((*(longlong *)(param_1 + 0x28) == *(longlong *)(param_1 + 0x20)) ||
            (*(int *)(param_1 + 0xb0) != 0)) &&
           (puVar11 = (ulonglong *)(*(longlong *)(lVar2 + 0x28) + -8),
           puVar11 ==
           (ulonglong *)((longlong)*(int *)(param_1 + 0x74) + *(longlong *)(lVar2 + 0x38)))) {
          *(ulonglong **)(lVar2 + 0x28) = puVar11;
          return *puVar11 & 0x7fffffffffff;
        }
LAB_18049c987:
                    /* WARNING: Subroutine does not return */
        FUN_18049c130(param_1,0xc49);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_18049c130(param_1,0xc27);
}



/* ===== 18049c9a0 FUN_18049c9a0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_18049c9a0(longlong param_1)

{
  ulonglong *puVar1;
  uint uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  byte bVar6;
  byte bVar7;
  char cVar8;
  undefined1 *puVar9;
  longlong lVar10;
  undefined1 auVar11 [16];
  uint uVar12;
  int iVar13;
  uint uVar14;
  undefined4 uVar15;
  longlong lVar16;
  byte bVar17;
  sbyte sVar18;
  uint uVar19;
  char *pcVar20;
  int iVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  undefined8 uVar24;
  uint uVar25;
  double *pdVar26;
  ulonglong *puVar27;
  short sVar28;
  byte *pbVar29;
  uint uVar30;
  undefined1 auVar31 [16];
  int local_res20;
  undefined4 local_60;
  int local_5c;
  
  puVar9 = *(undefined1 **)(param_1 + 0x20);
  local_res20 = 0;
  local_60 = 0;
  local_5c = 0;
  uVar3 = *puVar9;
  *(undefined1 **)(param_1 + 0x20) = puVar9 + 1;
  uVar4 = puVar9[1];
  *(undefined1 **)(param_1 + 0x20) = puVar9 + 2;
  uVar5 = puVar9[2];
  *(undefined1 **)(param_1 + 0x20) = puVar9 + 3;
  bVar6 = puVar9[3];
  *(undefined1 **)(param_1 + 0x20) = puVar9 + 4;
  uVar12 = FUN_1804aa350(param_1 + 0x20);
  iVar13 = FUN_1804aa350(param_1 + 0x20);
  uVar14 = FUN_1804aa350(param_1 + 0x20);
  uVar30 = uVar14 + 1;
  if (((*(byte *)(param_1 + 0xac) & 2) == 0) &&
     (local_res20 = FUN_1804aa350(param_1 + 0x20), local_res20 != 0)) {
    local_60 = FUN_1804aa350(param_1 + 0x20);
    local_5c = FUN_1804aa350(param_1 + 0x20);
  }
  uVar19 = (uVar12 * 2 + uVar14) * 4 + 0x73 & 0xfffffff8;
  uVar25 = uVar19 + iVar13 * 8;
  uVar2 = uVar25 + (bVar6 + 1 & 0xfffffffe) * 2;
  lVar16 = FUN_1804916f0(*(undefined8 *)(param_1 + 8));
  *(undefined1 *)(lVar16 + 9) = 7;
  *(undefined1 *)(lVar16 + 10) = uVar4;
  *(undefined1 *)(lVar16 + 0xb) = uVar5;
  *(ulonglong *)(lVar16 + 0x20) = (ulonglong)uVar19 + lVar16;
  *(uint *)(lVar16 + 0xc) = uVar30;
  *(undefined4 *)(lVar16 + 0x30) = 0;
  *(uint *)(lVar16 + 0x38) = local_res20 + uVar2;
  *(byte *)(lVar16 + 0x3c) = bVar6;
  *(undefined2 *)(lVar16 + 0x3e) = 0;
  *(ulonglong *)(lVar16 + 0x28) = (ulonglong)uVar25 + lVar16;
  *(int *)(lVar16 + 0x34) = iVar13;
  *(undefined1 *)(lVar16 + 0x3d) = uVar3;
  *(undefined8 *)(lVar16 + 0x40) = *(undefined8 *)(param_1 + 0x78);
  *(undefined4 *)((ulonglong)uVar19 + (ulonglong)(uVar12 + 1) * -8 + lVar16) = 0;
  if (*(int *)(param_1 + 0xb4) == 1) {
    uVar19 = 0x60;
    if ((*(byte *)(lVar16 + 0x3d) & 2) != 0) {
      uVar19 = 99;
    }
  }
  else {
    uVar19 = 0x13;
  }
  *(uint *)(lVar16 + 0x68) = (uint)*(byte *)(lVar16 + 0xb) << 8 | uVar19;
  lVar10 = *(longlong *)(param_1 + 0x20);
  *(ulonglong *)(param_1 + 0x20) = (ulonglong)(uVar14 * 4) + lVar10;
  FUN_180540530(lVar16 + 0x6c,lVar10,uVar14 * 4);
  auVar11 = _DAT_18056edb0;
  if (((*(byte *)(param_1 + 0xac) & 1) == 0) || (uVar30 < 2)) goto LAB_18049cc63;
  uVar22 = 1;
  if ((1 < uVar14) && (1 < DAT_1809194c8)) {
    if (uVar14 < 0x10) {
LAB_18049cc1d:
      uVar23 = uVar22;
      do {
        uVar19 = (int)uVar23 + 2;
        uVar22 = (ulonglong)uVar19;
        auVar31._8_8_ = 0;
        auVar31._0_8_ = *(ulonglong *)(lVar16 + 0x68 + uVar23 * 4);
        auVar31 = pshufb(auVar31,auVar11);
        *(longlong *)(lVar16 + 0x68 + uVar23 * 4) = auVar31._0_8_;
        uVar23 = uVar22;
      } while (uVar19 < uVar30 - (uVar14 & 1));
    }
    else {
      do {
        iVar21 = (int)uVar22;
        auVar31 = pshufb(*(undefined1 (*) [16])(lVar16 + 0x68 + uVar22 * 4),auVar11);
        *(undefined1 (*) [16])(lVar16 + 0x68 + uVar22 * 4) = auVar31;
        auVar31 = pshufb(*(undefined1 (*) [16])(lVar16 + 0x68 + (ulonglong)(iVar21 + 4) * 4),auVar11
                        );
        *(undefined1 (*) [16])(lVar16 + 0x68 + (ulonglong)(iVar21 + 4) * 4) = auVar31;
        auVar31 = pshufb(*(undefined1 (*) [16])(lVar16 + 0x68 + (ulonglong)(iVar21 + 8) * 4),auVar11
                        );
        *(undefined1 (*) [16])(lVar16 + 0x68 + (ulonglong)(iVar21 + 8) * 4) = auVar31;
        uVar22 = (ulonglong)(iVar21 + 0x10U);
        auVar31 = pshufb(*(undefined1 (*) [16])(lVar16 + 0x68 + (ulonglong)(iVar21 + 0xc) * 4),
                         auVar11);
        *(undefined1 (*) [16])(lVar16 + 0x68 + (ulonglong)(iVar21 + 0xc) * 4) = auVar31;
      } while (iVar21 + 0x10U < uVar30 - (uVar14 & 0xf));
      if ((uVar14 & 0xe) != 0) goto LAB_18049cc1d;
    }
    if (uVar30 <= (uint)uVar22) goto LAB_18049cc63;
  }
  do {
    uVar25 = (int)uVar22 + 1;
    uVar19 = *(uint *)(lVar16 + 0x68 + uVar22 * 4);
    *(uint *)(lVar16 + 0x68 + uVar22 * 4) =
         uVar19 >> 0x18 | (uVar19 & 0xff0000) >> 8 | (uVar19 & 0xff00) << 8 | uVar19 << 0x18;
    uVar22 = (ulonglong)uVar25;
  } while (uVar25 < uVar30);
LAB_18049cc63:
  FUN_18049c5c0(param_1,lVar16,bVar6);
  uVar30 = 0;
  puVar27 = (ulonglong *)(*(longlong *)(lVar16 + 0x20) + (ulonglong)uVar12 * -8);
  if (uVar12 != 0) {
    do {
      uVar19 = FUN_1804aa350(param_1 + 0x20);
      if (uVar19 < 5) {
        if (uVar19 == 1) {
          uVar22 = FUN_18049c320();
          *puVar27 = uVar22;
        }
        else if (uVar19 == 0) {
          lVar10 = *(longlong *)(param_1 + 8);
          if (*(ulonglong *)(lVar10 + 0x28) <=
              (ulonglong)((longlong)*(int *)(param_1 + 0x74) + *(longlong *)(lVar10 + 0x38))) {
                    /* WARNING: Subroutine does not return */
            FUN_18049c130(param_1,0xc49);
          }
          puVar1 = (ulonglong *)(*(ulonglong *)(lVar10 + 0x28) - 8);
          *(ulonglong **)(lVar10 + 0x28) = puVar1;
          *puVar27 = *puVar1 & 0x7fffffffffff;
        }
        else {
          if (uVar19 == 4) {
            sVar28 = 0x12;
          }
          else {
            sVar28 = (uVar19 != 2) + 0xb;
          }
          uVar24 = 0x18;
          if (uVar19 == 4) {
            uVar24 = 0x20;
          }
          uVar22 = FUN_1804916f0(*(undefined8 *)(param_1 + 8),uVar24);
          *(undefined1 *)(uVar22 + 9) = 10;
          *(short *)(uVar22 + 10) = sVar28;
          *puVar27 = uVar22;
          uVar15 = FUN_1804aa350(param_1 + 0x20);
          *(undefined4 *)(uVar22 + 0x10) = uVar15;
          uVar15 = FUN_1804aa350();
          *(undefined4 *)(uVar22 + 0x14) = uVar15;
          if (uVar19 == 4) {
            uVar15 = FUN_1804aa350(param_1 + 0x20);
            *(undefined4 *)(uVar22 + 0x18) = uVar15;
            uVar15 = FUN_1804aa350();
            *(undefined4 *)(uVar22 + 0x1c) = uVar15;
          }
        }
      }
      else {
        lVar10 = *(longlong *)(param_1 + 0x20);
        *(ulonglong *)(param_1 + 0x20) = (ulonglong)(uVar19 - 5) + lVar10;
        uVar22 = FUN_180491d30(*(undefined8 *)(param_1 + 8),lVar10,uVar19 - 5);
        *puVar27 = uVar22;
      }
      uVar30 = uVar30 + 1;
      puVar27 = puVar27 + 1;
    } while (uVar30 < uVar12);
  }
  *(uint *)(lVar16 + 0x30) = uVar12;
  pdVar26 = *(double **)(lVar16 + 0x20);
  for (; iVar13 != 0; iVar13 = iVar13 + -1) {
    bVar6 = **(byte **)(param_1 + 0x20);
    pbVar29 = *(byte **)(param_1 + 0x20) + 1;
    bVar7 = bVar6 >> 1;
    uVar12 = (uint)bVar7;
    if (0x3f < bVar7) {
      bVar17 = 0xff;
      uVar12 = bVar7 & 0x3f;
      do {
        bVar7 = *pbVar29;
        bVar17 = bVar17 + 7;
        pbVar29 = pbVar29 + 1;
        uVar12 = uVar12 | (bVar7 & 0x7f) << (bVar17 & 0x1f);
      } while (0x7f < bVar7);
    }
    *(byte **)(param_1 + 0x20) = pbVar29;
    if ((bVar6 & 1) == 0) {
      *pdVar26 = (double)(int)uVar12;
    }
    else {
      *(uint *)pdVar26 = uVar12;
      uVar12 = FUN_1804aa350();
      *(uint *)((longlong)pdVar26 + 4) = uVar12;
    }
    pdVar26 = pdVar26 + 1;
  }
  *(undefined4 *)(lVar16 + 0x48) = local_60;
  *(int *)(lVar16 + 0x4c) = local_5c;
  if (local_res20 == 0) {
    *(undefined8 *)(lVar16 + 0x50) = 0;
    pcVar20 = (char *)0x0;
    *(undefined8 *)(lVar16 + 0x58) = 0;
  }
  else {
    sVar18 = 0;
    if (0xff < local_5c) {
      sVar18 = (0xffff < local_5c) + 1;
    }
    *(ulonglong *)(lVar16 + 0x50) = (ulonglong)uVar2 + lVar16;
    *(ulonglong *)(lVar16 + 0x58) = (ulonglong)(uVar14 << sVar18) + (ulonglong)uVar2 + lVar16;
    FUN_18049bee0(param_1,lVar16);
    uVar12 = (uint)*(byte *)(lVar16 + 0x3c);
    pcVar20 = *(char **)(lVar16 + 0x58);
    if (*(byte *)(lVar16 + 0x3c) != 0) {
      do {
        do {
          cVar8 = *pcVar20;
          pcVar20 = pcVar20 + 1;
        } while (cVar8 != '\0');
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
  }
  *(char **)(lVar16 + 0x60) = pcVar20;
  return lVar16;
}



/* ===== 18049cf00 FUN_18049cf00 ===== */

void FUN_18049cf00(longlong *param_1,uint param_2,uint param_3,uint *param_4)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  
  lVar1 = *param_1;
  iVar5 = param_2 - param_3;
  if (param_4[2] - 0xd < 2) {
    uVar6 = (ulonglong)*param_4;
    lVar2 = *(longlong *)(lVar1 + 0x48);
    iVar4 = 0;
    if (-1 < iVar5 + 1) {
      iVar4 = iVar5 + 1;
    }
    *(char *)(lVar2 + 3 + uVar6 * 8) = (char)iVar4 + '\x01';
    if (1 < iVar4) {
      uVar3 = *(int *)(lVar1 + 0x34) + -1 + iVar4;
      if (*(byte *)(lVar1 + 0x5a) < uVar3) {
        if (0xf9 < uVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_18049e240(*(undefined8 *)(lVar1 + 8),0x9b6);
        }
        *(char *)(lVar1 + 0x5a) = (char)uVar3;
      }
      *(uint *)(lVar1 + 0x34) = uVar3;
    }
    if (param_4[2] == 0xe) {
      uVar3 = param_4[1];
      *(char *)(lVar2 + 9 + uVar6 * 8) = (char)uVar3 + (char)iVar4;
      if (1 < iVar4) {
        *(uint *)(lVar2 + 0x10 + uVar6 * 8) = (((uVar3 - 1) + iVar4) * 0x100 | uVar3) << 8 | 0x2c;
      }
    }
  }
  else {
    if (param_4[2] != 0xf) {
      FUN_1804a0b60(lVar1,param_4);
    }
    if (0 < iVar5) {
      iVar4 = *(int *)(lVar1 + 0x34);
      uVar3 = iVar4 + iVar5;
      if (*(byte *)(lVar1 + 0x5a) < uVar3) {
        if (0xf9 < uVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_18049e240(*(undefined8 *)(lVar1 + 8),0x9b6);
        }
        *(char *)(lVar1 + 0x5a) = (char)uVar3;
      }
      *(uint *)(lVar1 + 0x34) = uVar3;
      FUN_18049dbe0(lVar1,iVar4,iVar5);
    }
  }
  if (param_2 < param_3) {
    *(int *)(*param_1 + 0x34) = *(int *)(*param_1 + 0x34) + iVar5;
  }
  return;
}



/* ===== 18049d010 FUN_18049d010 ===== */

uint FUN_18049d010(longlong param_1,undefined4 param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x28);
  lVar2 = *(longlong *)(param_1 + 8);
  FUN_1804a2120(param_1,*(undefined4 *)(param_1 + 0x30),uVar1,0xff,uVar1);
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  if (*(uint *)(param_1 + 0x50) <= uVar1) {
    if (0x3ffffff < *(uint *)(lVar2 + 0xa8)) {
                    /* WARNING: Subroutine does not return */
      FUN_18049e200(param_1,0x4000000,"bytecode instructions");
    }
    uVar4 = *(longlong *)(param_1 + 0x48) - *(longlong *)(lVar2 + 0xa0);
    uVar3 = FUN_180491670(*(undefined8 *)(param_1 + 0x10),*(longlong *)(lVar2 + 0xa0),lVar2 + 0xa8,
                          0x4000000,8);
    *(undefined8 *)(lVar2 + 0xa0) = uVar3;
    *(int *)(param_1 + 0x50) = *(int *)(lVar2 + 0xa8) - (int)((longlong)uVar4 >> 3);
    *(ulonglong *)(param_1 + 0x48) = (uVar4 & 0xfffffffffffffff8) + *(longlong *)(lVar2 + 0xa0);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x48) + (ulonglong)uVar1 * 8) = param_2;
  *(undefined4 *)(*(longlong *)(param_1 + 0x48) + 4 + (ulonglong)uVar1 * 8) =
       *(undefined4 *)(lVar2 + 0x74);
  *(uint *)(param_1 + 0x28) = uVar1 + 1;
  return uVar1;
}



/* ===== 18049d110 FUN_18049d110 ===== */

void FUN_18049d110(undefined8 *param_1,int param_2,uint *param_3,uint *param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulonglong *puVar4;
  uint uVar5;
  
  if (param_2 != 5) {
    if (param_2 < 6) {
      FUN_1804a0eb0(param_1,param_4);
      if (param_4[2] == 4) {
        puVar4 = (ulonglong *)FUN_1804931f0(param_1[2],*param_1,param_4);
        if (*(int *)((longlong)puVar4 + 4) == 0) {
          uVar1 = (uint)*puVar4;
        }
        else {
          *puVar4 = (ulonglong)*(uint *)((longlong)param_1 + 0x3c);
          uVar1 = *(uint *)((longlong)param_1 + 0x3c);
          *(uint *)((longlong)param_1 + 0x3c) = uVar1 + 1;
        }
        if (0xff < uVar1) goto LAB_18049d255;
        iVar2 = 0x16;
      }
      else {
LAB_18049d255:
        uVar1 = FUN_1804a0b00(param_1,param_4);
        iVar2 = 0x20;
      }
      uVar5 = param_2 + iVar2;
      FUN_1804a0eb0(param_1,param_3);
      if ((param_3[2] == 4) && (param_4[2] != 4)) {
        uVar3 = FUN_18049e160(param_1,param_3);
        if (uVar3 < 0x100) {
          uVar5 = uVar5 - 5;
          goto LAB_18049d1c9;
        }
      }
    }
    else {
      uVar5 = param_2 + 0x54;
      uVar1 = FUN_1804a0b00();
    }
    uVar3 = uVar1;
    uVar1 = FUN_1804a0b00(param_1,param_3);
    goto LAB_18049d1c9;
  }
  uVar5 = 0x25;
  FUN_18049e870();
  if (param_4[2] == 0xc) {
    if (param_4[3] != param_4[4]) {
      if (*param_4 < *(uint *)(param_1 + 7)) goto LAB_18049d15e;
      FUN_1804a0bd0(param_1,param_4);
    }
  }
  else {
LAB_18049d15e:
    FUN_1804a0b60(param_1,param_4);
  }
  uVar3 = *param_4;
  FUN_18049e870(param_1,param_3);
  if (param_3[2] == 0xc) {
    if (param_3[3] != param_3[4]) {
      if (*(uint *)(param_1 + 7) <= *param_3) {
        FUN_1804a0bd0(param_1,param_3);
        uVar1 = *param_3;
        goto LAB_18049d1c9;
      }
      goto LAB_18049d19c;
    }
  }
  else {
LAB_18049d19c:
    FUN_1804a0b60(param_1,param_3);
  }
  uVar1 = *param_3;
LAB_18049d1c9:
  if ((param_3[2] == 0xc) && (*(uint *)(param_1 + 7) <= *param_3)) {
    *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + -1;
  }
  if ((param_4[2] == 0xc) && (*(uint *)(param_1 + 7) <= *param_4)) {
    *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + -1;
  }
  uVar1 = FUN_18049d010(param_1,(uVar1 << 8 | uVar3) << 0x10 | uVar5);
  *param_3 = uVar1;
  param_3[2] = 0xb;
  return;
}



/* ===== 18049d2b0 FUN_18049d2b0 ===== */

void FUN_18049d2b0(longlong param_1,int param_2,double *param_3,double *param_4)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  double *pdVar4;
  double dVar5;
  
  if (param_2 < 6) {
    if ((((*(uint *)(param_3 + 1) != 4) ||
         (*(uint *)((longlong)param_3 + 0xc) != *(uint *)(param_3 + 2))) ||
        (*(uint *)(param_4 + 1) != 4)) ||
       (((*(uint *)((longlong)param_4 + 0xc) != *(uint *)(param_4 + 2) ||
         (dVar5 = (double)FUN_1804b8d60(*param_3,*param_4,param_2), NAN(dVar5))) || (dVar5 == -0.0))
       )) {
      FUN_18049d110(param_1,param_2,param_3,param_4);
      return;
    }
  }
  else {
    if (0xb < param_2) {
      if (param_2 == 0x13) {
        FUN_18049e870(param_1,param_4);
        uVar2 = *(uint *)(param_3 + 2);
        pdVar4 = param_4 + 2;
      }
      else {
        if (param_2 != 0x14) {
          if (param_2 == 0x15) {
            FUN_1804a0b60(param_1,param_4);
            uVar2 = *(uint *)((longlong)param_3 + 4);
            *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x28);
            FUN_1804a1f10(param_1,param_1 + 0x30,uVar2);
            return;
          }
          if (param_2 != 0xc) {
            FUN_18049d730();
            return;
          }
          FUN_1804a0eb0(param_1,param_4);
          if ((*(uint *)(param_4 + 1) == 0xb) &&
             (*(char *)(*(longlong *)(param_1 + 0x48) + (ulonglong)*(uint *)param_4 * 8) == '&')) {
            if ((*(uint *)(param_3 + 1) == 0xc) && (*(uint *)(param_1 + 0x38) <= *(uint *)param_3))
            {
              *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + -1;
            }
            *(undefined1 *)(*(longlong *)(param_1 + 0x48) + 3 + (ulonglong)*(uint *)param_4 * 8) =
                 *(undefined1 *)param_3;
            *(uint *)param_3 = *(uint *)param_4;
            *(uint *)(param_3 + 1) = 0xb;
            return;
          }
          FUN_1804a0b60(param_1,param_4);
          if ((*(uint *)(param_4 + 1) == 0xc) && (*(uint *)(param_1 + 0x38) <= *(uint *)param_4)) {
            *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + -1;
          }
          if ((*(uint *)(param_3 + 1) == 0xc) && (*(uint *)(param_1 + 0x38) <= *(uint *)param_3)) {
            *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + -1;
          }
          uVar2 = FUN_18049d010(param_1,(*(uint *)param_3 << 8 | *(uint *)param_4) << 0x10 | 0x26);
          *(uint *)param_3 = uVar2;
          *(uint *)(param_3 + 1) = 0xb;
          return;
        }
        FUN_18049e870(param_1,param_4);
        uVar2 = *(uint *)((longlong)param_3 + 0xc);
        pdVar4 = (double *)((longlong)param_4 + 0xc);
      }
      FUN_1804a1f10(param_1,pdVar4,uVar2);
      dVar5 = param_4[1];
      *param_3 = *param_4;
      param_3[1] = dVar5;
      param_3[2] = param_4[2];
      return;
    }
    if ((((*(uint *)(param_3 + 1) != 4) ||
         (*(uint *)((longlong)param_3 + 0xc) != *(uint *)(param_3 + 2))) ||
        (*(uint *)(param_4 + 1) != 4)) ||
       (*(uint *)((longlong)param_4 + 0xc) != *(uint *)(param_4 + 2))) {
      *(byte *)(param_1 + 0x58) = *(byte *)(param_1 + 0x58) | 0x80;
      FUN_18049d110();
      return;
    }
    uVar2 = FUN_180005337(*param_3);
    uVar3 = FUN_180005337(*param_4);
    bVar1 = (byte)uVar3;
    switch(param_2) {
    case 6:
      *param_3 = (double)(int)(uVar2 & uVar3);
      return;
    case 7:
      *param_3 = (double)(int)(uVar2 | uVar3);
      return;
    case 8:
      *param_3 = (double)(int)(uVar2 ^ uVar3);
      return;
    case 9:
      *param_3 = (double)(int)(uVar2 << (bVar1 & 0x1f));
      return;
    case 10:
      *param_3 = (double)(int)(uVar2 >> (bVar1 & 0x1f));
      return;
    case 0xb:
      uVar2 = (int)uVar2 >> (bVar1 & 0x1f);
    }
    dVar5 = (double)(int)uVar2;
  }
  *param_3 = dVar5;
  return;
}



/* ===== 18049d5a0 FUN_18049d5a0 ===== */

void FUN_18049d5a0(longlong param_1,uint *param_2,int param_3)

{
  uint uVar1;
  
  if (param_2[2] == 0xb) {
    uVar1 = *(uint *)(*(longlong *)(param_1 + 0x48) + (ulonglong)*param_2 * 8);
    if ((char)uVar1 == '\x13') {
      *(uint *)(*(longlong *)(param_1 + 0x48) + (ulonglong)*param_2 * 8) =
           (param_3 != 0) + 0xe | uVar1 & 0xffff0000;
      FUN_18049d970(param_1);
      return;
    }
  }
  else if (param_2[2] == 0xc) goto LAB_18049d62b;
  uVar1 = *(int *)(param_1 + 0x34) + 1;
  if (*(byte *)(param_1 + 0x5a) < uVar1) {
    if (0xf9 < uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_18049e240(*(undefined8 *)(param_1 + 8),0x9b6);
    }
    *(char *)(param_1 + 0x5a) = (char)uVar1;
  }
  *(uint *)(param_1 + 0x34) = uVar1;
  FUN_1804a0d10(param_1,param_2);
LAB_18049d62b:
  FUN_18049d010(param_1,0xd - (param_3 != 0) | *param_2 << 0x10 | 0xff00);
  FUN_18049d970(param_1);
  if ((param_2[2] == 0xc) && (*(uint *)(param_1 + 0x38) <= *param_2)) {
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + -1;
  }
  return;
}



/* ===== 18049d680 FUN_18049d680 ===== */

void FUN_18049d680(longlong param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  
  FUN_18049e870();
  uVar1 = param_2[2];
  if (uVar1 - 2 < 3) {
    iVar2 = -1;
  }
  else if (uVar1 == 10) {
    *(byte *)(*(longlong *)(param_1 + 0x48) + (ulonglong)(*param_2 - 1U) * 8) =
         *(byte *)(*(longlong *)(param_1 + 0x48) + (ulonglong)(*param_2 - 1U) * 8) ^ 1;
    iVar2 = *param_2;
  }
  else if (uVar1 < 2) {
    FUN_1804a0d10(param_1,param_2,0xff);
    iVar2 = FUN_18049d970(param_1);
  }
  else {
    iVar2 = FUN_18049d5a0(param_1,param_2,0);
  }
  FUN_1804a1f10(param_1,param_2 + 4,iVar2);
  iVar2 = param_2[3];
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x28);
  FUN_1804a1f10(param_1,param_1 + 0x30,iVar2);
  param_2[3] = -1;
  return;
}



/* ===== 18049d730 FUN_18049d730 ===== */

void FUN_18049d730(undefined8 *param_1,int param_2,uint *param_3,uint *param_4)

{
  uint uVar1;
  int iVar2;
  ulonglong *puVar3;
  uint *puVar4;
  uint uVar5;
  
  FUN_1804a0eb0(param_1,param_3);
  puVar4 = param_3;
  if (1 < param_2 - 0xdU) {
    uVar5 = param_2 - 0xf;
    if ((uVar5 & 1) == 0) {
      iVar2 = FUN_1804a0b00(param_1,param_4);
      uVar1 = FUN_1804a0b00(param_1,param_3);
      uVar5 = (iVar2 << 8 | uVar1) << 8 | uVar5;
      puVar4 = param_4;
      param_4 = param_3;
    }
    else {
      FUN_1804a0eb0(param_1,param_4);
      uVar1 = FUN_1804a0b00(param_1,param_4);
      iVar2 = FUN_1804a0b00(param_1,param_3);
      uVar5 = (iVar2 << 8 | uVar1) << 8 | uVar5 ^ 3;
    }
    goto LAB_18049d90d;
  }
  if (4 < (int)param_3[2]) {
    puVar4 = param_4;
    param_4 = param_3;
  }
  FUN_18049e870(param_1,param_4);
  if (param_4[2] == 0xc) {
    if (param_4[3] != param_4[4]) {
      if (*param_4 < *(uint *)(param_1 + 7)) goto LAB_18049d831;
      FUN_1804a0bd0(param_1,param_4);
    }
  }
  else {
LAB_18049d831:
    FUN_1804a0b60(param_1,param_4);
  }
  uVar5 = *param_4;
  FUN_1804a0eb0(param_1,puVar4);
  uVar1 = puVar4[2];
  if (((uVar1 == 0) || (uVar1 == 1)) || (uVar1 == 2)) {
    uVar5 = (uVar1 << 8 | uVar5) << 8;
    uVar1 = (param_2 != 0xe) + 10;
  }
  else if (uVar1 == 3) {
    iVar2 = FUN_18049e1a0(param_1,puVar4);
    uVar5 = (iVar2 << 8 | uVar5) << 8;
    uVar1 = (param_2 != 0xe) + 6;
  }
  else {
    if (uVar1 != 4) {
      iVar2 = FUN_1804a0b00(param_1,puVar4);
      uVar5 = (iVar2 << 8 | uVar5) << 8 | (param_2 != 0xe) + 4;
      goto LAB_18049d90d;
    }
    puVar3 = (ulonglong *)FUN_1804931f0(param_1[2],*param_1,puVar4);
    if (*(int *)((longlong)puVar3 + 4) == 0) {
      iVar2 = (int)*puVar3;
    }
    else {
      *puVar3 = (ulonglong)*(uint *)((longlong)param_1 + 0x3c);
      iVar2 = *(int *)((longlong)param_1 + 0x3c);
      *(int *)((longlong)param_1 + 0x3c) = iVar2 + 1;
    }
    uVar5 = (iVar2 << 8 | uVar5) << 8;
    uVar1 = (param_2 != 0xe) + 8;
  }
  uVar5 = uVar5 | uVar1;
LAB_18049d90d:
  if ((param_4[2] == 0xc) && (*(uint *)(param_1 + 7) <= *param_4)) {
    *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + -1;
  }
  if ((puVar4[2] == 0xc) && (*(uint *)(param_1 + 7) <= *puVar4)) {
    *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + -1;
  }
  FUN_18049d010(param_1,uVar5);
  uVar5 = FUN_18049d970(param_1);
  *param_3 = uVar5;
  param_3[2] = 10;
  return;
}



/* ===== 18049d970 FUN_18049d970 ===== */

ulonglong FUN_18049d970(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  
  iVar4 = *(int *)(param_1 + 0x28);
  uVar1 = *(uint *)(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = iVar4 - 1;
  uVar5 = (ulonglong)uVar2;
  if (((int)uVar2 < *(int *)(param_1 + 0x2c)) ||
     (*(char *)(*(longlong *)(param_1 + 0x48) + uVar5 * 8) != '2')) {
    uVar2 = FUN_18049d010(param_1,*(int *)(param_1 + 0x34) << 8 | 0x7fff0058);
    uVar5 = (ulonglong)uVar2;
  }
  else {
    *(undefined2 *)(*(longlong *)(param_1 + 0x48) + 2 + uVar5 * 8) = 0x7fff;
    *(int *)(param_1 + 0x2c) = iVar4;
  }
  if (uVar1 != 0xffffffff) {
    if ((int)uVar5 == -1) {
      return (ulonglong)uVar1;
    }
    uVar3 = uVar5;
    while( true ) {
      uVar2 = *(uint *)(*(longlong *)(param_1 + 0x48) + uVar3 * 8) >> 0x10;
      if ((uVar2 == 0x7fff) || (iVar4 = uVar2 + (int)uVar3, iVar4 == 0x7ffe)) break;
      uVar3 = (ulonglong)(iVar4 - 0x7fff);
    }
    uVar2 = (uVar1 - (int)uVar3) + 0x7fff;
    if (0xffff < uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_18049e240(*(undefined8 *)(param_1 + 8),0x99b);
    }
    *(short *)(*(longlong *)(param_1 + 0x48) + 2 + uVar3 * 8) = (short)uVar2;
  }
  return uVar5;
}



/* ===== 18049da30 FUN_18049da30 ===== */

void FUN_18049da30(undefined8 *param_1,uint *param_2,ulonglong *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ulonglong *puVar7;
  uint uVar8;
  ulonglong local_res10;
  
  FUN_18049e870();
  if (param_2[2] == 0xc) {
    if (param_2[3] == param_2[4]) goto LAB_18049da81;
    if (*(uint *)(param_1 + 7) <= *param_2) {
      FUN_1804a0bd0(param_1,param_2);
      goto LAB_18049da81;
    }
  }
  FUN_1804a0b60(param_1,param_2);
LAB_18049da81:
  uVar2 = *param_2;
  if ((param_2[2] == 0xc) && (*(uint *)(param_1 + 7) <= uVar2)) {
    *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + -1;
  }
  uVar3 = *(uint *)((longlong)param_1 + 0x34);
  iVar5 = *(int *)(param_1[1] + 0xb4);
  iVar1 = iVar5 + uVar3;
  iVar4 = iVar1 * 0x100;
  FUN_18049d010(param_1,iVar4 + 0x100U | uVar2 << 0x10 | 0x12);
  local_res10 = *param_3 | 0xfffd800000000000;
  puVar7 = (ulonglong *)FUN_1804931f0(param_1[2],*param_1,&local_res10);
  if (*(int *)((longlong)puVar7 + 4) == 0) {
    uVar8 = (uint)*puVar7;
  }
  else {
    *puVar7 = (ulonglong)*(uint *)(param_1 + 8);
    uVar8 = *(uint *)(param_1 + 8);
    *(uint *)(param_1 + 8) = uVar8 + 1;
  }
  iVar5 = *(int *)((longlong)param_1 + 0x34) + iVar5;
  if (uVar8 < 0x100) {
    uVar6 = iVar5 + 2;
    if (*(byte *)((longlong)param_1 + 0x5a) < uVar6) {
      if (0xf9 < uVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_18049e240(param_1[1],0x9b6);
      }
      *(char *)((longlong)param_1 + 0x5a) = (char)uVar6;
    }
    *(uint *)((longlong)param_1 + 0x34) = uVar6;
    FUN_18049d010(param_1,((uVar2 << 8 | uVar8) << 8 | uVar3) << 8 | 0x39);
  }
  else {
    uVar6 = iVar5 + 3;
    if (*(byte *)((longlong)param_1 + 0x5a) < uVar6) {
      if (0xf9 < uVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_18049e240(param_1[1],0x9b6);
      }
      *(char *)((longlong)param_1 + 0x5a) = (char)uVar6;
    }
    *(uint *)((longlong)param_1 + 0x34) = uVar6;
    FUN_18049d010(param_1,iVar4 + 0x200U | uVar8 << 0x10 | 0x27);
    FUN_18049d010(param_1,iVar1 * 0x10000 + 0x20000U | (uVar2 << 0x10 | uVar3) << 8 | 0x38);
    *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + -1;
  }
  *param_2 = uVar3;
  param_2[2] = 0xc;
  return;
}



/* ===== 18049dbe0 FUN_18049dbe0 ===== */

void FUN_18049dbe0(longlong param_1,uint param_2,int param_3)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  
  if (*(uint *)(param_1 + 0x2c) < *(uint *)(param_1 + 0x28)) {
    lVar3 = *(longlong *)(param_1 + 0x48);
    uVar4 = *(uint *)(param_1 + 0x28) - 1;
    uVar2 = *(uint *)(lVar3 + (ulonglong)uVar4 * 8);
    bVar1 = *(byte *)(lVar3 + 1 + (ulonglong)uVar4 * 8);
    if ((uVar2 & 0xff) == 0x2b) {
      if (uVar2 >> 0x10 == 0) {
        if (param_2 == bVar1) {
          if (param_3 == 1) {
            return;
          }
        }
        else {
          if (param_2 != bVar1 + 1) goto LAB_18049dc94;
          param_3 = param_3 + 1;
          param_2 = (uint)bVar1;
        }
        *(uint *)(lVar3 + (ulonglong)uVar4 * 8) =
             ((param_3 + -1 + param_2) * 0x100 | param_2) << 8 | 0x2c;
        return;
      }
    }
    else if ((((uVar2 & 0xff) == 0x2c) && (bVar1 <= param_2)) && (param_2 <= (uVar2 >> 0x10) + 1)) {
      if (uVar2 >> 0x10 < param_3 + -1 + param_2) {
        *(short *)(lVar3 + 2 + (ulonglong)uVar4 * 8) = (short)param_3 + -1 + (short)param_2;
        return;
      }
      return;
    }
  }
LAB_18049dc94:
  if (param_3 == 1) {
    FUN_18049d010(param_1,param_2 << 8 | 0x2b);
    return;
  }
  FUN_18049d010(param_1,(param_2 | (param_3 + -1 + param_2) * 0x100) << 8 | 0x2c);
  return;
}



/* ===== 18049dcd0 FUN_18049dcd0 ===== */

void FUN_18049dcd0(longlong param_1,uint *param_2,uint *param_3)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = param_2[2];
  if (uVar4 == 6) {
    pbVar1 = (byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x90) + 0x11 +
                     (ulonglong)param_2[1] * 0x18);
    *pbVar1 = *pbVar1 | 1;
    if ((param_3[2] == 0xc) && (*(uint *)(param_1 + 0x38) <= *param_3)) {
      *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + -1;
    }
    FUN_1804a0bd0(param_1,param_3,*param_2);
    return;
  }
  if (uVar4 == 7) {
    pbVar1 = (byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x90) + 0x11 +
                     (ulonglong)param_2[1] * 0x18);
    *pbVar1 = *pbVar1 | 1;
    FUN_1804a0eb0(param_1,param_3);
    uVar4 = param_3[2];
    if ((int)uVar4 < 3) {
      uVar4 = (uVar4 << 8 | *param_2) << 8 | 0x31;
    }
    else if (uVar4 == 3) {
      iVar2 = FUN_18049e1a0(param_1,param_3);
      uVar4 = (iVar2 << 8 | *param_2) << 8 | 0x2f;
    }
    else {
      uVar3 = *param_2;
      if (uVar4 == 4) {
        iVar2 = FUN_18049e160();
        uVar4 = (iVar2 << 8 | uVar3) << 8 | 0x30;
      }
      else {
        iVar2 = FUN_1804a0b00(param_1,param_3);
        uVar4 = (iVar2 << 8 | uVar3) << 8 | 0x2e;
      }
    }
  }
  else if (uVar4 == 8) {
    uVar4 = FUN_1804a0b00(param_1,param_3);
    iVar2 = FUN_18049e1a0(param_1,param_2);
    uVar4 = (iVar2 << 8 | uVar4) << 8 | 0x37;
  }
  else {
    uVar3 = FUN_1804a0b00(param_1,param_3);
    uVar4 = param_2[1];
    uVar5 = *param_2 << 8;
    if ((int)uVar4 < 0) {
      uVar4 = ((uVar5 | ~uVar4) << 8 | uVar3) << 8 | 0x3d;
    }
    else if (uVar4 < 0x100) {
      uVar4 = ((uVar5 | uVar4) << 8 | uVar3) << 8 | 0x3c;
    }
    else {
      uVar4 = ((uVar5 | uVar4 - 0x100) << 8 | uVar3) << 8 | 0x3e;
    }
  }
  FUN_18049d010(param_1,uVar4);
  if ((param_3[2] == 0xc) && (*(uint *)(param_1 + 0x38) <= *param_3)) {
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + -1;
  }
  return;
}



/* ===== 18049de90 FUN_18049de90 ===== */

void FUN_18049de90(longlong param_1,uint param_2,double *param_3)

{
  double *pdVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar3 = *(uint *)((longlong)param_3 + 0xc);
  if (param_2 == 0x13) {
    *(uint *)((longlong)param_3 + 0xc) = *(uint *)(param_3 + 2);
    *(uint *)(param_3 + 2) = uVar3;
    FUN_1804a1fa0(param_1,uVar3);
    FUN_1804a1fa0(param_1,*(uint *)((longlong)param_3 + 0xc));
    FUN_18049e870(param_1,param_3);
    uVar3 = *(uint *)(param_3 + 1);
    pdVar1 = param_3 + 1;
    if (uVar3 < 2) {
      *(uint *)pdVar1 = 2;
      return;
    }
    if ((int)uVar3 < 6) {
      *(uint *)pdVar1 = 1;
      return;
    }
    if (uVar3 == 10) {
      *(byte *)(*(longlong *)(param_1 + 0x48) + (ulonglong)(*(uint *)param_3 - 1) * 8) =
           *(byte *)(*(longlong *)(param_1 + 0x48) + (ulonglong)(*(uint *)param_3 - 1) * 8) ^ 1;
      return;
    }
    if (uVar3 == 0xb) {
      FUN_18049e0d0(param_1,1);
      *(char *)(*(longlong *)(param_1 + 0x48) + 1 + (ulonglong)*(uint *)param_3 * 8) =
           *(char *)(param_1 + 0x34) + -1;
      iVar2 = *(int *)(param_1 + 0x34);
      *(uint *)pdVar1 = 0xc;
      *(uint *)param_3 = iVar2 - 1;
    }
    goto LAB_18049e083;
  }
  if (uVar3 == *(uint *)(param_3 + 2)) {
    if (param_2 == 0x14) {
      if (*(uint *)(param_3 + 1) == 5) {
        uVar4 = (ulonglong)*param_3 & 0x7fffffffffff;
        if (*(short *)(uVar4 + 10) == 0x12) {
          *(ulonglong *)(uVar4 + 0x18) = *(ulonglong *)(uVar4 + 0x18) ^ 0x8000000000000000;
          return;
        }
        *(longlong *)(uVar4 + 0x10) = -*(longlong *)(uVar4 + 0x10);
        return;
      }
      if ((*(uint *)(param_3 + 1) == 4) && (ABS(*param_3) != 0.0)) {
        *param_3 = -*param_3;
        return;
      }
    }
    else if (param_2 == 0x59) {
      if (*(uint *)(param_3 + 1) == 4) {
        uVar3 = FUN_180005337(*param_3);
        *param_3 = (double)(int)~uVar3;
        return;
      }
      goto LAB_18049e016;
    }
  }
  else if (param_2 == 0x59) {
LAB_18049e016:
    *(byte *)(param_1 + 0x58) = *(byte *)(param_1 + 0x58) | 0x80;
  }
  FUN_18049e870(param_1,param_3);
  if (*(uint *)(param_3 + 1) == 0xc) {
    if (*(uint *)((longlong)param_3 + 0xc) == *(uint *)(param_3 + 2)) goto LAB_18049e083;
    if (*(uint *)param_3 < *(uint *)(param_1 + 0x38)) goto LAB_18049e040;
  }
  else {
LAB_18049e040:
    FUN_18049e870(param_1,param_3);
    if ((*(uint *)(param_3 + 1) == 0xc) && (*(uint *)(param_1 + 0x38) <= *(uint *)param_3)) {
      *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + -1;
    }
    uVar3 = *(int *)(param_1 + 0x34) + 1;
    if (*(byte *)(param_1 + 0x5a) < uVar3) {
      if (0xf9 < uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_18049e240(*(undefined8 *)(param_1 + 8),0x9b6);
      }
      *(char *)(param_1 + 0x5a) = (char)uVar3;
    }
    *(uint *)(param_1 + 0x34) = uVar3;
  }
  FUN_1804a0bd0(param_1,param_3);
LAB_18049e083:
  if ((*(uint *)(param_3 + 1) == 0xc) && (*(uint *)(param_1 + 0x38) <= *(uint *)param_3)) {
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + -1;
  }
  uVar3 = FUN_18049d010(param_1,*(uint *)param_3 << 0x10 | param_2);
  *(uint *)param_3 = uVar3;
  *(uint *)(param_3 + 1) = 0xb;
  return;
}



/* ===== 18049e0d0 FUN_18049e0d0 ===== */

void FUN_18049e0d0(longlong param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = *(int *)(param_1 + 0x34) + param_2;
  if (*(byte *)(param_1 + 0x5a) < uVar1) {
    if (0xf9 < uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_18049e240(*(undefined8 *)(param_1 + 8),0x9b6);
    }
    *(char *)(param_1 + 0x5a) = (char)uVar1;
  }
  *(uint *)(param_1 + 0x34) = uVar1;
  return;
}



/* ===== 18049e110 FUN_18049e110 ===== */

int FUN_18049e110(undefined8 *param_1,ulonglong param_2,longlong param_3)

{
  int iVar1;
  ulonglong *puVar2;
  ulonglong local_res8 [4];
  
  local_res8[0] = param_3 << 0x2f | param_2;
  puVar2 = (ulonglong *)FUN_1804931f0(param_1[2],*param_1,local_res8);
  if (*(int *)((longlong)puVar2 + 4) == 0) {
    return (int)*puVar2;
  }
  *puVar2 = (ulonglong)*(uint *)(param_1 + 8);
  iVar1 = *(int *)(param_1 + 8);
  *(int *)(param_1 + 8) = iVar1 + 1;
  return iVar1;
}



/* ===== 18049e160 FUN_18049e160 ===== */

int FUN_18049e160(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  ulonglong *puVar2;
  
  puVar2 = (ulonglong *)FUN_1804931f0(param_1[2],*param_1,param_2);
  if (*(int *)((longlong)puVar2 + 4) == 0) {
    return (int)*puVar2;
  }
  *puVar2 = (ulonglong)*(uint *)((longlong)param_1 + 0x3c);
  iVar1 = *(int *)((longlong)param_1 + 0x3c);
  *(int *)((longlong)param_1 + 0x3c) = iVar1 + 1;
  return iVar1;
}



/* ===== 18049e1a0 FUN_18049e1a0 ===== */

int FUN_18049e1a0(undefined8 *param_1,ulonglong *param_2)

{
  int iVar1;
  ulonglong *puVar2;
  ulonglong local_res8 [4];
  
  local_res8[0] = *param_2 | 0xfffd800000000000;
  puVar2 = (ulonglong *)FUN_1804931f0(param_1[2],*param_1,local_res8);
  if (*(int *)((longlong)puVar2 + 4) == 0) {
    return (int)*puVar2;
  }
  *puVar2 = (ulonglong)*(uint *)(param_1 + 8);
  iVar1 = *(int *)(param_1 + 8);
  *(int *)(param_1 + 8) = iVar1 + 1;
  return iVar1;
}



/* ===== 18049e200 FUN_18049e200 ===== */

void FUN_18049e200(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  if (*(int *)(param_1 + 0x44) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_18049b070(*(undefined8 *)(param_1 + 8),0,0xa00,param_2,param_3);
  }
                    /* WARNING: Subroutine does not return */
  FUN_18049b070(*(undefined8 *)(param_1 + 8),0,0xa22,*(int *)(param_1 + 0x44),param_2,param_3);
}



/* ===== 18049e240 FUN_18049e240 ===== */

void FUN_18049e240(longlong param_1,undefined4 param_2)

{
                    /* WARNING: Subroutine does not return */
  FUN_18049b070(param_1,*(undefined4 *)(param_1 + 0x34),param_2);
}



/* ===== 18049e250 FUN_18049e250 ===== */

void FUN_18049e250(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 0x34);
  uVar2 = FUN_18049b3d0();
                    /* WARNING: Subroutine does not return */
  FUN_18049b070(param_1,uVar1,0x98d,uVar2);
}



/* ===== 18049e280 FUN_18049e280 ===== */

void FUN_18049e280(longlong *param_1,uint *param_2,undefined4 param_3)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  FUN_18049e3f0(param_1,param_2,0,param_3);
  if (*(int *)((longlong)param_1 + 0x34) == 0x3f) {
    FUN_18049b180(param_1);
    lVar1 = *param_1;
    FUN_18049d680(lVar1,param_2);
    uVar4 = param_2[4];
    FUN_18049e280(param_1,param_2,2);
    FUN_1804a0b60(lVar1,param_2);
    uVar3 = *param_2;
    iVar2 = FUN_18049d970(lVar1);
    iVar5 = -1;
    if (iVar2 != -1) {
      iVar5 = iVar2;
    }
    *(undefined4 *)(lVar1 + 0x2c) = *(undefined4 *)(lVar1 + 0x28);
    FUN_1804a1f10(lVar1,lVar1 + 0x30,uVar4);
    if (*(int *)((longlong)param_1 + 0x34) != 0x3a) {
                    /* WARNING: Subroutine does not return */
      FUN_18049e250(param_1,0x3a);
    }
    FUN_18049b180();
    if (*(uint *)(lVar1 + 0x38) <= uVar3) {
      *(int *)(lVar1 + 0x34) = *(int *)(lVar1 + 0x34) + -1;
    }
    FUN_18049e280(param_1,param_2,0);
    FUN_1804a0b60(lVar1,param_2);
    *(undefined4 *)(lVar1 + 0x2c) = *(undefined4 *)(lVar1 + 0x28);
    if (iVar5 != -1) {
      uVar4 = *(uint *)(lVar1 + 0x30);
      if (uVar4 == 0xffffffff) {
        *(int *)(lVar1 + 0x30) = iVar5;
      }
      else {
        while( true ) {
          uVar3 = *(uint *)(*(longlong *)(lVar1 + 0x48) + (ulonglong)uVar4 * 8) >> 0x10;
          if ((uVar3 == 0x7fff) || (iVar2 = uVar3 + uVar4, iVar2 == 0x7ffe)) break;
          uVar4 = iVar2 - 0x7fff;
        }
        uVar3 = (iVar5 - uVar4) + 0x7fff;
        if (0xffff < uVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_18049e240(*(undefined8 *)(lVar1 + 8),0x99b);
        }
        *(short *)(*(longlong *)(lVar1 + 0x48) + 2 + (ulonglong)uVar4 * 8) = (short)uVar3;
      }
    }
  }
  return;
}



/* ===== 18049e3f0 FUN_18049e3f0 ===== */

int FUN_18049e3f0(longlong *param_1,uint *param_2,uint param_3,undefined4 param_4)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined1 local_48 [32];
  
  *(int *)((longlong)param_1 + 0xac) = *(int *)((longlong)param_1 + 0xac) + 1;
  if (199 < *(uint *)((longlong)param_1 + 0xac)) {
                    /* WARNING: Subroutine does not return */
    FUN_18049b070(param_1,0,0x8e4);
  }
  FUN_1804a0f20(param_1,param_2,param_4);
  iVar2 = FUN_1804a5870(*(undefined4 *)((longlong)param_1 + 0x34));
  do {
    if ((iVar2 == 0x16) || ((byte)(&DAT_18056edc0)[(longlong)iVar2 * 2] <= param_3)) {
      *(int *)((longlong)param_1 + 0xac) = *(int *)((longlong)param_1 + 0xac) + -1;
      return iVar2;
    }
    FUN_18049b180(param_1);
    lVar1 = *param_1;
    if (iVar2 == 0x13) {
      FUN_18049d680(lVar1,param_2);
    }
    else if (iVar2 == 0x14) {
      FUN_18049e870(lVar1,param_2);
      uVar3 = param_2[2];
      if (uVar3 < 2) {
        uVar3 = 0xffffffff;
      }
      else if (uVar3 == 10) {
        uVar3 = *param_2;
      }
      else if (uVar3 - 2 < 3) {
        FUN_1804a0d10(lVar1,param_2,0xff);
        uVar3 = FUN_18049d970(lVar1);
      }
      else {
        uVar3 = FUN_18049d5a0(lVar1,param_2,1);
      }
      FUN_1804a1f10(lVar1,param_2 + 3,uVar3);
      uVar3 = param_2[4];
      *(undefined4 *)(lVar1 + 0x2c) = *(undefined4 *)(lVar1 + 0x28);
      FUN_1804a1f10(lVar1,lVar1 + 0x30,uVar3);
      param_2[4] = 0xffffffff;
    }
    else if (iVar2 == 0x15) {
      FUN_1804a0b60(lVar1,param_2);
      uVar3 = *param_2;
      FUN_18049d010(lVar1,uVar3 << 8 | 0xb);
      uVar4 = FUN_18049d970(lVar1);
      param_2[1] = uVar4;
      if (*(uint *)(lVar1 + 0x38) <= uVar3) {
        *(int *)(lVar1 + 0x34) = *(int *)(lVar1 + 0x34) + -1;
      }
    }
    else if (iVar2 == 0xc) {
      FUN_1804a0b60(lVar1,param_2);
    }
    else {
      if (iVar2 - 0xdU < 2) {
        if ((int)param_2[2] < 5) goto LAB_18049e574;
      }
      else if (param_2[2] == 4) {
LAB_18049e574:
        if (param_2[3] == param_2[4]) goto LAB_18049e587;
      }
      FUN_1804a0b00(lVar1,param_2);
    }
LAB_18049e587:
    iVar5 = FUN_18049e3f0(param_1,local_48,(&DAT_18056edc1)[(longlong)iVar2 * 2],param_4);
    FUN_18049d2b0(*param_1,iVar2,param_2,local_48);
    iVar2 = iVar5;
  } while( true );
}



/* ===== 18049e610 FUN_18049e610 ===== */

undefined4 FUN_18049e610(longlong *param_1)

{
  undefined8 *puVar1;
  ulonglong *puVar2;
  uint uVar3;
  ulonglong local_res8;
  uint local_28;
  uint uStack_24;
  uint local_20;
  undefined4 local_1c;
  undefined4 local_18 [4];
  
  FUN_18049e280(param_1,&local_28,0);
  puVar1 = (undefined8 *)*param_1;
  if (local_20 == 0) {
    local_20 = 1;
  }
  if (local_20 == 7) {
    uVar3 = local_28 << 0x10 | 0x2d;
LAB_18049e70f:
    local_28 = FUN_18049d010(puVar1,uVar3);
    local_20 = 0xb;
LAB_18049e772:
    uVar3 = *(uint *)(puVar1[9] + (ulonglong)local_28 * 8);
    if ((char)uVar3 == '\x13') {
      *(uint *)(puVar1[9] + (ulonglong)local_28 * 8) = uVar3 & 0xffff000e | 0xe;
      uVar3 = FUN_18049d970(puVar1);
    }
    else {
LAB_18049e79c:
      uVar3 = *(int *)((longlong)puVar1 + 0x34) + 1;
      if (*(byte *)((longlong)puVar1 + 0x5a) < uVar3) {
        if (0xf9 < uVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_18049e240(puVar1[1],0x9b6);
        }
        *(char *)((longlong)puVar1 + 0x5a) = (char)uVar3;
      }
      *(uint *)((longlong)puVar1 + 0x34) = uVar3;
      FUN_1804a0d10(puVar1,&local_28);
LAB_18049e7f5:
      FUN_18049d010(puVar1,local_28 << 0x10 | 0xff0d);
      uVar3 = FUN_18049d970(puVar1);
      if ((local_20 == 0xc) && (*(uint *)(puVar1 + 7) <= local_28)) {
        *(int *)((longlong)puVar1 + 0x34) = *(int *)((longlong)puVar1 + 0x34) + -1;
      }
    }
  }
  else {
    if (local_20 == 8) {
      local_res8 = CONCAT44(uStack_24,local_28) | 0xfffd800000000000;
      puVar2 = (ulonglong *)FUN_1804931f0(puVar1[2],*puVar1,&local_res8);
      if (*(int *)((longlong)puVar2 + 4) == 0) {
        uVar3 = (int)*puVar2 << 0x10 | 0x36;
      }
      else {
        *puVar2 = (ulonglong)*(uint *)(puVar1 + 8);
        uVar3 = *(int *)(puVar1 + 8) << 0x10 | 0x36;
        *(int *)(puVar1 + 8) = *(int *)(puVar1 + 8) + 1;
      }
      goto LAB_18049e70f;
    }
    if (local_20 == 9) {
      if ((int)uStack_24 < 0) {
        uVar3 = (local_28 << 8 | ~uStack_24) << 0x10 | 0x39;
      }
      else if (uStack_24 < 0x100) {
        if (*(uint *)(puVar1 + 7) <= uStack_24) {
          *(int *)((longlong)puVar1 + 0x34) = *(int *)((longlong)puVar1 + 0x34) + -1;
        }
        uVar3 = (local_28 << 8 | uStack_24) << 0x10 | 0x38;
      }
      else {
        uVar3 = (uStack_24 - 0x100 | local_28 << 8) << 0x10 | 0x3a;
      }
      if (*(uint *)(puVar1 + 7) <= local_28) {
        *(int *)((longlong)puVar1 + 0x34) = *(int *)((longlong)puVar1 + 0x34) + -1;
      }
      goto LAB_18049e70f;
    }
    if (local_20 - 0xd < 2) {
      local_28 = uStack_24;
LAB_18049e7ee:
      local_20 = 0xc;
      goto LAB_18049e7f5;
    }
    if (local_20 == 6) goto LAB_18049e7ee;
    uVar3 = 0xffffffff;
    if (local_20 - 2 < 3) goto LAB_18049e824;
    if (local_20 == 10) {
      *(byte *)(puVar1[9] + (ulonglong)(local_28 - 1) * 8) =
           *(byte *)(puVar1[9] + (ulonglong)(local_28 - 1) * 8) ^ 1;
      uVar3 = local_28;
      goto LAB_18049e824;
    }
    if (1 < local_20) {
      if (local_20 == 0xb) goto LAB_18049e772;
      if (local_20 == 0xc) goto LAB_18049e7f5;
      goto LAB_18049e79c;
    }
    FUN_1804a0d10(puVar1,&local_28,0xff);
    uVar3 = FUN_18049d970(puVar1);
  }
LAB_18049e824:
  FUN_1804a1f10(puVar1,local_18,uVar3);
  *(undefined4 *)((longlong)puVar1 + 0x2c) = *(undefined4 *)(puVar1 + 5);
  FUN_1804a1f10(puVar1,puVar1 + 6,local_1c);
  return local_18[0];
}



/* ===== 18049e870 FUN_18049e870 ===== */

void FUN_18049e870(longlong param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = param_2[2];
  if (uVar2 == 7) {
    uVar2 = *param_2 << 0x10 | 0x2d;
  }
  else if (uVar2 == 8) {
    iVar1 = FUN_18049e1a0(param_1);
    uVar2 = iVar1 << 0x10 | 0x36;
  }
  else {
    if (uVar2 != 9) {
      if (uVar2 - 0xd < 2) {
        *param_2 = param_2[1];
        param_2[2] = 0xc;
      }
      else if (uVar2 == 6) {
        param_2[2] = 0xc;
        return;
      }
      return;
    }
    uVar2 = param_2[1];
    if ((int)uVar2 < 0) {
      uVar2 = (*param_2 << 8 | ~uVar2) << 0x10 | 0x39;
    }
    else if (uVar2 < 0x100) {
      if (*(uint *)(param_1 + 0x38) <= uVar2) {
        *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + -1;
      }
      uVar2 = (*param_2 << 8 | uVar2) << 0x10 | 0x38;
    }
    else {
      uVar2 = (*param_2 << 8 | uVar2 - 0x100) << 0x10 | 0x3a;
    }
    if (*(uint *)(param_1 + 0x38) <= *param_2) {
      *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + -1;
    }
  }
  uVar2 = FUN_18049d010(param_1,uVar2);
  *param_2 = uVar2;
  param_2[2] = 0xb;
  return;
}



/* ===== 18049e960 FUN_18049e960 ===== */

void FUN_18049e960(longlong *param_1,uint *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  ulonglong *puVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  char cVar13;
  uint uVar14;
  int iVar15;
  ulonglong local_res8;
  uint *local_res10;
  undefined8 local_58;
  int local_50;
  uint local_4c;
  uint uStack_48;
  
  puVar2 = (undefined8 *)*param_1;
  local_res10 = param_2;
  FUN_18049e870(puVar2);
  if (param_2[2] == 0xc) {
    if (param_2[3] != param_2[4]) {
      if (*param_2 < *(uint *)(puVar2 + 7)) goto LAB_18049e9a9;
      FUN_1804a0bd0(puVar2,param_2);
    }
  }
  else {
LAB_18049e9a9:
    FUN_1804a0b60(puVar2,param_2);
  }
  local_50 = 3;
  local_58 = (ulonglong)local_58._4_4_ << 0x20;
  local_4c = 0xffffffff;
  uStack_48 = 0xffffffff;
  if ((*(int *)((longlong)param_1 + 0x34) != 0x12a) &&
     (1 < *(int *)((longlong)param_1 + 0x34) - 0x103U)) {
                    /* WARNING: Subroutine does not return */
    FUN_18049e250(param_1,0x12a);
  }
  uVar12 = param_1[2] & 0x7fffffffffff;
  FUN_18049b180(param_1);
  param_2[2] = 9;
  local_58 = uVar12;
  if (local_50 == 4) {
    uVar4 = FUN_1800052ed(uVar12);
    if (uVar4 == (uVar4 & 0xff)) {
      param_2[1] = uVar4 + 0x100;
      return;
    }
  }
  else {
    if (local_50 == 3) {
      local_res8 = uVar12 | 0xfffd800000000000;
      puVar9 = (ulonglong *)FUN_1804931f0(puVar2[2],*puVar2,&local_res8);
      if (*(int *)((longlong)puVar9 + 4) == 0) {
        uVar4 = (uint)*puVar9;
      }
      else {
        *puVar9 = (ulonglong)*(uint *)(puVar2 + 8);
        uVar4 = *(uint *)(puVar2 + 8);
        *(uint *)(puVar2 + 8) = uVar4 + 1;
      }
      if (uVar4 < 0x100) {
        param_2[1] = ~uVar4;
        return;
      }
    }
    if (local_50 == 7) {
      uVar4 = (uint)local_58 << 0x10 | 0x2d;
    }
    else if (local_50 == 8) {
      local_res8 = local_58 | 0xfffd800000000000;
      puVar9 = (ulonglong *)FUN_1804931f0(puVar2[2],*puVar2,&local_res8);
      if (*(int *)((longlong)puVar9 + 4) == 0) {
        uVar4 = (int)*puVar9 << 0x10 | 0x36;
      }
      else {
        *puVar9 = (ulonglong)*(uint *)(puVar2 + 8);
        uVar4 = *(int *)(puVar2 + 8) << 0x10 | 0x36;
        *(int *)(puVar2 + 8) = *(int *)(puVar2 + 8) + 1;
      }
    }
    else {
      if (local_50 != 9) {
        if (local_50 - 0xdU < 2) {
          local_58 = CONCAT44(local_58._4_4_,local_58._4_4_);
          uVar4 = local_58._4_4_;
LAB_18049ebd4:
          local_50 = 0xc;
        }
        else {
          uVar4 = (uint)local_58;
          if (local_50 == 6) goto LAB_18049ebd4;
          if (local_50 != 0xc) {
            if (local_50 == 6) {
              local_50 = 0xc;
            }
            else if (local_50 != 0xc) goto LAB_18049eb9f;
            if (*(uint *)(puVar2 + 7) <= (uint)local_58) {
              *(int *)((longlong)puVar2 + 0x34) = *(int *)((longlong)puVar2 + 0x34) + -1;
            }
            goto LAB_18049eb9f;
          }
        }
        if (local_4c == uStack_48) goto LAB_18049eed2;
        if (*(uint *)(puVar2 + 7) <= uVar4) {
          FUN_1804a0d10(puVar2,&local_58,uVar4);
          if ((local_50 == 10) && ((uint)local_58 != 0xffffffff)) {
            if (local_4c == 0xffffffff) {
              local_4c = (uint)local_58;
            }
            else {
              uVar11 = local_4c;
              while( true ) {
                uVar14 = *(uint *)(puVar2[9] + (ulonglong)uVar11 * 8) >> 0x10;
                if ((uVar14 == 0x7fff) || (iVar7 = uVar14 + uVar11, iVar7 == 0x7ffe)) break;
                uVar11 = iVar7 - 0x7fff;
              }
              uVar14 = ((uint)local_58 - uVar11) + 0x7fff;
              if (0xffff < uVar14) {
                    /* WARNING: Subroutine does not return */
                FUN_18049e240(puVar2[1],0x99b);
              }
              *(short *)(puVar2[9] + 2 + (ulonglong)uVar11 * 8) = (short)uVar14;
            }
          }
          if (local_4c != uStack_48) {
            if (local_4c != 0xffffffff) {
              uVar11 = local_4c;
              do {
                uVar14 = uVar11 - 1;
                if (uVar11 == 0) {
                  uVar14 = 0;
                }
                uVar14 = *(uint *)(puVar2[9] + (ulonglong)uVar14 * 8);
                if ((1 < (uVar14 & 0xff) - 0xc) && ((uVar14 & 0xff00) != 0xff00))
                goto LAB_18049ed6f;
                uVar14 = *(uint *)(puVar2[9] + (ulonglong)uVar11 * 8) >> 0x10;
              } while ((uVar14 != 0x7fff) &&
                      (uVar11 = (uVar11 - 0x7fff) + uVar14, uVar11 != 0xffffffff));
            }
            if (uStack_48 != 0xffffffff) {
              uVar11 = uStack_48;
              do {
                uVar12 = (ulonglong)(uVar11 - 1);
                if (uVar11 == 0) {
                  uVar12 = 0;
                }
                uVar14 = *(uint *)(puVar2[9] + uVar12 * 8);
                if ((1 < (uVar14 & 0xff) - 0xc) && ((uVar14 & 0xff00) != 0xff00))
                goto LAB_18049ed6f;
                uVar14 = *(uint *)(puVar2[9] + (ulonglong)uVar11 * 8) >> 0x10;
              } while ((uVar14 != 0x7fff) &&
                      (uVar11 = (uVar11 - 0x7fff) + uVar14, uVar11 != 0xffffffff));
            }
            iVar7 = -1;
            uVar8 = 0xffffffff;
LAB_18049ed2d:
            iVar15 = *(int *)(puVar2 + 5);
            *(int *)((longlong)puVar2 + 0x2c) = iVar15;
            uVar11 = uStack_48;
joined_r0x00018049ed3d:
            do {
              if (uVar11 == 0xffffffff) goto LAB_18049eeb8;
              uVar12 = (ulonglong)uVar11;
              lVar3 = puVar2[9];
              uVar14 = *(uint *)(lVar3 + uVar12 * 8);
              uVar5 = uVar14 >> 0x10;
              if (uVar5 == 0x7fff) {
                uVar5 = 0xffffffff;
              }
              else {
                uVar5 = (uVar11 - 0x7fff) + uVar5;
              }
              uVar10 = (ulonglong)(uVar11 - 1);
              if (uVar11 == 0) {
                uVar10 = 0;
              }
              uVar1 = *(uint *)(lVar3 + uVar10 * 8);
              cVar13 = (char)uVar4;
              if ((uVar1 & 0xff) - 0xc < 2) {
                if ((uVar4 == 0xff) || (uVar4 == uVar1 >> 0x10)) {
                  *(undefined1 *)(lVar3 + 1 + uVar10 * 8) = 0;
                  *(char *)(lVar3 + uVar10 * 8) = (char)uVar1 + '\x02';
                }
                else {
                  *(char *)(lVar3 + 1 + uVar10 * 8) = cVar13;
                }
              }
              else {
                if ((char)(uVar1 >> 8) != -1) {
                  uVar11 = (iVar7 - uVar11) + 0x7fff;
                  if (0xffff < uVar11) {
                    /* WARNING: Subroutine does not return */
                    FUN_18049e240(puVar2[1],0x99b);
                  }
                  *(short *)(lVar3 + 2 + uVar12 * 8) = (short)uVar11;
                  uVar11 = uVar5;
                  goto joined_r0x00018049ed3d;
                }
                if (uVar4 == 0xff) {
                  *(uint *)(lVar3 + uVar10 * 8) = (uVar14 >> 8 & 0xff) << 8 | 0x80000058;
                }
                else {
                  *(char *)(lVar3 + 1 + uVar10 * 8) = cVar13;
                  if (*(byte *)(lVar3 + 9 + uVar10 * 8) <= uVar4) {
                    *(char *)(lVar3 + 9 + uVar10 * 8) = cVar13 + '\x01';
                  }
                }
              }
              uVar11 = (iVar15 - uVar11) + 0x7fff;
              if (0xffff < uVar11) {
                    /* WARNING: Subroutine does not return */
                FUN_18049e240(puVar2[1],0x99b);
              }
              *(short *)(puVar2[9] + 2 + uVar12 * 8) = (short)uVar11;
              uVar11 = uVar5;
            } while( true );
          }
          goto LAB_18049eed2;
        }
        goto LAB_18049eb9f;
      }
      if ((longlong)local_58 < 0) {
        uVar4 = ((uint)local_58 << 8 | ~local_58._4_4_) << 0x10 | 0x39;
      }
      else if (local_58._4_4_ < 0x100) {
        if (*(uint *)(puVar2 + 7) <= local_58._4_4_) {
          *(int *)((longlong)puVar2 + 0x34) = *(int *)((longlong)puVar2 + 0x34) + -1;
        }
        uVar4 = ((uint)local_58 << 8 | local_58._4_4_) << 0x10 | 0x38;
      }
      else {
        uVar4 = (local_58._4_4_ - 0x100 | (uint)local_58 << 8) << 0x10 | 0x3a;
      }
      if (*(uint *)(puVar2 + 7) <= (uint)local_58) {
        *(int *)((longlong)puVar2 + 0x34) = *(int *)((longlong)puVar2 + 0x34) + -1;
      }
    }
    uVar6 = FUN_18049d010(puVar2,uVar4);
    local_58 = CONCAT44(local_58._4_4_,uVar6);
    local_50 = 0xb;
  }
LAB_18049eb9f:
  uVar4 = *(uint *)((longlong)puVar2 + 0x34);
  uVar11 = uVar4 + 1;
  if (*(byte *)((longlong)puVar2 + 0x5a) < uVar11) {
    if (0xf9 < uVar11) {
                    /* WARNING: Subroutine does not return */
      FUN_18049e240(puVar2[1],0x9b6);
    }
    *(char *)((longlong)puVar2 + 0x5a) = (char)uVar11;
  }
  *(uint *)((longlong)puVar2 + 0x34) = uVar11;
  FUN_1804a0d10(puVar2,&local_58,uVar4);
  if ((local_50 == 10) && ((uint)local_58 != 0xffffffff)) {
    if (local_4c == 0xffffffff) {
      local_4c = (uint)local_58;
    }
    else {
      uVar11 = local_4c;
      while( true ) {
        uVar14 = *(uint *)(puVar2[9] + (ulonglong)uVar11 * 8) >> 0x10;
        if ((uVar14 == 0x7fff) || (iVar7 = uVar11 + uVar14, iVar7 == 0x7ffe)) break;
        uVar11 = iVar7 - 0x7fff;
      }
      uVar14 = ((uint)local_58 - uVar11) + 0x7fff;
      if (0xffff < uVar14) {
                    /* WARNING: Subroutine does not return */
        FUN_18049e240(puVar2[1],0x99b);
      }
      *(short *)(puVar2[9] + 2 + (ulonglong)uVar11 * 8) = (short)uVar14;
    }
  }
  if (local_4c != uStack_48) {
    if (local_4c != 0xffffffff) {
      uVar11 = local_4c;
      do {
        uVar14 = uVar11 - 1;
        if (uVar11 == 0) {
          uVar14 = 0;
        }
        uVar14 = *(uint *)(puVar2[9] + (ulonglong)uVar14 * 8);
        if ((1 < (uVar14 & 0xff) - 0xc) && ((uVar14 & 0xff00) != 0xff00)) goto LAB_18049f07f;
        uVar14 = *(uint *)(puVar2[9] + (ulonglong)uVar11 * 8) >> 0x10;
      } while ((uVar14 != 0x7fff) && (uVar11 = (uVar11 - 0x7fff) + uVar14, uVar11 != 0xffffffff));
    }
    if (uStack_48 != 0xffffffff) {
      uVar11 = uStack_48;
      do {
        uVar12 = (ulonglong)(uVar11 - 1);
        if (uVar11 == 0) {
          uVar12 = 0;
        }
        uVar14 = *(uint *)(puVar2[9] + uVar12 * 8);
        if ((1 < (uVar14 & 0xff) - 0xc) && ((uVar14 & 0xff00) != 0xff00)) goto LAB_18049f07f;
        uVar14 = *(uint *)(puVar2[9] + (ulonglong)uVar11 * 8) >> 0x10;
      } while ((uVar14 != 0x7fff) && (uVar11 = (uVar11 - 0x7fff) + uVar14, uVar11 != 0xffffffff));
    }
    iVar7 = -1;
    uVar8 = 0xffffffff;
LAB_18049f03d:
    iVar15 = *(int *)(puVar2 + 5);
    *(int *)((longlong)puVar2 + 0x2c) = iVar15;
    uVar11 = uStack_48;
joined_r0x00018049f04d:
    do {
      if (uVar11 == 0xffffffff) goto LAB_18049eeb8;
      uVar12 = (ulonglong)uVar11;
      lVar3 = puVar2[9];
      uVar14 = *(uint *)(lVar3 + uVar12 * 8);
      uVar5 = uVar14 >> 0x10;
      if (uVar5 == 0x7fff) {
        uVar5 = 0xffffffff;
      }
      else {
        uVar5 = (uVar5 - 0x7fff) + uVar11;
      }
      uVar10 = (ulonglong)(uVar11 - 1);
      if (uVar11 == 0) {
        uVar10 = 0;
      }
      uVar1 = *(uint *)(lVar3 + uVar10 * 8);
      cVar13 = (char)uVar4;
      if ((uVar1 & 0xff) - 0xc < 2) {
        if ((uVar4 == 0xff) || (uVar4 == uVar1 >> 0x10)) {
          *(undefined1 *)(lVar3 + 1 + uVar10 * 8) = 0;
          *(char *)(lVar3 + uVar10 * 8) = (char)uVar1 + '\x02';
        }
        else {
          *(char *)(lVar3 + 1 + uVar10 * 8) = cVar13;
        }
      }
      else {
        if ((char)(uVar1 >> 8) != -1) {
          uVar11 = (iVar7 - uVar11) + 0x7fff;
          if (0xffff < uVar11) {
                    /* WARNING: Subroutine does not return */
            FUN_18049e240(puVar2[1],0x99b);
          }
          *(short *)(lVar3 + 2 + uVar12 * 8) = (short)uVar11;
          uVar11 = uVar5;
          goto joined_r0x00018049f04d;
        }
        if (uVar4 == 0xff) {
          *(uint *)(lVar3 + uVar10 * 8) = (uVar14 >> 8 & 0xff) << 8 | 0x80000058;
        }
        else {
          *(char *)(lVar3 + 1 + uVar10 * 8) = cVar13;
          if (*(byte *)(lVar3 + 9 + uVar10 * 8) <= uVar4) {
            *(char *)(lVar3 + 9 + uVar10 * 8) = cVar13 + '\x01';
          }
        }
      }
      uVar11 = (iVar15 - uVar11) + 0x7fff;
      if (0xffff < uVar11) {
                    /* WARNING: Subroutine does not return */
        FUN_18049e240(puVar2[1],0x99b);
      }
      *(short *)(puVar2[9] + 2 + uVar12 * 8) = (short)uVar11;
      uVar11 = uVar5;
    } while( true );
  }
LAB_18049eed2:
  param_2[1] = uVar4;
  return;
LAB_18049ed6f:
  if (local_50 == 10) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = FUN_18049d970(puVar2);
  }
  iVar7 = FUN_18049d010(puVar2,uVar4 << 8 | 0x1002b);
  FUN_18049d010(puVar2,*(int *)((longlong)puVar2 + 0x34) << 8 | 0x80010058);
  uVar8 = FUN_18049d010(puVar2,uVar4 << 8 | 0x2002b);
  *(undefined4 *)((longlong)puVar2 + 0x2c) = *(undefined4 *)(puVar2 + 5);
  FUN_1804a1f10(puVar2,puVar2 + 6,uVar6);
  goto LAB_18049ed2d;
LAB_18049f07f:
  if (local_50 == 10) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = FUN_18049d970(puVar2);
  }
  iVar7 = FUN_18049d010(puVar2,uVar4 << 8 | 0x1002b);
  FUN_18049d010(puVar2,*(int *)((longlong)puVar2 + 0x34) << 8 | 0x80010058);
  uVar8 = FUN_18049d010(puVar2,uVar4 << 8 | 0x2002b);
  *(undefined4 *)((longlong)puVar2 + 0x2c) = *(undefined4 *)(puVar2 + 5);
  FUN_1804a1f10(puVar2,puVar2 + 6,uVar6);
  goto LAB_18049f03d;
LAB_18049eeb8:
  FUN_1804a2120(puVar2,local_4c,iVar15,uVar4,uVar8);
  param_2 = local_res10;
  goto LAB_18049eed2;
}



/* ===== 18049f240 FUN_18049f240 ===== */

void FUN_18049f240(longlong param_1,longlong param_2,uint *param_3)

{
  uint uVar1;
  
  *(undefined4 *)(param_2 + 8) = 9;
  if (param_3[2] == 4) {
    uVar1 = FUN_1800052ed(*(undefined8 *)param_3);
    if (uVar1 == (uVar1 & 0xff)) {
      *(uint *)(param_2 + 4) = uVar1 + 0x100;
      return;
    }
  }
  else if (param_3[2] == 3) {
    uVar1 = FUN_18049e1a0(param_1,param_3);
    if (uVar1 < 0x100) {
      *(uint *)(param_2 + 4) = ~uVar1;
      return;
    }
  }
  FUN_18049e870(param_1,param_3);
  if (param_3[2] == 0xc) {
    if (param_3[3] == param_3[4]) goto LAB_18049f2f6;
    if (*(uint *)(param_1 + 0x38) <= *param_3) {
      FUN_1804a0bd0(param_1,param_3);
      goto LAB_18049f2f6;
    }
  }
  FUN_1804a0b60(param_1,param_3);
LAB_18049f2f6:
  *(uint *)(param_2 + 4) = *param_3;
  return;
}



/* ===== 18049f310 FUN_18049f310 ===== */

int FUN_18049f310(longlong *param_1,uint *param_2)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 1;
  FUN_18049e280(param_1,param_2,0);
  do {
    if (*(int *)((longlong)param_1 + 0x34) != 0x2c) {
      return iVar3;
    }
    FUN_18049b180(param_1);
    lVar1 = *param_1;
    FUN_18049e870(lVar1,param_2);
    if ((param_2[2] == 0xc) && (*(uint *)(lVar1 + 0x38) <= *param_2)) {
      *(int *)(lVar1 + 0x34) = *(int *)(lVar1 + 0x34) + -1;
    }
    uVar2 = *(int *)(lVar1 + 0x34) + 1;
    if (*(byte *)(lVar1 + 0x5a) < uVar2) {
      if (0xf9 < uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_18049e240(*(undefined8 *)(lVar1 + 8),0x9b6);
      }
      *(char *)(lVar1 + 0x5a) = (char)uVar2;
    }
    *(uint *)(lVar1 + 0x34) = uVar2;
    FUN_1804a0bd0(lVar1,param_2);
    FUN_18049e280(param_1,param_2,0);
    iVar3 = iVar3 + 1;
  } while( true );
}



/* ===== 18049f3d0 FUN_18049f3d0 ===== */

void FUN_18049f3d0(longlong *param_1)

{
  longlong lVar1;
  uint uVar2;
  uint local_28 [2];
  int local_20;
  
  FUN_18049e280(param_1,local_28,0);
  lVar1 = *param_1;
  FUN_18049e870(lVar1,local_28);
  if ((local_20 == 0xc) && (*(uint *)(lVar1 + 0x38) <= local_28[0])) {
    *(int *)(lVar1 + 0x34) = *(int *)(lVar1 + 0x34) + -1;
  }
  uVar2 = *(int *)(lVar1 + 0x34) + 1;
  if (*(byte *)(lVar1 + 0x5a) < uVar2) {
    if (0xf9 < uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_18049e240(*(undefined8 *)(lVar1 + 8),0x9b6);
    }
    *(char *)(lVar1 + 0x5a) = (char)uVar2;
  }
  *(uint *)(lVar1 + 0x34) = uVar2;
  FUN_1804a0bd0(lVar1,local_28);
  return;
}



/* ===== 18049f450 FUN_18049f450 ===== */

void FUN_18049f450(longlong *param_1,int *param_2)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = FUN_18049f4f0();
  if (iVar2 != -1) {
    lVar1 = *param_1;
    uVar3 = FUN_18049d970(lVar1);
    *(undefined4 *)(lVar1 + 0x2c) = *(undefined4 *)(lVar1 + 0x28);
    FUN_1804a1f10(lVar1,lVar1 + 0x30,iVar2);
    if (param_2[2] == 0xd) {
      iVar2 = param_2[1];
      param_2[2] = 0xe;
    }
    else {
      iVar2 = *param_2;
    }
    FUN_18049d010(lVar1,iVar2 << 8 | 0x2b);
    *(undefined4 *)(lVar1 + 0x2c) = *(undefined4 *)(lVar1 + 0x28);
    FUN_1804a1f10(lVar1,lVar1 + 0x30,uVar3);
  }
  return;
}



/* ===== 18049f4f0 FUN_18049f4f0 ===== */

uint FUN_18049f4f0(longlong *param_1,uint *param_2,uint param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  bool bVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  bool bVar12;
  undefined4 uStackX_24;
  undefined8 in_stack_ffffffffffffff98;
  undefined4 uVar13;
  uint local_58;
  undefined4 local_54;
  int local_50;
  undefined8 local_4c;
  
  uVar13 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
  iVar10 = *(int *)((longlong)param_1 + 0x34);
  lVar1 = *param_1;
  if (iVar10 == 0x28) {
    lVar4 = param_1[0xe];
    FUN_18049b180();
    FUN_18049e280(param_1,param_2,0);
    if (*(int *)((longlong)param_1 + 0x34) != 0x29) {
      if ((int)lVar4 == (int)param_1[0xe]) {
                    /* WARNING: Subroutine does not return */
        FUN_18049e250();
      }
      uVar7 = FUN_18049b3d0(param_1,0x29);
      uVar8 = FUN_18049b3d0(param_1,0x28);
                    /* WARNING: Subroutine does not return */
      FUN_18049b070(param_1,*(undefined4 *)((longlong)param_1 + 0x34),0xa4a,uVar7,uVar8,(int)lVar4);
    }
    FUN_18049b180();
    FUN_18049e870(*param_1,param_2);
  }
  else {
    if ((iVar10 != 0x12a) && (1 < iVar10 - 0x103U)) {
LAB_18049fb50:
                    /* WARNING: Subroutine does not return */
      FUN_18049e240(param_1,0xacb);
    }
    lVar4 = param_1[0xe];
    uVar7 = FUN_1804a2270();
    if (((param_3 & 1) == 0) && (*(int *)((longlong)param_1 + 0x34) == 0x127)) {
      FUN_1804a4c40(param_1,param_2,uVar7,param_3,CONCAT44(uVar13,(int)lVar4));
      return 0xffffffff;
    }
    FUN_1804a5b40(param_1,param_2,uVar7);
  }
  uVar11 = 0xffffffff;
LAB_18049f5f0:
  do {
    bVar3 = false;
    uVar9 = uVar11;
    if (((param_3 & 4) == 0) && (*(int *)((longlong)param_1 + 0x34) == 0x11f)) {
      FUN_18049b180(param_1);
      bVar3 = true;
      FUN_18049e870(lVar1,param_2);
      if (param_2[2] == 0xc) {
        if (param_2[3] != param_2[4]) {
          if (*param_2 < *(uint *)(lVar1 + 0x38)) goto LAB_18049f648;
          FUN_1804a0bd0(lVar1,param_2);
        }
      }
      else {
LAB_18049f648:
        FUN_1804a0b60(lVar1,param_2);
      }
      FUN_18049d010(lVar1,*param_2 << 8 | 10);
      uVar5 = FUN_18049d970(lVar1);
      if ((uVar5 != 0xffffffff) && (uVar9 = uVar5, uVar11 != 0xffffffff)) {
        uVar9 = uVar11;
        while( true ) {
          uVar6 = *(uint *)(*(longlong *)(lVar1 + 0x48) + (ulonglong)uVar9 * 8) >> 0x10;
          if ((uVar6 == 0x7fff) || (iVar10 = uVar6 + uVar9, iVar10 == 0x7ffe)) break;
          uVar9 = iVar10 - 0x7fff;
        }
        uVar5 = (uVar5 - uVar9) + 0x7fff;
        if (0xffff < uVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_18049e240(*(undefined8 *)(lVar1 + 8),0x99b);
        }
        *(short *)(*(longlong *)(lVar1 + 0x48) + 2 + (ulonglong)uVar9 * 8) = (short)uVar5;
        uVar9 = uVar11;
      }
    }
    uVar11 = uVar9;
    iVar10 = *(int *)((longlong)param_1 + 0x34);
    if (iVar10 == 0x5b) {
      FUN_18049e870(lVar1,param_2);
      if (param_2[2] == 0xc) {
        if (param_2[3] != param_2[4]) {
          if (*param_2 < *(uint *)(lVar1 + 0x38)) goto LAB_18049f715;
          FUN_1804a0bd0(lVar1,param_2);
        }
      }
      else {
LAB_18049f715:
        FUN_1804a0b60(lVar1,param_2);
      }
      FUN_18049b180(param_1);
      FUN_18049e280(param_1,&local_58,0);
      lVar4 = *param_1;
      if ((int)local_4c == local_4c._4_4_) {
        FUN_18049e870(lVar4,&local_58);
      }
      else {
        FUN_18049e870(lVar4,&local_58);
        if (local_50 == 0xc) {
          if ((int)local_4c != local_4c._4_4_) {
            if (local_58 < *(uint *)(lVar4 + 0x38)) goto LAB_18049f781;
            FUN_1804a0bd0(lVar4,&local_58);
          }
        }
        else {
LAB_18049f781:
          FUN_18049e870(lVar4,&local_58);
          if ((local_50 == 0xc) && (*(uint *)(lVar4 + 0x38) <= local_58)) {
            *(int *)(lVar4 + 0x34) = *(int *)(lVar4 + 0x34) + -1;
          }
          uVar9 = *(int *)(lVar4 + 0x34) + 1;
          if (*(byte *)(lVar4 + 0x5a) < uVar9) {
            if (0xf9 < uVar9) {
                    /* WARNING: Subroutine does not return */
              FUN_18049e240(*(undefined8 *)(lVar4 + 8),0x9b6);
            }
            *(char *)(lVar4 + 0x5a) = (char)uVar9;
          }
          *(uint *)(lVar4 + 0x34) = uVar9;
          FUN_1804a0bd0(lVar4,&local_58);
        }
      }
      if (*(int *)((longlong)param_1 + 0x34) != 0x5d) {
                    /* WARNING: Subroutine does not return */
        FUN_18049e250(param_1,0x5d);
      }
      FUN_18049b180();
      FUN_18049f240(lVar1,param_2);
      goto LAB_18049fa41;
    }
    if (iVar10 == 0x3a) {
      if ((param_3 & 2) != 0) {
        if (!bVar3) {
          return uVar11;
        }
        goto LAB_18049fb50;
      }
      FUN_18049b180(param_1);
      local_50 = 3;
      local_4c = 0xffffffffffffffff;
      if ((*(int *)((longlong)param_1 + 0x34) != 0x12a) &&
         (1 < *(int *)((longlong)param_1 + 0x34) - 0x103U)) {
                    /* WARNING: Subroutine does not return */
        FUN_18049e250(param_1,0x12a);
      }
      uVar2 = param_1[2];
      FUN_18049b180(param_1);
      uStackX_24 = (undefined4)((uVar2 & 0x7fffffffffff) >> 0x20);
      local_54 = uStackX_24;
      local_58 = (uint)(uVar2 & 0x7fffffffffff);
      FUN_18049da30(lVar1,param_2,&local_58);
      if (*(int *)((longlong)param_1 + 0x34) == 0x11f) {
        FUN_18049b180();
        bVar3 = true;
        FUN_18049d010(lVar1,*param_2 << 8 | 10);
        uVar9 = FUN_18049d970(lVar1);
        if (uVar9 == 0xffffffff) goto LAB_18049f9ec;
        if (uVar11 == 0xffffffff) {
          FUN_1804a25d0(param_1,param_2);
          uVar11 = uVar9;
        }
        else {
          uVar5 = uVar11;
          while( true ) {
            uVar6 = *(uint *)(*(longlong *)(lVar1 + 0x48) + (ulonglong)uVar5 * 8) >> 0x10;
            if ((uVar6 == 0x7fff) || (iVar10 = uVar6 + uVar5, iVar10 == 0x7ffe)) break;
            uVar5 = iVar10 - 0x7fff;
          }
          uVar9 = (uVar9 - uVar5) + 0x7fff;
          if (0xffff < uVar9) {
                    /* WARNING: Subroutine does not return */
            FUN_18049e240(*(undefined8 *)(lVar1 + 8),0x99b);
          }
          *(short *)(*(longlong *)(lVar1 + 0x48) + 2 + (ulonglong)uVar5 * 8) = (short)uVar9;
          FUN_1804a25d0(param_1,param_2);
        }
        break;
      }
      FUN_1804a25d0(param_1,param_2);
      goto LAB_18049f5f0;
    }
    if (((iVar10 != 0x28) && (iVar10 != 299)) && (iVar10 != 0x7b)) {
      if (!bVar3) {
        if (iVar10 != 0x2e) {
          return uVar11;
        }
        FUN_18049b180(param_1);
      }
      FUN_18049e960(param_1,param_2);
      goto LAB_18049fa41;
    }
    FUN_18049e870(lVar1,param_2);
    if ((param_2[2] == 0xc) && (*(uint *)(lVar1 + 0x38) <= *param_2)) {
      *(int *)(lVar1 + 0x34) = *(int *)(lVar1 + 0x34) + -1;
    }
    uVar9 = *(int *)(lVar1 + 0x34) + 1;
    if (*(byte *)(lVar1 + 0x5a) < uVar9) {
      if (0xf9 < uVar9) {
                    /* WARNING: Subroutine does not return */
        FUN_18049e240(*(undefined8 *)(lVar1 + 8),0x9b6);
      }
      *(char *)(lVar1 + 0x5a) = (char)uVar9;
    }
    *(uint *)(lVar1 + 0x34) = uVar9;
    FUN_1804a0bd0(lVar1,param_2);
    if (*(int *)((longlong)param_1 + 0xb4) != 0) {
      uVar9 = *(int *)(lVar1 + 0x34) + 1;
      if (*(byte *)(lVar1 + 0x5a) < uVar9) {
        if (0xf9 < uVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_18049e240(*(undefined8 *)(lVar1 + 8),0x9b6);
        }
        *(char *)(lVar1 + 0x5a) = (char)uVar9;
      }
      *(uint *)(lVar1 + 0x34) = uVar9;
    }
LAB_18049f9ec:
    FUN_1804a25d0(param_1,param_2);
  } while (!bVar3);
  bVar3 = true;
  bVar12 = false;
  if ((param_3 & 1) == 0) {
    iVar10 = *(int *)((longlong)param_1 + 0x34);
    if ((iVar10 == 0x11f) ||
       ((((iVar10 - 0x28U < 0x34 &&
          ((0x8000000040001U >> ((ulonglong)(iVar10 - 0x28U) & 0x3f) & 1) != 0)) || (iVar10 == 299))
        || (iVar10 == 0x7b)))) goto LAB_18049fa60;
    if (iVar10 != 0x2e) {
      return uVar11;
    }
LAB_18049fa41:
    if (!bVar3) goto LAB_18049f5f0;
    bVar12 = (param_3 & 1) == 0;
  }
  if (!bVar12) goto LAB_18049f5f0;
LAB_18049fa60:
  FUN_18049e870(lVar1,param_2);
  if ((param_2[2] == 0xc) && (*(uint *)(lVar1 + 0x38) <= *param_2)) {
    *(int *)(lVar1 + 0x34) = *(int *)(lVar1 + 0x34) + -1;
  }
  uVar9 = *(int *)(lVar1 + 0x34) + 1;
  if (*(byte *)(lVar1 + 0x5a) < uVar9) {
    if (0xf9 < uVar9) {
                    /* WARNING: Subroutine does not return */
      FUN_18049e240(*(undefined8 *)(lVar1 + 8),0x9b6);
    }
    *(char *)(lVar1 + 0x5a) = (char)uVar9;
  }
  *(uint *)(lVar1 + 0x34) = uVar9;
  FUN_1804a0bd0(lVar1,param_2);
  goto LAB_18049f5f0;
}



/* ===== 18049fb80 FUN_18049fb80 ===== */

void FUN_18049fb80(longlong *param_1,uint *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  ulonglong *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  short sVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint *puVar19;
  int iVar20;
  int iVar21;
  char cVar22;
  int iVar23;
  uint local_res18;
  undefined8 in_stack_ffffffffffffff28;
  undefined8 local_c8;
  uint local_c0;
  undefined8 local_bc;
  int local_b0;
  uint local_a8;
  undefined4 uStack_a4;
  uint local_a0;
  int local_9c;
  int local_98;
  int local_90;
  uint local_8c;
  uint local_88;
  ulonglong local_80;
  uint local_78;
  int local_74;
  double local_70;
  ulonglong local_68;
  int local_60 [8];
  
  puVar2 = (undefined8 *)*param_1;
  local_74 = (int)param_1[0xe];
  uVar16 = *(uint *)((longlong)puVar2 + 0x34);
  local_88 = FUN_18049d010(puVar2,uVar16 << 8 | 0x34);
  param_2[2] = 0xc;
  *param_2 = uVar16;
  param_2[3] = 0xffffffff;
  param_2[4] = 0xffffffff;
  uVar17 = *(int *)((longlong)puVar2 + 0x34) + 1;
  if (*(byte *)((longlong)puVar2 + 0x5a) < uVar17) {
    if (0xf9 < uVar17) {
                    /* WARNING: Subroutine does not return */
      FUN_18049e240(puVar2[1],0x9b6);
    }
    *(char *)((longlong)puVar2 + 0x5a) = (char)uVar17;
  }
  *(uint *)((longlong)puVar2 + 0x34) = uVar17;
  if (*(int *)((longlong)param_1 + 0x34) != 0x7b) {
                    /* WARNING: Subroutine does not return */
    FUN_18049e250(param_1,0x7b);
  }
  iVar21 = 0;
  uVar11 = 0;
  local_8c = uVar16 + 1;
  local_68 = 0;
  bVar4 = false;
  local_res18 = 1;
  local_b0 = 0;
  local_78 = uVar16;
  FUN_18049b180();
  iVar20 = *(int *)((longlong)param_1 + 0x34);
  if (iVar20 == 0x7d) {
    iVar23 = 0;
    iVar20 = 0x7d;
LAB_1804a0874:
    iVar5 = local_74;
    if (iVar20 != 0x7d) {
      if (local_74 == (int)param_1[0xe]) {
                    /* WARNING: Subroutine does not return */
        FUN_18049e250(param_1,0x7d);
      }
      uVar13 = FUN_18049b3d0();
      uVar14 = FUN_18049b3d0(param_1,0x7b);
                    /* WARNING: Subroutine does not return */
      FUN_18049b070(param_1,*(undefined4 *)((longlong)param_1 + 0x34),0xa4a,uVar13,uVar14,iVar5);
    }
LAB_1804a087d:
    FUN_18049b180(param_1);
    if (iVar23 != 0) {
      local_60[2] = 4;
      local_60[3] = -1;
      local_60[4] = -1;
      local_60[1] = 0x43300000;
      puVar19 = (uint *)(puVar2[9] + (ulonglong)(*(int *)(puVar2 + 5) - 1U) * 8);
      local_60[0] = local_res18 - 1;
      if (0x100 < local_res18) {
        *(uint *)(puVar2 + 5) = *(int *)(puVar2 + 5) - 1U;
        puVar19 = puVar19 + -2;
      }
      puVar10 = (ulonglong *)FUN_1804931f0(puVar2[2],*puVar2,local_60);
      if (*(int *)((longlong)puVar10 + 4) == 0) {
        iVar20 = (int)*puVar10;
      }
      else {
        *puVar10 = (ulonglong)*(uint *)((longlong)puVar2 + 0x3c);
        iVar20 = *(int *)((longlong)puVar2 + 0x3c);
        *(int *)((longlong)puVar2 + 0x3c) = iVar20 + 1;
      }
      *(undefined1 *)((longlong)puVar19 + -5) = 0;
      *puVar19 = (iVar20 << 8 | local_8c) << 8 | 0x3f;
    }
    if (local_88 == *(int *)(puVar2 + 5) - 1U) {
      *param_2 = local_88;
      uVar16 = 0xb;
      *(int *)((longlong)puVar2 + 0x34) = *(int *)((longlong)puVar2 + 0x34) + -1;
    }
    else {
      uVar16 = 0xc;
    }
    param_2[2] = uVar16;
    if (uVar11 == 0) {
      if (bVar4) {
        if (local_res18 < 3) {
          local_res18 = 3;
        }
        else if (0x7ff < local_res18) {
          local_res18 = 0x7ff;
        }
      }
      else {
        local_res18 = 0;
      }
      if (iVar21 == 0) {
        sVar15 = 0;
      }
      else if (iVar21 == 1) {
        sVar15 = 1;
      }
      else {
        iVar20 = 0x1f;
        if (iVar21 - 1U != 0) {
          for (; iVar21 - 1U >> iVar20 == 0; iVar20 = iVar20 + -1) {
          }
        }
        sVar15 = (short)iVar20 + 1;
      }
      *(ushort *)(puVar2[9] + 2 + (ulonglong)local_88 * 8) = sVar15 << 0xb | (ushort)local_res18;
    }
    else {
      if ((bVar4) && (*(uint *)(uVar11 + 0x30) < local_res18)) {
        FUN_180492f60(puVar2[2],uVar11,local_res18 - 1);
      }
      if (*(ulonglong *)(*(longlong *)(puVar2[2] + 0x10) + 0x18) <=
          *(ulonglong *)(*(longlong *)(puVar2[2] + 0x10) + 0x10)) {
        FUN_180491200();
      }
    }
    return;
  }
LAB_18049fc60:
  iVar23 = 0;
  local_90 = 0;
  if (iVar20 == 0x5b) {
    FUN_18049b180(param_1);
    FUN_18049e280(param_1,&local_c8,0);
    lVar3 = *param_1;
    if ((uint)local_bc == local_bc._4_4_) {
      FUN_18049e870(lVar3,&local_c8);
    }
    else {
      FUN_18049e870(lVar3,&local_c8);
      if (local_c0 == 0xc) {
        if ((uint)local_bc != local_bc._4_4_) {
          if ((uint)local_c8 < *(uint *)(lVar3 + 0x38)) goto LAB_18049fcc4;
          FUN_1804a0bd0(lVar3,&local_c8);
        }
      }
      else {
LAB_18049fcc4:
        FUN_18049e870(lVar3,&local_c8);
        if ((local_c0 == 0xc) && (*(uint *)(lVar3 + 0x38) <= (uint)local_c8)) {
          *(int *)(lVar3 + 0x34) = *(int *)(lVar3 + 0x34) + -1;
        }
        uVar16 = *(int *)(lVar3 + 0x34) + 1;
        if (*(byte *)(lVar3 + 0x5a) < uVar16) {
          if (0xf9 < uVar16) {
                    /* WARNING: Subroutine does not return */
            FUN_18049e240(*(undefined8 *)(lVar3 + 8),0x9b6);
          }
          *(char *)(lVar3 + 0x5a) = (char)uVar16;
        }
        *(uint *)(lVar3 + 0x34) = uVar16;
        FUN_1804a0bd0(lVar3,&local_c8);
      }
    }
    if (*(int *)((longlong)param_1 + 0x34) != 0x5d) {
                    /* WARNING: Subroutine does not return */
      FUN_18049e250(param_1,0x5d);
    }
    FUN_18049b180();
    if (4 < (int)local_c0) {
      param_2[2] = 9;
      if (local_c0 == 3) {
        local_80 = (ulonglong)local_c8 | 0xfffd800000000000;
        puVar10 = (ulonglong *)FUN_1804931f0(puVar2[2],*puVar2,&local_80);
        if (*(int *)((longlong)puVar10 + 4) == 0) {
          uVar16 = (uint)*puVar10;
        }
        else {
          *puVar10 = (ulonglong)*(uint *)(puVar2 + 8);
          uVar16 = *(uint *)(puVar2 + 8);
          *(uint *)(puVar2 + 8) = uVar16 + 1;
        }
        if (uVar16 < 0x100) {
          param_2[1] = ~uVar16;
          goto LAB_18049fd94;
        }
      }
      if (local_c0 == 7) {
        uVar16 = (uint)local_c8 << 0x10 | 0x2d;
LAB_18049fe7b:
        uVar6 = FUN_18049d010(puVar2,uVar16);
        local_c8 = (double)CONCAT44(local_c8._4_4_,uVar6);
        local_c0 = 0xb;
LAB_18049fecb:
        uVar16 = *(uint *)((longlong)puVar2 + 0x34);
        uVar17 = uVar16 + 1;
        if (*(byte *)((longlong)puVar2 + 0x5a) < uVar17) {
          if (0xf9 < uVar17) {
                    /* WARNING: Subroutine does not return */
            FUN_18049e240(puVar2[1],0x9b6);
          }
          *(char *)((longlong)puVar2 + 0x5a) = (char)uVar17;
        }
        *(uint *)((longlong)puVar2 + 0x34) = uVar17;
        FUN_1804a0d10(puVar2,&local_c8,uVar16);
        uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffff28 >> 0x20);
        if ((local_c0 == 10) && ((uint)local_c8 != -1)) {
          if ((uint)local_bc == 0xffffffff) {
            local_bc = CONCAT44(local_bc._4_4_,(uint)local_c8);
          }
          else {
            uVar17 = (uint)local_bc;
            while( true ) {
              uVar18 = *(uint *)(puVar2[9] + (ulonglong)uVar17 * 8) >> 0x10;
              if ((uVar18 == 0x7fff) || (iVar20 = uVar18 + uVar17, iVar20 == 0x7ffe)) break;
              uVar17 = iVar20 - 0x7fff;
            }
            uVar18 = ((uint)local_c8 - uVar17) + 0x7fff;
            if (0xffff < uVar18) {
                    /* WARNING: Subroutine does not return */
              FUN_18049e240(puVar2[1],0x99b);
            }
            *(short *)(puVar2[9] + 2 + (ulonglong)uVar17 * 8) = (short)uVar18;
          }
        }
        if ((uint)local_bc != local_bc._4_4_) {
          if ((uint)local_bc != 0xffffffff) {
            uVar17 = (uint)local_bc;
            do {
              uVar18 = uVar17 - 1;
              if (uVar17 == 0) {
                uVar18 = 0;
              }
              uVar18 = *(uint *)(puVar2[9] + (ulonglong)uVar18 * 8);
              if ((1 < (uVar18 & 0xff) - 0xc) && ((uVar18 & 0xff00) != 0xff00)) goto LAB_1804a037f;
              uVar18 = *(uint *)(puVar2[9] + (ulonglong)uVar17 * 8) >> 0x10;
            } while ((uVar18 != 0x7fff) &&
                    (uVar17 = (uVar17 - 0x7fff) + uVar18, uVar17 != 0xffffffff));
          }
          if (local_bc._4_4_ != 0xffffffff) {
            uVar17 = local_bc._4_4_;
            do {
              uVar18 = uVar17 - 1;
              if (uVar17 == 0) {
                uVar18 = 0;
              }
              uVar18 = *(uint *)(puVar2[9] + (ulonglong)uVar18 * 8);
              if ((1 < (uVar18 & 0xff) - 0xc) && ((uVar18 & 0xff00) != 0xff00)) goto LAB_1804a037f;
              uVar18 = *(uint *)(puVar2[9] + (ulonglong)uVar17 * 8) >> 0x10;
            } while ((uVar18 != 0x7fff) &&
                    (uVar17 = (uVar17 - 0x7fff) + uVar18, uVar17 != 0xffffffff));
          }
          iVar20 = -1;
          uVar9 = 0xffffffff;
          goto LAB_1804a034d;
        }
        goto LAB_1804a04fa;
      }
      if (local_c0 == 8) {
        local_80 = (ulonglong)local_c8 | 0xfffd800000000000;
        puVar10 = (ulonglong *)FUN_1804931f0(puVar2[2],*puVar2,&local_80);
        if (*(int *)((longlong)puVar10 + 4) == 0) {
          uVar16 = (int)*puVar10 << 0x10 | 0x36;
        }
        else {
          *puVar10 = (ulonglong)*(uint *)(puVar2 + 8);
          uVar16 = *(int *)(puVar2 + 8) << 0x10 | 0x36;
          *(int *)(puVar2 + 8) = *(int *)(puVar2 + 8) + 1;
        }
        goto LAB_18049fe7b;
      }
      if (local_c0 == 9) {
        if ((longlong)local_c8 < 0) {
          uVar16 = ((uint)local_c8 << 8 | ~local_c8._4_4_) << 0x10 | 0x39;
        }
        else if (local_c8._4_4_ < 0x100) {
          if (*(uint *)(puVar2 + 7) <= local_c8._4_4_) {
            *(int *)((longlong)puVar2 + 0x34) = *(int *)((longlong)puVar2 + 0x34) + -1;
          }
          uVar16 = ((uint)local_c8 << 8 | local_c8._4_4_) << 0x10 | 0x38;
        }
        else {
          uVar16 = ((uint)local_c8 << 8 | local_c8._4_4_ - 0x100) << 0x10 | 0x3a;
        }
        if (*(uint *)(puVar2 + 7) <= (uint)local_c8) {
          *(int *)((longlong)puVar2 + 0x34) = *(int *)((longlong)puVar2 + 0x34) + -1;
        }
        goto LAB_18049fe7b;
      }
      if (1 < local_c0 - 0xd) {
        uVar16 = (uint)local_c8;
        if (local_c0 == 6) goto LAB_18049ff42;
        if (local_c0 == 0xc) goto LAB_18049ff49;
        if (local_c0 == 6) {
          local_c0 = 0xc;
LAB_18049febe:
          if (*(uint *)(puVar2 + 7) <= (uint)local_c8) {
            *(int *)((longlong)puVar2 + 0x34) = *(int *)((longlong)puVar2 + 0x34) + -1;
          }
        }
        else if (local_c0 == 0xc) goto LAB_18049febe;
        goto LAB_18049fecb;
      }
      local_c8 = (double)CONCAT44(local_c8._4_4_,local_c8._4_4_);
      uVar16 = local_c8._4_4_;
LAB_18049ff42:
      local_c0 = 0xc;
LAB_18049ff49:
      if ((uint)local_bc != local_bc._4_4_) {
        if (uVar16 < *(uint *)(puVar2 + 7)) goto LAB_18049fecb;
        FUN_1804a0d10(puVar2,&local_c8,uVar16);
        uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffff28 >> 0x20);
        if ((local_c0 == 10) && ((uint)local_c8 != -1)) {
          if ((uint)local_bc == 0xffffffff) {
            local_bc = CONCAT44(local_bc._4_4_,(uint)local_c8);
          }
          else {
            uVar17 = (uint)local_bc;
            while( true ) {
              uVar18 = *(uint *)(puVar2[9] + (ulonglong)uVar17 * 8) >> 0x10;
              if ((uVar18 == 0x7fff) || (iVar20 = uVar18 + uVar17, iVar20 == 0x7ffe)) break;
              uVar17 = iVar20 - 0x7fff;
            }
            uVar18 = ((uint)local_c8 - uVar17) + 0x7fff;
            if (0xffff < uVar18) {
                    /* WARNING: Subroutine does not return */
              FUN_18049e240(puVar2[1],0x99b);
            }
            *(short *)(puVar2[9] + 2 + (ulonglong)uVar17 * 8) = (short)uVar18;
          }
        }
        if ((uint)local_bc == local_bc._4_4_) goto LAB_1804a04fa;
        if ((uint)local_bc != 0xffffffff) {
          uVar17 = (uint)local_bc;
          do {
            uVar18 = uVar17 - 1;
            if (uVar17 == 0) {
              uVar18 = 0;
            }
            uVar18 = *(uint *)(puVar2[9] + (ulonglong)uVar18 * 8);
            if ((1 < (uVar18 & 0xff) - 0xc) && ((uVar18 & 0xff00) != 0xff00)) goto LAB_1804a00df;
            uVar18 = *(uint *)(puVar2[9] + (ulonglong)uVar17 * 8) >> 0x10;
          } while ((uVar18 != 0x7fff) && (uVar17 = (uVar17 - 0x7fff) + uVar18, uVar17 != 0xffffffff)
                  );
        }
        if (local_bc._4_4_ != 0xffffffff) {
          uVar17 = local_bc._4_4_;
          do {
            uVar18 = uVar17 - 1;
            if (uVar17 == 0) {
              uVar18 = 0;
            }
            uVar18 = *(uint *)(puVar2[9] + (ulonglong)uVar18 * 8);
            if ((1 < (uVar18 & 0xff) - 0xc) && ((uVar18 & 0xff00) != 0xff00)) goto LAB_1804a00df;
            uVar18 = *(uint *)(puVar2[9] + (ulonglong)uVar17 * 8) >> 0x10;
          } while ((uVar18 != 0x7fff) && (uVar17 = (uVar17 - 0x7fff) + uVar18, uVar17 != 0xffffffff)
                  );
        }
        iVar20 = -1;
        uVar9 = 0xffffffff;
        goto LAB_1804a00ad;
      }
      goto LAB_1804a050d;
    }
LAB_18049fd94:
    if ((local_c0 != 4) || (ABS(local_c8) != 0.0)) goto LAB_1804a0515;
    bVar4 = true;
    goto LAB_1804a051c;
  }
  if (((iVar20 == 0x12a) || (iVar20 - 0x103U < 2)) &&
     (iVar20 = FUN_18049b160(param_1), iVar20 == 0x3d)) {
    local_c0 = 3;
    local_c8 = (double)((ulonglong)local_c8 & 0xffffffff00000000);
    local_bc = 0xffffffffffffffff;
    if ((*(int *)((longlong)param_1 + 0x34) != 0x12a) &&
       (1 < *(int *)((longlong)param_1 + 0x34) - 0x103U)) {
                    /* WARNING: Subroutine does not return */
      FUN_18049e250(param_1,0x12a);
    }
    uVar12 = param_1[2];
    FUN_18049b180(param_1);
    local_c8 = (double)(uVar12 & 0x7fffffffffff);
    if (*(int *)((longlong)param_1 + 0x34) != 0x3d) goto LAB_1804a0ace;
    FUN_18049b180(param_1);
    iVar21 = iVar21 + 1;
    local_b0 = iVar21;
  }
  else {
    iVar23 = 1;
    local_c0 = 4;
    local_bc = 0xffffffffffffffff;
    bVar4 = true;
    local_c8 = (double)(int)local_res18;
    local_res18 = local_res18 + 1;
  }
  goto LAB_1804a05e3;
LAB_1804a037f:
  if (local_c0 == 10) {
    uVar8 = 0xffffffff;
  }
  else {
    uVar8 = FUN_18049d970(puVar2);
  }
  iVar20 = FUN_18049d010(puVar2,uVar16 << 8 | 0x1002b);
  FUN_18049d010(puVar2,*(int *)((longlong)puVar2 + 0x34) << 8 | 0x80010058);
  uVar9 = FUN_18049d010(puVar2,uVar16 << 8 | 0x2002b);
  *(undefined4 *)((longlong)puVar2 + 0x2c) = *(undefined4 *)(puVar2 + 5);
  FUN_1804a1f10(puVar2,puVar2 + 6,uVar8);
LAB_1804a034d:
  iVar21 = *(int *)(puVar2 + 5);
  *(int *)((longlong)puVar2 + 0x2c) = iVar21;
  uVar17 = local_bc._4_4_;
  while (uVar17 != 0xffffffff) {
    lVar3 = puVar2[9];
    uVar11 = (ulonglong)uVar17;
    uVar18 = *(uint *)(lVar3 + uVar11 * 8);
    uVar7 = uVar18 >> 0x10;
    if (uVar7 == 0x7fff) {
      uVar7 = 0xffffffff;
    }
    else {
      uVar7 = (uVar7 - 0x7fff) + uVar17;
    }
    uVar1 = uVar17 - 1;
    if (uVar17 == 0) {
      uVar1 = 0;
    }
    uVar12 = (ulonglong)uVar1;
    uVar1 = *(uint *)(lVar3 + uVar12 * 8);
    cVar22 = (char)uVar16;
    if ((uVar1 & 0xff) - 0xc < 2) {
      if ((uVar16 == 0xff) || (uVar16 == uVar1 >> 0x10)) {
        *(undefined1 *)(lVar3 + 1 + uVar12 * 8) = 0;
        *(char *)(lVar3 + uVar12 * 8) = (char)uVar1 + '\x02';
      }
      else {
        *(char *)(lVar3 + 1 + uVar12 * 8) = cVar22;
      }
LAB_1804a04a1:
      uVar17 = (iVar21 - uVar17) + 0x7fff;
      if (0xffff < uVar17) {
                    /* WARNING: Subroutine does not return */
        FUN_18049e240(puVar2[1],0x99b);
      }
      *(short *)(puVar2[9] + 2 + uVar11 * 8) = (short)uVar17;
      uVar17 = uVar7;
    }
    else {
      if ((char)(uVar1 >> 8) == -1) {
        if (uVar16 == 0xff) {
          *(uint *)(lVar3 + uVar12 * 8) = (uVar18 >> 8 & 0xff) << 8 | 0x80000058;
        }
        else {
          *(char *)(lVar3 + 1 + uVar12 * 8) = cVar22;
          if (*(byte *)(lVar3 + 9 + uVar12 * 8) <= uVar16) {
            *(char *)(lVar3 + 9 + uVar12 * 8) = cVar22 + '\x01';
          }
        }
        goto LAB_1804a04a1;
      }
      uVar17 = (iVar20 - uVar17) + 0x7fff;
      if (0xffff < uVar17) {
                    /* WARNING: Subroutine does not return */
        FUN_18049e240(puVar2[1],0x99b);
      }
      *(short *)(lVar3 + 2 + uVar11 * 8) = (short)uVar17;
      uVar17 = uVar7;
    }
  }
LAB_1804a04ce:
  in_stack_ffffffffffffff28 = CONCAT44(uVar6,uVar9);
  FUN_1804a2120(puVar2,local_bc & 0xffffffff,iVar21,uVar16,in_stack_ffffffffffffff28);
  iVar23 = local_90;
  iVar21 = local_b0;
LAB_1804a04fa:
  local_c0 = 0xc;
  local_c8 = (double)CONCAT44(local_c8._4_4_,uVar16);
  local_bc = 0xffffffffffffffff;
LAB_1804a050d:
  param_2[1] = uVar16;
  uVar11 = local_68;
LAB_1804a0515:
  iVar21 = iVar21 + 1;
  local_b0 = iVar21;
LAB_1804a051c:
  if (*(int *)((longlong)param_1 + 0x34) != 0x3d) {
LAB_1804a0ace:
                    /* WARNING: Subroutine does not return */
    FUN_18049e250(param_1,0x3d);
  }
  FUN_18049b180(param_1);
LAB_1804a05e3:
  FUN_18049e280(param_1,&local_a8,0);
  if ((((int)local_c0 < 5) && (local_c0 != 0)) &&
     ((local_c0 == 3 || (((int)local_a0 < 5 && (local_9c == local_98)))))) {
    if (uVar11 == 0) {
      if (iVar21 == 0) {
        iVar20 = 0;
      }
      else if (iVar21 == 1) {
        iVar20 = 1;
      }
      else {
        iVar20 = 0x1f;
        if (iVar21 - 1U != 0) {
          for (; iVar21 - 1U >> iVar20 == 0; iVar20 = iVar20 + -1) {
          }
        }
        iVar20 = iVar20 + 1;
      }
      uVar16 = 0;
      if (bVar4) {
        uVar16 = local_res18;
      }
      uVar11 = FUN_180492ab0(puVar2[2],uVar16,iVar20);
      local_80 = uVar11 | 0xfffa000000000000;
      local_68 = uVar11;
      puVar10 = (ulonglong *)FUN_1804931f0(puVar2[2],*puVar2,&local_80);
      if (*(int *)((longlong)puVar10 + 4) == 0) {
        iVar20 = (int)*puVar10;
      }
      else {
        *puVar10 = (ulonglong)*(uint *)(puVar2 + 8);
        iVar20 = *(int *)(puVar2 + 8);
        *(int *)(puVar2 + 8) = iVar20 + 1;
      }
      *(uint *)(puVar2[9] + (ulonglong)local_88 * 8) = (iVar20 << 8 | local_78) << 8 | 0x35;
    }
    iVar23 = 0;
    if ((int)local_c0 < 3) {
      local_70 = (double)~((ulonglong)local_c0 << 0x2f);
    }
    else {
      local_70 = local_c8;
      if (local_c0 == 3) {
        local_70 = (double)((ulonglong)local_c8 | 0xfffd800000000000);
      }
    }
    puVar10 = (ulonglong *)FUN_1804931f0(puVar2[2],uVar11,&local_70);
    if ((*(byte *)(uVar11 + 8) & 4) != 0) {
      lVar3 = *(longlong *)(puVar2[2] + 0x10);
      *(byte *)(uVar11 + 8) = *(byte *)(uVar11 + 8) & 0xfb;
      *(undefined8 *)(uVar11 + 0x18) = *(undefined8 *)(lVar3 + 0x40);
      *(ulonglong *)(lVar3 + 0x40) = uVar11;
    }
    if (((int)local_a0 < 5) && (local_9c == local_98)) {
      if ((int)local_a0 < 3) {
        uVar12 = ~((ulonglong)local_a0 << 0x2f);
        *puVar10 = uVar12;
      }
      else if (local_a0 == 3) {
        uVar12 = CONCAT44(uStack_a4,local_a8) | 0xfffd800000000000;
        *puVar10 = uVar12;
      }
      else {
        *puVar10 = CONCAT44(uStack_a4,local_a8);
        uVar12 = CONCAT44(uStack_a4,local_a8);
      }
      if ((local_c0 == 3) && (uVar12 == 0xffffffffffffffff)) {
        *puVar10 = uVar11 | 0xfffa000000000000;
      }
      goto LAB_1804a0848;
    }
    *puVar10 = uVar11 | 0xfffa000000000000;
  }
  if (local_a0 != 0xd) {
    FUN_18049e870(puVar2,&local_a8);
    if (local_a0 == 0xc) {
      if (local_9c != local_98) {
        if (local_a8 < *(uint *)(puVar2 + 7)) goto LAB_1804a07d4;
        goto LAB_1804a0813;
      }
    }
    else {
LAB_1804a07d4:
      FUN_18049e870(puVar2,&local_a8);
      if ((local_a0 == 0xc) && (*(uint *)(puVar2 + 7) <= local_a8)) {
        *(int *)((longlong)puVar2 + 0x34) = *(int *)((longlong)puVar2 + 0x34) + -1;
      }
      uVar16 = *(int *)((longlong)puVar2 + 0x34) + 1;
      if (*(byte *)((longlong)puVar2 + 0x5a) < uVar16) {
        if (0xf9 < uVar16) {
                    /* WARNING: Subroutine does not return */
          FUN_18049e240(puVar2[1],0x9b6);
        }
        *(char *)((longlong)puVar2 + 0x5a) = (char)uVar16;
      }
      *(uint *)((longlong)puVar2 + 0x34) = uVar16;
LAB_1804a0813:
      FUN_1804a0bd0(puVar2,&local_a8);
    }
    iVar23 = 0;
  }
  if ((int)local_c0 < 5) {
    FUN_18049f240(puVar2,param_2,&local_c8);
  }
  FUN_18049dcd0(puVar2,param_2);
LAB_1804a0848:
  *(uint *)((longlong)puVar2 + 0x34) = local_8c;
  iVar20 = *(int *)((longlong)param_1 + 0x34);
  if ((iVar20 != 0x2c) && (iVar20 != 0x3b)) goto LAB_1804a0874;
  FUN_18049b180(param_1);
  iVar20 = *(int *)((longlong)param_1 + 0x34);
  if (iVar20 == 0x7d) goto LAB_1804a087d;
  goto LAB_18049fc60;
LAB_1804a00df:
  if (local_c0 == 10) {
    uVar8 = 0xffffffff;
  }
  else {
    uVar8 = FUN_18049d970(puVar2);
  }
  iVar20 = FUN_18049d010(puVar2,uVar16 << 8 | 0x1002b);
  FUN_18049d010(puVar2,*(int *)((longlong)puVar2 + 0x34) << 8 | 0x80010058);
  uVar9 = FUN_18049d010(puVar2,uVar16 << 8 | 0x2002b);
  *(undefined4 *)((longlong)puVar2 + 0x2c) = *(undefined4 *)(puVar2 + 5);
  FUN_1804a1f10(puVar2,puVar2 + 6,uVar8);
LAB_1804a00ad:
  iVar21 = *(int *)(puVar2 + 5);
  *(int *)((longlong)puVar2 + 0x2c) = iVar21;
  uVar17 = local_bc._4_4_;
  while (uVar17 != 0xffffffff) {
    lVar3 = puVar2[9];
    uVar11 = (ulonglong)uVar17;
    uVar18 = *(uint *)(lVar3 + uVar11 * 8);
    uVar7 = uVar18 >> 0x10;
    if (uVar7 == 0x7fff) {
      uVar7 = 0xffffffff;
    }
    else {
      uVar7 = (uVar17 - 0x7fff) + uVar7;
    }
    uVar1 = uVar17 - 1;
    if (uVar17 == 0) {
      uVar1 = 0;
    }
    uVar12 = (ulonglong)uVar1;
    uVar1 = *(uint *)(lVar3 + uVar12 * 8);
    cVar22 = (char)uVar16;
    if ((uVar1 & 0xff) - 0xc < 2) {
      if ((uVar16 == 0xff) || (uVar16 == uVar1 >> 0x10)) {
        *(undefined1 *)(lVar3 + 1 + uVar12 * 8) = 0;
        *(char *)(lVar3 + uVar12 * 8) = (char)uVar1 + '\x02';
      }
      else {
        *(char *)(lVar3 + 1 + uVar12 * 8) = cVar22;
      }
LAB_1804a0201:
      uVar17 = (iVar21 - uVar17) + 0x7fff;
      if (0xffff < uVar17) {
                    /* WARNING: Subroutine does not return */
        FUN_18049e240(puVar2[1],0x99b);
      }
      *(short *)(puVar2[9] + 2 + uVar11 * 8) = (short)uVar17;
      uVar17 = uVar7;
    }
    else {
      if ((char)(uVar1 >> 8) == -1) {
        if (uVar16 == 0xff) {
          *(uint *)(lVar3 + uVar12 * 8) = (uVar18 >> 8 & 0xff) << 8 | 0x80000058;
        }
        else {
          *(char *)(lVar3 + 1 + uVar12 * 8) = cVar22;
          if (*(byte *)(lVar3 + 9 + uVar12 * 8) <= uVar16) {
            *(char *)(lVar3 + 9 + uVar12 * 8) = cVar22 + '\x01';
          }
        }
        goto LAB_1804a0201;
      }
      uVar17 = (iVar20 - uVar17) + 0x7fff;
      if (0xffff < uVar17) {
                    /* WARNING: Subroutine does not return */
        FUN_18049e240(puVar2[1],0x99b);
      }
      *(short *)(lVar3 + 2 + uVar11 * 8) = (short)uVar17;
      uVar17 = uVar7;
    }
  }
  goto LAB_1804a04ce;
}



/* ===== 1804a0b00 FUN_1804a0b00 ===== */

uint FUN_1804a0b00(longlong param_1,uint *param_2)

{
  uint uVar1;
  
  FUN_18049e870();
  if (param_2[2] == 0xc) {
    uVar1 = *param_2;
    if (param_2[3] == param_2[4]) {
      return uVar1;
    }
    if (*(uint *)(param_1 + 0x38) <= uVar1) {
      FUN_1804a0bd0(param_1,param_2,uVar1);
      return *param_2;
    }
  }
  FUN_1804a0b60(param_1,param_2);
  return *param_2;
}



/* ===== 1804a0b60 FUN_1804a0b60 ===== */

void FUN_1804a0b60(longlong param_1,uint *param_2)

{
  uint uVar1;
  
  FUN_18049e870();
  if ((param_2[2] == 0xc) && (*(uint *)(param_1 + 0x38) <= *param_2)) {
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + -1;
  }
  uVar1 = *(int *)(param_1 + 0x34) + 1;
  if (*(byte *)(param_1 + 0x5a) < uVar1) {
    if (0xf9 < uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_18049e240(*(undefined8 *)(param_1 + 8),0x9b6);
    }
    *(char *)(param_1 + 0x5a) = (char)uVar1;
  }
  *(uint *)(param_1 + 0x34) = uVar1;
  FUN_1804a0bd0(param_1,param_2);
  return;
}



/* ===== 1804a0bd0 FUN_1804a0bd0 ===== */

void FUN_1804a0bd0(longlong param_1,int *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  
  FUN_1804a0d10();
  if (param_2[2] == 10) {
    FUN_1804a1f10(param_1,param_2 + 3,*param_2);
  }
  uVar5 = (ulonglong)(uint)param_2[4];
  if (param_2[3] == param_2[4]) goto LAB_1804a0cf6;
  iVar1 = FUN_1804a2020(param_1);
  if (iVar1 == 0) {
    uVar3 = 0xffffffff;
    uVar4 = 0xffffffff;
    iVar1 = FUN_1804a2020(param_1,uVar5 & 0xffffffff);
    if (iVar1 != 0) goto LAB_1804a0c3e;
  }
  else {
LAB_1804a0c3e:
    if (param_2[2] == 10) {
      uVar2 = 0xffffffff;
    }
    else {
      uVar2 = FUN_18049d970(param_1);
    }
    uVar3 = FUN_18049d010(param_1,param_3 << 8 | 0x1002b);
    FUN_18049d010(param_1,*(int *)(param_1 + 0x34) << 8 | 0x80010058);
    uVar4 = FUN_18049d010(param_1,param_3 << 8 | 0x2002b);
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x28);
    FUN_1804a1f10(param_1,param_1 + 0x30,uVar2);
  }
  uVar2 = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x2c) = uVar2;
  FUN_1804a2120(param_1,param_2[4],uVar2,param_3,uVar3);
  FUN_1804a2120(param_1,param_2[3],uVar2,param_3,uVar4);
LAB_1804a0cf6:
  param_2[3] = -1;
  param_2[4] = -1;
  *param_2 = param_3;
  param_2[2] = 0xc;
  return;
}



/* ===== 1804a0d10 FUN_1804a0d10 ===== */

void FUN_1804a0d10(undefined8 *param_1,ulonglong *param_2,uint param_3)

{
  int iVar1;
  ulonglong *puVar2;
  uint uVar3;
  ulonglong local_res10;
  
  FUN_18049e870();
  uVar3 = (uint)param_2[1];
  if (uVar3 == 3) {
    local_res10 = *param_2 | 0xfffd800000000000;
    puVar2 = (ulonglong *)FUN_1804931f0(param_1[2],*param_1,&local_res10);
    if (*(int *)((longlong)puVar2 + 4) == 0) {
      uVar3 = ((int)*puVar2 << 8 | param_3) << 8 | 0x27;
    }
    else {
      *puVar2 = (ulonglong)*(uint *)(param_1 + 8);
      iVar1 = *(int *)(param_1 + 8);
      *(int *)(param_1 + 8) = iVar1 + 1;
      uVar3 = (iVar1 << 8 | param_3) << 8 | 0x27;
    }
  }
  else if (uVar3 == 4) {
    uVar3 = FUN_1800052ed(*param_2);
    if (uVar3 == (int)(short)uVar3) {
      uVar3 = ((uVar3 & 0xffff) << 8 | param_3) << 8 | 0x29;
    }
    else {
      puVar2 = (ulonglong *)FUN_1804931f0(param_1[2],*param_1,param_2);
      if (*(int *)((longlong)puVar2 + 4) == 0) {
        uVar3 = ((int)*puVar2 << 8 | param_3) << 8 | 0x2a;
      }
      else {
        *puVar2 = (ulonglong)*(uint *)((longlong)param_1 + 0x3c);
        iVar1 = *(int *)((longlong)param_1 + 0x3c);
        *(int *)((longlong)param_1 + 0x3c) = iVar1 + 1;
        uVar3 = (iVar1 << 8 | param_3) << 8 | 0x2a;
      }
    }
  }
  else if (uVar3 == 5) {
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 4;
    iVar1 = FUN_18049e110(param_1,*param_2 & 0x7fffffffffff,0xfffffff5);
    uVar3 = (iVar1 << 8 | param_3) << 8 | 0x28;
  }
  else {
    if (uVar3 == 0xb) {
      *(char *)(param_1[9] + 1 + (ulonglong)(uint)*param_2 * 8) = (char)param_3;
      goto LAB_1804a0e94;
    }
    if (uVar3 == 0xc) {
      if (param_3 == (uint)*param_2) goto LAB_1804a0e94;
      uVar3 = ((uint)*param_2 << 8 | param_3) << 8 | 0x12;
    }
    else {
      if (uVar3 == 0) {
        FUN_18049dbe0(param_1,param_3,1);
        goto LAB_1804a0e94;
      }
      if (2 < (int)uVar3) {
        return;
      }
      uVar3 = (uVar3 << 8 | param_3) << 8 | 0x2b;
    }
  }
  FUN_18049d010(param_1,uVar3);
LAB_1804a0e94:
  *(uint *)param_2 = param_3;
  *(uint *)(param_2 + 1) = 0xc;
  return;
}



/* ===== 1804a0eb0 FUN_1804a0eb0 ===== */

void FUN_1804a0eb0(longlong param_1,uint *param_2)

{
  if (param_2[3] == param_2[4]) {
    FUN_18049e870();
    return;
  }
  FUN_18049e870();
  if (param_2[2] == 0xc) {
    if (param_2[3] == param_2[4]) {
      return;
    }
    if (*(uint *)(param_1 + 0x38) <= *param_2) {
      FUN_1804a0bd0(param_1,param_2);
      return;
    }
  }
  FUN_1804a0b60(param_1,param_2);
  return;
}



/* ===== 1804a0f20 FUN_1804a0f20 ===== */

void FUN_1804a0f20(longlong *param_1,ulonglong *param_2,undefined4 param_3)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 uVar5;
  
  iVar1 = *(int *)((longlong)param_1 + 0x34);
  if ((iVar1 == 0x111) || (iVar1 == 0x21)) {
    uVar5 = 0x13;
  }
  else if (iVar1 == 0x2d) {
    uVar5 = 0x14;
  }
  else if (iVar1 == 0x23) {
    uVar5 = 0x15;
  }
  else {
    if (iVar1 != 0x7e) {
      switch(iVar1) {
      case 0x7b:
        FUN_18049fb80(param_1,param_2);
        return;
      case 0x7c:
      case 0x125:
        FUN_1804a4c40(param_1,param_2,0,param_3,(int)param_1[0xe]);
        return;
      default:
        FUN_18049f450(param_1,param_2);
        return;
      case 0x109:
        *(undefined4 *)(param_2 + 1) = 1;
        *(undefined4 *)param_2 = 0;
        break;
      case 0x10b:
        FUN_18049b180(param_1);
        FUN_1804a2e70(param_1,param_2,0,(int)param_1[0xe]);
        return;
      case 0x110:
        *(undefined4 *)(param_2 + 1) = 0;
        *(undefined4 *)param_2 = 0;
        break;
      case 0x116:
        *(undefined4 *)(param_2 + 1) = 2;
        *(undefined4 *)param_2 = 0;
        break;
      case 0x11a:
        lVar2 = *param_1;
        if ((*(byte *)(lVar2 + 0x58) & 2) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_18049e240(param_1,0xadd);
        }
        FUN_18049e0d0(lVar2,1);
        uVar4 = *(int *)(lVar2 + 0x34) - 1;
        uVar3 = FUN_18049d010(lVar2,((uint)*(byte *)(lVar2 + 0x59) << 8 | uVar4) << 8 | 0x2000047);
        *(undefined4 *)param_2 = uVar3;
        *(undefined4 *)(param_2 + 1) = 0xd;
        *(uint *)((longlong)param_2 + 4) = uVar4;
        break;
      case 0x129:
        lVar2 = param_1[2];
        *(undefined4 *)param_2 = 0;
        *(undefined8 *)((longlong)param_2 + 0xc) = 0xffffffffffffffff;
        *(uint *)(param_2 + 1) = ((int)(lVar2 >> 0x2f) == -0xb) + 4;
        *param_2 = param_1[2];
        FUN_18049b180(param_1);
        return;
      case 299:
        *(undefined4 *)(param_2 + 1) = 3;
        *(undefined4 *)param_2 = 0;
        *(undefined8 *)((longlong)param_2 + 0xc) = 0xffffffffffffffff;
        *param_2 = param_1[2] & 0x7fffffffffff;
        FUN_18049b180(param_1);
        return;
      }
      *(undefined8 *)((longlong)param_2 + 0xc) = 0xffffffffffffffff;
      FUN_18049b180(param_1);
      return;
    }
    uVar5 = 0x59;
  }
  FUN_18049b180();
  FUN_18049e3f0(param_1,param_2,0xc,param_3);
  FUN_18049de90(*param_1,uVar5,param_2);
  return;
}



/* ===== 1804a1220 FUN_1804a1220 ===== */

ulonglong FUN_1804a1220(longlong *param_1,int param_2)

{
  byte *pbVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong *puVar6;
  int iVar7;
  ulonglong uVar8;
  sbyte sVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  longlong local_40;
  
  lVar3 = *param_1;
  lVar4 = param_1[1];
  uVar12 = *(uint *)(lVar3 + 0x28);
  iVar7 = *(int *)(lVar3 + 0x44);
  if ((uVar12 <= *(uint *)(lVar3 + 0x2c)) ||
     ((uVar10 = *(uint *)(*(longlong *)(lVar3 + 0x48) + (ulonglong)(uVar12 - 1) * 8) & 0xff,
      1 < uVar10 - 0x43 && (3 < uVar10 - 0x49)))) {
    if ((*(byte *)(*(longlong *)(lVar3 + 0x18) + 0xd) & 8) != 0) {
      FUN_18049d010(lVar3,0x80000032);
    }
    FUN_18049d010(lVar3,0x1004b);
  }
  pbVar1 = (byte *)(*(longlong *)(lVar3 + 0x18) + 0xd);
  *pbVar1 = *pbVar1 | 0x10;
  FUN_1804a19c0(lVar3);
  if (((*(byte *)(lVar3 + 0x58) & 0x40) != 0) && (uVar13 = 1, 1 < uVar12)) {
    do {
      switch(*(uint *)(*(longlong *)(lVar3 + 0x48) + uVar13 * 8) & 0xff) {
      case 0x33:
        goto switchD_1804a12fa_caseD_33;
      case 0x43:
      case 0x44:
      case 0x49:
      case 0x4a:
      case 0x4b:
      case 0x4c:
        uVar10 = FUN_18049d010(lVar3);
        *(undefined4 *)(*(longlong *)(lVar3 + 0x48) + 4 + (ulonglong)uVar10 * 8) =
             *(undefined4 *)(*(longlong *)(lVar3 + 0x48) + 4 + uVar13 * 8);
        uVar10 = (uVar10 - (int)uVar13) + 0x7fff;
        if (0xffff < uVar10) {
                    /* WARNING: Subroutine does not return */
          FUN_18049e240(*(undefined8 *)(lVar3 + 8),0xa73);
        }
        *(uint *)(*(longlong *)(lVar3 + 0x48) + uVar13 * 8) = uVar10 * 0x10000 | 0x32;
      }
      uVar10 = (int)uVar13 + 1;
      uVar13 = (ulonglong)uVar10;
    } while (uVar10 < uVar12);
  }
switchD_1804a12fa_caseD_33:
  param_2 = param_2 - iVar7;
  uVar13 = 0;
  uVar16 = ((ulonglong)*(uint *)(lVar3 + 0x28) + (ulonglong)*(uint *)(lVar3 + 0x40) * 2) * 4 + 0x6f
           & 0xfffffffffffffff8;
  lVar11 = (ulonglong)*(uint *)(lVar3 + 0x3c) * 8 + uVar16;
  lVar15 = lVar11 + ((ulonglong)*(byte *)(lVar3 + 0x5b) + 1 & 0xfffffffffffffffe) * 2;
  sVar9 = 0;
  if (0xff < param_2) {
    sVar9 = (0xffff < param_2) + 1;
  }
  lVar14 = (ulonglong)(*(uint *)(lVar3 + 0x28) - 1 << sVar9) + lVar15;
  iVar7 = FUN_1804a17e0(param_1,lVar3,&local_40);
  iVar7 = (int)lVar14 + iVar7;
  uVar8 = FUN_1804916f0(lVar4,iVar7);
  *(undefined1 *)(uVar8 + 9) = 7;
  lVar2 = uVar8 + uVar16;
  *(int *)(uVar8 + 0x38) = iVar7;
  *(undefined2 *)(uVar8 + 0x3e) = 0;
  *(byte *)(uVar8 + 0x3d) = *(byte *)(lVar3 + 0x58) & 0x9f;
  *(undefined1 *)(uVar8 + 10) = *(undefined1 *)(lVar3 + 0x59);
  *(undefined1 *)(uVar8 + 0xb) = *(undefined1 *)(lVar3 + 0x5a);
  *(longlong *)(uVar8 + 0x40) = param_1[0xf];
  *(undefined4 *)(lVar2 + (ulonglong)(*(int *)(lVar3 + 0x40) + 1) * -8) = 0;
  uVar12 = *(uint *)(lVar3 + 0x28);
  lVar5 = *(longlong *)(lVar3 + 0x48);
  *(uint *)(uVar8 + 0xc) = uVar12;
  if (*(int *)(*(longlong *)(lVar3 + 8) + 0xb4) == 1) {
    uVar10 = 0x60;
    if ((*(byte *)(lVar3 + 0x58) & 2) != 0) {
      uVar10 = 99;
    }
  }
  else {
    uVar10 = 0x13;
  }
  *(uint *)(uVar8 + 0x68) = (uint)*(byte *)(lVar3 + 0x5a) << 8 | uVar10;
  uVar16 = 1;
  if (1 < uVar12) {
    do {
      uVar10 = (int)uVar16 + 1;
      *(undefined4 *)(uVar8 + 0x68 + uVar16 * 4) = *(undefined4 *)(lVar5 + uVar16 * 8);
      uVar16 = (ulonglong)uVar10;
    } while (uVar10 < uVar12);
  }
  FUN_1804a1610(lVar3,uVar8,lVar2);
  lVar11 = lVar11 + uVar8;
  *(longlong *)(uVar8 + 0x28) = lVar11;
  *(undefined1 *)(uVar8 + 0x3c) = *(undefined1 *)(lVar3 + 0x5b);
  FUN_180540530(lVar11,lVar3 + 0x264,(ulonglong)*(byte *)(lVar3 + 0x5b) * 2);
  lVar11 = *(longlong *)(lVar3 + 0x48);
  uVar12 = *(int *)(lVar3 + 0x28) - 1;
  iVar7 = *(int *)(lVar3 + 0x44);
  lVar15 = lVar15 + uVar8;
  *(int *)(uVar8 + 0x48) = iVar7;
  *(int *)(uVar8 + 0x4c) = param_2;
  *(longlong *)(uVar8 + 0x50) = lVar15;
  if (param_2 < 0x100) {
    do {
      *(char *)(lVar15 + uVar13) = *(char *)(lVar11 + 0xc + uVar13 * 8) - (char)iVar7;
      uVar10 = (int)uVar13 + 1;
      uVar13 = (ulonglong)uVar10;
    } while (uVar10 < uVar12);
  }
  else if (param_2 < 0x10000) {
    do {
      *(short *)(lVar15 + uVar13 * 2) = *(short *)(lVar11 + 0xc + uVar13 * 8) - (short)iVar7;
      uVar10 = (int)uVar13 + 1;
      uVar13 = (ulonglong)uVar10;
    } while (uVar10 < uVar12);
  }
  else {
    do {
      *(int *)(lVar15 + uVar13 * 4) = *(int *)(lVar11 + 0xc + uVar13 * 8) - iVar7;
      uVar10 = (int)uVar13 + 1;
      uVar13 = (ulonglong)uVar10;
    } while (uVar10 < uVar12);
  }
  lVar14 = lVar14 + uVar8;
  *(longlong *)(uVar8 + 0x58) = lVar14;
  *(longlong *)(uVar8 + 0x60) = local_40 + lVar14;
  FUN_180540530(lVar14,param_1[10],(int)param_1[8] - (int)param_1[10]);
  if ((*(byte *)(*(longlong *)(lVar4 + 0x10) + 0x93) & 1) != 0) {
    lVar15 = *(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x118);
    lVar11 = FUN_1804b8c00(lVar15,0x1c418);
    if (lVar11 != 0) {
      puVar6 = *(ulonglong **)(lVar15 + 0x28);
      *(ulonglong **)(lVar15 + 0x28) = puVar6 + 1;
      *puVar6 = uVar8 | 0xfffc000000000000;
      FUN_1804b8af0(lVar15,lVar11);
    }
  }
  *(longlong *)(lVar4 + 0x28) = *(longlong *)(lVar4 + 0x28) + -8;
  *(undefined4 *)((longlong)param_1 + 0x9c) = *(undefined4 *)(lVar3 + 0x54);
  *param_1 = *(longlong *)(lVar3 + 0x20);
  return uVar8;
}



/* ===== 1804a1610 FUN_1804a1610 ===== */

void FUN_1804a1610(longlong *param_1,longlong param_2,longlong param_3)

{
  byte bVar1;
  ushort uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ushort uVar9;
  ushort uVar10;
  ulonglong uVar11;
  uint uVar12;
  
  if ((0x10000 < *(uint *)((longlong)param_1 + 0x3c)) || (0x10000 < *(uint *)(param_1 + 8))) {
                    /* WARNING: Subroutine does not return */
    FUN_18049e200(param_1,0x10000,"constants");
  }
  *(longlong *)(param_2 + 0x20) = param_3;
  *(undefined4 *)(param_2 + 0x34) = *(undefined4 *)((longlong)param_1 + 0x3c);
  *(int *)(param_2 + 0x30) = (int)param_1[8];
  lVar3 = *param_1;
  uVar7 = 0;
  lVar4 = *(longlong *)(lVar3 + 0x10);
  if (*(int *)(lVar3 + 0x30) != 0) {
    do {
      if (*(int *)(lVar4 + 4 + uVar7 * 8) == 0) {
        *(double *)(param_3 + (ulonglong)*(uint *)(lVar4 + uVar7 * 8) * 8) = (double)uVar7;
      }
      uVar6 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar6;
    } while (uVar6 < *(uint *)(lVar3 + 0x30));
  }
  uVar6 = *(uint *)(lVar3 + 0x34);
  uVar7 = 0;
  lVar3 = *(longlong *)(lVar3 + 0x28);
  do {
    if (*(int *)(lVar3 + 4 + uVar7 * 0x18) == 0) {
      uVar11 = *(ulonglong *)(lVar3 + 8 + uVar7 * 0x18);
      uVar8 = (ulonglong)*(uint *)(lVar3 + uVar7 * 0x18);
      if ((uint)((longlong)uVar11 >> 0x2f) < 0xfffffff2) {
        *(ulonglong *)(param_3 + uVar8 * 8) = uVar11;
      }
      else {
        uVar11 = uVar11 & 0x7fffffffffff;
        *(ulonglong *)(param_3 + ~uVar8 * 8) = uVar11;
        if (((*(byte *)(uVar11 + 8) & 3) != 0) && ((*(byte *)(param_2 + 8) & 4) != 0)) {
          FUN_1804908e0(*(undefined8 *)(param_1[2] + 0x10),param_2);
        }
        if ((int)((longlong)*(undefined8 *)(lVar3 + 8 + uVar7 * 0x18) >> 0x2f) == -8) {
          uVar8 = 0;
          bVar1 = *(byte *)(uVar11 + 0x3c);
          lVar4 = *(longlong *)(uVar11 + 0x28);
          lVar5 = *(longlong *)(param_1[1] + 0x90);
          if (bVar1 != 0) {
            do {
              uVar2 = *(ushort *)(lVar4 + uVar8 * 2);
              if (uVar2 < 0xffc4) {
                uVar9 = (ushort)*(byte *)(lVar5 + 0x10 + (ulonglong)uVar2 * 0x18);
                uVar10 = uVar9 | 0xc000;
                if ((*(byte *)(lVar5 + 0x11 + (ulonglong)uVar2 * 0x18) & 1) != 0) {
                  uVar10 = uVar9 | 0x8000;
                }
              }
              else {
                uVar10 = uVar2 + 0x3c;
              }
              *(ushort *)(lVar4 + uVar8 * 2) = uVar10;
              uVar12 = (int)uVar8 + 1;
              uVar8 = (ulonglong)uVar12;
            } while (uVar12 < bVar1);
          }
        }
      }
    }
    uVar12 = (int)uVar7 + 1;
    uVar7 = (ulonglong)uVar12;
  } while (uVar12 <= uVar6);
  return;
}



/* ===== 1804a17e0 FUN_1804a17e0 ===== */

int FUN_1804a17e0(longlong param_1,longlong param_2,ulonglong *param_3)

{
  ulonglong *puVar1;
  byte bVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 *puVar6;
  longlong lVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  ulonglong *puVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  int iVar14;
  
  uVar4 = *(ulonglong *)(param_1 + 0x50);
  lVar7 = *(longlong *)(param_1 + 0x90);
  *(ulonglong *)(param_1 + 0x40) = uVar4;
  bVar2 = *(byte *)(param_2 + 0x5b);
  if (bVar2 != 0) {
    uVar9 = 0;
    uVar13 = uVar4;
    do {
      lVar5 = *(longlong *)(lVar7 + (ulonglong)*(ushort *)(param_2 + 0x1ec + uVar9 * 2) * 0x18);
      uVar11 = *(int *)(lVar5 + 0x14) + 1;
      uVar12 = (ulonglong)uVar11;
      if ((uint)(*(int *)(param_1 + 0x48) - (int)uVar13) < uVar11) {
        uVar4 = FUN_1804a9db0(param_1 + 0x40,uVar12);
      }
      lVar5 = FUN_180540530(uVar4,lVar5 + 0x18,uVar12);
      uVar11 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar11;
      uVar4 = lVar5 + uVar12;
      *(ulonglong *)(param_1 + 0x40) = uVar4;
      uVar13 = uVar4 & 0xffffffff;
    } while (uVar11 < bVar2);
  }
  *param_3 = (ulonglong)(uint)((int)uVar4 - *(int *)(param_1 + 0x50));
  puVar1 = (ulonglong *)(lVar7 + (ulonglong)*(uint *)(param_1 + 0x9c) * 0x18);
  puVar10 = (ulonglong *)(lVar7 + (ulonglong)*(uint *)(param_2 + 0x54) * 0x18);
  if (puVar10 < puVar1) {
    iVar14 = 0;
    do {
      if ((*(byte *)((longlong)puVar10 + 0x11) & 6) == 0) {
        uVar11 = *(int *)(param_1 + 0x48) - *(int *)(param_1 + 0x40);
        uVar4 = *puVar10;
        if (uVar4 < 7) {
          if (uVar11 < 0xb) {
            puVar6 = (undefined1 *)FUN_1804a9db0(param_1 + 0x40,0xb);
            *puVar6 = (char)uVar4;
            puVar6 = puVar6 + 1;
          }
          else {
            puVar6 = *(undefined1 **)(param_1 + 0x40);
            *puVar6 = (char)uVar4;
            puVar6 = puVar6 + 1;
          }
        }
        else {
          iVar3 = *(int *)(uVar4 + 0x14);
          if (uVar11 < iVar3 + 0xbU) {
            uVar8 = FUN_1804a9db0(param_1 + 0x40);
          }
          else {
            uVar8 = *(undefined8 *)(param_1 + 0x40);
          }
          uVar11 = iVar3 + 1;
          lVar7 = FUN_180540530(uVar8,uVar4 + 0x18,uVar11);
          puVar6 = (undefined1 *)((ulonglong)uVar11 + lVar7);
        }
        iVar3 = (int)puVar10[1];
        uVar8 = FUN_180499630(puVar6,iVar3 - iVar14);
        uVar8 = FUN_180499630(uVar8,*(int *)((longlong)puVar10 + 0xc) - iVar3);
        *(undefined8 *)(param_1 + 0x40) = uVar8;
        iVar14 = iVar3;
      }
      puVar10 = puVar10 + 3;
    } while (puVar10 < puVar1);
  }
  if (*(int *)(param_1 + 0x48) == *(int *)(param_1 + 0x40)) {
    puVar6 = (undefined1 *)FUN_1804a9db0(param_1 + 0x40,1);
  }
  else {
    puVar6 = *(undefined1 **)(param_1 + 0x40);
  }
  *puVar6 = 0;
  *(undefined1 **)(param_1 + 0x40) = puVar6 + 1;
  return (int)(puVar6 + 1) - *(int *)(param_1 + 0x50);
}



/* ===== 1804a19c0 FUN_1804a19c0 ===== */

void FUN_1804a19c0(longlong param_1)

{
  byte bVar1;
  uint uVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  
  puVar3 = *(undefined8 **)(param_1 + 0x18);
  plVar4 = *(longlong **)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x18) = *puVar3;
  lVar5 = *plVar4;
  bVar1 = *(byte *)((longlong)puVar3 + 0xc);
  uVar2 = *(uint *)(lVar5 + 0x38);
  while (bVar1 < uVar2) {
    *(uint *)(lVar5 + 0x38) = uVar2 - 1;
    lVar6 = plVar4[0x12];
    uVar9 = (ulonglong)*(ushort *)(lVar5 + 0x5c + (ulonglong)(uVar2 - 1) * 2);
    uVar7 = *(ulonglong *)(lVar6 + uVar9 * 0x18);
    if (uVar7 < 7) {
      *(undefined4 *)(lVar6 + 0xc + uVar9 * 0x18) = *(undefined4 *)(lVar5 + 0x28);
    }
    else {
      uVar2 = *(uint *)(uVar7 + 0xc);
      *(undefined4 *)(lVar6 + 0xc + uVar9 * 0x18) = *(undefined4 *)(lVar5 + 0x28);
      *(undefined2 *)((longlong)plVar4 + (ulonglong)(uVar2 & 0x1f) * 2 + 0xb8) =
           *(undefined2 *)(lVar6 + 0x12 + uVar9 * 0x18);
    }
    uVar2 = *(uint *)(lVar5 + 0x38);
  }
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x38);
  if ((*(byte *)((longlong)puVar3 + 0xd) & 0x18) == 8) {
    FUN_18049d010(param_1,(uint)*(byte *)((longlong)puVar3 + 0xc) << 8 | 0x80000032);
  }
  if ((*(byte *)((longlong)puVar3 + 0xd) & 3) == 3) {
    *(byte *)((longlong)puVar3 + 0xd) = *(byte *)((longlong)puVar3 + 0xd) & 0xfd;
    uVar8 = FUN_1804a1d30(plVar4,1,4,*(undefined4 *)(param_1 + 0x28));
    *(undefined4 *)((longlong)plVar4 + 0x9c) = uVar8;
    FUN_1804a1df0(plVar4,puVar3,uVar8);
  }
  if ((*(byte *)((longlong)puVar3 + 0xd) & 0x26) != 0) {
    FUN_1804a1b60(plVar4,puVar3);
  }
  return;
}



/* ===== 1804a1ac0 FUN_1804a1ac0 ===== */

void FUN_1804a1ac0(longlong *param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  
  lVar2 = *param_1;
  uVar1 = *(uint *)(param_2 + 8);
  uVar6 = (ulonglong)uVar1;
  lVar3 = *(longlong *)(lVar2 + 0x48);
  *(undefined1 *)(lVar3 + 1 + uVar6 * 8) = *(undefined1 *)(param_2 + 0x10);
  if (*(char *)(lVar3 + uVar6 * 8) == 'X') {
    uVar5 = *(uint *)(*(longlong *)(lVar2 + 0x48) + uVar6 * 8) >> 0x10;
    if ((uVar5 != 0x7fff) && (iVar4 = uVar1 + uVar5, iVar4 != 0x7ffe)) {
      iVar4 = iVar4 + -0x7fff;
      if (uVar1 == *(uint *)(lVar2 + 0x28)) {
        *(uint *)(lVar2 + 0x2c) = *(uint *)(lVar2 + 0x28);
        FUN_1804a1f10(lVar2,lVar2 + 0x30,iVar4);
      }
      else {
        FUN_1804a2120(lVar2,iVar4,uVar1,0xff,uVar1);
      }
    }
    *(undefined2 *)(lVar3 + 2 + uVar6 * 8) = 0x7fff;
    *(undefined1 *)(lVar3 + uVar6 * 8) = 0x32;
  }
  return;
}



/* ===== 1804a1b60 FUN_1804a1b60 ===== */

void FUN_1804a1b60(longlong *param_1,longlong *param_2)

{
  byte *pbVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  byte bVar6;
  longlong *plVar7;
  longlong *plVar8;
  ulonglong uVar9;
  
  plVar8 = (longlong *)(param_1[0x12] + (ulonglong)*(uint *)(param_2 + 1) * 0x18);
  plVar2 = (longlong *)(param_1[0x12] + (ulonglong)*(uint *)((longlong)param_1 + 0x9c) * 0x18);
  do {
    if (plVar2 <= plVar8) {
      return;
    }
    for (; lVar4 = *plVar8, lVar4 != 0; plVar8 = plVar8 + 3) {
      if ((*(byte *)((longlong)plVar8 + 0x11) & 4) == 0) {
        if ((*(byte *)((longlong)plVar8 + 0x11) & 2) != 0) {
          if (*param_2 == 0) {
            *(undefined4 *)(param_1 + 0xe) =
                 *(undefined4 *)
                  (*(longlong *)(*param_1 + 0x48) + 4 + (ulonglong)*(uint *)(plVar8 + 1) * 8);
            if (lVar4 == 1) {
                    /* WARNING: Subroutine does not return */
              FUN_18049b070(param_1,0,0xb2a);
            }
            if (lVar4 == 2) {
                    /* WARNING: Subroutine does not return */
              FUN_18049b070(param_1,0,0xb3b);
            }
                    /* WARNING: Subroutine does not return */
            FUN_18049b070(param_1,0,0xb4f,lVar4 + 0x18);
          }
          if (lVar4 == 1) {
            bVar6 = 2;
          }
          else {
            bVar6 = 4;
            if (lVar4 == 2) {
              bVar6 = 0x20;
            }
          }
          pbVar1 = (byte *)(*param_2 + 0xd);
          *pbVar1 = *pbVar1 | bVar6;
          *(undefined1 *)(plVar8 + 2) = *(undefined1 *)((longlong)param_2 + 0xc);
          if ((*(byte *)((longlong)param_2 + 0xd) & 8) != 0) {
            FUN_1804a1ac0(param_1,plVar8);
          }
        }
        break;
      }
      plVar7 = plVar8 + 3;
      *plVar8 = 0;
      if (plVar2 <= plVar7) break;
      do {
        if ((*plVar7 == lVar4) && ((*(byte *)((longlong)plVar7 + 0x11) & 2) != 0)) {
          if (((*(byte *)((longlong)param_2 + 0xd) & 8) != 0) &&
             (*(byte *)(plVar8 + 2) < *(byte *)(plVar7 + 2))) {
            FUN_1804a1ac0(param_1,plVar7);
          }
          lVar5 = *param_1;
          uVar9 = (ulonglong)*(uint *)(plVar7 + 1);
          *plVar7 = 0;
          *(char *)(*(longlong *)(lVar5 + 0x48) + 1 + uVar9 * 8) = (char)plVar8[2];
          iVar3 = (int)plVar8[1];
          if (iVar3 == *(int *)(lVar5 + 0x28)) {
            *(int *)(lVar5 + 0x2c) = *(int *)(lVar5 + 0x28);
            FUN_1804a1f10(lVar5,lVar5 + 0x30,uVar9);
          }
          else {
            FUN_1804a2120(lVar5,uVar9,iVar3,0xff,iVar3);
          }
        }
        plVar7 = plVar7 + 3;
      } while (plVar7 < plVar2);
    }
    plVar8 = plVar8 + 3;
  } while( true );
}



/* ===== 1804a1d30 FUN_1804a1d30 ===== */

uint FUN_1804a1d30(longlong *param_1,undefined8 param_2,undefined1 param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)((longlong)param_1 + 0x9c);
  uVar5 = (ulonglong)uVar1;
  lVar3 = *param_1;
  uVar2 = *(uint *)(param_1 + 0x13);
  if (uVar2 <= uVar1) {
    if (0xffc3 < uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_18049b070(param_1,0,0x9d9);
    }
    lVar4 = FUN_180491670(param_1[1],param_1[0x12],param_1 + 0x13,0xffc4,0x18);
    param_1[0x12] = lVar4;
  }
  *(undefined8 *)(param_1[0x12] + uVar5 * 0x18) = param_2;
  *(undefined4 *)(param_1[0x12] + 8 + uVar5 * 0x18) = param_4;
  *(undefined1 *)(param_1[0x12] + 0x10 + uVar5 * 0x18) = *(undefined1 *)(lVar3 + 0x38);
  *(undefined1 *)(param_1[0x12] + 0x11 + uVar5 * 0x18) = param_3;
  *(uint *)((longlong)param_1 + 0x9c) = uVar1 + 1;
  return uVar1;
}



/* ===== 1804a1df0 FUN_1804a1df0 ===== */

void FUN_1804a1df0(longlong *param_1,longlong param_2,ulonglong param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong *plVar5;
  longlong lVar6;
  
  plVar5 = (longlong *)(param_1[0x12] + (ulonglong)*(uint *)(param_2 + 8) * 0x18);
  plVar1 = (longlong *)(param_1[0x12] + (param_3 & 0xffffffff) * 0x18);
  do {
    if (plVar1 <= plVar5) {
      return;
    }
    if ((*plVar5 == *plVar1) && ((*(byte *)((longlong)plVar5 + 0x11) & 2) != 0)) {
      lVar3 = *param_1;
      if (*(byte *)(plVar5 + 2) < *(byte *)(plVar1 + 2)) {
        lVar6 = *(longlong *)
                 (param_1[0x12] +
                 (ulonglong)*(ushort *)(lVar3 + 0x5c + (ulonglong)*(byte *)(plVar5 + 2) * 2) * 0x18)
                + 0x18;
        *(undefined4 *)(param_1 + 0xe) =
             *(undefined4 *)(*(longlong *)(lVar3 + 0x48) + 4 + (ulonglong)*(uint *)(plVar5 + 1) * 8)
        ;
        if (*plVar5 == 2) {
                    /* WARNING: Subroutine does not return */
          FUN_18049b070(param_1,0,0xba6,lVar6);
        }
                    /* WARNING: Subroutine does not return */
        FUN_18049b070(param_1,0,0xb79,*plVar5 + 0x18,lVar6);
      }
      uVar4 = (ulonglong)*(uint *)(plVar5 + 1);
      *plVar5 = 0;
      *(char *)(*(longlong *)(lVar3 + 0x48) + 1 + uVar4 * 8) = (char)plVar1[2];
      iVar2 = (int)plVar1[1];
      if (iVar2 == *(int *)(lVar3 + 0x28)) {
        *(int *)(lVar3 + 0x2c) = *(int *)(lVar3 + 0x28);
        FUN_1804a1f10(lVar3,lVar3 + 0x30,uVar4);
      }
      else {
        FUN_1804a2120(lVar3,uVar4,iVar2,0xff,iVar2);
      }
    }
    plVar5 = plVar5 + 3;
  } while( true );
}



/* ===== 1804a1f10 FUN_1804a1f10 ===== */

void FUN_1804a1f10(longlong param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  if (param_3 != 0xffffffff) {
    uVar1 = *param_2;
    if (uVar1 == 0xffffffff) {
      *param_2 = param_3;
      return;
    }
    while( true ) {
      uVar2 = *(uint *)(*(longlong *)(param_1 + 0x48) + (ulonglong)uVar1 * 8) >> 0x10;
      if ((uVar2 == 0x7fff) || (iVar3 = uVar2 + uVar1, iVar3 == 0x7ffe)) break;
      uVar1 = iVar3 - 0x7fff;
    }
    uVar2 = (param_3 - uVar1) + 0x7fff;
    if (0xffff < uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_18049e240(*(undefined8 *)(param_1 + 8),0x99b);
    }
    *(short *)(*(longlong *)(param_1 + 0x48) + 2 + (ulonglong)uVar1 * 8) = (short)uVar2;
  }
  return;
}



/* ===== 1804a1fa0 FUN_1804a1fa0 ===== */

void FUN_1804a1fa0(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  uint uVar2;
  longlong lVar3;
  
  if (param_2 != 0xffffffff) {
    lVar3 = *(longlong *)(param_1 + 0x48);
    do {
      uVar2 = param_2 - 1;
      if (param_2 == 0) {
        uVar2 = 0;
      }
      uVar1 = (ulonglong)uVar2;
      uVar2 = *(uint *)(lVar3 + uVar1 * 8);
      if ((uVar2 & 0xff) - 0xc < 2) {
        *(undefined1 *)(lVar3 + 1 + uVar1 * 8) = 0;
        *(char *)(lVar3 + uVar1 * 8) = (char)uVar2 + '\x02';
      }
      else if ((char)(uVar2 >> 8) == -1) {
        *(uint *)(lVar3 + uVar1 * 8) =
             (uint)*(byte *)(lVar3 + 1 + (ulonglong)param_2 * 8) << 8 | 0x80000058;
      }
      lVar3 = *(longlong *)(param_1 + 0x48);
      uVar2 = *(uint *)(lVar3 + (ulonglong)param_2 * 8) >> 0x10;
    } while ((uVar2 != 0x7fff) && (param_2 = (param_2 - 0x7fff) + uVar2, param_2 != 0xffffffff));
  }
  return;
}



/* ===== 1804a2020 FUN_1804a2020 ===== */

undefined8 FUN_1804a2020(longlong param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 != 0xffffffff) {
    do {
      uVar1 = param_2 - 1;
      if (param_2 == 0) {
        uVar1 = 0;
      }
      uVar1 = *(uint *)(*(longlong *)(param_1 + 0x48) + (ulonglong)uVar1 * 8);
      if ((1 < (uVar1 & 0xff) - 0xc) && ((uVar1 & 0xff00) != 0xff00)) {
        return 1;
      }
      uVar1 = *(uint *)(*(longlong *)(param_1 + 0x48) + (ulonglong)param_2 * 8) >> 0x10;
    } while ((uVar1 != 0x7fff) && (param_2 = (param_2 - 0x7fff) + uVar1, param_2 != 0xffffffff));
  }
  return 0;
}



/* ===== 1804a2080 FUN_1804a2080 ===== */

undefined8 FUN_1804a2080(longlong param_1,uint param_2,uint param_3)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  char cVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x48);
  uVar2 = param_2 - 1;
  if (param_2 == 0) {
    uVar2 = 0;
  }
  uVar3 = (ulonglong)uVar2;
  uVar2 = *(uint *)(lVar1 + uVar3 * 8);
  cVar4 = (char)param_3;
  if ((uVar2 & 0xff) - 0xc < 2) {
    if ((param_3 != 0xff) && (param_3 != uVar2 >> 0x10)) {
      *(char *)(lVar1 + 1 + uVar3 * 8) = cVar4;
      return 1;
    }
    *(undefined1 *)(lVar1 + 1 + uVar3 * 8) = 0;
    *(char *)(lVar1 + uVar3 * 8) = (char)uVar2 + '\x02';
  }
  else {
    if ((char)(uVar2 >> 8) != -1) {
      return 0;
    }
    if (param_3 == 0xff) {
      *(uint *)(lVar1 + uVar3 * 8) =
           (uint)*(byte *)(lVar1 + 1 + (ulonglong)param_2 * 8) << 8 | 0x80000058;
      return 1;
    }
    *(char *)(lVar1 + 1 + uVar3 * 8) = cVar4;
    if (*(byte *)(lVar1 + 9 + uVar3 * 8) <= param_3) {
      *(char *)(lVar1 + 9 + uVar3 * 8) = cVar4 + '\x01';
      return 1;
    }
  }
  return 1;
}



/* ===== 1804a2120 FUN_1804a2120 ===== */

void FUN_1804a2120(longlong param_1,ulonglong param_2,int param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar2 = (uint)param_2;
  do {
    if (uVar2 == 0xffffffff) {
      return;
    }
    uVar4 = param_2 & 0xffffffff;
    uVar2 = *(uint *)(*(longlong *)(param_1 + 0x48) + uVar4 * 8) >> 0x10;
    if (uVar2 == 0x7fff) {
      uVar2 = 0xffffffff;
    }
    else {
      uVar2 = (int)param_2 + -0x7fff + uVar2;
    }
    iVar1 = FUN_1804a2080(param_1,param_2,param_4);
    if (iVar1 == 0) {
      uVar3 = (param_5 - (int)param_2) + 0x7fff;
      if (0xffff < uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_18049e240(*(undefined8 *)(param_1 + 8),0x99b);
      }
    }
    else {
      uVar3 = (param_3 - (int)param_2) + 0x7fff;
      if (0xffff < uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_18049e240(*(undefined8 *)(param_1 + 8),0x99b);
      }
    }
    param_2 = (ulonglong)uVar2;
    *(short *)(*(longlong *)(param_1 + 0x48) + 2 + uVar4 * 8) = (short)uVar3;
  } while( true );
}



/* ===== 1804a21f0 FUN_1804a21f0 ===== */

void FUN_1804a21f0(longlong param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(int *)(param_1 + 0x34) == param_2) {
    FUN_18049b180();
    return;
  }
  if (param_4 == *(int *)(param_1 + 0x70)) {
                    /* WARNING: Subroutine does not return */
    FUN_18049e250();
  }
  uVar1 = FUN_18049b3d0();
  uVar2 = FUN_18049b3d0(param_1,param_3);
                    /* WARNING: Subroutine does not return */
  FUN_18049b070(param_1,*(undefined4 *)(param_1 + 0x34),0xa4a,uVar1,uVar2,param_4);
}



/* ===== 1804a2270 FUN_1804a2270 ===== */

ulonglong FUN_1804a2270(longlong param_1)

{
  ulonglong uVar1;
  
  if ((*(int *)(param_1 + 0x34) != 0x12a) && (1 < *(int *)(param_1 + 0x34) - 0x103U)) {
                    /* WARNING: Subroutine does not return */
    FUN_18049e250(param_1,0x12a);
  }
  uVar1 = *(ulonglong *)(param_1 + 0x10);
  FUN_18049b180();
  return uVar1 & 0x7fffffffffff;
}



/* ===== 1804a22c0 FUN_1804a22c0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1804a22c0(longlong *param_1)

{
  char *_Str;
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  size_t sVar5;
  ulonglong uVar6;
  undefined1 auStack_338 [32];
  undefined8 local_318;
  undefined4 local_310;
  undefined1 local_30c;
  undefined1 local_30b;
  ulonglong local_308;
  longlong *local_300;
  longlong local_2f8;
  undefined8 *local_2f0;
  longlong local_2e8;
  undefined8 local_2e0;
  undefined4 local_2d8;
  undefined8 local_2d4;
  undefined8 local_2cc;
  undefined4 local_2c4;
  undefined8 local_2c0;
  undefined4 local_2b8;
  undefined4 local_2b4;
  byte local_2b0;
  undefined1 local_2af;
  undefined2 local_2ae;
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_338;
  _Str = (char *)param_1[0x10];
  lVar1 = param_1[1];
  sVar5 = strlen(_Str);
  uVar6 = FUN_180491d30(lVar1,_Str,sVar5);
  param_1[0xf] = uVar6;
  **(ulonglong **)(lVar1 + 0x28) = uVar6 | 0xfffd800000000000;
  *(longlong *)(lVar1 + 0x28) = *(longlong *)(lVar1 + 0x28) + 8;
  if (*(ulonglong *)(lVar1 + 0x30) <= *(ulonglong *)(lVar1 + 0x28)) {
    FUN_18048ea20(lVar1);
  }
  lVar3 = _UNK_1808adf98;
  lVar2 = _DAT_1808adf90;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0;
  param_1[0x17] = lVar2;
  param_1[0x18] = lVar3;
  param_1[0x19] = lVar2;
  param_1[0x1a] = lVar3;
  local_2e0 = 0;
  param_1[0x1b] = lVar2;
  param_1[0x1c] = lVar3;
  local_2d8 = 0xffffffff;
  param_1[0x1d] = lVar2;
  param_1[0x1e] = lVar3;
  local_2e8 = *param_1;
  lVar2 = param_1[1];
  *param_1 = (longlong)&local_308;
  local_2b4 = *(undefined4 *)((longlong)param_1 + 0x9c);
  local_2d4 = 0;
  local_2cc = 0;
  local_2ae = 1;
  local_2f0 = (undefined8 *)0x0;
  local_2b0 = 0;
  local_300 = param_1;
  local_2f8 = lVar2;
  local_308 = FUN_180492ab0(lVar2,0,0);
  **(ulonglong **)(lVar2 + 0x28) = local_308 | 0xfffa000000000000;
  *(longlong *)(lVar2 + 0x28) = *(longlong *)(lVar2 + 0x28) + 8;
  if (*(ulonglong *)(lVar2 + 0x30) <= *(ulonglong *)(lVar2 + 0x28)) {
    FUN_18048ea20(lVar2);
  }
  local_2b0 = local_2b0 | 2;
  local_30c = local_2d4._4_1_;
  local_2c4 = 0;
  local_2af = 0;
  local_2c0 = 0;
  local_2b8 = 0;
  local_30b = 0;
  local_310 = *(undefined4 *)((longlong)local_300 + 0x9c);
  local_318 = local_2f0;
  local_2f0 = &local_318;
  FUN_18049d010(&local_308,99);
  FUN_18049b180(param_1);
  *(int *)((longlong)param_1 + 0xac) = *(int *)((longlong)param_1 + 0xac) + 1;
  if (199 < *(uint *)((longlong)param_1 + 0xac)) {
                    /* WARNING: Subroutine does not return */
    FUN_18049b070(param_1,0,0x8e4);
  }
  do {
    iVar4 = *(int *)((longlong)param_1 + 0x34);
    if ((((iVar4 == 0x106) || (iVar4 == 0x107)) || (iVar4 == 0x108)) ||
       ((iVar4 == 0x117 || (iVar4 == 300)))) break;
    iVar4 = FUN_1804a4ec0(param_1);
    if (*(int *)((longlong)param_1 + 0x34) == 0x3b) {
      FUN_18049b180(param_1);
    }
    *(undefined4 *)(*param_1 + 0x34) = *(undefined4 *)(*param_1 + 0x38);
  } while (iVar4 == 0);
  *(int *)((longlong)param_1 + 0xac) = *(int *)((longlong)param_1 + 0xac) + -1;
  if (*(int *)((longlong)param_1 + 0x34) != 300) {
                    /* WARNING: Subroutine does not return */
    FUN_18049e250(param_1,300);
  }
  FUN_1804a1220(param_1,(int)param_1[0xe]);
  *(longlong *)(lVar1 + 0x28) = *(longlong *)(lVar1 + 0x28) + -8;
  return;
}



/* ===== 1804a2520 FUN_1804a2520 ===== */

void FUN_1804a2520(undefined8 *param_1,ulonglong *param_2,ulonglong param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  uVar1 = param_1[1];
  *param_2 = param_3 | 0xfffa800000000000;
  puVar2 = (undefined8 *)FUN_1804931f0(uVar1,*(undefined8 *)*param_1,param_2);
  *puVar2 = 0xfffeffffffffffff;
  return;
}



/* ===== 1804a2560 FUN_1804a2560 ===== */

undefined8 FUN_1804a2560(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  lVar1 = param_1[1];
  uVar2 = FUN_180491d30(lVar1);
  plVar3 = (longlong *)FUN_180493400(lVar1,*(undefined8 *)*param_1,uVar2);
  if (*plVar3 == -1) {
    *plVar3 = -0x1000000000001;
  }
  if (*(ulonglong *)(*(longlong *)(lVar1 + 0x10) + 0x18) <=
      *(ulonglong *)(*(longlong *)(lVar1 + 0x10) + 0x10)) {
    FUN_180491200(lVar1);
  }
  return uVar2;
}



/* ===== 1804a25d0 FUN_1804a25d0 ===== */

void FUN_1804a25d0(longlong *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  ulonglong *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  uint uVar14;
  char cVar15;
  uint uVar16;
  int iVar17;
  ulonglong local_res8;
  uint *local_res10;
  uint local_res18;
  int local_res20;
  undefined8 in_stack_ffffffffffffff88;
  undefined4 uVar18;
  undefined8 local_68;
  int local_60;
  undefined8 local_5c;
  
  uVar18 = (undefined4)((ulonglong)in_stack_ffffffffffffff88 >> 0x20);
  iVar7 = *(int *)((longlong)param_1 + 0x34);
  iVar17 = (int)param_1[0xe];
  puVar3 = (undefined8 *)*param_1;
  local_res10 = param_2;
  local_res20 = iVar17;
  if (iVar7 == 0x28) {
    FUN_18049b180();
    if (*(int *)((longlong)param_1 + 0x34) == 0x29) {
      local_60 = 0xf;
    }
    else {
      FUN_18049f310(param_1,&local_68);
      if (local_60 == 0xd) {
        *(undefined1 *)(puVar3[9] + 3 + (local_68 & 0xffffffff) * 8) = 0;
      }
    }
    if (*(int *)((longlong)param_1 + 0x34) != 0x29) {
      if (iVar17 == (int)param_1[0xe]) {
                    /* WARNING: Subroutine does not return */
        FUN_18049e250();
      }
      uVar12 = FUN_18049b3d0(param_1,0x29);
      uVar13 = FUN_18049b3d0(param_1,0x28);
                    /* WARNING: Subroutine does not return */
      FUN_18049b070(param_1,*(undefined4 *)((longlong)param_1 + 0x34),0xa4a,uVar12,uVar13,iVar17);
    }
LAB_1804a268d:
    FUN_18049b180(param_1);
  }
  else {
    if (iVar7 != 0x7b) {
      if (iVar7 != 299) {
                    /* WARNING: Subroutine does not return */
        FUN_18049e240(param_1,0xaaf);
      }
      local_68 = param_1[2] & 0x7fffffffffff;
      local_60 = 3;
      local_5c = 0xffffffffffffffff;
      goto LAB_1804a268d;
    }
    FUN_18049fb80(param_1,&local_68);
  }
  uVar16 = *param_2;
  local_res18 = uVar16;
  if (local_60 == 0xd) {
    uVar14 = ((((local_68._4_4_ - *(int *)((longlong)param_1 + 0xb4)) - uVar16) + -1) * 0x100 |
             uVar16) << 8 | 0x2000041;
    goto LAB_1804a2b19;
  }
  if (local_60 != 0xf) {
    if (local_60 == 7) {
      uVar14 = (uint)local_68 << 0x10 | 0x2d;
LAB_1804a279c:
      uVar5 = FUN_18049d010(puVar3,uVar14);
      local_68 = CONCAT44(local_68._4_4_,uVar5);
      local_60 = 0xb;
    }
    else {
      if (local_60 == 8) {
        local_res8 = local_68 | 0xfffd800000000000;
        puVar9 = (ulonglong *)FUN_1804931f0(puVar3[2],*puVar3,&local_res8);
        if (*(int *)((longlong)puVar9 + 4) == 0) {
          uVar14 = (int)*puVar9 << 0x10 | 0x36;
        }
        else {
          *puVar9 = (ulonglong)*(uint *)(puVar3 + 8);
          uVar14 = *(int *)(puVar3 + 8) << 0x10 | 0x36;
          *(int *)(puVar3 + 8) = *(int *)(puVar3 + 8) + 1;
        }
        goto LAB_1804a279c;
      }
      if (local_60 == 9) {
        if ((longlong)local_68 < 0) {
          uVar14 = ((uint)local_68 << 8 | ~local_68._4_4_) << 0x10 | 0x39;
        }
        else if (local_68._4_4_ < 0x100) {
          if (*(uint *)(puVar3 + 7) <= local_68._4_4_) {
            *(int *)((longlong)puVar3 + 0x34) = *(int *)((longlong)puVar3 + 0x34) + -1;
          }
          uVar14 = ((uint)local_68 << 8 | local_68._4_4_) << 0x10 | 0x38;
        }
        else {
          uVar14 = (local_68._4_4_ - 0x100 | (uint)local_68 << 8) << 0x10 | 0x3a;
        }
        if (*(uint *)(puVar3 + 7) <= (uint)local_68) {
          *(int *)((longlong)puVar3 + 0x34) = *(int *)((longlong)puVar3 + 0x34) + -1;
        }
        goto LAB_1804a279c;
      }
      if (local_60 == 0xe) {
        local_68 = CONCAT44(local_68._4_4_,local_68._4_4_);
LAB_1804a27c7:
        local_60 = 0xc;
LAB_1804a27ce:
        if (*(uint *)(puVar3 + 7) <= (uint)local_68) {
          *(int *)((longlong)puVar3 + 0x34) = *(int *)((longlong)puVar3 + 0x34) + -1;
        }
      }
      else {
        if (local_60 == 6) goto LAB_1804a27c7;
        if (local_60 == 0xc) goto LAB_1804a27ce;
      }
    }
    uVar1 = *(uint *)((longlong)puVar3 + 0x34);
    uVar14 = uVar1 + 1;
    if (*(byte *)((longlong)puVar3 + 0x5a) < uVar14) {
      if (0xf9 < uVar14) {
                    /* WARNING: Subroutine does not return */
        FUN_18049e240(puVar3[1],0x9b6);
      }
      *(char *)((longlong)puVar3 + 0x5a) = (char)uVar14;
    }
    *(uint *)((longlong)puVar3 + 0x34) = uVar14;
    FUN_1804a0d10(puVar3,&local_68,uVar1);
    if ((local_60 == 10) && ((uint)local_68 != 0xffffffff)) {
      if ((uint)local_5c != 0xffffffff) {
        uVar14 = (uint)local_5c;
        while( true ) {
          uVar6 = *(uint *)(puVar3[9] + (ulonglong)uVar14 * 8) >> 0x10;
          if ((uVar6 == 0x7fff) || (iVar7 = uVar6 + uVar14, iVar7 == 0x7ffe)) break;
          uVar14 = iVar7 - 0x7fff;
        }
        uVar6 = ((uint)local_68 - uVar14) + 0x7fff;
        if (0xffff < uVar6) {
                    /* WARNING: Subroutine does not return */
          FUN_18049e240(puVar3[1],0x99b);
        }
        *(short *)(puVar3[9] + 2 + (ulonglong)uVar14 * 8) = (short)uVar6;
        goto LAB_1804a2875;
      }
      local_5c = CONCAT44(local_5c._4_4_,(uint)local_68);
      uVar14 = (uint)local_68;
    }
    else {
LAB_1804a2875:
      uVar14 = (uint)local_5c;
    }
    if (uVar14 != local_5c._4_4_) {
      if (uVar14 != 0xffffffff) {
        do {
          uVar16 = uVar14 - 1;
          if (uVar14 == 0) {
            uVar16 = 0;
          }
          uVar16 = *(uint *)(puVar3[9] + (ulonglong)uVar16 * 8);
          if ((1 < (uVar16 & 0xff) - 0xc) && ((uVar16 & 0xff00) != 0xff00)) goto LAB_1804a297f;
          uVar16 = *(uint *)(puVar3[9] + (ulonglong)uVar14 * 8) >> 0x10;
        } while ((uVar16 != 0x7fff) && (uVar14 = (uVar14 - 0x7fff) + uVar16, uVar14 != 0xffffffff));
      }
      if (local_5c._4_4_ != 0xffffffff) {
        uVar16 = local_5c._4_4_;
        do {
          uVar10 = (ulonglong)(uVar16 - 1);
          if (uVar16 == 0) {
            uVar10 = 0;
          }
          uVar14 = *(uint *)(puVar3[9] + uVar10 * 8);
          if ((1 < (uVar14 & 0xff) - 0xc) && ((uVar14 & 0xff00) != 0xff00)) goto LAB_1804a297f;
          uVar14 = *(uint *)(puVar3[9] + (ulonglong)uVar16 * 8) >> 0x10;
        } while ((uVar14 != 0x7fff) && (uVar16 = (uVar16 - 0x7fff) + uVar14, uVar16 != 0xffffffff));
      }
      iVar7 = -1;
      local_res8 = CONCAT44(local_res8._4_4_,0xffffffff);
LAB_1804a293e:
      iVar17 = *(int *)(puVar3 + 5);
      *(int *)((longlong)puVar3 + 0x2c) = iVar17;
      uVar16 = local_5c._4_4_;
joined_r0x0001804a294e:
      do {
        if (uVar16 == 0xffffffff) goto LAB_1804a2ac8;
        uVar10 = (ulonglong)uVar16;
        lVar4 = puVar3[9];
        uVar14 = *(uint *)(lVar4 + uVar10 * 8);
        uVar6 = uVar14 >> 0x10;
        if (uVar6 == 0x7fff) {
          uVar6 = 0xffffffff;
        }
        else {
          uVar6 = (uVar16 - 0x7fff) + uVar6;
        }
        uVar11 = (ulonglong)(uVar16 - 1);
        if (uVar16 == 0) {
          uVar11 = 0;
        }
        uVar2 = *(uint *)(lVar4 + uVar11 * 8);
        cVar15 = (char)uVar1;
        if ((uVar2 & 0xff) - 0xc < 2) {
          if ((uVar1 == 0xff) || (uVar1 == uVar2 >> 0x10)) {
            *(undefined1 *)(lVar4 + 1 + uVar11 * 8) = 0;
            *(char *)(lVar4 + uVar11 * 8) = (char)uVar2 + '\x02';
          }
          else {
            *(char *)(lVar4 + 1 + uVar11 * 8) = cVar15;
          }
        }
        else {
          if ((char)(uVar2 >> 8) != -1) {
            uVar16 = (iVar7 - uVar16) + 0x7fff;
            if (0xffff < uVar16) {
                    /* WARNING: Subroutine does not return */
              FUN_18049e240(puVar3[1],0x99b);
            }
            *(short *)(lVar4 + 2 + uVar10 * 8) = (short)uVar16;
            uVar16 = uVar6;
            goto joined_r0x0001804a294e;
          }
          if (uVar1 == 0xff) {
            *(uint *)(lVar4 + uVar11 * 8) = (uVar14 >> 8 & 0xff) << 8 | 0x80000058;
          }
          else {
            *(char *)(lVar4 + 1 + uVar11 * 8) = cVar15;
            if (*(byte *)(lVar4 + 9 + uVar11 * 8) <= uVar1) {
              *(char *)(lVar4 + 9 + uVar11 * 8) = cVar15 + '\x01';
            }
          }
        }
        uVar16 = (iVar17 - uVar16) + 0x7fff;
        if (0xffff < uVar16) {
                    /* WARNING: Subroutine does not return */
          FUN_18049e240(puVar3[1],0x99b);
        }
        *(short *)(puVar3[9] + 2 + uVar10 * 8) = (short)uVar16;
        uVar16 = uVar6;
      } while( true );
    }
    goto LAB_1804a2ae7;
  }
  goto LAB_1804a2afd;
LAB_1804a297f:
  if (local_60 == 10) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = FUN_18049d970(puVar3);
  }
  iVar7 = FUN_18049d010(puVar3,uVar1 << 8 | 0x1002b);
  FUN_18049d010(puVar3,*(int *)((longlong)puVar3 + 0x34) << 8 | 0x80010058);
  uVar8 = FUN_18049d010(puVar3,uVar1 << 8 | 0x2002b);
  *(undefined4 *)((longlong)puVar3 + 0x2c) = *(undefined4 *)(puVar3 + 5);
  local_res8 = CONCAT44(local_res8._4_4_,uVar8);
  FUN_1804a1f10(puVar3,puVar3 + 6,uVar5);
  goto LAB_1804a293e;
LAB_1804a2ac8:
  FUN_1804a2120(puVar3,local_5c & 0xffffffff,iVar17,uVar1,CONCAT44(uVar18,(undefined4)local_res8));
  iVar17 = local_res20;
  uVar16 = local_res18;
LAB_1804a2ae7:
  local_68 = CONCAT44(local_68._4_4_,uVar1);
  local_5c = 0xffffffffffffffff;
  local_60 = 0xc;
  param_2 = local_res10;
LAB_1804a2afd:
  uVar14 = ((*(int *)((longlong)puVar3 + 0x34) - *(int *)((longlong)param_1 + 0xb4)) - uVar16) *
           0x10000 | uVar16 << 8 | 0x2000042;
LAB_1804a2b19:
  uVar14 = FUN_18049d010(puVar3,uVar14);
  *param_2 = uVar14;
  param_2[2] = 0xd;
  param_2[3] = 0xffffffff;
  param_2[4] = 0xffffffff;
  param_2[1] = uVar16;
  *(int *)(puVar3[9] + 4 + (ulonglong)(*(int *)(puVar3 + 5) - 1) * 8) = iVar17;
  *(uint *)((longlong)puVar3 + 0x34) = uVar16 + 1;
  return;
}



/* ===== 1804a2bf0 FUN_1804a2bf0 ===== */

void FUN_1804a2bf0(longlong *param_1,uint *param_2,int param_3)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  uint *puVar4;
  longlong lVar5;
  uint uVar6;
  uint local_48;
  uint local_44;
  int local_40;
  undefined8 local_3c;
  uint local_30 [2];
  int local_28;
  uint *local_18;
  
  if (3 < param_2[2] - 6) {
                    /* WARNING: Subroutine does not return */
    FUN_18049e240(param_1,0xb08);
  }
  if (param_2[2] - 6 < 2) {
    if ((*(byte *)(param_1[0x12] + 0x11 + (ulonglong)param_2[1] * 0x18) & 8) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_18049b070(param_1,0,0xbd4,
                    *(longlong *)(param_1[0x12] + (ulonglong)param_2[1] * 0x18) + 0x18);
    }
  }
  if (*(int *)((longlong)param_1 + 0x34) == 0x2c) {
    FUN_18049b180();
    local_18 = param_2;
    FUN_18049f450(param_1,local_30,4);
    if (local_28 == 6) {
      lVar5 = *param_1;
      bVar2 = false;
      uVar6 = *(uint *)(lVar5 + 0x34);
      puVar4 = param_2;
      do {
        if (puVar4[2] == 9) {
          if (*puVar4 == local_30[0]) {
            bVar2 = true;
            *puVar4 = uVar6;
          }
          if (puVar4[1] == local_30[0]) {
            puVar4[1] = uVar6;
            bVar2 = true;
          }
        }
        puVar4 = *(uint **)(puVar4 + 6);
      } while (puVar4 != (uint *)0x0);
      if (bVar2) {
        FUN_18049d010(lVar5,(local_30[0] << 8 | uVar6) << 8 | 0x12);
        uVar6 = *(int *)(lVar5 + 0x34) + 1;
        if (*(byte *)(lVar5 + 0x5a) < uVar6) {
          if (0xf9 < uVar6) {
                    /* WARNING: Subroutine does not return */
            FUN_18049e240(*(undefined8 *)(lVar5 + 8),0x9b6);
          }
          *(char *)(lVar5 + 0x5a) = (char)uVar6;
        }
        *(uint *)(lVar5 + 0x34) = uVar6;
      }
    }
    if (199 < (uint)(*(int *)((longlong)param_1 + 0xac) + param_3)) {
                    /* WARNING: Subroutine does not return */
      FUN_18049e200(*param_1,200,"variable names");
    }
    FUN_1804a2bf0(param_1,local_30,param_3 + 1);
  }
  else {
    if (*(int *)((longlong)param_1 + 0x34) != 0x3d) {
                    /* WARNING: Subroutine does not return */
      FUN_18049e250(param_1,0x3d);
    }
    FUN_18049b180();
    iVar3 = FUN_18049f310(param_1,&local_48);
    if (iVar3 == param_3) {
      if (local_40 == 0xd) {
        if (*(char *)(*(longlong *)(*param_1 + 0x48) + (ulonglong)local_48 * 8) == 'G') {
          piVar1 = (int *)(*param_1 + 0x34);
          *piVar1 = *piVar1 + -1;
          local_40 = 0xb;
        }
        else {
          local_48 = local_44;
          local_40 = 0xc;
        }
      }
      lVar5 = *param_1;
      goto LAB_1804a2d6d;
    }
    FUN_18049cf00(param_1,param_3,iVar3,&local_48);
  }
  lVar5 = *param_1;
  local_48 = *(int *)(lVar5 + 0x34) - 1;
  local_40 = 0xc;
  local_3c = 0xffffffffffffffff;
LAB_1804a2d6d:
  FUN_18049dcd0(lVar5,param_2,&local_48);
  return;
}



/* ===== 1804a2e20 FUN_1804a2e20 ===== */

void FUN_1804a2e20(longlong *param_1)

{
  longlong lVar1;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  undefined1 local_b;
  
  lVar1 = *param_1;
  local_c = *(undefined1 *)(lVar1 + 0x38);
  local_b = 0;
  local_10 = *(undefined4 *)(*(longlong *)(lVar1 + 8) + 0x9c);
  local_18 = *(undefined8 *)(lVar1 + 0x18);
  *(undefined8 **)(lVar1 + 0x18) = &local_18;
  FUN_1804a3350();
  FUN_1804a19c0(lVar1);
  return;
}



/* ===== 1804a2e70 FUN_1804a2e70 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804a2e70(longlong *param_1,undefined8 param_2,undefined4 param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_368 [32];
  undefined8 local_348;
  int local_340;
  undefined8 local_338;
  undefined4 local_330;
  undefined1 local_32c;
  undefined1 local_32b;
  ulonglong local_328;
  longlong *local_320;
  longlong local_318;
  undefined8 *local_310;
  longlong local_308;
  undefined8 local_300;
  undefined4 local_2f8;
  undefined8 local_2f4;
  undefined8 local_2ec;
  int local_2e4;
  longlong local_2e0;
  int local_2d8;
  undefined4 local_2d4;
  undefined1 local_2d0;
  undefined1 local_2cf;
  undefined2 local_2ce;
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_368;
  local_308 = *param_1;
  lVar1 = param_1[1];
  lVar2 = param_1[0x14];
  lVar3 = *(longlong *)(local_308 + 0x48);
  *param_1 = (longlong)&local_328;
  local_2d4 = *(undefined4 *)((longlong)param_1 + 0x9c);
  local_300 = 0;
  local_2f4 = 0;
  local_2ec = 0;
  local_310 = (undefined8 *)0x0;
  local_2d0 = 0;
  local_2f8 = 0xffffffff;
  local_2ce = 1;
  local_320 = param_1;
  local_318 = lVar1;
  local_328 = FUN_180492ab0(lVar1,0,0);
  **(ulonglong **)(lVar1 + 0x28) = local_328 | 0xfffa000000000000;
  *(longlong *)(lVar1 + 0x28) = *(longlong *)(lVar1 + 0x28) + 8;
  if (*(ulonglong *)(lVar1 + 0x30) <= *(ulonglong *)(lVar1 + 0x28)) {
    FUN_18048ea20(lVar1);
  }
  local_32c = local_2f4._4_1_;
  local_32b = 0;
  local_330 = *(undefined4 *)((longlong)local_320 + 0x9c);
  local_338 = local_310;
  local_310 = &local_338;
  local_2cf = FUN_1804a4690(param_1,param_3,0x28,0x29);
  local_2e0 = *(longlong *)(local_308 + 0x48) + (ulonglong)*(uint *)(local_308 + 0x28) * 8;
  local_2d8 = *(int *)(local_308 + 0x50) - *(int *)(local_308 + 0x28);
  local_2e4 = param_4;
  FUN_18049d010(&local_328,0x60);
  FUN_1804a3350(param_1);
  if (*(int *)((longlong)param_1 + 0x34) == 0x108) {
    FUN_1804a5790(param_1,param_2,lVar3 - lVar2 >> 3);
    FUN_18049b180(param_1);
    return;
  }
  if (param_4 == (int)param_1[0xe]) {
                    /* WARNING: Subroutine does not return */
    FUN_18049e250();
  }
  uVar4 = FUN_18049b3d0(param_1,0x108);
  local_348 = FUN_18049b3d0(param_1,0x10b);
  local_340 = param_4;
                    /* WARNING: Subroutine does not return */
  FUN_18049b070(param_1,*(undefined4 *)((longlong)param_1 + 0x34),0xa4a,uVar4);
}



/* ===== 1804a3060 FUN_1804a3060 ===== */

void FUN_1804a3060(longlong *param_1)

{
  byte *pbVar1;
  undefined4 uVar2;
  
  pbVar1 = (byte *)(*(longlong *)(*param_1 + 0x18) + 0xd);
  *pbVar1 = *pbVar1 | 2;
  uVar2 = FUN_18049d970(*param_1);
  FUN_1804a1d30(param_1,1,2,uVar2);
  return;
}



/* ===== 1804a30a0 FUN_1804a30a0 ===== */

void FUN_1804a30a0(longlong *param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint local_88;
  uint local_84;
  int local_80;
  int local_7c;
  int local_78;
  undefined4 local_74;
  undefined1 local_70 [24];
  uint local_58;
  uint local_54;
  int local_50;
  int local_4c;
  int local_48;
  undefined4 local_44;
  undefined8 local_40;
  
  lVar2 = *param_1;
  iVar4 = FUN_18049f4f0(param_1,&local_58,1);
  if (local_50 == 0xd) {
    *(undefined1 *)(*(longlong *)(lVar2 + 0x48) + 3 + (ulonglong)local_58 * 8) = 1;
    goto LAB_1804a32ba;
  }
  if ((iVar4 != -1) && (*(int *)((longlong)param_1 + 0x34) == 0x2c)) {
                    /* WARNING: Subroutine does not return */
    FUN_18049e240(param_1,0xb08);
  }
  if (local_50 - 6U < 4) {
    iVar8 = *(int *)((longlong)param_1 + 0x34);
    iVar7 = local_50;
    iVar5 = FUN_1804a5870(iVar8);
    if ((iVar5 < 0xe) && (iVar5 != 5)) {
      if (iVar7 - 6U < 2) {
        if ((*(byte *)(param_1[0x12] + 0x11 + (ulonglong)local_54 * 0x18) & 8) != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_18049b070(param_1,0,0xbd4,
                        *(longlong *)(param_1[0x12] + (ulonglong)local_54 * 0x18) + 0x18);
        }
      }
      if (iVar5 == 0xd) {
        if (iVar8 != 0x11e) {
                    /* WARNING: Subroutine does not return */
          FUN_18049b070(param_1,0x21,0x98d,&DAT_1806f8e90);
        }
        iVar5 = 8;
      }
      else {
        if ((int)param_1[6] != 0x3d) {
                    /* WARNING: Subroutine does not return */
          FUN_18049e250(param_1,0x3d);
        }
        FUN_18049b180();
      }
      FUN_18049b180(param_1);
      lVar3 = *param_1;
      local_88 = local_58;
      local_84 = local_54;
      local_7c = local_4c;
      local_78 = local_48;
      local_74 = local_44;
      local_80 = local_50;
      if (local_50 == 9) {
        uVar1 = *(undefined4 *)(lVar3 + 0x34);
        FUN_18049e870(lVar3,&local_58);
        *(undefined4 *)(lVar3 + 0x34) = uVar1;
      }
      FUN_18049e870(lVar3,&local_58);
      if (iVar5 == 0xc) {
        if ((local_50 == 0xc) && (*(uint *)(lVar3 + 0x38) <= local_58)) {
          *(int *)(lVar3 + 0x34) = *(int *)(lVar3 + 0x34) + -1;
        }
        uVar6 = *(int *)(lVar3 + 0x34) + 1;
        if (*(byte *)(lVar3 + 0x5a) < uVar6) {
          if (0xf9 < uVar6) {
                    /* WARNING: Subroutine does not return */
            FUN_18049e240(*(undefined8 *)(lVar3 + 8),0x9b6);
          }
LAB_1804a325a:
          *(char *)(lVar3 + 0x5a) = (char)uVar6;
        }
LAB_1804a325d:
        *(uint *)(lVar3 + 0x34) = uVar6;
LAB_1804a3260:
        FUN_1804a0bd0(lVar3,&local_58);
      }
      else {
        if (local_50 != 0xc) {
LAB_1804a3221:
          FUN_18049e870(lVar3,&local_58);
          if ((local_50 == 0xc) && (*(uint *)(lVar3 + 0x38) <= local_58)) {
            *(int *)(lVar3 + 0x34) = *(int *)(lVar3 + 0x34) + -1;
          }
          uVar6 = *(int *)(lVar3 + 0x34) + 1;
          if (*(byte *)(lVar3 + 0x5a) < uVar6) {
            if (0xf9 < uVar6) {
                    /* WARNING: Subroutine does not return */
              FUN_18049e240(*(undefined8 *)(lVar3 + 8),0x9b6);
            }
            goto LAB_1804a325a;
          }
          goto LAB_1804a325d;
        }
        if (local_4c != local_48) {
          if (local_58 < *(uint *)(lVar3 + 0x38)) goto LAB_1804a3221;
          goto LAB_1804a3260;
        }
      }
      FUN_18049e280(param_1,local_70,0);
      FUN_18049d2b0(lVar3,iVar5,&local_58,local_70);
      FUN_18049dcd0(lVar3,&local_88,&local_58);
      goto LAB_1804a32ba;
    }
  }
  local_40 = 0;
  FUN_1804a2bf0(param_1,&local_58,1);
LAB_1804a32ba:
  if (iVar4 != -1) {
    *(undefined4 *)(lVar2 + 0x2c) = *(undefined4 *)(lVar2 + 0x28);
    FUN_1804a1f10(lVar2,lVar2 + 0x30,iVar4);
  }
  return;
}



/* ===== 1804a3350 FUN_1804a3350 ===== */

void FUN_1804a3350(longlong *param_1)

{
  int iVar1;
  
  *(int *)((longlong)param_1 + 0xac) = *(int *)((longlong)param_1 + 0xac) + 1;
  if (199 < *(uint *)((longlong)param_1 + 0xac)) {
                    /* WARNING: Subroutine does not return */
    FUN_18049b070(param_1,0,0x8e4);
  }
  do {
    iVar1 = *(int *)((longlong)param_1 + 0x34);
    if ((((iVar1 == 0x106) || (iVar1 == 0x107)) || (iVar1 == 0x108)) ||
       ((iVar1 == 0x117 || (iVar1 == 300)))) break;
    iVar1 = FUN_1804a4ec0(param_1);
    if (*(int *)((longlong)param_1 + 0x34) == 0x3b) {
      FUN_18049b180(param_1);
    }
    *(undefined4 *)(*param_1 + 0x34) = *(undefined4 *)(*param_1 + 0x38);
  } while (iVar1 == 0);
  *(int *)((longlong)param_1 + 0xac) = *(int *)((longlong)param_1 + 0xac) + -1;
  return;
}



/* ===== 1804a33e0 FUN_1804a33e0 ===== */

void FUN_1804a33e0(longlong *param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  ushort uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined8 uVar10;
  uint *puVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  char cVar16;
  uint uVar17;
  uint uVar18;
  ulonglong uVar19;
  uint local_res8;
  undefined8 local_78;
  undefined4 local_70;
  undefined1 local_6c;
  undefined1 local_6b;
  undefined8 local_68;
  undefined4 local_60;
  undefined1 local_5c;
  undefined1 local_5b;
  undefined1 local_58 [32];
  
  puVar4 = (undefined8 *)*param_1;
  iVar3 = *(int *)((longlong)puVar4 + 0x34);
  uVar9 = *(uint *)(puVar4 + 5);
  FUN_1804a5d20(param_1,0,4);
  FUN_1804a5d20(param_1,1,5);
  FUN_1804a5d20(param_1,2,6);
  FUN_1804a5d20(param_1,3,param_2);
  uVar17 = 4;
  while (*(int *)((longlong)param_1 + 0x34) == 0x2c) {
    FUN_18049b180();
    if ((*(int *)((longlong)param_1 + 0x34) != 0x12a) &&
       (1 < *(int *)((longlong)param_1 + 0x34) - 0x103U)) {
                    /* WARNING: Subroutine does not return */
      FUN_18049e250(param_1,0x12a);
    }
    uVar15 = param_1[2];
    FUN_18049b180(param_1);
    FUN_1804a5d20(param_1,uVar17,uVar15 & 0x7fffffffffff);
    uVar17 = uVar17 + 1;
  }
  if (*(int *)((longlong)param_1 + 0x34) != 0x10e) {
                    /* WARNING: Subroutine does not return */
    FUN_18049e250(param_1,0x10e);
  }
  FUN_18049b180();
  lVar7 = param_1[0xe];
  uVar8 = FUN_18049f310(param_1,local_58);
  FUN_18049cf00(param_1,3,uVar8,local_58);
  uVar12 = *(int *)((longlong)puVar4 + 0x34) + *(int *)((longlong)param_1 + 0xb4) + 3;
  if (*(byte *)((longlong)puVar4 + 0x5a) < uVar12) {
    if (0xf9 < uVar12) {
                    /* WARNING: Subroutine does not return */
      FUN_18049e240(puVar4[1],0x9b6);
    }
    *(char *)((longlong)puVar4 + 0x5a) = (char)uVar12;
  }
  if ((uVar17 < 6) && (uVar9 < *(uint *)(puVar4 + 5))) {
    uVar9 = *(uint *)(puVar4[9] + (ulonglong)uVar9 * 8);
    uVar12 = uVar9 & 0xff;
    if (uVar12 != 0x12) {
      if (uVar12 == 0x2d) {
        uVar2 = *(ushort *)((longlong)puVar4 + (ulonglong)(uVar9 >> 0x10) * 2 + 0x1ec);
LAB_1804a3636:
        lVar6 = *(longlong *)(param_1[0x12] + (ulonglong)uVar2 * 0x18);
        if (*(int *)(lVar6 + 0x14) == 5) {
          lVar14 = 0;
          do {
            lVar13 = lVar14 + 1;
            if (*(char *)(lVar6 + 0x18 + lVar14) != "pairs"[lVar14]) goto LAB_1804a35b4;
            lVar14 = lVar13;
          } while (lVar13 != 6);
          uVar9 = 0x48;
          local_res8 = 0x46;
          goto LAB_1804a35c5;
        }
        if (*(int *)(lVar6 + 0x14) != 4) goto LAB_1804a35b4;
        lVar14 = 0;
        do {
          lVar13 = lVar14 + 1;
          if (*(char *)(lVar6 + 0x18 + lVar14) != (&DAT_18076ae74)[lVar14]) goto LAB_1804a35b4;
          lVar14 = lVar13;
        } while (lVar13 != 5);
      }
      else {
        if (uVar12 != 0x36) goto LAB_1804a35b4;
        uVar5 = *puVar4;
        uVar10 = FUN_180491d30(param_1[1],"pairs",5);
        puVar11 = (uint *)FUN_180492860(uVar5,uVar10);
        if (((puVar11 == (uint *)0x0) || (puVar11[1] != 0)) || (*puVar11 != uVar9 >> 0x10)) {
          uVar5 = *puVar4;
          uVar10 = FUN_180491d30(param_1[1],&DAT_18076ae74,4);
          puVar11 = (uint *)FUN_180492860(uVar5,uVar10);
          if (((puVar11 == (uint *)0x0) || (puVar11[1] != 0)) || (*puVar11 != uVar9 >> 0x10))
          goto LAB_1804a35b4;
        }
      }
      uVar9 = 0x48;
      local_res8 = 0x46;
      goto LAB_1804a35c5;
    }
    if (uVar9 >> 0x10 < *(uint *)(puVar4 + 7)) {
      uVar2 = *(ushort *)((longlong)puVar4 + (ulonglong)(uVar9 >> 0x10) * 2 + 0x5c);
      goto LAB_1804a3636;
    }
  }
LAB_1804a35b4:
  uVar9 = 0x58;
  local_res8 = 0x45;
LAB_1804a35c5:
  lVar6 = *param_1;
  lVar14 = param_1[0x12];
  puVar1 = (undefined4 *)(lVar6 + 0x28);
  uVar12 = *(uint *)(lVar6 + 0x38);
  cVar16 = (char)uVar12;
  uVar2 = *(ushort *)(lVar6 + 0x5c + (ulonglong)uVar12 * 2);
  uVar19 = (ulonglong)uVar2;
  uVar15 = *(ulonglong *)(lVar14 + uVar19 * 0x18);
  if (uVar15 < 7) {
    *(undefined4 *)(lVar14 + 8 + uVar19 * 0x18) = *puVar1;
    *(char *)(lVar14 + 0x10 + uVar19 * 0x18) = cVar16;
  }
  else {
    uVar15 = (ulonglong)(*(uint *)(uVar15 + 0xc) & 0x1f);
    *(undefined4 *)(lVar14 + 8 + uVar19 * 0x18) = *puVar1;
    *(char *)(lVar14 + 0x10 + uVar19 * 0x18) = cVar16;
    *(undefined2 *)(lVar14 + 0x12 + uVar19 * 0x18) =
         *(undefined2 *)((longlong)param_1 + uVar15 * 2 + 0xb8);
    *(ushort *)((longlong)param_1 + uVar15 * 2 + 0xb8) = uVar2;
  }
  lVar14 = param_1[0x12];
  uVar2 = *(ushort *)(lVar6 + 0x5c + (ulonglong)(uVar12 + 1) * 2);
  uVar19 = (ulonglong)uVar2;
  uVar15 = *(ulonglong *)(lVar14 + uVar19 * 0x18);
  if (uVar15 < 7) {
    *(undefined4 *)(lVar14 + 8 + uVar19 * 0x18) = *puVar1;
    *(char *)(lVar14 + 0x10 + uVar19 * 0x18) = cVar16 + '\x01';
  }
  else {
    uVar15 = (ulonglong)(*(uint *)(uVar15 + 0xc) & 0x1f);
    *(undefined4 *)(lVar14 + 8 + uVar19 * 0x18) = *puVar1;
    *(char *)(lVar14 + 0x10 + uVar19 * 0x18) = cVar16 + '\x01';
    *(undefined2 *)(lVar14 + 0x12 + uVar19 * 0x18) =
         *(undefined2 *)((longlong)param_1 + uVar15 * 2 + 0xb8);
    *(ushort *)((longlong)param_1 + uVar15 * 2 + 0xb8) = uVar2;
  }
  lVar14 = param_1[0x12];
  uVar2 = *(ushort *)(lVar6 + 0x5c + (ulonglong)(uVar12 + 2) * 2);
  uVar19 = (ulonglong)uVar2;
  uVar15 = *(ulonglong *)(lVar14 + uVar19 * 0x18);
  if (uVar15 < 7) {
    *(undefined4 *)(lVar14 + 8 + uVar19 * 0x18) = *puVar1;
    *(char *)(lVar14 + 0x10 + uVar19 * 0x18) = cVar16 + '\x02';
  }
  else {
    uVar15 = (ulonglong)(*(uint *)(uVar15 + 0xc) & 0x1f);
    *(undefined4 *)(lVar14 + 8 + uVar19 * 0x18) = *puVar1;
    *(char *)(lVar14 + 0x10 + uVar19 * 0x18) = cVar16 + '\x02';
    *(undefined2 *)(lVar14 + 0x12 + uVar19 * 0x18) =
         *(undefined2 *)((longlong)param_1 + uVar15 * 2 + 0xb8);
    *(ushort *)((longlong)param_1 + uVar15 * 2 + 0xb8) = uVar2;
  }
  *(uint *)(lVar6 + 0x38) = uVar12 + 3;
  if (*(int *)((longlong)param_1 + 0x34) != 0x105) {
                    /* WARNING: Subroutine does not return */
    FUN_18049e250(param_1,0x105);
  }
  uVar18 = iVar3 + 3;
  FUN_18049b180();
  uVar9 = FUN_18049d010(puVar4,(uVar18 | 0x7fff00) << 8 | uVar9);
  local_6c = *(undefined1 *)(puVar4 + 7);
  local_6b = 0;
  local_70 = *(undefined4 *)(puVar4[1] + 0x9c);
  local_78 = puVar4[3];
  puVar4[3] = &local_78;
  FUN_1804a5ab0(param_1,uVar17 - 3);
  uVar12 = *(int *)((longlong)puVar4 + 0x34) + -3 + uVar17;
  if (*(byte *)((longlong)puVar4 + 0x5a) < uVar12) {
    if (0xf9 < uVar12) {
                    /* WARNING: Subroutine does not return */
      FUN_18049e240(puVar4[1],0x9b6);
    }
    *(char *)((longlong)puVar4 + 0x5a) = (char)uVar12;
  }
  *(uint *)((longlong)puVar4 + 0x34) = uVar12;
  lVar6 = *param_1;
  local_5c = *(undefined1 *)(lVar6 + 0x38);
  local_5b = 0;
  local_60 = *(undefined4 *)(*(longlong *)(lVar6 + 8) + 0x9c);
  local_68 = *(undefined8 *)(lVar6 + 0x18);
  *(undefined8 **)(lVar6 + 0x18) = &local_68;
  FUN_1804a3350(param_1);
  FUN_1804a19c0(lVar6);
  FUN_1804a19c0(puVar4);
  uVar12 = (*(int *)(puVar4 + 5) - uVar9) + 0x7fff;
  if (0xffff < uVar12) {
                    /* WARNING: Subroutine does not return */
    FUN_18049e240(puVar4[1],0x99b);
  }
  *(short *)(puVar4[9] + 2 + (ulonglong)uVar9 * 8) = (short)uVar12;
  lVar6 = puVar4[3];
  if ((*(byte *)(lVar6 + 0xd) & 0x20) != 0) {
    lVar14 = puVar4[1];
    uVar8 = *(undefined4 *)(puVar4 + 5);
    *(byte *)(lVar6 + 0xd) = *(byte *)(lVar6 + 0xd) & 0xdf;
    uVar8 = FUN_1804a1d30(lVar14,2,4,uVar8);
    *(undefined4 *)(lVar14 + 0x9c) = uVar8;
    FUN_1804a1df0(lVar14,lVar6,uVar8);
  }
  FUN_18049d010(puVar4,((uVar17 - 2) * 0x10000 | uVar18 | 0x300) << 8 | local_res8);
  uVar17 = FUN_18049d010(puVar4,uVar18 * 0x100 | 0x7fff0052);
  uVar9 = (uVar9 - uVar17) + 0x8000;
  *(int *)(puVar4[9] + 4 + (ulonglong)(uVar17 - 1) * 8) = (int)lVar7;
  *(int *)(puVar4[9] + 4 + (ulonglong)uVar17 * 8) = (int)lVar7;
  if (0xffff < uVar9) {
                    /* WARNING: Subroutine does not return */
    FUN_18049e240(puVar4[1],0x99b);
  }
  *(short *)(puVar4[9] + 2 + (ulonglong)uVar17 * 8) = (short)uVar9;
  return;
}



/* ===== 1804a39e0 FUN_1804a39e0 ===== */

void FUN_1804a39e0(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  ushort uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  char cVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  undefined8 local_48;
  undefined4 local_40;
  undefined1 local_3c;
  undefined1 local_3b;
  undefined8 local_38;
  undefined4 local_30;
  undefined1 local_2c;
  undefined1 local_2b;
  
  lVar4 = *param_1;
  iVar11 = 1;
  iVar3 = *(int *)(lVar4 + 0x34);
  FUN_1804a5d20(param_1,0,1);
  FUN_1804a5d20(param_1,1,2);
  FUN_1804a5d20(param_1,2,3);
  FUN_1804a5d20(param_1,3,param_2);
  if (*(int *)((longlong)param_1 + 0x34) != 0x3d) {
                    /* WARNING: Subroutine does not return */
    FUN_18049e250(param_1,0x3d);
  }
  FUN_18049b180();
  FUN_18049f3d0(param_1);
  if (*(int *)((longlong)param_1 + 0x34) != 0x2c) {
                    /* WARNING: Subroutine does not return */
    FUN_18049e250(param_1,0x2c);
  }
  FUN_18049b180();
  FUN_18049f3d0(param_1);
  if (*(int *)((longlong)param_1 + 0x34) == 0x2c) {
    FUN_18049b180(param_1);
    FUN_18049f3d0(param_1);
  }
  else {
    FUN_18049d010(lVar4,*(int *)(lVar4 + 0x34) << 8 | 0x10029);
    uVar12 = *(int *)(lVar4 + 0x34) + 1;
    if (*(byte *)(lVar4 + 0x5a) < uVar12) {
      if (0xf9 < uVar12) {
                    /* WARNING: Subroutine does not return */
        FUN_18049e240(*(undefined8 *)(lVar4 + 8),0x9b6);
      }
      *(char *)(lVar4 + 0x5a) = (char)uVar12;
    }
    *(uint *)(lVar4 + 0x34) = uVar12;
  }
  lVar5 = *param_1;
  lVar6 = param_1[0x12];
  puVar1 = (undefined4 *)(lVar5 + 0x28);
  uVar12 = *(uint *)(lVar5 + 0x38);
  cVar10 = (char)uVar12;
  uVar2 = *(ushort *)(lVar5 + 0x5c + (ulonglong)uVar12 * 2);
  uVar13 = (ulonglong)uVar2;
  uVar9 = *(ulonglong *)(lVar6 + uVar13 * 0x18);
  if (uVar9 < 7) {
    *(undefined4 *)(lVar6 + 8 + uVar13 * 0x18) = *puVar1;
    *(char *)(lVar6 + 0x10 + uVar13 * 0x18) = cVar10;
  }
  else {
    uVar9 = (ulonglong)(*(uint *)(uVar9 + 0xc) & 0x1f);
    *(undefined4 *)(lVar6 + 8 + uVar13 * 0x18) = *puVar1;
    *(char *)(lVar6 + 0x10 + uVar13 * 0x18) = cVar10;
    *(undefined2 *)(lVar6 + 0x12 + uVar13 * 0x18) =
         *(undefined2 *)((longlong)param_1 + uVar9 * 2 + 0xb8);
    *(ushort *)((longlong)param_1 + uVar9 * 2 + 0xb8) = uVar2;
  }
  lVar6 = param_1[0x12];
  uVar2 = *(ushort *)(lVar5 + 0x5c + (ulonglong)(uVar12 + 1) * 2);
  uVar13 = (ulonglong)uVar2;
  uVar9 = *(ulonglong *)(lVar6 + uVar13 * 0x18);
  if (uVar9 < 7) {
    *(undefined4 *)(lVar6 + 8 + uVar13 * 0x18) = *puVar1;
    *(char *)(lVar6 + 0x10 + uVar13 * 0x18) = cVar10 + '\x01';
  }
  else {
    uVar9 = (ulonglong)(*(uint *)(uVar9 + 0xc) & 0x1f);
    *(undefined4 *)(lVar6 + 8 + uVar13 * 0x18) = *puVar1;
    *(char *)(lVar6 + 0x10 + uVar13 * 0x18) = cVar10 + '\x01';
    *(undefined2 *)(lVar6 + 0x12 + uVar13 * 0x18) =
         *(undefined2 *)((longlong)param_1 + uVar9 * 2 + 0xb8);
    *(ushort *)((longlong)param_1 + uVar9 * 2 + 0xb8) = uVar2;
  }
  lVar6 = param_1[0x12];
  uVar2 = *(ushort *)(lVar5 + 0x5c + (ulonglong)(uVar12 + 2) * 2);
  uVar13 = (ulonglong)uVar2;
  uVar9 = *(ulonglong *)(lVar6 + uVar13 * 0x18);
  if (uVar9 < 7) {
    *(undefined4 *)(lVar6 + 8 + uVar13 * 0x18) = *puVar1;
    *(char *)(lVar6 + 0x10 + uVar13 * 0x18) = cVar10 + '\x02';
  }
  else {
    uVar9 = (ulonglong)(*(uint *)(uVar9 + 0xc) & 0x1f);
    *(undefined4 *)(lVar6 + 8 + uVar13 * 0x18) = *puVar1;
    *(char *)(lVar6 + 0x10 + uVar13 * 0x18) = cVar10 + '\x02';
    *(undefined2 *)(lVar6 + 0x12 + uVar13 * 0x18) =
         *(undefined2 *)((longlong)param_1 + uVar9 * 2 + 0xb8);
    *(ushort *)((longlong)param_1 + uVar9 * 2 + 0xb8) = uVar2;
  }
  *(uint *)(lVar5 + 0x38) = uVar12 + 3;
  if (*(int *)((longlong)param_1 + 0x34) != 0x105) {
                    /* WARNING: Subroutine does not return */
    FUN_18049e250(param_1,0x105);
  }
  FUN_18049b180();
  uVar14 = iVar3 << 8;
  uVar7 = FUN_18049d010(lVar4,uVar14 | 0x7fff004d);
  local_3c = *(undefined1 *)(lVar4 + 0x38);
  local_3b = 0;
  local_40 = *(undefined4 *)(*(longlong *)(lVar4 + 8) + 0x9c);
  local_48 = *(undefined8 *)(lVar4 + 0x18);
  *(undefined8 **)(lVar4 + 0x18) = &local_48;
  lVar5 = *param_1;
  uVar12 = *(uint *)(lVar5 + 0x38);
  do {
    lVar6 = param_1[0x12];
    iVar11 = iVar11 + -1;
    uVar2 = *(ushort *)(lVar5 + 0x5c + (ulonglong)uVar12 * 2);
    uVar13 = (ulonglong)uVar2;
    uVar9 = *(ulonglong *)(lVar6 + uVar13 * 0x18);
    if (uVar9 < 7) {
      *(undefined4 *)(lVar6 + 8 + uVar13 * 0x18) = *(undefined4 *)(lVar5 + 0x28);
      *(char *)(lVar6 + 0x10 + uVar13 * 0x18) = (char)uVar12;
    }
    else {
      uVar9 = (ulonglong)(*(uint *)(uVar9 + 0xc) & 0x1f);
      *(undefined4 *)(lVar6 + 8 + uVar13 * 0x18) = *(undefined4 *)(lVar5 + 0x28);
      *(char *)(lVar6 + 0x10 + uVar13 * 0x18) = (char)uVar12;
      *(undefined2 *)(lVar6 + 0x12 + uVar13 * 0x18) =
           *(undefined2 *)((longlong)param_1 + uVar9 * 2 + 0xb8);
      *(ushort *)((longlong)param_1 + uVar9 * 2 + 0xb8) = uVar2;
    }
    uVar12 = uVar12 + 1;
  } while (iVar11 != 0);
  *(uint *)(lVar5 + 0x38) = uVar12;
  uVar12 = *(int *)(lVar4 + 0x34) + 1;
  if (*(byte *)(lVar4 + 0x5a) < uVar12) {
    if (0xf9 < uVar12) {
                    /* WARNING: Subroutine does not return */
      FUN_18049e240(*(undefined8 *)(lVar4 + 8),0x9b6);
    }
    *(char *)(lVar4 + 0x5a) = (char)uVar12;
  }
  *(uint *)(lVar4 + 0x34) = uVar12;
  lVar5 = *param_1;
  local_2c = *(undefined1 *)(lVar5 + 0x38);
  local_2b = 0;
  local_30 = *(undefined4 *)(*(longlong *)(lVar5 + 8) + 0x9c);
  local_38 = *(undefined8 *)(lVar5 + 0x18);
  *(undefined8 **)(lVar5 + 0x18) = &local_38;
  FUN_1804a3350(param_1);
  FUN_1804a19c0(lVar5);
  FUN_1804a19c0(lVar4);
  lVar5 = *(longlong *)(lVar4 + 0x18);
  if ((*(byte *)(lVar5 + 0xd) & 0x20) != 0) {
    lVar6 = *(longlong *)(lVar4 + 8);
    uVar8 = *(undefined4 *)(lVar4 + 0x28);
    *(byte *)(lVar5 + 0xd) = *(byte *)(lVar5 + 0xd) & 0xdf;
    uVar8 = FUN_1804a1d30(lVar6,2,4,uVar8);
    *(undefined4 *)(lVar6 + 0x9c) = uVar8;
    FUN_1804a1df0(lVar6,lVar5,uVar8);
  }
  uVar12 = FUN_18049d010(lVar4,uVar14 | 0x7fff004f);
  *(undefined4 *)(*(longlong *)(lVar4 + 0x48) + 4 + (ulonglong)uVar12 * 8) = param_3;
  uVar14 = (uVar7 - uVar12) + 0x8000;
  if (0xffff < uVar14) {
                    /* WARNING: Subroutine does not return */
    FUN_18049e240(*(undefined8 *)(lVar4 + 8),0x99b);
  }
  *(short *)(*(longlong *)(lVar4 + 0x48) + 2 + (ulonglong)uVar12 * 8) = (short)uVar14;
  uVar12 = (*(int *)(lVar4 + 0x28) - uVar7) + 0x7fff;
  if (0xffff < uVar12) {
                    /* WARNING: Subroutine does not return */
    FUN_18049e240(*(undefined8 *)(lVar4 + 8),0x99b);
  }
  *(short *)(*(longlong *)(lVar4 + 0x48) + 2 + (ulonglong)uVar7 * 8) = (short)uVar12;
  return;
}



/* ===== 1804a3e50 FUN_1804a3e50 ===== */

void FUN_1804a3e50(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined8 local_48;
  undefined4 local_40;
  undefined1 local_3c;
  undefined1 local_3b;
  
  lVar1 = *param_1;
  uVar10 = 0xffffffff;
  uVar3 = FUN_1804a54e0();
  iVar9 = *(int *)((longlong)param_1 + 0x34);
  while (iVar9 == 0x107) {
    uVar4 = FUN_18049d970(lVar1);
    if (uVar4 != 0xffffffff) {
      if (uVar10 == 0xffffffff) {
        uVar10 = uVar4;
      }
      else {
        uVar8 = uVar10;
        while( true ) {
          uVar5 = *(uint *)(*(longlong *)(lVar1 + 0x48) + (ulonglong)uVar8 * 8) >> 0x10;
          if ((uVar5 == 0x7fff) || (iVar9 = uVar5 + uVar8, iVar9 == 0x7ffe)) break;
          uVar8 = iVar9 - 0x7fff;
        }
        uVar4 = (uVar4 - uVar8) + 0x7fff;
        if (0xffff < uVar4) {
                    /* WARNING: Subroutine does not return */
          FUN_18049e240(*(undefined8 *)(lVar1 + 8),0x99b);
        }
        *(short *)(*(longlong *)(lVar1 + 0x48) + 2 + (ulonglong)uVar8 * 8) = (short)uVar4;
      }
    }
    *(undefined4 *)(lVar1 + 0x2c) = *(undefined4 *)(lVar1 + 0x28);
    FUN_1804a1f10(lVar1,lVar1 + 0x30,uVar3);
    uVar3 = FUN_1804a54e0(param_1);
    iVar9 = *(int *)((longlong)param_1 + 0x34);
  }
  if (iVar9 == 0x106) {
    uVar4 = FUN_18049d970(lVar1);
    if (uVar4 != 0xffffffff) {
      if (uVar10 == 0xffffffff) {
        uVar10 = uVar4;
      }
      else {
        uVar8 = uVar10;
        while( true ) {
          uVar5 = *(uint *)(*(longlong *)(lVar1 + 0x48) + (ulonglong)uVar8 * 8) >> 0x10;
          if ((uVar5 == 0x7fff) || (iVar9 = uVar5 + uVar8, iVar9 == 0x7ffe)) break;
          uVar8 = iVar9 - 0x7fff;
        }
        uVar4 = (uVar4 - uVar8) + 0x7fff;
        if (0xffff < uVar4) {
                    /* WARNING: Subroutine does not return */
          FUN_18049e240(*(undefined8 *)(lVar1 + 8),0x99b);
        }
        *(short *)(*(longlong *)(lVar1 + 0x48) + 2 + (ulonglong)uVar8 * 8) = (short)uVar4;
      }
    }
    *(undefined4 *)(lVar1 + 0x2c) = *(undefined4 *)(lVar1 + 0x28);
    FUN_1804a1f10(lVar1,lVar1 + 0x30,uVar3);
    FUN_18049b180(param_1);
    lVar2 = *param_1;
    local_3c = *(undefined1 *)(lVar2 + 0x38);
    local_3b = 0;
    local_40 = *(undefined4 *)(*(longlong *)(lVar2 + 8) + 0x9c);
    local_48 = *(undefined8 *)(lVar2 + 0x18);
    *(undefined8 **)(lVar2 + 0x18) = &local_48;
    FUN_1804a3350(param_1);
    FUN_1804a19c0(lVar2);
LAB_1804a4001:
    *(undefined4 *)(lVar1 + 0x2c) = *(undefined4 *)(lVar1 + 0x28);
    if (uVar10 == 0xffffffff) goto LAB_1804a40de;
  }
  else {
    if (uVar3 == 0xffffffff) goto LAB_1804a4001;
    if (uVar10 == 0xffffffff) {
      *(undefined4 *)(lVar1 + 0x2c) = *(undefined4 *)(lVar1 + 0x28);
      uVar10 = uVar3;
    }
    else {
      uVar4 = uVar10;
      while( true ) {
        uVar8 = *(uint *)(*(longlong *)(lVar1 + 0x48) + (ulonglong)uVar4 * 8) >> 0x10;
        if ((uVar8 == 0x7fff) || (iVar9 = uVar8 + uVar4, iVar9 == 0x7ffe)) break;
        uVar4 = iVar9 - 0x7fff;
      }
      uVar3 = (uVar3 - uVar4) + 0x7fff;
      if (0xffff < uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_18049e240(*(undefined8 *)(lVar1 + 8),0x99b);
      }
      *(short *)(*(longlong *)(lVar1 + 0x48) + 2 + (ulonglong)uVar4 * 8) = (short)uVar3;
      *(undefined4 *)(lVar1 + 0x2c) = *(undefined4 *)(lVar1 + 0x28);
    }
  }
  uVar3 = *(uint *)(lVar1 + 0x30);
  if (uVar3 == 0xffffffff) {
    *(uint *)(lVar1 + 0x30) = uVar10;
  }
  else {
    while( true ) {
      uVar4 = *(uint *)(*(longlong *)(lVar1 + 0x48) + (ulonglong)uVar3 * 8) >> 0x10;
      if ((uVar4 == 0x7fff) || (iVar9 = uVar4 + uVar3, iVar9 == 0x7ffe)) break;
      uVar3 = iVar9 - 0x7fff;
    }
    uVar10 = (uVar10 - uVar3) + 0x7fff;
    if (0xffff < uVar10) {
                    /* WARNING: Subroutine does not return */
      FUN_18049e240(*(undefined8 *)(lVar1 + 8),0x99b);
    }
    *(short *)(*(longlong *)(lVar1 + 0x48) + 2 + (ulonglong)uVar3 * 8) = (short)uVar10;
  }
LAB_1804a40de:
  if (*(int *)((longlong)param_1 + 0x34) == 0x108) {
    FUN_18049b180();
    return;
  }
  if (param_2 == (int)param_1[0xe]) {
                    /* WARNING: Subroutine does not return */
    FUN_18049e250(param_1,0x108);
  }
  uVar6 = FUN_18049b3d0();
  uVar7 = FUN_18049b3d0(param_1,0x10d);
                    /* WARNING: Subroutine does not return */
  FUN_18049b070(param_1,*(undefined4 *)((longlong)param_1 + 0x34),0xa4a,uVar6,uVar7,param_2);
}



/* ===== 1804a4190 FUN_1804a4190 ===== */

void FUN_1804a4190(longlong *param_1)

{
  byte *pbVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong *puVar6;
  
  lVar3 = *param_1;
  *(undefined4 *)(lVar3 + 0x2c) = *(undefined4 *)(lVar3 + 0x28);
  pbVar1 = (byte *)(*(longlong *)(lVar3 + 0x18) + 0xd);
  *pbVar1 = *pbVar1 | 4;
  FUN_18049b180();
  if ((*(int *)((longlong)param_1 + 0x34) != 0x12a) &&
     (1 < *(int *)((longlong)param_1 + 0x34) - 0x103U)) {
                    /* WARNING: Subroutine does not return */
    FUN_18049e250(param_1,0x12a);
  }
  uVar5 = param_1[2] & 0x7fffffffffff;
  FUN_18049b180(param_1);
  puVar6 = (ulonglong *)
           (param_1[0x12] + (ulonglong)*(uint *)(*(longlong *)(*param_1 + 0x18) + 8) * 0x18);
  while( true ) {
    if ((ulonglong *)(param_1[0x12] + (ulonglong)*(uint *)((longlong)param_1 + 0x9c) * 0x18) <=
        puVar6) {
      uVar4 = FUN_1804a1d30(param_1,uVar5,CONCAT71((int7)((ulonglong)puVar6 >> 8),4),
                            *(undefined4 *)(lVar3 + 0x28));
      if (*(int *)((longlong)param_1 + 0x34) != 0x128) {
                    /* WARNING: Subroutine does not return */
        FUN_18049e250(param_1,0x128);
      }
      do {
        FUN_18049b180(param_1);
        while (iVar2 = *(int *)((longlong)param_1 + 0x34), iVar2 == 0x128) {
          *(int *)((longlong)param_1 + 0xac) = *(int *)((longlong)param_1 + 0xac) + 1;
          if (199 < *(uint *)((longlong)param_1 + 0xac)) {
                    /* WARNING: Subroutine does not return */
            FUN_18049b070(param_1,0,0x8e4);
          }
          FUN_1804a4190();
          *(int *)((longlong)param_1 + 0xac) = *(int *)((longlong)param_1 + 0xac) + -1;
        }
      } while (iVar2 == 0x3b);
      if (((((iVar2 == 0x106) || (iVar2 == 0x107)) || (iVar2 == 0x108)) ||
          ((iVar2 == 0x117 || (iVar2 == 300)))) && (iVar2 != 0x117)) {
        *(undefined1 *)(param_1[0x12] + 0x10 + (ulonglong)uVar4 * 0x18) =
             *(undefined1 *)(*(longlong *)(lVar3 + 0x18) + 0xc);
      }
      FUN_1804a1df0(param_1,*(undefined8 *)(lVar3 + 0x18),uVar4);
      return;
    }
    if ((*puVar6 == uVar5) && ((*(byte *)((longlong)puVar6 + 0x11) & 4) != 0)) break;
    puVar6 = puVar6 + 3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_18049b070(param_1,0,0xb64,uVar5 + 0x18);
}



/* ===== 1804a4340 FUN_1804a4340 ===== */

void FUN_1804a4340(longlong *param_1,int param_2)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  undefined4 uVar12;
  ulonglong uVar13;
  int iVar14;
  int iVar15;
  ulonglong uVar16;
  uint local_88 [2];
  int local_80;
  
  FUN_18049b180();
  if (*(int *)((longlong)param_1 + 0x34) == 0x10b) {
    FUN_18049b180(param_1);
    if ((*(int *)((longlong)param_1 + 0x34) != 0x12a) &&
       (1 < *(int *)((longlong)param_1 + 0x34) - 0x103U)) {
                    /* WARNING: Subroutine does not return */
      FUN_18049e250(param_1,0x12a);
    }
    uVar13 = param_1[2];
    lVar2 = *param_1;
    FUN_18049b180(param_1);
    uVar11 = FUN_1804a5d20(param_1,0,uVar13 & 0x7fffffffffff);
    *(char *)(param_1[0x12] + 0x11 + (ulonglong)uVar11 * 0x18) = (char)param_2;
    iVar14 = *(int *)(lVar2 + 0x34);
    uVar11 = iVar14 + 1;
    if (*(byte *)(lVar2 + 0x5a) < uVar11) {
      if (0xf9 < uVar11) {
                    /* WARNING: Subroutine does not return */
        FUN_18049e240(*(undefined8 *)(lVar2 + 8),0x9b6);
      }
      *(char *)(lVar2 + 0x5a) = (char)uVar11;
    }
    *(uint *)(lVar2 + 0x34) = uVar11;
    iVar15 = 1;
    lVar3 = *param_1;
    uVar11 = *(uint *)(lVar3 + 0x38);
    do {
      lVar4 = param_1[0x12];
      iVar15 = iVar15 + -1;
      uVar1 = *(ushort *)(lVar3 + 0x5c + (ulonglong)uVar11 * 2);
      uVar16 = (ulonglong)uVar1;
      uVar13 = *(ulonglong *)(lVar4 + uVar16 * 0x18);
      if (uVar13 < 7) {
        *(undefined4 *)(lVar4 + 8 + uVar16 * 0x18) = *(undefined4 *)(lVar3 + 0x28);
        *(char *)(lVar4 + 0x10 + uVar16 * 0x18) = (char)uVar11;
      }
      else {
        uVar13 = (ulonglong)(*(uint *)(uVar13 + 0xc) & 0x1f);
        *(undefined4 *)(lVar4 + 8 + uVar16 * 0x18) = *(undefined4 *)(lVar3 + 0x28);
        *(char *)(lVar4 + 0x10 + uVar16 * 0x18) = (char)uVar11;
        *(undefined2 *)(lVar4 + 0x12 + uVar16 * 0x18) =
             *(undefined2 *)((longlong)param_1 + uVar13 * 2 + 0xb8);
        *(ushort *)((longlong)param_1 + uVar13 * 2 + 0xb8) = uVar1;
      }
      uVar11 = uVar11 + 1;
    } while (iVar15 != 0);
    *(uint *)(lVar3 + 0x38) = uVar11;
    FUN_1804a2e70(param_1,local_88,0,(int)param_1[0xe]);
    if ((local_80 == 0xc) && (*(uint *)(lVar2 + 0x38) <= local_88[0])) {
      *(int *)(lVar2 + 0x34) = *(int *)(lVar2 + 0x34) + -1;
    }
    FUN_1804a0bd0(lVar2,local_88,iVar14);
    *(undefined4 *)
     (param_1[0x12] + 8 +
     (ulonglong)*(ushort *)(lVar2 + 0x5c + (ulonglong)(*(int *)(lVar2 + 0x38) - 1) * 2) * 0x18) =
         *(undefined4 *)(lVar2 + 0x28);
    return;
  }
  iVar14 = 0;
  if (param_2 != 0) {
    lVar2 = param_1[0x17];
    lVar3 = param_1[0x18];
    lVar4 = param_1[0x19];
    lVar6 = param_1[0x1a];
    lVar7 = param_1[0x1b];
    lVar8 = param_1[0x1c];
    lVar9 = param_1[0x1d];
    lVar10 = param_1[0x1e];
    do {
      if ((*(int *)((longlong)param_1 + 0x34) != 0x12a) &&
         (1 < *(int *)((longlong)param_1 + 0x34) - 0x103U)) {
LAB_1804a4681:
                    /* WARNING: Subroutine does not return */
        FUN_18049e250(param_1,0x12a);
      }
      uVar13 = param_1[2];
      FUN_18049b180(param_1);
      uVar11 = FUN_1804a5d20(param_1,iVar14,uVar13 & 0x7fffffffffff);
      lVar5 = param_1[0x12];
      uVar16 = (ulonglong)uVar11;
      uVar13 = *(ulonglong *)(lVar5 + uVar16 * 0x18);
      if (uVar13 < 7) {
        uVar13 = 0xffffffffffffffff;
      }
      else {
        uVar13 = (ulonglong)(*(uint *)(uVar13 + 0xc) & 0x1f);
      }
      *(undefined2 *)(lVar5 + 0x12 + uVar16 * 0x18) =
           *(undefined2 *)((longlong)param_1 + uVar13 * 2 + 0xb8);
      *(short *)((longlong)param_1 + uVar13 * 2 + 0xb8) = (short)uVar11;
      *(char *)(lVar5 + 0x11 + uVar16 * 0x18) = (char)param_2;
      iVar15 = *(int *)((longlong)param_1 + 0x34);
      if (iVar15 != 0x2c) goto LAB_1804a458e;
      iVar14 = iVar14 + 1;
      FUN_18049b180(param_1);
    } while( true );
  }
  while( true ) {
    if ((*(int *)((longlong)param_1 + 0x34) != 0x12a) &&
       (1 < *(int *)((longlong)param_1 + 0x34) - 0x103U)) goto LAB_1804a4681;
    uVar13 = param_1[2];
    FUN_18049b180(param_1);
    FUN_1804a5d20(param_1,iVar14,uVar13 & 0x7fffffffffff);
    iVar15 = *(int *)((longlong)param_1 + 0x34);
    if (iVar15 != 0x2c) break;
    iVar14 = iVar14 + 1;
    FUN_18049b180(param_1);
  }
LAB_1804a45ac:
  if (iVar15 == 0x3d) {
    FUN_18049b180(param_1);
    uVar12 = FUN_18049f310(param_1,local_88);
  }
  else {
    local_80 = 0xf;
    uVar12 = 0;
  }
  FUN_18049cf00(param_1,iVar14 + 1,uVar12,local_88);
  FUN_1804a5ab0(param_1,iVar14 + 1);
  return;
LAB_1804a458e:
  param_1[0x17] = lVar2;
  param_1[0x18] = lVar3;
  param_1[0x19] = lVar4;
  param_1[0x1a] = lVar6;
  param_1[0x1b] = lVar7;
  param_1[0x1c] = lVar8;
  param_1[0x1d] = lVar9;
  param_1[0x1e] = lVar10;
  goto LAB_1804a45ac;
}



