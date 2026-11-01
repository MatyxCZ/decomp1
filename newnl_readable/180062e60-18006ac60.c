/* ===== 180062e60 FUN_180062e60 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180062e60(undefined8 param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 ****ppppuVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined1 auStack_1a8 [48];
  longlong local_178;
  undefined1 uStack_170;
  undefined1 uStack_16f;
  undefined4 uStack_16c;
  longlong local_168 [2];
  byte abStack_158 [56];
  longlong alStack_120 [25];
  undefined8 ****local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  undefined8 local_38;
  undefined2 uStack_30;
  undefined2 uStack_2a;
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_1a8;
  puVar2 = (undefined8 *)FUN_180062c10(&local_38,param_1);
  if (0xf < (ulonglong)puVar2[3]) {
    puVar2 = (undefined8 *)*puVar2;
  }
  FUN_1800695d0(local_168,puVar2,0x20);
  *(undefined ***)((longlong)local_168 + (longlong)*(int *)(local_168[0] + 4)) =
       std::basic_ifstream<char,std::char_traits<char>_>::vftable;
  *(int *)((longlong)local_168 + (longlong)*(int *)(local_168[0] + 4) + -4) =
       *(int *)(local_168[0] + 4) + -0xb0;
  FUN_18000f890(&local_38);
  if ((abStack_158[*(int *)(local_168[0] + 4)] & 6) != 0) {
    uVar5 = 0;
    goto LAB_18006300e;
  }
  local_178 = *(longlong *)((longlong)alStack_120 + (longlong)*(int *)(local_168[0] + 4));
  uStack_170 = local_178 == 0;
  local_58 = (undefined8 ****)0x0;
  uStack_50 = 0;
  local_48 = 0;
  local_40 = 0;
  uStack_16f = 0;
  uStack_16c._2_2_ = uStack_2a;
  local_38 = 0;
  uStack_30 = 1;
  if (local_178 == 0) {
LAB_180062f6e:
    local_48 = 0;
    local_40 = 0xf;
    local_58 = (undefined8 ****)((ulonglong)local_58 & 0xffffffffffffff00);
  }
  else {
    FUN_18006c630(&local_178);
    if (local_178 == 0) goto LAB_180062f6e;
    FUN_180068a20(&local_58,&local_178,&local_38);
  }
  ppppuVar3 = &local_58;
  if (0xf < local_40) {
    ppppuVar3 = local_58;
  }
  FUN_18047f450(param_1,ppppuVar3,local_48);
  if (0xf < local_40) {
    uVar4 = local_40 + 1;
    ppppuVar3 = local_58;
    if (0xfff < uVar4) {
      ppppuVar3 = (undefined8 ****)local_58[-1];
      if (0x1f < (ulonglong)((longlong)local_58 + (-8 - (longlong)ppppuVar3))) {
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        pcVar1 = (code *)swi(3);
        uVar5 = (*pcVar1)();
        return uVar5;
      }
      uVar4 = local_40 + 0x28;
    }
    thunk_FUN_1803d64e0(ppppuVar3,uVar4);
  }
  uVar5 = 1;
  local_48 = 0;
  local_40 = 0xf;
  local_58 = (undefined8 ****)((ulonglong)local_58 & 0xffffffffffffff00);
LAB_18006300e:
  FUN_18005e2f0(local_168);
  return uVar5;
}



/* ===== 180063050 FUN_180063050 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180063050(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 ****ppppuVar3;
  undefined1 auStack_218 [48];
  undefined4 local_1e8;
  undefined8 local_1e0;
  undefined ***local_1d8;
  undefined8 ****local_1c8;
  undefined8 local_1c0;
  undefined4 local_1b8 [2];
  undefined8 local_1b0;
  longlong local_1a8;
  undefined1 local_1a0 [8];
  byte abStack_198 [152];
  undefined8 **local_100 [13];
  undefined8 ****local_98 [2];
  undefined8 local_88;
  ulonglong local_80;
  undefined1 local_78 [32];
  undefined1 local_58 [32];
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStack_218;
  local_1e8 = 0;
  FUN_180062c10(local_98,param_1);
  local_1e0 = 0;
  uVar1 = FUN_18047e090(param_1,2,&local_1e0);
  local_1b8[0] = 0;
  local_1b0 = &PTR_vftable_18091a158;
  local_1d8 = (undefined ***)local_78;
  local_1c8 = local_98;
  if (0xf < local_80) {
    local_1c8 = local_98[0];
  }
  local_1c0 = local_88;
  FUN_180028c20(local_78,&local_1c8);
  local_1e8 = 0;
  uVar2 = FUN_180014350(local_78,local_58);
  FUN_180016bc0(uVar2,local_1b8);
  FUN_1800289e0(local_58);
  FUN_1800289e0(local_78);
  ppppuVar3 = local_98;
  if (0xf < local_80) {
    ppppuVar3 = local_98[0];
  }
  FUN_180069440(&local_1a8,ppppuVar3,0x30);
  *(undefined ***)(local_1a0 + (longlong)*(int *)(local_1a8 + 4) + -8) =
       std::basic_ofstream<char,std::char_traits<char>_>::vftable;
  *(int *)((longlong)local_1b8 + (longlong)*(int *)(local_1a8 + 4) + 0xc) =
       *(int *)(local_1a8 + 4) + -0xa8;
  if ((abStack_198[*(int *)(local_1a8 + 4)] & 6) == 0) {
    FUN_1800682a0(&local_1a8,uVar1,local_1e0);
  }
  FUN_18047f270(param_1,(abStack_198[*(int *)(local_1a8 + 4)] & 6) == 0);
  local_1d8 = (undefined ***)local_100;
  *(undefined ***)(local_1a0 + (longlong)*(int *)(local_1a8 + 4) + -8) =
       std::basic_ofstream<char,std::char_traits<char>_>::vftable;
  *(int *)((longlong)local_1b8 + (longlong)*(int *)(local_1a8 + 4) + 0xc) =
       *(int *)(local_1a8 + 4) + -0xa8;
  FUN_1800681f0(local_1a0);
  *(undefined ***)(local_1a0 + (longlong)*(int *)(local_1a8 + 4) + -8) =
       std::basic_ostream<char,std::char_traits<char>_>::vftable;
  *(int *)((longlong)local_1b8 + (longlong)*(int *)(local_1a8 + 4) + 0xc) =
       *(int *)(local_1a8 + 4) + -0x10;
  local_1c8 = (undefined8 ****)local_100;
  local_100[0] = (undefined8 **)std::ios_base::vftable;
  FUN_1804eaa10(local_100);
  FUN_18000f890(local_98);
  return 1;
}



/* ===== 1800632a0 FUN_1800632a0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1800632a0(undefined8 param_1,char *param_2,int param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  size_t sVar7;
  char *_Str;
  undefined8 uVar8;
  undefined8 **ppuVar9;
  undefined8 **ppuVar10;
  undefined8 *puVar11;
  int iVar12;
  undefined8 *puVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined1 auStack_1f8 [8];
  undefined1 auStack_1f0 [24];
  undefined8 *local_1d8;
  undefined8 *local_1d0;
  undefined8 *local_1c8;
  undefined8 *local_1c0;
  undefined8 local_1b8 [18];
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 *local_b8;
  undefined8 *puStack_b0;
  undefined8 *local_a8;
  int local_a0;
  undefined1 local_98;
  undefined7 uStack_97;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 local_78;
  undefined7 uStack_77;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  ulonglong local_58;
  
  local_58 = DAT_180919500 ^ (ulonglong)auStack_1f8;
  FUN_18047eb70(param_1,0xffffd8f0,"wl_state");
  lVar5 = FUN_18047fd90(param_1,0xffffffff);
  FUN_18047fb50(param_1,0xfffffffe);
  if (*(char *)(lVar5 + 0x4b) == '\0') {
    uVar6 = FUN_180484c10(param_1,
                          "%s needs \"allow insecure\" (lua page) and the script loaded again",
                          &DAT_1806e0b00);
    puVar16 = auStack_1f8;
    goto LAB_1800637d2;
  }
  local_128 = 0;
  local_120 = 0xfffffffe;
  uStack_110 = 0;
  local_108 = 0;
  local_100 = 0xf;
  local_118 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  local_e0 = 0xf;
  local_f8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  local_c0 = 0xf;
  local_d8 = 0;
  local_b8 = (undefined8 *)0x0;
  puStack_b0 = (undefined8 *)0x0;
  local_a8 = (undefined8 *)0x0;
  local_a0 = 10000;
  sVar7 = strlen(param_2);
  FUN_180029840(&local_118,param_2,sVar7);
  _Str = (char *)FUN_18047e090(param_1,1,0);
  sVar7 = strlen(_Str);
  FUN_180029840(&local_f8,_Str,sVar7);
  uVar6 = 2;
  iVar12 = 2;
  if (param_3 != 0) {
    local_1d8 = (undefined8 *)0x0;
    uVar8 = FUN_18047e090(param_1,param_3,&local_1d8);
    FUN_180029840(&local_d8,uVar8,local_1d8);
    iVar12 = param_3 + 1;
  }
  iVar4 = FUN_18047fe10(param_1,iVar12);
  if (iVar4 == 5) {
    FUN_18047eb70(param_1,iVar12,"headers");
    iVar4 = FUN_18047fe10(param_1,0xffffffff);
    if (iVar4 == 5) {
      FUN_18047f4d0(param_1);
      iVar4 = FUN_18047f060(param_1,0xfffffffe);
      while (iVar4 != 0) {
        iVar4 = FUN_18047fe10(param_1,0xfffffffe);
        if ((iVar4 == 4) && (iVar4 = FUN_18047ee00(param_1,0xffffffff), iVar4 != 0)) {
          uVar8 = FUN_18047fc70(param_1,0xfffffffe,0);
          FUN_180013350(&local_98,uVar8);
          uVar8 = FUN_18047fc70(param_1,0xffffffff);
          FUN_180013350(&local_78,uVar8);
          if (puStack_b0 == local_a8) {
            FUN_18006a540(&local_b8);
          }
          else {
            local_1c0 = puStack_b0;
            *puStack_b0 = 0;
            puStack_b0[1] = 0;
            puStack_b0[2] = 0;
            puStack_b0[3] = 0;
            *puStack_b0 = CONCAT71(uStack_97,local_98);
            puStack_b0[1] = local_90;
            puStack_b0[2] = local_88;
            puStack_b0[3] = local_80;
            local_88 = 0;
            local_80 = 0xf;
            local_98 = 0;
            puStack_b0[4] = 0;
            puStack_b0[5] = 0;
            puStack_b0[6] = 0;
            puStack_b0[7] = 0;
            puStack_b0[4] = CONCAT71(uStack_77,local_78);
            puStack_b0[5] = local_70;
            puStack_b0[6] = local_68;
            puStack_b0[7] = local_60;
            local_68 = 0;
            local_60 = 0xf;
            local_78 = 0;
            puStack_b0 = puStack_b0 + 8;
          }
          FUN_18000f890(&local_78);
          FUN_18000f890(&local_98);
        }
        FUN_18047fb50(param_1,0xfffffffe);
        iVar4 = FUN_18047f060(param_1,0xfffffffe);
      }
    }
    FUN_18047fb50(param_1,0xfffffffe);
    FUN_18047eb70(param_1,iVar12,"timeout");
    iVar4 = FUN_18047edb0(param_1,0xffffffff);
    puVar13 = DAT_1808ac648;
    puVar11 = DAT_1808ac500;
    if (iVar4 != 0) {
      local_1d0 = DAT_1808ac648;
      local_1d8 = DAT_1808ac500;
      local_1c8 = (undefined8 *)FUN_18047fd30(param_1,0xffffffff);
      ppuVar10 = &local_1d8;
      if ((double)puVar11 <= (double)local_1c8) {
        ppuVar10 = &local_1c8;
      }
      ppuVar9 = &local_1d0;
      if ((double)local_1c8 <= (double)puVar13) {
        ppuVar9 = ppuVar10;
      }
      local_a0 = (int)((double)*ppuVar9 * DAT_1808ac730);
    }
    FUN_18047fb50(param_1,0xfffffffe);
    iVar12 = iVar12 + 1;
  }
  puVar14 = auStack_1f8;
  puVar15 = auStack_1f8;
  FUN_18047e240(param_1,iVar12,6);
  FUN_18047f610(param_1,iVar12);
  local_120 = FUN_1804851b0(param_1,0xffffd8f0);
  FUN_18047eb70(param_1,0xffffd8f0,"wl_state");
  lVar5 = FUN_18047fd90(param_1,0xffffffff);
  FUN_18047fb50(param_1,0xfffffffe);
  uVar2 = local_120;
  local_128 = *(undefined8 *)(lVar5 + 0x148);
  local_1d0 = local_1b8;
  uVar8 = FUN_180063850(local_1b8,&local_128);
  cVar3 = FUN_1800966d0(uVar8);
  if (cVar3 == '\0') {
    FUN_180485280(param_1,0xffffd8f0,uVar2);
    FUN_18047f270(param_1,0);
    FUN_18047f530(param_1,"too many requests running");
  }
  else {
    FUN_18047f270(param_1,1);
    uVar6 = 1;
  }
  puVar11 = puStack_b0;
  puVar16 = auStack_1f8;
  if (local_b8 != (undefined8 *)0x0) {
    for (puVar13 = local_b8; local_1d0 = puVar13, puVar13 != puVar11; puVar13 = puVar13 + 8) {
      FUN_18000f890(puVar13 + 4);
      FUN_18000f890(puVar13);
    }
    puVar11 = local_b8;
    if (((longlong)local_a8 - (longlong)local_b8 & 0xffffffffffffffc0U) < 0x1000) {
LAB_18006379d:
      puVar15 = puVar14;
    }
    else {
      puVar11 = (undefined8 *)local_b8[-1];
      puVar13 = (undefined8 *)((longlong)local_b8 + (-8 - (longlong)puVar11));
      if (&DAT_0000001f < puVar13) {
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        puVar14 = auStack_1f0;
        puVar11 = puVar13;
        goto LAB_18006379d;
      }
    }
    *(undefined8 *)(puVar15 + -8) = 0x1800637a5;
    thunk_FUN_1803d64e0(puVar11);
    local_b8 = (undefined8 *)0x0;
    puStack_b0 = (undefined8 *)0x0;
    local_a8 = (undefined8 *)0x0;
    puVar16 = puVar15;
  }
  *(undefined8 *)(puVar16 + -8) = 0x1800637ba;
  FUN_18000f890(&local_d8);
  *(undefined8 *)(puVar16 + -8) = 0x1800637c4;
  FUN_18000f890(&local_f8);
  *(undefined8 *)(puVar16 + -8) = 0x1800637ce;
  FUN_18000f890(&local_118);
LAB_1800637d2:
  *(undefined8 *)(puVar16 + -8) = 0x1800637e1;
  return uVar6;
}



/* ===== 180063810 FUN_180063810 ===== */

void FUN_180063810(longlong param_1)

{
  FUN_180066ff0(param_1 + 0x70);
  FUN_18000f890(param_1 + 0x50);
  FUN_18000f890(param_1 + 0x30);
  FUN_18000f890(param_1 + 0x10);
  return;
}



/* ===== 180063850 FUN_180063850 ===== */

undefined8 * FUN_180063850(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar1 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  *(undefined1 *)(param_2 + 2) = 0;
  param_2[4] = 0;
  param_2[5] = 0xf;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  uVar1 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar1;
  uVar1 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar1;
  *(undefined1 *)(param_2 + 6) = 0;
  param_2[8] = 0;
  param_2[9] = 0xf;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  uVar1 = param_2[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar1;
  uVar1 = param_2[0xd];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar1;
  *(undefined1 *)(param_2 + 10) = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0xf;
  uVar1 = param_2[0x10];
  param_2[0x10] = 0;
  uVar2 = param_2[0xf];
  param_2[0xf] = 0;
  uVar3 = param_2[0xe];
  param_2[0xe] = 0;
  param_1[0xe] = uVar3;
  param_1[0xf] = uVar2;
  param_1[0x10] = uVar1;
  *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(param_2 + 0x11);
  return param_1;
}



/* ===== 180063970 FUN_180063970 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180063970(longlong param_1)

{
  undefined8 *****pppppuVar1;
  undefined8 uVar2;
  undefined8 *****pppppuVar3;
  size_t sVar4;
  ulonglong uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined8 *****_Buf1;
  undefined8 *****pppppuVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 *****local_70 [2];
  size_t local_60;
  ulonglong local_58;
  ulonglong local_50;
  
  local_50 = DAT_180919500 ^ (ulonglong)auStack_98;
  lVar9 = *(longlong *)(param_1 + 0x1b0);
  if ((*(longlong *)(param_1 + 0x1b8) - lVar9 >> 3) * -0x3333333333333333 != 0) {
    uVar10 = 0;
    local_78 = *(undefined8 *)(param_1 + 0x40);
    do {
      if (*(char *)(param_1 + 0x48) != '\0') {
        return;
      }
      iVar6 = *(int *)(lVar9 + uVar10 * 0x28);
      if ((-1 < iVar6) && (iVar6 < (int)(DAT_180ccfa00 - DAT_180ccf9f8 >> 5) * -0x49249249)) {
        FUN_180058a50(local_70,(longlong)iVar6 * 0xe0 + DAT_180ccf9f8);
        uVar5 = local_58;
        sVar4 = local_60;
        pppppuVar3 = local_70[0];
        pppppuVar1 = (undefined8 *****)(lVar9 + (uVar10 * 5 + 1) * 8);
        if (*(ulonglong *)(lVar9 + 0x20 + uVar10 * 0x28) < 0x10) {
          pppppuVar8 = pppppuVar1;
        }
        else {
          pppppuVar8 = (undefined8 *****)*pppppuVar1;
        }
        _Buf1 = local_70;
        if (0xf < local_58) {
          _Buf1 = local_70[0];
        }
        if ((local_60 == *(size_t *)(lVar9 + 0x18 + uVar10 * 0x28)) &&
           ((local_60 == 0 || (iVar6 = memcmp(_Buf1,pppppuVar8,local_60), iVar6 == 0)))) {
          FUN_18000f890(local_70);
        }
        else {
          if ((undefined8 ******)pppppuVar1 != local_70) {
            pppppuVar8 = local_70;
            if (0xf < uVar5) {
              pppppuVar8 = pppppuVar3;
            }
            FUN_180029840(pppppuVar1,pppppuVar8,sVar4);
          }
          uVar2 = local_78;
          FUN_18047f6f0(local_78,0xffffd8f0,*(undefined4 *)(lVar9 + 4 + uVar10 * 0x28));
          puVar7 = (undefined4 *)FUN_18047efb0(uVar2,4);
          *puVar7 = *(undefined4 *)(lVar9 + uVar10 * 0x28);
          FUN_18047eb70(uVar2,0xffffd8f0,"wl.menu_control");
          FUN_18047f990(uVar2,0xfffffffe);
          FUN_180070500(param_1,1,0);
          FUN_18000f890(local_70);
        }
      }
      uVar10 = uVar10 + 1;
      lVar9 = *(longlong *)(param_1 + 0x1b0);
    } while (uVar10 < (ulonglong)
                      ((*(longlong *)(param_1 + 0x1b8) - lVar9 >> 3) * -0x3333333333333333));
  }
  return;
}



/* ===== 180063b70 FUN_180063b70 ===== */

void FUN_180063b70(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x170);
  for (lVar2 = *(longlong *)(param_1 + 0x168); lVar2 != lVar1; lVar2 = lVar2 + 0x20) {
    FUN_1801c5f50(lVar2);
  }
  lVar1 = *(longlong *)(param_1 + 0x188);
  for (lVar2 = *(longlong *)(param_1 + 0x180); lVar2 != lVar1; lVar2 = lVar2 + 0x20) {
    FUN_18033d6c0(lVar2,0);
  }
  lVar1 = *(longlong *)(param_1 + 0x1a0);
  for (lVar2 = *(longlong *)(param_1 + 0x198); lVar2 != lVar1; lVar2 = lVar2 + 0x20) {
    FUN_18033d8f0(lVar2,0);
  }
  lVar1 = *(longlong *)(param_1 + 0x170);
  lVar2 = *(longlong *)(param_1 + 0x168);
  if (lVar2 != lVar1) {
    do {
      FUN_18000f890(lVar2);
      lVar2 = lVar2 + 0x20;
    } while (lVar2 != lVar1);
    *(undefined8 *)(param_1 + 0x170) = *(undefined8 *)(param_1 + 0x168);
  }
  lVar1 = *(longlong *)(param_1 + 0x188);
  lVar2 = *(longlong *)(param_1 + 0x180);
  if (lVar2 != lVar1) {
    do {
      FUN_18000f890(lVar2);
      lVar2 = lVar2 + 0x20;
    } while (lVar2 != lVar1);
    *(undefined8 *)(param_1 + 0x188) = *(undefined8 *)(param_1 + 0x180);
  }
  lVar1 = *(longlong *)(param_1 + 0x1a0);
  lVar2 = *(longlong *)(param_1 + 0x198);
  if (lVar2 != lVar1) {
    do {
      FUN_18000f890(lVar2);
      lVar2 = lVar2 + 0x20;
    } while (lVar2 != lVar1);
    *(undefined8 *)(param_1 + 0x1a0) = *(undefined8 *)(param_1 + 0x198);
  }
  lVar1 = *(longlong *)(param_1 + 0x1b8);
  lVar2 = *(longlong *)(param_1 + 0x1b0);
  if (lVar2 != lVar1) {
    do {
      FUN_18000f890(lVar2 + 8);
      lVar2 = lVar2 + 0x28;
    } while (lVar2 != lVar1);
    *(undefined8 *)(param_1 + 0x1b8) = *(undefined8 *)(param_1 + 0x1b0);
  }
  return;
}



/* ===== 180063cf0 FUN_180063cf0 ===== */

void FUN_180063cf0(longlong param_1,float *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  FUN_18047f6f0(uVar1,0xffffd8f0,*(undefined4 *)(param_1 + 0x140));
  FUN_18047f4f0(uVar1,(double)*param_2);
  FUN_18047f4f0(uVar1,(double)param_2[1]);
  FUN_18047f4f0(uVar1,(double)param_2[2]);
  FUN_18047e730(uVar1,3,1);
  return;
}



/* ===== 180063d70 FUN_180063d70 ===== */

float * FUN_180063d70(float *param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  double dVar2;
  float fVar3;
  float fVar4;
  
  FUN_18047e240(param_2,param_3,5);
  FUN_18047eb70(param_2,param_3,&DAT_1806d23e4);
  iVar1 = FUN_18047edb0(param_2,0xffffffff);
  fVar3 = 0.0;
  if (iVar1 == 0) {
    fVar4 = 0.0;
  }
  else {
    dVar2 = (double)FUN_18047fd30(param_2,0xffffffff);
    fVar4 = (float)dVar2;
  }
  FUN_18047fb50(param_2,0xfffffffe);
  *param_1 = fVar4;
  FUN_18047eb70(param_2,param_3,&DAT_1806d23e8);
  iVar1 = FUN_18047edb0(param_2,0xffffffff);
  if (iVar1 == 0) {
    fVar4 = 0.0;
  }
  else {
    dVar2 = (double)FUN_18047fd30(param_2,0xffffffff);
    fVar4 = (float)dVar2;
  }
  FUN_18047fb50(param_2,0xfffffffe);
  param_1[1] = fVar4;
  FUN_18047eb70(param_2,param_3,&DAT_1806d23ec);
  iVar1 = FUN_18047edb0(param_2,0xffffffff);
  if (iVar1 != 0) {
    dVar2 = (double)FUN_18047fd30(param_2,0xffffffff);
    fVar3 = (float)dVar2;
  }
  FUN_18047fb50(param_2,0xfffffffe);
  param_1[2] = fVar3;
  return param_1;
}



/* ===== 180063eb0 FUN_180063eb0 ===== */

