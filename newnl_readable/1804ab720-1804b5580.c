/* ===== 1804ab720 FUN_1804ab720 ===== */

void FUN_1804ab720(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong *puVar4;
  
  lVar1 = FUN_180492ab0(param_1,0,1);
  *(longlong *)(lVar1 + 0x20) = lVar1;
  uVar2 = FUN_180491d30(param_1,&DAT_18056fb34,1);
  uVar3 = FUN_180491d30(param_1,"__mode",6);
  puVar4 = (ulonglong *)FUN_180493400(param_1,lVar1,uVar3);
  *puVar4 = uVar2 | 0xfffd800000000000;
  *(undefined1 *)(lVar1 + 10) = 0xf7;
  *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x2e0) = lVar1;
  return;
}



/* ===== 1804ab7b0 FUN_1804ab7b0 ===== */

ulonglong FUN_1804ab7b0(longlong *param_1,uint param_2,uint param_3)

{
  ushort uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  
  uVar5 = (param_2 ^ param_3) - (param_3 >> 0x12 | param_3 << 0xe);
  uVar5 = (param_3 >> 0xd ^ uVar5) - (uVar5 >> 0x13) & 0x7f;
  uVar1 = *(ushort *)((longlong)param_1 + (ulonglong)uVar5 * 2 + 0xd0);
  if (uVar1 != 0) {
    lVar3 = *param_1;
    do {
      uVar4 = (ulonglong)uVar1;
      if ((*(uint *)(lVar3 + uVar4 * 0x18) == param_2) &&
         (*(uint *)(lVar3 + 4 + uVar4 * 0x18) == param_3)) {
        return uVar4;
      }
      uVar1 = *(ushort *)(lVar3 + 10 + uVar4 * 0x18);
    } while (uVar1 != 0);
  }
  uVar2 = *(uint *)(param_1 + 1);
  uVar4 = (ulonglong)uVar2;
  if (*(uint *)((longlong)param_1 + 0xc) <= uVar2) {
    if (0xffff < uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_180484550(param_1[2],0x8b);
    }
    lVar3 = FUN_180491670(param_1[2],*param_1,(uint *)((longlong)param_1 + 0xc),0x10000,0x18);
    *param_1 = lVar3;
  }
  *(uint *)(param_1 + 1) = uVar2 + 1;
  *(uint *)(*param_1 + uVar4 * 0x18) = param_2;
  *(uint *)(*param_1 + 4 + uVar4 * 0x18) = param_3;
  *(undefined2 *)(*param_1 + 8 + uVar4 * 0x18) = 0;
  *(undefined2 *)(*param_1 + 10 + uVar4 * 0x18) =
       *(undefined2 *)((longlong)param_1 + (ulonglong)uVar5 * 2 + 0xd0);
  *(undefined8 *)(*param_1 + 0x10 + uVar4 * 0x18) = 0;
  *(short *)((longlong)param_1 + (ulonglong)uVar5 * 2 + 0xd0) = (short)uVar2;
  return uVar4;
}



/* ===== 1804ab8d0 FUN_1804ab8d0 ===== */

longlong * FUN_1804ab8d0(longlong *param_1,ulonglong param_2,int param_3)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  uVar2 = param_2 & 0xffffffff;
  while( true ) {
    uVar1 = *(uint *)(*param_1 + uVar2 * 0x18);
    if ((uVar1 >> 0x1c != 8) && ((uVar1 & 0xf0800000) != 0x20800000)) break;
    param_2 = (ulonglong)(uVar1 & 0xffff);
    uVar2 = param_2;
  }
  if ((uVar1 >> 0x1c == 2) &&
     ((byte)((uint)*(undefined4 *)(*param_1 + (ulonglong)(uVar1 & 0xffff) * 0x18) >> 0x1c) == 6)) {
    puVar3 = (ulonglong *)FUN_180492860(param_1[4],param_1[3] + 0x78);
  }
  else {
    puVar3 = (ulonglong *)FUN_1804927e0(param_1[4],-(int)param_2);
  }
  if ((puVar3 != (ulonglong *)0x0) && ((int)((longlong)*puVar3 >> 0x2f) == -0xc)) {
    plVar4 = (longlong *)
             FUN_180492860(*puVar3 & 0x7fffffffffff,
                           *(undefined8 *)(param_1[3] + 0x1b0 + (longlong)param_3 * 8));
    if (plVar4 != (longlong *)0x0) {
      plVar5 = (longlong *)0x0;
      if (*plVar4 != -1) {
        plVar5 = plVar4;
      }
      return plVar5;
    }
  }
  return (longlong *)0x0;
}



/* ===== 1804ab9b0 FUN_1804ab9b0 ===== */

ulonglong FUN_1804ab9b0(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  
  uVar2 = *(uint *)(param_1 + 1);
  if (*(uint *)((longlong)param_1 + 0xc) <= uVar2) {
    if (0xffff < uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_180484550(param_1[2],0x8b);
    }
    lVar3 = FUN_180491670(param_1[2],*param_1,(uint *)((longlong)param_1 + 0xc),0x10000,0x18);
    *param_1 = lVar3;
  }
  *(uint *)(param_1 + 1) = uVar2 + 1;
  puVar1 = (undefined8 *)(*param_1 + (ulonglong)uVar2 * 0x18);
  *param_2 = puVar1;
  *puVar1 = 0;
  *(undefined4 *)(puVar1 + 1) = 0;
  puVar1[2] = 0;
  return (ulonglong)uVar2;
}



/* ===== 1804aba40 FUN_1804aba40 ===== */

uint * FUN_1804aba40(longlong *param_1,ulonglong param_2)

{
  uint uVar1;
  uint *puVar2;
  
  param_2 = param_2 & 0xffffffff;
  while( true ) {
    puVar2 = (uint *)(*param_1 + param_2 * 0x18);
    uVar1 = *puVar2;
    if (((byte)(uVar1 >> 0x1c) != 8) && ((uVar1 & 0xf0800000) != 0x20800000)) break;
    param_2 = (ulonglong)(uVar1 & 0xffff);
  }
  return puVar2;
}



/* ===== 1804aba80 FUN_1804aba80 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804aba80(longlong param_1,undefined4 param_2,longlong param_3)

{
  uint uVar1;
  ulonglong uVar2;
  undefined2 *puVar3;
  longlong lVar4;
  undefined1 auStack_268 [32];
  undefined2 *local_248;
  undefined2 *local_240;
  undefined8 local_238;
  longlong local_230;
  undefined4 local_228;
  int local_224;
  undefined2 local_21f [127];
  undefined2 local_120 [132];
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_268;
  local_240 = local_120;
  local_248 = local_120;
  local_238 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x188);
  local_224 = 1;
  local_228 = 0;
  if (param_3 != 0) {
    uVar1 = *(uint *)(param_3 + 0x14);
    uVar2 = (ulonglong)uVar1;
    if (local_120 < (undefined2 *)((longlong)local_21f + uVar2)) {
      local_224 = 0;
    }
    else {
      local_228 = 1;
      local_248 = (undefined2 *)((longlong)local_120 - uVar2);
      while (uVar1 != 0) {
        uVar1 = (int)uVar2 - 1;
        uVar2 = (ulonglong)uVar1;
        *(undefined1 *)((longlong)local_248 + uVar2) = *(undefined1 *)(param_3 + 0x18 + uVar2);
      }
    }
  }
  local_230 = param_1;
  FUN_1804aa780(&local_248,param_2);
  if (local_224 == 0) {
    lVar4 = 1;
    puVar3 = &DAT_1806dfbb4;
  }
  else {
    lVar4 = (longlong)local_240 - (longlong)local_248;
    puVar3 = local_248;
  }
  FUN_180491d30(param_1,puVar3,lVar4);
  return;
}



/* ===== 1804abb90 FUN_1804abb90 ===== */

void FUN_1804abb90(longlong param_1,double *param_2,int param_3)

{
  longlong *plVar1;
  double dVar2;
  longlong lVar3;
  undefined8 uVar4;
  double dVar5;
  
  lVar3 = *(longlong *)(param_1 + 0x10);
  plVar1 = (longlong *)(lVar3 + 200);
  *plVar1 = *(longlong *)(lVar3 + 0xd8);
  *(longlong *)(lVar3 + 0xe0) = param_1;
  if (param_3 == 0x10) {
    dVar5 = *param_2;
    dVar2 = param_2[1];
  }
  else {
    dVar5 = (double)*(float *)param_2;
    dVar2 = (double)*(float *)((longlong)param_2 + 4);
  }
  FUN_1804b8ff0(plVar1,0xf000035,dVar5);
  if ((((ulonglong)dVar2 & 0x8000000000000000) == 0) || (NAN(dVar2))) {
    FUN_1804a9eb0(plVar1,0x2b);
  }
  FUN_1804b8ff0(plVar1,0xf000035,dVar2);
  uVar4 = 0x69;
  if ('`' < *(char *)(*plVar1 + -1)) {
    uVar4 = 0x49;
  }
  FUN_1804a9eb0(plVar1,uVar4);
  FUN_180491d30(param_1,*(undefined8 *)(lVar3 + 0xd8),*(int *)plVar1 - *(int *)(lVar3 + 0xd8));
  return;
}



/* ===== 1804abc70 FUN_1804abc70 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804abc70(undefined8 param_1,ulonglong param_2,int param_3)

{
  bool bVar1;
  ulonglong uVar2;
  char *pcVar3;
  char *pcVar4;
  undefined1 auStack_48 [53];
  char local_13;
  char local_12 [2];
  ulonglong local_10;
  
  local_10 = DAT_180919500 ^ (ulonglong)auStack_48;
  bVar1 = false;
  local_12[0] = 'L';
  local_12[1] = 'L';
  if (param_3 == 0) {
    pcVar4 = local_12;
    if ((longlong)param_2 < 0) {
      param_2 = -param_2;
      bVar1 = true;
    }
  }
  else {
    local_13 = 'U';
    pcVar4 = &local_13;
  }
  do {
    pcVar3 = pcVar4;
    pcVar4 = pcVar3 + -1;
    uVar2 = param_2 / 10;
    *pcVar4 = (char)param_2 + (char)uVar2 * -10 + '0';
    param_2 = uVar2;
  } while (uVar2 != 0);
  if (bVar1) {
    pcVar4 = pcVar3 + -2;
    *pcVar4 = '-';
  }
  FUN_180491d30(param_1,pcVar4,local_12 + (2 - (longlong)pcVar4));
  return;
}



/* ===== 1804abd40 FUN_1804abd40 ===== */

undefined4 FUN_1804abd40(longlong *param_1,uint param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  
  lVar1 = *param_1;
  uVar3 = (ulonglong)param_2;
  bVar2 = (byte)((uint)*(undefined4 *)(lVar1 + uVar3 * 0x18) >> 0x18);
  while (bVar2 >> 4 == 8) {
    uVar3 = (ulonglong)*(ushort *)(lVar1 + uVar3 * 0x18);
    bVar2 = (byte)((uint)*(undefined4 *)(lVar1 + uVar3 * 0x18) >> 0x18);
  }
  if (bVar2 >> 4 < 6) {
    return *(undefined4 *)(lVar1 + 4 + uVar3 * 0x18);
  }
  return 0xffffffff;
}



/* ===== 1804abda0 FUN_1804abda0 ===== */

ulonglong FUN_1804abda0(longlong *param_1,ushort *param_2,ulonglong param_3)

{
  ushort uVar1;
  uint uVar2;
  longlong lVar3;
  byte bVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  
  uVar7 = 0;
  if ((byte)((uint)*(undefined4 *)param_2 >> 0x1c) == 1) {
    uVar1 = param_2[4];
    uVar6 = 0;
    uVar7 = (ulonglong)*(uint *)(param_2 + 2);
    if (uVar1 != 0) {
      uVar8 = uVar6;
      do {
        uVar2 = *(uint *)(*param_1 + (ulonglong)uVar1 * 0x18);
        uVar1 = *(ushort *)(*param_1 + 8 + (ulonglong)uVar1 * 0x18);
        uVar6 = uVar2 & 0xffff;
        if ((byte)(uVar2 >> 0x1c) != 9) {
          uVar6 = uVar8;
        }
        uVar8 = uVar6;
      } while (uVar1 != 0);
    }
    lVar3 = *param_1;
    uVar5 = (ulonglong)uVar6;
    bVar4 = (byte)((uint)*(undefined4 *)(lVar3 + uVar5 * 0x18) >> 0x18);
    while (param_2 = (ushort *)(lVar3 + uVar5 * 0x18), bVar4 >> 4 == 8) {
      uVar5 = (ulonglong)*param_2;
      bVar4 = (byte)((uint)*(undefined4 *)(lVar3 + uVar5 * 0x18) >> 0x18);
    }
  }
  do {
    uVar1 = *param_2;
    param_2 = (ushort *)(*param_1 + (ulonglong)uVar1 * 0x18);
  } while ((byte)((uint)*(undefined4 *)(*param_1 + (ulonglong)uVar1 * 0x18) >> 0x1c) == 8);
  uVar7 = (ulonglong)*(uint *)(param_2 + 2) * (param_3 & 0xffffffff) + uVar7;
  uVar5 = 0xffffffff;
  if (uVar7 < 0x80000000) {
    uVar5 = uVar7 & 0xffffffff;
  }
  return uVar5;
}



/* ===== 1804abe70 FUN_1804abe70 ===== */

uint FUN_1804abe70(uint *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = *param_1;
  uVar2 = (ulonglong)uVar1;
  if (99 < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_1804adef0(*(undefined8 *)(param_1 + 4),0x8e4);
  }
  param_1[uVar2 * 6 + 0x10] = param_2;
  param_1[uVar2 * 6 + 0x11] = param_3;
  *(undefined2 *)(param_1 + uVar2 * 6 + 0x12) = 0;
  (param_1 + uVar2 * 6 + 0x14)[0] = 0;
  (param_1 + uVar2 * 6 + 0x14)[1] = 0;
  *(undefined2 *)((longlong)param_1 + uVar2 * 0x18 + 0x4a) =
       *(undefined2 *)((longlong)param_1 + (ulonglong)param_1[1] * 0x18 + 0x4a);
  *(short *)((longlong)param_1 + (ulonglong)param_1[1] * 0x18 + 0x4a) = (short)uVar1;
  *param_1 = uVar1 + 1;
  return uVar1;
}



/* ===== 1804abef0 FUN_1804abef0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804abef0(undefined8 param_1)

{
  undefined1 auStack_9d8 [32];
  undefined1 local_9b8 [12];
  undefined4 local_9ac;
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_9d8;
  FUN_1804ad490(param_1,local_9b8,0);
  local_9ac = 2;
  FUN_1804adb60(param_1,local_9b8);
  FUN_1804acaa0(param_1,local_9b8);
  return;
}



/* ===== 1804abf60 FUN_1804abf60 ===== */

void FUN_1804abf60(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  
  uVar3 = *(int *)(param_1 + 4) - 0x118;
  if (uVar3 < 0xf) {
    do {
      switch(uVar3) {
      case 0:
        *(uint *)(param_2 + 0x2c) = *(uint *)(param_2 + 0x2c) | 0x2000000;
        break;
      case 1:
        *(uint *)(param_2 + 0x2c) = *(uint *)(param_2 + 0x2c) | 0x1000000;
        break;
      case 2:
      case 9:
      case 0xd:
        break;
      default:
        goto switchD_1804abfad_caseD_3;
      case 10:
        FUN_1804af150(param_1);
        if (*(int *)(param_1 + 4) != 0x28) {
LAB_1804ac172:
                    /* WARNING: Subroutine does not return */
          FUN_1804adf50(param_1,0x28);
        }
        FUN_1804af150(param_1);
        if (*(int *)(param_1 + 4) == 0x101) {
          uVar5 = *(ulonglong *)(param_1 + 0x10);
          iVar4 = FUN_1804af150(param_1);
          while (iVar4 == 0x101) {
            FUN_180498630(*(undefined8 *)(param_1 + 0x48),&DAT_180741e28,uVar5 + 0x18,
                          *(longlong *)(param_1 + 0x10) + 0x18);
            plVar1 = (longlong *)(*(longlong *)(param_1 + 0x48) + 0x28);
            *plVar1 = *plVar1 + -8;
            uVar5 = **(ulonglong **)(*(longlong *)(param_1 + 0x48) + 0x28) & 0x7fffffffffff;
            iVar4 = FUN_1804af150(param_1);
          }
          *(ulonglong *)(param_2 + 0x20) = uVar5;
        }
        iVar4 = *(int *)(param_1 + 4);
        goto joined_r0x0001804ac130;
      case 0xb:
        FUN_1804ac860(param_1,param_2);
        goto LAB_1804ac147;
      case 0xc:
        FUN_1804af150(param_1);
        if (*(int *)(param_1 + 4) != 0x28) goto LAB_1804ac172;
        FUN_1804af150(param_1);
        iVar4 = *(int *)(param_1 + 4);
        while (iVar4 == 0x100) {
          lVar2 = *(longlong *)(param_1 + 0x10);
          FUN_1804af150(param_1);
          if (((*(int *)(lVar2 + 0x14) == 5) && (*(int *)(lVar2 + 0x18) == 0x67696c61)) &&
             (*(char *)(lVar2 + 0x1c) == 'n')) {
            iVar4 = 4;
            if (*(int *)(param_1 + 4) == 0x28) {
              uVar3 = FUN_1804ad420();
              if (uVar3 == 0) {
                iVar4 = 0;
              }
              else {
                iVar4 = 0x1f;
                if (uVar3 != 0) {
                  for (; uVar3 >> iVar4 == 0; iVar4 = iVar4 + -1) {
                  }
                }
              }
            }
            *(uint *)(param_2 + 0x2c) =
                 (iVar4 << 0x10 ^ *(uint *)(param_2 + 0x2c)) & 0xf0000 ^ *(uint *)(param_2 + 0x2c) |
                 1;
          }
          else if (*(int *)(param_1 + 4) == 0x28) {
            FUN_1804af150(param_1);
            iVar4 = *(int *)(param_1 + 4);
            while (iVar4 != 0x29) {
              if (iVar4 == 0x103) goto LAB_1804ac180;
              FUN_1804af150(param_1);
              iVar4 = *(int *)(param_1 + 4);
            }
            FUN_1804af150(param_1);
          }
          iVar4 = *(int *)(param_1 + 4);
        }
joined_r0x0001804ac130:
        if (iVar4 != 0x29) {
LAB_1804ac180:
                    /* WARNING: Subroutine does not return */
          FUN_1804adf50(param_1,0x29);
        }
        break;
      case 0xe:
        *(undefined1 *)(param_2 + 0x2d) = *(undefined1 *)(*(longlong *)(param_1 + 0x18) + 4);
      }
      FUN_1804af150(param_1);
LAB_1804ac147:
      uVar3 = *(int *)(param_1 + 4) - 0x118;
    } while (uVar3 < 0xf);
switchD_1804abfad_caseD_3:
  }
  return;
}



/* ===== 1804ac1d0 FUN_1804ac1d0 ===== */

undefined4 FUN_1804ac1d0(longlong param_1,longlong *param_2,ulonglong param_3)

{
  uint uVar1;
  longlong lVar2;
  undefined4 uVar3;
  byte bVar4;
  uint uVar5;
  int local_res8 [2];
  
  param_3 = param_3 & 0xffffffff;
  lVar2 = **(longlong **)(param_1 + 0x50);
  uVar1 = *(uint *)(lVar2 + param_3 * 0x18);
  bVar4 = (byte)(uVar1 >> 0x18);
  while (bVar4 >> 4 == 8) {
    param_3 = (ulonglong)(*(uint *)(lVar2 + param_3 * 0x18) & 0xffff);
    uVar1 = *(uint *)(lVar2 + param_3 * 0x18);
    bVar4 = (byte)(uVar1 >> 0x18);
  }
  if ((uVar1 & 0xfe000000) == 0x2000000) {
    uVar5 = *(uint *)(lVar2 + 4 + param_3 * 0x18);
    if (uVar5 < 5) {
      if (*(int *)(param_1 + 4) != 0x3d) {
                    /* WARNING: Subroutine does not return */
        FUN_1804adf50(param_1,0x3d);
      }
      FUN_1804af150();
      *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + 1;
      if (0x14 < *(int *)(param_1 + 0x6c)) {
                    /* WARNING: Subroutine does not return */
        FUN_1804adef0(param_1,0x8e4);
      }
      FUN_1804aeb20(param_1,local_res8);
      FUN_1804ae920(param_1,local_res8);
      *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + -1;
      FUN_1804ae0c0(param_1,local_res8,0);
      uVar3 = FUN_1804ab9b0(*(undefined8 *)(param_1 + 0x50),param_2);
      *(uint *)*param_2 = ((uint)param_3 | 0x2000000) + 0xb0000000;
      bVar4 = (char)uVar5 * -8 + 0x20;
      uVar5 = local_res8[0] << (bVar4 & 0x1f);
      if ((uVar1 >> 0x17 & 1) == 0) {
        uVar5 = (int)uVar5 >> (bVar4 & 0x1f);
      }
      else {
        uVar5 = uVar5 >> (bVar4 & 0x1f);
      }
      *(uint *)(*param_2 + 4) = uVar5;
      return uVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1804adef0(param_1,0xc68);
}



/* ===== 1804ac330 FUN_1804ac330 ===== */

ulonglong FUN_1804ac330(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int local_res8;
  uint local_resc;
  int *local_res18 [2];
  
  uVar4 = FUN_1804b04f0(param_1,param_2,0x50000001);
  uVar8 = (ulonglong)uVar4;
  if (*(int *)(param_1 + 4) != 0x7b) {
    return uVar8;
  }
  FUN_1804af150(param_1);
  uVar6 = 0x5002000a;
  local_res8 = 0;
  local_resc = 9;
  uVar7 = uVar8;
  if (*(int *)(param_1 + 4) != 0x100) {
LAB_1804ac55a:
                    /* WARNING: Subroutine does not return */
    FUN_1804adf50(param_1,0x100);
  }
  do {
    lVar1 = *(longlong *)(param_1 + 0x10);
    if (*(int *)(param_1 + 0xc) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1804adf80(param_1,0,0xcef,lVar1 + 0x18);
    }
    FUN_1804af150();
    if (*(int *)(param_1 + 4) == 0x3d) {
      FUN_1804af150(param_1);
      *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + 1;
      if (0x14 < *(int *)(param_1 + 0x6c)) {
                    /* WARNING: Subroutine does not return */
        FUN_1804adef0(param_1,0x8e4);
      }
      FUN_1804aeb20(param_1,&local_res8);
      FUN_1804ae920(param_1,&local_res8);
      *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + -1;
      FUN_1804ae0c0(param_1,&local_res8,0);
      uVar5 = (ulonglong)local_resc;
      lVar2 = **(longlong **)(param_1 + 0x50);
      uVar4 = *(uint *)(lVar2 + uVar5 * 0x18);
      bVar3 = (byte)(uVar4 >> 0x18);
      while (bVar3 >> 4 == 8) {
        uVar5 = (ulonglong)*(ushort *)(lVar2 + uVar5 * 0x18);
        uVar4 = *(uint *)(lVar2 + uVar5 * 0x18);
        bVar3 = (byte)(uVar4 >> 0x18);
      }
      if ((uVar4 & 0xfc000000) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1804adef0(param_1,0x219);
      }
      if (local_resc == 10) {
        if (local_res8 < 0) goto LAB_1804ac473;
      }
      else if (local_res8 < 0) {
        uVar6 = 0x50020009;
      }
      local_resc = 9;
    }
LAB_1804ac473:
    uVar4 = FUN_1804ab9b0(*(undefined8 *)(param_1 + 0x50),local_res18);
    *(short *)(**(longlong **)(param_1 + 0x50) + 8 + uVar7 * 0x18) = (short)uVar4;
    *(byte *)(lVar1 + 8) = *(byte *)(lVar1 + 8) | 0x20;
    *(longlong *)(local_res18[0] + 4) = lVar1;
    *local_res18[0] = (local_resc | 0x2000000) + 0xb0000000;
    local_res18[0][1] = local_res8;
    local_res8 = local_res8 + 1;
    if (local_res8 == -0x80000000) {
      local_resc = 10;
    }
    FUN_1804ab1b0(*(undefined8 *)(param_1 + 0x50));
    if (*(int *)(param_1 + 4) != 0x2c) {
      if (*(int *)(param_1 + 4) != 0x7d) {
                    /* WARNING: Subroutine does not return */
        FUN_1804adf50(param_1,0x7d);
      }
LAB_1804ac51d:
      FUN_1804af150(param_1);
      *(undefined4 *)(**(longlong **)(param_1 + 0x50) + uVar8 * 0x18) = uVar6;
      *(undefined4 *)(**(longlong **)(param_1 + 0x50) + 4 + uVar8 * 0x18) = 4;
      return uVar8;
    }
    FUN_1804af150(param_1);
    if (*(int *)(param_1 + 4) == 0x7d) goto LAB_1804ac51d;
    if (*(int *)(param_1 + 4) != 0x100) goto LAB_1804ac55a;
    uVar7 = (ulonglong)uVar4;
  } while( true );
}



/* ===== 1804ac5b0 FUN_1804ac5b0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804ac5b0(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  undefined1 auStack_a18 [32];
  uint *local_9f8 [2];
  undefined1 local_9e8 [12];
  undefined4 local_9dc;
  longlong local_9d0;
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_a18;
  uVar10 = 0;
  uVar8 = 0;
  uVar11 = 0;
  uVar6 = 0x60000000;
  if (*(int *)(param_1 + 4) != 0x29) {
    while (*(int *)(param_1 + 4) != 0x2e) {
      FUN_1804ad490(param_1,local_9e8,0x80000);
      local_9dc = 6;
      FUN_1804adb60(param_1,local_9e8);
      uVar4 = FUN_1804acaa0(param_1,local_9e8);
      uVar7 = (ulonglong)uVar4;
      lVar2 = **(longlong **)(param_1 + 0x50);
      bVar3 = (byte)((uint)*(undefined4 *)(lVar2 + uVar7 * 0x18) >> 0x18);
      while (local_9f8[0] = (uint *)(lVar2 + uVar7 * 0x18), bVar3 >> 4 == 8) {
        uVar7 = (ulonglong)(ushort)*local_9f8[0];
        bVar3 = (byte)((uint)*(undefined4 *)(lVar2 + uVar7 * 0x18) >> 0x18);
      }
      uVar5 = *local_9f8[0];
      if (uVar5 >> 0x1c == 4) goto LAB_1804ac769;
      if ((uVar5 & 0xfc000000) == 0x30000000) {
        uVar4 = uVar5 & 0xffff | 0x20030000;
LAB_1804ac6b9:
        uVar4 = FUN_1804ab7b0(*(longlong **)(param_1 + 0x50),uVar4,8);
      }
      else if (uVar5 >> 0x1c == 6) {
        uVar4 = (uVar4 | 0x30000) + 0x20000000;
        goto LAB_1804ac6b9;
      }
      uVar5 = FUN_1804ab9b0(*(undefined8 *)(param_1 + 0x50),local_9f8);
      if (uVar11 == 0) {
        uVar11 = uVar5;
      }
      else {
        *(short *)(**(longlong **)(param_1 + 0x50) + 8 + uVar8 * 0x18) = (short)uVar5;
      }
      if (local_9d0 != 0) {
        *(byte *)(local_9d0 + 8) = *(byte *)(local_9d0 + 8) | 0x20;
        *(longlong *)(local_9f8[0] + 4) = local_9d0;
      }
      *local_9f8[0] = uVar4 + 0x90000000;
      local_9f8[0][1] = uVar10;
      uVar10 = uVar10 + 1;
      if (*(int *)(param_1 + 4) != 0x2c) goto LAB_1804ac769;
      FUN_1804af150(param_1);
      uVar8 = (ulonglong)uVar5;
    }
    FUN_1804af150(param_1);
    if ((*(int *)(param_1 + 4) != 0x2e) || (FUN_1804af150(param_1), *(int *)(param_1 + 4) != 0x2e))
    {
                    /* WARNING: Subroutine does not return */
      FUN_1804adf50(param_1,0x2e);
    }
    FUN_1804af150(param_1);
    uVar6 = 0x60800000;
  }
LAB_1804ac769:
  if (*(int *)(param_1 + 4) != 0x29) {
                    /* WARNING: Subroutine does not return */
    FUN_1804adf50(param_1,0x29);
  }
  FUN_1804af150();
  if (*(int *)(param_1 + 4) == 0x7b) {
    FUN_1804af150(param_1);
    *(uint *)(param_1 + 0x74) = *(uint *)(param_1 + 0x74) | 0x20;
    iVar9 = 1;
LAB_1804ac792:
    while (iVar1 = *(int *)(param_1 + 4), iVar1 == 0x7b) {
      iVar9 = iVar9 + 1;
      FUN_1804af150(param_1);
    }
    if (iVar1 == 0x7d) {
      iVar9 = iVar9 + -1;
      if (iVar9 == 0) goto code_r0x0001804ac7b0;
    }
    else if (iVar1 == 0x103) {
                    /* WARNING: Subroutine does not return */
      FUN_1804adf50(param_1,0x7d);
    }
    FUN_1804af150(param_1);
    goto LAB_1804ac792;
  }
LAB_1804ac7bb:
  uVar4 = *(uint *)(param_2 + 0x30);
  *(undefined4 *)(param_2 + 0x30) = 0;
  uVar6 = FUN_1804abe70(param_2,uVar4 & 0xffff0000 | uVar6,uVar10);
  *(short *)(param_2 + ((ulonglong)uVar6 + 3) * 0x18) = (short)uVar11;
  return;
code_r0x0001804ac7b0:
  *(uint *)(param_1 + 0x74) = *(uint *)(param_1 + 0x74) & 0xffffffdf;
  *(undefined4 *)(param_1 + 4) = 0x3b;
  goto LAB_1804ac7bb;
}



/* ===== 1804ac860 FUN_1804ac860 ===== */

