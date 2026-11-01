/* ===== 1802eafd0 FUN_1802eafd0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1802eafd0(longlong *param_1,int *param_2,float param_3)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  float fVar4;
  char cVar5;
  float *pfVar6;
  longlong lVar7;
  int iVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined8 uVar12;
  char ***pppcVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auStack_1d8 [32];
  uint local_1b8;
  char ***local_1b0;
  char ***local_1a8;
  undefined8 local_1a0;
  ulonglong local_198;
  undefined4 local_190;
  undefined4 local_188;
  undefined1 local_178;
  float local_170;
  float local_16c;
  float *local_168;
  undefined8 local_160;
  float *local_158;
  float *pfStack_150;
  float *local_148;
  float local_140;
  float local_13c;
  float local_138;
  float local_130;
  float local_12c;
  undefined4 local_128;
  undefined4 local_124;
  float *local_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  char ***local_108 [3];
  ulonglong local_f0;
  ulonglong local_e8;
  
  local_e8 = DAT_180919500 ^ (ulonglong)auStack_1d8;
  iVar8 = *param_2;
  if ((iVar8 < 0) || ((int)(param_1[1] - *param_1 >> 5) <= iVar8)) {
    puVar9 = (undefined8 *)&DAT_18058b643;
  }
  else {
    puVar9 = (undefined8 *)((longlong)iVar8 * 0x20 + *param_1);
    if (0xf < (ulonglong)puVar9[3]) {
      puVar9 = (undefined8 *)*puVar9;
    }
  }
  local_160 = *(undefined8 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x118);
  fVar19 = *(float *)(DAT_180ca0a50 + 0xce0) + *(float *)(DAT_180ca0a50 + 0xce0) +
           *(float *)(DAT_180ca0a50 + 0x1200);
  uVar12 = 0;
  local_170 = param_3;
  local_16c = fVar19;
  local_140 = param_3;
  uVar15 = FUN_1803e89e0("##capsule");
  cVar5 = FUN_1802b8490(uVar15,puVar9,&local_160,&local_170);
  if (cVar5 != '\0') {
    FUN_1802b4d80("##list");
  }
  cVar5 = FUN_1802b8820(&local_160,&local_170);
  if (cVar5 != '\0') {
    local_158 = (float *)0x0;
    pfStack_150 = (float *)0x0;
    local_148 = (float *)0x0;
    uVar10 = 0;
    if (param_1[1] - *param_1 >> 5 != 0) {
      do {
        if (uVar10 < (ulonglong)(DAT_181107700 - DAT_1811076f8 >> 2)) {
          fVar14 = *(float *)(DAT_1811076f8 + uVar10 * 4);
        }
        else {
          fVar14 = 0.0;
        }
        local_170 = fVar14;
        pfVar6 = (float *)thunk_FUN_1804e6e50(local_158,pfStack_150,fVar14);
        if (pfVar6 == pfStack_150) {
          if (pfStack_150 == local_148) {
            FUN_18006a410(&local_158,pfStack_150,&local_170);
          }
          else {
            *pfStack_150 = fVar14;
            pfStack_150 = pfStack_150 + 1;
          }
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < (ulonglong)(param_1[1] - *param_1 >> 5));
    }
    FUN_18034a8b0(local_158,pfStack_150,(longlong)pfStack_150 - (longlong)local_158 >> 2,local_178);
    uVar15 = DAT_1808ac930;
    fVar2 = DAT_1808ac34c;
    fVar14 = DAT_1808ac1f4;
    local_168 = local_158;
    local_120 = pfStack_150;
    if (local_158 != pfStack_150) {
      do {
        lVar7 = DAT_180ca0a50;
        local_170 = *local_168;
        *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
        lVar7 = *(longlong *)(lVar7 + 0x14f8);
        FUN_1802e9e50(local_108);
        fVar18 = *(float *)(lVar7 + 0x58) + *(float *)(lVar7 + 0x28);
        fVar16 = *(float *)(lVar7 + 0x250) - fVar18;
        fVar17 = fVar2;
        if (fVar2 <= fVar16) {
          fVar17 = fVar16;
        }
        fVar16 = *(float *)(DAT_180ca0a50 + 0xce0) + *(float *)(DAT_180ca0a50 + 0xce0) +
                 *(float *)(DAT_180ca0a50 + 0x1200);
        lVar11 = DAT_181107a18;
        if ((DAT_181107a18 == 0) && (lVar11 = DAT_181107a08, DAT_181107a08 == 0)) {
          lVar11 = *(longlong *)(DAT_180ca0a50 + 0x11f0);
        }
        local_1b0 = (char ***)local_108;
        if (0xf < local_f0) {
          local_1b0 = local_108[0];
        }
        local_188 = 0;
        local_198 = 0;
        local_1a0 = 0;
        local_1a8 = (char ***)0x0;
        local_1b8 = 0;
        FUN_18040a2f0(&local_130,lVar11,uVar15,DAT_1808acd08);
        fVar4 = local_130;
        fVar1 = *(float *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x11c);
        local_13c = local_130 + DAT_1808ac980;
        local_138 = fVar16;
        FUN_1803ec550(&local_13c,DAT_1808acda0);
        uVar3 = DAT_180960ec8;
        pppcVar13 = (char ***)local_108;
        if (0xf < local_f0) {
          pppcVar13 = local_108[0];
        }
        local_128 = FUN_18053f0d0((fVar17 - fVar4) * fVar14 + fVar18);
        local_124 = FUN_18053f0d0((fVar16 - local_12c) * fVar14 + fVar1);
        if ((((uVar3 & 0xff000000) != 0) && (pppcVar13 != (char ***)0x0)) &&
           (*(char *)pppcVar13 != '\0')) {
          lVar7 = *(longlong *)(lVar7 + 0x2c8);
          if (lVar11 == 0) {
            lVar11 = *(longlong *)(*(longlong *)(lVar7 + 0x38) + 0x18);
          }
          local_118 = *(undefined4 *)(lVar7 + 0x60);
          uStack_114 = *(undefined4 *)(lVar7 + 100);
          uStack_110 = *(undefined4 *)(lVar7 + 0x68);
          uStack_10c = *(undefined4 *)(lVar7 + 0x6c);
          local_190 = 0;
          local_198 = local_198 & 0xffffffff00000000;
          local_1a0 = 0;
          local_1b0 = (char ***)&local_118;
          local_1b8 = uVar3;
          local_1a8 = pppcVar13;
          FUN_18040a900(lVar11,lVar7,uVar15,&local_128);
        }
        fVar17 = local_170;
        lVar7 = *param_1;
        if (0 < (int)(param_1[1] - lVar7 >> 5)) {
          iVar8 = 0;
          lVar11 = DAT_1811076f8;
          do {
            uVar10 = (ulonglong)iVar8;
            if (uVar10 < (ulonglong)(DAT_181107700 - lVar11 >> 2)) {
              fVar16 = *(float *)(lVar11 + uVar10 * 4);
            }
            else {
              fVar16 = 0.0;
            }
            if (fVar16 == fVar17) {
              puVar9 = (undefined8 *)(uVar10 * 0x20 + lVar7);
              if (0xf < (ulonglong)puVar9[3]) {
                puVar9 = (undefined8 *)*puVar9;
              }
              cVar5 = FUN_1802b74f0(puVar9,CONCAT71((int7)((ulonglong)lVar7 >> 8),iVar8 == *param_2)
                                    ,0,0);
              if (cVar5 != '\0') {
                *param_2 = iVar8;
                uVar12 = 1;
              }
              lVar11 = DAT_1811076f8;
            }
            iVar8 = iVar8 + 1;
            lVar7 = *param_1;
          } while (iVar8 < (int)(param_1[1] - lVar7 >> 5));
        }
        FUN_18000f890(local_108);
        local_168 = local_168 + 1;
      } while (local_168 != local_120);
      param_3 = local_140;
    }
    FUN_1802b5590();
    FUN_180068f30(&local_158);
  }
  lVar7 = DAT_180ca0a50;
  iVar8 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
  if (iVar8 < 2) {
    FUN_1803ebc00("Calling PopID() too many times!");
    lVar7 = DAT_180ca0a50;
  }
  else {
    *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar8 + -1;
  }
  *(undefined1 *)(*(longlong *)(lVar7 + 0x14f8) + 0xce) = 1;
  lVar7 = *(longlong *)(lVar7 + 0x14f8);
  *(float *)(lVar7 + 0x118) = (float)local_160 + param_3;
  *(float *)(lVar7 + 0x11c) = local_160._4_4_ + 0.0;
  *(undefined1 *)(lVar7 + 0x159) = 1;
  local_168 = (float *)((ulonglong)(uint)fVar19 << 0x20);
  FUN_1804174f0(&local_168);
  return uVar12;
}



/* ===== 1802eb590 FUN_1802eb590 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802eb590(ulonglong param_1,byte param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  code *pcVar4;
  char cVar5;
  byte bVar6;
  undefined1 uVar7;
  int iVar8;
  undefined4 uVar9;
  longlong *plVar10;
  size_t sVar11;
  ulonglong *puVar12;
  ulonglong *puVar13;
  undefined4 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong *puVar19;
  longlong lVar20;
  longlong lVar21;
  char *pcVar22;
  undefined8 *****pppppuVar23;
  undefined8 *_Buf2;
  ulonglong *puVar24;
  uint uVar25;
  int *piVar26;
  int *piVar27;
  ulonglong uVar28;
  undefined1 *puVar29;
  undefined1 *puVar30;
  ulonglong uVar31;
  ulonglong *puVar32;
  int iVar33;
  ulonglong uVar34;
  bool bVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined4 unaff_XMM8_Da;
  undefined8 uStack_160;
  undefined1 auStack_158 [8];
  undefined1 auStack_150 [24];
  undefined8 *local_138;
  undefined8 local_130;
  ulonglong local_128;
  undefined8 local_120;
  byte local_108;
  undefined8 local_104;
  int *local_f8;
  ulonglong *local_f0 [3];
  uint local_d8 [2];
  ulonglong *local_d0;
  ulonglong *puStack_c8;
  ulonglong *local_c0;
  ulonglong local_b8;
  ulonglong local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined8 *****local_a0;
  undefined8 uStack_98;
  longlong local_90;
  ulonglong local_88;
  ulonglong local_80;
  
  local_80 = DAT_180919500 ^ (ulonglong)auStack_158;
  local_f8 = (int *)0x40c0000040c00000;
  local_108 = param_2;
  local_b0 = param_1;
  cVar5 = FUN_1802b5260("##inv_sticker_picker",&local_f8);
  puVar30 = auStack_158;
  if (cVar5 == '\0') goto LAB_1802ec43b;
  uVar34 = (ulonglong)(int)DAT_1809f5988;
  local_d8[0] = DAT_1809f5988;
  if (param_2 == 0) {
    if ((param_1 != 0) && (DAT_1809f5988 < 6)) {
      piVar26 = (int *)(uVar34 * 0x1c + 0xe0 + param_1);
      goto LAB_1802eb657;
    }
  }
  else {
    puVar14 = &DAT_1809216bc;
    if (DAT_1809f5900 != 0) {
      puVar14 = &DAT_1809216d0;
    }
    if (DAT_1809f5988 < 5) {
      piVar26 = puVar14 + uVar34;
LAB_1802eb657:
      local_f8 = piVar26;
      if (piVar26 != (int *)0x0) {
        plVar10 = (longlong *)FUN_1802e9b40();
        puVar30 = auStack_158;
        puVar29 = auStack_158;
        iVar33 = 0;
        if ((param_2 == 0) && (DAT_1809f5990 < 0)) {
          if (DAT_180ccfeda == '\0') {
            DAT_1809f5990 = 0;
          }
          else {
            piVar27 = DAT_180cfc988;
            if (0 < *piVar26) {
              for (; piVar27 != DAT_180cfc990; piVar27 = piVar27 + 0x26) {
                if (*piVar27 == *piVar26) goto LAB_1802eb6c3;
              }
            }
            piVar27 = (int *)0x0;
LAB_1802eb6c3:
            DAT_1809f5990 = 0;
            if (piVar27 != (int *)0x0) {
              while( true ) {
                if ((int)(plVar10[1] - *plVar10 >> 5) <= iVar33) break;
                puVar15 = (undefined8 *)(*plVar10 + (longlong)iVar33 * 0x20);
                if (*(ulonglong *)(piVar27 + 0x22) < 0x10) {
                  piVar26 = piVar27 + 0x1c;
                }
                else {
                  piVar26 = *(int **)(piVar27 + 0x1c);
                }
                sVar11 = puVar15[2];
                if (0xf < (ulonglong)puVar15[3]) {
                  puVar15 = (undefined8 *)*puVar15;
                }
                if (sVar11 == *(size_t *)(piVar27 + 0x20)) {
                  if (sVar11 != 0) {
                    iVar8 = memcmp(puVar15,piVar26,sVar11);
                    if (iVar8 != 0) goto LAB_1802eb72b;
                  }
                  DAT_1809f5990 = iVar33;
                }
LAB_1802eb72b:
                iVar33 = iVar33 + 1;
              }
            }
          }
        }
        FUN_1803d8730(0,DAT_180960ec8);
        local_104 = 0x4066666740c00000;
        FUN_1803d89a0(0xb,&local_104);
        local_104 = 0x40a0000040a00000;
        FUN_1803d89a0(0xe,&local_104);
        fVar39 = *(float *)(DAT_180ca0a50[0x29f] + 0x118);
        fVar37 = *(float *)(DAT_180ca0a50[0x29f] + 0x11c);
        if ((param_2 == 0) && (*plVar10 != plVar10[1])) {
          FUN_1802eafd0(plVar10,&DAT_1809f5990,DAT_1808acb34);
          fVar39 = fVar39 + _DAT_1808acb3c;
        }
        puVar12 = DAT_180ca0a50;
        bVar35 = DAT_1809f5996 != '\0';
        if ((DAT_1809f5996 == '\0') || (param_2 != 0)) {
          fVar38 = 0.0;
        }
        else {
          fVar38 = DAT_1808ac9ac;
        }
        *(undefined1 *)(DAT_180ca0a50[0x29f] + 0xce) = 1;
        uVar28 = puVar12[0x29f];
        *(float *)(uVar28 + 0x118) = fVar39;
        *(float *)(uVar28 + 0x11c) = fVar37;
        *(undefined1 *)(uVar28 + 0x159) = 1;
        fVar38 = ((*(float *)((longlong)puVar12 + 0xca4) + *(float *)(puVar12[0x29f] + 0x28) +
                  DAT_1808acbc8) - fVar39) - fVar38;
        fVar36 = DAT_1808aca54;
        if (DAT_1808aca54 <= fVar38) {
          fVar36 = fVar38;
        }
        *(uint *)(puVar12 + 0x3d6) = (uint)puVar12[0x3d6] | 1;
        *(float *)(puVar12 + 0x3d9) = fVar36;
        local_104 = 0;
        local_120 = 0;
        local_128 = 0;
        local_130 = (undefined8 *)((ulonglong)local_130._4_4_ << 0x20);
        local_138 = &local_104;
        FUN_18041c570("##sticker_search","Search",&DAT_1809f5996,0x40);
        if ((bVar35) && (param_2 == 0)) {
          FUN_1803ec6c0(0,0);
          puVar12 = DAT_180ca0a50;
          fVar39 = *(float *)(DAT_180ca0a50 + 0x19c) + *(float *)(DAT_180ca0a50 + 0x19c) +
                   *(float *)(DAT_180ca0a50 + 0x240);
          uVar28 = DAT_180ca0a50[0x29f];
          *(undefined1 *)(uVar28 + 0xce) = 1;
          uVar31 = puVar12[0x29f];
          *(undefined4 *)(uVar31 + 0x118) = *(undefined4 *)(uVar28 + 0x118);
          fVar38 = (float)FUN_18053f0d0((fVar39 - DAT_1808ac954) * DAT_1808ac1f4);
          *(float *)(uVar31 + 0x11c) = fVar38 + fVar37;
          *(undefined1 *)(uVar31 + 0x159) = 1;
          uVar9 = DAT_180960f38;
          if (DAT_1809f5994 != '\0') {
            uVar9 = DAT_1809f54bc;
          }
          local_104 = 0x41a5a5e341a00000;
          local_120 = CONCAT44(local_120._4_4_,uVar9);
          local_128 = local_128 & 0xffffffffffffff00;
          local_130 = &local_104;
          local_138 = (undefined8 *)CONCAT44(local_138._4_4_,DAT_1808ac8d4);
          cVar5 = FUN_1802d59d0("##hide_tournament","inv_filter",
                                "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 512 512\" width=\"512\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M3 55C10 41 24 32 40 32L472 32C487 32 501 41 508 55C514 69 512 86 502 98L320 321L320 448C320 460 313 471 302 476C291 482 278 480 268 473L204 426C196 420 191 411 191 400L191 321L9 98C0 86 -2 69 3 55Z\"/></svg>"
                                ,DAT_1808acc00);
          if (cVar5 != '\0') {
            DAT_1809f5994 = DAT_1809f5994 == '\0';
          }
          uVar28 = 0xffffffff;
          pcVar22 = "inv_hide_tournament";
          bVar6 = 0x69;
          do {
            pcVar22 = pcVar22 + 1;
            if (((bVar6 == 0x23) && (*pcVar22 == 0x23)) && (pcVar22[1] == 0x23)) {
              uVar28 = 0xffffffff;
              pcVar22 = pcVar22 + 2;
            }
            else {
              uVar28 = (ulonglong)
                       ((uint)(uVar28 >> 8) ^
                       *(uint *)(&DAT_1806c25c0 + (uVar28 & 0xff ^ (ulonglong)bVar6) * 4));
            }
            bVar6 = *pcVar22;
          } while (bVar6 != 0);
          local_104 = *(undefined8 *)((longlong)DAT_180ca0a50 + 0x1efc);
          local_b8 = *(ulonglong *)((longlong)DAT_180ca0a50 + 0x1ef4);
          uVar7 = FUN_1803dd930(0);
          local_130 = (undefined8 *)CONCAT44(local_130._4_4_,~(uint)uVar28);
          local_138 = &local_104;
          FUN_1802b56a0("Hide Tournament Stickers",0,uVar7,&local_b8);
          puVar12 = DAT_180ca0a50;
          uVar28 = DAT_180ca0a50[0x29f];
          fVar38 = *(float *)((longlong)DAT_180ca0a50 + 0xca4);
          *(undefined1 *)(uVar28 + 0xce) = 1;
          uVar31 = puVar12[0x29f];
          *(float *)(uVar31 + 0x118) = fVar38 + *(float *)(uVar28 + 0x28);
          fVar39 = fVar39 + fVar37;
          *(float *)(uVar31 + 0x11c) = fVar39;
          *(undefined1 *)(uVar31 + 0x159) = 1;
          local_104 = 0;
          FUN_1804174f0(&local_104);
        }
        FUN_1803d8a40(2);
        FUN_1803d87f0(1);
        local_a0 = (undefined8 *****)0x0;
        uStack_98 = 0;
        local_90 = 0;
        local_88 = 0;
        sVar11 = strlen(&DAT_1809f5996);
        FUN_1800133a0(&local_a0,&DAT_1809f5996,sVar11);
        if (((param_2 == 0) && (-1 < DAT_1809f5990)) &&
           (DAT_1809f5990 < (int)(plVar10[1] - *plVar10 >> 5))) {
          puVar15 = (undefined8 *)((longlong)DAT_1809f5990 * 0x20 + *plVar10);
LAB_1802ebb13:
          puVar12 = (ulonglong *)FUN_180280ea0();
        }
        else {
          puVar15 = (undefined8 *)0x0;
          if (param_2 == 0) goto LAB_1802ebb13;
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 8) <
               DAT_181116320) && (FUN_1804ed1b0(&DAT_181116320), DAT_181116320 == -1)) {
            FUN_1804ece40(&LAB_180567ec0);
            _Init_thread_footer(&DAT_181116320);
          }
          puVar12 = (ulonglong *)&DAT_181116178;
          if (DAT_180ccfeda != '\0') {
            puVar12 = &DAT_180cfc8b0;
          }
        }
        local_d0 = (ulonglong *)0x0;
        puStack_c8 = (ulonglong *)0x0;
        local_c0 = (ulonglong *)0x0;
        local_f0[0] = (ulonglong *)0x0;
        local_f0[1] = (ulonglong *)0x0;
        local_f0[2] = (ulonglong *)0x0;
        uVar28 = *puVar12;
        local_b8 = puVar12[1];
        if (uVar28 != local_b8) {
          lVar20 = local_90;
          do {
            if (lVar20 == 0) {
LAB_1802ebb9c:
              if (puVar15 == (undefined8 *)0x0) {
LAB_1802ebda3:
                puVar12 = puStack_c8;
                if (puStack_c8 == local_c0) {
                  uVar31 = (longlong)puStack_c8 - (longlong)local_d0;
                  lVar20 = (longlong)uVar31 >> 3;
                  if (lVar20 == 0x1fffffffffffffff) {
LAB_1802ec46e:
                    /* WARNING: Subroutine does not return */
                    FUN_1800118d0();
                  }
                  uVar34 = lVar20 + 1;
                  uVar17 = (longlong)local_c0 - (longlong)local_d0 >> 3;
                  if (0x1fffffffffffffff - (uVar17 >> 1) < uVar17) {
                    uVar18 = 0x1fffffffffffffff;
                  }
                  else {
                    uVar17 = (uVar17 >> 1) + uVar17;
                    uVar18 = uVar34;
                    if (uVar34 <= uVar17) {
                      uVar18 = uVar17;
                    }
                    if (0x1fffffffffffffff < uVar18) {
LAB_1802ec474:
                    /* WARNING: Subroutine does not return */
                      FUN_18000d840();
                    }
                  }
                  param_1 = uVar18 * 8;
                  puVar13 = (ulonglong *)FUN_18000fb70(param_1);
                  puVar32 = (ulonglong *)(uVar31 & 0xfffffffffffffff8);
                  *(ulonglong *)((longlong)puVar32 + (longlong)puVar13) = uVar28;
                  if (puVar12 == puStack_c8) {
                    lVar20 = (longlong)puStack_c8 - (longlong)local_d0;
                    puVar19 = puVar13;
                    puVar24 = local_d0;
                  }
                  else {
                    FUN_180540530(puVar13,local_d0,(longlong)puVar12 - (longlong)local_d0);
                    lVar20 = (longlong)puStack_c8 - (longlong)puVar12;
                    puVar19 = (ulonglong *)((longlong)(puVar32 + 1) + (longlong)puVar13);
                    puVar24 = puVar12;
                  }
                  FUN_180540530(puVar19,puVar24,lVar20);
                  if (local_d0 != (ulonglong *)0x0) {
                    uVar31 = ((longlong)local_c0 - (longlong)local_d0 >> 3) * 8;
                    if (uVar31 < 0x1000) {
                      puVar12 = local_d0;
                    }
                    else {
                      if ((undefined1 *)0x1f <
                          (undefined1 *)((longlong)local_d0 + (-8 - (longlong)local_d0[-1]))) {
LAB_1802ec123:
                        uVar31 = 5;
                        pcVar4 = (code *)swi(0x29);
                        iVar33 = (*pcVar4)();
                        puVar29 = auStack_150;
                        goto LAB_1802ec12a;
                      }
                      uVar31 = uVar31 + 0x27;
                      puVar12 = (ulonglong *)local_d0[-1];
                    }
                    thunk_FUN_1803d64e0(puVar12,uVar31);
                  }
                  puStack_c8 = puVar13 + uVar34;
                  local_c0 = puVar13 + uVar18;
                  local_d0 = puVar13;
LAB_1802ebec0:
                  param_2 = local_108;
                }
                else {
                  *puStack_c8 = uVar28;
                  puStack_c8 = puStack_c8 + 1;
                }
              }
              else {
                puVar16 = (undefined8 *)(uVar28 + 0x70);
                if ((ulonglong)puVar15[3] < 0x10) {
                  _Buf2 = puVar15;
                }
                else {
                  _Buf2 = (undefined8 *)*puVar15;
                }
                sVar11 = *(size_t *)(uVar28 + 0x80);
                if (0xf < *(ulonglong *)(uVar28 + 0x88)) {
                  puVar16 = (undefined8 *)*puVar16;
                }
                if ((sVar11 == puVar15[2]) &&
                   ((sVar11 == 0 || (iVar33 = memcmp(puVar16,_Buf2,sVar11), iVar33 == 0))))
                goto LAB_1802ebda3;
                puVar12 = local_f0[1];
                if (lVar20 == 0) goto LAB_1802ebed4;
                if (local_f0[1] == local_f0[2]) {
                  uVar31 = (longlong)local_f0[1] - (longlong)local_f0[0];
                  lVar20 = (longlong)uVar31 >> 3;
                  if (lVar20 == 0x1fffffffffffffff) goto LAB_1802ec46e;
                  uVar34 = lVar20 + 1;
                  uVar17 = (longlong)local_f0[2] - (longlong)local_f0[0] >> 3;
                  if (0x1fffffffffffffff - (uVar17 >> 1) < uVar17) {
                    uVar18 = 0x1fffffffffffffff;
                  }
                  else {
                    uVar17 = (uVar17 >> 1) + uVar17;
                    uVar18 = uVar34;
                    if (uVar34 <= uVar17) {
                      uVar18 = uVar17;
                    }
                    if (0x1fffffffffffffff < uVar18) goto LAB_1802ec474;
                  }
                  param_1 = uVar18 * 8;
                  puVar13 = (ulonglong *)FUN_18000fb70(param_1);
                  puVar32 = (ulonglong *)(uVar31 & 0xfffffffffffffff8);
                  *(ulonglong *)((longlong)puVar32 + (longlong)puVar13) = uVar28;
                  if (puVar12 == local_f0[1]) {
                    lVar20 = (longlong)local_f0[1] - (longlong)local_f0[0];
                    puVar19 = puVar13;
                    puVar24 = local_f0[0];
                  }
                  else {
                    FUN_180540530(puVar13,local_f0[0],(longlong)puVar12 - (longlong)local_f0[0]);
                    lVar20 = (longlong)local_f0[1] - (longlong)puVar12;
                    puVar19 = (ulonglong *)((longlong)(puVar32 + 1) + (longlong)puVar13);
                    puVar24 = puVar12;
                  }
                  FUN_180540530(puVar19,puVar24,lVar20);
                  if (local_f0[0] != (ulonglong *)0x0) {
                    uVar31 = ((longlong)local_f0[2] - (longlong)local_f0[0] >> 3) * 8;
                    if (uVar31 < 0x1000) {
                      puVar12 = local_f0[0];
                    }
                    else {
                      if ((undefined1 *)0x1f <
                          (undefined1 *)((longlong)local_f0[0] + (-8 - (longlong)local_f0[0][-1])))
                      goto LAB_1802ec123;
                      uVar31 = uVar31 + 0x27;
                      puVar12 = (ulonglong *)local_f0[0][-1];
                    }
                    thunk_FUN_1803d64e0(puVar12,uVar31);
                  }
                  local_f0[1] = puVar13 + uVar34;
                  local_f0[2] = puVar13 + uVar18;
                  local_f0[0] = puVar13;
                  goto LAB_1802ebec0;
                }
                *local_f0[1] = uVar28;
                local_f0[1] = local_f0[1] + 1;
              }
              lVar20 = local_90;
            }
            else {
              pppppuVar23 = &local_a0;
              if (0xf < local_88) {
                pppppuVar23 = local_a0;
              }
              cVar5 = FUN_1802d4740(uVar28 + 0x28,pppppuVar23);
              lVar20 = local_90;
              if ((cVar5 != '\0') &&
                 ((((local_90 == 0 || (param_2 != 0)) || (DAT_1809f5994 == '\0')) ||
                  (*(int *)(uVar28 + 0x90) < 1)))) goto LAB_1802ebb9c;
            }
LAB_1802ebed4:
            uVar28 = uVar28 + 0x98;
          } while (uVar28 != local_b8);
          uVar34 = (ulonglong)local_d8[0];
          param_1 = local_b0;
        }
        iVar33 = (int)uVar34;
        FUN_1803d8870(0x12,DAT_1808ac7ac);
        puVar12 = DAT_180ca0a50;
        *(uint *)(DAT_180ca0a50 + 999) = (uint)DAT_180ca0a50[999] | 0x10;
        *(undefined8 *)((longlong)puVar12 + 0x1f84) = 0;
        *(undefined4 *)((longlong)puVar12 + 0x1f8c) = 0x7f7fffff;
        *(undefined4 *)(puVar12 + 0x3f2) = 0x437a0000;
        puVar12[0x3f3] = 0;
        puVar12[0x3f4] = 0;
        local_104 = 0x43af0000;
        *(undefined1 *)(puVar12[0x29f] + 0xce) = 1;
        uVar9 = FUN_1803e8900(puVar12[0x29f],"##sticker_grid");
        local_138 = (undefined8 *)CONCAT44(local_138._4_4_,0x80);
        cVar5 = FUN_1803e1800("##sticker_grid",uVar9,&local_104,0x20);
        if (cVar5 != '\0') {
          local_104 = 0x4120000041200000;
          FUN_1803d89a0(0xe,&local_104);
          puVar12 = DAT_180ca0a50;
          uVar28 = DAT_180ca0a50[0x29f];
          if ((*(longlong *)(uVar28 + 0x1c8) != 0) || (lVar20 = 0x280, DAT_180ca0a50[0x46c] != 0)) {
            lVar20 = 0x250;
          }
          fVar37 = (float)FUN_18053f0d0(((*(float *)(lVar20 + uVar28) - *(float *)(uVar28 + 0x118))
                                        - DAT_1808ac9e4) * DAT_1808ac140);
          uVar28 = 0;
          puVar15 = (undefined8 *)(ulonglong)local_108;
          puVar30 = auStack_158;
          puVar32 = local_d0;
          puVar13 = puStack_c8;
          fVar39 = DAT_1808acda0;
          unaff_XMM8_Da = DAT_1808aca80;
          bVar6 = local_108;
          if (local_d0 != puStack_c8) {
            do {
              piVar26 = (int *)*puVar32;
              iVar8 = (int)uVar28;
              if (iVar8 != 0) {
                *(undefined8 *)(puVar29 + -8) = 0x1802ec042;
                FUN_1803ec6c0(0,fVar39);
              }
              iVar33 = *piVar26;
              *(undefined8 *)(puVar29 + -8) = 0x1802ec049;
              FUN_1803e8a70(iVar33);
              iVar33 = *piVar26;
              iVar2 = **(int **)(puVar29 + 0x60);
              plVar10 = (longlong *)(piVar26 + 10);
              if (0xf < *(ulonglong *)(piVar26 + 0x10)) {
                plVar10 = (longlong *)*plVar10;
              }
              puVar29[0x48] = 0;
              puVar29[0x40] = iVar2 == iVar33;
              *(ulonglong *)(puVar29 + 0x38) = CONCAT44(unaff_XMM8_Da,fVar37);
              *(undefined8 *)(puVar29 + 0x30) = 0;
              *(undefined4 *)(puVar29 + 0x28) = 0xffffffff;
              *(int **)(puVar29 + 0x20) = piVar26 + 0x12;
              iVar33 = piVar26[0x1a];
              *(undefined8 *)(puVar29 + -8) = 0x1802ec0a7;
              pcVar22 = (char *)FUN_1802d4d40(local_d8,"##sticker",plVar10,iVar33);
              if (*pcVar22 != '\0') {
                **(int **)(puVar29 + 0x60) = *piVar26;
                if ((((char)puVar15 == '\0') && (param_1 != 0)) &&
                   (lVar20 = (longlong)(int)uVar34 * 0x1c, *(int *)(lVar20 + 0xf8 + param_1) < 0)) {
                  *(undefined8 *)(puVar29 + -8) = 0x1802ec0e3;
                  FUN_1802e9a40(lVar20 + 0xe0 + param_1,uVar34 & 0xffffffff);
                }
                DAT_1809f5984 = (int)uVar34;
              }
              *(undefined8 *)(puVar29 + -8) = 0x1802ec0f5;
              FUN_1802eac50(piVar26,0);
              uVar31 = DAT_180ca0a50[0x29f];
              iVar33 = *(int *)(uVar31 + 0x108);
              puVar12 = DAT_180ca0a50;
              if (iVar33 < 2) {
                *(undefined8 *)(puVar29 + -8) = 0x1802ec11a;
                FUN_1803ebc00("Calling PopID() too many times!");
                puVar12 = DAT_180ca0a50;
              }
              else {
LAB_1802ec12a:
                iVar8 = (int)uVar28;
                *(int *)(uVar31 + 0x108) = iVar33 + -1;
              }
              iVar33 = (int)uVar34;
              bVar6 = (byte)puVar15;
              uVar25 = iVar8 + 1U & 0x80000003;
              if ((int)uVar25 < 0) {
                uVar25 = (uVar25 - 1 | 0xfffffffc) + 1;
              }
              uVar28 = (ulonglong)uVar25;
              puVar32 = puVar32 + 1;
              puVar30 = puVar29;
            } while (puVar32 != puVar13);
          }
          if (*(longlong *)(puVar30 + 0x68) != *(longlong *)(puVar30 + 0x70)) {
            uVar34 = DAT_181107a18;
            if ((DAT_181107a18 == 0) && (uVar34 = DAT_181107a08, DAT_181107a08 == 0)) {
              uVar34 = puVar12[0x23e];
            }
            local_b0 = puVar12[0x23e];
            local_a8 = *(undefined4 *)((longlong)puVar12 + 0x1204);
            local_a4 = (undefined4)puVar12[0x240];
            *(undefined8 *)(puVar30 + -8) = 0x1802ec1b4;
            FUN_1803f6200(puVar12 + 0x3fc,&local_b0);
            *(undefined8 *)(puVar30 + -8) = 0x1802ec1c7;
            FUN_1803e8680(uVar34,DAT_1808ac930,0);
            *(undefined8 *)(puVar30 + -8) = 0x1802ec1db;
            FUN_180414370("From Other Capsules",0,1);
            puVar12 = DAT_180ca0a50;
            if ((int)DAT_180ca0a50[0x3fc] < 1) {
              *(undefined8 *)(puVar30 + -8) = 0x1802ec1f9;
              FUN_1803ebc00("Calling PopFont() too many times!");
            }
            else {
              lVar20 = (longlong)(int)DAT_180ca0a50[0x3fc] + -1;
              uVar34 = DAT_180ca0a50[0x3fd];
              uVar9 = *(undefined4 *)(uVar34 + 0xc + lVar20 * 0x10);
              uVar1 = *(undefined4 *)(uVar34 + 8 + lVar20 * 0x10);
              uVar3 = *(undefined8 *)(uVar34 + lVar20 * 0x10);
              *(undefined8 *)(puVar30 + -8) = 0x1802ec21d;
              FUN_1803e8680(uVar3,uVar1,uVar9);
              *(int *)(puVar12 + 0x3fc) = (int)puVar12[0x3fc] + -1;
            }
            uVar25 = 0;
            puVar15 = *(undefined8 **)(puVar30 + 0x70);
            for (puVar16 = *(undefined8 **)(puVar30 + 0x68); puVar16 != puVar15;
                puVar16 = puVar16 + 1) {
              piVar26 = (int *)*puVar16;
              if (uVar25 != 0) {
                *(undefined8 *)(puVar30 + -8) = 0x1802ec252;
                FUN_1803ec6c0(0,fVar39);
              }
              iVar8 = *piVar26;
              *(undefined8 *)(puVar30 + -8) = 0x1802ec259;
              FUN_1803e8a70(iVar8);
              iVar8 = *piVar26;
              iVar2 = **(int **)(puVar30 + 0x60);
              plVar10 = (longlong *)(piVar26 + 10);
              if (0xf < *(ulonglong *)(piVar26 + 0x10)) {
                plVar10 = (longlong *)*plVar10;
              }
              puVar30[0x48] = 0;
              puVar30[0x40] = iVar2 == iVar8;
              *(ulonglong *)(puVar30 + 0x38) = CONCAT44(unaff_XMM8_Da,fVar37);
              *(undefined8 *)(puVar30 + 0x30) = 0;
              *(undefined4 *)(puVar30 + 0x28) = 0xffffffff;
              *(int **)(puVar30 + 0x20) = piVar26 + 0x12;
              iVar8 = piVar26[0x1a];
              *(undefined8 *)(puVar30 + -8) = 0x1802ec2b7;
              pcVar22 = (char *)FUN_1802d4d40(local_d8,"##sticker",plVar10,iVar8);
              if (*pcVar22 != '\0') {
                **(int **)(puVar30 + 0x60) = *piVar26;
                if (((bVar6 == 0) && (param_1 != 0)) &&
                   (*(int *)((longlong)iVar33 * 0x1c + 0xf8 + param_1) < 0)) {
                  *(undefined8 *)(puVar30 + -8) = 0x1802ec2f3;
                  FUN_1802e9a40((longlong)iVar33 * 0x1c + 0xe0 + param_1,iVar33);
                }
                DAT_1809f5984 = iVar33;
              }
              *(undefined8 *)(puVar30 + -8) = 0x1802ec305;
              FUN_1802eac50(piVar26,0);
              iVar8 = *(int *)(DAT_180ca0a50[0x29f] + 0x108);
              if (iVar8 < 2) {
                *(undefined8 *)(puVar30 + -8) = 0x1802ec32a;
                FUN_1803ebc00("Calling PopID() too many times!");
              }
              else {
                *(int *)(DAT_180ca0a50[0x29f] + 0x108) = iVar8 + -1;
              }
              uVar25 = uVar25 + 1 & 0x80000003;
              if ((int)uVar25 < 0) {
                uVar25 = (uVar25 - 1 | 0xfffffffc) + 1;
              }
            }
          }
          *(undefined8 *)(puVar30 + -8) = 0x1802ec35e;
          FUN_1803d8a40(1);
        }
        *(undefined8 *)(puVar30 + -8) = 0x1802ec363;
        FUN_1803e1bc0();
        *(undefined8 *)(puVar30 + -8) = 0x1802ec36d;
        FUN_1803d8a40(1);
        *(undefined8 *)(puVar30 + -8) = 0x1802ec372;
        FUN_1802b5590();
        lVar20 = *(longlong *)(puVar30 + 0x68);
        if (lVar20 != 0) {
          lVar21 = lVar20;
          if ((0xfff < (ulonglong)((*(longlong *)(puVar30 + 0x78) - lVar20 >> 3) * 8)) &&
             (lVar21 = *(longlong *)(lVar20 + -8), 0x1f < (lVar20 - lVar21) - 8U)) {
            lVar21 = 5;
            pcVar4 = (code *)swi(0x29);
            (*pcVar4)(5);
            puVar30 = puVar30 + 8;
          }
          *(undefined8 *)(puVar30 + -8) = 0x1802ec3c3;
          thunk_FUN_1803d64e0(lVar21);
          *(undefined8 *)(puVar30 + 0x68) = 0;
          *(undefined8 *)(puVar30 + 0x70) = 0;
          *(undefined8 *)(puVar30 + 0x78) = 0;
        }
        if (local_d0 != (ulonglong *)0x0) {
          puVar12 = local_d0;
          if ((0xfff < (ulonglong)(((longlong)local_c0 - (longlong)local_d0 >> 3) * 8)) &&
             (puVar12 = (ulonglong *)local_d0[-1],
             (undefined1 *)0x1f < (undefined1 *)((longlong)local_d0 + (-8 - (longlong)puVar12)))) {
            puVar12 = (ulonglong *)&DAT_00000005;
            pcVar4 = (code *)swi(0x29);
            (*pcVar4)(5);
            puVar30 = puVar30 + 8;
          }
          *(undefined8 *)(puVar30 + -8) = 0x1802ec41f;
          thunk_FUN_1803d64e0(puVar12);
          local_d0 = (ulonglong *)0x0;
          puStack_c8 = (ulonglong *)0x0;
          local_c0 = (ulonglong *)0x0;
        }
        *(undefined8 *)(puVar30 + -8) = 0x1802ec434;
        FUN_18000f890(&local_a0);
        goto LAB_1802ec43b;
      }
    }
  }
  FUN_1802b5590();
  puVar30 = auStack_158;
LAB_1802ec43b:
  *(undefined8 *)(puVar30 + -8) = 0x1802ec447;
  return;
}



/* ===== 1802ec480 FUN_1802ec480 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802ec480(longlong param_1)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  int *piVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  byte bVar9;
  undefined1 uVar10;
  undefined4 uVar11;
  int iVar12;
  size_t sVar13;
  longlong lVar14;
  char *pcVar15;
  undefined8 *******pppppppuVar16;
  ulonglong uVar17;
  longlong *plVar18;
  uint uVar19;
  float fVar20;
  undefined1 auStack_e8 [32];
  int *local_c8;
  undefined8 local_c0;
  ulonglong local_b8;
  undefined8 local_b0;
  undefined1 local_a8;
  undefined1 local_a0;
  undefined8 local_98;
  undefined1 local_90 [4];
  undefined8 local_8c;
  undefined8 *******local_80;
  undefined8 uStack_78;
  longlong local_70;
  ulonglong local_68;
  ulonglong local_60;
  
  local_60 = DAT_180919500 ^ (ulonglong)auStack_e8;
  local_98 = 0x40c0000040c00000;
  cVar8 = FUN_1802b5260("##inv_charm_picker",&local_98);
  if (cVar8 != '\0') {
    FUN_1803d8730(0,DAT_180960ec8);
    local_98 = 0x4066666740c00000;
    FUN_1803d89a0(0xb,&local_98);
    lVar3 = DAT_180ca0a50;
    fVar1 = *(float *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x11c);
    fVar2 = *(float *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x118);
    *(uint *)(DAT_180ca0a50 + 0x1eb0) = *(uint *)(DAT_180ca0a50 + 0x1eb0) | 1;
    *(undefined4 *)(lVar3 + 0x1ec8) = 0x43a00000;
    local_98 = 0;
    local_b0 = 0;
    local_b8 = 0;
    local_c0 = (undefined8 *)((ulonglong)local_c0._4_4_ << 0x20);
    local_c8 = (int *)&local_98;
    FUN_18041c570("##charm_search","Search",&DAT_1809f59d6,0x40);
    lVar3 = DAT_180ca0a50;
    fVar20 = *(float *)(DAT_180ca0a50 + 0xce0) + *(float *)(DAT_180ca0a50 + 0xce0) +
             *(float *)(DAT_180ca0a50 + 0x1200);
    *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
    lVar3 = *(longlong *)(lVar3 + 0x14f8);
    *(float *)(lVar3 + 0x118) = (fVar2 + DAT_1808acbc8) - DAT_1808ac988;
    *(float *)(lVar3 + 0x11c) = fVar1;
    *(undefined1 *)(lVar3 + 0x159) = 1;
    uVar11 = DAT_180960f38;
    if (DAT_1809f5995 != '\0') {
      uVar11 = DAT_1809f54bc;
    }
    local_98 = CONCAT44(fVar20,0x41c80000);
    local_b0 = CONCAT44(local_b0._4_4_,uVar11);
    local_b8 = local_b8 & 0xffffffffffffff00;
    local_c0 = &local_98;
    local_c8 = (int *)CONCAT44(local_c8._4_4_,DAT_1808ac8d4);
    cVar8 = FUN_1802d59d0("##randomize","inv_template",&DAT_1807596e0,DAT_1808acc20);
    if (cVar8 != '\0') {
      DAT_1809f5995 = DAT_1809f5995 == '\0';
    }
    uVar17 = 0xffffffff;
    pcVar15 = "inv_randomize_template";
    bVar9 = 0x69;
    do {
      pcVar15 = pcVar15 + 1;
      if (((bVar9 == 0x23) && (*pcVar15 == 0x23)) && (pcVar15[1] == 0x23)) {
        uVar17 = 0xffffffff;
        pcVar15 = pcVar15 + 2;
      }
      else {
        uVar17 = (ulonglong)
                 ((uint)(uVar17 >> 8) ^
                 *(uint *)(&DAT_1806c25c0 + (uVar17 & 0xff ^ (ulonglong)bVar9) * 4));
      }
      bVar9 = *pcVar15;
    } while (bVar9 != 0);
    local_98 = *(undefined8 *)(DAT_180ca0a50 + 0x1efc);
    local_8c = *(undefined8 *)(DAT_180ca0a50 + 0x1ef4);
    uVar10 = FUN_1803dd930(0);
    local_c0 = (undefined8 *)CONCAT44(local_c0._4_4_,~(uint)uVar17);
    local_c8 = (int *)&local_98;
    FUN_1802b56a0("Randomize Template",0,uVar10,&local_8c);
    lVar3 = DAT_180ca0a50;
    *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
    lVar3 = *(longlong *)(lVar3 + 0x14f8);
    *(float *)(lVar3 + 0x118) = fVar2;
    *(float *)(lVar3 + 0x11c) = fVar20 + fVar1 + DAT_1808ac750;
    *(undefined1 *)(lVar3 + 0x159) = 1;
    FUN_1803d8a40(1);
    FUN_1803d87f0(1);
    local_80 = (undefined8 *******)0x0;
    uStack_78 = 0;
    local_70 = 0;
    local_68 = 0;
    sVar13 = strlen(&DAT_1809f59d6);
    FUN_1800133a0(&local_80,&DAT_1809f59d6,sVar13);
    FUN_1803d8870(0x12,DAT_1808ac7ac);
    lVar3 = DAT_180ca0a50;
    *(uint *)(DAT_180ca0a50 + 0x1f38) = *(uint *)(DAT_180ca0a50 + 0x1f38) | 0x10;
    *(undefined8 *)(lVar3 + 0x1f84) = 0;
    *(undefined4 *)(lVar3 + 0x1f8c) = 0x7f7fffff;
    *(undefined4 *)(lVar3 + 0x1f90) = 0x437a0000;
    *(undefined8 *)(lVar3 + 0x1f98) = 0;
    *(undefined8 *)(lVar3 + 0x1fa0) = 0;
    local_98 = 0x43af0000;
    *(undefined1 *)(*(longlong *)(lVar3 + 0x14f8) + 0xce) = 1;
    uVar11 = FUN_1803e8900(*(undefined8 *)(lVar3 + 0x14f8),"##charm_grid");
    local_c8 = (int *)CONCAT44(local_c8._4_4_,0x80);
    cVar8 = FUN_1803e1800("##charm_grid",uVar11,&local_98,0x20);
    if (cVar8 != '\0') {
      local_98 = 0x4120000041200000;
      FUN_1803d89a0(0xe,&local_98);
      lVar3 = *(longlong *)(DAT_180ca0a50 + 0x14f8);
      if ((*(longlong *)(lVar3 + 0x1c8) != 0) ||
         (lVar14 = 0x280, *(longlong *)(DAT_180ca0a50 + 0x2360) != 0)) {
        lVar14 = 0x250;
      }
      uVar11 = FUN_18053f0d0(((*(float *)(lVar3 + lVar14) - *(float *)(lVar3 + 0x118)) -
                             DAT_1808ac9e4) * DAT_1808ac140);
      uVar19 = 0;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   8) < DAT_181116318) && (FUN_1804ed1b0(&DAT_181116318), DAT_181116318 == -1)) {
        FUN_1804ece40(&LAB_180567eb0);
        _Init_thread_footer(&DAT_181116318);
      }
      uVar7 = DAT_1808acda0;
      uVar6 = DAT_1808aca80;
      piVar5 = DAT_181116190;
      piVar4 = DAT_181116198;
      if (DAT_180ccfeda != '\0') {
        piVar5 = DAT_180cfc9a0;
        piVar4 = DAT_180cfc9a8;
      }
      for (; piVar5 != piVar4; piVar5 = piVar5 + 0x26) {
        if (local_70 == 0) {
LAB_1802ec926:
          plVar18 = (longlong *)(piVar5 + 10);
          if (uVar19 != 0) {
            FUN_1803ec6c0(0,uVar7);
          }
          FUN_1803e8a70(*piVar5);
          local_a8 = *(int *)(param_1 + 0x188) == *piVar5;
          if (0xf < *(ulonglong *)(piVar5 + 0x10)) {
            plVar18 = (longlong *)*plVar18;
          }
          local_c8 = piVar5 + 0x12;
          local_a0 = 0;
          local_b0 = CONCAT44(uVar6,uVar11);
          local_b8 = 0;
          local_c0 = (undefined8 *)CONCAT44(local_c0._4_4_,0xffffffff);
          pcVar15 = (char *)FUN_1802d4d40(local_90,"##charm",plVar18,piVar5[0x1a]);
          if ((*pcVar15 != '\0') && (*(int *)(param_1 + 0x188) = *piVar5, DAT_1809f5995 != '\0')) {
            iVar12 = FUN_1805185c8();
            *(int *)(param_1 + 0x18c) = iVar12 % 100000;
          }
          FUN_1802eac50(piVar5,0);
          iVar12 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
          if (iVar12 < 2) {
            FUN_1803ebc00("Calling PopID() too many times!");
          }
          else {
            *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar12 + -1;
          }
          uVar19 = uVar19 + 1 & 0x80000003;
          if ((int)uVar19 < 0) {
            uVar19 = (uVar19 - 1 | 0xfffffffc) + 1;
          }
        }
        else {
          pppppppuVar16 = &local_80;
          if (0xf < local_68) {
            pppppppuVar16 = local_80;
          }
          cVar8 = FUN_1802d4740(piVar5 + 10,pppppppuVar16);
          if (cVar8 != '\0') goto LAB_1802ec926;
        }
      }
      FUN_1803d8a40(1);
    }
    FUN_1803e1bc0();
    FUN_1803d8a40(1);
    FUN_1802b5590();
    FUN_18000f890(&local_80);
  }
  return;
}



/* ===== 1802ecaa0 FUN_1802ecaa0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_1802ecaa0(undefined8 *param_1)

{
  longlong lVar1;
  float local_res8 [8];
  
  lVar1 = DAT_1811079c0;
  if ((DAT_1811079c0 == 0) && (lVar1 = DAT_181107a08, DAT_181107a08 == 0)) {
    lVar1 = *(longlong *)(DAT_180ca0a50 + 0x11f0);
  }
  if (0xf < (ulonglong)param_1[3]) {
    param_1 = (undefined8 *)*param_1;
  }
  FUN_18040a2f0(local_res8,lVar1,DAT_1808ac930,DAT_1808acd08,0,param_1,0,0,0);
  return local_res8[0] + _DAT_1808acaac + _DAT_1808ac9d0;
}



/* ===== 1802ecb30 FUN_1802ecb30 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1802ecb30(undefined8 param_1,char *param_2,float param_3,float param_4)

{
  float fVar1;
  longlong lVar2;
  float fVar3;
  uint uVar4;
  longlong lVar5;
  char cVar6;
  undefined1 uVar7;
  float *pfVar8;
  longlong lVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float local_res18 [2];
  float local_res20 [2];
  undefined1 auStack_198 [32];
  uint local_178;
  undefined8 *local_170;
  char *local_168;
  undefined8 local_160;
  undefined4 local_158;
  undefined4 local_150;
  float local_148;
  float local_144;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined2 local_128;
  undefined1 local_126;
  float local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined4 local_104;
  undefined1 local_100 [16];
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined2 local_b4;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined1 local_a4;
  ulonglong local_98;
  
  lVar10 = DAT_180ca0a50;
  local_res20[0] = param_4;
  local_res18[0] = param_3;
  local_98 = DAT_180919500 ^ (ulonglong)auStack_198;
  pfVar8 = local_res18;
  if (param_3 <= param_4) {
    pfVar8 = local_res20;
  }
  if (DAT_1808acbb4 < param_4) {
    pfVar8 = (float *)&DAT_1806585b8;
  }
  fVar1 = *pfVar8;
  *(uint *)(DAT_180ca0a50 + 0x1f38) = *(uint *)(DAT_180ca0a50 + 0x1f38) | 0x10;
  *(float *)(lVar10 + 0x1f84) = fVar1;
  *(undefined4 *)(lVar10 + 0x1f88) = 0;
  *(float *)(lVar10 + 0x1f8c) = fVar1;
  *(undefined4 *)(lVar10 + 0x1f90) = 0x7f7fffff;
  *(undefined8 *)(lVar10 + 0x1f98) = 0;
  *(undefined8 *)(lVar10 + 0x1fa0) = 0;
  local_148 = 7.0;
  local_144 = 7.0;
  cVar6 = FUN_1802b5260(param_1,&local_148);
  uVar7 = 0;
  if (cVar6 != '\0') {
    local_128 = _DAT_1809f72e0;
    local_126 = DAT_1809f72e2;
    local_124 = DAT_1809f72e4;
    local_120 = DAT_1809f72e8;
    local_11c = DAT_1809f72ec;
    local_118 = CONCAT44(DAT_1809f72f4,DAT_1809f72f0);
    uStack_110 = CONCAT44(DAT_1809f72fc,DAT_1809f72f8);
    local_108 = DAT_1809f7300;
    local_104 = DAT_1809f7304;
    FUN_180024b50(local_100,&DAT_1809f7308);
    local_e0 = _DAT_1809f5b40;
    uStack_d8 = _DAT_1809f5b48;
    local_d0 = DAT_1809f5b50;
    local_c8 = _DAT_1808ad2d0;
    uStack_c0 = _UNK_1808ad2d8;
    local_b8 = 0;
    local_b4 = 0;
    local_b0 = 0;
    local_a8 = 0;
    local_a4 = 0;
    if (DAT_181107158 == DAT_181107160) {
      FUN_180354940(DAT_181107158,DAT_181107158,&local_128);
    }
    else {
      FUN_1803598d0(DAT_181107158,&local_128);
      DAT_181107158 = DAT_181107158 + 0x88;
    }
    FUN_18000f890(local_100);
    FUN_180312140(param_2);
    lVar5 = DAT_180ca0a50;
    *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
    uVar4 = DAT_180960ec8;
    fVar3 = DAT_1808ac8e4;
    lVar10 = *(longlong *)(lVar5 + 0x14f8);
    lVar2 = *(longlong *)(lVar10 + 0x2c8);
    fVar1 = *(float *)(lVar10 + 0x118);
    fVar13 = *(float *)(lVar10 + 0x11c);
    if ((*(longlong *)(lVar10 + 0x1c8) != 0) || (lVar9 = 0x280, *(longlong *)(lVar5 + 0x2360) != 0))
    {
      lVar9 = 0x250;
    }
    fVar11 = *(float *)(lVar10 + lVar9) - fVar1;
    fVar12 = param_3 - DAT_1808ac8e4;
    if (param_3 - DAT_1808ac8e4 <= fVar11) {
      fVar12 = fVar11;
    }
    local_148 = fVar1 + DAT_1808ac7ec;
    local_144 = (float)FUN_18053f0d0();
    local_144 = local_144 + fVar13;
    lVar10 = DAT_181107a18;
    if ((DAT_181107a18 == 0) && (lVar10 = DAT_181107a08, DAT_181107a08 == 0)) {
      lVar10 = *(longlong *)(lVar5 + 0x11f0);
    }
    if ((((uVar4 & 0xff000000) != 0) && (param_2 != (char *)0x0)) && (*param_2 != '\0')) {
      if (lVar10 == 0) {
        lVar10 = *(longlong *)(*(longlong *)(lVar2 + 0x38) + 0x18);
      }
      local_140 = *(undefined8 *)(lVar2 + 0x60);
      uStack_138 = *(undefined8 *)(lVar2 + 0x68);
      local_150 = 0;
      local_158 = 0;
      local_160 = 0;
      local_170 = &local_140;
      local_178 = uVar4;
      local_168 = param_2;
      FUN_18040a900(lVar10,lVar2,DAT_1808ac940,&local_148);
    }
    local_144 = 25.068;
    local_148 = fVar12;
    FUN_1804174f0(&local_148);
    fVar13 = fVar13 + _DAT_1808aca08;
    local_128 = 0x100;
    local_126 = 1;
    local_124 = fVar3;
    local_120 = 0;
    local_11c = 0;
    local_118 = 0;
    uStack_110 = 0;
    local_108 = 0;
    local_104 = DAT_1808aca44;
    local_f0 = 0;
    local_e8 = 0xf;
    local_100._11_5_ = 0;
    local_100._0_11_ = SUB1211(ZEXT812(0),1);
    local_100 = local_100 << 8;
    _DAT_1809f72e0 = 0x100;
    DAT_1809f72e2 = 1;
    DAT_1809f72e4 = fVar3;
    DAT_1809f72e8 = 0;
    DAT_1809f72ec = 0;
    DAT_1809f72f0 = 0.0;
    DAT_1809f72f4 = 0.0;
    DAT_1809f72f8 = 0.0;
    DAT_1809f72fc = 0.0;
    DAT_1809f7300 = 0;
    DAT_1809f7304 = DAT_1808aca44;
    FUN_18002ba60(&DAT_1809f7308,local_100);
    FUN_18000f890(local_100);
    lVar10 = DAT_180ca0a50;
    _DAT_1809f72e0 = 1;
    DAT_1809f72e2 = 0;
    DAT_1809f72e4 = 12.0;
    DAT_1809f7304 = 0x41fda5e3;
    DAT_1809f72f0 = fVar1;
    DAT_1809f72f4 = fVar12;
    DAT_1809f72f8 = fVar13;
    DAT_1809f72fc = fVar13;
    *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
    DAT_1809f7300 = *(undefined4 *)(*(longlong *)(lVar10 + 0x14f8) + 0x15c);
    DAT_180cd0ebd = 0;
    FUN_180401570(lVar2 + 0x88);
    FUN_180401a80(lVar2 + 0x88,lVar2,1);
    uVar7 = 1;
  }
  return uVar7;
}



/* ===== 1802ecff0 FUN_1802ecff0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802ecff0(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  float fVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  int *piVar8;
  undefined8 *puVar9;
  longlong lVar10;
  int *piVar11;
  char *pcVar12;
  longlong *plVar13;
  int iVar14;
  int *piVar15;
  longlong lVar16;
  undefined4 uVar17;
  int local_res8 [2];
  int local_res18 [2];
  int local_res20;
  undefined4 local_res24;
  undefined2 *in_stack_ffffffffffffffc8;
  ulonglong uVar18;
  
  if (DAT_180ccfeda == '\0') {
    piVar15 = (int *)0x0;
LAB_1802ed056:
    uVar17 = 0;
  }
  else {
    piVar15 = DAT_180cfc9a0;
    if (0 < *(int *)(param_1 + 0x188)) {
      for (; piVar15 != DAT_180cfc9a8; piVar15 = piVar15 + 0x26) {
        if (*piVar15 == *(int *)(param_1 + 0x188)) goto LAB_1802ed043;
      }
    }
    piVar15 = (int *)0x0;
LAB_1802ed043:
    if (piVar15 == (int *)0x0) goto LAB_1802ed056;
    uVar17 = FUN_1802ecaa0(piVar15 + 10);
  }
  cVar5 = FUN_1802ecb30("##inv_charm_options","Charm",DAT_1808acb90,uVar17);
  if (cVar5 == '\0') {
    return;
  }
  if (piVar15 == (int *)0x0) {
    FUN_1802e56a0();
    goto LAB_1802ed3cf;
  }
  FUN_1802e56a0();
  FUN_1802ea630(piVar15 + 0x12,piVar15 + 10,piVar15[0x1a],"Charm");
  FUN_1802e5720();
  FUN_1802e56a0();
  FUN_1802d0470("model",param_2 + 0x1fc);
  FUN_1802d0470("overlay",param_2 + 0x254);
  local_res8[0] = 0;
  piVar8 = (int *)(param_1 + 0x18c);
  piVar11 = local_res8;
  if (-1 < *piVar8) {
    piVar11 = piVar8;
  }
  if (99999 < *piVar8) {
    piVar11 = &DAT_1806585e0;
  }
  local_res18[0] = *piVar11;
  local_res8[0] = local_res18[0] / 10000;
  cVar5 = FUN_18033fa10("variant",local_res8,0,9,&DAT_1806dfdd8,0);
  if (cVar5 != '\0') {
    local_res20 = 0;
    piVar11 = &local_res20;
    if (-1 < local_res8[0]) {
      piVar11 = local_res8;
    }
    if (9 < local_res8[0]) {
      piVar11 = &DAT_1806585e4;
    }
    FUN_180273880();
    if (DAT_180cfb2b0 == (code *)0x0) {
      uVar6 = DAT_1809f3584 << 0xd ^ DAT_1809f3584;
      uVar6 = uVar6 >> 0x11 ^ uVar6;
      DAT_1809f3584 = uVar6 << 5 ^ uVar6;
      uVar6 = DAT_1809f3584 % 10000;
    }
    else {
      uVar6 = (*DAT_180cfb2b0)(0,9999);
    }
    local_res18[0] = *piVar11 * 10000 + uVar6;
    *piVar8 = local_res18[0];
  }
  in_stack_ffffffffffffffc8 = &DAT_1806dfdd8;
  cVar5 = FUN_18033fa10("template",local_res18,0,99999,&DAT_1806dfdd8,0);
  if (cVar5 != '\0') {
    *piVar8 = local_res18[0];
  }
  piVar8 = piVar15 + 2;
  if (0xf < *(ulonglong *)(piVar15 + 8)) {
    piVar8 = *(int **)piVar8;
  }
  if (((0x13 < *(ulonglong *)(piVar15 + 6)) &&
      (lVar10 = *(ulonglong *)(piVar15 + 6) + (longlong)piVar8,
      lVar7 = thunk_FUN_1804e92d0(piVar8,lVar10,"sticker_display_case",0x14), lVar7 != lVar10)) &&
     (lVar7 - (longlong)piVar8 != -1)) {
    if (DAT_180ccfeda == '\0') {
LAB_1802ed2ab:
      pcVar12 = "choose the sticker inside";
    }
    else {
      piVar8 = DAT_180cfc988;
      if (0 < *(int *)(param_1 + 0x19c)) {
        for (; piVar8 != DAT_180cfc990; piVar8 = piVar8 + 0x26) {
          if (*piVar8 == *(int *)(param_1 + 0x19c)) goto LAB_1802ed296;
        }
      }
      piVar8 = (int *)0x0;
LAB_1802ed296:
      if (piVar8 == (int *)0x0) goto LAB_1802ed2ab;
      pcVar12 = (char *)(piVar8 + 10);
      if (0xf < *(ulonglong *)(piVar8 + 0x10)) {
        pcVar12 = *(char **)pcVar12;
      }
    }
    cVar5 = FUN_1802cf4d0(pcVar12);
    if (cVar5 != '\0') {
      DAT_1809f5996 = 0;
      FUN_1802b4d80("##inv_case_sticker");
    }
    lVar10 = DAT_180ca0a50;
    *(uint *)(DAT_180ca0a50 + 0x1f38) = *(uint *)(DAT_180ca0a50 + 0x1f38) | 0x10;
    *(undefined8 *)(lVar10 + 0x1f84) = 0;
    *(undefined4 *)(lVar10 + 0x1f8c) = 0x7f7fffff;
    *(undefined4 *)(lVar10 + 0x1f90) = 0x43b18000;
    *(undefined8 *)(lVar10 + 0x1f98) = 0;
    *(undefined8 *)(lVar10 + 0x1fa0) = 0;
    local_res20 = 0x40c00000;
    local_res24 = 0x40c00000;
    cVar5 = FUN_1802b5260("##inv_case_sticker",&local_res20);
    if (cVar5 != '\0') {
      puVar9 = (undefined8 *)FUN_180280ea0();
      piVar8 = (int *)puVar9[1];
      for (piVar11 = (int *)*puVar9; piVar11 != piVar8; piVar11 = piVar11 + 0x26) {
        FUN_1803e8a70(*piVar11);
        plVar13 = (longlong *)(piVar11 + 10);
        if (0xf < *(ulonglong *)(piVar11 + 0x10)) {
          plVar13 = (longlong *)*plVar13;
        }
        cVar5 = FUN_1802b74f0(plVar13,*(int *)(param_1 + 0x19c) == *piVar11,0,0);
        if (cVar5 != '\0') {
          *(int *)(param_1 + 0x19c) = *piVar11;
          FUN_1803ee1f0();
        }
        iVar14 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
        if (iVar14 < 2) {
          FUN_1803ebc00("Calling PopID() too many times!");
        }
        else {
          *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar14 + -1;
        }
      }
      FUN_1802b5590();
    }
  }
  FUN_1802ea560();
LAB_1802ed3cf:
  uVar18 = (ulonglong)in_stack_ffffffffffffffc8 & 0xffffffffffffff00;
  cVar5 = FUN_1802e9ff0(&DAT_18075fa44,"inv_copy",
                        "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 448 512\" width=\"448\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M208 0L332 0C344 0 357 6 366 15L433 82C442 91 448 104 448 116L448 336C448 363 426 384 400 384L208 384C181 384 160 363 160 336L160 48C160 22 181 0 208 0ZM48 128L128 128L128 192L64 192L64 448L256 448L256 416L320 416L320 464C320 490 298 512 272 512L48 512C21 512 0 490 0 464L0 176C0 150 21 128 48 128Z\"/></svg>"
                        ,DAT_1808acbe4,uVar18);
  if (cVar5 != '\0') {
    _DAT_18110753c = *(undefined8 *)(param_1 + 0x188);
    uRam0000000181107544 = *(undefined8 *)(param_1 + 400);
    DAT_18110754c = *(undefined8 *)(param_1 + 0x198);
    DAT_181107538 = '\x01';
  }
  cVar5 = DAT_181107538;
  FUN_1802b9bd0();
  lVar10 = DAT_180ca0a50;
  uVar17 = DAT_1808ac34c;
  if (cVar5 == '\0') {
    DAT_181107580 = DAT_181107580 + 1;
    *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
    lVar7 = *(longlong *)(lVar10 + 0x14f8);
    lVar16 = *(longlong *)(lVar7 + 0x2c8);
    *(undefined1 *)(lVar7 + 0xce) = 1;
    iVar14 = *(int *)(*(longlong *)(*(longlong *)(lVar10 + 0x14f8) + 0x2c8) + 0x20);
    FUN_1803d8870(1,uVar17);
    FUN_1803e7920(1);
    FUN_1803d8a40(1);
  }
  else {
    lVar16 = 0;
    iVar14 = 0;
  }
  cVar5 = FUN_1802e9ff0("Paste","inv_paste",
                        "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 512 512\" width=\"512\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M160 0C136 0 115 13 104 32L47 32C21 32 0 54 0 80L0 400C0 427 21 448 47 448L191 448L191 176C191 132 227 96 272 96L320 96L320 80C320 54 298 32 272 32L215 32C204 13 183 0 160 0ZM272 128C245 128 224 150 224 176L224 448L224 464C224 490 245 512 272 512L464 512C490 512 512 490 512 464L512 244C512 232 506 219 497 210L430 143C421 134 408 128 396 128L320 128L272 128ZM160 40C173 40 184 51 184 64C184 78 173 88 160 88C146 88 136 78 136 64C136 51 146 40 160 40Z\"/></svg>"
                        ,DAT_1808acc00,uVar18 & 0xffffffffffffff00);
  uVar4 = DAT_18110754c;
  uVar3 = uRam0000000181107544;
  if ((cVar5 != '\0') && (DAT_181107538 != '\0')) {
    uVar17 = *(undefined4 *)(param_1 + 400);
    uVar1 = *(undefined4 *)(param_1 + 0x198);
    *(undefined8 *)(param_1 + 0x188) = _DAT_18110753c;
    *(undefined8 *)(param_1 + 400) = uVar3;
    *(undefined8 *)(param_1 + 0x198) = uVar4;
    *(undefined4 *)(param_1 + 400) = uVar17;
    *(undefined4 *)(param_1 + 0x194) = *(undefined4 *)(param_1 + 0x194);
    *(undefined4 *)(param_1 + 0x198) = uVar1;
    DAT_1809f5980 = 1;
  }
  if (lVar16 != 0) {
    FUN_1802b9bd0();
    DAT_181107580 = DAT_181107580 + -1;
    FUN_1803e79e0();
    fVar2 = DAT_1808ac1f4;
    if (iVar14 < *(int *)(lVar16 + 0x20)) {
      do {
        lVar10 = (longlong)iVar14;
        iVar14 = iVar14 + 1;
        uVar6 = *(uint *)(*(longlong *)(lVar16 + 0x28) + 0x10 + lVar10 * 0x14);
        *(uint *)(*(longlong *)(lVar16 + 0x28) + 0x10 + lVar10 * 0x14) =
             (int)(longlong)((float)(uVar6 >> 0x18) * fVar2 + fVar2) << 0x18 | uVar6 & 0xffffff;
      } while (iVar14 < *(int *)(lVar16 + 0x20));
    }
  }
  if (piVar15 != (int *)0x0) {
    FUN_1802ea560();
    cVar5 = FUN_1802e9ff0("Reset Position","inv_reset_position",
                          "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 512 512\" width=\"512\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M256 0C273 0 288 15 288 32L288 67C368 81 431 144 445 224L480 224C497 224 512 239 512 256C512 274 497 288 480 288L445 288C431 369 368 432 288 446L288 480C288 497 273 512 256 512C238 512 224 497 224 480L224 446C143 432 80 369 66 288L31 288C14 288 0 274 0 256C0 239 14 224 31 224L66 224C80 144 143 81 224 67L224 32C224 15 238 0 256 0ZM128 256C128 302 152 344 192 367C231 390 280 390 320 367C359 344 384 302 384 256C384 211 359 169 320 146C280 123 231 123 192 146C152 169 128 211 128 256ZM256 176C284 176 310 192 325 216C339 241 339 272 325 296C310 321 284 336 256 336C227 336 201 321 186 296C172 272 172 241 186 216C201 192 227 176 256 176Z\"/></svg>"
                          ,DAT_1808acc00,1);
    if (cVar5 != '\0') {
      *(undefined8 *)(param_1 + 0x194) = 0;
      *(undefined4 *)(param_1 + 400) = 0;
      DAT_1809f5980 = 1;
    }
    cVar5 = FUN_1802e9ff0("Delete","inv_trash",
                          "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 448 512\" width=\"448\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M135 18C140 7 151 0 163 0L284 0C296 0 307 7 312 18L320 32L416 32C433 32 448 47 448 64C448 82 433 96 416 96L32 96C14 96 0 82 0 64C0 47 14 32 32 32L128 32L135 18ZM32 128L416 128L416 448C416 483 387 512 352 512L96 512C60 512 32 483 32 448L32 128ZM128 192C119 192 112 200 112 208L112 432C112 441 119 448 128 448C136 448 144 441 144 432L144 208C144 200 136 192 128 192ZM224 192C215 192 208 200 208 208L208 432C208 441 215 448 224 448C232 448 240 441 240 432L240 208C240 200 232 192 224 192ZM320 192C311 192 304 200 304 208L304 432C304 441 311 448 320 448C328 448 336 441 336 432L336 208C336 200 328 192 320 192Z\"/></svg>"
                          ,DAT_1808acbe4,1);
    if (cVar5 != '\0') {
      *(undefined8 *)(param_1 + 0x188) = 0;
      *(undefined8 *)(param_1 + 400) = 0;
      *(undefined8 *)(param_1 + 0x198) = 0;
      FUN_1803ee1f0();
    }
  }
  FUN_1802e5720();
  FUN_1802e5480();
  return;
}



/* ===== 1802ed650 FUN_1802ed650 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802ed650(longlong param_1,char param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  char cVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  undefined4 *puVar11;
  longlong lVar12;
  int *piVar13;
  undefined4 *puVar14;
  int *piVar15;
  longlong *plVar16;
  longlong lVar17;
  undefined4 uVar18;
  int iVar19;
  undefined1 auStack_b8 [32];
  undefined *local_98;
  undefined4 local_90;
  int local_88 [4];
  undefined1 local_78 [24];
  ulonglong local_60;
  
  uVar6 = DAT_1809f5a18;
  local_60 = DAT_180919500 ^ (ulonglong)auStack_b8;
  lVar12 = (longlong)(int)DAT_1809f5a18;
  snprintf(local_78,0x18,"Slot %d",DAT_1809f5a18 + 1);
  puVar14 = &DAT_1809216bc;
  puVar11 = &DAT_1809216bc;
  if (DAT_1809f5900 != 0) {
    puVar11 = &DAT_1809216d0;
  }
  iVar19 = 0;
  if (param_2 == '\0') {
    if ((param_1 != 0) && (uVar6 < 6)) {
      iVar1 = *(int *)((lVar12 + 8) * 0x1c + param_1);
      goto LAB_1802ed6f3;
    }
LAB_1802ed776:
    uVar18 = 0;
  }
  else {
    if (4 < uVar6) goto LAB_1802ed776;
    iVar1 = puVar11[lVar12];
LAB_1802ed6f3:
    if (iVar1 == 0) goto LAB_1802ed776;
    if (param_2 == '\0') {
      if ((DAT_180ccfeda != '\0') && (piVar9 = DAT_180cfc988, 0 < iVar1)) {
        for (; piVar9 != DAT_180cfc990; piVar9 = piVar9 + 0x26) {
          if (*piVar9 == iVar1) goto LAB_1802ed763;
        }
      }
    }
    else if ((DAT_180ccfeda != '\0') && (piVar9 = DAT_180cfc8b0, 0 < iVar1)) {
      for (; piVar9 != DAT_180cfc8b8; piVar9 = piVar9 + 0x26) {
        if (*piVar9 == iVar1) goto LAB_1802ed763;
      }
    }
    piVar9 = (int *)0x0;
LAB_1802ed763:
    uVar18 = 0;
    if (piVar9 != (int *)0x0) {
      uVar18 = FUN_1802ecaa0(piVar9 + 10);
    }
  }
  cVar7 = FUN_1802ecb30("##inv_slot_options",local_78,DAT_1808acb70,uVar18);
  fVar4 = DAT_1808ac1f4;
  if (cVar7 == '\0') {
    return;
  }
  if (param_2 == '\0') {
    if ((param_1 == 0) || (5 < uVar6)) goto LAB_1802edca6;
    piVar13 = (int *)((lVar12 + 8) * 0x1c + param_1);
    piVar9 = piVar13;
  }
  else {
    if (DAT_1809f5900 != 0) {
      puVar14 = &DAT_1809216d0;
    }
    if (4 < uVar6) goto LAB_1802edca6;
    piVar13 = (int *)0x0;
    piVar9 = puVar14 + lVar12;
  }
  if (piVar9 != (int *)0x0) {
    iVar1 = *piVar9;
    if (param_2 == '\0') {
      if ((DAT_180ccfeda != '\0') && (piVar15 = DAT_180cfc988, 0 < iVar1)) {
        for (; piVar15 != DAT_180cfc990; piVar15 = piVar15 + 0x26) {
          if (*piVar15 == iVar1) goto LAB_1802ed873;
        }
      }
    }
    else if ((DAT_180ccfeda != '\0') && (piVar15 = DAT_180cfc8b0, 0 < iVar1)) {
      for (; piVar15 != DAT_180cfc8b8; piVar15 = piVar15 + 0x26) {
        if (*piVar15 == iVar1) goto LAB_1802ed873;
      }
    }
    piVar15 = (int *)0x0;
LAB_1802ed873:
    FUN_1802e56a0();
    if (piVar15 != (int *)0x0) {
      if (*(longlong *)(piVar15 + 0x20) == 0) {
        plVar16 = (longlong *)0x0;
      }
      else {
        plVar16 = (longlong *)(piVar15 + 0x1c);
        if (0xf < *(ulonglong *)(piVar15 + 0x22)) {
          plVar16 = (longlong *)*plVar16;
        }
      }
      FUN_1802ea630(piVar15 + 0x12,piVar15 + 10,piVar15[0x1a],plVar16);
      FUN_1802e5720();
      FUN_1802e56a0();
      fVar5 = DAT_1808acb08;
      if (piVar13 != (int *)0x0) {
        local_88[0] = 0;
        local_88[2] = 100;
        local_90 = 0;
        local_88[1] = (int)((float)piVar13[1] * DAT_1808acb08 + fVar4);
        piVar10 = local_88;
        if (-1 < local_88[1]) {
          piVar10 = local_88 + 1;
        }
        piVar8 = local_88 + 2;
        if (local_88[1] < 0x65) {
          piVar8 = piVar10;
        }
        local_88[0] = *piVar8;
        local_98 = &DAT_1806f0260;
        cVar7 = FUN_18033fa10(&DAT_18075ffb8,local_88,0,100);
        if (cVar7 != '\0') {
          piVar13[1] = (int)((float)local_88[0] / fVar5);
        }
        FUN_1802ea560();
      }
    }
    local_98 = (undefined *)((ulonglong)local_98 & 0xffffffffffffff00);
    cVar7 = FUN_1802e9ff0(&DAT_18075fa44,"inv_copy",
                          "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 448 512\" width=\"448\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M208 0L332 0C344 0 357 6 366 15L433 82C442 91 448 104 448 116L448 336C448 363 426 384 400 384L208 384C181 384 160 363 160 336L160 48C160 22 181 0 208 0ZM48 128L128 128L128 192L64 192L64 448L256 448L256 416L320 416L320 464C320 490 298 512 272 512L48 512C21 512 0 490 0 464L0 176C0 150 21 128 48 128Z\"/></svg>"
                         );
    iVar1 = DAT_1808ac34c;
    if (cVar7 != '\0') {
      DAT_1809f5be0 = '\x01';
      if (piVar13 == (int *)0x0) {
        DAT_1809f5bf0 = 0;
        DAT_1809f5bf4 = 0;
        DAT_1809f5bf8 = 0;
        DAT_1809f5bfc = -1;
        DAT_1809f5bec = DAT_1808ac34c;
      }
      else {
        iVar19 = piVar13[1];
        DAT_1809f5bf0 = piVar13[3];
        DAT_1809f5bf4 = piVar13[4];
        DAT_1809f5bf8 = piVar13[5];
        DAT_1809f5bfc = piVar13[6];
        DAT_1809f5bec = piVar13[2];
      }
      DAT_1809f5be4 = *piVar9;
      DAT_1809f5be8 = iVar19;
    }
    cVar7 = DAT_1809f5be0;
    FUN_1802b9bd0();
    lVar12 = DAT_180ca0a50;
    if (cVar7 == '\0') {
      DAT_181107580 = DAT_181107580 + 1;
      *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
      lVar3 = *(longlong *)(lVar12 + 0x14f8);
      lVar17 = *(longlong *)(lVar3 + 0x2c8);
      *(undefined1 *)(lVar3 + 0xce) = 1;
      iVar19 = *(int *)(*(longlong *)(*(longlong *)(lVar12 + 0x14f8) + 0x2c8) + 0x20);
      FUN_1803d8870(1,iVar1);
      FUN_1803e7920(1);
      FUN_1803d8a40(1);
    }
    else {
      lVar17 = 0;
      iVar19 = 0;
    }
    uVar18 = DAT_1808acc00;
    local_98 = (undefined *)((ulonglong)local_98 & 0xffffffffffffff00);
    cVar7 = FUN_1802e9ff0("Paste","inv_paste",
                          "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 512 512\" width=\"512\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M160 0C136 0 115 13 104 32L47 32C21 32 0 54 0 80L0 400C0 427 21 448 47 448L191 448L191 176C191 132 227 96 272 96L320 96L320 80C320 54 298 32 272 32L215 32C204 13 183 0 160 0ZM272 128C245 128 224 150 224 176L224 448L224 464C224 490 245 512 272 512L464 512C490 512 512 490 512 464L512 244C512 232 506 219 497 210L430 143C421 134 408 128 396 128L320 128L272 128ZM160 40C173 40 184 51 184 64C184 78 173 88 160 88C146 88 136 78 136 64C136 51 146 40 160 40Z\"/></svg>"
                          ,DAT_1808acc00);
    if ((cVar7 != '\0') && (DAT_1809f5be0 != '\0')) {
      if (piVar13 == (int *)0x0) {
        *piVar9 = DAT_1809f5be4;
      }
      else {
        *piVar13 = DAT_1809f5be4;
        piVar13[1] = DAT_1809f5be8;
        piVar13[2] = DAT_1809f5bec;
        piVar13[3] = DAT_1809f5bf0;
        piVar13[4] = DAT_1809f5bf4;
        piVar13[5] = DAT_1809f5bf8;
        piVar13[6] = DAT_1809f5bfc;
        if (DAT_1809f5bfc < 0) {
          FUN_1802e9a40(piVar13,uVar6);
        }
      }
      DAT_1809f5984 = uVar6;
      DAT_1809f5980 = 0;
    }
    if (lVar17 != 0) {
      FUN_1802b9bd0();
      DAT_181107580 = DAT_181107580 + -1;
      FUN_1803e79e0();
      if (iVar19 < *(int *)(lVar17 + 0x20)) {
        do {
          lVar12 = (longlong)iVar19;
          iVar19 = iVar19 + 1;
          uVar2 = *(uint *)(*(longlong *)(lVar17 + 0x28) + 0x10 + lVar12 * 0x14);
          *(uint *)(*(longlong *)(lVar17 + 0x28) + 0x10 + lVar12 * 0x14) =
               (int)(longlong)((float)(uVar2 >> 0x18) * fVar4 + fVar4) << 0x18 | uVar2 & 0xffffff;
        } while (iVar19 < *(int *)(lVar17 + 0x20));
      }
    }
    if (piVar15 != (int *)0x0) {
      FUN_1802ea560();
      local_98 = (undefined *)CONCAT71(local_98._1_7_,1);
      cVar7 = FUN_1802e9ff0("Reset Position","inv_reset_position",
                            "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 512 512\" width=\"512\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M256 0C273 0 288 15 288 32L288 67C368 81 431 144 445 224L480 224C497 224 512 239 512 256C512 274 497 288 480 288L445 288C431 369 368 432 288 446L288 480C288 497 273 512 256 512C238 512 224 497 224 480L224 446C143 432 80 369 66 288L31 288C14 288 0 274 0 256C0 239 14 224 31 224L66 224C80 144 143 81 224 67L224 32C224 15 238 0 256 0ZM128 256C128 302 152 344 192 367C231 390 280 390 320 367C359 344 384 302 384 256C384 211 359 169 320 146C280 123 231 123 192 146C152 169 128 211 128 256ZM256 176C284 176 310 192 325 216C339 241 339 272 325 296C310 321 284 336 256 336C227 336 201 321 186 296C172 272 172 241 186 216C201 192 227 176 256 176Z\"/></svg>"
                            ,uVar18);
      if ((cVar7 != '\0') && (piVar13 != (int *)0x0)) {
        FUN_1802e9a40(piVar13,uVar6);
        DAT_1809f5984 = uVar6;
        DAT_1809f5980 = 0;
      }
      if (param_2 == '\0') {
        local_98 = (undefined *)CONCAT71(local_98._1_7_,1);
        cVar7 = FUN_1802e9ff0("Reset Rotation","inv_reset_rotation",
                              "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 512 512\" width=\"512\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M406 203C398 181 386 161 368 143C306 81 205 81 142 143L125 160L159 160C177 160 191 175 191 192C191 210 177 224 159 224L48 224C48 224 48 224 48 224L47 224C30 224 15 210 15 192L15 80C15 63 30 48 47 48C65 48 79 63 79 80L79 116L97 98C184 11 326 11 414 98C438 122 456 151 467 182C472 198 464 217 447 223C430 228 412 220 406 203L406 203ZM406 203ZM472 290C477 291 482 294 486 298C490 302 493 307 494 312C494 313 495 314 495 316C495 317 495 319 495 321L495 432C495 449 481 464 463 464C446 464 431 449 431 432L431 397L414 415L414 415C326 501 184 501 97 415C73 390 55 362 44 331C38 314 47 296 64 290C80 284 98 293 104 310C112 332 125 352 142 370C205 432 306 432 368 370L369 369L386 352L351 352C334 352 319 338 319 320C319 303 334 288 351 288L463 288C465 288 466 289 468 289C469 289 471 289 472 290L472 290ZM472 290Z\"/></svg>"
                              ,uVar18);
        if ((cVar7 != '\0') && (piVar13 != (int *)0x0)) {
          piVar13[3] = 0;
          DAT_1809f5984 = uVar6;
          DAT_1809f5980 = 0;
        }
      }
      local_98 = (undefined *)CONCAT71(local_98._1_7_,1);
      cVar7 = FUN_1802e9ff0("Delete","inv_trash",
                            "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 448 512\" width=\"448\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M135 18C140 7 151 0 163 0L284 0C296 0 307 7 312 18L320 32L416 32C433 32 448 47 448 64C448 82 433 96 416 96L32 96C14 96 0 82 0 64C0 47 14 32 32 32L128 32L135 18ZM32 128L416 128L416 448C416 483 387 512 352 512L96 512C60 512 32 483 32 448L32 128ZM128 192C119 192 112 200 112 208L112 432C112 441 119 448 128 448C136 448 144 441 144 432L144 208C144 200 136 192 128 192ZM224 192C215 192 208 200 208 208L208 432C208 441 215 448 224 448C232 448 240 441 240 432L240 208C240 200 232 192 224 192ZM320 192C311 192 304 200 304 208L304 432C304 441 311 448 320 448C328 448 336 441 336 432L336 208C336 200 328 192 320 192Z\"/></svg>"
                            ,DAT_1808acbe4);
      if (cVar7 != '\0') {
        if (piVar13 == (int *)0x0) {
          *piVar9 = 0;
        }
        else {
          piVar13[0] = 0;
          piVar13[1] = 0;
          piVar13[2] = 0x3f800000;
          piVar13[3] = 0;
          piVar13[4] = 0;
          piVar13[5] = 0;
          piVar13[6] = -1;
        }
        FUN_1803ee1f0();
      }
    }
    FUN_1802e5720();
    FUN_1802e5480();
    return;
  }
LAB_1802edca6:
  FUN_1802e5480();
  return;
}



/* ===== 1802edce0 FUN_1802edce0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001802edda0) */
/* WARNING: Removing unreachable block (ram,0x0001802edda6) */
/* WARNING: Removing unreachable block (ram,0x0001802eddb3) */
/* WARNING: Removing unreachable block (ram,0x0001802eddc1) */
/* WARNING: Removing unreachable block (ram,0x0001802eddc4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802edce0(char param_1,char param_2)

{
  longlong lVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  char cVar9;
  byte bVar10;
  int iVar11;
  longlong *plVar12;
  int *piVar13;
  undefined8 *puVar14;
  uint uVar15;
  undefined4 *puVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  char *pcVar19;
  undefined4 uVar20;
  longlong lVar21;
  undefined1 *puVar22;
  undefined1 *puVar23;
  uint uVar24;
  int *piVar25;
  char *pcVar26;
  longlong lVar27;
  undefined1 *puVar28;
  ulonglong in_R10;
  ulonglong in_R11;
  longlong lVar29;
  undefined *puVar30;
  bool bVar31;
  bool bVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined8 uVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined8 uStack_220;
  undefined1 auStack_218 [8];
  undefined1 auStack_210 [24];
  undefined8 *local_1f8;
  char *local_1f0;
  char *local_1e8;
  undefined8 local_1e0;
  ulonglong local_1d8;
  undefined4 local_1d0;
  undefined4 local_1c8;
  byte local_1b8 [8];
  undefined8 local_1b0;
  uint local_1a8 [2];
  undefined8 local_1a0;
  int local_198;
  undefined1 local_190 [16];
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  ulonglong uStack_168;
  int *local_160;
  int *local_158;
  char *local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  ulonglong local_138;
  char *local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  ulonglong local_118;
  undefined1 local_110 [32];
  ulonglong local_f0;
  
  local_f0 = DAT_180919500 ^ (ulonglong)auStack_218;
  uVar15 = 0;
  local_1a8[0] = 0;
  bVar31 = DAT_1809f590c == 4;
  bVar32 = DAT_1809f590c != 0;
  if (DAT_1809f590c == 4) {
    local_1a8[1] = DAT_1809214b0;
    if (DAT_1809f5900 == 0) {
      local_1a8[1] = DAT_1809214ac;
    }
  }
  else {
    puVar23 = auStack_218;
    if (bVar32) goto LAB_1802eecf1;
    local_1a8[1] = DAT_1809f5910;
  }
  puVar23 = auStack_218;
  if (local_1a8[1] == 0) goto LAB_1802eecf1;
  local_1b8[0] = param_2;
  local_1b8[4] = bVar31;
  if (bVar31) {
    lVar29 = 0;
  }
  else {
    lVar29 = FUN_1800f1190();
    puVar23 = auStack_218;
    if (lVar29 == 0) goto LAB_1802eecf1;
  }
  lVar27 = DAT_180ca0a50;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  lVar27 = *(longlong *)(lVar27 + 0x14f8);
  local_198 = (uint)!bVar31 * 2 + 3;
  if (param_1 == '\0') {
    fVar35 = 0.0;
  }
  else {
    fVar35 = DAT_1808ac864;
  }
  fVar37 = *(float *)(lVar27 + 0x34) + *(float *)(lVar27 + 0x2c);
  fVar38 = *(float *)(lVar27 + 0x30) + *(float *)(lVar27 + 0x28);
  local_1b0 = (undefined1 *)0x0;
  FUN_1803d89a0(0xe,&local_1b0);
  if ((local_1b8[0] == '\0') && (FUN_1802eb590(lVar29,bVar31), lVar29 != 0)) {
    FUN_1802ec480(lVar29);
  }
  uVar20 = DAT_1808ac8dc;
  puVar23 = auStack_218;
  if (bVar32) {
    fVar37 = (fVar37 - fVar35) - DAT_1808aca5c;
    fVar40 = (fVar38 - fVar35) - ((float)local_198 * DAT_1808aca5c + DAT_1808ac710);
    piVar25 = (int *)0x0;
  }
  else {
    lVar21 = DAT_181107a08;
    if (DAT_181107a08 == 0) {
      lVar21 = *(longlong *)(DAT_180ca0a50 + 0x11f0);
    }
    local_1c8 = 0;
    local_1d8 = 0;
    local_1e0 = 0;
    local_1e8 = (char *)0x0;
    local_1f0 = "Moving Toggle";
    local_1f8 = (undefined8 *)((ulonglong)local_1f8 & 0xffffffff00000000);
    FUN_18040a2f0(&local_1b0,lVar21,DAT_1808ac8dc,DAT_1808acd08);
    fVar8 = DAT_1808aca5c;
    fVar7 = DAT_1808ac988;
    fVar6 = DAT_1808ac710;
    fVar5 = DAT_1808ac1f4;
    fVar39 = fVar37 - (fVar35 + DAT_1808aca5c + DAT_1808ac988 + DAT_1808ac710 + DAT_1808ac750);
    uVar15 = (int)(longlong)((float)(DAT_180960ecc >> 0x18) * DAT_1808ac294 + DAT_1808ac1f4) << 0x18
    ;
    fVar40 = fVar38 - fVar35;
    local_1a0 = (undefined1 *)
                CONCAT44((fVar39 - DAT_1808ac750) - local_1b0._4_4_,fVar40 - (float)local_1b0);
    if (uVar15 != 0) {
      lVar1 = *(longlong *)(lVar27 + 0x2c8);
      if (lVar21 == 0) {
        lVar21 = *(longlong *)(*(longlong *)(lVar1 + 0x38) + 0x18);
      }
      local_190 = *(undefined1 (*) [16])(lVar1 + 0x60);
      local_1d0 = 0;
      local_1d8 = local_1d8 & 0xffffffff00000000;
      local_1e0 = 0;
      local_1e8 = "Moving Toggle";
      local_1f0 = local_190;
      local_1f8 = (undefined8 *)CONCAT44(local_1f8._4_4_,uVar15 | DAT_180960ecc & 0xffffff);
      FUN_18040a900(lVar21,lVar1,uVar20,&local_1a0);
    }
    lVar21 = DAT_180ca0a50;
    fVar38 = fVar38 - (DAT_181107574 + fVar35);
    *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
    lVar21 = *(longlong *)(lVar21 + 0x14f8);
    *(float *)(lVar21 + 0x118) = fVar38;
    *(float *)(lVar21 + 0x11c) = fVar39;
    *(undefined1 *)(lVar21 + 0x159) = 1;
    local_150 = (char *)0x0;
    uStack_148 = 0;
    local_140 = 0;
    local_138 = 0;
    local_150 = (char *)FUN_18000fb70(0x40);
    uVar36 = s_panorama_images_econ_tools_keych_1807605d8._8_8_;
    local_140 = 0x3a;
    local_138 = 0x3f;
    *(undefined8 *)local_150 = s_panorama_images_econ_tools_keych_1807605d8._0_8_;
    *(undefined8 *)(local_150 + 8) = uVar36;
    uVar36 = s_panorama_images_econ_tools_keych_1807605d8._24_8_;
    *(undefined8 *)(local_150 + 0x10) = s_panorama_images_econ_tools_keych_1807605d8._16_8_;
    *(undefined8 *)(local_150 + 0x18) = uVar36;
    uVar36 = CONCAT62(s_panorama_images_econ_tools_keych_1807605d8._42_6_,
                      s_panorama_images_econ_tools_keych_1807605d8._40_2_);
    *(undefined8 *)(local_150 + 0x20) = s_panorama_images_econ_tools_keych_1807605d8._32_8_;
    *(undefined8 *)(local_150 + 0x28) = uVar36;
    uVar36 = s_panorama_images_econ_tools_keych_1807605d8._50_8_;
    *(ulonglong *)(local_150 + 0x2a) =
         CONCAT26(s_panorama_images_econ_tools_keych_1807605d8._48_2_,
                  s_panorama_images_econ_tools_keych_1807605d8._42_6_);
    *(undefined8 *)(local_150 + 0x32) = uVar36;
    local_150[0x3a] = '\0';
    fVar39 = DAT_1808ac34c;
    local_1b0 = (undefined1 *)0x0;
    local_1a0 = &DAT_3f8000003f800000;
    plVar12 = (longlong *)FUN_1800e77d0(local_190,&local_150);
    if (((*plVar12 != 0) && (0x27f < (int)plVar12[1])) &&
       (0x27f < *(int *)((longlong)plVar12 + 0xc))) {
      fVar33 = (float)*(int *)((longlong)plVar12 + 0xc);
      fVar33 = ((fVar33 - DAT_1808acc1c) * fVar5) / fVar33;
      fVar34 = (float)(int)plVar12[1];
      fVar34 = ((fVar34 - DAT_1808acc1c) * fVar5) / fVar34;
      local_1b0 = (undefined1 *)CONCAT44(fVar33,fVar34);
      local_1a0 = (undefined1 *)CONCAT44(fVar39 - fVar33,fVar39 - fVar34);
    }
    uVar15 = DAT_180960ec0;
    if (DAT_1809f5980 != '\0') {
      uVar15 = DAT_1809f54bc;
    }
    local_1e8._0_1_ = DAT_1809f5980;
    local_1f0._0_4_ = fVar7;
    local_1f8 = &local_1a0;
    local_1e0._0_4_ = uVar15;
    cVar9 = FUN_1802d5f20("##move_charm","Charm",&local_150);
    if (cVar9 != '\0') {
      DAT_1809f5980 = '\x01';
    }
    FUN_1803ec6c0();
    bVar31 = DAT_1809f5980 == '\0';
    uVar15 = DAT_180960ec0;
    if (bVar31) {
      uVar15 = DAT_1809f54bc;
    }
    piVar25 = (int *)(ulonglong)uVar15;
    local_1b0 = &DAT_3f8000003f800000;
    local_1a0 = (undefined1 *)0x0;
    local_130 = (char *)0x0;
    uStack_128 = 0;
    local_120 = 0;
    local_118 = 0;
    local_130 = (char *)FUN_18000fb70(0x40);
    uVar36 = s_panorama_images_econ_tournaments_180760628._8_8_;
    local_120 = 0x3b;
    local_118 = 0x3f;
    *(undefined8 *)local_130 = s_panorama_images_econ_tournaments_180760628._0_8_;
    *(undefined8 *)(local_130 + 8) = uVar36;
    uVar36 = s_panorama_images_econ_tournaments_180760628._24_8_;
    *(undefined8 *)(local_130 + 0x10) = s_panorama_images_econ_tournaments_180760628._16_8_;
    *(undefined8 *)(local_130 + 0x18) = uVar36;
    uVar36 = CONCAT53(s_panorama_images_econ_tournaments_180760628._43_5_,
                      s_panorama_images_econ_tournaments_180760628._40_3_);
    *(undefined8 *)(local_130 + 0x20) = s_panorama_images_econ_tournaments_180760628._32_8_;
    *(undefined8 *)(local_130 + 0x28) = uVar36;
    uVar36 = s_panorama_images_econ_tournaments_180760628._51_8_;
    *(ulonglong *)(local_130 + 0x2b) =
         CONCAT35(s_panorama_images_econ_tournaments_180760628._48_3_,
                  s_panorama_images_econ_tournaments_180760628._43_5_);
    *(undefined8 *)(local_130 + 0x33) = uVar36;
    local_130[0x3b] = '\0';
    local_1e0 = CONCAT44(local_1e0._4_4_,uVar15);
    local_1e8 = (char *)CONCAT71(local_1e8._1_7_,bVar31);
    local_1f0 = (char *)CONCAT44(local_1f0._4_4_,fVar7);
    local_1f8 = &local_1b0;
    cVar9 = FUN_1802d5f20("##move_stickers","Stickers",&local_130,&local_1a0);
    if (local_118 < 0x10) {
LAB_1802ee2c7:
      puVar22 = auStack_218;
      piVar25 = (int *)0x0;
      local_120 = 0;
      local_118 = 0xf;
      local_130 = (char *)((ulonglong)local_130 & 0xffffffffffffff00);
      if (cVar9 != '\0') {
        DAT_1809f5980 = '\0';
      }
      DAT_181107574 = *(float *)(lVar27 + 0x120) - fVar38;
      if (0xf < local_138) {
        uVar17 = local_138 + 1;
        pcVar26 = local_150;
        if (0xfff < uVar17) {
          pcVar26 = *(char **)(local_150 + -8);
          if ((char *)0x1f < local_150 + (-8 - (longlong)pcVar26)) goto LAB_1802ee37a;
          uVar17 = local_138 + 0x28;
        }
        thunk_FUN_1803d64e0(pcVar26,uVar17);
      }
      puVar23 = auStack_218;
      local_140 = 0;
      local_138 = 0xf;
      local_150 = (char *)((ulonglong)local_150 & 0xffffffffffffff00);
      fVar37 = (fVar37 - fVar35) - fVar8;
      fVar35 = fVar8 * 6.0 + fVar6;
      uVar17 = (ulonglong)(uint)fVar35;
      fVar40 = fVar40 - fVar35;
      if (DAT_1809f5980 == '\0') goto LAB_1802ee381;
      puVar23 = auStack_218;
      fVar35 = 0.0;
    }
    else {
      uVar17 = local_118 + 1;
      pcVar26 = local_130;
      if (uVar17 < 0x1000) {
LAB_1802ee2c2:
        thunk_FUN_1803d64e0(pcVar26,uVar17);
        goto LAB_1802ee2c7;
      }
      pcVar26 = *(char **)(local_130 + -8);
      if (local_130 + (-8 - (longlong)pcVar26) < (char *)0x20) {
        uVar17 = local_118 + 0x28;
        goto LAB_1802ee2c2;
      }
      pcVar2 = (code *)swi(0x29);
      (*pcVar2)(5);
      puVar22 = auStack_210;
LAB_1802ee37a:
      pcVar2 = (code *)swi(0x29);
      uVar17 = (*pcVar2)(5);
      puVar23 = puVar22 + 8;
LAB_1802ee381:
      fVar35 = fVar8;
    }
    uVar18 = 0xffffffff;
    pcVar26 = "inv_slot_highlight_x";
    bVar10 = 0x69;
    do {
      pcVar26 = pcVar26 + 1;
      if (((bVar10 == 0x23) && (*pcVar26 == 0x23)) && (pcVar26[1] == 0x23)) {
        uVar18 = 0xffffffff;
        pcVar26 = pcVar26 + 2;
      }
      else {
        uVar18 = (ulonglong)
                 ((uint)(uVar18 >> 8) ^
                 *(uint *)(&DAT_1806c25c0 + (uVar18 & 0xff ^ (ulonglong)bVar10) * 4));
      }
      bVar10 = *pcVar26;
    } while (bVar10 != 0);
    fVar35 = fVar35 - DAT_1808ac540;
    *(uint *)(puVar23 + 0x78) = ~(uint)uVar18;
    local_170 = (char *)CONCAT44(fVar35,fVar35);
    uStack_168 = (ulonglong)(uint)fVar35;
    local_160._0_4_ = 0xffffffff;
    *(undefined8 *)(puVar23 + -8) = 0x1802ee411;
    FUN_18034a380(uVar17,local_190,puVar23 + 0x78,&local_170);
    *(undefined8 *)(puVar23 + -8) = 0x1802ee431;
    uVar36 = FUN_1802b3660(local_190._0_8_ + 0x14);
    if (DAT_1809f5980 == '\0') {
      fVar39 = (float)local_198;
    }
    uVar17 = 0xffffffff;
    pcVar26 = "inv_slot_highlight_w";
    bVar10 = 0x69;
    uVar15 = *(uint *)(puVar23 + 0x70);
    do {
      pcVar26 = pcVar26 + 1;
      if (((bVar10 == 0x23) && (*pcVar26 == 0x23)) && (pcVar26[1] == 0x23)) {
        uVar17 = 0xffffffff;
        pcVar26 = pcVar26 + 2;
      }
      else {
        uVar17 = (ulonglong)
                 ((uint)(uVar17 >> 8) ^
                 *(uint *)(&DAT_1806c25c0 + (uVar17 & 0xff ^ (ulonglong)bVar10) * 4));
      }
      bVar10 = *pcVar26;
    } while (bVar10 != 0);
    fVar35 = fVar39 * fVar8 + fVar6;
    *(uint *)(puVar23 + 0x78) = ~(uint)uVar17;
    local_170 = (char *)CONCAT44(fVar35,fVar35);
    uStack_168 = (ulonglong)(uint)fVar35;
    local_160 = (int *)CONCAT44(local_160._4_4_,0xffffffff);
    *(undefined8 *)(puVar23 + -8) = 0x1802ee4da;
    FUN_18034a380(uVar36,local_190,puVar23 + 0x78,&local_170);
    *(undefined8 *)(puVar23 + -8) = 0x1802ee4f2;
    fVar35 = (float)FUN_1802b3660(local_190._0_8_ + 0x14);
    fVar38 = fVar40 + (float)uVar36;
    *(float *)(puVar23 + 0x68) = fVar38 + fVar35;
    *(float *)(puVar23 + 0x6c) = fVar37 + fVar6 + DAT_1808ac9fc;
    *(float *)(puVar23 + 0x78) = fVar38;
    *(float *)(puVar23 + 0x7c) = fVar37 - fVar6;
    local_190 = _DAT_1808add80;
    *(undefined4 *)(puVar23 + 0x28) = 0;
    *(undefined1 **)(puVar23 + 0x20) = local_190;
    uVar36 = *(undefined8 *)(lVar27 + 0x2c8);
    *(undefined8 *)(puVar23 + -8) = 0x1802ee595;
    FUN_18036b940(uVar36,puVar23 + 0x78,puVar23 + 0x68);
  }
  lVar27 = DAT_180ca0a50;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  lVar27 = *(longlong *)(lVar27 + 0x14f8);
  *(float *)(lVar27 + 0x118) = fVar40;
  *(float *)(lVar27 + 0x11c) = fVar37;
  *(undefined1 *)(lVar27 + 0x159) = 1;
  puVar23[0x62] = 0;
  uVar17 = 0;
  puVar23[99] = 0;
  if ((bVar32) || (lVar29 == 0)) {
    puVar30 = (undefined *)(ulonglong)(byte)puVar23[0x60];
  }
  else {
    if ((DAT_180ccfeda != '\0') && (piVar13 = DAT_180cfc9a0, 0 < *(int *)(lVar29 + 0x188))) {
      for (; piVar13 != DAT_180cfc9a8; piVar13 = piVar13 + 0x26) {
        if (*piVar13 == *(int *)(lVar29 + 0x188)) goto LAB_1802ee662;
      }
    }
    piVar13 = piVar25;
LAB_1802ee662:
    *(int **)(puVar23 + 0x68) = piVar13;
    puVar23[0x61] = 0;
    *(undefined8 *)(puVar23 + -8) = 0x1802ee675;
    FUN_1803e8a70(0x539);
    puVar30 = (undefined *)(ulonglong)(byte)puVar23[0x60];
    if (puVar23[0x60] == 0) {
      uVar36 = *(undefined8 *)(DAT_180ca0a50 + 0x14f8);
      *(undefined8 *)(puVar23 + -8) = 0x1802ee69a;
      iVar11 = FUN_1803e8900(uVar36,"##inv_charm_picker");
      if (*(int *)(DAT_180ca0a50 + 0x2030) < *(int *)(DAT_180ca0a50 + 0x2020)) {
        lVar27 = (longlong)*(int *)(DAT_180ca0a50 + 0x2030) * 0x58;
        if ((*(int *)(lVar27 + *(longlong *)(DAT_180ca0a50 + 0x2028)) == iVar11) &&
           (*(char *)(lVar27 + 0x34 + *(longlong *)(DAT_180ca0a50 + 0x2028)) == '\0')) {
          uVar17 = 1;
        }
      }
    }
    if (*(longlong *)(puVar23 + 0x68) == 0) {
      local_170 = (char *)0x0;
      uStack_168 = 0;
      *(undefined8 *)(puVar23 + -8) = 0x1802ee702;
      local_160 = piVar25;
      local_158 = piVar25;
      local_170 = (char *)FUN_18000fb70(0x40);
      uVar36 = s_panorama_images_econ_tools_keych_1807605d8._8_8_;
      local_160 = (int *)0x3a;
      local_158 = (int *)0x3f;
      *(undefined8 *)local_170 = s_panorama_images_econ_tools_keych_1807605d8._0_8_;
      *(undefined8 *)(local_170 + 8) = uVar36;
      uVar36 = s_panorama_images_econ_tools_keych_1807605d8._24_8_;
      *(undefined8 *)(local_170 + 0x10) = s_panorama_images_econ_tools_keych_1807605d8._16_8_;
      *(undefined8 *)(local_170 + 0x18) = uVar36;
      uVar36 = CONCAT62(s_panorama_images_econ_tools_keych_1807605d8._42_6_,
                        s_panorama_images_econ_tools_keych_1807605d8._40_2_);
      *(undefined8 *)(local_170 + 0x20) = s_panorama_images_econ_tools_keych_1807605d8._32_8_;
      *(undefined8 *)(local_170 + 0x28) = uVar36;
      auVar3[6] = s_panorama_images_econ_tools_keych_1807605d8[0x30];
      auVar3[7] = s_panorama_images_econ_tools_keych_1807605d8[0x31];
      auVar3[0] = s_panorama_images_econ_tools_keych_1807605d8[0x2a];
      auVar3[1] = s_panorama_images_econ_tools_keych_1807605d8[0x2b];
      auVar3[2] = s_panorama_images_econ_tools_keych_1807605d8[0x2c];
      auVar3[3] = s_panorama_images_econ_tools_keych_1807605d8[0x2d];
      auVar3[4] = s_panorama_images_econ_tools_keych_1807605d8[0x2e];
      auVar3[5] = s_panorama_images_econ_tools_keych_1807605d8[0x2f];
      auVar3[8] = s_panorama_images_econ_tools_keych_1807605d8[0x32];
      auVar3[9] = s_panorama_images_econ_tools_keych_1807605d8[0x33];
      auVar3[10] = s_panorama_images_econ_tools_keych_1807605d8[0x34];
      auVar3[0xb] = s_panorama_images_econ_tools_keych_1807605d8[0x35];
      auVar3[0xc] = s_panorama_images_econ_tools_keych_1807605d8[0x36];
      auVar3[0xd] = s_panorama_images_econ_tools_keych_1807605d8[0x37];
      auVar3[0xe] = s_panorama_images_econ_tools_keych_1807605d8[0x38];
      auVar3[0xf] = s_panorama_images_econ_tools_keych_1807605d8[0x39];
      *(undefined1 (*) [16])(local_170 + 0x2a) = auVar3;
      local_170[0x3a] = '\0';
      puVar14 = &local_170;
      uVar15 = 2;
    }
    else {
      *(undefined8 *)(puVar23 + -8) = 0x1802ee6e1;
      puVar14 = (undefined8 *)FUN_180024b50(local_110,*(longlong *)(puVar23 + 0x68) + 0x48);
      uVar15 = 1;
    }
    *(uint *)(puVar23 + 0x70) = uVar15;
    puVar28 = puVar23 + 0x61;
    *(undefined8 *)(puVar23 + -8) = 0x1802ee76a;
    cVar9 = FUN_1802ea9e0("##charm",puVar14);
    puVar23[99] = cVar9;
    if ((uVar15 & 2) != 0) {
      uVar15 = uVar15 & 0xfffffffd;
      *(uint *)(puVar23 + 0x70) = uVar15;
      if (0xf < local_158) {
        pcVar19 = (char *)((longlong)local_158 + 1);
        pcVar26 = local_170;
        if ((byte *)0xfff < pcVar19) {
          pcVar26 = *(char **)(local_170 + -8);
          if ((char *)0x1f < local_170 + (-8 - (longlong)pcVar26)) {
            pcVar2 = (code *)swi(0x29);
            (*pcVar2)(5);
            puVar23 = puVar23 + 8;
            goto LAB_1802ee8b2;
          }
          pcVar19 = (char *)((longlong)local_158 + 0x28);
        }
        *(undefined8 *)(puVar23 + -8) = 0x1802ee7b9;
        thunk_FUN_1803d64e0(pcVar26,pcVar19);
      }
      local_158 = (int *)0xf;
      local_170 = (char *)((ulonglong)local_170 & 0xffffffffffffff00);
      local_160 = piVar25;
    }
    if ((uVar15 & 1) != 0) {
      uVar15 = uVar15 & 0xfffffffe;
      *(uint *)(puVar23 + 0x70) = uVar15;
      *(undefined8 *)(puVar23 + -8) = 0x1802ee7df;
      FUN_18000f890(local_110);
    }
    if (cVar9 != '\0') {
      DAT_1809f5980 = '\x01';
      DAT_1809f598c = 1;
      DAT_1809f59d6 = 0;
    }
    if (puVar23[0x61] == '\0') {
LAB_1802ee81a:
      if (*(longlong *)(puVar23 + 0x68) != 0) {
        *(undefined4 *)(puVar23 + 0x78) = *(undefined4 *)(lVar29 + 0x18c);
        local_190._8_8_ = puVar23 + 0x78;
        local_190._0_8_ = puVar23 + 0x68;
        local_180 = *(undefined8 *)(DAT_180ca0a50 + 0x1efc);
        local_178 = *(undefined8 *)(DAT_180ca0a50 + 0x1ef4);
        *(undefined8 *)(puVar23 + -8) = 0x1802ee868;
        bVar10 = FUN_1803dd930(0);
        in_R11 = (ulonglong)bVar10;
        puVar28 = (undefined1 *)(ulonglong)~*(uint *)(DAT_180ca0a50 + 0x1ee8);
        in_R10 = (ulonglong)~*(uint *)(DAT_180ca0a50 + 0x1ee8);
        pcVar19 = "##charm_tip";
        uVar17 = 0x23;
        puVar30 = &DAT_1806c25c0;
        do {
          pcVar19 = pcVar19 + 1;
          if ((((char)uVar17 == '#') && (*pcVar19 == 0x23)) && (pcVar19[1] == 0x23)) {
            in_R10 = (ulonglong)puVar28 & 0xffffffff;
            pcVar19 = pcVar19 + 2;
          }
          else {
LAB_1802ee8b2:
            in_R10 = (ulonglong)
                     ((uint)(in_R10 >> 8) & 0xffffff ^
                     *(uint *)(puVar30 + (in_R10 & 0xff ^ uVar17 & 0xff) * 4));
          }
          uVar17 = (ulonglong)(byte)*pcVar19;
        } while (*pcVar19 != 0);
        *(undefined1 **)(puVar23 + 0x20) = local_190;
        *(undefined8 *)(puVar23 + -8) = 0x1802ee8f1;
        FUN_180345d60(~(uint)in_R10,in_R11 & 0xff,&local_178);
        puVar30 = (undefined *)(ulonglong)(byte)puVar23[0x60];
      }
    }
    else if ((*(longlong *)(puVar23 + 0x68) != 0) || (DAT_181107538 != '\0')) {
      puVar23[0x62] = 1;
      goto LAB_1802ee81a;
    }
    iVar11 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
    if (iVar11 < 2) {
      *(undefined8 *)(puVar23 + -8) = 0x1802ee91c;
      FUN_1803ebc00("Calling PopID() too many times!");
      *(undefined8 *)(puVar23 + -8) = 0x1802ee929;
      FUN_1803ec6c0();
    }
    else {
      *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar11 + -1;
      *(undefined8 *)(puVar23 + -8) = 0x1802ee940;
      FUN_1803ec6c0();
    }
  }
  bVar31 = false;
  bVar32 = false;
  uVar17 = 0;
  do {
    uVar24 = (uint)uVar17;
    if (puVar23[100] == '\0') {
      if (uVar24 < 6) {
        iVar11 = *(int *)(uVar17 * 0x1c + 0xe0 + lVar29);
        goto LAB_1802ee9a7;
      }
    }
    else {
      puVar16 = &DAT_1809216d0;
      if (DAT_1809f5900 == 0) {
        puVar16 = &DAT_1809216bc;
      }
      iVar11 = puVar16[uVar17];
LAB_1802ee9a7:
      if (iVar11 != 0) {
        if (puVar23[100] == '\0') {
          if ((DAT_180ccfeda != '\0') && (piVar25 = DAT_180cfc988, 0 < iVar11)) {
            for (; piVar25 != DAT_180cfc990; piVar25 = piVar25 + 0x26) {
              if (*piVar25 == iVar11) goto LAB_1802eea12;
            }
          }
        }
        else if ((DAT_180ccfeda != '\0') && (piVar25 = DAT_180cfc8b0, 0 < iVar11)) {
          for (; piVar25 != DAT_180cfc8b8; piVar25 = piVar25 + 0x26) {
            if (*piVar25 == iVar11) goto LAB_1802eea12;
          }
        }
      }
    }
    piVar25 = (int *)0x0;
LAB_1802eea12:
    puVar23[0x61] = 0;
    *(undefined8 *)(puVar23 + -8) = 0x1802eea1e;
    FUN_1803e8a70(uVar17);
    if ((char)puVar30 == '\0') {
      uVar36 = *(undefined8 *)(DAT_180ca0a50 + 0x14f8);
      *(undefined8 *)(puVar23 + -8) = 0x1802eea3d;
      iVar11 = FUN_1803e8900(uVar36,"##inv_sticker_picker");
      if (*(int *)(DAT_180ca0a50 + 0x2020) <= *(int *)(DAT_180ca0a50 + 0x2030)) goto LAB_1802eea78;
      lVar27 = (longlong)*(int *)(DAT_180ca0a50 + 0x2030) * 0x58;
      if (((*(int *)(*(longlong *)(DAT_180ca0a50 + 0x2028) + lVar27) != iVar11) ||
          (*(char *)(*(longlong *)(DAT_180ca0a50 + 0x2028) + 0x34 + lVar27) != '\0')) ||
         (DAT_1809f5988 != uVar24)) goto LAB_1802eea78;
      uVar36 = 1;
    }
    else {
LAB_1802eea78:
      uVar36 = 0;
    }
    if (piVar25 == (int *)0x0) {
      local_170 = (char *)0x0;
      uStack_168 = 0;
      local_160 = (int *)0x0;
      local_158 = (int *)0x0;
      *(undefined8 *)(puVar23 + -8) = 0x1802eeaaf;
      local_170 = (char *)FUN_18000fb70(0x40);
      uVar4 = s_panorama_images_econ_tournaments_1807606c0._8_8_;
      local_160 = (int *)&DAT_00000035;
      local_158 = (int *)0x3f;
      *(undefined8 *)local_170 = s_panorama_images_econ_tournaments_1807606c0._0_8_;
      *(undefined8 *)(local_170 + 8) = uVar4;
      uVar4 = s_panorama_images_econ_tournaments_1807606c0._24_8_;
      *(undefined8 *)(local_170 + 0x10) = s_panorama_images_econ_tournaments_1807606c0._16_8_;
      *(undefined8 *)(local_170 + 0x18) = uVar4;
      uVar4 = CONCAT35(s_panorama_images_econ_tournaments_1807606c0._45_3_,
                       s_panorama_images_econ_tournaments_1807606c0._40_5_);
      *(undefined8 *)(local_170 + 0x20) = s_panorama_images_econ_tournaments_1807606c0._32_8_;
      *(undefined8 *)(local_170 + 0x28) = uVar4;
      *(ulonglong *)(local_170 + 0x2d) =
           CONCAT53(s_panorama_images_econ_tournaments_1807606c0._48_5_,
                    s_panorama_images_econ_tournaments_1807606c0._45_3_);
      local_170[0x35] = '\0';
      puVar14 = &local_170;
      uVar15 = uVar15 | 8;
    }
    else {
      *(undefined8 *)(puVar23 + -8) = 0x1802eea8d;
      puVar14 = (undefined8 *)FUN_180024b50(local_110,piVar25 + 0x12);
      uVar15 = uVar15 | 4;
    }
    *(uint *)(puVar23 + 0x70) = uVar15;
    *(undefined8 *)(puVar23 + -8) = 0x1802eeb17;
    cVar9 = FUN_1802ea9e0("##sticker",puVar14,uVar36);
    if ((uVar15 & 8) != 0) {
      uVar15 = uVar15 & 0xfffffff7;
      *(uint *)(puVar23 + 0x70) = uVar15;
      *(undefined8 *)(puVar23 + -8) = 0x1802eeb31;
      FUN_18000f890(&local_170);
    }
    if ((uVar15 & 4) != 0) {
      uVar15 = uVar15 & 0xfffffffb;
      *(uint *)(puVar23 + 0x70) = uVar15;
      *(undefined8 *)(puVar23 + -8) = 0x1802eeb48;
      FUN_18000f890(local_110);
    }
    if (cVar9 != '\0') {
      DAT_1809f5980 = '\0';
      DAT_1809f5990 = 0xffffffff;
      DAT_1809f5996 = 0;
      bVar32 = true;
      DAT_1809f5984 = uVar24;
      DAT_1809f5988 = uVar24;
    }
    if ((puVar23[0x61] != '\0') && ((piVar25 != (int *)0x0 || (DAT_1809f5be0 != '\0')))) {
      bVar31 = true;
      DAT_1809f5a18 = uVar24;
    }
    *(undefined8 *)(puVar23 + -8) = 0x1802eeb9c;
    FUN_1802eac50(piVar25);
    iVar11 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
    if (iVar11 < 2) {
      *(undefined8 *)(puVar23 + -8) = 0x1802eebc1;
      FUN_1803ebc00("Calling PopID() too many times!");
    }
    else {
      *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar11 + -1;
    }
    *(undefined8 *)(puVar23 + -8) = 0x1802eebd8;
    FUN_1803ec6c0();
    uVar17 = (ulonglong)(uVar24 + 1);
    bVar10 = puVar23[0x60];
    puVar30 = (undefined *)(ulonglong)bVar10;
  } while ((int)(uVar24 + 1) < local_198);
  if (puVar23[0x62] != '\0') {
    *(undefined8 *)(puVar23 + -8) = 0x1802eec03;
    FUN_1802b4d80("##inv_charm_options");
  }
  if (puVar23[99] != '\0') {
    *(undefined8 *)(puVar23 + -8) = 0x1802eec16;
    FUN_1802b4d80("##inv_charm_picker");
  }
  if (bVar32) {
    *(undefined8 *)(puVar23 + -8) = 0x1802eec27;
    FUN_1802b4d80("##inv_sticker_picker");
  }
  if (bVar31) {
    *(undefined8 *)(puVar23 + -8) = 0x1802eec38;
    FUN_1802b4d80("##inv_slot_options");
  }
  if (bVar10 == 0) {
    if (lVar29 == 0) {
LAB_1802eecbe:
      uVar20 = *(undefined4 *)(puVar23 + 0x74);
    }
    else {
      uVar36 = *(undefined8 *)(DAT_180ca0a50 + 0x14f8);
      *(undefined8 *)(puVar23 + -8) = 0x1802eec60;
      iVar11 = FUN_1803e8900(uVar36,"##inv_charm_options");
      if (*(int *)(DAT_180ca0a50 + 0x2020) <= *(int *)(DAT_180ca0a50 + 0x2030)) goto LAB_1802eecbe;
      lVar27 = (longlong)*(int *)(DAT_180ca0a50 + 0x2030) * 0x58;
      if (*(int *)(lVar27 + *(longlong *)(DAT_180ca0a50 + 0x2028)) != iVar11) goto LAB_1802eecbe;
      uVar20 = *(undefined4 *)(puVar23 + 0x74);
      if (*(char *)(lVar27 + 0x34 + *(longlong *)(DAT_180ca0a50 + 0x2028)) == '\0') {
        *(undefined8 *)(puVar23 + -8) = 0x1802eec9f;
        lVar27 = FUN_1800f1470(uVar20,DAT_1809f5900);
        if (lVar27 != 0) {
          *(undefined8 *)(puVar23 + -8) = 0x1802eecaf;
          FUN_1802ecff0(lVar29,lVar27);
          *(undefined8 *)(puVar23 + -8) = 0x1802eecbc;
          FUN_1802ed650(lVar29,puVar23[100]);
          goto LAB_1802eecd5;
        }
      }
    }
    *(undefined8 *)(puVar23 + -8) = 0x1802eeccf;
    FUN_1802ed650(lVar29,puVar23[100]);
  }
  else {
    uVar20 = *(undefined4 *)(puVar23 + 0x74);
  }
LAB_1802eecd5:
  *(undefined8 *)(puVar23 + -8) = 0x1802eecdf;
  FUN_1803d8a40(1);
  if (lVar29 != 0) {
    *(undefined8 *)(puVar23 + -8) = 0x1802eecf1;
    FUN_1802dd4a0(DAT_1809f590c,uVar20);
  }
LAB_1802eecf1:
  *(undefined8 *)(puVar23 + -8) = 0x1802eecfd;
  return;
}



/* ===== 1802eed50 FUN_1802eed50 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802eed50(undefined8 *param_1)

{
  longlong lVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  undefined1 auStack_88 [32];
  float *local_68;
  undefined4 local_60;
  float local_58;
  float local_54;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 local_40 [16];
  ulonglong local_30 [5];
  
  local_30[4] = DAT_180919500 ^ (ulonglong)auStack_88;
  local_30[1] = 0;
  local_30[2] = 0;
  local_30[3] = 0xf;
  local_30[0] = 0;
  FUN_1802d6630(local_30,*(longlong *)*param_1 + 0x28,*(undefined4 *)(*(longlong *)*param_1 + 0x68),
                0);
  if (0xf < local_30[3]) {
    uVar8 = local_30[3] + 1;
    uVar7 = local_30[0];
    if (0xfff < uVar8) {
      uVar7 = *(ulonglong *)(local_30[0] - 8);
      if (0x1f < (local_30[0] - uVar7) - 8) {
        pcVar2 = (code *)swi(0x29);
        (*pcVar2)(5);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar8 = local_30[3] + 0x28;
    }
    thunk_FUN_1803d64e0(uVar7,uVar8);
  }
  local_30[2] = 0;
  local_30[3] = 0xf;
  local_30[0] = local_30[0] & 0xffffffffffffff00;
  if (*(longlong *)(*(longlong *)*param_1 + 0x58) != 0) {
    plVar5 = (longlong *)FUN_1800e77d0(local_40,*(longlong *)*param_1 + 0x48);
    lVar4 = DAT_180ca0a50;
    lVar1 = *plVar5;
    if (lVar1 != 0) {
      iVar9 = *(int *)((longlong)plVar5 + 0xc);
      uVar6 = *(undefined8 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x118);
      local_48 = 0x4359999a;
      local_44 = 0x43233333;
      local_58 = (float)uVar6 + _DAT_1808acb6c;
      local_50._4_4_ = (float)((ulonglong)uVar6 >> 0x20);
      local_54 = local_50._4_4_ + _DAT_1808acb44;
      if (iVar9 < 1) {
        iVar9 = 1;
      }
      lVar3 = plVar5[1];
      *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
      local_60 = 0xffffffff;
      local_68 = &local_58;
      local_50 = uVar6;
      FUN_1802d4a10(*(undefined8 *)(*(longlong *)(lVar4 + 0x14f8) + 0x2c8),lVar1,
                    (float)(int)lVar3 / (float)iVar9,&local_50);
      FUN_1804174f0(&local_48);
    }
  }
  if (*(uint *)param_1[1] < 100000) {
    FUN_1802e0770();
    uVar6 = FUN_18003a390(local_30,*(undefined4 *)param_1[1]);
    FUN_1802e0860("SFUI_ItemInfo_KeychainPattern","Charm Template",uVar6);
    FUN_18000f890(local_30);
  }
  return;
}



/* ===== 1802eef40 FUN_1802eef40 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802eef40(undefined8 param_1,undefined8 param_2,float *param_3,float *param_4,
                  float *param_5,undefined4 param_6,longlong *param_7,char param_8,char param_9,
                  char param_10)

{
  uint *puVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  double dVar8;
  longlong *plVar9;
  char cVar10;
  int iVar11;
  BOOL BVar12;
  longlong *plVar13;
  undefined4 *puVar14;
  LARGE_INTEGER *pLVar15;
  ULONGLONG UVar16;
  LARGE_INTEGER *pLVar17;
  size_t sVar18;
  longlong lVar19;
  longlong lVar20;
  ulonglong uVar21;
  longlong *plVar22;
  undefined1 *puVar23;
  uint uVar24;
  char *pcVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined1 auStack_398 [8];
  undefined1 auStack_390 [24];
  double local_378;
  double local_370;
  uint local_368;
  double local_360;
  double local_358;
  double local_350;
  undefined4 local_348;
  undefined4 local_340;
  double local_338;
  double local_330;
  char *local_328;
  undefined4 local_320;
  undefined8 local_318;
  undefined4 local_310;
  undefined4 local_308;
  undefined8 local_2f8;
  LARGE_INTEGER local_2f0 [2];
  LARGE_INTEGER local_2e0;
  longlong local_2d8 [31];
  undefined8 auStack_1e0 [3];
  undefined4 auStack_1c4 [39];
  undefined4 local_128;
  undefined8 local_124;
  char local_118 [96];
  ulonglong local_b8;
  
  lVar19 = DAT_180ca0a50;
  local_b8 = DAT_180919500 ^ (ulonglong)auStack_398;
  if (param_10 != '\0') {
    return;
  }
  if (param_9 == '\0') {
    fVar26 = 0.0;
  }
  else {
    fVar26 = DAT_1808acb08;
  }
  fVar28 = param_4[1];
  if (fVar26 + param_3[1] <= param_4[1]) {
    fVar28 = fVar26 + param_3[1];
  }
  fVar26 = *param_3;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  lVar20 = *(longlong *)(lVar19 + 0x14f8);
  *(float *)(lVar20 + 0x118) = fVar26;
  *(float *)(lVar20 + 0x11c) = fVar28;
  *(undefined1 *)(lVar20 + 0x159) = 1;
  puVar1 = (uint *)(lVar19 + 0x1eb4);
  *puVar1 = *puVar1 | 0x4000;
  fVar29 = DAT_1808ac34c;
  local_2f8._4_4_ = DAT_1808ac34c;
  if (DAT_1808ac34c <= param_4[1] - fVar28) {
    local_2f8._4_4_ = param_4[1] - fVar28;
  }
  fVar26 = *param_4 - fVar26;
  local_2f8._0_4_ = DAT_1808ac34c;
  if (DAT_1808ac34c <= fVar26) {
    local_2f8._0_4_ = fVar26;
  }
  FUN_180415e30(param_1,&local_2f8,0);
  lVar19 = DAT_180ca0a50;
  if ((((param_7 != (longlong *)0x0) && (DAT_1809f590c == 0)) && (DAT_180961d60 != 0)) &&
     ((((DAT_180961d80 != 0 && (DAT_180961d88 != 0)) &&
       ((DAT_180961d90 != 0 && ((DAT_180961c50 != 0 && (DAT_180961c58 != 0)))))) &&
      (DAT_180961c60 != 0)))) {
    lVar20 = 3;
    if (DAT_1809f5980 == '\0') {
      if (((((5 < DAT_1809f5984) ||
            (uVar24 = DAT_1809f5984,
            *(int *)((longlong)(int)DAT_1809f5984 * 0x1c + 0xe0 + (longlong)param_7) == 0)) &&
           (uVar24 = 0, (int)param_7[0x1c] == 0)) &&
          ((uVar24 = 1, *(int *)((longlong)param_7 + 0xfc) == 0 &&
           (uVar24 = 2, (int)param_7[0x23] == 0)))) &&
         ((uVar24 = 3, *(int *)((longlong)param_7 + 0x134) == 0 &&
          ((uVar24 = 4, (int)param_7[0x2a] == 0 &&
           (uVar24 = 5, *(int *)((longlong)param_7 + 0x16c) == 0)))))) {
        uVar24 = 0xfffffffe;
      }
    }
    else {
      uVar24 = ((int)param_7[0x31] != 0) - 2;
    }
    if (uVar24 != 0xfffffffe) {
      plVar9 = local_2d8 + 4;
      do {
        plVar22 = param_7;
        plVar13 = plVar9;
        lVar7 = plVar22[1];
        *plVar13 = *plVar22;
        plVar13[1] = lVar7;
        lVar7 = plVar22[3];
        plVar13[2] = plVar22[2];
        plVar13[3] = lVar7;
        lVar7 = plVar22[5];
        plVar13[4] = plVar22[4];
        plVar13[5] = lVar7;
        lVar7 = plVar22[7];
        plVar13[6] = plVar22[6];
        plVar13[7] = lVar7;
        lVar7 = plVar22[9];
        plVar13[8] = plVar22[8];
        plVar13[9] = lVar7;
        lVar7 = plVar22[0xb];
        plVar13[10] = plVar22[10];
        plVar13[0xb] = lVar7;
        lVar7 = plVar22[0xd];
        plVar13[0xc] = plVar22[0xc];
        plVar13[0xd] = lVar7;
        lVar7 = plVar22[0xf];
        plVar13[0xe] = plVar22[0xe];
        plVar13[0xf] = lVar7;
        lVar20 = lVar20 + -1;
        plVar9 = plVar13 + 0x10;
        param_7 = plVar22 + 0x10;
      } while (lVar20 != 0);
      uVar5 = *(undefined4 *)((longlong)plVar22 + 0x84);
      lVar20 = plVar22[0x11];
      uVar6 = *(undefined4 *)((longlong)plVar22 + 0x8c);
      *(int *)(plVar13 + 0x10) = (int)plVar22[0x10];
      *(undefined4 *)((longlong)plVar13 + 0x84) = uVar5;
      *(int *)(plVar13 + 0x11) = (int)lVar20;
      *(undefined4 *)((longlong)plVar13 + 0x8c) = uVar6;
      uVar5 = *(undefined4 *)((longlong)plVar22 + 0x94);
      lVar20 = plVar22[0x13];
      uVar6 = *(undefined4 *)((longlong)plVar22 + 0x9c);
      *(int *)(plVar13 + 0x12) = (int)plVar22[0x12];
      *(undefined4 *)((longlong)plVar13 + 0x94) = uVar5;
      *(int *)(plVar13 + 0x13) = (int)lVar20;
      *(undefined4 *)((longlong)plVar13 + 0x9c) = uVar6;
      if (uVar24 == 0xffffffff) {
        local_128 = 0;
        local_124 = 0;
      }
      else if (uVar24 < 6) {
        *(undefined8 *)((longlong)auStack_1e0 + ((longlong)(int)uVar24 * 7 + 5) * 4) = 0;
        auStack_1c4[(longlong)(int)uVar24 * 7] = 0;
      }
      FUN_1800dff20(local_2d8,param_6,local_2d8 + 4);
      local_378 = (double)CONCAT71(local_378._1_7_,param_9);
      FUN_18021f690(param_6,DAT_1809f5900,uVar24,local_2d8);
      FUN_18000f890(local_2d8);
      if (((*(int *)(DAT_180ca0a50 + 0x1578) != 0) &&
          (*(int *)(DAT_180ca0a50 + 0x1578) == *(int *)(DAT_180ca0a50 + 0x1ee8))) &&
         (*(int *)(DAT_180ca0a50 + 0x15a8) != *(int *)(DAT_180ca0a50 + 0x1ee8))) {
        local_2f8 = (LONGLONG)&DAT_1809f2790;
        iVar11 = FUN_1804e4d70(&DAT_1809f2790);
        puVar23 = auStack_398;
        if (iVar11 != 0) goto LAB_1802efc1b;
        if (DAT_1809f27dc == 0x7fffffff) goto LAB_1802efc06;
        if (DAT_1809f27e0 == '\0') {
          FUN_18021c7f0("press ignored | no session | requested %d starting %d active %d",
                        DAT_180ccf605 != '\0',DAT_180cc509e != '\0',DAT_180ccf604 != '\0');
        }
        else if (DAT_1809f2860 == '\0') {
          DAT_1809f2860 = '\x01';
          DAT_1809f2890 = DAT_1809f2890 + 1;
          DAT_1809f290c = 0;
          _DAT_1809f2864 = 0;
          _DAT_1809f286c = DAT_1809f2820;
          _DAT_1809f2870 = DAT_1809f2824;
          _DAT_1809f2874 = DAT_1809f2828;
          _DAT_1809f2878 = 0;
          _DAT_1809f2880 = 0;
          puVar14 = (undefined4 *)FUN_18021d350(local_2d8);
          local_330 = (double)(float)puVar14[3];
          local_338 = (double)(float)puVar14[2];
          local_350 = (double)DAT_1809f2828;
          local_358 = (double)DAT_1809f2824;
          local_360 = (double)DAT_1809f2820;
          local_370 = (double)DAT_1809f281c;
          local_378 = (double)DAT_1809f2818;
          pcVar25 = "sticker";
          if (DAT_1809f27f8 != '\0') {
            pcVar25 = "charm";
          }
          local_308 = puVar14[7];
          local_310 = puVar14[6];
          local_318 = *(undefined8 *)(puVar14 + 4);
          local_320 = DAT_1809f289c;
          local_328 = "r_csgo_mouse_trace_coord";
          local_340 = puVar14[1];
          local_348 = *puVar14;
          local_368 = (uint)(DAT_1809f282c != '\0');
          FUN_18021c7f0("press | %d | %s | at %.4f %.4f rot %.2f | point %d %.2f %.2f %.2f | trace %d idx %d uv %.3f %.3f | %s %d | trace world %p frame %d / now %d"
                        ,DAT_1809f2890,pcVar25,(double)DAT_1809f2814);
        }
        FUN_1804e4e90(&DAT_1809f2790);
      }
      if ((((*(int *)(DAT_180ca0a50 + 0x1578) != 0) &&
           (*(int *)(DAT_180ca0a50 + 0x1578) == *(int *)(DAT_180ca0a50 + 0x1ee8))) &&
          (((fVar26 = *(float *)(lVar19 + 0xfc), fVar26 != 0.0 ||
            (*(float *)(lVar19 + 0x100) != 0.0)) &&
           (((((uint)fVar26 & 0x7f800000) != 0x7f800000 &&
             (fVar28 = *(float *)(lVar19 + 0x100), ((uint)fVar28 & 0x7f800000) != 0x7f800000)) &&
            (fVar29 = *param_5, 0.0 < fVar29)))))) && (fVar27 = param_5[1], 0.0 < fVar27)) {
        local_2f8 = (LONGLONG)&DAT_1809f2790;
        iVar11 = FUN_1804e4d70(&DAT_1809f2790);
        puVar23 = auStack_398;
        if (iVar11 != 0) goto LAB_1802efc1b;
        if (DAT_1809f27dc == 0x7fffffff) goto LAB_1802efc06;
        if (DAT_1809f27e0 != '\0') {
          if (DAT_1809f2860 != '\0') {
            fVar30 = fVar26 / fVar29;
            fVar31 = fVar28 / fVar27;
            DAT_1809f2858 = DAT_1809f2858 + 1;
            _DAT_1809f2878 = CONCAT44(DAT_1809f287c + fVar28,DAT_1809f2878 + fVar26);
            _DAT_1809f2880 = CONCAT44(DAT_1809f2884 + fVar31,DAT_1809f2880 + fVar30);
            _DAT_1809f2888 = fVar29;
            _DAT_1809f288c = fVar27;
            if (DAT_1809f27f8 == '\0') {
              _DAT_1809f2864 = CONCAT44(DAT_1809f2868 + fVar31,DAT_1809f2864 + fVar30);
            }
            else {
              if (DAT_1809f282c == '\0') {
                if (DAT_1809f283c == '\0') {
                  if (DAT_1809f2858 < 4) {
                    FUN_18021c7f0("drag ignored | charm has no placed point yet");
                  }
                  goto LAB_1802ef731;
                }
                DAT_1809f2824 = DAT_1809f2834;
                _DAT_1809f286c = DAT_1809f2830;
                _DAT_1809f2870 = DAT_1809f2834;
                _DAT_1809f2874 = DAT_1809f2838;
                DAT_1809f282c = '\x01';
                DAT_1809f2820 = DAT_1809f2830;
                DAT_1809f2828 = DAT_1809f2838;
              }
              else {
              }
              local_2e0.s.LowPart = 0xc1c80000;
              fVar26 = DAT_1809f2820 - fVar30 * DAT_1808ac950;
              local_2f0[0]._0_4_ = fVar26;
              pLVar15 = &local_2e0;
              if (DAT_1808ace40 <= fVar26) {
                pLVar15 = local_2f0;
              }
              if (DAT_1808ac988 < fVar26) {
                pLVar15 = (LARGE_INTEGER *)&DAT_180623ed8;
              }
              DAT_1809f2820 = (float)(pLVar15->s).LowPart;
              local_2f0[0].s.LowPart = 0xc1c80000;
              local_2e0.s.LowPart = (DWORD)(DAT_1809f2828 - fVar31 * DAT_1808ac950);
              pLVar15 = local_2f0;
              if (DAT_1808ace40 <= (float)local_2e0.s.LowPart) {
                pLVar15 = &local_2e0;
              }
              if (DAT_1808ac988 < (float)local_2e0.s.LowPart) {
                pLVar15 = (LARGE_INTEGER *)&DAT_180623ed8;
              }
              DAT_1809f2828 = (float)(pLVar15->s).LowPart;
            }
          }
        }
LAB_1802ef731:
        FUN_1804e4e90(&DAT_1809f2790);
      }
      if ((*(uint *)(DAT_180ca0a50 + 0x1ef0) & 0x20) == 0) {
        if (((*(int *)(DAT_180ca0a50 + 0x15ac) == *(int *)(DAT_180ca0a50 + 0x1ee8)) &&
            (*(int *)(DAT_180ca0a50 + 0x1ee8) != 0)) &&
           (*(int *)(DAT_180ca0a50 + 4) <= *(int *)(DAT_180ca0a50 + 0x15b0))) goto LAB_1802ef770;
      }
      else if ((*(uint *)(DAT_180ca0a50 + 0x1ef0) >> 6 & 1) != 0) {
LAB_1802ef770:
        local_2f8 = (LONGLONG)&DAT_1809f2790;
        iVar11 = FUN_1804e4d70(&DAT_1809f2790);
        puVar23 = auStack_398;
        if (iVar11 != 0) goto LAB_1802efc1b;
        if (DAT_1809f27dc == 0x7fffffff) goto LAB_1802efc06;
        if (DAT_1809f27e0 != '\0') {
          FUN_18021d860(&DAT_1809f27e0,"mouse");
        }
        FUN_1804e4e90(&DAT_1809f2790);
      }
      cVar10 = FUN_1803dd930(0);
      lVar20 = DAT_180ca0a50;
      if (cVar10 == '\0') {
        return;
      }
      if (*(float *)(lVar19 + 0x120) == 0.0) {
        return;
      }
      if ((int)uVar24 < 0) {
        return;
      }
      puVar14 = (undefined4 *)(DAT_180ca0a50 + 0x1ee8);
      *(undefined4 *)(DAT_180ca0a50 + 0x1d08) = *puVar14;
      *(undefined4 *)(lVar20 + 0x1d04) = *puVar14;
      *(undefined2 *)(lVar20 + 0x1d0c) = 0;
      fVar26 = *(float *)(lVar19 + 0x120);
      local_2e0.QuadPart = (LONGLONG)&DAT_1809f2790;
      iVar11 = FUN_1804e4d70(&DAT_1809f2790);
      puVar23 = auStack_398;
      if (iVar11 != 0) {
LAB_1802efc1b:
                    /* WARNING: Subroutine does not return */
        FUN_1804e4a90(5);
      }
      if (DAT_1809f27dc != 0x7fffffff) {
        if ((DAT_1809f27e0 != '\0') && (DAT_1809f27f8 == '\0')) {
          local_2f8 = 0;
          local_2f0[0].QuadPart = 0;
          BVar12 = QueryPerformanceFrequency((LARGE_INTEGER *)&local_2f8);
          dVar8 = DAT_1808ac730;
          if ((BVar12 == 0) ||
             (((undefined *)local_2f8 == (undefined *)0x0 ||
              (BVar12 = QueryPerformanceCounter(local_2f0), BVar12 == 0)))) {
            UVar16 = GetTickCount64();
            dVar3 = (double)UVar16 / dVar8;
          }
          else {
            dVar3 = (double)local_2f0[0].QuadPart / (double)local_2f8;
          }
          fVar28 = DAT_1809f281c;
          dVar4 = dVar3 - _DAT_1809f28e8;
          fVar29 = (float)(int)fVar26 * DAT_1808ac1f4;
          if (dVar4 <= DAT_1808ac3f0) {
            if (dVar4 <= _DAT_1808ac3b0) {
              fVar27 = DAT_1808ac7ac;
            }
            else {
              fVar27 = DAT_1808ac658;
            }
            fVar29 = fVar29 * fVar27;
          }
          for (DAT_1809f281c = fVar29 + DAT_1809f281c; DAT_1809f281c < DAT_1808ace7c;
              DAT_1809f281c = DAT_1809f281c + DAT_1808acbd0) {
          }
          for (; DAT_1808acb58 < DAT_1809f281c; DAT_1809f281c = DAT_1809f281c + DAT_1808ace80) {
          }
          DAT_1809f28f0 = 1;
          _DAT_1809f28e8 = dVar3;
          _DAT_1809f28f8 = GetTickCount64();
          local_370 = (double)DAT_1809f281c;
          local_378 = (double)fVar28;
          FUN_18021c7f0("wheel | notches %d | since %.0f ms | step %.2f | rotation %.2f -> %.2f",
                        (int)fVar26,dVar4 * dVar8,(double)fVar29);
        }
        FUN_1804e4e90(&DAT_1809f2790);
        return;
      }
      goto LAB_1802efc06;
    }
  }
  if (DAT_180ccf604 != '\0') {
    FUN_18021fae0();
  }
  if ((((param_8 != '\0') && (*(int *)(DAT_180ca0a50 + 0x1578) != 0)) &&
      (*(int *)(DAT_180ca0a50 + 0x1578) == *(int *)(DAT_180ca0a50 + 0x1ee8))) &&
     ((*(char *)(DAT_180ca0a50 + 0x118) != '\0' && (fVar29 <= *(float *)(DAT_180ca0a50 + 0xbc4)))))
  {
    _DAT_1809f596c =
         (float)FUN_180519fe0(*(float *)(lVar19 + 0xfc) * DAT_1808ac21c + _DAT_1809f596c,
                              DAT_1808acbd0);
    local_2f8._0_4_ = 90.0;
    local_2f0[0].s.LowPart = 0xc2b40000;
    local_2e0.s.LowPart = (DWORD)(*(float *)(lVar19 + 0x100) * DAT_1808ac1b0 + _DAT_1809f5970);
    pLVar15 = local_2f0;
    if (DAT_1808ace6c <= (float)local_2e0.s.LowPart) {
      pLVar15 = &local_2e0;
    }
    pLVar17 = (LARGE_INTEGER *)&local_2f8;
    if ((float)local_2e0.s.LowPart <= DAT_1808acaf4) {
      pLVar17 = pLVar15;
    }
    _DAT_1809f5970 = (float)(pLVar17->s).LowPart;
    DAT_1809f596a = 1;
    DAT_1809f5978 = DAT_1809f5978 + 1;
    if (2 < DAT_1809f5978) {
      DAT_1809f5978 = 0;
      local_118[0] = '\0';
      local_118[1] = '\0';
      local_118[2] = '\0';
      local_118[3] = '\0';
      local_118[4] = '\0';
      local_118[5] = '\0';
      local_118[6] = '\0';
      local_118[7] = '\0';
      local_118[8] = '\0';
      local_118[9] = '\0';
      local_118[10] = '\0';
      local_118[0xb] = '\0';
      local_118[0xc] = '\0';
      local_118[0xd] = '\0';
      local_118[0xe] = '\0';
      local_118[0xf] = '\0';
      local_118[0x10] = '\0';
      local_118[0x11] = '\0';
      local_118[0x12] = '\0';
      local_118[0x13] = '\0';
      local_118[0x14] = '\0';
      local_118[0x15] = '\0';
      local_118[0x16] = '\0';
      local_118[0x17] = '\0';
      local_118[0x18] = '\0';
      local_118[0x19] = '\0';
      local_118[0x1a] = '\0';
      local_118[0x1b] = '\0';
      local_118[0x1c] = '\0';
      local_118[0x1d] = '\0';
      local_118[0x1e] = '\0';
      local_118[0x1f] = '\0';
      local_118[0x20] = '\0';
      local_118[0x21] = '\0';
      local_118[0x22] = '\0';
      local_118[0x23] = '\0';
      local_118[0x24] = '\0';
      local_118[0x25] = '\0';
      local_118[0x26] = '\0';
      local_118[0x27] = '\0';
      local_118[0x28] = '\0';
      local_118[0x29] = '\0';
      local_118[0x2a] = '\0';
      local_118[0x2b] = '\0';
      local_118[0x2c] = '\0';
      local_118[0x2d] = '\0';
      local_118[0x2e] = '\0';
      local_118[0x2f] = '\0';
      local_118[0x30] = '\0';
      local_118[0x31] = '\0';
      local_118[0x32] = '\0';
      local_118[0x33] = '\0';
      local_118[0x34] = '\0';
      local_118[0x35] = '\0';
      local_118[0x36] = '\0';
      local_118[0x37] = '\0';
      local_118[0x38] = '\0';
      local_118[0x39] = '\0';
      local_118[0x3a] = '\0';
      local_118[0x3b] = '\0';
      local_118[0x3c] = '\0';
      local_118[0x3d] = '\0';
      local_118[0x3e] = '\0';
      local_118[0x3f] = '\0';
      local_118[0x40] = '\0';
      local_118[0x41] = '\0';
      local_118[0x42] = '\0';
      local_118[0x43] = '\0';
      local_118[0x44] = '\0';
      local_118[0x45] = '\0';
      local_118[0x46] = '\0';
      local_118[0x47] = '\0';
      local_118[0x48] = '\0';
      local_118[0x49] = '\0';
      local_118[0x4a] = '\0';
      local_118[0x4b] = '\0';
      local_118[0x4c] = '\0';
      local_118[0x4d] = '\0';
      local_118[0x4e] = '\0';
      local_118[0x4f] = '\0';
      local_118[0x50] = '\0';
      local_118[0x51] = '\0';
      local_118[0x52] = '\0';
      local_118[0x53] = '\0';
      local_118[0x54] = '\0';
      local_118[0x55] = '\0';
      local_118[0x56] = '\0';
      local_118[0x57] = '\0';
      local_118[0x58] = '\0';
      local_118[0x59] = '\0';
      local_118[0x5a] = '\0';
      local_118[0x5b] = '\0';
      local_118[0x5c] = '\0';
      local_118[0x5d] = '\0';
      local_118[0x5e] = '\0';
      local_118[0x5f] = '\0';
      local_378 = (double)_DAT_1809f5970;
      snprintf(local_118,0x60,"panel.SetRotation(%.1f, %.1f, 0);",(double)_DAT_1809f596c);
      local_2d8[0] = 0;
      local_2d8[1] = 0;
      local_2d8[2] = 0;
      local_2d8[3] = 0;
      sVar18 = strlen(local_118);
      FUN_1800133a0(local_2d8,local_118,sVar18);
      FUN_1800e39f0(param_2,local_2d8);
      if (0xf < (ulonglong)local_2d8[3]) {
        uVar21 = local_2d8[3] + 1;
        lVar19 = local_2d8[0];
        if (0xfff < uVar21) {
          lVar19 = *(longlong *)(local_2d8[0] + -8);
          if (0x1f < (local_2d8[0] - lVar19) - 8U) {
            pcVar2 = (code *)swi(0x29);
            (*pcVar2)(5);
            puVar23 = auStack_390;
LAB_1802efc06:
            DAT_1809f27dc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
            *(undefined **)(puVar23 + -8) = &UNK_1802efc1a;
            FUN_1804e4a90(6);
          }
          uVar21 = local_2d8[3] + 0x28;
        }
        thunk_FUN_1803d64e0(lVar19,uVar21);
      }
    }
  }
  return;
}



/* ===== 1802efc30 FUN_1802efc30 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802efc30(char param_1)

{
  float fVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  float fVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  undefined8 *puVar12;
  longlong lVar13;
  undefined8 uVar14;
  ulonglong *puVar15;
  undefined8 uVar16;
  longlong *plVar17;
  int *piVar18;
  float fVar19;
  char *pcVar20;
  int **ppiVar21;
  ulonglong uVar22;
  char *pcVar23;
  float fVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  undefined1 *puVar27;
  ulonglong uVar28;
  undefined *puVar29;
  longlong lVar30;
  int *piVar31;
  bool bVar32;
  undefined1 uVar33;
  float unaff_XMM6_Da;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  float fVar37;
  float fVar38;
  undefined8 uStack_3d0;
  undefined1 auStack_3c8 [8];
  undefined1 auStack_3c0 [24];
  ulonglong local_3a8;
  int local_3a0 [2];
  undefined8 local_398;
  char local_390 [28];
  uint local_374;
  float local_370 [2];
  char local_368 [4];
  uint local_364;
  undefined8 local_360;
  float local_358 [4];
  undefined8 local_348;
  char local_340;
  undefined1 local_33f;
  undefined4 local_33c;
  undefined4 local_338;
  undefined8 local_330;
  undefined8 local_328;
  undefined4 local_320;
  int *local_318;
  ulonglong uStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  ulonglong local_2f8;
  ulonglong uStack_2f0;
  ulonglong local_2e8;
  ulonglong uStack_2e0;
  longlong local_2d8;
  longlong lStack_2d0;
  longlong local_2c8;
  ulonglong uStack_2c0;
  int *local_2b8 [4];
  undefined1 local_298 [32];
  int local_278 [8];
  undefined1 local_258 [32];
  undefined1 local_238 [24];
  undefined4 local_220;
  undefined1 local_218 [32];
  undefined1 local_1f8 [32];
  undefined1 local_1d8 [24];
  undefined4 local_1c0;
  undefined1 local_1b8 [32];
  undefined1 local_198 [32];
  undefined1 local_178 [16];
  undefined1 local_168 [16];
  longlong local_158;
  undefined4 local_144;
  undefined1 local_140 [32];
  undefined1 local_120 [32];
  undefined1 local_100 [32];
  undefined1 local_e0 [40];
  ulonglong local_b8;
  
  lVar30 = DAT_180ca0a50;
  puVar27 = auStack_3c8;
  local_b8 = DAT_180919500 ^ (ulonglong)auStack_3c8;
  piVar31 = (int *)0x0;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  lVar30 = *(longlong *)(lVar30 + 0x14f8);
  uVar14 = *(undefined8 *)(lVar30 + 0x28);
  fVar38 = (float)uVar14;
  fVar1 = *(float *)(lVar30 + 0x30);
  fVar37 = *(float *)(lVar30 + 0x34);
  local_358[2] = fVar38 + fVar1;
  local_360._4_4_ = (float)((ulonglong)uVar14 >> 0x20);
  fVar4 = local_360._4_4_;
  local_358[3] = local_360._4_4_ + fVar37;
  uVar26 = *(ulonglong *)(lVar30 + 0x2c8);
  if ((DAT_18093c6cc == '\0') || (DAT_1809f5969 = 1, DAT_1809f596a != '\0')) {
    DAT_1809f5969 = 0;
  }
  uVar7 = DAT_1809f590c;
  local_368[0] = param_1;
  local_360 = uVar14;
  local_348 = uVar26;
  if (DAT_1809f590c < 4) {
LAB_1802f054d:
    if (uVar7 - 1 < 2) {
      iVar6 = DAT_1809f5914;
      if (DAT_1809f5910 != 0) {
        iVar6 = DAT_1809f5910;
      }
    }
    else {
      if ((uVar7 != 0) && (uVar7 != 3)) goto LAB_1802efe7a;
      iVar6 = DAT_1809f5910;
    }
    *(int *)(puVar27 + 100) = iVar6;
    if (iVar6 != 0) {
      *(undefined8 *)(puVar27 + -8) = 0x1802f058e;
      piVar18 = (int *)FUN_180280c60(iVar6);
      uVar7 = DAT_1809f5900;
      if (0 < iVar6) {
        piVar31 = &DAT_18092174c;
        do {
          if ((*piVar31 == iVar6) && (piVar31[1] == DAT_1809f5900)) goto LAB_1802f05ec;
          piVar31 = piVar31 + 0x68;
        } while (piVar31 != &DAT_180931b4c);
        piVar31 = &DAT_18092174c;
        do {
          if ((*piVar31 == iVar6) && (piVar31[1] < 0)) goto LAB_1802f05ec;
          piVar31 = piVar31 + 0x68;
        } while (piVar31 != &DAT_180931b4c);
        piVar31 = (int *)0x0;
      }
LAB_1802f05ec:
      local_318 = piVar18;
      if (piVar18 != (int *)0x0) {
        iVar9 = *piVar18;
        *(undefined8 *)(puVar27 + -8) = 0x1802f0604;
        iVar8 = FUN_1804e4d70(&DAT_1809f2790);
        if (iVar8 != 0) goto LAB_1802f09c4;
        if (DAT_1809f27dc == 0x7fffffff) goto LAB_1802f09cf;
        if ((((DAT_1809f27e0 == '\0') || (DAT_1809f27e8 != iVar9)) || (DAT_1809f27ec != uVar7)) ||
           (DAT_1809f2904 != param_1)) {
          bVar32 = false;
        }
        else {
          bVar32 = true;
        }
        *(undefined8 *)(puVar27 + -8) = 0x1802f0655;
        FUN_1804e4e90(&DAT_1809f2790);
        uVar33 = piVar18[0x12] != 3;
        puVar27[0x61] = uVar33;
        if (param_1 == '\0') {
          uVar14 = *(undefined8 *)(DAT_180ca0a50 + 0x14f8);
          *(undefined8 *)(puVar27 + -8) = 0x1802f0681;
          iVar9 = FUN_1803e8900(uVar14,"##inv_big");
          if (*(int *)(DAT_180ca0a50 + 0x2020) <= *(int *)(DAT_180ca0a50 + 0x2030))
          goto LAB_1802f06b4;
          lVar30 = (longlong)*(int *)(DAT_180ca0a50 + 0x2030) * 0x58;
          if ((*(int *)(lVar30 + *(longlong *)(DAT_180ca0a50 + 0x2028)) != iVar9) ||
             (cVar5 = *(char *)(lVar30 + 0x34 + *(longlong *)(DAT_180ca0a50 + 0x2028)),
             puVar27[0x50] = 1, cVar5 != '\0')) goto LAB_1802f06b4;
        }
        else {
LAB_1802f06b4:
          puVar27[0x50] = 0;
        }
        iVar9 = piVar18[0x12];
        if (iVar9 == 2) {
          iVar9 = 2;
        }
        else if (iVar9 == 3) {
          iVar9 = 4;
        }
        else if (iVar9 == 4) {
          iVar9 = 3;
        }
        else if (iVar9 == 5) {
          iVar9 = 6;
        }
        else if (iVar9 == 6) {
          iVar9 = 5;
        }
        else {
          iVar9 = 1;
        }
        if ((param_1 == '\0') && ((iVar9 == 1 || (iVar9 == 6)))) {
          fVar19 = DAT_1808acb2c;
        }
        else {
          fVar19 = 0.0;
        }
        uVar10 = (int)fVar1 + 0x1fU & 0xffffffe0;
        uVar7 = 0x20;
        if (0x20 < (int)uVar10) {
          uVar7 = uVar10;
        }
        *(uint *)(puVar27 + 0x54) = uVar7;
        uVar11 = (int)(fVar19 + fVar37) + 0x1fU & 0xffffffe0;
        uVar10 = 0x20;
        if (0x20 < (int)uVar11) {
          uVar10 = uVar11;
        }
        *(uint *)(puVar27 + 0x70) = uVar10;
        *(uint *)(puVar27 + 0x58) = uVar7;
        *(uint *)(puVar27 + 0x5c) = uVar10;
        if (bVar32) {
          *(undefined8 *)(puVar27 + -8) = 0x1802f076c;
          iVar6 = FUN_1804e4d70(&DAT_1809f2790);
          uVar36 = DAT_1809f2810;
          uVar16 = DAT_1809f2808;
          uVar14 = DAT_1809f2800;
          uVar33 = DAT_1809f27f8;
          uVar35 = DAT_1809f27f0;
          uVar34 = DAT_1809f27e4;
          cVar5 = DAT_1809f27e0;
          if (iVar6 != 0) {
LAB_1802f09c4:
                    /* WARNING: Subroutine does not return */
            *(undefined **)(puVar27 + -8) = &UNK_1802f09ce;
            FUN_1804e4a90(5);
          }
          if (DAT_1809f27dc == 0x7fffffff) {
LAB_1802f09cf:
            DAT_1809f27dc = DAT_1809f27dc + -1;
                    /* WARNING: Subroutine does not return */
            *(undefined **)(puVar27 + -8) = &UNK_1802f09e1;
            FUN_1804e4a90(6);
          }
          *(undefined8 *)(puVar27 + -8) = 0x1802f07c2;
          FUN_1804e4e90(&DAT_1809f2790);
          local_340 = cVar5;
          local_33f = uVar33;
          local_33c = uVar34;
          local_338 = uVar35;
          local_330 = uVar14;
          local_328 = uVar16;
          local_320 = uVar36;
          *(undefined1 **)(puVar27 + 0x20) = puVar27 + 0x58;
          param_1 = puVar27[0x60];
          *(undefined8 *)(puVar27 + -8) = 0x1802f0815;
          FUN_1802d7be0(local_318,piVar31,&local_340,param_1);
          iVar6 = *(int *)(puVar27 + 100);
          uVar33 = puVar27[0x61];
          uVar26 = local_348;
        }
        else {
          *(undefined1 **)(puVar27 + 0x20) = puVar27 + 0x58;
          *(undefined8 *)(puVar27 + -8) = 0x1802f0841;
          FUN_1802d7be0(piVar18,piVar31,0,param_1);
        }
        pcVar20 = "weapon";
        if (param_1 != '\0') {
          pcVar20 = "weapon_big";
        }
        *(float *)(puVar27 + 0x58) = (float)*(int *)(puVar27 + 0x54);
        *(float *)(puVar27 + 0x5c) = (float)*(int *)(puVar27 + 0x70);
        *(undefined8 *)(puVar27 + -8) = 0x1802f0889;
        FUN_1803fc200(uVar26,puVar27 + 0x68,puVar27 + 0x78,1);
        fVar19 = 0.0;
        if (param_1 == '\0') {
          fVar19 = DAT_1808ac900;
        }
        local_348 = CONCAT44((fVar37 * DAT_1808ac1f4 + fVar4) - fVar19,
                             fVar1 * DAT_1808ac1f4 + fVar38);
        *(undefined8 *)(puVar27 + -8) = 0x1802f08d3;
        FUN_1802dd0e0(pcVar20,&local_348,puVar27 + 0x58);
        iVar8 = *(int *)(uVar26 + 0xa0);
        iVar9 = iVar8 + -1;
        *(int *)(uVar26 + 0xa0) = iVar9;
        if (iVar9 == 0) {
          puVar12 = (undefined8 *)(*(longlong *)(uVar26 + 0x38) + 0x34);
        }
        else {
          puVar12 = (undefined8 *)((longlong)(iVar8 + -2) * 0x10 + *(longlong *)(uVar26 + 0xa8));
        }
        uVar14 = puVar12[1];
        *(undefined8 *)(uVar26 + 0x60) = *puVar12;
        *(undefined8 *)(uVar26 + 0x68) = uVar14;
        *(undefined8 *)(puVar27 + -8) = 0x1802f090f;
        FUN_1803fbff0(uVar26);
        pcVar23 = "##turn";
        if (param_1 != '\0') {
          pcVar23 = "##big_turn";
        }
        puVar27[0x48] = puVar27[0x50];
        puVar27[0x40] = param_1;
        puVar27[0x38] = uVar33;
        *(int **)(puVar27 + 0x30) = piVar31;
        *(int *)(puVar27 + 0x28) = iVar6;
        *(undefined1 **)(puVar27 + 0x20) = puVar27 + 0x58;
        *(undefined8 *)(puVar27 + -8) = 0x1802f095c;
        FUN_1802eef40(pcVar23,pcVar20,puVar27 + 0x68,puVar27 + 0x78);
      }
    }
  }
  else if (DAT_1809f590c == 4) {
    iVar6 = DAT_1809214b0;
    if (DAT_1809f5900 == 0) {
      iVar6 = DAT_1809214ac;
    }
    fVar24 = (float)((int)fVar1 + 0x1fU & 0xffffffe0);
    fVar19 = (float)((int)(fVar37 + 0.0) + 0x1fU & 0xffffffe0);
    local_358[0] = 4.48416e-44;
    if (0x20 < (int)fVar24) {
      local_358[0] = fVar24;
    }
    local_358[1] = 4.48416e-44;
    if (0x20 < (int)fVar19) {
      local_358[1] = fVar19;
    }
    if (iVar6 == 0) {
      if (DAT_1809f5900 < 2) {
        iVar6 = (&DAT_180cec708)[(int)DAT_1809f5900];
      }
      else {
        iVar6 = 0;
      }
    }
    FUN_1802dbba0(DAT_1809f5900,iVar6,param_1,local_358);
    FUN_1803fc200(uVar26,&local_360,local_358 + 2,1);
    local_370[0] = (float)(int)local_358[0];
    local_370[1] = (float)(int)local_358[1];
    fVar19 = 0.0;
    if (param_1 == '\0') {
      fVar19 = DAT_1808acaa8;
    }
    local_360 = CONCAT44((fVar37 * DAT_1808ac1f4 + fVar4) - fVar19,fVar1 * DAT_1808ac1f4 + fVar38);
    pcVar20 = "agent_view";
    if (param_1 != '\0') {
      pcVar20 = "agent_view_big";
    }
    FUN_1802dd0e0(pcVar20,&local_360,local_370);
    iVar9 = *(int *)(uVar26 + 0xa0);
    iVar6 = iVar9 + -1;
    *(int *)(uVar26 + 0xa0) = iVar6;
    if (iVar6 == 0) {
      puVar12 = (undefined8 *)(*(longlong *)(uVar26 + 0x38) + 0x34);
    }
    else {
      puVar12 = (undefined8 *)((longlong)(iVar9 + -2) * 0x10 + *(longlong *)(uVar26 + 0xa8));
    }
    uVar14 = puVar12[1];
    *(undefined8 *)(uVar26 + 0x60) = *puVar12;
    *(undefined8 *)(uVar26 + 0x68) = uVar14;
    FUN_1803fbff0(uVar26);
    puVar27 = auStack_3c8;
  }
  else {
    FUN_1802dd890(local_178,DAT_1809f590c,0);
    bVar32 = DAT_1809f590c == 5;
    if (bVar32) {
      local_374 = DAT_1809216e4;
    }
    else {
      local_374 = DAT_1809216e8;
      if (DAT_1809216e8 == 0) {
        local_374 = DAT_180cec7d8;
      }
    }
    uStack_2f0 = 0;
    lVar30 = 0;
    local_2e8 = 0;
    uVar28 = 0xf;
    uStack_2e0 = 0xf;
    local_2f8 = 0;
    local_390[0x18] = bVar32;
    if (bVar32) {
      if ((local_374 != 0) && (lVar13 = FUN_1800e04f0(), lVar13 != 0)) {
        uVar14 = FUN_18004e4f0(&local_318,lVar13);
        uVar14 = FUN_180066ab0(&local_2d8,&DAT_1806e17c8,uVar14);
        puVar15 = (ulonglong *)FUN_1800134a0(uVar14,&DAT_1806e17c8,1);
        local_2f8 = *puVar15;
        uStack_2f0 = puVar15[1];
        unaff_XMM6_Da = *(float *)(puVar15 + 2);
        uVar34 = *(undefined4 *)((longlong)puVar15 + 0x14);
        local_2e8 = puVar15[2];
        uVar35 = (undefined4)puVar15[3];
        uVar36 = *(undefined4 *)((longlong)puVar15 + 0x1c);
        uStack_2e0 = puVar15[3];
        puVar15[2] = 0;
        puVar15[3] = 0xf;
        *(undefined1 *)puVar15 = 0;
        FUN_18000f890(&local_2d8);
        ppiVar21 = &local_318;
        goto LAB_1802f005a;
      }
    }
    else if (local_374 != 0) {
      uVar14 = FUN_18003a390(local_2b8,local_374);
      uVar14 = FUN_180066ab0(&local_2d8,"InventoryAPI.GetFauxItemIDFromDefAndPaintIndex(",uVar14);
      puVar15 = (ulonglong *)FUN_1800134a0(uVar14,&DAT_180760664,4);
      local_2f8 = *puVar15;
      uStack_310 = puVar15[1];
      unaff_XMM6_Da = *(float *)(puVar15 + 2);
      uVar34 = *(undefined4 *)((longlong)puVar15 + 0x14);
      local_2e8 = puVar15[2];
      uVar35 = (undefined4)puVar15[3];
      uVar36 = *(undefined4 *)((longlong)puVar15 + 0x1c);
      uStack_2e0 = puVar15[3];
      puVar15[2] = 0;
      puVar15[3] = 0xf;
      *(undefined1 *)puVar15 = 0;
      local_308 = 0;
      uStack_300 = 0xf;
      local_318 = (int *)(local_2f8 & 0xffffffffffffff00);
      uStack_2f0 = uStack_310;
      FUN_18000f890(&local_318);
      FUN_18000f890(&local_2d8);
      ppiVar21 = local_2b8;
LAB_1802f005a:
      FUN_18000f890(ppiVar21);
      auVar3._4_4_ = uVar34;
      auVar3._0_4_ = unaff_XMM6_Da;
      auVar3._8_4_ = uVar35;
      auVar3._12_4_ = uVar36;
      lVar30 = CONCAT44(uVar34,unaff_XMM6_Da);
      uVar28 = auVar3._8_8_;
    }
    fVar19 = 0.0;
    if ((param_1 != '\0') || (bVar32)) {
      fVar24 = 0.0;
    }
    else {
      fVar24 = DAT_1808acb2c;
    }
    uVar7 = (int)fVar1 + 0x1fU & 0xffffffe0;
    local_364 = 0x20;
    if (0x20 < (int)uVar7) {
      local_364 = uVar7;
    }
    uVar7 = (int)(fVar24 + fVar37) + 0x1fU & 0xffffffe0;
    piVar31 = (int *)&DAT_00000020;
    if (0x20 < (int)uVar7) {
      piVar31 = (int *)(ulonglong)uVar7;
    }
    pcVar20 = "weapon";
    uVar25 = 0;
    if (lVar30 == 0) {
LAB_1802f032b:
      pcVar20 = "weapon";
      puVar29 = (undefined *)0x1;
      iVar6 = 1;
      if (param_1 == '\0') {
        fVar19 = DAT_1808ac900;
      }
      else {
        pcVar20 = "weapon_big";
      }
      unaff_XMM6_Da = (fVar37 * DAT_1808ac1f4 + fVar4) - fVar19;
      fVar19 = fVar1 * DAT_1808ac1f4 + fVar38;
      local_358[0] = fVar19;
      local_358[1] = unaff_XMM6_Da;
      FUN_1803fc200(uVar26,&local_360,local_358 + 2,1);
      puVar27 = auStack_3c8;
      if (uVar25 == 0) goto LAB_1802f03d7;
      lVar30 = FUN_1800e40f0(pcVar20);
      puVar27 = auStack_3c8;
      if (lVar30 == 0) goto LAB_1802f03d7;
      local_370[0] = (float)(int)local_364;
      local_370[1] = (float)(int)piVar31;
      cVar5 = FUN_1802dd0e0(pcVar20,local_358,local_370);
      puVar27 = auStack_3c8;
      if (cVar5 == '\0') goto LAB_1802f03d7;
      bVar32 = true;
      puVar27 = auStack_3c8;
    }
    else {
      uVar7 = !bVar32 + 5;
      uVar28 = (ulonglong)uVar7;
      uVar14 = FUN_18003a390(&local_340,local_374);
      uVar16 = FUN_18003a390(local_198,uVar28);
      plVar17 = (longlong *)FUN_1800134a0(uVar16,&DAT_1806e9100,1);
      local_2d8 = *plVar17;
      lStack_2d0 = plVar17[1];
      local_2c8 = plVar17[2];
      uStack_2c0 = plVar17[3];
      plVar17[2] = 0;
      plVar17[3] = 0xf;
      *(undefined1 *)plVar17 = 0;
      uVar14 = FUN_180066820(local_1b8,&local_2d8,uVar14);
      if (param_1 != '\0') {
        pcVar20 = "weapon_big";
      }
      puVar29 = &DAT_1809f6fd0;
      if (param_1 != '\0') {
        puVar29 = &DAT_1809f7240;
      }
      uVar26 = ((ulonglong)uVar7 << 0x14 ^ (longlong)(int)local_364) << 0x14 ^
               (longlong)(int)piVar31;
      uVar16 = FUN_1802d76a0(local_2b8,uVar28);
      local_3a8 = uVar26;
      FUN_1800e3760(pcVar20,local_364,piVar31,uVar16);
      FUN_18000f890(local_2b8);
      uVar10 = local_374;
      if (local_390[0x18] != '\0') {
        uVar10 = 0x522;
      }
      FUN_1802d6d50(local_218,uVar7,uVar10);
      FUN_180024b50(local_298,&local_2f8);
      local_318 = local_278;
      FUN_180024b50(local_278,local_218);
      FUN_180024b50(local_258,local_1f8);
      FUN_18006d7e0(local_238,local_1d8);
      local_220 = local_1c0;
      uVar14 = FUN_180066a20(local_2b8,"flat|",uVar14);
      FUN_1803445e0(pcVar20,puVar29,uVar14,local_298);
      FUN_18000f890(local_2b8);
      FUN_1800288b0(local_238);
      FUN_18000f890(local_258);
      FUN_18000f890(local_278);
      FUN_18000f890(local_298);
      FUN_1800288b0(local_1d8);
      FUN_18000f890(local_1f8);
      FUN_18000f890(local_218);
      FUN_18000f890(local_1b8);
      if (uStack_2c0 < 0x10) {
LAB_1802f02f6:
        FUN_18000f890(local_198);
        FUN_18000f890(&local_340);
        uVar26 = local_348;
        uVar28 = uStack_2e0;
        uVar25 = local_2e8;
        goto LAB_1802f032b;
      }
      uVar25 = uStack_2c0 + 1;
      lVar30 = local_2d8;
      if (uVar25 < 0x1000) {
LAB_1802f02f0:
        thunk_FUN_1803d64e0(lVar30,uVar25);
        goto LAB_1802f02f6;
      }
      lVar30 = *(longlong *)(local_2d8 + -8);
      if ((local_2d8 - lVar30) - 8U < 0x20) {
        uVar25 = uStack_2c0 + 0x28;
        goto LAB_1802f02f0;
      }
      pcVar2 = (code *)swi(0x29);
      (*pcVar2)(5);
      puVar27 = auStack_3c0;
LAB_1802f03d7:
      iVar6 = (int)puVar29;
      bVar32 = false;
    }
    iVar8 = *(int *)(uVar26 + 0xa0);
    iVar9 = iVar8 + -1;
    *(int *)(uVar26 + 0xa0) = iVar9;
    if (iVar9 == 0) {
      puVar12 = (undefined8 *)(*(longlong *)(uVar26 + 0x38) + 0x34);
    }
    else {
      puVar12 = (undefined8 *)((longlong)(iVar8 + -2) * 0x10 + *(longlong *)(uVar26 + 0xa8));
    }
    uVar14 = puVar12[1];
    *(undefined8 *)(uVar26 + 0x60) = *puVar12;
    *(undefined8 *)(uVar26 + 0x68) = uVar14;
    *(undefined8 *)(puVar27 + -8) = 0x1802f0416;
    FUN_1803fbff0(uVar26);
    if ((!bVar32) && (local_158 != 0)) {
      *(undefined8 *)(puVar27 + -8) = 0x1802f043d;
      plVar17 = (longlong *)FUN_1800e77d0(&local_318,local_168);
      lVar30 = *plVar17;
      if (lVar30 != 0) {
        iVar9 = *(int *)((longlong)plVar17 + 0xc);
        if (fVar1 <= fVar37) {
          fVar37 = fVar1;
        }
        fVar37 = fVar37 * DAT_1808ac1b0;
        *(float *)(puVar27 + 0x58) = fVar37 * _DAT_1808ac3f8 + fVar19;
        *(float *)(puVar27 + 0x5c) = unaff_XMM6_Da + fVar37;
        *(float *)(puVar27 + 0x68) = fVar19 - fVar37 * _DAT_1808ac3f8;
        *(float *)(puVar27 + 0x6c) = unaff_XMM6_Da - fVar37;
        if (iVar9 < 1) {
          iVar9 = iVar6;
        }
        lVar13 = plVar17[1];
        *(undefined4 *)(puVar27 + 0x28) = local_144;
        *(undefined1 **)(puVar27 + 0x20) = puVar27 + 0x58;
        *(undefined8 *)(puVar27 + -8) = 0x1802f04cf;
        FUN_1802d4a10(uVar26,lVar30,(float)(int)lVar13 / (float)iVar9,puVar27 + 0x68);
      }
    }
    if (0xf < uVar28) {
      uVar25 = uVar28 + 1;
      uVar22 = local_2f8;
      if (0xfff < uVar25) {
        uVar22 = *(ulonglong *)(local_2f8 - 8);
        if (0x1f < (local_2f8 - uVar22) - 8) {
          uVar7 = 5;
          pcVar2 = (code *)swi(0x29);
          (*pcVar2)();
          puVar27 = puVar27 + 8;
          goto LAB_1802f054d;
        }
        uVar25 = uVar28 + 0x28;
      }
      *(undefined8 *)(puVar27 + -8) = 0x1802f0504;
      thunk_FUN_1803d64e0(uVar22,uVar25);
    }
    *(undefined8 *)(puVar27 + -8) = 0x1802f0511;
    FUN_1800288b0(local_e0);
    *(undefined8 *)(puVar27 + -8) = 0x1802f051d;
    FUN_18000f890(local_100);
    *(undefined8 *)(puVar27 + -8) = 0x1802f0529;
    FUN_18000f890(local_120);
    *(undefined8 *)(puVar27 + -8) = 0x1802f0535;
    FUN_18000f890(local_140);
    *(undefined8 *)(puVar27 + -8) = 0x1802f0541;
    FUN_18000f890(local_168);
  }
LAB_1802efe7a:
  if (param_1 == '\0') {
    uVar14 = *(undefined8 *)(DAT_180ca0a50 + 0x14f8);
    *(undefined8 *)(puVar27 + -8) = 0x1802efe9d;
    iVar6 = FUN_1803e8900(uVar14,"##inv_big");
    if (*(int *)(DAT_180ca0a50 + 0x2020) <= *(int *)(DAT_180ca0a50 + 0x2030)) goto LAB_1802f0961;
    lVar30 = (longlong)*(int *)(DAT_180ca0a50 + 0x2030) * 0x58;
    if ((*(int *)(lVar30 + *(longlong *)(DAT_180ca0a50 + 0x2028)) != iVar6) ||
       (*(char *)(lVar30 + 0x34 + *(longlong *)(DAT_180ca0a50 + 0x2028)) != '\0'))
    goto LAB_1802f0961;
    *(undefined8 *)(puVar27 + -8) = 0x1802efee2;
    FUN_1802edce0(0,1);
    *(undefined8 *)(puVar27 + -8) = 0x1802efeeb;
    FUN_1802e8060(0);
  }
  else {
LAB_1802f0961:
    *(undefined8 *)(puVar27 + -8) = 0x1802f096c;
    FUN_1802edce0(param_1,0);
    *(undefined8 *)(puVar27 + -8) = 0x1802f0975;
    FUN_1802e8060(param_1);
    if (param_1 != '\0') goto LAB_1802f097f;
  }
  *(undefined8 *)(puVar27 + -8) = 0x1802f097f;
  FUN_1802f09f0();
LAB_1802f097f:
  *(undefined8 *)(puVar27 + -8) = 0x1802f098e;
  return;
}



/* ===== 1802f09f0 FUN_1802f09f0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802f09f0(void)

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  undefined8 *puVar4;
  char cVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined8 in_stack_ffffffffffffff70;
  undefined4 uVar17;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  
  lVar1 = DAT_180ca0a50;
  fVar15 = DAT_1808acb08;
  fVar13 = DAT_1808ac040;
  uVar17 = (undefined4)((ulonglong)in_stack_ffffffffffffff70 >> 0x20);
  fVar14 = *(float *)(**(longlong **)(DAT_180ca0a50 + 0x2058) + 0x10);
  fVar12 = *(float *)(**(longlong **)(DAT_180ca0a50 + 0x2058) + 0x14);
  fVar10 = (float)FUN_18053ef70((fVar14 - DAT_1808acb08) * DAT_1808ac040);
  fVar3 = DAT_1808ac9fc;
  fVar16 = fVar10 * DAT_1808ac9fc;
  if (fVar10 * DAT_1808ac9fc <= DAT_1808ac9fc) {
    fVar16 = DAT_1808ac9fc;
  }
  fVar10 = (float)FUN_18053ef70((fVar12 - fVar15) * fVar13);
  fVar13 = DAT_1808ac1f4;
  *(uint *)(lVar1 + 0x1f38) = *(uint *)(lVar1 + 0x1f38) | 3;
  *(undefined4 *)(lVar1 + 8000) = 1;
  *(float *)(lVar1 + 0x1f58) = fVar16;
  fVar15 = fVar10 * fVar3;
  if (fVar10 * fVar3 <= fVar3) {
    fVar15 = fVar3;
  }
  *(float *)(lVar1 + 0x1f5c) = fVar15;
  uVar11 = FUN_18053f0d0((fVar14 - fVar16) * fVar13);
  *(undefined4 *)(lVar1 + 0x1f48) = uVar11;
  uVar11 = FUN_18053f0d0((fVar12 - fVar15) * fVar13);
  *(undefined4 *)(lVar1 + 0x1f4c) = uVar11;
  *(undefined8 *)(lVar1 + 0x1f50) = 0;
  *(undefined4 *)(lVar1 + 0x1f3c) = 1;
  uVar11 = FUN_1803e8900(*(undefined8 *)(lVar1 + 0x14f8),"##inv_big");
  uVar7 = FUN_1802b4e80(uVar11);
  FUN_1802b6190(uVar11,uVar7);
  local_res8 = 0;
  FUN_1803d89a0(2,&local_res8);
  FUN_1803d8870(10,0);
  FUN_1803d8730(4,0);
  if (*(int *)(DAT_180ca0a50 + 0x2030) < *(int *)(DAT_180ca0a50 + 0x2020)) {
    uVar6 = FUN_1803e8900(*(undefined8 *)(DAT_180ca0a50 + 0x14f8),"##inv_big");
    cVar5 = FUN_1803ee2d0(uVar6,0x15d);
    FUN_1803d87f0(1);
    FUN_1803d8a40(2);
    lVar1 = DAT_180ca0a50;
    fVar14 = DAT_1808ac34c;
    if (cVar5 != '\0') {
      lVar9 = *(longlong *)(DAT_180ca0a50 + 0x14f8);
      uVar7 = *(undefined8 *)(lVar9 + 0x28);
      local_res10._4_4_ = (float)((ulonglong)uVar7 >> 0x20);
      *(undefined1 *)(lVar9 + 0xce) = 1;
      local_res8 = CONCAT44(local_res10._4_4_ + *(float *)(lVar9 + 0x34),
                            (float)uVar7 + *(float *)(lVar9 + 0x30));
      lVar9 = *(longlong *)(*(longlong *)(lVar1 + 0x14f8) + 0x2c8);
      if (DAT_180cd0fd8 == '\0') {
        fVar12 = fVar14;
      }
      else {
        fVar12 = DAT_1809f7440;
      }
      fVar13 = DAT_1808ac000;
      if (DAT_1808ac000 <= fVar12) {
        fVar13 = fVar12;
      }
      local_res10 = uVar7;
      FUN_1802b4c40(lVar9,&local_res10,&local_res8,*(undefined4 *)(lVar1 + 0xcd4),
                    DAT_180960ee0 & 0xffffff | 0xf2000000,CONCAT44(uVar17,fVar14 / fVar13));
      FUN_1802b6490(uVar11,1,0,0);
      local_res8 = 0;
      uVar7 = FUN_1803d89a0(0xe,&local_res8);
      puVar4 = DAT_1811074c0;
      local_78 = CONCAT44(*(undefined4 *)(lVar9 + 0x20),uVar11);
      local_70 = CONCAT31(local_70._1_3_,1);
      if (DAT_1811074c0 == DAT_1811074c8) {
        FUN_180354d50(uVar7,DAT_1811074c0,&local_78);
      }
      else {
        *DAT_1811074c0 = local_78;
        *(undefined4 *)(puVar4 + 1) = local_70;
        DAT_1811074c0 = (undefined8 *)((longlong)DAT_1811074c0 + 0xc);
      }
      lVar1 = DAT_180ca0a50;
      *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
      lVar1 = *(longlong *)(lVar1 + 0x14f8);
      FUN_1802efc30(1);
      lVar9 = DAT_180ca0a50;
      fVar14 = DAT_1808ac950;
      uVar17 = *(undefined4 *)(lVar1 + 0x28);
      fVar12 = *(float *)(lVar1 + 0x2c) + DAT_1808ac950;
      *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
      lVar9 = *(longlong *)(lVar9 + 0x14f8);
      *(undefined4 *)(lVar9 + 0x118) = uVar17;
      *(float *)(lVar9 + 0x11c) = fVar12;
      *(undefined1 *)(lVar9 + 0x159) = 1;
      FUN_1802e4340(1);
      lVar9 = DAT_181107a08;
      if (DAT_181107a08 == 0) {
        lVar9 = *(longlong *)(DAT_180ca0a50 + 0x11f0);
      }
      local_70 = *(undefined4 *)(DAT_180ca0a50 + 0x1204);
      local_6c = *(undefined4 *)(DAT_180ca0a50 + 0x1200);
      local_78 = *(undefined8 *)(DAT_180ca0a50 + 0x11f0);
      FUN_1803f6200(DAT_180ca0a50 + 0x1fe0,&local_78);
      FUN_1803e8680(lVar9,DAT_1808ac94c,0);
      lVar9 = DAT_180ca0a50;
      uVar11 = DAT_1808acbd8;
      fVar12 = *(float *)(lVar1 + 0x2c);
      local_res8 = 0x41cdfdf441f00000;
      fVar13 = (*(float *)(lVar1 + 0x30) + *(float *)(lVar1 + 0x28)) - DAT_1808ac9e4;
      *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
      lVar9 = *(longlong *)(lVar9 + 0x14f8);
      *(float *)(lVar9 + 0x11c) = fVar12 + fVar14;
      uVar17 = DAT_1808ac8f0;
      *(float *)(lVar9 + 0x118) = fVar13 - fVar14;
      *(undefined1 *)(lVar9 + 0x159) = 1;
      cVar5 = FUN_1802d59d0("##big_close","inv_xmark",
                            "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 384 512\" width=\"384\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M342 151C355 139 355 118 342 106C330 93 309 93 297 106L192 211L86 106C74 93 53 93 41 106C28 118 28 139 41 151L146 256L41 362C28 374 28 395 41 407C53 420 74 420 86 407L191 302L297 407C309 420 330 420 342 407C355 395 355 374 342 362L237 256L342 151L342 151Z\"/></svg>"
                            ,uVar11,uVar17,&local_res8,0,DAT_180960f38);
      if (cVar5 != '\0') {
        FUN_1803ee1f0();
      }
      lVar9 = DAT_180ca0a50;
      lVar8 = (longlong)*(int *)(DAT_180ca0a50 + 0x1fe0);
      if (*(int *)(DAT_180ca0a50 + 0x1fe0) < 1) {
        FUN_1803ebc00("Calling PopFont() too many times!");
      }
      else {
        lVar2 = *(longlong *)(DAT_180ca0a50 + 0x1fe8);
        FUN_1803e8680(*(undefined8 *)(lVar2 + -0x10 + lVar8 * 0x10),
                      *(undefined4 *)(lVar2 + -8 + lVar8 * 0x10),
                      *(undefined4 *)(lVar2 + -4 + lVar8 * 0x10));
        *(int *)(lVar9 + 0x1fe0) = *(int *)(lVar9 + 0x1fe0) + -1;
      }
      lVar9 = DAT_180ca0a50;
      uVar17 = *(undefined4 *)(lVar1 + 0x28);
      fVar14 = *(float *)(lVar1 + 0x2c) + fVar14 + _DAT_1808aca58;
      *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
      lVar1 = *(longlong *)(lVar9 + 0x14f8);
      fVar14 = fVar14 + _DAT_1808aca2c;
      *(undefined4 *)(lVar1 + 0x118) = uVar17;
      *(undefined1 *)(lVar1 + 0x159) = 1;
      *(float *)(lVar1 + 0x11c) = fVar14 + DAT_1808ac540 + DAT_1808ac864;
      FUN_1802e48d0(1);
      FUN_1802b5590();
    }
  }
  else {
    *(undefined4 *)(DAT_180ca0a50 + 0x1f38) = 0;
    FUN_1803d87f0(1);
    FUN_1803d8a40(2);
  }
  return;
}



/* ===== 1802f0f50 FUN_1802f0f50 ===== */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802f0f50(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_1048 [32];
  ulonglong local_1028;
  undefined1 local_1020;
  undefined1 local_1018;
  undefined8 local_1010;
  ulonglong local_1008;
  ulonglong local_30;
  undefined8 uStack_28;
  
  uStack_28 = 0x1802f0f5f;
  local_30 = DAT_180919500 ^ (ulonglong)auStack_1048;
  if (DAT_1809f5924 == 0) {
    lVar3 = param_1[1];
    lVar1 = *param_1;
    lVar4 = lVar3 - lVar1;
    lVar2 = (lVar4 >> 3) * -0x2c8590b21642c859;
    if (lVar2 < 0x21) {
      FUN_18034aad0(lVar1,lVar3);
      goto LAB_1802f115d;
    }
    lVar4 = lVar4 + SUB168(SEXT816(-0x4de9bd37a6f4de9b) * SEXT816(lVar4),8);
    FUN_18034adc0(&local_1010,lVar2 - ((lVar4 >> 8) - (lVar4 >> 0x3f)));
    local_1020 = local_1018;
    local_1028 = local_1008;
    FUN_18034ae70(lVar1,lVar3,lVar2,local_1010);
  }
  else if (DAT_1809f5924 == 1) {
    lVar3 = param_1[1];
    lVar1 = *param_1;
    lVar4 = lVar3 - lVar1;
    lVar2 = (lVar4 >> 3) * -0x2c8590b21642c859;
    if (lVar2 < 0x21) {
      FUN_18034af70(lVar1,lVar3);
      goto LAB_1802f115d;
    }
    lVar4 = lVar4 + SUB168(SEXT816(-0x4de9bd37a6f4de9b) * SEXT816(lVar4),8);
    FUN_18034adc0(&local_1010,lVar2 - ((lVar4 >> 8) - (lVar4 >> 0x3f)));
    local_1020 = local_1018;
    local_1028 = local_1008;
    FUN_18034b1d0(lVar1,lVar3,lVar2,local_1010);
  }
  else {
    if (DAT_1809f5924 != 2) goto LAB_1802f115d;
    lVar3 = param_1[1];
    lVar1 = *param_1;
    lVar4 = lVar3 - lVar1;
    lVar2 = (lVar4 >> 3) * -0x2c8590b21642c859;
    if (lVar2 < 0x21) {
      FUN_18034b2d0(lVar1,lVar3);
      goto LAB_1802f115d;
    }
    lVar4 = lVar4 + SUB168(SEXT816(-0x4de9bd37a6f4de9b) * SEXT816(lVar4),8);
    FUN_18034adc0(&local_1010,lVar2 - ((lVar4 >> 8) - (lVar4 >> 0x3f)));
    local_1020 = local_1018;
    local_1028 = local_1008;
    FUN_18034b540(lVar1,lVar3,lVar2,local_1010);
  }
  if (0x16 < local_1008) {
    FUN_1803d64e0(local_1010);
  }
LAB_1802f115d:
  lVar4 = *param_1;
  lVar3 = lVar4;
  while( true ) {
    if (lVar3 == param_1[1]) {
      return;
    }
    if (*(int *)(lVar3 + 4) == 0) break;
    lVar3 = lVar3 + 0xb8;
  }
  if (lVar3 == lVar4) {
    return;
  }
  lVar1 = lVar3 + 0xb8;
  if (lVar3 == lVar1) {
    return;
  }
  FUN_18034b640(lVar4,lVar3);
  FUN_18034b640(lVar3,lVar1);
  FUN_18034b640(lVar4,lVar1);
  return;
}



/* ===== 1802f11e0 FUN_1802f11e0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802f11e0(int param_1,undefined1 param_2,char param_3,longlong param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  code *pcVar3;
  char cVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong unaff_RBX;
  undefined1 *puVar11;
  undefined4 *puVar12;
  bool bVar13;
  undefined1 auStack_1d8 [8];
  undefined1 auStack_1d0 [56];
  undefined1 local_198;
  undefined4 local_194;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  ulonglong local_178;
  int local_168;
  undefined4 local_164;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined1 local_140 [32];
  undefined4 local_120;
  undefined1 local_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined1 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_1d8;
  bVar13 = false;
  local_194 = 0;
  local_198 = param_2;
  if (param_3 == '\0') {
LAB_1802f12bf:
    uVar5 = unaff_RBX & 0xffffffffffffff00;
  }
  else {
    uStack_188 = 0;
    local_180 = 7;
    local_178 = 0xf;
    local_190 = (ulonglong)
                CONCAT16(s_No_Skin_180760760[6],
                         CONCAT24(s_No_Skin_180760760._4_2_,s_No_Skin_180760760._0_4_));
    bVar13 = true;
    local_194 = 1;
    if ((DAT_1809f5928 != '\0') && (cVar4 = FUN_1802d4740(&local_190,&DAT_1809f5928), cVar4 == '\0')
       ) goto LAB_1802f12bf;
    uVar5 = 1;
  }
  if ((bVar13) && (0xf < local_178)) {
    uVar10 = local_178 + 1;
    uVar9 = local_190;
    if (uVar10 < 0x1000) {
LAB_1802f1319:
      thunk_FUN_1803d64e0(uVar9,uVar10);
      goto LAB_1802f1334;
    }
    uVar9 = *(ulonglong *)(local_190 - 8);
    if ((local_190 - uVar9) - 8 < 0x20) {
      uVar10 = local_178 + 0x28;
      goto LAB_1802f1319;
    }
    pcVar3 = (code *)swi(0x29);
    (*pcVar3)(5);
    puVar11 = auStack_1d0;
LAB_1802f13a2:
    local_a8 = 0;
    uStack_a0 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    uStack_50 = 0;
    *(undefined4 *)(puVar11 + 0x30) = 0x800000;
    *(undefined4 *)(puVar11 + 0x28) = 0;
    *(int *)(puVar11 + 0x20) = param_1;
    *(undefined8 *)(puVar11 + -8) = 0x1802f13ee;
    snprintf(&local_a8,0x60,"%s%d|%d|%08x|0|-|-|",&DAT_1806f1fc8);
    *(undefined8 *)(puVar11 + -8) = 0x1802f13fe;
    FUN_180066a20(local_140,&local_a8,uVar5);
  }
  else {
LAB_1802f1334:
    puVar11 = auStack_1d8;
    if ((char)uVar5 == '\0') goto LAB_1802f14b1;
    local_164 = 0;
    uStack_158 = 0;
    local_150 = 7;
    local_148 = 0xf;
    local_160 = (ulonglong)
                CONCAT16(s_No_Skin_180760760[6],
                         CONCAT24(s_No_Skin_180760760._4_2_,s_No_Skin_180760760._0_4_));
    local_168 = param_1;
    uVar5 = FUN_1802816b0(&local_190,param_1,0);
    puVar11 = auStack_1d8;
    if (0 < param_1) goto LAB_1802f13a2;
    FUN_180024b50(local_140,uVar5);
    puVar11 = auStack_1d8;
  }
  local_120 = 0;
  uStack_110 = 0;
  local_108 = 0;
  local_100 = 0xf;
  local_118 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  local_e0 = 0xf;
  local_f8 = 0;
  local_d8 = 0;
  uStack_c8 = 0;
  local_c0 = 0;
  local_b8 = 0xf;
  local_d0 = 0;
  lVar7 = *(longlong *)(param_4 + 8);
  local_11c = param_2;
  if (lVar7 == *(longlong *)(param_4 + 0x10)) {
    *(undefined8 *)(puVar11 + -8) = 0x1802f1477;
    FUN_180354000(param_4,lVar7,puVar11 + 0x70);
  }
  else {
    *(undefined8 *)(puVar11 + -8) = 0x1802f145d;
    FUN_18034fd60(lVar7,puVar11 + 0x70);
    *(longlong *)(param_4 + 8) = *(longlong *)(param_4 + 8) + 0xb8;
  }
  *(undefined8 *)(puVar11 + -8) = 0x1802f1481;
  FUN_18000f890(&local_d0);
  *(undefined8 *)(puVar11 + -8) = 0x1802f148a;
  FUN_18000f890(&local_f8);
  *(undefined8 *)(puVar11 + -8) = 0x1802f1493;
  FUN_18000f890(&local_118);
  *(undefined8 *)(puVar11 + -8) = 0x1802f149c;
  FUN_18000f890(local_140);
  *(undefined8 *)(puVar11 + -8) = 0x1802f14a6;
  FUN_18000f890(puVar11 + 0x78);
  *(undefined8 *)(puVar11 + -8) = 0x1802f14b1;
  FUN_18000f890(puVar11 + 0x48);
LAB_1802f14b1:
  *(undefined8 *)(puVar11 + -8) = 0x1802f14b9;
  puVar6 = (undefined8 *)FUN_180280de0(param_1);
  puVar12 = (undefined4 *)*puVar6;
  puVar2 = (undefined4 *)puVar6[1];
  do {
    if (puVar12 == puVar2) {
      s_No_Skin_180760760[0] = s_No_Skin_180760760[0];
      s_No_Skin_180760760[1] = s_No_Skin_180760760[1];
      s_No_Skin_180760760[2] = s_No_Skin_180760760[2];
      s_No_Skin_180760760[3] = s_No_Skin_180760760[3];
      s_No_Skin_180760760[4] = s_No_Skin_180760760[4];
      s_No_Skin_180760760[5] = s_No_Skin_180760760[5];
      *(undefined8 *)(puVar11 + -8) = 0x1802f167b;
      return;
    }
    uVar1 = *puVar12;
    *(undefined8 *)(puVar11 + -8) = 0x1802f14d9;
    lVar7 = FUN_180280d30(uVar1);
    if (lVar7 != 0) {
      if (DAT_1809f5928 != '\0') {
        *(undefined8 *)(puVar11 + -8) = 0x1802f14fe;
        cVar4 = FUN_1802d4740(lVar7 + 0x28,&DAT_1809f5928);
        if (cVar4 == '\0') goto LAB_1802f165f;
      }
      *(int *)(puVar11 + 0x70) = param_1;
      *(undefined4 *)(puVar11 + 0x74) = uVar1;
      *(undefined8 *)(puVar11 + -8) = 0x1802f151d;
      FUN_180024b50(puVar11 + 0x78,lVar7 + 0x28);
      *(undefined8 *)(puVar11 + -8) = 0x1802f152e;
      uVar8 = FUN_1802816b0(puVar11 + 0x48,param_1,uVar1);
      if (param_1 < 1) {
        *(undefined8 *)(puVar11 + -8) = 0x1802f1546;
        FUN_180024b50(local_140,uVar8);
      }
      else {
        local_a8 = 0;
        uStack_a0 = 0;
        local_98 = 0;
        uStack_90 = 0;
        local_88 = 0;
        uStack_80 = 0;
        local_78 = 0;
        uStack_70 = 0;
        local_68 = 0;
        uStack_60 = 0;
        local_58 = 0;
        uStack_50 = 0;
        *(undefined4 *)(puVar11 + 0x30) = 0x800000;
        *(undefined4 *)(puVar11 + 0x28) = uVar1;
        *(int *)(puVar11 + 0x20) = param_1;
        *(undefined8 *)(puVar11 + -8) = 0x1802f1593;
        snprintf(&local_a8,0x60,"%s%d|%d|%08x|0|-|-|",&DAT_1806f1fc8);
        *(undefined8 *)(puVar11 + -8) = 0x1802f15a3;
        FUN_180066a20(local_140,&local_a8,uVar8);
      }
      *(undefined8 *)(puVar11 + -8) = 0x1802f15ae;
      local_120 = FUN_180280fe0(param_1,uVar1);
      local_11c = puVar11[0x40];
      *(undefined8 *)(puVar11 + -8) = 0x1802f15c8;
      FUN_180281250(&local_118,param_1,uVar1);
      *(undefined8 *)(puVar11 + -8) = 0x1802f15d8;
      FUN_180281480(&local_f8,param_1,uVar1);
      local_d8 = 0;
      uStack_c8 = 0;
      local_c0 = 0;
      local_b8 = 0xf;
      local_d0 = 0;
      lVar7 = *(longlong *)(param_4 + 8);
      if (lVar7 == *(longlong *)(param_4 + 0x10)) {
        *(undefined8 *)(puVar11 + -8) = 0x1802f1625;
        FUN_180354000(param_4,lVar7,puVar11 + 0x70);
      }
      else {
        *(undefined8 *)(puVar11 + -8) = 0x1802f160b;
        FUN_18034fd60(lVar7,puVar11 + 0x70);
        *(longlong *)(param_4 + 8) = *(longlong *)(param_4 + 8) + 0xb8;
      }
      *(undefined8 *)(puVar11 + -8) = 0x1802f162f;
      FUN_18000f890(&local_d0);
      *(undefined8 *)(puVar11 + -8) = 0x1802f1638;
      FUN_18000f890(&local_f8);
      *(undefined8 *)(puVar11 + -8) = 0x1802f1641;
      FUN_18000f890(&local_118);
      *(undefined8 *)(puVar11 + -8) = 0x1802f164a;
      FUN_18000f890(local_140);
      *(undefined8 *)(puVar11 + -8) = 0x1802f1654;
      FUN_18000f890(puVar11 + 0x78);
      *(undefined8 *)(puVar11 + -8) = 0x1802f165f;
      FUN_18000f890(puVar11 + 0x48);
    }
LAB_1802f165f:
    puVar12 = puVar12 + 1;
  } while( true );
}



/* ===== 1802f16a0 FUN_1802f16a0 ===== */

void FUN_1802f16a0(longlong param_1)

{
  FUN_18000f890(param_1 + 0x98);
  FUN_18000f890(param_1 + 0x70);
  FUN_18000f890(param_1 + 0x50);
  FUN_18000f890(param_1 + 0x28);
  FUN_18000f890(param_1 + 8);
  return;
}



/* ===== 1802f16e0 FUN_1802f16e0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802f16e0(void)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 *puVar3;
  char cVar4;
  int iVar5;
  int *piVar6;
  longlong *plVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int *piVar11;
  undefined8 uVar12;
  undefined4 *puVar13;
  ulonglong *puVar14;
  size_t sVar15;
  undefined8 *puVar16;
  undefined8 ******ppppppuVar17;
  longlong lVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  undefined4 *puVar21;
  undefined4 *puVar22;
  undefined1 *puVar23;
  undefined1 *puVar24;
  undefined1 *puVar25;
  undefined1 *puVar26;
  undefined1 *puVar27;
  undefined1 *puVar28;
  bool bVar29;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar30;
  undefined8 uStack_3b0;
  undefined1 auStack_3a8 [8];
  undefined1 auStack_3a0 [24];
  ulonglong local_388 [8];
  undefined4 local_348;
  undefined4 local_344;
  undefined1 local_340 [32];
  undefined8 local_320;
  undefined8 uStack_318;
  undefined8 local_310;
  undefined8 local_308;
  undefined4 local_300;
  undefined1 local_2fc;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined1 local_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined8 *local_288;
  undefined8 *puStack_280;
  undefined8 local_278;
  ulonglong uStack_270;
  ulonglong local_268;
  ulonglong uStack_260;
  ulonglong local_258;
  ulonglong uStack_250;
  undefined8 ******local_248 [2];
  size_t local_238;
  ulonglong local_230;
  undefined4 local_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined1 local_188 [32];
  undefined1 local_168 [32];
  undefined1 local_148 [32];
  undefined1 local_128 [32];
  undefined1 local_108 [32];
  undefined1 local_e8 [32];
  undefined1 local_c8 [32];
  undefined1 local_a8 [32];
  undefined1 local_88 [32];
  undefined1 local_68 [32];
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_3a8;
  FUN_180275fe0(&DAT_180921498);
  piVar6 = (int *)FUN_18004e4f0(local_68,DAT_180cfc7e0);
  plVar7 = (longlong *)FUN_180280be0();
  uVar8 = FUN_18004e4f0(local_88,(plVar7[1] - *plVar7 >> 4) * -0x71c71c71c71c71c7);
  uVar9 = FUN_18003a390(local_a8,DAT_1809f5924);
  uVar10 = FUN_18003a390(local_c8,DAT_1809f5900);
  piVar11 = (int *)FUN_18003a390(local_e8,DAT_1809f5918);
  uVar12 = FUN_18003a390(local_108,DAT_1809f590c);
  puVar13 = (undefined4 *)FUN_1800134a0(uVar12,&DAT_1806e9100,1);
  local_1a8 = *puVar13;
  uStack_1a4 = puVar13[1];
  uStack_1a0 = puVar13[2];
  uStack_19c = puVar13[3];
  local_198 = puVar13[4];
  uStack_194 = puVar13[5];
  uStack_190 = puVar13[6];
  uStack_18c = puVar13[7];
  *(undefined8 *)(puVar13 + 4) = 0;
  *(undefined8 *)(puVar13 + 6) = 0xf;
  *(undefined1 *)puVar13 = 0;
  uVar12 = FUN_180066820(local_128,&local_1a8,piVar11);
  puVar13 = (undefined4 *)FUN_1800134a0(uVar12,&DAT_1806e9100,1);
  local_1c8 = *puVar13;
  uStack_1c4 = puVar13[1];
  uStack_1c0 = puVar13[2];
  uStack_1bc = puVar13[3];
  local_1b8 = puVar13[4];
  uStack_1b4 = puVar13[5];
  uStack_1b0 = puVar13[6];
  uStack_1ac = puVar13[7];
  *(undefined8 *)(puVar13 + 4) = 0;
  *(undefined8 *)(puVar13 + 6) = 0xf;
  *(undefined1 *)puVar13 = 0;
  uVar12 = FUN_180066820(local_148,&local_1c8,uVar10);
  puVar13 = (undefined4 *)FUN_1800134a0(uVar12,&DAT_1806e9100,1);
  local_1e8 = *puVar13;
  uStack_1e4 = puVar13[1];
  uStack_1e0 = puVar13[2];
  uStack_1dc = puVar13[3];
  local_1d8 = puVar13[4];
  uStack_1d4 = puVar13[5];
  uStack_1d0 = puVar13[6];
  uStack_1cc = puVar13[7];
  *(undefined8 *)(puVar13 + 4) = 0;
  *(undefined8 *)(puVar13 + 6) = 0xf;
  *(undefined1 *)puVar13 = 0;
  uVar12 = FUN_180066820(local_168,&local_1e8,uVar9);
  puVar14 = (ulonglong *)FUN_1800134a0(uVar12,&DAT_1806e9100,1);
  local_268 = *puVar14;
  uStack_260 = puVar14[1];
  local_258 = puVar14[2];
  uStack_250 = puVar14[3];
  puVar14[2] = 0;
  puVar14[3] = 0xf;
  *(undefined1 *)puVar14 = 0;
  sVar15 = strlen(&DAT_1809f5928);
  puVar16 = (undefined8 *)FUN_1800134a0(&local_268,&DAT_1809f5928,sVar15);
  local_288 = (undefined8 *)*puVar16;
  puStack_280 = (undefined8 *)puVar16[1];
  local_278 = puVar16[2];
  uStack_270 = puVar16[3];
  puVar16[2] = 0;
  puVar16[3] = 0xf;
  *(undefined1 *)puVar16 = 0;
  puVar13 = (undefined4 *)FUN_1800134a0(&local_288,&DAT_1806e9100,1);
  local_208 = *puVar13;
  uStack_204 = puVar13[1];
  uStack_200 = puVar13[2];
  uStack_1fc = puVar13[3];
  local_1f8 = puVar13[4];
  uStack_1f4 = puVar13[5];
  uStack_1f0 = puVar13[6];
  uStack_1ec = puVar13[7];
  *(undefined8 *)(puVar13 + 4) = 0;
  *(undefined8 *)(puVar13 + 6) = 0xf;
  *(undefined1 *)puVar13 = 0;
  uVar12 = FUN_180066820(local_188,&local_208,uVar8);
  puVar13 = (undefined4 *)FUN_1800134a0(uVar12,&DAT_1806e9100,1);
  local_228 = *puVar13;
  uStack_224 = puVar13[1];
  uStack_220 = puVar13[2];
  uStack_21c = puVar13[3];
  local_218 = puVar13[4];
  uStack_214 = puVar13[5];
  uStack_210 = puVar13[6];
  uStack_20c = puVar13[7];
  *(undefined8 *)(puVar13 + 4) = 0;
  *(undefined8 *)(puVar13 + 6) = 0xf;
  *(undefined1 *)puVar13 = 0;
  FUN_180066820(local_248,&local_228,piVar6);
  uVar20 = CONCAT44(uStack_20c,uStack_210);
  if (0xf < uVar20) {
    uVar19 = uVar20 + 1;
    lVar2 = CONCAT44(uStack_224,local_228);
    lVar18 = lVar2;
    if (uVar19 < 0x1000) {
LAB_1802f1a07:
      thunk_FUN_1803d64e0(lVar18,uVar19);
      goto LAB_1802f1a0d;
    }
    lVar18 = *(longlong *)(lVar2 + -8);
    if ((lVar2 - lVar18) - 8U < 0x20) {
      uVar19 = uVar20 + 0x28;
      goto LAB_1802f1a07;
    }
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar24 = auStack_3a0;
LAB_1802f1d1b:
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar25 = puVar24 + 8;
LAB_1802f1d22:
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar26 = puVar25 + 8;
LAB_1802f1d29:
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar27 = puVar26 + 8;
LAB_1802f1d30:
    iVar5 = 5;
    pcVar1 = (code *)swi(0x29);
    uVar30 = (*pcVar1)();
    puVar28 = puVar27 + 8;
    goto LAB_1802f1d37;
  }
LAB_1802f1a0d:
  FUN_18000f890(local_188);
  puVar24 = auStack_3a8;
  uVar20 = CONCAT44(uStack_1ec,uStack_1f0);
  if (0xf < uVar20) {
    uVar19 = uVar20 + 1;
    lVar2 = CONCAT44(uStack_204,local_208);
    lVar18 = lVar2;
    if (0xfff < uVar19) {
      lVar18 = *(longlong *)(lVar2 + -8);
      if (0x1f < (lVar2 - lVar18) - 8U) goto LAB_1802f1d1b;
      uVar19 = uVar20 + 0x28;
    }
    thunk_FUN_1803d64e0(lVar18,uVar19);
  }
  puVar25 = auStack_3a8;
  if (0xf < uStack_270) {
    uVar20 = uStack_270 + 1;
    puVar16 = local_288;
    if (0xfff < uVar20) {
      puVar16 = (undefined8 *)local_288[-1];
      if (0x1f < (ulonglong)((longlong)local_288 + (-8 - (longlong)puVar16))) goto LAB_1802f1d22;
      uVar20 = uStack_270 + 0x28;
    }
    thunk_FUN_1803d64e0(puVar16,uVar20);
  }
  puVar26 = auStack_3a8;
  local_278 = 0;
  uStack_270 = 0xf;
  local_288 = (undefined8 *)((ulonglong)local_288 & 0xffffffffffffff00);
  if (0xf < uStack_250) {
    uVar19 = uStack_250 + 1;
    uVar20 = local_268;
    if (0xfff < uVar19) {
      uVar20 = *(ulonglong *)(local_268 - 8);
      if (0x1f < (local_268 - uVar20) - 8) goto LAB_1802f1d29;
      uVar19 = uStack_250 + 0x28;
    }
    thunk_FUN_1803d64e0(uVar20,uVar19);
  }
  local_258 = 0;
  uStack_250 = 0xf;
  local_268 = local_268 & 0xffffffffffffff00;
  FUN_18000f890(local_168);
  puVar27 = auStack_3a8;
  uVar20 = CONCAT44(uStack_1cc,uStack_1d0);
  if (0xf < uVar20) {
    uVar19 = uVar20 + 1;
    lVar2 = CONCAT44(uStack_1e4,local_1e8);
    lVar18 = lVar2;
    if (0xfff < uVar19) {
      lVar18 = *(longlong *)(lVar2 + -8);
      if (0x1f < (lVar2 - lVar18) - 8U) goto LAB_1802f1d30;
      uVar19 = uVar20 + 0x28;
    }
    thunk_FUN_1803d64e0(lVar18,uVar19);
  }
  FUN_18000f890(local_148);
  FUN_18000f890(&local_1c8);
  FUN_18000f890(local_128);
  FUN_18000f890(&local_1a8);
  FUN_18000f890(local_108);
  FUN_18000f890(local_e8);
  FUN_18000f890(local_c8);
  FUN_18000f890(local_a8);
  FUN_18000f890(local_88);
  FUN_18000f890(local_68);
  puVar28 = auStack_3a8;
  puVar16 = &DAT_1809f7098;
  if (0xf < DAT_1809f70b0) {
    puVar16 = DAT_1809f7098;
  }
  ppppppuVar17 = local_248;
  if (0xf < local_230) {
    ppppppuVar17 = local_248[0];
  }
  if (local_238 == DAT_1809f70a8) {
    if (local_238 == 0) goto LAB_1802f24b7;
    iVar5 = memcmp(ppppppuVar17,puVar16,local_238);
    puVar28 = auStack_3a8;
    if (iVar5 == 0) goto LAB_1802f24b7;
  }
  ppppppuVar17 = local_248;
  if (0xf < local_230) {
    ppppppuVar17 = local_248[0];
  }
  FUN_180029840(&DAT_1809f7098,ppppppuVar17,local_238);
  if (DAT_181107808 != DAT_181107810) {
    FUN_18034e360();
    DAT_181107810 = DAT_181107808;
  }
  puVar13 = DAT_180cfc948;
  puVar28 = auStack_3a8;
  local_388[0] = 0;
  local_388[1] = 0;
  local_388[2] = 0;
  local_388[3] = 0;
  local_388[4] = 0;
  local_388[5] = 0;
  if (DAT_1809f590c == 4) {
    if (DAT_180cfc940 != DAT_180cfc948) {
      bVar29 = DAT_1809f5900 != 0;
      puVar22 = DAT_180cfc940;
      do {
        if ((puVar22[0x33] == 3 - (uint)bVar29) &&
           ((DAT_1809f5928 == '\0' ||
            (cVar4 = FUN_1802d4740(puVar22 + 10,&DAT_1809f5928), cVar4 != '\0')))) {
          local_348 = 0;
          local_344 = *puVar22;
          FUN_180024b50(local_340,puVar22 + 10);
          puVar21 = puVar22 + 0x1a;
          if (*(longlong *)(puVar22 + 0x26) != 0) {
            puVar21 = puVar22 + 0x22;
          }
          FUN_180024b50(&local_320,puVar21);
          local_300 = puVar22[0x32];
          local_2fc = 0;
          uStack_2f0 = 0;
          local_2e8 = 0;
          local_2e0 = 0xf;
          local_2f8 = 0;
          uStack_2d0 = 0;
          local_2c8 = 0;
          local_2c0 = 0xf;
          local_2d8 = 0;
          local_2b8 = 0;
          uStack_2a8 = 0;
          local_2a0 = 0;
          local_298 = 0xf;
          local_2b0 = 0;
          if (local_388[1] == local_388[2]) {
            FUN_180354000(local_388,local_388[1],&local_348);
          }
          else {
            FUN_18034fd60(local_388[1],&local_348);
            local_388[1] = local_388[1] + 0xb8;
          }
          FUN_18000f890(&local_2b0);
          FUN_18000f890(&local_2d8);
          FUN_18000f890(&local_2f8);
          FUN_18000f890(&local_320);
          FUN_18000f890(local_340);
        }
        puVar22 = puVar22 + 0x3e;
      } while (puVar22 != puVar13);
    }
    FUN_180275ef0(&local_288);
    puVar3 = puStack_280;
    for (puVar16 = local_288; puVar16 != puVar3; puVar16 = puVar16 + 1) {
      puVar13 = (undefined4 *)*puVar16;
      if ((DAT_1809f5928 == '\0') ||
         (cVar4 = FUN_1802d4740(puVar13 + 10,&DAT_1809f5928), cVar4 != '\0')) {
        local_348 = 0;
        local_344 = *puVar13;
        FUN_180024b50(local_340,puVar13 + 10);
        uStack_318 = 0;
        local_310 = 0;
        local_308 = 0xf;
        local_320 = 0;
        local_300 = puVar13[0x32];
        local_2fc = 0;
        uStack_2f0 = 0;
        local_2e8 = 0;
        local_2e0 = 0xf;
        local_2f8 = 0;
        uStack_2d0 = 0;
        local_2c8 = 0;
        local_2c0 = 0xf;
        local_2d8 = 0;
        local_2b8 = 1;
        FUN_180024b50(&local_2b0,puVar13 + 0x36);
        if (local_388[1] == local_388[2]) {
          FUN_180354000(local_388,local_388[1],&local_348);
        }
        else {
          FUN_18034fd60(local_388[1],&local_348);
          local_388[1] = local_388[1] + 0xb8;
        }
        FUN_18000f890(&local_2b0);
        FUN_18000f890(&local_2d8);
        FUN_18000f890(&local_2f8);
        FUN_18000f890(&local_320);
        FUN_18000f890(local_340);
      }
    }
    FUN_1800132b0(&local_288);
  }
  else if (DAT_1809f590c == 5) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 8
                 ) < DAT_181116328) && (FUN_1804ed1b0(&DAT_181116328), DAT_181116328 == -1)) {
      FUN_1804ece40(&LAB_180567ed0);
      _Init_thread_footer(&DAT_181116328);
    }
    puVar16 = &DAT_181116148;
    if (DAT_180ccfeda != '\0') {
      puVar16 = &DAT_180cfc910;
    }
    puVar13 = (undefined4 *)*puVar16;
    puVar22 = DAT_181116150;
    if (DAT_180ccfeda != '\0') {
      puVar22 = DAT_180cfc918;
    }
    for (; puVar28 = auStack_3a8, puVar13 != puVar22; puVar13 = puVar13 + 0x26) {
      if ((DAT_1809f5928 == '\0') ||
         (cVar4 = FUN_1802d4740(puVar13 + 10,&DAT_1809f5928), cVar4 != '\0')) {
        local_348 = 0;
        local_344 = *puVar13;
        FUN_180024b50(local_340,puVar13 + 10);
        FUN_180024b50(&local_320,puVar13 + 0x12);
        local_300 = 3;
        local_2fc = 0;
        uStack_2f0 = 0;
        local_2e8 = 0;
        local_2e0 = 0xf;
        local_2f8 = 0;
        uStack_2d0 = 0;
        local_2c8 = 0;
        local_2c0 = 0xf;
        local_2d8 = 0;
        local_2b8 = 0;
        uStack_2a8 = 0;
        local_2a0 = 0;
        local_298 = 0xf;
        local_2b0 = 0;
        if (local_388[1] == local_388[2]) {
          FUN_180354000(local_388,local_388[1],&local_348);
        }
        else {
          FUN_18034fd60(local_388[1],&local_348);
          local_388[1] = local_388[1] + 0xb8;
        }
        FUN_18000f890(&local_2b0);
        FUN_18000f890(&local_2d8);
        FUN_18000f890(&local_2f8);
        FUN_18000f890(&local_320);
        FUN_18000f890(local_340);
      }
    }
  }
  else if (DAT_1809f590c == 6) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 8
                 ) < DAT_18111632c) && (FUN_1804ed1b0(&DAT_18111632c), DAT_18111632c == -1)) {
      FUN_1804ece40(&LAB_180567ee0);
      _Init_thread_footer(&DAT_18111632c);
    }
    puVar16 = &DAT_181116130;
    if (DAT_180ccfeda != '\0') {
      puVar16 = &DAT_180cfc970;
    }
    puVar13 = (undefined4 *)*puVar16;
    puVar22 = DAT_181116138;
    if (DAT_180ccfeda != '\0') {
      puVar22 = DAT_180cfc978;
    }
    for (; puVar28 = auStack_3a8, puVar13 != puVar22; puVar13 = puVar13 + 0x1c) {
      if ((DAT_1809f5928 == '\0') ||
         (cVar4 = FUN_1802d4740(puVar13 + 10,&DAT_1809f5928), cVar4 != '\0')) {
        local_348 = 0;
        local_344 = *puVar13;
        FUN_180024b50(local_340,puVar13 + 10);
        FUN_180024b50(&local_320,puVar13 + 0x12);
        local_300 = puVar13[0x1a];
        local_2fc = 0;
        uStack_2f0 = 0;
        local_2e8 = 0;
        local_2e0 = 0xf;
        local_2f8 = 0;
        uStack_2d0 = 0;
        local_2c8 = 0;
        local_2c0 = 0xf;
        local_2d8 = 0;
        local_2b8 = 0;
        uStack_2a8 = 0;
        local_2a0 = 0;
        local_298 = 0xf;
        local_2b0 = 0;
        if (local_388[1] == local_388[2]) {
          FUN_180354000(local_388,local_388[1],&local_348);
        }
        else {
          FUN_18034fd60(local_388[1],&local_348);
          local_388[1] = local_388[1] + 0xb8;
        }
        FUN_18000f890(&local_2b0);
        FUN_18000f890(&local_2d8);
        FUN_18000f890(&local_2f8);
        FUN_18000f890(&local_320);
        FUN_18000f890(local_340);
      }
    }
  }
  else {
    uVar8 = (ulonglong)DAT_1809f5918;
    uVar10 = (ulonglong)(DAT_1809f590c == 2);
    uVar9 = (ulonglong)(DAT_1809f590c == 1);
    if (DAT_1809f5918 != 0) {
      FUN_1802f11e0(uVar8,0,DAT_1809f590c != 2,local_388);
    }
    puVar28 = auStack_3a8;
    if (DAT_1809f5928 != '\0') {
      puVar16 = (undefined8 *)FUN_180280be0();
      puVar28 = auStack_3a8;
      piVar6 = (int *)puVar16[1];
      piVar11 = (int *)*puVar16;
      puVar23 = auStack_3a8;
      uVar30 = extraout_XMM0_Da;
      if (piVar11 != piVar6) {
        do {
          iVar5 = *piVar11;
          puVar28 = puVar23;
          if (((iVar5 != (int)uVar8) && (((char)uVar9 == '\0' || (piVar11[0x12] == 2)))) &&
             (((char)uVar10 == '\0' || (piVar11[0x12] == 3)))) {
            if ((char)uVar9 == '\0' && (char)uVar10 == '\0') {
              if (piVar11[0x12] == 1) goto LAB_1802f1d4c;
            }
            else {
LAB_1802f1d37:
              if (((iVar5 != 0x2a) && (iVar5 != 0x3b)) && (1 < iVar5 - 0x13a4U)) {
LAB_1802f1d4c:
                *(undefined8 *)(puVar28 + -8) = 0x1802f1d5b;
                uVar30 = FUN_1802f11e0(uVar30,1,0,puVar28 + 0x38);
              }
            }
          }
          piVar11 = piVar11 + 0x24;
          puVar23 = puVar28;
        } while (piVar11 != piVar6);
      }
    }
  }
  *(undefined8 *)(puVar28 + -8) = 0x1802f2334;
  FUN_1802f0f50(puVar28 + 0x20);
  *(undefined8 *)(puVar28 + -8) = 0x1802f233e;
  FUN_1802f0f50(puVar28 + 0x38);
  if (DAT_181107808 != 0) {
    *(undefined8 *)(puVar28 + -8) = 0x1802f2360;
    FUN_18034e360(DAT_181107808,DAT_181107810);
    lVar18 = DAT_181107808;
    if ((0xfff < (ulonglong)((DAT_181107818 - DAT_181107808 >> 3) * 8)) &&
       (lVar18 = *(longlong *)(DAT_181107808 + -8), 0x1f < (DAT_181107808 - lVar18) - 8U)) {
      lVar18 = 5;
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(5);
      puVar28 = puVar28 + 8;
    }
    *(undefined8 *)(puVar28 + -8) = 0x1802f23b2;
    thunk_FUN_1803d64e0(lVar18);
  }
  DAT_181107808 = *(longlong *)(puVar28 + 0x20);
  DAT_181107810 = *(longlong *)(puVar28 + 0x28);
  DAT_181107818 = *(longlong *)(puVar28 + 0x30);
  *(undefined8 *)(puVar28 + 0x20) = 0;
  *(undefined8 *)(puVar28 + 0x28) = 0;
  *(undefined8 *)(puVar28 + 0x30) = 0;
  *(undefined8 *)(puVar28 + -8) = 0x1802f23fe;
  FUN_18034b7a0(0,DAT_181107810,*(longlong *)(puVar28 + 0x38),
                (*(longlong *)(puVar28 + 0x40) - *(longlong *)(puVar28 + 0x38) >> 3) *
                -0x2c8590b21642c859);
  *(undefined8 *)(puVar28 + -8) = 0x1802f2409;
  FUN_18034fb60(puVar28 + 0x38);
  uVar20 = *(ulonglong *)(puVar28 + 0x20);
  if (uVar20 != 0) {
    uVar8 = *(ulonglong *)(puVar28 + 0x28);
    if (uVar20 != uVar8) {
      do {
        *(undefined8 *)(puVar28 + -8) = 0x1802f242e;
        FUN_18000f890(uVar20 + 0x98);
        *(undefined8 *)(puVar28 + -8) = 0x1802f2437;
        FUN_18000f890(uVar20 + 0x70);
        *(undefined8 *)(puVar28 + -8) = 0x1802f2440;
        FUN_18000f890(uVar20 + 0x50);
        *(undefined8 *)(puVar28 + -8) = 0x1802f2449;
        FUN_18000f890(uVar20 + 0x28);
        *(undefined8 *)(puVar28 + -8) = 0x1802f2452;
        FUN_18000f890(uVar20 + 8);
        uVar20 = uVar20 + 0xb8;
      } while (uVar20 != uVar8);
      uVar20 = *(ulonglong *)(puVar28 + 0x20);
    }
    uVar8 = uVar20;
    if (0xfff < (ulonglong)(((longlong)(*(longlong *)(puVar28 + 0x30) - uVar20) >> 3) * 8)) {
      uVar8 = *(ulonglong *)(uVar20 - 8);
      uVar20 = (uVar20 - uVar8) - 8;
      if (0x1f < uVar20) {
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        puVar28 = puVar28 + 8;
        uVar8 = uVar20;
      }
    }
    *(undefined8 *)(puVar28 + -8) = 0x1802f24a9;
    thunk_FUN_1803d64e0(uVar8);
    *(undefined8 *)(puVar28 + 0x20) = 0;
    *(undefined8 *)(puVar28 + 0x28) = 0;
    *(undefined8 *)(puVar28 + 0x30) = 0;
  }
LAB_1802f24b7:
  *(undefined8 *)(puVar28 + -8) = 0x1802f24c0;
  FUN_18000f890(local_248);
  *(undefined8 *)(puVar28 + -8) = 0x1802f24cf;
  return;
}



/* ===== 1802f24f0 FUN_1802f24f0 ===== */

undefined1 * FUN_1802f24f0(int *param_1)

{
  char *pcVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  int *piVar7;
  longlong lVar8;
  char *pcVar9;
  longlong lVar10;
  undefined1 *puVar11;
  int iVar12;
  int *piVar13;
  longlong *plVar14;
  int iVar15;
  ulonglong uVar16;
  bool bVar17;
  
  iVar12 = DAT_1809f5900;
  uVar6 = DAT_1809f177c;
  if (DAT_1809f590c == 4) {
    iVar12 = param_1[0x24];
    bVar17 = DAT_1809f5900 != 0;
    piVar7 = &DAT_1809214ac;
    puVar11 = &DAT_1809214b4;
    if (bVar17) {
      piVar7 = &DAT_1809214b0;
    }
    *piVar7 = param_1[1];
    if (bVar17) {
      puVar11 = &DAT_1809215b8;
    }
    if ((char)iVar12 == '\0') {
      *puVar11 = 0;
      return &DAT_1809215b8;
    }
    FUN_180540170(puVar11,0,0x104);
    plVar14 = (longlong *)(param_1 + 0x26);
    uVar16 = 0x103;
    if (*(ulonglong *)(param_1 + 0x2a) < 0x103) {
      uVar16 = *(ulonglong *)(param_1 + 0x2a);
    }
    if (0xf < *(ulonglong *)(param_1 + 0x2c)) {
      plVar14 = (longlong *)*plVar14;
    }
    puVar11 = (undefined1 *)FUN_180540530(puVar11,plVar14,uVar16);
    return puVar11;
  }
  if (DAT_1809f590c == 5) {
    DAT_1809216e4 = param_1[1];
    puVar11 = (undefined1 *)(ulonglong)DAT_1809216e4;
    if (DAT_181107418 != 0) {
      DAT_181107418 = param_1[1];
      LOCK();
      DAT_1809f177c = param_1[1];
      UNLOCK();
      return (undefined1 *)(ulonglong)uVar6;
    }
  }
  else {
    if (DAT_1809f590c == 6) {
      DAT_1809216e8 = param_1[1];
      return (undefined1 *)(ulonglong)(uint)param_1[1];
    }
    if (DAT_1809f590c - 1U < 2) {
      iVar15 = DAT_1809f5914;
      if (DAT_1809f5910 != 0) {
        iVar15 = DAT_1809f5910;
      }
    }
    else if ((DAT_1809f590c == 0) || (DAT_1809f590c == 3)) {
      iVar15 = DAT_1809f5910;
    }
    else {
      iVar15 = 0;
    }
    if (DAT_1809f590c - 1U < 2) {
      if (*param_1 == iVar15) {
        if (DAT_1809f5910 == 0) {
          if (DAT_1809f590c == 1) {
            if (DAT_1809214a4 < 0) {
              DAT_1809214a4 = DAT_18092149c;
            }
            piVar13 = &DAT_1809214a4;
            piVar7 = &DAT_18092149c;
          }
          else {
            if (DAT_1809214a8 < 0) {
              DAT_1809214a8 = DAT_1809214a0;
            }
            piVar13 = &DAT_1809214a8;
            piVar7 = &DAT_1809214a0;
          }
          if (DAT_1809f5900 != 0) {
            piVar7 = piVar13;
          }
          DAT_1809f5910 = iVar15;
          *piVar7 = iVar15;
        }
      }
      else {
        if (DAT_1809f590c == 1) {
          if (DAT_1809214a4 < 0) {
            DAT_1809214a4 = DAT_18092149c;
          }
          piVar13 = &DAT_1809214a4;
          piVar7 = &DAT_18092149c;
        }
        else {
          if (DAT_1809214a8 < 0) {
            DAT_1809214a8 = DAT_1809214a0;
          }
          piVar13 = &DAT_1809214a8;
          piVar7 = &DAT_1809214a0;
        }
        if (DAT_1809f5900 != 0) {
          piVar7 = piVar13;
        }
        *piVar7 = *param_1;
        DAT_1809f5910 = *param_1;
        DAT_1809f5918 = *param_1;
        iVar15 = *param_1;
      }
    }
    lVar8 = FUN_1800f1190(iVar15,iVar12);
    puVar11 = (undefined1 *)0x0;
    if (lVar8 != 0) {
      *(int *)(lVar8 + 8) = param_1[1];
      *(undefined1 *)(lVar8 + 0x5c) = 0;
      pcVar9 = (char *)FUN_18027f930();
      if ((*pcVar9 != '\0') && (iVar12 = 0, 0 < *(int *)(pcVar9 + 0x88))) {
        do {
          if (7 < iVar12) break;
          lVar10 = (longlong)iVar12;
          iVar12 = iVar12 + 1;
          pcVar1 = pcVar9 + lVar10 * 0x10 + 8;
          uVar3 = *(undefined4 *)(pcVar1 + 4);
          uVar4 = *(undefined4 *)(pcVar1 + 8);
          uVar5 = *(undefined4 *)(pcVar1 + 0xc);
          puVar2 = (undefined4 *)(lVar8 + 0x60 + lVar10 * 0x10);
          *puVar2 = *(undefined4 *)pcVar1;
          puVar2[1] = uVar3;
          puVar2[2] = uVar4;
          puVar2[3] = uVar5;
        } while (iVar12 < *(int *)(pcVar9 + 0x88));
      }
      puVar11 = (undefined1 *)FUN_1802dd4a0(DAT_1809f590c,iVar15);
    }
  }
  return puVar11;
}



/* ===== 1802f2780 FUN_1802f2780 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802f2780(longlong *param_1)

{
  longlong lVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 ****ppppuVar6;
  longlong *plVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 *puVar10;
  undefined1 auStack_d8 [8];
  undefined1 auStack_d0 [24];
  undefined8 ****local_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  ulonglong local_a0;
  ulonglong local_98;
  undefined8 local_90;
  undefined8 local_88;
  ulonglong local_80;
  undefined8 ****local_78;
  undefined8 uStack_70;
  longlong local_68;
  ulonglong local_60;
  undefined8 ****local_58 [3];
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStack_d8;
  lVar3 = *param_1;
  if (*(longlong *)(lVar3 + 0x60) == 0) {
    plVar7 = (longlong *)0x0;
  }
  else {
    plVar7 = (longlong *)(lVar3 + 0x50);
    if (0xf < *(ulonglong *)(lVar3 + 0x68)) {
      plVar7 = (longlong *)*plVar7;
    }
  }
  FUN_1802d6630(lVar3 + 0x70,lVar3 + 8,*(undefined4 *)(lVar3 + 0x48),plVar7);
  if (((char)((int *)*param_1)[0x13] == '\0') || (*(int *)*param_1 == 0)) {
    lVar3 = 0;
  }
  else {
    lVar3 = FUN_180280c60();
  }
  if ((DAT_1809f590c - 4U < 3) || (*(int *)(*param_1 + 4) == 0)) {
    lVar4 = 0;
  }
  else {
    lVar4 = FUN_180280d30();
  }
  uStack_70 = 0;
  local_68 = 0;
  local_60 = 0xf;
  local_78 = (undefined8 ****)0x0;
  uStack_b0 = 0;
  local_a8 = 0;
  local_a0 = 0xf;
  local_b8 = (undefined8 ****)0x0;
  if (lVar4 != 0) {
    FUN_1802e0420(lVar4 + 0x78,&local_78,&local_b8);
  }
  puVar10 = auStack_d8;
  if ((((lVar3 != 0) || (local_68 != 0)) || (local_a8 != 0)) ||
     (*(longlong *)(*param_1 + 0xa8) != 0)) {
    FUN_1802e0770();
    if (*(longlong *)(*param_1 + 0xa8) != 0) {
      FUN_180414bb0(&DAT_180760774,"Directory");
      FUN_1803ec6c0(0,DAT_1808acda0);
      lVar4 = DAT_181107a18;
      if ((DAT_181107a18 == 0) && (lVar4 = DAT_181107a08, DAT_181107a08 == 0)) {
        lVar4 = *(longlong *)(DAT_180ca0a50 + 0x11f0);
      }
      local_98 = *(ulonglong *)(DAT_180ca0a50 + 0x11f0);
      local_90 = CONCAT44(*(undefined4 *)(DAT_180ca0a50 + 0x1200),
                          *(undefined4 *)(DAT_180ca0a50 + 0x1204));
      FUN_1803f6200(DAT_180ca0a50 + 0x1fe0,&local_98);
      FUN_1803e8680(lVar4,DAT_1808ac930,0);
      FUN_1803d8730(0,DAT_180960ec8);
      plVar7 = (longlong *)(*param_1 + 0x98);
      if (0xf < *(ulonglong *)(*param_1 + 0xb0)) {
        plVar7 = (longlong *)*plVar7;
      }
      FUN_180414bb0(&DAT_1806d3198,plVar7);
      FUN_1803d87f0(1);
      lVar4 = DAT_180ca0a50;
      if (*(int *)(DAT_180ca0a50 + 0x1fe0) < 1) {
        FUN_1803ebc00("Calling PopFont() too many times!");
      }
      else {
        lVar5 = (longlong)*(int *)(DAT_180ca0a50 + 0x1fe0) + -1;
        lVar1 = *(longlong *)(DAT_180ca0a50 + 0x1fe8);
        FUN_1803e8680(*(undefined8 *)(lVar1 + lVar5 * 0x10),
                      *(undefined4 *)(lVar1 + 8 + lVar5 * 0x10),
                      *(undefined4 *)(lVar1 + 0xc + lVar5 * 0x10));
        *(int *)(lVar4 + 0x1fe0) = *(int *)(lVar4 + 0x1fe0) + -1;
      }
    }
    if (lVar3 == 0) {
LAB_1802f2a61:
      puVar10 = auStack_d8;
      if ((local_68 != 0) || (local_a8 != 0)) {
        lVar3 = *(longlong *)(DAT_180ca0a50 + 0x14f8);
        FUN_1803e7a50((*(float *)(lVar3 + 0x118) - *(float *)(lVar3 + 0x28)) +
                      *(float *)(lVar3 + 0x98) + DAT_1808acbb4);
        FUN_1803d8730(0,(int)(longlong)
                             ((float)(DAT_180960ec8 >> 0x18) * DAT_1808ac2b4 + DAT_1808ac1f4) <<
                        0x18 | DAT_180960ec8 & 0xffffff);
        if (local_68 != 0) {
          ppppuVar6 = &local_78;
          if (0xf < local_60) {
            ppppuVar6 = local_78;
          }
          FUN_180414db0(&DAT_1806d3198,ppppuVar6);
        }
        if (local_a8 != 0) {
          ppppuVar6 = &local_b8;
          if (0xf < local_a0) {
            ppppuVar6 = local_b8;
          }
          FUN_180414db0(&DAT_1806d3198,ppppuVar6);
        }
        FUN_1803d87f0(1);
        puVar10 = auStack_d8;
        uVar8 = *(ulonglong *)(DAT_180ca0a50 + 0x14f8);
        lVar3 = (longlong)*(int *)(uVar8 + 0x208);
        if (0 < *(int *)(uVar8 + 0x208)) goto LAB_1802f2b58;
        FUN_1803ebc00("Calling PopTextWrapPos() too many times!");
        puVar10 = auStack_d8;
      }
    }
    else {
      local_88 = 8;
      local_80 = 0xf;
      local_98._0_1_ = s_Weapon__180760768[0];
      local_98._1_1_ = s_Weapon__180760768[1];
      local_98._2_1_ = s_Weapon__180760768[2];
      local_98._3_1_ = s_Weapon__180760768[3];
      local_98._4_1_ = s_Weapon__180760768[4];
      local_98._5_1_ = s_Weapon__180760768[5];
      local_98._6_1_ = s_Weapon__180760768[6];
      local_98._7_1_ = s_Weapon__180760768[7];
      local_90 = 0;
      lVar3 = lVar3 + 0x28;
      FUN_1800667a0(local_58,&local_98);
      if (local_80 < 0x10) {
LAB_1802f2a28:
        local_88 = 0;
        local_80 = 0xf;
        local_98 = local_98 & 0xffffffffffffff00;
        ppppuVar6 = local_58;
        if (0xf < local_40) {
          ppppuVar6 = local_58[0];
        }
        FUN_180414370(ppppuVar6,0,1);
        FUN_18000f890(local_58);
        goto LAB_1802f2a61;
      }
      uVar8 = local_80 + 1;
      uVar9 = local_98;
      if (uVar8 < 0x1000) {
LAB_1802f2a23:
        thunk_FUN_1803d64e0(uVar9,uVar8);
        goto LAB_1802f2a28;
      }
      uVar9 = *(ulonglong *)(local_98 - 8);
      if ((local_98 - uVar9) - 8 < 0x20) {
        uVar8 = local_80 + 0x28;
        goto LAB_1802f2a23;
      }
      pcVar2 = (code *)swi(0x29);
      (*pcVar2)(5);
      puVar10 = auStack_d0;
LAB_1802f2b58:
      *(undefined4 *)(uVar8 + 0x1f0) =
           *(undefined4 *)(*(longlong *)(uVar8 + 0x210) + -4 + lVar3 * 4);
      *(int *)(uVar8 + 0x208) = (int)lVar3 + -1;
    }
  }
  if (0xf < local_a0) {
    uVar9 = local_a0 + 1;
    ppppuVar6 = local_b8;
    if (0xfff < uVar9) {
      ppppuVar6 = (undefined8 ****)local_b8[-1];
      if (0x1f < (ulonglong)((longlong)local_b8 + (-8 - (longlong)ppppuVar6))) {
        pcVar2 = (code *)swi(0x29);
        (*pcVar2)(5);
        goto LAB_1802f2c15;
      }
      uVar9 = local_a0 + 0x28;
    }
    *(undefined8 *)(puVar10 + -8) = 0x1802f2bab;
    thunk_FUN_1803d64e0(ppppuVar6,uVar9);
  }
  local_a8 = 0;
  local_a0 = 0xf;
  local_b8 = (undefined8 ****)((ulonglong)local_b8 & 0xffffffffffffff00);
  if (0xf < local_60) {
    uVar9 = local_60 + 1;
    ppppuVar6 = local_78;
    if (0xfff < uVar9) {
      ppppuVar6 = (undefined8 ****)local_78[-1];
      if (0x1f < (ulonglong)((longlong)local_78 + (-8 - (longlong)ppppuVar6))) {
LAB_1802f2c15:
        pcVar2 = (code *)swi(0x29);
        (*pcVar2)(5);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar9 = local_60 + 0x28;
    }
    *(undefined8 *)(puVar10 + -8) = 0x1802f2bf6;
    thunk_FUN_1803d64e0(ppppuVar6,uVar9);
  }
  *(undefined8 *)(puVar10 + -8) = 0x1802f2c02;
  return;
}



/* ===== 1802f2c20 FUN_1802f2c20 ===== */

void FUN_1802f2c20(int param_1)

{
  uint uVar1;
  float fVar2;
  bool bVar3;
  bool bVar4;
  byte bVar5;
  char cVar6;
  undefined1 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  int *piVar10;
  longlong *plVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  char *pcVar15;
  undefined1 *puVar16;
  longlong lVar17;
  uint uVar18;
  ulonglong uVar19;
  int *piVar20;
  undefined4 uVar21;
  float fVar22;
  undefined8 uVar23;
  float fVar24;
  undefined8 local_res10;
  uint local_res18;
  int *local_res20;
  undefined8 in_stack_ffffffffffffff18;
  undefined4 uVar26;
  int **ppiVar25;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  
  uVar26 = (undefined4)((ulonglong)in_stack_ffffffffffffff18 >> 0x20);
  FUN_1802f16e0();
  pcVar15 = "inv_grid_scroll";
  bVar5 = 0x69;
  uVar19 = 0xffffffff;
  do {
    pcVar15 = pcVar15 + 1;
    if (((bVar5 == 0x23) && (*pcVar15 == 0x23)) && (pcVar15[1] == 0x23)) {
      uVar19 = 0xffffffff;
      pcVar15 = pcVar15 + 2;
    }
    else {
      uVar19 = (ulonglong)
               ((uint)(uVar19 >> 8) ^
               *(uint *)(&DAT_1806c25c0 + (uVar19 & 0xff ^ (ulonglong)bVar5) * 4));
    }
    bVar5 = *pcVar15;
  } while (bVar5 != 0);
  uVar18 = ~(uint)uVar19;
  uVar19 = (((((ulonglong)(uVar18 & 0xff) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
             (ulonglong)(uVar18 >> 8 & 0xff)) * 0x100000001b3 ^ (ulonglong)(uVar18 >> 0x10 & 0xff))
            * 0x100000001b3 ^ (ulonglong)(uVar18 >> 0x18)) * 0x100000001b3 & DAT_1811077a0;
  lVar9 = *(longlong *)(DAT_181107788 + 8 + uVar19 * 0x10);
  if (lVar9 == DAT_181107778) {
LAB_1802f2d19:
    lVar9 = DAT_181107778;
  }
  else {
    uVar1 = *(uint *)(lVar9 + 0x10);
    while (uVar18 != uVar1) {
      if (lVar9 == *(longlong *)(DAT_181107788 + uVar19 * 0x10)) goto LAB_1802f2d19;
      lVar9 = *(longlong *)(lVar9 + 8);
      uVar1 = *(uint *)(lVar9 + 0x10);
    }
    if (lVar9 == 0) goto LAB_1802f2d19;
  }
  if (lVar9 == DAT_181107778) {
    uVar23 = 0;
  }
  else {
    uVar23 = *(undefined8 *)(lVar9 + 0x18);
  }
  local_res18 = uVar18;
  FUN_1802b6190(uVar18,uVar23);
  local_res10 = 0;
  FUN_1803d89a0(2,&local_res10);
  lVar9 = DAT_180ca0a50;
  local_res10 = 0xbf800000bf800000;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  uVar8 = FUN_1803e8900(*(undefined8 *)(lVar9 + 0x14f8),"##inv_grid");
  uVar23 = CONCAT44(uVar26,0x98);
  cVar6 = FUN_1803e1800("##inv_grid",uVar8,&local_res10,0,uVar23);
  uVar26 = (undefined4)((ulonglong)uVar23 >> 0x20);
  FUN_1803d8a40(1);
  if (cVar6 == '\0') goto LAB_1802f34f8;
  FUN_1802b6490(uVar18,0,0,0);
  if ((DAT_1809f5968 != '\0') && (*(char *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xd3) != '\0'))
  {
    FUN_1802b6d40(uVar18);
  }
  local_res10 = 0x40a0000040a00000;
  FUN_1803d89a0(0xe,&local_res10);
  lVar17 = DAT_180ca0a50;
  lVar9 = *(longlong *)(DAT_180ca0a50 + 0x14f8);
  if ((*(longlong *)(lVar9 + 0x1c8) != 0) ||
     (lVar13 = 0x280, *(longlong *)(DAT_180ca0a50 + 0x2360) != 0)) {
    lVar13 = 0x250;
  }
  uVar21 = FUN_18053f0d0(((*(float *)(lVar9 + lVar13) - *(float *)(lVar9 + 0x118)) -
                         (float)(param_1 + -1) * DAT_1808ac750) / (float)param_1);
  uVar8 = DAT_1808acb08;
  iVar14 = 0;
  bVar3 = false;
  bVar4 = false;
  uVar19 = 0;
  if ((DAT_181107810 - DAT_181107808 >> 3) * -0x2c8590b21642c859 != 0) {
LAB_1802f2f20:
    piVar20 = (int *)(uVar19 * 0xb8 + DAT_181107808);
    if (((char)piVar20[0x13] == '\0') || (bVar3)) {
      if (iVar14 != 0) {
        FUN_1803ec6c0(0);
      }
    }
    else {
      iVar14 = 0;
      bVar3 = true;
      lVar9 = DAT_181107a18;
      if ((DAT_181107a18 == 0) && (lVar9 = DAT_181107a08, DAT_181107a08 == 0)) {
        lVar9 = *(longlong *)(lVar17 + 0x11f0);
      }
      local_a0 = *(undefined4 *)(lVar17 + 0x1204);
      local_9c = *(undefined4 *)(lVar17 + 0x1200);
      local_a8 = *(undefined8 *)(lVar17 + 0x11f0);
      FUN_1803f6200(lVar17 + 0x1fe0,&local_a8);
      FUN_1803e8680(lVar9);
      FUN_180414370("From Other Weapons",0,1);
      lVar9 = DAT_180ca0a50;
      if (*(int *)(DAT_180ca0a50 + 0x1fe0) < 1) {
        FUN_1803ebc00("Calling PopFont() too many times!");
      }
      else {
        FUN_1803e8680(*(undefined8 *)
                       (*(longlong *)(DAT_180ca0a50 + 0x1fe8) + -0x10 +
                       (longlong)*(int *)(DAT_180ca0a50 + 0x1fe0) * 0x10));
        *(int *)(lVar9 + 0x1fe0) = *(int *)(lVar9 + 0x1fe0) + -1;
      }
    }
    FUN_1803e8a70(*piVar20);
    FUN_1803e8a70(piVar20[1]);
    if (DAT_1809f590c == 4) {
      if ((char)piVar20[0x24] == '\0') {
        cVar6 = DAT_1809215b8;
        if (DAT_1809f5900 == 0) {
          cVar6 = DAT_1809214b4;
        }
        if (cVar6 == '\0') {
          iVar12 = DAT_1809214b0;
          if (DAT_1809f5900 == 0) {
            iVar12 = DAT_1809214ac;
          }
          if (iVar12 == piVar20[1]) {
            cVar6 = '\x01';
            goto LAB_1802f3193;
          }
        }
LAB_1802f3190:
        cVar6 = '\0';
      }
      else {
        puVar16 = &DAT_1809214b4;
        if (DAT_1809f5900 != 0) {
          puVar16 = &DAT_1809215b8;
        }
        cVar6 = FUN_180023400(piVar20 + 0x26,puVar16);
      }
    }
    else if (DAT_1809f590c == 5) {
      cVar6 = DAT_1809216e4 == piVar20[1];
    }
    else if (DAT_1809f590c == 6) {
      cVar6 = DAT_1809216e8 == piVar20[1];
    }
    else {
      if (DAT_1809f590c - 1U < 2) {
        iVar12 = DAT_1809f5914;
        if (DAT_1809f5910 != 0) {
          iVar12 = DAT_1809f5910;
        }
      }
      else if ((DAT_1809f590c == 0) || (DAT_1809f590c == 3)) {
        iVar12 = DAT_1809f5910;
      }
      else {
        iVar12 = 0;
      }
      if (((DAT_1809f590c - 1U < 2) && (*piVar20 != iVar12)) ||
         ((1 < DAT_1809f590c - 1U && ((char)piVar20[0x13] != '\0')))) goto LAB_1802f3190;
      if (0 < iVar12) {
        piVar10 = &DAT_18092174c;
        do {
          if ((*piVar10 == iVar12) && (piVar10[1] == DAT_1809f5900)) goto LAB_1802f30fa;
          piVar10 = piVar10 + 0x68;
        } while (piVar10 != &DAT_180931b4c);
        piVar10 = &DAT_18092174c;
        do {
          if ((*piVar10 == iVar12) && (piVar10[1] < 0)) goto LAB_1802f30fa;
          piVar10 = piVar10 + 0x68;
        } while (piVar10 != &DAT_180931b4c);
      }
      cVar6 = piVar20[1] == 0;
    }
    goto LAB_1802f3193;
  }
LAB_1802f3427:
  DAT_1809f5968 = '\0';
  uVar23 = FUN_1803d8a40(1);
  local_res10 = CONCAT44(local_res10._4_4_,uVar18);
  plVar11 = (longlong *)FUN_18034ee00(uVar23,&local_a8,&local_res10);
  lVar9 = *plVar11;
  if (((*(char *)(lVar9 + 0x5a) != '\0') && (*(longlong *)(lVar9 + 0x18) != 0)) &&
     (*(char *)(lVar9 + 0x6f) != '\0')) {
    FUN_1803fe590(*(undefined8 *)(*(longlong *)(lVar9 + 0x18) + 0x2c8),lVar9 + 0x5c,lVar9 + 100,
                  *(undefined4 *)(lVar9 + 0x6c),CONCAT44(uVar26,DAT_1808ac658),0);
  }
  lVar9 = DAT_180ca0a50;
  uVar26 = DAT_1809f5a4c;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  lVar9 = *(longlong *)(*(longlong *)(lVar9 + 0x14f8) + 0x2c8);
  FUN_1802b3c30(lVar9,0,*(undefined4 *)(lVar9 + 0x20),uVar26);
LAB_1802f34f8:
  FUN_1803e1bc0();
  return;
LAB_1802f30fa:
  cVar6 = piVar10[2] == piVar20[1];
LAB_1802f3193:
  plVar11 = (longlong *)(piVar20 + 2);
  if (0xf < *(ulonglong *)(piVar20 + 8)) {
    plVar11 = (longlong *)*plVar11;
  }
  pcVar15 = (char *)FUN_1802d4d40(&local_res10,"##entry",plVar11,piVar20[0x12],piVar20 + 10,
                                  0xffffffff,0,CONCAT44(uVar8,uVar21),cVar6,0);
  if (*pcVar15 != '\0') {
    FUN_1802f24f0(piVar20);
  }
  local_b8 = *(undefined8 *)(DAT_180ca0a50 + 0x1efc);
  local_b0 = *(undefined8 *)(DAT_180ca0a50 + 0x1ef4);
  local_res20 = piVar20;
  uVar7 = FUN_1803dd930(0);
  pcVar15 = "##entry_tip";
  bVar5 = 0x23;
  uVar18 = ~*(uint *)(DAT_180ca0a50 + 0x1ee8);
  do {
    pcVar15 = pcVar15 + 1;
    if (((bVar5 == 0x23) && (*pcVar15 == 0x23)) && (pcVar15[1] == 0x23)) {
      pcVar15 = pcVar15 + 2;
      uVar18 = ~*(uint *)(DAT_180ca0a50 + 0x1ee8);
    }
    else {
      uVar18 = uVar18 >> 8 ^
               *(uint *)(&DAT_1806c25c0 + ((ulonglong)(uVar18 & 0xff) ^ (ulonglong)bVar5) * 4);
    }
    bVar5 = *pcVar15;
  } while (bVar5 != 0);
  ppiVar25 = &local_res20;
  FUN_180346330(~uVar18,uVar7,&local_b0,&local_b8,ppiVar25);
  lVar17 = DAT_180ca0a50;
  uVar26 = (undefined4)((ulonglong)ppiVar25 >> 0x20);
  if (((cVar6 != '\0') && (DAT_1809f5968 != '\0')) && (!bVar4)) {
    lVar9 = *(longlong *)(DAT_180ca0a50 + 0x14f8);
    bVar4 = true;
    fVar2 = *(float *)(lVar9 + 0x5c);
    fVar24 = fVar2;
    if (fVar2 <= *(float *)(DAT_180ca0a50 + 0xcf0)) {
      fVar24 = *(float *)(DAT_180ca0a50 + 0xcf0);
    }
    *(undefined4 *)(lVar9 + 0xb4) = 0;
    fVar22 = *(float *)(lVar9 + 0x124) - fVar24;
    *(float *)(lVar9 + 0xac) =
         (float)(int)(((((((*(float *)(lVar9 + 0x124) + *(float *)(lVar9 + 0x14c) + fVar24) - fVar22
                          ) * 0.0 + fVar22) - *(float *)(lVar9 + 0x2c)) - *(float *)(lVar9 + 0x74))
                      - *(float *)(lVar9 + 0x84)) + *(float *)(lVar9 + 0x9c));
    fVar22 = 0.0;
    if (0.0 <= fVar2 - fVar24) {
      fVar22 = fVar2 - fVar24;
    }
    *(float *)(lVar9 + 0xbc) = fVar22;
  }
  iVar12 = *(int *)(*(longlong *)(lVar17 + 0x14f8) + 0x108);
  if (iVar12 < 2) {
    FUN_1803ebc00("Calling PopID() too many times!");
    lVar17 = DAT_180ca0a50;
  }
  else {
    *(int *)(*(longlong *)(lVar17 + 0x14f8) + 0x108) = iVar12 + -1;
  }
  iVar12 = *(int *)(*(longlong *)(lVar17 + 0x14f8) + 0x108);
  if (iVar12 < 2) {
    FUN_1803ebc00("Calling PopID() too many times!");
    lVar17 = DAT_180ca0a50;
  }
  else {
    *(int *)(*(longlong *)(lVar17 + 0x14f8) + 0x108) = iVar12 + -1;
  }
  iVar14 = (iVar14 + 1) % param_1;
  uVar19 = uVar19 + 1;
  if ((ulonglong)((DAT_181107810 - DAT_181107808 >> 3) * -0x2c8590b21642c859) <= uVar19)
  goto code_r0x0001802f3409;
  goto LAB_1802f2f20;
code_r0x0001802f3409:
  uVar18 = local_res18;
  goto LAB_1802f3427;
}



/* ===== 1802f3520 FUN_1802f3520 ===== */

void FUN_1802f3520(undefined8 param_1,longlong param_2,ulonglong param_3,undefined1 *param_4)

{
  ulonglong uVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  undefined1 *puVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong local_res18;
  undefined1 *local_res20;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [24];
  longlong *local_68;
  longlong *plStack_60;
  longlong *local_58;
  
  puVar13 = auStack_88;
  local_68 = (longlong *)0x0;
  plStack_60 = (longlong *)0x0;
  local_58 = (longlong *)0x0;
  uVar16 = 0;
  puVar14 = auStack_88;
  local_res18 = param_3;
  local_res20 = param_4;
  if (param_3 != 0) {
    do {
      lVar6 = FUN_1802d48a0(*(undefined8 *)(param_2 + uVar16 * 8));
      plVar12 = plStack_60;
      if (lVar6 != 0) {
        if (plStack_60 == local_58) {
          uVar15 = (longlong)plStack_60 - (longlong)local_68;
          lVar7 = (longlong)uVar15 >> 3;
          if (lVar7 == 0x1fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
            FUN_1800118d0();
          }
          uVar1 = lVar7 + 1;
          uVar9 = (longlong)local_58 - (longlong)local_68 >> 3;
          if (0x1fffffffffffffff - (uVar9 >> 1) < uVar9) {
            uVar10 = 0x1fffffffffffffff;
          }
          else {
            uVar9 = (uVar9 >> 1) + uVar9;
            uVar10 = uVar1;
            if (uVar1 <= uVar9) {
              uVar10 = uVar9;
            }
            if (0x1fffffffffffffff < uVar10) {
                    /* WARNING: Subroutine does not return */
              FUN_18000d840();
            }
          }
          plVar8 = (longlong *)FUN_18000fb70(uVar10 * 8);
          uVar15 = uVar15 & 0xfffffffffffffff8;
          *(longlong *)((longlong)plVar8 + uVar15) = lVar6;
          if (plVar12 == plStack_60) {
            lVar6 = (longlong)plStack_60 - (longlong)local_68;
            plVar11 = plVar8;
            plVar12 = local_68;
          }
          else {
            FUN_180540530(plVar8,local_68,(longlong)plVar12 - (longlong)local_68);
            lVar6 = (longlong)plStack_60 - (longlong)plVar12;
            plVar11 = (longlong *)(uVar15 + 8 + (longlong)plVar8);
          }
          FUN_180540530(plVar11,plVar12,lVar6);
          if (local_68 != (longlong *)0x0) {
            uVar15 = ((longlong)local_58 - (longlong)local_68 >> 3) * 8;
            if (uVar15 < 0x1000) {
              plVar12 = local_68;
            }
            else {
              if ((undefined1 *)0x1f < (undefined1 *)((longlong)local_68 + (-8 - local_68[-1]))) {
                pcVar4 = (code *)swi(0x29);
                (*pcVar4)(5);
                puVar13 = auStack_80;
                break;
              }
              uVar15 = uVar15 + 0x27;
              plVar12 = (longlong *)local_68[-1];
            }
            thunk_FUN_1803d64e0(plVar12,uVar15);
          }
          plStack_60 = plVar8 + uVar1;
          local_58 = plVar8 + uVar10;
          local_68 = plVar8;
        }
        else {
          *plStack_60 = lVar6;
          plStack_60 = plStack_60 + 1;
        }
      }
      uVar16 = uVar16 + 1;
    } while (uVar16 < local_res18);
    puVar14 = puVar13;
    if (local_68 != plStack_60) {
      *(undefined8 *)(puVar13 + -8) = 0x1802f36da;
      FUN_1802e9350(param_1);
      plVar8 = plStack_60;
      puVar5 = local_res20;
      for (plVar12 = local_68; plVar12 != plVar8; plVar12 = plVar12 + 1) {
        piVar3 = (int *)*plVar12;
        local_res18 = local_res18 & 0xffffffffffffff00;
        *(undefined8 *)(puVar13 + -8) = 0x1802f36ff;
        FUN_1803e89e0(param_1);
        iVar2 = *piVar3;
        *(undefined8 *)(puVar13 + -8) = 0x1802f3716;
        FUN_1802e8ff0(piVar3,iVar2 == DAT_1809f5918,&local_res18);
        iVar2 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
        if (iVar2 < 2) {
          *(undefined8 *)(puVar13 + -8) = 0x1802f373b;
          FUN_1803ebc00("Calling PopID() too many times!");
        }
        else {
          *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar2 + -1;
        }
        if ((char)local_res18 != '\0') {
          DAT_1809f5918 = *piVar3;
          DAT_1809f5968 = 1;
          *puVar5 = 1;
        }
      }
    }
  }
  if (local_68 == (longlong *)0x0) {
    return;
  }
  plVar12 = local_68;
  if ((0xfff < (ulonglong)(((longlong)local_58 - (longlong)local_68 >> 3) * 8)) &&
     (plVar12 = (longlong *)local_68[-1],
     (undefined1 *)0x1f < (undefined1 *)((longlong)local_68 + (-8 - (longlong)plVar12)))) {
    plVar12 = (longlong *)&DAT_00000005;
    pcVar4 = (code *)swi(0x29);
    (*pcVar4)(5);
    puVar14 = puVar14 + 8;
  }
  *(undefined8 *)(puVar14 + -8) = 0x1802f37b5;
  thunk_FUN_1803d64e0(plVar12);
  return;
}



/* ===== 1802f37e0 FUN_1802f37e0 ===== */

void FUN_1802f37e0(float param_1)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  int *piVar4;
  undefined8 *puVar5;
  undefined **ppuVar6;
  bool bVar7;
  undefined4 uVar8;
  float fVar9;
  char local_res8 [8];
  float local_res10;
  float local_res14;
  undefined8 local_res18;
  
  lVar3 = FUN_180280c60(DAT_1809f5918);
  local_res18 = *(undefined8 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x118);
  fVar9 = *(float *)(DAT_180ca0a50 + 0xce0) + *(float *)(DAT_180ca0a50 + 0xce0) +
          *(float *)(DAT_180ca0a50 + 0x1200);
  local_res10 = param_1;
  local_res14 = fVar9;
  uVar8 = FUN_1803e89e0("##chooser");
  if (lVar3 == 0) {
    puVar5 = (undefined8 *)&DAT_18058b643;
  }
  else {
    puVar5 = (undefined8 *)(lVar3 + 0x28);
    if (0xf < *(ulonglong *)(lVar3 + 0x40)) {
      puVar5 = (undefined8 *)*puVar5;
    }
  }
  cVar2 = FUN_1802b8490(uVar8,puVar5,&local_res18,&local_res10);
  if (cVar2 != '\0') {
    FUN_1802b4d80("##list");
  }
  local_res10 = 300.0;
  local_res14 = fVar9;
  cVar2 = FUN_1802b8820(&local_res18,&local_res10);
  if (cVar2 != '\0') {
    local_res8[0] = '\0';
    piVar4 = (int *)FUN_180280c60(DAT_1809f5914);
    if (piVar4 != (int *)0x0) {
      FUN_1802e9350("Current");
      local_res10 = (float)((uint)local_res10 & 0xffffff00);
      FUN_1803e89e0("current");
      FUN_1802e8ff0(piVar4,*piVar4 == DAT_1809f5918,&local_res10);
      iVar1 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
      if (iVar1 < 2) {
        FUN_1803ebc00("Calling PopID() too many times!");
      }
      else {
        *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar1 + -1;
      }
      if (local_res10._0_1_ != '\0') {
        DAT_1809f5918 = *piVar4;
        local_res8[0] = '\x01';
      }
    }
    ppuVar6 = &PTR_s_weapon_glock_1806a0a08;
    bVar7 = DAT_1809f5900 == 0;
    if (DAT_1809f5900 == 0) {
      ppuVar6 = &PTR_s_weapon_hkp2000_1806a0a60;
    }
    FUN_1802f3520("Pistols",ppuVar6,8 - (ulonglong)(DAT_1809f5900 != 0),local_res8);
    ppuVar6 = &PTR_s_weapon_galilar_180658c00;
    if (bVar7) {
      ppuVar6 = &PTR_s_weapon_famas_1806a0ac8;
    }
    FUN_1802f3520("Rifles",ppuVar6,bVar7 | 6,local_res8);
    ppuVar6 = &PTR_s_weapon_sawedoff_180659460;
    if (bVar7) {
      ppuVar6 = &PTR_s_weapon_mag7_180659500;
    }
    FUN_1802f3520("Mid-Tier",ppuVar6,0xb,local_res8);
    if (local_res8[0] != '\0') {
      FUN_1803ee1f0();
    }
    FUN_1802b5590();
  }
  lVar3 = DAT_180ca0a50;
  iVar1 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
  if (iVar1 < 2) {
    FUN_1803ebc00("Calling PopID() too many times!");
    lVar3 = DAT_180ca0a50;
  }
  else {
    *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar1 + -1;
  }
  *(undefined1 *)(*(longlong *)(lVar3 + 0x14f8) + 0xce) = 1;
  lVar3 = *(longlong *)(lVar3 + 0x14f8);
  local_res10 = 0.0;
  *(float *)(lVar3 + 0x118) = (float)local_res18 + param_1;
  *(float *)(lVar3 + 0x11c) = local_res18._4_4_ + 0.0;
  *(undefined1 *)(lVar3 + 0x159) = 1;
  local_res14 = fVar9;
  FUN_1804174f0(&local_res10);
  return;
}



/* ===== 1802f3a90 FUN_1802f3a90 ===== */

void FUN_1802f3a90(float param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  int local_res8 [2];
  undefined8 local_res10;
  float local_res18;
  float local_res1c;
  char *local_48 [8];
  
  local_48[0] = "Rarity";
  piVar3 = local_res8;
  local_48[1] = "Newest";
  local_res10 = CONCAT44(local_res10._4_4_,2);
  local_48[2] = "Name";
  if (-1 < DAT_1809f5924) {
    piVar3 = &DAT_1809f5924;
  }
  local_res8[0] = 0;
  local_res18 = param_1;
  piVar2 = (int *)&local_res10;
  if (DAT_1809f5924 < 3) {
    piVar2 = piVar3;
  }
  DAT_1809f5924 = *piVar2;
  local_res10 = *(undefined8 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x118);
  fVar9 = *(float *)(DAT_180ca0a50 + 0xce0) + *(float *)(DAT_180ca0a50 + 0xce0) +
          *(float *)(DAT_180ca0a50 + 0x1200);
  local_res1c = fVar9;
  uVar7 = FUN_1803e89e0("##sort");
  cVar1 = FUN_1802b8490(uVar7,local_48[DAT_1809f5924],&local_res10,&local_res18);
  if (cVar1 != '\0') {
    FUN_1802b4d80("##list");
  }
  cVar1 = FUN_1802b8820(&local_res10,&local_res18);
  if (cVar1 != '\0') {
    uVar6 = 0;
    do {
      iVar5 = (int)uVar6;
      cVar1 = FUN_1802b74f0(local_48[uVar6],DAT_1809f5924 == iVar5,0,0);
      if (cVar1 != '\0') {
        DAT_1809f5924 = iVar5;
        FUN_1803ee1f0();
      }
      uVar6 = (ulonglong)(iVar5 + 1U);
    } while ((int)(iVar5 + 1U) < 3);
    FUN_1802b5590();
  }
  lVar4 = DAT_180ca0a50;
  iVar5 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
  if (iVar5 < 2) {
    FUN_1803ebc00("Calling PopID() too many times!");
    lVar4 = DAT_180ca0a50;
  }
  else {
    *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar5 + -1;
  }
  param_1 = (float)local_res10 + param_1;
  fVar8 = local_res10._4_4_ + 0.0;
  *(undefined1 *)(*(longlong *)(lVar4 + 0x14f8) + 0xce) = 1;
  lVar4 = *(longlong *)(lVar4 + 0x14f8);
  local_res10 = (ulonglong)(uint)fVar9 << 0x20;
  *(float *)(lVar4 + 0x118) = param_1;
  *(float *)(lVar4 + 0x11c) = fVar8;
  *(undefined1 *)(lVar4 + 0x159) = 1;
  FUN_1804174f0(&local_res10);
  return;
}



/* ===== 1802f3c70 FUN_1802f3c70 ===== */

void FUN_1802f3c70(void)

{
  longlong lVar1;
  undefined8 local_res8 [4];
  
  lVar1 = DAT_180ca0a50;
  local_res8[0] = 0;
  *(uint *)(DAT_180ca0a50 + 0x1eb0) = *(uint *)(DAT_180ca0a50 + 0x1eb0) | 1;
  *(undefined4 *)(lVar1 + 0x1ec8) = 0xbf800000;
  FUN_18041c570("##inv_search","Search",&DAT_1809f5928,0x40,local_res8,0,0,0);
  return;
}



/* ===== 1802f3ce0 FUN_1802f3ce0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802f3ce0(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  longlong lVar8;
  longlong lVar9;
  float fVar10;
  float fVar11;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  
  lVar3 = DAT_180ca0a50;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  lVar3 = *(longlong *)(lVar3 + 0x14f8);
  uVar1 = *(undefined4 *)(lVar3 + 0x11c);
  FUN_1802e4340(0);
  uVar2 = *(undefined4 *)(lVar3 + 0x11c);
  lVar9 = DAT_181107a08;
  if (DAT_181107a08 == 0) {
    lVar9 = *(longlong *)(DAT_180ca0a50 + 0x11f0);
  }
  local_50 = *(undefined4 *)(DAT_180ca0a50 + 0x1204);
  local_4c = *(undefined4 *)(DAT_180ca0a50 + 0x1200);
  local_58 = *(undefined8 *)(DAT_180ca0a50 + 0x11f0);
  FUN_1803f6200(DAT_180ca0a50 + 0x1fe0,&local_58);
  FUN_1803e8680(lVar9,DAT_1808ac94c,0);
  fVar11 = *(float *)(lVar3 + 0x280);
  cVar7 = FUN_1802e3fe0();
  lVar9 = DAT_180ca0a50;
  uVar6 = DAT_1808acbe4;
  uVar5 = DAT_1808ac8f0;
  if (cVar7 != '\0') {
    local_res8 = 0x41f00000;
    local_resc = 0x41cdfdf4;
    fVar10 = (fVar11 - DAT_1808acaa8) - DAT_1808ac750;
    *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
    lVar9 = *(longlong *)(lVar9 + 0x14f8);
    *(float *)(lVar9 + 0x118) = fVar10;
    *(undefined4 *)(lVar9 + 0x11c) = uVar1;
    *(undefined1 *)(lVar9 + 0x159) = 1;
    cVar7 = FUN_1802d59d0("##inv_trash","inv_trash",
                          "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 448 512\" width=\"448\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M135 18C140 7 151 0 163 0L284 0C296 0 307 7 312 18L320 32L416 32C433 32 448 47 448 64C448 82 433 96 416 96L32 96C14 96 0 82 0 64C0 47 14 32 32 32L128 32L135 18ZM32 128L416 128L416 448C416 483 387 512 352 512L96 512C60 512 32 483 32 448L32 128ZM128 192C119 192 112 200 112 208L112 432C112 441 119 448 128 448C136 448 144 441 144 432L144 208C144 200 136 192 128 192ZM224 192C215 192 208 200 208 208L208 432C208 441 215 448 224 448C232 448 240 441 240 432L240 208C240 200 232 192 224 192ZM320 192C311 192 304 200 304 208L304 432C304 441 311 448 320 448C328 448 336 441 336 432L336 208C336 200 328 192 320 192Z\"/></svg>"
                          ,uVar6,uVar5,&local_res8,0,0xff6163db);
    if (cVar7 != '\0') {
      _DAT_1809f5908 = 0x100;
    }
  }
  lVar9 = DAT_180ca0a50;
  uVar6 = DAT_1808acbd8;
  fVar11 = fVar11 - DAT_1808ac9e4;
  local_res8 = 0x41f00000;
  local_resc = 0x41cdfdf4;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  lVar9 = *(longlong *)(lVar9 + 0x14f8);
  *(float *)(lVar9 + 0x118) = fVar11;
  *(undefined4 *)(lVar9 + 0x11c) = uVar1;
  *(undefined1 *)(lVar9 + 0x159) = 1;
  cVar7 = FUN_1802d59d0("##inv_close","inv_xmark",
                        "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 384 512\" width=\"384\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M342 151C355 139 355 118 342 106C330 93 309 93 297 106L192 211L86 106C74 93 53 93 41 106C28 118 28 139 41 151L146 256L41 362C28 374 28 395 41 407C53 420 74 420 86 407L191 302L297 407C309 420 330 420 342 407C355 395 355 374 342 362L237 256L342 151L342 151Z\"/></svg>"
                        ,uVar6,uVar5,&local_res8,0,DAT_180960f38);
  lVar9 = DAT_180ca0a50;
  if (cVar7 != '\0') {
    _DAT_1809f5908 = _DAT_1809f5908 & 0xff00;
  }
  lVar8 = (longlong)*(int *)(DAT_180ca0a50 + 0x1fe0);
  if (*(int *)(DAT_180ca0a50 + 0x1fe0) < 1) {
    FUN_1803ebc00("Calling PopFont() too many times!");
  }
  else {
    lVar4 = *(longlong *)(DAT_180ca0a50 + 0x1fe8);
    FUN_1803e8680(*(undefined8 *)(lVar4 + -0x10 + lVar8 * 0x10),
                  *(undefined4 *)(lVar4 + -8 + lVar8 * 0x10),
                  *(undefined4 *)(lVar4 + -4 + lVar8 * 0x10));
    *(int *)(lVar9 + 0x1fe0) = *(int *)(lVar9 + 0x1fe0) + -1;
  }
  lVar9 = DAT_180ca0a50;
  uVar1 = *(undefined4 *)(lVar3 + 0x128);
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  lVar3 = *(longlong *)(lVar9 + 0x14f8);
  *(undefined4 *)(lVar3 + 0x118) = uVar1;
  *(undefined4 *)(lVar3 + 0x11c) = uVar2;
  *(undefined1 *)(lVar3 + 0x159) = 1;
  *(undefined1 *)(*(longlong *)(lVar9 + 0x14f8) + 0xce) = 1;
  *(float *)(*(longlong *)(lVar9 + 0x14f8) + 0x11c) =
       *(float *)(*(longlong *)(lVar9 + 0x14f8) + 0x11c) + DAT_1808ac864;
  FUN_1802e48d0(0);
  return;
}



/* ===== 1802f3ff0 FUN_1802f3ff0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802f3ff0(float *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  char cVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  float *pfVar12;
  int iVar13;
  ulonglong uVar14;
  undefined8 uVar15;
  char *pcVar16;
  float fVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined8 local_res10;
  float local_res18;
  float local_res1c;
  undefined8 local_res20;
  undefined8 in_stack_fffffffffffffee8;
  ulonglong uVar25;
  undefined8 in_stack_fffffffffffffef0;
  undefined8 uVar26;
  undefined8 local_e8;
  ulonglong local_e0;
  undefined4 local_d8;
  undefined8 local_c8;
  ulonglong uStack_c0;
  undefined4 local_b8;
  
  fVar21 = DAT_1808ac34c;
  uVar8 = (undefined4)((ulonglong)in_stack_fffffffffffffef0 >> 0x20);
  uVar9 = (undefined4)((ulonglong)in_stack_fffffffffffffee8 >> 0x20);
  pcVar16 = "inventory_view";
  bVar5 = 0x69;
  uVar14 = 0xffffffff;
  pfVar12 = param_1;
  do {
    pcVar16 = pcVar16 + 1;
    if (((bVar5 == 0x23) && (*pcVar16 == 0x23)) && (pcVar16[1] == 0x23)) {
      uVar14 = 0xffffffff;
      pcVar16 = pcVar16 + 2;
    }
    else {
      pfVar12 = (float *)(uVar14 & 0xff ^ (ulonglong)bVar5);
      uVar14 = (ulonglong)((uint)(uVar14 >> 8) ^ *(uint *)(&DAT_1806c25c0 + (longlong)pfVar12 * 4));
    }
    bVar5 = *pcVar16;
  } while (bVar5 != 0);
  if (DAT_1809f5908 == '\0') {
    fVar17 = 0.0;
  }
  else {
    fVar17 = DAT_1808ac34c;
  }
  local_res10 = CONCAT44(local_res10._4_4_,~(uint)uVar14);
  local_c8 = CONCAT44(fVar17,fVar17);
  uStack_c0 = (ulonglong)(uint)fVar17;
  local_b8 = 0xffffffff;
  FUN_18034a380(pfVar12,&local_e8,&local_res10,&local_c8);
  fVar17 = (float)FUN_1802b3660(local_e8 + 0x14,fVar17,DAT_1808ac118,0);
  lVar2 = DAT_180ca0a50;
  if ((DAT_1809f5908 != '\0') || (0.0 < fVar17)) {
    fVar24 = *param_1 + _DAT_1808acc18;
    fVar17 = DAT_1811074e8 * fVar17;
    local_res20 = CONCAT44(DAT_1809f3bd8 - fVar21,0x441d4000);
    fVar23 = (DAT_1809f3bd8 - fVar21) + param_1[1];
    DAT_1809f5a4c = fVar17;
    *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
    lVar2 = *(longlong *)(lVar2 + 0x14f8);
    *(undefined8 *)(lVar2 + 0x118) = *(undefined8 *)param_1;
    *(undefined1 *)(lVar2 + 0x159) = 1;
    local_res10 = 0x4120000041200000;
    local_res18 = fVar24;
    local_res1c = fVar23;
    FUN_1803d89a0(2,&local_res10);
    lVar2 = DAT_180ca0a50;
    *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
    uVar7 = FUN_1803e8900(*(undefined8 *)(lVar2 + 0x14f8),"##inventory_view");
    cVar6 = FUN_1803e1800("##inventory_view",uVar7,&local_res20,2,CONCAT44(uVar9,0x98));
    FUN_1803d8a40(1);
    lVar2 = DAT_180ca0a50;
    if (cVar6 != '\0') {
      *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
      lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0x14f8) + 0x2c8);
      uVar14 = *(ulonglong *)(**(longlong **)(lVar2 + 0x2058) + 0x10);
      fVar22 = (float)(uVar14 >> 0x20);
      FUN_1803fc200(lVar3,param_1,&local_res18,0);
      if (DAT_180cd0fd8 == '\0') {
        fVar20 = fVar21;
      }
      else {
        fVar20 = DAT_1809f7440;
      }
      uVar10 = FUN_180368270(lVar3,param_1,&local_res18,fVar20);
      uVar25 = _UNK_1808adde8;
      lVar2 = _DAT_1808adde0;
      uVar15 = 0;
      if (((uVar10 != 0) && (0.0 < (float)uVar14)) && (0.0 < fVar22)) {
        auVar18._8_8_ = 0;
        auVar18._0_8_ = *(ulonglong *)param_1;
        auVar19._8_8_ = 0;
        auVar19._0_8_ = uVar14;
        auVar19 = divps(auVar18,auVar19);
        puVar11 = &local_res10;
        local_e8 = 0;
        local_res20 = auVar19._0_8_;
        local_res10 = CONCAT44(fVar23 / fVar22,fVar24 / (float)uVar14);
        local_c8 = _DAT_1808adde0;
        uStack_c0 = _UNK_1808adde8;
        local_e0 = uVar10;
        FUN_18036ba60(lVar3,&local_e8,param_1,&local_res18,&local_res20,puVar11,0xffffffff,&local_c8
                      ,fVar21);
        uVar8 = (undefined4)((ulonglong)puVar11 >> 0x20);
      }
      fVar23 = DAT_1808ac1f4;
      uVar26 = CONCAT44(uVar8,fVar21);
      local_c8 = lVar2;
      uStack_c0 = uVar25;
      FUN_18036b940(lVar3,param_1,&local_res18,
                    (int)(longlong)((float)(DAT_180960ee4 >> 0x18) * DAT_1808ac2b4 + DAT_1808ac1f4)
                    << 0x18 | DAT_180960ee4 & 0xffffff,&local_c8,uVar26);
      puVar11 = &local_c8;
      uVar14 = CONCAT44((int)((ulonglong)uVar26 >> 0x20),fVar21);
      local_c8 = _DAT_1808adde0;
      uStack_c0 = _UNK_1808adde8;
      FUN_18036bcb0(lVar3,param_1,&local_res18,DAT_180960eec,puVar11,uVar14,fVar21);
      uVar9 = (undefined4)((ulonglong)puVar11 >> 0x20);
      iVar1 = *(int *)(lVar3 + 0xa0);
      iVar13 = iVar1 + -1;
      *(int *)(lVar3 + 0xa0) = iVar13;
      if (iVar13 == 0) {
        puVar11 = (undefined8 *)(*(longlong *)(lVar3 + 0x38) + 0x34);
      }
      else {
        puVar11 = (undefined8 *)((longlong)(iVar1 + -2) * 0x10 + *(longlong *)(lVar3 + 0xa8));
      }
      uVar26 = puVar11[1];
      *(undefined8 *)(lVar3 + 0x60) = *puVar11;
      *(undefined8 *)(lVar3 + 0x68) = uVar26;
      FUN_1803fbff0(lVar3);
      local_res10 = 0;
      FUN_1803d89a0(0xe,&local_res10);
      FUN_1802f3ce0();
      lVar2 = DAT_180ca0a50;
      *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
      if (DAT_1809f590c == 4) {
        local_res10 = 0;
        FUN_1803d89a0(2,&local_res10);
        lVar2 = DAT_180ca0a50;
        local_res10 = 0xbf800000437a0000;
        *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
        uVar8 = FUN_1803e8900(*(undefined8 *)(lVar2 + 0x14f8),"##inv_preview");
        cVar6 = FUN_1803e1800("##inv_preview",uVar8,&local_res10,0,CONCAT44(uVar9,0x98));
        if (cVar6 != '\0') {
          FUN_1802efc30(0);
          lVar2 = DAT_180ca0a50;
          *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
          lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x14f8) + 0x2c8);
          FUN_1802b3c30(lVar2,0,*(undefined4 *)(lVar2 + 0x20),fVar17);
        }
        FUN_1803e1bc0();
        FUN_1803d8a40(1);
        FUN_1803ec6c0();
        FUN_1803ec9c0();
        local_res10 = 0x4090000040c00000;
        FUN_1803d89a0(0xb,&local_res10);
        FUN_1803d8730(0,DAT_180960ec8);
        FUN_1802f3a90();
        fVar21 = DAT_1808ac750;
        FUN_1803ec6c0();
        FUN_1802f3c70();
        FUN_1803d87f0(1);
        FUN_1803d8a40(1);
        lVar2 = DAT_180ca0a50;
        *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
        *(float *)(*(longlong *)(lVar2 + 0x14f8) + 0x11c) =
             *(float *)(*(longlong *)(lVar2 + 0x14f8) + 0x11c) + fVar21;
        FUN_1802f2c20(3);
        FUN_1803ecb10();
      }
      else {
        lVar2 = *(longlong *)(lVar2 + 0x14f8);
        uVar14 = uVar14 & 0xffffffff00000000;
        local_res1c = *(float *)(lVar2 + 0x11c);
        local_res18 = *(float *)(lVar2 + 0x28) + fVar21;
        local_res10 = CONCAT44(local_res1c + _DAT_1808acb80,
                               (*(float *)(lVar2 + 0x28) + *(float *)(lVar2 + 0x30)) - fVar21);
        local_c8 = _DAT_1808adde0;
        uStack_c0 = _UNK_1808adde8;
        puVar11 = &local_c8;
        FUN_18036b940(lVar3,&local_res18,&local_res10,
                      (int)(longlong)((float)(DAT_180960ee0 >> 0x18) * fVar23 + fVar23) << 0x18 |
                      DAT_180960ee0 & 0xffffff,puVar11,uVar14);
        uVar8 = (undefined4)((ulonglong)puVar11 >> 0x20);
        local_res10 = 0;
        FUN_1803d89a0(2,&local_res10);
        lVar4 = DAT_180ca0a50;
        local_res10 = 0x436b0000bf800000;
        *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
        uVar9 = FUN_1803e8900(*(undefined8 *)(lVar4 + 0x14f8),"##inv_preview");
        uVar25 = CONCAT44(uVar8,0x98);
        cVar6 = FUN_1803e1800("##inv_preview",uVar9,&local_res10,0,uVar25);
        if (cVar6 != '\0') {
          FUN_1802efc30(0);
          lVar4 = DAT_180ca0a50;
          *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
          lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x14f8) + 0x2c8);
          FUN_1802b3c30(lVar4,0,*(undefined4 *)(lVar4 + 0x20),fVar17);
        }
        FUN_1803e1bc0();
        FUN_1803d8a40(1);
        local_res1c = *(float *)(lVar2 + 0x11c);
        local_res18 = *(float *)(lVar2 + 0x28);
        local_res10._0_4_ = local_res18 + *(float *)(lVar2 + 0x30);
        local_res10._4_4_ = local_res1c + fVar21;
        FUN_1803fe590(lVar3,&local_res18,&local_res10,DAT_180960f48,uVar25 & 0xffffffff00000000,
                      uVar14 & 0xffffffff00000000);
        lVar2 = DAT_180ca0a50;
        *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
        fVar23 = *(float *)(*(longlong *)(lVar2 + 0x14f8) + 0x11c) + DAT_1808ac880;
        *(float *)(*(longlong *)(lVar2 + 0x14f8) + 0x11c) = fVar23;
        if ((DAT_1809f590c - 1U < 2) && (DAT_1809f5910 == 0)) {
          uVar15 = 1;
          fVar21 = DAT_1808ac254;
        }
        uVar14 = 0xffffffff;
        pcVar16 = "inv_controls_dim";
        bVar5 = 0x69;
        do {
          pcVar16 = pcVar16 + 1;
          if (((bVar5 == 0x23) && (*pcVar16 == 0x23)) && (pcVar16[1] == 0x23)) {
            uVar14 = 0xffffffff;
            pcVar16 = pcVar16 + 2;
          }
          else {
            uVar14 = (ulonglong)
                     ((uint)(uVar14 >> 8) ^
                     *(uint *)(&DAT_1806c25c0 + (uVar14 & 0xff ^ (ulonglong)bVar5) * 4));
          }
          bVar5 = *pcVar16;
        } while (bVar5 != 0);
        local_res10 = CONCAT44(local_res10._4_4_,~(uint)uVar14);
        local_e8 = CONCAT44(fVar21,fVar21);
        local_e0 = (ulonglong)(uint)fVar21;
        local_d8 = 0xffffffff;
        FUN_18034a380(fVar23,&local_c8,&local_res10,&local_e8);
        uVar8 = FUN_1802b3660(local_c8 + 0x14,fVar21,DAT_1808ac118,0);
        uVar9 = *(undefined4 *)(lVar3 + 0x20);
        local_res10 = 0x4066666740c00000;
        FUN_1803d89a0(0xb,&local_res10);
        FUN_1803d8730(0,DAT_180960ec8);
        FUN_1803e7920(uVar15);
        if (DAT_1809f590c == 0) {
          FUN_1802f37e0();
          FUN_1803ec6c0();
        }
        FUN_1802f3a90();
        FUN_1803ec6c0();
        FUN_1802f3c70();
        FUN_1803e79e0();
        FUN_1803d87f0(1);
        FUN_1803d8a40(1);
        FUN_1802b3c30(lVar3,uVar9,*(undefined4 *)(lVar3 + 0x20),uVar8);
        lVar2 = DAT_180ca0a50;
        *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
        *(float *)(*(longlong *)(lVar2 + 0x14f8) + 0x11c) =
             *(float *)(*(longlong *)(lVar2 + 0x14f8) + 0x11c) + DAT_1808ac864;
        FUN_1802f2c20(5);
      }
      FUN_1803d8a40(1);
      FUN_1802b3c30(lVar3,0,*(undefined4 *)(lVar3 + 0x20),fVar17);
    }
    FUN_1803e1bc0();
  }
  else if (((DAT_1809f5910 != 0) || (DAT_1809f5909 != '\0')) || (DAT_1809f590c != 0)) {
    if (DAT_180ccf604 != '\0') {
      FUN_18021fae0();
    }
    if (DAT_1809f5909 != '\0') {
      if (DAT_1809f590c == 4) {
        iVar13 = DAT_1809214b0;
        if (DAT_1809f5900 == 0) {
          iVar13 = DAT_1809214ac;
        }
      }
      else if (DAT_1809f590c - 1U < 2) {
        iVar13 = DAT_1809f5914;
        if (DAT_1809f5910 != 0) {
          iVar13 = DAT_1809f5910;
        }
      }
      else if ((DAT_1809f590c == 0) || (DAT_1809f590c == 3)) {
        iVar13 = DAT_1809f5910;
      }
      else {
        iVar13 = 0;
      }
      FUN_1802df000(_DAT_1809f590c & 0xffffffff,iVar13);
      DAT_1809f5909 = '\0';
    }
    DAT_1809f597c = 0xffffffff;
    _DAT_1809f590c = 0;
  }
  return;
}



/* ===== 1802f4a40 FUN_1802f4a40 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802f4a40(float param_1)

{
  byte bVar1;
  float fVar2;
  char *pcVar3;
  longlong lVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  byte *pbVar8;
  char cVar9;
  undefined1 uVar10;
  uint uVar11;
  int iVar12;
  undefined4 uVar13;
  size_t sVar14;
  undefined4 *puVar15;
  float *pfVar16;
  undefined8 uVar17;
  longlong *plVar18;
  undefined8 *puVar19;
  byte *pbVar20;
  float *pfVar21;
  ulonglong uVar22;
  byte *pbVar23;
  longlong lVar24;
  longlong lVar25;
  ulonglong uVar26;
  char *pcVar27;
  undefined1 *puVar28;
  undefined1 *puVar29;
  uint uVar30;
  int iVar31;
  char *pcVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined4 uVar36;
  float fVar37;
  float unaff_XMM7_Da;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  undefined8 uStack_2e0;
  undefined1 auStack_2d8 [8];
  undefined1 auStack_2d0 [24];
  uint local_2b8 [2];
  byte *local_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined4 local_290 [6];
  float local_278;
  undefined8 local_274;
  uint local_268 [2];
  longlong local_260;
  undefined8 local_258;
  undefined8 local_250;
  float local_248;
  undefined4 local_244;
  float *local_240;
  float *pfStack_238;
  float *local_230;
  float local_228;
  float local_224;
  float local_220;
  undefined4 local_21c;
  float local_218;
  float local_214;
  float local_210;
  undefined4 local_20c;
  uint local_208;
  undefined4 local_204;
  undefined8 local_200;
  float local_1f8;
  float local_1f4;
  float local_1f0;
  float local_1ec;
  undefined1 *local_1e8;
  undefined8 *local_1e0;
  undefined4 *local_1d8;
  undefined1 *local_1d0;
  float local_1c8 [2];
  longlong local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  ulonglong local_1a8;
  undefined8 local_1a0;
  undefined4 local_198;
  undefined4 local_194;
  float local_190;
  float local_18c;
  undefined8 local_188;
  ulonglong uStack_180;
  undefined8 local_178;
  ulonglong local_170;
  byte local_168;
  uint7 uStack_167;
  undefined8 local_160;
  undefined8 local_158;
  ulonglong local_150;
  char *local_148 [2];
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  longlong local_128;
  longlong local_120;
  char *local_108 [4];
  ulonglong local_e8;
  
  lVar25 = DAT_180ca0a50;
  puVar28 = auStack_2d8;
  puVar29 = auStack_2d8;
  local_e8 = DAT_180919500 ^ (ulonglong)auStack_2d8;
  local_248 = param_1;
  local_108[0] = 
  "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 448 512\" width=\"448\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M224 256C269 256 311 232 334 192C357 153 357 104 334 64C311 25 269 0 224 0C178 0 136 25 113 64C90 104 90 153 113 192C136 232 178 256 224 256ZM178 304C79 304 0 384 0 482C0 498 13 512 29 512L418 512C434 512 448 498 448 482C448 384 368 304 269 304L178 304Z\"/></svg>"
  ;
  local_108[1] = 
  "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 640 512\" width=\"640\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M96 128C96 83 120 41 160 18C199 -5 248 -5 288 18C327 41 352 83 352 128C352 174 327 216 288 239C248 262 199 262 160 239C120 216 95 174 95 128L96 128ZM0 482C0 384 79 304 178 304L269 304C368 304 448 384 448 482C448 498 434 512 418 512L29 512C13 512 0 498 0 482L0 482ZM472 200L616 200C629 200 640 211 640 224C640 238 629 248 616 248L472 248C458 248 448 238 448 224C448 211 458 200 472 200Z\"/></svg>"
  ;
  local_148[0] = "nl_glyph_user";
  local_148[1] = "nl_glyph_users";
  local_258 = 0x4420000043e00000;
  local_250 = *(undefined8 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x118);
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  uVar13 = DAT_1808acd08;
  fVar35 = DAT_1808ac9dc;
  fVar34 = DAT_1808ac930;
  fVar39 = DAT_1808ac7ac;
  fVar37 = DAT_1808ac2f0;
  local_260 = *(undefined8 *)(*(longlong *)(lVar25 + 0x14f8) + 0x2c8);
  local_220 = 0.0;
  local_21c = 1;
  local_240 = (float *)0x0;
  pfStack_238 = (float *)0x0;
  local_230 = (float *)0x0;
  local_244 = 0x41bda5e3;
  fVar38 = 0.0;
  pfVar16 = &local_220;
  pcVar32 = "Enemies";
  do {
    fVar2 = *pfVar16;
    pfVar21 = (float *)(ulonglong)(uint)fVar2;
    pcVar27 = "Teammates";
    if (fVar2 == 0.0) {
      pcVar27 = "Enemies";
    }
    local_188 = 0;
    uStack_180 = 0;
    local_178 = 0;
    local_170 = 0;
    sVar14 = strlen(pcVar27);
    FUN_1800133a0(&local_188,pcVar27,sVar14);
    FUN_18035eb30(&local_168,&local_188);
    if (0xf < local_170) {
      uVar22 = local_170 + 1;
      lVar25 = local_188;
      if (uVar22 < 0x1000) {
LAB_1802f4c1a:
        thunk_FUN_1803d64e0(lVar25,uVar22);
        goto LAB_1802f4c1f;
      }
      lVar25 = *(longlong *)(local_188 + -8);
      if ((local_188 - lVar25) - 8U < 0x20) {
        uVar22 = local_170 + 0x28;
        goto LAB_1802f4c1a;
      }
      pcVar5 = (code *)swi(0x29);
      (*pcVar5)(5);
      puVar28 = auStack_2d0;
LAB_1802f4efe:
      uVar22 = 5;
      pcVar5 = (code *)swi(0x29);
      (*pcVar5)();
      puVar29 = puVar28 + 8;
      goto LAB_1802f4f05;
    }
LAB_1802f4c1f:
    uVar11 = FUN_1803e8900(*(undefined8 *)(DAT_180ca0a50 + 0x14f8),"##strip_selected");
    pbVar20 = &local_168;
    if (0xf < local_150) {
      pbVar20 = (byte *)CONCAT71(uStack_167,local_168);
    }
    bVar1 = *pbVar20;
    local_268[0] = ~uVar11;
    pbVar8 = pbVar20;
    while (bVar1 != 0) {
      pbVar23 = pbVar8 + 1;
      if (((bVar1 == 0x23) && (*pbVar23 == 0x23)) && (pbVar8[2] == 0x23)) {
        pbVar23 = pbVar8 + 3;
        local_268[0] = ~uVar11;
      }
      else {
        pbVar20 = (byte *)((ulonglong)(local_268[0] & 0xff) ^ (ulonglong)bVar1);
        local_268[0] = local_268[0] >> 8 ^ *(uint *)(&DAT_1806c25c0 + (longlong)pbVar20 * 4);
      }
      pbVar8 = pbVar23;
      bVar1 = *pbVar23;
    }
    local_268[0] = ~local_268[0];
    if (DAT_1811074f8 == fVar2) {
      fVar33 = DAT_1808ac34c;
    }
    else {
      fVar33 = 0.0;
    }
    local_188 = CONCAT44(fVar33,fVar33);
    uStack_180 = (ulonglong)(uint)fVar33;
    local_178 = CONCAT44(local_178._4_4_,0xffffffff);
    FUN_18034a380(pbVar20,&local_128,local_268,&local_188);
    unaff_XMM7_Da = (float)FUN_1802b3660(local_128 + 0x14,fVar33,DAT_1808ac118,0);
    local_2b0 = &local_168;
    if (0xf < local_150) {
      local_2b0 = (byte *)CONCAT71(uStack_167,local_168);
    }
    local_290[2] = 0;
    local_298 = 0;
    local_2a0 = 0;
    local_2a8 = 0;
    local_2b8[0] = 0;
    FUN_18040a2f0(&local_274,*(undefined8 *)(DAT_180ca0a50 + 0x11f0),fVar34,uVar13);
    fVar33 = (float)FUN_18053fc00((float)local_274 + fVar37);
    uVar22 = local_150;
    uVar17 = local_158;
    fVar33 = (fVar33 + fVar39) * unaff_XMM7_Da + fVar35;
    local_1c0 = CONCAT71(uStack_167,local_168);
    uStack_1b8 = local_160;
    local_1b0 = local_158;
    local_1a8 = local_150;
    local_158 = 0;
    local_150 = 0xf;
    local_168 = 0;
    local_1a0 = 0;
    local_198 = 0x418da5e3;
    local_194 = 0x418da5e3;
    local_1c8[0] = fVar2;
    local_190 = unaff_XMM7_Da;
    local_18c = fVar33;
    if (pfStack_238 == local_230) {
      FUN_180353ce0(&local_240,pfStack_238,local_1c8);
    }
    else {
      *pfStack_238 = fVar2;
      *(longlong *)(pfStack_238 + 2) = local_1c0;
      *(undefined8 *)(pfStack_238 + 4) = local_160;
      *(undefined8 *)(pfStack_238 + 6) = uVar17;
      *(ulonglong *)(pfStack_238 + 8) = uVar22;
      local_1b0 = 0;
      local_1a8 = 0xf;
      local_1c0 = (ulonglong)uStack_167 << 8;
      pfStack_238[10] = 0.0;
      pfStack_238[0xb] = 0.0;
      pfStack_238[0xc] = 17.706;
      pfStack_238[0xd] = 17.706;
      pfStack_238[0xe] = unaff_XMM7_Da;
      pfStack_238[0xf] = fVar33;
      pfStack_238 = pfStack_238 + 0x10;
    }
    FUN_18000f890(&local_1c0);
    if (0xf < local_150) {
      uVar22 = local_150 + 1;
      lVar4 = CONCAT71(uStack_167,local_168);
      lVar25 = lVar4;
      if (0xfff < uVar22) {
        lVar25 = *(longlong *)(lVar4 + -8);
        if (0x1f < (lVar4 - lVar25) - 8U) goto LAB_1802f4efe;
        uVar22 = local_150 + 0x28;
      }
      thunk_FUN_1803d64e0(lVar25,uVar22);
    }
    fVar38 = fVar38 + fVar33;
    pfVar16 = pfVar16 + 1;
  } while (pfVar16 != &local_218);
  fVar34 = (float)FUN_18053fc00(DAT_1808ac8c0);
  fVar37 = DAT_1808ac8b0;
  fVar34 = fVar34 + DAT_1808ac8b0;
  local_228 = fVar34;
  fVar35 = (float)FUN_18053fc00(DAT_1808ac8e0);
  unaff_XMM7_Da = fVar35 + fVar37;
  uVar22 = ((longlong)pfStack_238 - (longlong)local_240 >> 6) - 1;
  pfVar21 = local_240;
  pcVar32 = (char *)pfStack_238;
  local_224 = unaff_XMM7_Da;
  if ((longlong)uVar22 < 0) {
LAB_1802f4f05:
    fVar37 = (float)uVar22;
  }
  else {
    fVar37 = (float)(longlong)uVar22;
    puVar29 = auStack_2d8;
  }
  fVar33 = local_248;
  fVar2 = DAT_1808ac750;
  fVar35 = DAT_1808ac1f4;
  fVar38 = (local_248 -
           (fVar37 * DAT_1808ac750 + fVar38 +
           fVar34 + _DAT_1808ac95c + DAT_1808ac750 + unaff_XMM7_Da)) * DAT_1808ac1f4;
  fVar37 = 0.0;
  if (0.0 <= fVar38) {
    fVar37 = fVar38;
  }
  *(undefined8 *)(puVar29 + -8) = 0x1802f4f73;
  fVar37 = (float)FUN_18053f0d0(fVar37 + (float)local_250);
  uVar13 = DAT_1808ac8d4;
  *(float *)(puVar29 + 0x60) = fVar37;
  if (pfVar21 != (float *)pcVar32) {
    fVar39 = DAT_1808ac97c;
    do {
      fVar33 = 0.0;
      fVar38 = local_250._4_4_;
      fVar40 = local_250._4_4_ + fVar39;
      fVar41 = fVar37 + pfVar21[0xf];
      fVar34 = *pfVar21;
      *(undefined8 *)(puVar29 + -8) = 0x1802f4fc0;
      FUN_1803e8a70(fVar34);
      lVar25 = DAT_180ca0a50;
      *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
      lVar25 = *(longlong *)(lVar25 + 0x14f8);
      *(float *)(lVar25 + 0x118) = fVar37;
      *(float *)(lVar25 + 0x11c) = fVar38;
      *(undefined1 *)(lVar25 + 0x159) = 1;
      local_210 = pfVar21[0xf];
      local_20c = 0x41bda5e3;
      *(undefined8 *)(puVar29 + -8) = 0x1802f5018;
      cVar9 = FUN_180415e30("##target",&local_210,0);
      if (cVar9 != '\0') {
        DAT_1811074f8 = *pfVar21;
      }
      *(undefined8 *)(puVar29 + -8) = 0x1802f502b;
      cVar9 = FUN_1803dd930(0);
      if (cVar9 != '\0') {
        fVar33 = DAT_1808ac34c;
      }
      uVar36 = *(undefined4 *)(DAT_180ca0a50 + 0x1ee8);
      *(undefined4 *)(puVar29 + 0x70) = uVar36;
      local_188 = CONCAT44(fVar33,fVar33);
      uStack_180 = (ulonglong)(uint)fVar33;
      local_178 = CONCAT44(local_178._4_4_,0xffffffff);
      *(undefined8 *)(puVar29 + -8) = 0x1802f507d;
      FUN_18034a380(uVar36,&local_1e8,puVar29 + 0x70,&local_188);
      *(undefined8 *)(puVar29 + -8) = 0x1802f5098;
      uVar36 = FUN_1802b3660(local_1e8 + 0x14,fVar33,DAT_1808ac118,0);
      iVar12 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
      if (iVar12 < 2) {
        *(undefined8 *)(puVar29 + -8) = 0x1802f50c0;
        FUN_1803ebc00("Calling PopID() too many times!");
      }
      else {
        *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar12 + -1;
      }
      *(undefined8 *)(puVar29 + -8) = 0x1802f50de;
      uVar36 = FUN_1802b38e0(DAT_180960ec0,DAT_180960ec8,uVar36);
      fVar34 = pfVar21[0xe];
      *(undefined8 *)(puVar29 + -8) = 0x1802f50f0;
      uVar11 = FUN_1802b38e0(uVar36,DAT_1809f54bc,fVar34);
      fVar33 = fVar37 + DAT_1808ac7ac;
      fVar34 = pfVar21[0xd];
      *(undefined8 *)(puVar29 + -8) = 0x1802f511c;
      fVar35 = (float)FUN_180519080((fVar39 - fVar34) * fVar35 + fVar38);
      *(undefined8 *)(puVar29 + -8) = 0x1802f5129;
      local_218 = (float)FUN_180519080(fVar33);
      local_214 = fVar35;
      plVar18 = *(longlong **)(pfVar21 + 10);
      if (plVar18 == (longlong *)0x0) {
        local_1f0 = local_218 + pfVar21[0xc];
        local_1ec = fVar34 + fVar35;
        lVar25 = (longlong)(int)*pfVar21;
        *(uint *)(puVar29 + 0x38) = uVar11;
        *(undefined4 *)(puVar29 + 0x30) = uVar13;
        *(float **)(puVar29 + 0x28) = &local_1f0;
        *(float **)(puVar29 + 0x20) = &local_218;
        uVar36 = *(undefined4 *)((longlong)&local_258 + lVar25 * 4);
        pcVar27 = local_108[lVar25];
        pcVar3 = local_148[lVar25];
        *(undefined8 *)(puVar29 + -8) = 0x1802f5220;
        FUN_1802b6f70(*(undefined8 *)(puVar29 + 0x78),pcVar3,pcVar27,uVar36);
      }
      else if (((*plVar18 != 0) && (0 < (int)plVar18[1])) && (0 < *(int *)((longlong)plVar18 + 0xc))
              ) {
        local_208 = 0x3f800000;
        local_204 = 0x3f800000;
        local_200 = 0;
        local_1f8 = local_218 + pfVar21[0xc];
        local_1f4 = fVar34 + fVar35;
        local_128 = 0;
        local_120 = *plVar18;
        *(uint *)(puVar29 + 0x30) = uVar11;
        *(uint **)(puVar29 + 0x28) = &local_208;
        *(undefined8 **)(puVar29 + 0x20) = &local_200;
        *(undefined8 *)(puVar29 + -8) = 0x1802f51c9;
        FUN_1803fea90(*(undefined8 *)(puVar29 + 0x78),&local_128,&local_218,&local_1f8);
      }
      if (pfVar21[0xe] <= DAT_1808ac000) {
        fVar35 = DAT_1808ac1f4;
      }
      else {
        lVar25 = *(longlong *)(puVar29 + 0x78);
        fVar39 = *(float *)(lVar25 + 0x60);
        if (*(float *)(lVar25 + 0x60) <= fVar37) {
          fVar39 = fVar37;
        }
        fVar37 = fVar38;
        if (fVar38 < *(float *)(lVar25 + 100)) {
          fVar37 = *(float *)(lVar25 + 100);
        }
        fVar34 = fVar41;
        if (*(float *)(lVar25 + 0x68) < fVar41) {
          fVar34 = *(float *)(lVar25 + 0x68);
        }
        if (*(float *)(lVar25 + 0x6c) < fVar40) {
          fVar40 = *(float *)(lVar25 + 0x6c);
        }
        fVar35 = fVar39;
        if (fVar39 <= fVar34) {
          fVar35 = fVar34;
        }
        fVar34 = fVar37;
        if (fVar37 <= fVar40) {
          fVar34 = fVar40;
        }
        iVar12 = *(int *)(lVar25 + 0xa4);
        if (*(int *)(lVar25 + 0xa0) == iVar12) {
          iVar31 = *(int *)(lVar25 + 0xa0) + 1;
          if (iVar12 == 0) {
            iVar12 = 8;
          }
          else {
            iVar12 = iVar12 / 2 + iVar12;
          }
          if (iVar31 < iVar12) {
            iVar31 = iVar12;
          }
          *(undefined8 *)(puVar29 + -8) = 0x1802f52cb;
          FUN_1803f7030(lVar25 + 0xa0,iVar31);
        }
        lVar24 = (longlong)*(int *)(lVar25 + 0xa0);
        lVar4 = *(longlong *)(lVar25 + 0xa8);
        *(float *)(lVar4 + lVar24 * 0x10) = fVar39;
        *(float *)(lVar4 + 4 + lVar24 * 0x10) = fVar37;
        *(float *)(lVar4 + 8 + lVar24 * 0x10) = fVar35;
        *(float *)(lVar4 + 0xc + lVar24 * 0x10) = fVar34;
        *(int *)(lVar25 + 0xa0) = *(int *)(lVar25 + 0xa0) + 1;
        *(float *)(lVar25 + 0x60) = fVar39;
        *(float *)(lVar25 + 100) = fVar37;
        *(float *)(lVar25 + 0x68) = fVar35;
        *(float *)(lVar25 + 0x6c) = fVar34;
        *(undefined8 *)(puVar29 + -8) = 0x1802f5319;
        FUN_1803fbff0(lVar25);
        fVar35 = DAT_1808ac1f4;
        pfVar16 = pfVar21 + 2;
        if (0xf < *(ulonglong *)(pfVar21 + 8)) {
          pfVar16 = *(float **)pfVar16;
        }
        uVar30 = (int)(longlong)((float)(uVar11 >> 0x18) * pfVar21[0xe] + DAT_1808ac1f4) << 0x18;
        fVar37 = pfVar21[0xc];
        *(undefined8 *)(puVar29 + -8) = 0x1802f5372;
        uVar36 = FUN_18053fc00(fVar33 + fVar37 + DAT_1808ac7ac);
        *(undefined4 *)(puVar29 + 100) = uVar36;
        *(undefined8 *)(puVar29 + -8) = 0x1802f538a;
        uVar36 = FUN_18053fc00(fVar38 + DAT_1808ac658);
        *(undefined4 *)(puVar29 + 0x68) = uVar36;
        lVar25 = DAT_181107a18;
        if ((DAT_181107a18 == 0) && (lVar25 = DAT_181107a08, DAT_181107a08 == 0)) {
          lVar25 = *(longlong *)(DAT_180ca0a50 + 0x11f0);
        }
        if (((uVar30 != 0) && (pfVar16 != (float *)0x0)) && (*(char *)pfVar16 != '\0')) {
          lVar4 = *(longlong *)(puVar29 + 0x78);
          if (lVar25 == 0) {
            lVar25 = *(longlong *)(*(longlong *)(lVar4 + 0x38) + 0x18);
          }
          local_188 = *(longlong *)(lVar4 + 0x60);
          uStack_180 = *(ulonglong *)(lVar4 + 0x68);
          *(undefined4 *)(puVar29 + 0x48) = 0;
          *(undefined4 *)(puVar29 + 0x40) = 0;
          *(undefined8 *)(puVar29 + 0x38) = 0;
          *(float **)(puVar29 + 0x30) = pfVar16;
          *(undefined8 **)(puVar29 + 0x28) = &local_188;
          *(uint *)(puVar29 + 0x20) = uVar30 | uVar11 & 0xffffff;
          *(undefined8 *)(puVar29 + -8) = 0x1802f5419;
          FUN_18040a900(lVar25,lVar4,DAT_1808ac930,puVar29 + 100);
        }
        lVar25 = *(longlong *)(puVar29 + 0x78);
        iVar12 = *(int *)(lVar25 + 0xa0);
        iVar31 = iVar12 + -1;
        *(int *)(lVar25 + 0xa0) = iVar31;
        if (iVar31 == 0) {
          puVar15 = (undefined4 *)(*(longlong *)(lVar25 + 0x38) + 0x34);
        }
        else {
          puVar15 = (undefined4 *)((longlong)(iVar12 + -2) * 0x10 + *(longlong *)(lVar25 + 0xa8));
        }
        uVar36 = puVar15[1];
        uVar6 = puVar15[2];
        uVar7 = puVar15[3];
        *(undefined4 *)(lVar25 + 0x60) = *puVar15;
        *(undefined4 *)(lVar25 + 100) = uVar36;
        *(undefined4 *)(lVar25 + 0x68) = uVar6;
        *(undefined4 *)(lVar25 + 0x6c) = uVar7;
        *(undefined8 *)(puVar29 + -8) = 0x1802f5457;
        FUN_1803fbff0();
        fVar39 = DAT_1808ac97c;
      }
      fVar37 = fVar41 + fVar2;
      *(float *)(puVar29 + 0x60) = fVar37;
      pfVar21 = pfVar21 + 0x10;
    } while (pfVar21 != (float *)pcVar32);
    unaff_XMM7_Da = local_224;
    fVar33 = local_248;
    fVar39 = DAT_1808ac7ac;
    fVar34 = local_228;
  }
  fVar37 = fVar37 + fVar2;
  *(float *)(puVar29 + 0x60) = fVar37;
  *(float *)(puVar29 + 100) = fVar37 + DAT_1808ac34c;
  *(float *)(puVar29 + 0x68) = (local_250._4_4_ + DAT_1808ac97c) - fVar39;
  local_258 = CONCAT44(local_250._4_4_ + fVar39,fVar37);
  *(undefined4 *)(puVar29 + 0x28) = 0;
  *(undefined4 *)(puVar29 + 0x20) = 0;
  *(undefined8 *)(puVar29 + -8) = 0x1802f5511;
  FUN_1803fe590(*(undefined8 *)(puVar29 + 0x78),&local_258,puVar29 + 100,DAT_180960f48);
  *(float *)(puVar29 + 0x60) = *(float *)(puVar29 + 0x60) + DAT_1808ac880;
  local_1e8 = puVar29 + 0x60;
  local_1e0 = &local_250;
  local_1d8 = &local_244;
  local_1d0 = puVar29 + 0x78;
  uVar17 = *(undefined8 *)(DAT_180ca0a50 + 0x14f8);
  *(undefined8 *)(puVar29 + -8) = 0x1802f5561;
  iVar12 = FUN_1803e8900(uVar17,"##manageels");
  if (*(int *)(DAT_180ca0a50 + 0x2030) < *(int *)(DAT_180ca0a50 + 0x2020)) {
    lVar25 = (longlong)*(int *)(DAT_180ca0a50 + 0x2030) * 0x58;
    if ((*(int *)(lVar25 + *(longlong *)(DAT_180ca0a50 + 0x2028)) != iVar12) ||
       (*(char *)(lVar25 + 0x34 + *(longlong *)(DAT_180ca0a50 + 0x2028)) != '\0'))
    goto LAB_1802f5593;
    uVar10 = 1;
  }
  else {
LAB_1802f5593:
    uVar10 = 0;
  }
  *(undefined4 *)(puVar29 + 0x38) = DAT_180960f38;
  puVar29[0x30] = uVar10;
  *(float *)(puVar29 + 0x28) = fVar34;
  *(undefined4 *)(puVar29 + 0x20) = DAT_1808acbe4;
  *(undefined8 *)(puVar29 + -8) = 0x1802f55d6;
  cVar9 = FUN_1802f5940(&local_1e8,"##customize","nl_glyph_customize",
                        "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 448 512\" width=\"448\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M0 96C0 61 28 32 64 32L384 32C419 32 448 61 448 96L448 416C448 451 419 480 384 480L64 480C28 480 0 451 0 416L0 96ZM96 288C113 288 128 274 128 256C128 239 113 224 96 224C78 224 64 239 64 256C64 274 78 288 96 288ZM128 160C128 143 113 128 96 128C78 128 64 143 64 160C64 178 78 192 96 192C113 192 128 178 128 160ZM96 384C113 384 128 370 128 352C128 335 113 320 96 320C78 320 64 335 64 352C64 370 78 384 96 384ZM192 136C178 136 168 147 168 160C168 174 178 184 192 184L352 184C365 184 376 174 376 160C376 147 365 136 352 136L192 136ZM192 232C178 232 168 243 168 256C168 270 178 280 192 280L352 280C365 280 376 270 376 256C376 243 365 232 352 232L192 232ZM192 328C178 328 168 339 168 352C168 366 178 376 192 376L352 376C365 376 376 366 376 352C376 339 365 328 352 328L192 328Z\"/></svg>"
                       );
  if (cVar9 != '\0') {
    *(undefined8 *)(puVar29 + -8) = 0x1802f55e6;
    FUN_1802b4d80("##manageels");
  }
  pcVar32 = "teammate esp";
  if (DAT_1811074f8 == 0.0) {
    pcVar32 = "enemy esp";
  }
  *(undefined8 *)(puVar29 + -8) = 0x1802f5608;
  pfVar16 = (float *)FUN_1802b3fe0(local_1c8,pcVar32);
  local_178 = 9;
  local_170 = 0xf;
  local_188._0_1_ = s_Customize_180760968[0];
  local_188._1_1_ = s_Customize_180760968[1];
  local_188._2_1_ = s_Customize_180760968[2];
  local_188._3_1_ = s_Customize_180760968[3];
  local_188._4_1_ = s_Customize_180760968[4];
  local_188._5_1_ = s_Customize_180760968[5];
  local_188._6_1_ = s_Customize_180760968[6];
  local_188._7_1_ = s_Customize_180760968[7];
  uStack_180 = (ulonglong)(byte)s_Customize_180760968[8];
  *(undefined8 *)(puVar29 + -8) = 0x1802f564d;
  uVar17 = FUN_18035eb30(&local_128,&local_188);
  *(undefined8 *)(puVar29 + -8) = 0x1802f5663;
  plVar18 = (longlong *)FUN_1800134a0(uVar17,&DAT_1806efc00,1);
  local_148[0] = (char *)*plVar18;
  local_148[1] = (char *)plVar18[1];
  local_138 = (undefined4)plVar18[2];
  uStack_134 = *(undefined4 *)((longlong)plVar18 + 0x14);
  uStack_130 = (undefined4)plVar18[3];
  uStack_12c = *(undefined4 *)((longlong)plVar18 + 0x1c);
  plVar18[2] = 0;
  plVar18[3] = 0xf;
  *(undefined1 *)plVar18 = 0;
  *(undefined8 *)(puVar29 + -8) = 0x1802f569d;
  puVar19 = (undefined8 *)FUN_180066820(local_108,local_148,pfVar16);
  if (0xf < (ulonglong)puVar19[3]) {
    puVar19 = (undefined8 *)*puVar19;
  }
  *(undefined8 *)(puVar29 + -8) = 0x1802f56b2;
  FUN_1802b6120(puVar19,0);
  *(undefined8 *)(puVar29 + -8) = 0x1802f56bf;
  FUN_18000f890(local_108);
  uVar22 = CONCAT44(uStack_12c,uStack_130);
  if (uVar22 < 0x10) {
LAB_1802f5702:
    *(undefined8 *)(puVar29 + -8) = 0x1802f570e;
    FUN_18000f890(&local_128);
    if (0xf < local_170) {
      uVar22 = local_170 + 1;
      lVar25 = local_188;
      if (0xfff < uVar22) {
        lVar25 = *(longlong *)(local_188 + -8);
        if (0x1f < (local_188 - lVar25) - 8U) goto LAB_1802f58ca;
        uVar22 = local_170 + 0x28;
      }
      *(undefined8 *)(puVar29 + -8) = 0x1802f574a;
      thunk_FUN_1803d64e0(lVar25,uVar22);
    }
    *(undefined8 *)(puVar29 + -8) = 0x1802f5754;
    FUN_18000f890(local_1c8);
    *(float *)(puVar29 + 0x60) = *(float *)(puVar29 + 0x60) + fVar34 + fVar2;
    uVar13 = DAT_180960f38;
    if (DAT_18091a1b0 != '\0') {
      uVar13 = DAT_1809f54bc;
    }
    *(undefined4 *)(puVar29 + 0x38) = uVar13;
    puVar29[0x30] = 0;
    *(float *)(puVar29 + 0x28) = unaff_XMM7_Da;
    *(undefined4 *)(puVar29 + 0x20) = DAT_1808acc00;
    *(undefined8 *)(puVar29 + -8) = 0x1802f57b9;
    cVar9 = FUN_1802f5940(&local_1e8,"##universal_scaling","nl_glyph_dpi",
                          "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 512 512\" width=\"512\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M352 0C334 0 320 15 320 32C320 50 334 64 352 64L402 64L297 170C284 182 284 203 297 215C309 228 330 228 342 215L448 110L448 160C448 178 462 192 480 192C497 192 512 178 512 160L512 32C512 15 497 0 480 0L352 0ZM214 298C202 285 181 285 169 298L64 403L64 352C64 335 49 320 32 320C14 320 0 335 0 352L0 480C0 497 14 512 32 512L160 512C177 512 192 497 192 480C192 462 177 448 160 448L109 448L214 343C227 331 227 310 214 298L214 298ZM214 298Z\"/></svg>"
                         );
    if (cVar9 != '\0') {
      DAT_18091a1b0 = DAT_18091a1b0 == '\0';
    }
    *(undefined8 *)(puVar29 + 100) = *(undefined8 *)(DAT_180ca0a50 + 0x1efc);
    local_258 = *(undefined8 *)(DAT_180ca0a50 + 0x1ef4);
    *(undefined8 *)(puVar29 + -8) = 0x1802f57f4;
    uVar10 = FUN_1803dd930(0);
    *(undefined4 *)(puVar29 + 0x28) = 0;
    *(undefined1 **)(puVar29 + 0x20) = puVar29 + 100;
    *(undefined8 *)(puVar29 + -8) = 0x1802f5819;
    FUN_1802b56a0("When disabled, ESP items are scaled individually",0,uVar10,&local_258);
    lVar25 = DAT_180ca0a50;
    *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
    lVar25 = *(longlong *)(lVar25 + 0x14f8);
    *(float *)(lVar25 + 0x118) = (float)local_250;
    *(float *)(lVar25 + 0x11c) = local_250._4_4_;
    *(undefined1 *)(lVar25 + 0x159) = 1;
    *(float *)(puVar29 + 100) = fVar33;
    *(undefined4 *)(puVar29 + 0x68) = 0x41e5a5e3;
    *(undefined8 *)(puVar29 + -8) = 0x1802f586f;
    FUN_1804174f0(puVar29 + 100);
    pfVar21 = pfStack_238;
    pfVar16 = local_240;
    if (local_240 == (float *)0x0) goto LAB_1802f58e0;
    for (; pfVar16 != pfVar21; pfVar16 = pfVar16 + 0x10) {
      *(undefined8 *)(puVar29 + -8) = 0x1802f588b;
      FUN_18000f890(pfVar16 + 2);
    }
    pfVar21 = local_240;
    if (0xfff < ((longlong)local_230 - (longlong)local_240 & 0xffffffffffffffc0U)) {
      pfVar21 = *(float **)(local_240 + -2);
      pfVar16 = (float *)((longlong)local_240 + (-8 - (longlong)pfVar21));
      if (&DAT_0000001f < pfVar16) goto LAB_1802f58d1;
    }
  }
  else {
    uVar26 = uVar22 + 1;
    pcVar32 = local_148[0];
    if (uVar26 < 0x1000) {
LAB_1802f56fc:
      *(undefined8 *)(puVar29 + -8) = 0x1802f5701;
      thunk_FUN_1803d64e0(pcVar32,uVar26);
      goto LAB_1802f5702;
    }
    pcVar32 = *(char **)(local_148[0] + -8);
    if (local_148[0] + (-8 - (longlong)pcVar32) < (char *)0x20) {
      uVar26 = uVar22 + 0x28;
      goto LAB_1802f56fc;
    }
    pcVar5 = (code *)swi(0x29);
    (*pcVar5)(5);
    puVar29 = puVar29 + 8;
LAB_1802f58ca:
    pcVar5 = (code *)swi(0x29);
    (*pcVar5)(5);
    puVar29 = puVar29 + 8;
LAB_1802f58d1:
    pcVar5 = (code *)swi(0x29);
    (*pcVar5)(5);
    puVar29 = puVar29 + 8;
    pfVar21 = pfVar16;
  }
  *(undefined8 *)(puVar29 + -8) = 0x1802f58e0;
  thunk_FUN_1803d64e0(pfVar21);
LAB_1802f58e0:
  *(undefined8 *)(puVar29 + -8) = 0x1802f58ef;
  return;
}



/* ===== 1802f5940 FUN_1802f5940 ===== */

undefined1
FUN_1802f5940(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5,float param_6,char param_7,uint param_8)

{
  float fVar1;
  float fVar2;
  int iVar3;
  longlong lVar4;
  float fVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined4 uVar8;
  float *pfVar9;
  float *pfVar10;
  undefined8 uVar11;
  float fVar12;
  float local_res8;
  float local_resc;
  undefined8 in_stack_ffffffffffffff48;
  float local_98 [4];
  undefined8 local_88 [13];
  
  lVar4 = DAT_180ca0a50;
  uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffff48 >> 0x20);
  local_res8 = param_6;
  fVar1 = *(float *)*param_1;
  fVar2 = *(float *)(param_1[1] + 4);
  local_88[0] = CONCAT44(fVar2,fVar1);
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  lVar4 = *(longlong *)(lVar4 + 0x14f8);
  *(ulonglong *)(lVar4 + 0x118) = CONCAT44(fVar2,fVar1);
  *(undefined1 *)(lVar4 + 0x159) = 1;
  local_resc = *(float *)param_1[2];
  uVar6 = FUN_180415e30(param_2,&local_res8,0);
  uVar7 = FUN_1803dd930(0);
  iVar3 = *(int *)(DAT_180ca0a50 + 0x1ee8);
  if (((*(int *)(DAT_180ca0a50 + 0x1578) == 0) || (*(int *)(DAT_180ca0a50 + 0x1578) != iVar3)) &&
     (param_7 == '\0')) {
    uVar11 = 0;
  }
  else {
    uVar11 = CONCAT71((uint7)(uint3)((uint)iVar3 >> 8),1);
  }
  fVar12 = (float)FUN_1802b3850(iVar3,uVar11,uVar7);
  fVar5 = DAT_1808ac1f4;
  local_98[2] = 1.0;
  local_98[0] = 0.0;
  local_resc = fVar2 + *(float *)param_1[2];
  local_98[1] = fVar12 * DAT_1808ac1b0 * DAT_1808ac2cc;
  local_res8 = fVar1 + param_6;
  pfVar10 = local_98;
  if (0.0 <= local_98[1]) {
    pfVar10 = local_98 + 1;
  }
  pfVar9 = local_98 + 2;
  if (local_98[1] <= DAT_1808ac34c) {
    pfVar9 = pfVar10;
  }
  FUN_1803fe590(*(undefined8 *)param_1[3],local_88,&local_res8,
                (int)(longlong)(*pfVar9 * DAT_1808acb94 + DAT_1808ac1f4) << 0x18 |
                DAT_180960f44 & 0xffffff,CONCAT44(uVar8,DAT_1808ac7ac),0);
  local_res8 = param_6 * fVar5 + fVar1;
  local_resc = *(float *)param_1[2] * fVar5 + fVar2;
  uVar8 = FUN_1802b38e0((int)(longlong)((float)(param_8 >> 0x18) * DAT_1808ac254 + fVar5) << 0x18 |
                        param_8 & 0xffffff,param_8,fVar12);
  FUN_1802b6e90(*(undefined8 *)param_1[3],param_3,param_4,param_5,&local_res8,DAT_1808ac8d4,uVar8);
  return uVar6;
}



/* ===== 1802f5be0 FUN_1802f5be0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802f5be0(longlong param_1,int param_2)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  byte bVar5;
  int iVar6;
  char *pcVar7;
  longlong lVar8;
  undefined1 auVar9 [16];
  undefined1 extraout_var [56];
  undefined1 auVar10 [64];
  undefined1 auVar11 [64];
  float fVar12;
  undefined1 auStack_158 [32];
  char *local_138;
  undefined4 local_130;
  undefined4 local_128;
  undefined1 local_124;
  undefined1 local_123;
  float local_120;
  undefined4 local_11c;
  char *local_118;
  char **local_110;
  undefined4 local_108;
  char *local_100;
  longlong *local_f8;
  undefined4 local_f0;
  char **local_e8;
  undefined4 local_e0;
  longlong local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0;
  longlong local_b8;
  char *local_b0;
  undefined1 local_a8;
  undefined8 local_a0;
  longlong local_98;
  char *local_90;
  undefined1 local_88;
  undefined8 local_80;
  char *local_78;
  char *local_70;
  char *local_68;
  char *local_60;
  char *local_58;
  char *local_50;
  char *local_48;
  undefined *local_40;
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStack_158;
  lVar8 = (longlong)param_2;
  if (param_2 - 0x1dU < 0x10) {
    lVar3 = FUN_1800aa7a0(param_1,lVar8 + -0x1d);
    if (lVar3 != 0) {
      param_1 = param_1 + (lVar8 + -0x1d) * 0x74;
      if (*(int *)(lVar3 + 0x60) != 1) {
        local_130 = 0;
        local_138 = "%d px";
        FUN_18033fa10("icon size",param_1 + 0x1244,6,0x30);
      }
      iVar1 = *(int *)(lVar3 + 0x60);
      if (iVar1 == 0) {
        pcVar7 = "small font";
      }
      else {
        pcVar7 = "label";
        if (iVar1 == 1) {
          pcVar7 = "number";
        }
      }
      FUN_1802c0a60(pcVar7,param_1 + 0x1248 + (ulonglong)(iVar1 != 0));
    }
  }
  else {
    lVar3 = lVar8 * 0x98;
    iVar1 = *(int *)(&DAT_1806a0bfc + lVar8 * 0x118);
    if (iVar1 == 0) {
      FUN_1802c0a60("background",param_1 + 0x78 + lVar3);
      FUN_1802c0a60("shadow",param_1 + 0x79 + lVar3);
      FUN_1803ec6c0();
      FUN_1802cedb0("##shadow_color",param_1 + 0x7c + lVar3,1);
      if (param_2 != 0x16) {
        FUN_1802bc470();
        local_78 = "hidden";
        local_70 = "absolute";
        local_68 = "percentage";
        FUN_1802c2640("format",param_1 + 0x8c + lVar3,&local_78,3);
      }
      if (param_2 == 0) {
        iVar1 = *(int *)(param_1 + 0x113c);
        local_78 = "he grenades";
        local_70 = "bombs";
        local_68 = "molotovs";
        local_60 = "infernos";
        local_128 = 0;
        auVar9._4_4_ = iVar1;
        auVar9._0_4_ = iVar1;
        auVar9._8_4_ = iVar1;
        auVar9._12_4_ = iVar1;
        if (DAT_1809194c8 < 5) {
          iVar6 = 0;
          do {
            lVar8 = (longlong)iVar6;
            bVar5 = (byte)iVar6;
            iVar6 = iVar6 + 1;
            *(byte *)((longlong)&local_128 + lVar8) = (byte)(iVar1 >> (bVar5 & 0x1f)) & 1;
          } while (iVar6 < 4);
        }
        else {
          auVar9 = vpsravd_avx2(auVar9,_DAT_1808ad670);
          auVar9 = pshufb(auVar9,_DAT_1808ad520);
          local_128 = auVar9._0_4_ & _DAT_1808ad890;
        }
        DAT_181106f20 =
             "Shows combined predicted health loss from the selected sources.\n- HE includes thrown HE grenades and your held HE when Grenade Trajectory or Automatic Grenade Release provides a prediction.\n- Molotovs includes thrown incendiaries; Infernos includes live fire. Contact with fire shows one second of base damage from the server settings per source, without ramp-up or duration calculations.\n- Bomb damage is shown when 5 seconds or less remain until the explosion. A contributing bomb sets the pulse speed.\n- Inherit uses the health bar color at the start of the damage segment; Custom uses two chosen pulse colors."
        ;
        cVar2 = FUN_1802c3050("expected damage",&local_78,&local_128,4);
        if (cVar2 != '\0') {
          *(uint *)(param_1 + 0x113c) =
               -(uint)(local_128._3_1_ != '\0') & 8 |
               -(uint)(local_128._2_1_ != '\0') & 4 |
               -(uint)(local_128._1_1_ != '\0') & 2 | (uint)((char)local_128 != '\0');
        }
        lVar8 = DAT_180ca0a50;
        *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
        if ((DAT_1809f5b40 == *(int *)(*(longlong *)(lVar8 + 0x14f8) + 0x10)) &&
           (DAT_1809f5b44 == *(int *)(lVar8 + 4))) {
          auVar10._16_48_ = extraout_var._8_48_;
          auVar10._0_16_ = ZEXT416((uint)DAT_1809f5b4c);
          auVar11._4_60_ = auVar10._4_60_;
          fVar12 = (float)DAT_1809f5b50 - DAT_1808ac97c;
          auVar11._0_4_ = (DAT_1809f5b4c - DAT_1808ac97c) * DAT_1808ac1f4 + DAT_1809f5b48;
          local_120 = fVar12;
          local_11c = FUN_18053f0d0(auVar11._0_8_);
          DAT_1809f5b50._0_4_ = fVar12 - DAT_1808ac7ac;
          local_58 = (char *)(param_1 + 0x1144);
          local_108 = 1;
          local_c0 = 1;
          local_50 = "pulse color";
          local_b8 = param_1 + 0x1154;
          local_48 = (char *)CONCAT71(local_48._1_7_,1);
          local_b0 = "pulse start";
          local_98 = param_1 + 0x1164;
          local_90 = "pulse peak";
          local_118 = "inherit";
          local_100 = "custom";
          local_f8 = &local_b8;
          local_e8 = &local_118;
          local_d8 = param_1 + 0x1140;
          local_40 = (undefined *)0x0;
          local_a8 = 1;
          local_a0 = 0;
          local_88 = 1;
          local_80 = 0;
          local_f0 = 2;
          local_e0 = 2;
          local_d0 = 0;
          local_c8 = 0;
          local_110 = &local_58;
          FUN_1802ce6f0("##pulse",&local_e8,&local_120);
        }
      }
    }
    else if ((iVar1 == 1) || (iVar1 == 2)) {
      local_58 = "regular";
      local_50 = "small";
      local_48 = "monospace";
      local_40 = &DAT_180760de0;
      local_78 = "default";
      local_70 = "upper";
      local_68 = "lower";
      FUN_1802c2640(&DAT_1806e4edc,param_1 + 0x90 + lVar3,&local_58,4);
      FUN_1802c2640(&DAT_180760de8,param_1 + 0x94 + lVar3,&local_78,3);
      if (param_2 == 5) {
        FUN_1802bc470();
        FUN_1802c0a60("draw avatar",param_1 + 0x1174);
      }
    }
    else if (iVar1 == 3) {
      if (param_2 == 3) {
        FUN_1802c0a60("inverted",param_1 + 0x260);
        FUN_1802cedb0("in-hand color",param_1 + 0x1198,1);
      }
    }
    else if (iVar1 == 4) {
      FUN_1802c0a60("inverted",param_1 + 0x98 + lVar3);
      FUN_1802bc470();
      local_58 = "weapon";
      local_50 = "grenades";
      local_124 = *(undefined1 *)(param_1 + 0x1180);
      local_123 = *(undefined1 *)(param_1 + 0x1181);
      cVar2 = FUN_1802c3050("selection",&local_58,&local_124,2);
      if (cVar2 != '\0') {
        *(undefined1 *)(param_1 + 0x1180) = local_124;
        *(undefined1 *)(param_1 + 0x1181) = local_123;
      }
      local_120 = (float)(uint)(*(int *)(param_1 + 0x1178) == 1);
      cVar2 = FUN_1802c2640("first row",&local_120,&local_58,2);
      if (cVar2 != '\0') {
        uVar4 = 0x100000000;
        if (local_120 == 1.4013e-45) {
          uVar4 = 1;
        }
        *(undefined8 *)(param_1 + 0x1178) = uVar4;
      }
      if (*(char *)(param_1 + 0x1180) != '\0') {
        local_78 = "on deploy";
        local_70 = "on reload";
        local_68 = "on empty clip";
        local_128 = CONCAT13(local_128._3_1_,*(undefined3 *)(param_1 + 0x1182));
        cVar2 = FUN_1802c3050("dimming",&local_78,&local_128,3);
        if (cVar2 != '\0') {
          *(char *)(param_1 + 0x1182) = (char)local_128;
          *(char *)(param_1 + 0x1183) = local_128._1_1_;
          *(char *)(param_1 + 0x1184) = local_128._2_1_;
        }
        FUN_1802c0a60("ammo clip rect",param_1 + 0x1185);
        FUN_1802c0a60("show numbers on low ammo",param_1 + 0x1186);
        if (*(char *)(param_1 + 0x1181) == '\0') {
          FUN_1802c0a60("show all grenades",param_1 + 0x1187);
        }
      }
      FUN_1802cedb0("pin pulled",param_1 + 0x1188,1);
    }
  }
  return;
}



/* ===== 1802f62d0 FUN_1802f62d0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802f62d0(undefined8 param_1,longlong param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined **ppuVar6;
  uint *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined *puVar10;
  uint *puVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  bool bVar17;
  undefined1 auStack_298 [32];
  undefined4 local_278;
  uint local_274 [7];
  uint local_258;
  longlong local_250;
  undefined8 uStack_248;
  undefined1 local_240;
  undefined4 uStack_23f;
  undefined2 uStack_23b;
  undefined1 uStack_239;
  undefined8 uStack_238;
  longlong local_230;
  uint local_228;
  uint local_21c;
  undefined8 **local_218;
  uint local_210;
  undefined4 *local_208;
  undefined1 *local_200;
  longlong *local_1f8;
  undefined1 local_1f0;
  longlong local_1e0;
  longlong local_1d8;
  longlong local_1d0;
  undefined **local_1c8;
  undefined *local_1c0;
  undefined8 *local_1b8;
  undefined8 *puStack_1b0;
  uint local_1a8 [16];
  undefined8 local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138 [4];
  ulonglong auStack_118 [28];
  
  lVar5 = DAT_180ca0a50;
  auStack_118[0x1a] = DAT_180919500 ^ (ulonglong)auStack_298;
  lVar12 = (longlong)(int)param_3;
  *(uint *)(DAT_180ca0a50 + 0x1f38) = *(uint *)(DAT_180ca0a50 + 0x1f38) | 2;
  *(undefined8 *)(lVar5 + 0x1f58) = 0x43848000;
  *(undefined4 *)(lVar5 + 8000) = 1;
  DAT_180cd04ab = 1;
  local_274[0] = 0x41200000;
  local_274[1] = 0x41200000;
  local_258 = param_3;
  local_1e0 = param_2;
  cVar3 = FUN_1802b5260(param_1,local_274);
  if (cVar3 == '\0') {
    return;
  }
  FUN_1803e8a70(param_3);
  FUN_180540170(&local_168,0,0x120);
  uVar8 = 0;
  do {
    uVar9 = uVar8 + 1;
    local_138[uVar8 * 0xc + -5] = 0;
    local_138[uVar8 * 0xc + -4] = 0;
    local_138[uVar8 * 0xc + -3] = 0;
    local_138[uVar8 * 0xc + -2] = 0;
    local_138[uVar8 * 0xc + -1] = 0;
    local_138[uVar8 * 0xc] = 0;
    local_138[uVar8 * 0xc + 1] = 0;
    local_138[uVar8 * 0xc + 2] = 0;
    local_138[uVar8 * 0xc + 3] = 0;
    auStack_118[uVar8 * 0xc] = 0;
    (local_1a8 + uVar8 * 0x18 + 0x10)[0] = 0;
    (local_1a8 + uVar8 * 0x18 + 0x10)[1] = 0;
    local_138[uVar8 * 0xc + -5] = 0;
    *(undefined1 *)(local_138 + uVar8 * 0xc + -4) = 1;
    local_138[uVar8 * 0xc + -3] = 0;
    local_138[uVar8 * 0xc + -2] = 0;
    local_138[uVar8 * 0xc + -1] = 0;
    *(undefined1 *)(local_138 + uVar8 * 0xc) = 1;
    local_138[uVar8 * 0xc + 1] = 0;
    local_138[uVar8 * 0xc + 2] = 0;
    local_138[uVar8 * 0xc + 3] = 0;
    *(undefined1 *)(auStack_118 + uVar8 * 0xc) = 1;
    auStack_118[uVar8 * 0xc + 1] = 0;
    uVar8 = uVar9;
  } while (uVar9 < 3);
  uVar16 = param_3 - 0x1d;
  uVar15 = 1;
  local_1a8[0] = 0;
  local_1a8[1] = 0;
  local_1a8[6] = 0;
  local_1a8[7] = 0;
  local_1a8[0xc] = 0;
  local_1a8[0xd] = 0;
  local_1b8 = (undefined8 *)0x0;
  puStack_1b0 = (undefined8 *)0x0;
  local_1a8[2] = 0;
  local_1a8[3] = 0;
  local_1a8[4] = 0;
  local_1a8[5] = 0;
  local_1a8[8] = 0;
  local_1a8[9] = 0;
  local_1a8[10] = 0;
  local_1a8[0xb] = 0;
  local_278 = 0;
  local_274[0] = uVar16;
  if (uVar16 < 0x10) {
    lVar12 = (lVar12 + -0x1d) * 0x74;
    lVar5 = FUN_1800aa7a0(param_2);
    local_240 = 1;
    uStack_248 = 0;
    local_250 = param_2 + 0x1224 + lVar12;
    uStack_238 = 0;
    puStack_1b0 = &local_168;
    local_1a8[1] = local_21c;
    local_1a8[0] = 1;
    local_158 = CONCAT17(uStack_239,CONCAT25(uStack_23b,CONCAT41(uStack_23f,1)));
    uStack_160 = 0;
    uStack_15c = 0;
    uStack_150 = 0;
    local_168 = local_250;
    if ((lVar5 == 0) || (*(int *)(lVar5 + 0x60) != 1)) goto LAB_1802f66fd;
    uStack_248 = 0;
    local_148 = param_2 + 0x1234 + lVar12;
    local_240 = 1;
    uStack_238 = 0;
    local_138[0] = CONCAT17(uStack_239,CONCAT25(uStack_23b,CONCAT41(uStack_23f,1)));
    local_1a8[0] = 2;
    uStack_140 = 0;
    uStack_13c = 0;
    local_138[1] = 0;
    local_210 = 1;
    local_250 = local_148;
    local_230 = param_2;
    local_228 = param_3;
LAB_1802f6721:
    local_208 = &local_278;
    local_218 = &local_1b8;
    lVar5 = FUN_1800aa7a0(local_230,(longlong)(int)local_228 + -0x1d);
    bVar17 = lVar5 != 0;
  }
  else {
    if (param_3 < 0x1d) {
      lVar13 = lVar12 * 0x118;
      lVar5 = lVar12 * 0x98;
      local_274[3] = 3;
      local_274[2] = 1;
      local_1d8 = lVar13;
      uVar15 = *(uint *)(&DAT_1806a0c20 + lVar13);
      local_1d0 = lVar5;
      puVar11 = local_274 + 2;
      if (0 < (int)uVar15) {
        puVar11 = (uint *)(&DAT_1806a0c20 + lVar13);
      }
      puVar7 = local_274 + 3;
      if ((int)uVar15 < 4) {
        puVar7 = puVar11;
      }
      uVar15 = *puVar7;
      if (0 < (int)uVar15) {
        local_1c8 = &PTR_s_default_1806a0c28 + lVar12 * 0x23;
        local_1c0 = &DAT_1806a0c34 + lVar13;
        ppuVar6 = &PTR_s_default_1806a0c28 + lVar12 * 0x23;
        puVar10 = &DAT_1806a0c34 + lVar13;
        uVar8 = 0;
        do {
          local_274[5] = 3;
          local_274[4] = 1;
          puVar11 = local_274 + 4;
          if (0 < *(int *)(puVar10 + uVar8 * 0x28)) {
            puVar11 = (uint *)(puVar10 + uVar8 * 0x28);
          }
          puVar7 = local_274 + 5;
          if (*(int *)(puVar10 + uVar8 * 0x28) < 4) {
            puVar7 = puVar11;
          }
          uVar1 = *puVar7;
          if (0 < (int)uVar1) {
            iVar2 = *(int *)(&UNK_1806a0c30 + uVar8 * 0x28 + lVar13);
            lVar12 = uVar8 * 0x60 + -0x157;
            uVar9 = 0;
            do {
              lVar13 = uVar9 * 0x20;
              uVar14 = (int)uVar9 + 1;
              *(longlong *)(local_1a8 + uVar8 * 0x18 + uVar9 * 8 + 0x10) =
                   (longlong)(iVar2 + (int)uVar9) * 0x10 + param_2 + 0x18 + lVar5;
              local_138[uVar8 * 0xc + uVar9 * 4 + -5] = (ppuVar6 + uVar8 * 5)[uVar9 + 2];
              *(undefined1 *)(local_138 + uVar8 * 0xc + uVar9 * 4 + -4) = 1;
              *(undefined4 *)((longlong)local_138 + lVar13 + lVar12 + 0x138) = uStack_23f;
              *(undefined2 *)((longlong)local_138 + lVar13 + lVar12 + 0x13c) = uStack_23b;
              *(undefined1 *)((longlong)local_138 + lVar13 + lVar12 + 0x13e) = uStack_239;
              local_138[uVar8 * 0xc + uVar9 * 4 + -3] = 0;
              uVar9 = (ulonglong)uVar14;
            } while ((int)uVar14 < (int)uVar1);
            lVar5 = local_1d0;
            lVar13 = local_1d8;
            param_2 = local_1e0;
          }
          *(undefined **)(local_1a8 + uVar8 * 6 + -4) = ppuVar6[uVar8 * 5];
          uVar14 = (int)uVar8 + 1;
          *(uint **)(local_1a8 + uVar8 * 6 + -2) = local_1a8 + uVar8 * 0x18 + 0x10;
          local_1a8[uVar8 * 6] = uVar1;
          local_1a8[uVar8 * 6 + 1] = local_21c;
          ppuVar6 = local_1c8;
          puVar10 = local_1c0;
          uVar8 = (ulonglong)uVar14;
        } while ((int)uVar14 < (int)uVar15);
        param_3 = local_258;
      }
      if ((int)uVar15 < 2) goto LAB_1802f66fd;
      local_208 = (undefined4 *)(param_2 + 0x14 + lVar5);
      local_230 = param_2;
      local_228 = param_3;
      local_210 = uVar15;
    }
    else {
LAB_1802f66fd:
      local_218 = &local_1b8;
      local_208 = &local_278;
      local_230 = param_2;
      local_228 = param_3;
      local_210 = uVar15;
      if (uVar16 < 0x10) goto LAB_1802f6721;
      if (0x1c < param_3) {
        bVar17 = false;
        goto LAB_1802f6773;
      }
    }
    local_218 = &local_1b8;
    if (*(int *)(&DAT_1806a0bfc + (longlong)(int)local_228 * 0x118) == 3) {
      bVar17 = local_228 == 3;
    }
    else {
      bVar17 = *(int *)(&DAT_1806a0bfc + (longlong)(int)local_228 * 0x118) != 5;
      local_148 = CONCAT44(local_148._4_4_,(undefined4)local_148);
    }
  }
LAB_1802f6773:
  local_1f0 = 1;
  local_200 = (undefined1 *)0x0;
  if (bVar17) {
    local_200 = &LAB_1802f62c0;
  }
  local_1f8 = &local_230;
  uVar4 = FUN_1803e8900(*(undefined8 *)(DAT_180ca0a50 + 0x14f8),"##esp_color");
  FUN_1802cb5b0(uVar4,&local_218);
  iVar2 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
  if (iVar2 < 2) {
    FUN_1803ebc00("Calling PopID() too many times!");
  }
  else {
    *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar2 + -1;
  }
  FUN_1802b5590();
  return;
}



/* ===== 1802f6830 FUN_1802f6830 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802f6830(float *param_1,float *param_2,char *param_3,int param_4,float param_5)

{
  longlong lVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  undefined1 uVar6;
  char cVar7;
  byte bVar8;
  undefined4 uVar9;
  longlong lVar10;
  float *pfVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  longlong lVar14;
  float *pfVar15;
  int iVar16;
  undefined4 *puVar17;
  undefined8 *puVar18;
  uint uVar19;
  undefined8 uVar20;
  int iVar21;
  int iVar22;
  longlong lVar23;
  uint uVar24;
  bool bVar25;
  float fVar26;
  float fVar27;
  undefined4 uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined1 auStack_f08 [32];
  float *local_ee8;
  float **local_ee0;
  char *local_ed8;
  undefined8 local_ed0;
  ulonglong local_ec8;
  undefined4 local_ec0;
  undefined4 local_eb8;
  undefined8 local_ea8;
  float local_ea0;
  float local_e9c;
  undefined1 local_e98;
  float local_e94;
  float fStack_e90;
  undefined8 local_e88;
  longlong local_e80;
  float local_e78;
  float local_e74;
  float local_e70 [2];
  float local_e68;
  float local_e64;
  float local_e60;
  float local_e5c;
  float local_e58;
  float local_e54;
  float *local_e50;
  float *local_e48;
  undefined4 uStack_e40;
  undefined4 uStack_e3c;
  longlong local_e38;
  float local_e30;
  float local_e2c;
  float local_e28;
  float local_e24;
  undefined1 local_e20;
  undefined4 local_e1c;
  undefined1 local_e18;
  undefined4 local_e14;
  undefined1 local_e10;
  float local_e0c;
  float local_e08;
  float local_e04;
  float local_e00;
  float local_dfc;
  float local_df8;
  float local_df4;
  undefined *local_df0;
  undefined1 local_de8 [8];
  float local_de0 [2];
  char acStack_dd8 [896];
  undefined1 local_a58 [32];
  undefined1 local_a38 [1080];
  undefined1 local_600 [32];
  longlong local_5e0;
  undefined1 local_5d0 [24];
  undefined1 local_5b8 [24];
  undefined1 local_5a0 [40];
  float local_578 [288];
  ulonglong local_f8;
  
  lVar10 = DAT_180ca0a50;
  local_f8 = DAT_180919500 ^ (ulonglong)auStack_f08;
  DAT_1809f758c = DAT_181108f70;
  DAT_180cd1a96 = '\0';
  DAT_180cd1307 = '\0';
  DAT_18110902c = param_4;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  local_e98 = param_4 == 0;
  if ((param_4 != 0) && (param_4 != 1)) {
    return;
  }
  lVar14 = *(longlong *)(*(longlong *)(lVar10 + 0x14f8) + 0x2c8);
  uVar12 = (ulonglong)(param_4 != 0);
  lVar23 = uVar12 * 0x998;
  puVar17 = (undefined4 *)(&DAT_1809f5c00 + lVar23);
  if (*(int *)(&DAT_1809f51b0 + uVar12 * 4) != *(int *)(lVar10 + 4) + -1) {
    do {
      *(undefined2 *)((longlong)puVar17 + 0x29) = 0;
      *(undefined1 *)(puVar17 + 10) = 0;
      puVar17 = puVar17 + 0xd;
    } while (puVar17 != (undefined4 *)(&DAT_1809f6524 + lVar23));
    *(undefined4 *)(&DAT_1809f6524 + lVar23) = 0xffffffff;
  }
  *(undefined4 *)(&DAT_1809f51b0 + uVar12 * 4) = *(undefined4 *)(lVar10 + 4);
  fVar4 = DAT_1808ac1f4;
  fVar33 = *param_1;
  fVar34 = *param_2;
  fVar31 = fVar34 - fVar33;
  fVar27 = param_1[1];
  fVar32 = param_2[1];
  fVar30 = fVar32 - fVar27;
  local_e88 = param_2;
  local_e48 = param_1;
  local_e9c = (float)FUN_18053fc00(fVar30 * DAT_1808ac1f4 + fVar27);
  fVar5 = DAT_1808ac988;
  local_e9c = local_e9c - DAT_1808ac988;
  local_ea0 = (float)FUN_18053fc00(fVar31 * fVar4 + fVar33);
  fVar2 = *(float *)(&DAT_1809f654c + lVar23) + DAT_1808aca24;
  if (*(float *)(&DAT_1809f654c + lVar23) + DAT_1808aca24 <= DAT_1808acaa8) {
    fVar2 = DAT_1808acaa8;
  }
  fVar33 = fVar33 + DAT_1808acaa8;
  fVar34 = fVar34 - DAT_1808acaa8;
  fVar30 = (fVar27 + fVar30) - DAT_1808aca24;
  if (((DAT_180cd1307 == '\0') && (DAT_180cd1a96 == '\0')) && (DAT_18110902c != 3)) {
    bVar25 = param_4 != 0;
  }
  else {
    bVar25 = false;
  }
  lVar10 = FUN_1803bdb80(bVar25);
  _local_e94 = CONCAT44(fStack_e90,0x3f800000);
  local_ea8 = CONCAT44(local_ea8._4_4_,0x3f800000);
  if (((DAT_180cd1307 == '\0') && (DAT_180cd1a96 == '\0')) && (DAT_18110902c != 3)) {
    bVar25 = param_4 != 0;
  }
  else {
    bVar25 = false;
  }
  local_e80 = lVar10;
  FUN_1803bdbf0(bVar25,&local_e94,&local_ea8);
  fVar29 = (fVar34 - fVar33) * DAT_1808ac40c;
  fVar26 = (float)FUN_18053fc00(fVar29);
  fVar29 = (float)FUN_18053fc00(fVar29 * _DAT_1808ac480);
  local_e5c = (float)FUN_18053fc00(fVar29 * fVar4);
  local_e58 = local_ea0 - fVar26 * fVar4;
  local_e54 = local_e9c - local_e5c;
  local_e60 = fVar26 * fVar4 + local_ea0;
  local_e5c = local_e9c + local_e5c;
  local_e68 = local_e94;
  local_e64 = (float)local_ea8;
  local_e70[0] = 1.0;
  local_e78 = 0.0;
  local_e74 = *(float *)(DAT_180ca0a50 + 0xc9c) * param_5 * *(float *)(DAT_180ca0a50 + 0xc9c);
  pfVar11 = &local_e78;
  if (0.0 <= local_e74) {
    pfVar11 = &local_e74;
  }
  local_e50 = local_e70;
  if (local_e74 <= DAT_1808ac34c) {
    local_e50 = pfVar11;
  }
  local_ea8 = CONCAT44((float)((ulonglong)*(undefined8 *)local_e88 >> 0x20) - DAT_1808adc30._4_4_,
                       (float)*(undefined8 *)local_e88 - (float)DAT_1808adc30);
  local_e94 = (float)*(undefined8 *)param_1 + (float)DAT_1808adc30;
  fStack_e90 = (float)((ulonglong)*(undefined8 *)param_1 >> 0x20) + DAT_1808adc30._4_4_;
  FUN_1803fc200(lVar14,&local_e94,&local_ea8,1);
  if (((lVar10 != 0) && (0.0 < fVar26)) && (0.0 < fVar29)) {
    uVar24 = (int)(*local_e50 * DAT_1808acb94 + fVar4) << 0x18;
    fVar26 = (float)(uVar24 | 0xffffff);
    if (((DAT_180cd1307 != '\0') || (DAT_180cd1a96 != '\0')) || (DAT_18110902c == 3)) {
      uVar12 = 0;
    }
    lVar10 = (&DAT_18110b570)[uVar12];
    local_e94 = fVar26;
    if ((lVar10 == 0) || (local_ea8 = 0, uVar24 == 0)) {
LAB_1802f6d4f:
      local_ea8 = 0;
      if (uVar24 != 0) goto LAB_1802f6d61;
    }
    else {
      if ((lVar10 == *(longlong *)(lVar14 + 0x78)) && (*(longlong *)(lVar14 + 0x70) == 0)) {
        bVar25 = false;
      }
      else {
        if (*(int *)(lVar14 + 0xb0) == *(int *)(lVar14 + 0xb4)) {
          FUN_1803f7030(lVar14 + 0xb0);
        }
        iVar16 = *(int *)(lVar14 + 0xb0);
        lVar1 = *(longlong *)(lVar14 + 0xb8);
        *(undefined8 *)(lVar1 + (longlong)iVar16 * 0x10) = 0;
        *(longlong *)(lVar1 + 8 + (longlong)iVar16 * 0x10) = lVar10;
        *(int *)(lVar14 + 0xb0) = *(int *)(lVar14 + 0xb0) + 1;
        *(undefined8 *)(lVar14 + 0x70) = 0;
        *(longlong *)(lVar14 + 0x78) = lVar10;
        FUN_1803fc0a0(lVar14);
        bVar25 = true;
      }
      FUN_1803fc3a0(lVar14,6,4);
      fVar26 = local_e94;
      local_ee0 = (float **)CONCAT44(local_ee0._4_4_,local_e94);
      local_ee8 = &local_e68;
      FUN_1803fc4a0(lVar14,&local_e58,&local_e60,&local_ea8);
      if (!bVar25) goto LAB_1802f6d4f;
      FUN_1803fc340(lVar14);
LAB_1802f6d61:
      local_ea8 = 0;
      if ((local_e80 == *(longlong *)(lVar14 + 0x78)) && (*(longlong *)(lVar14 + 0x70) == 0)) {
        bVar25 = false;
      }
      else {
        bVar25 = true;
        iVar16 = *(int *)(lVar14 + 0xb4);
        if (*(int *)(lVar14 + 0xb0) == iVar16) {
          iVar21 = *(int *)(lVar14 + 0xb0) + 1;
          if (iVar16 == 0) {
            iVar16 = 8;
          }
          else {
            iVar16 = iVar16 / 2 + iVar16;
          }
          if (iVar21 < iVar16) {
            iVar21 = iVar16;
          }
          FUN_1803f7030(lVar14 + 0xb0,iVar21);
        }
        iVar16 = *(int *)(lVar14 + 0xb0);
        lVar10 = *(longlong *)(lVar14 + 0xb8);
        *(undefined8 *)(lVar10 + (longlong)iVar16 * 0x10) = 0;
        *(longlong *)(lVar10 + 8 + (longlong)iVar16 * 0x10) = local_e80;
        *(int *)(lVar14 + 0xb0) = *(int *)(lVar14 + 0xb0) + 1;
        *(undefined8 *)(lVar14 + 0x70) = 0;
        *(longlong *)(lVar14 + 0x78) = local_e80;
        FUN_1803fc0a0(lVar14);
      }
      FUN_1803fc3a0(lVar14,6,4);
      local_ee0 = (float **)CONCAT44(local_ee0._4_4_,fVar26);
      local_ee8 = &local_e68;
      FUN_1803fc4a0(lVar14,&local_e58,&local_e60,&local_ea8);
      if (bVar25) {
        FUN_1803fc340(lVar14);
      }
    }
    lVar10 = local_e80;
  }
  iVar21 = *(int *)(lVar14 + 0xa0);
  iVar16 = iVar21 + -1;
  *(int *)(lVar14 + 0xa0) = iVar16;
  if (iVar16 == 0) {
    puVar17 = (undefined4 *)(*(longlong *)(lVar14 + 0x38) + 0x34);
  }
  else {
    puVar17 = (undefined4 *)((longlong)(iVar21 + -2) * 0x10 + *(longlong *)(lVar14 + 0xa8));
  }
  uVar9 = puVar17[1];
  uVar28 = puVar17[2];
  uVar3 = puVar17[3];
  *(undefined4 *)(lVar14 + 0x60) = *puVar17;
  *(undefined4 *)(lVar14 + 100) = uVar9;
  *(undefined4 *)(lVar14 + 0x68) = uVar28;
  *(undefined4 *)(lVar14 + 0x6c) = uVar3;
  FUN_1803fbff0(lVar14);
  if (lVar10 == 0) {
LAB_1802f6ed7:
    uVar20 = 0;
    bVar25 = false;
  }
  else {
    if (((DAT_180cd1307 == '\0') && (DAT_180cd1a96 == '\0')) && (DAT_18110902c != 3)) {
      uVar12 = (ulonglong)(param_4 != 0);
    }
    else {
      uVar12 = 0;
    }
    if ((&DAT_181108ef8)[uVar12 * 0x50] == '\0') goto LAB_1802f6ed7;
    uVar20 = (&DAT_181108eb0)[uVar12 * 10];
    bVar25 = true;
  }
  FUN_1803a81c0(local_a58);
  if ((param_3[0x1174] != '\0') && (local_5e0 == 0)) {
    FUN_1800dd490();
    if ((DAT_180cd0f68 == 0) || (DAT_180cd0f90 == (code *)0x0)) {
      uVar13 = 0;
    }
    else {
      uVar13 = (*DAT_180cd0f90)();
    }
    local_5e0 = FUN_1800dd940(uVar13);
  }
  FUN_1800aa690();
  if ((bVar25) && (DAT_180cd02d8 != DAT_180cd02e0)) {
    local_ee8 = local_578;
    FUN_180073120(uVar20,0,param_3,1);
  }
  uVar6 = local_e98;
  FUN_1803b5560(param_3,local_e98);
  *(undefined4 *)(&DAT_1809f6580 + lVar23) = DAT_1809f54bc;
  *(undefined4 *)(&DAT_1809f6584 + lVar23) = 0x40c00000;
  uVar9 = FUN_1803e8900(*(undefined8 *)(DAT_180ca0a50 + 0x14f8),"##esp_item");
  cVar7 = FUN_1803ed900(uVar9,0);
  pfVar11 = local_e48;
  iVar16 = -1;
  if (cVar7 != '\0') {
    iVar16 = DAT_1809f5058;
  }
  *(int *)(&DAT_1809f6588 + lVar23) = iVar16;
  local_e1c = 0;
  local_e14 = 0x3f800000;
  local_e20 = 1;
  local_e18 = 1;
  local_e10 = uVar6;
  local_e0c = local_ea0;
  local_e08 = local_e9c;
  local_e04 = *local_e48;
  local_e00 = local_e48[1];
  local_dfc = *local_e88;
  local_df8 = local_e88[1];
  local_df0 = &DAT_1809f5c00 + lVar23;
  local_e50 = (float *)CONCAT44((float)((ulonglong)*(undefined8 *)local_e48 >> 0x20) +
                                DAT_1808adc30._4_4_,
                                (float)*(undefined8 *)local_e48 + (float)DAT_1808adc30);
  local_e48 = (float *)CONCAT44((float)((ulonglong)*(undefined8 *)local_e88 >> 0x20) -
                                DAT_1808adc30._4_4_,
                                (float)*(undefined8 *)local_e88 - (float)DAT_1808adc30);
  local_e38 = lVar14;
  local_e30 = fVar33;
  local_e2c = (fVar2 + fVar27) - fVar5;
  local_e28 = fVar34;
  local_e24 = (fVar32 - fVar2) - fVar5;
  local_df4 = fVar30;
  FUN_1803fc200(lVar14,&local_e50,&local_e48,1);
  uVar9 = *(undefined4 *)(lVar14 + 0x20);
  FUN_180540170(local_de8,0,900);
  FUN_180346900(local_de8);
  FUN_1803b3e40(&local_e38,local_a58,param_3,local_de8);
  fVar34 = DAT_1808ac930;
  fVar33 = *(float *)(&DAT_1809f6550 + lVar23);
  if (0.0 < fVar33) {
    local_eb8 = 0;
    local_ec8 = 0;
    local_ed0 = 0;
    local_ed8 = (char *)0x0;
    local_ee0 = (float **)0x180761000;
    local_ee8 = (float *)((ulonglong)local_ee8 & 0xffffffff00000000);
    FUN_18040a2f0(&local_e48,*(undefined8 *)(DAT_180ca0a50 + 0x11f0));
    fVar27 = (float)FUN_18053fc00(local_e48._0_4_ + _DAT_1808ac974 + DAT_1808ac2f0);
    fVar32 = (fVar31 - (fVar27 + DAT_1808ac8b0)) * fVar4 + *pfVar11 + DAT_1808ac7ac;
    uVar24 = FUN_1802b38e0(DAT_180960ec8,0xff292ed9);
    fVar27 = DAT_1808ac840;
    uVar19 = (int)(longlong)((float)(uVar24 >> 0x18) * fVar33 + fVar4) << 0x18;
    uVar24 = uVar24 & 0xffffff | uVar19;
    fVar30 = fVar30 + _DAT_1808ac8c4;
    local_e88._0_4_ = fVar32 + DAT_1808ac840;
    local_ee0 = (float **)CONCAT44(local_ee0._4_4_,uVar24);
    local_ee8 = (float *)CONCAT44(local_ee8._4_4_,fVar34);
    local_e88._4_4_ = fVar30;
    FUN_1802b4710(lVar14,"trash",
                  "<svg xmlns=\"http://www.w3.org/2000/svg\" height=\"24\" viewBox=\"0 -960 960 960\" width=\"24\"><path fill=\"white\" d=\"M280-120q-33 0-56.5-23.5T200-200v-520q-17 0-28.5-11.5T160-760q0-17 11.5-28.5T200-800h160q0-17 11.5-28.5T400-840h160q17 0 28.5 11.5T600-800h160q17 0 28.5 11.5T800-760q0 17-11.5 28.5T760-720v520q0 33-23.5 56.5T680-120H280Zm148.5-171.5Q440-303 440-320v-280q0-17-11.5-28.5T400-640q-17 0-28.5 11.5T360-600v280q0 17 11.5 28.5T400-280q17 0 28.5-11.5Zm160 0Q600-303 600-320v-280q0-17-11.5-28.5T560-640q-17 0-28.5 11.5T520-600v280q0 17 11.5 28.5T560-280q17 0 28.5-11.5Z\"/></svg>"
                  ,&local_e88);
    local_e88 = (float *)CONCAT44(local_e88._4_4_,fVar32 + fVar34 + DAT_1808ac750);
    uVar28 = FUN_18053f0d0(fVar30 - fVar27);
    local_e88 = (float *)CONCAT44(uVar28,(float)local_e88);
    if (uVar19 != 0) {
      local_e48 = *(float **)(lVar14 + 0x60);
      uStack_e40 = *(undefined4 *)(lVar14 + 0x68);
      uStack_e3c = *(undefined4 *)(lVar14 + 0x6c);
      local_ec0 = 0;
      local_ec8 = local_ec8 & 0xffffffff00000000;
      local_ed0 = 0;
      local_ed8 = "remove item";
      local_ee0 = &local_e48;
      local_ee8 = (float *)CONCAT44(local_ee8._4_4_,uVar24);
      FUN_18040a900(*(undefined8 *)(*(longlong *)(lVar14 + 0x38) + 0x18),lVar14);
    }
  }
  if (*param_3 == '\0') {
    FUN_1802b3c30(lVar14,uVar9);
  }
  iVar21 = *(int *)(lVar14 + 0xa0);
  iVar16 = iVar21 + -1;
  *(int *)(lVar14 + 0xa0) = iVar16;
  if (iVar16 == 0) {
    puVar17 = (undefined4 *)(*(longlong *)(lVar14 + 0x38) + 0x34);
  }
  else {
    puVar17 = (undefined4 *)((longlong)(iVar21 + -2) * 0x10 + *(longlong *)(lVar14 + 0xa8));
  }
  uVar9 = puVar17[1];
  uVar28 = puVar17[2];
  uVar3 = puVar17[3];
  *(undefined4 *)(lVar14 + 0x60) = *puVar17;
  *(undefined4 *)(lVar14 + 100) = uVar9;
  *(undefined4 *)(lVar14 + 0x68) = uVar28;
  *(undefined4 *)(lVar14 + 0x6c) = uVar3;
  FUN_1803fbff0(lVar14);
  FUN_1803b4fa0(&local_e38,param_3);
  lVar10 = DAT_180ca0a50;
  iVar16 = *(int *)(&DAT_1809f6594 + lVar23);
  lVar14 = (longlong)iVar16;
  if ((-1 < iVar16) && (fVar33 = *(float *)(DAT_180ca0a50 + 0x120), fVar33 != 0.0)) {
    iVar21 = -1;
    if (0.0 < fVar33) {
      iVar21 = 1;
    }
    if (iVar16 < 0x2d) {
      if (DAT_18091a1b0 == '\0') {
        if (iVar16 - 0x1dU < 0x10) {
          local_ea8 = CONCAT44(local_ea8._4_4_,0x30);
          local_e9c = 8.40779e-45;
          lVar14 = (lVar14 + -0x1d) * 0x74;
          local_ea0 = (float)(*(int *)(param_3 + lVar14 + 0x1244) + iVar21);
          pfVar11 = &local_e9c;
          if (5 < (int)local_ea0) {
            pfVar11 = &local_ea0;
          }
          pfVar15 = (float *)&local_ea8;
          if ((int)local_ea0 < 0x31) {
            pfVar15 = pfVar11;
          }
          *(float *)(param_3 + lVar14 + 0x1244) = *pfVar15;
        }
        else {
          iVar16 = *(int *)(&DAT_1806b317c + lVar14 * 0x118);
          if (iVar16 != 5) {
            iVar22 = 4;
            if (iVar16 == 0) {
              iVar22 = 6;
            }
            local_ea8 = CONCAT44(local_ea8._4_4_,iVar22);
            local_e9c = 0.0;
            if (iVar16 == 0) {
              local_e9c = 2.8026e-45;
            }
            local_ea0 = (float)(*(int *)(param_3 + lVar14 * 0x98 + 0x10) + iVar21);
            pfVar11 = &local_e9c;
            if ((int)local_e9c <= (int)local_ea0) {
              pfVar11 = &local_ea0;
            }
            pfVar15 = (float *)&local_ea8;
            if ((int)local_ea0 <= iVar22) {
              pfVar15 = pfVar11;
            }
            *(float *)(param_3 + lVar14 * 0x98 + 0x10) = *pfVar15;
          }
        }
      }
      else {
        local_ea8 = CONCAT44(local_ea8._4_4_,200);
        iVar16 = 100;
        local_e9c = 1.4013e-43;
        if (0 < (int)DAT_18091a1b4) {
          iVar16 = ((int)DAT_18091a1b4 / 0x19) * 0x19;
        }
        iVar21 = -0x19;
        if (0.0 < fVar33) {
          iVar21 = 0x19;
        }
        local_ea0 = (float)(iVar21 + iVar16);
        pfVar11 = &local_e9c;
        if (99 < (int)local_ea0) {
          pfVar11 = &local_ea0;
        }
        pfVar15 = (float *)&local_ea8;
        if ((int)local_ea0 < 0xc9) {
          pfVar15 = pfVar11;
        }
        DAT_18091a1b4 = *pfVar15;
      }
    }
  }
  iVar16 = *(int *)(&DAT_1809f6590 + lVar23);
  if (-1 < iVar16) {
    if (iVar16 - 0x1dU < 0x10) {
      lVar14 = FUN_1800aa7a0(param_3,(longlong)iVar16 + -0x1d);
      if (lVar14 == 0) goto LAB_1802f74bd;
    }
    else if (0x1c < iVar16) goto LAB_1802f74bd;
    _DAT_181107270 = *(undefined8 *)(lVar10 + 0x110);
    DAT_1809f5058 = iVar16;
    FUN_1802b4d80("##esp_item");
    lVar10 = DAT_180ca0a50;
  }
LAB_1802f74bd:
  lVar14 = (longlong)(int)*(uint *)(&DAT_1809f658c + lVar23);
  if ((*(uint *)(&DAT_1809f658c + lVar23) < 0x2d) && (acStack_dd8[lVar14 * 0x14] != '\0')) {
    uVar9 = FUN_1803e8900(*(undefined8 *)(lVar10 + 0x14f8),"##esp_item");
    bVar8 = FUN_1803ed900(uVar9,0);
    uVar24 = *(uint *)(&DAT_1809f658c + lVar23);
    if (uVar24 - 0x1d < 0x10) {
      lVar10 = FUN_1800aa7a0(param_3,(longlong)(int)uVar24 + -0x1d);
      if (lVar10 == 0) {
        puVar18 = (undefined8 *)&DAT_18075bf54;
      }
      else {
        puVar18 = (undefined8 *)(lVar10 + 0x20);
        if (0xf < *(ulonglong *)(lVar10 + 0x38)) {
          puVar18 = (undefined8 *)*puVar18;
        }
      }
    }
    else if (uVar24 < 0x1d) {
      puVar18 = (undefined8 *)(&PTR_s_health_bar_1806b3170)[(longlong)(int)uVar24 * 0x23];
    }
    else {
      puVar18 = (undefined8 *)&DAT_18058b643;
    }
    local_ee8 = local_de0 + lVar14 * 5;
    local_ee0 = (float **)((ulonglong)local_ee0 & 0xffffffff00000000);
    FUN_1802b56a0(puVar18,&DAT_180761020,bVar8 ^ 1,local_de8 + lVar14 * 0x14);
    lVar10 = DAT_180ca0a50;
  }
  if (-1 < DAT_1809f5058) {
    *(uint *)(lVar10 + 0x1f38) = *(uint *)(lVar10 + 0x1f38) | 1;
    *(undefined4 *)(lVar10 + 0x1f48) = DAT_181107270;
    *(undefined4 *)(lVar10 + 0x1f4c) = DAT_181107274;
    *(undefined8 *)(lVar10 + 0x1f50) = 0;
    *(undefined4 *)(lVar10 + 0x1f3c) = 8;
    FUN_1802f62d0("##esp_item",param_3);
  }
  FUN_1804eced0(local_578,0x48,0x10,FUN_180058d00);
  FUN_18034a030(local_5a0);
  FUN_1800244c0(local_5b8);
  FUN_1802a92f0(local_5d0);
  FUN_18000f890(local_600);
  FUN_1804eced0(local_a38,0x20,0x1d,thunk_FUN_18000f890);
  return;
}



/* ===== 1802f76c0 FUN_1802f76c0 ===== */

void FUN_1802f76c0(longlong param_1)

{
  FUN_1804eced0(param_1 + 0x4e0,0x48,0x10,FUN_180058d00);
  FUN_18034a030(param_1 + 0x4b8);
  FUN_1800244c0(param_1 + 0x4a0);
  FUN_1802a92f0(param_1 + 0x488);
  FUN_18000f890(param_1 + 0x458);
  FUN_1804eced0(param_1 + 0x20,0x20,0x1d,thunk_FUN_18000f890);
  return;
}



/* ===== 1802f7740 FUN_1802f7740 ===== */

void FUN_1802f7740(undefined8 param_1)

{
  FUN_1804eced0(param_1,0x20,0x1d,thunk_FUN_18000f890);
  return;
}



/* ===== 1802f7770 FUN_1802f7770 ===== */

undefined8 FUN_1802f7770(undefined4 param_1)

{
  switch(param_1) {
  case 0:
  case 1:
  case 0xb:
    return 3;
  case 2:
  case 0xd:
  case 0x15:
    return 4;
  case 3:
  case 0xe:
    return 5;
  case 4:
  case 9:
  case 0x18:
  case 0x1a:
    return 0;
  case 5:
  case 10:
  case 0x17:
    return 1;
  default:
    return 0x7fffffff;
  case 8:
    return 0xc;
  case 0xc:
  case 0x16:
  case 0x19:
    return 2;
  case 0xf:
    return 6;
  case 0x10:
    return 7;
  case 0x11:
    return 9;
  case 0x12:
    return 8;
  case 0x13:
    return 10;
  case 0x14:
    return 0xb;
  }
}



/* ===== 1802f7850 FUN_1802f7850 ===== */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1802f7850(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  uint uVar1;
  uint *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  uint *puVar6;
  longlong lVar7;
  int *piVar8;
  int *piVar9;
  uint *puVar10;
  int iVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined1 auStack_1158 [32];
  undefined1 *local_1138;
  code *local_1130;
  undefined1 local_1128;
  int local_1124 [3];
  undefined8 local_1118;
  undefined8 local_1100;
  uint *local_10f8;
  uint *local_10f0;
  undefined8 local_10d8;
  ulonglong local_10d0;
  longlong local_c8;
  longlong local_c0 [14];
  longlong local_50;
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x1802f7872;
  local_48 = DAT_180919500 ^ (ulonglong)auStack_1158;
  local_1118 = param_1;
  local_1100 = param_1;
  FUN_180346c50(&local_c8);
  iVar11 = 0;
  do {
    local_1138 = (undefined1 *)CONCAT44(local_1138._4_4_,0xffffffff);
    FUN_1803b38b0(&local_10f8,param_2,iVar11,param_3);
    puVar6 = local_10f0;
    for (puVar10 = local_10f8; puVar10 != puVar6; puVar10 = puVar10 + 1) {
      uVar1 = *puVar10;
      uVar4 = (ulonglong)local_1118 >> 0x20;
      local_1118 = CONCAT44((int)uVar4,uVar1);
      local_1124[2] = 4;
      local_1124[0] = 0;
      if (uVar1 - 0x1d < 0x10) {
        local_1124[1] = 4;
      }
      else if (uVar1 < 0x1d) {
        local_1124[1] = *(int *)(&DAT_1806b3178 + (longlong)(int)uVar1 * 0x118);
      }
      else {
        local_1124[1] = 0;
      }
      piVar9 = local_1124;
      if (-1 < local_1124[1]) {
        piVar9 = local_1124 + 1;
      }
      piVar8 = local_1124 + 2;
      if (local_1124[1] < 5) {
        piVar8 = piVar9;
      }
      lVar7 = (longlong)*piVar8;
      puVar2 = (uint *)local_c0[lVar7 * 3];
      if (puVar2 == (uint *)local_c0[lVar7 * 3 + 1]) {
        FUN_18006a410(local_c0 + lVar7 * 3 + -1,puVar2,&local_1118);
      }
      else {
        *puVar2 = uVar1;
        local_c0[lVar7 * 3] = local_c0[lVar7 * 3] + 4;
      }
    }
    FUN_180068f30(&local_10f8);
    uVar5 = local_1100;
    iVar11 = iVar11 + 1;
  } while (iVar11 < 5);
  plVar12 = &local_c8;
  do {
    lVar7 = plVar12[1];
    lVar3 = *plVar12;
    lVar13 = lVar7 - lVar3 >> 2;
    if (lVar13 < 0x21) {
      FUN_18034bce0(lVar3,lVar7);
    }
    else {
      FUN_18034bdc0(&local_10d8,lVar13 - (lVar13 - (lVar7 - lVar3 >> 0x3f) >> 1));
      local_1130 = (code *)CONCAT71(local_1130._1_7_,local_1128);
      local_1138 = (undefined1 *)local_10d0;
      FUN_18034be70(lVar3,lVar7,lVar13,local_10d8);
      if (0x400 < local_10d0) {
        FUN_1803d64e0(local_10d8);
      }
    }
    plVar12 = plVar12 + 3;
  } while (plVar12 != &local_50);
  local_1130 = thunk_FUN_180068f30;
  local_1138 = &LAB_180066fb0;
  FUN_1804ed050(uVar5,&local_c8,0x18,5);
  FUN_1804eced0(&local_c8,0x18,5,thunk_FUN_180068f30);
  return uVar5;
}



/* ===== 1802f7ad0 FUN_1802f7ad0 ===== */

void FUN_1802f7ad0(undefined8 param_1)

{
  FUN_1804eced0(param_1,0x18,5,thunk_FUN_180068f30);
  return;
}



/* ===== 1802f7b00 FUN_1802f7b00 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1802f7b00(ulonglong param_1,char *param_2,char param_3,undefined8 *param_4,
                       undefined8 param_5)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  byte bVar5;
  uint uVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  float *pfVar9;
  char *pcVar10;
  float *pfVar11;
  longlong lVar12;
  undefined4 uVar13;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar14;
  ulonglong local_res8;
  char local_res20 [8];
  undefined8 in_stack_fffffffffffffed8;
  uint uVar16;
  longlong *plVar15;
  undefined8 in_stack_fffffffffffffee0;
  uint uVar17;
  undefined8 in_stack_fffffffffffffee8;
  undefined4 uVar18;
  ulonglong uVar19;
  float local_e8 [4];
  undefined4 local_d8;
  float local_d4;
  float local_d0;
  float fStack_cc;
  longlong local_c8;
  undefined8 uStack_c0;
  float local_b8;
  float local_b4;
  float local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  
  lVar12 = DAT_180ca0a50;
  uVar18 = (undefined4)((ulonglong)in_stack_fffffffffffffee8 >> 0x20);
  uVar17 = (uint)((ulonglong)in_stack_fffffffffffffee0 >> 0x20);
  uVar16 = (uint)((ulonglong)in_stack_fffffffffffffed8 >> 0x20);
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  lVar1 = *(longlong *)(lVar12 + 0x14f8);
  *(undefined1 *)(lVar1 + 0xce) = 1;
  lVar12 = *(longlong *)(lVar12 + 0x14f8);
  *(undefined8 *)(lVar12 + 0x118) = *param_4;
  *(undefined1 *)(lVar12 + 0x159) = 1;
  local_res8 = param_1;
  uVar6 = FUN_1803e8900(lVar1,"##chip");
  local_d8 = *(undefined4 *)param_4;
  local_d4 = *(float *)((longlong)param_4 + 4);
  local_d0 = (float)*param_4 + (float)*(undefined8 *)CONCAT44(param_5._4_4_,(float)param_5);
  fStack_cc = (float)((ulonglong)*param_4 >> 0x20) +
              (float)((ulonglong)*(undefined8 *)CONCAT44(param_5._4_4_,(float)param_5) >> 0x20);
  FUN_1803ec550();
  uVar8 = FUN_1803ec2f0(&local_d8,uVar6,0,0);
  if ((char)uVar8 == '\0') {
    return uVar8;
  }
  local_res20[0] = '\0';
  local_res8 = local_res8 & 0xffffffffffffff00;
  lVar12 = (ulonglong)uVar16 << 0x20;
  bVar5 = FUN_180415270(&local_d8,uVar6,local_res20,&local_res8,lVar12);
  fVar3 = DAT_1808ac34c;
  fVar2 = DAT_1808ac1f4;
  uVar7 = (undefined4)((ulonglong)lVar12 >> 0x20);
  if ((char)local_res8 == '\0') {
    if ((param_3 == '\0') && (local_res20[0] == '\0')) {
      local_b8 = 0.0;
    }
    else {
      local_b8 = DAT_1808ac1f4;
    }
  }
  else {
    local_b8 = DAT_1808ac34c;
  }
  param_5._0_4_ = (float)(uVar6 ^ 0x677e1785);
  local_ac = 0;
  local_a8 = 0xffffffff;
  local_b4 = local_b8;
  local_b0 = local_b8;
  FUN_18034a380(extraout_XMM0_Qa,&local_c8,&param_5,&local_b8);
  uVar14 = FUN_1802b3660(local_c8 + 0x14);
  if ((char)local_res8 == '\0' && param_3 == '\0') {
    if (local_res20[0] == '\0') {
      local_b8 = 0.0;
    }
    else {
      local_b8 = fVar2;
    }
  }
  else {
    local_b8 = fVar3;
  }
  param_5._0_4_ = (float)(uVar6 ^ 0xf3d3244);
  local_ac = 0;
  local_a8 = 0xffffffff;
  local_b4 = local_b8;
  local_b0 = local_b8;
  FUN_18034a380(uVar14,&local_c8,&param_5,&local_b8);
  uVar13 = FUN_1802b3660(local_c8 + 0x14);
  uVar4 = DAT_1808ac7ac;
  lVar1 = *(longlong *)(lVar1 + 0x2c8);
  uVar19 = (ulonglong)uVar17 << 0x20;
  FUN_1803fe590(lVar1,&local_d8,&local_d0,DAT_180960f60,CONCAT44(uVar7,DAT_1808ac7ac),uVar19);
  local_c8 = _DAT_1808adcf0;
  uStack_c0 = _UNK_1808adcf8;
  uVar7 = FUN_1802b38e0(DAT_180960eec,
                        (int)(longlong)((float)(DAT_1809f54bc >> 0x18) * DAT_1808ac1b0 + fVar2) <<
                        0x18 | DAT_1809f54bc & 0xffffff,uVar13);
  uVar19 = uVar19 & 0xffffffff00000000;
  plVar15 = &local_c8;
  FUN_18036bcb0(lVar1,&local_d8,&local_d0,uVar7,plVar15,uVar19,CONCAT44(uVar18,fVar3));
  local_e8[2] = 1.0;
  local_e8[0] = 0.0;
  local_e8[1] = (float)uVar14 * DAT_1808ac118 * DAT_1808ac2cc;
  uVar8 = CONCAT44((int)((ulonglong)plVar15 >> 0x20),uVar4);
  pfVar11 = local_e8;
  if (0.0 <= local_e8[1]) {
    pfVar11 = local_e8 + 1;
  }
  pfVar9 = local_e8 + 2;
  if (local_e8[1] <= fVar3) {
    pfVar9 = pfVar11;
  }
  FUN_1803fe590(lVar1,&local_d8,&local_d0,
                (int)(longlong)(*pfVar9 * DAT_1808acb94 + fVar2) << 0x18 | DAT_180960f44 & 0xffffff,
                uVar8,uVar19 & 0xffffffff00000000);
  uVar18 = DAT_1808ac930;
  lVar12 = DAT_181107a08;
  if (DAT_181107a08 == 0) {
    lVar12 = *(longlong *)(DAT_180ca0a50 + 0x11f0);
  }
  pcVar10 = param_2;
  if (0xf < *(ulonglong *)(param_2 + 0x18)) {
    pcVar10 = *(char **)param_2;
  }
  uVar19 = 0;
  uVar8 = uVar8 & 0xffffffff00000000;
  FUN_18040a2f0(&param_5,lVar12,DAT_1808ac930,DAT_1808acd08,uVar8,pcVar10,0,0,0);
  uVar7 = (undefined4)(uVar8 >> 0x20);
  FUN_18053fc00((float)param_5 + DAT_1808ac2f0);
  param_5._0_4_ = (float)FUN_18053fc00();
  param_5._4_4_ = FUN_18053fc00((fStack_cc + local_d4) * fVar2 - DAT_1808ac840);
  if (0xf < *(ulonglong *)(param_2 + 0x18)) {
    param_2 = *(char **)param_2;
  }
  uVar6 = FUN_1802b38e0(DAT_180960ef8,DAT_180960ec8,uVar13);
  if ((((uVar6 & 0xff000000) != 0) && (param_2 != (char *)0x0)) && (*param_2 != '\0')) {
    if (lVar12 == 0) {
      lVar12 = *(longlong *)(*(longlong *)(lVar1 + 0x38) + 0x18);
    }
    local_c8 = *(longlong *)(lVar1 + 0x60);
    uStack_c0 = *(undefined8 *)(lVar1 + 0x68);
    FUN_18040a900(lVar12,lVar1,uVar18,&param_5,CONCAT44(uVar7,uVar6),&local_c8,param_2,0,
                  uVar19 & 0xffffffff00000000,0);
  }
  return (ulonglong)bVar5;
}



/* ===== 1802f8000 FUN_1802f8000 ===== */

undefined8 FUN_1802f8000(undefined8 param_1)

{
  longlong lVar1;
  float fVar2;
  undefined8 *puVar3;
  char cVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  float fVar9;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 local_48;
  undefined4 local_44;
  float local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined8 local_28;
  longlong local_20;
  undefined4 local_18;
  
  local_res8 = param_1;
  uVar5 = FUN_1803e8900(*(undefined8 *)(DAT_180ca0a50 + 0x14f8),"##manageels");
  uVar7 = FUN_1802b4e80(uVar5);
  FUN_1802b6190(uVar5,uVar7);
  local_res8 = 0x40e0000040e00000;
  FUN_1803d89a0(2,&local_res8);
  FUN_1803d8870(10,0);
  FUN_1803d8730(4,0);
  if (*(int *)(DAT_180ca0a50 + 0x2020) <= *(int *)(DAT_180ca0a50 + 0x2030)) {
    *(undefined4 *)(DAT_180ca0a50 + 0x1f38) = 0;
    FUN_1803d87f0(1);
    FUN_1803d8a40(2);
    return 0;
  }
  uVar6 = FUN_1803e8900(*(undefined8 *)(DAT_180ca0a50 + 0x14f8),"##manageels");
  cVar4 = FUN_1803ee2d0(uVar6,0x15d);
  FUN_1803d87f0(1);
  FUN_1803d8a40(2);
  lVar8 = DAT_180ca0a50;
  fVar2 = DAT_1808ac34c;
  if (cVar4 == '\0') {
    return 0;
  }
  lVar1 = *(longlong *)(DAT_180ca0a50 + 0x14f8);
  uVar7 = *(undefined8 *)(lVar1 + 0x28);
  local_res10._4_4_ = (float)((ulonglong)uVar7 >> 0x20);
  *(undefined1 *)(lVar1 + 0xce) = 1;
  local_res8 = CONCAT44(local_res10._4_4_ + *(float *)(lVar1 + 0x34),
                        (float)uVar7 + *(float *)(lVar1 + 0x30));
  lVar1 = *(longlong *)(*(longlong *)(lVar8 + 0x14f8) + 0x2c8);
  local_3c = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  local_48 = DAT_180960ee0;
  local_44 = DAT_180960eec;
  fVar9 = fVar2;
  if (DAT_180cd0fd8 != '\0') {
    fVar9 = DAT_1809f7440;
  }
  local_38 = 0;
  local_40 = DAT_1808ac000;
  if (DAT_1808ac000 <= fVar9) {
    local_40 = fVar9;
  }
  local_30 = 0x3f800000;
  local_40 = fVar2 / local_40;
  local_34 = *(undefined4 *)(lVar8 + 0xcd4);
  fVar9 = DAT_1809f7440;
  if (DAT_180cd0fd8 == '\0') {
    fVar9 = fVar2;
  }
  local_res10 = uVar7;
  lVar8 = FUN_180368270(lVar1,&local_res10,&local_res8,fVar9);
  if (lVar8 != 0) {
    local_18 = 0x3f800000;
    local_20 = lVar8;
  }
  FUN_18036d070(lVar1,&local_res10,&local_res8,&local_48);
  FUN_1802b6490(uVar5,1,0,0);
  local_res8 = 0x40e0000040a00000;
  uVar7 = FUN_1803d89a0(0xe,&local_res8);
  puVar3 = DAT_1811074c0;
  uStack_54 = *(undefined4 *)(lVar1 + 0x20);
  local_50 = CONCAT31(local_50._1_3_,1);
  if (DAT_1811074c0 == DAT_1811074c8) {
    local_58 = uVar5;
    FUN_180354d50(uVar7,DAT_1811074c0,&local_58);
  }
  else {
    *DAT_1811074c0 = CONCAT44(uStack_54,uVar5);
    *(undefined4 *)(puVar3 + 1) = local_50;
    DAT_1811074c0 = (undefined8 *)((longlong)DAT_1811074c0 + 0xc);
  }
  return 1;
}



/* ===== 1802f8290 FUN_1802f8290 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802f8290(longlong param_1,int param_2,float param_3,float param_4)

{
  float fVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  char ******ppppppcVar9;
  char cVar10;
  byte bVar11;
  int iVar12;
  char *_Str;
  size_t sVar13;
  char *******pppppppcVar14;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong lVar18;
  ulonglong uVar19;
  float *pfVar20;
  longlong lVar21;
  undefined1 *puVar22;
  uint uVar23;
  longlong lVar24;
  uint uVar25;
  int *piVar26;
  ulonglong uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined1 auStack_308 [8];
  undefined1 auStack_300 [24];
  undefined8 local_2e8;
  char *******local_2e0;
  char *******local_2d8;
  undefined8 local_2d0;
  ulonglong local_2c8;
  undefined4 local_2c0;
  undefined4 local_2b8;
  char local_2a8;
  float local_2a4;
  float local_2a0;
  uint local_29c;
  uint local_298;
  longlong local_290;
  float local_288;
  float local_284;
  float local_280;
  float local_27c;
  float local_278;
  float *local_270;
  float *pfStack_268;
  float *local_260;
  float local_258;
  float local_254;
  float local_250;
  float local_24c;
  longlong local_248;
  ulonglong *puStack_240;
  ulonglong *local_238;
  longlong local_230;
  float local_228;
  float local_224;
  float local_220;
  float local_21c;
  float local_218;
  float local_214;
  float local_210;
  float local_20c;
  float local_208;
  float local_204;
  int *local_200;
  undefined8 uStack_1f8;
  float local_1f0 [2];
  longlong local_1e8;
  char ******local_1e0;
  undefined8 uStack_1d8;
  ulonglong local_1d0;
  longlong local_1c8 [7];
  char *******local_190 [3];
  ulonglong local_178;
  longlong local_168 [16];
  ulonglong local_e8;
  
  lVar21 = DAT_180ca0a50;
  local_e8 = DAT_180919500 ^ (ulonglong)auStack_308;
  local_29c = 0;
  if ((param_2 != 0) && (param_2 != 1)) {
    return;
  }
  local_1d0 = (ulonglong)(-(uint)(param_2 != 0) & 0x998);
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  fVar1 = *(float *)(*(longlong *)(lVar21 + 0x14f8) + 0x58);
  fVar34 = *(float *)(lVar21 + 0xcb0);
  fVar28 = *(float *)(*(longlong *)(lVar21 + 0x14f8) + 0x2c) + DAT_1808aca54;
  *(uint *)(lVar21 + 0x1f38) = *(uint *)(lVar21 + 0x1f38) | 1;
  fVar31 = DAT_1808ac750;
  *(float *)(lVar21 + 0x1f48) = param_3 + DAT_1808ac750;
  *(float *)(lVar21 + 0x1f4c) = fVar28;
  *(undefined8 *)(lVar21 + 0x1f50) = 0;
  *(undefined4 *)(lVar21 + 0x1f3c) = 1;
  cVar10 = FUN_1802f8000(0,-param_2);
  lVar18 = DAT_180ca0a50;
  if (cVar10 == '\0') {
    return;
  }
  fVar34 = ((param_4 - fVar1) - fVar31) - fVar34;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  fVar1 = DAT_1808ac7ec;
  lVar24 = *(longlong *)(lVar18 + 0x14f8);
  lVar2 = *(longlong *)(lVar24 + 0x2c8);
  local_290 = DAT_181107a18;
  local_230 = DAT_181107a08;
  if (DAT_181107a18 == 0) {
    local_290 = DAT_181107a08;
    if (DAT_181107a08 == 0) {
      local_290 = *(longlong *)(lVar18 + 0x11f0);
      local_230 = local_290;
    }
  }
  else if (DAT_181107a08 == 0) {
    local_230 = *(longlong *)(lVar18 + 0x11f0);
  }
  lVar15 = local_290;
  fVar31 = (*(float *)(lVar24 + 0x118) - *(float *)(lVar24 + 0x28)) + *(float *)(lVar24 + 0x98) +
           DAT_1808ac7ec;
  *(undefined1 *)(lVar24 + 0xce) = 1;
  lVar18 = *(longlong *)(lVar18 + 0x14f8);
  *(float *)(lVar18 + 0x118) = (*(float *)(lVar18 + 0x28) - *(float *)(lVar18 + 0x98)) + fVar31;
  *(undefined1 *)(lVar18 + 0x159) = 1;
  local_24c = fVar34;
  local_1e8 = lVar2;
  FUN_1802b3fe0(local_190,"esp items");
  uVar6 = DAT_1808ac940;
  fVar31 = *(float *)(lVar24 + 0x118);
  fVar28 = *(float *)(lVar24 + 0x11c);
  local_2e0 = (char *******)local_190;
  if (0xf < local_178) {
    local_2e0 = local_190[0];
  }
  local_2b8 = 0;
  local_2c8 = 0;
  local_2d0 = 0;
  local_2d8 = (char *******)0x0;
  local_2e8 = (int **)((ulonglong)local_2e8._4_4_ << 0x20);
  FUN_18040a2f0(&local_284,lVar15,DAT_1808ac940,DAT_1808acd08);
  local_2a4 = (float)FUN_18053fc00(local_284 + DAT_1808ac2f0);
  local_2a0 = 29.706;
  FUN_1804174f0(&local_2a4);
  pppppppcVar14 = (char *******)local_190;
  if (0xf < local_178) {
    pppppppcVar14 = local_190[0];
  }
  local_2a0 = fVar28 + _DAT_1808ac780;
  if ((((DAT_180960ec8 & 0xff000000) != 0) && (pppppppcVar14 != (char *******)0x0)) &&
     (*(char *)pppppppcVar14 != '\0')) {
    if (lVar15 == 0) {
      lVar15 = *(longlong *)(*(longlong *)(lVar2 + 0x38) + 0x18);
    }
    local_1e0 = *(char *******)(lVar2 + 0x60);
    uStack_1d8 = *(undefined8 *)(lVar2 + 0x68);
    local_2c0 = 0;
    local_2c8 = local_2c8 & 0xffffffff00000000;
    local_2d0 = 0;
    local_2e0 = &local_1e0;
    local_2e8 = (int **)CONCAT44(local_2e8._4_4_,DAT_180960ec8);
    local_2d8 = pppppppcVar14;
    local_2a4 = fVar31;
    FUN_18040a900(lVar15,lVar2,uVar6,&local_2a4);
  }
  fVar33 = DAT_1808ac34c;
  local_278 = *(float *)(lVar24 + 0x11c);
  local_2a4 = ((*(float *)(lVar24 + 0x28) + *(float *)(lVar24 + 0x30)) - *(float *)(lVar24 + 0x58))
              - *(float *)(lVar24 + 0xc0);
  local_2a0 = local_278 + DAT_1808ac34c;
  local_27c = *(float *)(lVar24 + 0x58) + *(float *)(lVar24 + 0x28);
  local_2e0 = (char *******)((ulonglong)local_2e0 & 0xffffffff00000000);
  local_2e8 = (int **)((ulonglong)local_2e8 & 0xffffffff00000000);
  FUN_1803fe590(lVar2,&local_27c,&local_2a4,
                (int)(longlong)
                     ((float)(DAT_180960f48 >> 0x18) * *(float *)(lVar21 + 0xc9c) + DAT_1808ac1f4)
                << 0x18 | DAT_180960f48 & 0xffffff);
  local_2a4 = 0.0;
  local_2a0 = 1.0;
  FUN_1803ec550(&local_2a4,DAT_1808acda0);
  FUN_1800aa690();
  FUN_1802f7850(local_168,param_1,param_2 == 0);
  fVar7 = DAT_1808ac9b0;
  fVar5 = DAT_1808ac930;
  fVar31 = *(float *)(lVar24 + 0x118);
  fVar28 = *(float *)(lVar24 + 0x11c);
  cVar10 = '\x01';
  local_298 = 0;
  fVar32 = fVar31 + DAT_1808ac8b0;
  local_250 = (fVar34 - fVar33) + fVar31;
  local_258 = local_250 - DAT_1808ac8b0;
  local_2a4 = fVar28;
  local_288 = fVar32;
  local_27c = fVar31;
  do {
    uVar19 = (ulonglong)local_298;
    local_1e0 = (char ******)(uVar19 * 3);
    piVar26 = (int *)local_168[uVar19 * 3];
    local_200 = (int *)local_168[uVar19 * 3 + 1];
    if (piVar26 != local_200) {
      fVar34 = fVar28;
      if (cVar10 == '\0') {
        fVar34 = fVar28 + fVar1;
      }
      fVar35 = fVar34 + fVar1;
      fVar33 = fVar35 + fVar5 + DAT_1808ac658 + fVar1;
      bVar4 = true;
      local_248 = 0;
      puStack_240 = (ulonglong *)0x0;
      local_238 = (ulonglong *)0x0;
      local_270 = (float *)0x0;
      pfStack_268 = (float *)0x0;
      local_260 = (float *)0x0;
      local_1c8[0] = 0;
      local_1c8[1] = 0;
      local_1c8[2] = 0;
      fVar28 = fVar33;
      do {
        puVar22 = auStack_308;
        iVar12 = *piVar26;
        _Str = (char *)FUN_1803b3840(param_1,iVar12);
        if (iVar12 - 0x1dU < 0x10) {
          local_1c8[3] = 0;
          local_1c8[4] = 0;
          local_1c8[5] = 0;
          local_1c8[6] = 0;
          sVar13 = strlen(_Str);
          FUN_1800133a0(local_1c8 + 3,_Str,sVar13);
        }
        else {
          FUN_1802b3fe0(local_1c8 + 3,_Str);
        }
        if (puStack_240 == local_238) {
          FUN_18009bb20(&local_248,puStack_240,local_1c8 + 3);
        }
        else {
          *puStack_240 = 0;
          puStack_240[1] = 0;
          puStack_240[2] = 0;
          puStack_240[3] = 0;
          *puStack_240 = local_1c8[3];
          puStack_240[1] = local_1c8[4];
          puStack_240[2] = local_1c8[5];
          puStack_240[3] = local_1c8[6];
          local_1c8[5] = 0;
          local_1c8[6] = 0xf;
          local_1c8[3] = local_1c8[3] & 0xffffffffffffff00;
          puStack_240 = puStack_240 + 4;
        }
        if (0xf < (ulonglong)local_1c8[6]) {
          uVar19 = local_1c8[6] + 1;
          uVar16 = local_1c8[3];
          if (0xfff < uVar19) {
            uVar16 = *(ulonglong *)(local_1c8[3] - 8);
            if (0x1f < (local_1c8[3] - uVar16) - 8) {
              pcVar3 = (code *)swi(0x29);
              (*pcVar3)(5);
              puVar22 = auStack_300;
              goto LAB_1802f8f51;
            }
            uVar19 = local_1c8[6] + 0x28;
          }
          thunk_FUN_1803d64e0(uVar16,uVar19);
        }
        local_2e0 = (char *******)(puStack_240 + -4);
        if (0xf < puStack_240[-1]) {
          local_2e0 = (char *******)*local_2e0;
        }
        local_2b8 = 0;
        local_2c8 = 0;
        local_2d0 = 0;
        local_2d8 = (char *******)0x0;
        local_2e8 = (int **)((ulonglong)local_2e8 & 0xffffffff00000000);
        FUN_18040a2f0(local_1f0,local_230,fVar5,DAT_1808acd08);
        fVar29 = (float)FUN_18053fc00(local_1f0[0] + DAT_1808ac2f0);
        pfVar20 = pfStack_268;
        fVar29 = fVar29 + DAT_1808ac934;
        if (local_258 - fVar32 < fVar29) {
          fVar31 = fVar7;
          if (bVar4) {
            fVar31 = fVar33 + fVar5;
            if (fVar33 + fVar5 <= fVar28) {
              fVar31 = fVar28;
            }
            fVar28 = fVar31;
            fVar31 = fVar5;
          }
          fVar33 = fVar33 + fVar31 + fVar1;
          fVar32 = local_288;
        }
        if (pfStack_268 == local_260) {
          uVar19 = (longlong)pfStack_268 - (longlong)local_270;
          lVar21 = (longlong)uVar19 >> 3;
          if (lVar21 == 0x1fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
            FUN_1800118d0();
          }
          uVar16 = lVar21 + 1;
          uVar17 = (longlong)local_260 - (longlong)local_270 >> 3;
          if (0x1fffffffffffffff - (uVar17 >> 1) < uVar17) {
            uVar27 = 0x1fffffffffffffff;
          }
          else {
            uVar17 = (uVar17 >> 1) + uVar17;
            uVar27 = uVar16;
            if (uVar16 <= uVar17) {
              uVar27 = uVar17;
            }
            if (0x1fffffffffffffff < uVar27) {
LAB_1802f8f51:
                    /* WARNING: Subroutine does not return */
              *(undefined **)(puVar22 + -8) = &UNK_1802f8f56;
              FUN_18000d840();
            }
          }
          lVar21 = FUN_18000fb70(uVar27 * 8);
          uVar19 = uVar19 & 0xfffffffffffffff8;
          *(float *)(uVar19 + lVar21) = fVar32;
          *(float *)(uVar19 + 4 + lVar21) = fVar33;
          if (pfVar20 == pfStack_268) {
            lVar24 = (longlong)pfStack_268 - (longlong)local_270;
            lVar18 = lVar21;
            pfVar20 = local_270;
          }
          else {
            FUN_180540530(lVar21,local_270,(longlong)pfVar20 - (longlong)local_270);
            lVar24 = (longlong)pfStack_268 - (longlong)pfVar20;
            lVar18 = uVar19 + 8 + lVar21;
          }
          FUN_180540530(lVar18,pfVar20,lVar24);
          FUN_18002b8d0(&local_270,lVar21,uVar16,uVar27);
        }
        else {
          *pfStack_268 = fVar32;
          pfStack_268[1] = fVar33;
          pfStack_268 = pfStack_268 + 2;
        }
        uVar19 = 0;
        uVar23 = local_29c | 1;
        local_29c = uVar23;
        local_254 = fVar29;
        FUN_180066e60(local_1c8,&local_254);
        lVar21 = local_1e8;
        fVar8 = local_250;
        fVar31 = local_27c;
        fVar30 = fVar33 + fVar7;
        if (fVar30 <= fVar28) {
          fVar30 = fVar28;
        }
        fVar28 = fVar30;
        bVar4 = false;
        fVar32 = fVar32 + fVar29 + DAT_1808ac750;
        piVar26 = piVar26 + 1;
      } while (piVar26 != local_200);
      local_228 = local_250;
      fVar28 = (fVar28 - fVar34) + fVar1 + fVar34;
      local_220 = local_27c;
      local_2e0 = (char *******)((ulonglong)local_2e0 & 0xffffffff00000000);
      local_2e8 = (int **)CONCAT44(local_2e8._4_4_,DAT_1808ac864);
      local_224 = fVar28;
      local_21c = fVar34;
      FUN_1803fe590(local_1e8,&local_220,&local_228,DAT_180960f60);
      local_218 = fVar8;
      local_210 = fVar31;
      local_200 = _DAT_1808add60;
      uStack_1f8 = _UNK_1808add68;
      local_2d8 = (char *******)CONCAT44(local_2d8._4_4_,DAT_1808ac34c);
      local_2e0 = (char *******)((ulonglong)local_2e0 & 0xffffffff00000000);
      local_2e8 = &local_200;
      local_214 = fVar28;
      local_20c = fVar34;
      FUN_18036bcb0(lVar21,&local_210,&local_218,DAT_180960eec);
      uVar25 = local_298;
      uVar16 = (ulonglong)local_298;
      pppppppcVar14 = (char *******)FUN_1802b3fe0(local_1c8 + 3,(&PTR_DAT_180658518)[uVar16]);
      lVar18 = local_290;
      if ((char ******)0xf < pppppppcVar14[3]) {
        pppppppcVar14 = (char *******)*pppppppcVar14;
      }
      local_2a8 = '\0';
      local_208 = local_288;
      local_204 = fVar35;
      if ((((DAT_180960ec8 & 0xff000000) != 0) && (pppppppcVar14 != (char *******)0x0)) &&
         (*(char *)pppppppcVar14 != '\0')) {
        lVar24 = local_290;
        if (local_290 == 0) {
          lVar24 = *(longlong *)(*(longlong *)(lVar21 + 0x38) + 0x18);
        }
        local_200 = *(int **)(lVar21 + 0x60);
        uStack_1f8 = *(undefined8 *)(lVar21 + 0x68);
        local_2c0 = 0;
        local_2c8 = local_2c8 & 0xffffffff00000000;
        local_2d0 = 0;
        local_2e0 = (char *******)&local_200;
        local_2e8 = (int **)CONCAT44(local_2e8._4_4_,DAT_180960ec8);
        local_2d8 = pppppppcVar14;
        FUN_18040a900(lVar24,lVar21,fVar5,&local_208);
      }
      FUN_18000f890(local_1c8 + 3);
      FUN_1803e8a70(uVar16);
      uVar16 = local_1d0;
      ppppppcVar9 = local_1e0;
      lVar21 = local_168[(longlong)local_1e0];
      local_290 = lVar18;
      cVar10 = '\0';
      if (local_168[(longlong)local_1e0 + 1] - lVar21 >> 2 != 0) {
        do {
          uVar23 = *(uint *)(lVar21 + uVar19 * 4);
          lVar21 = (longlong)(int)uVar23;
          FUN_1803e8a70(uVar23);
          bVar11 = FUN_1803b3750(param_1,uVar23);
          local_284 = *(float *)(local_1c8[0] + uVar19 * 4);
          local_280 = 26.706;
          local_2e8 = (int **)&local_284;
          cVar10 = FUN_1802f7b00(local_270,uVar19 * 0x20 + local_248,bVar11,local_270 + uVar19 * 2);
          if (cVar10 != '\0') {
            if (uVar23 - 0x1d < 0x10) {
              *(byte *)(param_1 + 0x4f4 + lVar21 * 0x74) = bVar11 ^ 1;
            }
            else if (uVar23 < 0x1d) {
              *(byte *)(param_1 + 4 + lVar21 * 0x98) = bVar11 ^ 1;
            }
          }
          if ((*(int *)(DAT_180ca0a50 + 0x1578) != 0) &&
             (*(int *)(DAT_180ca0a50 + 0x1578) == *(int *)(DAT_180ca0a50 + 0x1ee8))) {
            lVar18 = DAT_180ca0a50;
            iVar12 = FUN_1803b36b0(param_1,uVar23);
            if ((iVar12 != 4) && (DAT_1808ac0e8 < *(float *)(lVar18 + 0x1580))) {
              cVar10 = FUN_1803b3750(param_1,uVar23);
              if (cVar10 == '\0') {
                if (uVar23 - 0x1d < 0x10) {
                  *(undefined1 *)(param_1 + 0x4f4 + lVar21 * 0x74) = 1;
                }
                else if (uVar23 < 0x1d) {
                  *(undefined1 *)(param_1 + 4 + lVar21 * 0x98) = 1;
                }
              }
              *(undefined1 *)(uVar16 + 0x1809f5c2b + lVar21 * 0x34) = 1;
              FUN_1803ee1f0();
            }
          }
          cVar10 = FUN_1803e9690(1,0,0);
          if ((cVar10 != '\0') && (cVar10 = FUN_1803dd930(), cVar10 != '\0')) {
            if (uVar23 - 0x1d < 0x10) {
              lVar21 = FUN_1800aa7a0(param_1,lVar21 + -0x1d);
              if (lVar21 != 0) goto LAB_1802f8d39;
            }
            else if (uVar23 < 0x1d) {
LAB_1802f8d39:
              FUN_1802b4d80();
            }
            lVar21 = DAT_180ca0a50;
            *(uint *)(DAT_180ca0a50 + 0x1f38) = *(uint *)(DAT_180ca0a50 + 0x1f38) | 1;
            *(undefined8 *)(lVar21 + 0x1f48) = *(undefined8 *)(lVar21 + 0x110);
            *(undefined8 *)(lVar21 + 0x1f50) = 0;
            *(undefined4 *)(lVar21 + 0x1f3c) = 1;
          }
          FUN_1802f62d0("options",param_1,uVar23);
          iVar12 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
          if (iVar12 < 2) {
            FUN_1803ebc00("Calling PopID() too many times!");
          }
          else {
            *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar12 + -1;
          }
          uVar19 = uVar19 + 1;
          lVar21 = local_168[(longlong)ppppppcVar9];
        } while (uVar19 < (ulonglong)(local_168[(longlong)ppppppcVar9 + 1] - lVar21 >> 2));
        uVar23 = local_29c;
        uVar25 = local_298;
        cVar10 = local_2a8;
      }
      iVar12 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
      if (iVar12 < 2) {
        FUN_1803ebc00("Calling PopID() too many times!");
      }
      else {
        *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar12 + -1;
      }
      FUN_180068f30(local_1c8);
      FUN_1800132b0(&local_270);
      FUN_1800288b0(&local_248);
      fVar32 = local_288;
      local_298 = uVar25;
      local_29c = uVar23;
    }
    lVar21 = DAT_180ca0a50;
    local_298 = local_298 + 1;
    if (4 < (int)local_298) {
      *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
      lVar21 = *(longlong *)(lVar21 + 0x14f8);
      *(float *)(lVar21 + 0x118) = fVar31;
      *(float *)(lVar21 + 0x11c) = local_2a4;
      *(undefined1 *)(lVar21 + 0x159) = 1;
      local_284 = local_24c;
      local_280 = 0.0;
      if (0.0 <= fVar28 - local_2a4) {
        local_280 = fVar28 - local_2a4;
      }
      FUN_1804174f0(&local_284);
      FUN_1802b5590();
      FUN_1804eced0(local_168,0x18,5,thunk_FUN_180068f30);
      FUN_18000f890(local_190);
      return;
    }
  } while( true );
}



/* ===== 1802f8f60 FUN_1802f8f60 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802f8f60(void)

{
  longlong lVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  byte bVar6;
  longlong *plVar7;
  longlong lVar8;
  char *pcVar9;
  ulonglong uVar10;
  float fVar11;
  float local_res8 [2];
  undefined8 local_res10;
  undefined4 local_res18 [2];
  float local_res20;
  undefined4 uStackX_24;
  undefined8 local_c8;
  undefined8 local_c0;
  longlong local_b8;
  longlong local_b0 [2];
  undefined8 *local_a0;
  undefined8 *local_98;
  float *local_90;
  longlong *local_88;
  float *local_80;
  undefined4 *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  
  lVar1 = DAT_180ca0a50;
  if (DAT_1811074f8 - 2 < 2) {
    DAT_1811074f8 = 1;
  }
  uVar4 = DAT_1811074f8;
  if (DAT_181107484 - 2 < 2) {
    DAT_181107484 = 1;
  }
  uVar3 = DAT_181107484;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  fVar2 = DAT_1808ac864;
  local_b8 = *(longlong *)(lVar1 + 0x14f8);
  local_c8 = *(undefined8 *)(local_b8 + 0x118);
  fVar11 = (float)local_c8;
  if ((*(longlong *)(local_b8 + 0x1c8) != 0) || (lVar8 = 0x280, *(longlong *)(lVar1 + 0x2360) != 0))
  {
    lVar8 = 0x250;
  }
  local_res8[0] =
       (float)FUN_18053f0d0((((*(float *)(local_b8 + lVar8) - *(float *)(local_b8 + 0x118)) - 0.0) -
                            DAT_1808ac864) * DAT_1808ac1f4);
  pcVar9 = "players_entity_fade";
  uVar10 = 0xffffffff;
  bVar6 = 0x70;
  local_res20 = local_res8[0] + fVar11 + fVar2;
  uStackX_24 = local_c8._4_4_;
  do {
    pcVar9 = pcVar9 + 1;
    if (((bVar6 == 0x23) && (*pcVar9 == 0x23)) && (pcVar9[1] == 0x23)) {
      uVar10 = 0xffffffff;
      pcVar9 = pcVar9 + 2;
    }
    else {
      uVar10 = (ulonglong)
               ((uint)(uVar10 >> 8) ^
               *(uint *)(&DAT_1806c25c0 + (uVar10 & 0xff ^ (ulonglong)bVar6) * 4));
    }
    bVar6 = *pcVar9;
  } while (bVar6 != 0);
  if (uVar4 != uVar3) {
    local_res10 = CONCAT44(local_res10._4_4_,~(uint)uVar10);
    DAT_181107484 = uVar4;
    DAT_181107674 = uVar3;
    plVar7 = (longlong *)FUN_18034f560();
    lVar1 = *plVar7;
    *(undefined8 *)(lVar1 + 0x14) = 0;
    *(undefined8 *)(lVar1 + 0x1c) = 0;
    *(undefined4 *)(lVar1 + 0x24) = 0xffffffff;
  }
  local_res10 = CONCAT44(local_res10._4_4_,~(uint)uVar10);
  local_60 = 0xffffffff;
  local_70 = _DAT_1808ad560;
  uStack_68 = _UNK_1808ad568;
  FUN_18034a380(_DAT_1808ad560,local_b0,&local_res10,&local_70);
  fVar2 = DAT_1808ac34c;
  fVar11 = (float)FUN_1802b3660(local_b0[0] + 0x14,DAT_1808ac34c,DAT_1808ac118,0);
  uVar4 = DAT_181107484;
  lVar1 = DAT_180ca0a50;
  lVar8 = 0;
  if (DAT_181107484 < 4) {
    lVar8 = (longlong)(int)DAT_181107484;
  }
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  lVar1 = *(longlong *)(lVar1 + 0x14f8);
  *(ulonglong *)(lVar1 + 0x118) = CONCAT44(uStackX_24,local_res20);
  *(undefined1 *)(lVar1 + 0x159) = 1;
  FUN_1802f4a40();
  lVar1 = DAT_180ca0a50;
  local_res18[0] = *(undefined4 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x11c);
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  local_c0 = *(undefined8 *)(*(longlong *)(lVar1 + 0x14f8) + 0x2c8);
  local_a0 = &local_c0;
  local_98 = &local_c8;
  local_90 = local_res8;
  local_88 = &local_b8;
  local_80 = &local_res20;
  local_78 = local_res18;
  if ((fVar11 < fVar2) && (DAT_181107674 != DAT_181107484)) {
    FUN_1802f92a0(&local_a0,&local_res10,DAT_181107674,fVar2 - fVar11);
  }
  FUN_1802f92a0(&local_a0,&local_res10,DAT_181107484,fVar11);
  FUN_1802f8290(&DAT_18091a1e0 + lVar8 * 0x192c,uVar4,local_res20,local_res8[0]);
  uVar5 = local_res10;
  lVar1 = DAT_180ca0a50;
  local_res10 = 0;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  lVar1 = *(longlong *)(lVar1 + 0x14f8);
  *(undefined8 *)(lVar1 + 0x118) = uVar5;
  *(undefined1 *)(lVar1 + 0x159) = 1;
  FUN_1804174f0(&local_res10);
  return;
}



/* ===== 1802f92a0 FUN_1802f92a0 ===== */

undefined8 * FUN_1802f92a0(undefined8 *param_1,undefined8 *param_2,uint param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  float *pfVar5;
  longlong *plVar6;
  longlong lVar7;
  char *pcVar8;
  longlong lVar9;
  undefined1 *puVar10;
  float local_res8;
  float local_resc;
  float local_res10;
  float local_res14;
  undefined4 local_res18 [2];
  undefined1 *local_c8;
  undefined1 local_c0 [8];
  undefined8 local_b8;
  undefined **local_b0;
  undefined4 local_a8;
  undefined *local_a0;
  undefined8 local_98;
  undefined1 local_90;
  undefined8 local_88;
  undefined8 *local_80;
  undefined4 local_78;
  undefined4 *local_70;
  code *local_68;
  undefined1 **local_60;
  undefined1 local_58;
  
  lVar7 = 0;
  if (param_3 < 4) {
    lVar7 = (longlong)(int)param_3;
  }
  lVar9 = lVar7 * 0x192c;
  puVar10 = &DAT_18091a1e0 + lVar9;
  FUN_1803e8a70(param_3);
  lVar4 = DAT_180ca0a50;
  puVar3 = (undefined8 *)param_1[1];
  uVar1 = *(undefined4 *)(*(longlong *)*param_1 + 0x20);
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  lVar4 = *(longlong *)(lVar4 + 0x14f8);
  *(undefined8 *)(lVar4 + 0x118) = *puVar3;
  *(undefined1 *)(lVar4 + 0x159) = 1;
  FUN_1802b8a20(*(undefined4 *)param_1[2]);
  pcVar8 = "teammate";
  if (param_3 == 0) {
    pcVar8 = "enemy";
  }
  FUN_1802b9110(pcVar8);
  FUN_1803e89e0("esp_group");
  DAT_181106f20 = "Toggle teammate ESP features";
  if (param_3 == 0) {
    DAT_181106f20 = "Toggle enemy ESP features";
  }
  FUN_1802c0a60("enabled",puVar10);
  if (param_3 == 0) {
    DAT_181106f20 = "Show arrows pointing to enemies outside screen bounds";
    FUN_1802c0a60("offscreen arrow",&DAT_18091b388 + lVar9);
    FUN_1803ec6c0(0,DAT_1808acda0);
    local_c8 = puVar10;
    FUN_1802ceb60(local_c0,"##arrow_color");
    local_90 = 1;
    local_98 = 0;
    local_a0 = &DAT_18091b38c + lVar9;
    local_88 = 0;
    local_b0 = &local_a0;
    local_b8 = 0;
    local_80 = &local_b8;
    local_res18[0] = 0;
    local_70 = local_res18;
    local_68 = FUN_18034bb20;
    local_60 = &local_c8;
    local_58 = 0;
    local_a8 = 1;
    local_78 = 1;
    FUN_1802ce6f0("##arrow_color",&local_80,local_c0);
    DAT_181106f20 = "Visual indicators for enemy sounds";
    FUN_1802c0a60("sounds",&DAT_18091b3a4 + lVar9);
    FUN_1803ec6c0(0,DAT_1808acda0);
    FUN_1802cedb0("##sound_color",&DAT_18091b3a8 + lVar7 * 0x64b,1);
  }
  iVar2 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
  if (iVar2 < 2) {
    FUN_1803ebc00("Calling PopID() too many times!");
  }
  else {
    *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar2 + -1;
  }
  if (param_3 == 0) {
    FUN_1802d05e0(puVar10);
  }
  else if (param_3 == 1) {
    FUN_1802b9110("teammate model");
    FUN_1803e89e0("teammate_model");
    DAT_181106f20 = "Modify how teammate player models are rendered";
    FUN_1802d0470("player",&DAT_18092088c);
    DAT_181106f20 = "Show teammates through walls";
    FUN_1802d0470("behind walls",&DAT_1809208e4);
    DAT_181106f20 = "Hide teammate models completely";
    FUN_1802c0a60("disable model rendering",&DAT_18092093c);
    DAT_181106f20 = "Glow effects around teammates";
    FUN_1802c0a60(&DAT_1806f83d8,&DAT_18091baf8 + lVar9);
    FUN_1803ec6c0(0,DAT_1808acda0);
    FUN_1802cedb0("##glow_color",&DAT_18091bafc + lVar9,1);
    iVar2 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
    if (iVar2 < 2) {
      FUN_1803ebc00("Calling PopID() too many times!");
    }
    else {
      *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar2 + -1;
    }
    FUN_1802d1ac0(&DAT_18091d438);
  }
  FUN_1802b9760();
  lVar7 = DAT_180ca0a50;
  local_resc = DAT_1808ac7ec;
  pfVar5 = (float *)param_1[4];
  plVar6 = (longlong *)param_1[3];
  *param_2 = *(undefined8 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x118);
  local_res10 = *pfVar5;
  local_res14 = *(float *)(*plVar6 + 0x23c) + local_resc;
  if (local_res14 <= *(float *)param_1[5]) {
    local_res14 = *(float *)param_1[5];
  }
  local_resc = *(float *)(*plVar6 + 0x244) - local_resc;
  local_res8 = *(float *)param_1[2] + *pfVar5;
  if (DAT_1808acb18 < local_resc - local_res14) {
    FUN_1802f6830(&local_res10,&local_res8,puVar10,param_3,param_4);
    lVar7 = DAT_180ca0a50;
  }
  FUN_1802b3c30(*(longlong *)*param_1,uVar1,*(undefined4 *)(*(longlong *)*param_1 + 0x20),param_4);
  iVar2 = *(int *)(*(longlong *)(lVar7 + 0x14f8) + 0x108);
  if (iVar2 < 2) {
    FUN_1803ebc00("Calling PopID() too many times!");
  }
  else {
    *(int *)(*(longlong *)(lVar7 + 0x14f8) + 0x108) = iVar2 + -1;
  }
  return param_2;
}



/* ===== 1802f9700 FUN_1802f9700 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802f9700(undefined1 *param_1,longlong param_2,int param_3,char param_4)

{
  char *_Str1;
  undefined4 uVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  char *pcVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined1 auStack_e8 [32];
  char *local_c8;
  ulonglong local_c0;
  undefined4 *local_b8;
  undefined4 *local_b0;
  undefined4 *local_a8;
  undefined4 *local_a0;
  char *local_98;
  char *local_90;
  char *local_88;
  ulonglong local_80;
  
  local_80 = DAT_180919500 ^ (ulonglong)auStack_e8;
  FUN_1802c0a60("enabled",param_1);
  uVar4 = DAT_1808acda0;
  FUN_1803ec6c0(0,DAT_1808acda0);
  FUN_1802cedb0("##enabled_color",param_1 + 4,1);
  cVar5 = FUN_1802badc0("items","enabled");
  uVar3 = DAT_1808ac838;
  fVar2 = DAT_1808ac140;
  uVar1 = DAT_1808ac134;
  if (cVar5 != '\0') {
    if (0 < param_3) {
      uVar11 = 0;
LAB_1802f97e3:
      FUN_1803e8a70(uVar11);
      _Str1 = *(char **)(param_2 + uVar11 * 8);
      FUN_1802c0a60(_Str1,param_1 + uVar11 + 0x14);
      lVar8 = 0;
      do {
        lVar7 = lVar8 + 1;
        if (_Str1[lVar8] != (&DAT_18058b798)[lVar8]) {
          iVar6 = strcmp(_Str1,"progress bar");
          if (iVar6 == 0) goto LAB_1802f9887;
          lVar8 = 0;
          goto LAB_1802f9870;
        }
        lVar8 = lVar7;
      } while (lVar7 != 5);
      cVar5 = FUN_1802badc0("icon_options",_Str1);
      if (cVar5 != '\0') {
        FUN_1802c0a60("inverted",param_1 + 0x1c);
        FUN_1802bc580();
      }
      goto LAB_1802f9b3b;
    }
LAB_1802f9bac:
    FUN_1802bc580();
  }
  return;
  while (lVar8 = lVar7, lVar7 != 5) {
LAB_1802f9870:
    lVar7 = lVar8 + 1;
    if (_Str1[lVar8] != (&DAT_1807610a0)[lVar8]) {
      lVar8 = 0;
      goto LAB_1802f9932;
    }
  }
LAB_1802f9887:
  cVar5 = FUN_1802badc0("bar_options",_Str1);
  if (cVar5 != '\0') {
    FUN_1802c0a60("background",param_1 + 0x1d);
    FUN_1802c0a60("shadow",param_1 + 0x1e);
    FUN_1803ec6c0(0,uVar4);
    FUN_1802cedb0("##shadow_color",param_1 + 0x20);
    if (param_4 != '\0') {
      local_98 = "hidden";
      local_90 = "absolute";
      local_88 = "percentage";
      FUN_1802c2640("format",param_1 + 0x30,&local_98,3);
    }
    FUN_1802bc580();
  }
  goto LAB_1802f9b3b;
  while (lVar8 = lVar7, lVar7 != 7) {
LAB_1802f9932:
    lVar7 = lVar8 + 1;
    if (_Str1[lVar8] != "damage"[lVar8]) {
      if (param_1 != &DAT_18095d0cc) goto LAB_1802f9b3b;
      lVar8 = 0;
      goto LAB_1802f99c0;
    }
  }
  cVar5 = FUN_1802badc0("damage_options",_Str1);
  if (cVar5 != '\0') {
    local_b8 = &DAT_18095cffc;
    local_b0 = &DAT_18095d00c;
    local_c0 = 0;
    local_c8 = (char *)0x0;
    FUN_1802cfaf0("color",&local_b8,2,1);
    FUN_1802bc580();
  }
  goto LAB_1802f9b3b;
  while (lVar8 = lVar7, lVar7 != 5) {
LAB_1802f99c0:
    lVar7 = lVar8 + 1;
    if (_Str1[lVar8] != (&DAT_1806f83d8)[lVar8]) {
      iVar6 = strcmp(_Str1,"trajectory");
      if (iVar6 != 0) goto LAB_1802f9b3b;
      break;
    }
  }
  iVar6 = strcmp(_Str1,"trajectory");
  pcVar9 = "glow_options";
  if (iVar6 == 0) {
    pcVar9 = "trajectory_options";
  }
  cVar5 = FUN_1802badc0(pcVar9,_Str1);
  if (cVar5 != '\0') {
    if (iVar6 == 0) {
      local_c0 = local_c0 & 0xffffffff00000000;
      local_c8 = "%d%%";
      FUN_18033fa10("exponent",&DAT_18095d120,0,100);
      local_c8 = "%.2fpx";
      local_c0 = local_c0 & 0xffffffff00000000;
      if (DAT_18095d124 < fVar2) {
        local_c8 = "auto";
      }
      FUN_18033e3a0("thickness",&DAT_18095d124,uVar1,uVar3);
      local_c8 = "%.2fpx";
      local_c0 = local_c0 & 0xffffffff00000000;
      if (DAT_18095d128 < fVar2) {
        local_c8 = "auto";
      }
      FUN_18033e3a0("points thickness",&DAT_18095d128,uVar1,uVar3);
      local_c0 = local_c0 & 0xffffffff00000000;
      local_c8 = "%d%%";
      FUN_18033fa10("shimmer",&DAT_18095d12c,0,100);
    }
    local_c0 = 0;
    local_a8 = &DAT_18095d100;
    local_c8 = (char *)0x0;
    local_a0 = &DAT_18095d110;
    FUN_1802cfaf0("color",&local_a8,2,1);
    FUN_1802bc580();
  }
LAB_1802f9b3b:
  iVar6 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
  if (iVar6 < 2) {
    FUN_1803ebc00("Calling PopID() too many times!");
  }
  else {
    *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar6 + -1;
  }
  uVar10 = (int)uVar11 + 1;
  uVar11 = (ulonglong)uVar10;
  if (param_3 <= (int)uVar10) goto LAB_1802f9bac;
  goto LAB_1802f97e3;
}



/* ===== 1802f9be0 FUN_1802f9be0 ===== */

ulonglong FUN_1802f9be0(undefined8 param_1,longlong param_2,longlong param_3,int param_4,
                       undefined8 param_5,undefined8 param_6)

{
  code *pcVar1;
  longlong lVar2;
  byte bVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined1 auStack_e8 [8];
  undefined1 auStack_e0 [24];
  undefined4 local_c8 [2];
  float local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined1 local_a8;
  undefined8 local_a0;
  longlong local_98 [5];
  int local_70;
  longlong *local_68;
  undefined4 local_60;
  undefined4 *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_40;
  
  lVar2 = DAT_180ca0a50;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  uVar4 = *(ulonglong *)(lVar2 + 0x14f8);
  if ((DAT_1809f5b40 == *(int *)(uVar4 + 0x10)) &&
     (uVar5 = *(uint *)(lVar2 + 4), uVar4 = (ulonglong)uVar5, DAT_1809f5b44 == uVar5)) {
    local_bc = FUN_18053f0d0((DAT_1809f5b4c - DAT_1808ac97c) * DAT_1808ac1f4 + DAT_1809f5b48);
    puVar7 = auStack_e8;
    local_c0 = (float)DAT_1809f5b50 - DAT_1808ac97c;
    DAT_1809f5b50._0_4_ = local_c0 - DAT_1808ac7ac;
    local_98[0] = 0;
    local_98[1] = 0;
    local_98[2] = 0;
    if (0 < param_4) {
      uVar5 = 0;
      if (param_2 == 0) {
        iVar6 = 0;
        do {
          local_b8 = *(undefined8 *)(param_3 + (longlong)iVar6 * 8);
          local_b0 = 0;
          local_a8 = 1;
          local_a0 = 0;
          FUN_180042d00(local_98,&local_b8);
          iVar6 = iVar6 + 1;
        } while (iVar6 < param_4);
      }
      else {
        do {
          local_b8 = *(undefined8 *)(param_3 + (ulonglong)uVar5 * 8);
          local_b0 = *(undefined8 *)(param_2 + (ulonglong)uVar5 * 8);
          local_a8 = 1;
          local_a0 = 0;
          FUN_180042d00(local_98,&local_b8);
          uVar5 = uVar5 + 1;
        } while ((int)uVar5 < param_4);
      }
    }
    local_98[3] = 0;
    local_98[4] = local_98[0];
    local_c8[0] = 0;
    local_68 = local_98 + 3;
    local_60 = 1;
    local_58 = local_c8;
    local_50 = param_5;
    local_48 = param_6;
    local_40 = 0;
    local_70 = param_4;
    bVar3 = FUN_1802ce6f0(param_1,&local_68,&local_c0);
    if (local_98[0] != 0) {
      uVar4 = local_98[2] - local_98[0] & 0xffffffffffffffe0;
      if (0xfff < uVar4) {
        if ((local_98[0] - *(longlong *)(local_98[0] + -8)) - 8U < 0x20) {
          thunk_FUN_1803d64e0(*(longlong *)(local_98[0] + -8),uVar4 + 0x27);
          return (ulonglong)bVar3;
        }
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        puVar7 = auStack_e0;
      }
      *(undefined8 *)(puVar7 + -8) = 0x1802f9db9;
      thunk_FUN_1803d64e0();
    }
    uVar4 = (ulonglong)bVar3;
  }
  else {
    uVar4 = uVar4 & 0xffffffffffffff00;
  }
  return uVar4;
}



/* ===== 1802f9de0 FUN_1802f9de0 ===== */

void FUN_1802f9de0(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  longlong param_5,undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  longlong *plVar2;
  longlong local_28;
  longlong local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  FUN_1803e89e0();
  FUN_1803ec6c0(0,DAT_1808acda0);
  plVar2 = &local_28;
  local_20 = param_5;
  if (param_4 == 0 && param_5 == 0) {
    plVar2 = (longlong *)0x0;
  }
  local_28 = param_4;
  local_18 = param_2;
  local_10 = param_3;
  FUN_1802f9be0("##colors",plVar2,&local_18,2,param_6,param_7);
  iVar1 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
  if (iVar1 < 2) {
    FUN_1803ebc00("Calling PopID() too many times!");
    return;
  }
  *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar1 + -1;
  return;
}



/* ===== 1802f9ec0 FUN_1802f9ec0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802f9ec0(longlong param_1)

{
  undefined4 local_44;
  
  DAT_1811074d0 = "icon_f042";
  DAT_1811074e0 = 0x44000000;
  DAT_1811074d8 =
       "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 512 512\" width=\"512\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M448 256C448 150 362 64 256 64L256 448C362 448 448 362 448 256ZM0 256C0 165 48 81 128 35C207 -11 304 -11 384 35C463 81 512 165 512 256C512 348 463 432 384 477C304 523 207 523 128 477C48 432 0 348 0 256Z\"/></svg>"
  ;
  _DAT_1811074e4 = local_44;
  FUN_18033fa10("fade offset",param_1,5,100,&DAT_1806f0260,0);
  _DAT_1811074e4 = local_44;
  DAT_1811074d0 = "icon_f042";
  DAT_1811074d8 =
       "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 512 512\" width=\"512\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M448 256C448 150 362 64 256 64L256 448C362 448 448 362 448 256ZM0 256C0 165 48 81 128 35C207 -11 304 -11 384 35C463 81 512 165 512 256C512 348 463 432 384 477C304 523 207 523 128 477C48 432 0 348 0 256Z\"/></svg>"
  ;
  DAT_1811074e0 = 0x44000000;
  FUN_18033fa10("gradient opacity",param_1 + 4,0,100,&DAT_1806f0260,0);
  DAT_1811074d0 = "icon_e105";
  DAT_1811074e0 = 0x44000000;
  DAT_1811074d8 =
       "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 512 512\" width=\"512\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M1 232C6 180 26 132 58 93L104 139C83 165 69 197 65 232L1 232L1 232ZM138 105L92 59C131 27 179 6 231 2L231 66C196 70 164 84 138 105ZM279 447C315 443 347 429 373 408L419 453C380 485 332 506 279 510L279 447ZM407 374C428 348 442 315 446 280L510 280C505 333 485 381 453 420L407 374L407 374ZM407 374ZM92 453L138 408C164 429 196 443 231 447L231 510C179 506 131 485 92 453L92 453ZM92 453ZM58 420C26 381 5 333 1 280L65 280C69 316 83 348 104 374L58 420L58 420ZM419 59L373 105C347 84 315 70 280 66L280 2C332 6 380 27 419 59ZM407 139L453 93C485 132 505 180 510 233L446 233C442 197 428 165 407 139L407 139ZM407 139Z\"/></svg>"
  ;
  _DAT_1811074e4 = local_44;
  FUN_18033fa10("outline opacity",param_1 + 8,0,100,&DAT_1806f0260,0);
  if (0.0 < *(float *)(param_1 + 0x10)) {
    DAT_1811074d0 = "icon_e1c0";
    DAT_1811074e0 = 0x44200000;
    DAT_1811074d8 =
         "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 640 512\" width=\"640\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M134 154C122 141 101 141 89 154C76 166 76 187 89 199L153 263C165 276 186 276 198 263C211 251 211 230 198 218L134 154L134 154ZM134 154ZM288 192C288 210 302 224 320 224C337 224 352 210 352 192L352 96C352 79 337 64 320 64C302 64 288 79 288 96L288 192ZM441 218C428 230 428 251 441 263C453 276 474 276 486 263L550 199C563 187 563 166 550 154C538 141 517 141 505 154L441 218L441 218ZM441 218ZM0 384C0 402 14 416 32 416L96 416C113 416 128 402 128 384C128 367 113 352 96 352L32 352C14 352 0 367 0 384ZM224 352C206 352 192 367 192 384C192 402 206 416 224 416L416 416C433 416 448 402 448 384C448 367 433 352 416 352L224 352ZM544 352C526 352 512 367 512 384C512 402 526 416 544 416L608 416C625 416 640 402 640 384C640 367 625 352 608 352L544 352Z\"/></svg>"
    ;
    _DAT_1811074e4 = local_44;
    FUN_18033fa10("glow opacity",param_1 + 0xc,0,100,&DAT_1806f0260,0);
  }
  DAT_1811074d0 = "icon_f185";
  DAT_1811074d8 =
       "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 512 512\" width=\"512\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M361 2C366 4 370 8 371 14L391 121L498 141C504 142 508 146 510 151C512 156 512 162 509 166L446 256L509 347C512 351 512 357 510 362C508 367 504 371 498 372L391 391L371 498C370 504 366 508 361 510C356 512 350 512 346 509L256 447L165 509C161 512 155 512 150 510C145 508 141 504 140 498L121 391L13 372C7 371 3 367 1 362C0 357 0 351 2 347L65 256L2 166C0 162 0 156 1 151C3 146 7 142 13 141L121 121L140 14C141 8 145 4 150 2C155 0 161 0 165 3L256 66L346 3C350 0 356 0 361 2ZM361 2ZM160 256C160 222 178 191 208 173C237 156 274 156 304 173C333 191 352 222 352 256C352 291 333 322 304 340C274 357 237 357 208 340C178 322 160 291 160 256ZM384 256C384 211 359 169 320 146C280 123 231 123 192 146C152 169 128 211 128 256C128 302 152 344 192 367C231 390 280 390 320 367C359 344 384 302 384 256Z\"/></svg>"
  ;
  _DAT_1811074e4 = local_44;
  DAT_1811074e0 = 0x44000000;
  FUN_18033e3a0(&DAT_1806f83d8,param_1 + 0x10,0,DAT_1808acab0,"%.0f px",0);
  return;
}



/* ===== 1802fa090 FUN_1802fa090 ===== */

/* WARNING: Removing unreachable block (ram,0x0001802fa108) */
/* WARNING: Removing unreachable block (ram,0x0001802fa115) */
/* WARNING: Removing unreachable block (ram,0x0001802fa11f) */

void FUN_1802fa090(int *param_1,longlong param_2,float *param_3,undefined8 *param_4,float param_5)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  float *pfVar7;
  float *pfVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float local_res10;
  float local_res14;
  undefined8 in_stack_ffffffffffffff28;
  undefined4 uVar18;
  undefined8 in_stack_ffffffffffffff38;
  undefined4 uVar19;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  undefined8 local_a8 [2];
  undefined8 local_98;
  longlong local_90;
  
  uVar18 = (undefined4)((ulonglong)in_stack_ffffffffffffff28 >> 0x20);
  uVar19 = (undefined4)((ulonglong)in_stack_ffffffffffffff38 >> 0x20);
  if ((((param_2 != 0) && (param_1 != (int *)0x0)) && (DAT_180cd0fdb == '\0')) &&
     ((DAT_1811079e0 != 0 && (cVar4 = FUN_180368800(), cVar4 != '\0')))) {
    lVar9 = *(longlong *)(param_1 + 2) + ((longlong)*param_1 + -1) * 0x48;
    if (*(int *)(*(longlong *)(param_1 + 2) + 0x28 + ((longlong)*param_1 + -1) * 0x48) != 0) {
      FUN_1803fbe60(param_1);
      lVar9 = *(longlong *)(param_1 + 2) + (longlong)(*param_1 + -1) * 0x48;
    }
    *(code **)(lVar9 + 0x30) = FUN_180368b40;
    *(undefined4 *)(lVar9 + 0x40) = 0;
    *(longlong *)(lVar9 + 0x38) = param_2;
    *(undefined4 *)(lVar9 + 0x44) = 0xffffffff;
    FUN_1803fbe60(param_1);
    lVar9 = -8;
    if ((*(longlong *)(*(longlong *)(param_1 + 0xe) + 0x68) != 0) &&
       (lVar10 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0xe) + 0x68) + 0xc60),
       lVar10 != 0)) {
      lVar9 = lVar10;
    }
    lVar10 = *(longlong *)(param_1 + 2) + ((longlong)*param_1 + -1) * 0x48;
    if (*(int *)(*(longlong *)(param_1 + 2) + 0x28 + ((longlong)*param_1 + -1) * 0x48) != 0) {
      FUN_1803fbe60(param_1);
      lVar10 = *(longlong *)(param_1 + 2) + (longlong)(*param_1 + -1) * 0x48;
    }
    *(longlong *)(lVar10 + 0x30) = lVar9;
    *(undefined8 *)(lVar10 + 0x38) = 0;
    *(undefined4 *)(lVar10 + 0x40) = 0;
    *(undefined4 *)(lVar10 + 0x44) = 0xffffffff;
    FUN_1803fbe60(param_1);
    lVar9 = DAT_181107d20;
    fVar3 = DAT_1808ac34c;
    fVar2 = DAT_1808ac1f4;
    if (DAT_181107d20 != 0) {
      fVar14 = (float)*param_4;
      fVar17 = *(float *)(DAT_180ca0a50 + 0xce8);
      local_res14 = fVar17 + param_3[1];
      fVar15 = fVar14 - fVar17;
      fVar16 = (float)((ulonglong)*param_4 >> 0x20) - fVar17;
      fVar17 = (fVar14 - *param_3) * DAT_1808ac140 + *param_3 + fVar17;
      local_a8[0] = CONCAT44(fVar16,fVar15);
      fVar15 = fVar15 - fVar17;
      if ((0.0 < fVar15) && (fVar16 = fVar16 - local_res14, 0.0 < fVar16)) {
        iVar13 = param_1[8];
        local_b8 = 0.0;
        local_b4 = (fVar15 * DAT_1808acbd0) / DAT_1808acc20;
        local_b0 = 1.0;
        local_b4 = ((local_b4 - fVar16) * DAT_1808ac1f4) / local_b4;
        local_ac = DAT_1808ac34c - local_b4;
        local_res10 = fVar17;
        if (param_5 < DAT_1808ac1f4) {
          local_98 = 0;
          local_90 = DAT_181107d20;
          FUN_1803fea90(param_1,&local_98,&local_res10,local_a8,&local_b8,&local_b0,
                        CONCAT44(uVar19,0xffffffff));
        }
        else {
          if ((DAT_181107d20 == *(longlong *)(param_1 + 0x1e)) &&
             (*(longlong *)(param_1 + 0x1c) == 0)) {
            bVar1 = false;
          }
          else {
            iVar5 = param_1[0x2d];
            bVar1 = true;
            if (param_1[0x2c] == iVar5) {
              iVar12 = param_1[0x2c] + 1;
              if (iVar5 == 0) {
                iVar5 = 8;
              }
              else {
                iVar5 = iVar5 / 2 + iVar5;
              }
              if (iVar12 < iVar5) {
                iVar12 = iVar5;
              }
              FUN_1803f7030(param_1 + 0x2c,iVar12);
            }
            iVar5 = param_1[0x2c];
            lVar10 = *(longlong *)(param_1 + 0x2e);
            *(undefined8 *)(lVar10 + (longlong)iVar5 * 0x10) = 0;
            *(longlong *)(lVar10 + 8 + (longlong)iVar5 * 0x10) = lVar9;
            param_1[0x2c] = param_1[0x2c] + 1;
            param_1[0x1c] = 0;
            param_1[0x1d] = 0;
            *(longlong *)(param_1 + 0x1e) = lVar9;
            FUN_1803fc0a0(param_1);
          }
          iVar5 = param_1[8];
          FUN_1803fe160(param_1,&local_res10,local_a8,param_5,CONCAT44(uVar18,0xf0));
          FUN_1803fd460(param_1,*(undefined8 *)(param_1 + 0x16),param_1[0x14],0xffffffff);
          param_1[0x14] = 0;
          FUN_180401c50(param_1,iVar5,param_1[8],&local_res10,local_a8,&local_b8,&local_b0);
          if (bVar1) {
            FUN_1803fc340(param_1);
          }
        }
        fVar16 = DAT_1808acb94;
        uVar11 = DAT_180960f60 & 0xffffff;
        if (iVar13 < param_1[8]) {
          do {
            lVar9 = *(longlong *)(param_1 + 10);
            local_b0 = 1.0;
            local_res10 = 0.0;
            lVar10 = (longlong)iVar13 * 5;
            local_b8 = (*(float *)(lVar9 + (longlong)iVar13 * 0x14) - fVar17) / fVar15;
            pfVar8 = &local_res10;
            if (0.0 <= local_b8) {
              pfVar8 = &local_b8;
            }
            pfVar7 = &local_b0;
            if (local_b8 <= fVar3) {
              pfVar7 = pfVar8;
            }
            uVar6 = FUN_1802b38e0(uVar11,0xd9ffffff,*pfVar7);
            iVar13 = iVar13 + 1;
            *(uint *)(lVar9 + 0x10 + lVar10 * 4) =
                 (int)(longlong)
                      (((float)*(byte *)(lVar9 + 0x13 + lVar10 * 4) / fVar16) *
                       (float)(uVar6 >> 0x18) + fVar2) << 0x18 | uVar6 & 0xffffff;
          } while (iVar13 < param_1[8]);
        }
      }
    }
  }
  return;
}



/* ===== 1802fa560 FUN_1802fa560 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1
FUN_1802fa560(undefined8 param_1,char param_2,float param_3,float param_4,undefined8 param_5)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  undefined1 uVar6;
  char cVar7;
  undefined4 uVar8;
  uint uVar9;
  float *pfVar10;
  undefined8 *puVar11;
  longlong lVar12;
  float *pfVar13;
  char ****ppppcVar14;
  bool bVar15;
  float fVar16;
  undefined4 uVar17;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  float fVar18;
  float fVar19;
  undefined1 auStack_198 [32];
  undefined8 *local_178;
  undefined8 local_170;
  char ****local_168;
  undefined8 local_160;
  undefined4 local_158;
  undefined4 local_150;
  undefined8 local_148;
  float local_140;
  float fStack_13c;
  undefined4 local_130 [2];
  undefined8 local_128;
  ulonglong uStack_120;
  undefined4 local_118;
  float local_110 [4];
  char ****local_100 [3];
  ulonglong local_e8;
  ulonglong local_e0;
  
  local_e0 = DAT_180919500 ^ (ulonglong)auStack_198;
  local_148 = *(undefined8 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x118);
  fVar19 = (float)local_148;
  local_140 = param_3;
  fStack_13c = param_4;
  uVar6 = FUN_180415e30(param_1,&local_140,0);
  cVar7 = FUN_1803dd930(0);
  fVar5 = DAT_1808ac34c;
  fVar4 = DAT_1808ac1f4;
  iVar1 = *(int *)(DAT_180ca0a50 + 0x1578);
  if (iVar1 == 0) {
    bVar15 = false;
    FUN_1803e89e0(param_1);
  }
  else {
    iVar2 = *(int *)(DAT_180ca0a50 + 0x1ee8);
    bVar15 = iVar1 == iVar2;
    FUN_1803e89e0(param_1);
    if (iVar1 == iVar2) {
      fVar16 = fVar5;
      goto LAB_1802fa67f;
    }
  }
  if (param_2 == '\0' && cVar7 == '\0') {
    fVar16 = 0.0;
  }
  else {
    fVar16 = fVar4;
  }
LAB_1802fa67f:
  local_130[0] = FUN_1803e8900(*(undefined8 *)(DAT_180ca0a50 + 0x14f8),"##hover");
  local_128 = CONCAT44(fVar16,fVar16);
  uStack_120 = (ulonglong)(uint)fVar16;
  local_118 = 0xffffffff;
  FUN_18034a380(extraout_XMM0_Qa,&local_140,local_130,&local_128);
  fVar16 = (float)FUN_1802b3660(CONCAT44(fStack_13c,local_140) + 0x14,fVar16,DAT_1808ac118,0);
  if (param_2 != '\0' || bVar15) {
    fVar18 = fVar5;
  }
  else if (cVar7 == '\0') {
    fVar18 = 0.0;
  }
  else {
    fVar18 = fVar4;
  }
  local_130[0] = FUN_1803e8900(*(undefined8 *)(DAT_180ca0a50 + 0x14f8),"##lit");
  local_128 = CONCAT44(fVar18,fVar18);
  uStack_120 = (ulonglong)(uint)fVar18;
  local_118 = 0xffffffff;
  FUN_18034a380(extraout_XMM0_Qa_00,&local_140,local_130,&local_128);
  uVar17 = FUN_1802b3660(CONCAT44(fStack_13c,local_140) + 0x14,fVar18,DAT_1808ac118,0);
  lVar12 = DAT_180ca0a50;
  iVar1 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
  if (iVar1 < 2) {
    FUN_1803ebc00("Calling PopID() too many times!");
    lVar12 = DAT_180ca0a50;
  }
  else {
    *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar1 + -1;
  }
  local_140 = fVar19 + param_3;
  fStack_13c = local_148._4_4_ + param_4;
  *(undefined1 *)(*(longlong *)(lVar12 + 0x14f8) + 0xce) = 1;
  fVar19 = DAT_1808ac8b0;
  lVar12 = *(longlong *)(*(longlong *)(lVar12 + 0x14f8) + 0x2c8);
  local_170 = (undefined8 *)((ulonglong)local_170._4_4_ << 0x20);
  local_178._0_4_ = DAT_1808ac8b0;
  FUN_1803fe590(lVar12,&local_148,&local_140,DAT_180960f60);
  if (0.0 < fVar16) {
    local_110[2] = 1.0;
    local_110[0] = 0.0;
    local_110[1] = fVar16 * DAT_1808ac118 * DAT_1808ac2cc;
    pfVar13 = local_110;
    if (0.0 <= local_110[1]) {
      pfVar13 = local_110 + 1;
    }
    pfVar10 = local_110 + 2;
    if (local_110[1] <= fVar5) {
      pfVar10 = pfVar13;
    }
    local_170 = (undefined8 *)((ulonglong)local_170 & 0xffffffff00000000);
    local_178._0_4_ = fVar19;
    FUN_1803fe590(lVar12,&local_148,&local_140,
                  DAT_180960f44 & 0xffffff |
                  (int)(longlong)(*pfVar10 * DAT_1808acb94 + fVar4) << 0x18);
  }
  local_178 = (undefined8 *)CONCAT44(local_178._4_4_,fVar19);
  FUN_1802fa090(lVar12,param_5,&local_148,&local_140);
  local_128 = _DAT_1808add80;
  uStack_120 = _UNK_1808add88;
  uVar8 = FUN_1802b38e0(DAT_180960eec,
                        (int)(longlong)((float)(DAT_1809f54bc >> 0x18) * DAT_1808ac1b0 + fVar4) <<
                        0x18 | DAT_1809f54bc & 0xffffff,uVar17);
  local_168 = (char ****)CONCAT44(local_168._4_4_,fVar5);
  local_170 = (undefined8 *)((ulonglong)local_170 & 0xffffffff00000000);
  local_178 = &local_128;
  FUN_18036bcb0(lVar12,&local_148,&local_140,uVar8);
  FUN_1802b3fe0(local_100,param_1);
  FUN_1803fc200(lVar12,&local_148,&local_140,1);
  ppppcVar14 = (char ****)local_100;
  if (0xf < local_e8) {
    ppppcVar14 = local_100[0];
  }
  uVar9 = FUN_1802b38e0(DAT_180960ef8,DAT_180960ec8,uVar17);
  uVar17 = DAT_1808ac930;
  local_140 = (float)local_148 + fVar19;
  fStack_13c = (float)FUN_18053f0d0();
  fStack_13c = fStack_13c + local_148._4_4_;
  if ((((uVar9 & 0xff000000) != 0) && (ppppcVar14 != (char ****)0x0)) &&
     (*(char *)ppppcVar14 != '\0')) {
    local_128 = *(undefined8 *)(lVar12 + 0x60);
    uStack_120 = *(undefined8 *)(lVar12 + 0x68);
    local_150 = 0;
    local_158 = 0;
    local_160 = 0;
    local_170 = &local_128;
    local_178 = (undefined8 *)CONCAT44(local_178._4_4_,uVar9);
    local_168 = ppppcVar14;
    FUN_18040a900(*(undefined8 *)(*(longlong *)(lVar12 + 0x38) + 0x18),lVar12,uVar17,&local_140);
  }
  iVar2 = *(int *)(lVar12 + 0xa0);
  iVar1 = iVar2 + -1;
  *(int *)(lVar12 + 0xa0) = iVar1;
  if (iVar1 == 0) {
    puVar11 = (undefined8 *)(*(longlong *)(lVar12 + 0x38) + 0x34);
  }
  else {
    puVar11 = (undefined8 *)((longlong)(iVar2 + -2) * 0x10 + *(longlong *)(lVar12 + 0xa8));
  }
  uVar3 = puVar11[1];
  *(undefined8 *)(lVar12 + 0x60) = *puVar11;
  *(undefined8 *)(lVar12 + 0x68) = uVar3;
  FUN_1803fbff0(lVar12);
  FUN_18000f890(local_100);
  return uVar6;
}



/* ===== 1802faac0 FUN_1802faac0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802faac0(longlong param_1)

{
  int iVar1;
  LPCWSTR **pppWVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  char cVar6;
  undefined1 uVar7;
  int iVar8;
  char *pcVar9;
  LPCWSTR ***ppppWVar10;
  LPCWSTR **pppWVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined8 uVar14;
  uint uVar15;
  LPCWSTR ***ppppWVar16;
  ulonglong uVar17;
  longlong lVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  float fVar21;
  undefined4 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auStackY_218 [32];
  float local_1c8;
  float local_1c4;
  undefined8 local_1c0;
  float local_1b8;
  float local_1b4;
  LPCWSTR ***local_1b0;
  LPCWSTR ***ppppWStack_1a8;
  LPCWSTR ***local_1a0;
  undefined8 local_198;
  undefined **ppuStack_190;
  longlong local_188 [2];
  undefined1 local_178 [32];
  char local_158;
  char *local_148 [4];
  char *local_128;
  char *local_120;
  char *local_118;
  char *local_110;
  char *local_108;
  undefined *local_100;
  char *local_f8;
  char *local_f0;
  char *local_e8;
  char *local_e0;
  LPCWSTR ***local_d8;
  LPCWSTR ***local_d0;
  LPCWSTR ***local_c8;
  ulonglong local_c0;
  ulonglong local_b8;
  
  local_b8 = DAT_180919500 ^ (ulonglong)auStackY_218;
  uVar15 = 1;
  local_1c8 = 1.4013e-45;
  local_188[0] = param_1;
  FUN_1802b9bd0();
  lVar18 = DAT_180ca0a50;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  fVar25 = DAT_1809f72f0;
  fVar24 = DAT_1808ac8b0;
  lVar18 = *(longlong *)(*(longlong *)(lVar18 + 0x14f8) + 0x2c8);
  fVar26 = DAT_1809f72f4 + DAT_1809f72f0;
  fVar23 = DAT_1809f72f0 + DAT_1808ac8b0;
  fVar21 = (float)FUN_18053fc00(DAT_1808ac928);
  fVar21 = fVar23 + fVar21;
  local_1b4 = DAT_1809f72fc + DAT_1808ac9f8;
  local_1c4 = DAT_1809f72fc;
  local_1c8 = fVar23;
  local_1b8 = fVar21;
  FUN_1802b6f70(lVar18,"nl_glyph_skybox",
                "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 640 512\" width=\"640\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M480 48C480 22 458 0 432 0L336 0C309 0 288 22 288 48L288 96L224 96L224 24C224 11 213 0 200 0C186 0 176 11 176 24L176 96L112 96L112 24C112 11 101 0 88 0C74 0 64 11 64 24L64 96L48 96C21 96 0 118 0 144L0 240L0 464C0 490 21 512 48 512L304 512L336 512L432 512L592 512C618 512 640 490 640 464L640 240C640 214 618 192 592 192L480 192L480 48ZM576 368L576 400C576 409 568 416 560 416L528 416C519 416 512 409 512 400L512 368C512 360 519 352 528 352L560 352C568 352 576 360 576 368ZM240 416L208 416C199 416 192 409 192 400L192 368C192 360 199 352 208 352L240 352C248 352 256 360 256 368L256 400C256 409 248 416 240 416ZM128 400C128 409 120 416 112 416L80 416C71 416 64 409 64 400L64 368C64 360 71 352 80 352L112 352C120 352 128 360 128 368L128 400ZM560 256C568 256 576 264 576 272L576 304C576 313 568 320 560 320L528 320C519 320 512 313 512 304L512 272C512 264 519 256 528 256L560 256ZM256 176L256 208C256 217 248 224 240 224L208 224C199 224 192 217 192 208L192 176C192 168 199 160 208 160L240 160C248 160 256 168 256 176ZM112 160C120 160 128 168 128 176L128 208C128 217 120 224 112 224L80 224C71 224 64 217 64 208L64 176C64 168 71 160 80 160L112 160ZM256 304C256 313 248 320 240 320L208 320C199 320 192 313 192 304L192 272C192 264 199 256 208 256L240 256C248 256 256 264 256 272L256 304ZM112 320L80 320C71 320 64 313 64 304L64 272C64 264 71 256 80 256L112 256C120 256 128 264 128 272L128 304C128 313 120 320 112 320ZM416 272L416 304C416 313 408 320 400 320L368 320C359 320 352 313 352 304L352 272C352 264 359 256 368 256L400 256C408 256 416 264 416 272ZM400 64C408 64 416 72 416 80L416 112C416 121 408 128 400 128L368 128C359 128 352 121 352 112L352 80C352 72 359 64 368 64L400 64ZM416 176L416 208C416 217 408 224 400 224L368 224C359 224 352 217 352 208L352 176C352 168 359 160 368 160L400 160C408 160 416 168 416 176Z\"/></svg>"
                ,DAT_1808acc20);
  pcVar9 = (char *)FUN_1802b3fe0(&local_d8,"skybox");
  uVar5 = DAT_180960ef8;
  if (0xf < *(ulonglong *)(pcVar9 + 0x18)) {
    pcVar9 = *(char **)pcVar9;
  }
  uVar22 = FUN_18053fc00(DAT_1809f72fc + DAT_1808ac7ec);
  local_1b8 = (float)FUN_18053fc00(fVar21 + fVar24);
  fVar21 = DAT_1808ac930;
  local_1b4 = (float)uVar22;
  if ((((uVar5 & 0xff000000) != 0) && (pcVar9 != (char *)0x0)) && (*pcVar9 != '\0')) {
    local_198 = *(LPCWSTR ****)(lVar18 + 0x60);
    ppuStack_190 = *(undefined ***)(lVar18 + 0x68);
    FUN_18040a900(*(undefined8 *)(*(longlong *)(lVar18 + 0x38) + 0x18),lVar18,DAT_1808ac930,
                  &local_1b8);
  }
  FUN_18000f890(&local_d8);
  fVar24 = (fVar26 - fVar24) - _DAT_1808acaa4;
  local_1c4 = DAT_1809f72fc;
  local_1b8 = 29.706;
  local_1b4 = 29.706;
  local_1c8 = fVar24;
  cVar6 = FUN_180309000("##skybox_refresh",&local_1c8,&local_1b8,"nl_glyph_refresh");
  if (cVar6 != '\0') {
    FUN_18001c440();
  }
  local_198 = *(LPCWSTR ****)(DAT_180ca0a50 + 0x1efc);
  local_1c0 = *(LPCWSTR ****)(DAT_180ca0a50 + 0x1ef4);
  uVar7 = FUN_1803dd930(0);
  FUN_1802b56a0("Refresh",0,uVar7,&local_1c0);
  local_1b8 = 29.706;
  local_1b4 = 29.706;
  local_1c8 = fVar24 + DAT_1808ac9dc;
  local_1c4 = DAT_1809f72fc;
  cVar6 = FUN_180309000("##skybox_folder",&local_1c8,&local_1b8,"nl_glyph_folder_open");
  if ((cVar6 != '\0') && (FUN_18001c2e0(local_178), local_158 != '\0')) {
    local_198 = (LPCWSTR ***)((ulonglong)local_198 & 0xffffffff00000000);
    ppuStack_190 = &PTR_vftable_18091a158;
    FUN_180016bc0(local_178,&local_198);
    FUN_180024980(&local_d8,local_178);
    uVar15 = 3;
    ppppWVar10 = (LPCWSTR ***)&local_d8;
    if (7 < local_c0) {
      ppppWVar10 = local_d8;
    }
    ShellExecuteW((HWND)0x0,L"open",(LPCWSTR)ppppWVar10,(LPCWSTR)0x0,(LPCWSTR)0x0,5);
    FUN_1800289e0(&local_d8);
    if (local_158 != '\0') {
      FUN_1800289e0(local_178);
    }
  }
  local_198 = *(LPCWSTR ****)(DAT_180ca0a50 + 0x1efc);
  local_1c0 = *(LPCWSTR ****)(DAT_180ca0a50 + 0x1ef4);
  uVar7 = FUN_1803dd930(0);
  FUN_1802b56a0("Open Folder",0,uVar7,&local_1c0);
  DAT_1809f72fc = DAT_1809f72fc + DAT_1808aca50;
  local_148[0] = "default";
  local_148[1] = "anubis";
  local_148[2] = "aztec";
  local_148[3] = "baggage";
  local_128 = "cloudy";
  local_120 = "dust 2";
  local_118 = "inferno";
  local_110 = "italy";
  local_108 = "mirage";
  local_100 = &DAT_180761294;
  local_f8 = "overpass";
  local_f0 = "office";
  local_e8 = "train";
  local_e0 = "vertigo";
  AcquireSRWLockShared((PSRWLOCK)&DAT_180cc3e00);
  cVar6 = DAT_180ca0dd8;
  local_1b0 = (LPCWSTR ***)0x0;
  ppppWStack_1a8 = (LPCWSTR ***)0x0;
  local_1a0 = (LPCWSTR ***)0x0;
  if (DAT_180cc4040 - DAT_180cc4038 != 0) {
    uVar17 = DAT_180cc4040 - DAT_180cc4038 >> 6;
    if (0x3ffffffffffffff < uVar17) {
                    /* WARNING: Subroutine does not return */
      FUN_1800118d0();
    }
    ppppWVar10 = (LPCWSTR ***)FUN_18000fb70(uVar17 * 0x40);
    lVar13 = DAT_180cc4040;
    local_1a0 = ppppWVar10 + uVar17 * 8;
    local_198 = (LPCWSTR ***)&local_1b0;
    local_c8 = (LPCWSTR ***)&local_1b0;
    local_1b0 = ppppWVar10;
    ppppWStack_1a8 = ppppWVar10;
    local_d8 = ppppWVar10;
    for (lVar18 = DAT_180cc4038; local_d0 = ppppWVar10, lVar18 != lVar13; lVar18 = lVar18 + 0x40) {
      local_1c0 = ppppWVar10;
      FUN_180024b50(ppppWVar10,lVar18);
      FUN_180024b50(ppppWVar10 + 4,lVar18 + 0x20);
      ppppWVar10 = ppppWVar10 + 8;
    }
    ppppWStack_1a8 = ppppWVar10;
  }
  local_1c8 = (float)(uVar15 | 1);
  ReleaseSRWLockShared((PSRWLOCK)&DAT_180cc3e00);
  if (cVar6 == '\0') {
    FUN_18001c440();
    AcquireSRWLockShared((PSRWLOCK)&DAT_180cc3e00);
    FUN_180027580(&local_1b0,DAT_180cc4038,DAT_180cc4040 - DAT_180cc4038 >> 6);
    ReleaseSRWLockShared((PSRWLOCK)&DAT_180cc3e00);
  }
  ppppWVar10 = local_1b0;
  uVar17 = 0xffffffff;
  iVar8 = -1;
  local_1c8 = -NAN;
  uVar20 = (longlong)ppppWStack_1a8 - (longlong)local_1b0 >> 6;
  if (uVar20 != 0) {
    uVar19 = 0;
    pcVar9 = (char *)(param_1 + 0xcc);
    cVar6 = *pcVar9;
    do {
      if (cVar6 != '\0') {
        ppppWVar16 = ppppWVar10 + uVar19 * 8 + 4;
        pppWVar11 = (LPCWSTR **)strlen(pcVar9);
        pppWVar2 = ppppWVar10[uVar19 * 8 + 6];
        if ((LPCWSTR **)0xf < ppppWVar10[uVar19 * 8 + 7]) {
          ppppWVar16 = (LPCWSTR ***)*ppppWVar16;
        }
        if ((pppWVar2 == pppWVar11) &&
           ((pppWVar2 == (LPCWSTR **)0x0 ||
            (iVar8 = memcmp(ppppWVar16,pcVar9,(size_t)pppWVar2), iVar8 == 0)))) {
          uVar17 = uVar19 & 0xffffffff;
          local_1c8 = (float)uVar19;
        }
        else {
          uVar17 = (ulonglong)(uint)local_1c8;
        }
      }
      iVar8 = (int)uVar17;
      uVar19 = uVar19 + 1;
    } while (uVar19 < uVar20);
    param_1 = local_188[0];
  }
  pcVar9 = (char *)(param_1 + 0xcc);
  if ((*pcVar9 == '\0') || (-1 < iVar8)) {
    bVar3 = false;
    if ((*pcVar9 == '\0') && ((*(int *)(param_1 + 200) < 0 || (0xd < *(int *)(param_1 + 200))))) {
      bVar4 = true;
      bVar3 = false;
      goto LAB_1802fb16f;
    }
  }
  else {
    bVar3 = true;
  }
  bVar4 = false;
LAB_1802fb16f:
  fVar24 = (float)FUN_1803e8900(*(undefined8 *)(DAT_180ca0a50 + 0x14f8),"##skybox_scroll");
  uVar17 = (((((ulonglong)((uint)fVar24 & 0xff) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
             (ulonglong)((uint)fVar24 >> 8 & 0xff)) * 0x100000001b3 ^
            (ulonglong)((uint)fVar24 >> 0x10 & 0xff)) * 0x100000001b3 ^
           (ulonglong)((uint)fVar24 >> 0x18)) * 0x100000001b3 & DAT_1811077a0;
  lVar18 = *(longlong *)(DAT_181107788 + 8 + uVar17 * 0x10);
  if (lVar18 == DAT_181107778) {
LAB_1802fb24a:
    lVar18 = 0;
  }
  else {
    fVar23 = *(float *)(lVar18 + 0x10);
    while (fVar24 != fVar23) {
      if (lVar18 == *(longlong *)(DAT_181107788 + uVar17 * 0x10)) goto LAB_1802fb24a;
      lVar18 = *(longlong *)(lVar18 + 8);
      fVar23 = *(float *)(lVar18 + 0x10);
    }
  }
  if ((lVar18 == 0) || (lVar18 == DAT_181107778)) {
    uVar14 = 0;
  }
  else {
    uVar14 = *(undefined8 *)(lVar18 + 0x18);
  }
  local_1b8 = fVar24;
  FUN_1802b6190(fVar24,uVar14);
  lVar18 = DAT_180ca0a50;
  fVar23 = DAT_1809f72fc;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  lVar18 = *(longlong *)(lVar18 + 0x14f8);
  *(float *)(lVar18 + 0x118) = fVar25;
  *(float *)(lVar18 + 0x11c) = fVar23;
  *(undefined1 *)(lVar18 + 0x159) = 1;
  FUN_1803d8730(3,0);
  lVar18 = DAT_180ca0a50;
  local_1c0 = (LPCWSTR ***)CONCAT44(0x42fe0000,fVar26 - fVar25);
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  uVar22 = FUN_1803e8900(*(undefined8 *)(lVar18 + 0x14f8),"##skybox_list");
  cVar6 = FUN_1803e1800("##skybox_list",uVar22,&local_1c0,0);
  FUN_1803d87f0(1);
  if (cVar6 != '\0') {
    FUN_1802b6490(fVar24,0,0,0);
    local_1c0 = (LPCWSTR ***)0x40a0000000000000;
    FUN_1803d89a0(0xe,&local_1c0);
    lVar18 = *(longlong *)(DAT_180ca0a50 + 0x14f8);
    if ((*(longlong *)(lVar18 + 0x1c8) != 0) ||
       (lVar13 = 0x280, *(longlong *)(DAT_180ca0a50 + 0x2360) != 0)) {
      lVar13 = 0x250;
    }
    fVar24 = *(float *)(lVar13 + lVar18) - *(float *)(lVar18 + 0x118);
    uVar22 = FUN_18053f0d0(*(float *)(DAT_180ca0a50 + 0xca8) * _DAT_1808ac4e0 + fVar21);
    uVar17 = 0;
    do {
      iVar8 = (int)uVar17;
      FUN_1803e8a70(uVar17);
      if (*pcVar9 == '\0') {
        if ((iVar8 != *(int *)(param_1 + 200)) && ((iVar8 != 0 || (!bVar4)))) goto LAB_1802fb424;
        uVar14 = 1;
LAB_1802fb42c:
        if (iVar8 - 1U < 0xd) {
          if ((&DAT_180ca3c70)[uVar17] == 0) {
            LOCK();
            DAT_180ca0ddc = 1;
            UNLOCK();
          }
          if (((&DAT_180cc3d80)[uVar17] != 0) && (lVar18 = FUN_18000f3a0(), lVar18 != 0)) {
            FUN_18000f3a0(lVar18 + 0x10);
          }
        }
      }
      else {
        if ((iVar8 != 0) || (!bVar3)) {
LAB_1802fb424:
          uVar14 = 0;
          goto LAB_1802fb42c;
        }
        uVar14 = 1;
      }
      cVar6 = FUN_1802fa560(local_148[uVar17],uVar14,fVar24,uVar22);
      if (cVar6 != '\0') {
        *(int *)(param_1 + 200) = iVar8;
        *pcVar9 = '\0';
      }
      iVar1 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
      if (iVar1 < 2) {
        FUN_1803ebc00("Calling PopID() too many times!");
      }
      else {
        *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar1 + -1;
      }
      uVar17 = (ulonglong)(iVar8 + 1U);
    } while ((int)(iVar8 + 1U) < 0xe);
    if (local_1b0 != ppppWStack_1a8) {
      local_198 = *(LPCWSTR ****)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x118);
      fVar25 = SUB84(local_198,0);
      local_1c0 = (LPCWSTR ***)CONCAT44(0x3f800000,fVar24);
      FUN_1804174f0(&local_1c0);
      lVar18 = DAT_180ca0a50;
      *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
      local_1c0 = (LPCWSTR ***)CONCAT44(local_198._4_4_ + DAT_1808ac34c,fVar25 + fVar24);
      FUN_1803fe590(*(undefined8 *)(*(longlong *)(lVar18 + 0x14f8) + 0x2c8),&local_198,&local_1c0,
                    DAT_180960f48);
    }
    fVar25 = local_1c8;
    uVar17 = 0;
    if ((longlong)ppppWStack_1a8 - (longlong)local_1b0 >> 6 != 0) {
      do {
        FUN_1803e8a70((int)(float)uVar17 + 1000);
        ppppWVar10 = local_1b0;
        if (local_1b0[uVar17 * 8 + 6] != (LPCWSTR **)0x0) {
          ppppWVar16 = local_1b0 + uVar17 * 8 + 4;
          AcquireSRWLockExclusive((PSRWLOCK)&DAT_180ca3d68);
          pppWVar2 = ppppWVar10[uVar17 * 8 + 6];
          if (ppppWVar10[uVar17 * 8 + 7] < (LPCWSTR **)0x10) {
            ppppWVar10 = ppppWVar16;
          }
          else {
            ppppWVar10 = (LPCWSTR ***)*ppppWVar16;
          }
          pppWVar11 = (LPCWSTR **)0x0;
          uVar20 = 0xcbf29ce484222325;
          if (pppWVar2 != (LPCWSTR **)0x0) {
            do {
              uVar20 = (uVar20 ^ *(byte *)((longlong)ppppWVar10 + (longlong)pppWVar11)) *
                       0x100000001b3;
              pppWVar11 = (LPCWSTR **)((longlong)pppWVar11 + 1);
            } while (pppWVar11 < pppWVar2);
          }
          lVar18 = FUN_1800268a0(&DAT_180ca0ae0,local_188,ppppWVar16,uVar20);
          lVar13 = DAT_180cc4100;
          lVar18 = *(longlong *)(lVar18 + 8);
          if ((lVar18 == 0) || (lVar18 == DAT_180ca0ae8)) {
            lVar18 = FUN_180026970(DAT_180cc40f8,DAT_180cc4100,ppppWVar16);
            if (lVar18 == lVar13) {
              if (lVar13 == DAT_180cc4108) {
                FUN_180028f00(&DAT_180cc40f8,lVar13,ppppWVar16);
              }
              else {
                FUN_180024b50(lVar13,ppppWVar16);
                DAT_180cc4100 = DAT_180cc4100 + 0x20;
              }
            }
            ReleaseSRWLockExclusive((PSRWLOCK)&DAT_180ca3d68);
            LOCK();
            DAT_180ca0ddc = 1;
            UNLOCK();
          }
          else {
            lVar18 = *(longlong *)(lVar18 + 0x30);
            ReleaseSRWLockExclusive((PSRWLOCK)&DAT_180ca3d68);
            if ((lVar18 != 0) && (lVar18 = FUN_18000f3a0(lVar18), lVar18 != 0)) {
              FUN_18000f3a0(lVar18 + 0x10);
            }
          }
        }
        ppppWVar10 = local_1b0 + uVar17 * 8;
        if ((LPCWSTR **)0xf < ppppWVar10[3]) {
          ppppWVar10 = (LPCWSTR ***)*ppppWVar10;
        }
        cVar6 = FUN_1802fa560(ppppWVar10,(float)uVar17 == fVar25,fVar24,uVar22);
        if (cVar6 != '\0') {
          *(undefined4 *)(param_1 + 200) = 0;
          ppppWVar10 = local_1b0 + uVar17 * 8 + 4;
          if ((LPCWSTR **)0xf < local_1b0[uVar17 * 8 + 7]) {
            ppppWVar10 = (LPCWSTR ***)*ppppWVar10;
          }
          snprintf(param_1 + 0xcc,0xc0,&DAT_1806d3198,ppppWVar10);
        }
        iVar8 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
        if (iVar8 < 2) {
          FUN_1803ebc00("Calling PopID() too many times!");
        }
        else {
          *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar8 + -1;
        }
        uVar17 = uVar17 + 1;
      } while (uVar17 < (ulonglong)((longlong)ppppWStack_1a8 - (longlong)local_1b0 >> 6));
    }
    uVar22 = FUN_1803d8a40(1);
    plVar12 = (longlong *)FUN_18034ee00(uVar22,local_188,&local_1b8);
    lVar18 = *plVar12;
    if (((*(char *)(lVar18 + 0x5a) != '\0') && (*(longlong *)(lVar18 + 0x18) != 0)) &&
       (*(char *)(lVar18 + 0x6f) != '\0')) {
      FUN_1803fe590(*(undefined8 *)(*(longlong *)(lVar18 + 0x18) + 0x2c8),lVar18 + 0x5c,lVar18 + 100
                    ,*(undefined4 *)(lVar18 + 0x6c));
    }
  }
  FUN_1803e1bc0();
  DAT_1809f72fc = DAT_1809f72fc + DAT_1808acb24;
  FUN_180028940(&local_1b0);
  return;
}



/* ===== 1802fb830 FUN_1802fb830 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802fb830(char *param_1)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  undefined *puVar9;
  char *pcVar10;
  longlong lVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined1 uVar15;
  undefined8 uVar16;
  undefined1 auStack_1b8 [8];
  undefined1 auStack_1b0 [24];
  char *local_198;
  code *local_190;
  char **local_188;
  float local_178;
  undefined4 uStack_174;
  undefined4 local_170 [2];
  undefined1 local_168 [8];
  char *local_160;
  char *local_158;
  undefined1 local_150;
  undefined8 local_148;
  char ***local_140;
  undefined4 local_138;
  undefined4 *local_130;
  code *local_128;
  char **local_120;
  undefined1 local_118;
  char *local_110;
  char *local_108;
  char *local_100;
  char *local_f8;
  char *local_f0;
  undefined1 *local_e8;
  char *local_e0;
  char **ppcStack_d8;
  char *local_d0;
  char **local_c8;
  char *pcStack_c0;
  undefined8 local_b8;
  code *pcStack_b0;
  char **local_a8;
  undefined1 local_a0;
  ulonglong local_98;
  
  local_98 = DAT_180919500 ^ (ulonglong)auStack_1b8;
  FUN_1802b9110("effects");
  FUN_1803e89e0("nl_effects");
  FUN_1802c0a60("nightmode",param_1);
  uVar6 = DAT_1808acda0;
  FUN_1803ec6c0(0,DAT_1808acda0);
  local_e8 = local_168;
  local_f0 = param_1;
  FUN_1802ceb60(&local_178,"##nightmode_color");
  local_160 = param_1 + 4;
  local_158 = (undefined *)0x0;
  local_150 = 1;
  local_148 = 0;
  local_e0 = (char *)0x0;
  ppcStack_d8 = &local_160;
  local_d0 = (char *)CONCAT44(local_d0._4_4_,1);
  local_170[0] = 0;
  local_c8 = &local_e0;
  pcStack_c0 = (char *)CONCAT44(pcStack_c0._4_4_,1);
  local_b8 = (char *)local_170;
  pcStack_b0 = FUN_18034bf70;
  local_a8 = &local_f0;
  local_a0 = 0;
  FUN_1802ce6f0("##nightmode_color",&local_c8,&local_178);
  FUN_1802c0a60("fullbright",param_1 + 0x2c);
  FUN_1803ec6c0(0,uVar6);
  FUN_1802cedb0("##fullbright_color",param_1 + 0x30,1);
  FUN_1802c0a60("exposure",param_1 + 0x40);
  cVar8 = FUN_1802badc0("exposure_options","exposure");
  uVar4 = DAT_1808ac864;
  if (cVar8 != '\0') {
    local_e0 = "map";
    ppcStack_d8 = (char **)0x1807615f8;
    local_d0 = "fixed";
    FUN_1802c2640("adaptation",param_1 + 0x44,&local_e0,3);
    if (*(int *)(param_1 + 0x44) != 2) {
      local_190 = (code *)((ulonglong)local_190 & 0xffffffff00000000);
      local_198 = "%.1f EV";
      FUN_18033e3a0("compensation",param_1 + 0x48,DAT_1808ace1c,uVar4);
    }
    uVar7 = DAT_1808acde4;
    uVar3 = DAT_1808ac750;
    if (*(int *)(param_1 + 0x44) == 1) {
      local_190 = (code *)((ulonglong)local_190 & 0xffffffff00000000);
      local_198 = "%.1f EV";
      FUN_18033e3a0("minimum",param_1 + 0x4c,DAT_1808acde4,DAT_1808ac750);
      local_190 = (code *)((ulonglong)local_190 & 0xffffffff00000000);
      local_198 = "%.1f EV";
      FUN_18033e3a0("maximum",param_1 + 0x50,uVar7,uVar3);
      local_190 = (code *)((ulonglong)local_190 & 0xffffffff00000000);
      local_198 = "%d%%";
      FUN_18033fa10("adaptation speed",param_1 + 0x54,10,300);
    }
    if (*(int *)(param_1 + 0x44) == 2) {
      local_190 = (code *)((ulonglong)local_190 & 0xffffffff00000000);
      local_198 = "%d%%";
      FUN_18033fa10("fixed exposure",param_1 + 0x58,0,200);
    }
    FUN_1802bc580();
  }
  puVar12 = auStack_1b8;
  puVar13 = auStack_1b8;
  FUN_1802c0a60("sunlight",param_1 + 0x5c);
  local_188 = &local_110;
  local_190 = FUN_18034c050;
  local_198 = "reflection";
  local_110 = param_1;
  FUN_1802f9de0("sun_colors",param_1 + 0x60,param_1 + 0x70,"illumination");
  FUN_1802c0a60(&DAT_1806f8584,param_1 + 0x94);
  local_108 = param_1;
  FUN_1803e89e0("sky_colors");
  FUN_1803ec6c0(0,uVar6);
  lVar11 = DAT_180ca0a50;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  fVar5 = DAT_1808ac97c;
  puVar14 = auStack_1b8;
  if ((DAT_1809f5b40 != *(int *)(*(longlong *)(lVar11 + 0x14f8) + 0x10)) ||
     (puVar14 = auStack_1b8, DAT_1809f5b44 != *(int *)(lVar11 + 4))) goto LAB_1802fbd19;
  uStack_174 = FUN_18053f0d0((DAT_1809f5b4c - DAT_1808ac97c) * DAT_1808ac1f4 + DAT_1809f5b48);
  local_178 = (float)DAT_1809f5b50 - fVar5;
  DAT_1809f5b50._0_4_ = local_178 - DAT_1808ac7ac;
  local_e0 = (char *)0x0;
  ppcStack_d8 = (char **)0x0;
  local_d0 = (char *)0x0;
  local_158 = "sky";
  local_150 = 1;
  local_148 = 0;
  local_160 = param_1 + 0x98;
  FUN_180042d00(&local_e0,&local_160);
  local_158 = "clouds";
  local_150 = 1;
  local_148 = 0;
  local_160 = param_1 + 0xa8;
  FUN_180042d00(&local_e0,&local_160);
  local_158 = "sun";
  local_150 = 1;
  local_148 = 0;
  local_160 = param_1 + 0xb8;
  FUN_180042d00(&local_e0,&local_160);
  local_c8 = (char **)0x0;
  pcStack_c0 = local_e0;
  local_b8 = (char *)CONCAT44(local_b8._4_4_,3);
  local_170[0] = 0;
  local_140 = &local_c8;
  local_138 = 1;
  local_130 = local_170;
  local_128 = (code *)&LAB_180346ca0;
  local_120 = &local_108;
  local_118 = 0;
  FUN_1802ce6f0("##colors",&local_140,&local_178);
  puVar14 = auStack_1b8;
  if (local_e0 == (char *)0x0) goto LAB_1802fbd19;
  pcVar10 = local_e0;
  if (((longlong)local_d0 - (longlong)local_e0 & 0xffffffffffffffe0U) < 0x1000) {
LAB_1802fbd05:
    puVar13 = puVar12;
  }
  else {
    pcVar10 = *(char **)(local_e0 + -8);
    if ((char *)0x1f < local_e0 + (-8 - (longlong)pcVar10)) {
      pcVar2 = (code *)swi(0x29);
      pcVar10 = (char *)(*pcVar2)(5);
      puVar12 = auStack_1b0;
      goto LAB_1802fbd05;
    }
  }
  *(undefined8 *)(puVar13 + -8) = 0x1802fbd0d;
  thunk_FUN_1803d64e0(pcVar10);
  local_e0 = (char *)0x0;
  ppcStack_d8 = (char **)0x0;
  local_d0 = (char *)0x0;
  puVar14 = puVar13;
LAB_1802fbd19:
  iVar1 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
  if (iVar1 < 2) {
    *(undefined8 *)(puVar14 + -8) = 0x1802fbd3e;
    FUN_1803ebc00("Calling PopID() too many times!");
  }
  else {
    *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar1 + -1;
  }
  *(undefined8 *)(puVar14 + -8) = 0x1802fbd5b;
  FUN_1802c0a60(&DAT_1806f8588,param_1 + 0x18c);
  *(undefined8 *)(puVar14 + -8) = 0x1802fbd67;
  FUN_1803ec6c0(0,uVar6);
  *(undefined8 *)(puVar14 + -8) = 0x1802fbd7c;
  local_100 = param_1;
  FUN_1802ceb60(puVar14 + 0x40,"##fog_color");
  *(char **)(puVar14 + 0x58) = param_1 + 400;
  *(undefined8 *)(puVar14 + 0x60) = 0;
  puVar14[0x68] = 1;
  *(undefined8 *)(puVar14 + 0x70) = 0;
  local_c8 = (char **)0x0;
  pcStack_c0 = puVar14 + 0x58;
  local_b8 = (char *)CONCAT44(local_b8._4_4_,1);
  *(undefined4 *)(puVar14 + 0x48) = 0;
  *(char ****)(puVar14 + 0x78) = &local_c8;
  local_138 = 1;
  local_130 = (undefined4 *)(puVar14 + 0x48);
  local_128 = FUN_18034c250;
  local_120 = &local_100;
  local_118 = 0;
  *(undefined8 *)(puVar14 + -8) = 0x1802fbdf0;
  FUN_1802ce6f0("##fog_color",puVar14 + 0x78,puVar14 + 0x40);
  *(undefined8 *)(puVar14 + -8) = 0x1802fbe03;
  FUN_1802c0a60("bloom",param_1 + 0x1b8);
  *(undefined8 *)(puVar14 + -8) = 0x1802fbe16;
  cVar8 = FUN_1802badc0("bloom_options","bloom");
  if (cVar8 != '\0') {
    *(undefined4 *)(puVar14 + 0x28) = 0;
    *(undefined **)(puVar14 + 0x20) = &DAT_1806f0260;
    *(undefined8 *)(puVar14 + -8) = 0x1802fbe47;
    FUN_18033fa10("strength",param_1 + 0x1bc,0xfffffc18,1000);
    *(undefined4 *)(puVar14 + 0x28) = 0;
    *(undefined **)(puVar14 + 0x20) = &DAT_1806f0260;
    *(undefined8 *)(puVar14 + -8) = 0x1802fbe70;
    FUN_18033fa10("screen strength",param_1 + 0x1c0,0xfffffc18,1000);
    *(undefined4 *)(puVar14 + 0x28) = 0;
    *(undefined **)(puVar14 + 0x20) = &DAT_1806f0260;
    *(undefined8 *)(puVar14 + -8) = 0x1802fbe96;
    FUN_18033fa10("blur strength",param_1 + 0x1c4,0,100);
    *(undefined4 *)(puVar14 + 0x28) = 0;
    *(undefined **)(puVar14 + 0x20) = &DAT_1806f0260;
    *(undefined8 *)(puVar14 + -8) = 0x1802fbebf;
    FUN_18033fa10("threshold",param_1 + 0x1c8,0xffffffe7,1000);
    *(undefined4 *)(puVar14 + 0x28) = 0;
    *(undefined **)(puVar14 + 0x20) = &DAT_1806f0260;
    *(undefined8 *)(puVar14 + -8) = 0x1802fbee5;
    FUN_18033fa10("threshold width",param_1 + 0x1cc,0,1000);
    *(undefined8 *)(puVar14 + -8) = 0x1802fbeec;
    FUN_1802d0b90(0);
    local_c8 = (char **)0x0;
    pcStack_c0 = (char *)0x0;
    local_b8 = (char *)0x0;
    pcStack_b0 = (code *)0x0;
    *(undefined8 *)(puVar14 + -8) = 0x1802fbf0f;
    snprintf(&local_c8,0x20,"blur weight %d",1);
    *(undefined8 *)(puVar14 + -8) = 0x1802fbf16;
    FUN_1803e8a70(0);
    *(undefined4 *)(puVar14 + 0x28) = 0;
    *(undefined **)(puVar14 + 0x20) = &DAT_1806f0260;
    *(undefined8 *)(puVar14 + -8) = 0x1802fbf39;
    FUN_18033fa10(&local_c8,param_1 + 0x1d0,0,100);
    *(undefined8 *)(puVar14 + -8) = 0x1802fbf45;
    FUN_1803ec6c0(0,uVar6);
    *(undefined8 *)(puVar14 + -8) = 0x1802fbf5b;
    FUN_1802cedb0("##weight_color",param_1 + 0x1e4,1);
    iVar1 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
    if (iVar1 < 2) {
      *(undefined8 *)(puVar14 + -8) = 0x1802fbf80;
      FUN_1803ebc00("Calling PopID() too many times!");
    }
    else {
      *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar1 + -1;
    }
    local_c8 = (char **)0x0;
    pcStack_c0 = (char *)0x0;
    local_b8 = (char *)0x0;
    pcStack_b0 = (code *)0x0;
    *(undefined8 *)(puVar14 + -8) = 0x1802fbfb0;
    snprintf(&local_c8,0x20,"blur weight %d",2);
    *(undefined8 *)(puVar14 + -8) = 0x1802fbfb8;
    FUN_1803e8a70(1);
    *(undefined4 *)(puVar14 + 0x28) = 0;
    *(undefined **)(puVar14 + 0x20) = &DAT_1806f0260;
    *(undefined8 *)(puVar14 + -8) = 0x1802fbfdb;
    FUN_18033fa10(&local_c8,param_1 + 0x1d4,0,100);
    *(undefined8 *)(puVar14 + -8) = 0x1802fbfe7;
    FUN_1803ec6c0(0,uVar6);
    *(undefined8 *)(puVar14 + -8) = 0x1802fbffd;
    FUN_1802cedb0("##weight_color",param_1 + 500,1);
    iVar1 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
    if (iVar1 < 2) {
      *(undefined8 *)(puVar14 + -8) = 0x1802fc022;
      FUN_1803ebc00("Calling PopID() too many times!");
    }
    else {
      *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar1 + -1;
    }
    local_c8 = (char **)0x0;
    pcStack_c0 = (char *)0x0;
    local_b8 = (char *)0x0;
    pcStack_b0 = (code *)0x0;
    *(undefined8 *)(puVar14 + -8) = 0x1802fc052;
    snprintf(&local_c8,0x20,"blur weight %d",3);
    *(undefined8 *)(puVar14 + -8) = 0x1802fc05c;
    FUN_1803e8a70(2);
    *(undefined4 *)(puVar14 + 0x28) = 0;
    *(undefined **)(puVar14 + 0x20) = &DAT_1806f0260;
    *(undefined8 *)(puVar14 + -8) = 0x1802fc07f;
    FUN_18033fa10(&local_c8,param_1 + 0x1d8,0,100);
    *(undefined8 *)(puVar14 + -8) = 0x1802fc08b;
    FUN_1803ec6c0(0,uVar6);
    *(undefined8 *)(puVar14 + -8) = 0x1802fc0a1;
    FUN_1802cedb0("##weight_color",param_1 + 0x204,1);
    iVar1 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
    if (iVar1 < 2) {
      *(undefined8 *)(puVar14 + -8) = 0x1802fc0c6;
      FUN_1803ebc00("Calling PopID() too many times!");
    }
    else {
      *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar1 + -1;
    }
    local_c8 = (char **)0x0;
    pcStack_c0 = (char *)0x0;
    local_b8 = (char *)0x0;
    pcStack_b0 = (code *)0x0;
    *(undefined8 *)(puVar14 + -8) = 0x1802fc0f6;
    snprintf(&local_c8,0x20,"blur weight %d",4);
    *(undefined8 *)(puVar14 + -8) = 0x1802fc100;
    FUN_1803e8a70(3);
    *(undefined4 *)(puVar14 + 0x28) = 0;
    *(undefined **)(puVar14 + 0x20) = &DAT_1806f0260;
    *(undefined8 *)(puVar14 + -8) = 0x1802fc123;
    FUN_18033fa10(&local_c8,param_1 + 0x1dc,0,100);
    *(undefined8 *)(puVar14 + -8) = 0x1802fc12f;
    FUN_1803ec6c0(0,uVar6);
    *(undefined8 *)(puVar14 + -8) = 0x1802fc145;
    FUN_1802cedb0("##weight_color",param_1 + 0x214,1);
    iVar1 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
    if (iVar1 < 2) {
      *(undefined8 *)(puVar14 + -8) = 0x1802fc16a;
      FUN_1803ebc00("Calling PopID() too many times!");
    }
    else {
      *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar1 + -1;
    }
    local_c8 = (char **)0x0;
    pcStack_c0 = (undefined1 *)0x0;
    local_b8 = (char *)0x0;
    pcStack_b0 = (code *)0x0;
    *(undefined8 *)(puVar14 + -8) = 0x1802fc19a;
    snprintf(&local_c8,0x20,"blur weight %d",5);
    *(undefined8 *)(puVar14 + -8) = 0x1802fc1a4;
    FUN_1803e8a70(4);
    *(undefined4 *)(puVar14 + 0x28) = 0;
    *(undefined **)(puVar14 + 0x20) = &DAT_1806f0260;
    *(undefined8 *)(puVar14 + -8) = 0x1802fc1c7;
    FUN_18033fa10(&local_c8,param_1 + 0x1e0,0,100);
    *(undefined8 *)(puVar14 + -8) = 0x1802fc1d3;
    FUN_1803ec6c0(0,uVar6);
    *(undefined8 *)(puVar14 + -8) = 0x1802fc1e9;
    FUN_1802cedb0("##weight_color",param_1 + 0x224,1);
    iVar1 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
    if (iVar1 < 2) {
      *(undefined8 *)(puVar14 + -8) = 0x1802fc20e;
      FUN_1803ebc00("Calling PopID() too many times!");
    }
    else {
      *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar1 + -1;
    }
    *(undefined8 *)(puVar14 + -8) = 0x1802fc21d;
    FUN_1802bc580();
  }
  *(undefined8 *)(puVar14 + -8) = 0x1802fc230;
  FUN_1802c0a60("vignette",param_1 + 0x234);
  *(undefined8 *)(puVar14 + -8) = 0x1802fc23c;
  FUN_1803ec6c0(0,uVar6);
  *(undefined8 *)(puVar14 + -8) = 0x1802fc251;
  local_f8 = param_1;
  FUN_1802ceb60(puVar14 + 0x40,"##vignette_color");
  *(char **)(puVar14 + 0x58) = param_1 + 0x238;
  *(undefined8 *)(puVar14 + 0x60) = 0;
  puVar14[0x68] = 1;
  *(undefined8 *)(puVar14 + 0x70) = 0;
  local_c8 = (char **)0x0;
  pcStack_c0 = puVar14 + 0x58;
  local_b8 = (char *)CONCAT44(local_b8._4_4_,1);
  *(undefined4 *)(puVar14 + 0x48) = 0;
  *(char ****)(puVar14 + 0x78) = &local_c8;
  local_138 = 1;
  local_130 = (undefined4 *)(puVar14 + 0x48);
  local_128 = FUN_18034c530;
  local_120 = &local_f8;
  local_118 = 0;
  *(undefined8 *)(puVar14 + -8) = 0x1802fc2c5;
  FUN_1802ce6f0("##vignette_color",puVar14 + 0x78,puVar14 + 0x40);
  *(undefined8 *)(puVar14 + -8) = 0x1802fc2d8;
  FUN_1802c0a60("local contrast",param_1 + 600);
  *(undefined8 *)(puVar14 + -8) = 0x1802fc2eb;
  cVar8 = FUN_1802badc0("contrast_options","local contrast");
  if (cVar8 != '\0') {
    *(undefined4 *)(puVar14 + 0x28) = 0;
    *(undefined **)(puVar14 + 0x20) = &DAT_1806f0260;
    *(undefined8 *)(puVar14 + -8) = 0x1802fc31c;
    FUN_18033fa10("strength",param_1 + 0x25c,0xfffffc18,1000);
    *(undefined4 *)(puVar14 + 0x28) = 0;
    *(undefined **)(puVar14 + 0x20) = &DAT_1806f0260;
    *(undefined8 *)(puVar14 + -8) = 0x1802fc345;
    FUN_18033fa10("edge strength",param_1 + 0x260,0xfffffc18,1000);
    *(undefined4 *)(puVar14 + 0x28) = 0;
    *(undefined **)(puVar14 + 0x20) = &DAT_1806f0260;
    *(undefined8 *)(puVar14 + -8) = 0x1802fc36e;
    FUN_18033fa10("vignette start",param_1 + 0x264,0xffffff9c,100);
    *(undefined4 *)(puVar14 + 0x28) = 0;
    *(undefined **)(puVar14 + 0x20) = &DAT_1806f0260;
    *(undefined8 *)(puVar14 + -8) = 0x1802fc397;
    FUN_18033fa10("vignette end",param_1 + 0x268,0xffffff9c,100);
    *(undefined4 *)(puVar14 + 0x28) = 0;
    *(undefined **)(puVar14 + 0x20) = &DAT_1806f0260;
    *(undefined8 *)(puVar14 + -8) = 0x1802fc3c0;
    FUN_18033fa10("vignette blur",param_1 + 0x26c,0xffffff9c,100);
    *(undefined8 *)(puVar14 + -8) = 0x1802fc3c5;
    FUN_1802bc580();
  }
  *(undefined8 *)(puVar14 + -8) = 0x1802fc3d8;
  FUN_1802c0a60("color correction",param_1 + 0x270);
  *(undefined8 *)(puVar14 + -8) = 0x1802fc3eb;
  cVar8 = FUN_1802badc0("color_correction_options","color correction");
  if (cVar8 != '\0') {
    local_e0 = "linear";
    ppcStack_d8 = (char **)0x180761718;
    *(undefined8 *)(puVar14 + -8) = 0x1802fc426;
    FUN_1802c2640("tone curve",param_1 + 0x274,&local_e0,2);
    *(undefined4 *)(puVar14 + 0x28) = 0;
    *(char **)(puVar14 + 0x20) = "%+d%%";
    *(undefined8 *)(puVar14 + -8) = 0x1802fc456;
    FUN_18033fa10("contrast",param_1 + 0x278,0xffffff38,200);
    *(undefined4 *)(puVar14 + 0x28) = 0;
    *(char **)(puVar14 + 0x20) = "%+d%%";
    *(undefined8 *)(puVar14 + -8) = 0x1802fc47f;
    FUN_18033fa10("highlights",param_1 + 0x27c,0xffffff38,200);
    *(undefined4 *)(puVar14 + 0x28) = 0;
    *(char **)(puVar14 + 0x20) = "%+d%%";
    *(undefined8 *)(puVar14 + -8) = 0x1802fc4a8;
    FUN_18033fa10("shadows",param_1 + 0x280,0xffffff38,200);
    if (param_1[0x294] == '\0') {
      *(undefined4 *)(puVar14 + 0x28) = 0;
      *(char **)(puVar14 + 0x20) = "%+d%%";
      *(undefined8 *)(puVar14 + -8) = 0x1802fc4db;
      FUN_18033fa10("saturation",param_1 + 0x284,0xffffff38,200);
      *(undefined4 *)(puVar14 + 0x28) = 0;
      *(char **)(puVar14 + 0x20) = "%+d%%";
      *(undefined8 *)(puVar14 + -8) = 0x1802fc504;
      FUN_18033fa10("vibrance",param_1 + 0x288,0xffffff38,200);
    }
    *(undefined4 *)(puVar14 + 0x28) = 0;
    *(char **)(puVar14 + 0x20) = "%+d%%";
    *(undefined8 *)(puVar14 + -8) = 0x1802fc52d;
    FUN_18033fa10("temperature",param_1 + 0x28c,0xffffff38,200);
    *(undefined4 *)(puVar14 + 0x28) = 0;
    *(char **)(puVar14 + 0x20) = "%+d%%";
    *(undefined8 *)(puVar14 + -8) = 0x1802fc556;
    FUN_18033fa10(&DAT_18075c884,param_1 + 0x290,0xffffff38,200);
    *(undefined8 *)(puVar14 + -8) = 0x1802fc569;
    FUN_1802c0a60("grayscale",param_1 + 0x294);
    *(undefined8 *)(puVar14 + -8) = 0x1802fc56e;
    FUN_1802bc580();
  }
  *(undefined8 *)(puVar14 + -8) = 0x1802fc581;
  FUN_1802c0a60("depth of field",param_1 + 0x295);
  *(undefined8 *)(puVar14 + -8) = 0x1802fc594;
  cVar8 = FUN_1802badc0("dof_options","depth of field");
  if (cVar8 != '\0') {
    local_e0 = "manual";
    ppcStack_d8 = (char **)0x1807617b8;
    DAT_181106f20 = "Choose a fixed focus distance or focus at the crosshair.";
    *(undefined8 *)(puVar14 + -8) = 0x1802fc5dd;
    FUN_1802c2640(&DAT_1806e044c,param_1 + 0x298,&local_e0,2);
    local_c8 = (char **)0x1807618b4;
    pcStack_c0 = "balanced";
    local_b8 = "performance";
    DAT_181106f20 = "Trade depth-of-field sampling quality for rendering performance.";
    *(undefined8 *)(puVar14 + -8) = 0x1802fc629;
    FUN_1802c2640("quality",param_1 + 0x29c,&local_c8,3);
    iVar1 = *(int *)(param_1 + 0x298);
    if (iVar1 != 0) {
      pcVar10 = "focus speed";
      uVar16 = 0x1e;
      puVar9 = &DAT_180761980;
      lVar11 = 0x2a4;
      DAT_181106f20 = "Control how quickly crosshair focus moves toward a farther target.";
    }
    else {
      pcVar10 = "focus distance";
      uVar16 = 0x96;
      puVar9 = &DAT_1807613a4;
      lVar11 = 0x2a0;
      DAT_181106f20 = "Set the distance from the camera to the center of the focused area.";
    }
    *(undefined4 *)(puVar14 + 0x28) = 0;
    *(undefined **)(puVar14 + 0x20) = puVar9;
    *(undefined8 *)(puVar14 + -8) = 0x1802fc697;
    FUN_18033fa10(pcVar10,param_1 + lVar11,iVar1 != 0,uVar16);
    DAT_181106f20 = "Set how wide the focused area is around the focus distance.";
    *(undefined4 *)(puVar14 + 0x28) = 0;
    *(undefined **)(puVar14 + 0x20) = &DAT_1807613a4;
    *(undefined8 *)(puVar14 + -8) = 0x1802fc6cb;
    FUN_18033fa10("focus range",param_1 + 0x2a8,0,0x96);
    *(undefined8 *)(puVar14 + -8) = 0x1802fc6d0;
    FUN_1802bc580();
  }
  *(undefined8 *)(puVar14 + -8) = 0x1802fc6e3;
  cVar8 = FUN_1802bc070("weather","weather");
  if (cVar8 != '\0') {
    DAT_1811074d0 = "icon_f72e";
    DAT_1811074d8 =
         "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 512 512\" width=\"512\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M288 32C288 50 302 64 320 64L352 64C369 64 384 79 384 96C384 114 369 128 352 128L32 128C14 128 0 143 0 160C0 178 14 192 32 192L352 192C405 192 448 149 448 96C448 43 405 0 352 0L320 0C302 0 288 15 288 32ZM352 384C352 402 366 416 384 416L416 416C469 416 512 373 512 320C512 267 469 224 416 224L32 224C14 224 0 239 0 256C0 274 14 288 32 288L416 288C433 288 448 303 448 320C448 338 433 352 416 352L384 352C366 352 352 367 352 384ZM128 512L160 512C213 512 256 469 256 416C256 363 213 320 160 320L32 320C14 320 0 335 0 352C0 370 14 384 32 384L160 384C177 384 192 399 192 416C192 434 177 448 160 448L128 448C110 448 96 462 96 480C96 497 110 512 128 512Z\"/></svg>"
    ;
    DAT_1811074e0 = 0x44000000;
    _DAT_1811074e4 = local_b8._4_4_;
    *(undefined8 *)(puVar14 + -8) = 0x1802fc72d;
    FUN_1802c0a60(&DAT_1806f85cc,param_1 + 0x2ac);
    *(undefined8 *)(puVar14 + -8) = 0x1802fc740;
    cVar8 = FUN_1802badc0("wind_options",&DAT_1806f85cc);
    if (cVar8 != '\0') {
      DAT_181106f20 = "Smooth continuously rotates the wind direction";
      DAT_1811074d0 = "icon_f14e";
      DAT_1811074d8 =
           "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 512 512\" width=\"512\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M256 512C347 512 431 463 477 384C523 305 523 208 477 128C431 49 347 0 256 0C164 0 80 49 34 128C-11 208 -11 305 34 384C80 463 164 512 256 512ZM306 326L162 381C143 389 123 369 131 350L186 206C190 197 196 191 205 187L349 132C368 124 388 143 380 163L325 307C321 316 315 322 306 326ZM288 256C288 239 273 224 256 224C238 224 224 239 224 256C224 274 238 288 256 288C273 288 288 274 288 256Z\"/></svg>"
      ;
      DAT_1811074e0 = 0x44000000;
      _DAT_1811074e4 = local_b8._4_4_;
      pcVar10 = &DAT_180761354;
      if (*(int *)(param_1 + 0x2b0) < 0) {
        pcVar10 = "smooth";
      }
      *(undefined4 *)(puVar14 + 0x28) = 0;
      *(char **)(puVar14 + 0x20) = pcVar10;
      *(undefined8 *)(puVar14 + -8) = 0x1802fc7c3;
      FUN_18033fa10("direction",param_1 + 0x2b0,0xffffffff,0x168);
      DAT_1811074d0 = "icon_f72e";
      DAT_1811074d8 =
           "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 512 512\" width=\"512\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M288 32C288 50 302 64 320 64L352 64C369 64 384 79 384 96C384 114 369 128 352 128L32 128C14 128 0 143 0 160C0 178 14 192 32 192L352 192C405 192 448 149 448 96C448 43 405 0 352 0L320 0C302 0 288 15 288 32ZM352 384C352 402 366 416 384 416L416 416C469 416 512 373 512 320C512 267 469 224 416 224L32 224C14 224 0 239 0 256C0 274 14 288 32 288L416 288C433 288 448 303 448 320C448 338 433 352 416 352L384 352C366 352 352 367 352 384ZM128 512L160 512C213 512 256 469 256 416C256 363 213 320 160 320L32 320C14 320 0 335 0 352C0 370 14 384 32 384L160 384C177 384 192 399 192 416C192 434 177 448 160 448L128 448C110 448 96 462 96 480C96 497 110 512 128 512Z\"/></svg>"
      ;
      DAT_1811074e0 = 0x44000000;
      _DAT_1811074e4 = local_b8._4_4_;
      *(undefined4 *)(puVar14 + 0x28) = 0;
      *(char **)(puVar14 + 0x20) = "%.1fx";
      *(undefined8 *)(puVar14 + -8) = 0x1802fc80f;
      FUN_18033e3a0("strength",param_1 + 0x2b4,0,uVar4);
      *(undefined8 *)(puVar14 + -8) = 0x1802fc816;
      FUN_1802d0b90(0);
      DAT_1811074d0 = "icon_f72e";
      DAT_1811074d8 =
           "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 512 512\" width=\"512\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M288 32C288 50 302 64 320 64L352 64C369 64 384 79 384 96C384 114 369 128 352 128L32 128C14 128 0 143 0 160C0 178 14 192 32 192L352 192C405 192 448 149 448 96C448 43 405 0 352 0L320 0C302 0 288 15 288 32ZM352 384C352 402 366 416 384 416L416 416C469 416 512 373 512 320C512 267 469 224 416 224L32 224C14 224 0 239 0 256C0 274 14 288 32 288L416 288C433 288 448 303 448 320C448 338 433 352 416 352L384 352C366 352 352 367 352 384ZM128 512L160 512C213 512 256 469 256 416C256 363 213 320 160 320L32 320C14 320 0 335 0 352C0 370 14 384 32 384L160 384C177 384 192 399 192 416C192 434 177 448 160 448L128 448C110 448 96 462 96 480C96 497 110 512 128 512Z\"/></svg>"
      ;
      DAT_1811074e0 = 0x44000000;
      _DAT_1811074e4 = local_b8._4_4_;
      *(undefined4 *)(puVar14 + 0x28) = 0;
      *(char **)(puVar14 + 0x20) = "%.1fx";
      *(undefined8 *)(puVar14 + -8) = 0x1802fc85b;
      FUN_18033e3a0("particle strength",param_1 + 0x2b8,0,uVar4);
      DAT_1811074d0 = "icon_f899";
      DAT_1811074d8 = &DAT_180751910;
      DAT_1811074e0 = 0x44200000;
      _DAT_1811074e4 = local_b8._4_4_;
      *(undefined4 *)(puVar14 + 0x28) = 0;
      *(undefined **)(puVar14 + 0x20) = &DAT_1806eabd0;
      *(undefined8 *)(puVar14 + -8) = 0x1802fc8b9;
      FUN_18033e3a0("particle turbulence",param_1 + 700,0,DAT_1808ac34c);
      DAT_1811074d0 = "icon_e08d";
      DAT_1811074d8 =
           "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 448 512\" width=\"448\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M64 64C64 47 49 32 32 32C14 32 0 47 0 64L0 448C0 465 14 480 32 480L416 480C433 480 448 465 448 448C448 431 433 416 416 416L64 416L64 64ZM96 98L96 146C127 150 156 159 183 172L208 131C174 113 136 102 96 98ZM211 188C243 209 271 237 292 269L333 244C308 205 275 172 236 147L211 188L211 188ZM211 188ZM334 384L382 384C378 344 367 306 349 272L308 297C321 324 330 353 334 385L334 384ZM334 384Z\"/></svg>"
      ;
      DAT_1811074e0 = 0x43e00000;
      _DAT_1811074e4 = local_b8._4_4_;
      *(undefined4 *)(puVar14 + 0x28) = 0;
      *(undefined **)(puVar14 + 0x20) = &DAT_18075d0e8;
      *(undefined8 *)(puVar14 + -8) = 0x1802fc917;
      FUN_18033e3a0("maximum tilt",param_1 + 0x2c0,0,DAT_1808acb58);
      *(undefined8 *)(puVar14 + -8) = 0x1802fc91c;
      FUN_1802bc580();
    }
    DAT_1811074d0 = "icon_f773";
    DAT_1811074d8 = &DAT_1807512a0;
    DAT_1811074e0 = 0x44100000;
    _DAT_1811074e4 = local_b8._4_4_;
    *(undefined8 *)(puVar14 + -8) = 0x1802fc95e;
    FUN_1802c0a60("model wetness",param_1 + 0x2c4);
    *(undefined8 *)(puVar14 + -8) = 0x1802fc971;
    cVar8 = FUN_1802badc0("wetness_options","model wetness");
    if (cVar8 != '\0') {
      DAT_1811074d0 = "icon_f043";
      DAT_1811074d8 =
           "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 384 512\" width=\"384\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M192 512C86 512 0 426 0 320C0 229 130 58 166 12C172 5 181 0 191 0L192 0C202 0 211 5 217 12C253 58 384 229 384 320C384 426 298 512 192 512ZM96 336C96 328 88 320 80 320C71 320 64 328 64 336C64 398 114 448 176 448C184 448 192 441 192 432C192 424 184 416 176 416C131 416 96 381 96 336L96 336Z\"/></svg>"
      ;
      DAT_1811074e0 = 0x43c00000;
      _DAT_1811074e4 = local_b8._4_4_;
      *(undefined4 *)(puVar14 + 0x28) = 0;
      *(undefined **)(puVar14 + 0x20) = &DAT_1806f0260;
      *(undefined8 *)(puVar14 + -8) = 0x1802fc9ce;
      FUN_18033fa10("rain strength",param_1 + 0x2c8,0,200);
      DAT_1811074d0 = "icon_f773";
      DAT_1811074d8 = &DAT_1807512a0;
      DAT_1811074e0 = 0x44100000;
      _DAT_1811074e4 = local_b8._4_4_;
      *(undefined4 *)(puVar14 + 0x28) = 0;
      *(undefined **)(puVar14 + 0x20) = &DAT_1806f0260;
      *(undefined8 *)(puVar14 + -8) = 0x1802fca15;
      FUN_18033fa10("wetness coverage",param_1 + 0x2cc,0,200);
      DAT_1811074d0 = "icon_f72e";
      DAT_1811074d8 =
           "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 512 512\" width=\"512\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M288 32C288 50 302 64 320 64L352 64C369 64 384 79 384 96C384 114 369 128 352 128L32 128C14 128 0 143 0 160C0 178 14 192 32 192L352 192C405 192 448 149 448 96C448 43 405 0 352 0L320 0C302 0 288 15 288 32ZM352 384C352 402 366 416 384 416L416 416C469 416 512 373 512 320C512 267 469 224 416 224L32 224C14 224 0 239 0 256C0 274 14 288 32 288L416 288C433 288 448 303 448 320C448 338 433 352 416 352L384 352C366 352 352 367 352 384ZM128 512L160 512C213 512 256 469 256 416C256 363 213 320 160 320L32 320C14 320 0 335 0 352C0 370 14 384 32 384L160 384C177 384 192 399 192 416C192 434 177 448 160 448L128 448C110 448 96 462 96 480C96 497 110 512 128 512Z\"/></svg>"
      ;
      DAT_1811074e0 = 0x44000000;
      _DAT_1811074e4 = local_b8._4_4_;
      *(undefined4 *)(puVar14 + 0x28) = 0;
      *(undefined **)(puVar14 + 0x20) = &DAT_1806f0260;
      *(undefined8 *)(puVar14 + -8) = 0x1802fca5c;
      FUN_18033fa10("wetness drying",param_1 + 0x2d0,0,100);
      DAT_1811074d0 = "icon_f6c4";
      DAT_1811074d8 = &DAT_1807521e0;
      DAT_1811074e0 = 0x44200000;
      _DAT_1811074e4 = local_b8._4_4_;
      *(undefined8 *)(puVar14 + -8) = 0x1802fca9e;
      FUN_1802c0a60("ignore sky exposure",param_1 + 0x2d4);
      *(undefined8 *)(puVar14 + -8) = 0x1802fcaa3;
      FUN_1802bc580();
    }
    *(undefined8 *)(puVar14 + -8) = 0x1802fcaaa;
    FUN_1802d0b90(0);
    DAT_1811074d0 = "icon_f0e7";
    DAT_1811074d8 =
         "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 448 512\" width=\"448\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M349 45C355 31 350 15 338 7C326 -2 310 -1 298 8L42 232C32 241 29 255 33 268C38 280 50 288 64 288L175 288L98 467C92 481 97 497 109 505C121 514 137 513 149 504L405 281C415 272 418 258 414 245C409 233 397 225 384 225L272 225L349 45L349 45Z\"/></svg>"
    ;
    DAT_1811074e0 = 0x43e00000;
    _DAT_1811074e4 = local_b8._4_4_;
    *(undefined8 *)(puVar14 + -8) = 0x1802fcaec;
    FUN_1802c0a60("thunder",param_1 + 0x2d5);
    *(char **)(puVar14 + 0x40) = param_1;
    *(undefined1 **)(puVar14 + 0x30) = puVar14 + 0x40;
    *(code **)(puVar14 + 0x28) = FUN_18034c610;
    *(undefined1 **)(puVar14 + 0x20) = &DAT_1806f83d8;
    *(undefined8 *)(puVar14 + -8) = 0x1802fcb34;
    FUN_1802f9de0("thunder_colors",param_1 + 0x2d8,param_1 + 0x2e8,"primary");
    DAT_1811074d0 = "icon_f75c";
    DAT_1811074d8 =
         "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 448 512\" width=\"448\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M102 134C98 143 96 152 96 162C96 196 124 225 158 225L161 225C195 225 224 196 224 162C224 152 221 143 217 134L171 40C169 35 164 32 160 32C155 32 150 35 148 40L102 134ZM6 326C2 335 0 344 0 354C0 388 28 416 62 416L65 416C99 416 128 388 128 354C128 344 125 335 121 326L75 232C73 227 68 224 63 224C59 224 54 227 52 232L6 326L6 326ZM6 326ZM307 135L209 295C198 314 191 336 191 358C191 426 246 480 313 480L325 480C393 480 447 426 447 358C447 336 441 314 429 295L332 135C329 131 324 128 319 128C314 128 310 131 307 135Z\"/></svg>"
    ;
    DAT_1811074e0 = 0x43e00000;
    _DAT_1811074e4 = local_b8._4_4_;
    *(undefined8 *)(puVar14 + -8) = 0x1802fcb76;
    FUN_1802c0a60(&DAT_1806f8bfc,param_1 + 0x302);
    *(char **)(puVar14 + 0x48) = param_1;
    *(undefined1 **)(puVar14 + 0x30) = puVar14 + 0x48;
    *(code **)(puVar14 + 0x28) = FUN_18034c780;
    *(undefined1 **)(puVar14 + 0x20) = &DAT_1806f83d8;
    *(undefined8 *)(puVar14 + -8) = 0x1802fcbb7;
    FUN_1802f9de0("rain_colors",param_1 + 0x304,param_1 + 0x314,"primary");
    DAT_1811074d0 = "icon_f7cf";
    DAT_1811074d8 = &DAT_180753220;
    DAT_1811074e0 = 0x44200000;
    _DAT_1811074e4 = local_b8._4_4_;
    *(undefined8 *)(puVar14 + -8) = 0x1802fcbf9;
    FUN_1802c0a60(&DAT_1806f8c7c,param_1 + 0x335);
    *(char ***)(puVar14 + 0x30) = &local_e0;
    *(code **)(puVar14 + 0x28) = FUN_18034c960;
    *(undefined1 **)(puVar14 + 0x20) = &DAT_1806f83d8;
    *(undefined8 *)(puVar14 + -8) = 0x1802fcc38;
    local_e0 = param_1;
    FUN_1802f9de0("snow_colors",param_1 + 0x338,param_1 + 0x348,"primary");
    *(undefined8 *)(puVar14 + -8) = 0x1802fcc3d;
    FUN_1802bc580();
  }
  *(undefined8 *)(puVar14 + -8) = 0x1802fcc50;
  cVar8 = FUN_1802bc070("removals","removals");
  if (cVar8 != '\0') {
    if ((((((param_1[0x364] == '\0') && (param_1[0x365] == '\0')) && (param_1[0x366] == '\0')) &&
         ((param_1[0x367] == '\0' && (param_1[0x368] == '\0')))) &&
        ((param_1[0x369] == '\0' && ((param_1[0x36a] == '\0' && (param_1[0x36b] == '\0')))))) &&
       ((param_1[0x36c] == '\0' && (param_1[0x36d] == '\0')))) {
      uVar15 = 0;
    }
    else {
      uVar15 = 1;
    }
    *(undefined8 *)(puVar14 + -8) = 0x1802fccd6;
    FUN_1802d0e90(&DAT_1806f8588,param_1 + 0x364,uVar15);
    *(undefined8 *)(puVar14 + -8) = 0x1802fcced;
    FUN_1802d0e90("sunlight",param_1 + 0x365,uVar15);
    if (param_1[0x365] == '\0') {
      *(undefined8 *)(puVar14 + -8) = 0x1802fcd0e;
      FUN_1802d0e90("viewmodel sunlight",param_1 + 0x366,uVar15);
    }
    *(undefined8 *)(puVar14 + -8) = 0x1802fcd25;
    FUN_1802d0e90("barnlights",param_1 + 0x367,uVar15);
    *(undefined8 *)(puVar14 + -8) = 0x1802fcd3c;
    FUN_1802d0e90("baked shadows",param_1 + 0x368,uVar15);
    *(undefined8 *)(puVar14 + -8) = 0x1802fcd53;
    FUN_1802d0e90("dynamic shadows",param_1 + 0x369,uVar15);
    *(undefined8 *)(puVar14 + -8) = 0x1802fcd6a;
    FUN_1802d0e90("post processing",param_1 + 0x36a,uVar15);
    *(undefined8 *)(puVar14 + -8) = 0x1802fcd81;
    FUN_1802d0e90("2d skybox",param_1 + 0x36b,uVar15);
    *(undefined8 *)(puVar14 + -8) = 0x1802fcd98;
    FUN_1802d0e90("3d skybox",param_1 + 0x36c,uVar15);
    *(undefined8 *)(puVar14 + -8) = 0x1802fcdaf;
    FUN_1802d0e90("cable particles",param_1 + 0x36d,uVar15);
    *(undefined8 *)(puVar14 + -8) = 0x1802fcdb4;
    FUN_1802bc580();
  }
  iVar1 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
  if (iVar1 < 2) {
    *(undefined8 *)(puVar14 + -8) = 0x1802fcdd9;
    FUN_1803ebc00("Calling PopID() too many times!");
  }
  else {
    *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar1 + -1;
  }
  *(undefined8 *)(puVar14 + -8) = 0x1802fcdef;
  return;
}



/* ===== 1802fce20 FUN_1802fce20 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802fce20(void)

{
  uint uVar1;
  longlong lVar2;
  float fVar3;
  undefined4 uVar4;
  char cVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_b8 [32];
  undefined2 *local_98;
  undefined4 local_90;
  char *local_88;
  char *local_80;
  undefined *local_78;
  char *local_70;
  char *local_68;
  char *local_60;
  char *local_58;
  char *local_50;
  char *local_48;
  char *local_40;
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStack_b8;
  FUN_1802b9110(&DAT_18075c084);
  FUN_1803e89e0("nl_view");
  cVar5 = FUN_1802bc070("view_options","view options");
  uVar4 = DAT_1808ac34c;
  fVar3 = DAT_1808ac1f4;
  if (cVar5 != '\0') {
    FUN_1803e89e0(&DAT_1806e0e18);
    FUN_1802c0a60("override fov",&DAT_18095cf20);
    cVar5 = DAT_18095cf20;
    FUN_1802b9bd0();
    lVar6 = DAT_180ca0a50;
    if (cVar5 == '\0') {
      DAT_181107580 = DAT_181107580 + 1;
      *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
      lVar2 = *(longlong *)(lVar6 + 0x14f8);
      lVar8 = *(longlong *)(lVar2 + 0x2c8);
      *(undefined1 *)(lVar2 + 0xce) = 1;
      iVar7 = *(int *)(*(longlong *)(*(longlong *)(lVar6 + 0x14f8) + 0x2c8) + 0x20);
      FUN_1803d8870(1,uVar4);
      FUN_1803e7920(1);
      FUN_1803d8a40(1);
      local_90 = 0;
      local_98 = (undefined2 *)&DAT_180761354;
      FUN_18033fa10("value",&DAT_18095cf24,0x1e,0x87);
      if (lVar8 != 0) {
        FUN_1802b9bd0();
        DAT_181107580 = DAT_181107580 + -1;
        FUN_1803e79e0();
        if (iVar7 < *(int *)(lVar8 + 0x20)) {
          do {
            lVar6 = (longlong)iVar7;
            iVar7 = iVar7 + 1;
            uVar1 = *(uint *)(*(longlong *)(lVar8 + 0x28) + 0x10 + lVar6 * 0x14);
            *(uint *)(*(longlong *)(lVar8 + 0x28) + 0x10 + lVar6 * 0x14) =
                 (int)(longlong)((float)(uVar1 >> 0x18) * fVar3 + fVar3) << 0x18 | uVar1 & 0xffffff;
          } while (iVar7 < *(int *)(lVar8 + 0x20));
        }
      }
    }
    else {
      local_90 = 0;
      local_98 = (undefined2 *)&DAT_180761354;
      FUN_18033fa10("value",&DAT_18095cf24,0x1e,0x87);
    }
    iVar7 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
    if (iVar7 < 2) {
      FUN_1803ebc00("Calling PopID() too many times!");
    }
    else {
      *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar7 + -1;
    }
    FUN_1802d0b90(0);
    FUN_1803e89e0("aspect");
    FUN_1802c0a60("override aspect ratio",&DAT_18095cf28);
    cVar5 = DAT_18095cf28;
    FUN_1802b9bd0();
    lVar6 = DAT_180ca0a50;
    if (cVar5 == '\0') {
      DAT_181107580 = DAT_181107580 + 1;
      *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
      lVar2 = *(longlong *)(lVar6 + 0x14f8);
      lVar8 = *(longlong *)(lVar2 + 0x2c8);
      *(undefined1 *)(lVar2 + 0xce) = 1;
      iVar7 = *(int *)(*(longlong *)(*(longlong *)(lVar6 + 0x14f8) + 0x2c8) + 0x20);
      FUN_1803d8870(1,uVar4);
      FUN_1803e7920(1);
      FUN_1803d8a40(1);
    }
    else {
      lVar8 = 0;
      iVar7 = 0;
    }
    local_88 = "horizontal";
    local_80 = "vertical";
    FUN_1802c2640("scaling",&DAT_18095cf2c,&local_88,2);
    local_90 = 0;
    local_98 = &DAT_1806dfdd8;
    FUN_18033fa10("value",&DAT_18095cf30,0x14,0xfa);
    if (lVar8 != 0) {
      FUN_1802b9bd0();
      DAT_181107580 = DAT_181107580 + -1;
      FUN_1803e79e0();
      if (iVar7 < *(int *)(lVar8 + 0x20)) {
        do {
          lVar6 = (longlong)iVar7;
          iVar7 = iVar7 + 1;
          uVar1 = *(uint *)(*(longlong *)(lVar8 + 0x28) + 0x10 + lVar6 * 0x14);
          *(uint *)(*(longlong *)(lVar8 + 0x28) + 0x10 + lVar6 * 0x14) =
               (int)(longlong)((float)(uVar1 >> 0x18) * fVar3 + fVar3) << 0x18 | uVar1 & 0xffffff;
        } while (iVar7 < *(int *)(lVar8 + 0x20));
      }
    }
    iVar7 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
    if (iVar7 < 2) {
      FUN_1803ebc00("Calling PopID() too many times!");
    }
    else {
      *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar7 + -1;
    }
    FUN_1802d0b90(0);
    FUN_1802c0a60("disable landing bob",&DAT_18095cf34);
    FUN_1802bc580();
  }
  cVar5 = FUN_1802bc070("scope_options","scope options");
  if (cVar5 != '\0') {
    FUN_1802c0a60("override fov",&DAT_18095cf35);
    cVar5 = DAT_18095cf35;
    FUN_1802b9bd0();
    lVar6 = DAT_180ca0a50;
    if (cVar5 == '\0') {
      DAT_181107580 = DAT_181107580 + 1;
      *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
      lVar2 = *(longlong *)(lVar6 + 0x14f8);
      lVar8 = *(longlong *)(lVar2 + 0x2c8);
      *(undefined1 *)(lVar2 + 0xce) = 1;
      iVar7 = *(int *)(*(longlong *)(*(longlong *)(lVar6 + 0x14f8) + 0x2c8) + 0x20);
      FUN_1803d8870(1,uVar4);
      FUN_1803e7920(1);
      FUN_1803d8a40(1);
    }
    else {
      lVar8 = 0;
      iVar7 = 0;
    }
    local_90 = 0;
    local_98 = (undefined2 *)&DAT_1806f0260;
    FUN_18033fa10("scale (x1)",&DAT_18095cf38,0,100);
    local_90 = 0;
    local_98 = (undefined2 *)&DAT_1806f0260;
    FUN_18033fa10("scale (x2)",&DAT_18095cf3c,0,100);
    if (lVar8 != 0) {
      FUN_1802b9bd0();
      DAT_181107580 = DAT_181107580 + -1;
      FUN_1803e79e0();
      if (iVar7 < *(int *)(lVar8 + 0x20)) {
        do {
          lVar6 = (longlong)iVar7;
          iVar7 = iVar7 + 1;
          uVar1 = *(uint *)(*(longlong *)(lVar8 + 0x28) + 0x10 + lVar6 * 0x14);
          *(uint *)(*(longlong *)(lVar8 + 0x28) + 0x10 + lVar6 * 0x14) =
               (int)(longlong)((float)(uVar1 >> 0x18) * fVar3 + fVar3) << 0x18 | uVar1 & 0xffffff;
        } while (iVar7 < *(int *)(lVar8 + 0x20));
      }
    }
    FUN_1802d0b90(0);
    FUN_1802c0a60("instant scope",&DAT_18095cf40);
    FUN_1802c0a60("show viewmodel",&DAT_18095cf41);
    if (DAT_18095cf41 != '\0') {
      DAT_181106f20 = "Forces X2 zoom to use the X1 viewmodel FOV";
      FUN_1802c0a60("force viewmodel fov",&DAT_18095cf42);
    }
    FUN_1802bc580();
  }
  cVar5 = FUN_1802bc070("viewmodel_options","viewmodel options");
  if (cVar5 != '\0') {
    FUN_1803e89e0(&DAT_1806e0e18);
    FUN_1802c0a60("override fov",&DAT_18095cf43);
    cVar5 = DAT_18095cf43;
    FUN_1802b9bd0();
    lVar6 = DAT_180ca0a50;
    if (cVar5 == '\0') {
      DAT_181107580 = DAT_181107580 + 1;
      *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
      lVar2 = *(longlong *)(lVar6 + 0x14f8);
      lVar8 = *(longlong *)(lVar2 + 0x2c8);
      *(undefined1 *)(lVar2 + 0xce) = 1;
      iVar7 = *(int *)(*(longlong *)(*(longlong *)(lVar6 + 0x14f8) + 0x2c8) + 0x20);
      FUN_1803d8870(1,uVar4);
      FUN_1803e7920(1);
      FUN_1803d8a40(1);
      local_90 = 0;
      local_98 = (undefined2 *)&DAT_180761354;
      FUN_18033fa10("value",&DAT_18095cf44,0x28,0x69);
      if (lVar8 != 0) {
        FUN_1802b9bd0();
        DAT_181107580 = DAT_181107580 + -1;
        FUN_1803e79e0();
        if (iVar7 < *(int *)(lVar8 + 0x20)) {
          do {
            lVar6 = (longlong)iVar7;
            iVar7 = iVar7 + 1;
            uVar1 = *(uint *)(*(longlong *)(lVar8 + 0x28) + 0x10 + lVar6 * 0x14);
            *(uint *)(*(longlong *)(lVar8 + 0x28) + 0x10 + lVar6 * 0x14) =
                 (int)(longlong)((float)(uVar1 >> 0x18) * fVar3 + fVar3) << 0x18 | uVar1 & 0xffffff;
          } while (iVar7 < *(int *)(lVar8 + 0x20));
        }
      }
    }
    else {
      local_90 = 0;
      local_98 = (undefined2 *)&DAT_180761354;
      FUN_18033fa10("value",&DAT_18095cf44,0x28,0x69);
    }
    iVar7 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
    if (iVar7 < 2) {
      FUN_1803ebc00("Calling PopID() too many times!");
    }
    else {
      *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar7 + -1;
    }
    FUN_1802d0b90(0);
    FUN_1802c0a60("override position",&DAT_18095cf48);
    cVar5 = DAT_18095cf48;
    FUN_1802b9bd0();
    lVar6 = DAT_180ca0a50;
    if (cVar5 == '\0') {
      DAT_181107580 = DAT_181107580 + 1;
      *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
      lVar2 = *(longlong *)(lVar6 + 0x14f8);
      lVar8 = *(longlong *)(lVar2 + 0x2c8);
      *(undefined1 *)(lVar2 + 0xce) = 1;
      iVar7 = *(int *)(*(longlong *)(*(longlong *)(lVar6 + 0x14f8) + 0x2c8) + 0x20);
      FUN_1803d8870(1,uVar4);
      FUN_1803e7920(1);
      FUN_1803d8a40(1);
    }
    else {
      lVar8 = 0;
      iVar7 = 0;
    }
    local_90 = 0;
    local_98 = (undefined2 *)&DAT_1806eabd0;
    FUN_18033e3a0(&DAT_1806d23e4,&DAT_18095cf4c,DAT_1808ace50,DAT_1808ac9e4);
    local_90 = 0;
    local_98 = (undefined2 *)&DAT_1806eabd0;
    FUN_18033e3a0(&DAT_1806d23e8,&DAT_18095cf50,DAT_1808ace54,DAT_1808aca54);
    local_90 = 0;
    local_98 = (undefined2 *)&DAT_1806eabd0;
    FUN_18033e3a0(&DAT_1806d23ec,&DAT_18095cf54,DAT_1808ace2c,DAT_1808ac900);
    if (lVar8 != 0) {
      FUN_1802b9bd0();
      DAT_181107580 = DAT_181107580 + -1;
      FUN_1803e79e0();
      if (iVar7 < *(int *)(lVar8 + 0x20)) {
        do {
          lVar6 = (longlong)iVar7;
          iVar7 = iVar7 + 1;
          uVar1 = *(uint *)(*(longlong *)(lVar8 + 0x28) + 0x10 + lVar6 * 0x14);
          *(uint *)(*(longlong *)(lVar8 + 0x28) + 0x10 + lVar6 * 0x14) =
               (int)(longlong)((float)(uVar1 >> 0x18) * fVar3 + fVar3) << 0x18 | uVar1 & 0xffffff;
        } while (iVar7 < *(int *)(lVar8 + 0x20));
      }
    }
    FUN_1802d0b90(0);
    FUN_1802c0a60("override angles",&DAT_18095cf58);
    cVar5 = DAT_18095cf58;
    FUN_1802b9bd0();
    lVar6 = DAT_180ca0a50;
    if (cVar5 == '\0') {
      DAT_181107580 = DAT_181107580 + 1;
      *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
      lVar2 = *(longlong *)(lVar6 + 0x14f8);
      lVar8 = *(longlong *)(lVar2 + 0x2c8);
      *(undefined1 *)(lVar2 + 0xce) = 1;
      iVar7 = *(int *)(*(longlong *)(*(longlong *)(lVar6 + 0x14f8) + 0x2c8) + 0x20);
      FUN_1803d8870(1,uVar4);
      FUN_1803e7920(1);
      FUN_1803d8a40(1);
    }
    else {
      lVar8 = 0;
      iVar7 = 0;
    }
    local_90 = 0;
    local_98 = (undefined2 *)&DAT_1806eabd0;
    FUN_18033e3a0("pitch",&DAT_18095cf5c,DAT_1808ace40,DAT_1808ac988);
    local_90 = 0;
    local_98 = (undefined2 *)&DAT_1806eabd0;
    FUN_18033e3a0(&DAT_1806e7350,&DAT_18095cf60,DAT_1808ace58,DAT_1808aca68);
    local_90 = 0;
    local_98 = (undefined2 *)&DAT_1806eabd0;
    FUN_18033e3a0(&DAT_180761ce8,&DAT_18095cf64,DAT_1808ace58,DAT_1808aca68);
    if (lVar8 != 0) {
      FUN_1802b9bd0();
      DAT_181107580 = DAT_181107580 + -1;
      FUN_1803e79e0();
      if (iVar7 < *(int *)(lVar8 + 0x20)) {
        do {
          lVar6 = (longlong)iVar7;
          iVar7 = iVar7 + 1;
          uVar1 = *(uint *)(*(longlong *)(lVar8 + 0x28) + 0x10 + lVar6 * 0x14);
          *(uint *)(*(longlong *)(lVar8 + 0x28) + 0x10 + lVar6 * 0x14) =
               (int)(longlong)((float)(uVar1 >> 0x18) * fVar3 + fVar3) << 0x18 | uVar1 & 0xffffff;
        } while (iVar7 < *(int *)(lVar8 + 0x20));
      }
    }
    FUN_1802d0b90(0);
    FUN_1802c0a60("override modifiers",&DAT_18095cf68);
    cVar5 = DAT_18095cf68;
    FUN_1802b9bd0();
    lVar6 = DAT_180ca0a50;
    if (cVar5 == '\0') {
      DAT_181107580 = DAT_181107580 + 1;
      *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
      lVar2 = *(longlong *)(lVar6 + 0x14f8);
      lVar8 = *(longlong *)(lVar2 + 0x2c8);
      *(undefined1 *)(lVar2 + 0xce) = 1;
      iVar7 = *(int *)(*(longlong *)(*(longlong *)(lVar6 + 0x14f8) + 0x2c8) + 0x20);
      FUN_1803d8870(1,uVar4);
      FUN_1803e7920(1);
      FUN_1803d8a40(1);
    }
    else {
      lVar8 = 0;
      iVar7 = 0;
    }
    local_90 = 0;
    local_98 = (undefined2 *)&DAT_1806f0260;
    FUN_18033fa10("bobbing",&DAT_18095cf6c,0,200);
    local_90 = 0;
    local_98 = (undefined2 *)&DAT_1806f0260;
    FUN_18033fa10("rotation sway",&DAT_18095cf70,0,200);
    local_90 = 0;
    local_98 = (undefined2 *)&DAT_1806f0260;
    FUN_18033fa10("velocity sway",&DAT_18095cf74,0,200);
    local_90 = 0;
    local_98 = (undefined2 *)&DAT_1806f0260;
    FUN_18033fa10("in air offset",&DAT_18095cf78,0,100);
    local_90 = 0;
    local_98 = (undefined2 *)&DAT_1806f0260;
    FUN_18033fa10("lower weapon",&DAT_18095cf7c,0,200);
    local_90 = 0;
    local_98 = (undefined2 *)&DAT_1806f0260;
    FUN_18033fa10("ladder bob",&DAT_18095cf80,0,200);
    if (lVar8 != 0) {
      FUN_1802b9bd0();
      DAT_181107580 = DAT_181107580 + -1;
      FUN_1803e79e0();
      if (iVar7 < *(int *)(lVar8 + 0x20)) {
        do {
          lVar6 = (longlong)iVar7;
          iVar7 = iVar7 + 1;
          uVar1 = *(uint *)(*(longlong *)(lVar8 + 0x28) + 0x10 + lVar6 * 0x14);
          *(uint *)(*(longlong *)(lVar8 + 0x28) + 0x10 + lVar6 * 0x14) =
               (int)(longlong)((float)(uVar1 >> 0x18) * fVar3 + fVar3) << 0x18 | uVar1 & 0xffffff;
        } while (iVar7 < *(int *)(lVar8 + 0x20));
      }
    }
    FUN_1802bc580();
  }
  cVar5 = FUN_1802bc070("perspective_options","perspective options");
  if (cVar5 != '\0') {
    FUN_1802c0a60("force third person",&DAT_18095cf84);
    local_88 = "close to wall";
    local_80 = "holding grenade";
    FUN_1802c3050("disablers",&local_88,&DAT_18095cf85,2);
    local_90 = 0;
    local_98 = (undefined2 *)&DAT_1807613a4;
    FUN_18033fa10("distance",&DAT_18095cf88,0xf,0xfa);
    FUN_1802d0b90(0);
    local_78 = &DAT_180761eac;
    local_70 = "teammates";
    FUN_1802c3050("disable overhead",&local_78,&DAT_18095cf8c,2);
    FUN_1802bc580();
  }
  local_68 = "perspective";
  local_60 = "enemies";
  DAT_181106f20 = "Enhanced spectating capabilities";
  FUN_1802c3050("unlock spectating",&local_68,&DAT_18095cf8e,2);
  local_58 = "no shake";
  local_50 = "no recoil";
  local_48 = "no viewmodel recoil";
  local_40 = "no burst sway/dip";
  DAT_181106f20 = "Visual recoil and screen shake modifications";
  FUN_1802c3050("visual recoil",&local_58,&DAT_18095cf90,4);
  iVar7 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
  if (iVar7 < 2) {
    FUN_1803ebc00("Calling PopID() too many times!");
    return;
  }
  *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar7 + -1;
  return;
}



/* ===== 1802fdbf0 FUN_1802fdbf0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802fdbf0(longlong param_1)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  bool bVar4;
  float fVar5;
  undefined4 uVar6;
  longlong lVar7;
  int *piVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  int iVar13;
  undefined *puVar14;
  undefined1 auStack_a8 [32];
  undefined *local_88;
  undefined4 local_80;
  undefined1 *local_78;
  char *local_70;
  undefined4 local_64;
  undefined *local_60;
  char *local_58;
  undefined *local_50;
  char *local_48;
  ulonglong local_40;
  
  uVar6 = DAT_1808ac34c;
  local_40 = DAT_180919500 ^ (ulonglong)auStack_a8;
  if ((*(int *)(param_1 + 4) == 1) && (*(int *)(param_1 + 8) == 1)) {
    FUN_1802b9bd0();
    lVar12 = 0;
    bVar4 = true;
    iVar11 = 0;
  }
  else {
    FUN_1802b9bd0();
    lVar9 = DAT_180ca0a50;
    DAT_181107580 = DAT_181107580 + 1;
    *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
    lVar10 = *(longlong *)(lVar9 + 0x14f8);
    lVar12 = *(longlong *)(lVar10 + 0x2c8);
    *(undefined1 *)(lVar10 + 0xce) = 1;
    iVar11 = *(int *)(*(longlong *)(*(longlong *)(lVar9 + 0x14f8) + 0x2c8) + 0x20);
    FUN_1803d8870(1,uVar6);
    FUN_1803e7920(1);
    FUN_1803d8a40(1);
    bVar4 = false;
  }
  uVar2 = *(undefined4 *)(param_1 + 0x3c);
  local_60 = &DAT_1806dfd6c;
  DAT_1811074e0 = 0x44200000;
  local_58 = "right";
  local_50 = &DAT_1806dfd58;
  local_48 = "bottom";
  DAT_1811074d0 = "icon_e318";
  DAT_1811074d8 =
       "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 640 512\" width=\"640\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M448 448C438 448 429 444 423 436L176 128L32 128C14 128 0 114 0 96C0 79 14 64 32 64L192 64C201 64 210 69 217 76L463 384L608 384C625 384 640 399 640 416C640 434 625 448 608 448L448 448ZM448 128C430 128 416 114 416 96C416 79 430 64 448 64L608 64C625 64 640 79 640 96C640 114 625 128 608 128L448 128Z\"/></svg>"
  ;
  _DAT_1811074e4 = local_64;
  FUN_1802c3050("selection",&local_60,param_1 + 0x3c,4);
  piVar1 = (int *)(param_1 + 0x40);
  piVar8 = (int *)(param_1 + 0x3c);
  if (param_1 != param_1 + 4) {
    do {
      if ((char)*piVar8 != '\0') goto LAB_1802fdd55;
      piVar8 = (int *)((longlong)piVar8 + 1);
    } while (piVar8 != piVar1);
  }
  *(undefined4 *)(param_1 + 0x3c) = uVar2;
LAB_1802fdd55:
  DAT_1811074e0 = 0x44000000;
  local_78 = &DAT_1806dfd84;
  local_70 = "tilted";
  DAT_1811074d0 = "icon_f2f9";
  DAT_1811074d8 =
       "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 512 512\" width=\"512\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M463 224L472 224C485 224 496 214 496 200L496 72C496 63 490 54 481 50C472 47 461 49 455 55L413 97C325 11 184 11 97 98C10 186 10 327 97 415C185 501 326 501 414 415C426 402 426 382 414 370C401 357 381 357 369 370C306 432 205 432 142 370C80 307 80 206 142 143C205 81 305 81 368 142L327 183C320 190 318 201 321 210C325 219 334 224 344 224L463 224Z\"/></svg>"
  ;
  _DAT_1811074e4 = local_64;
  FUN_1802c2640("rotation",piVar1,&local_78,2);
  FUN_1802bc470();
  DAT_1811074e0 = 0x43e00000;
  DAT_1811074d0 = "icon_e0a3";
  puVar14 = &DAT_1806f0260;
  iVar13 = 0;
  lVar10 = 0;
  DAT_1811074d8 =
       "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 448 512\" width=\"448\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M246 10C234 -3 213 -3 201 10L137 74C128 83 125 97 130 109C135 121 147 129 160 129L192 129L192 161C192 178 206 193 224 193C241 193 256 178 256 161L256 128L288 128C300 128 312 121 317 109C322 97 319 83 310 74L246 10L246 10ZM246 10ZM192 352L192 384L160 384C147 384 135 392 130 404C125 416 128 430 137 439L201 502C213 515 234 515 246 502L310 439C319 430 322 416 317 404C312 392 300 384 287 384L256 384L256 352C256 335 241 320 224 320C206 320 192 335 192 352ZM32 224C14 224 0 239 0 256C0 274 14 288 32 288C49 288 64 274 64 256C64 239 49 224 32 224ZM128 224C110 224 96 239 96 256C96 274 110 288 128 288C145 288 160 274 160 256C160 239 145 224 128 224ZM224 288C241 288 256 274 256 256C256 239 241 224 224 224C206 224 192 239 192 256C192 274 206 288 224 288ZM320 224C302 224 288 239 288 256C288 274 302 288 320 288C337 288 352 274 352 256C352 239 337 224 320 224ZM384 256C384 274 398 288 416 288C433 288 448 274 448 256C448 239 433 224 416 224C398 224 384 239 384 256Z\"/></svg>"
  ;
  local_80 = 0;
  _DAT_1811074e4 = local_64;
  local_88 = &DAT_1806f0260;
  FUN_18033fa10("offset",param_1 + 0x44,0,100);
  local_80 = 0;
  DAT_1811074d0 = "icon_f047";
  DAT_1811074e0 = 0x44000000;
  DAT_1811074d8 =
       "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 512 512\" width=\"512\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M278 10C266 -3 245 -3 233 10L169 74C156 86 156 107 169 119C181 132 202 132 214 119L224 110L224 224L109 224L118 215C131 203 131 182 118 170C106 157 85 157 73 170L9 234C-3 246 -3 267 9 279L73 343C85 356 106 356 118 343C131 331 131 310 118 298L109 288L224 288L224 403L214 394C202 381 181 381 169 394C156 406 156 427 169 439L233 502C245 515 266 515 278 502L342 439C355 427 355 406 342 394C330 381 309 381 297 394L287 403L287 288L402 288L393 298C380 310 380 331 393 343C405 356 426 356 438 343L502 279C515 267 515 246 502 234L438 170C426 157 405 157 393 170C380 182 380 203 393 215L402 225L288 225L288 110L297 119C309 132 330 132 342 119C355 107 355 86 342 74L278 10L278 10ZM278 10Z\"/></svg>"
  ;
  _DAT_1811074e4 = local_64;
  local_88 = &DAT_1806f0260;
  FUN_18033fa10(&DAT_1806e0df8,param_1 + 0x48,0,100);
  if ((bVar4) && (*piVar1 != 0)) {
    FUN_1802b9bd0();
    lVar7 = DAT_180ca0a50;
    DAT_181107580 = DAT_181107580 + 1;
    *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
    lVar9 = *(longlong *)(lVar7 + 0x14f8);
    lVar10 = *(longlong *)(lVar9 + 0x2c8);
    *(undefined1 *)(lVar9 + 0xce) = 1;
    iVar13 = *(int *)(*(longlong *)(*(longlong *)(lVar7 + 0x14f8) + 0x2c8) + 0x20);
    FUN_1803d8870(1,uVar6);
    FUN_1803e7920(1);
    FUN_1803d8a40(1);
  }
  else {
    FUN_1802b9bd0();
  }
  local_80 = 0;
  DAT_1811074d0 = "icon_e4ba";
  DAT_1811074e0 = 0x44200000;
  DAT_1811074d8 =
       "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 640 512\" width=\"640\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M32 64C49 64 64 79 64 96L64 416C64 434 49 448 32 448C14 448 0 434 0 416L0 96C0 79 14 64 32 64ZM246 138C259 150 259 171 246 183L205 224L434 224L393 183C380 171 380 150 393 138C405 125 426 125 438 138L534 234C547 246 547 267 534 279L438 375C426 388 405 388 393 375C380 363 380 342 393 330L434 288L205 288L246 330C259 342 259 363 246 375C234 388 213 388 201 375L105 279C92 267 92 246 105 234L201 138C213 125 234 125 246 138L246 138ZM246 138ZM640 96L640 416C640 434 625 448 608 448C590 448 576 434 576 416L576 96C576 79 590 64 608 64C625 64 640 79 640 96Z\"/></svg>"
  ;
  _DAT_1811074e4 = local_64;
  local_88 = &DAT_1806f0260;
  FUN_18033fa10("aspect ratio",param_1 + 0x4c,0,100);
  fVar5 = DAT_1808ac1f4;
  if (lVar10 != 0) {
    FUN_1802b9bd0();
    DAT_181107580 = DAT_181107580 + -1;
    FUN_1803e79e0();
    if (iVar13 < *(int *)(lVar10 + 0x20)) {
      do {
        lVar9 = (longlong)iVar13;
        iVar13 = iVar13 + 1;
        uVar3 = *(uint *)(*(longlong *)(lVar10 + 0x28) + 0x10 + lVar9 * 0x14);
        *(uint *)(*(longlong *)(lVar10 + 0x28) + 0x10 + lVar9 * 0x14) =
             (int)(longlong)((float)(uVar3 >> 0x18) * fVar5 + fVar5) << 0x18 | uVar3 & 0xffffff;
      } while (iVar13 < *(int *)(lVar10 + 0x20));
    }
  }
  DAT_1811074d0 = "icon_e105";
  local_80 = 0;
  DAT_1811074d8 =
       "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 512 512\" width=\"512\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M1 232C6 180 26 132 58 93L104 139C83 165 69 197 65 232L1 232L1 232ZM138 105L92 59C131 27 179 6 231 2L231 66C196 70 164 84 138 105ZM279 447C315 443 347 429 373 408L419 453C380 485 332 506 279 510L279 447ZM407 374C428 348 442 315 446 280L510 280C505 333 485 381 453 420L407 374L407 374ZM407 374ZM92 453L138 408C164 429 196 443 231 447L231 510C179 506 131 485 92 453L92 453ZM92 453ZM58 420C26 381 5 333 1 280L65 280C69 316 83 348 104 374L58 420L58 420ZM419 59L373 105C347 84 315 70 280 66L280 2C332 6 380 27 419 59ZM407 139L453 93C485 132 505 180 510 233L446 233C442 197 428 165 407 139L407 139ZM407 139Z\"/></svg>"
  ;
  _DAT_1811074e4 = local_64;
  DAT_1811074e0 = 0x44000000;
  if (*(int *)(param_1 + 0x50) < 0x19) {
    puVar14 = &DAT_1806d2870;
  }
  local_88 = puVar14;
  FUN_18033fa10("spread scale",param_1 + 0x50,0x18,100);
  FUN_1802bc470();
  DAT_1811074e0 = 0x44200000;
  DAT_1811074d0 = "icon_e1c0";
  DAT_1811074d8 =
       "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 640 512\" width=\"640\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M134 154C122 141 101 141 89 154C76 166 76 187 89 199L153 263C165 276 186 276 198 263C211 251 211 230 198 218L134 154L134 154ZM134 154ZM288 192C288 210 302 224 320 224C337 224 352 210 352 192L352 96C352 79 337 64 320 64C302 64 288 79 288 96L288 192ZM441 218C428 230 428 251 441 263C453 276 474 276 486 263L550 199C563 187 563 166 550 154C538 141 517 141 505 154L441 218L441 218ZM441 218ZM0 384C0 402 14 416 32 416L96 416C113 416 128 402 128 384C128 367 113 352 96 352L32 352C14 352 0 367 0 384ZM224 352C206 352 192 367 192 384C192 402 206 416 224 416L416 416C433 416 448 402 448 384C448 367 433 352 416 352L224 352ZM544 352C526 352 512 367 512 384C512 402 526 416 544 416L608 416C625 416 640 402 640 384C640 367 625 352 608 352L544 352Z\"/></svg>"
  ;
  _DAT_1811074e4 = local_64;
  FUN_1802c0a60(&DAT_1806f83d8,param_1 + 0x54);
  FUN_1803ec6c0();
  FUN_1802cedb0("##scope_glow_color",param_1 + 0x58,1);
  if (lVar12 != 0) {
    FUN_1802b9bd0();
    DAT_181107580 = DAT_181107580 + -1;
    FUN_1803e79e0();
    if (iVar11 < *(int *)(lVar12 + 0x20)) {
      do {
        lVar10 = (longlong)iVar11;
        iVar11 = iVar11 + 1;
        uVar3 = *(uint *)(*(longlong *)(lVar12 + 0x28) + 0x10 + lVar10 * 0x14);
        *(uint *)(*(longlong *)(lVar12 + 0x28) + 0x10 + lVar10 * 0x14) =
             (int)(longlong)((float)(uVar3 >> 0x18) * fVar5 + fVar5) << 0x18 | uVar3 & 0xffffff;
      } while (iVar11 < *(int *)(lVar12 + 0x20));
    }
  }
  return;
}



/* ===== 1802fe120 FUN_1802fe120 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802fe120(void)

{
  longlong lVar1;
  float fVar2;
  undefined4 uVar3;
  char cVar4;
  char *pcVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  undefined8 uVar10;
  undefined1 auStack_178 [32];
  char *local_158;
  ulonglong local_150;
  undefined1 *local_138;
  char local_128 [8];
  undefined *local_120;
  undefined **local_118;
  undefined **local_110;
  char *local_108;
  undefined8 local_100;
  char **local_f8 [3];
  char *local_e0;
  char *local_d8;
  code *local_d0;
  char ***local_c8;
  undefined *local_c0;
  char *local_b8;
  char *local_b0;
  char *local_a8;
  undefined *local_98;
  undefined *local_90;
  char *local_88;
  undefined ***local_80;
  char *local_78;
  char *local_70;
  char *local_68;
  undefined1 *local_60;
  char *local_58;
  char *local_50;
  char *local_48;
  char *local_40;
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStack_178;
  FUN_1802b9110(&DAT_1806e05fc);
  FUN_1803e89e0("nl_hud");
  local_58 = "reveal enemies";
  local_50 = "reveal hostages";
  local_48 = "reveal bomb";
  local_40 = "override player angles";
  FUN_1802c3050("radar",&local_58,&DAT_18095d2cc,4);
  local_68 = "lines";
  local_70 = "default";
  local_60 = &DAT_1806dfd84;
  uVar10 = FUN_1802c2640("scope overlay",&DAT_18095d2d0,&local_70,3);
  if (DAT_18095d2d0 == 1) {
    local_138 = &DAT_18095d2cc;
    local_80 = (undefined ***)0x18058b610;
    local_88 = "default";
    local_120 = &DAT_18095d2d8;
    local_128[0] = '\x01';
    local_128[1] = '\0';
    local_128[2] = '\0';
    local_128[3] = '\0';
    local_98 = &DAT_18095d2e8;
    local_128[4] = '\x02';
    local_128[5] = '\0';
    local_128[6] = '\0';
    local_128[7] = '\0';
    local_90 = &DAT_18095d2f8;
    local_118 = &local_120;
    local_110 = &local_98;
    local_158 = local_128;
    FUN_1802cf0e0(uVar10,&DAT_18095d2d4,&local_88,&local_118);
  }
  DAT_181106f20 = "Visual overlay showing weapon inaccuracy";
  FUN_1802c0a60("inaccuracy overlay",&DAT_18095d334);
  FUN_1803ec6c0();
  local_f8[0] = (char **)&DAT_18095d2cc;
  FUN_1802ceb60(&local_120,"##inaccuracy_color");
  local_108 = (char *)CONCAT71(local_108._1_7_,1);
  local_110 = (undefined **)0x0;
  local_118 = (undefined **)&DAT_18095d338;
  local_80 = &local_118;
  local_100 = 0;
  local_f8[2] = &local_88;
  local_88 = (char *)0x0;
  local_d8 = local_128;
  local_78 = (char *)CONCAT44(local_78._4_4_,1);
  local_d0 = FUN_18034caa0;
  local_c8 = local_f8;
  local_128[0] = '\0';
  local_128[1] = '\0';
  local_128[2] = '\0';
  local_128[3] = '\0';
  local_e0 = (char *)CONCAT44(local_e0._4_4_,1);
  local_c0 = (undefined *)((ulonglong)local_c0 & 0xffffffffffffff00);
  FUN_1802ce6f0("##inaccuracy_color",local_f8 + 2,&local_120);
  cVar4 = FUN_1802bc070("death_notices","death notices");
  if (cVar4 != '\0') {
    local_88 = "off";
    local_80 = (undefined ***)0x180762148;
    local_78 = "kills and assists";
    FUN_1802c2640("preserve notices",&DAT_18095d350,&local_88,3);
    FUN_1802c0a60("hide teammate assists",&DAT_18095d354);
    FUN_1802bc580();
  }
  cVar4 = FUN_1802bc070("scoreboard","scoreboard");
  if (cVar4 != '\0') {
    local_150 = local_150 & 0xffffffff00000000;
    local_158 = "%d%%";
    FUN_18033fa10("opacity",&DAT_18095d358,0,100);
    local_150 = local_150 & 0xffffffff00000000;
    local_158 = "%d%%";
    FUN_18033fa10("width",&DAT_18095d35c,100,0xaf);
    FUN_1802d0b90(0);
    FUN_1802c0a60("reveal money",&DAT_18095d360);
    local_88 = "off";
    local_80 = (undefined ***)0x1807621f8;
    local_78 = "everyone";
    FUN_1802c2640("equipment",&DAT_18095d364,&local_88,3);
    FUN_1802d0b90(0);
    iVar9 = DAT_18095d364;
    FUN_1802b9bd0();
    lVar6 = DAT_180ca0a50;
    uVar3 = DAT_1808ac34c;
    if (iVar9 == 0) {
      DAT_181107580 = DAT_181107580 + 1;
      *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
      lVar1 = *(longlong *)(lVar6 + 0x14f8);
      lVar8 = *(longlong *)(lVar1 + 0x2c8);
      *(undefined1 *)(lVar1 + 0xce) = 1;
      iVar9 = *(int *)(*(longlong *)(*(longlong *)(lVar6 + 0x14f8) + 0x2c8) + 0x20);
      FUN_1803d8870(1,uVar3);
      FUN_1803e7920(1);
      FUN_1803d8a40(1);
    }
    else {
      lVar8 = 0;
      iVar9 = 0;
    }
    local_f8[2] = (char **)0x18075ce38;
    local_e0 = "secondary";
    local_d8 = "knife";
    local_d0 = (code *)0x18058b630;
    local_c8 = (char ***)0x1806f33a8;
    local_c0 = &DAT_18058b61c;
    local_b8 = "defuse kit";
    local_b0 = "armor";
    local_a8 = "other";
    pcVar5 = &DAT_18095d368;
    do {
      if (*pcVar5 != '\0') {
        uVar10 = 1;
        goto LAB_1802fe585;
      }
      pcVar5 = pcVar5 + 1;
    } while (pcVar5 != (char *)&DAT_18095d371);
    uVar10 = 0;
LAB_1802fe585:
    uVar7 = 0;
    do {
      FUN_1802d0e90(local_f8[(ulonglong)uVar7 + 2],&DAT_18095d368 + uVar7,uVar10);
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < 9);
    if (lVar8 != 0) {
      FUN_1802b9bd0();
      DAT_181107580 = DAT_181107580 + -1;
      FUN_1803e79e0();
      fVar2 = DAT_1808ac1f4;
      if (iVar9 < *(int *)(lVar8 + 0x20)) {
        do {
          lVar6 = (longlong)iVar9;
          iVar9 = iVar9 + 1;
          uVar7 = *(uint *)(*(longlong *)(lVar8 + 0x28) + 0x10 + lVar6 * 0x14);
          *(uint *)(*(longlong *)(lVar8 + 0x28) + 0x10 + lVar6 * 0x14) =
               (int)(longlong)((float)(uVar7 >> 0x18) * fVar2 + fVar2) << 0x18 | uVar7 & 0xffffff;
        } while (iVar9 < *(int *)(lVar8 + 0x20));
      }
    }
    FUN_1802bc580();
  }
  cVar4 = FUN_1802bc070("crosshairs","crosshairs");
  if (cVar4 != '\0') {
    DAT_181106f20 = "Show the crosshair on sniper rifles while unscoped.";
    FUN_1802c0a60("force sniper crosshair",&DAT_18095d371);
    FUN_1802c0a60("force while scoped",0x18095d372);
    FUN_1802c0a60("force while holding c4",0x18095d373);
    FUN_1802c0a60("hide while holding knife",0x18095d374);
    FUN_1802c0a60("hide while holding grenade",0x18095d375);
    FUN_1802c0a60("penetration",0x18095d376);
    FUN_1803ec6c0();
    local_150 = 0;
    local_110 = (undefined **)0x1807622a8;
    local_118 = (undefined **)&DAT_18073ca80;
    local_108 = "on target";
    local_158 = (char *)0x0;
    local_88 = (char *)((longlong)&DAT_18095d371 + 7);
    local_80 = (undefined ***)&DAT_18095d388;
    local_78 = &DAT_18095d398;
    FUN_1802f9be0("##pen_colors",&local_118,&local_88,3);
    FUN_1802bc580();
  }
  iVar9 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
  if (iVar9 < 2) {
    FUN_1803ebc00("Calling PopID() too many times!");
  }
  else {
    *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar9 + -1;
  }
  return;
}



/* ===== 1802fe7b0 FUN_1802fe7b0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802fe7b0(void)

{
  int iVar1;
  code *pcVar2;
  float fVar3;
  longlong lVar4;
  char cVar5;
  undefined8 *puVar6;
  char **ppcVar7;
  char *pcVar8;
  char *pcVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined4 uVar13;
  undefined4 *local_res8;
  undefined8 local_res10;
  undefined1 local_res18 [8];
  undefined1 *local_res20;
  undefined1 auStack_188 [8];
  undefined1 auStack_180 [24];
  undefined *local_168;
  undefined1 *local_160;
  char **local_158;
  char *local_148;
  char **local_140;
  undefined4 local_138;
  undefined4 local_134;
  char *local_130;
  char *local_128;
  undefined *local_120;
  char *local_118;
  undefined1 *local_110;
  char **local_108;
  char *pcStack_100;
  undefined4 **local_f8;
  undefined1 *local_f0;
  undefined1 **local_e8;
  undefined1 local_e0;
  undefined1 **local_d8;
  undefined *local_d0;
  undefined4 **local_c8;
  char *local_c0;
  char *local_b8;
  char *local_b0;
  char *local_a8;
  undefined1 *local_a0;
  char **local_98;
  undefined4 local_90;
  char *local_88;
  char *pcStack_80;
  undefined8 local_78;
  
  FUN_1802b9110("world esp");
  FUN_1803e89e0("nl_world_esp");
  cVar5 = FUN_1802bc070(&DAT_18058b61c,&DAT_18058b61c);
  uVar13 = DAT_1808acda0;
  if (cVar5 != '\0') {
    local_d8 = (undefined1 **)&DAT_18058b798;
    local_d0 = &DAT_18058b7a0;
    local_c8 = (undefined4 **)0x1807610a8;
    local_c0 = "time remaining";
    local_b8 = "damage";
    local_b0 = "distance";
    local_a8 = "glow";
    FUN_1802d0c70(0);
    FUN_1802f9700(&DAT_18095cf94,&local_d8,7,0);
    local_res8 = &DAT_18095cfc8;
    local_160 = (undefined1 *)0x0;
    local_168 = (undefined *)0x0;
    FUN_1802cfaf0("bomb defused",&local_res8,1,1);
    FUN_1802d0d30();
    DAT_1811074d0 = "icon_f890";
    DAT_1811074d8 =
         "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 512 512\" width=\"512\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M327 86C323 87 320 92 320 96C320 101 323 106 327 107L384 128L405 185C406 189 411 192 416 192C420 192 425 189 426 185L448 128L504 107C509 106 512 101 512 96C512 92 509 87 504 86L448 64L426 8C425 3 420 0 416 0C411 0 406 3 405 8L384 64L327 86ZM205 74C202 68 196 64 190 64C184 64 178 68 176 74L123 188L9 240C3 243 0 249 0 255C0 261 3 267 9 270L123 322L176 436C178 442 184 446 190 446C196 446 202 442 205 436L257 322L371 269C377 267 381 261 381 255C381 249 377 243 371 240L257 188L205 74ZM384 384L327 406C323 407 320 412 320 416C320 421 323 426 327 427L384 448L405 504C406 509 411 512 416 512C420 512 425 509 426 504L448 448L504 427C509 426 512 421 512 416C512 412 509 407 504 406L448 384L426 328C425 323 420 320 416 320C411 320 406 323 405 328L384 384Z\"/></svg>"
    ;
    DAT_1811074e0 = 0x44000000;
    _DAT_1811074e4 = local_134;
    FUN_1802c0a60("colorize effects",&DAT_18095d01c);
    FUN_1803e89e0("bomb_effect_colors");
    FUN_1803ec6c0(0,uVar13);
    local_88 = "explosion";
    pcStack_80 = "light";
    local_a0 = &DAT_18095d020;
    local_98 = (char **)&DAT_18095d030;
    local_160 = (undefined1 *)0x0;
    local_168 = (undefined *)0x0;
    FUN_1802f9be0("##colors",&local_88,&local_a0,2);
    iVar1 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
    if (iVar1 < 2) {
      FUN_1803ebc00("Calling PopID() too many times!");
    }
    else {
      *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar1 + -1;
    }
    DAT_1811074d0 = "icon_f1e2";
    DAT_1811074d8 =
         "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 512 512\" width=\"512\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M459 53L442 7C440 3 436 0 432 0C427 0 423 3 421 7L405 53L359 70C354 71 351 76 352 80C352 85 355 89 359 90L404 107L421 153C423 157 427 160 432 160C436 160 441 157 442 153L459 107L504 90C508 89 511 85 511 80C511 75 508 71 504 70L459 53ZM326 106C314 93 293 93 281 106L278 109C256 101 232 96 208 96C93 96 0 190 0 304C0 419 93 512 208 512C322 512 416 419 416 304C416 280 411 256 403 234L406 231C419 219 419 198 406 186L326 106L326 106ZM326 106ZM200 192C142 192 96 239 96 296L96 304C96 313 88 320 80 320C71 320 64 313 64 304L64 296C64 221 124 160 200 160L208 160C216 160 224 168 224 176C224 185 216 192 208 192L200 192L200 192Z\"/></svg>"
    ;
    DAT_1811074e0 = 0x44000000;
    _DAT_1811074e4 = local_134;
    FUN_1802c0a60("bomb indicator",&DAT_18095cea3);
    DAT_1811074d0 = "icon_f0c4";
    DAT_1811074d8 =
         "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 512 512\" width=\"512\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M256 192L216 153C221 140 224 127 224 112C224 51 173 0 112 0C50 0 0 51 0 112C0 174 50 224 112 224C126 224 139 222 152 217L192 256L152 296C139 291 126 288 112 288C50 288 0 339 0 400C0 461 50 512 112 512C173 512 224 461 224 400C224 386 221 373 216 360L499 77C506 70 506 59 499 52C470 23 425 23 396 52L256 192ZM278 343L396 460C425 489 470 489 499 460C506 453 506 443 499 436L342 279L278 343ZM64 112C64 95 73 80 88 71C102 62 121 62 136 71C150 80 160 95 160 112C160 130 150 145 136 154C121 163 102 163 88 154C73 145 64 130 64 112ZM112 352C129 352 144 362 153 376C162 391 162 410 153 424C144 439 129 448 112 448C94 448 79 439 70 424C61 410 61 391 70 376C79 362 94 352 112 352Z\"/></svg>"
    ;
    DAT_1811074e0 = 0x44000000;
    _DAT_1811074e4 = local_134;
    FUN_1802c0a60("defuse indicator",&DAT_18095cea4);
    local_158 = (char **)0x0;
    local_160 = (undefined1 *)0x0;
    local_168 = (undefined *)0x0;
    FUN_1802f9de0("defuse_colors",&DAT_18095cea8,&DAT_18095ceb8,0);
    DAT_1811074d0 = "icon_f0c4";
    DAT_1811074d8 =
         "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 512 512\" width=\"512\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M256 192L216 153C221 140 224 127 224 112C224 51 173 0 112 0C50 0 0 51 0 112C0 174 50 224 112 224C126 224 139 222 152 217L192 256L152 296C139 291 126 288 112 288C50 288 0 339 0 400C0 461 50 512 112 512C173 512 224 461 224 400C224 386 221 373 216 360L499 77C506 70 506 59 499 52C470 23 425 23 396 52L256 192ZM278 343L396 460C425 489 470 489 499 460C506 453 506 443 499 436L342 279L278 343ZM64 112C64 95 73 80 88 71C102 62 121 62 136 71C150 80 160 95 160 112C160 130 150 145 136 154C121 163 102 163 88 154C73 145 64 130 64 112ZM112 352C129 352 144 362 153 376C162 391 162 410 153 424C144 439 129 448 112 448C94 448 79 439 70 424C61 410 61 391 70 376C79 362 94 352 112 352Z\"/></svg>"
    ;
    DAT_1811074e0 = 0x44000000;
    _DAT_1811074e4 = local_134;
    FUN_1802c0a60("defuser",&DAT_18095cfd8);
    local_158 = (char **)0x0;
    local_160 = (undefined1 *)0x0;
    local_168 = (undefined *)0x0;
    FUN_1802f9de0("defuser_colors",&DAT_18095cfdc,&DAT_18095cfec,0);
    FUN_1802bc580();
  }
  cVar5 = FUN_1802bc070("weapons","weapons");
  if (cVar5 != '\0') {
    local_130 = "icon";
    local_128 = "text";
    local_120 = &DAT_1807610a0;
    local_118 = "distance";
    local_110 = &DAT_1806f83d8;
    FUN_1802d0c70(0);
    FUN_1802f9700(&DAT_18095d040,&local_130,5,1);
    FUN_1802d0d30();
    DAT_1811074d0 = "icon_f890";
    DAT_1811074d8 =
         "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 512 512\" width=\"512\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M327 86C323 87 320 92 320 96C320 101 323 106 327 107L384 128L405 185C406 189 411 192 416 192C420 192 425 189 426 185L448 128L504 107C509 106 512 101 512 96C512 92 509 87 504 86L448 64L426 8C425 3 420 0 416 0C411 0 406 3 405 8L384 64L327 86ZM205 74C202 68 196 64 190 64C184 64 178 68 176 74L123 188L9 240C3 243 0 249 0 255C0 261 3 267 9 270L123 322L176 436C178 442 184 446 190 446C196 446 202 442 205 436L257 322L371 269C377 267 381 261 381 255C381 249 377 243 371 240L257 188L205 74ZM384 384L327 406C323 407 320 412 320 416C320 421 323 426 327 427L384 448L405 504C406 509 411 512 416 512C420 512 425 509 426 504L448 448L504 427C509 426 512 421 512 416C512 412 509 407 504 406L448 384L426 328C425 323 420 320 416 320C411 320 406 323 405 328L384 384Z\"/></svg>"
    ;
    DAT_1811074e0 = 0x44000000;
    _DAT_1811074e4 = local_134;
    FUN_1802c0a60("colorize effects",&DAT_18095d074);
    local_158 = (char **)0x0;
    local_160 = (undefined1 *)0x0;
    local_168 = (undefined *)0x0;
    FUN_1802f9de0("weapon_effect_colors",&DAT_18095d078,&DAT_18095d088,0);
    FUN_1802bc580();
  }
  cVar5 = FUN_1802bc070("hostages","hostages");
  if (cVar5 != '\0') {
    local_130 = "bounding box";
    local_128 = "progress bar";
    local_120 = &DAT_18058b7a0;
    local_118 = "distance";
    local_110 = &DAT_1806f83d8;
    FUN_1802d0c70(0);
    FUN_1802f9700(&DAT_18095d098,&local_130,5,0);
    FUN_1802d0d30();
    DAT_1811074d0 = "icon_f4c4";
    DAT_1811074d8 =
         "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 640 512\" width=\"640\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M544 248L544 252L613 182C635 160 635 125 613 103L535 25C513 3 478 3 456 25L416 65C413 65 410 64 408 64L296 64C258 64 228 92 224 128L224 128L224 248C224 271 241 288 264 288C286 288 304 271 304 248L304 176C304 176 304 176 304 176L304 160L320 160L456 160C456 160 456 160 456 160L464 160C508 160 544 196 544 240L544 248ZM336 192L336 248C336 288 303 320 264 320C224 320 192 288 192 248L192 130C156 136 126 162 116 198L99 256L26 329C4 351 4 386 26 408L104 485C126 507 161 507 183 485L221 448C222 448 223 448 224 448L384 448C410 448 432 427 432 401C432 395 431 390 429 385L432 385C458 385 480 363 480 337C480 324 475 312 466 304C492 299 511 276 512 249L512 248C511 218 486 193 456 193C456 193 456 193 456 193L336 193L336 192ZM336 192Z\"/></svg>"
    ;
    DAT_1811074e0 = 0x44200000;
    _DAT_1811074e4 = local_134;
    FUN_1802c0a60("rescue indicator",&DAT_18095cec8);
    FUN_1803ec6c0(0,uVar13);
    FUN_1802cedb0("##rescue_color",&DAT_18095cecc,1);
    FUN_1802bc580();
  }
  cVar5 = FUN_1802bc070("grenades","grenades");
  if (cVar5 != '\0') {
    local_d8 = (undefined1 **)&DAT_18058b798;
    local_d0 = &DAT_18058b7a0;
    local_c8 = (undefined4 **)0x1807610a8;
    local_c0 = "time remaining";
    local_b8 = "distance";
    local_b0 = "glow";
    local_a8 = "trajectory";
    FUN_1802d0c70(0);
    FUN_1802f9700(&DAT_18095d0cc,&local_d8,7,0);
    FUN_1802d0d30();
    DAT_1811074d0 = "icon_e105";
    DAT_1811074d8 =
         "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 512 512\" width=\"512\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M1 232C6 180 26 132 58 93L104 139C83 165 69 197 65 232L1 232L1 232ZM138 105L92 59C131 27 179 6 231 2L231 66C196 70 164 84 138 105ZM279 447C315 443 347 429 373 408L419 453C380 485 332 506 279 510L279 447ZM407 374C428 348 442 315 446 280L510 280C505 333 485 381 453 420L407 374L407 374ZM407 374ZM92 453L138 408C164 429 196 443 231 447L231 510C179 506 131 485 92 453L92 453ZM92 453ZM58 420C26 381 5 333 1 280L65 280C69 316 83 348 104 374L58 420L58 420ZM419 59L373 105C347 84 315 70 280 66L280 2C332 6 380 27 419 59ZM407 139L453 93C485 132 505 180 510 233L446 233C442 197 428 165 407 139L407 139ZM407 139Z\"/></svg>"
    ;
    DAT_1811074e0 = 0x44000000;
    _DAT_1811074e4 = local_134;
    FUN_1802c0a60("smoke radius",&DAT_18095d130);
    FUN_1803ec6c0(0,uVar13);
    local_res10 = &DAT_18095cf94;
    FUN_1802ceb60(local_res18,"##smoke_radius_color");
    local_130 = &DAT_18095d134;
    local_128 = (char *)0x0;
    local_120 = (undefined *)CONCAT71(local_120._1_7_,1);
    local_118 = (char *)0x0;
    local_148 = (char *)0x0;
    local_140 = &local_130;
    local_138 = 1;
    local_res8 = (undefined4 *)((ulonglong)local_res8 & 0xffffffff00000000);
    local_108 = &local_148;
    pcStack_100 = (char *)CONCAT44(pcStack_100._4_4_,1);
    local_f8 = &local_res8;
    local_f0 = &LAB_18034cbe0;
    local_e8 = (undefined1 **)&local_res10;
    local_e0 = 0;
    FUN_1802ce6f0("##smoke_radius_color",&local_108,local_res18);
    DAT_1811074d0 = "icon_e600";
    DAT_1811074d8 =
         "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 640 512\" width=\"640\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M192 288C192 323 199 355 213 384C130 379 64 309 64 224C64 136 135 64 224 64C256 64 286 74 311 90C240 128 192 203 192 288ZM224 448C235 448 246 448 256 446C297 486 353 512 416 512C539 512 640 412 640 288C640 165 539 64 416 64C404 64 393 65 383 67C342 26 286 0 224 0C100 0 0 101 0 224C0 348 100 448 224 448ZM416 448C383 448 353 439 328 423C399 385 448 310 448 224C448 190 440 158 426 129C510 134 576 204 576 288C576 377 504 448 416 448Z\"/></svg>"
    ;
    DAT_1811074e0 = 0x44200000;
    _DAT_1811074e4 = local_134;
    FUN_1802c0a60("inferno radius",&DAT_18095d158);
    local_res20 = &DAT_18095cf94;
    local_158 = &local_res20;
    local_160 = &LAB_18034cbf0;
    local_168 = &DAT_1807623a8;
    FUN_1802f9de0("inferno_colors",&DAT_18095d15c,&DAT_18095d16c,"lethal");
    DAT_1811074d0 = "icon_e600";
    DAT_1811074d8 =
         "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 640 512\" width=\"640\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M192 288C192 323 199 355 213 384C130 379 64 309 64 224C64 136 135 64 224 64C256 64 286 74 311 90C240 128 192 203 192 288ZM224 448C235 448 246 448 256 446C297 486 353 512 416 512C539 512 640 412 640 288C640 165 539 64 416 64C404 64 393 65 383 67C342 26 286 0 224 0C100 0 0 101 0 224C0 348 100 448 224 448ZM416 448C383 448 353 439 328 423C399 385 448 310 448 224C448 190 440 158 426 129C510 134 576 204 576 288C576 377 504 448 416 448Z\"/></svg>"
    ;
    DAT_1811074e0 = 0x44200000;
    _DAT_1811074e4 = local_134;
    FUN_1802c0a60("projectile inferno radius",&DAT_18095d190);
    FUN_1803e89e0("projectile_colors");
    FUN_1803ec6c0(0,uVar13);
    local_148 = "lethal";
    local_140 = (char **)&DAT_1807623a8;
    local_108 = (char **)&DAT_18095d194;
    pcStack_100 = &DAT_18095d1a4;
    local_160 = (undefined1 *)0x0;
    local_168 = (undefined *)0x0;
    FUN_1802f9be0("##colors",&local_148,&local_108,2);
    iVar1 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
    if (iVar1 < 2) {
      FUN_1803ebc00("Calling PopID() too many times!");
    }
    else {
      *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar1 + -1;
    }
    FUN_1802bc470();
    if (DAT_18095d3ae == '\0') {
      DAT_1811074d0 = "icon_f760";
      DAT_1811074d8 =
           "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 640 512\" width=\"640\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M172 195C163 193 153 192 144 192C114 192 87 200 63 212C43 190 32 160 32 128C32 58 89 0 160 0C200 0 235 19 259 48C277 38 298 32 320 32C364 32 403 55 426 89C414 97 404 105 395 115C372 103 347 96 320 96C253 96 196 137 172 195ZM448 257C419 218 372 192 320 192C288 192 259 202 234 217C224 212 214 207 203 203C224 159 268 128 320 128C351 128 380 140 402 158C424 121 465 96 512 96C582 96 640 154 640 224C640 267 619 304 588 327C563 285 516 256 464 256C458 256 453 257 448 257L448 257ZM448 257ZM144 512C64 512 0 448 0 368C0 289 64 224 144 224C178 224 210 237 234 257C257 237 287 224 320 224C369 224 411 252 433 293C443 290 453 288 464 288C525 288 576 339 576 400C576 461 525 512 464 512L144 512Z\"/></svg>"
      ;
      DAT_1811074e0 = 0x44200000;
      _DAT_1811074e4 = local_134;
      FUN_1802c0a60("colorize smoke",&DAT_18095d1b4);
      FUN_1803e89e0("smoke_colors");
      FUN_1803ec6c0(0,uVar13);
      local_108 = (char **)0x18073edb8;
      pcStack_100 = "terrorists";
      local_148 = (char *)&DAT_18095d1b8;
      local_140 = (char **)&DAT_18095d1c8;
      local_160 = (undefined1 *)0x0;
      local_168 = (undefined *)0x0;
      FUN_1802f9be0("##colors",&local_108,&local_148,2);
      iVar1 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
      if (iVar1 < 2) {
        FUN_1803ebc00("Calling PopID() too many times!");
      }
      else {
        *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar1 + -1;
      }
    }
    DAT_1811074d0 = "icon_f6df";
    DAT_1811074d8 =
         "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 384 512\" width=\"384\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M372 257L371 255C337 161 282 77 209 9L205 6C202 2 197 0 192 0C186 0 181 2 178 6L174 9C102 77 46 161 12 255L11 257C3 278 0 300 0 322C0 427 86 512 192 512C297 512 384 427 384 322C384 300 380 278 372 257ZM188 149C190 146 194 144 197 144C203 144 208 149 208 155L208 167C208 175 211 184 217 190L269 241C291 263 304 292 304 323C304 384 255 432 195 432L192 432C130 432 80 382 80 320L80 312C80 291 87 271 101 255L108 247C110 245 113 243 117 243C123 243 128 248 128 254L128 298C128 323 147 342 172 342C196 342 216 323 216 299C216 287 211 276 203 268L190 254C176 240 168 221 168 201C168 185 173 169 183 156L188 149L188 149ZM188 149Z\"/></svg>"
    ;
    DAT_1811074e0 = 0x43c00000;
    _DAT_1811074e4 = local_134;
    FUN_1802c0a60("colorize molotov",&DAT_18095d1d8);
    local_88 = &DAT_18095cf94;
    local_160 = &LAB_18034cc00;
    local_168 = &DAT_1807623a8;
    local_158 = &local_88;
    FUN_1802f9de0("molotov_colors",&DAT_18095d1dc,&DAT_18095d1ec,"lethal");
    DAT_1811074d0 = "icon_e4e9";
    DAT_1811074d8 =
         "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 576 512\" width=\"576\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M499 12C506 1 520 -3 531 3C542 9 547 23 541 34L404 339C407 341 409 344 411 346L508 291C518 286 531 288 539 298C546 307 545 321 537 329L450 416L378 416C365 379 329 352 288 352C246 352 210 379 197 416L117 416L42 364C32 357 29 345 34 334C39 323 51 318 63 322L160 352C163 348 166 344 169 341L107 237C101 227 103 214 112 206C121 199 134 199 143 206L246 294C247 294 249 293 250 293L264 150C265 138 275 129 288 129C300 129 310 138 311 150L325 292L499 12ZM64 448L64 448L512 448L512 448L544 448C561 448 576 462 576 480C576 497 561 512 544 512L32 512C14 512 0 497 0 480C0 462 14 448 32 448L64 448ZM288 0C301 0 312 11 312 24L312 72C312 86 301 96 288 96C274 96 264 86 264 72L264 24C264 11 274 0 288 0Z\"/></svg>"
    ;
    DAT_1811074e0 = 0x44100000;
    _DAT_1811074e4 = local_134;
    FUN_1802c0a60("colorize explosion",&DAT_18095d1fd);
    FUN_1803ec6c0(0,uVar13);
    FUN_1802cedb0("##explosion_color",&DAT_18095d200,1);
    FUN_1802d0c70("effects");
    FUN_1802c0a60("effects",&DAT_18095d210);
    FUN_1803ec6c0(0,uVar13);
    local_a0 = &DAT_18095cf94;
    FUN_1802ceb60(local_res18,"##effects_color");
    local_130 = (char *)&DAT_18095d214;
    local_128 = (char *)0x0;
    local_120 = (undefined *)CONCAT71(local_120._1_7_,1);
    local_118 = (char *)0x0;
    local_148 = (char *)0x0;
    local_140 = &local_130;
    local_138 = 1;
    local_res8 = (undefined4 *)((ulonglong)local_res8 & 0xffffffff00000000);
    local_108 = &local_148;
    pcStack_100 = (char *)CONCAT44(pcStack_100._4_4_,1);
    local_f8 = &local_res8;
    local_f0 = &LAB_18034cc20;
    local_e8 = &local_a0;
    local_e0 = 0;
    FUN_1802ce6f0("##effects_color",&local_108,local_res18);
    FUN_1802d0d30();
    FUN_1802bc580();
  }
  FUN_1802c0a60("grenade trajectory",&DAT_18095d281);
  cVar5 = FUN_1802badc0("trajectory_options","grenade trajectory");
  puVar12 = auStack_188;
  if (cVar5 == '\0') goto LAB_1802ff686;
  DAT_1811074d0 = "icon_f53f";
  DAT_1811074d8 =
       "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 512 512\" width=\"512\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M512 256C512 257 512 258 512 259C511 296 478 320 441 320L344 320C317 320 296 342 296 368C296 372 296 375 297 378C299 389 303 398 307 408C313 422 319 436 319 449C319 481 298 510 266 511C263 511 259 512 255 512C114 512 0 398 0 256C0 115 114 0 256 0C397 0 512 115 512 256ZM128 288C128 271 113 256 96 256C78 256 64 271 64 288C64 306 78 320 96 320C113 320 128 306 128 288ZM128 192C145 192 160 178 160 160C160 143 145 128 128 128C110 128 96 143 96 160C96 178 110 192 128 192ZM288 96C288 79 273 64 256 64C238 64 224 79 224 96C224 114 238 128 256 128C273 128 288 114 288 96ZM384 192C401 192 416 178 416 160C416 143 401 128 384 128C366 128 352 143 352 160C352 178 366 192 384 192Z\"/></svg>"
  ;
  DAT_1811074e0 = 0x44000000;
  _DAT_1811074e4 = local_134;
  puVar6 = (undefined8 *)FUN_1802b9e90(&local_130,"color");
  lVar4 = DAT_180ca0a50;
  DAT_1809f5b50._4_4_ = *(undefined4 *)puVar6;
  DAT_1809f5b48 = *(float *)((longlong)puVar6 + 4);
  local_88 = (char *)*puVar6;
  DAT_1809f5b50._0_4_ = *(float *)(puVar6 + 1);
  DAT_1809f5b4c = *(float *)((longlong)puVar6 + 0xc);
  pcStack_80 = (char *)puVar6[1];
  local_78 = puVar6[2];
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  DAT_1809f5b44 = *(undefined4 *)(lVar4 + 4);
  DAT_1809f5b40 = *(undefined4 *)(*(longlong *)(lVar4 + 0x14f8) + 0x10);
  FUN_1802baa50(&local_88);
  local_108 = (char **)0x0;
  pcStack_100 = (char *)0x0;
  local_f8 = (undefined4 **)0x0;
  local_130 = &DAT_18095d284;
  local_128 = "base";
  local_120._0_1_ = 1;
  local_118 = (char *)0x0;
  FUN_180042d00(&local_108,&local_130);
  local_130 = (char *)&DAT_18095d294;
  local_128 = "hit";
  local_120._0_1_ = 1;
  local_118 = (char *)0x0;
  FUN_180042d00(&local_108,&local_130);
  local_130 = (char *)&DAT_18095d2a4;
  local_128 = "team damage";
  local_120 = (undefined *)CONCAT71(local_120._1_7_,1);
  local_118 = (char *)0x0;
  FUN_180042d00(&local_108,&local_130);
  fVar3 = DAT_1808ac97c;
  local_a0 = (undefined1 *)0x0;
  local_98 = local_108;
  local_90 = 3;
  local_res8 = (undefined4 *)((ulonglong)local_res8 & 0xffffffff00000000);
  local_d8 = &local_a0;
  local_d0 = (undefined *)CONCAT44(local_d0._4_4_,1);
  local_c8 = &local_res8;
  local_c0 = (char *)0x0;
  local_b8 = (char *)0x0;
  local_b0 = (char *)((ulonglong)local_b0 & 0xffffffffffffff00);
  uVar13 = FUN_18053f0d0((DAT_1809f5b4c - DAT_1808ac97c) * DAT_1808ac1f4 + DAT_1809f5b48);
  local_res10 = (undefined1 *)CONCAT44(uVar13,(float)DAT_1809f5b50 - fVar3);
  DAT_1809f5b50._0_4_ = ((float)DAT_1809f5b50 - fVar3) - DAT_1808ac7ac;
  FUN_1802ce6f0("color",&local_d8,&local_res10);
  puVar10 = auStack_188;
  puVar11 = auStack_188;
  puVar12 = auStack_188;
  if (local_108 != (char **)0x0) {
    ppcVar7 = local_108;
    if (((longlong)local_f8 - (longlong)local_108 & 0xffffffffffffffe0U) < 0x1000) {
LAB_1802ff41b:
      puVar11 = puVar10;
    }
    else {
      ppcVar7 = (char **)local_108[-1];
      if ((undefined *)0x1f < (undefined *)((longlong)local_108 + (-8 - (longlong)ppcVar7))) {
        pcVar2 = (code *)swi(0x29);
        ppcVar7 = (char **)(*pcVar2)(5);
        puVar10 = auStack_180;
        goto LAB_1802ff41b;
      }
    }
    *(undefined8 *)(puVar11 + -8) = 0x1802ff423;
    thunk_FUN_1803d64e0(ppcVar7);
    puVar12 = puVar11;
  }
  DAT_1811074d0 = "icon_e0c9";
  DAT_1811074d8 = &DAT_180745880;
  DAT_1811074e0 = 0x44000000;
  _DAT_1811074e4 = *(undefined4 *)(puVar12 + 0x6c);
  *(undefined4 *)(puVar12 + 0x28) = 0;
  *(undefined **)(puVar12 + 0x20) = &DAT_1806f0260;
  *(undefined8 *)(puVar12 + -8) = 0x1802ff47f;
  FUN_18033fa10("exponent",&DAT_18095d2b4,0,100);
  fVar3 = DAT_1808ac140;
  uVar13 = DAT_1808ac134;
  DAT_1811074d0 = "icon_f88e";
  DAT_1811074d8 =
       "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 576 512\" width=\"576\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M160 32C169 32 177 36 183 43L271 139C283 152 282 172 269 184C256 196 236 195 224 182L192 147L192 448C192 465 177 480 160 480C142 480 128 465 128 448L128 147L95 182C83 195 63 196 50 184C37 172 36 152 48 139L136 43C142 36 150 32 159 32L160 32ZM320 368C320 342 341 320 368 320L432 320C458 320 480 342 480 368L480 432C480 458 458 480 432 480L368 480C341 480 320 458 320 432L320 368ZM368 32L496 32C522 32 544 54 544 80L544 208C544 235 522 256 496 256L368 256C341 256 320 235 320 208L320 80C320 54 341 32 368 32Z\"/></svg>"
  ;
  DAT_1811074e0 = 0x44100000;
  _DAT_1811074e4 = *(undefined4 *)(puVar12 + 0x6c);
  pcVar9 = "%.2fpx";
  pcVar8 = "%.2fpx";
  if (DAT_18095d2b8 < DAT_1808ac140) {
    pcVar8 = "auto";
  }
  *(undefined4 *)(puVar12 + 0x28) = 0;
  *(char **)(puVar12 + 0x20) = pcVar8;
  *(undefined8 *)(puVar12 + -8) = 0x1802ff504;
  FUN_18033e3a0("thickness",&DAT_18095d2b8,DAT_1808ac134,DAT_1808ac838);
  DAT_181106f20 = "Auto inherits Thickness.";
  DAT_1811074d0 = "icon_e105";
  DAT_1811074d8 =
       "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 512 512\" width=\"512\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M1 232C6 180 26 132 58 93L104 139C83 165 69 197 65 232L1 232L1 232ZM138 105L92 59C131 27 179 6 231 2L231 66C196 70 164 84 138 105ZM279 447C315 443 347 429 373 408L419 453C380 485 332 506 279 510L279 447ZM407 374C428 348 442 315 446 280L510 280C505 333 485 381 453 420L407 374L407 374ZM407 374ZM92 453L138 408C164 429 196 443 231 447L231 510C179 506 131 485 92 453L92 453ZM92 453ZM58 420C26 381 5 333 1 280L65 280C69 316 83 348 104 374L58 420L58 420ZM419 59L373 105C347 84 315 70 280 66L280 2C332 6 380 27 419 59ZM407 139L453 93C485 132 505 180 510 233L446 233C442 197 428 165 407 139L407 139ZM407 139Z\"/></svg>"
  ;
  DAT_1811074e0 = 0x44000000;
  _DAT_1811074e4 = *(undefined4 *)(puVar12 + 0x6c);
  if (DAT_18095d2bc < fVar3) {
    pcVar9 = "auto";
  }
  *(undefined4 *)(puVar12 + 0x28) = 0;
  *(char **)(puVar12 + 0x20) = pcVar9;
  *(undefined8 *)(puVar12 + -8) = 0x1802ff56e;
  FUN_18033e3a0("points thickness",&DAT_18095d2bc,uVar13,DAT_1808ac838);
  *(char **)(puVar12 + 0x40) = "local grenade";
  *(char **)(puVar12 + 0x48) = "thrown grenades";
  DAT_1811074d0 = "icon_f890";
  DAT_1811074d8 =
       "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 512 512\" width=\"512\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M327 86C323 87 320 92 320 96C320 101 323 106 327 107L384 128L405 185C406 189 411 192 416 192C420 192 425 189 426 185L448 128L504 107C509 106 512 101 512 96C512 92 509 87 504 86L448 64L426 8C425 3 420 0 416 0C411 0 406 3 405 8L384 64L327 86ZM205 74C202 68 196 64 190 64C184 64 178 68 176 74L123 188L9 240C3 243 0 249 0 255C0 261 3 267 9 270L123 322L176 436C178 442 184 446 190 446C196 446 202 442 205 436L257 322L371 269C377 267 381 261 381 255C381 249 377 243 371 240L257 188L205 74ZM384 384L327 406C323 407 320 412 320 416C320 421 323 426 327 427L384 448L405 504C406 509 411 512 416 512C420 512 425 509 426 504L448 448L504 427C509 426 512 421 512 416C512 412 509 407 504 406L448 384L426 328C425 323 420 320 416 320C411 320 406 323 405 328L384 384Z\"/></svg>"
  ;
  DAT_1811074e0 = 0x44000000;
  _DAT_1811074e4 = *(undefined4 *)(puVar12 + 0x6c);
  *(undefined8 *)(puVar12 + -8) = 0x1802ff5d4;
  FUN_1802c3050("shimmer",puVar12 + 0x40,&DAT_18095d2c0,2);
  *(undefined8 *)(puVar12 + -8) = 0x1802ff5e7;
  cVar5 = FUN_1802badc0("shimmer_options","shimmer");
  if (cVar5 != '\0') {
    DAT_1811074d0 = "icon_e0c9";
    DAT_1811074d8 =
         "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 512 512\" width=\"512\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M224 80L224 32C224 15 238 0 256 0C273 0 288 15 288 32L288 80C288 98 273 112 256 112C238 112 224 98 224 80ZM160 256C160 222 178 191 208 173C237 156 274 156 304 173C333 191 352 222 352 256C352 291 333 322 304 340C274 357 237 357 208 340C178 322 160 291 160 256ZM0 256C0 239 14 224 32 224L80 224C97 224 112 239 112 256C112 274 97 288 80 288L32 288C14 288 0 274 0 256ZM432 224L480 224C497 224 512 239 512 256C512 274 497 288 480 288L432 288C414 288 400 274 400 256C400 239 414 224 432 224ZM256 512C238 512 224 497 224 480L224 432C224 415 238 400 256 400C273 400 288 415 288 432L288 480C288 497 273 512 256 512ZM73 439C60 427 60 406 73 394L105 362C117 349 138 349 150 362C163 374 163 395 150 407L118 439C106 451 85 451 73 439ZM73 439ZM361 106L393 74C405 61 426 61 438 74C451 86 451 107 438 119L406 151C394 164 373 164 361 151C348 139 348 118 361 106ZM438 439C426 451 405 451 393 439L361 407C348 395 348 374 361 362C373 349 394 349 406 362L438 394C451 406 451 427 438 439ZM105 151L73 119C60 107 60 86 73 74C85 61 106 61 118 74L150 106C163 118 163 139 150 151C138 164 117 164 105 151Z\"/></svg>"
    ;
    DAT_1811074e0 = 0x44000000;
    _DAT_1811074e4 = *(undefined4 *)(puVar12 + 0x6c);
    *(undefined4 *)(puVar12 + 0x28) = 0;
    *(undefined **)(puVar12 + 0x20) = &DAT_1806f0260;
    *(undefined8 *)(puVar12 + -8) = 0x1802ff632;
    FUN_18033fa10("strength",&DAT_18095d2c4,0,100);
    *(undefined8 *)(puVar12 + -8) = 0x1802ff637;
    FUN_1802bc580();
  }
  *(undefined8 *)(puVar12 + -8) = 0x1802ff63e;
  FUN_1802d0b90(0);
  *(undefined8 *)(puVar12 + -8) = 0x1802ff64d;
  FUN_1802c0a60("thrown grenades",&DAT_18095d2c8);
  *(undefined8 *)(puVar12 + -8) = 0x1802ff660;
  FUN_1802c0a60("pin pulled only",&DAT_18095d2c9);
  DAT_181106f20 =
       "Displays server-precise terminal positions, including edge case Molotov placements and smoke teleports when detonating inside an Inferno. This option does not affect grenade prediction accuracy, is forced by default for thrown grenades, and only applies to hand-held grenades."
  ;
  *(undefined8 *)(puVar12 + -8) = 0x1802ff681;
  FUN_1802c0a60("precise trajectory",&DAT_18095d2ca);
  *(undefined8 *)(puVar12 + -8) = 0x1802ff686;
  FUN_1802bc580();
LAB_1802ff686:
  *(undefined8 *)(puVar12 + -8) = 0x1802ff699;
  FUN_1802c0a60("grenade proximity warnings",&DAT_180921338);
  iVar1 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
  if (iVar1 < 2) {
    *(undefined8 *)(puVar12 + -8) = 0x1802ff6be;
    FUN_1803ebc00("Calling PopID() too many times!");
  }
  else {
    *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar1 + -1;
  }
  return;
}



/* ===== 1802ff6f0 FUN_1802ff6f0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802ff6f0(longlong *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_58;
  FUN_1803e8a70(0);
  FUN_1802c0a60("he grenade",*param_1 + 0x290);
  uVar3 = DAT_1808acda0;
  FUN_1803ec6c0(0,DAT_1808acda0);
  lVar6 = 0x280;
  lVar5 = 0x280;
  if (*(char *)(*param_1 + 0x2e8) == '\0') {
    lVar5 = 0x298;
  }
  puVar1 = (undefined4 *)(*param_1 + lVar5);
  local_38 = *puVar1;
  uStack_34 = puVar1[1];
  uStack_30 = puVar1[2];
  uStack_2c = puVar1[3];
  cVar4 = FUN_1802cedb0("##item_color",&local_38,1);
  if (cVar4 != '\0') {
    lVar5 = *param_1;
    *(undefined4 *)(lVar5 + 0x298) = local_38;
    *(undefined4 *)(lVar5 + 0x29c) = uStack_34;
    *(undefined4 *)(lVar5 + 0x2a0) = uStack_30;
    *(undefined4 *)(lVar5 + 0x2a4) = uStack_2c;
    *(undefined1 *)(*param_1 + 0x2e8) = 0;
  }
  iVar2 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
  if (iVar2 < 2) {
    FUN_1803ebc00("Calling PopID() too many times!");
  }
  else {
    *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar2 + -1;
  }
  FUN_1803e8a70(1);
  FUN_1802c0a60("flashbang",*param_1 + 0x291);
  FUN_1803ec6c0(0,uVar3);
  lVar5 = 0x280;
  if (*(char *)(*param_1 + 0x2e9) == '\0') {
    lVar5 = 0x2a8;
  }
  puVar1 = (undefined4 *)(*param_1 + lVar5);
  local_38 = *puVar1;
  uStack_34 = puVar1[1];
  uStack_30 = puVar1[2];
  uStack_2c = puVar1[3];
  cVar4 = FUN_1802cedb0("##item_color",&local_38,1);
  if (cVar4 != '\0') {
    lVar5 = *param_1;
    *(undefined4 *)(lVar5 + 0x2a8) = local_38;
    *(undefined4 *)(lVar5 + 0x2ac) = uStack_34;
    *(undefined4 *)(lVar5 + 0x2b0) = uStack_30;
    *(undefined4 *)(lVar5 + 0x2b4) = uStack_2c;
    *(undefined1 *)(*param_1 + 0x2e9) = 0;
  }
  iVar2 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
  if (iVar2 < 2) {
    FUN_1803ebc00("Calling PopID() too many times!");
  }
  else {
    *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar2 + -1;
  }
  FUN_1803e8a70(2);
  FUN_1802c0a60(&DAT_1806e7598,*param_1 + 0x292);
  FUN_1803ec6c0(0,uVar3);
  lVar5 = 0x280;
  if (*(char *)(*param_1 + 0x2ea) == '\0') {
    lVar5 = 0x2b8;
  }
  puVar1 = (undefined4 *)(*param_1 + lVar5);
  local_38 = *puVar1;
  uStack_34 = puVar1[1];
  uStack_30 = puVar1[2];
  uStack_2c = puVar1[3];
  cVar4 = FUN_1802cedb0("##item_color",&local_38,1);
  if (cVar4 != '\0') {
    lVar5 = *param_1;
    *(undefined4 *)(lVar5 + 0x2b8) = local_38;
    *(undefined4 *)(lVar5 + 700) = uStack_34;
    *(undefined4 *)(lVar5 + 0x2c0) = uStack_30;
    *(undefined4 *)(lVar5 + 0x2c4) = uStack_2c;
    *(undefined1 *)(*param_1 + 0x2ea) = 0;
  }
  iVar2 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
  if (iVar2 < 2) {
    FUN_1803ebc00("Calling PopID() too many times!");
  }
  else {
    *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar2 + -1;
  }
  FUN_1803e8a70(3);
  FUN_1802c0a60("molotov",*param_1 + 0x293);
  FUN_1803ec6c0(0,uVar3);
  lVar5 = 0x280;
  if (*(char *)(*param_1 + 0x2eb) == '\0') {
    lVar5 = 0x2c8;
  }
  puVar1 = (undefined4 *)(*param_1 + lVar5);
  local_38 = *puVar1;
  uStack_34 = puVar1[1];
  uStack_30 = puVar1[2];
  uStack_2c = puVar1[3];
  cVar4 = FUN_1802cedb0("##item_color",&local_38,1);
  if (cVar4 != '\0') {
    lVar5 = *param_1;
    *(undefined4 *)(lVar5 + 0x2c8) = local_38;
    *(undefined4 *)(lVar5 + 0x2cc) = uStack_34;
    *(undefined4 *)(lVar5 + 0x2d0) = uStack_30;
    *(undefined4 *)(lVar5 + 0x2d4) = uStack_2c;
    *(undefined1 *)(*param_1 + 0x2eb) = 0;
  }
  iVar2 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
  if (iVar2 < 2) {
    FUN_1803ebc00("Calling PopID() too many times!");
  }
  else {
    *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar2 + -1;
  }
  FUN_1803e8a70(4);
  FUN_1802c0a60(&DAT_1806de628,*param_1 + 0x294);
  FUN_1803ec6c0(0,uVar3);
  if (*(char *)(*param_1 + 0x2ec) == '\0') {
    lVar6 = 0x2d8;
  }
  puVar1 = (undefined4 *)(*param_1 + lVar6);
  local_38 = *puVar1;
  uStack_34 = puVar1[1];
  uStack_30 = puVar1[2];
  uStack_2c = puVar1[3];
  cVar4 = FUN_1802cedb0("##item_color",&local_38,1);
  if (cVar4 != '\0') {
    lVar5 = *param_1;
    *(undefined4 *)(lVar5 + 0x2d8) = local_38;
    *(undefined4 *)(lVar5 + 0x2dc) = uStack_34;
    *(undefined4 *)(lVar5 + 0x2e0) = uStack_30;
    *(undefined4 *)(lVar5 + 0x2e4) = uStack_2c;
    *(undefined1 *)(*param_1 + 0x2ec) = 0;
  }
  iVar2 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
  if (iVar2 < 2) {
    FUN_1803ebc00("Calling PopID() too many times!");
  }
  else {
    *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar2 + -1;
  }
  return;
}



/* ===== 1802ffa90 FUN_1802ffa90 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802ffa90(char *param_1)

{
  float fVar1;
  undefined4 local_54;
  
  DAT_1811074d0 = "icon_f1b2";
  DAT_1811074e0 = 0x44000000;
  DAT_1811074d8 =
       "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 512 512\" width=\"512\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M234 6C248 1 263 1 277 6L469 75C495 84 512 108 512 135L512 378C512 405 495 429 469 438L277 506C263 511 248 511 234 506L42 438C17 429 0 405 0 378L0 135C0 108 17 84 42 75L234 6ZM234 6ZM256 66L82 128L256 190L429 128L256 66ZM288 435L448 378L448 190L288 247L288 435Z\"/></svg>"
  ;
  _DAT_1811074e4 = local_54;
  FUN_1802c0a60("use 3d scale",param_1);
  if (*param_1 == '\0') {
    fVar1 = *(float *)(param_1 + 0x10);
  }
  else {
    fVar1 = *(float *)(param_1 + 0x14);
  }
  if (0.0 < fVar1) {
    DAT_1811074d0 = "icon_e1c0";
    DAT_1811074e0 = 0x44200000;
    DAT_1811074d8 =
         "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 640 512\" width=\"640\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M134 154C122 141 101 141 89 154C76 166 76 187 89 199L153 263C165 276 186 276 198 263C211 251 211 230 198 218L134 154L134 154ZM134 154ZM288 192C288 210 302 224 320 224C337 224 352 210 352 192L352 96C352 79 337 64 320 64C302 64 288 79 288 96L288 192ZM441 218C428 230 428 251 441 263C453 276 474 276 486 263L550 199C563 187 563 166 550 154C538 141 517 141 505 154L441 218L441 218ZM441 218ZM0 384C0 402 14 416 32 416L96 416C113 416 128 402 128 384C128 367 113 352 96 352L32 352C14 352 0 367 0 384ZM224 352C206 352 192 367 192 384C192 402 206 416 224 416L416 416C433 416 448 402 448 384C448 367 433 352 416 352L224 352ZM544 352C526 352 512 367 512 384C512 402 526 416 544 416L608 416C625 416 640 402 640 384C640 367 625 352 608 352L544 352Z\"/></svg>"
    ;
    _DAT_1811074e4 = local_54;
    FUN_18033fa10("glow opacity",param_1 + 4,0,100,&DAT_1806f0260,0);
  }
  if (*param_1 == '\0') {
    _DAT_1811074e4 = local_54;
    DAT_1811074d0 = "icon_f88e";
    DAT_1811074d8 =
         "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 576 512\" width=\"576\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M160 32C169 32 177 36 183 43L271 139C283 152 282 172 269 184C256 196 236 195 224 182L192 147L192 448C192 465 177 480 160 480C142 480 128 465 128 448L128 147L95 182C83 195 63 196 50 184C37 172 36 152 48 139L136 43C142 36 150 32 159 32L160 32ZM320 368C320 342 341 320 368 320L432 320C458 320 480 342 480 368L480 432C480 458 458 480 432 480L368 480C341 480 320 458 320 432L320 368ZM368 32L496 32C522 32 544 54 544 80L544 208C544 235 522 256 496 256L368 256C341 256 320 235 320 208L320 80C320 54 341 32 368 32Z\"/></svg>"
    ;
    DAT_1811074e0 = 0x44100000;
    FUN_18033e3a0("thickness",param_1 + 8,DAT_1808ac0c0,DAT_1808ac838,"%.2fpx",0);
    if (*param_1 != '\0') goto LAB_1802ffbd7;
  }
  else {
LAB_1802ffbd7:
    _DAT_1811074e4 = local_54;
    DAT_1811074d0 = "icon_f88e";
    DAT_1811074d8 =
         "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 576 512\" width=\"576\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M160 32C169 32 177 36 183 43L271 139C283 152 282 172 269 184C256 196 236 195 224 182L192 147L192 448C192 465 177 480 160 480C142 480 128 465 128 448L128 147L95 182C83 195 63 196 50 184C37 172 36 152 48 139L136 43C142 36 150 32 159 32L160 32ZM320 368C320 342 341 320 368 320L432 320C458 320 480 342 480 368L480 432C480 458 458 480 432 480L368 480C341 480 320 458 320 432L320 368ZM368 32L496 32C522 32 544 54 544 80L544 208C544 235 522 256 496 256L368 256C341 256 320 235 320 208L320 80C320 54 341 32 368 32Z\"/></svg>"
    ;
    DAT_1811074e0 = 0x44100000;
    FUN_18033fa10("scale",param_1 + 0xc,0x19,200,&DAT_1806f0260,0);
    if (*param_1 != '\0') goto LAB_1802ffc75;
  }
  _DAT_1811074e4 = local_54;
  DAT_1811074d0 = "icon_f185";
  DAT_1811074d8 =
       "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 512 512\" width=\"512\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M361 2C366 4 370 8 371 14L391 121L498 141C504 142 508 146 510 151C512 156 512 162 509 166L446 256L509 347C512 351 512 357 510 362C508 367 504 371 498 372L391 391L371 498C370 504 366 508 361 510C356 512 350 512 346 509L256 447L165 509C161 512 155 512 150 510C145 508 141 504 140 498L121 391L13 372C7 371 3 367 1 362C0 357 0 351 2 347L65 256L2 166C0 162 0 156 1 151C3 146 7 142 13 141L121 121L140 14C141 8 145 4 150 2C155 0 161 0 165 3L256 66L346 3C350 0 356 0 361 2ZM361 2ZM160 256C160 222 178 191 208 173C237 156 274 156 304 173C333 191 352 222 352 256C352 291 333 322 304 340C274 357 237 357 208 340C178 322 160 291 160 256ZM384 256C384 211 359 169 320 146C280 123 231 123 192 146C152 169 128 211 128 256C128 302 152 344 192 367C231 390 280 390 320 367C359 344 384 302 384 256Z\"/></svg>"
  ;
  DAT_1811074e0 = 0x44000000;
  FUN_18033e3a0("glow width",param_1 + 0x10,0,DAT_1808ac980,"%.0f px",0);
  if (*param_1 == '\0') {
    return;
  }
LAB_1802ffc75:
  _DAT_1811074e4 = local_54;
  DAT_1811074d0 = "icon_f185";
  DAT_1811074d8 =
       "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 512 512\" width=\"512\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M361 2C366 4 370 8 371 14L391 121L498 141C504 142 508 146 510 151C512 156 512 162 509 166L446 256L509 347C512 351 512 357 510 362C508 367 504 371 498 372L391 391L371 498C370 504 366 508 361 510C356 512 350 512 346 509L256 447L165 509C161 512 155 512 150 510C145 508 141 504 140 498L121 391L13 372C7 371 3 367 1 362C0 357 0 351 2 347L65 256L2 166C0 162 0 156 1 151C3 146 7 142 13 141L121 121L140 14C141 8 145 4 150 2C155 0 161 0 165 3L256 66L346 3C350 0 356 0 361 2ZM361 2ZM160 256C160 222 178 191 208 173C237 156 274 156 304 173C333 191 352 222 352 256C352 291 333 322 304 340C274 357 237 357 208 340C178 322 160 291 160 256ZM384 256C384 211 359 169 320 146C280 123 231 123 192 146C152 169 128 211 128 256C128 302 152 344 192 367C231 390 280 390 320 367C359 344 384 302 384 256Z\"/></svg>"
  ;
  DAT_1811074e0 = 0x44000000;
  FUN_18033e3a0("glow radius",param_1 + 0x14,0,DAT_1808ac8b0,"%.2f units",0);
  return;
}



/* ===== 1802ffce0 FUN_1802ffce0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802ffce0(longlong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  char *pcVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  int iVar12;
  undefined1 in_XMM1 [16];
  undefined1 auVar13 [16];
  undefined1 auStack_1e8 [32];
  longlong alStack_1c8 [2];
  undefined4 local_1b4;
  longlong alStack_1b0 [25];
  longlong local_e8 [24];
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_1e8;
  FUN_180540170(alStack_1b0 + 0x19,0,0xb8);
  FUN_180540170(alStack_1b0 + 1);
  uVar11 = 0;
  if (DAT_1809194c8 < 2) {
    lVar7 = 0x6c;
    lVar9 = param_1;
  }
  else {
    lVar9 = param_1 + 0x6c;
    iVar12 = 5;
    lVar7 = 0;
    do {
      auVar13 = pmovsxdq(in_XMM1,*(undefined8 *)((longlong)&DAT_1806a0960 + lVar7 * 4));
      lVar5 = lVar7 + 4;
      iVar3 = *(int *)((longlong)&DAT_1806a0968 + uVar11);
      puVar1 = (&PTR_DAT_180658c70)[*(int *)((longlong)&DAT_1806a0960 + uVar11 + 4)];
      in_XMM1 = pmovsxdq(auVar13,*(undefined8 *)((longlong)&DAT_1806a0968 + uVar11));
      alStack_1b0[lVar7 + 0x19] =
           (longlong)(&PTR_DAT_180658c70)[*(int *)((longlong)&DAT_1806a0960 + lVar7 * 4)];
      alStack_1b0[lVar7 + 0x1a] = (longlong)puVar1;
      puVar1 = (&PTR_DAT_180658c70)[iVar3];
      iVar3 = *(int *)((longlong)&DAT_1806a0968 + uVar11 + 4);
      alStack_1c8[lVar5] = lVar9 + auVar13._0_8_;
      alStack_1c8[lVar7 + 5] = lVar9 + auVar13._8_8_;
      puVar2 = (&PTR_DAT_180658c70)[iVar3];
      alStack_1b0[lVar7 + 0x1b] = (longlong)puVar1;
      alStack_1b0[lVar7 + 0x1c] = (longlong)puVar2;
      alStack_1c8[lVar7 + 6] = lVar9 + in_XMM1._0_8_;
      alStack_1b0[lVar5] = lVar9 + in_XMM1._8_8_;
      iVar12 = iVar12 + -1;
      lVar7 = lVar5;
      uVar11 = uVar11 + 0x10;
    } while (iVar12 != 0);
    uVar11 = 0x14;
    lVar9 = 0x6c;
    lVar7 = param_1;
  }
  do {
    lVar8 = (longlong)(int)uVar11;
    uVar10 = (int)uVar11 + 1;
    uVar11 = (ulonglong)uVar10;
    lVar5 = (longlong)*(int *)((longlong)&DAT_1806a0960 + lVar8 * 4);
    alStack_1b0[lVar8 + 0x19] = (longlong)(&PTR_DAT_180658c70)[lVar5];
    alStack_1b0[lVar8 + 1] = lVar5 + lVar7 + lVar9;
  } while ((int)uVar10 < 0x17);
  lVar9 = 0;
  do {
    FUN_1802bfa60(alStack_1b0[lVar9 + 1]);
    lVar9 = lVar9 + 1;
  } while (lVar9 != 0x17);
  FUN_180313b40("items",alStack_1b0 + 0x19,alStack_1b0 + 1,0x17);
  DAT_1811074e0 = 0x44000000;
  DAT_1811074d0 = "icon_f03a";
  DAT_180cd0f07 = 1;
  DAT_1811074d8 =
       "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 512 512\" width=\"512\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M40 48C26 48 16 59 16 72L16 120C16 134 26 144 40 144L88 144C101 144 112 134 112 120L112 72C112 59 101 48 88 48L40 48ZM192 64C174 64 160 79 160 96C160 114 174 128 192 128L480 128C497 128 512 114 512 96C512 79 497 64 480 64L192 64ZM192 224C174 224 160 239 160 256C160 274 174 288 192 288L480 288C497 288 512 274 512 256C512 239 497 224 480 224L192 224ZM192 384C174 384 160 399 160 416C160 434 174 448 192 448L480 448C497 448 512 434 512 416C512 399 497 384 480 384L192 384ZM16 232L16 280C16 294 26 304 40 304L88 304C101 304 112 294 112 280L112 232C112 219 101 208 88 208L40 208C26 208 16 219 16 232ZM40 368C26 368 16 379 16 392L16 440C16 453 26 464 40 464L88 464C101 464 112 453 112 440L112 392C112 379 101 368 88 368L40 368Z\"/></svg>"
  ;
  _DAT_1811074e4 = local_1b4;
  cVar4 = FUN_1802c22b0("items","select");
  if (cVar4 != '\0') {
    iVar12 = 0;
    pcVar6 = (char *)(param_1 + 0x6c);
    if (param_1 != param_1 + 0x17) {
      do {
        cVar4 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        iVar12 = iVar12 + (uint)(cVar4 != '\0');
      } while (pcVar6 != (char *)(param_1 + 0x83));
    }
    lVar9 = 0;
    do {
      lVar7 = (longlong)*(int *)((longlong)&DAT_1806a0960 + lVar9 * 4);
      FUN_1803e8a70();
      DAT_181106ea8 = (&PTR_s_icon_f641_1806595b0)[lVar7 * 3];
      DAT_181106eb0 = (&PTR_s_<svg_xmlns__http:__www_w3_org_20_1806595b8)[lVar7 * 3];
      _DAT_181106eb8 = *(undefined8 *)(&DAT_1806595c0 + lVar7 * 0x18);
      cVar4 = FUN_1802b74f0((&PTR_DAT_180658c70)[lVar7],0,*(undefined1 *)(param_1 + 0x6c + lVar7),1)
      ;
      if ((cVar4 != '\0') &&
         ((cVar4 = *(char *)(param_1 + 0x6c + lVar7), cVar4 == '\0' || (1 < iVar12)))) {
        *(bool *)(param_1 + 0x6c + lVar7) = cVar4 == '\0';
      }
      iVar3 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
      if (iVar3 < 2) {
        FUN_1803ebc00("Calling PopID() too many times!");
      }
      else {
        *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar3 + -1;
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 != 0x17);
    FUN_1802b5590();
    iVar12 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
    if (iVar12 < 2) {
      FUN_1803ebc00("Calling PopID() too many times!");
    }
    else {
      *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar12 + -1;
    }
  }
  return;
}



/* ===== 180300020 FUN_180300020 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180300020(void)

{
  int iVar1;
  char cVar2;
  undefined1 auStack_b8 [32];
  undefined *local_98;
  ulonglong local_90;
  char *local_88;
  char *local_80;
  undefined8 local_78;
  char *local_70;
  char *local_68;
  undefined *local_60;
  char *local_58;
  char *local_50;
  char *local_48;
  char *local_40;
  char *local_38;
  char *local_30;
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_b8;
  FUN_1803e89e0("windows");
  cVar2 = FUN_1802bc070("windows_options","windows");
  if (cVar2 == '\0') goto LAB_180300ab6;
  DAT_1811074d0 = "icon_f641";
  DAT_1811074d8 =
       "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 576 512\" width=\"576\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M64 32C28 32 0 61 0 96L0 416C0 451 28 480 64 480L512 480C547 480 576 451 576 416L576 96C576 61 547 32 512 32L64 32ZM229 174L301 318C307 330 302 344 290 350C278 356 264 351 258 339L253 328L162 328L157 339C151 351 137 356 125 350C113 344 108 330 114 318L186 174C190 166 198 160 208 160C217 160 225 165 229 174L229 174ZM229 174ZM208 238L186 280L229 280L208 238ZM392 256C378 256 368 267 368 280C368 294 378 304 392 304C405 304 416 294 416 280C416 267 405 256 392 256ZM416 213L416 184C416 171 426 160 440 160C453 160 464 171 464 184L464 280L464 328C464 342 453 352 440 352C433 352 427 350 423 345C413 350 403 352 392 352C352 352 320 320 320 280C320 241 352 208 392 208C400 208 408 210 416 213Z\"/></svg>"
  ;
  _DAT_1811074e4 = local_78._4_4_;
  DAT_1811074e0 = 0x44100000;
  FUN_1802c0a60("watermark",&DAT_18095ce00);
  cVar2 = FUN_1802badc0("watermark_options","watermark");
  if (cVar2 != '\0') {
    FUN_1802ffce0(&DAT_18095ce00);
    DAT_1811074e0 = 0x43a00000;
    local_58 = "top-left";
    local_50 = "top-center";
    local_48 = "top-right";
    local_40 = "bottom-right";
    local_38 = "bottom-center";
    local_30 = "bottom-left";
    DAT_1811074d0 = "icon_f276";
    DAT_1811074d8 =
         "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 320 512\" width=\"320\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M16 144C16 93 43 46 88 20C132 -6 187 -6 232 20C276 46 304 93 304 144C304 196 276 243 232 269C187 295 132 295 88 269C43 243 16 196 16 144ZM160 80C168 80 176 73 176 64C176 56 168 48 160 48C107 48 64 91 64 144C64 153 71 160 80 160C88 160 96 153 96 144C96 109 124 80 160 80ZM128 480L128 318C138 319 149 320 160 320C170 320 181 319 192 318L192 480C192 497 177 512 160 512C142 512 128 497 128 480Z\"/></svg>"
    ;
    _DAT_1811074e4 = local_78._4_4_;
    FUN_1802c2640("position",&DAT_18095ce04,&local_58,6);
    local_80 = "default";
    local_88 = "compact";
    DAT_1811074e0 = 0x44000000;
    local_78 = "spacious";
    DAT_1811074d0 = "icon_f320";
    DAT_1811074d8 =
         "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 512 512\" width=\"512\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M32 64C14 64 0 79 0 96L0 192C0 210 14 224 32 224C49 224 64 210 64 192L64 128L128 128C145 128 160 114 160 96C160 79 145 64 128 64L32 64ZM64 320C64 303 49 288 32 288C14 288 0 303 0 320L0 416C0 434 14 448 32 448L128 448C145 448 160 434 160 416C160 399 145 384 128 384L64 384L64 320ZM384 64C366 64 352 79 352 96C352 114 366 128 384 128L448 128L448 192C448 210 462 224 480 224C497 224 512 210 512 192L512 96C512 79 497 64 480 64L384 64ZM512 320C512 303 497 288 480 288C462 288 448 303 448 320L448 384L384 384C366 384 352 399 352 416C352 434 366 448 384 448L480 448C497 448 512 434 512 416L512 320Z\"/></svg>"
    ;
    _DAT_1811074e4 = 1;
    FUN_1802c2640("density",&DAT_18095ce08,&local_88,3);
    local_90 = 0;
    local_70 = (char *)&DAT_18095ce0c;
    DAT_1811074e0 = 0x44100000;
    local_68 = (char *)&DAT_18095ce1c;
    local_98 = (undefined *)0x0;
    DAT_1811074d0 = "icon_f576";
    DAT_1811074d8 =
         "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 576 512\" width=\"576\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M41 10C53 -3 74 -3 86 10L168 91L221 38C249 10 294 10 322 38L474 190C502 218 502 263 474 291L283 481C246 518 185 518 148 481L30 364C-6 327 -6 266 30 229L122 136L41 55C28 43 28 22 41 10L41 10ZM41 10ZM217 231L168 182L75 274C71 278 68 283 67 288L386 288L429 246C432 243 432 238 429 235L277 83C274 80 269 80 266 83L213 136L262 186C275 198 275 219 262 231C250 244 229 244 217 231L217 231ZM217 231ZM512 511C476 511 448 483 448 448C448 423 480 369 499 340C505 330 518 330 524 340C543 369 576 423 576 448C576 483 547 511 512 511Z\"/></svg>"
    ;
    _DAT_1811074e4 = local_78._4_4_;
    FUN_1802cfaf0("additional colors",&local_70,2,0);
    cVar2 = DAT_180cd0f0c;
    if ((DAT_180cd0f0c != '\0') || (DAT_18095ce74 != '\0')) {
      local_90 = 0;
      local_70 = &DAT_18095ce2c;
      DAT_1811074e0 = 0x44200000;
      local_68 = &DAT_18095ce3c;
      local_98 = (undefined *)0x0;
      local_60 = &DAT_18095ce4c;
      DAT_1811074d0 = "icon_e600";
      DAT_1811074d8 =
           "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 640 512\" width=\"640\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M192 288C192 323 199 355 213 384C130 379 64 309 64 224C64 136 135 64 224 64C256 64 286 74 311 90C240 128 192 203 192 288ZM224 448C235 448 246 448 256 446C297 486 353 512 416 512C539 512 640 412 640 288C640 165 539 64 416 64C404 64 393 65 383 67C342 26 286 0 224 0C100 0 0 101 0 224C0 348 100 448 224 448ZM416 448C383 448 353 439 328 423C399 385 448 310 448 224C448 190 440 158 426 129C510 134 576 204 576 288C576 377 504 448 416 448Z\"/></svg>"
      ;
      _DAT_1811074e4 = local_78._4_4_;
      FUN_1802cfaf0("cpu core colors",&local_70,3,0);
    }
    FUN_1802d0b90(0);
    DAT_1811074e0 = 0x43e00000;
    DAT_1811074d0 = "icon_f007";
    DAT_1811074d8 =
         "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 448 512\" width=\"448\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M224 256C269 256 311 232 334 192C357 153 357 104 334 64C311 25 269 0 224 0C178 0 136 25 113 64C90 104 90 153 113 192C136 232 178 256 224 256ZM178 304C79 304 0 384 0 482C0 498 13 512 29 512L418 512C434 512 448 498 448 482C448 384 368 304 269 304L178 304Z\"/></svg>"
    ;
    _DAT_1811074e4 = local_78._4_4_;
    FUN_1802c0a60("display avatar",&DAT_18095ce5c);
    if ((cVar2 == '\0') && (DAT_18095ce6f == '\0')) {
LAB_180300399:
      if (DAT_18095ce72 != '\0') goto LAB_1803003a2;
LAB_1803003da:
      if (DAT_18095ce73 != '\0') goto LAB_1803003e3;
LAB_18030041b:
      if (DAT_18095ce6f != '\0') goto LAB_180300424;
LAB_18030048e:
      if (DAT_18095ce71 != '\0') goto LAB_180300497;
LAB_180300501:
      if (DAT_18095ce80 != '\0') goto LAB_18030050a;
    }
    else {
      DAT_1811074e0 = 0x44000000;
      DAT_1811074d0 = "icon_f06a";
      DAT_1811074d8 =
           "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 512 512\" width=\"512\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M256 512C347 512 431 463 477 384C523 305 523 208 477 128C431 49 347 0 256 0C164 0 80 49 34 128C-11 208 -11 305 34 384C80 463 164 512 256 512ZM256 128C269 128 280 139 280 152L280 264C280 278 269 288 256 288C242 288 232 278 232 264L232 152C232 139 242 128 256 128ZM224 352C224 335 238 320 256 320C273 320 288 335 288 352C288 370 273 384 256 384C238 384 224 370 224 352Z\"/></svg>"
      ;
      _DAT_1811074e4 = local_78._4_4_;
      FUN_1802c0a60("show fps instability",&DAT_18095ce5d);
      if (cVar2 == '\0') goto LAB_180300399;
LAB_1803003a2:
      _DAT_1811074e4 = local_78._4_4_;
      DAT_1811074d0 = "icon_f062";
      DAT_1811074d8 =
           "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 384 512\" width=\"384\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M214 42C202 29 181 29 169 42L9 202C-3 214 -3 235 9 247C21 260 42 260 54 247L160 142L160 448C160 465 174 480 192 480C209 480 224 465 224 448L224 142L329 247C341 260 362 260 374 247C387 235 387 214 374 202L214 42L214 42ZM214 42Z\"/></svg>"
      ;
      DAT_1811074e0 = 0x43c00000;
      FUN_1802c0a60("show max cpu load",&DAT_18095ce5e);
      if (cVar2 == '\0') goto LAB_1803003da;
LAB_1803003e3:
      _DAT_1811074e4 = local_78._4_4_;
      DAT_1811074d0 = "icon_f062";
      DAT_1811074d8 =
           "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 384 512\" width=\"384\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M214 42C202 29 181 29 169 42L9 202C-3 214 -3 235 9 247C21 260 42 260 54 247L160 142L160 448C160 465 174 480 192 480C209 480 224 465 224 448L224 142L329 247C341 260 362 260 374 247C387 235 387 214 374 202L214 42L214 42ZM214 42Z\"/></svg>"
      ;
      DAT_1811074e0 = 0x43c00000;
      FUN_1802c0a60("show max cpu frequency",&DAT_18095ce5f);
      if (cVar2 == '\0') goto LAB_18030041b;
LAB_180300424:
      local_60 = &DAT_180762b9c;
      local_70 = "frame rate";
      DAT_1811074e0 = 0x44100000;
      local_68 = "1% low";
      DAT_1811074d0 = "icon_f160";
      DAT_1811074d8 =
           "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 576 512\" width=\"576\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M151 469C145 476 137 480 128 480C119 480 110 476 104 469L16 374C4 361 5 341 18 329C31 317 51 318 63 331L96 366L96 64C96 47 110 32 128 32C145 32 160 47 160 64L160 366L192 331C204 318 224 317 237 329C250 341 251 361 239 374L151 469L151 469ZM151 469ZM320 480C302 480 288 465 288 448C288 431 302 416 320 416L352 416C369 416 384 431 384 448C384 465 369 480 352 480L320 480ZM320 352C302 352 288 338 288 320C288 303 302 288 320 288L416 288C433 288 448 303 448 320C448 338 433 352 416 352L320 352ZM320 224C302 224 288 210 288 192C288 175 302 160 320 160L480 160C497 160 512 175 512 192C512 210 497 224 480 224L320 224ZM320 96C302 96 288 82 288 64C288 47 302 32 320 32L544 32C561 32 576 47 576 64C576 82 561 96 544 96L320 96Z\"/></svg>"
      ;
      _DAT_1811074e4 = local_78._4_4_;
      FUN_1802c2640("fps statistics",&DAT_18095ce60,&local_70,3);
      if (cVar2 == '\0') goto LAB_18030048e;
LAB_180300497:
      local_60 = &DAT_180762b9c;
      local_70 = "percentage";
      DAT_1811074e0 = 0x44100000;
      local_68 = "fraction";
      DAT_1811074d0 = "icon_f538";
      DAT_1811074d8 =
           "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 576 512\" width=\"576\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M64 64C28 64 0 93 0 128L0 136C0 143 4 148 10 152C23 161 31 176 31 192C31 209 23 224 10 233C4 236 0 242 0 249L0 320L576 320L576 249C576 242 571 236 565 233C552 224 544 209 544 192C544 176 552 161 565 152C571 148 576 143 576 136L576 128C576 93 547 64 512 64L64 64ZM576 352L0 352L0 416C0 434 14 448 32 448L80 448L80 416C80 408 87 400 96 400C104 400 112 408 112 416L112 448L208 448L208 416C208 408 215 400 224 400C232 400 240 408 240 416L240 448L336 448L336 416C336 408 343 400 352 400C360 400 368 408 368 416L368 448L464 448L464 416C464 408 471 400 480 400C488 400 496 408 496 416L496 448L544 448C561 448 576 434 576 416L576 352ZM192 160L192 224C192 242 177 256 160 256C142 256 128 242 128 224L128 160C128 143 142 128 160 128C177 128 192 143 192 160ZM320 160L320 224C320 242 305 256 288 256C270 256 256 242 256 224L256 160C256 143 270 128 288 128C305 128 320 143 320 160ZM448 160L448 224C448 242 433 256 416 256C398 256 384 242 384 224L384 160C384 143 398 128 416 128C433 128 448 143 448 160Z\"/></svg>"
      ;
      _DAT_1811074e4 = local_78._4_4_;
      FUN_1802c2640("ram details",&DAT_18095ce64,&local_70,3);
      if (cVar2 == '\0') goto LAB_180300501;
LAB_18030050a:
      local_60 = &DAT_180762b9c;
      local_70 = "milliseconds";
      DAT_1811074e0 = 0x44000000;
      local_68 = "ticks";
      DAT_1811074d0 = "icon_f04e";
      DAT_1811074d8 =
           "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 512 512\" width=\"512\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M52 441C43 448 29 450 18 445C7 440 0 429 0 416L0 96C0 84 7 73 18 67C29 62 42 64 52 72L223 215L223 256L223 298L52 441L52 441ZM255 352L255 256L255 128L255 96C255 84 263 73 274 67C285 62 298 64 308 72L500 232C507 238 512 247 512 256C512 266 507 275 500 281L308 441C299 448 285 450 274 445C263 440 256 429 256 416L256 352L255 352Z\"/></svg>"
      ;
      _DAT_1811074e4 = local_78._4_4_;
      FUN_1802c2640("prediction units",&DAT_18095ce68,&local_70,3);
    }
    FUN_1802bc580();
  }
  DAT_1811074e0 = 0x44000000;
  DAT_1811074d0 = "icon_e1d2";
  DAT_1811074d8 =
       "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 512 512\" width=\"512\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M24 48C10 48 0 59 0 72L0 120C0 134 10 144 24 144L24 256L24 384C24 415 49 440 80 440L128 440C128 453 138 464 152 464L200 464C213 464 224 453 224 440L224 392C224 379 213 368 200 368L152 368C138 368 128 379 128 392L80 392C75 392 72 389 72 384L72 280L128 280C128 294 138 304 152 304L200 304C213 304 224 294 224 280L224 232C224 219 213 208 200 208L152 208C138 208 128 219 128 232L72 232L72 144C85 144 96 134 96 120L96 72C96 59 85 48 72 48L24 48ZM160 96C160 114 174 128 192 128L480 128C497 128 512 114 512 96C512 79 497 64 480 64L192 64C174 64 160 79 160 96ZM288 256C288 274 302 288 320 288L480 288C497 288 512 274 512 256C512 239 497 224 480 224L320 224C302 224 288 239 288 256ZM288 416C288 434 302 448 320 448L480 448C497 448 512 434 512 416C512 399 497 384 480 384L320 384C302 384 288 399 288 416Z\"/></svg>"
  ;
  _DAT_1811074e4 = local_78._4_4_;
  FUN_1802c0a60("hotkeys",&DAT_18095ce84);
  cVar2 = FUN_1802badc0("hotkey_list_options","hotkeys");
  if (cVar2 != '\0') {
    local_70 = "default";
    local_68 = "inverted";
    FUN_1802c2640("style",&DAT_18095ce90,&local_70,2);
    FUN_1802c0a60("right-aligned",&DAT_18095ce94);
    FUN_1802c0a60("dynamic header",&DAT_18095ce95);
    FUN_1802bc580();
  }
  DAT_1811074e0 = 0x44100000;
  DAT_1811074d0 = "icon_f06e";
  DAT_1811074d8 =
       "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 576 512\" width=\"576\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M288 32C207 32 142 69 95 113C48 156 17 208 2 244C0 252 0 261 2 269C17 304 48 356 95 400C142 444 207 480 288 480C368 480 433 444 480 400C527 356 558 304 573 269C576 261 576 252 573 244C558 208 527 156 480 113C433 69 368 32 288 32ZM144 256C144 205 171 158 216 132C260 106 315 106 360 132C404 158 432 205 432 256C432 308 404 355 360 381C315 407 260 407 216 381C171 355 144 308 144 256ZM288 192C288 228 259 256 224 256C216 256 210 255 203 253C198 251 191 255 192 261C192 267 193 274 195 281C208 333 261 363 312 349C363 335 394 283 380 232C369 190 332 162 292 160C286 160 282 167 284 172C286 179 287 185 287 192L288 192ZM288 192Z\"/></svg>"
  ;
  _DAT_1811074e4 = local_78._4_4_;
  FUN_1802c0a60("spectators",&DAT_18095cf18);
  DAT_1811074e0 = 0x44100000;
  DAT_1811074d0 = "icon_f120";
  DAT_1811074d8 =
       "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 576 512\" width=\"576\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M9 87C-3 75 -3 54 9 42C21 29 42 29 54 42L246 234C259 246 259 267 246 279L54 470C42 483 21 483 9 470C-3 458 -3 438 9 426L178 256L9 87ZM256 416L544 416C561 416 576 431 576 448C576 465 561 480 544 480L256 480C238 480 224 465 224 448C224 431 238 416 256 416Z\"/></svg>"
  ;
  _DAT_1811074e4 = local_78._4_4_;
  FUN_1802c0a60("event logs",&DAT_180920e56);
  cVar2 = FUN_1802badc0("event_logs_window","event logs");
  if (cVar2 != '\0') {
    FUN_1802c0a60("hide icons",&DAT_180920e64);
    FUN_1802c0a60("reduce motion",&DAT_180920e65);
    local_90 = local_90 & 0xffffffff00000000;
    local_98 = &DAT_1806f0260;
    FUN_18033fa10("line opacity",&DAT_180920e68,0,100);
    local_90 = local_90 & 0xffffffff00000000;
    local_98 = &DAT_1806f0260;
    FUN_18033fa10("background opacity",&DAT_180920e6c,0,100);
    FUN_1802bc580();
  }
  FUN_1802d0b90("indicators");
  local_90 = 0;
  local_88 = (char *)&DAT_18095cee0;
  DAT_1811074e0 = 0x44000000;
  local_80 = (char *)&DAT_18095cef0;
  local_98 = (undefined *)0x0;
  local_78 = &DAT_18095cf00;
  DAT_1811074d0 = "icon_f53f";
  DAT_1811074d8 =
       "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 512 512\" width=\"512\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M512 256C512 257 512 258 512 259C511 296 478 320 441 320L344 320C317 320 296 342 296 368C296 372 296 375 297 378C299 389 303 398 307 408C313 422 319 436 319 449C319 481 298 510 266 511C263 511 259 512 255 512C114 512 0 398 0 256C0 115 114 0 256 0C397 0 512 115 512 256ZM128 288C128 271 113 256 96 256C78 256 64 271 64 288C64 306 78 320 96 320C113 320 128 306 128 288ZM128 192C145 192 160 178 160 160C160 143 145 128 128 128C110 128 96 143 96 160C96 178 110 192 128 192ZM288 96C288 79 273 64 256 64C238 64 224 79 224 96C224 114 238 128 256 128C273 128 288 114 288 96ZM384 192C401 192 416 178 416 160C416 143 401 128 384 128C366 128 352 143 352 160C352 178 366 192 384 192Z\"/></svg>"
  ;
  _DAT_1811074e4 = 1;
  FUN_1802cfaf0("color",&local_88,3,0);
  local_90 = local_90 & 0xffffffff00000000;
  DAT_1811074d0 = "icon_e41e";
  DAT_1811074e0 = 0x44200000;
  DAT_1811074d8 =
       "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 640 512\" width=\"640\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M0 96L0 416C0 434 14 448 32 448C49 448 64 434 64 416L64 96C64 79 49 64 32 64C14 64 0 79 0 96ZM279 410C286 416 296 418 305 414C314 411 320 402 320 392L320 320L608 320C625 320 640 306 640 288L640 224C640 207 625 192 608 192L320 192L320 120C320 111 314 102 305 98C296 95 286 96 279 103L135 239C130 244 128 250 128 256C128 263 130 269 135 274L279 410Z\"/></svg>"
  ;
  _DAT_1811074e4 = local_78._4_4_;
  local_98 = &DAT_1806f0260;
  FUN_18033fa10("line opacity",&DAT_18095cf10,0,100);
  local_90 = local_90 & 0xffffffff00000000;
  DAT_1811074d0 = "icon_e269";
  DAT_1811074e0 = 0x43e00000;
  DAT_1811074d8 =
       "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 448 512\" width=\"448\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M96 32L128 32L128 96L96 96C78 96 64 111 64 128L64 160L0 160L0 128C0 75 43 32 96 32ZM0 192L64 192L64 320L0 320L0 192ZM384 192L448 192L448 320L384 320L384 192ZM448 160L384 160L384 128C384 111 369 96 352 96L320 96L320 32L352 32C405 32 448 75 448 128L448 160ZM448 352L448 384C448 437 405 480 352 480L320 480L320 416L352 416C369 416 384 402 384 384L384 352L448 352ZM64 352L64 384C64 402 78 416 96 416L128 416L128 480L96 480C43 480 0 437 0 384L0 352L64 352ZM160 480L160 416L288 416L288 480L160 480ZM160 96L160 32L288 32L288 96L160 96Z\"/></svg>"
  ;
  _DAT_1811074e4 = local_78._4_4_;
  local_98 = &DAT_1806f0260;
  FUN_18033fa10("background opacity",&DAT_18095cf14,0,100);
  FUN_1802bc470();
  DAT_1811074e0 = 0x44000000;
  DAT_1811074d0 = "icon_e59f";
  DAT_1811074d8 =
       "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 512 512\" width=\"512\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M445 224L384 224C366 224 352 239 352 256C352 274 366 288 384 288L445 288C431 369 368 432 288 446L288 384C288 367 273 352 256 352C238 352 224 367 224 384L224 446C143 432 80 369 66 288L127 288C145 288 159 274 159 256C159 239 145 224 127 224L66 224C80 144 143 81 224 67L224 128C224 146 238 160 256 160C273 160 288 146 288 128L288 67C368 81 431 144 445 224ZM0 256C0 348 48 432 128 477C207 523 304 523 384 477C463 432 512 348 512 256C512 165 463 81 384 35C304 -11 207 -11 128 35C48 81 0 165 0 256Z\"/></svg>"
  ;
  _DAT_1811074e4 = local_78._4_4_;
  FUN_1802c0a60("hit chance override",&DAT_18095ce9d);
  DAT_1811074e0 = 0x44100000;
  DAT_1811074d0 = "icon_e1c2";
  DAT_1811074d8 =
       "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 576 512\" width=\"576\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M64 0C28 0 0 29 0 64L0 224C0 260 28 288 64 288L512 288C547 288 576 260 576 224L576 64C576 29 547 0 512 0L64 0ZM80 64L112 64C120 64 128 72 128 80L128 112C128 121 120 128 112 128L80 128C71 128 64 121 64 112L64 80C64 72 71 64 80 64ZM64 176C64 168 71 160 80 160L112 160C120 160 128 168 128 176L128 208C128 217 120 224 112 224L80 224C71 224 64 217 64 208L64 176ZM176 160L400 160C408 160 416 168 416 176L416 208C416 217 408 224 400 224L176 224C167 224 160 217 160 208L160 176C160 168 167 160 176 160ZM448 176C448 168 455 160 464 160L496 160C504 160 512 168 512 176L512 208C512 217 504 224 496 224L464 224C455 224 448 217 448 208L448 176ZM176 64L208 64C216 64 224 72 224 80L224 112C224 121 216 128 208 128L176 128C167 128 160 121 160 112L160 80C160 72 167 64 176 64ZM256 80C256 72 263 64 272 64L304 64C312 64 320 72 320 80L320 112C320 121 312 128 304 128L272 128C263 128 256 121 256 112L256 80ZM368 64L400 64C408 64 416 72 416 80L416 112C416 121 408 128 400 128L368 128C359 128 352 121 352 112L352 80C352 72 359 64 368 64ZM448 80C448 72 455 64 464 64L496 64C504 64 512 72 512 80L512 112C512 121 504 128 496 128L464 128C455 128 448 121 448 112L448 80ZM153 367C150 376 152 387 158 393L271 505C280 514 295 514 304 505L417 393C423 387 425 376 422 367C418 358 409 352 400 352L176 352C166 352 157 358 153 367L153 367Z\"/></svg>"
  ;
  _DAT_1811074e4 = local_78._4_4_;
  FUN_1802c0a60("min damage override",&DAT_18095ce9e);
  cVar2 = FUN_1802badc0("md_options","min damage override");
  if (cVar2 != '\0') {
    FUN_1802c0a60("display value",&DAT_18095cedc);
    FUN_1802bc580();
  }
  DAT_1811074e0 = 0x44100000;
  DAT_1811074d0 = "icon_e19b";
  DAT_1811074d8 =
       "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 576 512\" width=\"576\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M528 56C528 43 517 32 504 32C490 32 480 43 480 56L480 64L32 64C14 64 0 79 0 96L0 208C0 226 14 240 32 240L42 240C62 240 78 260 73 280L33 441C30 449 32 459 38 467C44 475 54 480 64 480L160 480C174 480 187 470 191 455L217 352L321 352C345 352 366 338 374 315L400 240L432 240C440 240 448 237 454 231L477 208L544 208C561 208 576 194 576 176L576 96C576 79 561 64 544 64L528 64L528 56ZM321 304L229 304L245 240L350 240L329 299C327 302 324 304 321 304L321 304ZM321 304ZM80 128L464 128C472 128 480 136 480 144C480 153 472 160 464 160L80 160C71 160 64 153 64 144C64 136 71 128 80 128Z\"/></svg>"
  ;
  _DAT_1811074e4 = local_78._4_4_;
  FUN_1802c0a60("double tap",&DAT_18095ce9f);
  cVar2 = FUN_1802badc0("dt_options","double tap");
  if (cVar2 != '\0') {
    FUN_1802c0a60("hide if restricted",&DAT_18095cedd);
    FUN_1802bc580();
  }
  DAT_1811074e0 = 0x44000000;
  DAT_1811074d0 = "icon_f7cb";
  DAT_1811074d8 =
       "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 512 512\" width=\"512\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M400 128C417 128 432 119 441 104C450 90 450 71 441 56C432 42 417 32 400 32C382 32 367 42 358 56C349 71 349 90 358 104C367 119 382 128 400 128ZM35 227C23 221 8 226 2 237C-3 249 1 264 12 270L396 468C423 482 456 482 483 469L498 461C510 455 515 442 509 430C503 418 489 413 477 419L462 427C448 434 432 433 418 426L376 405C381 399 383 392 383 385L383 304C383 278 362 256 335 256L301 256L361 197C386 172 368 128 332 128L160 128C142 128 128 143 128 160C128 178 142 192 160 192L244 192L184 233C161 249 158 278 171 298L35 227ZM320 320L320 375L214 320L320 320Z\"/></svg>"
  ;
  _DAT_1811074e4 = local_78._4_4_;
  FUN_1802c0a60("duck peek assist",&DAT_18095cea0);
  DAT_1811074e0 = 0x44000000;
  DAT_1811074d0 = "icon_f071";
  DAT_1811074d8 =
       "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 512 512\" width=\"512\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M256 32C270 32 283 40 290 52L506 420C513 433 513 448 506 459C499 472 486 480 472 480L40 480C25 480 12 472 5 459C-1 448 -1 433 5 420L221 52C228 40 241 32 255 32L256 32ZM255 160C242 160 231 171 231 184L231 296C231 310 242 320 255 320C269 320 280 310 280 296L280 184C280 171 269 160 256 160L255 160ZM288 384C288 367 273 352 256 352C238 352 224 367 224 384C224 402 238 416 256 416C273 416 288 402 288 384Z\"/></svg>"
  ;
  _DAT_1811074e4 = local_78._4_4_;
  FUN_1802c0a60("slowdown",&DAT_18095cea1);
  DAT_1811074e0 = 0x44000000;
  DAT_1811074d0 = "icon_f7c7";
  DAT_1811074d8 =
       "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 512 512\" width=\"512\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M352 48C352 31 361 16 376 7C390 -2 409 -2 424 7C438 16 448 31 448 48C448 66 438 81 424 90C409 99 390 99 376 90C361 81 352 66 352 48ZM128 128C128 111 142 96 160 96L304 96C350 96 370 155 333 183L230 261L223 269C221 272 219 275 218 278L179 381L433 250C452 240 464 221 464 200L464 192C464 179 474 168 488 168C501 168 512 179 512 192L512 200C512 239 490 274 455 292L35 509C23 515 8 510 2 499C-3 487 1 472 13 466L124 410C113 401 109 387 114 373L158 256C161 245 167 236 175 227L232 160L160 160C142 160 128 146 128 128Z\"/></svg>"
  ;
  _DAT_1811074e4 = local_78._4_4_;
  FUN_1802c0a60("jump bug",&DAT_18095cea2);
  cVar2 = FUN_1802badc0("jb_options","jump bug");
  if (cVar2 != '\0') {
    FUN_1802c0a60("show only on fail",&DAT_18095cede);
    FUN_1802bc580();
  }
  FUN_1802bc580();
LAB_180300ab6:
  iVar1 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
  if (iVar1 < 2) {
    FUN_1803ebc00("Calling PopID() too many times!");
  }
  else {
    *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar1 + -1;
  }
  return;
}



/* ===== 180300b00 FUN_180300b00 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180300b00(void)

{
  uint uVar1;
  longlong lVar2;
  undefined4 uVar3;
  float fVar4;
  undefined4 uVar5;
  char cVar6;
  longlong lVar7;
  undefined1 uVar8;
  int iVar9;
  longlong lVar10;
  undefined8 extraout_XMM0_Qa;
  undefined1 auStack_b8 [32];
  char *local_98;
  undefined8 local_90;
  undefined1 **local_88;
  undefined *local_80;
  undefined4 local_78;
  undefined1 *local_68;
  char *local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  char *local_48;
  char *local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_180919500 ^ (ulonglong)auStack_b8;
  FUN_1802b9110("miscellaneous");
  FUN_180300020();
  FUN_1803e89e0("nl_miscellaneous");
  cVar6 = FUN_1802bc070("removals","removals");
  uVar5 = DAT_1808ac34c;
  fVar4 = DAT_1808ac1f4;
  if (cVar6 != '\0') {
    FUN_180312320(&DAT_1806e05fc);
    if ((((DAT_18095d3a8 == '\0') && (DAT_18095d3a9 == '\0')) && (DAT_18095d3aa == '\0')) &&
       ((DAT_18095d3ab == '\0' && (DAT_18095d3ac == '\0')))) {
      uVar8 = 0;
    }
    else {
      uVar8 = 1;
    }
    FUN_1802d0e90("team intro",&DAT_18095d3a8,uVar8);
    FUN_1802d0e90("hud panorama dots",&DAT_18095d3a9,uVar8);
    FUN_1802d0e90("hud bottom gradient",&DAT_18095d3aa,uVar8);
    FUN_1802d0e90("hud damage indicator",&DAT_18095d3ab,uVar8);
    FUN_1802d0e90("hud server advertisements",&DAT_18095d3ac,uVar8);
    FUN_1802d0b90("effects");
    if ((((DAT_18095d3ad == '\0') && (DAT_18095d3ae == '\0')) &&
        ((DAT_18095d3af == '\0' &&
         (((DAT_18095d3b0 == '\0' && (DAT_18095d3b1 == '\0')) && (DAT_18095d3b2 == '\0')))))) &&
       ((DAT_18095d3b3 == '\0' && (DAT_18095d3b4 == '\0')))) {
      uVar8 = 0;
    }
    else {
      uVar8 = 1;
    }
    FUN_1802d0e90("flashbang effect",&DAT_18095d3ad,uVar8);
    FUN_1802d0e90("smoke rendering",&DAT_18095d3ae,uVar8);
    FUN_1802d0e90("first person legs",&DAT_18095d3af,uVar8);
    FUN_1802d0e90("carried hostage",&DAT_18095d3b0,uVar8);
    FUN_1802d0e90("post processing",&DAT_18095d3b1,uVar8);
    FUN_1802d0e90("water effects",&DAT_18095d3b2,uVar8);
    FUN_1802d0e90("blood effects",&DAT_18095d3b3,uVar8);
    FUN_1802d0e90("decals",&DAT_18095d3b4,uVar8);
    FUN_1802d0b90("ragdolls");
    local_48 = "default";
    local_40 = "remove";
    local_38 = "force";
    FUN_1802c2640("ragdolls",&DAT_18095d3b8,&local_48,3);
    iVar9 = DAT_18095d3b8;
    FUN_1802b9bd0();
    lVar7 = DAT_180ca0a50;
    if (iVar9 == 2) {
      lVar10 = 0;
      iVar9 = 0;
    }
    else {
      DAT_181107580 = DAT_181107580 + 1;
      *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
      lVar2 = *(longlong *)(lVar7 + 0x14f8);
      lVar10 = *(longlong *)(lVar2 + 0x2c8);
      *(undefined1 *)(lVar2 + 0xce) = 1;
      iVar9 = *(int *)(*(longlong *)(*(longlong *)(lVar7 + 0x14f8) + 0x2c8) + 0x20);
      FUN_1803d8870(1,uVar5);
      FUN_1803e7920(1);
      FUN_1803d8a40(1);
    }
    local_90 = (code *)((ulonglong)local_90._4_4_ << 0x20);
    local_98 = "%d%%";
    FUN_18033fa10("gravity",&DAT_18095d3bc,0xfffffea2,0x15e);
    local_90 = (code *)((ulonglong)local_90 & 0xffffffff00000000);
    local_98 = "%d%%";
    FUN_18033fa10("friction",&DAT_18095d3c0,0xffffffff,100);
    if (lVar10 != 0) {
      FUN_1802b9bd0();
      DAT_181107580 = DAT_181107580 + -1;
      FUN_1803e79e0();
      if (iVar9 < *(int *)(lVar10 + 0x20)) {
        do {
          lVar7 = (longlong)iVar9;
          iVar9 = iVar9 + 1;
          uVar1 = *(uint *)(*(longlong *)(lVar10 + 0x28) + 0x10 + lVar7 * 0x14);
          *(uint *)(*(longlong *)(lVar10 + 0x28) + 0x10 + lVar7 * 0x14) =
               (int)(longlong)((float)(uVar1 >> 0x18) * fVar4 + fVar4) << 0x18 | uVar1 & 0xffffff;
        } while (iVar9 < *(int *)(lVar10 + 0x20));
      }
    }
    FUN_1802bc580();
  }
  FUN_180301c50();
  cVar6 = FUN_1802bc070("hit_marker","hit marker");
  uVar3 = DAT_1808ac0c0;
  if (cVar6 != '\0') {
    local_78 = uVar5;
    local_80._0_4_ = (float)DAT_1808ac0c0;
    local_88 = (undefined1 **)&DAT_18095d3d8;
    local_48 = "icon_f05b";
    local_90 = (code *)&DAT_18095d3c8;
    local_98 = &DAT_18095d3c4;
    local_40 = 
    "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 512 512\" width=\"512\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M256 0C273 0 288 15 288 32L288 43C381 57 455 131 469 224L480 224C497 224 512 239 512 256C512 274 497 288 480 288L469 288C455 382 381 455 288 469L288 480C288 497 273 512 256 512C238 512 224 497 224 480L224 469C130 455 56 382 42 288L32 288C14 288 0 274 0 256C0 239 14 224 32 224L42 224C56 131 130 57 224 43L224 32C224 15 238 0 256 0ZM107 288C119 347 165 393 224 405L224 384C224 367 238 352 256 352C273 352 288 367 288 384L288 405C346 393 392 347 404 288L384 288C366 288 352 274 352 256C352 239 366 224 384 224L404 224C392 166 346 120 288 108L288 128C288 146 273 160 256 160C238 160 224 146 224 128L224 108C165 120 119 166 107 224L128 224C145 224 160 239 160 256C160 274 145 288 128 288L107 288ZM256 224C273 224 288 239 288 256C288 274 273 288 256 288C238 288 224 274 224 256C224 239 238 224 256 224Z\"/></svg>"
    ;
    local_38._0_4_ = 0x44000000;
    FUN_180301510(extraout_XMM0_Qa,&DAT_18075bfa4,"2d marker",&local_48);
    FUN_1802d0b90(0);
    local_48 = "icon_e54d";
    local_78 = DAT_1808ac864;
    local_40 = 
    "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 512 512\" width=\"512\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M208 48C208 31 217 16 232 7C246 -2 265 -2 280 7C294 16 304 31 304 48C304 66 294 81 280 90C265 99 246 99 232 90C217 81 208 66 208 48ZM248 352L248 480C248 497 233 512 216 512C198 512 184 497 184 480L184 257L155 305C146 320 126 325 111 316C96 307 91 287 100 272L158 175C176 146 207 128 241 128L270 128C304 128 335 146 353 175L411 272C420 287 415 307 400 316C385 325 365 320 356 305L327 257L327 480C327 497 313 512 295 512C278 512 263 497 263 480L263 352L247 352L248 352ZM6 7C16 -2 31 -2 40 7L120 87C130 97 130 112 120 121C111 131 96 131 87 121L6 41C-2 32 -2 17 6 7L6 7ZM470 7C480 -2 495 -2 504 7C514 17 514 32 504 41L424 121C415 131 400 131 390 121C381 112 381 97 390 87L470 7ZM6 505C-2 495 -2 480 6 471L86 392C96 382 111 382 120 392C130 401 130 416 120 425L40 505C31 514 16 514 7 505L6 505ZM6 505ZM470 505L390 425C381 416 381 401 390 392C400 382 415 382 424 392L504 471C514 480 514 495 504 505C495 514 480 514 470 505Z\"/></svg>"
    ;
    local_80._0_4_ = fVar4;
    local_88 = (undefined1 **)&DAT_18095d3f0;
    local_38._0_4_ = 0x44000000;
    local_90 = (code *)&DAT_18095d3e0;
    local_98 = &DAT_18095d3dc;
    FUN_180301510();
    FUN_1802d0b90(0);
    local_48 = "icon_e41c";
    local_78 = DAT_1808ac658;
    local_40 = 
    "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 512 512\" width=\"512\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M163 102C168 62 201 32 242 32C289 32 327 74 321 122L309 219C304 258 270 288 230 288C182 288 145 246 151 199L163 102ZM242 96C234 96 227 102 226 110L214 207C213 216 220 224 229 224C237 224 244 219 245 211L257 114C258 105 251 96 242 96ZM242 96ZM135 68L103 292C101 310 85 322 67 320C50 318 37 302 40 284L64 117L44 126C28 133 9 126 2 110C-4 93 3 74 19 67L91 35C102 31 114 32 123 39C132 46 137 57 135 68ZM511 316C514 333 502 350 484 352L36 416C19 419 2 406 0 389C-2 371 10 355 27 353L475 289C493 286 509 298 511 316ZM511 412C514 429 502 446 484 448L260 479C243 482 226 470 224 452C221 435 234 419 251 417L475 385C493 382 509 394 511 412ZM427 32C474 32 511 73 507 119L499 200C496 241 461 272 420 272C373 272 336 232 340 185L348 105C351 64 386 32 427 32ZM412 111L404 191C403 201 411 208 420 208C428 208 435 202 436 194L443 114C444 104 437 96 427 96C419 96 412 103 412 111Z\"/></svg>"
    ;
    local_80 = (undefined *)CONCAT44(local_80._4_4_,uVar3);
    local_88 = (undefined1 **)&DAT_18095d408;
    local_38 = (char *)CONCAT44(local_38._4_4_,0x44000000);
    local_90 = (code *)&DAT_18095d3f8;
    local_98 = &DAT_18095d3f4;
    FUN_180301510();
    FUN_1802bc580();
  }
  cVar6 = FUN_1802bc070("bullet_tracers","bullet tracers");
  if (cVar6 != '\0') {
    local_38._0_4_ = 0x43e00000;
    local_68 = &DAT_18095d40c;
    local_48 = "icon_f007";
    local_40 = 
    "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 448 512\" width=\"448\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M224 256C269 256 311 232 334 192C357 153 357 104 334 64C311 25 269 0 224 0C178 0 136 25 113 64C90 104 90 153 113 192C136 232 178 256 224 256ZM178 304C79 304 0 384 0 482C0 498 13 512 29 512L418 512C434 512 448 498 448 482C448 384 368 304 269 304L178 304Z\"/></svg>"
    ;
    local_80 = &DAT_18095d458;
    local_88 = (undefined1 **)&DAT_18095d420;
    local_90 = (code *)&DAT_18095d410;
    local_98 = &DAT_18095d40c;
    FUN_180301710(&local_68,"enemies","enemies",&local_48);
    FUN_1802d0b90(0);
    local_38._0_4_ = 0x44200000;
    local_48 = "icon_f503";
    local_40 = 
    "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 640 512\" width=\"640\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M96 128C96 83 120 41 160 18C199 -5 248 -5 288 18C327 41 352 83 352 128C352 174 327 216 288 239C248 262 199 262 160 239C120 216 95 174 95 128L96 128ZM0 482C0 384 79 304 178 304L269 304C368 304 448 384 448 482C448 498 434 512 418 512L29 512C13 512 0 498 0 482L0 482ZM472 200L616 200C629 200 640 211 640 224C640 238 629 248 616 248L472 248C458 248 448 238 448 224C448 211 458 200 472 200Z\"/></svg>"
    ;
    local_80 = &DAT_18095d470;
    local_88 = (undefined1 **)&DAT_18095d438;
    local_90 = (code *)&DAT_18095d428;
    local_98 = &DAT_18095d424;
    FUN_180301710(&local_68,"teammates","teammates",&local_48);
    FUN_1802d0b90(0);
    local_38 = (char *)CONCAT44(local_38._4_4_,0x43e00000);
    local_48 = "icon_f6a4";
    local_40 = 
    "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 448 512\" width=\"448\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M144 128L144 144C144 189 179 224 224 224C268 224 304 189 304 144L304 128L144 128ZM144 20C154 27 167 28 178 22L209 4C213 2 218 0 224 0C229 0 234 2 238 4L269 22C280 28 293 27 304 20L304 20C304 19 304 19 304 19L307 17L323 4C326 2 330 0 333 0L336 0C344 0 352 8 352 16L352 39L352 43L352 43L352 144C352 215 294 272 224 272C153 272 96 215 96 144L96 43L96 43L96 39L96 16C96 8 103 0 112 0L114 0C118 0 121 2 124 4L140 16L143 19C143 19 143 19 143 19L143 20L144 20ZM144 20ZM0 472C0 380 75 304 168 304L280 304C372 304 448 380 448 472L448 480C448 497 433 512 416 512L32 512C14 512 0 497 0 480L0 472Z\"/></svg>"
    ;
    local_80 = &DAT_18095d488;
    local_88 = (undefined1 **)&DAT_18095d450;
    local_90 = (code *)&DAT_18095d440;
    local_98 = &DAT_18095d43c;
    FUN_180301710(&local_68,"local","local player",&local_48);
    FUN_1802d0b90(0);
    DAT_1811074e0 = 0x44000000;
    DAT_1811074d0 = "icon_f1de";
    DAT_1811074d8 =
         "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 512 512\" width=\"512\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M0 416C0 434 14 448 32 448L86 448C99 476 127 496 160 496C192 496 221 476 233 448L480 448C497 448 512 434 512 416C512 399 497 384 480 384L233 384C221 356 192 336 160 336C127 336 99 356 86 384L32 384C14 384 0 399 0 416ZM128 416C128 399 142 384 160 384C177 384 192 399 192 416C192 434 177 448 160 448C142 448 128 434 128 416ZM320 256C320 239 334 224 352 224C369 224 384 239 384 256C384 274 369 288 352 288C334 288 320 274 320 256ZM352 176C319 176 291 196 278 224L32 224C14 224 0 239 0 256C0 274 14 288 32 288L278 288C291 317 319 336 352 336C384 336 413 317 425 288L480 288C497 288 512 274 512 256C512 239 497 224 480 224L425 224C413 196 384 176 352 176ZM192 128C174 128 160 114 160 96C160 79 174 64 192 64C209 64 224 79 224 96C224 114 209 128 192 128ZM265 64C253 36 224 16 192 16C159 16 131 36 118 64L32 64C14 64 0 79 0 96C0 114 14 128 32 128L118 128C131 157 159 176 192 176C224 176 253 157 265 128L480 128C497 128 512 114 512 96C512 79 497 64 480 64L265 64Z\"/></svg>"
    ;
    _DAT_1811074e4 = local_38._4_4_;
    FUN_1802c0a60("use shared settings",&DAT_18095d454);
    if ((DAT_18095d454 != '\0') &&
       (cVar6 = FUN_1802badc0("shared_style","use shared settings"), cVar6 != '\0')) {
      FUN_1802ffa90(&DAT_18095d4a0);
      FUN_1802bc580();
    }
    FUN_1802bc580();
  }
  cVar6 = FUN_1802bc070("bullet_impacts","bullet impacts");
  if (cVar6 != '\0') {
    DAT_1811074d0 = "icon_f05b";
    DAT_1811074d8 =
         "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 512 512\" width=\"512\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M256 0C273 0 288 15 288 32L288 43C381 57 455 131 469 224L480 224C497 224 512 239 512 256C512 274 497 288 480 288L469 288C455 382 381 455 288 469L288 480C288 497 273 512 256 512C238 512 224 497 224 480L224 469C130 455 56 382 42 288L32 288C14 288 0 274 0 256C0 239 14 224 32 224L42 224C56 131 130 57 224 43L224 32C224 15 238 0 256 0ZM107 288C119 347 165 393 224 405L224 384C224 367 238 352 256 352C273 352 288 367 288 384L288 405C346 393 392 347 404 288L384 288C366 288 352 274 352 256C352 239 366 224 384 224L404 224C392 166 346 120 288 108L288 128C288 146 273 160 256 160C238 160 224 146 224 128L224 108C165 120 119 166 107 224L128 224C145 224 160 239 160 256C160 274 145 288 128 288L107 288ZM256 224C273 224 288 239 288 256C288 274 273 288 256 288C238 288 224 274 224 256C224 239 238 224 256 224Z\"/></svg>"
    ;
    DAT_1811074e0 = 0x44000000;
    _DAT_1811074e4 = local_38._4_4_;
    FUN_1802c0a60("bullet impacts",&DAT_18095d4b8);
    local_68 = &DAT_18095d4b8;
    if (DAT_18095d4b8 == '\0') {
      FUN_1803e89e0("impact_colors");
      FUN_1803ec6c0();
      local_90 = (code *)0x0;
      local_48 = "client";
      local_98 = (char *)0x0;
      local_40 = "server";
      local_60 = &DAT_18095d4bc;
      local_58 = &DAT_18095d4cc;
      FUN_1802f9be0("##colors",&local_48,&local_60,2);
      iVar9 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
      if (iVar9 < 2) {
        FUN_1803ebc00("Calling PopID() too many times!");
      }
      else {
        *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar9 + -1;
      }
    }
    else {
      local_88 = &local_68;
      local_90 = FUN_18034cc40;
      local_98 = "server";
      FUN_1802f9de0("impact_colors",&DAT_18095d4bc,&DAT_18095d4cc,"client");
    }
    DAT_1811074e0 = 0x44000000;
    DAT_1811074d0 = "icon_f890";
    DAT_1811074d8 =
         "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 512 512\" width=\"512\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M327 86C323 87 320 92 320 96C320 101 323 106 327 107L384 128L405 185C406 189 411 192 416 192C420 192 425 189 426 185L448 128L504 107C509 106 512 101 512 96C512 92 509 87 504 86L448 64L426 8C425 3 420 0 416 0C411 0 406 3 405 8L384 64L327 86ZM205 74C202 68 196 64 190 64C184 64 178 68 176 74L123 188L9 240C3 243 0 249 0 255C0 261 3 267 9 270L123 322L176 436C178 442 184 446 190 446C196 446 202 442 205 436L257 322L371 269C377 267 381 261 381 255C381 249 377 243 371 240L257 188L205 74ZM384 384L327 406C323 407 320 412 320 416C320 421 323 426 327 427L384 448L405 504C406 509 411 512 416 512C420 512 425 509 426 504L448 448L504 427C509 426 512 421 512 416C512 412 509 407 504 406L448 384L426 328C425 323 420 320 416 320C411 320 406 323 405 328L384 384Z\"/></svg>"
    ;
    _DAT_1811074e4 = local_38._4_4_;
    FUN_1802c0a60("impact sparks",&DAT_18095d4f8);
    local_50 = &DAT_18095d4b8;
    if (DAT_18095d4f8 == '\0') {
      FUN_1803e89e0("spark_colors");
      FUN_1803ec6c0();
      local_90 = (code *)0x0;
      local_60 = "sparks";
      local_98 = (undefined *)0x0;
      local_58 = &DAT_1806f83d8;
      local_48 = (char *)&DAT_18095d4fc;
      local_40 = (char *)&DAT_18095d50c;
      FUN_1802f9be0("##colors",&local_60,&local_48,2);
      iVar9 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
      if (iVar9 < 2) {
        FUN_1803ebc00("Calling PopID() too many times!");
      }
      else {
        *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar9 + -1;
      }
    }
    else {
      local_88 = &local_50;
      local_90 = FUN_18034cee0;
      local_98 = "glow";
      FUN_1802f9de0("spark_colors",&DAT_18095d4fc,&DAT_18095d50c,"sparks");
    }
    FUN_1802bc580();
  }
  iVar9 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
  if (iVar9 < 2) {
    FUN_1803ebc00("Calling PopID() too many times!");
  }
  else {
    *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar9 + -1;
  }
  return;
}



/* ===== 180301510 FUN_180301510 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180301510(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  char *param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
                  undefined4 param_9)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  float fVar4;
  undefined4 uVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  undefined4 local_14;
  
  FUN_1803e89e0(param_2);
  DAT_1811074d0 = (char *)*param_4;
  DAT_1811074d8 = (char *)param_4[1];
  _DAT_1811074e0 = param_4[2];
  FUN_1802c0a60(param_3,param_5);
  FUN_1803ec6c0();
  FUN_1802cedb0("##color",param_6,1);
  cVar1 = *param_5;
  FUN_1802b9bd0();
  lVar6 = DAT_180ca0a50;
  uVar5 = DAT_1808ac34c;
  if (cVar1 == '\0') {
    DAT_181107580 = DAT_181107580 + 1;
    *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
    lVar3 = *(longlong *)(lVar6 + 0x14f8);
    lVar8 = *(longlong *)(lVar3 + 0x2c8);
    *(undefined1 *)(lVar3 + 0xce) = 1;
    iVar7 = *(int *)(*(longlong *)(*(longlong *)(lVar6 + 0x14f8) + 0x2c8) + 0x20);
    FUN_1803d8870(1,uVar5);
    FUN_1803e7920(1);
    FUN_1803d8a40(1);
  }
  else {
    lVar8 = 0;
    iVar7 = 0;
  }
  DAT_1811074d0 = "icon_e29e";
  DAT_1811074d8 =
       "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 512 512\" width=\"512\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M256 0C238 0 224 15 224 32L224 96C224 114 238 128 256 128C273 128 288 114 288 96L288 67C378 82 448 161 448 256C448 362 362 448 256 448C150 448 64 362 64 256C64 203 86 154 121 119C134 107 134 87 122 74C109 61 89 61 76 74C29 120 0 185 0 256C0 398 114 512 256 512C397 512 512 398 512 256C512 115 397 0 256 0ZM193 159C183 150 168 150 159 159C149 169 149 184 159 193L239 273C248 283 263 283 273 273C282 264 282 249 273 239L193 159Z\"/></svg>"
  ;
  _DAT_1811074e0 = CONCAT44(local_14,0x44000000);
  FUN_18033e3a0("duration",param_7,param_8,param_9,"%.1fs",0);
  if (lVar8 != 0) {
    FUN_1802b9bd0();
    DAT_181107580 = DAT_181107580 + -1;
    FUN_1803e79e0();
    fVar4 = DAT_1808ac1f4;
    if (iVar7 < *(int *)(lVar8 + 0x20)) {
      do {
        lVar6 = (longlong)iVar7;
        iVar7 = iVar7 + 1;
        uVar2 = *(uint *)(*(longlong *)(lVar8 + 0x28) + 0x10 + lVar6 * 0x14);
        *(uint *)(*(longlong *)(lVar8 + 0x28) + 0x10 + lVar6 * 0x14) =
             (int)(longlong)((float)(uVar2 >> 0x18) * fVar4 + fVar4) << 0x18 | uVar2 & 0xffffff;
      } while (iVar7 < *(int *)(lVar8 + 0x20));
    }
  }
  iVar7 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
  if (iVar7 < 2) {
    FUN_1803ebc00("Calling PopID() too many times!");
    return;
  }
  *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar7 + -1;
  return;
}



/* ===== 180301710 FUN_180301710 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180301710(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  char *pcVar4;
  float fVar5;
  undefined4 uVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  undefined8 local_res8;
  undefined8 local_88;
  undefined8 *local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 local_60;
  undefined8 local_58;
  undefined8 *local_50;
  undefined4 local_48;
  undefined8 *local_40;
  undefined1 *local_38;
  undefined8 *local_30;
  undefined1 local_28;
  
  FUN_1803e89e0(param_2);
  DAT_1811074d0 = (char *)*param_4;
  DAT_1811074d8 = (char *)param_4[1];
  _DAT_1811074e0 = param_4[2];
  pcVar4 = (char *)CONCAT44(param_5._4_4_,(undefined4)param_5);
  FUN_1802c0a60(param_3,pcVar4);
  FUN_1803ec6c0();
  local_res8 = param_8;
  if (*(char *)(*param_1 + 0x48) == '\0') {
    FUN_1802ceb60(&param_8,"##color");
    local_70 = param_6;
    local_80 = &local_70;
    local_68 = 0;
    local_50 = &local_88;
    local_60 = 1;
    local_40 = &param_5;
    local_38 = &LAB_18034cc30;
    local_30 = &local_res8;
    local_58 = 0;
    local_88 = 0;
    local_78 = 1;
    param_5._0_4_ = 0;
    local_48 = 1;
    local_28 = 0;
    FUN_1802ce6f0("##color",&local_50,&param_8);
  }
  else {
    FUN_1802cedb0("##color",param_6,1);
  }
  cVar1 = *pcVar4;
  FUN_1802b9bd0();
  lVar7 = DAT_180ca0a50;
  uVar6 = DAT_1808ac34c;
  if (cVar1 == '\0') {
    DAT_181107580 = DAT_181107580 + 1;
    *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
    lVar3 = *(longlong *)(lVar7 + 0x14f8);
    lVar9 = *(longlong *)(lVar3 + 0x2c8);
    *(undefined1 *)(lVar3 + 0xce) = 1;
    iVar8 = *(int *)(*(longlong *)(*(longlong *)(lVar7 + 0x14f8) + 0x2c8) + 0x20);
    FUN_1803d8870(1,uVar6);
    FUN_1803e7920(1);
    FUN_1803d8a40(1);
  }
  else {
    lVar9 = 0;
    iVar8 = 0;
  }
  fVar5 = DAT_1808ac1f4;
  DAT_1811074d0 = "icon_e29e";
  DAT_1811074d8 =
       "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 512 512\" width=\"512\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M256 0C238 0 224 15 224 32L224 96C224 114 238 128 256 128C273 128 288 114 288 96L288 67C378 82 448 161 448 256C448 362 362 448 256 448C150 448 64 362 64 256C64 203 86 154 121 119C134 107 134 87 122 74C109 61 89 61 76 74C29 120 0 185 0 256C0 398 114 512 256 512C397 512 512 398 512 256C512 115 397 0 256 0ZM193 159C183 150 168 150 159 159C149 169 149 184 159 193L239 273C248 283 263 283 273 273C282 264 282 249 273 239L193 159Z\"/></svg>"
  ;
  _DAT_1811074e0 = CONCAT44(local_74,0x44000000);
  FUN_18033e3a0("duration",param_7,DAT_1808ac1f4,DAT_1808ac864,"%.1fs",0);
  if (lVar9 != 0) {
    FUN_1802b9bd0();
    DAT_181107580 = DAT_181107580 + -1;
    FUN_1803e79e0();
    if (iVar8 < *(int *)(lVar9 + 0x20)) {
      do {
        lVar7 = (longlong)iVar8;
        iVar8 = iVar8 + 1;
        uVar2 = *(uint *)(*(longlong *)(lVar9 + 0x28) + 0x10 + lVar7 * 0x14);
        *(uint *)(*(longlong *)(lVar9 + 0x28) + 0x10 + lVar7 * 0x14) =
             (int)(longlong)((float)(uVar2 >> 0x18) * fVar5 + fVar5) << 0x18 | uVar2 & 0xffffff;
      } while (iVar8 < *(int *)(lVar9 + 0x20));
    }
  }
  iVar8 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
  if (iVar8 < 2) {
    FUN_1803ebc00("Calling PopID() too many times!");
  }
  else {
    *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar8 + -1;
  }
  return;
}



/* ===== 1803019e0 FUN_1803019e0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

char * FUN_1803019e0(char *param_1,char *param_2)

{
  int iVar1;
  char *pcVar2;
  longlong lVar3;
  HMODULE hModule;
  FARPROC pFVar4;
  longlong *plVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  undefined8 *******_Buf2;
  ulonglong uVar8;
  undefined4 *puVar9;
  size_t _Size;
  ulonglong uVar10;
  undefined1 auStack_a8 [40];
  char *local_80 [2];
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 *******local_50 [2];
  size_t local_40;
  ulonglong local_38;
  ulonglong local_30;
  
  local_30 = DAT_180919500 ^ (ulonglong)auStack_a8;
  uVar10 = *(ulonglong *)(param_2 + 0x10);
  if (uVar10 != 0) {
    pcVar2 = param_2;
    if (0xf < *(ulonglong *)(param_2 + 0x18)) {
      pcVar2 = *(char **)param_2;
    }
    if (*pcVar2 == '<') {
      param_1[0] = '\0';
      param_1[1] = '\0';
      param_1[2] = '\0';
      param_1[3] = '\0';
      param_1[4] = '\0';
      param_1[5] = '\0';
      param_1[6] = '\0';
      param_1[7] = '\0';
      param_1[8] = '\0';
      param_1[9] = '\0';
      param_1[10] = '\0';
      param_1[0xb] = '\0';
      param_1[0xc] = '\0';
      param_1[0xd] = '\0';
      param_1[0xe] = '\0';
      param_1[0xf] = '\0';
      param_1[0x10] = '\t';
      param_1[0x11] = '\0';
      param_1[0x12] = '\0';
      param_1[0x13] = '\0';
      param_1[0x14] = '\0';
      param_1[0x15] = '\0';
      param_1[0x16] = '\0';
      param_1[0x17] = '\0';
      param_1[0x18] = '\x0f';
      param_1[0x19] = '\0';
      param_1[0x1a] = '\0';
      param_1[0x1b] = '\0';
      param_1[0x1c] = '\0';
      param_1[0x1d] = '\0';
      param_1[0x1e] = '\0';
      param_1[0x1f] = '\0';
      *(undefined8 *)param_1 = s_Main_Menu_180763130._0_8_;
      param_1[8] = s_Main_Menu_180763130[8];
      param_1[9] = '\0';
      return param_1;
    }
  }
  pcVar2 = param_2;
  if (0xf < *(ulonglong *)(param_2 + 0x18)) {
    pcVar2 = *(char **)param_2;
  }
  uVar6 = 0;
  uVar8 = 0xcbf29ce484222325;
  if (uVar10 != 0) {
    do {
      uVar8 = (uVar8 ^ (byte)pcVar2[uVar6]) * 0x100000001b3;
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar10);
  }
  local_80[0] = param_1;
  lVar3 = FUN_1800268a0(&DAT_180ca17c0,local_80,param_2,uVar8);
  lVar3 = *(longlong *)(lVar3 + 8);
  if ((lVar3 != 0) && (lVar3 != DAT_180ca17c8)) {
    FUN_180024b50(param_1,lVar3 + 0x30);
    return param_1;
  }
  FUN_180066a20(local_50,"SFUI_Map_",param_2);
  if (DAT_180cfc838 == 0) {
    hModule = GetModuleHandleA("localize.dll");
    if ((hModule == (HMODULE)0x0) ||
       (pFVar4 = GetProcAddress(hModule,"CreateInterface"), pFVar4 == (FARPROC)0x0)) {
      DAT_180cfc838 = 0;
    }
    else {
      DAT_180cfc838 = (*pFVar4)("Localize_001",0);
    }
  }
  FUN_1802777c0(&local_70,local_50,local_50);
  uVar10 = CONCAT44(uStack_54,uStack_58);
  puVar9 = (undefined4 *)CONCAT44(uStack_6c,local_70);
  _Size = CONCAT44(uStack_5c,local_60);
  if (_Size != 0) {
    _Buf2 = local_50;
    if (0xf < local_38) {
      _Buf2 = local_50[0];
    }
    puVar7 = &local_70;
    if (0xf < uVar10) {
      puVar7 = puVar9;
    }
    if ((_Size != local_40) || ((_Size != 0 && (iVar1 = memcmp(puVar7,_Buf2,_Size), iVar1 != 0))))
    goto LAB_180301bb9;
  }
  if ((char *)&local_70 != param_2) {
    if (*(ulonglong *)(param_2 + 0x18) < 0x10) {
      pcVar2 = param_2;
    }
    else {
      pcVar2 = *(char **)param_2;
    }
    FUN_180029840(&local_70,pcVar2,*(undefined8 *)(param_2 + 0x10));
    uVar10 = CONCAT44(uStack_54,uStack_58);
    _Size = CONCAT44(uStack_5c,local_60);
    puVar9 = (undefined4 *)CONCAT44(uStack_6c,local_70);
  }
LAB_180301bb9:
  plVar5 = (longlong *)FUN_18034e110(&DAT_180ca17c0,local_80,param_2);
  if ((undefined4 *)(*plVar5 + 0x30) != &local_70) {
    puVar7 = &local_70;
    if (0xf < uVar10) {
      puVar7 = puVar9;
    }
    FUN_180029840((undefined4 *)(*plVar5 + 0x30),puVar7,_Size);
  }
  param_1[0x10] = '\0';
  param_1[0x11] = '\0';
  param_1[0x12] = '\0';
  param_1[0x13] = '\0';
  param_1[0x14] = '\0';
  param_1[0x15] = '\0';
  param_1[0x16] = '\0';
  param_1[0x17] = '\0';
  param_1[0x18] = '\0';
  param_1[0x19] = '\0';
  param_1[0x1a] = '\0';
  param_1[0x1b] = '\0';
  param_1[0x1c] = '\0';
  param_1[0x1d] = '\0';
  param_1[0x1e] = '\0';
  param_1[0x1f] = '\0';
  *(undefined4 *)param_1 = local_70;
  *(undefined4 *)(param_1 + 4) = uStack_6c;
  *(undefined4 *)(param_1 + 8) = uStack_68;
  *(undefined4 *)(param_1 + 0xc) = uStack_64;
  *(undefined4 *)(param_1 + 0x10) = local_60;
  *(undefined4 *)(param_1 + 0x14) = uStack_5c;
  *(undefined4 *)(param_1 + 0x18) = uStack_58;
  *(undefined4 *)(param_1 + 0x1c) = uStack_54;
  FUN_18000f890(local_50);
  return param_1;
}



/* ===== 180301c50 FUN_180301c50 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180301c50(void)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  char cVar10;
  float *pfVar11;
  float *pfVar12;
  float fVar13;
  float fVar14;
  float local_res8;
  float local_resc;
  float local_res10;
  float local_res14;
  ulonglong in_stack_fffffffffffffef8;
  float local_e8 [4];
  longlong local_d8 [3];
  float local_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  undefined8 local_b0;
  
  pfVar11 = (float *)FUN_1802b9e90(local_d8,"ambience");
  fVar14 = *pfVar11;
  fVar4 = pfVar11[1];
  fVar5 = pfVar11[2];
  fVar6 = pfVar11[3];
  uVar1 = *(undefined8 *)(pfVar11 + 4);
  local_c0 = fVar14;
  fStack_bc = fVar4;
  fStack_b8 = fVar5;
  fStack_b4 = fVar6;
  FUN_1803e89e0("ambience_row");
  lVar3 = DAT_180ca0a50;
  fVar9 = DAT_1809f72e4;
  fVar14 = (fVar14 - (float)((ulonglong)uVar1 >> 0x20)) - DAT_1809f72e4;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  lVar3 = *(longlong *)(lVar3 + 0x14f8);
  *(float *)(lVar3 + 0x118) = fVar14;
  local_res8 = (fVar9 + fVar5) - fVar14;
  *(float *)(lVar3 + 0x11c) = fVar4;
  *(undefined1 *)(lVar3 + 0x159) = 1;
  local_resc = (fVar6 + fVar4) - fVar4;
  local_b0 = uVar1;
  cVar10 = FUN_180415e30("##row",&local_res8,0);
  if (cVar10 != '\0') {
    _DAT_180ce20b4 = 1;
  }
  FUN_1802baa50(&local_c0);
  cVar10 = FUN_1803dd930(0);
  fVar8 = DAT_1808ac34c;
  fVar7 = DAT_1808ac1f4;
  local_res8 = *(float *)(DAT_180ca0a50 + 0x1ee8);
  if ((*(float *)(DAT_180ca0a50 + 0x1578) == 0.0) ||
     (*(float *)(DAT_180ca0a50 + 0x1578) != local_res8)) {
    if (cVar10 == '\0') {
      fVar13 = 0.0;
    }
    else {
      fVar13 = DAT_1808ac1f4;
    }
  }
  else {
    fVar13 = DAT_1808ac34c;
  }
  fStack_b4 = 0.0;
  local_b0 = CONCAT44(local_b0._4_4_,0xffffffff);
  local_c0 = fVar13;
  fStack_bc = fVar13;
  fStack_b8 = fVar13;
  FUN_18034a380(local_res8,local_d8,&local_res8,&local_c0);
  fVar13 = (float)FUN_1802b3660(local_d8[0] + 0x14,fVar13,DAT_1808ac118,0);
  lVar3 = DAT_180ca0a50;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  uVar1 = *(undefined8 *)(*(longlong *)(lVar3 + 0x14f8) + 0x2c8);
  if (0.0 < fVar13) {
    local_e8[2] = 1.0;
    local_res8 = (fVar9 + fVar5) - fVar8;
    local_e8[0] = 0.0;
    local_e8[1] = fVar13 * DAT_1808ac0e8 * DAT_1808ac2cc;
    local_res10 = fVar14 + fVar8;
    pfVar11 = local_e8;
    if (0.0 <= local_e8[1]) {
      pfVar11 = local_e8 + 1;
    }
    pfVar12 = local_e8 + 2;
    if (local_e8[1] <= fVar8) {
      pfVar12 = pfVar11;
    }
    local_resc = fVar6 + fVar4;
    local_res14 = fVar4;
    FUN_1803fe590(uVar1,&local_res10,&local_res8,
                  (int)(longlong)(*pfVar12 * DAT_1808acb94 + fVar7) << 0x18 |
                  DAT_180960f44 & 0xffffff,in_stack_fffffffffffffef8 & 0xffffffff00000000,0);
  }
  fVar14 = (float)FUN_18053fc00(DAT_1808ac84c);
  local_res8 = fVar5 - fVar14 * fVar7;
  local_resc = fVar6 * fVar7 + fVar4;
  FUN_1802b6e90(uVar1,"nl_glyph_angle_right",
                "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 320 512\" width=\"320\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M278 234C291 246 291 267 278 279L118 439C106 451 85 451 73 439C60 427 60 406 73 394L210 256L73 119C60 107 60 86 73 74C85 61 106 61 118 74L278 234L278 234ZM278 234Z\"/></svg>"
                ,DAT_1808acbc0,&local_res8,DAT_1808ac8d4,DAT_180960ec0);
  iVar2 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
  if (iVar2 < 2) {
    FUN_1803ebc00("Calling PopID() too many times!");
  }
  else {
    *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar2 + -1;
  }
  return;
}



/* ===== 180301ff0 FUN_180301ff0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00018030234a) */
/* WARNING: Removing unreachable block (ram,0x000180302357) */
/* WARNING: Removing unreachable block (ram,0x000180302361) */

void FUN_180301ff0(int *param_1,longlong param_2,float *param_3,float *param_4,uint param_5)

{
  undefined4 uVar1;
  code *pcVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined4 *puVar9;
  char *pcVar10;
  undefined4 *puVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint uVar14;
  longlong lVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  int iVar18;
  int iVar19;
  bool bVar20;
  float fVar21;
  float unaff_XMM6_Da;
  float unaff_XMM7_Da;
  float unaff_XMM8_Da;
  float unaff_XMM10_Da;
  float unaff_XMM11_Da;
  undefined8 uStack_160;
  undefined1 auStack_158 [8];
  undefined1 auStack_150 [24];
  longlong local_138 [4];
  uint local_118 [2];
  float local_110 [10];
  char *local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  ulonglong uStack_d0;
  undefined1 local_c8 [32];
  ulonglong local_a8;
  
  local_a8 = DAT_180919500 ^ (ulonglong)auStack_158;
  iVar19 = 0;
  local_118[0] = 0;
  bVar20 = *(longlong *)(param_2 + 0x10) != 0;
  if (bVar20) {
    uVar6 = FUN_180066a20(local_c8,"panorama/images/map_icons/screenshots/360p/",param_2);
    local_118[0] = 1;
    puVar7 = (undefined8 *)FUN_1800134a0(uVar6,"_png.vtex_c",0xb);
    local_e8 = (char *)*puVar7;
    uStack_e0 = puVar7[1];
    local_d8 = puVar7[2];
    uStack_d0 = puVar7[3];
    puVar7[2] = 0;
    puVar7[3] = 0xf;
    *(undefined1 *)puVar7 = 0;
    local_118[0] = 7;
    plVar8 = (longlong *)FUN_1800e77d0(local_110 + 6,&local_e8);
    lVar15 = *plVar8;
    iVar4 = (int)plVar8[1];
    iVar19 = *(int *)((longlong)plVar8 + 0xc);
    if (uStack_d0 < 0x10) {
LAB_180302128:
      local_d8 = 0;
      uStack_d0 = 0xf;
      local_e8 = (char *)((ulonglong)local_e8 & 0xffffffffffffff00);
      goto LAB_18030213d;
    }
    uVar12 = uStack_d0 + 1;
    pcVar10 = local_e8;
    if (uVar12 < 0x1000) {
LAB_180302123:
      thunk_FUN_1803d64e0(pcVar10,uVar12);
      goto LAB_180302128;
    }
    pcVar10 = *(char **)(local_e8 + -8);
    if (local_e8 + (-8 - (longlong)pcVar10) < (char *)0x20) {
      uVar12 = uStack_d0 + 0x28;
      goto LAB_180302123;
    }
    pcVar2 = (code *)swi(0x29);
    (*pcVar2)(5);
    puVar16 = auStack_150;
LAB_1803023be:
    pcVar2 = (code *)swi(0x29);
    (*pcVar2)(5);
    puVar17 = puVar16 + 8;
  }
  else {
    lVar15 = 0;
    iVar4 = 0;
LAB_18030213d:
    if (bVar20) {
      FUN_18000f890(local_c8);
    }
    if (((lVar15 == 0) || (iVar4 < 1)) || (iVar19 < 1)) {
      local_e8 = (char *)0x0;
      uStack_e0 = 0;
      local_d8 = 0;
      uStack_d0 = 0;
      local_e8 = (char *)FUN_18000fb70(0x50);
      uVar6 = s_panorama_images_map_icons_screen_180763140._8_8_;
      local_d8 = 0x43;
      uStack_d0 = 0x4f;
      *(undefined8 *)local_e8 = s_panorama_images_map_icons_screen_180763140._0_8_;
      *(undefined8 *)(local_e8 + 8) = uVar6;
      uVar6 = s_panorama_images_map_icons_screen_180763140._24_8_;
      *(undefined8 *)(local_e8 + 0x10) = s_panorama_images_map_icons_screen_180763140._16_8_;
      *(undefined8 *)(local_e8 + 0x18) = uVar6;
      uVar6 = s_panorama_images_map_icons_screen_180763140._40_8_;
      *(undefined8 *)(local_e8 + 0x20) = s_panorama_images_map_icons_screen_180763140._32_8_;
      *(undefined8 *)(local_e8 + 0x28) = uVar6;
      uVar6 = CONCAT17(s_panorama_images_map_icons_screen_180763140[0x3f],
                       s_panorama_images_map_icons_screen_180763140._56_7_);
      *(undefined8 *)(local_e8 + 0x30) = s_panorama_images_map_icons_screen_180763140._48_8_;
      *(undefined8 *)(local_e8 + 0x38) = uVar6;
      *(undefined4 *)(local_e8 + 0x3f) = s_panorama_images_map_icons_screen_180763140._63_4_;
      local_e8[0x43] = '\0';
      plVar8 = (longlong *)FUN_1800e77d0(local_110 + 6,&local_e8);
      puVar16 = auStack_158;
      lVar15 = *plVar8;
      iVar4 = (int)plVar8[1];
      iVar19 = *(int *)((longlong)plVar8 + 0xc);
      if (0xf < uStack_d0) {
        uVar12 = uStack_d0 + 1;
        pcVar10 = local_e8;
        if (0xfff < uVar12) {
          pcVar10 = *(char **)(local_e8 + -8);
          if ((char *)0x1f < local_e8 + (-8 - (longlong)pcVar10)) goto LAB_1803023be;
          uVar12 = uStack_d0 + 0x28;
        }
        thunk_FUN_1803d64e0(pcVar10,uVar12);
      }
      puVar17 = auStack_158;
      if (((lVar15 == 0) || (puVar17 = auStack_158, iVar4 < 1)) ||
         (puVar17 = auStack_158, iVar19 < 1)) goto LAB_180302606;
    }
    unaff_XMM8_Da = DAT_1808ac34c;
    unaff_XMM11_Da = DAT_1808ac1f4;
    unaff_XMM6_Da = (*param_4 - *param_3) / DAT_1808ac658 + *param_3 + DAT_1808ac34c;
    local_110[1] = param_3[1] + DAT_1808ac34c;
    local_110[2] = *param_4 - DAT_1808ac34c;
    local_110[3] = param_4[1] - DAT_1808ac34c;
    unaff_XMM7_Da = local_110[2] - unaff_XMM6_Da;
    unaff_XMM10_Da = 0.0;
    puVar17 = auStack_158;
    if ((unaff_XMM7_Da <= 0.0) || (puVar17 = auStack_158, local_110[3] - local_110[1] <= 0.0))
    goto LAB_180302606;
    local_110[7] = (unaff_XMM7_Da / (float)iVar4) * (float)iVar19;
    local_110[6] = 0.0;
    local_110[7] = ((local_110[7] - (local_110[3] - local_110[1])) * DAT_1808ac1f4) / local_110[7];
    local_110[4] = 1.0;
    local_110[5] = DAT_1808ac34c - local_110[7];
    local_118[0] = param_5;
    puVar17 = auStack_158;
    local_110[0] = unaff_XMM6_Da;
    if ((param_1 != (int *)0x0) && (puVar17 = auStack_158, DAT_180cd0fdc == '\0')) {
      lVar13 = *(longlong *)(param_1 + 2) + ((longlong)*param_1 + -1) * 0x48;
      if (*(int *)(lVar13 + 0x28) != 0) {
        FUN_1803fbe60(param_1);
        lVar13 = *(longlong *)(param_1 + 2) + (longlong)(*param_1 + -1) * 0x48;
      }
      *(code **)(lVar13 + 0x30) = FUN_1803673c0;
      *(ulonglong *)(lVar13 + 0x38) = (ulonglong)param_5;
      *(undefined4 *)(lVar13 + 0x40) = 0;
      *(undefined4 *)(lVar13 + 0x44) = 0xffffffff;
      FUN_1803fbe60(param_1);
      puVar17 = auStack_158;
    }
  }
  iVar19 = param_1[8];
  if ((lVar15 == *(longlong *)(param_1 + 0x1e)) && (*(longlong *)(param_1 + 0x1c) == 0)) {
    bVar20 = false;
  }
  else {
    iVar4 = param_1[0x2d];
    if (param_1[0x2c] == iVar4) {
      iVar18 = param_1[0x2c] + 1;
      if (iVar4 == 0) {
        iVar4 = 8;
      }
      else {
        iVar4 = iVar4 / 2 + iVar4;
      }
      if (iVar18 < iVar4) {
        iVar18 = iVar4;
      }
      *(undefined8 *)(puVar17 + -8) = 0x18030241d;
      FUN_1803f7030(param_1 + 0x2c,iVar18);
    }
    iVar4 = param_1[0x2c];
    lVar13 = *(longlong *)(param_1 + 0x2e);
    *(undefined8 *)(lVar13 + (longlong)iVar4 * 0x10) = 0;
    *(longlong *)(lVar13 + 8 + (longlong)iVar4 * 0x10) = lVar15;
    param_1[0x2c] = param_1[0x2c] + 1;
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
    *(longlong *)(param_1 + 0x1e) = lVar15;
    *(undefined8 *)(puVar17 + -8) = 0x18030244d;
    FUN_1803fc0a0(param_1);
    bVar20 = true;
  }
  iVar4 = param_1[8];
  *(undefined4 *)(puVar17 + 0x20) = 0xf0;
  *(undefined8 *)(puVar17 + -8) = 0x180302475;
  FUN_1803fe160(param_1,puVar17 + 0x48,puVar17 + 0x50,DAT_1808ac8b0);
  iVar18 = param_1[0x14];
  uVar6 = *(undefined8 *)(param_1 + 0x16);
  *(undefined8 *)(puVar17 + -8) = 0x18030248b;
  FUN_1803fd460(param_1,uVar6,iVar18,0xffffffff);
  param_1[0x14] = 0;
  *(undefined1 **)(puVar17 + 0x30) = puVar17 + 0x58;
  *(undefined1 **)(puVar17 + 0x28) = puVar17 + 0x60;
  *(undefined1 **)(puVar17 + 0x20) = puVar17 + 0x50;
  iVar18 = param_1[8];
  *(undefined8 *)(puVar17 + -8) = 0x1803024c0;
  FUN_180401c50(param_1,iVar4,iVar18,puVar17 + 0x48);
  if (bVar20) {
    *(undefined8 *)(puVar17 + -8) = 0x1803024cd;
    FUN_1803fc340(param_1);
  }
  fVar3 = DAT_1808acb94;
  uVar14 = DAT_180960f60 & 0xffffff;
  if (iVar19 < param_1[8]) {
    do {
      *(undefined4 *)(puVar17 + 0x50) = 0x3f800000;
      *(undefined4 *)(puVar17 + 0x40) = 0;
      lVar13 = (longlong)iVar19 * 5;
      lVar15 = *(longlong *)(param_1 + 10);
      fVar21 = (*(float *)(lVar15 + (longlong)iVar19 * 0x14) - unaff_XMM6_Da) / unaff_XMM7_Da;
      *(float *)(puVar17 + 0x48) = fVar21;
      puVar11 = (undefined4 *)(puVar17 + 0x40);
      if (unaff_XMM10_Da <= fVar21) {
        puVar11 = (undefined4 *)(puVar17 + 0x48);
      }
      puVar9 = (undefined4 *)(puVar17 + 0x50);
      if (fVar21 <= unaff_XMM8_Da) {
        puVar9 = puVar11;
      }
      uVar1 = *puVar9;
      *(undefined8 *)(puVar17 + -8) = 0x18030254e;
      uVar5 = FUN_1802b38e0(uVar14,0x40ffffff,uVar1);
      *(uint *)(lVar15 + 0x10 + lVar13 * 4) =
           (int)(longlong)
                (((float)*(byte *)(lVar15 + 0x13 + lVar13 * 4) / fVar3) * (float)(uVar5 >> 0x18) +
                unaff_XMM11_Da) << 0x18 | uVar5 & 0xffffff;
      iVar19 = iVar19 + 1;
    } while (iVar19 < param_1[8]);
  }
  lVar15 = -8;
  if ((*(longlong *)(*(longlong *)(param_1 + 0xe) + 0x68) != 0) &&
     (lVar13 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0xe) + 0x68) + 0xc60),
     lVar13 != 0)) {
    lVar15 = lVar13;
  }
  lVar13 = *(longlong *)(param_1 + 2) + ((longlong)*param_1 + -1) * 0x48;
  if (*(int *)(lVar13 + 0x28) != 0) {
    *(undefined8 *)(puVar17 + -8) = 0x1803025d9;
    FUN_1803fbe60(param_1);
    lVar13 = *(longlong *)(param_1 + 2) + (longlong)(*param_1 + -1) * 0x48;
  }
  *(longlong *)(lVar13 + 0x30) = lVar15;
  *(undefined8 *)(lVar13 + 0x38) = 0;
  *(undefined4 *)(lVar13 + 0x40) = 0;
  *(undefined4 *)(lVar13 + 0x44) = 0xffffffff;
  *(undefined8 *)(puVar17 + -8) = 0x180302606;
  FUN_1803fbe60(param_1);
LAB_180302606:
  *(undefined8 *)(puVar17 + -8) = 0x180302612;
  return;
}



/* ===== 180302650 FUN_180302650 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_180302650(undefined8 param_1,char *param_2,undefined8 param_3,char param_4,char *param_5,
                  byte param_6,char param_7,char param_8,float *param_9,float param_10)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  float fVar5;
  undefined4 uVar6;
  longlong lVar7;
  char cVar8;
  char *pcVar9;
  char cVar10;
  undefined1 uVar11;
  undefined4 uVar12;
  uint uVar13;
  float *pfVar14;
  undefined8 *puVar15;
  float *pfVar16;
  longlong lVar17;
  float fVar18;
  byte bVar19;
  char *pcVar20;
  ulonglong uVar21;
  bool bVar22;
  float fVar23;
  undefined4 uVar24;
  float fVar25;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  float fVar29;
  float fVar30;
  undefined1 auStack_1e8 [32];
  char **local_1c8;
  undefined8 local_1c0;
  char *local_1b8;
  float *local_1b0;
  float *local_1a8;
  undefined4 local_1a0;
  undefined4 local_198;
  uint local_190;
  float local_188 [2];
  int local_180 [2];
  char local_178;
  float local_170;
  float fStack_16c;
  float local_160;
  float local_15c;
  char *local_158;
  undefined8 uStack_150;
  float local_148 [4];
  char *local_138 [2];
  undefined8 local_128;
  ulonglong uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  ulonglong local_e8;
  
  lVar4 = DAT_180ca0a50;
  local_e8 = DAT_180919500 ^ (ulonglong)auStack_1e8;
  local_138[0] = param_5;
  local_160 = 0.0;
  fVar25 = *param_9;
  local_188[1] = param_9[1] + _DAT_1808aca30;
  local_188[0] = param_10 + fVar25;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x14f8) + 0x2c8);
  bVar19 = 0;
  local_178 = param_4;
  local_158 = param_2;
  local_108 = param_3;
  FUN_1803e89e0();
  lVar7 = DAT_180ca0a50;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  lVar17 = *(longlong *)(lVar7 + 0x14f8);
  *(undefined8 *)(lVar17 + 0x118) = *(undefined8 *)param_9;
  *(undefined1 *)(lVar17 + 0x159) = 1;
  puVar1 = (uint *)(lVar7 + 0x1eb4);
  *puVar1 = *puVar1 | 0x4000;
  local_170 = param_10;
  fStack_16c = 35.706;
  cVar10 = FUN_180415e30("##tile",&local_170,0);
  fVar29 = DAT_1808ac34c;
  fVar5 = DAT_1808ac1f4;
  if (cVar10 != '\0') {
    bVar19 = param_6 ^ 1;
  }
  iVar2 = *(int *)(DAT_180ca0a50 + 0x1ee8);
  iVar3 = *(int *)(DAT_180ca0a50 + 0x1578);
  local_180[0] = iVar2;
  if (iVar3 == 0) {
    bVar22 = false;
    cVar10 = FUN_1803dd930(0x100);
    uVar26 = extraout_XMM0_Qa_00;
  }
  else {
    bVar22 = iVar3 == iVar2;
    cVar10 = FUN_1803dd930(0x100);
    uVar26 = extraout_XMM0_Qa;
    if (iVar3 == iVar2) {
      fVar18 = fVar29;
      goto LAB_180302825;
    }
  }
  if (cVar10 == '\0' && local_178 == '\0') {
    fVar18 = 0.0;
  }
  else {
    fVar18 = fVar5;
  }
LAB_180302825:
  cVar8 = local_178;
  iVar2 = local_180[0];
  local_180[0] = local_180[0] + 1;
  local_128 = CONCAT44(fVar18,fVar18);
  uStack_120 = (ulonglong)(uint)fVar18;
  local_118._0_4_ = 0xffffffff;
  FUN_18034a380(uVar26,&local_170,local_180,&local_128);
  fVar18 = DAT_1808ac118;
  uVar26 = FUN_1802b3660(CONCAT44(fStack_16c,local_170) + 0x14);
  if (cVar8 != '\0' || bVar22) {
    fVar23 = fVar29;
  }
  else if (cVar10 == '\0') {
    fVar23 = 0.0;
  }
  else {
    fVar23 = fVar5;
  }
  local_180[0] = iVar2 + 2;
  local_128 = CONCAT44(fVar23,fVar23);
  uStack_120 = (ulonglong)(uint)fVar23;
  local_118._0_4_ = 0xffffffff;
  FUN_18034a380(uVar26,&local_170,local_180,&local_128);
  uVar27 = FUN_1802b3660(CONCAT44(fStack_16c,local_170) + 0x14);
  pcVar9 = local_138[0];
  if ((local_138[0] == (char *)0x0) || (*local_138[0] != '\0')) {
    fVar23 = fVar29;
  }
  else {
    fVar23 = 0.0;
  }
  local_180[0] = iVar2 + 3;
  local_128 = CONCAT44(fVar23,fVar23);
  uStack_120 = (ulonglong)(uint)fVar23;
  local_118._0_4_ = 0xffffffff;
  FUN_18034a380(uVar27,local_138,local_180,&local_128);
  uVar28 = FUN_1802b3660(local_138[0] + 0x14);
  fVar23 = (float)uVar28;
  if (cVar10 == '\0') {
    fVar30 = 0.0;
  }
  else {
    fVar30 = fVar29;
  }
  local_180[0] = iVar2 + 4;
  local_128 = CONCAT44(fVar30,fVar30);
  uStack_120 = (ulonglong)(uint)fVar30;
  local_118._0_4_ = 0xffffffff;
  FUN_18034a380(uVar28,local_138,local_180,&local_128);
  uVar28 = FUN_1802b3660(local_138[0] + 0x14);
  local_170 = (float)uVar28;
  if (param_7 == '\0' && (cVar10 == '\0' && cVar8 == '\0')) {
    fVar30 = 0.0;
  }
  else {
    fVar30 = fVar29;
  }
  local_180[0] = iVar2 + 5;
  local_128 = CONCAT44(fVar30,fVar30);
  uStack_120 = (ulonglong)(uint)fVar30;
  local_118 = CONCAT44(local_118._4_4_,0xffffffff);
  FUN_18034a380(uVar28,local_138,local_180,&local_128);
  local_180[0] = FUN_1802b3660(local_138[0] + 0x14);
  fVar30 = DAT_1808ac8b0;
  local_1c0 = (char *)((ulonglong)local_1c0._4_4_ << 0x20);
  local_1c8._0_4_ = DAT_1808ac8b0;
  FUN_1803fe590(lVar4,param_9,local_188,DAT_180960f60);
  local_148[2] = 1.0;
  local_148[0] = 0.0;
  local_148[1] = (float)uVar26 * fVar18 * DAT_1808ac2cc;
  pfVar16 = local_148;
  if (0.0 <= local_148[1]) {
    pfVar16 = local_148 + 1;
  }
  pfVar14 = local_148 + 2;
  if (local_148[1] <= fVar29) {
    pfVar14 = pfVar16;
  }
  local_1c0 = (char *)((ulonglong)local_1c0 & 0xffffffff00000000);
  local_1c8 = (char **)CONCAT44(local_1c8._4_4_,fVar30);
  FUN_1803fe590(lVar4,param_9,local_188,
                DAT_180960f44 & 0xffffff | (int)(longlong)(*pfVar14 * DAT_1808acb94 + fVar5) << 0x18
               );
  if (param_7 == '\0') {
    puVar15 = (undefined8 *)FUN_180024b50(&local_108,local_108);
    fVar18 = 2.8026e-45;
  }
  else {
    uStack_120 = 0;
    local_118 = _DAT_1808ad410;
    uStack_110 = _UNK_1808ad418;
    local_128 = 0;
    puVar15 = &local_128;
    fVar18 = 1.4013e-45;
  }
  local_1c8 = (char **)CONCAT44(local_1c8._4_4_,fVar29 - fVar23);
  local_160 = fVar18;
  FUN_180301ff0(lVar4,puVar15,param_9,local_188);
  if (((uint)fVar18 & 2) != 0) {
    fVar18 = (float)((uint)fVar18 & 0xfffffffd);
    FUN_18000f890(&local_108);
  }
  if (((uint)fVar18 & 1) != 0) {
    FUN_18000f890(&local_128);
  }
  uVar21 = (ulonglong)DAT_180960ef8;
  uVar12 = FUN_1802b38e0((int)(longlong)((float)(DAT_180960ef8 >> 0x18) * DAT_1808ac140 + fVar5) <<
                         0x18 | DAT_180960ef8 & 0xffffff,
                         (int)(longlong)((float)(DAT_1809f54bc >> 0x18) * DAT_1808ac1b0 + fVar5) <<
                         0x18 | DAT_1809f54bc & 0xffffff,fVar23);
  uVar13 = FUN_1802b38e0(DAT_180960eec,uVar12,(int)uVar27);
  fVar25 = param_10 + fVar25;
  if (0xffffff < uVar13) {
    local_108 = _DAT_1808add80;
    uStack_100 = _UNK_1808add88;
    local_1b8 = (char *)CONCAT44(local_1b8._4_4_,fVar29);
    local_1c0 = (char *)((ulonglong)local_1c0 & 0xffffffff00000000);
    local_1c8 = (char **)&local_108;
    FUN_18036bcb0(lVar4,param_9,local_188,uVar13);
    uVar21 = (ulonglong)DAT_180960ef8;
    fVar25 = local_188[0];
  }
  pcVar20 = local_158;
  if (0xf < *(ulonglong *)(local_158 + 0x18)) {
    pcVar20 = *(char **)local_158;
  }
  uVar13 = FUN_1802b38e0(uVar21 & 0xffffffff,DAT_180960ec8,(int)uVar27);
  uVar12 = DAT_1808ac930;
  local_188[1] = param_9[1] + _DAT_1808ac848;
  local_188[0] = *param_9 + fVar30;
  lVar17 = DAT_181107a08;
  if (DAT_181107a08 == 0) {
    lVar17 = *(longlong *)(DAT_180ca0a50 + 0x11f0);
  }
  if ((((uVar13 & 0xff000000) != 0) && (pcVar20 != (char *)0x0)) && (*pcVar20 != '\0')) {
    if (lVar17 == 0) {
      lVar17 = *(longlong *)(*(longlong *)(lVar4 + 0x38) + 0x18);
    }
    local_158 = *(char **)(lVar4 + 0x60);
    uStack_150 = *(undefined8 *)(lVar4 + 0x68);
    local_1a0 = 0;
    local_1a8 = (float *)((ulonglong)local_1a8 & 0xffffffff00000000);
    local_1b0 = (float *)0x0;
    local_1c0 = (char *)&local_158;
    local_1c8 = (char **)CONCAT44(local_1c8._4_4_,uVar13);
    local_1b8 = pcVar20;
    FUN_18040a900(lVar17,lVar4,DAT_1808ac930,local_188);
  }
  uVar24 = DAT_1808ac8d4;
  fVar18 = param_9[1] + _DAT_1808ac834;
  if (param_6 == 0) {
    fVar25 = (fVar25 - fVar30) - DAT_1808aca68;
    if (pcVar9 != (char *)0x0) {
      uVar12 = *(undefined4 *)(lVar4 + 0x20);
      local_188[0] = 20.0;
      local_188[1] = 20.0;
      cVar10 = *pcVar9;
      local_160 = fVar25;
      local_15c = fVar18;
      local_190 = FUN_1802b38e0(DAT_180960f38,DAT_1809f54bc,fVar23);
      local_1c8 = (char **)0x1806ea940;
      if (cVar10 != '\0') {
        local_1c8 = (char **)0x1806ea400;
      }
      pcVar20 = "fa_toggle_off";
      if (cVar10 != '\0') {
        pcVar20 = "fa_toggle_on";
      }
      local_198 = 500;
      local_1a0 = 8;
      local_1a8 = local_188;
      local_1b0 = &local_160;
      local_1b8 = (char *)CONCAT44(local_1b8._4_4_,uVar24);
      local_1c0._0_4_ = DAT_1808acc0c;
      cVar10 = FUN_1803243c0(lVar4,"##enabled",0,pcVar20);
      if (cVar10 != '\0') {
        *pcVar9 = *pcVar9 == '\0';
        bVar19 = 3;
      }
      local_158 = *(char **)(DAT_180ca0a50 + 0x1efc);
      local_108 = *(undefined8 *)(DAT_180ca0a50 + 0x1ef4);
      uVar11 = FUN_1803dd930(0);
      local_1c0 = (char *)((ulonglong)local_1c0._4_4_ << 0x20);
      local_1c8 = &local_158;
      FUN_1802b56a0("Enabled",0,uVar11,&local_108);
      FUN_1802b3c30(lVar4,uVar12,*(undefined4 *)(lVar4 + 0x20),local_170);
    }
    uVar6 = DAT_1808acbe4;
    uVar12 = *(undefined4 *)(lVar4 + 0x20);
    local_188[0] = 20.0;
    local_188[1] = 20.0;
    local_170 = fVar25 + DAT_1808ac950 + DAT_1808ac750;
    local_190 = DAT_180960f38;
    local_198 = 500;
    local_1a0 = 8;
    local_1a8 = local_188;
    local_1b0 = &local_170;
    local_1b8 = (char *)CONCAT44(local_1b8._4_4_,uVar24);
    local_1c0 = (char *)CONCAT44(local_1c0._4_4_,DAT_1808acbe4);
    local_1c8 = (char **)0x180746130;
    fStack_16c = fVar18;
    cVar10 = FUN_1803243c0(lVar4,"##more",0,"fa_ellipsis");
    if (cVar10 != '\0') {
      FUN_1802b4d80("##tile_menu");
    }
    FUN_1802b3c30(lVar4,uVar12,*(undefined4 *)(lVar4 + 0x20),local_180[0]);
    DAT_180cd04ab = 1;
    local_188[0] = 7.0;
    local_188[1] = 7.0;
    cVar10 = FUN_1802b5260("##tile_menu",local_188);
    if (cVar10 != '\0') {
      local_188[0] = 0.0;
      local_188[1] = 0.0;
      FUN_1803d89a0(0xe,local_188);
      local_1c8 = (char **)((ulonglong)local_1c8 & 0xffffffffffffff00);
      cVar10 = FUN_1802c63e0(&DAT_18075c420,"ambience_copy",
                             "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 448 512\" width=\"448\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M208 0L332 0C344 0 357 6 366 15L433 82C442 91 448 104 448 116L448 336C448 363 426 384 400 384L208 384C181 384 160 363 160 336L160 48C160 22 181 0 208 0ZM48 128L128 128L128 192L64 192L64 448L256 448L256 416L320 416L320 464C320 490 298 512 272 512L48 512C21 512 0 490 0 464L0 176C0 150 21 128 48 128Z\"/></svg>"
                             ,uVar6);
      if (cVar10 != '\0') {
        bVar19 = 4;
        FUN_1803ee1f0();
      }
      uVar12 = DAT_1808acc00;
      if (DAT_180cd04af != '\0') {
        local_1c8 = (char **)((ulonglong)local_1c8 & 0xffffffffffffff00);
        cVar10 = FUN_1802c63e0("paste","ambience_paste",
                               "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 512 512\" width=\"512\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M160 0C136 0 115 13 104 32L47 32C21 32 0 54 0 80L0 400C0 427 21 448 47 448L191 448L191 176C191 132 227 96 272 96L320 96L320 80C320 54 298 32 272 32L215 32C204 13 183 0 160 0ZM272 128C245 128 224 150 224 176L224 448L224 464C224 490 245 512 272 512L464 512C490 512 512 490 512 464L512 244C512 232 506 219 497 210L430 143C421 134 408 128 396 128L320 128L272 128ZM160 40C173 40 184 51 184 64C184 78 173 88 160 88C146 88 136 78 136 64C136 51 146 40 160 40Z\"/></svg>"
                               ,DAT_1808acc00);
        if (cVar10 != '\0') {
          FUN_1803ee1f0();
          bVar19 = 5;
        }
      }
      local_1c8 = (char **)((ulonglong)local_1c8 & 0xffffffffffffff00);
      cVar10 = FUN_1802c63e0("reset","ambience_reset",
                             "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 512 512\" width=\"512\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M48 224L40 224C26 224 16 214 16 200L16 72C16 63 21 54 30 50C39 47 50 49 57 55L98 97C186 11 327 11 414 98C501 186 501 327 414 415C326 501 185 501 97 415C85 402 85 382 97 370C110 357 130 357 142 370C205 432 306 432 369 370C431 307 431 206 369 143C307 81 206 81 143 142L185 183C191 190 193 201 190 210C186 219 177 224 168 224L48 224L48 224Z\"/></svg>"
                             ,uVar12);
      if (cVar10 != '\0') {
        bVar19 = 6;
        FUN_1803ee1f0();
      }
      if (param_8 != '\0') {
        local_1c8 = (char **)CONCAT71(local_1c8._1_7_,1);
        cVar10 = FUN_1802c63e0("delete","ambience_delete",
                               "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 448 512\" width=\"448\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M135 18C140 7 151 0 163 0L284 0C296 0 307 7 312 18L320 32L416 32C433 32 448 47 448 64C448 82 433 96 416 96L32 96C14 96 0 82 0 64C0 47 14 32 32 32L128 32L135 18ZM32 128L416 128L416 448C416 483 387 512 352 512L96 512C60 512 32 483 32 448L32 128ZM128 192C119 192 112 200 112 208L112 432C112 441 119 448 128 448C136 448 144 441 144 432L144 208C144 200 136 192 128 192ZM224 192C215 192 208 200 208 208L208 432C208 441 215 448 224 448C232 448 240 441 240 432L240 208C240 200 232 192 224 192ZM320 192C311 192 304 200 304 208L304 432C304 441 311 448 320 448C328 448 336 441 336 432L336 208C336 200 328 192 320 192Z\"/></svg>"
                               ,uVar6);
        if (cVar10 != '\0') {
          FUN_1803ee1f0();
          bVar19 = 7;
        }
      }
      FUN_1803d8a40(1);
      FUN_1802b5590();
    }
  }
  else {
    lVar17 = DAT_181107a18;
    if ((DAT_181107a18 == 0) && (lVar17 = DAT_181107a08, DAT_181107a08 == 0)) {
      lVar17 = *(longlong *)(DAT_180ca0a50 + 0x11f0);
    }
    local_198 = 0;
    local_1a8 = (float *)0x0;
    local_1b0 = (float *)0x0;
    local_1b8 = (char *)0x0;
    local_1c0 = "   Add";
    local_1c8 = (char **)((ulonglong)local_1c8 & 0xffffffff00000000);
    FUN_18040a2f0(&local_158,lVar17,uVar12,DAT_1808acd08);
    local_170 = (float)FUN_18053fc00(local_158._0_4_ + _DAT_1808ac8f4 + DAT_1808ac2f0);
    local_170 = local_170 + fVar30;
    local_188[1] = fVar18;
    local_188[0] = (fVar25 - fVar30) - local_170;
    fStack_16c = 20.0;
    local_190 = DAT_180960f38;
    local_198 = 500;
    local_1a0 = 8;
    local_1a8 = &local_170;
    local_1b0 = local_188;
    local_1b8 = (char *)((ulonglong)local_1b8 & 0xffffffff00000000);
    local_1c0 = (char *)((ulonglong)local_1c0 & 0xffffffff00000000);
    local_1c8 = (char **)0x0;
    cVar10 = FUN_1803243c0(lVar4,"##add",&DAT_18058b643,0);
    if (cVar10 != '\0') {
      bVar19 = 2;
    }
    if ((*(int *)(DAT_180ca0a50 + 0x1578) == 0) ||
       (*(int *)(DAT_180ca0a50 + 0x1578) != *(int *)(DAT_180ca0a50 + 0x1ee8))) {
      cVar10 = FUN_1803dd930(0);
      if (cVar10 == '\0') {
        fVar29 = 0.0;
      }
      else {
        fVar29 = fVar5;
      }
    }
    local_180[0] = *(int *)(DAT_180ca0a50 + 0x1ee8);
    local_128 = CONCAT44(fVar29,fVar29);
    uStack_120 = (ulonglong)(uint)fVar29;
    local_118 = CONCAT44(local_118._4_4_,0xffffffff);
    FUN_18034a380(local_180[0],&local_158,local_180,&local_128);
    uVar24 = FUN_1802b3660(local_158 + 0x14);
    uVar13 = FUN_1802b38e0((int)(longlong)((float)(DAT_180960f38 >> 0x18) * DAT_1808ac254 + fVar5)
                           << 0x18 | DAT_180960f38 & 0xffffff,DAT_180960f38,uVar24);
    fVar25 = (float)FUN_18053fc00();
    uVar24 = FUN_18053fc00(local_188[1] + _DAT_1808ac3a8);
    local_188[1] = (float)uVar24;
    local_188[0] = fVar25;
    local_1b8 = (char *)CONCAT44(local_1b8._4_4_,uVar13);
    local_1c0 = (char *)CONCAT44(local_1c0._4_4_,DAT_1808ac8d4);
    local_1c8 = (char **)local_188;
    FUN_180322fd0(lVar4,"fa_ambience_add",&DAT_180745d40,DAT_1808acc0c);
    local_188[0] = fVar25 + _DAT_1808ac8f4;
    lVar17 = DAT_181107a18;
    if ((DAT_181107a18 == 0) && (lVar17 = DAT_181107a08, DAT_181107a08 == 0)) {
      lVar17 = *(longlong *)(DAT_180ca0a50 + 0x11f0);
    }
    if ((uVar13 & 0xff000000) != 0) {
      if (lVar17 == 0) {
        lVar17 = *(longlong *)(*(longlong *)(lVar4 + 0x38) + 0x18);
      }
      local_158 = *(char **)(lVar4 + 0x60);
      uStack_150 = *(undefined8 *)(lVar4 + 0x68);
      local_1a0 = 0;
      local_1a8 = (float *)((ulonglong)local_1a8 & 0xffffffff00000000);
      local_1b0 = (float *)0x0;
      local_1b8 = "   Add";
      local_1c0 = (char *)&local_158;
      local_1c8 = (char **)CONCAT44(local_1c8._4_4_,uVar13);
      FUN_18040a900(lVar17,lVar4,uVar12,local_188);
    }
  }
  iVar2 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
  if (iVar2 < 2) {
    FUN_1803ebc00("Calling PopID() too many times!");
  }
  else {
    *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar2 + -1;
  }
  return bVar19;
}



/* ===== 1803033d0 FUN_1803033d0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1803033d0(void)

{
  int iVar1;
  undefined8 *puVar2;
  char ***pppcVar3;
  char *_Str1;
  undefined1 auStack_58 [32];
  undefined *local_38;
  char ***local_30 [2];
  undefined8 local_20;
  ulonglong local_18;
  ulonglong local_10;
  
  local_10 = DAT_180919500 ^ (ulonglong)auStack_58;
  local_38 = &DAT_1809ec010;
  iVar1 = FUN_1804e4d70(&DAT_1809ec010);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809ec05c == 0x7fffffff) {
    DAT_1809ec05c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  puVar2 = &DAT_1809ec060;
  if (DAT_180cc3e18 != '\0') {
    puVar2 = (undefined8 *)&DAT_1809ec080;
  }
  FUN_180024b50(local_30,puVar2);
  FUN_1804e4e90(&DAT_1809ec010);
  if (local_18 < 0x10) {
    pppcVar3 = (char ***)local_30;
  }
  else {
    if (local_30[0] == (char ***)0x0) goto LAB_1803034d3;
    pppcVar3 = local_30[0];
  }
  if (*(char *)pppcVar3 != '\0') {
    _Str1 = &DAT_18093d3a0;
    do {
      iVar1 = strcmp(_Str1,(char *)pppcVar3);
      if (iVar1 == 0) {
        if (_Str1 != (char *)0xffffffffffffffc0) {
          DAT_181107478 = 2;
          pppcVar3 = (char ***)local_30;
          if (0xf < local_18) {
            pppcVar3 = local_30[0];
          }
          FUN_180029840(&DAT_1809f73c0,pppcVar3,local_20);
        }
        break;
      }
      _Str1 = _Str1 + 0x614;
    } while (_Str1 != &DAT_18094f760);
  }
LAB_1803034d3:
  FUN_18000f890(local_30);
  return;
}



/* ===== 180303520 FUN_180303520 ===== */

char * FUN_180303520(void)

{
  int iVar1;
  char *_Str1;
  char *_Str2;
  
  if (DAT_181107478 != 2) goto LAB_1803035a0;
  if (DAT_1809f73d8 < 0x10) {
    _Str2 = (char *)&DAT_1809f73c0;
LAB_180303557:
    if (*_Str2 != '\0') {
      _Str1 = &DAT_18093d3a0;
      do {
        iVar1 = strcmp(_Str1,_Str2);
        if (iVar1 == 0) {
          if (_Str1 + 0x40 != (char *)0x0) {
            return _Str1 + 0x40;
          }
          break;
        }
        _Str1 = _Str1 + 0x614;
      } while (_Str1 != &DAT_18094f760);
    }
  }
  else {
    _Str2 = DAT_1809f73c0;
    if (DAT_1809f73c0 != (char *)0x0) goto LAB_180303557;
  }
  DAT_181107478 = 0;
LAB_1803035a0:
  return &DAT_18093c7f8;
}



/* ===== 1803035c0 FUN_1803035c0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1803035c0(int param_1,longlong param_2,int param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined1 local_388 [4];
  undefined4 uStack_384;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  undefined4 local_378;
  undefined4 uStack_374;
  undefined1 uStack_370;
  undefined4 uStack_36c;
  undefined4 local_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined1 uStack_35c;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined1 local_348;
  undefined8 uStack_344;
  undefined4 uStack_33c;
  undefined4 local_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined1 uStack_32c;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined4 local_308;
  undefined1 uStack_304;
  undefined8 uStack_300;
  undefined4 local_2f8;
  undefined1 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined4 local_2c8;
  undefined8 uStack_2c4;
  undefined1 auStack_2bc [192];
  undefined1 local_1fc;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined4 local_1e8;
  undefined4 local_1e4;
  undefined2 local_1e0;
  undefined4 local_1dc;
  undefined4 local_1d8;
  undefined4 local_1d4;
  undefined1 local_1d0;
  undefined4 local_1cc;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined4 local_158;
  undefined1 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined1 local_130;
  undefined4 local_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined1 local_118;
  undefined8 local_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined2 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined1 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined1 local_c4;
  undefined4 local_c0;
  undefined8 local_bc;
  undefined2 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined2 local_88;
  undefined1 local_86;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined8 local_5c;
  undefined2 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  
  lVar10 = DAT_1811073b8;
  uVar2 = _UNK_1808adc38;
  uVar1 = _DAT_1808adc30;
  if (param_1 != 0) {
    if (param_1 == 1) {
      DAT_181107478 = param_3;
      if (param_4 != &DAT_1809f73c0) {
        if ((ulonglong)param_4[3] < 0x10) {
          FUN_180029840(&DAT_1809f73c0,param_4,param_4[2]);
        }
        else {
          FUN_180029840(&DAT_1809f73c0,*param_4,param_4[2]);
        }
      }
    }
    else if (param_1 == 3) {
      FUN_1803033d0();
    }
    else if (param_2 != 0) {
      if (param_1 == 4) {
        lVar10 = 6;
        puVar5 = (undefined8 *)&DAT_1809f5510;
        puVar6 = (undefined8 *)(param_2 + 0x264);
        do {
          puVar9 = puVar6;
          puVar7 = puVar5;
          uVar1 = puVar9[1];
          uVar2 = puVar9[2];
          uVar3 = puVar9[3];
          *puVar7 = *puVar9;
          puVar7[1] = uVar1;
          uVar1 = puVar9[4];
          uVar4 = puVar9[5];
          puVar7[2] = uVar2;
          puVar7[3] = uVar3;
          uVar2 = puVar9[6];
          uVar3 = puVar9[7];
          puVar7[4] = uVar1;
          puVar7[5] = uVar4;
          uVar1 = puVar9[8];
          uVar4 = puVar9[9];
          puVar7[6] = uVar2;
          puVar7[7] = uVar3;
          uVar2 = puVar9[10];
          uVar3 = puVar9[0xb];
          puVar7[8] = uVar1;
          puVar7[9] = uVar4;
          uVar1 = puVar9[0xc];
          uVar4 = puVar9[0xd];
          puVar7[10] = uVar2;
          puVar7[0xb] = uVar3;
          uVar2 = puVar9[0xe];
          uVar3 = puVar9[0xf];
          puVar7[0xc] = uVar1;
          puVar7[0xd] = uVar4;
          puVar7[0xe] = uVar2;
          puVar7[0xf] = uVar3;
          lVar10 = lVar10 + -1;
          puVar5 = puVar7 + 0x10;
          puVar6 = puVar9 + 0x10;
        } while (lVar10 != 0);
        uVar1 = puVar9[0x11];
        DAT_180cd04af = '\x01';
        uVar2 = puVar9[0x12];
        uVar3 = puVar9[0x13];
        puVar7[0x10] = puVar9[0x10];
        puVar7[0x11] = uVar1;
        uVar1 = puVar9[0x14];
        uVar4 = puVar9[0x15];
        puVar7[0x12] = uVar2;
        puVar7[0x13] = uVar3;
        uVar2 = puVar9[0x16];
        uVar3 = puVar9[0x17];
        puVar7[0x14] = uVar1;
        puVar7[0x15] = uVar4;
        uVar1 = puVar9[0x18];
        uVar4 = puVar9[0x19];
        puVar7[0x16] = uVar2;
        puVar7[0x17] = uVar3;
        uVar2 = puVar9[0x1a];
        uVar3 = puVar9[0x1b];
        puVar7[0x18] = uVar1;
        puVar7[0x19] = uVar4;
        uVar1 = puVar9[0x1c];
        uVar4 = puVar9[0x1d];
        puVar7[0x1a] = uVar2;
        puVar7[0x1b] = uVar3;
        puVar7[0x1c] = uVar1;
        puVar7[0x1d] = uVar4;
      }
      else if (param_1 == 5) {
        if (DAT_180cd04af != '\0') {
          lVar10 = 6;
          puVar5 = (undefined8 *)&DAT_1809f5510;
          puVar6 = (undefined8 *)(param_2 + 0x264);
          do {
            puVar9 = puVar6;
            puVar7 = puVar5;
            uVar1 = puVar7[1];
            uVar2 = puVar7[2];
            uVar3 = puVar7[3];
            *puVar9 = *puVar7;
            puVar9[1] = uVar1;
            uVar1 = puVar7[4];
            uVar4 = puVar7[5];
            puVar9[2] = uVar2;
            puVar9[3] = uVar3;
            uVar2 = puVar7[6];
            uVar3 = puVar7[7];
            puVar9[4] = uVar1;
            puVar9[5] = uVar4;
            uVar1 = puVar7[8];
            uVar4 = puVar7[9];
            puVar9[6] = uVar2;
            puVar9[7] = uVar3;
            uVar2 = puVar7[10];
            uVar3 = puVar7[0xb];
            puVar9[8] = uVar1;
            puVar9[9] = uVar4;
            uVar1 = puVar7[0xc];
            uVar4 = puVar7[0xd];
            puVar9[10] = uVar2;
            puVar9[0xb] = uVar3;
            uVar2 = puVar7[0xe];
            uVar3 = puVar7[0xf];
            puVar9[0xc] = uVar1;
            puVar9[0xd] = uVar4;
            puVar9[0xe] = uVar2;
            puVar9[0xf] = uVar3;
            lVar10 = lVar10 + -1;
            puVar5 = puVar7 + 0x10;
            puVar6 = puVar9 + 0x10;
          } while (lVar10 != 0);
          uVar1 = puVar7[0x11];
          uVar2 = puVar7[0x12];
          uVar3 = puVar7[0x13];
          puVar9[0x10] = puVar7[0x10];
          puVar9[0x11] = uVar1;
          uVar1 = puVar7[0x14];
          uVar4 = puVar7[0x15];
          puVar9[0x12] = uVar2;
          puVar9[0x13] = uVar3;
          uVar2 = puVar7[0x16];
          uVar3 = puVar7[0x17];
          puVar9[0x14] = uVar1;
          puVar9[0x15] = uVar4;
          uVar1 = puVar7[0x18];
          uVar4 = puVar7[0x19];
          puVar9[0x16] = uVar2;
          puVar9[0x17] = uVar3;
          uVar2 = puVar7[0x1a];
          uVar3 = puVar7[0x1b];
          puVar9[0x18] = uVar1;
          puVar9[0x19] = uVar4;
          uVar1 = puVar7[0x1c];
          uVar4 = puVar7[0x1d];
          puVar9[0x1a] = uVar2;
          puVar9[0x1b] = uVar3;
          puVar9[0x1c] = uVar1;
          puVar9[0x1d] = uVar4;
        }
      }
      else if (param_1 == 6) {
        local_358 = _DAT_1808adc30;
        uStack_350 = _UNK_1808adc38;
        local_318 = _DAT_1808adc30;
        uStack_310 = _UNK_1808adc38;
        local_2e8 = _DAT_1808adc30;
        uStack_2e0 = _UNK_1808adc38;
        local_2d8 = _DAT_1808adc30;
        uStack_2d0 = _UNK_1808adc38;
        local_388[0] = 0;
        uStack_384 = 0x3f0c8b44;
        uStack_380 = 0x3f0c8b44;
        uStack_37c = 0x3f20a3d7;
        local_378 = 0x3f800000;
        uStack_374 = 100;
        uStack_370 = 0;
        uStack_36c = 0x3f0c8b44;
        local_368 = 0x3f0c8b44;
        uStack_364 = 0x3f20a3d7;
        uStack_360 = 0x3f800000;
        uStack_35c = 0;
        local_348 = 0;
        uStack_344 = 0;
        uStack_33c = 0xbf000000;
        local_338 = 0x3f800000;
        uStack_334 = 100;
        uStack_330 = 100;
        uStack_32c = 0;
        local_328 = _DAT_1808adb60;
        uStack_320 = _UNK_1808adb68;
        local_308 = 0;
        uStack_304 = 0;
        uStack_300 = 0;
        local_2f8 = 100;
        uStack_2f4 = 0;
        uStack_2f0 = 0x3f800000;
        uStack_2ec = 0x3f800000;
        local_2c8 = 0x3f800000;
        uStack_2c4 = 0x3f800000;
        FUN_180540170(auStack_2bc,0,0xc0);
        local_1f8 = _DAT_1808ada00;
        uStack_1f0 = _UNK_1808ada08;
        local_1c8 = _DAT_1808ad810;
        uStack_1c0 = _UNK_1808ad818;
        local_128 = _DAT_1808ad500;
        uStack_120 = _UNK_1808ad508;
        local_1fc = 0;
        local_1e8 = 0x19;
        local_1e4 = 0x40200000;
        local_1e0 = 1;
        local_1dc = 0xfffffda8;
        local_1d8 = 600;
        local_1d4 = 0x3f800000;
        local_1d0 = 0;
        local_1cc = 0;
        local_1b8 = _DAT_1808ad770;
        uStack_1b0 = _UNK_1808ad778;
        local_1a8 = 0x14;
        local_1a4 = 0x3f800000;
        local_1a0 = 0x3f800000;
        local_19c = 0x3f800000;
        local_198 = uVar1;
        uStack_190 = uVar2;
        local_188 = uVar1;
        uStack_180 = uVar2;
        local_178 = uVar1;
        uStack_170 = uVar2;
        local_168 = uVar1;
        uStack_160 = uVar2;
        local_158 = 0x3f800000;
        local_154 = 0;
        local_150 = 0x3f800000;
        local_14c = 0x3f800000;
        local_148 = 0x3f800000;
        local_144 = 0x3f800000;
        local_140 = 0xffffffe7;
        local_13c = 0x46;
        local_138 = 0x32;
        local_134 = 0x50;
        local_130 = 0;
        local_12c = 0x14;
        local_118 = 0;
        local_114 = 0;
        local_10c = 0;
        local_48 = uVar1;
        uStack_40 = uVar2;
        local_108 = 0;
        uStack_100 = 0;
        lVar10 = 6;
        local_a8 = _DAT_1808ada70;
        uStack_a0 = _UNK_1808ada78;
        local_78 = _DAT_1808adbe0;
        uStack_70 = _UNK_1808adbe8;
        local_f8 = 0;
        local_f4 = 0;
        local_f0 = 0;
        local_ec = 1;
        local_e8 = 0xe;
        local_e4 = 8;
        local_e0 = 0x14;
        local_dc = 0;
        local_d8 = 0xffffffff;
        local_d4 = 0x40400000;
        local_d0 = 0x3f000000;
        local_cc = 0x3e4ccccd;
        local_c8 = 0x425c0000;
        local_c4 = 0;
        local_c0 = 100;
        local_bc = 100;
        local_b4 = 0;
        local_b0 = 0x3f800000;
        local_ac = 0x3f800000;
        local_98 = _DAT_1808ada30;
        uStack_90 = _UNK_1808ada38;
        local_88 = 1;
        local_86 = 0;
        local_84 = 0x3f800000;
        local_80 = 0x3f800000;
        local_7c = 0x3f800000;
        local_68 = 0x3e8c8b44;
        local_64 = 100;
        local_60 = 0x50;
        local_5c = 100;
        local_54 = 1;
        local_50 = 0x3f800000;
        local_4c = 0x3f800000;
        local_38 = 0x3f800000;
        local_30 = 0x32;
        local_2c = 100;
        local_28 = 100;
        local_20 = 0;
        local_1c = 0;
        puVar5 = (undefined8 *)(param_2 + 0x264);
        puVar6 = (undefined8 *)local_388;
        do {
          puVar9 = puVar6;
          puVar7 = puVar5;
          uVar1 = puVar9[1];
          uVar2 = puVar9[2];
          uVar3 = puVar9[3];
          *puVar7 = *puVar9;
          puVar7[1] = uVar1;
          uVar1 = puVar9[4];
          uVar4 = puVar9[5];
          puVar7[2] = uVar2;
          puVar7[3] = uVar3;
          uVar2 = puVar9[6];
          uVar3 = puVar9[7];
          puVar7[4] = uVar1;
          puVar7[5] = uVar4;
          uVar1 = puVar9[8];
          uVar4 = puVar9[9];
          puVar7[6] = uVar2;
          puVar7[7] = uVar3;
          uVar2 = puVar9[10];
          uVar3 = puVar9[0xb];
          puVar7[8] = uVar1;
          puVar7[9] = uVar4;
          uVar1 = puVar9[0xc];
          uVar4 = puVar9[0xd];
          puVar7[10] = uVar2;
          puVar7[0xb] = uVar3;
          uVar2 = puVar9[0xe];
          uVar3 = puVar9[0xf];
          puVar7[0xc] = uVar1;
          puVar7[0xd] = uVar4;
          puVar7[0xe] = uVar2;
          puVar7[0xf] = uVar3;
          lVar10 = lVar10 + -1;
          puVar5 = puVar7 + 0x10;
          puVar6 = puVar9 + 0x10;
        } while (lVar10 != 0);
        uVar1 = puVar9[0x11];
        uVar2 = puVar9[0x12];
        uVar3 = puVar9[0x13];
        puVar7[0x10] = puVar9[0x10];
        puVar7[0x11] = uVar1;
        uVar1 = puVar9[0x14];
        uVar4 = puVar9[0x15];
        puVar7[0x12] = uVar2;
        puVar7[0x13] = uVar3;
        uVar2 = puVar9[0x16];
        uVar3 = puVar9[0x17];
        puVar7[0x14] = uVar1;
        puVar7[0x15] = uVar4;
        uVar1 = puVar9[0x18];
        uVar4 = puVar9[0x19];
        puVar7[0x16] = uVar2;
        puVar7[0x17] = uVar3;
        uVar2 = puVar9[0x1a];
        uVar3 = puVar9[0x1b];
        puVar7[0x18] = uVar1;
        puVar7[0x19] = uVar4;
        uVar1 = puVar9[0x1c];
        uVar4 = puVar9[0x1d];
        puVar7[0x1a] = uVar2;
        puVar7[0x1b] = uVar3;
        puVar7[0x1c] = uVar1;
        puVar7[0x1d] = uVar4;
      }
      else if (((param_1 == 7) && (param_3 == 2)) &&
              (lVar8 = FUN_180026970(DAT_1811073b0,DAT_1811073b8,param_4), lVar8 == lVar10)) {
        if (lVar10 == DAT_1811073c0) {
          FUN_180028f00(&DAT_1811073b0,lVar10,param_4);
        }
        else {
          FUN_180024b50(lVar10,param_4);
          DAT_1811073b8 = DAT_1811073b8 + 0x20;
        }
      }
    }
  }
  return;
}



/* ===== 180303cb0 FUN_180303cb0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180303cb0(float *param_1,float param_2)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 ****ppppuVar6;
  size_t sVar7;
  ulonglong uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  longlong lVar12;
  size_t sVar13;
  char ****ppppcVar14;
  undefined8 ****_Buf1;
  undefined8 ****ppppuVar15;
  undefined8 *puVar16;
  undefined8 ****ppppuVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  char *_Str1;
  undefined1 *puVar20;
  char *_Str;
  float fVar21;
  undefined1 auStack_238 [8];
  undefined1 auStack_230 [24];
  undefined1 *local_218;
  uint local_210;
  undefined1 local_208;
  undefined1 local_200;
  float *local_1f8;
  float local_1f0;
  float local_1e8;
  float local_1e4;
  float local_1e0 [2];
  undefined8 local_1d8;
  float local_1d0;
  float local_1cc;
  undefined4 local_1c8;
  float local_1c4;
  float local_1c0;
  float local_1bc;
  float local_1b8;
  undefined8 local_1b0;
  undefined8 *local_1a8;
  float *local_1a0;
  float *local_198;
  float *local_190;
  undefined4 *local_188;
  undefined8 ****local_180;
  undefined8 uStack_178;
  size_t local_170;
  ulonglong local_168;
  undefined8 ****local_160;
  undefined8 uStack_158;
  size_t local_150;
  ulonglong local_148;
  char ****local_140 [2];
  longlong local_130;
  ulonglong local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined1 local_e0 [32];
  undefined1 local_c0 [32];
  ulonglong local_a0;
  
  local_a0 = DAT_180919500 ^ (ulonglong)auStack_238;
  local_1d0 = 0.0;
  local_1d8 = &DAT_1809ec010;
  local_1e0[0] = param_2;
  iVar9 = FUN_1804e4d70(&DAT_1809ec010);
  puVar20 = auStack_238;
  if (iVar9 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809ec05c == 0x7fffffff) {
LAB_18030432f:
    DAT_1809ec05c = DAT_1809ec05c + -1;
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar20 + -8) = &UNK_180304341;
    FUN_1804e4a90(6);
  }
  puVar16 = &DAT_1809ec060;
  if (DAT_180cc3e18 != '\0') {
    puVar16 = (undefined8 *)&DAT_1809ec080;
  }
  FUN_180024b50(local_140,puVar16);
  FUN_1804e4e90(&DAT_1809ec010);
  lVar12 = DAT_180ca0a50;
  fVar3 = DAT_1808aca6c;
  local_1e8 = param_1[1];
  local_1e4 = *param_1;
  local_1c8 = 0x4236d2f2;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  local_1b0 = *(undefined8 *)(*(longlong *)(lVar12 + 0x14f8) + 0x2c8);
  uStack_178 = 0;
  local_170 = 0;
  local_168 = 0xf;
  local_180 = (undefined8 ****)0x0;
  uStack_f8 = 0;
  local_f0 = 0;
  local_e8 = 0xf;
  local_100 = 0;
  uStack_118 = 0;
  local_110 = 6;
  local_108 = 0xf;
  local_120 = (ulonglong)CONCAT24(s_Global_1806f2a74._4_2_,s_Global_1806f2a74._0_4_);
  local_1f0 = local_1e0[0];
  local_1f8 = &local_1c4;
  local_200 = 0;
  local_208 = 1;
  local_210 = local_210 & 0xffffff00;
  local_218 = &DAT_18093c7f8;
  local_1c4 = local_1e4;
  local_1c0 = local_1e8;
  uVar10 = FUN_180302650("global",&local_120,&local_100,DAT_181107478 == 0);
  FUN_1803035c0(uVar10,&DAT_18093c7f8,0,&local_180);
  FUN_18000f890(&local_120);
  FUN_18000f890(&local_100);
  FUN_18000f890(&local_180);
  local_1e8 = local_1e8 + fVar3;
  local_1a8 = &local_1b0;
  local_1a0 = &local_1e8;
  local_198 = &local_1e4;
  local_190 = local_1e0;
  local_188 = &local_1c8;
  uStack_178 = 0;
  local_170 = 0;
  local_168 = 0xf;
  local_180 = (undefined8 ****)0x0;
  _Str = &DAT_18093d3a0;
  if (local_130 == 0) goto LAB_180304089;
  ppppcVar14 = (char ****)local_140;
  if (0xf < local_128) {
    ppppcVar14 = local_140[0];
  }
  FUN_180029840(&local_180,ppppcVar14);
  if (local_128 < 0x10) {
    ppppcVar14 = (char ****)local_140;
LAB_180304012:
    if (*(char *)ppppcVar14 != '\0') {
      _Str1 = &DAT_18093d3a0;
      do {
        iVar9 = strcmp(_Str1,(char *)ppppcVar14);
        if (iVar9 == 0) {
          if (_Str1 != (char *)0xffffffffffffffc0) {
            FUN_180304350(&local_1a8,local_140);
            goto LAB_180304089;
          }
          break;
        }
        _Str1 = _Str1 + 0x614;
      } while (_Str1 != &DAT_18094f760);
    }
  }
  else {
    ppppcVar14 = local_140[0];
    if (local_140[0] != (char ****)0x0) goto LAB_180304012;
  }
  fVar4 = local_1e0[0];
  local_1bc = local_1e4;
  local_1b8 = local_1e8;
  uVar11 = FUN_1803019e0(local_c0,local_140);
  local_1d0 = 7.00649e-45;
  puVar16 = (undefined8 *)FUN_180066a20(local_e0,&DAT_1807632e0,local_140);
  local_1d0 = 9.80909e-45;
  if (0xf < (ulonglong)puVar16[3]) {
    puVar16 = (undefined8 *)*puVar16;
  }
  local_1f0 = fVar4;
  local_1f8 = &local_1bc;
  local_200 = 0;
  local_208 = 0;
  local_210 = CONCAT31(local_210._1_3_,1);
  local_218 = (undefined1 *)0x0;
  iVar9 = FUN_180302650(puVar16,uVar11,local_140,0);
  if (iVar9 == 2) {
    ppppcVar14 = (char ****)local_140;
    if (0xf < local_128) {
      ppppcVar14 = local_140[0];
    }
    lVar12 = FUN_1800f1ce0(ppppcVar14);
    if (lVar12 == 0) goto LAB_18030405e;
    FUN_18000f890(local_e0);
    FUN_18000f890(local_c0);
    FUN_1803033d0();
  }
  else {
LAB_18030405e:
    FUN_18000f890(local_e0);
    FUN_18000f890(local_c0);
  }
  local_1e8 = local_1e8 + fVar3;
LAB_180304089:
  uVar8 = local_168;
  sVar7 = local_170;
  ppppuVar6 = local_180;
  fVar5 = DAT_1808ac900;
  fVar4 = DAT_1808ac880;
  uVar10 = DAT_1808ac810;
  fVar3 = DAT_1808ac34c;
  bVar2 = false;
  do {
    local_160 = (undefined8 ****)0x0;
    uStack_158 = 0;
    local_150 = 0;
    local_148 = 0;
    sVar13 = strlen(_Str);
    FUN_1800133a0(&local_160,_Str,sVar13);
    uVar18 = local_148;
    ppppuVar15 = local_160;
    if (local_150 == 0) {
LAB_180304217:
      if (0xf < uVar18) {
        uVar19 = uVar18 + 1;
        ppppuVar17 = ppppuVar15;
        if (0xfff < uVar19) {
          ppppuVar17 = (undefined8 ****)ppppuVar15[-1];
          if (0x1f < (ulonglong)((longlong)ppppuVar15 + (-8 - (longlong)ppppuVar17)))
          goto LAB_180304328;
          uVar19 = uVar18 + 0x28;
        }
        thunk_FUN_1803d64e0(ppppuVar17,uVar19);
      }
    }
    else {
      ppppuVar17 = &local_180;
      if (0xf < uVar8) {
        ppppuVar17 = ppppuVar6;
      }
      _Buf1 = &local_160;
      if (0xf < local_148) {
        _Buf1 = local_160;
      }
      if ((local_150 == sVar7) &&
         ((local_150 == 0 || (iVar9 = memcmp(_Buf1,ppppuVar17,local_150), iVar9 == 0))))
      goto LAB_180304217;
      if (!bVar2) {
        bVar2 = true;
        fVar21 = (float)FUN_18053fc00(uVar10);
        local_1d0 = (local_1e4 + local_1e0[0] + fVar5) - fVar21;
        local_1cc = local_1e8 + fVar3;
        local_1d8 = (undefined *)CONCAT44(local_1e8,(local_1e4 - fVar5) + fVar21);
        local_210 = 0;
        local_218 = (undefined1 *)((ulonglong)local_218 & 0xffffffff00000000);
        FUN_1803fe590(local_1b0,&local_1d8,&local_1d0,DAT_180960f48);
        local_1e8 = local_1e8 + fVar4;
      }
      FUN_180304350(&local_1a8,&local_160,_Str + 0x40);
      if (0xf < local_148) {
        uVar18 = local_148 + 1;
        ppppuVar15 = local_160;
        if (uVar18 < 0x1000) {
LAB_18030420c:
          thunk_FUN_1803d64e0(ppppuVar15,uVar18);
          goto LAB_180304254;
        }
        ppppuVar15 = (undefined8 ****)local_160[-1];
        if ((ulonglong)((longlong)local_160 + (-8 - (longlong)ppppuVar15)) < 0x20) {
          uVar18 = local_148 + 0x28;
          goto LAB_18030420c;
        }
LAB_180304328:
        pcVar1 = (code *)swi(0x29);
        DAT_1809ec05c = (*pcVar1)(5);
        puVar20 = auStack_230;
        goto LAB_18030432f;
      }
    }
LAB_180304254:
    lVar12 = DAT_180ca0a50;
    local_160 = (undefined8 ****)((ulonglong)local_160 & 0xffffffffffffff00);
    local_148 = 0xf;
    local_150 = 0;
    _Str = _Str + 0x614;
    if (_Str == &DAT_18094f760) {
      *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
      lVar12 = *(longlong *)(lVar12 + 0x14f8);
      *(float *)(lVar12 + 0x118) = local_1e4;
      *(float *)(lVar12 + 0x11c) = local_1e8;
      *(undefined1 *)(lVar12 + 0x159) = 1;
      local_1d8 = (undefined *)(ulonglong)(uint)local_1e0[0];
      FUN_1804174f0(&local_1d8);
      FUN_18000f890(&local_180);
      FUN_18000f890(local_140);
      return;
    }
  } while( true );
}



/* ===== 180304350 FUN_180304350 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180304350(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  float fVar1;
  byte bVar2;
  undefined4 uVar3;
  size_t _Size;
  int iVar4;
  undefined4 uVar5;
  byte *pbVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  byte *pbVar11;
  undefined8 *puVar12;
  uint uVar13;
  undefined4 uVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  undefined4 extraout_XMM0_Da;
  float fVar17;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  undefined1 local_100;
  undefined1 local_f8;
  undefined1 local_f0;
  uint *local_e8;
  undefined4 local_e0;
  uint local_d8;
  float local_d4;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  longlong local_a8 [4];
  ulonglong local_88;
  
  local_88 = DAT_180919500 ^ (ulonglong)auStack_128;
  local_d0 = param_3;
  pbVar6 = (byte *)FUN_180066a20(&local_c8,"ambience_entry_",param_2);
  if (0xf < *(ulonglong *)(pbVar6 + 0x18)) {
    pbVar6 = *(byte **)pbVar6;
  }
  uVar15 = 0xffffffff;
  uVar13 = 0xffffffff;
  bVar2 = *pbVar6;
  while (bVar2 != 0) {
    pbVar11 = pbVar6 + 1;
    if (((bVar2 == 0x23) && (*pbVar11 == 0x23)) && (pbVar6[2] == 0x23)) {
      uVar15 = 0xffffffff;
      pbVar11 = pbVar6 + 3;
    }
    else {
      uVar15 = (ulonglong)
               ((uint)(uVar15 >> 8) ^
               *(uint *)(&DAT_1806c25c0 + (uVar15 & 0xff ^ (ulonglong)bVar2) * 4));
    }
    uVar13 = (uint)uVar15;
    pbVar6 = pbVar11;
    bVar2 = *pbVar11;
  }
  FUN_18000f890(&local_c8);
  puVar12 = DAT_1811073b8;
  puVar7 = (undefined8 *)FUN_180026970(DAT_1811073b0,DAT_1811073b8,param_2);
  if (puVar7 == puVar12) {
    uVar5 = DAT_1808ac34c;
  }
  else {
    uVar5 = 0;
  }
  local_bc = 0;
  local_b8 = 0xffffffff;
  local_d8 = ~uVar13;
  local_c8 = uVar5;
  local_c4 = uVar5;
  local_c0 = uVar5;
  FUN_18034a380(extraout_XMM0_Da,local_a8,&local_d8,&local_c8);
  fVar17 = (float)FUN_1802b3660(local_a8[0] + 0x14,uVar5,DAT_1808ac118,0);
  uVar3 = *(undefined4 *)(*(longlong *)*param_1 + 0x20);
  fVar1 = *(float *)param_1[1];
  uVar5 = *(undefined4 *)param_1[3];
  local_d8 = *(uint *)param_1[2];
  local_d4 = fVar1;
  if (DAT_181107478 == 2) {
    if ((ulonglong)param_2[3] < 0x10) {
      puVar9 = param_2;
    }
    else {
      puVar9 = (undefined8 *)*param_2;
    }
    puVar10 = &DAT_1809f73c0;
    if (0xf < DAT_1809f73d8) {
      puVar10 = DAT_1809f73c0;
    }
    if ((DAT_1809f73d0 != param_2[2]) ||
       ((DAT_1809f73d0 != 0 && (iVar4 = memcmp(puVar10,puVar9,DAT_1809f73d0), iVar4 != 0))))
    goto LAB_180304520;
    uVar14 = 1;
  }
  else {
LAB_180304520:
    uVar14 = 0;
  }
  uVar8 = FUN_1803019e0(local_a8,param_2);
  puVar9 = (undefined8 *)FUN_180066a20(&local_c8,&DAT_180763238,param_2);
  if (0xf < (ulonglong)puVar9[3]) {
    puVar9 = (undefined8 *)*puVar9;
  }
  local_e8 = &local_d8;
  local_f0 = 1;
  local_f8 = 0;
  local_100 = 0;
  local_108 = local_d0;
  local_e0 = uVar5;
  uVar5 = FUN_180302650(puVar9,uVar8,param_2,uVar14);
  FUN_18000f890(&local_c8);
  FUN_18000f890(local_a8);
  FUN_1802b3c30(*(longlong *)*param_1,uVar3,*(undefined4 *)(*(longlong *)*param_1 + 0x20),fVar17);
  FUN_1803035c0(uVar5,local_d0,2,param_2);
  *(float *)param_1[1] = fVar17 * *(float *)param_1[4] + fVar1;
  puVar9 = DAT_1811073b8;
  if (puVar7 == puVar12) {
    return;
  }
  if (0.0 < fVar17) {
    return;
  }
  puVar7 = (undefined8 *)FUN_180026970(DAT_1811073b0,DAT_1811073b8,param_2);
  puVar12 = puVar9;
  if (puVar7 == puVar9) {
LAB_180304685:
    puVar10 = puVar12;
    if (puVar7 == puVar9) goto LAB_1803046cf;
  }
  else {
    puVar16 = puVar7 + 4;
    puVar10 = puVar9;
    if (puVar16 != puVar9) {
      do {
        if ((ulonglong)param_2[3] < 0x10) {
          puVar12 = param_2;
        }
        else {
          puVar12 = (undefined8 *)*param_2;
        }
        _Size = puVar16[2];
        if ((ulonglong)puVar16[3] < 0x10) {
          puVar10 = puVar16;
        }
        else {
          puVar10 = (undefined8 *)*puVar16;
        }
        if ((_Size != param_2[2]) ||
           ((_Size != 0 && (iVar4 = memcmp(puVar10,puVar12,_Size), iVar4 != 0)))) {
          FUN_18002ba60(puVar7,puVar16);
          puVar7 = puVar7 + 4;
        }
        puVar16 = puVar16 + 4;
      } while (puVar16 != puVar9);
      puVar12 = DAT_1811073b8;
      goto LAB_180304685;
    }
  }
  for (; puVar16 = puVar7, puVar9 != puVar10; puVar9 = puVar9 + 4) {
    FUN_18002ba60(puVar7,puVar9);
    puVar7 = puVar7 + 4;
    puVar12 = DAT_1811073b8;
  }
  for (; puVar16 != puVar12; puVar16 = puVar16 + 4) {
    FUN_18000f890(puVar16);
  }
  DAT_1811073b8 = puVar7;
LAB_1803046cf:
  FUN_1802d1f90(param_2);
  if (DAT_181107478 == 2) {
    if ((ulonglong)param_2[3] < 0x10) {
      puVar12 = param_2;
    }
    else {
      puVar12 = (undefined8 *)*param_2;
    }
    puVar7 = &DAT_1809f73c0;
    if (0xf < DAT_1809f73d8) {
      puVar7 = DAT_1809f73c0;
    }
    if ((DAT_1809f73d0 == param_2[2]) &&
       ((DAT_1809f73d0 == 0 || (iVar4 = memcmp(puVar7,puVar12,DAT_1809f73d0), iVar4 == 0)))) {
      DAT_181107478 = 0;
    }
  }
  FUN_1803033d0();
  return;
}



/* ===== 180304770 FUN_180304770 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180304770(float *param_1)

{
  uint uVar1;
  int iVar2;
  size_t _Size;
  byte bVar3;
  char cVar4;
  undefined1 uVar5;
  int iVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  float *pfVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  uint uVar13;
  char *pcVar14;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auStack_158 [32];
  longlong *local_138;
  longlong *local_130;
  char *local_128;
  undefined8 *local_120;
  undefined8 *local_118;
  undefined4 local_110;
  undefined4 local_108;
  undefined4 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  float local_e8;
  float local_e4;
  longlong local_d8;
  longlong lStack_d0;
  float local_c8;
  float fStack_c4;
  float local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  ulonglong local_b0;
  ulonglong local_a8;
  
  local_a8 = DAT_180919500 ^ (ulonglong)auStack_158;
  local_f8 = &DAT_1809ec010;
  iVar6 = FUN_1804e4d70(&DAT_1809ec010);
  if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809ec05c == 0x7fffffff) {
    DAT_1809ec05c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  puVar11 = &DAT_1809ec060;
  if (DAT_180cc3e18 != '\0') {
    puVar11 = (undefined8 *)&DAT_1809ec080;
  }
  FUN_180024b50(&local_c8,puVar11);
  FUN_1804e4e90(&DAT_1809ec010);
  puVar11 = &DAT_1809f51b8;
  if (0xf < DAT_1809f51d0) {
    puVar11 = DAT_1809f51b8;
  }
  _Size = CONCAT44(uStack_b4,local_b8);
  pfVar10 = &local_c8;
  if (0xf < local_b0) {
    pfVar10 = (float *)CONCAT44(fStack_c4,local_c8);
  }
  if ((_Size != DAT_1809f51c8) ||
     ((_Size != 0 && (iVar6 = memcmp(pfVar10,puVar11,_Size), iVar6 != 0)))) {
    pfVar10 = &local_c8;
    if (0xf < local_b0) {
      pfVar10 = (float *)CONCAT44(fStack_c4,local_c8);
    }
    FUN_180029840(&DAT_1809f51b8,pfVar10,_Size);
    FUN_1803033d0();
  }
  uVar17 = FUN_18000f890(&local_c8);
  fVar26 = DAT_1808ac34c;
  if (DAT_180ce20b4 == '\0') {
    return;
  }
  uVar12 = 0xffffffff;
  pcVar14 = "ambience_view";
  bVar3 = 0x61;
  do {
    pcVar14 = pcVar14 + 1;
    if (((bVar3 == 0x23) && (*pcVar14 == 0x23)) && (pcVar14[1] == 0x23)) {
      uVar12 = 0xffffffff;
      pcVar14 = pcVar14 + 2;
    }
    else {
      uVar12 = (ulonglong)
               ((uint)(uVar12 >> 8) ^
               *(uint *)(&DAT_1806c25c0 + (uVar12 & 0xff ^ (ulonglong)bVar3) * 4));
    }
    bVar3 = *pcVar14;
  } while (bVar3 != 0);
  if (DAT_180ce20b5 == '\0') {
    fVar15 = DAT_1808ac34c;
  }
  else {
    fVar15 = 0.0;
  }
  local_f0 = CONCAT44(local_f0._4_4_,~(uint)uVar12);
  local_bc = 0;
  local_b8 = 0xffffffff;
  local_c8 = fVar15;
  fStack_c4 = fVar15;
  local_c0 = fVar15;
  FUN_18034a380(uVar17,&local_d8,&local_f0,&local_c8);
  fVar15 = (float)FUN_1802b3660(local_d8 + 0x14,fVar15,DAT_1808ac118,0);
  lVar8 = DAT_180ca0a50;
  if ((DAT_180ce20b5 != '\0') && (fVar15 <= 0.0)) {
    _DAT_180ce20b4 = 0;
    return;
  }
  if (fVar15 <= 0.0) {
    return;
  }
  fVar15 = DAT_1811074e8 * fVar15;
  local_f8 = (undefined *)CONCAT44(DAT_1809f3bd8 - fVar26,0x441d4000);
  fVar25 = *param_1 + _DAT_1808acc18;
  fVar23 = (DAT_1809f3bd8 - fVar26) + param_1[1];
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  lVar8 = *(longlong *)(lVar8 + 0x14f8);
  *(undefined8 *)(lVar8 + 0x118) = *(undefined8 *)param_1;
  *(undefined1 *)(lVar8 + 0x159) = 1;
  local_f0 = 0x4120000041700000;
  local_e8 = fVar25;
  local_e4 = fVar23;
  FUN_1803d89a0(2,&local_f0);
  uVar12 = 0xffffffff;
  pcVar14 = "ambience_view_scroll";
  bVar3 = 0x61;
  do {
    pcVar14 = pcVar14 + 1;
    if (((bVar3 == 0x23) && (*pcVar14 == 0x23)) && (pcVar14[1] == 0x23)) {
      uVar12 = 0xffffffff;
      pcVar14 = pcVar14 + 2;
    }
    else {
      uVar12 = (ulonglong)
               ((uint)(uVar12 >> 8) ^
               *(uint *)(&DAT_1806c25c0 + (uVar12 & 0xff ^ (ulonglong)bVar3) * 4));
    }
    bVar3 = *pcVar14;
  } while (bVar3 != 0);
  uVar13 = ~(uint)uVar12;
  uVar12 = (((((ulonglong)(uVar13 & 0xff) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
             (ulonglong)(uVar13 >> 8 & 0xff)) * 0x100000001b3 ^ (ulonglong)(uVar13 >> 0x10 & 0xff))
            * 0x100000001b3 ^ (ulonglong)(uVar13 >> 0x18)) * 0x100000001b3 & DAT_1811077a0;
  lVar8 = *(longlong *)(DAT_181107788 + 8 + uVar12 * 0x10);
  if (lVar8 != DAT_181107778) {
    uVar1 = *(uint *)(lVar8 + 0x10);
    while (uVar13 != uVar1) {
      if (lVar8 == *(longlong *)(DAT_181107788 + uVar12 * 0x10)) goto LAB_180304ae3;
      lVar8 = *(longlong *)(lVar8 + 8);
      uVar1 = *(uint *)(lVar8 + 0x10);
    }
    if (lVar8 != 0) goto LAB_180304ae6;
  }
LAB_180304ae3:
  lVar8 = DAT_181107778;
LAB_180304ae6:
  if (lVar8 == DAT_181107778) {
    uVar17 = 0;
  }
  else {
    uVar17 = *(undefined8 *)(lVar8 + 0x18);
  }
  FUN_1802b6190(uVar13,uVar17);
  lVar8 = DAT_180ca0a50;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  uVar7 = FUN_1803e8900(*(undefined8 *)(lVar8 + 0x14f8),"##ambience_view");
  local_138 = (longlong *)CONCAT44(local_138._4_4_,0x98);
  cVar4 = FUN_1803e1800("##ambience_view",uVar7,&local_f8,2);
  FUN_1803d8a40(1);
  if (cVar4 != '\0') {
    FUN_1802b6490(uVar13,0,0,0);
    lVar9 = DAT_180ca0a50;
    *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
    lVar8 = *(longlong *)(*(longlong *)(lVar9 + 0x14f8) + 0x2c8);
    uVar12 = *(ulonglong *)(**(longlong **)(lVar9 + 0x2058) + 0x10);
    fVar21 = (float)(uVar12 >> 0x20);
    FUN_1803fc200(lVar8,param_1,&local_e8,0);
    if (DAT_180cd0fd8 == '\0') {
      fVar24 = fVar26;
    }
    else {
      fVar24 = DAT_1809f7440;
    }
    lVar9 = FUN_180368270(lVar8,param_1,&local_e8,fVar24);
    uVar7 = DAT_1808ac918;
    if (((lVar9 != 0) && (0.0 < (float)uVar12)) && (0.0 < fVar21)) {
      local_f8 = (undefined *)CONCAT44(fVar23 / fVar21,fVar25 / (float)uVar12);
      auVar18._8_8_ = 0;
      auVar18._0_8_ = *(ulonglong *)param_1;
      auVar19._8_8_ = 0;
      auVar19._0_8_ = uVar12;
      auVar19 = divps(auVar18,auVar19);
      local_f0 = auVar19._0_8_;
      local_d8 = 0;
      local_120 = (undefined8 *)CONCAT44(local_120._4_4_,DAT_1808ac918);
      local_128 = (char *)CONCAT44(local_128._4_4_,0xffffffff);
      local_130 = &local_f8;
      local_138 = &local_f0;
      lStack_d0 = lVar9;
      FUN_1803febc0(lVar8,&local_d8,param_1,&local_e8);
    }
    local_130 = (longlong *)((ulonglong)local_130 & 0xffffffff00000000);
    local_138 = (longlong *)CONCAT44(local_138._4_4_,uVar7);
    FUN_1803fe590(lVar8,param_1,&local_e8,
                  (int)(longlong)
                       ((float)(DAT_180960ee4 >> 0x18) * fVar15 * DAT_1808ac2b4 + DAT_1808ac1f4) <<
                  0x18 | DAT_180960ee4 & 0xffffff);
    local_d8 = _DAT_1808adde0;
    lStack_d0 = _UNK_1808adde8;
    local_128._0_4_ = fVar26;
    local_130 = (longlong *)((ulonglong)local_130 & 0xffffffff00000000);
    local_138 = &local_d8;
    FUN_18036bcb0(lVar8,param_1,&local_e8,DAT_180960eec);
    iVar2 = *(int *)(lVar8 + 0xa0);
    iVar6 = iVar2 + -1;
    *(int *)(lVar8 + 0xa0) = iVar6;
    if (iVar6 == 0) {
      puVar11 = (undefined8 *)(*(longlong *)(lVar8 + 0x38) + 0x34);
    }
    else {
      puVar11 = (undefined8 *)((longlong)(iVar2 + -2) * 0x10 + *(longlong *)(lVar8 + 0xa8));
    }
    uVar17 = puVar11[1];
    *(undefined8 *)(lVar8 + 0x60) = *puVar11;
    *(undefined8 *)(lVar8 + 0x68) = uVar17;
    FUN_1803fbff0(lVar8);
    fVar21 = DAT_1808ac9e4;
    uVar7 = DAT_1808ac8f0;
    fVar23 = *(float *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x118);
    fVar25 = *(float *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x11c);
    fVar24 = (*param_1 + _DAT_1808acc18) - DAT_1808ac900;
    local_f8 = (undefined *)0x41cdfdf441f00000;
    local_f0 = CONCAT44(fVar25,fVar24 - DAT_1808acaa8);
    local_100 = DAT_180960f38;
    local_108 = 400;
    local_110 = 8;
    local_118 = &local_f8;
    local_120 = &local_f0;
    local_128._0_4_ = (float)DAT_1808ac8f0;
    local_130._0_4_ = DAT_1808acbe4;
    local_138 = (longlong *)0x180746130;
    uVar5 = FUN_1803243c0(lVar8,"##ambience_more",0,"fa_ellipsis");
    FUN_18030d430(uVar5);
    local_f8 = (undefined *)0x41cdfdf441f00000;
    local_f0 = CONCAT44(fVar25,fVar24 - fVar21);
    local_100 = DAT_180960f38;
    local_108 = 400;
    local_110 = 8;
    local_118 = &local_f8;
    local_120 = &local_f0;
    local_128 = (char *)CONCAT44(local_128._4_4_,uVar7);
    local_130 = (longlong *)CONCAT44(local_130._4_4_,DAT_1808acbd8);
    local_138 = (longlong *)0x180746380;
    cVar4 = FUN_1803243c0(lVar8,"##ambience_close",0,"fa_xmark");
    if (cVar4 != '\0') {
      _DAT_180ce20b4 = CONCAT11(1,DAT_180ce20b4);
    }
    fVar25 = fVar25 + _DAT_1808ac9a8;
    fVar24 = (fVar24 - fVar23) / _DAT_1808ac590 + fVar23;
    local_f8 = (undefined *)CONCAT44(fVar25,fVar23 + DAT_1808ac8e4);
    lVar9 = DAT_181107a08;
    if (DAT_181107a08 == 0) {
      lVar9 = *(longlong *)(DAT_180ca0a50 + 0x11f0);
    }
    if ((DAT_180960ecc & 0xff000000) != 0) {
      if (lVar9 == 0) {
        lVar9 = *(longlong *)(*(longlong *)(lVar8 + 0x38) + 0x18);
      }
      local_d8 = *(longlong *)(lVar8 + 0x60);
      lStack_d0 = *(longlong *)(lVar8 + 0x68);
      local_110 = 0;
      local_118 = (undefined8 *)((ulonglong)local_118 & 0xffffffff00000000);
      local_120 = (undefined8 *)0x0;
      local_128 = "Map Selection";
      local_130 = &local_d8;
      local_138 = (longlong *)CONCAT44(local_138._4_4_,DAT_180960ecc);
      FUN_18040a900(lVar9,lVar8,DAT_1808ac8dc,&local_f8);
    }
    lVar9 = DAT_180ca0a50;
    fVar20 = fVar25 + _DAT_1808ac938;
    fVar22 = fVar24 - fVar23;
    fVar16 = (local_e4 - DAT_1808ac864) - fVar20;
    if (fVar26 <= fVar16) {
      fVar26 = fVar16;
    }
    local_f0 = CONCAT44(fVar26,fVar22);
    *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
    lVar9 = *(longlong *)(lVar9 + 0x14f8);
    *(float *)(lVar9 + 0x118) = fVar23;
    *(float *)(lVar9 + 0x11c) = fVar20;
    *(undefined1 *)(lVar9 + 0x159) = 1;
    local_f8 = (undefined *)0x4120000041700000;
    FUN_1803d89a0(2,&local_f8);
    lVar9 = DAT_180ca0a50;
    *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
    uVar7 = FUN_1803e8900(*(undefined8 *)(lVar9 + 0x14f8),"##ambience_maps");
    local_138 = (longlong *)CONCAT44(local_138._4_4_,0x88);
    cVar4 = FUN_1803e1800("##ambience_maps",uVar7,&local_f0,2);
    if (cVar4 != '\0') {
      local_f8 = *(undefined **)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x118);
      FUN_180303cb0(&local_f8,fVar22 - fVar21);
      lVar9 = DAT_180ca0a50;
      *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
      lVar9 = *(longlong *)(*(longlong *)(lVar9 + 0x14f8) + 0x2c8);
      FUN_1802b3c30(lVar9,0,*(undefined4 *)(lVar9 + 0x20),fVar15);
    }
    FUN_1803e1bc0();
    FUN_1803d8a40(1);
    lVar9 = DAT_180ca0a50;
    *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
    lVar9 = *(longlong *)(lVar9 + 0x14f8);
    *(float *)(lVar9 + 0x118) = fVar24;
    *(float *)(lVar9 + 0x11c) = fVar25;
    *(undefined1 *)(lVar9 + 0x159) = 1;
    FUN_1802b8a20();
    lVar9 = FUN_180303520();
    FUN_1802fb830(lVar9 + 0x264);
    FUN_1802b9760();
    FUN_1802b6cd0(uVar13);
    FUN_1802b3c30(lVar8,0,*(undefined4 *)(lVar8 + 0x20),fVar15);
  }
  FUN_1803e1bc0();
  return;
}



/* ===== 180305180 FUN_180305180 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180305180(void)

{
  undefined2 uVar1;
  uint uVar2;
  undefined4 uVar3;
  bool bVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 uVar8;
  char cVar9;
  longlong lVar10;
  char *pcVar11;
  int iVar12;
  int iVar13;
  char *pcVar14;
  undefined2 *puVar15;
  longlong lVar16;
  longlong lVar17;
  undefined8 extraout_XMM0_Qa;
  undefined1 auStack_158 [32];
  char *local_138;
  ulonglong local_130;
  char *local_128;
  char *local_120;
  char *local_118;
  char *local_110;
  char *local_108;
  char *local_100;
  char *local_f8;
  undefined8 local_f0;
  char *local_e8;
  char *local_e0;
  char *local_d8;
  char *local_d0;
  char *local_c8;
  char *local_c0;
  undefined *local_b8;
  char *local_b0;
  undefined *local_a8;
  char *local_a0;
  char *local_98;
  char *local_90;
  ulonglong local_88;
  
  local_88 = DAT_180919500 ^ (ulonglong)auStack_158;
  FUN_1802b8a20();
  FUN_1802b9110(&DAT_18075c0e4);
  FUN_1803e89e0("ragebot");
  uVar6 = DAT_1808ac34c;
  if ((DAT_1809f351c == 2) ||
     ((((DAT_1809f351c == 1 && (lVar10 = FUN_180266660(), lVar10 != 0)) && (DAT_180cf9f80 != 0)) &&
      (cVar9 = FUN_180011220((ulonglong)DAT_180cf9f80 + lVar10), cVar9 != '\0')))) {
    FUN_1802b9bd0();
    lVar17 = DAT_180ca0a50;
    DAT_181107580 = DAT_181107580 + 1;
    *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
    lVar10 = *(longlong *)(lVar17 + 0x14f8);
    lVar16 = *(longlong *)(lVar10 + 0x2c8);
    *(undefined1 *)(lVar10 + 0xce) = 1;
    iVar12 = *(int *)(*(longlong *)(*(longlong *)(lVar17 + 0x14f8) + 0x2c8) + 0x20);
    FUN_1803d8870(1,uVar6);
    FUN_1803e7920(1);
    FUN_1803d8a40(1);
  }
  else {
    FUN_1802b9bd0();
    lVar16 = 0;
    iVar12 = 0;
  }
  if ((DAT_1809f351c == 2) ||
     (((DAT_1809f351c == 1 && (lVar10 = FUN_180266660(), lVar10 != 0)) &&
      ((DAT_180cf9f80 != 0 &&
       (cVar9 = FUN_180011220((ulonglong)DAT_180cf9f80 + lVar10), cVar9 != '\0')))))) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  DAT_181106f20 = "Master switch for rage aimbot functionality";
  if (bVar4) {
    DAT_181106f20 = "This feature cannot be used with Safe Mode enabled.";
  }
  FUN_1802c0a60("enabled",&DAT_18095723c);
  fVar5 = DAT_1808ac1f4;
  if (lVar16 != 0) {
    FUN_1802b9bd0();
    DAT_181107580 = DAT_181107580 + -1;
    FUN_1803e79e0();
    if (iVar12 < *(int *)(lVar16 + 0x20)) {
      do {
        lVar10 = (longlong)iVar12;
        iVar12 = iVar12 + 1;
        uVar2 = *(uint *)(*(longlong *)(lVar16 + 0x28) + 0x10 + lVar10 * 0x14);
        *(uint *)(*(longlong *)(lVar16 + 0x28) + 0x10 + lVar10 * 0x14) =
             (int)(longlong)((float)(uVar2 >> 0x18) * fVar5 + fVar5) << 0x18 | uVar2 & 0xffffff;
      } while (iVar12 < *(int *)(lVar16 + 0x20));
    }
  }
  DAT_181106f20 = "Lets the aimbot work without changing camera angles";
  FUN_1802c0a60("silent aim",&DAT_18095cd7f);
  DAT_181106f20 = "Automatically fires the weapon when aiming at enemies within the field of view";
  FUN_1802c0a60("automatic fire",&DAT_18095cd44);
  FUN_1802c0a60("limiters",&DAT_18095cd45);
  cVar9 = FUN_1802badc0("limiters_options","limiters");
  uVar7 = DAT_1808acb58;
  puVar15 = &DAT_1806dfdd8;
  if (cVar9 != '\0') {
    local_130 = local_130 & 0xffffffff00000000;
    DAT_181106f20 = "Angle of view within which aimbot will aim according to \"Aim Speed\" option";
    local_138 = &DAT_1807634d0;
    FUN_18033e3a0("aim fov",&DAT_18095cd48,0,DAT_1808acb58);
    DAT_181106f20 = "Maximum rotation per tick";
    local_138 = "%d";
    local_130 = local_130 & 0xffffffff00000000;
    if (300 < DAT_18095cd4c) {
      local_138 = "instant";
    }
    FUN_18033fa10("aim speed",&DAT_18095cd4c,0,0x12d);
    local_130 = local_130 & 0xffffffff00000000;
    local_138 = "%dms";
    FUN_18033fa10("reaction time",&DAT_18095cd50,0,1000);
    local_130 = local_130 & 0xffffffff00000000;
    local_138 = "%dms";
    FUN_18033fa10("kill delay",&DAT_18095cd54,0,5000);
    local_130 = local_130 & 0xffffffff00000000;
    DAT_181106f20 = "Maximum number of walls the aimbot can shoot through";
    local_138 = "%d";
    FUN_18033fa10("max walls",&DAT_18095cd58,0,4);
    local_138 = &DAT_1807635ac;
    local_130 = local_130 & 0xffffffff00000000;
    if (DAT_18095cd5c < 1) {
      local_138 = &DAT_1806d2870;
    }
    FUN_18033fa10("backtrack",&DAT_18095cd5c,0,0xd);
    FUN_1802c0a60("selftrack",&DAT_18095cd60);
    FUN_1802bc580();
  }
  DAT_181106f20 = "Adjusts aimbot processing for lower latency";
  FUN_1802c0a60("refine shot",&DAT_18095cd64);
  local_130 = local_130 & 0xffffffff00000000;
  DAT_181106f20 = "Angle of view within which the ragebot works";
  local_138 = &DAT_1807634d0;
  FUN_18033e3a0("field of view",&DAT_18095cd68,0,uVar7);
  iVar12 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
  if (iVar12 < 2) {
    FUN_1803ebc00("Calling PopID() too many times!");
  }
  else {
    *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar12 + -1;
  }
  FUN_1802b9110("selection");
  FUN_1803e89e0("ragebot_selection");
  FUN_180331ea0(0);
  lVar16 = (longlong)DAT_181107578;
  lVar10 = lVar16 * 0x24;
  pcVar14 = &DAT_18095c444 + lVar10;
  FUN_1803e8a70();
  uVar3 = *(undefined4 *)pcVar14;
  uVar1 = *(undefined2 *)(&DAT_18095c448 + lVar10);
  local_e8 = "head";
  local_e0 = "chest";
  local_d8 = "stomach";
  local_d0 = "arms";
  local_c8 = "legs";
  local_c0 = "feet";
  DAT_181106f20 = "Body parts that the aimbot will recognize and aim for";
  FUN_1802c3050("hitboxes",&local_e8,pcVar14,6);
  pcVar11 = pcVar14;
  do {
    if (*pcVar11 != '\0') goto LAB_18030568d;
    pcVar11 = pcVar11 + 1;
  } while (pcVar11 != &DAT_18095c44a + lVar16 * 0x24);
  *(undefined4 *)pcVar14 = uVar3;
  *(undefined2 *)(&DAT_18095c448 + lVar10) = uVar1;
LAB_18030568d:
  local_130 = local_130 & 0xffffffff00000000;
  DAT_181106f20 =
       "Attempts to predict enemy positions based on their movement patterns. Value represents an abstract level of aggressiveness for extrapolation. Higher values may potentially cause more misses"
  ;
  local_138 = (char *)&DAT_1806dfdd8;
  if (*(int *)(&DAT_18095c44c + lVar16 * 0x24) == 0) {
    local_138 = &DAT_1806d2870;
  }
  FUN_18033fa10("extrapolation",&DAT_18095c44c + lVar16 * 0x24,0,100);
  local_130 = local_130 & 0xffffffff00000000;
  DAT_181106f20 = "Minimum hit probability required before taking a shot";
  local_138 = "%d%%";
  FUN_18033fa10("hit chance",&DAT_18095c450 + lVar16 * 0x24,0,100);
  cVar9 = FUN_1802badc0("hitchance_options","hit chance");
  if (cVar9 != '\0') {
    DAT_181106f20 =
         "Uses \"Min. Hit Chance\" instead of the main hit chance when the weapon reaches maximum accuracy in the given state"
    ;
    FUN_1802c0a60("force shot",&DAT_18095c454 + lVar16 * 0x24);
    local_130 = local_130 & 0xffffffff00000000;
    DAT_181106f20 = "Minimum allowed hit probability with \"Force Shot\"";
    local_138 = "%d%%";
    FUN_18033fa10("min. hit chance",&DAT_18095c458 + lVar16 * 0x24,0,100);
    FUN_1802bc580();
  }
  local_130 = local_130 & 0xffffffff00000000;
  DAT_181106f20 =
       "Minimum damage in HP required to take a shot\n\n\"FL\" stands for Force Lethal. It sets minimum damage to the value required to kill a target with two shots. Designed for use with Double Tap.\n\nIf minimum damage is higher than the target\'s health, the aimbot will attempt to deal damage at least equal to the target\'s health"
  ;
  local_138 = (char *)&DAT_1806dfdd8;
  if (100 < *(int *)(&DAT_18095c45c + lVar16 * 0x24)) {
    local_138 = (char *)&DAT_1806eb240;
  }
  FUN_18033fa10("min damage",&DAT_18095c45c + lVar16 * 0x24,1,0x65);
  DAT_181106f20 =
       "Automatically stops player movement for accurate shooting\n\n- \"In Air\" minimizes horizontal velocity by the time you reach the peak of the jump. Designed for \"jump-scouting\"\n- \"On Land\" prevents you from bunny-hopping if the aimbot can shoot quickly after landing\n- \"Between Shots\" stops you even if the weapon is not ready to fire\n"
  ;
  FUN_1802c0a60("quick stop",&DAT_18095c460 + lVar16 * 0x24);
  cVar9 = FUN_1802badc0("quick_stop_options","quick stop");
  if (cVar9 != '\0') {
    local_128 = "in air";
    local_120 = "on land";
    local_138 = (char *)((ulonglong)local_138 & 0xffffffffffffff00);
    local_118 = "between shots";
    FUN_1802d16f0("##options",&local_128,&DAT_18095c461 + lVar16 * 0x24,3);
    FUN_1802bc580();
  }
  DAT_181106f20 = "Automatically scopes in before shooting for increased accuracy";
  FUN_1802c0a60("quick scope",&DAT_18095c464 + lVar16 * 0x24);
  lVar10 = DAT_180ca0a50;
  iVar12 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
  if (iVar12 < 2) {
    FUN_1803ebc00("Calling PopID() too many times!");
    lVar10 = DAT_180ca0a50;
  }
  else {
    *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar12 + -1;
  }
  iVar12 = *(int *)(*(longlong *)(lVar10 + 0x14f8) + 0x108);
  if (iVar12 < 2) {
    FUN_1803ebc00("Calling PopID() too many times!");
  }
  else {
    *(int *)(*(longlong *)(lVar10 + 0x14f8) + 0x108) = iVar12 + -1;
  }
  FUN_1802b9110("other");
  FUN_1803e89e0("ragebot_other");
  local_e8 = "low";
  local_e0 = "medium";
  local_d8 = "high";
  local_d0 = "maximum";
  DAT_181106f20 =
       "Manipulates the lag compensation system to shoot at enemies\' past positions. Higher settings may impact framerate."
  ;
  FUN_1802c2640("history",&DAT_18095cd6c,&local_e8,4);
  local_120 = "hit chance";
  local_128 = "damage";
  DAT_181106f20 = "Delays shots to wait for better opportunities";
  FUN_1802c3050("delay shot",&local_128,&DAT_18095cd70,2);
  cVar9 = FUN_1802badc0("delay_shot_options","delay shot");
  if (cVar9 != '\0') {
    local_130 = local_130 & 0xffffffff00000000;
    local_138 = "%dt";
    FUN_18033fa10("future ticks",&DAT_18095cd74,1,5);
    FUN_1802bc580();
  }
  local_b8 = &DAT_1806d2870;
  local_b0 = "seed check";
  local_a8 = &DAT_180763ca4;
  DAT_181106f20 =
       "Eliminates weapon spread when the weapon spread random seed is known\n\n- \"Seed Check\" checks whether the shot will land in addition to the hit chance requirement\n- \"Full\" completely removes spread"
  ;
  FUN_1802c2640("remove spread",&DAT_18095cd78,&local_b8,3);
  DAT_181106f20 =
       "When enabled, crouches until the aimbot can shoot from an uncrouched eye position, provided you have enough stamina to uncrouch quickly"
  ;
  FUN_1802c0a60("duck peek assist",&DAT_18095cd7c);
  DAT_181106f20 = "Automatically retreats after peeking";
  FUN_1802c0a60("quick peek assist",&DAT_18095cdb4);
  cVar9 = FUN_1802badc0("quick_peek_options","quick peek assist");
  if (cVar9 != '\0') {
    local_130 = 0;
    local_110 = (char *)&DAT_18095cdb8;
    local_138 = (char *)0x0;
    FUN_1802cfaf0("color",&local_110,1,0);
    FUN_1802d0b90(0);
    local_130 = local_130 & 0xffffffff00000000;
    if (200 < DAT_18095cdc8) {
      puVar15 = (undefined2 *)&DAT_180763e20;
    }
    local_138 = (char *)puVar15;
    FUN_18033fa10("max distance",&DAT_18095cdc8,0x1e,0xc9);
    uVar8 = DAT_18095cdce;
    uVar1 = _DAT_18095cdcc;
    pcVar14 = &DAT_18095cdcc;
    local_a0 = "on shot";
    local_98 = "on key release";
    local_90 = "on grenade throw";
    FUN_1802c3050("retreat mode",&local_a0,&DAT_18095cdcc,3);
    do {
      if (*pcVar14 != '\0') goto LAB_180305b6d;
      pcVar14 = pcVar14 + 1;
    } while (pcVar14 != &DAT_18095cdcf);
    _DAT_18095cdcc = uVar1;
    DAT_18095cdce = uVar8;
LAB_180305b6d:
    local_100 = "off";
    local_f8 = "always";
    local_f0 = "only while standing";
    FUN_1802c2640("jump on retreat",&DAT_18095cdd0,&local_100,3);
    DAT_181106f20 = "Stops retreat when pressing a movement key";
    FUN_1802c0a60("allow movement",&DAT_18095cdd4);
    FUN_1802bc580();
  }
  DAT_181106f20 = "Speeds up weapon accuracy recovery. May degrade movement slightly.";
  FUN_1802c0a60("double precision",&DAT_18095cd7d);
  DAT_181106f20 =
       "Exploits weapon mechanic flaws to let you fire two shots rapidly regardless of the weapon fire rate"
  ;
  FUN_1802c0a60("double tap",&DAT_18095cd7e);
  iVar12 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
  if (iVar12 < 2) {
    FUN_1803ebc00("Calling PopID() too many times!");
  }
  else {
    *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar12 + -1;
  }
  FUN_1802b9110("anti aim");
  FUN_1803e89e0("antiaim");
  DAT_181106f20 =
       "Makes it harder for other players to hit you by manipulating your character angles";
  FUN_1802c0a60("enabled",&DAT_180920fac);
  cVar9 = FUN_1802badc0("antiaim_enabled_options","enabled");
  if (cVar9 != '\0') {
    DAT_181106f20 =
         "Disables Anti-Aim when Use key is pressed, instead of only when interactions are available"
    ;
    FUN_1802c0a60("disable on use",&DAT_180920ff8);
    DAT_181106f20 = "Speeds up weapon switch animation";
    FUN_1802c0a60("fast weapon switch",&DAT_180920ffa);
    DAT_181106f20 =
         "Suppresses idle breathing animations to maintain consistent hitbox positioning with Anti-Aim"
    ;
    FUN_1802c0a60("suppress breathing animations",&DAT_180920ff9);
    FUN_1802bc580();
  }
  cVar9 = DAT_18095cd7d;
  FUN_1802b9bd0();
  lVar10 = DAT_180ca0a50;
  if (cVar9 == '\0') {
    lVar17 = 0;
    iVar12 = 0;
  }
  else {
    DAT_181107580 = DAT_181107580 + 1;
    *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
    lVar16 = *(longlong *)(lVar10 + 0x14f8);
    lVar17 = *(longlong *)(lVar16 + 0x2c8);
    *(undefined1 *)(lVar16 + 0xce) = 1;
    iVar12 = *(int *)(*(longlong *)(*(longlong *)(lVar10 + 0x14f8) + 0x2c8) + 0x20);
    FUN_1803d8870(1,uVar6);
    FUN_1803e7920(1);
    FUN_1803d8a40(1);
  }
  local_100 = "off";
  local_f8 = "sliding";
  local_f0 = "walking";
  DAT_181106f20 = "Forces a sliding or walking leg animation when moving";
  FUN_1802c2640("leg movement",&DAT_180920ffc,&local_100,3);
  if (lVar17 != 0) {
    FUN_1802b9bd0();
    DAT_181107580 = DAT_181107580 + -1;
    FUN_1803e79e0();
    if (iVar12 < *(int *)(lVar17 + 0x20)) {
      do {
        lVar10 = (longlong)iVar12;
        iVar12 = iVar12 + 1;
        uVar2 = *(uint *)(*(longlong *)(lVar17 + 0x28) + 0x10 + lVar10 * 0x14);
        *(uint *)(*(longlong *)(lVar17 + 0x28) + 0x10 + lVar10 * 0x14) =
             (int)(longlong)((float)(uVar2 >> 0x18) * fVar5 + fVar5) << 0x18 | uVar2 & 0xffffff;
      } while (iVar12 < *(int *)(lVar17 + 0x20));
    }
  }
  cVar9 = FUN_1802bc070("antiaim_pitch","pitch");
  if (cVar9 != '\0') {
    local_e8 = "off";
    local_e0 = "down";
    local_c8 = "jitter";
    local_d8 = "up";
    local_d0 = "zero";
    local_c0 = "custom";
    DAT_181106f20 = "Controls the vertical character angle";
    FUN_1802c2640("pitch",&DAT_180920fb0,&local_e8,6);
    iVar12 = DAT_180920fb0;
    FUN_1802b9bd0();
    lVar10 = DAT_180ca0a50;
    if (iVar12 == 5) {
      lVar17 = 0;
      iVar12 = 0;
    }
    else {
      DAT_181107580 = DAT_181107580 + 1;
      *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
      lVar16 = *(longlong *)(lVar10 + 0x14f8);
      lVar17 = *(longlong *)(lVar16 + 0x2c8);
      *(undefined1 *)(lVar16 + 0xce) = 1;
      iVar12 = *(int *)(*(longlong *)(*(longlong *)(lVar10 + 0x14f8) + 0x2c8) + 0x20);
      FUN_1803d8870(1,uVar6);
      FUN_1803e7920(1);
      FUN_1803d8a40(1);
    }
    local_130 = local_130 & 0xffffffff00000000;
    local_138 = &DAT_18075d0e8;
    cVar9 = FUN_18033e3a0("value",&DAT_180920fb4,DAT_1808ace64,DAT_1808acaec);
    if (cVar9 != '\0') {
      DAT_180920fb4 = FUN_180519080();
    }
    if (lVar17 != 0) {
      FUN_1802b9bd0();
      DAT_181107580 = DAT_181107580 + -1;
      FUN_1803e79e0();
      if (iVar12 < *(int *)(lVar17 + 0x20)) {
        do {
          lVar10 = (longlong)iVar12;
          iVar12 = iVar12 + 1;
          uVar2 = *(uint *)(*(longlong *)(lVar17 + 0x28) + 0x10 + lVar10 * 0x14);
          *(uint *)(*(longlong *)(lVar17 + 0x28) + 0x10 + lVar10 * 0x14) =
               (int)(longlong)((float)(uVar2 >> 0x18) * fVar5 + fVar5) << 0x18 | uVar2 & 0xffffff;
        } while (iVar12 < *(int *)(lVar17 + 0x20));
      }
    }
    FUN_1802bc580();
  }
  cVar9 = FUN_1802bc070("antiaim_yaw",&DAT_1806e7350);
  if (cVar9 == '\0') goto LAB_180306719;
  local_100 = "off";
  DAT_181106f20 =
       "Controls horizontal body direction\n\n- \"At Targets\" sets yaw relative to the angle toward the current threat\n- \"Local View\" sets yaw relative to the camera"
  ;
  local_f8 = "at targets";
  local_f0 = "local view";
  FUN_1802c2640(&DAT_1806e7350,&DAT_180920fb8,&local_100,3);
  iVar12 = DAT_180920fb8;
  FUN_1802b9bd0();
  lVar10 = DAT_180ca0a50;
  if (iVar12 == 0) {
    DAT_181107580 = DAT_181107580 + 1;
    *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
    lVar16 = *(longlong *)(lVar10 + 0x14f8);
    lVar17 = *(longlong *)(lVar16 + 0x2c8);
    *(undefined1 *)(lVar16 + 0xce) = 1;
    iVar13 = *(int *)(*(longlong *)(*(longlong *)(lVar10 + 0x14f8) + 0x2c8) + 0x20);
    FUN_1803d8870(1,uVar6);
    FUN_1803e7920(1);
    FUN_1803d8a40(1);
  }
  else {
    lVar17 = 0;
    iVar13 = 0;
  }
  DAT_181106f20 = "Automatically turns you to face enemies with knives";
  FUN_1802c0a60("avoid backstab",&DAT_180920fd5);
  DAT_181106f20 = "Attempts to hide your head behind your body as much as possible";
  FUN_1802c0a60("auto adjust",&DAT_180920ffb);
  local_130 = local_130 & 0xffffffff00000000;
  local_138 = &DAT_18075d0e8;
  cVar9 = FUN_18033e3a0("offset",&DAT_180920fec,DAT_1808ace7c,uVar7);
  if (cVar9 != '\0') {
    DAT_180920fec = FUN_180519080();
  }
  if (lVar17 != 0) {
    FUN_1802b9bd0();
    DAT_181107580 = DAT_181107580 + -1;
    FUN_1803e79e0();
    if (iVar13 < *(int *)(lVar17 + 0x20)) {
      do {
        lVar10 = (longlong)iVar13;
        iVar13 = iVar13 + 1;
        uVar2 = *(uint *)(*(longlong *)(lVar17 + 0x28) + 0x10 + lVar10 * 0x14);
        *(uint *)(*(longlong *)(lVar17 + 0x28) + 0x10 + lVar10 * 0x14) =
             (int)(longlong)((float)(uVar2 >> 0x18) * fVar5 + fVar5) << 0x18 | uVar2 & 0xffffff;
      } while (iVar13 < *(int *)(lVar17 + 0x20));
    }
  }
  FUN_1802d0b90(0);
  FUN_1802b9bd0();
  lVar10 = DAT_180ca0a50;
  if (iVar12 == 0) {
    DAT_181107580 = DAT_181107580 + 1;
    *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
    lVar16 = *(longlong *)(lVar10 + 0x14f8);
    lVar17 = *(longlong *)(lVar16 + 0x2c8);
    *(undefined1 *)(lVar16 + 0xce) = 1;
    iVar13 = *(int *)(*(longlong *)(*(longlong *)(lVar10 + 0x14f8) + 0x2c8) + 0x20);
    FUN_1803d8870(1,uVar6);
    FUN_1803e7920(1);
    FUN_1803d8a40(1);
    DAT_181106f20 = "Adds variations to the set angle";
    FUN_1802c0a60("jitter",&DAT_180920fdd);
    if (lVar17 != 0) {
      FUN_1802b9bd0();
      DAT_181107580 = DAT_181107580 + -1;
      FUN_1803e79e0();
      if (iVar13 < *(int *)(lVar17 + 0x20)) {
        do {
          lVar10 = (longlong)iVar13;
          iVar13 = iVar13 + 1;
          uVar2 = *(uint *)(*(longlong *)(lVar17 + 0x28) + 0x10 + lVar10 * 0x14);
          *(uint *)(*(longlong *)(lVar17 + 0x28) + 0x10 + lVar10 * 0x14) =
               (int)(longlong)((float)(uVar2 >> 0x18) * fVar5 + fVar5) << 0x18 | uVar2 & 0xffffff;
        } while (iVar13 < *(int *)(lVar17 + 0x20));
      }
    }
  }
  else {
    DAT_181106f20 = "Adds variations to the set angle";
    FUN_1802c0a60("jitter",&DAT_180920fdd);
  }
  FUN_1803e89e0("jitter");
  if ((iVar12 == 0) || (DAT_180920fdd == '\0')) {
    FUN_1802b9bd0();
    lVar17 = DAT_180ca0a50;
    DAT_181107580 = DAT_181107580 + 1;
    *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
    lVar10 = *(longlong *)(lVar17 + 0x14f8);
    lVar16 = *(longlong *)(lVar10 + 0x2c8);
    *(undefined1 *)(lVar10 + 0xce) = 1;
    iVar13 = *(int *)(*(longlong *)(*(longlong *)(lVar17 + 0x14f8) + 0x2c8) + 0x20);
    FUN_1803d8870(1,uVar6);
    FUN_1803e7920(1);
    FUN_1803d8a40(1);
  }
  else {
    FUN_1802b9bd0();
    lVar16 = 0;
    iVar13 = 0;
  }
  local_e8 = "offset";
  local_e0 = "center";
  local_d8 = "random";
  local_d0 = "3-way";
  FUN_1802c2640(&DAT_18073ca80,&DAT_180920fe0,&local_e8,4);
  local_110 = "in air";
  local_108 = "mouse override";
  local_128 = &DAT_180920fea;
  local_120 = &DAT_180920feb;
  FUN_1802c2b30("disablers",&local_110,&local_128,2);
  local_130 = local_130 & 0xffffffff00000000;
  local_138 = &DAT_18075d0e8;
  cVar9 = FUN_18033e3a0("offset",&DAT_180920fe4,DAT_1808ace7c,uVar7);
  if (cVar9 != '\0') {
    DAT_180920fe4 = FUN_180519080();
  }
  if (lVar16 != 0) {
    FUN_1802b9bd0();
    DAT_181107580 = DAT_181107580 + -1;
    FUN_1803e79e0();
    if (iVar13 < *(int *)(lVar16 + 0x20)) {
      do {
        lVar10 = (longlong)iVar13;
        iVar13 = iVar13 + 1;
        uVar2 = *(uint *)(*(longlong *)(lVar16 + 0x28) + 0x10 + lVar10 * 0x14);
        *(uint *)(*(longlong *)(lVar16 + 0x28) + 0x10 + lVar10 * 0x14) =
             (int)(longlong)((float)(uVar2 >> 0x18) * fVar5 + fVar5) << 0x18 | uVar2 & 0xffffff;
      } while (iVar13 < *(int *)(lVar16 + 0x20));
    }
  }
  iVar13 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
  if (iVar13 < 2) {
    FUN_1803ebc00("Calling PopID() too many times!");
  }
  else {
    *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar13 + -1;
  }
  FUN_1802d0b90(0);
  FUN_1802b9bd0();
  lVar10 = DAT_180ca0a50;
  if (iVar12 == 0) {
    DAT_181107580 = DAT_181107580 + 1;
    *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
    lVar16 = *(longlong *)(lVar10 + 0x14f8);
    lVar17 = *(longlong *)(lVar16 + 0x2c8);
    *(undefined1 *)(lVar16 + 0xce) = 1;
    iVar12 = *(int *)(*(longlong *)(*(longlong *)(lVar10 + 0x14f8) + 0x2c8) + 0x20);
    FUN_1803d8870(1,uVar6);
    FUN_1803e7920(1);
    FUN_1803d8a40(1);
    DAT_181106f20 = "Continuously rotates yaw at the set speed";
    FUN_1802c0a60(&DAT_180764358,&DAT_180920fc0);
    if (lVar17 != 0) {
      FUN_1802b9bd0();
      DAT_181107580 = DAT_181107580 + -1;
      FUN_1803e79e0();
      if (iVar12 < *(int *)(lVar17 + 0x20)) {
        do {
          lVar10 = (longlong)iVar12;
          iVar12 = iVar12 + 1;
          uVar2 = *(uint *)(*(longlong *)(lVar17 + 0x28) + 0x10 + lVar10 * 0x14);
          *(uint *)(*(longlong *)(lVar17 + 0x28) + 0x10 + lVar10 * 0x14) =
               (int)(longlong)((float)(uVar2 >> 0x18) * fVar5 + fVar5) << 0x18 | uVar2 & 0xffffff;
        } while (iVar12 < *(int *)(lVar17 + 0x20));
      }
    }
    FUN_1803e89e0(&DAT_180764358);
LAB_1803065cc:
    FUN_1802b9bd0();
    lVar17 = DAT_180ca0a50;
    DAT_181107580 = DAT_181107580 + 1;
    *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
    lVar10 = *(longlong *)(lVar17 + 0x14f8);
    lVar16 = *(longlong *)(lVar10 + 0x2c8);
    *(undefined1 *)(lVar10 + 0xce) = 1;
    iVar12 = *(int *)(*(longlong *)(*(longlong *)(lVar17 + 0x14f8) + 0x2c8) + 0x20);
    FUN_1803d8870(1,uVar6);
    FUN_1803e7920(1);
    FUN_1803d8a40(1);
  }
  else {
    DAT_181106f20 = "Continuously rotates yaw at the set speed";
    FUN_1802c0a60(&DAT_180764358,&DAT_180920fc0);
    FUN_1803e89e0(&DAT_180764358);
    if (DAT_180920fc0 == '\0') goto LAB_1803065cc;
    FUN_1802b9bd0();
    lVar16 = 0;
    iVar12 = 0;
  }
  local_130 = local_130 & 0xffffffff00000000;
  local_138 = &DAT_18075d0e8;
  cVar9 = FUN_18033e3a0("offset",&DAT_180920fcc,DAT_1808ace7c,uVar7);
  if (cVar9 != '\0') {
    DAT_180920fcc = FUN_180519080();
  }
  if (lVar16 != 0) {
    FUN_1802b9bd0();
    DAT_181107580 = DAT_181107580 + -1;
    FUN_1803e79e0();
    if (iVar12 < *(int *)(lVar16 + 0x20)) {
      do {
        lVar10 = (longlong)iVar12;
        iVar12 = iVar12 + 1;
        uVar2 = *(uint *)(*(longlong *)(lVar16 + 0x28) + 0x10 + lVar10 * 0x14);
        *(uint *)(*(longlong *)(lVar16 + 0x28) + 0x10 + lVar10 * 0x14) =
             (int)(longlong)((float)(uVar2 >> 0x18) * fVar5 + fVar5) << 0x18 | uVar2 & 0xffffff;
      } while (iVar12 < *(int *)(lVar16 + 0x20));
    }
  }
  iVar12 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
  if (iVar12 < 2) {
    FUN_1803ebc00("Calling PopID() too many times!");
  }
  else {
    *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar12 + -1;
  }
  FUN_1802bc580();
LAB_180306719:
  cVar9 = FUN_1802bc070("antiaim_mouse_override","mouse override");
  if (cVar9 != '\0') {
    DAT_181106f20 =
         "Locks mouse control so you can manually set the desired yaw angle when the cursor is farther from the screen center. Release the key to apply the chosen angles; press again to reset"
    ;
    FUN_1802d40f0(extraout_XMM0_Qa,&DAT_180921000);
    local_100 = "at targets";
    local_f0 = "static";
    local_f8 = "local view";
    DAT_181106f20 =
         "- \"At Targets\" rotates the set yaw relative to the angle toward the current threat\n- \"Local View\" rotates the set yaw relative to the camera\n- \"Static\" locks the set yaw as an absolute rotation"
    ;
    FUN_1802c2640(&DAT_18073ca80,&DAT_180921004,&local_100,3);
    local_130 = local_130 & 0xffffffff00000000;
    local_138 = "%d%%";
    FUN_18033fa10("sensitivity",&DAT_18092100c,5,300);
    local_130 = local_130 & 0xffffffff00000000;
    local_138 = "%d%%";
    FUN_18033fa10("deadzone",&DAT_180921010,0,99);
    FUN_1802d0b90(0);
    local_130 = 0;
    local_128 = (char *)&DAT_180921014;
    DAT_1811074e0 = 0x44000000;
    local_120 = &DAT_180921024;
    local_138 = (char *)0x0;
    DAT_1811074d0 = "icon_f53f";
    DAT_1811074d8 =
         "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 512 512\" width=\"512\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M512 256C512 257 512 258 512 259C511 296 478 320 441 320L344 320C317 320 296 342 296 368C296 372 296 375 297 378C299 389 303 398 307 408C313 422 319 436 319 449C319 481 298 510 266 511C263 511 259 512 255 512C114 512 0 398 0 256C0 115 114 0 256 0C397 0 512 115 512 256ZM128 288C128 271 113 256 96 256C78 256 64 271 64 288C64 306 78 320 96 320C113 320 128 306 128 288ZM128 192C145 192 160 178 160 160C160 143 145 128 128 128C110 128 96 143 96 160C96 178 110 192 128 192ZM288 96C288 79 273 64 256 64C238 64 224 79 224 96C224 114 238 128 256 128C273 128 288 114 288 96ZM384 192C401 192 416 178 416 160C416 143 401 128 384 128C366 128 352 143 352 160C352 178 366 192 384 192Z\"/></svg>"
    ;
    _DAT_1811074e4 = local_f0._4_4_;
    FUN_1802cfaf0("color",&local_128,2,1);
    DAT_1811074e0 = 0x44200000;
    local_110 = "default";
    local_108 = "fade-out";
    DAT_1811074d0 = "icon_e600";
    DAT_1811074d8 =
         "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 640 512\" width=\"640\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M192 288C192 323 199 355 213 384C130 379 64 309 64 224C64 136 135 64 224 64C256 64 286 74 311 90C240 128 192 203 192 288ZM224 448C235 448 246 448 256 446C297 486 353 512 416 512C539 512 640 412 640 288C640 165 539 64 416 64C404 64 393 65 383 67C342 26 286 0 224 0C100 0 0 101 0 224C0 348 100 448 224 448ZM416 448C383 448 353 439 328 423C399 385 448 310 448 224C448 190 440 158 426 129C510 134 576 204 576 288C576 377 504 448 416 448Z\"/></svg>"
    ;
    _DAT_1811074e4 = local_f0._4_4_;
    FUN_1802c2640("style",&DAT_180921008,&local_110,2);
    FUN_1802bc580();
  }
  iVar12 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
  if (iVar12 < 2) {
    FUN_1803ebc00("Calling PopID() too many times!");
  }
  else {
    *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar12 + -1;
  }
  FUN_1802b9760();
  return;
}



/* ===== 180306930 FUN_180306930 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180306930(void)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char cVar5;
  char *pcVar6;
  longlong lVar7;
  char *pcVar8;
  char *pcVar9;
  undefined *puVar10;
  longlong lVar11;
  undefined1 auStack_c8 [32];
  char *local_a8;
  ulonglong local_a0;
  char *local_98;
  char *local_90;
  char *local_88;
  char *local_80;
  char *local_78;
  char *local_70;
  char *local_68;
  undefined1 *local_60;
  undefined *local_58;
  undefined *local_50;
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_c8;
  FUN_1802b8a20(0);
  FUN_1802b9110(&DAT_18075c0e4);
  FUN_1803e89e0("legit_main");
  DAT_181106f20 = "Master switch for Legitbot functionality";
  FUN_1802c0a60("enabled",&DAT_18094f760);
  FUN_180331ea0(1);
  iVar4 = DAT_181106f14;
  lVar11 = (longlong)DAT_181106f14;
  iVar2 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
  if (iVar2 < 2) {
    FUN_1803ebc00("Calling PopID() too many times!");
  }
  else {
    *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar2 + -1;
  }
  lVar7 = lVar11 * 100;
  FUN_1802b9110("aimbot");
  FUN_1803e89e0("legit_aimbot");
  FUN_1803e8a70(iVar4);
  DAT_181106f20 = "Automatically aims at enemies\nConfigured separately for each weapon group";
  FUN_1802c0a60("enabled",&DAT_180954968 + lVar7);
  local_78 = "assisted";
  local_70 = "on attack";
  local_68 = "always on";
  DAT_181106f20 =
       "Aimbot activation mode\n\n- \"Assisted\" helps with aiming based on the user\'s mouse movement. Movement toward the target is amplified by the aimbot\n- \"On Attack\" aims at a constant speed while holding down the attack key (LMB). The user\'s mouse movement is ignored\n- \"Always On\" aims at a constant speed without additional conditions. Intended for use with a hotkey\n"
  ;
  FUN_1802c2640("activation",&DAT_18095496c + lVar7,&local_78,3);
  FUN_1802c3050("conditions",&PTR_s_through_walls_18076aa70,&DAT_180954970 + lVar7,6);
  cVar5 = FUN_1802badc0("conditions_options","conditions");
  pcVar8 = "%d%%";
  if (cVar5 != '\0') {
    DAT_181106f20 = "Maximum number of walls through which the Legitbot will scan the target";
    local_a0 = local_a0 & 0xffffffff00000000;
    local_a8 = "%d";
    FUN_18033fa10("penetration limit",&DAT_180954978 + lVar7,1,4);
    local_a0 = local_a0 & 0xffffffff00000000;
    DAT_181106f20 =
         "Maximum allowed smoke density on the way to the target. 100% corresponds to fully developed smoke."
    ;
    local_a8 = "%d%%";
    FUN_18033fa10("smoke threshold",&DAT_18095497c + lVar7,0,100);
    local_a0 = local_a0 & 0xffffffff00000000;
    DAT_181106f20 =
         "Maximum allowed player blindness. 100% corresponds to a completely white screen.";
    local_a8 = "%d%%";
    FUN_18033fa10("flash threshold",&DAT_180954980 + lVar7,0,100);
    FUN_1802bc580();
  }
  DAT_181106f20 =
       "Body parts that the aimbot will recognize and aim for.\nMultiple targeting points can be used within the hitbox.\nHead and body have equal high priority, limbs have lower priority."
  ;
  pcVar9 = &DAT_180954984 + lVar7;
  uVar3 = *(undefined4 *)pcVar9;
  uVar1 = (&DAT_180954988)[lVar7];
  FUN_1802c3050("hitboxes",&PTR_DAT_18076aa48,pcVar9,5);
  pcVar6 = pcVar9;
  do {
    if (*pcVar6 != '\0') goto LAB_180306be7;
    pcVar6 = pcVar6 + 1;
  } while (pcVar6 != &DAT_180954989 + lVar7);
  *(undefined4 *)pcVar9 = uVar3;
  (&DAT_180954988)[lVar7] = uVar1;
LAB_180306be7:
  cVar5 = FUN_1802badc0("hitboxes_options","hitboxes");
  if (cVar5 != '\0') {
    DAT_181106f20 =
         "When enabled, points closer to the center have higher priority and are checked first.";
    FUN_1802c0a60("prefer center",&DAT_180954989 + lVar7);
    FUN_1802bc580();
  }
  DAT_181106f20 =
       "Field of view within which the aimbot will react.\nThis is based on the angular distance to the target."
  ;
  local_a0 = local_a0 & 0xffffffff00000000;
  local_a8 = "%.0fu";
  FUN_18033e3a0("field of view",&DAT_18095498c + lVar7,DAT_1808ac750,DAT_1808acb60);
  local_a0 = local_a0 & 0xffffffff00000000;
  DAT_181106f20 =
       "Speed at which the crosshair moves between targets.\nThe higher the value, the slower the aiming process."
  ;
  local_a8 = "%d%%";
  FUN_18033fa10("smoothing",&DAT_180954990 + lVar7,1,100);
  cVar5 = FUN_1802badc0("smoothing_options","smoothing");
  if (cVar5 != '\0') {
    DAT_181106f20 =
         "Allows delaying the attack until aim is locked onto a target.\nActivates only if there\'s a target in the field of view."
    ;
    FUN_1802c0a60("first bullet delay",&DAT_180954994 + lVar7);
    local_a0 = local_a0 & 0xffffffff00000000;
    DAT_181106f20 =
         "Curvature of the line when aiming at the enemy.\nThe lower the value, the closer it is to a straight line."
    ;
    local_a8 = "%d%%";
    FUN_18033fa10("curve factor",&DAT_180954998 + lVar7,0,100);
    local_a0 = local_a0 & 0xffffffff00000000;
    DAT_181106f20 =
         "Controls deceleration as the aim is approaches the target.\nThe higher the value, the larger the deceleration zone."
    ;
    local_a8 = "%d%%";
    FUN_18033fa10("easing out",&DAT_18095499c + lVar7,0,100);
    FUN_1802bc580();
  }
  local_a0 = local_a0 & 0xffffffff00000000;
  DAT_181106f20 =
       "Time that must pass after an enemy appears on screen before the legitbot begins to react";
  puVar10 = &DAT_18075d2f4;
  local_a8 = "%dms";
  FUN_18033fa10("reaction time",&DAT_1809549a0 + lVar7,0,500);
  cVar5 = FUN_1802badc0("reaction_options","reaction time");
  if (cVar5 != '\0') {
    local_a0 = local_a0 & 0xffffffff00000000;
    DAT_181106f20 =
         "Time that must pass after killing/losing a target before the aimbot switches to the next one"
    ;
    local_a8 = "%dms";
    FUN_18033fa10("target switch delay",&DAT_1809549a4 + lVar7,0,1000);
    FUN_1802bc580();
  }
  DAT_181106f20 =
       "Minimum damage in HP required before aiming\n\n- \"Auto\" calculates minimum damage based on the weapon, its fire rate, and the target\'s health\n- \"HP+N\" sets minimum damage to value equal to the target\'s health plus N\n- \"Sync\" uses the minimum damage value from the triggerbot"
  ;
  FUN_1802d4540(&DAT_1809549a8 + lVar7,1);
  DAT_181106f20 =
       "Takes recoil into account when aiming at an enemy.\nIf disabled, the standalone recoil control settings are used."
  ;
  FUN_1802c0a60("recoil control",&DAT_1809549ac + lVar7);
  cVar5 = FUN_1802badc0("recoil_options","recoil control");
  if (cVar5 != '\0') {
    FUN_1802d4620(&DAT_1809549b0 + lVar7,0);
    FUN_1802bc580();
  }
  DAT_181106f20 = "Automatically scopes in for increased accuracy";
  FUN_1802c0a60("quick scope",&DAT_1809549c4 + lVar7);
  cVar5 = FUN_1802badc0("quick_scope_options","quick scope");
  if (cVar5 != '\0') {
    FUN_1802c0a60("automatic unzoom",&DAT_1809549c5 + lVar7);
    FUN_1802bc580();
  }
  DAT_181106f20 = "Stops quickly upon detecting an enemy.";
  FUN_1802c0a60("quick stop",&DAT_1809549c6 + lVar7);
  cVar5 = FUN_1802badc0("quick_stop_options","quick stop");
  if (cVar5 != '\0') {
    FUN_1802c0a60("full stop",&DAT_1809549c7 + lVar7);
    local_a0 = local_a0 & 0xffffffff00000000;
    local_a8 = "%dms";
    FUN_18033fa10("reaction time",&DAT_1809549c8 + lVar7,0,500);
    FUN_1802bc580();
  }
  lVar7 = DAT_180ca0a50;
  iVar2 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
  if (iVar2 < 2) {
    FUN_1803ebc00("Calling PopID() too many times!");
    lVar7 = DAT_180ca0a50;
  }
  else {
    *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar2 + -1;
  }
  iVar2 = *(int *)(*(longlong *)(lVar7 + 0x14f8) + 0x108);
  if (iVar2 < 2) {
    FUN_1803ebc00("Calling PopID() too many times!");
  }
  else {
    *(int *)(*(longlong *)(lVar7 + 0x14f8) + 0x108) = iVar2 + -1;
  }
  lVar11 = lVar11 * 0x3c;
  FUN_1802b9110("triggerbot");
  FUN_1803e89e0("legit_trigger");
  FUN_1803e8a70(iVar4);
  DAT_181106f20 =
       "Automatically fires as soon as the crosshair reaches the enemy.\nConfigured separately for each group of weapons."
  ;
  FUN_1802c0a60("enabled",&DAT_180956268 + lVar11);
  FUN_1802c3050("conditions",&PTR_s_through_walls_18076ab80,&DAT_180956269 + lVar11,5);
  cVar5 = FUN_1802badc0("conditions_options","conditions");
  if (cVar5 != '\0') {
    local_a0 = local_a0 & 0xffffffff00000000;
    DAT_181106f20 = "Maximum number of walls through which the Legitbot will scan the target";
    local_a8 = "%d";
    FUN_18033fa10("penetration limit",&DAT_180956270 + lVar11,1,4);
    local_a0 = local_a0 & 0xffffffff00000000;
    DAT_181106f20 =
         "Maximum allowed smoke density on the way to the target. 100% corresponds to fully developed smoke."
    ;
    local_a8 = "%d%%";
    FUN_18033fa10("smoke threshold",&DAT_180956274 + lVar11,0,100);
    local_a0 = local_a0 & 0xffffffff00000000;
    DAT_181106f20 =
         "Maximum allowed player blindness. 100% corresponds to a completely white screen.";
    local_a8 = "%d%%";
    FUN_18033fa10("flash threshold",&DAT_180956278 + lVar11,0,100);
    FUN_1802bc580();
  }
  DAT_181106f20 = "Body parts that may be shot.";
  pcVar9 = &DAT_18095627c + lVar11;
  uVar3 = *(undefined4 *)pcVar9;
  uVar1 = (&DAT_180956280)[lVar11];
  FUN_1802c3050("hitboxes",&PTR_DAT_18076aa48,pcVar9,5);
  pcVar6 = pcVar9;
  do {
    if (*pcVar6 != '\0') goto LAB_180307129;
    pcVar6 = pcVar6 + 1;
  } while (pcVar6 != &DAT_180956281 + lVar11);
  *(undefined4 *)pcVar9 = uVar3;
  (&DAT_180956280)[lVar11] = uVar1;
LAB_180307129:
  cVar5 = FUN_1802badc0("hitboxes_options","hitboxes");
  if (cVar5 != '\0') {
    DAT_181106f20 =
         "When enabled, the triggerbot shoots only at the center of hitbox.\nThe aimbot will also only aim at the central part."
    ;
    FUN_1802c0a60("force center",&DAT_180956281 + lVar11);
    FUN_1802bc580();
  }
  local_a0 = local_a0 & 0xffffffff00000000;
  DAT_181106f20 =
       "Minimum hit probability required before taking a shot.\nCalculation is based on the weapon spread and inaccuracy.\n\n- \"Seed\" special mode that accurately predicts the current shot and guarantees a hit"
  ;
  local_a8 = "%d%%";
  iVar2 = *(int *)(&DAT_180956284 + lVar11);
  if (100 < iVar2) {
    local_a8 = "seed";
  }
  FUN_18033fa10("hit chance",&DAT_180956284 + lVar11,1,0x65);
  cVar5 = FUN_1802badc0("hit_chance_options","hit chance");
  if (cVar5 != '\0') {
    if (iVar2 < 0x65) {
      FUN_1802c0a60("ignore spread",&DAT_180956288 + lVar11);
    }
    else {
      local_a0 = local_a0 & 0xffffffff00000000;
      if (*(int *)(&DAT_18095628c + lVar11) < 1) {
        pcVar8 = "unlimited";
      }
      local_a8 = pcVar8;
      FUN_18033fa10("legitimacy threshold",&DAT_18095628c + lVar11,0,100);
    }
    FUN_1802bc580();
  }
  DAT_181106f20 =
       "Minimum damage in HP required before aiming or taking a shot\n\n- \"Auto\" calculates minimum damage based on the weapon, its fire rate, and the target\'s health\n- \"HP+N\" sets minimum damage to value equal to the target\'s health plus N"
  ;
  FUN_1802d4540(&DAT_180956290 + lVar11,0);
  local_a0 = local_a0 & 0xffffffff00000000;
  DAT_181106f20 =
       "Time that must pass after an enemy appears on screen before the legitbot begins to react";
  local_a8 = "%dms";
  FUN_18033fa10("reaction time",&DAT_180956294 + lVar11,0,500);
  cVar5 = FUN_1802badc0("reaction_options","reaction time");
  if (cVar5 != '\0') {
    local_a0 = local_a0 & 0xffffffff00000000;
    DAT_181106f20 = "Minimum time the crosshair must be on target before taking a shot";
    local_a8 = "%dms";
    FUN_18033fa10("capture delay",&DAT_180956298 + lVar11,0,200);
    FUN_1802bc580();
  }
  local_a0 = local_a0 & 0xffffffff00000000;
  DAT_181106f20 = "Duration of holding the attack key when firing a shot";
  local_a8 = "%dms";
  FUN_18033fa10("burst time",&DAT_18095629c + lVar11,0x32,500);
  DAT_181106f20 = "Automatically scopes in for increased accuracy";
  FUN_1802c0a60("quick scope",&DAT_1809562a0 + lVar11);
  cVar5 = FUN_1802badc0("quick_scope_options","quick scope");
  if (cVar5 != '\0') {
    FUN_1802c0a60("automatic unzoom",&DAT_1809562a1 + lVar11);
    FUN_1802bc580();
  }
  lVar11 = DAT_180ca0a50;
  iVar2 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
  if (iVar2 < 2) {
    FUN_1803ebc00("Calling PopID() too many times!");
    lVar11 = DAT_180ca0a50;
  }
  else {
    *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar2 + -1;
  }
  iVar2 = *(int *)(*(longlong *)(lVar11 + 0x14f8) + 0x108);
  if (iVar2 < 2) {
    FUN_1803ebc00("Calling PopID() too many times!");
  }
  else {
    *(int *)(*(longlong *)(lVar11 + 0x14f8) + 0x108) = iVar2 + -1;
  }
  FUN_1802b9110("other");
  FUN_1803e89e0("legit_other");
  DAT_181106f20 = "Simplifies Legitbot configuration by visualizing its settings";
  FUN_1802c0a60("visualize",&DAT_180957168);
  cVar5 = FUN_1802badc0("visualize_options","visualize");
  if (cVar5 != '\0') {
    FUN_1802c0a60("target",&DAT_180957169);
    uVar3 = DAT_1808acda0;
    FUN_1803ec6c0(0,DAT_1808acda0);
    FUN_1802cedb0("##target_color",&DAT_18095716c,1);
    FUN_1802c0a60("field of view",&DAT_18095717c);
    FUN_1803ec6c0(0,uVar3);
    FUN_1802cedb0("##fov_color",&DAT_180957180,1);
    FUN_1802c0a60("hitboxes",&DAT_180957190);
    FUN_1803e89e0("hitbox_colors");
    FUN_1803ec6c0(0,uVar3);
    local_a0 = 0;
    local_80 = "low priority";
    local_88 = "high priority";
    local_98 = &DAT_180957194;
    local_a8 = (char *)0x0;
    local_90 = &DAT_1809571a4;
    FUN_1802f9be0("##colors",&local_88,&local_98,2);
    iVar2 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
    if (iVar2 < 2) {
      FUN_1803ebc00("Calling PopID() too many times!");
    }
    else {
      *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar2 + -1;
    }
    FUN_1802c0a60("recoil",&DAT_1809571b4);
    FUN_1803e89e0("recoil_colors");
    FUN_1803ec6c0(0,uVar3);
    local_a0 = 0;
    local_90 = "compensated";
    local_98 = "original";
    local_88 = &DAT_1809571b8;
    local_a8 = (undefined *)0x0;
    local_80 = &DAT_1809571c8;
    FUN_1802f9be0("##colors",&local_98,&local_88,2);
    iVar2 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
    if (iVar2 < 2) {
      FUN_1803ebc00("Calling PopID() too many times!");
    }
    else {
      *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar2 + -1;
    }
    FUN_1802c0a60("velocity",&DAT_1809571d8);
    cVar5 = FUN_1802badc0("velocity_options","velocity");
    if (cVar5 != '\0') {
      FUN_1802c0a60("speed",&DAT_1809571d9);
      FUN_1803ec6c0(0,uVar3);
      FUN_1802cedb0("##speed_color",&DAT_1809571dc,1);
      FUN_1802c0a60(&DAT_1806e14e4,&DAT_1809571ec);
      FUN_1803ec6c0(0,uVar3);
      FUN_1802cedb0("##jump_color",&DAT_1809571f0,1);
      FUN_1802c0a60("ground",&DAT_180957200);
      FUN_1803ec6c0(0,uVar3);
      FUN_1802cedb0("##ground_color",&DAT_180957204,1);
      FUN_1802bc580();
    }
    FUN_1802bc580();
  }
  DAT_181106f20 =
       "Allows spraying with non-automatic weapons such as pistols, shotguns, and sniper rifles";
  FUN_1802c0a60("automatic weapons",&DAT_180957214);
  cVar5 = FUN_1802badc0("automatic_weapons_options","automatic weapons");
  if (cVar5 != '\0') {
    local_a0 = local_a0 & 0xffffffff00000000;
    if (DAT_180957218 < 0x4b) {
      puVar10 = &DAT_18075d254;
    }
    local_a8 = puVar10;
    FUN_18033fa10("interval",&DAT_180957218,0x4a,0x15e);
    FUN_1802bc580();
  }
  DAT_181106f20 = "Controls weapon recoil independently of the aimbot";
  FUN_1802c0a60("standalone recoil control",&DAT_18095721c);
  cVar5 = FUN_1802badc0("standalone_recoil_options","standalone recoil control");
  if (cVar5 != '\0') {
    FUN_1802d4620(&DAT_180957220,1);
    FUN_1802bc580();
  }
  local_60 = &DAT_1806dfd84;
  local_58 = &DAT_180763bc8;
  local_50 = &DAT_180763ac0;
  DAT_181106f20 =
       "Adds noise to all settings and timings, simulating human imperfections. Used to reduce the likelihood of detection."
  ;
  FUN_1802c2640("randomize",&DAT_180957234,&local_60,3);
  iVar2 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
  if (iVar2 < 2) {
    FUN_1803ebc00("Calling PopID() too many times!");
  }
  else {
    *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar2 + -1;
  }
  FUN_1802b9760();
  return;
}



/* ===== 180307870 FUN_180307870 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180307870(void)

{
  code *pcVar1;
  char ***pppcVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  char cVar9;
  char ****ppppcVar10;
  longlong lVar11;
  int *piVar12;
  size_t sVar13;
  int iVar14;
  char *pcVar15;
  ulonglong uVar16;
  undefined **ppuVar17;
  int *piVar18;
  undefined1 *puVar19;
  bool bVar20;
  undefined1 auStack_118 [8];
  undefined1 auStack_110 [24];
  char *local_f8;
  undefined8 local_f0;
  char ****local_e8;
  char *pcStack_e0;
  char *local_d8;
  char *local_d0;
  undefined *local_c8;
  undefined8 local_c0;
  char *local_b8;
  char *local_b0;
  char *local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_180919500 ^ (ulonglong)auStack_118;
  FUN_1802b9110("windows");
  FUN_1803e89e0("beta_windows");
  FUN_1802c0a60("move game hud",&DAT_18095ce83);
  uVar5 = DAT_1808ac34c;
  local_f0 = (ulonglong)local_f0._4_4_ << 0x20;
  local_f8 = "%.3f";
  FUN_18033e3a0("hotkey list x",&DAT_18095ce88,0,DAT_1808ac34c);
  local_f0 = local_f0 & 0xffffffff00000000;
  local_f8 = "%.3f";
  FUN_18033e3a0("hotkey list y",&DAT_18095ce8c,0,uVar5);
  FUN_1802c2910("spectator list side",&DAT_18095cf1c,"right");
  uVar6 = DAT_1808ac658;
  local_f0 = local_f0 & 0xffffffff00000000;
  local_f8 = "%.2f";
  FUN_18033e3a0("event logs scale",&DAT_180920e60,DAT_1808ac1f4,DAT_1808ac658);
  local_f0 = local_f0 & 0xffffffff00000000;
  local_f8 = "%.3f";
  FUN_18033e3a0("event logs x",&DAT_180920e58,0,uVar5);
  local_f0 = local_f0 & 0xffffffff00000000;
  local_f8 = "%.3f";
  FUN_18033e3a0("event logs y",&DAT_180920e5c,0,uVar5);
  local_e8 = (char ****)&DAT_180920ee8;
  pcStack_e0 = &DAT_180920ef8;
  local_d8 = &DAT_180920f08;
  local_f0 = 0;
  local_f8 = (char *)0x0;
  FUN_1802cfaf0("event logs theme",&local_e8,3,0);
  puVar19 = auStack_118;
  local_e8 = (char ****)0x0;
  pcStack_e0 = (char *)0x0;
  local_d8 = (char *)0x0;
  local_c0 = (char *)((ulonglong)local_c0._4_4_ << 0x20);
  ppuVar17 = &PTR_s_insert_180658af0;
  do {
    if (*(int *)(ppuVar17 + 1) == DAT_18091a194) {
      local_c0 = (char *)CONCAT44(local_c0._4_4_,
                                  (int)((longlong)pcStack_e0 - (longlong)local_e8 >> 3));
    }
    FUN_1800242d0(&local_e8,ppuVar17);
    ppuVar17 = ppuVar17 + 2;
  } while (ppuVar17 != &PTR_s_weapon_galilar_180658c00);
  cVar9 = FUN_1802c2640("menu key",&local_c0,local_e8,(longlong)pcStack_e0 - (longlong)local_e8 >> 3
                       );
  if (cVar9 != '\0') {
    DAT_18091a194 = (&DAT_180658af8)[(longlong)(int)local_c0 * 4];
  }
  if (local_e8 == (char ****)0x0) {
LAB_180307b03:
    iVar14 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
    if (iVar14 < 2) {
      FUN_1803ebc00("Calling PopID() too many times!");
    }
    else {
      *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar14 + -1;
    }
    lVar11 = FUN_180303520();
    FUN_1803e89e0("beta_world");
    FUN_1802d2770(lVar11 + 4);
    iVar14 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
    if (iVar14 < 2) {
      FUN_1803ebc00("Calling PopID() too many times!");
    }
    else {
      *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar14 + -1;
    }
    FUN_1803e89e0(&DAT_1806f8584);
    FUN_1802d2bc0(lVar11 + 0x78);
    iVar14 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
    if (iVar14 < 2) {
      FUN_1803ebc00("Calling PopID() too many times!");
    }
    else {
      *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar14 + -1;
    }
    FUN_1803e89e0("lighting");
    FUN_1802b9110("lighting");
    FUN_1802c0a60("lighting modulation",lVar11 + 0x1ec);
    uVar4 = DAT_1808acda0;
    FUN_1803ec6c0(0,DAT_1808acda0);
    FUN_1802cf450("##lighting_color",lVar11 + 0x1f0);
    cVar9 = FUN_1802badc0("lighting_options","lighting modulation");
    if (cVar9 != '\0') {
      local_c0 = "modulation";
      local_b8 = "override";
      FUN_1802c2640(&DAT_1806e044c,lVar11 + 0x204,&local_c0,2);
      local_f0 = local_f0 & 0xffffffff00000000;
      local_f8 = "%.2f";
      FUN_18033e3a0("intensity",lVar11 + 0x200,0,DAT_1808ac864);
      FUN_1802bc580();
    }
    iVar14 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
    if (iVar14 < 2) {
      FUN_1803ebc00("Calling PopID() too many times!");
    }
    else {
      *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar14 + -1;
    }
    FUN_1803e89e0("weather");
    FUN_1802b9110("weather");
    FUN_1802c0a60("enabled",lVar11 + 0x23c);
    FUN_1803ec6c0(0,uVar4);
    FUN_1802cf450("##color",lVar11 + 0x244);
    iVar14 = *(int *)(lVar11 + 0x240) + -2;
    if (iVar14 < 0) {
      iVar14 = 0;
    }
    local_c0 = (char *)CONCAT44(local_c0._4_4_,iVar14);
    FUN_1802c2910(&DAT_1806e4980,&local_c0,"stars");
    *(int *)(lVar11 + 0x240) = (int)local_c0 + 2;
    local_f0 = local_f0 & 0xffffffff00000000;
    local_f8 = "%.2f";
    FUN_18033e3a0("density",lVar11 + 0x254,0,uVar6);
    if (*(int *)(lVar11 + 0x240) != 3) {
      local_f0 = local_f0 & 0xffffffff00000000;
      local_f8 = "%.2f";
      FUN_18033e3a0("gravity",lVar11 + 600,0,uVar6);
      local_f0 = local_f0 & 0xffffffff00000000;
      local_f8 = "%.2f";
      FUN_18033e3a0(&DAT_1806f83d8,lVar11 + 0x25c,0,uVar6);
    }
    iVar14 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
    if (iVar14 < 2) {
      FUN_1803ebc00("Calling PopID() too many times!");
    }
    else {
      *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar14 + -1;
    }
    FUN_1803e89e0("screen");
    FUN_1802b9110("screen effects");
    FUN_1802c0a60("rain drops",lVar11 + 0x20c);
    cVar9 = FUN_1802badc0("rain_options","rain drops");
    if (cVar9 != '\0') {
      local_f0 = local_f0 & 0xffffffff00000000;
      local_f8 = "%.2f";
      FUN_18033e3a0("rain amount",lVar11 + 0x210,0,uVar5);
      local_f0 = local_f0 & 0xffffffff00000000;
      local_f8 = "%.2f";
      FUN_18033e3a0("drops size",lVar11 + 0x214,DAT_1808ac1b0,DAT_1808ac5e0);
      local_f0 = local_f0 & 0xffffffff00000000;
      local_f8 = "%.2f";
      FUN_18033e3a0("drops speed",lVar11 + 0x218,0,uVar6);
      local_f0 = local_f0 & 0xffffffff00000000;
      local_f8 = "%.2f";
      FUN_18033e3a0("glass fog",lVar11 + 0x21c,0,uVar5);
      cVar9 = FUN_1802b9810("fog_options",0.0 < *(float *)(lVar11 + 0x21c));
      if (cVar9 != '\0') {
        local_f0 = local_f0 & 0xffffffff00000000;
        local_f8 = "%.2f";
        FUN_18033e3a0("fog blur",lVar11 + 0x220,DAT_1808ac140,DAT_1808ac540);
        FUN_1802b9a70();
      }
      FUN_1802bc580();
    }
    FUN_1802c0a60("chromatic aberration",lVar11 + 0x224);
    cVar9 = FUN_1802badc0("chromatic_options","chromatic aberration");
    if (cVar9 != '\0') {
      local_f0 = local_f0 & 0xffffffff00000000;
      local_f8 = "%.4f";
      FUN_18033e3a0("amount",lVar11 + 0x228,0,DAT_1808ac01c);
      FUN_1802bc580();
    }
    FUN_1802c0a60("motion blur",lVar11 + 0x234);
    cVar9 = FUN_1802badc0("motion_blur_options","motion blur");
    if (cVar9 != '\0') {
      local_f0 = local_f0 & 0xffffffff00000000;
      local_f8 = "%.2f";
      FUN_18033e3a0("strength",lVar11 + 0x238,0,uVar5);
      FUN_1802bc580();
    }
    iVar14 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
    if (iVar14 < 2) {
      FUN_1803ebc00("Calling PopID() too many times!");
    }
    else {
      *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar14 + -1;
    }
    FUN_1802b9110("inventory");
    FUN_1803e89e0("beta_inventory");
    FUN_1802c0a60("item preview auto rotate",&DAT_18093c6cc);
    if (0 < DAT_1809216e4) {
      bVar20 = DAT_181107418 != 0;
      pcVar15 = "play the music kit preview";
      if (DAT_181107418 != 0) {
        pcVar15 = "stop the music kit preview";
      }
      cVar9 = FUN_1802cf4d0(pcVar15);
      if (cVar9 != '\0') {
        DAT_1809f177c = DAT_1809216e4;
        if (bVar20) {
          DAT_1809f177c = 0;
        }
        LOCK();
        UNLOCK();
        DAT_181107418 = DAT_1809f177c;
      }
      _DAT_18110741c = *(undefined4 *)(DAT_180ca0a50 + 4);
    }
    if (0 < DAT_1809216e8) {
      piVar18 = &DAT_1809216ec;
      piVar12 = &DAT_1809216ec;
      do {
        if (*piVar12 == DAT_1809216e8) {
          bVar20 = true;
          goto LAB_1803080a3;
        }
        piVar12 = piVar12 + 1;
      } while (piVar12 != &DAT_18092174c);
      bVar20 = false;
LAB_1803080a3:
      pcVar15 = "keep the chosen medal in the inventory";
      if (bVar20) {
        pcVar15 = "stop keeping the chosen medal in the inventory";
      }
      cVar9 = FUN_1802cf4d0(pcVar15);
      if (cVar9 != '\0') {
        piVar12 = &DAT_1809216ec;
        do {
          if (*piVar12 == DAT_1809216e8) {
            *piVar12 = 0;
            goto LAB_1803080f7;
          }
          piVar12 = piVar12 + 1;
        } while (piVar12 != &DAT_18092174c);
        do {
          if (*piVar18 == 0) {
            *piVar18 = DAT_1809216e8;
            break;
          }
          piVar18 = piVar18 + 1;
        } while (piVar18 != &DAT_18092174c);
      }
    }
LAB_1803080f7:
    iVar14 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
    if (iVar14 < 2) {
      FUN_1803ebc00("Calling PopID() too many times!");
    }
    else {
      *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar14 + -1;
    }
    FUN_1802b9110("bomb text");
    FUN_1803e89e0("bomb_text");
    FUN_1802c0a60("enabled",&DAT_1809212e4);
    FUN_1803ec6c0(0,uVar4);
    FUN_1802cf450("##color",&DAT_180921308);
    FUN_1802cf930(&DAT_18058b7a0,s_neverlose_1809212e5,0x20,&DAT_18058b643);
    iVar14 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
    if (iVar14 < 2) {
      FUN_1803ebc00("Calling PopID() too many times!");
    }
    else {
      *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar14 + -1;
    }
    FUN_1802b9110("extra");
    FUN_1803e89e0("movement_extra");
    FUN_1802c0a60("edge bug",&DAT_180920cea);
    cVar9 = FUN_1802badc0("edgebug_options","edge bug");
    uVar7 = DAT_1808acaf4;
    if (cVar9 != '\0') {
      local_f0 = local_f0 & 0xffffffff00000000;
      local_f8 = "%d";
      FUN_18033fa10("max ticks",&DAT_180920cf0,1,0x20);
      FUN_1802c0a60("assisted",&DAT_180920cf4);
      if (DAT_180920cf4 != '\0') {
        local_f0 = local_f0 & 0xffffffff00000000;
        local_f8 = "%.0f";
        FUN_18033e3a0(&DAT_1806e0e18,&DAT_180920cf8,uVar5,uVar7);
        FUN_1802c0a60("silent",&DAT_180920cfc);
      }
      local_f0 = local_f0 & 0xffffffff00000000;
      local_f8 = "%d";
      FUN_18033fa10("edge bug passes",&DAT_180920cec,1,5);
      FUN_1802c0a60("edge bug jump steps",&DAT_180920cfd);
      FUN_1802bc580();
    }
    FUN_1802c0a60("long jump",&DAT_180920d06);
    cVar9 = FUN_1802badc0("longjump_options","long jump");
    if (cVar9 != '\0') {
      FUN_1802c0a60("block w/s",&DAT_180920d0d);
      FUN_1802bc580();
    }
    FUN_1802c0a60("mini jump",&DAT_180920d07);
    FUN_1802c0a60("ladder jump",&DAT_180920d08);
    FUN_1802c0a60("fireman",&DAT_180920d0a);
    cVar9 = FUN_1802badc0("fireman_options","fireman");
    if (cVar9 != '\0') {
      FUN_1802c0a60("release jump on ladder",&DAT_180920d0b);
      FUN_1802bc580();
    }
    FUN_1802c0a60("slide walk",&DAT_180920d0c);
    FUN_1802c0a60("pixel surf",&DAT_180920d0e);
    cVar9 = FUN_1802badc0("pixelsurf_options","pixel surf");
    if (cVar9 != '\0') {
      local_c0 = "contact";
      local_b8 = "planner";
      FUN_1802c2640(&DAT_1806e044c,&DAT_180920d24,&local_c0,2);
      if (DAT_180920d24 == 1) {
        local_f0 = local_f0 & 0xffffffff00000000;
        local_f8 = "%d";
        FUN_18033fa10("max ticks",&DAT_180920d10,2,0x1e);
        local_f0 = local_f0 & 0xffffffff00000000;
        local_f8 = "%.1f";
        FUN_18033e3a0("max turn",&DAT_180920d14,0,DAT_1808aca68);
        FUN_1802c0a60("assisted",&DAT_180920d18);
        local_f0 = local_f0 & 0xffffffff00000000;
        local_f8 = "%.0f";
        FUN_18033e3a0(&DAT_1806e0e18,&DAT_180920d1c,uVar5,uVar7);
      }
      if ((DAT_180920d24 == 0) || (DAT_180920d18 != '\0')) {
        FUN_1802c0a60("silent",&DAT_180920d20);
      }
      FUN_1802bc580();
    }
    FUN_1802c0a60("texture bug",&DAT_180920d78);
    cVar9 = FUN_1802badc0("texturebug_options","texture bug");
    if (cVar9 != '\0') {
      local_f0 = local_f0 & 0xffffffff00000000;
      local_f8 = "%d";
      FUN_18033fa10("max ticks",&DAT_180920d7c,2,0x1e);
      local_f0 = local_f0 & 0xffffffff00000000;
      local_f8 = "%.0f";
      FUN_18033e3a0("wall distance",&DAT_180920d80,DAT_1808ac750,DAT_1808aca80);
      FUN_1802c0a60("silent",&DAT_180920d84);
      FUN_1802bc580();
    }
    FUN_1802c0a60("mouse speed limiter",&DAT_180920d90);
    cVar9 = FUN_1802badc0("mouselimiter_options","mouse speed limiter");
    if (cVar9 != '\0') {
      local_f0 = local_f0 & 0xffffffff00000000;
      local_f8 = "%.1f";
      FUN_18033e3a0("max turn",&DAT_180920d94,0,DAT_1808aca68);
      local_f0 = local_f0 & 0xffffffff00000000;
      local_f8 = "%.1f";
      FUN_18033e3a0("divisor",&DAT_180920d98,uVar5,DAT_1808ac864);
      FUN_1802c0a60("in air only",&DAT_180920d9c);
      FUN_1802bc580();
    }
    iVar14 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
    if (iVar14 < 2) {
      FUN_1803ebc00("Calling PopID() too many times!");
    }
    else {
      *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar14 + -1;
    }
    FUN_1802b9110("local trail");
    FUN_1803e89e0("trail");
    FUN_1802c0a60("enabled",&DAT_180921050);
    FUN_1803ec6c0(0,uVar4);
    FUN_1802cf450("##color",&DAT_180921054);
    uVar4 = DAT_1808ac0c0;
    local_f0 = local_f0 & 0xffffffff00000000;
    local_f8 = "%.2f";
    FUN_18033e3a0("thickness",&DAT_180921064,DAT_1808ac0c0,DAT_1808ac428);
    local_f0 = local_f0 & 0xffffffff00000000;
    local_f8 = "%.1f s";
    FUN_18033e3a0("duration",&DAT_180921068,uVar4,DAT_1808ac864);
    iVar14 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
    if (iVar14 < 2) {
      FUN_1803ebc00("Calling PopID() too many times!");
    }
    else {
      *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar14 + -1;
    }
    FUN_1802b9110(&DAT_1806e4e50);
    FUN_1803e89e0(&DAT_1806e4e50);
    FUN_1802c0a60("reveal rank",&DAT_180920e22);
    FUN_1802c0a60("cancel match button",&DAT_180920e24);
    FUN_1802c0a60("auto pistol",&DAT_180920e25);
    FUN_1802c0a60("clan tag",&DAT_180920e26);
    cVar9 = FUN_1802badc0("clan_tag_options","clan tag");
    if (cVar9 != '\0') {
      local_c0 = "neverlose.one";
      local_b8 = "neverlose";
      FUN_1802c2640("style",&DAT_180920e28,&local_c0,2);
      FUN_1802bc580();
    }
    FUN_1802c0a60("notifications",&DAT_180920f20);
    cVar9 = FUN_1802badc0("notify_options","notifications");
    if (cVar9 != '\0') {
      local_e8 = (char ****)0x1806e7770;
      pcStack_e0 = "map loaded";
      local_d8 = "match start";
      local_d0 = "round start";
      local_c8 = &DAT_180765810;
      FUN_1802c3050("events",&local_e8,&DAT_180920f21,5);
      local_c0 = "windows";
      local_b8 = "taskbar";
      FUN_1802c3050("alerts",&local_c0,&DAT_180920f26,2);
      FUN_1802bc580();
    }
    FUN_1802c0a60("fake ping",&DAT_180920f34);
    cVar9 = FUN_1802badc0("fake_ping_options","fake ping");
    if (cVar9 != '\0') {
      local_f0 = local_f0 & 0xffffffff00000000;
      local_f8 = "%d ms";
      FUN_18033fa10(&DAT_1806e0ca4,&DAT_180920f38,0,1000);
      FUN_1802bc580();
    }
    iVar14 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
    if (iVar14 < 2) {
      FUN_1803ebc00("Calling PopID() too many times!");
    }
    else {
      *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar14 + -1;
    }
    FUN_1802b9110("hit effect");
    FUN_1803e89e0("hit_effect");
    FUN_1802c0a60("healthshot effect",&DAT_1809211a0);
    local_f0 = local_f0 & 0xffffffff00000000;
    local_f8 = "%.1f s";
    FUN_18033e3a0("duration",&DAT_1809211a4,uVar4,uVar6);
    local_f0 = local_f0 & 0xffffffff00000000;
    local_f8 = "%.2f";
    FUN_18033e3a0("strength",&DAT_1809211a8,uVar4,uVar5);
    iVar14 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
    if (iVar14 < 2) {
      FUN_1803ebc00("Calling PopID() too many times!");
    }
    else {
      *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar14 + -1;
    }
    FUN_1802b9110("movement hits");
    FUN_1803e89e0("movement_hits");
    local_c0 = "edge bug";
    local_b8 = "jump bug";
    local_b0 = "pixel surf";
    local_a8 = "texture bug";
    FUN_1802c3050("features",&local_c0,&DAT_180920d2c,4);
    FUN_1802c0a60("notify",&DAT_180920d28);
    cVar9 = FUN_1802badc0("notify_options","notify");
    if (cVar9 != '\0') {
      local_e8 = (char ****)&DAT_1806e1414;
      pcStack_e0 = "console";
      local_d8 = "screen";
      FUN_1802c3050("output",&local_e8,&DAT_180920d29,3);
      FUN_1802bc580();
    }
    FUN_1802d3370();
    iVar14 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
    if (iVar14 < 2) {
      FUN_1803ebc00("Calling PopID() too many times!");
    }
    else {
      *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar14 + -1;
    }
    FUN_1802b9110(&DAT_18076587c);
    FUN_1803e89e0(&DAT_18076587c);
    FUN_1802c0a60("give pet",&DAT_1809210d4);
    FUN_1802c0a60("chicken changer",&DAT_1809210cc);
    cVar9 = FUN_1802badc0("changer_options","chicken changer");
    if (cVar9 != '\0') {
      FUN_1802c2910("chickens",&DAT_1809210d0,"every chicken (experimental)");
      FUN_1802c0a60("name tag",&DAT_180921125);
      FUN_1802bc580();
    }
    FUN_1802c2910("life stage",&DAT_1809210d8,&DAT_180765908);
    cVar9 = FUN_1802b9810("breed_options",1 < DAT_1809210d8);
    if (cVar9 != '\0') {
      FUN_1802c2910("breed",&DAT_1809210dc,"catalana");
      FUN_1802b9a70();
    }
    local_f0 = local_f0 & 0xffffffff00000000;
    local_f8 = "%d";
    FUN_18033fa10("pattern seed",&DAT_1809210e0,1,1000);
    FUN_1802c0a60("seed per chicken",&DAT_1809210e4);
    FUN_1802cf930(&DAT_18058b644,&DAT_1809210e5,0x15,"no name");
    FUN_1802c0a60("pet in match",&DAT_180921127);
    cVar9 = FUN_1802badc0("local_pet_options","pet in match");
    uVar5 = DAT_1808ac950;
    if (cVar9 != '\0') {
      local_f0 = local_f0 & 0xffffffff00000000;
      local_f8 = "%.0f";
      FUN_18033e3a0("distance",&DAT_18092112c,DAT_1808ac950,DAT_1808acbb4);
      local_f0 = local_f0 & 0xffffffff00000000;
      local_f8 = "%.1fx";
      FUN_18033e3a0("speed",&DAT_180921130,DAT_1808ac154,DAT_1808ac5e0);
      FUN_1802c0a60("tricks",&DAT_180921128);
      FUN_1802bc580();
    }
    FUN_1802c0a60("on your shoulder",&DAT_180921134);
    cVar9 = FUN_1802badc0("shoulder_options","on your shoulder");
    if (cVar9 != '\0') {
      local_f0 = local_f0 & 0xffffffff00000000;
      local_f8 = "%.0f";
      FUN_18033e3a0("offset",&DAT_180921138,0,uVar5);
      FUN_1802bc580();
    }
    cVar9 = FUN_1802c2910("menu pet",&DAT_18092113c,&DAT_180765a70);
    if ((cVar9 != '\0') && (lVar11 = (longlong)(int)DAT_18092113c, DAT_18092113c < 0xd)) {
      local_e8 = (char ****)0x0;
      pcStack_e0 = (char *)0x0;
      local_d8 = (char *)0x0;
      local_d0 = (char *)0x0;
      local_e8 = (char ****)FUN_18000fb70(0x100);
      uVar3 = s__function______var_root_____GetC_180709c00._8_8_;
      local_d8 = (char *)0xff;
      local_d0 = (char *)0xff;
      *local_e8 = (char ***)s__function______var_root_____GetC_180709c00._0_8_;
      local_e8[1] = (char ***)uVar3;
      uVar3 = s__function______var_root_____GetC_180709c00._24_8_;
      local_e8[2] = (char ***)s__function______var_root_____GetC_180709c00._16_8_;
      local_e8[3] = (char ***)uVar3;
      uVar3 = s__function______var_root_____GetC_180709c00._40_8_;
      local_e8[4] = (char ***)s__function______var_root_____GetC_180709c00._32_8_;
      local_e8[5] = (char ***)uVar3;
      uVar3 = s__function______var_root_____GetC_180709c00._56_8_;
      local_e8[6] = (char ***)s__function______var_root_____GetC_180709c00._48_8_;
      local_e8[7] = (char ***)uVar3;
      uVar3 = s__function______var_root_____GetC_180709c00._72_8_;
      local_e8[8] = (char ***)s__function______var_root_____GetC_180709c00._64_8_;
      local_e8[9] = (char ***)uVar3;
      uVar3 = s__function______var_root_____GetC_180709c00._88_8_;
      local_e8[10] = (char ***)s__function______var_root_____GetC_180709c00._80_8_;
      local_e8[0xb] = (char ***)uVar3;
      uVar3 = s__function______var_root_____GetC_180709c00._104_8_;
      local_e8[0xc] = (char ***)s__function______var_root_____GetC_180709c00._96_8_;
      local_e8[0xd] = (char ***)uVar3;
      uVar3 = s__function______var_root_____GetC_180709c00._120_8_;
      local_e8[0xe] = (char ***)s__function______var_root_____GetC_180709c00._112_8_;
      local_e8[0xf] = (char ***)uVar3;
      uVar3 = s__function______var_root_____GetC_180709c00._136_8_;
      local_e8[0x10] = (char ***)s__function______var_root_____GetC_180709c00._128_8_;
      local_e8[0x11] = (char ***)uVar3;
      uVar3 = s__function______var_root_____GetC_180709c00._152_8_;
      local_e8[0x12] = (char ***)s__function______var_root_____GetC_180709c00._144_8_;
      local_e8[0x13] = (char ***)uVar3;
      uVar3 = s__function______var_root_____GetC_180709c00._168_8_;
      local_e8[0x14] = (char ***)s__function______var_root_____GetC_180709c00._160_8_;
      local_e8[0x15] = (char ***)uVar3;
      uVar3 = s__function______var_root_____GetC_180709c00._184_8_;
      local_e8[0x16] = (char ***)s__function______var_root_____GetC_180709c00._176_8_;
      local_e8[0x17] = (char ***)uVar3;
      uVar3 = s__function______var_root_____GetC_180709c00._200_8_;
      local_e8[0x18] = (char ***)s__function______var_root_____GetC_180709c00._192_8_;
      local_e8[0x19] = (char ***)uVar3;
      uVar3 = s__function______var_root_____GetC_180709c00._216_8_;
      local_e8[0x1a] = (char ***)s__function______var_root_____GetC_180709c00._208_8_;
      local_e8[0x1b] = (char ***)uVar3;
      pppcVar2 = (char ***)
                 CONCAT17(s__function______var_root_____GetC_180709c00[0xef],
                          s__function______var_root_____GetC_180709c00._232_7_);
      local_e8[0x1c] = (char ***)s__function______var_root_____GetC_180709c00._224_8_;
      local_e8[0x1d] = pppcVar2;
      uVar3 = s__function______var_root_____GetC_180709c00._247_8_;
      *(ulonglong *)((longlong)local_e8 + 0xef) =
           CONCAT71(s__function______var_root_____GetC_180709c00._240_7_,
                    s__function______var_root_____GetC_180709c00[0xef]);
      *(undefined8 *)((longlong)local_e8 + 0xf7) = uVar3;
      *(char *)((longlong)local_e8 + 0xff) = '\0';
      pcVar15 = (&PTR_DAT_180709d10)[lVar11];
      sVar13 = strlen(pcVar15);
      FUN_1800134a0(&local_e8,pcVar15,sVar13);
      FUN_1800134a0(&local_e8,"\'); })();",9);
      local_c0 = &DAT_1809f17d0;
      iVar14 = FUN_1804e4d70(&DAT_1809f17d0);
      if (iVar14 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1804e4a90(5);
      }
      if (DAT_1809f181c == 0x7fffffff) {
        DAT_1809f181c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
        FUN_1804e4a90(6);
      }
      ppppcVar10 = (char ****)&local_e8;
      if ((char *)0xf < local_d0) {
        ppppcVar10 = local_e8;
      }
      FUN_180029840(&DAT_1809f18b8,ppppcVar10,local_d8);
      FUN_1804e4e90(&DAT_1809f17d0);
      if ((char *)0xf < local_d0) {
        pcVar15 = local_d0 + 1;
        ppppcVar10 = local_e8;
        if ((char *)0xfff < pcVar15) {
          ppppcVar10 = (char ****)local_e8[-1];
          if ((char *)0x1f < (char *)((longlong)local_e8 + (-8 - (longlong)ppppcVar10)))
          goto LAB_180308ee9;
          pcVar15 = local_d0 + 0x28;
        }
        thunk_FUN_1803d64e0(ppppcVar10,pcVar15);
      }
      local_d8 = (char *)0x0;
      local_d0 = (char *)0xf;
      local_e8 = (char ****)((ulonglong)local_e8 & 0xffffffffffffff00);
    }
    lVar11 = *(longlong *)(DAT_180ca0a50 + 0x14f8);
    iVar14 = *(int *)(lVar11 + 0x108);
    puVar8 = auStack_118;
    if (iVar14 < 2) {
      FUN_1803ebc00("Calling PopID() too many times!");
      goto LAB_180308ef8;
    }
  }
  else {
    uVar16 = ((longlong)local_d8 - (longlong)local_e8 >> 3) * 8;
    if (uVar16 < 0x1000) {
      ppppcVar10 = local_e8;
LAB_180307aee:
      thunk_FUN_1803d64e0(ppppcVar10,uVar16);
      local_e8 = (char ****)0x0;
      pcStack_e0 = (char *)0x0;
      local_d8 = (char *)0x0;
      goto LAB_180307b03;
    }
    if ((char *)((longlong)local_e8 + (-8 - (longlong)local_e8[-1])) < (char *)0x20) {
      uVar16 = uVar16 + 0x27;
      ppppcVar10 = (char ****)local_e8[-1];
      goto LAB_180307aee;
    }
LAB_180308ee9:
    lVar11 = 5;
    pcVar1 = (code *)swi(0x29);
    iVar14 = (*pcVar1)();
    puVar8 = auStack_110;
  }
  puVar19 = puVar8;
  *(int *)(lVar11 + 0x108) = iVar14 + -1;
LAB_180308ef8:
  *(undefined8 *)(puVar19 + -8) = 0x180308f04;
  FUN_1802b9110("media player");
  *(undefined8 *)(puVar19 + -8) = 0x180308f10;
  FUN_1803e89e0("media");
  *(undefined8 *)(puVar19 + -8) = 0x180308f23;
  FUN_1802c0a60("enabled",&DAT_180921140);
  *(undefined8 *)(puVar19 + -8) = 0x180308f36;
  FUN_1802c0a60("hide when nothing plays",&DAT_180921141);
  *(undefined8 *)(puVar19 + -8) = 0x180308f49;
  FUN_1802c0a60("spinning cover",&DAT_180921142);
  *(undefined8 *)(puVar19 + -8) = 0x180308f55;
  cVar9 = FUN_1802cf4d0("reset position");
  if (cVar9 != '\0') {
    DAT_180921148 = 0xbf800000;
    DAT_180921144 = 0xbf800000;
  }
  iVar14 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
  if (iVar14 < 2) {
    *(undefined8 *)(puVar19 + -8) = 0x180308f92;
    FUN_1803ebc00("Calling PopID() too many times!");
  }
  else {
    *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar14 + -1;
  }
  *(undefined8 *)(puVar19 + -8) = 0x180308fa8;
  return;
}



/* ===== 180309000 FUN_180309000 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1
FUN_180309000(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6,uint param_7)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  undefined1 uVar4;
  char cVar5;
  undefined4 uVar6;
  float *pfVar7;
  float *pfVar8;
  undefined8 uVar9;
  float fVar10;
  undefined8 local_res10;
  undefined8 in_stack_ffffffffffffff68;
  float local_78 [4];
  longlong local_68 [2];
  float local_58;
  float local_54;
  float local_50;
  undefined4 local_4c;
  undefined4 local_48;
  
  lVar3 = DAT_180ca0a50;
  uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffff68 >> 0x20);
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  uVar1 = *param_2;
  lVar3 = *(longlong *)(lVar3 + 0x14f8);
  *(undefined8 *)(lVar3 + 0x118) = uVar1;
  *(undefined1 *)(lVar3 + 0x159) = 1;
  uVar4 = FUN_180415e30(uVar1,param_3,0);
  cVar5 = FUN_1803dd930(0);
  iVar2 = *(int *)(DAT_180ca0a50 + 0x1ee8);
  if ((*(int *)(DAT_180ca0a50 + 0x1578) == 0) || (*(int *)(DAT_180ca0a50 + 0x1578) != iVar2)) {
    if (cVar5 == '\0') {
      fVar10 = 0.0;
    }
    else {
      fVar10 = DAT_1808ac1f4;
    }
  }
  else {
    fVar10 = DAT_1808ac34c;
  }
  local_res10 = CONCAT44(local_res10._4_4_,iVar2);
  local_4c = 0;
  local_48 = 0xffffffff;
  local_58 = fVar10;
  local_54 = fVar10;
  local_50 = fVar10;
  FUN_18034a380(iVar2,local_68,&local_res10,&local_58);
  uVar9 = FUN_1802b3660(local_68[0] + 0x14,fVar10,DAT_1808ac118,0);
  lVar3 = DAT_180ca0a50;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  uVar1 = *(undefined8 *)(*(longlong *)(lVar3 + 0x14f8) + 0x2c8);
  if (0.0 < (float)uVar9) {
    local_78[2] = 1.0;
    local_78[0] = 0.0;
    local_res10 = CONCAT44((float)((ulonglong)*param_2 >> 0x20) +
                           (float)((ulonglong)*param_3 >> 0x20),(float)*param_2 + (float)*param_3);
    local_78[1] = (float)uVar9 * DAT_1808ac1b0 * DAT_1808ac2cc;
    pfVar8 = local_78;
    if (0.0 <= local_78[1]) {
      pfVar8 = local_78 + 1;
    }
    pfVar7 = local_78 + 2;
    if (local_78[1] <= DAT_1808ac34c) {
      pfVar7 = pfVar8;
    }
    FUN_1803fe590(uVar1,param_2,&local_res10,
                  (int)(longlong)(*pfVar7 * DAT_1808acb94 + DAT_1808ac1f4) << 0x18 |
                  DAT_180960f44 & 0xffffff,CONCAT44(uVar6,DAT_1808ac7ac),0);
  }
  local_res10 = CONCAT44((float)((ulonglong)*param_3 >> 0x20) * _UNK_1808ad9f4 +
                         (float)((ulonglong)*param_2 >> 0x20),
                         (float)*param_3 * _DAT_1808ad9f0 + (float)*param_2);
  uVar6 = FUN_1802b38e0((int)(longlong)((float)(param_7 >> 0x18) * DAT_1808ac254 + DAT_1808ac1f4) <<
                        0x18 | param_7 & 0xffffff,param_7,uVar9);
  FUN_1802b6e90(uVar1,param_4,param_5,param_6,&local_res10,DAT_1808ac8d4,uVar6);
  return uVar4;
}



/* ===== 1803092b0 FUN_1803092b0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1803092b0(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5,undefined4 param_6,undefined8 param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  byte bVar4;
  ulonglong in_RAX;
  undefined4 local_38;
  undefined4 local_34;
  float local_30;
  undefined4 local_2c;
  
  if ((DAT_181107150 != DAT_181107158) &&
     (*(float *)(DAT_181107158 + -0x24) < *(float *)(DAT_181107158 + -0x1c))) {
    local_38 = 0x41e393de;
    local_34 = 0x41bda5e3;
    uVar1 = *(undefined4 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x118);
    uVar2 = *(undefined4 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x11c);
    local_30 = *(float *)(DAT_181107158 + -0x1c) - (float)(3 - param_1) * _DAT_1808ac9d4;
    local_2c = *(undefined4 *)(DAT_181107158 + -0x20);
    bVar4 = FUN_180309000(param_3,&local_30,&local_38,param_4,param_5,param_6,DAT_180960f38);
    FUN_1802b6120(param_7,0);
    lVar3 = DAT_180ca0a50;
    *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
    lVar3 = *(longlong *)(lVar3 + 0x14f8);
    *(undefined4 *)(lVar3 + 0x118) = uVar1;
    *(undefined4 *)(lVar3 + 0x11c) = uVar2;
    *(undefined1 *)(lVar3 + 0x159) = 1;
    return (ulonglong)bVar4;
  }
  return in_RAX & 0xffffffffffffff00;
}



/* ===== 1803093f0 FUN_1803093f0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1803093f0(int *param_1)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  byte bVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  char cVar9;
  char cVar10;
  undefined1 uVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int iVar15;
  longlong lVar16;
  int *piVar17;
  float *pfVar18;
  undefined8 *puVar19;
  longlong *plVar20;
  float *pfVar21;
  longlong lVar22;
  ulonglong uVar23;
  undefined8 uVar24;
  longlong *plVar25;
  longlong lVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  char ******ppppppcVar29;
  bool bVar30;
  float fVar31;
  float fVar32;
  undefined8 extraout_XMM0_Qa;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined1 auStack_2e8 [32];
  char *local_2c8;
  undefined8 local_2c0;
  char ******local_2b8;
  undefined8 local_2b0;
  undefined4 local_2a8;
  undefined4 local_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  uint local_288 [2];
  float local_280;
  float local_27c;
  float local_278;
  float local_274;
  float local_270;
  undefined4 local_26c;
  undefined4 local_268;
  undefined4 local_260 [2];
  float local_258 [4];
  float local_248;
  undefined8 local_240;
  undefined8 uStack_238;
  float local_230;
  float local_22c;
  float local_228;
  float local_224;
  float local_220 [3];
  float local_214;
  float local_210;
  float local_20c;
  undefined4 local_208;
  undefined4 local_204;
  float local_200;
  float local_1fc;
  ulonglong local_1f8;
  longlong local_1f0;
  longlong local_1e8;
  ulonglong local_1e0;
  longlong local_1d8 [2];
  char *local_1c8 [2];
  undefined4 local_1b8 [2];
  char *local_1b0 [3];
  undefined4 local_198;
  char *local_190;
  char *local_188;
  char *local_180;
  undefined4 local_178;
  char *local_170;
  char *local_168;
  undefined *local_160;
  undefined4 local_158;
  char *local_150;
  char *local_148;
  char *local_140;
  undefined4 local_138;
  char *local_130;
  longlong local_128 [2];
  char ******local_118 [3];
  ulonglong local_100;
  ulonglong local_f8;
  
  local_f8 = DAT_180919500 ^ (ulonglong)auStack_2e8;
  FUN_1802b9bd0();
  local_1c8[0] = "nl_glyph_head_side";
  local_1c8[1] = 
  "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 512 512\" width=\"512\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M0 225C0 101 100 0 224 0L248 0C343 0 429 70 445 161C447 174 452 186 460 197L502 249C508 257 512 267 512 277C512 301 492 320 468 320L448 320L448 384C448 420 419 448 384 448L320 448L320 479C320 497 305 511 288 511L96 511C78 511 64 497 64 479L64 408C64 391 57 375 46 362C16 323 0 275 0 225L0 225ZM352 224C369 224 384 210 384 192C384 175 369 160 352 160C334 160 320 175 320 192C320 210 334 224 352 224Z\"/></svg>"
  ;
  local_1b8[0] = 0x44000000;
  local_1b0[0] = "Head Shot";
  local_1b0[1] = "nl_glyph_user";
  local_1b0[2] = 
  "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 448 512\" width=\"448\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M224 256C269 256 311 232 334 192C357 153 357 104 334 64C311 25 269 0 224 0C178 0 136 25 113 64C90 104 90 153 113 192C136 232 178 256 224 256ZM178 304C79 304 0 384 0 482C0 498 13 512 29 512L418 512C434 512 448 498 448 482C448 384 368 304 269 304L178 304Z\"/></svg>"
  ;
  local_198 = 0x43e00000;
  local_190 = "Body Shot";
  local_188 = "nl_glyph_skull";
  local_180 = 
  "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 512 512\" width=\"512\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M416 399C474 358 512 295 512 224C512 101 397 0 256 0C114 0 0 101 0 224C0 295 37 358 96 399C96 400 96 400 96 400L96 464C96 490 117 512 144 512L192 512L192 464C192 455 199 448 208 448C216 448 224 455 224 464L224 512L288 512L288 464C288 455 295 448 304 448C312 448 320 455 320 464L320 512L368 512C394 512 416 490 416 464L416 400C416 400 416 400 416 399ZM96 256C96 234 108 213 128 201C147 190 172 190 192 201C211 213 224 234 224 256C224 279 211 300 192 312C172 323 147 323 128 312C108 300 96 279 96 256ZM352 192C374 192 395 205 407 224C418 244 418 269 407 288C395 308 374 320 352 320C329 320 308 308 296 288C285 269 285 244 296 224C308 205 329 192 352 192Z\"/></svg>"
  ;
  local_178 = 0x44000000;
  local_170 = "Lethal Shot";
  local_168 = "nl_glyph_damage_received";
  local_160 = &DAT_18074e7c0;
  local_158 = 0x44100000;
  local_150 = "Damage Received";
  local_148 = "nl_glyph_circle_exclamation";
  local_140 = 
  "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 512 512\" width=\"512\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M256 512C347 512 431 463 477 384C523 305 523 208 477 128C431 49 347 0 256 0C164 0 80 49 34 128C-11 208 -11 305 34 384C80 463 164 512 256 512ZM256 128C269 128 280 139 280 152L280 264C280 278 269 288 256 288C242 288 232 278 232 264L232 152C232 139 242 128 256 128ZM224 352C224 335 238 320 256 320C273 320 288 335 288 352C288 370 273 384 256 384C238 384 224 370 224 352Z\"/></svg>"
  ;
  local_138 = 0x44000000;
  local_130 = "Missed Aimbot Shot";
  if (DAT_180ccfba4 == '\0') {
    FUN_18026cdb0();
  }
  fVar8 = DAT_1808aca50;
  fVar6 = DAT_1808ac7ac;
  uVar28 = (DAT_180cfa278 - DAT_180cfa270 >> 3) * -0x71c71c71c71c71c7;
  uVar27 = 10;
  if (uVar28 < 10) {
    uVar27 = uVar28;
  }
  fVar31 = 0.0;
  uVar23 = 0;
  if ((DAT_180cfa278 - DAT_180cfa270 >> 3) * -0x71c71c71c71c71c7 != 0) {
    do {
      if (uVar23 != 0) {
        fVar31 = fVar31 + DAT_1808ac750;
      }
      if ((uVar23 == uVar27) && (uVar23 != 0)) {
        fVar31 = fVar31 + DAT_1808ac7ac;
      }
      fVar31 = fVar31 + DAT_1808aca50;
      uVar23 = uVar23 + 1;
    } while (uVar23 < uVar28);
  }
  fVar36 = DAT_1808acbc4;
  if (fVar31 <= DAT_1808acbc4) {
    fVar36 = fVar31;
  }
  fVar31 = DAT_1809f72f0 - DAT_1808ac710;
  fVar34 = DAT_1809f72fc - DAT_1808ac710;
  local_248 = fVar36;
  local_1e0 = uVar27;
  uVar12 = FUN_1803e8900(*(undefined8 *)(DAT_180ca0a50 + 0x14f8),"##hit_sound_scroll");
  uVar28 = (((((ulonglong)(uVar12 & 0xff) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
             (ulonglong)(uVar12 >> 8 & 0xff)) * 0x100000001b3 ^ (ulonglong)(uVar12 >> 0x10 & 0xff))
            * 0x100000001b3 ^ (ulonglong)(uVar12 >> 0x18)) * 0x100000001b3 & DAT_1811077a0;
  lVar16 = *(longlong *)(DAT_181107788 + 8 + uVar28 * 0x10);
  if (lVar16 != DAT_181107778) {
    uVar2 = *(uint *)(lVar16 + 0x10);
    while (uVar12 != uVar2) {
      if (lVar16 == *(longlong *)(DAT_181107788 + uVar28 * 0x10)) goto LAB_1803096c8;
      lVar16 = *(longlong *)(lVar16 + 8);
      uVar2 = *(uint *)(lVar16 + 0x10);
    }
    if (lVar16 != 0) goto LAB_1803096cb;
  }
LAB_1803096c8:
  lVar16 = DAT_181107778;
LAB_1803096cb:
  if (lVar16 == DAT_181107778) {
    uVar24 = 0;
  }
  else {
    uVar24 = *(undefined8 *)(lVar16 + 0x18);
  }
  local_288[0] = uVar12;
  FUN_1802b6190(uVar12,uVar24);
  lVar16 = DAT_180ca0a50;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  lVar16 = *(longlong *)(lVar16 + 0x14f8);
  *(float *)(lVar16 + 0x118) = fVar31;
  *(float *)(lVar16 + 0x11c) = fVar34;
  *(undefined1 *)(lVar16 + 0x159) = 1;
  local_298 = 0x4080000040800000;
  FUN_1803d89a0(2,&local_298);
  local_298 = 0;
  FUN_1803d89a0(0xe,&local_298);
  lVar16 = DAT_180ca0a50;
  local_298 = CONCAT44(fVar36 + DAT_1808ac838,DAT_1809f72f4 + DAT_1808ac838);
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  uVar13 = FUN_1803e8900(*(undefined8 *)(lVar16 + 0x14f8),"##hit_sound_list");
  local_2c8 = (char *)CONCAT44(local_2c8._4_4_,0x98);
  cVar9 = FUN_1803e1800("##hit_sound_list",uVar13,&local_298,2);
  if (cVar9 != '\0') {
    FUN_1802b6490(uVar12,0,0,0);
    lVar22 = DAT_180ca0a50;
    *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
    lVar26 = DAT_180cfa270;
    local_1f0 = *(longlong *)(lVar22 + 0x14f8);
    lVar16 = *(longlong *)(local_1f0 + 0x2c8);
    fVar31 = *(float *)(local_1f0 + 0x11c);
    uVar28 = 0;
    local_1f8 = 0;
    local_1e8 = lVar16;
    if ((DAT_180cfa278 - DAT_180cfa270 >> 3) * -0x71c71c71c71c71c7 != 0) {
      local_258[3] = (float)FUN_18053f0d0();
      fVar7 = DAT_1808ac97c;
      fVar34 = DAT_1808ac34c;
      fVar36 = DAT_1808ac1f4;
      do {
        fVar35 = DAT_1808ac118;
        plVar20 = (longlong *)(lVar26 + uVar28 * 0x48);
        if ((uVar28 == uVar27) && (uVar28 != 0)) {
          local_228 = *(float *)(local_1f0 + 0x28);
          local_230 = local_228 + *(float *)(local_1f0 + 0x30);
          local_22c = fVar31 + fVar34;
          local_2c0 = (undefined8 *)((ulonglong)local_2c0 & 0xffffffff00000000);
          local_2c8 = (char *)((ulonglong)local_2c8 & 0xffffffff00000000);
          local_224 = fVar31;
          FUN_1803fe590(lVar16,&local_228,&local_230,DAT_180960f48);
          fVar31 = fVar31 + fVar6;
        }
        FUN_1803e8a70();
        lVar22 = DAT_180ca0a50;
        local_220[0] = DAT_1809f72f0;
        bVar4 = false;
        if (param_1 != param_1 + 5) {
          piVar17 = param_1;
          do {
            if (((int)plVar20[8] == 0) || (*piVar17 != (int)plVar20[8])) {
              bVar5 = 0;
            }
            else {
              bVar5 = 1;
            }
            bVar4 = (bool)(bVar4 | bVar5);
            piVar17 = piVar17 + 1;
          } while (piVar17 != param_1 + 5);
        }
        local_280 = DAT_1809f72f4 + DAT_1809f72f0;
        local_27c = fVar31 + fVar8;
        *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
        lVar26 = *(longlong *)(lVar22 + 0x14f8);
        local_298 = CONCAT44(fVar31,local_220[0]);
        *(undefined8 *)(lVar26 + 0x118) = local_298;
        *(undefined1 *)(lVar26 + 0x159) = 1;
        puVar1 = (uint *)(lVar22 + 0x1eb4);
        *puVar1 = *puVar1 | 0x4000;
        local_220[0] = local_280 - local_220[0];
        local_220[1] = 38.706;
        cVar9 = FUN_180415e30("##row",local_220,0);
        cVar10 = FUN_1803dd930(0);
        iVar15 = *(int *)(DAT_180ca0a50 + 0x1ee8);
        if (*(int *)(DAT_180ca0a50 + 0x1578) == 0) {
          bVar30 = false;
LAB_1803099d3:
          if (cVar10 == '\0') {
            fVar32 = 0.0;
          }
          else {
            fVar32 = fVar36;
          }
        }
        else {
          bVar30 = *(int *)(DAT_180ca0a50 + 0x1578) == iVar15;
          if (!bVar30) goto LAB_1803099d3;
          fVar32 = fVar34;
        }
        local_240 = CONCAT44(local_240._4_4_,iVar15);
        local_26c = 0;
        local_268 = 0xffffffff;
        local_278 = fVar32;
        local_274 = fVar32;
        local_270 = fVar32;
        FUN_18034a380(iVar15,local_128,&local_240,&local_278);
        fVar32 = (float)FUN_1802b3660(local_128[0] + 0x14,fVar32,fVar35,0);
        if (bVar4 || bVar30) {
          fVar33 = fVar34;
        }
        else if (cVar10 == '\0') {
          fVar33 = 0.0;
        }
        else {
          fVar33 = fVar36;
        }
        local_260[0] = FUN_1803e8900(*(undefined8 *)(DAT_180ca0a50 + 0x14f8),"##lit");
        local_26c = 0;
        local_268 = 0xffffffff;
        local_278 = fVar33;
        local_274 = fVar33;
        local_270 = fVar33;
        FUN_18034a380(extraout_XMM0_Qa,local_1d8,local_260,&local_278);
        uVar13 = FUN_1802b3660(local_1d8[0] + 0x14,fVar33,fVar35,0);
        if (0.0 < fVar32) {
          local_258[2] = 1.0;
          local_258[0] = 0.0;
          local_258[1] = fVar32 * fVar35 * DAT_1808ac2cc;
          pfVar21 = local_258;
          if (0.0 <= local_258[1]) {
            pfVar21 = local_258 + 1;
          }
          pfVar18 = local_258 + 2;
          if (local_258[1] <= fVar34) {
            pfVar18 = pfVar21;
          }
          local_2c0 = (undefined8 *)((ulonglong)local_2c0 & 0xffffffff00000000);
          local_2c8 = (char *)CONCAT44(local_2c8._4_4_,DAT_1808ac7ec);
          FUN_1803fe590(lVar16,&local_298,&local_280,
                        DAT_180960f44 & 0xffffff |
                        (int)(longlong)(*pfVar18 * DAT_1808acb94 + fVar36) << 0x18);
        }
        local_240 = _DAT_1808add00;
        uStack_238 = _UNK_1808add08;
        uVar14 = FUN_1802b38e0(DAT_180960eec,
                               (int)(longlong)
                                    ((float)(DAT_1809f54bc >> 0x18) * DAT_1808ac1b0 + fVar36) <<
                               0x18 | DAT_1809f54bc & 0xffffff,uVar13);
        local_2b8 = (char ******)CONCAT44(local_2b8._4_4_,fVar34);
        local_2c0 = (undefined8 *)((ulonglong)local_2c0 & 0xffffffff00000000);
        local_2c8 = (char *)&local_240;
        FUN_18036bcb0(lVar16,&local_298,&local_280,uVar14);
        fVar35 = (local_280 - DAT_1808ac8b0) - _DAT_1808acb14;
        if ((ulonglong)plVar20[3] < 0x10) {
          plVar25 = plVar20;
        }
        else {
          plVar25 = (longlong *)*plVar20;
        }
        FUN_1802b3fe0(local_118,plVar25);
        fVar32 = local_27c;
        local_220[2] = fVar35 - fVar6;
        local_214 = local_27c;
        FUN_1803fc200(lVar16,&local_298,local_220 + 2,1);
        ppppppcVar29 = (char ******)local_118;
        if (0xf < local_100) {
          ppppppcVar29 = local_118[0];
        }
        uVar12 = FUN_1802b38e0(DAT_180960ef8,DAT_180960ec8,uVar13);
        local_210 = (float)local_298 + DAT_1808ac8b0;
        fVar33 = local_298._4_4_;
        local_20c = local_258[3] + local_298._4_4_;
        if ((((uVar12 & 0xff000000) != 0) && (ppppppcVar29 != (char ******)0x0)) &&
           (*(char *)ppppppcVar29 != '\0')) {
          local_298 = *(undefined8 *)(lVar16 + 0x60);
          uStack_290 = *(undefined8 *)(lVar16 + 0x68);
          local_2a0 = 0;
          local_2a8 = 0;
          local_2b0 = 0;
          local_2c0 = &local_298;
          local_2c8 = (char *)CONCAT44(local_2c8._4_4_,uVar12);
          local_2b8 = ppppppcVar29;
          FUN_18040a900(*(undefined8 *)(*(longlong *)(lVar16 + 0x38) + 0x18),lVar16,DAT_1808ac930,
                        &local_210);
        }
        iVar3 = *(int *)(lVar16 + 0xa0);
        iVar15 = iVar3 + -1;
        *(int *)(lVar16 + 0xa0) = iVar15;
        if (iVar15 == 0) {
          puVar19 = (undefined8 *)(*(longlong *)(lVar16 + 0x38) + 0x34);
        }
        else {
          puVar19 = (undefined8 *)((longlong)(iVar3 + -2) * 0x10 + *(longlong *)(lVar16 + 0xa8));
        }
        uVar24 = puVar19[1];
        *(undefined8 *)(lVar16 + 0x60) = *puVar19;
        *(undefined8 *)(lVar16 + 0x68) = uVar24;
        FUN_1803fbff0(lVar16);
        fVar32 = (fVar33 + fVar32) - DAT_1808ac954;
        uVar27 = 0;
        do {
          FUN_1803e8a70(uVar27);
          if (((int)plVar20[8] == 0) || (param_1[uVar27] != (int)plVar20[8])) {
            bVar4 = false;
            uVar12 = DAT_180960f38;
          }
          else {
            bVar4 = true;
            uVar12 = DAT_1809f54bc;
          }
          local_208 = 0x41bda5e3;
          local_204 = 0x41a5a5e3;
          local_200 = (float)(int)uVar27 * fVar7 + fVar35;
          local_2b8 = (char ******)CONCAT44(local_2b8._4_4_,uVar12);
          local_2c8 = local_1c8[uVar27 * 4 + 1];
          local_1fc = fVar32 * fVar36;
          local_2c0._0_4_ = local_1b8[uVar27 * 8];
          cVar10 = FUN_180309000("##cue",&local_200,&local_208,local_1c8[uVar27 * 4]);
          if (cVar10 != '\0') {
            if (bVar4) {
              iVar15 = 0;
            }
            else {
              iVar15 = (int)plVar20[8];
            }
            param_1[uVar27] = iVar15;
          }
          local_298 = *(undefined8 *)(DAT_180ca0a50 + 0x1efc);
          local_240 = *(undefined8 *)(DAT_180ca0a50 + 0x1ef4);
          uVar11 = FUN_1803dd930(0);
          local_2c0 = (undefined8 *)((ulonglong)local_2c0._4_4_ << 0x20);
          local_2c8 = (char *)&local_298;
          FUN_1802b56a0(local_1b0[uVar27 * 4],0,uVar11,&local_240);
          iVar15 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
          if (iVar15 < 2) {
            FUN_1803ebc00("Calling PopID() too many times!");
          }
          else {
            *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar15 + -1;
          }
          uVar12 = (int)uVar27 + 1;
          uVar27 = (ulonglong)uVar12;
        } while ((int)uVar12 < 5);
        if ((cVar9 != '\0') && (lVar16 = plVar20[8], (int)lVar16 != 0)) {
          lVar22 = DAT_180cfa270;
          if (DAT_180ccfba4 == '\0') {
            FUN_18026cdb0();
            lVar22 = DAT_180cfa270;
          }
          for (; lVar22 != DAT_180cfa278; lVar22 = lVar22 + 0x48) {
            if (*(int *)(lVar22 + 0x40) == (int)lVar16) {
              FUN_18026d6b0(lVar22,100);
              break;
            }
          }
        }
        iVar15 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
        if (iVar15 < 2) {
          FUN_1803ebc00("Calling PopID() too many times!");
        }
        else {
          *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar15 + -1;
        }
        fVar31 = fVar31 + _DAT_1808aca60;
        FUN_18000f890(local_118);
        uVar28 = local_1f8 + 1;
        lVar22 = -0x71c71c71c71c71c7;
        lVar26 = DAT_180cfa270;
        uVar27 = local_1e0;
        lVar16 = local_1e8;
        local_1f8 = uVar28;
      } while (uVar28 < (ulonglong)((DAT_180cfa278 - DAT_180cfa270 >> 3) * -0x71c71c71c71c71c7));
      fVar36 = local_248;
    }
    plVar20 = (longlong *)FUN_18034ee00(lVar22,local_1d8,local_288);
    lVar16 = *plVar20;
    if (((*(char *)(lVar16 + 0x5a) != '\0') && (*(longlong *)(lVar16 + 0x18) != 0)) &&
       (*(char *)(lVar16 + 0x6f) != '\0')) {
      local_2c0 = (undefined8 *)((ulonglong)local_2c0 & 0xffffffff00000000);
      local_2c8 = (char *)CONCAT44(local_2c8._4_4_,DAT_1808ac658);
      FUN_1803fe590(*(undefined8 *)(*(longlong *)(lVar16 + 0x18) + 0x2c8),lVar16 + 0x5c,lVar16 + 100
                    ,*(undefined4 *)(lVar16 + 0x6c));
    }
  }
  FUN_1803e1bc0();
  FUN_1803d8a40(2);
  DAT_1809f72fc = DAT_1809f72fc + fVar36;
  return;
}



/* ===== 18030a030 FUN_18030a030 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18030a030(void)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  float fVar5;
  undefined4 uVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  longlong lVar10;
  int iVar11;
  LPCSTR lpFile;
  char *pcVar12;
  undefined8 uVar13;
  undefined1 auStackY_1b8 [32];
  char *local_178;
  char *local_170;
  char *local_168;
  undefined *puStack_160;
  undefined1 *local_158;
  char *local_150;
  undefined *local_148;
  char *local_140;
  undefined1 *local_138;
  undefined *local_130;
  char *local_128;
  char *pcStack_120;
  char *local_118;
  char *local_110;
  char *local_108;
  char *local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined1 *local_d8;
  char *local_d0;
  char *local_c8;
  char *local_c0;
  char *local_b8;
  undefined *local_b0;
  char *local_a8;
  undefined4 *local_a0;
  char *local_98;
  char *local_90;
  char *local_88;
  undefined *local_80;
  char *local_78;
  undefined4 *local_70;
  ulonglong local_68;
  
  local_68 = DAT_180919500 ^ (ulonglong)auStackY_1b8;
  FUN_1802b9110("features");
  FUN_1803e89e0("features");
  cVar7 = FUN_18026b8a0();
  FUN_1802b9bd0();
  lVar10 = DAT_180ca0a50;
  uVar6 = DAT_1808ac34c;
  fVar5 = DAT_1808ac1f4;
  pcVar12 = "This feature cannot be used with Safe Mode enabled.";
  if (cVar7 == '\0') {
    DAT_181106f20 = "Quickly switches to primary weapon after throwing a grenade";
    FUN_1802c0a60("quick switch",&DAT_180920dd4);
    DAT_181106f20 =
         "Dynamically adjusts grenade throw angles to counteract movement velocity, allowing precise straight-line throws even while strafing"
    ;
    FUN_1802c0a60("super toss",&DAT_18092131b);
  }
  else {
    DAT_181107580 = DAT_181107580 + 1;
    *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
    lVar2 = *(longlong *)(lVar10 + 0x14f8);
    lVar3 = *(longlong *)(lVar2 + 0x2c8);
    *(undefined1 *)(lVar2 + 0xce) = 1;
    iVar11 = *(int *)(*(longlong *)(*(longlong *)(lVar10 + 0x14f8) + 0x2c8) + 0x20);
    FUN_1803d8870(1,uVar6);
    FUN_1803e7920(1);
    FUN_1803d8a40();
    if ((DAT_1809f351c == 2) ||
       ((((DAT_1809f351c == 1 && (lVar10 = FUN_180266660(), lVar10 != 0)) && (DAT_180cf9f80 != 0))
        && (cVar8 = FUN_180011220(), cVar8 != '\0')))) {
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
    DAT_181106f20 = "This feature cannot be used with Safe Mode enabled.";
    if (!bVar4) {
      DAT_181106f20 = "This feature cannot be used with Legit Triggerbot or Automatic Weapons.";
    }
    FUN_1802c0a60("quick switch",&DAT_180920dd4);
    if ((DAT_1809f351c == 2) ||
       (((DAT_1809f351c == 1 && (lVar10 = FUN_180266660(), lVar10 != 0)) &&
        ((DAT_180cf9f80 != 0 && (cVar8 = FUN_180011220(), cVar8 != '\0')))))) {
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
    DAT_181106f20 = "This feature cannot be used with Safe Mode enabled.";
    if (!bVar4) {
      DAT_181106f20 = "This feature cannot be used with Legit Triggerbot or Automatic Weapons.";
    }
    FUN_1802c0a60("super toss",&DAT_18092131b);
    if (lVar3 != 0) {
      FUN_1802b9bd0();
      DAT_181107580 = DAT_181107580 + -1;
      FUN_1803e79e0();
      if (iVar11 < *(int *)(lVar3 + 0x20)) {
        do {
          lVar10 = (longlong)iVar11;
          iVar11 = iVar11 + 1;
          uVar1 = *(uint *)(*(longlong *)(lVar3 + 0x28) + 0x10 + lVar10 * 0x14);
          *(uint *)(*(longlong *)(lVar3 + 0x28) + 0x10 + lVar10 * 0x14) =
               (int)(longlong)((float)(uVar1 >> 0x18) * fVar5 + fVar5) << 0x18 | uVar1 & 0xffffff;
        } while (iVar11 < *(int *)(lVar3 + 0x20));
      }
    }
  }
  cVar8 = DAT_18094f760;
  FUN_1802b9bd0();
  lVar10 = DAT_180ca0a50;
  if (cVar8 == '\0') {
    DAT_181107580 = DAT_181107580 + 1;
    *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
    lVar2 = *(longlong *)(lVar10 + 0x14f8);
    lVar3 = *(longlong *)(lVar2 + 0x2c8);
    *(undefined1 *)(lVar2 + 0xce) = 1;
    iVar11 = *(int *)(*(longlong *)(*(longlong *)(lVar10 + 0x14f8) + 0x2c8) + 0x20);
    FUN_1803d8870(1,uVar6);
    FUN_1803e7920(1);
    FUN_1803d8a40(1);
    DAT_181106f20 = "Automatically stabs the enemy with a knife when possible";
    FUN_1802c0a60("knife bot",&DAT_180920dd5);
    if (lVar3 != 0) {
      FUN_1802b9bd0();
      DAT_181107580 = DAT_181107580 + -1;
      FUN_1803e79e0();
      if (iVar11 < *(int *)(lVar3 + 0x20)) {
        do {
          lVar10 = (longlong)iVar11;
          iVar11 = iVar11 + 1;
          uVar1 = *(uint *)(*(longlong *)(lVar3 + 0x28) + 0x10 + lVar10 * 0x14);
          *(uint *)(*(longlong *)(lVar3 + 0x28) + 0x10 + lVar10 * 0x14) =
               (int)(longlong)((float)(uVar1 >> 0x18) * fVar5 + fVar5) << 0x18 | uVar1 & 0xffffff;
        } while (iVar11 < *(int *)(lVar3 + 0x20));
      }
    }
  }
  else {
    DAT_181106f20 = "Automatically stabs the enemy with a knife when possible";
    FUN_1802c0a60("knife bot",&DAT_180920dd5);
  }
  cVar8 = FUN_1802badc0("knife_bot_options","knife bot");
  if (cVar8 != '\0') {
    local_168 = "swing";
    puStack_160 = &DAT_180765ca8;
    FUN_1802d16f0("method",&local_168,&DAT_180920dd6,2);
    FUN_1802bc580();
  }
  FUN_1802b9bd0();
  lVar10 = DAT_180ca0a50;
  if (cVar7 == '\0') {
    DAT_181106f20 = "Prevents being kicked from the server for inactivity";
    FUN_1802c0a60("prevent afk kick",&DAT_180920e2c);
  }
  else {
    DAT_181107580 = DAT_181107580 + 1;
    *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
    lVar2 = *(longlong *)(lVar10 + 0x14f8);
    lVar3 = *(longlong *)(lVar2 + 0x2c8);
    *(undefined1 *)(lVar2 + 0xce) = 1;
    iVar11 = *(int *)(*(longlong *)(*(longlong *)(lVar10 + 0x14f8) + 0x2c8) + 0x20);
    FUN_1803d8870(1,uVar6);
    FUN_1803e7920(1);
    FUN_1803d8a40();
    if ((DAT_1809f351c == 2) ||
       (((DAT_1809f351c == 1 && (lVar10 = FUN_180266660(), lVar10 != 0)) &&
        ((DAT_180cf9f80 != 0 && (cVar8 = FUN_180011220(), cVar8 != '\0')))))) {
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
    DAT_181106f20 = "This feature cannot be used with Safe Mode enabled.";
    if (!bVar4) {
      DAT_181106f20 = "This feature cannot be used with Legit Triggerbot or Automatic Weapons.";
    }
    FUN_1802c0a60("prevent afk kick",&DAT_180920e2c);
    if (lVar3 != 0) {
      FUN_1802b9bd0();
      DAT_181107580 = DAT_181107580 + -1;
      FUN_1803e79e0();
      if (iVar11 < *(int *)(lVar3 + 0x20)) {
        do {
          lVar10 = (longlong)iVar11;
          iVar11 = iVar11 + 1;
          uVar1 = *(uint *)(*(longlong *)(lVar3 + 0x28) + 0x10 + lVar10 * 0x14);
          *(uint *)(*(longlong *)(lVar3 + 0x28) + 0x10 + lVar10 * 0x14) =
               (int)(longlong)((float)(uVar1 >> 0x18) * fVar5 + fVar5) << 0x18 | uVar1 & 0xffffff;
        } while (iVar11 < *(int *)(lVar3 + 0x20));
      }
    }
  }
  DAT_181106f20 = "Plays custom sounds when hitting enemies with different shot types";
  FUN_1802c0a60("hit sound",&DAT_180920dd8);
  DAT_180cd0f0d = 1;
  cVar8 = FUN_1802badc0("hit_sound_options","hit sound");
  if (cVar8 != '\0') {
    cVar8 = FUN_1803092b0(0);
    if (cVar8 != '\0') {
      _DAT_1809f5280 =
           CONCAT44((float)((ulonglong)*(undefined8 *)(DAT_180ca0a50 + 0x110) >> 0x20) +
                    _UNK_1808adc34,(float)*(undefined8 *)(DAT_180ca0a50 + 0x110) + _DAT_1808adc30);
    }
    cVar9 = FUN_1803092b0(1);
    if (cVar9 != '\0') {
      FUN_18026cdb0();
    }
    cVar9 = FUN_1803092b0(2);
    if (cVar9 != '\0') {
      if (DAT_180ccfba4 == '\0') {
        FUN_18026cdb0();
      }
      if (DAT_1809f35f8 != 0) {
        lpFile = (LPCSTR)&DAT_1809f35e8;
        if (0xf < DAT_1809f3600) {
          lpFile = DAT_1809f35e8;
        }
        ShellExecuteA((HWND)0x0,(LPCSTR)0x0,lpFile,(LPCSTR)0x0,(LPCSTR)0x0,5);
      }
    }
    FUN_1803e89e0("hit_sound_volume");
    if (cVar8 != '\0') {
      FUN_1802b4d80("##options");
    }
    DAT_1809f5138 = DAT_1809f5280;
    DAT_1809f513c = DAT_1809f5284;
    DAT_1809f36b8 = 0x43848000;
    local_168 = (char *)0x0;
    cVar8 = FUN_1802bb650("volume",&local_168,0);
    if (cVar8 != '\0') {
      FUN_1803e8a70(100);
      FUN_18033fa10("head shot",&DAT_180920df0,0,300);
      iVar11 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
      if (iVar11 < 2) {
        FUN_1803ebc00("Calling PopID() too many times!");
      }
      else {
        *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar11 + -1;
      }
      FUN_1803e8a70(0x65);
      FUN_18033fa10("body shot",&DAT_180920df4,0,300);
      iVar11 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
      if (iVar11 < 2) {
        FUN_1803ebc00("Calling PopID() too many times!");
      }
      else {
        *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar11 + -1;
      }
      FUN_1803e8a70(0x66);
      FUN_18033fa10("lethal shot",&DAT_180920df8,0,300);
      iVar11 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
      if (iVar11 < 2) {
        FUN_1803ebc00("Calling PopID() too many times!");
      }
      else {
        *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar11 + -1;
      }
      FUN_1803e8a70(0x67);
      FUN_18033fa10("damage received",&DAT_180920dfc,0,300);
      iVar11 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
      if (iVar11 < 2) {
        FUN_1803ebc00("Calling PopID() too many times!");
      }
      else {
        *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar11 + -1;
      }
      FUN_1803e8a70(0x68);
      FUN_18033fa10("missed aimbot shot",&DAT_180920e00,0,300);
      iVar11 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
      if (iVar11 < 2) {
        FUN_1803ebc00("Calling PopID() too many times!");
      }
      else {
        *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar11 + -1;
      }
      FUN_1802bc580();
    }
    FUN_1803093f0(&DAT_180920ddc);
    FUN_1802bc580();
  }
  DAT_181106f20 = "Automatically purchases weapons and equipment at round start";
  FUN_1802c0a60("automatic purchase",&DAT_180920e04);
  cVar8 = FUN_1802badc0("automatic_purchase_options","automatic purchase");
  if (cVar8 != '\0') {
    local_150 = "autosnipers";
    local_158 = &DAT_1806dfd84;
    local_148 = &DAT_1806f178c;
    local_140 = "SSG-08";
    DAT_1811071b0 = &local_168;
    local_168 = _DAT_1808ad7c0;
    puStack_160 = _UNK_1808ad7c8;
    FUN_1802c2640("primary",&DAT_180920e08,&local_158,4);
    local_d0 = "r8 revolver";
    local_d8 = &DAT_1806dfd84;
    local_c8 = "desert eagle";
    local_e8 = 3;
    local_c0 = "dual berettas";
    local_e4 = 0x24;
    local_b8 = "five-seven / tec-9";
    local_e0 = 0x3f;
    local_b0 = &DAT_1806f1884;
    local_a8 = "CZ75-Auto";
    DAT_1811071b0 = (char **)&local_f8;
    local_f8 = _DAT_1808ad640;
    uStack_f0 = _UNK_1808ad648;
    FUN_1802c2640("secondary",&DAT_180920e0c,&local_d8,7);
    local_a0 = &DAT_1806f04c8;
    local_98 = "helmet";
    local_118 = (char *)0x2e0000002c;
    local_90 = "defuser";
    local_110 = (char *)CONCAT44(local_110._4_4_,0x2d);
    local_88 = "taser";
    local_80 = &DAT_180765f74;
    local_78 = "molotov";
    local_70 = &DAT_1806e7598;
    DAT_181106e98 = &local_128;
    local_128 = _DAT_1808ad7b0;
    pcStack_120 = (char *)_UNK_1808ad7b8;
    FUN_1802c3050("items",&local_a0,&DAT_180920e10,7);
    FUN_1802bc580();
  }
  FUN_1802b9bd0();
  lVar10 = DAT_180ca0a50;
  if (cVar7 == '\0') {
    DAT_181106f20 = "Automatically throws grenades when they will deal optimal damage";
    FUN_1802c0a60("automatic grenade release",&DAT_1809213ac);
  }
  else {
    DAT_181107580 = DAT_181107580 + 1;
    *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
    lVar2 = *(longlong *)(lVar10 + 0x14f8);
    lVar3 = *(longlong *)(lVar2 + 0x2c8);
    *(undefined1 *)(lVar2 + 0xce) = 1;
    iVar11 = *(int *)(*(longlong *)(*(longlong *)(lVar10 + 0x14f8) + 0x2c8) + 0x20);
    FUN_1803d8870(1,uVar6);
    FUN_1803e7920(1);
    FUN_1803d8a40(1);
    if ((DAT_1809f351c == 2) ||
       ((((DAT_1809f351c == 1 && (lVar10 = FUN_180266660(), lVar10 != 0)) && (DAT_180cf9f80 != 0))
        && (cVar7 = FUN_180011220((ulonglong)DAT_180cf9f80 + lVar10), cVar7 != '\0')))) {
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
    if (!bVar4) {
      pcVar12 = "This feature cannot be used with Legit Triggerbot or Automatic Weapons.";
    }
    DAT_181106f20 = pcVar12;
    FUN_1802c0a60("automatic grenade release",&DAT_1809213ac);
    if (lVar3 != 0) {
      FUN_1802b9bd0();
      DAT_181107580 = DAT_181107580 + -1;
      FUN_1803e79e0();
      if (iVar11 < *(int *)(lVar3 + 0x20)) {
        do {
          lVar10 = (longlong)iVar11;
          iVar11 = iVar11 + 1;
          uVar1 = *(uint *)(*(longlong *)(lVar3 + 0x28) + 0x10 + lVar10 * 0x14);
          *(uint *)(*(longlong *)(lVar3 + 0x28) + 0x10 + lVar10 * 0x14) =
               (int)(longlong)((float)(uVar1 >> 0x18) * fVar5 + fVar5) << 0x18 | uVar1 & 0xffffff;
        } while (iVar11 < *(int *)(lVar3 + 0x20));
      }
    }
  }
  cVar7 = FUN_1802badc0("grenade_release_options","automatic grenade release");
  if (cVar7 != '\0') {
    FUN_18033fa10("minimum damage",&DAT_1809213b8,0,0x32);
    FUN_18033fa10("molotov distance threshold",&DAT_1809213bc,0,100);
    FUN_1802c0a60("pin pulled only",&DAT_1809213c0);
    FUN_1802bc580();
  }
  DAT_181106f20 = "Automatically accepts matchmaking games when found";
  FUN_1802c0a60("auto-accept matchmaking",&DAT_180920e23);
  DAT_181106f20 = "Disables profanity filtering in chat messages and player names";
  FUN_1802c0a60("disable profanity filter",&DAT_180920e17);
  DAT_181106f20 = "Shows enemy team-only chat messages. Only works on community servers";
  FUN_1802c0a60("reveal enemy chat",&DAT_180920e18);
  DAT_181106f20 = "Only shows neverlose console output. Restores channel settings when disabled";
  FUN_1802c0a60("filter console output",&DAT_180920e19);
  local_178 = "server messages";
  local_170 = "radio messages";
  DAT_181106f20 =
       "Hides server/system chat messages and radio text. Radio voice, console output and HUD hints are preserved"
  ;
  FUN_1802c3050("filter chat messages",&local_178,&DAT_180920e1a,2);
  pcStack_120 = "damage received";
  local_128 = "damage dealt";
  DAT_180cd0e6d = 1;
  local_118 = "missed shots";
  local_110 = "purchases";
  local_108 = "votes";
  local_100 = "lua output";
  local_158 = &DAT_180920e70;
  local_150 = &DAT_180920e84;
  local_148 = &DAT_180920e98;
  local_140 = &DAT_180920eac;
  local_138 = &DAT_180920ec0;
  local_130 = &DAT_180920ed4;
  DAT_181106f20 = "Logs various game and cheat events to the console and notification area";
  uVar13 = FUN_1802c2b30("log events",&local_128,&local_158,6);
  local_158 = &DAT_180920e74;
  local_150 = &DAT_180920e88;
  local_148 = &DAT_180920e9c;
  local_140 = &DAT_180920eb0;
  local_138 = &DAT_180920ec4;
  FUN_1802cee70(uVar13,&local_128,&local_158);
  iVar11 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
  if (iVar11 < 2) {
    FUN_1803ebc00("Calling PopID() too many times!");
  }
  else {
    *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar11 + -1;
  }
  if ((DAT_180cd048e != '\0') &&
     (cVar7 = FUN_1802bc070("beta_exploits",&DAT_1807662e0), cVar7 != '\0')) {
    FUN_180307870();
    FUN_1802bc580();
  }
  return;
}



/* ===== 18030af70 FUN_18030af70 ===== */

void FUN_18030af70(void)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  float fVar5;
  undefined4 uVar6;
  char cVar7;
  char cVar8;
  longlong lVar9;
  undefined2 *puVar10;
  int iVar11;
  char *pcVar12;
  undefined1 uVar13;
  
  FUN_1802b8a20();
  FUN_1802b9110("movement");
  FUN_1803e89e0("movement");
  DAT_181106f20 = "Automatically jumps when landing to maintain momentum and speed";
  FUN_1802c0a60("bunny hop",&DAT_180920ce8);
  DAT_181106f20 =
       "Automates air movement optimization\n- Without Safe Mode: provides perfect automated strafing (TAS-like)\n- With Safe Mode: follows your mouse direction naturally\n\nWarning: sv_quantize_movement_input without Safe Mode may cause visible screen shake for spectators"
  ;
  FUN_1802c0a60("air strafe",&DAT_180920da8);
  uVar6 = DAT_1808ac34c;
  fVar5 = DAT_1808ac1f4;
  if (DAT_1809f351c != 2) {
    if (((DAT_1809f351c == 1) && (lVar9 = FUN_180266660(), lVar9 != 0)) && (DAT_180cf9f80 != 0)) {
      cVar7 = FUN_180011220((ulonglong)DAT_180cf9f80 + lVar9);
      if (cVar7 != '\0') goto LAB_18030b4dc;
    }
    cVar7 = FUN_18026b810(1);
    if ((cVar7 == '\0') && (cVar7 = FUN_1802badc0("airstrafe_options","air strafe"), cVar7 != '\0'))
    {
      if (((DAT_180920da9 == '\0') && ((DAT_180920daa == '\0' && (DAT_180920dab == '\0')))) &&
         ((DAT_180920dac == '\0' && ((DAT_180920dad == '\0' && (DAT_180920dae == '\0')))))) {
        uVar13 = 0;
      }
      else {
        uVar13 = 1;
      }
      DAT_181106f20 = "Automatically detects obstacles and adjusts strafe direction";
      FUN_1802d0e90("avoid collisions",&DAT_180920da9,uVar13);
      if ((DAT_180920dab == '\0') || (DAT_180920dae == '\0')) {
        FUN_1802b9bd0();
        DAT_181106f20 = "Strafes in your current view direction";
        FUN_1802d0e90("view angles",&DAT_180920daa,uVar13);
      }
      else {
        FUN_1802b9bd0();
        lVar3 = DAT_180ca0a50;
        DAT_181107580 = DAT_181107580 + 1;
        *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
        lVar9 = *(longlong *)(lVar3 + 0x14f8);
        lVar2 = *(longlong *)(lVar9 + 0x2c8);
        *(undefined1 *)(lVar9 + 0xce) = 1;
        iVar11 = *(int *)(*(longlong *)(*(longlong *)(lVar3 + 0x14f8) + 0x2c8) + 0x20);
        FUN_1803d8870(1,uVar6);
        FUN_1803e7920(1);
        FUN_1803d8a40(1);
        DAT_181106f20 = "Strafes in your current view direction";
        FUN_1802d0e90("view angles",&DAT_180920daa,uVar13);
        if (lVar2 != 0) {
          FUN_1802b9bd0();
          DAT_181107580 = DAT_181107580 + -1;
          FUN_1803e79e0();
          if (iVar11 < *(int *)(lVar2 + 0x20)) {
            do {
              lVar9 = (longlong)iVar11;
              iVar11 = iVar11 + 1;
              uVar1 = *(uint *)(*(longlong *)(lVar2 + 0x28) + 0x10 + lVar9 * 0x14);
              *(uint *)(*(longlong *)(lVar2 + 0x28) + 0x10 + lVar9 * 0x14) =
                   (int)(longlong)((float)(uVar1 >> 0x18) * fVar5 + fVar5) << 0x18 |
                   uVar1 & 0xffffff;
            } while (iVar11 < *(int *)(lVar2 + 0x20));
          }
        }
      }
      if ((DAT_180920daa == '\0') && (DAT_180920dab == '\0')) {
        DAT_180920dab = '\x01';
      }
      DAT_181106f20 = "Strafes based on WASD input relative to view";
      FUN_1802d0e90("movement keys",&DAT_180920dab,uVar13);
      if ((DAT_180920dab == '\0') && (DAT_180920daa == '\0')) {
        DAT_180920daa = '\x01';
      }
      DAT_181106f20 = "Requires the jump key to be held for activation";
      FUN_1802d0e90("only while holding jump",&DAT_180920dac,uVar13);
      DAT_181106f20 = "Hold Shift to air-brake to a halt";
      FUN_1802d0e90("stop on shift key",&DAT_180920dad,uVar13);
      cVar7 = DAT_180920dab;
      FUN_1802b9bd0();
      lVar9 = DAT_180ca0a50;
      if (cVar7 == '\0') {
        DAT_181107580 = DAT_181107580 + 1;
        *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
        lVar2 = *(longlong *)(lVar9 + 0x14f8);
        lVar3 = *(longlong *)(lVar2 + 0x2c8);
        *(undefined1 *)(lVar2 + 0xce) = 1;
        iVar11 = *(int *)(*(longlong *)(*(longlong *)(lVar9 + 0x14f8) + 0x2c8) + 0x20);
        FUN_1803d8870(1,uVar6);
        FUN_1803e7920(1);
        FUN_1803d8a40(1);
        DAT_181106f20 = "Auto-stops when no movement keys are pressed";
        FUN_1802d0e90("stop on key release",&DAT_180920dae,uVar13);
        if (lVar3 != 0) {
          FUN_1802b9bd0();
          DAT_181107580 = DAT_181107580 + -1;
          FUN_1803e79e0();
          if (iVar11 < *(int *)(lVar3 + 0x20)) {
            do {
              lVar9 = (longlong)iVar11;
              iVar11 = iVar11 + 1;
              uVar1 = *(uint *)(*(longlong *)(lVar3 + 0x28) + 0x10 + lVar9 * 0x14);
              *(uint *)(*(longlong *)(lVar3 + 0x28) + 0x10 + lVar9 * 0x14) =
                   (int)(longlong)((float)(uVar1 >> 0x18) * fVar5 + fVar5) << 0x18 |
                   uVar1 & 0xffffff;
            } while (iVar11 < *(int *)(lVar3 + 0x20));
          }
        }
      }
      else {
        DAT_181106f20 = "Auto-stops when no movement keys are pressed";
        FUN_1802d0e90("stop on key release",&DAT_180920dae,uVar13);
      }
      FUN_1802d0b90(0);
      DAT_181106f20 =
           "Controls the number of subticks per command\n- 0%: No subticks (standard strafer)\n- 100%: Maximum number of subticks"
      ;
      FUN_18033fa10("subticks",&DAT_180920db0,0,100,&DAT_1806f0260,0);
      DAT_181106f20 =
           "Prioritize speed gain over turn sharpness\n- 0%: Turn instantly (no acceleration attempt)\n- 100%: Gain speed while turning (slower rotations)"
      ;
      FUN_18033fa10("turn speed",&DAT_180920db4,0,100,&DAT_1806f0260,0);
      if (DAT_180920da9 != '\0') {
        DAT_181106f20 = "How close to approach corners before adjusting strafe direction";
        puVar10 = &DAT_1806dfdd8;
        if (200 < DAT_180920db8) {
          puVar10 = (undefined2 *)&DAT_180763e20;
        }
        FUN_18033fa10("corner distance",&DAT_180920db8,0,0xc9,puVar10,0);
        DAT_181106f20 = "Maximum angle to slide along walls (when not turning around a corner)";
        FUN_18033fa10("wall slide",&DAT_180920dbc,0,0x5a,&DAT_180761354,0);
      }
      FUN_1802bc580();
    }
  }
LAB_18030b4dc:
  cVar7 = FUN_18026b8a0();
  FUN_1802b9bd0();
  lVar9 = DAT_180ca0a50;
  pcVar12 = "This feature cannot be used with Safe Mode enabled.";
  if (cVar7 == '\0') {
    DAT_181106f20 =
         "Lets you skip the landing state to jump higher, remove landing sounds, improve weapon accuracy after landing, and eliminate fall damage. A well-known bug that became a movement feature in Source engine-based games."
    ;
    FUN_1802c0a60("jump bug",&DAT_180920dc0);
  }
  else {
    DAT_181107580 = DAT_181107580 + 1;
    *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
    lVar2 = *(longlong *)(lVar9 + 0x14f8);
    lVar3 = *(longlong *)(lVar2 + 0x2c8);
    *(undefined1 *)(lVar2 + 0xce) = 1;
    iVar11 = *(int *)(*(longlong *)(*(longlong *)(lVar9 + 0x14f8) + 0x2c8) + 0x20);
    FUN_1803d8870(1,uVar6);
    FUN_1803e7920(1);
    FUN_1803d8a40();
    if ((DAT_1809f351c == 2) ||
       ((((DAT_1809f351c == 1 && (lVar9 = FUN_180266660(), lVar9 != 0)) && (DAT_180cf9f80 != 0)) &&
        (cVar8 = FUN_180011220(), cVar8 != '\0')))) {
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
    DAT_181106f20 = "This feature cannot be used with Safe Mode enabled.";
    if (!bVar4) {
      DAT_181106f20 = "This feature cannot be used with Legit Triggerbot or Automatic Weapons.";
    }
    FUN_1802c0a60("jump bug",&DAT_180920dc0);
    if (lVar3 != 0) {
      FUN_1802b9bd0();
      DAT_181107580 = DAT_181107580 + -1;
      FUN_1803e79e0();
      if (iVar11 < *(int *)(lVar3 + 0x20)) {
        do {
          lVar9 = (longlong)iVar11;
          iVar11 = iVar11 + 1;
          uVar1 = *(uint *)(*(longlong *)(lVar3 + 0x28) + 0x10 + lVar9 * 0x14);
          *(uint *)(*(longlong *)(lVar3 + 0x28) + 0x10 + lVar9 * 0x14) =
               (int)(longlong)((float)(uVar1 >> 0x18) * fVar5 + fVar5) << 0x18 | uVar1 & 0xffffff;
        } while (iVar11 < *(int *)(lVar3 + 0x20));
      }
    }
  }
  cVar8 = FUN_1802badc0("jumpbug_options","jump bug");
  if (cVar8 != '\0') {
    if (((DAT_180920dc1 == '\0') && (DAT_180920dc2 == '\0')) &&
       ((DAT_180920dc3 == '\0' && (DAT_180920dc4 == '\0')))) {
      uVar13 = 0;
    }
    else {
      uVar13 = 1;
    }
    DAT_181106f20 = "Allows you to jump higher and gain more speed with air strafe";
    FUN_1802d0e90("high jump",&DAT_180920dc1,uVar13);
    DAT_181106f20 = "Allows you to slide on slopes at high speeds";
    FUN_1802d0e90("ramp boost",&DAT_180920dc2,uVar13);
    DAT_181106f20 =
         "Improves weapon accuracy after landing and makes landing silent if horizontal speed is low enough"
    ;
    FUN_1802d0e90("no land penalty",&DAT_180920dc3,uVar13);
    DAT_181106f20 = "Completely eliminates fall damage";
    FUN_1802d0e90("no fall damage",&DAT_180920dc4,uVar13);
    FUN_1802bc580();
  }
  FUN_1802b9bd0();
  lVar9 = DAT_180ca0a50;
  if (cVar7 == '\0') {
    DAT_181106f20 = "Automatically quick stops at edges to prevent falling";
    FUN_1802c0a60("edge quick stop",&DAT_180920dc5);
  }
  else {
    DAT_181107580 = DAT_181107580 + 1;
    *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
    lVar2 = *(longlong *)(lVar9 + 0x14f8);
    lVar3 = *(longlong *)(lVar2 + 0x2c8);
    *(undefined1 *)(lVar2 + 0xce) = 1;
    iVar11 = *(int *)(*(longlong *)(*(longlong *)(lVar9 + 0x14f8) + 0x2c8) + 0x20);
    FUN_1803d8870(1,uVar6);
    FUN_1803e7920(1);
    FUN_1803d8a40();
    if ((DAT_1809f351c == 2) ||
       (((DAT_1809f351c == 1 && (lVar9 = FUN_180266660(), lVar9 != 0)) &&
        ((DAT_180cf9f80 != 0 && (cVar8 = FUN_180011220(), cVar8 != '\0')))))) {
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
    DAT_181106f20 = "This feature cannot be used with Safe Mode enabled.";
    if (!bVar4) {
      DAT_181106f20 = "This feature cannot be used with Legit Triggerbot or Automatic Weapons.";
    }
    FUN_1802c0a60("edge quick stop",&DAT_180920dc5);
    if (lVar3 != 0) {
      FUN_1802b9bd0();
      DAT_181107580 = DAT_181107580 + -1;
      FUN_1803e79e0();
      if (iVar11 < *(int *)(lVar3 + 0x20)) {
        do {
          lVar9 = (longlong)iVar11;
          iVar11 = iVar11 + 1;
          uVar1 = *(uint *)(*(longlong *)(lVar3 + 0x28) + 0x10 + lVar9 * 0x14);
          *(uint *)(*(longlong *)(lVar3 + 0x28) + 0x10 + lVar9 * 0x14) =
               (int)(longlong)((float)(uVar1 >> 0x18) * fVar5 + fVar5) << 0x18 | uVar1 & 0xffffff;
        } while (iVar11 < *(int *)(lVar3 + 0x20));
      }
    }
  }
  DAT_181106f20 = "Quickly stops movement when releasing movement keys by counter-strafing";
  FUN_1802c0a60("standalone quick stop",&DAT_180920dc6);
  DAT_181106f20 =
       "Prioritizes the last pressed direction key when opposite inputs are detected, allowing instant direction changes without manual key releases"
  ;
  FUN_1802c0a60("strafe assist",&DAT_180920dc7);
  DAT_181106f20 = "Automatically jumps when reaching the edge of a surface";
  FUN_1802c0a60("edge jump",&DAT_180920dc8);
  FUN_1802b9bd0();
  lVar9 = DAT_180ca0a50;
  if (cVar7 == '\0') {
    DAT_181106f20 =
         "Reduces movement speed for better accuracy. 100% is the maximum perfect weapon accuracy speed."
    ;
    FUN_1802c0a60("slow walk",&DAT_180920dc9);
  }
  else {
    DAT_181107580 = DAT_181107580 + 1;
    *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
    lVar2 = *(longlong *)(lVar9 + 0x14f8);
    lVar3 = *(longlong *)(lVar2 + 0x2c8);
    *(undefined1 *)(lVar2 + 0xce) = 1;
    iVar11 = *(int *)(*(longlong *)(*(longlong *)(lVar9 + 0x14f8) + 0x2c8) + 0x20);
    FUN_1803d8870(1,uVar6);
    FUN_1803e7920(1);
    FUN_1803d8a40();
    if ((DAT_1809f351c == 2) ||
       ((((DAT_1809f351c == 1 && (lVar9 = FUN_180266660(), lVar9 != 0)) && (DAT_180cf9f80 != 0)) &&
        (cVar8 = FUN_180011220(), cVar8 != '\0')))) {
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
    DAT_181106f20 = "This feature cannot be used with Safe Mode enabled.";
    if (!bVar4) {
      DAT_181106f20 = "This feature cannot be used with Legit Triggerbot or Automatic Weapons.";
    }
    FUN_1802c0a60("slow walk",&DAT_180920dc9);
    if (lVar3 != 0) {
      FUN_1802b9bd0();
      DAT_181107580 = DAT_181107580 + -1;
      FUN_1803e79e0();
      if (iVar11 < *(int *)(lVar3 + 0x20)) {
        do {
          lVar9 = (longlong)iVar11;
          iVar11 = iVar11 + 1;
          uVar1 = *(uint *)(*(longlong *)(lVar3 + 0x28) + 0x10 + lVar9 * 0x14);
          *(uint *)(*(longlong *)(lVar3 + 0x28) + 0x10 + lVar9 * 0x14) =
               (int)(longlong)((float)(uVar1 >> 0x18) * fVar5 + fVar5) << 0x18 | uVar1 & 0xffffff;
        } while (iVar11 < *(int *)(lVar3 + 0x20));
      }
    }
  }
  cVar8 = FUN_1802badc0("slowwalk_options","slow walk");
  if (cVar8 != '\0') {
    FUN_18033fa10("speed",&DAT_180920dcc,0x19,0x96,&DAT_1806f0260,0);
    FUN_1802bc580();
  }
  FUN_1802b9bd0();
  lVar9 = DAT_180ca0a50;
  if (cVar7 == '\0') {
    DAT_181106f20 = "Lets you climb ladders faster than normal";
    FUN_1802c0a60("fast ladder",&DAT_180920dd0);
  }
  else {
    DAT_181107580 = DAT_181107580 + 1;
    *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
    lVar2 = *(longlong *)(lVar9 + 0x14f8);
    lVar3 = *(longlong *)(lVar2 + 0x2c8);
    *(undefined1 *)(lVar2 + 0xce) = 1;
    iVar11 = *(int *)(*(longlong *)(*(longlong *)(lVar9 + 0x14f8) + 0x2c8) + 0x20);
    FUN_1803d8870(1,uVar6);
    FUN_1803e7920(1);
    FUN_1803d8a40(1);
    if ((DAT_1809f351c == 2) ||
       (((DAT_1809f351c == 1 && (lVar9 = FUN_180266660(), lVar9 != 0)) &&
        ((DAT_180cf9f80 != 0 &&
         (cVar7 = FUN_180011220((ulonglong)DAT_180cf9f80 + lVar9), cVar7 != '\0')))))) {
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
    if (!bVar4) {
      pcVar12 = "This feature cannot be used with Legit Triggerbot or Automatic Weapons.";
    }
    DAT_181106f20 = pcVar12;
    FUN_1802c0a60("fast ladder",&DAT_180920dd0);
    if (lVar3 != 0) {
      FUN_1802b9bd0();
      DAT_181107580 = DAT_181107580 + -1;
      FUN_1803e79e0();
      if (iVar11 < *(int *)(lVar3 + 0x20)) {
        do {
          lVar9 = (longlong)iVar11;
          iVar11 = iVar11 + 1;
          uVar1 = *(uint *)(*(longlong *)(lVar3 + 0x28) + 0x10 + lVar9 * 0x14);
          *(uint *)(*(longlong *)(lVar3 + 0x28) + 0x10 + lVar9 * 0x14) =
               (int)(longlong)((float)(uVar1 >> 0x18) * fVar5 + fVar5) << 0x18 | uVar1 & 0xffffff;
        } while (iVar11 < *(int *)(lVar3 + 0x20));
      }
    }
  }
  iVar11 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
  if (iVar11 < 2) {
    FUN_1803ebc00("Calling PopID() too many times!");
    FUN_18030a030();
    FUN_1802b9760();
    return;
  }
  *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar11 + -1;
  FUN_18030a030();
  FUN_1802b9760();
  return;
}



/* ===== 18030bc10 FUN_18030bc10 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 * FUN_18030bc10(undefined4 *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 local_50;
  undefined1 local_48 [24];
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  ulonglong local_18;
  ulonglong local_10;
  
  local_10 = DAT_180919500 ^ (ulonglong)auStack_78;
  uStack_28 = 0;
  local_20 = 6;
  local_18 = 0xf;
  local_30 = (ulonglong)CONCAT24(s_avatar_1806e4e84._4_2_,s_avatar_1806e4e84._0_4_);
  local_50 = 0xa0;
  local_58 = 0xa0;
  puVar5 = (undefined4 *)FUN_18122232f(local_48,&local_30,&PNG_1806f8fa0,0x475b);
  uVar2 = puVar5[1];
  uVar3 = puVar5[2];
  uVar4 = puVar5[3];
  *param_1 = *puVar5;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(puVar5 + 4);
  if (0xf < local_18) {
    uVar7 = local_18 + 1;
    uVar6 = local_30;
    if (0xfff < uVar7) {
      uVar6 = *(ulonglong *)(local_30 - 8);
      if (0x1f < (local_30 - uVar6) - 8) {
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        pcVar1 = (code *)swi(3);
        puVar5 = (undefined4 *)(*pcVar1)();
        return puVar5;
      }
      uVar7 = local_18 + 0x28;
    }
    thunk_FUN_1803d64e0(uVar6,uVar7);
  }
  return param_1;
}



/* ===== 18030bcf0 FUN_18030bcf0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
FUN_18030bcf0(undefined8 *param_1,ulonglong *param_2,undefined *param_3,undefined *param_4,
             undefined8 param_5,undefined4 param_6)

{
  byte *pbVar1;
  char *_Str;
  code *pcVar2;
  longlong lVar3;
  ulonglong uVar4;
  byte bVar5;
  int iVar6;
  ulonglong *puVar7;
  byte *pbVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined4 *puVar11;
  ulonglong *puVar12;
  size_t sVar13;
  undefined *puVar14;
  longlong lVar15;
  undefined *puVar16;
  ulonglong uVar17;
  byte ****ppppbVar18;
  undefined **ppuVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  size_t _Size;
  uint uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  byte ****ppppbVar25;
  byte ****ppppbVar26;
  undefined4 uVar27;
  undefined1 auStack_1c8 [8];
  undefined1 auStack_1c0 [24];
  undefined8 local_1a8;
  undefined *local_190;
  undefined *local_188;
  undefined *local_178;
  undefined *local_170;
  ulonglong local_168;
  ulonglong uStack_160;
  ulonglong local_158;
  ulonglong local_150;
  ulonglong local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 local_130;
  ulonglong local_128;
  undefined4 local_120;
  undefined4 local_11c;
  byte ****local_118 [2];
  size_t local_108;
  ulonglong local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined1 local_d8 [32];
  undefined1 local_b8 [32];
  undefined1 local_98 [32];
  ulonglong local_78;
  
  uVar27 = DAT_1808ac34c;
  puVar21 = auStack_1c8;
  local_78 = DAT_180919500 ^ (ulonglong)auStack_1c8;
  local_1a8 = param_5;
  uStack_160 = 0;
  local_158 = 0;
  uVar24 = 0xf;
  local_150 = 0xf;
  local_168 = 0;
  uStack_140 = 0;
  local_138 = 0;
  local_130 = 0xf;
  local_148 = 0;
  local_128 = 0;
  local_120 = DAT_1808ac34c;
  local_11c = param_6;
  uVar23 = param_2[4];
  local_190 = param_3;
  local_188 = param_4;
  local_178 = param_3;
  local_170 = param_4;
  if (uVar23 != 0) {
    local_120 = (undefined4)param_2[5];
    *param_1 = param_3;
    param_1[1] = param_4;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0xf;
    local_158 = 0;
    local_150 = 0xf;
    local_168 = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0xf;
    local_138 = 0;
    local_130 = 0xf;
    local_148 = 0;
    param_1[10] = uVar23;
    *(undefined4 *)(param_1 + 0xb) = local_120;
    *(undefined4 *)((longlong)param_1 + 0x5c) = param_6;
    puVar21 = auStack_1c8;
    local_128 = uVar23;
    goto LAB_18030c286;
  }
  if (param_2[2] == 0) {
    *param_1 = param_3;
    param_1[1] = param_4;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0xf;
    local_158 = 0;
    local_150 = 0xf;
    local_168 = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0xf;
    local_138 = 0;
    local_130 = 0xf;
    local_148 = 0;
    param_1[10] = 0;
    *(undefined4 *)(param_1 + 0xb) = 0x3f800000;
    *(undefined4 *)((longlong)param_1 + 0x5c) = param_6;
    goto LAB_18030c286;
  }
  puVar12 = param_2;
  if (0xf < param_2[3]) {
    puVar12 = (ulonglong *)*param_2;
  }
  if (((param_2[2] < 4) ||
      (puVar7 = (ulonglong *)
                thunk_FUN_1804e6890(puVar12,(ulonglong *)((longlong)puVar12 + 4),&DAT_1806f1f6c,4),
      puVar7 == (ulonglong *)((longlong)puVar12 + 4))) || (puVar7 != puVar12)) {
    puVar12 = param_2;
    if (0xf < param_2[3]) {
      puVar12 = (ulonglong *)*param_2;
    }
    if (((param_2[2] < 4) ||
        (pbVar1 = (byte *)((longlong)puVar12 + param_2[2]),
        pbVar8 = (byte *)thunk_FUN_1804e92d0(puVar12,pbVar1,&DAT_1806f1f6c,4), pbVar8 == pbVar1)) ||
       ((longlong)pbVar8 - (longlong)puVar12 == -1)) {
      FUN_180024b50(local_118,param_2);
      puVar21 = auStack_1c8;
      ppppbVar18 = (byte ****)local_118;
      if (0xf < local_100) {
        ppppbVar18 = local_118[0];
      }
      ppppbVar25 = (byte ****)((longlong)ppppbVar18 + local_108);
      _Size = local_108;
      uVar23 = local_100;
      ppppbVar26 = local_118[0];
      if (ppppbVar18 != ppppbVar25) {
        do {
          iVar6 = tolower((uint)*(byte *)ppppbVar18);
          *(byte *)ppppbVar18 = (byte)iVar6;
          ppppbVar18 = (byte ****)((longlong)ppppbVar18 + 1);
        } while (ppppbVar18 != ppppbVar25);
        _Size = local_108;
        uVar23 = local_100;
        ppppbVar26 = local_118[0];
      }
      ppuVar19 = &PTR_s_brackets_curly_180658dc0;
      do {
        _Str = *ppuVar19;
        sVar13 = strlen(_Str);
        ppppbVar18 = (byte ****)local_118;
        if (0xf < uVar23) {
          ppppbVar18 = ppppbVar26;
        }
        if ((_Size == sVar13) &&
           ((_Size == 0 || (iVar6 = memcmp(ppppbVar18,_Str,_Size), iVar6 == 0)))) {
          puVar14 = ppuVar19[1];
          puVar16 = ppuVar19[2];
          param_6 = *(undefined4 *)(ppuVar19 + 3);
          local_178 = puVar14;
          local_170 = puVar16;
          local_11c = param_6;
          goto LAB_18030c207;
        }
        ppuVar19 = ppuVar19 + 4;
      } while (ppuVar19 != &PTR_DAT_180659180);
      puVar14 = local_190;
      puVar16 = local_188;
LAB_18030c207:
      *param_1 = puVar14;
      param_1[1] = puVar16;
      param_1[2] = local_168;
      param_1[3] = uStack_160;
      param_1[4] = local_158;
      param_1[5] = 0xf;
      local_158 = 0;
      local_150 = 0xf;
      local_168 = local_168 & 0xffffffffffffff00;
      param_1[6] = local_148;
      param_1[7] = uStack_140;
      param_1[8] = 0;
      param_1[9] = 0xf;
      local_138 = 0;
      local_130 = 0xf;
      local_148 = local_148 & 0xffffffffffffff00;
      param_1[10] = 0;
      *(undefined4 *)(param_1 + 0xb) = 0x3f800000;
      *(undefined4 *)((longlong)param_1 + 0x5c) = param_6;
      FUN_18000f890(local_118);
      goto LAB_18030c286;
    }
  }
  puVar12 = param_2;
  if (0xf < param_2[3]) {
    puVar12 = (ulonglong *)*param_2;
  }
  uVar23 = 0xffffffff;
  uVar22 = 0xffffffff;
  bVar5 = (byte)*puVar12;
  while (bVar5 != 0) {
    puVar7 = (ulonglong *)((longlong)puVar12 + 1);
    if (((bVar5 == 0x23) && (*(byte *)puVar7 == 0x23)) && (*(byte *)((longlong)puVar12 + 2) == 0x23)
       ) {
      uVar23 = 0xffffffff;
      puVar7 = (ulonglong *)((longlong)puVar12 + 3);
    }
    else {
      uVar23 = (ulonglong)
               ((uint)(uVar23 >> 8) ^
               *(uint *)(&DAT_1806c25c0 + (uVar23 & 0xff ^ (ulonglong)bVar5) * 4));
    }
    uVar22 = (uint)uVar23;
    puVar12 = puVar7;
    bVar5 = (byte)*puVar7;
  }
  uVar9 = FUN_180201310(local_98,~uVar22);
  uVar10 = FUN_180066a20(local_b8,"lua_svg/",local_1a8);
  puVar11 = (undefined4 *)FUN_1800134a0(uVar10,&DAT_1806e08bc,1);
  local_f8 = *puVar11;
  uStack_f4 = puVar11[1];
  uStack_f0 = puVar11[2];
  uStack_ec = puVar11[3];
  local_e8 = puVar11[4];
  uStack_e4 = puVar11[5];
  uStack_e0 = puVar11[6];
  uStack_dc = puVar11[7];
  *(undefined8 *)(puVar11 + 4) = 0;
  *(undefined8 *)(puVar11 + 6) = 0xf;
  *(undefined1 *)puVar11 = 0;
  puVar12 = (ulonglong *)FUN_180066820(local_d8,&local_f8,uVar9);
  if (&local_168 != puVar12) {
    local_168 = *puVar12;
    uStack_160 = puVar12[1];
    local_158 = puVar12[2];
    uVar24 = puVar12[3];
    puVar12[2] = 0;
    puVar12[3] = 0xf;
    *(undefined1 *)puVar12 = 0;
    local_150 = uVar24;
  }
  uVar23 = local_158;
  FUN_18000f890(local_d8);
  uVar4 = CONCAT44(uStack_dc,uStack_e0);
  if (uVar4 < 0x10) {
LAB_18030c080:
    FUN_18000f890(local_b8);
    FUN_18000f890();
    puVar20 = auStack_1c8;
    puVar21 = auStack_1c8;
    if (&local_148 != param_2) {
      if (param_2[3] < 0x10) goto LAB_18030c0af;
      puVar12 = (ulonglong *)*param_2;
      puVar20 = auStack_1c8;
      goto LAB_18030c0b2;
    }
  }
  else {
    uVar17 = uVar4 + 1;
    lVar3 = CONCAT44(uStack_f4,local_f8);
    lVar15 = lVar3;
    if (uVar17 < 0x1000) {
LAB_18030c07a:
      thunk_FUN_1803d64e0(lVar15,uVar17);
      goto LAB_18030c080;
    }
    lVar15 = *(longlong *)(lVar3 + -8);
    if ((lVar3 - lVar15) - 8U < 0x20) {
      uVar17 = uVar4 + 0x28;
      goto LAB_18030c07a;
    }
    pcVar2 = (code *)swi(0x29);
    (*pcVar2)(5);
    puVar20 = auStack_1c0;
LAB_18030c0af:
    puVar12 = param_2;
LAB_18030c0b2:
    uVar23 = param_2[2];
    *(undefined8 *)(puVar20 + -8) = 0x18030c0bf;
    FUN_180029840(&local_148,puVar12,uVar23);
    uVar24 = *(ulonglong *)(puVar20 + 0x78);
    param_4 = *(undefined **)(puVar20 + 0x58);
    param_3 = *(undefined **)(puVar20 + 0x50);
    uVar23 = *(ulonglong *)(puVar20 + 0x70);
    puVar21 = puVar20;
    param_6 = local_11c;
    uVar27 = local_120;
  }
  *param_1 = param_3;
  param_1[1] = param_4;
  param_1[2] = *(undefined8 *)(puVar21 + 0x60);
  param_1[3] = *(undefined8 *)(puVar21 + 0x68);
  param_1[4] = uVar23;
  param_1[5] = uVar24;
  *(undefined8 *)(puVar21 + 0x70) = 0;
  *(undefined8 *)(puVar21 + 0x78) = 0xf;
  puVar21[0x60] = 0;
  param_1[6] = local_148;
  param_1[7] = uStack_140;
  param_1[8] = local_138;
  param_1[9] = local_130;
  local_138 = 0;
  local_130 = 0xf;
  local_148 = local_148 & 0xffffffffffffff00;
  param_1[10] = local_128;
  *(undefined4 *)(param_1 + 0xb) = uVar27;
  *(undefined4 *)((longlong)param_1 + 0x5c) = param_6;
LAB_18030c286:
  *(undefined8 *)(puVar21 + -8) = 0x18030c28f;
  FUN_18000f890(&local_148);
  *(undefined8 *)(puVar21 + -8) = 0x18030c299;
  FUN_18000f890(puVar21 + 0x60);
  *(undefined8 *)(puVar21 + -8) = 0x18030c2a8;
  return param_1;
}



/* ===== 18030c2f0 FUN_18030c2f0 ===== */

void FUN_18030c2f0(longlong param_1)

{
  FUN_18000f890(param_1 + 0x30);
  FUN_18000f890(param_1 + 0x10);
  return;
}



/* ===== 18030c310 FUN_18030c310 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18030c310(longlong param_1,undefined8 *param_2,float *param_3,undefined4 param_4)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  float fVar5;
  int iVar6;
  size_t sVar7;
  longlong *plVar8;
  longlong lVar9;
  ulonglong uVar10;
  int iVar11;
  undefined8 *puVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auStack_118 [32];
  float *local_f8;
  float *local_f0;
  undefined4 local_e8;
  float local_d8;
  float local_d4;
  undefined8 local_d0;
  undefined8 local_c8;
  float local_c0;
  float local_bc;
  undefined8 local_b8;
  longlong local_b0;
  longlong local_98 [12];
  
  fVar5 = DAT_1808ac8e4;
  fVar13 = DAT_1808ac1f4;
  local_98[4] = DAT_180919500 ^ (ulonglong)auStack_118;
  lVar1 = param_2[10];
  if (lVar1 == 0) {
    if (param_2[8] == 0) {
      puVar12 = (undefined8 *)param_2[1];
      plVar8 = (longlong *)*param_2;
    }
    else {
      plVar8 = param_2 + 2;
      if (0xf < (ulonglong)param_2[5]) {
        plVar8 = (longlong *)*plVar8;
      }
      puVar12 = param_2 + 6;
      if (0xf < (ulonglong)param_2[9]) {
        puVar12 = (undefined8 *)*puVar12;
      }
    }
    if ((puVar12 != (undefined8 *)0x0) && (plVar8 != (longlong *)0x0)) {
      local_e8 = param_4;
      if ((*(float *)((longlong)param_2 + 0x5c) <= 0.0) || (param_2[8] != 0)) {
        fVar14 = DAT_1808ac34c;
        if (DAT_180cd0fd8 != '\0') {
          fVar14 = DAT_1809f7440;
        }
        fVar15 = fVar14 * DAT_1808ac3d4;
        if (fVar14 * DAT_1808ac3d4 <= DAT_1808ac540) {
          fVar15 = DAT_1808ac540;
        }
        fVar14 = fVar15 * DAT_1808ac8e4 + DAT_1808ac1f4;
        local_98[0] = 0;
        local_98[1] = 0;
        local_98[2] = 0;
        local_98[3] = 0;
        sVar7 = strlen((char *)plVar8);
        FUN_1800133a0(local_98,plVar8,sVar7);
        plVar8 = (longlong *)FUN_18039ed80(&local_b8,local_98,puVar12,(int)fVar14);
        lVar1 = *plVar8;
        lVar2 = plVar8[1];
        iVar6 = *(int *)((longlong)plVar8 + 0xc);
        if (0xf < (ulonglong)local_98[3]) {
          uVar10 = local_98[3] + 1;
          lVar9 = local_98[0];
          if (0xfff < uVar10) {
            lVar9 = *(longlong *)(local_98[0] + -8);
            if (0x1f < (local_98[0] - lVar9) - 8U) {
              pcVar3 = (code *)swi(0x29);
              (*pcVar3)(5);
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            uVar10 = local_98[3] + 0x28;
          }
          thunk_FUN_1803d64e0(lVar9,uVar10);
        }
        if (((lVar1 != 0) && (0 < (int)lVar2)) && (0 < iVar6)) {
          fVar15 = (float)FUN_180519080(((float)(int)lVar2 / (float)iVar6) * fVar5);
          fVar14 = DAT_1808ac924;
          if (fVar15 <= DAT_1808ac924) {
            fVar14 = fVar15;
          }
          fVar13 = (float)FUN_18053f0d0(*param_3 - fVar14 * fVar13);
          local_d8 = fVar13;
          local_d4 = (float)FUN_18053f0d0(param_3[1] - DAT_1808ac7ec);
          local_c0 = 1.0;
          local_bc = 1.0;
          local_c8 = 0;
          local_d0 = CONCAT44(local_d4 + fVar5,fVar13 + fVar14);
          local_b8 = 0;
          local_f0 = &local_c0;
          local_f8 = (float *)&local_c8;
          local_b0 = lVar1;
          FUN_1803fea90(param_1,&local_b8,&local_d8,&local_d0);
        }
      }
      else {
        local_f0 = (float *)CONCAT44(local_f0._4_4_,DAT_1808ac8d4);
        local_f8 = param_3;
        FUN_1802b6e90(param_1,plVar8,puVar12);
      }
    }
  }
  else {
    fVar13 = (float)FUN_180519080(*(float *)(param_2 + 0xb) * DAT_1808ac8e4);
    fVar14 = (float)FUN_18053f0d0(*param_3 - fVar13 * DAT_1808ac1f4);
    local_c0 = fVar14;
    local_bc = (float)FUN_18053f0d0(param_3[1] - DAT_1808ac7ec);
    local_d8 = 1.0;
    local_d4 = 1.0;
    local_d0 = 0;
    local_c8 = CONCAT44(local_bc + fVar5,fVar14 + fVar13);
    if ((lVar1 == *(longlong *)(param_1 + 0x78)) && (*(longlong *)(param_1 + 0x70) == 0)) {
      bVar4 = false;
    }
    else {
      iVar6 = *(int *)(param_1 + 0xb4);
      if (*(int *)(param_1 + 0xb0) == iVar6) {
        iVar11 = *(int *)(param_1 + 0xb0) + 1;
        if (iVar6 == 0) {
          iVar6 = 8;
        }
        else {
          iVar6 = iVar6 / 2 + iVar6;
        }
        if (iVar11 < iVar6) {
          iVar11 = iVar6;
        }
        FUN_1803f7030(param_1 + 0xb0,iVar11);
      }
      iVar6 = *(int *)(param_1 + 0xb0);
      lVar2 = *(longlong *)(param_1 + 0xb8);
      *(undefined8 *)(lVar2 + (longlong)iVar6 * 0x10) = 0;
      *(longlong *)(lVar2 + 8 + (longlong)iVar6 * 0x10) = lVar1;
      *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 1;
      *(undefined8 *)(param_1 + 0x70) = 0;
      *(longlong *)(param_1 + 0x78) = lVar1;
      FUN_1803fc0a0(param_1);
      bVar4 = true;
    }
    FUN_1803fc3a0(param_1,6,4);
    local_f0 = (float *)CONCAT44(local_f0._4_4_,0xffffffff);
    local_f8 = &local_d8;
    FUN_1803fc4a0(param_1,&local_c0,&local_c8,&local_d0);
    if (bVar4) {
      FUN_1803fc340(param_1);
    }
  }
  return;
}



/* ===== 18030c710 FUN_18030c710 ===== */

undefined8 FUN_18030c710(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  int *piVar3;
  int iVar4;
  
  uVar1 = *(ulonglong *)(param_1 + 6);
  lVar2 = *(longlong *)(param_1 + 4);
  piVar3 = param_1;
  if (0xf < uVar1) {
    piVar3 = *(int **)param_1;
  }
  if ((lVar2 == 4) && (*piVar3 == 0x65676172)) {
    *param_2 = 0;
    *param_3 = 0;
    return 1;
  }
  piVar3 = param_1;
  if (0xf < uVar1) {
    piVar3 = *(int **)param_1;
  }
  if (lVar2 == 5) {
    iVar4 = *piVar3 + -0x6967656c;
    if (iVar4 == 0) {
      iVar4 = *(byte *)(piVar3 + 1) - 0x74;
    }
    if (iVar4 == 0) {
      *param_2 = 1;
      *param_3 = 0;
      return 1;
    }
  }
  piVar3 = param_1;
  if (0xf < uVar1) {
    piVar3 = *(int **)param_1;
  }
  if (lVar2 == 7) {
    iVar4 = *piVar3 + -0x79616c70;
    if ((iVar4 == 0) && (iVar4 = *(ushort *)(piVar3 + 1) - 0x7265, iVar4 == 0)) {
      iVar4 = *(byte *)((longlong)piVar3 + 6) - 0x73;
    }
    if (iVar4 == 0) {
      param_2[1] = 2;
      *param_2 = 2;
      *param_3 = 0;
      param_3[1] = 1;
      return 2;
    }
  }
  piVar3 = param_1;
  if (0xf < uVar1) {
    piVar3 = *(int **)param_1;
  }
  if (lVar2 == 5) {
    iVar4 = *piVar3 + -0x6c726f77;
    if (iVar4 == 0) {
      iVar4 = *(byte *)(piVar3 + 1) - 100;
    }
    if (iVar4 == 0) {
      *param_2 = 3;
      *param_3 = 0;
      return 1;
    }
  }
  piVar3 = param_1;
  if (0xf < uVar1) {
    piVar3 = *(int **)param_1;
  }
  if (lVar2 == 7) {
    iVar4 = *piVar3 + -0x75736976;
    if ((iVar4 == 0) && (iVar4 = *(ushort *)(piVar3 + 1) - 0x6c61, iVar4 == 0)) {
      iVar4 = *(byte *)((longlong)piVar3 + 6) - 0x73;
    }
    if (iVar4 == 0) {
      param_2[1] = 2;
      *param_2 = 2;
      *param_3 = 0;
      param_3[1] = 1;
      param_2[2] = 3;
      param_3[2] = 0;
      return 3;
    }
  }
  if (0xf < uVar1) {
    param_1 = *(int **)param_1;
  }
  if ((lVar2 == 4) && (*param_1 == 0x6373696d)) {
    *param_2 = 5;
    *param_3 = 0;
    return 1;
  }
  return 0;
}



/* ===== 18030c8d0 FUN_18030c8d0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_18030c8d0(undefined8 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  char cVar11;
  int iVar12;
  ulonglong uVar13;
  undefined8 ****ppppuVar14;
  longlong *plVar15;
  undefined8 ****ppppuVar16;
  longlong lVar17;
  uint uVar18;
  ulonglong uVar19;
  undefined1 auStack_198 [32];
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined8 *local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined4 local_138;
  undefined8 local_130;
  undefined4 local_128;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined8 uStack_104;
  undefined1 local_f8;
  undefined1 local_f7;
  undefined1 local_f6;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined8 ****local_d0 [2];
  undefined8 local_c0;
  ulonglong local_b8;
  undefined8 ****local_a8;
  longlong lStack_a0;
  ulonglong local_98;
  ulonglong local_90;
  ulonglong local_88;
  
  local_88 = DAT_180919500 ^ (ulonglong)auStack_198;
  local_140 = 0;
  local_138 = 0;
  local_130 = 0;
  local_128 = 0;
  local_168 = param_1;
  iVar12 = FUN_18030c710(param_2,&local_140,&local_130);
  lVar7 = DAT_1811076e8;
  lVar17 = DAT_1811076e0;
  if (DAT_1811076e0 != DAT_1811076e8) {
    do {
      FUN_18000f890(lVar17);
      lVar17 = lVar17 + 0x20;
    } while (lVar17 != lVar7);
    DAT_1811076e8 = DAT_1811076e0;
  }
  uVar6 = DAT_1809f73f0;
  if (iVar12 < 1) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    local_a8 = (undefined8 ****)0x0;
    lStack_a0 = 0;
    local_98 = 0;
    local_90 = 0;
    plVar15 = (longlong *)&DAT_1809f73e0;
    if (0xf < DAT_1809f73f8) {
      plVar15 = _DAT_1809f73e0;
    }
    if (0x7fffffffffffffff < DAT_1809f73f0) {
                    /* WARNING: Subroutine does not return */
      FUN_180011990();
    }
    local_178 = DAT_1811076c0;
    if (DAT_1809f73f0 < 0x10) {
      local_98 = DAT_1809f73f0;
      uVar19 = 0xf;
      local_90 = 0xf;
      ppppuVar14 = (undefined8 ****)*plVar15;
      lStack_a0 = plVar15[1];
      local_a8 = ppppuVar14;
    }
    else {
      uVar13 = DAT_1809f73f0 | 0xf;
      uVar19 = 0x7fffffffffffffff;
      if ((uVar13 < 0x8000000000000000) && (uVar19 = uVar13, uVar13 < 0x16)) {
        uVar19 = 0x16;
      }
      ppppuVar14 = (undefined8 ****)FUN_18000fb70(uVar19 + 1);
      local_98 = uVar6;
      local_a8 = ppppuVar14;
      local_90 = uVar19;
      FUN_180540530(ppppuVar14,plVar15,uVar6 + 1);
    }
    local_174 = DAT_181107484;
    local_170 = DAT_1811074f8;
    local_16c = DAT_181107674;
    local_f8 = DAT_1809f72e0;
    local_f7 = DAT_1809f72e1;
    local_f6 = DAT_1809f72e2;
    local_f4 = DAT_1809f72e4;
    local_f0 = DAT_1809f72e8;
    local_ec = DAT_1809f72ec;
    local_e8 = _DAT_1809f72f0;
    uStack_e0 = _DAT_1809f72f8;
    local_d8 = DAT_1809f7300;
    local_d4 = DAT_1809f7304;
    FUN_180024b50(local_d0,&DAT_1809f7308);
    uVar10 = _DAT_18110717c;
    uVar9 = DAT_181107178;
    uVar8 = DAT_181107174;
    uVar5 = DAT_1809f5b50;
    uVar4 = _DAT_1809f5b48;
    uVar3 = _DAT_1809f5b40;
    local_118 = DAT_181107168;
    uStack_114 = _DAT_18110716c;
    uStack_110 = DAT_181107170;
    uStack_10c = DAT_181107174;
    uStack_108 = DAT_181107178;
    uStack_104 = _DAT_18110717c;
    DAT_1809f73f0 = 0;
    plVar15 = (longlong *)&DAT_1809f73e0;
    if (0xf < DAT_1809f73f8) {
      plVar15 = _DAT_1809f73e0;
    }
    *(undefined1 *)plVar15 = 0;
    lVar7 = DAT_180ca0a50;
    *(undefined4 *)(DAT_180ca0a50 + 0x1f48) = 0xc6ea6000;
    *(undefined4 *)(lVar7 + 0x1f4c) = 0xc6ea6000;
    *(undefined8 *)(lVar7 + 0x1f50) = 0;
    *(undefined4 *)(lVar7 + 0x1f3c) = 1;
    *(uint *)(lVar7 + 0x1f38) = *(uint *)(lVar7 + 0x1f38) | 3;
    *(undefined4 *)(lVar7 + 0x1f58) = 0x44480000;
    *(undefined4 *)(lVar7 + 0x1f5c) = 0x43c80000;
    *(undefined4 *)(lVar7 + 8000) = 1;
    cVar11 = FUN_1803e4f20("##tab_fields",0,0x333ab);
    if (cVar11 != '\0') {
      local_160 = 0;
      local_168 = (undefined8 *)0x0;
      FUN_1803e0300(&local_168,&local_160,0);
      DAT_180cd04ae = 1;
      uVar13 = 0;
      do {
        uVar1 = *(undefined4 *)((longlong)local_d0 + uVar13 * 4 + -0x70);
        DAT_181107484 = *(undefined4 *)((longlong)local_d0 + uVar13 * 4 + -0x60);
        DAT_1811074f8 = DAT_181107484;
        DAT_181107674 = DAT_181107484;
        DAT_1811076c0 = uVar1;
        FUN_1803e8a70(uVar13);
        FUN_180337e50(uVar1);
        FUN_1802b9bd0();
        FUN_1802b8b90();
        iVar2 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
        if (iVar2 < 2) {
          FUN_1803ebc00("Calling PopID() too many times!");
        }
        else {
          *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar2 + -1;
        }
        uVar18 = (int)uVar13 + 1;
        uVar13 = (ulonglong)uVar18;
      } while ((int)uVar18 < iVar12);
      DAT_180cd04ae = 0;
      FUN_1803e0390();
    }
    FUN_1803e75b0();
    DAT_1811076c0 = local_178;
    ppppuVar16 = &local_a8;
    if (0xf < uVar19) {
      ppppuVar16 = ppppuVar14;
    }
    FUN_180029840(&DAT_1809f73e0,ppppuVar16,uVar6);
    DAT_181107484 = local_174;
    DAT_1811074f8 = local_170;
    DAT_181107674 = local_16c;
    DAT_1809f72e0 = local_f8;
    DAT_1809f72e1 = local_f7;
    DAT_1809f72e2 = local_f6;
    DAT_1809f72e4 = local_f4;
    DAT_1809f72e8 = local_f0;
    DAT_1809f72ec = local_ec;
    _DAT_1809f72f0 = local_e8;
    _DAT_1809f72f8 = uStack_e0;
    DAT_1809f7300 = local_d8;
    DAT_1809f7304 = local_d4;
    ppppuVar14 = local_d0;
    if (0xf < local_b8) {
      ppppuVar14 = local_d0[0];
    }
    FUN_180029840(&DAT_1809f7308,ppppuVar14,local_c0);
    _DAT_181107168 = CONCAT44(uStack_114,local_118);
    DAT_181107170 = uStack_110;
    local_158 = 0;
    uStack_150 = 0;
    local_148 = 0;
    _DAT_1809f5b40 = uVar3;
    _DAT_1809f5b48 = uVar4;
    DAT_1809f5b50 = uVar5;
    DAT_181107174 = uVar8;
    DAT_181107178 = uVar9;
    _DAT_18110717c = uVar10;
    FUN_180068970(&local_158,DAT_1811076e8 - DAT_1811076e0 >> 5,&DAT_1811076e0,&DAT_1811076e8);
    lVar7 = DAT_1811076e8;
    lVar17 = DAT_1811076e0;
    if (DAT_1811076e0 != DAT_1811076e8) {
      do {
        FUN_18000f890(lVar17);
        lVar17 = lVar17 + 0x20;
      } while (lVar17 != lVar7);
      DAT_1811076e8 = DAT_1811076e0;
    }
    uVar5 = local_148;
    uVar4 = uStack_150;
    uVar3 = local_158;
    local_148 = 0;
    uStack_150 = 0;
    local_158 = 0;
    *param_1 = uVar3;
    param_1[1] = uVar4;
    param_1[2] = uVar5;
    FUN_18000f890(local_d0);
    FUN_18000f890(&local_a8);
  }
  return param_1;
}



/* ===== 18030cdf0 FUN_18030cdf0 ===== */

ulonglong FUN_18030cdf0(void)

{
  char cVar1;
  size_t _Size;
  code *pcVar2;
  size_t sVar3;
  int iVar4;
  ulonglong in_RAX;
  undefined4 extraout_var;
  undefined8 *_Buf1;
  undefined8 *puVar5;
  undefined8 *_Buf2;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [24];
  undefined8 *local_58;
  undefined8 *local_50;
  longlong local_48;
  
  if (DAT_1809ec0b0 == 0) goto LAB_18030cf79;
  in_RAX = FUN_1800fda40(&local_58);
  puVar8 = local_58;
  uVar6 = DAT_1809ec0b8;
  sVar3 = DAT_1809ec0b0;
  puVar7 = DAT_1809ec0a0;
  puVar9 = auStack_78;
  puVar10 = auStack_78;
  puVar5 = local_58;
  if (local_58 != local_50) {
LAB_18030ce50:
    _Size = puVar5[2];
    _Buf2 = &DAT_1809ec0a0;
    if (0xf < uVar6) {
      _Buf2 = puVar7;
    }
    if ((ulonglong)puVar5[3] < 0x10) {
      _Buf1 = puVar5;
    }
    else {
      _Buf1 = (undefined8 *)*puVar5;
    }
    if (_Size != sVar3) goto LAB_18030ce81;
    if (_Size != 0) {
      iVar4 = memcmp(_Buf1,_Buf2,_Size);
      in_RAX = CONCAT44(extraout_var,iVar4);
      if (iVar4 != 0) goto LAB_18030ce81;
    }
    cVar1 = *(char *)(puVar5 + 6);
    if (puVar8 != (undefined8 *)0x0) {
      if (puVar8 != local_50) {
        do {
          FUN_18000f890(puVar8);
          puVar8 = puVar8 + 8;
        } while (puVar8 != local_50);
        puVar8 = local_58;
      }
      uVar6 = local_48 - (longlong)puVar8 & 0xffffffffffffffc0;
      if (0xfff < uVar6) {
        puVar7 = (undefined8 *)((longlong)puVar8 + (-8 - puVar8[-1]));
        if (puVar7 < &DAT_00000020) {
          thunk_FUN_1803d64e0(puVar8[-1],uVar6 | 0x27);
          return (ulonglong)(cVar1 == '\0');
        }
        goto LAB_18030cf6a;
      }
      thunk_FUN_1803d64e0(puVar8);
    }
    return (ulonglong)(cVar1 == '\0');
  }
LAB_18030ce8a:
  if (puVar8 == (undefined8 *)0x0) goto LAB_18030cf79;
  if (puVar8 != local_50) {
    do {
      FUN_18000f890(puVar8);
      puVar8 = puVar8 + 8;
    } while (puVar8 != local_50);
    puVar8 = local_58;
  }
  puVar5 = puVar8;
  if ((local_48 - (longlong)puVar8 & 0xffffffffffffffc0U) < 0x1000) {
LAB_18030cf71:
    puVar10 = puVar9;
  }
  else {
    puVar5 = (undefined8 *)puVar8[-1];
    puVar7 = (undefined8 *)((longlong)puVar8 + (-8 - (longlong)puVar5));
    if (&DAT_0000001f < puVar7) {
LAB_18030cf6a:
      pcVar2 = (code *)swi(0x29);
      (*pcVar2)(5);
      puVar9 = auStack_70;
      puVar5 = puVar7;
      goto LAB_18030cf71;
    }
  }
  *(undefined8 *)(puVar10 + -8) = 0x18030cf79;
  in_RAX = thunk_FUN_1803d64e0(puVar5);
LAB_18030cf79:
  return in_RAX & 0xffffffffffffff00;
LAB_18030ce81:
  puVar5 = puVar5 + 8;
  if (puVar5 == local_50) goto LAB_18030ce8a;
  goto LAB_18030ce50;
}



/* ===== 18030cf90 FUN_18030cf90 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18030cf90(char *param_1,char param_2)

{
  code *pcVar1;
  undefined1 *puVar2;
  char cVar3;
  int iVar4;
  size_t sVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined8 uStack_e0;
  undefined1 auStack_d8 [8];
  undefined1 auStack_d0 [24];
  undefined1 local_b8;
  undefined8 local_a8 [2];
  undefined1 local_98 [24];
  longlong local_80 [4];
  undefined1 local_60 [32];
  ulonglong local_40;
  
  local_40 = DAT_180919500 ^ (ulonglong)auStack_d8;
  local_80[0] = 0;
  local_80[1] = 0;
  local_80[2] = 0;
  local_80[3] = 0;
  sVar5 = strlen(param_1);
  FUN_1800133a0(local_80,param_1,sVar5);
  iVar4 = FUN_18030c710(local_80,local_98,local_a8);
  puVar11 = auStack_d8;
  if ((ulonglong)local_80[3] < 0x10) {
LAB_18030d02e:
    puVar13 = auStack_d8;
    if (iVar4 < 1) goto LAB_18030d409;
    FUN_1803e89e0(param_1);
    if (param_2 != '\0') {
      cVar3 = FUN_1803e9690(1,0,0);
      if (cVar3 != '\0') {
        cVar3 = FUN_18030cdf0();
        DAT_180cd0f0a = cVar3;
        if (DAT_1809f6f60 == '\0') {
LAB_18030d0b4:
          DAT_180cd04a9 = '\0';
        }
        else {
          sVar5 = strlen(param_1);
          puVar8 = &DAT_1809f6f68;
          if (0xf < DAT_1809f6f80) {
            puVar8 = DAT_1809f6f68;
          }
          if (DAT_1809f6f78 != sVar5) goto LAB_18030d0b4;
          if (DAT_1809f6f78 != 0) {
            iVar4 = memcmp(puVar8,param_1,DAT_1809f6f78);
            if (iVar4 != 0) goto LAB_18030d0b4;
          }
          DAT_180cd04a9 = '\x01';
        }
        if ((cVar3 != '\0') || (DAT_180cd04a9 != '\0')) {
          FUN_1802b4d80("##tab_context");
        }
      }
    }
    DAT_180cd04ab = 1;
    local_a8[0] = 0x40e0000040e00000;
    cVar3 = FUN_1802b5260("##tab_context",local_a8);
    if (cVar3 != '\0') {
      local_a8[0] = 0;
      FUN_1803d89a0(0xe,local_a8);
      if (DAT_180cd0f0a != '\0') {
        local_b8 = 0;
        cVar3 = FUN_1802c63e0(&DAT_18075c420,"picker_copy",
                              "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 448 512\" width=\"448\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M208 0L332 0C344 0 357 6 366 15L433 82C442 91 448 104 448 116L448 336C448 363 426 384 400 384L208 384C181 384 160 363 160 336L160 48C160 22 181 0 208 0ZM48 128L128 128L128 192L64 192L64 448L256 448L256 416L320 416L320 464C320 490 298 512 272 512L48 512C21 512 0 490 0 464L0 176C0 150 21 128 48 128Z\"/></svg>"
                              ,DAT_1808acbe4);
        if (cVar3 != '\0') {
          DAT_1809f6f60 = '\x01';
          sVar5 = strlen(param_1);
          FUN_180029840(&DAT_1809f6f68,param_1,sVar5);
          local_80[0] = 0;
          local_80[1] = 0;
          local_80[2] = 0;
          local_80[3] = 0;
          sVar5 = strlen(param_1);
          FUN_1800133a0(local_80,param_1,sVar5);
          uVar6 = FUN_18030c8d0(local_98,local_80);
          plVar7 = (longlong *)FUN_1800fc400(local_60,uVar6);
          if (plVar7 != &DAT_1809f6f88) {
            if (0xf < DAT_1809f6fa0) {
              uVar10 = DAT_1809f6fa0 + 1;
              lVar9 = DAT_1809f6f88;
              if (0xfff < uVar10) {
                lVar9 = *(longlong *)(DAT_1809f6f88 + -8);
                if (0x1f < (DAT_1809f6f88 - lVar9) - 8U) {
                  pcVar1 = (code *)swi(0x29);
                  (*pcVar1)(5);
                  puVar11 = auStack_d0;
                  goto LAB_18030d3f3;
                }
                uVar10 = DAT_1809f6fa0 + 0x28;
              }
              thunk_FUN_1803d64e0(lVar9,uVar10);
            }
            DAT_1809f6f88 = *plVar7;
            _DAT_1809f6f90 = plVar7[1];
            _DAT_1809f6f98 = plVar7[2];
            DAT_1809f6fa0 = plVar7[3];
            plVar7[2] = 0;
            plVar7[3] = 0xf;
            *(undefined1 *)plVar7 = 0;
          }
          FUN_18000f890(local_60);
          FUN_1800288b0(local_98);
          puVar11 = auStack_d8;
          if (0xf < (ulonglong)local_80[3]) {
            uVar10 = local_80[3] + 1;
            lVar9 = local_80[0];
            if (0xfff < uVar10) {
              lVar9 = *(longlong *)(local_80[0] + -8);
              if (0x1f < (local_80[0] - lVar9) - 8U) goto LAB_18030d3f3;
              uVar10 = local_80[3] + 0x28;
            }
            thunk_FUN_1803d64e0(lVar9,uVar10);
          }
          FUN_1803ee1f0();
        }
      }
      puVar12 = auStack_d8;
      if (DAT_180cd04a9 != '\0') {
        local_b8 = 0;
        cVar3 = FUN_1802c63e0("paste","picker_paste",
                              "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 512 512\" width=\"512\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M160 0C136 0 115 13 104 32L47 32C21 32 0 54 0 80L0 400C0 427 21 448 47 448L191 448L191 176C191 132 227 96 272 96L320 96L320 80C320 54 298 32 272 32L215 32C204 13 183 0 160 0ZM272 128C245 128 224 150 224 176L224 448L224 464C224 490 245 512 272 512L464 512C490 512 512 490 512 464L512 244C512 232 506 219 497 210L430 143C421 134 408 128 396 128L320 128L272 128ZM160 40C173 40 184 51 184 64C184 78 173 88 160 88C146 88 136 78 136 64C136 51 146 40 160 40Z\"/></svg>"
                              ,DAT_1808acc00);
        if (cVar3 != '\0') {
          local_80[0] = 0;
          local_80[1] = 0;
          local_80[2] = 0;
          local_80[3] = 0;
          sVar5 = strlen(param_1);
          FUN_1800133a0(local_80,param_1,sVar5);
          FUN_18030c8d0(local_98,local_80);
          if (0xf < (ulonglong)local_80[3]) {
            uVar10 = local_80[3] + 1;
            lVar9 = local_80[0];
            if (0xfff < uVar10) {
              lVar9 = *(longlong *)(local_80[0] + -8);
              if (0x1f < (local_80[0] - lVar9) - 8U) goto LAB_18030d3fa;
              uVar10 = local_80[3] + 0x28;
            }
            thunk_FUN_1803d64e0(lVar9,uVar10);
          }
          if (DAT_1809f6f60 != '\0') {
            sVar5 = strlen(param_1);
            puVar8 = &DAT_1809f6f68;
            if (0xf < DAT_1809f6f80) {
              puVar8 = DAT_1809f6f68;
            }
            if (DAT_1809f6f78 == sVar5) {
              if (DAT_1809f6f78 != 0) {
                iVar4 = memcmp(puVar8,param_1,DAT_1809f6f78);
                if (iVar4 != 0) goto LAB_18030d3a7;
              }
              FUN_1800fcb30(local_98);
              FUN_1800fc520(&DAT_1809f6f88,local_98);
            }
          }
LAB_18030d3a7:
          FUN_1803ee1f0();
          FUN_1800288b0(local_98);
        }
      }
      FUN_1803d8a40(1);
      FUN_1802b5590();
    }
    puVar13 = auStack_d8;
    lVar9 = *(longlong *)(DAT_180ca0a50 + 0x14f8);
    iVar4 = *(int *)(lVar9 + 0x108);
    puVar2 = auStack_d8;
    if (iVar4 < 2) {
      FUN_1803ebc00("Calling PopID() too many times!");
      goto LAB_18030d409;
    }
  }
  else {
    uVar10 = local_80[3] + 1;
    lVar9 = local_80[0];
    if (uVar10 < 0x1000) {
LAB_18030d029:
      thunk_FUN_1803d64e0(lVar9,uVar10);
      goto LAB_18030d02e;
    }
    lVar9 = *(longlong *)(local_80[0] + -8);
    if ((local_80[0] - lVar9) - 8U < 0x20) {
      uVar10 = local_80[3] + 0x28;
      goto LAB_18030d029;
    }
LAB_18030d3f3:
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar12 = puVar11 + 8;
LAB_18030d3fa:
    lVar9 = 5;
    pcVar1 = (code *)swi(0x29);
    iVar4 = (*pcVar1)();
    puVar2 = puVar12 + 8;
  }
  puVar13 = puVar2;
  *(int *)(lVar9 + 0x108) = iVar4 + -1;
LAB_18030d409:
  *(undefined8 *)(puVar13 + -8) = 0x18030d415;
  return;
}



/* ===== 18030d430 FUN_18030d430 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18030d430(char param_1)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [24];
  undefined1 local_68;
  undefined8 local_58;
  undefined1 local_50 [24];
  undefined1 local_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_88;
  FUN_1803e89e0("ambience_page");
  if (param_1 != '\0') {
    DAT_180cd0f0a = '\x01';
    if (DAT_1809f6f60 == '\0') {
LAB_18030d4af:
      DAT_180cd04a9 = '\0';
    }
    else {
      puVar6 = &DAT_1809f6f68;
      if (0xf < DAT_1809f6f80) {
        puVar6 = DAT_1809f6f68;
      }
      if (DAT_1809f6f78 != 8) goto LAB_18030d4af;
      iVar3 = memcmp(puVar6,"ambience",8);
      if (iVar3 != 0) goto LAB_18030d4af;
      DAT_180cd04a9 = '\x01';
    }
    FUN_1802b4d80("##tab_context");
  }
  DAT_180cd04ab = 1;
  local_58 = 0x40e0000040e00000;
  cVar2 = FUN_1802b5260("##tab_context",&local_58);
  if (cVar2 == '\0') {
LAB_18030d6f3:
    puVar9 = auStack_88;
    lVar7 = *(longlong *)(DAT_180ca0a50 + 0x14f8);
    iVar3 = *(int *)(lVar7 + 0x108);
    if (iVar3 < 2) {
      FUN_1803ebc00("Calling PopID() too many times!");
      puVar9 = auStack_88;
      goto LAB_18030d729;
    }
  }
  else {
    local_58 = 0;
    FUN_1803d89a0(0xe,&local_58);
    if (DAT_180cd0f0a == '\0') {
LAB_18030d63c:
      if (DAT_180cd04a9 != '\0') {
        local_68 = 0;
        cVar2 = FUN_1802c63e0("paste","picker_paste",
                              "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 512 512\" width=\"512\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M160 0C136 0 115 13 104 32L47 32C21 32 0 54 0 80L0 400C0 427 21 448 47 448L191 448L191 176C191 132 227 96 272 96L320 96L320 80C320 54 298 32 272 32L215 32C204 13 183 0 160 0ZM272 128C245 128 224 150 224 176L224 448L224 464C224 490 245 512 272 512L464 512C490 512 512 490 512 464L512 244C512 232 506 219 497 210L430 143C421 134 408 128 396 128L320 128L272 128ZM160 40C173 40 184 51 184 64C184 78 173 88 160 88C146 88 136 78 136 64C136 51 146 40 160 40Z\"/></svg>"
                              ,DAT_1808acc00);
        if (cVar2 != '\0') {
          if (DAT_1809f6f60 != '\0') {
            puVar6 = &DAT_1809f6f68;
            if (0xf < DAT_1809f6f80) {
              puVar6 = DAT_1809f6f68;
            }
            if (DAT_1809f6f78 == 8) {
              iVar3 = memcmp(puVar6,"ambience",8);
              if (iVar3 == 0) {
                FUN_1800fc010(local_50);
                FUN_1800fcb30(local_50);
                FUN_1800fc520(&DAT_1809f6f88,local_50);
                FUN_1803033d0();
                FUN_1800288b0(local_50);
              }
            }
          }
          FUN_1803ee1f0();
        }
      }
      FUN_1803d8a40(1);
      FUN_1802b5590();
      goto LAB_18030d6f3;
    }
    local_68 = 0;
    cVar2 = FUN_1802c63e0(&DAT_18075c420,"picker_copy",
                          "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 448 512\" width=\"448\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M208 0L332 0C344 0 357 6 366 15L433 82C442 91 448 104 448 116L448 336C448 363 426 384 400 384L208 384C181 384 160 363 160 336L160 48C160 22 181 0 208 0ZM48 128L128 128L128 192L64 192L64 448L256 448L256 416L320 416L320 464C320 490 298 512 272 512L48 512C21 512 0 490 0 464L0 176C0 150 21 128 48 128Z\"/></svg>"
                          ,DAT_1808acbe4);
    if (cVar2 == '\0') goto LAB_18030d63c;
    DAT_1809f6f60 = '\x01';
    FUN_180029840(&DAT_1809f6f68,"ambience",8);
    uVar4 = FUN_1800fc010(local_50);
    plVar5 = (longlong *)FUN_1800fc400(local_38,uVar4);
    if (plVar5 == &DAT_1809f6f88) {
LAB_18030d622:
      FUN_18000f890(local_38);
      FUN_1800288b0(local_50);
      FUN_1803ee1f0();
      goto LAB_18030d63c;
    }
    if (DAT_1809f6fa0 < 0x10) {
LAB_18030d5cf:
      DAT_1809f6f88 = *plVar5;
      _DAT_1809f6f90 = plVar5[1];
      _DAT_1809f6f98 = plVar5[2];
      DAT_1809f6fa0 = plVar5[3];
      plVar5[2] = 0;
      plVar5[3] = 0xf;
      *(undefined1 *)plVar5 = 0;
      goto LAB_18030d622;
    }
    uVar8 = DAT_1809f6fa0 + 1;
    lVar7 = DAT_1809f6f88;
    if (uVar8 < 0x1000) {
LAB_18030d5ca:
      thunk_FUN_1803d64e0(lVar7,uVar8);
      goto LAB_18030d5cf;
    }
    lVar7 = *(longlong *)(DAT_1809f6f88 + -8);
    if ((DAT_1809f6f88 - lVar7) - 8U < 0x20) {
      uVar8 = DAT_1809f6fa0 + 0x28;
      goto LAB_18030d5ca;
    }
    lVar7 = 5;
    pcVar1 = (code *)swi(0x29);
    iVar3 = (*pcVar1)();
    puVar9 = auStack_80;
  }
  *(int *)(lVar7 + 0x108) = iVar3 + -1;
LAB_18030d729:
  *(undefined8 *)(puVar9 + -8) = 0x18030d736;
  return;
}



/* ===== 18030d750 FUN_18030d750 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1
FUN_18030d750(longlong param_1,float *param_2,float param_3,float param_4,float param_5,
             undefined8 param_6,char *param_7,undefined8 param_8,char param_9)

{
  float fVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  undefined1 uVar6;
  char cVar7;
  uint uVar8;
  undefined4 uVar9;
  float *pfVar10;
  size_t sVar11;
  char *pcVar12;
  undefined4 *puVar13;
  int iVar14;
  float *pfVar15;
  longlong lVar16;
  ulonglong uVar17;
  undefined1 *puVar18;
  bool bVar19;
  undefined4 extraout_XMM0_Da;
  float fVar20;
  float fVar21;
  undefined1 auStack_188 [8];
  undefined1 auStack_180 [24];
  uint local_168;
  undefined4 *local_160;
  char *local_158;
  undefined8 local_150;
  undefined4 local_148;
  undefined4 local_140;
  float local_138;
  float local_134;
  float local_130;
  float local_12c;
  float local_128 [4];
  undefined8 local_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined8 local_100;
  ulonglong uStack_f8;
  undefined8 local_f0;
  ulonglong local_e8;
  undefined1 local_e0 [32];
  ulonglong local_c0;
  
  lVar16 = DAT_180ca0a50;
  fVar5 = DAT_1808ac864;
  local_c0 = DAT_180919500 ^ (ulonglong)auStack_188;
  fVar20 = (param_4 + *param_2) - DAT_1808ac864;
  param_3 = param_3 - DAT_1808ac864;
  fVar21 = param_5 + DAT_1808ac9fc;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  lVar16 = *(longlong *)(lVar16 + 0x14f8);
  local_118 = CONCAT44(param_5,fVar20);
  *(ulonglong *)(lVar16 + 0x118) = CONCAT44(param_5,fVar20);
  *(undefined1 *)(lVar16 + 0x159) = 1;
  local_138 = param_3;
  local_134 = fVar21;
  FUN_1803e89e0(param_6);
  local_130 = param_3 - fVar20;
  local_12c = 32.0;
  uVar6 = FUN_180415e30("##side",&local_130,0);
  cVar7 = FUN_1803dd930(0);
  if (*(int *)(DAT_180ca0a50 + 0x1578) == 0) {
    bVar19 = false;
  }
  else {
    bVar19 = *(int *)(DAT_180ca0a50 + 0x1578) == *(int *)(DAT_180ca0a50 + 0x1ee8);
  }
  if (param_9 != '\0' || bVar19) {
    fVar20 = DAT_1808ac34c;
  }
  else if (cVar7 == '\0') {
    fVar20 = 0.0;
  }
  else {
    fVar20 = DAT_1808ac1f4;
  }
  local_130 = (float)FUN_1803e8900(*(undefined8 *)(DAT_180ca0a50 + 0x14f8),&DAT_18075fd54);
  local_100 = CONCAT44(fVar20,fVar20);
  uStack_f8 = (ulonglong)(uint)fVar20;
  local_f0 = CONCAT44(local_f0._4_4_,0xffffffff);
  FUN_18034a380(extraout_XMM0_Da,&local_110,&local_130,&local_100);
  fVar20 = (float)FUN_1802b3660(CONCAT44(uStack_10c,local_110) + 0x14,fVar20,DAT_1808ac118,0);
  iVar14 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
  if (iVar14 < 2) {
    FUN_1803ebc00("Calling PopID() too many times!");
  }
  else {
    *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar14 + -1;
  }
  FUN_18030cf90(param_6,cVar7);
  if (0.0 < fVar20) {
    local_128[2] = 1.0;
    local_128[0] = 0.0;
    local_128[1] = fVar20 * DAT_1808ac1b0 * DAT_1808ac2cc;
    pfVar15 = local_128;
    if (0.0 <= local_128[1]) {
      pfVar15 = local_128 + 1;
    }
    pfVar10 = local_128 + 2;
    if (local_128[1] <= DAT_1808ac34c) {
      pfVar10 = pfVar15;
    }
    local_160 = (undefined4 *)((ulonglong)local_160 & 0xffffffff00000000);
    local_168 = DAT_1808ac838;
    FUN_1803fe590(param_1,&local_118,&local_138,
                  DAT_180960f44 & 0xffffff |
                  (int)(longlong)(*pfVar10 * DAT_1808acb94 + DAT_1808ac1f4) << 0x18);
  }
  uVar17 = (ulonglong)
           ((int)(longlong)((float)(DAT_180960ec0 >> 0x18) * DAT_1808ac21c + DAT_1808ac1f4) << 0x18
           | DAT_180960ec0 & 0xffffff);
  uVar8 = FUN_1802b38e0(uVar17,DAT_180960ec8,fVar20);
  fVar1 = *param_2;
  local_138 = param_4 + fVar1 + DAT_1808ac810;
  local_134 = param_5 + DAT_1808ac918;
  uVar9 = FUN_1802b38e0(uVar17 & 0xffffffff,DAT_1809f54bc,fVar20);
  FUN_18030c310(param_1,param_8,&local_138,uVar9);
  fVar20 = param_4 + fVar1 + DAT_1808ac900 + fVar5;
  local_138 = param_3 - fVar5;
  local_12c = param_5;
  local_134 = fVar21;
  local_130 = fVar20;
  FUN_1803fc200(param_1,&local_130,&local_138,1);
  local_100 = 0;
  uStack_f8 = 0;
  local_f0 = 0;
  local_e8 = 0;
  sVar11 = strlen(param_7);
  FUN_1800133a0(&local_100,param_7,sVar11);
  pcVar12 = (char *)FUN_18035eb30(local_e0,&local_100);
  if (0xf < *(ulonglong *)(pcVar12 + 0x18)) {
    pcVar12 = *(char **)pcVar12;
  }
  local_138 = fVar20;
  local_134 = (float)FUN_18053f0d0(DAT_1808ac7f8);
  local_134 = local_134 + param_5;
  lVar16 = DAT_181107a18;
  if ((DAT_181107a18 == 0) && (lVar16 = DAT_181107a08, DAT_181107a08 == 0)) {
    lVar16 = *(longlong *)(DAT_180ca0a50 + 0x11f0);
  }
  if ((((uVar8 & 0xff000000) != 0) && (pcVar12 != (char *)0x0)) && (*pcVar12 != '\0')) {
    if (lVar16 == 0) {
      lVar16 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x18);
    }
    local_110 = *(undefined4 *)(param_1 + 0x60);
    uStack_10c = *(undefined4 *)(param_1 + 100);
    uStack_108 = *(undefined4 *)(param_1 + 0x68);
    uStack_104 = *(undefined4 *)(param_1 + 0x6c);
    local_140 = 0;
    local_148 = 0;
    local_150 = 0;
    local_160 = &local_110;
    local_168 = uVar8;
    local_158 = pcVar12;
    FUN_18040a900(lVar16,param_1,DAT_1808ac930,&local_138);
  }
  FUN_18000f890(local_e0);
  if (local_e8 < 0x10) {
LAB_18030dc0b:
    puVar18 = auStack_188;
    iVar14 = *(int *)(param_1 + 0xa0);
    *(int *)(param_1 + 0xa0) = iVar14 + -1;
    if (iVar14 + -1 == 0) {
      puVar13 = (undefined4 *)(*(longlong *)(param_1 + 0x38) + 0x34);
      puVar18 = auStack_188;
      goto LAB_18030dc3f;
    }
  }
  else {
    uVar17 = local_e8 + 1;
    lVar16 = local_100;
    if (uVar17 < 0x1000) {
LAB_18030dc06:
      thunk_FUN_1803d64e0(lVar16,uVar17);
      goto LAB_18030dc0b;
    }
    lVar16 = *(longlong *)(local_100 + -8);
    if ((local_100 - lVar16) - 8U < 0x20) {
      uVar17 = local_e8 + 0x28;
      goto LAB_18030dc06;
    }
    iVar14 = 5;
    pcVar2 = (code *)swi(0x29);
    (*pcVar2)();
    puVar18 = auStack_180;
  }
  puVar13 = (undefined4 *)((longlong)(iVar14 + -2) * 0x10 + *(longlong *)(param_1 + 0xa8));
LAB_18030dc3f:
  uVar9 = puVar13[1];
  uVar3 = puVar13[2];
  uVar4 = puVar13[3];
  *(undefined4 *)(param_1 + 0x60) = *puVar13;
  *(undefined4 *)(param_1 + 100) = uVar9;
  *(undefined4 *)(param_1 + 0x68) = uVar3;
  *(undefined4 *)(param_1 + 0x6c) = uVar4;
  *(undefined8 *)(puVar18 + -8) = 0x18030dc4e;
  FUN_1803fbff0(param_1);
  *(undefined8 *)(puVar18 + -8) = 0x18030dc5e;
  return uVar6;
}



/* ===== 18030dca0 FUN_18030dca0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_18030dca0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 ****ppppuVar11;
  undefined8 ****ppppuVar12;
  longlong lVar13;
  ulonglong *puVar14;
  longlong *plVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong lVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  uint uVar21;
  longlong **pplVar22;
  longlong *plVar23;
  longlong *plVar24;
  longlong *plVar25;
  undefined8 uStack_820;
  undefined1 auStack_818 [8];
  undefined1 auStack_810 [40];
  undefined4 local_7e8;
  longlong local_7e0 [4];
  char *local_7c0;
  longlong local_7b8 [4];
  longlong local_798;
  longlong lStack_790;
  undefined8 local_788;
  longlong *local_780;
  longlong *local_778;
  undefined8 *local_770;
  undefined8 *local_768;
  undefined *local_760;
  longlong local_758;
  longlong lStack_750;
  longlong local_748;
  ulonglong local_740;
  longlong local_738;
  longlong lStack_730;
  longlong local_728;
  ulonglong local_720;
  undefined8 local_718;
  undefined8 uStack_710;
  longlong local_708;
  undefined8 uStack_700;
  undefined8 local_6f8;
  ulonglong local_6f0;
  longlong local_6e8;
  undefined8 uStack_6e0;
  undefined8 local_6d8;
  ulonglong local_6d0;
  undefined8 local_6c8;
  undefined8 local_6c0;
  undefined4 local_6b8;
  longlong local_6b0 [11];
  undefined8 local_658;
  undefined8 uStack_650;
  undefined8 local_648;
  undefined8 local_640;
  undefined8 local_638;
  undefined8 uStack_630;
  undefined8 local_628;
  undefined8 local_620;
  char *local_618;
  char *pcStack_610;
  undefined8 local_608;
  undefined8 uStack_600;
  undefined8 local_5f8;
  undefined8 local_5f0;
  undefined8 local_5e8;
  undefined8 uStack_5e0;
  undefined8 local_5d8;
  undefined8 local_5d0;
  undefined8 local_5c8;
  undefined8 local_5c0;
  undefined4 local_5b8;
  undefined8 local_5b0;
  undefined8 uStack_5a8;
  undefined8 local_5a0;
  undefined8 local_598;
  undefined8 local_590;
  undefined8 uStack_588;
  undefined8 local_580;
  undefined8 local_578;
  ulonglong local_570;
  undefined8 local_568;
  longlong lStack_560;
  undefined8 local_558;
  undefined8 uStack_550;
  undefined8 local_548;
  undefined8 local_540;
  undefined8 local_538;
  undefined8 uStack_530;
  undefined8 local_528;
  undefined8 local_520;
  undefined8 local_518;
  undefined8 uStack_510;
  longlong local_508;
  undefined8 uStack_500;
  undefined8 local_4f8;
  ulonglong local_4f0;
  longlong local_4e8;
  undefined8 uStack_4e0;
  undefined8 local_4d8;
  ulonglong local_4d0;
  undefined8 local_4c8;
  undefined8 local_4c0;
  undefined4 local_4b8;
  longlong local_4b0 [9];
  undefined1 local_468 [32];
  undefined1 local_448 [32];
  undefined8 local_428;
  undefined8 uStack_420;
  undefined1 local_418 [32];
  undefined1 local_3f8 [32];
  undefined8 local_3d8;
  undefined8 local_3d0;
  undefined4 local_3c8;
  undefined1 local_3c0 [32];
  undefined1 local_3a0 [32];
  undefined8 local_380;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined1 local_368 [32];
  undefined1 local_348 [32];
  char *local_328;
  char *local_320;
  undefined1 local_318 [32];
  undefined1 local_2f8 [32];
  undefined8 local_2d8;
  undefined4 local_2d0;
  undefined4 local_2cc;
  undefined4 local_2c8;
  undefined1 local_2c0 [32];
  undefined1 local_2a0 [32];
  undefined8 local_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined1 local_268 [32];
  undefined1 local_248 [32];
  char *local_228;
  undefined *local_220;
  undefined1 local_218 [32];
  undefined1 local_1f8 [32];
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined4 local_1c8;
  undefined1 local_1c0 [32];
  undefined1 local_1a0 [40];
  longlong local_178;
  longlong lStack_170;
  ulonglong local_168;
  ulonglong uStack_160;
  undefined8 ****local_158;
  longlong lStack_150;
  longlong *local_148;
  ulonglong local_140;
  undefined8 ****local_138;
  undefined8 uStack_130;
  longlong *local_128;
  ulonglong local_120;
  undefined1 local_118 [32];
  undefined1 local_f8 [32];
  undefined1 local_d8 [16];
  undefined1 local_c8 [32];
  undefined1 local_a8 [48];
  ulonglong local_78;
  
  local_78 = DAT_180919500 ^ (ulonglong)auStack_818;
  plVar8 = (longlong *)0x0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar21 = 1;
  local_7e8 = 1;
  local_7c0 = "AIMBOT";
  local_7b8[0] = 0;
  local_7b8[1] = 0;
  local_7b8[2] = 0;
  uStack_650 = 0;
  local_648 = 4;
  local_640 = 0xf;
  local_658 = (ulonglong)DAT_1806e0064;
  uStack_630 = 0;
  local_628 = 4;
  local_620 = 0xf;
  local_638 = (ulonglong)DAT_180766f30;
  local_618 = (char *)0x0;
  pcStack_610 = (char *)0x0;
  uStack_600 = 0;
  local_5f8 = 0;
  local_5f0 = 0xf;
  local_608 = 0;
  uStack_5e0 = 0;
  local_5d8 = 0;
  local_5d0 = 0xf;
  local_5e8 = 0;
  local_5c8 = 0;
  local_5c0 = 0x3f800000;
  local_5b8 = 0;
  uStack_5a8 = 0;
  local_5a0 = 0;
  local_598 = 0xf;
  local_5b0 = 0;
  uStack_588 = 0;
  local_580 = 0;
  local_578 = 0xf;
  local_590 = 0;
  local_570 = 0;
  local_568 = 0;
  lStack_560 = 0;
  local_770 = param_1;
  local_768 = param_1;
  FUN_180353920(local_7e0 + 5,0,&local_658);
  uVar16 = local_570;
  puVar20 = auStack_818;
  if (local_570 == 0) goto LAB_18030deae;
  FUN_18034e090(local_570,local_568);
  puVar19 = auStack_818;
  puVar20 = auStack_818;
  uVar17 = uVar16;
  if ((ulonglong)(((longlong)(lStack_560 - uVar16) >> 3) * 8) < 0x1000) {
LAB_18030de94:
    puVar20 = puVar19;
  }
  else {
    uVar17 = *(ulonglong *)(uVar16 - 8);
    uVar16 = (uVar16 - uVar17) - 8;
    if (0x1f < uVar16) {
      pcVar3 = (code *)swi(0x29);
      (*pcVar3)(5);
      puVar19 = auStack_810;
      uVar17 = uVar16;
      goto LAB_18030de94;
    }
  }
  *(undefined8 *)(puVar20 + -8) = 0x18030de9c;
  thunk_FUN_1803d64e0(uVar17);
  local_570 = 0;
  local_568 = 0;
  lStack_560 = 0;
LAB_18030deae:
  *(undefined8 *)(puVar20 + -8) = 0x18030deba;
  FUN_18000f890(&local_590);
  *(undefined8 *)(puVar20 + -8) = 0x18030dec6;
  FUN_18000f890(&local_5b0);
  *(undefined8 *)(puVar20 + -8) = 0x18030ded2;
  FUN_18000f890(&local_5e8);
  *(undefined8 *)(puVar20 + -8) = 0x18030dede;
  FUN_18000f890(&local_608);
  *(undefined8 *)(puVar20 + -8) = 0x18030deea;
  FUN_18000f890(&local_638);
  *(undefined8 *)(puVar20 + -8) = 0x18030def6;
  FUN_18000f890(&local_658);
  *(char **)(*(longlong *)(puVar20 + 0x68) + -0xc0) = "nl_glyph_crosshairs";
  *(char **)(*(longlong *)(puVar20 + 0x68) + -0xb8) =
       "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 512 512\" width=\"512\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M256 0C273 0 288 15 288 32L288 43C381 57 455 131 469 224L480 224C497 224 512 239 512 256C512 274 497 288 480 288L469 288C455 382 381 455 288 469L288 480C288 497 273 512 256 512C238 512 224 497 224 480L224 469C130 455 56 382 42 288L32 288C14 288 0 274 0 256C0 239 14 224 32 224L42 224C56 131 130 57 224 43L224 32C224 15 238 0 256 0ZM107 288C119 347 165 393 224 405L224 384C224 367 238 352 256 352C273 352 288 367 288 384L288 405C346 393 392 347 404 288L384 288C366 288 352 274 352 256C352 239 366 224 384 224L404 224C392 166 346 120 288 108L288 128C288 146 273 160 256 160C238 160 224 146 224 128L224 108C165 120 119 166 107 224L128 224C145 224 160 239 160 256C160 274 145 288 128 288L107 288ZM256 224C273 224 288 239 288 256C288 274 273 288 256 288C238 288 224 274 224 256C224 239 238 224 256 224Z\"/></svg>"
  ;
  *(undefined4 *)(*(longlong *)(puVar20 + 0x68) + -100) = 0x44000000;
  uStack_650 = 0;
  local_648 = 5;
  local_640 = 0xf;
  local_658 = (ulonglong)CONCAT14(s_legit_1806e006c[4],s_legit_1806e006c._0_4_);
  uStack_630 = 0;
  local_628 = 5;
  local_620 = 0xf;
  local_638 = (ulonglong)CONCAT14(s_Legit_180766f40[4],s_Legit_180766f40._0_4_);
  local_618 = (char *)0x0;
  pcStack_610 = (char *)0x0;
  uStack_600 = 0;
  local_5f8 = 0;
  local_5f0 = 0xf;
  local_608 = 0;
  uStack_5e0 = 0;
  local_5d8 = 0;
  local_5d0 = 0xf;
  local_5e8 = 0;
  local_5c8 = 0;
  local_5c0 = 0x3f800000;
  local_5b8 = 1;
  uStack_5a8 = 0;
  local_5a0 = 0;
  local_598 = 0xf;
  local_5b0 = 0;
  uStack_588 = 0;
  local_580 = 0;
  local_578 = 0xf;
  local_590 = 0;
  local_570 = 0;
  local_568 = 0;
  lStack_560 = 0;
  lVar13 = *(longlong *)(puVar20 + 0x68);
  if (lVar13 == *(longlong *)(puVar20 + 0x70)) {
    *(undefined8 *)(puVar20 + -8) = 0x18030e0bc;
    FUN_180353920(puVar20 + 0x60,lVar13,&local_658);
  }
  else {
    *(undefined8 *)(puVar20 + -8) = 0x18030e05e;
    FUN_180359720(lVar13,&local_658);
    lVar18 = lStack_560;
    uVar10 = local_568;
    uVar16 = local_570;
    lStack_560 = 0;
    local_568 = 0;
    local_570 = 0;
    *(ulonglong *)(lVar13 + 0xe8) = uVar16;
    *(undefined8 *)(lVar13 + 0xf0) = uVar10;
    *(longlong *)(lVar13 + 0xf8) = lVar18;
    *(longlong *)(puVar20 + 0x68) = *(longlong *)(puVar20 + 0x68) + 0x100;
  }
  *(undefined8 *)(puVar20 + -8) = 0x18030e0c9;
  FUN_18030f550(&local_658);
  *(char **)(*(longlong *)(puVar20 + 0x68) + -0xc0) = "nl_glyph_computer_mouse";
  *(char **)(*(longlong *)(puVar20 + 0x68) + -0xb8) =
       "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 384 512\" width=\"384\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M0 192L176 192L176 0L160 0C71 0 0 72 0 160L0 192L0 192ZM0 224L0 352C0 441 71 512 160 512L224 512C312 512 384 441 384 352L384 224L192 224L0 224L0 224ZM384 192L384 160C384 72 312 0 224 0L208 0L208 192L384 192Z\"/></svg>"
  ;
  *(undefined4 *)(*(longlong *)(puVar20 + 0x68) + -100) = 0x43c00000;
  *(undefined8 *)(puVar20 + -8) = 0x18030e108;
  FUN_1803496a0(param_1,puVar20 + 0x58);
  *(char **)(puVar20 + 0x78) = "COMMON";
  local_798 = 0;
  lStack_790 = 0;
  local_788 = 0;
  *(undefined8 *)(puVar20 + -8) = 0x18030e133;
  FUN_180013350(local_368,"visuals");
  *(undefined8 *)(puVar20 + -8) = 0x18030e147;
  FUN_180013350(local_348,"Visuals");
  *(undefined8 *)(puVar20 + -8) = 0x18030e153;
  FUN_18000f4c0(local_318);
  *(undefined8 *)(puVar20 + -8) = 0x18030e15f;
  FUN_18000f4c0(local_2f8);
  local_2d8 = 0;
  local_2d0 = 0x3f800000;
  local_2c8 = 2;
  *(undefined8 *)(puVar20 + -8) = 0x18030e186;
  FUN_18000f4c0(local_2c0);
  *(undefined8 *)(puVar20 + -8) = 0x18030e192;
  FUN_18000f4c0(local_2a0);
  local_280 = 0;
  local_278 = 0;
  uStack_270 = 0;
  local_328 = "nl_glyph_eye_tab";
  local_320 = 
  "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 512 512\" width=\"512\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M0 96C0 61 28 32 64 32L448 32C483 32 512 61 512 96L512 416C512 451 483 480 448 480L64 480C28 480 0 451 0 416L0 96ZM323 203C319 196 311 192 304 192C296 192 288 196 284 203L197 331L170 297C166 292 159 288 152 288C144 288 137 292 133 297L69 377C63 385 62 395 66 403C70 411 78 416 88 416L184 416L216 416L424 416C432 416 441 412 445 404C449 396 448 386 443 379L323 203L323 203ZM323 203ZM112 192C129 192 144 183 153 168C162 154 162 135 153 120C144 106 129 96 112 96C94 96 79 106 70 120C61 135 61 154 70 168C79 183 94 192 112 192Z\"/></svg>"
  ;
  local_2cc = 0x44000000;
  *(undefined8 *)(puVar20 + -8) = 0x18030e1de;
  FUN_180013350(&local_658,"players");
  *(undefined8 *)(puVar20 + -8) = 0x18030e1f2;
  FUN_180013350(&local_638,"Players");
  *(undefined8 *)(puVar20 + -8) = 0x18030e1fe;
  FUN_18000f4c0(&local_608);
  *(undefined8 *)(puVar20 + -8) = 0x18030e20a;
  FUN_18000f4c0(&local_5e8);
  local_5c8 = 0;
  local_5c0 = CONCAT44(local_5c0._4_4_,0x3f800000);
  local_5b8 = 2;
  *(undefined8 *)(puVar20 + -8) = 0x18030e231;
  FUN_18000f4c0(&local_5b0);
  *(undefined8 *)(puVar20 + -8) = 0x18030e23d;
  FUN_18000f4c0(&local_590);
  local_618 = "nl_glyph_user";
  pcStack_610 = 
  "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 448 512\" width=\"448\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M224 256C269 256 311 232 334 192C357 153 357 104 334 64C311 25 269 0 224 0C178 0 136 25 113 64C90 104 90 153 113 192C136 232 178 256 224 256ZM178 304C79 304 0 384 0 482C0 498 13 512 29 512L418 512C434 512 448 498 448 482C448 384 368 304 269 304L178 304Z\"/></svg>"
  ;
  local_5c0 = CONCAT44(0x43e00000,(undefined4)local_5c0);
  *(undefined8 *)(puVar20 + -8) = 0x18030e277;
  FUN_180013350(local_268,"world");
  *(undefined8 *)(puVar20 + -8) = 0x18030e28b;
  FUN_180013350(local_248,"World");
  *(undefined8 *)(puVar20 + -8) = 0x18030e297;
  FUN_18000f4c0(local_218);
  *(undefined8 *)(puVar20 + -8) = 0x18030e2a3;
  FUN_18000f4c0(local_1f8);
  local_1d8 = 0;
  local_1d0 = 0x3f800000;
  local_1c8 = 3;
  *(undefined8 *)(puVar20 + -8) = 0x18030e2ca;
  FUN_18000f4c0(local_1c0);
  *(undefined8 *)(puVar20 + -8) = 0x18030e2d6;
  FUN_18000f4c0(local_1a0);
  local_228 = "nl_glyph_earth";
  local_220 = &DAT_1807470b0;
  local_1cc = 0x44000000;
  *(undefined8 *)(puVar20 + -8) = 0x18030e310;
  FUN_180349870(&local_280,&local_658);
  *(undefined8 *)(puVar20 + -8) = 0x18030e323;
  FUN_180349870(&local_280,local_268);
  *(undefined8 *)(puVar20 + -8) = 0x18030e333;
  FUN_180349780(local_7e0 + 9,local_368);
  *(undefined8 *)(puVar20 + -8) = 0x18030e346;
  FUN_180013350(local_468,"inventory");
  *(undefined8 *)(puVar20 + -8) = 0x18030e35a;
  FUN_180013350(local_448,"Inventory");
  local_428 = 0;
  uStack_420 = 0;
  *(undefined8 *)(puVar20 + -8) = 0x18030e371;
  FUN_18000f4c0(local_418);
  *(undefined8 *)(puVar20 + -8) = 0x18030e37d;
  FUN_18000f4c0(local_3f8);
  local_3d8 = 0;
  local_3d0 = 0x3f800000;
  local_3c8 = 4;
  *(undefined8 *)(puVar20 + -8) = 0x18030e3a5;
  FUN_18000f4c0(local_3c0);
  *(undefined8 *)(puVar20 + -8) = 0x18030e3b1;
  FUN_18000f4c0(local_3a0);
  local_380 = 0;
  local_378 = 0;
  uStack_370 = 0;
  *(undefined8 *)(puVar20 + -8) = 0x18030e3d4;
  FUN_180349780(local_7e0 + 9,local_468);
  *(undefined8 *)(puVar20 + -8) = 0x18030e3e1;
  FUN_18030f550(local_468);
  *(char **)(lStack_790 + -0xc0) = "nl_glyph_inventory";
  *(char **)(lStack_790 + -0xb8) =
       "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 576 512\" width=\"576\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M264 6C279 -1 296 -1 311 6L530 107C538 111 544 119 544 128C544 138 538 146 530 150L311 251C296 258 279 258 264 251L45 150C37 146 31 138 31 128C31 119 37 111 45 107L264 6ZM476 210L530 235C538 239 544 247 544 256C544 266 538 274 530 278L311 379C296 386 279 386 264 379L45 278C37 274 31 266 31 256C31 247 37 239 45 235L99 210L251 280C274 291 301 291 324 280L476 210L476 210ZM476 210ZM324 408L476 338L530 363C538 367 544 375 544 384C544 394 538 402 530 406L311 506C296 513 279 513 264 506L45 406C37 402 31 394 31 384C31 375 37 367 45 363L99 338L251 408C274 419 301 419 324 408L324 408ZM324 408Z\"/></svg>"
  ;
  *(undefined4 *)(lStack_790 + -100) = 0x44100000;
  *(undefined8 *)(puVar20 + -8) = 0x18030e423;
  FUN_180013350(local_468,&DAT_1806e0088);
  *(undefined8 *)(puVar20 + -8) = 0x18030e437;
  FUN_180013350(local_448,"Miscellaneous");
  local_428 = 0;
  uStack_420 = 0;
  *(undefined8 *)(puVar20 + -8) = 0x18030e44e;
  FUN_18000f4c0(local_418);
  *(undefined8 *)(puVar20 + -8) = 0x18030e45a;
  FUN_18000f4c0(local_3f8);
  local_3d8 = 0;
  local_3d0 = 0x3f800000;
  local_3c8 = 5;
  *(undefined8 *)(puVar20 + -8) = 0x18030e482;
  FUN_18000f4c0(local_3c0);
  *(undefined8 *)(puVar20 + -8) = 0x18030e48e;
  FUN_18000f4c0(local_3a0);
  local_380 = 0;
  local_378 = 0;
  uStack_370 = 0;
  *(undefined8 *)(puVar20 + -8) = 0x18030e4b1;
  FUN_180349780(local_7e0 + 9,local_468);
  *(undefined8 *)(puVar20 + -8) = 0x18030e4be;
  FUN_18030f550(local_468);
  *(char **)(lStack_790 + -0xc0) = "nl_glyph_misc";
  *(char **)(lStack_790 + -0xb8) =
       "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 448 512\" width=\"448\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M384 480C419 480 448 451 448 416L448 96C448 61 419 32 384 32L64 32C28 32 0 61 0 96L0 416C0 451 28 480 64 480L384 480ZM384 336C384 354 369 368 352 368L320 368L320 384C320 402 305 416 288 416C270 416 256 402 256 384L256 368L96 368C78 368 64 354 64 336C64 319 78 304 96 304L256 304L256 288C256 271 270 256 288 256C305 256 320 271 320 288L320 304L352 304C369 304 384 319 384 336ZM352 144C369 144 384 159 384 176C384 194 369 208 352 208L192 208L192 224C192 242 177 256 160 256C142 256 128 242 128 224L128 208L96 208C78 208 64 194 64 176C64 159 78 144 96 144L128 144L128 128C128 111 142 96 160 96C177 96 192 111 192 128L192 144L352 144Z\"/></svg>"
  ;
  *(undefined4 *)(lStack_790 + -100) = 0x43e00000;
  *(undefined8 *)(puVar20 + -8) = 0x18030e4fa;
  FUN_1803496a0(param_1,puVar20 + 0x78);
  *(char **)(puVar20 + 0x38) = "EXTENSIONS";
  *(undefined8 *)(puVar20 + 0x40) = 0;
  *(undefined8 *)(puVar20 + 0x48) = 0;
  *(undefined8 *)(puVar20 + 0x50) = 0;
  local_760 = &DAT_1809e8e50;
  *(undefined8 *)(puVar20 + -8) = 0x18030e527;
  iVar7 = FUN_1804e4d70(&DAT_1809e8e50);
  uVar4 = DAT_1808acc0c;
  if (iVar7 != 0) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar20 + -8) = &UNK_18030f471;
    FUN_1804e4a90(5);
  }
  if (DAT_1809e8e9c == 0x7fffffff) {
    DAT_1809e8e9c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)(puVar20 + -8) = 0x18030f484;
    FUN_1804e4a90(6);
  }
  local_778 = DAT_180cd0278;
  plVar25 = DAT_180cd0270;
  plVar23 = DAT_180cd0278;
  if (DAT_180cd0270 != DAT_180cd0278) {
    do {
      lStack_750 = 0;
      local_748 = 0;
      local_740 = 0xf;
      local_758 = 0;
      lStack_730 = 0;
      local_728 = 0;
      local_720 = 0xf;
      local_738 = 0;
      local_718 = 0;
      uStack_710 = 0;
      uStack_700 = 0;
      local_6f8 = 0;
      local_6f0 = 0xf;
      local_708 = 0;
      uStack_6e0 = 0;
      local_6d8 = 0;
      local_6d0 = 0xf;
      local_6e8 = 0;
      local_6c8 = 0;
      local_6c0 = 0x3f800000;
      local_6b8 = 0;
      local_6b0[1] = 0;
      local_6b0[2] = 0;
      local_6b0[3] = 0xf;
      local_6b0[0] = 0;
      local_6b0[5] = 0;
      local_6b0[6] = 0;
      local_6b0[7] = 0xf;
      local_6b0[4] = 0;
      local_6b0[8] = 0;
      local_6b0[9] = 0;
      local_6b0[10] = 0;
      lVar13 = *plVar25;
      *(undefined8 *)(puVar20 + -8) = 0x18030e620;
      plVar8 = (longlong *)FUN_180066a20(&local_178,"script/",lVar13);
      if (&local_758 != plVar8) {
        if (local_740 < 0x10) {
LAB_18030e667:
          local_758 = *plVar8;
          lStack_750 = plVar8[1];
          local_748 = plVar8[2];
          local_740 = plVar8[3];
          plVar8[2] = 0;
          plVar8[3] = 0xf;
          *(undefined1 *)plVar8 = 0;
          goto LAB_18030e69d;
        }
        uVar16 = local_740 + 1;
        lVar13 = local_758;
        if (uVar16 < 0x1000) {
LAB_18030e662:
          *(undefined8 *)(puVar20 + -8) = 0x18030e667;
          thunk_FUN_1803d64e0(lVar13,uVar16);
          goto LAB_18030e667;
        }
        lVar13 = *(longlong *)(local_758 + -8);
        if ((local_758 - lVar13) - 8U < 0x20) {
          uVar16 = local_740 + 0x28;
          goto LAB_18030e662;
        }
LAB_18030f299:
        plVar8 = (longlong *)0x0;
        pcVar3 = (code *)swi(0x29);
        (*pcVar3)(5);
        puVar20 = puVar20 + 8;
LAB_18030f2a0:
        pcVar3 = (code *)swi(0x29);
        (*pcVar3)(5);
        puVar20 = puVar20 + 8;
LAB_18030f2a7:
        pcVar3 = (code *)swi(0x29);
        (*pcVar3)(5);
        puVar20 = puVar20 + 8;
LAB_18030f2ae:
        pcVar3 = (code *)swi(0x29);
        (*pcVar3)(5);
        puVar20 = puVar20 + 8;
        break;
      }
LAB_18030e69d:
      *(undefined8 *)(puVar20 + -8) = 0x18030e6a9;
      FUN_18000f890(&local_178);
      plVar8 = (longlong *)*plVar25;
      if (plVar8[0x12] == 0) {
        local_178 = 0;
        lStack_170 = 0;
        local_168 = 0;
        uStack_160 = 0;
        uVar16 = plVar8[2];
        if (0xf < (ulonglong)plVar8[3]) {
          plVar8 = (longlong *)*plVar8;
        }
        if (0x7fffffffffffffff < uVar16) {
                    /* WARNING: Subroutine does not return */
          *(undefined **)(puVar20 + -8) = &UNK_18030f48a;
          FUN_180011990();
        }
        if (uVar16 < 0x10) {
          local_168 = uVar16;
          uStack_160 = 0xf;
          local_178 = *plVar8;
          lStack_170 = plVar8[1];
        }
        else {
          uVar17 = uVar16 | 0xf;
          if (uVar17 < 0x8000000000000000) {
            if (uVar17 < 0x16) {
              uVar17 = 0x16;
            }
          }
          else {
            uVar17 = 0x7fffffffffffffff;
          }
          *(undefined8 *)(puVar20 + -8) = 0x18030e73b;
          local_178 = FUN_18000fb70(uVar17 + 1);
          *(undefined8 *)(puVar20 + -8) = 0x18030e75f;
          local_168 = uVar16;
          uStack_160 = uVar17;
          FUN_180540530(local_178,plVar8,uVar16 + 1);
        }
        plVar8 = &local_178;
        uVar21 = uVar21 | 2;
        *(uint *)(puVar20 + 0x30) = uVar21;
LAB_18030e79b:
        if (0xf < local_720) {
          uVar16 = local_720 + 1;
          lVar13 = local_738;
          if (0xfff < uVar16) {
            lVar13 = *(longlong *)(local_738 + -8);
            if (0x1f < (local_738 - lVar13) - 8U) {
              pcVar3 = (code *)swi(0x29);
              (*pcVar3)(5);
              puVar20 = puVar20 + 8;
              goto LAB_18030f299;
            }
            uVar16 = local_720 + 0x28;
          }
          *(undefined8 *)(puVar20 + -8) = 0x18030e7d6;
          thunk_FUN_1803d64e0(lVar13,uVar16);
        }
        local_738 = *plVar8;
        lStack_730 = plVar8[1];
        local_728 = plVar8[2];
        local_720 = plVar8[3];
        plVar8[2] = 0;
        plVar8[3] = 0xf;
        *(undefined1 *)plVar8 = 0;
      }
      else {
        *(undefined8 *)(puVar20 + -8) = 0x18030e788;
        plVar8 = (longlong *)FUN_180320330(local_118,plVar8,plVar8 + 0x10);
        uVar21 = uVar21 | 4;
        *(uint *)(puVar20 + 0x30) = uVar21;
        if (&local_738 != plVar8) goto LAB_18030e79b;
      }
      if ((uVar21 & 4) != 0) {
        uVar21 = uVar21 & 0xfffffffb;
        *(uint *)(puVar20 + 0x30) = uVar21;
        *(undefined8 *)(puVar20 + -8) = 0x18030e825;
        FUN_18000f890(local_118);
      }
      if ((uVar21 & 2) != 0) {
        uVar21 = uVar21 & 0xfffffffd;
        *(uint *)(puVar20 + 0x30) = uVar21;
        *(undefined8 *)(puVar20 + -8) = 0x18030e83f;
        FUN_18000f890(&local_178);
      }
      lVar13 = *plVar25;
      *(undefined4 *)(puVar20 + 0x28) = uVar4;
      *(longlong *)(puVar20 + 0x20) = lVar13;
      *(undefined8 *)(puVar20 + -8) = 0x18030e86f;
      puVar9 = (undefined8 *)
               FUN_18030bcf0(local_d8,lVar13 + 0xa0,"nl_glyph_developer",
                             "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 576 512\" width=\"576\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M416 32L384 32C366 32 352 47 352 64C352 82 366 96 384 96L416 96C433 96 448 111 448 128L448 166C448 191 458 216 476 234L498 256L476 279C458 297 448 321 448 347L448 384C448 402 433 416 416 416L384 416C366 416 352 431 352 448C352 465 366 480 384 480L416 480C469 480 512 437 512 384L512 347C512 338 515 330 521 324L566 279C579 267 579 246 566 234L521 188C515 182 512 174 512 166L512 128C512 75 469 32 416 32ZM160 32C107 32 64 75 64 128L64 166C64 174 60 183 54 189L9 234C-3 246 -3 267 9 279L54 324C60 330 64 339 64 347L64 384C64 437 107 480 160 480L192 480C209 480 224 465 224 448C224 431 209 416 192 416L160 416C142 416 128 402 128 384L128 347C128 321 117 297 99 279L77 256L99 234C117 216 128 191 128 166L128 128C128 111 142 96 160 96L192 96C209 96 224 82 224 64C224 47 209 32 192 32L160 32L160 32Z\"/></svg>"
                            );
      local_718 = *puVar9;
      uStack_710 = puVar9[1];
      plVar8 = puVar9 + 2;
      if (&local_708 != plVar8) {
        if (0xf < local_6f0) {
          uVar16 = local_6f0 + 1;
          lVar13 = local_708;
          if (0xfff < uVar16) {
            lVar13 = *(longlong *)(local_708 + -8);
            if (0x1f < (local_708 - lVar13) - 8U) goto LAB_18030f299;
            uVar16 = local_6f0 + 0x28;
          }
          *(undefined8 *)(puVar20 + -8) = 0x18030e8c9;
          thunk_FUN_1803d64e0(lVar13,uVar16);
        }
        local_708 = *plVar8;
        uStack_700 = puVar9[3];
        local_6f8 = puVar9[4];
        local_6f0 = puVar9[5];
        puVar9[4] = 0;
        puVar9[5] = 0xf;
        *(undefined1 *)plVar8 = 0;
      }
      plVar8 = puVar9 + 6;
      if (&local_6e8 != plVar8) {
        if (0xf < local_6d0) {
          uVar16 = local_6d0 + 1;
          lVar13 = local_6e8;
          if (0xfff < uVar16) {
            lVar13 = *(longlong *)(local_6e8 + -8);
            if (0x1f < (local_6e8 - lVar13) - 8U) goto LAB_18030f299;
            uVar16 = local_6d0 + 0x28;
          }
          *(undefined8 *)(puVar20 + -8) = 0x18030e947;
          thunk_FUN_1803d64e0(lVar13,uVar16);
        }
        local_6e8 = *plVar8;
        uStack_6e0 = puVar9[7];
        local_6d8 = puVar9[8];
        local_6d0 = puVar9[9];
        puVar9[8] = 0;
        puVar9[9] = 0xf;
        *(undefined1 *)plVar8 = 0;
      }
      local_6c8 = puVar9[10];
      local_6c0 = puVar9[0xb];
      *(undefined8 *)(puVar20 + -8) = 0x18030e9a5;
      FUN_18000f890(local_a8);
      *(undefined8 *)(puVar20 + -8) = 0x18030e9b1;
      FUN_18000f890(local_c8);
      local_6b8 = 8;
      plVar8 = (longlong *)*plVar25;
      if (local_6b0 != plVar8) {
        lVar13 = plVar8[2];
        if (0xf < (ulonglong)plVar8[3]) {
          plVar8 = (longlong *)*plVar8;
        }
        *(undefined8 *)(puVar20 + -8) = 0x18030e9dc;
        FUN_180029840(local_6b0,plVar8,lVar13);
      }
      plVar15 = *(longlong **)(*plVar25 + 0x38);
      plVar24 = *(longlong **)(*plVar25 + 0x40);
      local_780 = plVar24;
      if (plVar15 != plVar24) {
        do {
          if (plVar15[2] == 0) {
            for (lVar13 = *(longlong *)(*plVar25 + 0x68); lVar13 != *(longlong *)(*plVar25 + 0x70);
                lVar13 = lVar13 + 600) {
              if ((*(longlong *)(lVar13 + 0x38) == 0) && (*(int *)(lVar13 + 4) != 0xe))
              goto LAB_18030ea2f;
            }
          }
          else {
LAB_18030ea2f:
            uStack_550 = 0;
            local_548 = 0;
            local_540 = 0xf;
            local_558 = 0;
            uStack_530 = 0;
            local_528 = 0;
            local_520 = 0xf;
            local_538 = 0;
            local_518 = 0;
            uStack_510 = 0;
            uStack_500 = 0;
            local_4f8 = 0;
            local_4f0 = 0xf;
            local_508 = 0;
            uStack_4e0 = 0;
            local_4d8 = 0;
            local_4d0 = 0xf;
            local_4e8 = 0;
            local_4c8 = 0;
            local_4c0 = 0x3f800000;
            local_4b8 = 0;
            local_4b0[1] = 0;
            local_4b0[2] = 0;
            local_4b0[3] = 0xf;
            local_4b0[0] = 0;
            local_4b0[5] = 0;
            local_4b0[6] = 0;
            local_4b0[7] = 0xf;
            local_4b0[4] = 0;
            lVar13 = *plVar25;
            *(undefined8 *)(puVar20 + -8) = 0x18030eb1b;
            uVar10 = FUN_180066a20(local_f8,"script/",lVar13);
            *(undefined8 *)(puVar20 + -8) = 0x18030eb31;
            plVar8 = (longlong *)FUN_1800134a0(uVar10,&DAT_1806e08bc,1);
            local_178 = *plVar8;
            lStack_170 = plVar8[1];
            local_168 = plVar8[2];
            uStack_160 = plVar8[3];
            plVar8[2] = 0;
            plVar8[3] = 0xf;
            *(undefined1 *)plVar8 = 0;
            *(uint *)(puVar20 + 0x30) = uVar21 | 0x20;
            *(undefined8 *)(puVar20 + -8) = 0x18030eb86;
            puVar9 = (undefined8 *)FUN_1800667a0(local_118,&local_178,plVar15);
            if (&local_558 != puVar9) {
              local_558 = *puVar9;
              uStack_550 = puVar9[1];
              local_548 = puVar9[2];
              local_540 = puVar9[3];
              puVar9[2] = 0;
              puVar9[3] = 0xf;
              *(undefined1 *)puVar9 = 0;
            }
            *(undefined8 *)(puVar20 + -8) = 0x18030ebd7;
            FUN_18000f890(local_118);
            *(undefined8 *)(puVar20 + -8) = 0x18030ebe4;
            FUN_18000f890(&local_178);
            *(undefined8 *)(puVar20 + -8) = 0x18030ebf1;
            FUN_18000f890(local_f8);
            plVar8 = (longlong *)plVar15[2];
            if (plVar8 == (longlong *)0x0) {
              uStack_130 = 0;
              local_128 = (longlong *)0x4;
              local_120 = 0xf;
              local_138 = (undefined8 ****)(ulonglong)DAT_180767078;
              ppppuVar12 = &local_138;
              uVar21 = uVar21 | 0x28;
              pplVar22 = &local_128;
              puVar14 = &local_120;
              ppppuVar11 = local_138;
            }
            else {
              local_158 = (undefined8 ****)0x0;
              lStack_150 = 0;
              local_148 = (longlong *)0x0;
              local_140 = 0;
              if ((ulonglong)plVar15[3] < 0x10) {
                plVar23 = plVar15;
              }
              else {
                plVar23 = (longlong *)*plVar15;
              }
              if ((longlong *)0x7fffffffffffffff < plVar8) {
                    /* WARNING: Subroutine does not return */
                *(undefined8 *)(puVar20 + -8) = 0x18030f466;
                FUN_180011990();
              }
              if (plVar8 < (longlong *)0x10) {
                local_148 = plVar8;
                local_140 = 0xf;
                ppppuVar11 = (undefined8 ****)*plVar23;
                local_158 = ppppuVar11;
                lStack_150 = plVar23[1];
              }
              else {
                uVar16 = (ulonglong)plVar8 | 0xf;
                if (uVar16 < 0x8000000000000000) {
                  if (uVar16 < 0x16) {
                    uVar16 = 0x16;
                  }
                }
                else {
                  uVar16 = 0x7fffffffffffffff;
                }
                *(undefined8 *)(puVar20 + -8) = 0x18030ecd4;
                ppppuVar11 = (undefined8 ****)FUN_18000fb70(uVar16 + 1);
                *(undefined8 *)(puVar20 + -8) = 0x18030ecfb;
                local_158 = ppppuVar11;
                local_148 = plVar8;
                local_140 = uVar16;
                FUN_180540530(ppppuVar11,plVar23,(undefined1 *)((longlong)plVar8 + 1));
              }
              ppppuVar12 = &local_158;
              uVar21 = uVar21 | 0x30;
              pplVar22 = &local_148;
              puVar14 = &local_140;
              plVar24 = local_780;
            }
            *(uint *)(puVar20 + 0x30) = uVar21;
            if (*puVar14 < 0x10) {
              ppppuVar11 = ppppuVar12;
            }
            plVar23 = *pplVar22;
            *(undefined8 *)(puVar20 + -8) = 0x18030ed35;
            FUN_180029840(&local_538,ppppuVar11,plVar23);
            if ((uVar21 & 0x10) != 0) {
              uVar21 = uVar21 & 0xffffffef;
              *(uint *)(puVar20 + 0x30) = uVar21;
              if (0xf < local_140) {
                uVar16 = local_140 + 1;
                ppppuVar11 = local_158;
                if (0xfff < uVar16) {
                  ppppuVar11 = (undefined8 ****)local_158[-1];
                  if (0x1f < (ulonglong)((longlong)local_158 + (-8 - (longlong)ppppuVar11)))
                  goto LAB_18030f2a0;
                  uVar16 = local_140 + 0x28;
                }
                *(undefined8 *)(puVar20 + -8) = 0x18030ed84;
                thunk_FUN_1803d64e0(ppppuVar11,uVar16);
              }
            }
            if ((uVar21 & 8) != 0) {
              uVar21 = uVar21 & 0xfffffff7;
              *(uint *)(puVar20 + 0x30) = uVar21;
              if (0xf < local_120) {
                uVar16 = local_120 + 1;
                ppppuVar11 = local_138;
                if (0xfff < uVar16) {
                  ppppuVar11 = (undefined8 ****)local_138[-1];
                  if (0x1f < (ulonglong)((longlong)local_138 + (-8 - (longlong)ppppuVar11)))
                  goto LAB_18030f2a7;
                  uVar16 = local_120 + 0x28;
                }
                *(undefined8 *)(puVar20 + -8) = 0x18030edd3;
                thunk_FUN_1803d64e0(ppppuVar11,uVar16);
              }
            }
            *(undefined4 *)(puVar20 + 0x28) = 0;
            *(longlong *)(puVar20 + 0x20) = *plVar25;
            *(undefined8 *)(puVar20 + -8) = 0x18030ee00;
            puVar9 = (undefined8 *)
                     FUN_18030bcf0(local_d8,plVar15 + 4,"lua_icon_grid",
                                   "<svg xmlns=\"http://www.w3.org/2000/svg\" height=\"24\" viewBox=\"0 -960 960 960\" width=\"24\"><path fill=\"white\" d=\"M200-520q-33 0-56.5-23.5T120-600v-160q0-33 23.5-56.5T200-840h160q33 0 56.5 23.5T440-760v160q0 33-23.5 56.5T360-520H200Zm0 400q-33 0-56.5-23.5T120-200v-160q0-33 23.5-56.5T200-440h160q33 0 56.5 23.5T440-360v160q0 33-23.5 56.5T360-120H200Zm400-400q-33 0-56.5-23.5T520-600v-160q0-33 23.5-56.5T600-840h160q33 0 56.5 23.5T840-760v160q0 33-23.5 56.5T760-520H600Zm0 400q-33 0-56.5-23.5T520-200v-160q0-33 23.5-56.5T600-440h160q33 0 56.5 23.5T840-360v160q0 33-23.5 56.5T760-120H600Z\"/></svg>"
                                  );
            local_518 = *puVar9;
            uStack_510 = puVar9[1];
            plVar8 = puVar9 + 2;
            if (&local_508 != plVar8) {
              if (0xf < local_4f0) {
                uVar16 = local_4f0 + 1;
                lVar13 = local_508;
                if (0xfff < uVar16) {
                  lVar13 = *(longlong *)(local_508 + -8);
                  if (0x1f < (local_508 - lVar13) - 8U) goto LAB_18030f2a7;
                  uVar16 = local_4f0 + 0x28;
                }
                *(undefined8 *)(puVar20 + -8) = 0x18030ee6d;
                thunk_FUN_1803d64e0(lVar13,uVar16);
              }
              local_508 = *plVar8;
              uStack_500 = puVar9[3];
              local_4f8 = puVar9[4];
              local_4f0 = puVar9[5];
              puVar9[4] = 0;
              puVar9[5] = 0xf;
              *(undefined1 *)plVar8 = 0;
            }
            plVar8 = puVar9 + 6;
            if (&local_4e8 != plVar8) {
              if (0xf < local_4d0) {
                uVar16 = local_4d0 + 1;
                lVar13 = local_4e8;
                if (0xfff < uVar16) {
                  lVar13 = *(longlong *)(local_4e8 + -8);
                  if (0x1f < (local_4e8 - lVar13) - 8U) goto LAB_18030f2a7;
                  uVar16 = local_4d0 + 0x28;
                }
                *(undefined8 *)(puVar20 + -8) = 0x18030ef01;
                thunk_FUN_1803d64e0(lVar13,uVar16);
              }
              local_4e8 = *plVar8;
              uStack_4e0 = puVar9[7];
              local_4d8 = puVar9[8];
              local_4d0 = puVar9[9];
              puVar9[8] = 0;
              puVar9[9] = 0xf;
              *(undefined1 *)plVar8 = 0;
            }
            local_4c8 = puVar9[10];
            local_4c0 = puVar9[0xb];
            *(undefined8 *)(puVar20 + -8) = 0x18030ef71;
            FUN_18000f890(local_a8);
            *(undefined8 *)(puVar20 + -8) = 0x18030ef7d;
            FUN_18000f890(local_c8);
            local_4b8 = 8;
            plVar8 = (longlong *)*plVar25;
            if (local_4b0 != plVar8) {
              lVar13 = plVar8[2];
              if (0xf < (ulonglong)plVar8[3]) {
                plVar8 = (longlong *)*plVar8;
              }
              *(undefined8 *)(puVar20 + -8) = 0x18030efb1;
              FUN_180029840(local_4b0,plVar8,lVar13);
            }
            if (local_4b0 + 4 != plVar15) {
              if ((ulonglong)plVar15[3] < 0x10) {
                plVar8 = plVar15;
              }
              else {
                plVar8 = (longlong *)*plVar15;
              }
              lVar13 = plVar15[2];
              *(undefined8 *)(puVar20 + -8) = 0x18030efdc;
              FUN_180029840(local_4b0 + 4,plVar8,lVar13);
            }
            if (local_6b0[9] == local_6b0[10]) {
              *(undefined8 *)(puVar20 + -8) = 0x18030f01b;
              FUN_180353ad0(local_6b0 + 8,local_6b0[9],&local_558);
            }
            else {
              *(undefined8 *)(puVar20 + -8) = 0x18030eff8;
              FUN_180359720(local_6b0[9],&local_558);
              local_6b0[9] = local_6b0[9] + 0xe8;
            }
            *(undefined8 *)(puVar20 + -8) = 0x18030f028;
            FUN_18000f890(local_4b0 + 4);
            *(undefined8 *)(puVar20 + -8) = 0x18030f034;
            FUN_18000f890(local_4b0);
            *(undefined8 *)(puVar20 + -8) = 0x18030f040;
            FUN_18000f890(&local_4e8);
            *(undefined8 *)(puVar20 + -8) = 0x18030f04c;
            FUN_18000f890(&local_508);
            *(undefined8 *)(puVar20 + -8) = 0x18030f058;
            FUN_18000f890(&local_538);
            *(undefined8 *)(puVar20 + -8) = 0x18030f064;
            FUN_18000f890(&local_558);
          }
          plVar15 = plVar15 + 10;
        } while (plVar15 != plVar24);
        plVar23 = local_778;
      }
      plVar8 = (longlong *)0x0;
      if (local_6b0[8] == local_6b0[9]) {
        if (local_6b0[8] != 0) {
          *(undefined8 *)(puVar20 + -8) = 0x18030f0a3;
          FUN_18034e090(local_6b0[8],local_6b0[9]);
          uVar16 = (local_6b0[10] - local_6b0[8] >> 3) * 8;
          if (uVar16 < 0x1000) {
            lVar13 = local_6b0[8];
          }
          else {
            if (0x1f < (local_6b0[8] - *(longlong *)(local_6b0[8] + -8)) - 8U) goto LAB_18030f2ae;
            uVar16 = uVar16 + 0x27;
            lVar13 = *(longlong *)(local_6b0[8] + -8);
          }
          *(undefined8 *)(puVar20 + -8) = 0x18030f0fc;
          thunk_FUN_1803d64e0(lVar13,uVar16);
          local_6b0[8] = 0;
          local_6b0[9] = 0;
          local_6b0[10] = 0;
        }
      }
      else {
        if (local_6b0[9] - local_6b0[8] == 0xe8) {
          plVar15 = (longlong *)(local_6b0[8] + 200);
          if (local_6b0 + 4 != plVar15) {
            uVar10 = *(undefined8 *)(local_6b0[8] + 0xd8);
            if (0xf < *(ulonglong *)(local_6b0[8] + 0xe0)) {
              plVar15 = (longlong *)*plVar15;
            }
            *(undefined8 *)(puVar20 + -8) = 0x18030f152;
            FUN_180029840(local_6b0 + 4,plVar15,uVar10);
          }
          lVar13 = local_6b0[9];
          lVar18 = local_6b0[8];
          if (local_6b0[8] != local_6b0[9]) {
            do {
              *(undefined8 *)(puVar20 + -8) = 0x18030f17c;
              FUN_18000f890(lVar18 + 200);
              *(undefined8 *)(puVar20 + -8) = 0x18030f188;
              FUN_18000f890(lVar18 + 0xa8);
              *(undefined8 *)(puVar20 + -8) = 0x18030f191;
              FUN_18000f890(lVar18 + 0x70);
              *(undefined8 *)(puVar20 + -8) = 0x18030f19a;
              FUN_18000f890(lVar18 + 0x50);
              *(undefined8 *)(puVar20 + -8) = 0x18030f1a3;
              FUN_18000f890(lVar18 + 0x20);
              *(undefined8 *)(puVar20 + -8) = 0x18030f1ab;
              FUN_18000f890(lVar18);
              lVar18 = lVar18 + 0xe8;
            } while (lVar18 != lVar13);
            local_6b0[9] = local_6b0[8];
          }
        }
        lVar13 = *(longlong *)(puVar20 + 0x48);
        if (lVar13 == *(longlong *)(puVar20 + 0x50)) {
          *(undefined8 *)(puVar20 + -8) = 0x18030f238;
          FUN_180353920(puVar20 + 0x40,lVar13,&local_758);
        }
        else {
          *(undefined8 *)(puVar20 + -8) = 0x18030f1dd;
          FUN_180359720(lVar13,&local_758);
          lVar6 = local_6b0[10];
          lVar5 = local_6b0[9];
          lVar18 = local_6b0[8];
          local_6b0[10] = 0;
          local_6b0[9] = 0;
          local_6b0[8] = 0;
          *(longlong *)(lVar13 + 0xe8) = lVar18;
          *(longlong *)(lVar13 + 0xf0) = lVar5;
          *(longlong *)(lVar13 + 0xf8) = lVar6;
          *(longlong *)(puVar20 + 0x48) = *(longlong *)(puVar20 + 0x48) + 0x100;
        }
        *(undefined8 *)(puVar20 + -8) = 0x18030f245;
        FUN_1803498b0(local_6b0 + 8);
      }
      *(undefined8 *)(puVar20 + -8) = 0x18030f251;
      FUN_18000f890(local_6b0 + 4);
      *(undefined8 *)(puVar20 + -8) = 0x18030f25a;
      FUN_18000f890(local_6b0);
      *(undefined8 *)(puVar20 + -8) = 0x18030f263;
      FUN_18000f890(&local_6e8);
      *(undefined8 *)(puVar20 + -8) = 0x18030f26c;
      FUN_18000f890(&local_708);
      *(undefined8 *)(puVar20 + -8) = 0x18030f275;
      FUN_18000f890(&local_738);
      *(undefined8 *)(puVar20 + -8) = 0x18030f27e;
      FUN_18000f890(&local_758);
      plVar25 = plVar25 + 1;
    } while (plVar25 != plVar23);
    param_1 = local_770;
  }
  *(undefined8 *)(puVar20 + -8) = 0x18030f2c5;
  FUN_1804e4e90(&DAT_1809e8e50);
  if (*(longlong *)(puVar20 + 0x40) != *(longlong *)(puVar20 + 0x48)) {
    puVar9 = (undefined8 *)param_1[1];
    if (puVar9 == (undefined8 *)param_1[2]) {
      *(undefined8 *)(puVar20 + -8) = 0x18030f324;
      FUN_180353770(param_1,puVar9,puVar20 + 0x38);
    }
    else {
      *puVar9 = *(undefined8 *)(puVar20 + 0x38);
      uVar10 = *(undefined8 *)(puVar20 + 0x50);
      *(longlong **)(puVar20 + 0x50) = plVar8;
      uVar1 = *(undefined8 *)(puVar20 + 0x48);
      *(longlong **)(puVar20 + 0x48) = plVar8;
      uVar2 = *(undefined8 *)(puVar20 + 0x40);
      *(longlong **)(puVar20 + 0x40) = plVar8;
      puVar9[1] = uVar2;
      puVar9[2] = uVar1;
      puVar9[3] = uVar10;
      param_1[1] = param_1[1] + 0x20;
    }
  }
  *(undefined8 *)(puVar20 + -8) = 0x18030f32f;
  FUN_180349800(puVar20 + 0x40);
  *(undefined8 *)(puVar20 + -8) = 0x18030f33c;
  FUN_18000f890(local_1a0);
  *(undefined8 *)(puVar20 + -8) = 0x18030f348;
  FUN_18000f890(local_1c0);
  *(undefined8 *)(puVar20 + -8) = 0x18030f354;
  FUN_18000f890(local_1f8);
  *(undefined8 *)(puVar20 + -8) = 0x18030f360;
  FUN_18000f890(local_218);
  *(undefined8 *)(puVar20 + -8) = 0x18030f36c;
  FUN_18000f890(local_248);
  *(undefined8 *)(puVar20 + -8) = 0x18030f378;
  FUN_18000f890(local_268);
  *(undefined8 *)(puVar20 + -8) = 0x18030f385;
  FUN_18000f890(&local_590);
  *(undefined8 *)(puVar20 + -8) = 0x18030f391;
  FUN_18000f890(&local_5b0);
  *(undefined8 *)(puVar20 + -8) = 0x18030f39d;
  FUN_18000f890(&local_5e8);
  *(undefined8 *)(puVar20 + -8) = 0x18030f3a9;
  FUN_18000f890(&local_608);
  *(undefined8 *)(puVar20 + -8) = 0x18030f3b5;
  FUN_18000f890(&local_638);
  *(undefined8 *)(puVar20 + -8) = 0x18030f3c1;
  FUN_18000f890(&local_658);
  *(undefined8 *)(puVar20 + -8) = 0x18030f3ce;
  FUN_1803498b0(&local_280);
  *(undefined8 *)(puVar20 + -8) = 0x18030f3da;
  FUN_18000f890(local_2a0);
  *(undefined8 *)(puVar20 + -8) = 0x18030f3e6;
  FUN_18000f890(local_2c0);
  *(undefined8 *)(puVar20 + -8) = 0x18030f3f2;
  FUN_18000f890(local_2f8);
  *(undefined8 *)(puVar20 + -8) = 0x18030f3fe;
  FUN_18000f890(local_318);
  *(undefined8 *)(puVar20 + -8) = 0x18030f40a;
  FUN_18000f890(local_348);
  *(undefined8 *)(puVar20 + -8) = 0x18030f416;
  FUN_18000f890(local_368);
  *(undefined8 *)(puVar20 + -8) = 0x18030f420;
  FUN_180349800(local_7e0 + 9);
  *(undefined8 *)(puVar20 + -8) = 0x18030f42b;
  FUN_180349800(puVar20 + 0x60);
  *(undefined8 *)(puVar20 + -8) = 0x18030f43d;
  return param_1;
}



/* ===== 18030f490 FUN_18030f490 ===== */

void FUN_18030f490(longlong param_1)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  FUN_1803551e0(*(longlong *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
  puVar4 = auStack_28;
  puVar5 = auStack_28;
  lVar2 = *(longlong *)(param_1 + 8);
  if (0xfff < (*(longlong *)(param_1 + 0x18) - lVar2 & 0xffffffffffffff00U)) {
    lVar3 = *(longlong *)(lVar2 + -8);
    if ((lVar2 - lVar3) - 8U < 0x20) goto LAB_18030f4e7;
    pcVar1 = (code *)swi(0x29);
    lVar2 = (*pcVar1)(5);
    puVar4 = auStack_20;
  }
  lVar3 = lVar2;
  puVar5 = puVar4;
LAB_18030f4e7:
  *(undefined8 *)(puVar5 + -8) = 0x18030f4ec;
  thunk_FUN_1803d64e0(lVar3);
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}



/* ===== 18030f500 FUN_18030f500 ===== */

void FUN_18030f500(longlong param_1)

{
  FUN_18000f890(param_1 + 200);
  FUN_18000f890(param_1 + 0xa8);
  FUN_18000f890(param_1 + 0x70);
  FUN_18000f890(param_1 + 0x50);
  FUN_18000f890(param_1 + 0x20);
  FUN_18000f890(param_1);
  return;
}



/* ===== 18030f550 FUN_18030f550 ===== */

void FUN_18030f550(longlong param_1)

{
  FUN_1803498b0(param_1 + 0xe8);
  FUN_18000f890(param_1 + 200);
  FUN_18000f890(param_1 + 0xa8);
  FUN_18000f890(param_1 + 0x70);
  FUN_18000f890(param_1 + 0x50);
  FUN_18000f890(param_1 + 0x20);
  FUN_18000f890(param_1);
  return;
}



/* ===== 18030f5b0 FUN_18030f5b0 ===== */

ulonglong FUN_18030f5b0(longlong param_1)

{
  uint uVar1;
  size_t sVar2;
  int iVar3;
  ulonglong uVar4;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  uVar1 = *(uint *)(param_1 + 0xa0);
  uVar4 = (ulonglong)uVar1;
  if (uVar1 == DAT_181106f10) {
    if (uVar1 != 8) goto LAB_18030f666;
    sVar2 = *(size_t *)(param_1 + 0xb8);
    puVar5 = (undefined8 *)(param_1 + 0xa8);
    puVar6 = &DAT_1809f5b70;
    if (0xf < DAT_1809f5b88) {
      puVar6 = DAT_1809f5b70;
    }
    if (0xf < *(ulonglong *)(param_1 + 0xc0)) {
      puVar5 = (undefined8 *)*puVar5;
    }
    if (sVar2 == DAT_1809f5b80) {
      if (sVar2 != 0) {
        iVar3 = memcmp(puVar5,puVar6,sVar2);
        uVar4 = CONCAT44(extraout_var,iVar3);
        if (iVar3 != 0) goto LAB_18030f66e;
      }
      sVar2 = *(size_t *)(param_1 + 0xd8);
      puVar5 = (undefined8 *)(param_1 + 200);
      puVar6 = &DAT_1809f7400;
      if (0xf < DAT_1809f7418) {
        puVar6 = DAT_1809f7400;
      }
      if (0xf < *(ulonglong *)(param_1 + 0xe0)) {
        puVar5 = (undefined8 *)*puVar5;
      }
      if (sVar2 == DAT_1809f7410) {
        if (sVar2 != 0) {
          iVar3 = memcmp(puVar5,puVar6,sVar2);
          uVar4 = CONCAT44(extraout_var_00,iVar3);
          if (iVar3 != 0) goto LAB_18030f66e;
        }
LAB_18030f666:
        return CONCAT71((int7)(uVar4 >> 8),1);
      }
    }
  }
LAB_18030f66e:
  return uVar4 & 0xffffffffffffff00;
}



/* ===== 18030f680 FUN_18030f680 ===== */

void FUN_18030f680(ulonglong param_1)

{
  longlong lVar1;
  byte bVar2;
  longlong *plVar3;
  char *pcVar4;
  ulonglong uVar5;
  uint local_res8 [8];
  undefined1 local_18 [24];
  
  uVar5 = 0xffffffff;
  pcVar4 = "page_fade";
  bVar2 = 0x70;
  do {
    pcVar4 = pcVar4 + 1;
    if (((bVar2 == 0x23) && (*pcVar4 == 0x23)) && (pcVar4[1] == 0x23)) {
      uVar5 = 0xffffffff;
      pcVar4 = pcVar4 + 2;
    }
    else {
      param_1 = uVar5 & 0xff ^ (ulonglong)bVar2;
      uVar5 = (ulonglong)((uint)(uVar5 >> 8) ^ *(uint *)(&DAT_1806c25c0 + param_1 * 4));
    }
    bVar2 = *pcVar4;
  } while (bVar2 != 0);
  local_res8[0] = ~(uint)uVar5;
  plVar3 = (longlong *)FUN_18034f560(param_1,local_18,local_res8);
  lVar1 = *plVar3;
  *(undefined4 *)(lVar1 + 0x14) = 0x3f800000;
  *(undefined8 *)(lVar1 + 0x18) = 0x3f800000;
  *(undefined4 *)(lVar1 + 0x20) = 0;
  *(undefined4 *)(lVar1 + 0x24) = 0xffffffff;
  return;
}



/* ===== 18030f710 FUN_18030f710 ===== */

void FUN_18030f710(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_18030f680();
  DAT_181106f10 = *(int *)(param_1 + 0xa0);
  if (DAT_181106f10 - 2U < 2) {
    DAT_1809f51d8 = DAT_181106f10;
  }
  if (DAT_181106f10 == 8) {
    puVar1 = (undefined8 *)(param_1 + 0xa8);
    if (puVar1 != &DAT_1809f5b70) {
      if (*(ulonglong *)(param_1 + 0xc0) < 0x10) {
        puVar4 = puVar1;
      }
      else {
        puVar4 = (undefined8 *)*puVar1;
      }
      FUN_180029840(&DAT_1809f5b70,puVar4,*(undefined8 *)(param_1 + 0xb8));
    }
    puVar4 = (undefined8 *)(param_1 + 200);
    if (puVar4 != &DAT_1809f7400) {
      puVar5 = puVar4;
      if (0xf < *(ulonglong *)(param_1 + 0xe0)) {
        puVar5 = (undefined8 *)*puVar4;
      }
      FUN_180029840(&DAT_1809f7400,puVar5,*(undefined8 *)(param_1 + 0xd8));
    }
    iVar2 = FUN_1804e4d70(&DAT_1809e8e50);
    if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1804e4a90(5);
    }
    if (DAT_1809e8e9c == 0x7fffffff) {
      DAT_1809e8e9c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1804e4a90(6);
    }
    lVar3 = FUN_180098330(puVar1);
    if ((lVar3 != 0) && (lVar3 != param_1 + -8)) {
      if (0xf < *(ulonglong *)(param_1 + 0xe0)) {
        puVar4 = (undefined8 *)*puVar4;
      }
      FUN_180029840(lVar3 + 0xd0,puVar4,*(undefined8 *)(param_1 + 0xd8));
    }
    FUN_1804e4e90(&DAT_1809e8e50);
  }
  return;
}



/* ===== 18030f840 FUN_18030f840 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18030f840(longlong param_1)

{
  size_t _Size;
  int iVar1;
  longlong lVar2;
  undefined8 *_Buf1;
  longlong lVar3;
  undefined8 *******pppppppuVar4;
  undefined8 *******_Buf2;
  longlong lVar5;
  ulonglong uVar6;
  size_t sVar7;
  undefined1 auStack_88 [32];
  undefined *local_68;
  undefined8 *******local_60;
  undefined8 uStack_58;
  size_t local_50;
  ulonglong local_48;
  ulonglong local_40;
  
  local_40 = DAT_180919500 ^ (ulonglong)auStack_88;
  lVar2 = *(longlong *)(param_1 + 0xe8);
  lVar3 = param_1;
  if (lVar2 != *(longlong *)(param_1 + 0xf0)) {
    if (*(int *)(param_1 + 0xa0) == 8) {
      uStack_58 = 0;
      local_50 = 0;
      local_48 = 0xf;
      local_60 = (undefined8 *******)0x0;
      local_68 = &DAT_1809e8e50;
      iVar1 = FUN_1804e4d70(&DAT_1809e8e50);
      if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1804e4a90(5);
      }
      if (DAT_1809e8e9c == 0x7fffffff) {
        DAT_1809e8e9c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
        FUN_1804e4a90(6);
      }
      lVar2 = FUN_180098330(param_1 + 0xa8);
      uVar6 = 0xf;
      sVar7 = 0;
      if ((lVar2 != 0) &&
         (pppppppuVar4 = (undefined8 *******)(lVar2 + 0xd0),
         &local_60 != (undefined8 ********)pppppppuVar4)) {
        if (0xf < *(ulonglong *)(lVar2 + 0xe8)) {
          pppppppuVar4 = (undefined8 *******)*pppppppuVar4;
        }
        FUN_180029840(&local_60,pppppppuVar4,*(undefined8 *)(lVar2 + 0xe0));
        uVar6 = local_48;
        sVar7 = local_50;
      }
      FUN_1804e4e90(&DAT_1809e8e50);
      pppppppuVar4 = local_60;
      lVar2 = *(longlong *)(param_1 + 0xe8);
      lVar3 = *(longlong *)(param_1 + 0xf0);
      for (lVar5 = lVar2; lVar5 != lVar3; lVar5 = lVar5 + 0xe8) {
        _Buf2 = &local_60;
        if (0xf < uVar6) {
          _Buf2 = pppppppuVar4;
        }
        _Size = *(size_t *)(lVar5 + 0xd8);
        _Buf1 = (undefined8 *)(lVar5 + 200);
        if (0xf < *(ulonglong *)(lVar5 + 0xe0)) {
          _Buf1 = (undefined8 *)*_Buf1;
        }
        if ((_Size == sVar7) && ((_Size == 0 || (iVar1 = memcmp(_Buf1,_Buf2,_Size), iVar1 == 0))))
        goto LAB_18030f98a;
      }
      lVar5 = lVar2;
LAB_18030f98a:
      FUN_18030f710(lVar5);
      FUN_18000f890(&local_60);
      return;
    }
    lVar3 = lVar2;
    do {
      if (*(int *)(lVar3 + 0xa0) == DAT_1809f51d8) goto LAB_18030f9c7;
      lVar3 = lVar3 + 0xe8;
    } while (lVar3 != *(longlong *)(param_1 + 0xf0));
    lVar3 = lVar2;
  }
LAB_18030f9c7:
  FUN_18030f710(lVar3);
  return;
}



/* ===== 18030fa10 FUN_18030fa10 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18030fa10(longlong param_1,float *param_2,float param_3,longlong *param_4)

{
  uint uVar1;
  int iVar2;
  char *_Str;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float fVar10;
  undefined1 uVar11;
  char cVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  longlong *plVar16;
  longlong lVar17;
  undefined4 *puVar18;
  undefined8 *_Buf1;
  longlong *plVar19;
  longlong lVar20;
  longlong *plVar21;
  longlong lVar22;
  longlong *plVar23;
  ulonglong uVar24;
  float fVar25;
  float fVar26;
  undefined4 uVar27;
  float fVar28;
  float fVar29;
  undefined1 auStack_1e8 [32];
  float local_1c8;
  longlong *local_1c0;
  longlong *local_1b8;
  longlong *local_1b0;
  undefined4 local_1a8;
  undefined4 local_1a0;
  undefined4 local_198;
  undefined4 local_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 local_180;
  float local_178;
  float local_174;
  float local_170;
  float local_16c;
  float local_168;
  float local_164;
  ulonglong local_160;
  longlong *local_158;
  longlong local_150 [2];
  longlong local_140 [2];
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined1 local_110 [32];
  ulonglong local_f0;
  
  fVar10 = DAT_1808aca3c;
  uVar9 = DAT_1808aca28;
  uVar8 = DAT_1808ac34c;
  fVar7 = DAT_1808ac1f4;
  local_f0 = DAT_180919500 ^ (ulonglong)auStack_1e8;
  lVar20 = *param_4;
  if (param_4[1] - lVar20 >> 5 != 0) {
    fVar29 = *param_2 + DAT_1808acb4c;
    param_3 = param_3 + DAT_1808ac864;
    local_160 = 0;
    fVar26 = DAT_1808ac950;
    local_158 = param_4;
    do {
      lVar22 = local_160 * 0x20;
      if (local_160 != 0) {
        param_3 = param_3 + DAT_1808ac900;
      }
      _Str = *(char **)(lVar20 + lVar22);
      local_130 = 0;
      uStack_128 = 0;
      local_120 = 0;
      uStack_118 = 0;
      strlen(_Str);
      FUN_1800133a0(&local_130,_Str);
      plVar16 = (longlong *)FUN_18035eb30(local_110,&local_130);
      if (0xf < (ulonglong)plVar16[3]) {
        plVar16 = (longlong *)*plVar16;
      }
      local_178 = *param_2 + fVar26;
      lVar17 = DAT_181107a08;
      if (DAT_181107a08 == 0) {
        lVar17 = *(longlong *)(DAT_180ca0a50 + 0x11f0);
      }
      local_174 = param_3;
      if (((((uint)DAT_180960ecc & 0xff000000) != 0) && (plVar16 != (longlong *)0x0)) &&
         ((char)*plVar16 != '\0')) {
        if (lVar17 == 0) {
          lVar17 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x18);
        }
        local_190 = *(undefined4 *)(param_1 + 0x60);
        uStack_18c = *(undefined4 *)(param_1 + 100);
        uStack_188 = *(undefined4 *)(param_1 + 0x68);
        uStack_184 = *(undefined4 *)(param_1 + 0x6c);
        local_1a0 = 0;
        local_1a8 = 0;
        local_1b0 = (longlong *)0x0;
        local_1c0 = (longlong *)&local_190;
        local_1c8 = DAT_180960ecc;
        local_1b8 = plVar16;
        FUN_18040a900(lVar17,param_1,DAT_1808ac8dc,&local_178);
      }
      FUN_18000f890(local_110);
      FUN_18000f890(&local_130);
      param_3 = param_3 + _DAT_1808ac938;
      plVar16 = *(longlong **)(lVar20 + 0x10 + lVar22);
      for (plVar23 = *(longlong **)(lVar20 + 8 + lVar22); plVar23 != plVar16;
          plVar23 = plVar23 + 0x20) {
        lVar20 = plVar23[0x1e];
        lVar22 = plVar23[0x1d];
        if (lVar22 == lVar20) {
          bVar6 = false;
        }
        else if ((int)plVar23[0x14] == 8) {
          if (DAT_181106f10 == 8) {
            plVar19 = plVar23 + 0x15;
            if (0xf < (ulonglong)plVar23[0x18]) {
              plVar19 = (longlong *)*plVar19;
            }
            _Buf1 = &DAT_1809f5b70;
            if (0xf < DAT_1809f5b88) {
              _Buf1 = DAT_1809f5b70;
            }
            if ((DAT_1809f5b80 == plVar23[0x17]) &&
               ((DAT_1809f5b80 == 0 || (iVar13 = memcmp(_Buf1,plVar19,DAT_1809f5b80), iVar13 == 0)))
               ) {
LAB_18030fccc:
              bVar6 = true;
              goto LAB_18030fccf;
            }
          }
          bVar6 = false;
        }
        else {
          lVar17 = lVar22;
          do {
            if (*(int *)(lVar17 + 0xa0) == DAT_181106f10) goto LAB_18030fccc;
            lVar17 = lVar17 + 0xe8;
          } while (lVar17 != lVar20);
          bVar6 = false;
        }
LAB_18030fccf:
        if ((ulonglong)((lVar20 - lVar22 >> 3) * 0x34f72c234f72c235) < 2) {
          uVar11 = FUN_18030f5b0(plVar23);
        }
        else {
          uVar11 = 0;
        }
        local_1b8 = plVar23 + 4;
        if (0xf < (ulonglong)plVar23[7]) {
          local_1b8 = (longlong *)*local_1b8;
        }
        local_1c0 = plVar23;
        if (0xf < (ulonglong)plVar23[3]) {
          local_1c0 = (longlong *)*plVar23;
        }
        local_1b0 = plVar23 + 8;
        local_1a8 = CONCAT31(local_1a8._1_3_,uVar11);
        local_1c8 = param_3;
        cVar12 = FUN_18030d750(param_1,param_2,fVar29,fVar26);
        if (cVar12 != '\0') {
          FUN_18030f840(plVar23);
        }
        fVar28 = param_3 + fVar10;
        param_3 = fVar28;
        if (1 < (ulonglong)((plVar23[0x1e] - plVar23[0x1d] >> 3) * 0x34f72c234f72c235)) {
          if ((ulonglong)plVar23[3] < 0x10) {
            plVar19 = plVar23;
          }
          else {
            plVar19 = (longlong *)*plVar23;
          }
          FUN_1803e89e0(plVar19);
          uVar14 = FUN_1803e8900(*(undefined8 *)(DAT_180ca0a50 + 0x14f8),"##sub_height");
          uVar15 = FUN_1803e8900(*(undefined8 *)(DAT_180ca0a50 + 0x14f8),"##sub_alpha");
          uVar24 = (((((ulonglong)(byte)uVar14 ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                     (ulonglong)(uVar14 >> 8 & 0xff)) * 0x100000001b3 ^
                    (ulonglong)(uVar14 >> 0x10 & 0xff)) * 0x100000001b3 ^
                   (ulonglong)(uVar14 >> 0x18)) * 0x100000001b3 & DAT_181107640;
          lVar20 = *(longlong *)(DAT_181107628 + 8 + uVar24 * 0x10);
          if (lVar20 == DAT_181107618) {
LAB_18030fe57:
            lVar20 = DAT_181107618;
          }
          else {
            uVar1 = *(uint *)(lVar20 + 0x10);
            while (uVar14 != uVar1) {
              if (lVar20 == *(longlong *)(DAT_181107628 + uVar24 * 0x10)) goto LAB_18030fe57;
              lVar20 = *(longlong *)(lVar20 + 8);
              uVar1 = *(uint *)(lVar20 + 0x10);
            }
            if (lVar20 == 0) goto LAB_18030fe57;
          }
          local_198._1_1_ = (byte)(uVar15 >> 8);
          local_198._2_1_ = (byte)(uVar15 >> 0x10);
          local_198._3_1_ = (byte)(uVar15 >> 0x18);
          uVar24 = (((((ulonglong)uVar15 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                     (ulonglong)local_198._1_1_) * 0x100000001b3 ^ (ulonglong)local_198._2_1_) *
                    0x100000001b3 ^ (ulonglong)local_198._3_1_) * 0x100000001b3 & DAT_181107640;
          lVar22 = *(longlong *)(DAT_181107628 + 8 + uVar24 * 0x10);
          if (lVar22 == DAT_181107618) {
LAB_18030fec9:
            lVar22 = DAT_181107618;
          }
          else {
            uVar1 = *(uint *)(lVar22 + 0x10);
            while (uVar15 != uVar1) {
              if (lVar22 == *(longlong *)(DAT_181107628 + uVar24 * 0x10)) goto LAB_18030fec9;
              lVar22 = *(longlong *)(lVar22 + 8);
              uVar1 = *(uint *)(lVar22 + 0x10);
            }
            if (lVar22 == 0) goto LAB_18030fec9;
          }
          if (lVar20 == DAT_181107618) {
            fVar26 = 0.0;
          }
          else {
            fVar26 = *(float *)(lVar20 + 0x14);
          }
          if (lVar22 == DAT_181107618) {
            fVar25 = 0.0;
          }
          else {
            fVar25 = *(float *)(lVar22 + 0x14);
          }
          if ((bVar6) || (DAT_1808ac154 < fVar25)) {
            uVar27 = uVar8;
          }
          else {
            uVar27 = 0;
          }
          uStack_184 = 0;
          local_180 = 0xffffffff;
          local_198 = uVar14;
          local_190 = uVar27;
          uStack_18c = uVar27;
          uStack_188 = uVar27;
          FUN_18034a380(lVar20,local_150,&local_198,&local_190);
          fVar25 = (float)FUN_1802b3660(local_150[0] + 0x14,uVar27,DAT_1808ac118,0);
          if ((!bVar6) || (fVar26 < DAT_1808ac27c)) {
            uVar27 = 0;
          }
          else {
            uVar27 = uVar8;
          }
          uStack_184 = 0;
          local_180 = 0xffffffff;
          local_198 = uVar15;
          local_190 = uVar27;
          uStack_18c = uVar27;
          uStack_188 = uVar27;
          FUN_18034a380(fVar25,local_140,&local_198,&local_190);
          fVar26 = (float)FUN_1802b3660(local_140[0] + 0x14,uVar27,DAT_1808ac118,0);
          iVar13 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
          if (iVar13 < 2) {
            FUN_1803ebc00("Calling PopID() too many times!");
          }
          else {
            *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar13 + -1;
          }
          if (0.0 < fVar25) {
            uVar27 = *(undefined4 *)(param_1 + 0x20);
            param_3 = (float)(ulonglong)((plVar23[0x1e] - plVar23[0x1d] >> 3) * 0x34f72c234f72c235)
                      * fVar10 * fVar25 + fVar28;
            local_168 = *param_2;
            local_170 = fVar29;
            local_16c = param_3;
            local_164 = fVar28;
            FUN_1803fc200(param_1,&local_168,&local_170,1);
            plVar19 = (longlong *)plVar23[0x1e];
            for (plVar21 = (longlong *)plVar23[0x1d]; plVar21 != plVar19; plVar21 = plVar21 + 0x1d)
            {
              uVar11 = FUN_18030f5b0(plVar21);
              local_1b8 = plVar21 + 4;
              if (0xf < (ulonglong)plVar21[7]) {
                local_1b8 = (longlong *)*local_1b8;
              }
              if ((ulonglong)plVar21[3] < 0x10) {
                local_1c0 = plVar21;
              }
              else {
                local_1c0 = (longlong *)*plVar21;
              }
              local_1b0 = plVar21 + 8;
              local_1a8 = CONCAT31(local_1a8._1_3_,uVar11);
              local_1c8 = fVar28;
              cVar12 = FUN_18030d750(param_1,param_2,fVar29,uVar9);
              if ((cVar12 != '\0') && (fVar7 < fVar26)) {
                FUN_18030f710(plVar21);
              }
              fVar28 = fVar28 + fVar10;
            }
            iVar2 = *(int *)(param_1 + 0xa0);
            iVar13 = iVar2 + -1;
            *(int *)(param_1 + 0xa0) = iVar13;
            if (iVar13 == 0) {
              puVar18 = (undefined4 *)(*(longlong *)(param_1 + 0x38) + 0x34);
            }
            else {
              puVar18 = (undefined4 *)
                        ((longlong)(iVar2 + -2) * 0x10 + *(longlong *)(param_1 + 0xa8));
            }
            uVar3 = puVar18[1];
            uVar4 = puVar18[2];
            uVar5 = puVar18[3];
            *(undefined4 *)(param_1 + 0x60) = *puVar18;
            *(undefined4 *)(param_1 + 100) = uVar3;
            *(undefined4 *)(param_1 + 0x68) = uVar4;
            *(undefined4 *)(param_1 + 0x6c) = uVar5;
            FUN_1803fbff0(param_1);
            FUN_1802b3c30(param_1,uVar27,*(undefined4 *)(param_1 + 0x20),fVar26);
          }
          fVar26 = DAT_1808ac950;
        }
      }
      local_160 = local_160 + 1;
      lVar20 = *local_158;
    } while (local_160 < (ulonglong)(local_158[1] - lVar20 >> 5));
  }
  return;
}



/* ===== 180310220 FUN_180310220 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180310220(longlong param_1,float *param_2)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  char *pcVar8;
  undefined1 *puVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_c8 [8];
  undefined1 auStack_c0 [40];
  undefined4 local_98;
  undefined4 local_94;
  undefined8 local_90;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  undefined1 local_78 [24];
  char *local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  ulonglong local_48;
  ulonglong local_40;
  
  fVar12 = DAT_1808ac1f4;
  local_40 = DAT_180919500 ^ (ulonglong)auStack_c8;
  fVar11 = DAT_1808ac34c;
  if (DAT_180cd0fd8 != '\0') {
    fVar11 = DAT_1809f7440;
  }
  fVar10 = fVar11 * DAT_1808ac3d4;
  if (fVar11 * DAT_1808ac3d4 <= DAT_1808ac540) {
    fVar10 = DAT_1808ac540;
  }
  fVar11 = fVar10 * DAT_1808aca34 + DAT_1808ac1f4;
  local_60 = (char *)0x0;
  uStack_58 = 0;
  local_60 = (char *)FUN_18000fb70(0x20);
  uVar6 = s_wl_wordmark_header_180767030._8_8_;
  local_50 = 0x12;
  local_48 = 0x1f;
  *(undefined8 *)local_60 = s_wl_wordmark_header_180767030._0_8_;
  *(undefined8 *)(local_60 + 8) = uVar6;
  *(undefined2 *)(local_60 + 0x10) = s_wl_wordmark_header_180767030._16_2_;
  local_60[0x12] = '\0';
  plVar7 = (longlong *)
           FUN_18039ed80(local_78,&local_60,
                         "<svg xmlns=\"http://www.w3.org/2000/svg\" width=\"453.333\" height=\"120\" viewBox=\"0 -10 453.333 120\"><g transform=\"translate(18 18.1612) scale(1.354836) translate(-20 -27)\"><path d=\"M0 0 C0.72 0.02 1.44 0.05 2.18 0.07 C2.9 0.09 3.63 0.11 4.38 0.12 C4.65 0.14 4.65 0.14 6.05 0.2 C6.38 1.19 6.71 2.18 7.05 3.2 C7.71 3.2 8.37 3.2 9.05 3.2 C9.89 4.65 10.73 6.11 11.55 7.57 C12.02 8.38 12.48 9.19 12.96 10.03 C14.05 12.2 14.05 12.2 14.05 14.2 C14.71 14.2 15.37 14.2 16.05 14.2 C16.05 9.91 16.05 5.62 16.05 1.2 C18.05 0.2 18.05 0.2 25.05 0.2 C25.05 10.76 25.05 21.32 25.05 32.2 C21.75 32.2 18.45 32.2 15.05 32.2 C12.91 30.01 12.1 28.96 10.93 26.32 C10.64 25.76 10.35 25.21 10.05 24.64 C8.05 20.68 8.05 20.68 8.05 18.2 C7.06 18.2 6.07 18.2 5.05 18.2 C5.05 22.82 5.05 27.44 5.05 32.2 C2.41 32.2 -0.23 32.2 -2.95 32.2 C-5 28.09 -4.13 22.75 -4.13 18.19 C-4.13 16.2 -4.15 14.21 -4.17 12.23 C-4.17 10.97 -4.17 9.71 -4.18 8.45 C-4.18 7.3 -4.18 6.15 -4.19 4.96 C-3.91 1.75 -3.39 0.34 0 0 Z \" fill=\"#F3F3FB\" transform=\"translate(25.9453125,32.8046875)\" />\n<path d=\"M0 0 C2.97 0 5.94 0 9 0 C9 7.92 9 15.84 9 24 C11.97 24 14.94 24 18 24 C19.32 24.33 20.64 24.66 22 25 C22 27.64 22 30.28 22 33 C14.41 33 6.82 33 -1 33 C-1.02 28.46 -1.04 23.92 -1.05 19.38 C-1.06 17.84 -1.07 16.29 -1.08 14.75 C-1.09 12.53 -1.09 10.31 -1.1 8.1 C-1.1 7.4 -1.11 6.71 -1.11 5.99 C-1.11 4.33 -1.06 2.66 -1 1 C-0.67 0.67 -0.34 0.34 0 0 Z \" fill=\"#C4C5ED\" transform=\"translate(58,33)\" />\n<path d=\"M0 0 C1.65 0 3.3 0 5 0 C6 1 6 1 6.11 3.22 C6.11 4.18 6.1 5.14 6.1 6.13 C6.1 6.65 6.1 6.65 6.09 9.26 C6.08 10.35 6.07 11.44 6.06 12.56 C6.06 13.65 6.05 14.75 6.05 15.87 C6.04 18.58 6.02 21.29 6 24 C10.29 24.33 14.58 24.66 19 25 C19 25.99 19 26.98 19 28 C12.73 28 6.46 28 0 28 C0 18.76 0 9.52 0 0 Z \" fill=\"#F5F5FC\" transform=\"translate(58,35)\" />\n<path d=\"M0 0 C0 10.56 0 21.12 0 32 C-3.3 32 -6.6 32 -10 32 C-14 27.62 -14 27.62 -14 24 C-13.34 24 -12.68 24 -12 24 C-12 24.66 -12 25.32 -12 26 C-10.52 26.33 -10.52 26.33 -3 28 C-3 19.75 -3 11.5 -3 3 C-4.32 3 -5.64 3 -7 3 C-7 7.62 -7 12.24 -7 17 C-12 ..." /* TRUNCATED STRING LITERAL */
                         ,(int)fVar11);
  lVar2 = *plVar7;
  lVar5 = plVar7[1];
  iVar1 = *(int *)((longlong)plVar7 + 0xc);
  if (local_48 < 0x10) {
LAB_18031033e:
    puVar9 = auStack_c8;
    if (((lVar2 == 0) || (puVar9 = auStack_c8, (int)lVar5 < 1)) || (puVar9 = auStack_c8, iVar1 < 1))
    goto LAB_1803104b9;
    fVar11 = (float)FUN_18053f0d0(((float)(int)lVar5 / (float)iVar1) * DAT_1808aca34);
    fVar12 = (float)FUN_18053f0d0((DAT_1811bc95c - fVar11) * fVar12 + *param_2);
    local_80 = fVar12;
    local_7c = (float)FUN_18053f0d0(param_2[1] + DAT_1808ac8b0);
    local_98 = 0x3f800000;
    local_94 = 0x3f800000;
    local_90 = 0;
    local_88 = fVar12 + fVar11;
    local_84 = local_7c + DAT_1808aca34;
    puVar9 = auStack_c8;
    if ((lVar2 != *(longlong *)(param_1 + 0x78)) ||
       (puVar9 = auStack_c8, *(longlong *)(param_1 + 0x70) != 0)) goto LAB_1803103fe;
    bVar4 = false;
    puVar9 = auStack_c8;
  }
  else {
    pcVar8 = local_60;
    if ((local_48 + 1 < 0x1000) ||
       (pcVar8 = *(char **)(local_60 + -8), local_60 + (-8 - (longlong)pcVar8) < (char *)0x20)) {
      thunk_FUN_1803d64e0(pcVar8);
      goto LAB_18031033e;
    }
    pcVar3 = (code *)swi(0x29);
    (*pcVar3)(5);
    puVar9 = auStack_c0;
LAB_1803103fe:
    if (*(int *)(param_1 + 0xb0) == *(int *)(param_1 + 0xb4)) {
      *(undefined8 *)(puVar9 + -8) = 0x18031043d;
      FUN_1803f7030(param_1 + 0xb0);
    }
    iVar1 = *(int *)(param_1 + 0xb0);
    lVar5 = *(longlong *)(param_1 + 0xb8);
    *(undefined8 *)(lVar5 + (longlong)iVar1 * 0x10) = 0;
    *(longlong *)(lVar5 + 8 + (longlong)iVar1 * 0x10) = lVar2;
    *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 1;
    *(undefined8 *)(param_1 + 0x70) = 0;
    *(longlong *)(param_1 + 0x78) = lVar2;
    *(undefined8 *)(puVar9 + -8) = 0x18031046f;
    FUN_1803fc0a0(param_1);
    bVar4 = true;
  }
  *(undefined8 *)(puVar9 + -8) = 0x180310484;
  FUN_1803fc3a0(param_1,6,4);
  *(undefined4 *)(puVar9 + 0x28) = 0xffffffff;
  *(undefined1 **)(puVar9 + 0x20) = puVar9 + 0x30;
  *(undefined8 *)(puVar9 + -8) = 0x1803104ad;
  FUN_1803fc4a0(param_1,puVar9 + 0x48,puVar9 + 0x40,puVar9 + 0x38);
  if (bVar4) {
    *(undefined8 *)(puVar9 + -8) = 0x1803104b9;
    FUN_1803fc340(param_1);
  }
LAB_1803104b9:
  *(undefined8 *)(puVar9 + -8) = 0x1803104c9;
  return;
}



/* ===== 1803104f0 FUN_1803104f0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1
FUN_1803104f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4,char param_5
             )

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  undefined1 uVar10;
  char cVar11;
  uint uVar12;
  longlong lVar13;
  float *pfVar14;
  undefined4 *puVar15;
  longlong lVar16;
  float *pfVar17;
  char ****ppppcVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auStack_1b8 [32];
  float *local_198;
  float *local_190;
  char ****local_188;
  undefined8 local_180;
  ulonglong local_178;
  undefined4 local_170;
  undefined4 local_168;
  float local_158;
  float local_154;
  undefined8 local_150;
  float local_148 [4];
  float local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  float local_120;
  undefined4 local_11c;
  undefined4 local_118;
  ulonglong local_110;
  char ****local_108 [3];
  ulonglong local_f0;
  ulonglong local_e8;
  
  fVar20 = DAT_18110749c;
  local_e8 = DAT_180919500 ^ (ulonglong)auStack_1b8;
  DAT_18110749c = 0.0;
  lVar16 = *(longlong *)(DAT_180ca0a50 + 0x14f8);
  local_150 = *(undefined8 *)(lVar16 + 0x118);
  if ((*(longlong *)(lVar16 + 0x1c8) != 0) ||
     (lVar13 = 0x280, *(longlong *)(DAT_180ca0a50 + 0x2360) != 0)) {
    lVar13 = 0x250;
  }
  fVar21 = *(float *)(lVar16 + lVar13) - *(float *)(lVar16 + 0x118);
  local_154 = 31.706;
  local_158 = fVar21;
  FUN_1803e89e0(param_1);
  uVar10 = FUN_180415e30("##row",&local_158,0);
  cVar11 = FUN_1803dd930(0);
  fVar6 = DAT_1808ac34c;
  local_158 = *(float *)(DAT_180ca0a50 + 0x1ee8);
  if ((*(float *)(DAT_180ca0a50 + 0x1578) == 0.0) ||
     (*(float *)(DAT_180ca0a50 + 0x1578) != local_158)) {
    if (cVar11 == '\0') {
      fVar19 = 0.0;
    }
    else {
      fVar19 = DAT_1808ac1f4;
    }
  }
  else {
    fVar19 = DAT_1808ac34c;
  }
  local_11c = 0;
  local_118 = 0xffffffff;
  local_128._0_4_ = fVar19;
  local_128._4_4_ = fVar19;
  local_120 = fVar19;
  FUN_18034a380(local_158,&local_138,&local_158,&local_128);
  fVar19 = (float)FUN_1802b3660(CONCAT44(uStack_134,local_138) + 0x14,fVar19,DAT_1808ac118,0);
  lVar16 = DAT_180ca0a50;
  iVar1 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
  if (iVar1 < 2) {
    FUN_1803ebc00("Calling PopID() too many times!");
    lVar16 = DAT_180ca0a50;
  }
  else {
    *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar1 + -1;
  }
  *(undefined1 *)(*(longlong *)(lVar16 + 0x14f8) + 0xce) = 1;
  lVar16 = *(longlong *)(*(longlong *)(lVar16 + 0x14f8) + 0x2c8);
  fVar9 = local_150._4_4_;
  fVar8 = (float)local_150;
  if (0.0 < fVar19) {
    local_148[2] = 1.0;
    local_148[0] = 0.0;
    local_148[1] = fVar19 * DAT_1808ac1b0 * DAT_1808ac2cc;
    local_158 = fVar21 + (float)local_150;
    local_154 = local_150._4_4_ + DAT_1808ac9f8;
    pfVar17 = local_148;
    if (0.0 <= local_148[1]) {
      pfVar17 = local_148 + 1;
    }
    pfVar14 = local_148 + 2;
    if (local_148[1] <= fVar6) {
      pfVar14 = pfVar17;
    }
    local_190 = (float *)((ulonglong)local_190 & 0xffffffff00000000);
    local_198 = (float *)CONCAT44(local_198._4_4_,DAT_1808ac854);
    FUN_1803fe590(lVar16,&local_150,&local_158,
                  DAT_180960f44 & 0xffffff |
                  (int)(longlong)(*pfVar14 * DAT_1808acb94 + DAT_1808ac1f4) << 0x18);
  }
  fVar22 = fVar9 + DAT_1808ac910;
  uVar12 = FUN_1802b38e0(DAT_180960ef8,DAT_180960ec8,fVar19);
  uVar3 = DAT_1808ac8d4;
  fVar6 = DAT_1808ac8b0;
  local_158 = fVar8 + DAT_1808ac8b0 + DAT_1808ac864;
  local_154 = fVar22;
  if (fVar20 <= 0.0) {
    local_190 = (float *)CONCAT44(local_190._4_4_,uVar12);
    local_198 = (float *)CONCAT44(local_198._4_4_,DAT_1808ac918);
    FUN_1802b4710(lVar16,param_1,param_2,&local_158);
  }
  else {
    local_188 = (char ****)CONCAT44(local_188._4_4_,uVar12);
    local_190 = (float *)CONCAT44(local_190._4_4_,DAT_1808ac8d4);
    local_198 = &local_158;
    FUN_1802b6e90(lVar16,param_1,param_2,fVar20);
  }
  fVar20 = DAT_181107358;
  DAT_181107358 = 0.0;
  fVar21 = (fVar21 + fVar8) - fVar6;
  if (param_5 != '\0') {
    fVar19 = (float)FUN_18053fc00(DAT_1808ac84c);
    local_158 = fVar21 - fVar19 * DAT_1808ac1f4;
    local_188 = (char ****)CONCAT44(local_188._4_4_,DAT_180960ec0);
    local_190 = (float *)CONCAT44(local_190._4_4_,uVar3);
    local_198 = &local_158;
    local_154 = fVar22;
    FUN_1802b6e90(lVar16,"nl_glyph_angle_right",
                  "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 320 512\" width=\"320\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M278 234C291 246 291 267 278 279L118 439C106 451 85 451 73 439C60 427 60 406 73 394L210 256L73 119C60 107 60 86 73 74C85 61 106 61 118 74L278 234L278 234ZM278 234Z\"/></svg>"
                  ,DAT_1808acbc0);
    fVar21 = fVar21 - (fVar19 + DAT_1808ac658);
  }
  uVar4 = DAT_1808ac930;
  uVar3 = DAT_1808ac7ec;
  fVar20 = fVar21 - fVar20;
  if (param_4 != 0) {
    FUN_1802b3fe0(&local_128,param_4);
    local_190 = (float *)&local_128;
    if (0xf < local_110) {
      local_190 = (float *)CONCAT44(local_128._4_4_,(float)local_128);
    }
    local_168 = 0;
    local_178 = 0;
    local_180 = 0;
    local_188 = (char ****)0x0;
    local_198 = (float *)((ulonglong)local_198 & 0xffffffff00000000);
    FUN_18040a2f0(&local_158,*(undefined8 *)(DAT_180ca0a50 + 0x11f0),uVar4,DAT_1808acd08);
    uVar7 = DAT_180960ec0;
    fVar21 = fVar21 - local_158;
    ppppcVar18 = (char ****)&local_128;
    if (0xf < local_110) {
      ppppcVar18 = (char ****)CONCAT44(local_128._4_4_,(float)local_128);
    }
    local_158 = fVar21;
    local_154 = (float)FUN_18053f0d0(uVar3);
    local_154 = local_154 + fVar9;
    if ((((uVar7 & 0xff000000) != 0) && (ppppcVar18 != (char ****)0x0)) &&
       (*(char *)ppppcVar18 != '\0')) {
      local_138 = *(float *)(lVar16 + 0x60);
      uStack_134 = *(undefined4 *)(lVar16 + 100);
      uStack_130 = *(undefined4 *)(lVar16 + 0x68);
      uStack_12c = *(undefined4 *)(lVar16 + 0x6c);
      local_170 = 0;
      local_178 = local_178 & 0xffffffff00000000;
      local_180 = 0;
      local_190 = &local_138;
      local_198 = (float *)CONCAT44(local_198._4_4_,uVar7);
      local_188 = ppppcVar18;
      FUN_18040a900(*(undefined8 *)(*(longlong *)(lVar16 + 0x38) + 0x18),lVar16,uVar4,&local_158);
    }
    fVar21 = fVar21 - DAT_1808ac7ac;
    if (fVar20 <= fVar21) {
      fVar21 = fVar20;
    }
    FUN_18000f890(&local_128);
    fVar20 = fVar21;
  }
  FUN_1802b3fe0(local_108,param_3);
  local_158 = fVar8;
  if (fVar8 <= fVar20) {
    local_158 = fVar20;
  }
  local_154 = fVar9 + DAT_1808ac9f8;
  FUN_1803fc200(lVar16,&local_150,&local_158,1);
  ppppcVar18 = (char ****)local_108;
  if (0xf < local_f0) {
    ppppcVar18 = local_108[0];
  }
  local_150 = CONCAT44(local_150._4_4_,fVar8 + fVar6 + DAT_1808ac950 + fVar6);
  fVar20 = (float)FUN_18053f0d0(uVar3);
  local_150 = CONCAT44(fVar20 + fVar9,(float)local_150);
  if ((((uVar12 & 0xff000000) != 0) && (ppppcVar18 != (char ****)0x0)) &&
     (*(char *)ppppcVar18 != '\0')) {
    local_138 = *(float *)(lVar16 + 0x60);
    uStack_134 = *(undefined4 *)(lVar16 + 100);
    uStack_130 = *(undefined4 *)(lVar16 + 0x68);
    uStack_12c = *(undefined4 *)(lVar16 + 0x6c);
    local_170 = 0;
    local_178 = local_178 & 0xffffffff00000000;
    local_180 = 0;
    local_190 = &local_138;
    local_198 = (float *)CONCAT44(local_198._4_4_,uVar12);
    local_188 = ppppcVar18;
    FUN_18040a900(*(undefined8 *)(*(longlong *)(lVar16 + 0x38) + 0x18),lVar16,uVar4,&local_150);
  }
  iVar2 = *(int *)(lVar16 + 0xa0);
  iVar1 = iVar2 + -1;
  *(int *)(lVar16 + 0xa0) = iVar1;
  if (iVar1 == 0) {
    puVar15 = (undefined4 *)(*(longlong *)(lVar16 + 0x38) + 0x34);
  }
  else {
    puVar15 = (undefined4 *)((longlong)(iVar2 + -2) * 0x10 + *(longlong *)(lVar16 + 0xa8));
  }
  uVar3 = puVar15[1];
  uVar4 = puVar15[2];
  uVar5 = puVar15[3];
  *(undefined4 *)(lVar16 + 0x60) = *puVar15;
  *(undefined4 *)(lVar16 + 100) = uVar3;
  *(undefined4 *)(lVar16 + 0x68) = uVar4;
  *(undefined4 *)(lVar16 + 0x6c) = uVar5;
  FUN_1803fbff0(lVar16);
  FUN_18000f890(local_108);
  return uVar10;
}



/* ===== 180310b90 FUN_180310b90 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180310b90(int param_1)

{
  code *pcVar1;
  undefined8 ****ppppuVar2;
  ulonglong uVar3;
  undefined1 auStack_58 [32];
  undefined8 ****local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_58;
  if (DAT_180cd0fa6 == '\0') {
    DAT_180cd0fa6 = '\x01';
    FUN_18035be50();
    FUN_18035dd90();
  }
  if (((-1 < param_1) && (param_1 < (int)(DAT_1811078c0 - DAT_1811078b8 >> 3) * 0x684bda13)) &&
     (param_1 != DAT_1811078b0)) {
    DAT_1811078b0 = param_1;
    FUN_18028bcb0(&DAT_180ca19c0);
  }
  if (DAT_180cd0fa6 == '\0') {
    DAT_180cd0fa6 = '\x01';
    FUN_18035be50();
    FUN_18035dd90();
    if (DAT_180cd0fa6 == '\0') {
      DAT_180cd0fa6 = '\x01';
      FUN_18035be50();
      FUN_18035dd90();
    }
  }
  if ((DAT_1811078b0 < 0) ||
     ((int)(DAT_1811078d8 - DAT_1811078d0 >> 3) * -0xf0f0f0f <= DAT_1811078b0)) {
    local_28 = 0;
    uStack_30 = 0;
    local_38 = (undefined8 ****)0x0;
    local_20 = 0xf;
  }
  else {
    FUN_180024b50(&local_38,(longlong)DAT_1811078b0 * 0x88 + DAT_1811078d0);
  }
  ppppuVar2 = &local_38;
  if (0xf < local_20) {
    ppppuVar2 = local_38;
  }
  snprintf(&DAT_18091a1bc,0x20,&DAT_1806d3198,ppppuVar2);
  if (0xf < local_20) {
    uVar3 = local_20 + 1;
    ppppuVar2 = local_38;
    if (0xfff < uVar3) {
      ppppuVar2 = (undefined8 ****)local_38[-1];
      if (0x1f < (ulonglong)((longlong)local_38 + (-8 - (longlong)ppppuVar2))) {
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar3 = local_20 + 0x28;
    }
    thunk_FUN_1803d64e0(ppppuVar2,uVar3);
  }
  return;
}



/* ===== 180310d20 FUN_180310d20 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000180311521) */
/* WARNING: Removing unreachable block (ram,0x000180311678) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180310d20(longlong param_1)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  int iVar4;
  bool bVar5;
  float fVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined1 uVar9;
  char cVar10;
  char cVar11;
  undefined8 *puVar12;
  undefined1 *puVar13;
  undefined8 uVar14;
  longlong lVar15;
  longlong lVar16;
  undefined8 *puVar17;
  undefined8 *****pppppuVar18;
  int iVar19;
  char *****pppppcVar20;
  longlong lVar21;
  LPCWSTR ****lpFile;
  ulonglong uVar22;
  bool bVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auStackY_258 [32];
  float local_1f4;
  float local_1f0;
  uint local_1ec;
  undefined8 local_1e8;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined **local_1d8;
  int local_1d0;
  undefined ***local_1a0;
  undefined8 local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  LPCWSTR ****local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  ulonglong uStack_160;
  undefined8 *****local_158 [2];
  ulonglong local_148;
  ulonglong local_140;
  char *****local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  ulonglong uStack_120;
  undefined1 local_118 [32];
  ulonglong local_f8;
  
  local_f8 = DAT_180919500 ^ (ulonglong)auStackY_258;
  if (DAT_180cd0fa6 == '\0') {
    DAT_180cd0fa6 = '\x01';
    FUN_18035be50();
    FUN_18035dd90();
  }
  FUN_1803e89e0("nl_glyph_globe");
  lVar21 = *(longlong *)(DAT_180ca0a50 + 0x14f8);
  fVar1 = *(float *)(lVar21 + 0x118);
  fVar2 = *(float *)(lVar21 + 0x11c);
  if ((*(longlong *)(lVar21 + 0x1c8) != 0) ||
     (lVar16 = 0x280, *(longlong *)(DAT_180ca0a50 + 0x2360) != 0)) {
    lVar16 = 0x250;
  }
  fVar26 = *(float *)(lVar16 + lVar21);
  DAT_18110749c = 0x44000000;
  if (DAT_180cd0fa6 == '\0') {
    DAT_180cd0fa6 = '\x01';
    FUN_18035be50();
    FUN_18035dd90();
  }
  if (((int)DAT_1811078b0 < 0) ||
     ((int)(DAT_1811078d8 - DAT_1811078d0 >> 3) * -0xf0f0f0f <= (int)DAT_1811078b0)) {
    uStack_170 = 0;
    local_168 = _DAT_1808ad410;
    uStack_160 = _UNK_1808ad418;
    local_178 = (LPCWSTR ****)0x0;
  }
  else {
    FUN_180024b50(&local_178,(longlong)(int)DAT_1811078b0 * 0x88 + DAT_1811078d0 + 0x40);
  }
  uVar3 = DAT_1808acd08;
  uVar7 = DAT_1808ac930;
  FUN_18040a2f0(&local_198,*(undefined8 *)(DAT_180ca0a50 + 0x11f0),DAT_1808ac930,DAT_1808acd08);
  DAT_181107358 = (float)local_198 + DAT_1808ac7ac;
  FUN_18000f890(&local_178);
  cVar10 = FUN_1803104f0("nl_glyph_globe",&DAT_1807492c0,"language",0);
  if (cVar10 != '\0') {
    FUN_18035dd90();
  }
  if (DAT_180cd0fa6 == '\0') {
    DAT_180cd0fa6 = '\x01';
    FUN_18035be50();
    FUN_18035dd90();
  }
  uVar22 = (ulonglong)(int)DAT_1811078b0;
  local_1ec = DAT_1811078b0;
  if (((int)DAT_1811078b0 < 0) ||
     ((int)(DAT_1811078d8 - DAT_1811078d0 >> 3) * -0xf0f0f0f <= (int)DAT_1811078b0)) {
    uStack_130 = 0;
    local_128 = _DAT_1808ad410;
    uStack_120 = _UNK_1808ad418;
    local_138 = (char *****)0x0;
  }
  else {
    FUN_180024b50(&local_138,DAT_1811078d0 + 0x40 + uVar22 * 0x88);
  }
  fVar24 = (float)FUN_18053fc00(DAT_1808ac84c);
  local_1f0 = (float)FUN_18053f0d0(DAT_1808ac7ec);
  uVar8 = DAT_180960ec0;
  if (uStack_120 < 0x10) {
    pppppcVar20 = (char *****)&local_138;
  }
  else {
    pppppcVar20 = local_138;
  }
  FUN_18040a2f0(&local_198,*(undefined8 *)(DAT_180ca0a50 + 0x11f0),uVar7,uVar3);
  fVar6 = DAT_1808ac8b0;
  local_1f4 = (((((fVar26 - fVar1) + fVar1) - DAT_1808ac8b0) - fVar24) - DAT_1808ac658) -
              (float)local_198;
  local_1f0 = local_1f0 + fVar2;
  if ((((uVar8 & 0xff000000) != 0) && (pppppcVar20 != (char *****)0x0)) &&
     (*(char *)pppppcVar20 != '\0')) {
    local_198 = *(undefined ****)(param_1 + 0x60);
    uStack_190 = *(undefined4 *)(param_1 + 0x68);
    uStack_18c = *(undefined4 *)(param_1 + 0x6c);
    FUN_18040a900(*(undefined8 *)(*(longlong *)(param_1 + 0x38) + 0x18),param_1,uVar7,&local_1f4);
  }
  if (cVar10 != '\0') {
    FUN_1802b4d80("##language_list");
  }
  FUN_1802b3fe0(local_118,"create custom");
  FUN_18040a2f0(&local_198,*(undefined8 *)(DAT_180ca0a50 + 0x11f0),uVar7,uVar3);
  fVar2 = DAT_1808ac9fc;
  fVar1 = DAT_1808ac980;
  fVar26 = (float)local_198 + DAT_1808aca90;
  iVar19 = 0;
  fVar24 = fVar26;
  if (0 < (int)(DAT_1811078d8 - DAT_1811078d0 >> 3) * -0xf0f0f0f) {
    do {
      if (*(char *)((longlong)iVar19 * 0x88 + 0x80 + DAT_1811078d0) == '\0') {
        fVar26 = 0.0;
      }
      else {
        fVar26 = fVar2;
      }
      FUN_18035e9f0(&local_178,iVar19);
      FUN_18040a2f0(&local_198,*(undefined8 *)(DAT_180ca0a50 + 0x11f0),uVar7,uVar3);
      fVar26 = (float)local_198 + fVar1 + fVar26;
      if (fVar26 <= fVar24) {
        fVar26 = fVar24;
      }
      FUN_18000f890(&local_178);
      iVar19 = iVar19 + 1;
      fVar24 = fVar26;
    } while (iVar19 < (int)(DAT_1811078d8 - DAT_1811078d0 >> 3) * -0xf0f0f0f);
  }
  lVar21 = DAT_180ca0a50;
  *(uint *)(DAT_180ca0a50 + 0x1f38) = *(uint *)(DAT_180ca0a50 + 0x1f38) | 0x10;
  fVar26 = fVar26 + fVar6;
  if (fVar26 <= DAT_1808acb30) {
    fVar26 = DAT_1808acb30;
  }
  *(float *)(lVar21 + 0x1f84) = fVar26;
  *(undefined4 *)(lVar21 + 0x1f88) = 0;
  *(undefined4 *)(lVar21 + 0x1f8c) = 0x7f7fffff;
  *(undefined4 *)(lVar21 + 0x1f90) = 0x43b18000;
  *(undefined8 *)(lVar21 + 0x1f98) = 0;
  *(undefined8 *)(lVar21 + 0x1fa0) = 0;
  local_198 = *(undefined ****)(lVar21 + 0x1efc);
  local_1e8 = *(undefined ****)(lVar21 + 0x1ef4);
  FUN_1802b5160("##language_list",&local_1e8,&local_198);
  DAT_180cd04ac = 1;
  DAT_180cd04ad = 1;
  local_1f4 = 6.0;
  local_1f0 = 6.0;
  cVar10 = FUN_1802b5260("##language_list",&local_1f4);
  uVar7 = DAT_1808acb28;
  fVar26 = DAT_1808ac950;
  fVar2 = DAT_1808ac864;
  fVar1 = DAT_1808ac1f4;
  if (cVar10 == '\0') goto LAB_18031199c;
  local_1f4 = 0.0;
  lVar21 = DAT_1811078d0;
  do {
    iVar19 = 0;
    if (0 < (int)(DAT_1811078d8 - lVar21 >> 3) * -0xf0f0f0f) {
      bVar5 = true;
      bVar23 = local_1f4 == 1.4013e-45;
      do {
        cVar10 = *(char *)((longlong)iVar19 * 0x88 + 0x80 + lVar21);
        if ((bool)cVar10 == bVar23) {
          if (cVar10 == '\0') {
            FUN_1803e8a70(iVar19);
          }
          else {
            if (bVar5) {
              FUN_1802b7f90();
              bVar5 = false;
            }
            FUN_1803e8a70(iVar19);
            *(uint *)(DAT_180ca0a50 + 0x1eb4) = *(uint *)(DAT_180ca0a50 + 0x1eb4) | 0x4000;
          }
          puVar12 = (undefined8 *)FUN_18035e9f0(&local_178,iVar19);
          uVar9 = DAT_180cd048f;
          DAT_180cd048f = 1;
          if (0xf < (ulonglong)puVar12[3]) {
            puVar12 = (undefined8 *)*puVar12;
          }
          cVar11 = FUN_1802b74f0(puVar12,iVar19 == (int)uVar22,0,0);
          DAT_180cd048f = uVar9;
          FUN_18000f890(&local_178);
          lVar21 = DAT_180ca0a50;
          if (cVar10 == '\0') {
          }
          else {
            uVar3 = *(undefined4 *)(DAT_180ca0a50 + 0x1ef4);
            fVar24 = *(float *)(DAT_180ca0a50 + 0x1f00);
            fVar25 = (float)FUN_18053f0d0(((fVar24 + *(float *)(DAT_180ca0a50 + 0x1ef8)) - fVar26) *
                                          fVar1);
            fVar27 = (*(float *)(lVar21 + 0x1efc) - fVar6) - fVar26;
            local_1e8 = (undefined ***)CONCAT44(fVar25,fVar27);
            local_1e0 = 0x41a00000;
            local_1dc = 0x41a00000;
            FUN_180311a40("##options",&local_1e8,&local_1e0);
            lVar21 = DAT_180ca0a50;
            local_198 = (undefined ***)CONCAT44(fVar25 + fVar2,fVar27 + fVar2);
            *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
            FUN_1802b6e90(*(undefined8 *)(*(longlong *)(lVar21 + 0x14f8) + 0x2c8),
                          "nl_glyph_ellipsis_vertical",
                          "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 128 512\" width=\"128\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M64 360C43 360 25 371 15 388C5 406 5 427 15 444C25 461 43 472 64 472C84 472 102 461 112 444C122 427 122 406 112 388C102 371 84 360 64 360ZM64 200C43 200 25 211 15 228C5 246 5 267 15 284C25 302 43 312 64 312C84 312 102 302 112 284C122 267 122 246 112 228C102 211 84 200 64 200ZM120 96C120 76 109 58 92 48C74 38 53 38 36 48C18 58 8 76 8 96C8 117 18 135 36 145C53 155 74 155 92 145C109 135 120 117 120 96Z\"/></svg>"
                          ,uVar7);
            lVar21 = DAT_180ca0a50;
            *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
            lVar16 = *(longlong *)(lVar21 + 0x14f8);
            *(undefined4 *)(lVar16 + 0x118) = uVar3;
            *(float *)(lVar16 + 0x11c) = fVar24;
            *(undefined1 *)(lVar16 + 0x159) = 1;
          }
          iVar4 = *(int *)(*(longlong *)(lVar21 + 0x14f8) + 0x108);
          if (iVar4 < 2) {
            FUN_1803ebc00("Calling PopID() too many times!");
          }
          else {
            *(int *)(*(longlong *)(lVar21 + 0x14f8) + 0x108) = iVar4 + -1;
          }
          if (cVar11 != '\0') {
            FUN_180310b90(iVar19);
            FUN_1803ee1f0();
          }
          uVar22 = (ulonglong)local_1ec;
          lVar21 = DAT_1811078d0;
        }
        iVar19 = iVar19 + 1;
      } while (iVar19 < (int)(DAT_1811078d8 - lVar21 >> 3) * -0xf0f0f0f);
    }
    local_1f4 = (float)((int)local_1f4 + 1);
  } while ((int)local_1f4 < 2);
  DAT_18110749c = 0x44000000;
  cVar10 = FUN_1803104f0("nl_glyph_circle_plus",
                         "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 512 512\" width=\"512\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M256 512C347 512 431 463 477 384C523 305 523 208 477 128C431 49 347 0 256 0C164 0 80 49 34 128C-11 208 -11 305 34 384C80 463 164 512 256 512ZM232 344L232 280L168 280C154 280 144 270 144 256C144 243 154 232 168 232L232 232L232 168C232 155 242 144 256 144C269 144 280 155 280 168L280 232L344 232C357 232 368 243 368 256C368 270 357 280 344 280L280 280L280 344C280 358 269 368 256 368C242 368 232 358 232 344Z\"/></svg>"
                         ,"create custom",0);
  if (cVar10 != '\0') {
    FUN_180322e80(3);
    DAT_181107378 = 0;
    DAT_181107588 = 0;
    DAT_1811070d0 = 0;
    DAT_181107278 = 0;
    DAT_1809f7128 = 0;
    puVar13 = &DAT_1809f7118;
    if (0xf < DAT_1809f7130) {
      puVar13 = _DAT_1809f7118;
    }
    *puVar13 = 0;
    FUN_1803ee010(0,1);
  }
  DAT_180cd04ad = 1;
  local_198 = (undefined ***)0x40e0000040e00000;
  cVar10 = FUN_1802b5260("##language_options",&local_198);
  iVar19 = DAT_1809f5a48;
  if (cVar10 != '\0') {
    lVar21 = (longlong)DAT_1809f5a48;
    cVar10 = FUN_1802c63e0(&DAT_180767204,"nl_glyph_pen",
                           "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 512 512\" width=\"512\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M362 20L314 68L444 198L492 150C517 125 517 84 492 59L453 20C428 -5 387 -5 362 20L362 20ZM362 20ZM291 91L58 324C48 334 40 347 36 361L1 481C-1 489 0 498 7 505C13 511 22 513 30 511L151 475C165 471 178 463 188 453L421 221L291 91Z\"/></svg>"
                           ,DAT_1808acc00);
    if (cVar10 != '\0') {
      if (DAT_180cd0fa6 == '\0') {
        DAT_180cd0fa6 = '\x01';
        FUN_18035be50();
        FUN_18035dd90();
      }
      if (((0 < iVar19) && (iVar19 < (int)(DAT_1811078c0 - DAT_1811078b8 >> 3) * 0x684bda13)) &&
         (*(char *)(DAT_1811078b8 + lVar21 * 0xd8 + 0x80) != '\0')) {
        uVar14 = FUN_18035c770(&local_198);
        FUN_180024980(&local_178,uVar14);
        FUN_1800289e0(&local_198);
        lpFile = (LPCWSTR ****)&local_178;
        if (7 < uStack_160) {
          lpFile = local_178;
        }
        ShellExecuteW((HWND)0x0,(LPCWSTR)0x0,(LPCWSTR)lpFile,(LPCWSTR)0x0,(LPCWSTR)0x0,5);
        FUN_1800289e0(&local_178);
      }
      FUN_1803ee1f0();
    }
    FUN_1802b7f90();
    cVar10 = FUN_1802c63e0("delete","nl_glyph_trash",
                           "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 448 512\" width=\"448\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M135 18C140 7 151 0 163 0L284 0C296 0 307 7 312 18L320 32L416 32C433 32 448 47 448 64C448 82 433 96 416 96L32 96C14 96 0 82 0 64C0 47 14 32 32 32L128 32L135 18ZM32 128L416 128L416 448C416 483 387 512 352 512L96 512C60 512 32 483 32 448L32 128ZM128 192C119 192 112 200 112 208L112 432C112 441 119 448 128 448C136 448 144 441 144 432L144 208C144 200 136 192 128 192ZM224 192C215 192 208 200 208 208L208 432C208 441 215 448 224 448C232 448 240 441 240 432L240 208C240 200 232 192 224 192ZM320 192C311 192 304 200 304 208L304 432C304 441 311 448 320 448C328 448 336 441 336 432L336 208C336 200 328 192 320 192Z\"/></svg>"
                           ,DAT_1808acbe4);
    if (((cVar10 != '\0') && (-1 < iVar19)) &&
       (iVar19 < (int)(DAT_1811078d8 - DAT_1811078d0 >> 3) * -0xf0f0f0f)) {
      FUN_18035ee30(local_158,"menu_user_language_delete_prompt");
      pppppuVar18 = local_158;
      if (0xf < local_140) {
        pppppuVar18 = local_158[0];
      }
      if (((9 < local_148) &&
          (lVar16 = local_148 + (longlong)pppppuVar18,
          lVar15 = thunk_FUN_1804e92d0(pppppuVar18,lVar16,"{language}",10), lVar15 != lVar16)) &&
         (lVar15 - (longlong)pppppuVar18 != -1)) {
        lVar21 = lVar21 * 0x88;
        puVar12 = (undefined8 *)(DAT_1811078d0 + 0x20 + lVar21);
        if (0xf < *(ulonglong *)(lVar21 + 0x38 + DAT_1811078d0)) {
          puVar12 = (undefined8 *)*puVar12;
        }
        FUN_1800d8750(local_158,lVar15 - (longlong)pppppuVar18,10,puVar12);
      }
      local_198 = &local_1d8;
      local_1d8 = std::
                  _Func_impl_no_alloc<`void___cdecl_menu::_anon_9464B40D::draw_language_row(ImDrawList*___ptr64)'::`46'::<lambda_1>,void>
                  ::vftable;
      local_1d0 = iVar19;
      local_1a0 = &local_1d8;
      local_1e8 = &local_1d8;
      puVar12 = (undefined8 *)FUN_18035ee30(&local_178,"menu_user_language_delete_prompt_title");
      FUN_180322e80(2);
      if (puVar12 != (undefined8 *)&DAT_1809f7340) {
        if ((ulonglong)puVar12[3] < 0x10) {
          puVar17 = puVar12;
        }
        else {
          puVar17 = (undefined8 *)*puVar12;
        }
        FUN_180029840(&DAT_1809f7340,puVar17,puVar12[2]);
      }
      pppppuVar18 = local_158;
      if (0xf < local_140) {
        pppppuVar18 = local_158[0];
      }
      FUN_180029840(&DAT_1809f7360,pppppuVar18,local_148);
      if (DAT_1809f73b8 != (undefined ***)0x0) {
        (*(code *)(*DAT_1809f73b8)[4])(DAT_1809f73b8,DAT_1809f73b8 != (undefined ***)&DAT_1809f7380)
        ;
        DAT_1809f73b8 = (undefined ***)0x0;
      }
      if (local_1a0 != (undefined ***)0x0) {
        if (local_1a0 == &local_1d8) {
          DAT_1809f73b8 = (undefined ***)(*(code *)(*local_1a0)[1])(local_1a0,&DAT_1809f7380);
          if (local_1a0 == (undefined ***)0x0) goto LAB_180311976;
          (*(code *)(*local_1a0)[4])
                    (local_1a0,CONCAT71((int7)((ulonglong)&local_1d8 >> 8),local_1a0 != &local_1d8))
          ;
        }
        else {
          DAT_1809f73b8 = local_1a0;
        }
        local_1a0 = (undefined ***)0x0;
      }
LAB_180311976:
      FUN_18000f890(&local_178);
      FUN_1803ee010(0,1);
      FUN_18000f890(local_158);
    }
    FUN_1802b5590();
  }
  FUN_1802b5590();
LAB_18031199c:
  iVar19 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
  if (iVar19 < 2) {
    FUN_1803ebc00("Calling PopID() too many times!");
  }
  else {
    *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar19 + -1;
  }
  FUN_18000f890(local_118);
  FUN_18000f890(&local_138);
  return;
}