uint FUN_180063eb0(undefined8 param_1,undefined4 param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  double dVar8;
  float local_88 [24];
  
  iVar5 = FUN_18047fe10();
  if (iVar5 != 5) {
    FUN_180484c10(param_1,"bad argument #%d (a color is needed: color(r, g, b, a))",param_2);
  }
  fVar4 = DAT_1808acb94;
  local_88[2] = 255.0;
  local_88[0] = 0.0;
  FUN_18047eb70(param_1,param_2,&DAT_1806e0b78);
  iVar5 = FUN_18047edb0(param_1,0xffffffff);
  if (iVar5 == 0) {
    local_88[1] = fVar4;
  }
  else {
    dVar8 = (double)FUN_18047fd30(param_1,0xffffffff);
    local_88[1] = (float)dVar8;
  }
  FUN_18047fb50(param_1,0xfffffffe);
  local_88[5] = 255.0;
  local_88[3] = 0.0;
  pfVar7 = local_88;
  if (0.0 <= local_88[1]) {
    pfVar7 = local_88 + 1;
  }
  pfVar6 = local_88 + 2;
  if (local_88[1] <= fVar4) {
    pfVar6 = pfVar7;
  }
  fVar1 = *pfVar6;
  FUN_18047eb70(param_1,param_2,&DAT_1806dfd5c);
  iVar5 = FUN_18047edb0(param_1,0xffffffff);
  if (iVar5 == 0) {
    local_88[4] = fVar4;
  }
  else {
    dVar8 = (double)FUN_18047fd30(param_1,0xffffffff);
    local_88[4] = (float)dVar8;
  }
  FUN_18047fb50(param_1,0xfffffffe);
  local_88[8] = 255.0;
  local_88[6] = 0.0;
  pfVar7 = local_88 + 3;
  if (0.0 <= local_88[4]) {
    pfVar7 = local_88 + 4;
  }
  pfVar6 = local_88 + 5;
  if (local_88[4] <= fVar4) {
    pfVar6 = pfVar7;
  }
  fVar2 = *pfVar6;
  FUN_18047eb70(param_1,param_2,&DAT_1806e0b7c);
  iVar5 = FUN_18047edb0(param_1,0xffffffff);
  if (iVar5 == 0) {
    local_88[7] = fVar4;
  }
  else {
    dVar8 = (double)FUN_18047fd30(param_1,0xffffffff);
    local_88[7] = (float)dVar8;
  }
  FUN_18047fb50(param_1,0xfffffffe);
  local_88[0xb] = 255.0;
  local_88[9] = 0.0;
  pfVar7 = local_88 + 6;
  if (0.0 <= local_88[7]) {
    pfVar7 = local_88 + 7;
  }
  pfVar6 = local_88 + 8;
  if (local_88[7] <= fVar4) {
    pfVar6 = pfVar7;
  }
  fVar3 = *pfVar6;
  FUN_18047eb70(param_1,param_2,&DAT_1806dfd74);
  iVar5 = FUN_18047edb0(param_1,0xffffffff);
  if (iVar5 == 0) {
    local_88[10] = fVar4;
  }
  else {
    dVar8 = (double)FUN_18047fd30(param_1,0xffffffff);
    local_88[10] = (float)dVar8;
  }
  FUN_18047fb50(param_1,0xfffffffe);
  pfVar7 = local_88 + 9;
  if (0.0 <= local_88[10]) {
    pfVar7 = local_88 + 10;
  }
  pfVar6 = local_88 + 0xb;
  if (local_88[10] <= fVar4) {
    pfVar6 = pfVar7;
  }
  return (int)*pfVar6 | (int)fVar3 << 8 | (int)fVar2 << 0x10 | (int)fVar1 << 0x18;
}



/* ===== 180064120 FUN_180064120 ===== */

void FUN_180064120(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  float fVar2;
  longlong lVar3;
  float fVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  FUN_18047f6f0(uVar1,0xffffd8f0,*(undefined4 *)(param_1 + 0x144));
  fVar2 = DAT_1808acb94;
  lVar3 = 0;
  do {
    fVar4 = (float)FUN_180519080(*(float *)(param_2 + lVar3 * 4) * fVar2);
    FUN_18047f4f0(uVar1,(double)fVar4);
    lVar3 = lVar3 + 1;
  } while (lVar3 != 4);
  FUN_18047e730(uVar1,4,1);
  return;
}



/* ===== 1800641b0 FUN_1800641b0 ===== */

void FUN_1800641b0(longlong param_1)