void FUN_1804ac860(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  
  FUN_1804af150();
  if ((*(int *)(param_1 + 4) != 0x28) || (FUN_1804af150(param_1), *(int *)(param_1 + 4) != 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_1804adf50(param_1,0x28);
  }
  FUN_1804af150(param_1);
  iVar5 = *(int *)(param_1 + 4);
  if (iVar5 == 0x29) {
LAB_1804aca22:
    if (iVar5 != 0x29) goto LAB_1804aca70;
  }
  else {
    do {
      if (iVar5 == 0x100) {
        lVar1 = *(longlong *)(param_1 + 0x10);
        FUN_1804af150(param_1);
        uVar4 = *(uint *)(lVar1 + 0x14);
        pcVar6 = 
        "\aaligned\v__aligned__\x06packed\n__packed__\x04mode\b__mode__\vvector_size\x0f__vector_size__"
        ;
        uVar3 = 7;
        iVar5 = 0;
LAB_1804ac900:
        if ((uVar4 != uVar3) ||
           (iVar2 = memcmp(pcVar6 + 1,(void *)(lVar1 + 0x18),(ulonglong)uVar3), iVar2 != 0))
        goto LAB_1804ac91a;
        switch(iVar5) {
        case 0:
        case 1:
          iVar5 = 4;
          if (*(int *)(param_1 + 4) == 0x28) {
            uVar4 = FUN_1804ad420();
            if (uVar4 == 0) {
              iVar5 = 0;
            }
            else {
              iVar5 = 0x1f;
              if (uVar4 != 0) {
                for (; uVar4 >> iVar5 == 0; iVar5 = iVar5 + -1) {
                }
              }
            }
          }
          *(uint *)(param_2 + 0x2c) =
               (iVar5 << 0x10 ^ *(uint *)(param_2 + 0x2c)) & 0xf0000 ^ *(uint *)(param_2 + 0x2c) | 1
          ;
          goto LAB_1804aca03;
        case 2:
        case 3:
          *(uint *)(param_2 + 0x2c) = *(uint *)(param_2 + 0x2c) | 2;
          goto LAB_1804aca03;
        case 4:
        case 5:
          FUN_1804acea0(param_1,param_2);
          goto LAB_1804aca03;
        case 6:
        case 7:
          uVar4 = FUN_1804ad420(param_1);
          if (uVar4 != 0) {
            *(uint *)(param_2 + 0x2c) = *(uint *)(param_2 + 0x2c) & 0xffffff0f;
            uVar3 = 0x1f;
            if (uVar4 != 0) {
              for (; uVar4 >> uVar3 == 0; uVar3 = uVar3 - 1) {
              }
            }
            *(uint *)(param_2 + 0x2c) = *(uint *)(param_2 + 0x2c) | (uVar3 & 0xf) << 4;
          }
          goto LAB_1804aca03;
        }
        goto switchD_1804ac947_default;
      }
      if (iVar5 < 0x10d) goto LAB_1804aca22;
      FUN_1804af150(param_1);
switchD_1804ac947_default:
      if (*(int *)(param_1 + 4) == 0x28) {
        FUN_1804af150(param_1);
        iVar5 = *(int *)(param_1 + 4);
        while (iVar5 != 0x29) {
          if (iVar5 == 0x103) goto LAB_1804aca70;
          FUN_1804af150(param_1);
          iVar5 = *(int *)(param_1 + 4);
        }
        FUN_1804af150(param_1);
      }
LAB_1804aca03:
      iVar5 = *(int *)(param_1 + 4);
      if (iVar5 != 0x2c) goto LAB_1804aca22;
      FUN_1804af150(param_1);
      iVar5 = *(int *)(param_1 + 4);
    } while (iVar5 != 0x29);
  }
  FUN_1804af150(param_1);
  if (*(int *)(param_1 + 4) == 0x29) {
    FUN_1804af150(param_1);
    return;
  }
LAB_1804aca70:
                    /* WARNING: Subroutine does not return */
  FUN_1804adf50(param_1,0x29);
LAB_1804ac91a:
  iVar5 = iVar5 + 1;
  pcVar6 = pcVar6 + (ulonglong)uVar3 + 1;
  uVar3 = (uint)*pcVar6;
  if (*pcVar6 == '\0') goto switchD_1804ac947_default;
  goto LAB_1804ac900;
}



/* ===== 1804acaa0 FUN_1804acaa0 ===== */

ulonglong FUN_1804acaa0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  byte bVar2;
  ushort uVar3;
  undefined2 uVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  sbyte sVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  uint *local_res10;
  
  uVar8 = 0;
  uVar13 = 0;
  uVar14 = 0xffffffff;
  uVar12 = 0;
  do {
    iVar7 = (int)uVar8;
    uVar3 = *(ushort *)(param_2 + 0x4a + uVar12 * 0x18);
    uVar10 = (ulonglong)uVar3;
    uVar15 = *(uint *)(param_2 + 0x40 + uVar12 * 0x18);
    uVar16 = (ulonglong)uVar15;
    lVar1 = param_2 + uVar12 * 0x18;
    uVar6 = uVar15 >> 0x1c;
    if (uVar6 == 7) {
      uVar8 = uVar16 & 0xffff;
      uVar13 = *(uint *)(**(longlong **)(param_1 + 0x50) + uVar8 * 0x18);
      uVar14 = *(uint *)(**(longlong **)(param_1 + 0x50) + 4 + uVar8 * 0x18);
    }
    else {
      uVar11 = *(uint *)(lVar1 + 0x44);
      uVar12 = (ulonglong)uVar11;
      if (uVar6 == 6) {
        if (iVar7 != 0) {
          lVar5 = **(longlong **)(param_1 + 0x50);
          uVar13 = *(uint *)(lVar5 + uVar8 * 0x18);
          bVar2 = (byte)(uVar13 >> 0x18);
          while (bVar2 >> 4 == 8) {
            uVar8 = (ulonglong)*(ushort *)(lVar5 + uVar8 * 0x18);
            uVar13 = *(uint *)(lVar5 + uVar8 * 0x18);
            bVar2 = (byte)(uVar13 >> 0x18);
          }
          if (((byte)(uVar13 >> 0x1c) == 6) || ((uVar13 & 0xfc000000) == 0x30000000)) {
                    /* WARNING: Subroutine does not return */
            FUN_1804adef0(param_1,0xc68);
          }
        }
        while ((uVar3 != 0 &&
               ((byte)((uint)*(undefined4 *)(param_2 + 0x40 + uVar10 * 0x18) >> 0x1c) == 8))) {
          uVar3 = *(ushort *)(param_2 + 0x4a + uVar10 * 0x18);
          uVar10 = (ulonglong)uVar3;
        }
        uVar4 = *(undefined2 *)(lVar1 + 0x48);
        uVar6 = FUN_1804ab9b0(*(undefined8 *)(param_1 + 0x50),&local_res10);
        uVar13 = uVar15 + iVar7;
        uVar14 = 0xffffffff;
        *local_res10 = uVar13;
        local_res10[1] = uVar11;
        *(undefined2 *)(local_res10 + 2) = uVar4;
      }
      else {
        if (uVar6 == 8) {
          if ((uVar15 & 0xf0ff0000) == 0x80010000) {
            uVar13 = uVar13 | uVar11;
            uVar15 = uVar15 + iVar7;
          }
          else {
            if ((uVar15 & 0xf0ff0000) == 0x80020000) {
              uVar13 = uVar13 ^ (uVar11 << 0x10 ^ uVar13) & 0xf0000;
            }
            uVar15 = uVar15 + iVar7;
          }
        }
        else {
          if (uVar15 < 0x10000000) {
            if ((uVar15 >> 0x1b & 1) == 0) {
              bVar2 = *(byte *)(param_2 + 0x2d);
              if ((bVar2 != 0) && (((uVar15 >> 0x1a & 1) == 0 || ((bVar2 - 4 & 0xfb) == 0)))) {
                uVar13 = 0x1f;
                if (bVar2 != 0) {
                  for (; bVar2 >> uVar13 == 0; uVar13 = uVar13 - 1) {
                  }
                }
                uVar12 = (ulonglong)(uint)bVar2;
                if (4 < uVar13) {
                  uVar13 = 4;
                }
                uVar16 = (ulonglong)(uVar15 ^ (uVar13 << 0x10 ^ uVar15) & 0xf0000);
              }
              uVar11 = (uint)uVar12;
              uVar15 = (uint)uVar16;
              uVar13 = *(uint *)(param_2 + 0x2c) & 0xf0;
              if (uVar13 != 0) {
                uVar14 = 0x1f;
                if (uVar11 != 0) {
                  for (; uVar11 >> uVar14 == 0; uVar14 = uVar14 - 1) {
                  }
                }
                uVar6 = *(uint *)(param_2 + 0x2c) >> 4 & 0xf;
                if (uVar14 <= uVar6) {
                  iVar7 = FUN_1804ab7b0(*(undefined8 *)(param_1 + 0x50),uVar16,uVar12);
                  sVar9 = (sbyte)uVar6;
                  if (0x40 < uVar13) {
                    uVar6 = 4;
                  }
                  uVar13 = (uint)(uVar16 >> 0x10) & 0xf;
                  if (uVar13 <= uVar6) {
                    uVar13 = uVar6;
                  }
                  uVar15 = uVar15 & 0x3000000 | uVar13 << 0x10 | 0x38000000;
                  uVar11 = 1 << sVar9;
                }
              }
            }
          }
          else if (uVar6 == 2) {
            if (iVar7 != 0) {
              lVar1 = **(longlong **)(param_1 + 0x50);
              uVar13 = *(uint *)(lVar1 + uVar8 * 0x18);
              bVar2 = (byte)(uVar13 >> 0x18);
              while (bVar2 >> 4 == 8) {
                uVar8 = (ulonglong)*(ushort *)(lVar1 + uVar8 * 0x18);
                uVar13 = *(uint *)(lVar1 + uVar8 * 0x18);
                bVar2 = (byte)(uVar13 >> 0x18);
              }
              if ((uVar13 & 0xf0800000) == 0x20800000) {
LAB_1804ace67:
                    /* WARNING: Subroutine does not return */
                FUN_1804adef0(param_1,0xc68);
              }
            }
            if ((uVar15 & 0xf0800000) == 0x20800000) {
              uVar15 = uVar15 & 0xfeffffff;
              while ((uVar3 != 0 &&
                     ((byte)((uint)*(undefined4 *)(param_2 + 0x40 + uVar10 * 0x18) >> 0x1c) == 8)))
              {
                uVar3 = *(ushort *)(param_2 + 0x4a + uVar10 * 0x18);
                uVar10 = (ulonglong)uVar3;
              }
            }
          }
          else if (uVar6 == 3) {
            if (*(short *)(lVar1 + 0x48) == 0) {
              if ((uVar13 & 0xf0800000) == 0x20800000) goto LAB_1804ace67;
              if ((((uVar13 & 0xd0100000) == 0x10100000) || (uVar14 == 0xffffffff)) ||
                 ((uVar11 != 0xffffffff && (uVar12 = uVar12 * uVar14, 0x7fffffff < uVar12)))) {
                    /* WARNING: Subroutine does not return */
                FUN_1804adef0(param_1,0xc77);
              }
            }
            if ((uVar15 & 0xf0000) < (uVar13 & 0xf0000)) {
              uVar15 = uVar15 ^ (uVar15 ^ uVar13) & 0xf0000;
            }
            uVar15 = uVar15 | uVar13 & 0x3000000;
            uVar11 = (uint)uVar12;
          }
          uVar14 = uVar11;
          uVar13 = uVar15 + iVar7;
          uVar11 = uVar14;
          uVar15 = uVar13;
        }
        uVar6 = FUN_1804ab7b0(*(undefined8 *)(param_1 + 0x50),uVar15,uVar11);
      }
      uVar8 = (ulonglong)uVar6;
    }
    uVar12 = uVar10;
    if ((int)uVar10 == 0) {
      return uVar8;
    }
  } while( true );
}



/* ===== 1804acea0 FUN_1804acea0 ===== */

void FUN_1804acea0(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  char *pcVar6;
  char *pcVar7;
  int iVar8;
  
  if (*(int *)(param_1 + 4) != 0x28) {
                    /* WARNING: Subroutine does not return */
    FUN_1804adf50(param_1,0x28);
  }
  FUN_1804af150();
  if (*(int *)(param_1 + 4) != 0x100) goto LAB_1804acfb3;
  lVar2 = *(longlong *)(param_1 + 0x10);
  if (*(char *)(lVar2 + 0x18) == '_') {
    lVar5 = 0x1a;
    if (*(char *)(lVar2 + 0x19) != '_') {
      lVar5 = 0x18;
    }
  }
  else {
    lVar5 = 0x18;
  }
  pcVar7 = (char *)(lVar5 + lVar2);
  if (*(char *)(lVar5 + lVar2) == 'V') {
    pcVar6 = pcVar7 + 2;
    cVar1 = *pcVar6;
    iVar8 = pcVar7[1] + -0x30;
    if (('/' < cVar1) && (cVar1 < ':')) {
      iVar8 = (int)cVar1 + (pcVar7[1] * 5 + -0x108) * 2;
      pcVar6 = pcVar7 + 3;
    }
    pcVar7 = pcVar6;
  }
  else {
    iVar8 = 0;
  }
  switch(*pcVar7) {
  case 'D':
    iVar4 = 8;
    break;
  default:
    goto switchD_1804acf4d_caseD_45;
  case 'H':
    iVar4 = 2;
    break;
  case 'O':
    iVar4 = 0x20;
    break;
  case 'Q':
    iVar4 = 1;
    break;
  case 'S':
    iVar4 = 4;
    break;
  case 'T':
    iVar4 = 0x10;
  }
  if (((pcVar7[1] == 'I') || (pcVar7[1] == 'F')) &&
     (*(char *)(param_2 + 0x2d) = (char)iVar4, iVar8 != 0)) {
    *(uint *)(param_2 + 0x2c) = *(uint *)(param_2 + 0x2c) & 0xffffff0f;
    uVar3 = 0x1f;
    if (iVar8 * iVar4 != 0) {
      for (; (uint)(iVar8 * iVar4) >> uVar3 == 0; uVar3 = uVar3 - 1) {
      }
    }
    *(uint *)(param_2 + 0x2c) = *(uint *)(param_2 + 0x2c) | (uVar3 & 0xf) << 4;
  }
switchD_1804acf4d_caseD_45:
  FUN_1804af150(param_1);
LAB_1804acfb3:
  if (*(int *)(param_1 + 4) != 0x29) {
                    /* WARNING: Subroutine does not return */
    FUN_1804adf50(param_1,0x29);
  }
  FUN_1804af150();
  return;
}



/* ===== 1804ad030 FUN_1804ad030 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804ad030(longlong param_1)

{
  ushort uVar1;
  longlong lVar2;
  bool bVar3;
  undefined2 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ushort *puVar10;
  undefined4 uVar11;
  longlong *plVar12;
  undefined1 auStack_a08 [32];
  int *local_9e8;
  undefined4 *local_9e0;
  int local_9d8;
  uint local_9d4;
  uint local_9d0;
  longlong local_9c0;
  longlong local_9b8;
  int local_9b0;
  undefined4 local_9ac;
  undefined4 local_9a8;
  undefined4 local_9a4;
  undefined4 local_9a0;
  undefined4 local_998 [2];
  undefined2 auStack_98e [1195];
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStack_a08;
  iVar5 = *(int *)(param_1 + 4);
  if (iVar5 != 0x103) {
    bVar3 = true;
    do {
      if (iVar5 == 0x3b) {
        FUN_1804af150(param_1);
        bVar3 = false;
      }
      else if (iVar5 == 0x23) {
        iVar5 = *(int *)(param_1 + 0x68);
        iVar6 = FUN_1804af150();
        if (iVar6 == 0x102) {
          uVar11 = *(undefined4 *)(param_1 + 8);
          if (*(int *)(param_1 + 4) == 0x103) {
LAB_1804ad147:
            *(undefined4 *)(param_1 + 0x68) = uVar11;
          }
          else {
            do {
              if (*(int *)(param_1 + 0x68) != iVar5) goto LAB_1804ad147;
              FUN_1804af150(param_1);
            } while (*(int *)(param_1 + 4) != 0x103);
            *(undefined4 *)(param_1 + 0x68) = uVar11;
          }
        }
        else {
          if (iVar6 != 0x100) {
LAB_1804ad40b:
                    /* WARNING: Subroutine does not return */
            FUN_1804adf80(param_1,*(undefined4 *)(param_1 + 4),0xacb);
          }
          lVar2 = *(longlong *)(param_1 + 0x10);
          if (*(int *)(lVar2 + 0x14) == 4) {
            if (*(int *)(lVar2 + 0x18) != 0x656e696c) goto LAB_1804ad40b;
            iVar6 = FUN_1804af150(param_1);
            if (iVar6 != 0x102) {
                    /* WARNING: Subroutine does not return */
              FUN_1804adf50(param_1,0x100);
            }
            iVar6 = *(int *)(param_1 + 4);
            uVar11 = *(undefined4 *)(param_1 + 8);
            while ((iVar6 != 0x103 && (*(int *)(param_1 + 0x68) == iVar5))) {
              FUN_1804af150(param_1);
              iVar6 = *(int *)(param_1 + 4);
            }
            goto LAB_1804ad147;
          }
          if (((*(int *)(lVar2 + 0x14) != 6) || (*(int *)(lVar2 + 0x18) != 0x67617270)) ||
             (*(short *)(lVar2 + 0x1c) != 0x616d)) goto LAB_1804ad40b;
          FUN_1804afad0(param_1,iVar5);
        }
      }
      else {
        uVar7 = FUN_1804ad490(param_1,&local_9d8,0x38000);
        if (((*(int *)(param_1 + 4) != 0x3b) && (*(int *)(param_1 + 4) != 0x103)) ||
           ((byte)((uint)local_998[0] >> 0x1c) != 7)) {
LAB_1804ad1e3:
          do {
            FUN_1804adb60(param_1,&local_9d8);
            uVar8 = FUN_1804acaa0(param_1,&local_9d8);
            if ((local_9c0 != 0) && (local_9b0 == 0)) {
              plVar12 = *(longlong **)(param_1 + 0x50);
              if ((uVar7 & 0x8000) == 0) {
                if ((byte)((uint)*(undefined4 *)(*plVar12 + (ulonglong)uVar8 * 0x18) >> 0x1c) == 6)
                {
                  uVar9 = uVar8;
                  local_9e8 = (int *)(*plVar12 + (ulonglong)uVar8 * 0x18);
                }
                else {
                  if ((uVar7 & 0x20000) != 0) {
                    uVar9 = FUN_1804ac1d0(param_1,&local_9e8,uVar8);
                    goto LAB_1804ad310;
                  }
                  uVar9 = FUN_1804ab9b0(plVar12,&local_9e8);
                  *local_9e8 = uVar8 + 0xc0000000;
                  plVar12 = *(longlong **)(param_1 + 0x50);
                }
                if (local_9b8 != 0) {
                  uVar4 = FUN_1804ab9b0(plVar12,&local_9e0);
                  local_9e8 = (int *)(**(longlong **)(param_1 + 0x50) + (ulonglong)uVar9 * 0x18);
                  *local_9e0 = 0x80040000;
                  *(short *)(local_9e0 + 2) = (short)local_9e8[2];
                  *(undefined2 *)(local_9e8 + 2) = uVar4;
                  *(byte *)(local_9b8 + 8) = *(byte *)(local_9b8 + 8) | 0x20;
                  *(longlong *)(local_9e0 + 4) = local_9b8;
                }
              }
              else {
                uVar9 = FUN_1804ab9b0(plVar12,&local_9e8);
                *local_9e8 = uVar8 + 0x70000000;
              }
LAB_1804ad310:
              *(byte *)(local_9c0 + 8) = *(byte *)(local_9c0 + 8) | 0x20;
              *(longlong *)(local_9e8 + 4) = local_9c0;
              FUN_1804ab1b0(*(undefined8 *)(param_1 + 0x50),local_9e8,uVar9);
            }
            if (*(int *)(param_1 + 4) != 0x2c) goto LAB_1804ad379;
            FUN_1804af150(param_1);
            local_9d4 = local_9d0;
            local_9d8 = local_9d0 + 1;
            auStack_98e[(ulonglong)local_9d0 * 0xc] = 0;
            local_9ac = local_9a4;
            local_9a8 = local_9a0;
            local_9c0 = 0;
            local_9b8 = 0;
          } while( true );
        }
        puVar10 = (ushort *)local_998;
        do {
          uVar1 = *puVar10;
          puVar10 = (ushort *)(**(longlong **)(param_1 + 0x50) + (ulonglong)uVar1 * 0x18);
          uVar8 = *(uint *)(**(longlong **)(param_1 + 0x50) + (ulonglong)uVar1 * 0x18) >> 0x1c;
        } while (uVar8 == 8);
        if ((uVar8 - 1 & 0xfffffffb) != 0) goto LAB_1804ad1e3;
LAB_1804ad379:
        if (*(int *)(param_1 + 4) == 0x103) {
          if (bVar3) {
            return;
          }
LAB_1804ad3ef:
                    /* WARNING: Subroutine does not return */
          FUN_1804adf50(param_1,0x3b);
        }
        if (*(int *)(param_1 + 4) != 0x3b) goto LAB_1804ad3ef;
        bVar3 = false;
        FUN_1804af150(param_1);
      }
      iVar5 = *(int *)(param_1 + 4);
    } while (iVar5 != 0x103);
  }
  return;
}



/* ===== 1804ad420 FUN_1804ad420 ===== */

undefined4 FUN_1804ad420(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(param_1 + 0x70) = 0x38c0;
  if (*(int *)(param_1 + 4) != 0x28) {
                    /* WARNING: Subroutine does not return */
    FUN_1804adf50(param_1,0x28);
  }
  FUN_1804af150();
  uVar2 = FUN_1804ae860(param_1);
  *(undefined4 *)(param_1 + 0x70) = uVar1;
  if (*(int *)(param_1 + 4) != 0x29) {
                    /* WARNING: Subroutine does not return */
    FUN_1804adf50(param_1,0x29);
  }
  FUN_1804af150();
  return uVar2;
}



/* ===== 1804ad490 FUN_1804ad490 ===== */

uint FUN_1804ad490(longlong param_1,uint *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  
  *(longlong *)(param_2 + 4) = param_1;
  uVar5 = *(uint *)(param_1 + 0x74);
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0] = 0;
  param_2[1] = 0;
  *(undefined2 *)((longlong)param_2 + 0x4a) = 0;
  uVar7 = 0;
  uVar4 = 0;
  param_2[3] = uVar5;
  uVar5 = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  do {
    while( true ) {
      FUN_1804abf60(param_1,param_2);
      iVar1 = *(int *)(param_1 + 4);
      if (iVar1 - 0x10dU < 0x14) break;
      if ((uVar4 != 0) || (uVar5 != 0 || (uVar7 & 0x7a0) != 0)) goto LAB_1804ad5f0;
      if (iVar1 == 0x24) {
        uVar5 = *(uint *)(param_1 + 0xc);
        FUN_1804af150(param_1);
      }
      else if (iVar1 == 0x100) {
        if ((byte)(**(uint **)(param_1 + 0x18) >> 0x1c) != 7) goto LAB_1804ad5f0;
        uVar5 = **(uint **)(param_1 + 0x18) & 0xffff;
        FUN_1804af150(param_1);
      }
      else if (iVar1 == 0x127) {
        uVar5 = FUN_1804ad810(param_1,param_2,0x10000000);
      }
      else if (iVar1 == 0x128) {
        uVar5 = FUN_1804ad810(param_1,param_2,0x10800000);
      }
      else {
        if (iVar1 != 0x129) goto LAB_1804ad5f0;
        uVar5 = FUN_1804ac330(param_1,param_2);
      }
    }
    uVar3 = *(uint *)(*(longlong *)(param_1 + 0x18) + 4);
    if (uVar3 != 0) {
      if (uVar4 != 0) break;
      uVar4 = uVar3;
    }
    uVar3 = 1 << ((char)iVar1 - 0xdU & 0x1f);
    uVar7 = uVar7 | (uVar3 & uVar7 & 0x20) * 2 | uVar3;
    if (iVar1 < 0x11c) {
      if (uVar5 != 0) break;
    }
    else if ((param_3 & uVar3) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1804adf80(param_1,iVar1,0xc9e);
    }
    FUN_1804af150(param_1);
  } while( true );
LAB_1804ad5f0:
  if ((uVar7 >> 8 & 1) != 0) {
    uVar5 = (uVar4 != 4) + 0x11;
  }
  if (uVar5 != 0) {
    FUN_1804afc60(param_2,uVar5);
    goto LAB_1804ad78c;
  }
  if ((uVar7 & 1) == 0) {
    uVar5 = (uVar7 & 0x400) << 0xd;
    if ((uVar7 & 2) == 0) {
      if ((uVar7 & 0x10) == 0) {
        if ((uVar7 & 4) == 0) {
          if ((char)uVar7 < '\0') {
            uVar4 = 2;
          }
          else if ((uVar7 & 0x40) == 0) {
            if ((uVar7 & 0x20) == 0) {
              if (uVar4 != 0) goto LAB_1804ad70a;
              if ((uVar7 & 0x600) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_1804adf80(param_1,iVar1,0xcb0);
              }
            }
            else {
              uVar5 = uVar5 | 0x400000;
            }
            uVar4 = 4;
          }
          else {
            uVar4 = 8;
          }
        }
      }
      else {
        uVar5 = 0x4000000;
        if ((uVar7 & 0x20) != 0) {
          uVar4 = 8;
        }
      }
    }
    else {
      if ((uVar7 & 0xfff079f5) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1804adf80(param_1,0,0xc68);
      }
      if ((uVar7 >> 9 & 1) == 0) {
        uVar5 = 0x8800000;
      }
      else {
        uVar5 = uVar5 | 0x8000000;
      }
      if (uVar4 == 0) {
        uVar4 = 1;
      }
    }
LAB_1804ad70a:
    uVar3 = *param_2;
    uVar6 = (ulonglong)uVar3;
    iVar1 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar1 == 0; iVar1 = iVar1 + -1) {
      }
    }
    if (99 < uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_1804adef0(*(undefined8 *)(param_2 + 4),0x8e4);
    }
    uVar2 = param_2[0xb];
    param_2[uVar6 * 6 + 0x11] = uVar4;
    *(undefined2 *)(param_2 + uVar6 * 6 + 0x12) = 0;
    (param_2 + uVar6 * 6 + 0x14)[0] = 0;
    (param_2 + uVar6 * 6 + 0x14)[1] = 0;
    param_2[uVar6 * 6 + 0x10] = (uVar2 & 0x3000000 | uVar5) + iVar1 * 0x10000;
    *(undefined2 *)((longlong)param_2 + uVar6 * 0x18 + 0x4a) =
         *(undefined2 *)((longlong)param_2 + (ulonglong)param_2[1] * 0x18 + 0x4a);
    *(short *)((longlong)param_2 + (ulonglong)param_2[1] * 0x18 + 0x4a) = (short)uVar3;
    *param_2 = uVar3 + 1;
    param_2[1] = uVar3;
  }
  else {
    uVar5 = *param_2;
    uVar6 = (ulonglong)uVar5;
    if (99 < uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_1804adef0(*(undefined8 *)(param_2 + 4),0x8e4);
    }
    uVar4 = param_2[0xb];
    param_2[uVar6 * 6 + 0x11] = 0xffffffff;
    *(undefined2 *)(param_2 + uVar6 * 6 + 0x12) = 0;
    (param_2 + uVar6 * 6 + 0x14)[0] = 0;
    (param_2 + uVar6 * 6 + 0x14)[1] = 0;
    param_2[uVar6 * 6 + 0x10] = uVar4 & 0x3000000 | 0x40000000;
    *(undefined2 *)((longlong)param_2 + uVar6 * 0x18 + 0x4a) =
         *(undefined2 *)((longlong)param_2 + (ulonglong)param_2[1] * 0x18 + 0x4a);
    *(short *)((longlong)param_2 + (ulonglong)param_2[1] * 0x18 + 0x4a) = (short)uVar5;
    *param_2 = uVar5 + 1;
    param_2[1] = uVar5;
  }
  param_2[0xb] = param_2[0xb] & 0xfcffffff;
LAB_1804ad78c:
  param_2[2] = param_2[1];
  param_2[0xd] = param_2[0xb];
  param_2[0xe] = param_2[0xc];
  return uVar7 & 0xf8000;
}



/* ===== 1804ad810 FUN_1804ad810 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint FUN_1804ad810(longlong param_1,longlong param_2)

{
  longlong lVar1;
  byte bVar2;
  ushort *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  bool bVar12;
  bool bVar13;
  undefined1 auStack_a18 [32];
  int *local_9f8;
  longlong local_9f0;
  int local_9e8;
  uint local_9e4;
  uint local_9e0;
  undefined4 local_9dc;
  longlong local_9d0;
  undefined8 local_9c8;
  uint local_9bc;
  undefined4 local_9b8;
  uint local_9b4;
  undefined4 local_9b0;
  uint local_9ac;
  undefined2 auStack_99e [1195];
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_a18;
  uVar4 = FUN_1804b04f0();
  if (*(int *)(param_1 + 4) != 0x7b) {
    return uVar4;
  }
  FUN_1804af150(param_1);
  uVar11 = (ulonglong)uVar4;
  bVar12 = false;
  if (*(int *)(param_1 + 4) == 0x7d) {
LAB_1804adac1:
    FUN_1804af150(param_1);
    *(undefined2 *)(**(longlong **)(param_1 + 0x50) + 8 + uVar11 * 0x18) = 0;
    FUN_1804abf60(param_1,param_2);
    FUN_1804b01c0(param_1,uVar4,*(undefined4 *)(param_2 + 0x2c));
    return uVar4;
  }
LAB_1804ad871:
  uVar5 = FUN_1804ad490(param_1,&local_9e8,0x20000);
  local_9dc = 0xe;
  if (uVar5 != 0) {
    local_9dc = 4;
  }
  do {
    if (bVar12) {
                    /* WARNING: Subroutine does not return */
      FUN_1804adf50(param_1,0x7d);
    }
    local_9ac = 0xffffffff;
    FUN_1804adb60(param_1,&local_9e8);
    uVar6 = FUN_1804acaa0(param_1,&local_9e8);
    uVar10 = (ulonglong)uVar6;
    if ((uVar5 & 0x20000) == 0) {
      uVar7 = FUN_1804ab9b0(*(undefined8 *)(param_1 + 0x50),&local_9f8);
      lVar1 = **(longlong **)(param_1 + 0x50);
      uVar9 = *(uint *)(lVar1 + uVar10 * 0x18);
      bVar2 = (byte)(uVar9 >> 0x18);
      while (puVar3 = (ushort *)(lVar1 + uVar10 * 0x18), bVar2 >> 4 == 8) {
        uVar10 = (ulonglong)*puVar3;
        uVar9 = *(uint *)(lVar1 + uVar10 * 0x18);
        bVar2 = (byte)(uVar9 >> 0x18);
      }
      if (local_9ac == 0xffffffff) {
        bVar12 = false;
        uVar8 = uVar9 >> 0x1c;
        if (uVar8 == 3) {
          bVar12 = *(int *)(puVar3 + 2) == -1;
        }
        if (local_9d0 != 0) {
          uVar9 = 0x7f;
          goto LAB_1804ada10;
        }
        if (uVar8 == 1) {
          bVar13 = (uVar9 & 0x100000) == 0;
        }
        else {
          bVar13 = uVar8 == 5;
        }
        if (!bVar13) {
                    /* WARNING: Subroutine does not return */
          FUN_1804adf50(param_1,0x100);
        }
        *local_9f8 = uVar6 + 0x80030000;
        uVar6 = 0;
        if ((byte)((uint)*(undefined4 *)puVar3 >> 0x1c) == 1) {
          uVar6 = local_9bc | 0x80000000;
        }
        local_9f8[1] = uVar6;
      }
      else {
        if (((uVar9 & 0xf4000000) != 0) ||
           (((local_9ac == 0 && (local_9d0 != 0)) ||
            (uVar8 = *(int *)(puVar3 + 2) * 8, 0x20 < uVar8)))) {
LAB_1804adb47:
                    /* WARNING: Subroutine does not return */
          FUN_1804adf80(param_1,0x3a,0x219);
        }
        if ((uVar9 >> 0x1b & 1) != 0) {
          uVar8 = 1;
        }
        uVar9 = local_9ac;
        if (uVar8 < local_9ac) goto LAB_1804adb47;
LAB_1804ada10:
        *local_9f8 = uVar6 + 0x90000000 + uVar9 * 0x10000;
        local_9f8[1] = local_9bc;
        if (local_9d0 != 0) {
          *(byte *)(local_9d0 + 8) = *(byte *)(local_9d0 + 8) | 0x20;
          *(longlong *)(local_9f8 + 4) = local_9d0;
        }
      }
      *(short *)(**(longlong **)(param_1 + 0x50) + 8 + uVar11 * 0x18) = (short)uVar7;
    }
    else {
      uVar7 = FUN_1804ac1d0(param_1,&local_9f0,uVar10);
      *(short *)(**(longlong **)(param_1 + 0x50) + 8 + uVar11 * 0x18) = (short)uVar7;
      *(byte *)(local_9d0 + 8) = *(byte *)(local_9d0 + 8) | 0x20;
      *(longlong *)(local_9f0 + 0x10) = local_9d0;
    }
    uVar11 = (ulonglong)uVar7;
    if (*(int *)(param_1 + 4) != 0x2c) break;
    FUN_1804af150();
    local_9e4 = local_9e0;
    local_9e8 = local_9e0 + 1;
    auStack_99e[(ulonglong)local_9e0 * 0xc] = 0;
    local_9bc = local_9b4;
    local_9b8 = local_9b0;
    local_9d0 = 0;
    local_9c8 = 0;
  } while( true );
  if (*(int *)(param_1 + 4) != 0x3b) {
                    /* WARNING: Subroutine does not return */
    FUN_1804adf50(param_1,0x3b);
  }
  FUN_1804af150();
  if (*(int *)(param_1 + 4) == 0x7d) goto LAB_1804adac1;
  goto LAB_1804ad871;
}



/* ===== 1804adb60 FUN_1804adb60 ===== */

