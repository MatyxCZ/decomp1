/* ===== 180052a90 FUN_180052a90 ===== */

void FUN_180052a90(longlong param_1,longlong *param_2,float param_3,float param_4,uint param_5,
                  char *param_6,char *param_7)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float local_res10;
  float local_res14;
  undefined8 local_88;
  undefined8 uStack_80;
  
  uVar3 = param_5 & 0xff000000;
  if ((char)param_2[2] == '\0') {
    if (*(char *)((longlong)param_2 + 0xf) != '\0') {
      local_res10 = param_3 + DAT_1808ac34c;
      local_res14 = param_4 + DAT_1808ac34c;
      if (((uVar3 != 0) && (param_6 != param_7)) && (*param_6 != '\0')) {
        fVar5 = *(float *)(param_2 + 1);
        if (*param_2 == 0) {
          plVar1 = (longlong *)(*(longlong *)(param_1 + 0x38) + 0x18);
        }
        else {
          plVar1 = param_2;
        }
        if (fVar5 == 0.0) {
          fVar5 = *(float *)(*(longlong *)(param_1 + 0x38) + 0x20);
        }
        local_88 = *(undefined8 *)(param_1 + 0x60);
        uStack_80 = *(undefined8 *)(param_1 + 0x68);
        FUN_18040a900(*plVar1,param_1,fVar5,&local_res10,uVar3,&local_88,param_6,param_7,0,0);
        goto LAB_180052cef;
      }
    }
  }
  else {
    iVar2 = -1;
    fVar5 = param_4 + DAT_1808ac34c;
    fVar6 = param_4 + DAT_1808acda0;
    do {
      local_res10 = (float)iVar2 + param_3;
      if (((uVar3 != 0) && (param_6 != param_7)) && (*param_6 != '\0')) {
        fVar4 = *(float *)(param_2 + 1);
        if (*param_2 == 0) {
          plVar1 = (longlong *)(*(longlong *)(param_1 + 0x38) + 0x18);
        }
        else {
          plVar1 = param_2;
        }
        if (fVar4 == 0.0) {
          fVar4 = *(float *)(*(longlong *)(param_1 + 0x38) + 0x20);
        }
        local_88 = *(undefined8 *)(param_1 + 0x60);
        uStack_80 = *(undefined8 *)(param_1 + 0x68);
        local_res14 = fVar6;
        FUN_18040a900(*plVar1,param_1,fVar4,&local_res10,uVar3,&local_88,param_6,param_7,0,0);
      }
      if (((iVar2 == 0) || (local_res14 = param_4 + 0.0, uVar3 == 0)) ||
         ((param_6 == param_7 || (*param_6 == '\0')))) {
        if ((uVar3 != 0) && (param_6 != param_7)) goto LAB_180052c4c;
      }
      else {
        fVar4 = *(float *)(param_2 + 1);
        if (*param_2 == 0) {
          plVar1 = (longlong *)(*(longlong *)(param_1 + 0x38) + 0x18);
        }
        else {
          plVar1 = param_2;
        }
        if (fVar4 == 0.0) {
          fVar4 = *(float *)(*(longlong *)(param_1 + 0x38) + 0x20);
        }
        local_88 = *(undefined8 *)(param_1 + 0x60);
        uStack_80 = *(undefined8 *)(param_1 + 0x68);
        FUN_18040a900(*plVar1,param_1,fVar4,&local_res10,uVar3,&local_88,param_6,param_7,0,0);
LAB_180052c4c:
        if (*param_6 != '\0') {
          fVar4 = *(float *)(param_2 + 1);
          if (*param_2 == 0) {
            plVar1 = (longlong *)(*(longlong *)(param_1 + 0x38) + 0x18);
          }
          else {
            plVar1 = param_2;
          }
          if (fVar4 == 0.0) {
            fVar4 = *(float *)(*(longlong *)(param_1 + 0x38) + 0x20);
          }
          local_88 = *(undefined8 *)(param_1 + 0x60);
          uStack_80 = *(undefined8 *)(param_1 + 0x68);
          local_res14 = fVar5;
          FUN_18040a900(*plVar1,param_1,fVar4,&local_res10,uVar3,&local_88,param_6,param_7,0,0);
        }
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 2);
  }
  if (uVar3 == 0) {
    return;
  }
  if (param_6 == param_7) {
    return;
  }
LAB_180052cef:
  if (*param_6 != '\0') {
    fVar5 = *(float *)(param_2 + 1);
    if (*param_2 == 0) {
      param_2 = (longlong *)(*(longlong *)(param_1 + 0x38) + 0x18);
    }
    if (fVar5 == 0.0) {
      fVar5 = *(float *)(*(longlong *)(param_1 + 0x38) + 0x20);
    }
    local_88 = *(undefined8 *)(param_1 + 0x60);
    uStack_80 = *(undefined8 *)(param_1 + 0x68);
    local_res10 = param_3;
    local_res14 = param_4;
    FUN_18040a900(*param_2,param_1,fVar5,&local_res10,param_5,&local_88,param_6,param_7,0,0);
  }
  return;
}



/* ===== 180052e40 FUN_180052e40 ===== */

undefined8 FUN_180052e40(undefined8 param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  double dVar3;
  float fVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined4 uVar8;
  int iVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined8 *puVar13;
  longlong lVar14;
  undefined8 *puVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  ulonglong uVar19;
  longlong lVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float local_res10;
  float local_res14;
  undefined8 uStack_1a0;
  undefined1 auStack_198 [8];
  undefined1 auStack_190 [24];
  undefined4 local_178;
  longlong local_170;
  longlong local_168;
  longlong local_160;
  undefined8 local_158;
  undefined4 local_148;
  longlong local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  longlong local_128;
  longlong local_120;
  longlong lStack_118;
  longlong local_110;
  undefined8 *local_108;
  undefined8 *puStack_100;
  longlong local_f8;
  longlong local_f0;
  longlong *local_e8;
  longlong local_e0;
  ulonglong local_d8;
  undefined1 local_d0 [144];
  
  lVar6 = DAT_180ccfa78;
  if (DAT_180ccfa78 == 0) {
    FUN_180484c10(param_1,"render.* draws only inside a paint callback");
  }
  dVar3 = (double)FUN_18047e140(param_1,1);
  fVar24 = (float)dVar3;
  dVar3 = (double)FUN_18047e140(param_1,2);
  fVar26 = (float)dVar3;
  uVar8 = FUN_180063eb0(param_1,3);
  local_f0 = 0;
  lVar10 = FUN_18047e090(param_1,4,&local_f0);
  plVar11 = (longlong *)FUN_180052650(local_d0,param_1,5,6);
  local_138 = *plVar11;
  uStack_130 = (undefined4)plVar11[1];
  uStack_12c = *(undefined4 *)((longlong)plVar11 + 0xc);
  local_128 = plVar11[2];
  iVar9 = FUN_18047fe10(param_1,7);
  if ((((iVar9 == 7) &&
       (plVar11 = (longlong *)FUN_18047e680(param_1,7,"wl.font"), plVar11 != (longlong *)0x0)) &&
      (lVar14 = *plVar11, lVar14 != 0)) && (lVar20 = *(longlong *)(lVar14 + 0x28), lVar20 != 0)) {
    uVar21 = *(undefined4 *)(lVar14 + 0x20);
    local_138 = lVar20;
    iVar9 = FUN_18047fe10(param_1,6);
    if (iVar9 < 1) {
      uStack_130 = uVar21;
    }
  }
  else {
    lVar20 = local_138;
  }
  lVar14 = local_f0;
  uVar21 = uStack_130;
  if (lVar20 == 0) {
    return 0;
  }
  lVar12 = FUN_180540ca0(lVar10,0xc,local_f0);
  if ((lVar12 == 0) && (lVar12 = FUN_180540ca0(lVar10,8,lVar14), lVar12 == 0)) {
    local_168 = lVar10 + lVar14;
    local_148 = 0;
    local_158 = 0;
    local_178 = 0;
    local_170 = lVar10;
    local_160 = local_168;
    FUN_18040a2f0(&local_res10,lVar20,uVar21,DAT_1808acd08);
    if ((char)uStack_12c != '\0') {
      fVar24 = fVar24 - local_res10 * DAT_1808ac1f4;
    }
    if (uStack_12c._2_1_ != '\0') {
      fVar24 = fVar24 - local_res10;
    }
    if (uStack_12c._1_1_ != '\0') {
      fVar26 = fVar26 - local_res14 * DAT_1808ac1f4;
    }
    lVar14 = local_f0 + lVar10;
    uVar21 = FUN_18053f0d0(fVar26);
    uVar22 = FUN_18053f0d0(fVar24);
    local_178 = uVar8;
    local_170 = lVar10;
    local_168 = lVar14;
    FUN_180052a90(lVar6,&local_138,uVar22,uVar21);
    return 0;
  }
  FUN_180052940(&local_108,lVar10,lVar14,uVar8);
  puVar18 = auStack_198;
  local_120 = 0;
  lStack_118 = 0;
  local_110 = 0;
  lVar10 = (longlong)puStack_100 - (longlong)local_108 >> 3;
  uVar19 = lVar10 * -0x5555555555555555;
  if (uVar19 == 0) goto LAB_180053192;
  if (0x3fffffffffffffff < uVar19) {
                    /* WARNING: Subroutine does not return */
    FUN_1800118d0();
  }
  lVar10 = lVar10 * -0x5555555555555554;
  lVar14 = FUN_18000fb70(lVar10);
  local_e8 = &local_120;
  local_e0 = lVar14;
  local_d8 = uVar19;
  FUN_180540530(lVar14,local_120,lStack_118 - local_120);
  puVar16 = auStack_198;
  puVar17 = auStack_198;
  local_e0 = 0;
  puVar18 = auStack_198;
  if (local_120 != 0) {
    lVar12 = local_120;
    if ((ulonglong)((local_110 - local_120 >> 2) * 4) < 0x1000) {
LAB_18005316e:
      puVar17 = puVar16;
    }
    else {
      lVar12 = *(longlong *)(local_120 + -8);
      if (0x1f < (local_120 - lVar12) - 8U) {
        lVar12 = 5;
        pcVar2 = (code *)swi(0x29);
        (*pcVar2)(5);
        puVar16 = auStack_190;
        goto LAB_18005316e;
      }
    }
    *(undefined8 *)(puVar17 + -8) = 0x180053179;
    thunk_FUN_1803d64e0(lVar12);
    puVar18 = puVar17;
  }
  *(longlong *)(puVar18 + 0x78) = lVar14;
  lStack_118 = lVar14;
  local_110 = lVar10 + lVar14;
LAB_180053192:
  puVar7 = puStack_100;
  uVar8 = DAT_1808acd08;
  fVar25 = 0.0;
  fVar4 = 0.0;
  puVar13 = local_108;
  puVar15 = local_108;
  puVar5 = puStack_100;
  while( true ) {
    local_108 = puVar15;
    puStack_100 = puVar5;
    if (puVar13 == puVar7) break;
    uVar1 = puVar13[1];
    *(undefined4 *)(puVar18 + 0x50) = 0;
    *(undefined8 *)(puVar18 + 0x40) = 0;
    *(undefined8 *)(puVar18 + 0x38) = uVar1;
    *(undefined8 *)(puVar18 + 0x30) = uVar1;
    *(undefined8 *)(puVar18 + 0x28) = *puVar13;
    *(undefined4 *)(puVar18 + 0x20) = 0;
    *(undefined8 *)(puVar18 + -8) = 0x1800531ee;
    FUN_18040a2f0(&local_res10,lVar20,uVar21,uVar8);
    *(undefined8 *)(puVar18 + -8) = 0x1800531ff;
    FUN_180066e60(puVar18 + 0x78,&local_res10);
    fVar25 = fVar25 + local_res10;
    fVar23 = local_res14;
    if (local_res14 <= fVar4) {
      fVar23 = fVar4;
    }
    puVar13 = puVar13 + 3;
    fVar4 = fVar23;
    puVar15 = local_108;
    puVar5 = puStack_100;
  }
  if (puVar18[0x6c] != '\0') {
    fVar24 = fVar24 - fVar25 * DAT_1808ac1f4;
  }
  if (puVar18[0x6e] != '\0') {
    fVar24 = fVar24 - fVar25;
  }
  if (puVar18[0x6d] != '\0') {
    fVar26 = fVar26 - fVar4 * DAT_1808ac1f4;
  }
  *(undefined8 *)(puVar18 + -8) = 0x180053267;
  fVar24 = (float)FUN_18053f0d0(fVar24);
  *(undefined8 *)(puVar18 + -8) = 0x180053273;
  uVar8 = FUN_18053f0d0(fVar26);
  uVar19 = 0;
  if (((longlong)puVar5 - (longlong)puVar15 >> 3) * -0x5555555555555555 != 0) {
    do {
      *(undefined8 *)(puVar18 + 0x30) = puVar15[uVar19 * 3 + 1];
      *(undefined8 *)(puVar18 + 0x28) = puVar15[uVar19 * 3];
      *(undefined4 *)(puVar18 + 0x20) = *(undefined4 *)(puVar15 + uVar19 * 3 + 2);
      *(undefined8 *)(puVar18 + -8) = 0x1800532c2;
      FUN_180052a90(lVar6,puVar18 + 0x60,fVar24,uVar8);
      fVar24 = fVar24 + *(float *)(*(longlong *)(puVar18 + 0x78) + uVar19 * 4);
      uVar19 = uVar19 + 1;
      puVar15 = local_108;
    } while (uVar19 < (ulonglong)
                      (((longlong)puStack_100 - (longlong)local_108 >> 3) * -0x5555555555555555));
  }
  *(undefined8 *)(puVar18 + -8) = 0x1800532f1;
  FUN_180068f30(puVar18 + 0x78);
  if (local_108 == (undefined8 *)0x0) {
    return 0;
  }
  puVar13 = local_108;
  if ((0xfff < (ulonglong)((local_f8 - (longlong)local_108 >> 3) * 8)) &&
     (puVar13 = (undefined8 *)local_108[-1],
     (undefined1 *)0x1f < (undefined1 *)((longlong)local_108 + (-8 - (longlong)puVar13)))) {
    puVar13 = (undefined8 *)&DAT_00000005;
    pcVar2 = (code *)swi(0x29);
    (*pcVar2)(5);
    puVar18 = puVar18 + 8;
  }
  *(undefined8 *)(puVar18 + -8) = 0x180053348;
  thunk_FUN_1803d64e0(puVar13);
  return 0;
}



/* ===== 1800533a0 FUN_1800533a0 ===== */

undefined8 FUN_1800533a0(undefined8 param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  code *pcVar3;
  float fVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  longlong lVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  float local_res10;
  float local_res14;
  undefined1 auStack_128 [8];
  undefined1 auStack_120 [24];
  undefined4 local_108;
  longlong local_100;
  longlong local_f8;
  longlong local_f0;
  undefined8 local_e8;
  undefined4 local_d8;
  longlong local_c8;
  longlong *local_c0;
  longlong *plStack_b8;
  longlong local_b0;
  undefined1 local_a8 [120];
  
  local_c8 = 0;
  lVar6 = FUN_18047e090(param_1,1,&local_c8);
  plVar7 = (longlong *)FUN_180052650(local_a8,param_1,2,3);
  lVar12 = *plVar7;
  uVar14 = (undefined4)plVar7[1];
  iVar5 = FUN_18047fe10(param_1,4);
  if ((((iVar5 == 7) &&
       (plVar7 = (longlong *)FUN_18047e680(param_1,4,"wl.font"), plVar7 != (longlong *)0x0)) &&
      (lVar2 = *plVar7, lVar2 != 0)) && (lVar8 = *(longlong *)(lVar2 + 0x28), lVar8 != 0)) {
    uVar1 = *(undefined4 *)(lVar2 + 0x20);
    iVar5 = FUN_18047fe10(param_1,3);
    lVar12 = lVar8;
    if (iVar5 < 1) {
      uVar14 = uVar1;
    }
  }
  else if (lVar12 == 0) {
    return 0;
  }
  lVar2 = local_c8;
  lVar8 = FUN_180540ca0(lVar6,0xc,local_c8);
  if ((lVar8 == 0) && (lVar8 = FUN_180540ca0(lVar6,8,lVar2), lVar8 == 0)) {
    local_f8 = lVar6 + lVar2;
    local_d8 = 0;
    local_e8 = 0;
    local_108 = 0;
    local_100 = lVar6;
    local_f0 = local_f8;
    FUN_18040a2f0(&local_res10,lVar12,uVar14,DAT_1808acd08);
    FUN_18047f4f0(param_1,(double)local_res10);
    puVar11 = auStack_128;
    fVar4 = local_res14;
    goto LAB_180053627;
  }
  fVar15 = 0.0;
  FUN_180052940(&local_c0,lVar6,lVar2,0xffffffff);
  uVar1 = DAT_1808acd08;
  puVar9 = auStack_128;
  puVar10 = auStack_128;
  fVar4 = 0.0;
  for (plVar7 = local_c0; plVar7 != plStack_b8; plVar7 = plVar7 + 3) {
    local_f8 = plVar7[1];
    local_d8 = 0;
    local_e8 = 0;
    local_100 = *plVar7;
    local_108 = 0;
    local_f0 = local_f8;
    FUN_18040a2f0(&local_res10,lVar12,uVar14,uVar1);
    fVar15 = fVar15 + local_res10;
    fVar13 = local_res14;
    if (local_res14 <= fVar4) {
      fVar13 = fVar4;
    }
    fVar4 = fVar13;
  }
  puVar11 = auStack_128;
  if (local_c0 != (longlong *)0x0) {
    plVar7 = local_c0;
    if ((ulonglong)((local_b0 - (longlong)local_c0 >> 3) * 8) < 0x1000) {
LAB_1800535fb:
      puVar10 = puVar9;
    }
    else {
      plVar7 = (longlong *)local_c0[-1];
      if ((undefined1 *)0x1f < (undefined1 *)((longlong)local_c0 + (-8 - (longlong)plVar7))) {
        plVar7 = (longlong *)&DAT_00000005;
        pcVar3 = (code *)swi(0x29);
        (*pcVar3)(5);
        puVar9 = auStack_120;
        goto LAB_1800535fb;
      }
    }
    *(undefined8 *)(puVar10 + -8) = 0x180053606;
    thunk_FUN_1803d64e0(plVar7);
    *(undefined8 *)(puVar10 + 0x68) = 0;
    *(undefined8 *)(puVar10 + 0x70) = 0;
    *(undefined8 *)(puVar10 + 0x78) = 0;
    puVar11 = puVar10;
  }
  *(undefined8 *)(puVar11 + -8) = 0x180053623;
  FUN_18047f4f0(param_1,(double)fVar15);
LAB_180053627:
  *(undefined8 *)(puVar11 + -8) = 0x18005362f;
  FUN_18047f4f0(param_1,(double)fVar4);
  return 2;
}



/* ===== 180053670 FUN_180053670 ===== */

undefined8 FUN_180053670(undefined8 param_1)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 local_res10;
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_18 [16];
  
  puVar2 = (undefined8 *)FUN_180063d70(local_18,param_1,1);
  local_28 = *puVar2;
  local_20 = *(undefined4 *)(puVar2 + 1);
  local_res10 = 0;
  cVar1 = FUN_1803a1bf0(&DAT_181107930 + (longlong)DAT_181107a00 * 0x40,&local_28,&local_res10,
                        DAT_1811079b0,DAT_1811079b4);
  if (cVar1 == '\0') {
    return 0;
  }
  FUN_18047f4f0(param_1,(double)(float)local_res10);
  FUN_18047f4f0(param_1,(double)local_res10._4_4_);
  return 2;
}



/* ===== 180053720 FUN_180053720 ===== */

undefined8 FUN_180053720(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = DAT_180ca0a50;
  FUN_18047f4f0(param_1,(double)*(float *)(DAT_180ca0a50 + 0x30));
  FUN_18047f4f0(param_1,(double)*(float *)(lVar1 + 0x34));
  return 2;
}



/* ===== 180053770 FUN_180053770 ===== */

undefined8 FUN_180053770(undefined8 param_1)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  float local_res10;
  float local_res14;
  float local_res18;
  float local_res1c;
  
  lVar1 = DAT_180ccfa78;
  if (DAT_180ccfa78 == 0) {
    FUN_180484c10(param_1,"render.* draws only inside a paint callback");
  }
  dVar4 = (double)FUN_18047e140(param_1,1);
  dVar5 = (double)FUN_18047e140(param_1,2);
  dVar6 = (double)FUN_18047e140(param_1,3);
  dVar7 = (double)FUN_18047e140(param_1,4);
  iVar2 = FUN_18047fe10(param_1,5);
  if (0 < iVar2) {
    iVar2 = FUN_18047fbf0(param_1,5);
    if (iVar2 == 0) {
      uVar3 = 0;
      goto LAB_180053829;
    }
  }
  uVar3 = 1;
LAB_180053829:
  local_res10 = (float)dVar6 + (float)dVar4;
  local_res14 = (float)dVar7 + (float)dVar5;
  local_res18 = (float)dVar4;
  local_res1c = (float)dVar5;
  FUN_1803fc200(lVar1,&local_res18,&local_res10,uVar3);
  return 0;
}



/* ===== 180053890 FUN_180053890 ===== */

undefined8 FUN_180053890(undefined8 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined4 *puVar6;
  
  lVar5 = DAT_180ccfa78;
  if (DAT_180ccfa78 == 0) {
    FUN_180484c10(param_1,"render.* draws only inside a paint callback");
  }
  iVar1 = *(int *)(lVar5 + 0xa0);
  if (1 < iVar1) {
    *(int *)(lVar5 + 0xa0) = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      puVar6 = (undefined4 *)(*(longlong *)(lVar5 + 0x38) + 0x34);
    }
    else {
      puVar6 = (undefined4 *)((longlong)(iVar1 + -2) * 0x10 + *(longlong *)(lVar5 + 0xa8));
    }
    uVar2 = puVar6[1];
    uVar3 = puVar6[2];
    uVar4 = puVar6[3];
    *(undefined4 *)(lVar5 + 0x60) = *puVar6;
    *(undefined4 *)(lVar5 + 100) = uVar2;
    *(undefined4 *)(lVar5 + 0x68) = uVar3;
    *(undefined4 *)(lVar5 + 0x6c) = uVar4;
    FUN_1803fbff0(lVar5);
  }
  return 0;
}



/* ===== 180053900 FUN_180053900 ===== */

int * FUN_180053900(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  
  piVar2 = (int *)FUN_18047e2c0(param_1,param_2,"wl.ui");
  iVar1 = *piVar2;
  FUN_18047eb70(param_1,0xffffd8f0,"wl_state");
  lVar3 = FUN_18047fd90(param_1,0xffffffff);
  FUN_18047fb50(param_1,0xfffffffe);
  lVar3 = *(longlong *)(lVar3 + 0xa0);
  if (lVar3 != 0) {
    for (piVar2 = *(int **)(lVar3 + 0x68); piVar2 != *(int **)(lVar3 + 0x70); piVar2 = piVar2 + 0x96
        ) {
      if (*piVar2 == iVar1) goto LAB_180053982;
    }
    piVar2 = (int *)0x0;
LAB_180053982:
    if (piVar2 != (int *)0x0) {
      return piVar2;
    }
  }
  FUN_180484c10(param_1,"this menu element is gone");
  return (int *)0x0;
}



/* ===== 1800539c0 FUN_1800539c0 ===== */

undefined8
FUN_1800539c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  puVar1 = (undefined1 *)FUN_18047fc70(param_2,0xffffd8ec,0,param_4,0);
  puVar2 = &DAT_18058b643;
  if (puVar1 != (undefined1 *)0x0) {
    puVar2 = puVar1;
  }
  FUN_180013350(param_1,puVar2);
  return param_1;
}