{
  char **ppcVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  int iVar6;
  undefined **ppuVar7;
  char **ppcVar8;
  char *local_318;
  code *local_310;
  char *local_308;
  code *local_300;
  char *local_2f8;
  code *local_2f0;
  char *local_2e8;
  code *local_2e0;
  char *local_2d8;
  code *local_2d0;
  char *local_2c8;
  code *local_2c0;
  char *local_2b8;
  code *local_2b0;
  char *local_2a8;
  code *local_2a0;
  char *local_298;
  code *local_290;
  char *local_288;
  code *local_280;
  char *local_278;
  code *local_270;
  char *local_268;
  code *local_260;
  char *local_258;
  code *local_250;
  char *local_248;
  code *local_240;
  char *local_238;
  code *local_230;
  char *local_228;
  code *local_220;
  char *local_218;
  code *local_210;
  char *local_208;
  code *local_200;
  char *local_1f8;
  code *local_1f0;
  char *local_1e8;
  code *local_1e0;
  char *local_1d8;
  code *local_1d0;
  char *local_1c8;
  code *local_1c0;
  char *local_1b8;
  code *local_1b0;
  char *local_1a8;
  code *local_1a0;
  char *local_198;
  code *local_190;
  char *local_188;
  code *local_180;
  char *local_178;
  code *local_170;
  char *local_168;
  code *local_160;
  char *local_158;
  code *local_150;
  char *local_148;
  undefined1 *local_140;
  char *local_138;
  code *local_130;
  char *local_128;
  undefined1 *local_120;
  char *local_118;
  code *local_110;
  char *local_108;
  code *local_100;
  char *local_f8;
  code *local_f0;
  char *local_e8;
  code *local_e0;
  char *local_d8;
  code *local_d0;
  char *local_c8;
  code *local_c0;
  char *local_b8;
  code *local_b0;
  char *local_a8;
  code *local_a0;
  char *local_98;
  code *local_90;
  undefined *local_88;
  code *local_80;
  char *local_78;
  code *local_70;
  char *local_68;
  code *local_60;
  undefined8 local_58;
  undefined8 local_50;
  
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  FUN_18047f2b0(uVar3,FUN_18004ed60,0);
  FUN_18047f8e0(uVar3,0xffffd8ee,"print");
  local_318 = "on";
  local_2f8 = (char *)0x0;
  local_310 = FUN_18004ee00;
  local_2f0 = (code *)0x0;
  local_308 = "off";
  local_300 = FUN_18004f020;
  FUN_18047e8f0(uVar3,0,0);
  ppcVar8 = &local_318;
  do {
    FUN_18047f2b0(uVar3,ppcVar8[1],0);
    FUN_18047f8e0(uVar3,0xfffffffe);
    ppcVar1 = ppcVar8 + 2;
    ppcVar8 = ppcVar8 + 2;
  } while (*ppcVar1 != (char *)0x0);
  FUN_18047f8e0(uVar3,0xffffd8ee,"events");
  local_2a8 = (char *)0x0;
  local_310 = FUN_18004f120;
  local_318 = "name";
  local_308 = "get_int";
  local_2a0 = (code *)0x0;
  local_300 = FUN_18004f160;
  local_2f8 = "get_float";
  local_2f0 = FUN_18004f1e0;
  local_2e8 = "get_bool";
  local_2e0 = FUN_18004f260;
  local_2d8 = "get_string";
  local_2d0 = FUN_18004f2f0;
  local_2c8 = "get_controller";
  local_2c0 = FUN_18004f3b0;
  local_2b8 = "get_pawn";
  local_2b0 = FUN_18004f470;
  FUN_18047e380(uVar3,"wl.event");
  FUN_18047e8f0(uVar3,0,0);
  ppcVar8 = &local_318;
  do {
    FUN_18047f2b0(uVar3,ppcVar8[1],0);
    FUN_18047f8e0(uVar3,0xfffffffe);
    ppcVar1 = ppcVar8 + 2;
    ppcVar8 = ppcVar8 + 2;
  } while (*ppcVar1 != (char *)0x0);
  FUN_18047f8e0(uVar3,0xfffffffe,"__index");
  FUN_18047fb50(uVar3,0xfffffffe);
  local_2b8 = "name";
  local_318 = "address";
  local_208 = "get";
  local_310 = FUN_18004f680;
  local_1f8 = "set";
  local_308 = "class_name";
  local_300 = FUN_18004f6f0;
  local_2f8 = "health";
  local_2f0 = FUN_18004f7a0;
  local_2e8 = "armor";
  local_2e0 = FUN_18004f7f0;
  local_2d8 = "team";
  local_2d0 = FUN_18004f840;
  local_2c8 = "alive";
  local_2c0 = FUN_18004f8a0;
  local_2b0 = FUN_18004f910;
  local_2a8 = "origin";
  local_2a0 = FUN_18004f9a0;
  local_298 = "velocity";
  local_290 = FUN_18004fac0;
  local_288 = "eye_position";
  local_280 = FUN_18004fbd0;
  local_278 = "eye_angles";
  local_270 = FUN_18004fd20;
  local_268 = "aim_punch";
  local_260 = FUN_18004fe30;
  local_258 = "bone";
  local_250 = FUN_18004ff40;
  local_248 = "pawn";
  local_240 = FUN_180050050;
  local_238 = "weapon";
  local_230 = FUN_180050100;
  local_228 = "is_enemy";
  local_220 = FUN_1800501d0;
  local_218 = "is_local";
  local_210 = FUN_1800502d0;
  local_200 = FUN_180050bf0;
  local_1f0 = FUN_180050c70;
  local_188 = (char *)0x0;
  local_1e8 = "steam_id";
  local_180 = (code *)0x0;
  local_1e0 = FUN_18005eb90;
  local_1d8 = "ping";
  local_1d0 = FUN_18005ec40;
  local_1c8 = "money";
  local_1c0 = FUN_18005ecb0;
  local_1b8 = "observer_target";
  local_1b0 = FUN_18005ed60;
  local_1a8 = "bbox";
  local_1a0 = FUN_18005ee60;
  local_198 = "vdata";
  local_190 = FUN_18005f0e0;
  FUN_18047e380(uVar3,"wl.entity");
  FUN_18047e8f0(uVar3,0,0);
  ppcVar8 = &local_318;
  do {
    FUN_18047f2b0(uVar3,ppcVar8[1],0);
    FUN_18047f8e0(uVar3,0xfffffffe);
    ppcVar1 = ppcVar8 + 2;
    ppcVar8 = ppcVar8 + 2;
  } while (*ppcVar1 != (char *)0x0);
  FUN_18047f8e0(uVar3,0xfffffffe,"__index");
  FUN_18047f2b0(uVar3,FUN_18004f560,0);
  FUN_18047f8e0(uVar3,0xfffffffe,&DAT_1806dfb48);
  FUN_18047f2b0(uVar3,FUN_18004f5c0,0);
  FUN_18047f8e0(uVar3,0xfffffffe,"__tostring");
  FUN_18047fb50(uVar3,0xfffffffe);
  local_2f8 = "get";
  local_318 = "local_pawn";
  local_2b8 = (char *)0x0;
  local_310 = FUN_180050d50;
  local_2b0 = (code *)0x0;
  local_308 = "local_controller";
  local_300 = FUN_180050e00;
  local_2f0 = FUN_180050e90;
  local_2e8 = "from_handle";
  local_2e0 = FUN_180050f80;
  local_2d8 = "players";
  local_2d0 = FUN_180051010;
  local_2c8 = "all";
  local_2c0 = FUN_180051160;
  FUN_18047e8f0(uVar3,0,0);
  ppcVar8 = &local_318;
  do {
    FUN_18047f2b0(uVar3,ppcVar8[1],0);
    FUN_18047f8e0(uVar3,0xfffffffe);
    ppcVar1 = ppcVar8 + 2;
    ppcVar8 = ppcVar8 + 2;
  } while (*ppcVar1 != (char *)0x0);
  FUN_18047f8e0(uVar3,0xffffd8ee,"entity");
  local_318 = "rect";
  local_2e8 = "line";
  local_310 = FUN_1800517f0;
  local_308 = "rect_filled";
  local_300 = FUN_180051980;
  local_2f8 = "gradient";
  local_2f0 = FUN_180051ae0;
  local_2e0 = FUN_180051c40;
  local_2d8 = "circle";
  local_2d0 = FUN_180051da0;
  local_2c8 = "circle_filled";
  local_2c0 = FUN_180051ea0;
  local_2b8 = "triangle_filled";
  local_2b0 = FUN_180051f70;
  local_2a8 = "poly";
  local_2a0 = FUN_1800524e0;
  local_298 = "poly_filled";
  local_290 = FUN_1800525c0;
  local_288 = "text";
  local_280 = FUN_180052e40;
  local_278 = "text_size";
  local_270 = FUN_1800533a0;
  local_268 = "world_to_screen";
  local_260 = FUN_180053670;
  local_258 = "screen_size";
  local_250 = FUN_180053720;
  local_248 = "clip_push";
  local_240 = FUN_180053770;
  local_238 = "clip_pop";
  local_230 = FUN_180053890;
  local_228 = "load_image";
  local_220 = FUN_18005f2a0;
  local_218 = "load_svg";
  local_210 = FUN_18005f780;
  local_208 = "image";
  local_200 = FUN_1800601f0;
  local_1f8 = "circle_gradient";
  local_1f0 = FUN_180060410;
  local_1e8 = "shadow";
  local_1d8 = (char *)0x0;
  local_1e0 = FUN_1800606d0;
  local_1d0 = (code *)0x0;
  FUN_18047e8f0(uVar3,0,0);
  ppcVar8 = &local_318;
  do {
    FUN_18047f2b0(uVar3,ppcVar8[1],0);
    FUN_18047f8e0(uVar3,0xfffffffe);
    ppcVar1 = ppcVar8 + 2;
    ppcVar8 = ppcVar8 + 2;
  } while (*ppcVar1 != (char *)0x0);
  FUN_18047f8e0(uVar3,0xffffd8ee,"render");
  local_308 = (char *)0x0;
  local_310 = FUN_180060180;
  local_318 = "size";
  local_300 = (code *)0x0;
  FUN_18047e380(uVar3,"wl.texture");
  FUN_18047e8f0(uVar3,0,0);
  ppcVar8 = &local_318;
  do {
    FUN_18047f2b0(uVar3,ppcVar8[1],0);
    FUN_18047f8e0(uVar3,0xfffffffe);
    ppcVar1 = ppcVar8 + 2;
    ppcVar8 = ppcVar8 + 2;
  } while (*ppcVar1 != (char *)0x0);
  FUN_18047f8e0(uVar3,0xfffffffe,"__index");
  FUN_18047fb50(uVar3,0xfffffffe);
  local_318 = "line";
  local_310 = FUN_180060990;
  local_2e8 = (char *)0x0;
  local_308 = "hull";
  local_2e0 = (code *)0x0;
  local_300 = FUN_180060c50;
  local_2f8 = "damage";
  local_2f0 = FUN_180060fc0;
  FUN_18047e8f0(uVar3,0,0);
  ppcVar8 = &local_318;
  do {
    FUN_18047f2b0(uVar3,ppcVar8[1],0);
    FUN_18047f8e0(uVar3,0xfffffffe);
    ppcVar1 = ppcVar8 + 2;
    ppcVar8 = ppcVar8 + 2;
  } while (*ppcVar1 != (char *)0x0);
  FUN_18047f8e0(uVar3,0xffffd8ee,"trace");
  local_2d8 = (char *)0x0;
  local_318 = "fov";
  local_2d0 = (code *)0x0;
  local_310 = FUN_1800611b0;
  local_308 = "set_fov";
  local_300 = FUN_180061220;
  local_2f8 = "viewmodel_fov";
  local_2f0 = FUN_1800612e0;
  local_2e8 = "set_viewmodel_fov";
  local_2e0 = FUN_180061350;
  FUN_18047e380(uVar3,"wl.view");
  FUN_18047e8f0(uVar3,0,0);
  ppcVar8 = &local_318;
  do {
    FUN_18047f2b0(uVar3,ppcVar8[1],0);
    FUN_18047f8e0(uVar3,0xfffffffe);
    ppcVar1 = ppcVar8 + 2;
    ppcVar8 = ppcVar8 + 2;
  } while (*ppcVar1 != (char *)0x0);
  FUN_18047f8e0(uVar3,0xfffffffe,"__index");
  FUN_18047fb50(uVar3,0xfffffffe);
  local_308 = "set";
  local_318 = "get";
  local_2e8 = (char *)0x0;
  local_310 = FUN_180061410;
  local_2e0 = (code *)0x0;
  local_300 = FUN_180061680;
  local_2f8 = "keys";
  local_2f0 = FUN_180061950;
  FUN_18047e8f0(uVar3,0,0);
  ppcVar8 = &local_318;
  do {
    FUN_18047f2b0(uVar3,ppcVar8[1],0);
    FUN_18047f8e0(uVar3,0xfffffffe);
    ppcVar1 = ppcVar8 + 2;
    ppcVar8 = ppcVar8 + 2;
  } while (*ppcVar1 != (char *)0x0);
  FUN_18047f8e0(uVar3,0xffffd8ee,"config");
  local_2b8 = (char *)0x0;
  local_318 = "base64_encode";
  local_2b0 = (code *)0x0;
  local_310 = FUN_180061a20;
  local_308 = "base64_decode";
  local_300 = FUN_180062050;
  local_2f8 = "fnv1a";
  local_2f0 = FUN_180062320;
  local_2e8 = "murmur2";
  local_2e0 = FUN_180062390;
  local_2d8 = "clipboard_get";
  local_2d0 = FUN_1800624c0;
  local_2c8 = "clipboard_set";
  local_2c0 = FUN_1800626d0;
  FUN_18047e8f0(uVar3,0,0);
  ppcVar8 = &local_318;
  do {
    FUN_18047f2b0(uVar3,ppcVar8[1],0);
    FUN_18047f8e0(uVar3,0xfffffffe);
    ppcVar1 = ppcVar8 + 2;
    ppcVar8 = ppcVar8 + 2;
  } while (*ppcVar1 != (char *)0x0);
  FUN_18047f8e0(uVar3,0xffffd8ee,"utils");
  local_2f8 = (char *)0x0;
  local_318 = "_read";
  local_2f0 = (code *)0x0;
  local_310 = FUN_180062e60;
  local_308 = "_write";
  local_300 = FUN_180063050;
  FUN_18047e8f0(uVar3,0,0);
  ppcVar8 = &local_318;
  do {
    FUN_18047f2b0(uVar3,ppcVar8[1],0);
    FUN_18047f8e0(uVar3,0xfffffffe);
    ppcVar1 = ppcVar8 + 2;
    ppcVar8 = ppcVar8 + 2;
  } while (*ppcVar1 != (char *)0x0);
  FUN_18047f8e0(uVar3,0xffffd8ee,&DAT_1806e0eb8);
  iVar6 = FUN_180482e70(uVar3,
                        "local read, write = db._read, db._write db._read, db._write = nil, nil function db.save(name, value) return write(name, json.encode(value)) end function db.load(name, default) local text = read(name) if not text then return default end local value = json.decode(text) if value == nil then return default end return value end"
                       );
  if (iVar6 == 0) {
    FUN_18047f190(uVar3,0,0xffffffff,0);
  }
  FUN_18047e8f0(uVar3,0,0);
  ppuVar7 = &PTR_s_checkbox_18059c2f0;
  puVar4 = PTR_s_checkbox_18059c2f0;
  while (puVar4 != (undefined *)0x0) {
    FUN_18047f530(uVar3,&DAT_18058b643);
    FUN_18047f530(uVar3,&DAT_18058b643);
    FUN_18047f2b0(uVar3,ppuVar7[1],2);
    FUN_18047f8e0(uVar3,0xfffffffe,*ppuVar7);
    ppuVar2 = ppuVar7 + 2;
    ppuVar7 = ppuVar7 + 2;
    puVar4 = *ppuVar2;
  }
  FUN_18047f530(uVar3,&DAT_18058b643);
  FUN_18047f2b0(uVar3,FUN_180054be0,1);
  FUN_18047f8e0(uVar3,0xfffffffe,"group");
  FUN_18047f2b0(uVar3,FUN_180054db0,0);
  FUN_18047f8e0(uVar3,0xfffffffe,&DAT_1806e1008);
  FUN_18047f2b0(uVar3,FUN_180055030,0);
  FUN_18047f8e0(uVar3,0xfffffffe,"sidebar");
  FUN_18047f2b0(uVar3,FUN_18005a330,0);
  FUN_18047f8e0(uVar3,0xfffffffe,&DAT_1806e1018);
  FUN_18047f2b0(uVar3,FUN_180059020,0);
  FUN_18047f8e0(uVar3,0xfffffffe,"beta_exploits");
  local_2d8 = "size";
  local_318 = "binds";
  local_2e8 = "position";
  local_310 = FUN_180059f50;
  local_2c8 = "cursor";
  local_308 = "alpha";
  local_300 = FUN_1800591d0;
  local_2f8 = "scale";
  local_2f0 = FUN_1800591f0;
  local_2e0 = (code *)&LAB_180059520;
  local_2d0 = (code *)&LAB_180059530;
  local_2c0 = FUN_180059540;
  local_2b8 = "style";
  local_2b0 = FUN_180059690;
  local_2a8 = "localize";
  local_2a0 = FUN_1800597a0;
  local_298 = "units";
  local_290 = FUN_180059c00;
  local_288 = (char *)0x0;
  local_280 = (code *)0x0;
  ppcVar8 = &local_318;
  do {
    FUN_18047f2b0(uVar3,ppcVar8[1],0);
    FUN_18047f8e0(uVar3,0xfffffffe);
    ppcVar1 = ppcVar8 + 2;
    ppcVar8 = ppcVar8 + 2;
  } while (*ppcVar1 != (char *)0x0);
  FUN_18047f8e0(uVar3,0xffffd8ee,&DAT_1806e106c);
  local_268 = "position";
  local_318 = "get";
  local_248 = (char *)0x0;
  local_310 = FUN_18005b5f0;
  local_240 = (code *)0x0;
  local_308 = "set";
  local_300 = FUN_18005b8c0;
  local_2f8 = "visible";
  local_2f0 = FUN_18005bba0;
  local_2e8 = "depends";
  local_2e0 = FUN_18005bc60;
  local_2d8 = "callback";
  local_2d0 = FUN_18005bcf0;
  local_2c8 = "items";
  local_2c0 = FUN_18005bd80;
  local_2b8 = "active";
  local_2b0 = FUN_18005bf50;
  local_2a8 = "name";
  local_2a0 = FUN_18005bfd0;
  local_298 = "tooltip";
  local_290 = FUN_18005b320;
  local_288 = "inactive";
  local_280 = FUN_18005b3c0;
  local_278 = "image";
  local_270 = FUN_18005b480;
  local_260 = FUN_18005b510;
  local_258 = "set_position";
  local_250 = FUN_18005b560;
  FUN_18047e380(uVar3,"wl.ui");
  FUN_18047e8f0(uVar3,0,0);
  ppcVar8 = &local_318;
  do {
    FUN_18047f2b0(uVar3,ppcVar8[1],0);
    FUN_18047f8e0(uVar3,0xfffffffe);
    ppcVar1 = ppcVar8 + 2;
    ppcVar8 = ppcVar8 + 2;
  } while (*ppcVar1 != (char *)0x0);
  FUN_18047f8e0(uVar3,0xfffffffe,"__index");
  FUN_18047fb50(uVar3,0xfffffffe);
  local_318 = "get";
  local_240 = FUN_180056d70;
  local_310 = (code *)&LAB_1800561a0;
  local_308 = "get_value";
  local_300 = (code *)&LAB_1800561b0;
  local_2f8 = "set_value";
  local_2f0 = FUN_180056470;
  local_2e8 = "get_raw_value";
  local_2e0 = (code *)&LAB_1800561c0;
  local_2d8 = "set_raw_value";
  local_2d0 = FUN_1800565d0;
  local_2c8 = "get_values";
  local_2c0 = FUN_1800567f0;
  local_2b8 = "set_values";
  local_2b0 = FUN_180056850;
  local_2a8 = "get_raw_values";
  local_2a0 = FUN_180056810;
  local_298 = "set_raw_values";
  local_290 = FUN_180056870;
  local_288 = "get_effective_values";
  local_280 = FUN_180056830;
  local_278 = "get_default";
  local_270 = FUN_180056890;
  local_268 = "set_default";
  local_260 = FUN_180056a90;
  local_258 = "get_name";
  local_250 = FUN_180056de0;
  local_248 = "set_name";
  local_238 = "get_visible";
  local_230 = FUN_180057030;
  local_228 = "set_visible";
  local_220 = FUN_180057100;
  local_218 = "get_disabled";
  local_210 = FUN_180057240;
  local_208 = "set_disabled";
  local_200 = FUN_180057310;
  local_1f8 = "get_tooltip";
  local_1c0 = FUN_180056d70;
  local_1f0 = FUN_180056e90;
  local_110 = FUN_180058310;
  local_1e8 = "set_tooltip";
  local_1e0 = FUN_180056f50;
  local_1d8 = "get_icon";
  local_1d0 = FUN_180056fc0;
  local_1c8 = "set_icon";
  local_1b8 = "get_id";
  local_1b0 = FUN_180057440;
  local_1a8 = "get_type";
  local_1a0 = FUN_1800574c0;
  local_198 = "get_is_down";
  local_190 = FUN_180058380;
  local_188 = "get_parent";
  local_180 = FUN_1800583f0;
  local_178 = "get_items";
  local_170 = FUN_180057590;
  local_168 = "set_items";
  local_160 = FUN_1800577f0;
  local_158 = "get_min";
  local_150 = FUN_1800576b0;
  local_148 = "set_min";
  local_140 = &LAB_180057ac0;
  local_138 = "get_max";
  local_130 = FUN_180057750;
  local_128 = "set_max";
  local_120 = &LAB_180057ad0;
  local_118 = "get_category";
  local_108 = "set_category";
  local_f8 = "get_categories";
  local_e8 = "export";
  local_e0 = FUN_180057ae0;
  local_d8 = "import";
  local_c0 = FUN_180057d90;
  local_b8 = "color_picker";
  local_a8 = "color_set";
  local_98 = "color_modes";
  local_100 = FUN_180058310;
  local_f0 = FUN_180058310;
  local_d0 = FUN_180056d70;
  local_c8 = "group";
  local_b0 = FUN_180056d70;
  local_a0 = FUN_180056d70;
  local_90 = FUN_180056d70;
  local_88 = &DAT_1806e1304;
  local_58 = 0;
  local_80 = FUN_1800582a0;
  local_50 = 0;
  local_78 = "add_callback";
  local_70 = FUN_180058b40;
  local_68 = "remove_callback";
  local_60 = FUN_180058d20;
  FUN_18047e380(uVar3,"wl.menu_control");
  FUN_18047e8f0(uVar3,0,0);
  ppcVar8 = &local_318;
  do {
    FUN_18047f2b0(uVar3,ppcVar8[1],0);
    FUN_18047f8e0(uVar3,0xfffffffe);
    ppcVar1 = ppcVar8 + 2;
    ppcVar8 = ppcVar8 + 2;
  } while (*ppcVar1 != (char *)0x0);
  FUN_18047f8e0(uVar3,0xfffffffe,"__index");
  FUN_18047f2b0(uVar3,FUN_180058fb0,0);
  FUN_18047f8e0(uVar3,0xfffffffe,&DAT_1806dfb48);
  FUN_18047f2b0(uVar3,FUN_180058ee0,0);
  FUN_18047f8e0(uVar3,0xfffffffe,"__tostring");
  FUN_18047fb50(uVar3,0xfffffffe);
  local_2b8 = (char *)0x0;
  local_318 = "exec";
  local_2d8 = "view_angles";
  local_310 = FUN_18005c010;
  local_2b0 = (code *)0x0;
  local_308 = "in_game";
  local_300 = FUN_18005c0b0;
  local_2f8 = "screen_size";
  local_2f0 = FUN_180053720;
  local_2e8 = "play_sound";
  local_2e0 = FUN_180062860;
  local_2d0 = FUN_18005c0e0;
  local_2c8 = "set_view_angles";
  local_2c0 = FUN_18005c220;
  FUN_18047e8f0(uVar3,0,0);
  ppcVar8 = &local_318;
  do {
    FUN_18047f2b0(uVar3,ppcVar8[1],0);
    FUN_18047f8e0(uVar3,0xfffffffe);
    ppcVar1 = ppcVar8 + 2;
    ppcVar8 = ppcVar8 + 2;
  } while (*ppcVar1 != (char *)0x0);
  FUN_18047f8e0(uVar3,0xffffd8ee,"engine");
  local_2d8 = (char *)0x0;
  local_318 = "curtime";
  local_2d0 = (code *)0x0;
  local_310 = FUN_18005c330;
  local_308 = "realtime";
  local_300 = FUN_18005c380;
  local_2f8 = "frametime";
  local_2f0 = FUN_18005c3f0;
  local_2e8 = "interval";
  local_2e0 = FUN_18005c420;
  FUN_18047e8f0(uVar3,0,0);
  ppcVar8 = &local_318;
  do {
    FUN_18047f2b0(uVar3,ppcVar8[1],0);
    FUN_18047f8e0(uVar3,0xfffffffe);
    ppcVar1 = ppcVar8 + 2;
    ppcVar8 = ppcVar8 + 2;
  } while (*ppcVar1 != (char *)0x0);
  FUN_18047f8e0(uVar3,0xffffd8ee,"globals");
  local_2f8 = "cursor";
  local_318 = "key_down";
  local_2d8 = (char *)0x0;
  local_310 = FUN_18005c440;
  local_2d0 = (code *)0x0;
  local_308 = "key_name";
  local_300 = FUN_180062ae0;
  local_2f0 = FUN_18005c4a0;
  local_2e8 = "menu_open";
  local_2e0 = FUN_18005c4f0;
  FUN_18047e8f0(uVar3,0,0);
  ppcVar8 = &local_318;
  do {
    FUN_18047f2b0(uVar3,ppcVar8[1],0);
    FUN_18047f8e0(uVar3,0xfffffffe);
    ppcVar1 = ppcVar8 + 2;
    ppcVar8 = ppcVar8 + 2;
  } while (*ppcVar1 != (char *)0x0);
  FUN_18047f8e0(uVar3,0xffffd8ee,"input");
  local_2b8 = (char *)0x0;
  local_318 = "delay";
  local_2f8 = "reload";
  local_310 = FUN_18005c510;
  local_2b0 = (code *)0x0;
  local_308 = "unload";
  local_300 = FUN_18005c640;
  local_2f0 = FUN_18005c690;
  local_2e8 = "name";
  local_2e0 = FUN_18005c6e0;
  local_2d8 = "insecure";
  local_2d0 = FUN_18005c740;
  local_2c8 = "notify";
  local_2c0 = FUN_1800629f0;
  FUN_18047e8f0(uVar3,0,0);
  ppcVar8 = &local_318;
  do {
    FUN_18047f2b0(uVar3,ppcVar8[1],0);
    FUN_18047f8e0(uVar3,0xfffffffe);
    ppcVar1 = ppcVar8 + 2;
    ppcVar8 = ppcVar8 + 2;
  } while (*ppcVar1 != (char *)0x0);
  FUN_18047f8e0(uVar3,0xffffd8ee,"client");
  local_2f8 = (char *)0x0;
  local_318 = "chat";
  local_2f0 = (code *)0x0;
  local_310 = FUN_18005c7a0;
  local_308 = "console";
  local_300 = FUN_18005c920;
  FUN_18047e8f0(uVar3,0,0);
  ppcVar8 = &local_318;
  do {
    FUN_18047f2b0(uVar3,ppcVar8[1],0);
    FUN_18047f8e0(uVar3,0xfffffffe);
    ppcVar1 = ppcVar8 + 2;
    ppcVar8 = ppcVar8 + 2;
  } while (*ppcVar1 != (char *)0x0);
  FUN_18047f8e0(uVar3,0xffffd8ee,&DAT_1806e1428);
  local_308 = (char *)0x0;
  local_318 = "run";
  local_300 = (code *)0x0;
  local_310 = FUN_18005caa0;
  FUN_18047e8f0(uVar3,0,0);
  ppcVar8 = &local_318;
  do {
    FUN_18047f2b0(uVar3,ppcVar8[1],0);
    FUN_18047f8e0(uVar3,0xfffffffe);
    ppcVar1 = ppcVar8 + 2;
    ppcVar8 = ppcVar8 + 2;
  } while (*ppcVar1 != (char *)0x0);
  FUN_18047f8e0(uVar3,0xffffd8ee,"panorama");
  local_308 = (char *)0x0;
  local_318 = "offset";
  local_300 = (code *)0x0;
  local_310 = FUN_18005cb70;
  FUN_18047e8f0(uVar3,0,0);
  ppcVar8 = &local_318;
  do {
    FUN_18047f2b0(uVar3,ppcVar8[1],0);
    FUN_18047f8e0(uVar3,0xfffffffe);
    ppcVar1 = ppcVar8 + 2;
    ppcVar8 = ppcVar8 + 2;
  } while (*ppcVar1 != (char *)0x0);
  FUN_18047f8e0(uVar3,0xffffd8ee,"schema");
  local_308 = (char *)0x0;
  local_318 = "find";
  local_300 = (code *)0x0;
  local_310 = FUN_18005cbe0;
  FUN_18047e8f0(uVar3,0,0);
  ppcVar8 = &local_318;
  do {
    FUN_18047f2b0(uVar3,ppcVar8[1],0);
    FUN_18047f8e0(uVar3,0xfffffffe);
    ppcVar1 = ppcVar8 + 2;
    ppcVar8 = ppcVar8 + 2;
  } while (*ppcVar1 != (char *)0x0);
  FUN_18047f8e0(uVar3,0xffffd8ee,&DAT_1806e144c);
  local_2a8 = (char *)0x0;
  local_318 = "get_int";
  local_2a0 = (code *)0x0;
  local_310 = FUN_18005cc60;
  local_308 = "get_float";
  local_300 = FUN_18005cca0;
  local_2f8 = "get_bool";
  local_2f0 = FUN_18005ccf0;
  local_2e8 = "set_int";
  local_2e0 = FUN_18005ce00;
  local_2d8 = "set_float";
  local_2d0 = FUN_18005ce80;
  local_2c8 = "set_bool";
  local_2c0 = FUN_18005cf00;
  local_2b8 = "restore";
  local_2b0 = FUN_18005cf80;
  FUN_18047e380(uVar3,"wl.cvar");
  FUN_18047e8f0(uVar3,0,0);
  ppcVar8 = &local_318;
  do {
    FUN_18047f2b0(uVar3,ppcVar8[1],0);
    FUN_18047f8e0(uVar3,0xfffffffe);
    ppcVar1 = ppcVar8 + 2;
    ppcVar8 = ppcVar8 + 2;
  } while (*ppcVar1 != (char *)0x0);
  FUN_18047f8e0(uVar3,0xfffffffe,"__index");
  FUN_18047fb50(uVar3,0xfffffffe);
  local_298 = "view_angles";
  local_318 = "number";
  local_308 = "buttons";
  local_310 = FUN_18005d050;
  local_268 = (char *)0x0;
  local_300 = FUN_18005d0b0;
  local_260 = (code *)0x0;
  local_2f8 = "set_buttons";
  local_2f0 = FUN_18005d130;
  local_2e8 = "has";
  local_2e0 = FUN_18005d1d0;
  local_2d8 = "press";
  local_2d0 = FUN_18005d280;
  local_2c8 = "release";
  local_2c0 = FUN_18005d320;
  local_2b8 = "move";
  local_2b0 = FUN_18005d3c0;
  local_2a8 = "set_move";
  local_2a0 = FUN_18005d470;
  local_290 = FUN_18005d600;
  local_288 = "set_view_angles";
  local_280 = FUN_18005d750;
  local_278 = "lock_angles";
  local_270 = FUN_18005d850;
  FUN_18047e380(uVar3,"wl.cmd");
  FUN_18047e8f0(uVar3,0,0);
  ppcVar8 = &local_318;
  do {
    FUN_18047f2b0(uVar3,ppcVar8[1],0);
    FUN_18047f8e0(uVar3,0xfffffffe);
    ppcVar1 = ppcVar8 + 2;
    ppcVar8 = ppcVar8 + 2;
  } while (*ppcVar1 != (char *)0x0);
  FUN_18047f8e0(uVar3,0xfffffffe,"__index");
  FUN_18047fb50(uVar3,0xfffffffe);
  FUN_18047e8f0(uVar3,0,0);
  FUN_18047f4f0(uVar3,DAT_1808ac500);
  FUN_18047f8e0(uVar3,0xfffffffe,"attack");
  FUN_18047f4f0(uVar3,DAT_1808ac548);
  FUN_18047f8e0(uVar3,0xfffffffe,&DAT_1806e14e4);
  FUN_18047f4f0(uVar3,DAT_1808ac598);
  FUN_18047f8e0(uVar3,0xfffffffe,&DAT_1806e14ec);
  FUN_18047f4f0(uVar3,DAT_1808ac5e8);
  FUN_18047f8e0(uVar3,0xfffffffe,"forward");
  FUN_18047f4f0(uVar3,DAT_1808ac628);
  FUN_18047f8e0(uVar3,0xfffffffe,&DAT_1806e1500);
  FUN_18047f4f0(uVar3,DAT_1808ac660);
  FUN_18047f8e0(uVar3,0xfffffffe,&DAT_1806e1508);
  FUN_18047f4f0(uVar3,DAT_1808ac718);
  FUN_18047f8e0(uVar3,0xfffffffe,&DAT_1806dfd6c);
  FUN_18047f4f0(uVar3,DAT_1808ac740);
  FUN_18047f8e0(uVar3,0xfffffffe,"right");
  FUN_18047f4f0(uVar3,DAT_1808ac758);
  FUN_18047f8e0(uVar3,0xfffffffe,"attack2");
  FUN_18047f4f0(uVar3,DAT_1808ac7b0);
  FUN_18047f8e0(uVar3,0xfffffffe,"reload");
  FUN_18047f4f0(uVar3,DAT_1808ac818);
  FUN_18047f8e0(uVar3,0xfffffffe,"speed");
  FUN_18047f8e0(uVar3,0xffffd8ee,"buttons");
  FUN_18047e8f0(uVar3,0,0);
  FUN_18047f4f0(uVar3,DAT_1808ac5c8);
  FUN_18047f8e0(uVar3,0xfffffffe,"lagcomp");
  FUN_18047f4f0(uVar3,DAT_1808ac5d8);
  FUN_18047f8e0(uVar3,0xfffffffe,"net_update_end");
  FUN_18047f4f0(uVar3,DAT_1808ac608);
  FUN_18047f8e0(uVar3,0xfffffffe,"render_start");
  FUN_18047f8e0(uVar3,0xffffd8ee,"stage");
  FUN_180080500(param_1);
  FUN_18007d250(param_1);
  FUN_1800a78e0(param_1);
  uVar5 = *(undefined8 *)(param_1 + 0x40);
  local_318 = "scale";
  local_310 = FUN_1800a8610;
  local_308 = "menu_scale";
  local_300 = FUN_1800a8670;
  local_2f8 = "wrap_text";
  local_2f0 = FUN_1800a86a0;
  local_2e8 = "theme";
  local_2e0 = FUN_1800a8990;
  local_2d8 = "texture";
  local_2d0 = FUN_1800a8b90;
  local_2c8 = "rect_filled_multicolor";
  local_2c0 = FUN_1800a8e40;
  local_2b8 = "triangle_multicolor";
  local_2b0 = FUN_1800a8fa0;
  local_2a8 = "pie";
  local_2a0 = FUN_1800a91c0;
  local_298 = "arc";
  local_278 = (char *)0x0;
  local_290 = FUN_1800a9400;
  local_270 = (code *)0x0;
  local_288 = "blur";
  ppcVar8 = &local_318;
  local_280 = FUN_1800a95d0;
  FUN_18047eb70(uVar5,0xffffd8ee,"render");
  iVar6 = FUN_18047fe10(uVar5,0xffffffff);
  if (iVar6 != 5) {
    FUN_18047fb50(uVar5,0xfffffffe);
    FUN_18047e8f0(uVar5,0,0);
    FUN_18047f610(uVar5,0xffffffff);
    FUN_18047f8e0(uVar5,0xffffd8ee,"render");
  }
  do {
    FUN_18047f2b0(uVar5,ppcVar8[1],0);
    FUN_18047f8e0(uVar5,0xfffffffe);
    ppcVar1 = ppcVar8 + 2;
    ppcVar8 = ppcVar8 + 2;
  } while (*ppcVar1 != (char *)0x0);
  FUN_18047fb50(uVar5,0xfffffffe);
  if (*(char *)(param_1 + 0x4b) != '\0') {
    local_2b8 = (char *)0x0;
    local_310 = FUN_18005da10;
    local_318 = "read";
    local_300 = FUN_18005da90;
    local_308 = "write";
    local_2f8 = "find_pattern";
    local_2b0 = (code *)0x0;
    local_2f0 = FUN_18005db10;
    local_2e8 = "module";
    local_2e0 = FUN_18005dc10;
    local_2d8 = "export";
    local_2d0 = FUN_18005dd20;
    local_2c8 = "interface";
    local_2c0 = FUN_18005ddd0;
    FUN_18047e8f0(uVar3,0,0);
    ppcVar8 = &local_318;
    do {
      FUN_18047f2b0(uVar3,ppcVar8[1],0);
      FUN_18047f8e0(uVar3,0xfffffffe);
      ppcVar1 = ppcVar8 + 2;
      ppcVar8 = ppcVar8 + 2;
    } while (*ppcVar1 != (char *)0x0);
    FUN_18047f8e0(uVar3,0xffffd8ee,"memory");
    local_318 = "read";
    local_310 = FUN_18005e0d0;
    local_308 = "write";
    local_300 = (code *)&LAB_18005e690;
    local_2d8 = "remove";
    local_2f8 = "append";
    local_2c8 = "list";
    local_2f0 = (code *)&LAB_18005e6a0;
    local_2b8 = (char *)0x0;
    local_2e8 = "exists";
    local_2b0 = (code *)0x0;
    local_2e0 = FUN_18005e6b0;
    local_2d0 = FUN_18005e7a0;
    local_2c0 = FUN_18005e870;
    FUN_18047e8f0(uVar3,0,0);
    ppcVar8 = &local_318;
    do {
      FUN_18047f2b0(uVar3,ppcVar8[1],0);
      FUN_18047f8e0(uVar3,0xfffffffe);
      ppcVar1 = ppcVar8 + 2;
      ppcVar8 = ppcVar8 + 2;
    } while (*ppcVar1 != (char *)0x0);
    FUN_18047f8e0(uVar3,0xffffd8ee,&DAT_1806e159c);
    local_2f8 = (char *)0x0;
    local_318 = "get";
    local_2f0 = (code *)0x0;
    local_310 = (code *)&LAB_180063940;
    local_308 = "post";
    local_300 = (code *)&LAB_180063950;
    FUN_18047e8f0(uVar3,0,0);
    ppcVar8 = &local_318;
    do {
      FUN_18047f2b0(uVar3,ppcVar8[1],0);
      FUN_18047f8e0(uVar3,0xfffffffe);
      ppcVar1 = ppcVar8 + 2;
      ppcVar8 = ppcVar8 + 2;
    } while (*ppcVar1 != (char *)0x0);
    FUN_18047f8e0(uVar3,0xffffd8ee,&DAT_1806e0b00);
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    FUN_18047e380(uVar3,"wl.hook");
    FUN_18047e8f0(uVar3,0,0);
    FUN_18047f2b0(uVar3,FUN_1800a3920,0);
    FUN_18047f8e0(uVar3,0xfffffffe,"original");
    FUN_18047f2b0(uVar3,FUN_1800a3990,0);
    FUN_18047f8e0(uVar3,0xfffffffe,"target");
    FUN_18047f2b0(uVar3,FUN_1800a3a00,0);
    FUN_18047f8e0(uVar3,0xfffffffe,"active");
    FUN_18047f2b0(uVar3,FUN_1800a3a50,0);
    FUN_18047f8e0(uVar3,0xfffffffe,"remove");
    FUN_18047f8e0(uVar3,0xfffffffe,"__index");
    FUN_18047fb50(uVar3,0xfffffffe);
    FUN_18047e8f0(uVar3,0,0);
    FUN_18047f2b0(uVar3,FUN_1800a3ab0,0);
    FUN_18047f8e0(uVar3,0xfffffffe,&DAT_1806e4e74);
    FUN_18047f2b0(uVar3,FUN_1800a3e40,0);
    FUN_18047f8e0(uVar3,0xfffffffe,"remove");
    FUN_18047f2b0(uVar3,FUN_1800a3f20,0);
    FUN_18047f8e0(uVar3,0xfffffffe,&DAT_1806e1594);
    FUN_18047f8e0(uVar3,0xffffd8ee,"hooks");
    iVar6 = FUN_180482e70(uVar3,
                          "\nlocal raw = hooks.add\nlocal keep = {}\nhooks.add = function(target, a, b)\n    if type(a) ~= \'string\' then return raw(target, a) end\n    local callback = ffi.cast(a, b)\n    local hook = raw(target, callback)\n    keep[hook] = callback\n    return hook, ffi.cast(a, hook:original())\nend\n"
                         );
    if ((iVar6 != 0) || (iVar6 = FUN_18047f190(uVar3,0,0xffffffff,0), iVar6 != 0)) {
      FUN_18047fb50(uVar3,0xfffffffe);
    }
  }
  return;
}



/* ===== 1800666c0 FUN_1800666c0 ===== */

longlong ****
FUN_1800666c0(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  longlong ***ppplVar1;
  longlong ****pppplVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong ****pppplVar5;
  longlong ****local_res10;
  undefined1 local_res18 [8];
  longlong ****local_res20;
  
  FUN_1804ea500(local_res18,0);
  pppplVar5 = DAT_180ca0010;
  local_res20 = DAT_180ca0010;
  if (DAT_180c9edf8 == 0) {
    FUN_1804ea500(&local_res10);
    if (DAT_180c9edf8 == 0) {
      DAT_180c9ede0 = DAT_180c9ede0 + 1;
      DAT_180c9edf8 = (longlong)DAT_180c9ede0;
    }
    FUN_1804ea5a0(&local_res10);
  }
  pppplVar2 = (longlong ****)FUN_18004dd50(param_1,DAT_180c9edf8);
  if (pppplVar2 == (longlong ****)0x0) {
    if (pppplVar5 == (longlong ****)0x0) {
      pppplVar5 = (longlong ****)&local_res20;
      lVar3 = FUN_18004df20(pppplVar5,param_1);
      pppplVar2 = local_res20;
      if (lVar3 == -1) {
        FUN_18004db10();
        if ((ulonglong)param_3[3] < 0x10) {
          puVar4 = param_3;
        }
        else {
          puVar4 = (undefined8 *)*param_3;
        }
        puVar4 = (undefined8 *)FUN_1800134a0(param_1,puVar4,param_3[2],param_4,0);
        *pppplVar5 = (longlong ***)0x0;
        pppplVar5[1] = (longlong ***)0x0;
        pppplVar5[2] = (longlong ***)0x0;
        pppplVar5[3] = (longlong ***)0x0;
        ppplVar1 = (longlong ***)puVar4[1];
        *pppplVar5 = (longlong ***)*puVar4;
        pppplVar5[1] = ppplVar1;
        ppplVar1 = (longlong ***)puVar4[3];
        pppplVar5[2] = (longlong ***)puVar4[2];
        pppplVar5[3] = ppplVar1;
        *(undefined1 *)puVar4 = 0;
        puVar4[2] = 0;
        puVar4[3] = 0xf;
        return pppplVar5;
      }
      local_res10 = local_res20;
      FUN_1804ea710(local_res20);
      (*(code *)(*pppplVar2)[1])(pppplVar2);
      DAT_180ca0010 = pppplVar2;
      local_res10 = (longlong ****)0x0;
    }
    else {
      pppplVar2 = pppplVar5;
    }
  }
  FUN_1804ea5a0(local_res18);
  return pppplVar2;
}



/* ===== 1800667a0 FUN_1800667a0 ===== */

undefined8 *
FUN_1800667a0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  if ((ulonglong)param_3[3] < 0x10) {
    puVar2 = param_3;
  }
  else {
    puVar2 = (undefined8 *)*param_3;
  }
  puVar2 = (undefined8 *)FUN_1800134a0(param_2,puVar2,param_3[2],param_4,0);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar1 = puVar2[1];
  *param_1 = *puVar2;
  param_1[1] = uVar1;
  uVar1 = puVar2[3];
  param_1[2] = puVar2[2];
  param_1[3] = uVar1;
  *(undefined1 *)puVar2 = 0;
  puVar2[2] = 0;
  puVar2[3] = 0xf;
  return param_1;
}