void FUN_1804adb60(longlong param_1,uint *param_2,ulonglong param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  bool bVar5;
  uint local_res8 [2];
  
  *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + 1;
  if (0x14 < *(int *)(param_1 + 0x6c)) {
                    /* WARNING: Subroutine does not return */
    FUN_1804adef0(param_1,0x8e4);
  }
  while( true ) {
    while( true ) {
      if (*(int *)(param_1 + 4) != 0x2a) break;
      FUN_1804af150(param_1);
      FUN_1804abf60(param_1,param_2);
      uVar2 = param_2[0xb];
      bVar5 = *(char *)((longlong)param_2 + 0x2d) != '\x04';
      param_2[0xb] = uVar2 & 0xfcff00ff;
      uVar1 = 0x20020000;
      if (bVar5) {
        uVar1 = 0x20030000;
      }
      uVar4 = 4;
      if (bVar5) {
        uVar4 = 8;
      }
      uVar2 = FUN_1804abe70(param_2,uVar2 & 0x3800000 | uVar1,uVar4);
      param_3 = (ulonglong)uVar2;
      param_2[1] = uVar2;
    }
    iVar3 = *(int *)(param_1 + 4);
    if ((iVar3 != 0x26) && (iVar3 != 0x105)) break;
    FUN_1804af150(param_1);
    uVar2 = *param_2;
    param_3 = (ulonglong)uVar2;
    param_2[0xb] = param_2[0xb] & 0xfcff00ff;
    if (99 < uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_1804adef0(*(undefined8 *)(param_2 + 4),0x8e4);
    }
    param_2[param_3 * 6 + 0x10] = 0x22830000;
    param_2[param_3 * 6 + 0x11] = 8;
    *(undefined2 *)(param_2 + param_3 * 6 + 0x12) = 0;
    (param_2 + param_3 * 6 + 0x14)[0] = 0;
    (param_2 + param_3 * 6 + 0x14)[1] = 0;
    *(undefined2 *)((longlong)param_2 + param_3 * 0x18 + 0x4a) =
         *(undefined2 *)((longlong)param_2 + (ulonglong)param_2[1] * 0x18 + 0x4a);
    *(short *)((longlong)param_2 + (ulonglong)param_2[1] * 0x18 + 0x4a) = (short)uVar2;
    *param_2 = uVar2 + 1;
    param_2[1] = uVar2;
  }
  if (iVar3 == 0x28) {
    FUN_1804af150(param_1);
    FUN_1804abf60(param_1,param_2);
    if ((param_2[3] & 2) != 0) {
      if (*(int *)(param_1 + 4) == 0x29) goto LAB_1804addd6;
      iVar3 = FUN_1804af110(param_1);
      if (iVar3 != 0) goto LAB_1804addd6;
    }
    uVar2 = param_2[1];
    FUN_1804adb60(param_1,param_2);
    if (*(int *)(param_1 + 4) != 0x29) {
                    /* WARNING: Subroutine does not return */
      FUN_1804adf50(param_1,0x29);
    }
    FUN_1804af150();
    param_2[1] = uVar2;
  }
  else if (iVar3 == 0x100) {
    if ((param_2[3] & 4) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1804adf50(param_1,0x103,param_3);
    }
    *(undefined8 *)(param_2 + 6) = *(undefined8 *)(param_1 + 0x10);
    param_2[10] = *(uint *)(param_1 + 0xc);
    FUN_1804af150();
  }
  else if ((param_2[3] & 2) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804adf50(param_1,0x100,param_3);
  }
  while( true ) {
    while( true ) {
      iVar3 = *(int *)(param_1 + 4);
      if (iVar3 == 0x5b) break;
      if (iVar3 != 0x28) {
        if (((param_2[3] & 8) != 0) && (iVar3 == 0x3a)) {
          FUN_1804af150(param_1);
          FUN_1804ae7b0(param_1,local_res8);
          if (0x7fffffff < local_res8[0]) {
                    /* WARNING: Subroutine does not return */
            FUN_1804adef0(param_1,0xc77);
          }
          param_2[0xf] = local_res8[0];
        }
        FUN_1804abf60(param_1,param_2);
        if ((((byte)(param_2[(ulonglong)param_2[1] * 6 + 0x10] >> 0x1c) != 6) &&
            ((param_2[0xb] & 1) != 0)) && ((param_2[3] & 8) == 0)) {
          uVar2 = FUN_1804abe70(param_2,0x80020000,param_2[0xb] >> 0x10 & 0xf);
          param_2[1] = uVar2;
        }
        *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + -1;
        return;
      }
      FUN_1804af150(param_1);
LAB_1804addd6:
      FUN_1804ac5b0(param_1,param_2);
    }
    FUN_1804af150(param_1);
    uVar2 = 0xffffffff;
    FUN_1804abf60(param_1,param_2);
    if (*(int *)(param_1 + 4) == 0x3f) {
      FUN_1804af150(param_1);
      uVar4 = 0x30100000;
    }
    else {
      uVar4 = 0x30000000;
      if (*(int *)(param_1 + 4) != 0x5d) {
        FUN_1804ae7b0(param_1,local_res8);
        uVar2 = local_res8[0];
        if (0x7fffffff < uVar2) {
                    /* WARNING: Subroutine does not return */
          FUN_1804adef0(param_1,0xc77);
        }
      }
    }
    if (*(int *)(param_1 + 4) != 0x5d) break;
    FUN_1804af150();
    FUN_1804abe70(param_2,uVar4,uVar2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_1804adf50(param_1,0x5d);
}



/* ===== 1804adef0 FUN_1804adef0 ===== */

void FUN_1804adef0(undefined8 param_1,undefined4 param_2)

{
                    /* WARNING: Subroutine does not return */
  FUN_1804adf80(param_1,0,param_2);
}



/* ===== 1804adf00 FUN_1804adf00 ===== */

void FUN_1804adf00(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_1804aba80((*(longlong **)(param_1 + 0x50))[2],
                        (param_2 - **(longlong **)(param_1 + 0x50)) / 0x18,0);
                    /* WARNING: Subroutine does not return */
  FUN_1804adf80(param_1,0,0xe56,lVar1 + 0x18);
}



/* ===== 1804adf50 FUN_1804adf50 ===== */

void FUN_1804adf50(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 4);
  uVar2 = FUN_1804b0670();
                    /* WARNING: Subroutine does not return */
  FUN_1804adf80(param_1,uVar1,0x98d,uVar2);
}



/* ===== 1804adf80 FUN_1804adf80 ===== */

void FUN_1804adf80(longlong param_1,int param_2,int param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 local_res20;
  
  local_res20 = param_4;
  if (param_2 == 0) {
    lVar4 = 0;
  }
  else if ((param_2 < 0x100) || (param_2 - 0x103U < 10)) {
    lVar4 = FUN_1804b0670();
  }
  else {
    puVar3 = *(undefined1 **)(param_1 + 0x28);
    if (puVar3 == *(undefined1 **)(param_1 + 0x38)) {
      puVar2 = puVar3;
      if (*(int *)(param_1 + 0x30) == (int)puVar3) {
        puVar2 = (undefined1 *)FUN_1804a9db0(param_1 + 0x28,1);
      }
      puVar3 = puVar2 + 1;
      *puVar2 = 0x24;
      *(undefined1 **)(param_1 + 0x28) = puVar3;
      puVar2 = puVar3;
    }
    else {
      puVar2 = (undefined1 *)((ulonglong)puVar3 & 0xffffffff);
    }
    if (*(int *)(param_1 + 0x30) == (int)puVar2) {
      puVar3 = (undefined1 *)FUN_1804a9db0(param_1 + 0x28,1);
    }
    *puVar3 = 0;
    *(undefined1 **)(param_1 + 0x28) = puVar3 + 1;
    lVar4 = *(longlong *)(param_1 + 0x38);
  }
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  uVar5 = FUN_180498660(uVar1,PTR_s_not_enough_memory_180919000 + param_3,&local_res20);
  if (lVar4 != 0) {
    uVar5 = FUN_180498630(uVar1,PTR_s_not_enough_memory_180919000 + 0x8be,uVar5,lVar4);
  }
  if (1 < *(int *)(param_1 + 0x68)) {
    uVar5 = FUN_180498630(uVar1,"%s at line %d",uVar5);
  }
                    /* WARNING: Subroutine does not return */
  FUN_180484240(uVar1,uVar5);
}



/* ===== 1804ae080 FUN_1804ae080 ===== */

void FUN_1804ae080(longlong param_1,undefined8 param_2)

{
  while( true ) {
    FUN_1804af040(param_1,param_2,0);
    if (*(int *)(param_1 + 4) != 0x2c) break;
    FUN_1804af150(param_1);
  }
  return;
}



/* ===== 1804ae0c0 FUN_1804ae0c0 ===== */

void FUN_1804ae0c0(longlong param_1,uint *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined8 local_res20;
  uint local_28;
  uint local_24;
  
  local_res20 = 0;
  if (10 < param_3) {
    return;
  }
  do {
    switch((ulonglong)(&switchD_1804ae10b::switchdataD_1804ae780)[(int)param_3] + 0x180000000) {
    case 0x1804ae10d:
      if (*(int *)(param_1 + 4) == 0x3f) {
        do {
          FUN_1804af150(param_1);
          FUN_1804af040(param_1,&local_res20,0);
        } while (*(int *)(param_1 + 4) == 0x2c);
        if (*(int *)(param_1 + 4) != 0x3a) {
                    /* WARNING: Subroutine does not return */
          FUN_1804adf50(param_1,0x3a);
        }
        FUN_1804af150();
        FUN_1804af040(param_1,&local_28,0);
        if (*param_2 != 0) {
          local_28 = (uint)local_res20;
        }
        *param_2 = local_28;
        if (local_24 < local_res20._4_4_) {
          local_24 = local_res20._4_4_;
        }
        param_2[1] = local_24;
                    /* WARNING: Could not recover jumptable at 0x0001804ae177. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ulonglong)(&switchD_1804ae10b::switchdataD_1804ae780)[(int)param_3] +
                  0x180000000))
                  ((code *)((ulonglong)(&switchD_1804ae10b::switchdataD_1804ae780)[(int)param_3] +
                           0x180000000));
        return;
      }
      break;
    case 0x1804ae1da:
      goto switchD_1804ae10b_caseD_804ae1da;
    case 0x1804ae23b:
      goto switchD_1804ae10b_caseD_804ae23b;
    case 0x1804ae265:
      goto switchD_1804ae10b_caseD_804ae265;
    case 0x1804ae28f:
      goto switchD_1804ae10b_caseD_804ae28f;
    case 0x1804ae2b9:
      goto switchD_1804ae10b_caseD_804ae2b9;
    case 0x1804ae33e:
      goto switchD_1804ae10b_caseD_804ae33e;
    case 0x1804ae4f1:
      goto switchD_1804ae10b_caseD_804ae4f1;
    case 0x1804ae56f:
      goto switchD_1804ae10b_caseD_804ae56f;
    case 0x1804ae5be:
      goto switchD_1804ae10b_caseD_804ae5be;
    }
    if (*(int *)(param_1 + 4) == 0x104) {
      FUN_1804af150(param_1);
      FUN_1804af040(param_1,&local_res20,2);
      if ((*param_2 == 0) && ((uint)local_res20 == 0)) {
        uVar3 = (&switchD_1804ae10b::switchdataD_1804ae780)[(int)param_3];
        *param_2 = 0;
        param_2[1] = 9;
                    /* WARNING: Could not recover jumptable at 0x0001804ae1bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ulonglong)uVar3 + 0x180000000))((code *)((ulonglong)uVar3 + 0x180000000));
        return;
      }
      uVar3 = (&switchD_1804ae10b::switchdataD_1804ae780)[(int)param_3];
      *param_2 = 1;
      param_2[1] = 9;
                    /* WARNING: Could not recover jumptable at 0x0001804ae1d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulonglong)uVar3 + 0x180000000))((code *)((ulonglong)uVar3 + 0x180000000));
      return;
    }
switchD_1804ae10b_caseD_804ae1da:
    if (*(int *)(param_1 + 4) == 0x105) {
      FUN_1804af150(param_1);
      FUN_1804af040(param_1,&local_res20,3);
      if ((*param_2 == 0) || ((uint)local_res20 == 0)) {
        uVar3 = (&switchD_1804ae10b::switchdataD_1804ae780)[(int)param_3];
        *param_2 = 0;
        param_2[1] = 9;
                    /* WARNING: Could not recover jumptable at 0x0001804ae239. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ulonglong)uVar3 + 0x180000000))((code *)((ulonglong)uVar3 + 0x180000000));
        return;
      }
      uVar3 = (&switchD_1804ae10b::switchdataD_1804ae780)[(int)param_3];
      *param_2 = 1;
      param_2[1] = 9;
                    /* WARNING: Could not recover jumptable at 0x0001804ae221. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulonglong)uVar3 + 0x180000000))((code *)((ulonglong)uVar3 + 0x180000000));
      return;
    }
switchD_1804ae10b_caseD_804ae23b:
    if (*(int *)(param_1 + 4) == 0x7c) {
      FUN_1804af150(param_1);
      FUN_1804af040(param_1,&local_res20,4);
      *param_2 = *param_2 | (uint)local_res20;
    }
    else {
switchD_1804ae10b_caseD_804ae265:
      if (*(int *)(param_1 + 4) == 0x5e) {
        FUN_1804af150(param_1);
        FUN_1804af040(param_1,&local_res20,5);
        *param_2 = *param_2 ^ (uint)local_res20;
      }
      else {
switchD_1804ae10b_caseD_804ae28f:
        if (*(int *)(param_1 + 4) == 0x26) {
          FUN_1804af150(param_1);
          FUN_1804af040(param_1,&local_res20,6);
          *param_2 = *param_2 & (uint)local_res20;
        }
        else {
switchD_1804ae10b_caseD_804ae2b9:
          if (*(int *)(param_1 + 4) == 0x106) {
            FUN_1804af150(param_1);
            FUN_1804af040(param_1,&local_res20,7);
            param_2[1] = 9;
            *param_2 = (uint)(*param_2 == (uint)local_res20);
                    /* WARNING: Could not recover jumptable at 0x0001804ae2fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)((ulonglong)(&switchD_1804ae10b::switchdataD_1804ae780)[(int)param_3] +
                      0x180000000))
                      ((code *)((ulonglong)(&switchD_1804ae10b::switchdataD_1804ae780)[(int)param_3]
                               + 0x180000000));
            return;
          }
          if (*(int *)(param_1 + 4) == 0x107) {
            FUN_1804af150(param_1);
            FUN_1804af040(param_1,&local_res20,7);
            param_2[1] = 9;
            *param_2 = (uint)(*param_2 != (uint)local_res20);
                    /* WARNING: Could not recover jumptable at 0x0001804ae33c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)((ulonglong)(&switchD_1804ae10b::switchdataD_1804ae780)[(int)param_3] +
                      0x180000000))
                      ((code *)((ulonglong)(&switchD_1804ae10b::switchdataD_1804ae780)[(int)param_3]
                               + 0x180000000));
            return;
          }
switchD_1804ae10b_caseD_804ae33e:
          iVar1 = *(int *)(param_1 + 4);
          if (iVar1 == 0x3c) {
            FUN_1804af150(param_1);
            FUN_1804af040(param_1,&local_res20,8);
            if ((param_2[1] == 9) && (local_res20._4_4_ == 9)) {
              param_2[1] = 9;
              *param_2 = (uint)((int)*param_2 < (int)(uint)local_res20);
                    /* WARNING: Could not recover jumptable at 0x0001804ae38a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)((ulonglong)(&switchD_1804ae10b::switchdataD_1804ae780)[(int)param_3] +
                        0x180000000))
                        ((code *)((ulonglong)
                                  (&switchD_1804ae10b::switchdataD_1804ae780)[(int)param_3] +
                                 0x180000000));
              return;
            }
            param_2[1] = 9;
            *param_2 = (uint)(*param_2 < (uint)local_res20);
                    /* WARNING: Could not recover jumptable at 0x0001804ae3aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)((ulonglong)(&switchD_1804ae10b::switchdataD_1804ae780)[(int)param_3] +
                      0x180000000))
                      ((code *)((ulonglong)(&switchD_1804ae10b::switchdataD_1804ae780)[(int)param_3]
                               + 0x180000000));
            return;
          }
          if (iVar1 == 0x3e) {
            FUN_1804af150(param_1);
            FUN_1804af040(param_1,&local_res20,8);
            if ((param_2[1] == 9) && (local_res20._4_4_ == 9)) {
              param_2[1] = 9;
              *param_2 = (uint)((int)(uint)local_res20 < (int)*param_2);
                    /* WARNING: Could not recover jumptable at 0x0001804ae3f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)((ulonglong)(&switchD_1804ae10b::switchdataD_1804ae780)[(int)param_3] +
                        0x180000000))
                        ((code *)((ulonglong)
                                  (&switchD_1804ae10b::switchdataD_1804ae780)[(int)param_3] +
                                 0x180000000));
              return;
            }
            param_2[1] = 9;
            *param_2 = (uint)((uint)local_res20 < *param_2);
                    /* WARNING: Could not recover jumptable at 0x0001804ae415. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)((ulonglong)(&switchD_1804ae10b::switchdataD_1804ae780)[(int)param_3] +
                      0x180000000))
                      ((code *)((ulonglong)(&switchD_1804ae10b::switchdataD_1804ae780)[(int)param_3]
                               + 0x180000000));
            return;
          }
          if (iVar1 == 0x108) {
            FUN_1804af150(param_1);
            FUN_1804af040(param_1,&local_res20,8);
            if ((param_2[1] == 9) && (local_res20._4_4_ == 9)) {
              param_2[1] = 9;
              *param_2 = (uint)((int)*param_2 <= (int)(uint)local_res20);
                    /* WARNING: Could not recover jumptable at 0x0001804ae462. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)((ulonglong)(&switchD_1804ae10b::switchdataD_1804ae780)[(int)param_3] +
                        0x180000000))
                        ((code *)((ulonglong)
                                  (&switchD_1804ae10b::switchdataD_1804ae780)[(int)param_3] +
                                 0x180000000));
              return;
            }
            param_2[1] = 9;
            *param_2 = (uint)(*param_2 <= (uint)local_res20);
                    /* WARNING: Could not recover jumptable at 0x0001804ae482. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)((ulonglong)(&switchD_1804ae10b::switchdataD_1804ae780)[(int)param_3] +
                      0x180000000))
                      ((code *)((ulonglong)(&switchD_1804ae10b::switchdataD_1804ae780)[(int)param_3]
                               + 0x180000000));
            return;
          }
          if (iVar1 == 0x109) {
            FUN_1804af150(param_1);
            FUN_1804af040(param_1,&local_res20,8);
            if ((param_2[1] == 9) && (local_res20._4_4_ == 9)) {
              param_2[1] = 9;
              *param_2 = (uint)((int)(uint)local_res20 <= (int)*param_2);
                    /* WARNING: Could not recover jumptable at 0x0001804ae4cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)((ulonglong)(&switchD_1804ae10b::switchdataD_1804ae780)[(int)param_3] +
                        0x180000000))
                        ((code *)((ulonglong)
                                  (&switchD_1804ae10b::switchdataD_1804ae780)[(int)param_3] +
                                 0x180000000));
              return;
            }
            param_2[1] = 9;
            *param_2 = (uint)((uint)local_res20 <= *param_2);
                    /* WARNING: Could not recover jumptable at 0x0001804ae4ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)((ulonglong)(&switchD_1804ae10b::switchdataD_1804ae780)[(int)param_3] +
                      0x180000000))
                      ((code *)((ulonglong)(&switchD_1804ae10b::switchdataD_1804ae780)[(int)param_3]
                               + 0x180000000));
            return;
          }
switchD_1804ae10b_caseD_804ae4f1:
          if (*(int *)(param_1 + 4) == 0x10a) {
            FUN_1804af150(param_1);
            FUN_1804af040(param_1,&local_res20,9);
            *param_2 = *param_2 << ((byte)local_res20 & 0x1f);
                    /* WARNING: Could not recover jumptable at 0x0001804ae525. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)((ulonglong)(&switchD_1804ae10b::switchdataD_1804ae780)[(int)param_3] +
                      0x180000000))
                      ((code *)((ulonglong)(&switchD_1804ae10b::switchdataD_1804ae780)[(int)param_3]
                               + 0x180000000));
            return;
          }
          if (*(int *)(param_1 + 4) == 0x10b) {
            FUN_1804af150(param_1);
            FUN_1804af040(param_1,&local_res20,9);
            if (param_2[1] == 9) {
              *param_2 = (int)*param_2 >> ((byte)local_res20 & 0x1f);
                    /* WARNING: Could not recover jumptable at 0x0001804ae55e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)((ulonglong)(&switchD_1804ae10b::switchdataD_1804ae780)[(int)param_3] +
                        0x180000000))
                        ((code *)((ulonglong)
                                  (&switchD_1804ae10b::switchdataD_1804ae780)[(int)param_3] +
                                 0x180000000));
              return;
            }
            *param_2 = *param_2 >> ((byte)local_res20 & 0x1f);
                    /* WARNING: Could not recover jumptable at 0x0001804ae56d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)((ulonglong)(&switchD_1804ae10b::switchdataD_1804ae780)[(int)param_3] +
                      0x180000000))
                      ((code *)((ulonglong)(&switchD_1804ae10b::switchdataD_1804ae780)[(int)param_3]
                               + 0x180000000));
            return;
          }
switchD_1804ae10b_caseD_804ae56f:
          if (*(int *)(param_1 + 4) == 0x2b) {
            FUN_1804af150(param_1);
            FUN_1804af040(param_1,&local_res20,10);
            *param_2 = *param_2 + (uint)local_res20;
          }
          else if (*(int *)(param_1 + 4) == 0x2d) {
            FUN_1804af150(param_1);
            FUN_1804af040(param_1,&local_res20,10);
            *param_2 = *param_2 - (uint)local_res20;
          }
          else {
switchD_1804ae10b_caseD_804ae5be:
            iVar1 = *(int *)(param_1 + 4);
            if (iVar1 != 0x2a) {
              if (iVar1 == 0x2f) {
                FUN_1804af150(param_1);
                *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + 1;
                if (*(int *)(param_1 + 0x6c) < 0x15) {
                  FUN_1804aeb20(param_1,&local_res20);
                  FUN_1804ae920(param_1);
                  *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + -1;
                  uVar3 = param_2[1];
                  if (uVar3 < local_res20._4_4_) {
                    param_2[1] = local_res20._4_4_;
                    uVar3 = local_res20._4_4_;
                  }
                  if ((uint)local_res20 != 0) {
                    uVar2 = *param_2;
                    if (uVar3 != 9) {
                      uVar3 = (&switchD_1804ae10b::switchdataD_1804ae780)[(int)param_3];
                      *param_2 = uVar2 / (uint)local_res20;
                    /* WARNING: Could not recover jumptable at 0x0001804ae6b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                      (*(code *)((ulonglong)uVar3 + 0x180000000))
                                ((code *)((ulonglong)uVar3 + 0x180000000),
                                 (ulonglong)uVar2 % (local_res20 & 0xffffffff));
                      return;
                    }
                    if ((uVar2 != 0x80000000) || ((uint)local_res20 != 0xffffffff)) {
                      uVar3 = (&switchD_1804ae10b::switchdataD_1804ae780)[(int)param_3];
                      *param_2 = (int)uVar2 / (int)(uint)local_res20;
                    /* WARNING: Could not recover jumptable at 0x0001804ae69c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                      (*(code *)((ulonglong)uVar3 + 0x180000000))
                                ((code *)((ulonglong)uVar3 + 0x180000000),
                                 (longlong)(int)uVar2 % (longlong)(int)(uint)local_res20 &
                                 0xffffffff);
                      return;
                    }
                  }
                  goto LAB_1804ae763;
                }
              }
              else {
                if (iVar1 != 0x25) {
                  return;
                }
                FUN_1804af150(param_1);
                *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + 1;
                if (*(int *)(param_1 + 0x6c) < 0x15) {
                  FUN_1804aeb20(param_1,&local_res20);
                  FUN_1804ae920(param_1);
                  *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + -1;
                  uVar3 = param_2[1];
                  if (uVar3 < local_res20._4_4_) {
                    param_2[1] = local_res20._4_4_;
                    uVar3 = local_res20._4_4_;
                  }
                  if ((uint)local_res20 != 0) {
                    uVar2 = *param_2;
                    if (uVar3 != 9) {
                      uVar3 = (&switchD_1804ae10b::switchdataD_1804ae780)[(int)param_3];
                      *param_2 = (uint)((ulonglong)uVar2 % (local_res20 & 0xffffffff));
                    /* WARNING: Could not recover jumptable at 0x0001804ae744. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                      (*(code *)((ulonglong)uVar3 + 0x180000000))
                                ((code *)((ulonglong)uVar3 + 0x180000000));
                      return;
                    }
                    if ((uVar2 != 0x80000000) || ((uint)local_res20 != -1)) {
                      uVar3 = (&switchD_1804ae10b::switchdataD_1804ae780)[(int)param_3];
                      *param_2 = (int)uVar2 % (int)(uint)local_res20;
                    /* WARNING: Could not recover jumptable at 0x0001804ae72e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                      (*(code *)((ulonglong)uVar3 + 0x180000000))
                                ((code *)((ulonglong)uVar3 + 0x180000000));
                      return;
                    }
                  }
LAB_1804ae763:
                    /* WARNING: Subroutine does not return */
                  FUN_1804adef0(param_1,0x219);
                }
              }
LAB_1804ae771:
                    /* WARNING: Subroutine does not return */
              FUN_1804adef0(param_1,0x8e4);
            }
            FUN_1804af150(param_1);
            *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + 1;
            if (0x14 < *(int *)(param_1 + 0x6c)) goto LAB_1804ae771;
            FUN_1804aeb20(param_1,&local_res20);
            FUN_1804ae920(param_1,&local_res20);
            *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + -1;
            *param_2 = (uint)local_res20 * *param_2;
          }
        }
      }
    }
    if (param_2[1] < local_res20._4_4_) {
      uVar3 = (&switchD_1804ae10b::switchdataD_1804ae780)[(int)param_3];
      param_2[1] = local_res20._4_4_;
                    /* WARNING: Could not recover jumptable at 0x0001804ae618. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulonglong)uVar3 + 0x180000000))((code *)((ulonglong)uVar3 + 0x180000000));
      return;
    }
  } while( true );
}



/* ===== 1804ae7b0 FUN_1804ae7b0 ===== */

void FUN_1804ae7b0(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  byte bVar3;
  ulonglong uVar4;
  
  *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + 1;
  if (0x14 < *(int *)(param_1 + 0x6c)) {
                    /* WARNING: Subroutine does not return */
    FUN_1804adef0(param_1,0x8e4);
  }
  FUN_1804aeb20();
  FUN_1804ae920(param_1,param_2);
  *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + -1;
  FUN_1804ae0c0(param_1,param_2,0);
  lVar2 = **(longlong **)(param_1 + 0x50);
  uVar4 = (ulonglong)*(uint *)(param_2 + 4);
  uVar1 = *(uint *)(lVar2 + uVar4 * 0x18);
  bVar3 = (byte)(uVar1 >> 0x18);
  while (bVar3 >> 4 == 8) {
    uVar4 = (ulonglong)*(ushort *)(lVar2 + uVar4 * 0x18);
    uVar1 = *(uint *)(lVar2 + uVar4 * 0x18);
    bVar3 = (byte)(uVar1 >> 0x18);
  }
  if ((uVar1 & 0xfc000000) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804adef0(param_1,0x219);
  }
  return;
}



/* ===== 1804ae860 FUN_1804ae860 ===== */

void FUN_1804ae860(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  byte bVar3;
  ulonglong uVar4;
  uint local_res8;
  uint uStackX_c;
  
  *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + 1;
  if (0x14 < *(int *)(param_1 + 0x6c)) {
                    /* WARNING: Subroutine does not return */
    FUN_1804adef0(param_1,0x8e4);
  }
  FUN_1804aeb20(param_1,&local_res8);
  FUN_1804ae920(param_1,&local_res8);
  *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + -1;
  FUN_1804ae0c0(param_1,&local_res8,0);
  lVar2 = **(longlong **)(param_1 + 0x50);
  uVar4 = (ulonglong)uStackX_c;
  uVar1 = *(uint *)(lVar2 + uVar4 * 0x18);
  bVar3 = (byte)(uVar1 >> 0x18);
  while (bVar3 >> 4 == 8) {
    uVar4 = (ulonglong)*(ushort *)(lVar2 + uVar4 * 0x18);
    uVar1 = *(uint *)(lVar2 + uVar4 * 0x18);
    bVar3 = (byte)(uVar1 >> 0x18);
  }
  if ((uVar1 & 0xfc000000) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804adef0(param_1,0x219);
  }
  if (0x7fffffff < local_res8) {
                    /* WARNING: Subroutine does not return */
    FUN_1804adef0(param_1,0xc77);
  }
  return;
}



/* ===== 1804ae920 FUN_1804ae920 ===== */

void FUN_1804ae920(longlong param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  ushort *puVar3;
  uint *puVar4;
  uint *puVar5;
  longlong lVar6;
  undefined1 local_res8 [8];
  undefined1 local_res18 [4];
  undefined4 local_res1c;
  
  while( true ) {
    while (iVar1 = *(int *)(param_1 + 4), iVar1 == 0x5b) {
      do {
        FUN_1804af150(param_1);
        FUN_1804af040(param_1,local_res18);
      } while (*(int *)(param_1 + 4) == 0x2c);
      puVar3 = (ushort *)FUN_1804aba40(*(undefined8 *)(param_1 + 0x50),param_2[1]);
      if ((byte)((uint)*(undefined4 *)puVar3 >> 0x1d) != 1) {
        puVar3 = (ushort *)FUN_1804aba40(*(undefined8 *)(param_1 + 0x50),local_res1c);
        if ((byte)((uint)*(undefined4 *)puVar3 >> 0x1d) != 1) {
                    /* WARNING: Subroutine does not return */
          FUN_1804adf00(param_1,puVar3);
        }
      }
      if (*(int *)(param_1 + 4) != 0x5d) {
                    /* WARNING: Subroutine does not return */
        FUN_1804adf50(param_1,0x5d);
      }
      FUN_1804af150();
      *param_2 = 0;
      param_2[1] = (uint)*puVar3;
    }
    if ((iVar1 != 0x2e) && (iVar1 != 0x10c)) {
      return;
    }
    puVar4 = (uint *)FUN_1804aba40(*(undefined8 *)(param_1 + 0x50),param_2[1]);
    if (*(int *)(param_1 + 4) == 0x10c) {
      if ((byte)(*puVar4 >> 0x1d) != 1) {
                    /* WARNING: Subroutine does not return */
        FUN_1804adf00(param_1,puVar4);
      }
      puVar4 = (uint *)FUN_1804aba40(*(undefined8 *)(param_1 + 0x50),*puVar4 & 0xffff);
    }
    FUN_1804af150(param_1);
    if (*(int *)(param_1 + 4) != 0x100) {
                    /* WARNING: Subroutine does not return */
      FUN_1804adf50(param_1,0x100);
    }
    if (((byte)(*puVar4 >> 0x1c) != 1) || (puVar4[1] == 0xffffffff)) break;
    puVar5 = (uint *)FUN_1804ab270(*(undefined8 *)(param_1 + 0x50),puVar4,
                                   *(undefined8 *)(param_1 + 0x10),local_res8,0);
    if ((puVar5 == (uint *)0x0) || (*puVar5 >> 0x1c == 10)) break;
    if (*puVar5 >> 0x1c == 0xb) {
      uVar2 = puVar5[1];
    }
    else {
      uVar2 = 0;
    }
    *param_2 = uVar2;
    FUN_1804af150(param_1);
    param_2[1] = (uint)(ushort)*puVar5;
  }
  lVar6 = FUN_1804aba80((*(longlong **)(param_1 + 0x50))[2],
                        ((longlong)puVar4 - **(longlong **)(param_1 + 0x50)) / 0x18,0);
                    /* WARNING: Subroutine does not return */
  FUN_1804adf80(param_1,0,0xe38,lVar6 + 0x18,*(longlong *)(param_1 + 0x10) + 0x18);
}



/* ===== 1804aeb20 FUN_1804aeb20 ===== */

void FUN_1804aeb20(longlong param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ushort *puVar4;
  undefined8 uVar5;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 0x102) {
    *(undefined8 *)param_2 = *(undefined8 *)(param_1 + 8);
    FUN_1804af150();
    return;
  }
  if (iVar1 == 0x2b) {
    FUN_1804af150();
    *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + 1;
    if (*(int *)(param_1 + 0x6c) < 0x15) {
      FUN_1804aeb20(param_1,param_2);
      FUN_1804ae920(param_1,param_2);
      *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + -1;
      return;
    }
  }
  else if (iVar1 == 0x2d) {
    FUN_1804af150();
    *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + 1;
    if (*(int *)(param_1 + 0x6c) < 0x15) {
      FUN_1804aeb20(param_1,param_2);
      FUN_1804ae920(param_1,param_2);
      *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + -1;
      *param_2 = -*param_2;
      return;
    }
  }
  else if (iVar1 == 0x7e) {
    FUN_1804af150();
    *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + 1;
    if (*(int *)(param_1 + 0x6c) < 0x15) {
      FUN_1804aeb20(param_1,param_2);
      FUN_1804ae920(param_1,param_2);
      *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + -1;
      *param_2 = ~*param_2;
      return;
    }
  }
  else if (iVar1 == 0x21) {
    FUN_1804af150();
    *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + 1;
    if (*(int *)(param_1 + 0x6c) < 0x15) {
      FUN_1804aeb20(param_1,param_2);
      FUN_1804ae920(param_1,param_2);
      *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + -1;
      param_2[1] = 9;
      *param_2 = (uint)(*param_2 == 0);
      return;
    }
  }
  else {
    if (iVar1 == 0x28) {
      FUN_1804af150();
      iVar1 = FUN_1804af110(param_1);
      if (iVar1 == 0) {
        FUN_1804ae080(param_1,param_2);
        if (*(int *)(param_1 + 4) == 0x29) {
LAB_1804aee6c:
          FUN_1804af150(param_1);
          return;
        }
      }
      else {
        uVar2 = FUN_1804abef0();
        if (*(int *)(param_1 + 4) == 0x29) {
          FUN_1804af150(param_1);
          *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + 1;
          if (*(int *)(param_1 + 0x6c) < 0x15) {
            FUN_1804aeb20(param_1,param_2);
            FUN_1804ae920(param_1,param_2);
            *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + -1;
            param_2[1] = uVar2;
            return;
          }
          goto LAB_1804aeef8;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_1804adf50(param_1,0x29);
    }
    if (iVar1 == 0x2a) {
      FUN_1804af150();
      *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + 1;
      if (*(int *)(param_1 + 0x6c) < 0x15) {
        FUN_1804aeb20(param_1,param_2);
        FUN_1804ae920(param_1,param_2);
        *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + -1;
        puVar4 = (ushort *)FUN_1804aba40(*(undefined8 *)(param_1 + 0x50),param_2[1]);
        if ((byte)((uint)*(undefined4 *)puVar4 >> 0x1d) != 1) {
                    /* WARNING: Subroutine does not return */
          FUN_1804adf00(param_1);
        }
        *param_2 = 0;
        param_2[1] = (uint)*puVar4;
        return;
      }
    }
    else {
      if (iVar1 != 0x26) {
        if (iVar1 == 0x12a) {
          FUN_1804af150();
          uVar5 = 1;
        }
        else {
          if (iVar1 != 299) {
            if (iVar1 == 0x100) {
              uVar2 = **(uint **)(param_1 + 0x18) >> 0x1c;
              if (uVar2 == 0xb) {
                *param_2 = (*(uint **)(param_1 + 0x18))[1];
                param_2[1] = (uint)**(ushort **)(param_1 + 0x18);
                FUN_1804af150(param_1);
                return;
              }
              if (uVar2 == 0xc) {
                *param_2 = *(uint *)(param_1 + 0xc);
                param_2[1] = (uint)**(ushort **)(param_1 + 0x18);
                FUN_1804af150(param_1);
                return;
              }
              if (uVar2 == 6) {
                *param_2 = *(uint *)(param_1 + 0xc);
                param_2[1] = *(uint *)(param_1 + 0xc);
                goto LAB_1804aee6c;
              }
            }
            else if (iVar1 == 0x101) {
              iVar1 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x14);
              iVar3 = FUN_1804af150();
              while (iVar3 == 0x101) {
                iVar1 = iVar1 + *(int *)(*(longlong *)(param_1 + 0x10) + 0x14);
                iVar3 = FUN_1804af150(param_1);
              }
              *param_2 = iVar1 + 1;
              param_2[1] = 0x17;
              return;
            }
                    /* WARNING: Subroutine does not return */
            FUN_1804adf80(param_1,iVar1,0xacb);
          }
          FUN_1804af150();
          uVar5 = 0;
        }
        FUN_1804aef10(param_1,param_2,uVar5);
        return;
      }
      FUN_1804af150();
      *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + 1;
      if (*(int *)(param_1 + 0x6c) < 0x15) {
        FUN_1804aeb20(param_1,param_2);
        FUN_1804ae920(param_1,param_2);
        *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + -1;
        uVar2 = FUN_1804ab7b0(*(undefined8 *)(param_1 + 0x50),param_2[1] + 0x20030000,8);
        param_2[1] = uVar2;
        return;
      }
    }
  }
LAB_1804aeef8:
                    /* WARNING: Subroutine does not return */
  FUN_1804adef0(param_1,0x8e4);
}



/* ===== 1804aef10 FUN_1804aef10 ===== */

void FUN_1804aef10(longlong param_1,int *param_2,int param_3)

{
  byte extraout_var;
  int iVar1;
  int local_res8 [2];
  
  if (*(int *)(param_1 + 4) == 0x28) {
    FUN_1804af150();
    iVar1 = *(int *)(param_1 + 4);
    if (iVar1 - 0x10dU < 0x1d) {
LAB_1804aef57:
      iVar1 = FUN_1804abef0(param_1);
      param_2[1] = iVar1;
    }
    else {
      if (iVar1 == 0x100) {
        if ((byte)((uint)**(undefined4 **)(param_1 + 0x18) >> 0x1c) == 7) goto LAB_1804aef57;
      }
      else if (iVar1 == 0x24) goto LAB_1804aef57;
      while (FUN_1804af040(param_1,param_2,0), *(int *)(param_1 + 4) == 0x2c) {
        FUN_1804af150(param_1);
      }
    }
    if (*(int *)(param_1 + 4) != 0x29) {
                    /* WARNING: Subroutine does not return */
      FUN_1804adf50(param_1,0x29);
    }
    FUN_1804af150();
  }
  else {
    *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + 1;
    if (0x14 < *(int *)(param_1 + 0x6c)) {
                    /* WARNING: Subroutine does not return */
      FUN_1804adef0(param_1,0x8e4);
    }
    FUN_1804aeb20();
    FUN_1804ae920(param_1,param_2);
    *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + -1;
  }
  FUN_1804ab4a0(*(undefined8 *)(param_1 + 0x50),param_2[1],local_res8);
  if (param_3 == 0) {
    local_res8[0] = 1 << (extraout_var & 0xf);
  }
  else if (local_res8[0] == -1) {
    if (param_2[1] != 0x17) {
                    /* WARNING: Subroutine does not return */
      FUN_1804adef0(param_1,0xc77);
    }
    goto LAB_1804aeff8;
  }
  *param_2 = local_res8[0];
LAB_1804aeff8:
  param_2[1] = 10;
  return;
}



/* ===== 1804af040 FUN_1804af040 ===== */

void FUN_1804af040(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + 1;
  if (0x14 < *(int *)(param_1 + 0x6c)) {
                    /* WARNING: Subroutine does not return */
    FUN_1804adef0(param_1,0x8e4);
  }
  FUN_1804aeb20();
  FUN_1804ae920(param_1,param_2);
  *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + -1;
  FUN_1804ae0c0(param_1,param_2,param_3);
  return;
}



/* ===== 1804af0a0 FUN_1804af0a0 ===== */

uint FUN_1804af0a0(uint *param_1)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  uint uVar4;
  byte *pbVar5;
  
  pbVar3 = *(byte **)(param_1 + 8);
  bVar1 = *pbVar3;
  if ((bVar1 != 10) && (bVar1 != 0xd)) {
    return *param_1;
  }
  pbVar5 = pbVar3 + 1;
  *(byte **)(param_1 + 8) = pbVar5;
  bVar2 = *pbVar5;
  if (((bVar2 == 10) || (bVar2 == 0xd)) && (bVar2 != bVar1)) {
    pbVar5 = pbVar3 + 2;
    *(byte **)(param_1 + 8) = pbVar5;
  }
  param_1[0x1a] = param_1[0x1a] + 1;
  bVar1 = *pbVar5;
  uVar4 = (uint)bVar1;
  *param_1 = (uint)bVar1;
  *(byte **)(param_1 + 8) = pbVar5 + 1;
  if (bVar1 == 0x5c) {
    uVar4 = FUN_1804af0a0();
  }
  return uVar4;
}



/* ===== 1804af110 FUN_1804af110 ===== */

bool FUN_1804af110(longlong param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (0x1c < iVar1 - 0x10dU) {
    if (iVar1 != 0x100) {
      return iVar1 == 0x24;
    }
    if ((byte)((uint)**(undefined4 **)(param_1 + 0x18) >> 0x1c) != 7) {
      return false;
    }
  }
  return true;
}



/* ===== 1804af150 FUN_1804af150 ===== */

void FUN_1804af150(longlong param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_1804af170();
  *(undefined4 *)(param_1 + 4) = uVar1;
  return;
}



/* ===== 1804af170 FUN_1804af170 ===== */

ulonglong FUN_1804af170(uint *param_1)