/* ===== 180053a20 FUN_180053a20 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180053a20(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  undefined1 *puVar2;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined8 local_40;
  undefined1 local_38 [16];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_68;
  local_48 = 0;
  local_40 = param_1;
  pcVar1 = (char *)FUN_18047fc70(param_2,0xffffd8ed,0);
  if ((pcVar1 == (char *)0x0) || (*pcVar1 == '\0')) {
    FUN_1800539c0(local_38,param_2);
    if (local_28 == 0) {
      FUN_18047eb70(param_2,0xffffd8f0,"wl_state");
      puVar2 = (undefined1 *)FUN_18047fd90(param_2,0xffffffff);
      FUN_18047fb50(param_2,0xfffffffe);
    }
    else {
      puVar2 = local_38;
    }
    FUN_180024b50(param_1,puVar2);
    local_48 = 1;
    FUN_18000f890(local_38);
  }
  else {
    FUN_180013350(param_1,pcVar1);
  }
  return param_1;
}



/* ===== 180053b10 FUN_180053b10 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_180053b10(undefined8 param_1,undefined4 param_2,char *param_3)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 *puVar5;
  size_t sVar6;
  undefined8 ****ppppuVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 ****ppppuVar10;
  ulonglong uVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined8 uStack_320;
  undefined1 auStack_318 [8];
  undefined1 auStack_310 [24];
  undefined4 local_2f8;
  undefined8 local_2e8;
  longlong local_2e0;
  longlong lStack_2d8;
  longlong local_2d0;
  ulonglong local_2c8;
  undefined8 ****local_2c0;
  undefined8 uStack_2b8;
  longlong local_2b0;
  ulonglong local_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 local_288;
  undefined1 local_280;
  undefined8 local_27c;
  undefined4 local_274;
  undefined4 local_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  longlong local_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined1 local_218;
  undefined1 local_217 [256];
  undefined1 local_117;
  undefined8 local_114;
  undefined1 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined1 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined1 local_88;
  undefined7 uStack_87;
  undefined8 local_80;
  longlong local_78;
  ulonglong local_70;
  undefined1 local_68 [32];
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_318;
  local_2f8 = 0;
  FUN_18047eb70(param_1,0xffffd8f0,"wl_state");
  lVar3 = FUN_18047fd90(param_1,0xffffffff);
  FUN_18047fb50(param_1,0xfffffffe);
  lVar3 = *(longlong *)(lVar3 + 0xa0);
  local_2e8 = 0;
  lStack_2d8 = 0;
  local_2d0 = 0;
  local_2c8 = 0xf;
  local_2e0 = 0;
  uStack_2b8 = 0;
  local_2b0 = 0;
  local_2a8 = 0xf;
  local_2c0 = (undefined8 ****)0x0;
  uStack_298 = 0;
  local_290 = 0;
  local_288 = 0xf;
  local_2a0 = 0;
  local_280 = 0;
  local_27c = 0;
  local_274 = 0;
  local_270 = 0x3f800000;
  uStack_260 = 0;
  local_258 = 0;
  local_250 = 0xf;
  local_268 = 0;
  local_248 = 0;
  uStack_240 = 0;
  local_238 = 0;
  local_230 = 0;
  local_228 = _DAT_1808adc30;
  uStack_220 = _UNK_1808adc38;
  local_218 = 1;
  FUN_180540170(local_217,0,0x100);
  local_117 = 1;
  local_114 = 0xffffffffffffffff;
  local_10c = 0;
  local_108 = 0;
  local_104 = 0xfffffffe;
  uStack_f8 = 0;
  local_f0 = 0;
  local_e8 = 0xf;
  local_100 = 0;
  local_e0 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  local_c0 = 0xf;
  local_d8 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 0xfffffffe;
  local_a8 = 0;
  local_a0 = 0xbf800000;
  local_9c = 0xbf800000;
  local_98 = 0;
  iVar1 = *(int *)(lVar3 + 0x108);
  *(int *)(lVar3 + 0x108) = iVar1 + 1;
  local_2e8 = CONCAT44(param_2,iVar1);
  plVar4 = (longlong *)FUN_180053a20(local_68,param_1);
  if (&local_2e0 == plVar4) {
LAB_180053dca:
    FUN_18000f890(local_68);
    puVar5 = (undefined1 *)FUN_18047fc70(param_1,0xffffd8ec,0);
    puVar13 = &DAT_18058b643;
    if (puVar5 != (undefined1 *)0x0) {
      puVar13 = puVar5;
    }
    FUN_180013350(&local_88,puVar13);
    puVar12 = auStack_318;
    plVar4 = (longlong *)&DAT_00000004;
    local_2f8 = 4;
    if (0xf < local_2a8) {
      uVar11 = local_2a8 + 1;
      ppppuVar10 = local_2c0;
      if (0xfff < uVar11) {
        ppppuVar10 = (undefined8 ****)local_2c0[-1];
        if (0x1f < (ulonglong)((longlong)local_2c0 + (-8 - (longlong)ppppuVar10)))
        goto LAB_180053f56;
        uVar11 = local_2a8 + 0x28;
      }
      thunk_FUN_1803d64e0(ppppuVar10,uVar11);
    }
    local_2c0 = (undefined8 ****)CONCAT71(uStack_87,local_88);
    uStack_2b8 = local_80;
    local_2b0 = local_78;
    local_2a8 = local_70;
    local_78 = 0;
    local_70 = 0xf;
    local_88 = 0;
    local_2f8 = 0;
    FUN_18000f890(&local_88);
    sVar6 = strlen(param_3);
    FUN_180029840(&local_2a0,param_3,sVar6);
    ppppuVar10 = &local_2c0;
    if (0xf < local_2a8) {
      ppppuVar10 = local_2c0;
    }
    if (local_2b0 == 0) {
LAB_180053f0e:
      FUN_180097c40(lVar3,&local_2c0);
    }
    else {
      ppppuVar7 = (undefined8 ****)
                  thunk_FUN_1804e6890(ppppuVar10,(undefined8 ****)((longlong)ppppuVar10 + 1),
                                      &DAT_1806dfae0,1);
      if ((ppppuVar7 == (undefined8 ****)((longlong)ppppuVar10 + 1)) || (ppppuVar7 != ppppuVar10))
      goto LAB_180053f0e;
    }
    plVar4 = *(longlong **)(lVar3 + 0x28);
    plVar8 = (longlong *)FUN_180026970(*(undefined8 *)(lVar3 + 0x20),plVar4,&local_2e0);
    puVar13 = auStack_318;
    if (plVar8 != plVar4) goto LAB_180053f6e;
    puVar13 = auStack_318;
    if (plVar4 != *(longlong **)(lVar3 + 0x30)) {
      FUN_180024b50(plVar4,&local_2e0);
      puVar13 = auStack_318;
      *(longlong *)(lVar3 + 0x28) = *(longlong *)(lVar3 + 0x28) + 0x20;
      goto LAB_180053f6e;
    }
  }
  else {
    if (local_2c8 < 0x10) {
LAB_180053d85:
      local_2e0 = *plVar4;
      lStack_2d8 = plVar4[1];
      local_2d0 = plVar4[2];
      local_2c8 = plVar4[3];
      plVar4[2] = 0;
      plVar4[3] = 0xf;
      *(undefined1 *)plVar4 = 0;
      goto LAB_180053dca;
    }
    uVar11 = local_2c8 + 1;
    lVar9 = local_2e0;
    if (uVar11 < 0x1000) {
LAB_180053d80:
      thunk_FUN_1803d64e0(lVar9,uVar11);
      goto LAB_180053d85;
    }
    lVar9 = *(longlong *)(local_2e0 + -8);
    if ((local_2e0 - lVar9) - 8U < 0x20) {
      uVar11 = local_2c8 + 0x28;
      goto LAB_180053d80;
    }
    pcVar2 = (code *)swi(0x29);
    (*pcVar2)(5);
    puVar12 = auStack_310;
LAB_180053f56:
    pcVar2 = (code *)swi(0x29);
    (*pcVar2)(5);
    puVar13 = puVar12 + 8;
  }
  *(undefined8 *)(puVar13 + -8) = 0x180053f6e;
  FUN_180028f00(lVar3 + 0x20,plVar4,puVar13 + 0x38);
LAB_180053f6e:
  lVar9 = *(longlong *)(lVar3 + 0x70);
  if (lVar9 == *(longlong *)(lVar3 + 0x78)) {
    *(undefined8 *)(puVar13 + -8) = 0x180053fa0;
    FUN_18006b340(lVar3 + 0x68,lVar9,puVar13 + 0x30);
  }
  else {
    *(undefined8 *)(puVar13 + -8) = 0x180053f85;
    FUN_18006cf60(lVar9,puVar13 + 0x30);
    *(longlong *)(lVar3 + 0x70) = *(longlong *)(lVar3 + 0x70) + 600;
  }
  lVar3 = *(longlong *)(lVar3 + 0x70);
  *(undefined8 *)(puVar13 + -8) = 0x180053fb0;
  FUN_18000f890(&local_d8);
  *(undefined8 *)(puVar13 + -8) = 0x180053fbd;
  FUN_18000f890(&local_100);
  if (local_230 != 0) {
    *(undefined8 *)(puVar13 + -8) = 0x180053fcc;
    thunk_FUN_1803d64e0();
  }
  *(undefined8 *)(puVar13 + -8) = 0x180053fd6;
  FUN_1800288b0(&local_248);
  *(undefined8 *)(puVar13 + -8) = 0x180053fe0;
  FUN_18000f890(&local_268);
  *(undefined8 *)(puVar13 + -8) = 0x180053feb;
  FUN_18000f890(puVar13 + 0x78);
  *(undefined8 *)(puVar13 + -8) = 0x180053ff6;
  FUN_18000f890(puVar13 + 0x58);
  *(undefined8 *)(puVar13 + -8) = 0x180054001;
  FUN_18000f890(puVar13 + 0x38);
  *(undefined8 *)(puVar13 + -8) = 0x180054018;
  return lVar3 + -600;
}



/* ===== 180054030 FUN_180054030 ===== */

void FUN_180054030(longlong param_1)

{
  FUN_18000f890(param_1 + 0x210);
  FUN_18000f890(param_1 + 0x1e8);
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    thunk_FUN_1803d64e0();
  }
  FUN_1800288b0(param_1 + 0xa0);
  FUN_18000f890(param_1 + 0x80);
  FUN_18000f890(param_1 + 0x48);
  FUN_18000f890(param_1 + 0x28);
  FUN_18000f890(param_1 + 8);
  return;
}



/* ===== 1800540b0 FUN_1800540b0 ===== */

undefined8 FUN_1800540b0(undefined8 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  
  FUN_18047eb70(param_1,0xffffd8f0,"wl_state");
  uVar2 = FUN_18047fd90(param_1,0xffffffff);
  FUN_18047fb50(param_1,0xfffffffe);
  FUN_180098b20(uVar2,param_2);
  uVar1 = *param_2;
  puVar3 = (undefined4 *)FUN_18047efb0(param_1,4);
  *puVar3 = uVar1;
  FUN_18047eb70(param_1,0xffffd8f0,"wl.ui");
  FUN_18047f990(param_1,0xfffffffe);
  return 1;
}



/* ===== 180054150 FUN_180054150 ===== */

undefined8 *
FUN_180054150(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  int iVar2;
  undefined2 *puVar3;
  int iVar4;
  undefined2 *local_res20;
  undefined4 uVar5;
  
  FUN_18047e240(param_2,2,5,param_4,0);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  iVar4 = 1;
  uVar5 = 1;
  iVar2 = FUN_18047f0e0(param_2,2);
  if (0 < iVar2) {
    do {
      FUN_18047f6f0(param_2,2,iVar4,param_4,uVar5);
      puVar3 = (undefined2 *)FUN_18047fc70(param_2,0xffffffff,0);
      local_res20 = &DAT_1806dfbb4;
      if (puVar3 != (undefined2 *)0x0) {
        local_res20 = puVar3;
      }
      lVar1 = param_1[1];
      if (lVar1 == param_1[2]) {
        FUN_180069af0(param_1,lVar1,&local_res20);
      }
      else {
        FUN_180013350(lVar1);
        param_1[1] = param_1[1] + 0x20;
      }
      FUN_18047fb50(param_2,0xfffffffe);
      iVar4 = iVar4 + 1;
    } while (iVar4 <= iVar2);
  }
  return param_1;
}



/* ===== 180054230 FUN_180054230 ===== */

void FUN_180054230(undefined8 param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = FUN_18047fe10(param_1,1);
  if (iVar3 == 5) {
    FUN_18047f880(param_1,1);
  }
  uVar1 = FUN_18047e090(param_1,1,0);
  lVar2 = FUN_180053b10(param_1,0,uVar1);
  iVar3 = FUN_18047fbf0(param_1,2);
  *(bool *)(lVar2 + 0x68) = iVar3 != 0;
  FUN_1800540b0(param_1,lVar2);
  return;
}



/* ===== 1800542b0 FUN_1800542b0 ===== */

void FUN_1800542b0(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  char *_Str;
  longlong lVar5;
  size_t sVar6;
  int *piVar7;
  int *piVar8;
  int local_res10 [6];
  
  iVar1 = FUN_18047fe10(param_1,1);
  if (iVar1 == 5) {
    FUN_18047f880(param_1,1);
  }
  uVar4 = FUN_18047e090(param_1,1,0);
  iVar1 = FUN_18047e010(param_1,2);
  local_res10[0] = iVar1;
  iVar2 = FUN_18047e010(param_1,3);
  local_res10[4] = iVar2;
  if (iVar2 <= iVar1) {
    FUN_180484c10(param_1,"ui.slider_int: max must be above min");
    return;
  }
  iVar3 = FUN_18047e470(param_1,4,(longlong)iVar1);
  local_res10[2] = iVar3;
  _Str = (char *)FUN_18047e510(param_1,5,&DAT_1806dfdd8,0);
  lVar5 = FUN_180053b10(param_1,1,uVar4);
  *(float *)(lVar5 + 0x74) = (float)iVar1;
  *(float *)(lVar5 + 0x78) = (float)iVar2;
  piVar8 = local_res10;
  if (iVar1 <= iVar3) {
    piVar8 = local_res10 + 2;
  }
  piVar7 = local_res10 + 4;
  if (iVar3 <= iVar2) {
    piVar7 = piVar8;
  }
  *(int *)(lVar5 + 0x6c) = *piVar7;
  sVar6 = strlen(_Str);
  FUN_180029840(lVar5 + 0x80,_Str,sVar6);
  FUN_1800540b0(param_1,lVar5);
  return;
}



/* ===== 180054400 FUN_180054400 ===== */

void FUN_180054400(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  char *_Str;
  longlong lVar3;
  size_t sVar4;
  float *pfVar5;
  float *pfVar6;
  double dVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_res10 [6];
  
  iVar1 = FUN_18047fe10(param_1,1);
  if (iVar1 == 5) {
    FUN_18047f880(param_1,1);
  }
  uVar2 = FUN_18047e090(param_1,1,0);
  dVar7 = (double)FUN_18047e140(param_1,2);
  fVar9 = (float)dVar7;
  local_res10[0] = fVar9;
  dVar7 = (double)FUN_18047e140(param_1,3);
  fVar10 = (float)dVar7;
  local_res10[4] = fVar10;
  if (fVar10 <= fVar9) {
    FUN_180484c10(param_1,"ui.slider_float: max must be above min");
    return;
  }
  dVar7 = (double)FUN_18047e5f0(param_1,4,(double)fVar9);
  fVar8 = (float)dVar7;
  local_res10[2] = fVar8;
  _Str = (char *)FUN_18047e510(param_1,5,&DAT_1806dfe08,0);
  lVar3 = FUN_180053b10(param_1,2,uVar2);
  *(float *)(lVar3 + 0x74) = fVar9;
  *(float *)(lVar3 + 0x78) = fVar10;
  pfVar6 = local_res10;
  if (fVar9 <= fVar8) {
    pfVar6 = local_res10 + 2;
  }
  pfVar5 = local_res10 + 4;
  if (fVar8 <= fVar10) {
    pfVar5 = pfVar6;
  }
  *(float *)(lVar3 + 0x70) = *pfVar5;
  sVar4 = strlen(_Str);
  FUN_180029840(lVar3 + 0x80,_Str,sVar4);
  FUN_1800540b0(param_1,lVar3);
  return;
}



/* ===== 180054570 FUN_180054570 ===== */

undefined4 FUN_180054570(undefined8 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  int *piVar5;
  int *piVar6;
  int local_res10 [6];
  longlong local_38;
  longlong local_30;
  
  iVar1 = FUN_18047fe10(param_1,1);
  if (iVar1 == 5) {
    FUN_18047f880(param_1,1);
  }
  uVar3 = FUN_18047e090(param_1,1,0);
  FUN_180054150(&local_38,param_1);
  if (local_38 == local_30) {
    uVar2 = FUN_180484c10(param_1,"ui.combo: no items");
  }
  else {
    iVar1 = FUN_18047e470(param_1,3,0);
    local_res10[2] = iVar1;
    lVar4 = FUN_180053b10(param_1,3,uVar3);
    FUN_180067380(lVar4 + 0xa0,&local_38);
    local_res10[4] = (int)(*(longlong *)(lVar4 + 0xa8) - *(longlong *)(lVar4 + 0xa0) >> 5) + -1;
    local_res10[0] = 0;
    piVar6 = local_res10;
    if (-1 < iVar1) {
      piVar6 = local_res10 + 2;
    }
    piVar5 = local_res10 + 4;
    if (iVar1 <= local_res10[4]) {
      piVar5 = piVar6;
    }
    *(int *)(lVar4 + 0x6c) = *piVar5;
    uVar2 = FUN_1800540b0(param_1,lVar4);
  }
  FUN_1800288b0(&local_38);
  return uVar2;
}



/* ===== 180054680 FUN_180054680 ===== */

undefined4
FUN_180054680(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  
  iVar9 = 1;
  iVar2 = FUN_18047fe10(param_1,1,param_3,param_4,0);
  if (iVar2 == 5) {
    FUN_18047f880(param_1,1);
  }
  uVar5 = FUN_18047e090(param_1,1,0);
  FUN_180054150(&local_58,param_1);
  if (local_58 == local_50) {
    uVar3 = FUN_180484c10(param_1,"ui.multi_combo: no items");
  }
  else {
    lVar6 = FUN_180053b10(param_1,4,uVar5);
    FUN_180067380(lVar6 + 0xa0,&local_58);
    lVar8 = *(longlong *)(lVar6 + 0xa8) - *(longlong *)(lVar6 + 0xa0) >> 5;
    lVar7 = thunk_FUN_1804ecaa0(lVar8);
    FUN_180540170(lVar7,0,lVar8);
    plVar1 = (longlong *)(lVar6 + 0xb8);
    local_60 = lVar7;
    if (plVar1 != &local_60) {
      local_60 = 0;
      lVar8 = *plVar1;
      *plVar1 = lVar7;
      if (lVar8 != 0) {
        thunk_FUN_1803d64e0();
      }
      lVar7 = 0;
    }
    uVar3 = 0;
    if (lVar7 != 0) {
      thunk_FUN_1803d64e0(lVar7);
    }
    iVar2 = FUN_18047fe10(param_1,3);
    if ((iVar2 == 5) && (iVar2 = FUN_18047f0e0(param_1,3), 0 < iVar2)) {
      do {
        FUN_18047f6f0(param_1,3,iVar9,param_4,uVar3);
        iVar4 = FUN_18047fe10(param_1,0xffffffff);
        if (iVar4 == 1) {
          iVar4 = FUN_18047fbf0();
          if ((iVar4 != 0) &&
             (iVar9 + -1 < (int)(*(longlong *)(lVar6 + 0xa8) - *(longlong *)(lVar6 + 0xa0) >> 5))) {
            *(undefined1 *)((longlong)iVar9 + -1 + *plVar1) = 1;
          }
        }
        else {
          iVar4 = FUN_18047fc10(param_1,0xffffffff);
          if ((-1 < iVar4) &&
             (iVar4 < (int)(*(longlong *)(lVar6 + 0xa8) - *(longlong *)(lVar6 + 0xa0) >> 5))) {
            *(undefined1 *)((longlong)iVar4 + *plVar1) = 1;
          }
        }
        FUN_18047fb50(param_1,0xfffffffe);
        iVar9 = iVar9 + 1;
      } while (iVar9 <= iVar2);
    }
    uVar3 = FUN_1800540b0(param_1,lVar6);
  }
  FUN_1800288b0(&local_58);
  return uVar3;
}



/* ===== 180054890 FUN_180054890 ===== */

void FUN_180054890(undefined8 param_1,undefined8 param_2,float *param_3)

{
  float fVar1;
  uint uVar2;
  
  uVar2 = FUN_180063eb0(param_1,2);
  fVar1 = DAT_1808acb94;
  *param_3 = (float)(uVar2 & 0xff) / DAT_1808acb94;
  param_3[1] = (float)(uVar2 >> 8 & 0xff) / fVar1;
  param_3[2] = (float)(uVar2 >> 0x10 & 0xff) / fVar1;
  param_3[3] = (float)(uVar2 >> 0x18) / fVar1;
  return;
}



/* ===== 180054910 FUN_180054910 ===== */

void FUN_180054910(undefined8 param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 uVar3;
  int iVar4;
  
  iVar4 = FUN_18047fe10(param_1,1);
  if (iVar4 == 5) {
    FUN_18047f880(param_1,1);
  }
  uVar1 = FUN_18047e090(param_1,1,0);
  lVar2 = FUN_180053b10(param_1,5,uVar1);
  iVar4 = FUN_18047fe10(param_1,2);
  if (0 < iVar4) {
    FUN_180054890(param_1);
  }
  iVar4 = FUN_18047fe10(param_1,3);
  if (0 < iVar4) {
    iVar4 = FUN_18047fbf0(param_1,3);
    uVar3 = 0;
    if (iVar4 == 0) goto LAB_1800549a0;
  }
  uVar3 = 1;
LAB_1800549a0:
  *(undefined1 *)(lVar2 + 0xd0) = uVar3;
  FUN_1800540b0(param_1,lVar2);
  return;
}



/* ===== 1800549c0 FUN_1800549c0 ===== */

void FUN_1800549c0(undefined8 param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = FUN_18047fe10(param_1,1);
  if (iVar3 == 5) {
    FUN_18047f880(param_1,1);
  }
  uVar1 = FUN_18047e090(param_1,1,0);
  lVar2 = FUN_180053b10(param_1,6,uVar1);
  iVar3 = FUN_18047fe10(param_1,2);
  if (iVar3 == 6) {
    FUN_18047f610(param_1,2);
    uVar4 = FUN_1804851b0(param_1,0xffffd8f0);
    *(undefined4 *)(lVar2 + 0x1e4) = uVar4;
  }
  FUN_1800540b0(param_1,lVar2);
  return;
}



/* ===== 180054a60 FUN_180054a60 ===== */

void FUN_180054a60(undefined8 param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = FUN_18047fe10(param_1,1);
  if (iVar3 == 5) {
    FUN_18047f880(param_1,1);
  }
  uVar1 = FUN_18047e090(param_1,1,0);
  lVar2 = FUN_180053b10(param_1,7,uVar1);
  uVar1 = FUN_18047e510(param_1,2,&DAT_18058b643,0);
  snprintf(lVar2 + 0xd1,0x100,&DAT_1806d3198,uVar1);
  FUN_1800540b0(param_1,lVar2);
  return;
}



/* ===== 180054b00 FUN_180054b00 ===== */

void FUN_180054b00(undefined8 param_1)

{
  undefined8 uVar1;
  int iVar2;
  
  iVar2 = FUN_18047fe10(param_1,1);
  if (iVar2 == 5) {
    FUN_18047f880(param_1,1);
  }
  uVar1 = FUN_18047e090(param_1,1,0);
  uVar1 = FUN_180053b10(param_1,8,uVar1);
  FUN_1800540b0(param_1,uVar1);
  return;
}



/* ===== 180054b60 FUN_180054b60 ===== */

void FUN_180054b60(undefined8 param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = FUN_18047fe10(param_1,1);
  if (iVar3 == 5) {
    FUN_18047f880(param_1,1);
  }
  uVar1 = FUN_18047e090(param_1,1,0);
  lVar2 = FUN_180053b10(param_1,9,uVar1);
  uVar4 = FUN_18047e470(param_1,2,0);
  *(undefined4 *)(lVar2 + 0x6c) = uVar4;
  FUN_1800540b0(param_1,lVar2);
  return;
}



/* ===== 180054be0 FUN_180054be0 ===== */

undefined8 FUN_180054be0(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  
  iVar1 = FUN_18047fe10(param_1,1);
  if (iVar1 == 5) {
    FUN_18047f880(param_1,1);
  }
  uVar2 = FUN_18047e090(param_1,1,0);
  puVar3 = (undefined1 *)FUN_18047fc70(param_1,0xffffd8ed,0);
  puVar4 = &DAT_18058b643;
  if (puVar3 != (undefined1 *)0x0) {
    puVar4 = puVar3;
  }
  FUN_18005aca0(param_1,uVar2,puVar4,0);
  return 1;
}



/* ===== 180054c60 FUN_180054c60 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_180054c60(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  undefined8 uVar2;
  char *_Str;
  size_t sVar3;
  undefined8 *puVar4;
  float fVar5;
  undefined1 auStack_88 [32];
  undefined1 local_68 [24];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  float local_28;
  ulonglong local_20;
  
  local_20 = DAT_180919500 ^ (ulonglong)auStack_88;
  iVar1 = FUN_18047fe10(param_1,2);
  fVar5 = DAT_1808ac34c;
  if (iVar1 < 1) {
    uVar2 = 0;
  }
  else {
    uStack_48 = 0;
    local_40 = _DAT_1808ad410;
    uStack_38 = _UNK_1808ad418;
    local_50 = 0;
    local_30 = 0;
    local_28 = 1.0;
    iVar1 = FUN_18047fe10(param_1,2);
    if (iVar1 == 4) {
      _Str = (char *)FUN_18047fc70(param_1,2,0);
      sVar3 = strlen(_Str);
      FUN_180029840(&local_50,_Str,sVar3);
    }
    else {
      puVar4 = (undefined8 *)FUN_18005fe40(local_68,param_1,2);
      local_30 = *puVar4;
      if (0 < *(int *)((longlong)puVar4 + 0xc)) {
        fVar5 = (float)*(int *)(puVar4 + 1) / (float)*(int *)((longlong)puVar4 + 0xc);
      }
      local_28 = fVar5;
    }
    FUN_18002ba60(param_3,&local_50);
    *(undefined8 *)(param_3 + 0x20) = local_30;
    *(float *)(param_3 + 0x28) = local_28;
    FUN_18000f890(&local_50);
    uVar2 = 1;
  }
  return uVar2;
}



/* ===== 180054db0 FUN_180054db0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180054db0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  size_t _Size;
  undefined *puVar3;
  bool bVar4;
  int iVar5;
  char *pcVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 *_Buf1;
  undefined8 ****_Buf2;
  undefined8 *puVar9;
  undefined **ppuVar10;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  longlong local_a0;
  undefined8 ****local_98 [2];
  size_t local_88;
  ulonglong local_80;
  undefined1 local_78 [32];
  ulonglong local_58;
  
  local_58 = DAT_180919500 ^ (ulonglong)auStack_c8;
  local_a8 = 0;
  iVar5 = FUN_18047fe10(param_1,1);
  if (iVar5 == 5) {
    FUN_18047f880(param_1,1);
  }
  pcVar6 = (char *)FUN_18047e090(param_1,1,0);
  if (*pcVar6 == '\0') {
    uVar7 = FUN_180484c10(param_1,"ui.tab: a name is needed");
  }
  else {
    FUN_18047eb70(param_1,0xffffd8f0,"wl_state");
    lVar8 = FUN_18047fd90(param_1,0xffffffff);
    FUN_18047fb50(param_1,0xfffffffe);
    lVar8 = *(longlong *)(lVar8 + 0xa0);
    local_a0 = lVar8;
    FUN_180013350(local_98,pcVar6);
    local_a8 = 1;
    puVar2 = *(undefined8 **)(lVar8 + 0x40);
    puVar1 = *(undefined8 **)(lVar8 + 0x38);
    for (puVar9 = puVar1; puVar9 != puVar2; puVar9 = puVar9 + 10) {
      _Buf2 = local_98;
      if (0xf < local_80) {
        _Buf2 = local_98[0];
      }
      _Size = puVar9[2];
      if ((ulonglong)puVar9[3] < 0x10) {
        _Buf1 = puVar9;
      }
      else {
        _Buf1 = (undefined8 *)*puVar9;
      }
      if ((_Size == local_88) && ((_Size == 0 || (iVar5 = memcmp(_Buf1,_Buf2,_Size), iVar5 == 0))))
      goto LAB_180054efb;
    }
    if ((ulonglong)(((longlong)puVar2 - (longlong)puVar1 >> 4) * -0x3333333333333333) < 0x40) {
LAB_180054efb:
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    local_a8 = 0;
    FUN_18000f890(local_98);
    if (bVar4) {
      uVar7 = FUN_180484c10(param_1,"ui.tab: 64 tabs per script at most");
    }
    else {
      FUN_180013350(local_78,pcVar6);
      FUN_180097c40(local_a0,local_78);
      FUN_18000f890(local_78);
      FUN_180054c60(param_1);
      FUN_18047e8f0(param_1,0,0);
      ppuVar10 = &PTR_s_checkbox_18059c2f0;
      puVar3 = PTR_s_checkbox_18059c2f0;
      while (puVar3 != (undefined *)0x0) {
        FUN_18047f530(param_1,&DAT_18058b643);
        FUN_18047f530(param_1,pcVar6);
        FUN_18047f2b0(param_1,ppuVar10[1],2);
        FUN_18047f8e0(param_1,0xfffffffe,*ppuVar10);
        ppuVar10 = ppuVar10 + 2;
        puVar3 = *ppuVar10;
      }
      FUN_18047f530(param_1,pcVar6);
      FUN_18047f2b0(param_1,FUN_180054be0,1);
      FUN_18047f8e0(param_1,0xfffffffe,"group");
      uVar7 = 1;
    }
  }
  return uVar7;
}



/* ===== 180055030 FUN_180055030 ===== */