/* ===== 180066820 FUN_180066820 ===== */

undefined8 FUN_180066820(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1800691f0(param_1,param_2,param_2,param_3,0);
  return param_1;
}



/* ===== 180066860 FUN_180066860 ===== */

undefined8 FUN_180066860(undefined8 *param_1)

{
  if (param_1 + -0x2000 < (undefined8 *)0x7ffffffeffff) {
    return *param_1;
  }
  return 0;
}



/* ===== 180066890 FUN_180066890 ===== */

ulonglong FUN_180066890(undefined2 *param_1,undefined2 *param_2)

{
  undefined2 uVar1;
  
  if (param_1 + -0x8000 < (undefined2 *)0x7ffffffeffff) {
    uVar1 = *param_2;
    *param_1 = uVar1;
    return CONCAT71((uint7)(byte)((ushort)uVar1 >> 8),1);
  }
  return (ulonglong)(param_1 + -0x8000) & 0xffffffffffffff00;
}



/* ===== 1800668c0 FUN_1800668c0 ===== */

undefined4 * FUN_1800668c0(longlong *param_1,undefined4 *param_2,undefined4 *param_3)

{
  ulonglong uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined4 *puVar10;
  longlong *plVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  
  puVar7 = (undefined4 *)param_1[1];
  if (puVar7 == (undefined4 *)param_1[2]) {
    uVar9 = (longlong)puVar7 - *param_1;
    lVar3 = (longlong)uVar9 >> 3;
    uVar8 = 0x1fffffffffffffff;
    if (lVar3 == 0x1fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_1800118d0();
    }
    uVar1 = lVar3 + 1;
    uVar5 = param_1[2] - *param_1 >> 3;
    if (uVar5 <= 0x1fffffffffffffff - (uVar5 >> 1)) {
      uVar5 = (uVar5 >> 1) + uVar5;
      uVar8 = uVar1;
      if (uVar1 <= uVar5) {
        uVar8 = uVar5;
      }
      if (0x1fffffffffffffff < uVar8) {
                    /* WARNING: Subroutine does not return */
        FUN_18000d840();
      }
    }
    puVar4 = (undefined4 *)FUN_18000fb70(uVar8 * 8);
    puVar10 = (undefined4 *)((uVar9 & 0xfffffffffffffff8) + (longlong)puVar4);
    puVar13 = puVar10 + 2;
    uVar2 = *param_3;
    *puVar10 = *param_2;
    puVar10[1] = uVar2;
    puVar12 = (undefined4 *)*param_1;
    plVar11 = param_1;
    uVar9 = uVar8;
    if (puVar7 == (undefined4 *)param_1[1]) {
      lVar3 = param_1[1] - (longlong)puVar12;
      puVar6 = puVar4;
      puVar7 = puVar12;
      puVar12 = puVar10;
    }
    else {
      FUN_180540530(puVar4,puVar12,(longlong)puVar7 - (longlong)puVar12);
      lVar3 = param_1[1] - (longlong)puVar7;
      puVar6 = puVar10 + 2;
      puVar12 = puVar4;
    }
    FUN_180540530(puVar6,puVar7,lVar3);
    FUN_18002b8d0(param_1,puVar4,uVar1,uVar8,plVar11,0,uVar9,puVar12,puVar13);
  }
  else {
    uVar2 = *param_3;
    *puVar7 = *param_2;
    puVar7[1] = uVar2;
    puVar10 = (undefined4 *)param_1[1];
    param_1[1] = (longlong)(puVar10 + 2);
  }
  return puVar10;
}



/* ===== 180066a20 FUN_180066a20 ===== */

undefined8 FUN_180066a20(undefined8 param_1,char *param_2,longlong param_3)

{
  size_t sVar1;
  
  sVar1 = strlen(param_2);
  if (0x7fffffffffffffffU - *(longlong *)(param_3 + 0x10) < sVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_180011990();
  }
  FUN_180069380(param_1);
  return param_1;
}



/* ===== 180066ab0 FUN_180066ab0 ===== */

undefined8 * FUN_180066ab0(undefined8 *param_1,char *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  size_t sVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  sVar2 = strlen(param_2);
  puVar3 = (undefined8 *)FUN_18006b5b0(param_3,0,param_2,sVar2,uVar4);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar1 = puVar3[1];
  *param_1 = *puVar3;
  param_1[1] = uVar1;
  uVar1 = puVar3[3];
  param_1[2] = puVar3[2];
  param_1[3] = uVar1;
  *(undefined1 *)puVar3 = 0;
  puVar3[2] = 0;
  puVar3[3] = 0xf;
  return param_1;
}



/* ===== 180066b30 FUN_180066b30 ===== */

undefined8 * FUN_180066b30(undefined8 *param_1,undefined4 *param_2,undefined1 (*param_3) [16])

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 local_38 [3] [16];
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  local_48 = *param_2;
  uStack_44 = param_2[1];
  uStack_40 = param_2[2];
  uStack_3c = param_2[3];
  auVar1 = *param_3;
  local_38[0] = auVar1;
  if (*(char *)(param_2 + 2) == '\0') {
    FUN_18006c630(&local_48);
  }
  uVar5 = uStack_3c;
  uVar4 = uStack_40;
  uVar3 = uStack_44;
  uVar2 = local_48;
  uVar6 = auVar1._0_4_;
  uVar7 = auVar1._4_4_;
  uVar8 = auVar1._8_4_;
  uVar9 = auVar1._12_4_;
  if (auVar1[8] == '\0') {
    FUN_18006c630(local_38);
    uVar6 = local_38[0]._0_4_;
    uVar7 = local_38[0]._4_4_;
    uVar8 = local_38[0]._8_4_;
    uVar9 = local_38[0]._12_4_;
  }
  if (CONCAT44(uVar3,uVar2) == 0) {
    if (CONCAT44(uVar7,uVar6) == 0) {
LAB_180066be9:
      param_1[2] = 0;
      param_1[3] = 0xf;
      *(undefined1 *)param_1 = 0;
      return param_1;
    }
  }
  else if (CONCAT44(uVar7,uVar6) != 0) goto LAB_180066be9;
  local_38[0]._4_4_ = uVar7;
  local_38[0]._0_4_ = uVar6;
  local_38[0]._8_4_ = uVar8;
  local_38[0]._12_4_ = uVar9;
  local_48 = uVar2;
  uStack_44 = uVar3;
  uStack_40 = uVar4;
  uStack_3c = uVar5;
  FUN_180068a20(param_1,&local_48,local_38);
  return param_1;
}



/* ===== 180066c10 FUN_180066c10 ===== */

undefined8
FUN_180066c10(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *local_18;
  undefined8 local_10;
  
  local_10 = param_2[2];
  if (0xf < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  local_18 = param_2;
  FUN_180028c20(param_1,&local_18,param_3,param_4,0);
  return param_1;
}



/* ===== 180066c70 FUN_180066c70 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_180066c70(longlong *param_1,undefined4 *param_2,undefined1 (*param_3) [16])

{
  undefined1 auVar1 [16];
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong *plVar9;
  undefined8 ****ppppuVar10;
  ulonglong uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 local_78 [16];
  undefined8 ****local_68;
  longlong lStack_60;
  longlong local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_a8;
  local_68 = (undefined8 ****)0x0;
  lStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_88 = *param_2;
  uStack_84 = param_2[1];
  uStack_80 = param_2[2];
  uStack_7c = param_2[3];
  auVar1 = *param_3;
  local_78 = auVar1;
  if (*(char *)(param_2 + 2) == '\0') {
    FUN_18006c630(&local_88);
  }
  uVar8 = uStack_7c;
  uVar7 = uStack_80;
  uVar6 = uStack_84;
  uVar5 = local_88;
  uVar12 = auVar1._0_4_;
  uVar13 = auVar1._4_4_;
  uVar14 = auVar1._8_4_;
  uVar15 = auVar1._12_4_;
  if (auVar1[8] == '\0') {
    FUN_18006c630(local_78);
    uVar12 = local_78._0_4_;
    uVar13 = local_78._4_4_;
    uVar14 = local_78._8_4_;
    uVar15 = local_78._12_4_;
  }
  if (CONCAT44(uVar6,uVar5) == 0) {
    if (CONCAT44(uVar13,uVar12) == 0) {
LAB_180066d4e:
      local_58 = 0;
      uStack_50 = 0xf;
      local_68 = (undefined8 ****)((ulonglong)local_68 & 0xffffffffffffff00);
      goto LAB_180066d1f;
    }
  }
  else if (CONCAT44(uVar13,uVar12) != 0) goto LAB_180066d4e;
  local_78._4_4_ = uVar13;
  local_78._0_4_ = uVar12;
  local_78._8_4_ = uVar14;
  local_78._12_4_ = uVar15;
  local_88 = uVar5;
  uStack_84 = uVar6;
  uStack_80 = uVar7;
  uStack_7c = uVar8;
  FUN_180068a20(&local_68,&local_88,local_78);
LAB_180066d1f:
  if ((ulonglong)param_1[3] < uStack_50) {
    ppppuVar10 = (undefined8 ****)*param_1;
    lVar3 = param_1[1];
    lVar4 = param_1[2];
    uVar11 = param_1[3];
    *param_1 = (longlong)local_68;
    param_1[1] = lStack_60;
    param_1[2] = local_58;
    param_1[3] = uStack_50;
    local_68 = ppppuVar10;
    lStack_60 = lVar3;
    local_58 = lVar4;
    uStack_50 = uVar11;
  }
  else {
    ppppuVar10 = &local_68;
    if (0xf < uStack_50) {
      ppppuVar10 = local_68;
    }
    param_1 = (longlong *)FUN_180029840(param_1,ppppuVar10,local_58);
  }
  if (0xf < uStack_50) {
    uVar11 = uStack_50 + 1;
    ppppuVar10 = local_68;
    if (0xfff < uVar11) {
      ppppuVar10 = (undefined8 ****)local_68[-1];
      if (0x1f < (ulonglong)((longlong)local_68 + (-8 - (longlong)ppppuVar10))) {
        pcVar2 = (code *)swi(0x29);
        (*pcVar2)(5);
        pcVar2 = (code *)swi(3);
        plVar9 = (longlong *)(*pcVar2)();
        return plVar9;
      }
      uVar11 = uStack_50 + 0x28;
    }
    thunk_FUN_1803d64e0(ppppuVar10,uVar11);
  }
  return param_1;
}



/* ===== 180066e00 FUN_180066e00 ===== */

longlong FUN_180066e00(longlong param_1,ulonglong param_2,ulonglong param_3,undefined1 param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_2 <= param_3) {
    return -1;
  }
  lVar1 = thunk_FUN_1804e6c50(param_1 + param_3,param_1 + param_2,param_4);
  lVar2 = -1;
  if (lVar1 != param_1 + param_2) {
    lVar2 = lVar1 - param_1;
  }
  return lVar2;
}



/* ===== 180066e60 FUN_180066e60 ===== */

void FUN_180066e60(longlong *param_1,undefined4 *param_2)