{
  char cVar1;
  byte bVar2;
  ushort uVar3;
  double *pdVar4;
  longlong lVar5;
  double dVar6;
  uint uVar7;
  int iVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  uint local_res8 [2];
  
  *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_1 + 0xe);
  uVar7 = *param_1;
  uVar11 = (ulonglong)(int)uVar7;
  cVar1 = (&DAT_18056fcb1)[uVar11];
  do {
    if (cVar1 < '\0') {
      if (((&DAT_18056fcb1)[(int)uVar7] & 8) == 0) {
        do {
          uVar7 = *param_1;
          if (param_1[0xc] == param_1[10]) {
            puVar9 = (undefined1 *)FUN_1804a9db0(param_1 + 10,1);
          }
          else {
            puVar9 = *(undefined1 **)(param_1 + 10);
          }
          *puVar9 = (char)uVar7;
          *(undefined1 **)(param_1 + 10) = puVar9 + 1;
          bVar2 = **(byte **)(param_1 + 8);
          uVar7 = (uint)bVar2;
          *param_1 = (uint)bVar2;
          *(byte **)(param_1 + 8) = *(byte **)(param_1 + 8) + 1;
          if (bVar2 == 0x5c) {
            uVar7 = FUN_1804af0a0(param_1);
          }
        } while ((char)(&DAT_18056fcb1)[(int)uVar7] < '\0');
        uVar10 = FUN_180491d30(*(undefined8 *)(param_1 + 0x12),*(undefined8 *)(param_1 + 0xe),
                               param_1[10] - (int)*(undefined8 *)(param_1 + 0xe));
        *(undefined8 *)(param_1 + 4) = uVar10;
        uVar7 = FUN_1804ab370(*(undefined8 *)(param_1 + 0x14),param_1 + 6,uVar10,param_1[0x1c]);
        param_1[3] = uVar7;
        uVar11 = (ulonglong)(**(uint **)(param_1 + 6) & 0xffff);
        if ((byte)(**(uint **)(param_1 + 6) >> 0x1c) != 0xd) {
          uVar11 = 0x100;
        }
      }
      else {
        do {
          uVar7 = *param_1;
          if (param_1[0xc] == param_1[10]) {
            puVar9 = (undefined1 *)FUN_1804a9db0(param_1 + 10,1);
          }
          else {
            puVar9 = *(undefined1 **)(param_1 + 10);
          }
          *puVar9 = (char)uVar7;
          *(undefined1 **)(param_1 + 10) = puVar9 + 1;
          bVar2 = **(byte **)(param_1 + 8);
          uVar7 = (uint)bVar2;
          *param_1 = (uint)bVar2;
          *(byte **)(param_1 + 8) = *(byte **)(param_1 + 8) + 1;
          if (bVar2 == 0x5c) {
            uVar7 = FUN_1804af0a0(param_1);
          }
        } while ((char)(&DAT_18056fcb1)[(int)uVar7] < '\0');
        if (param_1[0xc] == param_1[10]) {
          puVar9 = (undefined1 *)FUN_1804a9db0(param_1 + 10,1);
        }
        else {
          puVar9 = *(undefined1 **)(param_1 + 10);
        }
        *puVar9 = 0;
        *(undefined1 **)(param_1 + 10) = puVar9 + 1;
        iVar8 = FUN_1804972d0(*(undefined8 *)(param_1 + 0xe),~param_1[0xe] + (int)(puVar9 + 1),
                              local_res8,0x10);
        if (iVar8 == 3) {
          param_1[3] = 9;
        }
        else {
          if (iVar8 == 4) {
            param_1[2] = local_res8[0];
            param_1[3] = 10;
            return 0x102;
          }
          if ((param_1[0x1d] & 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_1804adf80(param_1,0x102,0x905);
          }
        }
        param_1[2] = local_res8[0];
        uVar11 = 0x102;
      }
      return uVar11;
    }
    switch((uint)uVar11) {
    case 0:
      return 0x103;
    default:
      bVar2 = **(byte **)(param_1 + 8);
      *param_1 = (uint)bVar2;
      *(byte **)(param_1 + 8) = *(byte **)(param_1 + 8) + 1;
      if (bVar2 == 0x5c) {
        FUN_1804af0a0(param_1);
      }
      return uVar11 & 0xffffffff;
    case 10:
    case 0xd:
      bVar2 = **(byte **)(param_1 + 8);
      if (((bVar2 == 10) || (bVar2 == 0xd)) && ((uint)bVar2 != (uint)uVar11)) {
        *(byte **)(param_1 + 8) = *(byte **)(param_1 + 8) + 1;
      }
      param_1[0x1a] = param_1[0x1a] + 1;
    case 9:
    case 0xb:
    case 0xc:
    case 0x20:
      bVar2 = **(byte **)(param_1 + 8);
      *param_1 = (uint)bVar2;
      *(byte **)(param_1 + 8) = *(byte **)(param_1 + 8) + 1;
joined_r0x0001804af2d0:
      if (bVar2 == 0x5c) {
        FUN_1804af0a0(param_1);
      }
      break;
    case 0x21:
      bVar2 = **(byte **)(param_1 + 8);
      uVar7 = (uint)bVar2;
      *param_1 = (uint)bVar2;
      *(byte **)(param_1 + 8) = *(byte **)(param_1 + 8) + 1;
      if (bVar2 == 0x5c) {
        uVar7 = FUN_1804af0a0(param_1);
      }
      if (uVar7 != 0x3d) {
        return 0x21;
      }
      bVar2 = **(byte **)(param_1 + 8);
      *param_1 = (uint)bVar2;
      *(byte **)(param_1 + 8) = *(byte **)(param_1 + 8) + 1;
      if (bVar2 == 0x5c) {
        FUN_1804af0a0(param_1);
      }
      return 0x107;
    case 0x22:
    case 0x27:
      uVar11 = FUN_1804afdd0(param_1);
      return uVar11;
    case 0x24:
      bVar2 = **(byte **)(param_1 + 8);
      uVar7 = (uint)bVar2;
      *param_1 = (uint)bVar2;
      *(byte **)(param_1 + 8) = *(byte **)(param_1 + 8) + 1;
      if (bVar2 == 0x5c) {
        uVar7 = FUN_1804af0a0(param_1);
      }
      if (((char)(&DAT_18056fcb1)[(int)uVar7] < '\0') || (uVar7 == 0x24)) {
                    /* WARNING: Subroutine does not return */
        FUN_1804adf80(param_1,uVar7,0xb08);
      }
      pdVar4 = *(double **)(param_1 + 0x16);
      if ((pdVar4 == (double *)0x0) ||
         (lVar5 = *(longlong *)(param_1 + 0x12), *(double **)(lVar5 + 0x28) <= pdVar4)) {
                    /* WARNING: Subroutine does not return */
        FUN_1804adef0(param_1,0xd08);
      }
      *(double **)(param_1 + 0x16) = pdVar4 + 1;
      dVar6 = *pdVar4;
      uVar7 = (uint)((longlong)dVar6 >> 0x2f);
      if (uVar7 == 0xfffffffb) {
        param_1[3] = 0;
        *(ulonglong *)(param_1 + 4) = (ulonglong)dVar6 & 0x7fffffffffff;
        *(undefined8 *)(param_1 + 6) = **(undefined8 **)(param_1 + 0x14);
        return 0x100;
      }
      if (uVar7 < 0xfffffff3) {
        dVar6 = *pdVar4;
        param_1[3] = 9;
        param_1[2] = (int)dVar6;
        return 0x102;
      }
      if (uVar7 != 0xfffffff5) {
                    /* WARNING: Subroutine does not return */
        FUN_180484100(lVar5,(int)((longlong)pdVar4 - *(longlong *)(lVar5 + 0x20) >> 3) + 1,
                      "type parameter");
      }
      uVar3 = *(ushort *)(((ulonglong)dVar6 & 0x7fffffffffff) + 10);
      uVar7 = (uint)uVar3;
      if (uVar3 == 0x18) {
        uVar7 = *(uint *)(((ulonglong)dVar6 & 0x7fffffffffff) + 0x10);
      }
      param_1[3] = uVar7;
      return 0x24;
    case 0x26:
      bVar2 = **(byte **)(param_1 + 8);
      uVar7 = (uint)bVar2;
      *param_1 = (uint)bVar2;
      *(byte **)(param_1 + 8) = *(byte **)(param_1 + 8) + 1;
      if (bVar2 == 0x5c) {
        uVar7 = FUN_1804af0a0(param_1);
      }
      if (uVar7 != 0x26) {
        return 0x26;
      }
      bVar2 = **(byte **)(param_1 + 8);
      *param_1 = (uint)bVar2;
      *(byte **)(param_1 + 8) = *(byte **)(param_1 + 8) + 1;
      if (bVar2 == 0x5c) {
        FUN_1804af0a0(param_1);
      }
      return 0x105;
    case 0x2d:
      bVar2 = **(byte **)(param_1 + 8);
      uVar7 = (uint)bVar2;
      *param_1 = (uint)bVar2;
      *(byte **)(param_1 + 8) = *(byte **)(param_1 + 8) + 1;
      if (bVar2 == 0x5c) {
        uVar7 = FUN_1804af0a0(param_1);
      }
      if (uVar7 != 0x3e) {
        return 0x2d;
      }
      bVar2 = **(byte **)(param_1 + 8);
      *param_1 = (uint)bVar2;
      *(byte **)(param_1 + 8) = *(byte **)(param_1 + 8) + 1;
      if (bVar2 == 0x5c) {
        FUN_1804af0a0(param_1);
      }
      return 0x10c;
    case 0x2f:
      bVar2 = **(byte **)(param_1 + 8);
      uVar7 = (uint)bVar2;
      *param_1 = (uint)bVar2;
      *(byte **)(param_1 + 8) = *(byte **)(param_1 + 8) + 1;
      if (bVar2 == 0x5c) {
        uVar7 = FUN_1804af0a0(param_1);
      }
      if (uVar7 == 0x2a) {
        do {
          bVar2 = **(byte **)(param_1 + 8);
          uVar7 = (uint)bVar2;
          *param_1 = (uint)bVar2;
          *(byte **)(param_1 + 8) = *(byte **)(param_1 + 8) + 1;
          if (bVar2 == 0x5c) {
            uVar7 = FUN_1804af0a0(param_1);
          }
          while (uVar7 == 0x2a) {
            bVar2 = **(byte **)(param_1 + 8);
            uVar7 = (uint)bVar2;
            *param_1 = (uint)bVar2;
            *(byte **)(param_1 + 8) = *(byte **)(param_1 + 8) + 1;
            if (bVar2 == 0x5c) {
              uVar7 = FUN_1804af0a0(param_1);
            }
            if (uVar7 == 0x2f) {
              bVar2 = **(byte **)(param_1 + 8);
              *param_1 = (uint)bVar2;
              *(byte **)(param_1 + 8) = *(byte **)(param_1 + 8) + 1;
              goto joined_r0x0001804af2d0;
            }
            uVar7 = *param_1;
          }
          uVar7 = *param_1;
          if ((uVar7 == 10) || (uVar7 == 0xd)) {
            bVar2 = **(byte **)(param_1 + 8);
            if (((bVar2 == 10) || (bVar2 == 0xd)) && (bVar2 != uVar7)) {
              *(byte **)(param_1 + 8) = *(byte **)(param_1 + 8) + 1;
            }
            param_1[0x1a] = param_1[0x1a] + 1;
          }
        } while (uVar7 != 0);
      }
      else {
        if (*param_1 != 0x2f) {
          return 0x2f;
        }
        do {
          bVar2 = **(byte **)(param_1 + 8);
          uVar7 = (uint)bVar2;
          *param_1 = (uint)bVar2;
          *(byte **)(param_1 + 8) = *(byte **)(param_1 + 8) + 1;
          if (bVar2 == 0x5c) {
            uVar7 = FUN_1804af0a0(param_1);
          }
        } while (((uVar7 != 10) && (uVar7 != 0xd)) && (*param_1 != 0));
      }
      break;
    case 0x3c:
      bVar2 = **(byte **)(param_1 + 8);
      uVar7 = (uint)bVar2;
      *param_1 = (uint)bVar2;
      *(byte **)(param_1 + 8) = *(byte **)(param_1 + 8) + 1;
      if (bVar2 == 0x5c) {
        uVar7 = FUN_1804af0a0(param_1);
      }
      if (uVar7 == 0x3d) {
        bVar2 = **(byte **)(param_1 + 8);
        *param_1 = (uint)bVar2;
        *(byte **)(param_1 + 8) = *(byte **)(param_1 + 8) + 1;
        if (bVar2 == 0x5c) {
          FUN_1804af0a0(param_1);
        }
        return 0x108;
      }
      if (*param_1 != 0x3c) {
        return 0x3c;
      }
      bVar2 = **(byte **)(param_1 + 8);
      *param_1 = (uint)bVar2;
      *(byte **)(param_1 + 8) = *(byte **)(param_1 + 8) + 1;
      if (bVar2 == 0x5c) {
        FUN_1804af0a0(param_1);
      }
      return 0x10a;
    case 0x3d:
      bVar2 = **(byte **)(param_1 + 8);
      uVar7 = (uint)bVar2;
      *param_1 = (uint)bVar2;
      *(byte **)(param_1 + 8) = *(byte **)(param_1 + 8) + 1;
      if (bVar2 == 0x5c) {
        uVar7 = FUN_1804af0a0(param_1);
      }
      if (uVar7 != 0x3d) {
        return 0x3d;
      }
      bVar2 = **(byte **)(param_1 + 8);
      *param_1 = (uint)bVar2;
      *(byte **)(param_1 + 8) = *(byte **)(param_1 + 8) + 1;
      if (bVar2 == 0x5c) {
        FUN_1804af0a0(param_1);
      }
      return 0x106;
    case 0x3e:
      bVar2 = **(byte **)(param_1 + 8);
      uVar7 = (uint)bVar2;
      *param_1 = (uint)bVar2;
      *(byte **)(param_1 + 8) = *(byte **)(param_1 + 8) + 1;
      if (bVar2 == 0x5c) {
        uVar7 = FUN_1804af0a0(param_1);
      }
      if (uVar7 == 0x3d) {
        bVar2 = **(byte **)(param_1 + 8);
        *param_1 = (uint)bVar2;
        *(byte **)(param_1 + 8) = *(byte **)(param_1 + 8) + 1;
        if (bVar2 == 0x5c) {
          FUN_1804af0a0(param_1);
        }
        return 0x109;
      }
      if (*param_1 != 0x3e) {
        return 0x3e;
      }
      bVar2 = **(byte **)(param_1 + 8);
      *param_1 = (uint)bVar2;
      *(byte **)(param_1 + 8) = *(byte **)(param_1 + 8) + 1;
      if (bVar2 == 0x5c) {
        FUN_1804af0a0(param_1);
      }
      return 0x10b;
    case 0x7c:
      bVar2 = **(byte **)(param_1 + 8);
      uVar7 = (uint)bVar2;
      *param_1 = (uint)bVar2;
      *(byte **)(param_1 + 8) = *(byte **)(param_1 + 8) + 1;
      if (bVar2 == 0x5c) {
        uVar7 = FUN_1804af0a0(param_1);
      }
      if (uVar7 != 0x7c) {
        return 0x7c;
      }
      bVar2 = **(byte **)(param_1 + 8);
      *param_1 = (uint)bVar2;
      *(byte **)(param_1 + 8) = *(byte **)(param_1 + 8) + 1;
      if (bVar2 == 0x5c) {
        FUN_1804af0a0(param_1);
      }
      return 0x104;
    }
    uVar7 = *param_1;
    uVar11 = (ulonglong)(int)uVar7;
    cVar1 = (&DAT_18056fcb1)[uVar11];
  } while( true );
}



/* ===== 1804afad0 FUN_1804afad0 ===== */

void FUN_1804afad0(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  undefined1 uVar5;
  
  FUN_1804af150();
  if (*(int *)(param_1 + 4) != 0x100) {
    if (*(int *)(param_1 + 4) == 0x103) {
      return;
    }
LAB_1804afc00:
    do {
      if (*(int *)(param_1 + 0x68) != param_2) {
        return;
      }
      FUN_1804af150(param_1);
    } while (*(int *)(param_1 + 4) != 0x103);
    return;
  }
  if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x14) != 4) ||
     (*(int *)(*(longlong *)(param_1 + 0x10) + 0x18) != 0x6b636170)) goto LAB_1804afc00;
  FUN_1804af150(param_1);
  if (*(int *)(param_1 + 4) != 0x28) {
                    /* WARNING: Subroutine does not return */
    FUN_1804adf50(param_1,0x28);
  }
  FUN_1804af150();
  iVar4 = *(int *)(param_1 + 4);
  if (iVar4 == 0x100) {
    lVar3 = *(longlong *)(param_1 + 0x10);
    if (*(int *)(lVar3 + 0x14) == 4) {
      if (*(int *)(lVar3 + 0x18) != 0x68737570) {
LAB_1804afc40:
                    /* WARNING: Subroutine does not return */
        FUN_1804adf80(param_1,0x100,0xacb);
      }
      bVar1 = *(byte *)(param_1 + 0x7f);
      if (5 < bVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_1804adf80(param_1,0x100,0x8e4);
      }
      *(undefined1 *)((ulonglong)bVar1 + 0x79 + param_1) =
           *(undefined1 *)((ulonglong)bVar1 + 0x78 + param_1);
      *(char *)(param_1 + 0x7f) = *(char *)(param_1 + 0x7f) + '\x01';
    }
    else {
      if (((*(int *)(lVar3 + 0x14) != 3) || (*(short *)(lVar3 + 0x18) != 0x6f70)) ||
         (*(char *)(lVar3 + 0x1a) != 'p')) goto LAB_1804afc40;
      if (*(char *)(param_1 + 0x7f) != '\0') {
        *(char *)(param_1 + 0x7f) = *(char *)(param_1 + 0x7f) + -1;
      }
    }
    FUN_1804af150(param_1);
    if (*(int *)(param_1 + 4) != 0x2c) goto LAB_1804afbdb;
    FUN_1804af150();
    iVar4 = *(int *)(param_1 + 4);
  }
  if (iVar4 == 0x102) {
    uVar2 = *(uint *)(param_1 + 8);
    if (uVar2 == 0) {
      uVar5 = 0;
    }
    else {
      iVar4 = 0x1f;
      if (uVar2 != 0) {
        for (; uVar2 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      uVar5 = (undefined1)iVar4;
    }
    *(undefined1 *)((ulonglong)*(byte *)(param_1 + 0x7f) + 0x78 + param_1) = uVar5;
    FUN_1804af150(param_1);
  }
  else {
    *(undefined1 *)((ulonglong)*(byte *)(param_1 + 0x7f) + 0x78 + param_1) = 0xff;
  }
LAB_1804afbdb:
  if (*(int *)(param_1 + 4) != 0x29) {
                    /* WARNING: Subroutine does not return */
    FUN_1804adf50(param_1,0x29);
  }
  FUN_1804af150();
  return;
}



/* ===== 1804afc60 FUN_1804afc60 ===== */

void FUN_1804afc60(longlong param_1,uint param_2)

{
  longlong lVar1;
  uint uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar4 = (ulonglong)param_2;
  lVar1 = **(longlong **)(*(longlong *)(param_1 + 0x10) + 0x50);
  uVar5 = *(uint *)(lVar1 + uVar4 * 0x18);
  uVar6 = *(uint *)(lVar1 + 4 + uVar4 * 0x18);
  uVar2 = uVar5 >> 0x1c;
  if (uVar2 != 1) {
    if (uVar2 == 3) {
      if ((uVar5 & 0xc000000) != 0) {
        uVar5 = *(uint *)(param_1 + 0x2c) & 0x3000000 | uVar5;
        *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) & 0xfcffffff;
      }
      FUN_1804afc60(param_1,uVar5 & 0xffff);
      uVar5 = FUN_1804abe70(param_1,uVar5 & 0xffff0000,uVar6);
      *(uint *)(param_1 + 4) = uVar5;
      *(undefined2 *)(param_1 + ((ulonglong)uVar5 + 3) * 0x18) = 1;
      return;
    }
    if (uVar2 != 5) {
      if (uVar2 == 6) {
        uVar5 = FUN_1804abe70(param_1,uVar5,uVar6);
        *(uint *)(param_1 + 4) = uVar5;
        *(undefined2 *)(param_1 + ((ulonglong)uVar5 + 3) * 0x18) =
             *(undefined2 *)(lVar1 + 8 + uVar4 * 0x18);
        return;
      }
      if (uVar2 == 8) {
        if ((uVar5 & 0xf0ff0000) == 0x80010000) {
          *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) & ~uVar6;
        }
        FUN_1804afc60(param_1,uVar5 & 0xffff);
        uVar3 = FUN_1804abe70(param_1,uVar5 & 0xffff0000,uVar6);
        *(undefined4 *)(param_1 + 4) = uVar3;
        return;
      }
      uVar5 = *(uint *)(param_1 + 0x2c) & 0x3000000 | uVar5;
      goto LAB_1804afdaf;
    }
  }
  uVar3 = FUN_1804abe70(param_1,param_2 + 0x70000000,0);
  *(undefined4 *)(param_1 + 4) = uVar3;
  uVar6 = *(uint *)(param_1 + 0x2c) & 0x3000000;
  if (uVar6 == 0) {
    return;
  }
  uVar5 = 0x80010000;
LAB_1804afdaf:
  uVar3 = FUN_1804abe70(param_1,uVar5,uVar6);
  *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) & 0xfcffffff;
  *(undefined4 *)(param_1 + 4) = uVar3;
  return;
}



/* ===== 1804afdd0 FUN_1804afdd0 ===== */

undefined8 FUN_1804afdd0(uint *param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 *puVar5;
  char *pcVar6;
  undefined8 uVar7;
  char cVar8;
  int iVar9;
  char cVar10;
  
  uVar2 = *param_1;
  bVar1 = **(byte **)(param_1 + 8);
  *param_1 = (uint)bVar1;
  *(byte **)(param_1 + 8) = *(byte **)(param_1 + 8) + 1;
  if (bVar1 == 0x5c) {
    FUN_1804af0a0(param_1);
  }
  uVar3 = *param_1;
  do {
    if (uVar3 == uVar2) {
      bVar1 = **(byte **)(param_1 + 8);
      *param_1 = (uint)bVar1;
      *(byte **)(param_1 + 8) = *(byte **)(param_1 + 8) + 1;
      if (bVar1 == 0x5c) {
        FUN_1804af0a0(param_1);
      }
      if (uVar2 == 0x22) {
        uVar7 = FUN_180491d30(*(undefined8 *)(param_1 + 0x12),*(undefined8 *)(param_1 + 0xe),
                              param_1[10] - (int)*(undefined8 *)(param_1 + 0xe));
        *(undefined8 *)(param_1 + 4) = uVar7;
        uVar7 = 0x101;
      }
      else {
        if (param_1[10] - param_1[0xe] != 1) {
                    /* WARNING: Subroutine does not return */
          FUN_1804adf50(param_1,0x27);
        }
        uVar7 = 0x102;
        param_1[2] = (int)**(char **)(param_1 + 0xe);
        param_1[3] = 9;
      }
      return uVar7;
    }
    if (uVar3 == 0) {
switchD_1804afe6d_caseD_0:
                    /* WARNING: Subroutine does not return */
      FUN_1804adf80(param_1,0x103,0x945);
    }
    if (uVar3 != 0x5c) goto LAB_1804afe74;
    bVar1 = **(byte **)(param_1 + 8);
    uVar3 = (uint)bVar1;
    *param_1 = (uint)bVar1;
    *(byte **)(param_1 + 8) = *(byte **)(param_1 + 8) + 1;
    if (bVar1 == 0x5c) {
      uVar3 = FUN_1804af0a0(param_1);
    }
    switch(uVar3) {
    case 0:
      goto switchD_1804afe6d_caseD_0;
    default:
      if (((&DAT_18056fcb1)[(int)uVar3] & 8) == 0) break;
      cVar8 = (char)uVar3 + -0x30;
      bVar1 = **(byte **)(param_1 + 8);
      uVar4 = (uint)bVar1;
      *param_1 = (uint)bVar1;
      *(byte **)(param_1 + 8) = *(byte **)(param_1 + 8) + 1;
      if (bVar1 == 0x5c) {
        uVar4 = FUN_1804af0a0(param_1);
        bVar1 = (byte)*param_1;
      }
      if (((&DAT_18056fcb1)[(int)uVar4] & 8) != 0) {
        cVar10 = bVar1 + (char)uVar3 * '\b';
        cVar8 = cVar10 + 'P';
        bVar1 = **(byte **)(param_1 + 8);
        uVar3 = (uint)bVar1;
        *param_1 = (uint)bVar1;
        *(byte **)(param_1 + 8) = *(byte **)(param_1 + 8) + 1;
        if (bVar1 == 0x5c) {
          uVar3 = FUN_1804af0a0(param_1);
          bVar1 = (byte)*param_1;
        }
        if (((&DAT_18056fcb1)[(int)uVar3] & 8) != 0) {
          cVar8 = bVar1 + (cVar10 + 'J') * '\b';
          bVar1 = **(byte **)(param_1 + 8);
          *param_1 = (uint)bVar1;
          *(byte **)(param_1 + 8) = *(byte **)(param_1 + 8) + 1;
          if (bVar1 == 0x5c) {
            FUN_1804af0a0(param_1);
          }
        }
      }
      if (param_1[0xc] == param_1[10]) {
        pcVar6 = (char *)FUN_1804a9db0(param_1 + 10,1);
        *pcVar6 = cVar8;
        *(char **)(param_1 + 10) = pcVar6 + 1;
      }
      else {
        pcVar6 = *(char **)(param_1 + 10);
        *pcVar6 = cVar8;
        *(char **)(param_1 + 10) = pcVar6 + 1;
      }
      goto LAB_1804b006a;
    case 0x61:
      uVar3 = 7;
      break;
    case 0x62:
      uVar3 = 8;
      break;
    case 0x65:
      uVar3 = 0x1b;
      break;
    case 0x66:
      uVar3 = 0xc;
      break;
    case 0x6e:
      uVar3 = 10;
      break;
    case 0x72:
      uVar3 = 0xd;
      break;
    case 0x74:
      uVar3 = 9;
      break;
    case 0x76:
      uVar3 = 0xb;
      break;
    case 0x78:
      iVar9 = 0;
      while( true ) {
        bVar1 = **(byte **)(param_1 + 8);
        uVar3 = (uint)bVar1;
        *param_1 = (uint)bVar1;
        *(byte **)(param_1 + 8) = *(byte **)(param_1 + 8) + 1;
        if (bVar1 == 0x5c) {
          uVar3 = FUN_1804af0a0(param_1);
        }
        if (((&DAT_18056fcb1)[(int)uVar3] & 0x10) == 0) break;
        uVar3 = *param_1;
        if (((&DAT_18056fcb1)[(int)uVar3] & 8) == 0) {
          iVar9 = iVar9 * 0x10 + (uVar3 & 0xf) + 9;
        }
        else {
          iVar9 = iVar9 * 0x10 + (uVar3 - 0x30);
        }
      }
      if (param_1[0xc] == param_1[10]) {
        puVar5 = (undefined1 *)FUN_1804a9db0(param_1 + 10,1);
        *puVar5 = (char)iVar9;
        *(undefined1 **)(param_1 + 10) = puVar5 + 1;
      }
      else {
        puVar5 = *(undefined1 **)(param_1 + 10);
        *puVar5 = (char)iVar9;
        *(undefined1 **)(param_1 + 10) = puVar5 + 1;
      }
      goto LAB_1804b006a;
    }
LAB_1804afe74:
    if (param_1[0xc] == param_1[10]) {
      puVar5 = (undefined1 *)FUN_1804a9db0(param_1 + 10,1);
    }
    else {
      puVar5 = *(undefined1 **)(param_1 + 10);
    }
    *puVar5 = (char)uVar3;
    *(undefined1 **)(param_1 + 10) = puVar5 + 1;
    bVar1 = **(byte **)(param_1 + 8);
    *param_1 = (uint)bVar1;
    *(byte **)(param_1 + 8) = *(byte **)(param_1 + 8) + 1;
    if (bVar1 == 0x5c) {
      FUN_1804af0a0(param_1);
    }
LAB_1804b006a:
    uVar3 = *param_1;
  } while( true );
}



/* ===== 1804b01c0 FUN_1804b01c0 ===== */

void FUN_1804b01c0(longlong param_1,ulonglong param_2,uint param_3)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint local_res20;
  uint local_68 [2];
  longlong local_60;
  longlong local_58;
  
  param_2 = param_2 & 0xffffffff;
  uVar13 = 0;
  uVar10 = 0;
  uVar16 = param_3 >> 0x10 & 0xf;
  local_res20 = 0;
  local_60 = param_2 * 3;
  local_58 = **(longlong **)(param_1 + 0x50);
  uVar1 = *(ushort *)(local_58 + 8 + param_2 * 0x18);
  uVar11 = *(uint *)(local_58 + param_2 * 0x18);
  if (uVar1 != 0) {
    do {
      uVar6 = (ulonglong)uVar1;
      lVar4 = **(longlong **)(param_1 + 0x50);
      uVar5 = *(uint *)(lVar4 + uVar6 * 0x18);
      uVar2 = *(uint *)(lVar4 + 4 + uVar6 * 0x18);
      if ((byte)(uVar5 >> 0x1c) == 9) {
LAB_1804b0268:
        uVar5 = FUN_1804ab410(*(longlong **)(param_1 + 0x50),uVar5 & 0xffff,local_68);
        uVar7 = uVar5 & 0x3100000 | uVar11;
        if (((0x1fffffff < local_68[0]) || (uVar13 = local_68[0] * 8, uVar13 + uVar10 < uVar10)) ||
           ((uVar5 >> 0x14 & 1) != 0)) {
          if (((local_68[0] != 0xffffffff) || ((byte)(uVar5 >> 0x1c) != 3)) ||
             ((uVar11 & 0x800000) != 0)) {
                    /* WARNING: Subroutine does not return */
            FUN_1804adef0(param_1,0xc77);
          }
          local_68[0] = 0;
          uVar13 = 0;
        }
        uVar15 = (uVar2 | param_3) & 2;
        if ((uVar15 != 0) ||
           ((uVar8 = uVar5 >> 0x10 & 0xf, (uVar2 & 1) != 0 && (uVar8 < (uVar2 >> 0x10 & 0xf))))) {
          uVar8 = uVar2 >> 0x10 & 0xf;
        }
        uVar3 = *(uint *)(lVar4 + uVar6 * 0x18);
        uVar12 = (uint)*(byte *)((ulonglong)*(byte *)(param_1 + 0x7f) + 0x78 + param_1);
        if (uVar8 <= uVar12) {
          uVar12 = uVar8;
        }
        uVar8 = uVar3 & 0x7f0000;
        if ((uVar16 < uVar12) && (uVar8 != 0)) {
          uVar16 = uVar12;
        }
        uVar9 = 8 << ((byte)uVar12 & 0x1f);
        if (uVar8 == 0x7f0000) {
          uVar10 = (uVar10 - 1) + uVar9 & -uVar9;
          *(uint *)(lVar4 + 4 + uVar6 * 0x18) = uVar10 >> 3;
          if (uVar3 >> 0x1c == 9) {
            uVar5 = uVar3 & 0xffff | uVar12 << 0x10 | 0x90000000;
LAB_1804b043f:
            *(uint *)(lVar4 + uVar6 * 0x18) = uVar5;
          }
        }
        else if (uVar3 >> 0x1c == 9) {
          uVar12 = uVar3 >> 0x10 & 0x7f;
          if (((uVar8 == 0) || ((uVar2 & 1) != 0)) ||
             ((uVar15 == 0 && (uVar13 < (uVar9 - 1 & uVar10) + uVar12)))) {
            uVar10 = (uVar10 - 1) + uVar9 & -uVar9;
          }
          if ((uVar12 != uVar13) || ((uVar10 & uVar9 - 1) != 0)) {
            if (uVar9 < uVar13) {
              if (uVar9 < uVar12) {
                uVar9 = uVar13;
              }
            }
            else {
              uVar9 = uVar13;
            }
            uVar5 = (uVar9 - 1 & uVar10) + 0xa0000000 +
                    (uVar9 << 5 | uVar12) * 0x100 + (uVar5 & 0xb800000);
            *(uint *)(lVar4 + 4 + uVar6 * 0x18) = (-uVar9 & uVar10) >> 3;
            uVar13 = uVar12;
            goto LAB_1804b043f;
          }
          iVar14 = 0x1f;
          if (local_68[0] != 0) {
            for (; local_68[0] >> iVar14 == 0; iVar14 = iVar14 + -1) {
            }
          }
          *(uint *)(lVar4 + 4 + uVar6 * 0x18) = uVar10 >> 3;
          *(uint *)(lVar4 + uVar6 * 0x18) = (iVar14 + 0x9000) * 0x10000 | uVar3 & 0xffff;
          uVar13 = uVar12;
        }
        else {
          uVar10 = (uVar10 - 1) + uVar9 & -uVar9;
          *(uint *)(lVar4 + 4 + uVar6 * 0x18) = uVar10 >> 3;
        }
        if ((uVar11 & 0x800000) == 0) {
          uVar10 = uVar10 + uVar13;
          uVar11 = uVar7;
          uVar13 = local_res20;
        }
        else {
          if (uVar13 <= local_res20) {
            uVar13 = local_res20;
          }
          uVar11 = uVar7;
          local_res20 = uVar13;
        }
      }
      else if ((uVar5 & 0xf0ff0000) == 0x80030000) {
        if (uVar2 != 0) goto LAB_1804b0268;
      }
      uVar1 = *(ushort *)(lVar4 + 8 + uVar6 * 0x18);
    } while (uVar1 != 0);
  }
  iVar14 = 8 << ((byte)uVar16 & 0x1f);
  *(uint *)(local_58 + local_60 * 8) = uVar16 * 0x10000 + uVar11;
  if ((uVar11 >> 0x17 & 1) != 0) {
    uVar10 = uVar13;
  }
  *(uint *)(local_58 + 4 + local_60 * 8) = ((uVar10 - 1) + iVar14 & -iVar14) >> 3;
  return;
}



/* ===== 1804b04f0 FUN_1804b04f0 ===== */

int FUN_1804b04f0(longlong param_1,undefined8 param_2,uint param_3)

