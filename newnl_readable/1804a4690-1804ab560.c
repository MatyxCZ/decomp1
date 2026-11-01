/* ===== 1804a4690 FUN_1804a4690 ===== */

int FUN_1804a4690(longlong *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  
  if (*(int *)((longlong)param_1 + 0x34) != param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_18049e250(param_1,param_3);
  }
  lVar2 = *param_1;
  iVar8 = 0;
  FUN_18049b180();
  if (param_2 != 0) {
    lVar3 = param_1[1];
    uVar5 = FUN_180491d30(lVar3,&DAT_180761eac,4);
    plVar6 = (longlong *)FUN_180493400(lVar3,*(undefined8 *)*param_1,uVar5);
    if (*plVar6 == -1) {
      *plVar6 = -0x1000000000001;
    }
    if (*(ulonglong *)(*(longlong *)(lVar3 + 0x10) + 0x18) <=
        *(ulonglong *)(*(longlong *)(lVar3 + 0x10) + 0x10)) {
      FUN_180491200(lVar3);
    }
    FUN_1804a5d20(param_1,0,uVar5);
    iVar8 = 1;
  }
  if (*(int *)((longlong)param_1 + 0x34) != param_4) {
    while ((iVar1 = *(int *)((longlong)param_1 + 0x34), iVar1 == 0x12a || (iVar1 - 0x103U < 2))) {
      uVar4 = param_1[2];
      FUN_18049b180(param_1);
      FUN_1804a5d20(param_1,iVar8,uVar4 & 0x7fffffffffff);
      iVar8 = iVar8 + 1;
      if (*(int *)((longlong)param_1 + 0x34) != 0x2c) goto LAB_1804a4798;
      FUN_18049b180(param_1);
    }
    if (iVar1 != 0x11a) {
                    /* WARNING: Subroutine does not return */
      FUN_18049e240(param_1,0xa96);
    }
    FUN_18049b180();
    *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) | 2;
  }
LAB_1804a4798:
  FUN_1804a5ab0(param_1,iVar8);
  uVar7 = *(int *)(lVar2 + 0x34) + iVar8;
  if (*(byte *)(lVar2 + 0x5a) < uVar7) {
    if (0xf9 < uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_18049e240(*(undefined8 *)(lVar2 + 8),0x9b6);
    }
    *(char *)(lVar2 + 0x5a) = (char)uVar7;
  }
  *(uint *)(lVar2 + 0x34) = uVar7;
  if (*(int *)((longlong)param_1 + 0x34) != param_4) {
                    /* WARNING: Subroutine does not return */
    FUN_18049e250(param_1,param_4);
  }
  FUN_18049b180();
  return iVar8;
}



/* ===== 1804a4820 FUN_1804a4820 ===== */

void FUN_1804a4820(longlong *param_1,int param_2)

{
  byte *pbVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint uVar10;
  undefined8 in_stack_ffffffffffffffa8;
  undefined4 uVar11;
  undefined8 local_48;
  undefined4 local_40;
  undefined1 local_3c;
  byte local_3b;
  undefined8 local_38;
  undefined4 local_30;
  undefined1 local_2c;
  undefined1 local_2b;
  
  uVar11 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
  lVar3 = *param_1;
  uVar2 = *(uint *)(lVar3 + 0x28);
  local_2c = *(undefined1 *)(lVar3 + 0x38);
  *(uint *)(lVar3 + 0x2c) = uVar2;
  local_2b = 1;
  local_30 = *(undefined4 *)(*(longlong *)(lVar3 + 8) + 0x9c);
  local_38 = *(undefined8 *)(lVar3 + 0x18);
  *(undefined8 **)(lVar3 + 0x18) = &local_38;
  local_3c = *(undefined1 *)(lVar3 + 0x38);
  local_3b = 0;
  local_40 = *(undefined4 *)(*(longlong *)(lVar3 + 8) + 0x9c);
  local_48 = *(undefined8 *)(lVar3 + 0x18);
  *(undefined8 **)(lVar3 + 0x18) = &local_48;
  FUN_18049b180(param_1);
  FUN_18049d010(lVar3,*(int *)(lVar3 + 0x38) << 8 | 0x55);
  FUN_1804a3350(param_1);
  if (*(int *)((longlong)param_1 + 0x34) != 0x117) {
    if (param_2 == (int)param_1[0xe]) {
                    /* WARNING: Subroutine does not return */
      FUN_18049e250(param_1,0x117);
    }
    uVar8 = FUN_18049b3d0();
    uVar9 = FUN_18049b3d0(param_1,0x113);
                    /* WARNING: Subroutine does not return */
    FUN_18049b070(param_1,*(undefined4 *)((longlong)param_1 + 0x34),0xa4a,uVar8,uVar9,param_2);
  }
  FUN_18049b180();
  lVar4 = *(longlong *)(lVar3 + 0x18);
  if ((*(byte *)(lVar4 + 0xd) & 0x20) != 0) {
    lVar5 = *(longlong *)(lVar3 + 8);
    uVar6 = *(undefined4 *)(lVar3 + 0x28);
    *(byte *)(lVar4 + 0xd) = *(byte *)(lVar4 + 0xd) & 0xdf;
    uVar6 = FUN_1804a1d30(lVar5,2,4,uVar6);
    *(undefined4 *)(lVar5 + 0x9c) = uVar6;
    FUN_1804a1df0(lVar5,lVar4,uVar6);
  }
  uVar6 = FUN_18049e610(param_1);
  if ((local_3b & 8) == 0) {
    FUN_1804a19c0(lVar3);
  }
  else {
    pbVar1 = (byte *)(*(longlong *)(*param_1 + 0x18) + 0xd);
    *pbVar1 = *pbVar1 | 2;
    uVar7 = FUN_18049d970(*param_1);
    FUN_1804a1d30(param_1,1,2,uVar7);
    *(undefined4 *)(lVar3 + 0x2c) = *(undefined4 *)(lVar3 + 0x28);
    FUN_1804a1f10(lVar3,lVar3 + 0x30,uVar6);
    FUN_1804a19c0(lVar3);
    uVar6 = FUN_18049d970(lVar3);
  }
  if (uVar2 == *(uint *)(lVar3 + 0x28)) {
    *(uint *)(lVar3 + 0x2c) = *(uint *)(lVar3 + 0x28);
    FUN_1804a1f10(lVar3,lVar3 + 0x30,uVar6);
  }
  else {
    FUN_1804a2120(lVar3,uVar6,(ulonglong)uVar2,0xff,CONCAT44(uVar11,uVar2));
  }
  uVar10 = (*(int *)(lVar3 + 0x28) - uVar2) + 0x7fff;
  if (0xffff < uVar10) {
                    /* WARNING: Subroutine does not return */
    FUN_18049e240(*(undefined8 *)(lVar3 + 8),0x99b);
  }
  *(short *)(*(longlong *)(lVar3 + 0x48) + 2 + (ulonglong)uVar2 * 8) = (short)uVar10;
  FUN_1804a19c0(lVar3);
  return;
}



/* ===== 1804a4a30 FUN_1804a4a30 ===== */

void FUN_1804a4a30(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  
  lVar1 = *param_1;
  *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) | 0x20;
  if ((param_2 & 8) == 0) {
    iVar2 = *(int *)((longlong)param_1 + 0x34);
    if (((((iVar2 == 0x106) || (iVar2 == 0x107)) || (iVar2 == 0x108)) ||
        ((iVar2 == 0x117 || (iVar2 == 300)))) || (iVar2 == 0x3b)) {
      uVar3 = 0x1004b;
      goto LAB_1804a4bf9;
    }
    iVar2 = FUN_18049f310(param_1,&local_48);
    if (iVar2 == 1) goto LAB_1804a4b47;
    if (local_40 != 0xd) {
      FUN_18049e870(lVar1,&local_48);
      if ((local_40 == 0xc) && (*(uint *)(lVar1 + 0x38) <= local_48)) {
        *(int *)(lVar1 + 0x34) = *(int *)(lVar1 + 0x34) + -1;
      }
      uVar3 = *(int *)(lVar1 + 0x34) + 1;
      if (*(byte *)(lVar1 + 0x5a) < uVar3) {
        if (0xf9 < uVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_18049e240(*(undefined8 *)(lVar1 + 8),0x9b6);
        }
        *(char *)(lVar1 + 0x5a) = (char)uVar3;
      }
      *(uint *)(lVar1 + 0x34) = uVar3;
      FUN_1804a0bd0(lVar1,&local_48);
      uVar3 = *(int *)(lVar1 + 0x38) << 8 | iVar2 * 0x10000 + 0x10000U | 0x4a;
      goto LAB_1804a4bf9;
    }
  }
  else {
    FUN_18049e280(param_1,&local_48,param_2);
LAB_1804a4b47:
    if (local_40 != 0xd) {
      FUN_18049e870(lVar1,&local_48);
      if (local_40 == 0xc) {
        if (local_3c != local_38) {
          if (local_48 < *(uint *)(lVar1 + 0x38)) goto LAB_1804a4ba6;
          goto LAB_1804a4be1;
        }
      }
      else {
LAB_1804a4ba6:
        FUN_18049e870(lVar1,&local_48);
        if ((local_40 == 0xc) && (*(uint *)(lVar1 + 0x38) <= local_48)) {
          *(int *)(lVar1 + 0x34) = *(int *)(lVar1 + 0x34) + -1;
        }
        uVar3 = *(int *)(lVar1 + 0x34) + 1;
        if (*(byte *)(lVar1 + 0x5a) < uVar3) {
          if (0xf9 < uVar3) {
                    /* WARNING: Subroutine does not return */
            FUN_18049e240(*(undefined8 *)(lVar1 + 8),0x9b6);
          }
          *(char *)(lVar1 + 0x5a) = (char)uVar3;
        }
        *(uint *)(lVar1 + 0x34) = uVar3;
LAB_1804a4be1:
        FUN_1804a0bd0(lVar1,&local_48);
      }
      uVar3 = local_48 << 8 | 0x2004c;
      goto LAB_1804a4bf9;
    }
    if (*(char *)(*(longlong *)(lVar1 + 0x48) + (ulonglong)local_48 * 8) != 'G') {
      *(int *)(lVar1 + 0x28) = *(int *)(lVar1 + 0x28) + -1;
      uVar3 = *(uint *)(*(longlong *)(lVar1 + 0x48) + (ulonglong)local_48 * 8);
      uVar3 = ((uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 8 & 0xff) << 8 | (uVar3 & 0xff) + 2;
      goto LAB_1804a4bf9;
    }
  }
  *(undefined1 *)(*(longlong *)(lVar1 + 0x48) + 3 + (ulonglong)local_48 * 8) = 0;
  uVar3 = (local_44 - *(int *)(lVar1 + 0x38)) * 0x10000 | *(int *)(lVar1 + 0x38) << 8 | 0x49;
LAB_1804a4bf9:
  if ((*(byte *)(lVar1 + 0x58) & 1) != 0) {
    FUN_18049d010(lVar1,0x80000032);
  }
  FUN_18049d010(lVar1,uVar3);
  return;
}



/* ===== 1804a4c40 FUN_1804a4c40 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804a4c40(longlong *param_1,undefined8 param_2,longlong param_3,uint param_4,
                  undefined4 param_5)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined1 auStack_368 [32];
  undefined8 local_348;
  undefined4 local_340;
  undefined1 local_33c;
  undefined1 local_33b;
  ulonglong local_338;
  longlong *local_330;
  longlong local_328;
  undefined8 *local_320;
  longlong local_318;
  undefined8 local_310;
  undefined4 local_308;
  undefined8 local_304;
  undefined8 local_2fc;
  undefined4 local_2f4;
  longlong local_2f0;
  int local_2e8;
  undefined4 local_2e4;
  undefined1 local_2e0;
  undefined1 local_2df;
  undefined2 local_2de;
  ulonglong local_58;
  
  local_58 = DAT_180919500 ^ (ulonglong)auStack_368;
  local_318 = *param_1;
  lVar1 = param_1[1];
  lVar2 = param_1[0x14];
  lVar3 = *(longlong *)(local_318 + 0x48);
  *param_1 = (longlong)&local_338;
  local_2e4 = *(undefined4 *)((longlong)param_1 + 0x9c);
  local_310 = 0;
  local_304 = 0;
  local_2fc = 0;
  local_320 = (undefined8 *)0x0;
  local_2e0 = 0;
  local_308 = 0xffffffff;
  local_2de = 1;
  local_330 = param_1;
  local_328 = lVar1;
  local_338 = FUN_180492ab0(lVar1,0,0);
  **(ulonglong **)(lVar1 + 0x28) = local_338 | 0xfffa000000000000;
  *(longlong *)(lVar1 + 0x28) = *(longlong *)(lVar1 + 0x28) + 8;
  if (*(ulonglong *)(lVar1 + 0x30) <= *(ulonglong *)(lVar1 + 0x28)) {
    FUN_18048ea20(lVar1);
  }
  local_33c = local_304._4_1_;
  local_33b = 0;
  local_340 = *(undefined4 *)((longlong)local_330 + 0x9c);
  local_348 = local_320;
  local_320 = &local_348;
  if (param_3 == 0) {
    if (*(int *)((longlong)param_1 + 0x34) == 0x125) {
      FUN_18049b180();
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_1804a4690(param_1,0,0x7c);
    }
  }
  else {
    puVar5 = (undefined8 *)FUN_180493400(param_1[1],local_338,param_3);
    *puVar5 = 0xfffeffffffffffff;
    FUN_1804a5d20(param_1,0,param_3);
    uVar4 = 1;
    FUN_1804a5ab0(param_1,1);
    uVar6 = (int)local_304 + 1;
    if ((byte)local_2de < uVar6) {
      if (0xf9 < uVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_18049e240(local_330,0x9b6);
      }
      local_2de = CONCAT11(local_2de._1_1_,(char)uVar6);
    }
    local_304 = CONCAT44(local_304._4_4_,uVar6);
  }
  if (*(int *)((longlong)param_1 + 0x34) != 0x127) {
                    /* WARNING: Subroutine does not return */
    FUN_18049e250(param_1,0x127);
  }
  FUN_18049b180();
  local_2f4 = param_5;
  local_2f0 = *(longlong *)(local_318 + 0x48) + (ulonglong)*(uint *)(local_318 + 0x28) * 8;
  local_2e8 = *(int *)(local_318 + 0x50) - *(int *)(local_318 + 0x28);
  local_2df = uVar4;
  FUN_18049d010(&local_338,0x60);
  if (*(int *)((longlong)param_1 + 0x34) == 0x105) {
    FUN_18049b180();
    FUN_1804a3350(param_1);
    if (*(int *)((longlong)param_1 + 0x34) == 0x108) {
      FUN_18049b180();
    }
    else {
      FUN_1804a21f0(param_1,0x108,0x105,param_5);
    }
  }
  else {
    FUN_1804a4a30(param_1,param_4 | 8);
  }
  FUN_1804a5790(param_1,param_2,lVar3 - lVar2 >> 3);
  return;
}



/* ===== 1804a4ec0 FUN_1804a4ec0 ===== */

undefined8 FUN_1804a4ec0(longlong *param_1)

{
  byte *pbVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulonglong *puVar9;
  undefined8 local_58;
  int local_50;
  undefined1 local_4c;
  undefined1 local_4b;
  undefined1 local_40 [32];
  
  if (*(int *)((longlong)param_1 + 0x34) - 0x3bU < 0xee) {
    iVar5 = (int)param_1[0xe];
    switch(*(int *)((longlong)param_1 + 0x34)) {
    case 0x3b:
      FUN_18049b180(param_1);
      return 0;
    case 0x102:
      FUN_18049b180(param_1);
      FUN_1804a3060(param_1);
      return 0;
    case 0x103:
      iVar5 = FUN_18049b160(param_1);
      if ((iVar5 - 0x103U < 0x28) &&
         ((0x8000000103U >> ((ulonglong)(iVar5 - 0x103U) & 0x3f) & 1) != 0)) {
        FUN_1804a4340(param_1,8);
        return 0;
      }
      break;
    case 0x104:
      iVar5 = FUN_18049b160(param_1);
      if ((((iVar5 == 0x106) || (iVar5 == 0x107)) || (iVar5 == 0x108)) ||
         ((iVar5 == 0x117 || (iVar5 == 300)))) {
        FUN_18049b180(param_1);
        pbVar1 = (byte *)(*(longlong *)(*param_1 + 0x18) + 0xd);
        *pbVar1 = *pbVar1 | 0x20;
        uVar6 = FUN_18049d970(*param_1);
        FUN_1804a1d30(param_1,2,2,uVar6);
        return 1;
      }
      break;
    case 0x105:
      FUN_18049b180(param_1);
      FUN_1804a2e20(param_1);
      FUN_1804a21f0(param_1,0x108,0x105,iVar5);
      return 0;
    case 0x10a:
      lVar4 = *param_1;
      local_4c = *(undefined1 *)(lVar4 + 0x38);
      local_4b = 1;
      local_50 = *(undefined4 *)(*(longlong *)(lVar4 + 8) + 0x9c);
      local_58 = *(undefined8 *)(lVar4 + 0x18);
      *(undefined8 **)(lVar4 + 0x18) = &local_58;
      FUN_18049b180(param_1);
      if ((*(int *)((longlong)param_1 + 0x34) != 0x12a) &&
         (1 < *(int *)((longlong)param_1 + 0x34) - 0x103U)) {
                    /* WARNING: Subroutine does not return */
        FUN_18049e250(param_1,0x12a);
      }
      uVar3 = param_1[2];
      FUN_18049b180(param_1);
      iVar2 = *(int *)((longlong)param_1 + 0x34);
      if (iVar2 == 0x3d) {
        FUN_1804a39e0(param_1,uVar3 & 0x7fffffffffff,iVar5);
      }
      else {
        if ((iVar2 != 0x2c) && (iVar2 != 0x10e)) {
                    /* WARNING: Subroutine does not return */
          FUN_18049e240(param_1,0xb15);
        }
        FUN_1804a33e0(param_1,uVar3 & 0x7fffffffffff);
      }
      if (*(int *)((longlong)param_1 + 0x34) == 0x108) {
        FUN_18049b180();
        FUN_1804a19c0(lVar4);
        return 0;
      }
      if (iVar5 == (int)param_1[0xe]) {
                    /* WARNING: Subroutine does not return */
        FUN_18049e250();
      }
      uVar7 = FUN_18049b3d0(param_1,0x108);
      uVar8 = FUN_18049b3d0(param_1,0x10a);
                    /* WARNING: Subroutine does not return */
      FUN_18049b070(param_1,*(undefined4 *)((longlong)param_1 + 0x34),0xa4a,uVar7,uVar8,iVar5);
    case 0x10b:
      FUN_18049b180(param_1);
      if ((*(int *)((longlong)param_1 + 0x34) != 0x12a) &&
         (1 < *(int *)((longlong)param_1 + 0x34) - 0x103U)) {
                    /* WARNING: Subroutine does not return */
        FUN_18049e250(param_1,0x12a);
      }
      uVar3 = param_1[2];
      FUN_18049b180(param_1);
      FUN_1804a5b40(param_1,&local_58,uVar3 & 0x7fffffffffff);
      while( true ) {
        iVar2 = *(int *)((longlong)param_1 + 0x34);
        if (iVar2 != 0x2e) break;
        FUN_18049b180(param_1);
        FUN_18049e960(param_1);
      }
      if (iVar2 == 0x3a) {
        FUN_18049b180(param_1);
        FUN_18049e960(param_1,&local_58);
      }
      if (local_50 - 6U < 2) {
        if ((*(byte *)(param_1[0x12] + 0x11 + (ulonglong)local_58._4_4_ * 0x18) & 8) != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_18049b070(param_1,0,0xbd4,
                        *(longlong *)(param_1[0x12] + (ulonglong)local_58._4_4_ * 0x18) + 0x18);
        }
      }
      FUN_1804a2e70(param_1,local_40,iVar2 == 0x3a,iVar5);
      lVar4 = *param_1;
      FUN_18049dcd0(lVar4,&local_58,local_40);
      *(int *)(*(longlong *)(lVar4 + 0x48) + 4 + (ulonglong)(*(int *)(lVar4 + 0x28) - 1) * 8) =
           iVar5;
      return 0;
    case 0x10c:
      FUN_18049b180(param_1);
      if ((*(int *)((longlong)param_1 + 0x34) != 0x12a) &&
         (1 < *(int *)((longlong)param_1 + 0x34) - 0x103U)) {
                    /* WARNING: Subroutine does not return */
        FUN_18049e250(param_1,0x12a);
      }
      uVar3 = param_1[2];
      lVar4 = *param_1;
      FUN_18049b180(param_1);
      puVar9 = (ulonglong *)
               (param_1[0x12] + (ulonglong)*(uint *)(*(longlong *)(*param_1 + 0x18) + 8) * 0x18);
      do {
        if ((ulonglong *)(param_1[0x12] + (ulonglong)*(uint *)((longlong)param_1 + 0x9c) * 0x18) <=
            puVar9) {
LAB_1804a52e5:
          pbVar1 = (byte *)(*(longlong *)(lVar4 + 0x18) + 0xd);
          *pbVar1 = *pbVar1 | 4;
          uVar6 = FUN_18049d970(lVar4);
          FUN_1804a1d30(param_1,uVar3 & 0x7fffffffffff,2,uVar6);
          return 0;
        }
        if ((*puVar9 == (uVar3 & 0x7fffffffffff)) && ((*(byte *)((longlong)puVar9 + 0x11) & 4) != 0)
           ) {
          FUN_18049d010(lVar4,(uint)(byte)puVar9[2] << 8 | 0x7fff0055);
          goto LAB_1804a52e5;
        }
        puVar9 = puVar9 + 3;
      } while( true );
    case 0x10d:
      FUN_1804a3e50(param_1,iVar5);
      return 0;
    case 0x10f:
      FUN_1804a4340(param_1,0);
      return 0;
    case 0x113:
      FUN_1804a4820(param_1,iVar5);
      return 0;
    case 0x114:
      FUN_18049b180(param_1);
      FUN_1804a4a30(param_1,0);
      return 1;
    case 0x118:
      FUN_1804a5570(param_1,iVar5);
      return 0;
    case 0x128:
      FUN_1804a4190(param_1);
      return 0;
    }
  }
  FUN_1804a30a0(param_1);
  return 0;
}



/* ===== 1804a54e0 FUN_1804a54e0 ===== */

undefined4 FUN_1804a54e0(longlong *param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  undefined1 local_b;
  
  FUN_18049b180();
  uVar2 = FUN_18049e610(param_1);
  if (*(int *)((longlong)param_1 + 0x34) != 0x115) {
                    /* WARNING: Subroutine does not return */
    FUN_18049e250(param_1,0x115);
  }
  FUN_18049b180();
  lVar1 = *param_1;
  local_c = *(undefined1 *)(lVar1 + 0x38);
  local_b = 0;
  local_10 = *(undefined4 *)(*(longlong *)(lVar1 + 8) + 0x9c);
  local_18 = *(undefined8 *)(lVar1 + 0x18);
  *(undefined8 **)(lVar1 + 0x18) = &local_18;
  FUN_1804a3350(param_1);
  FUN_1804a19c0(lVar1);
  return uVar2;
}



/* ===== 1804a5570 FUN_1804a5570 ===== */