undefined8 FUN_180055030(undefined8 param_1)

{
  int iVar1;
  longlong lVar2;
  char *_Str;
  size_t sVar3;
  undefined8 uVar4;
  
  iVar1 = FUN_18047fe10(param_1,1);
  if (iVar1 == 5) {
    FUN_18047f880(param_1,1);
  }
  FUN_18047eb70(param_1,0xffffd8f0,"wl_state");
  lVar2 = FUN_18047fd90(param_1,0xffffffff);
  FUN_18047fb50(param_1,0xfffffffe);
  lVar2 = *(longlong *)(lVar2 + 0xa0);
  iVar1 = FUN_18047fe10(param_1,1);
  if (iVar1 == 4) {
    _Str = (char *)FUN_18047fc70(param_1,1,0);
    sVar3 = strlen(_Str);
    FUN_180029840(lVar2 + 0x80,_Str,sVar3);
  }
  else {
    iVar1 = FUN_18047fe10(param_1,1);
    if (0 < iVar1) {
      uVar4 = FUN_180484c00(param_1,1,"a name or nil");
      return uVar4;
    }
  }
  FUN_180054c60(param_1);
  return 0;
}



/* ===== 180055130 FUN_180055130 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180055130(undefined8 param_1,longlong param_2)

{
  size_t _Size;
  int iVar1;
  undefined8 *_Buf1;
  undefined4 *puVar2;
  undefined8 ***_Buf2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 auStack_98 [32];
  undefined8 ***local_78 [2];
  size_t local_68;
  ulonglong local_60;
  undefined1 local_58 [32];
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStack_98;
  FUN_18033c920(local_78);
  uVar4 = 0;
  if ((DAT_180ccfa00 - DAT_180ccf9f8 >> 5) * 0x6db6db6db6db6db7 != 0) {
    do {
      _Buf1 = (undefined8 *)FUN_18033c920(local_58,uVar4 * 0xe0 + DAT_180ccf9f8);
      _Buf2 = local_78;
      if (0xf < local_60) {
        _Buf2 = local_78[0];
      }
      _Size = _Buf1[2];
      if (0xf < (ulonglong)_Buf1[3]) {
        _Buf1 = (undefined8 *)*_Buf1;
      }
      if (_Size == local_68) {
        if (_Size == 0) {
          bVar6 = true;
        }
        else {
          iVar1 = memcmp(_Buf1,_Buf2,_Size);
          bVar6 = iVar1 == 0;
        }
      }
      else {
        bVar6 = false;
      }
      FUN_18000f890(local_58);
      if (bVar6) {
        lVar5 = DAT_180ccf9f8 + uVar4 * 0xe0;
        FUN_180067240(lVar5,param_2);
        FUN_180067240(lVar5 + 0x18,param_2 + 0x18);
        *(undefined4 *)(lVar5 + 0x30) = *(undefined4 *)(param_2 + 0x30);
        *(undefined4 *)(lVar5 + 0x34) = *(undefined4 *)(param_2 + 0x34);
        *(undefined4 *)(lVar5 + 0x38) = *(undefined4 *)(param_2 + 0x38);
        if (lVar5 != param_2) {
          plVar3 = (longlong *)(param_2 + 0x40);
          if (0xf < *(ulonglong *)(param_2 + 0x58)) {
            plVar3 = (longlong *)*plVar3;
          }
          FUN_180029840(lVar5 + 0x40,plVar3,*(undefined8 *)(param_2 + 0x50));
        }
        *(undefined1 *)(lVar5 + 0x60) = *(undefined1 *)(param_2 + 0x60);
        FUN_180067240(lVar5 + 0x68,param_2 + 0x68);
        if (lVar5 != param_2) {
          FUN_180068ca0(lVar5 + 0x80,*(longlong *)(param_2 + 0x80),
                        *(longlong *)(param_2 + 0x88) - *(longlong *)(param_2 + 0x80) >> 2);
          plVar3 = (longlong *)(param_2 + 0x98);
          if (0xf < *(ulonglong *)(param_2 + 0xb0)) {
            plVar3 = (longlong *)*plVar3;
          }
          FUN_180029840(lVar5 + 0x98,plVar3,*(undefined8 *)(param_2 + 0xa8));
          plVar3 = (longlong *)(param_2 + 0xb8);
          if (0xf < *(ulonglong *)(param_2 + 0xd0)) {
            plVar3 = (longlong *)*plVar3;
          }
          FUN_180029840(lVar5 + 0xb8,plVar3,*(undefined8 *)(param_2 + 200));
        }
        *(undefined1 *)(lVar5 + 0xd8) = *(undefined1 *)(param_2 + 0xd8);
        *(undefined1 *)(lVar5 + 0xd9) = *(undefined1 *)(param_2 + 0xd9);
        if (-1 < (int)uVar4) goto LAB_18005536f;
        break;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < (ulonglong)((DAT_180ccfa00 - DAT_180ccf9f8 >> 5) * 0x6db6db6db6db6db7));
  }
  uVar4 = (DAT_180ccfa00 - DAT_180ccf9f8 >> 5) * 0x6db6db6db6db6db7;
  if (DAT_180ccfa00 == DAT_180ccfa08) {
    FUN_180069f40(DAT_180ccf9f8,DAT_180ccfa00,param_2);
  }
  else {
    FUN_18006c190();
    DAT_180ccfa00 = DAT_180ccfa00 + 0xe0;
  }
LAB_18005536f:
  puVar2 = (undefined4 *)FUN_18047efb0(param_1,4);
  *puVar2 = (int)uVar4;
  FUN_18047eb70(param_1,0xffffd8f0,"wl.menu_control");
  FUN_18047f990(param_1,0xfffffffe);
  FUN_18000f890(local_78);
  return;
}



/* ===== 1800553d0 FUN_1800553d0 ===== */

undefined8 FUN_1800553d0(longlong *param_1,float *param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  float *pfVar4;
  int iVar5;
  longlong *plVar6;
  char *pcVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined1 local_18 [16];
  
  lVar2 = param_1[2];
  if (lVar2 != 0) {
    uVar3 = param_1[3];
    plVar6 = param_1;
    if (0xf < uVar3) {
      plVar6 = (longlong *)*param_1;
    }
    if ((char)*plVar6 == '@') {
      plVar6 = param_1;
      if (0xf < uVar3) {
        plVar6 = (longlong *)*param_1;
      }
      if (lVar2 == 10) {
        lVar9 = *plVar6 + -0x6f6d5f6566617340;
        if (lVar9 == 0) {
          lVar9 = (ulonglong)*(ushort *)(plVar6 + 1) - 0x6564;
        }
        if (lVar9 == 0) {
          *param_2 = (float)DAT_1809f351c;
          return 1;
        }
      }
      plVar6 = param_1;
      if (0xf < uVar3) {
        plVar6 = (longlong *)*param_1;
      }
      if (lVar2 == 0x10) {
        lVar9 = *plVar6 + -0x6f7268636e797340;
        if (lVar9 == 0) {
          lVar9 = plVar6[1] + -0x6e6f6974617a696e;
        }
        if (lVar9 != 0) goto LAB_180055491;
        pcVar7 = PTR_DAT_1809f5b68;
      }
      else {
LAB_180055491:
        if (0xf < uVar3) {
          param_1 = (longlong *)*param_1;
        }
        if (lVar2 != 0xf) {
          return 0;
        }
        iVar5 = memcmp(param_1,"@developer_mode",0xf);
        if (iVar5 != 0) {
          return 0;
        }
        pcVar7 = PTR_DAT_1809f51a0;
      }
      if (*pcVar7 != '\0') {
        *param_2 = DAT_1808ac34c;
        return 1;
      }
      goto LAB_180055541;
    }
  }
  puVar8 = (undefined8 *)FUN_1800fbdb0(local_18,param_1);
  pfVar4 = (float *)*puVar8;
  if ((pfVar4 == (float *)0x0) || (uVar1 = *(uint *)(puVar8 + 1), (uVar1 & 0xfffffffb) == 0)) {
    return 0;
  }
  if (uVar1 != 1) {
    if (uVar1 == 2) {
      *param_2 = (float)(int)*pfVar4;
      return 1;
    }
    *param_2 = *pfVar4;
    return 1;
  }
  if (*(char *)pfVar4 != '\0') {
    *param_2 = DAT_1808ac34c;
    return 1;
  }
LAB_180055541:
  *param_2 = 0.0;
  return 1;
}



/* ===== 180055560 FUN_180055560 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180055560(longlong *param_1,float param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  undefined8 **ppuVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 **ppuVar7;
  undefined1 auStack_f8 [32];
  undefined8 *local_d8;
  int local_d0 [2];
  undefined8 *local_c8 [2];
  longlong *local_b8;
  undefined8 local_b0;
  undefined4 *local_a8;
  undefined2 local_a0;
  undefined4 local_98;
  undefined1 local_94;
  longlong local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_f8;
  lVar1 = param_1[2];
  if (lVar1 != 0) {
    uVar2 = param_1[3];
    plVar5 = param_1;
    if (0xf < uVar2) {
      plVar5 = (longlong *)*param_1;
    }
    if ((char)*plVar5 == '@') {
      plVar5 = param_1;
      if (0xf < uVar2) {
        plVar5 = (longlong *)*param_1;
      }
      if (lVar1 == 10) {
        lVar6 = *plVar5 + -0x6f6d5f6566617340;
        if (lVar6 == 0) {
          lVar6 = (ulonglong)*(ushort *)(plVar5 + 1) - 0x6564;
        }
        if (lVar6 == 0) {
          local_d0[0] = FUN_1804f3280(param_2);
          local_c8[0] = (undefined8 *)CONCAT44(local_c8[0]._4_4_,2);
          local_d8._0_4_ = 0;
          ppuVar7 = &local_d8;
          if (-1 < local_d0[0]) {
            ppuVar7 = (undefined8 **)local_d0;
          }
          ppuVar4 = local_c8;
          if (local_d0[0] < 3) {
            ppuVar4 = ppuVar7;
          }
          DAT_1809f351c = *(undefined4 *)ppuVar4;
          return;
        }
      }
      plVar5 = param_1;
      if (0xf < uVar2) {
        plVar5 = (longlong *)*param_1;
      }
      if (lVar1 == 0x10) {
        lVar6 = *plVar5 + -0x6f7268636e797340;
        if (lVar6 == 0) {
          lVar6 = plVar5[1] + -0x6e6f6974617a696e;
        }
        if (lVar6 == 0) {
          if (param_2 == 0.0) {
            *PTR_DAT_1809f5b68 = 0;
            return;
          }
          *PTR_DAT_1809f5b68 = 1;
          return;
        }
      }
      if (0xf < uVar2) {
        param_1 = (longlong *)*param_1;
      }
      if (lVar1 != 0xf) {
        return;
      }
      iVar3 = memcmp(param_1,"@developer_mode",0xf);
      if (iVar3 != 0) {
        return;
      }
      if (param_2 == 0.0) {
        *PTR_DAT_1809f51a0 = 0;
        return;
      }
      *PTR_DAT_1809f51a0 = 1;
      return;
    }
  }
  plVar5 = (longlong *)FUN_1800fbdb0(local_c8,param_1);
  if ((*plVar5 != 0) && ((*(uint *)(plVar5 + 1) & 0xfffffffb) != 0)) {
    local_94 = 0;
    local_90 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    local_70 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    uStack_48 = 0;
    local_40 = 0;
    local_38 = 0xf;
    local_50 = 0;
    if (*(uint *)(plVar5 + 1) == 1) {
      local_98 = 1;
      if (param_2 == 0.0) {
        local_94 = 0;
      }
      else {
        local_94 = 1;
      }
    }
    else {
      local_98 = 3;
      local_90 = (ulonglong)(uint)param_2 << 0x20;
    }
    local_b0 = 0;
    local_a0 = 0;
    local_a8 = &local_98;
    local_b8 = param_1;
    FUN_180107040(&local_b8,&DAT_18091a190);
    FUN_18000f890(&local_50);
    local_c8[0] = &local_70;
    FUN_180068f30(&local_70);
    FUN_180068f30(&local_88);
  }
  return;
}



/* ===== 1800557f0 FUN_1800557f0 ===== */

void FUN_1800557f0(longlong param_1)

{
  FUN_18000f890(param_1 + 0x48);
  FUN_180068f30();
  FUN_180068f30(param_1 + 0x10);
  return;
}



/* ===== 180055830 FUN_180055830 ===== */

void FUN_180055830(undefined8 param_1,longlong param_2,float param_3)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  
  if (*(int *)(param_2 + 0x30) == 1) {
    FUN_18047f270(0,param_3 != 0.0);
    return;
  }
  if (*(int *)(param_2 + 0x30) != 3) {
    if (*(char *)(param_2 + 0x60) == '\0') {
      FUN_18047f4f0(param_1,(double)param_3);
      return;
    }
    iVar2 = FUN_1804f3280(param_3);
    FUN_18047f3d0(param_1,(longlong)iVar2);
    return;
  }
  iVar2 = FUN_1804f3280(param_3);
  lVar1 = *(longlong *)(param_2 + 0x80);
  if (lVar1 != *(longlong *)(param_2 + 0x88)) {
    uVar5 = 0;
    uVar3 = *(longlong *)(param_2 + 0x88) - lVar1 >> 2;
    uVar4 = 0xffffffff;
    if (uVar3 == 0) goto LAB_180055929;
    do {
      if (*(float *)(lVar1 + uVar5 * 4) == param_3) {
        uVar4 = uVar5 & 0xffffffff;
      }
      iVar2 = (int)uVar4;
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar3);
  }
  if ((-1 < iVar2) &&
     (iVar2 < (int)(*(longlong *)(param_2 + 0x70) - *(longlong *)(param_2 + 0x68) >> 5))) {
    puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x68) + (longlong)iVar2 * 0x20);
    if (0xf < (ulonglong)puVar6[3]) {
      puVar6 = (undefined8 *)*puVar6;
    }
    FUN_18047f530(param_1,puVar6);
    return;
  }
LAB_180055929:
  FUN_18047f4d0(param_1);
  return;
}



/* ===== 180055970 FUN_180055970 ===== */

ulonglong FUN_180055970(undefined8 param_1,longlong param_2,float param_3)

{
  int iVar1;
  uint uVar2;
  float *pfVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  float fVar8;
  double dVar9;
  undefined4 uVar10;
  float local_res18 [2];
  
  local_res18[0] = param_3;
  if (*(int *)(param_2 + 0x30) == 1) {
    FUN_18047e240(param_1,2,1);
    iVar1 = FUN_18047fbf0(param_1,2);
    if (iVar1 == 0) {
      return 0;
    }
    return (ulonglong)DAT_1808ac34c;
  }
  if (*(int *)(param_2 + 0x30) != 3) {
    dVar9 = (double)FUN_18047e140();
    uVar10 = (undefined4)((ulonglong)dVar9 >> 0x20);
    fVar8 = (float)dVar9;
    local_res18[0] = fVar8;
    if (*(float *)(param_2 + 0x34) < *(float *)(param_2 + 0x38)) {
      pfVar3 = local_res18;
      if (fVar8 < *(float *)(param_2 + 0x34)) {
        pfVar3 = (float *)(param_2 + 0x34);
      }
      if (*(float *)(param_2 + 0x38) < fVar8) {
        pfVar3 = (float *)(param_2 + 0x38);
      }
      fVar8 = *pfVar3;
      uVar10 = 0;
    }
    uVar5 = CONCAT44(uVar10,fVar8);
    if (*(char *)(param_2 + 0x60) != '\0') {
      iVar1 = FUN_1804f3280();
      uVar5 = (ulonglong)(uint)(float)iVar1;
    }
    return uVar5;
  }
  iVar1 = FUN_18047fe10(param_1,2);
  if (iVar1 == 3) {
    uVar2 = FUN_18047fc10();
    if (((int)uVar2 < 0) ||
       ((int)(*(longlong *)(param_2 + 0x70) - *(longlong *)(param_2 + 0x68) >> 5) <= (int)uVar2)) {
      FUN_180484c00(param_1,2,"no such item");
    }
    uVar5 = (ulonglong)(int)uVar2;
    if (uVar5 < (ulonglong)(*(longlong *)(param_2 + 0x88) - *(longlong *)(param_2 + 0x80) >> 2)) {
      return (ulonglong)*(uint *)(*(longlong *)(param_2 + 0x80) + uVar5 * 4);
    }
    if ((int)uVar2 < 0) {
      fVar8 = (float)(uVar5 >> 1 | (ulonglong)(uVar2 & 1));
      return (ulonglong)(uint)(fVar8 + fVar8);
    }
    return (ulonglong)(uint)(float)(longlong)uVar5;
  }
  uVar4 = FUN_18047e090(param_1,2,0);
  lVar7 = *(longlong *)(param_2 + 0x68);
  if (*(longlong *)(param_2 + 0x70) - lVar7 >> 5 != 0) {
    uVar5 = 0;
    do {
      puVar6 = (undefined8 *)(uVar5 * 0x20 + lVar7);
      if (0xf < (ulonglong)puVar6[3]) {
        puVar6 = (undefined8 *)*puVar6;
      }
      iVar1 = FUN_1805117b0(puVar6,uVar4);
      if (iVar1 == 0) {
        if (uVar5 < (ulonglong)(*(longlong *)(param_2 + 0x88) - *(longlong *)(param_2 + 0x80) >> 2))
        {
          fVar8 = *(float *)(*(longlong *)(param_2 + 0x80) + uVar5 * 4);
        }
        else if ((longlong)uVar5 < 0) {
          fVar8 = (float)uVar5;
        }
        else {
          fVar8 = (float)(longlong)uVar5;
        }
        goto LAB_180055b2e;
      }
      lVar7 = *(longlong *)(param_2 + 0x68);
      uVar5 = uVar5 + 1;
    } while (uVar5 < (ulonglong)(*(longlong *)(param_2 + 0x70) - lVar7 >> 5));
  }
  FUN_180484c00(param_1,2,"no such item");
  fVar8 = 0.0;
LAB_180055b2e:
  return (ulonglong)(uint)fVar8;
}



/* ===== 180055bd0 FUN_180055bd0 ===== */

void FUN_180055bd0(undefined8 *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  int local_res8 [2];
  
  iVar2 = FUN_18047fe10(*(undefined8 *)*param_1);
  if (iVar2 == 3) {
    local_res8[0] = FUN_18047fc10();
    if ((-1 < local_res8[0]) &&
       (local_res8[0] <
        (int)(*(longlong *)(param_1[1] + 0x70) - *(longlong *)(param_1[1] + 0x68) >> 5))) {
      lVar5 = param_1[2];
      piVar1 = *(int **)(lVar5 + 8);
      if (piVar1 == *(int **)(lVar5 + 0x10)) {
        FUN_18006a410(lVar5,piVar1,local_res8);
        return;
      }
      *piVar1 = local_res8[0];
      *(longlong *)(lVar5 + 8) = *(longlong *)(lVar5 + 8) + 4;
      return;
    }
  }
  else {
    uVar3 = FUN_18047e090(*(undefined8 *)*param_1,param_2,0);
    lVar5 = param_1[1];
    if (*(longlong *)(lVar5 + 0x70) - *(longlong *)(lVar5 + 0x68) >> 5 != 0) {
      uVar6 = 0;
      do {
        puVar4 = (undefined8 *)(uVar6 * 0x20 + *(longlong *)(lVar5 + 0x68));
        if (0xf < (ulonglong)puVar4[3]) {
          puVar4 = (undefined8 *)*puVar4;
        }
        iVar2 = FUN_1805117b0(puVar4,uVar3);
        if (iVar2 == 0) {
          local_res8[0] = (int)uVar6;
          FUN_180066e60(param_1[2],local_res8);
        }
        lVar5 = param_1[1];
        uVar6 = uVar6 + 1;
      } while (uVar6 < (ulonglong)(*(longlong *)(lVar5 + 0x70) - *(longlong *)(lVar5 + 0x68) >> 5));
    }
  }
  return;
}



/* ===== 180055ce0 FUN_180055ce0 ===== */

void FUN_180055ce0(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  
  FUN_18047e8f0(param_1,0,0);
  lVar4 = *param_3;
  if (param_3[1] - lVar4 >> 2 != 0) {
    uVar2 = 0;
    iVar3 = 1;
    do {
      if ((ulonglong)(*(longlong *)(param_2 + 0x70) - *(longlong *)(param_2 + 0x68) >> 5) <= uVar2)
      {
        return;
      }
      if (*(float *)(lVar4 + uVar2 * 4) != 0.0) {
        puVar1 = (undefined8 *)(uVar2 * 0x20 + *(longlong *)(param_2 + 0x68));
        if (0xf < (ulonglong)puVar1[3]) {
          puVar1 = (undefined8 *)*puVar1;
        }
        FUN_18047f530(param_1,puVar1);
        FUN_18047f7e0(param_1,0xfffffffe,iVar3);
        iVar3 = iVar3 + 1;
      }
      lVar4 = *param_3;
      uVar2 = uVar2 + 1;
    } while (uVar2 < (ulonglong)(param_3[1] - lVar4 >> 2));
  }
  return;
}



/* ===== 180055dd0 FUN_180055dd0 ===== */

void FUN_180055dd0(undefined8 *param_1,undefined8 *param_2,char param_3)

{
  size_t _Size;
  longlong lVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *_Buf1;
  undefined8 *_Buf2;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar5 = (undefined8 *)param_1[1];
  puVar3 = (undefined8 *)FUN_180026970(*param_1,puVar5,param_2);
  if (puVar3 == puVar5) {
LAB_180055e5e:
    if (puVar3 == puVar5) goto LAB_180055eaa;
  }
  else {
    puVar4 = puVar3 + 4;
    if (puVar4 != puVar5) {
      do {
        if ((ulonglong)param_2[3] < 0x10) {
          _Buf2 = param_2;
        }
        else {
          _Buf2 = (undefined8 *)*param_2;
        }
        _Size = puVar4[2];
        if ((ulonglong)puVar4[3] < 0x10) {
          _Buf1 = puVar4;
        }
        else {
          _Buf1 = (undefined8 *)*puVar4;
        }
        if ((_Size != param_2[2]) ||
           ((_Size != 0 && (iVar2 = memcmp(_Buf1,_Buf2,_Size), iVar2 != 0)))) {
          FUN_18002ba60(puVar3,puVar4);
          puVar3 = puVar3 + 4;
        }
        puVar4 = puVar4 + 4;
      } while (puVar4 != puVar5);
      goto LAB_180055e5e;
    }
  }
  puVar4 = (undefined8 *)param_1[1];
  for (; puVar5 != puVar4; puVar5 = puVar5 + 4) {
    FUN_18002ba60(puVar3,puVar5);
    puVar3 = puVar3 + 4;
  }
  puVar5 = (undefined8 *)param_1[1];
  for (puVar4 = puVar3; puVar4 != puVar5; puVar4 = puVar4 + 4) {
    FUN_18000f890(puVar4);
  }
  param_1[1] = puVar3;
LAB_180055eaa:
  if (param_3 != '\0') {
    lVar1 = param_1[1];
    if (lVar1 != param_1[2]) {
      FUN_180024b50(lVar1,param_2);
      param_1[1] = param_1[1] + 0x20;
      return;
    }
    FUN_180028f00(param_1,lVar1,param_2);
  }
  return;
}