{
  ulonglong uVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  
  puVar7 = (undefined4 *)param_1[1];
  if (puVar7 != (undefined4 *)param_1[2]) {
    *puVar7 = *param_2;
    param_1[1] = param_1[1] + 4;
    return;
  }
  uVar9 = (longlong)puVar7 - *param_1;
  lVar3 = (longlong)uVar9 >> 2;
  uVar8 = 0x3fffffffffffffff;
  if (lVar3 == 0x3fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_1800118d0();
  }
  uVar1 = lVar3 + 1;
  uVar5 = param_1[2] - *param_1 >> 2;
  if (uVar5 <= 0x3fffffffffffffff - (uVar5 >> 1)) {
    uVar5 = (uVar5 >> 1) + uVar5;
    uVar8 = uVar1;
    if (uVar1 <= uVar5) {
      uVar8 = uVar5;
    }
    if (0x3fffffffffffffff < uVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  puVar4 = (undefined4 *)FUN_18000fb70(uVar8 * 4);
  puVar11 = (undefined4 *)((uVar9 & 0xfffffffffffffffc) + (longlong)puVar4);
  puVar6 = puVar11 + 1;
  *puVar11 = *param_2;
  puVar2 = (undefined4 *)*param_1;
  plVar10 = param_1;
  uVar9 = uVar8;
  puVar12 = puVar6;
  if (puVar7 == (undefined4 *)param_1[1]) {
    lVar3 = param_1[1] - (longlong)puVar2;
    puVar6 = puVar4;
    puVar7 = puVar2;
  }
  else {
    FUN_180540530(puVar4,puVar2,(longlong)puVar7 - (longlong)puVar2);
    lVar3 = param_1[1] - (longlong)puVar7;
    puVar11 = puVar4;
  }
  FUN_180540530(puVar6,puVar7,lVar3);
  FUN_18006b9f0(param_1,puVar4,uVar1,uVar8,plVar10,0,uVar9,puVar11,puVar12);
  return;
}



/* ===== 180066fa0 thunk_FUN_180068f30 ===== */

void thunk_FUN_180068f30(ulonglong *param_1)

{
  code *pcVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  puVar5 = auStack_28;
  uVar4 = *param_1;
  if (uVar4 == 0) {
    return;
  }
  uVar2 = ((longlong)(param_1[2] - uVar4) >> 2) * 4;
  uVar3 = uVar4;
  if (0xfff < uVar2) {
    uVar3 = *(ulonglong *)(uVar4 - 8);
    uVar4 = (uVar4 - uVar3) - 8;
    if (uVar4 < 0x20) {
      uVar2 = uVar2 + 0x27;
      puVar5 = auStack_28;
    }
    else {
      pcVar1 = (code *)swi(0x29);
      uVar2 = (*pcVar1)(5);
      puVar5 = auStack_20;
      uVar3 = uVar4;
    }
  }
  *(undefined8 *)(puVar5 + -8) = 0x180068f85;
  thunk_FUN_1803d64e0(uVar3,uVar2);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* ===== 180066fe0 thunk_FUN_1800244c0 ===== */

void thunk_FUN_1800244c0(longlong *param_1)

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
  lVar2 = *param_1;
  if (lVar2 == 0) {
    return;
  }
  if (0xfff < (param_1[2] - lVar2 & 0xfffffffffffffff0U)) {
    lVar3 = *(longlong *)(lVar2 + -8);
    if ((lVar2 - lVar3) - 8U < 0x20) goto LAB_180024506;
    pcVar1 = (code *)swi(0x29);
    lVar2 = (*pcVar1)(5);
    puVar4 = auStack_20;
  }
  lVar3 = lVar2;
  puVar5 = puVar4;
LAB_180024506:
  *(undefined8 *)(puVar5 + -8) = 0x18002450b;
  thunk_FUN_1803d64e0(lVar3);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* ===== 180066ff0 FUN_180066ff0 ===== */

void FUN_180066ff0(longlong *param_1)

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
  lVar3 = *param_1;
  if (lVar3 == 0) {
    return;
  }
  lVar2 = param_1[1];
  for (; lVar3 != lVar2; lVar3 = lVar3 + 0x40) {
    FUN_18000f890(lVar3 + 0x20);
    FUN_18000f890(lVar3);
  }
  lVar3 = *param_1;
  if (0xfff < (param_1[2] - lVar3 & 0xffffffffffffffc0U)) {
    lVar2 = *(longlong *)(lVar3 + -8);
    if ((lVar3 - lVar2) - 8U < 0x20) goto LAB_180067079;
    pcVar1 = (code *)swi(0x29);
    lVar3 = (*pcVar1)(5);
    puVar4 = auStack_20;
  }
  lVar2 = lVar3;
  puVar5 = puVar4;
LAB_180067079:
  *(undefined8 *)(puVar5 + -8) = 0x18006707e;
  thunk_FUN_1803d64e0(lVar2);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* ===== 1800670a0 FUN_1800670a0 ===== */

void FUN_1800670a0(undefined8 *param_1)

{
  LPVOID lpMem;
  undefined4 *puVar1;
  BOOL BVar2;
  DWORD DVar3;
  undefined4 uVar4;
  
  lpMem = (LPVOID)*param_1;
  if (lpMem == (LPVOID)0x0) {
    return;
  }
  if ((lpMem != (LPVOID)0x0) && (BVar2 = HeapFree(DAT_180c9ffc8,0,lpMem), BVar2 == 0)) {
    DVar3 = GetLastError();
    uVar4 = FUN_18051be70(DVar3);
    puVar1 = (undefined4 *)FUN_18051bfb0();
    *puVar1 = uVar4;
  }
  return;
}



/* ===== 1800670b0 FUN_1800670b0 ===== */

void FUN_1800670b0(longlong *param_1,char *param_2)

{
  char cVar1;
  ulonglong uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  longlong local_28;
  ulonglong local_20;
  
  uVar2 = param_1[3];
  if (((longlong)uVar2 < 0) && (uVar2 != 0)) {
    local_28 = *param_1 + (~uVar2 >> 5) * -4 + -4;
  }
  else {
    local_28 = *param_1 + (uVar2 >> 5) * 4;
  }
  local_20 = (ulonglong)((uint)uVar2 & 0x1f);
  uVar2 = FUN_18006cc10(param_1,&local_28,1);
  if (((longlong)uVar2 < 0) && (uVar2 != 0)) {
    puVar4 = (uint *)(*param_1 + (~uVar2 >> 5) * -4 + -4);
  }
  else {
    puVar4 = (uint *)(*param_1 + (uVar2 >> 5) * 4);
  }
  uVar3 = (uint)uVar2 & 0x1f;
  uVar2 = (ulonglong)uVar3 + 1;
  uVar6 = (uint)uVar2 & 0x1f;
  if ((0x1f < uVar2) || ((ulonglong)uVar3 != (ulonglong)uVar6)) {
    cVar1 = *param_2;
    uVar3 = -1 << (sbyte)uVar3;
    if (uVar2 < 0x20) {
      uVar5 = 0xffffffff >> (0x20U - (char)uVar6 & 0x1f);
      uVar6 = 0;
      if (cVar1 != '\0') {
        uVar6 = uVar5;
      }
      *puVar4 = ~(uVar5 & uVar3) & *puVar4 | uVar6 & uVar3;
    }
    else {
      uVar2 = uVar2 >> 5;
      uVar5 = 0;
      if (cVar1 != '\0') {
        uVar5 = uVar3;
      }
      *puVar4 = ~uVar3 & *puVar4 | uVar5;
      FUN_180540170(puVar4 + 1,-(cVar1 != '\0'),uVar2 * 4 + -4);
      if ((ulonglong)uVar6 != 0) {
        uVar6 = 0xffffffff >> (0x20U - (char)uVar6 & 0x1f);
        uVar3 = 0;
        if (cVar1 != '\0') {
          uVar3 = uVar6;
        }
        puVar4[uVar2] = ~uVar6 & puVar4[uVar2] | uVar3;
      }
    }
  }
  return;
}



/* ===== 180067220 FUN_180067220 ===== */

void FUN_180067220(void)

{
  FUN_180068f30();
  return;
}



/* ===== 180067240 FUN_180067240 ===== */

longlong * FUN_180067240(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  
  if (param_1 != param_2) {
    puVar5 = (undefined8 *)*param_2;
    uVar3 = param_2[1] - (longlong)puVar5;
    uVar7 = (longlong)uVar3 >> 5;
    puVar8 = (undefined8 *)*param_1;
    if ((ulonglong)(param_1[2] - (longlong)puVar8 >> 5) < uVar7) {
      FUN_18006bb60(param_1,uVar7);
      lVar2 = FUN_18006b540(puVar5,uVar7,*param_1,param_1);
    }
    else {
      puVar4 = (undefined8 *)param_1[1];
      uVar9 = (longlong)puVar4 - (longlong)puVar8 >> 5;
      if (uVar9 < uVar7) {
        if (puVar8 != puVar4) {
          do {
            if (puVar8 != puVar5) {
              if ((ulonglong)puVar5[3] < 0x10) {
                puVar4 = puVar5;
              }
              else {
                puVar4 = (undefined8 *)*puVar5;
              }
              FUN_180029840(puVar8,puVar4,puVar5[2]);
            }
            puVar8 = puVar8 + 4;
            puVar5 = puVar5 + 4;
            puVar4 = (undefined8 *)param_1[1];
          } while (puVar8 != puVar4);
        }
        lVar2 = FUN_18006b540(puVar5,uVar7 - uVar9,puVar4,param_1);
      }
      else {
        lVar2 = (uVar3 & 0xffffffffffffffe0) + (longlong)puVar8;
        while (uVar3 != 0) {
          if (puVar8 != puVar5) {
            if ((ulonglong)puVar5[3] < 0x10) {
              puVar4 = puVar5;
            }
            else {
              puVar4 = (undefined8 *)*puVar5;
            }
            FUN_180029840(puVar8,puVar4,puVar5[2]);
          }
          puVar8 = puVar8 + 4;
          puVar5 = puVar5 + 4;
          uVar7 = uVar7 - 1;
          uVar3 = uVar7;
        }
        lVar1 = param_1[1];
        for (lVar6 = lVar2; lVar6 != lVar1; lVar6 = lVar6 + 0x20) {
          FUN_18000f890(lVar6);
        }
      }
    }
    param_1[1] = lVar2;
  }
  return param_1;
}



/* ===== 180067380 FUN_180067380 ===== */

longlong * FUN_180067380(longlong *param_1,longlong *param_2)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  puVar4 = auStack_48;
  puVar5 = auStack_48;
  if (param_1 == param_2) {
    return param_1;
  }
  lVar3 = *param_1;
  if (lVar3 == 0) goto LAB_18006740a;
  lVar2 = param_1[1];
  for (; lVar3 != lVar2; lVar3 = lVar3 + 0x20) {
    FUN_18000f890(lVar3);
  }
  lVar3 = *param_1;
  if ((param_1[2] - lVar3 & 0xffffffffffffffe0U) < 0x1000) {
LAB_1800673f7:
    lVar2 = lVar3;
    puVar5 = puVar4;
  }
  else {
    lVar2 = *(longlong *)(lVar3 + -8);
    if (0x1f < (lVar3 - lVar2) - 8U) {
      pcVar1 = (code *)swi(0x29);
      lVar3 = (*pcVar1)(5);
      puVar4 = auStack_40;
      goto LAB_1800673f7;
    }
  }
  *(undefined8 *)(puVar5 + -8) = 0x1800673ff;
  thunk_FUN_1803d64e0(lVar2);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
LAB_18006740a:
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return param_1;
}



/* ===== 180067440 FUN_180067440 ===== */

void FUN_180067440(longlong *param_1)

{
  if (*param_1 != 0) {
    thunk_FUN_1805277b0();
  }
  *param_1 = 0;
  return;
}



/* ===== 180067470 FUN_180067470 ===== */

uint FUN_180067470(undefined8 *param_1,ulonglong param_2,ulonglong param_3,char *param_4)

{
  uint uVar1;
  size_t sVar2;
  ulonglong uVar3;
  
  uVar3 = param_1[2];
  if (uVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_18002a1a0();
  }
  sVar2 = strlen(param_4);
  uVar3 = uVar3 - param_2;
  if (uVar3 < param_3) {
    param_3 = uVar3;
  }
  if (0xf < (ulonglong)param_1[3]) {
    param_1 = (undefined8 *)*param_1;
  }
  uVar3 = param_3;
  if (sVar2 < param_3) {
    uVar3 = sVar2;
  }
  uVar1 = memcmp((void *)((longlong)param_1 + param_2),param_4,uVar3);
  if (uVar1 == 0) {
    if (param_3 < sVar2) {
      uVar1 = 0xffffffff;
    }
    else {
      uVar1 = (uint)(sVar2 < param_3);
    }
  }
  return uVar1;
}



/* ===== 180067510 FUN_180067510 ===== */

void FUN_180067510(ulonglong *param_1,ulonglong param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  code *pcVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  
  uVar3 = param_1[3];
  if (param_2 <= uVar3) {
    return;
  }
  uVar4 = param_1[2];
  if (0x7fffffffffffffff - uVar4 < param_2 - uVar4) {
                    /* WARNING: Subroutine does not return */
    FUN_180011990();
  }
  uVar6 = param_2 | 0xf;
  uVar7 = 0x7fffffffffffffff;
  if (((uVar6 < 0x8000000000000000) && (uVar3 <= 0x7fffffffffffffff - (uVar3 >> 1))) &&
     (uVar2 = (uVar3 >> 1) + uVar3, uVar7 = uVar6, uVar6 < uVar2)) {
    uVar7 = uVar2;
  }
  uVar6 = FUN_18000fb70(uVar7 + 1);
  param_1[2] = param_2;
  param_1[3] = uVar7;
  if (uVar3 < 0x10) {
    FUN_180540530(uVar6,param_1,uVar4 + 1);
  }
  else {
    uVar7 = *param_1;
    FUN_180540530(uVar6,uVar7,uVar4 + 1);
    puVar8 = auStack_38;
    if (0xfff < uVar3 + 1) {
      plVar1 = (longlong *)(uVar7 - 8);
      uVar7 = (uVar7 - *plVar1) - 8;
      if (uVar7 < 0x20) {
        thunk_FUN_1803d64e0(*plVar1,uVar3 + 0x28);
        goto LAB_1800675f6;
      }
      pcVar5 = (code *)swi(0x29);
      (*pcVar5)(5);
      puVar8 = auStack_30;
    }
    *(undefined8 *)(puVar8 + -8) = 0x1800675ec;
    thunk_FUN_1803d64e0(uVar7);
  }
LAB_1800675f6:
  *param_1 = uVar6;
  param_1[2] = uVar4;
  return;
}



/* ===== 180067620 FUN_180067620 ===== */

longlong * FUN_180067620(longlong *param_1,undefined8 *param_2)

{
  if (0xf < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  FUN_180069440(param_1,param_2);
  *(undefined ***)((longlong)*(int *)(*param_1 + 4) + (longlong)param_1) =
       std::basic_ofstream<char,std::char_traits<char>_>::vftable;
  *(int *)((longlong)*(int *)(*param_1 + 4) + -4 + (longlong)param_1) =
       *(int *)(*param_1 + 4) + -0xa8;
  return param_1;
}



/* ===== 180067670 FUN_180067670 ===== */

longlong * FUN_180067670(longlong *param_1,undefined8 *param_2)

{
  if (0xf < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  FUN_1800695d0(param_1,param_2);
  *(undefined ***)((longlong)*(int *)(*param_1 + 4) + (longlong)param_1) =
       std::basic_ifstream<char,std::char_traits<char>_>::vftable;
  *(int *)((longlong)*(int *)(*param_1 + 4) + -4 + (longlong)param_1) =
       *(int *)(*param_1 + 4) + -0xb0;
  return param_1;
}



/* ===== 1800676c0 FUN_1800676c0 ===== */

void FUN_1800676c0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_180068df0(param_2);
  FUN_180069760(param_1,uVar1);
  return;
}



/* ===== 1800676f0 FUN_1800676f0 ===== */

int FUN_1800676f0(longlong *param_1)

{
  int iVar1;
  
  if (param_1[0x10] != 0) {
    iVar1 = (**(code **)(*param_1 + 0x18))(param_1,0xffffffff);
    if (iVar1 != -1) {
      iVar1 = fflush((FILE *)param_1[0x10]);
      return (-1 < iVar1) - 1;
    }
  }
  return 0;
}



/* ===== 180067740 FUN_180067740 ===== */

longlong FUN_180067740(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  
  if (*(longlong *)(param_1 + 0x80) != 0) {
    iVar1 = FUN_180511644(*(longlong *)(param_1 + 0x80),param_2,
                          (ulonglong)(param_2 == 0 && param_3 == 0) << 2,param_3);
    if (iVar1 == 0) {
      FUN_1800698d0(param_1,*(undefined8 *)(param_1 + 0x80),1);
      return param_1;
    }
  }
  return 0;
}



/* ===== 1800677a0 FUN_1800677a0 ===== */

longlong * FUN_1800677a0(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  longlong local_res8;
  
  local_res8 = param_3[1] + *param_3;
  if (*(longlong *)(param_1 + 0x80) != 0) {
    cVar3 = FUN_1800697e0();
    if (cVar3 != '\0') {
      iVar4 = fsetpos(*(FILE **)(param_1 + 0x80),&local_res8);
      if (iVar4 == 0) {
        *(longlong *)(param_1 + 0x74) = param_3[2];
        if (**(longlong **)(param_1 + 0x18) == param_1 + 0x70) {
          lVar1 = *(longlong *)(param_1 + 0x88);
          uVar2 = *(undefined8 *)(param_1 + 0x90);
          **(longlong **)(param_1 + 0x18) = lVar1;
          **(longlong **)(param_1 + 0x38) = lVar1;
          **(int **)(param_1 + 0x50) = (int)uVar2 - (int)lVar1;
        }
        lVar1 = *(longlong *)(param_1 + 0x74);
        *param_2 = local_res8;
        param_2[1] = 0;
        param_2[2] = lVar1;
        return param_2;
      }
    }
  }
  *param_2 = -1;
  param_2[1] = 0;
  param_2[2] = 0;
  return param_2;
}



/* ===== 180067880 FUN_180067880 ===== */

fpos_t * FUN_180067880(longlong param_1,fpos_t *param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  fpos_t fVar3;
  char cVar4;
  int iVar5;
  fpos_t local_res8;
  
  if (((**(longlong **)(param_1 + 0x38) == param_1 + 0x70) && (param_4 == 1)) &&
     (*(longlong *)(param_1 + 0x68) == 0)) {
    param_3 = param_3 + -1;
  }
  if ((((*(longlong *)(param_1 + 0x80) == 0) || (cVar4 = FUN_1800697e0(), cVar4 == '\0')) ||
      (((param_3 != 0 || (param_4 != 1)) &&
       (iVar5 = FUN_1805120b0(*(undefined8 *)(param_1 + 0x80),param_3,param_4), iVar5 != 0)))) ||
     (iVar5 = fgetpos(*(FILE **)(param_1 + 0x80),&local_res8), iVar5 != 0)) {
    *param_2 = -1;
    param_2[1] = 0;
    param_2[2] = 0;
    return param_2;
  }
  if (**(longlong **)(param_1 + 0x18) == param_1 + 0x70) {
    lVar1 = *(longlong *)(param_1 + 0x88);
    uVar2 = *(undefined8 *)(param_1 + 0x90);
    **(longlong **)(param_1 + 0x18) = lVar1;
    **(longlong **)(param_1 + 0x38) = lVar1;
    **(int **)(param_1 + 0x50) = (int)uVar2 - (int)lVar1;
  }
  fVar3 = *(fpos_t *)(param_1 + 0x74);
  *param_2 = local_res8;
  param_2[2] = fVar3;
  param_2[1] = 0;
  return param_2;
}



/* ===== 180067980 FUN_180067980 ===== */

longlong FUN_180067980(longlong *param_1,undefined1 *param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = param_3;
  if (param_1[0xd] != 0) {
    while (0 < lVar2) {
      if ((*(longlong *)param_1[8] == 0) || (iVar1 = *(int *)param_1[0xb], iVar1 < 1)) {
        iVar1 = (**(code **)(*param_1 + 0x18))(param_1,*param_2);
        if (iVar1 == -1) break;
        lVar2 = lVar2 + -1;
        lVar3 = 1;
      }
      else {
        lVar3 = lVar2;
        if (iVar1 <= lVar2) {
          lVar3 = (longlong)iVar1;
        }
        FUN_180540530(*(longlong *)param_1[8],param_2,lVar3);
        lVar2 = lVar2 - lVar3;
        *(int *)param_1[0xb] = *(int *)param_1[0xb] - (int)lVar3;
        *(longlong *)param_1[8] = *(longlong *)param_1[8] + (longlong)(int)lVar3;
      }
      param_2 = param_2 + lVar3;
    }
    return param_3 - lVar2;
  }
  if (*(longlong *)param_1[8] == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)param_1[0xb];
  }
  if (0 < param_3) {
    if (0 < iVar1) {
      lVar3 = (longlong)iVar1;
      if (param_3 < iVar1) {
        lVar3 = param_3;
      }
      FUN_180540530(*(longlong *)param_1[8],param_2,lVar3);
      lVar2 = param_3 - lVar3;
      *(int *)param_1[0xb] = *(int *)param_1[0xb] - (int)lVar3;
      *(longlong *)param_1[8] = *(longlong *)param_1[8] + (longlong)(int)lVar3;
      if (lVar2 < 1) goto LAB_180067a88;
      param_2 = param_2 + lVar3;
    }
    if (param_1[0x10] != 0) {
      lVar3 = FUN_18051142c(param_2,1,lVar2);
      lVar2 = lVar2 - lVar3;
    }
  }
LAB_180067a88:
  return param_3 - lVar2;
}



/* ===== 180067aa0 FUN_180067aa0 ===== */

longlong FUN_180067aa0(longlong *param_1,undefined1 *param_2,ulonglong param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  size_t sVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if ((longlong)param_3 < 1) {
    return 0;
  }
  uVar6 = param_3;
  if (param_1[0xd] == 0) {
    if ((*(longlong *)param_1[7] != 0) && (iVar3 = *(int *)param_1[10], iVar3 != 0)) {
      uVar5 = param_3;
      if ((ulonglong)(longlong)iVar3 < param_3) {
        uVar5 = (longlong)iVar3;
      }
      FUN_180540530(param_2,*(longlong *)param_1[7],uVar5);
      param_2 = param_2 + uVar5;
      uVar6 = param_3 - uVar5;
      *(int *)param_1[10] = *(int *)param_1[10] - (int)uVar5;
      *(longlong *)param_1[7] = *(longlong *)param_1[7] + (longlong)(int)uVar5;
    }
    if (param_1[0x10] != 0) {
      if (*(longlong **)param_1[3] == param_1 + 0xe) {
        lVar1 = param_1[0x11];
        lVar2 = param_1[0x12];
        *(longlong *)param_1[3] = lVar1;
        *(longlong *)param_1[7] = lVar1;
        *(int *)param_1[10] = (int)lVar2 - (int)lVar1;
      }
      while (0xfff < uVar6) {
        sVar4 = fread(param_2,1,0xfff,(FILE *)param_1[0x10]);
        uVar6 = uVar6 - sVar4;
        if (sVar4 != 0xfff) goto LAB_180067c34;
        param_2 = param_2 + 0xfff;
      }
      if (uVar6 != 0) {
        sVar4 = fread(param_2,1,uVar6,(FILE *)param_1[0x10]);
        uVar6 = uVar6 - sVar4;
      }
    }
  }
  else {
    do {
      if ((*(longlong *)param_1[7] == 0) || (iVar3 = *(int *)param_1[10], iVar3 < 1)) {
        iVar3 = (**(code **)(*param_1 + 0x38))(param_1);
        if (iVar3 == -1) break;
        *param_2 = (char)iVar3;
        uVar6 = uVar6 - 1;
        uVar5 = 1;
      }
      else {
        uVar5 = uVar6;
        if ((longlong)iVar3 <= (longlong)uVar6) {
          uVar5 = (longlong)iVar3;
        }
        FUN_180540530(param_2,*(longlong *)param_1[7],uVar5);
        uVar6 = uVar6 - uVar5;
        *(int *)param_1[10] = *(int *)param_1[10] - (int)uVar5;
        *(longlong *)param_1[7] = *(longlong *)param_1[7] + (longlong)(int)uVar5;
      }
      param_2 = param_2 + uVar5;
    } while (0 < (longlong)uVar6);
  }
LAB_180067c34:
  return param_3 - uVar6;
}



/* ===== 180067c50 FUN_180067c50 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint FUN_180067c50(longlong param_1)

{
  byte *pbVar1;
  undefined8 uVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  char *******pppppppcVar7;
  uint uVar8;
  ulonglong uVar9;
  char *pcVar10;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  byte *local_80;
  undefined1 *local_78;
  byte **local_70;
  byte local_68;
  undefined1 local_67 [7];
  longlong local_60;
  byte *local_58;
  char *******local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  ulonglong local_38;
  ulonglong local_30;
  
  local_30 = DAT_180919500 ^ (ulonglong)auStack_a8;
  uVar6 = **(ulonglong **)(param_1 + 0x38);
  if (uVar6 != 0) {
    iVar5 = **(int **)(param_1 + 0x50);
    if (uVar6 < uVar6 + (longlong)iVar5) {
      **(int **)(param_1 + 0x50) = iVar5 + -1;
      pbVar1 = (byte *)**(longlong **)(param_1 + 0x38);
      **(longlong **)(param_1 + 0x38) = (longlong)(pbVar1 + 1);
      return (uint)*pbVar1;
    }
  }
  if (*(longlong *)(param_1 + 0x80) == 0) {
    uVar8 = 0xffffffff;
  }
  else {
    if (**(longlong **)(param_1 + 0x18) == param_1 + 0x70) {
      uVar2 = *(undefined8 *)(param_1 + 0x90);
      lVar3 = *(longlong *)(param_1 + 0x88);
      **(longlong **)(param_1 + 0x18) = lVar3;
      **(longlong **)(param_1 + 0x38) = lVar3;
      **(int **)(param_1 + 0x50) = (int)uVar2 - (int)lVar3;
    }
    if (*(longlong *)(param_1 + 0x68) == 0) {
      uVar4 = FUN_180510db8(*(undefined8 *)(param_1 + 0x80));
      uVar8 = 0xffffffff;
      if (uVar4 != 0xffffffff) {
        uVar8 = uVar4 & 0xff;
      }
    }
    else {
      uStack_48 = 0;
      local_40 = 0;
      local_38 = 0xf;
      local_50 = (char *******)0x0;
      uVar8 = FUN_180510db8(*(undefined8 *)(param_1 + 0x80));
      if (uVar8 != 0xffffffff) {
LAB_180067d50:
        FUN_1800690a0(&local_50,uVar8 & 0xff);
        if (local_38 < 0x10) {
          pppppppcVar7 = (char *******)&local_50;
        }
        else {
          pppppppcVar7 = local_50;
        }
        local_70 = &local_58;
        local_78 = local_67;
        local_80 = &local_68;
        local_88 = &local_60;
        iVar5 = (**(code **)(**(longlong **)(param_1 + 0x68) + 0x30))
                          (*(longlong **)(param_1 + 0x68),param_1 + 0x74,pppppppcVar7,
                           (char *)((longlong)pppppppcVar7 + local_40));
        if ((iVar5 == 0) || (iVar5 == 1)) {
          if (local_58 == &local_68) goto code_r0x000180067dd0;
          pppppppcVar7 = (char *******)&local_50;
          if (0xf < local_38) {
            pppppppcVar7 = local_50;
          }
          pcVar10 = (char *)((longlong)pppppppcVar7 + (local_40 - local_60));
          while (0 < (longlong)pcVar10) {
            pcVar10 = pcVar10 + -1;
            ungetc((int)pcVar10[local_60],*(FILE **)(param_1 + 0x80));
          }
          uVar8 = (uint)local_68;
          goto LAB_180067e24;
        }
        if (iVar5 == 3) {
          pppppppcVar7 = (char *******)&local_50;
          if (0xf < local_38) {
            pppppppcVar7 = local_50;
          }
          uVar8 = (uint)*(char *)pppppppcVar7;
          goto LAB_180067e24;
        }
      }
LAB_180067e1f:
      uVar8 = 0xffffffff;
LAB_180067e24:
      FUN_18000f890(&local_50);
    }
  }
  return uVar8;
code_r0x000180067dd0:
  if (local_38 < 0x10) {
    pppppppcVar7 = (char *******)&local_50;
  }
  else {
    pppppppcVar7 = local_50;
  }
  uVar6 = local_60 - (longlong)pppppppcVar7;
  if (local_40 < (ulonglong)(local_60 - (longlong)pppppppcVar7)) {
    uVar6 = local_40;
  }
  uVar9 = local_40 - uVar6;
  FUN_180540530(pppppppcVar7,(char *)((longlong)pppppppcVar7 + uVar6),uVar9 + 1);
  local_40 = uVar9;
  uVar8 = FUN_180510db8(*(undefined8 *)(param_1 + 0x80));
  if (uVar8 == 0xffffffff) goto LAB_180067e1f;
  goto LAB_180067d50;
}



/* ===== 180067eb0 FUN_180067eb0 ===== */

ulonglong FUN_180067eb0(longlong *param_1)

{
  byte *pbVar1;
  ulonglong uVar2;
  
  pbVar1 = *(byte **)param_1[7];
  if ((pbVar1 != (byte *)0x0) && (pbVar1 < pbVar1 + *(int *)param_1[10])) {
    return (ulonglong)*pbVar1;
  }
  uVar2 = (**(code **)(*param_1 + 0x38))(param_1);
  if ((int)uVar2 == -1) {
    return uVar2;
  }
  (**(code **)(*param_1 + 0x20))(param_1,uVar2 & 0xffffffff);
  return uVar2 & 0xffffffff;
}



/* ===== 180067f20 FUN_180067f20 ===== */

uint FUN_180067f20(longlong param_1,uint param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  int iVar4;
  
  uVar2 = **(ulonglong **)(param_1 + 0x38);
  if (((uVar2 != 0) && (**(ulonglong **)(param_1 + 0x18) < uVar2)) &&
     ((param_2 == 0xffffffff || (*(byte *)(uVar2 - 1) == param_2)))) {
    **(int **)(param_1 + 0x50) = **(int **)(param_1 + 0x50) + 1;
    **(longlong **)(param_1 + 0x38) = **(longlong **)(param_1 + 0x38) + -1;
    if (param_2 == 0xffffffff) {
      param_2 = 0;
    }
    return param_2;
  }
  if ((*(FILE **)(param_1 + 0x80) != (FILE *)0x0) && (param_2 != 0xffffffff)) {
    if ((*(longlong *)(param_1 + 0x68) == 0) &&
       (iVar4 = ungetc(param_2 & 0xff,*(FILE **)(param_1 + 0x80)), iVar4 != -1)) {
      return param_2;
    }
    puVar1 = (undefined1 *)(param_1 + 0x70);
    if ((undefined1 *)**(longlong **)(param_1 + 0x38) != puVar1) {
      *puVar1 = (char)param_2;
      puVar3 = (undefined1 *)**(longlong **)(param_1 + 0x18);
      if (puVar3 != puVar1) {
        *(undefined1 **)(param_1 + 0x88) = puVar3;
        *(longlong *)(param_1 + 0x90) =
             (longlong)**(int **)(param_1 + 0x50) + **(longlong **)(param_1 + 0x38);
      }
      **(longlong **)(param_1 + 0x18) = (longlong)puVar1;
      **(longlong **)(param_1 + 0x38) = (longlong)puVar1;
      **(int **)(param_1 + 0x50) = ((int)param_1 - (int)puVar1) + 0x71;
      return param_2;
    }
  }
  return 0xffffffff;
}



/* ===== 180068010 FUN_180068010 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_180068010(longlong param_1,int param_2)

{
  ulonglong uVar1;
  char *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  char cVar8;
  undefined1 auStack_88 [32];
  char **local_68;
  undefined1 *local_60;
  ulonglong *local_58;
  longlong *local_50;
  char local_48;
  undefined1 local_47 [7];
  longlong local_40;
  char *local_38;
  undefined1 local_30 [32];
  ulonglong local_10;
  
  local_10 = DAT_180919500 ^ (ulonglong)auStack_88;
  if (param_2 == -1) {
    return 0;
  }
  uVar1 = **(ulonglong **)(param_1 + 0x40);
  cVar8 = (char)param_2;
  if (uVar1 != 0) {
    iVar5 = **(int **)(param_1 + 0x58);
    if (uVar1 < uVar1 + (longlong)iVar5) {
      **(int **)(param_1 + 0x58) = iVar5 + -1;
      pcVar2 = (char *)**(longlong **)(param_1 + 0x40);
      **(longlong **)(param_1 + 0x40) = (longlong)(pcVar2 + 1);
      *pcVar2 = cVar8;
      return param_2;
    }
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    if (**(longlong **)(param_1 + 0x18) == param_1 + 0x70) {
      lVar7 = *(longlong *)(param_1 + 0x88);
      uVar3 = *(undefined8 *)(param_1 + 0x90);
      **(longlong **)(param_1 + 0x18) = lVar7;
      **(longlong **)(param_1 + 0x38) = lVar7;
      **(int **)(param_1 + 0x50) = (int)uVar3 - (int)lVar7;
    }
    plVar4 = *(longlong **)(param_1 + 0x68);
    if (plVar4 == (longlong *)0x0) {
LAB_18006811f:
      iVar5 = FUN_18050ff88((int)cVar8,*(undefined8 *)(param_1 + 0x80));
      if (iVar5 == -1) {
        return -1;
      }
      return param_2;
    }
    local_50 = &local_40;
    local_58 = &local_10;
    local_60 = local_30;
    local_68 = &local_38;
    local_48 = cVar8;
    iVar5 = (**(code **)(*plVar4 + 0x38))(plVar4,param_1 + 0x74,&local_48,local_47);
    if ((iVar5 == 0) || (iVar5 == 1)) {
      lVar7 = local_40 - (longlong)local_30;
      if ((lVar7 == 0) ||
         (lVar6 = FUN_18051142c(local_30,1,lVar7,*(undefined8 *)(param_1 + 0x80)), lVar7 == lVar6))
      {
        *(undefined1 *)(param_1 + 0x71) = 1;
        if (local_38 == &local_48) {
          return -1;
        }
        return param_2;
      }
    }
    else if (iVar5 == 3) {
      cVar8 = local_48;
      goto LAB_18006811f;
    }
  }
  return -1;
}



/* ===== 1800681b0 FUN_1800681b0 ===== */

void FUN_1800681b0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x80) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001805110b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(*(longlong *)(param_1 + 0x80) + 0x30));
  return;
}



/* ===== 1800681d0 FUN_1800681d0 ===== */

void FUN_1800681d0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x80) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001805110a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EnterCriticalSection((LPCRITICAL_SECTION)(*(longlong *)(param_1 + 0x80) + 0x30));
  return;
}



/* ===== 1800681f0 FUN_1800681f0 ===== */

void FUN_1800681f0(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  *param_1 = std::basic_filebuf<char,std::char_traits<char>_>::vftable;
  if ((param_1[0x10] != 0) && (*(undefined8 **)param_1[3] == param_1 + 0xe)) {
    uVar1 = param_1[0x12];
    lVar2 = param_1[0x11];
    *(longlong *)param_1[3] = lVar2;
    *(longlong *)param_1[7] = lVar2;
    *(int *)param_1[10] = (int)uVar1 - (int)lVar2;
  }
  if (*(char *)((longlong)param_1 + 0x7c) != '\0') {
    FUN_1800699a0(param_1);
  }
  *param_1 = std::basic_streambuf<char,std::char_traits<char>_>::vftable;
  lVar2 = param_1[0xc];
  if (lVar2 == 0) {
    return;
  }
  if (*(longlong **)(lVar2 + 8) != (longlong *)0x0) {
    puVar3 = (undefined8 *)(**(code **)(**(longlong **)(lVar2 + 8) + 0x10))();
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  thunk_FUN_1803d64e0(lVar2,0x10);
  return;
}



/* ===== 1800682a0 FUN_1800682a0 ===== */

longlong * FUN_1800682a0(longlong *param_1,undefined8 param_2,longlong param_3)

{
  uint uVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  bool bVar9;
  undefined1 local_50 [16];
  undefined1 local_40 [40];
  
  plVar2 = *(longlong **)((longlong)*(int *)(*param_1 + 4) + 0x48 + (longlong)param_1);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  if (*(int *)((longlong)*(int *)(*param_1 + 4) + 0x10 + (longlong)param_1) == 0) {
    plVar2 = *(longlong **)((longlong)*(int *)(*param_1 + 4) + 0x50 + (longlong)param_1);
    if ((plVar2 == (longlong *)0x0) || (plVar2 == param_1)) {
      bVar9 = true;
    }
    else {
      FUN_18006be00();
      bVar9 = *(int *)((longlong)*(int *)(*param_1 + 4) + 0x10 + (longlong)param_1) == 0;
    }
  }
  else {
    bVar9 = false;
  }
  if (bVar9) {
    uVar7 = 0;
    if (0 < param_3) {
      plVar2 = *(longlong **)((longlong)*(int *)(*param_1 + 4) + 0x48 + (longlong)param_1);
      lVar5 = (**(code **)(*plVar2 + 0x48))(plVar2,param_2,param_3);
      uVar7 = 0;
      if (lVar5 != param_3) {
        uVar7 = 4;
      }
    }
  }
  else {
    uVar7 = 4;
  }
  lVar5 = (longlong)*(int *)(*param_1 + 4);
  uVar1 = *(uint *)(lVar5 + 0x10 + (longlong)param_1);
  uVar6 = 4;
  if (*(longlong *)(lVar5 + 0x48 + (longlong)param_1) != 0) {
    uVar6 = 0;
  }
  *(uint *)(lVar5 + 0x10 + (longlong)param_1) = uVar6 | uVar7 | uVar1 & 0x17;
  uVar7 = (uVar6 | uVar7 | uVar1) & *(uint *)(lVar5 + 0x14 + (longlong)param_1);
  if ((uVar7 & 0x17) != 0) {
    if ((uVar7 & 4) == 0) {
      pcVar8 = "ios_base::failbit set";
      if ((uVar7 & 2) == 0) {
        pcVar8 = "ios_base::eofbit set";
      }
    }
    else {
      pcVar8 = "ios_base::badbit set";
    }
    uVar4 = FUN_18004d7f0(local_50,1);
    FUN_18004e280(local_40,pcVar8,uVar4);
                    /* WARNING: Subroutine does not return */
    FUN_1804ef5f0(local_40,&DAT_180915ec0);
  }
  iVar3 = thunk_FUN_1804ef6a0();
  if (iVar3 == 0) {
    FUN_18006bf40(param_1);
  }
  plVar2 = *(longlong **)((longlong)*(int *)(*param_1 + 4) + 0x48 + (longlong)param_1);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x10))();
  }
  return param_1;
}