void FUN_1804a5570(longlong *param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  uint uVar11;
  undefined8 in_stack_ffffffffffffffb8;
  undefined8 local_38;
  undefined4 local_30;
  undefined1 local_2c;
  undefined1 local_2b;
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined1 local_1b;
  
  uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
  lVar2 = *param_1;
  FUN_18049b180();
  iVar1 = *(int *)(lVar2 + 0x28);
  *(int *)(lVar2 + 0x2c) = iVar1;
  uVar5 = FUN_18049e610(param_1);
  local_2c = *(undefined1 *)(lVar2 + 0x38);
  local_2b = 1;
  local_30 = *(undefined4 *)(*(longlong *)(lVar2 + 8) + 0x9c);
  local_38 = *(undefined8 *)(lVar2 + 0x18);
  *(undefined8 **)(lVar2 + 0x18) = &local_38;
  if (*(int *)((longlong)param_1 + 0x34) != 0x105) {
                    /* WARNING: Subroutine does not return */
    FUN_18049e250(param_1,0x105);
  }
  FUN_18049b180();
  uVar6 = FUN_18049d010(lVar2,*(int *)(lVar2 + 0x38) << 8 | 0x55);
  lVar3 = *param_1;
  local_1c = *(undefined1 *)(lVar3 + 0x38);
  local_1b = 0;
  local_20 = *(undefined4 *)(*(longlong *)(lVar3 + 8) + 0x9c);
  local_28 = *(undefined8 *)(lVar3 + 0x18);
  *(undefined8 **)(lVar3 + 0x18) = &local_28;
  FUN_1804a3350(param_1);
  FUN_1804a19c0(lVar3);
  uVar7 = FUN_18049d970(lVar2);
  if (iVar1 == *(int *)(lVar2 + 0x28)) {
    *(int *)(lVar2 + 0x2c) = *(int *)(lVar2 + 0x28);
    FUN_1804a1f10(lVar2,lVar2 + 0x30,uVar7);
  }
  else {
    FUN_1804a2120(lVar2,uVar7,iVar1,0xff,CONCAT44(uVar8,iVar1));
  }
  if (*(int *)((longlong)param_1 + 0x34) != 0x108) {
    if (param_2 == (int)param_1[0xe]) {
                    /* WARNING: Subroutine does not return */
      FUN_18049e250(param_1,0x108);
    }
    uVar9 = FUN_18049b3d0();
    uVar10 = FUN_18049b3d0(param_1,0x118);
                    /* WARNING: Subroutine does not return */
    FUN_18049b070(param_1,*(undefined4 *)((longlong)param_1 + 0x34),0xa4a,uVar9,uVar10,param_2);
  }
  FUN_18049b180();
  lVar3 = *(longlong *)(lVar2 + 0x18);
  if ((*(byte *)(lVar3 + 0xd) & 0x20) != 0) {
    lVar4 = *(longlong *)(lVar2 + 8);
    *(byte *)(lVar3 + 0xd) = *(byte *)(lVar3 + 0xd) & 0xdf;
    uVar8 = FUN_1804a1d30(lVar4,2,4,iVar1);
    *(undefined4 *)(lVar4 + 0x9c) = uVar8;
    FUN_1804a1df0(lVar4,lVar3,uVar8);
  }
  FUN_1804a19c0(lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = *(undefined4 *)(lVar2 + 0x28);
  FUN_1804a1f10(lVar2,lVar2 + 0x30,uVar5);
  uVar11 = (*(int *)(lVar2 + 0x28) - uVar6) + 0x7fff;
  if (0xffff < uVar11) {
                    /* WARNING: Subroutine does not return */
    FUN_18049e240(*(undefined8 *)(lVar2 + 8),0x99b);
  }
  *(short *)(*(longlong *)(lVar2 + 0x48) + 2 + (ulonglong)uVar6 * 8) = (short)uVar11;
  return;
}



/* ===== 1804a5790 FUN_1804a5790 ===== */

void FUN_1804a5790(longlong *param_1,undefined4 *param_2,longlong param_3)

{
  undefined8 *puVar1;
  byte bVar2;
  undefined4 uVar3;
  ulonglong *puVar4;
  int iVar5;
  ulonglong local_res8;
  
  bVar2 = *(byte *)(*param_1 + 0x58);
  *(int *)((longlong)param_1 + 0x74) = (int)param_1[0xe];
  local_res8 = FUN_1804a1220();
  puVar1 = (undefined8 *)*param_1;
  puVar1[9] = param_1[0x14] + param_3 * 8;
  *(int *)(puVar1 + 10) = (int)param_1[0x15] - (int)param_3;
  local_res8 = local_res8 | 0xfffc000000000000;
  puVar4 = (ulonglong *)FUN_1804931f0(puVar1[2],*puVar1,&local_res8);
  if (*(int *)((longlong)puVar4 + 4) == 0) {
    iVar5 = (int)*puVar4;
  }
  else {
    *puVar4 = (ulonglong)*(uint *)(puVar1 + 8);
    iVar5 = *(int *)(puVar1 + 8);
    *(int *)(puVar1 + 8) = iVar5 + 1;
  }
  uVar3 = FUN_18049d010(puVar1,iVar5 << 0x10 | 0x33);
  *param_2 = uVar3;
  param_2[2] = 0xb;
  *(undefined8 *)(param_2 + 3) = 0xffffffffffffffff;
  *(byte *)(puVar1 + 0xb) = *(byte *)(puVar1 + 0xb) | bVar2 & 0x84;
  bVar2 = *(byte *)(puVar1 + 0xb);
  if ((bVar2 & 1) == 0) {
    if ((bVar2 & 0x20) != 0) {
      bVar2 = bVar2 | 0x40;
    }
    *(byte *)(puVar1 + 0xb) = bVar2 | 1;
  }
  return;
}



/* ===== 1804a5870 FUN_1804a5870 ===== */

undefined8 FUN_1804a5870(int param_1)

{
  if (param_1 < 0x11a) {
    if (param_1 == 0x119) {
      return 0xc;
    }
    switch(param_1) {
    case 0x25:
      return 4;
    case 0x26:
      return 6;
    case 0x2a:
      return 2;
    case 0x2b:
      return 0;
    case 0x2d:
      return 1;
    case 0x2f:
      return 3;
    case 0x3c:
      return 0xf;
    case 0x3e:
      return 0x12;
    case 0x5e:
      return 5;
    case 0x7c:
      return 7;
    case 0x7e:
      return 8;
    case 0x101:
switchD_1804a58a5_caseD_101:
      return 0x13;
    case 0x112:
switchD_1804a58a5_caseD_112:
      return 0x14;
    }
  }
  else {
    switch(param_1) {
    case 0x11b:
      return 0xe;
    case 0x11c:
      return 0x10;
    case 0x11d:
      return 0x11;
    case 0x11e:
    case 0x126:
      return 0xd;
    case 0x120:
      return 0x15;
    case 0x121:
      return 9;
    case 0x122:
      return 10;
    case 0x123:
      return 0xb;
    case 0x124:
      goto switchD_1804a58a5_caseD_101;
    case 0x125:
      goto switchD_1804a58a5_caseD_112;
    }
  }
  return 0x16;
}



/* ===== 1804a5ab0 FUN_1804a5ab0 ===== */

void FUN_1804a5ab0(longlong *param_1,int param_2)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  lVar2 = *param_1;
  uVar4 = *(uint *)(lVar2 + 0x38);
  while (param_2 != 0) {
    lVar3 = param_1[0x12];
    param_2 = param_2 + -1;
    uVar1 = *(ushort *)(lVar2 + 0x5c + (ulonglong)uVar4 * 2);
    uVar6 = (ulonglong)uVar1;
    uVar5 = *(ulonglong *)(lVar3 + uVar6 * 0x18);
    if (uVar5 < 7) {
      *(undefined4 *)(lVar3 + 8 + uVar6 * 0x18) = *(undefined4 *)(lVar2 + 0x28);
      *(char *)(lVar3 + 0x10 + uVar6 * 0x18) = (char)uVar4;
    }
    else {
      uVar5 = (ulonglong)(*(uint *)(uVar5 + 0xc) & 0x1f);
      *(undefined4 *)(lVar3 + 8 + uVar6 * 0x18) = *(undefined4 *)(lVar2 + 0x28);
      *(char *)(lVar3 + 0x10 + uVar6 * 0x18) = (char)uVar4;
      *(undefined2 *)(lVar3 + 0x12 + uVar6 * 0x18) =
           *(undefined2 *)((longlong)param_1 + uVar5 * 2 + 0xb8);
      *(ushort *)((longlong)param_1 + uVar5 * 2 + 0xb8) = uVar1;
    }
    uVar4 = uVar4 + 1;
  }
  *(uint *)(lVar2 + 0x38) = uVar4;
  return;
}



/* ===== 1804a5b40 FUN_1804a5b40 ===== */

ulonglong FUN_1804a5b40(longlong *param_1,ulonglong *param_2,ulonglong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  ushort uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  uint uVar10;
  uint uVar11;
  
  if (param_3 < 7) {
    uVar7 = 0xffffffffffffffff;
  }
  else {
    uVar7 = (ulonglong)(*(uint *)(param_3 + 0xc) & 0x1f);
  }
  uVar5 = *(ushort *)((longlong)param_1 + uVar7 * 2 + 0xb8);
  uVar7 = (ulonglong)uVar5;
  if (uVar5 != 0xffff) {
    do {
      lVar1 = param_1[0x12] + uVar7 * 0x18;
      if (*(ulonglong *)(param_1[0x12] + uVar7 * 0x18) == param_3) {
        lVar6 = *param_1;
        uVar10 = (uint)uVar7;
        if (uVar10 < *(uint *)(lVar6 + 0x54)) {
          bVar4 = *(byte *)(lVar6 + 0x5b);
          uVar8 = 0;
          *(uint *)((longlong)param_2 + 4) = uVar10;
          if (bVar4 != 0) goto LAB_1804a5bf0;
          goto LAB_1804a5c0a;
        }
        *(uint *)param_2 = (uint)*(byte *)(lVar1 + 0x10);
        *(uint *)(param_2 + 1) = 6;
        *(uint *)((longlong)param_2 + 4) = uVar10;
        goto LAB_1804a5ba3;
      }
      uVar7 = (ulonglong)*(ushort *)(lVar1 + 0x12);
    } while (*(ushort *)(lVar1 + 0x12) != 0xffff);
  }
  *(uint *)(param_2 + 1) = 8;
  *param_2 = param_3;
LAB_1804a5ba3:
  ((uint *)((longlong)param_2 + 0xc))[0] = 0xffffffff;
  ((uint *)((longlong)param_2 + 0xc))[1] = 0xffffffff;
  return uVar7;
LAB_1804a5bf0:
  if (*(ushort *)(lVar6 + 0x1ec + uVar8 * 2) == uVar10) {
    *(uint *)(param_2 + 1) = 7;
    *(uint *)param_2 = (uint)uVar8;
    goto LAB_1804a5ba3;
  }
  uVar11 = (uint)uVar8 + 1;
  uVar8 = (ulonglong)uVar11;
  if (bVar4 <= uVar11) {
LAB_1804a5c0a:
    *(uint *)(param_2 + 1) = 7;
    *(uint *)param_2 = (uint)bVar4;
    ((uint *)((longlong)param_2 + 0xc))[0] = 0xffffffff;
    ((uint *)((longlong)param_2 + 0xc))[1] = 0xffffffff;
    while( true ) {
      if (0x3b < bVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_18049e200(lVar6,0x3c,"upvalues");
      }
      lVar2 = lVar6 + (ulonglong)bVar4 * 2;
      *(short *)(lVar2 + 0x1ec) = (short)uVar7;
      *(byte *)(lVar6 + 0x5b) = bVar4 + 1;
      lVar3 = lVar6 + (ulonglong)bVar4 * 2;
      lVar6 = *(longlong *)(lVar6 + 0x20);
      if (*(uint *)(lVar6 + 0x54) <= uVar10) break;
      bVar4 = *(byte *)(lVar6 + 0x5b);
      uVar8 = 0;
      if (bVar4 != 0) {
        do {
          if (*(ushort *)(lVar6 + 0x1ec + uVar8 * 2) == uVar10) {
            *(short *)(lVar3 + 0x264) = (short)uVar8 + -0x3c;
            return uVar7;
          }
          uVar11 = (int)uVar8 + 1;
          uVar8 = (ulonglong)uVar11;
        } while (uVar11 < bVar4);
      }
      *(ushort *)(lVar2 + 0x264) = bVar4 - 0x3c;
    }
    *(short *)(lVar3 + 0x264) = (short)uVar7;
    plVar9 = *(longlong **)(lVar6 + 0x18);
    if (plVar9 == (longlong *)0x0) {
      return uVar7;
    }
    do {
      if (*(byte *)((longlong)plVar9 + 0xc) <= *(byte *)(lVar1 + 0x10)) {
        *(byte *)((longlong)plVar9 + 0xd) = *(byte *)((longlong)plVar9 + 0xd) | 8;
        return uVar7;
      }
      plVar9 = (longlong *)*plVar9;
    } while (plVar9 != (longlong *)0x0);
    return uVar7;
  }
  goto LAB_1804a5bf0;
}



/* ===== 1804a5d20 FUN_1804a5d20 ===== */

uint FUN_1804a5d20(longlong *param_1,int param_2,ulonglong param_3)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  if ((6 < param_3) &&
     (uVar1 = *(ushort *)
               ((longlong)param_1 + (ulonglong)(*(uint *)(param_3 + 0xc) & 0x1f) * 2 + 0xb8),
     uVar1 != 0xffff)) {
    lVar4 = param_1[0x12];
    do {
      uVar5 = (ulonglong)uVar1;
      if ((*(ulonglong *)(lVar4 + uVar5 * 0x18) == param_3) &&
         ((*(byte *)(lVar4 + 0x11 + uVar5 * 0x18) & 8) != 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_18049b070(param_1,0,0xbfd,param_3 + 0x18);
      }
      uVar1 = *(ushort *)(lVar4 + 0x12 + uVar5 * 0x18);
    } while (uVar1 != 0xffff);
  }
  lVar4 = *param_1;
  if (199 < (uint)(*(int *)(lVar4 + 0x38) + param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_18049e200(lVar4,200,"local variables");
  }
  uVar2 = *(uint *)((longlong)param_1 + 0x9c);
  uVar3 = *(uint *)(param_1 + 0x13);
  if (uVar2 < uVar3) {
    lVar6 = param_1[0x12];
  }
  else {
    if (0xffc3 < uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_18049b070(param_1,0,0x9d9);
    }
    lVar6 = FUN_180491670(param_1[1],param_1[0x12],param_1 + 0x13,0xffc4,0x18);
    param_1[0x12] = lVar6;
  }
  *(ulonglong *)(lVar6 + (ulonglong)uVar2 * 0x18) = param_3;
  *(undefined1 *)(param_1[0x12] + 0x11 + (ulonglong)uVar2 * 0x18) = 0;
  *(short *)(lVar4 + 0x5c + (ulonglong)(uint)(*(int *)(lVar4 + 0x38) + param_2) * 2) = (short)uVar2;
  *(uint *)((longlong)param_1 + 0x9c) = uVar2 + 1;
  return uVar2;
}



/* ===== 1804a5e80 FUN_1804a5e80 ===== */

void FUN_1804a5e80(longlong param_1,int param_2,ulonglong param_3,ulonglong param_4)

{
  ulonglong uVar1;
  uint uVar2;
  undefined2 uVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong *puVar6;
  uint *puVar7;
  undefined2 local_res10;
  ulonglong local_res18;
  ulonglong local_res20;
  
  local_res18 = param_3;
  local_res20 = param_4;
  uVar4 = 0x7fff;
  puVar7 = (uint *)(&DAT_18056eed8 + (longlong)param_2 * 0x10);
  puVar6 = &local_res18;
  uVar2 = *puVar7 & 0xff;
  uVar5 = uVar2 - 1;
  if ((*puVar7 >> 8 & 1) == 0) {
    uVar5 = uVar2;
  }
  if (uVar5 != 0) {
    uVar4 = param_3 & 0xffffffff;
    puVar6 = &local_res20;
  }
  uVar3 = (undefined2)uVar4;
  for (; 1 < uVar5; uVar5 = uVar5 - 1) {
    uVar1 = *puVar6;
    puVar6 = puVar6 + 1;
    *(short *)(param_1 + 0xba) = (short)uVar1;
    *(undefined2 *)(param_1 + 0xbc) = 0x6400;
    *(short *)(param_1 + 0xb8) = (short)uVar4;
    uVar2 = FUN_1804d6ae0(param_1);
    uVar4 = (ulonglong)uVar2;
    uVar3 = (undefined2)uVar2;
  }
  if ((char)(*puVar7 >> 0x18) == 'b') {
    *(undefined1 *)(param_1 + 0xb5) = 1;
  }
  local_res10 = (undefined2)param_2;
  *(short *)(param_1 + 0xbc) = (short)(*puVar7 >> 0x10);
  *(undefined2 *)(param_1 + 0xb8) = uVar3;
  *(undefined2 *)(param_1 + 0xba) = local_res10;
  FUN_1804d6ae0(param_1);
  return;
}



/* ===== 1804a5f70 FUN_1804a5f70 ===== */

int FUN_1804a5f70(longlong param_1)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar2 = *(uint *)(param_1 + 0xc);
  uVar4 = (ulonglong)uVar2;
  if (*(uint *)(param_1 + 0x150) <= uVar2) {
    FUN_1804a6170();
  }
  bVar1 = *(byte *)(param_1 + 0xbd);
  lVar3 = *(longlong *)(param_1 + 0x20);
  *(uint *)(param_1 + 0xc) = uVar2 + 1;
  *(undefined2 *)(lVar3 + 6 + uVar4 * 8) = *(undefined2 *)(param_1 + 0x192 + (ulonglong)bVar1 * 2);
  *(short *)(param_1 + 0x192 + (ulonglong)bVar1 * 2) = (short)uVar2;
  *(byte *)(lVar3 + 5 + uVar4 * 8) = bVar1;
  *(undefined2 *)(lVar3 + uVar4 * 8) = *(undefined2 *)(param_1 + 0xb8);
  *(undefined2 *)(lVar3 + 2 + uVar4 * 8) = *(undefined2 *)(param_1 + 0xba);
  bVar1 = *(byte *)(param_1 + 0xbc);
  *(byte *)(param_1 + 0xb6) = *(byte *)(param_1 + 0xb6) | bVar1;
  *(byte *)(lVar3 + 4 + uVar4 * 8) = bVar1;
  return (uint)bVar1 * 0x1000000 + uVar2;
}



/* ===== 1804a6000 FUN_1804a6000 ===== */

void FUN_1804a6000(longlong param_1,ushort param_2,ulonglong param_3)

{
  *(ushort *)(param_1 + 0xbc) = param_2 | 0x4500;
  *(short *)(param_1 + 0xba) = (short)(param_3 >> 2);
  *(undefined2 *)(param_1 + 0xb8) = 0x7fff;
  FUN_1804d6ae0();
  return;
}



/* ===== 1804a6030 FUN_1804a6030 ===== */

void FUN_1804a6030(longlong param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  
  uVar1 = *(uint *)(param_1 + 0x154);
  uVar5 = *(uint *)(param_1 + 0x150) - uVar1;
  lVar4 = *(longlong *)(param_1 + 0x148) + (ulonglong)uVar1 * 8;
  if (*(int *)(param_1 + 0xc) + (uVar5 >> 1) < *(uint *)(param_1 + 0x150)) {
    uVar5 = uVar5 >> 2;
    FUN_180540530(*(longlong *)(param_1 + 0x148) + ((ulonglong)uVar1 + (ulonglong)uVar5) * 8,lVar4,
                  (ulonglong)(*(int *)(param_1 + 0xc) - uVar1) << 3);
    *(int *)(param_1 + 0x154) = *(int *)(param_1 + 0x154) - uVar5;
    *(int *)(param_1 + 0x150) = *(int *)(param_1 + 0x150) - uVar5;
    lVar4 = lVar4 + (ulonglong)*(uint *)(param_1 + 0x154) * -8;
    *(longlong *)(param_1 + 0x148) = lVar4;
    *(longlong *)(param_1 + 0x20) = lVar4;
  }
  else {
    lVar3 = FUN_180491760(*(undefined8 *)(param_1 + 0x80),0,0,(ulonglong)(uVar5 * 2) << 3);
    uVar6 = (ulonglong)(uVar5 >> 1);
    if (0xff < uVar5) {
      uVar6 = 0x80;
    }
    FUN_180540530(lVar3 + uVar6 * 8,lVar4,
                  (ulonglong)(uint)(*(int *)(param_1 + 0xc) - *(int *)(param_1 + 0x154)) << 3);
    puVar2 = *(undefined8 **)(*(longlong *)(param_1 + 0x80) + 0x10);
    puVar2[2] = puVar2[2] + (ulonglong)uVar5 * -8;
    (*(code *)*puVar2)(puVar2[1],lVar4,(ulonglong)uVar5 * 8,0);
    *(int *)(param_1 + 0x154) = *(int *)(param_1 + 0x154) - (int)uVar6;
    lVar3 = lVar3 + (ulonglong)*(uint *)(param_1 + 0x154) * -8;
    *(uint *)(param_1 + 0x150) = *(uint *)(param_1 + 0x154) + uVar5 * 2;
    *(longlong *)(param_1 + 0x148) = lVar3;
    *(longlong *)(param_1 + 0x20) = lVar3;
  }
  return;
}



/* ===== 1804a6170 FUN_1804a6170 ===== */

void FUN_1804a6170(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  
  uVar1 = *(int *)(param_1 + 0x150) - *(uint *)(param_1 + 0x154);
  if (uVar1 == 0) {
    lVar2 = FUN_180491760(*(undefined8 *)(param_1 + 0x80),0,0,0x100);
    iVar4 = 0x8018;
    uVar3 = 0x7ff8;
    *(undefined4 *)(param_1 + 0x154) = 0x7ff8;
  }
  else {
    lVar2 = FUN_180491760(*(undefined8 *)(param_1 + 0x80),
                          *(longlong *)(param_1 + 0x148) + (ulonglong)*(uint *)(param_1 + 0x154) * 8
                          ,(ulonglong)uVar1 << 3,(ulonglong)(uVar1 * 2) << 3);
    uVar3 = (ulonglong)*(uint *)(param_1 + 0x154);
    iVar4 = *(uint *)(param_1 + 0x154) + uVar1 * 2;
  }
  *(int *)(param_1 + 0x150) = iVar4;
  lVar2 = lVar2 + uVar3 * -8;
  *(longlong *)(param_1 + 0x148) = lVar2;
  *(longlong *)(param_1 + 0x20) = lVar2;
  return;
}



/* ===== 1804a6210 FUN_1804a6210 ===== */

int FUN_1804a6210(longlong param_1,int param_2,longlong param_3)

{
  longlong lVar1;
  ushort uVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  undefined1 uVar7;
  
  iVar6 = 0x15;
  if (param_2 == 0x1c) {
    iVar6 = 0xe;
  }
  lVar1 = (longlong)param_2 * 2;
  uVar2 = *(ushort *)(lVar1 + 0x192 + param_1);
  while (uVar2 != 0) {
    uVar5 = (ulonglong)uVar2;
    if (*(longlong *)(*(longlong *)(param_1 + 0x20) + 8 + uVar5 * 8) == param_3) goto LAB_1804a62c1;
    uVar2 = *(ushort *)(*(longlong *)(param_1 + 0x20) + 6 + uVar5 * 8);
  }
  uVar4 = *(int *)(param_1 + 0x28) - 2;
  uVar5 = (ulonglong)uVar4;
  if (uVar4 < *(uint *)(param_1 + 0x154)) {
    FUN_1804a6030();
  }
  lVar3 = *(longlong *)(param_1 + 0x20);
  *(uint *)(param_1 + 0x28) = uVar4;
  uVar7 = 0x15;
  if (param_2 == 0x1c) {
    uVar7 = 0xe;
  }
  *(longlong *)(lVar3 + 8 + uVar5 * 8) = param_3;
  *(undefined1 *)(lVar3 + 4 + uVar5 * 8) = uVar7;
  *(char *)(lVar3 + 5 + uVar5 * 8) = (char)param_2;
  *(undefined4 *)(lVar3 + uVar5 * 8) = 0;
  *(undefined2 *)(lVar3 + 6 + uVar5 * 8) = *(undefined2 *)(lVar1 + 0x192 + param_1);
  *(short *)(lVar1 + 0x192 + param_1) = (short)uVar4;
LAB_1804a62c1:
  return (int)uVar5 + iVar6 * 0x1000000;
}



/* ===== 1804a62e0 FUN_1804a62e0 ===== */

int FUN_1804a62e0(longlong param_1,longlong param_2,int param_3)

{
  ushort uVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar1 = *(ushort *)(param_1 + 0x1c2);
  while (uVar1 != 0) {
    uVar4 = (ulonglong)uVar1;
    if (*(longlong *)(*(longlong *)(param_1 + 0x20) + 8 + uVar4 * 8) == param_2) goto LAB_1804a6357;
    uVar1 = *(ushort *)(*(longlong *)(param_1 + 0x20) + 6 + uVar4 * 8);
  }
  uVar3 = *(int *)(param_1 + 0x28) - 2;
  uVar4 = (ulonglong)uVar3;
  if (uVar3 < *(uint *)(param_1 + 0x154)) {
    FUN_1804a6030();
  }
  lVar2 = *(longlong *)(param_1 + 0x20);
  *(uint *)(param_1 + 0x28) = uVar3;
  *(undefined4 *)(lVar2 + uVar4 * 8) = 0;
  *(longlong *)(lVar2 + 8 + uVar4 * 8) = param_2;
  *(char *)(lVar2 + 4 + uVar4 * 8) = (char)param_3;
  *(undefined1 *)(lVar2 + 5 + uVar4 * 8) = 0x18;
  *(undefined2 *)(lVar2 + 6 + uVar4 * 8) = *(undefined2 *)(param_1 + 0x1c2);
  *(short *)(param_1 + 0x1c2) = (short)uVar3;
LAB_1804a6357:
  return (int)uVar4 + param_3 * 0x1000000;
}



/* ===== 1804a6370 FUN_1804a6370 ===== */

int FUN_1804a6370(longlong param_1,int param_2)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar2 = *(ushort *)(param_1 + 0x1c0);
  while( true ) {
    if (uVar2 == 0) {
      uVar3 = *(uint *)(param_1 + 0x28);
      if (uVar3 <= *(uint *)(param_1 + 0x154)) {
        FUN_1804a6030();
      }
      lVar4 = *(longlong *)(param_1 + 0x20);
      uVar1 = uVar3 - 1;
      uVar5 = (ulonglong)uVar1;
      *(uint *)(param_1 + 0x28) = uVar1;
      *(int *)(lVar4 + uVar5 * 8) = param_2;
      *(undefined2 *)(lVar4 + 4 + uVar5 * 8) = 0x1713;
      *(undefined2 *)(lVar4 + 6 + uVar5 * 8) = *(undefined2 *)(param_1 + 0x1c0);
      *(short *)(param_1 + 0x1c0) = (short)uVar1;
      return uVar3 + 0x12ffffff;
    }
    if (*(int *)(*(longlong *)(param_1 + 0x20) + (ulonglong)uVar2 * 8) == param_2) break;
    uVar2 = *(ushort *)(*(longlong *)(param_1 + 0x20) + 6 + (ulonglong)uVar2 * 8);
  }
  return uVar2 + 0x13000000;
}



/* ===== 1804a6410 FUN_1804a6410 ===== */

int FUN_1804a6410(longlong param_1,longlong param_2)

{
  ushort uVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  
  uVar1 = *(ushort *)(param_1 + 0x1cc);
  while( true ) {
    if (uVar1 == 0) {
      iVar2 = *(int *)(param_1 + 0x28);
      uVar4 = iVar2 - 2;
      uVar5 = (ulonglong)uVar4;
      if (uVar4 < *(uint *)(param_1 + 0x154)) {
        FUN_1804a6030();
      }
      lVar3 = *(longlong *)(param_1 + 0x20);
      *(uint *)(param_1 + 0x28) = uVar4;
      *(longlong *)(lVar3 + 8 + uVar5 * 8) = param_2;
      *(undefined2 *)(lVar3 + 4 + uVar5 * 8) = 0x1d15;
      *(undefined4 *)(lVar3 + uVar5 * 8) = 0;
      *(undefined2 *)(lVar3 + 6 + uVar5 * 8) = *(undefined2 *)(param_1 + 0x1cc);
      *(short *)(param_1 + 0x1cc) = (short)uVar4;
      return iVar2 + 0x14fffffe;
    }
    if (*(longlong *)(*(longlong *)(param_1 + 0x20) + 8 + (ulonglong)uVar1 * 8) == param_2) break;
    uVar1 = *(ushort *)(*(longlong *)(param_1 + 0x20) + 6 + (ulonglong)uVar1 * 8);
  }
  return uVar1 + 0x15000000;
}



/* ===== 1804a64b0 FUN_1804a64b0 ===== */

int FUN_1804a64b0(longlong param_1,uint param_2)

{
  ushort uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *(ushort *)(param_1 + 0x1c8);
  while (uVar1 != 0) {
    uVar4 = (ulonglong)uVar1;
    if (*(byte *)(*(longlong *)(param_1 + 0x20) + 4 + uVar4 * 8) == param_2) goto LAB_1804a652d;
    uVar1 = *(ushort *)(*(longlong *)(param_1 + 0x20) + 6 + uVar4 * 8);
  }
  uVar2 = *(uint *)(param_1 + 0x28);
  if (uVar2 <= *(uint *)(param_1 + 0x154)) {
    FUN_1804a6030();
  }
  lVar3 = *(longlong *)(param_1 + 0x20);
  uVar2 = uVar2 - 1;
  uVar4 = (ulonglong)uVar2;
  *(uint *)(param_1 + 0x28) = uVar2;
  *(undefined4 *)(lVar3 + uVar4 * 8) = 0;
  *(char *)(lVar3 + 4 + uVar4 * 8) = (char)param_2;
  *(undefined1 *)(lVar3 + 5 + uVar4 * 8) = 0x1b;
  *(undefined2 *)(lVar3 + 6 + uVar4 * 8) = *(undefined2 *)(param_1 + 0x1c8);
  *(short *)(param_1 + 0x1c8) = (short)uVar2;
LAB_1804a652d:
  return (int)uVar4 + param_2 * 0x1000000;
}