/* ===== 180055f00 FUN_180055f00 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180055f00(undefined8 param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  byte bVar6;
  char cVar7;
  int *piVar8;
  longlong lVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  byte bVar13;
  undefined8 uVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined1 auStack_c8 [8];
  undefined1 auStack_c0 [24];
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  longlong local_98;
  undefined8 uStack_90;
  longlong local_88;
  undefined1 local_80 [32];
  ulonglong local_60;
  
  local_60 = DAT_180919500 ^ (ulonglong)auStack_c8;
  bVar4 = false;
  local_a0 = 0;
  uVar14 = 1;
  piVar8 = (int *)FUN_18047e2c0(param_1,1,"wl.menu_control");
  iVar1 = *piVar8;
  if ((iVar1 < 0) || ((int)(DAT_180ccfa00 - DAT_180ccf9f8 >> 5) * -0x49249249 <= iVar1)) {
    FUN_180484c10(param_1,"this menu control is gone");
  }
  puVar10 = auStack_c8;
  puVar11 = auStack_c8;
  lVar15 = (longlong)iVar1 * 0xe0 + DAT_180ccf9f8;
  if (*(int *)(lVar15 + 0x30) != 4) {
    local_a8 = 0;
    lVar2 = *(longlong *)(lVar15 + 0x18);
    if (lVar2 == *(longlong *)(lVar15 + 0x20)) {
LAB_180056174:
      puVar12 = auStack_c8;
      uVar14 = 0;
      goto LAB_180056176;
    }
    local_a4 = 0;
    cVar7 = FUN_1801c6120(lVar2,&local_a4);
    if (param_2 != 2) {
      if (((param_2 != 1) || (cVar7 == '\0')) ||
         (cVar7 = FUN_1801c6220(lVar2,&local_a8), cVar7 == '\0')) {
        cVar7 = FUN_1800553d0(lVar2,&local_a8);
        uVar16 = local_a8;
        goto LAB_180056142;
      }
      uVar16 = local_a8;
      goto LAB_1800560fe;
    }
    uVar16 = local_a4;
LAB_180056142:
    if (cVar7 == '\0') goto LAB_180056174;
    if ((param_2 == 0) && (*(int *)(lVar15 + 0x30) == 1)) {
      uVar14 = FUN_18033c920(local_80,lVar15);
      bVar4 = true;
      local_a0 = 1;
      cVar7 = FUN_18033da90(uVar14);
      if (cVar7 == '\0') goto LAB_1800560fe;
      bVar5 = true;
    }
    else {
LAB_1800560fe:
      bVar5 = false;
    }
    puVar12 = auStack_c8;
    if (bVar4) {
      local_a0 = 0;
      FUN_18000f890(local_80);
    }
    if (bVar5) {
      uVar16 = 0;
    }
    FUN_180055830(param_1,lVar15,uVar16);
    uVar14 = 1;
    goto LAB_180056176;
  }
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  bVar13 = 0;
  lVar2 = *(longlong *)(lVar15 + 0x20);
  for (lVar9 = *(longlong *)(lVar15 + 0x18); lVar9 != lVar2; lVar9 = lVar9 + 0x20) {
    local_a8 = 0;
    local_a4 = 0;
    bVar6 = FUN_1801c6120(lVar9,&local_a4);
    if (param_2 == 2) {
      local_a8 = local_a4;
    }
    else if (((param_2 == 1) && (bVar6 != 0)) &&
            (cVar7 = FUN_1801c6220(lVar9,&local_a8), cVar7 != '\0')) {
      bVar6 = 1;
    }
    else {
      bVar6 = FUN_1800553d0(lVar9,&local_a8);
    }
    bVar13 = bVar13 | bVar6;
    FUN_180066e60(&local_98,&local_a8);
  }
  if ((param_2 == 2) && (bVar13 == 0)) {
    uVar14 = 0;
  }
  else {
    FUN_180055ce0(param_1,lVar15,&local_98);
  }
  puVar12 = auStack_c8;
  if (local_98 == 0) goto LAB_180056176;
  lVar15 = local_98;
  if ((ulonglong)((local_88 - local_98 >> 2) * 4) < 0x1000) {
LAB_180056091:
    puVar11 = puVar10;
  }
  else {
    lVar15 = *(longlong *)(local_98 + -8);
    if (0x1f < (local_98 - lVar15) - 8U) {
      lVar15 = 5;
      pcVar3 = (code *)swi(0x29);
      (*pcVar3)(5);
      puVar10 = auStack_c0;
      goto LAB_180056091;
    }
  }
  *(undefined8 *)(puVar11 + -8) = 0x18005609c;
  thunk_FUN_1803d64e0(lVar15);
  puVar12 = puVar11;
LAB_180056176:
  *(undefined8 *)(puVar12 + -8) = 0x180056182;
  return uVar14;
}



/* ===== 1800561d0 FUN_1800561d0 ===== */

longlong * FUN_1800561d0(longlong *param_1,undefined8 param_2,longlong param_3)

{
  undefined4 *puVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  int *piVar6;
  int iVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [24];
  undefined4 local_98;
  undefined8 local_90;
  longlong local_88;
  longlong lStack_80;
  longlong local_78;
  undefined4 local_70;
  int *local_68;
  int *piStack_60;
  longlong local_58;
  longlong *local_50;
  undefined8 *local_40;
  longlong local_38;
  int **local_30;
  
  local_98 = 0;
  if (*(int *)(param_3 + 0x30) != 4) {
    local_70 = FUN_180055970(param_2,param_3);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    lVar10 = FUN_18000fb70(4);
    *param_1 = lVar10;
    param_1[1] = lVar10;
    param_1[2] = lVar10 + 4;
    puVar1 = (undefined4 *)*param_1;
    *puVar1 = local_70;
    param_1[1] = (longlong)(puVar1 + 1);
    return param_1;
  }
  lVar10 = *(longlong *)(param_3 + 0x20) - *(longlong *)(param_3 + 0x18);
  local_88 = 0;
  lStack_80 = 0;
  local_78 = 0;
  if (lVar10 != 0) {
    uVar11 = lVar10 >> 5;
    if (0x3fffffffffffffff < uVar11) {
                    /* WARNING: Subroutine does not return */
      FUN_1800118d0();
    }
    lVar10 = uVar11 * 4;
    lVar5 = FUN_18000fb70(lVar10);
    local_78 = lVar5 + lVar10;
    local_50 = &local_88;
    local_88 = lVar5;
    lStack_80 = lVar5;
    FUN_180540170(lVar5,0,lVar10);
    lStack_80 = lVar10 + lVar5;
    local_50 = (longlong *)0x0;
  }
  local_68 = (int *)0x0;
  piStack_60 = (int *)0x0;
  local_58 = 0;
  local_98 = 2;
  local_40 = &local_90;
  local_30 = &local_68;
  local_90 = param_2;
  local_38 = param_3;
  iVar3 = FUN_18047fe10(param_2,2);
  if (iVar3 == 5) {
    iVar3 = FUN_18047f0e0(local_90,2);
    iVar7 = 1;
    if (0 < iVar3) {
      do {
        FUN_18047f6f0(local_90,2,iVar7);
        uVar4 = FUN_18047ed40(local_90);
        FUN_180055bd0(&local_40,uVar4);
        FUN_18047fb50(local_90,0xfffffffe);
        iVar7 = iVar7 + 1;
      } while (iVar7 <= iVar3);
    }
  }
  else {
    iVar7 = 2;
    iVar3 = FUN_18047ed40(local_90);
    if (1 < iVar3) {
      do {
        FUN_180055bd0(&local_40,iVar7);
        iVar7 = iVar7 + 1;
        iVar3 = FUN_18047ed40(local_90);
      } while (iVar7 <= iVar3);
    }
  }
  puVar8 = auStack_b8;
  puVar9 = auStack_b8;
  for (piVar6 = local_68; piVar6 != piStack_60; piVar6 = piVar6 + 1) {
    *(undefined4 *)(local_88 + (longlong)*piVar6 * 4) = 0x3f800000;
  }
  local_98 = 0;
  if (local_68 == (int *)0x0) goto LAB_1800563c7;
  piVar6 = local_68;
  if ((ulonglong)((local_58 - (longlong)local_68 >> 2) * 4) < 0x1000) {
LAB_1800563b0:
    puVar9 = puVar8;
  }
  else {
    piVar6 = *(int **)(local_68 + -2);
    if ((undefined1 *)0x1f < (undefined1 *)((longlong)local_68 + (-8 - (longlong)piVar6))) {
      piVar6 = (int *)&DAT_00000005;
      pcVar2 = (code *)swi(0x29);
      (*pcVar2)(5);
      puVar8 = auStack_b0;
      goto LAB_1800563b0;
    }
  }
  *(undefined8 *)(puVar9 + -8) = 0x1800563bb;
  thunk_FUN_1803d64e0(piVar6);
LAB_1800563c7:
  *param_1 = local_88;
  param_1[1] = lStack_80;
  param_1[2] = local_78;
  return param_1;
}



/* ===== 180056470 FUN_180056470 ===== */

undefined8 FUN_180056470(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 local_58 [40];
  
  piVar2 = (int *)FUN_18047e2c0(param_1,1,"wl.menu_control");
  iVar1 = *piVar2;
  if ((iVar1 < 0) || ((int)(DAT_180ccfa00 - DAT_180ccf9f8 >> 5) * -0x49249249 <= iVar1)) {
    FUN_180484c10(param_1,"this menu control is gone");
  }
  lVar7 = (longlong)iVar1 * 0xe0 + DAT_180ccf9f8;
  plVar3 = (longlong *)FUN_1800561d0(local_58,param_1,lVar7);
  FUN_18047eb70(param_1,0xffffd8f0,"wl_state");
  lVar4 = FUN_18047fd90(param_1,0xffffffff);
  FUN_18047fb50(param_1,0xfffffffe);
  lVar5 = *(longlong *)(lVar7 + 0x18);
  if (*(longlong *)(lVar7 + 0x20) - lVar5 >> 5 != 0) {
    uVar8 = 0;
    do {
      if ((ulonglong)(plVar3[1] - *plVar3 >> 2) <= uVar8) break;
      lVar6 = uVar8 * 0x20;
      FUN_1801c5f50(lVar6 + lVar5);
      FUN_180055dd0(lVar4 + 0x168,*(longlong *)(lVar7 + 0x18) + lVar6,0);
      FUN_180055560(*(longlong *)(lVar7 + 0x18) + lVar6,*(undefined4 *)(*plVar3 + uVar8 * 4));
      uVar8 = uVar8 + 1;
      lVar5 = *(longlong *)(lVar7 + 0x18);
    } while (uVar8 < (ulonglong)(*(longlong *)(lVar7 + 0x20) - lVar5 >> 5));
  }
  FUN_180068f30(local_58);
  FUN_18047f610(param_1,1);
  return 1;
}



/* ===== 1800565d0 FUN_1800565d0 ===== */

undefined8 FUN_1800565d0(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong local_48;
  longlong local_40;
  
  piVar2 = (int *)FUN_18047e2c0(param_1,1,"wl.menu_control");
  iVar1 = *piVar2;
  if ((iVar1 < 0) || ((int)(DAT_180ccfa00 - DAT_180ccf9f8 >> 5) * -0x49249249 <= iVar1)) {
    FUN_180484c10(param_1,"this menu control is gone");
  }
  lVar4 = (longlong)iVar1 * 0xe0 + DAT_180ccf9f8;
  FUN_18047eb70(param_1,0xffffd8f0,"wl_state");
  lVar3 = FUN_18047fd90(param_1,0xffffffff);
  FUN_18047fb50(param_1,0xfffffffe);
  iVar1 = FUN_18047fe10(param_1,2);
  if (iVar1 < 1) {
    lVar6 = *(longlong *)(lVar4 + 0x20);
    for (lVar4 = *(longlong *)(lVar4 + 0x18); lVar4 != lVar6; lVar4 = lVar4 + 0x20) {
      FUN_1801c5f50(lVar4);
      FUN_180055dd0(lVar3 + 0x168,lVar4,0);
    }
  }
  else {
    FUN_1800561d0(&local_48,param_1,lVar4);
    lVar6 = *(longlong *)(lVar4 + 0x18);
    if (*(longlong *)(lVar4 + 0x20) - lVar6 >> 5 != 0) {
      uVar5 = 0;
      do {
        if ((ulonglong)(local_40 - local_48 >> 2) <= uVar5) break;
        FUN_1801c5d00(lVar6 + uVar5 * 0x20,*(undefined4 *)(local_48 + uVar5 * 4));
        FUN_180055dd0(lVar3 + 0x168,*(longlong *)(lVar4 + 0x18) + uVar5 * 0x20,1);
        uVar5 = uVar5 + 1;
        lVar6 = *(longlong *)(lVar4 + 0x18);
      } while (uVar5 < (ulonglong)(*(longlong *)(lVar4 + 0x20) - lVar6 >> 5));
    }
    FUN_180068f30(&local_48);
  }
  FUN_18047f610(param_1,1);
  return 1;
}



/* ===== 180056760 FUN_180056760 ===== */

undefined8 FUN_180056760(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)FUN_18047e2c0(param_1,1,"wl.menu_control");
  iVar1 = *piVar2;
  if ((iVar1 < 0) || ((int)(DAT_180ccfa00 - DAT_180ccf9f8 >> 5) * -0x49249249 <= iVar1)) {
    FUN_180484c10(param_1,"this menu control is gone");
  }
  if (*(int *)((longlong)iVar1 * 0xe0 + 0x30 + DAT_180ccf9f8) != 4) {
    FUN_180484c10(param_1,"this control is not a multi-select");
  }
  return 0;
}



/* ===== 1800567f0 FUN_1800567f0 ===== */

void FUN_1800567f0(undefined8 param_1)

{
  FUN_180056760();
  FUN_180055f00(param_1,1);
  return;
}



/* ===== 180056810 FUN_180056810 ===== */

void FUN_180056810(undefined8 param_1)

{
  FUN_180056760();
  FUN_180055f00(param_1,2);
  return;
}



/* ===== 180056830 FUN_180056830 ===== */

void FUN_180056830(undefined8 param_1)

{
  FUN_180056760();
  FUN_180055f00(param_1,0);
  return;
}



/* ===== 180056850 FUN_180056850 ===== */

void FUN_180056850(undefined8 param_1)

{
  FUN_180056760();
  FUN_180056470(param_1);
  return;
}



/* ===== 180056870 FUN_180056870 ===== */

void FUN_180056870(undefined8 param_1)

{
  FUN_180056760();
  FUN_1800565d0(param_1);
  return;
}



/* ===== 180056890 FUN_180056890 ===== */

undefined8 FUN_180056890(undefined8 param_1)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  size_t sVar3;
  size_t _Size;
  code *pcVar4;
  undefined8 *puVar5;
  char cVar6;
  int iVar7;
  int *piVar8;
  undefined8 *_Buf1;
  undefined4 *puVar9;
  undefined8 *_Buf2;
  undefined8 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  longlong lVar15;
  undefined4 local_res10 [6];
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [24];
  undefined4 *local_68;
  undefined4 *puStack_60;
  longlong local_58;
  
  piVar8 = (int *)FUN_18047e2c0(param_1,1,"wl.menu_control");
  iVar7 = *piVar8;
  if ((iVar7 < 0) || ((int)(DAT_180ccfa00 - DAT_180ccf9f8 >> 5) * -0x49249249 <= iVar7)) {
    FUN_180484c10(param_1,"this menu control is gone");
  }
  puVar11 = auStack_88;
  puVar12 = auStack_88;
  lVar15 = (longlong)iVar7 * 0xe0 + DAT_180ccf9f8;
  local_68 = (undefined4 *)0x0;
  puStack_60 = (undefined4 *)0x0;
  local_58 = 0;
  puVar1 = *(undefined8 **)(lVar15 + 0x20);
  puVar10 = DAT_180ccf9e0;
  puVar5 = DAT_180ccf9e8;
  for (puVar14 = *(undefined8 **)(lVar15 + 0x18); DAT_180ccf9e0 = puVar10, DAT_180ccf9e8 = puVar5,
      puVar14 != puVar1; puVar14 = puVar14 + 4) {
    local_res10[0] = 0;
    if (puVar10 != puVar5) {
      uVar2 = puVar14[3];
      sVar3 = puVar14[2];
      do {
        if (uVar2 < 0x10) {
          _Buf2 = puVar14;
        }
        else {
          _Buf2 = (undefined8 *)*puVar14;
        }
        _Size = puVar10[2];
        if ((ulonglong)puVar10[3] < 0x10) {
          _Buf1 = puVar10;
        }
        else {
          _Buf1 = (undefined8 *)*puVar10;
        }
        if ((_Size == sVar3) && ((_Size == 0 || (iVar7 = memcmp(_Buf1,_Buf2,_Size), iVar7 == 0)))) {
          local_res10[0] = *(undefined4 *)(puVar10 + 4);
          goto LAB_1800569a7;
        }
        puVar10 = puVar10 + 5;
      } while (puVar10 != puVar5);
    }
    cVar6 = FUN_1800fca00(puVar14,local_res10);
    if (cVar6 == '\0') goto LAB_180056a11;
LAB_1800569a7:
    FUN_180066e60(&local_68,local_res10);
    puVar10 = DAT_180ccf9e0;
    puVar5 = DAT_180ccf9e8;
  }
  uVar13 = 1;
  if (*(int *)(lVar15 + 0x30) == 4) {
    FUN_180055ce0(param_1,lVar15,&local_68);
  }
  else if (local_68 == puStack_60) {
LAB_180056a11:
    uVar13 = 0;
  }
  else {
    FUN_180055830(param_1,lVar15,*local_68);
  }
  if (local_68 == (undefined4 *)0x0) {
    return uVar13;
  }
  puVar9 = local_68;
  if (0xfff < (ulonglong)((local_58 - (longlong)local_68 >> 2) * 4)) {
    puVar9 = *(undefined4 **)(local_68 + -2);
    if ((undefined1 *)((longlong)local_68 + (-8 - (longlong)puVar9)) < (undefined1 *)0x20)
    goto LAB_180056a5b;
    puVar9 = (undefined4 *)&DAT_00000005;
    pcVar4 = (code *)swi(0x29);
    (*pcVar4)(5);
    puVar11 = auStack_80;
  }
  puVar12 = puVar11;
LAB_180056a5b:
  *(undefined8 *)(puVar12 + -8) = 0x180056a63;
  thunk_FUN_1803d64e0(puVar9);
  *(undefined8 *)(puVar12 + 0x20) = 0;
  *(undefined8 *)(puVar12 + 0x28) = 0;
  *(undefined8 *)(puVar12 + 0x30) = 0;
  return uVar13;
}



/* ===== 180056a90 FUN_180056a90 ===== */

undefined8 FUN_180056a90(undefined8 param_1)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  size_t sVar3;
  size_t _Size;
  bool bVar4;
  undefined8 *puVar5;
  char cVar6;
  int iVar7;
  int *piVar8;
  undefined8 *_Buf1;
  undefined8 *puVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  longlong lVar13;
  longlong lVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  float fVar17;
  float local_res10 [2];
  float local_res18 [2];
  longlong local_res20;
  longlong local_70;
  longlong local_68;
  
  piVar8 = (int *)FUN_18047e2c0(param_1,1,"wl.menu_control");
  iVar7 = *piVar8;
  if ((iVar7 < 0) || ((int)(DAT_180ccfa00 - DAT_180ccf9f8 >> 5) * -0x49249249 <= iVar7)) {
    FUN_180484c10(param_1,"this menu control is gone");
  }
  lVar13 = (longlong)iVar7 * 0xe0 + DAT_180ccf9f8;
  local_res20 = lVar13;
  FUN_1800561d0(&local_70,param_1,lVar13);
  lVar10 = *(longlong *)(lVar13 + 0x18);
  if (*(longlong *)(lVar13 + 0x20) - lVar10 >> 5 != 0) {
    uVar16 = 0;
    do {
      puVar5 = DAT_180ccf9e8;
      puVar15 = DAT_180ccf9e0;
      if ((ulonglong)(local_68 - local_70 >> 2) <= uVar16) break;
      local_res10[0] = 0.0;
      local_res18[0] = 0.0;
      lVar13 = uVar16 * 0x20;
      puVar12 = (undefined8 *)(lVar10 + lVar13);
      if (DAT_180ccf9e0 != DAT_180ccf9e8) {
        uVar2 = puVar12[3];
        sVar3 = puVar12[2];
        puVar11 = DAT_180ccf9e0;
        do {
          if (uVar2 < 0x10) {
            puVar9 = puVar12;
          }
          else {
            puVar9 = (undefined8 *)*puVar12;
          }
          _Size = puVar11[2];
          if ((ulonglong)puVar11[3] < 0x10) {
            _Buf1 = puVar11;
          }
          else {
            _Buf1 = (undefined8 *)*puVar11;
          }
          if ((_Size == sVar3) && ((_Size == 0 || (iVar7 = memcmp(_Buf1,puVar9,_Size), iVar7 == 0)))
             ) {
            fVar17 = *(float *)(puVar11 + 4);
            cVar6 = '\x01';
            goto LAB_180056bf7;
          }
          puVar11 = puVar11 + 5;
        } while (puVar11 != puVar5);
      }
      cVar6 = FUN_1800fca00(puVar12,local_res10);
      puVar15 = DAT_180ccf9e0;
      fVar17 = local_res10[0];
LAB_180056bf7:
      puVar5 = DAT_180ccf9e8;
      if (puVar15 == DAT_180ccf9e8) {
LAB_180056c72:
        lVar14 = local_res20;
        puVar15 = DAT_180ccf9e8;
        puVar1 = (undefined4 *)(local_70 + uVar16 * 4);
        if (DAT_180ccf9e8 == DAT_180ccf9f0) {
          FUN_180069cd0();
        }
        else {
          FUN_180024b50(DAT_180ccf9e8,*(longlong *)(local_res20 + 0x18) + lVar13);
          *(undefined4 *)(puVar15 + 4) = *puVar1;
          DAT_180ccf9e8 = DAT_180ccf9e8 + 5;
        }
      }
      else {
        bVar4 = false;
        puVar12 = (undefined8 *)(*(longlong *)(local_res20 + 0x18) + lVar13);
        do {
          if ((ulonglong)puVar12[3] < 0x10) {
            puVar11 = puVar12;
          }
          else {
            puVar11 = (undefined8 *)*puVar12;
          }
          sVar3 = puVar15[2];
          if ((ulonglong)puVar15[3] < 0x10) {
            puVar9 = puVar15;
          }
          else {
            puVar9 = (undefined8 *)*puVar15;
          }
          if ((sVar3 == puVar12[2]) &&
             ((sVar3 == 0 || (iVar7 = memcmp(puVar9,puVar11,sVar3), iVar7 == 0)))) {
            *(undefined4 *)(puVar15 + 4) = *(undefined4 *)(local_70 + uVar16 * 4);
            bVar4 = true;
          }
          puVar15 = puVar15 + 5;
        } while (puVar15 != puVar5);
        if (!bVar4) goto LAB_180056c72;
        lVar14 = local_res20;
      }
      if (((cVar6 != '\0') &&
          (cVar6 = FUN_1800553d0(*(longlong *)(lVar14 + 0x18) + lVar13,local_res18), cVar6 != '\0'))
         && (local_res18[0] == fVar17)) {
        FUN_180055560(*(longlong *)(lVar14 + 0x18) + lVar13,*(undefined4 *)(local_70 + uVar16 * 4));
      }
      uVar16 = uVar16 + 1;
      lVar10 = *(longlong *)(lVar14 + 0x18);
    } while (uVar16 < (ulonglong)(*(longlong *)(lVar14 + 0x20) - lVar10 >> 5));
  }
  FUN_18047f610(param_1,1);
  FUN_180068f30(&local_70);
  return 1;
}



/* ===== 180056d70 FUN_180056d70 ===== */

void FUN_180056d70(undefined8 param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_18047e2c0(param_1,1,"wl.menu_control");
  if ((*piVar1 < 0) || ((int)(DAT_180ccfa00 - DAT_180ccf9f8 >> 5) * -0x49249249 <= *piVar1)) {
    FUN_180484c10(param_1,"this menu control is gone");
  }
  FUN_180484c10(param_1,"script does not own this element");
  return;
}



/* ===== 180056de0 FUN_180056de0 ===== */

undefined8 FUN_180056de0(undefined8 param_1)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  longlong *plVar4;
  
  piVar3 = (int *)FUN_18047e2c0(param_1,1,"wl.menu_control");
  iVar1 = *piVar3;
  if ((iVar1 < 0) || ((int)(DAT_180ccfa00 - DAT_180ccf9f8 >> 5) * -0x49249249 <= iVar1)) {
    FUN_180484c10(param_1,"this menu control is gone");
  }
  lVar2 = *(longlong *)((longlong)iVar1 * 0xe0 + 8 + DAT_180ccf9f8);
  if (*(longlong *)((longlong)iVar1 * 0xe0 + DAT_180ccf9f8) == lVar2) {
    return 0;
  }
  plVar4 = (longlong *)(lVar2 + -0x20);
  if (0xf < *(ulonglong *)(lVar2 + -8)) {
    plVar4 = (longlong *)*plVar4;
  }
  FUN_18047f530(param_1,plVar4);
  return 1;
}



/* ===== 180056e90 FUN_180056e90 ===== */

undefined8 FUN_180056e90(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  piVar2 = (int *)FUN_18047e2c0(param_1,1,"wl.menu_control");
  iVar1 = *piVar2;
  if ((iVar1 < 0) || ((int)(DAT_180ccfa00 - DAT_180ccf9f8 >> 5) * -0x49249249 <= iVar1)) {
    FUN_180484c10(param_1,"this menu control is gone");
  }
  lVar4 = (longlong)iVar1 * 0xe0;
  if (*(longlong *)(lVar4 + 200 + DAT_180ccf9f8) == 0) {
    return 0;
  }
  puVar3 = (undefined8 *)(lVar4 + 0xb8 + DAT_180ccf9f8);
  if (0xf < *(ulonglong *)(lVar4 + 0xd0 + DAT_180ccf9f8)) {
    puVar3 = (undefined8 *)*puVar3;
  }
  FUN_18047f530(param_1,puVar3);
  return 1;
}