{
  byte *pbVar1;
  longlong lVar2;
  int iVar3;
  uint *local_res8;
  
  *(undefined4 *)(param_1 + 0x70) = 0x2022;
  FUN_1804af150();
  FUN_1804abf60(param_1,param_2);
  *(undefined4 *)(param_1 + 0x70) = 0x38c0;
  if (*(int *)(param_1 + 4) == 0x7b) {
    iVar3 = FUN_1804ab9b0(*(undefined8 *)(param_1 + 0x50),&local_res8);
    *local_res8 = param_3;
    local_res8[1] = 0xffffffff;
  }
  else {
    if (*(int *)(param_1 + 4) != 0x100) {
                    /* WARNING: Subroutine does not return */
      FUN_1804adf50(param_1,0x100);
    }
    iVar3 = *(int *)(param_1 + 0xc);
    if (iVar3 == 0) {
      if ((*(byte *)(param_1 + 0x74) & 0x10) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1804adf80(param_1,0,0xccf,*(longlong *)(param_1 + 0x10) + 0x18);
      }
      iVar3 = FUN_1804ab9b0(*(undefined8 *)(param_1 + 0x50),&local_res8);
      *local_res8 = param_3;
      local_res8[1] = 0xffffffff;
      lVar2 = *(longlong *)(param_1 + 0x10);
      pbVar1 = (byte *)(lVar2 + 8);
      *pbVar1 = *pbVar1 | 0x20;
      *(longlong *)(local_res8 + 4) = lVar2;
      FUN_1804ab1b0(*(undefined8 *)(param_1 + 0x50),local_res8,iVar3);
    }
    else {
      local_res8 = *(uint **)(param_1 + 0x18);
      if (((param_3 ^ *local_res8) & 0xf0800000) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1804adf80(param_1,0,0xcef,*(longlong *)(local_res8 + 4) + 0x18);
      }
    }
    FUN_1804af150(param_1);
  }
  if (*(int *)(param_1 + 4) == 0x7b) {
    if ((local_res8[1] != 0xffffffff) || ((short)local_res8[2] != 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_1804adf80(param_1,0,0xcef,*(longlong *)(local_res8 + 4) + 0x18);
    }
    *(undefined2 *)(local_res8 + 2) = 1;
  }
  return iVar3;
}



/* ===== 1804b0670 FUN_1804b0670 ===== */

undefined8 FUN_1804b0670(longlong param_1,int param_2)

{
  undefined8 uVar1;
  char *pcVar2;
  
  if (0xff < param_2) {
    return *(undefined8 *)(&DAT_18056f340 + (longlong)param_2 * 8);
  }
  pcVar2 = "%c";
  if (((&DAT_18056fcb1)[param_2] & 1) != 0) {
    pcVar2 = "char(%d)";
  }
  uVar1 = FUN_180498630(*(undefined8 *)(param_1 + 0x48),pcVar2,param_2);
  return uVar1;
}



/* ===== 1804b06c0 FUN_1804b06c0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1804b06c0(longlong param_1,undefined8 param_2,uint *param_3)

{
  byte bVar1;
  uint uVar2;
  undefined1 auStack_9d8 [32];
  undefined1 local_9b8 [2464];
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_9d8;
  uVar2 = 0;
  *(undefined4 *)(*(longlong *)(param_1 + 0x50) + 0x54) = 0xffffffff;
  *(undefined1 *)(param_3 + 0x1e) = 0xff;
  *(undefined8 *)(param_3 + 0x10) = *(undefined8 *)(param_3 + 0x12);
  param_3[0x1a] = 1;
  param_3[0x1b] = 0;
  *(undefined1 *)((longlong)param_3 + 0x7f) = 0;
  param_3[0xe] = 0;
  param_3[0xf] = 0;
  param_3[0xc] = 0;
  param_3[0xd] = 0;
  param_3[10] = 0;
  param_3[0xb] = 0;
  bVar1 = **(byte **)(param_3 + 8);
  *param_3 = (uint)bVar1;
  *(byte **)(param_3 + 8) = *(byte **)(param_3 + 8) + 1;
  if (bVar1 == 0x5c) {
    uVar2 = 0;
    FUN_1804af0a0(param_3);
  }
  param_3[1] = uVar2;
  param_3[0x1c] = 0x38c0;
  FUN_1804af150(param_3);
  if ((param_3[0x1d] & 1) == 0) {
    FUN_1804ad490(param_3,local_9b8,0);
    FUN_1804adb60(param_3,local_9b8);
    uVar2 = FUN_1804acaa0(param_3,local_9b8);
    param_3[3] = uVar2;
    if (param_3[1] != 0x103) {
                    /* WARNING: Subroutine does not return */
      FUN_1804adf50(param_3,0x103);
    }
  }
  else {
    FUN_1804ad030();
  }
  if ((*(longlong *)(param_3 + 0x16) != 0) &&
     (*(longlong *)(param_3 + 0x16) != *(longlong *)(*(longlong *)(param_3 + 0x12) + 0x28))) {
                    /* WARNING: Subroutine does not return */
    FUN_1804adef0(param_3,0xd08);
  }
  return 0;
}



/* ===== 1804b07e0 FUN_1804b07e0 ===== */

int FUN_1804b07e0(longlong param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  int iVar14;
  undefined8 *puVar15;
  longlong lVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  ulonglong uVar20;
  undefined8 local_1d8;
  undefined4 uStack_1d0;
  undefined8 local_108 [32];
  
  lVar16 = 3;
  puVar17 = &local_1d8;
  puVar19 = *(undefined8 **)(param_1 + 0x50);
  do {
    puVar18 = puVar19;
    puVar15 = puVar17;
    uVar1 = puVar18[1];
    uVar10 = puVar18[2];
    uVar11 = puVar18[3];
    *puVar15 = *puVar18;
    puVar15[1] = uVar1;
    uVar1 = puVar18[4];
    uVar12 = puVar18[5];
    puVar15[2] = uVar10;
    puVar15[3] = uVar11;
    uVar10 = puVar18[6];
    uVar11 = puVar18[7];
    puVar15[4] = uVar1;
    puVar15[5] = uVar12;
    uVar1 = puVar18[8];
    uVar12 = puVar18[9];
    puVar15[6] = uVar10;
    puVar15[7] = uVar11;
    uVar10 = puVar18[10];
    uVar11 = puVar18[0xb];
    puVar15[8] = uVar1;
    puVar15[9] = uVar12;
    uVar1 = puVar18[0xc];
    uVar12 = puVar18[0xd];
    puVar15[10] = uVar10;
    puVar15[0xb] = uVar11;
    uVar10 = puVar18[0xe];
    uVar11 = puVar18[0xf];
    puVar15[0xc] = uVar1;
    puVar15[0xd] = uVar12;
    puVar15[0xe] = uVar10;
    puVar15[0xf] = uVar11;
    lVar16 = lVar16 + -1;
    puVar17 = puVar15 + 0x10;
    puVar19 = puVar18 + 0x10;
  } while (lVar16 != 0);
  uVar10 = puVar18[0x11];
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  uVar11 = puVar18[0x12];
  uVar12 = puVar18[0x13];
  puVar15[0x10] = puVar18[0x10];
  puVar15[0x11] = uVar10;
  uVar10 = puVar18[0x14];
  uVar13 = puVar18[0x15];
  puVar15[0x12] = uVar11;
  puVar15[0x13] = uVar12;
  uVar2 = *(undefined4 *)(puVar18 + 0x16);
  uVar3 = *(undefined4 *)((longlong)puVar18 + 0xb4);
  uVar4 = *(undefined4 *)(puVar18 + 0x17);
  uVar5 = *(undefined4 *)((longlong)puVar18 + 0xbc);
  puVar15[0x14] = uVar10;
  puVar15[0x15] = uVar13;
  uVar6 = *(undefined4 *)(puVar18 + 0x18);
  uVar7 = *(undefined4 *)((longlong)puVar18 + 0xc4);
  uVar8 = *(undefined4 *)(puVar18 + 0x19);
  uVar9 = *(undefined4 *)((longlong)puVar18 + 0xcc);
  *(undefined4 *)(puVar15 + 0x16) = uVar2;
  *(undefined4 *)((longlong)puVar15 + 0xb4) = uVar3;
  *(undefined4 *)(puVar15 + 0x17) = uVar4;
  *(undefined4 *)((longlong)puVar15 + 0xbc) = uVar5;
  *(undefined4 *)(puVar15 + 0x18) = uVar6;
  *(undefined4 *)((longlong)puVar15 + 0xc4) = uVar7;
  *(undefined4 *)(puVar15 + 0x19) = uVar8;
  *(undefined4 *)((longlong)puVar15 + 0xcc) = uVar9;
  iVar14 = FUN_180003349(uVar1,0,param_1,FUN_1804b06c0);
  if (iVar14 != 0) {
    lVar16 = 2;
    *(undefined4 *)(*(longlong *)(param_1 + 0x50) + 8) = uStack_1d0;
    puVar17 = (undefined8 *)(*(longlong *)(param_1 + 0x50) + 0xd0);
    puVar19 = local_108;
    do {
      uVar1 = puVar19[1];
      uVar10 = puVar19[2];
      uVar11 = puVar19[3];
      *puVar17 = *puVar19;
      puVar17[1] = uVar1;
      uVar1 = puVar19[4];
      uVar12 = puVar19[5];
      puVar17[2] = uVar10;
      puVar17[3] = uVar11;
      uVar10 = puVar19[6];
      uVar11 = puVar19[7];
      puVar17[4] = uVar1;
      puVar17[5] = uVar12;
      uVar1 = puVar19[8];
      uVar12 = puVar19[9];
      puVar17[6] = uVar10;
      puVar17[7] = uVar11;
      uVar10 = puVar19[10];
      uVar11 = puVar19[0xb];
      puVar17[8] = uVar1;
      puVar17[9] = uVar12;
      uVar2 = *(undefined4 *)(puVar19 + 0xc);
      uVar3 = *(undefined4 *)((longlong)puVar19 + 100);
      uVar4 = *(undefined4 *)(puVar19 + 0xd);
      uVar5 = *(undefined4 *)((longlong)puVar19 + 0x6c);
      puVar17[10] = uVar10;
      puVar17[0xb] = uVar11;
      uVar1 = puVar19[0xe];
      uVar10 = puVar19[0xf];
      *(undefined4 *)(puVar17 + 0xc) = uVar2;
      *(undefined4 *)((longlong)puVar17 + 100) = uVar3;
      *(undefined4 *)(puVar17 + 0xd) = uVar4;
      *(undefined4 *)((longlong)puVar17 + 0x6c) = uVar5;
      puVar17[0xe] = uVar1;
      puVar17[0xf] = uVar10;
      lVar16 = lVar16 + -1;
      puVar17 = puVar17 + 0x10;
      puVar19 = puVar19 + 0x10;
    } while (lVar16 != 0);
  }
  uVar20 = (ulonglong)(uint)(*(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x38));
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  puVar17 = *(undefined8 **)(*(longlong *)(param_1 + 0x48) + 0x10);
  puVar17[2] = puVar17[2] - uVar20;
  (*(code *)*puVar17)(puVar17[1],uVar1,uVar20,0);
  return iVar14;
}



/* ===== 1804b0950 FUN_1804b0950 ===== */

int FUN_1804b0950(longlong param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  cVar1 = *param_2;
  if (cVar1 != '\0') {
    uVar2 = *(uint *)(param_1 + 0x14);
    iVar5 = 0;
    do {
      uVar4 = (uint)cVar1;
      if (uVar2 == uVar4) {
        iVar3 = memcmp(param_2 + 1,(void *)(param_1 + 0x18),(ulonglong)uVar4);
        if (iVar3 == 0) {
          return iVar5;
        }
      }
      iVar5 = iVar5 + 1;
      param_2 = param_2 + (ulonglong)uVar4 + 1;
      cVar1 = *param_2;
    } while (cVar1 != '\0');
  }
  return -1;
}



/* ===== 1804b0ab0 FUN_1804b0ab0 ===== */

undefined8 FUN_1804b0ab0(longlong *param_1,uint *param_2,double *param_3,undefined8 *param_4)

{
  uint uVar1;
  longlong lVar2;
  byte bVar3;
  ushort *puVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  uint uVar7;
  
  uVar7 = *param_2;
  if (uVar7 >> 0x1c != 0xb) {
    if (uVar7 >> 0x1c == 10) {
      uVar5 = FUN_1804b29a0();
      return uVar5;
    }
    lVar2 = *param_1;
    uVar1 = *(uint *)(lVar2 + (ulonglong)(uVar7 & 0xffff) * 0x18);
    if ((uVar1 & 0xf0800000) == 0x20800000) {
      param_4 = (undefined8 *)*param_4;
      uVar7 = uVar1;
    }
    uVar6 = (ulonglong)(uVar7 & 0xffff);
    bVar3 = (byte)((uint)*(undefined4 *)(lVar2 + (ulonglong)(uVar7 & 0xffff) * 0x18) >> 0x18);
    while (puVar4 = (ushort *)(lVar2 + uVar6 * 0x18), bVar3 >> 4 == 8) {
      uVar6 = (ulonglong)*puVar4;
      bVar3 = (byte)((uint)*(undefined4 *)(lVar2 + uVar6 * 0x18) >> 0x18);
    }
    uVar5 = FUN_1804b2aa0(param_1,puVar4,uVar7 & 0xffff,param_3,param_4);
    return uVar5;
  }
  if (((*(uint *)(*param_1 + (ulonglong)(uVar7 & 0xffff) * 0x18) & 0x800000) == 0) ||
     (uVar7 = param_2[1], -1 < (int)uVar7)) {
    *param_3 = (double)(int)param_2[1];
    return 0;
  }
  *param_3 = (double)uVar7;
  return 0;
}



/* ===== 1804b0bd0 FUN_1804b0bd0 ===== */

uint * FUN_1804b0bd0(longlong *param_1,longlong param_2,double *param_3,longlong *param_4,
                    uint *param_5)

{
  double dVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  ulonglong uVar6;
  byte bVar8;
  longlong lVar7;
  uint *puVar9;
  uint *puVar10;
  ulonglong uVar11;
  uint local_res8 [2];
  undefined1 local_res10 [8];
  ulonglong local_res18;
  
  uVar11 = (ulonglong)*(ushort *)(param_2 + 10);
  puVar10 = (uint *)(param_2 + 0x10);
  lVar7 = *param_1;
  uVar2 = *(uint *)(lVar7 + uVar11 * 0x18);
  if ((uVar2 & 0xf0800000) == 0x20800000) {
    puVar10 = *(uint **)puVar10;
    uVar11 = (ulonglong)(uVar2 & 0xffff);
  }
  puVar9 = (uint *)(lVar7 + uVar11 * 0x18);
  do {
    bVar8 = (byte)(*puVar9 >> 0x18);
    while (bVar8 >> 4 == 8) {
      if (*(char *)((longlong)puVar9 + 2) == '\x01') {
        *param_5 = *param_5 | puVar9[1];
      }
      uVar2 = *puVar9;
      lVar7 = *param_1;
      puVar9 = (uint *)(lVar7 + (ulonglong)(ushort)uVar2 * 0x18);
      bVar8 = (byte)((uint)*(undefined4 *)(lVar7 + (ulonglong)(ushort)uVar2 * 0x18) >> 0x18);
    }
    dVar1 = *param_3;
    uVar2 = (uint)((longlong)dVar1 >> 0x2f);
    if (uVar2 < 0xfffffff2) {
      local_res18 = (ulonglong)*param_3;
LAB_1804b0d20:
      if ((byte)(*puVar9 >> 0x1d) == 1) {
        iVar3 = FUN_1804abd40(param_1,*puVar9 & 0xffff);
        lVar7 = (longlong)iVar3;
        if (iVar3 == -1) {
                    /* WARNING: Subroutine does not return */
          FUN_180484220(param_1[2],0xc77);
        }
        uVar2 = *puVar9;
        if ((byte)(uVar2 >> 0x1c) == 2) {
          if (puVar9[1] == 4) {
            *param_4 = lVar7 * local_res18 + (ulonglong)*puVar10;
            return puVar9;
          }
          *param_4 = lVar7 * local_res18 + *(longlong *)puVar10;
          return puVar9;
        }
        if ((uVar2 & 0xc000000) != 0) {
          if ((uVar2 >> 0x1a & 1) != 0) {
            local_res18 = local_res18 & 1;
          }
          *param_5 = *param_5 | 0x2000000;
        }
        *param_4 = (longlong)(lVar7 * local_res18 + (longlong)puVar10);
        return puVar9;
      }
    }
    else if (uVar2 == 0xfffffff5) {
      uVar11 = (ulonglong)*(ushort *)(((ulonglong)dVar1 & 0x7fffffffffff) + 10);
      uVar2 = *(uint *)(lVar7 + uVar11 * 0x18);
      bVar8 = (byte)(uVar2 >> 0x18);
      while (bVar8 >> 4 == 8) {
        uVar11 = (ulonglong)*(ushort *)(lVar7 + uVar11 * 0x18);
        uVar2 = *(uint *)(lVar7 + uVar11 * 0x18);
        bVar8 = (byte)(uVar2 >> 0x18);
      }
      if ((byte)(uVar2 >> 0x1c) == 5) {
        uVar11 = (ulonglong)(uVar2 & 0xffff);
      }
      if ((*(uint *)(lVar7 + uVar11 * 0x18) & 0xfc000000) == 0) {
        FUN_1804b1b10(param_1,lVar7 + 0x108,lVar7 + uVar11 * 0x18,&local_res18,
                      ((ulonglong)dVar1 & 0x7fffffffffff) + 0x10,0);
        goto LAB_1804b0d20;
      }
    }
    else if (uVar2 == 0xfffffffb) {
      uVar11 = (ulonglong)dVar1 & 0x7fffffffffff;
      if ((byte)(*puVar9 >> 0x1c) == 1) {
        puVar5 = (uint *)FUN_1804ab270(param_1,puVar9,uVar11,local_res8,param_5);
        if (puVar5 != (uint *)0x0) {
          *param_4 = (ulonglong)local_res8[0] + (longlong)puVar10;
          return puVar5;
        }
      }
      else if ((*puVar9 & 0xf4000000) == 0x34000000) {
        if (*(int *)(uVar11 + 0x14) == 2) {
          *param_5 = *param_5 | 0x2000000;
          if (*(char *)(uVar11 + 0x18) == 'r') {
            if (*(char *)(uVar11 + 0x19) == 'e') {
              *param_4 = (longlong)puVar10;
              return puVar9;
            }
          }
          else if ((*(char *)(uVar11 + 0x18) == 'i') && (*(char *)(uVar11 + 0x19) == 'm')) {
            *param_4 = (ulonglong)(puVar9[1] >> 1) + (longlong)puVar10;
            return puVar9;
          }
        }
      }
      else if (*(short *)(param_2 + 10) == 0x18) {
        uVar6 = (ulonglong)*puVar10;
        bVar8 = (byte)((uint)*(undefined4 *)(lVar7 + uVar6 * 0x18) >> 0x18);
        while (bVar8 >> 4 == 8) {
          uVar6 = (ulonglong)*(ushort *)(lVar7 + uVar6 * 0x18);
          bVar8 = (byte)((uint)*(undefined4 *)(lVar7 + uVar6 * 0x18) >> 0x18);
        }
        if (bVar8 >> 4 == 2) {
          do {
            uVar6 = (ulonglong)*(ushort *)(lVar7 + uVar6 * 0x18);
            bVar8 = (byte)((uint)*(undefined4 *)(lVar7 + uVar6 * 0x18) >> 0x18);
          } while (bVar8 >> 4 == 8);
        }
        puVar9 = (uint *)(lVar7 + uVar6 * 0x18);
        if (((bVar8 >> 4 == 1) &&
            (puVar5 = (uint *)FUN_1804ab270(param_1,puVar9,uVar11,local_res10,0),
            puVar5 != (uint *)0x0)) && ((byte)(*puVar5 >> 0x1c) == 0xb)) {
          return puVar5;
        }
      }
    }
    uVar2 = *puVar9;
    if ((byte)(uVar2 >> 0x1c) != 2) {
LAB_1804b0f7d:
      *param_5 = *param_5 | 1;
      return puVar9;
    }
    lVar7 = *param_1;
    puVar5 = puVar9;
    do {
      uVar4 = *puVar5;
      puVar5 = (uint *)(lVar7 + (ulonglong)(ushort)uVar4 * 0x18);
      uVar4 = *(uint *)(lVar7 + (ulonglong)(ushort)uVar4 * 0x18) >> 0x1c;
    } while (uVar4 == 8);
    if (uVar4 != 1) goto LAB_1804b0f7d;
    if (puVar9[1] == 4) {
      puVar10 = (uint *)(ulonglong)*puVar10;
      puVar9 = (uint *)(lVar7 + (ulonglong)(uVar2 & 0xffff) * 0x18);
    }
    else {
      puVar10 = *(uint **)puVar10;
      puVar9 = (uint *)(lVar7 + (ulonglong)(uVar2 & 0xffff) * 0x18);
    }
  } while( true );
}



/* ===== 1804b0fb0 FUN_1804b0fb0 ===== */

void FUN_1804b0fb0(longlong param_1,undefined8 param_2,int param_3)

{
  undefined2 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_1804ab7b0(param_1,param_3 + 0x22830000,8);
  lVar2 = FUN_1804916f0(*(undefined8 *)(param_1 + 0x10),0x18);
  *(undefined2 *)(lVar2 + 10) = uVar1;
  *(undefined8 *)(lVar2 + 0x10) = param_2;
  *(undefined1 *)(lVar2 + 9) = 10;
  return;
}



/* ===== 1804b1010 FUN_1804b1010 ===== */

undefined8 * FUN_1804b1010(longlong param_1,undefined2 param_2,int param_3,uint param_4)

{
  undefined8 *puVar1;
  byte bVar2;
  longlong lVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  
  iVar5 = 1 << ((byte)param_4 & 0x1f);
  iVar6 = param_3 + -8 + iVar5;
  if (param_4 < 4) {
    iVar6 = param_3;
  }
  lVar3 = FUN_180491760(param_1,0,0,iVar6 + 0x18);
  uVar7 = (ulonglong)(iVar5 - 1U) + 0x18 + lVar3 & ~(ulonglong)(iVar5 - 1U);
  puVar1 = (undefined8 *)(uVar7 - 0x10);
  *(short *)(uVar7 - 0x18) = (short)puVar1 - (short)lVar3;
  *(int *)(uVar7 - 0x14) = param_3;
  sVar4 = (short)iVar5 + -8;
  if (param_4 < 4) {
    sVar4 = 0;
  }
  *(short *)(uVar7 - 0x16) = sVar4 + 0x18;
  lVar3 = *(longlong *)(param_1 + 0x10);
  *puVar1 = *(undefined8 *)(lVar3 + 0x28);
  bVar2 = *(byte *)(lVar3 + 0x20);
  *(undefined8 **)(lVar3 + 0x28) = puVar1;
  *(undefined1 *)(uVar7 - 7) = 10;
  *(byte *)(uVar7 - 8) = bVar2 & 3 | 0x80;
  *(undefined2 *)(uVar7 - 6) = param_2;
  return puVar1;
}



/* ===== 1804b10c0 FUN_1804b10c0 ===== */

undefined8 * FUN_1804b10c0(longlong param_1,undefined2 param_2,uint param_3,uint param_4)

{
  byte bVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  short sVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  
  uVar7 = param_4 & 0xf0000;
  if (((param_4 >> 0x14 & 1) == 0) && (uVar7 < 0x30001)) {
    puVar3 = (undefined8 *)FUN_1804916f0(*(undefined8 *)(param_1 + 0x10),(ulonglong)param_3 + 0x10);
    *(undefined1 *)((longlong)puVar3 + 9) = 10;
    *(undefined2 *)((longlong)puVar3 + 10) = param_2;
    return puVar3;
  }
  lVar2 = *(longlong *)(param_1 + 0x10);
  iVar6 = 1 << ((byte)(param_4 >> 0x10) & 0xf);
  uVar8 = (param_3 - 8) + iVar6;
  if (uVar7 < 0x30001) {
    uVar8 = param_3;
  }
  lVar4 = FUN_180491760(lVar2,0,0,uVar8 + 0x18);
  uVar9 = (ulonglong)(iVar6 - 1U) + 0x18 + lVar4 & ~(ulonglong)(iVar6 - 1U);
  puVar3 = (undefined8 *)(uVar9 - 0x10);
  *(short *)(uVar9 - 0x18) = (short)puVar3 - (short)lVar4;
  sVar5 = (short)iVar6 + -8;
  if (uVar7 < 0x30001) {
    sVar5 = 0;
  }
  *(uint *)(uVar9 - 0x14) = param_3;
  *(short *)(uVar9 - 0x16) = sVar5 + 0x18;
  lVar2 = *(longlong *)(lVar2 + 0x10);
  *puVar3 = *(undefined8 *)(lVar2 + 0x28);
  bVar1 = *(byte *)(lVar2 + 0x20);
  *(undefined8 **)(lVar2 + 0x28) = puVar3;
  *(undefined1 *)(uVar9 - 7) = 10;
  *(byte *)(uVar9 - 8) = bVar1 & 3 | 0x80;
  *(undefined2 *)(uVar9 - 6) = param_2;
  return puVar3;
}



/* ===== 1804b11e0 FUN_1804b11e0 ===== */

void FUN_1804b11e0(longlong *param_1,uint *param_2,undefined8 *param_3,undefined8 param_4,
                  uint param_5)

{
  uint uVar1;
  longlong lVar2;
  byte bVar3;
  uint *puVar4;
  ulonglong uVar5;
  
  uVar1 = *param_2;
  if (uVar1 >> 0x1c != 0xb) {
    if (uVar1 >> 0x1c == 10) {
      if (((uVar1 | param_5) >> 0x19 & 1) == 0) {
        FUN_1804b18b0();
        return;
      }
    }
    else {
      lVar2 = *param_1;
      uVar5 = (ulonglong)(uVar1 & 0xffff);
      uVar1 = *(uint *)(lVar2 + uVar5 * 0x18);
      if ((uVar1 & 0xf0800000) == 0x20800000) {
        param_3 = (undefined8 *)*param_3;
        uVar5 = (ulonglong)(uVar1 & 0xffff);
      }
      bVar3 = (byte)((uint)*(undefined4 *)(lVar2 + uVar5 * 0x18) >> 0x18);
      while (puVar4 = (uint *)(lVar2 + uVar5 * 0x18), bVar3 >> 4 == 8) {
        if (*(char *)((longlong)puVar4 + 2) == '\x01') {
          param_5 = param_5 | puVar4[1];
        }
        uVar5 = (ulonglong)(ushort)*puVar4;
        bVar3 = (byte)((uint)*(undefined4 *)(lVar2 + uVar5 * 0x18) >> 0x18);
      }
      if (((param_5 | *puVar4) >> 0x19 & 1) == 0) {
        FUN_1804b23e0(param_1,puVar4,param_3,param_4);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_180484220(param_1[2],0xeaa);
}



/* ===== 1804b12d0 FUN_1804b12d0 ===== */

void FUN_1804b12d0(longlong param_1,ulonglong param_2,ulonglong param_3,uint param_4)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong *puVar3;
  ulonglong local_res8;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  lVar2 = *(longlong *)(lVar1 + 0x2e0);
  if (*(longlong *)(lVar2 + 0x20) != 0) {
    local_res8 = param_2 | 0xfffa800000000000;
    if ((*(byte *)(lVar2 + 8) & 4) != 0) {
      *(byte *)(lVar2 + 8) = *(byte *)(lVar2 + 8) & 0xfb;
      *(undefined8 *)(lVar2 + 0x18) = *(undefined8 *)(lVar1 + 0x40);
      *(longlong *)(lVar1 + 0x40) = lVar2;
    }
    puVar3 = (ulonglong *)FUN_1804931f0(param_1,lVar2,&local_res8);
    if (param_4 == 0xffffffff) {
      *puVar3 = 0xffffffffffffffff;
      *(byte *)(param_2 + 8) = *(byte *)(param_2 + 8) & 0xef;
      return;
    }
    *puVar3 = (ulonglong)param_4 << 0x2f | param_3;
    *(byte *)(param_2 + 8) = *(byte *)(param_2 + 8) | 0x10;
  }
  return;
}



/* ===== 1804b1380 FUN_1804b1380 ===== */

void FUN_1804b1380(longlong *param_1,longlong param_2,uint *param_3,uint param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined *puVar3;
  
  lVar1 = FUN_1804aba80(param_1[2],(param_2 - *param_1) / 0x18,0);
  if ((param_4 & 2) == 0) {
    lVar2 = FUN_1804aba80(param_1[2],((longlong)param_3 - *param_1) / 0x18,0);
    puVar3 = (undefined *)(lVar2 + 0x18);
  }
  else if (*param_3 < 0x10000000) {
    puVar3 = PTR_s_number_18056e900;
  }
  else {
    puVar3 = (&PTR_DAT_18056e8e8)[(ulonglong)((byte)(*param_3 >> 0x1c) == 3) * 4];
  }
  if (param_4 < 0x100) {
                    /* WARNING: Subroutine does not return */
    FUN_1804842f0(param_1[2],0xd47,puVar3,lVar1 + 0x18);
  }
                    /* WARNING: Subroutine does not return */
  FUN_1804841e0(param_1[2],param_4 >> 8,0xd47,puVar3,lVar1 + 0x18);
}



/* ===== 1804b1470 FUN_1804b1470 ===== */

void FUN_1804b1470(longlong *param_1,longlong param_2,undefined8 *param_3,uint param_4)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = FUN_1804aba80(param_1[2],(param_2 - *param_1) / 0x18,0);
  uVar1 = (uint)((longlong)*param_3 >> 0x2f);
  if (uVar1 < 0xfffffff3) {
    uVar3 = 0xd;
  }
  else {
    uVar3 = (ulonglong)~uVar1;
  }
  if (param_4 < 0x100) {
                    /* WARNING: Subroutine does not return */
    FUN_1804842f0(param_1[2],0xd47);
  }
                    /* WARNING: Subroutine does not return */
  FUN_1804841e0(param_1[2],param_4 >> 8,0xd47,(&PTR_DAT_18056e940)[uVar3],lVar2 + 0x18);
}



/* ===== 1804b1510 FUN_1804b1510 ===== */

void FUN_1804b1510(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_1804aba80(param_1[2],(param_2 - *param_1) / 0x18,0);
                    /* WARNING: Subroutine does not return */
  FUN_1804842f0(param_1[2],0xd28,lVar1 + 0x18);
}



/* ===== 1804b1560 FUN_1804b1560 ===== */

void FUN_1804b1560(longlong *param_1,uint *param_2,longlong param_3,longlong param_4,uint param_5,
                  uint *param_6)

{
  ushort *puVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ushort *puVar7;
  
  uVar2 = (ushort)param_2[2];
joined_r0x0001804b157e:
  do {
    if (uVar2 == 0) {
      return;
    }
    uVar6 = (ulonglong)uVar2;
    lVar5 = *param_1;
    uVar2 = *(ushort *)(lVar5 + 8 + uVar6 * 0x18);
    puVar1 = (ushort *)(lVar5 + uVar6 * 0x18);
    uVar4 = *(uint *)(lVar5 + uVar6 * 0x18);
    if ((uVar4 >> 0x1c) - 9 < 2) {
      if (*(longlong *)(puVar1 + 8) == 0) goto joined_r0x0001804b157e;
      uVar4 = *param_6;
      if (param_5 <= uVar4) {
        return;
      }
      *param_6 = uVar4 + 1;
      if ((byte)((uint)*(undefined4 *)puVar1 >> 0x1c) == 9) {
        puVar7 = puVar1;
        do {
          uVar3 = *puVar7;
          puVar7 = (ushort *)(*param_1 + (ulonglong)uVar3 * 0x18);
        } while ((byte)((uint)*(undefined4 *)(*param_1 + (ulonglong)uVar3 * 0x18) >> 0x1c) == 8);
        FUN_1804b23e0(param_1,puVar7,(ulonglong)*(uint *)(puVar1 + 2) + param_3,
                      param_4 + (ulonglong)uVar4 * 8,0);
      }
      else {
        FUN_1804b18b0(param_1,puVar1,(ulonglong)*(uint *)(puVar1 + 2) + param_3,
                      param_4 + (ulonglong)uVar4 * 8);
      }
    }
    else {
      if ((uVar4 & 0xf0ff0000) != 0x80030000) goto joined_r0x0001804b157e;
      puVar7 = puVar1;
      do {
        uVar3 = *puVar7;
        puVar7 = (ushort *)(lVar5 + (ulonglong)uVar3 * 0x18);
      } while ((byte)((uint)*(undefined4 *)(lVar5 + (ulonglong)uVar3 * 0x18) >> 0x1c) == 8);
      FUN_1804b1560(param_1,puVar7,(ulonglong)*(uint *)(puVar1 + 2) + param_3,param_4,param_5,
                    param_6);
    }
    if ((*param_2 & 0x800000) != 0) {
      return;
    }
  } while( true );
}



/* ===== 1804b16d0 FUN_1804b16d0 ===== */

void FUN_1804b16d0(longlong *param_1,uint *param_2,longlong param_3,longlong param_4,uint *param_5,
                  undefined4 param_6)

{
  ushort *puVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong *plVar7;
  ushort *puVar8;
  uint uVar9;
  
  uVar2 = (ushort)param_2[2];
  do {
    do {
      while( true ) {
        if (uVar2 == 0) {
          return;
        }
        uVar6 = (ulonglong)uVar2;
        lVar5 = *param_1;
        uVar2 = *(ushort *)(lVar5 + 8 + uVar6 * 0x18);
        puVar1 = (ushort *)(lVar5 + uVar6 * 0x18);
        uVar4 = *(uint *)(lVar5 + uVar6 * 0x18);
        if ((uVar4 >> 0x1c) - 9 < 2) break;
        if ((uVar4 & 0xf0ff0000) == 0x80030000) {
          puVar8 = puVar1;
          do {
            uVar3 = *puVar8;
            puVar8 = (ushort *)(lVar5 + (ulonglong)uVar3 * 0x18);
          } while ((byte)((uint)*(undefined4 *)(lVar5 + (ulonglong)uVar3 * 0x18) >> 0x1c) == 8);
          FUN_1804b16d0(param_1,puVar8,(ulonglong)*(uint *)(puVar1 + 2) + param_3,param_4,param_5,
                        param_6);
        }
      }
    } while (*(longlong *)(puVar1 + 8) == 0);
    uVar4 = *param_5;
    uVar9 = uVar4;
    if (-1 < (int)uVar4) {
      while( true ) {
        if (uVar9 < *(uint *)(param_4 + 0x30)) {
          plVar7 = (longlong *)(*(longlong *)(param_4 + 0x10) + (ulonglong)uVar9 * 8);
        }
        else {
          plVar7 = (longlong *)FUN_1804927e0(param_4,uVar9);
        }
        if ((plVar7 != (longlong *)0x0) && (*plVar7 != -1)) {
          *param_5 = uVar9 + 1;
          goto LAB_1804b1815;
        }
        if (uVar9 != 0) break;
        uVar9 = 1;
      }
      if (uVar4 != 0) {
        return;
      }
      *param_5 = 0xffffffff;
    }
    plVar7 = (longlong *)FUN_180492860(param_4,*(undefined8 *)(puVar1 + 8));
    if ((plVar7 != (longlong *)0x0) && (*plVar7 != -1)) {
LAB_1804b1815:
      if ((byte)((uint)*(undefined4 *)puVar1 >> 0x1c) == 9) {
        puVar8 = puVar1;
        do {
          uVar3 = *puVar8;
          puVar8 = (ushort *)(*param_1 + (ulonglong)uVar3 * 0x18);
        } while ((byte)((uint)*(undefined4 *)(*param_1 + (ulonglong)uVar3 * 0x18) >> 0x1c) == 8);
        FUN_1804b23e0(param_1,puVar8,(ulonglong)*(uint *)(puVar1 + 2) + param_3,plVar7,param_6);
      }
      else {
        FUN_1804b18b0(param_1,puVar1,(ulonglong)*(uint *)(puVar1 + 2) + param_3,plVar7);
      }
      if ((*param_2 & 0x800000) != 0) {
        return;
      }
    }
  } while( true );
}



/* ===== 1804b18b0 FUN_1804b18b0 ===== */

void FUN_1804b18b0(longlong *param_1,uint *param_2,uint *param_3,undefined8 param_4)

{
  uint uVar1;
  byte bVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  byte local_res10 [8];
  uint local_18 [4];
  
  uVar1 = *param_2;
  if ((uVar1 >> 0x1b & 1) == 0) {
    lVar3 = 0xd8;
    if ((uVar1 >> 0x17 & 1) != 0) {
      lVar3 = 0xf0;
    }
    FUN_1804b23e0(param_1,lVar3 + *param_1,local_18,param_4,0);
  }
  else {
    FUN_1804b23e0(param_1,*param_1 + 0x48,local_res10,param_4,0);
    local_18[0] = (uint)local_res10[0];
  }
  uVar5 = uVar1 >> 8 & 0x7f;
  uVar4 = uVar1 >> 0x10 & 0x7f;
  if (uVar4 * 8 < uVar5 + (uVar1 & 0x7f)) {
                    /* WARNING: Subroutine does not return */
    FUN_180484220(param_1[2],0xf14);
  }
  bVar2 = (byte)(uVar1 & 0x7f);
  uVar1 = (1 << ((byte)uVar5 & 0x1f)) + -1 << (bVar2 & 0x1f);
  uVar5 = local_18[0] << (bVar2 & 0x1f) & uVar1;
  if (uVar4 == 1) {
    *(byte *)param_3 = ~(byte)uVar1 & (byte)*param_3 | (byte)uVar5;
  }
  else {
    if (uVar4 == 2) {
      *(ushort *)param_3 = ~(ushort)uVar1 & (ushort)*param_3 | (ushort)uVar5;
      return;
    }
    if (uVar4 == 4) {
      *param_3 = ~uVar1 & *param_3 | uVar5;
      return;
    }
  }
  return;
}



/* ===== 1804b19c0 FUN_1804b19c0 ===== */

undefined8 FUN_1804b19c0(longlong *param_1,uint *param_2,uint *param_3,uint param_4)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar6 = param_4;
joined_r0x0001804b19d6:
  uVar3 = param_4;
  if ((uVar6 & 1) != 0) {
    return 1;
  }
  if (param_2 == param_3) {
    return 1;
  }
  lVar2 = *param_1;
  uVar8 = 0;
  uVar4 = (ulonglong)(ushort)*param_2;
  uVar6 = 0;
LAB_1804b19f5:
  do {
    uVar1 = *(uint *)(lVar2 + uVar4 * 0x18);
    param_2 = (uint *)(lVar2 + uVar4 * 0x18);
    uVar7 = uVar1 >> 0x1c;
    if (uVar7 == 8) {
      if ((char)(uVar1 >> 0x10) == '\x01') {
        uVar8 = uVar8 | param_2[1];
        uVar4 = (ulonglong)(uVar1 & 0xffff);
        goto LAB_1804b19f5;
      }
    }
    else if (uVar7 != 5) break;
    uVar4 = (ulonglong)(uVar1 & 0xffff);
  } while( true );
  uVar5 = *param_3;
  uVar8 = uVar8 | uVar1 & 0x3000000;
  if ((byte)(uVar5 >> 0x1c) != 1) {
    do {
      while( true ) {
        param_3 = (uint *)(lVar2 + (ulonglong)(uVar5 & 0xffff) * 0x18);
        uVar5 = *(uint *)(lVar2 + (ulonglong)(uVar5 & 0xffff) * 0x18);
        if (uVar5 >> 0x1c != 8) break;
        if ((char)(uVar5 >> 0x10) == '\x01') {
          uVar6 = uVar6 | param_3[1];
        }
      }
    } while (uVar5 >> 0x1c == 5);
    uVar6 = uVar6 | uVar5 & 0x3000000;
  }
  if ((uVar3 & 4) == 0) {
    if ((uVar3 & 8) == 0) {
      if ((uVar6 & uVar8) != uVar6) {
        return 0;
      }
      if (uVar7 == 4) {
        return 1;
      }
      if ((byte)(*param_3 >> 0x1c) == 4) {
        return 1;
      }
    }
  }
  else if (uVar8 != uVar6) {
    return 0;
  }
  if ((uVar7 != *param_3 >> 0x1c) || (param_2[1] != param_3[1])) {
    return 0;
  }
  if (uVar1 < 0x10000000) {
    if (((uVar1 ^ *param_3) & 0xc000000) == 0) {
      return 1;
    }
    return 0;
  }
  if ((byte)(uVar1 >> 0x1d) != 1) {
    if (uVar7 != 1) {
      return 1;
    }
    if (param_2 == param_3) {
      return 1;
    }
    return 0;
  }
  param_4 = uVar3 | 4;
  uVar6 = uVar3;
  goto joined_r0x0001804b19d6;
}