/* ===== 1804a6540 FUN_1804a6540 ===== */

int FUN_1804a6540(longlong param_1,longlong param_2)

{
  ushort uVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  
  uVar1 = *(ushort *)(param_1 + 0x1ca);
  while( true ) {
    if (uVar1 == 0) {
      iVar2 = *(int *)(param_1 + 0x28);
      uVar4 = iVar2 - 2;
      uVar5 = (ulonglong)uVar4;
      if (uVar4 < *(uint *)(param_1 + 0x154)) {
        FUN_1804a6030();
      }
      lVar3 = *(longlong *)(param_1 + 0x20);
      *(uint *)(param_1 + 0x28) = uVar4;
      *(longlong *)(lVar3 + 8 + uVar5 * 8) = param_2;
      *(undefined2 *)(lVar3 + 4 + uVar5 * 8) = 0x1c0e;
      *(undefined4 *)(lVar3 + uVar5 * 8) = 0;
      *(undefined2 *)(lVar3 + 6 + uVar5 * 8) = *(undefined2 *)(param_1 + 0x1ca);
      *(short *)(param_1 + 0x1ca) = (short)uVar4;
      return iVar2 + 0xdfffffe;
    }
    if (*(longlong *)(*(longlong *)(param_1 + 0x20) + 8 + (ulonglong)uVar1 * 8) == param_2) break;
    uVar1 = *(ushort *)(*(longlong *)(param_1 + 0x20) + 6 + (ulonglong)uVar1 * 8);
  }
  return uVar1 + 0xe000000;
}



/* ===== 1804a65e0 FUN_1804a65e0 ===== */

ulonglong FUN_1804a65e0(longlong param_1,longlong param_2)

{
  ushort uVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  lVar4 = FUN_1800052ed((int)param_2);
  if ((lVar4 < 0) || (param_2 == -0x8000000000000000)) {
    uVar5 = FUN_1804a6540(param_1,param_2);
    return uVar5;
  }
  uVar1 = *(ushort *)(param_1 + 0x1c0);
  while (uVar1 != 0) {
    uVar5 = (ulonglong)uVar1;
    if (*(int *)(*(longlong *)(param_1 + 0x20) + uVar5 * 8) == (int)lVar4) goto LAB_1804a6692;
    uVar1 = *(ushort *)(*(longlong *)(param_1 + 0x20) + 6 + uVar5 * 8);
  }
  uVar2 = *(uint *)(param_1 + 0x28);
  if (uVar2 <= *(uint *)(param_1 + 0x154)) {
    FUN_1804a6030(param_1);
  }
  lVar3 = *(longlong *)(param_1 + 0x20);
  uVar2 = uVar2 - 1;
  uVar5 = (ulonglong)uVar2;
  *(uint *)(param_1 + 0x28) = uVar2;
  *(int *)(lVar3 + uVar5 * 8) = (int)lVar4;
  *(undefined2 *)(lVar3 + 4 + uVar5 * 8) = 0x1713;
  *(undefined2 *)(lVar3 + 6 + uVar5 * 8) = *(undefined2 *)(param_1 + 0x1c0);
  *(short *)(param_1 + 0x1c0) = (short)uVar2;
LAB_1804a6692:
  return (ulonglong)((int)uVar5 + 0x13000000);
}



/* ===== 1804a66d0 FUN_1804a66d0 ===== */

int FUN_1804a66d0(longlong param_1,int param_2,longlong param_3)

{
  longlong lVar1;
  ushort uVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  
  lVar1 = param_1 + (longlong)param_2 * 2;
  uVar2 = *(ushort *)(lVar1 + 0x192);
  while( true ) {
    if (uVar2 == 0) {
      iVar3 = *(int *)(param_1 + 0x28);
      uVar5 = iVar3 - 2;
      uVar6 = (ulonglong)uVar5;
      if (uVar5 < *(uint *)(param_1 + 0x154)) {
        FUN_1804a6030();
      }
      lVar4 = *(longlong *)(param_1 + 0x20);
      *(uint *)(param_1 + 0x28) = uVar5;
      *(undefined4 *)(lVar4 + uVar6 * 8) = 0;
      *(longlong *)(lVar4 + 8 + uVar6 * 8) = param_3;
      *(undefined1 *)(lVar4 + 4 + uVar6 * 8) = 9;
      *(char *)(lVar4 + 5 + uVar6 * 8) = (char)param_2;
      *(undefined2 *)(lVar4 + 6 + uVar6 * 8) = *(undefined2 *)(lVar1 + 0x192);
      *(short *)(lVar1 + 0x192) = (short)uVar5;
      return iVar3 + 0x8fffffe;
    }
    if (*(longlong *)(*(longlong *)(param_1 + 0x20) + 8 + (ulonglong)uVar2 * 8) == param_3) break;
    uVar2 = *(ushort *)(*(longlong *)(param_1 + 0x20) + 6 + (ulonglong)uVar2 * 8);
  }
  return uVar2 + 0x9000000;
}



/* ===== 1804a6780 FUN_1804a6780 ===== */

int FUN_1804a6780(longlong param_1,ushort param_2,int param_3)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  
  uVar5 = param_3 << 0x10 | (uint)param_2;
  uVar2 = *(ushort *)(param_1 + 0x1ce);
  while( true ) {
    if (uVar2 == 0) {
      uVar3 = *(uint *)(param_1 + 0x28);
      if (uVar3 <= *(uint *)(param_1 + 0x154)) {
        FUN_1804a6030();
      }
      lVar4 = *(longlong *)(param_1 + 0x20);
      uVar1 = uVar3 - 1;
      uVar6 = (ulonglong)uVar1;
      *(uint *)(param_1 + 0x28) = uVar1;
      *(uint *)(lVar4 + uVar6 * 8) = uVar5;
      *(undefined2 *)(lVar4 + 4 + uVar6 * 8) = 0x1e05;
      *(undefined2 *)(lVar4 + 6 + uVar6 * 8) = *(undefined2 *)(param_1 + 0x1ce);
      *(short *)(param_1 + 0x1ce) = (short)uVar1;
      return uVar3 + 0x4ffffff;
    }
    if (*(uint *)(*(longlong *)(param_1 + 0x20) + (ulonglong)uVar2 * 8) == uVar5) break;
    uVar2 = *(ushort *)(*(longlong *)(param_1 + 0x20) + 6 + (ulonglong)uVar2 * 8);
  }
  return uVar2 + 0x5000000;
}



/* ===== 1804a6830 FUN_1804a6830 ===== */

int FUN_1804a6830(longlong param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = *(int *)(param_1 + 0x28);
  uVar1 = iVar2 - 2;
  if (uVar1 < *(uint *)(param_1 + 0x154)) {
    FUN_1804a6030();
  }
  lVar3 = *(longlong *)(param_1 + 0x20);
  *(uint *)(param_1 + 0x28) = uVar1;
  *(undefined4 *)(lVar3 + 4 + (ulonglong)uVar1 * 8) = 0x1c09;
  *(undefined4 *)(lVar3 + (ulonglong)uVar1 * 8) = 0;
  return iVar2 + 0x8fffffe;
}



/* ===== 1804a6890 FUN_1804a6890 ===== */

void FUN_1804a6890(undefined8 param_1,double *param_2,int *param_3)

{
  ulonglong uVar1;
  
  switch(*(undefined1 *)((longlong)param_3 + 5)) {
  case 0x16:
    *param_2 = (double)~((ulonglong)(*(byte *)(param_3 + 1) & 0x1f) << 0x2f);
    return;
  case 0x17:
    *param_2 = (double)*param_3;
    return;
  case 0x18:
    *param_2 = (double)((ulonglong)~(*(byte *)(param_3 + 1) & 0x1f) << 0x2f |
                       *(ulonglong *)(param_3 + 2));
    return;
  case 0x19:
  case 0x1a:
    break;
  case 0x1b:
    *param_2 = 0.0;
    return;
  case 0x1c:
    *param_2 = *(double *)(param_3 + 2);
    return;
  case 0x1d:
    uVar1 = FUN_1804916f0(param_1,0x18);
    *(undefined1 *)(uVar1 + 9) = 10;
    *(undefined2 *)(uVar1 + 10) = 0xb;
    *(undefined8 *)(uVar1 + 0x10) = *(undefined8 *)(param_3 + 2);
    *param_2 = (double)(uVar1 | 0xfffa800000000000);
  default:
    return;
  }
  uVar1 = *(ulonglong *)(param_3 + 2);
  if ((longlong)uVar1 < 0) {
    *param_2 = (double)uVar1;
    return;
  }
  *param_2 = (double)(longlong)uVar1;
  return;
}



/* ===== 1804a69e0 FUN_1804a69e0 ===== */

bool FUN_1804a69e0(double param_1,double param_2,undefined4 param_3)

{
  switch(param_3) {
  case 0:
    return param_1 < param_2;
  case 1:
    return param_2 <= param_1;
  case 2:
    return param_1 <= param_2;
  case 3:
    return param_2 < param_1;
  case 4:
    return param_1 < param_2;
  case 5:
    return param_2 <= param_1;
  case 6:
    return param_1 <= param_2;
  case 7:
    return param_2 < param_1;
  case 8:
    if (param_1 == param_2) {
      return true;
    }
    break;
  case 9:
    if (param_1 != param_2) {
      return true;
    }
  }
  return false;
}



/* ===== 1804a6a90 FUN_1804a6a90 ===== */

void FUN_1804a6a90(longlong param_1,uint param_2)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = *(uint *)(param_1 + 0xc);
  uVar2 = (ulonglong)uVar1;
  if (uVar1 <= param_2) {
    *(uint *)(param_1 + 0xc) = uVar1;
    return;
  }
  do {
    uVar1 = (int)uVar2 - 1;
    uVar2 = (ulonglong)uVar1;
    *(undefined2 *)
     (param_1 + 0x192 + (ulonglong)*(byte *)(*(longlong *)(param_1 + 0x20) + 5 + uVar2 * 8) * 2) =
         *(undefined2 *)(*(longlong *)(param_1 + 0x20) + 6 + uVar2 * 8);
  } while (param_2 < uVar1);
  *(uint *)(param_1 + 0xc) = uVar1;
  return;
}



/* ===== 1804a6ad0 FUN_1804a6ad0 ===== */

uint FUN_1804a6ad0(undefined8 param_1,undefined8 param_2,int param_3)

{
  uint uVar1;
  
  uVar1 = FUN_180491b00();
  if (param_3 != 0) {
    if (param_3 != 1) {
      if (param_3 == 2) {
        return (uint)((int)uVar1 < 1);
      }
      if (param_3 == 3) {
        return (uint)(0 < (int)uVar1);
      }
      return 0;
    }
    uVar1 = ~uVar1;
  }
  return uVar1 >> 0x1f;
}



/* ===== 1804a6b20 FUN_1804a6b20 ===== */

ulonglong FUN_1804a6b20(longlong param_1,ulonglong param_2)

{
  uint uVar1;
  
  uVar1 = (uint)param_2 & 0x1f000000;
  if (uVar1 != 0xe000000) {
    if (((uint)(param_2 >> 0x18) & 0x1f) - 0xf < 5) {
      *(undefined4 *)(param_1 + 0xba) = 0x5b0e01d3;
    }
    else {
      if (uVar1 != 0x4000000) {
                    /* WARNING: Subroutine does not return */
        FUN_1804954a0(param_1,0xb);
      }
      *(undefined4 *)(param_1 + 0xba) = 0x5e8e0000;
    }
    *(short *)(param_1 + 0xb8) = (short)param_2;
    uVar1 = FUN_1804d6ae0();
    param_2 = (ulonglong)uVar1;
  }
  return param_2 & 0xffffffff;
}



/* ===== 1804a6b90 FUN_1804a6b90 ===== */

ulonglong FUN_1804a6b90(longlong param_1,ulonglong param_2)

{
  uint uVar1;
  
  if (5 < ((uint)(param_2 >> 0x18) & 0x1f) - 0xe) {
    if (((uint)param_2 & 0x1f000000) != 0x4000000) {
                    /* WARNING: Subroutine does not return */
      FUN_1804954a0(param_1,0xb);
    }
    *(undefined4 *)(param_1 + 0xba) = 0x5e8e0000;
    *(short *)(param_1 + 0xb8) = (short)param_2;
    uVar1 = FUN_1804d6ae0();
    param_2 = (ulonglong)uVar1;
  }
  return param_2 & 0xffffffff;
}



/* ===== 1804a6be0 FUN_1804a6be0 ===== */

ulonglong FUN_1804a6be0(longlong param_1,ulonglong param_2)

{
  uint uVar1;
  
  uVar1 = (uint)param_2 & 0x1f000000;
  if (uVar1 != 0x4000000) {
    if (5 < ((uint)(param_2 >> 0x18) & 0x1f) - 0xe) {
                    /* WARNING: Subroutine does not return */
      FUN_1804954a0(param_1,0xb);
    }
    *(undefined2 *)(param_1 + 0xbc) = 0x5d04;
    *(short *)(param_1 + 0xb8) = (short)param_2;
    *(ushort *)(param_1 + 0xba) = (ushort)(uVar1 == 0xe000000);
    uVar1 = FUN_1804d6ae0();
    param_2 = (ulonglong)uVar1;
  }
  return param_2 & 0xffffffff;
}



/* ===== 1804a6c50 FUN_1804a6c50 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804a6c50(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  code *pcVar2;
  undefined1 auStack_c8 [32];
  undefined4 local_a8 [10];
  undefined4 local_80;
  undefined4 local_34;
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_c8;
  lVar1 = *(longlong *)(param_1 + 0x10);
  pcVar2 = *(code **)(lVar1 + 0x158);
  if ((pcVar2 != (code *)0x0) && ((*(byte *)(lVar1 + 0x91) & 0x10) == 0)) {
    *(uint *)(lVar1 + 0x3d4) = *(uint *)(lVar1 + 0x3d4) & 0xffffffef;
    local_34 = (undefined4)
               ((*(longlong *)(param_1 + 0x20) - *(longlong *)(param_1 + 0x38)) + -8 >> 3);
    local_a8[0] = param_2;
    local_80 = param_3;
    if (*(longlong *)(param_1 + 0x30) - *(longlong *)(param_1 + 0x28) < 0xa9) {
      FUN_18048e920(param_1,0x15);
    }
    FUN_1804a9620(lVar1);
    (*pcVar2)(param_1,local_a8);
    *(longlong *)(lVar1 + 0x178) = param_1;
    FUN_1804a9670(lVar1);
  }
  return;
}



/* ===== 1804a6d10 FUN_1804a6d10 ===== */

uint FUN_1804a6d10(longlong param_1,longlong param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_2 + -4);
  if ((char)uVar2 == '2') {
    uVar2 = *(uint *)(param_2 + -0x20000 + (ulonglong)(uVar2 >> 0x10) * 4);
  }
  uVar1 = uVar2 & 0xff;
  if (uVar1 == 0x3f) {
    return ((uVar2 >> 8 & 0xff) - 1) + param_3;
  }
  if ((uVar1 - 0x41 & 0xfffffffd) == 0) {
    return (uVar2 >> 0x10 & 0xff) + 1 + param_3 + (uVar2 >> 8 & 0xff);
  }
  if (uVar1 == 0x49) {
    return ((uVar2 >> 8 & 0xff) - 1) + param_3 + (uVar2 >> 0x10);
  }
  return (uint)*(byte *)(param_1 + 0xb);
}



/* ===== 1804a6d90 FUN_1804a6d90 ===== */

code * FUN_1804a6d90(longlong param_1,ulonglong param_2)

{
  byte bVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  DWORD dwErrCode;
  undefined4 *puVar5;
  longlong *plVar6;
  ulonglong uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  
  puVar5 = (undefined4 *)FUN_18051bfb0();
  uVar2 = *puVar5;
  dwErrCode = GetLastError();
  lVar3 = *(longlong *)(param_1 + 0x10);
  uVar7 = *(ulonglong *)(*(longlong *)(param_1 + 0x20) + -0x10) & 0x7fffffffffff;
  if (*(char *)(uVar7 + 10) == '\0') {
    lVar4 = *(longlong *)(uVar7 + 0x20);
    bVar1 = *(byte *)(lVar4 + -0x5e);
    uVar7 = (ulonglong)*(byte *)(lVar4 + -0x5d);
    iVar9 = (int)(*(longlong *)(param_1 + 0x28) - *(longlong *)(param_1 + 0x20) >> 3);
    if ((*(byte *)(lVar4 + -0x2b) & 2) != 0) {
      uVar7 = (ulonglong)(*(byte *)(lVar4 + -0x5d) + 2 + iVar9);
    }
    if (*(longlong *)(param_1 + 0x30) - *(longlong *)(param_1 + 0x28) <= (longlong)(uVar7 * 8)) {
      FUN_18048e920(param_1);
    }
    iVar9 = (uint)bVar1 - iVar9;
    iVar10 = 0;
    if (-1 < iVar9) {
      iVar10 = iVar9;
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x30) - *(longlong *)(param_1 + 0x28) < 0xa1) {
      FUN_18048e920(param_1,0x14);
    }
    iVar10 = 0;
  }
  *(longlong *)(lVar3 + 0x368) = param_1;
  if ((param_2 & 1) == 0) {
    if ((*(int *)(lVar3 + 0x3d4) != 0) && ((*(byte *)(lVar3 + 0x91) & 0x60) == 0)) {
      FUN_180495d20(lVar3 + 0x2e8,param_2 - 4);
    }
    if ((*(byte *)(lVar3 + 0x91) & 1) != 0) {
      if (iVar10 < 1) {
        FUN_1804a6c50(param_1,0,0xffffffff);
      }
      else {
        iVar9 = iVar10;
        do {
          **(undefined8 **)(param_1 + 0x28) = 0xffffffffffffffff;
          *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + 8;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
        FUN_1804a6c50(param_1,0,0xffffffff);
        do {
          plVar6 = (longlong *)(*(longlong *)(param_1 + 0x28) + -8);
          if (*plVar6 != -1) break;
          iVar10 = iVar10 + -1;
          *(longlong **)(param_1 + 0x28) = plVar6;
        } while (0 < iVar10);
      }
    }
  }
  else {
    param_2 = param_2 & 0xfffffffffffffffe;
    FUN_180495c10(lVar3 + 0x2e8,param_2);
  }
  uVar8 = *(uint *)(param_2 - 4) & 0xff;
  uVar7 = (ulonglong)uVar8;
  if ((((*(byte *)(lVar3 + 0x390) & 1) == 0) || (*(int *)(lVar3 + 0x3d4) != 0)) &&
     ((uVar8 == 0x60 || (uVar8 == 99)))) {
    uVar7 = (ulonglong)(uVar8 + 1);
  }
  puVar5 = (undefined4 *)FUN_18051bfb0();
  *puVar5 = uVar2;
  SetLastError(dwErrCode);
  return FUN_180001000 + (ushort)(&DAT_18056f730)[uVar7];
}



/* ===== 1804a6f80 FUN_1804a6f80 ===== */

void FUN_1804a6f80(longlong param_1)

