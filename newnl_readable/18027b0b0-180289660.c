/* ===== 18027b0b0 FUN_18027b0b0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18027b0b0(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  char *pcVar3;
  void *pvVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined8 ****ppppuVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined8 ****ppppuVar14;
  undefined1 *puVar15;
  undefined8 ****ppppuVar16;
  void *pvVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  longlong lVar20;
  void *_Buf1;
  undefined8 extraout_XMM0_Qa;
  undefined1 auStack_298 [8];
  undefined1 auStack_290 [24];
  void *local_278;
  longlong local_270;
  undefined8 *local_268;
  undefined8 *puStack_260;
  undefined8 *local_258;
  char *local_250;
  longlong local_248;
  undefined8 *local_238;
  void *local_230;
  longlong local_228;
  void *local_220;
  longlong local_218;
  void *local_210;
  longlong local_208;
  void *local_200;
  longlong local_1f8;
  undefined1 local_1f0 [16];
  undefined1 local_1e0 [16];
  undefined1 local_1d0 [16];
  undefined1 local_1c0 [16];
  undefined1 local_1b0 [16];
  undefined1 local_1a0 [16];
  undefined1 local_190 [16];
  undefined1 local_180 [16];
  undefined8 ****local_170;
  undefined8 uStack_168;
  ulonglong local_160;
  ulonglong uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  longlong local_120;
  undefined8 local_118;
  undefined8 ****local_110;
  undefined8 uStack_108;
  ulonglong local_100;
  ulonglong uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 local_d0 [32];
  undefined1 local_b0 [32];
  undefined1 local_90 [32];
  ulonglong local_70;
  
  local_70 = DAT_180919500 ^ (ulonglong)auStack_298;
  local_238 = param_1;
  FUN_1802792a0(*param_1,&local_278);
  puVar15 = auStack_298;
  if (local_270 != 0) {
    lVar20 = local_270;
    _Buf1 = local_278;
    do {
      if (lVar20 == 1) {
        iVar6 = memcmp(_Buf1,&DAT_1806e0010,1);
        puVar15 = auStack_298;
        if (iVar6 == 0) break;
      }
      puVar8 = (undefined8 *)FUN_1802792a0(*param_1,local_1f0);
      if ((puVar8[1] == 1) && (iVar6 = memcmp((void *)*puVar8,&DAT_1806dfff8,1), iVar6 == 0)) {
        uStack_128 = 0;
        local_120 = 0;
        local_118 = 0xf;
        local_130 = 0;
        local_268 = (undefined8 *)0x0;
        puStack_260 = (undefined8 *)0x0;
        local_258 = (undefined8 *)0x0;
        FUN_1802792a0(*param_1,&local_278);
        if (local_270 != 0) {
          lVar10 = local_270;
          pvVar17 = local_278;
          do {
            if ((lVar10 == 1) && (iVar6 = memcmp(pvVar17,&DAT_1806e0010,1), iVar6 == 0)) break;
            FUN_1802792a0(*param_1,&local_230);
            lVar5 = local_228;
            pvVar4 = local_230;
            if ((local_228 == 1) && (iVar6 = memcmp(local_230,&DAT_1806dfff8,1), iVar6 == 0)) {
              if ((lVar10 == 5) && (iVar6 = memcmp(pvVar17,"items",5), iVar6 == 0)) {
                FUN_1802792a0(*param_1,&local_250);
                if (local_248 != 0) {
                  do {
                    lVar10 = local_248;
                    pcVar3 = local_250;
                    if ((local_248 == 1) && (iVar6 = memcmp(local_250,&DAT_1806e0010,1), iVar6 == 0)
                       ) break;
                    FUN_1802792a0(*param_1,&local_220);
                    if ((local_218 == 1) && (iVar6 = memcmp(local_220,&DAT_1806dfff8,1), iVar6 == 0)
                       ) {
                      uVar9 = *param_1;
                      iVar6 = 1;
                      do {
                        FUN_1802792a0(uVar9,&local_210);
                        pvVar17 = local_210;
                        if (local_208 == 0) break;
                        if (local_208 == 1) {
                          iVar7 = memcmp(local_210,&DAT_1806dfff8,1);
                          if (iVar7 == 0) {
                            iVar6 = iVar6 + 1;
                          }
                          else {
                            iVar7 = memcmp(pvVar17,&DAT_1806e0010,1);
                            if (iVar7 == 0) {
                              iVar6 = iVar6 + -1;
                            }
                          }
                        }
                      } while (0 < iVar6);
                    }
                    else if ((lVar10 != 0) && (*pcVar3 == '[')) {
                      if (puStack_260 == local_258) {
                        FUN_180286c60(&local_268,puStack_260,&local_250);
                      }
                      else {
                        *puStack_260 = 0;
                        puStack_260[1] = 0;
                        puStack_260[2] = 0;
                        puStack_260[3] = 0;
                        FUN_1800133a0(puStack_260,pcVar3,lVar10);
                        puStack_260 = puStack_260 + 4;
                      }
                    }
                    puVar8 = (undefined8 *)FUN_1802792a0(*param_1,local_1e0);
                    local_250 = (char *)*puVar8;
                    local_248 = puVar8[1];
                  } while (local_248 != 0);
                }
              }
              else {
                uVar9 = *param_1;
                iVar6 = 1;
                do {
                  FUN_1802792a0(uVar9,&local_200);
                  pvVar17 = local_200;
                  if (local_1f8 == 0) break;
                  if (local_1f8 == 1) {
                    iVar7 = memcmp(local_200,&DAT_1806dfff8,1);
                    if (iVar7 == 0) {
                      iVar6 = iVar6 + 1;
                    }
                    else {
                      iVar7 = memcmp(pvVar17,&DAT_1806e0010,1);
                      if (iVar7 == 0) {
                        iVar6 = iVar6 + -1;
                      }
                    }
                  }
                } while (0 < iVar6);
              }
            }
            else if ((lVar10 == 4) && (iVar6 = memcmp(pvVar17,&DAT_18058b644,4), iVar6 == 0)) {
              FUN_180029840(&local_130,pvVar4,lVar5);
            }
            puVar8 = (undefined8 *)FUN_1802792a0(*param_1,local_1d0);
            pvVar17 = (void *)*puVar8;
            lVar10 = puVar8[1];
          } while (lVar10 != 0);
          local_278 = pvVar17;
          local_270 = lVar10;
        }
        if (local_120 != 0) {
          local_150 = 0;
          uStack_148 = 0;
          local_140 = 0;
          local_138 = 0;
          FUN_1800133a0(&local_150,_Buf1,lVar20);
          FUN_1802777c0(local_d0,&local_130,&local_150);
          FUN_18000f890(&local_150);
          local_150 = 0;
          uStack_148 = 0;
          local_140 = 0;
          local_138 = 0;
          FUN_1800133a0(&local_150,_Buf1,lVar20);
          uVar9 = FUN_180066ab0(local_b0,"panorama/images/econ/set_icons/",&local_150);
          puVar8 = (undefined8 *)FUN_1800134a0(uVar9,"_png.vtex_c",0xb);
          ppppuVar11 = (undefined8 ****)*puVar8;
          uStack_168 = puVar8[1];
          uVar18 = puVar8[2];
          uVar13 = puVar8[3];
          puVar8[2] = 0;
          puVar8[3] = 0xf;
          *(undefined1 *)puVar8 = 0;
          local_170 = ppppuVar11;
          local_160 = uVar18;
          uStack_158 = uVar13;
          FUN_18000f890(local_b0);
          FUN_18000f890();
          ppppuVar14 = &local_170;
          if (0xf < uVar13) {
            ppppuVar14 = ppppuVar11;
          }
          uVar12 = 0;
          uVar19 = 0xcbf29ce484222325;
          if (uVar18 != 0) {
            do {
              uVar19 = (uVar19 ^ *(byte *)((longlong)ppppuVar14 + uVar12)) * 0x100000001b3;
              uVar12 = uVar12 + 1;
            } while (uVar12 < uVar18);
            param_1 = local_238;
          }
          lVar10 = FUN_1800268a0(&DAT_180ca1398,local_1c0,&local_170,uVar19);
          lVar10 = *(longlong *)(lVar10 + 8);
          if ((lVar10 == 0) || (lVar10 == DAT_180ca13a0)) {
LAB_18027b57b:
            local_f0 = 0;
            uStack_e8 = 0;
            local_e0 = 0;
            local_d8 = 0;
            FUN_1800133a0(&local_f0,_Buf1,lVar20);
            uVar9 = FUN_180066ab0(local_90,"panorama/images/econ/set_icons/",&local_f0);
            puVar8 = (undefined8 *)FUN_1800134a0(uVar9,".vsvg_c",7);
            ppppuVar14 = (undefined8 ****)*puVar8;
            uVar9 = puVar8[1];
            uVar18 = puVar8[2];
            uVar12 = puVar8[3];
            puVar8[2] = 0;
            puVar8[3] = 0xf;
            *(undefined1 *)puVar8 = 0;
            local_110 = ppppuVar14;
            uStack_108 = uVar9;
            if (0xf < uVar13) {
              uVar19 = uVar13 + 1;
              ppppuVar16 = ppppuVar11;
              local_100 = uVar18;
              uStack_f8 = uVar12;
              if (0xfff < uVar19) {
                ppppuVar16 = (undefined8 ****)ppppuVar11[-1];
                if ((undefined1 *)0x1f <
                    (undefined1 *)((longlong)ppppuVar11 + (-8 - (longlong)ppppuVar16))) {
                  pcVar1 = (code *)swi(0x29);
                  (*pcVar1)(5);
                  puVar15 = auStack_290;
                  break;
                }
                uVar19 = uVar13 + 0x28;
              }
              thunk_FUN_1803d64e0(ppppuVar16,uVar19);
            }
            local_100 = 0;
            uStack_f8 = 0xf;
            local_110 = (undefined8 ****)((ulonglong)local_110 & 0xffffffffffffff00);
            local_170 = ppppuVar14;
            uStack_168 = uVar9;
            local_160 = uVar18;
            uStack_158 = uVar12;
            FUN_18000f890(&local_110);
            FUN_18000f890(local_90);
            FUN_18000f890();
          }
          else {
            ppppuVar14 = ppppuVar11;
            uVar12 = uVar13;
            if (lVar10 == -0x30) goto LAB_18027b57b;
          }
          lVar20 = DAT_180ca13a0;
          ppppuVar11 = &local_170;
          if (0xf < uVar12) {
            ppppuVar11 = ppppuVar14;
          }
          uVar13 = 0;
          uVar19 = 0xcbf29ce484222325;
          if (uVar18 != 0) {
            do {
              uVar19 = (uVar19 ^ *(byte *)(uVar13 + (longlong)ppppuVar11)) * 0x100000001b3;
              uVar13 = uVar13 + 1;
            } while (uVar13 < uVar18);
          }
          lVar10 = FUN_1800268a0(&DAT_180ca1398,local_1b0,&local_170,uVar19);
          puVar2 = puStack_260;
          lVar10 = *(longlong *)(lVar10 + 8);
          uVar9 = extraout_XMM0_Qa;
          puVar8 = local_268;
          if (((lVar10 == 0) || (lVar10 == lVar20)) || (lVar10 == -0x30)) {
            local_160 = 0;
            ppppuVar11 = &local_170;
            if (0xf < uVar12) {
              ppppuVar11 = ppppuVar14;
            }
            *(undefined1 *)ppppuVar11 = 0;
            uVar18 = local_160;
          }
          for (; puVar8 != puVar2; puVar8 = puVar8 + 4) {
            uVar13 = 0;
            if (uVar18 != 0) {
              uVar9 = FUN_180281c40(uVar9,local_1a0,puVar8,&local_170);
              uVar13 = local_160;
            }
            uVar9 = FUN_180281ed0(uVar9,local_190,puVar8,local_d0);
            uVar18 = uVar13;
          }
          FUN_18000f890(&local_170);
          FUN_18000f890(local_d0);
        }
        FUN_1800288b0(&local_268);
        FUN_18000f890(&local_130);
      }
      puVar8 = (undefined8 *)FUN_1802792a0(*param_1,local_180);
      _Buf1 = (void *)*puVar8;
      lVar20 = puVar8[1];
      puVar15 = auStack_298;
    } while (lVar20 != 0);
  }
  *(undefined8 *)(puVar15 + -8) = 0x18027b7c5;
  return;
}



/* ===== 18027b7f0 FUN_18027b7f0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18027b7f0(undefined4 *param_1)

{
  void *_Buf1;
  code *pcVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong ******pppppplVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 ******ppppppuVar8;
  char *_Str1;
  size_t sVar9;
  longlong ******pppppplVar10;
  longlong ******pppppplVar11;
  undefined4 *puVar12;
  longlong lVar13;
  undefined8 *puVar14;
  longlong ******pppppplVar15;
  longlong ******pppppplVar16;
  char ******ppppppcVar17;
  undefined8 ******ppppppuVar18;
  ulonglong uVar19;
  char ******_Str2;
  longlong ******pppppplVar20;
  undefined1 *puVar21;
  void *unaff_RSI;
  void *pvVar22;
  char unaff_R15B;
  longlong ******pppppplVar23;
  undefined4 uVar24;
  undefined4 extraout_XMM0_Da;
  undefined8 uStack_3b0;
  undefined1 auStack_3a8 [8];
  undefined1 auStack_3a0 [40];
  undefined1 local_378 [8];
  undefined4 local_370;
  undefined4 uStack_36c;
  undefined4 uStack_368;
  undefined4 uStack_364;
  undefined8 local_360;
  void *local_358;
  longlong lStack_350;
  void *local_328;
  longlong local_320;
  undefined4 local_318 [2];
  longlong ******local_310;
  undefined8 local_308;
  undefined8 *local_300;
  undefined8 *local_2f8;
  undefined8 *puStack_2f0;
  undefined8 local_2e8;
  undefined8 local_2e0;
  undefined4 local_2d8;
  void *local_2d0;
  longlong local_2c8;
  void *local_2c0;
  longlong local_2b8;
  void *local_2b0;
  longlong local_2a8;
  undefined1 local_2a0 [16];
  undefined1 local_290 [16];
  undefined1 local_280 [16];
  undefined1 local_270 [16];
  undefined1 local_260 [16];
  undefined1 local_250 [16];
  undefined1 local_240 [16];
  undefined1 local_230 [24];
  longlong ******local_218;
  longlong ******pppppplStack_210;
  longlong ******local_208;
  longlong ******local_200;
  char ******local_1f8;
  undefined8 uStack_1f0;
  longlong local_1e8;
  ulonglong local_1e0;
  undefined8 ******local_1d8;
  undefined8 uStack_1d0;
  ulonglong local_1c8;
  ulonglong local_1c0;
  int local_1b8 [2];
  undefined8 ******local_1b0;
  undefined8 uStack_1a8;
  longlong ******local_1a0;
  ulonglong local_198;
  longlong ******local_190;
  longlong ******pppppplStack_188;
  longlong ******local_180;
  longlong ******local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  longlong local_160;
  undefined8 local_158;
  undefined8 ******local_150;
  longlong *****ppppplStack_148;
  longlong ******local_140;
  longlong *****local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined1 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  longlong local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  ulonglong local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  ulonglong local_58;
  
  local_58 = DAT_180919500 ^ (ulonglong)auStack_3a8;
  local_2d8 = 0;
  local_370 = *param_1;
  uStack_36c = param_1[1];
  uStack_368 = param_1[2];
  uStack_364 = param_1[3];
  local_360 = 0;
  local_318[0] = 0;
  local_310 = (longlong ******)0x0;
  local_308 = 0;
  pppppplVar5 = (longlong ******)FUN_1804ecaa0(0x110);
  *pppppplVar5 = (longlong *****)pppppplVar5;
  pppppplVar5[1] = (longlong *****)pppppplVar5;
  local_300 = (undefined8 *)0x0;
  local_2f8 = (undefined8 *)0x0;
  puStack_2f0 = (undefined8 *)0x0;
  local_2e8 = 7;
  local_2e0 = 8;
  local_318[0] = 0x3f800000;
  local_310 = pppppplVar5;
  puVar6 = (undefined8 *)FUN_1804ecaa0(0x80);
  if ((longlong)puStack_2f0 - (longlong)local_300 != 0) {
    uVar19 = ((longlong)puStack_2f0 - (longlong)local_300 >> 3) * 8;
    puVar14 = local_300;
    if (0xfff < uVar19) {
      puVar14 = (undefined8 *)local_300[-1];
      if (0x1f < (ulonglong)((longlong)local_300 + (-8 - (longlong)puVar14))) {
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        puVar21 = auStack_3a0;
        goto LAB_18027bcd7;
      }
      uVar19 = uVar19 + 0x27;
    }
    thunk_FUN_1803d64e0(puVar14,uVar19);
  }
  local_2f8 = puVar6 + 0x10;
  for (puVar14 = puVar6; puVar14 != local_2f8; puVar14 = puVar14 + 1) {
    *puVar14 = pppppplVar5;
  }
  local_300 = puVar6;
  puStack_2f0 = local_2f8;
  uVar24 = FUN_1802792a0(&local_370,&local_358);
  puVar21 = auStack_3a8;
  if (lStack_350 != 0) {
    puVar21 = auStack_3a8;
    do {
      if (lStack_350 == 5) {
        *(undefined8 *)(puVar21 + -8) = 0x18027b939;
        iVar3 = memcmp(local_358,"items",5);
        if (iVar3 == 0) {
          *(undefined8 *)(puVar21 + -8) = 0x18027b94f;
          puVar6 = (undefined8 *)FUN_1802792a0(puVar21 + 0x38,local_2a0);
          if (puVar6[1] == 1) {
            pvVar22 = (void *)*puVar6;
            *(undefined8 *)(puVar21 + -8) = 0x18027b96c;
            iVar3 = memcmp(pvVar22,&DAT_1806dfff8,1);
            if (iVar3 == 0) {
              *(undefined8 *)(puVar21 + -8) = 0x18027b982;
              FUN_1802792a0(puVar21 + 0x38,&local_328);
              if (local_320 != 0) {
                do {
                  lVar13 = local_320;
                  pvVar22 = local_328;
                  if (local_320 == 1) {
                    *(undefined8 *)(puVar21 + -8) = 0x18027b9ab;
                    iVar3 = memcmp(local_328,&DAT_1806e0010,1);
                    if (iVar3 == 0) break;
                  }
                  *(undefined8 *)(puVar21 + -8) = 0x18027b9c1;
                  puVar6 = (undefined8 *)FUN_1802792a0(puVar21 + 0x38,local_290);
                  if (puVar6[1] == 1) {
                    _Buf1 = (void *)*puVar6;
                    *(undefined8 *)(puVar21 + -8) = 0x18027b9de;
                    iVar3 = memcmp(_Buf1,&DAT_1806dfff8,1);
                    if (iVar3 == 0) {
                      local_1b8[0] = 0;
                      uStack_1a8 = 0;
                      local_1a0 = (longlong ******)0x0;
                      local_198 = 0xf;
                      local_1b0 = (undefined8 ******)0x0;
                      pppppplStack_188 = (longlong ******)0x0;
                      local_180 = (longlong ******)0x0;
                      local_178 = (longlong ******)0xf;
                      local_190 = (longlong ******)0x0;
                      uStack_168 = 0;
                      local_160 = 0;
                      local_158 = 0xf;
                      local_170 = 0;
                      ppppplStack_148 = (longlong *****)0x0;
                      local_140 = (longlong ******)0x0;
                      local_138 = (longlong *****)0xf;
                      local_150 = (undefined8 ******)0x0;
                      uStack_128 = 0;
                      local_120 = 0;
                      local_118 = 0xf;
                      local_130 = 0;
                      uStack_108 = 0;
                      local_100 = 0;
                      local_f8 = 0xf;
                      local_110 = 0;
                      local_f0 = 0;
                      local_e8 = 0;
                      uStack_d8 = 0;
                      local_d0 = 0;
                      local_c8 = 0xf;
                      local_e0 = 0;
                      local_218 = (longlong ******)0x0;
                      pppppplStack_210 = (longlong ******)0x0;
                      local_208 = (longlong ******)0x0;
                      local_200 = (longlong ******)0x0;
                      *(undefined8 *)(puVar21 + -8) = 0x18027bb01;
                      FUN_1800133a0(&local_218,pvVar22,lVar13);
                      pppppplVar5 = (longlong ******)&local_218;
                      if ((longlong ******)0xf < local_200) {
                        pppppplVar5 = local_218;
                      }
                      *(undefined8 *)(puVar21 + -8) = 0x18027bb1d;
                      local_1b8[0] = FUN_1805145e4(pppppplVar5);
                      *(undefined8 *)(puVar21 + -8) = 0x18027bb2f;
                      FUN_18000f890(&local_218);
                      uStack_1d0 = 0;
                      local_1c8 = 0;
                      local_1c0 = 0xf;
                      local_1d8 = (undefined8 ******)0x0;
                      uStack_1f0 = 0;
                      local_1e8 = 0;
                      local_1e0 = 0xf;
                      local_1f8 = (char ******)0x0;
                      unaff_R15B = '\x01';
                      *(undefined8 *)(puVar21 + -8) = 0x18027bb84;
                      FUN_1802792a0(puVar21 + 0x38,puVar21 + 0x70);
                      lVar13 = *(longlong *)(puVar21 + 0x78);
                      if (lVar13 != 0) {
                        pppppplVar5 = *(longlong *******)(puVar21 + 0x70);
                        unaff_R15B = '\x01';
                        do {
                          if (lVar13 == 1) {
                            *(undefined8 *)(puVar21 + -8) = 0x18027bbaf;
                            iVar3 = memcmp(pppppplVar5,&DAT_1806e0010,1);
                            if (iVar3 == 0) break;
                          }
                          *(undefined8 *)(puVar21 + -8) = 0x18027bbc6;
                          FUN_1802792a0(puVar21 + 0x38,puVar21 + 0x50);
                          pvVar22 = *(void **)(puVar21 + 0x50);
                          pppppplVar10 = *(longlong *******)(puVar21 + 0x58);
                          if (pppppplVar10 == (longlong ******)0x1) {
                            *(undefined8 *)(puVar21 + -8) = 0x18027bbec;
                            iVar3 = memcmp(pvVar22,&DAT_1806dfff8,1);
                            if (iVar3 != 0) goto LAB_18027bde0;
                            if (lVar13 == 0xf) {
                              *(undefined8 *)(puVar21 + -8) = 0x18027bc10;
                              iVar3 = memcmp(pppppplVar5,"used_by_classes",0xf);
                              if (iVar3 != 0) goto LAB_18027bd78;
                              *(undefined8 *)(puVar21 + -8) = 0x18027bc27;
                              FUN_1802792a0(puVar21 + 0x38,puVar21 + 0x60);
                              lVar13 = *(longlong *)(puVar21 + 0x68);
                              if (lVar13 != 0) {
                                pvVar22 = *(void **)(puVar21 + 0x60);
                                do {
                                  if (lVar13 == 1) {
                                    *(undefined8 *)(puVar21 + -8) = 0x18027bc58;
                                    iVar3 = memcmp(pvVar22,&DAT_1806e0010,1);
                                    if (iVar3 == 0) break;
                                  }
                                  *(undefined8 *)(puVar21 + -8) = 0x18027bc6e;
                                  FUN_1802792a0(puVar21 + 0x38,&local_2d0);
                                  if (local_2c8 == 1) {
                                    *(undefined8 *)(puVar21 + -8) = 0x18027bc88;
                                    iVar3 = memcmp(local_2d0,&DAT_1806dfff8,1);
                                    if (iVar3 != 0) goto LAB_18027bcf5;
                                    puVar6 = (undefined8 *)0x1;
                                    do {
                                      *(undefined8 *)(puVar21 + -8) = 0x18027bc9f;
                                      FUN_1802792a0(puVar21 + 0x38,&local_2c0);
                                      unaff_RSI = local_2c0;
                                      if (local_2b8 == 0) break;
                                      if (local_2b8 == 1) {
                                        *(undefined8 *)(puVar21 + -8) = 0x18027bcc8;
                                        iVar3 = memcmp(local_2c0,&DAT_1806dfff8,1);
                                        pppppplVar5 = (longlong ******)0x1;
                                        if (iVar3 == 0) {
                                          puVar6 = (undefined8 *)(ulonglong)((int)puVar6 + 1);
                                        }
                                        else {
LAB_18027bcd7:
                                          *(undefined8 *)(puVar21 + -8) = 0x18027bce9;
                                          iVar3 = memcmp(unaff_RSI,&DAT_1806e0010,
                                                         (size_t)pppppplVar5);
                                          if (iVar3 == 0) {
                                            puVar6 = (undefined8 *)(ulonglong)((int)puVar6 - 1);
                                          }
                                        }
                                      }
                                    } while (0 < (int)puVar6);
                                  }
                                  else {
LAB_18027bcf5:
                                    if (lVar13 == 10) {
                                      *(undefined8 *)(puVar21 + -8) = 0x18027bd0d;
                                      iVar3 = memcmp(pvVar22,"terrorists",10);
                                      if (iVar3 == 0) {
                                        local_f0 = CONCAT44(2,(undefined4)local_f0);
                                        goto LAB_18027bd4b;
                                      }
                                    }
                                    if (lVar13 == 0x12) {
                                      *(undefined8 *)(puVar21 + -8) = 0x18027bd35;
                                      iVar3 = memcmp(pvVar22,"counter-terrorists",0x12);
                                      uVar24 = local_f0._4_4_;
                                      if (iVar3 == 0) {
                                        uVar24 = 3;
                                      }
                                      local_f0 = CONCAT44(uVar24,(undefined4)local_f0);
                                    }
                                  }
LAB_18027bd4b:
                                  *(undefined8 *)(puVar21 + -8) = 0x18027bd59;
                                  puVar6 = (undefined8 *)FUN_1802792a0(puVar21 + 0x38,local_280);
                                  pvVar22 = (void *)*puVar6;
                                  *(void **)(puVar21 + 0x60) = pvVar22;
                                  lVar13 = puVar6[1];
                                  *(longlong *)(puVar21 + 0x68) = lVar13;
                                } while (lVar13 != 0);
                              }
                            }
                            else {
LAB_18027bd78:
                              iVar3 = 1;
                              do {
                                *(undefined8 *)(puVar21 + -8) = 0x18027bd8e;
                                FUN_1802792a0(puVar21 + 0x38,&local_2b0);
                                pvVar22 = local_2b0;
                                if (local_2a8 == 0) break;
                                if (local_2a8 == 1) {
                                  *(undefined8 *)(puVar21 + -8) = 0x18027bdb7;
                                  iVar4 = memcmp(local_2b0,&DAT_1806dfff8,1);
                                  if (iVar4 == 0) {
                                    iVar3 = iVar3 + 1;
                                  }
                                  else {
                                    *(undefined8 *)(puVar21 + -8) = 0x18027bdd1;
                                    iVar4 = memcmp(pvVar22,&DAT_1806e0010,1);
                                    if (iVar4 == 0) {
                                      iVar3 = iVar3 + -1;
                                    }
                                  }
                                }
                              } while (0 < iVar3);
                            }
                          }
                          else {
LAB_18027bde0:
                            if (lVar13 == 4) {
                              *(undefined8 *)(puVar21 + -8) = 0x18027bdf8;
                              iVar3 = memcmp(pppppplVar5,&DAT_18058b644,4);
                              if (iVar3 == 0) {
                                *(undefined8 *)(puVar21 + -8) = 0x18027be0e;
                                FUN_180029840(&local_1b0,pvVar22,pppppplVar10);
                                goto LAB_18027c17c;
                              }
                            }
                            if (lVar13 == 6) {
                              *(undefined8 *)(puVar21 + -8) = 0x18027be2b;
                              iVar3 = memcmp(pppppplVar5,"prefab",6);
                              if (iVar3 == 0) {
                                *(undefined8 *)(puVar21 + -8) = 0x18027be41;
                                FUN_180029840(&local_1d8,pvVar22,pppppplVar10);
                                goto LAB_18027c17c;
                              }
                            }
                            if (lVar13 == 0xc) {
                              *(undefined8 *)(puVar21 + -8) = 0x18027be5e;
                              iVar3 = memcmp(pppppplVar5,"model_player",0xc);
                              if (iVar3 == 0) {
                                *(undefined8 *)(puVar21 + -8) = 0x18027be74;
                                FUN_180029840(&local_170,pvVar22,pppppplVar10);
                                goto LAB_18027c17c;
                              }
                            }
                            if (lVar13 == 9) {
                              *(undefined8 *)(puVar21 + -8) = 0x18027be91;
                              iVar3 = memcmp(pppppplVar5,"vo_prefix",9);
                              if (iVar3 == 0) {
                                *(undefined8 *)(puVar21 + -8) = 0x18027bea7;
                                FUN_180029840(&local_110,pvVar22,pppppplVar10);
                              }
                              else {
                                *(undefined8 *)(puVar21 + -8) = 0x18027bec4;
                                iVar3 = memcmp(pppppplVar5,"item_name",9);
                                if (iVar3 != 0) goto LAB_18027bedf;
                                *(undefined8 *)(puVar21 + -8) = 0x18027beda;
                                FUN_180029840(&local_1f8,pvVar22,pppppplVar10);
                              }
                            }
                            else {
LAB_18027bedf:
                              if (lVar13 == 0xb) {
                                *(undefined8 *)(puVar21 + -8) = 0x18027bef7;
                                iVar3 = memcmp(pppppplVar5,"item_rarity",0xb);
                                if (iVar3 == 0) {
                                  local_218 = *(longlong *******)(puVar21 + 0x50);
                                  pppppplStack_210 = *(longlong *******)(puVar21 + 0x58);
                                  *(undefined8 *)(puVar21 + -8) = 0x18027bf14;
                                  uVar24 = FUN_1802791a0(&local_218);
                                  local_f0 = CONCAT44(local_f0._4_4_,uVar24);
                                  goto LAB_18027c17c;
                                }
                              }
                              if (lVar13 == 0x10) {
                                *(undefined8 *)(puVar21 + -8) = 0x18027bf37;
                                iVar3 = memcmp(pppppplVar5,"legacy_character",0x10);
                                if (iVar3 == 0) {
                                  if (pppppplVar10 == (longlong ******)0x1) {
                                    *(undefined8 *)(puVar21 + -8) = 0x18027bf5f;
                                    iVar3 = memcmp(pvVar22,&DAT_1806d3254,1);
                                    unaff_R15B = iVar3 != 0;
                                  }
                                  else {
                                    unaff_R15B = '\x01';
                                  }
                                  goto LAB_18027c17c;
                                }
                              }
                              if (lVar13 == 0xf) {
                                *(undefined8 *)(puVar21 + -8) = 0x18027bf8a;
                                iVar3 = memcmp(pppppplVar5,"image_inventory",0xf);
                                if (iVar3 == 0) {
                                  local_b8 = 0;
                                  uStack_b0 = 0;
                                  local_a8 = 0;
                                  local_a0 = 0;
                                  *(undefined8 *)(puVar21 + -8) = 0x18027bfc3;
                                  FUN_1800133a0(&local_b8,"_png.vtex_c",0xb);
                                  local_218 = (longlong ******)0x0;
                                  pppppplStack_210 = (longlong ******)0x0;
                                  local_208 = (longlong ******)0x0;
                                  local_200 = (longlong ******)0x0;
                                  *(undefined8 *)(puVar21 + -8) = 0x18027bfee;
                                  FUN_1800133a0(&local_218,pvVar22,pppppplVar10);
                                  *(undefined8 *)(puVar21 + -8) = 0x18027c009;
                                  uVar7 = FUN_180066ab0(&local_98,"panorama/images/",&local_218);
                                  *(undefined8 *)(puVar21 + -8) = 0x18027c020;
                                  pppppplVar11 = (longlong ******)
                                                 FUN_180066820(&local_78,uVar7,&local_b8);
                                  if (&local_150 != (undefined8 *******)pppppplVar11) {
                                    if (local_138 < (longlong *****)0x10) {
LAB_18027c074:
                                      local_150 = (undefined8 ******)*pppppplVar11;
                                      ppppplStack_148 = pppppplVar11[1];
                                      local_140 = (longlong ******)pppppplVar11[2];
                                      local_138 = pppppplVar11[3];
                                      pppppplVar11[2] = (longlong *****)0x0;
                                      pppppplVar11[3] = (longlong *****)0xf;
                                      *(undefined1 *)pppppplVar11 = 0;
                                      goto LAB_18027c0c7;
                                    }
                                    pppppplVar20 = (longlong ******)((longlong)local_138 + 1);
                                    ppppppuVar18 = local_150;
                                    if (pppppplVar20 < (longlong ******)0x1000) {
LAB_18027c06f:
                                      *(undefined8 *)(puVar21 + -8) = 0x18027c074;
                                      thunk_FUN_1803d64e0(ppppppuVar18,pppppplVar20);
                                      goto LAB_18027c074;
                                    }
                                    ppppppuVar18 = (undefined8 ******)local_150[-1];
                                    if ((ulonglong)
                                        ((longlong)local_150 + (-8 - (longlong)ppppppuVar18)) < 0x20
                                       ) {
                                      pppppplVar20 = (longlong ******)(local_138 + 5);
                                      goto LAB_18027c06f;
                                    }
                                    pcVar1 = (code *)swi(0x29);
                                    (*pcVar1)(5);
                                    puVar21 = puVar21 + 8;
LAB_18027c974:
                                    pcVar1 = (code *)swi(0x29);
                                    (*pcVar1)(5);
                                    puVar21 = puVar21 + 8;
                                    goto LAB_18027c97b;
                                  }
LAB_18027c0c7:
                                  *(undefined8 *)(puVar21 + -8) = 0x18027c0d3;
                                  FUN_18000f890(&local_78);
                                  *(undefined8 *)(puVar21 + -8) = 0x18027c0e0;
                                  FUN_18000f890(&local_98);
                                  if ((longlong ******)0xf < local_200) {
                                    pppppplVar20 = (longlong ******)((longlong)local_200 + 1);
                                    pppppplVar16 = local_218;
                                    if ((longlong ******)0xfff < pppppplVar20) {
                                      pppppplVar16 = (longlong ******)local_218[-1];
                                      if ((undefined1 *)0x1f <
                                          (undefined1 *)
                                          ((longlong)local_218 + (-8 - (longlong)pppppplVar16)))
                                      goto LAB_18027c974;
                                      pppppplVar20 = local_200 + 5;
                                    }
                                    *(undefined8 *)(puVar21 + -8) = 0x18027c122;
                                    thunk_FUN_1803d64e0(pppppplVar16,pppppplVar20);
                                  }
                                  local_208 = (longlong ******)0x0;
                                  local_200 = (longlong ******)0xf;
                                  local_218 = (longlong ******)
                                              ((ulonglong)local_218 & 0xffffffffffffff00);
                                  if (0xf < local_a0) {
                                    pppppplVar20 = (longlong ******)(local_a0 + 1);
                                    lVar13 = local_b8;
                                    if ((longlong ******)0xfff < pppppplVar20) {
                                      lVar13 = *(longlong *)(local_b8 + -8);
                                      if (0x1f < (local_b8 - lVar13) - 8U) goto LAB_18027c97b;
                                      pppppplVar20 = (longlong ******)(local_a0 + 0x28);
                                    }
                                    *(undefined8 *)(puVar21 + -8) = 0x18027c17c;
                                    thunk_FUN_1803d64e0(lVar13,pppppplVar20);
                                  }
                                }
                              }
                            }
                          }
LAB_18027c17c:
                          *(undefined8 *)(puVar21 + -8) = 0x18027c18a;
                          puVar6 = (undefined8 *)FUN_1802792a0(puVar21 + 0x38,local_270);
                          pppppplVar5 = (longlong ******)*puVar6;
                          *(longlong *******)(puVar21 + 0x70) = pppppplVar5;
                          lVar13 = puVar6[1];
                          *(longlong *)(puVar21 + 0x78) = lVar13;
                        } while (lVar13 != 0);
                      }
                      pppppplVar16 = (longlong ******)0x0;
                      if ((local_1b8[0] < 1) || (unaff_R15B != '\0')) {
LAB_18027c83e:
                        *(undefined8 *)(puVar21 + -8) = 0x18027c84a;
                        FUN_18000f890(&local_1f8);
                        *(undefined8 *)(puVar21 + -8) = 0x18027c857;
                        FUN_18000f890(&local_1d8);
                      }
                      else {
                        ppppppuVar18 = &local_1d8;
                        if (0xf < local_1c0) {
                          ppppppuVar18 = local_1d8;
                        }
                        if (local_1c8 < 0xc) goto LAB_18027c83e;
                        *(undefined8 *)(puVar21 + -8) = 0x18027c205;
                        ppppppuVar8 = (undefined8 ******)
                                      thunk_FUN_1804e6890(ppppppuVar18,
                                                          (undefined8 ******)
                                                          ((longlong)ppppppuVar18 + 0xc),
                                                          "customplayer",0xc);
                        if ((((ppppppuVar8 == (undefined8 ******)((longlong)ppppppuVar18 + 0xc)) ||
                             (ppppppuVar8 != ppppppuVar18)) || (local_160 == 0)) ||
                           (local_f0._4_4_ == 0)) goto LAB_18027c83e;
                        if ((DAT_180cfc838 == (longlong *)0x0) || (local_1e8 == 0)) {
                          *(undefined8 *)(puVar21 + -8) = 0x18027c3e3;
                          FUN_180024b50(&local_218,&local_1b0);
LAB_18027c3e3:
                          pppppplVar11 = local_200;
                          pppppplVar10 = local_218;
                          pppppplVar5 = local_208;
                          pppppplVar23 = pppppplStack_210;
                        }
                        else {
                          ppppppcVar17 = (char ******)&local_1f8;
                          if (0xf < local_1e0) {
                            ppppppcVar17 = local_1f8;
                          }
                          pcVar1 = *(code **)(*DAT_180cfc838 + 0x88);
                          *(undefined8 *)(puVar21 + -8) = 0x18027c270;
                          _Str1 = (char *)(*pcVar1)(DAT_180cfc838,ppppppcVar17);
                          if ((_Str1 == (char *)0x0) || (*_Str1 == '\0')) {
                            ppppppuVar18 = &local_1b0;
                            pppppplVar5 = local_1a0;
                            if (0xf < local_198) {
                              ppppppuVar18 = local_1b0;
                            }
                          }
                          else {
                            ppppppcVar17 = (char ******)&local_1f8;
                            if (0xf < local_1e0) {
                              ppppppcVar17 = local_1f8;
                            }
                            if (*(char *)ppppppcVar17 == '#') {
                              ppppppcVar17 = (char ******)&local_1f8;
                              if (0xf < local_1e0) {
                                ppppppcVar17 = local_1f8;
                              }
                              ppppppcVar17 = (char ******)((longlong)ppppppcVar17 + 1);
                            }
                            else {
                              ppppppcVar17 = (char ******)&local_1f8;
                              if (0xf < local_1e0) {
                                ppppppcVar17 = local_1f8;
                              }
                            }
                            _Str2 = (char ******)&local_1f8;
                            if (0xf < local_1e0) {
                              _Str2 = local_1f8;
                            }
                            *(undefined8 *)(puVar21 + -8) = 0x18027c2da;
                            iVar3 = strcmp(_Str1,(char *)_Str2);
                            if (iVar3 != 0) {
                              *(undefined8 *)(puVar21 + -8) = 0x18027c2e9;
                              iVar3 = strcmp(_Str1,(char *)ppppppcVar17);
                              if (iVar3 != 0) {
                                local_218 = (longlong ******)0x0;
                                pppppplStack_210 = (longlong ******)0x0;
                                local_208 = (longlong ******)0x0;
                                local_200 = (longlong ******)0x0;
                                *(undefined8 *)(puVar21 + -8) = 0x18027c30d;
                                sVar9 = strlen(_Str1);
                                *(undefined8 *)(puVar21 + -8) = 0x18027c31f;
                                FUN_1800133a0(&local_218,_Str1,sVar9);
                                goto LAB_18027c3e3;
                              }
                            }
                            ppppppuVar18 = &local_1b0;
                            pppppplVar5 = local_1a0;
                            if (0xf < local_198) {
                              ppppppuVar18 = local_1b0;
                            }
                          }
                          local_1a0 = pppppplVar5;
                          if ((longlong ******)0x7fffffffffffffff < pppppplVar5) {
                    /* WARNING: Subroutine does not return */
                            *(undefined **)(puVar21 + -8) = &UNK_18027ca1c;
                            FUN_180011990();
                          }
                          if (pppppplVar5 < (longlong ******)0x10) {
                            pppppplVar11 = (longlong ******)0xf;
                            pppppplVar10 = (longlong ******)*ppppppuVar18;
                            pppppplVar23 = (longlong ******)ppppppuVar18[1];
                          }
                          else {
                            pppppplVar11 = (longlong ******)((ulonglong)pppppplVar5 | 0xf);
                            if (pppppplVar11 < (longlong ******)0x8000000000000000) {
                              if (pppppplVar11 < (longlong ******)0x16) {
                                pppppplVar11 = (longlong ******)0x16;
                              }
                            }
                            else {
                              pppppplVar11 = (longlong ******)0x7fffffffffffffff;
                            }
                            *(undefined8 *)(puVar21 + -8) = 0x18027c3bc;
                            pppppplVar10 = (longlong ******)
                                           FUN_18000fb70((longlong)pppppplVar11 + 1);
                            *(undefined8 *)(puVar21 + -8) = 0x18027c3ce;
                            FUN_180540530(pppppplVar10,ppppppuVar18,
                                          (undefined1 *)((longlong)pppppplVar5 + 1));
                            pppppplVar23 = pppppplVar16;
                          }
                        }
                        if ((longlong ******)0xf < local_178) {
                          pppppplVar20 = (longlong ******)((longlong)local_178 + 1);
                          pppppplVar15 = local_190;
                          if (pppppplVar20 < (longlong ******)0x1000) {
LAB_18027c43b:
                            *(undefined8 *)(puVar21 + -8) = 0x18027c440;
                            thunk_FUN_1803d64e0(pppppplVar15,pppppplVar20);
                            goto LAB_18027c440;
                          }
                          pppppplVar15 = (longlong ******)local_190[-1];
                          if ((undefined1 *)((longlong)local_190 + (-8 - (longlong)pppppplVar15)) <
                              (undefined1 *)0x20) {
                            pppppplVar20 = local_178 + 5;
                            goto LAB_18027c43b;
                          }
LAB_18027c97b:
                          pcVar1 = (code *)swi(0x29);
                          (*pcVar1)(5);
                          puVar21 = puVar21 + 8;
LAB_18027c982:
                          pcVar1 = (code *)swi(0x29);
                          (*pcVar1)(5);
                          puVar21 = puVar21 + 8;
LAB_18027c989:
                          pcVar1 = (code *)swi(0x29);
                          (*pcVar1)(5);
                          puVar21 = puVar21 + 8;
LAB_18027c990:
                          pcVar1 = (code *)swi(0x29);
                          uVar24 = (*pcVar1)(5);
                          puVar21 = puVar21 + 8;
                          goto LAB_18027c997;
                        }
LAB_18027c440:
                        ppppppuVar18 = &local_150;
                        if ((longlong *****)0xf < local_138) {
                          ppppppuVar18 = local_150;
                        }
                        *(undefined8 *)(puVar21 + -8) = 0x18027c486;
                        local_190 = pppppplVar10;
                        pppppplStack_188 = pppppplVar23;
                        local_180 = pppppplVar5;
                        local_178 = pppppplVar11;
                        FUN_180029840(&local_130,ppppppuVar18,local_140);
                        ppppppuVar18 = &local_150;
                        if ((longlong *****)0xf < local_138) {
                          ppppppuVar18 = local_150;
                        }
                        *(undefined8 *)(puVar21 + 0x20) = 0xb;
                        *(undefined8 *)(puVar21 + -8) = 0x18027c4c0;
                        pppppplVar11 = (longlong ******)
                                       FUN_180043210(ppppppuVar18,local_140,0xffffffffffffffff,
                                                     "_png.vtex_c");
                        if (pppppplVar11 != (longlong ******)0xffffffffffffffff) {
                          local_98 = 0;
                          uStack_90 = 0;
                          local_88 = 0;
                          local_80 = 0;
                          *(undefined8 *)(puVar21 + -8) = 0x18027c4fe;
                          FUN_1800133a0(&local_98,"_png.vtex_c",0xb);
                          local_b8 = 0;
                          uStack_b0 = 0;
                          local_a8 = 0;
                          local_a0 = 0;
                          if (local_140 < pppppplVar11) {
                            pppppplVar11 = local_140;
                          }
                          ppppppuVar18 = &local_150;
                          if ((longlong *****)0xf < local_138) {
                            ppppppuVar18 = local_150;
                          }
                          *(undefined8 *)(puVar21 + -8) = 0x18027c54b;
                          FUN_1800133a0(&local_b8,ppppppuVar18,pppppplVar11);
                          *(undefined8 *)(puVar21 + -8) = 0x18027c565;
                          puVar12 = (undefined4 *)FUN_1800134a0(&local_b8,"_square",7);
                          local_78 = *puVar12;
                          uStack_74 = puVar12[1];
                          uStack_70 = puVar12[2];
                          uStack_6c = puVar12[3];
                          local_68 = puVar12[4];
                          uStack_64 = puVar12[5];
                          uStack_60 = puVar12[6];
                          uStack_5c = puVar12[7];
                          *(undefined8 *)(puVar12 + 4) = 0;
                          *(undefined8 *)(puVar12 + 6) = 0xf;
                          *(undefined1 *)puVar12 = 0;
                          *(undefined8 *)(puVar21 + -8) = 0x18027c5a3;
                          FUN_180066820(&local_218,&local_78,&local_98);
                          uVar19 = CONCAT44(uStack_5c,uStack_60);
                          if (0xf < uVar19) {
                            pppppplVar20 = (longlong ******)(uVar19 + 1);
                            lVar2 = CONCAT44(uStack_74,local_78);
                            lVar13 = lVar2;
                            if ((longlong ******)0xfff < pppppplVar20) {
                              lVar13 = *(longlong *)(lVar2 + -8);
                              if (0x1f < (lVar2 - lVar13) - 8U) goto LAB_18027c982;
                              pppppplVar20 = (longlong ******)(uVar19 + 0x28);
                            }
                            *(undefined8 *)(puVar21 + -8) = 0x18027c5e5;
                            thunk_FUN_1803d64e0(lVar13,pppppplVar20);
                          }
                          *(undefined8 *)(puVar21 + -8) = 0x18027c5f6;
                          FUN_18000f890(&local_b8);
                          *(undefined8 *)(puVar21 + -8) = 0x18027c603;
                          FUN_18000f890(&local_98);
                          pppppplVar10 = local_200;
                          pppppplVar11 = local_208;
                          pppppplVar5 = local_218;
                          pppppplVar20 = (longlong ******)&local_218;
                          if ((longlong ******)0xf < local_200) {
                            pppppplVar20 = local_218;
                          }
                          uVar19 = 0xcbf29ce484222325;
                          if (local_208 != (longlong ******)0x0) {
                            do {
                              uVar19 = (uVar19 ^ *(byte *)((longlong)pppppplVar20 +
                                                          (longlong)pppppplVar16)) * 0x100000001b3;
                              pppppplVar16 = (longlong ******)((longlong)pppppplVar16 + 1);
                            } while (pppppplVar16 < local_208);
                          }
                          *(undefined8 *)(puVar21 + -8) = 0x18027c67d;
                          lVar13 = FUN_1800268a0(&DAT_180ca1398,local_260,&local_218,uVar19);
                          lVar13 = *(longlong *)(lVar13 + 8);
                          if (((lVar13 != 0) && (lVar13 != DAT_180ca13a0)) && (lVar13 != -0x30)) {
                            pppppplVar20 = (longlong ******)&local_218;
                            if ((longlong ******)0xf < pppppplVar10) {
                              pppppplVar20 = pppppplVar5;
                            }
                            *(undefined8 *)(puVar21 + -8) = 0x18027c6b3;
                            FUN_180029840(&local_130,pppppplVar20,pppppplVar11);
                          }
                          *(undefined8 *)(puVar21 + -8) = 0x18027c6c0;
                          FUN_18000f890(&local_218);
                        }
                        *(undefined8 *)(puVar21 + -8) = 0x18027c6da;
                        puVar6 = (undefined8 *)FUN_180284ee0(local_318,local_250,local_1b8);
                        pppppplVar11 = (longlong ******)*puVar6;
                        *(int *)(pppppplVar11 + 3) = local_1b8[0];
                        *(undefined8 *)(puVar21 + -8) = 0x18027c6f6;
                        FUN_18002ba60(pppppplVar11 + 4,&local_1b0);
                        *(undefined8 *)(puVar21 + -8) = 0x18027c706;
                        FUN_18002ba60(pppppplVar11 + 8,&local_190);
                        *(undefined8 *)(puVar21 + -8) = 0x18027c716;
                        FUN_18002ba60(pppppplVar11 + 0xc,&local_170);
                        *(undefined8 *)(puVar21 + -8) = 0x18027c729;
                        FUN_18002ba60(pppppplVar11 + 0x10,&local_150);
                        *(undefined8 *)(puVar21 + -8) = 0x18027c73c;
                        FUN_18002ba60(pppppplVar11 + 0x14,&local_130);
                        *(undefined8 *)(puVar21 + -8) = 0x18027c74f;
                        FUN_18002ba60(pppppplVar11 + 0x18,&local_110);
                        *(undefined4 *)(pppppplVar11 + 0x1c) = (undefined4)local_f0;
                        *(int *)((longlong)pppppplVar11 + 0xe4) = local_f0._4_4_;
                        *(undefined1 *)(pppppplVar11 + 0x1d) = local_e8;
                        *(undefined8 *)(puVar21 + -8) = 0x18027c787;
                        FUN_18002ba60(pppppplVar11 + 0x1e,&local_e0);
                        if (0xf < local_1e0) {
                          pppppplVar20 = (longlong ******)(local_1e0 + 1);
                          ppppppcVar17 = local_1f8;
                          if ((longlong ******)0xfff < pppppplVar20) {
                            ppppppcVar17 = (char ******)local_1f8[-1];
                            if ((char *)0x1f <
                                (char *)((longlong)local_1f8 + (-8 - (longlong)ppppppcVar17)))
                            goto LAB_18027c989;
                            pppppplVar20 = (longlong ******)(local_1e0 + 0x28);
                          }
                          *(undefined8 *)(puVar21 + -8) = 0x18027c7c9;
                          thunk_FUN_1803d64e0(ppppppcVar17,pppppplVar20);
                        }
                        local_1e8 = 0;
                        local_1e0 = 0xf;
                        local_1f8 = (char ******)((ulonglong)local_1f8 & 0xffffffffffffff00);
                        if (0xf < local_1c0) {
                          pppppplVar20 = (longlong ******)(local_1c0 + 1);
                          ppppppuVar18 = local_1d8;
                          if ((longlong ******)0xfff < pppppplVar20) {
                            ppppppuVar18 = (undefined8 ******)local_1d8[-1];
                            if (0x1f < (ulonglong)
                                       ((longlong)local_1d8 + (-8 - (longlong)ppppppuVar18)))
                            goto LAB_18027c990;
                            pppppplVar20 = (longlong ******)(local_1c0 + 0x28);
                          }
                          *(undefined8 *)(puVar21 + -8) = 0x18027c823;
                          thunk_FUN_1803d64e0(ppppppuVar18,pppppplVar20);
                        }
                        local_1c8 = 0;
                        local_1c0 = 0xf;
                        local_1d8 = (undefined8 ******)((ulonglong)local_1d8 & 0xffffffffffffff00);
                      }
                      *(undefined8 *)(puVar21 + -8) = 0x18027c864;
                      FUN_18000f890(&local_e0);
                      *(undefined8 *)(puVar21 + -8) = 0x18027c870;
                      FUN_18000f890(&local_110);
                      *(undefined8 *)(puVar21 + -8) = 0x18027c87c;
                      FUN_18000f890(&local_130);
                      *(undefined8 *)(puVar21 + -8) = 0x18027c888;
                      FUN_18000f890(&local_150);
                      *(undefined8 *)(puVar21 + -8) = 0x18027c894;
                      FUN_18000f890(&local_170);
                      *(undefined8 *)(puVar21 + -8) = 0x18027c8a0;
                      FUN_18000f890(&local_190);
                      *(undefined8 *)(puVar21 + -8) = 0x18027c8ac;
                      FUN_18000f890(&local_1b0);
                    }
                  }
                  *(undefined8 *)(puVar21 + -8) = 0x18027c8ba;
                  puVar6 = (undefined8 *)FUN_1802792a0(puVar21 + 0x38,local_240);
                  local_328 = (void *)*puVar6;
                  local_320 = puVar6[1];
                } while (local_320 != 0);
              }
            }
          }
        }
      }
      *(undefined8 *)(puVar21 + -8) = 0x18027c8ea;
      puVar6 = (undefined8 *)FUN_1802792a0(puVar21 + 0x38,local_230);
      local_358 = (void *)*puVar6;
      lStack_350 = puVar6[1];
      uVar24 = extraout_XMM0_Da;
    } while (lStack_350 != 0);
  }
  pppppplVar5 = DAT_180cfc948;
  pppppplVar10 = DAT_180cfc940;
  if (DAT_180cfc940 != DAT_180cfc948) {
    do {
      *(undefined8 *)(puVar21 + -8) = 0x18027c918;
      uVar24 = FUN_1802753e0(pppppplVar10);
      pppppplVar10 = pppppplVar10 + 0x1f;
    } while (pppppplVar10 != pppppplVar5);
    DAT_180cfc948 = DAT_180cfc940;
  }
  pppppplVar5 = (longlong ******)*local_310;
  pppppplVar10 = local_310;
  if (pppppplVar5 != local_310) {
    do {
      pppppplVar20 = pppppplVar5 + 3;
      pppppplVar11 = DAT_180cfc948;
      if (DAT_180cfc948 == DAT_180cfc950) {
LAB_18027c997:
        *(undefined8 *)(puVar21 + -8) = 0x18027c9a2;
        uVar24 = FUN_180287c00(uVar24,pppppplVar11,pppppplVar20);
      }
      else {
        *(undefined8 *)(puVar21 + -8) = 0x18027c956;
        uVar24 = FUN_1802774b0(DAT_180cfc948);
        DAT_180cfc948 = DAT_180cfc948 + 0x1f;
      }
      pppppplVar5 = (longlong ******)*pppppplVar5;
    } while (pppppplVar5 != pppppplVar10);
  }
  *(undefined8 *)(puVar21 + -8) = 0x18027c9e1;
  FUN_180283ca0(DAT_180cfc940,DAT_180cfc948,
                ((longlong)DAT_180cfc948 - (longlong)DAT_180cfc940 >> 3) * -0x1084210842108421,
                puVar21[0x30]);
  *(undefined8 *)(puVar21 + -8) = 0x18027c9eb;
  FUN_1800132b0(&local_300);
  *(undefined8 *)(puVar21 + -8) = 0x18027c9f4;
  FUN_1802827d0(&local_310);
  *(undefined8 *)(puVar21 + -8) = 0x18027ca03;
  return;
}



/* ===== 18027ca20 FUN_18027ca20 ===== */

void FUN_18027ca20(longlong param_1)

{
  FUN_1800132b0(param_1 + 0x18);
  FUN_1802827d0(param_1 + 8);
  return;
}



/* ===== 18027ca40 FUN_18027ca40 ===== */

undefined4 * FUN_18027ca40(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  FUN_18002ba60(param_1 + 2,param_2 + 2);
  FUN_18002ba60(param_1 + 10,param_2 + 10);
  FUN_18002ba60(param_1 + 0x12,param_2 + 0x12);
  FUN_18002ba60(param_1 + 0x1a,param_2 + 0x1a);
  FUN_18002ba60(param_1 + 0x22,param_2 + 0x22);
  FUN_18002ba60(param_1 + 0x2a,param_2 + 0x2a);
  param_1[0x32] = param_2[0x32];
  param_1[0x33] = param_2[0x33];
  *(undefined1 *)(param_1 + 0x34) = *(undefined1 *)(param_2 + 0x34);
  FUN_18002ba60(param_1 + 0x36,param_2 + 0x36);
  return param_1;
}



/* ===== 18027cb00 FUN_18027cb00 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18027cb00(longlong param_1,longlong *param_2,int param_3,char *param_4)

{
  longlong lVar1;
  byte *pbVar2;
  ulonglong uVar3;
  longlong lVar4;
  code *pcVar5;
  undefined8 ****ppppuVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 ****ppppuVar10;
  ulonglong uVar11;
  undefined8 *_Buf2;
  ulonglong uVar12;
  longlong lVar13;
  undefined1 *puVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined1 auStack_c8 [8];
  undefined1 auStack_c0 [24];
  int local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_88;
  longlong local_80;
  undefined8 ****local_78;
  undefined8 uStack_70;
  ulonglong local_68;
  ulonglong local_60;
  ulonglong local_58;
  
  if (param_3 < 7) {
    local_58 = DAT_180919500 ^ (ulonglong)auStack_c8;
    uVar3 = param_2[1];
    puVar14 = auStack_c8;
    if (uVar3 != 0) {
      local_a8 = param_3 + 1;
      uVar12 = 0;
      local_98 = *param_2;
      local_a0 = param_1;
      do {
        lVar4 = local_98;
        lVar13 = local_98 + uVar12;
        if (((uVar3 <= uVar12) ||
            (lVar1 = local_98 + uVar3, lVar8 = thunk_FUN_1804e6c50(lVar13,lVar1,0x20),
            lVar8 == lVar1)) || (uVar15 = lVar8 - lVar4, lVar8 - lVar4 == 0xffffffffffffffff)) {
          uVar15 = uVar3;
        }
        if (uVar3 < uVar12) {
                    /* WARNING: Subroutine does not return */
          FUN_180225aa0();
        }
        local_68 = 0;
        local_60 = 0;
        local_78 = (undefined8 ****)0x0;
        uStack_70 = 0;
        uVar16 = uVar15 - uVar12;
        if (uVar3 - uVar12 < uVar15 - uVar12) {
          uVar16 = uVar3 - uVar12;
        }
        FUN_1800133a0(&local_78,lVar13,uVar16);
        uVar16 = local_60;
        uVar12 = local_68;
        ppppuVar6 = local_78;
        uVar9 = 0xcbf29ce484222325;
        ppppuVar10 = &local_78;
        if (0xf < local_60) {
          ppppuVar10 = local_78;
        }
        uVar11 = 0;
        if (local_68 != 0) {
          do {
            pbVar2 = (byte *)((longlong)ppppuVar10 + uVar11);
            uVar11 = uVar11 + 1;
            uVar9 = (uVar9 ^ *pbVar2) * 0x100000001b3;
          } while (uVar11 < local_68);
          param_1 = local_a0;
        }
        uVar9 = uVar9 & *(ulonglong *)(param_1 + 0x30);
        lVar13 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 8 + uVar9 * 0x10);
        if (lVar13 != *(longlong *)(param_1 + 8)) {
          lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x18) + uVar9 * 0x10);
          while( true ) {
            _Buf2 = (undefined8 *)(lVar13 + 0x10);
            if (0xf < *(ulonglong *)(lVar13 + 0x28)) {
              _Buf2 = (undefined8 *)*_Buf2;
            }
            ppppuVar10 = &local_78;
            if (0xf < uVar16) {
              ppppuVar10 = ppppuVar6;
            }
            if ((uVar12 == *(ulonglong *)(lVar13 + 0x20)) &&
               ((uVar12 == 0 || (iVar7 = memcmp(ppppuVar10,_Buf2,uVar12), iVar7 == 0)))) {
              param_1 = local_a0;
              goto LAB_18027ccab;
            }
            if (lVar13 == lVar4) break;
            lVar13 = *(longlong *)(lVar13 + 8);
          }
          param_1 = local_a0;
        }
        lVar13 = 0;
LAB_18027ccab:
        if (lVar13 == 0) {
          lVar13 = *(longlong *)(param_1 + 8);
        }
        if (0xf < uVar16) {
          uVar12 = uVar16 + 1;
          ppppuVar10 = ppppuVar6;
          if (0xfff < uVar12) {
            ppppuVar10 = (undefined8 ****)ppppuVar6[-1];
            if (0x1f < (ulonglong)((longlong)ppppuVar6 + (-8 - (longlong)ppppuVar10))) {
              pcVar5 = (code *)swi(0x29);
              (*pcVar5)(5);
              puVar14 = auStack_c0;
              break;
            }
            uVar12 = uVar16 + 0x28;
          }
          thunk_FUN_1803d64e0(ppppuVar10,uVar12);
        }
        uVar12 = uVar15 + 1;
        if (lVar13 != *(longlong *)(param_1 + 8)) {
          if ((*param_4 == '\0') && (*(char *)(lVar13 + 0x50) != '\0')) {
            *param_4 = '\x01';
            param_4[1] = *(char *)(lVar13 + 0x51);
          }
          if ((*(int *)(param_4 + 4) < 0) && (-1 < *(int *)(lVar13 + 0x54))) {
            *(int *)(param_4 + 4) = *(int *)(lVar13 + 0x54);
          }
          if (*(longlong *)(lVar13 + 0x40) != 0) {
            local_88 = lVar13 + 0x30;
            if (0xf < *(ulonglong *)(lVar13 + 0x48)) {
              local_88 = *(longlong *)local_88;
            }
            local_80 = *(longlong *)(lVar13 + 0x40);
            FUN_18027cb00(param_1,&local_88,local_a8,param_4);
          }
        }
        puVar14 = auStack_c8;
      } while (uVar12 < uVar3);
    }
    *(undefined8 *)(puVar14 + -8) = 0x18027cdac;
  }
  return;
}



/* ===== 18027cdc0 FUN_18027cdc0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18027cdc0(longlong ***param_1)

{
  void *pvVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  longlong ***ppplVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  char *_Str1;
  size_t sVar8;
  undefined8 ****ppppuVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  longlong ****pppplVar13;
  char ****ppppcVar14;
  undefined8 ****ppppuVar15;
  ulonglong uVar16;
  undefined8 ***pppuVar17;
  char ****_Str2;
  longlong ***ppplVar18;
  longlong lVar19;
  longlong ***ppplVar20;
  longlong lVar21;
  undefined1 *puVar22;
  undefined8 ****unaff_RSI;
  void *pvVar23;
  longlong ***ppplVar24;
  longlong lVar25;
  longlong lVar26;
  longlong unaff_R15;
  bool bVar27;
  undefined4 uVar28;
  undefined4 extraout_XMM0_Da;
  undefined8 uStack_340;
  undefined1 auStack_338 [8];
  undefined1 auStack_330 [24];
  undefined8 local_318 [2];
  undefined4 local_308;
  int local_304;
  undefined1 local_300 [8];
  longlong local_2f8 [4];
  void *local_2d8;
  longlong lStack_2d0;
  undefined4 local_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined8 local_2b8;
  undefined8 ****local_2a8;
  longlong ***local_2a0;
  undefined4 local_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined8 local_288;
  undefined8 ****local_278;
  longlong ***local_270;
  undefined4 local_268 [2];
  longlong ***local_260;
  ulonglong local_258;
  undefined8 *local_250;
  undefined8 *local_248;
  undefined8 *puStack_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined4 local_228 [2];
  longlong ***local_220;
  undefined8 local_218;
  undefined8 *local_210;
  undefined8 *local_208;
  undefined8 *puStack_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined1 local_1e8 [16];
  undefined1 local_1d8 [16];
  undefined1 local_1c8 [16];
  undefined1 local_1b8 [16];
  undefined1 local_1a8 [16];
  undefined1 local_198 [16];
  undefined8 ****local_188;
  undefined8 uStack_180;
  longlong ***local_178;
  ulonglong local_170;
  char ****local_168;
  undefined8 uStack_160;
  longlong ***local_158;
  ulonglong local_150;
  undefined8 ****local_148;
  longlong ***ppplStack_140;
  longlong ***local_138;
  longlong ***local_130;
  int local_128 [2];
  longlong ****local_120;
  undefined8 uStack_118;
  longlong ***local_110;
  ulonglong local_108;
  undefined8 ****local_100;
  longlong ***ppplStack_f8;
  longlong ***local_f0;
  longlong ***local_e8;
  undefined8 ****local_e0;
  undefined8 ***pppuStack_d8;
  longlong ***local_d0;
  undefined8 ***local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined2 local_98;
  undefined4 local_94;
  undefined8 local_90;
  undefined8 uStack_88;
  longlong ***local_80;
  longlong ***local_78;
  undefined1 local_70 [32];
  ulonglong local_50;
  
  local_50 = DAT_180919500 ^ (ulonglong)auStack_338;
  pvVar23 = (void *)0x0;
  local_308 = 0;
  local_228[0] = 0;
  local_220 = (longlong ***)0x0;
  local_218 = 0;
  ppplVar5 = (longlong ***)FUN_1804ecaa0(0x58);
  *ppplVar5 = (longlong **)ppplVar5;
  ppplVar5[1] = (longlong **)ppplVar5;
  local_210 = (undefined8 *)0x0;
  local_208 = (undefined8 *)0x0;
  puStack_200 = (undefined8 *)0x0;
  local_1f8 = 7;
  local_1f0 = 8;
  local_228[0] = 0x3f800000;
  local_220 = ppplVar5;
  puVar6 = (undefined8 *)FUN_1804ecaa0(0x80);
  if ((longlong)puStack_200 - (longlong)local_210 != 0) {
    uVar16 = ((longlong)puStack_200 - (longlong)local_210 >> 3) * 8;
    puVar12 = local_210;
    if (0xfff < uVar16) {
      puVar12 = (undefined8 *)local_210[-1];
      if (0x1f < (ulonglong)((longlong)local_210 + (-8 - (longlong)puVar12))) {
        pcVar2 = (code *)swi(0x29);
        (*pcVar2)(5);
        puVar22 = auStack_330;
        goto LAB_18027d0c6;
      }
      uVar16 = uVar16 + 0x27;
    }
    thunk_FUN_1803d64e0(puVar12,uVar16);
  }
  local_208 = puVar6 + 0x10;
  for (puVar12 = puVar6; puVar12 != local_208; puVar12 = puVar12 + 1) {
    *puVar12 = ppplVar5;
  }
  local_2c8 = *(undefined4 *)param_1;
  uStack_2c4 = *(undefined4 *)((longlong)param_1 + 4);
  uStack_2c0 = *(undefined4 *)(param_1 + 1);
  uStack_2bc = *(undefined4 *)((longlong)param_1 + 0xc);
  local_2b8 = 0;
  local_210 = puVar6;
  puStack_200 = local_208;
  FUN_1802792a0(&local_2c8,&local_2d8);
  puVar22 = auStack_338;
  if (lStack_2d0 != 0) {
    puVar22 = auStack_338;
    do {
      if (lStack_2d0 == 7) {
        *(undefined8 *)(puVar22 + -8) = 0x18027cf09;
        iVar3 = memcmp(local_2d8,"prefabs",7);
        if (iVar3 == 0) {
          *(undefined8 *)(puVar22 + -8) = 0x18027cf22;
          puVar6 = (undefined8 *)FUN_1802792a0(puVar22 + 0x70,&local_148);
          if (puVar6[1] == 1) {
            pvVar23 = (void *)*puVar6;
            *(undefined8 *)(puVar22 + -8) = 0x18027cf3f;
            iVar3 = memcmp(pvVar23,&DAT_1806dfff8,1);
            if (iVar3 == 0) {
              *(undefined8 *)(puVar22 + -8) = 0x18027cf56;
              FUN_1802792a0(puVar22 + 0x70,puVar22 + 0x50);
              unaff_R15 = *(longlong *)(puVar22 + 0x58);
              if (unaff_R15 != 0) {
                pvVar23 = *(void **)(puVar22 + 0x50);
                do {
                  if (unaff_R15 == 1) {
                    *(undefined8 *)(puVar22 + -8) = 0x18027cf88;
                    iVar3 = memcmp(pvVar23,&DAT_1806e0010,1);
                    if (iVar3 == 0) break;
                  }
                  *(undefined8 *)(puVar22 + -8) = 0x18027cf9e;
                  puVar6 = (undefined8 *)FUN_1802792a0(puVar22 + 0x70,local_1e8);
                  if (puVar6[1] == 1) {
                    pvVar1 = (void *)*puVar6;
                    *(undefined8 *)(puVar22 + -8) = 0x18027cfbb;
                    iVar3 = memcmp(pvVar1,&DAT_1806dfff8,1);
                    if (iVar3 == 0) {
                      uStack_b0 = 0;
                      local_a8 = 0;
                      local_a0 = 0xf;
                      local_b8 = 0;
                      local_98 = 0;
                      local_94 = 0xffffffff;
                      *(undefined8 *)(puVar22 + -8) = 0x18027d005;
                      FUN_1802792a0(puVar22 + 0x70,puVar22 + 0x40);
                      lVar19 = *(longlong *)(puVar22 + 0x48);
                      if (lVar19 != 0) {
                        unaff_RSI = *(undefined8 *****)(puVar22 + 0x40);
                        do {
                          if (lVar19 == 1) {
                            *(undefined8 *)(puVar22 + -8) = 0x18027d030;
                            iVar3 = memcmp(unaff_RSI,&DAT_1806e0010,1);
                            uVar7 = 1;
                            if (iVar3 == 0) break;
                          }
                          *(undefined8 *)(puVar22 + -8) = 0x18027d047;
                          FUN_1802792a0(puVar22 + 0x70,puVar22 + 0x60);
                          ppppuVar9 = *(undefined8 *****)(puVar22 + 0x60);
                          ppplVar5 = *(longlong ****)(puVar22 + 0x68);
                          if (ppplVar5 == (longlong ***)0x1) {
                            *(undefined8 *)(puVar22 + -8) = 0x18027d06d;
                            iVar3 = memcmp(ppppuVar9,&DAT_1806dfff8,1);
                            if (iVar3 != 0) goto LAB_18027d0e7;
                            puVar6 = (undefined8 *)0x1;
                            do {
                              *(undefined8 *)(puVar22 + -8) = 0x18027d08e;
                              FUN_1802792a0(puVar22 + 0x70,&local_278);
                              ppplVar5 = local_270;
                              unaff_RSI = local_278;
                              if (local_270 == (longlong ***)0x0) break;
                              if (local_270 == (longlong ***)0x1) {
                                *(undefined8 *)(puVar22 + -8) = 0x18027d0b7;
                                iVar3 = memcmp(local_278,&DAT_1806dfff8,1);
                                if (iVar3 == 0) {
                                  puVar6 = (undefined8 *)(ulonglong)((int)puVar6 + 1);
                                }
                                else {
LAB_18027d0c6:
                                  *(undefined8 *)(puVar22 + -8) = 0x18027d0d8;
                                  iVar3 = memcmp(unaff_RSI,&DAT_1806e0010,(size_t)ppplVar5);
                                  if (iVar3 == 0) {
                                    puVar6 = (undefined8 *)(ulonglong)((int)puVar6 - 1);
                                  }
                                }
                              }
                            } while (0 < (int)puVar6);
                          }
                          else {
LAB_18027d0e7:
                            if (lVar19 == 6) {
                              *(undefined8 *)(puVar22 + -8) = 0x18027d0ff;
                              iVar3 = memcmp(unaff_RSI,"prefab",6);
                              if (iVar3 == 0) {
                                *(undefined8 *)(puVar22 + -8) = 0x18027d115;
                                FUN_180029840(&local_b8,ppppuVar9,ppplVar5);
                                goto LAB_18027d192;
                              }
                            }
                            if (lVar19 == 0xb) {
                              *(undefined8 *)(puVar22 + -8) = 0x18027d12f;
                              iVar3 = memcmp(unaff_RSI,"item_rarity",0xb);
                              if (iVar3 == 0) {
                                *(undefined8 *)(puVar22 + -8) = 0x18027d144;
                                local_2a8 = ppppuVar9;
                                local_2a0 = ppplVar5;
                                local_94 = FUN_1802791a0(&local_2a8);
                                goto LAB_18027d192;
                              }
                            }
                            if (lVar19 == 0x15) {
                              *(undefined8 *)(puVar22 + -8) = 0x18027d164;
                              iVar3 = memcmp(unaff_RSI,"flexible_loadout_slot",0x15);
                              if (iVar3 == 0) {
                                local_98 = CONCAT11(local_98._1_1_,1);
                                bVar27 = false;
                                if (ppplVar5 == (longlong ***)0x6) {
                                  *(undefined8 *)(puVar22 + -8) = 0x18027d187;
                                  iVar3 = memcmp(ppppuVar9,"flair0",6);
                                  bVar27 = iVar3 == 0;
                                }
                                local_98 = CONCAT11(bVar27,(undefined1)local_98);
                              }
                            }
                          }
LAB_18027d192:
                          *(undefined8 *)(puVar22 + -8) = 0x18027d1a0;
                          puVar6 = (undefined8 *)FUN_1802792a0(puVar22 + 0x70,local_1d8);
                          unaff_RSI = (undefined8 ****)*puVar6;
                          lVar19 = puVar6[1];
                          uVar7 = 0;
                        } while (lVar19 != 0);
                        *(undefined8 *)(puVar22 + 0x48) = uVar7;
                        *(undefined8 *****)(puVar22 + 0x40) = unaff_RSI;
                      }
                      local_188 = (undefined8 ****)0x0;
                      uStack_180 = 0;
                      local_178 = (longlong ***)0x0;
                      local_170 = 0;
                      *(undefined8 *)(puVar22 + -8) = 0x18027d1e7;
                      FUN_1800133a0(&local_188,pvVar23,unaff_R15);
                      *(undefined8 *)(puVar22 + -8) = 0x18027d1fc;
                      puVar6 = (undefined8 *)FUN_180284bb0(local_228,local_1c8,&local_188);
                      puVar6 = (undefined8 *)*puVar6;
                      *(undefined8 *)(puVar22 + -8) = 0x18027d20f;
                      FUN_18002ba60(puVar6 + 6,&local_b8);
                      *(undefined1 *)(puVar6 + 10) = (undefined1)local_98;
                      *(undefined1 *)((longlong)puVar6 + 0x51) = local_98._1_1_;
                      *(undefined4 *)((longlong)puVar6 + 0x54) = local_94;
                      if (0xf < local_170) {
                        uVar16 = local_170 + 1;
                        ppppuVar9 = local_188;
                        if (0xfff < uVar16) {
                          ppppuVar9 = (undefined8 ****)local_188[-1];
                          if (0x1f < (ulonglong)((longlong)local_188 + (-8 - (longlong)ppppuVar9)))
                          {
                            pcVar2 = (code *)swi(0x29);
                            (*pcVar2)(5);
                            puVar22 = puVar22 + 8;
                            goto LAB_18027d685;
                          }
                          uVar16 = local_170 + 0x28;
                        }
                        *(undefined8 *)(puVar22 + -8) = 0x18027d26d;
                        thunk_FUN_1803d64e0(ppppuVar9,uVar16);
                      }
                      *(undefined8 *)(puVar22 + -8) = 0x18027d27a;
                      FUN_18000f890(&local_b8);
                    }
                  }
                  *(undefined8 *)(puVar22 + -8) = 0x18027d28b;
                  puVar6 = (undefined8 *)FUN_1802792a0(puVar22 + 0x70,local_1b8);
                  pvVar23 = (void *)*puVar6;
                  *(void **)(puVar22 + 0x50) = pvVar23;
                  unaff_R15 = puVar6[1];
                  *(longlong *)(puVar22 + 0x58) = unaff_R15;
                } while (unaff_R15 != 0);
              }
            }
          }
        }
      }
      *(undefined8 *)(puVar22 + -8) = 0x18027d2b6;
      puVar6 = (undefined8 *)FUN_1802792a0(puVar22 + 0x70,local_1a8);
      local_2d8 = (void *)*puVar6;
      lStack_2d0 = puVar6[1];
    } while (lStack_2d0 != 0);
  }
  local_268[0] = 0;
  local_260 = (longlong ***)0x0;
  local_258 = 0;
  *(undefined8 *)(puVar22 + -8) = 0x18027d2e4;
  ppplVar5 = (longlong ***)FUN_1804ecaa0(0x88);
  *ppplVar5 = (longlong **)ppplVar5;
  ppplVar5[1] = (longlong **)ppplVar5;
  local_250 = (undefined8 *)0x0;
  local_248 = (undefined8 *)0x0;
  puStack_240 = (undefined8 *)0x0;
  local_238 = 7;
  local_230 = 8;
  local_268[0] = 0x3f800000;
  *(undefined8 *)(puVar22 + -8) = 0x18027d31f;
  local_260 = ppplVar5;
  puVar6 = (undefined8 *)FUN_1804ecaa0(0x80);
  if ((longlong)puStack_240 - (longlong)local_250 != 0) {
    uVar16 = ((longlong)puStack_240 - (longlong)local_250 >> 3) * 8;
    puVar12 = local_250;
    if (0xfff < uVar16) {
      puVar12 = (undefined8 *)local_250[-1];
      if (0x1f < (ulonglong)((longlong)local_250 + (-8 - (longlong)puVar12))) {
LAB_18027d685:
        pcVar2 = (code *)swi(0x29);
        (*pcVar2)(5);
        puVar22 = puVar22 + 8;
        goto LAB_18027d68c;
      }
      uVar16 = uVar16 + 0x27;
    }
    *(undefined8 *)(puVar22 + -8) = 0x18027d365;
    thunk_FUN_1803d64e0(puVar12,uVar16);
  }
  local_248 = puVar6 + 0x10;
  for (puVar12 = puVar6; puVar12 != local_248; puVar12 = puVar12 + 1) {
    *puVar12 = ppplVar5;
  }
  local_298 = *(undefined4 *)param_1;
  uStack_294 = *(undefined4 *)((longlong)param_1 + 4);
  uStack_290 = *(undefined4 *)(param_1 + 1);
  uStack_28c = *(undefined4 *)((longlong)param_1 + 0xc);
  param_1 = (longlong ***)0x0;
  local_288 = 0;
  *(undefined8 *)(puVar22 + -8) = 0x18027d3a9;
  local_250 = puVar6;
  puStack_240 = local_248;
  uVar28 = FUN_1802792a0(&local_298,&local_2a8);
  if (local_2a0 != (longlong ***)0x0) {
    unaff_R15 = 0x100000001b3;
    ppplVar5 = local_2a0;
    ppppuVar9 = local_2a8;
    do {
      if (ppplVar5 == (longlong ***)&DAT_00000005) {
        *(undefined8 *)(puVar22 + -8) = 0x18027d3ed;
        iVar3 = memcmp(ppppuVar9,"items",5);
        if (iVar3 == 0) {
          *(undefined8 *)(puVar22 + -8) = 0x18027d405;
          puVar6 = (undefined8 *)FUN_1802792a0(&local_298,local_1a8);
          if (puVar6[1] == 1) {
            pvVar23 = (void *)*puVar6;
            *(undefined8 *)(puVar22 + -8) = 0x18027d422;
            iVar3 = memcmp(pvVar23,&DAT_1806dfff8,1);
            if (iVar3 == 0) {
              *(undefined8 *)(puVar22 + -8) = 0x18027d438;
              FUN_1802792a0(&local_298,puVar22 + 0x40);
              lVar19 = *(longlong *)(puVar22 + 0x48);
              if (lVar19 != 0) {
                pvVar23 = *(void **)(puVar22 + 0x40);
                do {
                  if (lVar19 == 1) {
                    *(undefined8 *)(puVar22 + -8) = 0x18027d468;
                    iVar3 = memcmp(pvVar23,&DAT_1806e0010,1);
                    if (iVar3 == 0) break;
                  }
                  *(undefined8 *)(puVar22 + -8) = 0x18027d480;
                  puVar6 = (undefined8 *)FUN_1802792a0(&local_298,local_1b8);
                  if (puVar6[1] == 1) {
                    pvVar1 = (void *)*puVar6;
                    *(undefined8 *)(puVar22 + -8) = 0x18027d49d;
                    iVar3 = memcmp(pvVar1,&DAT_1806dfff8,1);
                    if (iVar3 == 0) {
                      local_128[0] = (int)param_1;
                      uStack_118 = 0;
                      local_108 = 0xf;
                      local_120 = (longlong ****)0x0;
                      ppplStack_f8 = (longlong ***)0x0;
                      local_e8 = (longlong ***)0xf;
                      local_100 = (undefined8 ****)0x0;
                      pppuStack_d8 = (undefined8 ***)0x0;
                      local_c8 = (undefined8 ***)0xf;
                      local_e0 = (undefined8 ****)0x0;
                      local_148 = (undefined8 ****)0x0;
                      ppplStack_140 = (longlong ***)0x0;
                      *(undefined8 *)(puVar22 + -8) = 0x18027d53a;
                      local_138 = param_1;
                      local_130 = param_1;
                      local_110 = param_1;
                      local_f0 = param_1;
                      local_d0 = param_1;
                      local_c0 = param_1;
                      FUN_1800133a0(&local_148,pvVar23,lVar19);
                      ppppuVar9 = &local_148;
                      if ((longlong ***)0xf < local_130) {
                        ppppuVar9 = local_148;
                      }
                      *(undefined8 *)(puVar22 + -8) = 0x18027d556;
                      local_128[0] = FUN_1805145e4(ppppuVar9);
                      *(undefined8 *)(puVar22 + -8) = 0x18027d568;
                      FUN_18000f890(&local_148);
                      uStack_180 = 0;
                      local_170 = 0xf;
                      local_188 = (undefined8 ****)0x0;
                      uStack_160 = 0;
                      local_150 = 0xf;
                      local_168 = (char ****)0x0;
                      *(undefined2 *)(puVar22 + 0x30) = 0;
                      *(undefined4 *)(puVar22 + 0x34) = 0xffffffff;
                      *(undefined8 *)(puVar22 + -8) = 0x18027d5c8;
                      local_178 = param_1;
                      local_158 = param_1;
                      FUN_1802792a0(&local_298,puVar22 + 0x50);
                      lVar19 = *(longlong *)(puVar22 + 0x58);
                      if (lVar19 != 0) {
                        pvVar23 = *(void **)(puVar22 + 0x50);
                        do {
                          if (lVar19 == 1) {
                            *(undefined8 *)(puVar22 + -8) = 0x18027d5f8;
                            iVar3 = memcmp(pvVar23,&DAT_1806e0010,1);
                            if (iVar3 == 0) break;
                          }
                          *(undefined8 *)(puVar22 + -8) = 0x18027d60e;
                          FUN_1802792a0(&local_298,puVar22 + 0x60);
                          pvVar1 = *(void **)(puVar22 + 0x60);
                          lVar26 = *(longlong *)(puVar22 + 0x68);
                          if (lVar26 == 1) {
                            *(undefined8 *)(puVar22 + -8) = 0x18027d634;
                            iVar3 = memcmp(pvVar1,&DAT_1806dfff8,1);
                            if (iVar3 != 0) goto LAB_18027d6ad;
                            puVar6 = (undefined8 *)0x1;
                            do {
                              *(undefined8 *)(puVar22 + -8) = 0x18027d64d;
                              FUN_1802792a0(&local_298,&local_2a8);
                              unaff_RSI = local_2a8;
                              if (local_2a0 == (longlong ***)0x0) break;
                              if (local_2a0 == (longlong ***)0x1) {
                                *(undefined8 *)(puVar22 + -8) = 0x18027d676;
                                iVar3 = memcmp(local_2a8,&DAT_1806dfff8,1);
                                ppplVar5 = (longlong ***)0x1;
                                if (iVar3 == 0) {
                                  puVar6 = (undefined8 *)(ulonglong)((int)puVar6 + 1);
                                }
                                else {
LAB_18027d68c:
                                  *(undefined8 *)(puVar22 + -8) = 0x18027d69e;
                                  iVar3 = memcmp(unaff_RSI,&DAT_1806e0010,(size_t)ppplVar5);
                                  if (iVar3 == 0) {
                                    puVar6 = (undefined8 *)(ulonglong)((int)puVar6 - 1);
                                  }
                                }
                              }
                            } while (0 < (int)puVar6);
                          }
                          else {
LAB_18027d6ad:
                            if (lVar19 == 4) {
                              *(undefined8 *)(puVar22 + -8) = 0x18027d6c5;
                              iVar3 = memcmp(pvVar23,&DAT_18058b644,4);
                              if (iVar3 == 0) {
                                *(undefined8 *)(puVar22 + -8) = 0x18027d6db;
                                FUN_180029840(&local_120,pvVar1,lVar26);
                                goto LAB_18027d954;
                              }
                            }
                            if (lVar19 == 6) {
                              *(undefined8 *)(puVar22 + -8) = 0x18027d6f8;
                              iVar3 = memcmp(pvVar23,"prefab",6);
                              if (iVar3 == 0) {
                                *(undefined8 *)(puVar22 + -8) = 0x18027d70e;
                                FUN_180029840(&local_188,pvVar1,lVar26);
                                goto LAB_18027d954;
                              }
                            }
                            if (lVar19 == 9) {
                              *(undefined8 *)(puVar22 + -8) = 0x18027d72b;
                              iVar3 = memcmp(pvVar23,"item_name",9);
                              if (iVar3 == 0) {
                                *(undefined8 *)(puVar22 + -8) = 0x18027d741;
                                FUN_180029840(&local_168,pvVar1,lVar26);
                                goto LAB_18027d954;
                              }
                            }
                            if (lVar19 == 0xb) {
                              *(undefined8 *)(puVar22 + -8) = 0x18027d75e;
                              iVar3 = memcmp(pvVar23,"item_rarity",0xb);
                              if (iVar3 == 0) {
                                local_148 = *(undefined8 *****)(puVar22 + 0x60);
                                ppplStack_140 = *(longlong ****)(puVar22 + 0x68);
                                *(undefined8 *)(puVar22 + -8) = 0x18027d77b;
                                uVar28 = FUN_1802791a0(&local_148);
                                *(undefined4 *)(puVar22 + 0x34) = uVar28;
                                goto LAB_18027d954;
                              }
                            }
                            if (lVar19 == 0xf) {
                              *(undefined8 *)(puVar22 + -8) = 0x18027d7a0;
                              iVar3 = memcmp(pvVar23,"image_inventory",0xf);
                              if (iVar3 == 0) {
                                local_90 = 0;
                                uStack_88 = 0;
                                *(undefined8 *)(puVar22 + -8) = 0x18027d7d9;
                                local_80 = param_1;
                                local_78 = param_1;
                                FUN_1800133a0(&local_90,"_png.vtex_c",0xb);
                                local_148 = (undefined8 ****)0x0;
                                ppplStack_140 = (longlong ***)0x0;
                                *(undefined8 *)(puVar22 + -8) = 0x18027d804;
                                local_138 = param_1;
                                local_130 = param_1;
                                FUN_1800133a0(&local_148,pvVar1,lVar26);
                                *(undefined8 *)(puVar22 + -8) = 0x18027d81f;
                                uVar7 = FUN_180066ab0(&local_b8,"panorama/images/",&local_148);
                                *(undefined8 *)(puVar22 + -8) = 0x18027d836;
                                ppppuVar9 = (undefined8 ****)FUN_180066820(local_70,uVar7,&local_90)
                                ;
                                if (&local_e0 != (undefined8 *****)ppppuVar9) {
                                  if ((undefined8 ***)0xf < local_c8) {
                                    pppuVar17 = (undefined8 ***)((longlong)local_c8 + 1);
                                    ppppuVar15 = local_e0;
                                    if ((undefined8 ***)0xfff < pppuVar17) {
                                      ppppuVar15 = (undefined8 ****)local_e0[-1];
                                      if (0x1f < (ulonglong)
                                                 ((longlong)local_e0 + (-8 - (longlong)ppppuVar15)))
                                      {
                                        pcVar2 = (code *)swi(0x29);
                                        (*pcVar2)(5);
                                        puVar22 = puVar22 + 8;
                                        goto LAB_18027e2fd;
                                      }
                                      pppuVar17 = local_c8 + 5;
                                    }
                                    *(undefined8 *)(puVar22 + -8) = 0x18027d88a;
                                    thunk_FUN_1803d64e0(ppppuVar15,pppuVar17);
                                  }
                                  local_e0 = (undefined8 ****)*ppppuVar9;
                                  pppuStack_d8 = ppppuVar9[1];
                                  local_d0 = ppppuVar9[2];
                                  local_c8 = ppppuVar9[3];
                                  ppppuVar9[2] = param_1;
                                  ppppuVar9[3] = (undefined8 ***)0xf;
                                  *(undefined1 *)ppppuVar9 = 0;
                                }
                                *(undefined8 *)(puVar22 + -8) = 0x18027d8e9;
                                FUN_18000f890(local_70);
                                *(undefined8 *)(puVar22 + -8) = 0x18027d8f6;
                                FUN_18000f890(&local_b8);
                                *(undefined8 *)(puVar22 + -8) = 0x18027d903;
                                FUN_18000f890(&local_148);
                                *(undefined8 *)(puVar22 + -8) = 0x18027d910;
                                FUN_18000f890(&local_90);
                                goto LAB_18027d954;
                              }
                            }
                            if (lVar19 == 0x15) {
                              *(undefined8 *)(puVar22 + -8) = 0x18027d92a;
                              iVar3 = memcmp(pvVar23,"flexible_loadout_slot",0x15);
                              if (iVar3 == 0) {
                                puVar22[0x30] = 1;
                                bVar27 = false;
                                if (lVar26 == 6) {
                                  *(undefined8 *)(puVar22 + -8) = 0x18027d94b;
                                  iVar3 = memcmp(pvVar1,"flair0",6);
                                  bVar27 = iVar3 == 0;
                                }
                                puVar22[0x31] = bVar27;
                              }
                            }
                          }
LAB_18027d954:
                          *(undefined8 *)(puVar22 + -8) = 0x18027d961;
                          puVar6 = (undefined8 *)FUN_1802792a0(&local_298,local_1c8);
                          pvVar23 = (void *)*puVar6;
                          *(void **)(puVar22 + 0x50) = pvVar23;
                          lVar19 = puVar6[1];
                          *(longlong *)(puVar22 + 0x58) = lVar19;
                        } while (lVar19 != 0);
                      }
                      iVar3 = local_128[0];
                      if ((local_128[0] < 1) || (local_110 == (longlong ***)0x0)) {
                        *(undefined8 *)(puVar22 + -8) = 0x18027e088;
                        FUN_18000f890(&local_168);
                        *(undefined8 *)(puVar22 + -8) = 0x18027e095;
                        FUN_18000f890(&local_188);
                      }
                      else {
                        pppplVar13 = (longlong ****)&local_120;
                        if (0xf < local_108) {
                          pppplVar13 = local_120;
                        }
                        if (local_110 != (longlong ***)&DAT_00000008) {
LAB_18027da9d:
                          if ((local_178 == (longlong ***)0x0) || (local_d0 == (longlong ***)0x0))
                          goto LAB_18027d9e4;
                          local_278 = &local_188;
                          if (0xf < local_170) {
                            local_278 = local_188;
                          }
                          local_270 = local_178;
                          *(undefined8 *)(puVar22 + -8) = 0x18027daef;
                          FUN_18027cb00(local_228,&local_278,0,puVar22 + 0x30);
                          if (puVar22[0x31] == '\0') goto LAB_18027d9e4;
                          ppppuVar9 = &local_e0;
                          if ((undefined8 ***)0xf < local_c8) {
                            ppppuVar9 = local_e0;
                          }
                          uVar16 = 0xcbf29ce484222325;
                          ppplVar5 = param_1;
                          if (local_d0 != (longlong ***)0x0) {
                            do {
                              uVar16 = (uVar16 ^ *(byte *)((longlong)ppppuVar9 + (longlong)ppplVar5)
                                       ) * unaff_R15;
                              ppplVar5 = (longlong ***)((longlong)ppplVar5 + 1);
                            } while (ppplVar5 < local_d0);
                          }
                          *(undefined8 *)(puVar22 + -8) = 0x18027db5a;
                          lVar19 = FUN_1800268a0(&DAT_180ca1398,local_1d8,&local_e0,uVar16);
                          ppplVar5 = local_178;
                          lVar19 = *(longlong *)(lVar19 + 8);
                          if (((lVar19 == 0) || (lVar19 == DAT_180ca13a0)) || (lVar19 == -0x30))
                          goto LAB_18027d9e4;
                          iVar3 = *(int *)(puVar22 + 0x34);
                          if (iVar3 < 0) {
                            iVar3 = 6;
                          }
                          local_c0 = (longlong ***)CONCAT44(local_c0._4_4_,iVar3);
                          ppppuVar9 = &local_188;
                          if (0xf < local_170) {
                            ppppuVar9 = local_188;
                          }
                          *(undefined8 *)(puVar22 + 0x20) = 0xd;
                          *(undefined8 *)(puVar22 + -8) = 0x18027dbca;
                          lVar19 = FUN_180068d80(ppppuVar9,local_178,0,"prestige_coin");
                          if (lVar19 == -1) {
                            *(undefined8 *)(puVar22 + 0x20) = 0xe;
                            *(undefined8 *)(puVar22 + -8) = 0x18027dbf8;
                            lVar19 = FUN_180068d80(ppppuVar9,ppplVar5,0,"premier_season");
                            if (lVar19 == -1) {
                              *(undefined8 *)(puVar22 + 0x20) = 6;
                              *(undefined8 *)(puVar22 + -8) = 0x18027dc22;
                              lVar19 = FUN_180068d80(ppppuVar9,ppplVar5,0,"season");
                              if (lVar19 != -1) {
                                *(undefined8 *)(puVar22 + 0x20) = 4;
                                *(undefined8 *)(puVar22 + -8) = 0x18027dc46;
                                lVar19 = FUN_180068d80(ppppuVar9,ppplVar5,0,&DAT_18073eed8);
                                if (lVar19 != -1) {
                                  iVar3 = 2;
                                  goto LAB_18027dd23;
                                }
                              }
                              *(undefined8 *)(puVar22 + 0x20) = 0xd;
                              *(undefined8 *)(puVar22 + -8) = 0x18027dc74;
                              lVar19 = FUN_180068d80(ppppuVar9,ppplVar5,0,"majors_trophy");
                              if (lVar19 == -1) {
                                *(undefined8 *)(puVar22 + 0x20) = 6;
                                *(undefined8 *)(puVar22 + -8) = 0x18027dc9e;
                                lVar19 = FUN_180068d80(ppppuVar9,ppplVar5,0,"pickem");
                                if (lVar19 == -1) {
                                  *(undefined8 *)(puVar22 + 0x20) = 0x12;
                                  *(undefined8 *)(puVar22 + -8) = 0x18027dcc2;
                                  lVar19 = FUN_180068d80(ppppuVar9,ppplVar5,0,"tournament_journal");
                                  if (lVar19 == -1) {
                                    *(undefined8 *)(puVar22 + 0x20) = 4;
                                    *(undefined8 *)(puVar22 + -8) = 0x18027dce6;
                                    lVar19 = FUN_180068d80(ppppuVar9,ppplVar5,0,&DAT_18073eea4);
                                    if (lVar19 == -1) {
                                      *(undefined8 *)(puVar22 + 0x20) = 9;
                                      *(undefined8 *)(puVar22 + -8) = 0x18027dd0f;
                                      lVar19 = FUN_180068d80(ppppuVar9,ppplVar5,0,"map_token");
                                      iVar3 = (int)CONCAT71((int7)((ulonglong)param_1 >> 8),
                                                            lVar19 == -1) + 7;
                                    }
                                    else {
                                      iVar3 = 6;
                                    }
                                    goto LAB_18027dd23;
                                  }
                                }
                                iVar3 = 5;
                              }
                              else {
                                iVar3 = 4;
                              }
                            }
                            else {
                              iVar3 = 3;
                            }
                          }
                          else {
                            iVar3 = 1;
                          }
LAB_18027dd23:
                          local_c0 = (longlong ***)CONCAT44(iVar3,(undefined4)local_c0);
                          if ((DAT_180cfc838 == (longlong *)0x0) || (local_158 == (longlong ***)0x0)
                             ) {
                            *(undefined8 *)(puVar22 + -8) = 0x18027deb3;
                            FUN_180024b50(&local_148,&local_120);
LAB_18027deb3:
                            ppplVar20 = local_130;
                            ppppuVar9 = local_148;
                            ppplVar24 = local_138;
                            ppplVar5 = ppplStack_140;
                          }
                          else {
                            ppppcVar14 = (char ****)&local_168;
                            if (0xf < local_150) {
                              ppppcVar14 = local_168;
                            }
                            pcVar2 = *(code **)(*DAT_180cfc838 + 0x88);
                            *(undefined8 *)(puVar22 + -8) = 0x18027dd67;
                            _Str1 = (char *)(*pcVar2)(DAT_180cfc838,ppppcVar14);
                            if ((_Str1 != (char *)0x0) && (*_Str1 != '\0')) {
                              ppppcVar14 = (char ****)&local_168;
                              if (0xf < local_150) {
                                ppppcVar14 = local_168;
                              }
                              if (*(char *)ppppcVar14 == '#') {
                                ppppcVar14 = (char ****)&local_168;
                                if (0xf < local_150) {
                                  ppppcVar14 = local_168;
                                }
                                ppppcVar14 = (char ****)((longlong)ppppcVar14 + 1);
                              }
                              else {
                                ppppcVar14 = (char ****)&local_168;
                                if (0xf < local_150) {
                                  ppppcVar14 = local_168;
                                }
                              }
                              _Str2 = (char ****)&local_168;
                              if (0xf < local_150) {
                                _Str2 = local_168;
                              }
                              *(undefined8 *)(puVar22 + -8) = 0x18027ddd1;
                              iVar3 = strcmp(_Str1,(char *)_Str2);
                              if (iVar3 != 0) {
                                *(undefined8 *)(puVar22 + -8) = 0x18027dde0;
                                iVar3 = strcmp(_Str1,(char *)ppppcVar14);
                                if (iVar3 != 0) {
                                  local_148 = (undefined8 ****)0x0;
                                  ppplStack_140 = (longlong ***)0x0;
                                  *(undefined8 *)(puVar22 + -8) = 0x18027de04;
                                  local_138 = param_1;
                                  local_130 = param_1;
                                  sVar8 = strlen(_Str1);
                                  *(undefined8 *)(puVar22 + -8) = 0x18027de16;
                                  FUN_1800133a0(&local_148,_Str1,sVar8);
                                  goto LAB_18027deb3;
                                }
                              }
                            }
                            ppplVar24 = local_110;
                            pppplVar13 = (longlong ****)&local_120;
                            if (0xf < local_108) {
                              pppplVar13 = local_120;
                            }
                            if ((longlong ***)0x7fffffffffffffff < local_110) goto LAB_18027e312;
                            if (local_110 < (longlong ***)0x10) {
                              ppplVar20 = (longlong ***)0xf;
                              ppplVar5 = pppplVar13[1];
                              ppppuVar9 = (undefined8 ****)*pppplVar13;
                            }
                            else {
                              ppplVar20 = (longlong ***)((ulonglong)local_110 | 0xf);
                              if (ppplVar20 < (longlong ***)0x8000000000000000) {
                                if (ppplVar20 < (longlong ***)0x16) {
                                  ppplVar20 = (longlong ***)0x16;
                                }
                              }
                              else {
                                ppplVar20 = (longlong ***)0x7fffffffffffffff;
                              }
                              *(undefined8 *)(puVar22 + -8) = 0x18027de86;
                              ppppuVar9 = (undefined8 ****)
                                          FUN_18000fb70((undefined1 *)((longlong)ppplVar20 + 1));
                              *(undefined8 *)(puVar22 + -8) = 0x18027de98;
                              FUN_180540530(ppppuVar9,pppplVar13,
                                            (undefined1 *)((longlong)ppplVar24 + 1));
                              ppplVar5 = param_1;
                            }
                          }
                          if ((longlong ***)0xf < local_e8) {
                            ppplVar18 = (longlong ***)((longlong)local_e8 + 1);
                            ppppuVar15 = local_100;
                            if (ppplVar18 < (longlong ***)0x1000) {
LAB_18027df0b:
                              *(undefined8 *)(puVar22 + -8) = 0x18027df10;
                              thunk_FUN_1803d64e0(ppppuVar15,ppplVar18);
                              goto LAB_18027df10;
                            }
                            ppppuVar15 = (undefined8 ****)local_100[-1];
                            if ((ulonglong)((longlong)local_100 + (-8 - (longlong)ppppuVar15)) <
                                0x20) {
                              ppplVar18 = local_e8 + 5;
                              goto LAB_18027df0b;
                            }
LAB_18027e2fd:
                            pcVar2 = (code *)swi(0x29);
                            (*pcVar2)(5);
                            puVar22 = puVar22 + 8;
                            goto LAB_18027e304;
                          }
LAB_18027df10:
                          *(undefined8 *)(puVar22 + -8) = 0x18027df40;
                          local_100 = ppppuVar9;
                          ppplStack_f8 = ppplVar5;
                          local_f0 = ppplVar24;
                          local_e8 = ppplVar20;
                          plVar11 = (longlong *)FUN_1802848f0(local_268,local_1e8,local_128);
                          lVar19 = *plVar11;
                          *(int *)(lVar19 + 0x18) = local_128[0];
                          *(undefined8 *)(puVar22 + -8) = 0x18027df5c;
                          FUN_18002ba60(lVar19 + 0x20,&local_120);
                          *(undefined8 *)(puVar22 + -8) = 0x18027df6c;
                          FUN_18002ba60(lVar19 + 0x40,&local_100);
                          *(undefined8 *)(puVar22 + -8) = 0x18027df7c;
                          FUN_18002ba60(lVar19 + 0x60,&local_e0);
                          *(undefined4 *)(lVar19 + 0x80) = (undefined4)local_c0;
                          *(undefined4 *)(lVar19 + 0x84) = local_c0._4_4_;
                          if (0xf < local_150) {
                            uVar16 = local_150 + 1;
                            ppppcVar14 = local_168;
                            if (0xfff < uVar16) {
                              ppppcVar14 = (char ****)local_168[-1];
                              if ((char *)0x1f <
                                  (char *)((longlong)local_168 + (-8 - (longlong)ppppcVar14)))
                              goto LAB_18027e304;
                              uVar16 = local_150 + 0x28;
                            }
                            *(undefined8 *)(puVar22 + -8) = 0x18027dfd5;
                            thunk_FUN_1803d64e0(ppppcVar14,uVar16);
                          }
                          local_150 = 0xf;
                          local_168 = (char ****)((ulonglong)local_168 & 0xffffffffffffff00);
                          local_158 = param_1;
                          if (local_170 < 0x10) {
LAB_18027e02f:
                            local_170 = 0xf;
                            local_188 = (undefined8 ****)((ulonglong)local_188 & 0xffffffffffffff00)
                            ;
                            *(undefined8 *)(puVar22 + -8) = 0x18027e058;
                            local_178 = param_1;
                            FUN_18000f890(&local_e0);
                            *(undefined8 *)(puVar22 + -8) = 0x18027e064;
                            FUN_18000f890(&local_100);
                            *(undefined8 *)(puVar22 + -8) = 0x18027e070;
                            FUN_18000f890(&local_120);
                            unaff_R15 = 0x100000001b3;
                            goto LAB_18027e0ba;
                          }
                          uVar16 = local_170 + 1;
                          ppppuVar9 = local_188;
                          if (uVar16 < 0x1000) {
LAB_18027e02a:
                            *(undefined8 *)(puVar22 + -8) = 0x18027e02f;
                            thunk_FUN_1803d64e0(ppppuVar9,uVar16);
                            goto LAB_18027e02f;
                          }
                          ppppuVar9 = (undefined8 ****)local_188[-1];
                          if ((ulonglong)((longlong)local_188 + (-8 - (longlong)ppppuVar9)) < 0x20)
                          {
                            uVar16 = local_170 + 0x28;
                            goto LAB_18027e02a;
                          }
LAB_18027e30b:
                          pcVar2 = (code *)swi(0x29);
                          (*pcVar2)(5);
                          puVar22 = puVar22 + 8;
LAB_18027e312:
                    /* WARNING: Subroutine does not return */
                          *(undefined8 *)(puVar22 + -8) = 0x18027e317;
                          FUN_180011990();
                        }
                        *(undefined8 *)(puVar22 + -8) = 0x18027d9d6;
                        iVar4 = memcmp(pppplVar13,"musickit",8);
                        if (iVar4 != 0) goto LAB_18027da9d;
                        DAT_1809f3618 = iVar3;
LAB_18027d9e4:
                        if (0xf < local_150) {
                          uVar16 = local_150 + 1;
                          ppppcVar14 = local_168;
                          if (0xfff < uVar16) {
                            ppppcVar14 = (char ****)local_168[-1];
                            if ((char *)0x1f <
                                (char *)((longlong)local_168 + (-8 - (longlong)ppppcVar14))) {
LAB_18027e304:
                              pcVar2 = (code *)swi(0x29);
                              (*pcVar2)(5);
                              puVar22 = puVar22 + 8;
                              goto LAB_18027e30b;
                            }
                            uVar16 = local_150 + 0x28;
                          }
                          *(undefined8 *)(puVar22 + -8) = 0x18027da25;
                          thunk_FUN_1803d64e0(ppppcVar14,uVar16);
                        }
                        local_168 = (char ****)((ulonglong)local_168 & 0xffffffffffffff00);
                        local_150 = 0xf;
                        local_158 = param_1;
                        if (0xf < local_170) {
                          uVar16 = local_170 + 1;
                          ppppuVar9 = local_188;
                          if (0xfff < uVar16) {
                            ppppuVar9 = (undefined8 ****)local_188[-1];
                            if (0x1f < (ulonglong)((longlong)local_188 + (-8 - (longlong)ppppuVar9))
                               ) goto LAB_18027e30b;
                            uVar16 = local_170 + 0x28;
                          }
                          *(undefined8 *)(puVar22 + -8) = 0x18027da7f;
                          thunk_FUN_1803d64e0(ppppuVar9,uVar16);
                        }
                        local_170 = 0xf;
                        local_188 = (undefined8 ****)((ulonglong)local_188 & 0xffffffffffffff00);
                        local_178 = param_1;
                      }
                      *(undefined8 *)(puVar22 + -8) = 0x18027e0a2;
                      FUN_18000f890(&local_e0);
                      *(undefined8 *)(puVar22 + -8) = 0x18027e0ae;
                      FUN_18000f890(&local_100);
                      *(undefined8 *)(puVar22 + -8) = 0x18027e0ba;
                      FUN_18000f890(&local_120);
                    }
                  }
LAB_18027e0ba:
                  *(undefined8 *)(puVar22 + -8) = 0x18027e0ca;
                  puVar6 = (undefined8 *)FUN_1802792a0(&local_298,local_198);
                  pvVar23 = (void *)*puVar6;
                  *(void **)(puVar22 + 0x40) = pvVar23;
                  lVar19 = puVar6[1];
                  *(longlong *)(puVar22 + 0x48) = lVar19;
                } while (lVar19 != 0);
              }
            }
          }
        }
      }
      *(undefined8 *)(puVar22 + -8) = 0x18027e0fc;
      puVar6 = (undefined8 *)FUN_1802792a0(&local_298,puVar22 + 0x70);
      ppppuVar9 = (undefined8 ****)*puVar6;
      ppplVar5 = (longlong ***)puVar6[1];
      uVar28 = extraout_XMM0_Da;
    } while (ppplVar5 != (longlong ***)0x0);
  }
  lVar19 = DAT_180cfc978;
  lVar26 = DAT_180cfc970;
  if (DAT_180cfc970 != DAT_180cfc978) {
    do {
      *(undefined8 *)(puVar22 + -8) = 0x18027e129;
      FUN_18000f890(lVar26 + 0x48);
      *(undefined8 *)(puVar22 + -8) = 0x18027e132;
      FUN_18000f890(lVar26 + 0x28);
      *(undefined8 *)(puVar22 + -8) = 0x18027e13b;
      uVar28 = FUN_18000f890(lVar26 + 8);
      lVar26 = lVar26 + 0x70;
    } while (lVar26 != lVar19);
    DAT_180cfc978 = DAT_180cfc970;
  }
  uVar16 = local_258;
  if ((ulonglong)((DAT_180cfc980 - DAT_180cfc970 >> 4) * 0x6db6db6db6db6db7) < local_258) {
    if (0x249249249249249 < local_258) {
                    /* WARNING: Subroutine does not return */
      *(undefined **)(puVar22 + -8) = &UNK_18027e31d;
      FUN_1800118d0();
    }
    lVar21 = DAT_180cfc978 - DAT_180cfc970;
    *(undefined8 *)(puVar22 + -8) = 0x18027e1a1;
    lVar10 = FUN_18000fb70(local_258 * 0x70);
    lVar19 = DAT_180cfc970;
    lVar26 = DAT_180cfc978;
    lVar25 = lVar10;
    if (DAT_180cfc970 != DAT_180cfc978) {
      do {
        *(undefined8 *)(puVar22 + -8) = 0x18027e1c5;
        FUN_180288980(lVar10);
        lVar10 = lVar10 + 0x70;
        lVar19 = lVar19 + 0x70;
      } while (lVar19 != lVar26);
    }
    *(undefined8 *)(puVar22 + -8) = 0x18027e1e0;
    uVar28 = FUN_1802884d0(lVar10,lVar25,(lVar21 >> 4) * 0x6db6db6db6db6db7,uVar16);
  }
  ppplVar24 = local_260;
  for (ppplVar5 = (longlong ***)*local_260; ppplVar5 != ppplVar24;
      ppplVar5 = (longlong ***)*ppplVar5) {
    *(undefined8 *)(puVar22 + -8) = 0x18027e209;
    uVar28 = FUN_180285a70(uVar28,ppplVar5 + 3);
  }
  *(undefined8 *)(puVar22 + -8) = 0x18027e23e;
  FUN_180284040(DAT_180cfc970,DAT_180cfc978,
                (DAT_180cfc978 - DAT_180cfc970 >> 4) * 0x6db6db6db6db6db7,puVar22[0x38]);
  if ((DAT_180cfc978 - DAT_180cfc970 >> 4) * 0x6db6db6db6db6db7 != 0) {
    do {
      *(undefined8 *)(puVar22 + -8) = 0x18027e278;
      plVar11 = (longlong *)
                FUN_1801d4a30(&DAT_180ca1560,puVar22 + 0x70,(longlong)param_1 * 0x70 + DAT_180cfc970
                             );
      *(longlong ****)(*plVar11 + 0x18) = param_1;
      param_1 = (longlong ***)((longlong)param_1 + 1);
    } while (param_1 < (longlong ***)((DAT_180cfc978 - DAT_180cfc970 >> 4) * 0x6db6db6db6db6db7));
  }
  *(undefined8 *)(puVar22 + -8) = 0x18027e2a9;
  uVar28 = FUN_1800132b0(&local_250);
  *(undefined8 *)(puVar22 + -8) = 0x18027e2b2;
  FUN_1802880a0(uVar28,local_260);
  *(undefined8 *)(puVar22 + -8) = 0x18027e2c0;
  thunk_FUN_1803d64e0(local_260,0x88);
  *(undefined8 *)(puVar22 + -8) = 0x18027e2ca;
  FUN_180023ca0(&local_210);
  *(undefined8 *)(puVar22 + -8) = 0x18027e2d3;
  FUN_180282750(&local_220);
  *(undefined8 *)(puVar22 + -8) = 0x18027e2e2;
  return;
}



/* ===== 18027e320 FUN_18027e320 ===== */

void FUN_18027e320(longlong param_1)

{
  FUN_180023ca0(param_1 + 0x18);
  FUN_180282750(param_1 + 8);
  return;
}



/* ===== 18027e340 FUN_18027e340 ===== */

void FUN_18027e340(longlong param_1)

{
  FUN_1800132b0(param_1 + 0x18);
  FUN_1802880a0();
  thunk_FUN_1803d64e0(*(undefined8 *)(param_1 + 8),0x88);
  return;
}



/* ===== 18027e370 FUN_18027e370 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18027e370(void)

{
  code *pcVar1;
  bool bVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  char cVar7;
  longlong lVar8;
  char *pcVar9;
  char *pcVar10;
  ulonglong uVar11;
  undefined1 *puVar12;
  undefined4 *puVar13;
  char *pcVar15;
  longlong lVar14;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined8 uStack_e0;
  undefined1 auStack_d8 [8];
  undefined1 auStack_d0 [24];
  undefined1 local_b8;
  char *local_a8;
  longlong local_a0;
  char *local_98;
  undefined8 local_90;
  char *local_88;
  char *pcStack_80;
  longlong local_78;
  char *local_68;
  longlong lStack_60;
  undefined8 local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_d8;
  local_a8 = (char *)((ulonglong)local_a8 & 0xffffffff00000000);
  local_88 = (char *)0x0;
  pcStack_80 = (char *)0x0;
  local_78 = 0;
  local_68 = (char *)0x0;
  lStack_60 = 0;
  local_68 = (char *)FUN_18000fb70(0x20);
  uVar5 = s_scripts_items_items_game_txt_18073ef10._12_4_;
  uVar4 = s_scripts_items_items_game_txt_18073ef10._8_4_;
  uVar16 = s_scripts_items_items_game_txt_18073ef10._4_4_;
  local_58 = 0x1c;
  local_50 = 0x1f;
  *(undefined4 *)local_68 = s_scripts_items_items_game_txt_18073ef10._0_4_;
  *(undefined4 *)(local_68 + 4) = uVar16;
  *(undefined4 *)(local_68 + 8) = uVar4;
  *(undefined4 *)(local_68 + 0xc) = uVar5;
  uVar5 = s_scripts_items_items_game_txt_18073ef10._24_4_;
  uVar4 = s_scripts_items_items_game_txt_18073ef10._20_4_;
  uVar16 = s_scripts_items_items_game_txt_18073ef10._16_4_;
  *(undefined4 *)(local_68 + 0xc) = s_scripts_items_items_game_txt_18073ef10._12_4_;
  *(undefined4 *)(local_68 + 0x10) = uVar16;
  *(undefined4 *)(local_68 + 0x14) = uVar4;
  *(undefined4 *)(local_68 + 0x18) = uVar5;
  local_68[0x1c] = '\0';
  local_a8 = (char *)CONCAT44(local_a8._4_4_,1);
  cVar7 = FUN_180390640(&DAT_180ca1330,&local_68,&local_88,0xffffffff);
  pcVar15 = pcStack_80;
  pcVar9 = local_88;
  if ((cVar7 == '\0') || (local_88 == pcStack_80)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if (local_50 < 0x10) {
LAB_18027e456:
    puVar12 = auStack_d8;
    pcVar15 = pcStack_80;
    pcVar9 = local_88;
    if (bVar2) {
      FUN_1802b2560("[error] skins | items_game.txt not found in vpk");
      puVar12 = auStack_d8;
      goto LAB_18027e68a;
    }
  }
  else {
    uVar11 = local_50 + 1;
    pcVar10 = local_68;
    if (uVar11 < 0x1000) {
LAB_18027e449:
      thunk_FUN_1803d64e0(pcVar10,uVar11);
      goto LAB_18027e456;
    }
    pcVar10 = *(char **)(local_68 + -8);
    if (local_68 + (-8 - (longlong)pcVar10) < (char *)0x20) {
      uVar11 = local_50 + 0x28;
      goto LAB_18027e449;
    }
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar12 = auStack_d0;
  }
  lVar14 = (longlong)pcVar15 - (longlong)pcVar9;
  local_a8 = "item_name";
  local_a0 = 9;
  local_98 = "sticker_kits";
  local_90 = 0xc;
  *(undefined8 *)(puVar12 + -8) = 0x18027e4bb;
  local_68 = pcVar9;
  lStack_60 = lVar14;
  FUN_1802793e0(&local_68,&local_98,&local_a8,&DAT_180cfc988);
  local_68 = "loc_name";
  lStack_60 = 8;
  local_98 = "keychain_definitions";
  local_90 = 0x14;
  *(undefined8 *)(puVar12 + -8) = 0x18027e501;
  local_a8 = pcVar9;
  local_a0 = lVar14;
  FUN_1802793e0(&local_a8,&local_98,&local_68,&DAT_180cfc9a0);
  local_68 = "loc_name";
  lStack_60 = 8;
  local_98 = "music_definitions";
  local_90 = 0x11;
  *(undefined8 *)(puVar12 + -8) = 0x18027e540;
  local_a8 = pcVar9;
  local_a0 = lVar14;
  uVar16 = FUN_1802793e0(&local_a8,&local_98,&local_68,&DAT_180cfc910);
  puVar6 = DAT_180cfc990;
  puVar13 = DAT_180cfc988;
  if (DAT_180cfc988 != DAT_180cfc990) {
    do {
      if (*(longlong *)(puVar13 + 0x16) == 0) break;
      puVar13 = puVar13 + 0x26;
    } while (puVar13 != DAT_180cfc990);
    puVar3 = puVar13;
    if (puVar13 != DAT_180cfc990) {
      while (puVar3 = puVar3 + 0x26, puVar3 != puVar6) {
        if (*(longlong *)(puVar3 + 0x16) != 0) {
          *puVar13 = *puVar3;
          *(undefined8 *)(puVar12 + -8) = 0x18027e598;
          FUN_18002ba60(puVar13 + 2,puVar3 + 2);
          *(undefined8 *)(puVar12 + -8) = 0x18027e5a5;
          FUN_18002ba60(puVar13 + 10,puVar3 + 10);
          *(undefined8 *)(puVar12 + -8) = 0x18027e5b2;
          FUN_18002ba60(puVar13 + 0x12,puVar3 + 0x12);
          puVar13[0x1a] = puVar3[0x1a];
          *(undefined8 *)(puVar12 + -8) = 0x18027e5c5;
          uVar16 = FUN_18002ba60(puVar13 + 0x1c,puVar3 + 0x1c);
          puVar13[0x24] = puVar3[0x24];
          puVar13 = puVar13 + 0x26;
        }
      }
    }
  }
  *(undefined8 *)(puVar12 + -8) = 0x18027e5f3;
  FUN_180282b90(uVar16,&local_a8,puVar13,puVar6);
  *(undefined8 *)(puVar12 + -8) = 0x18027e60b;
  lVar8 = FUN_1802843f0(DAT_180cfc988,DAT_180cfc990,local_b8);
  *(undefined8 *)(puVar12 + -8) = 0x18027e632;
  uVar16 = FUN_1802845c0(extraout_XMM0_Da,lVar8,
                         ((longlong)DAT_180cfc990 - lVar8 >> 3) * -0x79435e50d79435e5);
  *(undefined8 *)(puVar12 + -8) = 0x18027e645;
  FUN_180282b90(uVar16,&local_a8,lVar8,DAT_180cfc990);
  *(undefined8 *)(puVar12 + -8) = 0x18027e656;
  local_68 = pcVar9;
  lStack_60 = lVar14;
  FUN_18027cdc0(&local_68);
  *(undefined8 *)(puVar12 + -8) = 0x18027e667;
  local_68 = pcVar9;
  lStack_60 = lVar14;
  FUN_18027a5b0(&local_68);
  *(undefined8 *)(puVar12 + -8) = 0x18027e678;
  local_68 = pcVar9;
  lStack_60 = lVar14;
  FUN_18027a940(&local_68);
  *(undefined8 *)(puVar12 + -8) = 0x18027e689;
  local_68 = pcVar9;
  lStack_60 = lVar14;
  FUN_18027b7f0(&local_68);
LAB_18027e68a:
  if (local_88 != (char *)0x0) {
    pcVar9 = local_88;
    if ((0xfff < (ulonglong)(local_78 - (longlong)local_88)) &&
       (pcVar9 = *(char **)(local_88 + -8), (char *)0x1f < local_88 + (-8 - (longlong)pcVar9))) {
      pcVar1 = (code *)swi(0x29);
      pcVar9 = (char *)(*pcVar1)(5);
      puVar12 = puVar12 + 8;
    }
    *(undefined8 *)(puVar12 + -8) = 0x18027e6c9;
    thunk_FUN_1803d64e0(pcVar9);
  }
  *(undefined8 *)(puVar12 + -8) = 0x18027e6d5;
  return;
}



/* ===== 18027e6f0 FUN_18027e6f0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18027e6f0(void)

{
  char *_Str;
  ulonglong uVar1;
  code *pcVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  ulonglong uVar9;
  char **ppcVar10;
  undefined4 uVar11;
  undefined1 auStack_e8 [8];
  undefined1 auStack_e0 [24];
  undefined4 local_c8;
  char *local_c0;
  char *local_b8;
  char *local_b0;
  char *local_a8;
  size_t local_a0;
  char *local_98;
  undefined8 local_90;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined1 local_70 [16];
  longlong local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  ulonglong local_48;
  ulonglong local_40;
  
  puVar8 = auStack_e8;
  local_40 = DAT_180919500 ^ (ulonglong)auStack_e8;
  local_c8 = 0;
  local_c0 = "customization/paints/vmats/";
  local_b8 = "gloves/paints/";
  ppcVar10 = &local_c0;
  do {
    _Str = *ppcVar10;
    local_a0 = strlen(_Str);
    local_98 = "vmat_c";
    local_90 = 6;
    local_a8 = _Str;
    FUN_180390930(&DAT_180ca1330,&local_88,&local_98,&local_a8);
    puVar3 = local_80;
    for (puVar7 = local_88; puVar7 != puVar3; puVar7 = puVar7 + 4) {
      puVar5 = puVar7;
      if (0xf < (ulonglong)puVar7[3]) {
        puVar5 = (undefined8 *)*puVar7;
      }
      lVar4 = FUN_1800ba730(puVar5,puVar7[2]);
      uVar1 = puVar7[2];
      uVar6 = lVar4 + 1;
      local_60 = 0;
      uStack_58 = 0;
      local_50 = 0;
      local_48 = 0;
      if (uVar1 < uVar6) {
LAB_18027e8b2:
                    /* WARNING: Subroutine does not return */
        *(undefined **)(puVar8 + -8) = &UNK_18027e8b7;
        FUN_18002a1a0();
      }
      uVar9 = (uVar1 - lVar4) - 8;
      if (uVar1 - uVar6 < uVar9) {
        uVar9 = uVar1 - uVar6;
      }
      puVar5 = puVar7;
      if (0xf < (ulonglong)puVar7[3]) {
        puVar5 = (undefined8 *)*puVar7;
      }
      uVar11 = FUN_1800133a0(&local_60,(longlong)puVar5 + uVar6,uVar9);
      FUN_180282170(uVar11,local_70,&local_60,puVar7);
      if (0xf < local_48) {
        uVar6 = local_48 + 1;
        lVar4 = local_60;
        if (0xfff < uVar6) {
          lVar4 = *(longlong *)(local_60 + -8);
          if (0x1f < (local_60 - lVar4) - 8U) {
            pcVar2 = (code *)swi(0x29);
            (*pcVar2)(5);
            puVar8 = auStack_e0;
            goto LAB_18027e8b2;
          }
          uVar6 = local_48 + 0x28;
        }
        thunk_FUN_1803d64e0(lVar4,uVar6);
      }
    }
    FUN_1800288b0(&local_88);
    ppcVar10 = ppcVar10 + 1;
    if (ppcVar10 == &local_b0) {
      return;
    }
  } while( true );
}



/* ===== 18027e8c0 FUN_18027e8c0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint * FUN_18027e8c0(uint *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
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
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  char cVar26;
  longlong lVar27;
  undefined8 *puVar28;
  int *piVar29;
  int *piVar30;
  ulonglong uVar31;
  longlong lVar32;
  longlong *plVar33;
  int *piVar34;
  longlong lVar35;
  int iVar36;
  undefined8 *puVar37;
  longlong *plVar38;
  uint uVar39;
  int *piVar40;
  undefined1 *puVar41;
  int *piVar42;
  longlong *plVar43;
  ulonglong uVar44;
  float *pfVar45;
  float fVar46;
  uint uVar47;
  uint uVar48;
  uint uVar49;
  uint uVar50;
  uint uVar51;
  uint uVar52;
  uint uVar53;
  uint uVar54;
  uint uVar55;
  uint uVar56;
  uint uVar57;
  uint uVar58;
  uint uVar59;
  uint uVar60;
  uint uVar61;
  uint uVar62;
  uint uVar63;
  uint uVar64;
  uint uVar65;
  uint uVar66;
  uint uVar67;
  uint uVar68;
  uint uVar69;
  uint uVar70;
  uint uVar71;
  uint uVar72;
  uint uVar73;
  uint uVar74;
  uint uVar75;
  uint uVar76;
  uint uVar77;
  uint uVar78;
  uint uVar79;
  uint uVar80;
  undefined1 auStack_338 [8];
  undefined1 auStack_330 [24];
  undefined8 local_318;
  undefined8 local_308;
  float fStack_300;
  float fStack_2fc;
  longlong local_2f8;
  longlong local_2f0 [3];
  undefined4 local_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  uint local_238;
  uint uStack_234;
  uint uStack_230;
  uint uStack_22c;
  undefined4 uStack_228;
  undefined8 uStack_224;
  uint local_218;
  uint uStack_214;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  uint local_190;
  float local_18c;
  uint uStack_188;
  uint uStack_184;
  uint uStack_180;
  uint local_17c;
  undefined4 uStack_178;
  undefined8 uStack_174;
  undefined8 local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined1 local_154;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  longlong *plStack_110;
  longlong *local_108;
  undefined8 uStack_100;
  ulonglong local_f8;
  
  local_f8 = DAT_180919500 ^ (ulonglong)auStack_338;
  local_218 = local_218 & 0xffffff00;
  uStack_214 = 0;
  uStack_210 = 0;
  uStack_208 = 0;
  uStack_200 = 0;
  uStack_1f8 = 0;
  local_1f0 = 0;
  uStack_1e8 = 0;
  local_1e0 = 0;
  uStack_1d8 = 0;
  local_1d0 = 0;
  uStack_1c8 = 0;
  local_1c0 = 0;
  uStack_1b8 = 0;
  local_1b0 = 0;
  uStack_1a8 = 0;
  local_1a0 = 0;
  uStack_198 = 0;
  local_190 = 0;
  local_18c = 0.0;
  uStack_188 = 0;
  uStack_184 = 0;
  uStack_180 = 0;
  local_17c = 0;
  uStack_178 = 0;
  uStack_174 = 0;
  puVar28 = (undefined8 *)(param_2 + 8);
  if (*(ulonglong *)(param_2 + 0x20) < 0x10) {
    puVar37 = puVar28;
  }
  else {
    puVar37 = (undefined8 *)*puVar28;
  }
  uVar31 = 0;
  uVar44 = 0xcbf29ce484222325;
  if (*(ulonglong *)(param_2 + 0x18) != 0) {
    do {
      uVar44 = (uVar44 ^ *(byte *)((longlong)puVar37 + uVar31)) * 0x100000001b3;
      uVar31 = uVar31 + 1;
    } while (uVar31 < *(ulonglong *)(param_2 + 0x18));
  }
  local_308 = param_1;
  lVar27 = FUN_1800268a0(&DAT_180ca12f0,&local_2d8,puVar28,uVar44);
  lVar27 = *(longlong *)(lVar27 + 8);
  puVar41 = auStack_338;
  if ((lVar27 == 0) || (puVar41 = auStack_338, lVar27 == DAT_180ca12f8)) {
LAB_18027f365:
    *(ulonglong *)param_1 = CONCAT44(uStack_214,local_218);
    *(undefined8 *)(param_1 + 2) = uStack_210;
    *(undefined8 *)(param_1 + 4) = uStack_208;
    *(undefined8 *)(param_1 + 6) = uStack_200;
    *(undefined8 *)(param_1 + 8) = uStack_1f8;
    *(undefined8 *)(param_1 + 10) = local_1f0;
    *(undefined8 *)(param_1 + 0xc) = uStack_1e8;
    *(undefined8 *)(param_1 + 0xe) = local_1e0;
    *(undefined8 *)(param_1 + 0x10) = uStack_1d8;
    *(undefined8 *)(param_1 + 0x12) = local_1d0;
    *(undefined8 *)(param_1 + 0x14) = uStack_1c8;
    *(undefined8 *)(param_1 + 0x16) = local_1c0;
    *(undefined8 *)(param_1 + 0x18) = uStack_1b8;
    *(undefined8 *)(param_1 + 0x1a) = local_1b0;
    *(undefined8 *)(param_1 + 0x1c) = uStack_1a8;
    *(undefined8 *)(param_1 + 0x1e) = local_1a0;
    *(undefined8 *)(param_1 + 0x20) = uStack_198;
    *(ulonglong *)(param_1 + 0x22) = CONCAT44(local_18c,local_190);
    *(ulonglong *)(param_1 + 0x24) = CONCAT44(uStack_184,uStack_188);
    *(ulonglong *)(param_1 + 0x26) = CONCAT44(local_17c,uStack_180);
  }
  else {
    local_2f0[0] = 0;
    local_2f0[1] = 0;
    local_2f0[2] = 0;
    plVar33 = (longlong *)(lVar27 + 0x30);
    cVar26 = FUN_180390640(&DAT_180ca1330,plVar33,local_2f0,0xffffffff);
    if (cVar26 == '\0') {
      local_17c = 0;
      uStack_178 = 0;
      uStack_174 = 0;
      uVar39 = local_218;
      uVar47 = uStack_214;
      uVar48 = (uint)uStack_210;
      uVar49 = uStack_210._4_4_;
      uVar50 = (uint)uStack_208;
      uVar51 = uStack_208._4_4_;
      uVar52 = (uint)uStack_200;
      uVar53 = uStack_200._4_4_;
      uVar54 = (uint)uStack_1f8;
      uVar55 = uStack_1f8._4_4_;
      uVar56 = (uint)local_1f0;
      uVar57 = local_1f0._4_4_;
      uVar58 = (uint)uStack_1e8;
      uVar59 = uStack_1e8._4_4_;
      uVar60 = (uint)local_1e0;
      uVar61 = local_1e0._4_4_;
      uVar62 = (uint)uStack_1d8;
      uVar63 = uStack_1d8._4_4_;
      uVar64 = (uint)local_1d0;
      uVar65 = local_1d0._4_4_;
      uVar66 = (uint)uStack_1c8;
      uVar67 = uStack_1c8._4_4_;
      uVar68 = (uint)local_1c0;
      uVar69 = local_1c0._4_4_;
      uVar70 = (uint)uStack_1b8;
      uVar71 = uStack_1b8._4_4_;
      uVar72 = (uint)local_1b0;
      uVar73 = local_1b0._4_4_;
      uVar74 = (uint)uStack_1a8;
      uVar75 = uStack_1a8._4_4_;
      uVar76 = (uint)local_1a0;
      uVar77 = local_1a0._4_4_;
      uVar78 = (uint)uStack_198;
      uVar79 = uStack_198._4_4_;
      uVar80 = local_190;
      fVar46 = local_18c;
LAB_18027ea83:
      if (local_2f0[0] != 0) {
        uVar31 = local_2f0[2] - local_2f0[0];
        lVar27 = local_2f0[0];
        if (0xfff < uVar31) {
          lVar27 = *(longlong *)(local_2f0[0] + -8);
          if (0x1f < (local_2f0[0] - lVar27) - 8U) goto LAB_18027f35e;
          uVar31 = uVar31 + 0x27;
        }
        thunk_FUN_1803d64e0(lVar27,uVar31);
      }
    }
    else {
      local_158 = 0;
      local_154 = 0;
      local_150 = 0;
      uStack_140 = 0;
      local_138 = 0;
      local_130 = 0xf;
      local_148 = 0;
      local_128 = 0;
      uStack_120 = 0;
      local_118 = 0;
      plStack_110 = (longlong *)0x0;
      local_108 = (longlong *)0x0;
      uStack_100 = 0;
      cVar26 = FUN_18028da00(local_2f0,&local_158);
      fVar46 = local_18c;
      uVar80 = local_190;
      uVar47 = uStack_214;
      uVar39 = local_218;
      uVar48 = (uint)uStack_210;
      uVar49 = uStack_210._4_4_;
      uVar50 = (uint)uStack_208;
      uVar51 = uStack_208._4_4_;
      uVar52 = (uint)uStack_200;
      uVar53 = uStack_200._4_4_;
      uVar54 = (uint)uStack_1f8;
      uVar55 = uStack_1f8._4_4_;
      uVar56 = (uint)local_1f0;
      uVar57 = local_1f0._4_4_;
      uVar58 = (uint)uStack_1e8;
      uVar59 = uStack_1e8._4_4_;
      uVar60 = (uint)local_1e0;
      uVar61 = local_1e0._4_4_;
      uVar62 = (uint)uStack_1d8;
      uVar63 = uStack_1d8._4_4_;
      uVar64 = (uint)local_1d0;
      uVar65 = local_1d0._4_4_;
      uVar66 = (uint)uStack_1c8;
      uVar67 = uStack_1c8._4_4_;
      uVar68 = (uint)local_1c0;
      uVar69 = local_1c0._4_4_;
      uVar70 = (uint)uStack_1b8;
      uVar71 = uStack_1b8._4_4_;
      uVar72 = (uint)local_1b0;
      uVar73 = local_1b0._4_4_;
      uVar74 = (uint)uStack_1a8;
      uVar75 = uStack_1a8._4_4_;
      uVar76 = (uint)local_1a0;
      uVar77 = local_1a0._4_4_;
      uVar78 = (uint)uStack_198;
      uVar79 = uStack_198._4_4_;
      plVar43 = plStack_110;
      if (cVar26 == '\0') {
        local_17c = 0;
        uStack_178 = 0;
        uStack_174 = 0;
        FUN_1801a6920(&plStack_110);
        FUN_1801a69c0(&local_128);
        FUN_18000f890(&local_148);
        goto LAB_18027ea83;
      }
      for (; plVar43 != local_108; plVar43 = plVar43 + 0x10) {
        if ((ulonglong)plVar43[3] < 0x10) {
          plVar38 = plVar43;
        }
        else {
          plVar38 = (longlong *)*plVar43;
        }
        if (plVar43[2] == 0xe) {
          lVar32 = 0x726f746365765f6d - *plVar38;
          if ((lVar32 == 0) &&
             (lVar32 = 0x61726150 - (ulonglong)*(uint *)(plVar38 + 1), lVar32 == 0)) {
            lVar32 = 0x736d - (ulonglong)*(ushort *)((longlong)plVar38 + 0xc);
          }
          if (lVar32 == 0) {
            if ((plVar43 + 4 != (longlong *)0x0) && ((int)plVar43[4] == 4)) {
              if (0xf < *(ulonglong *)(lVar27 + 0x48)) {
                plVar33 = (longlong *)*plVar33;
              }
              local_318 = 0xe;
              lVar27 = FUN_180068d80(plVar33,*(undefined8 *)(lVar27 + 0x40),0,"gloves/paints/");
              puVar41 = auStack_338;
              local_190 = 4;
              if (lVar27 != -1) {
                local_190 = 8;
              }
              iVar36 = 0;
              do {
                lVar32 = (longlong)iVar36;
                if (lVar27 == -1) {
                  local_2d8 = *(undefined4 *)(&DAT_1806501b0 + lVar32 * 4);
                  uStack_2d4 = local_2d8;
                  uStack_2d0 = local_2d8;
                  uStack_2cc = local_2d8;
                  puVar28 = (undefined8 *)&local_2d8;
                }
                else {
                  local_168 = CONCAT44((&DAT_180650144)[lVar32 * 3],(&DAT_180650140)[lVar32 * 3]);
                  uStack_160 = (&DAT_180650148)[lVar32 * 3];
                  uStack_15c = 0x3f800000;
                  puVar28 = &local_168;
                }
                uVar5 = puVar28[1];
                (&uStack_210)[lVar32 * 2] = *puVar28;
                *(undefined8 *)(&local_18c + lVar32 * 4 + -0x1f) = uVar5;
                iVar36 = iVar36 + 1;
              } while (iVar36 < (int)local_190);
              local_168 = 0;
              lVar32 = plVar43[10];
              lVar1 = plVar43[0xb];
              local_2f8 = lVar27;
              if (lVar32 != lVar1) {
                uVar39 = local_190;
                do {
                  piVar34 = *(int **)(lVar32 + 0x48);
                  for (piVar40 = piVar34; piVar40 != *(int **)(lVar32 + 0x50);
                      piVar40 = piVar40 + 0x20) {
                    if (*(ulonglong *)(piVar40 + 6) < 0x10) {
                      piVar29 = piVar40;
                    }
                    else {
                      piVar29 = *(int **)piVar40;
                    }
                    if (*(longlong *)(piVar40 + 4) == 6) {
                      iVar36 = 0x616e5f6d - *piVar29;
                      if (iVar36 == 0) {
                        iVar36 = 0x656d - (uint)*(ushort *)(piVar29 + 1);
                      }
                      if (iVar36 == 0) {
                        piVar40 = piVar40 + 8;
                        piVar29 = piVar40;
                        piVar42 = piVar40;
                        goto LAB_18027ee81;
                      }
                    }
                  }
                  piVar42 = (int *)0x0;
                  piVar29 = (int *)0x0;
                  piVar40 = (int *)0x0;
                  while( true ) {
                    if (piVar34 == *(int **)(lVar32 + 0x50)) break;
LAB_18027ee81:
                    if (*(ulonglong *)(piVar34 + 6) < 0x10) {
                      piVar30 = piVar34;
                    }
                    else {
                      piVar30 = *(int **)piVar34;
                    }
                    if (*(longlong *)(piVar34 + 4) == 7) {
                      iVar36 = 0x61765f6d - *piVar30;
                      if ((iVar36 == 0) &&
                         (iVar36 = 0x756c - (uint)*(ushort *)(piVar30 + 1), iVar36 == 0)) {
                        iVar36 = 0x65 - (uint)*(byte *)((longlong)piVar30 + 6);
                      }
                      if (iVar36 == 0) {
                        piVar30 = piVar34 + 8;
                        plVar33 = (longlong *)(piVar34 + 0x16);
                        plVar43 = (longlong *)(piVar34 + 0x14);
                        goto LAB_18027eee1;
                      }
                    }
                    piVar34 = piVar34 + 0x20;
                  }
                  piVar30 = (int *)0x0;
                  plVar33 = (longlong *)&DAT_00000038;
                  plVar43 = (longlong *)&DAT_00000030;
LAB_18027eee1:
                  if (piVar40 != (int *)0x0) {
                    if (piVar30 != (int *)0x0) {
                      lVar2 = *plVar43;
                      if (3 < (ulonglong)((*plVar33 - lVar2 >> 5) * -0x5555555555555555)) {
                        lVar35 = *(longlong *)(piVar42 + 8);
                        if ((lVar35 == 0xd) == (lVar27 != -1)) {
                          piVar40 = piVar40 + 4;
                          if (lVar35 == 0xd) {
                            uVar31 = *(ulonglong *)(piVar29 + 10);
                            piVar34 = piVar40;
                            if (0xf < uVar31) {
                              piVar34 = *(int **)piVar40;
                            }
                            iVar36 = memcmp(piVar34,"g_vColorTint",0xc);
                            lVar27 = local_2f8;
                            if (iVar36 == 0) {
                              if (0xf < uVar31) {
                                piVar40 = *(int **)piVar40;
                              }
                              if ((byte)((char)piVar40[3] - 0x31U) < 8) {
                                iVar36 = (char)piVar40[3] + -0x31;
                              }
                              else {
LAB_18027efe1:
                                iVar36 = -1;
                              }
LAB_18027efe6:
                              lVar27 = local_2f8;
                              if ((-1 < iVar36) && (iVar36 < (int)uVar39)) {
                                lVar35 = (longlong)iVar36;
                                *(float *)(&uStack_210 + lVar35 * 2) = (float)*(double *)(lVar2 + 8)
                                ;
                                (&local_18c)[lVar35 * 4 + -0x20] = (float)*(double *)(lVar2 + 0x68);
                                (&local_18c)[lVar35 * 4 + -0x1f] = (float)*(double *)(lVar2 + 200);
                                (&local_18c)[lVar35 * 4 + -0x1e] = (float)*(double *)(lVar2 + 0x128)
                                ;
                                if (local_2f8 != -1) {
                                  (&local_18c)[lVar35 * 4 + -0x1e] = 1.0;
                                }
                                *(undefined1 *)((longlong)&local_168 + lVar35) = 1;
                                uVar39 = local_190;
                              }
                            }
                          }
                          else if (lVar35 == 9) {
                            uVar31 = *(ulonglong *)(piVar29 + 10);
                            piVar34 = piVar40;
                            if (0xf < uVar31) {
                              piVar34 = *(int **)piVar40;
                            }
                            iVar36 = memcmp(piVar34,"g_vColor",8);
                            lVar27 = local_2f8;
                            if (iVar36 == 0) {
                              if (0xf < uVar31) {
                                piVar40 = *(int **)piVar40;
                              }
                              iVar36 = (char)piVar40[2] + -0x30;
                              if (3 < (byte)((char)piVar40[2] - 0x30U)) goto LAB_18027efe1;
                              goto LAB_18027efe6;
                            }
                          }
                        }
                      }
                    }
                  }
                  lVar32 = lVar32 + 0x60;
                } while (lVar32 != lVar1);
                param_1 = local_308;
              }
              uVar24 = uStack_198;
              uVar23 = local_1a0;
              uVar22 = uStack_1a8;
              uVar21 = local_1b0;
              uVar20 = uStack_1b8;
              uVar19 = local_1c0;
              uVar18 = uStack_1c8;
              uVar17 = local_1d0;
              uVar16 = uStack_1d8;
              uVar15 = local_1e0;
              uVar14 = uStack_1e8;
              uVar13 = local_1f0;
              uVar12 = uStack_1f8;
              uVar11 = uStack_200;
              uVar10 = uStack_208;
              uVar5 = uStack_210;
              fVar46 = 0.0;
              uVar39 = uStack_214;
              if (0 < (int)local_190) {
                do {
                  lVar32 = (longlong)(int)fVar46;
                  if (*(char *)((longlong)&local_168 + lVar32) != '\0') {
                    pfVar45 = (float *)(&uStack_210 + lVar32 * 2);
                    if (lVar27 == -1) {
                      fStack_2fc = *(float *)(&DAT_1806501b0 + lVar32 * 4);
                      local_308 = (uint *)CONCAT44(fStack_2fc,fStack_2fc);
                      fStack_300 = fStack_2fc;
                      if ((*pfVar45 == 0.0) && ((&local_18c)[lVar32 * 4 + -0x20] == 0.0)) {
                        bVar9 = true;
                      }
                      else {
                        bVar9 = false;
                      }
                      if ((*pfVar45 == fStack_2fc) &&
                         ((&local_18c)[lVar32 * 4 + -0x20] == fStack_2fc)) {
                        bVar4 = true;
                      }
                      else {
                        bVar4 = false;
                      }
                      if ((!bVar9) || ((&local_18c)[lVar32 * 4 + -0x1f] != 0.0)) {
                        bVar9 = false;
                      }
                      else {
                        bVar9 = true;
                      }
                      if ((!bVar4) || ((&local_18c)[lVar32 * 4 + -0x1f] != fStack_2fc)) {
                        bVar4 = false;
                      }
                      else {
                        bVar4 = true;
                      }
                      if ((!bVar9) || ((&local_18c)[lVar32 * 4 + -0x1e] != 0.0)) {
                        bVar9 = false;
                      }
                      else {
                        bVar9 = true;
                      }
                      if ((!bVar4) || ((&local_18c)[lVar32 * 4 + -0x1e] != fStack_2fc)) {
                        bVar4 = false;
                      }
                      else {
                        bVar4 = true;
                      }
                    }
                    else {
                      local_308 = (uint *)CONCAT44((&DAT_180650144)[lVar32 * 3],
                                                   (&DAT_180650140)[lVar32 * 3]);
                      fStack_300 = (float)(&DAT_180650148)[lVar32 * 3];
                      fStack_2fc = 1.0;
                      bVar9 = true;
                      bVar4 = true;
                      iVar36 = 0;
                      do {
                        lVar27 = (longlong)iVar36;
                        if ((!bVar9) || (pfVar45[lVar27] != 0.0)) {
                          bVar9 = false;
                        }
                        else {
                          bVar9 = true;
                        }
                        if ((!bVar4) ||
                           (pfVar45[lVar27] != *(float *)((longlong)local_2f0 + lVar27 * 4 + -0x18))
                           ) {
                          bVar4 = false;
                        }
                        else {
                          bVar4 = true;
                        }
                        iVar36 = iVar36 + 1;
                      } while (iVar36 < 3);
                    }
                    if (!(bool)(bVar9 | bVar4)) {
                      (&local_18c)[(int)uVar39] = fVar46;
                      uVar39 = uStack_214 + 1;
                      uStack_214 = uVar39;
                    }
                  }
                  fVar46 = (float)((int)fVar46 + 1);
                  lVar27 = local_2f8;
                } while ((int)fVar46 < (int)local_190);
              }
              uVar25 = uStack_174;
              local_218 = CONCAT31(local_218._1_3_,0 < (int)uVar39);
              uVar6 = CONCAT44(uStack_214,local_218);
              uVar7 = CONCAT44(local_18c,local_190);
              local_238 = uStack_188;
              uStack_234 = uStack_184;
              uStack_230 = uStack_180;
              uVar8 = CONCAT44(uStack_178,local_17c);
              uStack_22c = local_17c;
              uStack_228 = uStack_178;
              uStack_224 = uStack_174;
              FUN_1801a6920(&plStack_110);
              FUN_1801a69c0(&local_128);
              FUN_18000f890(&local_148);
              FUN_180081c30(local_2f0);
              *(undefined8 *)param_1 = uVar6;
              *(undefined8 *)(param_1 + 2) = uVar5;
              *(undefined8 *)(param_1 + 4) = uVar10;
              *(undefined8 *)(param_1 + 6) = uVar11;
              *(undefined8 *)(param_1 + 8) = uVar12;
              *(undefined8 *)(param_1 + 10) = uVar13;
              *(undefined8 *)(param_1 + 0xc) = uVar14;
              *(undefined8 *)(param_1 + 0xe) = uVar15;
              *(undefined8 *)(param_1 + 0x10) = uVar16;
              *(undefined8 *)(param_1 + 0x12) = uVar17;
              *(undefined8 *)(param_1 + 0x14) = uVar18;
              *(undefined8 *)(param_1 + 0x16) = uVar19;
              *(undefined8 *)(param_1 + 0x18) = uVar20;
              *(undefined8 *)(param_1 + 0x1a) = uVar21;
              *(undefined8 *)(param_1 + 0x1c) = uVar22;
              *(undefined8 *)(param_1 + 0x1e) = uVar23;
              *(undefined8 *)(param_1 + 0x20) = uVar24;
              *(undefined8 *)(param_1 + 0x22) = uVar7;
              *(ulonglong *)(param_1 + 0x24) = CONCAT44(uStack_234,local_238);
              *(ulonglong *)(param_1 + 0x26) = CONCAT44(uStack_22c,uStack_230);
              *(undefined8 *)(param_1 + 0x27) = uVar8;
              *(undefined8 *)(param_1 + 0x29) = uVar25;
              goto LAB_18027f3d9;
            }
            break;
          }
        }
      }
      local_238 = uStack_188;
      uStack_234 = uStack_184;
      uStack_230 = uStack_180;
      uStack_22c = 0;
      uStack_228 = 0;
      uStack_224 = 0;
      FUN_1801a6920(&plStack_110);
      FUN_1801a69c0(&local_128);
      FUN_18000f890(&local_148);
      if (local_2f0[0] != 0) {
        uVar31 = local_2f0[2] - local_2f0[0];
        lVar27 = local_2f0[0];
        if (uVar31 < 0x1000) {
LAB_18027ecf6:
          thunk_FUN_1803d64e0(lVar27,uVar31);
          goto LAB_18027ecfb;
        }
        lVar27 = *(longlong *)(local_2f0[0] + -8);
        if ((local_2f0[0] - lVar27) - 8U < 0x20) {
          uVar31 = uVar31 + 0x27;
          goto LAB_18027ecf6;
        }
LAB_18027f35e:
        pcVar3 = (code *)swi(0x29);
        (*pcVar3)(5);
        puVar41 = auStack_330;
        goto LAB_18027f365;
      }
LAB_18027ecfb:
      uStack_188 = local_238;
      uStack_184 = uStack_234;
      uStack_180 = uStack_230;
      local_17c = uStack_22c;
    }
    puVar41 = auStack_338;
    *param_1 = uVar39;
    param_1[1] = uVar47;
    param_1[2] = uVar48;
    param_1[3] = uVar49;
    param_1[4] = uVar50;
    param_1[5] = uVar51;
    param_1[6] = uVar52;
    param_1[7] = uVar53;
    param_1[8] = uVar54;
    param_1[9] = uVar55;
    param_1[10] = uVar56;
    param_1[0xb] = uVar57;
    param_1[0xc] = uVar58;
    param_1[0xd] = uVar59;
    param_1[0xe] = uVar60;
    param_1[0xf] = uVar61;
    param_1[0x10] = uVar62;
    param_1[0x11] = uVar63;
    param_1[0x12] = uVar64;
    param_1[0x13] = uVar65;
    param_1[0x14] = uVar66;
    param_1[0x15] = uVar67;
    param_1[0x16] = uVar68;
    param_1[0x17] = uVar69;
    param_1[0x18] = uVar70;
    param_1[0x19] = uVar71;
    param_1[0x1a] = uVar72;
    param_1[0x1b] = uVar73;
    param_1[0x1c] = uVar74;
    param_1[0x1d] = uVar75;
    param_1[0x1e] = uVar76;
    param_1[0x1f] = uVar77;
    param_1[0x20] = uVar78;
    param_1[0x21] = uVar79;
    param_1[0x22] = uVar80;
    param_1[0x23] = (uint)fVar46;
    param_1[0x24] = uStack_188;
    param_1[0x25] = uStack_184;
    param_1[0x26] = uStack_180;
    param_1[0x27] = local_17c;
  }
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
LAB_18027f3d9:
  *(undefined8 *)(puVar41 + -8) = 0x18027f3eb;
  return param_1;
}



/* ===== 18027f440 FUN_18027f440 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined * FUN_18027f440(void)

{
  undefined8 *puVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined *puVar10;
  HMODULE hModule;
  FARPROC pFVar11;
  longlong *plVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  int iVar15;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  longlong local_c0;
  undefined1 local_b8;
  char *local_a8;
  undefined8 local_a0;
  undefined1 local_98 [32];
  char local_78;
  undefined1 local_70 [32];
  undefined1 local_50 [32];
  ulonglong local_30;
  
  local_30 = DAT_180919500 ^ (ulonglong)auStack_f8;
  bVar3 = false;
  bVar2 = false;
  local_a8 = (char *)((ulonglong)local_a8 & 0xffffffff00000000);
  iVar15 = 0;
  do {
    lVar8 = DAT_180961e00;
    if ((((DAT_180961e00 != 0) && (cVar5 = FUN_180011220(DAT_180961e00 + 4), cVar5 == 'H')) &&
        (cVar5 = FUN_180011220(lVar8 + 5), cVar5 == -0x75)) &&
       (cVar5 = FUN_180011220(lVar8 + 6), cVar5 == '\x05')) {
      iVar6 = FUN_180011200(lVar8 + 7);
      lVar8 = FUN_18000f3a0((longlong)iVar6 + 0xb + lVar8);
      if (((lVar8 != 0) && (lVar8 = FUN_18000f3a0(lVar8 + 8), lVar8 != 0)) &&
         ((iVar6 = FUN_180011200(lVar8 + 0x128), iVar6 - 1U < 20000 &&
          ((lVar9 = FUN_18000f3a0(lVar8 + 0x130), lVar9 != 0 &&
           (iVar6 = FUN_180277e90(lVar8), iVar6 != 0)))))) {
        LOCK();
        PTR_DAT_1809f3760 = s_parsing_schema_18073f0f8;
        UNLOCK();
        hModule = GetModuleHandleA("localize.dll");
        if ((hModule == (HMODULE)0x0) ||
           (pFVar11 = GetProcAddress(hModule,"CreateInterface"), pFVar11 == (FARPROC)0x0)) {
          DAT_180cfc838 = 0;
LAB_18027f5b0:
          FUN_1802b2560("[error] skins | Localize_001 not found, using internal names");
        }
        else {
          DAT_180cfc838 = (*pFVar11)("Localize_001",0);
          if (DAT_180cfc838 == 0) goto LAB_18027f5b0;
        }
        FUN_180278010(lVar8);
        FUN_1802785c0(lVar8);
        FUN_180282ec0(DAT_180cfc958,DAT_180cfc960,
                      (DAT_180cfc960 - DAT_180cfc958 >> 4) * -0x71c71c71c71c71c7,local_b8);
        FUN_180283250(DAT_180cfc850,DAT_180cfc858,
                      (DAT_180cfc858 - DAT_180cfc850 >> 3) * -0x79435e50d79435e5,local_b8);
        uVar14 = 0;
        if ((DAT_180cfc960 - DAT_180cfc958 >> 4) * -0x71c71c71c71c71c7 != 0) {
          do {
            plVar12 = (longlong *)
                      FUN_1801d4a30(&DAT_180ca1460,&local_a8,uVar14 * 0x90 + DAT_180cfc958);
            *(ulonglong *)(*plVar12 + 0x18) = uVar14;
            uVar14 = uVar14 + 1;
          } while (uVar14 < (ulonglong)((DAT_180cfc960 - DAT_180cfc958 >> 4) * -0x71c71c71c71c71c7))
          ;
        }
        uVar14 = 0;
        if ((DAT_180cfc858 - DAT_180cfc850 >> 3) * -0x79435e50d79435e5 != 0) {
          do {
            plVar12 = (longlong *)
                      FUN_1801d4a30(&DAT_180ca14a0,&local_a8,uVar14 * 0x98 + DAT_180cfc850);
            *(ulonglong *)(*plVar12 + 0x18) = uVar14;
            uVar14 = uVar14 + 1;
          } while (uVar14 < (ulonglong)((DAT_180cfc858 - DAT_180cfc850 >> 3) * -0x79435e50d79435e5))
          ;
        }
        LOCK();
        PTR_DAT_1809f3760 = s_reading_vpk_18073f130;
        UNLOCK();
        FUN_180390a90(local_98);
        if (local_78 != '\0') {
          local_a8 = "pak01_dir.vpk";
          local_a0 = 0xd;
          uVar7 = FUN_1804e5000();
          FUN_180013d60(local_70,uVar7,&local_a8);
          local_a8._0_4_ = 0xd;
          uVar13 = FUN_180014f50(local_50,local_98,local_70);
          bVar3 = true;
          bVar2 = true;
          local_a8 = (char *)CONCAT44(local_a8._4_4_,0xf);
          cVar5 = FUN_18038fa80(&DAT_180ca1330,uVar13);
          if (cVar5 != '\0') {
            bVar4 = true;
            goto LAB_18027f79a;
          }
        }
        bVar4 = false;
LAB_18027f79a:
        if (bVar2) {
          FUN_1800289e0(local_50);
        }
        if (bVar3) {
          FUN_1800289e0(local_70);
        }
        if (bVar4) {
          FUN_180278ac0();
          FUN_18027e370();
          FUN_18027e6f0();
        }
        else {
          FUN_1802b2560("[error] skins | pak01_dir.vpk not opened");
        }
        lVar8 = 0;
        for (puVar1 = (undefined8 *)*DAT_180cfc8d8; puVar1 != DAT_180cfc8d8;
            puVar1 = (undefined8 *)*puVar1) {
          lVar8 = lVar8 + ((longlong)(puVar1[4] - puVar1[3]) >> 2);
        }
        FUN_1802b2560("[skins] %zu weapon/kit pairs for %zu weapons",lVar8,DAT_180cfc8e0);
        local_c0 = (DAT_180cfc978 - DAT_180cfc970 >> 4) * 0x6db6db6db6db6db7;
        local_c8 = (DAT_180cfc918 - DAT_180cfc910 >> 3) * -0x79435e50d79435e5;
        local_d0 = (DAT_180cfc8b8 - DAT_180cfc8b0 >> 3) * -0x79435e50d79435e5;
        local_d8 = (DAT_180cfc9a8 - DAT_180cfc9a0 >> 3) * -0x79435e50d79435e5;
        FUN_1802b2560("[skins] %zu items, %zu paint kits, %zu stickers, %zu keychains, %zu patches, %zu music kits, %zu medals"
                      ,(DAT_180cfc960 - DAT_180cfc958 >> 4) * -0x71c71c71c71c71c7,
                      (DAT_180cfc858 - DAT_180cfc850 >> 3) * -0x79435e50d79435e5,
                      (DAT_180cfc990 - DAT_180cfc988 >> 3) * -0x79435e50d79435e5);
        FUN_180275440();
        puVar10 = PTR_DAT_1809f3760;
        LOCK();
        PTR_DAT_1809f3760 = s_ready_1806f14fc;
        UNLOCK();
        LOCK();
        DAT_180ccfeda = 1;
        UNLOCK();
        if (local_78 == '\0') {
          DAT_180ccfeda = 1;
          return puVar10;
        }
        puVar10 = (undefined *)FUN_1800289e0(local_98);
        return puVar10;
      }
    }
    Sleep(0xfa);
    iVar15 = iVar15 + 0xfa;
    if (59999 < iVar15) {
      LOCK();
      PTR_DAT_1809f3760 = s_item_schema_not_found_18073efa0;
      UNLOCK();
      puVar10 = (undefined *)FUN_1802b2560("[error] skins | item schema not ready");
      return puVar10;
    }
  } while( true );
}



/* ===== 18027f930 FUN_18027f930 ===== */

undefined * FUN_18027f930(uint param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong *puVar4;
  longlong *plVar5;
  ulonglong uVar6;
  uint local_1b8 [4];
  ulonglong local_1a8;
  ulonglong uStack_1a0;
  ulonglong local_198;
  ulonglong uStack_190;
  ulonglong local_188;
  ulonglong uStack_180;
  ulonglong local_178;
  ulonglong uStack_170;
  ulonglong local_168;
  ulonglong uStack_160;
  ulonglong local_158;
  ulonglong uStack_150;
  ulonglong local_148;
  ulonglong uStack_140;
  ulonglong local_138;
  ulonglong uStack_130;
  ulonglong local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined *local_f8;
  undefined1 local_f0 [16];
  undefined1 local_e0 [192];
  
  if (DAT_180ccfeda == '\0') {
    return &DAT_180650090;
  }
  local_f8 = &DAT_1809f3710;
  local_1b8[0] = param_1;
  iVar2 = FUN_1804e4d70(&DAT_1809f3710);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809f375c == 0x7fffffff) {
    DAT_1809f375c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  uVar6 = (((((ulonglong)(byte)param_1 ^ 0xcbf29ce484222325) * 0x100000001b3 ^
            (ulonglong)(param_1 >> 8 & 0xff)) * 0x100000001b3 ^ (ulonglong)(param_1 >> 0x10 & 0xff))
           * 0x100000001b3 ^ (ulonglong)(param_1 >> 0x18)) * 0x100000001b3 & DAT_180cfc8a0;
  lVar3 = *(longlong *)(DAT_180cfc888 + 8 + uVar6 * 0x10);
  if (lVar3 != DAT_180cfc878) {
    uVar1 = *(uint *)(lVar3 + 0x10);
    while (param_1 != uVar1) {
      if (lVar3 == *(longlong *)(DAT_180cfc888 + uVar6 * 0x10)) goto LAB_18027fa23;
      lVar3 = *(longlong *)(lVar3 + 8);
      uVar1 = *(uint *)(lVar3 + 0x10);
    }
    if (lVar3 != 0) goto LAB_18027fa26;
  }
LAB_18027fa23:
  lVar3 = DAT_180cfc878;
LAB_18027fa26:
  if (lVar3 == DAT_180cfc878) {
    lVar3 = FUN_180280d30(param_1);
    if (lVar3 == 0) {
      local_1a8 = (local_1a8 >> 8 & 0xffffff) << 8;
      uStack_10c = 0;
      uStack_108 = 0;
      uStack_104 = 0;
      uStack_100 = 0;
      uStack_1a0 = 0;
      local_198 = 0;
      uStack_190 = 0;
      local_188 = 0;
      uStack_180 = 0;
      local_178 = 0;
      uStack_170 = 0;
      local_168 = 0;
      uStack_160 = 0;
      local_158 = 0;
      uStack_150 = 0;
      local_148 = 0;
      uStack_140 = 0;
      local_138 = 0;
      uStack_130 = 0;
      local_128 = 0;
      uStack_120 = 0;
      uStack_11c = 0;
      local_118 = 0;
      uStack_114 = 0;
      uStack_110 = 0;
    }
    else {
      puVar4 = (ulonglong *)FUN_18027e8c0(local_e0,lVar3);
      local_1a8 = *puVar4;
      uStack_1a0 = puVar4[1];
      local_198 = puVar4[2];
      uStack_190 = puVar4[3];
      local_188 = puVar4[4];
      uStack_180 = puVar4[5];
      local_178 = puVar4[6];
      uStack_170 = puVar4[7];
      local_168 = puVar4[8];
      uStack_160 = puVar4[9];
      local_158 = puVar4[10];
      uStack_150 = puVar4[0xb];
      local_148 = puVar4[0xc];
      uStack_140 = puVar4[0xd];
      local_138 = puVar4[0xe];
      uStack_130 = puVar4[0xf];
      local_128 = puVar4[0x10];
      uStack_120 = (undefined4)puVar4[0x11];
      uStack_11c = (undefined4)(puVar4[0x11] >> 0x20);
      local_118 = (undefined4)puVar4[0x12];
      uStack_114 = (undefined4)(puVar4[0x12] >> 0x20);
      uStack_110 = (undefined4)puVar4[0x13];
      uStack_10c = *(undefined4 *)((longlong)puVar4 + 0x9c);
      uStack_108 = (undefined4)puVar4[0x14];
      uStack_104 = *(undefined4 *)((longlong)puVar4 + 0xa4);
      uStack_100 = (undefined4)puVar4[0x15];
    }
    plVar5 = (longlong *)FUN_180282400(uStack_10c,local_f0,local_1b8,&local_1a8);
    lVar3 = *plVar5;
  }
  FUN_1804e4e90(&DAT_1809f3710);
  return (undefined *)(lVar3 + 0x14);
}



/* ===== 18027fb40 FUN_18027fb40 ===== */

int * FUN_18027fb40(int param_1)

{
  undefined8 *puVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = DAT_180cfc940;
  if (param_1 < 50000) {
    while( true ) {
      if (piVar3 == DAT_180cfc948) {
        return (int *)0x0;
      }
      if (*piVar3 == param_1) break;
      piVar3 = piVar3 + 0x3e;
    }
    return piVar3;
  }
  iVar2 = FUN_1804e4d70(&DAT_1809f36c0);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  puVar1 = DAT_180cfc7c8;
  if (DAT_1809f370c == 0x7fffffff) {
    DAT_1809f370c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  for (; puVar1 != DAT_180cfc7d0; puVar1 = puVar1 + 1) {
    piVar3 = (int *)*puVar1;
    if (*piVar3 == param_1) goto LAB_18027fb9a;
  }
  piVar3 = (int *)0x0;
LAB_18027fb9a:
  FUN_1804e4e90(&DAT_1809f36c0);
  return piVar3;
}



/* ===== 18027fc00 FUN_18027fc00 ===== */

undefined8 FUN_18027fc00(undefined4 *param_1,undefined4 *param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  size_t sVar8;
  undefined8 uVar9;
  char *pcVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  
  param_3[9] = param_2[0x5c];
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  uVar6 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar4;
  param_1[2] = uVar5;
  param_1[3] = uVar6;
  *(undefined2 *)(param_1 + 4) = *(undefined2 *)(param_2 + 4);
  iVar1 = param_2[6];
  *param_3 = iVar1;
  if (0 < iVar1) {
    lVar3 = *(longlong *)(param_2 + 8);
    if (lVar3 != 0) {
      lVar7 = (*DAT_180cfc7f0)((longlong)iVar1 * 2);
      if (lVar7 != 0) {
        FUN_180540530(lVar7,lVar3,(longlong)iVar1 * 2);
        *(longlong *)(param_1 + 8) = lVar7;
        param_1[10] = iVar1;
        param_1[6] = iVar1;
        goto LAB_18027fc7c;
      }
    }
    pcVar10 = "vector 0x18";
    goto LAB_1802803ac;
  }
LAB_18027fc7c:
  uVar4 = param_2[0xd];
  uVar5 = param_2[0xe];
  uVar6 = param_2[0xf];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar4;
  param_1[0xe] = uVar5;
  param_1[0xf] = uVar6;
  *(undefined8 *)((longlong)param_1 + 0x3f) = *(undefined8 *)((longlong)param_2 + 0x3f);
  iVar1 = param_2[0x12];
  param_3[1] = iVar1;
  if (0 < iVar1) {
    lVar3 = *(longlong *)(param_2 + 0x14);
    if (lVar3 != 0) {
      lVar7 = (*DAT_180cfc7f0)((longlong)iVar1 * 0x18);
      if (lVar7 != 0) {
        FUN_180540530(lVar7,lVar3,(longlong)iVar1 * 0x18);
        *(longlong *)(param_1 + 0x14) = lVar7;
        param_1[0x16] = iVar1;
        param_1[0x12] = iVar1;
        goto LAB_18027fcdf;
      }
    }
    pcVar10 = "vector 0x48";
    goto LAB_1802803ac;
  }
LAB_18027fcdf:
  uVar9 = *(undefined8 *)(param_2 + 0x1a);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x1a) = uVar9;
  uVar9 = *(undefined8 *)(param_2 + 0x1e);
  *(undefined8 *)(param_1 + 0x1c) = *(undefined8 *)(param_2 + 0x1c);
  *(undefined8 *)(param_1 + 0x1e) = uVar9;
  uVar9 = *(undefined8 *)(param_2 + 0x22);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x22) = uVar9;
  uVar9 = *(undefined8 *)(param_2 + 0x26);
  *(undefined8 *)(param_1 + 0x24) = *(undefined8 *)(param_2 + 0x24);
  *(undefined8 *)(param_1 + 0x26) = uVar9;
  uVar9 = *(undefined8 *)(param_2 + 0x2a);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x2a) = uVar9;
  uVar9 = *(undefined8 *)(param_2 + 0x2e);
  *(undefined8 *)(param_1 + 0x2c) = *(undefined8 *)(param_2 + 0x2c);
  *(undefined8 *)(param_1 + 0x2e) = uVar9;
  uVar9 = *(undefined8 *)(param_2 + 0x32);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x32) = uVar9;
  uVar9 = *(undefined8 *)(param_2 + 0x36);
  *(undefined8 *)(param_1 + 0x34) = *(undefined8 *)(param_2 + 0x34);
  *(undefined8 *)(param_1 + 0x36) = uVar9;
  uVar9 = *(undefined8 *)(param_2 + 0x3a);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x3a) = uVar9;
  uVar9 = *(undefined8 *)(param_2 + 0x3e);
  *(undefined8 *)(param_1 + 0x3c) = *(undefined8 *)(param_2 + 0x3c);
  *(undefined8 *)(param_1 + 0x3e) = uVar9;
  uVar4 = param_2[0x41];
  uVar5 = param_2[0x42];
  uVar6 = param_2[0x43];
  param_1[0x40] = param_2[0x40];
  param_1[0x41] = uVar4;
  param_1[0x42] = uVar5;
  param_1[0x43] = uVar6;
  uVar4 = param_2[0x45];
  uVar5 = param_2[0x46];
  uVar6 = param_2[0x47];
  param_1[0x44] = param_2[0x44];
  param_1[0x45] = uVar4;
  param_1[0x46] = uVar5;
  param_1[0x47] = uVar6;
  iVar1 = param_2[0x48];
  param_3[2] = iVar1;
  if (0 < iVar1) {
    lVar3 = *(longlong *)(param_2 + 0x4a);
    if (lVar3 != 0) {
      lVar7 = (*DAT_180cfc7f0)((longlong)iVar1 * 8);
      if (lVar7 != 0) {
        FUN_180540530(lVar7,lVar3,(longlong)iVar1 * 8);
        *(longlong *)(param_1 + 0x4a) = lVar7;
        param_1[0x4c] = iVar1;
        param_1[0x48] = iVar1;
        goto LAB_18027fddb;
      }
    }
    pcVar10 = "vector 0x120";
    goto LAB_1802803ac;
  }
LAB_18027fddb:
  uVar9 = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x4e) = *(undefined8 *)(param_2 + 0x4e);
  *(undefined8 *)(param_1 + 0x50) = uVar9;
  pcVar10 = "";
  if (*(char **)(param_2 + 0x52) != (char *)0x0) {
    pcVar10 = *(char **)(param_2 + 0x52);
  }
  sVar8 = strlen(pcVar10);
  (*DAT_180cfc810)(param_1 + 0x52,pcVar10,sVar8 & 0xffffffff);
  *(undefined1 *)((longlong)param_1 + 0x152) = *(undefined1 *)((longlong)param_2 + 0x152);
  *(undefined2 *)(param_1 + 0x54) = *(undefined2 *)(param_2 + 0x54);
  pcVar10 = "";
  if (*(char **)(param_2 + 0x56) != (char *)0x0) {
    pcVar10 = *(char **)(param_2 + 0x56);
  }
  sVar8 = strlen(pcVar10);
  (*DAT_180cfc810)(param_1 + 0x56,pcVar10,sVar8 & 0xffffffff);
  uVar9 = *(undefined8 *)(param_2 + 0x5a);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x5a) = uVar9;
  uVar4 = param_2[0x5d];
  uVar5 = param_2[0x5e];
  uVar6 = param_2[0x5f];
  param_1[0x5c] = param_2[0x5c];
  param_1[0x5d] = uVar4;
  param_1[0x5e] = uVar5;
  param_1[0x5f] = uVar6;
  uVar4 = param_2[0x61];
  uVar5 = param_2[0x62];
  uVar6 = param_2[99];
  param_1[0x60] = param_2[0x60];
  param_1[0x61] = uVar4;
  param_1[0x62] = uVar5;
  param_1[99] = uVar6;
  param_1[100] = param_2[100];
  iVar1 = param_2[0x66];
  param_3[3] = iVar1;
  if (0 < iVar1) {
    lVar3 = *(longlong *)(param_2 + 0x68);
    if (lVar3 != 0) {
      lVar7 = (*DAT_180cfc7f0)((longlong)iVar1 * 4);
      if (lVar7 != 0) {
        FUN_180540530(lVar7,lVar3,(longlong)iVar1 * 4);
        *(longlong *)(param_1 + 0x68) = lVar7;
        param_1[0x6a] = iVar1;
        param_1[0x66] = iVar1;
        goto LAB_18027fef6;
      }
    }
    pcVar10 = "vector 0x198";
    goto LAB_1802803ac;
  }
LAB_18027fef6:
  uVar9 = *(undefined8 *)(param_2 + 0x6e);
  *(undefined8 *)(param_1 + 0x6c) = *(undefined8 *)(param_2 + 0x6c);
  *(undefined8 *)(param_1 + 0x6e) = uVar9;
  uVar9 = *(undefined8 *)(param_2 + 0x72);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  *(undefined8 *)(param_1 + 0x72) = uVar9;
  uVar9 = *(undefined8 *)(param_2 + 0x76);
  *(undefined8 *)(param_1 + 0x74) = *(undefined8 *)(param_2 + 0x74);
  *(undefined8 *)(param_1 + 0x76) = uVar9;
  uVar9 = *(undefined8 *)(param_2 + 0x7a);
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_2 + 0x78);
  *(undefined8 *)(param_1 + 0x7a) = uVar9;
  uVar4 = param_2[0x7d];
  uVar5 = param_2[0x7e];
  uVar6 = param_2[0x7f];
  param_1[0x7c] = param_2[0x7c];
  param_1[0x7d] = uVar4;
  param_1[0x7e] = uVar5;
  param_1[0x7f] = uVar6;
  uVar4 = param_2[0x81];
  uVar5 = param_2[0x82];
  uVar6 = param_2[0x83];
  param_1[0x80] = param_2[0x80];
  param_1[0x81] = uVar4;
  param_1[0x82] = uVar5;
  param_1[0x83] = uVar6;
  iVar1 = param_2[0x84];
  param_3[4] = iVar1;
  if (0 < iVar1) {
    lVar3 = *(longlong *)(param_2 + 0x86);
    if (lVar3 != 0) {
      lVar7 = (*DAT_180cfc7f0)((longlong)iVar1 * 4);
      if (lVar7 != 0) {
        FUN_180540530(lVar7,lVar3,(longlong)iVar1 * 4);
        *(longlong *)(param_1 + 0x86) = lVar7;
        param_1[0x88] = iVar1;
        param_1[0x84] = iVar1;
        goto LAB_18027ffaa;
      }
    }
    pcVar10 = "vector 0x210";
    goto LAB_1802803ac;
  }
LAB_18027ffaa:
  iVar1 = param_2[0x8a];
  param_3[5] = iVar1;
  if (0 < iVar1) {
    lVar3 = *(longlong *)(param_2 + 0x8c);
    if (lVar3 != 0) {
      lVar7 = (*DAT_180cfc7f0)((longlong)iVar1 * 0x194);
      if (lVar7 != 0) {
        FUN_180540530(lVar7,lVar3,(longlong)iVar1 * 0x194);
        *(longlong *)(param_1 + 0x8c) = lVar7;
        param_1[0x8e] = iVar1;
        param_1[0x8a] = iVar1;
        goto LAB_180280009;
      }
    }
    pcVar10 = "vector 0x228";
    goto LAB_1802803ac;
  }
LAB_180280009:
  uVar9 = *(undefined8 *)(param_2 + 0x92);
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_2 + 0x90);
  *(undefined8 *)(param_1 + 0x92) = uVar9;
  uVar9 = *(undefined8 *)(param_2 + 0x96);
  *(undefined8 *)(param_1 + 0x94) = *(undefined8 *)(param_2 + 0x94);
  *(undefined8 *)(param_1 + 0x96) = uVar9;
  uVar9 = *(undefined8 *)(param_2 + 0x9a);
  *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_2 + 0x98);
  *(undefined8 *)(param_1 + 0x9a) = uVar9;
  uVar9 = *(undefined8 *)(param_2 + 0x9e);
  *(undefined8 *)(param_1 + 0x9c) = *(undefined8 *)(param_2 + 0x9c);
  *(undefined8 *)(param_1 + 0x9e) = uVar9;
  uVar9 = *(undefined8 *)(param_2 + 0xa2);
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_2 + 0xa0);
  *(undefined8 *)(param_1 + 0xa2) = uVar9;
  uVar9 = *(undefined8 *)(param_2 + 0xa6);
  *(undefined8 *)(param_1 + 0xa4) = *(undefined8 *)(param_2 + 0xa4);
  *(undefined8 *)(param_1 + 0xa6) = uVar9;
  uVar9 = *(undefined8 *)(param_2 + 0xaa);
  *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_2 + 0xa8);
  *(undefined8 *)(param_1 + 0xaa) = uVar9;
  uVar9 = *(undefined8 *)(param_2 + 0xae);
  *(undefined8 *)(param_1 + 0xac) = *(undefined8 *)(param_2 + 0xac);
  *(undefined8 *)(param_1 + 0xae) = uVar9;
  uVar4 = param_2[0xb1];
  uVar5 = param_2[0xb2];
  uVar6 = param_2[0xb3];
  param_1[0xb0] = param_2[0xb0];
  param_1[0xb1] = uVar4;
  param_1[0xb2] = uVar5;
  param_1[0xb3] = uVar6;
  *(undefined8 *)(param_1 + 0xb4) = *(undefined8 *)(param_2 + 0xb4);
  iVar1 = param_2[0xb6];
  param_3[6] = iVar1;
  if (0 < iVar1) {
    lVar3 = *(longlong *)(param_2 + 0xb8);
    if (lVar3 != 0) {
      lVar7 = (*DAT_180cfc7f0)((longlong)iVar1 * 4);
      if (lVar7 != 0) {
        FUN_180540530(lVar7,lVar3,(longlong)iVar1 * 4);
        *(longlong *)(param_1 + 0xb8) = lVar7;
        param_1[0xba] = iVar1;
        param_1[0xb6] = iVar1;
        goto LAB_1802800f7;
      }
    }
    pcVar10 = "vector 0x2d8";
    goto LAB_1802803ac;
  }
LAB_1802800f7:
  iVar1 = param_2[0xbc];
  param_3[7] = iVar1;
  if (0 < iVar1) {
    lVar3 = *(longlong *)(param_2 + 0xbe);
    if (lVar3 != 0) {
      lVar7 = (*DAT_180cfc7f0)((longlong)iVar1 * 8);
      if (lVar7 != 0) {
        FUN_180540530(lVar7,lVar3,(longlong)iVar1 * 8);
        *(longlong *)(param_1 + 0xbe) = lVar7;
        param_1[0xc0] = iVar1;
        param_1[0xbc] = iVar1;
        goto LAB_180280157;
      }
    }
    pcVar10 = "vector 0x2f0";
    goto LAB_1802803ac;
  }
LAB_180280157:
  iVar1 = param_2[0xc2];
  param_3[8] = iVar1;
  if (0 < iVar1) {
    lVar3 = *(longlong *)(param_2 + 0xc4);
    if (lVar3 != 0) {
      lVar7 = (*DAT_180cfc7f0)((longlong)iVar1 * 4);
      if (lVar7 != 0) {
        FUN_180540530(lVar7,lVar3,(longlong)iVar1 * 4);
        *(longlong *)(param_1 + 0xc4) = lVar7;
        param_1[0xc6] = iVar1;
        param_1[0xc2] = iVar1;
        goto LAB_1802801b7;
      }
    }
    pcVar10 = "vector 0x308";
    goto LAB_1802803ac;
  }
LAB_1802801b7:
  uVar9 = *(undefined8 *)(param_2 + 0xca);
  *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_2 + 200);
  *(undefined8 *)(param_1 + 0xca) = uVar9;
  uVar9 = *(undefined8 *)(param_2 + 0xce);
  *(undefined8 *)(param_1 + 0xcc) = *(undefined8 *)(param_2 + 0xcc);
  *(undefined8 *)(param_1 + 0xce) = uVar9;
  uVar9 = *(undefined8 *)(param_2 + 0xd2);
  *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_2 + 0xd0);
  *(undefined8 *)(param_1 + 0xd2) = uVar9;
  uVar9 = *(undefined8 *)(param_2 + 0xd6);
  *(undefined8 *)(param_1 + 0xd4) = *(undefined8 *)(param_2 + 0xd4);
  *(undefined8 *)(param_1 + 0xd6) = uVar9;
  uVar4 = param_2[0xd9];
  uVar5 = param_2[0xda];
  uVar6 = param_2[0xdb];
  param_1[0xd8] = param_2[0xd8];
  param_1[0xd9] = uVar4;
  param_1[0xda] = uVar5;
  param_1[0xdb] = uVar6;
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x371);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x375);
  uVar6 = *(undefined4 *)((longlong)param_2 + 0x379);
  *(undefined4 *)((longlong)param_1 + 0x36d) = *(undefined4 *)((longlong)param_2 + 0x36d);
  *(undefined4 *)((longlong)param_1 + 0x371) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x375) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x379) = uVar6;
  param_1[0xe8] = 0xffffffff;
  param_1[0xe2] = 0;
  uVar2 = param_2[0xe2];
  param_3[10] = uVar2;
  if ((int)uVar2 < 1) {
LAB_1802802c8:
    *(undefined1 *)(param_1 + 0xe0) = *(undefined1 *)(param_2 + 0xe0);
    param_1[0xe6] = param_2[0xe6];
    param_1[0xe7] = param_2[0xe7];
    param_1[0xe8] = param_2[0xe8];
    uVar4 = param_2[0xeb];
    uVar5 = param_2[0xec];
    uVar6 = param_2[0xed];
    param_1[0xea] = param_2[0xea];
    param_1[0xeb] = uVar4;
    param_1[0xec] = uVar5;
    param_1[0xed] = uVar6;
    uVar4 = param_2[0xef];
    uVar5 = param_2[0xf0];
    uVar6 = param_2[0xf1];
    param_1[0xee] = param_2[0xee];
    param_1[0xef] = uVar4;
    param_1[0xf0] = uVar5;
    param_1[0xf1] = uVar6;
    if (*(longlong *)(param_2 + 2) == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = (*DAT_180cfc7f8)();
    }
    *(undefined8 *)(param_3 + 0xc) = uVar9;
    *(undefined8 *)(param_1 + 2) = uVar9;
    if (*(longlong *)(param_3 + 0xc) != 0) {
      return 1;
    }
    pcVar10 = "KeyValues copy";
  }
  else {
    if (((param_2[0xe3] & 0x7fffffff) != 0) && (lVar3 = *(longlong *)(param_2 + 0xe4), lVar3 != 0))
    {
      uVar12 = 0;
      do {
        uVar11 = 1;
        if (1 < (int)(uVar12 * 2)) {
          uVar11 = uVar12 * 2;
        }
        uVar13 = uVar11;
        if (0x3ffffffe < uVar12) {
          uVar13 = 0x7fffffff;
        }
        uVar12 = uVar11;
      } while (uVar13 < uVar2);
      lVar7 = (*DAT_180cfc7f0)((ulonglong)uVar13 << 5);
      if (lVar7 != 0) {
        FUN_180540530(lVar7,lVar3,(longlong)(int)uVar2 << 5);
        param_1[0xe3] = param_1[0xe3] & 0x80000000;
        param_1[0xe3] = param_1[0xe3] | uVar13;
        *(longlong *)(param_1 + 0xe4) = lVar7;
        param_3[0xb] = uVar13;
        goto LAB_1802802c8;
      }
    }
    pcVar10 = "table 0x380";
  }
LAB_1802803ac:
  *(char **)(param_3 + 0xe) = pcVar10;
  return 0;
}



/* ===== 1802803d0 FUN_1802803d0 ===== */

void FUN_1802803d0(void)

{
  FUN_18027fc00();
  return;
}



/* ===== 180280400 FUN_180280400 ===== */

void FUN_180280400(undefined8 param_1,undefined8 param_2)

{
  (*DAT_180cfc818)(param_1,param_2,1);
  return;
}



/* ===== 180280420 FUN_180280420 ===== */

void FUN_180280420(longlong *param_1)

{
  (**(code **)((ulonglong)DAT_180cfc830 + *param_1))();
  return;
}



/* ===== 180280440 FUN_180280440 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180280440(longlong param_1,undefined4 param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_68;
  local_48[0] = param_2;
  local_40 = param_3;
  uVar1 = (*DAT_180cfc820)(param_1 + 0xd8,local_48,&local_40,0);
  *param_4 = uVar1;
  local_38 = local_48[0];
  local_34 = 0;
  local_30 = local_40;
  (*DAT_180cfc828)(param_1 + 0x120,&local_38);
  return 1;
}



/* ===== 1802804d0 FUN_1802804d0 ===== */

undefined1 FUN_1802804d0(longlong param_1,undefined2 param_2,undefined8 param_3)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    (*DAT_180cfc800)(*(longlong *)(param_1 + 8),"model_player");
  }
  *(undefined2 *)(param_1 + 0x10) = param_2;
  (*DAT_180cfc808)(param_1 + 0x148,param_3);
  return 1;
}



/* ===== 180280530 FUN_180280530 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180280530(void)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined8 *puVar5;
  char cVar6;
  int iVar7;
  HMODULE hModule;
  longlong lVar8;
  longlong lVar9;
  ULONGLONG UVar10;
  undefined2 *puVar11;
  longlong lVar12;
  char *pcVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  undefined1 auStack_188 [32];
  longlong local_168;
  longlong local_160;
  undefined2 *local_158;
  char *local_150;
  undefined4 local_148;
  undefined4 local_140;
  undefined4 local_138;
  undefined4 local_130;
  undefined4 local_128;
  undefined4 local_120;
  undefined4 local_118;
  undefined4 local_110;
  undefined4 local_108;
  undefined4 local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  char *local_e0;
  longlong local_d8;
  undefined4 local_c8 [2];
  longlong local_c0;
  undefined8 *local_b8;
  undefined8 *local_b0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined2 *local_60;
  ulonglong local_58;
  
  local_58 = DAT_180919500 ^ (ulonglong)auStack_188;
  if (DAT_180ccfeda == '\0') {
    return;
  }
  if (DAT_180ccfbd7 == '\0') {
    return;
  }
  if (DAT_180cfc7e0 == DAT_180cfc840) {
    return;
  }
  DAT_180cfc840 = DAT_180cfc7e0;
  FUN_180275ef0(&local_b8);
  puVar5 = local_b0;
  if (local_b8 == local_b0) goto LAB_180280bb3;
  if (DAT_180ccfed9 == '\0') {
    hModule = GetModuleHandleA("tier0.dll");
    if ((((hModule != (HMODULE)0x0) && (DAT_180961b50 != 0)) && (DAT_1809621f8 != 0)) &&
       (((DAT_180962200 != 0 && (DAT_180962208 != (undefined2 *)0x0)) && (DAT_180962210 != 0)))) {
      DAT_180cfc7f0 = DAT_180961b50;
      DAT_180cfc7f8 = GetProcAddress(hModule,"?MakeCopy@KeyValues@@QEBAPEAV1@XZ");
      DAT_180cfc800 = GetProcAddress(hModule,"?SetString@KeyValues@@QEAAXPEBD0@Z");
      DAT_180cfc808 = GetProcAddress(hModule,"?Set@CUtlString@@QEAAXPEBD@Z");
      DAT_180cfc810 = GetProcAddress(hModule,"?SetDirect@CUtlString@@QEAAXPEBDH@Z");
      DAT_180cfc818 = DAT_1809621f8;
      DAT_180cfc820 = DAT_180962200;
      DAT_180cfc828 = DAT_180962208;
      DAT_180cfc830 = DAT_180962210;
      if (((DAT_180cfc7f8 == (FARPROC)0x0) || (DAT_180cfc800 == (FARPROC)0x0)) ||
         ((DAT_180cfc808 == (FARPROC)0x0 ||
          (((DAT_180cfc810 == (FARPROC)0x0 || ((DAT_180962210 & 7) != 0)) || (0xfff < DAT_180962210)
           ))))) {
        DAT_180ccfed9 = '\0';
      }
      else {
        DAT_180ccfed9 = '\x01';
      }
      if (DAT_180ccfed9 != '\0') goto LAB_1802806f7;
    }
    uVar4 = DAT_180962210;
    puVar11 = DAT_180962208;
    lVar9 = DAT_180962200;
    lVar8 = DAT_1809621f8;
    if (((DAT_180cfc7f8 == (FARPROC)0x0) || (DAT_180cfc800 == (FARPROC)0x0)) ||
       ((DAT_180cfc808 == (FARPROC)0x0 || (pcVar13 = "found", DAT_180cfc810 == (FARPROC)0x0)))) {
      pcVar13 = "missing";
    }
    UVar10 = GetTickCount64();
    local_158 = puVar11;
    local_160 = lVar9;
    local_168 = CONCAT44(local_168._4_4_,uVar4);
    local_150 = pcVar13;
    FUN_1802b2840("wl_skins.log",
                  "[%llu] custom models | schema | [error] not injected: item_definition_by_index %p, schema_add_item (create slot 0x%X, hash insert %p, sorted insert %p), tier0 KeyValues::MakeCopy / SetString, CUtlString::Set / SetDirect %s"
                  ,UVar10,lVar8);
  }
  else {
LAB_1802806f7:
    lVar8 = DAT_180961e00;
    if (DAT_180961e00 != 0) {
      cVar6 = FUN_180011220(DAT_180961e00 + 4);
      if (cVar6 == 'H') {
        cVar6 = FUN_180011220(lVar8 + 5);
        if (cVar6 == -0x75) {
          cVar6 = FUN_180011220(lVar8 + 6);
          if (cVar6 == '\x05') {
            iVar7 = FUN_180011200(lVar8 + 7);
            lVar8 = FUN_18000f3a0((longlong)iVar7 + 0xb + lVar8);
            if (lVar8 != 0) {
              lVar8 = FUN_18000f3a0(lVar8 + 8);
              local_c0 = lVar8;
              if (lVar8 != 0) {
                puVar15 = local_b8;
                if (local_b8 != puVar5) {
                  do {
                    puVar3 = (undefined4 *)*puVar15;
                    uVar2 = *puVar3;
                    plVar1 = (longlong *)(puVar3 + 0x36);
                    if (*(ulonglong *)(puVar3 + 0x3c) < 0x10) {
                      plVar14 = plVar1;
                    }
                    else {
                      plVar14 = (longlong *)*plVar1;
                    }
                    lVar9 = FUN_180280400(lVar8,uVar2);
                    if (lVar9 == 0) {
                      puVar11 = (undefined2 *)FUN_180280400(lVar8,0x13ad);
                      if (puVar11 == (undefined2 *)0x0) {
                        UVar10 = GetTickCount64();
                        FUN_1802b2840("wl_skins.log",
                                      "[%llu] custom models | schema | [error] definition %d (the copy source, NL 0x42c670) not in the schema"
                                      ,UVar10,0x13ad);
                        break;
                      }
                      lVar8 = FUN_180280420(lVar8);
                      uVar4 = DAT_180cfc830;
                      if (lVar8 == 0) {
                        UVar10 = GetTickCount64();
                        local_168 = CONCAT44(local_168._4_4_,uVar4);
                        FUN_1802b2840("wl_skins.log",
                                      "[%llu] custom models | schema | def %d | [error] schema vfunc +0x%X returned no definition"
                                      ,UVar10,uVar2);
                        break;
                      }
                      lVar9 = FUN_18000f3a0(puVar11);
                      lVar12 = FUN_18000f3a0(lVar8);
                      if (lVar12 != lVar9) {
                        pcVar13 = (char *)FUN_18000f3a0(puVar11);
                        lVar9 = FUN_18000f3a0(lVar8);
                        UVar10 = GetTickCount64();
                        local_158 = (undefined2 *)CONCAT44(local_158._4_4_,0x13ad);
                        local_168 = lVar8;
                        local_160 = lVar9;
                        local_150 = pcVar13;
                        FUN_1802b2840("wl_skins.log",
                                      "[%llu] custom models | schema | def %d | [error] new definition %p has vtable %p, definition %d has %p: not copied"
                                      ,UVar10,uVar2);
                        break;
                      }
                      local_98 = 0;
                      uStack_90 = 0;
                      local_88 = 0;
                      uStack_80 = 0;
                      local_78 = 0;
                      local_70 = 0;
                      local_68 = 0;
                      local_60 = (undefined2 *)0x0;
                      cVar6 = FUN_1802803d0(lVar8,puVar11,&local_98);
                      lVar9 = local_c0;
                      if (cVar6 == '\0') {
                        puVar11 = &DAT_1806dfbb4;
                        if (local_60 != (undefined2 *)0x0) {
                          puVar11 = local_60;
                        }
                        UVar10 = GetTickCount64();
                        local_168 = CONCAT44(local_168._4_4_,0x13ad);
                        local_160 = lVar8;
                        local_158 = puVar11;
                        FUN_1802b2840("wl_skins.log",
                                      "[%llu] custom models | schema | def %d | [error] copy of definition %d into %p failed at %s: not inserted"
                                      ,UVar10,uVar2);
                        break;
                      }
                      local_c8[0] = 0xffffffff;
                      cVar6 = FUN_180280440(local_c0,uVar2,lVar8,local_c8);
                      if (cVar6 == '\0') {
                        UVar10 = GetTickCount64();
                        FUN_1802b2840("wl_skins.log",
                                      "[%llu] custom models | schema | def %d | [error] insert into schema +0xD8 / +0x120 raised an exception"
                                      ,UVar10,uVar2);
                        break;
                      }
                      cVar6 = FUN_1802804d0(lVar8,uVar2,plVar14);
                      if (cVar6 == '\0') {
                        UVar10 = GetTickCount64();
                        local_168 = lVar8;
                        FUN_1802b2840("wl_skins.log",
                                      "[%llu] custom models | schema | def %d | [error] model not written into %p"
                                      ,UVar10,uVar2);
                        break;
                      }
                      lVar9 = FUN_180280400(lVar9,uVar2);
                      UVar10 = GetTickCount64();
                      local_e0 = "MISMATCH";
                      if (lVar9 == lVar8) {
                        local_e0 = "ok";
                      }
                      local_e8 = local_c8[0];
                      local_f0 = local_68;
                      local_f8 = local_70._4_4_;
                      local_100 = (undefined4)local_70;
                      local_108 = local_78._4_4_;
                      local_110 = (undefined4)local_78;
                      local_118 = uStack_80._4_4_;
                      local_120 = (undefined4)uStack_80;
                      local_128 = local_88._4_4_;
                      local_130 = (undefined4)local_88;
                      local_138 = uStack_90._4_4_;
                      local_140 = (undefined4)uStack_90;
                      local_148 = local_98._4_4_;
                      local_150 = (char *)CONCAT44(local_150._4_4_,(undefined4)local_98);
                      local_160 = CONCAT44(local_160._4_4_,0x13ad);
                      local_168 = lVar8;
                      local_158 = puVar11;
                      local_d8 = (longlong)plVar14;
                      FUN_1802b2840("wl_skins.log",
                                    "[%llu] custom models | schema | def %d | new definition %p = copy of %d %p (vectors 0x18:%d 0x48:%d 0x120:%d 0x198:%d 0x210:%d 0x228:%d 0x2d8:%d 0x2f0:%d 0x308:%d, shared 0x170:%d, table 0x380:%d cap %d, KeyValues copy %p) | hash index %d | lookup %s | model_player \'%s\'"
                                    ,UVar10,uVar2);
                      if (lVar9 == lVar8) {
                        FUN_1802763d0(uVar2,plVar1);
                      }
                      lVar8 = local_c0;
                    }
                    else {
                      cVar6 = FUN_1802804d0(lVar9,uVar2,plVar14);
                      if (cVar6 == '\0') {
                        UVar10 = GetTickCount64();
                        local_168 = lVar9;
                        FUN_1802b2840("wl_skins.log",
                                      "[%llu] custom models | schema | def %d | [error] existing definition %p: model not written"
                                      ,UVar10,uVar2);
                      }
                      else {
                        FUN_1802763d0(uVar2,plVar1);
                        UVar10 = GetTickCount64();
                        local_168 = lVar9;
                        local_160 = (longlong)plVar14;
                        FUN_1802b2840("wl_skins.log",
                                      "[%llu] custom models | schema | def %d | definition %p already in the schema (NL 0x42c670: reused) | model_player \'%s\'"
                                      ,UVar10,uVar2);
                      }
                    }
                    puVar15 = puVar15 + 1;
                  } while (puVar15 != local_b0);
                }
                goto LAB_180280bb3;
              }
            }
          }
        }
      }
    }
    UVar10 = GetTickCount64();
    FUN_1802b2840("wl_skins.log","[%llu] custom models | schema | [error] item schema not found",
                  UVar10);
  }
LAB_180280bb3:
  FUN_1800132b0(&local_b8);
  return;
}



/* ===== 180280be0 FUN_180280be0 ===== */

undefined8 * FUN_180280be0(void)

{
  undefined8 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 8) <
      DAT_181116324) {
    FUN_1804ed1b0(&DAT_181116324);
    if (DAT_181116324 == -1) {
      FUN_1804ece40(&LAB_180567e90);
      _Init_thread_footer(&DAT_181116324);
    }
  }
  puVar1 = (undefined8 *)&DAT_181116160;
  if (DAT_180ccfeda != '\0') {
    puVar1 = &DAT_180cfc958;
  }
  return puVar1;
}



/* ===== 180280c60 FUN_180280c60 ===== */

longlong FUN_180280c60(uint param_1)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  if (DAT_180ccfeda == '\0') {
    return 0;
  }
  uVar3 = DAT_180ca1490 &
          (((((ulonglong)param_1 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^
            (ulonglong)((int)param_1 >> 8 & 0xff)) * 0x100000001b3 ^
           (ulonglong)((int)param_1 >> 0x10 & 0xff)) * 0x100000001b3 ^
          (ulonglong)((int)param_1 >> 0x18 & 0xff)) * 0x100000001b3;
  lVar2 = *(longlong *)(DAT_180ca1478 + 8 + uVar3 * 0x10);
  if (lVar2 != DAT_180ca1468) {
    uVar1 = *(uint *)(lVar2 + 0x10);
    while (param_1 != uVar1) {
      if (lVar2 == *(longlong *)(DAT_180ca1478 + uVar3 * 0x10)) goto LAB_180280d04;
      lVar2 = *(longlong *)(lVar2 + 8);
      uVar1 = *(uint *)(lVar2 + 0x10);
    }
    if (lVar2 != 0) goto LAB_180280d07;
  }
LAB_180280d04:
  lVar2 = DAT_180ca1468;
LAB_180280d07:
  if (lVar2 == DAT_180ca1468) {
    return 0;
  }
  return *(longlong *)(lVar2 + 0x18) * 0x90 + DAT_180cfc958;
}



/* ===== 180280d30 FUN_180280d30 ===== */

longlong FUN_180280d30(ulonglong param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  
  iVar3 = (int)param_1;
  uVar4 = DAT_180ca14d0 &
          ((((param_1 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^ (ulonglong)(iVar3 >> 8 & 0xff))
            * 0x100000001b3 ^ (ulonglong)(iVar3 >> 0x10 & 0xff)) * 0x100000001b3 ^
          (ulonglong)(iVar3 >> 0x18 & 0xff)) * 0x100000001b3;
  lVar2 = *(longlong *)(DAT_180ca14b8 + 8 + uVar4 * 0x10);
  if (lVar2 != DAT_180ca14a8) {
    iVar1 = *(int *)(lVar2 + 0x10);
    while (iVar3 != iVar1) {
      if (lVar2 == *(longlong *)(DAT_180ca14b8 + uVar4 * 0x10)) goto LAB_180280dc4;
      lVar2 = *(longlong *)(lVar2 + 8);
      iVar1 = *(int *)(lVar2 + 0x10);
    }
    if (lVar2 != 0) goto LAB_180280dc7;
  }
LAB_180280dc4:
  lVar2 = DAT_180ca14a8;
LAB_180280dc7:
  if (lVar2 == DAT_180ca14a8) {
    return 0;
  }
  return *(longlong *)(lVar2 + 0x18) * 0x98 + DAT_180cfc850;
}



/* ===== 180280de0 FUN_180280de0 ===== */

undefined * FUN_180280de0(uint param_1)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  if (DAT_180ccfeda == '\0') {
    return &DAT_180cfc928;
  }
  uVar3 = DAT_180cfc900 &
          (((((ulonglong)param_1 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^
            (ulonglong)((int)param_1 >> 8 & 0xff)) * 0x100000001b3 ^
           (ulonglong)((int)param_1 >> 0x10 & 0xff)) * 0x100000001b3 ^
          (ulonglong)((int)param_1 >> 0x18 & 0xff)) * 0x100000001b3;
  lVar2 = *(longlong *)(DAT_180cfc8e8 + 8 + uVar3 * 0x10);
  if (lVar2 != DAT_180cfc8d8) {
    uVar1 = *(uint *)(lVar2 + 0x10);
    while (param_1 != uVar1) {
      if (lVar2 == *(longlong *)(DAT_180cfc8e8 + uVar3 * 0x10)) goto LAB_180280e84;
      lVar2 = *(longlong *)(lVar2 + 8);
      uVar1 = *(uint *)(lVar2 + 0x10);
    }
    if (lVar2 != 0) goto LAB_180280e87;
  }
LAB_180280e84:
  lVar2 = DAT_180cfc8d8;
LAB_180280e87:
  if (lVar2 == DAT_180cfc8d8) {
    return &DAT_180cfc928;
  }
  return (undefined *)(lVar2 + 0x18);
}



/* ===== 180280ea0 FUN_180280ea0 ===== */

undefined8 * FUN_180280ea0(void)

{
  undefined8 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 8) <
      DAT_18111631c) {
    FUN_1804ed1b0(&DAT_18111631c);
    if (DAT_18111631c == -1) {
      FUN_1804ece40(&LAB_180567ea0);
      _Init_thread_footer(&DAT_18111631c);
    }
  }
  puVar1 = (undefined8 *)&DAT_181116118;
  if (DAT_180ccfeda != '\0') {
    puVar1 = &DAT_180cfc988;
  }
  return puVar1;
}



/* ===== 180280f20 FUN_180280f20 ===== */

longlong FUN_180280f20(uint param_1)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  if (DAT_180ccfeda == '\0') {
    return 0;
  }
  uVar3 = DAT_180ca1590 &
          (((((ulonglong)param_1 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^
            (ulonglong)((int)param_1 >> 8 & 0xff)) * 0x100000001b3 ^
           (ulonglong)((int)param_1 >> 0x10 & 0xff)) * 0x100000001b3 ^
          (ulonglong)((int)param_1 >> 0x18 & 0xff)) * 0x100000001b3;
  lVar2 = *(longlong *)(DAT_180ca1578 + 8 + uVar3 * 0x10);
  if (lVar2 != DAT_180ca1568) {
    uVar1 = *(uint *)(lVar2 + 0x10);
    while (param_1 != uVar1) {
      if (lVar2 == *(longlong *)(DAT_180ca1578 + uVar3 * 0x10)) goto LAB_180280fc4;
      lVar2 = *(longlong *)(lVar2 + 8);
      uVar1 = *(uint *)(lVar2 + 0x10);
    }
    if (lVar2 != 0) goto LAB_180280fc7;
  }
LAB_180280fc4:
  lVar2 = DAT_180ca1568;
LAB_180280fc7:
  if (lVar2 == DAT_180ca1568) {
    return 0;
  }
  return *(longlong *)(lVar2 + 0x18) * 0x70 + DAT_180cfc970;
}



/* ===== 180280fe0 FUN_180280fe0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_180280fe0(undefined8 param_1,ulonglong param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  ulonglong uVar14;
  undefined1 auStack_c8 [8];
  undefined1 auStack_c0 [32];
  undefined1 local_a0 [16];
  ulonglong local_90;
  ulonglong uStack_88;
  ulonglong local_80;
  ulonglong uStack_78;
  undefined1 local_70 [32];
  undefined1 local_50 [32];
  ulonglong local_30;
  
  local_30 = DAT_180919500 ^ (ulonglong)auStack_c8;
  uVar9 = param_2 & 0xffffffff;
  puVar12 = auStack_c8;
  if ((DAT_180ccfeda != '\0') && (puVar12 = auStack_c8, (int)param_2 != 0)) {
    lVar3 = FUN_180280c60();
    lVar4 = FUN_180280d30(uVar9 & 0xffffffff);
    puVar13 = auStack_c8;
    puVar12 = auStack_c8;
    if ((lVar3 != 0) && (puVar12 = auStack_c8, lVar4 != 0)) {
      if (*(int *)(lVar3 + 0x48) - 2U < 2) {
        uVar2 = 6;
        goto LAB_18028121b;
      }
      uVar5 = FUN_180066a20(local_50,&DAT_1806e05f8,lVar4 + 8);
      puVar6 = (ulonglong *)FUN_1800134a0(uVar5,&DAT_1806e9114,1);
      local_90 = *puVar6;
      uStack_88 = puVar6[1];
      local_80 = puVar6[2];
      uStack_78 = puVar6[3];
      puVar6[2] = 0;
      puVar6[3] = 0xf;
      *(undefined1 *)puVar6 = 0;
      puVar7 = (undefined8 *)FUN_1800667a0(local_70,&local_90,lVar3 + 8);
      if ((ulonglong)puVar7[3] < 0x10) {
        puVar10 = puVar7;
      }
      else {
        puVar10 = (undefined8 *)*puVar7;
      }
      uVar11 = 0xcbf29ce484222325;
      uVar14 = 0xcbf29ce484222325;
      uVar9 = 0;
      if (puVar7[2] != 0) {
        do {
          uVar14 = (uVar14 ^ *(byte *)((longlong)puVar10 + uVar9)) * 0x100000001b3;
          uVar9 = uVar9 + 1;
        } while (uVar9 < (ulonglong)puVar7[2]);
      }
      lVar8 = FUN_1800268a0(&DAT_180ca13e0,local_a0,puVar7,uVar14);
      lVar3 = DAT_180ca13e8;
      if (*(longlong *)(lVar8 + 8) != 0) {
        lVar3 = *(longlong *)(lVar8 + 8);
      }
      FUN_18000f890(local_70);
      if (uStack_78 < 0x10) {
LAB_18028117d:
        local_80 = 0;
        uStack_78 = 0xf;
        local_90 = local_90 & 0xffffffffffffff00;
        FUN_18000f890(local_50);
        puVar12 = auStack_c8;
        if (lVar3 != DAT_180ca13e8) {
          uVar2 = *(undefined4 *)(lVar3 + 0x30);
          puVar13 = auStack_c8;
          goto LAB_18028121b;
        }
      }
      else {
        uVar14 = uStack_78 + 1;
        uVar9 = local_90;
        if (uVar14 < 0x1000) {
LAB_180281178:
          thunk_FUN_1803d64e0(uVar9,uVar14);
          goto LAB_18028117d;
        }
        uVar9 = *(ulonglong *)(local_90 - 8);
        if ((local_90 - uVar9) - 8 < 0x20) {
          uVar14 = uStack_78 + 0x28;
          goto LAB_180281178;
        }
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        puVar12 = auStack_c0;
      }
      if (*(ulonglong *)(lVar4 + 0x20) < 0x10) {
        lVar3 = lVar4 + 8;
      }
      else {
        lVar3 = *(longlong *)(lVar4 + 8);
      }
      uVar9 = 0;
      if (*(ulonglong *)(lVar4 + 0x18) != 0) {
        do {
          uVar11 = (uVar11 ^ *(byte *)(lVar3 + uVar9)) * 0x100000001b3;
          uVar9 = uVar9 + 1;
        } while (uVar9 < *(ulonglong *)(lVar4 + 0x18));
      }
      *(undefined8 *)(puVar12 + -8) = 0x1802811fb;
      lVar3 = FUN_1800268a0(&DAT_180ca14e0,puVar12 + 0x28,lVar4 + 8,uVar11);
      lVar3 = *(longlong *)(lVar3 + 8);
      if ((lVar3 != 0) && (lVar3 != DAT_180ca14e8)) {
        uVar2 = *(undefined4 *)(lVar3 + 0x30);
        puVar13 = puVar12;
        goto LAB_18028121b;
      }
    }
  }
  uVar2 = 0;
  puVar13 = puVar12;
LAB_18028121b:
  *(undefined8 *)(puVar13 + -8) = 0x18028122b;
  return uVar2;
}



/* ===== 180281250 FUN_180281250 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_180281250(undefined8 *param_1,undefined4 param_2,ulonglong param_3)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong *puVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  ulonglong uVar10;
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [32];
  undefined8 *local_90 [2];
  ulonglong local_80;
  ulonglong uStack_78;
  ulonglong local_70;
  ulonglong uStack_68;
  undefined1 local_60 [32];
  undefined1 local_40 [32];
  ulonglong local_20;
  
  puVar9 = auStack_b8;
  local_20 = DAT_180919500 ^ (ulonglong)auStack_b8;
  uVar7 = param_3 & 0xffffffff;
  if ((DAT_180ccfeda == '\0') || ((int)param_3 == 0)) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0xf;
    *(undefined1 *)param_1 = 0;
    goto LAB_18028145b;
  }
  local_90[0] = param_1;
  lVar2 = FUN_180280c60(param_2);
  lVar3 = FUN_180280d30(uVar7 & 0xffffffff);
  puVar9 = auStack_b8;
  if ((lVar2 == 0) || (lVar3 == 0)) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0xf;
    *(undefined1 *)param_1 = 0;
    goto LAB_18028145b;
  }
  uVar4 = FUN_180066a20(local_40,&DAT_1806e05f8,lVar3 + 8);
  puVar5 = (ulonglong *)FUN_1800134a0(uVar4,&DAT_1806e9114,1);
  local_80 = *puVar5;
  uStack_78 = puVar5[1];
  local_70 = puVar5[2];
  uStack_68 = puVar5[3];
  puVar5[2] = 0;
  puVar5[3] = 0xf;
  *(undefined1 *)puVar5 = 0;
  puVar6 = (undefined8 *)FUN_1800667a0(local_60,&local_80,lVar2 + 8);
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar8 = puVar6;
  }
  else {
    puVar8 = (undefined8 *)*puVar6;
  }
  uVar10 = 0xcbf29ce484222325;
  uVar7 = 0;
  if (puVar6[2] != 0) {
    do {
      uVar10 = (uVar10 ^ *(byte *)(uVar7 + (longlong)puVar8)) * 0x100000001b3;
      uVar7 = uVar7 + 1;
    } while (uVar7 < (ulonglong)puVar6[2]);
  }
  lVar3 = FUN_1800268a0(&DAT_180ca15c0,local_90,puVar6,uVar10);
  lVar2 = DAT_180ca15c8;
  if (*(longlong *)(lVar3 + 8) != 0) {
    lVar2 = *(longlong *)(lVar3 + 8);
  }
  FUN_18000f890(local_60);
  if (uStack_68 < 0x10) {
LAB_1802813dd:
    local_70 = 0;
    uStack_68 = 0xf;
    local_80 = local_80 & 0xffffffffffffff00;
    FUN_18000f890(local_40);
    puVar9 = auStack_b8;
    if (lVar2 == DAT_180ca15c8) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0xf;
      *(undefined1 *)param_1 = 0;
      puVar9 = auStack_b8;
      goto LAB_18028145b;
    }
  }
  else {
    uVar10 = uStack_68 + 1;
    uVar7 = local_80;
    if (uVar10 < 0x1000) {
LAB_1802813d8:
      thunk_FUN_1803d64e0(uVar7,uVar10);
      goto LAB_1802813dd;
    }
    uVar7 = *(ulonglong *)(local_80 - 8);
    if ((local_80 - uVar7) - 8 < 0x20) {
      uVar10 = uStack_68 + 0x28;
      goto LAB_1802813d8;
    }
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar9 = auStack_b0;
  }
  *(undefined8 *)(puVar9 + -8) = 0x18028142d;
  FUN_180024b50(param_1,lVar2 + 0x30);
LAB_18028145b:
  *(undefined8 *)(puVar9 + -8) = 0x18028146e;
  return param_1;
}



/* ===== 180281480 FUN_180281480 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_180281480(undefined8 *param_1,undefined4 param_2,ulonglong param_3)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong *puVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  ulonglong uVar10;
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [32];
  undefined8 *local_90 [2];
  ulonglong local_80;
  ulonglong uStack_78;
  ulonglong local_70;
  ulonglong uStack_68;
  undefined1 local_60 [32];
  undefined1 local_40 [32];
  ulonglong local_20;
  
  puVar9 = auStack_b8;
  local_20 = DAT_180919500 ^ (ulonglong)auStack_b8;
  uVar7 = param_3 & 0xffffffff;
  if ((DAT_180ccfeda == '\0') || ((int)param_3 == 0)) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0xf;
    *(undefined1 *)param_1 = 0;
    goto LAB_18028168b;
  }
  local_90[0] = param_1;
  lVar2 = FUN_180280c60(param_2);
  lVar3 = FUN_180280d30(uVar7 & 0xffffffff);
  puVar9 = auStack_b8;
  if ((lVar2 == 0) || (lVar3 == 0)) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0xf;
    *(undefined1 *)param_1 = 0;
    goto LAB_18028168b;
  }
  uVar4 = FUN_180066a20(local_40,&DAT_1806e05f8,lVar3 + 8);
  puVar5 = (ulonglong *)FUN_1800134a0(uVar4,&DAT_1806e9114,1);
  local_80 = *puVar5;
  uStack_78 = puVar5[1];
  local_70 = puVar5[2];
  uStack_68 = puVar5[3];
  puVar5[2] = 0;
  puVar5[3] = 0xf;
  *(undefined1 *)puVar5 = 0;
  puVar6 = (undefined8 *)FUN_1800667a0(local_60,&local_80,lVar2 + 8);
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar8 = puVar6;
  }
  else {
    puVar8 = (undefined8 *)*puVar6;
  }
  uVar10 = 0xcbf29ce484222325;
  uVar7 = 0;
  if (puVar6[2] != 0) {
    do {
      uVar10 = (uVar10 ^ *(byte *)(uVar7 + (longlong)puVar8)) * 0x100000001b3;
      uVar7 = uVar7 + 1;
    } while (uVar7 < (ulonglong)puVar6[2]);
  }
  lVar3 = FUN_1800268a0(&DAT_180ca1420,local_90,puVar6,uVar10);
  lVar2 = DAT_180ca1428;
  if (*(longlong *)(lVar3 + 8) != 0) {
    lVar2 = *(longlong *)(lVar3 + 8);
  }
  FUN_18000f890(local_60);
  if (uStack_68 < 0x10) {
LAB_18028160d:
    local_70 = 0;
    uStack_68 = 0xf;
    local_80 = local_80 & 0xffffffffffffff00;
    FUN_18000f890(local_40);
    puVar9 = auStack_b8;
    if (lVar2 == DAT_180ca1428) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0xf;
      *(undefined1 *)param_1 = 0;
      puVar9 = auStack_b8;
      goto LAB_18028168b;
    }
  }
  else {
    uVar10 = uStack_68 + 1;
    uVar7 = local_80;
    if (uVar10 < 0x1000) {
LAB_180281608:
      thunk_FUN_1803d64e0(uVar7,uVar10);
      goto LAB_18028160d;
    }
    uVar7 = *(ulonglong *)(local_80 - 8);
    if ((local_80 - uVar7) - 8 < 0x20) {
      uVar10 = uStack_68 + 0x28;
      goto LAB_180281608;
    }
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar9 = auStack_b0;
  }
  *(undefined8 *)(puVar9 + -8) = 0x18028165d;
  FUN_180024b50(param_1,lVar2 + 0x30);
LAB_18028168b:
  *(undefined8 *)(puVar9 + -8) = 0x18028169e;
  return param_1;
}



/* ===== 1802816b0 FUN_1802816b0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1802816b0(undefined8 *param_1,undefined4 param_2,ulonglong param_3)

{
  code *pcVar1;
  undefined1 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong *puVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined1 *puVar12;
  undefined1 auStack_108 [8];
  undefined1 auStack_100 [32];
  undefined8 *local_e0;
  ulonglong local_d8;
  ulonglong uStack_d0;
  ulonglong local_c8;
  ulonglong uStack_c0;
  ulonglong local_b8 [8];
  undefined1 local_78 [32];
  undefined1 local_58 [32];
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStack_108;
  param_3 = param_3 & 0xffffffff;
  local_e0 = param_1;
  lVar3 = FUN_180280c60(param_2);
  puVar12 = auStack_108;
  puVar2 = auStack_108;
  if (lVar3 == 0) {
LAB_1802816f1:
    puVar12 = puVar2;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0xf;
    *(undefined1 *)param_1 = 0;
    goto LAB_18028180b;
  }
  if ((int)param_3 == 0) {
    local_b8[0] = 0;
    local_b8[1] = 0;
    local_b8[2] = 0;
    local_b8[3] = 0;
    FUN_1800133a0(local_b8,PTR_s__png_vtex_c_180650218,0xb);
    local_d8 = 0;
    uStack_d0 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    FUN_1800133a0(&local_d8,PTR_s_panorama_images_econ_weapons_bas_1806501a0,0x2a);
    uVar4 = FUN_1800667a0(local_b8 + 4,&local_d8,lVar3 + 8);
    FUN_180066820(param_1,uVar4,local_b8);
    FUN_18000f890(local_b8 + 4);
    if (0xf < uStack_c0) {
      uVar10 = uStack_c0 + 1;
      uVar9 = local_d8;
      if (0xfff < uVar10) {
        uVar9 = *(ulonglong *)(local_d8 - 8);
        if (0x1f < (local_d8 - uVar9) - 8) {
          pcVar1 = (code *)swi(0x29);
          (*pcVar1)(5);
          puVar12 = auStack_100;
          goto LAB_18028182f;
        }
        uVar10 = uStack_c0 + 0x28;
      }
      thunk_FUN_1803d64e0(uVar9,uVar10);
    }
    puVar12 = auStack_108;
    local_c8 = 0;
    uStack_c0 = 0xf;
    local_d8 = local_d8 & 0xffffffffffffff00;
    if (local_b8[3] < 0x10) goto LAB_18028180b;
    uVar10 = local_b8[0];
    puVar12 = auStack_108;
    uVar9 = local_b8[3];
  }
  else {
LAB_18028182f:
    *(undefined8 *)(puVar12 + -8) = 0x180281837;
    lVar5 = FUN_180280d30(param_3 & 0xffffffff);
    puVar2 = puVar12;
    if (lVar5 == 0) goto LAB_1802816f1;
    local_b8[4] = 0;
    local_b8[5] = 0;
    local_b8[6] = 0;
    local_b8[7] = 0;
    *(undefined8 *)(puVar12 + -8) = 0x180281868;
    FUN_1800133a0(local_b8 + 4,PTR_s__light_png_vtex_c_180650078,0x11);
    local_b8[0] = 0;
    local_b8[1] = 0;
    local_b8[2] = 0;
    local_b8[3] = 0;
    *(undefined8 *)(puVar12 + -8) = 0x18028188e;
    FUN_1800133a0(local_b8,PTR_s_panorama_images_econ_default_gen_180650208,0x27);
    *(undefined8 *)(puVar12 + -8) = 0x1802818a0;
    uVar4 = FUN_1800667a0(local_58,local_b8,lVar3 + 8);
    *(undefined8 *)(puVar12 + -8) = 0x1802818b6;
    puVar6 = (ulonglong *)FUN_1800134a0(uVar4,&DAT_1806e64f8,1);
    local_d8 = *puVar6;
    uStack_d0 = puVar6[1];
    local_c8 = puVar6[2];
    uStack_c0 = puVar6[3];
    puVar6[2] = 0;
    puVar6[3] = 0xf;
    *(undefined1 *)puVar6 = 0;
    *(undefined8 *)(puVar12 + -8) = 0x1802818f4;
    uVar4 = FUN_1800667a0(local_78,&local_d8,lVar5 + 8);
    *(undefined8 *)(puVar12 + -8) = 0x180281904;
    FUN_180066820(param_1,uVar4,local_b8 + 4);
    *(undefined8 *)(puVar12 + -8) = 0x18028190e;
    FUN_18000f890(local_78);
    if (0xf < uStack_c0) {
      uVar10 = uStack_c0 + 1;
      uVar9 = local_d8;
      if (uVar10 < 0x1000) {
LAB_180281945:
        *(undefined8 *)(puVar12 + -8) = 0x18028194a;
        thunk_FUN_1803d64e0(uVar9,uVar10);
        goto LAB_18028194a;
      }
      uVar9 = *(ulonglong *)(local_d8 - 8);
      if ((local_d8 - uVar9) - 8 < 0x20) {
        uVar10 = uStack_c0 + 0x28;
        goto LAB_180281945;
      }
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(5);
LAB_1802819cc:
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(5);
      goto LAB_1802819d3;
    }
LAB_18028194a:
    local_c8 = 0;
    uStack_c0 = 0xf;
    local_d8 = local_d8 & 0xffffffffffffff00;
    *(undefined8 *)(puVar12 + -8) = 0x180281963;
    FUN_18000f890(local_58);
    if (0xf < local_b8[3]) {
      uVar10 = local_b8[3] + 1;
      uVar9 = local_b8[0];
      if (0xfff < uVar10) {
        uVar9 = *(ulonglong *)(local_b8[0] - 8);
        if (0x1f < (local_b8[0] - uVar9) - 8) goto LAB_1802819cc;
        uVar10 = local_b8[3] + 0x28;
      }
      *(undefined8 *)(puVar12 + -8) = 0x18028199b;
      thunk_FUN_1803d64e0(uVar9,uVar10);
    }
    local_b8[2] = 0;
    local_b8[3] = 0xf;
    local_b8[0] = local_b8[0] & 0xffffffffffffff00;
    if (local_b8[7] < 0x10) goto LAB_18028180b;
    uVar10 = local_b8[4];
    uVar9 = local_b8[7];
  }
  uVar11 = uVar9 + 1;
  uVar8 = uVar10;
  if (0xfff < uVar11) {
    uVar8 = *(ulonglong *)(uVar10 - 8);
    if (0x1f < (uVar10 - uVar8) - 8) {
LAB_1802819d3:
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(5);
      pcVar1 = (code *)swi(3);
      puVar7 = (undefined8 *)(*pcVar1)();
      return puVar7;
    }
    uVar11 = uVar9 + 0x28;
  }
  *(undefined8 *)(puVar12 + -8) = 0x18028180b;
  thunk_FUN_1803d64e0(uVar8,uVar11);
LAB_18028180b:
  *(undefined8 *)(puVar12 + -8) = 0x18028181a;
  return param_1;
}



/* ===== 1802819e0 FUN_1802819e0 ===== */

longlong * FUN_1802819e0(float *param_1,longlong *param_2,undefined8 *param_3,undefined4 *param_4)

{
  undefined8 *puVar1;
  size_t _Size;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined8 *_Buf1;
  undefined8 *_Buf2;
  undefined8 *puVar7;
  ulonglong uVar8;
  float fVar9;
  undefined8 *local_58;
  longlong local_50;
  
  puVar5 = param_3;
  if (0xf < (ulonglong)param_3[3]) {
    puVar5 = (undefined8 *)*param_3;
  }
  uVar8 = 0xcbf29ce484222325;
  uVar6 = 0;
  if (param_3[2] != 0) {
    do {
      uVar8 = (uVar8 ^ *(byte *)(uVar6 + (longlong)puVar5)) * 0x100000001b3;
      uVar6 = uVar6 + 1;
    } while (uVar6 < (ulonglong)param_3[2]);
  }
  FUN_1800268a0(param_1,&local_58,param_3,uVar8);
  if (local_50 != 0) {
    *param_2 = local_50;
    *(undefined1 *)(param_2 + 1) = 0;
    return param_2;
  }
  if (*(longlong *)(param_1 + 4) == 0x492492492492492) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4cd0("unordered_map/set too long");
  }
  puVar5 = (undefined8 *)FUN_1804ecaa0(0x38);
  puVar5[2] = 0;
  puVar5[3] = 0;
  puVar5[4] = 0;
  puVar5[5] = 0;
  uVar3 = param_3[1];
  puVar5[2] = *param_3;
  puVar5[3] = uVar3;
  uVar3 = param_3[3];
  puVar5[4] = param_3[2];
  puVar5[5] = uVar3;
  param_3[2] = 0;
  param_3[3] = 0xf;
  *(undefined1 *)param_3 = 0;
  *(undefined4 *)(puVar5 + 6) = *param_4;
  fVar9 = (float)(*(longlong *)(param_1 + 4) + 1) / (float)*(ulonglong *)(param_1 + 0xe);
  if (!(fVar9 < *param_1 || fVar9 == *param_1)) {
    FUN_180029e40(param_1);
    puVar7 = *(undefined8 **)
              (*(longlong *)(param_1 + 6) + 8 + (uVar8 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
    local_58 = *(undefined8 **)(param_1 + 2);
    if (puVar7 != *(undefined8 **)(param_1 + 2)) {
      puVar1 = *(undefined8 **)
                (*(longlong *)(param_1 + 6) + (uVar8 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
      _Size = puVar5[4];
      while( true ) {
        _Buf2 = puVar7 + 2;
        if (0xf < (ulonglong)puVar7[5]) {
          _Buf2 = (undefined8 *)*_Buf2;
        }
        if ((ulonglong)puVar5[5] < 0x10) {
          _Buf1 = puVar5 + 2;
        }
        else {
          _Buf1 = (undefined8 *)puVar5[2];
        }
        if ((_Size == puVar7[4]) &&
           ((_Size == 0 || (iVar4 = memcmp(_Buf1,_Buf2,_Size), iVar4 == 0)))) {
          local_58 = (undefined8 *)*puVar7;
          goto LAB_180281bc8;
        }
        if (puVar7 == puVar1) break;
        puVar7 = (undefined8 *)puVar7[1];
      }
      local_58 = puVar7;
    }
  }
LAB_180281bc8:
  puVar7 = (undefined8 *)local_58[1];
  *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + 1;
  *puVar5 = local_58;
  puVar5[1] = puVar7;
  *puVar7 = puVar5;
  local_58[1] = puVar5;
  lVar2 = *(longlong *)(param_1 + 6);
  uVar8 = *(ulonglong *)(param_1 + 0xc) & uVar8;
  puVar1 = *(undefined8 **)(lVar2 + uVar8 * 0x10);
  if (puVar1 == *(undefined8 **)(param_1 + 2)) {
    *(undefined8 **)(lVar2 + uVar8 * 0x10) = puVar5;
  }
  else {
    if (puVar1 == local_58) {
      *(undefined8 **)(lVar2 + uVar8 * 0x10) = puVar5;
      goto LAB_180281c13;
    }
    if (*(undefined8 **)(lVar2 + 8 + uVar8 * 0x10) != puVar7) goto LAB_180281c13;
  }
  *(undefined8 **)(lVar2 + 8 + uVar8 * 0x10) = puVar5;
LAB_180281c13:
  *param_2 = (longlong)puVar5;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



/* ===== 180281c40 FUN_180281c40 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong *
FUN_180281c40(undefined8 param_1,longlong *param_2,undefined8 *param_3,undefined8 param_4)

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
  FUN_1800268a0(&DAT_180ca1420,&local_58,param_3,uVar7);
  if (local_50 != 0) {
    *param_2 = local_50;
    *(undefined1 *)(param_2 + 1) = 0;
    return param_2;
  }
  if (DAT_180ca1430 == 0x333333333333333) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4cd0("unordered_map/set too long");
  }
  puVar4 = (undefined8 *)FUN_1804ecaa0(0x50);
  puVar8 = puVar4 + 2;
  FUN_180024b50(puVar8,param_3);
  FUN_180024b50(puVar4 + 6,param_4);
  if (_DAT_180ca1420 < (float)(DAT_180ca1430 + 1) / (float)DAT_180ca1458) {
    FUN_1800280b0(&DAT_180ca1420);
    puVar6 = *(undefined8 **)(DAT_180ca1438 + 8 + (DAT_180ca1450 & uVar7) * 0x10);
    local_58 = DAT_180ca1428;
    if (puVar6 != DAT_180ca1428) {
      puVar1 = *(undefined8 **)(DAT_180ca1438 + (DAT_180ca1450 & uVar7) * 0x10);
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
        if (local_58 == puVar1) goto LAB_180281e3e;
        local_58 = (undefined8 *)local_58[1];
      }
      local_58 = (undefined8 *)*local_58;
    }
  }
LAB_180281e3e:
  puVar8 = (undefined8 *)local_58[1];
  DAT_180ca1430 = DAT_180ca1430 + 1;
  *puVar4 = local_58;
  puVar4[1] = puVar8;
  *puVar8 = puVar4;
  local_58[1] = puVar4;
  lVar2 = DAT_180ca1438;
  uVar7 = DAT_180ca1450 & uVar7;
  puVar6 = *(undefined8 **)(DAT_180ca1438 + uVar7 * 0x10);
  if (puVar6 == DAT_180ca1428) {
    *(undefined8 **)(DAT_180ca1438 + uVar7 * 0x10) = puVar4;
  }
  else {
    if (puVar6 == local_58) {
      *(undefined8 **)(DAT_180ca1438 + uVar7 * 0x10) = puVar4;
      goto LAB_180281e98;
    }
    if (*(undefined8 **)(DAT_180ca1438 + 8 + uVar7 * 0x10) != puVar8) goto LAB_180281e98;
  }
  *(undefined8 **)(lVar2 + 8 + uVar7 * 0x10) = puVar4;
LAB_180281e98:
  *param_2 = (longlong)puVar4;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



/* ===== 180281ed0 FUN_180281ed0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong *
FUN_180281ed0(undefined8 param_1,longlong *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  size_t _Size;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  int iVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  undefined8 *_Buf1;
  undefined8 *puVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  undefined8 *local_58;
  longlong local_50;
  
  puVar11 = param_3;
  if (0xf < (ulonglong)param_3[3]) {
    puVar11 = (undefined8 *)*param_3;
  }
  uVar10 = 0xcbf29ce484222325;
  uVar8 = 0;
  if (param_3[2] != 0) {
    do {
      uVar10 = (uVar10 ^ *(byte *)(uVar8 + (longlong)puVar11)) * 0x100000001b3;
      uVar8 = uVar8 + 1;
    } while (uVar8 < (ulonglong)param_3[2]);
  }
  FUN_1800268a0(&DAT_180ca15c0,&local_58,param_3,uVar10);
  if (local_50 != 0) {
    *param_2 = local_50;
    *(undefined1 *)(param_2 + 1) = 0;
    return param_2;
  }
  if (DAT_180ca15d0 == 0x333333333333333) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4cd0("unordered_map/set too long");
  }
  puVar7 = (undefined8 *)FUN_1804ecaa0(0x50);
  puVar11 = puVar7 + 2;
  *puVar11 = 0;
  puVar7[3] = 0;
  puVar7[4] = 0;
  puVar7[5] = 0;
  uVar2 = *(undefined4 *)((longlong)param_3 + 4);
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *(undefined4 *)((longlong)param_3 + 0xc);
  *(undefined4 *)puVar11 = *(undefined4 *)param_3;
  *(undefined4 *)((longlong)puVar7 + 0x14) = uVar2;
  *(undefined4 *)(puVar7 + 3) = uVar3;
  *(undefined4 *)((longlong)puVar7 + 0x1c) = uVar4;
  uVar2 = *(undefined4 *)((longlong)param_3 + 0x14);
  uVar3 = *(undefined4 *)(param_3 + 3);
  uVar4 = *(undefined4 *)((longlong)param_3 + 0x1c);
  *(undefined4 *)(puVar7 + 4) = *(undefined4 *)(param_3 + 2);
  *(undefined4 *)((longlong)puVar7 + 0x24) = uVar2;
  *(undefined4 *)(puVar7 + 5) = uVar3;
  *(undefined4 *)((longlong)puVar7 + 0x2c) = uVar4;
  param_3[2] = 0;
  param_3[3] = 0xf;
  *(undefined1 *)param_3 = 0;
  FUN_180024b50(puVar7 + 6,param_4);
  if (_DAT_180ca15c0 < (float)(DAT_180ca15d0 + 1) / (float)DAT_180ca15f8) {
    FUN_1800280b0(&DAT_180ca15c0);
    puVar9 = *(undefined8 **)(DAT_180ca15d8 + 8 + (DAT_180ca15f0 & uVar10) * 0x10);
    local_58 = DAT_180ca15c8;
    if (puVar9 != DAT_180ca15c8) {
      puVar1 = *(undefined8 **)(DAT_180ca15d8 + (DAT_180ca15f0 & uVar10) * 0x10);
      uVar8 = puVar7[5];
      _Size = puVar7[4];
      local_58 = puVar9;
      while( true ) {
        puVar9 = local_58 + 2;
        if (0xf < (ulonglong)local_58[5]) {
          puVar9 = (undefined8 *)*puVar9;
        }
        if (uVar8 < 0x10) {
          _Buf1 = puVar11;
        }
        else {
          _Buf1 = (undefined8 *)*puVar11;
        }
        if ((_Size == local_58[4]) &&
           ((_Size == 0 || (iVar6 = memcmp(_Buf1,puVar9,_Size), iVar6 == 0)))) break;
        if (local_58 == puVar1) goto LAB_1802820eb;
        local_58 = (undefined8 *)local_58[1];
      }
      local_58 = (undefined8 *)*local_58;
    }
  }
LAB_1802820eb:
  puVar11 = (undefined8 *)local_58[1];
  DAT_180ca15d0 = DAT_180ca15d0 + 1;
  *puVar7 = local_58;
  puVar7[1] = puVar11;
  *puVar11 = puVar7;
  local_58[1] = puVar7;
  lVar5 = DAT_180ca15d8;
  uVar10 = DAT_180ca15f0 & uVar10;
  puVar9 = *(undefined8 **)(DAT_180ca15d8 + uVar10 * 0x10);
  if (puVar9 == DAT_180ca15c8) {
    *(undefined8 **)(DAT_180ca15d8 + uVar10 * 0x10) = puVar7;
  }
  else {
    if (puVar9 == local_58) {
      *(undefined8 **)(DAT_180ca15d8 + uVar10 * 0x10) = puVar7;
      goto LAB_180282145;
    }
    if (*(undefined8 **)(DAT_180ca15d8 + 8 + uVar10 * 0x10) != puVar11) goto LAB_180282145;
  }
  *(undefined8 **)(lVar5 + 8 + uVar10 * 0x10) = puVar7;
LAB_180282145:
  *param_2 = (longlong)puVar7;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



/* ===== 180282170 FUN_180282170 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong *
FUN_180282170(undefined8 param_1,longlong *param_2,undefined8 *param_3,undefined8 param_4)

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
  FUN_1800268a0(&DAT_180ca12f0,&local_58,param_3,uVar7);
  if (local_50 != 0) {
    *param_2 = local_50;
    *(undefined1 *)(param_2 + 1) = 0;
    return param_2;
  }
  if (DAT_180ca1300 == 0x333333333333333) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4cd0("unordered_map/set too long");
  }
  puVar4 = (undefined8 *)FUN_1804ecaa0(0x50);
  puVar8 = puVar4 + 2;
  FUN_180024b50(puVar8,param_3);
  FUN_180024b50(puVar4 + 6,param_4);
  if (_DAT_180ca12f0 < (float)(DAT_180ca1300 + 1) / (float)DAT_180ca1328) {
    FUN_1800280b0(&DAT_180ca12f0);
    puVar6 = *(undefined8 **)(DAT_180ca1308 + 8 + (DAT_180ca1320 & uVar7) * 0x10);
    local_58 = DAT_180ca12f8;
    if (puVar6 != DAT_180ca12f8) {
      puVar1 = *(undefined8 **)(DAT_180ca1308 + (DAT_180ca1320 & uVar7) * 0x10);
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
        if (local_58 == puVar1) goto LAB_18028236e;
        local_58 = (undefined8 *)local_58[1];
      }
      local_58 = (undefined8 *)*local_58;
    }
  }
LAB_18028236e:
  puVar8 = (undefined8 *)local_58[1];
  DAT_180ca1300 = DAT_180ca1300 + 1;
  *puVar4 = local_58;
  puVar4[1] = puVar8;
  *puVar8 = puVar4;
  local_58[1] = puVar4;
  lVar2 = DAT_180ca1308;
  uVar7 = DAT_180ca1320 & uVar7;
  puVar6 = *(undefined8 **)(DAT_180ca1308 + uVar7 * 0x10);
  if (puVar6 == DAT_180ca12f8) {
    *(undefined8 **)(DAT_180ca1308 + uVar7 * 0x10) = puVar4;
  }
  else {
    if (puVar6 == local_58) {
      *(undefined8 **)(DAT_180ca1308 + uVar7 * 0x10) = puVar4;
      goto LAB_1802823c8;
    }
    if (*(undefined8 **)(DAT_180ca1308 + 8 + uVar7 * 0x10) != puVar8) goto LAB_1802823c8;
  }
  *(undefined8 **)(lVar2 + 8 + uVar7 * 0x10) = puVar4;
LAB_1802823c8:
  *param_2 = (longlong)puVar4;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



/* ===== 180282400 FUN_180282400 ===== */

undefined8 * FUN_180282400(undefined8 param_1,undefined8 *param_2,byte *param_3,undefined8 *param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  float fVar12;
  
  uVar9 = (((((ulonglong)*param_3 ^ 0xcbf29ce484222325) * 0x100000001b3 ^ (ulonglong)param_3[1]) *
            0x100000001b3 ^ (ulonglong)param_3[2]) * 0x100000001b3 ^ (ulonglong)param_3[3]) *
          0x100000001b3;
  puVar8 = (undefined8 *)(DAT_180cfc8a0 & uVar9);
  puVar5 = *(undefined8 **)(DAT_180cfc888 + 8 + (longlong)puVar8 * 0x10);
  puVar10 = DAT_180cfc878;
  if (puVar5 != DAT_180cfc878) {
    puVar8 = *(undefined8 **)(DAT_180cfc888 + (longlong)puVar8 * 0x10);
    iVar1 = *(int *)(puVar5 + 2);
    puVar10 = puVar5;
    while( true ) {
      if (*(int *)param_3 == iVar1) {
        *param_2 = puVar10;
        *(undefined1 *)(param_2 + 1) = 0;
        return param_2;
      }
      if (puVar10 == puVar8) break;
      puVar10 = (undefined8 *)puVar10[1];
      iVar1 = *(int *)(puVar10 + 2);
    }
  }
  if (DAT_180cfc880 == 0x155555555555555) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4cd0("unordered_map/set too long");
  }
  puVar5 = (undefined8 *)FUN_1804ecaa0(0xc0,puVar8,DAT_180cfc888,param_4,&DAT_180cfc878,0);
  *(undefined4 *)(puVar5 + 2) = *(undefined4 *)param_3;
  uVar3 = param_4[1];
  *(undefined8 *)((longlong)puVar5 + 0x14) = *param_4;
  *(undefined8 *)((longlong)puVar5 + 0x1c) = uVar3;
  uVar3 = param_4[3];
  *(undefined8 *)((longlong)puVar5 + 0x24) = param_4[2];
  *(undefined8 *)((longlong)puVar5 + 0x2c) = uVar3;
  uVar3 = param_4[5];
  *(undefined8 *)((longlong)puVar5 + 0x34) = param_4[4];
  *(undefined8 *)((longlong)puVar5 + 0x3c) = uVar3;
  uVar3 = param_4[7];
  *(undefined8 *)((longlong)puVar5 + 0x44) = param_4[6];
  *(undefined8 *)((longlong)puVar5 + 0x4c) = uVar3;
  uVar3 = param_4[9];
  *(undefined8 *)((longlong)puVar5 + 0x54) = param_4[8];
  *(undefined8 *)((longlong)puVar5 + 0x5c) = uVar3;
  uVar3 = param_4[0xb];
  *(undefined8 *)((longlong)puVar5 + 100) = param_4[10];
  *(undefined8 *)((longlong)puVar5 + 0x6c) = uVar3;
  uVar3 = param_4[0xd];
  *(undefined8 *)((longlong)puVar5 + 0x74) = param_4[0xc];
  *(undefined8 *)((longlong)puVar5 + 0x7c) = uVar3;
  uVar3 = param_4[0xf];
  *(undefined8 *)((longlong)puVar5 + 0x84) = param_4[0xe];
  *(undefined8 *)((longlong)puVar5 + 0x8c) = uVar3;
  uVar3 = param_4[0x11];
  *(undefined8 *)((longlong)puVar5 + 0x94) = param_4[0x10];
  *(undefined8 *)((longlong)puVar5 + 0x9c) = uVar3;
  uVar3 = param_4[0x13];
  *(undefined8 *)((longlong)puVar5 + 0xa4) = param_4[0x12];
  *(undefined8 *)((longlong)puVar5 + 0xac) = uVar3;
  uVar3 = *(undefined8 *)((longlong)param_4 + 0xa4);
  puVar5[0x16] = *(undefined8 *)((longlong)param_4 + 0x9c);
  puVar5[0x17] = uVar3;
  uVar4 = DAT_180cfc8a8;
  if (DAT_180cfc870 < (float)(DAT_180cfc880 + 1) / (float)DAT_180cfc8a8) {
    fVar12 = (float)FUN_18053ef70((float)(DAT_180cfc880 + 1) / DAT_180cfc870);
    lVar6 = 0;
    if ((DAT_1808acd00 <= fVar12) && (fVar12 = fVar12 - DAT_1808acd00, fVar12 < DAT_1808acd00)) {
      lVar6 = -0x8000000000000000;
    }
    uVar7 = 8;
    if (8 < (ulonglong)((longlong)fVar12 + lVar6)) {
      uVar7 = (longlong)fVar12 + lVar6;
    }
    uVar11 = uVar4;
    if ((uVar4 < uVar7) && ((0x1ff < uVar4 || (uVar11 = uVar4 * 8, uVar4 * 8 < uVar7)))) {
      uVar11 = uVar7;
    }
    FUN_180288300(uVar7,uVar11);
    puVar8 = *(undefined8 **)(DAT_180cfc888 + 8 + (DAT_180cfc8a0 & uVar9) * 0x10);
    puVar10 = DAT_180cfc878;
    if (puVar8 != DAT_180cfc878) {
      iVar1 = *(int *)(puVar8 + 2);
      puVar10 = puVar8;
      while (*(int *)(puVar5 + 2) != iVar1) {
        if (puVar10 == *(undefined8 **)(DAT_180cfc888 + (DAT_180cfc8a0 & uVar9) * 0x10))
        goto LAB_180282698;
        puVar10 = (undefined8 *)puVar10[1];
        iVar1 = *(int *)(puVar10 + 2);
      }
      puVar10 = (undefined8 *)*puVar10;
    }
  }
LAB_180282698:
  puVar8 = (undefined8 *)puVar10[1];
  DAT_180cfc880 = DAT_180cfc880 + 1;
  *puVar5 = puVar10;
  puVar5[1] = puVar8;
  *puVar8 = puVar5;
  puVar10[1] = puVar5;
  lVar6 = DAT_180cfc888;
  uVar9 = DAT_180cfc8a0 & uVar9;
  puVar2 = *(undefined8 **)(DAT_180cfc888 + uVar9 * 0x10);
  if (puVar2 == DAT_180cfc878) {
    *(undefined8 **)(DAT_180cfc888 + uVar9 * 0x10) = puVar5;
  }
  else {
    if (puVar2 == puVar10) {
      *(undefined8 **)(DAT_180cfc888 + uVar9 * 0x10) = puVar5;
      goto LAB_1802826f7;
    }
    if (*(undefined8 **)(DAT_180cfc888 + 8 + uVar9 * 0x10) != puVar8) goto LAB_1802826f7;
  }
  *(undefined8 **)(lVar6 + 8 + uVar9 * 0x10) = puVar5;
LAB_1802826f7:
  *param_2 = puVar5;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



/* ===== 180282720 FUN_180282720 ===== */

void FUN_180282720(undefined8 *param_1)

{
  FUN_1802880a0(param_1,*param_1);
  thunk_FUN_1803d64e0(*param_1,0x88);
  return;
}



/* ===== 180282750 FUN_180282750 ===== */

void FUN_180282750(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)*param_1;
  *(undefined8 *)puVar1[1] = 0;
  puVar1 = (undefined8 *)*puVar1;
  while (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar1;
    FUN_18000f890(puVar1 + 6);
    FUN_18000f890(puVar1 + 2);
    thunk_FUN_1803d64e0(puVar1,0x58);
    puVar1 = puVar2;
  }
  thunk_FUN_1803d64e0(*param_1,0x58);
  return;
}



/* ===== 1802827d0 FUN_1802827d0 ===== */

void FUN_1802827d0(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)*param_1;
  *(undefined8 *)puVar1[1] = 0;
  puVar1 = (undefined8 *)*puVar1;
  while (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar1;
    FUN_1802753e0(puVar1 + 3);
    thunk_FUN_1803d64e0(puVar1,0x110);
    puVar1 = puVar2;
  }
  thunk_FUN_1803d64e0(*param_1,0x110);
  return;
}



/* ===== 180282840 FUN_180282840 ===== */

void FUN_180282840(undefined8 *param_1)

{
  FUN_180288100(param_1,*param_1);
  thunk_FUN_1803d64e0(*param_1,0xb0);
  return;
}



/* ===== 180282870 FUN_180282870 ===== */

void FUN_180282870(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)*param_1;
  *(undefined8 *)puVar1[1] = 0;
  puVar1 = (undefined8 *)*puVar1;
  while (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar1;
    thunk_FUN_1803d64e0(puVar1,0xc0);
    puVar1 = puVar2;
  }
  thunk_FUN_1803d64e0(*param_1,0xc0);
  return;
}



/* ===== 1802828d0 FUN_1802828d0 ===== */

void FUN_1802828d0(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)*param_1;
  *(undefined8 *)puVar1[1] = 0;
  puVar1 = (undefined8 *)*puVar1;
  while (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar1;
    FUN_18000f890(puVar1 + 6);
    FUN_18000f890(puVar1 + 2);
    thunk_FUN_1803d64e0(puVar1,0x50);
    puVar1 = puVar2;
  }
  thunk_FUN_1803d64e0(*param_1,0x50);
  return;
}



/* ===== 180282950 FUN_180282950 ===== */

undefined4 * FUN_180282950(undefined4 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined8 local_res10;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  lVar4 = FUN_1804ecaa0(0x50);
  *(longlong *)lVar4 = lVar4;
  *(longlong *)(lVar4 + 8) = lVar4;
  *(longlong *)(param_1 + 2) = lVar4;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 7;
  *(undefined8 *)(param_1 + 0xe) = 8;
  *param_1 = 0x3f800000;
  uVar2 = *(undefined8 *)(param_1 + 2);
  local_res10 = uVar2;
  if (0x7f < *(ulonglong *)(param_1 + 8)) {
    FUN_180026a10(0,*(ulonglong *)(param_1 + 8),&local_res10);
    return param_1;
  }
  puVar5 = (undefined8 *)FUN_1804ecaa0(0x80);
  puVar7 = auStack_28;
  puVar8 = auStack_28;
  lVar4 = *(longlong *)(param_1 + 6);
  if (*(longlong *)(param_1 + 10) - lVar4 == 0) goto LAB_180282a15;
  if ((ulonglong)((*(longlong *)(param_1 + 10) - lVar4 >> 3) * 8) < 0x1000) {
LAB_180282a0d:
    lVar6 = lVar4;
    puVar8 = puVar7;
  }
  else {
    lVar6 = *(longlong *)(lVar4 + -8);
    if (0x1f < (lVar4 - lVar6) - 8U) {
      pcVar3 = (code *)swi(0x29);
      lVar4 = (*pcVar3)(5);
      puVar7 = auStack_20;
      goto LAB_180282a0d;
    }
  }
  *(undefined8 *)(puVar8 + -8) = 0x180282a15;
  thunk_FUN_1803d64e0(lVar6);
LAB_180282a15:
  *(undefined8 **)(param_1 + 6) = puVar5;
  puVar1 = puVar5 + 0x10;
  *(undefined8 **)(param_1 + 8) = puVar1;
  *(undefined8 **)(param_1 + 10) = puVar1;
  for (; puVar5 != puVar1; puVar5 = puVar5 + 1) {
    *puVar5 = uVar2;
  }
  return param_1;
}



/* ===== 180282a60 FUN_180282a60 ===== */

void FUN_180282a60(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)*param_1;
  *(undefined8 *)puVar1[1] = 0;
  puVar1 = (undefined8 *)*puVar1;
  while (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar1;
    FUN_180068f30(puVar1 + 3);
    thunk_FUN_1803d64e0(puVar1,0x30);
    puVar1 = puVar2;
  }
  thunk_FUN_1803d64e0(*param_1,0x30);
  return;
}



/* ===== 180282ad0 FUN_180282ad0 ===== */

void FUN_180282ad0(longlong *param_1)

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
  for (; lVar3 != lVar2; lVar3 = lVar3 + 0x70) {
    FUN_18000f890(lVar3 + 0x48);
    FUN_18000f890(lVar3 + 0x28);
    FUN_18000f890(lVar3 + 8);
  }
  lVar3 = *param_1;
  lVar2 = lVar3;
  if (0xfff < (ulonglong)((param_1[2] - lVar3 >> 4) * 0x10)) {
    lVar2 = *(longlong *)(lVar3 + -8);
    if ((lVar3 - lVar2) - 8U < 0x20) goto LAB_180282b6a;
    lVar2 = 5;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar4 = auStack_20;
  }
  puVar5 = puVar4;
LAB_180282b6a:
  *(undefined8 *)(puVar5 + -8) = 0x180282b72;
  thunk_FUN_1803d64e0(lVar2);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* ===== 180282b90 FUN_180282b90 ===== */

longlong * FUN_180282b90(undefined8 param_1,longlong *param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_3 == param_4) {
    *param_2 = param_3;
    return param_2;
  }
  lVar2 = FUN_180285c10(param_4,DAT_180cfc990);
  lVar1 = DAT_180cfc990;
  for (lVar3 = lVar2; lVar3 != lVar1; lVar3 = lVar3 + 0x98) {
    FUN_18000f890(lVar3 + 0x70);
    FUN_18000f890(lVar3 + 0x48);
    FUN_18000f890(lVar3 + 0x28);
    FUN_18000f890(lVar3 + 8);
  }
  DAT_180cfc990 = lVar2;
  *param_2 = param_3;
  return param_2;
}



/* ===== 180282c50 FUN_180282c50 ===== */

void FUN_180282c50(longlong *param_1)

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
  for (; lVar3 != lVar2; lVar3 = lVar3 + 0x98) {
    FUN_18000f890(lVar3 + 0x70);
    FUN_18000f890(lVar3 + 0x48);
    FUN_18000f890(lVar3 + 0x28);
    FUN_18000f890(lVar3 + 8);
  }
  lVar3 = *param_1;
  lVar2 = lVar3;
  if (0xfff < (ulonglong)((param_1[2] - lVar3 >> 3) * 8)) {
    lVar2 = *(longlong *)(lVar3 + -8);
    if ((lVar3 - lVar2) - 8U < 0x20) goto LAB_180282cf9;
    lVar2 = 5;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar4 = auStack_20;
  }
  puVar5 = puVar4;
LAB_180282cf9:
  *(undefined8 *)(puVar5 + -8) = 0x180282d01;
  thunk_FUN_1803d64e0(lVar2);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* ===== 180282d20 FUN_180282d20 ===== */

void FUN_180282d20(longlong *param_1)

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
  for (; lVar3 != lVar2; lVar3 = lVar3 + 0x98) {
    FUN_18000f890(lVar3 + 0x78);
    FUN_18000f890(lVar3 + 0x58);
    FUN_18000f890(lVar3 + 0x28);
    FUN_18000f890(lVar3 + 8);
  }
  lVar3 = *param_1;
  lVar2 = lVar3;
  if (0xfff < (ulonglong)((param_1[2] - lVar3 >> 3) * 8)) {
    lVar2 = *(longlong *)(lVar3 + -8);
    if ((lVar3 - lVar2) - 8U < 0x20) goto LAB_180282dc9;
    lVar2 = 5;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar4 = auStack_20;
  }
  puVar5 = puVar4;
LAB_180282dc9:
  *(undefined8 *)(puVar5 + -8) = 0x180282dd1;
  thunk_FUN_1803d64e0(lVar2);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* ===== 180282df0 FUN_180282df0 ===== */

void FUN_180282df0(longlong *param_1)

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
  for (; lVar3 != lVar2; lVar3 = lVar3 + 0x90) {
    FUN_18000f890(lVar3 + 0x70);
    FUN_18000f890(lVar3 + 0x50);
    FUN_18000f890(lVar3 + 0x28);
    FUN_18000f890(lVar3 + 8);
  }
  lVar3 = *param_1;
  lVar2 = lVar3;
  if (0xfff < (ulonglong)((param_1[2] - lVar3 >> 4) << 4)) {
    lVar2 = *(longlong *)(lVar3 + -8);
    if ((lVar3 - lVar2) - 8U < 0x20) goto LAB_180282e9a;
    lVar2 = 5;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar4 = auStack_20;
  }
  puVar5 = puVar4;
LAB_180282e9a:
  *(undefined8 *)(puVar5 + -8) = 0x180282ea2;
  thunk_FUN_1803d64e0(lVar2);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* ===== 180282ec0 FUN_180282ec0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180282ec0(longlong param_1,longlong param_2,longlong param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_118 [32];
  undefined1 local_f8;
  longlong local_e8;
  longlong local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_118;
  lVar2 = param_2 - param_1;
  while( true ) {
    if (lVar2 < 0x1290) {
      FUN_180285eb0(param_1,param_2);
      return;
    }
    lVar2 = (param_2 - param_1) / 0x12 + (param_2 - param_1 >> 0x3f);
    lVar2 = (lVar2 >> 3) - (lVar2 >> 0x3f);
    lVar3 = lVar2 >> 1;
    if (param_3 < 1) break;
    lVar2 = lVar3 * 0x90 + param_1;
    FUN_180288ce0(param_1,lVar2,param_2 + -0x90,param_4);
    FUN_180288f30(&local_e8,param_1,lVar2,param_2);
    lVar2 = local_e0;
    lVar3 = local_e8;
    param_3 = (param_3 >> 1) + (param_3 >> 2);
    if ((local_e8 - param_1 >> 4) * -0x71c71c71c71c71c7 <
        (param_2 - local_e0 >> 4) * -0x71c71c71c71c71c7) {
      FUN_180282ec0(param_1,local_e8,param_3,param_4);
      param_1 = lVar2;
      lVar3 = param_2;
    }
    else {
      FUN_180282ec0(local_e0,param_2,param_3,param_4);
    }
    lVar2 = lVar3 - param_1;
    param_2 = lVar3;
  }
  if (0 < lVar3) {
    lVar4 = lVar3 * 0x90;
    do {
      local_d8 = *(undefined4 *)(param_1 + -0x90 + lVar4);
      local_b8 = *(undefined8 *)(lVar4 + -0x70 + param_1);
      lVar3 = lVar3 + -1;
      puVar1 = (undefined8 *)(lVar4 + -0x80 + param_1);
      uStack_c8 = *puVar1;
      uStack_c0 = puVar1[1];
      local_d4 = *(undefined4 *)(param_1 + -0x8c + lVar4);
      local_d0 = *(undefined8 *)(param_1 + -0x88 + lVar4);
      *(undefined1 *)(param_1 + -0x88 + lVar4) = 0;
      *(undefined8 *)(param_1 + -0x78 + lVar4) = 0;
      *(undefined8 *)(param_1 + -0x70 + lVar4) = 0xf;
      local_b0 = *(undefined8 *)(param_1 + -0x68 + lVar4);
      local_98 = *(undefined8 *)(lVar4 + -0x50 + param_1);
      puVar1 = (undefined8 *)(lVar4 + -0x60 + param_1);
      uStack_a8 = *puVar1;
      uStack_a0 = puVar1[1];
      *(undefined1 *)(param_1 + -0x68 + lVar4) = 0;
      *(undefined8 *)(param_1 + -0x58 + lVar4) = 0;
      *(undefined8 *)(param_1 + -0x50 + lVar4) = 0xf;
      local_90 = *(undefined4 *)(param_1 + -0x48 + lVar4);
      local_70 = *(undefined8 *)(lVar4 + -0x28 + param_1);
      puVar1 = (undefined8 *)(lVar4 + -0x38 + param_1);
      uStack_80 = *puVar1;
      uStack_78 = puVar1[1];
      local_88 = *(undefined8 *)(param_1 + -0x40 + lVar4);
      *(undefined1 *)(param_1 + -0x40 + lVar4) = 0;
      *(undefined8 *)(param_1 + -0x30 + lVar4) = 0;
      *(undefined8 *)(param_1 + -0x28 + lVar4) = 0xf;
      local_68 = *(undefined8 *)(param_1 + -0x20 + lVar4);
      local_50 = *(undefined8 *)(lVar4 + -8 + param_1);
      puVar1 = (undefined8 *)(lVar4 + -0x18 + param_1);
      uStack_60 = *puVar1;
      uStack_58 = *(undefined4 *)(puVar1 + 1);
      uStack_54 = *(undefined4 *)((longlong)puVar1 + 0xc);
      *(undefined1 *)(param_1 + -0x20 + lVar4) = 0;
      *(undefined8 *)(param_1 + -0x10 + lVar4) = 0;
      *(undefined8 *)(param_1 + -8 + lVar4) = 0xf;
      local_f8 = param_4;
      FUN_180288a20(param_1,lVar3,lVar2,&local_d8);
      FUN_18000f890(&local_68);
      FUN_18000f890(&local_88);
      FUN_18000f890(&local_b0);
      FUN_18000f890(&local_d0);
      lVar4 = lVar4 + -0x90;
    } while (0 < lVar3);
  }
  if (lVar2 < 2) {
    return;
  }
  do {
    if (1 < (param_2 - param_1 >> 4) * -0x71c71c71c71c71c7) {
      lVar2 = param_2 + -0x90;
      FUN_1802886b0(&local_d8,lVar2);
      FUN_180286320(lVar2,param_1);
      local_f8 = param_4;
      FUN_180288a20(param_1,0,(lVar2 - param_1 >> 4) * -0x71c71c71c71c71c7,&local_d8);
      FUN_18000f890(&local_68);
      FUN_18000f890(&local_88);
      FUN_18000f890(&local_b0);
      FUN_18000f890(&local_d0);
    }
    param_2 = param_2 + -0x90;
  } while (0x11f < param_2 - param_1);
  return;
}



/* ===== 180283250 FUN_180283250 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180283250(longlong param_1,longlong param_2,longlong param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_128 [32];
  undefined1 local_108;
  longlong local_f8;
  longlong local_f0;
  undefined4 local_e8 [2];
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_128;
  lVar2 = param_2 - param_1;
  while( true ) {
    if (lVar2 < 0x1398) {
      FUN_180286390(param_1,param_2);
      return;
    }
    lVar2 = (param_2 - param_1) / 0x26 + (param_2 - param_1 >> 0x3f);
    lVar2 = (lVar2 >> 2) - (lVar2 >> 0x3f);
    lVar3 = lVar2 >> 1;
    if (param_3 < 1) break;
    lVar2 = lVar3 * 0x98 + param_1;
    FUN_180289410(param_1,lVar2,param_2 + -0x98,param_4);
    FUN_180289660(&local_f8,param_1,lVar2,param_2);
    lVar2 = local_f0;
    lVar3 = local_f8;
    param_3 = (param_3 >> 1) + (param_3 >> 2);
    if ((local_f8 - param_1 >> 3) * -0x79435e50d79435e5 <
        (param_2 - local_f0 >> 3) * -0x79435e50d79435e5) {
      FUN_180283250(param_1,local_f8,param_3,param_4);
      param_1 = lVar2;
      lVar3 = param_2;
    }
    else {
      FUN_180283250(local_f0,param_2,param_3,param_4);
    }
    lVar2 = lVar3 - param_1;
    param_2 = lVar3;
  }
  if (0 < lVar3) {
    lVar4 = lVar3 * 0x98;
    do {
      local_e8[0] = *(undefined4 *)(param_1 + -0x98 + lVar4);
      local_c8 = *(undefined8 *)(lVar4 + -0x78 + param_1);
      lVar3 = lVar3 + -1;
      puVar1 = (undefined8 *)(lVar4 + -0x88 + param_1);
      uStack_d8 = *puVar1;
      uStack_d0 = puVar1[1];
      local_e0 = *(undefined8 *)(param_1 + -0x90 + lVar4);
      *(undefined1 *)(param_1 + -0x90 + lVar4) = 0;
      *(undefined8 *)(param_1 + -0x80 + lVar4) = 0;
      *(undefined8 *)(param_1 + -0x78 + lVar4) = 0xf;
      local_c0 = *(undefined8 *)(param_1 + -0x70 + lVar4);
      local_a8 = *(undefined8 *)(lVar4 + -0x58 + param_1);
      puVar1 = (undefined8 *)(lVar4 + -0x68 + param_1);
      uStack_b8 = *puVar1;
      uStack_b0 = puVar1[1];
      *(undefined1 *)(param_1 + -0x70 + lVar4) = 0;
      *(undefined8 *)(param_1 + -0x60 + lVar4) = 0;
      *(undefined8 *)(param_1 + -0x58 + lVar4) = 0xf;
      local_a0 = *(undefined4 *)(param_1 + -0x50 + lVar4);
      local_9c = *(undefined4 *)(param_1 + -0x4c + lVar4);
      local_98 = *(undefined1 *)(param_1 + -0x48 + lVar4);
      puVar1 = (undefined8 *)(lVar4 + -0x38 + param_1);
      uStack_88 = *puVar1;
      uStack_80 = puVar1[1];
      local_90 = *(undefined8 *)(param_1 + -0x40 + lVar4);
      local_78 = *(undefined8 *)(lVar4 + -0x28 + param_1);
      *(undefined1 *)(param_1 + -0x40 + lVar4) = 0;
      *(undefined8 *)(param_1 + -0x30 + lVar4) = 0;
      *(undefined8 *)(param_1 + -0x28 + lVar4) = 0xf;
      local_70 = *(undefined8 *)(param_1 + -0x20 + lVar4);
      local_58 = *(undefined8 *)(lVar4 + -8 + param_1);
      puVar1 = (undefined8 *)(lVar4 + -0x18 + param_1);
      uStack_68 = *puVar1;
      uStack_60 = *(undefined4 *)(puVar1 + 1);
      uStack_5c = *(undefined4 *)((longlong)puVar1 + 0xc);
      *(undefined1 *)(param_1 + -0x20 + lVar4) = 0;
      *(undefined8 *)(param_1 + -0x10 + lVar4) = 0;
      *(undefined8 *)(param_1 + -8 + lVar4) = 0xf;
      local_108 = param_4;
      FUN_180289130(param_1,lVar3,lVar2,local_e8);
      FUN_18000f890(&local_70);
      FUN_18000f890(&local_90);
      FUN_18000f890(&local_c0);
      FUN_18000f890(&local_e0);
      lVar4 = lVar4 + -0x98;
    } while (0 < lVar3);
  }
  if (lVar2 < 2) {
    return;
  }
  do {
    if (1 < (param_2 - param_1 >> 3) * -0x79435e50d79435e5) {
      lVar2 = param_2 + -0x98;
      FUN_1802887a0(local_e8,lVar2);
      FUN_180286810(lVar2,param_1);
      local_108 = param_4;
      FUN_180289130(param_1,0,(lVar2 - param_1 >> 3) * -0x79435e50d79435e5,local_e8);
      FUN_18000f890(&local_70);
      FUN_18000f890(&local_90);
      FUN_18000f890(&local_c0);
      FUN_18000f890(&local_e0);
    }
    param_2 = param_2 + -0x98;
  } while (0x12f < param_2 - param_1);
  return;
}



/* ===== 1802835f0 FUN_1802835f0 ===== */

void FUN_1802835f0(uint *param_1,uint *param_2,longlong param_3,undefined1 param_4)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  byte bVar4;
  bool bVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  ulonglong uVar9;
  uint *puVar10;
  uint *puVar11;
  undefined8 local_res8;
  uint *local_48;
  uint *local_40;
  
  lVar6 = (longlong)param_2 - (longlong)param_1;
  while( true ) {
    if (lVar6 >> 2 < 0x21) {
      if (param_1 != param_2) {
        for (puVar10 = param_1 + 1; puVar10 != param_2; puVar10 = puVar10 + 1) {
          uVar1 = *puVar10;
          uVar9 = (ulonglong)*param_1;
          lVar6 = FUN_180280d30(uVar1);
          iVar8 = (int)uVar9;
          lVar7 = FUN_180280d30(uVar9 & 0xffffffff);
          if ((lVar6 == 0) || (lVar7 == 0)) {
            bVar5 = (int)uVar1 < iVar8;
          }
          else {
            bVar4 = FUN_180023470(lVar6 + 0x28,lVar7 + 0x28);
            bVar5 = (bool)(bVar4 >> 7);
          }
          if (bVar5 == false) {
            puVar11 = puVar10;
            while( true ) {
              uVar2 = puVar11[-1];
              lVar6 = FUN_180280d30(uVar1);
              lVar7 = FUN_180280d30(uVar2);
              if ((lVar6 == 0) || (lVar7 == 0)) {
                bVar5 = (int)uVar1 < (int)uVar2;
              }
              else {
                bVar4 = FUN_180023470(lVar6 + 0x28,lVar7 + 0x28);
                bVar5 = (bool)(bVar4 >> 7);
              }
              if (bVar5 == false) break;
              *puVar11 = uVar2;
              puVar11 = puVar11 + -1;
            }
            *puVar11 = uVar1;
          }
          else {
            FUN_180540530(param_1 + 1,param_1,(longlong)puVar10 - (longlong)param_1);
            *param_1 = uVar1;
          }
        }
      }
      return;
    }
    lVar6 = (longlong)param_2 - (longlong)param_1 >> 3;
    if (param_3 < 1) break;
    local_res8 = param_1 + lVar6;
    lVar7 = (longlong)param_2 + (-4 - (longlong)param_1) >> 2;
    if (lVar7 < 0x29) {
      FUN_18028b6b0(param_1,local_res8,param_2 + -1);
      puVar10 = local_res8;
    }
    else {
      lVar7 = lVar7 + 1 >> 3;
      FUN_18028b6b0(param_1,param_1 + lVar7,param_1 + lVar7 * 2);
      puVar10 = local_res8;
      FUN_18028b6b0(local_res8 + -lVar7,local_res8,param_1 + lVar7 + lVar6);
      FUN_18028b6b0(param_2 + lVar7 * -2 + -1,param_2 + (-1 - lVar7));
      FUN_18028b6b0(param_1 + lVar7,puVar10,param_2 + (-1 - lVar7));
    }
    FUN_1802899b0(&local_48,param_1,puVar10,param_2);
    puVar11 = local_40;
    puVar10 = local_48;
    param_3 = (param_3 >> 1) + (param_3 >> 2);
    if ((longlong)local_48 - (longlong)param_1 >> 2 < (longlong)param_2 - (longlong)local_40 >> 2) {
      FUN_1802835f0(param_1,local_48,param_3,param_4);
      param_1 = puVar11;
      puVar10 = param_2;
    }
    else {
      FUN_1802835f0(local_40,param_2,param_3,param_4);
    }
    lVar6 = (longlong)puVar10 - (longlong)param_1;
    param_2 = puVar10;
  }
  lVar7 = (longlong)param_2 - (longlong)param_1 >> 2;
  while (0 < lVar6) {
    lVar3 = lVar6 + -1;
    lVar6 = lVar6 + -1;
    local_res8._4_4_ = (undefined4)((ulonglong)local_res8 >> 0x20);
    local_res8 = (uint *)CONCAT44(local_res8._4_4_,param_1[lVar3]);
    FUN_180289860(param_1,lVar6,lVar7,&local_res8,param_4);
  }
  if (lVar7 < 2) {
    return;
  }
  do {
    if (1 < (longlong)param_2 - (longlong)param_1 >> 2) {
      local_res8 = (uint *)CONCAT44(local_res8._4_4_,param_2[-1]);
      param_2[-1] = *param_1;
      FUN_180289860(param_1,0,(longlong)(param_2 + -1) - (longlong)param_1 >> 2,&local_res8,param_4)
      ;
    }
    param_2 = param_2 + -1;
  } while (7 < (longlong)param_2 - (longlong)param_1);
  return;
}



/* ===== 180283910 FUN_180283910 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180283910(longlong param_1,longlong param_2,longlong param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_128 [32];
  undefined1 local_108;
  longlong local_f8;
  longlong local_f0;
  undefined4 local_e8 [2];
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined4 local_58;
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_128;
  lVar2 = param_2 - param_1;
  while( true ) {
    if (lVar2 < 0x1398) {
      FUN_180286880(param_1,param_2);
      return;
    }
    lVar2 = (param_2 - param_1) / 0x26 + (param_2 - param_1 >> 0x3f);
    lVar2 = (lVar2 >> 2) - (lVar2 >> 0x3f);
    lVar3 = lVar2 >> 1;
    if (param_3 < 1) break;
    lVar2 = lVar3 * 0x98 + param_1;
    FUN_18028a0b0(param_1,lVar2,param_2 + -0x98,param_4);
    FUN_18028a300(&local_f8,param_1,lVar2,param_2);
    lVar2 = local_f0;
    lVar3 = local_f8;
    param_3 = (param_3 >> 1) + (param_3 >> 2);
    if ((local_f8 - param_1 >> 3) * -0x79435e50d79435e5 <
        (param_2 - local_f0 >> 3) * -0x79435e50d79435e5) {
      FUN_180283910(param_1,local_f8,param_3,param_4);
      param_1 = lVar2;
      lVar3 = param_2;
    }
    else {
      FUN_180283910(local_f0,param_2,param_3,param_4);
    }
    lVar2 = lVar3 - param_1;
    param_2 = lVar3;
  }
  if (0 < lVar3) {
    lVar4 = lVar3 * 0x98;
    do {
      local_e8[0] = *(undefined4 *)(param_1 + -0x98 + lVar4);
      local_c8 = *(undefined8 *)(lVar4 + -0x78 + param_1);
      lVar3 = lVar3 + -1;
      puVar1 = (undefined8 *)(lVar4 + -0x88 + param_1);
      uStack_d8 = *puVar1;
      uStack_d0 = puVar1[1];
      local_e0 = *(undefined8 *)(param_1 + -0x90 + lVar4);
      *(undefined1 *)(param_1 + -0x90 + lVar4) = 0;
      *(undefined8 *)(param_1 + -0x80 + lVar4) = 0;
      *(undefined8 *)(param_1 + -0x78 + lVar4) = 0xf;
      local_c0 = *(undefined8 *)(param_1 + -0x70 + lVar4);
      local_a8 = *(undefined8 *)(lVar4 + -0x58 + param_1);
      puVar1 = (undefined8 *)(lVar4 + -0x68 + param_1);
      uStack_b8 = *puVar1;
      uStack_b0 = puVar1[1];
      *(undefined1 *)(param_1 + -0x70 + lVar4) = 0;
      *(undefined8 *)(param_1 + -0x60 + lVar4) = 0;
      *(undefined8 *)(param_1 + -0x58 + lVar4) = 0xf;
      local_a0 = *(undefined8 *)(param_1 + -0x50 + lVar4);
      local_88 = *(undefined8 *)(lVar4 + -0x38 + param_1);
      puVar1 = (undefined8 *)(lVar4 + -0x48 + param_1);
      uStack_98 = *puVar1;
      uStack_90 = puVar1[1];
      *(undefined1 *)(param_1 + -0x50 + lVar4) = 0;
      *(undefined8 *)(param_1 + -0x40 + lVar4) = 0;
      *(undefined8 *)(param_1 + -0x38 + lVar4) = 0xf;
      local_80 = *(undefined4 *)(param_1 + -0x30 + lVar4);
      local_60 = *(undefined8 *)(lVar4 + -0x10 + param_1);
      local_78 = *(undefined8 *)(param_1 + -0x28 + lVar4);
      puVar1 = (undefined8 *)(lVar4 + -0x20 + param_1);
      uStack_70 = *puVar1;
      uStack_68 = *(undefined4 *)(puVar1 + 1);
      uStack_64 = *(undefined4 *)((longlong)puVar1 + 0xc);
      *(undefined1 *)(param_1 + -0x28 + lVar4) = 0;
      *(undefined8 *)(param_1 + -0x18 + lVar4) = 0;
      *(undefined8 *)(param_1 + -0x10 + lVar4) = 0xf;
      local_58 = *(undefined4 *)(param_1 + -8 + lVar4);
      local_108 = param_4;
      FUN_180289de0(param_1,lVar3,lVar2,local_e8);
      FUN_18000f890(&local_78);
      FUN_18000f890(&local_a0);
      FUN_18000f890(&local_c0);
      FUN_18000f890(&local_e0);
      lVar4 = lVar4 + -0x98;
    } while (0 < lVar3);
  }
  if (lVar2 < 2) {
    return;
  }
  do {
    if (1 < (param_2 - param_1 >> 3) * -0x79435e50d79435e5) {
      lVar2 = param_2 + -0x98;
      FUN_180288890(local_e8,lVar2);
      FUN_18027a540(lVar2,param_1);
      local_108 = param_4;
      FUN_180289de0(param_1,0,(lVar2 - param_1 >> 3) * -0x79435e50d79435e5,local_e8);
      FUN_18000f890(&local_78);
      FUN_18000f890(&local_a0);
      FUN_18000f890(&local_c0);
      FUN_18000f890(&local_e0);
    }
    param_2 = param_2 + -0x98;
  } while (0x12f < param_2 - param_1);
  return;
}



/* ===== 180283ca0 FUN_180283ca0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180283ca0(longlong param_1,longlong param_2,longlong param_3,undefined1 param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_198 [32];
  undefined1 local_178;
  longlong local_168;
  longlong local_160;
  longlong local_158;
  longlong local_150;
  undefined1 local_148 [8];
  undefined1 local_140 [32];
  undefined1 local_120 [32];
  undefined1 local_100 [32];
  undefined1 local_e0 [32];
  undefined1 local_c0 [32];
  undefined1 local_a0 [48];
  undefined1 local_70 [40];
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_198;
  lVar2 = param_2 - param_1;
  local_160 = param_3;
  while( true ) {
    if (lVar2 < 0x1ff8) {
      FUN_180286e40(param_1,param_2);
      return;
    }
    lVar2 = (param_2 - param_1) +
            SUB168(SEXT816(-0x7bdef7bdef7bdef7) * SEXT816(param_2 - param_1),8);
    lVar4 = (lVar2 >> 7) - (lVar2 >> 0x3f);
    lVar2 = lVar4 >> 1;
    if (param_3 < 1) break;
    local_168 = lVar2 * 0xf8 + param_1;
    lVar4 = ((param_2 + -0xf8) - param_1 >> 3) * -0x1084210842108421;
    if (lVar4 < 0x29) {
      FUN_18028b8d0(param_1,local_168,param_2 + -0xf8);
      lVar4 = local_168;
    }
    else {
      lVar3 = lVar4 + 1 >> 3;
      lVar1 = lVar3 * 0xf8 + param_1;
      FUN_18028b8d0(param_1,lVar1,lVar3 * 0x1f0 + param_1);
      lVar4 = local_168;
      FUN_18028b8d0(local_168 + lVar3 * -0xf8,local_168,(lVar3 + lVar2) * 0xf8 + param_1);
      lVar2 = param_2 + -0xf8 + lVar3 * -0xf8;
      FUN_18028b8d0(param_2 + -0xf8 + lVar3 * -0x1f0,lVar2);
      FUN_18028b8d0(lVar1,lVar4,lVar2);
      param_3 = local_160;
    }
    FUN_18028a670(&local_158,param_1,lVar4,param_2);
    lVar2 = local_150;
    lVar4 = local_158;
    param_3 = (param_3 >> 1) + (param_3 >> 2);
    local_160 = param_3;
    if ((local_158 - param_1 >> 3) * -0x1084210842108421 <
        (param_2 - local_150 >> 3) * -0x1084210842108421) {
      FUN_180283ca0(param_1,local_158,param_3,param_4);
      param_1 = lVar2;
      lVar4 = param_2;
    }
    else {
      FUN_180283ca0(local_150,param_2,param_3,param_4);
    }
    lVar2 = lVar4 - param_1;
    param_2 = lVar4;
  }
  while (0 < lVar2) {
    lVar2 = lVar2 + -1;
    FUN_1802774b0(local_148,lVar2 * 0xf8 + param_1);
    local_178 = param_4;
    FUN_18028a500(param_1,lVar2,lVar4,local_148);
    FUN_18000f890(local_70);
    FUN_18000f890(local_a0);
    FUN_18000f890(local_c0);
    FUN_18000f890(local_e0);
    FUN_18000f890(local_100);
    FUN_18000f890(local_120);
    FUN_18000f890(local_140);
  }
  if (lVar4 < 2) {
    return;
  }
  do {
    if (1 < (param_2 - param_1 >> 3) * -0x1084210842108421) {
      lVar2 = param_2 + -0xf8;
      FUN_1802774b0(local_148,lVar2);
      FUN_18027ca40(lVar2,param_1);
      local_178 = param_4;
      FUN_18028a500(param_1,0,(lVar2 - param_1 >> 3) * -0x1084210842108421,local_148);
      FUN_18000f890(local_70);
      FUN_18000f890(local_a0);
      FUN_18000f890(local_c0);
      FUN_18000f890(local_e0);
      FUN_18000f890(local_100);
      FUN_18000f890(local_120);
      FUN_18000f890(local_140);
    }
    param_2 = param_2 + -0xf8;
  } while (0x1ef < param_2 - param_1);
  return;
}



/* ===== 180284040 FUN_180284040 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180284040(undefined4 *param_1,longlong param_2,longlong param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  longlong local_c8;
  undefined4 *local_c0;
  undefined4 local_b8 [2];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_f8;
  lVar3 = param_2 - (longlong)param_1;
  while( true ) {
    if (lVar3 < 0xe70) {
      FUN_180287100(param_1,param_2);
      return;
    }
    if (param_3 < 1) break;
    FUN_1802873e0(&local_c8,param_1,param_2,param_4);
    puVar2 = local_c0;
    lVar5 = local_c8;
    param_3 = (param_3 >> 1) + (param_3 >> 2);
    if ((local_c8 - (longlong)param_1 >> 4) * 0x6db6db6db6db6db7 <
        (param_2 - (longlong)local_c0 >> 4) * 0x6db6db6db6db6db7) {
      FUN_180284040(param_1,local_c8,param_3,param_4);
      param_1 = puVar2;
      lVar5 = param_2;
    }
    else {
      FUN_180284040(local_c0,param_2,param_3,param_4);
    }
    lVar3 = lVar5 - (longlong)param_1;
    param_2 = lVar5;
  }
  lVar5 = (param_2 - (longlong)param_1 >> 4) * 0x6db6db6db6db6db7;
  lVar3 = lVar5 >> 1;
  if (0 < lVar3) {
    lVar4 = lVar3 * 0x70;
    do {
      local_b8[0] = *(undefined4 *)((longlong)param_1 + lVar4 + -0x70);
      local_98 = *(undefined8 *)(lVar4 + -0x50 + (longlong)param_1);
      lVar3 = lVar3 + -1;
      puVar1 = (undefined8 *)(lVar4 + -0x60 + (longlong)param_1);
      uStack_a8 = *puVar1;
      uStack_a0 = puVar1[1];
      local_b0 = *(undefined8 *)((longlong)param_1 + lVar4 + -0x68);
      *(undefined1 *)((longlong)param_1 + lVar4 + -0x68) = 0;
      *(undefined8 *)((longlong)param_1 + lVar4 + -0x58) = 0;
      *(undefined8 *)((longlong)param_1 + lVar4 + -0x50) = 0xf;
      local_90 = *(undefined8 *)((longlong)param_1 + lVar4 + -0x48);
      local_78 = *(undefined8 *)(lVar4 + -0x30 + (longlong)param_1);
      puVar1 = (undefined8 *)(lVar4 + -0x40 + (longlong)param_1);
      uStack_88 = *puVar1;
      uStack_80 = puVar1[1];
      *(undefined1 *)((longlong)param_1 + lVar4 + -0x48) = 0;
      *(undefined8 *)((longlong)param_1 + lVar4 + -0x38) = 0;
      *(undefined8 *)((longlong)param_1 + lVar4 + -0x30) = 0xf;
      local_70 = *(undefined8 *)((longlong)param_1 + lVar4 + -0x28);
      local_58 = *(undefined8 *)(lVar4 + -0x10 + (longlong)param_1);
      puVar1 = (undefined8 *)(lVar4 + -0x20 + (longlong)param_1);
      uStack_68 = *puVar1;
      uStack_60 = *(undefined4 *)(puVar1 + 1);
      uStack_5c = *(undefined4 *)((longlong)puVar1 + 0xc);
      *(undefined1 *)((longlong)param_1 + lVar4 + -0x28) = 0;
      *(undefined8 *)((longlong)param_1 + lVar4 + -0x18) = 0;
      *(undefined8 *)((longlong)param_1 + lVar4 + -0x10) = 0xf;
      local_50 = *(undefined4 *)((longlong)param_1 + lVar4 + -8);
      local_4c = *(undefined4 *)((longlong)param_1 + lVar4 + -4);
      local_d8 = param_4;
      FUN_18028a910(param_1,lVar3,lVar5,local_b8);
      FUN_18000f890(&local_70);
      FUN_18000f890(&local_90);
      FUN_18000f890(&local_b0);
      lVar4 = lVar4 + -0x70;
    } while (0 < lVar3);
  }
  if (lVar5 < 2) {
    return;
  }
  do {
    if (1 < (param_2 - (longlong)param_1 >> 4) * 0x6db6db6db6db6db7) {
      local_b8[0] = *(undefined4 *)(param_2 + -0x70);
      puVar1 = (undefined8 *)(param_2 + -0x68);
      local_98 = *(undefined8 *)(param_2 + -0x50);
      local_b0 = *puVar1;
      uStack_a8 = *(undefined8 *)(param_2 + -0x60);
      uStack_a0 = *(undefined8 *)(param_2 + -0x58);
      *(undefined1 *)puVar1 = 0;
      *(undefined8 *)(param_2 + -0x58) = 0;
      *(undefined8 *)(param_2 + -0x50) = 0xf;
      local_90 = *(undefined8 *)(param_2 + -0x48);
      local_78 = *(undefined8 *)(param_2 + -0x30);
      uStack_88 = *(undefined8 *)(param_2 + -0x40);
      uStack_80 = *(undefined8 *)(param_2 + -0x38);
      *(undefined1 *)(param_2 + -0x48) = 0;
      *(undefined8 *)(param_2 + -0x38) = 0;
      *(undefined8 *)(param_2 + -0x30) = 0xf;
      local_70 = *(undefined8 *)(param_2 + -0x28);
      local_58 = *(undefined8 *)(param_2 + -0x10);
      uStack_68 = *(undefined8 *)(param_2 + -0x20);
      uStack_60 = *(undefined4 *)(param_2 + -0x18);
      uStack_5c = *(undefined4 *)(param_2 + -0x14);
      *(undefined1 *)(param_2 + -0x28) = 0;
      *(undefined8 *)(param_2 + -0x18) = 0;
      *(undefined8 *)(param_2 + -0x10) = 0xf;
      local_50 = *(undefined4 *)(param_2 + -8);
      local_4c = *(undefined4 *)(param_2 + -4);
      *(undefined4 *)(param_2 + -0x70) = *param_1;
      FUN_18002ba60(puVar1,param_1 + 2);
      FUN_18002ba60(param_2 + -0x48,param_1 + 10);
      FUN_18002ba60(param_2 + -0x28,param_1 + 0x12);
      *(undefined4 *)(param_2 + -8) = param_1[0x1a];
      *(undefined4 *)(param_2 + -4) = param_1[0x1b];
      local_d8 = param_4;
      FUN_18028a910(param_1,0,((param_2 + -0x70) - (longlong)param_1 >> 4) * 0x6db6db6db6db6db7,
                    local_b8);
      FUN_18000f890(&local_70);
      FUN_18000f890(&local_90);
      FUN_18000f890(&local_b0);
    }
    param_2 = param_2 + -0x70;
  } while (0xdf < param_2 - (longlong)param_1);
  return;
}



/* ===== 1802843f0 FUN_1802843f0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_1802843f0(longlong param_1,longlong param_2,undefined1 param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  size_t sVar6;
  ulonglong uVar7;
  undefined1 auStack_ff8 [32];
  longlong local_fd8;
  undefined1 *local_fd0;
  ulonglong local_fc8;
  undefined1 local_fb8 [16];
  undefined1 *local_fa8;
  ulonglong local_fa0;
  undefined1 local_f98 [3952];
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_ff8;
  while( true ) {
    if (param_1 == param_2) {
      return param_1;
    }
    sVar6 = 0x1d;
    if (*(ulonglong *)(param_1 + 0x58) < 0x1d) {
      sVar6 = *(ulonglong *)(param_1 + 0x58);
    }
    puVar5 = (undefined8 *)(param_1 + 0x48);
    if (0xf < *(ulonglong *)(param_1 + 0x60)) {
      puVar5 = (undefined8 *)*puVar5;
    }
    iVar3 = memcmp(puVar5,"panorama/images/econ/patches/",sVar6);
    if ((iVar3 == 0) && (0x1c < sVar6)) break;
    param_1 = param_1 + 0x98;
  }
  do {
    lVar2 = param_2 + -0x98;
    if (param_1 == lVar2) {
      return param_1;
    }
    sVar6 = 0x1d;
    if (*(ulonglong *)(param_2 + -0x40) < 0x1d) {
      sVar6 = *(ulonglong *)(param_2 + -0x40);
    }
    puVar5 = (undefined8 *)(param_2 + -0x50);
    if (0xf < *(ulonglong *)(param_2 + -0x38)) {
      puVar5 = (undefined8 *)*puVar5;
    }
    iVar3 = memcmp(puVar5,"panorama/images/econ/patches/",sVar6);
  } while ((iVar3 == 0) && (param_2 = lVar2, 0x1c < sVar6));
  uVar7 = (lVar2 - param_1 >> 3) * -0x79435e50d79435e5;
  lVar1 = uVar7 + 1;
  if (0x1a < uVar7) {
    if ((uVar7 < 0x1af286bca1af287) && (0 < (longlong)uVar7)) {
      do {
        local_fd0 = (undefined1 *)FUN_1804ed030(uVar7 * 0x98,&DAT_1805757b2);
        if (local_fd0 != (undefined1 *)0x0) {
          if (0x1a < uVar7) goto LAB_180284561;
          goto LAB_18028454f;
        }
        uVar7 = uVar7 >> 1;
      } while (uVar7 != 0);
    }
    local_fd0 = (undefined1 *)0x0;
LAB_18028454f:
    FUN_1803d64e0(local_fd0);
    uVar7 = 0x1a;
  }
  local_fd0 = local_f98;
LAB_180284561:
  local_fd8 = lVar1;
  local_fc8 = uVar7;
  local_fa8 = local_fd0;
  local_fa0 = uVar7;
  plVar4 = (longlong *)FUN_1802875c0(local_fb8,param_1,lVar2,param_3);
  lVar2 = *plVar4;
  if (0x1a < local_fa0) {
    FUN_1803d64e0(local_fa8);
  }
  return lVar2;
}



/* ===== 1802845c0 FUN_1802845c0 ===== */

void FUN_1802845c0(undefined8 param_1,undefined4 *param_2,ulonglong param_3)

{
  code *pcVar1;
  undefined4 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [32];
  
  puVar5 = DAT_180cfc8b8;
  puVar6 = auStack_58;
  puVar7 = auStack_58;
  uVar4 = (DAT_180cfc8c0 - (longlong)DAT_180cfc8b0 >> 3) * -0x79435e50d79435e5;
  if (param_3 <= uVar4) {
    lVar3 = (longlong)DAT_180cfc8b8 - (longlong)DAT_180cfc8b0 >> 3;
    if ((ulonglong)(lVar3 * -0x79435e50d79435e5) < param_3) {
      puVar5 = DAT_180cfc8b0;
      if (DAT_180cfc8b0 != DAT_180cfc8b8) {
        do {
          *puVar5 = *param_2;
          FUN_18002ba60(puVar5 + 2,param_2 + 2);
          FUN_18002ba60(puVar5 + 10,param_2 + 10);
          FUN_18002ba60(puVar5 + 0x12,param_2 + 0x12);
          puVar5[0x1a] = param_2[0x1a];
          FUN_18002ba60(puVar5 + 0x1c,param_2 + 0x1c);
          puVar9 = param_2 + 0x24;
          param_2 = param_2 + 0x26;
          puVar5[0x24] = *puVar9;
          puVar5 = puVar5 + 0x26;
        } while (puVar5 != DAT_180cfc8b8);
      }
      puVar5 = DAT_180cfc8b8;
      for (lVar3 = param_3 + lVar3 * 0x79435e50d79435e5; lVar3 != 0; lVar3 = lVar3 + -1) {
        FUN_180288890(puVar5,param_2);
        param_2 = param_2 + 0x26;
        puVar5 = puVar5 + 0x26;
      }
      DAT_180cfc8b8 = puVar5;
      return;
    }
    puVar10 = DAT_180cfc8b0 + param_3 * 0x26;
    puVar5 = DAT_180cfc8b0;
    puVar9 = DAT_180cfc8b8;
    for (; puVar2 = puVar10, DAT_180cfc8b8 = puVar9, param_3 != 0; param_3 = param_3 - 1) {
      *puVar5 = *param_2;
      FUN_18002ba60(puVar5 + 2,param_2 + 2);
      FUN_18002ba60(puVar5 + 10,param_2 + 10);
      FUN_18002ba60(puVar5 + 0x12,param_2 + 0x12);
      puVar5[0x1a] = param_2[0x1a];
      FUN_18002ba60(puVar5 + 0x1c,param_2 + 0x1c);
      puVar9 = param_2 + 0x24;
      param_2 = param_2 + 0x26;
      puVar5[0x24] = *puVar9;
      puVar5 = puVar5 + 0x26;
      puVar9 = DAT_180cfc8b8;
    }
    for (; puVar2 != puVar9; puVar2 = puVar2 + 0x26) {
      FUN_18000f890(puVar2 + 0x1c);
      FUN_18000f890(puVar2 + 0x12);
      FUN_18000f890(puVar2 + 10);
      FUN_18000f890(puVar2 + 2);
    }
    DAT_180cfc8b8 = puVar10;
    return;
  }
  if (0x1af286bca1af286 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_1800118d0();
  }
  if (0x1af286bca1af286 - (uVar4 >> 1) < uVar4) {
    uVar4 = 0x1af286bca1af286;
  }
  else {
    uVar4 = (uVar4 >> 1) + uVar4;
    if (uVar4 < param_3) {
      uVar4 = param_3;
    }
  }
  puVar8 = auStack_58;
  puVar9 = DAT_180cfc8b0;
  if (DAT_180cfc8b0 == (undefined4 *)0x0) goto LAB_1802846e5;
  for (; puVar9 != puVar5; puVar9 = puVar9 + 0x26) {
    FUN_18000f890(puVar9 + 0x1c);
    FUN_18000f890(puVar9 + 0x12);
    FUN_18000f890(puVar9 + 10);
    FUN_18000f890(puVar9 + 2);
  }
  puVar5 = DAT_180cfc8b0;
  if ((ulonglong)((DAT_180cfc8c0 - (longlong)DAT_180cfc8b0 >> 3) * 8) < 0x1000) {
LAB_1802846c7:
    puVar7 = puVar6;
  }
  else {
    puVar5 = *(undefined4 **)(DAT_180cfc8b0 + -2);
    puVar9 = (undefined4 *)((longlong)DAT_180cfc8b0 + (-8 - (longlong)puVar5));
    if (&DAT_0000001f < puVar9) {
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(5);
      puVar6 = auStack_50;
      puVar5 = puVar9;
      goto LAB_1802846c7;
    }
  }
  *(undefined8 *)(puVar7 + -8) = 0x1802846cf;
  thunk_FUN_1803d64e0(puVar5);
  DAT_180cfc8c0 = 0;
  DAT_180cfc8b0 = (undefined4 *)0x0;
  DAT_180cfc8b8 = (undefined4 *)0x0;
  puVar8 = puVar7;
LAB_1802846e5:
  if (0x1af286bca1af286 < uVar4) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar8 + -8) = &UNK_1802848e9;
    FUN_18000d840();
  }
  *(undefined8 *)(puVar8 + -8) = 0x1802846fd;
  lVar3 = FUN_18000fb70(uVar4 * 0x98);
  DAT_180cfc8c0 = uVar4 * 0x98 + lVar3;
  DAT_180cfc8b0 = (undefined4 *)lVar3;
  DAT_180cfc8b8 = (undefined4 *)lVar3;
  for (; param_3 != 0; param_3 = param_3 - 1) {
    *(undefined8 *)(puVar8 + -8) = 0x18028472b;
    FUN_180288890(lVar3,param_2);
    lVar3 = lVar3 + 0x98;
    param_2 = param_2 + 0x26;
  }
  DAT_180cfc8b8 = (undefined4 *)lVar3;
  return;
}



/* ===== 1802848f0 FUN_1802848f0 ===== */

undefined8 * FUN_1802848f0(float *param_1,undefined8 *param_2,byte *param_3,undefined4 param_4)

{
  float *pfVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  float fVar12;
  
  uVar11 = (((((ulonglong)*param_3 ^ 0xcbf29ce484222325) * 0x100000001b3 ^ (ulonglong)param_3[1]) *
             0x100000001b3 ^ (ulonglong)param_3[2]) * 0x100000001b3 ^ (ulonglong)param_3[3]) *
           0x100000001b3;
  puVar8 = (undefined8 *)(uVar11 & *(ulonglong *)(param_1 + 0xc));
  lVar6 = *(longlong *)(param_1 + 6);
  puVar5 = *(undefined8 **)(lVar6 + 8 + (longlong)puVar8 * 0x10);
  pfVar1 = param_1 + 2;
  puVar9 = *(undefined8 **)pfVar1;
  if (puVar5 != puVar9) {
    puVar8 = *(undefined8 **)(lVar6 + (longlong)puVar8 * 0x10);
    iVar2 = *(int *)(puVar5 + 2);
    puVar9 = puVar5;
    while( true ) {
      if (*(int *)param_3 == iVar2) {
        *param_2 = puVar9;
        *(undefined1 *)(param_2 + 1) = 0;
        return param_2;
      }
      if (puVar9 == puVar8) break;
      puVar9 = (undefined8 *)puVar9[1];
      iVar2 = *(int *)(puVar9 + 2);
    }
  }
  if (*(longlong *)(param_1 + 4) == 0x1e1e1e1e1e1e1e1) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4cd0("unordered_map/set too long");
  }
  puVar5 = (undefined8 *)FUN_1804ecaa0(0x88,puVar8,lVar6,param_4,pfVar1,0);
  *(undefined4 *)(puVar5 + 2) = *(undefined4 *)param_3;
  puVar5[3] = 0;
  puVar5[4] = 0;
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0xf;
  *(undefined1 *)(puVar5 + 4) = 0;
  puVar5[8] = 0;
  puVar5[9] = 0;
  puVar5[10] = 0;
  puVar5[0xb] = 0xf;
  *(undefined1 *)(puVar5 + 8) = 0;
  puVar5[0xc] = 0;
  puVar5[0xd] = 0;
  puVar5[0xe] = 0;
  puVar5[0xf] = 0xf;
  *(undefined1 *)(puVar5 + 0xc) = 0;
  puVar5[0x10] = 0;
  uVar3 = *(ulonglong *)(param_1 + 0xe);
  if (*param_1 < (float)(*(longlong *)(param_1 + 4) + 1) / (float)uVar3) {
    fVar12 = (float)FUN_18053ef70((float)(*(longlong *)(param_1 + 4) + 1) / *param_1);
    lVar6 = 0;
    if ((DAT_1808acd00 <= fVar12) && (fVar12 = fVar12 - DAT_1808acd00, fVar12 < DAT_1808acd00)) {
      lVar6 = -0x8000000000000000;
    }
    uVar7 = 8;
    if (8 < (ulonglong)((longlong)fVar12 + lVar6)) {
      uVar7 = (longlong)fVar12 + lVar6;
    }
    uVar10 = uVar3;
    if ((uVar3 < uVar7) && ((0x1ff < uVar3 || (uVar10 = uVar3 * 8, uVar3 * 8 < uVar7)))) {
      uVar10 = uVar7;
    }
    FUN_1801d5c70(param_1,uVar10);
    puVar8 = *(undefined8 **)
              (*(longlong *)(param_1 + 6) + 8 + (uVar11 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
    puVar9 = *(undefined8 **)pfVar1;
    if (puVar8 != puVar9) {
      iVar2 = *(int *)(puVar8 + 2);
      puVar9 = puVar8;
      while (*(int *)(puVar5 + 2) != iVar2) {
        if (puVar9 == *(undefined8 **)
                       (*(longlong *)(param_1 + 6) + (uVar11 & *(ulonglong *)(param_1 + 0xc)) * 0x10
                       )) goto LAB_180284b41;
        puVar9 = (undefined8 *)puVar9[1];
        iVar2 = *(int *)(puVar9 + 2);
      }
      puVar9 = (undefined8 *)*puVar9;
    }
  }
LAB_180284b41:
  puVar8 = (undefined8 *)puVar9[1];
  *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + 1;
  *puVar5 = puVar9;
  puVar5[1] = puVar8;
  *puVar8 = puVar5;
  puVar9[1] = puVar5;
  lVar6 = *(longlong *)(param_1 + 6);
  uVar11 = *(ulonglong *)(param_1 + 0xc) & uVar11;
  puVar4 = *(undefined8 **)(lVar6 + uVar11 * 0x10);
  if (puVar4 == *(undefined8 **)pfVar1) {
    *(undefined8 **)(lVar6 + uVar11 * 0x10) = puVar5;
  }
  else {
    if (puVar4 == puVar9) {
      *(undefined8 **)(lVar6 + uVar11 * 0x10) = puVar5;
      goto LAB_180284b91;
    }
    if (*(undefined8 **)(lVar6 + 8 + uVar11 * 0x10) != puVar8) goto LAB_180284b91;
  }
  *(undefined8 **)(lVar6 + 8 + uVar11 * 0x10) = puVar5;
LAB_180284b91:
  *param_2 = puVar5;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



/* ===== 180284bb0 FUN_180284bb0 ===== */

undefined8 * FUN_180284bb0(float *param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  size_t _Size;
  undefined8 uVar2;
  int iVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 *_Buf1;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  float fVar12;
  
  uVar1 = param_3[2];
  uVar8 = param_3[3];
  puVar4 = param_3;
  if (0xf < uVar8) {
    puVar4 = (undefined8 *)*param_3;
  }
  uVar5 = 0;
  uVar11 = 0xcbf29ce484222325;
  if (uVar1 != 0) {
    do {
      uVar11 = (uVar11 ^ *(byte *)(uVar5 + (longlong)puVar4)) * 0x100000001b3;
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar1);
  }
  puVar4 = *(undefined8 **)
            (*(longlong *)(param_1 + 6) + 8 + (uVar11 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
  puVar10 = *(undefined8 **)(param_1 + 2);
  if (puVar4 != *(undefined8 **)(param_1 + 2)) {
    puVar10 = *(undefined8 **)
               (*(longlong *)(param_1 + 6) + (uVar11 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
    while( true ) {
      puVar9 = puVar4 + 2;
      if (0xf < (ulonglong)puVar4[5]) {
        puVar9 = (undefined8 *)*puVar9;
      }
      if (uVar8 < 0x10) {
        puVar6 = param_3;
      }
      else {
        puVar6 = (undefined8 *)*param_3;
      }
      if ((uVar1 == puVar4[4]) &&
         ((uVar1 == 0 || (iVar3 = memcmp(puVar6,puVar9,uVar1), iVar3 == 0)))) {
        *param_2 = puVar4;
        *(undefined1 *)(param_2 + 1) = 0;
        return param_2;
      }
      if (puVar4 == puVar10) break;
      puVar4 = (undefined8 *)puVar4[1];
    }
    puVar10 = puVar4;
  }
  if (*(longlong *)(param_1 + 4) == 0x2e8ba2e8ba2e8ba) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4cd0("unordered_map/set too long");
  }
  puVar4 = (undefined8 *)FUN_1804ecaa0(0x58);
  puVar4[2] = 0;
  puVar4[3] = 0;
  puVar4[4] = 0;
  puVar4[5] = 0;
  uVar2 = param_3[1];
  puVar4[2] = *param_3;
  puVar4[3] = uVar2;
  uVar2 = param_3[3];
  puVar4[4] = param_3[2];
  puVar4[5] = uVar2;
  param_3[2] = 0;
  param_3[3] = 0xf;
  *(undefined1 *)param_3 = 0;
  *(undefined4 *)(puVar4 + 10) = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[8] = 0;
  puVar4[9] = 0xf;
  *(undefined1 *)(puVar4 + 6) = 0;
  *(undefined4 *)((longlong)puVar4 + 0x54) = 0xffffffff;
  uVar1 = *(ulonglong *)(param_1 + 0xe);
  if (*param_1 < (float)(*(longlong *)(param_1 + 4) + 1) / (float)uVar1) {
    fVar12 = (float)FUN_18053ef70((float)(*(longlong *)(param_1 + 4) + 1) / *param_1);
    lVar7 = 0;
    if ((DAT_1808acd00 <= fVar12) && (fVar12 = fVar12 - DAT_1808acd00, fVar12 < DAT_1808acd00)) {
      lVar7 = -0x8000000000000000;
    }
    uVar8 = 8;
    if (8 < (ulonglong)((longlong)fVar12 + lVar7)) {
      uVar8 = (longlong)fVar12 + lVar7;
    }
    uVar5 = uVar1;
    if ((uVar1 < uVar8) && ((0x1ff < uVar1 || (uVar5 = uVar1 * 8, uVar1 * 8 < uVar8)))) {
      uVar5 = uVar8;
    }
    FUN_18028afd0(param_1,uVar5);
    puVar9 = *(undefined8 **)
              (*(longlong *)(param_1 + 6) + 8 + (uVar11 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
    puVar10 = *(undefined8 **)(param_1 + 2);
    if (puVar9 != *(undefined8 **)(param_1 + 2)) {
      puVar10 = *(undefined8 **)
                 (*(longlong *)(param_1 + 6) + (uVar11 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
      uVar1 = puVar4[5];
      _Size = puVar4[4];
      while( true ) {
        puVar6 = puVar9 + 2;
        if (0xf < (ulonglong)puVar9[5]) {
          puVar6 = (undefined8 *)*puVar6;
        }
        if (uVar1 < 0x10) {
          _Buf1 = puVar4 + 2;
        }
        else {
          _Buf1 = (undefined8 *)puVar4[2];
        }
        if ((_Size == puVar9[4]) &&
           ((_Size == 0 || (iVar3 = memcmp(_Buf1,puVar6,_Size), iVar3 == 0)))) break;
        if (puVar9 == puVar10) goto LAB_180284e5d;
        puVar9 = (undefined8 *)puVar9[1];
      }
      puVar9 = (undefined8 *)*puVar9;
LAB_180284e5d:
      puVar10 = puVar9;
    }
  }
  puVar9 = (undefined8 *)puVar10[1];
  *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + 1;
  *puVar4 = puVar10;
  puVar4[1] = puVar9;
  *puVar9 = puVar4;
  puVar10[1] = puVar4;
  lVar7 = *(longlong *)(param_1 + 6);
  uVar11 = *(ulonglong *)(param_1 + 0xc) & uVar11;
  puVar6 = *(undefined8 **)(lVar7 + uVar11 * 0x10);
  if (puVar6 == *(undefined8 **)(param_1 + 2)) {
    *(undefined8 **)(lVar7 + uVar11 * 0x10) = puVar4;
  }
  else {
    if (puVar6 == puVar10) {
      *(undefined8 **)(lVar7 + uVar11 * 0x10) = puVar4;
      goto LAB_180284eb0;
    }
    if (*(undefined8 **)(lVar7 + 8 + uVar11 * 0x10) != puVar9) goto LAB_180284eb0;
  }
  *(undefined8 **)(lVar7 + 8 + uVar11 * 0x10) = puVar4;
LAB_180284eb0:
  *param_2 = puVar4;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



/* ===== 180284ee0 FUN_180284ee0 ===== */

undefined8 * FUN_180284ee0(float *param_1,undefined8 *param_2,byte *param_3,undefined4 param_4)

{
  float *pfVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  float fVar12;
  
  uVar11 = (((((ulonglong)*param_3 ^ 0xcbf29ce484222325) * 0x100000001b3 ^ (ulonglong)param_3[1]) *
             0x100000001b3 ^ (ulonglong)param_3[2]) * 0x100000001b3 ^ (ulonglong)param_3[3]) *
           0x100000001b3;
  puVar8 = (undefined8 *)(uVar11 & *(ulonglong *)(param_1 + 0xc));
  lVar6 = *(longlong *)(param_1 + 6);
  puVar5 = *(undefined8 **)(lVar6 + 8 + (longlong)puVar8 * 0x10);
  pfVar1 = param_1 + 2;
  puVar9 = *(undefined8 **)pfVar1;
  if (puVar5 != puVar9) {
    puVar8 = *(undefined8 **)(lVar6 + (longlong)puVar8 * 0x10);
    iVar2 = *(int *)(puVar5 + 2);
    puVar9 = puVar5;
    while( true ) {
      if (*(int *)param_3 == iVar2) {
        *param_2 = puVar9;
        *(undefined1 *)(param_2 + 1) = 0;
        return param_2;
      }
      if (puVar9 == puVar8) break;
      puVar9 = (undefined8 *)puVar9[1];
      iVar2 = *(int *)(puVar9 + 2);
    }
  }
  if (*(longlong *)(param_1 + 4) == 0xf0f0f0f0f0f0f0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4cd0("unordered_map/set too long");
  }
  puVar5 = (undefined8 *)FUN_1804ecaa0(0x110,puVar8,lVar6,param_4,pfVar1,0);
  *(undefined4 *)(puVar5 + 2) = *(undefined4 *)param_3;
  puVar5[3] = 0;
  *(undefined4 *)((longlong)puVar5 + 0xe9) = 0;
  *(undefined2 *)((longlong)puVar5 + 0xed) = 0;
  *(undefined1 *)((longlong)puVar5 + 0xef) = 0;
  puVar5[4] = 0;
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0xf;
  *(undefined1 *)(puVar5 + 4) = 0;
  puVar5[8] = 0;
  puVar5[9] = 0;
  puVar5[10] = 0;
  puVar5[0xb] = 0xf;
  *(undefined1 *)(puVar5 + 8) = 0;
  puVar5[0xc] = 0;
  puVar5[0xd] = 0;
  puVar5[0xe] = 0;
  puVar5[0xf] = 0xf;
  *(undefined1 *)(puVar5 + 0xc) = 0;
  puVar5[0x10] = 0;
  puVar5[0x11] = 0;
  puVar5[0x12] = 0;
  puVar5[0x13] = 0xf;
  *(undefined1 *)(puVar5 + 0x10) = 0;
  puVar5[0x14] = 0;
  puVar5[0x15] = 0;
  puVar5[0x16] = 0;
  puVar5[0x17] = 0xf;
  *(undefined1 *)(puVar5 + 0x14) = 0;
  puVar5[0x18] = 0;
  puVar5[0x19] = 0;
  puVar5[0x1a] = 0;
  puVar5[0x1b] = 0xf;
  *(undefined1 *)(puVar5 + 0x18) = 0;
  puVar5[0x1c] = 0;
  *(undefined1 *)(puVar5 + 0x1d) = 0;
  puVar5[0x1e] = 0;
  puVar5[0x1f] = 0;
  puVar5[0x20] = 0;
  puVar5[0x21] = 0xf;
  *(undefined1 *)(puVar5 + 0x1e) = 0;
  uVar3 = *(ulonglong *)(param_1 + 0xe);
  if (*param_1 < (float)(*(longlong *)(param_1 + 4) + 1) / (float)uVar3) {
    fVar12 = (float)FUN_18053ef70((float)(*(longlong *)(param_1 + 4) + 1) / *param_1);
    lVar6 = 0;
    if ((DAT_1808acd00 <= fVar12) && (fVar12 = fVar12 - DAT_1808acd00, fVar12 < DAT_1808acd00)) {
      lVar6 = -0x8000000000000000;
    }
    uVar7 = 8;
    if (8 < (ulonglong)((longlong)fVar12 + lVar6)) {
      uVar7 = (longlong)fVar12 + lVar6;
    }
    uVar10 = uVar3;
    if ((uVar3 < uVar7) && ((0x1ff < uVar3 || (uVar10 = uVar3 * 8, uVar3 * 8 < uVar7)))) {
      uVar10 = uVar7;
    }
    FUN_1801d5c70(param_1,uVar10);
    puVar8 = *(undefined8 **)
              (*(longlong *)(param_1 + 6) + 8 + (uVar11 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
    puVar9 = *(undefined8 **)pfVar1;
    if (puVar8 != puVar9) {
      iVar2 = *(int *)(puVar8 + 2);
      puVar9 = puVar8;
      while (*(int *)(puVar5 + 2) != iVar2) {
        if (puVar9 == *(undefined8 **)
                       (*(longlong *)(param_1 + 6) + (uVar11 & *(ulonglong *)(param_1 + 0xc)) * 0x10
                       )) goto LAB_1802851c5;
        puVar9 = (undefined8 *)puVar9[1];
        iVar2 = *(int *)(puVar9 + 2);
      }
      puVar9 = (undefined8 *)*puVar9;
    }
  }
LAB_1802851c5:
  puVar8 = (undefined8 *)puVar9[1];
  *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + 1;
  *puVar5 = puVar9;
  puVar5[1] = puVar8;
  *puVar8 = puVar5;
  puVar9[1] = puVar5;
  lVar6 = *(longlong *)(param_1 + 6);
  uVar11 = *(ulonglong *)(param_1 + 0xc) & uVar11;
  puVar4 = *(undefined8 **)(lVar6 + uVar11 * 0x10);
  if (puVar4 == *(undefined8 **)pfVar1) {
    *(undefined8 **)(lVar6 + uVar11 * 0x10) = puVar5;
  }
  else {
    if (puVar4 == puVar9) {
      *(undefined8 **)(lVar6 + uVar11 * 0x10) = puVar5;
      goto LAB_180285215;
    }
    if (*(undefined8 **)(lVar6 + 8 + uVar11 * 0x10) != puVar8) goto LAB_180285215;
  }
  *(undefined8 **)(lVar6 + 8 + uVar11 * 0x10) = puVar5;
LAB_180285215:
  *param_2 = puVar5;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



/* ===== 180285230 FUN_180285230 ===== */

undefined8 * FUN_180285230(float *param_1,undefined8 *param_2,byte *param_3,undefined4 param_4)

{
  float *pfVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  float fVar12;
  
  uVar11 = (((((ulonglong)*param_3 ^ 0xcbf29ce484222325) * 0x100000001b3 ^ (ulonglong)param_3[1]) *
             0x100000001b3 ^ (ulonglong)param_3[2]) * 0x100000001b3 ^ (ulonglong)param_3[3]) *
           0x100000001b3;
  puVar8 = (undefined8 *)(uVar11 & *(ulonglong *)(param_1 + 0xc));
  lVar6 = *(longlong *)(param_1 + 6);
  puVar5 = *(undefined8 **)(lVar6 + 8 + (longlong)puVar8 * 0x10);
  pfVar1 = param_1 + 2;
  puVar9 = *(undefined8 **)pfVar1;
  if (puVar5 != puVar9) {
    puVar8 = *(undefined8 **)(lVar6 + (longlong)puVar8 * 0x10);
    iVar2 = *(int *)(puVar5 + 2);
    puVar9 = puVar5;
    while( true ) {
      if (*(int *)param_3 == iVar2) {
        *param_2 = puVar9;
        *(undefined1 *)(param_2 + 1) = 0;
        return param_2;
      }
      if (puVar9 == puVar8) break;
      puVar9 = (undefined8 *)puVar9[1];
      iVar2 = *(int *)(puVar9 + 2);
    }
  }
  if (*(longlong *)(param_1 + 4) == 0x1745d1745d1745d) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4cd0("unordered_map/set too long");
  }
  puVar5 = (undefined8 *)FUN_1804ecaa0(0xb0,puVar8,lVar6,param_4,pfVar1,0);
  *(undefined4 *)(puVar5 + 2) = *(undefined4 *)param_3;
  puVar5[3] = 0;
  puVar5[0x10] = 0;
  puVar5[0x15] = 0;
  puVar5[4] = 0;
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0xf;
  *(undefined1 *)(puVar5 + 4) = 0;
  puVar5[8] = 0;
  puVar5[9] = 0;
  puVar5[10] = 0;
  puVar5[0xb] = 0xf;
  *(undefined1 *)(puVar5 + 8) = 0;
  puVar5[0xc] = 0;
  puVar5[0xd] = 0;
  puVar5[0xe] = 0;
  puVar5[0xf] = 0xf;
  *(undefined1 *)(puVar5 + 0xc) = 0;
  puVar5[0x11] = 0;
  puVar5[0x12] = 0;
  puVar5[0x13] = 0;
  puVar5[0x14] = 0xf;
  *(undefined1 *)(puVar5 + 0x11) = 0;
  uVar3 = *(ulonglong *)(param_1 + 0xe);
  if (*param_1 < (float)(*(longlong *)(param_1 + 4) + 1) / (float)uVar3) {
    fVar12 = (float)FUN_18053ef70((float)(*(longlong *)(param_1 + 4) + 1) / *param_1);
    lVar6 = 0;
    if ((DAT_1808acd00 <= fVar12) && (fVar12 = fVar12 - DAT_1808acd00, fVar12 < DAT_1808acd00)) {
      lVar6 = -0x8000000000000000;
    }
    uVar7 = 8;
    if (8 < (ulonglong)((longlong)fVar12 + lVar6)) {
      uVar7 = (longlong)fVar12 + lVar6;
    }
    uVar10 = uVar3;
    if ((uVar3 < uVar7) && ((0x1ff < uVar3 || (uVar10 = uVar3 * 8, uVar3 * 8 < uVar7)))) {
      uVar10 = uVar7;
    }
    FUN_1801d5c70(param_1,uVar10);
    puVar8 = *(undefined8 **)
              (*(longlong *)(param_1 + 6) + 8 + (uVar11 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
    puVar9 = *(undefined8 **)pfVar1;
    if (puVar8 != puVar9) {
      iVar2 = *(int *)(puVar8 + 2);
      puVar9 = puVar8;
      while (*(int *)(puVar5 + 2) != iVar2) {
        if (puVar9 == *(undefined8 **)
                       (*(longlong *)(param_1 + 6) + (uVar11 & *(ulonglong *)(param_1 + 0xc)) * 0x10
                       )) goto LAB_1802854a7;
        puVar9 = (undefined8 *)puVar9[1];
        iVar2 = *(int *)(puVar9 + 2);
      }
      puVar9 = (undefined8 *)*puVar9;
    }
  }
LAB_1802854a7:
  puVar8 = (undefined8 *)puVar9[1];
  *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + 1;
  *puVar5 = puVar9;
  puVar5[1] = puVar8;
  *puVar8 = puVar5;
  puVar9[1] = puVar5;
  lVar6 = *(longlong *)(param_1 + 6);
  uVar11 = *(ulonglong *)(param_1 + 0xc) & uVar11;
  puVar4 = *(undefined8 **)(lVar6 + uVar11 * 0x10);
  if (puVar4 == *(undefined8 **)pfVar1) {
    *(undefined8 **)(lVar6 + uVar11 * 0x10) = puVar5;
  }
  else {
    if (puVar4 == puVar9) {
      *(undefined8 **)(lVar6 + uVar11 * 0x10) = puVar5;
      goto LAB_1802854f7;
    }
    if (*(undefined8 **)(lVar6 + 8 + uVar11 * 0x10) != puVar8) goto LAB_1802854f7;
  }
  *(undefined8 **)(lVar6 + 8 + uVar11 * 0x10) = puVar5;
LAB_1802854f7:
  *param_2 = puVar5;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



/* ===== 180285520 FUN_180285520 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_180285520(undefined8 param_1,longlong *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  size_t _Size;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined8 *_Buf1;
  undefined8 *puVar7;
  ulonglong uVar8;
  undefined8 *local_58;
  longlong local_50;
  
  puVar5 = param_3;
  if (0xf < (ulonglong)param_3[3]) {
    puVar5 = (undefined8 *)*param_3;
  }
  uVar8 = 0xcbf29ce484222325;
  uVar6 = 0;
  if (param_3[2] != 0) {
    do {
      uVar8 = (uVar8 ^ *(byte *)(uVar6 + (longlong)puVar5)) * 0x100000001b3;
      uVar6 = uVar6 + 1;
    } while (uVar6 < (ulonglong)param_3[2]);
  }
  FUN_1800268a0(&DAT_180ca14e0,&local_58,param_3,uVar8);
  if (local_50 != 0) {
    *param_2 = local_50;
    *(undefined1 *)(param_2 + 1) = 0;
    return param_2;
  }
  if (DAT_180ca14f0 == 0x492492492492492) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4cd0("unordered_map/set too long");
  }
  puVar5 = (undefined8 *)FUN_1804ecaa0(0x38);
  puVar5[2] = 0;
  puVar5[3] = 0;
  puVar5[4] = 0;
  puVar5[5] = 0;
  uVar2 = param_3[1];
  puVar5[2] = *param_3;
  puVar5[3] = uVar2;
  uVar2 = param_3[3];
  puVar5[4] = param_3[2];
  puVar5[5] = uVar2;
  param_3[2] = 0;
  param_3[3] = 0xf;
  *(undefined1 *)param_3 = 0;
  *(undefined4 *)(puVar5 + 6) = 0;
  if (_DAT_180ca14e0 < (float)(DAT_180ca14f0 + 1) / (float)DAT_180ca1518) {
    FUN_180029e40(&DAT_180ca14e0);
    puVar7 = *(undefined8 **)(DAT_180ca14f8 + 8 + (DAT_180ca1510 & uVar8) * 0x10);
    local_58 = DAT_180ca14e8;
    if (puVar7 != DAT_180ca14e8) {
      puVar1 = *(undefined8 **)(DAT_180ca14f8 + (DAT_180ca1510 & uVar8) * 0x10);
      uVar6 = puVar5[5];
      _Size = puVar5[4];
      local_58 = puVar7;
      while( true ) {
        puVar7 = local_58 + 2;
        if (0xf < (ulonglong)local_58[5]) {
          puVar7 = (undefined8 *)*puVar7;
        }
        if (uVar6 < 0x10) {
          _Buf1 = puVar5 + 2;
        }
        else {
          _Buf1 = (undefined8 *)puVar5[2];
        }
        if ((_Size == local_58[4]) &&
           ((_Size == 0 || (iVar4 = memcmp(_Buf1,puVar7,_Size), iVar4 == 0)))) break;
        if (local_58 == puVar1) goto LAB_18028572d;
        local_58 = (undefined8 *)local_58[1];
      }
      local_58 = (undefined8 *)*local_58;
    }
  }
LAB_18028572d:
  puVar7 = (undefined8 *)local_58[1];
  DAT_180ca14f0 = DAT_180ca14f0 + 1;
  *puVar5 = local_58;
  puVar5[1] = puVar7;
  *puVar7 = puVar5;
  local_58[1] = puVar5;
  lVar3 = DAT_180ca14f8;
  uVar8 = DAT_180ca1510 & uVar8;
  puVar1 = *(undefined8 **)(DAT_180ca14f8 + uVar8 * 0x10);
  if (puVar1 == DAT_180ca14e8) {
    *(undefined8 **)(DAT_180ca14f8 + uVar8 * 0x10) = puVar5;
  }
  else {
    if (puVar1 == local_58) {
      *(undefined8 **)(DAT_180ca14f8 + uVar8 * 0x10) = puVar5;
      goto LAB_180285787;
    }
    if (*(undefined8 **)(DAT_180ca14f8 + 8 + uVar8 * 0x10) != puVar7) goto LAB_180285787;
  }
  *(undefined8 **)(lVar3 + 8 + uVar8 * 0x10) = puVar5;
LAB_180285787:
  *param_2 = (longlong)puVar5;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



/* ===== 1802857b0 FUN_1802857b0 ===== */

undefined8 * FUN_1802857b0(undefined8 param_1,undefined8 *param_2,byte *param_3,undefined4 param_4)

{
  int iVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  float fVar11;
  
  uVar8 = (((((ulonglong)*param_3 ^ 0xcbf29ce484222325) * 0x100000001b3 ^ (ulonglong)param_3[1]) *
            0x100000001b3 ^ (ulonglong)param_3[2]) * 0x100000001b3 ^ (ulonglong)param_3[3]) *
          0x100000001b3;
  puVar7 = (undefined8 *)(DAT_180cfc900 & uVar8);
  puVar4 = *(undefined8 **)(DAT_180cfc8e8 + 8 + (longlong)puVar7 * 0x10);
  puVar9 = DAT_180cfc8d8;
  if (puVar4 != DAT_180cfc8d8) {
    puVar7 = *(undefined8 **)(DAT_180cfc8e8 + (longlong)puVar7 * 0x10);
    iVar1 = *(int *)(puVar4 + 2);
    puVar9 = puVar4;
    while( true ) {
      if (*(int *)param_3 == iVar1) {
        *param_2 = puVar9;
        *(undefined1 *)(param_2 + 1) = 0;
        return param_2;
      }
      if (puVar9 == puVar7) break;
      puVar9 = (undefined8 *)puVar9[1];
      iVar1 = *(int *)(puVar9 + 2);
    }
  }
  if (DAT_180cfc8e0 == 0x555555555555555) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4cd0("unordered_map/set too long");
  }
  puVar4 = (undefined8 *)FUN_1804ecaa0(0x30,puVar7,DAT_180cfc8e8,param_4,&DAT_180cfc8d8,0);
  *(undefined4 *)(puVar4 + 2) = *(undefined4 *)param_3;
  puVar4[3] = 0;
  puVar4[4] = 0;
  puVar4[5] = 0;
  uVar3 = DAT_180cfc908;
  if (DAT_180cfc8d0 < (float)(DAT_180cfc8e0 + 1) / (float)DAT_180cfc908) {
    fVar11 = (float)FUN_18053ef70((float)(DAT_180cfc8e0 + 1) / DAT_180cfc8d0);
    lVar5 = 0;
    if ((DAT_1808acd00 <= fVar11) && (fVar11 = fVar11 - DAT_1808acd00, fVar11 < DAT_1808acd00)) {
      lVar5 = -0x8000000000000000;
    }
    uVar6 = 8;
    if (8 < (ulonglong)((longlong)fVar11 + lVar5)) {
      uVar6 = (longlong)fVar11 + lVar5;
    }
    uVar10 = uVar3;
    if ((uVar3 < uVar6) && ((0x1ff < uVar3 || (uVar10 = uVar3 * 8, uVar3 * 8 < uVar6)))) {
      uVar10 = uVar6;
    }
    FUN_18028b270(uVar6,uVar10);
    puVar7 = *(undefined8 **)(DAT_180cfc8e8 + 8 + (DAT_180cfc900 & uVar8) * 0x10);
    puVar9 = DAT_180cfc8d8;
    if (puVar7 != DAT_180cfc8d8) {
      iVar1 = *(int *)(puVar7 + 2);
      puVar9 = puVar7;
      while (*(int *)(puVar4 + 2) != iVar1) {
        if (puVar9 == *(undefined8 **)(DAT_180cfc8e8 + (DAT_180cfc900 & uVar8) * 0x10))
        goto LAB_1802859e8;
        puVar9 = (undefined8 *)puVar9[1];
        iVar1 = *(int *)(puVar9 + 2);
      }
      puVar9 = (undefined8 *)*puVar9;
    }
  }
LAB_1802859e8:
  puVar7 = (undefined8 *)puVar9[1];
  DAT_180cfc8e0 = DAT_180cfc8e0 + 1;
  *puVar4 = puVar9;
  puVar4[1] = puVar7;
  *puVar7 = puVar4;
  puVar9[1] = puVar4;
  lVar5 = DAT_180cfc8e8;
  uVar8 = DAT_180cfc900 & uVar8;
  puVar2 = *(undefined8 **)(DAT_180cfc8e8 + uVar8 * 0x10);
  if (puVar2 == DAT_180cfc8d8) {
    *(undefined8 **)(DAT_180cfc8e8 + uVar8 * 0x10) = puVar4;
  }
  else {
    if (puVar2 == puVar9) {
      *(undefined8 **)(DAT_180cfc8e8 + uVar8 * 0x10) = puVar4;
      goto LAB_180285a47;
    }
    if (*(undefined8 **)(DAT_180cfc8e8 + 8 + uVar8 * 0x10) != puVar7) goto LAB_180285a47;
  }
  *(undefined8 **)(lVar5 + 8 + uVar8 * 0x10) = puVar4;
LAB_180285a47:
  *param_2 = puVar4;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



/* ===== 180285a70 FUN_180285a70 ===== */

longlong FUN_180285a70(undefined8 param_1,undefined8 param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  
  lVar2 = DAT_180cfc978;
  if (DAT_180cfc978 != DAT_180cfc980) {
    FUN_180288980();
    lVar2 = DAT_180cfc978;
    DAT_180cfc978 = DAT_180cfc978 + 0x70;
    return lVar2;
  }
  uVar5 = 0x249249249249249;
  lVar9 = (DAT_180cfc978 - DAT_180cfc970) / 0x70;
  if (lVar9 == 0x249249249249249) {
                    /* WARNING: Subroutine does not return */
    FUN_1800118d0();
  }
  uVar1 = lVar9 + 1;
  uVar7 = (DAT_180cfc980 - DAT_180cfc970 >> 4) * 0x6db6db6db6db6db7;
  if (uVar7 <= 0x249249249249249 - (uVar7 >> 1)) {
    uVar7 = (uVar7 >> 1) + uVar7;
    uVar5 = uVar1;
    if (uVar1 <= uVar7) {
      uVar5 = uVar7;
    }
    if (0x249249249249249 < uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  lVar3 = FUN_18000fb70(uVar5 * 0x70);
  lVar6 = lVar9 * 0x70 + lVar3;
  FUN_180288980(lVar6,param_2);
  lVar9 = lVar3;
  lVar4 = DAT_180cfc970;
  lVar8 = DAT_180cfc978;
  if (lVar2 == DAT_180cfc978) {
    lVar2 = DAT_180cfc970;
    lVar4 = DAT_180cfc978;
    if (DAT_180cfc970 != DAT_180cfc978) {
      do {
        FUN_180288980(lVar3);
        lVar3 = lVar3 + 0x70;
        lVar2 = lVar2 + 0x70;
      } while (lVar2 != lVar4);
    }
  }
  else {
    for (; DAT_180cfc978 = lVar8, lVar4 != lVar2; lVar4 = lVar4 + 0x70) {
      FUN_180288980(lVar3);
      lVar3 = lVar3 + 0x70;
      lVar8 = DAT_180cfc978;
    }
    lVar3 = lVar6 + 0x70;
    if (lVar2 != lVar8) {
      do {
        FUN_180288980(lVar3,lVar2);
        lVar3 = lVar3 + 0x70;
        lVar2 = lVar2 + 0x70;
      } while (lVar2 != lVar8);
    }
  }
  FUN_1802884d0(lVar3,lVar9,uVar1,uVar5);
  return lVar6;
}



/* ===== 180285c10 FUN_180285c10 ===== */

undefined4 * FUN_180285c10(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x26) {
    *param_3 = *param_1;
    FUN_18002ba60(param_3 + 2,param_1 + 2);
    FUN_18002ba60(param_3 + 10,param_1 + 10);
    FUN_18002ba60(param_3 + 0x12,param_1 + 0x12);
    param_3[0x1a] = param_1[0x1a];
    FUN_18002ba60(param_3 + 0x1c,param_1 + 0x1c);
    param_3[0x24] = param_1[0x24];
    param_3 = param_3 + 0x26;
  }
  return param_3;
}



/* ===== 180285ca0 FUN_180285ca0 ===== */

longlong FUN_180285ca0(longlong *param_1,undefined8 param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  
  lVar5 = param_1[1];
  if (lVar5 != param_1[2]) {
    FUN_180288890(lVar5);
    lVar5 = param_1[1];
    param_1[1] = lVar5 + 0x98;
    return lVar5;
  }
  lVar3 = lVar5 - *param_1;
  lVar3 = lVar3 / 0x26 + (lVar3 >> 0x3f);
  uVar6 = 0x1af286bca1af286;
  lVar3 = (lVar3 >> 2) - (lVar3 >> 0x3f);
  if (lVar3 == 0x1af286bca1af286) {
                    /* WARNING: Subroutine does not return */
    FUN_1800118d0();
  }
  uVar1 = lVar3 + 1;
  uVar8 = (param_1[2] - *param_1 >> 3) * -0x79435e50d79435e5;
  if (uVar8 <= 0x1af286bca1af286 - (uVar8 >> 1)) {
    uVar8 = (uVar8 >> 1) + uVar8;
    uVar6 = uVar1;
    if (uVar1 <= uVar8) {
      uVar6 = uVar8;
    }
    if (0x1af286bca1af286 < uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  lVar2 = FUN_18000fb70(uVar6 * 0x98);
  lVar7 = lVar3 * 0x98 + lVar2;
  FUN_180288890(lVar7,param_2);
  lVar3 = param_1[1];
  lVar4 = *param_1;
  lVar9 = lVar2;
  if (lVar5 == lVar3) {
    if (lVar4 != lVar3) {
      do {
        FUN_180288890(lVar2);
        lVar2 = lVar2 + 0x98;
        lVar4 = lVar4 + 0x98;
      } while (lVar4 != lVar3);
    }
  }
  else {
    for (; lVar4 != lVar5; lVar4 = lVar4 + 0x98) {
      FUN_180288890(lVar2);
      lVar2 = lVar2 + 0x98;
    }
    lVar3 = param_1[1];
    lVar4 = lVar7;
    if (lVar5 != lVar3) {
      do {
        lVar4 = lVar4 + 0x98;
        FUN_180288890(lVar4,lVar5);
        lVar5 = lVar5 + 0x98;
      } while (lVar5 != lVar3);
    }
  }
  FUN_1802885b0(param_1,lVar9,uVar1,uVar6);
  return lVar7;
}



/* ===== 180285e60 FUN_180285e60 ===== */

void FUN_180285e60(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != 0) {
    FUN_18000f890(lVar1 + 0x30);
    FUN_18000f890(lVar1 + 0x10);
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    thunk_FUN_1803d64e0(*(longlong *)(param_1 + 8),0x50);
  }
  return;
}



/* ===== 180285eb0 FUN_180285eb0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 * FUN_180285eb0(undefined4 *param_1,undefined4 *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined4 *puVar3;
  int iVar4;
  char cVar5;
  undefined8 ****ppppuVar6;
  undefined8 *puVar7;
  undefined8 *_Buf2;
  undefined4 *puVar8;
  ulonglong uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 *local_f0;
  undefined4 *local_e8;
  ulonglong local_e0;
  undefined8 ****local_d8;
  undefined4 *local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 ****local_a0;
  undefined8 uStack_98;
  ulonglong local_90;
  ulonglong local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStack_118;
  if ((param_1 == param_2) || (local_e8 = param_1 + 0x24, local_e8 == param_2)) {
LAB_1802862f7:
    return param_2;
  }
  local_f0 = param_1;
  local_d0 = param_2;
LAB_180285f20:
  puVar10 = local_e8;
  puVar7 = (undefined8 *)(param_1 + 10);
  local_f8 = *local_e8;
  local_a8 = *(undefined8 *)(local_e8 + 8);
  uStack_b8 = *(undefined8 *)(local_e8 + 4);
  uStack_b0 = *(undefined8 *)(local_e8 + 6);
  local_f4 = local_e8[1];
  local_c0 = *(undefined8 *)(local_e8 + 2);
  *(undefined1 *)(local_e8 + 2) = 0;
  *(undefined8 *)(local_e8 + 6) = 0;
  *(undefined8 *)(local_e8 + 8) = 0xf;
  uStack_98 = *(undefined8 *)(local_e8 + 0xc);
  local_d8 = *(undefined8 *****)(local_e8 + 10);
  local_e0 = *(ulonglong *)(local_e8 + 0x10);
  uVar1 = *(ulonglong *)(local_e8 + 0xe);
  *(undefined1 *)(local_e8 + 10) = 0;
  *(undefined8 *)(local_e8 + 0xe) = 0;
  *(undefined8 *)(local_e8 + 0x10) = 0xf;
  local_80 = local_e8[0x12];
  local_60 = *(undefined8 *)(local_e8 + 0x1a);
  uStack_70 = *(undefined8 *)(local_e8 + 0x16);
  uStack_68 = *(undefined8 *)(local_e8 + 0x18);
  local_78 = *(undefined8 *)(local_e8 + 0x14);
  *(undefined1 *)(local_e8 + 0x14) = 0;
  *(undefined8 *)(local_e8 + 0x18) = 0;
  *(undefined8 *)(local_e8 + 0x1a) = 0xf;
  local_58 = *(undefined8 *)(local_e8 + 0x1c);
  local_40 = *(undefined8 *)(local_e8 + 0x22);
  uStack_50 = *(undefined8 *)(local_e8 + 0x1e);
  uStack_48 = *(undefined8 *)(local_e8 + 0x20);
  *(undefined1 *)(local_e8 + 0x1c) = 0;
  *(undefined8 *)(local_e8 + 0x20) = 0;
  *(undefined8 *)(local_e8 + 0x22) = 0xf;
  uVar2 = *(ulonglong *)(param_1 + 0xe);
  if (0xf < *(ulonglong *)(param_1 + 0x10)) {
    puVar7 = (undefined8 *)*puVar7;
  }
  ppppuVar6 = &local_a0;
  if (0xf < local_e0) {
    ppppuVar6 = local_d8;
  }
  uVar9 = uVar1;
  if (uVar2 < uVar1) {
    uVar9 = uVar2;
  }
  local_c8 = local_f8;
  local_c4 = local_f4;
  local_a0 = local_d8;
  local_90 = uVar1;
  local_88 = local_e0;
  iVar4 = memcmp(ppppuVar6,puVar7,uVar9);
  puVar3 = local_f0;
  if (iVar4 == 0) {
    if (uVar2 <= uVar1) goto LAB_180286083;
  }
  else {
    cVar5 = -1;
    if (-1 < iVar4) {
      cVar5 = '\x01';
    }
    if (-1 < cVar5) {
LAB_180286083:
      puVar8 = puVar10;
      do {
        puVar7 = (undefined8 *)(puVar8 + -0x1a);
        uVar2 = *(ulonglong *)(puVar8 + -0x16);
        if (*(ulonglong *)(puVar8 + -0x14) < 0x10) {
          _Buf2 = puVar7;
        }
        else {
          _Buf2 = (undefined8 *)*puVar7;
        }
        ppppuVar6 = &local_a0;
        if (0xf < local_e0) {
          ppppuVar6 = local_d8;
        }
        uVar9 = uVar1;
        if (uVar2 < uVar1) {
          uVar9 = uVar2;
        }
        iVar4 = memcmp(ppppuVar6,_Buf2,uVar9);
        if (iVar4 == 0) {
          if (uVar1 < uVar2) {
            iVar4 = -1;
          }
          else {
            if (uVar1 <= uVar2) goto LAB_18028622c;
            iVar4 = 1;
          }
        }
        if (-1 < iVar4) goto LAB_18028622c;
        *puVar8 = puVar8[-0x24];
        puVar8[1] = puVar8[-0x23];
        FUN_18002ba60(puVar8 + 2,puVar8 + -0x22);
        FUN_18002ba60(puVar8 + 10,puVar7);
        puVar8[0x12] = puVar8[-0x12];
        FUN_18002ba60(puVar8 + 0x14,puVar8 + -0x10);
        FUN_18002ba60(puVar8 + 0x1c,puVar8 + -8);
        puVar8 = puVar8 + -0x24;
      } while( true );
    }
  }
  puVar11 = puVar10 + 0x24;
  puVar8 = param_1;
  if (puVar10 != param_1) {
    do {
      puVar8 = puVar10 + -0x24;
      puVar11[-0x24] = *puVar8;
      puVar11[-0x23] = puVar10[-0x23];
      FUN_18002ba60(puVar11 + -0x22,puVar10 + -0x22);
      FUN_18002ba60(puVar11 + -0x1a,puVar10 + -0x1a);
      puVar11[-0x12] = puVar10[-0x12];
      FUN_18002ba60(puVar11 + -0x10,puVar10 + -0x10);
      FUN_18002ba60(puVar11 + -8,puVar10 + -8);
      puVar11 = puVar11 + -0x24;
      puVar10 = puVar8;
    } while (puVar8 != puVar3);
    puVar8 = local_f0;
    puVar10 = local_e8;
  }
  *puVar8 = local_f8;
  puVar8[1] = local_f4;
  FUN_18002ba60(puVar8 + 2,&local_c0);
  FUN_18002ba60(puVar8 + 10,&local_a0);
  puVar8[0x12] = local_80;
  param_1 = puVar8;
  goto LAB_18028625b;
LAB_18028622c:
  *puVar8 = local_f8;
  puVar8[1] = local_f4;
  FUN_18002ba60(puVar8 + 2,&local_c0);
  FUN_18002ba60(puVar8 + 10,&local_a0);
  puVar8[0x12] = local_80;
  param_1 = local_f0;
LAB_18028625b:
  FUN_18002ba60(puVar8 + 0x14,&local_78);
  FUN_18002ba60(puVar8 + 0x1c,&local_58);
  FUN_18000f890(&local_58);
  FUN_18000f890(&local_78);
  FUN_18000f890(&local_a0);
  FUN_18000f890(&local_c0);
  local_e8 = puVar10 + 0x24;
  param_2 = local_d0;
  if (local_e8 == local_d0) goto LAB_1802862f7;
  goto LAB_180285f20;
}



/* ===== 180286320 FUN_180286320 ===== */

undefined4 * FUN_180286320(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  FUN_18002ba60(param_1 + 2,param_2 + 2);
  FUN_18002ba60(param_1 + 10,param_2 + 10);
  param_1[0x12] = param_2[0x12];
  FUN_18002ba60(param_1 + 0x14,param_2 + 0x14);
  FUN_18002ba60(param_1 + 0x1c,param_2 + 0x1c);
  return param_1;
}



/* ===== 180286390 FUN_180286390 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 * FUN_180286390(undefined4 *param_1,undefined4 *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined4 *puVar3;
  int iVar4;
  char cVar5;
  undefined8 ****ppppuVar6;
  undefined8 *puVar7;
  undefined8 *_Buf2;
  undefined4 *puVar8;
  ulonglong uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  undefined4 *local_100;
  undefined4 *local_f8;
  ulonglong local_f0;
  undefined8 ****local_e8;
  undefined4 *local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 ****local_b0;
  undefined8 uStack_a8;
  ulonglong local_a0;
  ulonglong local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStack_128;
  if ((param_1 == param_2) || (local_f8 = param_1 + 0x26, local_f8 == param_2)) {
LAB_1802867e8:
    return param_2;
  }
  local_100 = param_1;
  local_e0 = param_2;
LAB_180286400:
  puVar11 = local_f8;
  puVar7 = (undefined8 *)(param_1 + 10);
  local_108 = *local_f8;
  local_b8 = *(undefined8 *)(local_f8 + 8);
  uStack_c8 = *(undefined8 *)(local_f8 + 4);
  uStack_c0 = *(undefined8 *)(local_f8 + 6);
  local_d0 = *(undefined8 *)(local_f8 + 2);
  *(undefined1 *)(local_f8 + 2) = 0;
  *(undefined8 *)(local_f8 + 6) = 0;
  *(undefined8 *)(local_f8 + 8) = 0xf;
  uStack_a8 = *(undefined8 *)(local_f8 + 0xc);
  local_e8 = *(undefined8 *****)(local_f8 + 10);
  local_f0 = *(ulonglong *)(local_f8 + 0x10);
  uVar1 = *(ulonglong *)(local_f8 + 0xe);
  *(undefined1 *)(local_f8 + 10) = 0;
  *(undefined8 *)(local_f8 + 0xe) = 0;
  *(undefined8 *)(local_f8 + 0x10) = 0xf;
  local_90 = local_f8[0x12];
  local_8c = local_f8[0x13];
  local_88 = *(undefined1 *)(local_f8 + 0x14);
  uStack_78 = *(undefined8 *)(local_f8 + 0x18);
  uStack_70 = *(undefined8 *)(local_f8 + 0x1a);
  local_80 = *(undefined8 *)(local_f8 + 0x16);
  local_68 = *(undefined8 *)(local_f8 + 0x1c);
  *(undefined1 *)(local_f8 + 0x16) = 0;
  *(undefined8 *)(local_f8 + 0x1a) = 0;
  *(undefined8 *)(local_f8 + 0x1c) = 0xf;
  local_60 = *(undefined8 *)(local_f8 + 0x1e);
  local_48 = *(undefined8 *)(local_f8 + 0x24);
  uStack_58 = *(undefined8 *)(local_f8 + 0x20);
  uStack_50 = *(undefined8 *)(local_f8 + 0x22);
  *(undefined1 *)(local_f8 + 0x1e) = 0;
  *(undefined8 *)(local_f8 + 0x22) = 0;
  *(undefined8 *)(local_f8 + 0x24) = 0xf;
  uVar2 = *(ulonglong *)(param_1 + 0xe);
  if (0xf < *(ulonglong *)(param_1 + 0x10)) {
    puVar7 = (undefined8 *)*puVar7;
  }
  ppppuVar6 = &local_b0;
  if (0xf < local_f0) {
    ppppuVar6 = local_e8;
  }
  uVar9 = uVar1;
  if (uVar2 < uVar1) {
    uVar9 = uVar2;
  }
  local_d8 = local_108;
  local_b0 = local_e8;
  local_a0 = uVar1;
  local_98 = local_f0;
  iVar4 = memcmp(ppppuVar6,puVar7,uVar9);
  puVar3 = local_100;
  if (iVar4 == 0) {
    if (uVar2 <= uVar1) goto LAB_180286559;
  }
  else {
    cVar5 = -1;
    if (-1 < iVar4) {
      cVar5 = '\x01';
    }
    if (-1 < cVar5) {
LAB_180286559:
      puVar8 = puVar11;
      do {
        puVar7 = (undefined8 *)(puVar8 + -0x1c);
        uVar2 = *(ulonglong *)(puVar8 + -0x18);
        if (*(ulonglong *)(puVar8 + -0x16) < 0x10) {
          _Buf2 = puVar7;
        }
        else {
          _Buf2 = (undefined8 *)*puVar7;
        }
        ppppuVar6 = &local_b0;
        if (0xf < local_f0) {
          ppppuVar6 = local_e8;
        }
        uVar9 = uVar1;
        if (uVar2 < uVar1) {
          uVar9 = uVar2;
        }
        iVar4 = memcmp(ppppuVar6,_Buf2,uVar9);
        if (iVar4 == 0) {
          if (uVar1 < uVar2) {
            iVar4 = -1;
          }
          else {
            if (uVar1 <= uVar2) goto LAB_18028670f;
            iVar4 = 1;
          }
        }
        if (-1 < iVar4) goto LAB_18028670f;
        *puVar8 = puVar8[-0x26];
        FUN_18002ba60(puVar8 + 2,puVar8 + -0x24);
        FUN_18002ba60(puVar8 + 10,puVar7);
        puVar8[0x12] = puVar8[-0x14];
        puVar8[0x13] = puVar8[-0x13];
        *(undefined1 *)(puVar8 + 0x14) = *(undefined1 *)(puVar8 + -0x12);
        FUN_18002ba60(puVar8 + 0x16,puVar8 + -0x10);
        FUN_18002ba60(puVar8 + 0x1e,puVar8 + -8);
        puVar8 = puVar8 + -0x26;
      } while( true );
    }
  }
  puVar10 = puVar11 + 0x26;
  puVar8 = param_1;
  if (puVar11 != param_1) {
    do {
      puVar8 = puVar11 + -0x26;
      puVar10[-0x26] = *puVar8;
      FUN_18002ba60(puVar10 + -0x24,puVar11 + -0x24);
      FUN_18002ba60(puVar10 + -0x1c,puVar11 + -0x1c);
      puVar10[-0x14] = puVar11[-0x14];
      puVar10[-0x13] = puVar11[-0x13];
      *(undefined1 *)(puVar10 + -0x12) = *(undefined1 *)(puVar11 + -0x12);
      FUN_18002ba60(puVar10 + -0x10,puVar11 + -0x10);
      FUN_18002ba60(puVar10 + -8,puVar11 + -8);
      puVar10 = puVar10 + -0x26;
      puVar11 = puVar8;
    } while (puVar8 != puVar3);
    puVar8 = local_100;
    puVar11 = local_f8;
  }
  *puVar8 = local_108;
  FUN_18002ba60(puVar8 + 2,&local_d0);
  FUN_18002ba60(puVar8 + 10,&local_b0);
  puVar8[0x12] = local_90;
  puVar8[0x13] = local_8c;
  *(undefined1 *)(puVar8 + 0x14) = local_88;
  param_1 = puVar8;
  goto LAB_18028674c;
LAB_18028670f:
  *puVar8 = local_108;
  FUN_18002ba60(puVar8 + 2,&local_d0);
  FUN_18002ba60(puVar8 + 10,&local_b0);
  puVar8[0x12] = local_90;
  puVar8[0x13] = local_8c;
  *(undefined1 *)(puVar8 + 0x14) = local_88;
  param_1 = local_100;
LAB_18028674c:
  FUN_18002ba60(puVar8 + 0x16,&local_80);
  FUN_18002ba60(puVar8 + 0x1e,&local_60);
  FUN_18000f890(&local_60);
  FUN_18000f890(&local_80);
  FUN_18000f890(&local_b0);
  FUN_18000f890(&local_d0);
  local_f8 = puVar11 + 0x26;
  param_2 = local_e0;
  if (local_f8 == local_e0) goto LAB_1802867e8;
  goto LAB_180286400;
}



/* ===== 180286810 FUN_180286810 ===== */

undefined4 * FUN_180286810(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  FUN_18002ba60(param_1 + 2,param_2 + 2);
  FUN_18002ba60(param_1 + 10,param_2 + 10);
  param_1[0x12] = param_2[0x12];
  param_1[0x13] = param_2[0x13];
  *(undefined1 *)(param_1 + 0x14) = *(undefined1 *)(param_2 + 0x14);
  FUN_18002ba60(param_1 + 0x16,param_2 + 0x16);
  FUN_18002ba60(param_1 + 0x1e,param_2 + 0x1e);
  return param_1;
}



/* ===== 180286880 FUN_180286880 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 * FUN_180286880(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  char cVar5;
  undefined8 ****ppppuVar6;
  undefined8 *puVar7;
  undefined8 ****ppppuVar8;
  ulonglong uVar9;
  undefined4 *puVar10;
  undefined8 *puVar11;
  undefined4 *puVar12;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  ulonglong local_100;
  undefined8 ****local_f8;
  undefined4 *local_f0;
  undefined8 *local_e8;
  undefined4 *local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 ****local_b0;
  undefined8 uStack_a8;
  ulonglong local_a0;
  ulonglong local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStack_128;
  if ((param_1 == param_2) || (puVar12 = param_1 + 0x26, puVar12 == param_2)) {
LAB_180286c41:
    return param_2;
  }
  puVar11 = (undefined8 *)(param_1 + 10);
  local_f0 = param_1;
  local_e8 = puVar11;
  local_e0 = param_2;
LAB_1802868f0:
  local_d0 = *(undefined8 *)(puVar12 + 2);
  local_b8 = *(undefined8 *)(puVar12 + 8);
  uVar1 = *puVar12;
  uStack_c8 = *(undefined8 *)(puVar12 + 4);
  uStack_c0 = *(undefined8 *)(puVar12 + 6);
  *(undefined1 *)(puVar12 + 2) = 0;
  *(undefined8 *)(puVar12 + 6) = 0;
  *(undefined8 *)(puVar12 + 8) = 0xf;
  ppppuVar8 = *(undefined8 *****)(puVar12 + 10);
  uStack_a8 = *(undefined8 *)(puVar12 + 0xc);
  local_100 = *(ulonglong *)(puVar12 + 0x10);
  uVar2 = *(ulonglong *)(puVar12 + 0xe);
  *(undefined1 *)(puVar12 + 10) = 0;
  *(undefined8 *)(puVar12 + 0xe) = 0;
  *(undefined8 *)(puVar12 + 0x10) = 0xf;
  local_90 = *(undefined8 *)(puVar12 + 0x12);
  local_78 = *(undefined8 *)(puVar12 + 0x18);
  uStack_88 = *(undefined8 *)(puVar12 + 0x14);
  uStack_80 = *(undefined8 *)(puVar12 + 0x16);
  *(undefined1 *)(puVar12 + 0x12) = 0;
  *(undefined8 *)(puVar12 + 0x16) = 0;
  *(undefined8 *)(puVar12 + 0x18) = 0xf;
  local_70 = puVar12[0x1a];
  local_50 = *(undefined8 *)(puVar12 + 0x22);
  local_68 = *(undefined8 *)(puVar12 + 0x1c);
  uStack_60 = *(undefined8 *)(puVar12 + 0x1e);
  uStack_58 = *(undefined8 *)(puVar12 + 0x20);
  *(undefined1 *)(puVar12 + 0x1c) = 0;
  *(undefined8 *)(puVar12 + 0x20) = 0;
  *(undefined8 *)(puVar12 + 0x22) = 0xf;
  local_48 = puVar12[0x24];
  uVar3 = *(ulonglong *)(param_1 + 0xe);
  if (*(ulonglong *)(param_1 + 0x10) < 0x10) {
    puVar7 = puVar11;
  }
  else {
    puVar7 = (undefined8 *)*puVar11;
  }
  ppppuVar6 = &local_b0;
  if (0xf < local_100) {
    ppppuVar6 = ppppuVar8;
  }
  uVar9 = uVar2;
  if (uVar3 < uVar2) {
    uVar9 = uVar3;
  }
  local_108 = uVar1;
  local_f8 = ppppuVar8;
  local_d8 = uVar1;
  local_b0 = ppppuVar8;
  local_a0 = uVar2;
  local_98 = local_100;
  iVar4 = memcmp(ppppuVar6,puVar7,uVar9);
  if (iVar4 == 0) {
    if (uVar3 <= uVar2) goto LAB_180286a3c;
  }
  else {
    cVar5 = -1;
    if (-1 < iVar4) {
      cVar5 = '\x01';
    }
    if (-1 < cVar5) {
LAB_180286a3c:
      puVar10 = puVar12;
      do {
        puVar11 = (undefined8 *)(puVar10 + -0x1c);
        uVar3 = *(ulonglong *)(puVar10 + -0x18);
        if (*(ulonglong *)(puVar10 + -0x16) < 0x10) {
          puVar7 = puVar11;
        }
        else {
          puVar7 = (undefined8 *)*puVar11;
        }
        ppppuVar6 = &local_b0;
        if (0xf < local_100) {
          ppppuVar6 = ppppuVar8;
        }
        uVar9 = uVar2;
        if (uVar3 < uVar2) {
          uVar9 = uVar3;
        }
        iVar4 = memcmp(ppppuVar6,puVar7,uVar9);
        if (iVar4 == 0) {
          if (uVar2 < uVar3) {
            iVar4 = -1;
          }
          else {
            if (uVar2 <= uVar3) goto LAB_180286b7c;
            iVar4 = 1;
          }
        }
        if (-1 < iVar4) goto LAB_180286b7c;
        *puVar10 = puVar10[-0x26];
        FUN_18002ba60(puVar10 + 2,puVar10 + -0x24);
        FUN_18002ba60(puVar10 + 10,puVar11);
        FUN_18002ba60(puVar10 + 0x12,puVar10 + -0x14);
        puVar10[0x1a] = puVar10[-0xc];
        FUN_18002ba60(puVar10 + 0x1c,puVar10 + -10);
        puVar10[0x24] = puVar10[-2];
        ppppuVar8 = local_f8;
        puVar10 = puVar10 + -0x26;
      } while( true );
    }
  }
  FUN_180289d20(param_1,puVar12,puVar12 + 0x26);
  *param_1 = uVar1;
  FUN_18002ba60(param_1 + 2,&local_d0);
  FUN_18002ba60(puVar11,&local_b0);
  FUN_18002ba60(param_1 + 0x12,&local_90);
  param_1[0x1a] = local_70;
  FUN_18002ba60(param_1 + 0x1c,&local_68);
  param_1[0x24] = local_48;
  goto LAB_180286bce;
LAB_180286b7c:
  *puVar10 = local_108;
  FUN_18002ba60(puVar10 + 2,&local_d0);
  FUN_18002ba60(puVar10 + 10,&local_b0);
  FUN_18002ba60(puVar10 + 0x12,&local_90);
  puVar10[0x1a] = local_70;
  FUN_18002ba60(puVar10 + 0x1c,&local_68);
  puVar10[0x24] = local_48;
  param_1 = local_f0;
  puVar11 = local_e8;
LAB_180286bce:
  FUN_18000f890(&local_68);
  FUN_18000f890(&local_90);
  FUN_18000f890(&local_b0);
  FUN_18000f890(&local_d0);
  puVar12 = puVar12 + 0x26;
  param_2 = local_e0;
  if (puVar12 == local_e0) goto LAB_180286c41;
  goto LAB_1802868f0;
}



/* ===== 180286c60 FUN_180286c60 ===== */

undefined8 * FUN_180286c60(longlong *param_1,undefined4 *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  
  lVar2 = *param_1;
  if (param_1[1] - lVar2 == -0x20) {
                    /* WARNING: Subroutine does not return */
    FUN_1800118d0();
  }
  uVar1 = (param_1[1] - lVar2 >> 5) + 1;
  uVar12 = param_1[2] - lVar2 >> 5;
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
  puVar14 = (undefined8 *)(((longlong)param_2 - lVar2 & 0xffffffffffffffe0U) + (longlong)puVar10);
  puVar9 = puVar14 + 4;
  *puVar14 = 0;
  puVar14[1] = 0;
  puVar14[2] = 0;
  puVar14[3] = 0;
  plVar15 = param_1;
  puVar16 = puVar10;
  uVar12 = uVar13;
  puVar17 = puVar9;
  puVar18 = puVar9;
  FUN_1800133a0(puVar14,*param_3);
  puVar3 = (undefined4 *)param_1[1];
  puVar11 = (undefined4 *)*param_1;
  puVar8 = puVar10;
  if (param_2 == puVar3) {
    for (; puVar11 != puVar3; puVar11 = puVar11 + 8) {
      *puVar8 = 0;
      puVar8[1] = 0;
      puVar8[2] = 0;
      puVar8[3] = 0;
      uVar4 = puVar11[1];
      uVar5 = puVar11[2];
      uVar6 = puVar11[3];
      *(undefined4 *)puVar8 = *puVar11;
      *(undefined4 *)((longlong)puVar8 + 4) = uVar4;
      *(undefined4 *)(puVar8 + 1) = uVar5;
      *(undefined4 *)((longlong)puVar8 + 0xc) = uVar6;
      uVar7 = *(undefined8 *)(puVar11 + 6);
      puVar8[2] = *(undefined8 *)(puVar11 + 4);
      puVar8[3] = uVar7;
      *(undefined8 *)(puVar11 + 4) = 0;
      *(undefined8 *)(puVar11 + 6) = 0xf;
      *(undefined1 *)puVar11 = 0;
      puVar8 = puVar8 + 4;
    }
  }
  else {
    for (; puVar11 != param_2; puVar11 = puVar11 + 8) {
      *puVar8 = 0;
      puVar8[1] = 0;
      puVar8[2] = 0;
      puVar8[3] = 0;
      uVar4 = puVar11[1];
      uVar5 = puVar11[2];
      uVar6 = puVar11[3];
      *(undefined4 *)puVar8 = *puVar11;
      *(undefined4 *)((longlong)puVar8 + 4) = uVar4;
      *(undefined4 *)(puVar8 + 1) = uVar5;
      *(undefined4 *)((longlong)puVar8 + 0xc) = uVar6;
      uVar7 = *(undefined8 *)(puVar11 + 6);
      puVar8[2] = *(undefined8 *)(puVar11 + 4);
      puVar8[3] = uVar7;
      *(undefined8 *)(puVar11 + 4) = 0;
      *(undefined8 *)(puVar11 + 6) = 0xf;
      *(undefined1 *)puVar11 = 0;
      puVar8 = puVar8 + 4;
    }
    puVar3 = (undefined4 *)param_1[1];
    for (; param_2 != puVar3; param_2 = param_2 + 8) {
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9[2] = 0;
      puVar9[3] = 0;
      uVar4 = param_2[1];
      uVar5 = param_2[2];
      uVar6 = param_2[3];
      *(undefined4 *)puVar9 = *param_2;
      *(undefined4 *)((longlong)puVar9 + 4) = uVar4;
      *(undefined4 *)(puVar9 + 1) = uVar5;
      *(undefined4 *)((longlong)puVar9 + 0xc) = uVar6;
      uVar7 = *(undefined8 *)(param_2 + 6);
      puVar9[2] = *(undefined8 *)(param_2 + 4);
      puVar9[3] = uVar7;
      *(undefined8 *)(param_2 + 4) = 0;
      *(undefined8 *)(param_2 + 6) = 0xf;
      *(undefined1 *)param_2 = 0;
      puVar9 = puVar9 + 4;
    }
  }
  FUN_18002b950(param_1,puVar10,uVar1,uVar13,plVar15,puVar16,uVar12,puVar17,puVar18);
  return puVar14;
}



/* ===== 180286e40 FUN_180286e40 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 * FUN_180286e40(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  byte bVar3;
  bool bVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined1 auStack_158 [32];
  undefined4 local_138 [2];
  undefined1 local_130 [32];
  undefined1 local_110 [32];
  undefined1 local_f0 [32];
  undefined1 local_d0 [32];
  undefined1 local_b0 [32];
  undefined1 local_90 [32];
  int local_70;
  undefined4 local_6c;
  undefined1 local_68;
  undefined1 local_60 [40];
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStack_158;
  puVar1 = param_1;
  if (param_1 != param_2) {
    while (puVar1 = puVar1 + 0x3e, puVar1 != param_2) {
      FUN_1802774b0(local_138,puVar1);
      iVar2 = local_70;
      if (local_70 == param_1[0x32]) {
        bVar3 = FUN_180023470(local_110,param_1 + 10);
        bVar4 = (bool)(bVar3 >> 7);
      }
      else {
        bVar4 = (int)param_1[0x32] <= local_70;
      }
      if (bVar4 == false) {
        puVar6 = puVar1;
        while( true ) {
          if (iVar2 == puVar6[-0xc]) {
            bVar3 = FUN_180023470(local_110,puVar6 + -0x34);
            bVar4 = (bool)(bVar3 >> 7);
          }
          else {
            bVar4 = (int)puVar6[-0xc] <= iVar2;
          }
          if (bVar4 == false) break;
          FUN_18027ca40(puVar6,puVar6 + -0x3e);
          puVar6 = puVar6 + -0x3e;
        }
        *puVar6 = local_138[0];
        FUN_18002ba60(puVar6 + 2,local_130);
        FUN_18002ba60(puVar6 + 10,local_110);
        FUN_18002ba60(puVar6 + 0x12,local_f0);
        FUN_18002ba60(puVar6 + 0x1a,local_d0);
        FUN_18002ba60(puVar6 + 0x22,local_b0);
        FUN_18002ba60(puVar6 + 0x2a,local_90);
        puVar6[0x32] = local_70;
        puVar6[0x33] = local_6c;
        *(undefined1 *)(puVar6 + 0x34) = local_68;
      }
      else {
        puVar6 = puVar1 + 0x3e;
        puVar5 = puVar1;
        while (puVar5 != param_1) {
          puVar5 = puVar5 + -0x3e;
          puVar6 = puVar6 + -0x3e;
          FUN_18027ca40(puVar6,puVar5);
        }
        *param_1 = local_138[0];
        FUN_18002ba60(param_1 + 2,local_130);
        FUN_18002ba60(param_1 + 10,local_110);
        FUN_18002ba60(param_1 + 0x12,local_f0);
        FUN_18002ba60(param_1 + 0x1a,local_d0);
        FUN_18002ba60(param_1 + 0x22,local_b0);
        FUN_18002ba60(param_1 + 0x2a,local_90);
        param_1[0x32] = local_70;
        param_1[0x33] = local_6c;
        *(undefined1 *)(param_1 + 0x34) = local_68;
        puVar6 = param_1;
      }
      FUN_18002ba60(puVar6 + 0x36,local_60);
      FUN_18000f890(local_60);
      FUN_18000f890(local_90);
      FUN_18000f890(local_b0);
      FUN_18000f890(local_d0);
      FUN_18000f890(local_f0);
      FUN_18000f890(local_110);
      FUN_18000f890(local_130);
    }
  }
  return param_2;
}



/* ===== 180287100 FUN_180287100 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int * FUN_180287100(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  undefined1 auStack_e8 [32];
  int local_c8;
  int *local_c0;
  int *local_b8;
  int *local_b0;
  int local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  int iStack_50;
  int iStack_4c;
  undefined8 local_48;
  int local_40;
  int local_3c;
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStack_e8;
  if ((param_1 != param_2) && (local_b8 = param_1 + 0x1c, local_b8 != param_2)) {
    local_c0 = param_1;
    local_b0 = param_2;
    do {
      piVar6 = local_b8;
      piVar3 = local_c0;
      iVar2 = *local_b8;
      local_a0 = *(undefined8 *)(local_b8 + 2);
      local_88 = *(undefined8 *)(local_b8 + 8);
      uStack_98 = *(undefined8 *)(local_b8 + 4);
      uStack_90 = *(undefined8 *)(local_b8 + 6);
      *(undefined1 *)(local_b8 + 2) = 0;
      local_b8[6] = 0;
      local_b8[7] = 0;
      local_b8[8] = 0xf;
      local_b8[9] = 0;
      local_80 = *(undefined8 *)(local_b8 + 10);
      local_68 = *(undefined8 *)(local_b8 + 0x10);
      uStack_78 = *(undefined8 *)(local_b8 + 0xc);
      uStack_70 = *(undefined8 *)(local_b8 + 0xe);
      *(undefined1 *)(local_b8 + 10) = 0;
      local_b8[0xe] = 0;
      local_b8[0xf] = 0;
      local_b8[0x10] = 0xf;
      local_b8[0x11] = 0;
      local_60 = *(undefined8 *)(local_b8 + 0x12);
      local_48 = *(undefined8 *)(local_b8 + 0x18);
      uStack_58 = *(undefined8 *)(local_b8 + 0x14);
      iStack_50 = local_b8[0x16];
      iStack_4c = local_b8[0x17];
      *(undefined1 *)(local_b8 + 0x12) = 0;
      local_b8[0x16] = 0;
      local_b8[0x17] = 0;
      local_b8[0x18] = 0xf;
      local_b8[0x19] = 0;
      local_40 = local_b8[0x1a];
      local_3c = local_b8[0x1b];
      local_c8 = iVar2;
      local_a8 = iVar2;
      if (*param_1 < iVar2) {
        piVar6 = local_b8 + 0x1c;
        piVar4 = local_b8;
        if (local_b8 != param_1) {
          do {
            piVar6[-0x1c] = piVar4[-0x1c];
            piVar5 = piVar4 + -0x1c;
            FUN_18002ba60(piVar6 + -0x1a,piVar4 + -0x1a);
            FUN_18002ba60(piVar6 + -0x12,piVar4 + -0x12);
            FUN_18002ba60(piVar6 + -10,piVar4 + -10);
            piVar6[-2] = piVar4[-2];
            piVar6[-1] = piVar4[-1];
            piVar4 = piVar5;
            piVar6 = piVar6 + -0x1c;
          } while (piVar5 != piVar3);
          param_1 = local_c0;
        }
        piVar6 = local_b8;
        *param_1 = local_c8;
        FUN_18002ba60(param_1 + 2,&local_a0);
        FUN_18002ba60(param_1 + 10,&local_80);
        FUN_18002ba60(param_1 + 0x12,&local_60);
        param_1[0x1a] = local_40;
        param_1[0x1b] = local_3c;
      }
      else {
        iVar1 = local_b8[-0x1c];
        piVar4 = local_b8 + -0x1c;
        piVar3 = local_b8;
        while (piVar5 = piVar4, iVar1 < iVar2) {
          *piVar3 = *piVar5;
          FUN_18002ba60(piVar3 + 2,piVar5 + 2);
          FUN_18002ba60(piVar3 + 10,piVar5 + 10);
          FUN_18002ba60(piVar3 + 0x12,piVar5 + 0x12);
          piVar3[0x1a] = piVar5[0x1a];
          piVar3[0x1b] = piVar5[0x1b];
          piVar4 = piVar5 + -0x1c;
          piVar3 = piVar5;
          iVar1 = piVar5[-0x1c];
        }
        *piVar3 = iVar2;
        FUN_18002ba60(piVar3 + 2,&local_a0);
        FUN_18002ba60(piVar3 + 10,&local_80);
        FUN_18002ba60(piVar3 + 0x12,&local_60);
        piVar3[0x1a] = local_40;
        piVar3[0x1b] = local_3c;
      }
      FUN_18000f890(&local_60);
      FUN_18000f890(&local_80);
      FUN_18000f890(&local_a0);
      local_b8 = piVar6 + 0x1c;
      param_2 = local_b0;
    } while (local_b8 != local_b0);
  }
  return param_2;
}



/* ===== 1802873e0 FUN_1802873e0 ===== */

undefined8 FUN_1802873e0(undefined8 param_1,int *param_2,longlong param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  longlong lVar4;
  int *piVar5;
  longlong lVar6;
  int *piVar7;
  
  piVar1 = (int *)(param_3 + -0x70);
  lVar6 = (param_3 - (longlong)param_2 >> 4) * 0x6db6db6db6db6db7 >> 1;
  lVar4 = ((longlong)piVar1 - (longlong)param_2 >> 4) * 0x6db6db6db6db6db7;
  piVar3 = param_2 + lVar6 * 0x1c;
  if (lVar4 < 0x29) {
    if (*param_2 < *piVar3) {
      FUN_18028bae0(piVar3);
    }
    if (*piVar1 <= *piVar3) goto LAB_180287589;
    FUN_18028bae0(piVar1,piVar3);
    if (*piVar3 <= *param_2) goto LAB_180287589;
    piVar2 = param_2;
  }
  else {
    lVar4 = lVar4 + 1 >> 3;
    piVar2 = param_2 + lVar4 * 0x1c;
    if (*param_2 < param_2[lVar4 * 0x1c]) {
      FUN_18028bae0(piVar2);
    }
    if (*piVar2 < param_2[lVar4 * 0x38]) {
      FUN_18028bae0(param_2 + lVar4 * 0x38,piVar2);
      if (*param_2 < *piVar2) {
        FUN_18028bae0(piVar2,param_2);
      }
    }
    piVar5 = piVar3 + lVar4 * -0x1c;
    if (*piVar5 < *piVar3) {
      FUN_18028bae0(piVar3,piVar5);
    }
    if (*piVar3 < param_2[(lVar4 + lVar6) * 0x1c]) {
      FUN_18028bae0(param_2 + (lVar4 + lVar6) * 0x1c,piVar3);
      if (*piVar5 < *piVar3) {
        FUN_18028bae0(piVar3,piVar5);
      }
    }
    piVar7 = piVar1 + lVar4 * -0x38;
    piVar5 = piVar1 + lVar4 * -0x1c;
    if (*piVar7 < *piVar5) {
      FUN_18028bae0(piVar5,piVar7);
    }
    if (*piVar5 < *piVar1) {
      FUN_18028bae0(piVar1,piVar5);
      if (*piVar7 < *piVar5) {
        FUN_18028bae0(piVar5,piVar7);
      }
    }
    if (*piVar2 < *piVar3) {
      FUN_18028bae0(piVar3,piVar2);
    }
    if (*piVar5 <= *piVar3) goto LAB_180287589;
    FUN_18028bae0(piVar5,piVar3);
    if (*piVar3 <= *piVar2) goto LAB_180287589;
  }
  FUN_18028bae0(piVar3,piVar2);
LAB_180287589:
  FUN_18028ab20(param_1,param_2,piVar3,param_3);
  return param_1;
}



/* ===== 1802875c0 FUN_1802875c0 ===== */

undefined8 *
FUN_1802875c0(undefined8 *param_1,undefined4 *param_2,undefined4 *param_3,undefined1 param_4,
             longlong param_5,longlong param_6,longlong param_7)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  size_t sVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 *local_80;
  longlong local_78;
  undefined4 *local_70;
  longlong local_68;
  
  if (param_7 < param_5 + -1) {
    lVar2 = param_5 / 2;
    puVar4 = param_2 + lVar2 * 0x26;
    puVar7 = puVar4 + -0x26;
    lVar9 = lVar2;
    if (param_2 != puVar7) {
      do {
        puVar5 = (undefined8 *)(puVar7 + 0x12);
        sVar6 = 0x1d;
        if (*(ulonglong *)(puVar7 + 0x16) < 0x1d) {
          sVar6 = *(ulonglong *)(puVar7 + 0x16);
        }
        if (0xf < *(ulonglong *)(puVar7 + 0x18)) {
          puVar5 = (undefined8 *)*puVar5;
        }
        iVar1 = memcmp(puVar5,"panorama/images/econ/patches/",sVar6);
        if ((iVar1 != 0) || (sVar6 < 0x1d)) {
          FUN_1802875c0(&local_80,param_2,puVar7,param_4,lVar9,param_6,param_7);
          puVar7 = local_80;
          lVar9 = local_78;
          goto LAB_180287839;
        }
        lVar9 = lVar9 + -1;
        puVar7 = puVar7 + -0x26;
      } while (param_2 != puVar7);
    }
    lVar9 = lVar9 + -1;
LAB_180287839:
    lVar10 = 0;
    puVar8 = puVar4;
    if (puVar4 != param_3) {
      do {
        puVar5 = (undefined8 *)(puVar8 + 0x12);
        sVar6 = 0x1d;
        if (*(ulonglong *)(puVar8 + 0x16) < 0x1d) {
          sVar6 = *(ulonglong *)(puVar8 + 0x16);
        }
        if (0xf < *(ulonglong *)(puVar8 + 0x18)) {
          puVar5 = (undefined8 *)*puVar5;
        }
        iVar1 = memcmp(puVar5,"panorama/images/econ/patches/",sVar6);
        if ((iVar1 == 0) && (0x1c < sVar6)) {
          FUN_1802875c0(&local_70,puVar8,param_3,param_4,(param_5 - lVar10) - lVar2,param_6,param_7)
          ;
          lVar10 = lVar10 + local_68;
          goto LAB_1802878ac;
        }
        puVar8 = puVar8 + 0x26;
        lVar10 = lVar10 + 1;
      } while (puVar8 != param_3);
    }
    local_70 = puVar8 + 0x26;
    lVar10 = lVar10 + 1;
LAB_1802878ac:
    uVar3 = FUN_18028acb0(puVar7,puVar4,local_70,lVar2 - lVar9,lVar10,param_6,param_7);
    *param_1 = uVar3;
    param_1[1] = lVar10 + lVar9;
  }
  else {
    FUN_180288890(param_6);
    lVar9 = param_6 + 0x98;
    puVar7 = param_2 + 0x26;
    if (puVar7 != param_3) {
      do {
        sVar6 = 0x1d;
        if (*(ulonglong *)(puVar7 + 0x16) < 0x1d) {
          sVar6 = *(ulonglong *)(puVar7 + 0x16);
        }
        if (*(ulonglong *)(puVar7 + 0x18) < 0x10) {
          puVar4 = puVar7 + 0x12;
        }
        else {
          puVar4 = *(undefined4 **)(puVar7 + 0x12);
        }
        iVar1 = memcmp(puVar4,"panorama/images/econ/patches/",sVar6);
        if ((iVar1 == 0) && (0x1c < sVar6)) {
          FUN_180288890(lVar9,puVar7);
          lVar9 = lVar9 + 0x98;
        }
        else {
          *param_2 = *puVar7;
          FUN_18002ba60(param_2 + 2,puVar7 + 2);
          FUN_18002ba60(param_2 + 10,puVar7 + 10);
          FUN_18002ba60(param_2 + 0x12,puVar7 + 0x12);
          param_2[0x1a] = puVar7[0x1a];
          FUN_18002ba60(param_2 + 0x1c,puVar7 + 0x1c);
          param_2[0x24] = puVar7[0x24];
          param_2 = param_2 + 0x26;
        }
        puVar7 = puVar7 + 0x26;
      } while (puVar7 != param_3);
    }
    *param_2 = *param_3;
    FUN_18002ba60(param_2 + 2,param_3 + 2);
    FUN_18002ba60(param_2 + 10,param_3 + 10);
    FUN_18002ba60(param_2 + 0x12,param_3 + 0x12);
    param_2[0x1a] = param_3[0x1a];
    FUN_18002ba60(param_2 + 0x1c,param_3 + 0x1c);
    param_2[0x24] = param_3[0x24];
    FUN_180285c10(param_6,lVar9,param_2 + 0x26);
    *param_1 = param_2 + 0x26;
    param_1[1] = param_5 + (lVar9 - param_6 >> 3) * 0x79435e50d79435e5;
    for (; param_6 != lVar9; param_6 = param_6 + 0x98) {
      FUN_18000f890(param_6 + 0x70);
      FUN_18000f890(param_6 + 0x48);
      FUN_18000f890(param_6 + 0x28);
      FUN_18000f890(param_6 + 8);
    }
  }
  return param_1;
}



/* ===== 1802879a0 FUN_1802879a0 ===== */

longlong FUN_1802879a0(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  ulonglong uVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  lVar6 = DAT_180cfc850;
  uVar7 = 0x1af286bca1af286;
  lVar3 = (DAT_180cfc858 - DAT_180cfc850 >> 3) * -0x79435e50d79435e5;
  if (lVar3 == 0x1af286bca1af286) {
                    /* WARNING: Subroutine does not return */
    FUN_1800118d0();
  }
  uVar1 = lVar3 + 1;
  uVar5 = (DAT_180cfc860 - DAT_180cfc850 >> 3) * -0x79435e50d79435e5;
  if (uVar5 <= 0x1af286bca1af286 - (uVar5 >> 1)) {
    uVar5 = (uVar5 >> 1) + uVar5;
    uVar7 = uVar1;
    if (uVar1 <= uVar5) {
      uVar7 = uVar5;
    }
    if (0x1af286bca1af286 < uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  lVar4 = FUN_18000fb70(uVar7 * 0x98);
  lVar11 = ((param_2 - lVar6) / 0x98) * 0x98 + lVar4;
  FUN_1802887a0(lVar11,param_3);
  puVar8 = auStack_48;
  puVar9 = auStack_48;
  lVar6 = lVar4;
  lVar3 = DAT_180cfc850;
  lVar10 = DAT_180cfc858;
  if (param_2 == DAT_180cfc858) {
    if (DAT_180cfc850 != DAT_180cfc858) {
      do {
        FUN_1802887a0(lVar6);
        lVar6 = lVar6 + 0x98;
        lVar3 = lVar3 + 0x98;
      } while (lVar3 != lVar10);
    }
  }
  else {
    for (; DAT_180cfc858 = lVar10, lVar3 != param_2; lVar3 = lVar3 + 0x98) {
      FUN_1802887a0(lVar6);
      lVar6 = lVar6 + 0x98;
      lVar10 = DAT_180cfc858;
    }
    lVar6 = lVar11;
    if (param_2 != lVar10) {
      do {
        lVar6 = lVar6 + 0x98;
        FUN_1802887a0(lVar6,param_2);
        param_2 = param_2 + 0x98;
      } while (param_2 != lVar10);
    }
  }
  lVar3 = DAT_180cfc858;
  lVar6 = DAT_180cfc850;
  if (DAT_180cfc850 == 0) goto LAB_180287ba9;
  for (; lVar6 != lVar3; lVar6 = lVar6 + 0x98) {
    FUN_18000f890(lVar6 + 0x78);
    FUN_18000f890(lVar6 + 0x58);
    FUN_18000f890(lVar6 + 0x28);
    FUN_18000f890(lVar6 + 8);
  }
  lVar6 = DAT_180cfc850;
  if ((ulonglong)((DAT_180cfc860 - DAT_180cfc850 >> 3) * 8) < 0x1000) {
LAB_180287b9e:
    puVar9 = puVar8;
  }
  else {
    lVar6 = *(longlong *)(DAT_180cfc850 + -8);
    if (0x1f < (DAT_180cfc850 - lVar6) - 8U) {
      lVar6 = 5;
      pcVar2 = (code *)swi(0x29);
      (*pcVar2)(5);
      puVar8 = auStack_40;
      goto LAB_180287b9e;
    }
  }
  *(undefined8 *)(puVar9 + -8) = 0x180287ba9;
  thunk_FUN_1803d64e0(lVar6);
LAB_180287ba9:
  DAT_180cfc858 = uVar1 * 0x98 + lVar4;
  DAT_180cfc850 = lVar4;
  DAT_180cfc860 = uVar7 * 0x98 + lVar4;
  return lVar11;
}



/* ===== 180287c00 FUN_180287c00 ===== */

longlong FUN_180287c00(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  ulonglong uVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  lVar7 = DAT_180cfc940;
  uVar6 = 0x108421084210842;
  lVar3 = (DAT_180cfc948 - DAT_180cfc940 >> 3) * -0x1084210842108421;
  if (lVar3 == 0x108421084210842) {
                    /* WARNING: Subroutine does not return */
    FUN_1800118d0();
  }
  uVar1 = lVar3 + 1;
  uVar5 = (DAT_180cfc950 - DAT_180cfc940 >> 3) * -0x1084210842108421;
  if (uVar5 <= 0x108421084210842 - (uVar5 >> 1)) {
    uVar5 = (uVar5 >> 1) + uVar5;
    uVar6 = uVar1;
    if (uVar1 <= uVar5) {
      uVar6 = uVar5;
    }
    if (0x108421084210842 < uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  lVar4 = FUN_18000fb70(uVar6 * 0xf8);
  lVar7 = SUB168(SEXT816(-0x7bdef7bdef7bdef7) * SEXT816(param_2 - lVar7),8) + (param_2 - lVar7);
  lVar11 = ((lVar7 >> 7) - (lVar7 >> 0x3f)) * 0xf8 + lVar4;
  FUN_1802774b0(lVar11,param_3);
  puVar8 = auStack_48;
  puVar9 = auStack_48;
  lVar7 = lVar4;
  lVar3 = DAT_180cfc940;
  lVar10 = DAT_180cfc948;
  if (param_2 == DAT_180cfc948) {
    if (DAT_180cfc940 != DAT_180cfc948) {
      do {
        FUN_1802774b0(lVar7);
        lVar7 = lVar7 + 0xf8;
        lVar3 = lVar3 + 0xf8;
      } while (lVar3 != lVar10);
    }
  }
  else {
    for (; DAT_180cfc948 = lVar10, lVar3 != param_2; lVar3 = lVar3 + 0xf8) {
      FUN_1802774b0(lVar7);
      lVar7 = lVar7 + 0xf8;
      lVar10 = DAT_180cfc948;
    }
    lVar7 = lVar11;
    if (param_2 != lVar10) {
      do {
        lVar7 = lVar7 + 0xf8;
        FUN_1802774b0(lVar7,param_2);
        param_2 = param_2 + 0xf8;
      } while (param_2 != lVar10);
    }
  }
  lVar3 = DAT_180cfc948;
  lVar7 = DAT_180cfc940;
  if (DAT_180cfc940 == 0) goto LAB_180287de9;
  for (; lVar7 != lVar3; lVar7 = lVar7 + 0xf8) {
    FUN_1802753e0(lVar7);
  }
  lVar7 = DAT_180cfc940;
  if ((ulonglong)((DAT_180cfc950 - DAT_180cfc940 >> 3) * 8) < 0x1000) {
LAB_180287dde:
    puVar9 = puVar8;
  }
  else {
    lVar7 = *(longlong *)(DAT_180cfc940 + -8);
    if (0x1f < (DAT_180cfc940 - lVar7) - 8U) {
      lVar7 = 5;
      pcVar2 = (code *)swi(0x29);
      (*pcVar2)(5);
      puVar8 = auStack_40;
      goto LAB_180287dde;
    }
  }
  *(undefined8 *)(puVar9 + -8) = 0x180287de9;
  thunk_FUN_1803d64e0(lVar7);
LAB_180287de9:
  DAT_180cfc948 = uVar1 * 0xf8 + lVar4;
  DAT_180cfc940 = lVar4;
  DAT_180cfc950 = uVar6 * 0xf8 + lVar4;
  return lVar11;
}



/* ===== 180287e40 FUN_180287e40 ===== */

longlong FUN_180287e40(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  ulonglong uVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  lVar6 = DAT_180cfc958;
  uVar7 = 0x1c71c71c71c71c7;
  lVar3 = (DAT_180cfc960 - DAT_180cfc958 >> 4) * -0x71c71c71c71c71c7;
  if (lVar3 == 0x1c71c71c71c71c7) {
                    /* WARNING: Subroutine does not return */
    FUN_1800118d0();
  }
  uVar1 = lVar3 + 1;
  uVar5 = (DAT_180cfc968 - DAT_180cfc958 >> 4) * -0x71c71c71c71c71c7;
  if (uVar5 <= 0x1c71c71c71c71c7 - (uVar5 >> 1)) {
    uVar5 = (uVar5 >> 1) + uVar5;
    uVar7 = uVar1;
    if (uVar1 <= uVar5) {
      uVar7 = uVar5;
    }
    if (0x1c71c71c71c71c7 < uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  lVar4 = FUN_18000fb70(uVar7 * 0x90);
  lVar11 = ((param_2 - lVar6) / 0x90) * 0x90 + lVar4;
  FUN_1802886b0(lVar11,param_3);
  puVar8 = auStack_48;
  puVar9 = auStack_48;
  lVar6 = lVar4;
  lVar3 = DAT_180cfc958;
  lVar10 = DAT_180cfc960;
  if (param_2 == DAT_180cfc960) {
    if (DAT_180cfc958 != DAT_180cfc960) {
      do {
        FUN_1802886b0(lVar6);
        lVar6 = lVar6 + 0x90;
        lVar3 = lVar3 + 0x90;
      } while (lVar3 != lVar10);
    }
  }
  else {
    for (; DAT_180cfc960 = lVar10, lVar3 != param_2; lVar3 = lVar3 + 0x90) {
      FUN_1802886b0(lVar6);
      lVar6 = lVar6 + 0x90;
      lVar10 = DAT_180cfc960;
    }
    lVar6 = lVar11;
    if (param_2 != lVar10) {
      do {
        lVar6 = lVar6 + 0x90;
        FUN_1802886b0(lVar6,param_2);
        param_2 = param_2 + 0x90;
      } while (param_2 != lVar10);
    }
  }
  lVar3 = DAT_180cfc960;
  lVar6 = DAT_180cfc958;
  if (DAT_180cfc958 == 0) goto LAB_18028804a;
  for (; lVar6 != lVar3; lVar6 = lVar6 + 0x90) {
    FUN_18000f890(lVar6 + 0x70);
    FUN_18000f890(lVar6 + 0x50);
    FUN_18000f890(lVar6 + 0x28);
    FUN_18000f890(lVar6 + 8);
  }
  lVar6 = DAT_180cfc958;
  if ((ulonglong)((DAT_180cfc968 - DAT_180cfc958 >> 4) << 4) < 0x1000) {
LAB_18028803f:
    puVar9 = puVar8;
  }
  else {
    lVar6 = *(longlong *)(DAT_180cfc958 + -8);
    if (0x1f < (DAT_180cfc958 - lVar6) - 8U) {
      lVar6 = 5;
      pcVar2 = (code *)swi(0x29);
      (*pcVar2)(5);
      puVar8 = auStack_40;
      goto LAB_18028803f;
    }
  }
  *(undefined8 *)(puVar9 + -8) = 0x18028804a;
  thunk_FUN_1803d64e0(lVar6);
LAB_18028804a:
  DAT_180cfc958 = lVar4;
  DAT_180cfc960 = uVar1 * 0x90 + lVar4;
  DAT_180cfc968 = uVar7 * 0x90 + lVar4;
  return lVar11;
}



/* ===== 1802880a0 FUN_1802880a0 ===== */

void FUN_1802880a0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  *(undefined8 *)param_2[1] = 0;
  puVar2 = (undefined8 *)*param_2;
  while (puVar2 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar2;
    FUN_18000f890(puVar2 + 0xc);
    FUN_18000f890(puVar2 + 8);
    FUN_18000f890(puVar2 + 4);
    thunk_FUN_1803d64e0(puVar2,0x88);
    puVar2 = puVar1;
  }
  return;
}



/* ===== 180288100 FUN_180288100 ===== */

void FUN_180288100(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  *(undefined8 *)param_2[1] = 0;
  puVar2 = (undefined8 *)*param_2;
  while (puVar2 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar2;
    FUN_18000f890(puVar2 + 0x11);
    FUN_18000f890(puVar2 + 0xc);
    FUN_18000f890(puVar2 + 8);
    FUN_18000f890(puVar2 + 4);
    thunk_FUN_1803d64e0(puVar2,0xb0);
    puVar2 = puVar1;
  }
  return;
}



/* ===== 180288170 FUN_180288170 ===== */

void FUN_180288170(longlong param_1)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_180068f30(*(longlong *)(param_1 + 8) + 0x18);
  }
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  thunk_FUN_1803d64e0(*(longlong *)(param_1 + 8),0x30);
  return;
}



/* ===== 1802881b0 FUN_1802881b0 ===== */

void FUN_1802881b0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != 0) {
    FUN_18000f890(lVar1 + 0x88);
    FUN_18000f890(lVar1 + 0x60);
    FUN_18000f890(lVar1 + 0x40);
    FUN_18000f890(lVar1 + 0x20);
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    thunk_FUN_1803d64e0(*(longlong *)(param_1 + 8),0xb0);
  }
  return;
}



/* ===== 180288210 FUN_180288210 ===== */

void FUN_180288210(longlong param_1)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1802753e0(*(longlong *)(param_1 + 8) + 0x18);
  }
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  thunk_FUN_1803d64e0(*(longlong *)(param_1 + 8),0x110);
  return;
}



/* ===== 180288250 FUN_180288250 ===== */

void FUN_180288250(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != 0) {
    FUN_18000f890(lVar1 + 0x30);
    FUN_18000f890(lVar1 + 0x10);
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    thunk_FUN_1803d64e0(*(longlong *)(param_1 + 8),0x58);
  }
  return;
}



/* ===== 1802882a0 FUN_1802882a0 ===== */

void FUN_1802882a0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != 0) {
    FUN_18000f890(lVar1 + 0x60);
    FUN_18000f890(lVar1 + 0x40);
    FUN_18000f890(lVar1 + 0x20);
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    thunk_FUN_1803d64e0(*(longlong *)(param_1 + 8),0x88);
  }
  return;
}



/* ===== 180288300 FUN_180288300 ===== */

void FUN_180288300(undefined8 param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  ulonglong uVar10;
  byte bVar11;
  longlong lVar12;
  
  plVar9 = DAT_180cfc878;
  for (lVar12 = 0x3f; 0xfffffffffffffffU >> lVar12 == 0; lVar12 = lVar12 + -1) {
  }
  if ((ulonglong)(1L << ((byte)lVar12 & 0x3f)) < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4cd0("invalid hash bucket count");
  }
  uVar10 = param_2 - 1 | 1;
  lVar12 = 0x3f;
  if (uVar10 != 0) {
    for (; uVar10 >> lVar12 == 0; lVar12 = lVar12 + -1) {
    }
  }
  bVar11 = (char)lVar12 + 1;
  lVar12 = 1L << (bVar11 & 0x3f);
  FUN_180029a30(&DAT_180cfc888,2L << (bVar11 & 0x3f),DAT_180cfc878);
  DAT_180cfc8a0 = lVar12 - 1;
  DAT_180cfc8a8 = lVar12;
  plVar8 = (longlong *)*DAT_180cfc878;
joined_r0x00018028837c:
  do {
    while( true ) {
      while( true ) {
        if (plVar8 == plVar9) {
          return;
        }
        plVar2 = (longlong *)*plVar8;
        uVar10 = (((((ulonglong)*(byte *)(plVar8 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                   (ulonglong)*(byte *)((longlong)plVar8 + 0x11)) * 0x100000001b3 ^
                  (ulonglong)*(byte *)((longlong)plVar8 + 0x12)) * 0x100000001b3 ^
                 (ulonglong)*(byte *)((longlong)plVar8 + 0x13)) * 0x100000001b3 & DAT_180cfc8a0;
        plVar3 = *(longlong **)(DAT_180cfc888 + uVar10 * 0x10);
        puVar1 = (undefined8 *)(DAT_180cfc888 + uVar10 * 0x10);
        lVar12 = DAT_180cfc888 + uVar10 * 0x10;
        if (plVar3 != plVar9) break;
        *puVar1 = plVar8;
        *(longlong **)(lVar12 + 8) = plVar8;
        plVar8 = plVar2;
      }
      plVar4 = *(longlong **)(lVar12 + 8);
      if ((int)plVar8[2] != (int)plVar4[2]) break;
      plVar4 = (longlong *)*plVar4;
      if (plVar4 != plVar8) {
        puVar1 = (undefined8 *)plVar8[1];
        *puVar1 = plVar2;
        puVar5 = (undefined8 *)plVar2[1];
        *puVar5 = plVar4;
        puVar6 = (undefined8 *)plVar4[1];
        *puVar6 = plVar8;
        plVar4[1] = (longlong)puVar5;
        plVar2[1] = (longlong)puVar1;
        plVar8[1] = (longlong)puVar6;
      }
      *(longlong **)(lVar12 + 8) = plVar8;
      plVar8 = plVar2;
    }
    do {
      if (plVar3 == plVar4) {
        puVar5 = (undefined8 *)plVar8[1];
        *puVar5 = plVar2;
        puVar6 = (undefined8 *)plVar2[1];
        *puVar6 = plVar4;
        puVar7 = (undefined8 *)plVar4[1];
        *puVar7 = plVar8;
        plVar4[1] = (longlong)puVar6;
        plVar2[1] = (longlong)puVar5;
        plVar8[1] = (longlong)puVar7;
        *puVar1 = plVar8;
        plVar8 = plVar2;
        goto joined_r0x00018028837c;
      }
      plVar4 = (longlong *)plVar4[1];
    } while ((int)plVar8[2] != (int)plVar4[2]);
    lVar12 = *plVar4;
    puVar1 = (undefined8 *)plVar8[1];
    *puVar1 = plVar2;
    plVar3 = (longlong *)plVar2[1];
    *plVar3 = lVar12;
    puVar5 = *(undefined8 **)(lVar12 + 8);
    *puVar5 = plVar8;
    *(longlong **)(lVar12 + 8) = plVar3;
    plVar2[1] = (longlong)puVar1;
    plVar8[1] = (longlong)puVar5;
    plVar8 = plVar2;
  } while( true );
}



/* ===== 1802884d0 FUN_1802884d0 ===== */

void FUN_1802884d0(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4)

{
  code *pcVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [32];
  
  uVar3 = DAT_180cfc978;
  puVar4 = auStack_48;
  puVar5 = auStack_48;
  uVar2 = DAT_180cfc970;
  if (DAT_180cfc970 == 0) goto LAB_180288583;
  for (; uVar2 != uVar3; uVar2 = uVar2 + 0x70) {
    FUN_18000f890(uVar2 + 0x48);
    FUN_18000f890(uVar2 + 0x28);
    FUN_18000f890(uVar2 + 8);
  }
  uVar2 = DAT_180cfc970;
  if ((ulonglong)(((longlong)(DAT_180cfc980 - DAT_180cfc970) >> 4) * 0x10) < 0x1000) {
LAB_18028857b:
    puVar5 = puVar4;
  }
  else {
    uVar2 = *(ulonglong *)(DAT_180cfc970 - 8);
    uVar3 = (DAT_180cfc970 - uVar2) - 8;
    if (0x1f < uVar3) {
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(5);
      puVar4 = auStack_40;
      uVar2 = uVar3;
      goto LAB_18028857b;
    }
  }
  *(undefined8 *)(puVar5 + -8) = 0x180288583;
  thunk_FUN_1803d64e0(uVar2);
LAB_180288583:
  DAT_180cfc970 = param_2;
  DAT_180cfc978 = param_3 * 0x70 + param_2;
  DAT_180cfc980 = param_4 * 0x70 + param_2;
  return;
}



/* ===== 1802885b0 FUN_1802885b0 ===== */

void FUN_1802885b0(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  
  puVar4 = auStack_38;
  puVar5 = auStack_38;
  lVar3 = *param_1;
  if (lVar3 == 0) goto LAB_18028867a;
  lVar2 = param_1[1];
  for (; lVar3 != lVar2; lVar3 = lVar3 + 0x98) {
    FUN_18000f890(lVar3 + 0x70);
    FUN_18000f890(lVar3 + 0x48);
    FUN_18000f890(lVar3 + 0x28);
    FUN_18000f890(lVar3 + 8);
  }
  lVar3 = *param_1;
  lVar2 = lVar3;
  if ((ulonglong)((param_1[2] - lVar3 >> 3) * 8) < 0x1000) {
LAB_18028866f:
    puVar5 = puVar4;
  }
  else {
    lVar2 = *(longlong *)(lVar3 + -8);
    if (0x1f < (lVar3 - lVar2) - 8U) {
      lVar2 = 5;
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(5);
      puVar4 = auStack_30;
      goto LAB_18028866f;
    }
  }
  *(undefined8 *)(puVar5 + -8) = 0x18028867a;
  thunk_FUN_1803d64e0(lVar2);
LAB_18028867a:
  *param_1 = param_2;
  param_1[1] = param_3 * 0x98 + param_2;
  param_1[2] = param_4 * 0x98 + param_2;
  return;
}



/* ===== 1802886b0 FUN_1802886b0 ===== */

undefined4 * FUN_1802886b0(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  uVar1 = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 4) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_1 + 8) = uVar1;
  *(undefined1 *)(param_2 + 2) = 0;
  *(undefined8 *)(param_2 + 6) = 0;
  *(undefined8 *)(param_2 + 8) = 0xf;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
  *(undefined8 *)(param_1 + 0xc) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_2 + 0xe);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  *(undefined1 *)(param_2 + 10) = 0;
  *(undefined8 *)(param_2 + 0xe) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0xf;
  param_1[0x12] = param_2[0x12];
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x16);
  *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_2 + 0x14);
  *(undefined8 *)(param_1 + 0x16) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x1a);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x1a) = uVar1;
  *(undefined1 *)(param_2 + 0x14) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x1a) = 0xf;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x22) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x1e);
  *(undefined8 *)(param_1 + 0x1c) = *(undefined8 *)(param_2 + 0x1c);
  *(undefined8 *)(param_1 + 0x1e) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x22);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x22) = uVar1;
  *(undefined1 *)(param_2 + 0x1c) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_2 + 0x22) = 0xf;
  return param_1;
}



/* ===== 1802887a0 FUN_1802887a0 ===== */

undefined4 * FUN_1802887a0(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  uVar1 = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 4) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_1 + 8) = uVar1;
  *(undefined1 *)(param_2 + 2) = 0;
  *(undefined8 *)(param_2 + 6) = 0;
  *(undefined8 *)(param_2 + 8) = 0xf;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
  *(undefined8 *)(param_1 + 0xc) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_2 + 0xe);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  *(undefined1 *)(param_2 + 10) = 0;
  *(undefined8 *)(param_2 + 0xe) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0xf;
  param_1[0x12] = param_2[0x12];
  param_1[0x13] = param_2[0x13];
  *(undefined1 *)(param_1 + 0x14) = *(undefined1 *)(param_2 + 0x14);
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x16) = *(undefined8 *)(param_2 + 0x16);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x1c);
  *(undefined8 *)(param_1 + 0x1a) = *(undefined8 *)(param_2 + 0x1a);
  *(undefined8 *)(param_1 + 0x1c) = uVar1;
  *(undefined1 *)(param_2 + 0x16) = 0;
  *(undefined8 *)(param_2 + 0x1a) = 0;
  *(undefined8 *)(param_2 + 0x1c) = 0xf;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x22) = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x1e) = *(undefined8 *)(param_2 + 0x1e);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x24);
  *(undefined8 *)(param_1 + 0x22) = *(undefined8 *)(param_2 + 0x22);
  *(undefined8 *)(param_1 + 0x24) = uVar1;
  *(undefined1 *)(param_2 + 0x1e) = 0;
  *(undefined8 *)(param_2 + 0x22) = 0;
  *(undefined8 *)(param_2 + 0x24) = 0xf;
  return param_1;
}



/* ===== 180288890 FUN_180288890 ===== */

undefined4 * FUN_180288890(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  uVar1 = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 4) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_1 + 8) = uVar1;
  *(undefined1 *)(param_2 + 2) = 0;
  *(undefined8 *)(param_2 + 6) = 0;
  *(undefined8 *)(param_2 + 8) = 0xf;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
  *(undefined8 *)(param_1 + 0xc) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_2 + 0xe);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  *(undefined1 *)(param_2 + 10) = 0;
  *(undefined8 *)(param_2 + 0xe) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0xf;
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x14);
  *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_2 + 0x12);
  *(undefined8 *)(param_1 + 0x14) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x16) = *(undefined8 *)(param_2 + 0x16);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  *(undefined1 *)(param_2 + 0x12) = 0;
  *(undefined8 *)(param_2 + 0x16) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0xf;
  param_1[0x1a] = param_2[0x1a];
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x22) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x1e);
  *(undefined8 *)(param_1 + 0x1c) = *(undefined8 *)(param_2 + 0x1c);
  *(undefined8 *)(param_1 + 0x1e) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x22);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x22) = uVar1;
  *(undefined1 *)(param_2 + 0x1c) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_2 + 0x22) = 0xf;
  param_1[0x24] = param_2[0x24];
  return param_1;
}



/* ===== 180288980 FUN_180288980 ===== */

undefined4 * FUN_180288980(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  uVar1 = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 4) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_1 + 8) = uVar1;
  *(undefined1 *)(param_2 + 2) = 0;
  *(undefined8 *)(param_2 + 6) = 0;
  *(undefined8 *)(param_2 + 8) = 0xf;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
  *(undefined8 *)(param_1 + 0xc) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_2 + 0xe);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  *(undefined1 *)(param_2 + 10) = 0;
  *(undefined8 *)(param_2 + 0xe) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0xf;
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x14);
  *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_2 + 0x12);
  *(undefined8 *)(param_1 + 0x14) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x16) = *(undefined8 *)(param_2 + 0x16);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  *(undefined1 *)(param_2 + 0x12) = 0;
  *(undefined8 *)(param_2 + 0x16) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0xf;
  param_1[0x1a] = param_2[0x1a];
  param_1[0x1b] = param_2[0x1b];
  return param_1;
}



/* ===== 180288a20 FUN_180288a20 ===== */

void FUN_180288a20(longlong param_1,longlong param_2,ulonglong param_3,undefined4 *param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  lVar2 = (longlong)(param_3 - 1) >> 1;
  lVar7 = param_2;
  while (lVar7 < lVar2) {
    cVar1 = FUN_180023470(param_1 + 0x148 + lVar7 * 0x120,param_1 + 0xb8 + lVar7 * 0x120);
    lVar4 = lVar7 * 0x90;
    lVar7 = ((longlong)cVar1 >> 0x3f) + (lVar7 + 1) * 2;
    lVar3 = lVar7 * 0x90;
    *(undefined4 *)(param_1 + lVar4) = *(undefined4 *)(param_1 + lVar3);
    *(undefined4 *)(param_1 + 4 + lVar4) = *(undefined4 *)(param_1 + 4 + lVar3);
    FUN_18002ba60(param_1 + 8 + lVar4,param_1 + 8 + lVar3);
    FUN_18002ba60(param_1 + 0x28 + lVar4,param_1 + 0x28 + lVar3);
    *(undefined4 *)(param_1 + 0x48 + lVar4) = *(undefined4 *)(param_1 + 0x48 + lVar3);
    FUN_18002ba60(param_1 + 0x50 + lVar4,param_1 + 0x50 + lVar3);
    FUN_18002ba60(param_1 + 0x70 + lVar4,param_1 + 0x70 + lVar3);
  }
  if ((lVar7 == lVar2) && ((param_3 & 1) == 0)) {
    lVar2 = param_3 * 0x90;
    uVar5 = lVar7 * 0x90;
    *(undefined4 *)(uVar5 + param_1) = *(undefined4 *)(lVar2 + -0x90 + param_1);
    *(undefined4 *)(uVar5 + 4 + param_1) = *(undefined4 *)(lVar2 + -0x8c + param_1);
    FUN_18002ba60((uVar5 | 8) + param_1,param_1 + -0x88 + lVar2);
    FUN_18002ba60(param_1 + 0x28 + uVar5,param_1 + -0x68 + lVar2);
    *(undefined4 *)(uVar5 + 0x48 + param_1) = *(undefined4 *)(lVar2 + -0x48 + param_1);
    FUN_18002ba60(param_1 + 0x50 + uVar5,param_1 + -0x40 + lVar2);
    FUN_18002ba60(param_1 + 0x70 + uVar5,param_1 + -0x20 + lVar2);
    lVar7 = param_3 - 1;
  }
  if (param_2 < lVar7) {
    do {
      lVar2 = lVar7 + -1 >> 1;
      uVar5 = lVar2 * 0x90;
      cVar1 = FUN_180023470(uVar5 + param_1 + 0x28,param_4 + 10);
      if (-1 < cVar1) break;
      uVar6 = lVar7 * 0x90;
      *(undefined4 *)(param_1 + uVar6) = *(undefined4 *)(param_1 + uVar5);
      *(undefined4 *)(param_1 + 4 + uVar6) = *(undefined4 *)(param_1 + 4 + uVar5);
      FUN_18002ba60((uVar6 | 8) + param_1,(uVar5 | 8) + param_1);
      FUN_18002ba60(param_1 + 0x28 + uVar6,uVar5 + param_1 + 0x28);
      *(undefined4 *)(param_1 + 0x48 + uVar6) = *(undefined4 *)(param_1 + 0x48 + uVar5);
      FUN_18002ba60(param_1 + 0x50 + uVar6,param_1 + 0x50 + uVar5);
      FUN_18002ba60(param_1 + 0x70 + uVar6,param_1 + 0x70 + uVar5);
      lVar7 = lVar2;
    } while (param_2 < lVar2);
  }
  uVar5 = lVar7 * 0x90;
  *(undefined4 *)(uVar5 + param_1) = *param_4;
  *(undefined4 *)(uVar5 + 4 + param_1) = param_4[1];
  FUN_18002ba60((uVar5 | 8) + param_1,param_4 + 2);
  FUN_18002ba60(param_1 + 0x28 + uVar5,param_4 + 10);
  *(undefined4 *)(uVar5 + 0x48 + param_1) = param_4[0x12];
  FUN_18002ba60(param_1 + 0x50 + uVar5,param_4 + 0x14);
  FUN_18002ba60(param_1 + 0x70 + uVar5,param_4 + 0x1c);
  return;
}



/* ===== 180288ce0 FUN_180288ce0 ===== */

void FUN_180288ce0(longlong param_1,longlong param_2,longlong param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar2 = (param_3 - param_1 >> 4) * -0x71c71c71c71c71c7;
  if (lVar2 < 0x29) {
    cVar1 = FUN_180023470(param_2 + 0x28,param_1 + 0x28);
    if (cVar1 < '\0') {
      FUN_18028b440(param_2,param_1);
    }
    cVar1 = FUN_180023470(param_3 + 0x28,param_2 + 0x28);
    if (cVar1 < '\0') {
      FUN_18028b440(param_3,param_2);
      cVar1 = FUN_180023470(param_2 + 0x28,param_1 + 0x28);
      if (cVar1 < '\0') {
        FUN_18028b440(param_2,param_1);
        return;
      }
    }
  }
  else {
    lVar3 = lVar2 + 1 >> 3;
    lVar2 = lVar3 * 0x90 + param_1;
    lVar5 = lVar3 * 0x120 + param_1;
    cVar1 = FUN_180023470(lVar2 + 0x28,param_1 + 0x28);
    if (cVar1 < '\0') {
      FUN_18028b440(lVar2,param_1);
    }
    cVar1 = FUN_180023470(lVar5 + 0x28,lVar2 + 0x28);
    if (cVar1 < '\0') {
      FUN_18028b440(lVar5,lVar2);
      cVar1 = FUN_180023470(lVar2 + 0x28,param_1 + 0x28);
      if (cVar1 < '\0') {
        FUN_18028b440(lVar2,param_1);
      }
    }
    lVar4 = param_2 + lVar3 * -0x90;
    lVar5 = lVar3 * 0x90 + param_2;
    cVar1 = FUN_180023470(param_2 + 0x28,lVar4 + 0x28);
    if (cVar1 < '\0') {
      FUN_18028b440(param_2,lVar4);
    }
    cVar1 = FUN_180023470(lVar5 + 0x28,param_2 + 0x28);
    if (cVar1 < '\0') {
      FUN_18028b440(lVar5,param_2);
      cVar1 = FUN_180023470(param_2 + 0x28,lVar4 + 0x28);
      if (cVar1 < '\0') {
        FUN_18028b440(param_2,lVar4);
      }
    }
    lVar4 = param_3 + lVar3 * -0x120;
    lVar5 = param_3 + lVar3 * -0x90;
    cVar1 = FUN_180023470(lVar5 + 0x28,lVar4 + 0x28);
    if (cVar1 < '\0') {
      FUN_18028b440(lVar5,lVar4);
    }
    cVar1 = FUN_180023470(param_3 + 0x28,lVar5 + 0x28);
    if (cVar1 < '\0') {
      FUN_18028b440(param_3,lVar5);
      cVar1 = FUN_180023470(lVar5 + 0x28,lVar4 + 0x28);
      if (cVar1 < '\0') {
        FUN_18028b440(lVar5,lVar4);
      }
    }
    cVar1 = FUN_180023470(param_2 + 0x28,lVar2 + 0x28);
    if (cVar1 < '\0') {
      FUN_18028b440(param_2,lVar2);
    }
    cVar1 = FUN_180023470(lVar5 + 0x28,param_2 + 0x28);
    if (cVar1 < '\0') {
      FUN_18028b440(lVar5,param_2);
      cVar1 = FUN_180023470(param_2 + 0x28,lVar2 + 0x28);
      if (cVar1 < '\0') {
        FUN_18028b440(param_2,lVar2);
      }
    }
  }
  return;
}



/* ===== 180288f30 FUN_180288f30 ===== */

void FUN_180288f30(ulonglong *param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4)

{
  ulonglong uVar1;
  char cVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar3 = param_3;
  while (((param_2 < uVar3 && (cVar2 = FUN_180023470(uVar3 - 0x68,uVar3 + 0x28), -1 < cVar2)) &&
         (cVar2 = FUN_180023470(uVar3 + 0x28,uVar3 - 0x68), -1 < cVar2))) {
    uVar3 = uVar3 - 0x90;
  }
  do {
    uVar6 = param_3 + 0x90;
    uVar1 = uVar6;
    uVar4 = uVar3;
    if ((param_4 <= uVar6) || (cVar2 = FUN_180023470(param_3 + 0xb8,uVar3 + 0x28), cVar2 < '\0'))
    break;
    cVar2 = FUN_180023470(uVar3 + 0x28,param_3 + 0xb8);
    param_3 = uVar6;
  } while (-1 < cVar2);
joined_r0x000180288fca:
  do {
    uVar7 = uVar3;
    if (param_4 <= uVar1) {
joined_r0x000180289018:
      for (; param_2 < uVar7; uVar7 = uVar7 - 0x90) {
        cVar2 = FUN_180023470(uVar7 - 0x68,uVar4 + 0x28);
        if (-1 < cVar2) {
          cVar2 = FUN_180023470(uVar4 + 0x28,uVar7 - 0x68);
          if (cVar2 < '\0') break;
          if (uVar7 != uVar4) {
            FUN_18028b440(uVar4 - 0x90,uVar7 - 0x90);
          }
          uVar4 = uVar4 - 0x90;
        }
      }
      if ((uVar7 == param_2) && (uVar1 == param_4)) {
        *param_1 = uVar4;
        param_1[1] = uVar6;
        return;
      }
      if (uVar7 == param_2) {
        if (uVar6 != uVar1) {
          FUN_18028b440(uVar4,uVar6);
        }
        uVar6 = uVar6 + 0x90;
        uVar5 = uVar4 + 0x90;
        uVar3 = uVar7;
        uVar7 = uVar1;
      }
      else {
        uVar3 = uVar7 - 0x90;
        if (uVar1 == param_4) {
          uVar5 = uVar4 - 0x90;
          if (uVar4 != uVar7) {
            FUN_18028b440(uVar3,uVar5);
          }
          uVar6 = uVar6 - 0x90;
          FUN_18028b440(uVar5,uVar6);
          uVar4 = uVar5;
          goto joined_r0x000180288fca;
        }
        uVar5 = uVar4;
        uVar7 = uVar3;
        uVar4 = uVar1;
      }
      FUN_18028b440(uVar4,uVar7);
      uVar1 = uVar1 + 0x90;
      uVar4 = uVar5;
      goto joined_r0x000180288fca;
    }
    cVar2 = FUN_180023470(uVar4 + 0x28,uVar1 + 0x28);
    if (-1 < cVar2) {
      cVar2 = FUN_180023470(uVar1 + 0x28,uVar4 + 0x28);
      if (cVar2 < '\0') goto joined_r0x000180289018;
      if (uVar6 != uVar1) {
        FUN_18028b440(uVar6,uVar1);
      }
      uVar6 = uVar6 + 0x90;
    }
    uVar1 = uVar1 + 0x90;
  } while( true );
}



/* ===== 180289130 FUN_180289130 ===== */

void FUN_180289130(longlong param_1,longlong param_2,ulonglong param_3,undefined4 *param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar5 = (longlong)(param_3 - 1) >> 1;
  lVar4 = param_2;
  if (param_2 < lVar5) {
    do {
      cVar1 = FUN_180023470(param_1 + 0x158 + lVar4 * 0x130,param_1 + 0xc0 + lVar4 * 0x130);
      lVar3 = lVar4 * 0x98;
      lVar4 = ((longlong)cVar1 >> 0x3f) + 2 + lVar4 * 2;
      lVar2 = lVar4 * 0x98;
      *(undefined4 *)(param_1 + lVar3) = *(undefined4 *)(param_1 + lVar2);
      FUN_18002ba60(param_1 + 8 + lVar3,param_1 + 8 + lVar2);
      FUN_18002ba60(param_1 + 0x28 + lVar3,param_1 + 0x28 + lVar2);
      *(undefined4 *)(param_1 + 0x48 + lVar3) = *(undefined4 *)(param_1 + 0x48 + lVar2);
      *(undefined4 *)(param_1 + 0x4c + lVar3) = *(undefined4 *)(param_1 + 0x4c + lVar2);
      *(undefined1 *)(param_1 + 0x50 + lVar3) = *(undefined1 *)(param_1 + 0x50 + lVar2);
      FUN_18002ba60(param_1 + 0x58 + lVar3,param_1 + 0x58 + lVar2);
      FUN_18002ba60(param_1 + 0x78 + lVar3,param_1 + 0x78 + lVar2);
    } while (lVar4 < lVar5);
  }
  if ((lVar4 == lVar5) && ((param_3 & 1) == 0)) {
    lVar5 = param_3 * 0x98;
    lVar4 = lVar4 * 0x98;
    *(undefined4 *)(lVar4 + param_1) = *(undefined4 *)(lVar5 + -0x98 + param_1);
    FUN_18002ba60(param_1 + 8 + lVar4,param_1 + -0x90 + lVar5);
    FUN_18002ba60(param_1 + 0x28 + lVar4,param_1 + -0x70 + lVar5);
    *(undefined4 *)(lVar4 + 0x48 + param_1) = *(undefined4 *)(lVar5 + -0x50 + param_1);
    *(undefined4 *)(lVar4 + 0x4c + param_1) = *(undefined4 *)(lVar5 + -0x4c + param_1);
    *(undefined1 *)(lVar4 + 0x50 + param_1) = *(undefined1 *)(lVar5 + -0x48 + param_1);
    FUN_18002ba60(param_1 + 0x58 + lVar4,param_1 + -0x40 + lVar5);
    FUN_18002ba60(param_1 + 0x78 + lVar4,param_1 + -0x20 + lVar5);
    lVar4 = param_3 - 1;
  }
  if (param_2 < lVar4) {
    do {
      lVar5 = lVar4 + -1 >> 1;
      lVar2 = lVar5 * 0x98;
      cVar1 = FUN_180023470(lVar2 + param_1 + 0x28,param_4 + 10);
      if (-1 < cVar1) break;
      lVar4 = lVar4 * 0x98;
      *(undefined4 *)(param_1 + lVar4) = *(undefined4 *)(param_1 + lVar2);
      FUN_18002ba60(param_1 + 8 + lVar4,param_1 + 8 + lVar2);
      FUN_18002ba60(param_1 + 0x28 + lVar4,lVar2 + param_1 + 0x28);
      *(undefined4 *)(param_1 + 0x48 + lVar4) = *(undefined4 *)(param_1 + 0x48 + lVar2);
      *(undefined4 *)(param_1 + 0x4c + lVar4) = *(undefined4 *)(param_1 + 0x4c + lVar2);
      *(undefined1 *)(param_1 + 0x50 + lVar4) = *(undefined1 *)(param_1 + 0x50 + lVar2);
      FUN_18002ba60(param_1 + 0x58 + lVar4,param_1 + 0x58 + lVar2);
      FUN_18002ba60(param_1 + 0x78 + lVar4,param_1 + 0x78 + lVar2);
      lVar4 = lVar5;
    } while (param_2 < lVar5);
  }
  lVar4 = lVar4 * 0x98;
  *(undefined4 *)(lVar4 + param_1) = *param_4;
  FUN_18002ba60(param_1 + 8 + lVar4,param_4 + 2);
  FUN_18002ba60(param_1 + 0x28 + lVar4,param_4 + 10);
  *(undefined4 *)(lVar4 + 0x48 + param_1) = param_4[0x12];
  *(undefined4 *)(lVar4 + 0x4c + param_1) = param_4[0x13];
  *(undefined1 *)(lVar4 + 0x50 + param_1) = *(undefined1 *)(param_4 + 0x14);
  FUN_18002ba60(param_1 + 0x58 + lVar4,param_4 + 0x16);
  FUN_18002ba60(param_1 + 0x78 + lVar4,param_4 + 0x1e);
  return;
}



/* ===== 180289410 FUN_180289410 ===== */

void FUN_180289410(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar3 = (param_3 - param_1 >> 3) * -0x79435e50d79435e5;
  if (lVar3 < 0x29) {
    cVar2 = FUN_180023470(param_2 + 0x28,param_1 + 0x28);
    if (cVar2 < '\0') {
      FUN_18028b570(param_2,param_1);
    }
    cVar2 = FUN_180023470(param_3 + 0x28,param_2 + 0x28);
    if (cVar2 < '\0') {
      FUN_18028b570(param_3,param_2);
      cVar2 = FUN_180023470(param_2 + 0x28,param_1 + 0x28);
      if (cVar2 < '\0') {
        FUN_18028b570(param_2,param_1);
        return;
      }
    }
  }
  else {
    lVar4 = lVar3 + 1 >> 3;
    lVar3 = lVar4 * 0x130 + param_1;
    lVar1 = lVar4 * 0x98 + param_1;
    cVar2 = FUN_180023470(lVar1 + 0x28,param_1 + 0x28);
    if (cVar2 < '\0') {
      FUN_18028b570(lVar1,param_1);
    }
    cVar2 = FUN_180023470(lVar3 + 0x28,lVar1 + 0x28);
    if (cVar2 < '\0') {
      FUN_18028b570(lVar3,lVar1);
      cVar2 = FUN_180023470(lVar1 + 0x28,param_1 + 0x28);
      if (cVar2 < '\0') {
        FUN_18028b570(lVar1,param_1);
      }
    }
    lVar5 = param_2 + lVar4 * -0x98;
    lVar3 = lVar4 * 0x98 + param_2;
    cVar2 = FUN_180023470(param_2 + 0x28,lVar5 + 0x28);
    if (cVar2 < '\0') {
      FUN_18028b570(param_2,lVar5);
    }
    cVar2 = FUN_180023470(lVar3 + 0x28,param_2 + 0x28);
    if (cVar2 < '\0') {
      FUN_18028b570(lVar3,param_2);
      cVar2 = FUN_180023470(param_2 + 0x28,lVar5 + 0x28);
      if (cVar2 < '\0') {
        FUN_18028b570(param_2,lVar5);
      }
    }
    lVar5 = param_3 + lVar4 * -0x130;
    lVar3 = param_3 + lVar4 * -0x98;
    cVar2 = FUN_180023470(lVar3 + 0x28,lVar5 + 0x28);
    if (cVar2 < '\0') {
      FUN_18028b570(lVar3,lVar5);
    }
    cVar2 = FUN_180023470(param_3 + 0x28,lVar3 + 0x28);
    if (cVar2 < '\0') {
      FUN_18028b570(param_3,lVar3);
      cVar2 = FUN_180023470(lVar3 + 0x28,lVar5 + 0x28);
      if (cVar2 < '\0') {
        FUN_18028b570(lVar3,lVar5);
      }
    }
    cVar2 = FUN_180023470(param_2 + 0x28,lVar1 + 0x28);
    if (cVar2 < '\0') {
      FUN_18028b570(param_2,lVar1);
    }
    cVar2 = FUN_180023470(lVar3 + 0x28,param_2 + 0x28);
    if (cVar2 < '\0') {
      FUN_18028b570(lVar3,param_2);
      cVar2 = FUN_180023470(param_2 + 0x28,lVar1 + 0x28);
      if (cVar2 < '\0') {
        FUN_18028b570(param_2,lVar1);
      }
    }
  }
  return;
}



/* ===== 180289660 FUN_180289660 ===== */

void FUN_180289660(ulonglong *param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4)

{
  ulonglong uVar1;
  char cVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar3 = param_3;
  while (((param_2 < uVar3 && (cVar2 = FUN_180023470(uVar3 - 0x70,uVar3 + 0x28), -1 < cVar2)) &&
         (cVar2 = FUN_180023470(uVar3 + 0x28,uVar3 - 0x70), -1 < cVar2))) {
    uVar3 = uVar3 - 0x98;
  }
  do {
    uVar6 = param_3 + 0x98;
    uVar1 = uVar6;
    uVar4 = uVar3;
    if ((param_4 <= uVar6) || (cVar2 = FUN_180023470(param_3 + 0xc0,uVar3 + 0x28), cVar2 < '\0'))
    break;
    cVar2 = FUN_180023470(uVar3 + 0x28,param_3 + 0xc0);
    param_3 = uVar6;
  } while (-1 < cVar2);
joined_r0x0001802896fa:
  do {
    uVar7 = uVar3;
    if (param_4 <= uVar1) {
joined_r0x000180289748:
      for (; param_2 < uVar7; uVar7 = uVar7 - 0x98) {
        cVar2 = FUN_180023470(uVar7 - 0x70,uVar4 + 0x28);
        if (-1 < cVar2) {
          cVar2 = FUN_180023470(uVar4 + 0x28,uVar7 - 0x70);
          if (cVar2 < '\0') break;
          if (uVar7 != uVar4) {
            FUN_18028b570(uVar4 - 0x98,uVar7 - 0x98);
          }
          uVar4 = uVar4 - 0x98;
        }
      }
      if ((uVar7 == param_2) && (uVar1 == param_4)) {
        *param_1 = uVar4;
        param_1[1] = uVar6;
        return;
      }
      if (uVar7 == param_2) {
        if (uVar6 != uVar1) {
          FUN_18028b570(uVar4,uVar6);
        }
        uVar6 = uVar6 + 0x98;
        uVar5 = uVar4 + 0x98;
        uVar3 = uVar7;
        uVar7 = uVar1;
      }
      else {
        uVar3 = uVar7 - 0x98;
        if (uVar1 == param_4) {
          uVar5 = uVar4 - 0x98;
          if (uVar4 != uVar7) {
            FUN_18028b570(uVar3,uVar5);
          }
          uVar6 = uVar6 - 0x98;
          FUN_18028b570(uVar5,uVar6);
          uVar4 = uVar5;
          goto joined_r0x0001802896fa;
        }
        uVar5 = uVar4;
        uVar7 = uVar3;
        uVar4 = uVar1;
      }
      FUN_18028b570(uVar4,uVar7);
      uVar1 = uVar1 + 0x98;
      uVar4 = uVar5;
      goto joined_r0x0001802896fa;
    }
    cVar2 = FUN_180023470(uVar4 + 0x28,uVar1 + 0x28);
    if (-1 < cVar2) {
      cVar2 = FUN_180023470(uVar1 + 0x28,uVar4 + 0x28);
      if (cVar2 < '\0') goto joined_r0x000180289748;
      if (uVar6 != uVar1) {
        FUN_18028b570(uVar6,uVar1);
      }
      uVar6 = uVar6 + 0x98;
    }
    uVar1 = uVar1 + 0x98;
  } while( true );
}



