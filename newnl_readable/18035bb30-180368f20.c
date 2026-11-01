/* ===== 18035bb30 FUN_18035bb30 ===== */

longlong * FUN_18035bb30(longlong *param_1,byte *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  code *pcVar5;
  int iVar6;
  byte *pbVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined1 *puVar10;
  ulonglong uVar11;
  byte bVar12;
  bool bVar13;
  byte *local_res10;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [24];
  undefined4 local_48;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  local_48 = 1;
  FUN_180067510(0,*(undefined8 *)(param_2 + 0x10));
  if (*(ulonglong *)(param_2 + 0x18) < 0x10) {
    local_res10 = param_2;
  }
  else {
    local_res10 = *(byte **)param_2;
  }
  pbVar7 = local_res10 + *(longlong *)(param_2 + 0x10);
  if (local_res10 != pbVar7) {
    bVar13 = false;
    do {
      bVar12 = *local_res10;
      if ((bVar12 < 0x21) && ((0x100002600U >> ((ulonglong)bVar12 & 0x3f) & 1) != 0)) {
        bVar13 = param_1[2] != 0;
      }
      else {
        if (bVar13) {
          uVar2 = param_1[2];
          uVar3 = param_1[3];
          if (uVar2 < uVar3) {
            param_1[2] = uVar2 + 1;
            plVar8 = param_1;
            if (0xf < uVar3) {
              plVar8 = (longlong *)*param_1;
            }
            *(undefined2 *)((longlong)plVar8 + uVar2) = 0x20;
            goto LAB_18035bcf1;
          }
          puVar10 = auStack_68;
          if (uVar2 == 0x7fffffffffffffff) goto LAB_18035be4a;
          uVar11 = uVar2 + 1 | 0xf;
          if (uVar11 < 0x8000000000000000) {
            if (0x7fffffffffffffff - (uVar3 >> 1) < uVar3) {
              uVar11 = 0x7fffffffffffffff;
            }
            else {
              uVar1 = (uVar3 >> 1) + uVar3;
              if (uVar11 < uVar1) {
                uVar11 = uVar1;
              }
            }
          }
          else {
            uVar11 = 0x7fffffffffffffff;
          }
          lVar9 = FUN_18000fb70(uVar11 + 1);
          param_1[2] = uVar2 + 1;
          param_1[3] = uVar11;
          if (uVar3 < 0x10) {
            FUN_180540530(lVar9,param_1,uVar2);
            *(undefined2 *)(lVar9 + uVar2) = 0x20;
LAB_18035bcdf:
            *param_1 = lVar9;
            goto LAB_18035bcf1;
          }
          lVar4 = *param_1;
          FUN_180540530(lVar9,lVar4,uVar2);
          *(undefined2 *)(lVar9 + uVar2) = 0x20;
          if (uVar3 + 1 < 0x1000) {
            thunk_FUN_1803d64e0(lVar4);
            goto LAB_18035bcdf;
          }
          if ((lVar4 - *(longlong *)(lVar4 + -8)) - 8U < 0x20) {
            thunk_FUN_1803d64e0(*(longlong *)(lVar4 + -8),uVar3 + 0x28);
            goto LAB_18035bcdf;
          }
LAB_18035be43:
          pcVar5 = (code *)swi(0x29);
          (*pcVar5)(5);
          puVar10 = auStack_60;
LAB_18035be4a:
                    /* WARNING: Subroutine does not return */
          *(undefined **)(puVar10 + -8) = &UNK_18035be4f;
          FUN_180011990();
        }
LAB_18035bcf1:
        bVar13 = false;
        if (bVar12 < 0x80) {
          iVar6 = tolower((uint)bVar12);
          bVar12 = (byte)iVar6;
        }
        uVar2 = param_1[2];
        uVar3 = param_1[3];
        if (uVar2 < uVar3) {
          param_1[2] = uVar2 + 1;
          if (uVar3 < 0x10) {
            *(byte *)((longlong)param_1 + uVar2) = bVar12;
            *(undefined1 *)((longlong)param_1 + uVar2 + 1) = 0;
          }
          else {
            lVar9 = *param_1;
            *(byte *)(lVar9 + uVar2) = bVar12;
            *(undefined1 *)(lVar9 + 1 + uVar2) = 0;
          }
        }
        else {
          puVar10 = auStack_68;
          if (uVar2 == 0x7fffffffffffffff) goto LAB_18035be4a;
          uVar11 = uVar2 + 1 | 0xf;
          if (uVar11 < 0x8000000000000000) {
            if (0x7fffffffffffffff - (uVar3 >> 1) < uVar3) {
              uVar11 = 0x7fffffffffffffff;
            }
            else {
              uVar1 = (uVar3 >> 1) + uVar3;
              if (uVar11 < uVar1) {
                uVar11 = uVar1;
              }
            }
          }
          else {
            uVar11 = 0x7fffffffffffffff;
          }
          lVar9 = FUN_18000fb70(uVar11 + 1);
          param_1[2] = uVar2 + 1;
          param_1[3] = uVar11;
          if (uVar3 < 0x10) {
            FUN_180540530(lVar9,param_1,uVar2);
            *(byte *)(lVar9 + uVar2) = bVar12;
            *(undefined1 *)(lVar9 + 1 + uVar2) = 0;
          }
          else {
            lVar4 = *param_1;
            FUN_180540530(lVar9,lVar4,uVar2);
            *(byte *)(lVar9 + uVar2) = bVar12;
            *(undefined1 *)(lVar9 + 1 + uVar2) = 0;
            if (uVar3 + 1 < 0x1000) {
              thunk_FUN_1803d64e0(lVar4);
            }
            else {
              if (0x1f < (lVar4 - *(longlong *)(lVar4 + -8)) - 8U) goto LAB_18035be43;
              thunk_FUN_1803d64e0(*(longlong *)(lVar4 + -8),uVar3 + 0x28);
            }
          }
          *param_1 = lVar9;
        }
      }
      local_res10 = local_res10 + 1;
    } while (local_res10 != pbVar7);
  }
  return param_1;
}



/* ===== 18035be50 FUN_18035be50 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18035be50(void)

{
  char *_Str;
  code *pcVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  undefined8 ****ppppuVar4;
  char ****ppppcVar5;
  size_t sVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 ****ppppuVar10;
  char ****ppppcVar11;
  ulonglong uVar12;
  undefined1 *puVar13;
  ulonglong uVar14;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar15;
  undefined4 extraout_XMM0_Da_00;
  undefined1 auStack_1b8 [8];
  undefined1 auStack_1b0 [24];
  ulonglong local_198;
  undefined1 local_190 [16];
  undefined1 local_180 [24];
  undefined8 ****local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  ulonglong local_150;
  char ****local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  ulonglong local_130;
  char ****local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  ulonglong local_110;
  undefined8 ****local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  ulonglong local_f0;
  undefined1 local_e8;
  undefined1 local_e0 [8];
  undefined1 local_d8 [16];
  undefined1 local_c8 [40];
  undefined8 local_a0;
  undefined8 local_98;
  longlong local_88 [4];
  undefined1 local_68 [32];
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_1b8;
  uStack_160 = 0;
  local_158 = 0;
  local_150 = 0xf;
  local_168 = (undefined8 ****)0x0;
  uStack_140 = 0;
  local_138 = 0;
  local_130 = 0xf;
  local_148 = (char ****)0x0;
  uStack_120 = 0;
  local_118 = 0;
  local_110 = 0xf;
  local_128 = (char ****)0x0;
  uStack_100 = 0;
  local_f8 = 0;
  local_f0 = 0xf;
  local_108 = (undefined8 ****)0x0;
  local_e8 = 0;
  FUN_180282950(local_e0);
  uVar2 = local_150;
  local_a0 = 0;
  local_98 = 0;
  if (local_150 < 2) {
    if (0x7fffffffffffffff - (local_150 >> 1) < local_150) {
      uVar14 = 0x7fffffffffffffff;
    }
    else {
      uVar12 = (local_150 >> 1) + local_150;
      uVar14 = 0xf;
      if (0xf < uVar12) {
        uVar14 = uVar12;
      }
    }
    ppppuVar4 = (undefined8 ****)FUN_18000fb70(uVar14 + 1);
    local_158 = 2;
    *(undefined2 *)ppppuVar4 = DAT_18077e648;
    *(undefined1 *)((longlong)ppppuVar4 + 2) = 0;
    local_150 = uVar14;
    if (uVar2 < 0x10) {
LAB_18035bfa9:
      local_168 = ppppuVar4;
      goto LAB_18035bfae;
    }
    uVar12 = uVar2 + 1;
    ppppuVar10 = local_168;
    if (uVar12 < 0x1000) {
LAB_18035bfa4:
      thunk_FUN_1803d64e0(ppppuVar10,uVar12);
      goto LAB_18035bfa9;
    }
    ppppuVar10 = (undefined8 ****)local_168[-1];
    if ((ulonglong)((longlong)local_168 + (-8 - (longlong)ppppuVar10)) < 0x20) {
      uVar12 = uVar2 + 0x28;
      goto LAB_18035bfa4;
    }
LAB_18035c289:
    pcVar1 = (code *)swi(0x29);
    lVar9 = (*pcVar1)(5);
    puVar3 = auStack_1b0;
    uVar15 = extraout_XMM0_Da_00;
  }
  else {
    ppppuVar4 = &local_168;
    if (0xf < local_150) {
      ppppuVar4 = local_168;
    }
    local_158 = 2;
    *(undefined2 *)ppppuVar4 = 0x6e65;
    *(undefined1 *)((longlong)ppppuVar4 + 2) = 0;
LAB_18035bfae:
    uVar2 = local_130;
    if (local_130 < 7) {
      if (0x7fffffffffffffff - (local_130 >> 1) < local_130) {
        uVar14 = 0x7fffffffffffffff;
      }
      else {
        uVar12 = (local_130 >> 1) + local_130;
        uVar14 = 0xf;
        if (0xf < uVar12) {
          uVar14 = uVar12;
        }
      }
      ppppcVar5 = (char ****)FUN_18000fb70(uVar14 + 1);
      local_138 = 7;
      *(undefined4 *)ppppcVar5 = s_English_18077e650._0_4_;
      *(undefined2 *)((longlong)ppppcVar5 + 4) = s_English_18077e650._4_2_;
      *(char *)((longlong)ppppcVar5 + 6) = s_English_18077e650[6];
      *(char *)((longlong)ppppcVar5 + 7) = '\0';
      local_130 = uVar14;
      if (0xf < uVar2) {
        uVar12 = uVar2 + 1;
        ppppcVar11 = local_148;
        if (0xfff < uVar12) {
          ppppcVar11 = (char ****)local_148[-1];
          if ((char *)0x1f < (char *)((longlong)local_148 + (-8 - (longlong)ppppcVar11)))
          goto LAB_18035c289;
          uVar12 = uVar2 + 0x28;
        }
        thunk_FUN_1803d64e0(ppppcVar11,uVar12);
      }
      local_148 = ppppcVar5;
    }
    else {
      ppppcVar5 = (char ****)&local_148;
      if (0xf < local_130) {
        ppppcVar5 = local_148;
      }
      local_138 = 7;
      FUN_180540530(ppppcVar5,"English",7);
      *(char *)((longlong)ppppcVar5 + 7) = '\0';
    }
    uVar2 = local_110;
    if (local_110 < 7) {
      uVar12 = 0x7fffffffffffffff;
      if (local_110 <= 0x7fffffffffffffff - (local_110 >> 1)) {
        uVar14 = (local_110 >> 1) + local_110;
        uVar12 = 0xf;
        if (0xf < uVar14) {
          uVar12 = uVar14;
        }
      }
      ppppcVar5 = (char ****)FUN_18000fb70(uVar12 + 1);
      local_118 = 7;
      *(undefined4 *)ppppcVar5 = s_English_18077e650._0_4_;
      *(undefined2 *)((longlong)ppppcVar5 + 4) = s_English_18077e650._4_2_;
      *(char *)((longlong)ppppcVar5 + 6) = s_English_18077e650[6];
      *(char *)((longlong)ppppcVar5 + 7) = '\0';
      local_110 = uVar12;
      if (0xf < uVar2) {
        uVar12 = uVar2 + 1;
        ppppcVar11 = local_128;
        if (0xfff < uVar12) {
          ppppcVar11 = (char ****)local_128[-1];
          if ((char *)0x1f < (char *)((longlong)local_128 + (-8 - (longlong)ppppcVar11)))
          goto LAB_18035c289;
          uVar12 = uVar2 + 0x28;
        }
        thunk_FUN_1803d64e0(ppppcVar11,uVar12);
      }
      local_128 = ppppcVar5;
    }
    else {
      ppppcVar5 = (char ****)&local_128;
      if (0xf < local_110) {
        ppppcVar5 = local_128;
      }
      local_118 = 7;
      FUN_180540530(ppppcVar5,"English",7);
      *(char *)((longlong)ppppcVar5 + 7) = '\0';
    }
    puVar13 = auStack_1b8;
    ppppuVar4 = &local_108;
    if (0xf < local_f0) {
      ppppuVar4 = local_108;
    }
    local_f8 = 0;
    *(undefined1 *)ppppuVar4 = 0;
    local_e8 = 0;
    local_198 = 0;
    do {
      uVar2 = local_198;
      FUN_18035fd30(local_e0,local_190,&PTR_s_time_justnow_18077e760 + local_198 * 2,
                    &PTR_s_Just_Now_18077e768 + local_198 * 2);
      _Str = (&PTR_s_Just_Now_18077e768)[uVar2 * 2];
      local_88[0] = 0;
      local_88[1] = 0;
      local_88[2] = 0;
      local_88[3] = 0;
      sVar6 = strlen(_Str);
      FUN_1800133a0(local_88,_Str,sVar6);
      uVar7 = FUN_18035bb30(local_68,local_88);
      plVar8 = (longlong *)FUN_180360a10(extraout_XMM0_Da,local_180,uVar7);
      FUN_1800242d0(*plVar8 + 0x30,&local_198);
      uVar15 = FUN_18000f890(local_68);
      if (0xf < (ulonglong)local_88[3]) {
        uVar12 = local_88[3] + 1;
        lVar9 = local_88[0];
        if (0xfff < uVar12) {
          lVar9 = *(longlong *)(local_88[0] + -8);
          if (0x1f < (local_88[0] - lVar9) - 8U) goto LAB_18035c289;
          uVar12 = local_88[3] + 0x28;
        }
        uVar15 = thunk_FUN_1803d64e0(lVar9,uVar12);
      }
      local_198 = uVar2 + 1;
    } while (local_198 < 0x5a4);
    lVar9 = DAT_1811078c0;
    puVar3 = auStack_1b8;
    if (DAT_1811078c0 != DAT_1811078c8) {
      FUN_180362260(DAT_1811078c0,&local_168);
      DAT_1811078c0 = DAT_1811078c0 + 0xd8;
      goto LAB_18035c29e;
    }
  }
  puVar13 = puVar3;
  *(undefined8 *)(puVar13 + -8) = 0x18035c29d;
  FUN_1803611c0(uVar15,lVar9,puVar13 + 0x50);
LAB_18035c29e:
  *(undefined8 *)(puVar13 + -8) = 0x18035c2a7;
  FUN_1800132b0(local_c8);
  *(undefined8 *)(puVar13 + -8) = 0x18035c2b0;
  FUN_1802828d0(local_d8);
  *(undefined8 *)(puVar13 + -8) = 0x18035c2b9;
  FUN_18000f890(&local_108);
  *(undefined8 *)(puVar13 + -8) = 0x18035c2c2;
  FUN_18000f890(&local_128);
  *(undefined8 *)(puVar13 + -8) = 0x18035c2cc;
  FUN_18000f890(puVar13 + 0x70);
  *(undefined8 *)(puVar13 + -8) = 0x18035c2d6;
  FUN_18000f890(puVar13 + 0x50);
  *(undefined8 *)(puVar13 + -8) = 0x18035c2e2;
  return;
}



/* ===== 18035c300 FUN_18035c300 ===== */

void FUN_18035c300(longlong param_1)

{
  FUN_18000f890(param_1 + 0x60);
  FUN_18000f890(param_1 + 0x40);
  FUN_18000f890(param_1 + 0x20);
  FUN_18000f890(param_1);
  return;
}



/* ===== 18035c340 FUN_18035c340 ===== */

void FUN_18035c340(longlong param_1)

{
  FUN_1800132b0(param_1 + 0xa0);
  FUN_1802828d0(param_1 + 0x90);
  FUN_18000f890(param_1 + 0x60);
  FUN_18000f890(param_1 + 0x40);
  FUN_18000f890(param_1 + 0x20);
  FUN_18000f890(param_1);
  return;
}



/* ===== 18035c390 FUN_18035c390 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_18035c390(undefined8 *param_1,undefined8 *param_2)

{
  code *pcVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 ****ppppuVar4;
  undefined8 uVar5;
  int extraout_var;
  ulonglong uVar6;
  undefined1 *puVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [24];
  int local_78;
  undefined4 local_68;
  undefined8 *local_60;
  undefined8 ****local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStack_98;
  local_68 = 0;
  uVar6 = param_2[2];
  if (0xf < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  local_58 = (undefined8 ****)0x0;
  uStack_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_60 = param_1;
  if (0x7fffffffffffffff < uVar6) {
                    /* WARNING: Subroutine does not return */
    FUN_180011990();
  }
  if (uVar6 < 0x10) {
    local_40 = 0xf;
    local_48 = uVar6;
    FUN_180540530(&local_58,param_2,uVar6);
    *(undefined1 *)((longlong)&local_58 + uVar6) = 0;
  }
  else {
    uVar3 = uVar6 | 0xf;
    uVar8 = 0x7fffffffffffffff;
    if ((uVar3 < 0x8000000000000000) && (uVar8 = uVar3, uVar3 < 0x16)) {
      uVar8 = 0x16;
    }
    ppppuVar4 = (undefined8 ****)FUN_18000fb70(uVar8 + 1);
    local_58 = ppppuVar4;
    local_48 = uVar6;
    local_40 = uVar8;
    FUN_180540530(ppppuVar4,param_2,uVar6);
    *(undefined1 *)(uVar6 + (longlong)ppppuVar4) = 0;
  }
  uVar6 = local_48;
  ppppuVar4 = &local_58;
  if (0xf < local_40) {
    ppppuVar4 = local_58;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 7;
  *(undefined2 *)param_1 = 0;
  local_68 = 8;
  local_60 = param_1;
  if (local_48 != 0) {
    if (0x7fffffff < local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_1800139d0(0x16);
    }
    local_78 = 0;
    uVar5 = FUN_1804e5030(0xfde9,ppppuVar4,local_48 & 0xffffffff,0);
    if ((int)((ulonglong)uVar5 >> 0x20) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_180013cb0();
    }
    FUN_1800246c0(param_1,(longlong)(int)uVar5,0);
    if ((ulonglong)param_1[3] < 8) {
      puVar9 = param_1;
    }
    else {
      puVar9 = (undefined8 *)*param_1;
    }
    local_78 = (int)uVar5;
    FUN_1804e5030(0xfde9,ppppuVar4,uVar6 & 0xffffffff,puVar9);
    puVar7 = auStack_98;
    iVar2 = extraout_var;
    if (extraout_var != 0) goto LAB_18035c58c;
  }
  if (0xf < local_40) {
    uVar6 = local_40 + 1;
    ppppuVar4 = local_58;
    if (0xfff < uVar6) {
      ppppuVar4 = (undefined8 ****)local_58[-1];
      if (0x1f < (ulonglong)((longlong)local_58 + (-8 - (longlong)ppppuVar4))) {
        pcVar1 = (code *)swi(0x29);
        iVar2 = (*pcVar1)(5);
        puVar7 = auStack_90;
LAB_18035c58c:
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)(puVar7 + -8) = 0x18035c593;
        FUN_180013cb0(iVar2);
      }
      uVar6 = local_40 + 0x28;
    }
    thunk_FUN_1803d64e0(ppppuVar4,uVar6);
  }
  return param_1;
}



/* ===== 18035c5b0 FUN_18035c5b0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_18035c5b0(undefined8 *param_1,undefined8 *param_2)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 ****ppppuVar4;
  int extraout_var;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [24];
  int local_68;
  undefined4 local_58;
  undefined8 *local_50;
  undefined8 ****local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_88;
  if ((ulonglong)param_2[3] < 8) {
    puVar8 = param_2;
  }
  else {
    puVar8 = (undefined8 *)*param_2;
  }
  uVar6 = param_2[2];
  uStack_40 = 0;
  local_38 = 0;
  local_30 = 0xf;
  local_48 = (undefined8 ****)0x0;
  local_58 = 4;
  local_50 = param_1;
  if (uVar6 != 0) {
    if (0x7fffffff < uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_1800139d0(0x16,param_2,0);
    }
    local_68 = 0;
    uVar3 = FUN_1804e5080(0xfde9,puVar8,uVar6 & 0xffffffff,0);
    if ((int)((ulonglong)uVar3 >> 0x20) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_180013cb0();
    }
    uVar5 = (ulonglong)(int)uVar3;
    if (local_38 < uVar5) {
      FUN_180361850(&local_48,uVar5 - local_38);
    }
    else {
      ppppuVar4 = &local_48;
      if (0xf < local_30) {
        ppppuVar4 = local_48;
      }
      local_38 = uVar5;
      *(char *)((longlong)ppppuVar4 + uVar5) = (char)((ulonglong)uVar3 >> 0x20);
    }
    ppppuVar4 = &local_48;
    if (0xf < local_30) {
      ppppuVar4 = local_48;
    }
    local_68 = (int)uVar3;
    FUN_1804e5080(0xfde9,puVar8,uVar6 & 0xffffffff,ppppuVar4);
    puVar7 = auStack_88;
    iVar2 = extraout_var;
    if (extraout_var != 0) goto LAB_18035c756;
  }
  ppppuVar4 = &local_48;
  if (0xf < local_30) {
    ppppuVar4 = local_48;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_1800133a0(param_1,ppppuVar4,local_38);
  if (0xf < local_30) {
    uVar6 = local_30 + 1;
    ppppuVar4 = local_48;
    if (0xfff < uVar6) {
      ppppuVar4 = (undefined8 ****)local_48[-1];
      if (0x1f < (ulonglong)((longlong)local_48 + (-8 - (longlong)ppppuVar4))) {
        pcVar1 = (code *)swi(0x29);
        iVar2 = (*pcVar1)(5);
        puVar7 = auStack_80;
LAB_18035c756:
                    /* WARNING: Subroutine does not return */
        *(undefined **)(puVar7 + -8) = &UNK_18035c75d;
        FUN_180013cb0(iVar2);
      }
      uVar6 = local_30 + 0x28;
    }
    thunk_FUN_1803d64e0(ppppuVar4,uVar6);
  }
  return param_1;
}



/* ===== 18035c770 FUN_18035c770 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

char * FUN_18035c770(char *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 auStack_a8 [32];
  char *local_88;
  undefined8 local_80;
  undefined1 local_70 [32];
  undefined1 local_50 [32];
  undefined1 local_30 [32];
  ulonglong local_10;
  
  local_10 = DAT_180919500 ^ (ulonglong)auStack_a8;
  local_88 = param_1;
  uVar2 = FUN_180073a70(local_30,param_2,".json");
  uVar2 = FUN_18035c390(local_50,uVar2);
  local_88 = "C:\\neverlose\\langs";
  local_80 = 0x11;
  uVar1 = FUN_1804e5000();
  FUN_180013d60(local_70,uVar1,&local_88);
  FUN_180014f50(param_1,local_70,uVar2);
  FUN_1800289e0(local_70);
  FUN_1800289e0(local_50);
  FUN_18000f890(local_30);
  return param_1;
}



/* ===== 18035c840 FUN_18035c840 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_18035c840(undefined8 param_1,char *param_2)

{
  code *pcVar1;
  longlong lVar2;
  char *pcVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  ulonglong uVar8;
  undefined1 auStack_298 [8];
  undefined1 auStack_290 [40];
  undefined4 local_268;
  undefined1 local_258 [32];
  longlong *local_238;
  longlong *local_230;
  longlong *local_218;
  ulonglong *local_210;
  int *local_200;
  ulonglong local_1e8;
  uint local_1e0;
  undefined **local_1d0 [17];
  longlong local_148 [2];
  byte local_138 [256];
  longlong local_38 [6];
  
  local_38[4] = DAT_180919500 ^ (ulonglong)auStack_298;
  uVar8 = 0;
  local_268 = 0;
  FUN_180276480(local_148,param_1,0x20);
  puVar7 = auStack_298;
  if ((local_138[*(int *)(local_148[0] + 4)] & 6) != 0) {
    uVar5 = 0;
    goto LAB_18035ca70;
  }
  FUN_1803605b0(local_258);
  FUN_180360680(local_258,local_138);
  local_38[1] = 0;
  local_38[2] = 0;
  local_38[3] = 0xf;
  local_38[0] = 0;
  local_268 = 2;
  if ((((byte)local_1e0 & 0x22) == 2) || (uVar4 = *local_210, uVar4 == 0)) {
    if (((local_1e0 & 4) == 0) && (*local_218 != 0)) {
      lVar2 = *local_238;
      uVar4 = (longlong)*local_200 + *local_218;
      goto LAB_18035c931;
    }
  }
  else {
    lVar2 = *local_230;
    if (uVar4 < local_1e8) {
      uVar4 = local_1e8;
    }
LAB_18035c931:
    if (lVar2 != 0) {
      FUN_180029840(local_38,lVar2,uVar4 - lVar2);
    }
  }
  FUN_18002ba60(param_2,local_38);
  if ((ulonglong)local_38[3] < 0x10) {
LAB_18035c995:
    puVar6 = auStack_298;
    uVar8 = *(ulonglong *)(param_2 + 0x10);
    puVar7 = auStack_298;
    if (2 < uVar8) {
      uVar4 = *(ulonglong *)(param_2 + 0x18);
      pcVar3 = param_2;
      if (0xf < uVar4) {
        pcVar3 = *(char **)param_2;
      }
      puVar7 = auStack_298;
      if (*pcVar3 == -0x11) {
        pcVar3 = param_2;
        if (0xf < uVar4) {
          pcVar3 = *(char **)param_2;
        }
        puVar7 = auStack_298;
        if (pcVar3[1] == -0x45) {
          pcVar3 = param_2;
          if (0xf < uVar4) {
            pcVar3 = *(char **)param_2;
          }
          puVar7 = auStack_298;
          if (pcVar3[2] == -0x41) {
            if (uVar4 < 0x10) goto LAB_18035c9ea;
            pcVar3 = *(char **)param_2;
            puVar7 = auStack_298;
            goto LAB_18035c9ed;
          }
        }
      }
    }
  }
  else {
    uVar4 = local_38[3] + 1;
    lVar2 = local_38[0];
    if (uVar4 < 0x1000) {
LAB_18035c990:
      thunk_FUN_1803d64e0(lVar2,uVar4);
      goto LAB_18035c995;
    }
    lVar2 = *(longlong *)(local_38[0] + -8);
    if ((local_38[0] - lVar2) - 8U < 0x20) {
      uVar4 = local_38[3] + 0x28;
      goto LAB_18035c990;
    }
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar6 = auStack_290;
LAB_18035c9ea:
    pcVar3 = param_2;
    puVar7 = puVar6;
LAB_18035c9ed:
    *(undefined8 *)(puVar7 + -8) = 0x18035c9fa;
    FUN_180540530(pcVar3,pcVar3 + 3,uVar8 - 2);
    *(ulonglong *)(param_2 + 0x10) = uVar8 - 3;
  }
  uVar5 = 1;
  *(undefined ***)(puVar7 + (longlong)*(int *)(*(longlong *)(puVar7 + 0x40) + 4) + 0x40) =
       std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)(puVar7 + (longlong)*(int *)(*(longlong *)(puVar7 + 0x40) + 4) + 0x3c) =
       *(int *)(*(longlong *)(puVar7 + 0x40) + 4) + -0x88;
  *(undefined8 *)(puVar7 + -8) = 0x18035ca36;
  FUN_180075e50(puVar7 + 0x48);
  *(undefined ***)(puVar7 + (longlong)*(int *)(*(longlong *)(puVar7 + 0x40) + 4) + 0x40) =
       std::basic_ostream<char,std::char_traits<char>_>::vftable;
  *(int *)(puVar7 + (longlong)*(int *)(*(longlong *)(puVar7 + 0x40) + 4) + 0x3c) =
       *(int *)(*(longlong *)(puVar7 + 0x40) + 4) + -0x10;
  local_1d0[0] = std::ios_base::vftable;
  *(undefined8 *)(puVar7 + -8) = 0x18035ca6f;
  FUN_1804eaa10(local_1d0);
LAB_18035ca70:
  *(undefined8 *)(puVar7 + -8) = 0x18035ca79;
  FUN_18005e2f0(local_148);
  *(undefined8 *)(puVar7 + -8) = 0x18035ca8b;
  return uVar5;
}



/* ===== 18035caa0 FUN_18035caa0 ===== */

void FUN_18035caa0(longlong *param_1)

{
  *(undefined ***)((longlong)*(int *)(*param_1 + 4) + (longlong)param_1) =
       std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((longlong)*(int *)(*param_1 + 4) + -4 + (longlong)param_1) =
       *(int *)(*param_1 + 4) + -0x88;
  FUN_180075e50(param_1 + 1);
  *(undefined ***)((longlong)*(int *)(*param_1 + 4) + (longlong)param_1) =
       std::basic_ostream<char,std::char_traits<char>_>::vftable;
  *(int *)((longlong)*(int *)(*param_1 + 4) + -4 + (longlong)param_1) =
       *(int *)(*param_1 + 4) + -0x10;
  param_1[0x11] = (longlong)std::ios_base::vftable;
  FUN_1804eaa10();
  return;
}



/* ===== 18035cb20 FUN_18035cb20 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_18035cb20(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  undefined8 uVar7;
  int *piVar8;
  longlong *plVar9;
  longlong *plVar10;
  int *piVar11;
  undefined8 ****ppppuVar12;
  undefined8 *****pppppuVar13;
  int iVar14;
  ulonglong uVar15;
  longlong *plVar16;
  undefined8 *puVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  longlong *plVar20;
  int *piVar21;
  longlong lVar22;
  longlong *plVar23;
  undefined4 uVar24;
  undefined8 uStack_150;
  undefined1 auStack_148 [8];
  undefined1 auStack_140 [24];
  undefined8 *****local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  ulonglong local_110;
  undefined8 ****local_108 [3];
  ulonglong local_f0;
  undefined8 *****local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  ulonglong local_d0;
  int local_c8;
  undefined1 local_c4;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  int *piStack_80;
  int *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_148;
  local_128 = (undefined8 *****)((ulonglong)local_128 & 0xffffffff00000000);
  uStack_e0 = 0;
  local_d8 = 0;
  local_d0 = 0xf;
  local_e8 = (undefined8 *****)0x0;
  cVar6 = FUN_18035c840(0,&local_e8);
  puVar18 = auStack_148;
  if (cVar6 == '\0') {
    uVar7 = 0;
    goto LAB_18035d31f;
  }
  local_c8 = 0;
  local_c4 = 0;
  local_c0 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  local_a0 = 0xf;
  local_b8 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  piStack_80 = (int *)0x0;
  local_78 = (int *)0x0;
  uStack_70 = 0;
  uStack_60 = 0;
  local_58 = 0;
  local_50 = 0xf;
  local_68 = 0;
  local_128 = &local_e8;
  if (0xf < local_d0) {
    local_128 = local_e8;
  }
  uStack_120 = local_d8;
  cVar6 = FUN_180370c30(&local_128,&local_c8,&local_68);
  puVar18 = auStack_148;
  if ((cVar6 != '\0') && (local_c8 == 5)) {
    uVar7 = FUN_180099cd0(param_1,&local_128);
    uVar7 = FUN_18035c5b0(local_108,uVar7);
    FUN_18002ba60(param_2,uVar7);
    FUN_18000f890(local_108);
    uVar24 = FUN_1800289e0(&local_128);
    *(undefined1 *)(param_2 + 0x10) = 1;
    for (piVar8 = piStack_80; piVar8 != local_78; piVar8 = piVar8 + 0x20) {
      if (*(ulonglong *)(piVar8 + 6) < 0x10) {
        piVar11 = piVar8;
      }
      else {
        piVar11 = *(int **)piVar8;
      }
      if ((*(longlong *)(piVar8 + 4) == 4) && (*piVar11 == 0x6f666e69)) {
        piVar11 = piVar8 + 8;
        piVar21 = piVar8 + 0x1a;
        plVar20 = (longlong *)(piVar8 + 0x1c);
        goto LAB_18035cca1;
      }
    }
    piVar11 = (int *)0x0;
    piVar21 = (int *)&DAT_00000048;
    plVar20 = (longlong *)&DAT_00000050;
LAB_18035cca1:
    if (piVar11 != (int *)0x0) {
      plVar23 = (longlong *)&DAT_00000010;
      plVar16 = *(longlong **)piVar21;
      for (plVar9 = plVar16; plVar9 != (longlong *)*plVar20; plVar9 = plVar9 + 0x10) {
        if ((ulonglong)plVar9[3] < 0x10) {
          plVar10 = plVar9;
        }
        else {
          plVar10 = (longlong *)*plVar9;
        }
        if (plVar9[2] == 9) {
          lVar22 = 0x6d616e5f6c6c7566 - *plVar10;
          if (lVar22 == 0) {
            lVar22 = 0x65 - (ulonglong)*(byte *)(plVar10 + 1);
          }
          if (lVar22 == 0) {
            if (plVar9 != (longlong *)0xffffffffffffffe0) goto LAB_18035cde0;
            break;
          }
        }
      }
      local_108[1] = (undefined8 ****)0x0;
      local_108[2] = (undefined8 ****)0x0;
      local_f0 = 0xf;
      local_108[0] = (undefined8 ****)0x0;
      pppppuVar13 = local_108;
      bVar5 = false;
      bVar4 = true;
      goto LAB_18035cd3e;
    }
    goto LAB_18035d0ae;
  }
  uVar7 = 0;
  goto LAB_18035d2f9;
LAB_18035cde0:
  do {
    if ((ulonglong)plVar16[3] < 0x10) {
      plVar9 = plVar16;
    }
    else {
      plVar9 = (longlong *)*plVar16;
    }
    if (plVar16[2] == 9) {
      lVar22 = 0x6d616e5f6c6c7566 - *plVar9;
      if (lVar22 == 0) {
        lVar22 = 0x65 - (ulonglong)*(byte *)(plVar9 + 1);
      }
      if (lVar22 == 0) {
        plVar9 = plVar16 + 4;
        plVar16 = plVar16 + 6;
        goto LAB_18035ce1d;
      }
    }
    plVar16 = plVar16 + 0x10;
  } while (plVar16 != (longlong *)*plVar20);
  plVar9 = (longlong *)0x0;
  plVar16 = (longlong *)&DAT_00000010;
LAB_18035ce1d:
  if ((int)*plVar9 == 3) {
    FUN_180024b50(&local_128,plVar16);
  }
  else {
    local_128 = (undefined8 *****)0x0;
    uStack_120 = 0;
    local_118 = 0;
    local_110 = 0;
    FUN_1800133a0(&local_128,&DAT_18058b643,0);
  }
  pppppuVar13 = &local_128;
  bVar5 = true;
  bVar4 = false;
LAB_18035cd3e:
  FUN_18002ba60(param_2 + 4,pppppuVar13);
  if (bVar4) {
    FUN_18000f890(local_108);
  }
  if ((!bVar5) || (local_110 < 0x10)) {
LAB_18035cd9f:
    plVar16 = *(longlong **)piVar21;
    for (plVar9 = plVar16; plVar9 != (longlong *)*plVar20; plVar9 = plVar9 + 0x10) {
      if ((ulonglong)plVar9[3] < 0x10) {
        plVar10 = plVar9;
      }
      else {
        plVar10 = (longlong *)*plVar9;
      }
      if ((plVar9[2] == 8) && (*plVar10 == 0x656d616e5f636f6c)) {
        if (plVar9 != (longlong *)0xffffffffffffffe0) goto LAB_18035cf50;
        break;
      }
    }
    local_108[1] = (undefined8 ****)0x0;
    local_108[2] = (undefined8 ****)0x0;
    local_f0 = 0xf;
    local_108[0] = (undefined8 ****)0x0;
    pppppuVar13 = local_108;
    bVar5 = false;
    bVar4 = true;
    goto LAB_18035ceab;
  }
  uVar15 = local_110 + 1;
  pppppuVar13 = local_128;
  if (uVar15 < 0x1000) {
LAB_18035cd9a:
    thunk_FUN_1803d64e0(pppppuVar13,uVar15);
    goto LAB_18035cd9f;
  }
  pppppuVar13 = (undefined8 *****)local_128[-1];
  puVar18 = auStack_148;
  if ((ulonglong)((longlong)local_128 + (-8 - (longlong)pppppuVar13)) < 0x20) {
    uVar15 = local_110 + 0x28;
    goto LAB_18035cd9a;
  }
  goto LAB_18035d176;
  while (plVar16 = plVar16 + 0x10, plVar16 != (longlong *)*plVar20) {
LAB_18035cf50:
    if ((ulonglong)plVar16[3] < 0x10) {
      plVar9 = plVar16;
    }
    else {
      plVar9 = (longlong *)*plVar16;
    }
    if ((plVar16[2] == 8) && (*plVar9 == 0x656d616e5f636f6c)) {
      plVar9 = plVar16 + 4;
      plVar16 = plVar16 + 6;
      goto LAB_18035cf7a;
    }
  }
  plVar9 = (longlong *)0x0;
  plVar16 = (longlong *)&DAT_00000010;
LAB_18035cf7a:
  if ((int)*plVar9 == 3) {
    FUN_180024b50(&local_128,plVar16);
  }
  else {
    local_128 = (undefined8 *****)0x0;
    uStack_120 = 0;
    local_118 = 0;
    local_110 = 0;
    FUN_1800133a0(&local_128,&DAT_18058b643,0);
  }
  pppppuVar13 = &local_128;
  bVar5 = true;
  bVar4 = false;
LAB_18035ceab:
  FUN_18002ba60(param_2 + 8,pppppuVar13);
  if (bVar4) {
    FUN_18000f890(local_108);
  }
  if ((bVar5) && (0xf < local_110)) {
    uVar15 = local_110 + 1;
    pppppuVar13 = local_128;
    if (0xfff < uVar15) {
      pppppuVar13 = (undefined8 *****)local_128[-1];
      puVar18 = auStack_148;
      if (0x1f < (ulonglong)((longlong)local_128 + (-8 - (longlong)pppppuVar13)))
      goto LAB_18035d176;
      uVar15 = local_110 + 0x28;
    }
    thunk_FUN_1803d64e0(pppppuVar13,uVar15);
  }
  bVar4 = false;
  plVar16 = *(longlong **)piVar21;
  for (plVar9 = plVar16; plVar9 != (longlong *)*plVar20; plVar9 = plVar9 + 0x10) {
    if ((ulonglong)plVar9[3] < 0x10) {
      plVar10 = plVar9;
    }
    else {
      plVar10 = (longlong *)*plVar9;
    }
    if (plVar9[2] == 9) {
      lVar22 = 0x6e616c5f65736162 - *plVar10;
      if (lVar22 == 0) {
        lVar22 = 0x67 - (ulonglong)*(byte *)(plVar10 + 1);
      }
      if (lVar22 == 0) {
        if (plVar9 != (longlong *)0xffffffffffffffe0) goto LAB_18035d0e6;
        break;
      }
    }
  }
  local_108[1] = (undefined8 ****)0x0;
  local_108[2] = (undefined8 ****)0x0;
  local_f0 = 0xf;
  local_108[0] = (undefined8 ****)0x0;
  pppppuVar13 = local_108;
  bVar5 = false;
  bVar4 = true;
  goto LAB_18035d01d;
LAB_18035d0e6:
  do {
    if ((ulonglong)plVar16[3] < 0x10) {
      plVar9 = plVar16;
    }
    else {
      plVar9 = (longlong *)*plVar16;
    }
    if (plVar16[2] == 9) {
      lVar22 = 0x6e616c5f65736162 - *plVar9;
      if (lVar22 == 0) {
        lVar22 = 0x67 - (ulonglong)*(byte *)(plVar9 + 1);
      }
      if (lVar22 == 0) {
        plVar20 = plVar16 + 4;
        plVar23 = plVar16 + 6;
        goto LAB_18035d120;
      }
    }
    plVar16 = plVar16 + 0x10;
  } while (plVar16 != (longlong *)*plVar20);
  plVar20 = (longlong *)0x0;
LAB_18035d120:
  if ((int)*plVar20 == 3) {
    FUN_180024b50(&local_128,plVar23);
  }
  else {
    local_128 = (undefined8 *****)0x0;
    uStack_120 = 0;
    local_118 = 0;
    local_110 = 0;
    FUN_1800133a0(&local_128,&DAT_18058b643,0);
  }
  pppppuVar13 = &local_128;
  bVar5 = true;
LAB_18035d01d:
  uVar24 = FUN_18002ba60(param_2 + 0xc,pppppuVar13);
  if ((bVar4) && (0xf < local_f0)) {
    uVar15 = local_f0 + 1;
    ppppuVar12 = local_108[0];
    if (uVar15 < 0x1000) {
LAB_18035d066:
      uVar24 = thunk_FUN_1803d64e0(ppppuVar12,uVar15);
      goto LAB_18035d06c;
    }
    ppppuVar12 = (undefined8 ****)local_108[0][-1];
    if ((ulonglong)((longlong)local_108[0] + (-8 - (longlong)ppppuVar12)) < 0x20) {
      uVar15 = local_f0 + 0x28;
      goto LAB_18035d066;
    }
    pcVar3 = (code *)swi(0x29);
    (*pcVar3)(5);
    puVar18 = auStack_140;
LAB_18035d176:
    pcVar3 = (code *)swi(0x29);
    uVar24 = (*pcVar3)(5);
    puVar19 = puVar18 + 8;
LAB_18035d17d:
    puVar17 = param_2;
LAB_18035d180:
    uVar7 = param_2[2];
    *(undefined8 *)(puVar19 + -8) = 0x18035d189;
    FUN_180029840(uVar24,puVar17,uVar7);
    puVar18 = puVar19;
  }
  else {
LAB_18035d06c:
    if ((bVar5) && (0xf < local_110)) {
      uVar15 = local_110 + 1;
      pppppuVar13 = local_128;
      if (0xfff < uVar15) {
        pppppuVar13 = (undefined8 *****)local_128[-1];
        puVar18 = auStack_148;
        if (0x1f < (ulonglong)((longlong)local_128 + (-8 - (longlong)pppppuVar13)))
        goto LAB_18035d176;
        uVar15 = local_110 + 0x28;
      }
      uVar24 = thunk_FUN_1803d64e0(pppppuVar13,uVar15);
    }
LAB_18035d0ae:
    puVar19 = auStack_148;
    puVar18 = auStack_148;
    if ((param_2[6] == 0) && (puVar18 = auStack_148, param_2 + 4 != param_2)) {
      if ((ulonglong)param_2[3] < 0x10) goto LAB_18035d17d;
      puVar17 = (undefined8 *)*param_2;
      puVar19 = auStack_148;
      goto LAB_18035d180;
    }
  }
  if ((param_2[10] == 0) && (param_2 != param_2 + -4)) {
    plVar20 = param_2 + 4;
    if (0xf < (ulonglong)param_2[7]) {
      plVar20 = (longlong *)*plVar20;
    }
    uVar7 = param_2[6];
    *(undefined8 *)(puVar18 + -8) = 0x18035d1b4;
    FUN_180029840(param_2 + 8,plVar20,uVar7);
  }
  *(undefined8 *)(puVar18 + -8) = 0x18035d1c0;
  FUN_18028bcb0(param_2 + 0x11);
  for (piVar8 = piStack_80; piVar8 != local_78; piVar8 = piVar8 + 0x20) {
    if (*(ulonglong *)(piVar8 + 6) < 0x10) {
      piVar11 = piVar8;
    }
    else {
      piVar11 = *(int **)piVar8;
    }
    if (*(longlong *)(piVar8 + 4) == 7) {
      iVar14 = 0x69727473 - *piVar11;
      if ((iVar14 == 0) && (iVar14 = 0x676e - (uint)*(ushort *)(piVar11 + 1), iVar14 == 0)) {
        iVar14 = 0x73 - (uint)*(byte *)((longlong)piVar11 + 6);
      }
      if (iVar14 == 0) {
        if ((piVar8 + 8 != (int *)0x0) && (piVar8[8] == 5)) {
          lVar1 = *(longlong *)(piVar8 + 0x1c);
          for (lVar22 = *(longlong *)(piVar8 + 0x1a); lVar22 != lVar1; lVar22 = lVar22 + 0x80) {
            if (*(int *)(lVar22 + 0x20) == 3) {
              *(undefined8 *)(puVar18 + -8) = 0x18035d25a;
              plVar20 = (longlong *)FUN_18034e110(param_2 + 0x11,puVar18 + 0x20,lVar22);
              lVar2 = *plVar20;
              if (lVar2 != lVar22) {
                plVar20 = (longlong *)(lVar22 + 0x30);
                if (0xf < *(ulonglong *)(lVar22 + 0x48)) {
                  plVar20 = (longlong *)*plVar20;
                }
                uVar7 = *(undefined8 *)(lVar22 + 0x40);
                *(undefined8 *)(puVar18 + -8) = 0x18035d27d;
                FUN_180029840(lVar2 + 0x30,plVar20,uVar7);
              }
            }
          }
        }
        break;
      }
    }
  }
  if (7 < (ulonglong)param_1[3]) {
    param_1 = (undefined8 *)*param_1;
  }
  *(undefined8 *)(puVar18 + -8) = 0x18035d2ab;
  iVar14 = FUN_1804e5830(param_1,puVar18 + 0x40,0x21,0xffffffff);
  uVar7 = 0x8000000000000000;
  if (iVar14 == 0) {
    uVar7 = *(undefined8 *)(puVar18 + 0x40);
  }
  param_2[0x19] = uVar7;
  *(undefined8 *)(puVar18 + -8) = 0x18035d2ce;
  plVar20 = (longlong *)FUN_1800ad890(puVar18 + 0x20);
  param_2[0x1a] = *plVar20 / 1000000;
  uVar7 = 1;
LAB_18035d2f9:
  *(undefined8 *)(puVar18 + -8) = 0x18035d302;
  FUN_18000f890(&local_68);
  *(undefined8 *)(puVar18 + -8) = 0x18035d30c;
  FUN_1801a6920(&piStack_80);
  *(undefined8 *)(puVar18 + -8) = 0x18035d315;
  FUN_1801a69c0(&local_98);
  *(undefined8 *)(puVar18 + -8) = 0x18035d31e;
  FUN_18000f890(&local_b8);
LAB_18035d31f:
  *(undefined8 *)(puVar18 + -8) = 0x18035d329;
  FUN_18000f890(puVar18 + 0x60);
  *(undefined8 *)(puVar18 + -8) = 0x18035d338;
  return uVar7;
}



/* ===== 18035d360 FUN_18035d360 ===== */

void FUN_18035d360(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = DAT_1811078d8;
  lVar4 = DAT_1811078d0;
  lVar1 = DAT_1811078b8;
  lVar2 = DAT_1811078c0;
  if (DAT_1811078d0 != DAT_1811078d8) {
    do {
      FUN_18000f890(lVar4 + 0x60);
      FUN_18000f890(lVar4 + 0x40);
      FUN_18000f890(lVar4 + 0x20);
      FUN_18000f890(lVar4);
      lVar4 = lVar4 + 0x88;
    } while (lVar4 != lVar3);
    lVar1 = DAT_1811078b8;
    lVar2 = DAT_1811078c0;
    DAT_1811078d8 = DAT_1811078d0;
  }
  for (; lVar3 = DAT_1811078c0, lVar1 != DAT_1811078c0; lVar1 = lVar1 + 0xd8) {
    if (DAT_1811078d8 == DAT_1811078e0) {
      DAT_1811078c0 = lVar2;
      FUN_180361590();
    }
    else {
      DAT_1811078c0 = lVar2;
      FUN_1803624e0(DAT_1811078d8,lVar1);
      DAT_1811078d8 = DAT_1811078d8 + 0x88;
    }
    lVar2 = DAT_1811078c0;
    DAT_1811078c0 = lVar3;
  }
  DAT_1811078c0 = lVar2;
  FUN_18028bcb0(&DAT_180ca19c0);
  return;
}



/* ===== 18035d440 FUN_18035d440 ===== */

void FUN_18035d440(void)

{
  if (DAT_180cd0fa6 == '\0') {
    DAT_180cd0fa6 = 1;
    FUN_18035be50();
    FUN_18035dd90();
    return;
  }
  return;
}



/* ===== 18035d470 FUN_18035d470 ===== */

ulonglong FUN_18035d470(undefined8 *param_1)

{
  ulonglong uVar1;
  size_t sVar2;
  size_t _Size;
  longlong lVar3;
  int iVar4;
  undefined8 *_Buf1;
  undefined8 *_Buf2;
  ulonglong uVar5;
  ulonglong uVar6;
  
  lVar3 = DAT_1811078b8;
  uVar6 = (DAT_1811078c0 - DAT_1811078b8 >> 3) * -0x7b425ed097b425ed;
  if (uVar6 != 0) {
    uVar1 = param_1[3];
    uVar5 = 0;
    sVar2 = param_1[2];
    do {
      _Buf1 = (undefined8 *)(uVar5 * 0xd8 + lVar3);
      if (uVar1 < 0x10) {
        _Buf2 = param_1;
      }
      else {
        _Buf2 = (undefined8 *)*param_1;
      }
      _Size = _Buf1[2];
      if (0xf < (ulonglong)_Buf1[3]) {
        _Buf1 = (undefined8 *)*_Buf1;
      }
      if (_Size == sVar2) {
        if (_Size == 0) {
LAB_18035d513:
          return uVar5 & 0xffffffff;
        }
        iVar4 = memcmp(_Buf1,_Buf2,_Size);
        if (iVar4 == 0) goto LAB_18035d513;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar6);
  }
  return 0xffffffff;
}



/* ===== 18035d530 FUN_18035d530 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint * FUN_18035d530(uint *param_1)

{
  longlong lVar1;
  code *pcVar2;
  int iVar3;
  int cbMultiByte;
  undefined8 uVar4;
  longlong lVar5;
  uint *puVar6;
  ulonglong uVar7;
  LPCWSTR ***ppppWVar8;
  ulonglong uVar9;
  undefined2 *puVar10;
  ulonglong uVar11;
  undefined1 auStackY_168 [32];
  undefined1 local_128;
  LPCWSTR ***local_118;
  undefined8 uStack_110;
  ulonglong local_108;
  ulonglong local_100;
  uint local_f8;
  uint uStack_f4;
  uint uStack_f0;
  uint uStack_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  WCHAR local_d8 [88];
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStackY_168;
  FUN_180540170(local_d8,0,0xaa);
  iVar3 = GetUserDefaultLocaleName(local_d8,0x55);
  if (iVar3 == 0) {
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0xf;
    param_1[7] = 0;
    *(undefined1 *)param_1 = 0;
  }
  else {
    local_118 = (LPCWSTR ***)0x0;
    uStack_110 = 0;
    local_108 = 0;
    local_100 = 0;
    uVar4 = FUN_180512c70(local_d8);
    FUN_180024d40(&local_118,local_d8,uVar4);
    ppppWVar8 = (LPCWSTR ***)&local_118;
    if (7 < local_100) {
      ppppWVar8 = local_118;
    }
    if (local_108 != 0) {
      lVar1 = (longlong)ppppWVar8 + local_108 * 2;
      lVar5 = thunk_FUN_1804e6d50(ppppWVar8,lVar1,0x2d);
      if (lVar5 != lVar1) {
        uVar9 = lVar5 - (longlong)ppppWVar8;
        uVar7 = (longlong)uVar9 >> 1;
        if (uVar7 != 0xffffffffffffffff) {
          if (local_108 < uVar7) {
            uVar11 = uVar7 - local_108;
            if (local_100 - local_108 < uVar11) {
              FUN_180029680(&local_118,uVar11,local_128,uVar11);
            }
            else {
              ppppWVar8 = (LPCWSTR ***)&local_118;
              if (7 < local_100) {
                ppppWVar8 = local_118;
              }
              lVar1 = local_108 * 2;
              local_108 = uVar7;
              if (uVar11 != 0) {
                puVar10 = (undefined2 *)((longlong)ppppWVar8 + lVar1);
                for (; uVar11 != 0; uVar11 = uVar11 - 1) {
                  *puVar10 = 0;
                  puVar10 = puVar10 + 1;
                }
              }
              *(undefined2 *)((uVar9 & 0xfffffffffffffffe) + (longlong)ppppWVar8) = 0;
            }
          }
          else {
            ppppWVar8 = (LPCWSTR ***)&local_118;
            if (7 < local_100) {
              ppppWVar8 = local_118;
            }
            local_108 = uVar7;
            *(undefined2 *)((uVar9 & 0xfffffffffffffffe) + (longlong)ppppWVar8) = 0;
          }
        }
      }
    }
    ppppWVar8 = (LPCWSTR ***)&local_118;
    if (7 < local_100) {
      ppppWVar8 = local_118;
    }
    cbMultiByte = WideCharToMultiByte(0xfde9,0,(LPCWSTR)ppppWVar8,(int)local_108,(LPSTR)0x0,0,
                                      (LPCSTR)0x0,(LPBOOL)0x0);
    iVar3 = cbMultiByte;
    if (cbMultiByte < 0) {
      iVar3 = 0;
    }
    FUN_1800969e0(&local_f8,(longlong)iVar3,0);
    if (0 < cbMultiByte) {
      puVar6 = &local_f8;
      if (0xf < uStack_e0) {
        puVar6 = (uint *)CONCAT44(uStack_f4,local_f8);
      }
      ppppWVar8 = (LPCWSTR ***)&local_118;
      if (7 < local_100) {
        ppppWVar8 = local_118;
      }
      WideCharToMultiByte(0xfde9,0,(LPCWSTR)ppppWVar8,(int)local_108,(LPSTR)puVar6,cbMultiByte,
                          (LPCSTR)0x0,(LPBOOL)0x0);
    }
    *param_1 = local_f8;
    param_1[1] = uStack_f4;
    param_1[2] = uStack_f0;
    param_1[3] = uStack_ec;
    param_1[4] = (uint)local_e8;
    param_1[5] = local_e8._4_4_;
    param_1[6] = (uint)uStack_e0;
    param_1[7] = uStack_e0._4_4_;
    local_e8 = 0;
    uStack_e0 = 0xf;
    local_f8 = local_f8 & 0xffffff00;
    if (7 < local_100) {
      uVar7 = local_100 * 2 + 2;
      ppppWVar8 = local_118;
      if (0xfff < uVar7) {
        ppppWVar8 = (LPCWSTR ***)local_118[-1];
        if (0x1f < (ulonglong)((longlong)local_118 + (-8 - (longlong)ppppWVar8))) {
          pcVar2 = (code *)swi(0x29);
          (*pcVar2)(5);
          pcVar2 = (code *)swi(3);
          puVar6 = (uint *)(*pcVar2)();
          return puVar6;
        }
        uVar7 = local_100 * 2 + 0x29;
      }
      thunk_FUN_1803d64e0(ppppWVar8,uVar7);
    }
  }
  return param_1;
}



/* ===== 18035d7e0 FUN_18035d7e0 ===== */

longlong FUN_18035d7e0(uint param_1,undefined8 *param_2)

{
  byte *pbVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined1 local_58 [24];
  
  lVar3 = DAT_1811078c0;
  lVar2 = DAT_1811078b8;
  uVar5 = (ulonglong)param_1;
  if (-1 < (int)param_1) {
    iVar9 = 0;
    while ((uVar8 = (uint)uVar5, (int)uVar8 < (int)(lVar3 - lVar2 >> 3) * 0x684bda13 && (iVar9 < 8))
          ) {
      lVar10 = uVar5 * 0xd8;
      if ((ulonglong)param_2[3] < 0x10) {
        puVar7 = param_2;
      }
      else {
        puVar7 = (undefined8 *)*param_2;
      }
      uVar5 = 0;
      uVar11 = 0xcbf29ce484222325;
      if (param_2[2] != 0) {
        do {
          pbVar1 = (byte *)((longlong)puVar7 + uVar5);
          uVar5 = uVar5 + 1;
          uVar11 = (uVar11 ^ *pbVar1) * 0x100000001b3;
        } while (uVar5 < (ulonglong)param_2[2]);
      }
      lVar6 = FUN_1800268a0(lVar2 + 0x88 + lVar10,local_58,param_2,uVar11);
      lVar6 = *(longlong *)(lVar6 + 8);
      if ((lVar6 != 0) && (lVar6 != *(longlong *)(lVar10 + 0x90 + lVar2))) {
        return lVar6 + 0x30;
      }
      if (uVar8 == 0) {
        return 0;
      }
      iVar9 = iVar9 + 1;
      if (((*(longlong *)(lVar10 + 0x70 + lVar2) == 0) ||
          (uVar4 = FUN_18035d470(lVar2 + 0x60 + lVar10), (int)uVar4 < 0)) || (uVar4 == uVar8)) {
        uVar5 = 0;
      }
      else {
        uVar5 = (ulonglong)uVar4;
      }
    }
  }
  return 0;
}



/* ===== 18035d900 FUN_18035d900 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong * FUN_18035d900(ulonglong *param_1,byte *param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  byte bVar3;
  ulonglong uVar4;
  code *pcVar5;
  size_t sVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  char *pcVar9;
  undefined1 *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [24];
  undefined4 local_68;
  byte *local_60;
  byte *local_58;
  ulonglong *local_50;
  char local_48 [8];
  ulonglong local_40;
  
  local_40 = DAT_180919500 ^ (ulonglong)auStack_88;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  local_68 = 1;
  local_50 = param_1;
  FUN_180067510(0,*(longlong *)(param_2 + 0x10) + 2);
  uVar12 = param_1[2];
  uVar4 = param_1[3];
  if (uVar12 < uVar4) {
    param_1[2] = uVar12 + 1;
    puVar7 = param_1;
    if (0xf < uVar4) {
      puVar7 = (ulonglong *)*param_1;
    }
    *(undefined2 *)((longlong)puVar7 + uVar12) = 0x22;
LAB_18035da5b:
    puVar10 = auStack_88;
    if (*(ulonglong *)(param_2 + 0x18) < 0x10) {
      local_60 = param_2;
    }
    else {
      local_60 = *(byte **)param_2;
    }
    local_58 = local_60 + *(longlong *)(param_2 + 0x10);
    if (local_60 != local_58) {
      do {
        bVar3 = *local_60;
        if (bVar3 == 9) {
          pcVar9 = "\\t";
LAB_18035dc3d:
          sVar6 = 2;
LAB_18035dc43:
          FUN_1800134a0(param_1,pcVar9,sVar6);
        }
        else {
          if (bVar3 == 10) {
            pcVar9 = "\\n";
            goto LAB_18035dc3d;
          }
          if (bVar3 == 0xd) {
            pcVar9 = "\\r";
            goto LAB_18035dc3d;
          }
          if (bVar3 == 0x22) {
            pcVar9 = "\\\"";
            goto LAB_18035dc3d;
          }
          if (bVar3 == 0x5c) {
            pcVar9 = "\\\\";
            goto LAB_18035dc3d;
          }
          if (bVar3 < 0x20) {
            local_48[0] = '\0';
            local_48[1] = '\0';
            local_48[2] = '\0';
            local_48[3] = '\0';
            local_48[4] = '\0';
            local_48[5] = '\0';
            local_48[6] = '\0';
            local_48[7] = '\0';
            snprintf(local_48,8,"\\u%04x",bVar3);
            sVar6 = strlen(local_48);
            pcVar9 = local_48;
            goto LAB_18035dc43;
          }
          uVar12 = param_1[2];
          uVar4 = param_1[3];
          if (uVar12 < uVar4) {
            param_1[2] = uVar12 + 1;
            puVar7 = param_1;
            if (0xf < uVar4) {
              puVar7 = (ulonglong *)*param_1;
            }
            *(byte *)((longlong)puVar7 + uVar12) = bVar3;
            *(undefined1 *)((longlong)puVar7 + uVar12 + 1) = 0;
          }
          else {
            if (uVar12 == 0x7fffffffffffffff) goto LAB_18035dd7f;
            uVar11 = uVar12 + 1 | 0xf;
            if (uVar11 < 0x8000000000000000) {
              if (0x7fffffffffffffff - (uVar4 >> 1) < uVar4) {
                uVar11 = 0x7fffffffffffffff;
              }
              else {
                uVar8 = (uVar4 >> 1) + uVar4;
                if (uVar11 < uVar8) {
                  uVar11 = uVar8;
                }
              }
            }
            else {
              uVar11 = 0x7fffffffffffffff;
            }
            uVar8 = FUN_18000fb70(uVar11 + 1);
            param_1[2] = uVar12 + 1;
            param_1[3] = uVar11;
            if (uVar4 < 0x10) {
              FUN_180540530(uVar8,param_1,uVar12);
              *(byte *)(uVar8 + uVar12) = bVar3;
              *(undefined1 *)(uVar8 + 1 + uVar12) = 0;
              *param_1 = uVar8;
            }
            else {
              uVar11 = *param_1;
              FUN_180540530(uVar8,uVar11,uVar12);
              *(byte *)(uVar8 + uVar12) = bVar3;
              *(undefined1 *)(uVar8 + 1 + uVar12) = 0;
              if (uVar4 + 1 < 0x1000) {
                thunk_FUN_1803d64e0(uVar11);
                *param_1 = uVar8;
              }
              else {
                uVar12 = (uVar11 - *(longlong *)(uVar11 - 8)) - 8;
                if (0x1f < uVar12) goto LAB_18035dd34;
                thunk_FUN_1803d64e0(*(longlong *)(uVar11 - 8),uVar4 + 0x28);
                *param_1 = uVar8;
              }
            }
          }
        }
        local_60 = local_60 + 1;
      } while (local_60 != local_58);
    }
    uVar4 = param_1[2];
    uVar11 = param_1[3];
    if (uVar4 < uVar11) {
      param_1[2] = uVar4 + 1;
      if (uVar11 < 0x10) {
        *(undefined2 *)((longlong)param_1 + uVar4) = 0x22;
        puVar10 = auStack_88;
      }
      else {
        *(undefined2 *)(*param_1 + uVar4) = 0x22;
        puVar10 = auStack_88;
      }
      goto LAB_18035dd57;
    }
    if (uVar4 == 0x7fffffffffffffff) {
LAB_18035dd7f:
                    /* WARNING: Subroutine does not return */
      FUN_180011990();
    }
    uVar8 = uVar4 + 1 | 0xf;
    uVar12 = 0x7fffffffffffffff;
    if (((uVar8 < 0x8000000000000000) && (uVar11 <= 0x7fffffffffffffff - (uVar11 >> 1))) &&
       (uVar2 = (uVar11 >> 1) + uVar11, uVar12 = uVar8, uVar8 < uVar2)) {
      uVar12 = uVar2;
    }
    uVar8 = FUN_18000fb70(uVar12 + 1);
    param_1[2] = uVar4 + 1;
    param_1[3] = uVar12;
    if (uVar11 < 0x10) {
      FUN_180540530(uVar8,param_1,uVar4);
      *(undefined2 *)(uVar8 + uVar4) = 0x22;
    }
    else {
      uVar12 = *param_1;
      FUN_180540530(uVar8,uVar12,uVar4);
      *(undefined2 *)(uVar8 + uVar4) = 0x22;
      puVar10 = auStack_88;
      if (uVar11 + 1 < 0x1000) goto LAB_18035dd3b;
      plVar1 = (longlong *)(uVar12 - 8);
      uVar12 = (uVar12 - *plVar1) - 8;
      if (0x1f < uVar12) goto LAB_18035dd34;
      thunk_FUN_1803d64e0(*plVar1,uVar11 + 0x28);
      puVar10 = auStack_88;
    }
  }
  else {
    if (uVar12 == 0x7fffffffffffffff) goto LAB_18035dd7f;
    uVar11 = uVar12 + 1 | 0xf;
    if (uVar11 < 0x8000000000000000) {
      if (0x7fffffffffffffff - (uVar4 >> 1) < uVar4) {
        uVar11 = 0x7fffffffffffffff;
      }
      else {
        uVar8 = (uVar4 >> 1) + uVar4;
        if (uVar11 < uVar8) {
          uVar11 = uVar8;
        }
      }
    }
    else {
      uVar11 = 0x7fffffffffffffff;
    }
    uVar8 = FUN_18000fb70(uVar11 + 1);
    param_1[2] = uVar12 + 1;
    param_1[3] = uVar11;
    if (uVar4 < 0x10) {
      FUN_180540530(uVar8,param_1,uVar12);
      *(undefined2 *)(uVar8 + uVar12) = 0x22;
LAB_18035da58:
      *param_1 = uVar8;
      goto LAB_18035da5b;
    }
    uVar11 = *param_1;
    FUN_180540530(uVar8,uVar11,uVar12);
    *(undefined2 *)(uVar8 + uVar12) = 0x22;
    if (uVar4 + 1 < 0x1000) {
      thunk_FUN_1803d64e0(uVar11);
      goto LAB_18035da58;
    }
    uVar12 = (uVar11 - *(longlong *)(uVar11 - 8)) - 8;
    if (uVar12 < 0x20) {
      thunk_FUN_1803d64e0(*(longlong *)(uVar11 - 8),uVar4 + 0x28);
      goto LAB_18035da58;
    }
LAB_18035dd34:
    pcVar5 = (code *)swi(0x29);
    (*pcVar5)(5);
    puVar10 = auStack_80;
LAB_18035dd3b:
    *(undefined8 *)(puVar10 + -8) = 0x18035dd43;
    thunk_FUN_1803d64e0(uVar12);
  }
  *param_1 = uVar8;
LAB_18035dd57:
  *(undefined8 *)(puVar10 + -8) = 0x18035dd67;
  return param_1;
}



/* ===== 18035dd90 FUN_18035dd90 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18035dd90(void)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  bool bVar4;
  undefined **ppuVar5;
  ulonglong uVar6;
  char *pcVar7;
  char cVar8;
  undefined4 uVar9;
  int iVar10;
  undefined8 uVar11;
  int *piVar12;
  undefined8 ******_Buf1;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_248 [8];
  undefined1 auStack_240 [24];
  uint local_228;
  undefined1 local_220 [8];
  char *local_218;
  undefined **local_210;
  undefined8 local_208;
  undefined8 uStack_200;
  ulonglong local_1f8;
  ulonglong uStack_1f0;
  ulonglong local_1e8;
  char *local_1d8;
  undefined8 uStack_1d0;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  char *local_1b8;
  longlong *local_1b0;
  char *local_1a8;
  undefined8 local_1a0;
  undefined8 ******local_198;
  longlong local_190;
  undefined8 ******local_188 [2];
  longlong local_178;
  ulonglong local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined1 local_e8;
  undefined1 local_e0 [8];
  undefined1 local_d8 [16];
  undefined1 local_c8 [40];
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 local_88 [32];
  undefined1 local_68 [32];
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_248;
  local_228 = 0;
  if (DAT_180cd0fa6 == '\0') {
    FUN_18035d440();
    puVar18 = auStack_248;
    goto LAB_18035e44d;
  }
  FUN_180024b50(local_68,(longlong)DAT_1811078b0 * 0xd8 + DAT_1811078b8);
  lVar19 = DAT_1811078c0;
  puVar16 = auStack_248;
  puVar17 = auStack_248;
  lVar20 = DAT_1811078b8 + 0xd8;
  if (lVar20 != DAT_1811078c0) {
    do {
      local_218 = (char *)((ulonglong)local_218 & 0xffffffff00000000);
      local_210 = &PTR_vftable_18091a158;
      uVar11 = FUN_18035c770(local_188,lVar20);
      piVar12 = (int *)FUN_180016ab0(local_220,uVar11,&local_218);
      iVar10 = *piVar12;
      FUN_1800289e0(local_188);
      if (iVar10 != 2) break;
      lVar20 = lVar20 + 0xd8;
    } while (lVar20 != lVar19);
    if (lVar20 != lVar19) {
      lVar21 = lVar20 + 0xd8;
      if (lVar21 != lVar19) {
        do {
          local_218 = (char *)((ulonglong)local_218 & 0xffffffff00000000);
          local_210 = &PTR_vftable_18091a158;
          uVar11 = FUN_18035c770(local_188,lVar21);
          piVar12 = (int *)FUN_180016ab0(local_220,uVar11,&local_218);
          iVar10 = *piVar12;
          FUN_1800289e0(local_188);
          if (iVar10 == 2) {
            FUN_18035ffe0(lVar20,lVar21);
            lVar20 = lVar20 + 0xd8;
          }
          lVar21 = lVar21 + 0xd8;
        } while (lVar21 != lVar19);
        if (lVar20 == lVar19) goto LAB_18035df24;
      }
      lVar21 = DAT_1811078c0;
      for (; lVar19 != lVar21; lVar19 = lVar19 + 0xd8) {
        FUN_18035ffe0(lVar20,lVar19);
        lVar20 = lVar20 + 0xd8;
      }
      FUN_180360ca0(lVar20,DAT_1811078c0);
      DAT_1811078c0 = lVar20;
    }
  }
LAB_18035df24:
  local_208 = (ulonglong)local_208._4_4_ << 0x20;
  uStack_200 = &PTR_vftable_18091a158;
  local_218 = "C:\\neverlose\\langs";
  local_210 = (undefined **)&DAT_00000011;
  uVar9 = FUN_1804e5000();
  FUN_180013d60(local_188,uVar9,&local_218);
  local_228 = 0x30;
  piVar12 = (int *)FUN_180016ab0(local_220,local_188,&local_208);
  iVar10 = *piVar12;
  FUN_1800289e0(local_188);
  puVar18 = auStack_248;
  if (iVar10 == 3) {
    local_1f8 = 0;
    uStack_1f0 = 0;
    local_1e8 = 0;
    local_1d8 = "C:\\neverlose\\langs";
    uStack_1d0 = 0x11;
    uVar9 = FUN_1804e5000();
    FUN_180013d60(local_188,uVar9,&local_1d8);
    uVar13 = 0x330;
    local_228 = 0x330;
    FUN_18004e860(&local_1c8,local_188,&local_208);
    FUN_1800289e0(local_188);
    if (CONCAT44(uStack_1bc,uStack_1c0) != 0) {
      LOCK();
      piVar12 = (int *)(CONCAT44(uStack_1bc,uStack_1c0) + 8);
      *piVar12 = *piVar12 + 1;
      UNLOCK();
    }
    local_208 = CONCAT44(uStack_1c4,local_1c8);
    uStack_200 = (undefined **)CONCAT44(uStack_1bc,uStack_1c0);
    FUN_18004eae0(&local_1b8,&local_208);
    if (CONCAT44(uStack_1bc,uStack_1c0) != 0) {
      LOCK();
      piVar12 = (int *)(CONCAT44(uStack_1bc,uStack_1c0) + 8);
      *piVar12 = *piVar12 + 1;
      UNLOCK();
    }
    FUN_18004ebc0(&local_218,&local_1d8);
    if (local_1b8 != local_218) {
      do {
        pcVar7 = local_1b8;
        FUN_180015fc0(local_1b8,&local_208,3);
        if ((int)local_208 == 2) {
          local_1a8 = ".json";
          local_1a0 = 5;
          uVar9 = FUN_1804e5000();
          FUN_180013d60(local_188,uVar9,&local_1a8);
          local_228 = uVar13 | 0xd;
          uVar11 = FUN_180099dd0(pcVar7 + 0x20,local_88);
          uVar13 = uVar13 | 0xf;
          local_198 = local_188;
          if (7 < local_170) {
            local_198 = local_188[0];
          }
          local_190 = local_178;
          local_228 = uVar13;
          iVar10 = FUN_180014140(uVar11,&local_198);
          if (iVar10 != 0) goto LAB_18035e0ff;
          bVar4 = false;
        }
        else {
LAB_18035e0ff:
          bVar4 = true;
        }
        if ((uVar13 & 2) != 0) {
          uVar13 = uVar13 & 0xfffffffd;
          local_228 = uVar13;
          FUN_1800289e0(local_88);
        }
        if ((uVar13 & 1) != 0) {
          uVar13 = uVar13 & 0xfffffffe;
          local_228 = uVar13;
          FUN_1800289e0(local_188);
        }
        if (!bVar4) {
          if (uStack_1f0 == local_1e8) {
            FUN_1801c1cc0(&local_1f8,uStack_1f0);
          }
          else {
            FUN_180024980(uStack_1f0,pcVar7 + 0x20);
            uStack_1f0 = uStack_1f0 + 0x20;
          }
        }
        FUN_18004e9d0(&local_1b8);
      } while (local_1b8 != local_218);
    }
    ppuVar5 = local_210;
    if (local_210 != (undefined **)0x0) {
      LOCK();
      plVar3 = (longlong *)(local_210 + 1);
      lVar20 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar20 == 1) {
        (**(code **)*local_210)(local_210);
        LOCK();
        piVar12 = (int *)((longlong)ppuVar5 + 0xc);
        iVar10 = *piVar12;
        *piVar12 = *piVar12 + -1;
        UNLOCK();
        if (iVar10 == 1) {
          (**(code **)((longlong)*ppuVar5 + 8))(ppuVar5);
        }
      }
    }
    if (local_1b0 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_1b0 + 1;
      lVar20 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar20 == 1) {
        (**(code **)*local_1b0)(local_1b0);
        LOCK();
        piVar12 = (int *)((longlong)local_1b0 + 0xc);
        iVar10 = *piVar12;
        *piVar12 = *piVar12 + -1;
        UNLOCK();
        if (iVar10 == 1) {
          (**(code **)(*local_1b0 + 8))(local_1b0);
        }
      }
    }
    plVar3 = (longlong *)CONCAT44(uStack_1bc,uStack_1c0);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar3 + 1;
      lVar20 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar20 == 1) {
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar12 = (int *)((longlong)plVar3 + 0xc);
        iVar10 = *piVar12;
        *piVar12 = *piVar12 + -1;
        UNLOCK();
        if (iVar10 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3);
        }
      }
    }
    FUN_180360d20(local_1f8,uStack_1f0,(longlong)(uStack_1f0 - local_1f8) >> 5,0);
    uVar6 = uStack_1f0;
    uVar15 = uStack_1f0;
    for (uVar14 = local_1f8; uStack_1f0 = uVar15, uVar14 != uVar6; uVar14 = uVar14 + 0x20) {
      uVar11 = FUN_180099cd0(uVar14,local_88);
      FUN_18035c5b0(local_188,uVar11);
      FUN_1800289e0(local_88);
      _Buf1 = local_188;
      if (0xf < local_170) {
        _Buf1 = local_188[0];
      }
      if (((local_178 != 2) || (iVar10 = memcmp(_Buf1,&DAT_18077e648,2), iVar10 != 0)) &&
         (iVar10 = FUN_18035d470(local_188), iVar10 < 0)) {
        uStack_160 = 0;
        local_158 = 0;
        local_150 = 0xf;
        local_168 = 0;
        uStack_140 = 0;
        local_138 = 0;
        local_130 = 0xf;
        local_148 = 0;
        uStack_120 = 0;
        local_118 = 0;
        local_110 = 0xf;
        local_128 = 0;
        uStack_100 = 0;
        local_f8 = 0;
        local_f0 = 0xf;
        local_108 = 0;
        local_e8 = 0;
        FUN_180282950(local_e0);
        local_a0 = 0;
        local_98 = 0;
        cVar8 = FUN_18035cb20(uVar14,&local_168);
        if (cVar8 != '\0') {
          if (DAT_1811078c0 == DAT_1811078c8) {
            FUN_1803611c0(extraout_XMM0_Da,DAT_1811078c0,&local_168);
          }
          else {
            FUN_180362260(DAT_1811078c0,&local_168);
            DAT_1811078c0 = DAT_1811078c0 + 0xd8;
          }
        }
        FUN_1800132b0(local_c8);
        FUN_1802828d0(local_d8);
        FUN_18000f890(&local_108);
        FUN_18000f890(&local_128);
        FUN_18000f890(&local_148);
        FUN_18000f890(&local_168);
      }
      FUN_18000f890(local_188);
      uVar15 = uStack_1f0;
    }
    puVar18 = auStack_248;
    uVar14 = local_1f8;
    if (local_1f8 != 0) {
      for (; uVar14 != uVar15; uVar14 = uVar14 + 0x20) {
        FUN_1800289e0(uVar14);
      }
      uVar14 = local_1f8;
      if ((local_1e8 - local_1f8 & 0xffffffffffffffe0) < 0x1000) {
LAB_18035e419:
        puVar17 = puVar16;
      }
      else {
        uVar14 = *(ulonglong *)(local_1f8 - 8);
        uVar15 = (local_1f8 - uVar14) - 8;
        if (0x1f < uVar15) {
          pcVar2 = (code *)swi(0x29);
          (*pcVar2)(5);
          puVar16 = auStack_240;
          uVar14 = uVar15;
          goto LAB_18035e419;
        }
      }
      *(undefined8 *)(puVar17 + -8) = 0x18035e421;
      thunk_FUN_1803d64e0(uVar14);
      puVar18 = puVar17;
    }
  }
  *(undefined8 *)(puVar18 + -8) = 0x18035e42d;
  iVar10 = FUN_18035d470(local_68);
  DAT_1811078b0 = 0;
  if (-1 < iVar10) {
    DAT_1811078b0 = iVar10;
  }
  *(undefined8 *)(puVar18 + -8) = 0x18035e440;
  FUN_18035d360();
  *(undefined8 *)(puVar18 + -8) = 0x18035e44d;
  FUN_18000f890(local_68);
LAB_18035e44d:
  *(undefined8 *)(puVar18 + -8) = 0x18035e45c;
  return;
}



/* ===== 18035e470 FUN_18035e470 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18035e470(char *param_1)

{
  longlong lVar1;
  undefined8 ***pppuVar2;
  undefined8 ***pppuVar3;
  undefined8 ***pppuVar4;
  undefined8 ***pppuVar5;
  undefined8 ***pppuVar6;
  undefined8 ***pppuVar7;
  undefined8 ***pppuVar8;
  code *pcVar9;
  bool bVar10;
  bool bVar11;
  char cVar12;
  int iVar13;
  size_t sVar14;
  undefined8 ****ppppuVar15;
  undefined8 ****ppppuVar16;
  longlong *plVar17;
  longlong ****pppplVar18;
  undefined8 ****ppppuVar19;
  undefined8 *_Buf2;
  ulonglong uVar20;
  char *_Str;
  ulonglong uVar21;
  undefined1 *puVar22;
  longlong ****pppplVar23;
  undefined1 auStack_1b8 [8];
  undefined1 auStack_1b0 [24];
  undefined4 local_198 [2];
  undefined8 ****local_190;
  longlong ***ppplStack_188;
  ulonglong local_180;
  ulonglong local_178;
  longlong ****local_170;
  undefined8 uStack_168;
  size_t local_160;
  ulonglong local_158;
  undefined8 ****local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  ulonglong local_130;
  undefined8 ****local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  ulonglong local_110;
  undefined8 ****local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  ulonglong local_f0;
  undefined8 ****local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  ulonglong local_d0;
  undefined1 local_c8;
  undefined4 local_c0 [2];
  undefined8 ***local_b8;
  undefined8 ***local_b0;
  undefined8 ***local_a8;
  undefined8 ***local_a0;
  undefined8 ***local_98;
  undefined8 ***local_90;
  undefined8 ***local_88;
  undefined8 ***local_80;
  undefined8 local_78;
  undefined8 ***local_68 [4];
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_1b8;
  local_198[0] = 0;
  if (DAT_180cd0fa6 == '\0') {
    DAT_180cd0fa6 = '\x01';
    FUN_18035be50();
    FUN_18035dd90();
  }
  _Str = "";
  if (param_1 != (char *)0x0) {
    _Str = param_1;
  }
  local_170 = (longlong ****)0x0;
  uStack_168 = 0;
  local_160 = 0;
  local_158 = 0;
  sVar14 = strlen(_Str);
  FUN_1800133a0(&local_170,_Str,sVar14);
  uVar21 = local_158;
  sVar14 = local_160;
  pppplVar23 = local_170;
  if (DAT_180cd0fa5 != '\0') {
    _Buf2 = &DAT_1809f7420;
    if (0xf < DAT_1809f7438) {
      _Buf2 = DAT_1809f7420;
    }
    pppplVar18 = (longlong ****)&local_170;
    if (0xf < local_158) {
      pppplVar18 = local_170;
    }
    if ((local_160 == DAT_1809f7430) &&
       ((local_160 == 0 || (iVar13 = memcmp(pppplVar18,_Buf2,local_160), iVar13 == 0))))
    goto LAB_18035e6b6;
  }
  DAT_180cd0fa5 = '\x01';
  pppplVar18 = (longlong ****)&local_170;
  if (0xf < uVar21) {
    pppplVar18 = pppplVar23;
  }
  FUN_180029840(&DAT_1809f7420,pppplVar18,sVar14);
  sVar14 = local_160;
  puVar22 = auStack_1b8;
  if (local_160 == 0) {
    ppppuVar15 = (undefined8 ****)FUN_18035d530(local_68);
    bVar11 = true;
    bVar10 = false;
    uVar21 = local_178;
    ppppuVar16 = local_190;
  }
  else {
    ppplStack_188 = (longlong ***)0x0;
    pppplVar23 = (longlong ****)&local_170;
    if (0xf < local_158) {
      pppplVar23 = local_170;
    }
    if (0x7fffffffffffffff < local_160) goto LAB_18035e9e5;
    if (local_160 < 0x10) {
      local_180 = local_160;
      uVar21 = 0xf;
      local_178 = 0xf;
      ppppuVar16 = (undefined8 ****)*pppplVar23;
      ppplStack_188 = pppplVar23[1];
      local_190 = ppppuVar16;
    }
    else {
      uVar20 = local_160 | 0xf;
      uVar21 = 0x7fffffffffffffff;
      if ((uVar20 < 0x8000000000000000) && (uVar21 = uVar20, uVar20 < 0x16)) {
        uVar21 = 0x16;
      }
      ppppuVar16 = (undefined8 ****)FUN_18000fb70(uVar21 + 1);
      local_180 = sVar14;
      local_190 = ppppuVar16;
      local_178 = uVar21;
      FUN_180540530(ppppuVar16,pppplVar23,sVar14 + 1);
    }
    ppppuVar15 = &local_190;
    bVar11 = false;
    bVar10 = true;
  }
  iVar13 = FUN_18035d470(ppppuVar15);
  if ((bVar10) && (0xf < uVar21)) {
    uVar20 = uVar21 + 1;
    ppppuVar15 = ppppuVar16;
    if (0xfff < uVar20) {
      ppppuVar15 = (undefined8 ****)ppppuVar16[-1];
      if (0x1f < (ulonglong)((longlong)ppppuVar16 + (-8 - (longlong)ppppuVar15))) {
        pcVar9 = (code *)swi(0x29);
        (*pcVar9)(5);
        puVar22 = auStack_1b0;
LAB_18035e9e5:
                    /* WARNING: Subroutine does not return */
        *(undefined **)(puVar22 + -8) = &UNK_18035e9ea;
        FUN_180011990();
      }
      uVar20 = uVar21 + 0x28;
    }
    thunk_FUN_1803d64e0(ppppuVar15,uVar20);
  }
  if (bVar11) {
    FUN_18000f890(local_68);
  }
  if ((-1 < iVar13) && (iVar13 != DAT_1811078b0)) {
    DAT_1811078b0 = iVar13;
    FUN_18028bcb0(&DAT_180ca19c0);
  }
LAB_18035e6b6:
  plVar17 = (longlong *)FUN_1800ad890(local_198);
  ppppuVar15 = DAT_1811078c0;
  lVar1 = *plVar17;
  for (ppppuVar16 = DAT_1811078b8; ppppuVar16 != ppppuVar15; ppppuVar16 = ppppuVar16 + 0x1b) {
    if ((*(char *)(ppppuVar16 + 0x10) != '\0') &&
       (499 < lVar1 / 1000000 - (longlong)ppppuVar16[0x1a])) {
      ppppuVar16[0x1a] = (undefined8 ***)(lVar1 / 1000000);
      FUN_18035c770(&local_190,ppppuVar16);
      ppppuVar19 = &local_190;
      if (7 < local_178) {
        ppppuVar19 = local_190;
      }
      iVar13 = FUN_1804e5830(ppppuVar19,local_68,0x21,0xffffffff);
      if (((iVar13 == 0) && (local_68[0] != ppppuVar16[0x19])) &&
         ((longlong)ppppuVar16[0x19] <= (longlong)local_68[0])) {
        uStack_140 = 0;
        local_138 = 0;
        local_130 = 0xf;
        local_148 = (undefined8 ****)0x0;
        uStack_120 = 0;
        local_118 = 0;
        local_110 = 0xf;
        local_128 = (undefined8 ****)0x0;
        uStack_100 = 0;
        local_f8 = 0;
        local_f0 = 0xf;
        local_108 = (undefined8 ****)0x0;
        uStack_e0 = 0;
        local_d8 = 0;
        local_d0 = 0xf;
        local_e8 = (undefined8 ****)0x0;
        local_c8 = 0;
        FUN_180282950(local_c0);
        local_80 = (undefined8 ***)0x0;
        local_78 = 0;
        cVar12 = FUN_18035cb20(&local_190,&local_148);
        if (cVar12 != '\0') {
          if ((undefined8 *****)ppppuVar16 != &local_148) {
            ppppuVar19 = &local_148;
            if (0xf < local_130) {
              ppppuVar19 = local_148;
            }
            FUN_180029840(ppppuVar16,ppppuVar19,local_138);
          }
          if ((undefined8 *****)(ppppuVar16 + 4) != &local_128) {
            ppppuVar19 = &local_128;
            if (0xf < local_110) {
              ppppuVar19 = local_128;
            }
            FUN_180029840(ppppuVar16 + 4,ppppuVar19,local_118);
          }
          if ((undefined8 *****)(ppppuVar16 + 8) != &local_108) {
            ppppuVar19 = &local_108;
            if (0xf < local_f0) {
              ppppuVar19 = local_108;
            }
            FUN_180029840(ppppuVar16 + 8,ppppuVar19,local_f8);
          }
          if ((undefined8 *****)(ppppuVar16 + 0xc) != &local_e8) {
            ppppuVar19 = &local_e8;
            if (0xf < local_d0) {
              ppppuVar19 = local_e8;
            }
            FUN_180029840(ppppuVar16 + 0xc,ppppuVar19,local_d8);
          }
          *(undefined1 *)(ppppuVar16 + 0x10) = local_c8;
          ppppuVar19 = ppppuVar16 + 0x11;
          if (ppppuVar19 != (undefined8 ****)local_c0) {
            FUN_18028bcb0(ppppuVar19);
            *(undefined4 *)ppppuVar19 = local_c0[0];
            pppuVar2 = ppppuVar16[0x12];
            ppppuVar16[0x12] = local_b8;
            pppuVar3 = ppppuVar16[0x13];
            ppppuVar16[0x13] = local_b0;
            pppuVar4 = ppppuVar16[0x14];
            ppppuVar16[0x14] = local_a8;
            pppuVar5 = ppppuVar16[0x15];
            ppppuVar16[0x15] = local_a0;
            pppuVar6 = ppppuVar16[0x16];
            ppppuVar16[0x16] = local_98;
            pppuVar7 = ppppuVar16[0x17];
            ppppuVar16[0x17] = local_90;
            pppuVar8 = ppppuVar16[0x18];
            ppppuVar16[0x18] = local_88;
            local_b8 = pppuVar2;
            local_b0 = pppuVar3;
            local_a8 = pppuVar4;
            local_a0 = pppuVar5;
            local_98 = pppuVar6;
            local_90 = pppuVar7;
            local_88 = pppuVar8;
          }
          ppppuVar16[0x19] = local_80;
          FUN_18035d360();
        }
        FUN_1800132b0(&local_a8);
        FUN_1802828d0(&local_b8);
        FUN_18000f890(&local_e8);
        FUN_18000f890(&local_108);
        FUN_18000f890(&local_128);
        FUN_18000f890(&local_148);
      }
      FUN_1800289e0(&local_190);
    }
  }
  FUN_18000f890(&local_170);
  return;
}



/* ===== 18035e9f0 FUN_18035e9f0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_18035e9f0(undefined8 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  undefined1 auStack_98 [40];
  undefined8 *local_70;
  undefined1 local_68 [32];
  undefined1 local_48 [32];
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_98;
  local_70 = param_1;
  if (DAT_180cd0fa6 == '\0') {
    DAT_180cd0fa6 = '\x01';
    FUN_18035be50();
    FUN_18035dd90();
  }
  lVar4 = DAT_1811078b8;
  if ((param_2 < 0) || ((int)(DAT_1811078c0 - DAT_1811078b8 >> 3) * 0x684bda13 <= param_2)) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0xf;
    *(undefined1 *)param_1 = 0;
  }
  else {
    uVar5 = FUN_180073a70(local_48,DAT_1811078b8 + 0x40 + (longlong)param_2 * 0xd8,&DAT_1806e7944);
    uVar5 = FUN_1800667a0(local_68,uVar5,lVar4 + 0x20 + (longlong)param_2 * 0xd8);
    puVar6 = (undefined4 *)FUN_1800134a0(uVar5,&DAT_1806e1ac0,1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    uVar1 = puVar6[1];
    uVar2 = puVar6[2];
    uVar3 = puVar6[3];
    *(undefined4 *)param_1 = *puVar6;
    *(undefined4 *)((longlong)param_1 + 4) = uVar1;
    *(undefined4 *)(param_1 + 1) = uVar2;
    *(undefined4 *)((longlong)param_1 + 0xc) = uVar3;
    uVar1 = puVar6[5];
    uVar2 = puVar6[6];
    uVar3 = puVar6[7];
    *(undefined4 *)(param_1 + 2) = puVar6[4];
    *(undefined4 *)((longlong)param_1 + 0x14) = uVar1;
    *(undefined4 *)(param_1 + 3) = uVar2;
    *(undefined4 *)((longlong)param_1 + 0x1c) = uVar3;
    *(undefined1 *)puVar6 = 0;
    *(undefined8 *)(puVar6 + 4) = 0;
    *(undefined8 *)(puVar6 + 6) = 0xf;
    FUN_18000f890(local_68);
    FUN_18000f890(local_48);
  }
  return param_1;
}



/* ===== 18035eb30 FUN_18035eb30 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_18035eb30(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  char *_Str;
  code *pcVar2;
  char cVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  size_t sVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  undefined1 *puVar12;
  longlong *plVar13;
  ulonglong uVar14;
  undefined4 uVar15;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined1 auStack_c8 [8];
  undefined1 auStack_c0 [32];
  undefined8 *local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  ulonglong local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 local_60 [32];
  ulonglong local_40;
  
  local_40 = DAT_180919500 ^ (ulonglong)auStack_c8;
  local_a0 = param_1;
  if (DAT_180cd0fa6 == '\0') {
    DAT_180cd0fa6 = '\x01';
    FUN_18035be50();
    FUN_18035dd90();
  }
  puVar12 = auStack_c8;
  if (0 < DAT_1811078b0) {
    uVar9 = param_2[2];
    puVar12 = auStack_c8;
    if (uVar9 != 0) {
      if ((ulonglong)param_2[3] < 0x10) {
        puVar5 = param_2;
      }
      else {
        puVar5 = (undefined8 *)*param_2;
      }
      uVar11 = 0xcbf29ce484222325;
      uVar14 = 0xcbf29ce484222325;
      uVar8 = 0;
      if (uVar9 != 0) {
        do {
          uVar14 = (uVar14 ^ *(byte *)(uVar8 + (longlong)puVar5)) * 0x100000001b3;
          uVar8 = uVar8 + 1;
        } while (uVar8 < uVar9);
      }
      lVar4 = FUN_1800268a0(&DAT_180ca19c0,&local_a0,param_2,uVar14);
      puVar12 = auStack_c8;
      lVar4 = *(longlong *)(lVar4 + 8);
      if ((lVar4 == 0) || (lVar4 == DAT_180ca19c8)) {
        FUN_180024b50(&local_80,param_2);
        puVar5 = (undefined8 *)FUN_18035bb30(local_60,param_2);
        if ((ulonglong)puVar5[3] < 0x10) {
          puVar10 = puVar5;
        }
        else {
          puVar10 = (undefined8 *)*puVar5;
        }
        uVar9 = 0;
        if (puVar5[2] != 0) {
          do {
            uVar11 = (uVar11 ^ *(byte *)(uVar9 + (longlong)puVar10)) * 0x100000001b3;
            uVar9 = uVar9 + 1;
          } while (uVar9 < (ulonglong)puVar5[2]);
        }
        lVar6 = FUN_1803610e0(uVar9,&local_a0,puVar5,uVar11);
        lVar4 = DAT_1811078f8;
        if (*(longlong *)(lVar6 + 8) != 0) {
          lVar4 = *(longlong *)(lVar6 + 8);
        }
        uVar15 = FUN_18000f890(local_60);
        puVar12 = auStack_c8;
        if (lVar4 != DAT_1811078f8) {
          plVar1 = *(longlong **)(lVar4 + 0x38);
          for (plVar13 = *(longlong **)(lVar4 + 0x30); plVar13 != plVar1; plVar13 = plVar13 + 1) {
            lVar4 = *plVar13;
            _Str = (&PTR_s_time_justnow_18077e760)[lVar4 * 2];
            local_a0 = (undefined8 *)0x0;
            uStack_98 = 0;
            local_90 = 0;
            local_88 = 0;
            sVar7 = strlen(_Str);
            FUN_1800133a0(&local_a0,_Str,sVar7);
            puVar5 = (undefined8 *)FUN_18035d7e0(DAT_1811078b0,&local_a0);
            uVar15 = extraout_XMM0_Da;
            if (puVar5 != (undefined8 *)0x0) {
              cVar3 = FUN_180023400(puVar5,(&PTR_s_Just_Now_18077e768)[lVar4 * 2]);
              uVar15 = extraout_XMM0_Da_00;
              if (cVar3 != '\0') goto LAB_18035ed10;
              if (&local_80 != puVar5) {
                if ((ulonglong)puVar5[3] < 0x10) {
                  puVar10 = puVar5;
                }
                else {
                  puVar10 = (undefined8 *)*puVar5;
                }
                uVar15 = FUN_180029840(&local_80,puVar10,puVar5[2]);
              }
              if (0xf < local_88) {
                uVar9 = local_88 + 1;
                puVar5 = local_a0;
                if (0xfff < uVar9) {
                  puVar5 = (undefined8 *)local_a0[-1];
                  if ((ulonglong)((longlong)local_a0 + (-8 - (longlong)puVar5)) < 0x20) {
                    uVar9 = local_88 + 0x28;
                    goto LAB_18035eddb;
                  }
LAB_18035ede5:
                  pcVar2 = (code *)swi(0x29);
                  (*pcVar2)(5);
                  puVar12 = auStack_c0;
                  goto LAB_18035edef;
                }
LAB_18035eddb:
                uVar15 = thunk_FUN_1803d64e0(puVar5,uVar9);
              }
              break;
            }
LAB_18035ed10:
            if (0xf < local_88) {
              uVar9 = local_88 + 1;
              puVar5 = local_a0;
              if (0xfff < uVar9) {
                puVar5 = (undefined8 *)local_a0[-1];
                if (0x1f < (ulonglong)((longlong)local_a0 + (-8 - (longlong)puVar5)))
                goto LAB_18035ede5;
                uVar9 = local_88 + 0x28;
              }
              uVar15 = thunk_FUN_1803d64e0(puVar5,uVar9);
            }
          }
        }
        FUN_180360070(uVar15,&local_a0,param_2,&local_80);
        *param_1 = local_80;
        param_1[1] = uStack_78;
        param_1[2] = local_70;
        param_1[3] = uStack_68;
        goto LAB_18035edf7;
      }
      param_2 = (undefined8 *)(lVar4 + 0x30);
    }
  }
LAB_18035edef:
  *(undefined8 *)(puVar12 + -8) = 0x18035edf7;
  FUN_180024b50(param_1,param_2);
LAB_18035edf7:
  *(undefined8 *)(puVar12 + -8) = 0x18035ee0a;
  return param_1;
}



/* ===== 18035ee30 FUN_18035ee30 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_18035ee30(undefined8 *param_1,char *param_2)

{
  code *pcVar1;
  size_t sVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 *puVar6;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [32];
  undefined8 *local_40;
  longlong local_38 [6];
  
  local_38[4] = DAT_180919500 ^ (ulonglong)auStack_68;
  local_40 = param_1;
  if (DAT_180cd0fa6 == '\0') {
    DAT_180cd0fa6 = '\x01';
    FUN_18035be50();
    FUN_18035dd90();
  }
  puVar6 = auStack_68;
  if (param_2 != (char *)0x0) {
    local_38[2] = 0;
    local_38[0] = 0;
    local_38[1] = 0;
    local_38[3] = 0;
    sVar2 = strlen(param_2);
    FUN_1800133a0(local_38,param_2,sVar2);
    lVar3 = FUN_18035d7e0(DAT_1811078b0,local_38);
    if (0xf < (ulonglong)local_38[3]) {
      uVar5 = local_38[3] + 1;
      lVar4 = local_38[0];
      if (0xfff < uVar5) {
        lVar4 = *(longlong *)(local_38[0] + -8);
        if (0x1f < (local_38[0] - lVar4) - 8U) {
          pcVar1 = (code *)swi(0x29);
          (*pcVar1)(5);
          puVar6 = auStack_60;
          goto LAB_18035ef10;
        }
        uVar5 = local_38[3] + 0x28;
      }
      thunk_FUN_1803d64e0(lVar4,uVar5);
    }
    puVar6 = auStack_68;
    if (lVar3 != 0) {
      FUN_180024b50(param_1,lVar3);
      puVar6 = auStack_68;
      goto LAB_18035ef22;
    }
  }
LAB_18035ef10:
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
LAB_18035ef22:
  *(undefined8 *)(puVar6 + -8) = 0x18035ef32;
  return param_1;
}



/* ===== 18035ef50 FUN_18035ef50 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_18035ef50(longlong param_1,byte *param_2,longlong param_3,uint param_4,
                       undefined8 param_5)

{
  code *pcVar1;
  bool bVar2;
  byte *pbVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  longlong lVar7;
  int *piVar8;
  undefined8 *puVar9;
  size_t sVar10;
  ulonglong *puVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  char *pcVar14;
  byte *pbVar15;
  byte *pbVar16;
  longlong *plVar17;
  ulonglong uVar18;
  byte bVar19;
  ulonglong uVar20;
  undefined2 *puVar21;
  undefined1 *puVar22;
  uint uVar23;
  uint uVar24;
  undefined8 uVar25;
  uint uVar26;
  undefined1 auStack_4e8 [8];
  undefined1 auStack_4e0 [40];
  undefined8 local_4b8;
  undefined8 local_4b0;
  uint local_4a8;
  longlong local_498 [2];
  byte abStack_488 [152];
  undefined **local_3f0 [13];
  char local_388 [256];
  undefined8 local_288;
  undefined **ppuStack_280;
  ulonglong local_278;
  ulonglong local_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined1 local_248 [32];
  longlong local_228 [4];
  undefined1 local_208 [32];
  byte local_1e8 [32];
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined1 local_168;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined1 local_d8;
  undefined1 local_d0 [8];
  undefined1 local_c8 [16];
  undefined1 local_b8 [40];
  undefined8 local_90;
  undefined8 local_88;
  undefined1 local_78 [32];
  ulonglong local_58;
  
  local_58 = DAT_180919500 ^ (ulonglong)auStack_4e8;
  uVar23 = 0;
  local_4b8 = (char *)((ulonglong)local_4b8 & 0xffffffff00000000);
  local_4a8 = param_4;
  if (DAT_180cd0fa6 == '\0') {
    DAT_180cd0fa6 = '\x01';
    FUN_18035be50();
    FUN_18035dd90();
  }
  if (*(longlong *)(param_1 + 0x10) == 0) {
    uVar25 = 0x27;
    pcVar14 = "menu_user_language_new_name_cantbeempty";
  }
  else {
    lVar7 = *(longlong *)(param_2 + 0x10);
    if (lVar7 == 0) {
LAB_18035faea:
      uVar25 = 0x2c;
      pcVar14 = "menu_user_language_new_shortname_cantbemepty";
    }
    else {
      if (*(longlong *)(param_3 + 0x10) != 0) {
        pbVar16 = param_2;
        if (0xf < *(ulonglong *)(param_2 + 0x18)) {
          pbVar16 = *(byte **)param_2;
        }
        if (lVar7 != 0) {
          if (lVar7 + 10U < 0x10) {
            FUN_180540170(local_388,0,0x100);
            pbVar15 = &DAT_18077e6d8;
            do {
              local_388[*pbVar15] = '\x01';
              pbVar15 = pbVar15 + 1;
              pbVar3 = pbVar16;
            } while (pbVar15 != &DAT_18077e6e2);
            for (; pbVar3 < pbVar16 + lVar7; pbVar3 = pbVar3 + 1) {
              if (local_388[*pbVar3] != '\0') {
                lVar7 = (longlong)pbVar3 - (longlong)pbVar16;
                goto LAB_18035f087;
              }
            }
          }
          else {
            lVar7 = thunk_FUN_1804e6380(pbVar16,lVar7,&DAT_18077e6d8,10);
LAB_18035f087:
            if (lVar7 != -1) goto LAB_18035faea;
          }
        }
        local_1e8[8] = 0;
        local_1e8[9] = 0;
        local_1e8[10] = 0;
        local_1e8[0xb] = 0;
        local_1e8[0xc] = 0;
        local_1e8[0xd] = 0;
        local_1e8[0xe] = 0;
        local_1e8[0xf] = 0;
        local_1e8[0x10] = 0;
        local_1e8[0x11] = 0;
        local_1e8[0x12] = 0;
        local_1e8[0x13] = 0;
        local_1e8[0x14] = 0;
        local_1e8[0x15] = 0;
        local_1e8[0x16] = 0;
        local_1e8[0x17] = 0;
        local_1e8[0x18] = 0xf;
        local_1e8[0x19] = 0;
        local_1e8[0x1a] = 0;
        local_1e8[0x1b] = 0;
        local_1e8[0x1c] = 0;
        local_1e8[0x1d] = 0;
        local_1e8[0x1e] = 0;
        local_1e8[0x1f] = 0;
        local_1e8[0] = 0;
        local_1e8[1] = 0;
        local_1e8[2] = 0;
        local_1e8[3] = 0;
        local_1e8[4] = 0;
        local_1e8[5] = 0;
        local_1e8[6] = 0;
        local_1e8[7] = 0;
        uStack_1c0 = 0;
        local_1b8 = 0;
        local_1b0 = 0xf;
        local_1c8 = 0;
        uStack_1a0 = 0;
        local_198 = 0;
        local_190 = 0xf;
        local_1a8 = 0;
        uStack_180 = 0;
        local_178 = 0;
        local_170 = 0xf;
        local_188 = 0;
        local_168 = 0;
        if (local_1e8 != param_2) {
          if (*(ulonglong *)(param_2 + 0x18) < 0x10) {
            pbVar16 = param_2;
          }
          else {
            pbVar16 = *(byte **)param_2;
          }
          FUN_180029840(local_1e8,pbVar16,*(undefined8 *)(param_2 + 0x10));
        }
        local_288 = (char *)((ulonglong)local_288._4_4_ << 0x20);
        ppuStack_280 = &PTR_vftable_18091a158;
        iVar5 = FUN_18035d470(param_2);
        if (iVar5 < 0) {
          uVar25 = FUN_180073a70(local_248,local_1e8,".json");
          uVar25 = FUN_18035c390(local_208,uVar25);
          local_4b8 = "C:\\neverlose\\langs";
          local_4b0 = 0x11;
          uVar6 = FUN_1804e5000();
          FUN_180013d60(&local_268,uVar6,&local_4b8);
          FUN_180014f50(local_228,&local_268,uVar25);
          FUN_1800289e0(&local_268);
          FUN_1800289e0(local_208);
          FUN_18000f890(local_248);
          uVar23 = 0x1c1;
          piVar8 = (int *)FUN_180016ab0(&local_4b8,local_228,&local_288);
          if (*piVar8 != 0) {
            local_288 = (char *)((ulonglong)local_288 & 0xffffffff00000000);
            ppuStack_280 = &PTR_vftable_18091a158;
            if (*piVar8 != 1) goto LAB_18035f247;
          }
          bVar2 = false;
        }
        else {
LAB_18035f247:
          bVar2 = true;
        }
        if ((uVar23 & 1) != 0) {
          uVar23 = uVar23 & 0xfffffffe;
          FUN_1800289e0(local_228);
        }
        if (bVar2) {
          FUN_180029840(param_5,"menu_user_language_new_shortname_exists",0x27);
          puVar22 = auStack_4e8;
          bVar19 = 0;
        }
        else {
          if (((int)local_4a8 < 0) ||
             ((int)(DAT_1811078c0 - DAT_1811078b8 >> 3) * 0x684bda13 <= (int)local_4a8)) {
            local_4a8 = 0;
          }
          uVar26 = local_4a8;
          local_4b8 = "C:\\neverlose\\langs";
          local_4b0 = 0x11;
          uVar6 = FUN_1804e5000();
          FUN_180013d60(&local_268,uVar6,&local_4b8);
          FUN_180016bc0(&local_268,&local_288);
          FUN_1800289e0(&local_268);
          uVar25 = FUN_180073a70(local_228,local_1e8,".json");
          uVar25 = FUN_18035c390(local_248,uVar25);
          local_288 = "C:\\neverlose\\langs";
          ppuStack_280 = (undefined **)0x11;
          uVar6 = FUN_1804e5000();
          FUN_180013d60(&local_268,uVar6,&local_288);
          FUN_180014f50(local_208,&local_268,uVar25);
          uVar24 = uVar23 | 0x3e00;
          local_4b8 = (char *)(CONCAT44(local_4b8._4_4_,uVar23) | 0x3e00);
          FUN_1800289e0(&local_268);
          FUN_1800289e0(local_248);
          FUN_18000f890(local_228);
          FUN_180360300(local_498,local_208);
          FUN_1800289e0(local_208);
          if ((abStack_488[*(int *)(local_498[0] + 4)] & 6) == 0) {
            FUN_1800a0af0(local_498,"{\n    \"info\": {\n");
            uVar25 = FUN_1800a0af0(local_498,"        \"name\": ");
            puVar9 = (undefined8 *)FUN_18035d900(local_248,param_2);
            if ((ulonglong)puVar9[3] < 0x10) {
              puVar12 = puVar9;
            }
            else {
              puVar12 = (undefined8 *)*puVar9;
            }
            uVar25 = FUN_180099140(uVar25,puVar12,puVar9[2]);
            FUN_1800a0af0(uVar25,&DAT_1806f2acc);
            FUN_18000f890(local_248);
            uVar25 = FUN_1800a0af0(local_498,"        \"full_name\": ");
            puVar9 = (undefined8 *)FUN_18035d900(local_248,param_1);
            if ((ulonglong)puVar9[3] < 0x10) {
              puVar12 = puVar9;
            }
            else {
              puVar12 = (undefined8 *)*puVar9;
            }
            uVar25 = FUN_180099140(uVar25,puVar12,puVar9[2]);
            FUN_1800a0af0(uVar25,&DAT_1806f2acc);
            FUN_18000f890(local_248);
            uVar25 = FUN_1800a0af0(local_498,"        \"loc_name\": ");
            puVar9 = (undefined8 *)FUN_18035d900(local_248,param_3);
            if ((ulonglong)puVar9[3] < 0x10) {
              puVar12 = puVar9;
            }
            else {
              puVar12 = (undefined8 *)*puVar9;
            }
            uVar25 = FUN_180099140(uVar25,puVar12,puVar9[2]);
            FUN_1800a0af0(uVar25,&DAT_1806f2acc);
            FUN_18000f890(local_248);
            uVar25 = FUN_1800a0af0(local_498,"        \"base_lang\": ");
            puVar9 = (undefined8 *)FUN_18035d900(local_248,(ulonglong)uVar26 * 0xd8 + DAT_1811078b8)
            ;
            if ((ulonglong)puVar9[3] < 0x10) {
              puVar12 = puVar9;
            }
            else {
              puVar12 = (undefined8 *)*puVar9;
            }
            uVar25 = FUN_180099140(uVar25,puVar12,puVar9[2]);
            FUN_1800a0af0(uVar25,&DAT_1806e6a94);
            FUN_18000f890(local_248);
            FUN_1800a0af0(local_498,"    },\n    \"strings\": {\n");
            puVar22 = auStack_4e8;
            uVar13 = 0;
LAB_18035f597:
            pcVar14 = (&PTR_s_time_justnow_18077e760)[uVar13 * 2];
            local_268 = 0;
            uStack_260 = 0;
            local_258 = 0;
            local_250 = 0;
            sVar10 = strlen(pcVar14);
            FUN_1800133a0(&local_268,pcVar14,sVar10);
            puVar11 = (ulonglong *)FUN_18035d7e0(uVar26,&local_268);
            uVar25 = FUN_1800a0af0(local_498,"        ");
            puVar12 = (undefined8 *)FUN_18035d900(local_78,&local_268);
            puVar9 = puVar12 + 2;
            if (0xf < (ulonglong)puVar12[3]) {
              puVar12 = (undefined8 *)*puVar12;
            }
            uVar25 = FUN_180099140(uVar25,puVar12,*puVar9);
            uVar25 = FUN_1800a0af0(uVar25,&DAT_1806dfa2c);
            if (puVar11 == (ulonglong *)0x0) {
              pcVar14 = (&PTR_s_Just_Now_18077e768)[uVar13 * 2];
              local_228[0] = 0;
              local_228[1] = 0;
              local_228[2] = 0;
              local_228[3] = 0;
              sVar10 = strlen(pcVar14);
              FUN_1800133a0(local_228,pcVar14,sVar10);
              plVar17 = local_228;
              uVar24 = uVar24 | 4;
            }
            else {
              local_288 = (char *)0x0;
              ppuStack_280 = (undefined **)0x0;
              local_278 = 0;
              local_270 = 0;
              uVar18 = puVar11[2];
              if (0xf < puVar11[3]) {
                puVar11 = (ulonglong *)*puVar11;
              }
              if (0x7fffffffffffffff < uVar18) {
                    /* WARNING: Subroutine does not return */
                FUN_180011990();
              }
              if (uVar18 < 0x10) {
                local_270 = 0xf;
                local_288 = (char *)*puVar11;
                ppuStack_280 = (undefined **)puVar11[1];
                local_278 = uVar18;
              }
              else {
                uVar20 = uVar18 | 0xf;
                if (uVar20 < 0x8000000000000000) {
                  if (uVar20 < 0x16) {
                    uVar20 = 0x16;
                  }
                }
                else {
                  uVar20 = 0x7fffffffffffffff;
                }
                local_288 = (char *)FUN_18000fb70(uVar20 + 1);
                local_278 = uVar18;
                local_270 = uVar20;
                FUN_180540530(local_288,puVar11,uVar18 + 1);
              }
              plVar17 = &local_288;
              uVar24 = uVar24 | 2;
            }
            local_4b8 = (char *)CONCAT44(local_4b8._4_4_,uVar24);
            puVar9 = (undefined8 *)FUN_18035d900(local_248,plVar17);
            uVar13 = uVar13 + 1;
            puVar21 = &DAT_1806e6a94;
            if (uVar13 < 0x5a4) {
              puVar21 = (undefined2 *)&DAT_1806f2acc;
            }
            puVar12 = puVar9 + 2;
            if (0xf < (ulonglong)puVar9[3]) {
              puVar9 = (undefined8 *)*puVar9;
            }
            uVar25 = FUN_180099140(uVar25,puVar9,*puVar12);
            FUN_1800a0af0(uVar25,puVar21);
            FUN_18000f890(local_248);
            uVar23 = uVar24;
            if ((uVar24 & 4) == 0) goto LAB_18035f7ed;
            uVar23 = uVar24 & 0xfffffffb;
            local_4b8 = (char *)(CONCAT44(local_4b8._4_4_,uVar24) & 0xfffffffffffffffb);
            if ((ulonglong)local_228[3] < 0x10) goto LAB_18035f7ed;
            uVar18 = local_228[3] + 1;
            lVar7 = local_228[0];
            if (0xfff < uVar18) {
              lVar7 = *(longlong *)(local_228[0] + -8);
              if (0x1f < (local_228[0] - lVar7) - 8U) {
                pcVar1 = (code *)swi(0x29);
                (*pcVar1)(5);
                puVar22 = auStack_4e0;
LAB_18035f83a:
                *(undefined8 *)(puVar22 + -8) = 0x18035f84b;
                FUN_1800a0af0(puVar22 + 0x50,"    }\n}\n");
                *(undefined8 *)(puVar22 + -8) = 0x18035f855;
                FUN_1800a0eb0(puVar22 + 0x50);
                uStack_150 = 0;
                local_148 = 0;
                local_140 = 0xf;
                local_158 = 0;
                uStack_130 = 0;
                local_128 = 0;
                local_120 = 0xf;
                local_138 = 0;
                uStack_110 = 0;
                local_108 = 0;
                local_100 = 0xf;
                local_118 = 0;
                uStack_f0 = 0;
                local_e8 = 0;
                local_e0 = 0xf;
                local_f8 = 0;
                local_d8 = 0;
                *(undefined8 *)(puVar22 + -8) = 0x18035f8eb;
                FUN_180282950(local_d0);
                local_90 = 0;
                local_88 = 0;
                *(undefined8 *)(puVar22 + -8) = 0x18035f913;
                uVar25 = FUN_180073a70(local_248,local_1e8,".json");
                *(undefined8 *)(puVar22 + -8) = 0x18035f923;
                uVar25 = FUN_18035c390(local_78,uVar25);
                local_288 = "C:\\neverlose\\langs";
                ppuStack_280 = (undefined **)0x11;
                *(undefined8 *)(puVar22 + -8) = 0x18035f944;
                uVar6 = FUN_1804e5000();
                *(undefined8 *)(puVar22 + -8) = 0x18035f959;
                FUN_180013d60(&local_268,uVar6,&local_288);
                *(undefined8 *)(puVar22 + -8) = 0x18035f970;
                FUN_180014f50(local_208,&local_268,uVar25);
                *(undefined8 *)(puVar22 + -8) = 0x18035f97d;
                FUN_1800289e0(&local_268);
                *(undefined8 *)(puVar22 + -8) = 0x18035f98a;
                FUN_1800289e0(local_78);
                *(undefined8 *)(puVar22 + -8) = 0x18035f997;
                FUN_18000f890(local_248);
                *(undefined8 *)(puVar22 + -8) = 0x18035f9ab;
                cVar4 = FUN_18035cb20(local_208,&local_158);
                *(undefined8 *)(puVar22 + -8) = 0x18035f9ba;
                uVar6 = FUN_1800289e0(local_208);
                bVar19 = 0;
                if (cVar4 != '\0') {
                  if (DAT_1811078c0 == DAT_1811078c8) {
                    *(undefined8 *)(puVar22 + -8) = 0x18035f9f9;
                    FUN_1803611c0(uVar6,DAT_1811078c0,&local_158);
                  }
                  else {
                    *(undefined8 *)(puVar22 + -8) = 0x18035f9dd;
                    FUN_180362260(DAT_1811078c0,&local_158);
                    DAT_1811078c0 = DAT_1811078c0 + 0xd8;
                  }
                  *(undefined8 *)(puVar22 + -8) = 0x18035f9fe;
                  FUN_18035d360();
                  bVar19 = 1;
                }
                *(undefined8 *)(puVar22 + -8) = 0x18035fa0c;
                FUN_1800132b0(local_b8);
                *(undefined8 *)(puVar22 + -8) = 0x18035fa18;
                FUN_1802828d0(local_c8);
                *(undefined8 *)(puVar22 + -8) = 0x18035fa24;
                FUN_18000f890(&local_f8);
                *(undefined8 *)(puVar22 + -8) = 0x18035fa30;
                FUN_18000f890(&local_118);
                *(undefined8 *)(puVar22 + -8) = 0x18035fa3c;
                FUN_18000f890(&local_138);
                *(undefined8 *)(puVar22 + -8) = 0x18035fa48;
                FUN_18000f890(&local_158);
                goto LAB_18035fa49;
              }
              uVar18 = local_228[3] + 0x28;
            }
            thunk_FUN_1803d64e0(lVar7,uVar18);
LAB_18035f7ed:
            uVar24 = uVar23;
            if ((uVar23 & 2) != 0) {
              uVar24 = uVar23 & 0xfffffffd;
              local_4b8 = (char *)(CONCAT44(local_4b8._4_4_,uVar23) & 0xfffffffffffffffd);
              FUN_18000f890(&local_288);
            }
            FUN_18000f890(local_78);
            FUN_18000f890(&local_268);
            if (0x5a3 < uVar13) goto LAB_18035f83a;
            uVar26 = local_4a8;
            goto LAB_18035f597;
          }
          FUN_180029840(param_5,"menu_user_language_new_shortname_exists",0x27);
          puVar22 = auStack_4e8;
          bVar19 = 0;
LAB_18035fa49:
          *(undefined ***)(puVar22 + (longlong)*(int *)(*(longlong *)(puVar22 + 0x50) + 4) + 0x50) =
               std::basic_ofstream<char,std::char_traits<char>_>::vftable;
          *(int *)(puVar22 + (longlong)*(int *)(*(longlong *)(puVar22 + 0x50) + 4) + 0x4c) =
               *(int *)(*(longlong *)(puVar22 + 0x50) + 4) + -0xa8;
          *(undefined8 *)(puVar22 + -8) = 0x18035fa7b;
          FUN_1800681f0(puVar22 + 0x58);
          *(undefined ***)(puVar22 + (longlong)*(int *)(*(longlong *)(puVar22 + 0x50) + 4) + 0x50) =
               std::basic_ostream<char,std::char_traits<char>_>::vftable;
          *(int *)(puVar22 + (longlong)*(int *)(*(longlong *)(puVar22 + 0x50) + 4) + 0x4c) =
               *(int *)(*(longlong *)(puVar22 + 0x50) + 4) + -0x10;
          local_3f0[0] = std::ios_base::vftable;
          *(undefined8 *)(puVar22 + -8) = 0x18035fab4;
          FUN_1804eaa10(local_3f0);
        }
        *(undefined8 *)(puVar22 + -8) = 0x18035fac1;
        FUN_18000f890(&local_188);
        *(undefined8 *)(puVar22 + -8) = 0x18035facd;
        FUN_18000f890(&local_1a8);
        *(undefined8 *)(puVar22 + -8) = 0x18035fad9;
        FUN_18000f890(&local_1c8);
        *(undefined8 *)(puVar22 + -8) = 0x18035fae5;
        FUN_18000f890(local_1e8);
        uVar13 = (ulonglong)bVar19;
        goto LAB_18035fb01;
      }
      uVar25 = 0x30;
      pcVar14 = "menu_user_language_new_localizedname_cantbeempty";
    }
  }
  uVar13 = FUN_180029840(param_5,pcVar14,uVar25);
  puVar22 = auStack_4e8;
  uVar13 = uVar13 & 0xffffffffffffff00;
LAB_18035fb01:
  *(undefined8 *)(puVar22 + -8) = 0x18035fb10;
  return uVar13;
}



/* ===== 18035fb30 FUN_18035fb30 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_18035fb30(int param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  undefined1 local_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_58;
  if (DAT_180cd0fa6 == '\0') {
    DAT_180cd0fa6 = '\x01';
    FUN_18035be50();
    FUN_18035dd90();
  }
  if ((0 < param_1) && (param_1 < (int)(DAT_1811078c0 - DAT_1811078b8 >> 3) * 0x684bda13)) {
    lVar6 = (longlong)param_1 * 0xd8;
    if (*(char *)(lVar6 + 0x80 + DAT_1811078b8) != '\0') {
      puVar5 = (undefined8 *)FUN_18035c770(local_38,lVar6 + DAT_1811078b8);
      if (7 < (ulonglong)puVar5[3]) {
        puVar5 = (undefined8 *)*puVar5;
      }
      FUN_1804e5bf0(puVar5);
      FUN_1800289e0(local_38);
      lVar4 = DAT_1811078c0;
      lVar6 = DAT_1811078b8 + lVar6;
      lVar2 = DAT_1811078c0;
      lVar3 = lVar6;
      while (lVar1 = lVar3 + 0xd8, DAT_1811078c0 = lVar2, lVar1 != lVar4) {
        FUN_18002ba60(lVar6,lVar1);
        FUN_18002ba60(lVar6 + 0x20,lVar3 + 0xf8);
        FUN_18002ba60(lVar6 + 0x40,lVar3 + 0x118);
        FUN_18002ba60(lVar6 + 0x60,lVar3 + 0x138);
        *(undefined1 *)(lVar6 + 0x80) = *(undefined1 *)(lVar3 + 0x158);
        FUN_180360510(lVar6 + 0x88,lVar3 + 0x160);
        *(undefined8 *)(lVar6 + 200) = *(undefined8 *)(lVar3 + 0x1a0);
        *(undefined8 *)(lVar6 + 0xd0) = *(undefined8 *)(lVar3 + 0x1a8);
        lVar6 = lVar6 + 0xd8;
        lVar2 = DAT_1811078c0;
        lVar3 = lVar1;
      }
      FUN_1800132b0(lVar2 + -0x38);
      FUN_1802828d0(lVar2 + -0x48);
      FUN_18000f890(lVar2 + -0x78);
      FUN_18000f890(lVar2 + -0x98);
      FUN_18000f890(lVar2 + -0xb8);
      FUN_18000f890(lVar2 + -0xd8);
      DAT_1811078c0 = DAT_1811078c0 + -0xd8;
      if (DAT_1811078b0 == param_1) {
        DAT_1811078b0 = 0;
        FUN_18035d360();
        return 1;
      }
      if (param_1 < DAT_1811078b0) {
        DAT_1811078b0 = DAT_1811078b0 + -1;
      }
      FUN_18035d360();
      return 1;
    }
  }
  return 0;
}



/* ===== 18035fd30 FUN_18035fd30 ===== */

longlong * FUN_18035fd30(float *param_1,longlong *param_2,undefined8 *param_3,undefined8 *param_4)

{
  float *pfVar1;
  char *pcVar2;
  undefined8 *puVar3;
  longlong lVar4;
  int iVar5;
  undefined8 *puVar6;
  size_t sVar7;
  ulonglong uVar8;
  undefined8 *_Buf1;
  undefined8 *puVar9;
  undefined8 *_Buf2;
  ulonglong uVar10;
  float fVar11;
  float *pfVar12;
  undefined8 *puVar13;
  undefined8 *local_58;
  longlong local_50;
  
  pfVar1 = param_1 + 2;
  pfVar12 = pfVar1;
  puVar6 = (undefined8 *)FUN_1804ecaa0(0x50,param_2,param_3,param_4,pfVar1,0);
  puVar3 = puVar6 + 2;
  pcVar2 = (char *)*param_3;
  *puVar3 = 0;
  puVar6[3] = 0;
  puVar6[4] = 0;
  puVar6[5] = 0;
  puVar13 = puVar6;
  sVar7 = strlen(pcVar2);
  FUN_1800133a0(puVar3,pcVar2,sVar7);
  pcVar2 = (char *)*param_4;
  puVar6[6] = 0;
  puVar6[7] = 0;
  puVar6[8] = 0;
  puVar6[9] = 0;
  sVar7 = strlen(pcVar2);
  FUN_1800133a0(puVar6 + 6,pcVar2,sVar7);
  puVar9 = puVar3;
  if (0xf < (ulonglong)puVar6[5]) {
    puVar9 = (undefined8 *)*puVar3;
  }
  uVar10 = 0xcbf29ce484222325;
  uVar8 = 0;
  if (puVar6[4] != 0) {
    do {
      uVar10 = (uVar10 ^ *(byte *)(uVar8 + (longlong)puVar9)) * 0x100000001b3;
      uVar8 = uVar8 + 1;
    } while (uVar8 < (ulonglong)puVar6[4]);
  }
  FUN_1800268a0(param_1,&local_58,puVar3,uVar10,pfVar12,puVar13);
  if (local_50 != 0) {
    *param_2 = local_50;
    *(undefined1 *)(param_2 + 1) = 0;
    if (puVar6 == (undefined8 *)0x0) {
      return param_2;
    }
    FUN_18000f890(puVar6 + 6);
    FUN_18000f890(puVar3);
    thunk_FUN_1803d64e0(puVar6,0x50);
    return param_2;
  }
  if (*(longlong *)(param_1 + 4) == 0x333333333333333) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4cd0("unordered_map/set too long");
  }
  fVar11 = (float)(*(longlong *)(param_1 + 4) + 1) / (float)*(ulonglong *)(param_1 + 0xe);
  if (!(fVar11 < *param_1 || fVar11 == *param_1)) {
    FUN_1800280b0(param_1);
    puVar9 = *(undefined8 **)
              (*(longlong *)(param_1 + 6) + 8 + (uVar10 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
    local_58 = *(undefined8 **)pfVar1;
    if (puVar9 != *(undefined8 **)pfVar1) {
      puVar13 = *(undefined8 **)
                 (*(longlong *)(param_1 + 6) + (uVar10 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
      sVar7 = puVar6[4];
      while( true ) {
        _Buf2 = puVar9 + 2;
        if (0xf < (ulonglong)puVar9[5]) {
          _Buf2 = (undefined8 *)*_Buf2;
        }
        if ((ulonglong)puVar6[5] < 0x10) {
          _Buf1 = puVar3;
        }
        else {
          _Buf1 = (undefined8 *)*puVar3;
        }
        if ((sVar7 == puVar9[4]) &&
           ((sVar7 == 0 || (iVar5 = memcmp(_Buf1,_Buf2,sVar7), iVar5 == 0)))) {
          local_58 = (undefined8 *)*puVar9;
          goto LAB_18035ff66;
        }
        if (puVar9 == puVar13) break;
        puVar9 = (undefined8 *)puVar9[1];
      }
      local_58 = puVar9;
    }
  }
LAB_18035ff66:
  puVar3 = (undefined8 *)local_58[1];
  *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + 1;
  *puVar6 = local_58;
  puVar6[1] = puVar3;
  *puVar3 = puVar6;
  local_58[1] = puVar6;
  lVar4 = *(longlong *)(param_1 + 6);
  uVar10 = *(ulonglong *)(param_1 + 0xc) & uVar10;
  puVar9 = *(undefined8 **)(lVar4 + uVar10 * 0x10);
  if (puVar9 == *(undefined8 **)(param_1 + 2)) {
    *(undefined8 **)(lVar4 + uVar10 * 0x10) = puVar6;
  }
  else {
    if (puVar9 == local_58) {
      *(undefined8 **)(lVar4 + uVar10 * 0x10) = puVar6;
      goto LAB_18035ffb1;
    }
    if (*(undefined8 **)(lVar4 + 8 + uVar10 * 0x10) != puVar3) goto LAB_18035ffb1;
  }
  *(undefined8 **)(lVar4 + 8 + uVar10 * 0x10) = puVar6;
LAB_18035ffb1:
  *param_2 = (longlong)puVar6;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



/* ===== 18035ffe0 FUN_18035ffe0 ===== */

longlong FUN_18035ffe0(longlong param_1,longlong param_2)

{
  FUN_18002ba60();
  FUN_18002ba60(param_1 + 0x20,param_2 + 0x20);
  FUN_18002ba60(param_1 + 0x40,param_2 + 0x40);
  FUN_18002ba60(param_1 + 0x60,param_2 + 0x60);
  *(undefined1 *)(param_1 + 0x80) = *(undefined1 *)(param_2 + 0x80);
  FUN_180360510(param_1 + 0x88,param_2 + 0x88);
  *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_2 + 200);
  *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_2 + 0xd0);
  return param_1;
}



/* ===== 180360070 FUN_180360070 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong *
FUN_180360070(undefined8 param_1,longlong *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  size_t _Size;
  longlong lVar2;
  int iVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined8 *_Buf1;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined8 *local_58;
  longlong local_50;
  
  puVar8 = param_3;
  if (0xf < (ulonglong)param_3[3]) {
    puVar8 = (undefined8 *)*param_3;
  }
  uVar7 = 0xcbf29ce484222325;
  uVar5 = 0;
  if (param_3[2] != 0) {
    do {
      uVar7 = (uVar7 ^ *(byte *)(uVar5 + (longlong)puVar8)) * 0x100000001b3;
      uVar5 = uVar5 + 1;
    } while (uVar5 < (ulonglong)param_3[2]);
  }
  FUN_1800268a0(&DAT_180ca19c0,&local_58,param_3,uVar7);
  if (local_50 != 0) {
    *param_2 = local_50;
    *(undefined1 *)(param_2 + 1) = 0;
    return param_2;
  }
  if (DAT_180ca19d0 == 0x333333333333333) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4cd0("unordered_map/set too long");
  }
  puVar4 = (undefined8 *)FUN_1804ecaa0(0x50);
  puVar8 = puVar4 + 2;
  FUN_180024b50(puVar8,param_3);
  FUN_180024b50(puVar4 + 6,param_4);
  if (_DAT_180ca19c0 < (float)(DAT_180ca19d0 + 1) / (float)DAT_180ca19f8) {
    FUN_1800280b0(&DAT_180ca19c0);
    puVar6 = *(undefined8 **)(DAT_180ca19d8 + 8 + (DAT_180ca19f0 & uVar7) * 0x10);
    local_58 = DAT_180ca19c8;
    if (puVar6 != DAT_180ca19c8) {
      puVar1 = *(undefined8 **)(DAT_180ca19d8 + (DAT_180ca19f0 & uVar7) * 0x10);
      uVar5 = puVar4[5];
      _Size = puVar4[4];
      local_58 = puVar6;
      while( true ) {
        puVar6 = local_58 + 2;
        if (0xf < (ulonglong)local_58[5]) {
          puVar6 = (undefined8 *)*puVar6;
        }
        if (uVar5 < 0x10) {
          _Buf1 = puVar8;
        }
        else {
          _Buf1 = (undefined8 *)*puVar8;
        }
        if ((_Size == local_58[4]) &&
           ((_Size == 0 || (iVar3 = memcmp(_Buf1,puVar6,_Size), iVar3 == 0)))) break;
        if (local_58 == puVar1) goto LAB_18036026e;
        local_58 = (undefined8 *)local_58[1];
      }
      local_58 = (undefined8 *)*local_58;
    }
  }
LAB_18036026e:
  puVar8 = (undefined8 *)local_58[1];
  DAT_180ca19d0 = DAT_180ca19d0 + 1;
  *puVar4 = local_58;
  puVar4[1] = puVar8;
  *puVar8 = puVar4;
  local_58[1] = puVar4;
  lVar2 = DAT_180ca19d8;
  uVar7 = DAT_180ca19f0 & uVar7;
  puVar6 = *(undefined8 **)(DAT_180ca19d8 + uVar7 * 0x10);
  if (puVar6 == DAT_180ca19c8) {
    *(undefined8 **)(DAT_180ca19d8 + uVar7 * 0x10) = puVar4;
  }
  else {
    if (puVar6 == local_58) {
      *(undefined8 **)(DAT_180ca19d8 + uVar7 * 0x10) = puVar4;
      goto LAB_1803602c8;
    }
    if (*(undefined8 **)(DAT_180ca19d8 + 8 + uVar7 * 0x10) != puVar8) goto LAB_1803602c8;
  }
  *(undefined8 **)(lVar2 + 8 + uVar7 * 0x10) = puVar4;
LAB_1803602c8:
  *param_2 = (longlong)puVar4;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



/* ===== 180360300 FUN_180360300 ===== */

longlong * FUN_180360300(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  char *pcVar5;
  undefined1 local_58 [16];
  undefined1 local_48 [48];
  
  if (7 < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  *param_1 = (longlong)&DAT_1806e1710;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x15] = (longlong)std::basic_ios<char,std::char_traits<char>_>::vftable;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  FUN_18006bff0(param_1,param_1 + 1);
  *(undefined ***)((longlong)*(int *)(*param_1 + 4) + (longlong)param_1) =
       std::basic_ofstream<char,std::char_traits<char>_>::vftable;
  *(int *)((longlong)*(int *)(*param_1 + 4) + -4 + (longlong)param_1) =
       *(int *)(*param_1 + 4) + -0xa8;
  FUN_18006bd70(param_1 + 1);
  lVar2 = FUN_1802773e0(param_1 + 1,param_2,0x32);
  if (lVar2 == 0) {
    lVar2 = (longlong)*(int *)(*param_1 + 4);
    uVar4 = 6;
    if (*(longlong *)(lVar2 + 0x48 + (longlong)param_1) != 0) {
      uVar4 = 2;
    }
    uVar1 = *(uint *)(lVar2 + 0x10 + (longlong)param_1);
    *(uint *)(lVar2 + 0x10 + (longlong)param_1) = uVar4 | uVar1 & 0x17;
    uVar4 = (uVar4 | uVar1) & *(uint *)(lVar2 + 0x14 + (longlong)param_1);
    if ((uVar4 & 0x17) != 0) {
      if ((uVar4 & 4) == 0) {
        pcVar5 = "ios_base::failbit set";
        if ((uVar4 & 2) == 0) {
          pcVar5 = "ios_base::eofbit set";
        }
      }
      else {
        pcVar5 = "ios_base::badbit set";
      }
      uVar3 = FUN_18004d7f0(local_58,1);
      FUN_18004e280(local_48,pcVar5,uVar3);
                    /* WARNING: Subroutine does not return */
      FUN_1804ef5f0(local_48,&DAT_180915ec0);
    }
  }
  *(undefined ***)((longlong)*(int *)(*param_1 + 4) + (longlong)param_1) =
       std::basic_ofstream<char,std::char_traits<char>_>::vftable;
  *(int *)((longlong)*(int *)(*param_1 + 4) + -4 + (longlong)param_1) =
       *(int *)(*param_1 + 4) + -0xa8;
  return param_1;
}



/* ===== 180360490 FUN_180360490 ===== */

void FUN_180360490(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)*param_1;
  *(undefined8 *)puVar1[1] = 0;
  puVar1 = (undefined8 *)*puVar1;
  while (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar1;
    FUN_1800132b0(puVar1 + 6);
    FUN_18000f890(puVar1 + 2);
    thunk_FUN_1803d64e0(puVar1,0x48);
    puVar1 = puVar2;
  }
  thunk_FUN_1803d64e0(*param_1,0x48);
  return;
}



/* ===== 180360510 FUN_180360510 ===== */

undefined4 * FUN_180360510(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  
  if (param_1 != param_2) {
    FUN_18028bcb0();
    *param_1 = *param_2;
    uVar1 = *(undefined8 *)(param_1 + 2);
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(param_2 + 2) = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 4);
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
    *(undefined8 *)(param_2 + 4) = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 6);
    *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(param_2 + 6) = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_2 + 8) = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 10);
    *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
    *(undefined8 *)(param_2 + 10) = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0xc);
    *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
    *(undefined8 *)(param_2 + 0xc) = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0xe);
    *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_2 + 0xe);
    *(undefined8 *)(param_2 + 0xe) = uVar1;
  }
  return param_1;
}



/* ===== 1803605b0 FUN_1803605b0 ===== */

longlong * FUN_1803605b0(longlong *param_1)

{
  *param_1 = (longlong)&DAT_1807841a0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x11] = (longlong)std::basic_ios<char,std::char_traits<char>_>::vftable;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  FUN_18006bff0(param_1,param_1 + 1);
  *(undefined ***)((longlong)*(int *)(*param_1 + 4) + (longlong)param_1) =
       std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((longlong)*(int *)(*param_1 + 4) + -4 + (longlong)param_1) =
       *(int *)(*param_1 + 4) + -0x88;
  FUN_18006cdb0(param_1 + 1);
  param_1[1] = (longlong)
               std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 4;
  return param_1;
}



/* ===== 180360680 FUN_180360680 ===== */

longlong * FUN_180360680(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  byte *pbVar1;
  longlong *plVar2;
  int *piVar3;
  undefined1 *puVar4;
  bool bVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  uint uVar9;
  char *pcVar10;
  uint uVar11;
  uint uVar12;
  longlong *local_80;
  char local_78;
  longlong *local_70 [2];
  undefined1 local_60 [48];
  
  uVar11 = 0;
  bVar5 = false;
  FUN_180069000(&local_80,param_1,param_3,param_4,0);
  if ((local_78 != '\0') && (param_2 != (longlong *)0x0)) {
    uVar9 = 0xffffffff;
    local_70[0] = param_1;
    do {
      pbVar1 = *(byte **)param_2[7];
      if (uVar9 == 0xffffffff) {
        if ((pbVar1 == (byte *)0x0) || (*(int *)param_2[10] < 1)) {
          uVar9 = (**(code **)(*param_2 + 0x30))(param_2);
        }
        else {
          uVar9 = (uint)*pbVar1;
        }
      }
      else {
        if (pbVar1 == (byte *)0x0) {
LAB_180360762:
          uVar9 = (**(code **)(*param_2 + 0x38))(param_2);
        }
        else {
          piVar3 = (int *)param_2[10];
          iVar6 = *piVar3;
          if (1 < iVar6) {
            *piVar3 = iVar6 + -1;
            plVar2 = (longlong *)param_2[7];
            *plVar2 = *plVar2 + 1;
            uVar9 = (uint)*(byte *)*plVar2;
            goto LAB_180360799;
          }
          if (iVar6 < 1) goto LAB_180360762;
          *piVar3 = iVar6 + -1;
          pbVar1 = *(byte **)param_2[7];
          *(byte **)param_2[7] = pbVar1 + 1;
          uVar9 = (uint)*pbVar1;
        }
        if (uVar9 == 0xffffffff) {
          uVar9 = 0xffffffff;
        }
        else if ((*(byte **)param_2[7] == (byte *)0x0) || (*(int *)param_2[10] < 1)) {
          uVar9 = (**(code **)(*param_2 + 0x30))(param_2);
        }
        else {
          uVar9 = (uint)**(byte **)param_2[7];
        }
      }
LAB_180360799:
      if (uVar9 == 0xffffffff) break;
      plVar2 = *(longlong **)((longlong)*(int *)(*param_1 + 4) + 0x48 + (longlong)param_1);
      uVar12 = uVar9 & 0xff;
      if ((*(longlong *)plVar2[8] == 0) || (piVar3 = (int *)plVar2[0xb], *piVar3 < 1)) {
        uVar12 = (**(code **)(*plVar2 + 0x18))(plVar2,uVar12);
      }
      else {
        *piVar3 = *piVar3 + -1;
        puVar4 = *(undefined1 **)plVar2[8];
        *(undefined1 **)plVar2[8] = puVar4 + 1;
        *puVar4 = (char)uVar9;
      }
      if (uVar12 == 0xffffffff) goto code_r0x000180360813;
      bVar5 = true;
    } while( true );
  }
  *(undefined8 *)((longlong)*(int *)(*param_1 + 4) + 0x28 + (longlong)param_1) = 0;
  if (param_2 == (longlong *)0x0) {
    uVar11 = 4;
    goto LAB_180360891;
  }
LAB_180360876:
  if (!bVar5) {
    uVar11 = uVar11 | 2;
  }
LAB_180360891:
  lVar8 = (longlong)*(int *)(*param_1 + 4);
  uVar9 = *(uint *)(lVar8 + 0x10 + (longlong)param_1);
  uVar12 = 4;
  if (*(longlong *)(lVar8 + 0x48 + (longlong)param_1) != 0) {
    uVar12 = 0;
  }
  *(uint *)(lVar8 + 0x10 + (longlong)param_1) = uVar12 | uVar11 | uVar9 & 0x17;
  uVar11 = (uVar12 | uVar11 | uVar9) & *(uint *)(lVar8 + 0x14 + (longlong)param_1);
  if ((uVar11 & 0x17) != 0) {
    if ((uVar11 & 4) == 0) {
      pcVar10 = "ios_base::failbit set";
      if ((uVar11 & 2) == 0) {
        pcVar10 = "ios_base::eofbit set";
      }
    }
    else {
      pcVar10 = "ios_base::badbit set";
    }
    uVar7 = FUN_18004d7f0(local_70,1);
    FUN_18004e280(local_60,pcVar10,uVar7);
                    /* WARNING: Subroutine does not return */
    FUN_1804ef5f0(local_60,&DAT_180915ec0);
  }
  iVar6 = thunk_FUN_1804ef6a0();
  if (iVar6 == 0) {
    FUN_18006bf40(local_80);
  }
  plVar2 = *(longlong **)((longlong)*(int *)(*local_80 + 4) + 0x48 + (longlong)local_80);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x10))();
  }
  return param_1;
code_r0x000180360813:
  uVar11 = 4;
  *(undefined8 *)((longlong)*(int *)(*local_70[0] + 4) + 0x28 + (longlong)local_70[0]) = 0;
  goto LAB_180360876;
}



/* ===== 180360960 FUN_180360960 ===== */

longlong * FUN_180360960(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  
  plVar1 = param_1 + -0x11;
  *(undefined ***)((longlong)*(int *)(*plVar1 + 4) + -0x88 + (longlong)param_1) =
       std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((longlong)*(int *)(*plVar1 + 4) + -0x8c + (longlong)param_1) =
       *(int *)(*plVar1 + 4) + -0x88;
  FUN_180075e50(param_1 + -0x10);
  *(undefined ***)((longlong)*(int *)(*plVar1 + 4) + -0x88 + (longlong)param_1) =
       std::basic_ostream<char,std::char_traits<char>_>::vftable;
  *(int *)((longlong)*(int *)(*plVar1 + 4) + -0x8c + (longlong)param_1) =
       *(int *)(*plVar1 + 4) + -0x10;
  *param_1 = std::ios_base::vftable;
  FUN_1804eaa10(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1803d64e0(plVar1,0xe8);
  }
  return plVar1;
}



/* ===== 180360a10 FUN_180360a10 ===== */

longlong * FUN_180360a10(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  float fVar9;
  undefined4 uVar10;
  longlong local_58;
  longlong lStack_50;
  undefined8 *local_48;
  longlong *local_40;
  
  if ((ulonglong)param_3[3] < 0x10) {
    plVar2 = param_3;
  }
  else {
    plVar2 = (longlong *)*param_3;
  }
  uVar7 = 0xcbf29ce484222325;
  uVar4 = 0;
  if (param_3[2] != 0) {
    do {
      uVar7 = (uVar7 ^ *(byte *)(uVar4 + (longlong)plVar2)) * 0x100000001b3;
      uVar4 = uVar4 + 1;
    } while (uVar4 < (ulonglong)param_3[2]);
  }
  FUN_1803610e0(uVar4,&local_58,param_3,uVar7);
  if (lStack_50 != 0) {
    *param_2 = lStack_50;
    *(undefined1 *)(param_2 + 1) = 0;
    return param_2;
  }
  if (DAT_181107900 == 0x38e38e38e38e38e) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4cd0("unordered_map/set too long");
  }
  local_48 = &DAT_1811078f8;
  local_40 = (longlong *)0x0;
  plVar2 = (longlong *)FUN_1804ecaa0(0x48);
  plVar2[2] = 0;
  plVar2[3] = 0;
  plVar2[4] = 0;
  plVar2[5] = 0;
  lVar5 = param_3[1];
  plVar2[2] = *param_3;
  plVar2[3] = lVar5;
  lVar5 = param_3[3];
  plVar2[4] = param_3[2];
  plVar2[5] = lVar5;
  param_3[2] = 0;
  param_3[3] = 0xf;
  *(undefined1 *)param_3 = 0;
  plVar2[6] = 0;
  plVar2[7] = 0;
  plVar2[8] = 0;
  uVar4 = DAT_181107928;
  if (DAT_1811078f0 < (float)(DAT_181107900 + 1) / (float)DAT_181107928) {
    local_40 = plVar2;
    fVar9 = (float)FUN_18053ef70((float)(DAT_181107900 + 1) / DAT_1811078f0);
    lVar5 = 0;
    if ((DAT_1808acd00 <= fVar9) && (fVar9 = fVar9 - DAT_1808acd00, fVar9 < DAT_1808acd00)) {
      lVar5 = -0x8000000000000000;
    }
    uVar6 = 8;
    if (8 < (ulonglong)((longlong)fVar9 + lVar5)) {
      uVar6 = (longlong)fVar9 + lVar5;
    }
    uVar8 = uVar4;
    if ((uVar4 < uVar6) && ((0x1ff < uVar4 || (uVar8 = uVar4 * 8, uVar4 * 8 < uVar6)))) {
      uVar8 = uVar6;
    }
    uVar10 = FUN_1803619c0(uVar6,uVar8);
    plVar3 = (longlong *)FUN_1803610e0(uVar10,&local_48,plVar2 + 2,uVar7);
    local_58 = *plVar3;
  }
  plVar3 = *(longlong **)(local_58 + 8);
  DAT_181107900 = DAT_181107900 + 1;
  *plVar2 = local_58;
  plVar2[1] = (longlong)plVar3;
  *plVar3 = (longlong)plVar2;
  *(longlong **)(local_58 + 8) = plVar2;
  lVar1 = DAT_181107908;
  uVar7 = DAT_181107920 & uVar7;
  lVar5 = *(longlong *)(DAT_181107908 + uVar7 * 0x10);
  if (lVar5 == DAT_1811078f8) {
    *(longlong **)(DAT_181107908 + uVar7 * 0x10) = plVar2;
  }
  else {
    if (lVar5 == local_58) {
      *(longlong **)(DAT_181107908 + uVar7 * 0x10) = plVar2;
      goto LAB_180360c73;
    }
    if (*(longlong **)(DAT_181107908 + 8 + uVar7 * 0x10) != plVar3) goto LAB_180360c73;
  }
  *(longlong **)(lVar1 + 8 + uVar7 * 0x10) = plVar2;
LAB_180360c73:
  *param_2 = (longlong)plVar2;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



/* ===== 180360ca0 FUN_180360ca0 ===== */

void FUN_180360ca0(longlong param_1,longlong param_2)

{
  if (param_1 != param_2) {
    do {
      FUN_1800132b0(param_1 + 0xa0);
      FUN_1802828d0(param_1 + 0x90);
      FUN_18000f890(param_1 + 0x60);
      FUN_18000f890(param_1 + 0x40);
      FUN_18000f890(param_1 + 0x20);
      FUN_18000f890(param_1);
      param_1 = param_1 + 0xd8;
    } while (param_1 != param_2);
  }
  return;
}



/* ===== 180360d20 FUN_180360d20 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180360d20(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined8 *local_a8;
  undefined8 *local_98;
  undefined8 local_90;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  ulonglong local_58;
  
  local_58 = DAT_180919500 ^ (ulonglong)auStack_d8;
  lVar3 = (longlong)param_2 - (longlong)param_1;
  local_98 = param_3;
  while( true ) {
    if (lVar3 >> 5 < 0x21) {
      puVar6 = param_1;
      if (param_1 != param_2) {
        while (puVar1 = puVar6 + 4, puVar1 != param_2) {
          local_78 = *(undefined4 *)puVar1;
          uStack_74 = *(undefined4 *)((longlong)puVar6 + 0x24);
          uStack_70 = *(undefined4 *)(puVar1 + 1);
          uStack_6c = *(undefined4 *)((longlong)puVar6 + 0x2c);
          local_68 = *(undefined4 *)(puVar1 + 2);
          uStack_64 = *(undefined4 *)((longlong)puVar6 + 0x34);
          uStack_60 = *(undefined4 *)(puVar1 + 3);
          uStack_5c = *(undefined4 *)((longlong)puVar6 + 0x3c);
          *(undefined2 *)puVar1 = 0;
          puVar1[2] = 0;
          puVar1[3] = 7;
          if ((ulonglong)param_1[3] < 8) {
            local_88 = param_1;
          }
          else {
            local_88 = (undefined8 *)*param_1;
          }
          local_80 = (undefined8 *)param_1[2];
          uVar2 = FUN_180014140(&local_78,&local_88);
          if (uVar2 < 0x80000000) {
            puVar6 = puVar1;
            while( true ) {
              puVar5 = puVar6 + -4;
              if ((ulonglong)puVar6[-1] < 8) {
                local_98 = puVar5;
              }
              else {
                local_98 = (undefined8 *)*puVar5;
              }
              local_90 = puVar6[-2];
              uVar2 = FUN_180014140(&local_78,&local_98);
              if (uVar2 < 0x80000000) break;
              FUN_1800248e0(puVar6,puVar5);
              puVar6 = puVar5;
            }
          }
          else {
            puVar6 = puVar1 + 4;
            puVar5 = puVar1;
            while (puVar5 != param_1) {
              puVar5 = puVar5 + -4;
              puVar6 = puVar6 + -4;
              FUN_1800248e0(puVar6,puVar5);
            }
            puVar6 = param_1;
          }
          FUN_1800248e0(puVar6,&local_78);
          FUN_1800289e0(&local_78);
          puVar6 = puVar1;
        }
      }
      return;
    }
    lVar3 = (longlong)param_2 - (longlong)param_1 >> 6;
    if ((longlong)param_3 < 1) break;
    local_a8 = param_1 + lVar3 * 4;
    lVar4 = (longlong)param_2 + (-0x20 - (longlong)param_1) >> 5;
    if (lVar4 < 0x29) {
      FUN_180362540(param_1,local_a8,param_2 + -4);
      puVar6 = local_a8;
    }
    else {
      lVar4 = lVar4 + 1 >> 3;
      FUN_180362540(param_1,param_1 + lVar4 * 4,param_1 + lVar4 * 8);
      puVar6 = local_a8;
      FUN_180362540(local_a8 + lVar4 * -4,local_a8,param_1 + (lVar4 + lVar3) * 4);
      FUN_180362540(param_2 + lVar4 * -8 + -4,param_2 + lVar4 * -4 + -4);
      FUN_180362540(param_1 + lVar4 * 4,puVar6,param_2 + lVar4 * -4 + -4);
      param_3 = local_98;
    }
    FUN_180361ef0(&local_88,param_1,puVar6,param_2);
    puVar1 = local_80;
    puVar6 = local_88;
    param_3 = (undefined8 *)(((longlong)param_3 >> 1) + ((longlong)param_3 >> 2));
    local_98 = param_3;
    if ((longlong)local_88 - (longlong)param_1 >> 5 < (longlong)param_2 - (longlong)local_80 >> 5) {
      FUN_180360d20(param_1,local_88,param_3,param_4);
      puVar6 = param_2;
      param_1 = puVar1;
    }
    else {
      FUN_180360d20(local_80,param_2,param_3,param_4);
    }
    lVar3 = (longlong)puVar6 - (longlong)param_1;
    param_2 = puVar6;
  }
  lVar4 = (longlong)param_2 - (longlong)param_1 >> 5;
  while (0 < lVar3) {
    puVar6 = param_1 + lVar3 * 4 + -4;
    local_78 = *(undefined4 *)puVar6;
    uStack_74 = *(undefined4 *)((longlong)puVar6 + 4);
    uStack_70 = *(undefined4 *)(puVar6 + 1);
    uStack_6c = *(undefined4 *)((longlong)puVar6 + 0xc);
    puVar6 = param_1 + lVar3 * 4 + -2;
    local_68 = *(undefined4 *)puVar6;
    uStack_64 = *(undefined4 *)((longlong)puVar6 + 4);
    uStack_60 = *(undefined4 *)(puVar6 + 1);
    uStack_5c = *(undefined4 *)((longlong)puVar6 + 0xc);
    *(undefined2 *)(param_1 + lVar3 * 4 + -4) = 0;
    param_1[lVar3 * 4 + -2] = 0;
    param_1[lVar3 * 4 + -1] = 7;
    local_b8 = param_4;
    FUN_180361d70(param_1,lVar3 + -1,lVar4,&local_78);
    FUN_1800289e0(&local_78);
    lVar3 = lVar3 + -1;
  }
  if (lVar4 < 2) {
    return;
  }
  do {
    if (1 < (longlong)param_2 - (longlong)param_1 >> 5) {
      local_78 = *(undefined4 *)(param_2 + -4);
      uStack_74 = *(undefined4 *)((longlong)param_2 + -0x1c);
      uStack_70 = *(undefined4 *)(param_2 + -3);
      uStack_6c = *(undefined4 *)((longlong)param_2 + -0x14);
      puVar6 = param_2 + -4;
      local_68 = *(undefined4 *)(param_2 + -2);
      uStack_64 = *(undefined4 *)((longlong)param_2 + -0xc);
      uStack_60 = *(undefined4 *)(param_2 + -1);
      uStack_5c = *(undefined4 *)((longlong)param_2 + -4);
      *(undefined2 *)puVar6 = 0;
      param_2[-2] = 0;
      param_2[-1] = 7;
      FUN_1800248e0(puVar6,param_1);
      local_b8 = param_4;
      FUN_180361d70(param_1,0,(longlong)puVar6 - (longlong)param_1 >> 5,&local_78);
      FUN_1800289e0(&local_78);
    }
    param_2 = param_2 + -4;
  } while (0x3f < (longlong)param_2 - (longlong)param_1);
  return;
}



/* ===== 1803610e0 FUN_1803610e0 ===== */

undefined8 *
FUN_1803610e0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,ulonglong param_4)

{
  undefined8 *puVar1;
  size_t _Size;
  ulonglong uVar2;
  int iVar3;
  undefined8 *_Buf1;
  undefined8 *_Buf2;
  undefined8 *puVar4;
  
  puVar4 = *(undefined8 **)(DAT_181107908 + 8 + (DAT_181107920 & param_4) * 0x10);
  if (puVar4 == DAT_1811078f8) {
    *param_2 = DAT_1811078f8;
    param_2[1] = 0;
    return param_2;
  }
  puVar1 = *(undefined8 **)(DAT_181107908 + (DAT_181107920 & param_4) * 0x10);
  _Size = param_3[2];
  uVar2 = param_3[3];
  while( true ) {
    _Buf2 = puVar4 + 2;
    if (0xf < (ulonglong)puVar4[5]) {
      _Buf2 = (undefined8 *)*_Buf2;
    }
    if (uVar2 < 0x10) {
      _Buf1 = param_3;
    }
    else {
      _Buf1 = (undefined8 *)*param_3;
    }
    if ((_Size == puVar4[4]) && ((_Size == 0 || (iVar3 = memcmp(_Buf1,_Buf2,_Size), iVar3 == 0))))
    break;
    if (puVar4 == puVar1) {
      *param_2 = puVar4;
      param_2[1] = 0;
      return param_2;
    }
    puVar4 = (undefined8 *)puVar4[1];
  }
  *param_2 = *puVar4;
  param_2[1] = puVar4;
  return param_2;
}



/* ===== 1803611c0 FUN_1803611c0 ===== */

longlong FUN_1803611c0(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  code *pcVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [24];
  undefined4 *local_98;
  undefined1 local_90 [16];
  longlong local_80;
  longlong local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  longlong local_60;
  ulonglong local_58;
  longlong local_50;
  longlong local_48;
  
  lVar15 = DAT_1811078b8;
  lVar6 = (DAT_1811078c0 - DAT_1811078b8 >> 3) * -0x7b425ed097b425ed;
  uVar14 = 0x12f684bda12f684;
  if (lVar6 == 0x12f684bda12f684) {
                    /* WARNING: Subroutine does not return */
    FUN_18000fb10();
  }
  uVar1 = lVar6 + 1;
  uVar9 = (DAT_1811078c8 - DAT_1811078b8 >> 3) * -0x7b425ed097b425ed;
  if (uVar9 <= 0x12f684bda12f684 - (uVar9 >> 1)) {
    uVar9 = (uVar9 >> 1) + uVar9;
    uVar14 = uVar1;
    if (uVar1 <= uVar9) {
      uVar14 = uVar9;
    }
    if (0x12f684bda12f684 < uVar14) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  lVar7 = FUN_18000fb70(uVar14 * 0xd8);
  lVar16 = ((param_2 - lVar15) / 0xd8) * 0xd8 + lVar7;
  lVar15 = lVar16 + 0xd8;
  local_68 = &DAT_1811078b8;
  local_60 = lVar7;
  local_58 = uVar14;
  local_50 = lVar15;
  local_48 = lVar15;
  FUN_180362260(lVar16,param_3);
  lVar6 = DAT_1811078c0;
  puVar10 = auStack_b8;
  puVar11 = auStack_b8;
  local_80 = lVar7;
  local_50 = lVar16;
  if (param_2 == DAT_1811078c0) {
    local_70 = &DAT_1811078b8;
    local_78 = lVar7;
    if (DAT_1811078b8 != DAT_1811078c0) {
      lVar15 = DAT_1811078b8;
      do {
        lVar13 = local_78;
        FUN_1803624e0(local_78,lVar15);
        puVar2 = (undefined4 *)(lVar13 + 0x88);
        *puVar2 = *(undefined4 *)(lVar15 + 0x88);
        *(undefined8 *)(lVar13 + 0x90) = 0;
        *(undefined8 *)(lVar13 + 0x98) = 0;
        local_98 = puVar2;
        lVar8 = FUN_1804ecaa0(0x50);
        *(longlong *)lVar8 = lVar8;
        *(longlong *)(lVar8 + 8) = lVar8;
        *(longlong *)(lVar13 + 0x90) = lVar8;
        *(undefined8 *)(lVar13 + 0xa0) = 0;
        *(undefined8 *)(lVar13 + 0xa8) = 0;
        *(undefined8 *)(lVar13 + 0xb0) = 0;
        *(undefined8 *)(lVar13 + 0xb8) = *(undefined8 *)(lVar15 + 0xb8);
        *(undefined8 *)(lVar13 + 0xc0) = *(undefined8 *)(lVar15 + 0xc0);
        FUN_180029a30(lVar13 + 0xa0,*(longlong *)(lVar15 + 0xa8) - *(longlong *)(lVar15 + 0xa0) >> 3
                      ,lVar8);
        puVar3 = *(undefined8 **)(lVar15 + 0x90);
        for (puVar4 = (undefined8 *)*puVar3; puVar4 != puVar3; puVar4 = (undefined8 *)*puVar4) {
          FUN_180362650(puVar2,local_90,puVar4 + 2);
        }
        *(undefined8 *)(lVar13 + 200) = *(undefined8 *)(lVar15 + 200);
        *(undefined8 *)(lVar13 + 0xd0) = *(undefined8 *)(lVar15 + 0xd0);
        local_78 = lVar13 + 0xd8;
        lVar15 = lVar15 + 0xd8;
      } while (lVar15 != lVar6);
    }
  }
  else {
    local_70 = &DAT_1811078b8;
    lVar6 = lVar7;
    for (lVar13 = DAT_1811078b8; local_78 = lVar6, lVar13 != param_2; lVar13 = lVar13 + 0xd8) {
      FUN_180362260(lVar6,lVar13);
      lVar6 = lVar6 + 0xd8;
    }
    FUN_180360ca0(lVar6,lVar6);
    lVar6 = DAT_1811078c0;
    local_70 = &DAT_1811078b8;
    local_80 = lVar15;
    local_50 = lVar7;
    for (; local_78 = lVar15, param_2 != lVar6; param_2 = param_2 + 0xd8) {
      FUN_180362260(lVar15,param_2);
      lVar15 = lVar15 + 0xd8;
    }
  }
  FUN_180360ca0(local_78,local_78);
  puVar12 = auStack_b8;
  if (DAT_1811078b8 == 0) goto LAB_180361534;
  FUN_180360ca0(DAT_1811078b8,DAT_1811078c0);
  lVar15 = DAT_1811078b8;
  if ((ulonglong)((DAT_1811078c8 - DAT_1811078b8 >> 3) * 8) < 0x1000) {
LAB_180361529:
    puVar11 = puVar10;
  }
  else {
    lVar15 = *(longlong *)(DAT_1811078b8 + -8);
    if (0x1f < (DAT_1811078b8 - lVar15) - 8U) {
      lVar15 = 5;
      pcVar5 = (code *)swi(0x29);
      (*pcVar5)(5);
      puVar10 = auStack_b0;
      goto LAB_180361529;
    }
  }
  *(undefined8 *)(puVar11 + -8) = 0x180361534;
  thunk_FUN_1803d64e0(lVar15);
  puVar12 = puVar11;
LAB_180361534:
  DAT_1811078b8 = lVar7;
  DAT_1811078c0 = uVar1 * 0xd8 + lVar7;
  DAT_1811078c8 = *(longlong *)(puVar12 + 200) + lVar7;
  return lVar16;
}



/* ===== 180361590 FUN_180361590 ===== */

longlong FUN_180361590(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  ulonglong uVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [24];
  undefined8 *local_78;
  longlong local_70;
  ulonglong local_68;
  longlong local_60;
  longlong local_58;
  
  lVar6 = DAT_1811078d0;
  lVar3 = (DAT_1811078d8 - DAT_1811078d0 >> 3) * -0xf0f0f0f0f0f0f0f;
  uVar10 = 0x1e1e1e1e1e1e1e1;
  if (lVar3 == 0x1e1e1e1e1e1e1e1) {
                    /* WARNING: Subroutine does not return */
    FUN_1800118d0();
  }
  uVar1 = lVar3 + 1;
  uVar5 = (DAT_1811078e0 - DAT_1811078d0 >> 3) * -0xf0f0f0f0f0f0f0f;
  if (uVar5 <= 0x1e1e1e1e1e1e1e1 - (uVar5 >> 1)) {
    uVar5 = (uVar5 >> 1) + uVar5;
    uVar10 = uVar1;
    if (uVar1 <= uVar5) {
      uVar10 = uVar5;
    }
    if (0x1e1e1e1e1e1e1e1 < uVar10) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  lVar4 = FUN_18000fb70(uVar10 * 0x88);
  lVar12 = ((param_2 - lVar6) / 0x88) * 0x88 + lVar4;
  lVar6 = lVar12 + 0x88;
  local_78 = &DAT_1811078d0;
  local_70 = lVar4;
  local_68 = uVar10;
  local_60 = lVar6;
  local_58 = lVar6;
  FUN_1803624e0(lVar12,param_3);
  puVar8 = auStack_98;
  puVar9 = auStack_98;
  lVar3 = lVar4;
  lVar7 = DAT_1811078d0;
  lVar11 = DAT_1811078d8;
  if (param_2 == DAT_1811078d8) {
    lVar6 = lVar4;
    lVar3 = DAT_1811078d0;
    lVar7 = DAT_1811078d8;
    if (DAT_1811078d0 != DAT_1811078d8) {
      do {
        FUN_180362410(lVar6);
        lVar6 = lVar6 + 0x88;
        lVar3 = lVar3 + 0x88;
      } while (lVar3 != lVar7);
    }
  }
  else {
    for (; DAT_1811078d8 = lVar11, lVar7 != param_2; lVar7 = lVar7 + 0x88) {
      FUN_180362410(lVar3);
      lVar3 = lVar3 + 0x88;
      lVar11 = DAT_1811078d8;
    }
    if (param_2 != lVar11) {
      do {
        FUN_180362410(lVar6,param_2);
        lVar6 = lVar6 + 0x88;
        param_2 = param_2 + 0x88;
      } while (param_2 != lVar11);
    }
  }
  lVar3 = DAT_1811078d8;
  lVar6 = DAT_1811078d0;
  if (DAT_1811078d0 == 0) goto LAB_1803617bb;
  for (; lVar6 != lVar3; lVar6 = lVar6 + 0x88) {
    FUN_18000f890(lVar6 + 0x60);
    FUN_18000f890(lVar6 + 0x40);
    FUN_18000f890(lVar6 + 0x20);
    FUN_18000f890(lVar6);
  }
  lVar6 = DAT_1811078d0;
  if ((ulonglong)((DAT_1811078e0 - DAT_1811078d0 >> 3) * 8) < 0x1000) {
LAB_1803617b0:
    puVar9 = puVar8;
  }
  else {
    lVar6 = *(longlong *)(DAT_1811078d0 + -8);
    if (0x1f < (DAT_1811078d0 - lVar6) - 8U) {
      lVar6 = 5;
      pcVar2 = (code *)swi(0x29);
      (*pcVar2)(5);
      puVar8 = auStack_90;
      goto LAB_1803617b0;
    }
  }
  *(undefined8 *)(puVar9 + -8) = 0x1803617bb;
  thunk_FUN_1803d64e0(lVar6);
LAB_1803617bb:
  DAT_1811078d0 = lVar4;
  DAT_1811078d8 = uVar1 * 0x88 + lVar4;
  DAT_1811078e0 = uVar10 * 0x88 + lVar4;
  return lVar12;
}



/* ===== 180361800 FUN_180361800 ===== */

void FUN_180361800(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != 0) {
    FUN_1800132b0(lVar1 + 0x30);
    FUN_18000f890(lVar1 + 0x10);
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    thunk_FUN_1803d64e0(*(longlong *)(param_1 + 8),0x48);
  }
  return;
}



/* ===== 180361850 FUN_180361850 ===== */

ulonglong * FUN_180361850(ulonglong *param_1,ulonglong param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  code *pcVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 *puVar10;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  
  uVar4 = param_1[3];
  uVar5 = param_1[2];
  if (param_2 <= uVar4 - uVar5) {
    param_1[2] = uVar5 + param_2;
    if (uVar4 < 0x10) {
      puVar7 = param_1;
    }
    else {
      puVar7 = (ulonglong *)*param_1;
    }
    FUN_180540170((longlong)puVar7 + uVar5,0,param_2);
    *(undefined1 *)((longlong)puVar7 + uVar5 + param_2) = 0;
    return param_1;
  }
  if (0x7fffffffffffffff - uVar5 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_180011990();
  }
  uVar8 = uVar5 + param_2 | 0xf;
  uVar9 = 0x7fffffffffffffff;
  if (((uVar8 < 0x8000000000000000) && (uVar4 <= 0x7fffffffffffffff - (uVar4 >> 1))) &&
     (uVar2 = (uVar4 >> 1) + uVar4, uVar9 = uVar8, uVar8 < uVar2)) {
    uVar9 = uVar2;
  }
  uVar8 = FUN_18000fb70(uVar9 + 1);
  param_1[2] = uVar5 + param_2;
  param_1[3] = uVar9;
  lVar3 = uVar8 + uVar5;
  if (uVar4 < 0x10) {
    FUN_180540530(uVar8,param_1,uVar5);
    FUN_180540170(lVar3,0,param_2);
    *(undefined1 *)(lVar3 + param_2) = 0;
  }
  else {
    uVar9 = *param_1;
    FUN_180540530(uVar8,uVar9,uVar5);
    FUN_180540170(lVar3,0,param_2);
    puVar10 = auStack_38;
    *(undefined1 *)(lVar3 + param_2) = 0;
    if (0xfff < uVar4 + 1) {
      plVar1 = (longlong *)(uVar9 - 8);
      uVar9 = (uVar9 - *plVar1) - 8;
      if (uVar9 < 0x20) {
        thunk_FUN_1803d64e0(*plVar1,uVar4 + 0x28);
        goto LAB_180361992;
      }
      pcVar6 = (code *)swi(0x29);
      (*pcVar6)(5);
      puVar10 = auStack_30;
    }
    *(undefined8 *)(puVar10 + -8) = 0x180361976;
    thunk_FUN_1803d64e0(uVar9);
  }
LAB_180361992:
  *param_1 = uVar8;
  return param_1;
}



/* ===== 1803619c0 FUN_1803619c0 ===== */

void FUN_1803619c0(undefined8 param_1,ulonglong param_2)

{
  byte *pbVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  ulonglong _Size;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  byte bVar13;
  longlong *plVar14;
  ulonglong uVar15;
  longlong *plVar16;
  longlong lVar17;
  longlong *plVar18;
  
  plVar9 = DAT_1811078f8;
  for (lVar17 = 0x3f; 0xfffffffffffffffU >> lVar17 == 0; lVar17 = lVar17 + -1) {
  }
  if ((ulonglong)(1L << ((byte)lVar17 & 0x3f)) < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4cd0("invalid hash bucket count");
  }
  uVar11 = param_2 - 1 | 1;
  lVar17 = 0x3f;
  if (uVar11 != 0) {
    for (; uVar11 >> lVar17 == 0; lVar17 = lVar17 + -1) {
    }
  }
  bVar13 = (char)lVar17 + 1;
  lVar17 = 1L << (bVar13 & 0x3f);
  FUN_180029a30(&DAT_181107908,2L << (bVar13 & 0x3f),DAT_1811078f8);
  DAT_181107920 = lVar17 - 1;
  DAT_181107928 = lVar17;
  plVar8 = (longlong *)*DAT_1811078f8;
joined_r0x000180361a4a:
  do {
    while( true ) {
      if (plVar8 == plVar9) {
        return;
      }
      uVar11 = plVar8[5];
      plVar18 = plVar8 + 2;
      plVar3 = (longlong *)*plVar8;
      _Size = plVar8[4];
      uVar12 = 0xcbf29ce484222325;
      if (0xf < uVar11) {
        plVar18 = (longlong *)plVar8[2];
      }
      uVar15 = 0;
      if (_Size != 0) {
        do {
          pbVar1 = (byte *)((longlong)plVar18 + uVar15);
          uVar15 = uVar15 + 1;
          uVar12 = (uVar12 ^ *pbVar1) * 0x100000001b3;
        } while (uVar15 < _Size);
      }
      uVar12 = uVar12 & DAT_181107920;
      plVar18 = *(longlong **)(DAT_181107908 + uVar12 * 0x10);
      puVar2 = (undefined8 *)(DAT_181107908 + uVar12 * 0x10);
      lVar17 = DAT_181107908 + uVar12 * 0x10;
      if (plVar18 != plVar9) break;
      *puVar2 = plVar8;
      *(longlong **)(lVar17 + 8) = plVar8;
      plVar8 = plVar3;
    }
    plVar4 = *(longlong **)(lVar17 + 8);
    plVar16 = plVar4 + 2;
    if (0xf < (ulonglong)plVar4[5]) {
      plVar16 = (longlong *)*plVar16;
    }
    plVar14 = plVar8 + 2;
    if (0xf < uVar11) {
      plVar14 = (longlong *)plVar8[2];
    }
    if (_Size != plVar4[4]) {
joined_r0x000180361b53:
      while (plVar18 != plVar4) {
        plVar4 = (longlong *)plVar4[1];
        plVar16 = plVar4 + 2;
        if (0xf < (ulonglong)plVar4[5]) {
          plVar16 = (longlong *)*plVar16;
        }
        if (uVar11 < 0x10) {
          plVar14 = plVar8 + 2;
        }
        else {
          plVar14 = (longlong *)plVar8[2];
        }
        if (_Size == plVar4[4]) {
          if ((_Size == 0) || (iVar10 = memcmp(plVar14,plVar16,_Size), iVar10 == 0)) {
            lVar17 = *plVar4;
            puVar2 = (undefined8 *)plVar8[1];
            *puVar2 = plVar3;
            plVar18 = (longlong *)plVar3[1];
            *plVar18 = lVar17;
            puVar5 = *(undefined8 **)(lVar17 + 8);
            *puVar5 = plVar8;
            *(longlong **)(lVar17 + 8) = plVar18;
            plVar3[1] = (longlong)puVar2;
            plVar8[1] = (longlong)puVar5;
            plVar8 = plVar3;
            goto joined_r0x000180361a4a;
          }
          uVar11 = plVar8[5];
        }
      }
      puVar5 = (undefined8 *)plVar8[1];
      *puVar5 = plVar3;
      puVar6 = (undefined8 *)plVar3[1];
      *puVar6 = plVar4;
      puVar7 = (undefined8 *)plVar4[1];
      *puVar7 = plVar8;
      plVar4[1] = (longlong)puVar6;
      plVar3[1] = (longlong)puVar5;
      plVar8[1] = (longlong)puVar7;
      *puVar2 = plVar8;
      plVar8 = plVar3;
      goto joined_r0x000180361a4a;
    }
    if ((_Size != 0) && (iVar10 = memcmp(plVar14,plVar16,_Size), iVar10 != 0)) {
      uVar11 = plVar8[5];
      goto joined_r0x000180361b53;
    }
    plVar4 = (longlong *)*plVar4;
    if (plVar4 != plVar8) {
      puVar2 = (undefined8 *)plVar8[1];
      *puVar2 = plVar3;
      puVar5 = (undefined8 *)plVar3[1];
      *puVar5 = plVar4;
      puVar6 = (undefined8 *)plVar4[1];
      *puVar6 = plVar8;
      plVar4[1] = (longlong)puVar5;
      plVar3[1] = (longlong)puVar2;
      plVar8[1] = (longlong)puVar6;
    }
    *(longlong **)(lVar17 + 8) = plVar8;
    plVar8 = plVar3;
  } while( true );
}



/* ===== 180361c40 FUN_180361c40 ===== */

void FUN_180361c40(longlong param_1)

{
  longlong lVar1;
  code *pcVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  lVar1 = *(longlong *)(param_1 + 0x20);
  for (lVar4 = *(longlong *)(param_1 + 0x18); lVar4 != lVar1; lVar4 = lVar4 + 0x88) {
    FUN_18000f890(lVar4 + 0x60);
    FUN_18000f890(lVar4 + 0x40);
    FUN_18000f890(lVar4 + 0x20);
    FUN_18000f890(lVar4);
  }
  uVar3 = *(longlong *)(param_1 + 0x10) * 0x88;
  lVar4 = *(longlong *)(param_1 + 8);
  if (0xfff < uVar3) {
    if ((lVar4 - *(longlong *)(lVar4 + -8)) - 8U < 0x20) {
      thunk_FUN_1803d64e0(*(longlong *)(lVar4 + -8),uVar3 + 0x27);
      return;
    }
    pcVar2 = (code *)swi(0x29);
    lVar4 = (*pcVar2)(5);
  }
  thunk_FUN_1803d64e0(lVar4);
  return;
}



/* ===== 180361d00 FUN_180361d00 ===== */

void FUN_180361d00(longlong param_1)

{
  code *pcVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  FUN_180360ca0(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
  uVar3 = *(longlong *)(param_1 + 0x10) * 0xd8;
  lVar2 = *(longlong *)(param_1 + 8);
  if (0xfff < uVar3) {
    if ((lVar2 - *(longlong *)(lVar2 + -8)) - 8U < 0x20) {
      thunk_FUN_1803d64e0(*(longlong *)(lVar2 + -8),uVar3 + 0x27);
      return;
    }
    pcVar1 = (code *)swi(0x29);
    lVar2 = (*pcVar1)(5);
  }
  thunk_FUN_1803d64e0(lVar2);
  return;
}



/* ===== 180361d70 FUN_180361d70 ===== */

void FUN_180361d70(longlong param_1,longlong param_2,ulonglong param_3,undefined8 *param_4)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *local_58;
  undefined8 local_50;
  
  lVar7 = (longlong)(param_3 - 1) >> 1;
  lVar6 = param_2;
  lVar5 = param_2;
  if (param_2 < lVar7) {
    do {
      uVar4 = lVar6 * 0x40;
      if (*(ulonglong *)(param_1 + 0x38 + uVar4) < 8) {
        local_58 = (undefined8 *)((uVar4 | 0x20) + param_1);
      }
      else {
        local_58 = *(undefined8 **)(param_1 + 0x20 + uVar4);
      }
      local_50 = *(undefined8 *)(param_1 + 0x30 + uVar4);
      iVar2 = FUN_180014140(uVar4 + 0x40 + param_1,&local_58);
      cVar1 = '\0';
      if ((iVar2 != 0) && (cVar1 = -1, -1 < iVar2)) {
        cVar1 = '\x01';
      }
      lVar5 = ((longlong)cVar1 >> 0x3f) + 2 + lVar6 * 2;
      FUN_1800248e0(param_1 + lVar6 * 0x20,lVar5 * 0x20 + param_1);
      lVar6 = lVar5;
    } while (lVar5 < lVar7);
  }
  if ((lVar5 == lVar7) && ((param_3 & 1) == 0)) {
    FUN_1800248e0(param_1 + lVar5 * 0x20,param_1 + -0x20 + param_3 * 0x20);
    lVar5 = param_3 - 1;
  }
  while (param_2 < lVar5) {
    lVar6 = lVar5 + -1 >> 1;
    if ((ulonglong)param_4[3] < 8) {
      local_58 = param_4;
    }
    else {
      local_58 = (undefined8 *)*param_4;
    }
    local_50 = param_4[2];
    lVar7 = lVar6 * 0x20 + param_1;
    uVar3 = FUN_180014140(lVar7,&local_58);
    if (uVar3 < 0x80000000) break;
    FUN_1800248e0(param_1 + lVar5 * 0x20,lVar7);
    lVar5 = lVar6;
  }
  FUN_1800248e0(param_1 + lVar5 * 0x20,param_4);
  return;
}



/* ===== 180361ef0 FUN_180361ef0 ===== */

void FUN_180361ef0(undefined8 *param_1,ulonglong *param_2,ulonglong *param_3,ulonglong *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong *puVar10;
  ulonglong *puVar11;
  ulonglong *puVar12;
  ulonglong *puVar13;
  ulonglong *puVar14;
  ulonglong *local_88;
  ulonglong local_80;
  ulonglong *local_78;
  ulonglong local_70;
  undefined8 *local_68;
  ulonglong *local_58;
  ulonglong local_50;
  ulonglong *local_48;
  ulonglong local_40;
  
  puVar12 = param_3 + 4;
  local_68 = param_1;
  if (param_2 < param_3) {
    while( true ) {
      if (param_3[3] < 8) {
        local_88 = param_3;
      }
      else {
        local_88 = (ulonglong *)*param_3;
      }
      puVar14 = param_3 + -4;
      local_80 = param_3[2];
      iVar9 = FUN_180014140(puVar14,&local_88);
      if (iVar9 < 0) break;
      if (param_3[-1] < 8) {
        local_78 = puVar14;
      }
      else {
        local_78 = (ulonglong *)*puVar14;
      }
      local_70 = param_3[-2];
      iVar9 = FUN_180014140(param_3,&local_78);
      if ((iVar9 < 0) || (param_3 = puVar14, puVar14 <= param_2)) break;
    }
  }
  puVar14 = puVar12;
  puVar10 = param_3;
  if (puVar12 < param_4) {
    while( true ) {
      if (param_3[3] < 8) {
        local_78 = param_3;
      }
      else {
        local_78 = (ulonglong *)*param_3;
      }
      local_70 = param_3[2];
      iVar9 = FUN_180014140(puVar12,&local_78);
      puVar14 = puVar12;
      if (iVar9 < 0) break;
      if (puVar12[3] < 8) {
        local_88 = puVar12;
      }
      else {
        local_88 = (ulonglong *)*puVar12;
      }
      local_80 = puVar12[2];
      iVar9 = FUN_180014140(param_3,&local_88);
      if ((iVar9 < 0) || (puVar12 = puVar12 + 4, puVar14 = puVar12, param_4 <= puVar12)) break;
    }
  }
joined_r0x000180361ff3:
  do {
    puVar13 = puVar14;
    puVar11 = puVar10;
    if (param_4 <= puVar12) {
joined_r0x00018036208b:
      while (puVar7 = param_3, param_2 < puVar7) {
        param_3 = puVar7 + -4;
        if (puVar11[3] < 8) {
          local_58 = puVar11;
        }
        else {
          local_58 = (ulonglong *)*puVar11;
        }
        local_50 = puVar11[2];
        iVar9 = FUN_180014140(param_3,&local_58);
        if (-1 < iVar9) {
          if (puVar7[-1] < 8) {
            local_48 = param_3;
          }
          else {
            local_48 = (ulonglong *)*param_3;
          }
          local_40 = puVar7[-2];
          iVar9 = FUN_180014140(puVar11,&local_48);
          if (iVar9 < 0) break;
          if (puVar7 != puVar11) {
            uVar1 = *(undefined4 *)((longlong)puVar7 + -0x1c);
            uVar8 = puVar7[-3];
            uVar2 = *(undefined4 *)((longlong)puVar7 + -0x14);
            uVar3 = puVar11[-4];
            uVar4 = puVar11[-3];
            uVar5 = puVar11[-2];
            uVar6 = puVar11[-1];
            *(int *)(puVar11 + -4) = (int)*param_3;
            *(undefined4 *)((longlong)puVar11 + -0x1c) = uVar1;
            *(int *)(puVar11 + -3) = (int)uVar8;
            *(undefined4 *)((longlong)puVar11 + -0x14) = uVar2;
            uVar8 = puVar7[-1];
            puVar11[-2] = puVar7[-2];
            puVar11[-1] = uVar8;
            *param_3 = uVar3;
            puVar7[-3] = uVar4;
            puVar7[-2] = uVar5;
            puVar7[-1] = uVar6;
          }
          puVar11 = puVar11 + -4;
        }
      }
      if (puVar7 == param_2) {
        if (puVar12 == param_4) {
          *local_68 = puVar11;
          local_68[1] = puVar13;
          return;
        }
        if ((puVar13 != puVar12) && (puVar11 != puVar13)) {
          uVar1 = *(undefined4 *)((longlong)puVar13 + 4);
          uVar8 = puVar13[1];
          uVar2 = *(undefined4 *)((longlong)puVar13 + 0xc);
          uVar3 = *puVar11;
          uVar4 = puVar11[1];
          uVar5 = puVar11[2];
          uVar6 = puVar11[3];
          *(int *)puVar11 = (int)*puVar13;
          *(undefined4 *)((longlong)puVar11 + 4) = uVar1;
          *(int *)(puVar11 + 1) = (int)uVar8;
          *(undefined4 *)((longlong)puVar11 + 0xc) = uVar2;
          uVar8 = puVar13[3];
          puVar11[2] = puVar13[2];
          puVar11[3] = uVar8;
          *puVar13 = uVar3;
          puVar13[1] = uVar4;
          puVar13[2] = uVar5;
          puVar13[3] = uVar6;
        }
        if (puVar11 != puVar12) {
          uVar1 = *(undefined4 *)((longlong)puVar12 + 4);
          uVar8 = puVar12[1];
          uVar2 = *(undefined4 *)((longlong)puVar12 + 0xc);
          uVar3 = *puVar11;
          uVar4 = puVar11[1];
          uVar5 = puVar11[2];
          uVar6 = puVar11[3];
          *(int *)puVar11 = (int)*puVar12;
          *(undefined4 *)((longlong)puVar11 + 4) = uVar1;
          *(int *)(puVar11 + 1) = (int)uVar8;
          *(undefined4 *)((longlong)puVar11 + 0xc) = uVar2;
          uVar8 = puVar12[3];
          puVar11[2] = puVar12[2];
          puVar11[3] = uVar8;
          *puVar12 = uVar3;
          puVar12[1] = uVar4;
          puVar12[2] = uVar5;
          puVar12[3] = uVar6;
        }
        puVar12 = puVar12 + 4;
        puVar14 = puVar13 + 4;
        param_3 = puVar7;
        puVar10 = puVar11 + 4;
      }
      else {
        param_3 = puVar7 + -4;
        if (puVar12 == param_4) {
          puVar10 = puVar11 + -4;
          if (puVar11 != puVar7) {
            uVar1 = *(undefined4 *)((longlong)puVar11 + -0x1c);
            uVar8 = puVar11[-3];
            uVar2 = *(undefined4 *)((longlong)puVar11 + -0x14);
            uVar3 = *param_3;
            uVar4 = puVar7[-3];
            uVar5 = puVar7[-2];
            uVar6 = puVar7[-1];
            *(int *)param_3 = (int)*puVar10;
            *(undefined4 *)((longlong)puVar7 + -0x1c) = uVar1;
            *(int *)(puVar7 + -3) = (int)uVar8;
            *(undefined4 *)((longlong)puVar7 + -0x14) = uVar2;
            uVar8 = puVar11[-1];
            puVar7[-2] = puVar11[-2];
            puVar7[-1] = uVar8;
            *puVar10 = uVar3;
            puVar11[-3] = uVar4;
            puVar11[-2] = uVar5;
            puVar11[-1] = uVar6;
          }
          puVar14 = puVar13 + -4;
          if (puVar13 != puVar11) {
            uVar1 = *(undefined4 *)((longlong)puVar13 + -0x1c);
            uVar8 = puVar13[-3];
            uVar2 = *(undefined4 *)((longlong)puVar13 + -0x14);
            uVar3 = *puVar10;
            uVar4 = puVar11[-3];
            uVar5 = puVar11[-2];
            uVar6 = puVar11[-1];
            *(int *)puVar10 = (int)*puVar14;
            *(undefined4 *)((longlong)puVar11 + -0x1c) = uVar1;
            *(int *)(puVar11 + -3) = (int)uVar8;
            *(undefined4 *)((longlong)puVar11 + -0x14) = uVar2;
            uVar8 = puVar13[-1];
            puVar11[-2] = puVar13[-2];
            puVar11[-1] = uVar8;
            *puVar14 = uVar3;
            puVar13[-3] = uVar4;
            puVar13[-2] = uVar5;
            puVar13[-1] = uVar6;
          }
        }
        else {
          if (puVar12 != param_3) {
            uVar1 = *(undefined4 *)((longlong)puVar7 + -0x1c);
            uVar8 = puVar7[-3];
            uVar2 = *(undefined4 *)((longlong)puVar7 + -0x14);
            uVar3 = *puVar12;
            uVar4 = puVar12[1];
            uVar5 = puVar12[2];
            uVar6 = puVar12[3];
            *(int *)puVar12 = (int)*param_3;
            *(undefined4 *)((longlong)puVar12 + 4) = uVar1;
            *(int *)(puVar12 + 1) = (int)uVar8;
            *(undefined4 *)((longlong)puVar12 + 0xc) = uVar2;
            uVar8 = puVar7[-1];
            puVar12[2] = puVar7[-2];
            puVar12[3] = uVar8;
            *param_3 = uVar3;
            puVar7[-3] = uVar4;
            puVar7[-2] = uVar5;
            puVar7[-1] = uVar6;
          }
          puVar12 = puVar12 + 4;
          puVar14 = puVar13;
          puVar10 = puVar11;
        }
      }
      goto joined_r0x000180361ff3;
    }
    if (puVar12[3] < 8) {
      local_78 = puVar12;
    }
    else {
      local_78 = (ulonglong *)*puVar12;
    }
    local_70 = puVar12[2];
    iVar9 = FUN_180014140(puVar10,&local_78);
    if (-1 < iVar9) {
      if (puVar10[3] < 8) {
        local_88 = puVar10;
      }
      else {
        local_88 = (ulonglong *)*puVar10;
      }
      local_80 = puVar10[2];
      iVar9 = FUN_180014140(puVar12,&local_88);
      if (iVar9 < 0) goto joined_r0x00018036208b;
      if (puVar13 != puVar12) {
        uVar1 = *(undefined4 *)((longlong)puVar12 + 4);
        uVar8 = puVar12[1];
        uVar2 = *(undefined4 *)((longlong)puVar12 + 0xc);
        uVar3 = *puVar13;
        uVar4 = puVar13[1];
        uVar5 = puVar13[2];
        uVar6 = puVar13[3];
        *(int *)puVar13 = (int)*puVar12;
        *(undefined4 *)((longlong)puVar13 + 4) = uVar1;
        *(int *)(puVar13 + 1) = (int)uVar8;
        *(undefined4 *)((longlong)puVar13 + 0xc) = uVar2;
        uVar8 = puVar12[3];
        puVar13[2] = puVar12[2];
        puVar13[3] = uVar8;
        *puVar12 = uVar3;
        puVar12[1] = uVar4;
        puVar12[2] = uVar5;
        puVar12[3] = uVar6;
      }
      puVar13 = puVar13 + 4;
    }
    puVar12 = puVar12 + 4;
    puVar14 = puVar13;
  } while( true );
}



/* ===== 180362260 FUN_180362260 ===== */

longlong FUN_180362260(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  
  lVar6 = param_1;
  lVar4 = param_2;
  FUN_180362410();
  *(undefined4 *)(lVar6 + 0x88) = *(undefined4 *)(lVar4 + 0x88);
  *(undefined8 *)(lVar6 + 0x90) = 0;
  *(undefined8 *)(lVar6 + 0x98) = 0;
  lVar4 = FUN_1804ecaa0(0x50);
  *(longlong *)lVar4 = lVar4;
  *(longlong *)(lVar4 + 8) = lVar4;
  *(longlong *)(lVar6 + 0x90) = lVar4;
  *(undefined8 *)(lVar6 + 0xa0) = 0;
  *(undefined8 *)(lVar6 + 0xa8) = 0;
  *(undefined8 *)(lVar6 + 0xb0) = 0;
  uVar2 = *(undefined8 *)(lVar6 + 0x90);
  puVar5 = (undefined8 *)FUN_1804ecaa0(0x80);
  puVar8 = auStack_38;
  puVar9 = auStack_38;
  lVar4 = *(longlong *)(lVar6 + 0xa0);
  lVar7 = *(longlong *)(lVar6 + 0xb0) - lVar4;
  if (lVar7 == 0) goto LAB_18036231b;
  if ((ulonglong)((lVar7 >> 3) * 8) < 0x1000) {
LAB_180362313:
    lVar7 = lVar4;
    puVar9 = puVar8;
  }
  else {
    lVar7 = *(longlong *)(lVar4 + -8);
    if (0x1f < (lVar4 - lVar7) - 8U) {
      pcVar3 = (code *)swi(0x29);
      lVar4 = (*pcVar3)(5);
      puVar8 = auStack_30;
      goto LAB_180362313;
    }
  }
  *(undefined8 *)(puVar9 + -8) = 0x18036231b;
  thunk_FUN_1803d64e0(lVar7);
LAB_18036231b:
  *(undefined8 **)(lVar6 + 0xa0) = puVar5;
  puVar1 = puVar5 + 0x10;
  *(undefined8 **)(lVar6 + 0xa8) = puVar1;
  *(undefined8 **)(lVar6 + 0xb0) = puVar1;
  for (; puVar5 != puVar1; puVar5 = puVar5 + 1) {
    *puVar5 = uVar2;
  }
  uVar2 = *(undefined8 *)(lVar6 + 0x90);
  *(undefined8 *)(lVar6 + 0x90) = *(undefined8 *)(param_2 + 0x90);
  *(undefined8 *)(param_2 + 0x90) = uVar2;
  uVar2 = *(undefined8 *)(lVar6 + 0x98);
  *(undefined8 *)(lVar6 + 0x98) = *(undefined8 *)(param_2 + 0x98);
  *(undefined8 *)(param_2 + 0x98) = uVar2;
  uVar2 = *(undefined8 *)(lVar6 + 0xa0);
  *(undefined8 *)(lVar6 + 0xa0) = *(undefined8 *)(param_2 + 0xa0);
  *(undefined8 *)(param_2 + 0xa0) = uVar2;
  uVar2 = *(undefined8 *)(lVar6 + 0xa8);
  *(undefined8 *)(lVar6 + 0xa8) = *(undefined8 *)(param_2 + 0xa8);
  *(undefined8 *)(param_2 + 0xa8) = uVar2;
  uVar2 = *(undefined8 *)(lVar6 + 0xb0);
  *(undefined8 *)(lVar6 + 0xb0) = *(undefined8 *)(param_2 + 0xb0);
  *(undefined8 *)(param_2 + 0xb0) = uVar2;
  uVar2 = *(undefined8 *)(param_2 + 0xb8);
  *(undefined8 *)(param_2 + 0xb8) = 7;
  *(undefined8 *)(lVar6 + 0xb8) = uVar2;
  uVar2 = *(undefined8 *)(param_2 + 0xc0);
  *(undefined8 *)(param_2 + 0xc0) = 8;
  *(undefined8 *)(lVar6 + 0xc0) = uVar2;
  *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_2 + 200);
  *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_2 + 0xd0);
  return param_1;
}



/* ===== 180362410 FUN_180362410 ===== */

undefined8 * FUN_180362410(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  *(undefined1 *)param_2 = 0;
  param_2[2] = 0;
  param_2[3] = 0xf;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  uVar1 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  uVar1 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar1;
  *(undefined1 *)(param_2 + 4) = 0;
  param_2[6] = 0;
  param_2[7] = 0xf;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  uVar1 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar1;
  uVar1 = param_2[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar1;
  *(undefined1 *)(param_2 + 8) = 0;
  param_2[10] = 0;
  param_2[0xb] = 0xf;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  uVar1 = param_2[0xd];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar1;
  uVar1 = param_2[0xf];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = uVar1;
  *(undefined1 *)(param_2 + 0xc) = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0xf;
  *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_2 + 0x10);
  return param_1;
}



/* ===== 1803624e0 FUN_1803624e0 ===== */

longlong FUN_1803624e0(longlong param_1,longlong param_2)

{
  FUN_180024b50();
  FUN_180024b50(param_1 + 0x20,param_2 + 0x20);
  FUN_180024b50(param_1 + 0x40,param_2 + 0x40);
  FUN_180024b50(param_1 + 0x60,param_2 + 0x60);
  *(undefined1 *)(param_1 + 0x80) = *(undefined1 *)(param_2 + 0x80);
  return param_1;
}



/* ===== 180362540 FUN_180362540 ===== */

void FUN_180362540(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uVar9;
  undefined8 *local_28;
  undefined8 local_20;
  
  if ((ulonglong)param_1[3] < 8) {
    local_28 = param_1;
  }
  else {
    local_28 = (undefined8 *)*param_1;
  }
  local_20 = param_1[2];
  uVar9 = FUN_180014140(param_2,&local_28);
  if ((0x7fffffff < uVar9) && (param_2 != param_1)) {
    uVar1 = *(undefined4 *)((longlong)param_1 + 4);
    uVar2 = *(undefined4 *)(param_1 + 1);
    uVar3 = *(undefined4 *)((longlong)param_1 + 0xc);
    uVar4 = *param_2;
    uVar5 = param_2[1];
    uVar6 = param_2[2];
    uVar7 = param_2[3];
    *(undefined4 *)param_2 = *(undefined4 *)param_1;
    *(undefined4 *)((longlong)param_2 + 4) = uVar1;
    *(undefined4 *)(param_2 + 1) = uVar2;
    *(undefined4 *)((longlong)param_2 + 0xc) = uVar3;
    uVar8 = param_1[3];
    param_2[2] = param_1[2];
    param_2[3] = uVar8;
    *param_1 = uVar4;
    param_1[1] = uVar5;
    param_1[2] = uVar6;
    param_1[3] = uVar7;
  }
  if ((ulonglong)param_2[3] < 8) {
    local_28 = param_2;
  }
  else {
    local_28 = (undefined8 *)*param_2;
  }
  local_20 = param_2[2];
  uVar9 = FUN_180014140(param_3,&local_28);
  if (0x7fffffff < uVar9) {
    if (param_3 != param_2) {
      uVar1 = *(undefined4 *)((longlong)param_2 + 4);
      uVar2 = *(undefined4 *)(param_2 + 1);
      uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
      uVar4 = *param_3;
      uVar5 = param_3[1];
      uVar6 = param_3[2];
      uVar7 = param_3[3];
      *(undefined4 *)param_3 = *(undefined4 *)param_2;
      *(undefined4 *)((longlong)param_3 + 4) = uVar1;
      *(undefined4 *)(param_3 + 1) = uVar2;
      *(undefined4 *)((longlong)param_3 + 0xc) = uVar3;
      uVar8 = param_2[3];
      param_3[2] = param_2[2];
      param_3[3] = uVar8;
      *param_2 = uVar4;
      param_2[1] = uVar5;
      param_2[2] = uVar6;
      param_2[3] = uVar7;
    }
    if ((ulonglong)param_1[3] < 8) {
      local_28 = param_1;
    }
    else {
      local_28 = (undefined8 *)*param_1;
    }
    local_20 = param_1[2];
    uVar9 = FUN_180014140(param_2,&local_28);
    if ((0x7fffffff < uVar9) && (param_2 != param_1)) {
      uVar4 = param_1[1];
      uVar5 = *param_2;
      uVar6 = param_2[1];
      uVar7 = param_2[2];
      uVar8 = param_2[3];
      *param_2 = *param_1;
      param_2[1] = uVar4;
      uVar4 = param_1[3];
      param_2[2] = param_1[2];
      param_2[3] = uVar4;
      *param_1 = uVar5;
      param_1[1] = uVar6;
      param_1[2] = uVar7;
      param_1[3] = uVar8;
    }
  }
  return;
}



/* ===== 180362650 FUN_180362650 ===== */

longlong * FUN_180362650(float *param_1,longlong *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  size_t _Size;
  longlong lVar2;
  int iVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined8 *_Buf1;
  undefined8 *_Buf2;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  float fVar9;
  undefined8 *local_58;
  longlong local_50;
  
  puVar8 = param_3;
  if (0xf < (ulonglong)param_3[3]) {
    puVar8 = (undefined8 *)*param_3;
  }
  uVar7 = 0xcbf29ce484222325;
  uVar5 = 0;
  if (param_3[2] != 0) {
    do {
      uVar7 = (uVar7 ^ *(byte *)((longlong)puVar8 + uVar5)) * 0x100000001b3;
      uVar5 = uVar5 + 1;
    } while (uVar5 < (ulonglong)param_3[2]);
  }
  FUN_1800268a0(param_1,&local_58,param_3,uVar7);
  if (local_50 != 0) {
    *param_2 = local_50;
    *(undefined1 *)(param_2 + 1) = 0;
    return param_2;
  }
  if (*(longlong *)(param_1 + 4) == 0x333333333333333) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4cd0("unordered_map/set too long");
  }
  puVar4 = (undefined8 *)FUN_1804ecaa0(0x50);
  puVar8 = puVar4 + 2;
  FUN_180024b50(puVar8,param_3);
  FUN_180024b50(puVar4 + 6,param_3 + 4);
  fVar9 = (float)(*(longlong *)(param_1 + 4) + 1) / (float)*(ulonglong *)(param_1 + 0xe);
  if (!(fVar9 < *param_1 || fVar9 == *param_1)) {
    FUN_1800280b0(param_1);
    puVar6 = *(undefined8 **)
              (*(longlong *)(param_1 + 6) + 8 + (uVar7 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
    local_58 = *(undefined8 **)(param_1 + 2);
    if (puVar6 != *(undefined8 **)(param_1 + 2)) {
      puVar1 = *(undefined8 **)
                (*(longlong *)(param_1 + 6) + (uVar7 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
      _Size = puVar4[4];
      while( true ) {
        _Buf2 = puVar6 + 2;
        if (0xf < (ulonglong)puVar6[5]) {
          _Buf2 = (undefined8 *)*_Buf2;
        }
        if ((ulonglong)puVar4[5] < 0x10) {
          _Buf1 = puVar8;
        }
        else {
          _Buf1 = (undefined8 *)*puVar8;
        }
        if ((_Size == puVar6[4]) &&
           ((_Size == 0 || (iVar3 = memcmp(_Buf1,_Buf2,_Size), iVar3 == 0)))) {
          local_58 = (undefined8 *)*puVar6;
          goto LAB_180362827;
        }
        if (puVar6 == puVar1) break;
        puVar6 = (undefined8 *)puVar6[1];
      }
      local_58 = puVar6;
    }
  }
LAB_180362827:
  puVar8 = (undefined8 *)local_58[1];
  *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + 1;
  *puVar4 = local_58;
  puVar4[1] = puVar8;
  *puVar8 = puVar4;
  local_58[1] = puVar4;
  lVar2 = *(longlong *)(param_1 + 6);
  uVar7 = *(ulonglong *)(param_1 + 0xc) & uVar7;
  puVar6 = *(undefined8 **)(lVar2 + uVar7 * 0x10);
  if (puVar6 == *(undefined8 **)(param_1 + 2)) {
    *(undefined8 **)(lVar2 + uVar7 * 0x10) = puVar4;
  }
  else {
    if (puVar6 == local_58) {
      *(undefined8 **)(lVar2 + uVar7 * 0x10) = puVar4;
      goto LAB_180362872;
    }
    if (*(undefined8 **)(lVar2 + 8 + uVar7 * 0x10) != puVar8) goto LAB_180362872;
  }
  *(undefined8 **)(lVar2 + 8 + uVar7 * 0x10) = puVar4;
LAB_180362872:
  *param_2 = (longlong)puVar4;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



/* ===== 18036289c FUN_18036289c ===== */

void FUN_18036289c(longlong param_1)

{
  FUN_180360960(param_1 - *(int *)(param_1 + -4));
  return;
}



/* ===== 1803628b0 FUN_1803628b0 ===== */

void FUN_1803628b0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  uint uVar10;
  undefined1 local_48 [64];
  
  if (DAT_1809619e0 != 0) {
    uVar10 = DAT_181107a00 ^ 1;
    puVar8 = (undefined8 *)FUN_1802010e0(local_48,DAT_1809619e0);
    uVar1 = puVar8[1];
    uVar2 = puVar8[2];
    uVar3 = puVar8[3];
    uVar4 = puVar8[4];
    uVar5 = puVar8[5];
    uVar6 = puVar8[6];
    uVar7 = puVar8[7];
    lVar9 = (longlong)(int)uVar10 * 0x40;
    *(undefined8 *)(&DAT_181107930 + lVar9) = *puVar8;
    *(undefined8 *)(&DAT_181107938 + lVar9) = uVar1;
    *(undefined8 *)(&DAT_181107940 + lVar9) = uVar2;
    *(undefined8 *)(&DAT_181107948 + lVar9) = uVar3;
    *(undefined8 *)(&DAT_181107950 + lVar9) = uVar4;
    *(undefined8 *)(&DAT_181107958 + lVar9) = uVar5;
    *(undefined8 *)(&DAT_181107960 + lVar9) = uVar6;
    *(undefined8 *)(&DAT_181107968 + lVar9) = uVar7;
    DAT_181107a00 = uVar10;
  }
  return;
}



/* ===== 180362920 FUN_180362920 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_180362920(longlong *param_1)

{
  byte extraout_var;
  ulonglong uVar1;
  undefined1 auStack_68 [32];
  longlong *local_48;
  ulonglong local_40 [3];
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined8 uStack_1c;
  ulonglong local_10;
  
  local_10 = DAT_180919500 ^ (ulonglong)auStack_68;
  local_48 = (longlong *)0x0;
  uVar1 = (**(code **)(*param_1 + 0x48))(param_1,0,&DAT_18058a4c0,&local_48);
  if (((int)uVar1 < 0) || (local_48 == (longlong *)0x0)) {
    return uVar1 & 0xffffffffffffff00;
  }
  local_40[2] = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  local_40[0] = 0;
  local_40[1] = 0;
  (**(code **)(*local_48 + 0x50))(local_48,local_40);
  DAT_1811079b0 = (float)(local_40[0] & 0xffffffff);
  DAT_1811079b4 = (float)(local_40[0] >> 0x20);
  (**(code **)(*DAT_1811079e0 + 0x48))(DAT_1811079e0,local_48,0,&DAT_181107a40);
  (**(code **)(*local_48 + 0x10))();
  return (ulonglong)(byte)(extraout_var >> 7 ^ 1);
}



/* ===== 180362a10 FUN_180362a10 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180362a10(undefined4 param_1)

{
  char **lpFileName;
  UINT UVar1;
  DWORD DVar2;
  char **ppcVar3;
  undefined1 auStack_348 [32];
  char *local_328;
  undefined1 local_318 [52];
  undefined2 local_2e4;
  undefined2 local_2e1;
  undefined2 local_2de;
  undefined4 local_2bc;
  undefined4 local_2ac;
  undefined4 local_2a8;
  undefined4 local_2a4;
  char *local_278 [6];
  char *local_248 [34];
  CHAR local_138 [272];
  ulonglong local_28;
  
  lpFileName = local_278 + 6;
  local_28 = DAT_180919500 ^ (ulonglong)auStack_348;
  FUN_180540170(local_138,0,0x104);
  UVar1 = GetWindowsDirectoryA(local_138,0x104);
  if (UVar1 != 0) {
    local_278[0] = "segoeui.ttf";
    ppcVar3 = local_278;
    local_278[1] = "seguisym.ttf";
    local_278[2] = "msyh.ttc";
    local_278[3] = "malgun.ttf";
    local_278[4] = "Nirmala.ttf";
    local_278[5] = "leelawui.ttf";
    do {
      FUN_180540170(lpFileName,0,0x104);
      local_328 = *ppcVar3;
      snprintf(lpFileName,0x104,"%s\\Fonts\\%s",local_138);
      DVar2 = GetFileAttributesA((LPCSTR)lpFileName);
      if (DVar2 != 0xffffffff) {
        FUN_180540170(local_318,0,0xa0);
        local_2e4 = 0x101;
        local_2e1 = 0;
        local_2a4 = 0x3f800000;
        local_2bc = 0x7f7fffff;
        local_2ac = 0x3f800000;
        local_2a8 = 0x3f800000;
        local_2de = 0;
        local_328 = (char *)0x0;
        FUN_180403770(*(undefined8 *)(DAT_180ca0a50 + 0x60),lpFileName,param_1,local_318);
      }
      ppcVar3 = ppcVar3 + 1;
    } while (ppcVar3 != lpFileName);
  }
  return;
}



/* ===== 180362bb0 FUN_180362bb0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_180362bb0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auStack_e8 [32];
  undefined1 *local_c8;
  undefined2 *local_c0;
  undefined1 local_b8 [52];
  undefined1 local_84;
  undefined2 local_7e;
  undefined4 local_5c;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_e8;
  FUN_180540170(local_b8,0,0xa0);
  local_44 = 0x3f800000;
  local_7e = 0;
  local_84 = 0;
  local_5c = 0x7f7fffff;
  local_4c = 0x3f800000;
  local_48 = 0x3f800000;
  snprintf(local_b8,0x28,&DAT_1806d3198,param_3);
  local_c0 = &DAT_1808a95d0;
  local_c8 = local_b8;
  lVar1 = FUN_180403ba0(*(undefined8 *)(DAT_180ca0a50 + 0x60),param_1);
  if (lVar1 != 0) {
    FUN_180362a10(DAT_1808ac930);
  }
  return lVar1;
}



/* ===== 180362cb0 FUN_180362cb0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180362cb0(void)

{
  undefined4 uVar1;
  longlong lVar2;
  UINT UVar3;
  DWORD DVar4;
  undefined1 auStack_598 [32];
  undefined2 *local_578;
  undefined2 *local_570;
  undefined1 local_568 [52];
  undefined1 local_534;
  undefined2 local_531;
  undefined2 local_52e;
  undefined4 local_50c;
  undefined4 local_4fc;
  undefined4 local_4f8;
  undefined4 local_4f4;
  undefined1 local_4c8 [52];
  undefined1 local_494;
  undefined2 local_48e;
  undefined4 local_46c;
  undefined4 local_45c;
  undefined4 local_458;
  undefined4 local_454;
  undefined1 local_428 [52];
  undefined1 local_3f4;
  undefined2 local_3ee;
  undefined4 local_3cc;
  undefined4 local_3bc;
  undefined4 local_3b8;
  undefined4 local_3b4;
  undefined1 local_388 [52];
  undefined1 local_354;
  undefined2 local_34e;
  undefined4 local_32c;
  undefined4 local_31c;
  undefined4 local_318;
  undefined4 local_314;
  undefined1 local_2e8 [52];
  undefined1 local_2b4;
  undefined2 local_2ae;
  undefined4 local_28c;
  undefined4 local_27c;
  undefined4 local_278;
  undefined4 local_274;
  CHAR local_248 [272];
  CHAR local_138 [272];
  ulonglong local_28;
  
  lVar2 = DAT_180ca0a50;
  local_28 = DAT_180919500 ^ (ulonglong)auStack_598;
  FUN_180540170(local_4c8,0,0xa0);
  local_454 = 0x3f800000;
  local_48e = 0;
  local_494 = 0;
  local_46c = 0x7f7fffff;
  local_45c = 0x3f800000;
  local_458 = 0x3f800000;
  snprintf(local_4c8,0x28,"noto sans regular 12");
  uVar1 = DAT_1808ac91c;
  local_578 = (undefined2 *)local_4c8;
  local_570 = &DAT_1808a95d0;
  DAT_181107a20 = FUN_180403ba0(*(undefined8 *)(lVar2 + 0x60),&DAT_180850340);
  if (DAT_181107a20 != 0) {
    FUN_180362a10(uVar1);
  }
  FUN_180540170(local_428,0,0xa0);
  local_3b4 = 0x3f800000;
  local_3ee = 0;
  local_3f4 = 0;
  local_3cc = 0x7f7fffff;
  local_3bc = 0x3f800000;
  local_3b8 = 0x3f800000;
  snprintf(local_428,0x28,"noto sans semibold 13");
  local_578 = (undefined2 *)local_428;
  local_570 = &DAT_1808a95d0;
  DAT_181107a38 = FUN_180403ba0(*(undefined8 *)(lVar2 + 0x60),&DAT_1807f2a90);
  if (DAT_181107a38 != 0) {
    FUN_180362a10(DAT_1808ac930);
  }
  FUN_180540170(local_388,0,0xa0);
  local_314 = 0x3f800000;
  local_34e = 0;
  local_354 = 0;
  local_32c = 0x7f7fffff;
  local_318 = 0x3f800000;
  local_31c = 0x3fc00000;
  snprintf(local_388,0x28,"noto sans regular 10 (watermark)");
  local_578 = (undefined2 *)local_388;
  local_570 = &DAT_1808a95d0;
  DAT_181107a48 = FUN_180403ba0(*(undefined8 *)(lVar2 + 0x60),&DAT_180850340);
  if (DAT_181107a48 != 0) {
    FUN_180362a10(DAT_1808ac8dc);
  }
  FUN_180540170(local_2e8,0,0xa0);
  local_274 = 0x3f800000;
  local_2ae = 0;
  local_2b4 = 0;
  local_28c = 0x7f7fffff;
  local_278 = 0x3f800000;
  local_27c = 0x3fa00000;
  snprintf(local_2e8,0x28,"noto sans medium 12 (watermark)");
  local_578 = (undefined2 *)local_2e8;
  local_570 = &DAT_1808a95d0;
  DAT_1811079d0 = FUN_180403ba0(*(undefined8 *)(lVar2 + 0x60),&DAT_180795350);
  if (DAT_1811079d0 != 0) {
    FUN_180362a10(uVar1);
  }
  FUN_180540170(local_138,0,0x104);
  UVar3 = GetWindowsDirectoryA(local_138,0x104);
  if (UVar3 != 0) {
    FUN_180540170(local_248,0,0x104);
    snprintf(local_248,0x104,"%s\\Fonts\\calibrib.ttf",local_138);
    DVar4 = GetFileAttributesA(local_248);
    if (DVar4 != 0xffffffff) {
      FUN_180540170(local_568,0,0xa0);
      local_534 = 1;
      local_52e = 0;
      local_4f4 = 0x3f800000;
      local_50c = 0x7f7fffff;
      local_4fc = 0x3f800000;
      local_4f8 = 0x3f800000;
      local_531 = 0x203;
      snprintf(local_568,0x28,"calibri bold 12");
      uVar1 = DAT_1808ac980;
      local_578 = &DAT_1808a95d0;
      DAT_1811079e8 = FUN_180403770(*(undefined8 *)(lVar2 + 0x60),local_248,DAT_1808ac980,local_568)
      ;
      if (DAT_1811079e8 != 0) {
        FUN_180362a10(uVar1);
      }
    }
  }
  return;
}



/* ===== 180363090 FUN_180363090 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_180363090(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  DWORD DVar1;
  longlong lVar2;
  undefined1 auStack_208 [32];
  undefined2 *local_1e8;
  undefined1 local_1d8 [52];
  undefined1 local_1a4;
  undefined2 local_1a1;
  undefined2 local_19e;
  undefined4 local_17c;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  CHAR local_138 [272];
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_208;
  FUN_180540170(local_138,0,0x104);
  local_1e8 = (undefined2 *)param_2;
  snprintf(local_138,0x104,"%s\\Fonts\\%s",*param_1);
  DVar1 = GetFileAttributesA(local_138);
  if (DVar1 == 0xffffffff) {
    lVar2 = 0;
  }
  else {
    FUN_180540170(local_1d8,0,0xa0);
    local_1a4 = 1;
    local_19e = 0;
    local_1a1 = 0;
    local_164 = 0x3f800000;
    local_17c = 0x7f7fffff;
    local_16c = 0x3f800000;
    local_168 = 0x3f800000;
    snprintf(local_1d8,0x28,&DAT_1806d3198,param_3);
    local_1e8 = &DAT_1808a95d0;
    lVar2 = FUN_180403770(*(undefined8 *)(DAT_180ca0a50 + 0x60),local_138,DAT_1808ac918,local_1d8);
    if (lVar2 != 0) {
      FUN_180362a10(DAT_1808ac918);
    }
  }
  return lVar2;
}



/* ===== 1803631e0 FUN_1803631e0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1803631e0(void)

{
  undefined4 uVar1;
  longlong lVar2;
  UINT UVar3;
  longlong lVar4;
  char **ppcVar5;
  undefined1 auStack_2a8 [32];
  char *local_288;
  undefined8 *local_278;
  char *local_270 [4];
  char *local_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined1 uStack_214;
  undefined1 uStack_213;
  undefined2 uStack_212;
  undefined1 uStack_210;
  undefined1 uStack_20f;
  undefined2 uStack_20e;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined8 local_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined8 uStack_1d0;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined *puStack_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined2 *local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  ulonglong local_28;
  
  lVar2 = DAT_180ca0a50;
  local_28 = DAT_180919500 ^ (ulonglong)auStack_2a8;
  FUN_180540170(&local_138,0,0x104);
  UVar3 = GetWindowsDirectoryA((LPSTR)&local_138,0x104);
  uVar1 = DAT_1808ac900;
  if (UVar3 == 0) {
    FUN_180403490(*(undefined8 *)(lVar2 + 0x60));
  }
  else {
    local_270[1] = "tahoma.ttf";
    ppcVar5 = local_270;
    local_270[2] = "segoeui.ttf";
    local_270[3] = "arial.ttf";
    local_270[0] = "verdana.ttf";
    do {
      FUN_180540170(&local_248,0,0x104);
      local_288 = *ppcVar5;
      snprintf(&local_248,0x104,"%s\\Fonts\\%s",&local_138);
      local_288 = (char *)0x0;
      lVar4 = FUN_180403770(*(undefined8 *)(lVar2 + 0x60),&local_248,uVar1,0);
      if (lVar4 != 0) {
        FUN_180362a10(uVar1);
        goto LAB_180363323;
      }
      ppcVar5 = ppcVar5 + 1;
    } while (ppcVar5 != local_270 + 4);
    FUN_180403490(*(undefined8 *)(lVar2 + 0x60));
  }
LAB_180363323:
  FUN_180540170(&local_248,0,0xa0);
  uStack_1d4 = 0x3f800000;
  uStack_1ec = 0x7f7fffff;
  uStack_1dc = 0x3f800000;
  local_1d8 = 0x3f800000;
  uStack_20e = 0;
  uStack_214 = 0;
  uStack_212 = 0x101;
  uStack_210 = 1;
  snprintf(&local_248,0x28,"smallest pixel 7");
  local_138 = local_248;
  uStack_130 = uStack_240;
  local_128 = local_238;
  uStack_120 = uStack_230;
  _local_108 = CONCAT44(CONCAT22(uStack_212,CONCAT11(uStack_213,uStack_214)),0x6400);
  uStack_e0 = CONCAT44(uStack_1ec,uStack_1f0);
  local_118 = local_228;
  puStack_110 = &DAT_18078ef50;
  local_f8 = (undefined2 *)local_208;
  uStack_f0 = uStack_200;
  _uStack_100 = CONCAT44(0x41200000,CONCAT22(uStack_20e,CONCAT11(uStack_20f,uStack_210)));
  uStack_d0 = CONCAT44(uStack_1dc,uStack_1e0);
  local_e8 = local_1f8;
  local_c8 = CONCAT44(uStack_1d4,local_1d8);
  local_d8 = local_1e8;
  uStack_c0 = uStack_1d0;
  local_b8 = local_1c8;
  uStack_b4 = uStack_1c4;
  uStack_b0 = uStack_1c0;
  uStack_ac = uStack_1bc;
  local_a8 = local_1b8;
  uStack_a4 = uStack_1b4;
  uStack_a0 = uStack_1b0;
  uStack_9c = uStack_1ac;
  DAT_1811079f0 = FUN_180403130(*(undefined8 *)(DAT_180ca0a50 + 0x60),&local_138);
  if (DAT_1811079f0 != 0) {
    FUN_180362a10(DAT_1808ac864);
  }
  FUN_180540170(&local_248,0,0xa0);
  uStack_1d4 = 0x3f800000;
  uStack_1ec = 0x7f7fffff;
  uStack_1dc = 0x3f800000;
  local_1d8 = 0x3f800000;
  uStack_20e = 0;
  uStack_214 = 0;
  snprintf(&local_248,0x28,"stratum2 mono bold 13");
  local_138 = local_248;
  uStack_130 = uStack_240;
  local_128 = local_238;
  uStack_120 = uStack_230;
  _local_108 = CONCAT44(CONCAT22(uStack_212,CONCAT11(uStack_213,uStack_214)),0xabc8);
  uStack_e0 = CONCAT44(uStack_1ec,uStack_1f0);
  local_118 = local_228;
  puStack_110 = &DAT_180784380;
  uStack_f0 = uStack_200;
  _uStack_100 = CONCAT44(0x4179999a,CONCAT22(uStack_20e,CONCAT11(uStack_20f,uStack_210)));
  uStack_d0 = CONCAT44(uStack_1dc,uStack_1e0);
  local_e8 = local_1f8;
  local_f8 = &DAT_1808a95d0;
  local_c8 = CONCAT44(uStack_1d4,local_1d8);
  local_d8 = local_1e8;
  uStack_c0 = uStack_1d0;
  local_b8 = local_1c8;
  uStack_b4 = uStack_1c4;
  uStack_b0 = uStack_1c0;
  uStack_ac = uStack_1bc;
  local_a8 = local_1b8;
  uStack_a4 = uStack_1b4;
  uStack_a0 = uStack_1b0;
  uStack_9c = uStack_1ac;
  DAT_181107a10 = FUN_180403130(*(undefined8 *)(DAT_180ca0a50 + 0x60),&local_138);
  if (DAT_181107a10 != 0) {
    FUN_180362a10(DAT_1808ac908);
  }
  FUN_180362cb0();
  DAT_181107a08 = FUN_180362bb0(&DAT_180850340);
  DAT_181107a18 = FUN_180362bb0(&DAT_180795350);
  DAT_1811079c0 = FUN_180362bb0(&DAT_1807f2a90);
  FUN_180540170(&local_138,0,0x104);
  UVar3 = GetWindowsDirectoryA((LPSTR)&local_138,0x104);
  if (UVar3 != 0) {
    local_278 = &local_138;
    DAT_181107a28 = FUN_180363090(&local_278,"verdana.ttf","verdana (esp)");
    DAT_181107a30 = FUN_180363090(&local_278,"verdanab.ttf","verdana bold (esp)");
  }
  return;
}



/* ===== 180363640 FUN_180363640 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180363640(void)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  lVar1 = DAT_180ca0a50;
  *(undefined4 *)(DAT_180ca0a50 + 0xcac) = 0x40800000;
  *(undefined4 *)(lVar1 + 0xce4) = 0x40400000;
  *(undefined4 *)(lVar1 + 0xd24) = 0x40400000;
  *(undefined4 *)(lVar1 + 0xd18) = 0x40400000;
  *(undefined4 *)(lVar1 + 0xcb0) = 0x3f800000;
  *(undefined4 *)(lVar1 + 0xdd4) = 0;
  *(undefined4 *)(lVar1 + 0xca4) = 0x41200000;
  *(undefined4 *)(lVar1 + 0xca8) = 0x41200000;
  *(undefined4 *)(lVar1 + 0xcec) = 0x41000000;
  *(undefined4 *)(lVar1 + 0xcf0) = 0x40c00000;
  *(undefined4 *)(lVar1 + 0xe50) = 0x3e52d2d3;
  *(undefined4 *)(lVar1 + 0xe54) = 0x3e66801a;
  *(undefined4 *)(lVar1 + 0xe58) = 0x3eb33333;
  *(undefined4 *)(lVar1 + 0xe5c) = 0x3f0a3d71;
  *(undefined4 *)(lVar1 + 0xe60) = 0x3f169697;
  *(undefined4 *)(lVar1 + 0xe64) = 0x3f24a4a5;
  *(undefined4 *)(lVar1 + 0xe68) = 0x3f800000;
  *(undefined4 *)(lVar1 + 0xe6c) = 0x3ecccccd;
  *(undefined4 *)(lVar1 + 0xe70) = 0x3f169697;
  *(undefined4 *)(lVar1 + 0xe74) = 0x3f24a4a5;
  *(undefined4 *)(lVar1 + 0xe78) = 0x3f800000;
  *(undefined4 *)(lVar1 + 0xe7c) = 0x3f2b851f;
  *(undefined4 *)(lVar1 + 0xe90) = 0x3e52d2d3;
  *(undefined4 *)(lVar1 + 0xe94) = 0x3e66801a;
  *(undefined4 *)(lVar1 + 0xe98) = 0x3eb33333;
  *(undefined4 *)(lVar1 + 0xe9c) = 0x3f800000;
  *(undefined4 *)(lVar1 + 0xf00) = 0x3f169697;
  *(undefined4 *)(lVar1 + 0xf04) = 0x3f24a4a5;
  *(undefined4 *)(lVar1 + 0xf08) = 0x3f800000;
  *(undefined4 *)(lVar1 + 0xf0c) = 0x3f800000;
  fVar6 = (float)*(undefined8 *)(lVar1 + 0xe50);
  fVar8 = (float)((ulonglong)*(undefined8 *)(lVar1 + 0xe50) >> 0x20);
  fVar2 = (float)*(undefined8 *)(lVar1 + 0xe58);
  fVar3 = (float)((ulonglong)*(undefined8 *)(lVar1 + 0xe58) >> 0x20);
  fVar10 = ((float)*(undefined8 *)(lVar1 + 0xe68) - fVar2) * _DAT_1808ada40;
  fVar11 = ((float)((ulonglong)*(undefined8 *)(lVar1 + 0xe68) >> 0x20) - fVar3) * _UNK_1808ada44;
  *(ulonglong *)(lVar1 + 0xf10) =
       CONCAT44(((float)((ulonglong)*(undefined8 *)(lVar1 + 0xe60) >> 0x20) - fVar8) *
                _UNK_1808ada44 + fVar8,
                ((float)*(undefined8 *)(lVar1 + 0xe60) - fVar6) * _DAT_1808ada40 + fVar6);
  *(ulonglong *)(lVar1 + 0xf18) = CONCAT44(fVar11 + fVar3,fVar10 + fVar2);
  *(undefined4 *)(lVar1 + 0xf20) = 0x3f000001;
  *(undefined4 *)(lVar1 + 0xf24) = 0x3f0bf259;
  *(undefined4 *)(lVar1 + 0xf28) = 0x3f59999a;
  *(undefined4 *)(lVar1 + 0xf2c) = 0x3f800000;
  *(undefined4 *)(lVar1 + 0xf30) = 0x3f169697;
  *(undefined4 *)(lVar1 + 0xf34) = 0x3f24a4a5;
  *(undefined4 *)(lVar1 + 0xf38) = 0x3f800000;
  *(undefined4 *)(lVar1 + 0xf3c) = 0x3f800000;
  *(undefined4 *)(lVar1 + 0xf40) = 0x3f169697;
  *(undefined4 *)(lVar1 + 0xf44) = 0x3f24a4a5;
  *(undefined4 *)(lVar1 + 0xf48) = 0x3f800000;
  *(undefined4 *)(lVar1 + 0xf4c) = 0x3ecccccd;
  *(undefined4 *)(lVar1 + 0xf50) = 0x3f169697;
  *(undefined4 *)(lVar1 + 0xf54) = 0x3f24a4a5;
  *(undefined4 *)(lVar1 + 0xf58) = 0x3f800000;
  *(undefined4 *)(lVar1 + 0xf5c) = 0x3f800000;
  *(undefined4 *)(lVar1 + 0xf60) = 0x3f000001;
  *(undefined4 *)(lVar1 + 0xf64) = 0x3f0bf259;
  *(undefined4 *)(lVar1 + 0xf68) = 0x3f59999a;
  *(undefined4 *)(lVar1 + 0xf6c) = 0x3f800000;
  *(undefined4 *)(lVar1 + 0xf70) = 0x3f169697;
  *(undefined4 *)(lVar1 + 0xf74) = 0x3f24a4a5;
  *(undefined4 *)(lVar1 + 0xf78) = 0x3f800000;
  *(undefined4 *)(lVar1 + 0xf7c) = 0x3e9eb852;
  *(undefined4 *)(lVar1 + 0xf80) = 0x3f169697;
  *(undefined4 *)(lVar1 + 0xf84) = 0x3f24a4a5;
  *(undefined4 *)(lVar1 + 0xf88) = 0x3f800000;
  *(undefined4 *)(lVar1 + 0xf8c) = 0x3f4ccccd;
  *(undefined4 *)(lVar1 + 0xf90) = 0x3f169697;
  *(undefined4 *)(lVar1 + 0xf94) = 0x3f24a4a5;
  *(undefined4 *)(lVar1 + 0xf98) = 0x3f800000;
  *(undefined4 *)(lVar1 + 0xf9c) = 0x3f800000;
  *(undefined4 *)(lVar1 + 0xfb0) = 0x3ee1e1e2;
  *(undefined4 *)(lVar1 + 0xfb4) = 0x3ef6f6f8;
  *(undefined4 *)(lVar1 + 0xfb8) = 0x3f400000;
  *(undefined4 *)(lVar1 + 0xfbc) = 0x3f47ae14;
  *(undefined4 *)(lVar1 + 0xfc0) = 0x3ee1e1e2;
  *(undefined4 *)(lVar1 + 0xfc4) = 0x3ef6f6f8;
  *(undefined4 *)(lVar1 + 0xfc8) = 0x3f400000;
  *(undefined4 *)(lVar1 + 0xfcc) = 0x3f800000;
  *(undefined4 *)(lVar1 + 0xfd0) = 0x3f169697;
  *(undefined4 *)(lVar1 + 0xfd4) = 0x3f24a4a5;
  *(undefined4 *)(lVar1 + 0xfd8) = 0x3f800000;
  *(undefined4 *)(lVar1 + 0xfdc) = 0x3e4ccccd;
  *(undefined4 *)(lVar1 + 0xfe0) = 0x3f169697;
  *(undefined4 *)(lVar1 + 0xfe4) = 0x3f24a4a5;
  *(undefined4 *)(lVar1 + 0xfe8) = 0x3f800000;
  fVar8 = _UNK_1808adaa4;
  fVar6 = _DAT_1808adaa0;
  *(undefined4 *)(lVar1 + 0xfec) = 0x3f2b851f;
  *(undefined4 *)(lVar1 + 0xff0) = 0x3f169697;
  *(undefined4 *)(lVar1 + 0xff4) = 0x3f24a4a5;
  *(undefined4 *)(lVar1 + 0xff8) = 0x3f800000;
  *(undefined4 *)(lVar1 + 0xffc) = 0x3f733333;
  *(undefined8 *)(lVar1 + 0x1010) = *(undefined8 *)(lVar1 + 0xf80);
  *(undefined8 *)(lVar1 + 0x1018) = *(undefined8 *)(lVar1 + 0xf88);
  fVar3 = _UNK_1808ada14;
  fVar2 = _DAT_1808ada10;
  fVar7 = (float)*(undefined8 *)(lVar1 + 0xe90);
  fVar9 = (float)((ulonglong)*(undefined8 *)(lVar1 + 0xe90) >> 0x20);
  fVar4 = (float)*(undefined8 *)(lVar1 + 0xe98);
  fVar5 = (float)((ulonglong)*(undefined8 *)(lVar1 + 0xe98) >> 0x20);
  fVar12 = (float)*(undefined8 *)(lVar1 + 0xf70);
  fVar13 = (float)((ulonglong)*(undefined8 *)(lVar1 + 0xf70) >> 0x20);
  fVar10 = (float)*(undefined8 *)(lVar1 + 0xf78);
  fVar11 = (float)((ulonglong)*(undefined8 *)(lVar1 + 0xf78) >> 0x20);
  fVar12 = (fVar7 - fVar12) * fVar6 + fVar12;
  fVar13 = (fVar9 - fVar13) * fVar8 + fVar13;
  fVar10 = (fVar4 - fVar10) * fVar6 + fVar10;
  fVar11 = (fVar5 - fVar11) * fVar8 + fVar11;
  *(ulonglong *)(lVar1 + 0x1020) = CONCAT44(fVar13,fVar12);
  *(ulonglong *)(lVar1 + 0x1028) = CONCAT44(fVar11,fVar10);
  fVar16 = (float)*(undefined8 *)(lVar1 + 0xf90);
  fVar17 = (float)((ulonglong)*(undefined8 *)(lVar1 + 0xf90) >> 0x20);
  fVar14 = (float)*(undefined8 *)(lVar1 + 0xf98);
  fVar15 = (float)((ulonglong)*(undefined8 *)(lVar1 + 0xf98) >> 0x20);
  fVar16 = (fVar7 - fVar16) * fVar2 + fVar16;
  fVar17 = (fVar9 - fVar17) * fVar3 + fVar17;
  fVar14 = (fVar4 - fVar14) * fVar2 + fVar14;
  fVar15 = (fVar5 - fVar15) * fVar3 + fVar15;
  *(ulonglong *)(lVar1 + 0x1030) = CONCAT44(fVar17,fVar16);
  *(ulonglong *)(lVar1 + 0x1038) = CONCAT44(fVar15,fVar14);
  *(undefined8 *)(lVar1 + 0x1040) = *(undefined8 *)(lVar1 + 0xf90);
  *(undefined8 *)(lVar1 + 0x1048) = *(undefined8 *)(lVar1 + 0xf98);
  fVar5 = (float)*(undefined8 *)(lVar1 + 0xe80);
  fVar4 = (float)((ulonglong)*(undefined8 *)(lVar1 + 0xe80) >> 0x20);
  fVar7 = (float)*(undefined8 *)(lVar1 + 0xe88);
  fVar9 = (float)((ulonglong)*(undefined8 *)(lVar1 + 0xe88) >> 0x20);
  *(ulonglong *)(lVar1 + 0x1050) =
       CONCAT44((fVar4 - fVar13) * fVar8 + fVar13,(fVar5 - fVar12) * fVar6 + fVar12);
  fVar3 = _UNK_1808ad9a4;
  fVar2 = _DAT_1808ad9a0;
  *(ulonglong *)(lVar1 + 0x1058) =
       CONCAT44((fVar9 - fVar11) * fVar8 + fVar11,(fVar7 - fVar10) * fVar6 + fVar10);
  *(ulonglong *)(lVar1 + 0x1060) =
       CONCAT44((fVar4 - fVar17) * fVar3 + fVar17,(fVar5 - fVar16) * fVar2 + fVar16);
  *(ulonglong *)(lVar1 + 0x1068) =
       CONCAT44((fVar9 - fVar15) * fVar3 + fVar15,(fVar7 - fVar14) * fVar2 + fVar14);
  *(undefined8 *)(lVar1 + 0x1110) = *(undefined8 *)(lVar1 + 0xf90);
  *(undefined8 *)(lVar1 + 0x1118) = *(undefined8 *)(lVar1 + 0xf98);
  *(undefined4 *)(lVar1 + 0x1120) = 0x3f169697;
  *(undefined4 *)(lVar1 + 0x1124) = 0x3f24a4a5;
  *(undefined4 *)(lVar1 + 0x1128) = 0x3f800000;
  *(undefined4 *)(lVar1 + 0x112c) = 0x3eb33333;
  *(undefined4 *)(lVar1 + 0x1170) = 0x3f169697;
  *(undefined4 *)(lVar1 + 0x1174) = 0x3f24a4a5;
  *(undefined4 *)(lVar1 + 0x1178) = 0x3f800000;
  *(undefined4 *)(lVar1 + 0x117c) = 0x3f800000;
  return;
}



/* ===== 180363b60 FUN_180363b60 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180363b60(longlong *param_1)

{
  uint *puVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined1 auStack_b8 [32];
  longlong local_98;
  longlong *local_90;
  longlong *local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_b8;
  iVar6 = (**(code **)(*param_1 + 0x38))(param_1,&DAT_180784368,&DAT_1811079e0);
  if ((-1 < iVar6) && (DAT_1811079e0 != (longlong *)0x0)) {
    (**(code **)(*DAT_1811079e0 + 0x140))(DAT_1811079e0,&DAT_1811079f8);
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    iVar6 = (**(code **)(*param_1 + 0x60))(param_1,&local_78);
    if (-1 < iVar6) {
      DAT_1811079d8 = local_48;
      cVar5 = FUN_180362920(param_1);
      lVar2 = DAT_180ca0a50;
      if (cVar5 != '\0') {
        local_90 = (longlong *)_malloc_base(0x2b48);
        if (DAT_180ca0a50 != 0) {
          FUN_1803ddee0(DAT_180ca0a50 + 0x29b4,*(undefined4 *)(DAT_180ca0a50 + 4));
        }
        local_80 = &local_98;
        local_88 = local_90;
        if (local_90 == (longlong *)0x0) {
          DAT_180ca0a50 = 0;
        }
        else {
          DAT_180ca0a50 = FUN_1803daac0(local_90,0);
        }
        FUN_1803dbcc0();
        if (lVar2 != 0) {
          DAT_180ca0a50 = lVar2;
        }
        lVar2 = DAT_180ca0a50;
        *(undefined8 *)(DAT_180ca0a50 + 0x48) = 0;
        *(undefined8 *)(lVar2 + 0x50) = 0;
        puVar1 = (uint *)(lVar2 + 0x28);
        *puVar1 = *puVar1 | 0x20;
        FUN_1803631e0();
        FUN_180363640();
        cVar5 = FUN_180426730(DAT_1811079d8);
        uVar4 = DAT_1811079f8;
        plVar3 = DAT_1811079e0;
        lVar2 = DAT_180ca0a50;
        if (cVar5 != '\0') {
          puVar7 = (undefined8 *)_malloc_base(0x80);
          lVar8 = DAT_180ca0a50;
          if (DAT_180ca0a50 != 0) {
            FUN_1803ddee0(DAT_180ca0a50 + 0x29b4,*(undefined4 *)(DAT_180ca0a50 + 4));
          }
          if (puVar7 == (undefined8 *)0x0) {
            puVar7 = (undefined8 *)0x0;
          }
          else {
            *puVar7 = 0;
            puVar7[1] = 0;
            puVar7[2] = 0;
            puVar7[3] = 0;
            puVar7[4] = 0;
            puVar7[5] = 0;
            puVar7[6] = 0;
            puVar7[7] = 0;
            puVar7[8] = 0;
            puVar7[9] = 0;
            puVar7[10] = 0;
            puVar7[0xb] = 0;
            puVar7[0xc] = 0;
            puVar7[0xd] = 0;
            puVar7[0xe] = 0;
            puVar7[0xf] = 0;
            *(undefined4 *)(puVar7 + 0xe) = 5000;
            *(undefined4 *)((longlong)puVar7 + 0x74) = 10000;
          }
          *(undefined8 **)(lVar2 + 0xd0) = puVar7;
          *(char **)(lVar2 + 0xc0) = "imgui_impl_dx11";
          *(uint *)(lVar2 + 0x2c) = *(uint *)(lVar2 + 0x2c) | 0x18;
          *(undefined4 *)(lVar8 + 0xc54) = 0x4000;
          *(undefined4 *)(lVar8 + 0xc50) = 0x4000;
          *(code **)(lVar8 + 0xc60) = _guard_check_icall;
          *(undefined1 **)(lVar8 + 0xc68) = &LAB_180425400;
          *(undefined1 **)(lVar8 + 0xc70) = &LAB_180425430;
          local_88 = (longlong *)0x0;
          local_80 = (longlong *)0x0;
          local_90 = (longlong *)0x0;
          iVar6 = (**(code **)*plVar3)(plVar3,&DAT_1808aa0b0,&local_88);
          if (((iVar6 == 0) &&
              (iVar6 = (**(code **)(*local_88 + 0x30))(local_88,&DAT_1808aa0c0,&local_80),
              iVar6 == 0)) &&
             (iVar6 = (**(code **)(*local_80 + 0x30))(local_80,&DAT_1808aa0d0,&local_90), iVar6 == 0
             )) {
            *puVar7 = plVar3;
            puVar7[1] = uVar4;
            puVar7[2] = local_90;
          }
          if (local_88 != (longlong *)0x0) {
            (**(code **)(*local_88 + 0x10))();
          }
          if (local_80 != (longlong *)0x0) {
            (**(code **)(*local_80 + 0x10))();
          }
          (**(code **)(*(longlong *)*puVar7 + 8))();
          (**(code **)(*(longlong *)puVar7[1] + 8))();
          DAT_180cd0fa7 = 1;
          return 1;
        }
      }
    }
  }
  return 0;
}



/* ===== 180363e70 FUN_180363e70 ===== */

void FUN_180363e70(void)

{
  int iVar1;
  
  iVar1 = FUN_1804e4d70(&DAT_1809f7610);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809f765c == 0x7fffffff) {
    DAT_1809f765c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  FUN_180365280();
  FUN_1804e4e90(&DAT_1809f7610);
  FUN_180366370();
  FUN_18000bb30();
  if (DAT_181107a40 != (longlong *)0x0) {
    (**(code **)(*DAT_181107a40 + 0x10))();
    DAT_181107a40 = (longlong *)0x0;
  }
  return;
}



/* ===== 180363f00 FUN_180363f00 ===== */

void FUN_180363f00(void)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  longlong lVar9;
  longlong *plVar10;
  
  lVar2 = DAT_180ca0a50;
  if (DAT_180cd0fa7 != '\0') {
    if (DAT_180ca0a50 == 0) {
      plVar10 = (longlong *)0x0;
    }
    else {
      plVar10 = *(longlong **)(DAT_180ca0a50 + 0xd0);
    }
    FUN_1804265d0();
    if ((longlong *)plVar10[2] != (longlong *)0x0) {
      (**(code **)(*(longlong *)plVar10[2] + 0x10))();
    }
    if ((longlong *)*plVar10 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar10 + 0x10))();
    }
    if ((longlong *)plVar10[1] != (longlong *)0x0) {
      (**(code **)(*(longlong *)plVar10[1] + 0x10))();
    }
    *(uint *)(lVar2 + 0x2c) = *(uint *)(lVar2 + 0x2c) & 0xffffffe7;
    lVar9 = DAT_180ca0a50;
    *(undefined8 *)(lVar2 + 0xc0) = 0;
    *(undefined8 *)(lVar2 + 0xd0) = 0;
    *(undefined8 *)(lVar2 + 0xc50) = 0;
    *(undefined8 *)(lVar2 + 0xc58) = 0;
    *(undefined8 *)(lVar2 + 0xc78) = 0;
    *(undefined8 *)(lVar2 + 0xc70) = 0;
    *(undefined8 *)(lVar2 + 0xc68) = 0;
    *(undefined8 *)(lVar2 + 0xc60) = 0;
    if (lVar9 != 0) {
      piVar7 = (int *)(lVar9 + 0x29c0 + (longlong)*(short *)(lVar9 + 0x29bc) * 8);
      if (*piVar7 != *(int *)(lVar9 + 4)) {
        iVar5 = *(short *)(lVar9 + 0x29bc) + 1;
        sVar4 = (short)iVar5 + (short)(iVar5 / 6) * -6;
        *(short *)(lVar9 + 0x29bc) = sVar4;
        piVar7 = (int *)(lVar9 + 0x29c0 + (longlong)sVar4 * 8);
        *piVar7 = *(int *)(lVar9 + 4);
        *(undefined4 *)(lVar9 + 0x29c4 + (longlong)sVar4 * 8) = 0;
      }
      *(short *)((longlong)piVar7 + 6) = *(short *)((longlong)piVar7 + 6) + 1;
      *(int *)(lVar9 + 0x29b8) = *(int *)(lVar9 + 0x29b8) + 1;
    }
    thunk_FUN_1805277b0(plVar10);
    lVar2 = DAT_180ca0a50;
    if (DAT_180ca0a50 == 0) {
      lVar9 = 0;
    }
    else {
      lVar9 = *(longlong *)(DAT_180ca0a50 + 200);
    }
    puVar1 = (undefined8 *)(DAT_180ca0a50 + 0xc10);
    if (*(HMODULE *)(lVar9 + 0x38) != (HMODULE)0x0) {
      FreeLibrary(*(HMODULE *)(lVar9 + 0x38));
    }
    lVar3 = DAT_180ca0a50;
    *(uint *)(lVar2 + 0x2c) = *(uint *)(lVar2 + 0x2c) & 0xfffffff8;
    *(undefined8 *)(lVar2 + 0xb8) = 0;
    *(undefined8 *)(lVar2 + 200) = 0;
    *puVar1 = FUN_1803f4bf0;
    *(code **)(lVar2 + 0xc18) = FUN_1803f4d40;
    *(code **)(lVar2 + 0xc28) = FUN_1803f4e10;
    *(code **)(lVar2 + 0xc38) = FUN_1803f4f80;
    *(undefined8 *)(lVar2 + 0xc20) = 0;
    *(undefined8 *)(lVar2 + 0xc30) = 0;
    *(undefined8 *)(lVar2 + 0xc40) = 0;
    if (lVar3 != 0) {
      iVar5 = *(int *)(lVar3 + 4);
      lVar2 = (longlong)*(short *)(lVar3 + 0x29bc) + 0x538;
      piVar7 = (int *)(lVar3 + lVar2 * 8);
      if (*(int *)(lVar3 + lVar2 * 8) != iVar5) {
        iVar6 = *(short *)(lVar3 + 0x29bc) + 1;
        sVar4 = (short)iVar6 + (short)(iVar6 / 6) * -6;
        *(short *)(lVar3 + 0x29bc) = sVar4;
        *(undefined4 *)(lVar3 + 0x29c4 + (longlong)sVar4 * 8) = 0;
        piVar7 = (int *)(lVar3 + ((longlong)sVar4 + 0x538) * 8);
        *piVar7 = iVar5;
      }
      *(short *)((longlong)piVar7 + 6) = *(short *)((longlong)piVar7 + 6) + 1;
      *(int *)(lVar3 + 0x29b8) = *(int *)(lVar3 + 0x29b8) + 1;
    }
    thunk_FUN_1805277b0(lVar9);
    lVar2 = DAT_180ca0a50;
    FUN_1803dc2d0();
    DAT_180ca0a50 = 0;
    if (lVar2 != 0) {
      FUN_1803db9a0(lVar2);
      lVar9 = DAT_180ca0a50;
      if (DAT_180ca0a50 != 0) {
        piVar7 = (int *)(DAT_180ca0a50 + 4);
        piVar8 = (int *)(DAT_180ca0a50 + 0x29c0 + (longlong)*(short *)(DAT_180ca0a50 + 0x29bc) * 8);
        if (*piVar8 != *piVar7) {
          iVar5 = *(short *)(DAT_180ca0a50 + 0x29bc) + 1;
          lVar3 = DAT_180ca0a50 + 0x29c0;
          sVar4 = (short)iVar5 + (short)(iVar5 / 6) * -6;
          *(short *)(DAT_180ca0a50 + 0x29bc) = sVar4;
          piVar8 = (int *)(lVar3 + (longlong)sVar4 * 8);
          *piVar8 = *piVar7;
          *(undefined4 *)(lVar9 + 0x29c4 + (longlong)sVar4 * 8) = 0;
        }
        *(short *)((longlong)piVar8 + 6) = *(short *)((longlong)piVar8 + 6) + 1;
        piVar7 = (int *)(lVar9 + 0x29b8);
        *piVar7 = *piVar7 + 1;
      }
      thunk_FUN_1805277b0(lVar2);
    }
    FUN_180365350();
    DAT_180cd0fda = 0;
    FUN_180029840(&DAT_1809f7660,&DAT_180700ea0,4);
    FUN_180366800();
    FUN_180368730();
    DAT_180cd107c = 0;
    DAT_180cd0fdf = 0;
    DAT_180cd0fdc = 0;
    DAT_180cd0fdb = 0;
    if (DAT_181107de0 != DAT_181107de8) {
      DAT_181107de8 = DAT_181107de0;
    }
    if (DAT_181107d90 != DAT_181107d98) {
      DAT_181107d98 = DAT_181107d90;
    }
    FUN_180369230();
    DAT_180cd107d = 0;
    FUN_18000bc90();
    DAT_180ca0cd8 = 0;
    FUN_180363e70();
    if (DAT_1811079f8 != (longlong *)0x0) {
      (**(code **)(*DAT_1811079f8 + 0x10))();
      DAT_1811079f8 = (longlong *)0x0;
    }
    if (DAT_1811079e0 != (longlong *)0x0) {
      (**(code **)(*DAT_1811079e0 + 0x10))();
      DAT_1811079e0 = (longlong *)0x0;
    }
    DAT_180cd0fa7 = '\0';
  }
  return;
}



/* ===== 180364290 FUN_180364290 ===== */

void FUN_180364290(void)

{
  char *pcVar1;
  undefined4 uVar2;
  
  DAT_181107a80 = 0;
  if (DAT_180ca0a50 != 0) {
    DAT_181107a80 = FUN_1803ddf50(**(undefined8 **)(DAT_180ca0a50 + 0x2058),1,"##Foreground");
    DAT_181107a78 = *(undefined4 *)(DAT_181107a80 + 0x20);
  }
  FUN_1803e1010();
  FUN_180364d10();
  uVar2 = DAT_1811079b4;
  FUN_1803695c0();
  (**(code **)(*DAT_1811079f8 + 0x108))(DAT_1811079f8,1,&DAT_181107a40,0,uVar2);
  pcVar1 = (char *)(**(longlong **)(DAT_180ca0a50 + 0x2058) + 0x60);
  if (*pcVar1 == '\0') {
    pcVar1 = (char *)0x0;
  }
  FUN_180425460(pcVar1);
  if (DAT_181107d90 != DAT_181107d98) {
    DAT_181107d98 = DAT_181107d90;
  }
  return;
}



/* ===== 180364360 FUN_180364360 ===== */

void FUN_180364360(longlong param_1)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  puVar4 = auStack_28;
  puVar5 = auStack_28;
  lVar2 = *(longlong *)(param_1 + 8);
  if (lVar2 == 0) {
    return;
  }
  if (0xfff < (*(longlong *)(param_1 + 0x18) - lVar2 & 0xfffffffffffffff0U)) {
    lVar3 = *(longlong *)(lVar2 + -8);
    if ((lVar2 - lVar3) - 8U < 0x20) goto LAB_1803643a7;
    pcVar1 = (code *)swi(0x29);
    lVar2 = (*pcVar1)(5);
    puVar4 = auStack_20;
  }
  lVar3 = lVar2;
  puVar5 = puVar4;
LAB_1803643a7:
  *(undefined8 *)(puVar5 + -8) = 0x1803643ac;
  thunk_FUN_1803d64e0(lVar3);
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}



/* ===== 1803643c0 FUN_1803643c0 ===== */

void FUN_1803643c0(int *param_1,int param_2,int param_3,int param_4,int param_5,float param_6)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  longlong lVar6;
  longlong lVar7;
  
  if (param_1[8] < param_3) {
    param_3 = param_1[8];
  }
  if (param_2 < 0) {
    param_2 = 0;
  }
  if (param_2 < param_3) {
    lVar7 = *(longlong *)(param_1 + 10);
    if (3 < param_3 - param_2) {
      do {
        lVar6 = (longlong)param_2;
        param_2 = param_2 + 4;
        *(float *)(lVar7 + lVar6 * 0x14) = param_6 * *(float *)(lVar7 + lVar6 * 0x14);
        *(float *)(lVar7 + 4 + lVar6 * 0x14) = param_6 * *(float *)(lVar7 + 4 + lVar6 * 0x14);
        *(float *)(lVar7 + 0x14 + lVar6 * 0x14) = param_6 * *(float *)(lVar7 + 0x14 + lVar6 * 0x14);
        *(float *)(lVar7 + 0x18 + lVar6 * 0x14) = param_6 * *(float *)(lVar7 + 0x18 + lVar6 * 0x14);
        *(float *)(lVar7 + 0x28 + lVar6 * 0x14) = param_6 * *(float *)(lVar7 + 0x28 + lVar6 * 0x14);
        *(float *)(lVar7 + 0x2c + lVar6 * 0x14) = param_6 * *(float *)(lVar7 + 0x2c + lVar6 * 0x14);
        *(float *)(lVar7 + 0x3c + lVar6 * 0x14) = param_6 * *(float *)(lVar7 + 0x3c + lVar6 * 0x14);
        *(float *)(lVar7 + 0x40 + lVar6 * 0x14) = param_6 * *(float *)(lVar7 + 0x40 + lVar6 * 0x14);
      } while (param_2 < param_3 + -3);
      if (param_3 <= param_2) goto LAB_1803644ce;
    }
    do {
      lVar6 = (longlong)param_2;
      param_2 = param_2 + 1;
      *(float *)(lVar7 + lVar6 * 0x14) = param_6 * *(float *)(lVar7 + lVar6 * 0x14);
      *(float *)(lVar7 + 4 + lVar6 * 0x14) = param_6 * *(float *)(lVar7 + 4 + lVar6 * 0x14);
    } while (param_2 < param_3);
  }
LAB_1803644ce:
  if (*param_1 < param_5) {
    param_5 = *param_1;
  }
  if (param_4 < 0) {
    param_4 = 0;
  }
  if (param_4 < param_5) {
    if (3 < param_5 - param_4) {
      do {
        lVar7 = (longlong)param_4;
        param_4 = param_4 + 4;
        pfVar1 = (float *)(*(longlong *)(param_1 + 2) + lVar7 * 0x48);
        fVar3 = pfVar1[1];
        fVar4 = pfVar1[2];
        fVar5 = pfVar1[3];
        pfVar2 = (float *)(*(longlong *)(param_1 + 2) + lVar7 * 0x48);
        *pfVar2 = *pfVar1 * param_6;
        pfVar2[1] = fVar3 * param_6;
        pfVar2[2] = fVar4 * param_6;
        pfVar2[3] = fVar5 * param_6;
        pfVar1 = (float *)(*(longlong *)(param_1 + 2) + 0x48 + lVar7 * 0x48);
        fVar3 = pfVar1[1];
        fVar4 = pfVar1[2];
        fVar5 = pfVar1[3];
        pfVar2 = (float *)(*(longlong *)(param_1 + 2) + 0x48 + lVar7 * 0x48);
        *pfVar2 = *pfVar1 * param_6;
        pfVar2[1] = fVar3 * param_6;
        pfVar2[2] = fVar4 * param_6;
        pfVar2[3] = fVar5 * param_6;
        pfVar1 = (float *)(*(longlong *)(param_1 + 2) + 0x90 + lVar7 * 0x48);
        fVar3 = pfVar1[1];
        fVar4 = pfVar1[2];
        fVar5 = pfVar1[3];
        pfVar2 = (float *)(*(longlong *)(param_1 + 2) + 0x90 + lVar7 * 0x48);
        *pfVar2 = *pfVar1 * param_6;
        pfVar2[1] = fVar3 * param_6;
        pfVar2[2] = fVar4 * param_6;
        pfVar2[3] = fVar5 * param_6;
        pfVar1 = (float *)(*(longlong *)(param_1 + 2) + 0xd8 + lVar7 * 0x48);
        fVar3 = pfVar1[1];
        fVar4 = pfVar1[2];
        fVar5 = pfVar1[3];
        pfVar2 = (float *)(*(longlong *)(param_1 + 2) + 0xd8 + lVar7 * 0x48);
        *pfVar2 = *pfVar1 * param_6;
        pfVar2[1] = fVar3 * param_6;
        pfVar2[2] = fVar4 * param_6;
        pfVar2[3] = fVar5 * param_6;
      } while (param_4 < param_5 + -3);
      if (param_5 <= param_4) {
        return;
      }
    }
    do {
      lVar7 = (longlong)param_4;
      param_4 = param_4 + 1;
      pfVar1 = (float *)(*(longlong *)(param_1 + 2) + lVar7 * 0x48);
      fVar3 = pfVar1[1];
      fVar4 = pfVar1[2];
      fVar5 = pfVar1[3];
      pfVar2 = (float *)(*(longlong *)(param_1 + 2) + lVar7 * 0x48);
      *pfVar2 = *pfVar1 * param_6;
      pfVar2[1] = fVar3 * param_6;
      pfVar2[2] = fVar4 * param_6;
      pfVar2[3] = fVar5 * param_6;
    } while (param_4 < param_5);
  }
  return;
}



/* ===== 180364590 FUN_180364590 ===== */

void FUN_180364590(void)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  float fVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  float *pfVar8;
  longlong lVar9;
  int *piVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  uVar6 = DAT_181107a74;
  lVar5 = DAT_180ca0a50;
  fVar4 = DAT_1808aceac;
  if (DAT_180ca0a50 == 0) {
    return;
  }
  bVar3 = false;
  piVar10 = *(int **)(DAT_180ca0a50 + 0x1478);
  piVar1 = piVar10 + (longlong)*(int *)(DAT_180ca0a50 + 0x1470) * 7;
  fVar11 = DAT_1809f7580;
  fVar12 = DAT_1809f7584;
  if ((longlong)*(int *)(DAT_180ca0a50 + 0x1470) * 0x1c != 0) {
    do {
      if ((*piVar10 == 1) && (DAT_181107a74 < (uint)piVar10[2])) {
        fVar12 = (float)piVar10[4];
        bVar3 = true;
        fVar11 = (float)piVar10[3];
        DAT_1809f7580 = fVar11;
        DAT_1809f7584 = fVar12;
      }
      piVar10 = piVar10 + 7;
    } while (piVar10 != piVar1);
  }
  if ((*(int *)(DAT_180ca0a50 + 4) + -1 <= DAT_1809f6f5c) && (DAT_181107a88 != 0)) {
    uVar7 = 0;
    if (DAT_181107a88 != 0) {
      do {
        lVar9 = uVar7 * 0x20;
        if ((&DAT_1809f7594)[lVar9] != '\0') goto LAB_1803647be;
        uVar7 = uVar7 + 1;
      } while (uVar7 < DAT_181107a88);
    }
    if (DAT_180cd0fd9 == '\0') {
      uVar7 = 0;
      if (DAT_181107a88 != 0) {
        do {
          lVar9 = uVar7 * 0x20;
          if ((&DAT_1809f7595)[lVar9] != '\0') goto LAB_1803647be;
          uVar7 = uVar7 + 1;
        } while (uVar7 < DAT_181107a88);
      }
      if ((DAT_1808aceac < fVar11) && (uVar7 = DAT_181107a88, DAT_1808aceac < fVar12)) {
        while (uVar7 != 0) {
          uVar7 = uVar7 - 1;
          for (pfVar8 = (float *)(&DAT_1809f7598)[uVar7 * 4];
              pfVar8 != (float *)(&DAT_1809f75a0)[uVar7 * 4]; pfVar8 = pfVar8 + 4) {
            if ((((*pfVar8 <= fVar11) && (pfVar8[1] <= fVar12)) && (fVar11 < pfVar8[2])) &&
               (fVar12 < pfVar8[3])) {
              fVar13 = (float)(&DAT_1809f7590)[uVar7 * 8];
              goto LAB_180364709;
            }
          }
        }
      }
    }
  }
  fVar13 = DAT_1808ac34c;
LAB_180364709:
  piVar10 = *(int **)(DAT_180ca0a50 + 0x1478);
  piVar1 = piVar10 + (longlong)*(int *)(DAT_180ca0a50 + 0x1470) * 7;
  if ((longlong)*(int *)(DAT_180ca0a50 + 0x1470) * 0x1c != 0) {
    do {
      if (((*piVar10 == 1) && (uVar6 < (uint)piVar10[2])) &&
         ((fVar4 < (float)piVar10[3] && (fVar4 < (float)piVar10[4])))) {
        piVar10[3] = (int)((float)piVar10[3] / fVar13);
        piVar10[4] = (int)((float)piVar10[4] / fVar13);
      }
      piVar10 = piVar10 + 7;
    } while (piVar10 != piVar1);
    fVar11 = DAT_1809f7580;
    fVar12 = DAT_1809f7584;
  }
  if (((!bVar3) && (fVar13 != DAT_1809f6fcc)) && ((fVar4 < fVar11 && (fVar4 < fVar12)))) {
    FUN_1803d7170(lVar5 + 0x28,fVar11 / fVar13,fVar12 / fVar13);
  }
  iVar2 = *(int *)(lVar5 + 0x1494);
  if (iVar2 != 0) {
    DAT_181107a74 = iVar2 - 1;
  }
  DAT_1809f6fcc = fVar13;
  return;
LAB_1803647be:
  fVar13 = *(float *)((longlong)&DAT_1809f7590 + lVar9);
  goto LAB_180364709;
}



/* ===== 1803647e0 FUN_1803647e0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1803647e0(float param_1)

{
  longlong lVar1;
  int *piVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 local_5c;
  
  lVar1 = DAT_180ca0a50;
  DAT_180cd0fd8 = 0;
  if (((DAT_180ca0a50 != 0) && (0.0 < param_1)) && (param_1 != DAT_1808ac34c)) {
    if (DAT_1809f6fc8 == *(int *)(DAT_180ca0a50 + 4)) {
      if (3 < DAT_181107a50) {
        DAT_180cd0fd8 = 0;
        return;
      }
    }
    else {
      DAT_181107a50 = 0;
      DAT_1809f6fc8 = *(int *)(DAT_180ca0a50 + 4);
    }
    lVar3 = **(longlong **)(DAT_180ca0a50 + 0x2058);
    DAT_181107a5c = *(float *)(lVar3 + 0x14);
    DAT_181107a60 = *(undefined4 *)(lVar3 + 0x18);
    DAT_181107a64 = *(undefined4 *)(lVar3 + 0x1c);
    DAT_181107a68 = *(float *)(DAT_180ca0a50 + 0xdd0);
    DAT_181107a6c = *(float *)(DAT_180ca0a50 + 0x1240);
    DAT_181107a70 = *(undefined4 *)(DAT_180ca0a50 + 0x1248);
    fVar5 = DAT_181107a5c / param_1;
    DAT_181107a58 = *(float *)(lVar3 + 0x10);
    *(float *)(lVar3 + 0x18) = param_1;
    *(float *)(lVar3 + 0x14) = fVar5;
    *(float *)(lVar3 + 0x1c) = param_1;
    fVar7 = *(float *)(lVar3 + 0x10) / param_1;
    *(float *)(lVar3 + 0x10) = fVar7;
    fVar4 = (float)*(undefined8 *)(lVar3 + 0xd0);
    fVar6 = (float)((ulonglong)*(undefined8 *)(lVar3 + 0xd0) >> 0x20);
    *(ulonglong *)(lVar3 + 0x20) =
         CONCAT44(fVar6 + (float)((ulonglong)*(undefined8 *)(lVar3 + 8) >> 0x20),
                  fVar4 + (float)*(undefined8 *)(lVar3 + 8));
    fVar7 = (fVar7 - fVar4) - *(float *)(lVar3 + 0xd8);
    fVar4 = 0.0;
    if (0.0 <= fVar7) {
      fVar4 = fVar7;
    }
    fVar5 = (fVar5 - fVar6) - *(float *)(lVar3 + 0xdc);
    *(float *)(lVar3 + 0x28) = fVar4;
    fVar4 = 0.0;
    if (0.0 <= fVar5) {
      fVar4 = fVar5;
    }
    *(float *)(lVar3 + 0x2c) = fVar4;
    FUN_1803fb7f0(lVar1 + 0x1218,DAT_181107a68 / param_1);
    fVar4 = DAT_181107a6c;
    *(uint *)(lVar1 + 0x1248) = *(uint *)(lVar1 + 0x1248) & 0xfffffffd;
    *(float *)(lVar1 + 0x1240) = fVar4 / param_1;
    lVar3 = lVar1;
    if (*(float *)(lVar1 + 0x120c) != param_1) {
      *(float *)(lVar1 + 0x120c) = param_1;
      FUN_1803e8770(0);
      lVar3 = DAT_180ca0a50;
    }
    _DAT_1809f7470 = 0;
    _DAT_1809f7478 = 0;
    DAT_1809f744c = local_5c;
    DAT_1809f7450 = (int *)0x0;
    _DAT_1809f7458 = 0;
    _DAT_1809f7460 = 0;
    DAT_1809f7468 = (int *)0x0;
    _DAT_1809f7444 = (ulonglong)*(uint *)(lVar1 + 0x14e8);
    DAT_1809f7440 = param_1;
    piVar2 = (int *)FUN_1803ddf50(**(undefined8 **)(lVar3 + 0x2058),0,"##Background");
    FUN_1803fbe60(piVar2);
    _DAT_1809f7458 = (ulonglong)(uint)piVar2[8];
    _DAT_1809f7460 = (ulonglong)(*piVar2 - 1);
    DAT_1809f7450 = piVar2;
    piVar2 = (int *)FUN_1803ddf50(**(undefined8 **)(DAT_180ca0a50 + 0x2058),1,"##Foreground");
    FUN_1803fbe60(piVar2);
    _DAT_1809f7470 = (ulonglong)(uint)piVar2[8];
    _DAT_1809f7478 = (ulonglong)(*piVar2 - 1);
    DAT_180cd0fd8 = 1;
    DAT_1809f7468 = piVar2;
  }
  return;
}



/* ===== 180364ab0 FUN_180364ab0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180364ab0(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  longlong lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  lVar2 = DAT_180ca0a50;
  if (DAT_180cd0fd8 != '\0') {
    DAT_1809f7448 = *(undefined4 *)(DAT_180ca0a50 + 0x14e8);
    DAT_180cd0fd8 = '\0';
    if (DAT_1809f7450 != (undefined4 *)0x0) {
      DAT_1809f745c = DAT_1809f7450[8];
      DAT_1809f7464 = *DAT_1809f7450;
      FUN_1803fbe60();
    }
    if (DAT_1809f7468 != (undefined4 *)0x0) {
      DAT_1809f7474 = DAT_1809f7468[8];
      DAT_1809f747c = *DAT_1809f7468;
      FUN_1803fbe60();
    }
    lVar11 = DAT_180ca0a50;
    lVar1 = **(longlong **)(DAT_180ca0a50 + 0x2058);
    *(float *)(lVar1 + 0x10) = DAT_181107a58;
    fVar12 = DAT_181107a58;
    *(undefined4 *)(lVar1 + 0x14) = DAT_181107a5c;
    *(float *)(lVar1 + 0x18) = DAT_181107a60;
    *(undefined4 *)(lVar1 + 0x1c) = DAT_181107a64;
    fVar14 = (float)*(undefined8 *)(lVar1 + 0xd0);
    fVar13 = (float)((ulonglong)*(undefined8 *)(lVar1 + 0xd0) >> 0x20);
    *(ulonglong *)(lVar1 + 0x20) =
         CONCAT44(fVar13 + (float)((ulonglong)*(undefined8 *)(lVar1 + 8) >> 0x20),
                  fVar14 + (float)*(undefined8 *)(lVar1 + 8));
    fVar14 = (fVar12 - fVar14) - *(float *)(lVar1 + 0xd8);
    fVar12 = 0.0;
    if (0.0 <= fVar14) {
      fVar12 = fVar14;
    }
    fVar14 = (*(float *)(lVar1 + 0x14) - fVar13) - *(float *)(lVar1 + 0xdc);
    *(float *)(lVar1 + 0x28) = fVar12;
    fVar12 = 0.0;
    if (0.0 <= fVar14) {
      fVar12 = fVar14;
    }
    *(float *)(lVar1 + 0x2c) = fVar12;
    FUN_1803fb7f0(lVar2 + 0x1218,DAT_181107a68);
    *(undefined4 *)(lVar2 + 0x1240) = DAT_181107a6c;
    *(undefined4 *)(lVar2 + 0x1248) = DAT_181107a70;
    fVar12 = DAT_181107a60;
    if (DAT_181107a60 <= 0.0) {
      fVar12 = DAT_1808ac34c;
    }
    if (*(float *)(lVar11 + 0x120c) != fVar12) {
      *(float *)(lVar11 + 0x120c) = fVar12;
      FUN_1803e8770(0);
    }
    lVar1 = DAT_181107a50;
    uVar10 = DAT_1809f747c;
    uVar9 = DAT_1809f7474;
    puVar8 = DAT_1809f7468;
    uVar7 = DAT_1809f7464;
    uVar6 = DAT_1809f745c;
    puVar5 = DAT_1809f7450;
    uVar3 = DAT_1809f7448;
    lVar11 = DAT_181107a50 * 0x40;
    lVar2 = DAT_181107a50 * 0x10;
    DAT_181107a50 = DAT_181107a50 + 1;
    *(undefined8 *)(&DAT_1809f7480 + lVar2) = _DAT_1809f7440;
    uVar4 = DAT_1809f744c;
    (&DAT_1809f7488)[lVar1 * 0x10] = uVar3;
    *(undefined4 *)(&DAT_1809f748c + lVar11) = uVar4;
    uVar3 = DAT_1809f7458;
    (&DAT_1809f7490)[lVar1 * 8] = puVar5;
    (&DAT_1809f7498)[lVar1 * 0x10] = uVar3;
    uVar3 = DAT_1809f7460;
    (&DAT_1809f749c)[lVar1 * 0x10] = uVar6;
    (&DAT_1809f74a0)[lVar1 * 0x10] = uVar3;
    uVar3 = DAT_1809f7470;
    (&DAT_1809f74a4)[lVar1 * 0x10] = uVar7;
    (&DAT_1809f74a8)[lVar1 * 8] = puVar8;
    (&DAT_1809f74b0)[lVar1 * 0x10] = uVar3;
    uVar3 = DAT_1809f7478;
    (&DAT_1809f74b4)[lVar1 * 0x10] = uVar9;
    (&DAT_1809f74b8)[lVar1 * 0x10] = uVar3;
    (&DAT_1809f74bc)[lVar1 * 0x10] = uVar10;
  }
  return;
}



/* ===== 180364d10 FUN_180364d10 ===== */

void FUN_180364d10(void)

{
  float fVar1;
  undefined4 *puVar2;
  longlong *plVar3;
  bool bVar4;
  longlong lVar5;
  ulonglong uVar6;
  bool bVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  longlong *plVar11;
  undefined8 **ppuVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  float fVar16;
  float fVar17;
  ulonglong local_res10;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 local_50;
  
  lVar5 = DAT_180ca0a50;
  if (DAT_180ca0a50 != 0) {
    if (((((DAT_181107a80 != 0) && (*(char *)(DAT_180ca0a50 + 0x8d) != '\0')) &&
         (DAT_1809f6fcc != DAT_1808ac34c)) &&
        ((fVar1 = *(float *)(DAT_180ca0a50 + 0x110), DAT_1808aceac < fVar1 &&
         (fVar17 = *(float *)(DAT_180ca0a50 + 0x114), DAT_1808aceac < fVar17)))) &&
       (DAT_181107a78 < *(int *)(DAT_181107a80 + 0x20))) {
      lVar14 = *(longlong *)(DAT_181107a80 + 0x28);
      fVar16 = DAT_1809f6fcc - DAT_1808ac34c;
      iVar10 = DAT_181107a78;
      do {
        lVar8 = (longlong)iVar10;
        iVar10 = iVar10 + 1;
        *(float *)(lVar14 + lVar8 * 0x14) = fVar1 * fVar16 + *(float *)(lVar14 + lVar8 * 0x14);
        *(float *)(lVar14 + 4 + lVar8 * 0x14) =
             fVar17 * fVar16 + *(float *)(lVar14 + 4 + lVar8 * 0x14);
      } while (iVar10 < *(int *)(DAT_181107a80 + 0x20));
    }
    lVar14 = 0;
    DAT_181107a80 = 0;
    DAT_181107a88 = 0;
    DAT_180cd0fd9 = 0;
    if ((DAT_1809f6fc8 == *(int *)(lVar5 + 4)) && (DAT_181107a50 != 0)) {
      bVar4 = false;
      local_res10 = 0;
      lVar8 = lVar5;
      bVar7 = false;
      if (DAT_181107a50 != 0) {
        do {
          bVar4 = bVar7;
          DAT_181107a88 = lVar14 + 1;
          lVar15 = lVar14 * 0x20;
          *(undefined2 *)(&DAT_1809f7594 + lVar15) = 0;
          (&DAT_1809f7590)[lVar14 * 8] = (&DAT_1809f7480)[local_res10 * 0x10];
          if ((&DAT_1809f7598)[lVar14 * 4] != (&DAT_1809f75a0)[lVar14 * 4]) {
            (&DAT_1809f75a0)[lVar14 * 4] = (&DAT_1809f7598)[lVar14 * 4];
          }
          plVar11 = *(longlong **)(lVar5 + 0x14a0);
          plVar3 = plVar11 + *(int *)(lVar5 + 0x1498);
          for (; plVar11 != plVar3; plVar11 = plVar11 + 1) {
            lVar9 = *plVar11;
            if ((((lVar9 != 0) && (*(int *)(lVar9 + 0x290) == *(int *)(lVar8 + 4))) &&
                ((int)(&DAT_1809f7484)[local_res10 * 0x10] <= (int)*(short *)(lVar9 + 0xe0))) &&
               ((int)*(short *)(lVar9 + 0xe0) < (int)(&DAT_1809f7488)[local_res10 * 0x10])) {
              puVar2 = *(undefined4 **)(lVar9 + 0x2c8);
              FUN_1803643c0(puVar2,0,puVar2[8],0,*puVar2,(&DAT_1809f7480)[local_res10 * 0x10]);
              if (*(char *)(lVar9 + 0xd4) == '\0') {
                fVar17 = (float)*(undefined8 *)(lVar9 + 0x28);
                fVar16 = (float)((ulonglong)*(undefined8 *)(lVar9 + 0x28) >> 0x20);
                fVar1 = (float)(&DAT_1809f7480)[local_res10 * 0x10];
                local_58 = (undefined8 *)CONCAT44(fVar16 * fVar1,fVar17 * fVar1);
                local_50 = CONCAT44(((float)((ulonglong)*(undefined8 *)(lVar9 + 0x30) >> 0x20) +
                                    fVar16) * fVar1,
                                    ((float)*(undefined8 *)(lVar9 + 0x30) + fVar17) * fVar1);
                FUN_18025d4d0(&DAT_1809f7598 + lVar14 * 4);
                lVar8 = DAT_180ca0a50;
              }
            }
          }
          ppuVar12 = &local_68;
          local_68 = &DAT_1809f7490 + local_res10 * 8;
          local_60 = &DAT_1809f74a8 + local_res10 * 8;
          do {
            plVar3 = *ppuVar12;
            if (*plVar3 != 0) {
              FUN_1803643c0(*plVar3,(int)plVar3[1],*(undefined4 *)((longlong)plVar3 + 0xc),
                            (int)plVar3[2],*(undefined4 *)((longlong)plVar3 + 0x14),
                            (&DAT_1809f7480)[local_res10 * 0x10]);
            }
            uVar6 = DAT_181107a50;
            ppuVar12 = ppuVar12 + 1;
          } while (ppuVar12 != &local_58);
          if (((*(int *)(lVar5 + 0x1578) != 0) &&
              (lVar14 = *(longlong *)(lVar5 + 0x15a0), lVar14 != 0)) &&
             (((*(int *)(lVar14 + 0x290) == *(int *)(lVar8 + 4) &&
               (((int)(&DAT_1809f7484)[local_res10 * 0x10] <= (int)*(short *)(lVar14 + 0xe0) &&
                ((int)*(short *)(lVar14 + 0xe0) < (int)(&DAT_1809f7488)[local_res10 * 0x10])))) ||
              ((lVar14 = *(longlong *)(lVar14 + 0x3c0), lVar14 != 0 &&
               (((*(int *)(lVar14 + 0x290) == *(int *)(lVar8 + 4) &&
                 ((int)(&DAT_1809f7484)[local_res10 * 0x10] <= (int)*(short *)(lVar14 + 0xe0))) &&
                ((int)*(short *)(lVar14 + 0xe0) < (int)(&DAT_1809f7488)[local_res10 * 0x10]))))))))
          {
            (&DAT_1809f7594)[lVar15] = 1;
            bVar4 = true;
          }
          lVar9 = *(longlong *)(lVar5 + 0x2028);
          lVar13 = (longlong)*(int *)(lVar5 + 0x2020) * 0x58 + lVar9;
          lVar14 = DAT_181107a88;
          for (; DAT_181107a88 = lVar14, lVar9 != lVar13; lVar9 = lVar9 + 0x58) {
            lVar14 = *(longlong *)(lVar9 + 8);
            if (((lVar14 != 0) && (*(int *)(lVar14 + 0x290) == *(int *)(lVar8 + 4))) &&
               (((int)(&DAT_1809f7484)[local_res10 * 0x10] <= (int)*(short *)(lVar14 + 0xe0) &&
                ((int)*(short *)(lVar14 + 0xe0) < (int)(&DAT_1809f7488)[local_res10 * 0x10])))) {
              (&DAT_1809f7595)[lVar15] = 1;
            }
            lVar14 = DAT_181107a88;
          }
          local_res10 = local_res10 + 1;
          bVar7 = bVar4;
        } while (local_res10 < uVar6);
      }
      if (((*(int *)(lVar5 + 0x1578) == 0) || (*(longlong *)(lVar5 + 0x15a0) == 0)) || (bVar4)) {
        DAT_180cd0fd9 = 0;
      }
      else {
        DAT_180cd0fd9 = 1;
      }
      DAT_1809f6f5c = *(undefined4 *)(lVar5 + 4);
    }
    DAT_181107a50 = 0;
  }
  return;
}



/* ===== 1803651b0 FUN_1803651b0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_1803651b0(void)

{
  LARGE_INTEGER local_res8 [4];
  
  if (DAT_181116290 == 0) {
    QueryPerformanceFrequency((LARGE_INTEGER *)&DAT_181116290);
    QueryPerformanceCounter((LARGE_INTEGER *)&DAT_181116298);
  }
  local_res8[0].QuadPart = 0;
  QueryPerformanceCounter(local_res8);
  return (double)(local_res8[0].QuadPart - _DAT_181116298) / (double)DAT_181116290;
}



/* ===== 180365220 FUN_180365220 ===== */

void FUN_180365220(longlong *param_1)

{
  if ((longlong *)param_1[1] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[1] + 0x10))();
    param_1[1] = 0;
  }
  if ((longlong *)*param_1 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_1 + 0x10))();
    *param_1 = 0;
  }
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  return;
}



/* ===== 180365280 FUN_180365280 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180365280(void)

{
  if (DAT_181107ae8 != (longlong *)0x0) {
    (**(code **)(*DAT_181107ae8 + 0x10))();
    DAT_181107ae8 = (longlong *)0x0;
  }
  if (DAT_181107ae0 != (longlong *)0x0) {
    (**(code **)(*DAT_181107ae0 + 0x10))();
    DAT_181107ae0 = (longlong *)0x0;
  }
  _DAT_181107af0 = 0;
  uRam0000000181107af8 = 0;
  _DAT_181107b1c = 0;
  _DAT_181107b00 = 0;
  uRam0000000181107b04 = 0;
  uRam0000000181107b08 = 0;
  _DAT_181107b0c = 0;
  uRam0000000181107b14 = 0;
  if (DAT_181107aa8 != (longlong *)0x0) {
    (**(code **)(*DAT_181107aa8 + 0x10))();
    DAT_181107aa8 = (longlong *)0x0;
  }
  if (DAT_181107aa0 != (longlong *)0x0) {
    (**(code **)(*DAT_181107aa0 + 0x10))();
    DAT_181107aa0 = (longlong *)0x0;
  }
  _DAT_181107adc = 0;
  _DAT_181107ab0 = 0;
  uRam0000000181107ab8 = 0;
  _DAT_181107ac0 = 0;
  uRam0000000181107ac8 = 0;
  _DAT_181107acc = 0;
  uRam0000000181107ad0 = 0;
  uRam0000000181107ad4 = 0;
  return;
}



/* ===== 180365350 FUN_180365350 ===== */

void FUN_180365350(void)

{
  FUN_180365280();
  if (DAT_181107b50 != (longlong *)0x0) {
    (**(code **)(*DAT_181107b50 + 0x10))();
    DAT_181107b50 = (longlong *)0x0;
  }
  if (DAT_181107b48 != (longlong *)0x0) {
    (**(code **)(*DAT_181107b48 + 0x10))();
    DAT_181107b48 = (longlong *)0x0;
  }
  if (DAT_181107b40 != (longlong *)0x0) {
    (**(code **)(*DAT_181107b40 + 0x10))();
    DAT_181107b40 = (longlong *)0x0;
  }
  if (DAT_181107b38 != (longlong *)0x0) {
    (**(code **)(*DAT_181107b38 + 0x10))();
    DAT_181107b38 = (longlong *)0x0;
  }
  if (DAT_181107a90 != (longlong *)0x0) {
    (**(code **)(*DAT_181107a90 + 0x10))();
    DAT_181107a90 = (longlong *)0x0;
  }
  if (DAT_181107b20 != (longlong *)0x0) {
    (**(code **)(*DAT_181107b20 + 0x10))();
    DAT_181107b20 = (longlong *)0x0;
  }
  if (DAT_181107a98 != (longlong *)0x0) {
    (**(code **)(*DAT_181107a98 + 0x10))();
    DAT_181107a98 = (longlong *)0x0;
  }
  DAT_181107b28 = 0;
  return;
}



/* ===== 180365420 FUN_180365420 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180365420(longlong *param_1)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_78 [32];
  char *local_58;
  undefined4 local_50;
  undefined8 *local_48;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_180919500 ^ (ulonglong)auStack_78;
  if ((DAT_181107b28 == param_1) && (DAT_181107b20 != 0)) {
    return 1;
  }
  if (DAT_180cd0fda != '\0') {
    return 0;
  }
  FUN_180365350();
  local_48 = &DAT_1809f7660;
  local_50 = 0x8000;
  local_58 = "vs_5_0";
  plVar5 = (longlong *)
           FUN_18036e5f0("\ncbuffer fx_constants : register(b0) {\n    float4 screen;\n    float4 rain;\n    float4 fog;\n    float4 flags;\n};\n\nTexture2D scene_texture : register(t0);\nSamplerState scene_sampler : register(s0);\n\nstruct vs_output {\n    float4 position : SV_Position;\n    float2 uv : TEXCOORD0;\n};\n\nvs_output vs_main(uint id : SV_VertexID) {\n    vs_output output;\n    float2 uv = float2((id << 1) & 2, id & 2);\n    output.uv = uv;\n    output.position = float4(uv * float2(2.0, -2.0) + float2(-1.0, 1.0), 0.0, 1.0);\n    return output;\n}\n\nfloat3 n13(float p) {\n    float3 p3 = frac(p * float3(0.1031, 0.11369, 0.13787));\n    p3 += dot(p3, p3.yzx + 19.19);\n    return frac(float3((p3.x + p3.y) * p3.z, (p3.x + p3.z) * p3.y, (p3.y + p3.z) * p3.x));\n}\n\nfloat n1(float t) {\n    return frac(sin(t * 12345.564) * 7658.76);\n}\n\nfloat saw(float b, float t) {\n    return smoothstep(0.0, b, t) * smoothstep(1.0, b, t);\n}\n\nfloat2 drop_layer(float2 uv, float t) {\n    float2 uv0 = uv;\n    uv.y += t * 0.75;\n    float2 a = float2(6.0, 1.0);\n    float2 grid = a * 2.0;\n    float2 id = floor(uv * grid);\n    uv.y += n1(id.x);\n    id = floor(uv * grid);\n    float3 n = n13(id.x * 35.2 + id.y * 2376.1);\n    float2 st = frac(uv * grid) - float2(0.5, 0.0);\n    float x = n.x - 0.5;\n    float y = uv0.y * 20.0;\n    float wiggle = sin(y + sin(y));\n    x += wiggle * (0.5 - abs(x)) * (n.z - 0.5);\n    x *= 0.7;\n    float ti = frac(t + n.z);\n    y = (saw(0.85, ti) - 0.5) * 0.9 + 0.5;\n    float d = length((st - float2(x, y)) * a.yx);\n    float main_drop = smoothstep(0.4, 0.0, d);\n    float r = sqrt(smoothstep(1.0, y, st.y));\n    float cd = abs(st.x - x);\n    float trail = smoothstep(0.23 * r, 0.15 * r * r, cd);\n    float trail_front = smoothstep(-0.02, 0.02, st.y - y);\n    trail *= trail_front * r * r;\n    y = frac(uv0.y * 10.0) + (st.y - 0.5);\n    float droplets = smoothstep(0.3, 0.0, length(st - float2(x, y)));\n    return float2(main_drop + droplets * r * trail_front, trail);\n}\n\nfloat static_drops(float2 uv, float t) {\n    uv *= 40.0;\n    float2 id = floor(uv);\n    uv = frac(u..." /* TRUNCATED STRING LITERAL */
                         ,0x123c,"neverwin_postfx","vs_main");
  if (plVar5 == (longlong *)0x0) {
    DAT_180cd0fda = 1;
    return 0;
  }
  local_48 = &DAT_1809f7660;
  local_50 = 0x8000;
  local_58 = "ps_5_0";
  plVar6 = (longlong *)
           FUN_18036e5f0("\ncbuffer fx_constants : register(b0) {\n    float4 screen;\n    float4 rain;\n    float4 fog;\n    float4 flags;\n};\n\nTexture2D scene_texture : register(t0);\nSamplerState scene_sampler : register(s0);\n\nstruct vs_output {\n    float4 position : SV_Position;\n    float2 uv : TEXCOORD0;\n};\n\nvs_output vs_main(uint id : SV_VertexID) {\n    vs_output output;\n    float2 uv = float2((id << 1) & 2, id & 2);\n    output.uv = uv;\n    output.position = float4(uv * float2(2.0, -2.0) + float2(-1.0, 1.0), 0.0, 1.0);\n    return output;\n}\n\nfloat3 n13(float p) {\n    float3 p3 = frac(p * float3(0.1031, 0.11369, 0.13787));\n    p3 += dot(p3, p3.yzx + 19.19);\n    return frac(float3((p3.x + p3.y) * p3.z, (p3.x + p3.z) * p3.y, (p3.y + p3.z) * p3.x));\n}\n\nfloat n1(float t) {\n    return frac(sin(t * 12345.564) * 7658.76);\n}\n\nfloat saw(float b, float t) {\n    return smoothstep(0.0, b, t) * smoothstep(1.0, b, t);\n}\n\nfloat2 drop_layer(float2 uv, float t) {\n    float2 uv0 = uv;\n    uv.y += t * 0.75;\n    float2 a = float2(6.0, 1.0);\n    float2 grid = a * 2.0;\n    float2 id = floor(uv * grid);\n    uv.y += n1(id.x);\n    id = floor(uv * grid);\n    float3 n = n13(id.x * 35.2 + id.y * 2376.1);\n    float2 st = frac(uv * grid) - float2(0.5, 0.0);\n    float x = n.x - 0.5;\n    float y = uv0.y * 20.0;\n    float wiggle = sin(y + sin(y));\n    x += wiggle * (0.5 - abs(x)) * (n.z - 0.5);\n    x *= 0.7;\n    float ti = frac(t + n.z);\n    y = (saw(0.85, ti) - 0.5) * 0.9 + 0.5;\n    float d = length((st - float2(x, y)) * a.yx);\n    float main_drop = smoothstep(0.4, 0.0, d);\n    float r = sqrt(smoothstep(1.0, y, st.y));\n    float cd = abs(st.x - x);\n    float trail = smoothstep(0.23 * r, 0.15 * r * r, cd);\n    float trail_front = smoothstep(-0.02, 0.02, st.y - y);\n    trail *= trail_front * r * r;\n    y = frac(uv0.y * 10.0) + (st.y - 0.5);\n    float droplets = smoothstep(0.3, 0.0, length(st - float2(x, y)));\n    return float2(main_drop + droplets * r * trail_front, trail);\n}\n\nfloat static_drops(float2 uv, float t) {\n    uv *= 40.0;\n    float2 id = floor(uv);\n    uv = frac(u..." /* TRUNCATED STRING LITERAL */
                         ,0x123c,"neverwin_postfx","ps_main");
  if (plVar6 == (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x10))();
    DAT_180cd0fda = 1;
    return 0;
  }
  lVar1 = *param_1;
  uVar7 = (**(code **)(*plVar5 + 0x20))(plVar5);
  uVar8 = (**(code **)(*plVar5 + 0x18))(plVar5);
  local_58 = (char *)&DAT_181107a98;
  iVar4 = (**(code **)(lVar1 + 0x60))(param_1,uVar8,uVar7,0);
  if (-1 < iVar4) {
    lVar1 = *param_1;
    uVar7 = (**(code **)(*plVar6 + 0x20))(plVar6);
    uVar8 = (**(code **)(*plVar6 + 0x18))(plVar6);
    local_58 = (char *)&DAT_181107b20;
    iVar4 = (**(code **)(lVar1 + 0x78))(param_1,uVar8,uVar7,0);
    if (-1 < iVar4) {
      bVar2 = true;
      goto LAB_1803655b4;
    }
  }
  bVar2 = false;
LAB_1803655b4:
  (**(code **)(*plVar5 + 0x10))(plVar5);
  (**(code **)(*plVar6 + 0x10))(plVar6);
  local_28 = 0;
  local_38 = 0x40;
  local_34 = 2;
  local_30 = 4;
  local_2c = 0x10000;
  if (((bVar2) &&
      (iVar4 = (**(code **)(*param_1 + 0x18))(param_1,&local_38,0,&DAT_181107a90), -1 < iVar4)) &&
     (cVar3 = FUN_18036e1f0(&DAT_181107b38,param_1), cVar3 != '\0')) {
    DAT_181107b28 = param_1;
    FUN_180029840(&DAT_1809f7660,"ready",5);
    return 1;
  }
  FUN_180365350();
  FUN_180029840(&DAT_1809f7660,"failed to create d3d objects",0x1c);
  DAT_180cd0fda = 1;
  return 0;
}



/* ===== 1803656a0 FUN_1803656a0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_1803656a0(longlong *param_1,longlong *param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  undefined8 uVar2;
  size_t sVar3;
  char *pcVar4;
  bool bVar5;
  undefined1 auStack_b8 [32];
  uint local_98 [2];
  int local_90 [7];
  int local_74;
  uint local_70;
  undefined4 local_6c;
  int local_68;
  undefined8 local_64;
  undefined4 local_5c;
  uint local_58;
  undefined4 local_54;
  uint local_50;
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_b8;
  if ((((*param_2 == 0) || ((int)param_2[2] != param_3)) ||
      (*(int *)((longlong)param_2 + 0x14) != param_4)) ||
     (((int)param_2[4] != param_5 || (*(int *)((longlong)param_2 + 0x3c) != param_6)))) {
    FUN_180365220(param_2);
    local_98[0] = 0;
    iVar1 = (**(code **)(*param_1 + 0xe8))(param_1,param_6,local_98);
    local_50 = 0;
    if (iVar1 < 0) {
      local_70 = 1;
    }
    else {
      bVar5 = (local_98[0] & 0x6000) == 0x6000;
      local_50 = (uint)bVar5;
      local_70 = (uint)!bVar5;
    }
    local_58 = local_50 << 5 | 8;
    local_64 = 1;
    local_54 = 0;
    local_6c = 1;
    local_68 = param_5;
    local_5c = 0;
    local_90[6] = param_3;
    local_74 = param_4;
    iVar1 = (**(code **)(*param_1 + 0x28))(param_1,local_90 + 6,0,param_2);
    if ((iVar1 < 0) || (*param_2 == 0)) {
      pcVar4 = "failed to create scene copy";
    }
    else {
      local_90[4] = 0;
      local_90[5] = 0;
      local_90[0] = param_6;
      local_90[1] = 4;
      local_90[2] = 0;
      local_90[3] = 0xffffffff;
      iVar1 = (**(code **)(*param_1 + 0x38))(param_1,*param_2,local_90,param_2 + 1);
      if ((-1 < iVar1) && (param_2[1] != 0)) {
        (**(code **)(*(longlong *)*param_2 + 0x50))((longlong *)*param_2,param_2 + 2);
        pcVar4 = "ready (no mips, tap blur)";
        *(int *)((longlong)param_2 + 0x3c) = param_6;
        if (1 < *(uint *)(param_2 + 3)) {
          pcVar4 = "ready";
        }
        sVar3 = strlen(pcVar4);
        FUN_180029840(&DAT_1809f7660,pcVar4,sVar3);
        return 1;
      }
      if ((longlong *)*param_2 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*param_2 + 0x10))();
        *param_2 = 0;
      }
      pcVar4 = "failed to create scene view";
    }
    FUN_180029840(&DAT_1809f7660,pcVar4,0x1b);
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



/* ===== 180365890 FUN_180365890 ===== */

undefined8 FUN_180365890(void)

{
  char *pcVar1;
  longlong lVar2;
  
  if (DAT_1809ebfb8 == 0xfffffffe) {
    pcVar1 = &DAT_18093cff8;
  }
  else if (DAT_1809ebfb8 < 0x30) {
    pcVar1 = &DAT_18093d60c + (longlong)(int)DAT_1809ebfb8 * 0x614;
  }
  else {
    pcVar1 = &DAT_18093ca24;
  }
  if (*pcVar1 != '\0') {
    lVar2 = FUN_1800f1c60();
    if (*(char *)(lVar2 + 0x234) == '\0') {
      return 1;
    }
  }
  return 0;
}



/* ===== 1803658f0 FUN_1803658f0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1803658f0(longlong *param_1,longlong param_2,undefined8 param_3,char param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  double dVar6;
  char cVar7;
  int iVar8;
  char *pcVar9;
  longlong lVar10;
  char *pcVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auStack_3d8 [32];
  float local_3b8;
  float **local_3b0;
  undefined8 local_3a8;
  undefined8 local_3a0;
  char local_398;
  float local_394;
  float *local_390;
  float *local_388;
  float *local_380;
  float *local_378;
  undefined8 local_370;
  undefined8 local_368;
  float *local_360;
  undefined8 uStack_358;
  undefined4 local_348 [2];
  undefined8 local_340;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined4 local_2d0;
  undefined8 local_2c8;
  undefined4 local_2c0;
  undefined4 local_2bc;
  undefined1 local_2b8 [384];
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  ulonglong local_e8;
  
  local_e8 = DAT_180919500 ^ (ulonglong)auStack_3d8;
  if (DAT_1809ebfb8 == 0xfffffffe) {
    local_388 = (float *)&DAT_18093cfec;
    pcVar11 = &DAT_18093cfd8;
    local_380 = (float *)&DAT_18093cff4;
    pcVar9 = &DAT_18093cff0;
    pfVar14 = (float *)&DAT_18093cfe8;
    pfVar15 = (float *)&DAT_18093cfdc;
    pfVar12 = (float *)&DAT_18093cfe0;
    pfVar13 = (float *)&DAT_18093cfe4;
    local_378 = (float *)&DAT_18093cffc;
  }
  else if (DAT_1809ebfb8 < 0x30) {
    lVar10 = (longlong)(int)DAT_1809ebfb8 * 0x614;
    local_388 = (float *)(&DAT_18093d600 + lVar10);
    pcVar11 = &DAT_18093d5ec + lVar10;
    local_380 = (float *)(&DAT_18093d608 + lVar10);
    pcVar9 = &DAT_18093d604 + lVar10;
    pfVar14 = (float *)(&DAT_18093d5fc + lVar10);
    pfVar15 = (float *)(&DAT_18093d5f0 + lVar10);
    pfVar12 = (float *)(&DAT_18093d5f4 + lVar10);
    pfVar13 = (float *)(&DAT_18093d5f8 + lVar10);
    local_378 = (float *)(lVar10 + 0x18093d610);
  }
  else {
    local_388 = (float *)&DAT_18093ca18;
    pcVar11 = &DAT_18093ca04;
    local_380 = (float *)&DAT_18093ca20;
    pcVar9 = &DAT_18093ca1c;
    local_378 = (float *)&DAT_18093ca28;
    pfVar14 = (float *)&DAT_18093ca14;
    pfVar15 = (float *)&DAT_18093ca08;
    pfVar12 = (float *)&DAT_18093ca0c;
    pfVar13 = (float *)&DAT_18093ca10;
  }
  if ((*pcVar9 == '\0') || (local_398 = '\x01', param_4 == '\0')) {
    local_398 = '\0';
  }
  local_370 = param_3;
  if (((1 < *(uint *)(param_2 + 0x18)) && (*pcVar11 != '\0')) && (0.0 < *pfVar14)) {
    (**(code **)(*param_1 + 0x1b0))(param_1,*(undefined8 *)(param_2 + 8));
  }
  local_3b0 = &local_360;
  local_390 = (float *)CONCAT44(local_390._4_4_,*(undefined4 *)(param_2 + 0x10));
  local_394 = *(float *)(param_2 + 0x14);
  local_360 = (float *)0x0;
  uStack_358 = 0;
  local_3b8 = 0.0;
  iVar8 = (**(code **)(*param_1 + 0x70))(param_1,DAT_181107a90,0,4);
  fVar21 = DAT_1808ac34c;
  if (-1 < iVar8) {
    fVar24 = (float)((ulonglong)local_390 & 0xffffffff);
    fVar25 = (float)(uint)local_394;
    local_390 = local_360;
    fVar23 = DAT_1808ac34c / fVar25;
    fVar22 = DAT_1808ac34c / fVar24;
    FUN_1803651b0();
    dVar6 = (double)FUN_18051f830();
    fVar19 = *pfVar15;
    fVar20 = *pfVar12;
    fVar1 = *pfVar13;
    fVar2 = *local_388;
    fVar3 = *pfVar14;
    fVar18 = (float)dVar6;
    fVar4 = *local_380;
    local_394 = *local_378;
    if (*pcVar11 == '\0') {
      fVar17 = 0.0;
    }
    else {
      fVar17 = fVar21;
    }
    if (local_398 == '\0') {
      fVar16 = 0.0;
    }
    else {
      fVar16 = fVar21;
    }
    cVar7 = FUN_180365890();
    if (cVar7 == '\0') {
      fVar21 = 0.0;
    }
    uVar5 = *(uint *)(param_2 + 0x18);
    *local_390 = fVar24;
    local_390[1] = fVar25;
    local_390[2] = fVar22;
    local_390[3] = fVar23;
    local_390[4] = fVar18;
    local_390[5] = fVar19;
    local_390[6] = fVar20;
    local_390[7] = fVar1;
    local_390[8] = fVar3;
    local_390[9] = fVar2;
    local_390[10] = fVar4;
    local_390[0xb] = local_394;
    local_390[0xc] = fVar17;
    local_390[0xd] = fVar16;
    local_390[0xe] = fVar21;
    local_390[0xf] = (float)uVar5;
    (**(code **)(*param_1 + 0x78))(param_1,DAT_181107a90,0);
    local_2bc = 0x10;
    local_348[0] = 0;
    local_338 = 0;
    uStack_330 = 0;
    local_328 = 0;
    uStack_320 = 0;
    local_318 = 0;
    uStack_310 = 0;
    local_308 = 0;
    uStack_300 = 0;
    local_2f8 = 0;
    uStack_2f0 = 0;
    local_2e0 = 0;
    uStack_2d8 = 0;
    local_340 = 0;
    local_2e8 = 0;
    local_2d0 = 0;
    local_2c8 = 0;
    local_2c0 = 0;
    FUN_180540170(local_2b8,0,0x180);
    local_f8 = 0;
    local_138 = 0;
    uStack_130 = 0;
    local_128 = 0;
    uStack_120 = 0;
    local_118 = 0;
    uStack_110 = 0;
    local_108 = 0;
    uStack_100 = 0;
    FUN_18036dda0(local_348,param_1);
    local_3a0 = DAT_181107a90;
    local_3a8 = DAT_181107b20;
    local_3b0 = (float **)DAT_181107a98;
    local_3b8 = fVar25;
    FUN_18036e3d0(&DAT_181107b38,param_1,local_370,fVar24);
    (**(code **)(*param_1 + 0x40))(param_1,0,1,param_2 + 8);
    (**(code **)(*param_1 + 0x68))(param_1,3,0);
    local_368 = 0;
    (**(code **)(*param_1 + 0x40))(param_1,0,1,&local_368);
    FUN_18036df30(local_348,param_1);
  }
  return;
}



/* ===== 180365e00 FUN_180365e00 ===== */

undefined1 FUN_180365e00(void)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  if (DAT_1809ebfb8 == 0xfffffffe) {
    pcVar3 = &DAT_18093cfd8;
    pcVar2 = &DAT_18093cff0;
  }
  else if (DAT_1809ebfb8 < 0x30) {
    pcVar3 = &DAT_18093d5ec + (longlong)(int)DAT_1809ebfb8 * 0x614;
    pcVar2 = &DAT_18093d604 + (longlong)(int)DAT_1809ebfb8 * 0x614;
  }
  else {
    pcVar3 = &DAT_18093ca04;
    pcVar2 = &DAT_18093ca1c;
  }
  if ((*pcVar3 == '\0') && (*pcVar2 == '\0')) {
    cVar1 = FUN_180365890();
    if (cVar1 == '\0') {
      return 0;
    }
  }
  return 1;
}



/* ===== 180365e80 FUN_180365e80 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180365e80(void)

{
  double dVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  double dVar6;
  char cVar7;
  int iVar8;
  char *pcVar9;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_b0;
  longlong *local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  longlong *local_88;
  undefined *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined8 uStack_54;
  ulonglong local_48;
  
  lVar5 = DAT_181107a40;
  plVar4 = DAT_1811079f8;
  lVar3 = DAT_1811079e0;
  plVar2 = DAT_1811079b8;
  local_48 = DAT_180919500 ^ (ulonglong)auStack_d8;
  if (DAT_1811079e0 == 0) {
    return;
  }
  if (DAT_1811079f8 == (longlong *)0x0) {
    return;
  }
  if (DAT_1811079b8 == (longlong *)0x0) {
    return;
  }
  if (DAT_181107a40 == 0) {
    return;
  }
  cVar7 = FUN_180365e00();
  dVar6 = DAT_181107b30;
  if (cVar7 == '\0') {
    return;
  }
  dVar1 = (double)FUN_1803651b0();
  if (dVar1 - dVar6 < DAT_1808ac458) {
    return;
  }
  if (DAT_1809ebfb8 == 0xfffffffe) {
    pcVar9 = &DAT_18093cfd8;
  }
  else if (DAT_1809ebfb8 < 0x30) {
    pcVar9 = &DAT_18093d5ec + (longlong)(int)DAT_1809ebfb8 * 0x614;
  }
  else {
    pcVar9 = &DAT_18093ca04;
  }
  if ((*pcVar9 == '\0') && (cVar7 = FUN_180365890(), cVar7 == '\0')) {
    return;
  }
  local_80 = &DAT_1809f7610;
  iVar8 = FUN_1804e4d70(&DAT_1809f7610);
  if (iVar8 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809f765c == 0x7fffffff) {
    DAT_1809f765c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  cVar7 = FUN_180365420(lVar3);
  if (cVar7 != '\0') {
    local_88 = (longlong *)0x0;
    iVar8 = (**(code **)(*plVar2 + 0x48))(plVar2,0,&DAT_18058a4c0,&local_88);
    if ((-1 < iVar8) && (local_88 != (longlong *)0x0)) {
      local_78 = 0;
      uStack_70 = 0;
      local_68 = 0;
      uStack_60 = 0;
      uStack_5c = 0;
      uStack_58 = 0;
      uStack_54 = 0;
      (**(code **)(*local_88 + 0x50))(local_88,&local_78);
      if (local_68._4_4_ < 2) {
        local_b0 = (undefined4)local_68;
        local_b8 = (undefined4)local_68;
        cVar7 = FUN_1803656a0(lVar3,&DAT_181107ae0,local_78 & 0xffffffff,local_78._4_4_);
        if (cVar7 != '\0') {
          local_98 = 0;
          local_a0 = 0;
          local_a8 = local_88;
          local_b0 = 0;
          local_b8 = 0;
          (**(code **)(*plVar4 + 0x170))(plVar4,DAT_181107ae0,0,0);
          (**(code **)(*local_88 + 0x10))();
          FUN_1803658f0(plVar4,&DAT_181107ae0,lVar5,0);
          goto LAB_180366084;
        }
      }
      (**(code **)(*local_88 + 0x10))();
    }
  }
LAB_180366084:
  FUN_1804e4e90(&DAT_1809f7610);
  return;
}



/* ===== 1803660d0 FUN_1803660d0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1803660d0(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 local_d0;
  longlong *local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  longlong *local_a8;
  longlong *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined8 uStack_54;
  ulonglong local_48;
  
  lVar2 = DAT_1811085b8;
  plVar1 = DAT_1811081c0;
  local_48 = DAT_180919500 ^ (ulonglong)auStack_f8;
  if (DAT_1811085b8 == 0) {
    return;
  }
  if (param_2 == (longlong *)0x0) {
    return;
  }
  if (DAT_1811081c0 == (longlong *)0x0) {
    return;
  }
  cVar3 = FUN_180365e00();
  if (cVar3 == '\0') {
    return;
  }
  local_a0 = (longlong *)0x0;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_a0);
  if (local_a0 == (longlong *)0x0) {
    return;
  }
  local_a8 = (longlong *)0x0;
  (**(code **)*local_a0)(local_a0,&DAT_18058a4c0,&local_a8);
  (**(code **)(*local_a0 + 0x10))();
  if (local_a8 == (longlong *)0x0) {
    return;
  }
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  uStack_5c = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  (**(code **)(*local_a8 + 0x50))(local_a8,&local_78);
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  (**(code **)(*plVar1 + 0x40))(plVar1,&local_98);
  local_80 = &DAT_1809f7610;
  iVar4 = FUN_1804e4d70(&DAT_1809f7610);
  if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809f765c == 0x7fffffff) {
    DAT_1809f765c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  if ((uStack_70._4_4_ == 1) && (cVar3 = FUN_180365420(lVar2), cVar3 != '\0')) {
    local_d0 = (undefined4)local_98;
    local_d8 = (undefined4)local_68;
    cVar3 = FUN_1803656a0(lVar2,&DAT_181107aa0,local_78 & 0xffffffff,local_78._4_4_);
    if (cVar3 != '\0') {
      if (local_68._4_4_ < 2) {
        local_b8 = 0;
        local_c0 = 0;
        local_c8 = local_a8;
        local_d0 = 0;
        local_d8 = 0;
        (**(code **)(*param_2 + 0x170))(param_2,DAT_181107aa0,0,0);
      }
      else {
        local_d0 = (undefined4)local_98;
        local_d8 = 0;
        (**(code **)(*param_2 + 0x1c8))(param_2,DAT_181107aa0,0,local_a8);
      }
      (**(code **)(*local_a8 + 0x10))();
      FUN_1803658f0(param_2,&DAT_181107aa0,plVar1,1);
      DAT_181107b30 = FUN_1803651b0();
      LOCK();
      UNLOCK();
      goto LAB_1803662af;
    }
  }
  (**(code **)(*local_a8 + 0x10))();
LAB_1803662af:
  FUN_1804e4e90(&DAT_1809f7610);
  return;
}



/* ===== 180366300 FUN_180366300 ===== */

void FUN_180366300(longlong *param_1)

{
  undefined4 local_14;
  
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[2] + 0x10))();
    param_1[2] = 0;
  }
  if ((longlong *)param_1[1] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[1] + 0x10))();
    param_1[1] = 0;
  }
  if ((longlong *)*param_1 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_1 + 0x10))();
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = local_14;
  return;
}



/* ===== 180366370 FUN_180366370 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180366370(void)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 local_14;
  
  if (DAT_181107b78 != (longlong *)0x0) {
    (**(code **)(*DAT_181107b78 + 0x10))();
    DAT_181107b78 = (longlong *)0x0;
  }
  if (DAT_181107b70 != (longlong *)0x0) {
    (**(code **)(*DAT_181107b70 + 0x10))();
    DAT_181107b70 = (longlong *)0x0;
  }
  if (DAT_181107b68 != (longlong *)0x0) {
    (**(code **)(*DAT_181107b68 + 0x10))();
  }
  DAT_181107b78 = (longlong *)0x0;
  _DAT_181107b80 = 0;
  _DAT_181107b88 = 0;
  _DAT_181107b8c = local_14;
  DAT_181107b68 = (longlong *)0x0;
  DAT_181107b70 = (longlong *)0x0;
  if (DAT_181107be8 != (longlong *)0x0) {
    (**(code **)(*DAT_181107be8 + 0x10))();
    DAT_181107be8 = (longlong *)0x0;
  }
  if (DAT_181107be0 != (longlong *)0x0) {
    (**(code **)(*DAT_181107be0 + 0x10))();
    DAT_181107be0 = (longlong *)0x0;
  }
  if (DAT_181107bd8 != (longlong *)0x0) {
    (**(code **)(*DAT_181107bd8 + 0x10))();
  }
  DAT_181107be8 = (longlong *)0x0;
  _DAT_181107bf0 = 0;
  _DAT_181107bf8 = 0;
  _DAT_181107bfc = local_14;
  DAT_181107bd8 = (longlong *)0x0;
  DAT_181107be0 = (longlong *)0x0;
  if (DAT_181107ce0 != (longlong *)0x0) {
    (**(code **)(*DAT_181107ce0 + 0x10))();
    DAT_181107ce0 = (longlong *)0x0;
  }
  if (DAT_181107cd8 != (longlong *)0x0) {
    (**(code **)(*DAT_181107cd8 + 0x10))();
    DAT_181107cd8 = (longlong *)0x0;
  }
  if (DAT_181107cd0 != (longlong *)0x0) {
    (**(code **)(*DAT_181107cd0 + 0x10))();
  }
  DAT_181107ce0 = (longlong *)0x0;
  _DAT_181107ce8 = 0;
  _DAT_181107cf0 = 0;
  _DAT_181107cf4 = local_14;
  DAT_181107cd0 = (longlong *)0x0;
  DAT_181107cd8 = (longlong *)0x0;
  if (DAT_181107c28 != (longlong *)0x0) {
    (**(code **)(*DAT_181107c28 + 0x10))();
    DAT_181107c28 = (longlong *)0x0;
  }
  if (DAT_181107c20 != (longlong *)0x0) {
    (**(code **)(*DAT_181107c20 + 0x10))();
    DAT_181107c20 = (longlong *)0x0;
  }
  if (DAT_181107c18 != (longlong *)0x0) {
    (**(code **)(*DAT_181107c18 + 0x10))();
  }
  DAT_181107c28 = (longlong *)0x0;
  _DAT_181107c30 = 0;
  _DAT_181107c38 = 0;
  _DAT_181107c3c = local_14;
  DAT_181107c18 = (longlong *)0x0;
  DAT_181107c20 = (longlong *)0x0;
  if (DAT_181107ba8 != (longlong *)0x0) {
    (**(code **)(*DAT_181107ba8 + 0x10))();
    DAT_181107ba8 = (longlong *)0x0;
  }
  if (DAT_181107ba0 != (longlong *)0x0) {
    (**(code **)(*DAT_181107ba0 + 0x10))();
    DAT_181107ba0 = (longlong *)0x0;
  }
  if (DAT_181107b98 != (longlong *)0x0) {
    (**(code **)(*DAT_181107b98 + 0x10))();
  }
  DAT_181107ba8 = (longlong *)0x0;
  _DAT_181107bb0 = 0;
  _DAT_181107bb8 = 0;
  _DAT_181107bbc = local_14;
  DAT_181107b98 = (longlong *)0x0;
  DAT_181107ba0 = (longlong *)0x0;
  if (DAT_181107cb8 != (longlong *)0x0) {
    (**(code **)(*DAT_181107cb8 + 0x10))();
    DAT_181107cb8 = (longlong *)0x0;
  }
  if (DAT_181107cb0 != (longlong *)0x0) {
    (**(code **)(*DAT_181107cb0 + 0x10))();
    DAT_181107cb0 = (longlong *)0x0;
  }
  if (DAT_181107ca8 != (longlong *)0x0) {
    (**(code **)(*DAT_181107ca8 + 0x10))();
  }
  DAT_181107cb8 = (longlong *)0x0;
  _DAT_181107cc0 = 0;
  _DAT_181107cc8 = 0;
  _DAT_181107ccc = local_14;
  DAT_181107ca8 = (longlong *)0x0;
  DAT_181107cb0 = (longlong *)0x0;
  if (DAT_181107c90 != (longlong *)0x0) {
    (**(code **)(*DAT_181107c90 + 0x10))();
    DAT_181107c90 = (longlong *)0x0;
  }
  if (DAT_181107c88 != (longlong *)0x0) {
    (**(code **)(*DAT_181107c88 + 0x10))();
    DAT_181107c88 = (longlong *)0x0;
  }
  if (DAT_181107c80 != (longlong *)0x0) {
    (**(code **)(*DAT_181107c80 + 0x10))();
  }
  plVar1 = DAT_181107d58;
  DAT_181107c90 = (longlong *)0x0;
  _DAT_181107c98 = 0;
  _DAT_181107ca0 = 0;
  _DAT_181107ca4 = local_14;
  DAT_181107c80 = (longlong *)0x0;
  DAT_181107c88 = (longlong *)0x0;
  plVar2 = DAT_181107d50;
  if (DAT_181107d50 != DAT_181107d58) {
    do {
      if ((longlong *)plVar2[2] != (longlong *)0x0) {
        (**(code **)(*(longlong *)plVar2[2] + 0x10))();
        plVar2[2] = 0;
      }
      if ((longlong *)plVar2[1] != (longlong *)0x0) {
        (**(code **)(*(longlong *)plVar2[1] + 0x10))();
        plVar2[1] = 0;
      }
      if ((longlong *)*plVar2 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar2 + 0x10))();
      }
      *plVar2 = 0;
      plVar2[1] = 0;
      plVar2[2] = 0;
      plVar2[3] = 0;
      *(undefined4 *)(plVar2 + 4) = 0;
      *(undefined4 *)((longlong)plVar2 + 0x24) = local_14;
      plVar2 = plVar2 + 6;
    } while (plVar2 != plVar1);
    if (DAT_181107d50 != DAT_181107d58) {
      DAT_181107d58 = DAT_181107d50;
    }
  }
  DAT_180cd0fdd = 0;
  return;
}



/* ===== 180366720 FUN_180366720 ===== */

void FUN_180366720(void)

{
  if (DAT_181107b58 != (longlong *)0x0) {
    (**(code **)(*DAT_181107b58 + 0x10))();
    DAT_181107b58 = (longlong *)0x0;
  }
  if (DAT_181107b60 != (longlong *)0x0) {
    (**(code **)(*DAT_181107b60 + 0x10))();
    DAT_181107b60 = (longlong *)0x0;
  }
  if (DAT_181107c08 != (longlong *)0x0) {
    (**(code **)(*DAT_181107c08 + 0x10))();
    DAT_181107c08 = (longlong *)0x0;
  }
  if (DAT_181107c48 != (longlong *)0x0) {
    (**(code **)(*DAT_181107c48 + 0x10))();
    DAT_181107c48 = (longlong *)0x0;
  }
  if (DAT_181107c40 != (longlong *)0x0) {
    (**(code **)(*DAT_181107c40 + 0x10))();
    DAT_181107c40 = (longlong *)0x0;
  }
  if (DAT_181107c60 != (longlong *)0x0) {
    (**(code **)(*DAT_181107c60 + 0x10))();
    DAT_181107c60 = (longlong *)0x0;
  }
  if (DAT_181107c00 != (longlong *)0x0) {
    (**(code **)(*DAT_181107c00 + 0x10))();
    DAT_181107c00 = (longlong *)0x0;
  }
  if (DAT_181107bd0 != (longlong *)0x0) {
    (**(code **)(*DAT_181107bd0 + 0x10))();
    DAT_181107bd0 = (longlong *)0x0;
  }
  DAT_181107d48 = 0;
  return;
}



/* ===== 180366800 FUN_180366800 ===== */

void FUN_180366800(void)

{
  FUN_180366370();
  FUN_180366720();
  if (DAT_181107d10 != (longlong *)0x0) {
    (**(code **)(*DAT_181107d10 + 0x10))();
    DAT_181107d10 = (longlong *)0x0;
  }
  if (DAT_181107d08 != (longlong *)0x0) {
    (**(code **)(*DAT_181107d08 + 0x10))();
    DAT_181107d08 = (longlong *)0x0;
  }
  if (DAT_181107d00 != (longlong *)0x0) {
    (**(code **)(*DAT_181107d00 + 0x10))();
    DAT_181107d00 = (longlong *)0x0;
  }
  if (DAT_181107cf8 != (longlong *)0x0) {
    (**(code **)(*DAT_181107cf8 + 0x10))();
    DAT_181107cf8 = (longlong *)0x0;
  }
  if (DAT_181107b90 != (longlong *)0x0) {
    (**(code **)(*DAT_181107b90 + 0x10))();
    DAT_181107b90 = (longlong *)0x0;
  }
  if (DAT_181107c58 != (longlong *)0x0) {
    (**(code **)(*DAT_181107c58 + 0x10))();
    DAT_181107c58 = (longlong *)0x0;
  }
  if (DAT_181107bc0 != (longlong *)0x0) {
    (**(code **)(*DAT_181107bc0 + 0x10))();
    DAT_181107bc0 = (longlong *)0x0;
  }
  DAT_181107c70 = 0;
  return;
}



/* ===== 1803668d0 FUN_1803668d0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1803668d0(longlong *param_1)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_78 [32];
  char *local_58;
  undefined4 local_50;
  undefined *local_48;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_180919500 ^ (ulonglong)auStack_78;
  if ((DAT_181107c70 == param_1) && (DAT_181107c58 != 0)) {
    return 1;
  }
  if (DAT_180cd107c != '\0') {
    return 0;
  }
  FUN_180366800();
  local_48 = &DAT_1809f7680;
  local_50 = 0x8000;
  local_58 = "vs_5_0";
  plVar5 = (longlong *)
           FUN_18036e5f0("\ncbuffer blur_constants : register(b0) {\n    float4 step_sigma;\n};\n\nTexture2D source : register(t0);\nSamplerState linear_sampler : register(s0);\n\nstruct vs_output {\n    float4 position : SV_Position;\n    float2 uv : TEXCOORD0;\n};\n\nvs_output vs_main(uint id : SV_VertexID) {\n    vs_output output;\n    float2 uv = float2((id << 1) & 2, id & 2);\n    output.uv = uv;\n    output.position = float4(uv * float2(2.0, -2.0) + float2(-1.0, 1.0), 0.0, 1.0);\n    return output;\n}\n\nfloat4 ps_main(vs_output input) : SV_Target {\n    float sigma = step_sigma.z;\n    float3 color = 0.0;\n    float total = 0.0;\n    [unroll] for (int i = -8; i <= 8; i++) {\n        float weight = exp(-(i * i) / (2.0 * sigma * sigma));\n        color += source.Sample(linear_sampler, input.uv + step_sigma.xy * i).rgb * weight;\n        total += weight;\n    }\n    return float4(color / total, 1.0);\n}\n"
                         ,0x360,"neverlose_backdrop","vs_main");
  if (plVar5 == (longlong *)0x0) {
    DAT_180cd107c = 1;
    return 0;
  }
  local_48 = &DAT_1809f7680;
  local_50 = 0x8000;
  local_58 = "ps_5_0";
  plVar6 = (longlong *)
           FUN_18036e5f0("\ncbuffer blur_constants : register(b0) {\n    float4 step_sigma;\n};\n\nTexture2D source : register(t0);\nSamplerState linear_sampler : register(s0);\n\nstruct vs_output {\n    float4 position : SV_Position;\n    float2 uv : TEXCOORD0;\n};\n\nvs_output vs_main(uint id : SV_VertexID) {\n    vs_output output;\n    float2 uv = float2((id << 1) & 2, id & 2);\n    output.uv = uv;\n    output.position = float4(uv * float2(2.0, -2.0) + float2(-1.0, 1.0), 0.0, 1.0);\n    return output;\n}\n\nfloat4 ps_main(vs_output input) : SV_Target {\n    float sigma = step_sigma.z;\n    float3 color = 0.0;\n    float total = 0.0;\n    [unroll] for (int i = -8; i <= 8; i++) {\n        float weight = exp(-(i * i) / (2.0 * sigma * sigma));\n        color += source.Sample(linear_sampler, input.uv + step_sigma.xy * i).rgb * weight;\n        total += weight;\n    }\n    return float4(color / total, 1.0);\n}\n"
                         ,0x360,"neverlose_backdrop","ps_main");
  if (plVar6 == (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    DAT_180cd107c = 1;
    return 0;
  }
  lVar1 = *param_1;
  uVar7 = (**(code **)(*plVar5 + 0x20))();
  uVar8 = (**(code **)(*plVar5 + 0x18))(plVar5);
  local_58 = (char *)&DAT_181107bc0;
  iVar4 = (**(code **)(lVar1 + 0x60))(param_1,uVar8,uVar7,0);
  if (-1 < iVar4) {
    lVar1 = *param_1;
    uVar7 = (**(code **)(*plVar6 + 0x20))(plVar6);
    uVar8 = (**(code **)(*plVar6 + 0x18))(plVar6);
    local_58 = (char *)&DAT_181107c58;
    iVar4 = (**(code **)(lVar1 + 0x78))(param_1,uVar8,uVar7,0);
    if (-1 < iVar4) {
      bVar2 = true;
      goto LAB_180366a50;
    }
  }
  bVar2 = false;
LAB_180366a50:
  (**(code **)(*plVar5 + 0x10))(plVar5);
  (**(code **)(*plVar6 + 0x10))(plVar6);
  local_28 = 0;
  local_38 = 0x10;
  local_34 = 2;
  local_30 = 4;
  local_2c = 0x10000;
  if (((bVar2) &&
      (iVar4 = (**(code **)(*param_1 + 0x18))(param_1,&local_38,0,&DAT_181107b90), -1 < iVar4)) &&
     (cVar3 = FUN_18036e1f0(&DAT_181107cf8,param_1), cVar3 != '\0')) {
    DAT_181107c70 = param_1;
    return 1;
  }
  FUN_180366800();
  DAT_180cd107c = 1;
  return 0;
}



/* ===== 180366b10 FUN_180366b10 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_180366b10(longlong *param_1,longlong *param_2,int param_3,int param_4,int param_5,byte param_6)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_98 [32];
  int local_78;
  int local_74;
  undefined4 local_70;
  undefined4 local_6c;
  int local_68;
  undefined8 local_64;
  undefined4 local_5c;
  uint local_58;
  undefined8 local_54;
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_98;
  if ((((*param_2 == 0) || ((int)param_2[3] != param_3)) ||
      (*(int *)((longlong)param_2 + 0x1c) != param_4)) || ((int)param_2[4] != param_5)) {
    FUN_180366300(param_2);
    local_64 = 1;
    local_54 = 0;
    local_5c = 0;
    local_58 = (uint)param_6 << 5 | 8;
    local_70 = 1;
    local_6c = 1;
    local_68 = param_5;
    local_78 = param_3;
    local_74 = param_4;
    iVar1 = (**(code **)(*param_1 + 0x28))(param_1,&local_78,0,param_2);
    if ((iVar1 < 0) || (*param_2 == 0)) {
      uVar2 = 0;
    }
    else {
      iVar1 = (**(code **)(*param_1 + 0x38))(param_1,*param_2,0,param_2 + 1);
      if (((iVar1 < 0) || (param_2[1] == 0)) ||
         ((param_6 != 0 &&
          ((iVar1 = (**(code **)(*param_1 + 0x48))(param_1,*param_2,0,param_2 + 2), iVar1 < 0 ||
           (param_2[2] == 0)))))) {
        FUN_180366300(param_2);
        uVar2 = 0;
      }
      else {
        *(int *)(param_2 + 3) = param_3;
        uVar2 = 1;
        *(int *)((longlong)param_2 + 0x1c) = param_4;
        *(int *)(param_2 + 4) = param_5;
      }
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



/* ===== 180366c50 FUN_180366c50 ===== */

void FUN_180366c50(longlong *param_1,longlong param_2,longlong param_3,undefined4 param_4,
                  undefined4 param_5)

{
  int iVar1;
  undefined8 local_res8;
  undefined4 *local_28;
  undefined8 uStack_20;
  
  local_28 = (undefined4 *)0x0;
  uStack_20 = 0;
  iVar1 = (**(code **)(*param_1 + 0x70))(param_1,DAT_181107b90,0,4,0,&local_28);
  if (-1 < iVar1) {
    *local_28 = param_4;
    local_28[1] = param_5;
    local_28[2] = 0x40a00000;
    local_28[3] = 0;
    (**(code **)(*param_1 + 0x78))(param_1,DAT_181107b90,0);
    FUN_18036e3d0(&DAT_181107cf8,param_1,*(undefined8 *)(param_3 + 0x10),
                  (float)*(uint *)(param_3 + 0x18),(float)*(uint *)(param_3 + 0x1c),DAT_181107bc0,
                  DAT_181107c58,DAT_181107b90);
    (**(code **)(*param_1 + 0x40))(param_1,0,1,param_2 + 8);
    (**(code **)(*param_1 + 0x68))(param_1,3,0);
    local_res8 = 0;
    (**(code **)(*param_1 + 0x40))(param_1,0,1,&local_res8);
  }
  return;
}



/* ===== 180366db0 FUN_180366db0 ===== */

undefined8 FUN_180366db0(undefined8 param_1,longlong *param_2,int param_3,int param_4,int param_5)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  puVar1 = DAT_181107d58;
  if (*param_2 != 0) {
    if ((((int)param_2[3] == param_3) && (*(int *)((longlong)param_2 + 0x1c) == param_4)) &&
       ((int)param_2[4] == param_5)) {
      return 1;
    }
    local_58 = (undefined4)*param_2;
    uStack_54 = *(undefined4 *)((longlong)param_2 + 4);
    uStack_50 = (undefined4)param_2[1];
    uStack_4c = *(undefined4 *)((longlong)param_2 + 0xc);
    local_48 = (undefined4)param_2[2];
    uStack_44 = *(undefined4 *)((longlong)param_2 + 0x14);
    uStack_40 = (undefined4)param_2[3];
    uStack_3c = *(undefined4 *)((longlong)param_2 + 0x1c);
    local_38 = param_2[4];
    uStack_30 = *(undefined4 *)(DAT_180ca0a50 + 4);
    if (DAT_181107d58 == DAT_181107d60) {
      FUN_180368d40(uStack_30,DAT_181107d58,&local_58);
    }
    else {
      local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
      *DAT_181107d58 = local_58;
      puVar1[1] = uStack_54;
      puVar1[2] = uStack_50;
      puVar1[3] = uStack_4c;
      puVar1[4] = local_48;
      puVar1[5] = uStack_44;
      puVar1[6] = uStack_40;
      puVar1[7] = uStack_3c;
      puVar1[8] = (undefined4)local_38;
      puVar1[9] = local_38._4_4_;
      puVar1[10] = uStack_30;
      puVar1[0xb] = uStack_2c;
      DAT_181107d58 = DAT_181107d58 + 0xc;
    }
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    *(undefined4 *)(param_2 + 4) = 0;
    *(undefined4 *)((longlong)param_2 + 0x24) = local_38._4_4_;
  }
  uVar2 = FUN_180366b10(param_1,param_2,param_3,param_4);
  return uVar2;
}



/* ===== 180366ea0 FUN_180366ea0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_180366ea0(longlong *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint7 uVar9;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar10;
  ulonglong uVar11;
  undefined1 auStack_f8 [32];
  char *local_d8;
  undefined4 local_d0;
  longlong *local_c8;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  longlong local_a0 [5];
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  undefined1 local_48 [32];
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_f8;
  uVar9 = (uint7)(local_28 >> 8);
  if ((DAT_181107d48 == param_1) && (DAT_181107c60 != 0)) {
    return CONCAT71(uVar9,1);
  }
  if (DAT_180cd0fdf != '\0') {
    return (ulonglong)uVar9 << 8;
  }
  FUN_180366720();
  local_a0[1] = 0;
  local_a0[2] = 0;
  local_a0[3] = 0xf;
  local_a0[0] = 0;
  local_c8 = local_a0;
  local_d0 = 0x8000;
  local_d8 = "vs_5_0";
  plVar4 = (longlong *)
           FUN_18036e5f0("\nstruct vs_output {\n    float4 position : SV_Position;\n    float4 color : COLOR0;\n    float2 uv : TEXCOORD0;\n};\n\nvs_output vs_main(uint id : SV_VertexID) {\n    vs_output output;\n    float2 uv = float2((id << 1) & 2, id & 2);\n    output.uv = uv;\n    output.color = float4(1.0, 1.0, 1.0, 1.0);\n    output.position = float4(uv * float2(2.0, -2.0) + float2(-1.0, 1.0), 0.0, 1.0);\n    return output;\n}\n"
                         ,0x18d,"neverlose_backdrop_live","vs_main");
  if (plVar4 == (longlong *)0x0) {
    DAT_180cd0fdf = '\x01';
    puVar5 = (undefined8 *)FUN_180066a20(local_48,"vertex shader compile failed: ",local_a0);
    if (0xf < (ulonglong)puVar5[3]) {
      puVar5 = (undefined8 *)*puVar5;
    }
    if ((DAT_181107c68 & 1) == 0) {
      DAT_181107c68 = DAT_181107c68 | 1;
      FUN_1802b2560("[backdrop] live: %s",puVar5);
    }
    FUN_18000f890(local_48);
  }
  else {
    lVar8 = *param_1;
    uVar6 = (**(code **)(*plVar4 + 0x20))(plVar4);
    uVar7 = (**(code **)(*plVar4 + 0x18))(plVar4);
    local_d8 = (char *)&DAT_181107bd0;
    iVar3 = (**(code **)(lVar8 + 0x60))(param_1,uVar7,uVar6,0);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    if (iVar3 < 0) {
LAB_1803670b2:
      local_a8 = 0;
      local_b4 = 2;
      local_b0 = 4;
      local_ac = 0x10000;
LAB_1803670d6:
      local_b8 = 0x170;
LAB_1803670dd:
      bVar2 = false;
    }
    else {
      local_d8 = (char *)&DAT_181107c00;
      iVar3 = (**(code **)(*param_1 + 0x78))(param_1,&DAT_18088a480,0x3d8,0);
      if (iVar3 < 0) goto LAB_1803670b2;
      local_d8 = (char *)&DAT_181107c60;
      iVar3 = (**(code **)(*param_1 + 0x78))(param_1,&DAT_18058ac70,0x950,0);
      if (iVar3 < 0) goto LAB_1803670b2;
      local_a8 = 0;
      local_b4 = 2;
      local_b0 = 4;
      local_ac = 0x10000;
      local_b8 = 0x10;
      iVar3 = (**(code **)(*param_1 + 0x18))(param_1,&local_b8,0,&DAT_181107c40);
      if (iVar3 < 0) goto LAB_1803670d6;
      local_b8 = 0x170;
      iVar3 = (**(code **)(*param_1 + 0x18))(param_1,&local_b8,0,&DAT_181107c48);
      if (iVar3 < 0) goto LAB_1803670dd;
      bVar2 = true;
    }
    local_70 = 0;
    uStack_68 = 0;
    local_60 = 0;
    uStack_58 = 0;
    local_a0[4] = _DAT_1808ad680;
    uStack_78 = _UNK_1808ad688;
    local_50 = 0x7f7fffff;
    if ((bVar2) &&
       (iVar3 = (**(code **)(*param_1 + 0xb8))(param_1,local_a0 + 4,&DAT_181107c08), -1 < iVar3)) {
      lVar8 = 1;
      DAT_181107d48 = param_1;
      goto LAB_180367161;
    }
    FUN_180366720();
    DAT_180cd0fdf = '\x01';
    if ((DAT_181107c68 & 2) == 0) {
      DAT_181107c68 = DAT_181107c68 | 2;
      FUN_1802b2560("[backdrop] live: %s","shader / buffer / sampler creation failed");
    }
  }
  lVar8 = 0;
LAB_180367161:
  if (0xf < (ulonglong)local_a0[3]) {
    uVar11 = local_a0[3] + 1;
    lVar10 = local_a0[0];
    if (0xfff < uVar11) {
      lVar10 = *(longlong *)(local_a0[0] + -8);
      if (0x1f < (local_a0[0] - lVar10) - 8U) {
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        pcVar1 = (code *)swi(3);
        lVar8 = (*pcVar1)();
        return lVar8;
      }
      uVar11 = local_a0[3] + 0x28;
    }
    thunk_FUN_1803d64e0(lVar10,uVar11);
  }
  return lVar8;
}



/* ===== 1803671d0 FUN_1803671d0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1803671d0(longlong *param_1)

{
  code *pcVar1;
  int iVar2;
  ulonglong uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [24];
  char *local_78;
  undefined4 local_70;
  longlong *local_68;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong local_40 [5];
  
  puVar9 = auStack_98;
  uVar3 = DAT_180919500 ^ (ulonglong)auStack_98;
  if ((DAT_181107b60 != (longlong *)0x0) && (DAT_181107d48 == param_1)) {
    uVar3 = CONCAT71((int7)(uVar3 >> 8),1);
    puVar9 = auStack_98;
    goto LAB_18036739a;
  }
  if (DAT_180cd0fdc == '\0') {
    local_40[4] = uVar3;
    uVar3 = FUN_180366ea0();
    puVar9 = auStack_98;
    if ((char)uVar3 != '\0') {
      local_40[1] = 0;
      local_40[2] = 0;
      local_40[3] = 0xf;
      local_40[0] = 0;
      local_68 = local_40;
      local_70 = 0x8000;
      local_78 = "ps_5_0";
      plVar4 = (longlong *)
               FUN_18036e5f0("\ncbuffer effect_constants : register(b0) {\n    float4 effect_param;\n};\n\nTexture2D texture0 : register(t0);\nSamplerState sampler0 : register(s0);\n\nfloat4 ps_main(float4 position : SV_Position, float4 color : COLOR0, float2 uv : TEXCOORD0) : SV_Target {\n    float4 c = color * texture0.Sample(sampler0, uv);\n    float grey = (c.r + c.g + c.b) * (1.0 / 3.0);\n    c.rgb = c.rgb + (grey - c.rgb) * effect_param.x;\n    return c;\n}\n"
                             ,0x1a9,"neverwin_texture_effect","ps_main");
      if (plVar4 == (longlong *)0x0) {
LAB_18036734a:
        DAT_180cd0fdc = '\x01';
        uVar3 = 0;
      }
      else {
        lVar7 = *param_1;
        uVar5 = (**(code **)(*plVar4 + 0x20))(plVar4);
        uVar6 = (**(code **)(*plVar4 + 0x18))(plVar4);
        local_78 = (char *)&DAT_181107b60;
        iVar2 = (**(code **)(lVar7 + 0x78))(param_1,uVar6,uVar5,0);
        (**(code **)(*plVar4 + 0x10))(plVar4);
        local_48 = 0;
        local_54 = 2;
        local_50 = 4;
        local_4c = 0x10000;
        local_58 = 0x10;
        if (iVar2 < 0) {
LAB_180367318:
          if (DAT_181107b58 != (longlong *)0x0) {
            (**(code **)(*DAT_181107b58 + 0x10))();
            DAT_181107b58 = (longlong *)0x0;
          }
          if (DAT_181107b60 != (longlong *)0x0) {
            (**(code **)(*DAT_181107b60 + 0x10))();
            DAT_181107b60 = (longlong *)0x0;
          }
          goto LAB_18036734a;
        }
        iVar2 = (**(code **)(*param_1 + 0x18))(param_1,&local_58,0,&DAT_181107b58);
        if (iVar2 < 0) goto LAB_180367318;
        uVar3 = 1;
      }
      if (0xf < (ulonglong)local_40[3]) {
        uVar8 = local_40[3] + 1;
        lVar7 = local_40[0];
        if (0xfff < uVar8) {
          lVar7 = *(longlong *)(local_40[0] + -8);
          if (0x1f < (local_40[0] - lVar7) - 8U) {
            pcVar1 = (code *)swi(0x29);
            uVar3 = (*pcVar1)(5);
            puVar9 = auStack_90;
            goto LAB_180367398;
          }
          uVar8 = local_40[3] + 0x28;
        }
        thunk_FUN_1803d64e0(lVar7,uVar8);
      }
      puVar9 = auStack_98;
      goto LAB_18036739a;
    }
  }
LAB_180367398:
  uVar3 = uVar3 & 0xffffffffffffff00;
LAB_18036739a:
  *(undefined8 *)(puVar9 + -8) = 0x1803673a7;
  return uVar3;
}



/* ===== 1803673c0 FUN_1803673c0 ===== */

void FUN_1803673c0(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  undefined4 *local_18;
  undefined8 uStack_10;
  
  plVar2 = DAT_1811079f8;
  if ((DAT_1811079f8 != (longlong *)0x0) && (DAT_1811079e0 != 0)) {
    cVar3 = FUN_1803671d0();
    if (cVar3 != '\0') {
      uVar1 = *(undefined4 *)(param_2 + 0x38);
      local_18 = (undefined4 *)0x0;
      uStack_10 = 0;
      iVar4 = (**(code **)(*plVar2 + 0x70))(plVar2,DAT_181107b58,0,4,0,&local_18);
      if (-1 < iVar4) {
        *local_18 = uVar1;
        local_18[1] = 0;
        local_18[2] = 0;
        local_18[3] = 0;
        (**(code **)(*plVar2 + 0x78))(plVar2,DAT_181107b58,0);
        (**(code **)(*plVar2 + 0x48))(plVar2,DAT_181107b60,0,0);
        (**(code **)(*plVar2 + 0x80))(plVar2,0,1,&DAT_181107b58);
      }
    }
  }
  return;
}



/* ===== 1803674b0 FUN_1803674b0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1803674b0(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  float local_48;
  float local_44;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStack_98;
  local_70 = param_5;
  local_78 = param_4;
  (**(code **)(*param_1 + 0x108))(param_1,1,param_2 + 0x10,0);
  (**(code **)(*param_1 + 400))(param_1,*(undefined8 *)(param_2 + 0x10),param_6);
  local_50 = 0;
  local_40 = 0;
  local_3c = 0x3f800000;
  local_48 = (float)*(uint *)(param_2 + 0x18);
  local_44 = (float)*(uint *)(param_2 + 0x1c);
  (**(code **)(*param_1 + 0x160))(param_1,1,&local_50);
  local_58 = *(undefined4 *)(param_2 + 0x18);
  local_54 = *(undefined4 *)(param_2 + 0x1c);
  local_60 = 0;
  (**(code **)(*param_1 + 0x168))(param_1,1,&local_60);
  (**(code **)(*param_1 + 0x48))(param_1,param_3,0,0);
  (**(code **)(*param_1 + 0x80))(param_1,0,1,&local_78);
  (**(code **)(*param_1 + 0x40))(param_1,0,1,&local_70);
  (**(code **)(*param_1 + 0x68))(param_1,3,0);
  local_68 = 0;
  (**(code **)(*param_1 + 0x40))(param_1,0,1,&local_68);
  return;
}



/* ===== 180367620 FUN_180367620 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180367620(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  float fVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  float *pfVar12;
  char cVar13;
  int iVar14;
  int iVar15;
  undefined8 *puVar16;
  float *pfVar17;
  longlong lVar18;
  ulonglong uVar19;
  uint uVar20;
  uint uVar21;
  undefined8 *puVar22;
  bool bVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auStack_638 [32];
  undefined8 local_618;
  undefined8 **local_610;
  undefined4 local_608;
  undefined4 local_600;
  undefined4 local_5f8;
  longlong *local_5e8;
  undefined4 local_5e0 [2];
  longlong *local_5d8;
  longlong *local_5d0;
  undefined8 *local_5c8;
  undefined8 uStack_5c0;
  undefined4 local_5b8 [2];
  undefined8 local_5b0;
  undefined8 local_5a8;
  undefined8 uStack_5a0;
  undefined8 local_598;
  undefined8 uStack_590;
  undefined8 local_588;
  undefined8 uStack_580;
  undefined8 local_578;
  undefined8 uStack_570;
  undefined8 local_568;
  undefined8 uStack_560;
  undefined8 local_558;
  undefined8 local_550;
  undefined8 uStack_548;
  undefined4 local_540;
  undefined8 local_538;
  undefined4 local_530;
  undefined4 local_52c;
  undefined1 local_528 [384];
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined8 local_388;
  undefined8 uStack_380;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined8 local_368;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined8 local_348;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined4 local_338;
  undefined8 uStack_334;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 *local_318;
  undefined8 uStack_310;
  undefined1 local_308 [256];
  float local_208;
  float fStack_204;
  float fStack_200;
  undefined4 uStack_1fc;
  float local_1f8;
  undefined1 auStack_1f4 [12];
  float local_1e8 [40];
  float local_148;
  undefined1 auStack_144 [12];
  float local_138 [40];
  ulonglong local_98;
  
  plVar10 = DAT_1811079f8;
  lVar18 = DAT_1811079e0;
  local_98 = DAT_180919500 ^ (ulonglong)auStack_638;
  uVar19 = *(ulonglong *)(param_2 + 0x38);
  if ((((uVar19 != 0) &&
       (uVar19 <= (ulonglong)((DAT_181107d70 - DAT_181107d68 >> 2) * -0x3333333333333333))) &&
      (DAT_1811079f8 != (longlong *)0x0)) && (DAT_1811079e0 != 0)) {
    uVar1 = *(undefined4 *)(DAT_181107d68 + -0x14 + uVar19 * 0x14);
    uVar2 = *(undefined4 *)(DAT_181107d68 + -0x10 + uVar19 * 0x14);
    uVar3 = *(undefined4 *)(DAT_181107d68 + -0xc + uVar19 * 0x14);
    uVar4 = *(undefined4 *)(DAT_181107d68 + -8 + uVar19 * 0x14);
    fVar28 = *(float *)(DAT_181107d68 + -4 + uVar19 * 0x14);
    cVar13 = FUN_180366ea0(DAT_1811079e0);
    if (cVar13 != '\0') {
      DAT_181107c6c = DAT_181107c6c + 1;
      local_5d8 = (longlong *)0x0;
      (**(code **)(*plVar10 + 0x2c8))(plVar10,1,&local_5d8,0);
      if (local_5d8 == (longlong *)0x0) {
        if ((DAT_181107c68 & 4) == 0) {
          DAT_181107c68 = DAT_181107c68 | 4;
          FUN_1802b2560("[backdrop] live: %s","no render target bound in the draw callback");
        }
      }
      else {
        local_5d0 = (longlong *)0x0;
        (**(code **)(*local_5d8 + 0x38))(local_5d8,&local_5d0);
        (**(code **)(*local_5d8 + 0x10))();
        if (local_5d0 != (longlong *)0x0) {
          local_5e8 = (longlong *)0x0;
          (**(code **)*local_5d0)(local_5d0,&DAT_18058a4c0,&local_5e8);
          (**(code **)(*local_5d0 + 0x10))();
          if (local_5e8 == (longlong *)0x0) {
            if ((DAT_181107c68 & 8) == 0) {
              DAT_181107c68 = DAT_181107c68 | 8;
              FUN_1802b2560("[backdrop] live: %s","bound render target is not a 2D texture");
            }
          }
          else {
            local_348 = 0;
            uStack_340 = 0;
            uStack_33c = 0;
            local_338 = 0;
            uStack_334 = 0;
            local_358 = 0;
            uStack_350 = 0;
            (**(code **)(*local_5e8 + 0x50))(local_5e8,&local_358);
            if ((DAT_181107c68 & 0x10) == 0) {
              local_5f8 = uStack_334._4_4_;
              local_600 = local_338;
              local_608 = local_348._4_4_;
              local_610 = (undefined8 **)CONCAT44(local_610._4_4_,(undefined4)local_348);
              local_618 = CONCAT44(local_618._4_4_,local_358._4_4_);
              snprintf(&local_208,0xc0,
                       "render target %ux%u format %u samples %u bind 0x%x misc 0x%x",
                       local_358 & 0xffffffff);
              if ((DAT_181107c68 & 0x10) == 0) {
                DAT_181107c68 = DAT_181107c68 | 0x10;
                FUN_1802b2560("[backdrop] live: %s",&local_208);
              }
            }
            local_610 = (undefined8 **)((ulonglong)local_610 & 0xffffffffffffff00);
            uVar20 = 1;
            if ((uint)local_358 >> 1 != 0) {
              uVar20 = (uint)local_358 >> 1;
            }
            uVar21 = 1;
            if (local_358._4_4_ >> 1 != 0) {
              uVar21 = local_358._4_4_ >> 1;
            }
            local_618._0_4_ = (undefined4)local_348;
            cVar13 = FUN_180366db0(lVar18,&DAT_181107c18);
            if (cVar13 != '\0') {
              local_610 = (undefined8 **)CONCAT71(local_610._1_7_,1);
              local_618._0_4_ = (undefined4)local_348;
              cVar13 = FUN_180366db0(lVar18,&DAT_181107b98,uVar20,uVar21);
              if (cVar13 != '\0') {
                local_610 = (undefined8 **)CONCAT71(local_610._1_7_,1);
                local_618._0_4_ = (undefined4)local_348;
                cVar13 = FUN_180366db0(lVar18,&DAT_181107ca8,uVar20,uVar21);
                if (cVar13 != '\0') {
                  local_610 = (undefined8 **)CONCAT71(local_610._1_7_,1);
                  local_618._0_4_ = (undefined4)local_348;
                  cVar13 = FUN_180366db0(lVar18,&DAT_181107c80,uVar20,uVar21);
                  if (cVar13 != '\0') {
                    DAT_180cd0fde = 1;
                    if (local_348._4_4_ < 2) {
                      (**(code **)(*plVar10 + 0x178))(plVar10,DAT_181107c18,local_5e8);
                    }
                    else {
                      local_610 = (undefined8 **)CONCAT44(local_610._4_4_,(undefined4)local_348);
                      local_618._0_4_ = 0;
                      (**(code **)(*plVar10 + 0x1c8))(plVar10,DAT_181107c18,0,local_5e8);
                    }
                    (**(code **)(*local_5e8 + 0x10))();
                    local_5b8[0] = 0;
                    local_5a8 = 0;
                    uStack_5a0 = 0;
                    local_598 = 0;
                    uStack_590 = 0;
                    local_588 = 0;
                    uStack_580 = 0;
                    local_578 = 0;
                    uStack_570 = 0;
                    local_568 = 0;
                    uStack_560 = 0;
                    local_550 = 0;
                    uStack_548 = 0;
                    local_5b0 = 0;
                    local_558 = 0;
                    local_540 = 0;
                    local_538 = 0;
                    local_530 = 0;
                    local_52c = 0x10;
                    FUN_180540170(local_528,0,0x180);
                    local_368 = 0;
                    local_3a8 = 0;
                    uStack_3a0 = 0;
                    local_398 = 0;
                    uStack_390 = 0;
                    local_388 = 0;
                    uStack_380 = 0;
                    local_378 = 0;
                    uStack_370 = 0;
                    FUN_18036dda0(local_5b8,plVar10);
                    local_5e0[0] = 0x10;
                    FUN_180540170(local_308,0,0x100);
                    (**(code **)(*plVar10 + 0x300))(plVar10,local_5e0,local_308);
                    (**(code **)(*plVar10 + 0x88))(plVar10,0);
                    (**(code **)(*plVar10 + 0xc0))(plVar10,4);
                    (**(code **)(*plVar10 + 0x58))(plVar10,DAT_181107bd0,0,0);
                    (**(code **)(*plVar10 + 0xb8))(plVar10,0,0,0);
                    (**(code **)(*plVar10 + 0x50))(plVar10,0,1,&DAT_181107c08);
                    local_610 = &local_5c8;
                    local_5c8 = (undefined8 *)0x0;
                    uStack_5c0 = 0;
                    local_618 = (ulonglong)local_618._4_4_ << 0x20;
                    iVar14 = (**(code **)(*plVar10 + 0x70))(plVar10,DAT_181107c40,0,4);
                    if (-1 < iVar14) {
                      *(undefined4 *)local_5c8 = uVar1;
                      *(undefined4 *)((longlong)local_5c8 + 4) = uVar2;
                      *(undefined4 *)(local_5c8 + 1) = uVar3;
                      *(undefined4 *)((longlong)local_5c8 + 0xc) = uVar4;
                      (**(code **)(*plVar10 + 0x78))(plVar10,DAT_181107c40,0);
                      local_610 = (undefined8 **)&local_328;
                      local_618 = DAT_181107c20;
                      local_328 = _DAT_1808adae0;
                      uStack_320 = _UNK_1808adae8;
                      FUN_1803674b0(plVar10,&DAT_181107b98,DAT_181107c00,DAT_181107c40);
                      fVar9 = DAT_1808ac34c;
                      fVar28 = fVar28 * DAT_1808ac750;
                      iVar14 = 0;
                      local_318 = (undefined8 *)0x0;
                      uStack_310 = 0;
                      do {
                        local_610 = &local_5c8;
                        local_618 = local_618 & 0xffffffff00000000;
                        iVar15 = (**(code **)(*plVar10 + 0x70))(plVar10,DAT_181107c48,0,4);
                        if (iVar15 < 0) break;
                        FUN_180540170(auStack_1f4,0,0xac);
                        FUN_180540170(auStack_144,0,0xac);
                        bVar23 = iVar14 == 0;
                        puVar22 = &DAT_181107c80;
                        if (bVar23) {
                          puVar22 = &DAT_181107ca8;
                        }
                        uVar20 = DAT_181107c98;
                        if (bVar23) {
                          uVar20 = DAT_181107cc0;
                        }
                        fStack_200 = (float)iVar14;
                        local_208 = (float)uVar20;
                        uVar20 = DAT_181107c9c;
                        if (bVar23) {
                          uVar20 = DAT_181107cc4;
                        }
                        fVar26 = (fVar28 + fVar28) * fVar28;
                        fStack_204 = (float)uVar20;
                        fVar24 = (float)FUN_18051ab90(0.0 / fVar26);
                        iVar15 = 1;
                        fVar27 = fVar24;
                        do {
                          fVar25 = (float)FUN_18051ab90((float)-(iVar15 * iVar15) / fVar26);
                          iVar15 = iVar15 + 1;
                          fVar27 = fVar27 + fVar25 + fVar25;
                        } while (iVar15 < 9);
                        local_1f8 = 0.0;
                        uVar20 = 1;
                        local_148 = (fVar9 / fVar27) * fVar24;
                        do {
                          uVar19 = (ulonglong)uVar20;
                          *(float *)(auStack_1f4 + uVar19 * 0x10 + -4) = (float)(int)uVar20;
                          fVar24 = (float)FUN_18051ab90((float)(int)-(uVar20 * uVar20) / fVar26);
                          uVar20 = uVar20 + 1;
                          local_1e8[uVar19 * 4 + 0x28] = fVar24 * (fVar9 / fVar27);
                        } while ((int)uVar20 < 9);
                        uStack_1fc = 8;
                        lVar18 = 2;
                        puVar11 = local_5c8;
                        pfVar12 = &local_208;
                        do {
                          pfVar17 = pfVar12;
                          puVar16 = puVar11;
                          uVar5 = *(undefined8 *)(pfVar17 + 2);
                          uVar6 = *(undefined8 *)(pfVar17 + 4);
                          uVar7 = *(undefined8 *)(pfVar17 + 6);
                          *puVar16 = *(undefined8 *)pfVar17;
                          puVar16[1] = uVar5;
                          uVar5 = *(undefined8 *)(pfVar17 + 8);
                          uVar8 = *(undefined8 *)(pfVar17 + 10);
                          puVar16[2] = uVar6;
                          puVar16[3] = uVar7;
                          uVar6 = *(undefined8 *)(pfVar17 + 0xc);
                          uVar7 = *(undefined8 *)(pfVar17 + 0xe);
                          puVar16[4] = uVar5;
                          puVar16[5] = uVar8;
                          uVar5 = *(undefined8 *)(pfVar17 + 0x10);
                          uVar8 = *(undefined8 *)(pfVar17 + 0x12);
                          puVar16[6] = uVar6;
                          puVar16[7] = uVar7;
                          uVar6 = *(undefined8 *)(pfVar17 + 0x14);
                          uVar7 = *(undefined8 *)(pfVar17 + 0x16);
                          puVar16[8] = uVar5;
                          puVar16[9] = uVar8;
                          uVar5 = *(undefined8 *)(pfVar17 + 0x18);
                          uVar8 = *(undefined8 *)(pfVar17 + 0x1a);
                          puVar16[10] = uVar6;
                          puVar16[0xb] = uVar7;
                          uVar6 = *(undefined8 *)(pfVar17 + 0x1c);
                          uVar7 = *(undefined8 *)(pfVar17 + 0x1e);
                          puVar16[0xc] = uVar5;
                          puVar16[0xd] = uVar8;
                          puVar16[0xe] = uVar6;
                          puVar16[0xf] = uVar7;
                          lVar18 = lVar18 + -1;
                          puVar11 = puVar16 + 0x10;
                          pfVar12 = pfVar17 + 0x20;
                        } while (lVar18 != 0);
                        uVar5 = *(undefined8 *)(pfVar17 + 0x22);
                        uVar6 = *(undefined8 *)(pfVar17 + 0x24);
                        uVar7 = *(undefined8 *)(pfVar17 + 0x26);
                        puVar16[0x10] = *(undefined8 *)(pfVar17 + 0x20);
                        puVar16[0x11] = uVar5;
                        uVar5 = *(undefined8 *)(pfVar17 + 0x28);
                        uVar8 = *(undefined8 *)(pfVar17 + 0x2a);
                        puVar16[0x12] = uVar6;
                        puVar16[0x13] = uVar7;
                        uVar6 = *(undefined8 *)(pfVar17 + 0x2c);
                        uVar7 = *(undefined8 *)(pfVar17 + 0x2e);
                        puVar16[0x14] = uVar5;
                        puVar16[0x15] = uVar8;
                        uVar5 = *(undefined8 *)(pfVar17 + 0x30);
                        uVar8 = *(undefined8 *)(pfVar17 + 0x32);
                        puVar16[0x16] = uVar6;
                        puVar16[0x17] = uVar7;
                        uVar6 = *(undefined8 *)(pfVar17 + 0x34);
                        uVar7 = *(undefined8 *)(pfVar17 + 0x36);
                        puVar16[0x18] = uVar5;
                        puVar16[0x19] = uVar8;
                        uVar5 = *(undefined8 *)(pfVar17 + 0x38);
                        uVar8 = *(undefined8 *)(pfVar17 + 0x3a);
                        puVar16[0x1a] = uVar6;
                        puVar16[0x1b] = uVar7;
                        puVar16[0x1c] = uVar5;
                        puVar16[0x1d] = uVar8;
                        (**(code **)(*plVar10 + 0x78))(plVar10,DAT_181107c48,0);
                        local_610 = &local_318;
                        local_618 = DAT_181107cb0;
                        if (iVar14 == 0) {
                          local_618 = DAT_181107ba0;
                        }
                        FUN_1803674b0(plVar10,puVar22,DAT_181107c60,DAT_181107c48);
                        iVar14 = iVar14 + 1;
                      } while (iVar14 < 2);
                    }
                    (**(code **)(*plVar10 + 0x168))(plVar10,local_5e0[0],local_308);
                    FUN_18036df30(local_5b8,plVar10);
                    return;
                  }
                }
              }
            }
            local_610 = (undefined8 **)CONCAT44(local_610._4_4_,local_358._4_4_);
            local_618 = CONCAT44(local_618._4_4_,(uint)local_358);
            snprintf(&local_208,0x80,"target creation failed (format %u, %ux%u)",
                     local_348 & 0xffffffff);
            if ((DAT_181107c68 & 0x20) == 0) {
              DAT_181107c68 = DAT_181107c68 | 0x20;
              FUN_1802b2560("[backdrop] live: %s",&local_208);
            }
            (**(code **)(*local_5e8 + 0x10))();
          }
        }
      }
    }
  }
  return;
}



/* ===== 180367f50 FUN_180367f50 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180367f50(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auStack_308 [32];
  float local_2e8;
  undefined1 local_2e0;
  longlong *local_2d8 [2];
  undefined4 local_2c8 [2];
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined4 local_250;
  undefined8 local_248;
  undefined4 local_240;
  undefined4 local_23c;
  undefined1 local_238 [384];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined8 uStack_44;
  ulonglong local_38;
  
  plVar3 = DAT_1811079f8;
  lVar2 = DAT_1811079e0;
  plVar1 = DAT_1811079b8;
  local_38 = DAT_180919500 ^ (ulonglong)auStack_308;
  DAT_180cd0fdd = 0;
  if ((((DAT_1811079e0 != 0) && (DAT_1811079f8 != (longlong *)0x0)) &&
      (DAT_1811079b8 != (longlong *)0x0)) && (cVar4 = FUN_1803668d0(DAT_1811079e0), cVar4 != '\0'))
  {
    local_2d8[0] = (longlong *)0x0;
    iVar5 = (**(code **)(*plVar1 + 0x48))(plVar1,0,&DAT_18058a4c0,local_2d8);
    if ((-1 < iVar5) && (local_2d8[0] != (longlong *)0x0)) {
      local_58 = 0;
      uStack_50 = 0;
      uStack_4c = 0;
      uStack_48 = 0;
      uStack_44 = 0;
      local_68 = 0;
      uStack_60 = 0;
      (**(code **)(*local_2d8[0] + 0x50))(local_2d8[0],&local_68);
      uVar6 = 1;
      if ((uint)local_68 >> 1 != 0) {
        uVar6 = (uint)local_68 >> 1;
      }
      uVar7 = 1;
      if (local_68._4_4_ >> 1 != 0) {
        uVar7 = local_68._4_4_ >> 1;
      }
      if (local_58._4_4_ == 1) {
        local_2e0 = 0;
        local_2e8 = (float)(undefined4)local_58;
        cVar4 = FUN_180366b10(lVar2,&DAT_181107b68);
        if (cVar4 != '\0') {
          local_2e0 = 1;
          local_2e8 = (float)(undefined4)local_58;
          cVar4 = FUN_180366b10(lVar2,&DAT_181107bd8,uVar6,uVar7);
          if (cVar4 != '\0') {
            local_2e0 = 1;
            local_2e8 = (float)(undefined4)local_58;
            cVar4 = FUN_180366b10(lVar2,&DAT_181107cd0,uVar6,uVar7);
            if (cVar4 != '\0') {
              (**(code **)(*plVar3 + 0x178))(plVar3,DAT_181107b68,local_2d8[0]);
              (**(code **)(*local_2d8[0] + 0x10))();
              local_2c8[0] = 0;
              local_2b8 = 0;
              uStack_2b0 = 0;
              local_2a8 = 0;
              uStack_2a0 = 0;
              local_298 = 0;
              uStack_290 = 0;
              local_288 = 0;
              uStack_280 = 0;
              local_278 = 0;
              uStack_270 = 0;
              local_260 = 0;
              uStack_258 = 0;
              local_2c0 = 0;
              local_268 = 0;
              local_250 = 0;
              local_248 = 0;
              local_240 = 0;
              local_23c = 0x10;
              FUN_180540170(local_238,0,0x180);
              local_78 = 0;
              local_b8 = 0;
              uStack_b0 = 0;
              local_a8 = 0;
              uStack_a0 = 0;
              local_98 = 0;
              uStack_90 = 0;
              local_88 = 0;
              uStack_80 = 0;
              FUN_18036dda0(local_2c8,plVar3);
              local_2e8 = 0.0;
              FUN_180366c50(plVar3,&DAT_181107b68,&DAT_181107bd8,
                            DAT_1808ac540 / (float)(local_68 & 0xffffffff));
              local_2e8 = DAT_1808ac34c / (float)uVar7;
              FUN_180366c50(plVar3,&DAT_181107bd8,&DAT_181107cd0,0);
              FUN_18036df30(local_2c8,plVar3);
              DAT_180cd0fdd = 1;
              return;
            }
          }
        }
      }
      (**(code **)(*local_2d8[0] + 0x10))();
    }
  }
  return;
}



/* ===== 180368270 FUN_180368270 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000180368601) */
/* WARNING: Removing unreachable block (ram,0x00018036860e) */
/* WARNING: Removing unreachable block (ram,0x000180368618) */

longlong FUN_180368270(undefined8 param_1,ulonglong *param_2,ulonglong *param_3,float param_4)

{
  int iVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  int *in_RCX;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auStack_138 [32];
  int local_118;
  undefined8 local_108;
  undefined8 local_100;
  float local_f8;
  undefined4 local_e4;
  undefined1 local_d8 [96];
  ulonglong local_78;
  
  local_78 = DAT_180919500 ^ (ulonglong)auStack_138;
  iVar1 = *(int *)(DAT_180ca0a50 + 4);
  uVar7 = 0;
  lVar4 = DAT_181107d58;
  lVar6 = DAT_181107d50;
  if ((DAT_181107d58 - DAT_181107d50 >> 4) * -0x5555555555555555 != 0) {
    do {
      lVar5 = uVar7 * 0x30;
      if (*(int *)(lVar5 + 0x28 + lVar6) < iVar1) {
        plVar2 = *(longlong **)(lVar5 + 0x10 + lVar6);
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x10))();
          *(undefined8 *)(lVar5 + 0x10 + lVar6) = 0;
        }
        plVar2 = *(longlong **)(lVar5 + 8 + lVar6);
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x10))();
          *(undefined8 *)(lVar5 + 8 + lVar6) = 0;
        }
        if (*(longlong **)(lVar5 + lVar6) != (longlong *)0x0) {
          (**(code **)(**(longlong **)(lVar5 + lVar6) + 0x10))();
        }
        *(undefined8 *)(lVar5 + lVar6) = 0;
        *(undefined8 *)(lVar5 + 8 + lVar6) = 0;
        *(undefined8 *)(lVar5 + 0x10 + lVar6) = 0;
        *(undefined8 *)(lVar5 + 0x18 + lVar6) = 0;
        *(undefined4 *)(lVar5 + 0x20 + lVar6) = 0;
        *(undefined4 *)(lVar5 + 0x24 + lVar6) = local_e4;
        lVar4 = DAT_181107d50 + lVar5 + 0x30;
        param_1 = FUN_180540530(DAT_181107d50 + lVar5,lVar4,DAT_181107d58 - lVar4);
        lVar4 = DAT_181107d58 + -0x30;
        lVar6 = DAT_181107d50;
        DAT_181107d58 = lVar4;
      }
      else {
        uVar7 = uVar7 + 1;
      }
    } while (uVar7 < (ulonglong)((lVar4 - lVar6 >> 4) * -0x5555555555555555));
  }
  if (DAT_1809f70b8 != iVar1) {
    if ((DAT_181107d68 != DAT_181107d70) && (DAT_181107c6c == 0)) {
      local_118 = DAT_1809f70b8;
      param_1 = snprintf(local_d8,0x60,"draw callbacks did not run (%d requests in frame %d)",
                         ((longlong)DAT_181107d70 - (longlong)DAT_181107d68 >> 2) *
                         -0x3333333333333333);
      if ((DAT_181107c68 & 0x40) == 0) {
        DAT_181107c68 = DAT_181107c68 | 0x40;
        param_1 = FUN_1802b2560("[backdrop] live: %s",local_d8);
      }
    }
    if (DAT_181107d68 != DAT_181107d70) {
      DAT_181107d70 = DAT_181107d68;
    }
    DAT_181107c6c = 0;
    DAT_1809f70b8 = iVar1;
  }
  uVar7 = *(ulonglong *)(**(longlong **)(DAT_180ca0a50 + 0x2058) + 0x10);
  if ((DAT_180cd0fdf != '\0') && (-1 < (char)DAT_181107c68)) {
    DAT_181107c68 = DAT_181107c68 | 0x80;
    param_1 = FUN_1802b2560("[backdrop] live: %s","disabled: creation failed earlier");
  }
  if ((((in_RCX == (int *)0x0) || (DAT_180cd0fdf != '\0')) || ((float)uVar7 <= 0.0)) ||
     ((float)(uVar7 >> 0x20) <= 0.0)) {
    lVar4 = 0;
  }
  else {
    if (((DAT_181107c88 == 0) && (DAT_180cd0fde != '\0')) &&
       ((DAT_181107bc8 = DAT_181107bc8 + 1, DAT_181107bc8 == 0x1e && ((DAT_181107c68 >> 8 & 1) == 0)
        ))) {
      DAT_181107c68 = DAT_181107c68 | 0x100;
      param_1 = FUN_1802b2560("[backdrop] live: %s","no result texture although the callback ran");
    }
    puVar3 = DAT_181107d70;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = *param_2;
    auVar10._8_8_ = 0;
    auVar10._0_8_ = *param_3;
    auVar9._8_8_ = 0;
    auVar9._0_8_ = uVar7;
    auVar9 = divps(auVar8,auVar9);
    auVar11._8_8_ = 0;
    auVar11._0_8_ = uVar7;
    auVar11 = divps(auVar10,auVar11);
    local_108 = auVar9._0_8_;
    local_100 = auVar11._0_8_;
    if (param_4 <= 0.0) {
      local_f8 = 1.0;
      param_4 = DAT_1808ac34c;
    }
    else {
      local_f8 = param_4;
    }
    if (DAT_181107d70 == DAT_181107d78) {
      FUN_180368f20(param_1,DAT_181107d70,&local_108);
    }
    else {
      *DAT_181107d70 = local_108;
      puVar3[1] = local_100;
      *(float *)(puVar3 + 2) = param_4;
      DAT_181107d70 = (undefined8 *)((longlong)DAT_181107d70 + 0x14);
    }
    lVar6 = (longlong)DAT_181107d70 - (longlong)DAT_181107d68;
    lVar4 = *(longlong *)(in_RCX + 2) + ((longlong)*in_RCX + -1) * 0x48;
    if (*(int *)(*(longlong *)(in_RCX + 2) + 0x28 + ((longlong)*in_RCX + -1) * 0x48) != 0) {
      FUN_1803fbe60(in_RCX);
      lVar4 = *(longlong *)(in_RCX + 2) + (longlong)(*in_RCX + -1) * 0x48;
    }
    *(code **)(lVar4 + 0x30) = FUN_180367620;
    *(longlong *)(lVar4 + 0x38) = (lVar6 >> 2) * -0x3333333333333333;
    *(undefined4 *)(lVar4 + 0x40) = 0;
    *(undefined4 *)(lVar4 + 0x44) = 0xffffffff;
    FUN_1803fbe60(in_RCX);
    lVar4 = -8;
    if ((*(longlong *)(*(longlong *)(in_RCX + 0xe) + 0x68) != 0) &&
       (lVar6 = *(longlong *)(*(longlong *)(*(longlong *)(in_RCX + 0xe) + 0x68) + 0xc60), lVar6 != 0
       )) {
      lVar4 = lVar6;
    }
    lVar6 = *(longlong *)(in_RCX + 2) + ((longlong)*in_RCX + -1) * 0x48;
    if (*(int *)(*(longlong *)(in_RCX + 2) + 0x28 + ((longlong)*in_RCX + -1) * 0x48) != 0) {
      FUN_1803fbe60(in_RCX);
      lVar6 = *(longlong *)(in_RCX + 2) + (longlong)(*in_RCX + -1) * 0x48;
    }
    *(longlong *)(lVar6 + 0x30) = lVar4;
    *(undefined8 *)(lVar6 + 0x38) = 0;
    *(undefined4 *)(lVar6 + 0x40) = 0;
    *(undefined4 *)(lVar6 + 0x44) = 0xffffffff;
    FUN_1803fbe60(in_RCX);
    lVar4 = DAT_181107c88;
  }
  return lVar4;
}



/* ===== 180368730 FUN_180368730 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180368730(void)

{
  undefined4 local_14;
  
  if (DAT_181107d28 != (longlong *)0x0) {
    (**(code **)(*DAT_181107d28 + 0x10))();
    DAT_181107d28 = (longlong *)0x0;
  }
  if (DAT_181107d20 != (longlong *)0x0) {
    (**(code **)(*DAT_181107d20 + 0x10))();
    DAT_181107d20 = (longlong *)0x0;
  }
  if (DAT_181107d18 != (longlong *)0x0) {
    (**(code **)(*DAT_181107d18 + 0x10))();
  }
  DAT_181107d28 = (longlong *)0x0;
  _DAT_181107d30 = 0;
  _DAT_181107d38 = 0;
  _DAT_181107d3c = local_14;
  DAT_181107d18 = (longlong *)0x0;
  DAT_181107d20 = (longlong *)0x0;
  if (DAT_181107d40 != (longlong *)0x0) {
    (**(code **)(*DAT_181107d40 + 0x10))();
    DAT_181107d40 = (longlong *)0x0;
  }
  if (DAT_181107c50 != (longlong *)0x0) {
    (**(code **)(*DAT_181107c50 + 0x10))();
    DAT_181107c50 = (longlong *)0x0;
  }
  if (DAT_181107c10 != (longlong *)0x0) {
    (**(code **)(*DAT_181107c10 + 0x10))();
    DAT_181107c10 = (longlong *)0x0;
  }
  DAT_181107c78 = 0;
  return;
}



/* ===== 180368800 FUN_180368800 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_180368800(longlong *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  ulonglong uVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 ****ppppuVar11;
  ulonglong uVar12;
  undefined1 *puVar13;
  undefined1 auStack_f8 [8];
  undefined1 auStack_f0 [24];
  char *local_d8;
  undefined4 local_d0;
  undefined8 ****local_c8;
  undefined8 ****local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  ulonglong local_a0;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined8 local_84;
  undefined4 local_7c;
  undefined4 local_78;
  undefined8 local_74;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  ulonglong local_30;
  
  puVar13 = auStack_f8;
  local_30 = DAT_180919500 ^ (ulonglong)auStack_f8;
  if (((DAT_181107c78 == param_1) && (DAT_181107c50 != 0)) && (DAT_181107d20 != 0)) {
    uVar6 = CONCAT71((int7)(local_30 >> 8),1);
    goto LAB_180368b18;
  }
  puVar13 = auStack_f8;
  if ((DAT_180cd0fdb == '\0') && (puVar13 = auStack_f8, param_1 != (longlong *)0x0)) {
    FUN_180368730();
    uStack_b0 = 0;
    local_a8 = 0;
    local_a0 = 0xf;
    local_b8 = (undefined8 ****)0x0;
    local_c8 = &local_b8;
    local_d0 = 0x8000;
    local_d8 = "vs_5_0";
    plVar7 = (longlong *)
             FUN_18036e5f0("\nTextureCube texture0 : register(t0);\nSamplerState sampler0 : register(s0);\n\nstruct vs_output {\n    float4 pos : SV_POSITION;\n    float4 col : COLOR0;\n    float2 uv : TEXCOORD0;\n};\n\nvs_output vs_main(uint id : SV_VertexID) {\n    vs_output output;\n    float2 uv = float2((id << 1) & 2, id & 2);\n    output.uv = uv;\n    output.col = float4(1.0, 1.0, 1.0, 1.0);\n    output.pos = float4(uv * float2(2.0, -2.0) + float2(-1.0, 1.0), 0.0, 1.0);\n    return output;\n}\n\nfloat4 ps_main(vs_output input) : SV_Target {\n    float a = (-input.uv.y - 1.0) * 1.570796;\n    float b = (-0.5 * input.uv.x - 1.0) * 3.141593;\n    float3 dir = float3(cos(b) * cos(a), sin(b) * cos(a), sin(-a));\n    float4 c = texture0.Sample(sampler0, dir);\n    float3 hi = pow(abs(c.rgb), 0.416667) * 1.055 - 0.055;\n    float3 lo = c.rgb * 12.92;\n    c.rgb = (c.rgb <= 0.003131) ? lo : hi;\n    return c * input.col;\n}\n"
                           ,0x370,"neverlose_sky_slice","vs_main");
    if (plVar7 == (longlong *)0x0) {
      plVar8 = (longlong *)0x0;
LAB_180368989:
      bVar3 = false;
      bVar4 = false;
      if (plVar7 != (longlong *)0x0) goto LAB_180368990;
    }
    else {
      local_c8 = &local_b8;
      local_d0 = 0x8000;
      local_d8 = "ps_5_0";
      plVar8 = (longlong *)
               FUN_18036e5f0("\nTextureCube texture0 : register(t0);\nSamplerState sampler0 : register(s0);\n\nstruct vs_output {\n    float4 pos : SV_POSITION;\n    float4 col : COLOR0;\n    float2 uv : TEXCOORD0;\n};\n\nvs_output vs_main(uint id : SV_VertexID) {\n    vs_output output;\n    float2 uv = float2((id << 1) & 2, id & 2);\n    output.uv = uv;\n    output.col = float4(1.0, 1.0, 1.0, 1.0);\n    output.pos = float4(uv * float2(2.0, -2.0) + float2(-1.0, 1.0), 0.0, 1.0);\n    return output;\n}\n\nfloat4 ps_main(vs_output input) : SV_Target {\n    float a = (-input.uv.y - 1.0) * 1.570796;\n    float b = (-0.5 * input.uv.x - 1.0) * 3.141593;\n    float3 dir = float3(cos(b) * cos(a), sin(b) * cos(a), sin(-a));\n    float4 c = texture0.Sample(sampler0, dir);\n    float3 hi = pow(abs(c.rgb), 0.416667) * 1.055 - 0.055;\n    float3 lo = c.rgb * 12.92;\n    c.rgb = (c.rgb <= 0.003131) ? lo : hi;\n    return c * input.col;\n}\n"
                             ,0x370,"neverlose_sky_slice","ps_main");
      if (plVar8 == (longlong *)0x0) goto LAB_180368989;
      lVar1 = *param_1;
      uVar9 = (**(code **)(*plVar7 + 0x20))(plVar7);
      uVar10 = (**(code **)(*plVar7 + 0x18))(plVar7);
      local_d8 = (char *)&DAT_181107c10;
      iVar5 = (**(code **)(lVar1 + 0x60))(param_1,uVar10,uVar9,0);
      if (iVar5 < 0) goto LAB_180368989;
      lVar1 = *param_1;
      uVar9 = (**(code **)(*plVar8 + 0x20))(plVar8);
      uVar10 = (**(code **)(*plVar8 + 0x18))(plVar8);
      local_d8 = (char *)&DAT_181107c50;
      iVar5 = (**(code **)(lVar1 + 0x78))(param_1,uVar10,uVar9,0);
      if (iVar5 < 0) goto LAB_180368989;
      bVar4 = true;
LAB_180368990:
      bVar3 = bVar4;
      (**(code **)(*plVar7 + 0x10))(plVar7);
    }
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
    }
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_68 = _DAT_1808ad5f0;
    uStack_60 = _UNK_1808ad5f8;
    local_38 = 0x7f7fffff;
    if (bVar3) {
      iVar5 = (**(code **)(*param_1 + 0xb8))(param_1,&local_68,&DAT_181107d40);
      if (iVar5 < 0) goto LAB_1803689ee;
      bVar3 = true;
    }
    else {
LAB_1803689ee:
      bVar3 = false;
    }
    local_84 = 1;
    local_74 = 0;
    local_98 = 0x280;
    local_94 = 0x168;
    local_90 = 1;
    local_8c = 1;
    local_88 = 0x1c;
    local_7c = 0;
    local_78 = 0x28;
    if (bVar3) {
      iVar5 = (**(code **)(*param_1 + 0x28))(param_1,&local_98,0,&DAT_181107d18);
      if (iVar5 < 0) goto LAB_180368aab;
      iVar5 = (**(code **)(*param_1 + 0x38))(param_1,DAT_181107d18,0,&DAT_181107d20);
      if (iVar5 < 0) goto LAB_180368aab;
      iVar5 = (**(code **)(*param_1 + 0x48))(param_1,DAT_181107d18,0,&DAT_181107d28);
      if (iVar5 < 0) goto LAB_180368aab;
      _DAT_181107d30 = local_98;
      _DAT_181107d34 = local_94;
      _DAT_181107d38 = local_88;
      uVar6 = 1;
      DAT_181107c78 = param_1;
    }
    else {
LAB_180368aab:
      ppppuVar11 = &local_b8;
      if (0xf < local_a0) {
        ppppuVar11 = local_b8;
      }
      FUN_1802b2560("[backdrop] sky slice: resource creation failed %s",ppppuVar11);
      FUN_180368730();
      DAT_180cd0fdb = '\x01';
      uVar6 = 0;
    }
    if (0xf < local_a0) {
      uVar12 = local_a0 + 1;
      ppppuVar11 = local_b8;
      if (0xfff < uVar12) {
        ppppuVar11 = (undefined8 ****)local_b8[-1];
        if (0x1f < (ulonglong)((longlong)local_b8 + (-8 - (longlong)ppppuVar11))) {
          pcVar2 = (code *)swi(0x29);
          local_30 = (*pcVar2)(5);
          puVar13 = auStack_f0;
          goto LAB_180368b16;
        }
        uVar12 = local_a0 + 0x28;
      }
      thunk_FUN_1803d64e0(ppppuVar11,uVar12);
    }
    puVar13 = auStack_f8;
  }
  else {
LAB_180368b16:
    uVar6 = local_30 & 0xffffffffffffff00;
  }
LAB_180368b18:
  *(undefined8 *)(puVar13 + -8) = 0x180368b24;
  return uVar6;
}



/* ===== 180368b40 FUN_180368b40 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180368b40(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined1 auStack_78 [32];
  longlong *local_58;
  longlong *local_50;
  longlong local_48 [3];
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  plVar1 = DAT_1811079f8;
  local_10 = DAT_180919500 ^ (ulonglong)auStack_78;
  local_48[0] = *(longlong *)(param_2 + 0x38);
  if (((DAT_1811079f8 != (longlong *)0x0) && (DAT_1811079e0 != 0)) && (local_48[0] != 0)) {
    cVar2 = FUN_180368800();
    if (cVar2 != '\0') {
      local_58 = (longlong *)0x0;
      local_50 = (longlong *)0x0;
      (**(code **)(*plVar1 + 0x2c8))(plVar1,1,&local_58,&local_50);
      (**(code **)(*plVar1 + 0x108))(plVar1,1,&DAT_181107d28,0);
      local_48[2] = _DAT_1808ade60;
      uStack_30 = _UNK_1808ade68;
      local_28 = 0;
      local_24 = 0x3f800000;
      (**(code **)(*plVar1 + 0x160))(plVar1,1,local_48 + 2);
      local_20 = _DAT_1808ad880;
      uStack_18 = _UNK_1808ad888;
      (**(code **)(*plVar1 + 0x168))(plVar1,1,&local_20);
      (**(code **)(*plVar1 + 0x88))(plVar1,0);
      (**(code **)(*plVar1 + 0xc0))(plVar1,4);
      (**(code **)(*plVar1 + 0x58))(plVar1,DAT_181107c10,0,0);
      (**(code **)(*plVar1 + 0x48))(plVar1,DAT_181107c50,0,0);
      (**(code **)(*plVar1 + 0x40))(plVar1,0,1,local_48);
      (**(code **)(*plVar1 + 0x50))(plVar1,0,1,&DAT_181107d40);
      (**(code **)(*plVar1 + 0x68))(plVar1,3,0);
      local_48[1] = 0;
      (**(code **)(*plVar1 + 0x40))(plVar1,0,1,local_48 + 1);
      (**(code **)(*plVar1 + 0x108))(plVar1,1,&local_58,local_50);
      if (local_58 != (longlong *)0x0) {
        (**(code **)(*local_58 + 0x10))();
        local_58 = (longlong *)0x0;
      }
      if (local_50 != (longlong *)0x0) {
        (**(code **)(*local_50 + 0x10))();
      }
    }
  }
  return;
}



/* ===== 180368d40 FUN_180368d40 ===== */

undefined8 * FUN_180368d40(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined8 *puVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  
  lVar14 = (longlong)DAT_181107d50;
  uVar15 = 0x555555555555555;
  lVar7 = ((longlong)DAT_181107d58 - (longlong)DAT_181107d50 >> 4) * -0x5555555555555555;
  if (lVar7 == 0x555555555555555) {
                    /* WARNING: Subroutine does not return */
    FUN_18000fb10();
  }
  uVar1 = lVar7 + 1;
  uVar9 = ((longlong)DAT_181107d60 - (longlong)DAT_181107d50 >> 4) * -0x5555555555555555;
  if (uVar9 <= 0x555555555555555 - (uVar9 >> 1)) {
    uVar9 = (uVar9 >> 1) + uVar9;
    uVar15 = uVar1;
    if (uVar1 <= uVar9) {
      uVar15 = uVar9;
    }
    if (0x555555555555555 < uVar15) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  puVar8 = (undefined8 *)FUN_18000fb70(uVar15 * 0x30);
  uVar6 = param_3[1];
  puVar13 = puVar8 + ((param_2 - lVar14) / 0x30) * 6;
  *puVar13 = *param_3;
  puVar13[1] = uVar6;
  uVar3 = *(undefined4 *)((longlong)param_3 + 0x14);
  uVar4 = *(undefined4 *)(param_3 + 3);
  uVar5 = *(undefined4 *)((longlong)param_3 + 0x1c);
  *(undefined4 *)(puVar13 + 2) = *(undefined4 *)(param_3 + 2);
  *(undefined4 *)((longlong)puVar13 + 0x14) = uVar3;
  *(undefined4 *)(puVar13 + 3) = uVar4;
  *(undefined4 *)((longlong)puVar13 + 0x1c) = uVar5;
  uVar3 = *(undefined4 *)((longlong)param_3 + 0x24);
  uVar4 = *(undefined4 *)(param_3 + 5);
  uVar5 = *(undefined4 *)((longlong)param_3 + 0x2c);
  *(undefined4 *)(puVar13 + 4) = *(undefined4 *)(param_3 + 4);
  *(undefined4 *)((longlong)puVar13 + 0x24) = uVar3;
  *(undefined4 *)(puVar13 + 5) = uVar4;
  *(undefined4 *)((longlong)puVar13 + 0x2c) = uVar5;
  if ((undefined8 *)param_2 == DAT_181107d58) {
    lVar14 = (longlong)DAT_181107d58 - (longlong)DAT_181107d50;
    puVar10 = puVar8;
    param_2 = (longlong)DAT_181107d50;
  }
  else {
    FUN_180540530(puVar8,DAT_181107d50,param_2 - (longlong)DAT_181107d50);
    puVar10 = puVar13 + 6;
    lVar14 = (longlong)DAT_181107d58 - param_2;
  }
  puVar11 = auStack_38;
  puVar12 = auStack_38;
  FUN_180540530(puVar10,param_2,lVar14);
  if (DAT_181107d50 == (undefined8 *)0x0) goto LAB_180368ec7;
  lVar14 = (longlong)DAT_181107d50;
  if ((ulonglong)(((longlong)DAT_181107d60 - (longlong)DAT_181107d50 >> 4) << 4) < 0x1000) {
LAB_180368ebc:
    puVar12 = puVar11;
  }
  else {
    lVar14 = *(longlong *)((longlong)DAT_181107d50 + -8);
    if (0x1f < ((longlong)DAT_181107d50 - lVar14) - 8U) {
      lVar14 = 5;
      pcVar2 = (code *)swi(0x29);
      (*pcVar2)(5);
      puVar11 = auStack_30;
      goto LAB_180368ebc;
    }
  }
  *(undefined8 *)(puVar12 + -8) = 0x180368ec7;
  thunk_FUN_1803d64e0(lVar14);
LAB_180368ec7:
  DAT_181107d50 = puVar8;
  DAT_181107d58 = puVar8 + uVar1 * 6;
  DAT_181107d60 = puVar8 + uVar15 * 6;
  return puVar13;
}



/* ===== 180368f20 FUN_180368f20 ===== */

longlong FUN_180368f20(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  ulonglong uVar1;
  undefined4 *puVar2;
  longlong lVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  
  lVar3 = DAT_181107d68;
  uVar14 = 0xccccccccccccccc;
  lVar8 = (DAT_181107d70 - DAT_181107d68 >> 2) * -0x3333333333333333;
  if (lVar8 == 0xccccccccccccccc) {
                    /* WARNING: Subroutine does not return */
    FUN_18000fb10();
  }
  uVar1 = lVar8 + 1;
  uVar9 = (DAT_181107d78 - DAT_181107d68 >> 2) * -0x3333333333333333;
  if (uVar9 <= 0xccccccccccccccc - (uVar9 >> 1)) {
    uVar9 = (uVar9 >> 1) + uVar9;
    uVar14 = uVar1;
    if (uVar1 <= uVar9) {
      uVar14 = uVar9;
    }
    if (0xccccccccccccccc < uVar14) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  lVar8 = FUN_18000fb70(uVar14 * 0x14);
  uVar5 = param_3[1];
  uVar6 = param_3[2];
  uVar7 = param_3[3];
  lVar3 = (param_2 - lVar3) / 0x14;
  puVar2 = (undefined4 *)(lVar8 + lVar3 * 0x14);
  *puVar2 = *param_3;
  puVar2[1] = uVar5;
  puVar2[2] = uVar6;
  puVar2[3] = uVar7;
  lVar3 = lVar8 + lVar3 * 0x14;
  *(undefined4 *)(lVar3 + 0x10) = param_3[4];
  if (param_2 == DAT_181107d70) {
    lVar13 = DAT_181107d70 - DAT_181107d68;
    lVar10 = lVar8;
    param_2 = DAT_181107d68;
  }
  else {
    FUN_180540530(lVar8,DAT_181107d68,param_2 - DAT_181107d68);
    lVar10 = lVar3 + 0x14;
    lVar13 = DAT_181107d70 - param_2;
  }
  puVar11 = auStack_38;
  puVar12 = auStack_38;
  FUN_180540530(lVar10,param_2,lVar13);
  if (DAT_181107d68 == 0) goto LAB_1803690a1;
  lVar10 = DAT_181107d68;
  if ((ulonglong)((DAT_181107d78 - DAT_181107d68 >> 2) * 4) < 0x1000) {
LAB_180369096:
    puVar12 = puVar11;
  }
  else {
    lVar10 = *(longlong *)(DAT_181107d68 + -8);
    if (0x1f < (DAT_181107d68 - lVar10) - 8U) {
      lVar10 = 5;
      pcVar4 = (code *)swi(0x29);
      (*pcVar4)(5);
      puVar11 = auStack_30;
      goto LAB_180369096;
    }
  }
  *(undefined8 *)(puVar12 + -8) = 0x1803690a1;
  thunk_FUN_1803d64e0(lVar10);
LAB_1803690a1:
  DAT_181107d68 = lVar8;
  DAT_181107d70 = lVar8 + uVar1 * 0x14;
  DAT_181107d78 = uVar14 * 0x14 + lVar8;
  return lVar3;
}