{
  ushort uVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar3 = 0;
  do {
    uVar1 = (&DAT_18056f730)[uVar3];
    iVar2 = (int)uVar3;
    *(code **)(param_1 + 0x1000 + (ulonglong)(iVar2 + 0xa1) * 8) = FUN_180001000 + uVar1;
    *(code **)(param_1 + 0x1000 + uVar3 * 8) = FUN_180001000 + uVar1;
    uVar1 = (&DAT_18056f730)[iVar2 + 1];
    *(code **)(param_1 + 0x1000 + (ulonglong)(iVar2 + 1) * 8) = FUN_180001000 + uVar1;
    *(code **)(param_1 + 0x1000 + (ulonglong)(iVar2 + 0xa2) * 8) = FUN_180001000 + uVar1;
    uVar1 = (&DAT_18056f730)[iVar2 + 2];
    *(code **)(param_1 + 0x1000 + (ulonglong)(iVar2 + 2) * 8) = FUN_180001000 + uVar1;
    *(code **)(param_1 + 0x1000 + (ulonglong)(iVar2 + 0xa3) * 8) = FUN_180001000 + uVar1;
    uVar1 = (&DAT_18056f730)[iVar2 + 3];
    *(code **)(param_1 + 0x1000 + (ulonglong)(iVar2 + 3) * 8) = FUN_180001000 + uVar1;
    *(code **)(param_1 + 0x1000 + (ulonglong)(iVar2 + 0xa4) * 8) = FUN_180001000 + uVar1;
    uVar1 = (&DAT_18056f730)[iVar2 + 4];
    *(code **)(param_1 + 0x1000 + (ulonglong)(iVar2 + 4) * 8) = FUN_180001000 + uVar1;
    *(code **)(param_1 + 0x1000 + (ulonglong)(iVar2 + 0xa5) * 8) = FUN_180001000 + uVar1;
    uVar1 = (&DAT_18056f730)[iVar2 + 5];
    *(code **)(param_1 + 0x1000 + (ulonglong)(iVar2 + 5) * 8) = FUN_180001000 + uVar1;
    *(code **)(param_1 + 0x1000 + (ulonglong)(iVar2 + 0xa6) * 8) = FUN_180001000 + uVar1;
    uVar1 = (&DAT_18056f730)[iVar2 + 6];
    *(code **)(param_1 + 0x1000 + (ulonglong)(iVar2 + 6) * 8) = FUN_180001000 + uVar1;
    *(code **)(param_1 + 0x1000 + (ulonglong)(iVar2 + 0xa7) * 8) = FUN_180001000 + uVar1;
    uVar1 = (&DAT_18056f730)[iVar2 + 7];
    *(code **)(param_1 + 0x1000 + (ulonglong)(iVar2 + 7) * 8) = FUN_180001000 + uVar1;
    *(code **)(param_1 + 0x1000 + (ulonglong)(iVar2 + 0xa8) * 8) = FUN_180001000 + uVar1;
    uVar1 = (&DAT_18056f730)[iVar2 + 8];
    *(code **)(param_1 + 0x1000 + (ulonglong)(iVar2 + 8) * 8) = FUN_180001000 + uVar1;
    *(code **)(param_1 + 0x1000 + (ulonglong)(iVar2 + 0xa9) * 8) = FUN_180001000 + uVar1;
    uVar1 = (&DAT_18056f730)[iVar2 + 9];
    *(code **)(param_1 + 0x1000 + (ulonglong)(iVar2 + 9) * 8) = FUN_180001000 + uVar1;
    *(code **)(param_1 + 0x1000 + (ulonglong)(iVar2 + 0xaa) * 8) = FUN_180001000 + uVar1;
    uVar1 = (&DAT_18056f730)[iVar2 + 10];
    *(code **)(param_1 + 0x1000 + (ulonglong)(iVar2 + 10) * 8) = FUN_180001000 + uVar1;
    *(code **)(param_1 + 0x1000 + (ulonglong)(iVar2 + 0xab) * 8) = FUN_180001000 + uVar1;
    uVar1 = (&DAT_18056f730)[iVar2 + 0xb];
    *(code **)(param_1 + 0x1000 + (ulonglong)(iVar2 + 0xb) * 8) = FUN_180001000 + uVar1;
    *(code **)(param_1 + 0x1000 + (ulonglong)(iVar2 + 0xac) * 8) = FUN_180001000 + uVar1;
    uVar1 = (&DAT_18056f730)[iVar2 + 0xc];
    *(code **)(param_1 + 0x1000 + (ulonglong)(iVar2 + 0xc) * 8) = FUN_180001000 + uVar1;
    *(code **)(param_1 + 0x1000 + (ulonglong)(iVar2 + 0xad) * 8) = FUN_180001000 + uVar1;
    uVar1 = (&DAT_18056f730)[iVar2 + 0xd];
    *(code **)(param_1 + 0x1000 + (ulonglong)(iVar2 + 0xd) * 8) = FUN_180001000 + uVar1;
    *(code **)(param_1 + 0x1000 + (ulonglong)(iVar2 + 0xae) * 8) = FUN_180001000 + uVar1;
    uVar1 = (&DAT_18056f730)[iVar2 + 0xe];
    *(code **)(param_1 + 0x1000 + (ulonglong)(iVar2 + 0xe) * 8) = FUN_180001000 + uVar1;
    *(code **)(param_1 + 0x1000 + (ulonglong)(iVar2 + 0xaf) * 8) = FUN_180001000 + uVar1;
    uVar1 = (&DAT_18056f730)[iVar2 + 0xf];
    *(code **)(param_1 + 0x1000 + (ulonglong)(iVar2 + 0xf) * 8) = FUN_180001000 + uVar1;
    uVar3 = (ulonglong)(iVar2 + 0x10U);
    *(code **)(param_1 + 0x1000 + (ulonglong)(iVar2 + 0xb0) * 8) = FUN_180001000 + uVar1;
  } while (iVar2 + 0x10U < 0x60);
  uVar5 = (ulonglong)DAT_18056f7f2;
  *(code **)(param_1 + 0x1300) = FUN_180001000 + DAT_18056f7f0;
  uVar4 = (ulonglong)DAT_18056f7f8;
  *(code **)(param_1 + 0x1310) = FUN_180001000 + DAT_18056f7f4;
  uVar3 = (ulonglong)DAT_18056f7f6;
  *(code **)(param_1 + 0x1308) = FUN_180001000 + uVar5;
  *(code **)(param_1 + 0x1318) = FUN_180001000 + uVar3;
  uVar3 = (ulonglong)DAT_18056f7fa;
  *(code **)(param_1 + 0x1320) = FUN_180001000 + uVar4;
  *(code **)(param_1 + 0x1328) = FUN_180001000 + uVar3;
  *(code **)(param_1 + 0x1330) = FUN_180001000 + DAT_18056f7fc;
  *(code **)(param_1 + 0x1338) = FUN_180001000 + DAT_18056f7fe;
  *(code **)(param_1 + 0x1340) = FUN_180001000 + DAT_18056f800;
  *(code **)(param_1 + 0x1348) = FUN_180001000 + DAT_18056f802;
  *(code **)(param_1 + 0x1350) = FUN_180001000 + DAT_18056f804;
  *(code **)(param_1 + 0x1358) = FUN_180001000 + DAT_18056f806;
  *(code **)(param_1 + 0x1360) = FUN_180001000 + DAT_18056f808;
  *(code **)(param_1 + 0x1368) = FUN_180001000 + DAT_18056f80a;
  *(code **)(param_1 + 0x1370) = FUN_180001000 + DAT_18056f80c;
  *(code **)(param_1 + 0x1378) = FUN_180001000 + DAT_18056f80e;
  *(code **)(param_1 + 0x1380) = FUN_180001000 + DAT_18056f810;
  *(code **)(param_1 + 5000) = FUN_180001000 + DAT_18056f812;
  *(code **)(param_1 + 0x1390) = FUN_180001000 + DAT_18056f814;
  *(code **)(param_1 + 0x1398) = FUN_180001000 + DAT_18056f816;
  *(code **)(param_1 + 0x13a0) = FUN_180001000 + DAT_18056f818;
  *(code **)(param_1 + 0x13a8) = FUN_180001000 + DAT_18056f81a;
  *(code **)(param_1 + 0x13b0) = FUN_180001000 + DAT_18056f81c;
  *(code **)(param_1 + 0x13b8) = FUN_180001000 + DAT_18056f81e;
  *(code **)(param_1 + 0x13c0) = FUN_180001000 + DAT_18056f820;
  *(code **)(param_1 + 0x13c8) = FUN_180001000 + DAT_18056f822;
  *(code **)(param_1 + 0x13d0) = FUN_180001000 + DAT_18056f824;
  *(code **)(param_1 + 0x13d8) = FUN_180001000 + DAT_18056f826;
  *(code **)(param_1 + 0x13e0) = FUN_180001000 + DAT_18056f828;
  *(code **)(param_1 + 0x13e8) = FUN_180001000 + DAT_18056f82a;
  *(code **)(param_1 + 0x13f0) = FUN_180001000 + DAT_18056f82c;
  *(code **)(param_1 + 0x13f8) = FUN_180001000 + DAT_18056f82e;
  *(code **)(param_1 + 0x1400) = FUN_180001000 + DAT_18056f830;
  *(code **)(param_1 + 0x1408) = FUN_180001000 + DAT_18056f832;
  *(code **)(param_1 + 0x1410) = FUN_180001000 + DAT_18056f834;
  *(code **)(param_1 + 0x1418) = FUN_180001000 + DAT_18056f836;
  *(code **)(param_1 + 0x1420) = FUN_180001000 + DAT_18056f838;
  *(code **)(param_1 + 0x1428) = FUN_180001000 + DAT_18056f83a;
  *(code **)(param_1 + 0x1430) = FUN_180001000 + DAT_18056f83c;
  *(code **)(param_1 + 0x1438) = FUN_180001000 + DAT_18056f83e;
  *(code **)(param_1 + 0x1440) = FUN_180001000 + DAT_18056f840;
  *(code **)(param_1 + 0x1448) = FUN_180001000 + DAT_18056f842;
  *(code **)(param_1 + 0x1450) = FUN_180001000 + DAT_18056f844;
  *(code **)(param_1 + 0x1458) = FUN_180001000 + DAT_18056f846;
  *(code **)(param_1 + 0x1460) = FUN_180001000 + DAT_18056f848;
  *(code **)(param_1 + 0x1468) = FUN_180001000 + DAT_18056f84a;
  *(code **)(param_1 + 0x1470) = FUN_180001000 + DAT_18056f84c;
  *(code **)(param_1 + 0x1478) = FUN_180001000 + DAT_18056f84e;
  *(code **)(param_1 + 0x1480) = FUN_180001000 + DAT_18056f850;
  *(code **)(param_1 + 0x1488) = FUN_180001000 + DAT_18056f852;
  *(code **)(param_1 + 0x1490) = FUN_180001000 + DAT_18056f854;
  *(code **)(param_1 + 0x1498) = FUN_180001000 + DAT_18056f856;
  *(code **)(param_1 + 0x14a0) = FUN_180001000 + DAT_18056f858;
  *(code **)(param_1 + 0x14a8) = FUN_180001000 + DAT_18056f85a;
  *(code **)(param_1 + 0x14b0) = FUN_180001000 + DAT_18056f85c;
  *(code **)(param_1 + 0x14b8) = FUN_180001000 + DAT_18056f85e;
  *(code **)(param_1 + 0x14c0) = FUN_180001000 + DAT_18056f860;
  *(code **)(param_1 + 0x14c8) = FUN_180001000 + DAT_18056f862;
  *(code **)(param_1 + 0x14d0) = FUN_180001000 + DAT_18056f864;
  *(code **)(param_1 + 0x14d8) = FUN_180001000 + DAT_18056f866;
  *(code **)(param_1 + 0x14e0) = FUN_180001000 + DAT_18056f868;
  *(code **)(param_1 + 0x14e8) = FUN_180001000 + DAT_18056f86a;
  *(code **)(param_1 + 0x14f0) = FUN_180001000 + DAT_18056f86c;
  *(code **)(param_1 + 0x14f8) = FUN_180001000 + DAT_18056f86e;
  *(code **)(param_1 + 0x1500) = FUN_180001000 + DAT_18056f870;
  *(undefined8 *)(param_1 + 0x1278) = *(undefined8 *)(param_1 + 0x1280);
  *(undefined8 *)(param_1 + 0x1290) = *(undefined8 *)(param_1 + 0x1298);
  *(undefined1 **)(param_1 + 0x1230) = &LAB_18000253e;
  *(undefined8 *)(param_1 + 0x12a8) = *(undefined8 *)(param_1 + 0x12b0);
  *(code **)(param_1 + 0x1300) = FUN_180001000 + uVar5;
  *(code **)(param_1 + 0x1318) = FUN_180001000 + uVar4;
  *(undefined4 *)(param_1 + 0x1d0) = 0x1466;
  *(undefined4 *)(param_1 + 0x1d4) = 0x1466;
  *(undefined4 *)(param_1 + 0x1808) = 0x68;
  *(undefined4 *)(param_1 + 0x180c) = 0x69;
  *(undefined4 *)(param_1 + 0x1810) = 0x6a;
  *(undefined4 *)(param_1 + 0x1814) = 0x6b;
  *(undefined4 *)(param_1 + 0x1818) = 0x6c;
  *(undefined4 *)(param_1 + 0x181c) = 0x6d;
  *(undefined4 *)(param_1 + 0x1820) = 0x6e;
  *(undefined4 *)(param_1 + 0x1824) = 0x6f;
  *(undefined4 *)(param_1 + 0x1828) = 0x70;
  *(undefined4 *)(param_1 + 0x182c) = 0x71;
  *(undefined4 *)(param_1 + 0x1830) = 0x72;
  *(undefined4 *)(param_1 + 0x1834) = 0x73;
  *(undefined4 *)(param_1 + 0x1838) = 0x74;
  *(undefined4 *)(param_1 + 0x183c) = 0x75;
  *(undefined4 *)(param_1 + 0x1840) = 0x76;
  *(undefined4 *)(param_1 + 0x1844) = 0x77;
  *(undefined4 *)(param_1 + 0x1848) = 0x78;
  *(undefined4 *)(param_1 + 0x184c) = 0x79;
  *(undefined4 *)(param_1 + 0x1850) = 0x7a;
  *(undefined4 *)(param_1 + 0x1854) = 0x7b;
  *(undefined4 *)(param_1 + 0x1858) = 0x7c;
  *(undefined4 *)(param_1 + 0x185c) = 0x7d;
  *(undefined4 *)(param_1 + 0x1860) = 0x7e;
  *(undefined4 *)(param_1 + 0x1864) = 0x7f;
  *(undefined4 *)(param_1 + 0x1868) = 0x80;
  *(undefined4 *)(param_1 + 0x186c) = 0x81;
  *(undefined4 *)(param_1 + 0x1870) = 0x82;
  *(undefined4 *)(param_1 + 0x1874) = 0x83;
  *(undefined4 *)(param_1 + 0x1878) = 0x84;
  *(undefined4 *)(param_1 + 0x187c) = 0x85;
  *(undefined4 *)(param_1 + 0x1880) = 0x86;
  *(undefined4 *)(param_1 + 0x1884) = 0x87;
  *(undefined4 *)(param_1 + 0x1888) = 0x88;
  *(undefined4 *)(param_1 + 0x188c) = 0x89;
  *(undefined4 *)(param_1 + 0x1890) = 0x8a;
  *(undefined4 *)(param_1 + 0x1894) = 0x8b;
  *(undefined4 *)(param_1 + 0x1898) = 0x8c;
  *(undefined4 *)(param_1 + 0x189c) = 0x8d;
  *(undefined4 *)(param_1 + 0x18a0) = 0x8e;
  *(undefined4 *)(param_1 + 0x18a4) = 0x8f;
  *(undefined4 *)(param_1 + 0x18a8) = 0x90;
  *(undefined4 *)(param_1 + 0x18ac) = 0x91;
  *(undefined4 *)(param_1 + 0x18b0) = 0x92;
  *(undefined4 *)(param_1 + 0x18b4) = 0x93;
  *(undefined4 *)(param_1 + 0x18b8) = 0x94;
  *(undefined4 *)(param_1 + 0x18bc) = 0x95;
  *(undefined4 *)(param_1 + 0x18c0) = 0x96;
  *(undefined4 *)(param_1 + 0x18c4) = 0x97;
  *(undefined4 *)(param_1 + 0x18c8) = 0x98;
  *(undefined4 *)(param_1 + 0x18cc) = 0x99;
  *(undefined4 *)(param_1 + 0x18d0) = 0x9a;
  *(undefined4 *)(param_1 + 0x18d4) = 0x9b;
  *(undefined4 *)(param_1 + 0x18d8) = 0x9c;
  *(undefined4 *)(param_1 + 0x18dc) = 0x9d;
  *(undefined4 *)(param_1 + 0x18e0) = 0x9e;
  *(undefined4 *)(param_1 + 0x18e4) = 0x9f;
  *(undefined4 *)(param_1 + 0x18e8) = 0xa0;
  return;
}



/* ===== 1804a78e0 FUN_1804a78e0 ===== */

void FUN_1804a78e0(longlong param_1)

{
  short sVar1;
  undefined4 uVar2;
  
  sVar1 = *(short *)(param_1 + 0x964) * 2 + -1;
  uVar2 = CONCAT22(sVar1,sVar1);
  *(undefined4 *)(param_1 + 0xf20) = uVar2;
  *(undefined4 *)(param_1 + 0xf24) = uVar2;
  *(undefined4 *)(param_1 + 0xf28) = uVar2;
  *(undefined4 *)(param_1 + 0xf2c) = uVar2;
  *(undefined4 *)(param_1 + 0xf30) = uVar2;
  *(undefined4 *)(param_1 + 0xf34) = uVar2;
  *(undefined4 *)(param_1 + 0xf38) = uVar2;
  *(undefined4 *)(param_1 + 0xf3c) = uVar2;
  *(undefined4 *)(param_1 + 0xf40) = uVar2;
  *(undefined4 *)(param_1 + 0xf44) = uVar2;
  *(undefined4 *)(param_1 + 0xf48) = uVar2;
  *(undefined4 *)(param_1 + 0xf4c) = uVar2;
  *(undefined4 *)(param_1 + 0xf50) = uVar2;
  *(undefined4 *)(param_1 + 0xf54) = uVar2;
  *(undefined4 *)(param_1 + 0xf58) = uVar2;
  *(undefined4 *)(param_1 + 0xf5c) = uVar2;
  *(undefined4 *)(param_1 + 0xf60) = uVar2;
  *(undefined4 *)(param_1 + 0xf64) = uVar2;
  *(undefined4 *)(param_1 + 0xf68) = uVar2;
  *(undefined4 *)(param_1 + 0xf6c) = uVar2;
  *(undefined4 *)(param_1 + 0xf70) = uVar2;
  *(undefined4 *)(param_1 + 0xf74) = uVar2;
  *(undefined4 *)(param_1 + 0xf78) = uVar2;
  *(undefined4 *)(param_1 + 0xf7c) = uVar2;
  *(undefined4 *)(param_1 + 0xf80) = uVar2;
  *(undefined4 *)(param_1 + 0xf84) = uVar2;
  *(undefined4 *)(param_1 + 0xf88) = uVar2;
  *(undefined4 *)(param_1 + 0xf8c) = uVar2;
  *(undefined4 *)(param_1 + 0xf90) = uVar2;
  *(undefined4 *)(param_1 + 0xf94) = uVar2;
  *(undefined4 *)(param_1 + 0xf98) = uVar2;
  *(undefined4 *)(param_1 + 0xf9c) = uVar2;
  return;
}



/* ===== 1804a7940 FUN_1804a7940 ===== */

void FUN_1804a7940(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  DWORD dwErrCode;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  
  puVar9 = (undefined4 *)FUN_18051bfb0();
  uVar2 = *puVar9;
  dwErrCode = GetLastError();
  lVar3 = *(longlong *)(param_1 + 0x10);
  uVar10 = *(ulonglong *)(param_1 + 0x50) & 0xfffffffffffffffc;
  lVar4 = *(longlong *)
           ((*(ulonglong *)(*(longlong *)(param_1 + 0x20) + -0x10) & 0x7fffffffffff) + 0x20);
  uVar5 = *(ulonglong *)(uVar10 + 0x60);
  *(ulonglong *)(uVar10 + 0x60) = param_2;
  lVar1 = lVar4 + -0x68;
  uVar6 = FUN_1804a6d10(lVar1,param_2,*(undefined4 *)(uVar10 + 0x20));
  uVar10 = (ulonglong)uVar6;
  *(ulonglong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x20) + uVar10 * 8;
  if (*(int *)(lVar3 + 0x3d4) != 0) {
    *(longlong *)(lVar3 + 0x368) = param_1;
    FUN_180495d20(lVar3 + 0x2e8,param_2 - 4);
  }
  if (((*(byte *)(lVar3 + 0x91) & 8) != 0) && (*(int *)(lVar3 + 0x150) == 0)) {
    *(undefined4 *)(lVar3 + 0x150) = *(undefined4 *)(lVar3 + 0x154);
    FUN_1804a6c50(param_1,3,0xffffffff);
    *(ulonglong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x20) + uVar10 * 8;
  }
  if (((*(byte *)(lVar3 + 0x91) & 4) != 0) &&
     (((iVar7 = FUN_18048aa20(lVar1,(int)((longlong)((param_2 - lVar1) + -0x68) >> 2) + -1),
       param_2 <= uVar5 ||
       (*(uint *)(lVar4 + -0x5c) <= (int)((longlong)((uVar5 - lVar1) + -0x68) >> 2) - 1U)) ||
      (iVar8 = FUN_18048aa20(lVar1), iVar7 != iVar8)))) {
    FUN_1804a6c50(param_1,2,iVar7);
    *(ulonglong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x20) + uVar10 * 8;
  }
  if (((*(byte *)(lVar3 + 0x91) & 2) != 0) && (*(byte *)(param_2 - 4) - 0x49 < 4)) {
    FUN_1804a6c50(param_1,1,0xffffffff);
  }
  puVar9 = (undefined4 *)FUN_18051bfb0();
  *puVar9 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x0001804a7acf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetLastError(dwErrCode);
  return;
}



/* ===== 1804a7ae0 FUN_1804a7ae0 ===== */