/* ===== 1800684a0 FUN_1800684a0 ===== */

undefined8 * FUN_1800684a0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0xffffffffffffffff;
  param_2[1] = 0;
  param_2[2] = 0;
  return param_2;
}



/* ===== 1800684c0 FUN_1800684c0 ===== */

longlong FUN_1800684c0(longlong *param_1,undefined1 *param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = param_3;
  while (0 < lVar2) {
    if ((*(longlong *)param_1[8] == 0) || (iVar1 = *(int *)param_1[0xb], iVar1 < 1)) {
      iVar1 = (**(code **)(*param_1 + 0x18))(param_1,*param_2);
      if (iVar1 == -1) break;
      lVar2 = lVar2 + -1;
      lVar3 = 1;
    }
    else {
      lVar3 = lVar2;
      if (iVar1 <= lVar2) {
        lVar3 = (longlong)iVar1;
      }
      FUN_180540530(*(longlong *)param_1[8],param_2,lVar3);
      lVar2 = lVar2 - lVar3;
      *(int *)param_1[0xb] = *(int *)param_1[0xb] - (int)lVar3;
      *(longlong *)param_1[8] = *(longlong *)param_1[8] + (longlong)(int)lVar3;
    }
    param_2 = param_2 + lVar3;
  }
  return param_3 - lVar2;
}



/* ===== 180068560 FUN_180068560 ===== */

longlong FUN_180068560(longlong *param_1,undefined1 *param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = param_3;
  while (0 < lVar2) {
    if ((*(longlong *)param_1[7] == 0) || (iVar1 = *(int *)param_1[10], iVar1 < 1)) {
      iVar1 = (**(code **)(*param_1 + 0x38))(param_1);
      if (iVar1 == -1) break;
      *param_2 = (char)iVar1;
      lVar2 = lVar2 + -1;
      lVar3 = 1;
    }
    else {
      lVar3 = lVar2;
      if (iVar1 <= lVar2) {
        lVar3 = (longlong)iVar1;
      }
      FUN_180540530(param_2,*(longlong *)param_1[7],lVar3);
      lVar2 = lVar2 - lVar3;
      *(int *)param_1[10] = *(int *)param_1[10] - (int)lVar3;
      *(longlong *)param_1[7] = *(longlong *)param_1[7] + (longlong)(int)lVar3;
    }
    param_2 = param_2 + lVar3;
  }
  return param_3 - lVar2;
}



/* ===== 180068600 FUN_180068600 ===== */

ulonglong FUN_180068600(longlong *param_1)

{
  byte *pbVar1;
  ulonglong uVar2;
  
  uVar2 = (**(code **)(*param_1 + 0x30))();
  if ((int)uVar2 == -1) {
    return uVar2;
  }
  *(int *)param_1[10] = *(int *)param_1[10] + -1;
  pbVar1 = *(byte **)param_1[7];
  *(byte **)param_1[7] = pbVar1 + 1;
  return (ulonglong)*pbVar1;
}



/* ===== 180068640 FUN_180068640 ===== */

undefined8 FUN_180068640(void)

{
  return 0xffffffff;
}



/* ===== 180068650 FUN_180068650 ===== */

void FUN_180068650(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = param_1[0xc];
  *param_1 = std::basic_streambuf<char,std::char_traits<char>_>::vftable;
  if (lVar1 == 0) {
    return;
  }
  if (*(longlong **)(lVar1 + 8) != (longlong *)0x0) {
    puVar2 = (undefined8 *)(**(code **)(**(longlong **)(lVar1 + 8) + 0x10))();
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  thunk_FUN_1803d64e0(lVar1,0x10);
  return;
}



/* ===== 1800686b0 FUN_1800686b0 ===== */

void FUN_1800686b0(undefined8 *param_1)

{
  *param_1 = std::basic_ios<char,std::char_traits<char>_>::vftable;
  *param_1 = std::ios_base::vftable;
  FUN_1804eaa10();
  return;
}



/* ===== 1800686e0 FUN_1800686e0 ===== */

longlong FUN_1800686e0(longlong param_1,ulonglong param_2)

{
  param_1 = param_1 + -0xa8;
  FUN_18005e5f0(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1803d64e0(param_1,0x108);
  }
  return param_1;
}



/* ===== 180068720 FUN_180068720 ===== */

longlong FUN_180068720(longlong param_1,ulonglong param_2)

{
  param_1 = param_1 + -0xb0;
  FUN_18005e2f0(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1803d64e0(param_1,0x110);
  }
  return param_1;
}



/* ===== 180068760 FUN_180068760 ===== */

undefined8 FUN_180068760(undefined8 param_1,ulonglong param_2)

{
  FUN_1800681f0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1803d64e0(param_1,0x98);
  }
  return param_1;
}



/* ===== 1800687a0 FUN_1800687a0 ===== */

longlong * FUN_1800687a0(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  
  plVar1 = param_1 + -2;
  *(undefined ***)((longlong)*(int *)(*plVar1 + 4) + -0x10 + (longlong)param_1) =
       std::basic_ostream<char,std::char_traits<char>_>::vftable;
  *(int *)((longlong)*(int *)(*plVar1 + 4) + -0x14 + (longlong)param_1) =
       *(int *)(*plVar1 + 4) + -0x10;
  *param_1 = std::basic_ios<char,std::char_traits<char>_>::vftable;
  *param_1 = std::ios_base::vftable;
  FUN_1804eaa10();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1803d64e0(plVar1,0x70);
  }
  return plVar1;
}



/* ===== 180068820 FUN_180068820 ===== */

longlong * FUN_180068820(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  
  plVar1 = param_1 + -3;
  *(undefined ***)((longlong)*(int *)(*plVar1 + 4) + -0x18 + (longlong)param_1) =
       std::basic_istream<char,std::char_traits<char>_>::vftable;
  *(int *)((longlong)*(int *)(*plVar1 + 4) + -0x1c + (longlong)param_1) =
       *(int *)(*plVar1 + 4) + -0x18;
  *param_1 = std::basic_ios<char,std::char_traits<char>_>::vftable;
  *param_1 = std::ios_base::vftable;
  FUN_1804eaa10();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1803d64e0(plVar1,0x78);
  }
  return plVar1;
}



/* ===== 1800688a0 FUN_1800688a0 ===== */

undefined8 * FUN_1800688a0(undefined8 *param_1,ulonglong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = param_1[0xc];
  *param_1 = std::basic_streambuf<char,std::char_traits<char>_>::vftable;
  if (lVar1 != 0) {
    if (*(longlong **)(lVar1 + 8) != (longlong *)0x0) {
      puVar2 = (undefined8 *)(**(code **)(**(longlong **)(lVar1 + 8) + 0x10))();
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
    thunk_FUN_1803d64e0(lVar1,0x10);
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1803d64e0(param_1,0x68);
  }
  return param_1;
}



/* ===== 180068920 FUN_180068920 ===== */

undefined8 * FUN_180068920(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = std::basic_ios<char,std::char_traits<char>_>::vftable;
  *param_1 = std::ios_base::vftable;
  FUN_1804eaa10();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1803d64e0(param_1,0x60);
  }
  return param_1;
}



/* ===== 180068970 FUN_180068970 ===== */

void FUN_180068970(longlong *param_1,ulonglong param_2,longlong *param_3,longlong *param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_2 != 0) {
    if (0x7ffffffffffffff < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_1800118d0();
    }
    lVar2 = FUN_18000fb70(param_2 * 0x20);
    *param_1 = lVar2;
    param_1[1] = lVar2;
    param_1[2] = lVar2 + param_2 * 0x20;
    lVar2 = *param_1;
    lVar1 = *param_4;
    for (lVar3 = *param_3; lVar3 != lVar1; lVar3 = lVar3 + 0x20) {
      FUN_180024b50(lVar2,lVar3);
      lVar2 = lVar2 + 0x20;
    }
    param_1[1] = lVar2;
  }
  return;
}



/* ===== 180068a20 FUN_180068a20 ===== */

void FUN_180068a20(longlong *param_1,longlong *param_2,longlong *param_3)

{
  ulonglong *puVar1;
  int iVar2;
  byte *pbVar3;
  code *pcVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  undefined1 *puVar11;
  longlong lVar12;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [24];
  longlong *local_58;
  
  puVar11 = auStack_78;
  puVar1 = (ulonglong *)(param_1 + 2);
  *puVar1 = 0;
  param_1[3] = 0xf;
  plVar10 = (longlong *)*param_2;
  local_58 = param_1;
  do {
    if ((char)param_2[1] == '\0') {
      FUN_18006c630(param_2);
      plVar10 = (longlong *)*param_2;
    }
    if ((char)param_3[1] == '\0') {
      FUN_18006c630(param_3);
    }
    if (plVar10 == (longlong *)0x0) {
      if (*param_3 == 0) goto LAB_180068a8a;
    }
    else if (*param_3 != 0) {
LAB_180068a8a:
      if (0xf < (ulonglong)param_1[3]) {
        param_1 = (longlong *)*param_1;
      }
      *(undefined1 *)((longlong)param_1 + *puVar1) = 0;
      return;
    }
    uVar7 = *puVar1;
    uVar9 = param_1[3];
    if (uVar7 == uVar9) {
      if (uVar7 == 0x7fffffffffffffff) {
LAB_180068c02:
                    /* WARNING: Subroutine does not return */
        *(undefined **)(puVar11 + -8) = &UNK_180068c07;
        FUN_180011990();
      }
      plVar10 = param_1;
      if (0xf < uVar9) {
        plVar10 = (longlong *)*param_1;
      }
      uVar7 = uVar7 + 1 | 0xf;
      if (uVar7 < 0x8000000000000000) {
        if (0x7fffffffffffffff - (uVar9 >> 1) < uVar9) {
          uVar9 = 0x7fffffffffffffff;
        }
        else {
          uVar8 = (uVar9 >> 1) + uVar9;
          uVar9 = uVar7;
          if (uVar7 < uVar8) {
            uVar9 = uVar8;
          }
        }
      }
      else {
        uVar9 = 0x7fffffffffffffff;
      }
      lVar6 = FUN_18000fb70(uVar9 + 1);
      FUN_180540530(lVar6,plVar10,*puVar1);
      uVar7 = param_1[3];
      if (0xf < uVar7) {
        lVar12 = *param_1;
        uVar8 = uVar7 + 1;
        if (0xfff < uVar8) {
          if (0x1f < (lVar12 - *(longlong *)(lVar12 + -8)) - 8U) {
            pcVar4 = (code *)swi(0x29);
            (*pcVar4)(5);
            puVar11 = auStack_70;
            goto LAB_180068c02;
          }
          uVar8 = uVar7 + 0x28;
          lVar12 = *(longlong *)(lVar12 + -8);
        }
        thunk_FUN_1803d64e0(lVar12,uVar8);
      }
      *param_1 = lVar6;
      param_1[3] = uVar9;
    }
    if (uVar9 < 0x10) {
      plVar10 = param_1;
    }
    else {
      plVar10 = (longlong *)*param_1;
    }
    if ((char)param_2[1] == '\0') {
      FUN_18006c630(param_2);
    }
    *(undefined1 *)((longlong)plVar10 + *puVar1) = *(undefined1 *)((longlong)param_2 + 9);
    *puVar1 = *puVar1 + 1;
    plVar10 = (longlong *)*param_2;
    if (plVar10 == (longlong *)0x0) {
LAB_180068bec:
      *param_2 = 0;
      *(undefined1 *)(param_2 + 1) = 1;
      plVar10 = (longlong *)0x0;
    }
    else {
      if (*(longlong *)plVar10[7] == 0) {
LAB_180068bd5:
        uVar5 = (**(code **)(*plVar10 + 0x38))(plVar10);
      }
      else {
        iVar2 = *(int *)plVar10[10];
        if (iVar2 < 1) goto LAB_180068bd5;
        *(int *)plVar10[10] = iVar2 + -1;
        pbVar3 = *(byte **)plVar10[7];
        *(byte **)plVar10[7] = pbVar3 + 1;
        uVar5 = (uint)*pbVar3;
      }
      if (uVar5 == 0xffffffff) goto LAB_180068bec;
      *(undefined1 *)(param_2 + 1) = 0;
    }
  } while( true );
}



/* ===== 180068c10 FUN_180068c10 ===== */

void FUN_180068c10(longlong *param_1,ulonglong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  
  if (0x3fffffffffffffff < *param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_18000d840();
  }
  lVar1 = param_1[1];
  lVar2 = *param_1;
  uVar3 = FUN_18000fb70(*param_2 * 4);
  uVar5 = *param_2;
  plVar4 = param_1;
  FUN_180540530(uVar3,*param_1,param_1[1] - *param_1);
  FUN_18006b9f0(param_1,uVar3,lVar1 - lVar2 >> 2,*param_2,plVar4,0,uVar5);
  return;
}



/* ===== 180068ca0 FUN_180068ca0 ===== */

void FUN_180068ca0(longlong *param_1,longlong param_2,ulonglong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  lVar3 = *param_1;
  if ((ulonglong)(param_1[2] - lVar3 >> 2) < param_3) {
    FUN_18006ba70(param_1,param_3);
    lVar3 = *param_1;
    FUN_180540530(lVar3,param_2,param_3 * 4);
  }
  else {
    uVar2 = param_1[1] - lVar3 >> 2;
    if (uVar2 < param_3) {
      FUN_180540530(lVar3,param_2,uVar2 * 4);
      lVar1 = param_1[1];
      lVar3 = (param_3 - uVar2) * 4;
      FUN_180540530(lVar1,uVar2 * 4 + param_2,lVar3);
      param_1[1] = lVar3 + lVar1;
      return;
    }
    FUN_180540530(lVar3,param_2,param_3 * 4);
  }
  param_1[1] = param_3 * 4 + lVar3;
  return;
}



/* ===== 180068d80 FUN_180068d80 ===== */

ulonglong FUN_180068d80(longlong param_1,ulonglong param_2,ulonglong param_3,undefined8 param_4,
                       ulonglong param_5)

{
  longlong lVar1;
  
  if ((param_5 <= param_2) && (param_3 <= param_2 - param_5)) {
    if (param_5 == 0) {
      return param_3;
    }
    lVar1 = thunk_FUN_1804e92d0(param_1 + param_3,param_1 + param_2,param_4);
    if (lVar1 != param_1 + param_2) {
      return lVar1 - param_1;
    }
  }
  return 0xffffffffffffffff;
}



/* ===== 180068df0 FUN_180068df0 ===== */

longlong * FUN_180068df0(undefined8 param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong unaff_RSI;
  ulonglong uVar4;
  longlong *local_res10;
  undefined1 local_res18 [8];
  longlong *local_res20;
  
  FUN_1804ea500(local_res18,0);
  plVar1 = DAT_180ca0008;
  local_res20 = DAT_180ca0008;
  if (DAT_181116300 == 0) {
    FUN_1804ea500(&local_res10);
    if (DAT_181116300 == 0) {
      DAT_180c9ede0 = DAT_180c9ede0 + 1;
      DAT_181116300 = (longlong)DAT_180c9ede0;
    }
    FUN_1804ea5a0(&local_res10);
  }
  plVar2 = (longlong *)FUN_18004dd50(param_1,DAT_181116300);
  if (plVar2 == (longlong *)0x0) {
    if (plVar1 == (longlong *)0x0) {
      lVar3 = FUN_18006b820(&local_res20,param_1);
      plVar2 = local_res20;
      if (lVar3 == -1) {
        FUN_18004db10();
        uVar4 = param_4 - param_3;
        if (0x7fffffff < (longlong)uVar4) {
          uVar4 = 0x7fffffff;
        }
        if (uVar4 < unaff_RSI) {
          unaff_RSI = uVar4;
        }
        return (longlong *)(unaff_RSI & 0xffffffff);
      }
      local_res10 = local_res20;
      FUN_1804ea710(local_res20);
      (**(code **)(*plVar2 + 8))(plVar2);
      DAT_180ca0008 = plVar2;
      local_res10 = (longlong *)0x0;
    }
    else {
      plVar2 = plVar1;
    }
  }
  FUN_1804ea5a0(local_res18);
  return plVar2;
}



/* ===== 180068ed0 FUN_180068ed0 ===== */

ulonglong FUN_180068ed0(undefined8 param_1,undefined8 param_2,longlong param_3,longlong param_4,
                       ulonglong param_5)

{
  ulonglong uVar1;
  
  uVar1 = param_4 - param_3;
  if (0x7fffffff < (longlong)uVar1) {
    uVar1 = 0x7fffffff;
  }
  if (uVar1 < param_5) {
    param_5 = uVar1;
  }
  return param_5 & 0xffffffff;
}



/* ===== 180068ef0 FUN_180068ef0 ===== */

undefined8
FUN_180068ef0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  *param_5 = param_3;
  return 3;
}



/* ===== 180068f00 FUN_180068f00 ===== */

undefined8
FUN_180068f00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5,undefined8 param_6,undefined8 param_7,undefined8 *param_8)

{
  *param_5 = param_3;
  *param_8 = param_6;
  return 3;
}



/* ===== 180068f20 FUN_180068f20 ===== */

undefined1 FUN_180068f20(void)

{
  return 1;
}



/* ===== 180068f30 FUN_180068f30 ===== */

void FUN_180068f30(ulonglong *param_1)

{
  code *pcVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  puVar5 = auStack_28;
  uVar4 = *param_1;
  if (uVar4 == 0) {
    return;
  }
  uVar2 = ((longlong)(param_1[2] - uVar4) >> 2) * 4;
  uVar3 = uVar4;
  if (0xfff < uVar2) {
    uVar3 = *(ulonglong *)(uVar4 - 8);
    uVar4 = (uVar4 - uVar3) - 8;
    if (uVar4 < 0x20) {
      uVar2 = uVar2 + 0x27;
      puVar5 = auStack_28;
    }
    else {
      pcVar1 = (code *)swi(0x29);
      uVar2 = (*pcVar1)(5);
      puVar5 = auStack_20;
      uVar3 = uVar4;
    }
  }
  *(undefined8 *)(puVar5 + -8) = 0x180068f85;
  thunk_FUN_1803d64e0(uVar3,uVar2);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* ===== 180068fa0 FUN_180068fa0 ===== */

void FUN_180068fa0(void)

{
  FUN_180068f30();
  return;
}



/* ===== 180068fc0 FUN_180068fc0 ===== */

void FUN_180068fc0(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = thunk_FUN_1804ef6a0();
  if (iVar2 == 0) {
    FUN_18006bf40(*param_1);
  }
  plVar1 = *(longlong **)((longlong)*(int *)(*(longlong *)*param_1 + 4) + 0x48 + *param_1);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}



/* ===== 180069000 FUN_180069000 ===== */

undefined8 * FUN_180069000(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  bool bVar2;
  
  *param_1 = param_2;
  plVar1 = *(longlong **)((longlong)*(int *)(*param_2 + 4) + 0x48 + (longlong)param_2);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (*(int *)((longlong)*(int *)(*param_2 + 4) + 0x10 + (longlong)param_2) == 0) {
    plVar1 = *(longlong **)((longlong)*(int *)(*param_2 + 4) + 0x50 + (longlong)param_2);
    if ((plVar1 == (longlong *)0x0) || (plVar1 == param_2)) {
      bVar2 = true;
    }
    else {
      FUN_18006be00();
      bVar2 = *(int *)((longlong)*(int *)(*param_2 + 4) + 0x10 + (longlong)param_2) == 0;
    }
  }
  else {
    bVar2 = false;
  }
  *(bool *)(param_1 + 1) = bVar2;
  return param_1;
}



/* ===== 1800690a0 FUN_1800690a0 ===== */

void FUN_1800690a0(ulonglong *param_1,undefined1 param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  code *pcVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  ulonglong uVar8;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  
  uVar3 = param_1[2];
  uVar4 = param_1[3];
  if (uVar3 < uVar4) {
    param_1[2] = uVar3 + 1;
    if (0xf < uVar4) {
      param_1 = (ulonglong *)*param_1;
    }
    *(undefined1 *)((longlong)param_1 + uVar3) = param_2;
    *(undefined1 *)((longlong)param_1 + uVar3 + 1) = 0;
    return;
  }
  if (uVar3 == 0x7fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_180011990();
  }
  uVar6 = uVar3 + 1 | 0xf;
  uVar8 = 0x7fffffffffffffff;
  if (((uVar6 < 0x8000000000000000) && (uVar4 <= 0x7fffffffffffffff - (uVar4 >> 1))) &&
     (uVar2 = (uVar4 >> 1) + uVar4, uVar8 = uVar6, uVar6 < uVar2)) {
    uVar8 = uVar2;
  }
  uVar6 = FUN_18000fb70(uVar8 + 1);
  param_1[2] = uVar3 + 1;
  param_1[3] = uVar8;
  if (uVar4 < 0x10) {
    FUN_180540530(uVar6,param_1,uVar3);
    *(undefined1 *)(uVar6 + uVar3) = param_2;
    *(undefined1 *)(uVar6 + 1 + uVar3) = 0;
  }
  else {
    uVar8 = *param_1;
    FUN_180540530(uVar6,uVar8,uVar3);
    puVar7 = auStack_38;
    *(undefined1 *)(uVar6 + uVar3) = param_2;
    *(undefined1 *)(uVar6 + 1 + uVar3) = 0;
    if (0xfff < uVar4 + 1) {
      plVar1 = (longlong *)(uVar8 - 8);
      uVar8 = (uVar8 - *plVar1) - 8;
      if (uVar8 < 0x20) {
        thunk_FUN_1803d64e0(*plVar1,uVar4 + 0x28);
        goto LAB_1800691c7;
      }
      pcVar5 = (code *)swi(0x29);
      (*pcVar5)(5);
      puVar7 = auStack_30;
    }
    *(undefined8 *)(puVar7 + -8) = 0x1800691b3;
    thunk_FUN_1803d64e0(uVar8);
  }
LAB_1800691c7:
  *param_1 = uVar6;
  return;
}



/* ===== 1800691f0 FUN_1800691f0 ===== */

longlong *
FUN_1800691f0(longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar2 = param_3[2];
  uVar3 = param_4[2];
  uVar1 = uVar2 + uVar3;
  if ((param_3[3] - uVar2 < uVar3) || ((ulonglong)param_3[3] < (ulonglong)param_4[3])) {
    if (param_4[3] - uVar3 < uVar2) {
      if (0x7fffffffffffffff - uVar2 < uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_180011990();
      }
      uVar8 = uVar1 | 0xf;
      uVar10 = 0x7fffffffffffffff;
      if ((uVar8 < 0x8000000000000000) && (uVar10 = uVar8, uVar8 < 0x16)) {
        uVar10 = 0x16;
      }
      lVar9 = FUN_18000fb70(uVar10 + 1);
      *param_1 = lVar9;
      param_1[2] = uVar1;
      param_1[3] = uVar10;
      if (0xf < (ulonglong)param_3[3]) {
        param_3 = (undefined8 *)*param_3;
      }
      FUN_180540530(lVar9,param_3,uVar2);
      if (0xf < (ulonglong)param_4[3]) {
        param_4 = (undefined8 *)*param_4;
      }
      FUN_180540530(uVar2 + lVar9,param_4,uVar3 + 1);
    }
    else {
      uVar4 = *(undefined4 *)((longlong)param_4 + 4);
      uVar5 = *(undefined4 *)(param_4 + 1);
      uVar6 = *(undefined4 *)((longlong)param_4 + 0xc);
      *(undefined4 *)param_1 = *(undefined4 *)param_4;
      *(undefined4 *)((longlong)param_1 + 4) = uVar4;
      *(undefined4 *)(param_1 + 1) = uVar5;
      *(undefined4 *)((longlong)param_1 + 0xc) = uVar6;
      uVar4 = *(undefined4 *)((longlong)param_4 + 0x14);
      uVar5 = *(undefined4 *)(param_4 + 3);
      uVar6 = *(undefined4 *)((longlong)param_4 + 0x1c);
      *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_4 + 2);
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar4;
      *(undefined4 *)(param_1 + 3) = uVar5;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar6;
      *(undefined1 *)param_4 = 0;
      param_4[2] = 0;
      param_4[3] = 0xf;
      lVar9 = *param_1;
      FUN_180540530(uVar2 + lVar9,lVar9,uVar3 + 1);
      if (0xf < (ulonglong)param_3[3]) {
        param_3 = (undefined8 *)*param_3;
      }
      FUN_180540530(lVar9,param_3,uVar2);
      param_1[2] = uVar1;
    }
  }
  else {
    uVar4 = *(undefined4 *)((longlong)param_3 + 4);
    uVar5 = *(undefined4 *)(param_3 + 1);
    uVar6 = *(undefined4 *)((longlong)param_3 + 0xc);
    *(undefined4 *)param_1 = *(undefined4 *)param_3;
    *(undefined4 *)((longlong)param_1 + 4) = uVar4;
    *(undefined4 *)(param_1 + 1) = uVar5;
    *(undefined4 *)((longlong)param_1 + 0xc) = uVar6;
    uVar4 = *(undefined4 *)((longlong)param_3 + 0x14);
    uVar5 = *(undefined4 *)(param_3 + 3);
    uVar6 = *(undefined4 *)((longlong)param_3 + 0x1c);
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 2);
    *(undefined4 *)((longlong)param_1 + 0x14) = uVar4;
    *(undefined4 *)(param_1 + 3) = uVar5;
    *(undefined4 *)((longlong)param_1 + 0x1c) = uVar6;
    *(undefined1 *)param_3 = 0;
    param_3[2] = 0;
    param_3[3] = 0xf;
    if ((ulonglong)param_1[3] < 0x10) {
      plVar7 = param_1;
    }
    else {
      plVar7 = (longlong *)*param_1;
    }
    if (0xf < (ulonglong)param_4[3]) {
      param_4 = (undefined8 *)*param_4;
    }
    FUN_180540530(uVar2 + (longlong)plVar7,param_4,uVar3 + 1);
    param_1[2] = uVar1;
  }
  return param_1;
}