/* ===== 180056f50 FUN_180056f50 ===== */

void FUN_180056f50(undefined8 param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_18047e2c0(param_1,1,"wl.menu_control");
  if ((*piVar1 < 0) || ((int)(DAT_180ccfa00 - DAT_180ccf9f8 >> 5) * -0x49249249 <= *piVar1)) {
    FUN_180484c10(param_1,"this menu control is gone");
  }
  FUN_180484c10(param_1,"cannot change the tooltip of the default menu item");
  return;
}



/* ===== 180056fc0 FUN_180056fc0 ===== */

undefined8 FUN_180056fc0(undefined8 param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_18047e2c0(param_1,1,"wl.menu_control");
  if ((*piVar1 < 0) || ((int)(DAT_180ccfa00 - DAT_180ccf9f8 >> 5) * -0x49249249 <= *piVar1)) {
    FUN_180484c10(param_1,"this menu control is gone");
  }
  FUN_18047f530(param_1,&DAT_18058b643);
  return 1;
}



/* ===== 180057030 FUN_180057030 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180057030(undefined8 param_1)

{
  int iVar1;
  byte bVar2;
  int *piVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [32];
  undefined1 local_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_58;
  piVar3 = (int *)FUN_18047e2c0(param_1,1,"wl.menu_control");
  iVar1 = *piVar3;
  if ((iVar1 < 0) || ((int)(DAT_180ccfa00 - DAT_180ccf9f8 >> 5) * -0x49249249 <= iVar1)) {
    FUN_180484c10(param_1,"this menu control is gone");
  }
  uVar4 = FUN_18033c920(local_38,(longlong)iVar1 * 0xe0 + DAT_180ccf9f8);
  bVar2 = FUN_18033d860(uVar4);
  FUN_18047f270(param_1,bVar2 ^ 1);
  FUN_18000f890(local_38);
  return 1;
}



/* ===== 180057100 FUN_180057100 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180057100(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined1 local_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_58;
  piVar2 = (int *)FUN_18047e2c0(param_1,1,"wl.menu_control");
  iVar1 = *piVar2;
  if ((iVar1 < 0) || ((int)(DAT_180ccfa00 - DAT_180ccf9f8 >> 5) * -0x49249249 <= iVar1)) {
    FUN_180484c10(param_1,"this menu control is gone");
  }
  lVar3 = (longlong)iVar1 * 0xe0 + DAT_180ccf9f8;
  iVar1 = FUN_18047fbf0(param_1,2);
  FUN_18033c920(local_38,lVar3);
  FUN_18033d6c0(local_38,iVar1 == 0);
  FUN_18047eb70(param_1,0xffffd8f0,"wl_state");
  lVar3 = FUN_18047fd90(param_1,0xffffffff);
  FUN_18047fb50(param_1,0xfffffffe);
  FUN_180055dd0(lVar3 + 0x180,local_38,iVar1 == 0);
  FUN_18047f610(param_1,1);
  FUN_18000f890(local_38);
  return 1;
}



/* ===== 180057240 FUN_180057240 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180057240(undefined8 param_1)

{
  int iVar1;
  undefined1 uVar2;
  int *piVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [32];
  undefined1 local_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_58;
  piVar3 = (int *)FUN_18047e2c0(param_1,1,"wl.menu_control");
  iVar1 = *piVar3;
  if ((iVar1 < 0) || ((int)(DAT_180ccfa00 - DAT_180ccf9f8 >> 5) * -0x49249249 <= iVar1)) {
    FUN_180484c10(param_1,"this menu control is gone");
  }
  uVar4 = FUN_18033c920(local_38,(longlong)iVar1 * 0xe0 + DAT_180ccf9f8);
  uVar2 = FUN_18033da90(uVar4);
  FUN_18047f270(param_1,uVar2);
  FUN_18000f890(local_38);
  return 1;
}



/* ===== 180057310 FUN_180057310 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180057310(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined1 local_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_58;
  piVar2 = (int *)FUN_18047e2c0(param_1,1,"wl.menu_control");
  iVar1 = *piVar2;
  if ((iVar1 < 0) || ((int)(DAT_180ccfa00 - DAT_180ccf9f8 >> 5) * -0x49249249 <= iVar1)) {
    FUN_180484c10(param_1,"this menu control is gone");
  }
  lVar3 = (longlong)iVar1 * 0xe0 + DAT_180ccf9f8;
  iVar1 = FUN_18047fbf0(param_1,2);
  FUN_18033c920(local_38,lVar3);
  FUN_18033d8f0(local_38,iVar1 != 0);
  FUN_18047eb70(param_1,0xffffd8f0,"wl_state");
  lVar3 = FUN_18047fd90(param_1,0xffffffff);
  FUN_18047fb50(param_1,0xfffffffe);
  FUN_180055dd0(lVar3 + 0x198,local_38,iVar1 != 0);
  FUN_18047f610(param_1,1);
  FUN_18000f890(local_38);
  return 1;
}



/* ===== 180057440 FUN_180057440 ===== */

undefined8 FUN_180057440(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)FUN_18047e2c0(param_1,1,"wl.menu_control");
  iVar1 = *piVar2;
  if ((iVar1 < 0) || ((int)(DAT_180ccfa00 - DAT_180ccf9f8 >> 5) * -0x49249249 <= iVar1)) {
    FUN_180484c10(param_1,"this menu control is gone");
  }
  FUN_18047f3d0(param_1,(longlong)iVar1);
  return 1;
}



/* ===== 1800574c0 FUN_1800574c0 ===== */

undefined8 FUN_1800574c0(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  
  piVar2 = (int *)FUN_18047e2c0(param_1,1,"wl.menu_control");
  iVar1 = *piVar2;
  if ((iVar1 < 0) || ((int)(DAT_180ccfa00 - DAT_180ccf9f8 >> 5) * -0x49249249 <= iVar1)) {
    FUN_180484c10(param_1,"this menu control is gone");
  }
  iVar1 = *(int *)((longlong)iVar1 * 0xe0 + 0x30 + DAT_180ccf9f8);
  if (iVar1 == 1) {
    pcVar3 = "toggle";
  }
  else if (iVar1 == 2) {
    pcVar3 = "slider";
  }
  else if (iVar1 == 3) {
    pcVar3 = "combo";
  }
  else if (iVar1 == 4) {
    pcVar3 = "multicombo";
  }
  else {
    pcVar3 = "unknown";
  }
  FUN_18047f530(param_1,pcVar3);
  return 1;
}



/* ===== 180057590 FUN_180057590 ===== */

undefined8 FUN_180057590(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int *piVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  
  piVar4 = (int *)FUN_18047e2c0(param_1,1,"wl.menu_control");
  iVar3 = *piVar4;
  if ((iVar3 < 0) || ((int)(DAT_180ccfa00 - DAT_180ccf9f8 >> 5) * -0x49249249 <= iVar3)) {
    FUN_180484c10(param_1,"this menu control is gone");
  }
  lVar5 = (longlong)iVar3 * 0xe0;
  lVar6 = *(longlong *)(lVar5 + 0x70 + DAT_180ccf9f8);
  lVar1 = lVar5 + DAT_180ccf9f8;
  lVar2 = lVar5 + DAT_180ccf9f8;
  lVar5 = *(longlong *)(lVar5 + 0x68 + DAT_180ccf9f8);
  if (lVar5 == lVar6) {
    return 0;
  }
  FUN_18047e8f0(param_1,lVar6 - lVar5 >> 5 & 0xffffffff,0);
  lVar6 = *(longlong *)(lVar2 + 0x68);
  if (*(longlong *)(lVar1 + 0x70) - lVar6 >> 5 != 0) {
    uVar8 = 0;
    do {
      puVar7 = (undefined8 *)(lVar6 + uVar8 * 0x20);
      if (0xf < (ulonglong)puVar7[3]) {
        puVar7 = (undefined8 *)*puVar7;
      }
      FUN_18047f530(param_1,puVar7);
      FUN_18047f7e0(param_1,0xfffffffe,(int)uVar8 + 1);
      lVar6 = *(longlong *)(lVar2 + 0x68);
      uVar8 = uVar8 + 1;
    } while (uVar8 < (ulonglong)(*(longlong *)(lVar1 + 0x70) - lVar6 >> 5));
  }
  return 1;
}



/* ===== 1800576b0 FUN_1800576b0 ===== */

undefined8 FUN_1800576b0(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  
  piVar2 = (int *)FUN_18047e2c0(param_1,1,"wl.menu_control");
  iVar1 = *piVar2;
  if ((iVar1 < 0) || ((int)(DAT_180ccfa00 - DAT_180ccf9f8 >> 5) * -0x49249249 <= iVar1)) {
    FUN_180484c10(param_1,"this menu control is gone");
  }
  lVar3 = DAT_180ccf9f8 + (longlong)iVar1 * 0xe0;
  if (*(int *)(lVar3 + 0x30) == 2) {
    FUN_180055830(param_1,lVar3,*(undefined4 *)(lVar3 + 0x34));
    return 1;
  }
  return 0;
}



/* ===== 180057750 FUN_180057750 ===== */

undefined8 FUN_180057750(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  
  piVar2 = (int *)FUN_18047e2c0(param_1,1,"wl.menu_control");
  iVar1 = *piVar2;
  if ((iVar1 < 0) || ((int)(DAT_180ccfa00 - DAT_180ccf9f8 >> 5) * -0x49249249 <= iVar1)) {
    FUN_180484c10(param_1,"this menu control is gone");
  }
  lVar3 = DAT_180ccf9f8 + (longlong)iVar1 * 0xe0;
  if (*(int *)(lVar3 + 0x30) == 2) {
    FUN_180055830(param_1,lVar3,*(undefined4 *)(lVar3 + 0x38));
    return 1;
  }
  return 0;
}



/* ===== 1800577f0 FUN_1800577f0 ===== */

void FUN_1800577f0(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  
  piVar2 = (int *)FUN_18047e2c0(param_1,1,"wl.menu_control");
  iVar1 = *piVar2;
  if ((iVar1 < 0) || ((int)(DAT_180ccfa00 - DAT_180ccf9f8 >> 5) * -0x49249249 <= iVar1)) {
    FUN_180484c10(param_1,"this menu control is gone");
  }
  pcVar3 = "this element is invalid";
  if (*(int *)((longlong)iVar1 * 0xe0 + 0x30 + DAT_180ccf9f8) - 3U < 2) {
    pcVar3 = "script does not own this element";
  }
  FUN_180484c10(param_1,pcVar3);
  return;
}



/* ===== 180057890 FUN_180057890 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180057890(undefined8 param_1,char param_2)

{
  int iVar1;
  double dVar2;
  longlong lVar3;
  float fVar4;
  char cVar5;
  int *piVar6;
  float *pfVar7;
  undefined8 uVar8;
  float *pfVar9;
  char *pcVar10;
  longlong lVar11;
  bool bVar12;
  float fVar13;
  undefined1 auStack_c8 [32];
  float local_a8 [4];
  undefined1 local_98 [32];
  ulonglong local_78;
  
  local_78 = DAT_180919500 ^ (ulonglong)auStack_c8;
  piVar6 = (int *)FUN_18047e2c0(param_1,1,"wl.menu_control");
  iVar1 = *piVar6;
  if ((iVar1 < 0) || ((int)(DAT_180ccfa00 - DAT_180ccf9f8 >> 5) * -0x49249249 <= iVar1)) {
    FUN_180484c10(param_1,"this menu control is gone");
  }
  lVar3 = DAT_180ccf9f8;
  lVar11 = (longlong)iVar1 * 0xe0;
  if ((*(int *)(lVar11 + 0x30 + DAT_180ccf9f8) == 2) &&
     (*(longlong *)(lVar11 + 0x18 + DAT_180ccf9f8) != *(longlong *)(lVar11 + 0x20 + DAT_180ccf9f8)))
  {
    dVar2 = (double)FUN_18047e140(param_1,2);
    fVar13 = (float)dVar2;
    if (*(char *)(lVar11 + 0x60 + lVar3) != '\0') {
      fVar13 = (float)(int)dVar2;
    }
    local_a8[1] = *(float *)(lVar11 + 0x34 + lVar3);
    local_a8[2] = *(float *)(lVar11 + 0x38 + lVar3);
    if (param_2 == '\0') {
      bVar12 = fVar13 < local_a8[2];
    }
    else {
      bVar12 = local_a8[1] < fVar13;
    }
    if (bVar12) {
      if (param_2 == '\0') {
        local_a8[1] = fVar13;
      }
      else {
        local_a8[2] = fVar13;
      }
      fVar4 = local_a8[2];
      fVar13 = local_a8[1];
      FUN_180024b50(local_98,*(undefined8 *)(lVar11 + 0x18 + lVar3));
      FUN_18033cdd0(local_98,fVar13,fVar4);
      *(float *)(lVar11 + 0x34 + DAT_180ccf9f8) = fVar13;
      *(float *)(lVar11 + 0x38 + DAT_180ccf9f8) = fVar4;
      local_a8[0] = 0.0;
      cVar5 = FUN_1800553d0(local_98,local_a8);
      if (cVar5 != '\0') {
        pfVar9 = local_a8 + 1;
        if (fVar13 <= local_a8[0]) {
          pfVar9 = local_a8;
        }
        pfVar7 = local_a8 + 2;
        if (local_a8[0] <= fVar4) {
          pfVar7 = pfVar9;
        }
        if (*pfVar7 != local_a8[0]) {
          FUN_180055560(local_98);
        }
      }
      FUN_18047f610(param_1,1);
      FUN_18000f890(local_98);
      return 1;
    }
    pcVar10 = "max value should be greater than the min value";
  }
  else {
    pcVar10 = "option is not a slider";
  }
  uVar8 = FUN_180484c10(param_1,pcVar10);
  return uVar8;
}



/* ===== 180057ae0 FUN_180057ae0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180057ae0(undefined8 param_1)

{
  int iVar1;
  char *pcVar2;
  longlong lVar3;
  char cVar4;
  undefined4 uVar5;
  int *piVar6;
  longlong lVar7;
  size_t sVar8;
  undefined8 ****ppppuVar9;
  char *pcVar10;
  char *pcVar11;
  longlong lVar12;
  bool bVar13;
  bool bVar14;
  undefined1 auStack_f8 [32];
  char local_d8;
  float local_d4;
  undefined8 local_d0;
  undefined1 local_c8 [16];
  undefined8 ****local_b8 [2];
  undefined8 local_a8;
  ulonglong local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_68;
  
  local_68 = DAT_180919500 ^ (ulonglong)auStack_f8;
  local_d0 = param_1;
  piVar6 = (int *)FUN_18047e2c0(param_1,1,"wl.menu_control");
  iVar1 = *piVar6;
  if ((iVar1 < 0) || ((int)(DAT_180ccfa00 - DAT_180ccf9f8 >> 5) * -0x49249249 <= iVar1)) {
    FUN_180484c10(param_1,"this menu control is gone");
  }
  lVar3 = DAT_180ccf9f8;
  lVar12 = (longlong)iVar1 * 0xe0;
  FUN_180013350(local_b8,&DAT_1806dfff8);
  local_d8 = '\x01';
  pcVar2 = *(char **)(lVar12 + 0x20 + lVar3);
  for (pcVar11 = *(char **)(lVar12 + 0x18 + lVar3); pcVar11 != pcVar2; pcVar11 = pcVar11 + 0x20) {
    local_d4 = 0.0;
    if ((*(longlong *)(pcVar11 + 0x10) != 0) &&
       (cVar4 = FUN_1800553d0(pcVar11,&local_d4), cVar4 != '\0')) {
      pcVar10 = pcVar11;
      if (0xf < *(ulonglong *)(pcVar11 + 0x18)) {
        pcVar10 = *(char **)pcVar11;
      }
      if (*pcVar10 == '@') {
        bVar13 = *(int *)(lVar12 + 0x30 + lVar3) == 1;
        bVar14 = !bVar13;
      }
      else {
        lVar7 = FUN_1800fbdb0(local_c8,pcVar11);
        bVar13 = *(int *)(lVar7 + 8) == 1;
        bVar14 = *(int *)(lVar7 + 8) == 2;
      }
      pcVar10 = ",\"";
      if (local_d8 != '\0') {
        pcVar10 = "\"";
      }
      sVar8 = strlen(pcVar10);
      FUN_1800134a0(local_b8,pcVar10,sVar8);
      local_d8 = '\0';
      if (*(ulonglong *)(pcVar11 + 0x18) < 0x10) {
        pcVar10 = pcVar11;
      }
      else {
        pcVar10 = *(char **)pcVar11;
      }
      FUN_1800134a0(local_b8,pcVar10,*(undefined8 *)(pcVar11 + 0x10));
      FUN_1800134a0(local_b8,&DAT_1806e0004,2);
      local_98 = 0;
      uStack_90 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_78 = 0;
      uStack_70 = 0;
      if (bVar13) {
        pcVar10 = "false";
        if (local_d4 != 0.0) {
          pcVar10 = "true";
        }
        snprintf(&local_98,0x30,&DAT_1806d3198,pcVar10);
      }
      else if (bVar14) {
        uVar5 = FUN_1804f3280(local_d4);
        snprintf(&local_98,0x30,&DAT_1806dfdd8,uVar5);
      }
      else {
        snprintf(&local_98,0x30,&DAT_1806e0008,(double)local_d4);
      }
      sVar8 = strlen((char *)&local_98);
      FUN_1800134a0(local_b8,&local_98,sVar8);
    }
  }
  FUN_1800134a0(local_b8,&DAT_1806e0010,1);
  ppppuVar9 = local_b8;
  if (0xf < local_a0) {
    ppppuVar9 = local_b8[0];
  }
  FUN_18047f450(local_d0,ppppuVar9,local_a8);
  FUN_18000f890(local_b8);
  return 1;
}



/* ===== 180057d90 FUN_180057d90 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180057d90(undefined8 param_1)

{
  undefined8 *puVar1;
  size_t sVar2;
  size_t sVar3;
  undefined *puVar4;
  code *pcVar5;
  bool bVar6;
  byte bVar7;
  longlong *plVar8;
  int iVar9;
  int *piVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  longlong lVar13;
  undefined8 *puVar14;
  undefined8 *_Buf1;
  undefined8 *puVar15;
  undefined8 ****ppppuVar16;
  ulonglong uVar17;
  undefined **ppuVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  longlong lVar21;
  undefined1 auStack_178 [8];
  undefined1 auStack_170 [24];
  longlong local_158;
  longlong *local_148;
  undefined8 *local_140;
  undefined8 ****local_138 [2];
  size_t local_128;
  ulonglong local_120;
  undefined1 local_118;
  undefined7 uStack_117;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined1 local_f8;
  undefined7 uStack_f7;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined1 local_d8;
  undefined7 uStack_d7;
  undefined8 local_c8;
  ulonglong local_c0;
  undefined1 local_b8 [32];
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  ulonglong local_58;
  
  local_58 = DAT_180919500 ^ (ulonglong)auStack_178;
  piVar10 = (int *)FUN_18047e2c0(param_1,1,"wl.menu_control");
  iVar9 = *piVar10;
  if ((iVar9 < 0) || ((int)(DAT_180ccfa00 - DAT_180ccf9f8 >> 5) * -0x49249249 <= iVar9)) {
    FUN_180484c10(param_1,"this menu control is gone");
  }
  lVar21 = (longlong)iVar9 * 0xe0 + DAT_180ccf9f8;
  if (*(char *)(lVar21 + 0xd9) != '\0') {
    uVar11 = FUN_180484c10(param_1,
                           "cannot create a group on an element that is already inside a group");
    puVar19 = auStack_178;
    goto LAB_180058248;
  }
  puVar1 = (undefined8 *)(lVar21 + 0x98);
  lVar13 = *(longlong *)(lVar21 + 0xa8);
  uVar17 = *(ulonglong *)(lVar21 + 0xb0);
  puVar14 = puVar1;
  if (0xf < uVar17) {
    puVar14 = (undefined8 *)*puVar1;
  }
  if ((lVar13 == 4) && (iVar9 = memcmp(puVar14,&DAT_1806e0064,4), iVar9 == 0)) {
LAB_180057f13:
    uVar11 = FUN_18033c920(local_98,lVar21);
    uVar12 = FUN_180013350(local_b8,&DAT_1806dfae4);
    FUN_180066820(local_138,uVar12,uVar11);
    FUN_18000f890(local_b8);
    FUN_18000f890(local_98);
    FUN_18047eb70(param_1,0xffffd8f0,"wl_state");
    lVar13 = FUN_18047fd90(param_1,0xffffffff);
    FUN_18047fb50(param_1,0xfffffffe);
    puVar19 = auStack_178;
    local_158 = *(longlong *)(lVar13 + 0xa0);
    bVar6 = false;
    local_148 = (longlong *)(local_158 + 0x50);
    puVar14 = (undefined8 *)*local_148;
    if (puVar14 == *(undefined8 **)(local_158 + 0x58)) {
LAB_180058059:
      plVar8 = local_148;
      lVar21 = local_158;
      FUN_180024b50(&local_118,puVar1);
      FUN_180024b50(&local_f8,local_138);
      puVar14 = *(undefined8 **)(lVar21 + 0x58);
      if (puVar14 == *(undefined8 **)(lVar21 + 0x60)) {
        FUN_18006a540(plVar8,puVar14,&local_118);
      }
      else {
        *puVar14 = 0;
        puVar14[1] = 0;
        puVar14[2] = 0;
        puVar14[3] = 0;
        *puVar14 = CONCAT71(uStack_117,local_118);
        puVar14[1] = local_110;
        puVar14[2] = local_108;
        puVar14[3] = local_100;
        local_108 = 0;
        local_100 = 0xf;
        local_118 = 0;
        puVar14[4] = 0;
        puVar14[5] = 0;
        puVar14[6] = 0;
        puVar14[7] = 0;
        puVar14[4] = CONCAT71(uStack_f7,local_f8);
        puVar14[5] = local_f0;
        puVar14[6] = local_e8;
        puVar14[7] = local_e0;
        local_e8 = 0;
        local_e0 = 0xf;
        local_f8 = 0;
        *(longlong *)(lVar21 + 0x58) = *(longlong *)(lVar21 + 0x58) + 0x40;
        local_140 = puVar14;
      }
      FUN_18000f890(&local_f8);
      FUN_18000f890(&local_118);
    }
    else {
      sVar2 = *(size_t *)(lVar21 + 0xa8);
      uVar17 = *(ulonglong *)(lVar21 + 0xb0);
      do {
        if (uVar17 < 0x10) {
          puVar15 = puVar1;
        }
        else {
          puVar15 = (undefined8 *)*puVar1;
        }
        sVar3 = puVar14[2];
        if ((ulonglong)puVar14[3] < 0x10) {
          _Buf1 = puVar14;
        }
        else {
          _Buf1 = (undefined8 *)*puVar14;
        }
        if ((sVar3 == sVar2) && ((sVar3 == 0 || (iVar9 = memcmp(_Buf1,puVar15,sVar3), iVar9 == 0))))
        {
          puVar15 = puVar14 + 4;
          ppppuVar16 = local_138;
          if (0xf < local_120) {
            ppppuVar16 = local_138[0];
          }
          sVar3 = puVar14[6];
          if (0xf < (ulonglong)puVar14[7]) {
            puVar15 = (undefined8 *)*puVar15;
          }
          if ((sVar3 != local_128) ||
             ((sVar3 != 0 && (iVar9 = memcmp(puVar15,ppppuVar16,sVar3), iVar9 != 0))))
          goto LAB_180058030;
          bVar7 = 1;
        }
        else {
LAB_180058030:
          bVar7 = 0;
        }
        bVar6 = (bool)(bVar6 | bVar7);
        puVar14 = puVar14 + 8;
      } while (puVar14 != *(undefined8 **)(local_158 + 0x58));
      if (!bVar6) goto LAB_180058059;
    }
    uVar11 = FUN_180013350(local_78,&DAT_1806dfae0);
    FUN_1800667a0(&local_d8,uVar11,puVar1);
    FUN_18000f890(local_78);
    puVar20 = &local_d8;
    if (0xf < local_c0) {
      puVar20 = (undefined1 *)CONCAT71(uStack_d7,local_d8);
    }
    ppppuVar16 = local_138;
    if (0xf < local_120) {
      ppppuVar16 = local_138[0];
    }
    FUN_18047e8f0(param_1,0,0);
    ppuVar18 = &PTR_s_checkbox_18059c2f0;
    puVar4 = PTR_s_checkbox_18059c2f0;
    while (puVar4 != (undefined *)0x0) {
      FUN_18047f530(param_1,ppppuVar16);
      FUN_18047f530(param_1,puVar20);
      FUN_18047f2b0(param_1,ppuVar18[1],2);
      FUN_18047f8e0(param_1,0xfffffffe,*ppuVar18);
      ppuVar18 = ppuVar18 + 2;
      puVar4 = *ppuVar18;
    }
    if (0xf < local_c0) {
      uVar17 = local_c0 + 1;
      lVar13 = CONCAT71(uStack_d7,local_d8);
      lVar21 = lVar13;
      if (0xfff < uVar17) {
        lVar21 = *(longlong *)(lVar13 + -8);
        if (0x1f < (lVar13 - lVar21) - 8U) {
          pcVar5 = (code *)swi(0x29);
          (*pcVar5)(5);
          puVar19 = auStack_170;
          goto LAB_180058246;
        }
        uVar17 = local_c0 + 0x28;
      }
      thunk_FUN_1803d64e0(lVar21,uVar17);
    }
    local_c8 = 0;
    local_c0 = 0xf;
    local_d8 = 0;
    FUN_18000f890(local_138);
    uVar11 = 1;
  }
  else {
    puVar14 = puVar1;
    if (0xf < uVar17) {
      puVar14 = (undefined8 *)*puVar1;
    }
    if ((lVar13 == 5) && (iVar9 = memcmp(puVar14,"legit",5), iVar9 == 0)) goto LAB_180057f13;
    puVar14 = puVar1;
    if (0xf < uVar17) {
      puVar14 = (undefined8 *)*puVar1;
    }
    if ((lVar13 == 7) && (iVar9 = memcmp(puVar14,"players",7), iVar9 == 0)) goto LAB_180057f13;
    puVar14 = puVar1;
    if (0xf < uVar17) {
      puVar14 = (undefined8 *)*puVar1;
    }
    if ((lVar13 == 5) && (iVar9 = memcmp(puVar14,"world",5), iVar9 == 0)) goto LAB_180057f13;
    puVar19 = auStack_178;
    if (uVar17 < 0x10) {
      puVar14 = puVar1;
    }
    else {
      puVar14 = (undefined8 *)*puVar1;
    }
    if (lVar13 == 4) {
      iVar9 = memcmp(puVar14,&DAT_1806e0088,4);
      puVar19 = auStack_178;
      if (iVar9 == 0) goto LAB_180057f13;
    }
LAB_180058246:
    uVar11 = 0;
  }
LAB_180058248:
  *(undefined8 *)(puVar19 + -8) = 0x180058254;
  return uVar11;
}



/* ===== 180058270 FUN_180058270 ===== */