void FUN_1804a7ae0(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  DWORD dwErrCode;
  uint uVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  
  puVar5 = (undefined4 *)FUN_18051bfb0();
  uVar1 = *puVar5;
  dwErrCode = GetLastError();
  uVar6 = *(ulonglong *)(param_1 + 0x50) & 0xfffffffffffffffc;
  uVar2 = *(undefined8 *)(uVar6 + 0x60);
  lVar3 = *(longlong *)
           ((*(ulonglong *)(*(longlong *)(param_1 + 0x20) + -0x10) & 0x7fffffffffff) + 0x20);
  *(undefined8 *)(uVar6 + 0x60) = param_2;
  uVar4 = FUN_1804a6d10(lVar3 + -0x68,param_2,*(undefined4 *)(uVar6 + 0x20));
  *(ulonglong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x20) + (ulonglong)uVar4 * 8;
  FUN_1804a96c0(param_1);
  *(undefined8 *)(uVar6 + 0x60) = uVar2;
  lVar3 = *(longlong *)(param_1 + 0x10);
  *(longlong *)(lVar3 + 0x178) = param_1;
  *(undefined4 *)(lVar3 + 0xb8) = 0xffffffff;
  puVar5 = (undefined4 *)FUN_18051bfb0();
  *puVar5 = uVar1;
                    /* WARNING: Could not recover jumptable at 0x0001804a7b81. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetLastError(dwErrCode);
  return;
}



/* ===== 1804a7b90 FUN_1804a7b90 ===== */

void FUN_1804a7b90(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  DWORD dwErrCode;
  uint uVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  if ((*(byte *)(param_1 + -599) & 0x20) == 0) {
    puVar5 = (undefined4 *)FUN_18051bfb0();
    uVar1 = *puVar5;
    dwErrCode = GetLastError();
    lVar2 = *(longlong *)(param_1 + 0x80);
    uVar6 = *(ulonglong *)(lVar2 + 0x50) & 0xfffffffffffffffc;
    uVar3 = *(undefined8 *)(uVar6 + 0x60);
    *(longlong *)(uVar6 + 0x60) = param_2;
    lVar7 = *(longlong *)(lVar2 + 0x20);
    uVar4 = FUN_1804a6d10(*(longlong *)((*(ulonglong *)(lVar7 + -0x10) & 0x7fffffffffff) + 0x20) +
                          -0x68,param_2 + 4,*(undefined4 *)(uVar6 + 0x20));
    *(ulonglong *)(lVar2 + 0x28) = lVar7 + (ulonglong)uVar4 * 8;
    FUN_180495e10(param_1,param_2 + -4);
    *(undefined8 *)(uVar6 + 0x60) = uVar3;
    puVar5 = (undefined4 *)FUN_18051bfb0();
    *puVar5 = uVar1;
    SetLastError(dwErrCode);
  }
  return;
}



/* ===== 1804a7c70 FUN_1804a7c70 ===== */

void FUN_1804a7c70(longlong param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ushort uVar8;
  ushort uVar9;
  byte bVar10;
  byte bVar11;
  short sVar12;
  int iVar13;
  code *pcVar14;
  undefined8 *puVar15;
  undefined4 uVar16;
  code *pcVar17;
  undefined8 *puVar18;
  undefined1 *puVar19;
  code *pcVar20;
  longlong lVar21;
  code *pcVar22;
  byte bVar23;
  byte bVar24;
  
  if (param_2 == 0) {
    iVar13 = FUN_1804a97a0();
  }
  else {
    iVar13 = 0;
  }
  bVar1 = *(byte *)(param_1 + 0x91);
  bVar2 = *(byte *)(param_1 + 0x92);
  bVar3 = -(*(int *)(param_1 + 0x3d4) != 0);
  bVar10 = *(byte *)(param_1 + 0x390) & 1;
  bVar11 = bVar10 << 4;
  bVar23 = (char)bVar1 >> 7 & 0x44U | -((bVar1 & 0xc) != 0) & 4U | bVar3 & 0x25;
  bVar24 = bVar23 | bVar11 | bVar1 & 3;
  if (bVar2 == bVar24) goto LAB_1804a85c3;
  *(byte *)(param_1 + 0x92) = bVar24;
  if ((bVar3 & 0x20 | bVar11) == 0x10) {
    pcVar14 = FUN_180001000 + DAT_18056f7ce;
    pcVar17 = FUN_180001000 + DAT_18056f7d4;
    pcVar20 = FUN_180001000 + DAT_18056f7bc;
    pcVar22 = FUN_180001000 + DAT_18056f7da;
    uVar8 = DAT_18056f7f6;
    uVar9 = DAT_18056f7f0;
  }
  else {
    pcVar14 = *(code **)(param_1 + 0x1728);
    pcVar20 = (code *)&LAB_18000253e;
    pcVar17 = *(code **)(param_1 + 0x1740);
    pcVar22 = *(code **)(param_1 + 0x1758);
    uVar8 = DAT_18056f7f8;
    uVar9 = DAT_18056f7f2;
  }
  *(code **)(param_1 + 0x1720) = pcVar14;
  *(code **)(param_1 + 0x1738) = pcVar17;
  *(code **)(param_1 + 0x16d8) = pcVar20;
  bVar23 = bVar23 & 4;
  *(code **)(param_1 + 0x1750) = pcVar22;
  if (((bVar24 ^ bVar2) & 100) == 0) {
    if (bVar23 == 0) {
      *(code **)(param_1 + 0x1218) = pcVar14;
      *(code **)(param_1 + 0x1230) = pcVar17;
      *(code **)(param_1 + 0x11d0) = pcVar20;
      *(code **)(param_1 + 0x1248) = pcVar22;
      if ((bVar1 & 2) != 0) goto LAB_1804a7eb2;
      *(undefined8 *)(param_1 + 0x11e8) = *(undefined8 *)(param_1 + 0x16f0);
      *(undefined8 *)(param_1 + 0x11f0) = *(undefined8 *)(param_1 + 0x16f8);
      *(undefined8 *)(param_1 + 0x11f8) = *(undefined8 *)(param_1 + 0x1700);
      *(undefined8 *)(param_1 + 0x1200) = *(undefined8 *)(param_1 + 0x1708);
    }
  }
  else if (bVar23 == 0) {
    lVar21 = 6;
    puVar15 = (undefined8 *)(param_1 + 4000);
    puVar18 = (undefined8 *)(param_1 + 0x14a8);
    do {
      uVar4 = puVar18[1];
      uVar5 = puVar18[2];
      uVar6 = puVar18[3];
      *puVar15 = *puVar18;
      puVar15[1] = uVar4;
      uVar4 = puVar18[4];
      uVar7 = puVar18[5];
      puVar15[2] = uVar5;
      puVar15[3] = uVar6;
      uVar5 = puVar18[6];
      uVar6 = puVar18[7];
      puVar15[4] = uVar4;
      puVar15[5] = uVar7;
      uVar4 = puVar18[8];
      uVar7 = puVar18[9];
      puVar15[6] = uVar5;
      puVar15[7] = uVar6;
      uVar5 = puVar18[10];
      uVar6 = puVar18[0xb];
      puVar15[8] = uVar4;
      puVar15[9] = uVar7;
      uVar4 = puVar18[0xc];
      uVar7 = puVar18[0xd];
      puVar15[10] = uVar5;
      puVar15[0xb] = uVar6;
      uVar5 = puVar18[0xe];
      uVar6 = puVar18[0xf];
      puVar15[0xc] = uVar4;
      puVar15[0xd] = uVar7;
      puVar15[0xe] = uVar5;
      puVar15[0xf] = uVar6;
      lVar21 = lVar21 + -1;
      puVar15 = puVar15 + 0x10;
      puVar18 = puVar18 + 0x10;
    } while (lVar21 != 0);
    if ((bVar1 & 2) != 0) {
LAB_1804a7eb2:
      *(undefined1 **)(param_1 + 0x11e8) = &LAB_180004d94;
      *(undefined1 **)(param_1 + 0x11f0) = &LAB_180004d94;
      *(undefined1 **)(param_1 + 0x11f8) = &LAB_180004d94;
      *(undefined1 **)(param_1 + 0x1200) = &LAB_180004d94;
    }
  }
  else {
    if (((char)bVar1 >> 7 & 0x40U) == 0) {
      puVar19 = &LAB_180004da1;
      if ((bVar3 & 0x20) != 0) {
        puVar19 = &LAB_180004d79;
      }
    }
    else {
      puVar19 = &DAT_180004f35;
    }
    lVar21 = 0xc;
    puVar15 = (undefined8 *)(param_1 + 4000);
    do {
      *puVar15 = puVar19;
      puVar15[1] = puVar19;
      puVar15[2] = puVar19;
      puVar15[3] = puVar19;
      puVar15[4] = puVar19;
      puVar15[5] = puVar19;
      puVar15[6] = puVar19;
      puVar15[7] = puVar19;
      lVar21 = lVar21 + -1;
      puVar15 = puVar15 + 8;
    } while (lVar21 != 0);
  }
  if (((bVar24 ^ bVar2) & 1) == 0) {
    if ((bVar24 & 1) == 0) goto LAB_1804a8535;
  }
  else if ((bVar24 & 1) == 0) {
    *(code **)(param_1 + 0x12a0) = FUN_180001000 + DAT_18056f7f0;
    *(code **)(param_1 + 0x12a8) = FUN_180001000 + DAT_18056f7f2;
    *(code **)(param_1 + 0x12b0) = FUN_180001000 + DAT_18056f7f4;
    *(code **)(param_1 + 0x12b8) = FUN_180001000 + DAT_18056f7f6;
    *(code **)(param_1 + 0x12c0) = FUN_180001000 + DAT_18056f7f8;
    *(code **)(param_1 + 0x12c8) = FUN_180001000 + DAT_18056f7fa;
    *(code **)(param_1 + 0x12d0) = FUN_180001000 + DAT_18056f7fc;
    *(code **)(param_1 + 0x12d8) = FUN_180001000 + DAT_18056f7fe;
    *(code **)(param_1 + 0x12e0) = FUN_180001000 + DAT_18056f800;
    *(code **)(param_1 + 0x12e8) = FUN_180001000 + DAT_18056f802;
    *(code **)(param_1 + 0x12f0) = FUN_180001000 + DAT_18056f804;
    *(code **)(param_1 + 0x12f8) = FUN_180001000 + DAT_18056f806;
    *(code **)(param_1 + 0x1300) = FUN_180001000 + DAT_18056f808;
    *(code **)(param_1 + 0x1308) = FUN_180001000 + DAT_18056f80a;
    *(code **)(param_1 + 0x1310) = FUN_180001000 + DAT_18056f80c;
    *(code **)(param_1 + 0x1318) = FUN_180001000 + DAT_18056f80e;
    *(code **)(param_1 + 0x1320) = FUN_180001000 + DAT_18056f810;
    *(code **)(param_1 + 0x1328) = FUN_180001000 + DAT_18056f812;
    *(code **)(param_1 + 0x1330) = FUN_180001000 + DAT_18056f814;
    *(code **)(param_1 + 0x1338) = FUN_180001000 + DAT_18056f816;
    *(code **)(param_1 + 0x1340) = FUN_180001000 + DAT_18056f818;
    *(code **)(param_1 + 0x1348) = FUN_180001000 + DAT_18056f81a;
    *(code **)(param_1 + 0x1350) = FUN_180001000 + DAT_18056f81c;
    *(code **)(param_1 + 0x1358) = FUN_180001000 + DAT_18056f81e;
    *(code **)(param_1 + 0x1360) = FUN_180001000 + DAT_18056f820;
    *(code **)(param_1 + 0x1368) = FUN_180001000 + DAT_18056f822;
    *(code **)(param_1 + 0x1370) = FUN_180001000 + DAT_18056f824;
    *(code **)(param_1 + 0x1378) = FUN_180001000 + DAT_18056f826;
    *(code **)(param_1 + 0x1380) = FUN_180001000 + DAT_18056f828;
    *(code **)(param_1 + 5000) = FUN_180001000 + DAT_18056f82a;
    *(code **)(param_1 + 0x1390) = FUN_180001000 + DAT_18056f82c;
    *(code **)(param_1 + 0x1398) = FUN_180001000 + DAT_18056f82e;
    *(code **)(param_1 + 0x13a0) = FUN_180001000 + DAT_18056f830;
    *(code **)(param_1 + 0x13a8) = FUN_180001000 + DAT_18056f832;
    *(code **)(param_1 + 0x13b0) = FUN_180001000 + DAT_18056f834;
    *(code **)(param_1 + 0x13b8) = FUN_180001000 + DAT_18056f836;
    *(code **)(param_1 + 0x13c0) = FUN_180001000 + DAT_18056f838;
    *(code **)(param_1 + 0x13c8) = FUN_180001000 + DAT_18056f83a;
    *(code **)(param_1 + 0x13d0) = FUN_180001000 + DAT_18056f83c;
    *(code **)(param_1 + 0x13d8) = FUN_180001000 + DAT_18056f83e;
    *(code **)(param_1 + 0x13e0) = FUN_180001000 + DAT_18056f840;
    *(code **)(param_1 + 0x13e8) = FUN_180001000 + DAT_18056f842;
    *(code **)(param_1 + 0x13f0) = FUN_180001000 + DAT_18056f844;
    *(code **)(param_1 + 0x13f8) = FUN_180001000 + DAT_18056f846;
    *(code **)(param_1 + 0x1400) = FUN_180001000 + DAT_18056f848;
    *(code **)(param_1 + 0x1408) = FUN_180001000 + DAT_18056f84a;
    *(code **)(param_1 + 0x1410) = FUN_180001000 + DAT_18056f84c;
    *(code **)(param_1 + 0x1418) = FUN_180001000 + DAT_18056f84e;
    *(code **)(param_1 + 0x1420) = FUN_180001000 + DAT_18056f850;
    *(code **)(param_1 + 0x1428) = FUN_180001000 + DAT_18056f852;
    *(code **)(param_1 + 0x1430) = FUN_180001000 + DAT_18056f854;
    *(code **)(param_1 + 0x1438) = FUN_180001000 + DAT_18056f856;
    *(code **)(param_1 + 0x1440) = FUN_180001000 + DAT_18056f858;
    *(code **)(param_1 + 0x1448) = FUN_180001000 + DAT_18056f85a;
    *(code **)(param_1 + 0x1450) = FUN_180001000 + DAT_18056f85c;
    *(code **)(param_1 + 0x1458) = FUN_180001000 + DAT_18056f85e;
    *(code **)(param_1 + 0x1460) = FUN_180001000 + DAT_18056f860;
    *(code **)(param_1 + 0x1468) = FUN_180001000 + DAT_18056f862;
    *(code **)(param_1 + 0x1470) = FUN_180001000 + DAT_18056f864;
    *(code **)(param_1 + 0x1478) = FUN_180001000 + DAT_18056f866;
    *(code **)(param_1 + 0x1480) = FUN_180001000 + DAT_18056f868;
    *(code **)(param_1 + 0x1488) = FUN_180001000 + DAT_18056f86a;
    *(code **)(param_1 + 0x1490) = FUN_180001000 + DAT_18056f86c;
    *(code **)(param_1 + 0x1498) = FUN_180001000 + DAT_18056f86e;
    *(code **)(param_1 + 0x14a0) = FUN_180001000 + DAT_18056f870;
LAB_1804a8535:
    *(code **)(param_1 + 0x12a0) = FUN_180001000 + uVar9;
    *(code **)(param_1 + 0x12b8) = FUN_180001000 + uVar8;
  }
  else {
    *(undefined1 **)(param_1 + 0x12a0) = &LAB_180004e37;
    *(undefined1 **)(param_1 + 0x12a8) = &LAB_180004e37;
    *(undefined1 **)(param_1 + 0x12b0) = &LAB_180004e37;
    *(undefined1 **)(param_1 + 0x12b8) = &LAB_180004e37;
    *(undefined1 **)(param_1 + 0x12c0) = &LAB_180004e37;
    *(undefined1 **)(param_1 + 0x12c8) = &LAB_180004e37;
    *(undefined1 **)(param_1 + 0x12d0) = &LAB_180004e37;
    *(undefined1 **)(param_1 + 0x12d8) = &LAB_180004e37;
    *(undefined1 **)(param_1 + 0x12e0) = &LAB_180004e37;
    *(undefined1 **)(param_1 + 0x12e8) = &LAB_180004e37;
    *(undefined1 **)(param_1 + 0x12f0) = &LAB_180004e37;
    *(undefined1 **)(param_1 + 0x12f8) = &LAB_180004e37;
    *(undefined1 **)(param_1 + 0x1300) = &LAB_180004e37;
    *(undefined1 **)(param_1 + 0x1308) = &LAB_180004e37;
    *(undefined1 **)(param_1 + 0x1310) = &LAB_180004e37;
    *(undefined1 **)(param_1 + 0x1318) = &LAB_180004e37;
    *(undefined1 **)(param_1 + 0x1320) = &LAB_180004e37;
    *(undefined1 **)(param_1 + 0x1328) = &LAB_180004e37;
    *(undefined1 **)(param_1 + 0x1330) = &LAB_180004e37;
    *(undefined1 **)(param_1 + 0x1338) = &LAB_180004e37;
    *(undefined1 **)(param_1 + 0x1340) = &LAB_180004e37;
    *(undefined1 **)(param_1 + 0x1348) = &LAB_180004e37;
    *(undefined1 **)(param_1 + 0x1350) = &LAB_180004e37;
    *(undefined1 **)(param_1 + 0x1358) = &LAB_180004e37;
    *(undefined1 **)(param_1 + 0x1360) = &LAB_180004e37;
    *(undefined1 **)(param_1 + 0x1368) = &LAB_180004e37;
    *(undefined1 **)(param_1 + 0x1370) = &LAB_180004e37;
    *(undefined1 **)(param_1 + 0x1378) = &LAB_180004e37;
    *(undefined1 **)(param_1 + 0x1380) = &LAB_180004e37;
    *(undefined1 **)(param_1 + 5000) = &LAB_180004e37;
    *(undefined1 **)(param_1 + 0x1390) = &LAB_180004e37;
    *(undefined1 **)(param_1 + 0x1398) = &LAB_180004e37;
    *(undefined1 **)(param_1 + 0x13a0) = &LAB_180004e37;
    *(undefined1 **)(param_1 + 0x13a8) = &LAB_180004e37;
    *(undefined1 **)(param_1 + 0x13b0) = &LAB_180004e37;
    *(undefined1 **)(param_1 + 0x13b8) = &LAB_180004e37;
    *(undefined1 **)(param_1 + 0x13c0) = &LAB_180004e37;
    *(undefined1 **)(param_1 + 0x13c8) = &LAB_180004e37;
    *(undefined1 **)(param_1 + 0x13d0) = &LAB_180004e37;
    *(undefined1 **)(param_1 + 0x13d8) = &LAB_180004e37;
    *(undefined1 **)(param_1 + 0x13e0) = &LAB_180004e37;
    *(undefined1 **)(param_1 + 0x13e8) = &LAB_180004e37;
    *(undefined1 **)(param_1 + 0x13f0) = &LAB_180004e37;
    *(undefined1 **)(param_1 + 0x13f8) = &LAB_180004e37;
    *(undefined1 **)(param_1 + 0x1400) = &LAB_180004e37;
    *(undefined1 **)(param_1 + 0x1408) = &LAB_180004e37;
    *(undefined1 **)(param_1 + 0x1410) = &LAB_180004e37;
    *(undefined1 **)(param_1 + 0x1418) = &LAB_180004e37;
    *(undefined1 **)(param_1 + 0x1420) = &LAB_180004e37;
    *(undefined1 **)(param_1 + 0x1428) = &LAB_180004e37;
    *(undefined1 **)(param_1 + 0x1430) = &LAB_180004e37;
    *(undefined1 **)(param_1 + 0x1438) = &LAB_180004e37;
    *(undefined1 **)(param_1 + 0x1440) = &LAB_180004e37;
    *(undefined1 **)(param_1 + 0x1448) = &LAB_180004e37;
    *(undefined1 **)(param_1 + 0x1450) = &LAB_180004e37;
    *(undefined1 **)(param_1 + 0x1458) = &LAB_180004e37;
    *(undefined1 **)(param_1 + 0x1460) = &LAB_180004e37;
    *(undefined1 **)(param_1 + 0x1468) = &LAB_180004e37;
    *(undefined1 **)(param_1 + 0x1470) = &LAB_180004e37;
    *(undefined1 **)(param_1 + 0x1478) = &LAB_180004e37;
    *(undefined1 **)(param_1 + 0x1480) = &LAB_180004e37;
    *(undefined1 **)(param_1 + 0x1488) = &LAB_180004e37;
    *(undefined1 **)(param_1 + 0x1490) = &LAB_180004e37;
    *(undefined1 **)(param_1 + 0x1498) = &LAB_180004e37;
    *(undefined1 **)(param_1 + 0x14a0) = &LAB_180004e37;
  }
  if ((bVar10 != 0) && ((bVar2 & 0x10) == 0)) {
    sVar12 = *(short *)(param_1 + 0x964) * 2 + -1;
    uVar16 = CONCAT22(sVar12,sVar12);
    *(undefined4 *)(param_1 + 0xf20) = uVar16;
    *(undefined4 *)(param_1 + 0xf24) = uVar16;
    *(undefined4 *)(param_1 + 0xf28) = uVar16;
    *(undefined4 *)(param_1 + 0xf2c) = uVar16;
    *(undefined4 *)(param_1 + 0xf30) = uVar16;
    *(undefined4 *)(param_1 + 0xf34) = uVar16;
    *(undefined4 *)(param_1 + 0xf38) = uVar16;
    *(undefined4 *)(param_1 + 0xf3c) = uVar16;
    *(undefined4 *)(param_1 + 0xf40) = uVar16;
    *(undefined4 *)(param_1 + 0xf44) = uVar16;
    *(undefined4 *)(param_1 + 0xf48) = uVar16;
    *(undefined4 *)(param_1 + 0xf4c) = uVar16;
    *(undefined4 *)(param_1 + 0xf50) = uVar16;
    *(undefined4 *)(param_1 + 0xf54) = uVar16;
    *(undefined4 *)(param_1 + 0xf58) = uVar16;
    *(undefined4 *)(param_1 + 0xf5c) = uVar16;
    *(undefined4 *)(param_1 + 0xf60) = uVar16;
    *(undefined4 *)(param_1 + 0xf64) = uVar16;
    *(undefined4 *)(param_1 + 0xf68) = uVar16;
    *(undefined4 *)(param_1 + 0xf6c) = uVar16;
    *(undefined4 *)(param_1 + 0xf70) = uVar16;
    *(undefined4 *)(param_1 + 0xf74) = uVar16;
    *(undefined4 *)(param_1 + 0xf78) = uVar16;
    *(undefined4 *)(param_1 + 0xf7c) = uVar16;
    *(undefined4 *)(param_1 + 0xf80) = uVar16;
    *(undefined4 *)(param_1 + 0xf84) = uVar16;
    *(undefined4 *)(param_1 + 0xf88) = uVar16;
    *(undefined4 *)(param_1 + 0xf8c) = uVar16;
    *(undefined4 *)(param_1 + 0xf90) = uVar16;
    *(undefined4 *)(param_1 + 0xf94) = uVar16;
    *(undefined4 *)(param_1 + 0xf98) = uVar16;
    *(undefined4 *)(param_1 + 0xf9c) = uVar16;
  }
LAB_1804a85c3:
  if (iVar13 == 0) {
    return;
  }
  FUN_1804a97d0();
  return;
}



/* ===== 1804a85f0 FUN_1804a85f0 ===== */

undefined8 FUN_1804a85f0(longlong param_1,int param_2,uint param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  *(uint *)(lVar1 + 0x3d4) = *(uint *)(lVar1 + 0x3d4) & 0xffffffef;
  if ((*(byte *)(lVar1 + 0x91) & 0x40) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_180484220(param_1,0x381);
  }
  uVar4 = param_3 & 0xff;
  switch(uVar4) {
  case 0:
    if ((param_3 >> 9 & 1) != 0) {
      FUN_1804958a0(param_1);
      return 1;
    }
    uVar4 = *(uint *)(lVar1 + 0x390) & 0xfffffffe;
    if ((param_3 >> 8 & 1) != 0) {
      uVar4 = *(uint *)(lVar1 + 0x390) | 1;
    }
    *(uint *)(lVar1 + 0x390) = uVar4;
    FUN_1804a7c70(lVar1,0);
    return 1;
  default:
    return 0;
  case 2:
  case 3:
  case 4:
    break;
  case 5:
    if ((param_3 >> 9 & 1) == 0) {
      return 0;
    }
    FUN_180495870(lVar1 + 0x2e8);
    return 1;
  case 0x10:
    if ((param_3 >> 8 & 1) == 0) {
      *(undefined1 *)(lVar1 + 0x174) = 0x66;
      return 1;
    }
    if (param_2 == 0) {
      return 0;
    }
    lVar3 = (longlong)param_2;
    if (param_2 < 1) {
      lVar2 = *(longlong *)(param_1 + 0x28);
    }
    else {
      lVar2 = *(longlong *)(param_1 + 0x20);
      lVar3 = lVar3 + -1;
    }
    uVar7 = *(ulonglong *)(lVar2 + lVar3 * 8);
    if ((int)((longlong)uVar7 >> 0x2f) != -4) {
      return 0;
    }
    uVar5 = uVar7 >> 0x27 & 0xff;
    if (uVar5 == 0xff) {
      *(undefined8 *)(lVar1 + 0x160) = 0;
      *(undefined1 *)(lVar1 + 0x174) = 0x67;
      return 1;
    }
    *(ulonglong *)(lVar1 + 0x160) =
         (ulonglong)*(uint *)(*(longlong *)(lVar1 + 0x70) + uVar5 * 4) << 0x20 |
         uVar7 & 0x7fffffffff;
    *(undefined1 *)(lVar1 + 0x174) = 0x67;
    return 1;
  }
  if (param_2 == 0) {
    lVar3 = *(longlong *)(param_1 + 0x20);
    uVar7 = *(ulonglong *)(lVar3 + -8);
    if ((uVar7 & 3) == 0) {
      uVar7 = *(ulonglong *)(lVar3 + (ulonglong)*(byte *)(uVar7 - 3) * -8 + -0x20);
    }
    else {
      uVar7 = *(ulonglong *)(lVar3 + (-0x10 - (uVar7 & 0xfffffffffffffff8)));
    }
LAB_1804a86fe:
    if (*(char *)((uVar7 & 0x7fffffffffff) + 10) == '\0') {
      uVar7 = *(longlong *)((uVar7 & 0x7fffffffffff) + 0x20) - 0x68;
      goto LAB_1804a8727;
    }
  }
  else {
    if (param_2 < 1) {
      puVar6 = (ulonglong *)(*(longlong *)(param_1 + 0x28) + (longlong)param_2 * 8);
    }
    else {
      puVar6 = (ulonglong *)(*(longlong *)(param_1 + 0x20) + ((longlong)param_2 + -1) * 8);
    }
    uVar7 = *puVar6;
    if ((int)((longlong)uVar7 >> 0x2f) == -9) goto LAB_1804a86fe;
  }
  if ((int)((longlong)uVar7 >> 0x2f) != -8) {
    return 0;
  }
  uVar7 = uVar7 & 0x7fffffffffff;
LAB_1804a8727:
  if (uVar4 != 4) {
    if ((param_3 >> 8 & 1) == 0) {
      if ((param_3 >> 9 & 1) == 0) {
        *(byte *)(uVar7 + 0x3d) = *(byte *)(uVar7 + 0x3d) | 8;
      }
      FUN_180495a00(lVar1,uVar7);
    }
    else {
      *(byte *)(uVar7 + 0x3d) = *(byte *)(uVar7 + 0x3d) & 0xf7;
      FUN_180495db0(uVar7);
    }
    if (uVar4 == 2) {
      return 1;
    }
  }
  FUN_1804a88a0(lVar1,uVar7,param_3);
  return 1;
}



/* ===== 1804a88a0 FUN_1804a88a0 ===== */

void FUN_1804a88a0(undefined8 param_1,longlong param_2,uint param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (((*(byte *)(param_2 + 0x3d) & 1) != 0) &&
     (lVar2 = -(ulonglong)*(uint *)(param_2 + 0x30), lVar2 < 0)) {
    if ((param_3 >> 8 & 1) == 0) {
      do {
        lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x20) + lVar2 * 8);
        if (*(char *)(lVar1 + 9) == '\a') {
          if ((param_3 & 0x200) == 0) {
            *(byte *)(lVar1 + 0x3d) = *(byte *)(lVar1 + 0x3d) | 8;
          }
          FUN_180495a00(param_1,lVar1);
          FUN_1804a88a0(param_1,lVar1,param_3);
        }
        lVar2 = lVar2 + 1;
      } while (lVar2 < 0);
    }
    else {
      do {
        lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x20) + lVar2 * 8);
        if (*(char *)(lVar1 + 9) == '\a') {
          *(byte *)(lVar1 + 0x3d) = *(byte *)(lVar1 + 0x3d) & 0xf7;
          FUN_180495db0(lVar1);
          FUN_1804a88a0(param_1,lVar1,param_3);
        }
        lVar2 = lVar2 + 1;
      } while (lVar2 < 0);
    }
  }
  return;
}



/* ===== 1804a8970 FUN_1804a8970 ===== */