/* ===== 1804b1b10 FUN_1804b1b10 ===== */

/* WARNING: Type propagation algorithm not settling */

void FUN_1804b1b10(longlong *param_1,uint *param_2,uint *param_3,double *param_4,
                  double *******param_5,uint param_6)

{
  undefined1 (*pauVar1) [16];
  longlong lVar2;
  code *pcVar3;
  undefined1 uVar4;
  float fVar5;
  uint uVar6;
  int iVar7;
  double ******ppppppdVar8;
  byte bVar9;
  byte bVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  double *pdVar16;
  undefined4 uVar17;
  bool bVar18;
  bool bVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  double *******local_res10;
  
  uVar14 = (ulonglong)param_3[1];
  uVar11 = *param_2;
  uVar12 = (ulonglong)param_2[1];
  uVar6 = *param_3;
  if (3 < (byte)(uVar11 >> 0x1c)) {
switchD_1804b1bca_caseD_3:
    FUN_1804b1380(param_1,param_2,param_3,param_6);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_1804b1b72:
  uVar15 = (uint)uVar12;
  uVar13 = (uint)uVar14;
  if (3 < (byte)(uVar6 >> 0x1c)) goto switchD_1804b1bca_caseD_3;
  switch(((uint)(0xf436fff5fff7f021 >> (sbyte)((uVar6 >> 0x1a & 0xf) << 2)) & 0xf) +
         ((uint)(0xf436fff5fff7f021 >> (sbyte)((uVar11 >> 0x1a & 0xf) << 2)) & 0xf) * 8) {
  case 0:
    if (uVar15 != 1) {
      uVar6 = (uint)*(byte *)param_5;
      goto LAB_1804b1c5c;
    }
    uVar6 = (uint)*(byte *)param_5;
    goto LAB_1804b1c51;
  case 1:
    bVar9 = 0;
    bVar10 = 0;
    uVar12 = 0;
    if (uVar13 != 0) {
      if (uVar13 < 0x20) goto LAB_1804b1cf0;
      auVar21 = ZEXT816(0);
      auVar20 = ZEXT816(0);
      do {
        iVar7 = (int)uVar12;
        pauVar1 = (undefined1 (*) [16])(uVar12 + (longlong)param_5);
        uVar6 = iVar7 + 0x20;
        uVar12 = (ulonglong)uVar6;
        auVar21 = auVar21 | *pauVar1;
        auVar20 = *(undefined1 (*) [16])((ulonglong)(iVar7 + 0x10) + (longlong)param_5) | auVar20;
      } while (uVar6 < (uVar13 & 0xffffffe0));
      auVar20 = auVar21 | auVar20 | (auVar21 | auVar20) >> 0x40;
      auVar20 = auVar20 | auVar20 >> 0x20;
      auVar20 = auVar20 | auVar20 >> 0x10;
      uVar11 = auVar20._0_4_ | auVar20._1_4_;
      bVar10 = (byte)uVar11;
      while (bVar9 = (byte)uVar11, uVar6 < uVar13) {
LAB_1804b1cf0:
        uVar6 = (int)uVar12 + 1;
        bVar10 = bVar9 | *(byte *)(uVar12 + (longlong)param_5);
        uVar11 = (uint)bVar10;
        uVar12 = (ulonglong)uVar6;
      }
    }
    uVar6 = (uint)(bVar10 != 0);
    if (uVar15 != 1) {
      uVar6 = (uint)(bVar10 != 0);
LAB_1804b1d10:
      *(uint *)param_4 = uVar6;
      return;
    }
LAB_1804b1c51:
    *(char *)param_4 = (char)uVar6;
    return;
  case 2:
    if (uVar13 == 8) {
      bVar19 = NAN((double)*param_5);
      bVar18 = (double)*param_5 == 0.0;
    }
    else {
      if (uVar13 != 4) goto switchD_1804b1bca_caseD_3;
      bVar19 = NAN(*(float *)param_5);
      bVar18 = *(float *)param_5 == 0.0;
    }
    if ((bVar19) || (!bVar18)) {
      uVar6 = 1;
      uVar4 = 1;
    }
    else {
      uVar4 = 0;
      uVar6 = 0;
    }
    if (uVar15 == 1) {
      *(undefined1 *)param_4 = uVar4;
      return;
    }
    goto LAB_1804b1d10;
  default:
    goto switchD_1804b1bca_caseD_3;
  case 8:
  case 9:
    break;
  case 10:
    goto switchD_1804b1bca_caseD_a;
  case 0xb:
    uVar13 = *(uint *)(*param_1 + 4 + (ulonglong)(ushort)*param_3 * 0x18);
    param_3 = (uint *)(*param_1 + (ulonglong)(ushort)*param_3 * 0x18);
    goto switchD_1804b1bca_caseD_a;
  case 0xd:
    if ((param_6 & 1) == 0) goto switchD_1804b1bca_caseD_3;
    uVar6 = 0x800000;
    break;
  case 0xe:
    if ((param_6 & 1) == 0) goto switchD_1804b1bca_caseD_3;
    local_res10 = param_5;
    uVar13 = 8;
    param_5 = (double *******)&local_res10;
    uVar6 = 0x800000;
    break;
  case 0x10:
  case 0x11:
    goto switchD_1804b1bca_caseD_10;
  case 0x12:
    goto switchD_1804b1bca_caseD_12;
  case 0x13:
    uVar13 = *(uint *)(*param_1 + 4 + (ulonglong)(ushort)*param_3 * 0x18);
    param_3 = (uint *)(*param_1 + (ulonglong)(ushort)*param_3 * 0x18);
    goto switchD_1804b1bca_caseD_12;
  case 0x19:
    uVar15 = *(uint *)(*param_1 + 4 + (ulonglong)(ushort)*param_2 * 0x18);
    param_2 = (uint *)(*param_1 + (ulonglong)(ushort)*param_2 * 0x18);
    FUN_180540170((ulonglong)uVar15 + (longlong)param_4,0);
switchD_1804b1bca_caseD_10:
    if (uVar13 < 4) {
      if ((uVar6 >> 0x17 & 1) == 0) {
        if (uVar13 == 2) {
          fVar5 = (float)(int)*(short *)param_5;
        }
        else {
          fVar5 = (float)(int)*(char *)param_5;
        }
      }
      else if (uVar13 == 2) {
        fVar5 = (float)(uint)*(ushort *)param_5;
      }
      else {
        fVar5 = (float)(uint)*(byte *)param_5;
      }
LAB_1804b1e73:
      ppppppdVar8 = (double ******)(double)(int)fVar5;
    }
    else if (uVar13 == 4) {
      if ((uVar6 >> 0x17 & 1) == 0) {
        fVar5 = *(float *)param_5;
        goto LAB_1804b1e73;
      }
      ppppppdVar8 = (double ******)(double)(uint)*(float *)param_5;
    }
    else {
      if (uVar13 != 8) goto switchD_1804b1bca_caseD_3;
      if ((uVar6 >> 0x17 & 1) == 0) {
        ppppppdVar8 = (double ******)(double)(longlong)*param_5;
      }
      else {
        ppppppdVar8 = *param_5;
        if ((longlong)ppppppdVar8 < 0) {
          ppppppdVar8 = (double ******)(double)ppppppdVar8;
        }
        else {
          ppppppdVar8 = (double ******)(double)(longlong)ppppppdVar8;
        }
      }
    }
    if (uVar15 == 8) {
      *param_4 = (double)ppppppdVar8;
      return;
    }
    goto LAB_1804b1e89;
  case 0x1a:
    uVar15 = *(uint *)(*param_1 + 4 + (ulonglong)(ushort)*param_2 * 0x18);
    param_2 = (uint *)(*param_1 + (ulonglong)(ushort)*param_2 * 0x18);
    FUN_180540170((ulonglong)uVar15 + (longlong)param_4,0);
switchD_1804b1bca_caseD_12:
    if (uVar13 == uVar15) goto LAB_1804b1fa3;
    if (uVar13 == 8) {
      ppppppdVar8 = *param_5;
    }
    else {
      if (uVar13 != 4) goto switchD_1804b1bca_caseD_3;
      ppppppdVar8 = (double ******)(double)*(float *)param_5;
    }
    if (uVar15 == 8) {
      *param_4 = (double)ppppppdVar8;
      return;
    }
LAB_1804b1e89:
    if (uVar15 == 4) {
      *(float *)param_4 = (float)(double)ppppppdVar8;
      return;
    }
    goto switchD_1804b1bca_caseD_3;
  case 0x1b:
    if (uVar15 == uVar13) goto LAB_1804b1fa3;
    param_2 = (uint *)(*param_1 + (ulonglong)(ushort)*param_2 * 0x18);
    param_3 = (uint *)(*param_1 + (ulonglong)(ushort)*param_3 * 0x18);
    FUN_1804b1b10(param_1,param_2,param_3,param_4,param_5,param_6);
    uVar11 = *param_2;
    uVar14 = (ulonglong)param_3[1];
    uVar12 = (ulonglong)param_2[1];
    param_5 = (double *******)((longlong)param_5 + uVar14);
    uVar6 = *param_3;
    param_4 = (double *)((longlong)param_4 + uVar12);
    if (3 < (byte)(uVar11 >> 0x1c)) goto switchD_1804b1bca_caseD_3;
    goto LAB_1804b1b72;
  case 0x21:
  case 0x22:
  case 0x23:
    lVar2 = *param_1 + (ulonglong)(ushort)*param_2 * 0x18;
    FUN_1804b1b10(param_1,lVar2,param_3,param_4,param_5,param_6);
    uVar6 = *(uint *)(lVar2 + 4);
    pdVar16 = param_4;
    while (uVar6 < uVar15) {
      pdVar16 = (double *)((longlong)pdVar16 + (ulonglong)uVar6);
      FUN_180540530(pdVar16,param_4,(ulonglong)uVar6);
      uVar15 = (int)uVar12 - uVar6;
      uVar12 = (ulonglong)uVar15;
    }
    return;
  case 0x24:
    bVar19 = uVar15 == uVar13;
    goto LAB_1804b20da;
  case 0x29:
    if ((param_6 & 1) == 0) goto switchD_1804b1bca_caseD_3;
    break;
  case 0x2a:
    if (((byte)param_6 & 3) == 3) {
      uVar11 = 0x800000;
      if (uVar15 == 8) {
        uVar11 = 0;
      }
switchD_1804b1bca_caseD_a:
      if ((uVar13 == 8) || (uVar13 == 4)) {
        if (uVar15 < 8) {
          uVar6 = FUN_18000530c();
          if (uVar15 == 4) {
LAB_1804b1c5c:
            *(uint *)param_4 = uVar6;
            return;
          }
          if (uVar15 == 2) {
            *(short *)param_4 = (short)uVar6;
            return;
          }
          goto LAB_1804b1c51;
        }
        if (uVar15 == 8) {
          if ((uVar11 >> 0x17 & 1) == 0) {
            ppppppdVar8 = (double ******)FUN_18000530c();
          }
          else {
            ppppppdVar8 = (double ******)FUN_180005312();
          }
LAB_1804b2021:
          *param_4 = (double)ppppppdVar8;
          return;
        }
      }
    }
    goto switchD_1804b1bca_caseD_3;
  case 0x2d:
    iVar7 = FUN_1804b19c0(param_1,param_2,param_3,param_6);
    if (iVar7 != 0) {
      if (uVar13 == 4) {
        ppppppdVar8 = (double ******)(ulonglong)(uint)*(float *)param_5;
      }
      else {
        ppppppdVar8 = *param_5;
      }
      if (uVar15 == 4) {
        *(int *)param_4 = (int)ppppppdVar8;
        return;
      }
      goto LAB_1804b2021;
    }
    goto switchD_1804b1bca_caseD_3;
  case 0x2e:
  case 0x2f:
    iVar7 = FUN_1804b19c0(param_1,param_2,param_3,param_6);
    if (iVar7 != 0) {
      if (uVar15 == 4) {
        *(int *)param_4 = (int)param_5;
        return;
      }
      *param_4 = (double)param_5;
      return;
    }
    goto switchD_1804b1bca_caseD_3;
  case 0x36:
    if (((((param_6 & 1) == 0) && ((*param_2 & 0x100000) == 0)) && (uVar15 == uVar13)) &&
       ((param_2[1] != 0xffffffff &&
        (iVar7 = FUN_1804b19c0(param_1,param_2,param_3,param_6), iVar7 != 0)))) goto LAB_1804b1fa3;
    goto switchD_1804b1bca_caseD_3;
  case 0x3f:
    if (((param_6 & 1) == 0) && ((*param_2 & 0x100000) == 0)) {
      bVar19 = param_2 == param_3;
LAB_1804b20da:
      if (bVar19) goto LAB_1804b1fa3;
    }
    goto switchD_1804b1bca_caseD_3;
  }
  if (uVar13 < uVar15) {
    if (((uVar6 >> 0x17 & 1) == 0) &&
       (*(char *)((ulonglong)(uVar13 - 1) + (longlong)param_5) < '\0')) {
      uVar17 = 0xff;
    }
    else {
      uVar17 = 0;
    }
    FUN_180540530(param_4,param_5,uVar13);
    FUN_180540170((ulonglong)uVar13 + (longlong)param_4,uVar17,uVar15 - uVar13);
    return;
  }
LAB_1804b1fa3:
  FUN_180540530(param_4,param_5,uVar15);
  return;
}



/* ===== 1804b2190 FUN_1804b2190 ===== */

void FUN_1804b2190(longlong *param_1,uint *param_2,uint param_3,longlong param_4,ulonglong *param_5,
                  uint param_6)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar5 = param_6;
  if (param_6 == 0) {
    FUN_180540170(param_4,0,param_3);
    return;
  }
  if (param_6 == 1) {
    uVar4 = *param_2 >> 0x1c;
    if (((*param_2 & 0xfc000000) != 0x30000000) && (uVar4 != 1)) {
LAB_1804b2250:
      FUN_1804b23e0(param_1,param_2,param_4,param_5);
      return;
    }
    iVar2 = (int)((longlong)*param_5 >> 0x2f);
    if (iVar2 == -0xc) goto LAB_1804b2250;
    if (iVar2 == -5) {
      if (uVar4 != 1) goto LAB_1804b2250;
    }
    else if ((iVar2 == -0xb) &&
            (puVar3 = (uint *)FUN_1804aba40(param_1,*(undefined2 *)
                                                     ((*param_5 & 0x7fffffffffff) + 10)),
            puVar3 == param_2)) goto LAB_1804b2250;
  }
  uVar4 = param_6;
  if (*param_2 >> 0x1c == 3) {
    puVar3 = param_2;
    do {
      uVar1 = *puVar3;
      puVar3 = (uint *)(*param_1 + (ulonglong)(ushort)uVar1 * 0x18);
    } while ((byte)((uint)*(undefined4 *)(*param_1 + (ulonglong)(ushort)uVar1 * 0x18) >> 0x1c) == 8)
    ;
    uVar1 = puVar3[1];
    if (param_3 < uVar1 * uVar5) {
LAB_1804b23c5:
                    /* WARNING: Subroutine does not return */
      FUN_1804b1510(param_1,param_2);
    }
    uVar5 = 0;
    uVar6 = 0;
    if (param_6 != 0) {
      do {
        FUN_1804b23e0(param_1,puVar3,(ulonglong)uVar5 + param_4,param_5 + uVar6,0);
        uVar6 = uVar6 + 1;
        uVar5 = uVar5 + uVar1;
      } while (uVar6 < uVar4);
    }
    if (uVar5 == uVar1) {
      for (; uVar5 < param_3; uVar5 = uVar5 + uVar1) {
        FUN_180540530((ulonglong)uVar5 + param_4,param_4,uVar1);
      }
    }
    else {
      FUN_180540170((ulonglong)uVar5 + param_4,0,param_3 - uVar5);
    }
  }
  else {
    if (*param_2 >> 0x1c != 1) goto LAB_1804b23c5;
    param_6 = 0;
    FUN_180540170(param_4,0,param_3);
    FUN_1804b1560(param_1,param_2,param_4,param_5,uVar5,&param_6);
    if (param_6 < uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_1804b1510(param_1,param_2);
    }
  }
  return;
}



/* ===== 1804b23e0 FUN_1804b23e0 ===== */

void FUN_1804b23e0(longlong *param_1,uint *param_2,longlong *param_3,ulonglong **param_4,
                  uint param_5)

{
  ulonglong *puVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  longlong *plVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  ulonglong **ppuVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  bool bVar13;
  char local_res20 [8];
  uint local_38 [2];
  ulonglong *local_30;
  
  puVar1 = *param_4;
  uVar4 = (uint)((longlong)puVar1 >> 0x2f);
  if (uVar4 < 0xfffffff2) {
    param_5 = param_5 | 2;
    uVar12 = 0x10;
    ppuVar10 = param_4;
  }
  else if (uVar4 == 0xfffffff5) {
    lVar7 = *param_1;
    uVar12 = (ulonglong)*(ushort *)(((ulonglong)puVar1 & 0x7fffffffffff) + 10);
    ppuVar10 = (ulonglong **)(((ulonglong)puVar1 & 0x7fffffffffff) + 0x10);
    uVar4 = *(uint *)(lVar7 + uVar12 * 0x18);
    bVar13 = (uVar4 & 0xf0800000) == 0x20800000;
    if (bVar13) {
      ppuVar10 = (ulonglong **)*ppuVar10;
    }
    uVar11 = (ulonglong)(uVar4 & 0xffff);
    if (!bVar13) {
      uVar11 = uVar12;
    }
    uVar8 = (uint)uVar11;
    uVar4 = *(uint *)(lVar7 + uVar11 * 0x18);
    if ((byte)(uVar4 >> 0x1c) == 8) {
      do {
        uVar11 = (ulonglong)*(ushort *)(lVar7 + uVar11 * 0x18);
        uVar4 = *(uint *)(lVar7 + uVar11 * 0x18);
      } while ((byte)(uVar4 >> 0x1c) == 8);
    }
    if (uVar4 >> 0x1c != 6) {
      if (uVar4 >> 0x1c == 5) {
        lVar7 = lVar7 + (ulonglong)(uVar4 & 0xffff) * 0x18;
      }
      else {
        lVar7 = lVar7 + uVar11 * 0x18;
      }
      goto LAB_1804b28b7;
    }
    uVar4 = FUN_1804ab7b0(param_1,uVar8 | 0x20030000,8);
    uVar12 = (ulonglong)uVar4;
    param_2 = (uint *)(*param_1 + (((longlong)param_2 - lVar7) / 0x18 & 0xffffffffU) * 0x18);
  }
  else if (uVar4 == 0xfffffffb) {
    uVar12 = (ulonglong)puVar1 & 0x7fffffffffff;
    if ((byte)(*param_2 >> 0x1c) == 5) {
      puVar5 = (uint *)FUN_1804ab270(param_1,param_2,uVar12,local_38,0);
      if ((puVar5 == (uint *)0x0) || ((byte)(*puVar5 >> 0x1c) != 0xb)) goto LAB_1804b2902;
      ppuVar10 = (ulonglong **)(puVar5 + 1);
      uVar12 = (ulonglong)(*puVar5 & 0xffff);
    }
    else {
      if ((*param_2 & 0xfc000000) == 0x30000000) {
        puVar5 = param_2;
        do {
          uVar4 = *(uint *)(*param_1 + (ulonglong)(ushort)*puVar5 * 0x18);
          puVar5 = (uint *)(*param_1 + (ulonglong)(ushort)*puVar5 * 0x18);
        } while ((byte)(uVar4 >> 0x1c) == 8);
        if (((uVar4 & 0xfc000000) == 0) && (puVar5[1] == 1)) {
          uVar4 = param_2[1];
          uVar8 = *(int *)(uVar12 + 0x14) + 1;
          if (uVar4 == 0) {
            FUN_180540530(param_3,uVar12 + 0x18,uVar8);
            return;
          }
          if (uVar8 <= uVar4) {
            uVar4 = uVar8;
          }
          FUN_180540530(param_3,uVar12 + 0x18,uVar4);
          return;
        }
LAB_1804b2902:
        FUN_1804b1470(param_1,param_2,param_4,param_5);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      param_5 = param_5 | 2;
      ppuVar10 = (ulonglong **)(uVar12 + 0x18);
      uVar12 = 0x17;
    }
  }
  else {
    if (uVar4 == 0xfffffff4) {
      if (*param_2 >> 0x1c == 3) {
        uVar12 = (ulonglong)puVar1 & 0x7fffffffffff;
        puVar5 = param_2;
        do {
          uVar4 = *puVar5;
          puVar5 = (uint *)(*param_1 + (ulonglong)(ushort)uVar4 * 0x18);
        } while ((byte)((uint)*(undefined4 *)(*param_1 + (ulonglong)(ushort)uVar4 * 0x18) >> 0x1c)
                 == 8);
        local_38[0] = puVar5[1];
        uVar8 = 0;
        uVar4 = param_2[1];
        uVar9 = 0;
        while( true ) {
          while( true ) {
            if (uVar9 < *(uint *)(uVar12 + 0x30)) {
              plVar6 = (longlong *)(*(longlong *)(uVar12 + 0x10) + (longlong)(int)uVar9 * 8);
            }
            else {
              plVar6 = (longlong *)FUN_1804927e0(uVar12,uVar9);
            }
            uVar3 = local_38[0];
            if ((plVar6 == (longlong *)0x0) || (*plVar6 == -1)) break;
            if (uVar4 <= uVar8) {
                    /* WARNING: Subroutine does not return */
              FUN_1804b1510(param_1,param_2);
            }
            FUN_1804b23e0(param_1,puVar5,(ulonglong)uVar8 + (longlong)param_3,plVar6,param_5);
            uVar8 = uVar8 + local_38[0];
            uVar9 = uVar9 + 1;
          }
          if (uVar9 != 0) break;
          uVar9 = 1;
        }
        if (uVar4 == 0xffffffff) {
          return;
        }
        if (uVar8 != local_38[0]) {
          FUN_180540170((ulonglong)uVar8 + (longlong)param_3,0,uVar4 - uVar8);
          return;
        }
        for (; uVar8 < uVar4; uVar8 = uVar8 + uVar3) {
          FUN_180540530((ulonglong)uVar8 + (longlong)param_3,param_3,uVar3);
        }
        return;
      }
      if (*param_2 >> 0x1c == 1) {
        local_38[0] = 0;
        FUN_180540170(param_3,0,param_2[1]);
        FUN_1804b16d0(param_1,param_2,param_3,(ulonglong)puVar1 & 0x7fffffffffff,local_38,param_5);
        return;
      }
      goto LAB_1804b2902;
    }
    if ((uVar4 == 0xfffffffe) || (uVar4 == 0xfffffffd)) {
      ppuVar10 = (ulonglong **)local_res20;
      local_res20[0] = -2 - (char)((longlong)puVar1 >> 0x2f);
      uVar12 = 3;
    }
    else {
      ppuVar10 = &local_30;
      uVar12 = 0x13;
      if (puVar1 == (ulonglong *)0xffffffffffffffff) {
        param_5 = param_5 | 2;
        local_30 = (ulonglong *)0x0;
      }
      else if (uVar4 == 0xfffffff3) {
        uVar11 = (ulonglong)puVar1 & 0x7fffffffffff;
        local_30 = (ulonglong *)(uVar11 + 0x30);
        if (*(char *)(uVar11 + 10) == '\x01') {
          local_30 = (ulonglong *)*local_30;
        }
        else if (*(char *)(uVar11 + 10) == '\x03') {
          local_30 = *(ulonglong **)(uVar11 + 0x58);
        }
      }
      else {
        if (uVar4 != 0xfffffffc) {
          if ((uVar4 == 0xfffffff7) &&
             (lVar7 = FUN_1804b4e40(param_1,param_2,(ulonglong)puVar1 & 0x7fffffffffff), lVar7 != 0)
             ) {
            *param_3 = lVar7;
            return;
          }
          goto LAB_1804b2902;
        }
        uVar11 = (ulonglong)puVar1 >> 0x27 & 0xff;
        if (uVar11 == 0xff) {
          local_30 = (ulonglong *)0x0;
        }
        else {
          local_30 = (ulonglong *)
                     ((ulonglong)*(uint *)(*(longlong *)(param_1[3] + 0x70) + uVar11 * 4) << 0x20 |
                     (ulonglong)puVar1 & 0x7fffffffff);
        }
      }
    }
  }
  lVar7 = *param_1 + uVar12 * 0x18;
LAB_1804b28b7:
  if ((byte)(*param_2 >> 0x1c) == 5) {
    param_2 = (uint *)(*param_1 + (ulonglong)(*param_2 & 0xffff) * 0x18);
  }
  FUN_1804b1b10(param_1,param_2,lVar7,param_3,ppuVar10,param_5);
  return;
}



/* ===== 1804b2920 FUN_1804b2920 ===== */

undefined8 FUN_1804b2920(undefined8 param_1,uint *param_2,ulonglong *param_3)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  
  uVar3 = *param_2 >> 0x1c;
  if (((*param_2 & 0xfc000000) == 0x30000000) || (uVar3 == 1)) {
    iVar1 = (int)((longlong)*param_3 >> 0x2f);
    if (iVar1 != -0xc) {
      if (iVar1 == -5) {
        if (uVar3 != 1) {
          return 0;
        }
      }
      else if ((iVar1 == -0xb) &&
              (puVar2 = (uint *)FUN_1804aba40(param_1,*(undefined2 *)
                                                       ((*param_3 & 0x7fffffffffff) + 10)),
              puVar2 == param_2)) {
        return 0;
      }
      return 1;
    }
  }
  return 0;
}



/* ===== 1804b29a0 FUN_1804b29a0 ===== */

undefined8 FUN_1804b29a0(longlong param_1,uint *param_2,double *param_3,uint *param_4)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  double dVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar1 = *param_2;
  uVar7 = uVar1 >> 0x10 & 0x7f;
  if (uVar7 == 1) {
    uVar5 = (uint)(byte)*param_4;
  }
  else if (uVar7 == 2) {
    uVar5 = (uint)(ushort)*param_4;
  }
  else if (uVar7 == 4) {
    uVar5 = *param_4;
  }
  else {
    uVar5 = 0;
  }
  uVar6 = uVar1 >> 8 & 0x7f;
  if (uVar7 * 8 < uVar6 + (uVar1 & 0x7f)) {
                    /* WARNING: Subroutine does not return */
    FUN_180484220(*(undefined8 *)(param_1 + 0x10),0xf14);
  }
  bVar3 = (byte)(uVar1 & 0x7f);
  if ((uVar1 >> 0x1b & 1) != 0) {
    dVar4 = (double)~((ulonglong)((uVar5 >> (bVar3 & 0x1f) & 1) + 1) << 0x2f);
    *param_3 = dVar4;
    *(double *)(*(longlong *)(param_1 + 0x18) + 0xf0) = dVar4;
    return 0;
  }
  bVar2 = 0x20 - (char)uVar6;
  uVar5 = uVar5 << (bVar2 - bVar3 & 0x1f);
  if ((uVar1 >> 0x17 & 1) == 0) {
    *param_3 = (double)((int)uVar5 >> (bVar2 & 0x1f));
    return 0;
  }
  *param_3 = (double)(uVar5 >> (bVar2 & 0x1f));
  return 0;
}



/* ===== 1804b2aa0 FUN_1804b2aa0 ===== */

undefined8
FUN_1804b2aa0(longlong *param_1,uint *param_2,undefined8 param_3,ulonglong *param_4,int *param_5)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  bool bVar4;
  
  uVar1 = *param_2;
  if (uVar1 < 0x10000000) {
    if ((uVar1 & 0xf8000000) == 0x8000000) {
      if (param_2[1] == 1) {
        bVar4 = (char)*param_5 == '\0';
      }
      else {
        bVar4 = *param_5 == 0;
      }
      uVar2 = ~(((ulonglong)!bVar4 << 0x2f) + 0x800000000000);
      *param_4 = uVar2;
      *(ulonglong *)(param_1[3] + 0xf0) = uVar2;
      return 0;
    }
    if (((uVar1 & 0xfc000000) != 0) || (param_2[1] < 5)) {
      FUN_1804b1b10(param_1,*param_1 + 0x180,param_2,param_4,param_5,0);
      return 0;
    }
  }
  else if (((uVar1 & 0xfc000000) == 0x30000000) || ((byte)(uVar1 >> 0x1c) == 1)) {
    uVar2 = FUN_1804b0fb0(param_1,param_5);
    *param_4 = uVar2 | 0xfffa800000000000;
    return 1;
  }
  lVar3 = ((longlong)param_2 - *param_1) / 6 + ((longlong)param_2 - *param_1 >> 0x3f);
  uVar1 = param_2[1];
  uVar2 = FUN_1804916f0(param_1[2],(ulonglong)uVar1 + 0x10);
  *(undefined1 *)(uVar2 + 9) = 10;
  *(short *)(uVar2 + 10) = (short)(lVar3 >> 2) - (short)(lVar3 >> 0x3f);
  *param_4 = uVar2 | 0xfffa800000000000;
  FUN_180540530(uVar2 + 0x10,param_5,uVar1);
  return 1;
}



/* ===== 1804b2c40 FUN_1804b2c40 ===== */

undefined4 FUN_1804b2c40(longlong param_1,longlong *param_2,longlong param_3)

{
  ushort uVar1;
  byte bVar2;
  ushort *puVar3;
  uint uVar4;
  longlong lVar5;
  uint *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint *puVar9;
  ulonglong uVar10;
  uint uVar11;
  undefined4 uVar12;
  ulonglong *puVar13;
  undefined1 local_res8 [8];
  
  puVar13 = *(ulonglong **)(param_1 + 0x20);
  if (*(ulonglong **)(param_1 + 0x28) <= puVar13 + 1) {
                    /* WARNING: Subroutine does not return */
    FUN_1804840e0(param_1,1,10);
  }
  uVar11 = 0;
  uVar12 = 1;
  do {
    uVar10 = *puVar13;
    uVar4 = (uint)((longlong)uVar10 >> 0x2f);
    if (uVar4 == 0xfffffff5) {
      lVar8 = *param_2;
      uVar1 = *(ushort *)((uVar10 & 0x7fffffffffff) + 10);
      uVar7 = (ulonglong)uVar1;
      uVar4 = *(uint *)(lVar8 + uVar7 * 0x18);
      if ((byte)(uVar4 >> 0x1c) == 8) {
        do {
          uVar7 = (ulonglong)*(ushort *)(lVar8 + uVar7 * 0x18);
          uVar4 = *(uint *)(lVar8 + uVar7 * 0x18);
        } while ((byte)(uVar4 >> 0x1c) == 8);
      }
      puVar9 = (uint *)(lVar8 + uVar7 * 0x18);
      puVar6 = (uint *)((uVar10 & 0x7fffffffffff) + 0x10);
      if (uVar4 >> 0x1c == 2) {
        if (puVar9[1] == 4) {
          puVar6 = (uint *)(ulonglong)*puVar6;
        }
        else {
          puVar6 = *(uint **)puVar6;
        }
        if ((uVar4 & 0xf0800000) == 0x20800000) {
          do {
            uVar4 = *puVar9;
            puVar9 = (uint *)(lVar8 + (ulonglong)(ushort)uVar4 * 0x18);
          } while ((byte)((uint)*(undefined4 *)(lVar8 + (ulonglong)(ushort)uVar4 * 0x18) >> 0x1c) ==
                   8);
        }
      }
      else if (uVar4 >> 0x1c == 6) {
        if (uVar11 == 0) {
          uVar10 = 0;
        }
        else {
          lVar8 = *(longlong *)(param_3 + 0x10) - lVar8;
          lVar8 = lVar8 / 6 + (lVar8 >> 0x3f);
          uVar10 = (lVar8 >> 2) - (lVar8 >> 0x3f);
        }
        puVar6 = *(uint **)puVar6;
        uVar4 = FUN_1804ab7b0(param_2,uVar1 | 0x20030000,8);
        puVar9 = (uint *)(*param_2 + (ulonglong)uVar4 * 0x18);
        if (uVar11 != 0) {
          *(ulonglong *)(param_3 + 0x10) = *param_2 + (uVar10 & 0xffffffff) * 0x18;
        }
      }
      if ((byte)(*puVar9 >> 0x1c) == 5) {
        puVar9 = (uint *)(*param_2 + (ulonglong)(*puVar9 & 0xffff) * 0x18);
      }
      *(uint **)(param_3 + 0x10 + (ulonglong)uVar11 * 8) = puVar9;
      *(uint **)(param_3 + (ulonglong)uVar11 * 8) = puVar6;
    }
    else if (uVar4 < 0xfffffff2) {
      *(longlong *)(param_3 + 0x10 + (ulonglong)uVar11 * 8) = *param_2 + 0x180;
      *(ulonglong **)(param_3 + (ulonglong)uVar11 * 8) = puVar13;
    }
    else if (uVar10 == 0xffffffffffffffff) {
      *(longlong *)(param_3 + 0x10 + (ulonglong)uVar11 * 8) = *param_2 + 0x1c8;
      *(undefined8 *)(param_3 + (ulonglong)uVar11 * 8) = 0;
    }
    else {
      uVar12 = 0;
      if (uVar4 == 0xfffffffb) {
        lVar8 = *param_2;
        lVar5 = 8;
        if (uVar11 != 0) {
          lVar5 = -8;
        }
        uVar10 = (ulonglong)
                 *(ushort *)((*(ulonglong *)((longlong)puVar13 + lVar5) & 0x7fffffffffff) + 10);
        bVar2 = (byte)((uint)*(undefined4 *)(lVar8 + uVar10 * 0x18) >> 0x18);
        while (puVar3 = (ushort *)(lVar8 + uVar10 * 0x18), bVar2 >> 4 == 8) {
          uVar10 = (ulonglong)*puVar3;
          bVar2 = (byte)((uint)*(undefined4 *)(lVar8 + uVar10 * 0x18) >> 0x18);
        }
        uVar10 = (ulonglong)uVar11;
        *(undefined8 *)(param_3 + 0x10 + uVar10 * 8) = 0;
        *(ulonglong *)(param_3 + uVar10 * 8) = (*puVar13 & 0x7fffffffffff) + 0x18;
        if ((byte)((uint)*(undefined4 *)puVar3 >> 0x1c) == 5) {
          puVar6 = (uint *)FUN_1804ab270(param_2,puVar3,*puVar13 & 0x7fffffffffff,local_res8,0);
          if ((puVar6 == (uint *)0x0) || ((byte)(*puVar6 >> 0x1c) != 0xb)) {
            *(ushort **)(param_3 + 0x10 + (ulonglong)(1 - uVar11) * 8) = puVar3;
            *(undefined8 *)(param_3 + (ulonglong)(1 - uVar11) * 8) = 0;
            return 0;
          }
          uVar12 = 1;
          *(ulonglong *)(param_3 + 0x10 + uVar10 * 8) =
               *param_2 + (ulonglong)(*puVar6 & 0xffff) * 0x18;
          *(uint **)(param_3 + uVar10 * 8) = puVar6 + 1;
        }
      }
      else {
        *(undefined8 *)(param_3 + 0x10 + (ulonglong)uVar11 * 8) = 0;
        *(undefined8 *)(param_3 + (ulonglong)uVar11 * 8) = 1;
      }
    }
    uVar11 = uVar11 + 1;
    puVar13 = puVar13 + 1;
    if (1 < uVar11) {
      return uVar12;
    }
  } while( true );
}