void FUN_180058270(longlong param_1)

{
  FUN_18000f890(param_1 + 0x20);
  FUN_18000f890(param_1);
  return;
}



/* ===== 1800582a0 FUN_1800582a0 ===== */

void FUN_1800582a0(undefined8 param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_18047e2c0(param_1,1,"wl.menu_control");
  if ((*piVar1 < 0) || ((int)(DAT_180ccfa00 - DAT_180ccf9f8 >> 5) * -0x49249249 <= *piVar1)) {
    FUN_180484c10(param_1,"this menu control is gone");
  }
  FUN_180484c10(param_1,"chips can only be added to entity elements");
  return;
}



/* ===== 180058310 FUN_180058310 ===== */

void FUN_180058310(undefined8 param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_18047e2c0(param_1,1,"wl.menu_control");
  if ((*piVar1 < 0) || ((int)(DAT_180ccfa00 - DAT_180ccf9f8 >> 5) * -0x49249249 <= *piVar1)) {
    FUN_180484c10(param_1,"this menu control is gone");
  }
  FUN_180484c10(param_1,"option is not a color picker");
  return;
}



/* ===== 180058380 FUN_180058380 ===== */

undefined8 FUN_180058380(undefined8 param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_18047e2c0(param_1,1,"wl.menu_control");
  if ((*piVar1 < 0) || ((int)(DAT_180ccfa00 - DAT_180ccf9f8 >> 5) * -0x49249249 <= *piVar1)) {
    FUN_180484c10(param_1,"this menu control is gone");
  }
  FUN_18047f270(param_1,0);
  return 1;
}



/* ===== 1800583f0 FUN_1800583f0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1800583f0(undefined8 param_1)

{
  undefined8 *puVar1;
  size_t sVar2;
  undefined *puVar3;
  code *pcVar4;
  bool bVar5;
  byte bVar6;
  size_t sVar7;
  char cVar8;
  int iVar9;
  int *piVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 *******pppppppuVar13;
  longlong lVar14;
  undefined8 *puVar15;
  undefined **ppuVar16;
  undefined1 *puVar17;
  longlong lVar18;
  longlong lVar19;
  ulonglong uVar20;
  longlong lVar21;
  undefined1 *puVar22;
  undefined8 uVar23;
  undefined1 auStack_268 [8];
  undefined1 auStack_260 [24];
  longlong local_248;
  longlong lStack_240;
  longlong local_238;
  longlong *local_228;
  longlong local_220;
  longlong local_218;
  longlong *local_210;
  undefined8 *local_208;
  undefined8 *******local_200;
  undefined8 uStack_1f8;
  size_t local_1f0;
  ulonglong local_1e8;
  undefined8 *******local_1e0;
  undefined8 uStack_1d8;
  size_t local_1d0;
  ulonglong local_1c8;
  undefined1 local_1b8;
  undefined7 uStack_1b7;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined1 local_198;
  undefined7 uStack_197;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined1 local_178;
  undefined7 uStack_177;
  undefined8 local_168;
  ulonglong local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined1 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined2 local_80;
  undefined1 local_78 [32];
  ulonglong local_58;
  
  local_58 = DAT_180919500 ^ (ulonglong)auStack_268;
  uVar23 = 1;
  piVar10 = (int *)FUN_18047e2c0(param_1,1,"wl.menu_control");
  iVar9 = *piVar10;
  if ((iVar9 < 0) || ((int)(DAT_180ccfa00 - DAT_180ccf9f8 >> 5) * -0x49249249 <= iVar9)) {
    FUN_180484c10(param_1,"this menu control is gone");
  }
  puVar17 = auStack_268;
  lVar14 = *(longlong *)((longlong)iVar9 * 0xe0 + 8 + DAT_180ccf9f8);
  lVar18 = *(longlong *)((longlong)iVar9 * 0xe0 + DAT_180ccf9f8);
  if ((ulonglong)(lVar14 - lVar18) < 0x40) {
    return 0;
  }
  lVar14 = lVar14 + -0x20;
  local_248 = 0;
  lStack_240 = 0;
  local_238 = 0;
  lVar19 = lVar14 - lVar18;
  if (lVar19 != 0) {
    uVar20 = lVar19 >> 5;
    if (0x7ffffffffffffff < uVar20) goto LAB_1800589dc;
    lVar21 = uVar20 * 0x20;
    lVar19 = FUN_18000fb70(lVar21);
    local_238 = lVar19 + lVar21;
    local_228 = &local_248;
    local_210 = &local_248;
    local_248 = lVar19;
    lStack_240 = lVar19;
    local_220 = lVar19;
    for (; local_218 = lVar19, lVar18 != lVar14; lVar18 = lVar18 + 0x20) {
      FUN_180024b50(lVar19,lVar18);
      lVar19 = lVar19 + 0x20;
    }
    local_228 = (longlong *)0x0;
    lStack_240 = lVar19;
    local_220 = lVar19;
  }
  local_158 = 0;
  uStack_150 = 0;
  local_148 = 0;
  local_140 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_128 = 0;
  local_120 = 0;
  uStack_110 = 0;
  local_108 = 0;
  local_100 = 0xf;
  local_118 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  uStack_b8 = 0;
  local_b0 = 0;
  local_a8 = 0xf;
  local_c0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  local_88 = 0xf;
  local_a0 = 0;
  local_80 = 0;
  cVar8 = FUN_18033c960(&local_248,&local_158);
  if (cVar8 != '\0') {
    FUN_180055130(param_1,&local_158);
    goto LAB_180058956;
  }
  uStack_1d8 = 0;
  local_1d0 = 0;
  local_1c8 = 0xf;
  local_1e0 = (undefined8 *******)0x0;
  uStack_1f8 = 0;
  local_1f0 = 0;
  local_1e8 = 0xf;
  local_200 = (undefined8 *******)0x0;
  cVar8 = FUN_18033d070(&local_248,&local_1e0,&local_200);
  if (cVar8 == '\0') {
    uVar23 = 0;
  }
  else {
    FUN_18047eb70(param_1,0xffffd8f0,"wl_state");
    lVar14 = FUN_18047fd90(param_1,0xffffffff);
    FUN_18047fb50(param_1,0xfffffffe);
    sVar7 = local_1d0;
    lVar14 = *(longlong *)(lVar14 + 0xa0);
    bVar5 = false;
    puVar1 = *(undefined8 **)(lVar14 + 0x58);
    puVar15 = *(undefined8 **)(lVar14 + 0x50);
    if (puVar15 == puVar1) {
LAB_18005876b:
      FUN_180024b50(&local_1b8,&local_1e0);
      FUN_180024b50(&local_198,&local_200);
      puVar1 = *(undefined8 **)(lVar14 + 0x58);
      if (puVar1 == *(undefined8 **)(lVar14 + 0x60)) {
        FUN_18006a540(lVar14 + 0x50,puVar1,&local_1b8);
      }
      else {
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1[2] = 0;
        puVar1[3] = 0;
        *puVar1 = CONCAT71(uStack_1b7,local_1b8);
        puVar1[1] = local_1b0;
        puVar1[2] = local_1a8;
        puVar1[3] = local_1a0;
        local_1a8 = 0;
        local_1a0 = 0xf;
        local_1b8 = 0;
        puVar1[4] = 0;
        puVar1[5] = 0;
        puVar1[6] = 0;
        puVar1[7] = 0;
        puVar1[4] = CONCAT71(uStack_197,local_198);
        puVar1[5] = local_190;
        puVar1[6] = local_188;
        puVar1[7] = local_180;
        local_188 = 0;
        local_180 = 0xf;
        local_198 = 0;
        *(longlong *)(lVar14 + 0x58) = *(longlong *)(lVar14 + 0x58) + 0x40;
        local_208 = puVar1;
      }
      FUN_18000f890(&local_198);
      FUN_18000f890(&local_1b8);
    }
    else {
      do {
        pppppppuVar13 = &local_1e0;
        if (0xf < local_1c8) {
          pppppppuVar13 = local_1e0;
        }
        sVar2 = puVar15[2];
        if ((ulonglong)puVar15[3] < 0x10) {
          puVar12 = puVar15;
        }
        else {
          puVar12 = (undefined8 *)*puVar15;
        }
        if ((sVar2 == sVar7) &&
           ((sVar2 == 0 || (iVar9 = memcmp(puVar12,pppppppuVar13,sVar2), iVar9 == 0)))) {
          puVar12 = puVar15 + 4;
          pppppppuVar13 = &local_200;
          if (0xf < local_1e8) {
            pppppppuVar13 = local_200;
          }
          sVar2 = puVar15[6];
          if (0xf < (ulonglong)puVar15[7]) {
            puVar12 = (undefined8 *)*puVar12;
          }
          if ((sVar2 != local_1f0) ||
             ((sVar2 != 0 && (iVar9 = memcmp(puVar12,pppppppuVar13,sVar2), iVar9 != 0))))
          goto LAB_180058750;
          bVar6 = 1;
        }
        else {
LAB_180058750:
          bVar6 = 0;
        }
        bVar5 = (bool)(bVar5 | bVar6);
        puVar15 = puVar15 + 8;
      } while (puVar15 != puVar1);
      if (!bVar5) goto LAB_18005876b;
    }
    uVar11 = FUN_180013350(local_78,&DAT_1806dfae0);
    FUN_1800667a0(&local_178,uVar11,&local_1e0);
    FUN_18000f890(local_78);
    puVar22 = &local_178;
    if (0xf < local_160) {
      puVar22 = (undefined1 *)CONCAT71(uStack_177,local_178);
    }
    pppppppuVar13 = &local_200;
    if (0xf < local_1e8) {
      pppppppuVar13 = local_200;
    }
    FUN_18047e8f0(param_1,0,0);
    ppuVar16 = &PTR_s_checkbox_18059c2f0;
    puVar3 = PTR_s_checkbox_18059c2f0;
    while (puVar3 != (undefined *)0x0) {
      FUN_18047f530(param_1,pppppppuVar13);
      FUN_18047f530(param_1,puVar22);
      FUN_18047f2b0(param_1,ppuVar16[1],2);
      FUN_18047f8e0(param_1,0xfffffffe,*ppuVar16);
      ppuVar16 = ppuVar16 + 2;
      puVar3 = *ppuVar16;
    }
    if (0xf < local_160) {
      uVar20 = local_160 + 1;
      lVar18 = CONCAT71(uStack_177,local_178);
      lVar14 = lVar18;
      if (0xfff < uVar20) {
        lVar14 = *(longlong *)(lVar18 + -8);
        if (0x1f < (lVar18 - lVar14) - 8U) {
          pcVar4 = (code *)swi(0x29);
          (*pcVar4)(5);
          puVar17 = auStack_260;
LAB_1800589dc:
                    /* WARNING: Subroutine does not return */
          *(undefined **)(puVar17 + -8) = &UNK_1800589e1;
          FUN_1800118d0();
        }
        uVar20 = local_160 + 0x28;
      }
      thunk_FUN_1803d64e0(lVar14,uVar20);
    }
    local_168 = 0;
    local_160 = 0xf;
    local_178 = 0;
  }
  FUN_18000f890(&local_200);
  FUN_18000f890(&local_1e0);
LAB_180058956:
  FUN_18000f890(&local_a0);
  FUN_18000f890(&local_c0);
  FUN_180068f30(&local_d8);
  FUN_1800288b0(&local_f0);
  FUN_18000f890(&local_118);
  FUN_1800288b0(&local_140);
  FUN_1800288b0(&local_158);
  FUN_1800288b0(&local_248);
  return uVar23;
}



/* ===== 1800589f0 FUN_1800589f0 ===== */

void FUN_1800589f0(longlong param_1)

{
  FUN_18000f890(param_1 + 0xb8);
  FUN_18000f890(param_1 + 0x98);
  FUN_180068f30(param_1 + 0x80);
  FUN_1800288b0(param_1 + 0x68);
  FUN_18000f890(param_1 + 0x40);
  FUN_1800288b0(param_1 + 0x18);
  FUN_1800288b0(param_1);
  return;
}



/* ===== 180058a50 FUN_180058a50 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_180058a50(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  size_t sVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  float local_48;
  undefined4 local_44;
  undefined8 *local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_68;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  local_44 = 1;
  lVar1 = *(longlong *)(param_2 + 0x20);
  local_40 = param_1;
  for (lVar3 = *(longlong *)(param_2 + 0x18); lVar3 != lVar1; lVar3 = lVar3 + 0x20) {
    local_48 = 0.0;
    FUN_1800553d0(lVar3,&local_48);
    local_38 = 0;
    uStack_30 = 0;
    local_28 = 0;
    uStack_20 = 0;
    snprintf(&local_38,0x20,&DAT_1806e00e0,(double)local_48);
    sVar2 = strlen((char *)&local_38);
    FUN_1800134a0(param_1,&local_38,sVar2);
  }
  return param_1;
}



/* ===== 180058b40 FUN_180058b40 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_180058b40(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  int *local_58;
  int local_50;
  int local_4c;
  undefined1 local_48;
  undefined7 uStack_47;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_78;
  piVar3 = (int *)FUN_18047e2c0(param_1,1,"wl.menu_control");
  iVar1 = *piVar3;
  if ((iVar1 < 0) || ((int)(DAT_180ccfa00 - DAT_180ccf9f8 >> 5) * -0x49249249 <= iVar1)) {
    FUN_180484c10(param_1,"this menu control is gone");
  }
  lVar5 = (longlong)iVar1 * 0xe0 + DAT_180ccf9f8;
  FUN_18047e240(param_1,2,6);
  FUN_18047f610(param_1,2);
  iVar2 = FUN_1804851b0(param_1,0xffffd8f0);
  FUN_18047eb70(param_1,0xffffd8f0,"wl_state");
  lVar4 = FUN_18047fd90(param_1,0xffffffff);
  FUN_18047fb50(param_1,0xfffffffe);
  local_50 = iVar1;
  local_4c = iVar2;
  FUN_180058a50(&local_48,lVar5);
  piVar3 = *(int **)(lVar4 + 0x1b8);
  if (piVar3 == *(int **)(lVar4 + 0x1c0)) {
    FUN_18006a780(lVar4 + 0x1b0,piVar3,&local_50);
  }
  else {
    *piVar3 = local_50;
    piVar3[1] = local_4c;
    piVar3[2] = 0;
    piVar3[3] = 0;
    piVar3[4] = 0;
    piVar3[5] = 0;
    piVar3[6] = 0;
    piVar3[7] = 0;
    piVar3[8] = 0;
    piVar3[9] = 0;
    *(ulonglong *)(piVar3 + 2) = CONCAT71(uStack_47,local_48);
    *(undefined8 *)(piVar3 + 4) = local_40;
    *(undefined8 *)(piVar3 + 6) = local_38;
    *(undefined8 *)(piVar3 + 8) = uStack_30;
    local_38 = _DAT_1808ad410;
    uStack_30 = _UNK_1808ad418;
    local_48 = 0;
    *(longlong *)(lVar4 + 0x1b8) = *(longlong *)(lVar4 + 0x1b8) + 0x28;
    local_58 = piVar3;
  }
  FUN_18000f890(&local_48);
  FUN_18047f610(param_1,1);
  return 1;
}



/* ===== 180058d00 FUN_180058d00 ===== */

void FUN_180058d00(longlong param_1)

{
  FUN_18000f890(param_1 + 8);
  return;
}



/* ===== 180058d20 FUN_180058d20 ===== */

undefined8 FUN_180058d20(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  longlong lVar8;
  
  piVar7 = (int *)FUN_18047e2c0(param_1,1,"wl.menu_control");
  iVar1 = *piVar7;
  if ((iVar1 < 0) || ((int)(DAT_180ccfa00 - DAT_180ccf9f8 >> 5) * -0x49249249 <= iVar1)) {
    FUN_180484c10(param_1,"this menu control is gone");
  }
  FUN_18047e240(param_1,2,6);
  FUN_18047eb70(param_1,0xffffd8f0,"wl_state");
  lVar8 = FUN_18047fd90(param_1,0xffffffff);
  FUN_18047fb50(param_1,0xfffffffe);
  piVar7 = *(int **)(lVar8 + 0x1b0);
  if (piVar7 != *(int **)(lVar8 + 0x1b8)) {
    do {
      FUN_18047f6f0(param_1,0xffffd8f0,piVar7[1]);
      if ((*piVar7 == iVar1) && (iVar6 = FUN_18047f650(param_1,0xffffffff,2), iVar6 != 0)) {
        FUN_18047fb50(param_1,0xfffffffe);
        FUN_180485280(param_1,0xffffd8f0,piVar7[1]);
        piVar2 = *(int **)(lVar8 + 0x1b8);
        piVar4 = piVar7;
        piVar5 = piVar7;
        while (piVar3 = piVar5 + 10, piVar3 != piVar2) {
          *piVar4 = *piVar3;
          piVar4[1] = piVar5[0xb];
          FUN_18002ba60(piVar4 + 2,piVar5 + 0xc);
          piVar4 = piVar4 + 10;
          piVar5 = piVar3;
        }
        FUN_18000f890(*(longlong *)(lVar8 + 0x1b8) + -0x20);
        *(longlong *)(lVar8 + 0x1b8) = *(longlong *)(lVar8 + 0x1b8) + -0x28;
      }
      else {
        FUN_18047fb50(param_1,0xfffffffe);
        piVar7 = piVar7 + 10;
      }
    } while (piVar7 != *(int **)(lVar8 + 0x1b8));
  }
  FUN_18047f610(param_1,1);
  return 1;
}



/* ===== 180058ee0 FUN_180058ee0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180058ee0(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined1 auStack_58 [32];
  undefined1 local_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_58;
  piVar2 = (int *)FUN_18047e2c0(param_1,1,"wl.menu_control");
  iVar1 = *piVar2;
  if ((iVar1 < 0) || ((int)(DAT_180ccfa00 - DAT_180ccf9f8 >> 5) * -0x49249249 <= iVar1)) {
    FUN_180484c10(param_1,"this menu control is gone");
  }
  puVar3 = (undefined8 *)FUN_18033c940(local_38,(longlong)iVar1 * 0xe0 + DAT_180ccf9f8);
  if (0xf < (ulonglong)puVar3[3]) {
    puVar3 = (undefined8 *)*puVar3;
  }
  FUN_18047f530(param_1,puVar3);
  FUN_18000f890(local_38);
  return 1;
}



/* ===== 180058fb0 FUN_180058fb0 ===== */

undefined8 FUN_180058fb0(undefined8 param_1)

{
  int *piVar1;
  int *piVar2;
  undefined8 uVar3;
  
  piVar1 = (int *)FUN_18047e680(param_1,1,"wl.menu_control");
  piVar2 = (int *)FUN_18047e680(param_1,2,"wl.menu_control");
  if (((piVar1 == (int *)0x0) || (piVar2 == (int *)0x0)) || (*piVar1 != *piVar2)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  FUN_18047f270(param_1,uVar3);
  return 1;
}



/* ===== 180059020 FUN_180059020 ===== */

undefined8 FUN_180059020(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = FUN_18047fe10(param_1,1);
  if (iVar1 == 5) {
    FUN_18047f880(param_1,1);
  }
  iVar1 = FUN_18047fe10(param_1,1);
  if (0 < iVar1) {
    iVar1 = FUN_18047fbf0(param_1,1);
    DAT_180cd048e = iVar1 != 0;
  }
  FUN_18047f270(param_1,DAT_180cd048e);
  return 1;
}



/* ===== 180059090 FUN_180059090 ===== */

void FUN_180059090(undefined8 param_1,uint param_2)

{
  float fVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  float fVar5;
  float local_28 [8];
  
  if (param_2 < 0x2e) {
    uVar3 = (&DAT_180960ec0)[(int)param_2];
    local_28[1] = (float)(uVar3 >> 8 & 0xff) * DAT_1808abfe4;
    local_28[2] = (float)(uVar3 >> 0x10 & 0xff) * DAT_1808abfe4;
    local_28[3] = (float)(uVar3 >> 0x18) * DAT_1808abfe4;
    local_28[0] = (float)(uVar3 & 0xff) * DAT_1808abfe4;
  }
  else {
    local_28[1] = DAT_1808ac34c;
    local_28[2] = DAT_1808ac34c;
    local_28[3] = DAT_1808ac34c;
    local_28[0] = DAT_1808ac34c;
  }
  FUN_18047eb70(param_1,0xffffd8f0,"wl_state");
  lVar2 = FUN_18047fd90(param_1,0xffffffff);
  FUN_18047fb50(param_1,0xfffffffe);
  FUN_18047f6f0(param_1,0xffffd8f0,*(undefined4 *)(lVar2 + 0x144));
  fVar1 = DAT_1808acb94;
  uVar4 = 0;
  do {
    fVar5 = (float)FUN_18053fc00(local_28[uVar4] * fVar1);
    FUN_18047f4f0(param_1,(double)fVar5);
    uVar3 = (int)uVar4 + 1;
    uVar4 = (ulonglong)uVar3;
  } while ((int)uVar3 < 4);
  FUN_18047e730(param_1,4,1);
  return;
}



/* ===== 1800591d0 FUN_1800591d0 ===== */

undefined8 FUN_1800591d0(undefined8 param_1)

{
  FUN_18047f4f0(param_1,(double)DAT_1811074e8);
  return 1;
}



/* ===== 1800591f0 FUN_1800591f0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_1800591f0(undefined8 param_1)

{
  double dVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  ushort ****ppppuVar5;
  int *piVar6;
  int *piVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_78 [32];
  int local_58 [2];
  ushort ****local_50 [2];
  longlong local_40;
  ulonglong local_38;
  ulonglong local_30;
  
  local_30 = DAT_180919500 ^ (ulonglong)auStack_78;
  uVar3 = 1;
  iVar2 = FUN_18047fe10(param_1,1);
  if (iVar2 == 5) {
    FUN_18047f880(param_1,1);
  }
  iVar2 = FUN_18047fe10(param_1,2);
  fVar8 = DAT_1808ac34c;
  if (iVar2 < 1) {
    fVar9 = DAT_1808ac34c;
  }
  else {
    dVar1 = (double)FUN_18047e140(param_1,2);
    fVar9 = (float)dVar1;
  }
  iVar2 = FUN_18047fe10(param_1,1);
  if (iVar2 < 1) {
    fVar8 = (float)FUN_18033c790();
    FUN_18047f4f0(param_1,(double)(fVar8 * fVar9));
    return 1;
  }
  uVar4 = FUN_18047e090(param_1,1,0);
  FUN_180013350(local_50,uVar4);
  ppppuVar5 = (ushort ****)local_50;
  if (0xf < local_38) {
    ppppuVar5 = local_50[0];
  }
  if ((local_40 == 4) && (*(int *)ppppuVar5 == 0x756e656d)) {
    fVar8 = (float)FUN_18033c790();
  }
  else {
    ppppuVar5 = (ushort ****)local_50;
    if (0xf < local_38) {
      ppppuVar5 = local_50[0];
    }
    if (local_40 != 3) {
LAB_18005933b:
      ppppuVar5 = (ushort ****)local_50;
      if (0xf < local_38) {
        ppppuVar5 = local_50[0];
      }
      if (local_40 == 7) {
        iVar2 = *(int *)ppppuVar5 + -0x646e6977;
        if ((iVar2 == 0) && (iVar2 = *(ushort *)((longlong)ppppuVar5 + 4) - 0x776f, iVar2 == 0)) {
          iVar2 = *(byte *)((longlong)ppppuVar5 + 6) - 0x73;
        }
        if (iVar2 == 0) {
          local_58[1] = 0xfa;
          local_58[0] = 0x4b;
          piVar7 = local_58;
          if (0x4a < DAT_18091a1ac) {
            piVar7 = &DAT_18091a1ac;
          }
          piVar6 = local_58 + 1;
          if (DAT_18091a1ac < 0xfb) {
            piVar6 = piVar7;
          }
          iVar2 = *piVar6;
          goto LAB_1800593ac;
        }
      }
      ppppuVar5 = (ushort ****)local_50;
      if (0xf < local_38) {
        ppppuVar5 = local_50[0];
      }
      uVar3 = FUN_180484c10(param_1,"invalid option \'%s\'",ppppuVar5);
      goto LAB_1800593ea;
    }
    iVar2 = *(ushort *)ppppuVar5 - 0x7365;
    if (iVar2 == 0) {
      iVar2 = *(byte *)((longlong)ppppuVar5 + 2) - 0x70;
    }
    if (iVar2 != 0) goto LAB_18005933b;
    if (DAT_18091a1b4 < 1) goto LAB_1800593b7;
    if (DAT_18091a1b4 < 100) {
      iVar2 = 100;
    }
    else {
      iVar2 = DAT_18091a1b4;
      if (200 < DAT_18091a1b4) {
        iVar2 = 200;
      }
    }
LAB_1800593ac:
    fVar8 = (float)iVar2 / DAT_1808acb08;
  }
LAB_1800593b7:
  FUN_18047f4f0(param_1,(double)(fVar8 * fVar9));
LAB_1800593ea:
  FUN_18000f890(local_50);
  return uVar3;
}



/* ===== 180059420 FUN_180059420 ===== */

undefined8 FUN_180059420(undefined8 param_1,char param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  
  if (DAT_180cd0f04 == '\0') {
    FUN_18047f4d0();
    return 1;
  }
  if (param_2 == '\0') {
    fVar3 = DAT_181107294;
    fVar4 = DAT_18110735c;
  }
  else {
    fVar3 = DAT_181107494;
    fVar4 = DAT_1811073a8;
  }
  FUN_18047eb70(param_1,0xffffd8f0,"wl_state");
  lVar2 = FUN_18047fd90(param_1,0xffffffff);
  FUN_18047fb50(param_1,0xfffffffe);
  uVar1 = *(undefined8 *)(lVar2 + 0x40);
  FUN_18047f6f0(uVar1,0xffffd8f0,*(undefined4 *)(lVar2 + 0x140));
  FUN_18047f4f0(uVar1,(double)fVar3);
  FUN_18047f4f0(uVar1,(double)fVar4);
  FUN_18047f4f0(uVar1,0);
  FUN_18047e730(uVar1,3,1);
  return 1;
}



/* ===== 180059540 FUN_180059540 ===== */

undefined8 FUN_180059540(undefined8 param_1)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  if (DAT_180ca0a50 == 0) {
    FUN_18047eb70(param_1,0xffffd8f0,"wl_state");
    lVar4 = FUN_18047fd90(param_1,0xffffffff);
    FUN_18047fb50(param_1,0xfffffffe);
    uVar3 = *(undefined8 *)(lVar4 + 0x40);
    FUN_18047f6f0(uVar3,0xffffd8f0,*(undefined4 *)(lVar4 + 0x140));
    FUN_18047f4f0(uVar3,0);
    FUN_18047f4f0(uVar3,0);
    FUN_18047f4f0(uVar3,0);
    FUN_18047e730(uVar3,3,1);
    return 1;
  }
  fVar1 = *(float *)(DAT_180ca0a50 + 0x110);
  fVar2 = *(float *)(DAT_180ca0a50 + 0x114);
  FUN_18047eb70(param_1,0xffffd8f0,"wl_state");
  lVar4 = FUN_18047fd90(param_1,0xffffffff);
  FUN_18047fb50(param_1,0xfffffffe);
  uVar3 = *(undefined8 *)(lVar4 + 0x40);
  FUN_18047f6f0(uVar3,0xffffd8f0,*(undefined4 *)(lVar4 + 0x140));
  FUN_18047f4f0(uVar3,(double)fVar1);
  FUN_18047f4f0(uVar3,(double)fVar2);
  FUN_18047f4f0(uVar3,0);
  FUN_18047e730(uVar3,3,1);
  return 1;
}