ulonglong FUN_1804a8970(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  int iVar3;
  
  puVar2 = (ulonglong *)(*(longlong *)(param_1 + 0x20) + (longlong)param_2 * 8 + -8);
  if (puVar2 < *(ulonglong **)(param_1 + 0x28)) {
    uVar1 = *puVar2;
    iVar3 = (int)((longlong)uVar1 >> 0x2f);
    if (iVar3 == -8) {
      return uVar1 & 0x7fffffffffff;
    }
    if (iVar3 == -9) {
      if (*(char *)((uVar1 & 0x7fffffffffff) + 10) == '\0') {
        return *(longlong *)((uVar1 & 0x7fffffffffff) + 0x20) - 0x68;
      }
      if (param_3 != 0) {
        return 0;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1804840e0(param_1,param_2,6);
}



/* ===== 1804a89f0 FUN_1804a89f0 ===== */

void FUN_1804a89f0(longlong param_1,int param_2)

{
  if (*(ulonglong *)(param_1 + 0x28) <= (*(longlong *)(param_1 + 0x20) + (longlong)param_2 * 8) - 8U
     ) {
                    /* WARNING: Subroutine does not return */
    FUN_1804840c0(param_1,param_2,0x227);
  }
  return;
}



/* ===== 1804a8a20 FUN_1804a8a20 ===== */

ulonglong FUN_1804a8a20(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  
  puVar2 = (ulonglong *)(*(longlong *)(param_1 + 0x20) + (longlong)param_2 * 8 + -8);
  if ((*(ulonglong **)(param_1 + 0x28) <= puVar2) ||
     (uVar1 = *puVar2, (int)((longlong)uVar1 >> 0x2f) != -9)) {
                    /* WARNING: Subroutine does not return */
    FUN_1804840e0(param_1,param_2,6);
  }
  return uVar1 & 0x7fffffffffff;
}



/* ===== 1804a8a70 FUN_1804a8a70 ===== */

int FUN_1804a8a70(longlong param_1,int param_2)

{
  double *pdVar1;
  uint uVar2;
  int iVar3;
  
  pdVar1 = (double *)(*(longlong *)(param_1 + 0x20) + ((longlong)param_2 + -1) * 8);
  if (pdVar1 < *(double **)(param_1 + 0x28)) {
    uVar2 = (uint)((longlong)*pdVar1 >> 0x2f);
    if (uVar2 < 0xfffffff3) {
LAB_1804a8ac4:
      return (int)*pdVar1;
    }
    if (uVar2 == 0xfffffffb) {
      iVar3 = FUN_1804972a0((ulonglong)*pdVar1 & 0x7fffffffffff,pdVar1);
      if (iVar3 != 0) goto LAB_1804a8ac4;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1804840e0(param_1,param_2,3);
}



/* ===== 1804a8af0 FUN_1804a8af0 ===== */

void FUN_1804a8af0(longlong param_1,int param_2,int param_3,int param_4)

{
  double *pdVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  
  pdVar1 = (double *)(*(longlong *)(param_1 + 0x20) + ((longlong)param_2 + -1) * 8);
  if (*(double **)(param_1 + 0x28) <= pdVar1) {
LAB_1804a8b84:
                    /* WARNING: Subroutine does not return */
    FUN_1804840e0(param_1,param_2,3);
  }
  uVar6 = (uint)((longlong)*pdVar1 >> 0x2f);
  if (uVar6 < 0xfffffff2) {
    iVar3 = (int)*pdVar1;
    if (iVar3 < param_3) goto LAB_1804a8b93;
    bVar9 = SBORROW4(iVar3,param_4);
    bVar8 = iVar3 - param_4 < 0;
    bVar7 = iVar3 == param_4;
  }
  else {
    if (uVar6 != 0xfffffff5) goto LAB_1804a8b84;
    uVar4 = (ulonglong)*pdVar1 & 0x7fffffffffff;
    if (*(short *)(uVar4 + 10) != 0xb) {
      if (*(short *)(uVar4 + 10) != 0xc) goto LAB_1804a8b84;
      if (((param_3 < 0) || ((ulonglong)(longlong)param_3 <= *(ulonglong *)(uVar4 + 0x10))) &&
         (*(ulonglong *)(uVar4 + 0x10) <= (ulonglong)(longlong)param_4)) {
        return;
      }
      goto LAB_1804a8b93;
    }
    lVar2 = *(longlong *)(uVar4 + 0x10);
    if (lVar2 < param_3) goto LAB_1804a8b93;
    lVar5 = (longlong)param_4;
    bVar9 = SBORROW8(lVar2,lVar5);
    bVar8 = lVar2 - lVar5 < 0;
    bVar7 = lVar2 == lVar5;
  }
  if (bVar7 || bVar9 != bVar8) {
    return;
  }
LAB_1804a8b93:
                    /* WARNING: Subroutine does not return */
  FUN_1804840c0(param_1,param_2,0x482);
}



/* ===== 1804a8bb0 FUN_1804a8bb0 ===== */

ulonglong FUN_1804a8bb0(longlong param_1,int param_2)

{
  ulonglong *puVar1;
  uint uVar2;
  int iVar3;
  
  puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0x20) + ((longlong)param_2 + -1) * 8);
  if (puVar1 < *(ulonglong **)(param_1 + 0x28)) {
    uVar2 = (uint)((longlong)*puVar1 >> 0x2f);
    if (uVar2 < 0xfffffff3) {
LAB_1804a8c04:
      return *puVar1;
    }
    if (uVar2 == 0xfffffffb) {
      iVar3 = FUN_1804972a0(*puVar1 & 0x7fffffffffff,puVar1);
      if (iVar3 != 0) goto LAB_1804a8c04;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1804840e0(param_1,param_2,3);
}



/* ===== 1804a8c30 FUN_1804a8c30 ===== */

int FUN_1804a8c30(longlong param_1,int param_2,int param_3,byte *param_4)

{
  longlong *plVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  
  if ((param_3 < 0) ||
     ((plVar1 = (longlong *)(*(longlong *)(param_1 + 0x20) + ((longlong)param_2 + -1) * 8),
      plVar1 < *(longlong **)(param_1 + 0x28) && (*plVar1 != -1)))) {
    lVar5 = FUN_1804a8d10(param_1,param_2);
  }
  else {
    lVar5 = 0;
  }
  if (lVar5 == 0) {
    return param_3;
  }
  uVar3 = *(uint *)(lVar5 + 0x14);
  iVar6 = 0;
  bVar2 = *param_4;
  while( true ) {
    if (bVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1804841e0(param_1,param_2,0x4eb,(void *)(lVar5 + 0x18));
    }
    bVar2 = *param_4;
    if ((bVar2 == uVar3) &&
       (iVar4 = memcmp((void *)(lVar5 + 0x18),param_4 + 1,(ulonglong)uVar3), iVar4 == 0)) break;
    iVar6 = iVar6 + 1;
    param_4 = param_4 + (ulonglong)bVar2 + 1;
    bVar2 = *param_4;
  }
  return iVar6;
}



/* ===== 1804a8d10 FUN_1804a8d10 ===== */

ulonglong FUN_1804a8d10(longlong param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  uint uVar3;
  
  puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0x20) + ((longlong)(int)param_2 + -1) * 8);
  if (puVar1 < *(ulonglong **)(param_1 + 0x28)) {
    uVar3 = (uint)((longlong)*puVar1 >> 0x2f);
    if (uVar3 == 0xfffffffb) {
      return *puVar1 & 0x7fffffffffff;
    }
    if (uVar3 < 0xfffffff3) {
      uVar2 = thunk_FUN_1804b8f90(param_1,puVar1);
      *puVar1 = uVar2 | 0xfffd800000000000;
      return uVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1804840e0(param_1,param_2,4);
}



/* ===== 1804a8d80 FUN_1804a8d80 ===== */

ulonglong FUN_1804a8d80(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  
  puVar2 = (ulonglong *)(*(longlong *)(param_1 + 0x20) + (longlong)param_2 * 8 + -8);
  if ((*(ulonglong **)(param_1 + 0x28) <= puVar2) ||
     (uVar1 = *puVar2, (int)((longlong)uVar1 >> 0x2f) != -5)) {
                    /* WARNING: Subroutine does not return */
    FUN_1804840e0(param_1,param_2,4);
  }
  return uVar1 & 0x7fffffffffff;
}



/* ===== 1804a8dd0 FUN_1804a8dd0 ===== */

ulonglong FUN_1804a8dd0(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  
  puVar2 = (ulonglong *)(*(longlong *)(param_1 + 0x20) + (longlong)param_2 * 8 + -8);
  if ((*(ulonglong **)(param_1 + 0x28) <= puVar2) ||
     (uVar1 = *puVar2, (int)((longlong)uVar1 >> 0x2f) != -0xc)) {
                    /* WARNING: Subroutine does not return */
    FUN_1804840e0(param_1,param_2,5);
  }
  return uVar1 & 0x7fffffffffff;
}



/* ===== 1804a8e20 FUN_1804a8e20 ===== */

ulonglong FUN_1804a8e20(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  
  puVar2 = (ulonglong *)(*(longlong *)(param_1 + 0x20) + (longlong)param_2 * 8 + -8);
  if (puVar2 < *(ulonglong **)(param_1 + 0x28)) {
    uVar1 = *puVar2;
    if ((int)((longlong)uVar1 >> 0x2f) == -0xc) {
      return uVar1 & 0x7fffffffffff;
    }
    if (uVar1 == 0xffffffffffffffff) {
      return 0;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1804840c0(param_1,param_2,0x249);
}



/* ===== 1804a8e80 FUN_1804a8e80 ===== */

int FUN_1804a8e80(longlong param_1,int param_2,int param_3)

{
  double *pdVar1;
  double dVar2;
  uint uVar3;
  int iVar4;
  
  pdVar1 = (double *)(*(longlong *)(param_1 + 0x20) + ((longlong)param_2 + -1) * 8);
  if ((pdVar1 < *(double **)(param_1 + 0x28)) && (dVar2 = *pdVar1, dVar2 != -NAN)) {
    uVar3 = (uint)((longlong)dVar2 >> 0x2f);
    if (0xfffffff2 < uVar3) {
      if (uVar3 != 0xfffffffb) {
LAB_1804a8ef2:
                    /* WARNING: Subroutine does not return */
        FUN_1804840e0(param_1,param_2,3);
      }
      iVar4 = FUN_1804972a0((ulonglong)dVar2 & 0x7fffffffffff,pdVar1);
      if (iVar4 == 0) goto LAB_1804a8ef2;
    }
    param_3 = (int)*pdVar1;
  }
  return param_3;
}



/* ===== 1804a8f10 FUN_1804a8f10 ===== */

ulonglong FUN_1804a8f10(longlong param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  longlong *plVar2;
  ulonglong uVar3;
  uint uVar4;
  
  plVar2 = (longlong *)(*(longlong *)(param_1 + 0x20) + ((longlong)(int)param_2 + -1) * 8);
  if ((*(longlong **)(param_1 + 0x28) <= plVar2) || (*plVar2 == -1)) {
    return 0;
  }
  puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0x20) + ((longlong)(int)param_2 + -1) * 8);
  if (puVar1 < *(ulonglong **)(param_1 + 0x28)) {
    uVar4 = (uint)((longlong)*puVar1 >> 0x2f);
    if (uVar4 == 0xfffffffb) {
      return *puVar1 & 0x7fffffffffff;
    }
    if (uVar4 < 0xfffffff3) {
      uVar3 = thunk_FUN_1804b8f90(param_1,puVar1);
      *puVar1 = uVar3 | 0xfffd800000000000;
      return uVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1804840e0(param_1,param_2,4);
}



/* ===== 1804a8f40 FUN_1804a8f40 ===== */

undefined8 FUN_1804a8f40(longlong param_1,undefined8 param_2,undefined1 param_3,char *param_4)

{
  longlong lVar1;
  longlong lVar2;
  size_t sVar3;
  undefined8 uVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  
  FUN_18047f2b0(param_1,param_2,0);
  uVar6 = *(ulonglong *)(*(longlong *)(param_1 + 0x28) + -8) & 0x7fffffffffff;
  *(undefined1 *)(uVar6 + 10) = param_3;
  *(longlong *)(uVar6 + 0x20) = *(longlong *)(param_1 + 0x10) + 0x170;
  lVar1 = *(longlong *)
           ((*(ulonglong *)(*(longlong *)(param_1 + 0x20) + -0x10) & 0x7fffffffffff) + 0x10);
  sVar3 = strlen(param_4);
  uVar4 = FUN_180491d30(param_1,param_4,sVar3);
  puVar5 = (ulonglong *)FUN_180493400(param_1,lVar1,uVar4);
  *puVar5 = uVar6 | 0xfffb800000000000;
  if ((*(byte *)(lVar1 + 8) & 4) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x10);
    *(byte *)(lVar1 + 8) = *(byte *)(lVar1 + 8) & 0xfb;
    *(undefined8 *)(lVar1 + 0x18) = *(undefined8 *)(lVar2 + 0x40);
    *(longlong *)(lVar2 + 0x40) = lVar1;
  }
  puVar5 = *(ulonglong **)(param_1 + 0x28);
  *(ulonglong **)(param_1 + 0x28) = puVar5 + 1;
  *puVar5 = uVar6 | 0xfffb800000000000;
  return 1;
}



/* ===== 1804a9000 FUN_1804a9000 ===== */

void FUN_1804a9000(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180484f60(param_1,0xffffd8f0,"_PRELOAD",4);
  FUN_18047f2b0(param_1,param_3,0);
  *(undefined8 *)((*(ulonglong *)(*(longlong *)(param_1 + 0x28) + -8) & 0x7fffffffffff) + 0x10) =
       param_4;
  FUN_18047f8e0(param_1,0xfffffffe,param_2);
  *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + -8;
  return;
}



/* ===== 1804a9080 FUN_1804a9080 ===== */

void FUN_1804a9080(longlong param_1,undefined8 param_2,undefined1 param_3,undefined4 param_4)

{
  ulonglong uVar1;
  
  FUN_18047f2b0(param_1,param_2,param_4);
  uVar1 = *(ulonglong *)(*(longlong *)(param_1 + 0x28) + -8) & 0x7fffffffffff;
  *(undefined1 *)(uVar1 + 10) = param_3;
  *(longlong *)(uVar1 + 0x20) = *(longlong *)(param_1 + 0x10) + 0x170;
  return;
}



/* ===== 1804a90d0 FUN_1804a90d0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804a90d0(longlong param_1,longlong param_2,byte *param_3,undefined8 *param_4)

{
  ulonglong *puVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  ulonglong *puVar8;
  undefined8 *puVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  byte *pbVar14;
  ulonglong uVar15;
  undefined1 auStack_198 [32];
  uint local_178;
  longlong local_170;
  ulonglong local_168;
  ulonglong local_160;
  undefined8 *local_158;
  ulonglong local_150;
  ulonglong local_148;
  byte *local_140;
  undefined1 local_138 [8];
  longlong local_130;
  byte *local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined8 local_c0;
  undefined4 local_8c;
  undefined4 local_84;
  ulonglong local_40;
  
  local_40 = DAT_180919500 ^ (ulonglong)auStack_198;
  local_150 = *(ulonglong *)(param_1 + 0x48);
  bVar2 = *param_3;
  bVar3 = param_3[1];
  lVar13 = *(longlong *)(param_1 + 0x10);
  bVar4 = param_3[2];
  local_158 = param_4;
  if (param_2 == 0) {
    FUN_18047e8f0(param_1,0);
  }
  else {
    FUN_180484f60(param_1,0xffffd8f0,"_LOADED",0x10);
    FUN_18047eb70(param_1,0xffffffff);
    puVar9 = (undefined8 *)(*(longlong *)(param_1 + 0x28) + -8);
    if ((int)((longlong)*puVar9 >> 0x2f) != -0xc) {
      *(undefined8 **)(param_1 + 0x28) = puVar9;
      lVar5 = FUN_180484f60(param_1,0xffffd8ee,param_2,bVar4);
      if (lVar5 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1804842f0(param_1,0x805);
      }
      **(ulonglong **)(param_1 + 0x28) =
           (*(ulonglong **)(param_1 + 0x28))[-1] & 0x7fffffffffff | 0xfffa000000000000;
      *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + 8;
      FUN_18047f8e0(param_1,0xfffffffd);
    }
    lVar5 = *(longlong *)(param_1 + 0x28);
    puVar8 = (ulonglong *)(lVar5 + -8);
    *(ulonglong **)(param_1 + 0x28) = puVar8;
    *(ulonglong *)(lVar5 + -0x10) = *puVar8 & 0x7fffffffffff | 0xfffa000000000000;
  }
  lVar13 = lVar13 + ((ulonglong)bVar3 + 0x5ea) * 4;
  param_3 = param_3 + 3;
  local_160 = 0;
  local_178 = (uint)bVar2;
  local_148 = *(longlong *)(param_1 + 0x28) - *(longlong *)(param_1 + 0x20);
  local_168 = *(ulonglong *)(*(longlong *)(param_1 + 0x28) + -8) & 0x7fffffffffff;
  local_170 = (longlong)local_148 >> 3;
  if ((*(byte *)(local_168 + 8) & 4) != 0) {
    lVar5 = *(longlong *)(param_1 + 0x10);
    *(byte *)(local_168 + 8) = *(byte *)(local_168 + 8) & 0xfb;
    *(undefined8 *)(local_168 + 0x18) = *(undefined8 *)(lVar5 + 0x40);
    *(ulonglong *)(lVar5 + 0x40) = local_168;
  }
  local_148 = local_148 & 0xfffffffffffffff8;
  *(undefined1 *)(local_168 + 10) = 0;
  uVar6 = local_160;
  uVar12 = local_168;
  uVar11 = local_178;
LAB_1804a9280:
  while( true ) {
    bVar2 = *param_3;
    pbVar14 = param_3 + 1;
    uVar15 = (ulonglong)(bVar2 & 0x3f);
    uVar10 = bVar2 & 0xc0;
    local_140 = pbVar14;
    if (uVar10 == 0xc0) break;
    uVar11 = (int)(*(longlong *)(param_1 + 0x28) - *(longlong *)(param_1 + 0x20) >> 3) -
             (int)local_170;
    uVar6 = FUN_180493b30(param_1,uVar11,local_150);
    if (uVar11 != 0) {
      lVar5 = *(longlong *)(param_1 + 0x20) + local_148;
      *(longlong *)(param_1 + 0x28) = lVar5;
      FUN_180540530(uVar6 + 0x30,lVar5,(ulonglong)uVar11 << 3);
    }
    *(char *)(uVar6 + 10) = (char)local_178;
    param_3 = param_3 + uVar15 + 1;
    local_178 = local_178 + 1;
    if ((bVar2 & 0xc0) == 0) {
      *(longlong *)(uVar6 + 0x20) = *(longlong *)(param_1 + 0x10) + 0x170;
LAB_1804a9314:
      uVar7 = *local_158;
      local_158 = local_158 + 1;
    }
    else {
      *(longlong *)(uVar6 + 0x20) = lVar13;
      lVar13 = lVar13 + 4;
      if (uVar10 != 0x80) goto LAB_1804a9314;
      uVar7 = *(undefined8 *)(local_160 + 0x28);
    }
    *(undefined8 *)(uVar6 + 0x28) = uVar7;
    if ((bVar2 & 0x3f) != 0) {
      uVar7 = FUN_180491d30(param_1,local_140,uVar15);
      puVar8 = (ulonglong *)FUN_180493400(param_1,local_168,uVar7);
      *puVar8 = uVar6 | 0xfffb800000000000;
    }
    uVar12 = local_168;
    uVar11 = local_178;
    local_160 = uVar6;
  }
  switch(bVar2) {
  case 0xf9:
    bVar2 = *pbVar14;
    uVar7 = FUN_180491d30(param_1,param_3 + 2,bVar2);
    FUN_180540170(local_138,0,0xf8);
    local_118 = param_3 + (ulonglong)bVar2 + 2;
    local_110 = 0xffffffffffffffff;
    local_108 = 0xffffffff;
    local_8c = 2;
    local_84 = 1;
    local_130 = param_1;
    local_c0 = uVar7;
    lVar5 = FUN_18049c9a0(local_138);
    *(undefined4 *)(lVar5 + 0x48) = 0xffffffff;
    uVar6 = FUN_180493b80(param_1,lVar5,*(undefined8 *)(param_1 + 0x48));
    puVar8 = (ulonglong *)FUN_180493400(param_1,local_168,uVar7);
    *puVar8 = uVar6 | 0xfffb800000000000;
    pbVar14 = local_118;
    break;
  case 0xfa:
    puVar8 = (ulonglong *)(*(longlong *)(param_1 + 0x28) + -8);
    puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0x28) + -0x10);
    *(ulonglong **)(param_1 + 0x28) = puVar1;
    uVar15 = *puVar8;
    if (((int)((longlong)uVar15 >> 0x2f) == -5) && (*(int *)((uVar15 & 0x7fffffffffff) + 0x14) == 0)
       ) {
      local_150 = *puVar1 & 0x7fffffffffff;
      param_3 = pbVar14;
      goto LAB_1804a9280;
    }
    puVar8 = (ulonglong *)FUN_1804931f0(param_1,uVar12,puVar8);
    *puVar8 = *puVar1;
    break;
  case 0xfb:
    **(undefined8 **)(param_1 + 0x28) = *(undefined8 *)pbVar14;
    *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + 8;
    param_3 = param_3 + 9;
    goto LAB_1804a9280;
  case 0xfc:
    **(undefined8 **)(param_1 + 0x28) = (*(undefined8 **)(param_1 + 0x28))[-(ulonglong)*pbVar14];
    *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + 8;
    param_3 = param_3 + 2;
    uVar11 = local_178;
    goto LAB_1804a9280;
  case 0xfd:
    puVar8 = *(ulonglong **)(param_1 + 0x28);
    *(ulonglong **)(param_1 + 0x28) = puVar8 + 1;
    *puVar8 = uVar6 | 0xfffb800000000000;
    param_3 = pbVar14;
    goto LAB_1804a9280;
  case 0xfe:
    local_178 = uVar11 + 1;
    param_3 = pbVar14;
    uVar11 = local_178;
    goto LAB_1804a9280;
  case 0xff:
    return;
  default:
    puVar8 = *(ulonglong **)(param_1 + 0x28);
    *(ulonglong **)(param_1 + 0x28) = puVar8 + 1;
    uVar6 = FUN_180491d30(param_1,pbVar14,uVar15);
    *puVar8 = uVar6 | 0xfffd800000000000;
    pbVar14 = pbVar14 + uVar15;
  }
  uVar6 = local_160;
  uVar12 = local_168;
  param_3 = pbVar14;
  uVar11 = local_178;
  goto LAB_1804a9280;
}



/* ===== 1804a9620 FUN_1804a9620 ===== */

void FUN_1804a9620(longlong param_1)

{
  if (DAT_180c9ebc0 == 0) {
    *(byte *)(param_1 + 0x91) = *(byte *)(param_1 + 0x91) | 0x10;
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_180c9ec20);
  *(byte *)(param_1 + 0x91) = *(byte *)(param_1 + 0x91) | 0x10;
                    /* WARNING: Could not recover jumptable at 0x0001804a9653. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_180c9ec20);
  return;
}



/* ===== 1804a9670 FUN_1804a9670 ===== */

void FUN_1804a9670(longlong param_1)

{
  if (DAT_180c9ebc0 == 0) {
    *(byte *)(param_1 + 0x91) = *(byte *)(param_1 + 0x91) & 0xef;
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_180c9ec20);
  *(byte *)(param_1 + 0x91) = *(byte *)(param_1 + 0x91) & 0xef;
                    /* WARNING: Could not recover jumptable at 0x0001804a96a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_180c9ec20);
  return;
}



/* ===== 1804a96c0 FUN_1804a96c0 ===== */

void FUN_1804a96c0(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  byte bVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_180c9ec20);
  uVar2 = DAT_180c9ebfc;
  bVar3 = *(byte *)(lVar1 + 0x91);
  if ((bVar3 & 0x20) == 0) {
    DAT_180c9ebfc = 0;
    *(undefined1 *)(lVar1 + 0x91) = 0x20;
    FUN_1804a7c70(lVar1,1);
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_180c9ec20);
    (*DAT_180c9ebc8)(DAT_180c9ebd0,param_1,uVar2,DAT_180c9ec00);
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_180c9ec20);
    bVar3 = (bVar3 ^ *(byte *)(lVar1 + 0x91)) & 0x7f ^ *(byte *)(lVar1 + 0x91);
  }
  else {
    bVar3 = bVar3 & 0x7f;
  }
  *(byte *)(lVar1 + 0x91) = bVar3;
  FUN_1804a7c70(lVar1,1);
                    /* WARNING: Could not recover jumptable at 0x0001804a9793. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_180c9ec20);
  return;
}



/* ===== 1804a97a0 FUN_1804a97a0 ===== */

undefined8 FUN_1804a97a0(void)

{
  if (DAT_180c9ebc0 == 0) {
    return 0;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_180c9ec20);
  return 1;
}



/* ===== 1804a97d0 FUN_1804a97d0 ===== */

void FUN_1804a97d0(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001804a97d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_180c9ec20);
  return;
}



/* ===== 1804a97e0 FUN_1804a97e0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_1804a97e0(undefined8 param_1,undefined8 param_2,undefined4 param_3,ulonglong *param_4)

{
  _DAT_180c9ebd8 = CONCAT44(DAT_180c9ebe8._4_4_,(int)DAT_180c9ebe8);
  _DAT_180c9ebf0 = param_1;
  FUN_18048a0a0(param_1,&DAT_180c9ebd8,param_2,param_3);
  *param_4 = (ulonglong)(uint)(DAT_180c9ebd8 - (int)DAT_180c9ebe8);
  return CONCAT44(DAT_180c9ebe8._4_4_,(int)DAT_180c9ebe8);
}



/* ===== 1804a9830 FUN_1804a9830 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1804a9830(longlong param_1,char *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  
  iVar4 = 10;
  cVar1 = *param_2;
  puVar2 = DAT_180c9ebc0;
  do {
    DAT_180c9ebc0 = puVar2;
    if (cVar1 == '\0') {
      if (puVar2 != (undefined8 *)0x0) {
        if (*(undefined8 **)(param_1 + 0x10) == puVar2) {
          DAT_180c9ebc0 = (undefined8 *)0x0;
          _DAT_180c9ec50 = 1;
          WaitForSingleObject(DAT_180c9ec48,0xffffffff);
          DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_180c9ec20);
          *(byte *)((longlong)puVar2 + 0x91) = *(byte *)((longlong)puVar2 + 0x91) & 0x7f;
          FUN_1804a7c70(puVar2,0);
          *(undefined4 *)((longlong)puVar2 + 0xf1c) = 0;
          FUN_1804958a0(param_1);
          uVar3 = DAT_180c9ebe8;
          uVar5 = DAT_180c9ebe0 - (int)DAT_180c9ebe8;
          puVar2[2] = puVar2[2] - (ulonglong)uVar5;
          (*(code *)*puVar2)(puVar2[1],uVar3,(ulonglong)uVar5,0);
          _DAT_180c9ebe0 = 0;
          _DAT_180c9ebd8 = 0;
        }
        if (DAT_180c9ebc0 != (undefined8 *)0x0) {
          return;
        }
      }
      DAT_180c9ebc0 = *(undefined8 **)(param_1 + 0x10);
      DAT_180c9ebfc = 0;
      DAT_180c9ebe8 = 0;
      _DAT_180c9ebe0 = 0;
      _DAT_180c9ebd8 = 0;
      DAT_180c9ebc8 = param_3;
      DAT_180c9ebd0 = param_4;
      _DAT_180c9ebf0 = param_1;
      _DAT_180c9ebf8 = iVar4;
      if ((DAT_180c9ec08 == (HMODULE)0x0) &&
         (DAT_180c9ec08 = LoadLibraryExA("winmm.dll",(HANDLE)0x0,0), DAT_180c9ec08 != (HMODULE)0x0))
      {
        DAT_180c9ec10 = GetProcAddress(DAT_180c9ec08,"timeBeginPeriod");
        _DAT_180c9ec18 = GetProcAddress(DAT_180c9ec08,"timeEndPeriod");
        if ((DAT_180c9ec10 == (FARPROC)0x0) || (_DAT_180c9ec18 == (FARPROC)0x0)) {
          DAT_180c9ec08 = (HMODULE)0x0;
          return;
        }
      }
      InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_180c9ec20);
      _DAT_180c9ec50 = 0;
      DAT_180c9ec48 =
           CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_1804a9b40,&DAT_180c9ebc0,0,(LPDWORD)0x0);
      return;
    }
    cVar1 = *param_2;
    param_2 = param_2 + 1;
    if (cVar1 == 'f') {
LAB_1804a986c:
      *(int *)(*(longlong *)(param_1 + 0x10) + 0xf1c) = (int)cVar1;
      FUN_1804958a0(param_1);
    }
    else if (cVar1 == 'i') {
      iVar4 = 0;
      if ('/' < *param_2) {
        do {
          cVar1 = *param_2;
          if ('9' < cVar1) break;
          param_2 = param_2 + 1;
          iVar4 = (int)cVar1 + (iVar4 * 5 + -0x18) * 2;
        } while ('/' < *param_2);
        if (0 < iVar4) goto LAB_1804a9880;
      }
      iVar4 = 1;
    }
    else if (cVar1 == 'l') goto LAB_1804a986c;
LAB_1804a9880:
    cVar1 = *param_2;
    puVar2 = DAT_180c9ebc0;
  } while( true );
}



/* ===== 1804a9a80 FUN_1804a9a80 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1804a9a80(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  uint uVar3;
  
  puVar2 = DAT_180c9ebc0;
  if (*(undefined8 **)(param_1 + 0x10) == DAT_180c9ebc0) {
    DAT_180c9ebc0 = (undefined8 *)0x0;
    _DAT_180c9ec50 = 1;
    WaitForSingleObject(DAT_180c9ec48,0xffffffff);
    DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_180c9ec20);
    *(byte *)((longlong)puVar2 + 0x91) = *(byte *)((longlong)puVar2 + 0x91) & 0x7f;
    FUN_1804a7c70(puVar2,0);
    *(undefined4 *)((longlong)puVar2 + 0xf1c) = 0;
    FUN_1804958a0(param_1);
    uVar3 = DAT_180c9ebe0 - (int)DAT_180c9ebe8;
    uVar1 = CONCAT44(DAT_180c9ebe8._4_4_,(int)DAT_180c9ebe8);
    puVar2[2] = puVar2[2] - (ulonglong)uVar3;
    (*(code *)*puVar2)(puVar2[1],uVar1,(ulonglong)uVar3,0);
    _DAT_180c9ebe0 = 0;
    _DAT_180c9ebd8 = 0;
  }
  return;
}



/* ===== 1804a9b40 FUN_1804a9b40 ===== */

undefined8 FUN_1804a9b40(longlong *param_1)

{
  byte bVar1;
  DWORD dwMilliseconds;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  
  dwMilliseconds = *(DWORD *)(param_1 + 7);
  (*(code *)param_1[10])(dwMilliseconds);
  Sleep(dwMilliseconds);
  iVar2 = (int)param_1[0x12];
  while (iVar2 == 0) {
    lVar3 = *param_1;
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xc));
    *(int *)((longlong)param_1 + 0x3c) = *(int *)((longlong)param_1 + 0x3c) + 1;
    bVar1 = *(byte *)(lVar3 + 0x91);
    if ((bVar1 & 0xe0) == 0) {
      iVar2 = *(int *)(lVar3 + 0xb8);
      if (iVar2 < 0) {
        if (iVar2 == -1) {
          uVar4 = 0x49;
        }
        else if (iVar2 == -2) {
          uVar4 = 0x43;
        }
        else {
          uVar4 = 0x4a;
          if (iVar2 == -3) {
            uVar4 = 0x47;
          }
        }
      }
      else {
        uVar4 = 0x4e;
      }
      *(undefined4 *)(param_1 + 8) = uVar4;
      *(byte *)(lVar3 + 0x91) = bVar1 | 0x80;
      FUN_1804a7c70(lVar3,1);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xc));
    Sleep(dwMilliseconds);
    iVar2 = (int)param_1[0x12];
  }
  (*(code *)param_1[0xb])(dwMilliseconds);
  return 0;
}



/* ===== 1804a9c30 FUN_1804a9c30 ===== */

void FUN_1804a9c30(longlong *param_1,uint param_2)

{
  ulonglong uVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  lVar7 = param_1[2];
  uVar6 = (int)param_1[1] - (int)lVar7;
  lVar3 = *param_1;
  uVar4 = uVar6;
  if (uVar6 < 0x20) {
    uVar4 = 0x20;
  }
  for (; uVar4 < param_2; uVar4 = uVar4 * 2) {
  }
  uVar1 = param_1[3];
  uVar8 = (ulonglong)uVar4;
  if ((uVar1 & 2) == 0) {
    lVar5 = FUN_180491760(uVar1 & 0xfffffffffffffff8,param_1[2],uVar6,uVar8);
  }
  else {
    lVar5 = FUN_180491760(uVar1 & 0xfffffffffffffff8,0,0,uVar8);
    param_1[4] = 0;
    param_1[3] = uVar1 & 0xfffffffffffffffd;
    FUN_180540530(lVar5,param_1[2],uVar6);
  }
  if ((uVar1 & 1) != 0) {
    param_1[5] = param_1[5] + (lVar5 - param_1[2]);
  }
  lVar7 = (ulonglong)(uint)((int)lVar3 - (int)lVar7) + lVar5;
  param_1[2] = lVar5;
  *param_1 = lVar7;
  param_1[1] = uVar8 + lVar5;
  if ((uVar1 & 4) != 0) {
    plVar2 = (longlong *)param_1[4];
    plVar2[2] = lVar5;
    *plVar2 = lVar7;
    plVar2[1] = uVar8 + lVar5;
  }
  return;
}



/* ===== 1804a9d10 FUN_1804a9d10 ===== */

void FUN_1804a9d10(longlong param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x10);
  uVar1 = *(uint *)(param_2 + 0x14);
  iVar2 = *(int *)(param_3 + 0x14);
  uVar4 = iVar2 + uVar1;
  *(longlong *)(lVar3 + 0xe0) = param_1;
  if ((uint)(*(int *)(lVar3 + 0xd0) - *(int *)(lVar3 + 0xd8)) < uVar4) {
    lVar3 = FUN_1804a9e80(lVar3 + 200,uVar4);
  }
  else {
    lVar3 = *(longlong *)(lVar3 + 0xd8);
  }
  FUN_180540530(lVar3,param_2 + 0x18,(ulonglong)uVar1);
  FUN_180540530((ulonglong)uVar1 + lVar3,param_3 + 0x18,iVar2);
  FUN_180491d30(param_1,lVar3,uVar4);
  return;
}



/* ===== 1804a9db0 FUN_1804a9db0 ===== */

longlong FUN_1804a9db0(longlong *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar3 = param_1[3];
  if (0x7fffff00 < param_2) {
LAB_1804a9e76:
                    /* WARNING: Subroutine does not return */
    FUN_180484480(uVar3 & 0xfffffffffffffff8);
  }
  iVar1 = (int)*param_1;
  if ((uVar3 & 1) == 0) {
    param_2 = param_2 + (iVar1 - (int)param_1[2]);
    if (0x7fffff00 < param_2) goto LAB_1804a9e76;
LAB_1804a9e53:
    FUN_1804a9c30(param_1,param_2);
  }
  else {
    uVar5 = iVar1 - (int)param_1[5];
    uVar7 = uVar5 + param_2;
    if (0x7fffff00 < uVar7) goto LAB_1804a9e76;
    iVar2 = (int)param_1[2];
    uVar6 = (int)param_1[1] - iVar2;
    if (uVar6 < uVar7) {
      FUN_1804a9c30(param_1,uVar7);
    }
    else if (((uVar3 & 2) != 0) || ((uint)((int)param_1[5] - iVar2) < uVar6 >> 3)) {
      param_2 = param_2 + (iVar1 - iVar2);
      goto LAB_1804a9e53;
    }
    if (param_1[5] != param_1[2]) {
      FUN_180540530(param_1[2],param_1[5],(ulonglong)uVar5);
      param_1[5] = param_1[2];
      lVar4 = param_1[2] + (ulonglong)uVar5;
      *param_1 = lVar4;
      return lVar4;
    }
  }
  return *param_1;
}



/* ===== 1804a9e80 FUN_1804a9e80 ===== */

undefined8 FUN_1804a9e80(longlong param_1,uint param_2)

{
  if (0x7fffff00 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_180484480(*(ulonglong *)(param_1 + 0x18) & 0xfffffffffffffff8);
  }
  FUN_1804a9c30();
  return *(undefined8 *)(param_1 + 0x10);
}



/* ===== 1804a9eb0 FUN_1804a9eb0 ===== */

ulonglong * FUN_1804a9eb0(ulonglong *param_1,undefined1 param_2)

{
  undefined1 *puVar1;
  ulonglong *puVar2;
  
  puVar1 = (undefined1 *)*param_1;
  if (puVar1 < (undefined1 *)param_1[1]) {
    *puVar1 = param_2;
    *param_1 = (ulonglong)(puVar1 + 1);
    return param_1;
  }
  puVar2 = (ulonglong *)FUN_1804a9ed0();
  return puVar2;
}



/* ===== 1804a9ed0 FUN_1804a9ed0 ===== */

longlong * FUN_1804a9ed0(longlong *param_1,undefined1 param_2)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)FUN_1804a9db0(param_1,1);
  *puVar1 = param_2;
  *param_1 = (longlong)(puVar1 + 1);
  return param_1;
}