/* ===== 1804b2f70 FUN_1804b2f70 ===== */

undefined8 FUN_1804b2f70(longlong param_1,longlong *param_2,undefined8 *param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  undefined2 uVar9;
  ulonglong local_res18;
  ulonglong local_38 [2];
  
  puVar3 = (uint *)param_3[2];
  if ((0xfffffff < *puVar3) || (8 < puVar3[1])) {
    return 0;
  }
  uVar1 = *(uint *)param_3[3];
  if (0xfffffff < uVar1) {
    return 0;
  }
  uVar2 = ((uint *)param_3[3])[1];
  if (8 < uVar2) {
    return 0;
  }
  if ((((*puVar3 >> 0x17 & 1) == 0) || (puVar3[1] != 8)) &&
     (((uVar1 >> 0x17 & 1) == 0 || (uVar2 != 8)))) {
    iVar8 = 0xb;
    lVar5 = 0x108;
    uVar9 = 0xb;
  }
  else {
    iVar8 = 0xc;
    lVar5 = 0x120;
    uVar9 = 0xc;
  }
  lVar4 = *param_2;
  FUN_1804b1b10(param_2,lVar4 + lVar5,puVar3,&local_res18,*param_3,0);
  if (param_4 != 0x10) {
    FUN_1804b1b10(param_2,lVar4 + lVar5,param_3[3],local_38,param_3[1],0);
    if (param_4 == 4) {
      uVar6 = 0xffff7fffffffffff;
      if (local_res18 == local_38[0]) {
        uVar6 = 0xfffeffffffffffff;
      }
      goto LAB_1804b30a2;
    }
    if (param_4 == 6) {
      if (iVar8 == 0xb) {
        uVar6 = (ulonglong)((longlong)local_res18 < (longlong)local_38[0]);
      }
      else {
        uVar6 = (ulonglong)(local_res18 < local_38[0]);
      }
    }
    else {
      if (param_4 != 7) goto LAB_1804b3116;
      if (iVar8 == 0xb) {
        uVar6 = (ulonglong)((longlong)local_res18 <= (longlong)local_38[0]);
      }
      else {
        uVar6 = (ulonglong)(local_res18 <= local_38[0]);
      }
    }
    uVar6 = ~((uVar6 << 0x2f) + 0x800000000000);
LAB_1804b30a2:
    *(ulonglong *)(*(longlong *)(param_1 + 0x28) + -8) = uVar6;
    return 1;
  }
LAB_1804b3116:
  uVar6 = FUN_1804916f0(param_2[2],0x18);
  *(undefined1 *)(uVar6 + 9) = 10;
  *(undefined2 *)(uVar6 + 10) = uVar9;
  *(ulonglong *)(*(longlong *)(param_1 + 0x28) + -8) = uVar6 | 0xfffa800000000000;
  switch(param_4) {
  case 10:
    *(ulonglong *)(uVar6 + 0x10) = local_res18 + local_38[0];
    goto switchD_1804b3168_default;
  case 0xb:
    local_res18 = local_res18 - local_38[0];
    break;
  case 0xc:
    local_res18 = local_38[0] * local_res18;
    break;
  case 0xd:
    if (iVar8 == 0xb) {
      uVar7 = 0x8000000000000000;
      if ((local_38[0] != 0) &&
         ((local_res18 != 0x8000000000000000 || (local_38[0] != 0xffffffffffffffff)))) {
        *(longlong *)(uVar6 + 0x10) = (longlong)local_res18 / (longlong)local_38[0];
        goto switchD_1804b3168_default;
      }
    }
    else {
      if (local_38[0] == 0) {
        *(undefined8 *)(uVar6 + 0x10) = 0x8000000000000000;
        goto switchD_1804b3168_default;
      }
      uVar7 = local_res18 / local_38[0];
    }
    *(ulonglong *)(uVar6 + 0x10) = uVar7;
    goto switchD_1804b3168_default;
  case 0xe:
    if (iVar8 == 0xb) {
      uVar7 = 0x8000000000000000;
      if (local_38[0] != 0) {
        if ((local_res18 == 0x8000000000000000) && (local_38[0] == 0xffffffffffffffff)) {
          *(undefined8 *)(uVar6 + 0x10) = 0;
        }
        else {
          *(longlong *)(uVar6 + 0x10) = (longlong)local_res18 % (longlong)local_38[0];
        }
        goto switchD_1804b3168_default;
      }
    }
    else {
      if (local_38[0] == 0) {
        *(undefined8 *)(uVar6 + 0x10) = 0x8000000000000000;
        goto switchD_1804b3168_default;
      }
      uVar7 = local_res18 % local_38[0];
    }
    *(ulonglong *)(uVar6 + 0x10) = uVar7;
    goto switchD_1804b3168_default;
  case 0xf:
    if (iVar8 == 0xb) {
      if (local_38[0] == 0) {
        local_res18 = 1;
      }
      else if ((longlong)local_38[0] < 0) {
        if (local_res18 == 0) {
          local_res18 = 0x7fffffffffffffff;
        }
        else if (local_res18 != 1) {
          if (local_res18 == 0xffffffffffffffff) {
            local_res18 = (ulonglong)(~(uint)local_38[0] & 1) * 2 - 1;
          }
          else {
            local_res18 = 0;
          }
        }
      }
      else if (local_38[0] == 0) {
        local_res18 = 1;
      }
      else {
        uVar7 = local_38[0] & 1;
        while (uVar7 == 0) {
          local_res18 = local_res18 * local_res18;
          uVar7 = local_38[0] & 2;
          local_38[0] = local_38[0] >> 1;
        }
        if (1 < local_38[0]) {
          lVar5 = local_res18 * local_res18;
          while (local_38[0] = local_38[0] >> 1, local_38[0] != 1) {
            if ((local_38[0] & 1) != 0) {
              local_res18 = local_res18 * lVar5;
            }
            lVar5 = lVar5 * lVar5;
          }
          local_res18 = local_res18 * lVar5;
        }
      }
    }
    else {
      local_res18 = FUN_1804b3e60(local_res18,local_38[0]);
    }
    break;
  case 0x10:
    local_res18 = ~local_res18 + 1;
    break;
  default:
    goto switchD_1804b3168_default;
  }
  *(ulonglong *)(uVar6 + 0x10) = local_res18;
switchD_1804b3168_default:
  if (*(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x18) <=
      *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x10)) {
    FUN_180491200(param_1);
  }
  return 1;
}



/* ===== 1804b3390 FUN_1804b3390 ===== */

undefined8 FUN_1804b3390(longlong param_1,longlong *param_2,ulonglong *param_3,uint param_4)

{
  uint uVar1;
  uint *puVar2;
  undefined2 uVar3;
  int iVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint *puVar9;
  ulonglong local_res18 [2];
  
  puVar9 = (uint *)param_3[2];
  uVar8 = *param_3;
  uVar1 = *puVar9;
  if (((byte)(uVar1 >> 0x1c) == 2) || ((uVar1 & 0xfc000000) == 0x30000000)) {
    if ((param_4 < 0xc) && ((0x8d0U >> (param_4 & 0x1f) & 1) != 0)) {
      uVar1 = *(uint *)param_3[3];
      if (((byte)(uVar1 >> 0x1c) == 2) || ((uVar1 & 0xfc000000) == 0x30000000)) {
        uVar5 = param_3[1];
        if (param_4 == 4) {
          uVar6 = 0xffff7fffffffffff;
          if (uVar8 == uVar5) {
            uVar6 = 0xfffeffffffffffff;
          }
          *(undefined8 *)(*(longlong *)(param_1 + 0x28) + -8) = uVar6;
          return 1;
        }
        iVar4 = FUN_1804b19c0(param_2,puVar9,(uint *)param_3[3],8);
        if (iVar4 == 0) {
          return 0;
        }
        if (param_4 != 0xb) {
          uVar6 = 0xffff7fffffffffff;
          if (param_4 == 6) {
            if (uVar8 < uVar5) {
              uVar6 = 0xfffeffffffffffff;
            }
            *(undefined8 *)(*(longlong *)(param_1 + 0x28) + -8) = uVar6;
            return 1;
          }
          if (uVar8 <= uVar5) {
            uVar6 = 0xfffeffffffffffff;
          }
          *(undefined8 *)(*(longlong *)(param_1 + 0x28) + -8) = uVar6;
          return 1;
        }
        iVar4 = FUN_1804abd40(param_2,(ushort)*puVar9);
        if (iVar4 - 1U < 0xfffffffe) {
          *(double *)(*(longlong *)(param_1 + 0x28) + -8) =
               (double)((longlong)(uVar8 - uVar5) / (longlong)iVar4);
          return 1;
        }
        return 0;
      }
    }
    if (1 < param_4 - 10) {
      return 0;
    }
    if (0xfffffff < *(uint *)param_3[3]) {
      return 0;
    }
    FUN_1804b1b10(param_2,*param_2 + 0x108,(uint *)param_3[3],local_res18,param_3[1],0);
    if (param_4 == 0xb) {
      local_res18[0] = ~local_res18[0] + 1;
    }
  }
  else {
    if (param_4 != 10) {
      return 0;
    }
    if (0xfffffff < uVar1) {
      return 0;
    }
    puVar2 = (uint *)param_3[3];
    uVar1 = *puVar2;
    if (((byte)(uVar1 >> 0x1c) != 2) && ((uVar1 & 0xfc000000) != 0x30000000)) {
      return 0;
    }
    uVar5 = param_3[1];
    FUN_1804b1b10(param_2,*param_2 + 0x108,puVar9,local_res18,uVar8,0);
    uVar8 = uVar5;
    puVar9 = puVar2;
  }
  iVar4 = FUN_1804abd40(param_2,(ushort)*puVar9);
  if (iVar4 == -1) {
    return 0;
  }
  lVar7 = (longlong)iVar4 * local_res18[0];
  uVar3 = FUN_1804ab7b0(param_2,(ushort)*puVar9 | 0x20030000,8);
  uVar5 = FUN_1804916f0(param_2[2],0x18);
  *(undefined1 *)(uVar5 + 9) = 10;
  *(undefined2 *)(uVar5 + 10) = uVar3;
  *(ulonglong *)(uVar5 + 0x10) = lVar7 + uVar8;
  *(ulonglong *)(*(longlong *)(param_1 + 0x28) + -8) = uVar5 | 0xfffa800000000000;
  if (*(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x18) <=
      *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x10)) {
    FUN_180491200(param_1);
  }
  return 1;
}



/* ===== 1804b3660 FUN_1804b3660 ===== */

ulonglong FUN_1804b3660(longlong param_1,int param_2,uint *param_3)

{
  ulonglong *puVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  bool bVar11;
  ulonglong local_res8;
  
  puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0x20) + ((longlong)param_2 + -1) * 8);
  if (*(ulonglong **)(param_1 + 0x28) <= puVar1) {
LAB_1804b37f3:
                    /* WARNING: Subroutine does not return */
    FUN_1804840e0(param_1,param_2,3);
  }
  uVar7 = (uint)((longlong)*puVar1 >> 0x2f);
  if (uVar7 < 0xfffffff3) {
LAB_1804b37d8:
    uVar7 = FUN_180005337(*puVar1);
    return (ulonglong)uVar7;
  }
  if (uVar7 != 0xfffffff5) {
    if ((uVar7 != 0xfffffffb) ||
       (iVar6 = FUN_1804972a0(*puVar1 & 0x7fffffffffff,puVar1), iVar6 == 0)) goto LAB_1804b37f3;
    goto LAB_1804b37d8;
  }
  plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x188);
  plVar3[2] = param_1;
  lVar4 = *plVar3;
  uVar9 = (ulonglong)*(ushort *)((*puVar1 & 0x7fffffffffff) + 10);
  plVar10 = (longlong *)((*puVar1 & 0x7fffffffffff) + 0x10);
  uVar7 = *(uint *)(lVar4 + uVar9 * 0x18);
  bVar11 = (uVar7 & 0xf0800000) == 0x20800000;
  if (bVar11) {
    plVar10 = (longlong *)*plVar10;
  }
  uVar8 = (ulonglong)(uVar7 & 0xffff);
  if (!bVar11) {
    uVar8 = uVar9;
  }
  uVar7 = *(uint *)(lVar4 + uVar8 * 0x18);
  bVar5 = (byte)(uVar7 >> 0x18);
  while (bVar5 >> 4 == 8) {
    uVar8 = (ulonglong)*(ushort *)(lVar4 + uVar8 * 0x18);
    uVar7 = *(uint *)(lVar4 + uVar8 * 0x18);
    bVar5 = (byte)(uVar7 >> 0x18);
  }
  if ((byte)(uVar7 >> 0x1c) == 5) {
    uVar8 = (ulonglong)(uVar7 & 0xffff);
  }
  lVar2 = lVar4 + uVar8 * 0x18;
  if (((*(uint *)(lVar4 + uVar8 * 0x18) & 0xfc800000) == 0x800000) && (*(int *)(lVar2 + 4) == 8)) {
    uVar9 = 0xc;
  }
  else {
    uVar9 = (ulonglong)*param_3;
    if (*param_3 != 0) goto LAB_1804b377c;
    uVar9 = 0xb;
  }
  *param_3 = (uint)uVar9;
LAB_1804b377c:
  FUN_1804b1b10(plVar3,*plVar3 + uVar9 * 0x18,lVar2,&local_res8,plVar10,param_2 << 8);
  return local_res8;
}



/* ===== 1804b3810 FUN_1804b3810 ===== */

longlong FUN_1804b3810(longlong param_1,ulonglong *param_2,uint *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  bool bVar10;
  longlong local_res10 [3];
  
  uVar5 = (uint)((longlong)*param_2 >> 0x2f);
  if (uVar5 != 0xfffffff5) {
    if (0xfffffff1 < uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_180484560(param_1,param_2,0x199);
    }
    iVar6 = FUN_180005337(*param_2);
    return (longlong)iVar6;
  }
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x188);
  plVar2[2] = param_1;
  lVar3 = *plVar2;
  uVar8 = (ulonglong)*(ushort *)((*param_2 & 0x7fffffffffff) + 10);
  plVar9 = (longlong *)((*param_2 & 0x7fffffffffff) + 0x10);
  uVar5 = *(uint *)(lVar3 + uVar8 * 0x18);
  bVar10 = (uVar5 & 0xf0800000) == 0x20800000;
  if (bVar10) {
    plVar9 = (longlong *)*plVar9;
  }
  uVar7 = (ulonglong)(uVar5 & 0xffff);
  if (!bVar10) {
    uVar7 = uVar8;
  }
  uVar5 = *(uint *)(lVar3 + uVar7 * 0x18);
  bVar4 = (byte)(uVar5 >> 0x18);
  while (bVar4 >> 4 == 8) {
    uVar7 = (ulonglong)*(ushort *)(lVar3 + uVar7 * 0x18);
    uVar5 = *(uint *)(lVar3 + uVar7 * 0x18);
    bVar4 = (byte)(uVar5 >> 0x18);
  }
  if ((byte)(uVar5 >> 0x1c) == 5) {
    uVar7 = (ulonglong)(uVar5 & 0xffff);
  }
  lVar1 = lVar3 + uVar7 * 0x18;
  if (((*(uint *)(lVar3 + uVar7 * 0x18) & 0xfc800000) == 0x800000) && (*(int *)(lVar1 + 4) == 8)) {
    uVar8 = 0xc;
  }
  else {
    uVar8 = (ulonglong)*param_3;
    if (*param_3 != 0) goto LAB_1804b38ed;
    uVar8 = 0xb;
  }
  *param_3 = (uint)uVar8;
LAB_1804b38ed:
  FUN_1804b1b10(plVar2,*plVar2 + uVar8 * 0x18,lVar1,local_res10,plVar9,0);
  return local_res10[0];
}



/* ===== 1804b3950 FUN_1804b3950 ===== */

longlong FUN_1804b3950(longlong param_1,longlong param_2)

{
  if ((param_2 == 0) || ((param_1 == -0x8000000000000000 && (param_2 == -1)))) {
    return -0x8000000000000000;
  }
  return param_1 / param_2;
}



/* ===== 1804b3990 FUN_1804b3990 ===== */

ulonglong FUN_1804b3990(ulonglong param_1,ulonglong param_2)

{
  if (param_2 == 0) {
    return 0x8000000000000000;
  }
  return param_1 / param_2;
}



/* ===== 1804b39b0 FUN_1804b39b0 ===== */

undefined8 FUN_1804b39b0(longlong param_1,longlong *param_2,longlong *param_3,int param_4)

{
  undefined4 *puVar1;
  byte bVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 uVar5;
  uint uVar6;
  ulonglong *puVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined *puVar11;
  uint uVar12;
  undefined *apuStack_40 [3];
  
  if ((int)((longlong)**(ulonglong **)(param_1 + 0x20) >> 0x2f) == -0xb) {
    lVar4 = *param_2;
    uVar10 = (ulonglong)*(ushort *)((**(ulonglong **)(param_1 + 0x20) & 0x7fffffffffff) + 10);
    uVar9 = *(uint *)(lVar4 + uVar10 * 0x18);
    bVar2 = (byte)(uVar9 >> 0x18);
    uVar3 = uVar10;
    while (bVar2 >> 4 == 8) {
      uVar3 = (ulonglong)*(ushort *)(lVar4 + uVar3 * 0x18);
      uVar9 = *(uint *)(lVar4 + uVar3 * 0x18);
      bVar2 = (byte)(uVar9 >> 0x18);
    }
    uVar3 = (ulonglong)(uVar9 & 0xffff);
    if ((byte)(uVar9 >> 0x1c) != 2) {
      uVar3 = uVar10;
    }
    lVar4 = FUN_1804ab8d0(param_2,uVar3,param_4);
    if (lVar4 != 0) goto LAB_1804b3ac6;
  }
  puVar7 = (ulonglong *)(*(longlong *)(param_1 + 0x20) + 8);
  if ((puVar7 < *(ulonglong **)(param_1 + 0x28)) &&
     (uVar3 = *puVar7, (int)((longlong)uVar3 >> 0x2f) == -0xb)) {
    lVar4 = *param_2;
    uVar10 = (ulonglong)*(ushort *)((uVar3 & 0x7fffffffffff) + 10);
    uVar9 = *(uint *)(lVar4 + uVar10 * 0x18);
    bVar2 = (byte)(uVar9 >> 0x18);
    uVar3 = uVar10;
    while (bVar2 >> 4 == 8) {
      uVar3 = (ulonglong)*(ushort *)(lVar4 + uVar3 * 0x18);
      uVar9 = *(uint *)(lVar4 + uVar3 * 0x18);
      bVar2 = (byte)(uVar9 >> 0x18);
    }
    uVar3 = (ulonglong)(uVar9 & 0xffff);
    if ((byte)(uVar9 >> 0x1c) != 2) {
      uVar3 = uVar10;
    }
    lVar4 = FUN_1804ab8d0(param_2,uVar3,param_4);
    if (lVar4 != 0) {
LAB_1804b3ac6:
      uVar5 = FUN_180494e90(param_1,lVar4);
      return uVar5;
    }
  }
  if (param_4 == 4) {
    uVar5 = 0xffff7fffffffffff;
    if (*param_3 == param_3[1]) {
      uVar5 = 0xfffeffffffffffff;
    }
    *(undefined8 *)(*(longlong *)(param_1 + 0x28) + -8) = uVar5;
    *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0xf0) = uVar5;
    return 1;
  }
  puVar1 = (undefined4 *)param_3[2];
  uVar9 = 0xd;
  if ((puVar1 == (undefined4 *)0x0) ||
     ((int)((longlong)**(undefined8 **)(param_1 + 0x20) >> 0x2f) != -0xb)) {
    uVar12 = 0xffffffff;
    uVar6 = (uint)((longlong)**(undefined8 **)(param_1 + 0x20) >> 0x2f);
    uVar8 = -(uint)(uVar6 != 0xfffffffb);
    if (uVar6 < 0xfffffff3) {
      uVar6 = 0xd;
    }
    else {
      uVar6 = ~uVar6;
    }
    puVar11 = (&PTR_DAT_18056e940)[uVar6];
  }
  else {
    uVar8 = 0xffffffff;
    uVar12 = -(uint)((byte)((uint)*puVar1 >> 0x1c) != 5);
    lVar4 = FUN_1804aba80(param_1,((longlong)puVar1 - *param_2) / 0x18,0);
    puVar11 = (undefined *)(lVar4 + 0x18);
  }
  puVar1 = (undefined4 *)param_3[3];
  apuStack_40[1] = puVar11;
  if ((puVar1 != (undefined4 *)0x0) &&
     ((int)((longlong)*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 8) >> 0x2f) == -0xb)) {
    if ((byte)((uint)*puVar1 >> 0x1c) == 5) {
      uVar12 = 1;
    }
    lVar4 = FUN_1804aba80(param_1,((longlong)puVar1 - *param_2) / 0x18,0);
    apuStack_40[2] = (undefined *)(lVar4 + 0x18);
    goto LAB_1804b3c58;
  }
  uVar6 = (uint)((longlong)*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 8) >> 0x2f);
  if (uVar6 == 0xfffffffb) {
    uVar8 = 1;
LAB_1804b3c4e:
    uVar9 = ~uVar6;
  }
  else if (0xfffffff2 < uVar6) goto LAB_1804b3c4e;
  apuStack_40[2] = (&PTR_DAT_18056e940)[uVar9];
LAB_1804b3c58:
  if ((uVar8 ^ uVar12) == 1) {
                    /* WARNING: Subroutine does not return */
    FUN_1804842f0(param_1,0xd47,apuStack_40[(longlong)(int)uVar8 + 1],
                  apuStack_40[(longlong)(int)uVar12 + 1]);
  }
  if (param_4 == 5) {
    uVar5 = 0xd63;
  }
  else if (param_4 == 8) {
    uVar5 = 0xd81;
  }
  else {
    uVar5 = 0xda6;
    if (param_4 < 10) {
      uVar5 = 0xdd5;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1804842f0(param_1,uVar5,puVar11);
}



/* ===== 1804b3cc0 FUN_1804b3cc0 ===== */

longlong FUN_1804b3cc0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = -0x8000000000000000;
  if (param_2 != 0) {
    if ((param_1 == -0x8000000000000000) && (param_2 == -1)) {
      return 0;
    }
    lVar1 = param_1 % param_2;
  }
  return lVar1;
}



/* ===== 1804b3cf0 FUN_1804b3cf0 ===== */

ulonglong FUN_1804b3cf0(ulonglong param_1,ulonglong param_2)

{
  if (param_2 == 0) {
    return 0x8000000000000000;
  }
  return param_1 % param_2;
}



/* ===== 1804b3d10 FUN_1804b3d10 ===== */

undefined8 FUN_1804b3d10(longlong param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 local_28 [32];
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x188);
  *(longlong *)(lVar1 + 0x10) = param_1;
  iVar2 = FUN_1804b2c40(param_1,lVar1,local_28);
  if (((iVar2 == 0) || (param_2 == 5)) || (param_2 == 8)) {
LAB_1804b3da4:
    uVar3 = FUN_1804b39b0(param_1,lVar1,local_28,param_2);
    return uVar3;
  }
  iVar2 = FUN_1804b2f70(param_1,lVar1,local_28,param_2);
  if (iVar2 == 0) {
    iVar2 = FUN_1804b3390(param_1,lVar1,local_28,param_2);
    if (iVar2 == 0) goto LAB_1804b3da4;
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0xf0) =
       *(undefined8 *)(*(longlong *)(param_1 + 0x28) + -8);
  return 1;
}



/* ===== 1804b3dd0 FUN_1804b3dd0 ===== */

longlong FUN_1804b3dd0(longlong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    if (-1 < (longlong)param_2) {
      uVar1 = param_2 & 1;
      while (uVar1 == 0) {
        param_1 = param_1 * param_1;
        uVar1 = param_2 & 2;
        param_2 = param_2 >> 1;
      }
      if (param_2 < 2) {
        return param_1;
      }
      lVar2 = param_1 * param_1;
      while (param_2 = param_2 >> 1, param_2 != 1) {
        if ((param_2 & 1) != 0) {
          param_1 = param_1 * lVar2;
        }
        lVar2 = lVar2 * lVar2;
      }
      return param_1 * lVar2;
    }
    if (param_1 == 0) {
      return 0x7fffffffffffffff;
    }
    if (param_1 != 1) {
      if (param_1 == -1) {
        return (ulonglong)(~(uint)param_2 & 1) * 2 + -1;
      }
      return 0;
    }
  }
  return 1;
}



/* ===== 1804b3e60 FUN_1804b3e60 ===== */

longlong FUN_1804b3e60(longlong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  while (uVar1 == 0) {
    param_1 = param_1 * param_1;
    uVar1 = param_2 & 2;
    param_2 = param_2 >> 1;
  }
  if (1 < param_2) {
    lVar2 = param_1 * param_1;
    while (param_2 = param_2 >> 1, param_2 != 1) {
      if ((param_2 & 1) != 0) {
        param_1 = param_1 * lVar2;
      }
      lVar2 = lVar2 * lVar2;
    }
    param_1 = param_1 * lVar2;
  }
  return param_1;
}



/* ===== 1804b3eb0 FUN_1804b3eb0 ===== */

ulonglong FUN_1804b3eb0(ulonglong param_1,byte param_2,int param_3)

{
  if (param_3 == 0) {
    param_1 = param_1 << (param_2 & 0x3f);
  }
  else {
    if (param_3 == 1) {
      return param_1 >> (param_2 & 0x3f);
    }
    if (param_3 == 2) {
      return (longlong)param_1 >> (param_2 & 0x3f);
    }
    if (param_3 == 3) {
      return param_1 >> (-(param_2 & 0x3f) & 0x3f) | param_1 << (param_2 & 0x3f);
    }
    if (param_3 == 4) {
      return param_1 << (-(param_2 & 0x3f) & 0x3f) | param_1 >> (param_2 & 0x3f);
    }
  }
  return param_1;
}



/* ===== 1804b3f20 FUN_1804b3f20 ===== */

int FUN_1804b3f20(longlong param_1,longlong *param_2,uint *param_3,longlong param_4)

{
  uint *puVar1;
  ushort uVar2;
  uint uVar3;
  ulonglong *puVar4;
  ulonglong *puVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  ulonglong uVar14;
  uint *puVar15;
  ulonglong uVar16;
  uint *puVar17;
  uint uVar18;
  byte bVar19;
  uint local_res10;
  int local_res18;
  int local_68;
  int local_64;
  ulonglong *local_58;
  
  uVar3 = *param_3;
  puVar4 = *(ulonglong **)(param_1 + 0x28);
  *(undefined8 *)(param_4 + 0x50) = 0;
  *(undefined8 *)(param_4 + 0x58) = 0;
  *(undefined8 *)(param_4 + 0x60) = 0;
  *(undefined8 *)(param_4 + 0x68) = 0;
  *(undefined8 *)(param_4 + 0x10) = 0;
  *(undefined8 *)(param_4 + 0x18) = 0;
  *(undefined8 *)(param_4 + 0x20) = 0;
  *(undefined8 *)(param_4 + 0x28) = 0;
  *(undefined8 *)(param_4 + 0x30) = 0;
  *(undefined8 *)(param_4 + 0x38) = 0;
  *(undefined8 *)(param_4 + 0x40) = 0;
  *(undefined8 *)(param_4 + 0x48) = 0;
  puVar15 = param_3;
  do {
    uVar9 = *(uint *)(*param_2 + (ulonglong)(ushort)*puVar15 * 0x18);
    puVar15 = (uint *)(*param_2 + (ulonglong)(ushort)*puVar15 * 0x18);
  } while (uVar9 >> 0x1c == 8);
  if ((uVar9 & 0xf8000000) == 0x38000000) {
LAB_1804b444b:
                    /* WARNING: Subroutine does not return */
    FUN_180484220(param_1,0xf2b);
  }
  local_64 = 0;
  local_68 = 0;
  uVar18 = 0;
  local_res10 = 0;
  if (((uVar9 & 0xf4000000) == 0x34000000) || (uVar9 >> 0x1c == 1)) {
    uVar9 = puVar15[1];
    uVar10 = FUN_1804916f0(param_2[2],(ulonglong)uVar9 + 0x10);
    *(undefined1 *)(uVar10 + 9) = 10;
    *(short *)(uVar10 + 10) = (short)uVar3;
    puVar5 = *(ulonglong **)(param_1 + 0x28);
    *(ulonglong **)(param_1 + 0x28) = puVar5 + 1;
    *puVar5 = uVar10 | 0xfffa800000000000;
    if ((uVar9 < 9) && ((0x116U >> (uVar9 & 0x1f) & 1) != 0)) {
      *(undefined1 *)(param_4 + 0xd) = 0;
    }
    else {
      *(undefined1 *)(param_4 + 0xd) = 1;
      uVar18 = 1;
      *(ulonglong *)(param_4 + 0x50) = uVar10 + 0x10;
    }
  }
  uVar10 = (ulonglong)(ushort)param_3[2];
  if ((ushort)param_3[2] != 0) {
    do {
      if ((byte)((uint)*(undefined4 *)(*param_2 + uVar10 * 0x18) >> 0x1c) != 8) break;
      uVar2 = *(ushort *)(*param_2 + 8 + uVar10 * 0x18);
      uVar10 = (ulonglong)uVar2;
    } while (uVar2 != 0);
  }
  local_58 = (ulonglong *)(*(longlong *)(param_1 + 0x20) + 8);
  iVar12 = 0;
  uVar9 = 0;
  if (local_58 < puVar4) {
    local_res18 = 1;
    do {
      if ((int)uVar10 == 0) {
        if ((uVar3 & 0x800000) == 0) goto LAB_1804b4461;
        uVar9 = (uint)((longlong)*local_58 >> 0x2f);
        if (uVar9 < 0xfffffff3) {
          uVar16 = 0x10;
        }
        else if (uVar9 == 0xfffffff5) {
          uVar2 = *(ushort *)((*local_58 & 0x7fffffffffff) + 10);
          uVar16 = (ulonglong)uVar2;
          uVar13 = (uint)uVar2;
          uVar9 = *(uint *)(*param_2 + uVar16 * 0x18);
          if ((uVar9 & 0xfc000000) == 0x30000000) {
            uVar13 = uVar9 & 0xffff;
          }
          else if ((uVar9 >> 0x1c != 1) && (uVar9 >> 0x1c != 6)) {
            if (((uVar9 & 0xf4000000) == 0x4000000) && (*(int *)(*param_2 + 4 + uVar16 * 0x18) == 4)
               ) {
              uVar16 = 0x10;
            }
            goto LAB_1804b41c2;
          }
          uVar9 = FUN_1804ab7b0(param_2,uVar13 | 0x20030000,8);
          uVar16 = (ulonglong)uVar9;
        }
        else if (uVar9 == 0xfffffffb) {
          uVar16 = 0x15;
        }
        else {
          uVar16 = 3;
          if (1 < uVar9 + 3) {
            uVar16 = 0x13;
          }
        }
LAB_1804b41c2:
        bVar7 = true;
      }
      else {
        bVar7 = false;
        uVar16 = (ulonglong)*(ushort *)(*param_2 + uVar10 * 0x18);
        uVar10 = (ulonglong)*(ushort *)(*param_2 + 8 + uVar10 * 0x18);
      }
      lVar11 = *param_2;
      bVar6 = false;
      puVar15 = (uint *)0x0;
      uVar9 = *(uint *)(lVar11 + uVar16 * 0x18);
      bVar19 = (byte)(uVar9 >> 0x18);
      uVar14 = uVar16;
      while (bVar19 >> 4 == 8) {
        uVar14 = (ulonglong)*(ushort *)(lVar11 + uVar14 * 0x18);
        uVar9 = *(uint *)(lVar11 + uVar14 * 0x18);
        bVar19 = (byte)(uVar9 >> 0x18);
      }
      uVar13 = *(uint *)(lVar11 + 4 + uVar14 * 0x18);
      puVar1 = (uint *)(lVar11 + uVar14 * 0x18);
      if (uVar9 < 0x10000000) {
        if (8 < uVar13) goto LAB_1804b444b;
        if ((uVar9 >> 0x1a & 1) != 0) {
          bVar6 = true;
        }
      }
      else {
        if ((uVar9 & 0xf8000000) == 0x38000000) goto LAB_1804b444b;
        if ((byte)(uVar9 >> 0x1c) == 1) {
          if ((8 < uVar13) || ((0x116U >> (uVar13 & 0x1f) & 1) == 0)) {
LAB_1804b4273:
            lVar11 = FUN_1804916f0(param_2[2],(ulonglong)uVar13 + 0x10);
            *(short *)(lVar11 + 10) = (short)uVar16;
            puVar15 = (uint *)(lVar11 + 0x10);
            *(undefined1 *)(lVar11 + 9) = 10;
            goto LAB_1804b428d;
          }
        }
        else if ((uVar9 & 0xf4000000) == 0x34000000) {
          if (uVar13 != 8) goto LAB_1804b4273;
        }
        else {
LAB_1804b428d:
          uVar13 = 8;
        }
      }
      if (uVar18 < 4) {
        uVar16 = (ulonglong)uVar18;
        uVar18 = uVar18 + 1;
        if (bVar6) {
          puVar17 = (uint *)(uVar16 * 0x10 + param_4 + 0x10);
          local_res10 = uVar18;
        }
        else {
          puVar17 = (uint *)(uVar16 * 8 + 0x50 + param_4);
        }
      }
      else {
        if (puVar15 == (uint *)0x0) {
          iVar8 = 1 << ((byte)*(undefined2 *)((longlong)puVar1 + 2) & 0xf);
          iVar12 = iVar8 + -1;
          uVar9 = -iVar8;
        }
        else {
          iVar12 = 7;
          uVar9 = 0xfffffff8;
        }
        uVar9 = iVar12 + local_68 & uVar9;
        local_68 = (uVar13 + 7 & 0xfffffff8) + uVar9;
        if (0xf8 < local_68) goto LAB_1804b444b;
        puVar17 = (uint *)((ulonglong)uVar9 + 0x70 + param_4);
        bVar7 = false;
      }
      if (puVar15 != (uint *)0x0) {
        local_64 = local_64 + 1;
        *(uint **)puVar17 = puVar15;
        puVar17 = puVar15;
      }
      FUN_1804b23e0(param_2,puVar1,puVar17,local_58,local_res18 << 8);
      if (((*puVar1 & 0xf4000000) == 0) && (uVar9 = puVar1[1], uVar9 < 4)) {
        if ((*puVar1 >> 0x17 & 1) == 0) {
          if (uVar9 == 1) {
            uVar9 = (uint)(char)(byte)*puVar17;
          }
          else {
            uVar9 = (uint)(short)(ushort)*puVar17;
          }
        }
        else if (uVar9 == 1) {
          uVar9 = (uint)(byte)*puVar17;
        }
        else {
          uVar9 = (uint)(ushort)*puVar17;
        }
        *puVar17 = uVar9;
      }
      if (bVar7) {
        uVar9 = uVar18 - 1;
        if (local_res10 == uVar18) {
          *(undefined8 *)(param_4 + 0x50 + (ulonglong)uVar9 * 8) =
               *(undefined8 *)(param_4 + 0x10 + (ulonglong)uVar9 * 0x10);
        }
        else {
          *(undefined8 *)(param_4 + 0x10 + (ulonglong)uVar9 * 0x10) =
               *(undefined8 *)(param_4 + 0x50 + (ulonglong)uVar9 * 8);
        }
      }
      local_res18 = local_res18 + 1;
      local_58 = local_58 + 1;
    } while (local_58 < puVar4);
    iVar12 = local_68;
    uVar9 = local_res10;
  }
  if ((int)uVar10 == 0) {
    *(char *)(param_4 + 0xf) = (char)uVar9;
    bVar19 = (char)iVar12 + 7U & 0xf8;
    *(undefined4 *)(param_4 + 8) = 0x28;
    *(byte *)(param_4 + 0xc) = bVar19;
    if (8 < bVar19) {
      *(uint *)(param_4 + 8) = (bVar19 & 0xfffffff0) + 0x28;
    }
    return local_64;
  }
LAB_1804b4461:
                    /* WARNING: Subroutine does not return */
  FUN_180484220(param_1,0xe0c);
}