/* ===== 180059690 FUN_180059690 ===== */

undefined8 FUN_180059690(undefined8 param_1)

{
  int iVar1;
  char *_Str2;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = FUN_18047fe10(param_1,1);
  if (iVar1 == 5) {
    FUN_18047f880(param_1,1);
  }
  iVar1 = FUN_18047fe10(param_1,1);
  if (0 < iVar1) {
    _Str2 = (char *)FUN_18047e090(param_1,1,0);
    uVar3 = 0;
    while( true ) {
      if ((*(&PTR_DAT_18059c170)[uVar3] != '\0') &&
         (iVar1 = strcmp((&PTR_DAT_18059c170)[uVar3],_Str2), iVar1 == 0)) break;
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
      if (0x2d < (int)uVar2) {
        return 0;
      }
    }
    FUN_180059090(param_1,uVar3);
    return 1;
  }
  FUN_18047e8f0(param_1,0,0x2b);
  uVar3 = 0;
  do {
    if (*(&PTR_DAT_18059c170)[uVar3] != '\0') {
      FUN_18047f530(param_1);
      FUN_180059090(param_1,uVar3);
      FUN_18047fae0(param_1,0xfffffffd);
    }
    uVar2 = (int)uVar3 + 1;
    uVar3 = (ulonglong)uVar2;
  } while ((int)uVar2 < 0x2e);
  return 1;
}



/* ===== 1800597a0 FUN_1800597a0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1800597a0(undefined8 param_1)

{
  size_t sVar1;
  undefined8 *puVar2;
  bool bVar3;
  undefined8 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 *_Buf1;
  undefined8 *puVar9;
  undefined8 *******pppppppuVar10;
  undefined8 *puVar11;
  undefined1 auStack_148 [32];
  undefined *local_128;
  undefined8 *local_120;
  undefined1 local_118;
  undefined8 local_117;
  undefined4 local_10f;
  undefined2 local_10b;
  undefined1 local_109;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined1 local_f8;
  undefined7 uStack_f7;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined1 local_d8;
  undefined7 uStack_d7;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 *******local_b8 [2];
  undefined8 local_a8;
  ulonglong local_a0;
  undefined8 *******local_98 [2];
  size_t local_88;
  ulonglong local_80;
  undefined8 *******local_78 [2];
  size_t local_68;
  ulonglong local_60;
  ulonglong local_58;
  
  local_58 = DAT_180919500 ^ (ulonglong)auStack_148;
  iVar5 = FUN_18047fe10(param_1,1);
  if (iVar5 == 5) {
    FUN_18047f880(param_1,1);
  }
  uVar7 = FUN_18047e090(param_1,1,0);
  FUN_180013350(local_98,uVar7);
  uVar7 = FUN_18047e090(param_1,2,0);
  FUN_180013350(local_78,uVar7);
  uVar7 = FUN_18047e090(param_1,3,0);
  FUN_180013350(local_b8,uVar7);
  if (local_88 != 0) {
    puVar11 = DAT_1811078d0;
    puVar2 = DAT_1811078d8;
    if (DAT_180cd0fa6 == '\0') {
      DAT_180cd0fa6 = '\x01';
      FUN_18035be50();
      FUN_18035dd90();
      puVar11 = DAT_1811078d0;
      puVar2 = DAT_1811078d8;
    }
    for (; puVar9 = DAT_1811078d8, bVar3 = puVar11 != DAT_1811078d8, DAT_1811078d8 = puVar2, bVar3;
        puVar11 = puVar11 + 0x11) {
      pppppppuVar10 = local_98;
      if (0xf < local_80) {
        pppppppuVar10 = local_98[0];
      }
      sVar1 = puVar11[2];
      if ((ulonglong)puVar11[3] < 0x10) {
        _Buf1 = puVar11;
      }
      else {
        _Buf1 = (undefined8 *)*puVar11;
      }
      if ((sVar1 == local_88) &&
         ((sVar1 == 0 || (iVar5 = memcmp(_Buf1,pppppppuVar10,sVar1), iVar5 == 0)))) {
        local_128 = &DAT_1809e8e50;
        iVar5 = FUN_1804e4d70(&DAT_1809e8e50);
        if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1804e4a90(5);
        }
        if (DAT_1809e8e9c == 0x7fffffff) {
          DAT_1809e8e9c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
          FUN_1804e4a90(6);
        }
        FUN_18047eb70(param_1,0xffffd8f0,"wl_state");
        lVar8 = FUN_18047fd90(param_1,0xffffffff);
        FUN_18047fb50(param_1,0xfffffffe);
        lVar8 = *(longlong *)(lVar8 + 0xa0);
        puVar11 = *(undefined8 **)(lVar8 + 0xf0);
        puVar2 = *(undefined8 **)(lVar8 + 0xf8);
        goto joined_r0x000180059987;
      }
      puVar2 = DAT_1811078d8;
      DAT_1811078d8 = puVar9;
    }
  }
  uVar6 = FUN_180484c10(param_1,"invalid language");
  goto LAB_1800598cf;
joined_r0x000180059987:
  if (puVar11 == puVar2) goto LAB_180059a1d;
  pppppppuVar10 = local_98;
  if (0xf < local_80) {
    pppppppuVar10 = local_98[0];
  }
  sVar1 = puVar11[2];
  if ((ulonglong)puVar11[3] < 0x10) {
    puVar9 = puVar11;
  }
  else {
    puVar9 = (undefined8 *)*puVar11;
  }
  if ((sVar1 == local_88) &&
     ((sVar1 == 0 || (iVar5 = memcmp(puVar9,pppppppuVar10,sVar1), iVar5 == 0)))) {
    puVar9 = puVar11 + 4;
    pppppppuVar10 = local_78;
    if (0xf < local_60) {
      pppppppuVar10 = local_78[0];
    }
    sVar1 = puVar11[6];
    if (0xf < (ulonglong)puVar11[7]) {
      puVar9 = (undefined8 *)*puVar9;
    }
    if ((sVar1 == local_68) &&
       ((sVar1 == 0 || (iVar5 = memcmp(puVar9,pppppppuVar10,sVar1), iVar5 == 0)))) {
      if ((undefined8 ********)(puVar11 + 8) != local_b8) {
        pppppppuVar10 = local_b8;
        if (0xf < local_a0) {
          pppppppuVar10 = local_b8[0];
        }
        FUN_180029840(puVar11 + 8,pppppppuVar10,local_a8);
      }
      goto LAB_180059b94;
    }
  }
  puVar11 = puVar11 + 0xc;
  goto joined_r0x000180059987;
LAB_180059a1d:
  FUN_180024b50(&local_118,local_98);
  FUN_180024b50(&local_f8,local_78);
  FUN_180024b50(&local_d8,local_b8);
  puVar11 = *(undefined8 **)(lVar8 + 0xf8);
  if (puVar11 == *(undefined8 **)(lVar8 + 0x100)) {
    FUN_18006b010(lVar8 + 0xf0,puVar11,&local_118);
  }
  else {
    *puVar11 = 0;
    puVar11[1] = 0;
    puVar11[2] = 0;
    puVar11[3] = 0;
    *(undefined1 *)puVar11 = local_118;
    *(undefined8 *)((longlong)puVar11 + 1) = local_117;
    *(undefined4 *)((longlong)puVar11 + 9) = local_10f;
    *(undefined2 *)((longlong)puVar11 + 0xd) = local_10b;
    *(undefined1 *)((longlong)puVar11 + 0xf) = local_109;
    puVar11[2] = local_108;
    puVar11[3] = uStack_100;
    uVar4 = _UNK_1808ad418;
    uVar7 = _DAT_1808ad410;
    local_108 = _DAT_1808ad410;
    uStack_100 = _UNK_1808ad418;
    local_118 = 0;
    puVar11[4] = 0;
    puVar11[5] = 0;
    puVar11[6] = 0;
    puVar11[7] = 0;
    puVar11[4] = CONCAT71(uStack_f7,local_f8);
    puVar11[5] = local_f0;
    puVar11[6] = local_e8;
    puVar11[7] = uStack_e0;
    local_e8 = uVar7;
    uStack_e0 = uVar4;
    local_f8 = 0;
    puVar11[8] = 0;
    puVar11[9] = 0;
    puVar11[10] = 0;
    puVar11[0xb] = 0;
    puVar11[8] = CONCAT71(uStack_d7,local_d8);
    puVar11[9] = local_d0;
    puVar11[10] = local_c8;
    puVar11[0xb] = uStack_c0;
    local_c8 = uVar7;
    uStack_c0 = uVar4;
    local_d8 = 0;
    *(longlong *)(lVar8 + 0xf8) = *(longlong *)(lVar8 + 0xf8) + 0x60;
    local_120 = puVar11;
  }
  FUN_18000f890(&local_d8);
  FUN_18000f890(&local_f8);
  FUN_18000f890(&local_118);
LAB_180059b94:
  FUN_1804e4e90(&DAT_1809e8e50);
  uVar6 = 0;
LAB_1800598cf:
  FUN_18000f890(local_b8);
  FUN_18000f890(local_78);
  FUN_18000f890(local_98);
  return uVar6;
}



/* ===== 180059bd0 FUN_180059bd0 ===== */

void FUN_180059bd0(longlong param_1)

{
  FUN_18000f890(param_1 + 0x40);
  FUN_18000f890(param_1 + 0x20);
  FUN_18000f890(param_1);
  return;
}