/* ===== 1804a9f00 FUN_1804a9f00 ===== */

longlong * FUN_1804a9f00(longlong *param_1,undefined8 param_2,uint param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  
  uVar2 = (ulonglong)param_3;
  if ((uint)((int)param_1[1] - (int)*param_1) < param_3) {
    lVar1 = FUN_1804a9db0(param_1,uVar2);
  }
  else {
    lVar1 = *param_1;
  }
  lVar1 = FUN_180540530(lVar1,param_2,uVar2);
  *param_1 = lVar1 + uVar2;
  return param_1;
}



/* ===== 1804a9f60 FUN_1804a9f60 ===== */

longlong * FUN_1804a9f60(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  uVar2 = (ulonglong)*(uint *)(param_2 + 0x14);
  if ((uint)((int)param_1[1] - (int)*param_1) < *(uint *)(param_2 + 0x14)) {
    lVar1 = FUN_1804a9db0(param_1,uVar2);
  }
  else {
    lVar1 = *param_1;
  }
  lVar1 = FUN_180540530(lVar1,param_2 + 0x18,uVar2);
  *param_1 = lVar1 + uVar2;
  return param_1;
}



/* ===== 1804a9fc0 FUN_1804a9fc0 ===== */

int * FUN_1804a9fc0(int *param_1,longlong param_2)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  byte bVar5;
  byte *pbVar6;
  
  uVar3 = *(uint *)(param_2 + 0x14);
  if ((uint)(param_1[2] - *param_1) < uVar3) {
    pbVar4 = (byte *)FUN_1804a9db0(param_1,(ulonglong)uVar3);
  }
  else {
    pbVar4 = *(byte **)param_1;
  }
  pbVar1 = pbVar4 + uVar3;
  pbVar6 = (byte *)(param_2 + 0x18);
  for (; pbVar4 < pbVar1; pbVar4 = pbVar4 + 1) {
    bVar2 = *pbVar6;
    if (bVar2 < 0x41) {
      bVar5 = bVar2;
    }
    else {
      bVar5 = bVar2 + 0x20;
      if (0x5a < bVar2) {
        bVar5 = bVar2;
      }
    }
    *pbVar4 = bVar5;
    pbVar6 = pbVar6 + 1;
  }
  *(byte **)param_1 = pbVar4;
  return param_1;
}



/* ===== 1804aa040 FUN_1804aa040 ===== */

longlong * FUN_1804aa040(longlong *param_1,longlong param_2,int param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  undefined1 *puVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  
  uVar7 = (ulonglong)param_3;
  if (0 < param_3) {
    uVar5 = *(uint *)(param_2 + 0x14);
    if (uVar5 != 0) {
      uVar3 = uVar7 * uVar5;
      if (0x7fffff00 < uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_180484480(param_1[3] & 0xfffffffffffffff8);
      }
      if ((uint)((int)param_1[1] - (int)*param_1) < (uint)uVar3) {
        puVar2 = (undefined1 *)FUN_1804a9db0();
      }
      else {
        puVar2 = (undefined1 *)*param_1;
      }
      if (uVar5 == 1) {
        uVar1 = *(undefined1 *)(param_2 + 0x18);
        do {
          puVar8 = puVar2;
          *puVar8 = uVar1;
          uVar5 = (int)uVar7 - 1;
          uVar7 = (ulonglong)uVar5;
          puVar2 = puVar8 + 1;
        } while (0 < (int)uVar5);
      }
      else {
        do {
          puVar4 = (undefined1 *)(param_2 + 0x18);
          do {
            puVar8 = puVar2;
            *puVar8 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar2 = puVar8 + 1;
          } while (puVar4 < (undefined1 *)(param_2 + 0x18 + (ulonglong)uVar5));
          uVar6 = (int)uVar7 - 1;
          uVar7 = (ulonglong)uVar6;
        } while (0 < (int)uVar6);
      }
      *param_1 = (longlong)(puVar8 + 1);
    }
  }
  return param_1;
}



/* ===== 1804aa100 FUN_1804aa100 ===== */

int * FUN_1804aa100(int *param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  ulonglong uVar5;
  
  uVar5 = (ulonglong)*(uint *)(param_2 + 0x14);
  if ((uint)(param_1[2] - *param_1) < *(uint *)(param_2 + 0x14)) {
    puVar3 = (undefined1 *)FUN_1804a9db0(param_1,uVar5);
  }
  else {
    puVar3 = *(undefined1 **)param_1;
  }
  puVar4 = (undefined1 *)(param_2 + 0x17 + uVar5);
  puVar1 = puVar3 + uVar5;
  for (; puVar3 < puVar1; puVar3 = puVar3 + 1) {
    uVar2 = *puVar4;
    puVar4 = puVar4 + -1;
    *puVar3 = uVar2;
  }
  *(undefined1 **)param_1 = puVar3;
  return param_1;
}



/* ===== 1804aa170 FUN_1804aa170 ===== */

int * FUN_1804aa170(int *param_1,longlong param_2)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  byte bVar5;
  byte *pbVar6;
  
  uVar3 = *(uint *)(param_2 + 0x14);
  if ((uint)(param_1[2] - *param_1) < uVar3) {
    pbVar4 = (byte *)FUN_1804a9db0(param_1,(ulonglong)uVar3);
  }
  else {
    pbVar4 = *(byte **)param_1;
  }
  pbVar1 = pbVar4 + uVar3;
  pbVar6 = (byte *)(param_2 + 0x18);
  for (; pbVar4 < pbVar1; pbVar4 = pbVar4 + 1) {
    bVar2 = *pbVar6;
    if (bVar2 < 0x61) {
      bVar5 = bVar2;
    }
    else {
      bVar5 = bVar2 - 0x20;
      if (0x7a < bVar2) {
        bVar5 = bVar2;
      }
    }
    *pbVar4 = bVar5;
    pbVar6 = pbVar6 + 1;
  }
  *(byte **)param_1 = pbVar4;
  return param_1;
}



/* ===== 1804aa1f0 FUN_1804aa1f0 ===== */

longlong *
FUN_1804aa1f0(longlong *param_1,longlong param_2,longlong param_3,uint param_4,uint param_5)

{
  ulonglong *puVar1;
  longlong lVar2;
  longlong *plVar3;
  uint uVar4;
  uint uVar5;
  
  if (param_3 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(uint *)(param_3 + 0x14);
  }
  if ((int)param_5 < (int)param_4) {
    return param_1;
  }
  while( true ) {
    if (param_4 < *(uint *)(param_2 + 0x30)) {
      puVar1 = (ulonglong *)(*(longlong *)(param_2 + 0x10) + (longlong)(int)param_4 * 8);
    }
    else {
      puVar1 = (ulonglong *)FUN_1804927e0(param_2,param_4);
    }
    if (puVar1 == (ulonglong *)0x0) break;
    uVar4 = (uint)((longlong)*puVar1 >> 0x2f);
    if (uVar4 == 0xfffffffb) {
      uVar4 = *(uint *)((*puVar1 & 0x7fffffffffff) + 0x14);
      if ((uint)((int)param_1[1] - (int)*param_1) < uVar4 + uVar5) {
        lVar2 = FUN_1804a9db0(param_1);
      }
      else {
        lVar2 = *param_1;
      }
      lVar2 = FUN_180540530(lVar2,(*puVar1 & 0x7fffffffffff) + 0x18,(ulonglong)uVar4);
      lVar2 = lVar2 + (ulonglong)uVar4;
    }
    else {
      if (0xfffffff1 < uVar4) break;
      plVar3 = (longlong *)FUN_1804b8ff0(param_1,0xf000035,*puVar1);
      if ((uint)((int)plVar3[1] - (int)*plVar3) < uVar5) {
        lVar2 = FUN_1804a9db0(plVar3,uVar5);
      }
      else {
        lVar2 = *plVar3;
      }
    }
    if (param_4 == param_5) {
      *param_1 = lVar2;
      return param_1;
    }
    param_4 = param_4 + 1;
    if (uVar5 != 0) {
      lVar2 = FUN_180540530(lVar2,param_3 + 0x18,uVar5);
      lVar2 = lVar2 + (ulonglong)uVar5;
    }
    *param_1 = lVar2;
  }
  *param_1 = (longlong)(int)param_4;
  return (longlong *)0x0;
}



/* ===== 1804aa350 FUN_1804aa350 ===== */

uint FUN_1804aa350(longlong *param_1)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  
  pbVar4 = (byte *)*param_1;
  bVar1 = *pbVar4;
  uVar3 = (uint)bVar1;
  if (0x7f < bVar1) {
    bVar2 = 0;
    uVar3 = bVar1 & 0x7f;
    do {
      pbVar4 = pbVar4 + 1;
      bVar2 = bVar2 + 7;
      uVar3 = uVar3 | (*pbVar4 & 0x7f) << (bVar2 & 0x1f);
    } while (0x7f < *pbVar4);
  }
  *param_1 = (longlong)(pbVar4 + 1);
  return uVar3;
}



/* ===== 1804aa3a0 FUN_1804aa3a0 ===== */

void FUN_1804aa3a0(undefined8 param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  
  uVar1 = (int)param_2[1] - (int)param_2[2];
  if (0x40 < uVar1) {
    lVar2 = FUN_180491760(param_1,param_2[2],uVar1,(ulonglong)(uVar1 >> 1));
    param_2[2] = lVar2;
    *param_2 = lVar2;
    param_2[1] = lVar2 + (ulonglong)(uVar1 >> 1);
  }
  return;
}



/* ===== 1804aa3f0 FUN_1804aa3f0 ===== */

undefined8 FUN_1804aa3f0(longlong param_1,uint param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  *(longlong *)(lVar1 + 0xe0) = param_1;
  if ((uint)(*(int *)(lVar1 + 0xd0) - *(int *)(lVar1 + 0xd8)) < param_2) {
    uVar2 = FUN_1804a9e80(lVar1 + 200);
    return uVar2;
  }
  return *(undefined8 *)(lVar1 + 0xd8);
}



/* ===== 1804aa430 FUN_1804aa430 ===== */

void FUN_1804aa430(int *param_1)

{
  FUN_180491d30(*(ulonglong *)(param_1 + 6) & 0xfffffffffffffff8,*(undefined8 *)(param_1 + 4),
                *param_1 - (int)*(undefined8 *)(param_1 + 4));
  return;
}



/* ===== 1804aa450 FUN_1804aa450 ===== */

int FUN_1804aa450(int *param_1,uint param_2)

{
  if ((uint)(param_1[2] - *param_1) < param_2) {
    FUN_1804a9db0();
  }
  return param_1[2] - *param_1;
}



/* ===== 1804aa480 FUN_1804aa480 ===== */

void FUN_1804aa480(longlong *param_1,longlong param_2,uint param_3,longlong param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar3 = param_1[3] & 0xfffffffffffffff8;
  if ((param_1[3] & 6U) == 0) {
    puVar1 = *(undefined8 **)(uVar3 + 0x10);
    uVar4 = (ulonglong)(uint)((int)param_1[1] - (int)param_1[2]);
    lVar2 = param_1[2];
    puVar1[2] = puVar1[2] - uVar4;
    (*(code *)*puVar1)(puVar1[1],lVar2,uVar4,0);
  }
  param_1[2] = param_2;
  param_1[5] = param_2;
  param_1[1] = (ulonglong)param_3 + param_2;
  param_1[3] = uVar3 | 3;
  *param_1 = (ulonglong)param_3 + param_2;
  param_1[4] = param_4;
  if (((*(byte *)(param_4 + 8) & 3) != 0) && ((*(byte *)(param_1 + -5) & 4) != 0)) {
    FUN_1804908e0(*(undefined8 *)(uVar3 + 0x10),param_1 + -6,param_4);
  }
  return;
}



/* ===== 1804aa510 FUN_1804aa510 ===== */

void FUN_1804aa510(ulonglong *param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  char *pcVar3;
  
  pcVar3 = (char *)*param_1;
  uVar2 = (ulonglong)param_2;
  if (pcVar3 < (char *)((longlong)param_1 + 0x33U)) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
    return;
  }
  do {
    pcVar3 = pcVar3 + -1;
    uVar1 = uVar2 / 10;
    *pcVar3 = (char)uVar2 + (char)uVar1 * -10 + '0';
    uVar2 = uVar1;
  } while ((int)uVar1 != 0);
  *param_1 = (ulonglong)pcVar3;
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}



/* ===== 1804aa570 FUN_1804aa570 ===== */

void FUN_1804aa570(undefined8 *param_1,longlong param_2,uint param_3,char *param_4)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  size_t sVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  char *pcVar7;
  char *pcVar8;
  
  lVar6 = *(longlong *)(param_2 + 0x10);
  if (lVar6 == 0) {
    if (*(int *)(param_1 + 4) != 0) {
      if (param_1 + 5 < (undefined8 *)*param_1) {
        puVar1 = (undefined1 *)((longlong)*param_1 + -1);
        *param_1 = puVar1;
        *puVar1 = 0x20;
      }
      else {
        *(undefined4 *)((longlong)param_1 + 0x24) = 0;
      }
    }
    pcVar7 = (char *)*param_1;
    if (pcVar7 < (char *)((longlong)param_1 + 0x33)) {
      *(undefined4 *)((longlong)param_1 + 0x24) = 0;
    }
    else {
      lVar6 = (param_2 - *(longlong *)param_1[2]) / 6 + (param_2 - *(longlong *)param_1[2] >> 0x3f);
      uVar5 = (lVar6 >> 2) - (lVar6 >> 0x3f);
      do {
        pcVar7 = pcVar7 + -1;
        uVar2 = (uVar5 & 0xffffffff) / 10;
        *pcVar7 = (char)uVar5 + (char)uVar2 * -10 + '0';
        uVar5 = uVar2;
      } while ((int)uVar2 != 0);
      *param_1 = pcVar7;
    }
    *(undefined4 *)(param_1 + 4) = 1;
  }
  else {
    uVar4 = *(uint *)(lVar6 + 0x14);
    uVar5 = (ulonglong)uVar4;
    pcVar7 = (char *)*param_1;
    if (pcVar7 < (char *)((longlong)param_1 + uVar5 + 0x29)) {
      *(undefined4 *)((longlong)param_1 + 0x24) = 0;
    }
    else {
      if (*(int *)(param_1 + 4) != 0) {
        pcVar7 = pcVar7 + -1;
        *pcVar7 = ' ';
      }
      pcVar7 = pcVar7 + -uVar5;
      *(undefined4 *)(param_1 + 4) = 1;
      while (uVar4 != 0) {
        uVar4 = (int)uVar5 - 1;
        uVar5 = (ulonglong)uVar4;
        pcVar7[uVar5] = *(char *)(lVar6 + 0x18 + uVar5);
      }
      *param_1 = pcVar7;
    }
  }
  sVar3 = strlen(param_4);
  uVar5 = sVar3 & 0xffffffff;
  if (pcVar7 < (char *)((longlong)param_1 + uVar5 + 0x29)) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    if (*(int *)(param_1 + 4) != 0) {
      pcVar7 = pcVar7 + -1;
      *pcVar7 = ' ';
    }
    pcVar7 = pcVar7 + -uVar5;
    *(undefined4 *)(param_1 + 4) = 1;
    uVar4 = (uint)sVar3;
    while (uVar4 != 0) {
      uVar4 = (int)uVar5 - 1;
      uVar5 = (ulonglong)uVar4;
      pcVar7[uVar5] = param_4[uVar5];
    }
    *param_1 = pcVar7;
  }
  pcVar8 = pcVar7;
  if ((param_3 >> 0x18 & 1) != 0) {
    if (pcVar7 < (char *)((longlong)param_1 + 0x31)) {
      *(undefined4 *)((longlong)param_1 + 0x24) = 0;
    }
    else {
      if (*(int *)(param_1 + 4) != 0) {
        pcVar7 = pcVar7 + -1;
        *pcVar7 = ' ';
      }
      *(undefined4 *)(param_1 + 4) = 1;
      pcVar8 = pcVar7 + -8;
      builtin_strncpy(pcVar7 + -8,"volatile",8);
      *param_1 = pcVar8;
    }
  }
  if ((param_3 >> 0x19 & 1) != 0) {
    if (pcVar8 < (char *)((longlong)param_1 + 0x2e)) {
      *(undefined4 *)((longlong)param_1 + 0x24) = 0;
      return;
    }
    if (*(int *)(param_1 + 4) != 0) {
      pcVar8 = pcVar8 + -1;
      *pcVar8 = ' ';
    }
    *(undefined4 *)(param_1 + 4) = 1;
    builtin_strncpy(pcVar8 + -5,"const",5);
    *param_1 = pcVar8 + -5;
  }
  return;
}