/* ===== 1804b4470 FUN_1804b4470 ===== */

ulonglong FUN_1804b4470(longlong *param_1,ulonglong *param_2)

{
  ushort uVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  
  uVar2 = (uint)((longlong)*param_2 >> 0x2f);
  if (uVar2 < 0xfffffff3) {
    return 0x10;
  }
  if (uVar2 == 0xfffffff5) {
    uVar1 = *(ushort *)((*param_2 & 0x7fffffffffff) + 10);
    uVar3 = (ulonglong)uVar1;
    uVar4 = (uint)uVar1;
    uVar2 = *(uint *)(*param_1 + uVar3 * 0x18);
    if ((uVar2 & 0xfc000000) == 0x30000000) {
      uVar4 = uVar2 & 0xffff;
    }
    else if ((uVar2 >> 0x1c != 1) && (uVar2 >> 0x1c != 6)) {
      if ((uVar2 & 0xf4000000) != 0x4000000) {
        return uVar3;
      }
      if (*(int *)(*param_1 + 4 + uVar3 * 0x18) == 4) {
        uVar3 = 0x10;
      }
      return uVar3;
    }
    uVar3 = FUN_1804ab7b0(param_1,uVar4 | 0x20030000,8);
    return uVar3;
  }
  if (uVar2 == 0xfffffffb) {
    return 0x15;
  }
  if (uVar2 == 0xfffffffe) {
    return 3;
  }
  uVar4 = 3;
  if (uVar2 != 0xfffffffd) {
    uVar4 = 0x13;
  }
  return (ulonglong)uVar4;
}



/* ===== 1804b4530 FUN_1804b4530 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1804b4530(longlong param_1,longlong param_2)

{
  ushort uVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined8 *puVar8;
  byte bVar9;
  longlong lVar10;
  ushort *puVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  undefined1 auStack_1d8 [32];
  undefined8 *local_1b8;
  ulonglong local_1a8 [2];
  ulonglong local_198;
  char local_18b;
  undefined8 local_188 [8];
  undefined8 local_148 [36];
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_1d8;
  plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x188);
  plVar3[2] = param_1;
  uVar13 = (ulonglong)*(ushort *)(param_2 + 10);
  lVar10 = *plVar3;
  bVar9 = (byte)((uint)*(undefined4 *)(lVar10 + uVar13 * 0x18) >> 0x18);
  while (bVar9 >> 4 == 8) {
    uVar13 = (ulonglong)*(ushort *)(lVar10 + uVar13 * 0x18);
    bVar9 = (byte)((uint)*(undefined4 *)(lVar10 + uVar13 * 0x18) >> 0x18);
  }
  puVar11 = (ushort *)(lVar10 + uVar13 * 0x18);
  if (bVar9 >> 4 == 2) {
    iVar5 = *(int *)(puVar11 + 2);
    do {
      uVar1 = *puVar11;
      puVar11 = (ushort *)(lVar10 + (ulonglong)uVar1 * 0x18);
      bVar9 = (byte)((uint)*(undefined4 *)(lVar10 + (ulonglong)uVar1 * 0x18) >> 0x18);
    } while (bVar9 >> 4 == 8);
  }
  else {
    iVar5 = 8;
  }
  if (bVar9 >> 4 == 6) {
    lVar10 = ((longlong)puVar11 - lVar10) / 6 + ((longlong)puVar11 - lVar10 >> 0x3f);
    if (iVar5 == 4) {
      local_198 = (ulonglong)*(uint *)(param_2 + 0x10);
    }
    else {
      local_198 = *(ulonglong *)(param_2 + 0x10);
    }
    iVar5 = FUN_1804b3f20(param_1,plVar3,puVar11,&local_198);
    *(undefined4 *)(plVar3 + 0x19) = 0xffffffff;
    FUN_180005499(&local_198);
    if ((int)plVar3[0x19] != -1) {
      local_1a8[0] = local_198 >> 2;
      puVar8 = (undefined8 *)FUN_1804931f0(param_1,plVar3[4],local_1a8);
      *puVar8 = 0xfffeffffffffffff;
    }
    lVar4 = *plVar3;
    puVar11 = (ushort *)(lVar4 + ((lVar10 >> 2) - (lVar10 >> 0x3f) & 0xffffffffU) * 0x18);
    do {
      uVar1 = *puVar11;
      puVar11 = (ushort *)(lVar4 + (ulonglong)uVar1 * 0x18);
      uVar2 = *(uint *)(lVar4 + (ulonglong)uVar1 * 0x18);
      uVar6 = uVar2 >> 0x1c;
    } while (uVar6 == 8);
    if (uVar6 == 4) {
      uVar12 = 0;
      iVar7 = 0;
    }
    else {
      uVar12 = 1;
      if (uVar6 == 1) {
        if (local_18b == '\0') {
          FUN_180540530((*(ulonglong *)(*(longlong *)(param_1 + 0x28) + -8) & 0x7fffffffffff) + 0x10
                        ,local_148,*(undefined4 *)(puVar11 + 2));
        }
        iVar7 = 1;
      }
      else if ((uVar2 & 0xf4000000) == 0x34000000) {
        if (local_18b == '\0') {
          *(undefined8 *)
           ((*(ulonglong *)(*(longlong *)(param_1 + 0x28) + -8) & 0x7fffffffffff) + 0x10) =
               local_148[0];
        }
        iVar7 = 1;
      }
      else {
        if (((uVar2 & 0xf4000000) == 0x4000000) ||
           (local_1b8 = local_148, (uVar2 & 0xf8000000) == 0x38000000)) {
          local_1b8 = local_188;
        }
        iVar7 = FUN_1804b2aa0(plVar3,puVar11,0,*(longlong *)(param_1 + 0x28) + -8);
      }
    }
    iVar5 = iVar5 + iVar7;
    while (0 < iVar5) {
      iVar5 = iVar5 + -1;
      if (*(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x18) <=
          *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x10)) {
        FUN_180491200(param_1);
      }
    }
  }
  else {
    uVar12 = 0xffffffff;
  }
  return uVar12;
}



/* ===== 1804b47c0 FUN_1804b47c0 ===== */

void FUN_1804b47c0(longlong *param_1,ulonglong param_2)

{
  ushort *puVar1;
  ushort uVar2;
  uint uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  int iVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  ushort *puVar11;
  int iVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  
  puVar4 = *(undefined8 **)(param_2 + 0x28);
  uVar13 = *(uint *)(param_1 + 0x19);
  lVar5 = param_1[0x15];
  if ((uVar13 < *(uint *)(param_1 + 0x18)) &&
     (uVar2 = *(ushort *)(param_1[0x17] + (ulonglong)uVar13 * 2), uVar2 != 0)) {
    uVar14 = (ulonglong)*(ushort *)(*param_1 + (ulonglong)uVar2 * 0x18);
    lVar15 = *param_1 + (ulonglong)uVar2 * 0x18;
    lVar16 = param_1[4];
    if (uVar13 < *(uint *)(lVar16 + 0x30)) {
      puVar7 = (ulonglong *)(*(longlong *)(lVar16 + 0x10) + (longlong)(int)uVar13 * 8);
    }
    else {
      puVar7 = (ulonglong *)FUN_1804927e0(lVar16);
    }
    uVar8 = 0xfffb800000000000;
    uVar10 = *puVar7 & 0x7fffffffffff;
  }
  else {
    lVar15 = 0;
    uVar14 = 0;
    uVar8 = 0xfffc800000000000;
    uVar10 = param_2;
  }
  *puVar4 = 1;
  puVar4[1] = uVar14;
  puVar4[2] = uVar8 | uVar10;
  puVar4[3] = (longlong)puVar4 + (0x22 - *(longlong *)(param_2 + 0x20));
  *(undefined8 **)(param_2 + 0x20) = puVar4 + 4;
  *(undefined8 **)(param_2 + 0x28) = puVar4 + 4;
  if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_180484220(param_1[2],0xef4);
  }
  iVar12 = 0;
  uVar8 = 0;
  uVar13 = 0;
  if (*(char *)(uVar10 + 10) == '\0') {
    *(longlong *)(*(longlong *)(param_2 + 0x50) + 0x60) = *(longlong *)(uVar10 + 0x20) + 4;
  }
  if (*(longlong *)(param_2 + 0x30) - *(longlong *)(param_2 + 0x28) < 0xa1) {
    FUN_18048e920(param_2,0x14);
  }
  lVar16 = *(longlong *)(param_2 + 0x20);
  uVar2 = *(ushort *)(lVar15 + 8);
  while (uVar2 != 0) {
    lVar15 = *param_1;
    puVar1 = (ushort *)(lVar15 + (ulonglong)uVar2 * 0x18);
    if ((byte)((uint)*(undefined4 *)(lVar15 + (ulonglong)uVar2 * 0x18) >> 0x1c) != 8) {
      puVar11 = puVar1;
      do {
        uVar2 = *puVar11;
        puVar11 = (ushort *)(lVar15 + (ulonglong)uVar2 * 0x18);
        uVar3 = *(uint *)(lVar15 + (ulonglong)uVar2 * 0x18);
      } while ((byte)(uVar3 >> 0x1c) == 8);
      if (uVar13 < 4) {
        if ((uVar3 & 0xf4000000) == 0x4000000) {
          plVar9 = param_1 + (ulonglong)uVar13 + 5;
          uVar13 = uVar13 + 1;
        }
        else {
          plVar9 = param_1 + (ulonglong)uVar13 + 0xd;
          uVar13 = uVar13 + 1;
        }
      }
      else {
        plVar9 = (longlong *)(uVar8 * 8 + lVar5);
        uVar8 = (ulonglong)((int)uVar8 + (*(int *)(puVar11 + 2) + 7U >> 3));
      }
      iVar6 = FUN_1804b2aa0(param_1,puVar11,0,lVar16,plVar9);
      iVar12 = iVar12 + iVar6;
      lVar16 = lVar16 + 8;
    }
    uVar2 = puVar1[4];
  }
  *(longlong *)(param_2 + 0x28) = lVar16;
  while (0 < iVar12) {
    iVar12 = iVar12 + -1;
    if (*(ulonglong *)(*(longlong *)(param_2 + 0x10) + 0x18) <=
        *(ulonglong *)(*(longlong *)(param_2 + 0x10) + 0x10)) {
      FUN_180491200(param_2);
    }
  }
  return;
}



/* ===== 1804b49f0 FUN_1804b49f0 ===== */

uint FUN_1804b49f0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  undefined8 *lpAddress;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  uint uVar7;
  uint uVar8;
  DWORD local_res8 [2];
  
  lVar1 = *param_1;
  lVar5 = param_1[0x17];
  for (uVar8 = *(uint *)((longlong)param_1 + 0xc4); uVar8 < *(uint *)(param_1 + 0x18);
      uVar8 = uVar8 + 1) {
    if (*(short *)(lVar5 + (ulonglong)uVar8 * 2) == 0) goto LAB_1804b4b84;
  }
  if (0x37f < uVar8) {
                    /* WARNING: Subroutine does not return */
    FUN_180484220(param_1[2],0xf01);
  }
  if (param_1[0x16] == 0) {
    lpAddress = VirtualAlloc((LPVOID)0x0,0x1000,0x3000,4);
    if (lpAddress == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_180484220(param_1[2],0xf01);
    }
    lVar2 = param_1[3];
    puVar6 = lpAddress + 1;
    param_1[0x16] = (longlong)lpAddress;
    uVar7 = 0;
    *lpAddress = &LAB_1800053cb;
    do {
      *(undefined1 *)puVar6 = 0xb0;
      bVar3 = (byte)uVar7;
      *(byte *)((longlong)puVar6 + 1) = bVar3;
      if (((bVar3 & 0x1f) == 0x1f) || (uVar7 == 0x37f)) {
        *(undefined2 *)((longlong)puVar6 + 2) = 0xb455;
        *(char *)((longlong)puVar6 + 4) = (char)(uVar7 >> 8);
        *(undefined2 *)((longlong)puVar6 + 5) = 0xbd48;
        *(longlong *)((longlong)puVar6 + 7) = lVar2;
        *(undefined2 *)((longlong)puVar6 + 0xf) = 0x25ff;
        *(int *)((longlong)puVar6 + 0x11) =
             ((int)lpAddress - (int)(int *)((longlong)puVar6 + 0x11)) + -4;
        lVar4 = 0x15;
      }
      else {
        *(undefined1 *)((longlong)puVar6 + 2) = 0xeb;
        *(byte *)((longlong)puVar6 + 3) = (bVar3 & 0x1f) * -4 + 'z';
        lVar4 = 4;
      }
      uVar7 = uVar7 + 1;
      puVar6 = (undefined8 *)(lVar4 + (longlong)puVar6);
    } while (uVar7 < 0x380);
    _guard_check_icall(lpAddress,lpAddress + 0x200);
    VirtualProtect(lpAddress,0x1000,0x20,local_res8);
  }
  lVar5 = FUN_180491670(param_1[2],lVar5,param_1 + 0x18,0x380,2);
  param_1[0x17] = lVar5;
  FUN_180540170(lVar5 + (ulonglong)uVar8 * 2,0,(ulonglong)((int)param_1[0x18] - uVar8) * 2);
LAB_1804b4b84:
  *(short *)(lVar5 + (ulonglong)uVar8 * 2) = (short)((param_2 - lVar1) / 0x18);
  *(uint *)((longlong)param_1 + 0xc4) = uVar8 + 1;
  return uVar8;
}



/* ===== 1804b4bf0 FUN_1804b4bf0 ===== */

longlong FUN_1804b4bf0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x10);
  if (*(longlong *)(lVar1 + 0x180) == 0) {
    *(uint *)(lVar1 + 0x3d4) = *(uint *)(lVar1 + 0x3d4) & 0xffffffef;
    *(longlong *)(lVar1 + 0x178) = lVar2;
    *(undefined8 *)(param_2 + 0x68) = *(undefined8 *)(lVar2 + 0x50);
    *(longlong *)(param_2 + 0x58) = lVar2;
    *(undefined4 *)(param_2 + 0x54) = 0xffffffff;
    *(undefined4 *)(param_2 + 0x50) = 0;
    *(longlong *)(lVar2 + 0x50) = param_2;
    FUN_1804b47c0(param_1,lVar2);
    return lVar2;
  }
  puVar3 = *(ulonglong **)(lVar2 + 0x28);
  *(ulonglong **)(lVar2 + 0x28) = puVar3 + 1;
  uVar4 = FUN_1804848e0(lVar2,0xef4);
  *puVar3 = uVar4 | 0xfffd800000000000;
  if (*(code **)(lVar1 + 0x168) != (code *)0x0) {
    (**(code **)(lVar1 + 0x168))(lVar2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_18051c3d4(1);
}



/* ===== 1804b4ca0 FUN_1804b4ca0 ===== */

void FUN_1804b4ca0(longlong *param_1,ulonglong param_2)

{
  uint *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  byte bVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong *puVar8;
  
  lVar2 = param_1[2];
  uVar6 = *(ulonglong *)(lVar2 + 0x28);
  uVar3 = *(undefined8 *)(lVar2 + 0x20);
  *(ulonglong *)(lVar2 + 0x20) = uVar6;
  if ((uVar6 <= param_2) &&
     (uVar6 = *(ulonglong *)(uVar6 - 0x10) & 0x7fffffffffff, *(char *)(uVar6 + 10) == '\0')) {
    lVar7 = *(longlong *)(uVar6 + 0x20);
    *(ulonglong *)(*(longlong *)(lVar2 + 0x50) + 0x60) =
         lVar7 + ((ulonglong)*(uint *)(lVar7 + -0x5c) + 1) * 4;
  }
  lVar7 = *param_1;
  uVar6 = (ulonglong)*(ushort *)(*(longlong *)(lVar2 + 0x20) + -0x18);
  uVar5 = *(uint *)(lVar7 + uVar6 * 0x18);
  bVar4 = (byte)(uVar5 >> 0x18);
  while (bVar4 >> 4 == 8) {
    uVar6 = (ulonglong)*(ushort *)(lVar7 + uVar6 * 0x18);
    uVar5 = *(uint *)(lVar7 + uVar6 * 0x18);
    bVar4 = (byte)(uVar5 >> 0x18);
  }
  if ((byte)(uVar5 >> 0x1c) != 4) {
    puVar1 = (uint *)(lVar7 + uVar6 * 0x18);
    lVar7 = 0x28;
    if ((uVar5 & 0xf4000000) != 0x4000000) {
      lVar7 = 0x68;
    }
    puVar8 = (ulonglong *)(lVar7 + (longlong)param_1);
    FUN_1804b23e0(param_1,puVar1,puVar8,param_2,0);
    if (((*puVar1 & 0xf4000000) == 0) && (uVar5 = puVar1[1], uVar5 < 4)) {
      if ((*puVar1 >> 0x17 & 1) == 0) {
        if (uVar5 == 1) {
          uVar5 = (uint)(char)(byte)*puVar8;
        }
        else {
          uVar5 = (uint)(short)(ushort)*puVar8;
        }
      }
      else if (uVar5 == 1) {
        uVar5 = (uint)(byte)*puVar8;
      }
      else {
        uVar5 = (uint)(ushort)*puVar8;
      }
      *(uint *)puVar8 = uVar5;
    }
    if ((puVar1[1] < 5) && ((*puVar1 & 0xf4000000) == 0)) {
      *puVar8 = (ulonglong)(uint)*puVar8;
    }
  }
  *(longlong *)(lVar2 + 0x28) = *(longlong *)(lVar2 + 0x28) + -0x20;
  *(undefined8 *)(lVar2 + 0x20) = uVar3;
  *(undefined8 *)(lVar2 + 0x50) = *(undefined8 *)(*(longlong *)(lVar2 + 0x50) + 0x68);
  *(undefined4 *)(param_1 + 0x19) = 0;
  return;
}



/* ===== 1804b4e20 FUN_1804b4e20 ===== */

void FUN_1804b4e20(longlong param_1)

{
  if (*(LPVOID *)(param_1 + 0xb0) == (LPVOID)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001804b4e34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  VirtualFree(*(LPVOID *)(param_1 + 0xb0),0,0x8000);
  return;
}



/* ===== 1804b4e40 FUN_1804b4e40 ===== */

longlong FUN_1804b4e40(longlong *param_1,ushort *param_2,ulonglong param_3)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  ulonglong *puVar6;
  uint uVar7;
  ushort *puVar8;
  ushort *puVar9;
  int iVar10;
  
  if (((byte)((uint)*(undefined4 *)param_2 >> 0x1c) == 2) && (*(int *)(param_2 + 2) == 8)) {
    lVar2 = *param_1;
    do {
      uVar5 = *(uint *)(lVar2 + (ulonglong)*param_2 * 0x18);
      param_2 = (ushort *)(lVar2 + (ulonglong)*param_2 * 0x18);
      uVar4 = uVar5 >> 0x1c;
    } while (uVar4 == 8);
    if (uVar4 == 6) {
      puVar9 = param_2;
      do {
        uVar4 = *(uint *)(lVar2 + (ulonglong)*puVar9 * 0x18);
        puVar9 = (ushort *)(lVar2 + (ulonglong)*puVar9 * 0x18);
        uVar7 = uVar4 >> 0x1c;
      } while (uVar7 == 8);
      if (((((uVar7 - 2 & 0xfffffffc) == 0) && (uVar7 != 3)) ||
          ((uVar4 < 0x10000000 && (*(uint *)(puVar9 + 2) < 9)))) && ((uVar5 >> 0x17 & 1) == 0)) {
        uVar1 = param_2[4];
        if (uVar1 != 0) {
          iVar10 = 0;
          do {
            puVar9 = (ushort *)(lVar2 + (ulonglong)uVar1 * 0x18);
            if ((byte)((uint)*(undefined4 *)(lVar2 + (ulonglong)uVar1 * 0x18) >> 0x1c) != 8) {
              puVar8 = puVar9;
              do {
                uVar5 = *(uint *)(lVar2 + (ulonglong)*puVar8 * 0x18);
                puVar8 = (ushort *)(lVar2 + (ulonglong)*puVar8 * 0x18);
                uVar4 = uVar5 >> 0x1c;
              } while (uVar4 == 8);
              if ((uVar4 != 5) && (uVar4 != 2)) {
                if (0xfffffff < uVar5) {
                  return 0;
                }
                if (8 < *(uint *)(puVar8 + 2)) {
                  return 0;
                }
              }
              iVar10 = iVar10 + 1;
              if (0x10 < iVar10) {
                return 0;
              }
            }
            uVar1 = puVar9[4];
          } while (uVar1 != 0);
        }
        uVar5 = FUN_1804b49f0(param_1,param_2);
        lVar2 = param_1[4];
        if (uVar5 < *(uint *)(lVar2 + 0x30)) {
          puVar6 = (ulonglong *)(*(longlong *)(lVar2 + 0x10) + (longlong)(int)uVar5 * 8);
        }
        else {
          puVar6 = (ulonglong *)FUN_180493360(param_1[2],lVar2,uVar5);
        }
        *puVar6 = param_3 | 0xfffb800000000000;
        if ((*(byte *)(lVar2 + 8) & 4) != 0) {
          lVar3 = *(longlong *)(param_1[2] + 0x10);
          *(byte *)(lVar2 + 8) = *(byte *)(lVar2 + 8) & 0xfb;
          *(undefined8 *)(lVar2 + 0x18) = *(undefined8 *)(lVar3 + 0x40);
          *(longlong *)(lVar3 + 0x40) = lVar2;
        }
        return (ulonglong)((uVar5 >> 5) * 0x11 + uVar5 * 4 + 8) + param_1[0x16];
      }
    }
  }
  return 0;
}



/* ===== 1804b5020 FUN_1804b5020 ===== */

uint FUN_1804b5020(longlong param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  
  uVar6 = param_2 - *(longlong *)(param_1 + 0xb0);
  if (0xfff < uVar6) {
    return 0xffffffff;
  }
  iVar1 = (int)uVar6;
  uVar5 = iVar1 - 8;
  uVar2 = uVar5 / 0x91;
  uVar5 = uVar5 % 0x91;
  uVar4 = (uVar5 >> 2) + uVar2 * 0x20;
  uVar3 = 0xffffffff;
  if ((uVar4 >> 5) * 0x11 + (uVar5 & 0xfffffffc) + (uVar2 << 7 | 8) == iVar1) {
    uVar3 = uVar4;
  }
  return uVar3;
}



/* ===== 1804b5090 FUN_1804b5090 ===== */

void FUN_1804b5090(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  DWORD DVar1;
  undefined8 uVar2;
  CHAR local_98 [128];
  
  DVar1 = GetLastError();
  DVar1 = FormatMessageA(0x1200,(LPCVOID)0x0,DVar1,0,local_98,0x80,(va_list *)0x0);
  if (DVar1 == 0) {
    local_98[0] = '\0';
  }
  uVar2 = FUN_180498630(param_1,param_2,param_3,local_98);
                    /* WARNING: Subroutine does not return */
  FUN_180484240(param_1,uVar2);
}



/* ===== 1804b5100 FUN_1804b5100 ===== */

longlong FUN_1804b5100(longlong param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  
  uVar2 = FUN_180492ab0(param_1,0,0);
  uVar3 = FUN_180493f30(param_1,0x10,uVar2);
  *(undefined8 *)(uVar3 + 0x38) = uVar2;
  *(undefined1 *)(uVar3 + 10) = 2;
  *(undefined8 *)(uVar3 + 0x20) = param_2;
  puVar1 = *(ulonglong **)(param_1 + 0x28);
  *(ulonglong **)(param_1 + 0x28) = puVar1 + 1;
  *puVar1 = uVar3 | 0xfff9800000000000;
  return uVar3 + 0x30;
}



/* ===== 1804b5180 FUN_1804b5180 ===== */

void FUN_1804b5180(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1804b5100();
  *puVar1 = 0xffffffffffffffff;
  return;
}



/* ===== 1804b51a0 FUN_1804b51a0 ===== */

double * FUN_1804b51a0(longlong param_1,undefined8 *param_2,longlong param_3)

{
  LPCSTR lpProcName;
  ushort uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  int iVar6;
  DWORD dwErrCode;
  double *pdVar7;
  LPCSTR lpModuleName;
  FARPROC pFVar8;
  ulonglong uVar9;
  char *lpLibFileName;
  uint uVar10;
  HMODULE local_48;
  uint *local_40;
  
  pdVar7 = (double *)FUN_180493400(param_1,param_2[1]);
  if (*pdVar7 == -NAN) {
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x188);
    plVar2[2] = param_1;
    iVar6 = FUN_1804ab370(plVar2,&local_40,param_3,0x1840);
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1804842f0(param_1,0xed0,param_3 + 0x18);
    }
    if ((byte)(*local_40 >> 0x1c) == 0xb) {
      if (((*(uint *)(*plVar2 + ((ulonglong)*local_40 & 0xffff) * 0x18) & 0x800000) == 0) ||
         (-1 < (int)local_40[1])) {
        *pdVar7 = (double)(int)local_40[1];
      }
      else {
        *pdVar7 = (double)local_40[1];
      }
    }
    else {
      uVar1 = (ushort)local_40[2];
      if ((uVar1 != 0) &&
         ((*(uint *)(*plVar2 + (ulonglong)uVar1 * 0x18) & 0xf0ff0000) == 0x80040000)) {
        param_3 = *(longlong *)(*plVar2 + 0x10 + (ulonglong)uVar1 * 0x18);
      }
      lpProcName = (LPCSTR)(param_3 + 0x18);
      dwErrCode = GetLastError();
      if ((HMODULE)*param_2 == (HMODULE)0xffffffffffffffff) {
        pFVar8 = (FARPROC)0x0;
        uVar9 = 0;
        do {
          lpModuleName = (LPCSTR)&DAT_180c9ec58;
          local_48 = (HMODULE)(&DAT_180c9ec58)[uVar9];
          if (local_48 != (HMODULE)0x0) goto LAB_1804b5343;
          switch(uVar9) {
          default:
            GetModuleHandleExA(2,(LPCSTR)0x0,&local_48);
            goto LAB_1804b5333;
          case 2:
            lpModuleName = (LPCSTR)FUN_18051ff18();
          case 1:
            GetModuleHandleExA(6,lpModuleName,&local_48);
            goto LAB_1804b5333;
          case 3:
            lpLibFileName = "kernel32.dll";
            break;
          case 4:
            lpLibFileName = "user32.dll";
            break;
          case 5:
            lpLibFileName = "gdi32.dll";
          }
          local_48 = LoadLibraryExA(lpLibFileName,(HANDLE)0x0,0);
LAB_1804b5333:
          if (local_48 != (HMODULE)0x0) {
            (&DAT_180c9ec58)[uVar9] = local_48;
LAB_1804b5343:
            pFVar8 = GetProcAddress(local_48,lpProcName);
            if (pFVar8 != (FARPROC)0x0) goto LAB_1804b5387;
          }
          uVar10 = (int)uVar9 + 1;
          uVar9 = (ulonglong)uVar10;
        } while (uVar10 < 6);
      }
      else {
        pFVar8 = GetProcAddress((HMODULE)*param_2,lpProcName);
      }
      if (pFVar8 == (FARPROC)0x0) {
        FUN_1804b5090(param_1,"cannot resolve symbol \'%s\': %s",lpProcName);
        pcVar5 = (code *)swi(3);
        pdVar7 = (double *)(*pcVar5)();
        return pdVar7;
      }
LAB_1804b5387:
      SetLastError(dwErrCode);
      uVar9 = FUN_1804916f0(plVar2[2],0x18);
      *(short *)(uVar9 + 10) = (short)iVar6;
      *(undefined1 *)(uVar9 + 9) = 10;
      *(FARPROC *)(uVar9 + 0x10) = pFVar8;
      *pdVar7 = (double)(uVar9 | 0xfffa800000000000);
      lVar3 = param_2[1];
      if ((*(byte *)(lVar3 + 8) & 4) != 0) {
        lVar4 = *(longlong *)(param_1 + 0x10);
        *(byte *)(lVar3 + 8) = *(byte *)(lVar3 + 8) & 0xfb;
        *(undefined8 *)(lVar3 + 0x18) = *(undefined8 *)(lVar4 + 0x40);
        *(longlong *)(lVar4 + 0x40) = lVar3;
      }
    }
  }
  return pdVar7;
}



/* ===== 1804b5440 FUN_1804b5440 ===== */

void FUN_1804b5440(longlong param_1,undefined8 param_2,longlong param_3)

{
  char *pcVar1;
  char cVar2;
  code *pcVar3;
  DWORD dwErrCode;
  char *lpLibFileName;
  HMODULE pHVar4;
  undefined8 *puVar5;
  char *pcVar6;
  
  pcVar1 = (char *)(param_3 + 0x18);
  dwErrCode = GetLastError();
  cVar2 = *pcVar1;
  pcVar6 = pcVar1;
  while (cVar2 != '\0') {
    lpLibFileName = pcVar1;
    if (((byte)(*pcVar6 - 0x2eU) < 2) || (*pcVar6 == '\\')) goto LAB_1804b54a3;
    pcVar6 = pcVar6 + 1;
    cVar2 = *pcVar6;
  }
  lpLibFileName = (char *)FUN_180498630(param_1,"%s.dll",pcVar1);
  *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + -8;
LAB_1804b54a3:
  pHVar4 = LoadLibraryExA(lpLibFileName,(HANDLE)0x0,0);
  if (pHVar4 == (HMODULE)0x0) {
    FUN_1804b5090(param_1,"cannot load module \'%s\': %s",pcVar1);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  SetLastError(dwErrCode);
  puVar5 = (undefined8 *)FUN_1804b5100(param_1,param_2);
  *puVar5 = pHVar4;
  return;
}



/* ===== 1804b54f0 FUN_1804b54f0 ===== */

void FUN_1804b54f0(undefined8 *param_1)

{
  HMODULE pHVar1;
  HMODULE hLibModule;
  
  hLibModule = DAT_180c9ec70;
  pHVar1 = (HMODULE)*param_1;
  if (pHVar1 == (HMODULE)0xffffffffffffffff) {
    if (DAT_180c9ec70 != (HMODULE)0x0) {
      DAT_180c9ec70 = (HMODULE)0x0;
      FreeLibrary(hLibModule);
    }
    pHVar1 = DAT_180c9ec78;
    if (DAT_180c9ec78 != (HMODULE)0x0) {
      DAT_180c9ec78 = (HMODULE)0x0;
      FreeLibrary(pHVar1);
    }
    pHVar1 = DAT_180c9ec80;
    if (DAT_180c9ec80 != (HMODULE)0x0) {
      DAT_180c9ec80 = (HMODULE)0x0;
      FreeLibrary(pHVar1);
      *param_1 = 0;
      return;
    }
  }
  else if (pHVar1 != (HMODULE)0x0) {
    FreeLibrary(pHVar1);
  }
  *param_1 = 0;
  return;
}



/* ===== 1804b5580 FUN_1804b5580 ===== */

undefined8 FUN_1804b5580(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if (((*(ulonglong **)(param_1 + 0x28) <= *(ulonglong **)(param_1 + 0x20)) ||
      (uVar3 = **(ulonglong **)(param_1 + 0x20), (int)((longlong)uVar3 >> 0x2f) != -0xd)) ||
     (uVar3 = uVar3 & 0x7fffffffffff, *(char *)(uVar3 + 10) != '\x03')) {
                    /* WARNING: Subroutine does not return */
    FUN_180484100(param_1,1,"buffer");
  }
  if ((*(byte *)(uVar3 + 0x48) & 6) == 0) {
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    uVar4 = (ulonglong)(uint)(*(int *)(uVar3 + 0x38) - *(int *)(uVar3 + 0x40));
    uVar2 = *(undefined8 *)(uVar3 + 0x40);
    puVar1[2] = puVar1[2] - uVar4;
    (*(code *)*puVar1)(puVar1[1],uVar2,uVar4,0);
  }
  *(longlong *)(uVar3 + 0x48) = param_1 + 1;
  *(undefined8 *)(uVar3 + 0x50) = 0;
  *(undefined8 *)(uVar3 + 0x38) = 0;
  *(undefined8 *)(uVar3 + 0x40) = 0;
  *(undefined8 *)(uVar3 + 0x30) = 0;
  *(undefined8 *)(uVar3 + 0x58) = 0;
  *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x20) + 8;
  return 1;
}