/* ===== 180059c00 FUN_180059c00 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_180059c00(undefined8 param_1)

{
  bool bVar1;
  int iVar2;
  undefined *puVar3;
  char *pcVar4;
  double dVar5;
  float fVar6;
  int local_res10 [2];
  
  iVar2 = FUN_18047fe10(param_1,1);
  if (iVar2 == 5) {
    FUN_18047f880(param_1,1);
  }
  if (DAT_18091a1b8 == 2) {
LAB_180059c8c:
    bVar1 = true;
  }
  else {
    if (DAT_18091a1b8 != 1) {
      if (DAT_180c9a700 < 0) {
        local_res10[0] = 0;
        iVar2 = GetLocaleInfoEx((LPCWSTR)0x0,0x2000000d,(LPWSTR)local_res10,2);
        if ((iVar2 < 1) || (local_res10[0] != 1)) {
          DAT_180c9a700 = 0;
        }
        else {
          DAT_180c9a700 = 1;
        }
      }
      if (DAT_180c9a700 == 1) goto LAB_180059c8c;
    }
    bVar1 = false;
  }
  pcVar4 = "metric";
  if (bVar1) {
    pcVar4 = "imperial";
  }
  iVar2 = FUN_18047fe10(param_1,1);
  if (iVar2 < 1) {
    FUN_18047f530(param_1,pcVar4);
    return 1;
  }
  dVar5 = (double)FUN_18047e140(param_1,1);
  if (bVar1) {
    fVar6 = (float)dVar5 / DAT_1808ac8b0;
  }
  else {
    fVar6 = (float)dVar5 * _DAT_1808ac034;
  }
  FUN_18047f4f0(param_1,(double)fVar6);
  puVar3 = &DAT_1806e0448;
  if (bVar1) {
    puVar3 = &DAT_1806e0444;
  }
  FUN_18047f530(param_1,puVar3);
  FUN_18047f530(param_1,pcVar4);
  return 3;
}



/* ===== 180059d50 FUN_180059d50 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180059d50(undefined8 param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 *****pppppuVar4;
  longlong lVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined1 auStack_88 [32];
  undefined1 local_68 [8];
  undefined1 local_60 [16];
  undefined8 *****local_50 [2];
  ulonglong local_40;
  ulonglong local_38;
  ulonglong local_30;
  
  local_30 = DAT_180919500 ^ (ulonglong)auStack_88;
  FUN_180013350();
  if (DAT_180cc3e19 == '\0') {
    DAT_180cc3e19 = '\x01';
    FUN_1800ff4a0(local_68,&DAT_18091a190);
  }
  pppppuVar4 = local_50;
  if (0xf < local_38) {
    pppppuVar4 = local_50[0];
  }
  uVar3 = 0;
  uVar7 = 0xcbf29ce484222325;
  if (local_40 != 0) {
    do {
      uVar7 = (uVar7 ^ *(byte *)(uVar3 + (longlong)pppppuVar4)) * 0x100000001b3;
      uVar3 = uVar3 + 1;
    } while (uVar3 < local_40);
  }
  lVar2 = FUN_18014a630(uVar3,local_60,local_50,uVar7);
  lVar5 = DAT_180cd12c8;
  if (*(longlong *)(lVar2 + 8) != 0) {
    lVar5 = *(longlong *)(lVar2 + 8);
  }
  if (lVar5 == DAT_180cd12c8) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(lVar5 + 0x38);
  }
  FUN_18000f890(local_50);
  if (param_3 == 0) {
    if (iVar1 == 1) {
      FUN_18047f270(param_1,*(undefined1 *)(param_2 + 0x68));
    }
    else if (iVar1 == 2) {
      iVar1 = FUN_1804f3280(*(undefined4 *)(param_2 + 0x6c));
      FUN_18047f3d0(param_1,(longlong)iVar1);
    }
    else if (iVar1 == 3) {
      FUN_18047f4f0(param_1,(double)*(float *)(param_2 + 0x6c));
    }
    else {
      FUN_18047f530(param_1,param_2 + 0xa0);
    }
  }
  else if (*(int *)(param_3 + 0x30) == 4) {
    FUN_18047e8f0(param_1,0,0);
    uVar3 = FUN_18050fd80(*(undefined4 *)(param_2 + 0x6c));
    lVar5 = *(longlong *)(param_3 + 0x68);
    if (*(longlong *)(param_3 + 0x70) - lVar5 >> 5 != 0) {
      uVar7 = 0;
      iVar1 = 1;
      do {
        if (0x3f < uVar7) {
          return;
        }
        if ((uVar3 >> (uVar7 & 0x3f) & 1) != 0) {
          puVar6 = (undefined8 *)(lVar5 + uVar7 * 0x20);
          if (0xf < (ulonglong)puVar6[3]) {
            puVar6 = (undefined8 *)*puVar6;
          }
          FUN_18047f530(param_1,puVar6);
          FUN_18047f7e0(param_1,0xfffffffe,iVar1);
          iVar1 = iVar1 + 1;
        }
        uVar7 = uVar7 + 1;
        lVar5 = *(longlong *)(param_3 + 0x68);
      } while (uVar7 < (ulonglong)(*(longlong *)(param_3 + 0x70) - lVar5 >> 5));
    }
  }
  else if (*(int *)(param_3 + 0x30) == 1) {
    FUN_18047f270(param_1,*(undefined1 *)(param_2 + 0x68));
  }
  else {
    FUN_180055830(param_1,param_3,*(undefined4 *)(param_2 + 0x6c));
  }
  return;
}



/* ===== 180059f50 FUN_180059f50 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_180059f50(undefined8 param_1)

{
  float fVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  char cVar7;
  longlong ****pppplVar8;
  ulonglong uVar9;
  char *pcVar10;
  longlong *plVar11;
  undefined1 auStack_198 [32];
  longlong ****local_178 [3];
  ulonglong local_160;
  longlong local_158;
  longlong lStack_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  char local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined2 local_80;
  ulonglong local_78;
  
  local_78 = DAT_180919500 ^ (ulonglong)auStack_198;
  iVar6 = FUN_18047fe10(param_1,1);
  if (iVar6 == 5) {
    FUN_18047f880(param_1,1);
  }
  iVar6 = FUN_18047fe10(param_1,1);
  if ((iVar6 < 1) || (iVar6 = FUN_18047fbf0(param_1,1), iVar6 == 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  FUN_18047e8f0(param_1,0,0);
  uVar4 = _UNK_1808ad418;
  uVar3 = _DAT_1808ad410;
  iVar6 = 1;
  pcVar10 = &DAT_18095d530;
  do {
    if (((*pcVar10 != '\0') && ((0 < *(int *)(pcVar10 + 0x60) || (*(int *)(pcVar10 + 100) == 2))))
       && ((bVar2 || (pcVar10[0xe1] != '\0')))) {
      FUN_180013350(local_178,pcVar10);
      fVar1 = *(float *)(pcVar10 + 0x6c);
      uVar9 = 0;
      do {
        if (((((&DAT_18095d530)[uVar9 * 0xe4] != '\0') &&
             ((float)(&DAT_18095d59c)[uVar9 * 0x39] == fVar1)) &&
            (cVar5 = FUN_180023400(local_178,&DAT_18095d530 + uVar9 * 0xe4), cVar5 != '\0')) &&
           ((&DAT_180cd1320)[uVar9] != '\0')) {
          FUN_1800b8290();
          cVar5 = FUN_1800b83b0(local_178);
          if (cVar5 == '\0') {
            local_158 = 0;
            lStack_150 = 0;
            local_148 = 0;
            local_140 = 0;
            local_138 = 0;
            uStack_130 = 0;
            local_128 = 0;
            local_120 = 0;
            uStack_110 = 0;
            local_108 = uVar3;
            uStack_100 = uVar4;
            local_118 = 0;
            local_f0 = 0;
            local_e8 = 0;
            uStack_e0 = 0;
            local_d8 = 0;
            uStack_d0 = 0;
            local_c8 = 0;
            uStack_b8 = 0;
            local_b0 = 0;
            local_a8 = 0xf;
            local_c0 = 0;
            uStack_98 = 0;
            local_90 = 0;
            local_88 = 0xf;
            local_a0 = 0;
            local_80 = 0;
            local_f8 = cVar5;
            cVar5 = FUN_18033cc20(local_178,&local_158);
            FUN_18047e8f0(param_1,0,5);
            pppplVar8 = (longlong ****)(pcVar10 + 0x70);
            if (pcVar10[0x70] == '\0') {
              if ((cVar5 == '\0') || (local_158 == lStack_150)) {
                pppplVar8 = (longlong ****)local_178;
                if (0xf < local_160) {
                  pppplVar8 = local_178[0];
                }
              }
              else {
                pppplVar8 = (longlong ****)(lStack_150 + -0x20);
                if (0xf < *(ulonglong *)(lStack_150 + -8)) {
                  pppplVar8 = *(longlong *****)(lStack_150 + -0x20);
                }
              }
            }
            FUN_18047f530(param_1,pppplVar8);
            FUN_18047f8e0(param_1,0xfffffffe,&DAT_18058b644);
            cVar7 = '\0';
            if (*(int *)(pcVar10 + 100) != 1) {
              cVar7 = (*(int *)(pcVar10 + 100) != 0) + '\x01';
            }
            FUN_18047f3d0(param_1,cVar7);
            FUN_18047f8e0(param_1,0xfffffffe,&DAT_1806e044c);
            plVar11 = &local_158;
            if (cVar5 == '\0') {
              plVar11 = (longlong *)0x0;
            }
            FUN_180059d50(param_1,pcVar10,plVar11);
            FUN_18047f8e0(param_1,0xfffffffe,"value");
            if (cVar5 == '\0') {
              FUN_18047f4d0(param_1);
            }
            else {
              FUN_180055130(param_1,&local_158);
            }
            FUN_18047f8e0(param_1,0xfffffffe,"reference");
            FUN_18047f270(param_1,1);
            FUN_18047f8e0(param_1,0xfffffffe,"is_active");
            FUN_18047f7e0(param_1,0xfffffffe,iVar6);
            FUN_18000f890(&local_a0);
            FUN_18000f890(&local_c0);
            FUN_180068f30(&local_d8);
            FUN_1800288b0(&local_f0);
            FUN_18000f890(&local_118);
            FUN_1800288b0(&local_140);
            FUN_1800288b0(&local_158);
            FUN_18000f890(local_178);
            iVar6 = iVar6 + 1;
            goto LAB_18005a0b4;
          }
          break;
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < 0x40);
      FUN_18000f890(local_178);
    }
LAB_18005a0b4:
    pcVar10 = pcVar10 + 0xe4;
    if (pcVar10 == &DAT_180960e30) {
      return 1;
    }
  } while( true );
}



/* ===== 18005a330 FUN_18005a330 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_18005a330(undefined8 param_1)

{
  byte bVar1;
  size_t sVar2;
  undefined *puVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 *puVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined8 uVar12;
  char *pcVar13;
  undefined8 *puVar14;
  undefined8 ****ppppuVar15;
  undefined8 *puVar16;
  int iVar17;
  undefined **ppuVar18;
  byte ****ppppbVar19;
  undefined8 *puVar20;
  undefined1 *puVar21;
  undefined1 *puVar22;
  byte ****ppppbVar23;
  byte ****ppppbVar24;
  undefined8 ****ppppuVar25;
  size_t sVar26;
  undefined4 uVar27;
  undefined8 uStack_300;
  undefined1 auStack_2f8 [8];
  undefined1 auStack_2f0 [24];
  longlong local_2d8 [5];
  longlong local_2b0;
  undefined8 *local_2a8;
  undefined8 ****local_2a0 [3];
  size_t local_288;
  ulonglong local_280;
  undefined8 ****local_278;
  undefined8 uStack_270;
  size_t local_268;
  ulonglong local_260;
  byte ****local_258 [2];
  size_t local_248;
  ulonglong local_240;
  undefined1 local_238;
  undefined7 uStack_237;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined1 local_218;
  undefined7 uStack_217;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined1 local_1f8;
  undefined7 uStack_1f7;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined1 local_1d8;
  undefined7 uStack_1d7;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined4 local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined1 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined2 local_e0;
  undefined8 ****local_d8 [3];
  ulonglong local_c0;
  undefined8 ****local_b8 [3];
  ulonglong local_a0;
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  ulonglong local_58;
  
  local_58 = DAT_180919500 ^ (ulonglong)auStack_2f8;
  iVar8 = FUN_18047fe10(param_1,1);
  if (iVar8 == 5) {
    FUN_18047f880(param_1,1);
  }
  iVar8 = FUN_18047ed40(param_1);
  puVar21 = auStack_2f8;
  puVar22 = auStack_2f8;
  if (iVar8 < 1) {
    uVar10 = FUN_180484c10(param_1,"ui.find: a path is needed");
    puVar22 = auStack_2f8;
    goto LAB_18005ac7d;
  }
  local_2d8[1] = 0;
  local_2d8[2] = 0;
  local_2d8[3] = 0;
  iVar17 = 1;
  do {
    local_2d8[0] = FUN_18047e090(param_1,iVar17,0);
    if (local_2d8[2] == local_2d8[3]) {
      FUN_180069af0(local_2d8 + 1,local_2d8[2]);
    }
    else {
      FUN_180013350(local_2d8[2],local_2d8[0]);
      local_2d8[2] = local_2d8[2] + 0x20;
    }
    iVar17 = iVar17 + 1;
  } while (iVar17 <= iVar8);
  local_1b8 = 0;
  uStack_1b0 = 0;
  local_1a8 = 0;
  local_1a0 = 0;
  local_198 = 0;
  uStack_190 = 0;
  local_188 = 0;
  local_180 = 0;
  uStack_170 = 0;
  local_168 = 0;
  local_160 = 0xf;
  local_178 = 0;
  local_158 = 0;
  local_150 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_128 = 0;
  uStack_118 = 0;
  local_110 = 0;
  local_108 = 0xf;
  local_120 = 0;
  uStack_f8 = 0;
  local_f0 = 0;
  local_e8 = 0xf;
  local_100 = 0;
  local_e0 = 0;
  cVar7 = FUN_18033c960(local_2d8 + 1,&local_1b8);
  if (cVar7 == '\0') {
    uStack_270 = 0;
    local_268 = 0;
    local_260 = 0xf;
    local_278 = (undefined8 ****)0x0;
    local_2a0[2] = (undefined8 ****)0x0;
    local_288 = 0;
    local_280 = 0xf;
    local_2a0[1] = (undefined8 ****)0x0;
    cVar7 = FUN_18033d070(local_2d8 + 1,&local_278,local_2a0 + 1);
    if (cVar7 != '\0') {
      FUN_18047eb70(param_1,0xffffd8f0,"wl_state");
      lVar11 = FUN_18047fd90(param_1,0xffffffff);
      FUN_18047fb50(param_1,0xfffffffe);
      uVar10 = local_260;
      sVar26 = local_268;
      lVar11 = *(longlong *)(lVar11 + 0xa0);
      bVar5 = false;
      puVar20 = *(undefined8 **)(lVar11 + 0x58);
      puVar16 = *(undefined8 **)(lVar11 + 0x50);
      if (puVar16 == puVar20) {
LAB_18005a64d:
        FUN_180024b50(&local_238,&local_278);
        FUN_180024b50(&local_218,local_2a0 + 1);
        puVar20 = *(undefined8 **)(lVar11 + 0x58);
        if (puVar20 == *(undefined8 **)(lVar11 + 0x60)) {
          FUN_18006a540(lVar11 + 0x50,puVar20,&local_238);
        }
        else {
          *puVar20 = 0;
          puVar20[1] = 0;
          puVar20[2] = 0;
          puVar20[3] = 0;
          *puVar20 = CONCAT71(uStack_237,local_238);
          puVar20[1] = local_230;
          puVar20[2] = local_228;
          puVar20[3] = local_220;
          local_228 = 0;
          local_220 = 0xf;
          local_238 = 0;
          puVar20[4] = 0;
          puVar20[5] = 0;
          puVar20[6] = 0;
          puVar20[7] = 0;
          puVar20[4] = CONCAT71(uStack_217,local_218);
          puVar20[5] = local_210;
          puVar20[6] = local_208;
          puVar20[7] = local_200;
          local_208 = 0;
          local_200 = 0xf;
          local_218 = 0;
          *(longlong *)(lVar11 + 0x58) = *(longlong *)(lVar11 + 0x58) + 0x40;
          local_2a8 = puVar20;
        }
        FUN_18000f890(&local_218);
        FUN_18000f890(&local_238);
      }
      else {
        do {
          ppppuVar15 = &local_278;
          if (0xf < uVar10) {
            ppppuVar15 = local_278;
          }
          sVar2 = puVar16[2];
          if ((ulonglong)puVar16[3] < 0x10) {
            puVar14 = puVar16;
          }
          else {
            puVar14 = (undefined8 *)*puVar16;
          }
          if ((sVar2 == sVar26) &&
             ((sVar2 == 0 || (iVar8 = memcmp(puVar14,ppppuVar15,sVar2), iVar8 == 0)))) {
            puVar14 = puVar16 + 4;
            ppppuVar15 = local_2a0 + 1;
            if (0xf < local_280) {
              ppppuVar15 = local_2a0[1];
            }
            sVar2 = puVar16[6];
            if (0xf < (ulonglong)puVar16[7]) {
              puVar14 = (undefined8 *)*puVar14;
            }
            if ((sVar2 != local_288) ||
               ((sVar2 != 0 && (iVar8 = memcmp(puVar14,ppppuVar15,sVar2), iVar8 != 0))))
            goto LAB_18005a62f;
            bVar1 = 1;
          }
          else {
LAB_18005a62f:
            bVar1 = 0;
          }
          bVar5 = (bool)(bVar5 | bVar1);
          puVar16 = puVar16 + 8;
        } while (puVar16 != puVar20);
        if (!bVar5) goto LAB_18005a64d;
      }
      uVar12 = FUN_180013350(local_98,&DAT_1806dfae0);
      FUN_1800667a0(local_d8,uVar12,&local_278);
      FUN_18000f890(local_98);
      ppppuVar15 = local_d8;
      if (0xf < local_c0) {
        ppppuVar15 = local_d8[0];
      }
      ppppuVar25 = local_2a0 + 1;
      if (0xf < local_280) {
        ppppuVar25 = local_2a0[1];
      }
      FUN_18047e8f0(param_1,0,0);
      ppuVar18 = &PTR_s_checkbox_18059c2f0;
      puVar3 = PTR_s_checkbox_18059c2f0;
      while (puVar3 != (undefined *)0x0) {
        FUN_18047f530(param_1,ppppuVar25);
        FUN_18047f530(param_1,ppppuVar15);
        FUN_18047f2b0(param_1,ppuVar18[1],2);
        FUN_18047f8e0(param_1,0xfffffffe,*ppuVar18);
        ppuVar18 = ppuVar18 + 2;
        puVar3 = *ppuVar18;
      }
      FUN_18000f890(local_d8);
      FUN_18000f890(local_2a0 + 1);
      FUN_18000f890(&local_278);
      goto LAB_18005a804;
    }
    if (local_280 < 0x10) {
LAB_18005a89f:
      local_288 = 0;
      local_280 = 0xf;
      local_2a0[1] = (undefined8 ****)((ulonglong)local_2a0[1] & 0xffffffffffffff00);
      if (0xf < local_260) {
        uVar10 = local_260 + 1;
        ppppuVar15 = local_278;
        if (0xfff < uVar10) {
          ppppuVar15 = (undefined8 ****)local_278[-1];
          if (0x1f < (ulonglong)((longlong)local_278 + (-8 - (longlong)ppppuVar15)))
          goto LAB_18005a96f;
          uVar10 = local_260 + 0x28;
        }
        thunk_FUN_1803d64e0(ppppuVar15,uVar10);
      }
      local_268 = 0;
      local_260 = 0xf;
      local_278 = (undefined8 ****)((ulonglong)local_278 & 0xffffffffffffff00);
      FUN_18000f890(&local_100);
      FUN_18000f890(&local_120);
      FUN_180068f30(&local_138);
      FUN_1800288b0(&local_150);
      FUN_18000f890(&local_178);
      FUN_1800288b0(&local_1a0);
      uVar27 = FUN_1800288b0(&local_1b8);
      puVar6 = auStack_2f8;
      if (iVar8 == 2) goto LAB_18005a976;
      FUN_18047f4d0(param_1);
      uVar10 = 1;
    }
    else {
      uVar10 = local_280 + 1;
      ppppuVar15 = local_2a0[1];
      if (uVar10 < 0x1000) {
LAB_18005a89a:
        thunk_FUN_1803d64e0(ppppuVar15,uVar10);
        goto LAB_18005a89f;
      }
      ppppuVar15 = (undefined8 ****)local_2a0[1][-1];
      if ((ulonglong)((longlong)local_2a0[1] + (-8 - (longlong)ppppuVar15)) < 0x20) {
        uVar10 = local_280 + 0x28;
        goto LAB_18005a89a;
      }
      pcVar4 = (code *)swi(0x29);
      (*pcVar4)(5);
      puVar21 = auStack_2f0;
LAB_18005a96f:
      pcVar4 = (code *)swi(0x29);
      uVar27 = (*pcVar4)(5);
      puVar6 = puVar21 + 8;
LAB_18005a976:
      puVar22 = puVar6;
      *(undefined8 *)(puVar22 + -8) = 0x18005a981;
      uVar12 = FUN_18047e090(uVar27,1,0);
      *(undefined8 *)(puVar22 + -8) = 0x18005a98d;
      FUN_180013350(local_258,uVar12);
      *(undefined8 *)(puVar22 + -8) = 0x18005a99e;
      pcVar13 = (char *)FUN_18047e090(param_1,2,0);
      if ((local_248 == 0) || (*pcVar13 == '\0')) {
        *(undefined8 *)(puVar22 + -8) = 0x18005ac65;
        uVar9 = FUN_180484c10(param_1,"ui.find: a page and a group are needed");
        uVar10 = (ulonglong)uVar9;
      }
      else {
        ppppbVar19 = (byte ****)local_258;
        if (0xf < local_240) {
          ppppbVar19 = local_258[0];
        }
        ppppbVar23 = (byte ****)((longlong)ppppbVar19 + local_248);
        ppppbVar24 = local_258[0];
        uVar10 = local_240;
        sVar26 = local_248;
        if (ppppbVar19 != ppppbVar23) {
          do {
            bVar1 = *(byte *)ppppbVar19;
            *(undefined8 *)(puVar22 + -8) = 0x18005a9e8;
            iVar8 = tolower((uint)bVar1);
            *(byte *)ppppbVar19 = (byte)iVar8;
            ppppbVar19 = (byte ****)((longlong)ppppbVar19 + 1);
          } while (ppppbVar19 != ppppbVar23);
          ppppbVar24 = local_258[0];
          uVar10 = local_240;
          sVar26 = local_248;
        }
        *(undefined8 *)(puVar22 + -8) = 0x18005aa12;
        FUN_18047eb70(param_1,0xffffd8f0);
        *(undefined8 *)(puVar22 + -8) = 0x18005aa1f;
        lVar11 = FUN_18047fd90(param_1,0xffffffff);
        *(undefined8 *)(puVar22 + -8) = 0x18005aa2f;
        FUN_18047fb50(param_1,0xfffffffe);
        lVar11 = *(longlong *)(lVar11 + 0xa0);
        *(longlong *)(puVar22 + 0x20) = lVar11;
        bVar5 = false;
        *(longlong **)(puVar22 + 0x48) = (longlong *)(lVar11 + 0x50);
        puVar20 = *(undefined8 **)(lVar11 + 0x50);
        if (puVar20 == *(undefined8 **)(lVar11 + 0x58)) {
LAB_18005aab3:
          *(undefined8 *)(puVar22 + -8) = 0x18005aac0;
          FUN_180024b50(&local_1f8,local_258);
          *(undefined8 *)(puVar22 + -8) = 0x18005aacd;
          FUN_180013350(&local_1d8,pcVar13);
          lVar11 = *(longlong *)(puVar22 + 0x20);
          puVar20 = *(undefined8 **)(lVar11 + 0x58);
          if (puVar20 == *(undefined8 **)(lVar11 + 0x60)) {
            *(undefined8 *)(puVar22 + -8) = 0x18005ab77;
            FUN_18006a540(*(undefined8 *)(puVar22 + 0x48),puVar20,&local_1f8);
          }
          else {
            *(undefined8 **)(puVar22 + 0x58) = puVar20;
            *puVar20 = 0;
            puVar20[1] = 0;
            puVar20[2] = 0;
            puVar20[3] = 0;
            *puVar20 = CONCAT71(uStack_1f7,local_1f8);
            puVar20[1] = local_1f0;
            puVar20[2] = local_1e8;
            puVar20[3] = local_1e0;
            local_1e8 = 0;
            local_1e0 = 0xf;
            local_1f8 = 0;
            puVar20[4] = 0;
            puVar20[5] = 0;
            puVar20[6] = 0;
            puVar20[7] = 0;
            puVar20[4] = CONCAT71(uStack_1d7,local_1d8);
            puVar20[5] = local_1d0;
            puVar20[6] = local_1c8;
            puVar20[7] = local_1c0;
            local_1c8 = 0;
            local_1c0 = 0xf;
            local_1d8 = 0;
            *(longlong *)(lVar11 + 0x58) = *(longlong *)(lVar11 + 0x58) + 0x40;
          }
          *(undefined8 *)(puVar22 + -8) = 0x18005ab81;
          FUN_18000f890(&local_1d8);
          *(undefined8 *)(puVar22 + -8) = 0x18005ab8b;
          FUN_18000f890(&local_1f8);
        }
        else {
          do {
            ppppbVar19 = (byte ****)local_258;
            if (0xf < uVar10) {
              ppppbVar19 = ppppbVar24;
            }
            sVar2 = puVar20[2];
            if ((ulonglong)puVar20[3] < 0x10) {
              puVar16 = puVar20;
            }
            else {
              puVar16 = (undefined8 *)*puVar20;
            }
            if (sVar2 == sVar26) {
              if (sVar2 != 0) {
                *(undefined8 *)(puVar22 + -8) = 0x18005aa7e;
                iVar8 = memcmp(puVar16,ppppbVar19,sVar2);
                if (iVar8 != 0) goto LAB_18005aa96;
              }
              *(undefined8 *)(puVar22 + -8) = 0x18005aa8e;
              cVar7 = FUN_180023400(puVar20 + 4,pcVar13);
              if (cVar7 == '\0') goto LAB_18005aa96;
              bVar1 = 1;
            }
            else {
LAB_18005aa96:
              bVar1 = 0;
            }
            bVar5 = (bool)(bVar5 | bVar1);
            puVar20 = puVar20 + 8;
          } while (puVar20 != *(undefined8 **)(*(longlong *)(puVar22 + 0x20) + 0x58));
          if (!bVar5) goto LAB_18005aab3;
        }
        *(undefined8 *)(puVar22 + -8) = 0x18005ab9f;
        uVar12 = FUN_180013350(local_78,&DAT_1806dfae0);
        *(undefined8 *)(puVar22 + -8) = 0x18005abb3;
        FUN_1800667a0(local_b8,uVar12,local_258);
        *(undefined8 *)(puVar22 + -8) = 0x18005abc0;
        FUN_18000f890(local_78);
        ppppuVar15 = local_b8;
        if (0xf < local_a0) {
          ppppuVar15 = local_b8[0];
        }
        *(undefined8 *)(puVar22 + -8) = 0x18005abe5;
        FUN_18047e8f0(param_1,0,0);
        ppuVar18 = &PTR_s_checkbox_18059c2f0;
        puVar3 = PTR_s_checkbox_18059c2f0;
        while (puVar3 != (undefined *)0x0) {
          *(undefined8 *)(puVar22 + -8) = 0x18005ac0b;
          FUN_18047f530(param_1,pcVar13);
          *(undefined8 *)(puVar22 + -8) = 0x18005ac16;
          FUN_18047f530(param_1,ppppuVar15);
          puVar3 = ppuVar18[1];
          *(undefined8 *)(puVar22 + -8) = 0x18005ac28;
          FUN_18047f2b0(param_1,puVar3,2);
          puVar3 = *ppuVar18;
          *(undefined8 *)(puVar22 + -8) = 0x18005ac38;
          FUN_18047f8e0(param_1,0xfffffffe,puVar3);
          ppuVar18 = ppuVar18 + 2;
          puVar3 = *ppuVar18;
        }
        uVar10 = 1;
        *(undefined8 *)(puVar22 + -8) = 0x18005ac53;
        FUN_18000f890(local_b8);
      }
      *(undefined8 *)(puVar22 + -8) = 0x18005ac70;
      FUN_18000f890(local_258);
    }
  }
  else {
    FUN_180055130(param_1,&local_1b8);
LAB_18005a804:
    FUN_18000f890(&local_100);
    FUN_18000f890(&local_120);
    FUN_180068f30(&local_138);
    FUN_1800288b0(&local_150);
    FUN_18000f890(&local_178);
    FUN_1800288b0(&local_1a0);
    FUN_1800288b0(&local_1b8);
    uVar10 = 1;
    puVar22 = auStack_2f8;
  }
  *(undefined8 *)(puVar22 + -8) = 0x18005ac7b;
  FUN_1800288b0(puVar22 + 0x28);
LAB_18005ac7d:
  *(undefined8 *)(puVar22 + -8) = 0x18005ac8c;
  return uVar10;
}



/* ===== 18005aca0 FUN_18005aca0 ===== */

void FUN_18005aca0(undefined8 param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  
  FUN_18047e8f0(param_1,0,0);
  ppuVar3 = &PTR_s_checkbox_18059c2f0;
  puVar2 = PTR_s_checkbox_18059c2f0;
  while (puVar2 != (undefined *)0x0) {
    FUN_18047f530(param_1,param_2);
    FUN_18047f530(param_1,param_3);
    FUN_18047f2b0(param_1,ppuVar3[1],2);
    FUN_18047f8e0(param_1,0xfffffffe,*ppuVar3);
    ppuVar1 = ppuVar3 + 2;
    ppuVar3 = ppuVar3 + 2;
    puVar2 = *ppuVar1;
  }
  if (param_4 != '\0') {
    FUN_18047f530(param_1,param_3);
    FUN_18047f2b0(param_1,FUN_180054be0,1);
    FUN_18047f8e0(param_1,0xfffffffe,"group");
  }
  return;
}



/* ===== 18005ad60 FUN_18005ad60 ===== */

undefined4 FUN_18005ad60(undefined8 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  int local_res10 [6];
  int local_58 [4];
  longlong local_48;
  longlong local_40;
  
  iVar1 = FUN_18047fe10(param_1,1);
  if (iVar1 == 5) {
    FUN_18047f880(param_1,1);
  }
  uVar4 = FUN_18047e090(param_1,1,0);
  FUN_180054150(&local_48,param_1);
  if (local_48 == local_40) {
    uVar2 = FUN_180484c10(param_1,"ui.listbox: no items");
  }
  else {
    local_res10[4] = 0x10;
    local_res10[0] = 2;
    iVar1 = FUN_18047e470(param_1,3,5);
    iVar8 = (int)(local_40 - local_48 >> 5) + -1;
    local_58[0] = 0;
    local_res10[2] = iVar1;
    local_58[2] = iVar8;
    iVar3 = FUN_18047e470(param_1,4,0);
    local_58[1] = iVar3;
    lVar5 = FUN_180053b10(param_1,10,uVar4);
    FUN_180067380(lVar5 + 0xa0,&local_48);
    piVar7 = local_res10;
    if (1 < iVar1) {
      piVar7 = local_res10 + 2;
    }
    piVar6 = local_res10 + 4;
    if (iVar1 < 0x11) {
      piVar6 = piVar7;
    }
    *(int *)(lVar5 + 0x238) = *piVar6;
    piVar7 = local_58;
    if (-1 < iVar3) {
      piVar7 = local_58 + 1;
    }
    piVar6 = local_58 + 2;
    if (iVar3 <= iVar8) {
      piVar6 = piVar7;
    }
    *(int *)(lVar5 + 0x6c) = *piVar6;
    uVar2 = FUN_1800540b0(param_1,lVar5);
  }
  FUN_1800288b0(&local_48);
  return uVar2;
}



/* ===== 18005aed0 FUN_18005aed0 ===== */

void FUN_18005aed0(undefined8 param_1)

{
  undefined8 uVar1;
  int iVar2;
  
  iVar2 = FUN_18047fe10(param_1,1);
  if (iVar2 == 5) {
    FUN_18047f880(param_1,1);
  }
  uVar1 = FUN_18047e510(param_1,1,&DAT_18058b643,0);
  uVar1 = FUN_180053b10(param_1,0xb,uVar1);
  FUN_1800540b0(param_1,uVar1);
  return;
}



/* ===== 18005af30 FUN_18005af30 ===== */

void FUN_18005af30(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  float *pfVar6;
  longlong lVar7;
  float *pfVar8;
  double dVar9;
  float fVar10;
  float local_res10 [6];
  undefined1 local_58 [48];
  
  iVar3 = FUN_18047fe10(param_1,1);
  if (iVar3 == 5) {
    FUN_18047f880(param_1,1);
  }
  uVar4 = FUN_18047e090(param_1,1,0);
  puVar5 = (undefined8 *)FUN_18005fe40(local_58,param_1,2);
  fVar10 = DAT_1808ac838;
  local_res10[4] = 512.0;
  uVar2 = *puVar5;
  iVar3 = *(int *)(puVar5 + 1);
  iVar1 = *(int *)((longlong)puVar5 + 0xc);
  local_res10[0] = 8.0;
  dVar9 = (double)FUN_18047e5f0(param_1,3,DAT_1808ac698);
  local_res10[2] = (float)dVar9;
  pfVar8 = local_res10;
  if (fVar10 <= local_res10[2]) {
    pfVar8 = local_res10 + 2;
  }
  pfVar6 = local_res10 + 4;
  if (local_res10[2] <= DAT_1808acc00) {
    pfVar6 = pfVar8;
  }
  fVar10 = *pfVar6;
  lVar7 = FUN_180053b10(param_1,0xc,uVar4);
  *(float *)(lVar7 + 0x230) = fVar10;
  *(undefined8 *)(lVar7 + 0x240) = uVar2;
  if (0 < iVar1) {
    fVar10 = ((float)iVar3 / (float)iVar1) * fVar10;
  }
  *(float *)(lVar7 + 0x234) = fVar10;
  FUN_1800540b0(param_1,lVar7);
  return;
}



/* ===== 18005b070 FUN_18005b070 ===== */

void FUN_18005b070(undefined8 param_1)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  float *pfVar6;
  float *pfVar7;
  double dVar8;
  float fVar9;
  float local_res10 [6];
  
  iVar2 = FUN_18047fe10(param_1,1);
  if (iVar2 == 5) {
    FUN_18047f880(param_1,1);
  }
  uVar4 = FUN_18047e090(param_1,1,0);
  fVar1 = DAT_1808ac838;
  local_res10[4] = 2000.0;
  local_res10[0] = 8.0;
  dVar8 = (double)FUN_18047e140(param_1,2);
  fVar9 = (float)dVar8;
  local_res10[2] = fVar9;
  FUN_18047e240(param_1,3,6);
  lVar5 = FUN_180053b10(param_1,0xd,uVar4);
  pfVar7 = local_res10;
  if (fVar1 <= fVar9) {
    pfVar7 = local_res10 + 2;
  }
  pfVar6 = local_res10 + 4;
  if (fVar9 <= DAT_1808acc50) {
    pfVar6 = pfVar7;
  }
  *(float *)(lVar5 + 0x230) = *pfVar6;
  FUN_18047f610(param_1,3);
  uVar3 = FUN_1804851b0(param_1,0xffffd8f0);
  *(undefined4 *)(lVar5 + 0x23c) = uVar3;
  FUN_1800540b0(param_1,lVar5);
  return;
}



/* ===== 18005b180 FUN_18005b180 ===== */

void FUN_18005b180(undefined8 param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  float *pfVar7;
  float *pfVar8;
  double dVar9;
  float fVar10;
  float fVar11;
  float local_res10 [6];
  float local_58 [20];
  
  iVar3 = FUN_18047fe10(param_1,1);
  if (iVar3 == 5) {
    FUN_18047f880(param_1,1);
  }
  uVar5 = FUN_18047e090(param_1,1,0);
  fVar2 = DAT_1808aca54;
  local_res10[4] = 2000.0;
  local_res10[0] = 40.0;
  dVar9 = (double)FUN_18047e140(param_1,2);
  fVar1 = DAT_1808ac950;
  fVar10 = (float)dVar9;
  local_58[2] = 2000.0;
  local_58[0] = 20.0;
  local_res10[2] = fVar10;
  dVar9 = (double)FUN_18047e140(param_1,3);
  fVar11 = (float)dVar9;
  local_58[1] = fVar11;
  FUN_18047e240(param_1,4,6);
  lVar6 = FUN_180053b10(param_1,0xe,uVar5);
  pfVar8 = local_res10;
  if (fVar2 <= fVar10) {
    pfVar8 = local_res10 + 2;
  }
  pfVar7 = local_res10 + 4;
  if (fVar10 <= DAT_1808acc50) {
    pfVar7 = pfVar8;
  }
  *(float *)(lVar6 + 0x234) = *pfVar7;
  pfVar8 = local_58;
  if (fVar1 <= fVar11) {
    pfVar8 = local_58 + 1;
  }
  pfVar7 = local_58 + 2;
  if (fVar11 <= DAT_1808acc50) {
    pfVar7 = pfVar8;
  }
  *(float *)(lVar6 + 0x230) = *pfVar7;
  FUN_18047f610(param_1,4);
  uVar4 = FUN_1804851b0(param_1,0xffffd8f0);
  *(undefined4 *)(lVar6 + 0x23c) = uVar4;
  FUN_1800540b0(param_1,lVar6);
  return;
}



/* ===== 18005b320 FUN_18005b320 ===== */

undefined8 FUN_18005b320(undefined8 param_1)

{
  int iVar1;
  longlong lVar2;
  char *_Str;
  size_t sVar3;
  longlong *plVar4;
  
  lVar2 = FUN_180053900(param_1,1);
  plVar4 = (longlong *)(lVar2 + 0x1e8);
  iVar1 = FUN_18047fe10(param_1,2);
  if (iVar1 < 1) {
    if (0xf < *(ulonglong *)(lVar2 + 0x200)) {
      plVar4 = (longlong *)*plVar4;
    }
    FUN_18047f530(param_1,plVar4);
  }
  else {
    _Str = (char *)FUN_18047e090(param_1,2,0);
    sVar3 = strlen(_Str);
    FUN_180029840(plVar4,_Str,sVar3);
    FUN_18047f610(param_1,1);
  }
  return 1;
}