/* ===== 1804aa780 FUN_1804aa780 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804aa780(undefined8 *param_1,uint param_2)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined1 *puVar4;
  char *pcVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  char *pcVar14;
  ulonglong uVar15;
  char *pcVar16;
  uint uVar18;
  uint uVar17;
  undefined1 auStack_78 [39];
  char acStack_51 [9];
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_78;
  uVar12 = 0;
  uVar11 = 0;
  puVar8 = param_1 + 5;
  pcVar16 = (char *)(param_1 + 0x45);
  puVar10 = (uint *)(*(longlong *)param_1[2] + (ulonglong)param_2 * 0x18);
  do {
    uVar2 = *puVar10;
    uVar13 = puVar10[1];
    uVar17 = 0;
    uVar18 = 0;
    switch(uVar2 >> 0x1c) {
    case 0:
      goto switchD_1804aa7ff_caseD_0;
    case 1:
      pcVar16 = "struct";
      if ((uVar2 >> 0x17 & 1) != 0) {
        pcVar16 = "union";
      }
      goto LAB_1804ab159;
    case 2:
      if ((uVar2 >> 0x17 & 1) == 0) {
        if (((uVar2 | uVar12) >> 0x18 & 1) != 0) {
          puVar4 = (undefined1 *)*param_1;
          if (puVar4 < (undefined1 *)((longlong)param_1 + 0x31)) {
            *(undefined4 *)((longlong)param_1 + 0x24) = 0;
          }
          else {
            if (*(int *)(param_1 + 4) != 0) {
              puVar4 = puVar4 + -1;
              *puVar4 = 0x20;
            }
            *(undefined4 *)(param_1 + 4) = 1;
            puVar4[-8] = 0x76;
            *(undefined4 *)(puVar4 + -4) = 0x656c6974;
            *(undefined2 *)(puVar4 + -6) = 0x616c;
            puVar4[-7] = 0x6f;
            *param_1 = puVar4 + -8;
          }
        }
        if (((uVar2 | uVar12) >> 0x19 & 1) != 0) {
          puVar4 = (undefined1 *)*param_1;
          if (puVar4 < (undefined1 *)((longlong)param_1 + 0x2e)) {
            *(undefined4 *)((longlong)param_1 + 0x24) = 0;
          }
          else {
            if (*(int *)(param_1 + 4) != 0) {
              puVar4 = puVar4 + -1;
              *puVar4 = 0x20;
            }
            *(undefined4 *)(param_1 + 4) = 1;
            puVar4[-5] = 99;
            *(undefined4 *)(puVar4 + -4) = 0x74736e6f;
            *param_1 = puVar4 + -5;
          }
        }
        if (uVar13 == 4) {
          puVar7 = (undefined8 *)*param_1;
          if (puVar7 < param_1 + 6) {
            *(undefined4 *)((longlong)param_1 + 0x24) = 0;
          }
          else {
            if (*(int *)(param_1 + 4) != 0) {
              puVar7 = (undefined8 *)((longlong)puVar7 + -1);
              *(undefined1 *)puVar7 = 0x20;
            }
            *(undefined4 *)((longlong)puVar7 + -4) = 0x32337274;
            *(undefined1 *)((longlong)puVar7 + -7) = 0x5f;
            *(undefined2 *)((longlong)puVar7 + -6) = 0x705f;
            *param_1 = (undefined1 *)((longlong)puVar7 + -7);
          }
        }
        if (puVar8 < (undefined8 *)*param_1) {
          puVar4 = (undefined1 *)((longlong)*param_1 + -1);
          uVar11 = 1;
          *param_1 = puVar4;
          *puVar4 = 0x2a;
          *(undefined4 *)(param_1 + 4) = 1;
          uVar12 = uVar18;
        }
        else {
          uVar11 = 1;
          *(undefined4 *)((longlong)param_1 + 0x24) = 0;
          *(undefined4 *)(param_1 + 4) = 1;
          uVar12 = uVar18;
        }
      }
      else if (puVar8 < (undefined8 *)*param_1) {
        puVar4 = (undefined1 *)((longlong)*param_1 + -1);
        uVar11 = 1;
        *param_1 = puVar4;
        *puVar4 = 0x26;
        *(undefined4 *)(param_1 + 4) = 1;
        uVar12 = uVar18;
      }
      else {
        uVar11 = 1;
        *(undefined4 *)((longlong)param_1 + 0x24) = 0;
        *(undefined4 *)(param_1 + 4) = 1;
        uVar12 = uVar17;
      }
      break;
    case 3:
      if ((uVar2 & 0xfc000000) == 0x30000000) {
        *(undefined4 *)(param_1 + 4) = 1;
        if (uVar11 != 0) {
          if (puVar8 < (undefined8 *)*param_1) {
            puVar4 = (undefined1 *)((longlong)*param_1 + -1);
            *param_1 = puVar4;
            *puVar4 = 0x28;
          }
          else {
            *(undefined4 *)((longlong)param_1 + 0x24) = 0;
          }
          uVar11 = 0;
          if ((char *)param_1[1] < pcVar16) {
            *(char *)param_1[1] = ')';
            param_1[1] = param_1[1] + 1;
          }
          else {
            *(undefined4 *)((longlong)param_1 + 0x24) = 0;
          }
        }
        pcVar5 = (char *)param_1[1];
        if (pcVar5 < pcVar16) {
          *pcVar5 = '[';
          pcVar5 = (char *)(param_1[1] + 1);
          param_1[1] = pcVar5;
        }
        else {
          *(undefined4 *)((longlong)param_1 + 0x24) = 0;
        }
        if (uVar13 == 0xffffffff) {
          if ((uVar2 >> 0x14 & 1) != 0) {
            if (pcVar5 < pcVar16) {
              *pcVar5 = '?';
              pcVar5 = (char *)(param_1[1] + 1);
              goto LAB_1804aaa85;
            }
            *(undefined4 *)((longlong)param_1 + 0x24) = 0;
            *(undefined4 *)((longlong)param_1 + 0x24) = 0;
            break;
          }
        }
        else {
          uVar17 = *(uint *)(*(longlong *)param_1[2] + 4 + (ulonglong)(ushort)*puVar10 * 0x18);
          if (uVar17 == 0) {
            uVar15 = 0;
          }
          else {
            uVar15 = (ulonglong)uVar13 / (ulonglong)uVar17;
          }
          if ((char *)((longlong)param_1 + 0x21e) < pcVar5) {
            *(undefined4 *)((longlong)param_1 + 0x24) = 0;
          }
          else {
            pcVar14 = acStack_51 + 3;
            do {
              pcVar14 = pcVar14 + -1;
              uVar3 = uVar15 / 10;
              *pcVar14 = (char)uVar15 + (char)uVar3 * -10 + '0';
              uVar15 = uVar3;
            } while ((int)uVar3 != 0);
            do {
              cVar1 = *pcVar14;
              pcVar14 = pcVar14 + 1;
              *pcVar5 = cVar1;
              pcVar5 = pcVar5 + 1;
            } while (pcVar14 < acStack_51 + 3);
LAB_1804aaa85:
            param_1[1] = pcVar5;
          }
        }
        if (pcVar5 < pcVar16) {
          *pcVar5 = ']';
LAB_1804aac16:
          param_1[1] = param_1[1] + 1;
        }
        else {
          *(undefined4 *)((longlong)param_1 + 0x24) = 0;
        }
      }
      else {
        if ((uVar2 >> 0x1a & 1) != 0) {
          if (uVar13 == 8) {
            puVar4 = (undefined1 *)*param_1;
            if (puVar4 < (undefined1 *)((longlong)param_1 + 0x2e)) {
              *(undefined4 *)((longlong)param_1 + 0x24) = 0;
            }
            else {
              if (*(int *)(param_1 + 4) != 0) {
                puVar4 = puVar4 + -1;
                *puVar4 = 0x20;
              }
              *(undefined4 *)(param_1 + 4) = 1;
              puVar4[-5] = 0x66;
              *(undefined4 *)(puVar4 + -4) = 0x74616f6c;
              *param_1 = puVar4 + -5;
            }
          }
          puVar8 = (undefined8 *)*param_1;
          if (param_1 + 6 <= puVar8) {
            if (*(int *)(param_1 + 4) != 0) {
              puVar8 = (undefined8 *)((longlong)puVar8 + -1);
              *(undefined1 *)puVar8 = 0x20;
            }
            *(undefined4 *)(param_1 + 4) = 1;
            *(undefined1 *)((longlong)puVar8 + -7) = 99;
            *(undefined4 *)((longlong)puVar8 + -4) = 0x78656c70;
            *(undefined2 *)((longlong)puVar8 + -6) = 0x6d6f;
            *param_1 = (undefined1 *)((longlong)puVar8 + -7);
            return;
          }
          goto LAB_1804ab0fa;
        }
        pcVar5 = (char *)*param_1;
        if (pcVar5 < (char *)((longlong)param_1 + 0x2c)) {
          *(undefined4 *)((longlong)param_1 + 0x24) = 0;
          pcVar14 = pcVar5;
        }
        else {
          if (*(int *)(param_1 + 4) != 0) {
            pcVar5 = pcVar5 + -1;
            *pcVar5 = ' ';
          }
          pcVar14 = pcVar5 + -3;
          *(undefined4 *)(param_1 + 4) = 1;
          *pcVar14 = ')';
          pcVar5[-2] = ')';
          pcVar5[-1] = ')';
          *param_1 = pcVar14;
        }
        uVar15 = (ulonglong)uVar13;
        if (pcVar14 < (char *)((longlong)param_1 + 0x33)) {
          *(undefined4 *)((longlong)param_1 + 0x24) = 0;
        }
        else {
          do {
            pcVar14 = pcVar14 + -1;
            uVar3 = uVar15 / 10;
            *pcVar14 = (char)uVar15 + (char)uVar3 * -10 + '0';
            uVar15 = uVar3;
          } while ((int)uVar3 != 0);
          *param_1 = pcVar14;
          *(undefined4 *)(param_1 + 4) = 0;
        }
        if (pcVar14 < (char *)((longlong)param_1 + 0x44)) {
          *(undefined4 *)((longlong)param_1 + 0x24) = 0;
        }
        else {
          if (*(int *)(param_1 + 4) != 0) {
            pcVar14 = pcVar14 + -1;
            *pcVar14 = ' ';
          }
          *(undefined4 *)(param_1 + 4) = 1;
          builtin_strncpy(pcVar14 + -0x1b,"__attribute__((vector_size(",0x1b);
          *param_1 = pcVar14 + -0x1b;
        }
      }
      break;
    case 4:
      puVar4 = (undefined1 *)*param_1;
      if (puVar4 < (undefined1 *)((longlong)param_1 + 0x2d)) {
        *(undefined4 *)((longlong)param_1 + 0x24) = 0;
        puVar6 = puVar4;
      }
      else {
        if (*(int *)(param_1 + 4) != 0) {
          puVar4 = puVar4 + -1;
          *puVar4 = 0x20;
        }
        *(undefined4 *)(param_1 + 4) = 1;
        puVar6 = puVar4 + -4;
        *puVar6 = 0x76;
        *(undefined2 *)(puVar4 + -2) = 0x6469;
        puVar4[-3] = 0x6f;
        *param_1 = puVar6;
      }
      puVar4 = puVar6;
      if (((uVar2 | uVar12) >> 0x18 & 1) != 0) {
        if (puVar6 < (undefined1 *)((longlong)param_1 + 0x31)) {
          *(undefined4 *)((longlong)param_1 + 0x24) = 0;
        }
        else {
          if (*(int *)(param_1 + 4) != 0) {
            puVar6 = puVar6 + -1;
            *puVar6 = 0x20;
          }
          *(undefined4 *)(param_1 + 4) = 1;
          puVar4 = puVar6 + -8;
          *puVar4 = 0x76;
          *(undefined4 *)(puVar6 + -4) = 0x656c6974;
          *(undefined2 *)(puVar6 + -6) = 0x616c;
          puVar6[-7] = 0x6f;
          *param_1 = puVar4;
        }
      }
      if (((uVar2 | uVar12) >> 0x19 & 1) == 0) {
        return;
      }
      if (puVar4 < (undefined1 *)((longlong)param_1 + 0x2e)) goto LAB_1804ab0fa;
      goto LAB_1804ab02e;
    case 5:
      if (param_2 != 0x18) {
        pcVar16 = "enum";
LAB_1804ab159:
        FUN_1804aa570(param_1,puVar10,uVar12,pcVar16);
        return;
      }
      puVar4 = (undefined1 *)*param_1;
      if ((undefined1 *)((longlong)param_1 + 0x2e) <= puVar4) {
        if (*(int *)(param_1 + 4) != 0) {
          puVar4 = puVar4 + -1;
          *puVar4 = 0x20;
        }
        *(undefined4 *)(param_1 + 4) = 1;
        puVar4[-5] = 99;
        *(undefined4 *)(puVar4 + -4) = 0x65707974;
        *param_1 = puVar4 + -5;
        return;
      }
      goto LAB_1804ab0fa;
    case 6:
      *(undefined4 *)(param_1 + 4) = 1;
      if (uVar11 != 0) {
        if (puVar8 < (undefined8 *)*param_1) {
          puVar4 = (undefined1 *)((longlong)*param_1 + -1);
          *param_1 = puVar4;
          *puVar4 = 0x28;
        }
        else {
          *(undefined4 *)((longlong)param_1 + 0x24) = 0;
        }
        uVar11 = uVar17;
        if ((char *)param_1[1] < pcVar16) {
          *(char *)param_1[1] = ')';
          param_1[1] = param_1[1] + 1;
        }
        else {
          *(undefined4 *)((longlong)param_1 + 0x24) = 0;
        }
      }
      if ((char *)param_1[1] < pcVar16) {
        *(char *)param_1[1] = '(';
        pcVar5 = (char *)(param_1[1] + 1);
        param_1[1] = pcVar5;
        if (pcVar5 < pcVar16) {
          *pcVar5 = ')';
          goto LAB_1804aac16;
        }
        *(undefined4 *)((longlong)param_1 + 0x24) = 0;
      }
      else {
        *(undefined4 *)((longlong)param_1 + 0x24) = 0;
        *(undefined4 *)((longlong)param_1 + 0x24) = 0;
      }
      break;
    case 8:
      uVar13 = uVar13 | uVar12;
      if ((uVar2 & 0xff0000) != 0x10000) {
        uVar13 = uVar12;
      }
      uVar12 = uVar13;
    }
    puVar10 = (uint *)(*(longlong *)param_1[2] + (ulonglong)(uVar2 & 0xffff) * 0x18);
  } while( true );
switchD_1804aa7ff_caseD_0:
  puVar4 = (undefined1 *)*param_1;
  if ((uVar2 >> 0x1b & 1) == 0) {
    if ((uVar2 >> 0x1a & 1) == 0) {
      if (uVar13 != 1) {
        if (7 < uVar13) {
          if (puVar4 < (undefined1 *)((longlong)param_1 + 0x2b)) {
            *(undefined4 *)((longlong)param_1 + 0x24) = 0;
          }
          else {
            if (*(int *)(param_1 + 4) != 0) {
              puVar4 = puVar4 + -1;
              *puVar4 = 0x20;
            }
            *(undefined4 *)(param_1 + 4) = 1;
            puVar4[-2] = 0x5f;
            puVar4[-1] = 0x74;
            *param_1 = puVar4 + -2;
          }
          FUN_1804aa510(param_1,uVar13 * 8);
          puVar7 = (undefined8 *)*param_1;
          if (puVar7 < (undefined8 *)((longlong)param_1 + 0x2c)) {
            *(undefined4 *)((longlong)param_1 + 0x24) = 0;
            puVar9 = puVar7;
          }
          else {
            if (*(int *)(param_1 + 4) != 0) {
              puVar7 = (undefined8 *)((longlong)puVar7 + -1);
              *(undefined1 *)puVar7 = 0x20;
            }
            puVar9 = (undefined8 *)((longlong)puVar7 + -3);
            *(undefined4 *)(param_1 + 4) = 1;
            *(undefined1 *)puVar9 = 0x69;
            *(undefined2 *)((longlong)puVar7 + -2) = 0x746e;
            *param_1 = puVar9;
          }
          if ((uVar2 >> 0x17 & 1) != 0) {
            if (puVar8 < puVar9) {
              *param_1 = (undefined1 *)((longlong)puVar9 + -1);
              *(undefined1 *)((longlong)puVar9 + -1) = 0x75;
            }
            else {
              *(undefined4 *)((longlong)param_1 + 0x24) = 0;
            }
          }
          goto LAB_1804aafca;
        }
        if (uVar13 == 4) {
          if ((undefined1 *)((longlong)param_1 + 0x2c) <= puVar4) {
            if (*(int *)(param_1 + 4) != 0) {
              puVar4 = puVar4 + -1;
              *puVar4 = 0x20;
            }
            *(undefined4 *)(param_1 + 4) = 1;
            puVar6 = puVar4 + -3;
            *puVar6 = 0x69;
            *(undefined2 *)(puVar4 + -2) = 0x746e;
            goto LAB_1804aaed6;
          }
          *(undefined4 *)((longlong)param_1 + 0x24) = 0;
        }
        else if (puVar4 < (undefined1 *)((longlong)param_1 + 0x2e)) {
          *(undefined4 *)((longlong)param_1 + 0x24) = 0;
        }
        else {
          if (*(int *)(param_1 + 4) != 0) {
            puVar4 = puVar4 + -1;
            *puVar4 = 0x20;
          }
          *(undefined4 *)(param_1 + 4) = 1;
          puVar6 = puVar4 + -5;
          *puVar6 = 0x73;
          *(undefined4 *)(puVar4 + -4) = 0x74726f68;
LAB_1804aaed6:
          *param_1 = puVar6;
          puVar4 = puVar6;
        }
        if ((uVar2 >> 0x17 & 1) != 0) {
          if (puVar4 < (undefined1 *)((longlong)param_1 + 0x31)) {
            *(undefined4 *)((longlong)param_1 + 0x24) = 0;
          }
          else {
            if (*(int *)(param_1 + 4) != 0) {
              puVar4 = puVar4 + -1;
              *puVar4 = 0x20;
            }
            *(undefined4 *)(param_1 + 4) = 1;
            puVar4[-8] = 0x75;
            *(undefined4 *)(puVar4 + -4) = 0x64656e67;
            *(undefined2 *)(puVar4 + -6) = 0x6973;
            puVar4[-7] = 0x6e;
            *param_1 = puVar4 + -8;
          }
        }
        goto LAB_1804aafca;
      }
      if ((uVar2 >> 0x17 & 1) == 0) {
        if ((undefined1 *)((longlong)param_1 + 0x2d) <= puVar4) {
          if (*(int *)(param_1 + 4) != 0) {
            puVar4 = puVar4 + -1;
            *puVar4 = 0x20;
          }
          *(undefined4 *)(param_1 + 4) = 1;
          puVar4[-4] = 99;
          *(undefined2 *)(puVar4 + -2) = 0x7261;
          puVar4[-3] = 0x68;
          *param_1 = puVar4 + -4;
          goto LAB_1804aafca;
        }
      }
      else if ((undefined1 *)((longlong)param_1 + 0x36) <= puVar4) {
        if (*(int *)(param_1 + 4) != 0) {
          puVar4 = puVar4 + -1;
          *puVar4 = 0x20;
        }
        *(undefined4 *)(param_1 + 4) = 1;
        puVar4[-0xd] = 0x75;
        *(undefined4 *)(puVar4 + -4) = 0x72616863;
        *(undefined4 *)(puVar4 + -8) = 0x2064656e;
        *(undefined4 *)(puVar4 + -0xc) = 0x6769736e;
        *param_1 = puVar4 + -0xd;
        goto LAB_1804aafca;
      }
    }
    else if (uVar13 == 8) {
      if ((undefined1 *)((longlong)param_1 + 0x2f) <= puVar4) {
        if (*(int *)(param_1 + 4) != 0) {
          puVar4 = puVar4 + -1;
          *puVar4 = 0x20;
        }
        *(undefined4 *)(param_1 + 4) = 1;
        puVar4[-6] = 100;
        *(undefined4 *)(puVar4 + -4) = 0x656c6275;
        puVar4[-5] = 0x6f;
        *param_1 = puVar4 + -6;
        goto LAB_1804aafca;
      }
    }
    else if (uVar13 == 4) {
      if ((undefined1 *)((longlong)param_1 + 0x2e) <= puVar4) {
        if (*(int *)(param_1 + 4) != 0) {
          puVar4 = puVar4 + -1;
          *puVar4 = 0x20;
        }
        *(undefined4 *)(param_1 + 4) = 1;
        puVar4[-5] = 0x66;
        *(undefined4 *)(puVar4 + -4) = 0x74616f6c;
        *param_1 = puVar4 + -5;
        goto LAB_1804aafca;
      }
    }
    else if ((undefined1 *)((longlong)param_1 + 0x34) <= puVar4) {
      if (*(int *)(param_1 + 4) != 0) {
        puVar4 = puVar4 + -1;
        *puVar4 = 0x20;
      }
      *(undefined4 *)(param_1 + 4) = 1;
      puVar4[-0xb] = 0x6c;
      *(undefined4 *)(puVar4 + -4) = 0x656c6275;
      *(undefined4 *)(puVar4 + -8) = 0x6f642067;
      *(undefined2 *)(puVar4 + -10) = 0x6e6f;
      *param_1 = puVar4 + -0xb;
      goto LAB_1804aafca;
    }
  }
  else if ((undefined1 *)((longlong)param_1 + 0x2d) <= puVar4) {
    if (*(int *)(param_1 + 4) != 0) {
      puVar4 = puVar4 + -1;
      *puVar4 = 0x20;
    }
    *(undefined4 *)(param_1 + 4) = 1;
    puVar4[-4] = 0x62;
    *(undefined2 *)(puVar4 + -2) = 0x6c6f;
    puVar4[-3] = 0x6f;
    *param_1 = puVar4 + -4;
    goto LAB_1804aafca;
  }
  *(undefined4 *)((longlong)param_1 + 0x24) = 0;
LAB_1804aafca:
  if (((uVar2 | uVar12) >> 0x18 & 1) != 0) {
    puVar4 = (undefined1 *)*param_1;
    if (puVar4 < (undefined1 *)((longlong)param_1 + 0x31)) {
      *(undefined4 *)((longlong)param_1 + 0x24) = 0;
    }
    else {
      if (*(int *)(param_1 + 4) != 0) {
        puVar4 = puVar4 + -1;
        *puVar4 = 0x20;
      }
      *(undefined4 *)(param_1 + 4) = 1;
      puVar4[-8] = 0x76;
      *(undefined4 *)(puVar4 + -4) = 0x656c6974;
      *(undefined2 *)(puVar4 + -6) = 0x616c;
      puVar4[-7] = 0x6f;
      *param_1 = puVar4 + -8;
    }
  }
  if (((uVar2 | uVar12) >> 0x19 & 1) != 0) {
    puVar4 = (undefined1 *)*param_1;
    if (puVar4 < (undefined1 *)((longlong)param_1 + 0x2e)) {
LAB_1804ab0fa:
      *(undefined4 *)((longlong)param_1 + 0x24) = 0;
    }
    else {
LAB_1804ab02e:
      if (*(int *)(param_1 + 4) != 0) {
        puVar4 = puVar4 + -1;
        *puVar4 = 0x20;
      }
      *(undefined4 *)(param_1 + 4) = 1;
      *(undefined4 *)(puVar4 + -4) = 0x74736e6f;
      puVar4[-5] = 99;
      *param_1 = puVar4 + -5;
    }
  }
  return;
}



/* ===== 1804ab1b0 FUN_1804ab1b0 ===== */

void FUN_1804ab1b0(longlong param_1,longlong param_2,undefined2 param_3)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_2 + 0x10) + 0xfb3ee249;
  uVar2 = (*(uint *)(param_2 + 0x10) ^ uVar1) - (uVar1 >> 0x12 | uVar1 * 0x4000);
  uVar3 = (ulonglong)((uVar1 >> 0xd ^ uVar2) - (uVar2 >> 0x13) & 0x7f);
  *(undefined2 *)(param_2 + 10) = *(undefined2 *)(param_1 + 0xd0 + uVar3 * 2);
  *(undefined2 *)(param_1 + 0xd0 + uVar3 * 2) = param_3;
  return;
}



/* ===== 1804ab1f0 FUN_1804ab1f0 ===== */

void FUN_1804ab1f0(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)param_1[0x31];
  if (puVar2 != (undefined8 *)0x0) {
    FUN_1804b4e20(puVar2);
    uVar1 = *(uint *)((longlong)puVar2 + 0xc);
    uVar3 = *puVar2;
    param_1[2] = param_1[2] + (ulonglong)uVar1 * -0x18;
    (*(code *)*param_1)(param_1[1],uVar3,(ulonglong)uVar1 * 0x18,0);
    uVar1 = *(uint *)(puVar2 + 0x18);
    uVar3 = puVar2[0x17];
    param_1[2] = param_1[2] + (ulonglong)uVar1 * -2;
    (*(code *)*param_1)(param_1[1],uVar3,(ulonglong)uVar1 * 2,0);
    param_1[2] = param_1[2] + -0x1d0;
    (*(code *)*param_1)(param_1[1],puVar2,0x1d0,0);
  }
  return;
}



/* ===== 1804ab270 FUN_1804ab270 ===== */

uint * FUN_1804ab270(longlong *param_1,uint *param_2,longlong param_3,uint *param_4,uint *param_5)

{
  short sVar1;
  longlong lVar2;
  byte bVar3;
  ushort *puVar4;
  ulonglong uVar5;
  uint *puVar6;
  uint uVar7;
  
  sVar1 = (short)param_2[2];
  while( true ) {
    if (sVar1 == 0) {
      return (uint *)0x0;
    }
    puVar6 = param_2 + 2;
    lVar2 = *param_1;
    param_2 = (uint *)(lVar2 + (ulonglong)(ushort)*puVar6 * 0x18);
    if (*(longlong *)(lVar2 + 0x10 + (ulonglong)(ushort)*puVar6 * 0x18) == param_3) break;
    if ((*param_2 & 0xf0ff0000) == 0x80030000) {
      uVar5 = (ulonglong)(*param_2 & 0xffff);
      uVar7 = 0;
      bVar3 = (byte)((uint)*(undefined4 *)(lVar2 + uVar5 * 0x18) >> 0x18);
      while (puVar4 = (ushort *)(lVar2 + uVar5 * 0x18), bVar3 >> 4 == 8) {
        if ((char)puVar4[1] == '\x01') {
          uVar7 = uVar7 | *(uint *)(puVar4 + 2);
        }
        uVar5 = (ulonglong)*puVar4;
        bVar3 = (byte)((uint)*(undefined4 *)(lVar2 + uVar5 * 0x18) >> 0x18);
      }
      puVar6 = (uint *)FUN_1804ab270(param_1,puVar4,param_3,param_4,param_5);
      if (puVar6 != (uint *)0x0) {
        if (param_5 != (uint *)0x0) {
          *param_5 = *param_5 | uVar7;
        }
        *param_4 = *param_4 + param_2[1];
        return puVar6;
      }
    }
    sVar1 = (short)param_2[2];
  }
  *param_4 = param_2[1];
  return param_2;
}



/* ===== 1804ab370 FUN_1804ab370 ===== */

ulonglong FUN_1804ab370(longlong *param_1,longlong *param_2,longlong param_3,uint param_4)

{
  undefined4 *puVar1;
  ushort uVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = (uint)param_3 + 0xfb3ee249;
  uVar5 = ((uint)param_3 ^ uVar4) - (uVar4 >> 0x12 | uVar4 * 0x4000);
  uVar2 = *(ushort *)
           ((longlong)param_1 +
           (ulonglong)((uVar4 >> 0xd ^ uVar5) - (uVar5 >> 0x13) & 0x7f) * 2 + 0xd0);
  if (uVar2 != 0) {
    do {
      uVar3 = (ulonglong)uVar2;
      puVar1 = (undefined4 *)(*param_1 + uVar3 * 0x18);
      if ((*(longlong *)(*param_1 + 0x10 + uVar3 * 0x18) == param_3) &&
         ((param_4 >> (byte)((uint)*puVar1 >> 0x1c) & 1) != 0)) {
        *param_2 = (longlong)puVar1;
        return uVar3;
      }
      uVar2 = *(ushort *)((longlong)puVar1 + 10);
    } while (uVar2 != 0);
  }
  *param_2 = *param_1;
  return 0;
}



/* ===== 1804ab410 FUN_1804ab410 ===== */

uint FUN_1804ab410(longlong *param_1,ulonglong param_2,undefined4 *param_3)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  param_2 = param_2 & 0xffffffff;
  uVar3 = 0;
LAB_1804ab41a:
  do {
    lVar1 = *param_1 + param_2 * 0x18;
    uVar2 = *(uint *)(*param_1 + param_2 * 0x18);
    uVar4 = uVar2 >> 0x1c;
    if (uVar4 != 5) {
      if (uVar4 != 8) {
        if ((uVar3 & 1) == 0) {
          uVar3 = uVar3 | uVar2 & 0xf0000;
        }
        uVar3 = uVar2 & 0xfff00000 | uVar3;
        if (uVar4 == 6) {
          *param_3 = 0xffffffff;
          return uVar3;
        }
        *param_3 = *(undefined4 *)(lVar1 + 4);
        return uVar3;
      }
      if ((uVar2 & 0xf0ff0000) == 0x80010000) {
        uVar3 = uVar3 | *(uint *)(lVar1 + 4);
        param_2 = (ulonglong)(uVar2 & 0xffff);
        goto LAB_1804ab41a;
      }
      if (((uVar2 & 0xf0ff0000) == 0x80020000) && ((uVar3 & 1) == 0)) {
        uVar3 = uVar3 | *(int *)(lVar1 + 4) << 0x10 | 1U;
      }
    }
    param_2 = (ulonglong)(uVar2 & 0xffff);
  } while( true );
}



/* ===== 1804ab4a0 FUN_1804ab4a0 ===== */

uint FUN_1804ab4a0(longlong *param_1,uint param_2,undefined4 *param_3)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  
  lVar2 = *param_1;
  uVar6 = (ulonglong)param_2;
  uVar5 = *(uint *)(lVar2 + uVar6 * 0x18);
  if ((uVar5 & 0xf0800000) == 0x20800000) {
    uVar6 = (ulonglong)(uVar5 & 0xffff);
  }
  uVar5 = 0;
  lVar4 = uVar6 * 3;
LAB_1804ab4c9:
  do {
    uVar1 = *(uint *)(lVar2 + lVar4 * 8);
    lVar4 = lVar2 + lVar4 * 8;
    uVar3 = uVar1 >> 0x1c;
    if (uVar3 != 5) {
      if (uVar3 != 8) {
        if ((uVar5 & 1) == 0) {
          uVar5 = uVar5 | uVar1 & 0xf0000;
        }
        uVar5 = uVar1 & 0xfff00000 | uVar5;
        if (uVar3 == 6) {
          *param_3 = 0xffffffff;
          return uVar5;
        }
        *param_3 = *(undefined4 *)(lVar4 + 4);
        return uVar5;
      }
      if ((uVar1 & 0xf0ff0000) == 0x80010000) {
        uVar5 = uVar5 | *(uint *)(lVar4 + 4);
        lVar4 = (ulonglong)(uVar1 & 0xffff) * 3;
        goto LAB_1804ab4c9;
      }
      if (((uVar1 & 0xf0ff0000) == 0x80020000) && ((uVar5 & 1) == 0)) {
        uVar5 = uVar5 | *(int *)(lVar4 + 4) << 0x10 | 1U;
      }
    }
    lVar4 = (ulonglong)(uVar1 & 0xffff) * 3;
  } while( true );
}



/* ===== 1804ab560 FUN_1804ab560 ===== */

undefined8 * FUN_1804ab560(longlong param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  uint *puVar3;
  size_t sVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  char *_Str;
  uint uVar8;
  uint uVar9;
  
  puVar2 = (undefined8 *)FUN_180491760(param_1,0,0,0x1d0);
  puVar3 = (uint *)FUN_180491760(param_1,0,0,0xc00);
  _Str = "va_list";
  FUN_180540170(puVar2 + 3,0,0x1b8);
  *puVar2 = puVar3;
  puVar2[2] = 0;
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0x80;
  uVar8 = 0;
  *(undefined4 *)(puVar2 + 1) = 0x66;
  puVar2[3] = *(undefined8 *)(param_1 + 0x10);
  do {
    *(undefined2 *)(puVar3 + 2) = 0;
    uVar6 = *(uint *)(&DAT_180919010 + (ulonglong)uVar8 * 4);
    uVar1 = (int)(uVar6 << 0x10) >> 0x1a;
    uVar9 = uVar6 >> 0x1c;
    puVar3[1] = uVar1;
    *puVar3 = uVar6 & 0xffff03ff;
    if ((uVar9 == 0xd) || (uVar9 == 7)) {
      sVar4 = strlen(_Str);
      lVar5 = FUN_180491d30(param_1,_Str,sVar4);
      *(byte *)(lVar5 + 8) = *(byte *)(lVar5 + 8) | 0x20;
      uVar1 = (uint)lVar5 + 0xfb3ee249;
      *(longlong *)(puVar3 + 4) = lVar5;
      uVar6 = ((uint)lVar5 ^ uVar1) - (uVar1 >> 0x12 | uVar1 * 0x4000);
      uVar7 = (ulonglong)((uVar1 >> 0xd ^ uVar6) - (uVar6 >> 0x13) & 0x7f);
      _Str = _Str + sVar4 + 1;
      *(undefined2 *)((longlong)puVar3 + 10) = *(undefined2 *)((longlong)puVar2 + uVar7 * 2 + 0xd0);
      *(short *)((longlong)puVar2 + uVar7 * 2 + 0xd0) = (short)uVar8;
    }
    else {
      puVar3[4] = 0;
      puVar3[5] = 0;
      *(undefined2 *)((longlong)puVar3 + 10) = 0;
      if (uVar9 != 5) {
        uVar6 = (uVar6 & 0xffff03ff ^ uVar1) - (uVar1 >> 0x12 | uVar1 << 0xe);
        uVar6 = (uVar1 >> 0xd ^ uVar6) - (uVar6 >> 0x13) & 0x7f;
        *(undefined2 *)((longlong)puVar3 + 10) =
             *(undefined2 *)((longlong)puVar2 + (ulonglong)uVar6 * 2 + 0xd0);
        *(short *)((longlong)puVar2 + (ulonglong)uVar6 * 2 + 0xd0) = (short)uVar8;
      }
    }
    uVar8 = uVar8 + 1;
    puVar3 = puVar3 + 6;
  } while (uVar8 < 0x66);
  *(undefined8 **)(*(longlong *)(param_1 + 0x10) + 0x188) = puVar2;
  return puVar2;
}



