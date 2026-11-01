/* ===== 180209890 FUN_180209890 ===== */

undefined8 FUN_180209890(undefined8 param_1,char *param_2)

{
  undefined8 uVar1;
  
  if (((DAT_180961ed0 == (code *)0x0) || (param_2 == (char *)0x0)) || (*param_2 == '\0')) {
    uVar1 = 0;
  }
  else {
    (*DAT_180961ed0)();
    uVar1 = 1;
  }
  return uVar1;
}



/* ===== 1802098c0 FUN_1802098c0 ===== */

undefined8 FUN_1802098c0(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if ((DAT_180961b30 == (code *)0x0) || (param_2 == 0)) {
    uVar1 = 0;
  }
  else {
    (*DAT_180961b30)();
    uVar1 = 1;
  }
  return uVar1;
}



/* ===== 1802098f0 FUN_1802098f0 ===== */

undefined8 FUN_1802098f0(undefined1 *param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  lVar3 = (*DAT_180961af8)();
  *(longlong *)(param_1 + 8) = lVar3;
  if ((lVar3 != 0) && (lVar3 = (*DAT_180961b00)(lVar3), lVar3 != 0)) {
    *param_1 = 1;
    uVar2 = (*DAT_180961b28)(lVar3);
    *(undefined4 *)(param_1 + 0x10) = uVar2;
    uVar2 = (*DAT_180961b08)(lVar3);
    *(undefined4 *)(param_1 + 0x14) = uVar2;
    uVar2 = (*DAT_180961b10)(lVar3);
    *(undefined4 *)(param_1 + 0x18) = uVar2;
    uVar2 = (*DAT_180961b18)(lVar3);
    *(undefined4 *)(param_1 + 0x1c) = uVar2;
    uVar1 = (*DAT_180961b20)(lVar3);
    param_1[0x20] = uVar1;
  }
  return 1;
}



/* ===== 180209990 FUN_180209990 ===== */

void FUN_180209990(void)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  char *_Str1;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong *plVar9;
  undefined1 *puVar10;
  longlong lVar11;
  longlong local_res8 [2];
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [24];
  longlong *local_38;
  longlong *local_30;
  longlong local_28;
  
  lVar11 = (longlong)DAT_180ceb668 - (longlong)DAT_180ceb660;
  if (DAT_180ceb660 != DAT_180ceb668) {
    DAT_180ceb668 = DAT_180ceb660;
  }
  FUN_1803a09f0(&local_38);
  puVar10 = auStack_58;
  plVar6 = local_38;
  if (local_38 != local_30) {
    do {
      if ((((*plVar6 != 0) &&
           (lVar4 = FUN_18000f3a0(*plVar6 + (ulonglong)DAT_180961968), lVar4 != 0)) &&
          (lVar4 = FUN_18000f3a0((ulonglong)DAT_18096196c + lVar4), lVar4 != 0)) &&
         (((lVar4 = FUN_18000f3a0((ulonglong)DAT_180961970 + lVar4), lVar4 != 0 &&
           (_Str1 = (char *)FUN_18000f3a0((ulonglong)DAT_180961974 + lVar4),
           _Str1 + -0x10000 < (char *)0x7ffffffeffff)) &&
          ((_Str1 != (char *)0x0 && (iVar3 = strcmp(_Str1,"C_Chicken"), iVar3 == 0)))))) {
        local_res8[0] = *plVar6;
        FUN_1800242d0(&DAT_180ceb660,local_res8);
      }
      plVar6 = plVar6 + 1;
    } while (plVar6 != local_30);
  }
  if (local_38 != (longlong *)0x0) {
    uVar8 = (local_28 - (longlong)local_38 >> 3) * 8;
    plVar6 = local_38;
    if (0xfff < uVar8) {
      plVar6 = (longlong *)local_38[-1];
      if (0x1f < (ulonglong)((longlong)local_38 + (-8 - (longlong)plVar6))) {
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        puVar10 = auStack_50;
        goto LAB_180209b49;
      }
      uVar8 = uVar8 + 0x27;
    }
    thunk_FUN_1803d64e0(plVar6,uVar8);
  }
  if ((longlong)DAT_180ceb668 - (longlong)DAT_180ceb660 != lVar11) {
    FUN_1802097c0("chickens | %zu in the entity list",
                  (longlong)DAT_180ceb668 - (longlong)DAT_180ceb660 >> 3);
  }
  plVar6 = (longlong *)*DAT_180ceb6a8;
  plVar7 = DAT_180ceb6a8;
  if (plVar6 != DAT_180ceb6a8) {
    do {
      if (DAT_180ceb660 == DAT_180ceb668) {
LAB_180209b49:
        *(undefined8 *)(puVar10 + -8) = 0x180209b56;
        puVar5 = (undefined8 *)FUN_18020d300();
        plVar6 = (longlong *)*puVar5;
        plVar7 = DAT_180ceb6a8;
      }
      else {
        bVar2 = false;
        plVar9 = DAT_180ceb660;
        do {
          bVar2 = (bool)(bVar2 | *plVar9 == plVar6[2]);
          plVar9 = plVar9 + 1;
        } while (plVar9 != DAT_180ceb668);
        if (!bVar2) goto LAB_180209b49;
        plVar6 = (longlong *)*plVar6;
        *(longlong **)(puVar10 + 0x60) = plVar6;
      }
    } while (plVar6 != plVar7);
  }
  return;
}



/* ===== 180209b80 FUN_180209b80 ===== */

undefined8 FUN_180209b80(void)

{
  undefined8 uVar1;
  undefined8 local_res8 [4];
  
  if (DAT_180cd1304 == '\0') {
    FUN_1803a0b60(local_res8);
    DAT_181108a00 = local_res8[0];
    DAT_1811089f8 = FUN_1803a0c50(local_res8);
    DAT_180cd1304 = '\x01';
  }
  if ((DAT_1811089f8 == 0) || (DAT_180ceb694 == 0)) {
    return 0xffffffff;
  }
  uVar1 = FUN_180011200((ulonglong)DAT_180ceb694 + DAT_1811089f8);
  return uVar1;
}



/* ===== 180209bf0 FUN_180209bf0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void FUN_180209bf0(void)

{
  undefined8 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong *plVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  int *piVar12;
  size_t sVar13;
  undefined4 *puVar14;
  longlong *plVar15;
  longlong lVar16;
  size_t sVar17;
  char *******pppppppcVar18;
  char *******pppppppcVar19;
  undefined8 uVar20;
  ulonglong uVar21;
  undefined8 *******pppppppuVar22;
  void *_Buf1;
  undefined8 *puVar23;
  undefined8 *******pppppppuVar24;
  longlong *plVar25;
  ulonglong *puVar26;
  undefined4 *puVar27;
  longlong *plVar28;
  char *pcVar29;
  undefined1 *puVar30;
  undefined1 *puVar31;
  uint uVar32;
  int iVar33;
  ulonglong uVar34;
  size_t *psVar35;
  int iVar36;
  undefined8 uStack_2d0;
  undefined1 auStack_2c8 [8];
  undefined1 auStack_2c0 [24];
  undefined8 local_2a8;
  char *local_2a0;
  char *local_298;
  ulonglong local_288;
  char local_280;
  char local_27f;
  uint local_27c;
  uint local_278;
  ulonglong *local_270;
  ulonglong *local_268;
  int local_260 [2];
  char *local_258;
  longlong *local_250;
  ulonglong local_248;
  int local_240;
  int local_23c;
  int local_238;
  int local_234;
  char *local_230;
  longlong *local_228;
  undefined1 local_218 [16];
  undefined8 *******local_208;
  undefined8 uStack_200;
  size_t local_1f8;
  ulonglong local_1f0;
  undefined8 local_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  char *******local_1c8;
  undefined8 ******ppppppuStack_1c0;
  size_t local_1b8;
  ulonglong local_1b0 [5];
  char *******local_188;
  undefined8 uStack_180;
  size_t local_178;
  ulonglong local_170;
  char local_168 [272];
  ulonglong local_58;
  
  plVar28 = DAT_180ceb6a8;
  local_58 = DAT_180919500 ^ (ulonglong)auStack_2c8;
  local_27c = 0;
  local_278 = 0;
  if (DAT_1809210cc == '\0') {
    for (plVar25 = (longlong *)*DAT_180ceb6a8; plVar25 != plVar28; plVar25 = (longlong *)*plVar25) {
      lVar2 = plVar25[2];
      if (plVar25[9] != 0) {
        plVar15 = plVar25 + 7;
        if (0xf < (ulonglong)plVar25[10]) {
          plVar15 = (longlong *)*plVar15;
        }
        FUN_180209890(lVar2,plVar15);
      }
      if (((char)plVar25[0xf] != '\0') && (DAT_180ceb68c != 0)) {
        plVar15 = plVar25 + 0xb;
        if (0xf < (ulonglong)plVar25[0xe]) {
          plVar15 = (longlong *)*plVar15;
        }
        FUN_180298300((ulonglong)DAT_180ceb68c + lVar2,plVar15);
      }
      if (((char)plVar25[0x10] != '\0') && (DAT_180ceb690 != 0)) {
        FUN_180013280(lVar2 + (ulonglong)DAT_180ceb690,(longlong)plVar25 + 0x7c);
      }
    }
    if (DAT_180ceb6b0 != 0) {
      if (DAT_180ceb6b0 < DAT_180ceb6d8 >> 3) {
        FUN_18020d7b0(&DAT_180ceb6a0,*DAT_180ceb6a8,DAT_180ceb6a8);
      }
      else {
        FUN_18020da80(DAT_180ceb6b0,DAT_180ceb6a8);
        *DAT_180ceb6a8 = (longlong)DAT_180ceb6a8;
        DAT_180ceb6a8[1] = (longlong)DAT_180ceb6a8;
        DAT_180ceb6b0 = 0;
        local_250 = DAT_180ceb6a8;
        FUN_180026ac0(DAT_180ceb6b8,DAT_180ceb6c0,&local_250);
      }
    }
  }
  else {
    local_250 = (longlong *)GetTickCount64();
    local_260[0] = FUN_180209b80();
    local_268 = DAT_180ceb668;
    local_270 = DAT_180ceb660;
    puVar26 = DAT_180ceb668;
    if (DAT_180ceb660 != DAT_180ceb668) {
      do {
        iVar10 = DAT_1809210d0;
        puVar31 = auStack_2c8;
        puVar30 = auStack_2c8;
        plVar28 = (longlong *)0x0;
        local_288 = *local_270;
        if (local_288 != DAT_1809f1820) {
          if (DAT_1809210d0 == 0) {
LAB_18020a02a:
            plVar25 = plVar28;
            if (DAT_1809210e4 != '\0') {
              plVar25 = (longlong *)(local_288 >> 4 & 0xffffffff);
            }
            iVar36 = local_260[0];
            piVar12 = (int *)FUN_18020ce60(local_1b0 + 1,plVar25);
            iVar10 = piVar12[1];
            iVar9 = piVar12[2];
            local_234 = piVar12[3];
            pcVar29 = *(char **)(piVar12 + 4);
            if (iVar10 < 1) {
              iVar10 = 1;
              iVar33 = 2;
            }
            else {
              iVar33 = *piVar12;
            }
            if (((DAT_180921125 == '\0') || (pcVar29 == (char *)0x0)) ||
               ((*pcVar29 == '\0' || (iVar36 == -1)))) {
              local_27f = '\0';
              plVar25 = plVar28;
            }
            else {
              local_27f = '\x01';
              plVar25 = (longlong *)0x1;
            }
            local_240 = iVar33;
            local_23c = iVar10;
            local_238 = iVar9;
            local_230 = pcVar29;
            FUN_180540170(local_168,0,0xa0);
            local_298 = "";
            if (pcVar29 != (char *)0x0) {
              local_298 = pcVar29;
            }
            local_2a0 = (char *)CONCAT44(local_2a0._4_4_,iVar9);
            local_2a8 = CONCAT44(local_2a8._4_4_,iVar10);
            snprintf(local_168,0xa0,"pet|%d|%d|%d|%s",iVar33);
            local_1b0[1] = 0;
            local_1b0[2] = 0;
            local_1b0[3] = 0;
            local_1b0[4] = 0;
            sVar13 = strlen(local_168);
            FUN_1800133a0(local_1b0 + 1,local_168,sVar13);
            uVar32 = local_27c;
            pcVar29 = "";
            if ((int)plVar25 != 0) {
              pcVar29 = "|tag";
            }
            sVar13 = strlen(pcVar29);
            puVar14 = (undefined4 *)FUN_1800134a0(local_1b0 + 1,pcVar29,sVar13);
            local_1e8._0_4_ = *puVar14;
            local_1e8._4_4_ = puVar14[1];
            uStack_1e0 = puVar14[2];
            uStack_1dc = puVar14[3];
            local_1d8 = puVar14[4];
            uStack_1d4 = puVar14[5];
            uStack_1d0 = puVar14[6];
            uStack_1cc = puVar14[7];
            *(undefined8 *)(puVar14 + 4) = 0;
            *(undefined8 *)(puVar14 + 6) = 0xf;
            *(undefined1 *)puVar14 = 0;
            FUN_18000f890(local_1b0 + 1);
            plVar25 = DAT_180ceb6a8;
            if (iVar33 == 1) {
              pcVar29 = "models/chicken/egg_pristine.vmdl";
            }
            else if (iVar33 == 2) {
              pcVar29 = "models/chicken/chick.vmdl";
            }
            else if (iVar33 == 4) {
              pcVar29 = "models/chicken/chicken_silkie.vmdl";
            }
            else if (iVar33 == 5) {
              pcVar29 = "models/chicken/chicken_polish.vmdl";
            }
            else {
              pcVar29 = "models/chicken/chicken.vmdl";
            }
            uVar34 = ((((((((local_288 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                           local_288 >> 8 & 0xff) * 0x100000001b3 ^ local_288 >> 0x10 & 0xff) *
                          0x100000001b3 ^ local_288 >> 0x18 & 0xff) * 0x100000001b3 ^
                        local_288 >> 0x20 & 0xff) * 0x100000001b3 ^ local_288 >> 0x28 & 0xff) *
                       0x100000001b3 ^ local_288 >> 0x30 & 0xff) * 0x100000001b3 ^ local_288 >> 0x38
                     ) * 0x100000001b3 & DAT_180ceb6d0;
            plVar15 = *(longlong **)(DAT_180ceb6b8 + 8 + uVar34 * 0x10);
            if (plVar15 == DAT_180ceb6a8) {
LAB_18020a269:
              plVar15 = plVar28;
            }
            else {
              uVar21 = plVar15[2];
              while (local_288 != uVar21) {
                if (plVar15 == *(longlong **)(DAT_180ceb6b8 + uVar34 * 0x10)) goto LAB_18020a269;
                plVar15 = (longlong *)plVar15[1];
                uVar21 = plVar15[2];
              }
            }
            local_228 = DAT_180ceb6a8;
            if (plVar15 != (longlong *)0x0) {
              local_228 = plVar15;
            }
            local_258 = pcVar29;
            plVar15 = (longlong *)FUN_18020d460(plVar15,local_218,&local_288);
            lVar2 = *plVar15;
            if (((((local_288 == 0) || (DAT_180ca09f8 == 0)) ||
                 (lVar16 = FUN_18000f3a0(local_288 + DAT_180ca09f8), lVar16 == 0)) ||
                ((DAT_180ceb698 == 0 || (DAT_180ceb69c == 0)))) ||
               (lVar16 = FUN_18000f3a0((ulonglong)DAT_180ceb69c + lVar16 + (ulonglong)DAT_180ceb698)
               , 0x7ffffffefffe < lVar16 - 0x10000U)) {
              local_1f8 = 0;
              uStack_200 = 0;
              local_208 = (undefined8 *******)0x0;
              local_1f0 = 0xf;
            }
            else {
              FUN_180540170(local_168,0,0x104);
              do {
                cVar8 = FUN_180011220((longlong)plVar28 + lVar16);
                if (cVar8 == '\0') break;
                local_168[(longlong)plVar28] = cVar8;
                uVar34 = (longlong)plVar28 + 2;
                plVar28 = (longlong *)((longlong)plVar28 + 1);
              } while (uVar34 < 0x104);
              local_208 = (undefined8 *******)0x0;
              uStack_200 = 0;
              local_1f8 = 0;
              local_1f0 = 0;
              sVar13 = strlen(local_168);
              FUN_1800133a0(&local_208,local_168,sVar13);
            }
            uVar34 = local_1f0;
            sVar13 = local_1f8;
            pppppppuVar24 = local_208;
            local_27c = uVar32 | 0x1c;
            local_278 = local_27c;
            if (local_1f8 == 0) {
LAB_18020a3cd:
              cVar8 = '\x01';
            }
            else {
              sVar17 = strlen(pcVar29);
              pppppppuVar22 = &local_208;
              if (0xf < uVar34) {
                pppppppuVar22 = pppppppuVar24;
              }
              if ((sVar13 == sVar17) &&
                 ((sVar13 == 0 || (iVar10 = memcmp(pppppppuVar22,pcVar29,sVar13), iVar10 == 0))))
              goto LAB_18020a3cd;
              cVar8 = '\0';
            }
            local_248 = CONCAT44(uStack_1cc,uStack_1d0);
            puVar14 = (undefined4 *)CONCAT44(local_1e8._4_4_,(undefined4)local_1e8);
            local_280 = cVar8;
            if (local_228 != plVar25) {
              puVar27 = (undefined4 *)&local_1e8;
              if (0xf < local_248) {
                puVar27 = puVar14;
              }
              sVar13 = *(size_t *)(lVar2 + 0x28);
              _Buf1 = (void *)(lVar2 + 0x18);
              if (0xf < *(ulonglong *)(lVar2 + 0x30)) {
                _Buf1 = *(void **)(lVar2 + 0x18);
              }
              if (((sVar13 != CONCAT44(uStack_1d4,local_1d8)) ||
                  (((sVar13 != 0 && (iVar10 = memcmp(_Buf1,puVar27,sVar13), iVar10 != 0)) ||
                   (cVar8 == '\0')))) ||
                 (1999 < (ulonglong)((longlong)local_250 - *(longlong *)(lVar2 + 0x88))))
              goto LAB_18020a63b;
              if (uVar34 < 0x10) {
LAB_18020a47e:
                local_1f8 = 0;
                local_1f0 = 0xf;
                local_208 = (undefined8 *******)((ulonglong)local_208 & 0xffffffffffffff00);
                if (local_248 < 0x10) goto LAB_18020ab03;
                uVar34 = local_248 + 1;
                puVar27 = puVar14;
                if (uVar34 < 0x1000) {
LAB_18020a4c3:
                  thunk_FUN_1803d64e0(puVar27,uVar34);
                  goto LAB_18020ab03;
                }
                puVar27 = *(undefined4 **)(puVar14 + 0xfffffffffffffffe);
                puVar30 = auStack_2c8;
                if ((ulonglong)((longlong)puVar14 + (-8 - (longlong)puVar27)) < 0x20) {
                  uVar34 = local_248 + 0x28;
                  goto LAB_18020a4c3;
                }
              }
              else {
                uVar21 = uVar34 + 1;
                pppppppuVar22 = pppppppuVar24;
                if (uVar21 < 0x1000) {
LAB_18020a476:
                  thunk_FUN_1803d64e0(pppppppuVar22,uVar21);
                  goto LAB_18020a47e;
                }
                pppppppuVar22 = (undefined8 *******)pppppppuVar24[-1];
                if ((ulonglong)((longlong)pppppppuVar24 + (-8 - (longlong)pppppppuVar22)) < 0x20) {
                  uVar21 = uVar34 + 0x28;
                  goto LAB_18020a476;
                }
LAB_18020ab29:
                pcVar5 = (code *)swi(0x29);
                (*pcVar5)(5);
                puVar30 = auStack_2c0;
              }
LAB_18020ab30:
              pcVar5 = (code *)swi(0x29);
              (*pcVar5)(5);
              puVar31 = puVar30 + 8;
LAB_18020ab37:
                    /* WARNING: Subroutine does not return */
              *(undefined **)(puVar31 + -8) = &UNK_18020ab3c;
              FUN_180011990();
            }
            if (sVar13 == 0) {
              local_188 = (char *******)0x0;
              uStack_180 = 0;
              pppppppcVar18 = (char *******)FUN_18000fb70(0x20);
              uVar7 = s_models_chicken_chicken_vmdl_180709680._12_4_;
              uVar6 = s_models_chicken_chicken_vmdl_180709680._8_4_;
              uVar11 = s_models_chicken_chicken_vmdl_180709680._4_4_;
              local_188 = pppppppcVar18;
              local_178 = 0x1b;
              local_170 = 0x1f;
              *(undefined4 *)pppppppcVar18 = s_models_chicken_chicken_vmdl_180709680._0_4_;
              *(undefined4 *)((longlong)pppppppcVar18 + 4) = uVar11;
              *(undefined4 *)(pppppppcVar18 + 1) = uVar6;
              *(undefined4 *)((longlong)pppppppcVar18 + 0xc) = uVar7;
              uVar20 = s_models_chicken_chicken_vmdl_180709680._19_8_;
              *(ulonglong *)((longlong)pppppppcVar18 + 0xb) =
                   CONCAT35(s_models_chicken_chicken_vmdl_180709680._16_3_,
                            CONCAT41(s_models_chicken_chicken_vmdl_180709680._12_4_,
                                     s_models_chicken_chicken_vmdl_180709680[0xb]));
              *(undefined8 *)((longlong)pppppppcVar18 + 0x13) = uVar20;
              *(char *)((longlong)pppppppcVar18 + 0x1b) = '\0';
              uVar32 = local_27c | 1;
              psVar35 = &local_178;
              puVar26 = &local_170;
              pppppppcVar19 = (char *******)&local_188;
            }
            else {
              local_1c8 = (char *******)0x0;
              ppppppuStack_1c0 = (undefined8 ******)0x0;
              local_1b8 = 0;
              local_1b0[0] = 0;
              pppppppuVar22 = &local_208;
              if (0xf < uVar34) {
                pppppppuVar22 = pppppppuVar24;
              }
              if (0x7fffffffffffffff < sVar13) goto LAB_18020ab37;
              if (sVar13 < 0x10) {
                local_1b8 = sVar13;
                local_1b0[0] = 0xf;
                pppppppcVar18 = (char *******)*pppppppuVar22;
                local_1c8 = pppppppcVar18;
                ppppppuStack_1c0 = pppppppuVar22[1];
              }
              else {
                uVar34 = sVar13 | 0xf;
                if (uVar34 < 0x8000000000000000) {
                  if (uVar34 < 0x16) {
                    uVar34 = 0x16;
                  }
                }
                else {
                  uVar34 = 0x7fffffffffffffff;
                }
                pppppppcVar18 = (char *******)FUN_18000fb70(uVar34 + 1);
                local_1c8 = pppppppcVar18;
                local_1b8 = sVar13;
                local_1b0[0] = uVar34;
                FUN_180540530(pppppppcVar18,pppppppuVar22,sVar13 + 1);
              }
              uVar32 = local_27c | 2;
              psVar35 = &local_1b8;
              puVar26 = local_1b0;
              pppppppcVar19 = (char *******)&local_1c8;
            }
            local_27c = uVar32;
            local_278 = uVar32;
            if ((char *******)(lVar2 + 0x38) != pppppppcVar19) {
              if (*puVar26 < 0x10) {
                pppppppcVar18 = pppppppcVar19;
              }
              FUN_180029840((char *******)(lVar2 + 0x38),pppppppcVar18,*psVar35);
            }
            if ((uVar32 & 2) != 0) {
              uVar32 = uVar32 & 0xfffffffd;
              local_27c = uVar32;
              FUN_18000f890(&local_1c8);
            }
            if ((uVar32 & 1) != 0) {
              local_27c = uVar32 & 0xfffffffe;
              FUN_18000f890(&local_188);
            }
LAB_18020a63b:
            uVar6 = uStack_1d4;
            uVar11 = local_1d8;
            uVar34 = local_248;
            puVar1 = (undefined8 *)(lVar2 + 0x18);
            if (local_280 == '\0') {
LAB_18020a6c1:
              pcVar29 = local_258;
              cVar8 = FUN_180209890(local_288,local_258);
              if (cVar8 == '\0') {
                FUN_1802097c0("dress | set_model failed | chicken %p | %s",local_288,pcVar29);
                lVar2 = DAT_180ceb6b8;
                plVar25 = DAT_180ceb6a8;
                uVar21 = ((((((((local_288 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                               local_288 >> 8 & 0xff) * 0x100000001b3 ^ local_288 >> 0x10 & 0xff) *
                              0x100000001b3 ^ local_288 >> 0x18 & 0xff) * 0x100000001b3 ^
                            local_288 >> 0x20 & 0xff) * 0x100000001b3 ^ local_288 >> 0x28 & 0xff) *
                           0x100000001b3 ^ local_288 >> 0x30 & 0xff) * 0x100000001b3 ^
                         local_288 >> 0x38) * 0x100000001b3 & DAT_180ceb6d0;
                plVar28 = *(longlong **)(DAT_180ceb6b8 + 8 + uVar21 * 0x10);
                if (plVar28 == DAT_180ceb6a8) {
LAB_18020a7a2:
                  plVar15 = (longlong *)0x0;
                }
                else {
                  uVar3 = plVar28[2];
                  plVar15 = plVar28;
                  while (local_288 != uVar3) {
                    if (plVar15 == *(longlong **)(DAT_180ceb6b8 + uVar21 * 0x10))
                    goto LAB_18020a7a2;
                    plVar15 = (longlong *)plVar15[1];
                    uVar3 = plVar15[2];
                  }
                }
                if (plVar15 != (longlong *)0x0) {
                  plVar4 = *(longlong **)(DAT_180ceb6b8 + uVar21 * 0x10);
                  if (plVar28 == plVar15) {
                    if (plVar4 == plVar15) {
                      *(longlong **)(DAT_180ceb6b8 + uVar21 * 0x10) = DAT_180ceb6a8;
                      *(longlong **)(lVar2 + 8 + uVar21 * 0x10) = plVar25;
                    }
                    else {
                      *(longlong *)(DAT_180ceb6b8 + 8 + uVar21 * 0x10) = plVar15[1];
                    }
                  }
                  else if (plVar4 == plVar15) {
                    *(longlong *)(DAT_180ceb6b8 + uVar21 * 0x10) = *plVar15;
                  }
                  lVar2 = *plVar15;
                  DAT_180ceb6b0 = DAT_180ceb6b0 - 1;
                  *(longlong *)plVar15[1] = lVar2;
                  *(longlong *)(lVar2 + 8) = plVar15[1];
                  FUN_18000f890(plVar15 + 0xb);
                  FUN_18000f890(plVar15 + 7);
                  FUN_18000f890(plVar15 + 3);
                  thunk_FUN_1803d64e0(plVar15,0x90);
                }
                if (0xf < local_1f0) {
                  uVar21 = local_1f0 + 1;
                  pppppppuVar24 = local_208;
                  if (0xfff < uVar21) {
                    pppppppuVar24 = (undefined8 *******)local_208[-1];
                    if (0x1f < (ulonglong)((longlong)local_208 + (-8 - (longlong)pppppppuVar24)))
                    goto LAB_18020ab29;
                    uVar21 = local_1f0 + 0x28;
                  }
                  thunk_FUN_1803d64e0(pppppppuVar24,uVar21);
                }
                local_1f8 = 0;
                local_1f0 = 0xf;
                local_208 = (undefined8 *******)((ulonglong)local_208 & 0xffffffffffffff00);
                if (0xf < uVar34) {
                  uVar21 = uVar34 + 1;
                  puVar27 = puVar14;
                  if (0xfff < uVar21) {
                    puVar27 = *(undefined4 **)(puVar14 + 0xfffffffffffffffe);
                    if (0x1f < (ulonglong)((longlong)puVar14 + (-8 - (longlong)puVar27)))
                    goto LAB_18020ab30;
                    uVar21 = uVar34 + 0x28;
                  }
                  thunk_FUN_1803d64e0(puVar27,uVar21);
                }
                goto LAB_18020ab03;
              }
            }
            else {
              puVar27 = (undefined4 *)&local_1e8;
              if (0xf < local_248) {
                puVar27 = puVar14;
              }
              sVar13 = *(size_t *)(lVar2 + 0x28);
              puVar23 = puVar1;
              if (0xf < *(ulonglong *)(lVar2 + 0x30)) {
                puVar23 = (undefined8 *)*puVar1;
              }
              if ((sVar13 != CONCAT44(uStack_1d4,local_1d8)) ||
                 ((sVar13 != 0 && (iVar10 = memcmp(puVar23,puVar27,sVar13), iVar10 != 0))))
              goto LAB_18020a6c1;
            }
            uVar20 = FUN_1800e02c0(&local_240);
            cVar8 = FUN_1802098c0(local_288,uVar20);
            puVar27 = (undefined4 *)&local_1e8;
            if (0xf < uVar34) {
              puVar27 = puVar14;
            }
            sVar13 = *(size_t *)(lVar2 + 0x28);
            if (*(ulonglong *)(lVar2 + 0x30) < 0x10) {
              puVar23 = puVar1;
            }
            else {
              puVar23 = (undefined8 *)*puVar1;
            }
            if ((sVar13 != CONCAT44(uVar6,uVar11)) ||
               ((sVar13 != 0 && (iVar10 = memcmp(puVar23,puVar27,sVar13), iVar10 != 0)))) {
              pppppppuVar24 = &local_208;
              if (0xf < local_1f0) {
                pppppppuVar24 = local_208;
              }
              local_2a0 = "failed";
              if (cVar8 != '\0') {
                local_2a0 = "ok";
              }
              local_298 = (char *)CONCAT44(local_298._4_4_,local_238);
              local_2a8 = uVar20;
              FUN_1802097c0("dress | chicken %p | model %s (was %s) | view %p | look %s | seed %d",
                            local_288,local_258,pppppppuVar24);
            }
            if (puVar1 != &local_1e8) {
              puVar27 = (undefined4 *)&local_1e8;
              if (0xf < uVar34) {
                puVar27 = puVar14;
              }
              FUN_180029840(puVar1,puVar27,CONCAT44(uVar6,uVar11));
              uVar34 = CONCAT44(uStack_1cc,uStack_1d0);
              puVar14 = (undefined4 *)CONCAT44(local_1e8._4_4_,(undefined4)local_1e8);
            }
            pcVar29 = local_230;
            *(longlong **)(lVar2 + 0x88) = local_250;
            if (DAT_180ceb68c != 0) {
              lVar16 = DAT_180ceb68c + local_288;
              if ((local_230 == (char *)0x0) || (*local_230 == '\0')) {
                if (*(char *)(lVar2 + 0x78) != '\0') {
                  plVar28 = (longlong *)(lVar2 + 0x58);
                  if (0xf < *(ulonglong *)(lVar2 + 0x70)) {
                    plVar28 = (longlong *)*plVar28;
                  }
                  FUN_180298300(lVar16,plVar28);
                  *(undefined1 *)(lVar2 + 0x78) = 0;
                }
              }
              else {
                if (*(char *)(lVar2 + 0x78) == '\0') {
                  uVar20 = FUN_180298230(local_1b0 + 1,lVar16);
                  FUN_18002ba60(lVar2 + 0x58,uVar20);
                  FUN_18000f890(local_1b0 + 1);
                }
                *(undefined1 *)(lVar2 + 0x78) = 1;
                uVar20 = FUN_180298230(local_1b0 + 1,lVar16);
                cVar8 = FUN_180023400(uVar20,pcVar29);
                FUN_18000f890(local_1b0 + 1);
                if (cVar8 == '\0') {
                  FUN_180298300(lVar16,pcVar29);
                }
              }
            }
            if (DAT_180ceb690 != 0) {
              if (local_27f == '\0') {
                if (*(char *)(lVar2 + 0x80) != '\0') {
                  FUN_180013280(DAT_180ceb690 + local_288,lVar2 + 0x7c);
                  *(undefined1 *)(lVar2 + 0x80) = 0;
                }
              }
              else {
                if (*(char *)(lVar2 + 0x80) == '\0') {
                  uVar11 = FUN_180011200(DAT_180ceb690 + local_288);
                  *(undefined4 *)(lVar2 + 0x7c) = uVar11;
                }
                *(undefined1 *)(lVar2 + 0x80) = 1;
                FUN_180013280(DAT_180ceb690 + local_288,local_260);
              }
            }
            if (0xf < local_1f0) {
              uVar21 = local_1f0 + 1;
              pppppppuVar24 = local_208;
              if (0xfff < uVar21) {
                pppppppuVar24 = (undefined8 *******)local_208[-1];
                if (0x1f < (ulonglong)((longlong)local_208 + (-8 - (longlong)pppppppuVar24)))
                goto LAB_18020ab29;
                uVar21 = local_1f0 + 0x28;
              }
              thunk_FUN_1803d64e0(pppppppuVar24,uVar21);
            }
            local_1f8 = 0;
            local_1f0 = 0xf;
            local_208 = (undefined8 *******)((ulonglong)local_208 & 0xffffffffffffff00);
            if (0xf < uVar34) {
              uVar21 = uVar34 + 1;
              puVar27 = puVar14;
              if (0xfff < uVar21) {
                puVar27 = *(undefined4 **)(puVar14 + 0xfffffffffffffffe);
                puVar30 = auStack_2c8;
                if (0x1f < (ulonglong)((longlong)puVar14 + (-8 - (longlong)puVar27)))
                goto LAB_18020ab30;
                uVar21 = uVar34 + 0x28;
              }
              thunk_FUN_1803d64e0(puVar27,uVar21);
            }
          }
          else {
            uVar34 = ((((((((local_288 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                           local_288 >> 8 & 0xff) * 0x100000001b3 ^ local_288 >> 0x10 & 0xff) *
                          0x100000001b3 ^ local_288 >> 0x18 & 0xff) * 0x100000001b3 ^
                        local_288 >> 0x20 & 0xff) * 0x100000001b3 ^ local_288 >> 0x28 & 0xff) *
                       0x100000001b3 ^ local_288 >> 0x30 & 0xff) * 0x100000001b3 ^ local_288 >> 0x38
                     ) * 0x100000001b3 & DAT_180ceb6d0;
            plVar25 = *(longlong **)(DAT_180ceb6b8 + 8 + uVar34 * 0x10);
            if (plVar25 == DAT_180ceb6a8) {
LAB_180209e92:
              plVar25 = plVar28;
            }
            else {
              uVar21 = plVar25[2];
              while (local_288 != uVar21) {
                if (plVar25 == *(longlong **)(DAT_180ceb6b8 + uVar34 * 0x10)) goto LAB_180209e92;
                plVar25 = (longlong *)plVar25[1];
                uVar21 = plVar25[2];
              }
            }
            if (((plVar25 == (longlong *)0x0) || (plVar25 == DAT_180ceb6a8)) ||
               ((char)plVar25[0x10] == '\0')) {
              if (DAT_180ceb690 != 0) {
                iVar9 = FUN_180011200(local_288 + DAT_180ceb690);
                puVar26 = local_268;
                goto LAB_180209ed8;
              }
            }
            else {
              iVar9 = *(int *)((longlong)plVar25 + 0x7c);
LAB_180209ed8:
              if ((iVar9 - 1U < 0xfffffffe) && ((iVar10 == 1 || (iVar9 == local_260[0]))))
              goto LAB_18020a02a;
            }
            uVar34 = local_288;
            uVar21 = ((((((((local_288 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                           local_288 >> 8 & 0xff) * 0x100000001b3 ^ local_288 >> 0x10 & 0xff) *
                          0x100000001b3 ^ local_288 >> 0x18 & 0xff) * 0x100000001b3 ^
                        local_288 >> 0x20 & 0xff) * 0x100000001b3 ^ local_288 >> 0x28 & 0xff) *
                       0x100000001b3 ^ local_288 >> 0x30 & 0xff) * 0x100000001b3 ^ local_288 >> 0x38
                     ) * 0x100000001b3 & DAT_180ceb6d0;
            plVar25 = *(longlong **)(DAT_180ceb6b8 + 8 + uVar21 * 0x10);
            if (plVar25 == DAT_180ceb6a8) {
LAB_180209f98:
              plVar25 = plVar28;
            }
            else {
              uVar3 = plVar25[2];
              while (local_288 != uVar3) {
                if (plVar25 == *(longlong **)(DAT_180ceb6b8 + uVar21 * 0x10)) goto LAB_180209f98;
                plVar25 = (longlong *)plVar25[1];
                uVar3 = plVar25[2];
              }
            }
            if ((plVar25 == (longlong *)0x0) || (plVar25 == DAT_180ceb6a8)) goto LAB_18020ab0d;
            if (plVar25[9] != 0) {
              plVar28 = plVar25 + 7;
              if (0xf < (ulonglong)plVar25[10]) {
                plVar28 = (longlong *)*plVar28;
              }
              FUN_180209890(local_288,plVar28);
            }
            if (((char)plVar25[0xf] != '\0') && (DAT_180ceb68c != 0)) {
              plVar28 = plVar25 + 0xb;
              if (0xf < (ulonglong)plVar25[0xe]) {
                plVar28 = (longlong *)*plVar28;
              }
              FUN_180298300(DAT_180ceb68c + uVar34,plVar28);
            }
            if (((char)plVar25[0x10] != '\0') && (DAT_180ceb690 != 0)) {
              FUN_180013280(uVar34 + DAT_180ceb690,(longlong)plVar25 + 0x7c);
            }
            FUN_18020d300();
          }
LAB_18020ab03:
          puVar26 = local_268;
        }
LAB_18020ab0d:
        local_270 = local_270 + 1;
      } while (local_270 != puVar26);
    }
  }
  return;
}



/* ===== 18020ab40 FUN_18020ab40 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18020ab40(void)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  code *pcVar7;
  undefined8 ****ppppuVar8;
  ulonglong uVar9;
  undefined1 *puVar10;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [24];
  undefined8 local_48;
  undefined8 ****local_38;
  undefined8 uStack_30;
  longlong local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_68;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0xf;
  local_38 = (undefined8 ****)0x0;
  iVar3 = FUN_1804e4d70(&DAT_1809f17d0);
  puVar10 = auStack_68;
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809f181c == 0x7fffffff) goto LAB_18020ad47;
  ppppuVar8 = _DAT_1809f18b8;
  uVar1 = _DAT_1809f18c0;
  lVar4 = _DAT_1809f18c8;
  uVar9 = _DAT_1809f18d0;
  _DAT_1809f18b8 = local_38;
  _DAT_1809f18c0 = uStack_30;
  _DAT_1809f18c8 = local_28;
  _DAT_1809f18d0 = uStack_20;
  local_38 = ppppuVar8;
  uStack_30 = uVar1;
  local_28 = lVar4;
  uStack_20 = uVar9;
  FUN_1804e4e90(&DAT_1809f17d0);
  if (((((local_28 != 0) && (DAT_180961ab8 != 0)) && (lVar4 = FUN_18000f3a0(), lVar4 != 0)) &&
      ((lVar4 = FUN_18000f3a0(lVar4 + 8), lVar4 != 0 && (lVar5 = FUN_18000f3a0(lVar4), lVar5 != 0)))
      ) && (lVar5 = FUN_18000f3a0(lVar5), lVar5 != 0)) {
    if (uStack_20 < 0x10) {
      ppppuVar8 = &local_38;
LAB_18020ac70:
      cVar2 = FUN_180200ed0();
      if (((cVar2 != '\0') && (lVar5 = FUN_180200ff0(), lVar5 != 0)) &&
         ((lVar6 = FUN_18000f3a0(lVar5), lVar6 != 0 &&
          ((pcVar7 = (code *)FUN_18000f3a0(lVar6 + 0x268), DAT_180ceb448 <= pcVar7 &&
           (pcVar7 < DAT_180ceb440)))))) {
        local_48 = 1;
        (*pcVar7)(lVar5,lVar4,ppppuVar8,&DAT_18070230d);
      }
    }
    else {
      ppppuVar8 = local_38;
      if (local_38 != (undefined8 ****)0x0) goto LAB_18020ac70;
    }
    ppppuVar8 = &local_38;
    if (0xf < uStack_20) {
      ppppuVar8 = local_38;
    }
    FUN_1802097c0("script | %s",ppppuVar8);
  }
  if (0xf < uStack_20) {
    uVar9 = uStack_20 + 1;
    ppppuVar8 = local_38;
    if (0xfff < uVar9) {
      ppppuVar8 = (undefined8 ****)local_38[-1];
      if (0x1f < (ulonglong)((longlong)local_38 + (-8 - (longlong)ppppuVar8))) {
        pcVar7 = (code *)swi(0x29);
        DAT_1809f181c = (*pcVar7)(5);
        puVar10 = auStack_60;
LAB_18020ad47:
        DAT_1809f181c = DAT_1809f181c + -1;
                    /* WARNING: Subroutine does not return */
        *(undefined **)(puVar10 + -8) = &UNK_18020ad59;
        FUN_1804e4a90(6);
      }
      uVar9 = uStack_20 + 0x28;
    }
    thunk_FUN_1803d64e0(ppppuVar8,uVar9);
  }
  return;
}



/* ===== 18020ad70 FUN_18020ad70 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_18020ad70(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined1 local_90;
  longlong local_88;
  longlong local_80;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStack_c8;
  lVar2 = *DAT_180961b38;
  if ((lVar2 == 0) || (plVar3 = (longlong *)*DAT_180961b40, plVar3 == (longlong *)0x0)) {
    lVar7 = 0;
  }
  else {
    lVar4 = (*DAT_180961b48)(lVar2,"chicken",0);
    lVar7 = 0;
    if (lVar4 != 0) {
      lVar5 = (*DAT_180961b50)(0x38);
      lVar7 = 0;
      if (lVar5 != 0) {
        (*DAT_180961b60)(lVar5,lVar2 + 0xd50,3);
        *(short *)(lVar5 + 0x20) = *(short *)(lVar5 + 0x20) + 1;
        lVar7 = **(longlong **)(lVar4 + 0x58);
        lVar6 = (*DAT_180961b70)(lVar5,&DAT_180619fa8);
        if ((lVar6 != 0) && (lVar7 != 0)) {
          (*DAT_180961b78)(lVar6,lVar7,2);
        }
        lVar7 = (*DAT_180961b70)(lVar5,&DAT_180619fe0);
        if (lVar7 != 0) {
          (*DAT_180961b78)(lVar7,param_2,2);
        }
        (*DAT_180961b80)(lVar5,&DAT_180619fd0,param_1);
        uVar1 = *(undefined4 *)(lVar2 + 0x1fc0);
        local_68 = *(undefined8 *)(lVar2 + 0x1fd0);
        uStack_60 = *(undefined8 *)(lVar2 + 0x1fd8);
        local_58 = *(undefined4 *)(lVar2 + 0x1fe0);
        uStack_54 = *(undefined4 *)(lVar2 + 0x1fe4);
        uStack_50 = *(undefined4 *)(lVar2 + 0x1fe8);
        uStack_4c = *(undefined4 *)(lVar2 + 0x1fec);
        local_48 = *(undefined4 *)(lVar2 + 0x1ff0);
        uStack_44 = *(undefined4 *)(lVar2 + 0x1ff4);
        uStack_40 = *(undefined4 *)(lVar2 + 0x1ff8);
        uStack_3c = *(undefined4 *)(lVar2 + 0x1ffc);
        local_90 = 0;
        local_98 = 0xffffffff;
        local_a0 = 0xffffffff;
        local_a8 = (undefined8 *)((ulonglong)local_a8._4_4_ << 0x20);
        lVar7 = (*DAT_180961b98)(lVar2,uVar1,lVar4,&DAT_18058b643);
        if (lVar7 != 0) {
          lVar4 = *(longlong *)(lVar7 + 0x10);
          local_78 = 0x1ffffffffffff;
          local_a8 = &local_68;
          local_88 = lVar4;
          local_80 = lVar5;
          (**(code **)(*plVar3 + 0x118))(plVar3,uVar1,1,&local_88);
          if ((*(uint *)(lVar4 + 0x30) & 0x200) == 0) {
            (*DAT_180961ba0)(lVar2,lVar7,lVar5);
            (*DAT_180961ba8)(lVar2);
          }
        }
        *(short *)(lVar5 + 0x20) = *(short *)(lVar5 + 0x20) + -1;
        if (*(short *)(lVar5 + 0x20) < 1) {
          (*DAT_180961b68)(lVar5);
          (*DAT_180961b58)(lVar5,0x38);
        }
      }
    }
  }
  return lVar7;
}



/* ===== 18020afb0 FUN_18020afb0 ===== */

undefined1 FUN_18020afb0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  (*DAT_180961bb0)();
  (*DAT_180961bb8)(param_1,param_3);
  return 1;
}



/* ===== 18020aff0 FUN_18020aff0 ===== */

undefined1 FUN_18020aff0(void)

{
  (*DAT_180961bc8)();
  return 1;
}



/* ===== 18020b010 FUN_18020b010 ===== */

undefined8 FUN_18020b010(void)

{
  if (DAT_180961bd0 == (code *)0x0) {
    return 0;
  }
  (*DAT_180961bd0)();
  return 1;
}



/* ===== 18020b040 FUN_18020b040 ===== */

undefined8 FUN_18020b040(longlong param_1)

{
  undefined8 uVar1;
  
  if (((param_1 == 0) || (DAT_180961bd8 == (code *)0x0)) || (DAT_180961be0 == (code *)0x0)) {
    uVar1 = 0;
  }
  else {
    (*DAT_180961bd8)();
    (*DAT_180961be0)(param_1,&DAT_18061a000);
    uVar1 = 1;
  }
  return uVar1;
}



/* ===== 18020b090 FUN_18020b090 ===== */

void FUN_18020b090(void)

{
  (*DAT_180961bc0)();
  return;
}



/* ===== 18020b0b0 FUN_18020b0b0 ===== */

char * FUN_18020b0b0(void)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  char *pcVar4;
  
  if (DAT_1809f1820 == 0) {
    return "none";
  }
  if (0x7ffffffefffe < DAT_1809f1820 - 0x10000U) {
    return "entity unreadable";
  }
  lVar1 = FUN_18000f3a0(DAT_1809f1820 + 0x10);
  if (0x7ffffffefffe < lVar1 - 0x10000U) {
    return "identity unreadable";
  }
  lVar2 = FUN_18000f3a0(lVar1);
  if (lVar2 != DAT_1809f1820) {
    return "identity reused";
  }
  uVar3 = FUN_180011200(lVar1 + 0x30);
  pcVar4 = (char *)0x0;
  if ((uVar3 & 0x10) != 0) {
    pcVar4 = "queued for deletion";
  }
  return pcVar4;
}



/* ===== 18020b180 FUN_18020b180 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18020b180(char param_1,undefined8 param_2)

{
  longlong lVar1;
  char *pcVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_ac;
  undefined8 uStack_a4;
  undefined8 local_9c;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined2 local_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_d8;
  if (DAT_1809f1820 != 0) {
    pcVar2 = "";
    if (param_1 != '\0') {
      pcVar2 = " | removed";
    }
    FUN_1802097c0("local pet | dropped (%s)%s",param_2,pcVar2);
  }
  if (param_1 != '\0') {
    lVar1 = FUN_18020b0b0();
    if (lVar1 == 0) {
      if (DAT_1809f1888 != 0) {
        FUN_18020b010(DAT_1809f1820,0,0);
      }
      FUN_18020b090(DAT_1809f1820);
    }
  }
  local_b0 = 0xffffffff;
  local_b8 = 0;
  local_80 = 0;
  uStack_88 = 0;
  local_90 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  DAT_1809f1820 = 0;
  local_ac = 0;
  uStack_a4 = 0;
  local_9c = 0xffffffffffffffff;
  local_78 = 0xf;
  local_28 = 0x9e3779b9;
  DAT_1809f1828 = 0xffffffff;
  _DAT_1809f182c = 0;
  _DAT_1809f1834 = 0;
  _DAT_1809f183c = 0xffffffffffffffff;
  FUN_18002ba60(&DAT_1809f1848,&local_90);
  _DAT_1809f1868 = local_70;
  _DAT_1809f1870 = local_68;
  DAT_1809f1878 = local_60;
  DAT_1809f1880 = local_58;
  DAT_1809f1888 = local_50;
  DAT_1809f1894 = (undefined1)local_44;
  DAT_1809f1890 = local_48;
  DAT_1809f1895 = local_44._1_1_;
  DAT_1809f1898 = (undefined4)local_40;
  DAT_1809f18a8 = local_30;
  DAT_1809f18b0 = local_28;
  DAT_1809f189c = local_40._4_4_;
  _DAT_1809f18a0 = (undefined4)local_38;
  FUN_18000f890(&local_90);
  return;
}



/* ===== 18020b350 FUN_18020b350 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_18020b350(undefined4 *param_1,ulonglong param_2)

{
  char cVar1;
  undefined8 local_58;
  float local_50;
  undefined8 local_48;
  uint local_40;
  undefined4 local_38;
  undefined4 local_34;
  float local_30;
  undefined4 local_28;
  undefined4 local_24;
  float local_20;
  
  local_38 = *param_1;
  local_34 = param_1[1];
  local_48 = 0;
  local_40 = 0;
  local_58 = 0;
  local_50 = 0.0;
  local_20 = (float)param_2 + DAT_1808aca7c;
  local_30 = (float)param_2 - _DAT_1808acb40;
  local_28 = local_38;
  local_24 = local_34;
  cVar1 = FUN_1802aead0(&local_28,&local_38,local_34,&local_48,&local_58);
  if ((cVar1 != '\0') && (DAT_1808ac1f4 < local_50)) {
    return (ulonglong)local_40;
  }
  return param_2;
}



/* ===== 18020b410 FUN_18020b410 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18020b410(void)

{
  char cVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  ULONGLONG UVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  float *pfVar11;
  longlong lVar12;
  undefined8 *******pppppppuVar13;
  float *pfVar14;
  char *pcVar15;
  ulonglong uVar16;
  char *pcVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 auStack_2b8 [32];
  double local_298;
  double local_290;
  double local_288;
  double local_280;
  undefined4 local_278;
  undefined4 local_270;
  float local_268 [2];
  undefined8 local_260;
  float local_258 [2];
  undefined8 local_250;
  float local_248;
  float local_244;
  float local_240 [8];
  undefined8 *******local_220 [2];
  size_t local_210;
  ulonglong local_208;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined8 local_1ec;
  undefined8 uStack_1e4;
  undefined8 local_1dc;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  ulonglong local_1a0;
  undefined8 local_198;
  longlong local_190;
  float local_188;
  ushort local_184;
  undefined8 local_180;
  undefined8 local_178;
  ulonglong local_170;
  uint local_168;
  float local_158;
  float local_154;
  float local_150;
  undefined4 local_14c;
  undefined *local_148;
  undefined8 local_140;
  float local_138;
  float local_130;
  float local_12c;
  undefined4 local_128;
  float local_120;
  float local_11c;
  float local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  ulonglong local_f8;
  
  local_f8 = DAT_180919500 ^ (ulonglong)auStack_2b8;
  if ((((DAT_180921127 == '\0') && (DAT_180921134 == '\0')) || (DAT_180961b38 == 0)) ||
     ((((((DAT_180961b40 == 0 || (DAT_180961b48 == 0)) ||
         ((DAT_180961b50 == 0 || ((DAT_180961b58 == 0 || (DAT_180961b60 == 0)))))) ||
        (DAT_180961b68 == 0)) ||
       (((((DAT_180961b70 == 0 || (DAT_180961b78 == 0)) || (DAT_180961b80 == 0)) ||
         ((DAT_180961b98 == 0 || (DAT_180961ba0 == 0)))) || (DAT_180961ba8 == 0)))) ||
      (((DAT_180961bb0 == 0 || (DAT_180961bb8 == 0)) ||
       ((DAT_180961bc0 == 0 || ((DAT_180961bc8 == 0 || (DAT_180961ed0 == 0)))))))))) {
    if (DAT_1809f1820 == 0) {
      return;
    }
    pcVar17 = "turned off";
  }
  else {
    if (DAT_180cd1304 == '\0') {
      FUN_1803a0b60(&local_250);
      DAT_181108a00 = local_250;
      DAT_1811089f8 = FUN_1803a0c50(&local_250);
      DAT_180cd1304 = '\x01';
    }
    lVar12 = DAT_1811089f8;
    if (DAT_1811089f8 == 0) {
      return;
    }
    UVar7 = GetTickCount64();
    fVar29 = 0.0;
    if (((DAT_180ca09f8 == 0) ||
        (lVar8 = FUN_18000f3a0(lVar12 + (ulonglong)DAT_180ca09f8), lVar8 == 0)) ||
       (DAT_180ca0950 == 0)) {
      fVar21 = 0.0;
      fVar26 = 0.0;
      local_140 = 0;
      local_138 = 0.0;
    }
    else {
      puVar9 = (undefined8 *)FUN_1800111b0(&local_158,lVar8 + (ulonglong)DAT_180ca0950);
      local_140 = *puVar9;
      fVar21 = (float)local_140;
      fVar26 = (float)((ulonglong)local_140 >> 0x20);
      local_138 = *(float *)(puVar9 + 1);
    }
    fVar28 = local_138;
    local_260 = CONCAT44(fVar26,fVar26);
    local_250 = CONCAT44(fVar26,fVar21);
    local_258[0] = local_138;
    lVar8 = FUN_18020b0b0();
    pcVar17 = "models/chicken/chicken.vmdl";
    if (lVar8 != 0) {
      if (DAT_1809f1820 != 0) {
        FUN_1802097c0("local pet | gone (%s)",lVar8);
      }
      uVar16 = DAT_1809f1880;
      local_1f8 = 0;
      uVar5 = 0xffffffff;
      local_1f0 = 0xffffffff;
      local_1ec = 0;
      uStack_1e4 = 0;
      local_1dc = 0xffffffffffffffff;
      uStack_1c8 = 0;
      local_1c0 = 0;
      local_1b8 = 0xf;
      local_1d0 = 0;
      local_1b0 = 0;
      local_1a8 = 0;
      local_1a0 = 0;
      local_198 = 0;
      local_190 = 0;
      local_188 = 0.0;
      local_184 = 0;
      local_180 = 0;
      local_178 = 0;
      local_170 = 0;
      local_168 = 0x9e3779b9;
      DAT_1809f1820 = 0;
      DAT_1809f1828 = 0xffffffff;
      _DAT_1809f182c = 0;
      _DAT_1809f1834 = 0;
      _DAT_1809f183c = 0xffffffffffffffff;
      FUN_18002ba60(&DAT_1809f1848,&local_1d0);
      _DAT_1809f1868 = local_1b0;
      _DAT_1809f1870 = local_1a8;
      DAT_1809f1878 = local_1a0;
      DAT_1809f1880 = local_198;
      DAT_1809f1888 = local_190;
      DAT_1809f1890 = local_188;
      _DAT_1809f1894 = local_184;
      DAT_1809f1898 = (float)local_180;
      DAT_1809f189c = local_180._4_4_;
      _DAT_1809f18a0 = (float)local_178;
      DAT_1809f18a8 = local_170;
      DAT_1809f18b0 = local_168;
      FUN_18000f890(&local_1d0);
      if (UVar7 < uVar16) {
        DAT_1809f1880 = uVar16;
        return;
      }
      if (DAT_180ca09f0 == 0) {
        DAT_1809f1880 = uVar16;
        return;
      }
      DAT_1809f1880 = uVar16;
      iVar3 = FUN_180011200(lVar12 + (ulonglong)DAT_180ca09f0);
      if (999 < iVar3 - 1U) {
        return;
      }
      if (10000 < UVar7 - _DAT_180ceb678) {
        DAT_180ceb680 = 0;
        _DAT_180ceb678 = UVar7;
      }
      DAT_180ceb680 = DAT_180ceb680 + 1;
      if (4 < DAT_180ceb680) {
        DAT_1809f1880 = UVar7 + 5000;
        DAT_180ceb680 = 0;
        _DAT_180ceb678 = UVar7;
        FUN_1802097c0("local pet | keeps disappearing, next try in 5 s");
        return;
      }
      if ((int)DAT_1809210d8 < 0) {
        fVar24 = 0.0;
      }
      else {
        fVar24 = DAT_1809210d8;
        if (3 < (int)DAT_1809210d8) {
          fVar24 = 4.2039e-45;
        }
      }
      if (DAT_1809210dc < 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = DAT_1809210dc;
        if (2 < DAT_1809210dc) {
          iVar3 = 2;
        }
      }
      if (((fVar24 == 0.0) || (fVar24 == 1.4013e-45)) || ((int)fVar24 < 1)) {
        iVar3 = 2;
      }
      else {
        iVar3 = (&DAT_180619ff0)[iVar3];
      }
      local_158 = fVar21 + DAT_1808ac9e4;
      local_154 = fVar26 + DAT_1808ac9e4;
      local_150 = fVar28;
      local_130 = local_158;
      local_12c = local_154;
      local_128 = FUN_18020b350(&local_158,fVar28,lVar12);
      if (iVar3 == 1) {
        pcVar15 = "models/chicken/egg_pristine.vmdl";
      }
      else if (iVar3 == 2) {
        pcVar15 = "models/chicken/chick.vmdl";
      }
      else if (iVar3 == 4) {
        pcVar15 = "models/chicken/chicken_silkie.vmdl";
      }
      else if (iVar3 == 5) {
        pcVar15 = "models/chicken/chicken_polish.vmdl";
      }
      else {
        pcVar15 = "models/chicken/chicken.vmdl";
      }
      DAT_1809f1820 = FUN_18020ad70(&local_130,pcVar15);
      if (DAT_1809f1820 == 0) {
        DAT_1809f1880 = UVar7 + 3000;
        FUN_1802097c0("local pet | spawn failed");
        return;
      }
      lVar8 = FUN_18000f3a0(DAT_1809f1820 + 0x10);
      if (lVar8 != 0) {
        uVar4 = FUN_180011200(lVar8 + 0x10);
        uVar5 = FUN_180011200(lVar8 + 0x30);
        uVar5 = uVar4 + (uVar5 & 1) * -0x8000;
        uVar5 = (uVar5 ^ uVar4) & 0x7fff ^ uVar5;
      }
      _DAT_1809f182c = CONCAT44(local_12c,local_130);
      _DAT_1809f1834 = CONCAT44(DAT_1809f1838,local_128);
      DAT_1809f18b0 = DAT_1809f18b0 ^ (uint)UVar7;
      DAT_1809f1828 = uVar5;
      _DAT_1809f1868 = UVar7;
      _DAT_1809f1870 = UVar7;
      lVar8 = FUN_18000f3a0(DAT_1809f1820 + 0x10);
      uVar6 = FUN_180011200(lVar8 + 0x30);
      FUN_1802097c0("local pet | spawned %p | handle %#x | identity flags %#x",DAT_1809f1820,
                    DAT_1809f1828,uVar6);
    }
    if ((int)DAT_1809210d8 < 0) {
      fVar24 = 0.0;
    }
    else {
      fVar24 = DAT_1809210d8;
      if (3 < (int)DAT_1809210d8) {
        fVar24 = 4.2039e-45;
      }
    }
    if (DAT_1809210dc < 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = DAT_1809210dc;
      if (2 < DAT_1809210dc) {
        iVar3 = 2;
      }
    }
    if (fVar24 == 0.0) {
      fVar18 = 1.4013e-45;
    }
    else if (fVar24 == 1.4013e-45) {
      fVar18 = 2.8026e-45;
    }
    else {
      fVar18 = (float)(&DAT_180619ff0)[iVar3];
    }
    local_150 = DAT_1809210e0;
    if ((int)DAT_1809210e0 < 1) {
      local_150 = 1.4013e-45;
    }
    local_154 = 1.4013e-45;
    local_158 = 2.8026e-45;
    if (0 < (int)fVar24) {
      local_154 = fVar24;
      local_158 = fVar18;
    }
    local_14c = local_104;
    local_148 = &DAT_1809210e5;
    FUN_1800e01f0(local_220,&local_158);
    puVar9 = &DAT_1809f1848;
    if (0xf < DAT_1809f1860) {
      puVar9 = DAT_1809f1848;
    }
    pppppppuVar13 = local_220;
    if (0xf < local_208) {
      pppppppuVar13 = local_220[0];
    }
    if ((local_210 != DAT_1809f1858) ||
       ((local_210 != 0 && (iVar3 = memcmp(pppppppuVar13,puVar9,local_210), iVar3 != 0)))) {
      if (local_158 == 1.4013e-45) {
        pcVar17 = "models/chicken/egg_pristine.vmdl";
      }
      else if (local_158 == 2.8026e-45) {
        pcVar17 = "models/chicken/chick.vmdl";
      }
      else if (local_158 == 5.60519e-45) {
        pcVar17 = "models/chicken/chicken_silkie.vmdl";
      }
      else if (local_158 == 7.00649e-45) {
        pcVar17 = "models/chicken/chicken_polish.vmdl";
      }
      FUN_180209890(DAT_1809f1820,pcVar17);
      if (DAT_180ceb68c != 0) {
        lVar8 = (ulonglong)DAT_180ceb68c + DAT_1809f1820;
        if ((lVar8 != 0) && (DAT_180cd011c != '\0')) {
          local_268[0] = (float)CONCAT22(local_268[0]._2_2_,0x1249);
          FUN_180066890((ulonglong)DAT_180cfe5d4 + lVar8,local_268);
          local_268[0] = (float)CONCAT31(local_268[0]._1_3_,1);
          FUN_1800233d0((ulonglong)DAT_180cfe5e8 + lVar8,local_268);
          FUN_1802980b0(lVar8,&local_158);
        }
        FUN_1802098c0(DAT_1809f1820,lVar8);
      }
      if (DAT_180ceb690 != 0) {
        local_268[1] = (float)FUN_180209b80();
        FUN_180013280((ulonglong)DAT_180ceb690 + DAT_1809f1820,local_268 + 1);
      }
      pppppppuVar13 = local_220;
      if (0xf < local_208) {
        pppppppuVar13 = local_220[0];
      }
      FUN_180029840(&DAT_1809f1848,pppppppuVar13,local_210);
      _DAT_1809f183c = CONCAT44(DAT_1809f1840,0xffffffff);
      pppppppuVar13 = local_220;
      if (0xf < local_208) {
        pppppppuVar13 = local_220[0];
      }
      FUN_1802097c0("local pet | dressed | %s",pppppppuVar13);
    }
    FUN_18000f890(local_220);
    uVar5 = DAT_180ca09f0;
    uVar16 = UVar7 - _DAT_1809f1868;
    _DAT_1809f1868 = UVar7;
    if (DAT_180921134 == '\0') {
LAB_18020bdf4:
      uVar5 = DAT_180ca09f0;
    }
    else if (DAT_180ca09f0 != 0) {
      iVar3 = FUN_180011200(lVar12 + (ulonglong)DAT_180ca09f0);
      if (iVar3 - 1U < 1000) {
        if (DAT_1809f1888 == lVar12) {
LAB_18020bd0a:
          local_258[0] = 20.0;
          local_268[1] = 0.0;
          pfVar14 = local_268 + 1;
          if (0.0 <= DAT_180921138) {
            pfVar14 = &DAT_180921138;
          }
          pfVar11 = local_258;
          if (DAT_180921138 <= DAT_1808ac950) {
            pfVar11 = pfVar14;
          }
          local_158 = *pfVar11 + DAT_1808ac7ec;
          local_154 = -1.0;
          local_150 = *pfVar11 * DAT_1808ac188 + _DAT_1808acdd8;
          if ((DAT_1809f1820 == 0) || (DAT_180ca09f8 == 0)) {
            uVar10 = 0;
          }
          else {
            uVar10 = FUN_18000f3a0(DAT_1809f1820 + (ulonglong)DAT_180ca09f8);
          }
          FUN_18020b040(uVar10,&local_158);
          if ((DAT_1809f183c == 0xb) && (DAT_1809f1840 == -1)) {
            return;
          }
          cVar1 = FUN_18020aff0(DAT_1809f1820,0xb,0xffffffff);
          if (cVar1 == '\0') {
            return;
          }
          _DAT_1809f183c = 0xffffffff0000000b;
          return;
        }
        if (DAT_1809f1888 != 0) {
          FUN_18020b010(DAT_1809f1820,0,0);
        }
        DAT_1809f1888 = 0;
        cVar1 = FUN_18020b010(DAT_1809f1820,lVar12,0x119bcd9);
        if (cVar1 != '\0') {
          _DAT_1809f183c = CONCAT44(DAT_1809f1840,0xffffffff);
          DAT_1809f1888 = lVar12;
          FUN_1802097c0("local pet | on the shoulder of %p",lVar12);
          goto LAB_18020bd0a;
        }
        goto LAB_18020bdf4;
      }
    }
    if (DAT_1809f1888 == 0) {
LAB_18020be92:
      fVar24 = DAT_1808ac950;
    }
    else {
      uVar6 = FUN_18020b350(&local_140,fVar28,DAT_1809f1820);
      if (DAT_1809f1888 == 0) {
        uVar5 = DAT_180ca09f0;
        goto LAB_18020be92;
      }
      FUN_18020b010(DAT_1809f1820,0,0);
      fVar24 = DAT_1808ac950;
      DAT_1809f1888 = 0;
      _DAT_1809f182c = CONCAT44(fVar26,fVar21 + DAT_1808ac950);
      _DAT_1809f1834 = CONCAT44(DAT_1809f1838,uVar6);
      _DAT_1809f183c = CONCAT44(DAT_1809f1840,0xffffffff);
      FUN_1802097c0("local pet | off the shoulder");
      uVar5 = DAT_180ca09f0;
    }
    if (DAT_180921127 != '\0') {
      if ((uVar5 == 0) || (iVar3 = FUN_180011200((ulonglong)uVar5 + lVar12), 999 < iVar3 - 1U)) {
        if (((DAT_1809f183c != 0) || (DAT_1809f1840 != -1)) &&
           (cVar1 = FUN_18020aff0(DAT_1809f1820,0,0xffffffff), cVar1 != '\0')) {
          _DAT_1809f183c = 0xffffffff00000000;
        }
        local_140 = _DAT_1809f182c;
        local_138 = DAT_1809f1834;
        local_158 = 0.0;
        local_154 = DAT_1809f1838;
        local_150 = 0.0;
        FUN_18020afb0(DAT_1809f1820,&local_140,&local_158);
        return;
      }
      fVar18 = (float)uVar16 / DAT_1808acc3c;
      local_268[1] = DAT_1808ac0c0;
      if (fVar18 <= DAT_1808ac0c0) {
        local_268[1] = fVar18;
      }
      local_244 = 300.0;
      local_248 = 20.0;
      pfVar14 = &local_248;
      if (fVar24 <= DAT_18092112c) {
        pfVar14 = &DAT_18092112c;
      }
      pfVar11 = &local_244;
      if (DAT_18092112c <= DAT_1808acbb4) {
        pfVar11 = pfVar14;
      }
      fVar24 = *pfVar11;
      fVar18 = DAT_1809f182c;
      fVar27 = DAT_1809f182c - fVar21;
      fVar22 = DAT_1809f1830;
      fVar25 = DAT_1809f1830 - fVar26;
      fVar23 = fVar25 * fVar25 + fVar27 * fVar27;
      if (fVar23 < 0.0) {
        fVar23 = (float)FUN_18051af10(fVar23);
      }
      else {
        fVar23 = SQRT(fVar23);
      }
      fVar20 = fVar24 * DAT_1808ac710;
      if (fVar24 * DAT_1808ac710 <= DAT_1808acc24) {
        fVar20 = DAT_1808acc24;
      }
      if ((fVar20 < fVar23) ||
         (DAT_1808acb90 < (float)((uint)(fVar28 - DAT_1809f1834) & _DAT_1808ade90))) {
        if (DAT_180ca0a20 == 0) {
          fVar26 = 0.0;
        }
        else {
          lVar8 = FUN_1800111b0(&local_158,lVar12 + (ulonglong)DAT_180ca0a20);
          fVar26 = *(float *)(lVar8 + 4);
        }
        fVar18 = (fVar26 * DAT_1808ac680) / DAT_1808acb58 + DAT_1808ac680;
        fVar26 = (float)FUN_180517200(fVar18);
        _DAT_1809f182c = CONCAT44(DAT_1809f1830,fVar26 * fVar24 + fVar21);
        fVar21 = (float)FUN_180517790(fVar18);
        fVar26 = (float)local_260;
        _DAT_1809f182c = CONCAT44(fVar21 * fVar24 + fVar26,DAT_1809f182c);
        DAT_1809f1834 = fVar28;
        uVar6 = FUN_18020b350(&DAT_1809f182c,fVar28,DAT_1809f1820);
        _DAT_1809f1834 = CONCAT44(DAT_1809f1838,uVar6);
        if (DAT_180ca0a20 == 0) {
          fVar21 = 0.0;
        }
        else {
          lVar12 = FUN_1800111b0(&local_158,lVar12 + (ulonglong)DAT_180ca0a20);
          fVar21 = *(float *)(lVar12 + 4);
        }
        _DAT_1809f1834 = CONCAT44(fVar21,DAT_1809f1834);
        DAT_1809f1890 = 0.0;
        cVar1 = '\0';
        _DAT_1809f1894 = 0;
        DAT_1809f1894 = '\0';
        fVar28 = (float)local_250;
        fVar27 = DAT_1809f182c - fVar28;
        fVar25 = DAT_1809f1830 - fVar26;
        fVar18 = DAT_1809f182c;
        fVar22 = DAT_1809f1830;
        fVar23 = fVar24;
      }
      else {
        fVar28 = (float)local_250;
        fVar21 = DAT_1809f1838;
        cVar1 = DAT_1809f1895;
      }
      fVar20 = DAT_1809f1890;
      if (fVar23 <= DAT_1808ac34c) {
        fVar25 = 0.0;
        fVar27 = DAT_1808ac34c;
      }
      else {
        fVar25 = fVar25 / fVar23;
        fVar27 = fVar27 / fVar23;
      }
      fVar19 = fVar24 * DAT_1808ac188;
      if (fVar24 * DAT_1808ac188 <= DAT_1808ac980) {
        fVar19 = DAT_1808ac980;
      }
      cVar2 = DAT_1809f1894;
      if (fVar19 + fVar24 < fVar23) {
        cVar2 = '\x01';
        _DAT_1809f1894 = CONCAT11(DAT_1809f1895,1);
      }
      if (fVar23 < fVar24 * DAT_1808ac2cc) {
        cVar2 = '\0';
        _DAT_1809f1894 = _DAT_1809f1894 & 0xff00;
      }
      fVar19 = fVar24 * DAT_1808ac1f4;
      if (DAT_1808ac934 <= fVar24 * DAT_1808ac1f4) {
        fVar19 = DAT_1808ac934;
      }
      if (fVar19 <= fVar23) {
        if (cVar2 != '\0') {
          local_240[2] = 280.0;
          local_240[0] = 60.0;
          local_240[1] = (fVar23 - fVar24) * DAT_1808ac394 + DAT_1808acaa8;
          _DAT_1809f1894 = _DAT_1809f1894 & 0xff;
          pfVar14 = local_240;
          if (DAT_1808acaa8 <= local_240[1]) {
            pfVar14 = local_240 + 1;
          }
          pfVar11 = local_240 + 2;
          if (local_240[1] <= _DAT_1808acbac) {
            pfVar11 = pfVar14;
          }
          local_268[0] = *pfVar11;
          fVar26 = fVar25 * fVar24 * DAT_1808ac294 + fVar26;
          fVar28 = fVar27 * fVar24 * DAT_1808ac294 + fVar28;
          goto LAB_18020c3e3;
        }
        if (cVar1 != '\0') {
          local_268[0] = DAT_1808aca8c;
          fVar26 = DAT_1809f189c;
          fVar28 = DAT_1809f1898;
          goto LAB_18020c3e3;
        }
        if ((((DAT_180921128 == '\0') || (UVar7 < DAT_1809f1878)) ||
            (UVar7 - _DAT_1809f1870 < 0x1389)) ||
           (DAT_1809f18b0 = DAT_1809f18b0 * 0x19660d + 0x3c6ef35f, 0x45ffffff < DAT_1809f18b0)) {
          local_268[0] = 0.0;
          fVar26 = fVar22;
          fVar28 = fVar18;
          goto LAB_18020c3e3;
        }
        fVar25 = ((float)((DAT_1809f18b0 >> 8) % 0x168) * DAT_1808ac680) / DAT_1808acb58;
        fVar24 = ((float)((DAT_1809f18b0 >> 4) % 0x32) / DAT_1808acb08 + DAT_1808ac154) * fVar24;
        fVar26 = (float)FUN_180517200(fVar25);
        fVar28 = fVar26 * fVar24 + (float)local_250;
        fVar26 = (float)FUN_180517790(fVar25);
        fVar25 = (float)local_260;
        fVar26 = fVar26 * fVar24 + fVar25;
        _DAT_1809f18a0 = local_258[0];
        _DAT_1809f1894 = CONCAT11(1,DAT_1809f1894);
        local_268[0] = DAT_1808aca8c;
        DAT_1809f1898 = fVar28;
        DAT_1809f189c = fVar26;
      }
      else {
        _DAT_1809f1894 = _DAT_1809f1894 & 0xff;
        local_268[0] = DAT_1808acb4c;
        fVar26 = fVar25 * fVar24 * DAT_1808ac294 + fVar26;
        fVar28 = fVar27 * fVar24 * DAT_1808ac294 + fVar28;
LAB_18020c3e3:
        fVar25 = (float)local_260;
      }
      fVar28 = fVar28 - fVar18;
      fVar26 = fVar26 - fVar22;
      fVar24 = fVar26 * fVar26 + fVar28 * fVar28;
      if (fVar24 < 0.0) {
        fVar24 = (float)FUN_18051af10(fVar24);
      }
      else {
        fVar24 = SQRT(fVar24);
      }
      if (DAT_1808ac7ac <= fVar24) {
        fVar24 = fVar24 * DAT_1808ac658 + DAT_1808aca54;
        if (local_268[0] <= fVar24) {
          fVar24 = local_268[0];
        }
        if (fVar24 <= 0.0) goto LAB_18020c443;
        fVar28 = (float)FUN_180516b00(fVar26,fVar28);
        fVar26 = DAT_1808acb58;
        local_268[0] = (float)FUN_180516750((fVar28 * DAT_1808acb58) / DAT_1808ac680 - fVar21,
                                            DAT_1808acbd0);
        fVar28 = local_268[1];
        if (DAT_1809f1890 <= fVar26) {
          fVar21 = DAT_1808acbe0;
        }
        else {
          fVar21 = DAT_1808acbb4;
        }
        fVar18 = local_268[1] * fVar21;
        local_260 = CONCAT44(local_260._4_4_,fVar18);
        local_268[1] = (float)((uint)fVar21 ^ DAT_1808adec0) * local_268[1];
        pfVar14 = local_268 + 1;
        if (local_268[1] <= local_268[0]) {
          pfVar14 = local_268;
        }
        pfVar11 = (float *)&local_260;
        if (local_268[0] <= fVar18) {
          pfVar11 = pfVar14;
        }
        fVar21 = DAT_1809f1838 + *pfVar11;
        _DAT_1809f1834 = CONCAT44(fVar21,DAT_1809f1834);
        fVar18 = DAT_1809f182c;
        fVar22 = DAT_1809f1830;
        if ((float)((uint)local_268[0] & _DAT_1808ade90) <= DAT_1808acb08) {
          if (DAT_1808aca68 < (float)((uint)local_268[0] & _DAT_1808ade90)) {
            fVar24 = fVar24 * DAT_1808ac1f4;
          }
        }
        else {
          fVar27 = DAT_1808ac950;
          if (fVar24 <= DAT_1808ac950) {
            fVar27 = fVar24;
          }
          fVar24 = fVar27;
        }
      }
      else {
        _DAT_1809f1894 = _DAT_1809f1894 & 0xff;
        fVar24 = 0.0;
LAB_18020c443:
        fVar28 = local_268[1];
        fVar26 = DAT_1808acb58;
        DAT_1809f1890 = fVar20;
      }
      local_240[4] = 2.5;
      local_240[3] = 0.3;
      pfVar14 = local_240 + 3;
      if (DAT_1808ac154 <= DAT_180921130) {
        pfVar14 = &DAT_180921130;
      }
      pfVar11 = local_240 + 4;
      if (DAT_180921130 <= DAT_1808ac5e0) {
        pfVar11 = pfVar14;
      }
      fVar27 = *pfVar11;
      if (fVar27 * fVar24 <= DAT_1809f1890) {
        fVar20 = DAT_1808acc04;
      }
      else {
        fVar20 = DAT_1808acbd4;
      }
      fVar19 = DAT_1808ac34c;
      if (DAT_1808ac34c <= fVar27) {
        fVar19 = fVar27;
      }
      local_240[7] = fVar28 * fVar19 * fVar20;
      local_240[5] = (float)((uint)(fVar19 * fVar20) ^ DAT_1808adec0) * fVar28;
      local_240[6] = fVar27 * fVar24 - DAT_1809f1890;
      pfVar14 = local_240 + 5;
      if (local_240[5] <= local_240[6]) {
        pfVar14 = local_240 + 6;
      }
      pfVar11 = local_240 + 7;
      if (local_240[6] <= local_240[7]) {
        pfVar11 = pfVar14;
      }
      fVar24 = DAT_1809f1890 + *pfVar11;
      DAT_1809f1890 = fVar24;
      if (fVar24 <= DAT_1808ac34c) {
LAB_18020c888:
        if (DAT_1809f1890 <= DAT_1808ac8b0) goto LAB_18020c700;
        DAT_1809f1878 = 0;
        iVar3 = (DAT_1808acb4c < DAT_1809f1890) + 2;
        if (DAT_1809f183c == iVar3) {
          _DAT_1809f1870 = UVar7;
          if (DAT_1809f1840 != -1) goto LAB_18020c8ca;
        }
        else {
LAB_18020c8ca:
          _DAT_1809f1870 = UVar7;
          cVar1 = FUN_18020aff0(DAT_1809f1820,iVar3,0xffffffff);
          if (cVar1 != '\0') {
            _DAT_1809f183c = CONCAT44(0xffffffff,iVar3);
          }
        }
      }
      else {
        fVar27 = (fVar21 * DAT_1808ac680) / fVar26;
        fVar21 = (float)FUN_180517200(fVar27);
        fVar18 = fVar21 * fVar24 * fVar28 + fVar18;
        local_158 = fVar18;
        fVar21 = (float)FUN_180517790(fVar27);
        fVar22 = fVar21 * fVar24 * fVar28 + fVar22;
        local_150 = DAT_1809f1834;
        fVar21 = DAT_1809f1834;
        if (DAT_1809f1834 <= local_258[0]) {
          fVar21 = local_258[0];
        }
        local_154 = fVar22;
        fVar24 = (float)FUN_18020b350(&local_158,fVar21,DAT_1809f1820);
        fVar21 = DAT_1809f1838;
        if (fVar24 - DAT_1809f1834 <= DAT_1808ac950) {
          _DAT_1809f182c = CONCAT44(fVar22,fVar18);
          goto LAB_18020c888;
        }
        DAT_1809f1890 = 0.0;
        _DAT_1809f1894 = _DAT_1809f1894 & 0xff;
        fVar18 = DAT_1809f182c;
        fVar22 = DAT_1809f1830;
LAB_18020c700:
        if (UVar7 < DAT_1809f18a8) {
          fVar27 = fVar28 * DAT_1808acb18;
          fVar28 = fVar28 * _DAT_1808ace74;
          local_260 = CONCAT44(local_260._4_4_,fVar28);
          local_268[0] = fVar27;
          fVar24 = (float)FUN_180516b00(fVar25 - fVar22,(float)local_250 - fVar18);
          local_268[1] = (float)FUN_180516750((fVar24 * fVar26) / DAT_1808ac680 - fVar21,
                                              DAT_1808acbd0);
          pfVar14 = (float *)&local_260;
          if (fVar28 <= local_268[1]) {
            pfVar14 = local_268 + 1;
          }
          pfVar11 = local_268;
          if (local_268[1] <= fVar27) {
            pfVar11 = pfVar14;
          }
          _DAT_1809f1834 = CONCAT44(DAT_1809f1838 + *pfVar11,DAT_1809f1834);
        }
        if (DAT_1809f1878 <= UVar7) {
          DAT_1809f18b0 = DAT_1809f18b0 * 0x19660d + 0x3c6ef35f;
          if (DAT_1809f18b0 < 0x60000000) {
            DAT_1809f18a8 = (ulonglong)((DAT_1809f18b0 >> 8) % 0x9c4) + 0x5dc + UVar7;
          }
          if (DAT_180921128 == '\0') {
LAB_18020c989:
            if (((DAT_1809f183c != 0) || (DAT_1809f1840 != -1)) &&
               (cVar1 = FUN_18020aff0(DAT_1809f1820,0,0xffffffff), cVar1 != '\0')) {
              _DAT_1809f183c = 0xffffffff00000000;
            }
            DAT_1809f1878 = (ulonglong)((DAT_1809f18b0 >> 0xc) % 2000) + 2000 + UVar7;
          }
          else if (UVar7 - _DAT_1809f1870 < 0x7531) {
            if ((UVar7 - _DAT_1809f1870 < 0xbb9) || (0x3bffffff < DAT_1809f18b0))
            goto LAB_18020c989;
            iVar3 = *(int *)(&DAT_180619fb8 + ((ulonglong)(DAT_1809f18b0 >> 8) % 6) * 4);
            if (((DAT_1809f183c != 7) || (DAT_1809f1840 != iVar3)) &&
               (cVar1 = FUN_18020aff0(DAT_1809f1820,7,iVar3), cVar1 != '\0')) {
              _DAT_1809f183c = CONCAT44(iVar3,7);
            }
            DAT_1809f1878 = UVar7 + 0xdac;
          }
          else {
            if (((DAT_1809f183c != 10) || (DAT_1809f1840 != -1)) &&
               (cVar1 = FUN_18020aff0(DAT_1809f1820,10,0xffffffff), cVar1 != '\0')) {
              _DAT_1809f183c = 0xffffffff0000000a;
            }
            DAT_1809f1878 = UVar7 + 8000;
          }
        }
      }
      if (((DAT_1809f1820 == 0) || (DAT_180ca09f8 == 0)) ||
         ((lVar12 = FUN_18000f3a0((ulonglong)DAT_180ca09f8 + DAT_1809f1820), lVar12 == 0 ||
          (DAT_180ca0950 == 0)))) {
        fVar26 = 0.0;
        fVar21 = 0.0;
      }
      else {
        pfVar14 = (float *)FUN_1800111b0(&local_158,lVar12 + (ulonglong)DAT_180ca0950);
        fVar29 = *pfVar14;
        fVar26 = pfVar14[1];
        fVar21 = pfVar14[2];
      }
      fVar28 = DAT_1809f1834 - DAT_1808ac980;
      if (DAT_1809f1834 - DAT_1808ac980 <= local_258[0]) {
        fVar28 = local_258[0];
      }
      local_118 = (float)FUN_18020b350(&DAT_1809f182c,fVar28,DAT_1809f1820);
      _DAT_1809f1834 = CONCAT44(DAT_1809f1838,local_118);
      local_120 = DAT_1809f182c;
      local_11c = DAT_1809f1830;
      local_110 = 0;
      local_10c = DAT_1809f1838;
      local_108 = 0;
      cVar1 = FUN_18020afb0(DAT_1809f1820,&local_120,&local_110);
      if (cVar1 != '\0') {
        if (UVar7 - _DAT_1811150c0 < 0x7d1) {
          return;
        }
        local_280 = (double)fVar23;
        local_288 = (double)local_118;
        local_290 = (double)local_11c;
        local_298 = (double)local_120;
        local_270 = DAT_1809f1840;
        local_278 = DAT_1809f183c;
        _DAT_1811150c0 = UVar7;
        FUN_1802097c0("local pet | was at %.1f %.1f %.1f | put %.1f %.1f %.1f | distance to you %.0f | activity %d/%d"
                      ,(double)fVar29,(double)fVar26,(double)fVar21);
        return;
      }
      pcVar17 = "placing failed";
      uVar10 = 0;
      goto LAB_18020cc39;
    }
    pcVar17 = "shoulder only, and you\'re dead";
  }
  uVar10 = 1;
LAB_18020cc39:
  FUN_18020b180(uVar10,pcVar17);
  return;
}



/* ===== 18020cca0 FUN_18020cca0 ===== */

longlong FUN_18020cca0(void)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  undefined4 local_res8 [2];
  longlong local_res10 [3];
  undefined1 local_48 [16];
  undefined4 local_38;
  int local_34;
  int local_30;
  undefined *local_28;
  
  if (DAT_1809210d8 < 0) {
    local_34 = 0;
  }
  else {
    local_34 = DAT_1809210d8;
    if (3 < DAT_1809210d8) {
      local_34 = 3;
    }
  }
  local_38 = 2;
  if (DAT_1809210dc < 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = DAT_1809210dc;
    if (2 < DAT_1809210dc) {
      iVar2 = 2;
    }
  }
  if (local_34 == 0) {
    local_38 = 1;
  }
  else if (local_34 != 1) {
    local_38 = (&DAT_180619ff0)[iVar2];
  }
  local_30 = DAT_1809210e0;
  if (DAT_1809210e0 < 1) {
    local_30 = 1;
  }
  local_28 = &DAT_1809210e5;
  local_res10[0] = FUN_1800e02c0(&local_38);
  if (local_res10[0] != 0) {
    plVar3 = (longlong *)FUN_1801d4cb0(&DAT_180ca0fe0,local_48,local_res10);
    lVar1 = local_res10[0];
    if (*(char *)(*plVar3 + 0x18) == '\0') {
      local_res10[1] = 0xc4c4c4c40001;
      if ((local_res10[0] != 0) && (DAT_180cd011c != '\0')) {
        local_res8[0] = CONCAT22(local_res8[0]._2_2_,0x1249);
        FUN_180066890((ulonglong)DAT_180cfe5d4 + local_res10[0],local_res8);
        FUN_1800239d0((ulonglong)DAT_180cfe5d8 + lVar1,local_res10 + 1);
        local_res8[0] = 0xc4c4;
        FUN_180013280((ulonglong)DAT_180cfe5dc + lVar1,local_res8);
        local_res8[0] = 0xc4c40001;
        FUN_180013280((ulonglong)DAT_180cfe5e0 + lVar1,local_res8);
        local_res8[0] = CONCAT31(local_res8[0]._1_3_,1);
        FUN_1800233d0((ulonglong)DAT_180cfe5e8 + lVar1,local_res8);
        FUN_1802980b0(lVar1,&local_38);
      }
      plVar3 = (longlong *)FUN_1801d4cb0(&DAT_180ca0fe0,local_48,local_res10);
      *(undefined1 *)(*plVar3 + 0x18) = 1;
      FUN_1802097c0("give | view %p | pet id %d | stage %d | seed %d | item id %#llx",local_res10[0]
                    ,local_38,local_34,local_30,0xc4c4c4c40001);
    }
  }
  return local_res10[0];
}



/* ===== 18020ce60 FUN_18020ce60 ===== */

undefined4 * FUN_18020ce60(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (DAT_1809210d8 < 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = DAT_1809210d8;
    if (3 < DAT_1809210d8) {
      iVar1 = 3;
    }
  }
  uVar4 = 2;
  if (DAT_1809210dc < 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = DAT_1809210dc;
    if (2 < DAT_1809210dc) {
      iVar3 = 2;
    }
  }
  param_1[1] = iVar1;
  iVar2 = DAT_1809210e0;
  if (iVar1 == 0) {
    uVar4 = 1;
  }
  else if (iVar1 != 1) {
    uVar4 = (&DAT_180619ff0)[iVar3];
  }
  *param_1 = uVar4;
  if (iVar2 < 1) {
    iVar2 = 1;
  }
  param_1[2] = iVar2;
  if (param_2 != 0) {
    param_1[2] = (uint)(param_2 + iVar2 * -0x61c8864f) % 1000 + 1;
  }
  *(undefined **)(param_1 + 4) = &DAT_1809210e5;
  return param_1;
}



/* ===== 18020cf10 FUN_18020cf10 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18020cf10(int param_1)

{
  int iVar1;
  int iVar2;
  ULONGLONG UVar3;
  undefined8 *local_res10;
  undefined8 in_stack_ffffffffffffff78;
  longlong lVar4;
  undefined4 uVar5;
  undefined8 in_stack_ffffffffffffff80;
  longlong lVar6;
  undefined4 uVar7;
  undefined1 local_38 [8];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined1 local_18;
  
  uVar5 = (undefined4)((ulonglong)in_stack_ffffffffffffff78 >> 0x20);
  uVar7 = (undefined4)((ulonglong)in_stack_ffffffffffffff80 >> 0x20);
  if (DAT_180cc4c44 == '\0') {
    DAT_180cc4c44 = '\x01';
    lVar4 = DAT_180961b00;
    lVar6 = DAT_180961b08;
    FUN_1802097c0("patterns | set_model %p | apply_look %p | pet_item_id %p | find_item_view %p | growth %p | feed %p | lifetime %p | low_food %p | level %p | create_reference %p | register %p | set_attribute %p"
                  ,DAT_180961ed0,DAT_180961b30,DAT_180961af8,DAT_180961b00,DAT_180961b08,
                  DAT_180961b10,DAT_180961b18,DAT_180961b20,DAT_180961b28,DAT_180961ae0,
                  DAT_180961ae8,DAT_180961e90);
    uVar5 = (undefined4)((ulonglong)lVar4 >> 0x20);
    uVar7 = (undefined4)((ulonglong)lVar6 >> 0x20);
  }
  if ((DAT_180ceb688 == '\0') && (DAT_1811089f0 != 0)) {
    DAT_180ceb688 = '\x01';
    iVar1 = FUN_18038eaf0("C_Chicken","m_AttributeManager");
    iVar2 = FUN_18038eaf0("C_AttributeContainer","m_Item");
    if ((iVar1 == 0) || (iVar2 == 0)) {
      DAT_180ceb68c = 0;
    }
    else {
      DAT_180ceb68c = iVar2 + iVar1;
    }
    DAT_180ceb690 = FUN_18038eaf0("C_Chicken","m_owner");
    DAT_180ceb694 = FUN_18038eaf0("C_BasePlayerPawn","m_hController");
    DAT_180ceb698 = FUN_18038eaf0("CSkeletonInstance","m_modelState");
    DAT_180ceb69c = FUN_18038eaf0("CModelState","m_ModelName");
    FUN_1802097c0("offsets | item %#x | owner %#x | controller %#x | model state %#x | model name %#x"
                  ,DAT_180ceb68c,DAT_180ceb690,DAT_180ceb694,CONCAT44(uVar5,DAT_180ceb698),
                  CONCAT44(uVar7,DAT_180ceb69c));
  }
  UVar3 = GetTickCount64();
  FUN_18020ab40();
  if (param_1 == 0xc) {
    FUN_18020b410();
  }
  else if (param_1 == 7) {
    if (DAT_180cd1304 == '\0') {
      FUN_1803a0b60(&local_res10);
      DAT_181108a00 = local_res10;
      DAT_1811089f8 = FUN_1803a0c50(&local_res10);
      DAT_180cd1304 = '\x01';
    }
    if (DAT_1811089f8 == 0) {
      if (DAT_180ceb660 != DAT_180ceb668) {
        DAT_180ceb668 = DAT_180ceb660;
      }
      if (DAT_180ceb6b0 != 0) {
        if (DAT_180ceb6b0 < DAT_180ceb6d8 >> 3) {
          FUN_18020d7b0(&DAT_180ceb6a0,*DAT_180ceb6a8,DAT_180ceb6a8);
        }
        else {
          FUN_18020da80();
          *DAT_180ceb6a8 = DAT_180ceb6a8;
          DAT_180ceb6a8[1] = DAT_180ceb6a8;
          local_res10 = DAT_180ceb6a8;
          DAT_180ceb6b0 = 0;
          FUN_180026ac0(DAT_180ceb6b8,DAT_180ceb6c0,&local_res10);
        }
      }
    }
    else {
      if (499 < UVar3 - _DAT_180ceb658) {
        _DAT_180ceb658 = UVar3;
        FUN_180209990();
      }
      FUN_180209bf0();
    }
  }
  if (999 < UVar3 - _DAT_180ceb650) {
    _DAT_180ceb650 = UVar3;
    if ((((DAT_180961af8 != 0) && (DAT_180961b00 != 0)) && (DAT_180961b08 != 0)) &&
       (((DAT_180961b10 != 0 && (DAT_180961b18 != 0)) &&
        ((DAT_180961b20 != 0 && (DAT_180961b28 != 0)))))) {
      local_38[0] = 0;
      local_30 = 0;
      local_28 = 0;
      local_20 = 0;
      local_18 = 0;
      FUN_1802098f0(local_38);
    }
    iVar1 = FUN_1804e4d70(&DAT_1809f1780);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1804e4a90(5);
    }
    if (DAT_1809f17cc == 0x7fffffff) {
      DAT_1809f17cc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1804e4a90(6);
    }
    FUN_1804e4e90(&DAT_1809f1780);
  }
  return;
}



/* ===== 18020d2e0 FUN_18020d2e0 ===== */

void FUN_18020d2e0(longlong *param_1,uint param_2)

{
  (**(code **)((ulonglong)param_2 + *param_1))();
  return;
}



/* ===== 18020d300 FUN_18020d300 ===== */

longlong * FUN_18020d300(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  lVar2 = DAT_180ceb6b8;
  uVar3 = DAT_180ceb6a8;
  uVar4 = DAT_180ceb6d0 &
          (((((((((ulonglong)*(byte *)(param_3 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                (ulonglong)*(byte *)((longlong)param_3 + 0x11)) * 0x100000001b3 ^
               (ulonglong)*(byte *)((longlong)param_3 + 0x12)) * 0x100000001b3 ^
              (ulonglong)*(byte *)((longlong)param_3 + 0x13)) * 0x100000001b3 ^
             (ulonglong)*(byte *)((longlong)param_3 + 0x14)) * 0x100000001b3 ^
            (ulonglong)*(byte *)((longlong)param_3 + 0x15)) * 0x100000001b3 ^
           (ulonglong)*(byte *)((longlong)param_3 + 0x16)) * 0x100000001b3 ^
          (ulonglong)*(byte *)((longlong)param_3 + 0x17)) * 0x100000001b3;
  plVar1 = *(longlong **)(DAT_180ceb6b8 + uVar4 * 0x10);
  if (*(longlong **)(DAT_180ceb6b8 + 8 + uVar4 * 0x10) == param_3) {
    if (plVar1 == param_3) {
      *(undefined8 *)(DAT_180ceb6b8 + uVar4 * 0x10) = DAT_180ceb6a8;
      *(undefined8 *)(lVar2 + 8 + uVar4 * 0x10) = uVar3;
    }
    else {
      *(longlong *)(DAT_180ceb6b8 + 8 + uVar4 * 0x10) = param_3[1];
    }
  }
  else if (plVar1 == param_3) {
    *(longlong *)(DAT_180ceb6b8 + uVar4 * 0x10) = *param_3;
  }
  lVar2 = *param_3;
  DAT_180ceb6b0 = DAT_180ceb6b0 + -1;
  *(longlong *)param_3[1] = lVar2;
  *(longlong *)(lVar2 + 8) = param_3[1];
  FUN_18000f890(param_3 + 0xb);
  FUN_18000f890(param_3 + 7);
  FUN_18000f890(param_3 + 3);
  thunk_FUN_1803d64e0(param_3,0x90);
  *param_2 = lVar2;
  return param_2;
}



/* ===== 18020d430 FUN_18020d430 ===== */

void FUN_18020d430(undefined8 *param_1)

{
  FUN_18020da80(param_1,*param_1);
  thunk_FUN_1803d64e0(*param_1,0x90);
  return;
}



/* ===== 18020d460 FUN_18020d460 ===== */

undefined8 * FUN_18020d460(undefined8 param_1,undefined8 *param_2,byte *param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  float fVar10;
  
  uVar7 = (((((((((ulonglong)*param_3 ^ 0xcbf29ce484222325) * 0x100000001b3 ^ (ulonglong)param_3[1])
                * 0x100000001b3 ^ (ulonglong)param_3[2]) * 0x100000001b3 ^ (ulonglong)param_3[3]) *
              0x100000001b3 ^ (ulonglong)param_3[4]) * 0x100000001b3 ^ (ulonglong)param_3[5]) *
            0x100000001b3 ^ (ulonglong)param_3[6]) * 0x100000001b3 ^ (ulonglong)param_3[7]) *
          0x100000001b3;
  puVar6 = (undefined8 *)(DAT_180ceb6d0 & uVar7);
  puVar3 = *(undefined8 **)(DAT_180ceb6b8 + 8 + (longlong)puVar6 * 0x10);
  puVar8 = DAT_180ceb6a8;
  if (puVar3 != DAT_180ceb6a8) {
    puVar6 = *(undefined8 **)(DAT_180ceb6b8 + (longlong)puVar6 * 0x10);
    lVar4 = puVar3[2];
    puVar8 = puVar3;
    while( true ) {
      if (*(longlong *)param_3 == lVar4) {
        *param_2 = puVar8;
        *(undefined1 *)(param_2 + 1) = 0;
        return param_2;
      }
      if (puVar8 == puVar6) break;
      puVar8 = (undefined8 *)puVar8[1];
      lVar4 = puVar8[2];
    }
  }
  if (DAT_180ceb6b0 == 0x1c71c71c71c71c7) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4cd0("unordered_map/set too long");
  }
  puVar3 = (undefined8 *)FUN_1804ecaa0(0x90,puVar6,DAT_180ceb6b8,param_4,&DAT_180ceb6a8,0);
  puVar3[2] = *(undefined8 *)param_3;
  *(undefined2 *)((longlong)puVar3 + 0x79) = 0;
  *(undefined1 *)((longlong)puVar3 + 0x7b) = 0;
  *(undefined4 *)((longlong)puVar3 + 0x81) = 0;
  *(undefined2 *)((longlong)puVar3 + 0x85) = 0;
  *(undefined1 *)((longlong)puVar3 + 0x87) = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  puVar3[6] = 0xf;
  *(undefined1 *)(puVar3 + 3) = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  puVar3[9] = 0;
  puVar3[10] = 0xf;
  *(undefined1 *)(puVar3 + 7) = 0;
  puVar3[0xb] = 0;
  puVar3[0xc] = 0;
  puVar3[0xd] = 0;
  puVar3[0xe] = 0xf;
  *(undefined1 *)(puVar3 + 0xb) = 0;
  *(undefined1 *)(puVar3 + 0xf) = 0;
  *(undefined4 *)((longlong)puVar3 + 0x7c) = 0xffffffff;
  *(undefined1 *)(puVar3 + 0x10) = 0;
  puVar3[0x11] = 0;
  uVar2 = DAT_180ceb6d8;
  if (DAT_180ceb6a0 < (float)(DAT_180ceb6b0 + 1) / (float)DAT_180ceb6d8) {
    fVar10 = (float)FUN_18053ef70((float)(DAT_180ceb6b0 + 1) / DAT_180ceb6a0);
    lVar4 = 0;
    if ((DAT_1808acd00 <= fVar10) && (fVar10 = fVar10 - DAT_1808acd00, fVar10 < DAT_1808acd00)) {
      lVar4 = -0x8000000000000000;
    }
    uVar5 = 8;
    if (8 < (ulonglong)((longlong)fVar10 + lVar4)) {
      uVar5 = (longlong)fVar10 + lVar4;
    }
    uVar9 = uVar2;
    if ((uVar2 < uVar5) && ((0x1ff < uVar2 || (uVar9 = uVar2 * 8, uVar2 * 8 < uVar5)))) {
      uVar9 = uVar5;
    }
    FUN_18020db30(uVar5,uVar9);
    puVar6 = *(undefined8 **)(DAT_180ceb6b8 + 8 + (DAT_180ceb6d0 & uVar7) * 0x10);
    puVar8 = DAT_180ceb6a8;
    if (puVar6 != DAT_180ceb6a8) {
      lVar4 = puVar6[2];
      puVar8 = puVar6;
      while (puVar3[2] != lVar4) {
        if (puVar8 == *(undefined8 **)(DAT_180ceb6b8 + (DAT_180ceb6d0 & uVar7) * 0x10))
        goto LAB_18020d72c;
        puVar8 = (undefined8 *)puVar8[1];
        lVar4 = puVar8[2];
      }
      puVar8 = (undefined8 *)*puVar8;
    }
  }
LAB_18020d72c:
  puVar6 = (undefined8 *)puVar8[1];
  DAT_180ceb6b0 = DAT_180ceb6b0 + 1;
  *puVar3 = puVar8;
  puVar3[1] = puVar6;
  *puVar6 = puVar3;
  puVar8[1] = puVar3;
  lVar4 = DAT_180ceb6b8;
  uVar7 = DAT_180ceb6d0 & uVar7;
  puVar1 = *(undefined8 **)(DAT_180ceb6b8 + uVar7 * 0x10);
  if (puVar1 == DAT_180ceb6a8) {
    *(undefined8 **)(DAT_180ceb6b8 + uVar7 * 0x10) = puVar3;
  }
  else {
    if (puVar1 == puVar8) {
      *(undefined8 **)(DAT_180ceb6b8 + uVar7 * 0x10) = puVar3;
      goto LAB_18020d78b;
    }
    if (*(undefined8 **)(DAT_180ceb6b8 + 8 + uVar7 * 0x10) != puVar6) goto LAB_18020d78b;
  }
  *(undefined8 **)(lVar4 + 8 + uVar7 * 0x10) = puVar3;
LAB_18020d78b:
  *param_2 = puVar3;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



/* ===== 18020d7b0 FUN_18020d7b0 ===== */

longlong * FUN_18020d7b0(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  
  if (param_2 == param_3) {
    return param_3;
  }
  lVar1 = *(longlong *)(param_1 + 0x18);
  puVar2 = (undefined8 *)param_2[1];
  puVar3 = *(undefined8 **)(param_1 + 8);
  lVar5 = (*(ulonglong *)(param_1 + 0x30) &
          (((((((((ulonglong)*(byte *)(param_2 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                (ulonglong)*(byte *)((longlong)param_2 + 0x11)) * 0x100000001b3 ^
               (ulonglong)*(byte *)((longlong)param_2 + 0x12)) * 0x100000001b3 ^
              (ulonglong)*(byte *)((longlong)param_2 + 0x13)) * 0x100000001b3 ^
             (ulonglong)*(byte *)((longlong)param_2 + 0x14)) * 0x100000001b3 ^
            (ulonglong)*(byte *)((longlong)param_2 + 0x15)) * 0x100000001b3 ^
           (ulonglong)*(byte *)((longlong)param_2 + 0x16)) * 0x100000001b3 ^
          (ulonglong)*(byte *)((longlong)param_2 + 0x17)) * 0x100000001b3) * 0x10;
  plVar7 = (longlong *)(lVar1 + 8 + lVar5);
  plVar6 = (longlong *)(lVar5 + lVar1);
  plVar4 = *(longlong **)(lVar5 + lVar1);
  plVar9 = (longlong *)*plVar7;
  plVar8 = param_2;
  do {
    plVar10 = (longlong *)*plVar8;
    FUN_18000f890(plVar8 + 0xb);
    FUN_18000f890(plVar8 + 7);
    FUN_18000f890(plVar8 + 3);
    thunk_FUN_1803d64e0(plVar8,0x90);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
    if (plVar8 == plVar9) {
      if (plVar4 == param_2) {
        *plVar6 = (longlong)puVar3;
        puVar11 = puVar3;
      }
      else {
        puVar11 = puVar2;
      }
      *plVar7 = (longlong)puVar11;
      while (plVar10 != param_3) {
        uVar12 = *(ulonglong *)(param_1 + 0x30) &
                 (((((((((ulonglong)*(byte *)(plVar10 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                       (ulonglong)*(byte *)((longlong)plVar10 + 0x11)) * 0x100000001b3 ^
                      (ulonglong)*(byte *)((longlong)plVar10 + 0x12)) * 0x100000001b3 ^
                     (ulonglong)*(byte *)((longlong)plVar10 + 0x13)) * 0x100000001b3 ^
                    (ulonglong)*(byte *)((longlong)plVar10 + 0x14)) * 0x100000001b3 ^
                   (ulonglong)*(byte *)((longlong)plVar10 + 0x15)) * 0x100000001b3 ^
                  (ulonglong)*(byte *)((longlong)plVar10 + 0x16)) * 0x100000001b3 ^
                 (ulonglong)*(byte *)((longlong)plVar10 + 0x17)) * 0x100000001b3;
        plVar4 = *(longlong **)(lVar1 + 8 + uVar12 * 0x10);
        plVar6 = (longlong *)(lVar1 + uVar12 * 0x10);
        plVar9 = plVar10;
        while( true ) {
          plVar10 = (longlong *)*plVar9;
          FUN_18000f890(plVar9 + 0xb);
          FUN_18000f890(plVar9 + 7);
          FUN_18000f890(plVar9 + 3);
          thunk_FUN_1803d64e0(plVar9,0x90);
          *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
          if (plVar9 == plVar4) break;
          plVar9 = plVar10;
          if (plVar10 == param_3) goto LAB_18020da1a;
        }
        *plVar6 = (longlong)puVar3;
        *(undefined8 **)(lVar1 + 8 + uVar12 * 0x10) = puVar3;
      }
      goto LAB_18020da1d;
    }
    plVar8 = plVar10;
  } while (plVar10 != param_3);
  if (plVar4 == param_2) {
LAB_18020da1a:
    *plVar6 = (longlong)plVar10;
  }
LAB_18020da1d:
  *puVar2 = plVar10;
  plVar10[1] = (longlong)puVar2;
  return param_3;
}



/* ===== 18020da80 FUN_18020da80 ===== */

void FUN_18020da80(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  *(undefined8 *)param_2[1] = 0;
  puVar2 = (undefined8 *)*param_2;
  while (puVar2 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar2;
    FUN_18000f890(puVar2 + 0xb);
    FUN_18000f890(puVar2 + 7);
    FUN_18000f890(puVar2 + 3);
    thunk_FUN_1803d64e0(puVar2,0x90);
    puVar2 = puVar1;
  }
  return;
}



/* ===== 18020dae0 FUN_18020dae0 ===== */

void FUN_18020dae0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != 0) {
    FUN_18000f890(lVar1 + 0x58);
    FUN_18000f890(lVar1 + 0x38);
    FUN_18000f890(lVar1 + 0x18);
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    thunk_FUN_1803d64e0(*(longlong *)(param_1 + 8),0x90);
  }
  return;
}



/* ===== 18020db30 FUN_18020db30 ===== */

void FUN_18020db30(undefined8 param_1,ulonglong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  ulonglong uVar9;
  byte bVar10;
  longlong lVar11;
  
  plVar8 = DAT_180ceb6a8;
  for (lVar11 = 0x3f; 0xfffffffffffffffU >> lVar11 == 0; lVar11 = lVar11 + -1) {
  }
  if ((ulonglong)(1L << ((byte)lVar11 & 0x3f)) < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4cd0("invalid hash bucket count");
  }
  uVar9 = param_2 - 1 | 1;
  lVar11 = 0x3f;
  if (uVar9 != 0) {
    for (; uVar9 >> lVar11 == 0; lVar11 = lVar11 + -1) {
    }
  }
  bVar10 = (char)lVar11 + 1;
  lVar11 = 1L << (bVar10 & 0x3f);
  FUN_180029d30(&DAT_180ceb6b8,2L << (bVar10 & 0x3f),DAT_180ceb6a8);
  DAT_180ceb6d0 = lVar11 - 1;
  DAT_180ceb6d8 = lVar11;
  plVar7 = (longlong *)*DAT_180ceb6a8;
  lVar11 = DAT_180ceb6b8;
joined_r0x00018020dbac:
  do {
    while( true ) {
      while( true ) {
        if (plVar7 == plVar8) {
          DAT_180ceb6b8 = lVar11;
          return;
        }
        plVar1 = (longlong *)*plVar7;
        uVar9 = (((((((((ulonglong)*(byte *)(plVar7 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                      (ulonglong)*(byte *)((longlong)plVar7 + 0x11)) * 0x100000001b3 ^
                     (ulonglong)*(byte *)((longlong)plVar7 + 0x12)) * 0x100000001b3 ^
                    (ulonglong)*(byte *)((longlong)plVar7 + 0x13)) * 0x100000001b3 ^
                   (ulonglong)*(byte *)((longlong)plVar7 + 0x14)) * 0x100000001b3 ^
                  (ulonglong)*(byte *)((longlong)plVar7 + 0x15)) * 0x100000001b3 ^
                 (ulonglong)*(byte *)((longlong)plVar7 + 0x16)) * 0x100000001b3 ^
                (ulonglong)*(byte *)((longlong)plVar7 + 0x17)) * 0x100000001b3 & DAT_180ceb6d0;
        plVar2 = *(longlong **)(lVar11 + uVar9 * 0x10);
        DAT_180ceb6b8 = lVar11;
        if (plVar2 != plVar8) break;
        *(longlong **)(lVar11 + uVar9 * 0x10) = plVar7;
        *(longlong **)(lVar11 + 8 + uVar9 * 0x10) = plVar7;
        plVar7 = plVar1;
        lVar11 = DAT_180ceb6b8;
      }
      plVar3 = *(longlong **)(lVar11 + 8 + uVar9 * 0x10);
      if (plVar7[2] != plVar3[2]) break;
      plVar3 = (longlong *)*plVar3;
      if (plVar3 != plVar7) {
        puVar4 = (undefined8 *)plVar7[1];
        *puVar4 = plVar1;
        puVar5 = (undefined8 *)plVar1[1];
        *puVar5 = plVar3;
        puVar6 = (undefined8 *)plVar3[1];
        *puVar6 = plVar7;
        plVar3[1] = (longlong)puVar5;
        plVar1[1] = (longlong)puVar4;
        plVar7[1] = (longlong)puVar6;
      }
      *(longlong **)(lVar11 + 8 + uVar9 * 0x10) = plVar7;
      plVar7 = plVar1;
      lVar11 = DAT_180ceb6b8;
    }
    do {
      if (plVar2 == plVar3) {
        puVar4 = (undefined8 *)plVar7[1];
        *puVar4 = plVar1;
        puVar5 = (undefined8 *)plVar1[1];
        *puVar5 = plVar3;
        puVar6 = (undefined8 *)plVar3[1];
        *puVar6 = plVar7;
        plVar3[1] = (longlong)puVar5;
        plVar1[1] = (longlong)puVar4;
        plVar7[1] = (longlong)puVar6;
        *(longlong **)(lVar11 + uVar9 * 0x10) = plVar7;
        plVar7 = plVar1;
        lVar11 = DAT_180ceb6b8;
        goto joined_r0x00018020dbac;
      }
      plVar3 = (longlong *)plVar3[1];
    } while (plVar7[2] != plVar3[2]);
    lVar11 = *plVar3;
    puVar4 = (undefined8 *)plVar7[1];
    *puVar4 = plVar1;
    plVar2 = (longlong *)plVar1[1];
    *plVar2 = lVar11;
    puVar5 = *(undefined8 **)(lVar11 + 8);
    *puVar5 = plVar7;
    *(longlong **)(lVar11 + 8) = plVar2;
    plVar1[1] = (longlong)puVar4;
    plVar7[1] = (longlong)puVar5;
    plVar7 = plVar1;
    lVar11 = DAT_180ceb6b8;
  } while( true );
}



/* ===== 18020dd30 FUN_18020dd30 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18020dd30(longlong param_1,double param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  float fVar4;
  char cVar5;
  longlong *plVar6;
  longlong lVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float local_res8 [2];
  undefined1 local_f8 [65];
  undefined4 local_b7;
  undefined2 local_b3;
  undefined1 local_b1;
  
  if (*(int *)(param_1 + 0x18) != 2) {
    return;
  }
  if (*(char *)(param_1 + 0x1c) != '\0') {
    return;
  }
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  if (0x3f < *(int *)(param_1 + 0x10) - 1U) {
    return;
  }
  if (DAT_180ca09f8 == 0) {
    return;
  }
  if (DAT_180ca0950 == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x14) == -1) {
    return;
  }
  plVar6 = (longlong *)FUN_1803a0940(local_res8);
  if (*plVar6 != *(longlong *)(param_1 + 8)) {
    return;
  }
  lVar7 = FUN_18000f3a0((ulonglong)DAT_180ca09f8 + *(longlong *)(param_1 + 8));
  if (lVar7 == 0) {
    return;
  }
  cVar5 = FUN_1801d1c60((ulonglong)DAT_180ca0950 + lVar7,0xc);
  if (cVar5 == '\0') {
    return;
  }
  pfVar8 = (float *)FUN_1800111b0(local_f8,(ulonglong)DAT_180ca0950 + lVar7);
  fVar4 = DAT_1808ac1f4;
  fVar12 = *pfVar8;
  fVar9 = pfVar8[1];
  fVar13 = pfVar8[2];
  lVar7 = (longlong)*(int *)(param_1 + 0x10) * 0x38;
  if (((&DAT_180ceb810)[lVar7] == '\0') ||
     (*(longlong *)(&DAT_180ceb7e0 + lVar7) != *(longlong *)(param_1 + 8))) {
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    uVar3 = *(undefined4 *)(param_1 + 0x38);
    uVar1 = *(undefined4 *)(param_1 + 0x3c);
    *(undefined8 *)(&DAT_180ceb7e0 + lVar7) = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(&DAT_180ceb800 + lVar7) = 0;
    *(undefined4 *)(&DAT_180ceb808 + lVar7) = 0;
    *(undefined4 *)(&DAT_180ceb811 + lVar7) = local_b7;
    *(undefined2 *)(&DAT_180ceb815 + lVar7) = local_b3;
    *(undefined8 *)(&DAT_180ceb7f4 + lVar7) = uVar2;
    (&DAT_180ceb817)[lVar7] = local_b1;
    *(float *)(&DAT_180ceb7e8 + lVar7) = fVar12;
    *(float *)(&DAT_180ceb7ec + lVar7) = fVar9;
    *(float *)(&DAT_180ceb7f0 + lVar7) = fVar13;
    *(undefined4 *)(&DAT_180ceb80c + lVar7) = uVar1;
    *(undefined4 *)(&DAT_180ceb7fc + lVar7) = uVar3;
    (&DAT_180ceb810)[lVar7] = 1;
    return;
  }
  if (*(float *)(param_1 + 0x3c) == *(float *)(&DAT_180ceb80c + lVar7)) goto LAB_18020df78;
  fVar14 = *(float *)(param_1 + 0x3c) - *(float *)(&DAT_180ceb80c + lVar7);
  if ((fVar14 <= 0.0) || (DAT_1808ac1f4 <= fVar14)) {
LAB_18020df40:
    fVar16 = 0.0;
    fVar17 = 0.0;
    fVar18 = 0.0;
  }
  else {
    fVar18 = *(float *)(param_1 + 0x30) - *(float *)(&DAT_180ceb7f4 + lVar7);
    fVar17 = *(float *)(param_1 + 0x34) - *(float *)(&DAT_180ceb7f8 + lVar7);
    fVar16 = *(float *)(param_1 + 0x38) - *(float *)(&DAT_180ceb7fc + lVar7);
    fVar10 = fVar17 * fVar17 + fVar18 * fVar18 + fVar16 * fVar16;
    if (fVar10 < 0.0) {
      fVar10 = (float)FUN_18051af10(fVar10);
    }
    else {
      fVar10 = SQRT(fVar10);
    }
    if (DAT_1808acb98 <= fVar10) goto LAB_18020df40;
    fVar16 = fVar16 / fVar14;
    fVar17 = fVar17 / fVar14;
    fVar18 = fVar18 / fVar14;
  }
  *(float *)(&DAT_180ceb800 + lVar7) = fVar18;
  *(float *)(&DAT_180ceb804 + lVar7) = fVar17;
  *(float *)(&DAT_180ceb808 + lVar7) = fVar16;
  *(undefined8 *)(&DAT_180ceb7f4 + lVar7) = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(&DAT_180ceb7fc + lVar7) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(&DAT_180ceb80c + lVar7) = *(undefined4 *)(param_1 + 0x3c);
LAB_18020df78:
  local_res8[0] = *(float *)(&DAT_180ceb7f0 + lVar7);
  fVar14 = *(float *)(&DAT_180ceb7e8 + lVar7);
  fVar10 = *(float *)(&DAT_180ceb7ec + lVar7);
  *(float *)(&DAT_180ceb7e8 + lVar7) = fVar12;
  *(float *)(&DAT_180ceb7ec + lVar7) = fVar9;
  *(float *)(&DAT_180ceb7f0 + lVar7) = fVar13;
  fVar16 = *(float *)(&DAT_180ceb800 + lVar7);
  fVar17 = *(float *)(&DAT_180ceb804 + lVar7);
  fVar18 = fVar17 * fVar17 + fVar16 * fVar16;
  if (fVar18 < 0.0) {
    fVar18 = (float)FUN_18051af10(fVar18);
  }
  else {
    fVar18 = SQRT(fVar18);
  }
  if (((DAT_1808aca54 <= fVar18) && (0.0 < param_2)) && (param_2 <= DAT_1808ac420)) {
    DAT_180ceb6f8 = DAT_180ceb6f8 + 1;
    fVar14 = fVar12 - fVar14;
    fVar10 = fVar9 - fVar10;
    fVar15 = (float)param_2 * fVar18;
    fVar11 = fVar10 * fVar10 + fVar14 * fVar14 + (fVar13 - local_res8[0]) * (fVar13 - local_res8[0])
    ;
    fVar14 = (fVar17 * fVar10 + fVar14 * fVar16) / fVar18;
    if (fVar11 < 0.0) {
      fVar11 = (float)FUN_18051af10(fVar11);
    }
    else {
      fVar11 = SQRT(fVar11);
    }
    fVar12 = (*(float *)(&DAT_180ceb7f8 + lVar7) - fVar9) *
             (*(float *)(&DAT_180ceb7f8 + lVar7) - fVar9) +
             (*(float *)(&DAT_180ceb7f4 + lVar7) - fVar12) *
             (*(float *)(&DAT_180ceb7f4 + lVar7) - fVar12) +
             (*(float *)(&DAT_180ceb7fc + lVar7) - fVar13) *
             (*(float *)(&DAT_180ceb7fc + lVar7) - fVar13);
    if (fVar12 < 0.0) {
      fVar12 = (float)FUN_18051af10(fVar12);
    }
    else {
      fVar12 = SQRT(fVar12);
    }
    fVar13 = fVar12 / (fVar18 * DAT_1808ac00c);
    fVar9 = fVar13;
    if (DAT_180ceb718 <= fVar13) {
      fVar9 = DAT_180ceb718;
    }
    DAT_180ceb710 = DAT_180ceb710 + (double)fVar13;
    fVar10 = fVar13;
    if (fVar13 <= DAT_180ceb71c) {
      fVar10 = DAT_180ceb71c;
    }
    if ((fVar12 < DAT_1808ac000) &&
       (DAT_180ceb708 = DAT_180ceb708 + 1, DAT_180ceb72c < DAT_1808ac34c)) {
      DAT_180ceb728 = *(undefined4 *)(param_1 + 0x10);
      DAT_180ceb740 = "at-network";
      DAT_180ceb72c = DAT_1808ac34c;
      DAT_180ceb730 = fVar11;
      DAT_180ceb734 = fVar15;
      DAT_180ceb738 = fVar18;
      DAT_180ceb73c = fVar13;
    }
    DAT_180ceb718 = fVar9;
    DAT_180ceb71c = fVar10;
    if (fVar15 * _DAT_1808acd38 - DAT_1808ac0c0 <= fVar14) {
      if (fVar15 * DAT_1808ac0e8 <= fVar11) {
        if (fVar15 * DAT_1808ac5e0 + fVar4 < fVar11) {
          DAT_180ceb704 = DAT_180ceb704 + 1;
          fVar12 = fVar11 / (fVar15 + DAT_1808ac000) + DAT_1808ac428;
          if (DAT_180ceb72c < fVar12) {
            DAT_180ceb728 = *(undefined4 *)(param_1 + 0x10);
            DAT_180ceb740 = "jump";
            DAT_180ceb72c = fVar12;
            DAT_180ceb730 = fVar11;
            DAT_180ceb734 = fVar15;
            DAT_180ceb738 = fVar18;
            DAT_180ceb73c = fVar13;
          }
        }
      }
      else {
        DAT_180ceb6fc = DAT_180ceb6fc + 1;
        fVar12 = (fVar15 - fVar11) / (fVar15 + DAT_1808ac000) + DAT_1808ac428;
        if (DAT_180ceb72c < fVar12) {
          DAT_180ceb728 = *(undefined4 *)(param_1 + 0x10);
          DAT_180ceb740 = "stall";
          DAT_180ceb72c = fVar12;
          DAT_180ceb730 = fVar11;
          DAT_180ceb734 = fVar15;
          DAT_180ceb738 = fVar18;
          DAT_180ceb73c = fVar13;
        }
      }
    }
    else {
      DAT_180ceb700 = DAT_180ceb700 + 1;
      fVar12 = DAT_1808ac540 - fVar14 / (fVar15 + DAT_1808ac000);
      if (DAT_180ceb72c < fVar12) {
        DAT_180ceb728 = *(undefined4 *)(param_1 + 0x10);
        DAT_180ceb740 = "backstep";
        DAT_180ceb72c = fVar12;
        DAT_180ceb730 = fVar11;
        DAT_180ceb734 = fVar15;
        DAT_180ceb738 = fVar18;
        DAT_180ceb73c = fVar13;
      }
    }
  }
  return;
}



/* ===== 18020e390 FUN_18020e390 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18020e390(double param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  float fVar5;
  float fVar6;
  char cVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 uVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  float *pfVar15;
  ULONGLONG UVar16;
  char *pcVar17;
  ulonglong uVar18;
  char *pcVar19;
  int iVar20;
  int iVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined8 uVar30;
  double dVar31;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  float fVar44;
  float fVar45;
  float local_res18;
  float local_res20;
  undefined4 uStackX_24;
  undefined1 local_140 [16];
  undefined1 local_130 [61];
  undefined2 local_f3;
  undefined1 local_f1;
  
  uVar10 = DAT_180ceb7c0;
  uVar8 = DAT_180ceb7b0;
  DAT_180ceb780 = DAT_180ceb780 + 1;
  if ((DAT_180cc4c45 == '\0') && (DAT_1811089f0 != 0)) {
    DAT_180cc4c45 = '\x01';
    DAT_180ceb778 = FUN_18038eaf0("CGameSceneNode","m_angAbsRotation");
    DAT_180ceb7b4 = FUN_18038eaf0("C_CSPlayerPawn","m_angEyeAngles");
  }
  if (DAT_180cd1304 == '\0') {
    FUN_1803a0b60(&local_res20);
    DAT_181108a00 = CONCAT44(uStackX_24,local_res20);
    DAT_1811089f8 = FUN_1803a0c50(&local_res20);
    DAT_180cd1304 = '\x01';
  }
  lVar12 = DAT_181108a00;
  lVar11 = DAT_1811089f8;
  uVar9 = DAT_180ceb7b4;
  if (((((DAT_1811089f8 == 0) || (DAT_181108a00 == 0)) || (DAT_180ca09f0 == 0)) ||
      ((iVar13 = FUN_180011200(DAT_1811089f8 + (ulonglong)DAT_180ca09f0), 999 < iVar13 - 1U ||
       (DAT_180ca09f8 == 0)))) ||
     ((uVar18 = (ulonglong)DAT_180ca0950, DAT_180ca0950 == 0 ||
      (lVar14 = FUN_18000f3a0(lVar11 + (ulonglong)DAT_180ca09f8), 0x7ffffffefffe < lVar14 - 0x10000U
      )))) {
    DAT_180ceb774 = 0;
    return;
  }
  pfVar15 = (float *)FUN_1800111b0(local_130,lVar14 + uVar18);
  fVar1 = *pfVar15;
  fVar2 = pfVar15[1];
  fVar3 = pfVar15[2];
  if (DAT_180ca0954 != 0) {
    pfVar15 = (float *)FUN_1800111b0(local_140,lVar14 + (ulonglong)DAT_180ca0954);
  }
  fVar37 = pfVar15[2];
  fVar35 = *pfVar15;
  fVar29 = pfVar15[1];
  if (DAT_180ceb778 == 0) {
    fVar22 = 0.0;
  }
  else {
    fVar22 = (float)FUN_18000f3d0((ulonglong)DAT_180ceb778 + 4 + lVar14,pfVar15);
  }
  if (uVar9 == 0) {
    fVar23 = 0.0;
  }
  else {
    fVar23 = (float)FUN_18000f3d0((ulonglong)uVar9 + 4 + lVar11);
  }
  local_res20 = fVar23;
  if (DAT_180ca09cc == 0) {
    fVar24 = 0.0;
  }
  else {
    fVar24 = (float)FUN_18000f3d0(lVar11 + (ulonglong)DAT_180ca09cc);
  }
  if (DAT_180ca09b8 == 0) {
    iVar13 = 0;
  }
  else {
    iVar13 = FUN_180011200(lVar12 + (ulonglong)DAT_180ca09b8);
  }
  if (DAT_180ca0a1c == 0) {
    fVar45 = 0.0;
    fVar39 = 0.0;
  }
  else {
    pfVar15 = (float *)FUN_1800111b0(local_140,lVar11 + (ulonglong)DAT_180ca0a1c);
    fVar45 = *pfVar15;
    fVar39 = pfVar15[1];
  }
  if ((DAT_180961a38 == 0) || (DAT_180961fb4 == 0)) {
    fVar40 = 0.0;
    uVar41 = 0;
    uVar42 = 0;
    uVar43 = 0;
  }
  else {
    uVar30 = FUN_18000f3d0(DAT_180961a38 + (ulonglong)DAT_180961fb4 + 4);
    fVar40 = (float)uVar30;
    uVar41 = (undefined4)((ulonglong)uVar30 >> 0x20);
    uVar42 = (undefined4)extraout_XMM0_Qb;
    uVar43 = (undefined4)((ulonglong)extraout_XMM0_Qb >> 0x20);
  }
  fVar6 = DAT_1808ace7c;
  fVar5 = DAT_1808acbd0;
  fVar36 = DAT_1808acb58;
  if ((((DAT_180ceb774 == '\0') || (DAT_180ceb748 != lVar11)) || (param_1 <= 0.0)) ||
     (DAT_1808ac420 < param_1)) {
    DAT_180ceb748 = lVar11;
    _DAT_180ceb750 = fVar1;
    _DAT_180ceb754 = fVar2;
    _DAT_180ceb758 = fVar3;
    _DAT_180ceb75c = fVar22;
    _DAT_180ceb760 = fVar23;
    _DAT_180ceb764 = fVar24;
    _DAT_180ceb768 = iVar13;
    DAT_180ceb76c = fVar40;
    DAT_180ceb770 = 0.0;
    DAT_180ceb774 = 1;
    _DAT_180ceb775 = local_f3;
    DAT_180ceb777 = local_f1;
    return;
  }
  if (((uint)fVar40 & 0x7f800000) == 0x7f800000) {
    fVar23 = 0.0;
  }
  else {
    auVar32._4_4_ = uVar41;
    auVar32._0_4_ = fVar40;
    auVar32._8_4_ = uVar42;
    auVar32._12_4_ = uVar43;
    auVar33._4_12_ = auVar32._4_12_;
    auVar33._0_4_ = fVar40 - DAT_180ceb76c;
    fVar23 = (float)FUN_180519fe0(auVar33._0_8_,DAT_1808acbd0);
    if (fVar36 < fVar23) {
      fVar23 = fVar23 - fVar5;
    }
    if (fVar23 < fVar6) {
      fVar23 = fVar23 + fVar5;
    }
  }
  if ((((float)((uint)fVar23 & _DAT_1808ade90) <= DAT_1808ac750) ||
      ((float)((uint)DAT_180ceb770 & _DAT_1808ade90) <= DAT_1808ac750)) ||
     (0.0 <= DAT_180ceb770 * fVar23)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  fVar38 = fVar1 - _DAT_180ceb750;
  fVar44 = fVar2 - _DAT_180ceb754;
  local_res18 = fVar44 * fVar44 + fVar38 * fVar38 +
                (fVar3 - _DAT_180ceb758) * (fVar3 - _DAT_180ceb758);
  if (local_res18 < 0.0) {
    local_res18 = (float)FUN_18051af10();
  }
  else {
    local_res18 = SQRT(local_res18);
  }
  fVar25 = fVar39 * fVar39 + fVar45 * fVar45;
  if (fVar25 < 0.0) {
    fVar25 = (float)FUN_18051af10();
  }
  else {
    fVar25 = SQRT(fVar25);
  }
  fVar34 = (float)param_1 * fVar25;
  dVar31 = (double)FUN_18053dd10(param_1 * DAT_1808ac698);
  iVar20 = (int)dVar31;
  iVar21 = iVar13 - _DAT_180ceb768;
  fVar26 = (fVar24 - _DAT_180ceb764) * DAT_1808acab0;
  fVar27 = (float)FUN_180519fe0(fVar22 - _DAT_180ceb75c,fVar5);
  if (fVar36 < fVar27) {
    fVar27 = fVar27 - fVar5;
  }
  if (fVar27 < fVar6) {
    fVar27 = fVar27 + fVar5;
  }
  fVar28 = (float)FUN_180519fe0(local_res20 - _DAT_180ceb760,fVar5);
  if (fVar36 < fVar28) {
    fVar28 = fVar28 - fVar5;
  }
  if (fVar28 < fVar6) {
    fVar28 = fVar28 + fVar5;
  }
  pcVar19 = (char *)0x0;
  fVar29 = fVar29 - fVar2;
  fVar35 = fVar35 - fVar1;
  fVar37 = fVar37 - fVar3;
  fVar36 = fVar29 * fVar29 + fVar35 * fVar35 + fVar37 * fVar37;
  if (fVar36 < 0.0) {
    fVar36 = (float)FUN_18051af10();
  }
  else {
    fVar36 = SQRT(fVar36);
  }
  cVar7 = DAT_180ca1bdd;
  if (DAT_1808ac064 < fVar36) {
    DAT_180ceb794 = DAT_180ceb794 + 1;
    pcVar19 = "nodeToWorld!=absorigin";
  }
  fVar36 = DAT_1808ac710;
  if (DAT_1808aca54 <= fVar25) {
    DAT_180ceb784 = DAT_180ceb784 + 1;
    if ((fVar38 * fVar45 + fVar44 * fVar39) / fVar25 < fVar34 * _DAT_1808acd38 - DAT_1808ac0c0) {
      DAT_180ceb78c = DAT_180ceb78c + 1;
      pcVar19 = "backstep";
      goto LAB_18020eab7;
    }
    if (local_res18 < fVar34 * DAT_1808ac0e8) {
      DAT_180ceb788 = DAT_180ceb788 + 1;
      pcVar19 = "stall";
      goto LAB_18020eab7;
    }
    fVar36 = fVar34 * DAT_1808ac5e0 + DAT_1808ac1f4;
  }
  if (fVar36 < local_res18) {
    DAT_180ceb790 = DAT_180ceb790 + 1;
    pcVar19 = "jump";
  }
LAB_18020eab7:
  if ((float)((uint)fVar27 & _DAT_1808ade90) <= DAT_1808aca68) {
    pcVar17 = pcVar19;
  }
  else {
    DAT_180ceb798 = DAT_180ceb798 + 1;
    pcVar17 = "yaw-flip";
    if (pcVar19 != (char *)0x0) {
      pcVar17 = pcVar19;
    }
  }
  if ((iVar21 < 0) || (pcVar19 = pcVar17, iVar20 + 2 < iVar21)) {
    DAT_180ceb79c = DAT_180ceb79c + 1;
    pcVar19 = "tickbase-jump";
    if (pcVar17 != (char *)0x0) {
      pcVar19 = pcVar17;
    }
  }
  if ((fVar26 < DAT_1808acd84) || (pcVar17 = pcVar19, (float)(iVar20 + 2) < fVar26)) {
    DAT_180ceb7a0 = DAT_180ceb7a0 + 1;
    pcVar17 = "simtime-jump";
    if (pcVar19 != (char *)0x0) {
      pcVar17 = pcVar19;
    }
  }
  if (bVar4) {
    DAT_180ceb7a4 = DAT_180ceb7a4 + 1;
    pcVar19 = "camera-flip";
    if (pcVar17 != (char *)0x0) {
      pcVar19 = pcVar17;
    }
  }
  else {
    pcVar19 = pcVar17;
  }
  if (pcVar19 != (char *)0x0) {
    if (DAT_180ceb7a8 < 6) {
      DAT_180ceb7a8 = DAT_180ceb7a8 + 1;
      UVar16 = GetTickCount64();
      fVar37 = fVar29 * fVar29 + fVar35 * fVar35 + fVar37 * fVar37;
      dVar31 = (double)local_res20;
      if (fVar37 < 0.0) {
        fVar37 = (float)FUN_18051af10();
      }
      else {
        fVar37 = SQRT(fVar37);
      }
      FUN_1802b2870("wl_perf.log",
                    "[%llu] local JITTER %s | frame %.2f ms | step %.2f expected %.2f speed %.0f | nodeToWorld-abs %.2f | abs yaw %.1f (%+.1f) eye yaw %.1f (%+.1f) camera yaw %.1f (%+.1f) aa turned %d | tickbase %+d simtime %+.2f ticks (frame %d) | packets %d re-predictions %d\n"
                    ,UVar16,pcVar19,param_1 * DAT_1808ac730,(double)local_res18,(double)fVar34,
                    (double)fVar25,(double)fVar37,(double)fVar22,(double)fVar27,dVar31,
                    (double)fVar28,(double)fVar40,(double)fVar23,cVar7 != '\0',iVar21,(double)fVar26
                    ,iVar20,uVar8,uVar10);
    }
    else {
      DAT_180ceb7ac = DAT_180ceb7ac + 1;
    }
  }
  if (((uint)fVar40 & 0x7f800000) == 0x7f800000) {
    fVar40 = DAT_180ceb76c;
  }
  DAT_180ceb777 = local_f1;
  _DAT_180ceb775 = local_f3;
  DAT_180ceb774 = 1;
  DAT_180ceb770 = fVar23;
  DAT_180ceb76c = fVar40;
  _DAT_180ceb768 = iVar13;
  _DAT_180ceb764 = fVar24;
  _DAT_180ceb760 = local_res20;
  _DAT_180ceb75c = fVar22;
  _DAT_180ceb758 = fVar3;
  _DAT_180ceb754 = fVar2;
  _DAT_180ceb750 = fVar1;
  DAT_180ceb748 = lVar11;
  return;
}



/* ===== 18020eeb0 FUN_18020eeb0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18020eeb0(void)

{
  double dVar1;
  longlong lVar2;
  BOOL BVar3;
  ULONGLONG UVar4;
  longlong lVar5;
  int iVar6;
  char *pcVar7;
  float fVar8;
  float fVar9;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res10;
  
  local_res10.QuadPart = 0;
  QueryPerformanceCounter(&local_res10);
  if (DAT_180cec618 == 0) {
    local_res8.QuadPart = 0;
    BVar3 = QueryPerformanceFrequency(&local_res8);
    if (BVar3 == 0) {
      return;
    }
    if (local_res8.QuadPart == 0) {
      return;
    }
    DAT_180cec618 = local_res8.QuadPart;
    DAT_180ceb710 = 0.0;
    DAT_180ceb720 = 0.0;
    _DAT_180ceb718 = 0x4e6e6b28;
    _DAT_180ceb728 = 0xffffffff;
    _DAT_180ceb6e0 = 0;
    _DAT_180ceb6e8 = 0;
    _DAT_180ceb6f0 = 0;
    _DAT_180ceb6f8 = 0;
    _DAT_180ceb700 = 0;
    _DAT_180ceb708 = 0;
    _DAT_180ceb730 = 0;
    _DAT_180ceb738 = 0;
    DAT_180ceb740 = &DAT_1806eb0d8;
    _DAT_180ceb7b8 = GetTickCount64();
    _DAT_180ceb7d0 = _DAT_180ceb7b8;
  }
  dVar1 = 0.0;
  if (DAT_180ceb7c8 != (_struct_19)0x0) {
    dVar1 = (double)(ulonglong)(local_res10.QuadPart - (longlong)DAT_180ceb7c8) /
            (double)DAT_180cec618;
  }
  DAT_180ceb6e4 = DAT_180ceb6e4 + DAT_180ceb7b0;
  DAT_180ceb6e0 = DAT_180ceb6e0 + 1;
  if (dVar1 <= DAT_180ceb720) {
    dVar1 = DAT_180ceb720;
  }
  DAT_180ceb7c8 = local_res10.s;
  iVar6 = DAT_180ceb6e8;
  if (DAT_180ceb6e8 < DAT_180ceb7b0) {
    iVar6 = DAT_180ceb7b0;
  }
  _DAT_180ceb6e8 = CONCAT44(DAT_180ceb6ec,iVar6);
  if (DAT_180ceb7b0 == 0) {
    DAT_180ceb6ec = DAT_180ceb6ec + 1;
    _DAT_180ceb6e8 = CONCAT44(DAT_180ceb6ec,iVar6);
  }
  else if (1 < DAT_180ceb7b0) {
    DAT_180ceb6f0 = DAT_180ceb6f0 + 1;
  }
  DAT_180ceb720 = dVar1;
  FUN_18020e390();
  lVar2 = DAT_181112370;
  DAT_180ceb7b0 = 0;
  DAT_180ceb7c0 = 0;
  for (lVar5 = DAT_181112368; lVar5 != lVar2; lVar5 = lVar5 + 0xfd0) {
    FUN_18020dd30(lVar5);
  }
  UVar4 = GetTickCount64();
  if (UVar4 - _DAT_180ceb7b8 < 1000) {
    return;
  }
  iVar6 = DAT_180ceb708 + DAT_180ceb704 + DAT_180ceb700 + DAT_180ceb6fc;
  if (iVar6 == 0) {
    if (UVar4 - _DAT_180ceb7d0 < 30000) goto LAB_18020f268;
LAB_18020f0db:
    _DAT_180ceb7d0 = UVar4;
  }
  else if (29999 < UVar4 - _DAT_180ceb7d0) goto LAB_18020f0db;
  if (DAT_180ceb6f8 == 0) {
    fVar9 = 0.0;
  }
  else {
    fVar9 = (float)(DAT_180ceb710 / (double)DAT_180ceb6f8);
  }
  fVar8 = 0.0;
  if (DAT_180ceb6f8 != 0) {
    fVar8 = DAT_180ceb718;
  }
  pcVar7 = "";
  if (iVar6 != 0) {
    pcVar7 = "JITTER ";
  }
  FUN_1802b2870("wl_perf.log",
                "[%llu] models %s| frames %d max %.1f ms | packets %d, max %d/frame, frames without %d, with 2+ %d | re-predictions %d | moving samples %d: stalls %d backsteps %d jumps %d at network origin %d | behind network %.2f/%.2f/%.2f ticks (min/avg/max) | worst #%d %s step %.2f expected %.2f speed %.0f behind %.2f ticks\n"
                ,UVar4,pcVar7,DAT_180ceb6e0,DAT_180ceb720 * DAT_1808ac730,DAT_180ceb6e4,
                DAT_180ceb6e8,DAT_180ceb6ec,DAT_180ceb6f0,DAT_180ceb6f4,DAT_180ceb6f8,DAT_180ceb6fc,
                DAT_180ceb700,DAT_180ceb704,DAT_180ceb708,(double)fVar8,(double)fVar9,
                (double)DAT_180ceb71c,DAT_180ceb728,DAT_180ceb740,(double)DAT_180ceb730,
                (double)DAT_180ceb734,(double)DAT_180ceb738,(double)DAT_180ceb73c);
LAB_18020f268:
  if (DAT_180ceb7a4 + DAT_180ceb7a0 + DAT_180ceb79c + DAT_180ceb798 + DAT_180ceb794 + DAT_180ceb790
      + DAT_180ceb78c + DAT_180ceb788 != 0) {
    FUN_1802b2870("wl_perf.log",
                  "[%llu] local JITTER summary | frames %d moving %d | stalls %d backsteps %d jumps %d | nodeToWorld != absorigin %d | yaw flips %d | tickbase jumps %d | simtime jumps %d | camera yaw back-and-forth %d | detail lines dropped %d\n"
                  ,UVar4,_DAT_180ceb780 & 0xffffffff,DAT_180ceb784,_DAT_180ceb788 & 0xffffffff,
                  DAT_180ceb78c,DAT_180ceb790,DAT_180ceb794,DAT_180ceb798,DAT_180ceb79c,
                  DAT_180ceb7a0,DAT_180ceb7a4,DAT_180ceb7ac);
  }
  DAT_180ceb740 = &DAT_1806eb0d8;
  _DAT_180ceb7b8 = UVar4;
  _DAT_180ceb7a8 = 0;
  _DAT_180ceb7a0 = 0;
  _DAT_180ceb798 = 0;
  _DAT_180ceb790 = 0;
  _DAT_180ceb788 = 0;
  _DAT_180ceb780 = 0;
  _DAT_180ceb738 = 0;
  _DAT_180ceb730 = 0;
  _DAT_180ceb728 = 0xffffffff;
  DAT_180ceb720 = 0.0;
  _DAT_180ceb718 = 0x4e6e6b28;
  DAT_180ceb710 = 0.0;
  _DAT_180ceb708 = 0;
  _DAT_180ceb700 = 0;
  _DAT_180ceb6f8 = 0;
  _DAT_180ceb6f0 = 0;
  _DAT_180ceb6e8 = 0;
  _DAT_180ceb6e0 = 0;
  return;
}



/* ===== 18020f3a0 FUN_18020f3a0 ===== */

byte FUN_18020f3a0(undefined8 *param_1,uint *param_2)

{
  ulonglong uVar1;
  longlong *plVar2;
  longlong *plVar3;
  HRESULT HVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  byte extraout_var;
  byte bVar8;
  longlong lVar9;
  uint uVar10;
  longlong *plVar11;
  ulonglong uVar12;
  double dVar13;
  double dVar14;
  uint local_res18 [2];
  uint local_res20 [2];
  longlong **pplVar15;
  undefined4 uVar16;
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  
  local_48 = (longlong *)0x0;
  local_50 = (longlong *)0x0;
  local_40 = (longlong *)0x0;
  local_68 = (longlong *)0x0;
  local_58 = (longlong *)0x0;
  local_60 = (longlong *)0x0;
  local_res18[0] = 0;
  local_res20[0] = 0;
  HVar4 = CoCreateInstance((IID *)&DAT_180571d70,(LPUNKNOWN)0x0,1,(IID *)&DAT_1806f1fd0,&local_48);
  plVar2 = local_48;
  plVar11 = local_50;
  if (-1 < HVar4) {
    lVar9 = *local_48;
    if (local_50 != (longlong *)0x0) {
      local_50 = (longlong *)0x0;
      (**(code **)(*plVar11 + 0x10))();
    }
    iVar5 = (**(code **)(lVar9 + 0x70))(plVar2,&local_50);
    if (-1 < iVar5) {
      iVar5 = (**(code **)(*local_50 + 0x80))
                        (local_50,*param_1,*(int *)(param_1 + 1) - (int)*param_1);
      plVar2 = local_40;
      plVar11 = local_48;
      if (-1 < iVar5) {
        lVar9 = *local_48;
        if (local_40 != (longlong *)0x0) {
          local_40 = (longlong *)0x0;
          (**(code **)(*plVar2 + 0x10))();
        }
        pplVar15 = &local_40;
        iVar5 = (**(code **)(lVar9 + 0x20))(plVar11,local_50,0,0,pplVar15);
        plVar2 = local_40;
        plVar11 = local_68;
        uVar16 = (undefined4)((ulonglong)pplVar15 >> 0x20);
        if (-1 < iVar5) {
          lVar9 = *local_40;
          if (local_68 != (longlong *)0x0) {
            local_68 = (longlong *)0x0;
            (**(code **)(*plVar11 + 0x10))();
          }
          iVar5 = (**(code **)(lVar9 + 0x68))(plVar2,0,&local_68);
          if (-1 < iVar5) {
            iVar5 = (**(code **)(*local_68 + 0x18))(local_68,local_res18,local_res20);
            plVar2 = local_48;
            plVar11 = local_58;
            if ((-1 < iVar5) && (local_res18[0] != 0)) {
              if (local_res20[0] != 0) {
                uVar10 = local_res18[0];
                if (local_res20[0] < local_res18[0]) {
                  uVar10 = local_res20[0];
                }
                dVar14 = DAT_1808ac6c8 / (double)uVar10;
                dVar13 = DAT_1808ac500;
                if (dVar14 <= DAT_1808ac500) {
                  dVar13 = dVar14;
                }
                uVar6 = (uint)(longlong)(dVar13 * (double)local_res18[0] + DAT_1808ac4a8);
                uVar10 = 1;
                if (1 < uVar6) {
                  uVar10 = uVar6;
                }
                uVar7 = (uint)(longlong)(dVar13 * (double)local_res20[0] + DAT_1808ac4a8);
                uVar6 = 1;
                if (1 < uVar7) {
                  uVar6 = uVar7;
                }
                if (DAT_1808ac500 <= dVar14) {
                  plVar11 = local_68;
LAB_18020f5c9:
                  plVar3 = local_48;
                  plVar2 = local_60;
                  lVar9 = *local_48;
                  if (local_60 != (longlong *)0x0) {
                    local_60 = (longlong *)0x0;
                    (**(code **)(*plVar2 + 0x10))();
                  }
                  iVar5 = (**(code **)(lVar9 + 0x50))(plVar3,&local_60);
                  if (-1 < iVar5) {
                    iVar5 = (**(code **)(*local_60 + 0x40))(local_60,plVar11,&DAT_180571d80,0,0,0,0)
                    ;
                    if (-1 < iVar5) {
                      *param_2 = uVar10;
                      param_2[1] = uVar6;
                      uVar1 = (ulonglong)uVar6 * (ulonglong)uVar10 * 4;
                      lVar9 = *(longlong *)(param_2 + 2);
                      if ((ulonglong)(*(longlong *)(param_2 + 6) - lVar9) < uVar1) {
                        FUN_1800950c0(param_2 + 2,uVar1);
                        lVar9 = *(longlong *)(param_2 + 2);
LAB_18020f660:
                        FUN_180540170(lVar9,0,uVar1);
                        lVar9 = uVar1 + lVar9;
                      }
                      else {
                        uVar12 = *(longlong *)(param_2 + 4) - lVar9;
                        if (uVar1 <= uVar12) goto LAB_18020f660;
                        FUN_180540170(lVar9,0,uVar12);
                        lVar9 = *(longlong *)(param_2 + 4);
                        FUN_180540170(lVar9,0,uVar1 - uVar12);
                        lVar9 = lVar9 + (uVar1 - uVar12);
                      }
                      *(longlong *)(param_2 + 4) = lVar9;
                      (**(code **)(*local_60 + 0x38))
                                (local_60,0,uVar10 * 4,
                                 (int)lVar9 - (int)*(undefined8 *)(param_2 + 2),
                                 *(undefined8 *)(param_2 + 2));
                      bVar8 = extraout_var >> 7 ^ 1;
                      goto LAB_18020f6d4;
                    }
                  }
                }
                else {
                  lVar9 = *local_48;
                  if (local_58 != (longlong *)0x0) {
                    local_58 = (longlong *)0x0;
                    (**(code **)(*plVar11 + 0x10))();
                  }
                  iVar5 = (**(code **)(lVar9 + 0x58))(plVar2,&local_58);
                  if (-1 < iVar5) {
                    iVar5 = (**(code **)(*local_58 + 0x40))
                                      (local_58,local_68,uVar10,uVar6,CONCAT44(uVar16,4));
                    if (-1 < iVar5) {
                      plVar11 = local_58;
                      goto LAB_18020f5c9;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  bVar8 = 0;
LAB_18020f6d4:
  plVar11 = local_60;
  if (local_60 != (longlong *)0x0) {
    local_60 = (longlong *)0x0;
    (**(code **)(*plVar11 + 0x10))();
  }
  plVar11 = local_58;
  if (local_58 != (longlong *)0x0) {
    local_58 = (longlong *)0x0;
    (**(code **)(*plVar11 + 0x10))();
  }
  plVar11 = local_68;
  if (local_68 != (longlong *)0x0) {
    local_68 = (longlong *)0x0;
    (**(code **)(*plVar11 + 0x10))();
  }
  plVar11 = local_40;
  if (local_40 != (longlong *)0x0) {
    local_40 = (longlong *)0x0;
    (**(code **)(*plVar11 + 0x10))();
  }
  plVar11 = local_50;
  if (local_50 != (longlong *)0x0) {
    local_50 = (longlong *)0x0;
    (**(code **)(*plVar11 + 0x10))();
  }
  plVar11 = local_48;
  if (local_48 != (longlong *)0x0) {
    local_48 = (longlong *)0x0;
    (**(code **)(*plVar11 + 0x10))();
  }
  return bVar8;
}



/* ===== 18020f770 FUN_18020f770 ===== */

void FUN_18020f770(longlong param_1)

{
  FUN_18000f890(param_1 + 0x48);
  FUN_18000f890(param_1 + 0x28);
  FUN_18000f890(param_1 + 8);
  return;
}



/* ===== 18020f7b0 FUN_18020f7b0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_18020f7b0(void)

{
  longlong lVar1;
  code *pcVar2;
  longlong *plVar3;
  undefined4 uVar4;
  int iVar5;
  ulonglong uVar6;
  ULONGLONG UVar7;
  ULONGLONG UVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_138 [32];
  longlong *local_118;
  int local_110 [2];
  longlong *local_108;
  longlong *local_100;
  undefined8 local_f8 [2];
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined2 local_5c;
  ulonglong local_58;
  
  local_58 = DAT_180919500 ^ (ulonglong)auStack_138;
  if (DAT_1809f1a10 != (longlong *)0x0) {
    return CONCAT71((int7)(local_58 >> 8),1);
  }
  uVar6 = GetTickCount64();
  pcVar2 = DAT_180cec660;
  if (uVar6 < DAT_1809f1a18) {
LAB_18020fad1:
    return uVar6 & 0xffffffffffffff00;
  }
  DAT_1809f1a18 = uVar6 + 3000;
  local_e8 = 0x690057;
  local_e4 = 0x64006e;
  local_e0 = 0x77006f;
  local_dc = 0x2e0073;
  local_d8 = 0x65004d;
  local_d4 = 0x690064;
  local_d0 = 0x2e0061;
  local_cc = 0x6f0043;
  local_c8 = 0x74006e;
  local_c4 = 0x6f0072;
  local_c0 = 0x2e006c;
  local_bc = 0x6c0047;
  local_b8 = 0x62006f;
  local_b4 = 0x6c0061;
  local_b0 = 0x790053;
  local_ac = 0x740073;
  local_a8 = 0x6d0065;
  local_a4 = 0x65004d;
  local_a0 = 0x690064;
  local_9c = 0x540061;
  local_98 = 0x610072;
  local_94 = 0x73006e;
  local_90 = 0x6f0070;
  local_8c = 0x740072;
  local_88 = 0x6f0043;
  local_84 = 0x74006e;
  local_80 = 0x6f0072;
  local_7c = 0x73006c;
  local_78 = 0x650053;
  local_74 = 0x730073;
  local_70 = 0x6f0069;
  local_6c = 0x4d006e;
  local_68 = 0x6e0061;
  local_64 = 0x670061;
  local_60 = 0x720065;
  local_5c = 0;
  local_f8[0] = 0;
  uVar4 = FUN_180512c70(&local_e8);
  uVar6 = (*pcVar2)(&local_e8,uVar4,local_f8);
  if ((int)uVar6 < 0) goto LAB_18020fad1;
  local_100 = (longlong *)0x0;
  iVar5 = (*DAT_180cec678)(local_f8[0],&DAT_18070a208,&local_100);
  (*DAT_180cec668)(local_f8[0]);
  if ((iVar5 < 0) || (local_100 == (longlong *)0x0)) {
    uVar6 = 0;
    plVar9 = local_100;
    goto LAB_18020fabb;
  }
  local_108 = (longlong *)0x0;
  iVar5 = (**(code **)(*local_100 + 0x30))(local_100,&local_108);
  if ((iVar5 < 0) || (local_108 == (longlong *)0x0)) {
LAB_18020fa9a:
    uVar6 = 0;
  }
  else {
    local_118 = (longlong *)0x0;
    iVar5 = (**(code **)*local_108)(local_108,&DAT_18070a218,&local_118);
    if (iVar5 < 0) {
LAB_18020fa84:
      plVar9 = local_118;
      if (local_118 != (longlong *)0x0) {
        local_118 = (longlong *)0x0;
        (**(code **)(*plVar9 + 0x10))();
      }
      goto LAB_18020fa9a;
    }
    UVar7 = GetTickCount64();
    local_110[0] = 0;
    iVar5 = (**(code **)(*local_118 + 0x38))(local_118,local_110);
    plVar9 = local_118;
    while ((local_118 = plVar9, -1 < iVar5 && (local_110[0] == 0))) {
      UVar8 = GetTickCount64();
      if (UVar7 + 3000 < UVar8) {
        (**(code **)(*local_118 + 0x48))();
        goto LAB_18020fa84;
      }
      Sleep(5);
      iVar5 = (**(code **)(*local_118 + 0x38))(local_118,local_110);
      plVar9 = local_118;
    }
    bVar10 = local_110[0] != 1;
    if (plVar9 != (longlong *)0x0) {
      local_118 = (longlong *)0x0;
      (**(code **)(*plVar9 + 0x10))();
    }
    plVar3 = local_108;
    plVar9 = DAT_1809f1a10;
    if (bVar10) goto LAB_18020fa9a;
    lVar1 = *local_108;
    if (DAT_1809f1a10 != (longlong *)0x0) {
      DAT_1809f1a10 = (longlong *)0x0;
      (**(code **)(*plVar9 + 0x10))();
    }
    iVar5 = (**(code **)(lVar1 + 0x40))(plVar3,&DAT_1809f1a10);
    if ((iVar5 < 0) || (DAT_1809f1a10 == (longlong *)0x0)) goto LAB_18020fa9a;
    uVar6 = 1;
  }
  plVar9 = local_108;
  if (local_108 != (longlong *)0x0) {
    local_108 = (longlong *)0x0;
    (**(code **)(*plVar9 + 0x10))();
  }
  plVar9 = local_100;
LAB_18020fabb:
  if (plVar9 != (longlong *)0x0) {
    local_100 = (longlong *)0x0;
    (**(code **)(*plVar9 + 0x10))();
  }
  return uVar6;
}



/* ===== 18020fb00 FUN_18020fb00 ===== */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_18020fb00(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  ULONGLONG UVar4;
  ULONGLONG UVar5;
  ulonglong uVar6;
  bool bVar7;
  undefined1 auStack_4088 [32];
  int local_4068 [2];
  longlong *local_4060;
  longlong *local_4058;
  longlong *local_4050;
  longlong *local_4048;
  longlong local_4040;
  longlong lStack_4038;
  undefined8 local_4030;
  undefined1 local_4028 [16384];
  ulonglong local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x18020fb1a;
  local_28 = DAT_180919500 ^ (ulonglong)auStack_4088;
  if ((param_1 == (longlong *)0x0) || (DAT_180cec680 == (code *)0x0)) {
    return local_28 & 0xffffffffffffff00;
  }
  local_4050 = (longlong *)0x0;
  iVar3 = (**(code **)(*param_1 + 0x30))(param_1,&local_4050);
  if ((-1 < iVar3) && (local_4050 != (longlong *)0x0)) {
    local_4060 = (longlong *)0x0;
    iVar3 = (**(code **)*local_4050)(local_4050,&DAT_18070a218,&local_4060);
    if (iVar3 < 0) {
LAB_18020fcf2:
      plVar1 = local_4060;
      if (local_4060 != (longlong *)0x0) {
        local_4060 = (longlong *)0x0;
        (**(code **)(*plVar1 + 0x10))();
      }
    }
    else {
      UVar4 = GetTickCount64();
      local_4068[0] = 0;
      iVar3 = (**(code **)(*local_4060 + 0x38))(local_4060,local_4068);
      plVar1 = local_4060;
      while ((local_4060 = plVar1, -1 < iVar3 && (local_4068[0] == 0))) {
        UVar5 = GetTickCount64();
        if (UVar4 + 3000 < UVar5) {
          (**(code **)(*local_4060 + 0x48))();
          goto LAB_18020fcf2;
        }
        Sleep(5);
        iVar3 = (**(code **)(*local_4060 + 0x38))(local_4060,local_4068);
        plVar1 = local_4060;
      }
      bVar7 = local_4068[0] == 1;
      if (plVar1 != (longlong *)0x0) {
        local_4060 = (longlong *)0x0;
        (**(code **)(*plVar1 + 0x10))();
      }
      if (bVar7) {
        local_4048 = (longlong *)0x0;
        iVar3 = (**(code **)(*local_4050 + 0x40))(local_4050,&local_4048);
        if ((iVar3 < 0) || (local_4048 == (longlong *)0x0)) {
          uVar6 = 0;
        }
        else {
          local_4058 = (longlong *)0x0;
          iVar3 = (*DAT_180cec680)(local_4048,&DAT_18070a228,&local_4058);
          if ((iVar3 < 0) || (local_4058 == (longlong *)0x0)) {
            uVar6 = 0;
          }
          else {
            local_4040 = 0;
            lStack_4038 = 0;
            local_4030 = 0;
            do {
              local_4068[0] = 0;
              iVar3 = (**(code **)(*local_4058 + 0x18))(local_4058,local_4028,0x4000,local_4068);
              if (local_4068[0] != 0) {
                FUN_180211af0(&local_4040,lStack_4038,local_4028,local_4068[0]);
              }
            } while (((-1 < iVar3) && (local_4068[0] != 0)) &&
                    ((ulonglong)(lStack_4038 - local_4040) < 0x1000001));
            if ((local_4040 == lStack_4038) ||
               (cVar2 = FUN_18020f3a0(&local_4040,param_2), cVar2 == '\0')) {
              uVar6 = 0;
            }
            else {
              uVar6 = 1;
            }
            FUN_180081c30(&local_4040);
          }
          plVar1 = local_4058;
          if (local_4058 != (longlong *)0x0) {
            local_4058 = (longlong *)0x0;
            (**(code **)(*plVar1 + 0x10))();
          }
        }
        plVar1 = local_4048;
        if (local_4048 != (longlong *)0x0) {
          local_4048 = (longlong *)0x0;
          (**(code **)(*plVar1 + 0x10))();
        }
        goto LAB_18020fd0a;
      }
    }
  }
  uVar6 = 0;
LAB_18020fd0a:
  plVar1 = local_4050;
  if (local_4050 != (longlong *)0x0) {
    local_4050 = (longlong *)0x0;
    (**(code **)(*plVar1 + 0x10))();
  }
  return uVar6;
}



/* ===== 18020fdb0 FUN_18020fdb0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18020fdb0(longlong *param_1)

{
  code *pcVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  ULONGLONG UVar6;
  ULONGLONG UVar7;
  LPCWSTR pWVar8;
  undefined8 *puVar9;
  LPSTR pCVar10;
  undefined8 ****ppppuVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  ULONGLONG unaff_RDI;
  longlong *plVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  bool bVar20;
  longlong *plVar21;
  ulonglong uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined8 uStackY_230;
  undefined1 auStackY_228 [8];
  undefined1 auStackY_220 [24];
  uint local_1e8 [2];
  longlong *local_1e0;
  undefined1 local_1d8;
  longlong local_1d0;
  longlong *local_1c8;
  longlong local_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  longlong *local_1a8;
  ulonglong uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  longlong *local_188;
  ulonglong uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  longlong *local_168;
  ulonglong uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  longlong *local_148;
  ulonglong uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  longlong *local_128;
  ulonglong uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  longlong *local_108;
  ulonglong uStack_100;
  undefined8 ****local_f8 [2];
  size_t local_e8;
  ulonglong local_e0;
  undefined1 local_d8 [32];
  undefined1 local_b8 [32];
  undefined1 local_98 [32];
  ulonglong local_78;
  
  local_78 = DAT_180919500 ^ (ulonglong)auStackY_228;
  local_1c0 = 0;
  iVar4 = (**(code **)(*param_1 + 0x38))(param_1,&local_1c0);
  puVar15 = auStackY_228;
  if ((iVar4 < 0) || (puVar15 = auStackY_228, (longlong *)local_1c0 == (longlong *)0x0))
  goto LAB_1802109f2;
  local_1e0 = (longlong *)0x0;
  iVar4 = (*(code *)**(undefined8 **)local_1c0)(local_1c0,&DAT_18070a218,&local_1e0);
  if (iVar4 < 0) {
LAB_18020fe28:
    plVar17 = local_1e0;
    puVar15 = auStackY_228;
    if (local_1e0 == (longlong *)0x0) goto LAB_1802109f2;
    local_1e0 = (longlong *)0x0;
    puVar15 = auStackY_228;
  }
  else {
    UVar6 = GetTickCount64();
    local_1e8[0] = 0;
    iVar4 = (**(code **)(*local_1e0 + 0x38))(local_1e0,local_1e8);
    puVar15 = auStackY_228;
    puVar14 = auStackY_228;
    puVar16 = auStackY_228;
    plVar17 = local_1e0;
    while ((local_1e0 = plVar17, -1 < iVar4 && (local_1e8[0] == 0))) {
      UVar7 = GetTickCount64();
      if (UVar6 + 2000 < UVar7) {
        (**(code **)(*local_1e0 + 0x48))();
        goto LAB_18020fe28;
      }
      Sleep(5);
      iVar4 = (**(code **)(*local_1e0 + 0x38))(local_1e0,local_1e8);
      plVar17 = local_1e0;
    }
    bVar20 = local_1e8[0] != 1;
    if (plVar17 != (longlong *)0x0) {
      local_1e0 = (longlong *)0x0;
      (**(code **)(*plVar17 + 0x10))();
    }
    if (bVar20) goto LAB_1802109f2;
    local_1c8 = (longlong *)0x0;
    iVar4 = (**(code **)(*(longlong *)local_1c0 + 0x40))(local_1c0,&local_1c8);
    puVar15 = auStackY_228;
    if (iVar4 < 0) {
LAB_1802109dc:
      plVar17 = *(longlong **)(puVar15 + 0x60);
    }
    else {
      plVar17 = (longlong *)0x0;
      puVar15 = auStackY_228;
      if (local_1c8 != (longlong *)0x0) {
        local_1d0 = 0;
        uStack_170 = 0;
        local_1e0 = (longlong *)0x0;
        local_168 = (longlong *)0x0;
        uVar18 = 0xf;
        uStack_160 = 0xf;
        local_178 = (undefined8 *)0x0;
        uStack_150 = 0;
        plVar17 = (longlong *)0x0;
        local_148 = (longlong *)0x0;
        uStack_140 = 0xf;
        local_158 = 0;
        uStack_110 = 0;
        local_108 = (longlong *)0x0;
        uVar19 = 0xf;
        uStack_100 = 0xf;
        local_118 = 0;
        uStack_130 = 0;
        local_128 = (longlong *)0x0;
        uStack_120 = 0xf;
        local_138 = 0;
        iVar4 = (**(code **)(*local_1c8 + 0x30))(local_1c8,&local_1d0);
        lVar12 = local_1d0;
        if (-1 < iVar4) {
          if (local_1d0 == 0) {
            uStack_1b0 = 0;
            local_1a8 = (longlong *)0x0;
            uStack_1a0 = 0xf;
            local_1b8 = (LPSTR)0x0;
            plVar21 = (longlong *)0x0;
            uVar18 = 0xf;
            local_1b8._0_4_ = 0;
            local_1b8._4_4_ = 0;
            uStack_1b0._0_4_ = 0;
            uStack_1b0._4_4_ = 0;
            uVar23 = (undefined4)local_1b8;
            uVar24 = local_1b8._4_4_;
            uVar25 = (undefined4)uStack_1b0;
            uVar26 = uStack_1b0._4_4_;
          }
          else {
            local_1e8[0] = 0;
            pWVar8 = (LPCWSTR)(*DAT_180cec670)(local_1d0,local_1e8);
            uVar2 = local_1e8[0];
            if ((pWVar8 == (LPCWSTR)0x0) || (unaff_RDI = (ULONGLONG)local_1e8[0], local_1e8[0] == 0)
               ) {
              uStack_1b0 = 0;
              local_1a8 = (longlong *)0x0;
              uStack_1a0 = 0xf;
              local_1b8 = (LPSTR)0x0;
              local_1b8._0_4_ = 0;
              local_1b8._4_4_ = 0;
              uStack_1b0._0_4_ = 0;
              uStack_1b0._4_4_ = 0;
              uVar23 = (undefined4)local_1b8;
              uVar24 = local_1b8._4_4_;
              uVar25 = (undefined4)uStack_1b0;
              uVar26 = uStack_1b0._4_4_;
            }
            else {
              iVar5 = WideCharToMultiByte(0xfde9,0,pWVar8,local_1e8[0],(LPSTR)0x0,0,(LPCSTR)0x0,
                                          (LPBOOL)0x0);
              iVar4 = iVar5;
              if (iVar5 < 0) {
                iVar4 = 0;
              }
              FUN_1800969e0(&local_198,(longlong)iVar4,0);
              if (0 < iVar5) {
                pCVar10 = (LPSTR)&local_198;
                if (0xf < uStack_180) {
                  pCVar10 = local_198;
                }
                WideCharToMultiByte(0xfde9,0,pWVar8,uVar2,pCVar10,iVar5,(LPCSTR)0x0,(LPBOOL)0x0);
              }
              local_1b8 = local_198;
              uStack_1b0 = uStack_190;
              local_1a8 = local_188;
              uStack_1a0 = uStack_180;
              uVar23 = (undefined4)local_198;
              uVar24 = local_198._4_4_;
              uVar25 = (undefined4)uStack_190;
              uVar26 = uStack_190._4_4_;
            }
            uVar18 = uStack_1a0;
            plVar21 = local_1a8;
            (*DAT_180cec668)(lVar12);
          }
          local_178 = (undefined8 *)CONCAT44(uVar24,uVar23);
          uStack_170 = CONCAT44(uVar26,uVar25);
          local_1e0 = plVar21;
          local_168 = plVar21;
          uStack_160 = uVar18;
        }
        local_1d0 = 0;
        iVar4 = (**(code **)(*local_1c8 + 0x48))(local_1c8,&local_1d0);
        lVar12 = local_1d0;
        if (-1 < iVar4) {
          if (local_1d0 == 0) {
            uStack_190 = 0;
            local_198 = (LPSTR)0x0;
            plVar17 = (longlong *)0x0;
            uVar22 = 0xf;
            local_198._0_4_ = 0;
            local_198._4_4_ = 0;
            uStack_190._0_4_ = 0;
            uStack_190._4_4_ = 0;
            uVar23 = (undefined4)local_198;
            uVar24 = local_198._4_4_;
            uVar25 = (undefined4)uStack_190;
            uVar26 = uStack_190._4_4_;
          }
          else {
            local_1e8[0] = 0;
            pWVar8 = (LPCWSTR)(*DAT_180cec670)(local_1d0,local_1e8);
            uVar2 = local_1e8[0];
            if ((pWVar8 == (LPCWSTR)0x0) || (unaff_RDI = (ULONGLONG)local_1e8[0], local_1e8[0] == 0)
               ) {
              uStack_1b0 = 0;
              local_1a8 = (longlong *)0x0;
              uStack_1a0 = 0xf;
              local_1b8 = (LPSTR)0x0;
              local_1b8._0_4_ = 0;
              local_1b8._4_4_ = 0;
              uStack_1b0._0_4_ = 0;
              uStack_1b0._4_4_ = 0;
              uVar23 = (undefined4)local_1b8;
              uVar24 = local_1b8._4_4_;
              uVar25 = (undefined4)uStack_1b0;
              uVar26 = uStack_1b0._4_4_;
            }
            else {
              iVar5 = WideCharToMultiByte(0xfde9,0,pWVar8,local_1e8[0],(LPSTR)0x0,0,(LPCSTR)0x0,
                                          (LPBOOL)0x0);
              iVar4 = iVar5;
              if (iVar5 < 0) {
                iVar4 = 0;
              }
              FUN_1800969e0(&local_198,(longlong)iVar4,0);
              if (0 < iVar5) {
                pCVar10 = (LPSTR)&local_198;
                if (0xf < uStack_180) {
                  pCVar10 = local_198;
                }
                WideCharToMultiByte(0xfde9,0,pWVar8,uVar2,pCVar10,iVar5,(LPCSTR)0x0,(LPBOOL)0x0);
              }
              local_1b8 = local_198;
              uStack_1b0 = uStack_190;
              local_1a8 = local_188;
              uStack_1a0 = uStack_180;
              uVar23 = (undefined4)local_198;
              uVar24 = local_198._4_4_;
              uVar25 = (undefined4)uStack_190;
              uVar26 = uStack_190._4_4_;
            }
            uVar22 = uStack_1a0;
            plVar17 = local_1a8;
            (*DAT_180cec668)(lVar12);
            local_198 = (LPSTR)CONCAT44(uVar24,uVar23);
            uStack_190 = CONCAT44(uVar26,uVar25);
          }
          local_158 = CONCAT44(uVar24,uVar23);
          uStack_150 = CONCAT44(uVar26,uVar25);
          local_188 = (longlong *)0x0;
          uStack_180 = 0xf;
          local_198 = (LPSTR)((ulonglong)local_198 & 0xffffffffffffff00);
          local_148 = plVar17;
          uStack_140 = uVar22;
          FUN_18000f890(&local_198);
        }
        local_1d0 = 0;
        iVar4 = (**(code **)(*local_1c8 + 0x40))(local_1c8,&local_1d0);
        lVar12 = local_1d0;
        if (-1 < iVar4) {
          if (local_1d0 == 0) {
            uStack_1b0 = 0;
            local_1a8 = (longlong *)0x0;
            uStack_1a0 = 0xf;
            local_1b8 = (LPSTR)0x0;
            plVar21 = (longlong *)0x0;
            uVar19 = 0xf;
            local_1b8._0_4_ = 0;
            local_1b8._4_4_ = 0;
            uStack_1b0._0_4_ = 0;
            uStack_1b0._4_4_ = 0;
            uVar23 = (undefined4)local_1b8;
            uVar24 = local_1b8._4_4_;
            uVar25 = (undefined4)uStack_1b0;
            uVar26 = uStack_1b0._4_4_;
          }
          else {
            local_1e8[0] = 0;
            pWVar8 = (LPCWSTR)(*DAT_180cec670)(local_1d0,local_1e8);
            uVar2 = local_1e8[0];
            if ((pWVar8 == (LPCWSTR)0x0) || (unaff_RDI = (ULONGLONG)local_1e8[0], local_1e8[0] == 0)
               ) {
              uStack_1b0 = 0;
              local_1a8 = (longlong *)0x0;
              uStack_1a0 = 0xf;
              local_1b8 = (LPSTR)0x0;
              local_1b8._0_4_ = 0;
              local_1b8._4_4_ = 0;
              uStack_1b0._0_4_ = 0;
              uStack_1b0._4_4_ = 0;
              uVar23 = (undefined4)local_1b8;
              uVar24 = local_1b8._4_4_;
              uVar25 = (undefined4)uStack_1b0;
              uVar26 = uStack_1b0._4_4_;
            }
            else {
              iVar5 = WideCharToMultiByte(0xfde9,0,pWVar8,local_1e8[0],(LPSTR)0x0,0,(LPCSTR)0x0,
                                          (LPBOOL)0x0);
              iVar4 = iVar5;
              if (iVar5 < 0) {
                iVar4 = 0;
              }
              FUN_1800969e0(&local_198,(longlong)iVar4,0);
              if (0 < iVar5) {
                pCVar10 = (LPSTR)&local_198;
                if (0xf < uStack_180) {
                  pCVar10 = local_198;
                }
                WideCharToMultiByte(0xfde9,0,pWVar8,uVar2,pCVar10,iVar5,(LPCSTR)0x0,(LPBOOL)0x0);
              }
              local_1b8 = local_198;
              uStack_1b0 = uStack_190;
              local_1a8 = local_188;
              uStack_1a0 = uStack_180;
              uVar23 = (undefined4)local_198;
              uVar24 = local_198._4_4_;
              uVar25 = (undefined4)uStack_190;
              uVar26 = uStack_190._4_4_;
            }
            uVar19 = uStack_1a0;
            plVar21 = local_1a8;
            (*DAT_180cec668)(lVar12);
          }
          local_118 = CONCAT44(uVar24,uVar23);
          uStack_110 = CONCAT44(uVar26,uVar25);
          local_108 = plVar21;
          uStack_100 = uVar19;
        }
        local_1d0 = 0;
        iVar4 = (**(code **)(*local_1c8 + 0x50))(local_1c8,&local_1d0);
        lVar12 = local_1d0;
        if (-1 < iVar4) {
          if (local_1d0 == 0) {
            uStack_1b0 = 0;
            local_1a8 = (longlong *)0x0;
            uStack_1a0 = 0xf;
            local_1b8 = (LPSTR)0x0;
            plVar21 = (longlong *)0x0;
            uVar22 = 0xf;
            local_1b8._0_4_ = 0;
            local_1b8._4_4_ = 0;
            uStack_1b0._0_4_ = 0;
            uStack_1b0._4_4_ = 0;
            uVar23 = (undefined4)local_1b8;
            uVar24 = local_1b8._4_4_;
            uVar25 = (undefined4)uStack_1b0;
            uVar26 = uStack_1b0._4_4_;
          }
          else {
            local_1e8[0] = 0;
            pWVar8 = (LPCWSTR)(*DAT_180cec670)(local_1d0,local_1e8);
            uVar2 = local_1e8[0];
            if ((pWVar8 == (LPCWSTR)0x0) || (unaff_RDI = (ULONGLONG)local_1e8[0], local_1e8[0] == 0)
               ) {
              uStack_1b0 = 0;
              local_1a8 = (longlong *)0x0;
              uStack_1a0 = 0xf;
              local_1b8 = (LPSTR)0x0;
              local_1b8._0_4_ = 0;
              local_1b8._4_4_ = 0;
              uStack_1b0._0_4_ = 0;
              uStack_1b0._4_4_ = 0;
              uVar23 = (undefined4)local_1b8;
              uVar24 = local_1b8._4_4_;
              uVar25 = (undefined4)uStack_1b0;
              uVar26 = uStack_1b0._4_4_;
            }
            else {
              iVar5 = WideCharToMultiByte(0xfde9,0,pWVar8,local_1e8[0],(LPSTR)0x0,0,(LPCSTR)0x0,
                                          (LPBOOL)0x0);
              iVar4 = iVar5;
              if (iVar5 < 0) {
                iVar4 = 0;
              }
              FUN_1800969e0(&local_198,(longlong)iVar4,0);
              if (0 < iVar5) {
                pCVar10 = (LPSTR)&local_198;
                if (0xf < uStack_180) {
                  pCVar10 = local_198;
                }
                WideCharToMultiByte(0xfde9,0,pWVar8,uVar2,pCVar10,iVar5,(LPCSTR)0x0,(LPBOOL)0x0);
              }
              local_1b8 = local_198;
              uStack_1b0 = uStack_190;
              local_1a8 = local_188;
              uStack_1a0 = uStack_180;
              uVar23 = (undefined4)local_198;
              uVar24 = local_198._4_4_;
              uVar25 = (undefined4)uStack_190;
              uVar26 = uStack_190._4_4_;
            }
            uVar22 = uStack_1a0;
            plVar21 = local_1a8;
            (*DAT_180cec668)(lVar12);
          }
          local_138 = CONCAT44(uVar24,uVar23);
          uStack_130 = CONCAT44(uVar26,uVar25);
          local_128 = plVar21;
          uStack_120 = uVar22;
        }
        puVar9 = &local_178;
        if (0xf < uVar18) {
          puVar9 = local_178;
        }
        FUN_180029840(&DAT_1809f1a68,puVar9,local_1e0);
        puVar9 = &local_158;
        if (plVar17 == (longlong *)0x0) {
          puVar9 = &local_118;
        }
        if (puVar9 != &DAT_1809f1a88) {
          if ((ulonglong)puVar9[3] < 0x10) {
            puVar13 = puVar9;
          }
          else {
            puVar13 = (undefined8 *)*puVar9;
          }
          FUN_180029840(&DAT_1809f1a88,puVar13,puVar9[2]);
          uVar19 = uStack_100;
        }
        local_1d8 = 0x1f;
        if (DAT_1809f1ab8 == 0x7fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
          FUN_180011990();
        }
        FUN_180069380(local_d8);
        puVar9 = (undefined8 *)FUN_1800667a0(local_98,local_d8,&local_178);
        FUN_1800690a0(puVar9,0x1f);
        local_1b8 = (LPSTR)*puVar9;
        uStack_1b0 = puVar9[1];
        local_1a8 = (longlong *)puVar9[2];
        uStack_1a0 = puVar9[3];
        puVar9[2] = 0;
        puVar9[3] = 0xf;
        *(undefined1 *)puVar9 = 0;
        puVar9 = (undefined8 *)FUN_1800667a0(local_b8,&local_1b8,&local_158);
        FUN_1800690a0(puVar9,0x1f);
        local_198 = (LPSTR)*puVar9;
        uStack_190 = puVar9[1];
        local_188 = (longlong *)puVar9[2];
        uStack_180 = puVar9[3];
        puVar9[2] = 0;
        puVar9[3] = 0xf;
        *(undefined1 *)puVar9 = 0;
        FUN_1800667a0(local_f8,&local_198,&local_138);
        if (uStack_180 < 0x10) {
LAB_180210618:
          local_188 = (longlong *)0x0;
          uStack_180 = 0xf;
          local_198 = (LPSTR)((ulonglong)local_198 & 0xffffffffffffff00);
          FUN_18000f890(local_b8);
          if (0xf < uStack_1a0) {
            uVar18 = uStack_1a0 + 1;
            pCVar10 = local_1b8;
            if (0xfff < uVar18) {
              pCVar10 = *(LPSTR *)(local_1b8 + -8);
              if ((LPSTR)0x1f < local_1b8 + (-8 - (longlong)pCVar10)) goto LAB_1802107af;
              uVar18 = uStack_1a0 + 0x28;
            }
            thunk_FUN_1803d64e0(pCVar10,uVar18);
          }
          local_1a8 = (longlong *)0x0;
          uStack_1a0 = 0xf;
          local_1b8 = (LPSTR)((ulonglong)local_1b8 & 0xffffffffffffff00);
          FUN_18000f890(local_98);
          FUN_18000f890(local_d8);
          unaff_RDI = GetTickCount64();
          puVar9 = &DAT_1809f1a20;
          if (0xf < DAT_1809f1a38) {
            puVar9 = DAT_1809f1a20;
          }
          ppppuVar11 = local_f8;
          if (0xf < local_e0) {
            ppppuVar11 = local_f8[0];
          }
          if ((local_e8 == DAT_1809f1a30) &&
             ((puVar15 = auStackY_228, local_e8 == 0 ||
              (iVar4 = memcmp(ppppuVar11,puVar9,local_e8), puVar15 = auStackY_228, iVar4 == 0))))
          goto LAB_1802107b6;
          ppppuVar11 = local_f8;
          if (0xf < local_e0) {
            ppppuVar11 = local_f8[0];
          }
          FUN_180029840(&DAT_1809f1a20,ppppuVar11,local_e8);
          DAT_1809f1a48 = 0;
          local_1b8 = (LPSTR)0x0;
          uStack_1b0 = 0;
          local_1a8 = (longlong *)0x0;
          uStack_1a0 = 0;
          DAT_1809f1a50 = unaff_RDI;
          iVar4 = FUN_1804e4d70(&DAT_1809f1930);
          if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_1804e4a90(5);
          }
          if (DAT_1809f197c == 0x7fffffff) {
            DAT_1809f197c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
            FUN_1804e4a90(6);
          }
          _DAT_180cec620 = 0;
          FUN_180081c90(&DAT_180cec628,&uStack_1b0);
          DAT_1809f1a04 = DAT_1809f1a58 + 1;
          DAT_180cc4c46 = 1;
          DAT_1809f1a58 = DAT_1809f1a04;
          DAT_1809f1ae4 = DAT_1809f1a04;
          DAT_180cec658 = DAT_1809f1a04;
          FUN_1804e4e90(&DAT_1809f1930);
          FUN_180081c30(&uStack_1b0);
        }
        else {
          uVar18 = uStack_180 + 1;
          pCVar10 = local_198;
          if (uVar18 < 0x1000) {
LAB_180210613:
            thunk_FUN_1803d64e0(pCVar10,uVar18);
            goto LAB_180210618;
          }
          pCVar10 = *(LPSTR *)(local_198 + -8);
          if (local_198 + (-8 - (longlong)pCVar10) < (LPSTR)0x20) {
            uVar18 = uStack_180 + 0x28;
            goto LAB_180210613;
          }
          pcVar1 = (code *)swi(0x29);
          (*pcVar1)(5);
          puVar14 = auStackY_220;
LAB_1802107af:
          pcVar1 = (code *)swi(0x29);
          (*pcVar1)(5);
          puVar15 = puVar14 + 8;
LAB_1802107b6:
          puVar16 = puVar15;
        }
        if ((DAT_1809f1a48 < 4) && (DAT_1809f1a50 <= unaff_RDI)) {
          DAT_1809f1a48 = DAT_1809f1a48 + 1;
          DAT_1809f1a50 = unaff_RDI + 0x5dc;
          *(undefined8 *)(puVar16 + 0x48) = 0;
          *(undefined8 *)(puVar16 + 0x70) = 0;
          *(undefined8 *)(puVar16 + 0x78) = 0;
          *(undefined8 *)(puVar16 + 0x80) = 0;
          uStack_1a0 = 0;
          pcVar1 = *(code **)(**(longlong **)(puVar16 + 0x60) + 0x78);
          *(undefined8 *)(puVar16 + -8) = 0x180210815;
          iVar4 = (*pcVar1)(*(longlong **)(puVar16 + 0x60),puVar16 + 0x48);
          if ((-1 < iVar4) && (*(longlong *)(puVar16 + 0x48) != 0)) {
            *(undefined8 *)(puVar16 + -8) = 0x180210835;
            cVar3 = FUN_18020fb00(*(longlong *)(puVar16 + 0x48),puVar16 + 0x70);
            if (cVar3 != '\0') {
              DAT_1809f1a48 = 4;
              *(undefined8 *)(puVar16 + -8) = 0x180210853;
              iVar4 = FUN_1804e4d70(&DAT_1809f1930);
              if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
                *(undefined **)(puVar16 + -8) = &UNK_180210a98;
                FUN_1804e4a90(5);
              }
              if (DAT_1809f197c == 0x7fffffff) goto LAB_180210a57;
              _DAT_180cec620 = *(undefined8 *)(puVar16 + 0x70);
              *(undefined8 *)(puVar16 + -8) = 0x180210891;
              FUN_180081c90(&DAT_180cec628,puVar16 + 0x78);
              DAT_1809f1a04 = DAT_1809f1a58 + 1;
              DAT_180cc4c46 = 1;
              *(undefined8 *)(puVar16 + -8) = 0x1802108c4;
              DAT_1809f1a58 = DAT_1809f1a04;
              DAT_1809f1ae4 = DAT_1809f1a04;
              DAT_180cec658 = DAT_1809f1a04;
              FUN_1804e4e90(&DAT_1809f1930);
            }
          }
          *(undefined8 *)(puVar16 + -8) = 0x1802108cf;
          FUN_180081c30(puVar16 + 0x78);
          plVar17 = *(longlong **)(puVar16 + 0x48);
          if (plVar17 != (longlong *)0x0) {
            *(undefined8 *)(puVar16 + 0x48) = 0;
            pcVar1 = *(code **)(*plVar17 + 0x10);
            *(undefined8 *)(puVar16 + -8) = 0x1802108e5;
            (*pcVar1)();
          }
        }
        *(undefined8 *)(puVar16 + -8) = 0x1802108ef;
        FUN_18000f890(local_f8);
        if (0xf < uStack_120) {
          uVar18 = uStack_120 + 1;
          lVar12 = local_138;
          if (uVar18 < 0x1000) {
LAB_180210926:
            *(undefined8 *)(puVar16 + -8) = 0x18021092b;
            thunk_FUN_1803d64e0(lVar12,uVar18);
            goto LAB_18021092c;
          }
          lVar12 = *(longlong *)(local_138 + -8);
          if ((local_138 - lVar12) - 8U < 0x20) {
            uVar18 = uStack_120 + 0x28;
            goto LAB_180210926;
          }
          pcVar1 = (code *)swi(0x29);
          (*pcVar1)(5);
          puVar16 = puVar16 + 8;
LAB_180210a42:
          pcVar1 = (code *)swi(0x29);
          (*pcVar1)(5);
          puVar16 = puVar16 + 8;
LAB_180210a49:
          pcVar1 = (code *)swi(0x29);
          (*pcVar1)(5);
          puVar16 = puVar16 + 8;
LAB_180210a50:
          pcVar1 = (code *)swi(0x29);
          DAT_1809f197c = (*pcVar1)(5);
          puVar16 = puVar16 + 8;
LAB_180210a57:
          DAT_1809f197c = DAT_1809f197c + -1;
                    /* WARNING: Subroutine does not return */
          *(undefined8 *)(puVar16 + -8) = 0x180210a69;
          FUN_1804e4a90(6);
        }
LAB_18021092c:
        if (0xf < uVar19) {
          uVar18 = uVar19 + 1;
          lVar12 = local_118;
          if (0xfff < uVar18) {
            lVar12 = *(longlong *)(local_118 + -8);
            if (0x1f < (local_118 - lVar12) - 8U) goto LAB_180210a42;
            uVar18 = uVar19 + 0x28;
          }
          *(undefined8 *)(puVar16 + -8) = 0x180210964;
          thunk_FUN_1803d64e0(lVar12,uVar18);
        }
        if (0xf < uStack_140) {
          uVar18 = uStack_140 + 1;
          lVar12 = local_158;
          if (0xfff < uVar18) {
            lVar12 = *(longlong *)(local_158 + -8);
            if (0x1f < (local_158 - lVar12) - 8U) goto LAB_180210a49;
            uVar18 = uStack_140 + 0x28;
          }
          *(undefined8 *)(puVar16 + -8) = 0x1802109a0;
          thunk_FUN_1803d64e0(lVar12,uVar18);
        }
        puVar15 = puVar16;
        if (0xf < uStack_160) {
          uVar18 = uStack_160 + 1;
          puVar9 = local_178;
          if (0xfff < uVar18) {
            puVar9 = (undefined8 *)local_178[-1];
            if (0x1f < (ulonglong)((longlong)local_178 + (-8 - (longlong)puVar9)))
            goto LAB_180210a50;
            uVar18 = uStack_160 + 0x28;
          }
          *(undefined8 *)(puVar16 + -8) = 0x1802109dc;
          thunk_FUN_1803d64e0(puVar9,uVar18);
        }
        goto LAB_1802109dc;
      }
    }
    if (plVar17 == (longlong *)0x0) goto LAB_1802109f2;
    *(undefined8 *)(puVar15 + 0x60) = 0;
  }
  pcVar1 = *(code **)(*plVar17 + 0x10);
  *(undefined8 *)(puVar15 + -8) = 0x1802109f1;
  (*pcVar1)();
LAB_1802109f2:
  plVar17 = *(longlong **)(puVar15 + 0x68);
  if (plVar17 != (longlong *)0x0) {
    *(undefined8 *)(puVar15 + 0x68) = 0;
    pcVar1 = *(code **)(*plVar17 + 0x10);
    *(undefined8 *)(puVar15 + -8) = 0x180210a07;
    (*pcVar1)();
  }
  *(undefined8 *)(puVar15 + -8) = 0x180210a17;
  return;
}



/* ===== 180210aa0 FUN_180210aa0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180210aa0(void)

{
  code *pcVar1;
  longlong *plVar2;
  double dVar3;
  ulonglong uVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  int cbMultiByte;
  LPCWSTR lpWideCharStr;
  ULONGLONG UVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  int iVar11;
  LPSTR lpMultiByteStr;
  ulonglong uVar12;
  undefined8 uVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  double dVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined1 auStackY_1c8 [8];
  undefined1 auStackY_1c0 [24];
  int local_178 [4];
  longlong *local_168;
  longlong *local_160 [2];
  longlong local_150;
  longlong local_148;
  longlong local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  double local_90;
  double dStack_88;
  ULONGLONG local_80;
  undefined8 local_78;
  ulonglong local_68;
  
  local_68 = DAT_180919500 ^ (ulonglong)auStackY_1c8;
  DAT_1809f1a60 = 0;
  cVar6 = FUN_18020f7b0();
  puVar15 = auStackY_1c8;
  if (cVar6 == '\0') goto LAB_18021118a;
  local_168 = (longlong *)0x0;
  iVar7 = (**(code **)(*DAT_1809f1a10 + 0x30))(DAT_1809f1a10,&local_168);
  if ((iVar7 < 0) || (local_168 == (longlong *)0x0)) {
    local_f8 = 0;
    uStack_e8 = 0;
    local_e0 = 0;
    local_d8 = 0xf;
    local_f0 = 0;
    uStack_c8 = 0;
    local_c0 = 0;
    local_b8 = 0xf;
    local_d0 = 0;
    uStack_a8 = 0;
    local_a0 = 0;
    local_98 = 0xf;
    local_b0 = 0;
    local_90 = 0.0;
    dStack_88 = 0.0;
    local_80 = 0;
    local_78 = 0;
    DAT_1809f1a60 = 0;
    FUN_18002ba60(&DAT_1809f1a68,&local_f0);
    FUN_18002ba60(&DAT_1809f1a88,&local_d0);
    FUN_18002ba60(&DAT_1809f1aa8,&local_b0);
    _DAT_1809f1ac8 = local_90;
    _DAT_1809f1ad0 = dStack_88;
    DAT_1809f1ad8 = local_80;
    DAT_1809f1ae0 = (undefined1)local_78;
    DAT_1809f1ae1 = local_78._1_1_;
    DAT_1809f1ae2 = local_78._2_1_;
    DAT_1809f1ae3 = local_78._3_1_;
    DAT_1809f1ae4 = local_78._4_4_;
    FUN_18000f890(&local_b0);
    FUN_18000f890(&local_d0);
    FUN_18000f890(&local_f0);
    puVar15 = auStackY_1c8;
    DAT_1809f1ae4 = DAT_1809f1a58;
    if (DAT_1809f1a30 != 0) {
      DAT_1809f1a30 = 0;
      puVar9 = &DAT_1809f1a20;
      if (0xf < DAT_1809f1a38) {
        puVar9 = DAT_1809f1a20;
      }
      *(undefined1 *)puVar9 = 0;
      local_118 = (LPSTR)0x0;
      uStack_110 = 0;
      local_108 = 0;
      uStack_100 = 0;
      iVar7 = FUN_1804e4d70(&DAT_1809f1930);
      if (iVar7 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1804e4a90(5);
      }
      if (DAT_1809f197c == 0x7fffffff) {
        DAT_1809f197c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
        FUN_1804e4a90(6);
      }
      _DAT_180cec620 = 0;
      FUN_180081c90(&DAT_180cec628,&uStack_110);
      DAT_1809f1a04 = DAT_1809f1a58 + 1;
      DAT_180cc4c46 = 1;
      DAT_1809f1a58 = DAT_1809f1a04;
      DAT_1809f1ae4 = DAT_1809f1a04;
      DAT_180cec658 = DAT_1809f1a04;
      FUN_1804e4e90(&DAT_1809f1930);
      FUN_180081c30(&uStack_110);
      puVar15 = auStackY_1c8;
    }
  }
  else {
    local_150 = 0;
    iVar7 = (**(code **)(*local_168 + 0x30))(local_168,&local_150);
    lVar5 = local_150;
    if (iVar7 < 0) {
LAB_180210cc9:
      local_160[0] = (longlong *)0x0;
      iVar7 = (**(code **)(*local_168 + 0x48))(local_168,local_160);
      puVar15 = auStackY_1c8;
      if ((-1 < iVar7) && (puVar15 = auStackY_1c8, local_160[0] != (longlong *)0x0)) {
        local_178[0] = 0;
        iVar7 = (**(code **)(*local_160[0] + 0x38))(local_160[0],local_178);
        puVar14 = auStackY_1c8;
        puVar15 = auStackY_1c8;
        if (-1 < iVar7) {
          if (local_178[0] == 4) {
            DAT_1809f1a60 = 3;
            puVar15 = auStackY_1c8;
          }
          else {
            if (local_178[0] == 5) goto LAB_180210d29;
            DAT_1809f1a60 = 1;
            puVar15 = auStackY_1c8;
          }
        }
        goto LAB_180210d3f;
      }
    }
    else {
      if (local_150 == 0) {
        uStack_130 = 0;
        uVar13 = 0;
        uVar19 = 0xf;
        uVar20 = 0;
        local_138 = (LPSTR)0x0;
      }
      else {
        local_178[0] = 0;
        lpWideCharStr = (LPCWSTR)(*DAT_180cec670)(local_150,local_178);
        iVar7 = local_178[0];
        if ((lpWideCharStr == (LPCWSTR)0x0) || (local_178[0] == 0)) {
          uStack_130 = 0;
          local_128 = 0;
          uStack_120 = 0xf;
          local_138 = (LPSTR)0x0;
          local_128._0_4_ = 0;
          local_128._4_4_ = 0;
          uStack_120._0_4_ = 0xf;
          uStack_120._4_4_ = 0;
          local_138._0_4_ = 0;
          local_138._4_4_ = 0;
          uStack_130._0_4_ = 0;
          uStack_130._4_4_ = 0;
          uVar17 = (undefined4)local_128;
          uVar18 = local_128._4_4_;
          uVar19 = (undefined4)uStack_120;
          uVar20 = uStack_120._4_4_;
          uVar21 = (undefined4)local_138;
          uVar22 = local_138._4_4_;
          uVar23 = (undefined4)uStack_130;
          uVar24 = uStack_130._4_4_;
        }
        else {
          cbMultiByte = WideCharToMultiByte(0xfde9,0,lpWideCharStr,local_178[0],(LPSTR)0x0,0,
                                            (LPCSTR)0x0,(LPBOOL)0x0);
          iVar11 = cbMultiByte;
          if (cbMultiByte < 0) {
            iVar11 = 0;
          }
          FUN_1800969e0(&local_118,(longlong)iVar11,0);
          if (0 < cbMultiByte) {
            lpMultiByteStr = (LPSTR)&local_118;
            if (0xf < uStack_100) {
              lpMultiByteStr = local_118;
            }
            WideCharToMultiByte(0xfde9,0,lpWideCharStr,iVar7,lpMultiByteStr,cbMultiByte,(LPCSTR)0x0,
                                (LPBOOL)0x0);
          }
          local_138 = local_118;
          uStack_130 = uStack_110;
          local_128 = local_108;
          uStack_120 = uStack_100;
          uVar17 = (undefined4)local_108;
          uVar18 = local_108._4_4_;
          uVar19 = (undefined4)uStack_100;
          uVar20 = uStack_100._4_4_;
          uVar21 = (undefined4)local_118;
          uVar22 = local_118._4_4_;
          uVar23 = (undefined4)uStack_110;
          uVar24 = uStack_110._4_4_;
        }
        (*DAT_180cec668)(lVar5);
        local_138 = (LPSTR)CONCAT44(uVar22,uVar21);
        uStack_130 = CONCAT44(uVar24,uVar23);
        local_128 = CONCAT44(uVar18,uVar17);
        uStack_120 = CONCAT44(uVar20,uVar19);
        uVar13 = CONCAT44(uVar18,uVar17);
      }
      uVar4 = CONCAT44(DAT_1809f1ac0._4_4_,(undefined4)DAT_1809f1ac0);
      if (uVar4 < 0x10) {
LAB_180210c8c:
        DAT_1809f1aa8 = (ulonglong)local_138;
        _DAT_1809f1ab0 = uStack_130;
        local_128 = 0;
        uStack_120 = 0xf;
        local_138 = (LPSTR)((ulonglong)local_138 & 0xffffffffffffff00);
        DAT_1809f1ab8 = uVar13;
        DAT_1809f1ac0._0_4_ = uVar19;
        DAT_1809f1ac0._4_4_ = uVar20;
        FUN_18000f890(&local_138);
        goto LAB_180210cc9;
      }
      uVar12 = uVar4 + 1;
      uVar10 = DAT_1809f1aa8;
      if (uVar12 < 0x1000) {
LAB_180210c87:
        thunk_FUN_1803d64e0(uVar10,uVar12);
        goto LAB_180210c8c;
      }
      uVar10 = *(ulonglong *)(DAT_1809f1aa8 - 8);
      if ((DAT_1809f1aa8 - uVar10) - 8 < 0x20) {
        uVar12 = uVar4 + 0x28;
        goto LAB_180210c87;
      }
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(5);
      puVar14 = auStackY_1c0;
LAB_180210d29:
      DAT_1809f1a60 = 2;
      puVar15 = puVar14;
LAB_180210d3f:
      *(undefined8 *)(puVar15 + 0x48) = 0;
      pcVar1 = *(code **)(**(longlong **)(puVar15 + 0x68) + 0x30);
      *(undefined8 *)(puVar15 + -8) = 0x180210d54;
      iVar7 = (*pcVar1)(*(longlong **)(puVar15 + 0x68),puVar15 + 0x48);
      if ((-1 < iVar7) && (plVar2 = *(longlong **)(puVar15 + 0x48), plVar2 != (longlong *)0x0)) {
        puVar15[0x40] = 0;
        pcVar1 = *(code **)(*plVar2 + 0x68);
        *(undefined8 *)(puVar15 + -8) = 0x180210d7a;
        iVar7 = (*pcVar1)(plVar2,puVar15 + 0x40);
        if ((iVar7 < 0) || (DAT_1809f1ae0 = 1, puVar15[0x40] == '\0')) {
          DAT_1809f1ae0 = 0;
        }
        pcVar1 = *(code **)(**(longlong **)(puVar15 + 0x48) + 0x60);
        *(undefined8 *)(puVar15 + -8) = 0x180210da3;
        iVar7 = (*pcVar1)(*(longlong **)(puVar15 + 0x48),puVar15 + 0x40);
        if ((iVar7 < 0) || (DAT_1809f1ae1 = 1, puVar15[0x40] == '\0')) {
          DAT_1809f1ae1 = 0;
        }
        pcVar1 = *(code **)(**(longlong **)(puVar15 + 0x48) + 0x80);
        *(undefined8 *)(puVar15 + -8) = 0x180210dcf;
        iVar7 = (*pcVar1)(*(longlong **)(puVar15 + 0x48),puVar15 + 0x40);
        if ((iVar7 < 0) || (DAT_1809f1ae2 = 1, puVar15[0x40] == '\0')) {
          DAT_1809f1ae2 = 0;
        }
        pcVar1 = *(code **)(**(longlong **)(puVar15 + 0x48) + 0xa0);
        *(undefined8 *)(puVar15 + -8) = 0x180210dfb;
        iVar7 = (*pcVar1)(*(longlong **)(puVar15 + 0x48),puVar15 + 0x40);
        if ((iVar7 < 0) || (DAT_1809f1ae3 = 1, puVar15[0x40] == '\0')) {
          DAT_1809f1ae3 = 0;
        }
      }
      plVar2 = *(longlong **)(puVar15 + 0x48);
      if (plVar2 != (longlong *)0x0) {
        *(undefined8 *)(puVar15 + 0x48) = 0;
        pcVar1 = *(code **)(*plVar2 + 0x10);
        *(undefined8 *)(puVar15 + -8) = 0x180210e29;
        (*pcVar1)();
      }
    }
    *(undefined8 *)(puVar15 + 0x58) = 0;
    pcVar1 = *(code **)(**(longlong **)(puVar15 + 0x60) + 0x40);
    *(undefined8 *)(puVar15 + -8) = 0x180210e3f;
    iVar7 = (*pcVar1)(*(longlong **)(puVar15 + 0x60),puVar15 + 0x58);
    if ((-1 < iVar7) && (plVar2 = *(longlong **)(puVar15 + 0x58), plVar2 != (longlong *)0x0)) {
      *(undefined8 *)(puVar15 + 0x70) = 0;
      local_140 = 0;
      local_148 = 0;
      *(undefined8 *)(puVar15 + 0x50) = 0;
      pcVar1 = *(code **)(*plVar2 + 0x30);
      *(undefined8 *)(puVar15 + -8) = 0x180210e72;
      (*pcVar1)(plVar2,puVar15 + 0x70);
      pcVar1 = *(code **)(**(longlong **)(puVar15 + 0x58) + 0x38);
      *(undefined8 *)(puVar15 + -8) = 0x180210e81;
      (*pcVar1)(*(longlong **)(puVar15 + 0x58),&local_140);
      pcVar1 = *(code **)(**(longlong **)(puVar15 + 0x58) + 0x50);
      *(undefined8 *)(puVar15 + -8) = 0x180210e90;
      (*pcVar1)(*(longlong **)(puVar15 + 0x58),&local_148);
      pcVar1 = *(code **)(**(longlong **)(puVar15 + 0x58) + 0x58);
      *(undefined8 *)(puVar15 + -8) = 0x180210ea0;
      (*pcVar1)(*(longlong **)(puVar15 + 0x58),puVar15 + 0x50);
      dVar3 = (double)(local_148 - *(longlong *)(puVar15 + 0x70)) / DAT_1808ac8e8;
      if ((DAT_1809f1a60 == 3) && (0 < *(longlong *)(puVar15 + 0x50))) {
        *(undefined8 *)(puVar15 + 0x48) = 0;
        *(undefined8 *)(puVar15 + -8) = 0x180210edd;
        GetSystemTimeAsFileTime((LPFILETIME)(puVar15 + 0x48));
        dVar16 = (double)(*(longlong *)(puVar15 + 0x48) - *(longlong *)(puVar15 + 0x50)) /
                 DAT_1808ac8e8;
        if ((0.0 < dVar16) && (dVar16 < DAT_1808ac820)) {
          dVar3 = dVar3 + dVar16;
        }
      }
      _DAT_1809f1ad0 = (double)(local_140 - *(longlong *)(puVar15 + 0x70)) / DAT_1808ac8e8;
      if (_DAT_1809f1ad0 <= 0.0) {
        _DAT_1809f1ad0 = 0.0;
      }
      if (0.0 < _DAT_1809f1ad0) {
        dVar16 = _DAT_1809f1ad0;
        if (dVar3 <= _DAT_1809f1ad0) {
          dVar16 = dVar3;
        }
        dVar3 = dVar16;
      }
      if (dVar3 <= 0.0) {
        dVar3 = 0.0;
      }
      *(undefined8 *)(puVar15 + -8) = 0x180210f5d;
      _DAT_1809f1ac8 = dVar3;
      DAT_1809f1ad8 = GetTickCount64();
    }
    *(undefined8 *)(puVar15 + -8) = 0x180210f6a;
    UVar8 = GetTickCount64();
    if ((699 < UVar8 - _DAT_1809f1a40) || (DAT_1809f1a48 < 4)) {
      *(undefined8 *)(puVar15 + -8) = 0x180210f97;
      _DAT_1809f1a40 = UVar8;
      FUN_18020fdb0(*(undefined8 *)(puVar15 + 0x60));
    }
    plVar2 = *(longlong **)(puVar15 + 0x58);
    if (plVar2 != (longlong *)0x0) {
      *(undefined8 *)(puVar15 + 0x58) = 0;
      pcVar1 = *(code **)(*plVar2 + 0x10);
      *(undefined8 *)(puVar15 + -8) = 0x180210fad;
      (*pcVar1)();
    }
    plVar2 = *(longlong **)(puVar15 + 0x68);
    if (plVar2 != (longlong *)0x0) {
      *(undefined8 *)(puVar15 + 0x68) = 0;
      pcVar1 = *(code **)(*plVar2 + 0x10);
      *(undefined8 *)(puVar15 + -8) = 0x180210fc3;
      (*pcVar1)();
    }
  }
  plVar2 = *(longlong **)(puVar15 + 0x60);
  if (plVar2 != (longlong *)0x0) {
    *(undefined8 *)(puVar15 + 0x60) = 0;
    pcVar1 = *(code **)(*plVar2 + 0x10);
    *(undefined8 *)(puVar15 + -8) = 0x180211189;
    (*pcVar1)();
  }
LAB_18021118a:
  *(undefined8 *)(puVar15 + -8) = 0x180211196;
  return;
}



/* ===== 1802111e0 FUN_1802111e0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802111e0(void)

{
  code *pcVar1;
  double dVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  ULONGLONG UVar6;
  ULONGLONG UVar7;
  longlong *plVar8;
  int *piVar9;
  undefined1 *puVar10;
  int *piVar11;
  int *piVar12;
  ulonglong uVar13;
  int local_res8 [2];
  longlong *local_res10;
  longlong *local_res18;
  longlong *local_res20;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [24];
  int *local_68;
  int *piStack_60;
  longlong local_58;
  
  local_68 = (int *)0x0;
  piStack_60 = (int *)0x0;
  local_58 = 0;
  iVar5 = FUN_1804e4d70(&DAT_1809f18e0);
  lVar3 = DAT_180cec698;
  piVar9 = DAT_180cec690;
  piVar11 = DAT_180cec688;
  if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809f192c == 0x7fffffff) {
    DAT_1809f192c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  local_68 = DAT_180cec688;
  DAT_180cec688 = (int *)0x0;
  piStack_60 = DAT_180cec690;
  DAT_180cec690 = (int *)0x0;
  local_58 = DAT_180cec698;
  DAT_180cec698 = 0;
  FUN_1804e4e90(&DAT_1809f18e0);
  if ((piVar11 != piVar9) && (DAT_1809f1a10 != (longlong *)0x0)) {
    local_res20 = (longlong *)0x0;
    iVar5 = (**(code **)(*DAT_1809f1a10 + 0x30))(DAT_1809f1a10,&local_res20);
    dVar2 = DAT_1808ac8e8;
    plVar8 = local_res20;
    if ((-1 < iVar5) && (local_res20 != (longlong *)0x0)) {
      piVar12 = piVar11;
      do {
        local_res18 = (longlong *)0x0;
        iVar5 = *piVar12;
        if (iVar5 == 0) {
          (**(code **)(*plVar8 + 0x88))(plVar8,&local_res18);
LAB_180211328:
          if (local_res18 != (longlong *)0x0) {
            local_res10 = (longlong *)0x0;
            iVar5 = (**(code **)*local_res18)(local_res18,&DAT_18070a218,&local_res10);
            if (-1 < iVar5) {
              UVar6 = GetTickCount64();
              local_res8[0] = 0;
              iVar5 = (**(code **)(*local_res10 + 0x38))(local_res10,local_res8);
              while( true ) {
                if ((iVar5 < 0) || (local_res8[0] != 0)) goto LAB_1802113a8;
                UVar7 = GetTickCount64();
                if (UVar6 + 1000 < UVar7) break;
                Sleep(5);
                iVar5 = (**(code **)(*local_res10 + 0x38))(local_res10,local_res8);
              }
              (**(code **)(*local_res10 + 0x48))();
            }
LAB_1802113a8:
            plVar8 = local_res10;
            if (local_res10 != (longlong *)0x0) {
              local_res10 = (longlong *)0x0;
              (**(code **)(*plVar8 + 0x10))();
            }
          }
          plVar8 = local_res20;
        }
        else {
          if (iVar5 == 1) {
            (**(code **)(*plVar8 + 0xa0))(plVar8,&local_res18);
            goto LAB_180211328;
          }
          if (iVar5 == 2) {
            (**(code **)(*plVar8 + 0x80))(plVar8,&local_res18);
            goto LAB_180211328;
          }
          if (iVar5 == 3) {
            (**(code **)(*plVar8 + 0xc0))
                      (SUB84(*(double *)(piVar12 + 2) * dVar2,0),
                       (longlong)(*(double *)(piVar12 + 2) * dVar2),&local_res18);
            goto LAB_180211328;
          }
        }
        plVar4 = local_res18;
        if (local_res18 != (longlong *)0x0) {
          local_res18 = (longlong *)0x0;
          (**(code **)(*plVar4 + 0x10))(plVar4);
          plVar8 = local_res20;
        }
        piVar12 = piVar12 + 4;
      } while (piVar12 != piVar9);
      _DAT_1809f1a40 = 0;
    }
    if (plVar8 != (longlong *)0x0) {
      local_res20 = (longlong *)0x0;
      (**(code **)(*plVar8 + 0x10))();
    }
  }
  puVar10 = auStack_88;
  if (piVar11 == (int *)0x0) {
    return;
  }
  uVar13 = lVar3 - (longlong)piVar11 & 0xfffffffffffffff0;
  piVar9 = piVar11;
  if (0xfff < uVar13) {
    piVar9 = *(int **)(piVar11 + -2);
    piVar11 = (int *)((longlong)piVar11 + (-8 - (longlong)piVar9));
    if (&DAT_0000001f < piVar11) {
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(5);
      puVar10 = auStack_80;
      piVar9 = piVar11;
    }
    else {
      uVar13 = uVar13 + 0x27;
      puVar10 = auStack_88;
    }
  }
  *(undefined8 *)(puVar10 + -8) = 0x18021144c;
  thunk_FUN_1803d64e0(piVar9,uVar13);
  return;
}



/* ===== 180211480 FUN_180211480 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180211480(void)

{
  longlong *plVar1;
  HRESULT HVar2;
  int iVar3;
  int iVar4;
  HMODULE hModule;
  HMODULE hModule_00;
  undefined8 *puVar5;
  
  HVar2 = CoInitializeEx((LPVOID)0x0,0);
  hModule = LoadLibraryW(L"combase.dll");
  hModule_00 = LoadLibraryW(L"shcore.dll");
  if (hModule != (HMODULE)0x0) {
    DAT_180cec660 = GetProcAddress(hModule,"WindowsCreateString");
    DAT_180cec668 = GetProcAddress(hModule,"WindowsDeleteString");
    DAT_180cec670 = GetProcAddress(hModule,"WindowsGetStringRawBuffer");
    DAT_180cec678 = GetProcAddress(hModule,"RoGetActivationFactory");
    if (hModule_00 != (HMODULE)0x0) {
      DAT_180cec680 = GetProcAddress(hModule_00,"CreateStreamOverRandomAccessStream");
    }
    if ((((DAT_180cec660 != (FARPROC)0x0) && (DAT_180cec668 != (FARPROC)0x0)) &&
        (DAT_180cec670 != (FARPROC)0x0)) && (DAT_180cec678 != (FARPROC)0x0)) {
joined_r0x000180211586:
      if (DAT_180cc4c88 != '\0') {
        FUN_1802111e0();
        FUN_180210aa0();
        iVar3 = FUN_1804e4d70(&DAT_1809f1930);
        if (iVar3 != 0) {
LAB_180211793:
                    /* WARNING: Subroutine does not return */
          FUN_1804e4a90(5);
        }
        if (DAT_1809f197c == 0x7fffffff) {
          DAT_1809f197c = 0x7ffffffe;
LAB_180211788:
                    /* WARNING: Subroutine does not return */
          FUN_1804e4a90(6);
        }
        DAT_1809f1980 = DAT_1809f1a60;
        puVar5 = &DAT_1809f1a68;
        if (0xf < DAT_1809f1a80) {
          puVar5 = DAT_1809f1a68;
        }
        FUN_180029840(&DAT_1809f1988,puVar5,DAT_1809f1a78);
        puVar5 = &DAT_1809f1a88;
        if (0xf < DAT_1809f1aa0) {
          puVar5 = DAT_1809f1a88;
        }
        FUN_180029840(&DAT_1809f19a8,puVar5,DAT_1809f1a98);
        puVar5 = &DAT_1809f1aa8;
        if (0xf < DAT_1809f1ac0) {
          puVar5 = DAT_1809f1aa8;
        }
        FUN_180029840(&DAT_1809f19c8,puVar5,DAT_1809f1ab8);
        _DAT_1809f19e8 = _DAT_1809f1ac8;
        uRam00000001809f19ec = uRam00000001809f1acc;
        uRam00000001809f19f0 = _DAT_1809f1ad0;
        uRam00000001809f19f4 = uRam00000001809f1ad4;
        DAT_1809f19f8 = DAT_1809f1ad8;
        DAT_1809f1a00 = DAT_1809f1ae0;
        DAT_1809f1a01 = DAT_1809f1ae1;
        DAT_1809f1a02 = DAT_1809f1ae2;
        DAT_1809f1a03 = DAT_1809f1ae3;
        DAT_1809f1a04 = DAT_1809f1ae4;
        FUN_1804e4e90(&DAT_1809f1930);
        iVar3 = 0;
        do {
          if (DAT_180cc4c88 == '\0') break;
          Sleep(10);
          iVar4 = FUN_1804e4d70(&DAT_1809f18e0);
          if (iVar4 != 0) goto LAB_180211793;
          if (DAT_1809f192c == 0x7fffffff) {
            DAT_1809f192c = 0x7ffffffe;
            goto LAB_180211788;
          }
          if (DAT_180cec688 != DAT_180cec690) {
            FUN_1804e4e90(&DAT_1809f18e0);
            break;
          }
          FUN_1804e4e90(&DAT_1809f18e0);
          iVar3 = iVar3 + 1;
        } while (iVar3 < 0x19);
        goto joined_r0x000180211586;
      }
    }
  }
  plVar1 = DAT_1809f1a10;
  if (DAT_1809f1a10 != (longlong *)0x0) {
    DAT_1809f1a10 = (longlong *)0x0;
    (**(code **)(*plVar1 + 0x10))();
  }
  if (-1 < HVar2) {
    CoUninitialize();
  }
  return;
}



/* ===== 1802117a0 FUN_1802117a0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802117a0(void)

{
  char cVar1;
  undefined8 *puVar2;
  longlong lVar3;
  int local_10;
  undefined4 local_c;
  
  cVar1 = DAT_180cc4c47;
  LOCK();
  DAT_180cc4c47 = 1;
  UNLOCK();
  if (cVar1 == '\0') {
    LOCK();
    DAT_180cc4c88 = 1;
    UNLOCK();
    puVar2 = (undefined8 *)FUN_1804ecaa0(8);
    *puVar2 = FUN_180211480;
    lVar3 = FUN_180515e84(0,0,FUN_1800d5400,puVar2,0,&local_10);
    if (lVar3 == 0) {
      local_10 = 0;
                    /* WARNING: Subroutine does not return */
      FUN_1804e4a90(6);
    }
    if (DAT_180ca1028 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_180515f70();
    }
    DAT_180ca1028 = local_10;
    _DAT_180ca102c = local_c;
    _DAT_180ca1020 = lVar3;
  }
  return;
}



/* ===== 180211850 FUN_180211850 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_180211850(undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 auStack_f8 [32];
  longlong *local_d8;
  longlong *local_d0;
  longlong local_c8;
  ulonglong local_c0 [3];
  undefined1 local_a8 [16];
  longlong lStack_98;
  undefined8 uStack_90;
  int local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined8 local_74;
  undefined4 local_6c;
  undefined4 local_68;
  undefined8 local_64;
  ulonglong local_58;
  
  local_58 = DAT_180919500 ^ (ulonglong)auStack_f8;
  iVar4 = 0;
  uVar5 = 0;
  local_a8 = ZEXT816(0);
  lStack_98 = 0;
  uStack_90 = 0;
  iVar2 = FUN_1804e4d70(&DAT_1809f1930);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809f197c == 0x7fffffff) {
    DAT_1809f197c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  iVar2 = 0;
  if (DAT_180cc4c46 != '\0') {
    local_a8._8_8_ = _DAT_180cec628;
    local_a8._0_8_ = _DAT_180cec620;
    iVar4 = (int)_DAT_180cec620;
    uVar5 = (undefined4)((ulonglong)_DAT_180cec620 >> 0x20);
    lStack_98 = _DAT_180cec630;
    uStack_90 = _DAT_180cec638;
    _DAT_180cec628 = 0;
    _DAT_180cec630 = 0;
    _DAT_180cec638 = 0;
    local_c8 = 0;
    local_c0[0] = 0;
    local_c0[1] = 0;
    local_c0[2] = 0;
    _DAT_180cec620 = 0;
    FUN_180081c90(&DAT_180cec628,local_c0);
    FUN_180081c30(local_c0);
    DAT_180cc4c46 = '\0';
    iVar2 = DAT_180cec658;
  }
  FUN_1804e4e90(&DAT_1809f1930);
  if ((iVar2 == 0) || (iVar2 == DAT_180cec640)) goto LAB_180211a61;
  if (DAT_180cec648 != (longlong *)0x0) {
    (**(code **)(*DAT_180cec648 + 0x10))();
  }
  plVar1 = DAT_1811079e0;
  if ((DAT_1811079e0 == (longlong *)0x0) || (local_a8._8_8_ == lStack_98)) {
LAB_180211a2f:
    DAT_180cec648 = (longlong *)0x0;
  }
  else {
    local_74 = 1;
    local_64 = 0;
    local_80 = 1;
    local_7c = 1;
    local_78 = 0x1c;
    local_6c = 1;
    local_68 = 8;
    local_c8 = local_a8._8_8_;
    local_c0[0] = (ulonglong)(uint)(iVar4 * 4);
    local_d8 = (longlong *)0x0;
    local_88 = iVar4;
    local_84 = uVar5;
    iVar3 = (**(code **)(*DAT_1811079e0 + 0x28))(DAT_1811079e0,&local_88,&local_c8,&local_d8);
    if ((iVar3 < 0) || (local_d8 == (longlong *)0x0)) goto LAB_180211a2f;
    local_d0 = (longlong *)0x0;
    iVar3 = (**(code **)(*plVar1 + 0x38))(plVar1,local_d8,0,&local_d0);
    if (iVar3 < 0) {
      local_d0 = (longlong *)0x0;
    }
    (**(code **)(*local_d8 + 0x10))();
    DAT_180cec648 = local_d0;
  }
  DAT_180cec640 = iVar2;
  DAT_180cec650 = uVar5;
  DAT_180cec654 = iVar4;
LAB_180211a61:
  iVar4 = DAT_180cec654;
  uVar5 = DAT_180cec650;
  *param_1 = DAT_180cec648;
  *(int *)(param_1 + 1) = iVar4;
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar5;
  FUN_180081c30(local_a8 + 8);
  return param_1;
}



/* ===== 180211ac0 FUN_180211ac0 ===== */

void FUN_180211ac0(longlong *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 != (longlong *)0x0) {
    *param_1 = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}



/* ===== 180211af0 FUN_180211af0 ===== */

void FUN_180211af0(longlong *param_1,longlong param_2,undefined8 param_3,ulonglong param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  
  if (param_4 != 0) {
    plVar1 = param_1 + 1;
    lVar2 = *plVar1;
    if (param_4 <= (ulonglong)(param_1[2] - lVar2)) {
      uVar9 = lVar2 - param_2;
      if (param_4 < uVar9) {
        FUN_180540530(lVar2,lVar2 - param_4,param_4,param_4,plVar1);
        *plVar1 = param_4 + lVar2;
        lVar7 = (lVar2 - param_4) - param_2;
        FUN_180540530(lVar2 - lVar7,param_2,lVar7);
        FUN_180540530(param_2,param_3,param_4);
      }
      else {
        FUN_180540530(param_2 + param_4,param_2,uVar9,param_4,plVar1);
        *plVar1 = uVar9 + param_2 + param_4;
        FUN_180540530(param_2,param_3,param_4);
      }
      return;
    }
    lVar7 = *param_1;
    lVar8 = lVar2 - lVar7;
    if (0x7fffffffffffffffU - lVar8 < param_4) {
                    /* WARNING: Subroutine does not return */
      FUN_1800118d0();
    }
    uVar9 = lVar8 + param_4;
    uVar5 = param_1[2] - lVar7;
    uVar6 = 0x7fffffffffffffff;
    if ((uVar5 <= 0x7fffffffffffffff - (uVar5 >> 1)) &&
       (uVar6 = (uVar5 >> 1) + uVar5, uVar6 < uVar9)) {
      uVar6 = uVar9;
    }
    lVar3 = FUN_18000fb70(uVar6);
    lVar4 = lVar3 + (param_2 - lVar7);
    FUN_180540530(lVar4,param_3,param_4);
    if ((param_4 == 1) && (param_2 == lVar2)) {
      lVar4 = lVar3;
      param_2 = lVar7;
    }
    else {
      FUN_180540530(lVar3,lVar7,param_2 - lVar7);
      lVar4 = lVar4 + param_4;
      lVar8 = lVar2 - param_2;
    }
    FUN_180540530(lVar4,param_2,lVar8);
    FUN_180082ac0(param_1,lVar3,uVar9,uVar6);
  }
  return;
}



/* ===== 180211ce0 FUN_180211ce0 ===== */

undefined8 * FUN_180211ce0(undefined8 param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  
  puVar6 = DAT_180cec690;
  if (DAT_180cec690 != DAT_180cec698) {
    uVar5 = param_2[1];
    *DAT_180cec690 = *param_2;
    puVar6[1] = uVar5;
    puVar6 = DAT_180cec690;
    DAT_180cec690 = DAT_180cec690 + 2;
    return puVar6;
  }
  uVar14 = 0xfffffffffffffff;
  uVar15 = (longlong)DAT_180cec690 - (longlong)DAT_180cec688;
  lVar10 = (longlong)uVar15 >> 4;
  if (lVar10 == 0xfffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_18000fb10();
  }
  uVar11 = lVar10 + 1;
  uVar8 = (longlong)DAT_180cec698 - (longlong)DAT_180cec688 >> 4;
  if (uVar8 <= 0xfffffffffffffff - (uVar8 >> 1)) {
    uVar8 = (uVar8 >> 1) + uVar8;
    uVar14 = uVar11;
    if (uVar11 <= uVar8) {
      uVar14 = uVar8;
    }
    if (0xfffffffffffffff < uVar14) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  puVar7 = (undefined8 *)FUN_18000fb70(uVar14 * 0x10);
  uVar2 = *(undefined4 *)((longlong)param_2 + 4);
  uVar3 = *(undefined4 *)(param_2 + 1);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0xc);
  puVar16 = (undefined8 *)((uVar15 & 0xfffffffffffffff0) + (longlong)puVar7);
  *(undefined4 *)puVar16 = *(undefined4 *)param_2;
  *(undefined4 *)((longlong)puVar16 + 4) = uVar2;
  *(undefined4 *)(puVar16 + 1) = uVar3;
  *(undefined4 *)((longlong)puVar16 + 0xc) = uVar4;
  if (puVar6 == DAT_180cec690) {
    lVar10 = (longlong)DAT_180cec690 - (longlong)DAT_180cec688;
    puVar9 = puVar7;
    puVar6 = DAT_180cec688;
  }
  else {
    FUN_180540530(puVar7,DAT_180cec688,(longlong)puVar6 - (longlong)DAT_180cec688);
    puVar9 = puVar16 + 2;
    lVar10 = (longlong)DAT_180cec690 - (longlong)puVar6;
  }
  puVar12 = auStack_38;
  puVar13 = auStack_38;
  FUN_180540530(puVar9,puVar6,lVar10);
  if (DAT_180cec688 == (undefined8 *)0x0) goto LAB_180211e31;
  puVar6 = DAT_180cec688;
  if (((longlong)DAT_180cec698 - (longlong)DAT_180cec688 & 0xfffffffffffffff0U) < 0x1000) {
LAB_180211e29:
    puVar13 = puVar12;
  }
  else {
    puVar6 = (undefined8 *)DAT_180cec688[-1];
    if (0x1f < (ulonglong)((longlong)DAT_180cec688 + (-8 - (longlong)puVar6))) {
      pcVar1 = (code *)swi(0x29);
      puVar6 = (undefined8 *)(*pcVar1)(5);
      puVar12 = auStack_30;
      goto LAB_180211e29;
    }
  }
  *(undefined8 *)(puVar13 + -8) = 0x180211e31;
  thunk_FUN_1803d64e0(puVar6);
LAB_180211e31:
  DAT_180cec690 = puVar7 + uVar11 * 2;
  DAT_180cec688 = puVar7;
  DAT_180cec698 = puVar7 + uVar14 * 2;
  return puVar16;
}



/* ===== 180211e80 FUN_180211e80 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180211e80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  ULONGLONG UVar2;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStack_258 [32];
  undefined8 local_238;
  undefined8 *local_230;
  undefined1 local_228 [512];
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_258;
  if (DAT_1811150c8 < 0x12d) {
    local_res10 = param_2;
    local_res18 = param_3;
    local_res20 = param_4;
    FUN_180540170(local_228,0,0x200);
    puVar1 = (ulonglong *)FUN_180013640();
    local_238 = 0;
    local_230 = &local_res10;
    FUN_180501904(*puVar1 | 2,local_228,0x200,param_1);
    UVar2 = GetTickCount64();
    FUN_1802b2870("wl_inventory.log","[%llu] %s\n",UVar2,local_228);
    DAT_1811150c8 = DAT_1811150c8 + 1;
  }
  return;
}



/* ===== 180211f50 FUN_180211f50 ===== */

undefined8 FUN_180211f50(void)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = (*DAT_180961ad8)();
  uVar2 = 0;
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)((ulonglong)DAT_180961c20 + lVar1);
  }
  return uVar2;
}



/* ===== 180211f80 FUN_180211f80 ===== */

void FUN_180211f80(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  code *pcVar2;
  
  lVar1 = FUN_18000f3a0();
  pcVar2 = (code *)FUN_18000f3a0(lVar1 + 0x40);
  (*pcVar2)(param_1,param_2,param_3);
  return;
}



/* ===== 180211fd0 FUN_180211fd0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180211fd0(undefined8 param_1,int param_2,undefined4 param_3,undefined8 param_4)

{
  uint uVar1;
  byte bVar2;
  ushort uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  size_t sVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined *puVar11;
  ulonglong uVar12;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  uint local_c0;
  ulonglong local_b8;
  undefined8 local_a8;
  longlong local_a0;
  char local_98 [64];
  ulonglong local_58;
  
  local_58 = DAT_180919500 ^ (ulonglong)auStack_e8;
  uVar12 = 0;
  puVar11 = &DAT_1806dfd54;
  if (param_2 == 0) {
    puVar11 = &DAT_18070a238;
  }
  local_a0 = (longlong)param_2 * 3;
  local_a8 = param_4;
  do {
    lVar6 = FUN_180211f80(param_1,param_3,(&DAT_18061bfc8)[uVar12]);
    if ((lVar6 == 0) || (0x7ffffffefffe < ((ulonglong)DAT_180cec828 + lVar6) - 0xffff)) {
      uVar1 = 0;
LAB_180212155:
      uVar9 = uVar1;
      uVar8 = 0;
    }
    else {
      uVar3 = FUN_180011440();
      uVar9 = (uint)uVar3;
      uVar1 = (uint)uVar3;
      if (uVar3 == 0) goto LAB_180212155;
      uVar10 = (ulonglong)uVar3 | 0xf000000000000000;
      uVar8 = uVar10;
      if (DAT_180cec7f8 != 0) {
        if (((DAT_180cec7e8 != 0) && ((lVar6 + (ulonglong)DAT_180cec7f8) - 0xfffd < 0x7ffffffeffff))
           && (((ulonglong)DAT_180cec7e8 - 0xfffd) + lVar6 < 0x7ffffffeffff)) {
          uVar4 = FUN_180011200();
          uVar5 = FUN_180011200((ulonglong)DAT_180cec7e8 + lVar6);
          uVar8 = CONCAT44(uVar4,uVar5);
          param_4 = local_a8;
          if (uVar8 == 0) {
LAB_180212101:
            uVar8 = uVar10;
          }
          else {
            bVar2 = (byte)((uint)uVar4 >> 0x18);
            if ((bVar2 != 0xe0) && (bVar2 >> 4 < 0xf)) {
              lVar6 = DAT_180cec790;
              if (DAT_180cec790 == DAT_180cec798) goto LAB_180212101;
              do {
                if (*(ulonglong *)(lVar6 + 8) == uVar8) goto LAB_180212157;
                lVar6 = lVar6 + 0x210;
              } while (lVar6 != DAT_180cec798);
              uVar8 = uVar10;
            }
          }
        }
      }
    }
LAB_180212157:
    *(uint *)(&DAT_180cec808 + (local_a0 + uVar12) * 4) = uVar9;
    *(ulonglong *)(&DAT_180cec7a8 + (local_a0 + uVar12) * 8) = uVar8;
    local_c8 = (&DAT_18061bfc8)[uVar12];
    local_c0 = uVar9;
    local_b8 = uVar8;
    snprintf(local_98,0x40," %s slot%d:%d/%llu",puVar11);
    sVar7 = strlen(local_98);
    FUN_1800134a0(param_4,local_98,sVar7);
    uVar12 = uVar12 + 1;
    if (2 < uVar12) {
      return;
    }
  } while( true );
}



/* ===== 180212200 FUN_180212200 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180212200(void)

{
  code *pcVar1;
  longlong lVar2;
  ushort uVar3;
  uint uVar4;
  ULONGLONG UVar5;
  longlong lVar6;
  ulonglong uVar7;
  size_t sVar8;
  ulonglong *puVar9;
  undefined4 *puVar10;
  undefined8 *puVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  undefined1 *puVar17;
  ulonglong uVar18;
  undefined1 *puVar19;
  int iVar20;
  undefined1 *puVar21;
  undefined1 *puVar22;
  undefined1 *puVar23;
  int iVar24;
  int iVar25;
  uint uVar26;
  uint uVar27;
  char *_Str;
  uint uVar28;
  undefined8 uStack_1c0;
  undefined1 auStack_1b8 [8];
  undefined1 auStack_1b0 [24];
  int local_198;
  uint local_190;
  uint local_188;
  uint local_180;
  uint local_178;
  uint local_168;
  uint local_160 [4];
  char *local_150;
  longlong local_148;
  longlong local_140 [5];
  ulonglong uStack_118;
  ulonglong local_110;
  ulonglong uStack_108;
  ulonglong local_100 [4];
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined1 local_c0 [40];
  char local_98 [64];
  ulonglong local_58;
  
  local_58 = DAT_180919500 ^ (ulonglong)auStack_1b8;
  UVar5 = GetTickCount64();
  puVar23 = auStack_1b8;
  if (UVar5 - _DAT_180cec7f0 < 0xfa) goto LAB_180212897;
  _DAT_180cec7f0 = UVar5;
  if ((DAT_180cec828 == 0) && (DAT_1811089f0 != 0)) {
    DAT_180cec828 = FUN_18038eaf0("C_EconItemView","m_iItemDefinitionIndex");
  }
  if ((DAT_180cec7f8 == 0) && (DAT_1811089f0 != 0)) {
    DAT_180cec7f8 = FUN_18038eaf0("C_EconItemView","m_iItemIDHigh");
  }
  if ((DAT_180cec7e8 == 0) && (DAT_1811089f0 != 0)) {
    DAT_180cec7e8 = FUN_18038eaf0("C_EconItemView","m_iItemIDLow");
  }
  puVar23 = auStack_1b8;
  if (((DAT_180cec828 == 0) || (puVar23 = auStack_1b8, DAT_180961ad8 == 0)) ||
     (puVar23 = auStack_1b8, DAT_180961c20 == 0)) goto LAB_180212897;
  local_148 = FUN_180211f50();
  puVar23 = auStack_1b8;
  puVar21 = auStack_1b8;
  puVar22 = auStack_1b8;
  if (local_148 == 0) goto LAB_180212897;
  local_140[1] = 0;
  local_140[2] = 0;
  local_140[3] = 0xf;
  local_140[0] = 0;
  uVar13 = 0;
  local_168 = 0;
  do {
    lVar12 = local_148;
    iVar25 = (int)uVar13;
    iVar24 = 3 - (uint)(iVar25 != 0);
    lVar6 = FUN_180211f80(local_148,iVar24,0x26);
    if ((lVar6 == 0) || (0x7ffffffefffe < ((ulonglong)DAT_180cec828 + lVar6) - 0xffff)) {
      uVar27 = 0;
    }
    else {
      uVar3 = FUN_180011440();
      uVar27 = (uint)uVar3;
    }
    (&DAT_180cec708)[uVar13] = uVar27;
    uVar7 = FUN_18003a390(local_98);
    local_100[1] = 0;
    local_100[2] = 1;
    local_100[3] = 0xf;
    local_100[0] = (ulonglong)(DAT_1806efc00 & 0xff);
    _Str = "t";
    if (iVar25 == 0) {
      _Str = "ct";
    }
    local_150 = _Str;
    sVar8 = strlen(_Str);
    puVar9 = (ulonglong *)FUN_1800134a0(local_100,_Str,sVar8);
    local_140[4] = *puVar9;
    uStack_118 = puVar9[1];
    local_110 = puVar9[2];
    uStack_108 = puVar9[3];
    puVar9[2] = 0;
    puVar9[3] = 0xf;
    *(undefined1 *)puVar9 = 0;
    puVar10 = (undefined4 *)FUN_1800134a0(local_140 + 4," agent:",7);
    local_e0 = *puVar10;
    uStack_dc = puVar10[1];
    uStack_d8 = puVar10[2];
    uStack_d4 = puVar10[3];
    local_d0 = puVar10[4];
    uStack_cc = puVar10[5];
    uStack_c8 = puVar10[6];
    uStack_c4 = puVar10[7];
    *(undefined8 *)(puVar10 + 4) = 0;
    *(undefined8 *)(puVar10 + 6) = 0xf;
    *(undefined1 *)puVar10 = 0;
    puVar11 = (undefined8 *)FUN_180066820(local_c0,&local_e0,uVar7);
    puVar15 = puVar11 + 2;
    if (0xf < (ulonglong)puVar11[3]) {
      puVar11 = (undefined8 *)*puVar11;
    }
    FUN_1800134a0(local_140,puVar11,*puVar15);
    FUN_18000f890(local_c0);
    uVar16 = CONCAT44(uStack_c4,uStack_c8);
    if (0xf < uVar16) {
      uVar18 = uVar16 + 1;
      lVar2 = CONCAT44(uStack_dc,local_e0);
      lVar6 = lVar2;
      if (uVar18 < 0x1000) {
LAB_1802124b9:
        thunk_FUN_1803d64e0(lVar6,uVar18);
        goto LAB_1802124bf;
      }
      lVar6 = *(longlong *)(lVar2 + -8);
      if ((lVar2 - lVar6) - 8U < 0x20) {
        uVar18 = uVar16 + 0x28;
        goto LAB_1802124b9;
      }
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(5);
      puVar21 = auStack_1b0;
LAB_18021276d:
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(5);
      puVar22 = puVar21 + 8;
LAB_180212774:
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(5);
      puVar23 = puVar22 + 8;
      goto LAB_18021277b;
    }
LAB_1802124bf:
    if (0xf < uStack_108) {
      uVar18 = uStack_108 + 1;
      uVar16 = local_140[4];
      if (0xfff < uVar18) {
        uVar16 = *(ulonglong *)(local_140[4] - 8);
        if (0x1f < (local_140[4] - uVar16) - 8) goto LAB_18021276d;
        uVar18 = uStack_108 + 0x28;
      }
      thunk_FUN_1803d64e0(uVar16,uVar18);
    }
    local_110 = 0;
    uStack_108 = 0xf;
    local_140[4] = local_140[4] & 0xffffffffffffff00;
    if (0xf < local_100[3]) {
      uVar18 = local_100[3] + 1;
      uVar16 = local_100[0];
      if (0xfff < uVar18) {
        uVar16 = *(ulonglong *)(local_100[0] - 8);
        if (0x1f < (local_100[0] - uVar16) - 8) goto LAB_180212774;
        uVar18 = local_100[3] + 0x28;
      }
      thunk_FUN_1803d64e0(uVar16,uVar18);
    }
    local_100[2] = 0;
    local_100[3] = 0xf;
    local_100[0] = local_100[0] & 0xffffffffffffff00;
    FUN_18000f890(local_98);
    FUN_180211fd0(lVar12,uVar13,iVar24);
    iVar20 = 0;
    do {
      uVar27 = 0;
      lVar6 = FUN_180211f80(lVar12,iVar24,iVar20 + 8);
      if ((lVar6 == 0) || (0x7ffffffefffe < ((ulonglong)DAT_180cec828 + lVar6) - 0xffff)) {
        uVar26 = 0;
      }
      else {
        uVar3 = FUN_180011440();
        uVar26 = (uint)uVar3;
      }
      lVar6 = FUN_180211f80(lVar12,iVar24,iVar20 + 0x14);
      if ((lVar6 == 0) || (0x7ffffffefffe < ((ulonglong)DAT_180cec828 + lVar6) - 0xffff)) {
        uVar28 = 0;
      }
      else {
        uVar3 = FUN_180011440();
        uVar28 = (uint)uVar3;
      }
      lVar6 = FUN_180211f80(lVar12,iVar24,iVar20 + 2);
      if ((lVar6 != 0) && (((ulonglong)DAT_180cec828 + lVar6) - 0xffff < 0x7ffffffeffff)) {
        uVar3 = FUN_180011440();
        uVar27 = (uint)uVar3;
      }
      local_160[1] = uVar28;
      if (uVar26 != 0) {
        local_160[1] = uVar26;
      }
      local_160[0] = uVar27;
      lVar12 = FUN_180211f80(lVar12,iVar24,iVar20 + 0xe);
      if ((lVar12 == 0) || (0x7ffffffefffe < ((ulonglong)DAT_180cec828 + lVar12) - 0xffff)) {
        local_178 = 0;
      }
      else {
        local_178 = FUN_180011440();
        local_178 = local_178 & 0xffff;
      }
      local_160[2] = local_178;
      uVar13 = 0;
      do {
        (&DAT_180cec714)[iVar20 + ((int)uVar13 + iVar25 * 3) * 5] = local_160[uVar13];
        uVar4 = (int)uVar13 + 1;
        uVar13 = (ulonglong)uVar4;
      } while ((int)uVar4 < 3);
      local_198 = iVar20;
      local_190 = uVar27;
      local_188 = uVar26;
      local_180 = uVar28;
      snprintf(local_98,0x40," %s%d:%d/%d+%d/%d");
      sVar8 = strlen(local_98);
      FUN_1800134a0(local_140,local_98,sVar8);
      lVar12 = local_148;
      iVar20 = iVar20 + 1;
    } while (iVar20 < 5);
    local_168 = local_168 + 1;
    uVar13 = (ulonglong)local_168;
  } while ((int)local_168 < 2);
  lVar6 = FUN_180211f80(local_148,0,0x37);
  uVar7 = 0x7ffffffefffe;
  puVar23 = auStack_1b8;
  if (((lVar6 == 0) ||
      (puVar23 = auStack_1b8, 0x7ffffffefffe < ((ulonglong)DAT_180cec828 + lVar6) - 0xffff)) ||
     (uVar3 = FUN_180011440(), puVar23 = auStack_1b8, uVar3 == 0)) {
LAB_18021277b:
    *(undefined8 *)(puVar23 + -8) = 0x18021278e;
    lVar12 = FUN_180211f80(lVar12,3,0x37);
    if ((lVar12 == 0) || (uVar7 < ((ulonglong)DAT_180cec828 + lVar12) - 0xffff)) {
      DAT_180cec7d8 = 0;
    }
    else {
      *(undefined8 *)(puVar23 + -8) = 0x1802127ad;
      uVar3 = FUN_180011440();
      DAT_180cec7d8 = (uint)uVar3;
    }
  }
  else {
    DAT_180cec7d8 = (uint)uVar3;
    puVar23 = auStack_1b8;
  }
  *(undefined8 *)(puVar23 + -8) = 0x1802127c3;
  uVar14 = FUN_18003a390(local_c0);
  *(undefined8 *)(puVar23 + -8) = 0x1802127d7;
  puVar15 = (undefined8 *)FUN_180066ab0(local_98," medal:",uVar14);
  if ((ulonglong)puVar15[3] < 0x10) {
    puVar11 = puVar15;
  }
  else {
    puVar11 = (undefined8 *)*puVar15;
  }
  uVar14 = puVar15[2];
  *(undefined8 *)(puVar23 + -8) = 0x1802127f5;
  FUN_1800134a0(puVar23 + 0x78,puVar11,uVar14);
  *(undefined8 *)(puVar23 + -8) = 0x1802127ff;
  FUN_18000f890(local_98);
  *(undefined8 *)(puVar23 + -8) = 0x180212809;
  FUN_18000f890(local_c0);
  lVar6 = local_140[3];
  lVar12 = local_140[2];
  puVar15 = &DAT_1809f1b60;
  if (0xf < DAT_1809f1b78) {
    puVar15 = DAT_1809f1b60;
  }
  puVar19 = *(undefined1 **)(puVar23 + 0x78);
  puVar17 = puVar23 + 0x78;
  if (0xf < (ulonglong)local_140[3]) {
    puVar17 = puVar19;
  }
  if (local_140[2] == DAT_1809f1b70) {
    if (local_140[2] != 0) {
      *(undefined8 *)(puVar23 + -8) = 0x180212850;
      iVar24 = memcmp(puVar17,puVar15,local_140[2]);
      if (iVar24 != 0) goto LAB_180212854;
    }
  }
  else {
LAB_180212854:
    puVar17 = puVar23 + 0x78;
    if (0xf < (ulonglong)lVar6) {
      puVar17 = puVar19;
    }
    *(undefined8 *)(puVar23 + -8) = 0x180212870;
    FUN_180029840(&DAT_1809f1b60,puVar17,lVar12);
    puVar19 = puVar23 + 0x78;
    if (0xf < (ulonglong)local_140[3]) {
      puVar19 = *(undefined1 **)(puVar23 + 0x78);
    }
    *(undefined8 *)(puVar23 + -8) = 0x18021288c;
    FUN_180211e80("loadout (team row: pistol/smg+heavy/rifle):%s",puVar19);
  }
  *(undefined8 *)(puVar23 + -8) = 0x180212897;
  FUN_18000f890(puVar23 + 0x78);
LAB_180212897:
  *(undefined8 *)(puVar23 + -8) = 0x1802128a3;
  return;
}



/* ===== 1802128c0 FUN_1802128c0 ===== */

void FUN_1802128c0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_18000f3a0(param_1 + 0x68);
  if (lVar1 == 0) {
    return;
  }
  (*DAT_180961bf0)(lVar1,1);
  return;
}



/* ===== 180212900 FUN_180212900 ===== */

longlong * FUN_180212900(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong local_res18;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  iVar3 = FUN_180011200(param_2 + 8);
  uVar7 = (ulonglong)iVar3;
  lVar4 = FUN_18000f3a0(param_2 + 0x10);
  if ((iVar3 - 1U < 100000) && (lVar4 != 0)) {
    lVar1 = *param_1;
    if ((ulonglong)(param_1[2] - lVar1 >> 3) < uVar7) {
      if (0x1fffffffffffffff < uVar7) {
                    /* WARNING: Subroutine does not return */
        FUN_1800118d0();
      }
      lVar2 = param_1[1];
      uVar5 = FUN_18000fb70(uVar7 * 8);
      FUN_180540530(uVar5,*param_1,param_1[1] - *param_1);
      FUN_18002b8d0(param_1,uVar5,lVar2 - lVar1 >> 3,uVar7);
    }
    uVar7 = 0;
    if (0 < iVar3) {
      do {
        local_res18 = FUN_18000f3a0(lVar4 + uVar7 * 8);
        if (local_res18 != 0) {
          FUN_1800242d0(param_1,&local_res18);
        }
        uVar6 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar6;
      } while ((int)uVar6 < iVar3);
    }
  }
  return param_1;
}



/* ===== 180212a20 FUN_180212a20 ===== */

undefined8 FUN_180212a20(void)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = (*DAT_180961e00)();
  uVar2 = 0;
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 8);
  }
  return uVar2;
}



/* ===== 180212a40 FUN_180212a40 ===== */

bool FUN_180212a40(longlong param_1,undefined8 param_2,float param_3)

{
  longlong lVar1;
  float *pfVar2;
  bool bVar3;
  float local_res18 [2];
  float local_res20 [2];
  undefined4 local_18 [4];
  
  local_res18[0] = param_3;
  lVar1 = FUN_180212a20();
  if (lVar1 == 0) {
    return false;
  }
  lVar1 = (*DAT_180961c08)(lVar1,param_2);
  bVar3 = false;
  if (lVar1 != 0) {
    local_res20[0] = 0.0;
    pfVar2 = local_res20;
    if (0.0 <= local_res18[0]) {
      pfVar2 = local_res18;
    }
    local_18[0] = (undefined4)(longlong)(*pfVar2 + DAT_1808ac1f4);
    (*DAT_180961c18)(param_1,lVar1,local_res18);
    (*DAT_180961c10)(param_1,lVar1,local_18);
    bVar3 = *(longlong *)(param_1 + 0x20) != 0;
  }
  return bVar3;
}



/* ===== 180212af0 FUN_180212af0 ===== */

void FUN_180212af0(void)

{
  (*DAT_180961be8)();
  return;
}



/* ===== 180212b10 FUN_180212b10 ===== */

void FUN_180212b10(void)

{
  if (DAT_180961b00 == (code *)0x0) {
    return;
  }
  (*DAT_180961b00)();
  return;
}



/* ===== 180212b30 FUN_180212b30 ===== */

undefined1 FUN_180212b30(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  code *pcVar2;
  
  lVar1 = FUN_18000f3a0();
  pcVar2 = (code *)FUN_18000f3a0(lVar1 + param_2 * 8);
  (*pcVar2)(param_1,param_3);
  return 1;
}



/* ===== 180212b80 FUN_180212b80 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180212b80(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  code *pcVar2;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_58;
  local_38 = *(undefined4 *)(param_1 + 0x10);
  uStack_34 = *(undefined4 *)(param_1 + 0x14);
  uStack_30 = *(undefined4 *)(param_1 + 0x18);
  uStack_2c = *(undefined4 *)(param_1 + 0x1c);
  lVar1 = FUN_18000f3a0();
  pcVar2 = (code *)FUN_18000f3a0(lVar1 + param_2 * 8);
  (*pcVar2)(param_1,&local_38,param_3,4);
  return 1;
}



/* ===== 180212bf0 FUN_180212bf0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_180212bf0(undefined8 *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined4 *puVar9;
  undefined8 *puVar10;
  undefined8 ****ppppuVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined1 *puVar15;
  undefined1 auStack_d8 [8];
  undefined1 auStack_d0 [32];
  undefined8 *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  undefined8 local_90;
  undefined8 ****local_88;
  longlong lStack_80;
  longlong local_78;
  ulonglong uStack_70;
  undefined1 local_68 [32];
  undefined1 local_48 [32];
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_d8;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0xf;
  local_a8 = 0;
  puVar10 = (undefined8 *)*param_2;
  puVar1 = (undefined8 *)param_2[1];
  puVar15 = auStack_d8;
  local_b0 = param_1;
  if (puVar10 != puVar1) {
    do {
      uVar7 = *puVar10;
      if (local_98 != 0) {
        FUN_1800134a0(&local_a8,&DAT_1806f1258,1);
      }
      uVar7 = FUN_18004e4f0(local_68,uVar7);
      uVar7 = FUN_180066ab0(local_48,&DAT_1806e17c8,uVar7);
      plVar8 = (longlong *)FUN_1800134a0(uVar7,&DAT_1806e17c8,1);
      local_88 = (undefined8 ****)*plVar8;
      lStack_80 = plVar8[1];
      local_78 = plVar8[2];
      uStack_70 = plVar8[3];
      plVar8[2] = 0;
      plVar8[3] = 0xf;
      *(undefined1 *)plVar8 = 0;
      ppppuVar11 = &local_88;
      if (0xf < uStack_70) {
        ppppuVar11 = local_88;
      }
      FUN_1800134a0(&local_a8,ppppuVar11,local_78);
      if (0xf < uStack_70) {
        uVar13 = uStack_70 + 1;
        ppppuVar11 = local_88;
        if (0xfff < uVar13) {
          ppppuVar11 = (undefined8 ****)local_88[-1];
          if (0x1f < (ulonglong)((longlong)local_88 + (-8 - (longlong)ppppuVar11))) {
            pcVar3 = (code *)swi(0x29);
            (*pcVar3)(5);
            puVar15 = auStack_d0;
            break;
          }
          uVar13 = uStack_70 + 0x28;
        }
        thunk_FUN_1803d64e0(ppppuVar11,uVar13);
      }
      FUN_18000f890(local_48);
      FUN_18000f890(local_68);
      puVar10 = puVar10 + 1;
      puVar15 = auStack_d8;
    } while (puVar10 != puVar1);
  }
  *(undefined8 *)(puVar15 + -8) = 0x180212d78;
  uVar7 = FUN_180066a20(puVar15 + 0x70,
                        "(function () { try { var root = $.GetContextPanel(); while (root && root.GetParent && root.GetParent()) root = root.GetParent(); if (!root) return; var keep = root.Data(); if (!keep.wlLoadout) return; var gone = ["
                        ,puVar15 + 0x30);
  *(undefined8 *)(puVar15 + -8) = 0x180212d8e;
  puVar9 = (undefined4 *)
           FUN_1800134a0(uVar7,
                         "]; Object.keys(keep.wlLoadout).forEach(function (key) {  var part = key.split(\'|\'); var team = part[0]; var slot = part[1];  if (gone.indexOf(LoadoutAPI.GetItemID(team, slot)) < 0) return;  LoadoutAPI.EquipItemInSlot(team, keep.wlLoadout[key] || \'0\', slot);  delete keep.wlLoadout[key]; });} catch (e) {} })();"
                         ,0x136);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar4 = puVar9[1];
  uVar5 = puVar9[2];
  uVar6 = puVar9[3];
  *(undefined4 *)param_1 = *puVar9;
  *(undefined4 *)((longlong)param_1 + 4) = uVar4;
  *(undefined4 *)(param_1 + 1) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar6;
  uVar7 = *(undefined8 *)(puVar9 + 6);
  param_1[2] = *(undefined8 *)(puVar9 + 4);
  param_1[3] = uVar7;
  *(undefined8 *)(puVar9 + 4) = 0;
  *(undefined8 *)(puVar9 + 6) = 0xf;
  *(undefined1 *)puVar9 = 0;
  *(undefined8 *)(puVar15 + -8) = 0x180212dc3;
  FUN_18000f890(puVar15 + 0x70);
  uVar13 = *(ulonglong *)(puVar15 + 0x48);
  if (0xf < uVar13) {
    uVar14 = uVar13 + 1;
    lVar2 = *(longlong *)(puVar15 + 0x30);
    lVar12 = lVar2;
    if (0xfff < uVar14) {
      lVar12 = *(longlong *)(lVar2 + -8);
      if (0x1f < (lVar2 - lVar12) - 8U) {
        pcVar3 = (code *)swi(0x29);
        (*pcVar3)(5);
        pcVar3 = (code *)swi(3);
        puVar10 = (undefined8 *)(*pcVar3)();
        return puVar10;
      }
      uVar14 = uVar13 + 0x28;
    }
    *(undefined8 *)(puVar15 + -8) = 0x180212dfd;
    thunk_FUN_1803d64e0(lVar12,uVar14);
  }
  *(undefined8 *)(puVar15 + -8) = 0x180212e10;
  return param_1;
}



/* ===== 180212e30 FUN_180212e30 ===== */

void FUN_180212e30(undefined8 *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  
  if ((((DAT_180961ab8 != 0) && (lVar2 = FUN_18000f3a0(), lVar2 != 0)) &&
      (lVar2 = FUN_18000f3a0(lVar2 + 8), lVar2 != 0)) &&
     ((lVar3 = FUN_18000f3a0(lVar2), lVar3 != 0 && (lVar3 = FUN_18000f3a0(lVar3), lVar3 != 0)))) {
    if (0xf < (ulonglong)param_1[3]) {
      param_1 = (undefined8 *)*param_1;
    }
    if (((param_1 != (undefined8 *)0x0) && (cVar1 = FUN_180200ed0(), cVar1 != '\0')) &&
       ((lVar3 = FUN_180200ff0(), lVar3 != 0 &&
        (((lVar4 = FUN_18000f3a0(lVar3), lVar4 != 0 &&
          (pcVar5 = (code *)FUN_18000f3a0(lVar4 + 0x268), DAT_180ceb448 <= pcVar5)) &&
         (pcVar5 < DAT_180ceb440)))))) {
      (*pcVar5)(lVar3,lVar2,param_1,&DAT_18070230d,1);
    }
  }
  return;
}



/* ===== 180212f10 FUN_180212f10 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_180212f10(undefined8 *param_1)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  int *piVar4;
  longlong lVar5;
  size_t sVar6;
  undefined4 *puVar7;
  uint *puVar8;
  undefined8 *puVar9;
  ulonglong *puVar10;
  undefined8 uVar11;
  uint uVar12;
  ulonglong uVar13;
  int *piVar14;
  char *_Str;
  undefined1 *puVar15;
  undefined1 *puVar16;
  char *pcVar17;
  ulonglong uVar18;
  uint uVar19;
  int iVar20;
  ulonglong uVar21;
  int iVar22;
  undefined8 uVar23;
  ulonglong uVar24;
  undefined4 unaff_XMM6_Da;
  undefined4 unaff_XMM6_Db;
  undefined4 unaff_XMM6_Dc;
  undefined4 unaff_XMM6_Dd;
  undefined1 auStack_2c8 [8];
  undefined1 auStack_2c0 [24];
  uint local_2a8;
  undefined4 local_2a0;
  undefined4 local_298;
  undefined4 local_290;
  undefined4 local_288;
  undefined8 local_278;
  undefined8 *local_270;
  uint local_268;
  uint local_264;
  int local_260 [2];
  int *local_258;
  int *piStack_250;
  int *local_248;
  undefined8 *local_240;
  int *local_238 [6];
  uint local_208;
  uint local_204;
  undefined8 local_200;
  uint local_1f8 [6];
  ulonglong local_1e0;
  ulonglong uStack_1d8;
  ulonglong local_1d0;
  ulonglong local_1c8;
  ulonglong local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  int local_198 [10];
  ulonglong local_170;
  ulonglong uStack_168;
  ulonglong local_160;
  ulonglong local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 local_138;
  int *local_128 [9];
  int *local_e0;
  char local_c8 [96];
  ulonglong local_68;
  
  puVar15 = auStack_2c8;
  local_68 = DAT_180919500 ^ (ulonglong)auStack_2c8;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  local_264 = 1;
  local_268 = 1;
  puVar16 = auStack_2c8;
  if ((DAT_180921498 != '\0') && (puVar16 = auStack_2c8, DAT_18092149a != '\0')) {
    local_270 = param_1;
    local_258 = (int *)0x0;
    piStack_250 = (int *)0x0;
    local_248 = (int *)0x0;
    piVar14 = &DAT_18092174c;
    local_240 = param_1;
    local_238[5] = (int *)param_1;
    do {
      if ((((*piVar14 != 0) &&
           (piVar4 = (int *)thunk_FUN_1804e6e50(local_258,piStack_250), piVar4 == piStack_250)) &&
          (lVar5 = FUN_180280c60(*piVar14), lVar5 != 0)) && (*(int *)(lVar5 + 0x48) == 1)) {
        if (piStack_250 == local_248) {
          FUN_18006a410(&local_258,piStack_250,piVar14);
        }
        else {
          *piStack_250 = *piVar14;
          piStack_250 = piStack_250 + 1;
        }
      }
      piVar14 = piVar14 + 0x68;
    } while (piVar14 != &DAT_180931b4c);
    local_278 = piStack_250;
    piVar14 = piStack_250;
    piVar4 = local_258;
    if (local_258 != piStack_250) {
LAB_180213028:
      iVar20 = *piVar4;
      if (0 < iVar20) {
        local_238[0] = &DAT_18092174c;
        do {
          if ((*local_238[0] == iVar20) && (local_238[0][1] == 0)) goto LAB_180213127;
          local_238[0] = local_238[0] + 0x68;
        } while (local_238[0] != &DAT_180931b4c);
        local_238[0] = &DAT_18092174c;
        do {
          if ((*local_238[0] == iVar20) && (local_238[0][1] < 0)) goto LAB_180213127;
          local_238[0] = local_238[0] + 0x68;
        } while (local_238[0] != &DAT_180931b4c);
        local_238[0] = (int *)0x0;
        goto LAB_180213086;
      }
      local_238[0] = (int *)0x0;
      local_238[1] = (int *)0x0;
      goto LAB_1802131c2;
    }
LAB_1802131cf:
    local_260[0] = DAT_18092149c;
    local_260[1] = DAT_18092149c;
    if (-1 < DAT_1809214a4) {
      local_260[1] = DAT_1809214a4;
    }
    iVar20 = DAT_1809214a8;
    if (DAT_1809214a8 < 0) {
      iVar20 = DAT_1809214a0;
    }
    local_278 = (int *)CONCAT44(iVar20,DAT_1809214a0);
    if (0 < DAT_18092149c) {
      local_128[8] = &DAT_18092174c;
      do {
        if ((*local_128[8] == DAT_18092149c) && (local_128[8][1] == 0)) goto LAB_18021324b;
        local_128[8] = local_128[8] + 0x68;
      } while (local_128[8] != &DAT_180931b4c);
      local_128[8] = &DAT_18092174c;
      do {
        if ((*local_128[8] == DAT_18092149c) && (local_128[8][1] < 0)) goto LAB_18021324b;
        local_128[8] = local_128[8] + 0x68;
      } while (local_128[8] != &DAT_180931b4c);
    }
    local_128[8] = (int *)0x0;
LAB_18021324b:
    if (0 < local_260[1]) {
      local_e0 = &DAT_18092174c;
      do {
        if ((*local_e0 == local_260[1]) && (local_e0[1] == 1)) goto LAB_18021329a;
        local_e0 = local_e0 + 0x68;
      } while (local_e0 != &DAT_180931b4c);
      local_e0 = &DAT_18092174c;
      do {
        if ((*local_e0 == local_260[1]) && (local_e0[1] < 0)) goto LAB_18021329a;
        local_e0 = local_e0 + 0x68;
      } while (local_e0 != &DAT_180931b4c);
    }
    local_e0 = (int *)0x0;
LAB_18021329a:
    if (0 < DAT_1809214a0) {
      local_128[0] = &DAT_18092174c;
      do {
        if ((*local_128[0] == DAT_1809214a0) && (local_128[0][1] == 0)) goto LAB_1802132da;
        local_128[0] = local_128[0] + 0x68;
      } while (local_128[0] != &DAT_180931b4c);
      local_128[0] = &DAT_18092174c;
      do {
        if ((*local_128[0] == DAT_1809214a0) && (local_128[0][1] < 0)) goto LAB_1802132da;
        local_128[0] = local_128[0] + 0x68;
      } while (local_128[0] != &DAT_180931b4c);
    }
    local_128[0] = (int *)0x0;
LAB_1802132da:
    if (0 < iVar20) {
      local_128[1] = &DAT_18092174c;
      do {
        if ((*local_128[1] == iVar20) && (local_128[1][1] == 1)) goto LAB_180213329;
        local_128[1] = local_128[1] + 0x68;
      } while (local_128[1] != &DAT_180931b4c);
      local_128[1] = &DAT_18092174c;
      do {
        if ((*local_128[1] == iVar20) && (local_128[1][1] < 0)) goto LAB_180213329;
        local_128[1] = local_128[1] + 0x68;
      } while (local_128[1] != &DAT_180931b4c);
    }
    local_128[1] = (int *)0x0;
LAB_180213329:
    if (((DAT_18092149c == 0) || (DAT_18092149c != local_260[1])) || (local_128[8] != local_e0)) {
      uVar23 = 0;
    }
    else {
      uVar23 = 1;
    }
    if (((DAT_1809214a0 == 0) || (DAT_1809214a0 != iVar20)) || (local_128[0] != local_128[1])) {
      bVar2 = false;
      uVar19 = 0;
    }
    else {
      bVar2 = true;
      uVar19 = 0;
    }
    do {
      pcVar17 = "t";
      if (uVar19 == 0) {
        pcVar17 = "ct";
      }
      iVar20 = local_260[uVar19];
      if ((iVar20 != 0) && (((char)uVar23 == '\0' || (uVar19 != 1)))) {
        _Str = pcVar17;
        if ((char)uVar23 != '\0') {
          _Str = "t,ct";
        }
        local_128[4] = (int *)0x0;
        local_128[5] = (int *)0x0;
        local_128[6] = (int *)0x0;
        local_128[7] = (int *)0x0;
        sVar6 = strlen(_Str);
        FUN_1800133a0(local_128 + 4,_Str,sVar6);
        FUN_180213b80(&local_270,iVar20,local_128[(ulonglong)uVar19 + 8],local_128 + 4);
      }
      iVar20 = local_260[(ulonglong)uVar19 - 6];
      if ((((iVar20 != 0) && (piVar14 = local_128[uVar19], piVar14 != (int *)0x0)) &&
          (0 < piVar14[2])) && ((!bVar2 || (uVar19 != 1)))) {
        if (bVar2) {
          pcVar17 = "t,ct";
        }
        local_128[4] = (int *)0x0;
        local_128[5] = (int *)0x0;
        local_128[6] = (int *)0x0;
        local_128[7] = (int *)0x0;
        sVar6 = strlen(pcVar17);
        FUN_1800133a0(local_128 + 4,pcVar17,sVar6);
        FUN_180213b80(&local_270,iVar20,piVar14,local_128 + 4);
      }
      uVar24 = 0;
      uVar19 = uVar19 + 1;
    } while ((int)uVar19 < 2);
    iVar20 = 0;
    do {
      uVar19 = DAT_1809214b0;
      if (iVar20 == 0) {
        uVar19 = DAT_1809214ac;
      }
      uVar18 = (ulonglong)uVar19;
      if (((uVar19 != 0) && (lVar5 = FUN_18027fb40(uVar18), lVar5 != 0)) &&
         ((*(char *)(lVar5 + 0xd0) == '\0' || (cVar3 = FUN_180276240(uVar18), cVar3 != '\0')))) {
        local_200 = 0;
        local_1f8[0] = 0;
        local_1f8[1] = 0;
        local_1f8[2] = 0;
        local_1f8[3] = 0;
        local_1f8[4] = 0;
        local_1f8[5] = 0;
        uStack_1d8 = 0;
        local_1d0 = 0;
        local_1c8 = 0xf;
        local_1e0 = 0;
        uStack_1b8 = 0;
        local_1b0 = 0;
        local_1a8 = 0xf;
        local_1c0 = 0;
        local_204 = 1;
        uVar21 = 0;
        do {
          puVar7 = &DAT_1809216bc;
          if (iVar20 != 0) {
            puVar7 = &DAT_1809216d0;
          }
          uVar12 = puVar7[uVar21];
          if (((int)uVar12 < 1) || (puVar8 = DAT_180cfc8b0, DAT_180ccfeda == '\0')) {
LAB_180213587:
            uVar12 = 0;
          }
          else {
            for (; puVar8 != DAT_180cfc8b8; puVar8 = puVar8 + 0x26) {
              if (*puVar8 == uVar12) goto LAB_180213582;
            }
            puVar8 = (uint *)0x0;
LAB_180213582:
            if (puVar8 == (uint *)0x0) goto LAB_180213587;
          }
          local_1f8[uVar21] = uVar12;
          uVar21 = uVar21 + 1;
        } while (uVar21 < 5);
        pcVar17 = "t";
        if (iVar20 == 0) {
          pcVar17 = "ct";
        }
        local_208 = uVar19;
        sVar6 = strlen(pcVar17);
        FUN_180029840(&local_1c0,pcVar17,sVar6);
        local_c8[0] = '\0';
        local_c8[1] = '\0';
        local_c8[2] = '\0';
        local_c8[3] = '\0';
        local_c8[4] = '\0';
        local_c8[5] = '\0';
        local_c8[6] = '\0';
        local_c8[7] = '\0';
        local_c8[8] = '\0';
        local_c8[9] = '\0';
        local_c8[10] = '\0';
        local_c8[0xb] = '\0';
        local_c8[0xc] = '\0';
        local_c8[0xd] = '\0';
        local_c8[0xe] = '\0';
        local_c8[0xf] = '\0';
        local_c8[0x10] = '\0';
        local_c8[0x11] = '\0';
        local_c8[0x12] = '\0';
        local_c8[0x13] = '\0';
        local_c8[0x14] = '\0';
        local_c8[0x15] = '\0';
        local_c8[0x16] = '\0';
        local_c8[0x17] = '\0';
        local_c8[0x18] = '\0';
        local_c8[0x19] = '\0';
        local_c8[0x1a] = '\0';
        local_c8[0x1b] = '\0';
        local_c8[0x1c] = '\0';
        local_c8[0x1d] = '\0';
        local_c8[0x1e] = '\0';
        local_c8[0x1f] = '\0';
        local_c8[0x20] = '\0';
        local_c8[0x21] = '\0';
        local_c8[0x22] = '\0';
        local_c8[0x23] = '\0';
        local_c8[0x24] = '\0';
        local_c8[0x25] = '\0';
        local_c8[0x26] = '\0';
        local_c8[0x27] = '\0';
        local_c8[0x28] = '\0';
        local_c8[0x29] = '\0';
        local_c8[0x2a] = '\0';
        local_c8[0x2b] = '\0';
        local_c8[0x2c] = '\0';
        local_c8[0x2d] = '\0';
        local_c8[0x2e] = '\0';
        local_c8[0x2f] = '\0';
        local_c8[0x30] = '\0';
        local_c8[0x31] = '\0';
        local_c8[0x32] = '\0';
        local_c8[0x33] = '\0';
        local_c8[0x34] = '\0';
        local_c8[0x35] = '\0';
        local_c8[0x36] = '\0';
        local_c8[0x37] = '\0';
        local_c8[0x38] = '\0';
        local_c8[0x39] = '\0';
        local_c8[0x3a] = '\0';
        local_c8[0x3b] = '\0';
        local_c8[0x3c] = '\0';
        local_c8[0x3d] = '\0';
        local_c8[0x3e] = '\0';
        local_c8[0x3f] = '\0';
        local_c8[0x40] = '\0';
        local_c8[0x41] = '\0';
        local_c8[0x42] = '\0';
        local_c8[0x43] = '\0';
        local_c8[0x44] = '\0';
        local_c8[0x45] = '\0';
        local_c8[0x46] = '\0';
        local_c8[0x47] = '\0';
        local_c8[0x48] = '\0';
        local_c8[0x49] = '\0';
        local_c8[0x4a] = '\0';
        local_c8[0x4b] = '\0';
        local_c8[0x4c] = '\0';
        local_c8[0x4d] = '\0';
        local_c8[0x4e] = '\0';
        local_c8[0x4f] = '\0';
        local_c8[0x50] = '\0';
        local_c8[0x51] = '\0';
        local_c8[0x52] = '\0';
        local_c8[0x53] = '\0';
        local_c8[0x54] = '\0';
        local_c8[0x55] = '\0';
        local_c8[0x56] = '\0';
        local_c8[0x57] = '\0';
        local_c8[0x58] = '\0';
        local_c8[0x59] = '\0';
        local_c8[0x5a] = '\0';
        local_c8[0x5b] = '\0';
        local_c8[0x5c] = '\0';
        local_c8[0x5d] = '\0';
        local_c8[0x5e] = '\0';
        local_c8[0x5f] = '\0';
        local_288 = local_1f8[4];
        local_290 = local_1f8[3];
        local_298 = local_1f8[2];
        local_2a0 = local_1f8[1];
        local_2a8 = local_1f8[0];
        snprintf(local_c8,0x60,"agent|%d|%d|%d|%d|%d|%d",uVar18);
        local_128[4] = (int *)0x0;
        local_128[5] = (int *)0x0;
        local_128[6] = (int *)0x0;
        local_128[7] = (int *)0x0;
        sVar6 = strlen(local_c8);
        FUN_1800133a0(local_128 + 4,local_c8,sVar6);
        uVar19 = local_264;
        local_268 = local_264 | 2;
        puVar9 = (undefined8 *)FUN_1800134a0(local_128 + 4,&DAT_1806e9100,1);
        local_128[0] = (int *)*puVar9;
        local_128[1] = (int *)puVar9[1];
        local_128[2] = (int *)puVar9[2];
        local_128[3] = (int *)puVar9[3];
        puVar9[2] = 0;
        puVar9[3] = 0xf;
        *(undefined1 *)puVar9 = 0;
        local_268 = uVar19 | 6;
        local_264 = local_268;
        puVar10 = (ulonglong *)FUN_1800667a0(local_128 + 8,local_128,&local_1c0);
        if (&local_1e0 != puVar10) {
          if (0xf < local_1c8) {
            uVar13 = local_1c8 + 1;
            uVar21 = local_1e0;
            if (0xfff < uVar13) {
              uVar21 = *(ulonglong *)(local_1e0 - 8);
              if (0x1f < (local_1e0 - uVar21) - 8) {
                pcVar1 = (code *)swi(0x29);
                (*pcVar1)(5);
                puVar15 = auStack_2c0;
                iVar22 = -0x7f6de930;
                goto LAB_1802139c0;
              }
              uVar13 = local_1c8 + 0x28;
            }
            thunk_FUN_1803d64e0(uVar21,uVar13);
          }
          local_1e0 = *puVar10;
          uStack_1d8 = puVar10[1];
          local_1d0 = puVar10[2];
          local_1c8 = puVar10[3];
          puVar10[2] = 0;
          puVar10[3] = 0xf;
          *(undefined1 *)puVar10 = 0;
        }
        FUN_18000f890(local_128 + 8);
        FUN_18000f890(local_128);
        FUN_18000f890(local_128 + 4);
        puVar8 = (uint *)local_240[1];
        if (puVar8 == (uint *)local_240[2]) {
          FUN_1802169e0(local_240,puVar8,&local_208);
        }
        else {
          *puVar8 = local_208;
          puVar8[1] = local_204;
          *(undefined8 *)(puVar8 + 2) = local_200;
          puVar8[4] = local_1f8[0];
          puVar8[5] = local_1f8[1];
          puVar8[6] = local_1f8[2];
          puVar8[7] = local_1f8[3];
          puVar8[8] = local_1f8[4];
          puVar8[9] = local_1f8[5];
          puVar8[10] = 0;
          puVar8[0xb] = 0;
          puVar8[0xc] = 0;
          puVar8[0xd] = 0;
          puVar8[0xe] = 0;
          puVar8[0xf] = 0;
          puVar8[0x10] = 0;
          puVar8[0x11] = 0;
          *(ulonglong *)(puVar8 + 10) = local_1e0;
          *(ulonglong *)(puVar8 + 0xc) = uStack_1d8;
          *(ulonglong *)(puVar8 + 0xe) = local_1d0;
          *(ulonglong *)(puVar8 + 0x10) = local_1c8;
          local_1d0 = 0;
          local_1c8 = 0xf;
          local_1e0 = local_1e0 & 0xffffffffffffff00;
          puVar8[0x12] = 0;
          puVar8[0x13] = 0;
          puVar8[0x14] = 0;
          puVar8[0x15] = 0;
          puVar8[0x16] = 0;
          puVar8[0x17] = 0;
          puVar8[0x18] = 0;
          puVar8[0x19] = 0;
          *(ulonglong *)(puVar8 + 0x12) = local_1c0;
          *(undefined8 *)(puVar8 + 0x14) = uStack_1b8;
          *(undefined8 *)(puVar8 + 0x16) = local_1b0;
          *(undefined8 *)(puVar8 + 0x18) = local_1a8;
          local_1b0 = 0;
          local_1a8 = 0xf;
          local_1c0 = local_1c0 & 0xffffffffffffff00;
          local_240[1] = local_240[1] + 0x68;
        }
        FUN_18000f890(&local_1c0);
        FUN_18000f890(&local_1e0);
      }
      iVar22 = DAT_1809216e4;
      iVar20 = iVar20 + 1;
    } while (iVar20 < 2);
    puVar16 = auStack_2c8;
    if (0 < DAT_1809216e4) {
      puVar16 = auStack_2c8;
      piVar14 = DAT_180cfc910;
      if (DAT_180ccfeda != '\0') {
        for (; piVar14 != DAT_180cfc918; piVar14 = piVar14 + 0x26) {
          if (*piVar14 == DAT_1809216e4) goto LAB_1802138c9;
        }
        piVar14 = (int *)0x0;
LAB_1802138c9:
        puVar16 = auStack_2c8;
        if (piVar14 != (int *)0x0) {
          uVar23 = 0;
          local_198[2] = 0;
          local_198[3] = 0;
          unaff_XMM6_Da = 0;
          unaff_XMM6_Db = 0;
          unaff_XMM6_Dc = 0;
          unaff_XMM6_Dd = 0;
          local_278 = (int *)0x0;
          local_198[4] = 0;
          local_198[5] = 0;
          local_198[6] = 0;
          local_198[7] = 0;
          local_198[8] = 0;
          uStack_168 = 0;
          local_160 = 0;
          uVar18 = 0xf;
          local_158 = 0xf;
          local_170 = 0;
          uStack_148 = 0;
          local_138 = 0xf;
          local_270 = (undefined8 *)CONCAT44(local_270._4_4_,DAT_1809f3618);
          local_198[0] = DAT_1809f3618;
          local_198[1] = 2;
          local_198[9] = DAT_1809216e4;
          local_140 = 6;
          local_150 = (ulonglong)CONCAT24(s_noteam_18070a3a8._4_2_,s_noteam_18070a3a8._0_4_);
          uVar11 = FUN_18003a390(local_128,DAT_1809216e4);
          puVar10 = (ulonglong *)FUN_180066ab0(local_128 + 4,"music|",uVar11);
          if (&local_170 != puVar10) {
            local_170 = *puVar10;
            uStack_168 = puVar10[1];
            uVar24 = puVar10[2];
            uVar18 = puVar10[3];
            puVar10[2] = 0;
            puVar10[3] = 0xf;
            *(undefined1 *)puVar10 = 0;
            puVar15 = auStack_2c8;
            local_160 = uVar24;
            local_158 = uVar18;
          }
LAB_1802139c0:
          uVar13 = uStack_168;
          uVar21 = local_170;
          *(undefined8 *)(puVar15 + -8) = 0x1802139cc;
          FUN_18000f890(local_128 + 4);
          *(undefined8 *)(puVar15 + -8) = 0x1802139d9;
          FUN_18000f890(local_128);
          puVar7 = (undefined4 *)local_240[1];
          if (puVar7 == (undefined4 *)local_240[2]) {
            *(undefined8 *)(puVar15 + -8) = 0x180213a78;
            FUN_1802169e0(local_240,puVar7,local_198);
          }
          else {
            *puVar7 = *(undefined4 *)(puVar15 + 0x58);
            puVar7[1] = 2;
            *(undefined8 *)(puVar7 + 2) = uVar23;
            puVar7[4] = unaff_XMM6_Da;
            puVar7[5] = unaff_XMM6_Db;
            puVar7[6] = unaff_XMM6_Dc;
            puVar7[7] = unaff_XMM6_Dd;
            puVar7[8] = (int)*(undefined8 *)(puVar15 + 0x50);
            puVar7[9] = iVar22;
            *(ulonglong *)(puVar7 + 10) = uVar21;
            *(ulonglong *)(puVar7 + 0xc) = uVar13;
            *(ulonglong *)(puVar7 + 0xe) = uVar24;
            *(ulonglong *)(puVar7 + 0x10) = uVar18;
            local_160 = 0;
            local_158 = 0xf;
            local_170 = local_170 & 0xffffffffffffff00;
            *(ulonglong *)(puVar7 + 0x12) = local_150;
            *(undefined8 *)(puVar7 + 0x14) = uStack_148;
            *(undefined8 *)(puVar7 + 0x16) = 6;
            *(undefined8 *)(puVar7 + 0x18) = 0xf;
            local_140 = 0;
            local_138 = 0xf;
            local_150 = local_150 & 0xffffffffffffff00;
            local_240[1] = local_240[1] + 0x68;
          }
          *(undefined8 *)(puVar15 + -8) = 0x180213a84;
          FUN_18000f890(&local_150);
          *(undefined8 *)(puVar15 + -8) = 0x180213a8d;
          FUN_18000f890(&local_170);
          puVar16 = puVar15;
        }
      }
    }
    param_1 = local_240;
    *(undefined8 **)(puVar16 + 0x50) = local_240;
    *(undefined8 *)(puVar16 + -8) = 0x180213aa9;
    FUN_180213e40(puVar16 + 0x50,DAT_1809216e8,1);
    local_238[2] = (int *)0x0;
    local_238[3] = (int *)0x0;
    local_238[4] = (int *)0x0;
    piVar14 = &DAT_1809216ec;
    do {
      iVar20 = *piVar14;
      *(int *)(puVar16 + 0x58) = iVar20;
      if (iVar20 != DAT_1809216e8) {
        *(undefined8 *)(puVar16 + -8) = 0x180213aee;
        piVar4 = (int *)thunk_FUN_1804e6e50(local_238[2],local_238[3],iVar20);
        if (piVar4 == local_238[3]) {
          if (local_238[3] == local_238[4]) {
            *(undefined8 *)(puVar16 + -8) = 0x180213b14;
            FUN_18006a410(local_238 + 2,local_238[3],puVar16 + 0x58);
          }
          else {
            *local_238[3] = iVar20;
            local_238[3] = local_238[3] + 1;
          }
          *(undefined8 *)(puVar16 + -8) = 0x180213b23;
          FUN_180213e40(puVar16 + 0x50,iVar20,0);
        }
      }
      piVar14 = piVar14 + 1;
    } while (piVar14 != &DAT_18092174c);
    *(undefined8 *)(puVar16 + -8) = 0x180213b35;
    FUN_180068f30(local_238 + 2);
    *(undefined8 *)(puVar16 + -8) = 0x180213b40;
    FUN_180068f30(puVar16 + 0x70);
  }
  *(undefined8 *)(puVar16 + -8) = 0x180213b55;
  return param_1;
LAB_180213127:
LAB_180213086:
  local_238[1] = &DAT_18092174c;
  do {
    if ((*local_238[1] == iVar20) && (local_238[1][1] == 1)) goto LAB_1802130c0;
    local_238[1] = local_238[1] + 0x68;
  } while (local_238[1] != &DAT_180931b4c);
  local_238[1] = &DAT_18092174c;
  do {
    if ((*local_238[1] == iVar20) && (local_238[1][1] < 0)) goto LAB_1802130c0;
    local_238[1] = local_238[1] + 0x68;
  } while (local_238[1] != &DAT_180931b4c);
  local_238[1] = (int *)0x0;
LAB_1802130c0:
  if (local_238[0] == local_238[1]) {
    if ((local_238[0] != (int *)0x0) && (0 < local_238[0][2])) {
      local_128[1] = (int *)0x0;
      local_128[2] = (int *)0x4;
      local_128[3] = (int *)0xf;
      local_128[0] = (int *)(ulonglong)DAT_18070a878;
      FUN_180213b80(&local_270,iVar20,local_238[0],local_128);
    }
  }
  else {
    uVar19 = 0;
    do {
      piVar14 = local_238[uVar19];
      if ((piVar14 != (int *)0x0) && (0 < piVar14[2])) {
        pcVar17 = "t";
        if (uVar19 == 0) {
          pcVar17 = "ct";
        }
        local_128[0] = (int *)0x0;
        local_128[1] = (int *)0x0;
        local_128[2] = (int *)0x0;
        local_128[3] = (int *)0x0;
        sVar6 = strlen(pcVar17);
        FUN_1800133a0(local_128,pcVar17,sVar6);
        FUN_180213b80(&local_270,iVar20,piVar14,local_128);
      }
      uVar19 = uVar19 + 1;
    } while ((int)uVar19 < 2);
    piVar14 = local_278;
  }
LAB_1802131c2:
  piVar4 = piVar4 + 1;
  if (piVar4 == piVar14) goto LAB_1802131cf;
  goto LAB_180213028;
}



/* ===== 180213b80 FUN_180213b80 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180213b80(undefined8 param_1,undefined4 param_2,undefined8 param_3,ulonglong *param_4)

{
  longlong lVar1;
  undefined4 *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulonglong *puVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined1 auStack_178 [8];
  undefined1 auStack_170 [24];
  undefined4 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined4 local_138;
  undefined4 local_134;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f8;
  ulonglong local_f0;
  ulonglong uStack_e8;
  undefined8 *local_e0;
  ulonglong local_d8;
  ulonglong *local_c8;
  ulonglong local_c0;
  ulonglong uStack_b8;
  ulonglong local_b0;
  ulonglong uStack_a8;
  undefined1 local_a0 [32];
  undefined1 local_80 [32];
  ulonglong local_60;
  
  local_60 = DAT_180919500 ^ (ulonglong)auStack_178;
  local_134 = 0;
  local_150 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_118 = 0;
  uStack_108 = 0;
  uVar11 = 0;
  local_100 = 0;
  uVar13 = 0xf;
  local_f8 = 0xf;
  local_110 = 0;
  uStack_e8 = 0;
  puVar12 = (undefined8 *)0x0;
  local_e0 = (undefined8 *)0x0;
  local_d8 = 0xf;
  local_f0 = 0;
  local_158 = param_2;
  local_148 = param_1;
  local_140 = param_3;
  local_138 = param_2;
  local_130 = param_3;
  local_c8 = param_4;
  uVar5 = FUN_1800dff20(local_80);
  puVar6 = (ulonglong *)FUN_1800134a0(uVar5,&DAT_1806e9100,1);
  local_c0 = *puVar6;
  uStack_b8 = puVar6[1];
  local_b0 = puVar6[2];
  uStack_a8 = puVar6[3];
  puVar6[2] = 0;
  puVar6[3] = 0xf;
  *(undefined1 *)puVar6 = 0;
  puVar7 = (undefined8 *)FUN_1800667a0(local_a0,&local_c0,param_4);
  if (&local_110 != puVar7) {
    local_110 = *puVar7;
    uStack_108 = puVar7[1];
    uVar11 = puVar7[2];
    uVar13 = puVar7[3];
    puVar7[2] = 0;
    puVar7[3] = 0xf;
    *(undefined1 *)puVar7 = 0;
    local_100 = uVar11;
    local_f8 = uVar13;
  }
  uVar4 = uStack_108;
  uVar5 = local_110;
  FUN_18000f890(local_a0);
  if (0xf < uStack_a8) {
    uVar9 = uStack_a8 + 1;
    uVar8 = local_c0;
    if (0xfff < uVar9) {
      uVar8 = *(ulonglong *)(local_c0 - 8);
      if (0x1f < (local_c0 - uVar8) - 8) {
        pcVar3 = (code *)swi(0x29);
        (*pcVar3)(5);
        puVar10 = auStack_170;
        goto LAB_180213d60;
      }
      uVar9 = uStack_a8 + 0x28;
    }
    thunk_FUN_1803d64e0(uVar8,uVar9);
  }
  puVar7 = (undefined8 *)0x0;
  local_b0 = 0;
  uStack_a8 = 0xf;
  local_c0 = local_c0 & 0xffffffffffffff00;
  FUN_18000f890(local_80);
  puVar10 = auStack_178;
  if (&local_f0 != param_4) {
    local_f0 = *param_4;
    uStack_e8 = param_4[1];
    puVar12 = (undefined8 *)param_4[2];
    local_d8 = param_4[3];
    param_4[2] = 0;
    param_4[3] = 0xf;
    *(undefined1 *)param_4 = 0;
    puVar10 = auStack_178;
    local_e0 = puVar12;
  }
LAB_180213d60:
  lVar1 = **(longlong **)(puVar10 + 0x30);
  puVar2 = *(undefined4 **)(lVar1 + 8);
  if (puVar2 == *(undefined4 **)(lVar1 + 0x10)) {
    *(undefined8 *)(puVar10 + -8) = 0x180213df1;
    FUN_1802169e0(lVar1,puVar2,puVar10 + 0x40);
  }
  else {
    *puVar2 = *(undefined4 *)(puVar10 + 0x20);
    puVar2[1] = 0;
    *(undefined8 *)(puVar2 + 2) = *(undefined8 *)(puVar10 + 0x38);
    *(undefined8 *)(puVar2 + 4) = 0;
    *(undefined8 *)(puVar2 + 6) = 0;
    puVar2[8] = (int)*(undefined8 *)(puVar10 + 0x28);
    puVar2[9] = 0;
    *(undefined8 *)(puVar2 + 10) = uVar5;
    *(undefined8 *)(puVar2 + 0xc) = uVar4;
    *(undefined8 *)(puVar2 + 0xe) = uVar11;
    *(undefined8 *)(puVar2 + 0x10) = uVar13;
    *(undefined8 **)(puVar10 + 0x78) = puVar7;
    local_f8 = 0xf;
    puVar10[0x68] = 0;
    *(ulonglong *)(puVar2 + 0x12) = local_f0;
    *(ulonglong *)(puVar2 + 0x14) = uStack_e8;
    *(undefined8 **)(puVar2 + 0x16) = puVar12;
    *(ulonglong *)(puVar2 + 0x18) = local_d8;
    local_d8 = 0xf;
    local_f0 = local_f0 & 0xffffffffffffff00;
    *(longlong *)(lVar1 + 8) = *(longlong *)(lVar1 + 8) + 0x68;
    local_e0 = puVar7;
  }
  *(undefined8 *)(puVar10 + -8) = 0x180213dfb;
  FUN_18000f890(&local_f0);
  *(undefined8 *)(puVar10 + -8) = 0x180213e05;
  FUN_18000f890(puVar10 + 0x68);
  *(undefined8 *)(puVar10 + -8) = 0x180213e0e;
  FUN_18000f890(param_4);
  *(undefined8 *)(puVar10 + -8) = 0x180213e1a;
  return;
}



/* ===== 180213e40 FUN_180213e40 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180213e40(longlong *param_1,int param_2,char param_3)

{
  int *piVar1;
  code *pcVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  size_t sVar7;
  undefined8 uVar8;
  ulonglong *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  char *_Str;
  undefined1 *puVar12;
  char *_Str_00;
  undefined1 auStack_168 [8];
  undefined1 auStack_160 [40];
  int local_138;
  int local_134;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  ulonglong local_110;
  ulonglong uStack_108;
  ulonglong local_100;
  ulonglong local_f8;
  ulonglong local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  ulonglong local_c8;
  ulonglong uStack_c0;
  undefined1 local_a8 [32];
  undefined1 local_88 [32];
  ulonglong local_68;
  
  if (param_2 < 1) {
    return;
  }
  local_68 = DAT_180919500 ^ (ulonglong)auStack_168;
  lVar6 = FUN_180280f20(param_2);
  puVar12 = auStack_168;
  if (lVar6 == 0) goto LAB_1802140cd;
  local_130 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_118 = 0;
  uStack_108 = 0;
  local_100 = 0;
  local_f8 = 0xf;
  local_110 = 0;
  uStack_e8 = 0;
  local_e0 = 0;
  local_d8 = 0xf;
  local_f0 = 0;
  local_134 = 3;
  _Str_00 = "";
  _Str = "";
  if (param_3 != '\0') {
    _Str = "noteam";
  }
  local_138 = param_2;
  sVar7 = strlen(_Str);
  FUN_180029840(&local_f0,_Str,sVar7);
  uVar8 = FUN_18003a390(local_88,param_2);
  uVar8 = FUN_180066ab0(local_a8,"medal|",uVar8);
  if (param_3 != '\0') {
    _Str_00 = "|shown";
  }
  sVar7 = strlen(_Str_00);
  puVar9 = (ulonglong *)FUN_1800134a0(uVar8,_Str_00,sVar7);
  uVar3 = *puVar9;
  uStack_c0 = puVar9[1];
  uVar4 = puVar9[2];
  uVar5 = puVar9[3];
  puVar9[2] = 0;
  puVar9[3] = 0xf;
  *(undefined1 *)puVar9 = 0;
  local_c8 = uVar3;
  if (local_f8 < 0x10) {
LAB_180213fab:
    uStack_108 = uStack_c0;
    local_110 = uVar3;
    local_100 = uVar4;
    local_f8 = uVar5;
    FUN_18000f890(local_a8);
    FUN_18000f890(local_88);
    puVar12 = auStack_168;
    lVar6 = *param_1;
    piVar1 = *(int **)(lVar6 + 8);
    if (piVar1 == *(int **)(lVar6 + 0x10)) goto LAB_1802140ae;
    *piVar1 = local_138;
    piVar1[1] = local_134;
    *(undefined8 *)(piVar1 + 2) = local_130;
    *(undefined8 *)(piVar1 + 4) = local_128;
    *(undefined8 *)(piVar1 + 6) = uStack_120;
    piVar1[8] = (int)local_118;
    piVar1[9] = local_118._4_4_;
    piVar1[10] = 0;
    piVar1[0xb] = 0;
    piVar1[0xc] = 0;
    piVar1[0xd] = 0;
    piVar1[0xe] = 0;
    piVar1[0xf] = 0;
    piVar1[0x10] = 0;
    piVar1[0x11] = 0;
    *(ulonglong *)(piVar1 + 10) = local_110;
    *(ulonglong *)(piVar1 + 0xc) = uStack_108;
    *(ulonglong *)(piVar1 + 0xe) = local_100;
    *(ulonglong *)(piVar1 + 0x10) = local_f8;
    local_100 = 0;
    local_f8 = 0xf;
    local_110 = local_110 & 0xffffffffffffff00;
    piVar1[0x12] = 0;
    piVar1[0x13] = 0;
    piVar1[0x14] = 0;
    piVar1[0x15] = 0;
    piVar1[0x16] = 0;
    piVar1[0x17] = 0;
    piVar1[0x18] = 0;
    piVar1[0x19] = 0;
    *(ulonglong *)(piVar1 + 0x12) = local_f0;
    *(undefined8 *)(piVar1 + 0x14) = uStack_e8;
    *(undefined8 *)(piVar1 + 0x16) = local_e0;
    *(undefined8 *)(piVar1 + 0x18) = local_d8;
    local_e0 = 0;
    local_d8 = 0xf;
    local_f0 = local_f0 & 0xffffffffffffff00;
    *(longlong *)(lVar6 + 8) = *(longlong *)(lVar6 + 8) + 0x68;
    puVar12 = auStack_168;
  }
  else {
    uVar11 = local_f8 + 1;
    uVar10 = local_110;
    if (uVar11 < 0x1000) {
LAB_180213fa6:
      thunk_FUN_1803d64e0(uVar10,uVar11);
      goto LAB_180213fab;
    }
    uVar10 = *(ulonglong *)(local_110 - 8);
    if ((local_110 - uVar10) - 8 < 0x20) {
      uVar11 = local_f8 + 0x28;
      goto LAB_180213fa6;
    }
    pcVar2 = (code *)swi(0x29);
    (*pcVar2)(5);
    puVar12 = auStack_160;
LAB_1802140ae:
    *(undefined8 *)(puVar12 + -8) = 0x1802140b8;
    FUN_1802169e0();
  }
  *(undefined8 *)(puVar12 + -8) = 0x1802140c3;
  FUN_18000f890(puVar12 + 0x78);
  *(undefined8 *)(puVar12 + -8) = 0x1802140cd;
  FUN_18000f890(puVar12 + 0x58);
LAB_1802140cd:
  *(undefined8 *)(puVar12 + -8) = 0x1802140d9;
  return;
}



/* ===== 180214100 FUN_180214100 ===== */

void FUN_180214100(longlong param_1)

{
  FUN_18000f890(param_1 + 0x48);
  FUN_18000f890(param_1 + 0x28);
  return;
}



/* ===== 180214120 FUN_180214120 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_180214120(undefined8 *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined8 *local_40;
  undefined1 local_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_68;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  local_48 = 1;
  lVar2 = param_2[1];
  local_40 = param_1;
  for (lVar4 = *param_2; lVar4 != lVar2; lVar4 = lVar4 + 0x68) {
    puVar3 = (undefined8 *)FUN_180073a70(local_38,lVar4 + 0x28,&DAT_1806e6a94);
    puVar1 = puVar3 + 2;
    if (0xf < (ulonglong)puVar3[3]) {
      puVar3 = (undefined8 *)*puVar3;
    }
    FUN_1800134a0(param_1,puVar3,*puVar1);
    FUN_18000f890(local_38);
  }
  return param_1;
}



/* ===== 1802141f0 FUN_1802141f0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_1802141f0(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  undefined8 uVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  int *piVar11;
  int *piVar12;
  ulonglong uVar13;
  char *pcVar14;
  undefined4 uVar15;
  int iVar16;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  int local_f0;
  longlong local_e8;
  char *local_e0;
  int local_d8 [4];
  undefined8 local_c8;
  int local_c0;
  longlong local_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_58;
  
  local_58 = DAT_180919500 ^ (ulonglong)auStack_118;
  local_b0 = param_2;
  local_a8 = param_1;
  if (param_3[1] == 0) {
    lVar7 = FUN_180280c60(*param_3);
  }
  else {
    lVar7 = 0;
  }
  if (param_3[1] == 1) {
    lVar8 = FUN_18027fb40(*param_3);
  }
  else {
    lVar8 = 0;
  }
  if (param_3[1] == 3) {
    lVar9 = FUN_180280f20(*param_3);
  }
  else {
    lVar9 = 0;
  }
  if ((lVar7 == 0 && (lVar8 == 0 && lVar9 == 0)) && (param_3[1] != 2)) {
    FUN_180211e80("add | def %d unknown to the item list",*param_3);
    return 0;
  }
  lVar10 = FUN_180212af0();
  if (lVar10 == 0) {
    FUN_180211e80("add | CEconItem not created | def %d",*param_3);
    return 0;
  }
  local_c8 = FUN_18000f3a0(param_1 + 0x10);
  lVar2 = *(longlong *)(param_3 + 2);
  if (lVar2 == 0) {
    iVar16 = 0;
  }
  else {
    iVar16 = *(int *)(lVar2 + 8);
  }
  if ((lVar7 == 0) || (1 < *(int *)(lVar7 + 0x48) - 2U)) {
    bVar3 = false;
    if (lVar7 != 0) goto LAB_1802142f7;
LAB_18021430d:
    bVar4 = false;
  }
  else {
    bVar3 = true;
LAB_1802142f7:
    if (((lVar2 == 0) || (*(char *)(lVar2 + 0x14) == '\0')) || (*(int *)(lVar7 + 0x48) == 3))
    goto LAB_18021430d;
    bVar4 = true;
  }
  if (bVar3) {
    uVar15 = 3;
  }
  else {
    uVar15 = 4;
    if (bVar4) {
      uVar15 = 9;
    }
  }
  local_d8[3] = 0xf;
  local_d8[1] = 0;
  if (lVar8 == 0) {
    if (lVar9 == 0) {
      if (param_3[1] == 2) {
        local_d8[2] = 3;
      }
      else if (bVar3) {
        local_d8[2] = 6;
      }
      else {
        local_d8[2] = FUN_180280fe0(*param_3,iVar16);
      }
    }
    else {
      local_d8[2] = *(int *)(lVar9 + 0x68);
    }
  }
  else {
    local_d8[2] = *(int *)(lVar8 + 200);
  }
  piVar12 = local_d8 + 1;
  if (-1 < local_d8[2]) {
    piVar12 = local_d8 + 2;
  }
  piVar11 = local_d8 + 3;
  if (local_d8[2] < 0x10) {
    piVar11 = piVar12;
  }
  local_b8 = DAT_180cec7e0;
  DAT_180cec7e0 = DAT_180cec7e0 + 1;
  iVar1 = *piVar11;
  local_c0 = iVar1;
  FUN_1800239d0(lVar10 + 0x10,&local_b8);
  FUN_1800239d0(lVar10 + 0x18,&local_b8);
  local_d8[0] = (int)local_c8;
  FUN_180013280(lVar10 + 0x28,local_d8);
  local_d8[0] = DAT_180cec710;
  DAT_180cec710 = DAT_180cec710 + 1;
  DAT_180cc4c89 = 1;
  FUN_180013280(lVar10 + 0x2c,local_d8);
  local_d8[0]._0_2_ = *(undefined2 *)param_3;
  FUN_180066890(lVar10 + 0x30,local_d8);
  local_d8[0] = CONCAT22(local_d8[0]._2_2_,(((ushort)iVar1 & 0xf) << 6 | (ushort)uVar15 | 0x10) << 5
                        );
  FUN_180066890(lVar10 + 0x32,local_d8);
  lVar7 = *(longlong *)(param_3 + 2);
  if (lVar7 != 0) {
    if (0 < iVar16) {
      cVar6 = FUN_180212a40(lVar10,"set item texture prefab");
      pcVar14 = "not taken";
      if (cVar6 != '\0') {
        pcVar14 = "written";
      }
      FUN_180211e80("add | def %d | item attributes %s",*param_3,pcVar14);
      FUN_180212a40(lVar10,"set item texture seed");
      local_c8 = CONCAT44(local_c8._4_4_,0x3f800000);
      local_d8[0] = 0;
      FUN_180212a40(lVar10,"set item texture wear");
    }
    if (bVar4) {
      FUN_180212a40(lVar10,"kill eater");
      FUN_180212a40(lVar10,"kill eater score type");
    }
    local_98 = 0;
    uStack_90 = 0;
    uVar13 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    uStack_60 = 0;
    do {
      if (0 < *(int *)(lVar7 + 0xe0 + uVar13 * 0x1c)) {
        snprintf(&local_98,0x40,"sticker slot %zu id",uVar13);
        FUN_180212a40(lVar10,&local_98);
        snprintf(&local_98,0x40,"sticker slot %zu schema",uVar13);
        FUN_180212a40(lVar10,&local_98);
        snprintf(&local_98,0x40,"sticker slot %zu wear",uVar13);
        FUN_180212a40(lVar10,&local_98);
        snprintf(&local_98,0x40,"sticker slot %zu scale",uVar13);
        FUN_180212a40(lVar10,&local_98);
        snprintf(&local_98,0x40,"sticker slot %zu rotation",uVar13);
        FUN_180212a40(lVar10,&local_98);
        snprintf(&local_98,0x40,"sticker slot %zu offset x",uVar13);
        FUN_180212a40(lVar10,&local_98);
        snprintf(&local_98,0x40,"sticker slot %zu offset y",uVar13);
        FUN_180212a40(lVar10,&local_98);
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 < 6);
    if (0 < *(int *)(lVar7 + 0x188)) {
      FUN_180212a40(lVar10,"keychain slot 0 id");
      FUN_180212a40(lVar10,"keychain slot 0 seed");
      FUN_180212a40(lVar10,"keychain slot 0 offset x");
      FUN_180212a40(lVar10,"keychain slot 0 offset y");
      FUN_180212a40(lVar10,"keychain slot 0 offset z");
      if (0 < *(int *)(lVar7 + 0x19c)) {
        FUN_180212a40(lVar10,"keychain slot 0 sticker");
      }
    }
  }
  pcVar14 = "not taken";
  bVar3 = true;
  if (param_3[1] == 1) {
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    uStack_60 = 0;
    if (0 < (int)param_3[4]) {
      snprintf(&local_98,0x40,"sticker slot %zu id",0);
      FUN_180212a40(lVar10,&local_98);
    }
    if (0 < (int)param_3[5]) {
      snprintf(&local_98,0x40,"sticker slot %zu id",1);
      FUN_180212a40(lVar10,&local_98);
    }
    if (0 < (int)param_3[6]) {
      snprintf(&local_98,0x40,"sticker slot %zu id",2);
      FUN_180212a40(lVar10,&local_98);
    }
    if (0 < (int)param_3[7]) {
      snprintf(&local_98,0x40,"sticker slot %zu id",3);
      FUN_180212a40(lVar10,&local_98);
    }
    if (0 < (int)param_3[8]) {
      snprintf(&local_98,0x40,"sticker slot %zu id",4);
      FUN_180212a40(lVar10,&local_98);
    }
  }
  if (param_3[1] == 2) {
    cVar6 = FUN_180212a40(lVar10,"music id");
    if (cVar6 != '\0') {
      pcVar14 = "written";
    }
    FUN_180211e80("add | def %d | music kit %d %s",*param_3,param_3[9],pcVar14);
  }
  uVar5 = local_b0;
  cVar6 = FUN_180212b30(local_b0,1,lVar10);
  if (cVar6 == '\0') {
    FUN_180211e80("add | cache refused | def %d",*param_3);
    return 0;
  }
  cVar6 = FUN_180212b80(local_a8,0,lVar10);
  lVar7 = local_b8;
  if (cVar6 == '\0') {
    FUN_180211e80("add | SOCreated faulted | def %d",*param_3);
    FUN_180212b30(uVar5,3,lVar10);
    return 0;
  }
  lVar8 = FUN_180212b10(local_b8);
  if (lVar8 != 0) {
    iVar1 = param_3[1];
    if (iVar1 == 0) {
      if (*(longlong *)(param_3 + 2) != 0) {
        cVar6 = FUN_1800dfa60(lVar8);
LAB_1802149a7:
        if (cVar6 != '\0') goto LAB_1802149ad;
      }
    }
    else if (iVar1 == 1) {
      piVar12 = param_3 + 4;
      if (param_3 != param_3 + 5) {
        do {
          if (0 < *piVar12) {
            cVar6 = FUN_1800dfaa0(lVar8,param_3 + 4);
            goto LAB_1802149a7;
          }
          piVar12 = piVar12 + 1;
        } while (piVar12 != param_3 + 9);
      }
    }
    else if ((iVar1 == 2) && (0 < (int)param_3[9])) {
      cVar6 = FUN_1800dfac0(lVar8);
      goto LAB_1802149a7;
    }
  }
  bVar3 = false;
LAB_1802149ad:
  local_e0 = "";
  if (bVar3) {
    local_e0 = " dressed";
  }
  local_f0 = local_c0;
  local_f8 = uVar15;
  local_e8 = lVar8;
  FUN_180211e80("add | def %d | kit %d | id %llu | quality %d | rarity %d | view %p%s",*param_3,
                iVar16,lVar7);
  return lVar10;
}



/* ===== 180214a20 FUN_180214a20 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180214a20(undefined1 param_1,char *param_2)

{
  int iVar1;
  size_t sVar2;
  undefined8 *_Buf1;
  
  sVar2 = strlen(param_2);
  _Buf1 = &DAT_1809f1ba0;
  if (0xf < DAT_1809f1bb8) {
    _Buf1 = DAT_1809f1ba0;
  }
  if (DAT_1809f1bb0 == sVar2) {
    if (DAT_1809f1bb0 == 0) goto LAB_180214aaf;
    iVar1 = memcmp(_Buf1,param_2,DAT_1809f1bb0);
    if (iVar1 == 0) goto LAB_180214aaf;
  }
  FUN_180029840(&DAT_1809f1ba0,param_2,sVar2);
  FUN_180211e80("state | %s | items %zu",param_2,
                (DAT_180cec798 - DAT_180cec790 >> 4) * 0xf83e0f83e0f83e1);
LAB_180214aaf:
  iVar1 = FUN_1804e4d70(&DAT_1809f1af0);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809f1b3c == 0x7fffffff) {
    DAT_1809f1b3c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  _DAT_180cec6a4 = (int)(DAT_180cec798 - DAT_180cec790 >> 4) * 0x3e0f83e1;
  DAT_180cec6a0 = param_1;
  snprintf(&DAT_180cec6a8,0x60,&DAT_1806d3198,param_2);
  FUN_1804e4e90(&DAT_1809f1af0);
  return;
}



/* ===== 180214b40 FUN_180214b40 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180214b40(void)

{
  size_t sVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  byte bVar5;
  bool bVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  longlong *plVar13;
  char cVar14;
  int iVar15;
  uint uVar16;
  longlong lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  longlong *plVar20;
  longlong *plVar21;
  longlong lVar22;
  longlong lVar23;
  longlong *plVar24;
  undefined8 uVar25;
  byte extraout_var;
  ulonglong uVar26;
  undefined8 *puVar27;
  undefined8 *puVar28;
  ulonglong uVar29;
  undefined8 ******ppppppuVar30;
  undefined8 *puVar31;
  undefined8 ******ppppppuVar32;
  char *pcVar33;
  undefined4 *puVar34;
  longlong *plVar35;
  undefined4 *puVar36;
  int iVar37;
  undefined8 *puVar38;
  undefined1 *puVar39;
  undefined1 *puVar40;
  uint uVar41;
  size_t sVar42;
  ulonglong uVar43;
  bool bVar44;
  ulonglong *puVar45;
  undefined8 uStack_470;
  undefined1 auStack_468 [8];
  undefined1 auStack_460 [24];
  longlong local_448;
  longlong local_440;
  longlong local_438;
  longlong local_430;
  int local_428;
  undefined4 local_420;
  longlong local_418;
  longlong local_410 [3];
  undefined4 *local_3f8 [2];
  longlong local_3e8;
  ULONGLONG local_3e0;
  undefined8 *local_3d8;
  undefined8 *puStack_3d0;
  undefined8 *local_3c8;
  longlong local_3c0;
  longlong lStack_3b8;
  undefined8 local_3b0;
  longlong local_3a8;
  longlong *local_3a0;
  longlong *plStack_398;
  undefined8 local_390;
  ulonglong uStack_388;
  undefined8 local_380;
  ulonglong local_378;
  ulonglong uStack_370;
  ulonglong local_368;
  ulonglong local_360;
  char *local_358;
  undefined8 uStack_350;
  longlong local_348;
  undefined8 local_340;
  char *local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 ******local_318 [2];
  size_t local_308;
  ulonglong local_300;
  longlong local_2f8;
  undefined8 local_2f0;
  undefined4 local_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  ulonglong local_2d0;
  ulonglong local_2c8;
  undefined4 local_2c0;
  undefined1 local_2bc;
  undefined4 local_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined8 uStack_2ac;
  undefined1 uStack_2a4;
  undefined4 uStack_2a0;
  undefined8 uStack_29c;
  undefined8 uStack_294;
  undefined8 local_28c;
  undefined8 uStack_284;
  undefined8 local_27c;
  undefined8 uStack_274;
  undefined8 local_26c;
  undefined8 uStack_264;
  undefined1 local_25c;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined4 local_188;
  undefined8 local_184;
  undefined8 local_17c;
  undefined8 local_174;
  undefined4 local_16c;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_14c;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined4 local_138;
  undefined4 local_134;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined4 local_104;
  undefined8 local_100;
  ULONGLONG local_f8;
  undefined2 local_f0;
  undefined8 ******local_e8;
  longlong lStack_e0;
  longlong local_d8;
  ulonglong uStack_d0;
  undefined1 local_c8 [32];
  undefined1 local_a8 [32];
  ulonglong local_88;
  
  local_88 = DAT_180919500 ^ (ulonglong)auStack_468;
  bVar44 = false;
  local_3a0 = (longlong *)((ulonglong)local_3a0 & 0xffffffff00000000);
  FUN_180280530();
  FUN_180212200();
  local_3e0 = GetTickCount64();
  puVar40 = auStack_468;
  if (local_3e0 - _DAT_180cec800 < 500) goto LAB_1802161f9;
  _DAT_180cec800 = local_3e0;
  if (DAT_1811150cc == '\0') {
    DAT_1811150cc = '\x01';
    local_420 = DAT_180961c24;
    local_428 = DAT_180961c20;
    local_430 = DAT_180961e00;
    local_438 = DAT_180961c18;
    local_440 = DAT_180961c10;
    local_448 = DAT_180961c08;
    FUN_180211e80("functions | manager %p | create %p | find cache %p | attribute %p | set uint %p | set float %p | item system %p | inventory offset %#x | equip %#x"
                  ,DAT_180961ad8,DAT_180961be8,DAT_180961bf0);
  }
  puVar40 = auStack_468;
  if (((((DAT_180961ad8 == (code *)0x0) || (puVar40 = auStack_468, DAT_180961be8 == 0)) ||
       (puVar40 = auStack_468, DAT_180961bf0 == 0)) ||
      ((puVar40 = auStack_468, DAT_180961c08 == 0 || (puVar40 = auStack_468, DAT_180961c10 == 0))))
     || ((puVar40 = auStack_468, DAT_180961c18 == 0 ||
         ((puVar40 = auStack_468, DAT_180961e00 == 0 || (puVar40 = auStack_468, DAT_180961c20 == 0))
         )))) {
LAB_1802161eb:
    pcVar33 = "the game\'s inventory functions weren\'t found";
  }
  else {
    lVar17 = FUN_180211f50();
    local_3a8 = lVar17;
    if (lVar17 == 0) {
      pcVar33 = "no local inventory yet";
      puVar40 = auStack_468;
    }
    else {
      if (lVar17 != DAT_180cec830) {
        uVar18 = FUN_18000f3a0(lVar17 + 0x10);
        uVar19 = FUN_18000f3a0(lVar17 + 0x68);
        FUN_180211e80("inventory | %p | cache %p | owner %llu",lVar17,uVar19,uVar18);
        plVar24 = DAT_180cec798;
        plVar35 = DAT_180cec790;
        DAT_180cec830 = lVar17;
        if (DAT_180cec790 != DAT_180cec798) {
          do {
            FUN_18000f890(plVar35 + 3);
            plVar35 = plVar35 + 0x42;
          } while (plVar35 != plVar24);
          DAT_180cec798 = DAT_180cec790;
        }
        DAT_1809f1b50 = 0;
        puVar28 = &DAT_1809f1b40;
        if (0xf < DAT_1809f1b58) {
          puVar28 = DAT_1809f1b40;
        }
        *(undefined1 *)puVar28 = 0;
        DAT_180cec710 = 0;
        DAT_180cec7e0 = 0;
      }
      puVar40 = auStack_468;
      puVar39 = auStack_468;
      local_418 = FUN_1802128c0(lVar17);
      if (local_418 != 0) {
        FUN_180212900(&local_3a0,local_418);
        plVar35 = DAT_180cec798;
        plVar24 = DAT_180cec790;
        if (DAT_180cec790 != DAT_180cec798) {
          do {
            plVar20 = (longlong *)thunk_FUN_1804e6f30(local_3a0,plStack_398,*plVar24);
            if (plVar20 == plStack_398) {
              FUN_180211e80("lost | def %d | id %llu",(int)plVar24[2],plVar24[1]);
              break;
            }
            plVar24 = plVar24 + 0x42;
          } while (plVar24 != plVar35);
          if (plVar24 != plVar35) {
            plVar20 = plVar24 + 0x42;
            plVar21 = DAT_180cec798;
            if (plVar20 != plVar35) {
              do {
                plVar21 = (longlong *)thunk_FUN_1804e6f30(local_3a0,plStack_398,*plVar20);
                if (plVar21 == plStack_398) {
                  FUN_180211e80("lost | def %d | id %llu",(int)plVar20[2],plVar20[1]);
                }
                else {
                  FUN_1802164e0(plVar24,plVar20);
                  plVar24 = plVar24 + 0x42;
                }
                plVar20 = plVar20 + 0x42;
              } while (plVar20 != plVar35);
              plVar21 = DAT_180cec798;
              if (plVar24 == plVar35) goto LAB_180214e9c;
            }
            while( true ) {
              plVar13 = DAT_180cec798;
              bVar6 = plVar35 == DAT_180cec798;
              plVar20 = plVar24;
              DAT_180cec798 = plVar21;
              if (bVar6) break;
              FUN_1802164e0(plVar24,plVar35);
              plVar24 = plVar24 + 0x42;
              plVar35 = plVar35 + 0x42;
              plVar21 = DAT_180cec798;
              DAT_180cec798 = plVar13;
            }
            for (; plVar20 != plVar21; plVar20 = plVar20 + 0x42) {
              FUN_18000f890(plVar20 + 3);
            }
            DAT_180cec798 = plVar24;
          }
        }
LAB_180214e9c:
        FUN_1800132b0(&local_3a0);
        plVar24 = DAT_180cec798;
        if (DAT_180cec790 != DAT_180cec798) {
          plVar35 = DAT_180cec790 + 0x3c;
          plVar20 = DAT_180cec790;
          do {
            if (*(char *)((longlong)plVar20 + 0x3c) == '\0') {
              for (plVar21 = plVar35; plVar21 != (longlong *)((longlong)plVar20 + 500);
                  plVar21 = (longlong *)((longlong)plVar21 + 4)) {
                if (0 < (int)*plVar21) goto LAB_180214efc;
              }
              if (0 < *(int *)((longlong)plVar20 + 500)) goto LAB_180214efc;
            }
            else {
LAB_180214efc:
              lVar17 = FUN_180212b10();
              if (lVar17 != 0) {
                lVar23 = plVar20[7];
                if ((DAT_180cd011c == '\0') || (DAT_180ccfeda == '\0')) {
LAB_180214fd5:
                  bVar6 = false;
                }
                else {
                  uStack_330 = 0;
                  local_338 = (char *)FUN_18000fb70(0x20);
                  uVar8 = s_set_item_texture_prefab_1806f2190._12_4_;
                  uVar7 = s_set_item_texture_prefab_1806f2190._8_4_;
                  uVar4 = s_set_item_texture_prefab_1806f2190._4_4_;
                  local_328 = 0x17;
                  uStack_320 = 0x1f;
                  *(undefined4 *)local_338 = s_set_item_texture_prefab_1806f2190._0_4_;
                  *(undefined4 *)(local_338 + 4) = uVar4;
                  *(undefined4 *)(local_338 + 8) = uVar7;
                  *(undefined4 *)(local_338 + 0xc) = uVar8;
                  *(ulonglong *)(local_338 + 0xf) =
                       CONCAT71(s_set_item_texture_prefab_1806f2190._16_7_,
                                s_set_item_texture_prefab_1806f2190[0xf]);
                  local_338[0x17] = '\0';
                  bVar44 = true;
                  if (DAT_180ccfeda == '\0') goto LAB_180214fd5;
                  uVar29 = 0;
                  uVar43 = 0xcbf29ce484222325;
                  do {
                    uVar43 = (uVar43 ^ (byte)local_338[uVar29]) * 0x100000001b3;
                    uVar29 = uVar29 + 1;
                  } while (uVar29 < 0x17);
                  lVar22 = FUN_1800268a0(&DAT_180ca1520,&local_3a0,&local_338,uVar43);
                  lVar22 = *(longlong *)(lVar22 + 8);
                  if (((lVar22 == 0) || (lVar22 == DAT_180ca1528)) || (*(int *)(lVar22 + 0x30) == 0)
                     ) goto LAB_180214fd5;
                  bVar6 = true;
                }
                if (bVar44) {
                  bVar44 = false;
                  FUN_18000f890();
                }
                if (((!bVar6) || ((int)lVar23 != 0)) ||
                   ((*(char *)((longlong)plVar20 + 0x3c) == '\0' ||
                    (((int)plVar20[9] < 1 ||
                     (cVar14 = FUN_180298560(lVar17,"set item texture prefab"), cVar14 != '\0'))))))
                {
                  bVar6 = false;
                }
                else {
                  bVar6 = true;
                }
                if (lVar17 == plVar20[0x3f]) {
                  if (bVar6) {
                    FUN_180211e80("view | def %d | the paint was gone, dressed again",
                                  (int)plVar20[2]);
                  }
                  else {
                    if (((int)lVar23 == 0) || (local_3e0 - plVar20[0x40] < 3000))
                    goto LAB_1802150fc;
                    if (lVar17 != plVar20[0x3f]) goto LAB_18021504f;
                  }
                }
                else {
LAB_18021504f:
                  FUN_180211e80("view | def %d | new view %p",(int)plVar20[2],lVar17);
                }
                plVar21 = plVar20 + 8;
                if (*(char *)((longlong)plVar20 + 0x3c) == '\0') {
                  plVar21 = (longlong *)0x0;
                }
                iVar15 = (int)plVar20[7];
                if (iVar15 == 0) {
                  if (plVar21 != (longlong *)0x0) {
                    FUN_1800dfa60(lVar17,plVar21);
                  }
                }
                else {
                  plVar21 = plVar35;
                  if (iVar15 == 1) {
                    for (; plVar21 != (longlong *)((longlong)plVar20 + 500);
                        plVar21 = (longlong *)((longlong)plVar21 + 4)) {
                      if (0 < (int)*plVar21) {
                        FUN_1800dfaa0(lVar17,plVar35);
                        break;
                      }
                    }
                  }
                  else if ((iVar15 == 2) && (0 < *(int *)((longlong)plVar20 + 500))) {
                    FUN_1800dfac0(lVar17);
                  }
                }
                plVar20[0x3f] = lVar17;
                plVar20[0x40] = local_3e0;
              }
            }
LAB_1802150fc:
            plVar20 = plVar20 + 0x42;
            plVar35 = plVar35 + 0x42;
          } while (plVar20 != plVar24);
        }
        lVar17 = (*DAT_180961ad8)();
        if (lVar17 != 0) {
          iVar15 = FUN_180011200(lVar17 + 0x52908);
          lVar17 = FUN_18000f3a0(lVar17 + 0x52910);
          plVar35 = DAT_180cec798;
          for (plVar24 = DAT_180cec790; plVar24 != plVar35; plVar24 = plVar24 + 0x42) {
            if (((char)plVar24[0x41] != '\0') && (plVar24[0x3f] != 0)) {
              bVar44 = false;
              iVar37 = 0;
              if (lVar17 != 0) {
                for (; (iVar37 < iVar15 && (iVar37 < 0x1000)); iVar37 = iVar37 + 1) {
                  lVar23 = FUN_18000f3a0(lVar17 + (longlong)iVar37 * 8);
                  bVar44 = (bool)(bVar44 | lVar23 == plVar24[0x3f]);
                }
                if (bVar44) {
                  *(undefined1 *)((longlong)plVar24 + 0x209) = 1;
                  goto LAB_18021521b;
                }
              }
              uVar41 = DAT_180cec710;
              if (*(char *)((longlong)plVar24 + 0x209) != '\0') {
                local_3a0 = (longlong *)CONCAT44(local_3a0._4_4_,DAT_180cec710);
                DAT_180cec710 = DAT_180cec710 + 1;
                FUN_180013280(*plVar24 + 0x2c,&local_3a0);
                FUN_180013280(plVar24[0x3f] + 0x1dc,&local_3a0);
                *(undefined2 *)(plVar24 + 0x41) = 0;
                FUN_180211e80("acknowledged | def %d | position %u",(int)plVar24[2],uVar41);
              }
            }
LAB_18021521b:
          }
        }
        if (DAT_180cc4c89 != '\0') {
          DAT_180cc4c89 = '\0';
          local_358 = (char *)0x0;
          uStack_350 = 0;
          local_348 = 0;
          local_340 = 0;
          local_358 = (char *)FUN_18000fb70(0x70);
          uVar18 = s__function______try_____DispatchE_18070ad70._8_8_;
          local_348 = 0x6a;
          local_340 = 0x6f;
          *(undefined8 *)local_358 = s__function______try_____DispatchE_18070ad70._0_8_;
          *(undefined8 *)(local_358 + 8) = uVar18;
          uVar18 = s__function______try_____DispatchE_18070ad70._24_8_;
          *(undefined8 *)(local_358 + 0x10) = s__function______try_____DispatchE_18070ad70._16_8_;
          *(undefined8 *)(local_358 + 0x18) = uVar18;
          uVar18 = s__function______try_____DispatchE_18070ad70._40_8_;
          *(undefined8 *)(local_358 + 0x20) = s__function______try_____DispatchE_18070ad70._32_8_;
          *(undefined8 *)(local_358 + 0x28) = uVar18;
          uVar18 = s__function______try_____DispatchE_18070ad70._56_8_;
          *(undefined8 *)(local_358 + 0x30) = s__function______try_____DispatchE_18070ad70._48_8_;
          *(undefined8 *)(local_358 + 0x38) = uVar18;
          uVar18 = s__function______try_____DispatchE_18070ad70._72_8_;
          *(undefined8 *)(local_358 + 0x40) = s__function______try_____DispatchE_18070ad70._64_8_;
          *(undefined8 *)(local_358 + 0x48) = uVar18;
          uVar18 = CONCAT26(s__function______try_____DispatchE_18070ad70._94_2_,
                            CONCAT42(s__function______try_____DispatchE_18070ad70._90_4_,
                                     s__function______try_____DispatchE_18070ad70._88_2_));
          *(undefined8 *)(local_358 + 0x50) = s__function______try_____DispatchE_18070ad70._80_8_;
          *(undefined8 *)(local_358 + 0x58) = uVar18;
          uVar8 = s__function______try_____DispatchE_18070ad70._102_4_;
          uVar7 = s__function______try_____DispatchE_18070ad70._98_4_;
          uVar4 = CONCAT22(s__function______try_____DispatchE_18070ad70._96_2_,
                           s__function______try_____DispatchE_18070ad70._94_2_);
          *(undefined4 *)(local_358 + 0x5a) = s__function______try_____DispatchE_18070ad70._90_4_;
          *(undefined4 *)(local_358 + 0x5e) = uVar4;
          *(undefined4 *)(local_358 + 0x62) = uVar7;
          *(undefined4 *)(local_358 + 0x66) = uVar8;
          local_358[0x6a] = '\0';
          FUN_180212e30(&local_358);
          FUN_18000f890(&local_358);
        }
        FUN_180212f10(local_3f8);
        FUN_180214120(local_318,local_3f8);
        plVar24 = DAT_180cec798;
        bVar44 = true;
        puVar34 = local_3f8[1];
        puVar36 = local_3f8[0];
        if (local_3f8[0] != local_3f8[1]) {
          do {
            if (DAT_180cec790 != plVar24) {
              sVar42 = *(size_t *)(puVar36 + 0xe);
              uVar29 = *(ulonglong *)(puVar36 + 0x10);
              plVar35 = DAT_180cec790;
              do {
                plVar20 = plVar35 + 3;
                if (uVar29 < 0x10) {
                  puVar34 = puVar36 + 10;
                }
                else {
                  puVar34 = *(undefined4 **)(puVar36 + 10);
                }
                sVar1 = plVar35[5];
                if (0xf < (ulonglong)plVar35[6]) {
                  plVar20 = (longlong *)*plVar20;
                }
                if ((sVar1 == sVar42) &&
                   ((sVar1 == 0 || (iVar15 = memcmp(plVar20,puVar34,sVar1), iVar15 == 0)))) {
                  bVar5 = 1;
                  puVar34 = local_3f8[1];
                  goto LAB_180215370;
                }
                plVar35 = plVar35 + 0x42;
              } while (plVar35 != plVar24);
              puVar34 = local_3f8[1];
            }
            bVar5 = 0;
LAB_180215370:
            bVar44 = (bool)(bVar44 & bVar5);
            puVar36 = puVar36 + 0x1a;
          } while (puVar36 != puVar34);
        }
        uVar29 = local_300;
        sVar1 = local_308;
        ppppppuVar32 = local_318[0];
        plVar35 = DAT_180cec790;
        sVar42 = DAT_1809f1b50;
        puVar28 = &DAT_1809f1b40;
        if (0xf < DAT_1809f1b58) {
          puVar28 = DAT_1809f1b40;
        }
        ppppppuVar30 = local_318;
        if (0xf < local_300) {
          ppppppuVar30 = local_318[0];
        }
        if (local_308 == DAT_1809f1b50) {
          if (local_308 != 0) {
            iVar15 = memcmp(ppppppuVar30,puVar28,local_308);
            if (iVar15 != 0) goto LAB_180215505;
            puVar34 = local_3f8[1];
          }
          if ((!bVar44) ||
             (((longlong)plVar24 - (longlong)plVar35 >> 4) * 0xf83e0f83e0f83e1 !=
              ((longlong)puVar34 - (longlong)local_3f8[0] >> 3) * 0x4ec4ec4ec4ec4ec5))
          goto LAB_180215505;
          if (local_3f8[0] == puVar34) {
            pcVar33 = "off";
            if (DAT_18092149a != '\0') {
              pcVar33 = "no skins chosen in the skin changer";
            }
          }
          else {
            pcVar33 = "in step";
          }
          FUN_180214a20(1,pcVar33);
          puVar40 = auStack_468;
LAB_18021547b:
          *(undefined8 *)(puVar40 + -8) = 0x180215484;
          FUN_18000f890(local_318);
          lVar17 = *(longlong *)(puVar40 + 0x70);
          if (lVar17 == 0) goto LAB_1802161f9;
          lVar23 = *(longlong *)(puVar40 + 0x78);
          if (lVar17 != lVar23) {
            do {
              *(undefined8 *)(puVar40 + -8) = 0x1802154a9;
              FUN_18000f890(lVar17 + 0x48);
              *(undefined8 *)(puVar40 + -8) = 0x1802154b2;
              FUN_18000f890(lVar17 + 0x28);
              lVar17 = lVar17 + 0x68;
            } while (lVar17 != lVar23);
            lVar17 = *(longlong *)(puVar40 + 0x70);
          }
          uVar29 = (local_3e8 - lVar17 >> 3) * 8;
          lVar23 = lVar17;
          if (0xfff < uVar29) {
            lVar23 = *(longlong *)(lVar17 + -8);
            if (0x1f < (lVar17 - lVar23) - 8U) goto LAB_1802161e4;
            uVar29 = uVar29 + 0x27;
          }
          *(undefined8 *)(puVar40 + -8) = 0x180215500;
          thunk_FUN_1803d64e0(lVar23,uVar29);
          goto LAB_1802161f9;
        }
LAB_180215505:
        puVar28 = &DAT_1809f1b80;
        if (0xf < DAT_1809f1b98) {
          puVar28 = DAT_1809f1b80;
        }
        ppppppuVar30 = local_318;
        if (0xf < uVar29) {
          ppppppuVar30 = ppppppuVar32;
        }
        if ((sVar1 == DAT_1809f1b90) &&
           ((sVar1 == 0 || (iVar15 = memcmp(ppppppuVar30,puVar28,sVar1), iVar15 == 0)))) {
        }
        else {
          ppppppuVar30 = local_318;
          if (0xf < uVar29) {
            ppppppuVar30 = ppppppuVar32;
          }
          FUN_180029840(&DAT_1809f1b80,ppppppuVar30,sVar1);
          DAT_180cec820 = local_3e0;
          sVar42 = DAT_1809f1b50;
        }
        lVar17 = local_418;
        if ((local_3e0 - DAT_180cec820 < 0x4b0) && (sVar42 != 0)) goto LAB_18021547b;
        uVar29 = 0;
        uVar41 = 0;
        FUN_180212900(&local_3a0,local_418);
        plVar24 = plStack_398;
        plVar35 = local_3a0;
        if (local_3a0 != plStack_398) {
          do {
            lVar23 = *plVar35;
            uVar43 = FUN_18000f3a0(lVar23 + 0x10);
            if ((uVar43 < 0xf000000000000000) && (uVar29 < uVar43)) {
              uVar29 = uVar43;
            }
            uVar16 = FUN_180011200(lVar23 + 0x2c);
            if ((uVar16 & 0xc0000000) == 0) {
              if (uVar41 < (uVar16 & 0xffff)) {
                uVar41 = uVar16 & 0xffff;
              }
            }
            plVar35 = plVar35 + 1;
          } while (plVar35 != plVar24);
        }
        FUN_1800132b0(&local_3a0);
        uVar43 = DAT_180cec7e0;
        if (DAT_180cec7e0 < uVar29 + 1) {
          uVar43 = uVar29 + 1;
        }
        uVar16 = DAT_180cec710;
        if (DAT_180cec710 < uVar41 + 1) {
          uVar16 = uVar41 + 1;
        }
        DAT_180cec710 = uVar16;
        DAT_180cec7e0 = uVar43;
        plVar24 = (longlong *)FUN_180212900(&local_3a0,lVar17);
        local_448 = CONCAT44(local_448._4_4_,uVar16);
        FUN_180211e80("apply | wanted %zu | cache objects %zu | next id %llu | next position %u",
                      ((longlong)local_3f8[1] - (longlong)local_3f8[0] >> 3) * 0x4ec4ec4ec4ec4ec5,
                      plVar24[1] - *plVar24 >> 3,uVar43);
        FUN_1800132b0(&local_3a0);
        local_3c0 = 0;
        lStack_3b8 = 0;
        local_3b0 = 0;
        local_410[0] = 0;
        local_410[1] = 0;
        local_410[2] = 0;
        local_3a0 = DAT_180cec798;
        plVar24 = DAT_180cec790;
        if (DAT_180cec790 != DAT_180cec798) {
          do {
            puVar34 = local_3f8[1];
            lVar17 = local_410[2];
            if (local_3f8[0] != local_3f8[1]) {
              sVar42 = plVar24[5];
              uVar29 = plVar24[6];
              puVar36 = local_3f8[0];
              do {
                puVar28 = (undefined8 *)(puVar36 + 10);
                if (uVar29 < 0x10) {
                  plVar35 = plVar24 + 3;
                }
                else {
                  plVar35 = (longlong *)plVar24[3];
                }
                sVar1 = *(size_t *)(puVar36 + 0xe);
                if (0xf < *(ulonglong *)(puVar36 + 0x10)) {
                  puVar28 = (undefined8 *)*puVar28;
                }
                if ((sVar1 == sVar42) &&
                   ((sVar1 == 0 || (iVar15 = memcmp(puVar28,plVar35,sVar1), iVar15 == 0)))) {
                  if (local_410[1] == lVar17) {
                    FUN_180216f20(local_410,local_410[1],plVar24);
                  }
                  else {
                    FUN_180217180();
                    local_410[1] = local_410[1] + 0x210;
                  }
                  goto LAB_18021572b;
                }
                puVar36 = puVar36 + 0x1a;
              } while (puVar36 != puVar34);
            }
            FUN_1800242d0(&local_3c0,plVar24 + 1);
LAB_18021572b:
            plVar24 = plVar24 + 0x42;
          } while (plVar24 != local_3a0);
          lVar17 = local_418;
        }
        uVar12 = _UNK_1808adc38;
        uVar11 = _DAT_1808adc30;
        uVar10 = _UNK_1808ad318;
        uVar9 = _DAT_1808ad310;
        uVar19 = _UNK_1808ad2c8;
        uVar18 = _DAT_1808ad2c0;
        local_3d8 = (undefined8 *)0x0;
        puStack_3d0 = (undefined8 *)0x0;
        local_3c8 = (undefined8 *)0x0;
        puVar40 = auStack_468;
        puVar34 = local_3f8[0];
        if (local_3f8[0] != local_3f8[1]) {
          do {
            lVar23 = local_410[1];
            if (local_410[0] != local_410[1]) {
              sVar42 = *(size_t *)(puVar34 + 0xe);
              uVar29 = *(ulonglong *)(puVar34 + 0x10);
              lVar17 = local_410[0];
              do {
                puVar28 = (undefined8 *)(lVar17 + 0x18);
                puVar36 = puVar34 + 10;
                if (0xf < uVar29) {
                  puVar36 = *(undefined4 **)(puVar34 + 10);
                }
                sVar1 = *(size_t *)(lVar17 + 0x28);
                if (0xf < *(ulonglong *)(lVar17 + 0x30)) {
                  puVar28 = (undefined8 *)*puVar28;
                }
                if ((sVar1 == sVar42) &&
                   ((sVar1 == 0 || (iVar15 = memcmp(puVar28,puVar36,sVar1), iVar15 == 0))))
                goto LAB_180215cc2;
                lVar17 = lVar17 + 0x210;
              } while (lVar17 != lVar23);
              lVar17 = local_418;
            }
            lVar23 = FUN_1802141f0(local_3a8,lVar17,puVar34);
            if (lVar23 != 0) {
              puVar28 = (undefined8 *)(puVar34 + 10);
              uVar25 = FUN_18000f3a0(lVar23 + 0x10);
              local_2e8 = *puVar34;
              local_2e0 = 0;
              uStack_2d8 = 0;
              local_2d0 = 0;
              local_2c8 = 0;
              uVar29 = *(ulonglong *)(puVar34 + 0xe);
              if (0xf < *(ulonglong *)(puVar34 + 0x10)) {
                puVar28 = (undefined8 *)*puVar28;
              }
              local_2f8 = lVar23;
              local_2f0 = uVar25;
              if (0x7fffffffffffffff < uVar29) {
                    /* WARNING: Subroutine does not return */
                FUN_180011990();
              }
              if (uVar29 < 0x10) {
                local_2c8 = 0xf;
                local_2e0 = *puVar28;
                uStack_2d8 = puVar28[1];
                local_2d0 = uVar29;
              }
              else {
                uVar43 = uVar29 | 0xf;
                if (uVar43 < 0x8000000000000000) {
                  if (uVar43 < 0x16) {
                    uVar43 = 0x16;
                  }
                }
                else {
                  uVar43 = 0x7fffffffffffffff;
                }
                local_2e0 = FUN_18000fb70(uVar43 + 1);
                local_2d0 = uVar29;
                local_2c8 = uVar43;
                FUN_180540530(local_2e0,puVar28,uVar29 + 1);
              }
              local_2bc = 0;
              local_2b8 = 0;
              uStack_2b4 = 0xffffffff;
              uStack_2b0 = 0;
              uStack_2ac = 0x3a83126f;
              uStack_2a4 = 0;
              uStack_2a0 = 0;
              uStack_29c = 0;
              uStack_294 = 0;
              local_28c = 0;
              uStack_284 = 0;
              local_27c = 0;
              uStack_274 = 0;
              local_26c = 0;
              uStack_264 = 0;
              local_25c = 0;
              local_258 = uVar11;
              uStack_250 = uVar12;
              local_248 = uVar11;
              uStack_240 = uVar12;
              local_238 = uVar11;
              uStack_230 = uVar12;
              local_228 = uVar11;
              uStack_220 = uVar12;
              local_218 = uVar11;
              uStack_210 = uVar12;
              local_208 = uVar11;
              uStack_200 = uVar12;
              local_1f8 = uVar11;
              uStack_1f0 = uVar12;
              local_1e8 = uVar11;
              uStack_1e0 = uVar12;
              FUN_180540170(&local_1d8,0,0xa8);
              local_1d8 = 0;
              local_1d0 = 0x3f800000;
              local_1c8 = 0;
              local_1c0 = 0xffffffff;
              local_1bc = 0;
              local_1b8 = uVar9;
              uStack_1b0 = uVar10;
              local_1a8 = 0;
              local_1a4 = 0xffffffff;
              local_1a0 = 0;
              local_198 = uVar18;
              uStack_190 = uVar19;
              local_188 = 0xffffffff;
              local_184 = 0;
              local_17c = 0x3f800000;
              local_174 = 0;
              local_16c = 0xffffffff;
              local_168 = 0;
              local_160 = 0x3f800000;
              local_158 = 0;
              local_150 = 0xffffffff;
              local_14c = 0;
              local_148 = uVar9;
              uStack_140 = uVar10;
              local_138 = 0;
              local_134 = 0xffffffff;
              local_130 = 0;
              local_128 = 0;
              local_120 = 0;
              local_100 = 0;
              local_f8 = 0;
              local_f0 = 0;
              local_2c0 = puVar34[1];
              if (*(undefined8 **)(puVar34 + 2) != (undefined8 *)0x0) {
                local_2bc = 1;
                lVar17 = 3;
                puVar28 = *(undefined8 **)(puVar34 + 2);
                puVar38 = (undefined8 *)&local_2b8;
                do {
                  puVar31 = puVar38;
                  puVar27 = puVar28;
                  uVar3 = puVar27[1];
                  *puVar31 = *puVar27;
                  puVar31[1] = uVar3;
                  uVar3 = puVar27[3];
                  puVar31[2] = puVar27[2];
                  puVar31[3] = uVar3;
                  uVar3 = puVar27[5];
                  puVar31[4] = puVar27[4];
                  puVar31[5] = uVar3;
                  uVar3 = puVar27[7];
                  puVar31[6] = puVar27[6];
                  puVar31[7] = uVar3;
                  uVar3 = puVar27[9];
                  puVar31[8] = puVar27[8];
                  puVar31[9] = uVar3;
                  uVar3 = puVar27[0xb];
                  puVar31[10] = puVar27[10];
                  puVar31[0xb] = uVar3;
                  uVar3 = puVar27[0xd];
                  puVar31[0xc] = puVar27[0xc];
                  puVar31[0xd] = uVar3;
                  uVar3 = puVar27[0xf];
                  puVar31[0xe] = puVar27[0xe];
                  puVar31[0xf] = uVar3;
                  lVar17 = lVar17 + -1;
                  puVar28 = puVar27 + 0x10;
                  puVar38 = puVar31 + 0x10;
                } while (lVar17 != 0);
                uVar3 = puVar27[0x11];
                puVar31[0x10] = puVar27[0x10];
                puVar31[0x11] = uVar3;
                uVar3 = puVar27[0x13];
                puVar31[0x12] = puVar27[0x12];
                puVar31[0x13] = uVar3;
              }
              local_118 = *(undefined8 *)(puVar34 + 4);
              uStack_110 = *(undefined8 *)(puVar34 + 6);
              local_108 = puVar34[8];
              local_104 = puVar34[9];
              local_100 = FUN_180212b10(uVar25);
              local_f8 = local_3e0;
              FUN_180011200(lVar23 + 0x2c);
              local_f0 = CONCAT11(local_f0._1_1_,extraout_var >> 6) & 0xff01;
              FUN_180216780(local_410,&local_2f8);
              uVar29 = *(ulonglong *)(puVar34 + 0x16);
              if (uVar29 != 0) {
                puVar45 = (ulonglong *)(puVar34 + 0x12);
                local_378 = 0;
                uStack_370 = 0;
                local_368 = 0;
                local_360 = 0;
                if (0xf < *(ulonglong *)(puVar34 + 0x18)) {
                  puVar45 = (ulonglong *)*puVar45;
                }
                local_380 = uVar25;
                if (0x7fffffffffffffff < uVar29) {
                    /* WARNING: Subroutine does not return */
                  FUN_180011990();
                }
                if (uVar29 < 0x10) {
                  uVar43 = 0xf;
                  local_360 = 0xf;
                  uVar26 = *puVar45;
                  uStack_370 = puVar45[1];
                  local_378 = uVar26;
                  local_368 = uVar29;
                }
                else {
                  uVar43 = uVar29 | 0xf;
                  if (uVar43 < 0x8000000000000000) {
                    if (uVar43 < 0x16) {
                      uVar43 = 0x16;
                    }
                  }
                  else {
                    uVar43 = 0x7fffffffffffffff;
                  }
                  uVar26 = FUN_18000fb70(uVar43 + 1);
                  local_378 = uVar26;
                  local_368 = uVar29;
                  local_360 = uVar43;
                  FUN_180540530(uVar26,puVar45,uVar29 + 1);
                }
                if (puStack_3d0 == local_3c8) {
                  FUN_180216c40(&local_3d8,puStack_3d0,&local_380);
                }
                else {
                  *puStack_3d0 = uVar25;
                  puStack_3d0[1] = uVar26;
                  puStack_3d0[2] = uStack_370;
                  puStack_3d0[3] = uVar29;
                  puStack_3d0[4] = uVar43;
                  local_368 = 0;
                  local_360 = 0xf;
                  local_378 = local_378 & 0xffffffffffffff00;
                  puStack_3d0 = puStack_3d0 + 5;
                }
                FUN_18000f890(&local_378);
              }
              FUN_18000f890(&local_2e0);
LAB_180215cc2:
              lVar17 = local_418;
            }
            puVar34 = puVar34 + 0x1a;
          } while (puVar34 != local_3f8[1]);
          if (local_3d8 == puStack_3d0) {
            puVar40 = auStack_468;
          }
          else {
            if (DAT_180cfca60 != DAT_180cfe674) {
              DAT_180cfe674 = DAT_180cfca60;
              FUN_180298530();
            }
            puVar28 = puStack_3d0;
            uStack_350 = 0;
            local_348 = 0;
            local_340 = 0xf;
            local_358 = (char *)0x0;
            puVar38 = local_3d8;
            puVar40 = auStack_468;
            if (local_3d8 != puStack_3d0) {
              do {
                if (local_348 != 0) {
                  FUN_1800134a0(&local_358,&DAT_1806f1258,1);
                }
                uVar18 = FUN_18004e4f0(&local_380,*puVar38);
                uVar18 = FUN_180066ab0(local_a8,"{ id: \'",uVar18);
                puVar27 = (undefined8 *)FUN_1800134a0(uVar18,"\', teams: \'",0xb);
                local_3a0 = (longlong *)*puVar27;
                plStack_398 = (longlong *)puVar27[1];
                local_390 = puVar27[2];
                uStack_388 = puVar27[3];
                puVar27[2] = 0;
                puVar27[3] = 0xf;
                *(undefined1 *)puVar27 = 0;
                uVar18 = FUN_1800667a0(local_c8,&local_3a0,puVar38 + 1);
                plVar24 = (longlong *)FUN_1800134a0(uVar18,&DAT_18070a270,3);
                local_e8 = (undefined8 ******)*plVar24;
                lStack_e0 = plVar24[1];
                local_d8 = plVar24[2];
                uStack_d0 = plVar24[3];
                plVar24[2] = 0;
                plVar24[3] = 0xf;
                *(undefined1 *)plVar24 = 0;
                ppppppuVar32 = &local_e8;
                if (0xf < uStack_d0) {
                  ppppppuVar32 = local_e8;
                }
                FUN_1800134a0(&local_358,ppppppuVar32,local_d8);
                if (0xf < uStack_d0) {
                  uVar29 = uStack_d0 + 1;
                  ppppppuVar32 = local_e8;
                  if (uVar29 < 0x1000) {
LAB_180215e60:
                    thunk_FUN_1803d64e0(ppppppuVar32,uVar29);
                    goto LAB_180215e66;
                  }
                  ppppppuVar32 = (undefined8 ******)local_e8[-1];
                  if ((ulonglong)((longlong)local_e8 + (-8 - (longlong)ppppppuVar32)) < 0x20) {
                    uVar29 = uStack_d0 + 0x28;
                    goto LAB_180215e60;
                  }
                  pcVar2 = (code *)swi(0x29);
                  (*pcVar2)(5);
                  puVar39 = auStack_460;
LAB_180215ee9:
                  pcVar2 = (code *)swi(0x29);
                  (*pcVar2)(5);
                  puVar40 = puVar39 + 8;
                  break;
                }
LAB_180215e66:
                FUN_18000f890(local_c8);
                if (0xf < uStack_388) {
                  uVar29 = uStack_388 + 1;
                  plVar24 = local_3a0;
                  if (0xfff < uVar29) {
                    plVar24 = (longlong *)local_3a0[-1];
                    if (0x1f < (ulonglong)((longlong)local_3a0 + (-8 - (longlong)plVar24)))
                    goto LAB_180215ee9;
                    uVar29 = uStack_388 + 0x28;
                  }
                  thunk_FUN_1803d64e0(plVar24,uVar29);
                }
                local_390 = 0;
                uStack_388 = 0xf;
                local_3a0 = (longlong *)((ulonglong)local_3a0 & 0xffffffffffffff00);
                FUN_18000f890(local_a8);
                FUN_18000f890(&local_380);
                puVar38 = puVar38 + 5;
                puVar40 = auStack_468;
              } while (puVar38 != puVar28);
            }
            *(undefined8 *)(puVar40 + -8) = 0x180215f04;
            uVar18 = FUN_180066a20(&local_380,
                                   "(function () { try { var root = $.GetContextPanel(); while (root && root.GetParent && root.GetParent()) root = root.GetParent(); if (!root) return; var keep = root.Data(); if (!keep.wlLoadout) keep.wlLoadout = {}; ["
                                   ,&local_358);
            *(undefined8 *)(puVar40 + -8) = 0x180215f1a;
            puVar28 = (undefined8 *)
                      FUN_1800134a0(uVar18,
                                    "].forEach(function (entry) {  var id = entry.id; var def = InventoryAPI.GetItemDefinitionIndex(id);  entry.teams.split(\',\').forEach(function (team) {   var slot = LoadoutAPI.GetSlotEquippedWithDefIndex(team, def) || InventoryAPI.GetDefaultSlot(id);   if (!slot || !LoadoutAPI.CanEquipItemInSlot(team, id, slot)) return;   var now = LoadoutAPI.GetItemID(team, slot); if (now === id) return;   var key = team + \'|\' + slot; if (!(key in keep.wlLoadout)) keep.wlLoadout[key] = now;   LoadoutAPI.EquipItemInSlot(team, id, slot);  }); });} catch (e) {} })();"
                                    ,0x228);
            local_338 = (char *)*puVar28;
            uStack_330 = puVar28[1];
            local_328 = puVar28[2];
            uStack_320 = puVar28[3];
            puVar28[2] = 0;
            puVar28[3] = 0xf;
            *(undefined1 *)puVar28 = 0;
            *(undefined8 *)(puVar40 + -8) = 0x180215f50;
            FUN_18000f890(&local_380);
            *(undefined8 *)(puVar40 + -8) = 0x180215f5a;
            FUN_18000f890(&local_358);
            *(undefined8 *)(puVar40 + -8) = 0x180215f64;
            FUN_180212e30(&local_338);
            *(undefined8 *)(puVar40 + -8) = 0x180215f6e;
            FUN_18000f890(&local_338);
          }
        }
        if (local_3c0 != lStack_3b8) {
          *(undefined8 *)(puVar40 + -8) = 0x180215f8e;
          uVar18 = FUN_180212bf0(&local_380,&local_3c0);
          *(undefined8 *)(puVar40 + -8) = 0x180215f97;
          FUN_180212e30(uVar18);
          *(undefined8 *)(puVar40 + -8) = 0x180215fa1;
          FUN_18000f890(&local_380);
          plVar35 = DAT_180cec798;
          for (plVar24 = DAT_180cec790; plVar24 != plVar35; plVar24 = plVar24 + 0x42) {
            lVar23 = plVar24[1];
            *(undefined8 *)(puVar40 + -8) = 0x180215fc5;
            lVar23 = thunk_FUN_1804e6f30(local_3c0,lStack_3b8,lVar23);
            if (lVar23 != lStack_3b8) {
              lVar23 = *plVar24;
              *(undefined8 *)(puVar40 + -8) = 0x180215fdb;
              FUN_180212b30(lVar17,3,lVar23);
              lVar23 = *plVar24;
              *(undefined8 *)(puVar40 + -8) = 0x180215fec;
              FUN_180212b80(local_3a8,2,lVar23);
              lVar23 = plVar24[1];
              lVar22 = plVar24[2];
              *(undefined8 *)(puVar40 + -8) = 0x180215fff;
              FUN_180211e80("remove | def %d | id %llu",(int)lVar22,lVar23);
            }
          }
        }
        *(undefined8 *)(puVar40 + -8) = 0x180216017;
        FUN_180216930(&DAT_180cec790);
        DAT_180cec790 = *(longlong **)(puVar40 + 0x58);
        DAT_180cec798 = *(longlong **)(puVar40 + 0x60);
        _DAT_180cec7a0 = *(undefined8 *)(puVar40 + 0x68);
        *(undefined8 *)(puVar40 + 0x58) = 0;
        *(undefined8 *)(puVar40 + 0x60) = 0;
        *(undefined8 *)(puVar40 + 0x68) = 0;
        ppppppuVar32 = local_318;
        if (0xf < local_300) {
          ppppppuVar32 = local_318[0];
        }
        *(undefined8 *)(puVar40 + -8) = 0x18021605d;
        FUN_180029840(&DAT_1809f1b40,ppppppuVar32,local_308);
        pcVar33 = "some items couldn\'t be added";
        if (((longlong)DAT_180cec798 - (longlong)DAT_180cec790 >> 4) * 0xf83e0f83e0f83e1 ==
            (*(longlong *)(puVar40 + 0x78) - *(longlong *)(puVar40 + 0x70) >> 3) *
            0x4ec4ec4ec4ec4ec5) {
          pcVar33 = "in step";
        }
        *(undefined8 *)(puVar40 + -8) = 0x1802160b5;
        FUN_180214a20(CONCAT71((int7)((ulonglong)
                                      ((*(longlong *)(puVar40 + 0x78) -
                                        *(longlong *)(puVar40 + 0x70) >> 3) * 0x4ec4ec4ec4ec4ec5) >>
                                     8),1),pcVar33);
        puVar38 = puStack_3d0;
        puVar28 = local_3d8;
        if (local_3d8 == (undefined8 *)0x0) {
LAB_180216144:
          lVar17 = *(longlong *)(puVar40 + 0x58);
          if (lVar17 != 0) {
            lVar23 = *(longlong *)(puVar40 + 0x60);
            if (lVar17 != lVar23) {
              do {
                *(undefined8 *)(puVar40 + -8) = 0x180216169;
                FUN_18000f890(lVar17 + 0x18);
                lVar17 = lVar17 + 0x210;
              } while (lVar17 != lVar23);
              lVar17 = *(longlong *)(puVar40 + 0x58);
            }
            uVar29 = (*(longlong *)(puVar40 + 0x68) - lVar17 >> 4) * 0x10;
            lVar23 = lVar17;
            if (0xfff < uVar29) {
              lVar23 = *(longlong *)(lVar17 + -8);
              if (0x1f < (lVar17 - lVar23) - 8U) goto LAB_1802161dd;
              uVar29 = uVar29 + 0x27;
            }
            *(undefined8 *)(puVar40 + -8) = 0x1802161ba;
            thunk_FUN_1803d64e0(lVar23,uVar29);
            *(undefined8 *)(puVar40 + 0x58) = 0;
            *(undefined8 *)(puVar40 + 0x60) = 0;
            *(undefined8 *)(puVar40 + 0x68) = 0;
          }
          *(undefined8 *)(puVar40 + -8) = 0x1802161d1;
          FUN_1800132b0(&local_3c0);
          goto LAB_18021547b;
        }
        for (; puVar28 != puVar38; puVar28 = puVar28 + 5) {
          *(undefined8 *)(puVar40 + -8) = 0x1802160d9;
          FUN_18000f890(puVar28 + 1);
        }
        uVar29 = ((longlong)local_3c8 - (longlong)local_3d8 >> 3) * 8;
        puVar28 = local_3d8;
        if (uVar29 < 0x1000) {
LAB_180216130:
          *(undefined8 *)(puVar40 + -8) = 0x180216138;
          thunk_FUN_1803d64e0(puVar28,uVar29);
          local_3d8 = (undefined8 *)0x0;
          puStack_3d0 = (undefined8 *)0x0;
          local_3c8 = (undefined8 *)0x0;
          goto LAB_180216144;
        }
        puVar28 = (undefined8 *)local_3d8[-1];
        if ((ulonglong)((longlong)local_3d8 + (-8 - (longlong)puVar28)) < 0x20) {
          uVar29 = uVar29 + 0x27;
          goto LAB_180216130;
        }
        pcVar2 = (code *)swi(0x29);
        (*pcVar2)(5);
        puVar40 = puVar40 + 8;
LAB_1802161dd:
        pcVar2 = (code *)swi(0x29);
        (*pcVar2)(5);
        puVar40 = puVar40 + 8;
LAB_1802161e4:
        pcVar2 = (code *)swi(0x29);
        (*pcVar2)(5);
        puVar40 = puVar40 + 8;
        goto LAB_1802161eb;
      }
      pcVar33 = "the inventory has no item cache yet";
      puVar40 = auStack_468;
    }
  }
  *(undefined8 *)(puVar40 + -8) = 0x1802161f9;
  FUN_180214a20(0,pcVar33);
LAB_1802161f9:
  *(undefined8 *)(puVar40 + -8) = 0x180216208;
  return;
}



/* ===== 180216240 FUN_180216240 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180216240(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50 [4];
  ulonglong local_30;
  
  local_30 = DAT_180919500 ^ (ulonglong)auStack_88;
  if ((((((DAT_180cec790 != DAT_180cec798) && (DAT_180961ad8 != 0)) && (DAT_180961be8 != 0)) &&
       ((DAT_180961bf0 != 0 && (DAT_180961c08 != 0)))) &&
      ((DAT_180961c10 != 0 && ((DAT_180961c18 != 0 && (DAT_180961e00 != 0)))))) &&
     (DAT_180961c20 != 0)) {
    lVar1 = FUN_180211f50();
    puVar4 = DAT_180cec798;
    if ((lVar1 == 0) || (lVar1 != DAT_180cec830)) {
      puVar5 = DAT_180cec790;
      if (DAT_180cec790 != DAT_180cec798) {
        do {
          FUN_18000f890(puVar5 + 3);
          puVar5 = puVar5 + 0x42;
        } while (puVar5 != puVar4);
        DAT_180cec798 = DAT_180cec790;
      }
    }
    else {
      lVar2 = FUN_1802128c0(lVar1);
      puVar5 = DAT_180cec798;
      local_68 = 0;
      uStack_60 = 0;
      local_58 = 0;
      for (puVar4 = DAT_180cec790; puVar4 != puVar5; puVar4 = puVar4 + 0x42) {
        FUN_1800242d0(&local_68,puVar4 + 1);
      }
      uVar3 = FUN_180212bf0(local_50,&local_68);
      FUN_180212e30(uVar3);
      FUN_18000f890(local_50);
      puVar4 = DAT_180cec798;
      if (DAT_180cec790 != DAT_180cec798) {
        puVar5 = DAT_180cec790;
        if (lVar2 == 0) {
          do {
            FUN_180212b80(lVar1,2,*puVar5);
            FUN_180211e80("remove | def %d | id %llu",*(undefined4 *)(puVar5 + 2),puVar5[1]);
            puVar5 = puVar5 + 0x42;
          } while (puVar5 != puVar4);
        }
        else {
          do {
            FUN_180212b30(lVar2,3,*puVar5);
            FUN_180212b80(lVar1,2,*puVar5);
            FUN_180211e80("remove | def %d | id %llu",*(undefined4 *)(puVar5 + 2),puVar5[1]);
            puVar5 = puVar5 + 0x42;
          } while (puVar5 != puVar4);
        }
      }
      puVar4 = DAT_180cec798;
      puVar5 = DAT_180cec790;
      if (DAT_180cec790 != DAT_180cec798) {
        do {
          FUN_18000f890(puVar5 + 3);
          puVar5 = puVar5 + 0x42;
        } while (puVar5 != puVar4);
        DAT_180cec798 = DAT_180cec790;
      }
      DAT_1809f1b50 = 0;
      puVar4 = &DAT_1809f1b40;
      if (0xf < DAT_1809f1b58) {
        puVar4 = DAT_1809f1b40;
      }
      *(undefined1 *)puVar4 = 0;
      FUN_180214a20(1,"removed");
      FUN_1800132b0(&local_68);
    }
  }
  return;
}



/* ===== 1802164e0 FUN_1802164e0 ===== */

undefined8 * FUN_1802164e0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  FUN_18002ba60(param_1 + 3,param_2 + 3);
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  lVar6 = 3;
  *(undefined1 *)((longlong)param_1 + 0x3c) = *(undefined1 *)((longlong)param_2 + 0x3c);
  puVar2 = param_2 + 8;
  puVar3 = param_1 + 8;
  do {
    puVar5 = puVar3;
    puVar4 = puVar2;
    uVar1 = puVar4[1];
    *puVar5 = *puVar4;
    puVar5[1] = uVar1;
    uVar1 = puVar4[3];
    puVar5[2] = puVar4[2];
    puVar5[3] = uVar1;
    uVar1 = puVar4[5];
    puVar5[4] = puVar4[4];
    puVar5[5] = uVar1;
    uVar1 = puVar4[7];
    puVar5[6] = puVar4[6];
    puVar5[7] = uVar1;
    uVar1 = puVar4[9];
    puVar5[8] = puVar4[8];
    puVar5[9] = uVar1;
    uVar1 = puVar4[0xb];
    puVar5[10] = puVar4[10];
    puVar5[0xb] = uVar1;
    uVar1 = puVar4[0xd];
    puVar5[0xc] = puVar4[0xc];
    puVar5[0xd] = uVar1;
    uVar1 = puVar4[0xf];
    puVar5[0xe] = puVar4[0xe];
    puVar5[0xf] = uVar1;
    lVar6 = lVar6 + -1;
    puVar2 = puVar4 + 0x10;
    puVar3 = puVar5 + 0x10;
  } while (lVar6 != 0);
  uVar1 = puVar4[0x11];
  puVar5[0x10] = puVar4[0x10];
  puVar5[0x11] = uVar1;
  uVar1 = puVar4[0x13];
  puVar5[0x12] = puVar4[0x12];
  puVar5[0x13] = uVar1;
  uVar1 = param_2[0x3d];
  param_1[0x3c] = param_2[0x3c];
  param_1[0x3d] = uVar1;
  *(undefined4 *)(param_1 + 0x3e) = *(undefined4 *)(param_2 + 0x3e);
  *(undefined4 *)((longlong)param_1 + 500) = *(undefined4 *)((longlong)param_2 + 500);
  param_1[0x3f] = param_2[0x3f];
  param_1[0x40] = param_2[0x40];
  *(undefined1 *)(param_1 + 0x41) = *(undefined1 *)(param_2 + 0x41);
  *(undefined1 *)((longlong)param_1 + 0x209) = *(undefined1 *)((longlong)param_2 + 0x209);
  return param_1;
}



/* ===== 180216600 FUN_180216600 ===== */

void FUN_180216600(longlong *param_1)

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
  for (; lVar3 != lVar2; lVar3 = lVar3 + 0x68) {
    FUN_18000f890(lVar3 + 0x48);
    FUN_18000f890(lVar3 + 0x28);
  }
  lVar3 = *param_1;
  lVar2 = lVar3;
  if (0xfff < (ulonglong)((param_1[2] - lVar3 >> 3) * 8)) {
    lVar2 = *(longlong *)(lVar3 + -8);
    if ((lVar3 - lVar2) - 8U < 0x20) goto LAB_180216691;
    lVar2 = 5;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar4 = auStack_20;
  }
  puVar5 = puVar4;
LAB_180216691:
  *(undefined8 *)(puVar5 + -8) = 0x180216699;
  thunk_FUN_1803d64e0(lVar2);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* ===== 1802166c0 FUN_1802166c0 ===== */

void FUN_1802166c0(longlong *param_1)

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
  for (; lVar3 != lVar2; lVar3 = lVar3 + 0x28) {
    FUN_18000f890(lVar3 + 8);
  }
  lVar3 = *param_1;
  lVar2 = lVar3;
  if (0xfff < (ulonglong)((param_1[2] - lVar3 >> 3) * 8)) {
    lVar2 = *(longlong *)(lVar3 + -8);
    if ((lVar3 - lVar2) - 8U < 0x20) goto LAB_180216750;
    lVar2 = 5;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar4 = auStack_20;
  }
  puVar5 = puVar4;
LAB_180216750:
  *(undefined8 *)(puVar5 + -8) = 0x180216758;
  thunk_FUN_1803d64e0(lVar2);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* ===== 180216780 FUN_180216780 ===== */

longlong FUN_180216780(longlong *param_1,undefined8 param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  
  lVar6 = param_1[1];
  if (lVar6 != param_1[2]) {
    FUN_180217420(lVar6);
    lVar6 = param_1[1];
    param_1[1] = lVar6 + 0x210;
    return lVar6;
  }
  uVar9 = 0x7c1f07c1f07c1f;
  lVar8 = (lVar6 - *param_1) / 0x210;
  if (lVar8 == 0x7c1f07c1f07c1f) {
                    /* WARNING: Subroutine does not return */
    FUN_18000fb10();
  }
  uVar1 = lVar8 + 1;
  uVar5 = (param_1[2] - *param_1 >> 4) * 0xf83e0f83e0f83e1;
  if (uVar5 <= 0x7c1f07c1f07c1f - (uVar5 >> 1)) {
    uVar5 = (uVar5 >> 1) + uVar5;
    uVar9 = uVar1;
    if (uVar1 <= uVar5) {
      uVar9 = uVar5;
    }
    if (0x7c1f07c1f07c1f < uVar9) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  lVar2 = FUN_18000fb70(uVar9 * 0x210);
  lVar4 = lVar8 * 0x210 + lVar2;
  FUN_180217420(lVar4,param_2);
  lVar8 = param_1[1];
  lVar3 = *param_1;
  lVar7 = lVar2;
  if (lVar6 == lVar8) {
    lVar6 = lVar2;
    if (lVar3 != lVar8) {
      do {
        FUN_180217420(lVar6);
        lVar6 = lVar6 + 0x210;
        lVar3 = lVar3 + 0x210;
      } while (lVar3 != lVar8);
    }
  }
  else {
    for (; lVar3 != lVar6; lVar3 = lVar3 + 0x210) {
      FUN_180217420(lVar7);
      lVar7 = lVar7 + 0x210;
    }
    lVar8 = param_1[1];
    lVar3 = lVar4;
    if (lVar6 != lVar8) {
      do {
        lVar3 = lVar3 + 0x210;
        FUN_180217420(lVar3,lVar6);
        lVar6 = lVar6 + 0x210;
      } while (lVar6 != lVar8);
    }
  }
  FUN_180217340(param_1,lVar2,uVar1,uVar9);
  return lVar4;
}



/* ===== 180216930 FUN_180216930 ===== */

void FUN_180216930(longlong *param_1)

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
  for (; lVar3 != lVar2; lVar3 = lVar3 + 0x210) {
    FUN_18000f890(lVar3 + 0x18);
  }
  lVar3 = *param_1;
  lVar2 = lVar3;
  if (0xfff < (ulonglong)((param_1[2] - lVar3 >> 4) * 0x10)) {
    lVar2 = *(longlong *)(lVar3 + -8);
    if ((lVar3 - lVar2) - 8U < 0x20) goto LAB_1802169be;
    lVar2 = 5;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar4 = auStack_20;
  }
  puVar5 = puVar4;
LAB_1802169be:
  *(undefined8 *)(puVar5 + -8) = 0x1802169c6;
  thunk_FUN_1803d64e0(lVar2);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* ===== 1802169e0 FUN_1802169e0 ===== */

undefined4 * FUN_1802169e0(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  ulonglong uVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined4 *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined4 *puVar13;
  ulonglong uVar14;
  undefined4 *puVar15;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  lVar10 = *param_1;
  uVar14 = 0x276276276276276;
  lVar7 = (param_1[1] - lVar10 >> 3) * 0x4ec4ec4ec4ec4ec5;
  if (lVar7 == 0x276276276276276) {
                    /* WARNING: Subroutine does not return */
    FUN_18000fb10();
  }
  uVar1 = lVar7 + 1;
  uVar9 = (param_1[2] - lVar10 >> 3) * 0x4ec4ec4ec4ec4ec5;
  if (uVar9 <= 0x276276276276276 - (uVar9 >> 1)) {
    uVar9 = (uVar9 >> 1) + uVar9;
    uVar14 = uVar1;
    if (uVar1 <= uVar9) {
      uVar14 = uVar9;
    }
    if (0x276276276276276 < uVar14) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  puVar8 = (undefined4 *)FUN_18000fb70(uVar14 * 0x68);
  puVar15 = puVar8 + ((param_2 - lVar10) / 0x68) * 0x1a;
  *puVar15 = *param_3;
  puVar15[1] = param_3[1];
  *(undefined8 *)(puVar15 + 2) = *(undefined8 *)(param_3 + 2);
  uVar6 = *(undefined8 *)(param_3 + 6);
  *(undefined8 *)(puVar15 + 4) = *(undefined8 *)(param_3 + 4);
  *(undefined8 *)(puVar15 + 6) = uVar6;
  puVar15[8] = param_3[8];
  puVar15[9] = param_3[9];
  *(undefined8 *)(puVar15 + 10) = 0;
  *(undefined8 *)(puVar15 + 0xc) = 0;
  *(undefined8 *)(puVar15 + 0xe) = 0;
  *(undefined8 *)(puVar15 + 0x10) = 0;
  uVar6 = *(undefined8 *)(param_3 + 0xc);
  *(undefined8 *)(puVar15 + 10) = *(undefined8 *)(param_3 + 10);
  *(undefined8 *)(puVar15 + 0xc) = uVar6;
  uVar6 = *(undefined8 *)(param_3 + 0x10);
  *(undefined8 *)(puVar15 + 0xe) = *(undefined8 *)(param_3 + 0xe);
  *(undefined8 *)(puVar15 + 0x10) = uVar6;
  *(undefined8 *)(param_3 + 0xe) = 0;
  *(undefined8 *)(param_3 + 0x10) = 0xf;
  *(undefined1 *)(param_3 + 10) = 0;
  *(undefined8 *)(puVar15 + 0x12) = 0;
  *(undefined8 *)(puVar15 + 0x14) = 0;
  *(undefined8 *)(puVar15 + 0x16) = 0;
  *(undefined8 *)(puVar15 + 0x18) = 0;
  uVar3 = param_3[0x13];
  uVar4 = param_3[0x14];
  uVar5 = param_3[0x15];
  puVar15[0x12] = param_3[0x12];
  puVar15[0x13] = uVar3;
  puVar15[0x14] = uVar4;
  puVar15[0x15] = uVar5;
  uVar3 = param_3[0x17];
  uVar4 = param_3[0x18];
  uVar5 = param_3[0x19];
  puVar15[0x16] = param_3[0x16];
  puVar15[0x17] = uVar3;
  puVar15[0x18] = uVar4;
  puVar15[0x19] = uVar5;
  *(undefined8 *)(param_3 + 0x16) = 0;
  *(undefined8 *)(param_3 + 0x18) = 0xf;
  *(undefined1 *)(param_3 + 0x12) = 0;
  lVar10 = param_1[1];
  lVar7 = *param_1;
  puVar13 = puVar8;
  if (param_2 != lVar10) {
    FUN_1802170c0(*param_1,param_2,puVar8);
    lVar10 = param_1[1];
    puVar13 = puVar15 + 0x1a;
    lVar7 = param_2;
  }
  puVar11 = auStack_48;
  puVar12 = auStack_48;
  FUN_1802170c0(lVar7,lVar10,puVar13);
  lVar10 = *param_1;
  if (lVar10 == 0) goto LAB_180216bf0;
  lVar7 = param_1[1];
  for (; lVar10 != lVar7; lVar10 = lVar10 + 0x68) {
    FUN_18000f890(lVar10 + 0x48);
    FUN_18000f890(lVar10 + 0x28);
  }
  lVar10 = *param_1;
  lVar7 = lVar10;
  if ((ulonglong)((param_1[2] - lVar10 >> 3) * 8) < 0x1000) {
LAB_180216be5:
    puVar12 = puVar11;
  }
  else {
    lVar7 = *(longlong *)(lVar10 + -8);
    if (0x1f < (lVar10 - lVar7) - 8U) {
      lVar7 = 5;
      pcVar2 = (code *)swi(0x29);
      (*pcVar2)(5);
      puVar11 = auStack_40;
      goto LAB_180216be5;
    }
  }
  *(undefined8 *)(puVar12 + -8) = 0x180216bf0;
  thunk_FUN_1803d64e0(lVar7);
LAB_180216bf0:
  *param_1 = (longlong)puVar8;
  param_1[1] = (longlong)(puVar8 + uVar1 * 0x1a);
  param_1[2] = (longlong)(puVar8 + uVar14 * 0x1a);
  return puVar15;
}



/* ===== 180216c40 FUN_180216c40 ===== */

undefined8 * FUN_180216c40(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  lVar15 = *param_1;
  uVar14 = 0x666666666666666;
  lVar10 = (param_1[1] - lVar15 >> 3) * -0x3333333333333333;
  if (lVar10 == 0x666666666666666) {
                    /* WARNING: Subroutine does not return */
    FUN_18000fb10();
  }
  uVar1 = lVar10 + 1;
  uVar13 = (param_1[2] - lVar15 >> 3) * -0x3333333333333333;
  if (uVar13 <= 0x666666666666666 - (uVar13 >> 1)) {
    uVar13 = (uVar13 >> 1) + uVar13;
    uVar14 = uVar1;
    if (uVar1 <= uVar13) {
      uVar14 = uVar13;
    }
    if (0x666666666666666 < uVar14) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  puVar11 = (undefined8 *)FUN_18000fb70(uVar14 * 0x28);
  puVar16 = auStack_48;
  puVar17 = auStack_48;
  lVar15 = ((longlong)param_2 - lVar15) / 0x28;
  puVar11[lVar15 * 5] = *param_3;
  puVar2 = puVar11 + lVar15 * 5;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  uVar5 = *(undefined4 *)((longlong)param_3 + 0xc);
  uVar6 = *(undefined4 *)(param_3 + 2);
  uVar7 = *(undefined4 *)((longlong)param_3 + 0x14);
  *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_3 + 1);
  *(undefined4 *)((longlong)puVar2 + 0xc) = uVar5;
  *(undefined4 *)(puVar2 + 2) = uVar6;
  *(undefined4 *)((longlong)puVar2 + 0x14) = uVar7;
  uVar8 = param_3[4];
  puVar2[3] = param_3[3];
  puVar2[4] = uVar8;
  param_3[3] = 0;
  param_3[4] = 0xf;
  *(undefined1 *)(param_3 + 1) = 0;
  puVar3 = (undefined8 *)param_1[1];
  puVar12 = (undefined8 *)*param_1;
  puVar9 = puVar11;
  if (param_2 == puVar3) {
    for (; puVar12 != puVar3; puVar12 = puVar12 + 5) {
      *puVar9 = *puVar12;
      puVar9[1] = 0;
      puVar9[2] = 0;
      puVar9[3] = 0;
      puVar9[4] = 0;
      uVar5 = *(undefined4 *)((longlong)puVar12 + 0xc);
      uVar6 = *(undefined4 *)(puVar12 + 2);
      uVar7 = *(undefined4 *)((longlong)puVar12 + 0x14);
      *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(puVar12 + 1);
      *(undefined4 *)((longlong)puVar9 + 0xc) = uVar5;
      *(undefined4 *)(puVar9 + 2) = uVar6;
      *(undefined4 *)((longlong)puVar9 + 0x14) = uVar7;
      uVar8 = puVar12[4];
      puVar9[3] = puVar12[3];
      puVar9[4] = uVar8;
      puVar12[3] = 0;
      puVar12[4] = 0xf;
      *(undefined1 *)(puVar12 + 1) = 0;
      puVar9 = puVar9 + 5;
    }
  }
  else {
    for (; puVar12 != param_2; puVar12 = puVar12 + 5) {
      *puVar9 = *puVar12;
      puVar9[1] = 0;
      puVar9[2] = 0;
      puVar9[3] = 0;
      puVar9[4] = 0;
      uVar5 = *(undefined4 *)((longlong)puVar12 + 0xc);
      uVar6 = *(undefined4 *)(puVar12 + 2);
      uVar7 = *(undefined4 *)((longlong)puVar12 + 0x14);
      *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(puVar12 + 1);
      *(undefined4 *)((longlong)puVar9 + 0xc) = uVar5;
      *(undefined4 *)(puVar9 + 2) = uVar6;
      *(undefined4 *)((longlong)puVar9 + 0x14) = uVar7;
      uVar8 = puVar12[4];
      puVar9[3] = puVar12[3];
      puVar9[4] = uVar8;
      puVar12[3] = 0;
      puVar12[4] = 0xf;
      *(undefined1 *)(puVar12 + 1) = 0;
      puVar9 = puVar9 + 5;
    }
    puVar3 = (undefined8 *)param_1[1];
    puVar12 = puVar2;
    for (; param_2 != puVar3; param_2 = param_2 + 5) {
      puVar12[5] = *param_2;
      puVar12[6] = 0;
      puVar12[7] = 0;
      puVar12[8] = 0;
      puVar12[9] = 0;
      uVar5 = *(undefined4 *)((longlong)param_2 + 0xc);
      uVar6 = *(undefined4 *)(param_2 + 2);
      uVar7 = *(undefined4 *)((longlong)param_2 + 0x14);
      *(undefined4 *)(puVar12 + 6) = *(undefined4 *)(param_2 + 1);
      *(undefined4 *)((longlong)puVar12 + 0x34) = uVar5;
      *(undefined4 *)(puVar12 + 7) = uVar6;
      *(undefined4 *)((longlong)puVar12 + 0x3c) = uVar7;
      uVar8 = param_2[4];
      puVar12[8] = param_2[3];
      puVar12[9] = uVar8;
      param_2[3] = 0;
      param_2[4] = 0xf;
      *(undefined1 *)(param_2 + 1) = 0;
      puVar12 = puVar12 + 5;
    }
  }
  lVar15 = *param_1;
  if (lVar15 == 0) goto LAB_180216ecf;
  lVar10 = param_1[1];
  for (; lVar15 != lVar10; lVar15 = lVar15 + 0x28) {
    FUN_18000f890(lVar15 + 8);
  }
  lVar15 = *param_1;
  lVar10 = lVar15;
  if ((ulonglong)((param_1[2] - lVar15 >> 3) * 8) < 0x1000) {
LAB_180216ec4:
    puVar17 = puVar16;
  }
  else {
    lVar10 = *(longlong *)(lVar15 + -8);
    if (0x1f < (lVar15 - lVar10) - 8U) {
      lVar10 = 5;
      pcVar4 = (code *)swi(0x29);
      (*pcVar4)(5);
      puVar16 = auStack_40;
      goto LAB_180216ec4;
    }
  }
  *(undefined8 *)(puVar17 + -8) = 0x180216ecf;
  thunk_FUN_1803d64e0(lVar10);
LAB_180216ecf:
  *param_1 = (longlong)puVar11;
  param_1[1] = (longlong)(puVar11 + uVar1 * 5);
  param_1[2] = (longlong)(puVar11 + uVar14 * 5);
  return puVar2;
}



/* ===== 180216f20 FUN_180216f20 ===== */

longlong FUN_180216f20(longlong *param_1,longlong param_2,undefined8 param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  
  lVar8 = *param_1;
  lVar2 = (param_1[1] - lVar8 >> 4) * 0xf83e0f83e0f83e1;
  uVar6 = 0x7c1f07c1f07c1f;
  if (lVar2 == 0x7c1f07c1f07c1f) {
                    /* WARNING: Subroutine does not return */
    FUN_18000fb10();
  }
  uVar1 = lVar2 + 1;
  uVar4 = (param_1[2] - lVar8 >> 4) * 0xf83e0f83e0f83e1;
  if (uVar4 <= 0x7c1f07c1f07c1f - (uVar4 >> 1)) {
    uVar4 = (uVar4 >> 1) + uVar4;
    uVar6 = uVar1;
    if (uVar1 <= uVar4) {
      uVar6 = uVar4;
    }
    if (0x7c1f07c1f07c1f < uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  lVar3 = FUN_18000fb70(uVar6 * 0x210);
  lVar9 = ((param_2 - lVar8) / 0x210) * 0x210 + lVar3;
  lVar2 = lVar9 + 0x210;
  plVar10 = param_1;
  lVar11 = lVar3;
  uVar4 = uVar6;
  lVar12 = lVar2;
  lVar13 = lVar2;
  FUN_180217180(-(param_2 - lVar8 >> 0x3f),lVar9,param_3);
  lVar8 = param_1[1];
  lVar5 = *param_1;
  lVar7 = lVar3;
  if (param_2 == lVar8) {
    lVar2 = lVar3;
    if (lVar5 != lVar8) {
      do {
        FUN_180217420(lVar2);
        lVar2 = lVar2 + 0x210;
        lVar5 = lVar5 + 0x210;
      } while (lVar5 != lVar8);
    }
  }
  else {
    for (; lVar5 != param_2; lVar5 = lVar5 + 0x210) {
      FUN_180217420(lVar7);
      lVar7 = lVar7 + 0x210;
    }
    lVar8 = param_1[1];
    if (param_2 != lVar8) {
      do {
        FUN_180217420(lVar2,param_2);
        lVar2 = lVar2 + 0x210;
        param_2 = param_2 + 0x210;
      } while (param_2 != lVar8);
    }
  }
  FUN_180217340(param_1,lVar3,uVar1,uVar6,plVar10,lVar11,uVar4,lVar12,lVar13);
  return lVar9;
}



/* ===== 1802170c0 FUN_1802170c0 ===== */

undefined4 * FUN_1802170c0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  
  for (; param_1 != param_2; param_1 = param_1 + 0x1a) {
    *param_3 = *param_1;
    param_3[1] = param_1[1];
    *(undefined8 *)(param_3 + 2) = *(undefined8 *)(param_1 + 2);
    uVar1 = *(undefined8 *)(param_1 + 6);
    *(undefined8 *)(param_3 + 4) = *(undefined8 *)(param_1 + 4);
    *(undefined8 *)(param_3 + 6) = uVar1;
    param_3[8] = param_1[8];
    param_3[9] = param_1[9];
    *(undefined8 *)(param_3 + 10) = 0;
    *(undefined8 *)(param_3 + 0xc) = 0;
    *(undefined8 *)(param_3 + 0xe) = 0;
    *(undefined8 *)(param_3 + 0x10) = 0;
    uVar1 = *(undefined8 *)(param_1 + 0xc);
    *(undefined8 *)(param_3 + 10) = *(undefined8 *)(param_1 + 10);
    *(undefined8 *)(param_3 + 0xc) = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_3 + 0xe) = *(undefined8 *)(param_1 + 0xe);
    *(undefined8 *)(param_3 + 0x10) = uVar1;
    *(undefined1 *)(param_1 + 10) = 0;
    *(undefined8 *)(param_1 + 0xe) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0xf;
    *(undefined8 *)(param_3 + 0x12) = 0;
    *(undefined8 *)(param_3 + 0x14) = 0;
    *(undefined8 *)(param_3 + 0x16) = 0;
    *(undefined8 *)(param_3 + 0x18) = 0;
    uVar1 = *(undefined8 *)(param_1 + 0x14);
    *(undefined8 *)(param_3 + 0x12) = *(undefined8 *)(param_1 + 0x12);
    *(undefined8 *)(param_3 + 0x14) = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_3 + 0x16) = *(undefined8 *)(param_1 + 0x16);
    *(undefined8 *)(param_3 + 0x18) = uVar1;
    *(undefined1 *)(param_1 + 0x12) = 0;
    param_3 = param_3 + 0x1a;
    *(undefined8 *)(param_1 + 0x16) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0xf;
  }
  return param_3;
}



/* ===== 180217180 FUN_180217180 ===== */

void FUN_180217180(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  
  *param_2 = *param_3;
  param_2[1] = param_3[1];
  *(undefined4 *)(param_2 + 2) = *(undefined4 *)(param_3 + 2);
  FUN_180024b50(param_2 + 3,param_3 + 3);
  *(undefined4 *)(param_2 + 7) = *(undefined4 *)(param_3 + 7);
  lVar6 = 3;
  *(undefined1 *)((longlong)param_2 + 0x3c) = *(undefined1 *)((longlong)param_3 + 0x3c);
  puVar2 = param_3 + 8;
  puVar3 = param_2 + 8;
  do {
    puVar5 = puVar3;
    puVar4 = puVar2;
    uVar1 = puVar4[1];
    *puVar5 = *puVar4;
    puVar5[1] = uVar1;
    uVar1 = puVar4[3];
    puVar5[2] = puVar4[2];
    puVar5[3] = uVar1;
    uVar1 = puVar4[5];
    puVar5[4] = puVar4[4];
    puVar5[5] = uVar1;
    uVar1 = puVar4[7];
    puVar5[6] = puVar4[6];
    puVar5[7] = uVar1;
    uVar1 = puVar4[9];
    puVar5[8] = puVar4[8];
    puVar5[9] = uVar1;
    uVar1 = puVar4[0xb];
    puVar5[10] = puVar4[10];
    puVar5[0xb] = uVar1;
    uVar1 = puVar4[0xd];
    puVar5[0xc] = puVar4[0xc];
    puVar5[0xd] = uVar1;
    uVar1 = puVar4[0xf];
    puVar5[0xe] = puVar4[0xe];
    puVar5[0xf] = uVar1;
    lVar6 = lVar6 + -1;
    puVar2 = puVar4 + 0x10;
    puVar3 = puVar5 + 0x10;
  } while (lVar6 != 0);
  uVar1 = puVar4[0x11];
  puVar5[0x10] = puVar4[0x10];
  puVar5[0x11] = uVar1;
  uVar1 = puVar4[0x13];
  puVar5[0x12] = puVar4[0x12];
  puVar5[0x13] = uVar1;
  uVar1 = param_3[0x3d];
  param_2[0x3c] = param_3[0x3c];
  param_2[0x3d] = uVar1;
  *(undefined4 *)(param_2 + 0x3e) = *(undefined4 *)(param_3 + 0x3e);
  *(undefined4 *)((longlong)param_2 + 500) = *(undefined4 *)((longlong)param_3 + 500);
  param_2[0x3f] = param_3[0x3f];
  param_2[0x40] = param_3[0x40];
  *(undefined1 *)(param_2 + 0x41) = *(undefined1 *)(param_3 + 0x41);
  *(undefined1 *)((longlong)param_2 + 0x209) = *(undefined1 *)((longlong)param_3 + 0x209);
  return;
}



/* ===== 1802172a0 FUN_1802172a0 ===== */

void FUN_1802172a0(longlong param_1)

{
  longlong lVar1;
  code *pcVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  lVar1 = *(longlong *)(param_1 + 0x20);
  for (lVar4 = *(longlong *)(param_1 + 0x18); lVar4 != lVar1; lVar4 = lVar4 + 0x210) {
    FUN_18000f890(lVar4 + 0x18);
  }
  uVar3 = *(longlong *)(param_1 + 0x10) * 0x210;
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



/* ===== 180217340 FUN_180217340 ===== */

void FUN_180217340(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

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
  if (lVar3 == 0) goto LAB_1802173e4;
  lVar2 = param_1[1];
  for (; lVar3 != lVar2; lVar3 = lVar3 + 0x210) {
    FUN_18000f890(lVar3 + 0x18);
  }
  lVar3 = *param_1;
  lVar2 = lVar3;
  if ((ulonglong)((param_1[2] - lVar3 >> 4) * 0x10) < 0x1000) {
LAB_1802173d9:
    puVar5 = puVar4;
  }
  else {
    lVar2 = *(longlong *)(lVar3 + -8);
    if (0x1f < (lVar3 - lVar2) - 8U) {
      lVar2 = 5;
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(5);
      puVar4 = auStack_30;
      goto LAB_1802173d9;
    }
  }
  *(undefined8 *)(puVar5 + -8) = 0x1802173e4;
  thunk_FUN_1803d64e0(lVar2);
LAB_1802173e4:
  *param_1 = param_2;
  param_1[1] = param_3 * 0x210 + param_2;
  param_1[2] = param_4 * 0x210 + param_2;
  return;
}



/* ===== 180217420 FUN_180217420 ===== */

undefined8 * FUN_180217420(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  
  *param_1 = *param_2;
  lVar6 = 3;
  param_1[1] = param_2[1];
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  uVar1 = param_2[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar1;
  uVar1 = param_2[6];
  param_1[5] = param_2[5];
  param_1[6] = uVar1;
  *(undefined1 *)(param_2 + 3) = 0;
  param_2[5] = 0;
  param_2[6] = 0xf;
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  *(undefined1 *)((longlong)param_1 + 0x3c) = *(undefined1 *)((longlong)param_2 + 0x3c);
  puVar2 = param_2 + 8;
  puVar3 = param_1 + 8;
  do {
    puVar5 = puVar3;
    puVar4 = puVar2;
    uVar1 = puVar4[1];
    *puVar5 = *puVar4;
    puVar5[1] = uVar1;
    uVar1 = puVar4[3];
    puVar5[2] = puVar4[2];
    puVar5[3] = uVar1;
    uVar1 = puVar4[5];
    puVar5[4] = puVar4[4];
    puVar5[5] = uVar1;
    uVar1 = puVar4[7];
    puVar5[6] = puVar4[6];
    puVar5[7] = uVar1;
    uVar1 = puVar4[9];
    puVar5[8] = puVar4[8];
    puVar5[9] = uVar1;
    uVar1 = puVar4[0xb];
    puVar5[10] = puVar4[10];
    puVar5[0xb] = uVar1;
    uVar1 = puVar4[0xd];
    puVar5[0xc] = puVar4[0xc];
    puVar5[0xd] = uVar1;
    uVar1 = puVar4[0xf];
    puVar5[0xe] = puVar4[0xe];
    puVar5[0xf] = uVar1;
    lVar6 = lVar6 + -1;
    puVar2 = puVar4 + 0x10;
    puVar3 = puVar5 + 0x10;
  } while (lVar6 != 0);
  uVar1 = puVar4[0x11];
  puVar5[0x10] = puVar4[0x10];
  puVar5[0x11] = uVar1;
  uVar1 = puVar4[0x13];
  puVar5[0x12] = puVar4[0x12];
  puVar5[0x13] = uVar1;
  uVar1 = param_2[0x3d];
  param_1[0x3c] = param_2[0x3c];
  param_1[0x3d] = uVar1;
  *(undefined4 *)(param_1 + 0x3e) = *(undefined4 *)(param_2 + 0x3e);
  *(undefined4 *)((longlong)param_1 + 500) = *(undefined4 *)((longlong)param_2 + 500);
  param_1[0x3f] = param_2[0x3f];
  param_1[0x40] = param_2[0x40];
  *(undefined1 *)(param_1 + 0x41) = *(undefined1 *)(param_2 + 0x41);
  *(undefined1 *)((longlong)param_1 + 0x209) = *(undefined1 *)((longlong)param_2 + 0x209);
  return param_1;
}



/* ===== 180217550 FUN_180217550 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180217550(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  ULONGLONG UVar2;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStack_258 [32];
  undefined8 local_238;
  undefined8 *local_230;
  undefined1 local_228 [512];
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_258;
  if (DAT_180cec8f8 < 0x259) {
    local_res10 = param_2;
    local_res18 = param_3;
    local_res20 = param_4;
    FUN_180540170(local_228,0,0x200);
    puVar1 = (ulonglong *)FUN_180013640();
    local_238 = 0;
    local_230 = &local_res10;
    FUN_180501904(*puVar1 | 2,local_228,0x200,param_1);
    UVar2 = GetTickCount64();
    FUN_1811bd179("wl_skins.log","[%llu] agents | %s\n",UVar2,local_228);
    DAT_180cec8f8 = DAT_180cec8f8 + 1;
  }
  return;
}



/* ===== 180217620 FUN_180217620 ===== */

void FUN_180217620(void)

{
  if ((DAT_180cec8c0 != '\0') || (DAT_1811089f0 == 0)) {
    return;
  }
  DAT_180cec8c0 = 1;
  DAT_180cec8c4 = FUN_18038eaf0("CSkeletonInstance","m_modelState");
  DAT_180cec8c8 = FUN_18038eaf0("CModelState","m_hModel");
  DAT_180cec8cc = FUN_18038eaf0("CModelState","m_ModelName");
  DAT_180cec8d0 = FUN_18038eaf0("CModelState","m_MeshGroupMask");
  DAT_180cec8d4 = FUN_18038eaf0("CModelState","m_nBodyGroupChoices");
  DAT_180cec8d8 = FUN_18038eaf0("CSkeletonInstance","m_materialGroup");
  DAT_180cec8dc = FUN_18038eaf0("C_CSPlayerPawn","m_vecPlayerPatchEconIndices");
  if (DAT_180cec8dc != 0) {
    if (DAT_180961c28 == 0) {
      DAT_180cec8e0 = DAT_180cec8dc + 0x14;
    }
    else {
      DAT_180cec8e0 = DAT_180961c28;
    }
  }
  DAT_180cec8e4 = FUN_18038eaf0("CCSPlayerController","m_nPawnCharacterDefIndex");
  DAT_180cec8e8 = FUN_18038eaf0("C_BasePlayerPawn","m_pItemServices");
  DAT_180cec8ec = FUN_18038eaf0("CCSPlayer_ItemServices","m_bHasDefuser");
  DAT_180cec8f0 = FUN_18038eaf0("C_CSPlayerPawn","m_bNeedToReApplyGloves");
  FUN_180217550("offsets | model state %x | handle %x | name %x | mesh mask %x | body choices %x | material group %x | patches %x | dirty %x | character def %x | item services %x | defuser %x | reapply gloves %x"
                ,DAT_180cec8c4,DAT_180cec8c8,DAT_180cec8cc,DAT_180cec8d0,DAT_180cec8d4,DAT_180cec8d8
                ,DAT_180cec8dc,DAT_180cec8e0,DAT_180cec8e4,DAT_180cec8e8,DAT_180cec8ec,DAT_180cec8f0
               );
  FUN_180217550("patterns | set_bodygroup %p | body_group_commit %p | set_material_group %p",
                DAT_180961f08,DAT_180961f10,DAT_180961f18);
  return;
}



/* ===== 180217820 FUN_180217820 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_180217820(undefined8 *param_1,longlong param_2)

{
  char cVar1;
  ulonglong uVar2;
  size_t sVar3;
  longlong lVar4;
  undefined1 auStack_168 [40];
  undefined8 *local_140;
  char local_138 [272];
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_168;
  if (param_2 - 0x10000U < 0x7ffffffeffff) {
    local_140 = param_1;
    FUN_180540170(local_138,0,0x104);
    lVar4 = 0;
    do {
      cVar1 = FUN_180011220(param_2 + lVar4);
      if (cVar1 == '\0') break;
      local_138[lVar4] = cVar1;
      uVar2 = lVar4 + 2;
      lVar4 = lVar4 + 1;
    } while (uVar2 < 0x104);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    sVar3 = strlen(local_138);
    FUN_1800133a0(param_1,local_138,sVar3);
  }
  else {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0xf;
    *(undefined1 *)param_1 = 0;
  }
  return param_1;
}



/* ===== 180217910 FUN_180217910 ===== */

void FUN_180217910(longlong param_1,undefined1 *param_2,ulonglong param_3)

{
  char cVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  if ((param_3 != 0) && (*param_2 = 0, param_1 - 0x10000U < 0x7ffffffeffff)) {
    lVar3 = 0;
    if (1 < param_3) {
      do {
        cVar1 = FUN_180011220(lVar3 + param_1);
        param_2[lVar3] = cVar1;
        if (cVar1 == '\0') {
          return;
        }
        uVar2 = lVar3 + 2;
        lVar3 = lVar3 + 1;
      } while (uVar2 < param_3);
    }
    param_2[param_3 - 1] = 0;
  }
  return;
}



/* ===== 180217990 FUN_180217990 ===== */

undefined8 FUN_180217990(undefined8 *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  char cVar2;
  undefined8 *puVar3;
  char cVar4;
  ulonglong uVar5;
  
  uVar1 = param_1[2];
  if ((uVar1 == 0) || (uVar1 != param_2[2])) {
    return 0;
  }
  if (uVar1 != 0) {
    uVar5 = 0;
    do {
      if ((ulonglong)param_1[3] < 0x10) {
        puVar3 = param_1;
      }
      else {
        puVar3 = (undefined8 *)*param_1;
      }
      cVar4 = *(char *)((longlong)puVar3 + uVar5);
      if (cVar4 == '\\') {
        cVar4 = '/';
      }
      else if ((byte)(cVar4 + 0xbfU) < 0x1a) {
        cVar4 = cVar4 + ' ';
      }
      if ((ulonglong)param_2[3] < 0x10) {
        puVar3 = param_2;
      }
      else {
        puVar3 = (undefined8 *)*param_2;
      }
      cVar2 = *(char *)((longlong)puVar3 + uVar5);
      if (cVar2 == '\\') {
        cVar2 = '/';
      }
      else if ((byte)(cVar2 + 0xbfU) < 0x1a) {
        cVar2 = cVar2 + ' ';
      }
      if (cVar4 != cVar2) {
        return 0;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar1);
  }
  return 1;
}



/* ===== 180217a40 FUN_180217a40 ===== */

uint FUN_180217a40(char *param_1)

{
  size_t sVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  uint uVar8;
  char cVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar12;
  
  sVar1 = strlen(param_1);
  uVar4 = (uint)sVar1;
  uVar11 = 0;
  uVar8 = uVar4 ^ 0x31415926;
  if (3 < uVar4) {
    do {
      cVar5 = param_1[uVar11];
      iVar10 = (int)uVar11;
      if (cVar5 == '\\') {
        cVar5 = '/';
      }
      else if ((byte)(cVar5 + 0xbfU) < 0x1a) {
        cVar5 = cVar5 + ' ';
      }
      cVar9 = param_1[iVar10 + 1];
      if (cVar9 == '\\') {
        cVar9 = '/';
      }
      else if ((byte)(cVar9 + 0xbfU) < 0x1a) {
        cVar9 = cVar9 + ' ';
      }
      cVar6 = param_1[iVar10 + 2];
      if (cVar6 == '\\') {
        cVar6 = '/';
      }
      else if ((byte)(cVar6 + 0xbfU) < 0x1a) {
        cVar6 = cVar6 + ' ';
      }
      cVar7 = param_1[iVar10 + 3];
      if (cVar7 == '\\') {
        cVar7 = '/';
      }
      else if ((byte)(cVar7 + 0xbfU) < 0x1a) {
        cVar7 = cVar7 + ' ';
      }
      uVar11 = (ulonglong)(iVar10 + 4);
      uVar3 = CONCAT13(cVar7,CONCAT12(cVar6,CONCAT11(cVar9,cVar5))) * 0x5bd1e995;
      uVar8 = uVar8 * 0x5bd1e995 ^ (uVar3 >> 0x18 ^ uVar3) * 0x5bd1e995;
    } while (iVar10 + 8U <= uVar4);
  }
  iVar10 = (int)uVar11;
  iVar12 = uVar4 - iVar10;
  if (iVar12 != 1) {
    if (iVar12 != 2) {
      if (iVar12 != 3) goto LAB_180217bb1;
      bVar2 = param_1[iVar10 + 2];
      if (bVar2 == 0x5c) {
        bVar2 = 0x2f;
      }
      else if ((byte)(bVar2 + 0xbf) < 0x1a) {
        bVar2 = bVar2 + 0x20;
      }
      uVar8 = uVar8 ^ (uint)bVar2 << 0x10;
    }
    bVar2 = param_1[iVar10 + 1];
    if (bVar2 == 0x5c) {
      bVar2 = 0x2f;
    }
    else if ((byte)(bVar2 + 0xbf) < 0x1a) {
      bVar2 = bVar2 + 0x20;
    }
    uVar8 = uVar8 ^ (uint)bVar2 << 8;
  }
  bVar2 = param_1[uVar11];
  if (bVar2 == 0x5c) {
    bVar2 = 0x2f;
  }
  else if ((byte)(bVar2 + 0xbf) < 0x1a) {
    bVar2 = bVar2 + 0x20;
  }
  uVar8 = (bVar2 ^ uVar8) * 0x5bd1e995;
LAB_180217bb1:
  uVar4 = (uVar8 >> 0xd ^ uVar8) * 0x5bd1e995;
  return uVar4 >> 0xf ^ uVar4;
}



/* ===== 180217bd0 FUN_180217bd0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_180217bd0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 ****ppppuVar4;
  char cVar5;
  ulonglong uVar6;
  undefined1 auStack_68 [32];
  longlong *local_48 [2];
  undefined8 ****local_38;
  longlong lStack_30;
  ulonglong local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_68;
  if ((((*param_2 != 0) && (DAT_180ca09f8 != 0)) &&
      (local_48[0] = param_1, lVar1 = FUN_18000f3a0(*param_2 + (ulonglong)DAT_180ca09f8), lVar1 != 0
      )) && (((DAT_180cec8c4 != 0 && ((ulonglong)DAT_180cec8c4 + lVar1 != 0)) &&
             ((DAT_180cec8c8 != 0 &&
              (lVar1 = FUN_18000f3a0((ulonglong)DAT_180cec8c4 + lVar1 + (ulonglong)DAT_180cec8c8),
              lVar1 - 0x10000U < 0x7ffffffeffff)))))) {
    lVar2 = FUN_18000f3a0(lVar1);
    lVar1 = 0;
    if (lVar2 - 0x10000U < 0x7ffffffeffff) {
      lVar1 = lVar2;
    }
    if (lVar1 != 0) {
      uVar3 = FUN_18000f3a0(lVar1 + 8);
      FUN_180217820(&local_38,uVar3);
      local_48[0] = (longlong *)CONCAT26(local_48[0]._6_2_,0x6c646d762e);
      if (5 < local_28) {
        uVar6 = 0;
        while( true ) {
          ppppuVar4 = &local_38;
          if (0xf < uStack_20) {
            ppppuVar4 = local_38;
          }
          cVar5 = *(char *)((longlong)ppppuVar4 + (uVar6 - 5) + local_28);
          if (cVar5 == '\\') {
            cVar5 = '/';
          }
          else if ((byte)(cVar5 + 0xbfU) < 0x1a) {
            cVar5 = cVar5 + ' ';
          }
          if (cVar5 != *(char *)((longlong)local_48 + uVar6)) break;
          uVar6 = uVar6 + 1;
          if (4 < uVar6) {
            *param_1 = (longlong)local_38;
            param_1[1] = lStack_30;
            param_1[2] = local_28;
            param_1[3] = uStack_20;
            return param_1;
          }
        }
      }
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0xf;
      *(undefined1 *)param_1 = 0;
      FUN_18000f890(&local_38);
      return param_1;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  return param_1;
}



/* ===== 180217d80 FUN_180217d80 ===== */

undefined8 FUN_180217d80(void)

{
  if (DAT_180961f08 == (code *)0x0) {
    return 0;
  }
  (*DAT_180961f08)();
  return 1;
}



/* ===== 180217db0 FUN_180217db0 ===== */

undefined8 FUN_180217db0(void)

{
  if (DAT_180961f10 == (code *)0x0) {
    return 0;
  }
  (*DAT_180961f10)();
  return 1;
}



/* ===== 180217de0 FUN_180217de0 ===== */

undefined8 FUN_180217de0(void)

{
  if (DAT_180961f18 == (code *)0x0) {
    return 0;
  }
  (*DAT_180961f18)();
  return 1;
}



/* ===== 180217e10 FUN_180217e10 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180217e10(longlong param_1,int param_2,char param_3,byte param_4)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  byte bVar10;
  ulonglong uVar11;
  undefined4 *puVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  uint local_98;
  byte local_88 [8];
  int local_80 [6];
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  ulonglong local_50;
  
  local_50 = DAT_180919500 ^ (ulonglong)auStack_c8;
  iVar13 = _DAT_180cec868;
  iVar14 = uRam0000000180cec86c;
  iVar15 = uRam0000000180cec870;
  iVar16 = uRam0000000180cec874;
  iVar7 = _DAT_180cec878;
  if ((DAT_180cec8dc != 0) && (DAT_180cec8e0 != 0)) {
    bVar1 = false;
    local_80[4] = 0;
    local_80[0] = 0;
    local_80[1] = 0;
    local_80[2] = 0;
    local_80[3] = 0;
    iVar13 = 0;
    iVar14 = 0;
    iVar15 = 0;
    iVar16 = 0;
    if (param_3 != '\0') {
      puVar12 = &DAT_1809216bc;
      if (param_2 != 0) {
        puVar12 = &DAT_1809216d0;
      }
      uVar11 = 0;
      bVar1 = false;
      do {
        if ((0 < (int)puVar12[uVar11]) && (piVar9 = DAT_180cfc8b0, DAT_180ccfeda != '\0')) {
          for (; piVar9 != DAT_180cfc8b8; piVar9 = piVar9 + 0x26) {
            if (*piVar9 == puVar12[uVar11]) goto LAB_180217ed7;
          }
          piVar9 = (int *)0x0;
LAB_180217ed7:
          if (piVar9 != (int *)0x0) {
            local_80[uVar11] = puVar12[uVar11];
          }
        }
        piVar9 = local_80 + uVar11;
        uVar11 = uVar11 + 1;
        bVar1 = (bool)(bVar1 | *piVar9 != 0);
      } while (uVar11 < 5);
      iVar13 = local_80[0];
      iVar14 = local_80[1];
      iVar15 = local_80[2];
      iVar16 = local_80[3];
    }
    iVar7 = local_80[4];
    local_88[0] = param_4;
    uVar2 = FUN_180011200((ulonglong)DAT_180cec8dc + param_1);
    uVar3 = FUN_180011200((ulonglong)DAT_180cec8dc + 4 + param_1);
    uVar4 = FUN_180011200((ulonglong)DAT_180cec8dc + 8 + param_1);
    uVar5 = FUN_180011200((ulonglong)DAT_180cec8dc + 0xc + param_1);
    uVar6 = FUN_180011200((ulonglong)DAT_180cec8dc + 0x10 + param_1);
    local_68 = uVar2;
    local_64 = uVar3;
    local_60 = uVar4;
    local_5c = uVar5;
    local_58 = uVar6;
    if (bVar1) {
      if (DAT_180cc5099 == '\0') {
        DAT_180cc5099 = '\x01';
        bVar10 = 1;
        _DAT_180cec920 = uVar2;
        _DAT_180cec924 = uVar3;
        _DAT_180cec928 = uVar4;
        _DAT_180cec92c = uVar5;
        _DAT_180cec930 = uVar6;
      }
      else {
        iVar8 = memcmp(&local_68,&DAT_180cec868,0x14);
        if (iVar8 != 0) {
          _DAT_180cec920 = uVar2;
          _DAT_180cec924 = uVar3;
          _DAT_180cec928 = uVar4;
          _DAT_180cec92c = uVar5;
          _DAT_180cec930 = uVar6;
        }
        bVar10 = local_88[0];
      }
      iVar8 = memcmp(&local_68,local_80,0x14);
      if ((iVar8 != 0) || (bVar10 != 0)) {
        uVar11 = 0;
        do {
          FUN_180013280((ulonglong)DAT_180cec8dc + uVar11 * 4 + param_1,local_80 + uVar11);
          uVar11 = uVar11 + 1;
        } while (uVar11 < 5);
        local_88[0] = 1;
        FUN_1800233d0((ulonglong)DAT_180cec8e0 + param_1,local_88);
        local_98 = (uint)bVar10;
        local_a8 = iVar16;
        local_a0 = iVar7;
        FUN_180217550("patches | %u %u %u %u %u | rebuild %d",iVar13,iVar14,iVar15);
      }
    }
    else {
      iVar13 = _DAT_180cec868;
      iVar14 = uRam0000000180cec86c;
      iVar15 = uRam0000000180cec870;
      iVar16 = uRam0000000180cec874;
      iVar7 = _DAT_180cec878;
      if (DAT_180cc5099 != '\0') {
        iVar7 = memcmp(&local_68,&DAT_180cec868,0x14);
        if (iVar7 == 0) {
          uVar11 = 0;
          do {
            FUN_180013280((ulonglong)DAT_180cec8dc + uVar11 * 4 + param_1,
                          &DAT_180cec920 + uVar11 * 4);
            uVar11 = uVar11 + 1;
          } while (uVar11 < 5);
          local_88[0] = 1;
          FUN_1800233d0((ulonglong)DAT_180cec8e0 + param_1,local_88);
        }
        DAT_180cc5099 = '\0';
        FUN_180217550("patches | restored");
        iVar13 = _DAT_180cec868;
        iVar14 = uRam0000000180cec86c;
        iVar15 = uRam0000000180cec870;
        iVar16 = uRam0000000180cec874;
        iVar7 = _DAT_180cec878;
      }
    }
  }
  _DAT_180cec878 = iVar7;
  uRam0000000180cec874 = iVar16;
  uRam0000000180cec870 = iVar15;
  uRam0000000180cec86c = iVar14;
  _DAT_180cec868 = iVar13;
  return;
}



/* ===== 180218190 FUN_180218190 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool FUN_180218190(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  ulonglong local_58 [10];
  
  local_58[8] = DAT_180919500 ^ (ulonglong)auStack_78;
  local_58[0] = 0;
  local_58[1] = 0;
  local_58[2] = 0;
  local_58[3] = 0;
  local_58[4] = 0;
  local_58[5] = 0;
  local_58[6] = 0;
  local_58[7] = 0;
  lVar3 = FUN_18000f3a0(param_1 + 8);
  local_58[0] = local_58[0] & 0xffffffffffffff00;
  if (lVar3 - 0x10000U < 0x7ffffffeffff) {
    lVar5 = 0;
    do {
      cVar1 = FUN_180011220(lVar5 + lVar3);
      *(char *)((longlong)local_58 + lVar5) = cVar1;
      if (cVar1 == '\0') goto LAB_180218222;
      uVar4 = lVar5 + 2;
      lVar5 = lVar5 + 1;
    } while (uVar4 < 0x40);
    local_58[7] = local_58[7] & 0xffffffffffffff;
  }
LAB_180218222:
  iVar2 = FUN_1805117b0(local_58,param_2);
  return iVar2 == 0;
}



/* ===== 180218250 FUN_180218250 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180218250(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 uVar13;
  longlong lVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  undefined1 auStack_cb8 [32];
  uint local_c98;
  int local_c90;
  uint local_c88;
  uint local_c80;
  ulonglong local_c78;
  ulonglong local_c70;
  undefined8 local_c68;
  int local_c60;
  int local_c58;
  int local_c50;
  undefined4 local_c48;
  char local_c38;
  byte local_c37;
  int local_c34;
  char local_c30;
  int local_c2c;
  int local_c28;
  int local_c24;
  int local_c20;
  longlong local_c18;
  longlong local_c10;
  int local_c08;
  undefined4 local_c04;
  undefined4 local_c00;
  ulonglong local_bf8;
  ulonglong local_bf0;
  ulonglong local_be8;
  ulonglong local_be0;
  longlong local_bd8;
  ulonglong local_bd0;
  ulonglong local_bc8;
  undefined8 local_bc0;
  longlong local_bb8;
  undefined4 local_b95;
  undefined1 local_b91;
  undefined1 local_b78 [4];
  undefined4 local_b74;
  undefined4 local_b70;
  undefined2 local_b6c;
  undefined8 local_b68;
  int local_b60;
  undefined1 local_b58 [48];
  int aiStack_b28 [2];
  undefined8 local_b20 [8];
  undefined8 auStack_ae0 [241];
  int local_358;
  char local_354 [47];
  undefined1 auStack_325 [733];
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_cb8;
  local_c37 = 0;
  local_c38 = '\0';
  local_c30 = '\0';
  local_bd0 = 0;
  local_bc8 = 0;
  local_b6c = 0;
  local_b68 = 0;
  local_b60 = 0;
  local_c10 = param_1;
  local_c04 = param_3;
  local_c00 = param_2;
  FUN_180540170(local_b58,0,0x800);
  FUN_18021a910(local_b58);
  local_358 = 0;
  FUN_180540170(local_354,0,0x304);
  local_b78[0] = 1;
  local_b74 = param_2;
  local_b70 = param_3;
  iVar5 = FUN_180011200(param_1 + 0x1a8);
  local_c08 = iVar5;
  lVar9 = FUN_18000f3a0(param_1 + 0x1b0);
  uVar15 = 0;
  if (0 < iVar5) {
    do {
      if (0xfff < (uint)uVar15) break;
      uVar10 = FUN_180011200(lVar9 + uVar15 * 4);
      if ((uVar10 & 8) != 0) {
        local_c37 = 1;
        break;
      }
      uVar16 = (uint)uVar15 + 1;
      uVar15 = (ulonglong)uVar16;
    } while ((int)uVar16 < iVar5);
  }
  local_bc0 = FUN_18000f3a0(param_1 + 0x128);
  iVar5 = FUN_180011200();
  if (0x1000 < iVar5) {
    iVar5 = 0x1000;
  }
  local_c28 = 0;
  if (0 < iVar5) {
    local_c28 = iVar5;
  }
  local_bd8 = FUN_18000f3a0(param_1 + 0x90);
  iVar5 = FUN_180011200(param_1 + 0x280);
  if (iVar5 - 1U < 0xfff) {
    local_c24 = iVar5;
    local_c34 = FUN_180217a40("first_or_third_person");
    local_c2c = 0;
    if (0 < iVar5) {
      local_bb8 = param_1 + 0x288;
      iVar5 = local_c34;
LAB_1802183e0:
      iVar7 = local_c2c;
      lVar11 = FUN_18000f3a0(local_bb8);
      lVar9 = lVar11 + (longlong)iVar7 * 0x50;
      local_c18 = lVar9;
      iVar6 = FUN_180011200(lVar9 + 0x10);
      iVar8 = 0;
      if (iVar6 - 1U < 0xfff) {
        iVar8 = iVar6;
      }
      local_c20 = iVar8;
      iVar6 = FUN_180011200(lVar9);
      if ((iVar6 == iVar5) || (cVar4 = FUN_180218190(lVar9,"first_or_third_person"), cVar4 != '\0'))
      {
        iVar5 = FUN_180217a40("firstperson_default");
        iVar7 = FUN_180011200(lVar9 + 0x28);
        lVar11 = lVar9 + 0x30;
        if (iVar7 - 1U < 0xfff) {
          lVar12 = FUN_18000f3a0(lVar11);
          uVar15 = 0;
          if (0 < iVar7) {
            do {
              iVar8 = FUN_180011200(lVar12 + uVar15 * 0x18);
              if (iVar8 == iVar5) {
                local_bf8 = uVar15;
                goto LAB_1802185a9;
              }
              uVar16 = (int)uVar15 + 1;
              uVar15 = (ulonglong)uVar16;
            } while ((int)uVar16 < iVar7);
          }
        }
        local_bf8 = 0xffffffffffffffff;
        uVar15 = 0xffffffff;
LAB_1802185a9:
        iVar5 = FUN_180217a40("firstperson_hide_default_gloves");
        iVar7 = FUN_180011200(lVar9 + 0x28);
        if (iVar7 - 1U < 0xfff) {
          lVar9 = FUN_18000f3a0(lVar11);
          uVar10 = 0;
          if (0 < iVar7) {
            do {
              iVar8 = FUN_180011200(lVar9 + uVar10 * 0x18);
              if (iVar8 == iVar5) {
                local_bf0 = uVar10;
                goto LAB_180218609;
              }
              uVar16 = (int)uVar10 + 1;
              uVar10 = (ulonglong)uVar16;
            } while ((int)uVar16 < iVar7);
          }
        }
        local_bf0 = 0xffffffffffffffff;
        uVar10 = 0xffffffff;
LAB_180218609:
        iVar5 = FUN_180217a40("thirdperson_default");
        iVar7 = FUN_180011200(local_c18 + 0x28);
        if (iVar7 - 1U < 0xfff) {
          lVar9 = FUN_18000f3a0(lVar11);
          uVar18 = 0;
          if (0 < iVar7) {
            do {
              iVar8 = FUN_180011200(lVar9 + uVar18 * 0x18);
              if (iVar8 == iVar5) {
                local_be8 = uVar18;
                goto LAB_18021867c;
              }
              uVar16 = (int)uVar18 + 1;
              uVar18 = (ulonglong)uVar16;
            } while ((int)uVar16 < iVar7);
          }
        }
        local_be8 = 0xffffffffffffffff;
        uVar18 = 0xffffffff;
LAB_18021867c:
        iVar5 = FUN_180217a40("thirdperson_hide_default_gloves");
        lVar9 = local_c18;
        iVar7 = FUN_180011200(local_c18 + 0x28);
        if (iVar7 - 1U < 0xfff) {
          lVar9 = FUN_18000f3a0(lVar9 + 0x30);
          uVar17 = 0;
          if (0 < iVar7) {
            do {
              iVar8 = FUN_180011200(lVar9 + uVar17 * 0x18);
              if (iVar8 == iVar5) {
                lVar9 = local_c18;
                local_be0 = uVar17;
                goto LAB_1802186ee;
              }
              uVar16 = (int)uVar17 + 1;
              uVar17 = (ulonglong)uVar16;
            } while ((int)uVar16 < iVar7);
          }
          lVar9 = local_c18;
        }
        local_be0 = 0xffffffffffffffff;
        uVar17 = 0xffffffff;
LAB_1802186ee:
        iVar5 = local_c20;
        local_c80 = local_c28;
        iVar8 = (int)uVar17;
        iVar6 = (int)uVar18;
        iVar7 = (int)uVar10;
        local_c98 = iVar7;
        local_c90 = iVar6;
        local_c88 = iVar8;
        FUN_180217550("model | first_or_third_person group %d | choices %d | firstperson_default %d | firstperson_hide_default_gloves %d | thirdperson_default %d | thirdperson_hide_default_gloves %d | meshes %d"
                      ,local_c2c,local_c20,uVar15);
        if ((((-1 < (int)uVar15) && (-1 < iVar7)) && ((int)uVar15 < iVar5)) && (iVar7 < iVar5)) {
          lVar9 = lVar9 + 0x18;
          lVar11 = FUN_18000f3a0(lVar9);
          uVar15 = FUN_18000f3a0(lVar11 + local_bf8 * 8);
          lVar11 = FUN_18000f3a0(lVar9);
          uVar10 = FUN_18000f3a0(lVar11 + local_bf0 * 8);
          iVar5 = local_c28;
          iVar7 = 0;
          if (0 < local_c28) {
            do {
              uVar18 = FUN_18000f3a0(local_bd8 + (longlong)iVar7 * 8);
              if (((uVar15 & uVar18) != 0) && ((uVar18 & uVar10) == 0)) {
                bVar1 = true;
                goto LAB_1802187ad;
              }
              iVar7 = iVar7 + 1;
            } while (iVar7 < iVar5);
          }
          bVar1 = false;
          if (0 < local_c28) {
LAB_1802187ad:
            iVar5 = 0;
            do {
              uVar18 = FUN_18000f3a0(local_bd8 + (longlong)iVar5 * 8);
              if (((uVar15 & uVar18) != 0) && ((uVar18 & uVar10) != 0)) {
                bVar2 = true;
                goto LAB_1802187d7;
              }
              iVar5 = iVar5 + 1;
            } while (iVar5 < local_c28);
          }
          bVar2 = false;
LAB_1802187d7:
          if ((bVar1) && (bVar2)) {
            local_c30 = '\x01';
            local_bd0 = uVar15;
            local_bc8 = uVar10;
          }
          if ((((iVar6 < 0) || (iVar8 < 0)) || (local_c20 <= iVar6)) ||
             ((local_c20 <= iVar8 || (!bVar1)))) goto LAB_18021887e;
          lVar11 = FUN_18000f3a0(lVar9);
          uVar15 = FUN_18000f3a0(lVar11 + local_be8 * 8);
          lVar9 = FUN_18000f3a0(lVar9);
          uVar10 = FUN_18000f3a0(lVar9 + local_be0 * 8);
          lVar9 = local_bd8;
          iVar5 = local_c28;
          iVar7 = 0;
          if (0 < local_c28) {
            do {
              uVar18 = FUN_18000f3a0((longlong)iVar7 * 8 + lVar9);
              if (((uVar15 & uVar18) != 0) && ((uVar10 & uVar18) == 0)) {
                iVar7 = 0;
                goto LAB_1802188e0;
              }
              iVar7 = iVar7 + 1;
            } while (iVar7 < iVar5);
          }
          goto LAB_180218874;
        }
        goto LAB_18021887e;
      }
      cVar4 = FUN_180218190(lVar9,"defusekit");
      if ((((cVar4 == '\0') && (cVar4 = FUN_180218190(lVar9,"default_gloves"), cVar4 == '\0')) &&
          (cVar4 = FUN_180218190(lVar9,"first_or_third_person"), cVar4 == '\0')) &&
         ((1 < iVar8 && (lVar12 = (longlong)local_b60, local_b60 < 0x10)))) {
        local_b60 = local_b60 + 1;
        uVar13 = FUN_18000f3a0(lVar11 + ((longlong)iVar7 * 0x50 | 8U));
        FUN_180217910(uVar13,local_b58 + lVar12 * 0x80,0x30);
        if (8 < iVar8) {
          iVar8 = 8;
        }
        aiStack_b28[lVar12 * 0x20] = iVar8;
        uVar13 = FUN_18000f3a0(lVar9 + 0x40);
        iVar5 = 0;
        auStack_ae0[lVar12 * 0x10] = uVar13;
        if (0 < iVar8) {
          do {
            lVar11 = (longlong)iVar5;
            lVar14 = FUN_18000f3a0(lVar9 + 0x18);
            uVar13 = FUN_18000f3a0(lVar11 * 8 + lVar14);
            iVar5 = iVar5 + 1;
            local_b20[lVar12 * 0x10 + lVar11] = uVar13;
          } while (iVar5 < aiStack_b28[lVar12 * 0x20]);
        }
        goto LAB_18021887e;
      }
      goto LAB_180218881;
    }
    local_c24 = iVar5;
  }
  else {
    local_c24 = 0;
  }
LAB_180218919:
  iVar7 = FUN_180011200(param_1 + 0x110);
  iVar5 = FUN_180011200(param_1 + 0x298);
  local_c2c = iVar5;
  lVar9 = FUN_18000f3a0(param_1 + 0x118);
  uVar16 = 0;
  if (0 < iVar7) {
    do {
      if ((0xfff < uVar16) || (0xf < local_358)) break;
      lVar12 = (longlong)local_358 * 0x30;
      lVar11 = FUN_18000f3a0((ulonglong)uVar16 * 0x20 + lVar9);
      local_354[lVar12] = '\0';
      if (lVar11 - 0x10000U < 0x7ffffffeffff) {
        lVar14 = 0;
        do {
          cVar4 = FUN_180011220(lVar11 + lVar14);
          local_354[lVar14 + lVar12] = cVar4;
          if (cVar4 == '\0') goto LAB_1802189f6;
          uVar15 = lVar14 + 2;
          lVar14 = lVar14 + 1;
        } while (uVar15 < 0x30);
        auStack_325[lVar12] = 0;
      }
LAB_1802189f6:
      if (local_354[lVar12] != '\0') {
        local_358 = local_358 + 1;
      }
      uVar16 = uVar16 + 1;
    } while ((int)uVar16 < iVar7);
    param_1 = local_c10;
    iVar5 = local_c2c;
  }
  iVar7 = local_358;
  uVar10 = local_bc8;
  uVar15 = local_bd0;
  cVar3 = local_c30;
  cVar4 = local_c38;
  DAT_180cec898 = local_c37;
  _DAT_180cec89b = local_b95;
  local_b68 = local_bc0;
  DAT_180cec8b0 = local_bc0;
  DAT_180cec89f = local_b91;
  local_b6c = CONCAT11(local_c38,local_c37);
  DAT_180cec899 = local_c38;
  DAT_180cec89a = local_c30;
  DAT_180cec8a0 = local_bd0;
  DAT_180cec8a8 = local_bc8;
  DAT_180cec890 = param_1;
  iVar8 = FUN_1804e4d70(&DAT_1809f2710);
  if (iVar8 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809f275c == 0x7fffffff) {
    DAT_1809f275c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  FUN_180540530(&DAT_1809f1be0,local_b78,0xb28);
  FUN_1804e4e90(&DAT_1809f2710);
  local_c58 = local_c24;
  local_c60 = local_b60;
  local_c68 = local_bc0;
  local_c70 = uVar10;
  local_c78 = uVar15;
  local_c80 = (uint)(cVar3 != '\0');
  local_c88 = (uint)(cVar4 != '\0');
  local_c90 = local_c08;
  local_c98 = (uint)local_c37;
  local_c50 = iVar7;
  local_c48 = iVar5;
  FUN_180217550("model | %p | agent %d | side %d | cloth %d (bones %d) | gloves %d | sleeves %d %llx %llx | default mask %llx | body groups %d of %d | material groups %d (tokens %d)"
                ,param_1,local_c00,local_c04);
  return;
  while (iVar7 = iVar7 + 1, iVar7 < iVar5) {
LAB_1802188e0:
    uVar15 = FUN_18000f3a0((longlong)iVar7 * 8 + lVar9);
    if ((uVar10 & uVar15) != 0) {
      local_c38 = '\x01';
      goto LAB_18021887e;
    }
  }
LAB_180218874:
  local_c38 = '\0';
LAB_18021887e:
  iVar5 = local_c34;
LAB_180218881:
  local_c2c = local_c2c + 1;
  if (local_c24 <= local_c2c) goto code_r0x000180218896;
  goto LAB_1802183e0;
code_r0x000180218896:
  param_1 = local_c10;
  goto LAB_180218919;
}



/* ===== 180218b90 FUN_180218b90 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180218b90(void)

{
  int iVar1;
  undefined1 auStack_b98 [43];
  undefined4 local_b6d;
  undefined1 local_b69;
  undefined1 local_b48 [4];
  undefined4 local_b44;
  undefined4 local_b40;
  undefined2 local_b3c;
  undefined8 local_b38;
  undefined4 local_b30;
  undefined1 local_b28 [2048];
  undefined4 local_328;
  undefined1 local_324 [780];
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_b98;
  _DAT_180cec89b = local_b6d;
  DAT_180cec89f = local_b69;
  DAT_180cec890 = 0;
  _DAT_180cec898 = 0;
  DAT_180cec89a = 0;
  DAT_180cec8a0 = 0;
  DAT_180cec8a8 = 0;
  DAT_180cec8b0 = 0;
  DAT_180cc4c8c = 0;
  iVar1 = FUN_1804e4d70(&DAT_1809f2710);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809f275c == 0x7fffffff) {
    DAT_1809f275c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  local_b48[0] = 0;
  local_b44 = 0;
  local_b40 = 0xffffffff;
  local_b3c = 0;
  local_b38 = 0;
  local_b30 = 0;
  FUN_180540170(local_b28,0,0x800);
  FUN_18021a910(local_b28);
  local_328 = 0;
  FUN_180540170(local_324,0,0x304);
  FUN_180540530(&DAT_1809f1be0,local_b48,0xb28);
  FUN_1804e4e90(&DAT_1809f2710);
  return;
}



/* ===== 180218cd0 FUN_180218cd0 ===== */

void FUN_180218cd0(longlong *param_1,char param_2,longlong param_3)

{
  bool bVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined *puVar10;
  ulonglong uVar11;
  bool bVar12;
  uint uVar13;
  char local_res8;
  uint local_res20 [2];
  
  uVar13 = DAT_180cec8c4;
  uVar3 = DAT_180ca09f8;
  lVar7 = *param_1;
  uVar9 = (ulonglong)DAT_180cec8c4;
  uVar11 = (ulonglong)DAT_180ca09f8;
  if ((lVar7 == 0) || (DAT_180ca09f8 == 0)) {
LAB_180218d1b:
    lVar6 = 0;
  }
  else {
    lVar6 = FUN_18000f3a0(lVar7 + uVar11);
    lVar7 = *param_1;
    if ((lVar6 == 0) || (uVar13 == 0)) goto LAB_180218d1b;
    lVar6 = lVar6 + uVar9;
  }
  if (((((lVar7 == 0) || (uVar3 == 0)) || (lVar7 = FUN_18000f3a0(lVar7 + uVar11), lVar7 == 0)) ||
      ((uVar13 == 0 || (lVar7 = uVar9 + lVar7, lVar7 == 0)))) ||
     ((DAT_180cec8c8 == 0 ||
      (lVar7 = FUN_18000f3a0(lVar7 + (ulonglong)DAT_180cec8c8), 0x7ffffffefffe < lVar7 - 0x10000U)))
     ) {
    lVar7 = 0;
  }
  else {
    lVar8 = FUN_18000f3a0(lVar7);
    lVar7 = 0;
    if (lVar8 - 0x10000U < 0x7ffffffeffff) {
      lVar7 = lVar8;
    }
  }
  if (lVar6 == 0) {
    return;
  }
  if (lVar7 == 0) {
    return;
  }
  if (lVar6 != DAT_180cec858) {
    DAT_180cc5098 = '\0';
    DAT_180cec858 = lVar6;
  }
  if (param_2 == '\0') {
    if (DAT_180cc5098 == '\0') {
      return;
    }
  }
  else if (((DAT_180cec898 != '\0') && (param_3 != 0)) && (*(char *)(param_3 + 0x1a0) == '\0')) {
    bVar1 = false;
    local_res8 = '\x01';
    bVar12 = false;
    goto LAB_180218ddb;
  }
  bVar1 = true;
  local_res8 = '\0';
  bVar12 = true;
LAB_180218ddb:
  uVar3 = FUN_180011200(lVar6 + 0xd0);
  if (bVar12 == (uVar3 == 0)) {
    uVar13 = 0;
    local_res20[0] = 0;
    if (bVar1) {
      lVar8 = FUN_18000f3a0(lVar6 + 200);
      sVar2 = FUN_180011440(lVar6 + 0x2a0);
      iVar4 = FUN_180011200(lVar7 + 0x1a8);
      if (sVar2 < iVar4) {
        iVar4 = (int)sVar2;
      }
      lVar7 = FUN_18000f3a0(lVar7 + 0x1b0);
      if ((lVar8 != 0) && (lVar7 != 0)) {
        uVar11 = 0;
        if (0 < iVar4) {
          do {
            if (0xfff < (uint)uVar11) break;
            uVar9 = FUN_180011200(lVar7 + uVar11 * 4);
            if ((uVar9 & 8) != 0) {
              uVar5 = FUN_180011200(lVar8 + uVar11 * 4);
              uVar13 = uVar13 | uVar5;
            }
            uVar5 = (uint)uVar11 + 1;
            uVar11 = (ulonglong)uVar5;
          } while ((int)uVar5 < iVar4);
          local_res20[0] = uVar13;
        }
      }
    }
    DAT_180cc5098 = local_res8;
    if (uVar13 != uVar3) {
      FUN_180013280(lVar6 + 0xd0,local_res20);
      puVar10 = &DAT_1806d2870;
      if (bVar1) {
        puVar10 = &DAT_1806d286c;
      }
      FUN_180217550("cloth | %s | %x -> %x",puVar10,uVar3,uVar13);
    }
  }
  return;
}



/* ===== 180218f40 FUN_180218f40 ===== */

int FUN_180218f40(longlong param_1,ulonglong param_2,char param_3)

{
  char cVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  
  iVar2 = FUN_180011200(param_1 + 0x10);
  if ((iVar2 - 1U < 0xfff) && (iVar2 != 0)) {
    cVar1 = FUN_180218190(param_1,"defusekit");
    if (cVar1 != '\0') {
      if ((param_3 == '\0') || (iVar2 < 2)) {
        return 0;
      }
      return 1;
    }
    uVar3 = FUN_18000f3a0(param_1 + 0x40);
    iVar7 = 0;
    do {
      iVar6 = 0;
      uVar8 = DAT_180cec8b0;
      if (iVar7 == 0) {
        uVar8 = param_2;
      }
      if (0 < iVar2) {
        do {
          lVar4 = FUN_18000f3a0(param_1 + 0x18);
          uVar5 = FUN_18000f3a0(lVar4 + (longlong)iVar6 * 8);
          if (uVar5 == (uVar8 & uVar3)) {
            return iVar6;
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < iVar2);
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < 2);
  }
  return -1;
}



/* ===== 180219030 FUN_180219030 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180219030(ulonglong *param_1,char param_2,longlong param_3)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  ULONGLONG UVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  int iVar12;
  ulonglong uVar13;
  int iVar14;
  char *pcVar15;
  char *pcVar16;
  ulonglong uVar17;
  int iVar18;
  int iVar19;
  undefined1 auStack_d8 [32];
  char *local_b8;
  char *local_b0;
  char local_a8;
  undefined1 local_a7;
  char local_a6;
  int local_a4;
  int local_a0;
  undefined4 local_9c;
  int local_98;
  longlong local_90;
  longlong local_88;
  ulonglong *local_80;
  longlong local_78;
  ulonglong local_70 [7];
  
  local_70[6] = DAT_180919500 ^ (ulonglong)auStack_d8;
  if (param_2 == '\0') {
    DAT_180cc4c8a = 0;
    DAT_180cec910 = 0;
    return;
  }
  local_80 = param_1;
  if ((DAT_180cec8f0 != 0) &&
     (cVar3 = FUN_180011220((ulonglong)DAT_180cec8f0 + *param_1), cVar3 != '\0')) {
    DAT_180cc4c8a = 0;
    DAT_180cec838 = 0;
    DAT_180cec888 = 0;
    return;
  }
  uVar2 = DAT_180cec8c4;
  uVar1 = DAT_180ca09f8;
  uVar17 = *param_1;
  iVar18 = 0;
  uVar13 = (ulonglong)DAT_180ca09f8;
  uVar9 = (ulonglong)DAT_180cec8c4;
  if ((uVar17 == 0) || (DAT_180ca09f8 == 0)) {
LAB_1802190fb:
    lVar5 = 0;
  }
  else {
    lVar5 = FUN_18000f3a0(uVar17 + uVar13);
    uVar17 = *param_1;
    if ((lVar5 == 0) || (lVar5 = lVar5 + uVar9, uVar2 == 0)) goto LAB_1802190fb;
  }
  local_90 = lVar5;
  if (((((uVar17 == 0) || (uVar1 == 0)) || (lVar6 = FUN_18000f3a0(uVar17 + uVar13), lVar6 == 0)) ||
      ((uVar2 == 0 || (lVar6 = uVar9 + lVar6, lVar6 == 0)))) ||
     ((DAT_180cec8c8 == 0 ||
      (lVar6 = FUN_18000f3a0(lVar6 + (ulonglong)DAT_180cec8c8), 0x7ffffffefffe < lVar6 - 0x10000U)))
     ) {
    lVar6 = 0;
  }
  else {
    lVar7 = FUN_18000f3a0(lVar6);
    lVar6 = 0;
    if (lVar7 - 0x10000U < 0x7ffffffeffff) {
      lVar6 = lVar7;
    }
  }
  if (lVar5 == 0) {
    return;
  }
  if (lVar6 == 0) {
    return;
  }
  if (DAT_180cec8d0 == 0) {
    return;
  }
  if (param_3 != 0) {
    uVar17 = 0;
    if ((char *)(param_3 + 0x1e8) != (char *)0x0) {
      iVar14 = 0;
      cVar3 = *(char *)(param_3 + 0x1e8);
      while( true ) {
        if ((cVar3 == '\0') || (0xf < iVar14)) goto LAB_1802191f8;
        cVar3 = *(char *)(param_3 + 0x1e8 + (longlong)iVar14);
        iVar12 = (int)cVar3;
        if (9 < (byte)(cVar3 - 0x30U)) break;
        iVar12 = iVar12 + -0x30;
LAB_1802191d7:
        if (iVar12 < 0) goto LAB_1802191f5;
        iVar14 = iVar14 + 1;
        uVar17 = uVar17 << 4 | (longlong)iVar12;
        cVar3 = *(char *)(param_3 + 0x1e8 + (longlong)iVar14);
      }
      if ((byte)(cVar3 + 0x9fU) < 6) {
        iVar12 = iVar12 + -0x57;
        goto LAB_1802191d7;
      }
      if ((byte)(cVar3 + 0xbfU) < 6) {
        iVar12 = iVar12 + -0x37;
        goto LAB_1802191d7;
      }
LAB_1802191f5:
      uVar17 = 0;
    }
LAB_1802191f8:
    if (uVar17 != 0) goto LAB_180219204;
  }
  uVar17 = DAT_180cec8b0;
LAB_180219204:
  if ((((DAT_180cec8e8 == 0) || (uVar13 = (ulonglong)DAT_180cec8ec, DAT_180cec8ec == 0)) ||
      (lVar7 = FUN_18000f3a0((ulonglong)DAT_180cec8e8 + *param_1), lVar7 == 0)) ||
     (cVar3 = FUN_180011220(lVar7 + uVar13), cVar3 != '\x01')) {
    local_9c = 0;
    uVar13 = 0;
    local_a7 = 0;
  }
  else {
    uVar13 = 1;
    local_9c = 1;
    local_a7 = 1;
  }
  uVar13 = lVar6 * -0x61c8864680b583eb ^ uVar13 ^ *param_1 ^ uVar17;
  if (uVar13 == DAT_180cec910) {
    if (DAT_180cc4c8a != '\0') {
      return;
    }
  }
  else {
    DAT_180cec838 = 0;
    DAT_180cec888 = 0;
    DAT_180cc4c8a = '\0';
    DAT_180cec910 = uVar13;
  }
  UVar8 = GetTickCount64();
  if (DAT_180cec888 <= UVar8) {
    local_98 = FUN_180011200(lVar6 + 0x280);
    if (local_98 - 1U < 0xfff) {
      cVar3 = '\0';
      local_a8 = '\0';
      local_a4 = 0;
      iVar14 = 0;
      if (0 < local_98) {
        local_78 = lVar6 + 0x288;
        do {
          lVar7 = FUN_18000f3a0(local_78);
          lVar6 = lVar7 + (longlong)iVar14 * 0x50;
          local_88 = lVar6;
          cVar4 = FUN_180218190(lVar6,"default_gloves");
          if (((cVar4 == '\0') &&
              (cVar4 = FUN_180218190(lVar6,"first_or_third_person"), cVar4 == '\0')) &&
             (local_a0 = FUN_180218f40(lVar6,uVar17,local_a7), -1 < local_a0)) {
            uVar13 = (ulonglong)DAT_180cec8d4;
            if (DAT_180cec8d4 == 0) {
              iVar12 = -1;
            }
            else {
              iVar12 = FUN_180011200(uVar13 + lVar5);
              if (iVar14 < iVar12) {
                lVar6 = FUN_18000f3a0(uVar13 + 8 + lVar5);
                iVar12 = FUN_180011200(lVar6 + (longlong)iVar14 * 4);
              }
              else {
                iVar12 = -1;
              }
            }
            if (iVar12 == local_a0) {
              iVar19 = local_a0;
            }
            else {
              local_70[0] = 0;
              local_70[1] = 0;
              local_70[2] = 0;
              local_70[3] = 0;
              local_70[4] = 0;
              local_70[5] = 0;
              lVar6 = FUN_18000f3a0(lVar7 + ((longlong)iVar14 * 0x50 | 8U));
              local_70[0] = local_70[0] & 0xffffffffffffff00;
              if (lVar6 - 0x10000U < 0x7ffffffeffff) {
                lVar7 = 0;
                do {
                  cVar3 = FUN_180011220(lVar7 + lVar6);
                  *(char *)((longlong)local_70 + lVar7) = cVar3;
                  if (cVar3 == '\0') goto LAB_180219429;
                  uVar13 = lVar7 + 2;
                  lVar7 = lVar7 + 1;
                } while (uVar13 < 0x30);
                local_70[5] = local_70[5] & 0xffffffffffffff;
              }
LAB_180219429:
              iVar19 = local_a0;
              cVar3 = FUN_180217d80(*local_80,iVar14,local_a0);
              local_b0 = "[error] set_bodygroup missing or faulted";
              if (cVar3 != '\0') {
                local_b0 = "set";
              }
              local_b8 = (char *)CONCAT44(local_b8._4_4_,iVar19);
              FUN_180217550("body | %s (%d) | %d -> %d | %s",local_70,iVar14,iVar12);
              local_a4 = local_a4 + 1;
              uVar13 = (ulonglong)DAT_180cec8d4;
            }
            uVar9 = FUN_18000f3a0((ulonglong)DAT_180cec8d0 + lVar5);
            uVar10 = FUN_18000f3a0(local_88 + 0x40);
            if (((int)uVar13 != 0) && (iVar12 = FUN_180011200(uVar13 + lVar5), iVar14 < iVar12)) {
              lVar6 = FUN_18000f3a0(lVar5 + 8 + uVar13);
              iVar12 = FUN_180011200(lVar6 + (longlong)iVar14 * 4);
              if (iVar12 == iVar19) {
                lVar6 = FUN_18000f3a0(local_88 + 0x18);
                uVar13 = FUN_18000f3a0(lVar6 + (longlong)iVar19 * 8);
                if ((uVar10 & uVar9) == uVar13) {
                  cVar3 = local_a8;
                  goto LAB_18021950a;
                }
              }
            }
            local_a8 = '\x01';
            cVar3 = '\x01';
          }
LAB_18021950a:
          iVar14 = iVar14 + 1;
        } while (iVar14 < local_98);
        if (cVar3 != '\0') {
          local_a6 = FUN_180217db0(*local_80);
          cVar3 = '\0';
          local_a8 = '\0';
          do {
            lVar6 = FUN_18000f3a0(local_78);
            lVar6 = (longlong)iVar18 * 0x50 + lVar6;
            cVar4 = FUN_180218190(lVar6,"default_gloves");
            if ((cVar4 == '\0') &&
               (cVar4 = FUN_180218190(lVar6,"first_or_third_person"), cVar4 == '\0')) {
              iVar14 = FUN_180218f40(lVar6,uVar17,local_a7);
              if (iVar14 < 0) {
                cVar3 = local_a8;
              }
              else {
                uVar13 = FUN_18000f3a0((ulonglong)DAT_180cec8d0 + lVar5);
                uVar9 = FUN_18000f3a0(lVar6 + 0x40);
                if (DAT_180cec8d4 == 0) {
LAB_180219611:
                  local_a8 = '\x01';
                }
                else {
                  uVar10 = (ulonglong)DAT_180cec8d4;
                  iVar12 = FUN_180011200(local_90 + uVar10);
                  if (iVar12 <= iVar18) goto LAB_180219611;
                  lVar5 = FUN_18000f3a0(local_90 + 8 + uVar10);
                  iVar12 = FUN_180011200(lVar5 + (longlong)iVar18 * 4);
                  if (iVar12 != iVar14) goto LAB_180219611;
                  lVar5 = FUN_18000f3a0(lVar6 + 0x18);
                  uVar10 = FUN_18000f3a0(lVar5 + (longlong)iVar14 * 8);
                  if ((uVar9 & uVar13) != uVar10) goto LAB_180219611;
                }
                lVar5 = local_90;
                cVar3 = local_a8;
              }
            }
            iVar18 = iVar18 + 1;
          } while (iVar18 < local_98);
          pcVar16 = "matches";
          if (cVar3 != '\0') {
            pcVar16 = "still differs";
          }
          uVar11 = FUN_18000f3a0((ulonglong)DAT_180cec8d0 + lVar5);
          pcVar15 = "[error] body_group_commit missing or faulted";
          if (local_a6 != '\0') {
            pcVar15 = "called";
          }
          local_b8 = pcVar16;
          FUN_180217550("body | commit %s | mask %llx | mesh group mask %llx | %s",pcVar15,uVar17,
                        uVar11);
          if (cVar3 != '\0') {
            DAT_180cec838 = DAT_180cec838 + 1;
            if (DAT_180cec838 < 0x14) {
              UVar8 = GetTickCount64();
              DAT_180cec888 = UVar8 + 0xfa;
              return;
            }
            DAT_180cc4c8a = 1;
            FUN_180217550("[error] body | not taken after %d attempts | mask %llx",DAT_180cec838,
                          uVar17);
            return;
          }
        }
      }
      DAT_180cc4c8a = '\x01';
      if (local_a4 != 0) {
        FUN_180217550("body | done | %d group(s) changed | mask %llx | defuser %d",local_a4,uVar17,
                      local_9c);
      }
    }
    else {
      DAT_180cc4c8a = '\x01';
    }
  }
  return;
}



/* ===== 180219750 FUN_180219750 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180219750(longlong *param_1,char param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  char *pcVar9;
  longlong lVar10;
  uint uVar11;
  char *_Str2;
  undefined1 auStack_d8 [32];
  int local_b8;
  char *local_b0;
  int local_a8;
  longlong local_a0;
  longlong local_98;
  char local_88 [56];
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_d8;
  if (*param_1 == 0) {
    return;
  }
  if (DAT_180ca09f8 == 0) {
    return;
  }
  uVar8 = (ulonglong)DAT_180ca09f8;
  lVar6 = FUN_18000f3a0((ulonglong)DAT_180ca09f8 + *param_1);
  if (lVar6 == 0) {
    return;
  }
  if (DAT_180cec8d8 == 0) {
    return;
  }
  if (lVar6 != DAT_180cec8b8) {
    DAT_180cc4c8f = '\0';
    DAT_180cec8b8 = lVar6;
  }
  cVar1 = DAT_180cc4c8f;
  iVar2 = FUN_180011200((ulonglong)DAT_180cec8d8 + lVar6);
  if (param_2 == '\0') {
    if (cVar1 == '\0') {
      return;
    }
    if ((iVar2 == DAT_180cec918) && (iVar2 != DAT_180cec854)) {
      FUN_180217de0(lVar6);
      FUN_180217550("material | restored %x -> %x",iVar2,DAT_180cec854);
    }
    DAT_180cc4c8f = 0;
    return;
  }
  if (*param_1 == 0) {
    return;
  }
  lVar7 = FUN_18000f3a0(uVar8 + *param_1);
  if (lVar7 == 0) {
    return;
  }
  if (DAT_180cec8c4 == 0) {
    return;
  }
  if ((ulonglong)DAT_180cec8c4 + lVar7 == 0) {
    return;
  }
  if (DAT_180cec8c8 == 0) {
    return;
  }
  lVar7 = FUN_18000f3a0((ulonglong)DAT_180cec8c4 + lVar7 + (ulonglong)DAT_180cec8c8);
  if (0x7ffffffefffe < lVar7 - 0x10000U) {
    return;
  }
  lVar7 = FUN_18000f3a0(lVar7);
  if (0x7ffffffefffe < lVar7 - 0x10000U) {
    return;
  }
  local_98 = lVar7;
  if (param_3 == 0) {
    _Str2 = "";
LAB_18021997b:
    if (*_Str2 != '\0') {
      iVar3 = FUN_180011200(lVar7 + 0x110);
      local_a8 = FUN_180011200(lVar7 + 0x298);
      local_a0 = FUN_18000f3a0(lVar7 + 0x118);
      iVar5 = 0;
      uVar11 = 0;
      if (0 < iVar3) {
        while (uVar11 < 0x1000) {
          local_88[0] = '\0';
          local_88[1] = '\0';
          local_88[2] = '\0';
          local_88[3] = '\0';
          local_88[4] = '\0';
          local_88[5] = '\0';
          local_88[6] = '\0';
          local_88[7] = '\0';
          local_88[8] = '\0';
          local_88[9] = '\0';
          local_88[10] = '\0';
          local_88[0xb] = '\0';
          local_88[0xc] = '\0';
          local_88[0xd] = '\0';
          local_88[0xe] = '\0';
          local_88[0xf] = '\0';
          local_88[0x10] = '\0';
          local_88[0x11] = '\0';
          local_88[0x12] = '\0';
          local_88[0x13] = '\0';
          local_88[0x14] = '\0';
          local_88[0x15] = '\0';
          local_88[0x16] = '\0';
          local_88[0x17] = '\0';
          local_88[0x18] = '\0';
          local_88[0x19] = '\0';
          local_88[0x1a] = '\0';
          local_88[0x1b] = '\0';
          local_88[0x1c] = '\0';
          local_88[0x1d] = '\0';
          local_88[0x1e] = '\0';
          local_88[0x1f] = '\0';
          local_88[0x20] = '\0';
          local_88[0x21] = '\0';
          local_88[0x22] = '\0';
          local_88[0x23] = '\0';
          local_88[0x24] = '\0';
          local_88[0x25] = '\0';
          local_88[0x26] = '\0';
          local_88[0x27] = '\0';
          local_88[0x28] = '\0';
          local_88[0x29] = '\0';
          local_88[0x2a] = '\0';
          local_88[0x2b] = '\0';
          local_88[0x2c] = '\0';
          local_88[0x2d] = '\0';
          local_88[0x2e] = '\0';
          local_88[0x2f] = '\0';
          local_88[0x30] = '\0';
          local_88[0x31] = '\0';
          local_88[0x32] = '\0';
          local_88[0x33] = '\0';
          local_88[0x34] = '\0';
          local_88[0x35] = '\0';
          local_88[0x36] = '\0';
          local_88[0x37] = '\0';
          uStack_50 = 0;
          lVar7 = FUN_18000f3a0((ulonglong)uVar11 * 0x20 + local_a0);
          if (lVar7 - 0x10000U < 0x7ffffffeffff) {
            lVar10 = 0;
            do {
              cVar1 = FUN_180011220(lVar10 + lVar7);
              local_88[lVar10] = cVar1;
              if (cVar1 == '\0') goto LAB_180219a3f;
              uVar8 = lVar10 + 2;
              lVar10 = lVar10 + 1;
            } while (uVar8 < 0x40);
            uStack_50 = uStack_50 & 0xffffffffffffff;
          }
LAB_180219a3f:
          iVar4 = strcmp(local_88,_Str2);
          if (iVar4 == 0) {
            if ((int)uVar11 < local_a8) {
              lVar7 = FUN_18000f3a0(local_98 + 0x2a0);
              iVar5 = FUN_180011200(lVar7 + (ulonglong)uVar11 * 4);
            }
            goto LAB_1802198f8;
          }
          uVar11 = uVar11 + 1;
          if (iVar3 <= (int)uVar11) break;
        }
      }
    }
  }
  else {
    _Str2 = (char *)(param_3 + 0x1a8);
    if (_Str2 != (char *)0x0) goto LAB_18021997b;
  }
  iVar5 = 0;
  uVar11 = 0xffffffff;
LAB_1802198f8:
  if ((*_Str2 != '\0') && ((int)uVar11 < 0)) {
    return;
  }
  if (DAT_180cc4c8f == '\0') {
    DAT_180cc4c8f = '\x01';
    DAT_180cec854 = iVar2;
  }
  else if ((iVar2 != DAT_180cec918) && (iVar2 != iVar5)) {
    DAT_180cec854 = iVar2;
    goto LAB_180219938;
  }
  if (iVar2 == iVar5) {
    DAT_180cec918 = iVar5;
    return;
  }
LAB_180219938:
  DAT_180cec918 = iVar5;
  cVar1 = FUN_180217de0(lVar6,iVar5);
  local_b8 = FUN_180011200((ulonglong)DAT_180cec8d8 + lVar6);
  if (cVar1 == '\0') {
    local_b0 = "[error] set_material_group missing or faulted";
  }
  else {
    local_b0 = "[error] not taken";
    if (local_b8 == iVar5) {
      local_b0 = "set";
    }
  }
  pcVar9 = "model default";
  if (*_Str2 != '\0') {
    pcVar9 = _Str2;
  }
  FUN_180217550("material | %s (%d) | token %x -> %x | %s",pcVar9,uVar11,iVar2);
  return;
}



/* ===== 180219b30 FUN_180219b30 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180219b30(longlong *param_1,longlong param_2)

{
  char cVar1;
  ULONGLONG UVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 ******ppppppuVar7;
  ulonglong *puVar8;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined8 ******local_90;
  undefined8 ******local_88 [2];
  longlong local_78;
  ulonglong local_70;
  undefined8 ******local_68 [2];
  longlong local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_b8;
  if ((DAT_180cc4c8d != '\0') && (UVar2 = GetTickCount64(), DAT_180cec860 <= UVar2)) {
    ppppppuVar7 = &DAT_1809f1bc0;
    if (param_2 == 0) {
      if (DAT_180cc509a == '\0') {
        DAT_180cc4c8d = 0;
        return;
      }
      puVar6 = &DAT_1809f1bc0;
      puVar8 = &DAT_1809f1bd8;
    }
    else {
      puVar6 = (undefined8 *)(param_2 + 0x48);
      puVar8 = (ulonglong *)(param_2 + 0x60);
    }
    FUN_180217bd0(local_68,param_1);
    cVar1 = FUN_180217990(local_68,puVar6);
    if (cVar1 == '\0') {
      if ((((*param_1 == 0) || (DAT_180ca09f8 == 0)) ||
          (lVar3 = FUN_18000f3a0((ulonglong)DAT_180ca09f8 + *param_1), lVar3 == 0)) ||
         (((DAT_180cec8c4 == 0 || ((ulonglong)DAT_180cec8c4 + lVar3 == 0)) || (DAT_180cec8c8 == 0)))
         ) {
        uVar4 = 0;
      }
      else {
        uVar4 = FUN_18000f3a0((ulonglong)DAT_180cec8c4 + lVar3 + (ulonglong)DAT_180cec8c8);
      }
      if (*puVar8 < 0x10) {
        puVar5 = puVar6;
      }
      else {
        puVar5 = (undefined8 *)*puVar6;
      }
      cVar1 = FUN_1811be000(*param_1,puVar5);
      if (((*param_1 == 0) || (DAT_180ca09f8 == 0)) ||
         ((lVar3 = FUN_18000f3a0((ulonglong)DAT_180ca09f8 + *param_1), lVar3 == 0 ||
          (((DAT_180cec8c4 == 0 || ((ulonglong)DAT_180cec8c4 + lVar3 == 0)) || (DAT_180cec8c8 == 0))
          )))) {
        lVar3 = 0;
      }
      else {
        lVar3 = FUN_18000f3a0((ulonglong)DAT_180cec8c4 + lVar3 + (ulonglong)DAT_180cec8c8);
      }
      FUN_180217bd0(local_88,param_1);
      if (((cVar1 == '\0') || (lVar3 == 0)) ||
         (cVar1 = FUN_180217990(local_88,puVar6), cVar1 == '\0')) {
        DAT_180cec8f4 = DAT_180cec8f4 + 1;
        UVar2 = GetTickCount64();
        DAT_180cec860 = UVar2 + 0xfa;
      }
      else {
        DAT_180cc4c8d = '\0';
        DAT_180cc4c8e = param_2 != 0;
        if (local_78 == 0) {
          local_90 = (undefined8 ******)&DAT_1806dfbb4;
        }
        else {
          local_90 = local_88;
          if (0xf < local_70) {
            local_90 = local_88[0];
          }
        }
        if (0xf < *puVar8) {
          puVar6 = (undefined8 *)*puVar6;
        }
        if (local_58 == 0) {
          if (0xf < DAT_1809f1bd8) {
            ppppppuVar7 = DAT_1809f1bc0;
          }
        }
        else {
          ppppppuVar7 = local_68;
          if (0xf < local_50) {
            ppppppuVar7 = local_68[0];
          }
        }
        DAT_180cc509a = DAT_180cc4c8e;
        local_98 = lVar3;
        FUN_180217550("model | %s -> %s | handle %p -> %p | loaded %s",ppppppuVar7,puVar6,uVar4);
      }
      FUN_18000f890(local_88);
    }
    else {
      DAT_180cc4c8d = '\0';
      DAT_180cc509a = param_2 != 0;
    }
    FUN_18000f890(local_68);
  }
  return;
}