/* ===== 180069380 FUN_180069380 ===== */

undefined8 *
FUN_180069380(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             longlong param_5,undefined8 param_6,longlong param_7)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar1 = param_5 + param_7;
  if (uVar1 < 0x10) {
    uVar4 = 0xf;
    puVar3 = param_1;
  }
  else {
    uVar2 = uVar1 | 0xf;
    uVar4 = 0x7fffffffffffffff;
    if ((uVar2 < 0x8000000000000000) && (uVar4 = uVar2, uVar2 < 0x16)) {
      uVar4 = 0x16;
    }
    puVar3 = (undefined8 *)FUN_18000fb70(uVar4 + 1);
    *param_1 = puVar3;
  }
  param_1[2] = uVar1;
  param_1[3] = uVar4;
  FUN_180540530(puVar3,param_4,param_5);
  FUN_180540530((longlong)puVar3 + param_5,param_6,param_7);
  *(undefined1 *)((longlong)puVar3 + uVar1) = 0;
  return param_1;
}



/* ===== 180069440 FUN_180069440 ===== */

longlong * FUN_180069440(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  char *pcVar5;
  longlong *local_60 [2];
  undefined1 local_50 [48];
  
  *param_1 = (longlong)&DAT_1806e1710;
  local_60[0] = param_1 + 0x15;
  *local_60[0] = (longlong)std::ios_base::vftable;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *local_60[0] = (longlong)std::basic_ios<char,std::char_traits<char>_>::vftable;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  *(undefined ***)((longlong)*(int *)(*param_1 + 4) + (longlong)param_1) =
       std::basic_ostream<char,std::char_traits<char>_>::vftable;
  *(int *)((longlong)*(int *)(*param_1 + 4) + -4 + (longlong)param_1) =
       *(int *)(*param_1 + 4) + -0x10;
  FUN_18006ce70((longlong)*(int *)(*param_1 + 4) + (longlong)param_1,param_1 + 1,param_3,param_4,1);
  *(undefined ***)((longlong)*(int *)(*param_1 + 4) + (longlong)param_1) =
       std::basic_ofstream<char,std::char_traits<char>_>::vftable;
  *(int *)((longlong)*(int *)(*param_1 + 4) + -4 + (longlong)param_1) =
       *(int *)(*param_1 + 4) + -0xa8;
  FUN_18006bd70(param_1 + 1);
  lVar2 = FUN_18006bca0(param_1 + 1,param_2,(uint)param_3 | 2);
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
      uVar3 = FUN_18004d7f0(local_60,1);
      FUN_18004e280(local_50,pcVar5,uVar3);
                    /* WARNING: Subroutine does not return */
      FUN_1804ef5f0(local_50,&DAT_180915ec0);
    }
  }
  return param_1;
}



/* ===== 1800695d0 FUN_1800695d0 ===== */

longlong * FUN_1800695d0(longlong *param_1,undefined8 param_2,uint param_3,undefined8 param_4)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  char *pcVar5;
  longlong *local_60 [2];
  undefined1 local_50 [48];
  
  *param_1 = (longlong)&DAT_1806e1718;
  local_60[0] = param_1 + 0x16;
  *local_60[0] = (longlong)std::ios_base::vftable;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *local_60[0] = (longlong)std::basic_ios<char,std::char_traits<char>_>::vftable;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(undefined1 *)(param_1 + 0x21) = 0;
  *(undefined ***)((longlong)*(int *)(*param_1 + 4) + (longlong)param_1) =
       std::basic_istream<char,std::char_traits<char>_>::vftable;
  *(int *)((longlong)*(int *)(*param_1 + 4) + -4 + (longlong)param_1) =
       *(int *)(*param_1 + 4) + -0x18;
  param_1[1] = 0;
  FUN_18006ce70((longlong)*(int *)(*param_1 + 4) + (longlong)param_1,param_1 + 2,0,param_4,1);
  *(undefined ***)((longlong)*(int *)(*param_1 + 4) + (longlong)param_1) =
       std::basic_ifstream<char,std::char_traits<char>_>::vftable;
  *(int *)((longlong)*(int *)(*param_1 + 4) + -4 + (longlong)param_1) =
       *(int *)(*param_1 + 4) + -0xb0;
  FUN_18006bd70(param_1 + 2);
  lVar2 = FUN_18006bca0(param_1 + 2,param_2,param_3 | 1);
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
      uVar3 = FUN_18004d7f0(local_60,1);
      FUN_18004e280(local_50,pcVar5,uVar3);
                    /* WARNING: Subroutine does not return */
      FUN_1804ef5f0(local_50,&DAT_180915ec0);
    }
  }
  return param_1;
}



/* ===== 180069760 FUN_180069760 ===== */

void FUN_180069760(longlong param_1,longlong *param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_2 + 0x18))(param_2);
  if (cVar1 == '\0') {
    *(longlong **)(param_1 + 0x68) = param_2;
    *(undefined8 **)(param_1 + 0x18) = (undefined8 *)(param_1 + 8);
    *(undefined8 **)(param_1 + 0x20) = (undefined8 *)(param_1 + 0x10);
    *(undefined8 **)(param_1 + 0x38) = (undefined8 *)(param_1 + 0x28);
    *(undefined8 **)(param_1 + 0x40) = (undefined8 *)(param_1 + 0x30);
    *(undefined4 **)(param_1 + 0x50) = (undefined4 *)(param_1 + 0x48);
    *(undefined4 **)(param_1 + 0x58) = (undefined4 *)(param_1 + 0x4c);
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x4c) = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x48) = 0;
    return;
  }
  *(undefined8 *)(param_1 + 0x68) = 0;
  return;
}



/* ===== 1800697e0 FUN_1800697e0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool FUN_1800697e0(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  longlong *local_48;
  longlong local_38;
  undefined1 local_30 [32];
  ulonglong local_10;
  
  local_10 = DAT_180919500 ^ (ulonglong)auStack_68;
  if ((param_1[0xd] == 0) || (*(char *)((longlong)param_1 + 0x71) == '\0')) {
    return true;
  }
  iVar1 = (**(code **)(*param_1 + 0x18))(param_1,0xffffffff);
  if (iVar1 != -1) {
    local_48 = &local_38;
    iVar1 = (**(code **)(*(longlong *)param_1[0xd] + 0x40))
                      ((longlong *)param_1[0xd],(longlong)param_1 + 0x74,local_30,&local_10);
    if (iVar1 == 0) {
      *(undefined1 *)((longlong)param_1 + 0x71) = 0;
    }
    else if (iVar1 != 1) {
      if (iVar1 == 3) {
        *(undefined1 *)((longlong)param_1 + 0x71) = 0;
        return true;
      }
      return false;
    }
    lVar3 = local_38 - (longlong)local_30;
    if ((lVar3 == 0) || (lVar2 = FUN_18051142c(local_30,1,lVar3,param_1[0x10]), lVar3 == lVar2)) {
      return *(char *)((longlong)param_1 + 0x71) == '\0';
    }
  }
  return false;
}



/* ===== 1800698d0 FUN_1800698d0 ===== */

void FUN_1800698d0(longlong param_1,longlong param_2,int param_3)

{
  undefined8 local_res8;
  undefined8 local_res10 [2];
  undefined8 local_res20;
  
  *(bool *)(param_1 + 0x7c) = param_3 == 1;
  *(undefined1 *)(param_1 + 0x71) = 0;
  *(undefined8 **)(param_1 + 0x18) = (undefined8 *)(param_1 + 8);
  *(undefined8 **)(param_1 + 0x20) = (undefined8 *)(param_1 + 0x10);
  *(undefined8 **)(param_1 + 0x38) = (undefined8 *)(param_1 + 0x28);
  *(undefined8 **)(param_1 + 0x40) = (undefined8 *)(param_1 + 0x30);
  *(undefined4 **)(param_1 + 0x50) = (undefined4 *)(param_1 + 0x48);
  *(undefined4 **)(param_1 + 0x58) = (undefined4 *)(param_1 + 0x4c);
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (param_2 != 0) {
    local_res8 = 0;
    local_res10[0] = 0;
    local_res20 = 0;
    _get_stream_buffer_pointers(param_2,&local_res8,local_res10,&local_res20);
    *(undefined8 *)(param_1 + 0x18) = local_res8;
    *(undefined8 *)(param_1 + 0x20) = local_res8;
    *(undefined8 *)(param_1 + 0x38) = local_res10[0];
    *(undefined8 *)(param_1 + 0x40) = local_res10[0];
    *(undefined8 *)(param_1 + 0x50) = local_res20;
    *(undefined8 *)(param_1 + 0x58) = local_res20;
  }
  *(longlong *)(param_1 + 0x80) = param_2;
  *(undefined8 *)(param_1 + 0x74) = DAT_180ca0000;
  *(undefined8 *)(param_1 + 0x68) = 0;
  return;
}



/* ===== 1800699a0 FUN_1800699a0 ===== */

longlong FUN_1800699a0(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  
  if (*(longlong *)(param_1 + 0x80) != 0) {
    if (**(longlong **)(param_1 + 0x18) == param_1 + 0x70) {
      lVar4 = *(longlong *)(param_1 + 0x88);
      uVar1 = *(undefined8 *)(param_1 + 0x90);
      **(longlong **)(param_1 + 0x18) = lVar4;
      **(longlong **)(param_1 + 0x38) = lVar4;
      **(int **)(param_1 + 0x50) = (int)uVar1 - (int)lVar4;
    }
    cVar2 = FUN_1800697e0(param_1);
    lVar4 = 0;
    if (cVar2 != '\0') {
      lVar4 = param_1;
    }
    iVar3 = FUN_18051053c(*(undefined8 *)(param_1 + 0x80));
    if (iVar3 == 0) goto LAB_180069a22;
  }
  lVar4 = 0;
LAB_180069a22:
  *(undefined1 *)(param_1 + 0x7c) = 0;
  *(undefined4 **)(param_1 + 0x58) = (undefined4 *)(param_1 + 0x4c);
  *(longlong *)(param_1 + 0x18) = param_1 + 8;
  *(undefined1 *)(param_1 + 0x71) = 0;
  *(longlong *)(param_1 + 0x38) = param_1 + 0x28;
  *(undefined8 **)(param_1 + 0x20) = (undefined8 *)(param_1 + 0x10);
  *(longlong *)(param_1 + 0x50) = param_1 + 0x48;
  *(undefined8 **)(param_1 + 0x40) = (undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  **(undefined8 **)(param_1 + 0x18) = 0;
  **(undefined8 **)(param_1 + 0x38) = 0;
  **(undefined4 **)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x74) = DAT_180ca0000;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  return lVar4;
}



/* ===== 180069aa0 FUN_180069aa0 ===== */

undefined8 * FUN_180069aa0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = std::codecvt<char,char,_Mbstatet>::vftable;
  *param_1 = std::codecvt_base::vftable;
  *param_1 = std::locale::facet::vftable;
  *param_1 = std::_Facet_base::vftable;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1803d64e0(param_1,0x10);
  }
  return param_1;
}



/* ===== 180069af0 FUN_180069af0 ===== */

undefined8 * FUN_180069af0(longlong *param_1,undefined4 *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  
  lVar3 = *param_1;
  if (param_1[1] - lVar3 == -0x20) {
                    /* WARNING: Subroutine does not return */
    FUN_1800118d0();
  }
  uVar1 = (param_1[1] - lVar3 >> 5) + 1;
  uVar12 = param_1[2] - lVar3 >> 5;
  uVar13 = 0x7ffffffffffffff;
  if (uVar12 <= 0x7ffffffffffffff - (uVar12 >> 1)) {
    uVar12 = (uVar12 >> 1) + uVar12;
    uVar13 = uVar1;
    if (uVar1 <= uVar12) {
      uVar13 = uVar12;
    }
    if (0x7ffffffffffffff < uVar13) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  puVar10 = (undefined8 *)FUN_18000fb70(uVar13 << 5);
  puVar14 = (undefined8 *)(((longlong)param_2 - lVar3 & 0xffffffffffffffe0U) + (longlong)puVar10);
  puVar2 = puVar14 + 4;
  plVar15 = param_1;
  uVar12 = uVar13;
  puVar17 = puVar2;
  FUN_180013350(puVar14,*param_3);
  puVar4 = (undefined4 *)param_1[1];
  puVar11 = (undefined4 *)*param_1;
  puVar9 = puVar10;
  if (param_2 == puVar4) {
    for (; puVar16 = puVar14, puVar11 != puVar4; puVar11 = puVar11 + 8) {
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9[2] = 0;
      puVar9[3] = 0;
      uVar5 = puVar11[1];
      uVar6 = puVar11[2];
      uVar7 = puVar11[3];
      *(undefined4 *)puVar9 = *puVar11;
      *(undefined4 *)((longlong)puVar9 + 4) = uVar5;
      *(undefined4 *)(puVar9 + 1) = uVar6;
      *(undefined4 *)((longlong)puVar9 + 0xc) = uVar7;
      uVar8 = *(undefined8 *)(puVar11 + 6);
      puVar9[2] = *(undefined8 *)(puVar11 + 4);
      puVar9[3] = uVar8;
      *(undefined8 *)(puVar11 + 4) = 0;
      *(undefined8 *)(puVar11 + 6) = 0xf;
      *(undefined1 *)puVar11 = 0;
      puVar9 = puVar9 + 4;
    }
  }
  else {
    for (; puVar11 != param_2; puVar11 = puVar11 + 8) {
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9[2] = 0;
      puVar9[3] = 0;
      uVar5 = puVar11[1];
      uVar6 = puVar11[2];
      uVar7 = puVar11[3];
      *(undefined4 *)puVar9 = *puVar11;
      *(undefined4 *)((longlong)puVar9 + 4) = uVar5;
      *(undefined4 *)(puVar9 + 1) = uVar6;
      *(undefined4 *)((longlong)puVar9 + 0xc) = uVar7;
      uVar8 = *(undefined8 *)(puVar11 + 6);
      puVar9[2] = *(undefined8 *)(puVar11 + 4);
      puVar9[3] = uVar8;
      *(undefined8 *)(puVar11 + 4) = 0;
      *(undefined8 *)(puVar11 + 6) = 0xf;
      *(undefined1 *)puVar11 = 0;
      puVar9 = puVar9 + 4;
    }
    puVar4 = (undefined4 *)param_1[1];
    for (; puVar16 = puVar10, param_2 != puVar4; param_2 = param_2 + 8) {
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      uVar5 = param_2[1];
      uVar6 = param_2[2];
      uVar7 = param_2[3];
      *(undefined4 *)puVar2 = *param_2;
      *(undefined4 *)((longlong)puVar2 + 4) = uVar5;
      *(undefined4 *)(puVar2 + 1) = uVar6;
      *(undefined4 *)((longlong)puVar2 + 0xc) = uVar7;
      uVar8 = *(undefined8 *)(param_2 + 6);
      puVar2[2] = *(undefined8 *)(param_2 + 4);
      puVar2[3] = uVar8;
      *(undefined8 *)(param_2 + 4) = 0;
      *(undefined8 *)(param_2 + 6) = 0xf;
      *(undefined1 *)param_2 = 0;
      puVar2 = puVar2 + 4;
    }
  }
  FUN_18002b950(param_1,puVar10,uVar1,uVar13,plVar15,0,uVar12,puVar16,puVar17);
  return puVar14;
}



/* ===== 180069cd0 FUN_180069cd0 ===== */

longlong FUN_180069cd0(undefined8 param_1,ulonglong param_2,undefined8 param_3,undefined4 *param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  code *pcVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [24];
  undefined8 *local_68;
  longlong local_60;
  ulonglong local_58;
  longlong local_50;
  longlong local_48;
  
  uVar7 = DAT_180ccf9e0;
  lVar4 = ((longlong)(DAT_180ccf9e8 - DAT_180ccf9e0) >> 3) * -0x3333333333333333;
  uVar8 = 0x666666666666666;
  if (lVar4 == 0x666666666666666) {
                    /* WARNING: Subroutine does not return */
    FUN_1800118d0();
  }
  uVar1 = lVar4 + 1;
  uVar6 = ((longlong)(DAT_180ccf9f0 - DAT_180ccf9e0) >> 3) * -0x3333333333333333;
  if (uVar6 <= 0x666666666666666 - (uVar6 >> 1)) {
    uVar6 = (uVar6 >> 1) + uVar6;
    uVar8 = uVar1;
    if (uVar1 <= uVar6) {
      uVar8 = uVar6;
    }
    if (0x666666666666666 < uVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  lVar5 = FUN_18000fb70(uVar8 * 0x28);
  lVar2 = lVar5 + ((longlong)(param_2 - uVar7) / 0x28) * 0x28;
  lVar4 = lVar2 + 0x28;
  local_68 = &DAT_180ccf9e0;
  local_60 = lVar5;
  local_58 = uVar8;
  local_50 = lVar4;
  local_48 = lVar4;
  FUN_180024b50(lVar2,param_3);
  *(undefined4 *)(lVar2 + 0x20) = *param_4;
  local_50 = lVar2;
  if (param_2 == DAT_180ccf9e8) {
    lVar4 = lVar5;
    param_2 = DAT_180ccf9e0;
  }
  else {
    FUN_18006c100(DAT_180ccf9e0,param_2,lVar5,&DAT_180ccf9e0);
    local_50 = lVar5;
  }
  FUN_18006c100(param_2,DAT_180ccf9e8,lVar4,&DAT_180ccf9e0);
  uVar6 = DAT_180ccf9e8;
  puVar9 = auStack_88;
  puVar10 = auStack_88;
  local_60 = 0;
  uVar7 = DAT_180ccf9e0;
  if (DAT_180ccf9e0 == 0) goto LAB_180069ee9;
  for (; uVar7 != uVar6; uVar7 = uVar7 + 0x28) {
    FUN_18000f890(uVar7);
  }
  uVar7 = DAT_180ccf9e0;
  if ((ulonglong)(((longlong)(DAT_180ccf9f0 - DAT_180ccf9e0) >> 3) * 8) < 0x1000) {
LAB_180069ee1:
    puVar10 = puVar9;
  }
  else {
    uVar7 = *(ulonglong *)(DAT_180ccf9e0 - 8);
    uVar6 = (DAT_180ccf9e0 - uVar7) - 8;
    if (0x1f < uVar6) {
      pcVar3 = (code *)swi(0x29);
      (*pcVar3)(5);
      puVar9 = auStack_80;
      uVar7 = uVar6;
      goto LAB_180069ee1;
    }
  }
  *(undefined8 *)(puVar10 + -8) = 0x180069ee9;
  thunk_FUN_1803d64e0(uVar7);
LAB_180069ee9:
  DAT_180ccf9e0 = lVar5;
  DAT_180ccf9e8 = lVar5 + uVar1 * 0x28;
  DAT_180ccf9f0 = uVar8 * 0x28 + lVar5;
  return lVar2;
}



/* ===== 180069f40 FUN_180069f40 ===== */

longlong FUN_180069f40(undefined8 param_1,ulonglong param_2,undefined8 param_3)

{
  ulonglong uVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_d8 [8];
  undefined1 auStack_d0 [24];
  longlong local_b8;
  longlong local_b0;
  undefined8 *local_a8;
  longlong local_a0;
  longlong local_98;
  undefined8 *local_90;
  longlong local_88;
  longlong local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  longlong local_68;
  ulonglong local_60;
  longlong local_58;
  longlong local_50;
  
  uVar8 = DAT_180ccf9f8;
  lVar3 = ((longlong)(DAT_180ccfa00 - DAT_180ccf9f8) >> 5) * 0x6db6db6db6db6db7;
  uVar9 = 0x124924924924924;
  if (lVar3 == 0x124924924924924) {
                    /* WARNING: Subroutine does not return */
    FUN_1800118d0();
  }
  uVar1 = lVar3 + 1;
  uVar5 = ((longlong)(DAT_180ccfa08 - DAT_180ccf9f8) >> 5) * 0x6db6db6db6db6db7;
  if (uVar5 <= 0x124924924924924 - (uVar5 >> 1)) {
    uVar5 = (uVar5 >> 1) + uVar5;
    uVar9 = uVar1;
    if (uVar1 <= uVar5) {
      uVar9 = uVar5;
    }
    if (0x124924924924924 < uVar9) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  lVar4 = FUN_18000fb70(uVar9 * 0xe0);
  lVar11 = ((longlong)(param_2 - uVar8) / 0xe0) * 0xe0 + lVar4;
  lVar3 = lVar11 + 0xe0;
  local_70 = &DAT_180ccf9f8;
  local_68 = lVar4;
  local_60 = uVar9;
  local_58 = lVar3;
  local_50 = lVar3;
  FUN_18006c190(-((longlong)(param_2 - uVar8) >> 0x3f),lVar11,param_3);
  uVar8 = DAT_180ccfa00;
  puVar6 = auStack_d8;
  puVar7 = auStack_d8;
  local_58 = lVar11;
  if (param_2 == DAT_180ccfa00) {
    local_a8 = &DAT_180ccf9f8;
    lVar3 = lVar4;
    local_b8 = lVar4;
    for (uVar5 = DAT_180ccf9f8; local_b0 = lVar3, uVar5 != uVar8; uVar5 = uVar5 + 0xe0) {
      FUN_18006d8a0(lVar3,uVar5);
      lVar3 = lVar3 + 0xe0;
    }
    local_b8 = lVar3;
  }
  else {
    local_90 = &DAT_180ccf9f8;
    lVar10 = lVar4;
    local_a0 = lVar4;
    uVar8 = DAT_180ccf9f8;
    uVar5 = DAT_180ccfa00;
    while( true ) {
      DAT_180ccfa00 = uVar5;
      local_98 = lVar10;
      if (uVar8 == param_2) break;
      FUN_18006d8a0(lVar10,uVar8);
      lVar10 = lVar10 + 0xe0;
      uVar8 = uVar8 + 0xe0;
      uVar5 = DAT_180ccfa00;
    }
    local_78 = &DAT_180ccf9f8;
    local_88 = lVar3;
    local_58 = lVar4;
    local_a0 = lVar10;
    for (; local_80 = lVar3, param_2 != uVar5; param_2 = param_2 + 0xe0) {
      FUN_18006d8a0(lVar3,param_2);
      lVar3 = lVar3 + 0xe0;
    }
    local_88 = lVar3;
  }
  uVar5 = DAT_180ccfa00;
  local_68 = 0;
  uVar8 = DAT_180ccf9f8;
  if (DAT_180ccf9f8 == 0) goto LAB_18006a1dd;
  for (; uVar8 != uVar5; uVar8 = uVar8 + 0xe0) {
    FUN_1800589f0(uVar8);
  }
  uVar8 = DAT_180ccf9f8;
  if ((ulonglong)(((longlong)(DAT_180ccfa08 - DAT_180ccf9f8) >> 5) * 0x20) < 0x1000) {
LAB_18006a1d5:
    puVar7 = puVar6;
  }
  else {
    uVar8 = *(ulonglong *)(DAT_180ccf9f8 - 8);
    uVar5 = (DAT_180ccf9f8 - uVar8) - 8;
    if (0x1f < uVar5) {
      pcVar2 = (code *)swi(0x29);
      (*pcVar2)(5);
      puVar6 = auStack_d0;
      uVar8 = uVar5;
      goto LAB_18006a1d5;
    }
  }
  *(undefined8 *)(puVar7 + -8) = 0x18006a1dd;
  thunk_FUN_1803d64e0(uVar8);
LAB_18006a1dd:
  DAT_180ccf9f8 = lVar4;
  DAT_180ccfa00 = uVar1 * 0xe0 + lVar4;
  DAT_180ccfa08 = uVar9 * 0xe0 + lVar4;
  return lVar11;
}



/* ===== 18006a230 FUN_18006a230 ===== */

undefined4 * FUN_18006a230(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  ulonglong uVar1;
  undefined4 *puVar2;
  longlong lVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  undefined4 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  ulonglong uVar14;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [24];
  longlong *local_78;
  undefined4 *local_70;
  ulonglong local_68;
  undefined4 *local_60;
  undefined4 *local_58;
  
  lVar3 = *param_1;
  lVar8 = (param_1[1] - lVar3 >> 3) * -0x5555555555555555;
  uVar14 = 0xaaaaaaaaaaaaaaa;
  if (lVar8 == 0xaaaaaaaaaaaaaaa) {
                    /* WARNING: Subroutine does not return */
    FUN_18000fb10();
  }
  uVar1 = lVar8 + 1;
  uVar10 = (param_1[2] - lVar3 >> 3) * -0x5555555555555555;
  if (uVar10 <= 0xaaaaaaaaaaaaaaa - (uVar10 >> 1)) {
    uVar10 = (uVar10 >> 1) + uVar10;
    uVar14 = uVar1;
    if (uVar1 <= uVar10) {
      uVar14 = uVar10;
    }
    if (0xaaaaaaaaaaaaaaa < uVar14) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  puVar9 = (undefined4 *)FUN_18000fb70(uVar14 * 0x18);
  puVar2 = puVar9 + ((param_2 - lVar3) / 0x18) * 6;
  puVar11 = puVar2 + 6;
  uVar5 = param_3[1];
  uVar6 = param_3[2];
  uVar7 = param_3[3];
  *puVar2 = *param_3;
  puVar2[1] = uVar5;
  puVar2[2] = uVar6;
  puVar2[3] = uVar7;
  *(undefined8 *)(puVar2 + 4) = *(undefined8 *)(param_3 + 4);
  lVar3 = *param_1;
  local_78 = param_1;
  local_68 = uVar14;
  local_60 = puVar2;
  local_58 = puVar11;
  if (param_2 == param_1[1]) {
    lVar8 = param_1[1] - lVar3;
    puVar11 = puVar9;
    param_2 = lVar3;
    local_70 = puVar9;
  }
  else {
    local_70 = puVar9;
    FUN_180540530(puVar9,lVar3,param_2 - lVar3);
    lVar8 = param_1[1] - param_2;
    local_60 = puVar9;
  }
  puVar12 = auStack_98;
  puVar13 = auStack_98;
  FUN_180540530(puVar11,param_2,lVar8);
  local_70 = (undefined4 *)0x0;
  lVar3 = *param_1;
  if (lVar3 == 0) goto LAB_18006a3d2;
  lVar8 = lVar3;
  if ((ulonglong)((param_1[2] - lVar3 >> 3) * 8) < 0x1000) {
LAB_18006a3c7:
    puVar13 = puVar12;
  }
  else {
    lVar8 = *(longlong *)(lVar3 + -8);
    if (0x1f < (lVar3 - lVar8) - 8U) {
      lVar8 = 5;
      pcVar4 = (code *)swi(0x29);
      (*pcVar4)(5);
      puVar12 = auStack_90;
      goto LAB_18006a3c7;
    }
  }
  *(undefined8 *)(puVar13 + -8) = 0x18006a3d2;
  thunk_FUN_1803d64e0(lVar8);
LAB_18006a3d2:
  *param_1 = (longlong)puVar9;
  param_1[1] = (longlong)(puVar9 + uVar1 * 6);
  param_1[2] = (longlong)(puVar9 + uVar14 * 6);
  return puVar2;
}



/* ===== 18006a410 FUN_18006a410 ===== */

undefined4 * FUN_18006a410(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  ulonglong uVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  
  lVar3 = *param_1;
  if (param_1[1] - lVar3 == -4) {
                    /* WARNING: Subroutine does not return */
    FUN_1800118d0();
  }
  uVar1 = (param_1[1] - lVar3 >> 2) + 1;
  uVar5 = param_1[2] - lVar3 >> 2;
  uVar7 = 0x3fffffffffffffff;
  if (uVar5 <= 0x3fffffffffffffff - (uVar5 >> 1)) {
    uVar5 = (uVar5 >> 1) + uVar5;
    uVar7 = uVar1;
    if (uVar1 <= uVar5) {
      uVar7 = uVar5;
    }
    if (0x3fffffffffffffff < uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  puVar4 = (undefined4 *)FUN_18000fb70(uVar7 * 4);
  puVar2 = (undefined4 *)((param_2 - lVar3 & 0xfffffffffffffffcU) + (longlong)puVar4);
  puVar6 = puVar2 + 1;
  *puVar2 = *param_3;
  lVar3 = *param_1;
  plVar9 = param_1;
  uVar5 = uVar7;
  puVar11 = puVar6;
  if (param_2 == param_1[1]) {
    lVar8 = param_1[1] - lVar3;
    puVar6 = puVar4;
    param_2 = lVar3;
    puVar10 = puVar2;
  }
  else {
    FUN_180540530(puVar4,lVar3,param_2 - lVar3);
    lVar8 = param_1[1] - param_2;
    puVar10 = puVar4;
  }
  FUN_180540530(puVar6,param_2,lVar8);
  FUN_18006b9f0(param_1,puVar4,uVar1,uVar7,plVar9,0,uVar5,puVar10,puVar11);
  return puVar2;
}



/* ===== 18006a540 FUN_18006a540 ===== */

undefined8 * FUN_18006a540(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [24];
  undefined8 *local_68;
  longlong *local_60;
  undefined8 *local_58;
  ulonglong local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  
  lVar10 = *param_1;
  if (param_1[1] - lVar10 == -0x40) {
                    /* WARNING: Subroutine does not return */
    FUN_1800118d0();
  }
  uVar14 = (param_1[1] - lVar10 >> 6) + 1;
  uVar7 = param_1[2] - lVar10 >> 6;
  uVar9 = 0x3ffffffffffffff;
  if (uVar7 <= 0x3ffffffffffffff - (uVar7 >> 1)) {
    uVar7 = (uVar7 >> 1) + uVar7;
    uVar9 = uVar14;
    if (uVar14 <= uVar7) {
      uVar9 = uVar7;
    }
    if (0x3ffffffffffffff < uVar9) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  puVar6 = (undefined8 *)FUN_18000fb70(uVar9 << 6);
  puVar17 = (undefined8 *)((param_2 - lVar10 & 0xffffffffffffffc0U) + (longlong)puVar6);
  puVar15 = puVar17 + 8;
  *puVar17 = 0;
  puVar17[1] = 0;
  uVar16 = 0;
  puVar17[2] = 0;
  puVar17[3] = 0;
  uVar5 = param_3[1];
  *puVar17 = *param_3;
  puVar17[1] = uVar5;
  uVar5 = param_3[3];
  puVar17[2] = param_3[2];
  puVar17[3] = uVar5;
  param_3[2] = 0;
  param_3[3] = 0xf;
  *(undefined1 *)param_3 = 0;
  puVar17[4] = 0;
  puVar17[5] = 0;
  puVar17[6] = 0;
  puVar17[7] = 0;
  uVar2 = *(undefined4 *)((longlong)param_3 + 0x24);
  uVar3 = *(undefined4 *)(param_3 + 5);
  uVar4 = *(undefined4 *)((longlong)param_3 + 0x2c);
  *(undefined4 *)(puVar17 + 4) = *(undefined4 *)(param_3 + 4);
  *(undefined4 *)((longlong)puVar17 + 0x24) = uVar2;
  *(undefined4 *)(puVar17 + 5) = uVar3;
  *(undefined4 *)((longlong)puVar17 + 0x2c) = uVar4;
  uVar2 = *(undefined4 *)((longlong)param_3 + 0x34);
  uVar3 = *(undefined4 *)(param_3 + 7);
  uVar4 = *(undefined4 *)((longlong)param_3 + 0x3c);
  *(undefined4 *)(puVar17 + 6) = *(undefined4 *)(param_3 + 6);
  *(undefined4 *)((longlong)puVar17 + 0x34) = uVar2;
  *(undefined4 *)(puVar17 + 7) = uVar3;
  *(undefined4 *)((longlong)puVar17 + 0x3c) = uVar4;
  param_3[6] = 0;
  param_3[7] = 0xf;
  *(undefined1 *)(param_3 + 4) = 0;
  lVar10 = param_1[1];
  local_68 = puVar17;
  local_60 = param_1;
  local_58 = puVar6;
  local_50 = uVar9;
  local_48 = puVar17;
  local_40 = puVar15;
  if (param_2 == lVar10) {
    param_2 = *param_1;
    puVar15 = puVar6;
  }
  else {
    FUN_18006c260(*param_1,param_2,puVar6,param_1);
    lVar10 = param_1[1];
    local_48 = puVar6;
  }
  FUN_18006c260(param_2,lVar10,puVar15,param_1);
  puVar11 = auStack_88;
  puVar12 = auStack_88;
  lVar10 = *param_1;
  puVar13 = auStack_88;
  if (lVar10 == 0) goto LAB_18006a731;
  lVar8 = param_1[1];
  local_58 = (undefined8 *)uVar16;
  for (; lVar10 != lVar8; lVar10 = lVar10 + 0x40) {
    FUN_18000f890(lVar10 + 0x20);
    FUN_18000f890(lVar10);
  }
  lVar10 = *param_1;
  if ((param_1[2] - lVar10 & 0xffffffffffffffc0U) < 0x1000) {
LAB_18006a729:
    lVar8 = lVar10;
    puVar12 = puVar11;
  }
  else {
    lVar8 = *(longlong *)(lVar10 + -8);
    if (0x1f < (lVar10 - lVar8) - 8U) {
      pcVar1 = (code *)swi(0x29);
      lVar10 = (*pcVar1)(5);
      puVar11 = auStack_80;
      goto LAB_18006a729;
    }
  }
  *(undefined8 *)(puVar12 + -8) = 0x18006a731;
  thunk_FUN_1803d64e0(lVar8);
  puVar13 = puVar12;
LAB_18006a731:
  *param_1 = (longlong)puVar6;
  param_1[1] = (longlong)(puVar6 + uVar14 * 8);
  param_1[2] = *(longlong *)(puVar13 + 0x98) + (longlong)puVar6;
  return puVar17;
}



/* ===== 18006a780 FUN_18006a780 ===== */

undefined4 * FUN_18006a780(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  ulonglong uVar1;
  undefined4 *puVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined4 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined4 *puVar15;
  undefined8 uVar16;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [24];
  longlong *local_68;
  undefined4 *local_60;
  ulonglong local_58;
  undefined4 *local_50;
  undefined4 *local_48;
  
  lVar11 = *param_1;
  lVar7 = (param_1[1] - lVar11 >> 3) * -0x3333333333333333;
  uVar10 = 0x666666666666666;
  if (lVar7 == 0x666666666666666) {
                    /* WARNING: Subroutine does not return */
    FUN_1800118d0();
  }
  uVar1 = lVar7 + 1;
  uVar9 = (param_1[2] - lVar11 >> 3) * -0x3333333333333333;
  if (uVar9 <= 0x666666666666666 - (uVar9 >> 1)) {
    uVar9 = (uVar9 >> 1) + uVar9;
    uVar10 = uVar1;
    if (uVar1 <= uVar9) {
      uVar10 = uVar9;
    }
    if (0x666666666666666 < uVar10) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  puVar8 = (undefined4 *)FUN_18000fb70(uVar10 * 0x28);
  puVar2 = puVar8 + ((param_2 - lVar11) / 0x28) * 10;
  puVar15 = puVar2 + 10;
  *puVar2 = *param_3;
  puVar2[1] = param_3[1];
  *(undefined8 *)(puVar2 + 2) = 0;
  *(undefined8 *)(puVar2 + 4) = 0;
  uVar16 = 0;
  *(undefined8 *)(puVar2 + 6) = 0;
  *(undefined8 *)(puVar2 + 8) = 0;
  uVar4 = param_3[3];
  uVar5 = param_3[4];
  uVar6 = param_3[5];
  puVar2[2] = param_3[2];
  puVar2[3] = uVar4;
  puVar2[4] = uVar5;
  puVar2[5] = uVar6;
  uVar4 = param_3[7];
  uVar5 = param_3[8];
  uVar6 = param_3[9];
  puVar2[6] = param_3[6];
  puVar2[7] = uVar4;
  puVar2[8] = uVar5;
  puVar2[9] = uVar6;
  *(undefined8 *)(param_3 + 6) = 0;
  *(undefined8 *)(param_3 + 8) = 0xf;
  *(undefined1 *)(param_3 + 2) = 0;
  lVar11 = param_1[1];
  local_68 = param_1;
  local_60 = puVar8;
  local_58 = uVar10;
  local_50 = puVar2;
  local_48 = puVar15;
  if (param_2 == lVar11) {
    param_2 = *param_1;
    puVar15 = puVar8;
  }
  else {
    FUN_18006c320(*param_1,param_2,puVar8,param_1);
    lVar11 = param_1[1];
    local_50 = puVar8;
  }
  FUN_18006c320(param_2,lVar11,puVar15,param_1);
  puVar12 = auStack_88;
  puVar13 = auStack_88;
  lVar11 = *param_1;
  puVar14 = auStack_88;
  if (lVar11 == 0) goto LAB_18006a997;
  lVar7 = param_1[1];
  local_60 = (undefined4 *)uVar16;
  for (; lVar11 != lVar7; lVar11 = lVar11 + 0x28) {
    FUN_18000f890(lVar11 + 8);
  }
  lVar11 = *param_1;
  lVar7 = lVar11;
  if ((ulonglong)((param_1[2] - lVar11 >> 3) * 8) < 0x1000) {
LAB_18006a98c:
    puVar13 = puVar12;
  }
  else {
    lVar7 = *(longlong *)(lVar11 + -8);
    if (0x1f < (lVar11 - lVar7) - 8U) {
      lVar7 = 5;
      pcVar3 = (code *)swi(0x29);
      (*pcVar3)(5);
      puVar12 = auStack_80;
      goto LAB_18006a98c;
    }
  }
  *(undefined8 *)(puVar13 + -8) = 0x18006a997;
  thunk_FUN_1803d64e0(lVar7);
  puVar14 = puVar13;
LAB_18006a997:
  *param_1 = (longlong)puVar8;
  param_1[1] = (longlong)(puVar8 + uVar1 * 10);
  param_1[2] = *(longlong *)(puVar14 + 0x98) + (longlong)puVar8;
  return puVar2;
}



/* ===== 18006a9e0 FUN_18006a9e0 ===== */

undefined8 * FUN_18006a9e0(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  ulonglong uVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [24];
  longlong *local_68;
  undefined8 *local_60;
  ulonglong local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  
  lVar10 = *param_1;
  lVar6 = (param_1[1] - lVar10 >> 3) * 0x6db6db6db6db6db7;
  uVar9 = 0x492492492492492;
  if (lVar6 == 0x492492492492492) {
                    /* WARNING: Subroutine does not return */
    FUN_1800118d0();
  }
  uVar1 = lVar6 + 1;
  uVar8 = (param_1[2] - lVar10 >> 3) * 0x6db6db6db6db6db7;
  if (uVar8 <= 0x492492492492492 - (uVar8 >> 1)) {
    uVar8 = (uVar8 >> 1) + uVar8;
    uVar9 = uVar1;
    if (uVar1 <= uVar8) {
      uVar9 = uVar8;
    }
    if (0x492492492492492 < uVar9) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  puVar7 = (undefined8 *)FUN_18000fb70(uVar9 * 0x38);
  puVar16 = puVar7 + ((param_2 - lVar10) / 0x38) * 7;
  puVar14 = puVar16 + 7;
  *puVar16 = 0;
  puVar16[1] = 0;
  uVar15 = 0;
  puVar16[2] = 0;
  puVar16[3] = 0;
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  *(undefined4 *)puVar16 = *param_3;
  *(undefined4 *)((longlong)puVar16 + 4) = uVar3;
  *(undefined4 *)(puVar16 + 1) = uVar4;
  *(undefined4 *)((longlong)puVar16 + 0xc) = uVar5;
  uVar3 = param_3[5];
  uVar4 = param_3[6];
  uVar5 = param_3[7];
  *(undefined4 *)(puVar16 + 2) = param_3[4];
  *(undefined4 *)((longlong)puVar16 + 0x14) = uVar3;
  *(undefined4 *)(puVar16 + 3) = uVar4;
  *(undefined4 *)((longlong)puVar16 + 0x1c) = uVar5;
  *(undefined8 *)(param_3 + 4) = 0;
  *(undefined8 *)(param_3 + 6) = 0xf;
  *(undefined1 *)param_3 = 0;
  *(undefined1 *)(puVar16 + 4) = *(undefined1 *)(param_3 + 8);
  *(undefined1 *)((longlong)puVar16 + 0x21) = *(undefined1 *)((longlong)param_3 + 0x21);
  *(undefined1 *)((longlong)puVar16 + 0x22) = *(undefined1 *)((longlong)param_3 + 0x22);
  *(undefined1 *)((longlong)puVar16 + 0x23) = *(undefined1 *)((longlong)param_3 + 0x23);
  puVar16[5] = *(undefined8 *)(param_3 + 10);
  *(undefined4 *)(puVar16 + 6) = param_3[0xc];
  *(undefined4 *)((longlong)puVar16 + 0x34) = param_3[0xd];
  lVar10 = param_1[1];
  local_68 = param_1;
  local_60 = puVar7;
  local_58 = uVar9;
  local_50 = puVar16;
  local_48 = puVar14;
  if (param_2 == lVar10) {
    param_2 = *param_1;
    puVar14 = puVar7;
  }
  else {
    FUN_18006c3c0(*param_1,param_2,puVar7,param_1);
    lVar10 = param_1[1];
    local_50 = puVar7;
  }
  FUN_18006c3c0(param_2,lVar10,puVar14,param_1);
  puVar11 = auStack_88;
  puVar12 = auStack_88;
  lVar10 = *param_1;
  puVar13 = auStack_88;
  if (lVar10 == 0) goto LAB_18006ac14;
  lVar6 = param_1[1];
  local_60 = (undefined8 *)uVar15;
  for (; lVar10 != lVar6; lVar10 = lVar10 + 0x38) {
    FUN_18000f890(lVar10);
  }
  lVar10 = *param_1;
  lVar6 = lVar10;
  if ((ulonglong)((param_1[2] - lVar10 >> 3) * 8) < 0x1000) {
LAB_18006ac09:
    puVar12 = puVar11;
  }
  else {
    lVar6 = *(longlong *)(lVar10 + -8);
    if (0x1f < (lVar10 - lVar6) - 8U) {
      lVar6 = 5;
      pcVar2 = (code *)swi(0x29);
      (*pcVar2)(5);
      puVar11 = auStack_80;
      goto LAB_18006ac09;
    }
  }
  *(undefined8 *)(puVar12 + -8) = 0x18006ac14;
  thunk_FUN_1803d64e0(lVar6);
  puVar13 = puVar12;
LAB_18006ac14:
  *param_1 = (longlong)puVar7;
  param_1[1] = (longlong)(puVar7 + uVar1 * 7);
  param_1[2] = *(longlong *)(puVar13 + 0x98) + (longlong)puVar7;
  return puVar16;
}



/* ===== 18006ac60 FUN_18006ac60 ===== */

undefined4 * FUN_18006ac60(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined4 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [24];
  longlong *local_78;
  undefined4 *local_70;
  ulonglong local_68;
  undefined4 *local_60;
  undefined4 *local_58;
  
  lVar7 = *param_1;
  if (param_1[1] - lVar7 == -0x10) {
                    /* WARNING: Subroutine does not return */
    FUN_1800118d0();
  }
  uVar13 = (param_1[1] - lVar7 >> 4) + 1;
  uVar8 = param_1[2] - lVar7 >> 4;
  uVar12 = 0xfffffffffffffff;
  if (uVar8 <= 0xfffffffffffffff - (uVar8 >> 1)) {
    uVar8 = (uVar8 >> 1) + uVar8;
    uVar12 = uVar13;
    if (uVar13 <= uVar8) {
      uVar12 = uVar8;
    }
    if (0xfffffffffffffff < uVar12) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  puVar6 = (undefined4 *)FUN_18000fb70(uVar12 * 0x10);
  puVar1 = (undefined4 *)((param_2 - lVar7 & 0xfffffffffffffff0U) + (longlong)puVar6);
  puVar9 = puVar1 + 4;
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  *puVar1 = *param_3;
  puVar1[1] = uVar3;
  puVar1[2] = uVar4;
  puVar1[3] = uVar5;
  lVar7 = *param_1;
  local_78 = param_1;
  local_68 = uVar12;
  local_60 = puVar1;
  local_58 = puVar9;
  if (param_2 == param_1[1]) {
    lVar14 = param_1[1] - lVar7;
    puVar9 = puVar6;
    param_2 = lVar7;
    local_70 = puVar6;
  }
  else {
    local_70 = puVar6;
    FUN_180540530(puVar6,lVar7,param_2 - lVar7);
    lVar14 = param_1[1] - param_2;
    local_60 = puVar6;
  }
  puVar10 = auStack_98;
  puVar11 = auStack_98;
  FUN_180540530(puVar9,param_2,lVar14);
  local_70 = (undefined4 *)0x0;
  lVar7 = *param_1;
  if (lVar7 == 0) goto LAB_18006ada8;
  if ((param_1[2] - lVar7 & 0xfffffffffffffff0U) < 0x1000) {
LAB_18006ada0:
    lVar14 = lVar7;
    puVar11 = puVar10;
  }
  else {
    lVar14 = *(longlong *)(lVar7 + -8);
    if (0x1f < (lVar7 - lVar14) - 8U) {
      pcVar2 = (code *)swi(0x29);
      lVar7 = (*pcVar2)(5);
      puVar10 = auStack_90;
      goto LAB_18006ada0;
    }
  }
  *(undefined8 *)(puVar11 + -8) = 0x18006ada8;
  thunk_FUN_1803d64e0(lVar14);
LAB_18006ada8:
  *param_1 = (longlong)puVar6;
  param_1[1] = (longlong)(puVar6 + uVar13 * 4);
  param_1[2] = (longlong)(puVar6 + uVar12 * 4);
  return puVar1;
}



