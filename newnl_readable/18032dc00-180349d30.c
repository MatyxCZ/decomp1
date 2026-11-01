/* ===== 18032dc00 FUN_18032dc00 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18032dc00(void)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  undefined8 local_res8;
  char *local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined8 in_stack_ffffffffffffffa8;
  undefined4 uVar10;
  uint in_stack_ffffffffffffffb0;
  undefined8 *local_48;
  char **local_40;
  
  lVar3 = DAT_180ca0a50;
  uVar10 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  lVar6 = *(longlong *)(lVar3 + 0x14f8);
  *(undefined1 *)(lVar6 + 0xce) = 1;
  lVar2 = *(longlong *)(lVar3 + 0x14f8);
  fVar8 = ((*(float *)(lVar6 + 0x28) - *(float *)(lVar6 + 0x98)) + *(float *)(lVar6 + 0x30)) -
          DAT_1808ac7ac;
  *(undefined4 *)(lVar2 + 0x11c) = *(undefined4 *)(lVar6 + 0x11c);
  *(undefined1 *)(lVar2 + 0x159) = 1;
  *(float *)(lVar2 + 0x118) = fVar8 - _DAT_1808acac8;
  lVar6 = *(longlong *)(lVar3 + 0x14f8);
  uVar1 = *(undefined4 *)(lVar6 + 0x11c);
  fVar8 = *(float *)(lVar6 + 0x118);
  iVar5 = FUN_1803e8900(lVar6,"##extensions_default");
  if (*(int *)(DAT_180ca0a50 + 0x2030) < *(int *)(DAT_180ca0a50 + 0x2020)) {
    lVar6 = (longlong)*(int *)(DAT_180ca0a50 + 0x2030) * 0x58;
    if ((*(int *)(lVar6 + *(longlong *)(DAT_180ca0a50 + 0x2028)) == iVar5) &&
       (*(char *)(lVar6 + 0x34 + *(longlong *)(DAT_180ca0a50 + 0x2028)) == '\0')) {
      uVar7 = 1;
      goto LAB_18032dcd8;
    }
  }
  uVar7 = 0;
LAB_18032dcd8:
  in_stack_ffffffffffffffb0 = in_stack_ffffffffffffffb0 & 0xffffff00;
  cVar4 = FUN_1803287f0("default","presets_fa_default_extensions",&DAT_180768e20,uVar7,
                        CONCAT44(uVar10,DAT_180960f38),in_stack_ffffffffffffffb0);
  if (cVar4 != '\0') {
    FUN_1802b4d80("##extensions_default");
  }
  local_res8 = 0;
  local_res10 = "Default Extensions";
  cVar4 = FUN_1803dd930(0x400);
  if ((cVar4 == '\0') || ((*(uint *)(DAT_180ca0a50 + 0x1ef0) & 0x100) == 0)) {
    uVar7 = 0;
  }
  else {
    uVar7 = 1;
  }
  local_res18 = *(undefined8 *)(DAT_180ca0a50 + 0x1efc);
  local_48 = &local_res8;
  local_res20 = *(undefined8 *)(DAT_180ca0a50 + 0x1ef4);
  local_40 = &local_res10;
  FUN_180347170("default",uVar7,&local_res20,&local_res18,&local_48);
  lVar6 = DAT_180ca0a50;
  in_stack_ffffffffffffffb0 = in_stack_ffffffffffffffb0 & 0xffffff00;
  fVar9 = fVar8 + DAT_1808ac97c;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  lVar6 = *(longlong *)(lVar6 + 0x14f8);
  *(float *)(lVar6 + 0x118) = fVar9;
  *(undefined4 *)(lVar6 + 0x11c) = uVar1;
  *(undefined1 *)(lVar6 + 0x159) = 1;
  cVar4 = FUN_1803287f0(&DAT_180769f24,"presets_fa_api_docs",
                        "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 576 512\" width=\"576\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M416 32L384 32C366 32 352 47 352 64C352 82 366 96 384 96L416 96C433 96 448 111 448 128L448 166C448 191 458 216 476 234L498 256L476 279C458 297 448 321 448 347L448 384C448 402 433 416 416 416L384 416C366 416 352 431 352 448C352 465 366 480 384 480L416 480C469 480 512 437 512 384L512 347C512 338 515 330 521 324L566 279C579 267 579 246 566 234L521 188C515 182 512 174 512 166L512 128C512 75 469 32 416 32ZM160 32C107 32 64 75 64 128L64 166C64 174 60 183 54 189L9 234C-3 246 -3 267 9 279L54 324C60 330 64 339 64 347L64 384C64 437 107 480 160 480L192 480C209 480 224 465 224 448C224 431 209 416 192 416L160 416C142 416 128 402 128 384L128 347C128 321 117 297 99 279L77 256L99 234C117 216 128 191 128 166L128 128C128 111 142 96 160 96L192 96C209 96 224 82 224 64C224 47 209 32 192 32L160 32L160 32Z\"/></svg>"
                        ,0,DAT_180960f38,in_stack_ffffffffffffffb0);
  if (cVar4 != '\0') {
    in_stack_ffffffffffffffb0 = 0;
    ShellExecuteA((HWND)0x0,(LPCSTR)0x0,"https://lua.neverlose.one",(LPCSTR)0x0,(LPCSTR)0x0,5);
  }
  local_res8 = 0;
  local_res10 = "Developer API Docs";
  cVar4 = FUN_1803dd930(0x400);
  if ((cVar4 == '\0') || ((*(uint *)(DAT_180ca0a50 + 0x1ef0) & 0x100) == 0)) {
    uVar7 = 0;
  }
  else {
    uVar7 = 1;
  }
  local_res18 = *(undefined8 *)(DAT_180ca0a50 + 0x1efc);
  local_48 = &local_res8;
  local_res20 = *(undefined8 *)(DAT_180ca0a50 + 0x1ef4);
  local_40 = &local_res10;
  FUN_180347170(&DAT_180769f24,uVar7,&local_res20,&local_res18,&local_48);
  lVar6 = DAT_180ca0a50;
  fVar8 = fVar8 + DAT_1808aca78;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  lVar6 = *(longlong *)(lVar6 + 0x14f8);
  *(float *)(lVar6 + 0x118) = fVar8;
  *(undefined4 *)(lVar6 + 0x11c) = uVar1;
  *(undefined1 *)(lVar6 + 0x159) = 1;
  FUN_1803287f0("market","presets_fa_store",
                "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 576 512\" width=\"576\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M547 104L490 14C485 5 476 0 466 0L109 0C99 0 90 5 85 14L28 104C-1 151 24 216 80 224C84 224 88 225 92 225C118 225 141 213 157 196C173 213 196 225 222 225C248 225 272 213 287 196C303 213 327 225 353 225C379 225 402 213 418 196C434 213 457 225 483 225C487 225 491 224 495 224C551 216 577 151 547 104L547 104ZM547 104ZM499 255L499 255C494 256 488 256 483 256C471 256 459 255 448 251L448 384L128 384L128 251C116 255 104 256 92 256C86 256 81 256 76 255L75 255C71 255 67 254 63 253L63 384L63 448C63 483 92 512 127 512L447 512C483 512 511 483 511 448L511 384L511 253C507 254 503 255 499 255L499 255ZM499 255Z\"/></svg>"
                ,0,DAT_180960f38,in_stack_ffffffffffffffb0 & 0xffffff00);
  local_res8 = 0;
  local_res10 = "Extensions Market";
  cVar4 = FUN_1803dd930(0x400);
  if ((cVar4 == '\0') || ((*(uint *)(DAT_180ca0a50 + 0x1ef0) & 0x100) == 0)) {
    uVar7 = 0;
  }
  else {
    uVar7 = 1;
  }
  local_res18 = *(undefined8 *)(DAT_180ca0a50 + 0x1efc);
  local_48 = &local_res8;
  local_res20 = *(undefined8 *)(DAT_180ca0a50 + 0x1ef4);
  local_40 = &local_res10;
  FUN_180347170("market",uVar7,&local_res20,&local_res18,&local_48);
  FUN_18032d700();
  return;
}



/* ===== 18032dfa0 FUN_18032dfa0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1
FUN_18032dfa0(int param_1,undefined8 param_2,undefined8 param_3,char *param_4,uint param_5,
             uint param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  float fVar7;
  byte bVar8;
  undefined1 uVar9;
  char cVar10;
  undefined4 *puVar11;
  longlong lVar12;
  longlong lVar13;
  char *pcVar14;
  uint uVar15;
  ulonglong uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  char *pcVar21;
  undefined4 uVar22;
  ulonglong uVar23;
  float local_e8;
  float local_e4;
  undefined8 local_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  float local_d0;
  float fStack_cc;
  float local_c0;
  float local_bc;
  float local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  
  local_e0 = *(undefined8 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x118);
  fVar20 = (float)local_e0;
  lVar12 = DAT_181107a18;
  if ((DAT_181107a18 == 0) && (lVar12 = DAT_181107a08, DAT_181107a08 == 0)) {
    lVar12 = *(longlong *)(DAT_180ca0a50 + 0x11f0);
  }
  uVar23 = 0;
  pcVar21 = param_4;
  FUN_18040a2f0(&local_d0,lVar12,DAT_1808ac930,DAT_1808acd08,0,param_4,0,0,0);
  fVar17 = (float)FUN_18053f0d0(local_d0 + DAT_1808ac2f0);
  fVar19 = DAT_1808ac34c;
  cVar6 = (char)param_5;
  if ((char)param_5 == '\0') {
    fVar18 = 0.0;
  }
  else {
    fVar18 = DAT_1808ac34c;
  }
  uVar16 = 0xffffffff;
  pcVar14 = "presets_tab_label";
  bVar8 = 0x70;
  do {
    pcVar14 = pcVar14 + 1;
    if (((bVar8 == 0x23) && (*pcVar14 == 0x23)) && (pcVar14[1] == 0x23)) {
      uVar16 = 0xffffffff;
      pcVar14 = pcVar14 + 2;
    }
    else {
      uVar16 = (ulonglong)
               ((uint)(uVar16 >> 8) ^
               *(uint *)(&DAT_1806c25c0 + (uVar16 & 0xff ^ (ulonglong)bVar8) * 4));
    }
    bVar8 = *pcVar14;
  } while (bVar8 != 0);
  param_5 = ~(uint)uVar16 + param_1;
  local_b4 = 0;
  local_b0 = 0xffffffff;
  local_c0 = fVar18;
  local_bc = fVar18;
  local_b8 = fVar18;
  FUN_18034a380(fVar17,&local_d0,&param_5,&local_c0);
  fVar18 = (float)FUN_1802b3660(CONCAT44(fStack_cc,local_d0) + 0x14,fVar18,DAT_1808ac118,0);
  fVar17 = ((fVar17 + DAT_1808ac8b0 + DAT_1808ac924 + DAT_1808ac7ac) - DAT_1808ac9d8) * fVar18 +
           DAT_1808ac9d8;
  FUN_1803e8a70(param_1);
  local_e4 = 23.706;
  local_e8 = fVar17;
  uVar9 = FUN_180415e30("##panel_tab",&local_e8,0);
  cVar10 = FUN_1803dd930(0);
  uVar1 = *(uint *)(DAT_180ca0a50 + 0x1578);
  uVar16 = (ulonglong)uVar1;
  if ((uVar1 == 0) || (uVar1 != *(uint *)(DAT_180ca0a50 + 0x1ee8))) {
    fVar19 = DAT_1808ac27c;
    if (cVar6 == '\0') {
      if (cVar10 == '\0') {
        fVar19 = 0.0;
      }
    }
    else if (cVar10 == '\0') {
      fVar19 = DAT_1808ac1f4;
    }
  }
  pcVar14 = "hover";
  bVar8 = 0x68;
  param_5 = ~*(uint *)(DAT_180ca0a50 + 0x1ee8);
  do {
    pcVar14 = pcVar14 + 1;
    if (((bVar8 == 0x23) && (*pcVar14 == 0x23)) && (pcVar14[1] == 0x23)) {
      pcVar14 = pcVar14 + 2;
      param_5 = ~*(uint *)(DAT_180ca0a50 + 0x1ee8);
    }
    else {
      uVar16 = (ulonglong)(param_5 & 0xff) ^ (ulonglong)bVar8;
      param_5 = param_5 >> 8 ^ *(uint *)(&DAT_1806c25c0 + uVar16 * 4);
    }
    bVar8 = *pcVar14;
  } while (bVar8 != 0);
  param_5 = ~param_5;
  local_b4 = 0;
  local_b0 = 0xffffffff;
  local_c0 = fVar19;
  local_bc = fVar19;
  local_b8 = fVar19;
  FUN_18034a380(uVar16,&local_d0,&param_5,&local_c0);
  fVar19 = (float)FUN_1802b3660(CONCAT44(fStack_cc,local_d0) + 0x14,fVar19,DAT_1808ac118,0);
  lVar12 = DAT_180ca0a50;
  iVar2 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
  if (iVar2 < 2) {
    FUN_1803ebc00("Calling PopID() too many times!");
    lVar12 = DAT_180ca0a50;
  }
  else {
    *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar2 + -1;
  }
  uVar22 = (undefined4)((ulonglong)pcVar21 >> 0x20);
  *(undefined1 *)(*(longlong *)(lVar12 + 0x14f8) + 0xce) = 1;
  fVar7 = local_e0._4_4_;
  local_e8 = fVar20 + fVar17;
  local_e4 = local_e0._4_4_ + DAT_1808ac97c;
  lVar12 = *(longlong *)(*(longlong *)(lVar12 + 0x14f8) + 0x2c8);
  if (0.0 < fVar19) {
    uVar16 = (ulonglong)pcVar21 & 0xffffffff00000000;
    FUN_1803fe590(lVar12,&local_e0,&local_e8,
                  (int)(longlong)
                       ((float)(DAT_180960f44 >> 0x18) * fVar19 * DAT_1808ac1b0 + DAT_1808ac1f4) <<
                  0x18 | DAT_180960f44 & 0xffffff,DAT_1808ac828,uVar16);
    uVar22 = (undefined4)(uVar16 >> 0x20);
  }
  fVar19 = (float)FUN_180519080(fVar20 + DAT_1808ac7ac);
  fVar20 = DAT_1808ac658;
  local_d0 = fVar19 + _DAT_1808ac83c;
  fStack_cc = (float)FUN_180519080(fVar7 + DAT_1808ac658);
  uVar1 = param_6;
  fStack_cc = fStack_cc + DAT_1808ac840;
  FUN_180328670(lVar12,param_2,param_3,&local_d0,DAT_1808ac8d4,CONCAT44(uVar22,param_6));
  if (0.0 < fVar18) {
    FUN_1803fc200(lVar12,&local_e0,&local_e8,1);
    local_d0 = fVar19 + DAT_1808ac924 + DAT_1808ac7ac;
    uVar15 = (int)(longlong)((float)(uVar1 >> 0x18) * fVar18 + DAT_1808ac1f4) << 0x18;
    fStack_cc = (float)FUN_18053f0d0(fVar20);
    fStack_cc = fStack_cc + fVar7;
    lVar13 = DAT_181107a18;
    if ((DAT_181107a18 == 0) && (lVar13 = DAT_181107a08, DAT_181107a08 == 0)) {
      lVar13 = *(longlong *)(DAT_180ca0a50 + 0x11f0);
    }
    if (((uVar15 != 0) && (param_4 != (char *)0x0)) && (*param_4 != '\0')) {
      if (lVar13 == 0) {
        lVar13 = *(longlong *)(*(longlong *)(lVar12 + 0x38) + 0x18);
      }
      local_e0 = *(undefined8 *)(lVar12 + 0x60);
      uStack_d8 = *(undefined4 *)(lVar12 + 0x68);
      uStack_d4 = *(undefined4 *)(lVar12 + 0x6c);
      FUN_18040a900(lVar13,lVar12,DAT_1808ac930,&local_d0,uVar15 | uVar1 & 0xffffff,&local_e0,
                    param_4,0,uVar23 & 0xffffffff00000000,0);
    }
    iVar3 = *(int *)(lVar12 + 0xa0);
    iVar2 = iVar3 + -1;
    *(int *)(lVar12 + 0xa0) = iVar2;
    if (iVar2 == 0) {
      puVar11 = (undefined4 *)(*(longlong *)(lVar12 + 0x38) + 0x34);
    }
    else {
      puVar11 = (undefined4 *)((longlong)(iVar3 + -2) * 0x10 + *(longlong *)(lVar12 + 0xa8));
    }
    uVar22 = puVar11[1];
    uVar4 = puVar11[2];
    uVar5 = puVar11[3];
    *(undefined4 *)(lVar12 + 0x60) = *puVar11;
    *(undefined4 *)(lVar12 + 100) = uVar22;
    *(undefined4 *)(lVar12 + 0x68) = uVar4;
    *(undefined4 *)(lVar12 + 0x6c) = uVar5;
    FUN_1803fbff0(lVar12);
  }
  return uVar9;
}



/* ===== 18032e550 FUN_18032e550 ===== */

void FUN_18032e550(int param_1)

{
  float *pfVar1;
  float fVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  float fVar6;
  undefined4 local_res10;
  undefined4 local_res14;
  
  FUN_1803e8a70();
  uVar3 = *(undefined4 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x118);
  fVar2 = *(float *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x11c);
  if (param_1 == 0) {
    FUN_18032cf60();
  }
  lVar5 = DAT_180ca0a50;
  fVar6 = fVar2 + DAT_1808ac710 + DAT_1808ac750;
  pfVar1 = (float *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x11c);
  if (*pfVar1 <= fVar6 && fVar6 != *pfVar1) {
    *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
    lVar5 = *(longlong *)(lVar5 + 0x14f8);
    local_res10 = 0;
    local_res14 = 0x40800000;
    *(float *)(lVar5 + 0x11c) = fVar2;
    *(undefined4 *)(lVar5 + 0x118) = uVar3;
    *(undefined1 *)(lVar5 + 0x159) = 1;
    FUN_1804174f0(&local_res10);
  }
  iVar4 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
  if (iVar4 < 2) {
    FUN_1803ebc00("Calling PopID() too many times!");
    return;
  }
  *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar4 + -1;
  return;
}



/* ===== 18032e640 FUN_18032e640 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18032e640(float *param_1,float *param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  byte bVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined4 uVar8;
  char *pcVar9;
  float fVar10;
  ulonglong uVar11;
  bool bVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float local_res18;
  float local_res1c;
  float local_res20;
  float local_res24;
  longlong local_e8 [2];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  
  uVar5 = FUN_1803e8900(*(undefined8 *)(DAT_180ca0a50 + 0x14f8),"##presets");
  lVar6 = FUN_1802b4e80(uVar5);
  fVar17 = DAT_1808ac7ac;
  fVar15 = DAT_1808ac1f4;
  if (lVar6 == 0) {
    lVar6 = DAT_180ca0a50;
  }
  else {
    lVar6 = FUN_1802b4e80(uVar5);
    if (lVar6 == 0) {
      local_res1c = 0.0;
      fVar18 = 0.0;
    }
    else {
      FUN_1803e2890(&local_res18,lVar6);
      fVar18 = local_res18;
    }
    lVar6 = DAT_180ca0a50;
    fVar10 = param_1[1];
    fVar21 = *param_1;
    fVar14 = *param_2;
    fVar22 = param_2[1];
    fVar16 = *(float *)(**(longlong **)(DAT_180ca0a50 + 0x2058) + 0x14);
    fVar13 = *(float *)(**(longlong **)(DAT_180ca0a50 + 0x2058) + 0x10);
    if (fVar13 <= fVar17) {
      fVar20 = 0.0;
    }
    else {
      fVar20 = DAT_1808ac658;
    }
    fVar19 = DAT_1808ac658;
    if (fVar16 <= fVar17) {
      fVar19 = 0.0;
    }
    *(uint *)(DAT_180ca0a50 + 0x1f38) = *(uint *)(DAT_180ca0a50 + 0x1f38) | 1;
    fVar13 = fVar13 - fVar20;
    fVar16 = fVar16 - fVar19;
    *(undefined8 *)(lVar6 + 0x1f50) = 0;
    fVar17 = ((fVar21 + fVar14) * fVar15 - fVar18 * fVar15) + fVar18;
    *(undefined4 *)(lVar6 + 0x1f3c) = 8;
    if (fVar17 <= fVar13) {
      fVar13 = fVar17;
    }
    fVar17 = fVar13 - fVar18;
    if (fVar13 - fVar18 <= fVar20) {
      fVar17 = fVar20;
    }
    *(float *)(lVar6 + 0x1f48) = fVar17;
    fVar17 = local_res1c + (fVar10 - (fVar22 - fVar10) * fVar15);
    if (fVar17 <= fVar16) {
      fVar16 = fVar17;
    }
    fVar17 = fVar16 - local_res1c;
    if (fVar16 - local_res1c <= fVar19) {
      fVar17 = fVar19;
    }
    *(float *)(lVar6 + 0x1f4c) = fVar17;
  }
  *(uint *)(lVar6 + 0x1f38) = *(uint *)(lVar6 + 0x1f38) | 0x10;
  *(undefined8 *)(lVar6 + 0x1f84) = 0x439b0000;
  *(undefined4 *)(lVar6 + 0x1f8c) = 0x439b0000;
  *(undefined4 *)(lVar6 + 0x1f90) = 0x461c4000;
  *(undefined8 *)(lVar6 + 0x1f98) = 0;
  *(undefined8 *)(lVar6 + 0x1fa0) = 0;
  DAT_180cd04ab = 1;
  local_res20 = 6.0;
  local_res24 = 6.0;
  cVar3 = FUN_1802b5260("##presets",&local_res20);
  fVar17 = DAT_1808ac750;
  if (cVar3 != '\0') {
    local_res20 = 0.0;
    local_res24 = 5.0;
    FUN_1803d89a0(0xe,&local_res20);
    FUN_180329bc0();
    lVar1 = DAT_180ca0a50;
    pcVar9 = "presets_panel_fade";
    uVar11 = 0xffffffff;
    *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
    bVar4 = 0x70;
    lVar6 = *(longlong *)(lVar1 + 0x14f8);
    uVar5 = *(undefined4 *)(lVar6 + 0x118);
    fVar18 = *(float *)(lVar6 + 0x11c);
    do {
      pcVar9 = pcVar9 + 1;
      if (((bVar4 == 0x23) && (*pcVar9 == 0x23)) && (pcVar9[1] == 0x23)) {
        uVar11 = 0xffffffff;
        pcVar9 = pcVar9 + 2;
      }
      else {
        uVar11 = (ulonglong)
                 ((uint)(uVar11 >> 8) ^
                 *(uint *)(&DAT_1806c25c0 + (uVar11 & 0xff ^ (ulonglong)bVar4) * 4));
      }
      bVar4 = *pcVar9;
    } while (bVar4 != 0);
    *(undefined1 *)(lVar6 + 0xce) = 1;
    lVar1 = *(longlong *)(lVar1 + 0x14f8);
    fVar10 = (float)~(uint)uVar11;
    *(undefined4 *)(lVar1 + 0x118) = uVar5;
    *(float *)(lVar1 + 0x11c) = fVar18;
    *(undefined1 *)(lVar1 + 0x159) = 1;
    uVar8 = DAT_180960ec0;
    if (DAT_181107480 == 0) {
      uVar8 = DAT_1809f54bc;
    }
    cVar3 = FUN_18032dfa0(0,"presets_fa_cloud",
                          "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 640 512\" width=\"640\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M0 336C0 416 64 480 144 480L512 480C582 480 640 423 640 352C640 291 596 239 537 227C541 216 544 205 544 192C544 139 501 96 448 96C428 96 409 102 394 113C367 65 315 32 256 32C167 32 96 104 96 192C96 195 96 198 96 201C40 220 0 274 0 336L0 336Z\"/></svg>"
                          ,"PRESETS",DAT_181107480 == 0,uVar8);
    if ((cVar3 != '\0') && (DAT_181107480 != 0)) {
      DAT_181107100 = DAT_181107480;
      DAT_181107480 = 0;
      local_res18 = fVar10;
      plVar7 = (longlong *)FUN_18034f560(extraout_XMM0_Qa,local_e8,&local_res18);
      lVar1 = *plVar7;
      *(undefined8 *)(lVar1 + 0x14) = 0;
      *(undefined8 *)(lVar1 + 0x1c) = 0;
      *(undefined4 *)(lVar1 + 0x24) = 0xffffffff;
    }
    lVar1 = DAT_180ca0a50;
    bVar12 = DAT_181107480 == 1;
    fVar21 = *(float *)(DAT_180ca0a50 + 0x1efc);
    *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
    lVar1 = *(longlong *)(lVar1 + 0x14f8);
    *(float *)(lVar1 + 0x118) = fVar21 + fVar17;
    *(float *)(lVar1 + 0x11c) = fVar18;
    *(undefined1 *)(lVar1 + 0x159) = 1;
    uVar8 = DAT_180960ec0;
    if (bVar12) {
      uVar8 = DAT_1809f54bc;
    }
    cVar3 = FUN_18032dfa0(1,"presets_fa_extensions",
                          "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 512 512\" width=\"512\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M320 0L448 0C483 0 512 29 512 64L512 192C512 201 504 208 496 208L444 208C437 208 432 214 432 220L432 224C432 242 417 256 400 256C382 256 368 242 368 224L368 220C368 214 362 208 356 208L320 208C311 208 304 201 304 192L304 160C304 152 311 144 320 144L336 144C353 144 368 130 368 112C368 95 353 80 336 80L320 80C311 80 304 73 304 64L304 16C304 8 311 0 320 0ZM0 256L0 128C0 93 28 64 64 64L192 64C200 64 208 72 208 80L208 116C208 123 213 128 220 128L224 128C241 128 256 143 256 160C256 178 241 192 224 192L220 192C213 192 208 198 208 204L208 256C208 265 200 272 192 272L160 272C151 272 144 265 144 256L144 240C144 223 129 208 112 208C94 208 80 223 80 240L80 256C80 265 72 272 64 272L16 272C7 272 0 265 0 256ZM0 448L0 320C0 312 7 304 16 304L192 304C200 304 208 312 208 320L208 352C208 361 200 368 192 368L176 368C158 368 144 383 144 400C144 418 158 432 176 432L192 432C200 432 208 440 208 448L208 496C208 504 200 512 192 512L64 512C28 512 0 483 0 448ZM240 320C240 312 247 304 256 304L288 304C296 304 304 312 304 320L304 336C304 354 318 368 336 368C353 368 368 354 368 336L368 320C368 312 375 304 384 304L432 304C440 304 448 312 448 320L448 448C448 483 419 512 384 512L256 512C247 512 240 504 240 496L240 320Z\"/></svg>"
                          ,"EXTENSIONS",bVar12,uVar8);
    if ((cVar3 != '\0') && (DAT_181107480 != 1)) {
      DAT_181107100 = DAT_181107480;
      DAT_181107480 = 1;
      local_res18 = fVar10;
      plVar7 = (longlong *)FUN_18034f560(extraout_XMM0_Qa_00,local_e8,&local_res18);
      lVar1 = *plVar7;
      *(undefined8 *)(lVar1 + 0x14) = 0;
      *(undefined8 *)(lVar1 + 0x1c) = 0;
      *(undefined4 *)(lVar1 + 0x24) = 0xffffffff;
    }
    local_c8 = 0xffffffff;
    local_d8 = _DAT_1808ad560;
    uStack_d0 = _UNK_1808ad568;
    fVar16 = *(float *)(DAT_180ca0a50 + 0x1efc) + fVar17;
    local_res18 = fVar10;
    FUN_18034a380(_DAT_1808ad560,local_e8,&local_res18,&local_d8);
    fVar10 = DAT_1808ac34c;
    fVar14 = (float)FUN_1802b3660(local_e8[0] + 0x14,DAT_1808ac34c,DAT_1808ac118,0);
    lVar1 = DAT_180ca0a50;
    fVar21 = DAT_1809f376c;
    fVar22 = fVar10 - fVar14;
    if (fVar14 < fVar10) {
      bVar12 = DAT_181107100 == 0;
      DAT_1809f376c = DAT_1809f376c * fVar22;
      *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
      lVar2 = *(longlong *)(lVar1 + 0x14f8);
      *(float *)(lVar2 + 0x118) = fVar16;
      *(float *)(lVar2 + 0x11c) = fVar18;
      *(undefined1 *)(lVar2 + 0x159) = 1;
      *(undefined1 *)(*(longlong *)(lVar1 + 0x14f8) + 0xce) = 1;
      lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x14f8) + 0x2c8);
      uVar8 = *(undefined4 *)(lVar1 + 0x20);
      if (bVar12) {
        FUN_18032b170();
      }
      else {
        FUN_18032dc00();
      }
      FUN_1802b3c30(lVar1,uVar8,*(undefined4 *)(lVar1 + 0x20),fVar22);
    }
    lVar2 = DAT_180ca0a50;
    bVar12 = DAT_181107480 == 0;
    DAT_1809f376c = fVar21 * fVar14;
    *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
    lVar1 = *(longlong *)(lVar2 + 0x14f8);
    *(float *)(lVar1 + 0x118) = fVar16;
    *(float *)(lVar1 + 0x11c) = fVar18;
    *(undefined1 *)(lVar1 + 0x159) = 1;
    *(undefined1 *)(*(longlong *)(lVar2 + 0x14f8) + 0xce) = 1;
    lVar1 = *(longlong *)(*(longlong *)(lVar2 + 0x14f8) + 0x2c8);
    uVar8 = *(undefined4 *)(lVar1 + 0x20);
    if (bVar12) {
      FUN_18032b170();
    }
    else {
      FUN_18032dc00();
    }
    DAT_1809f376c = fVar21;
    FUN_1802b3c30(lVar1,uVar8,*(undefined4 *)(lVar1 + 0x20),fVar14);
    fVar21 = fVar18 + DAT_1808ac97c + fVar17;
    fVar15 = (float)FUN_18053fc00(*(float *)(lVar6 + 0x58) * fVar15);
    local_res20 = *(float *)(lVar6 + 100);
    if (*(float *)(lVar6 + 100) <= fVar15) {
      local_res20 = fVar15;
    }
    fVar16 = fVar21 + fVar10;
    local_res18 = (*(float *)(lVar6 + 0x28) + *(float *)(lVar6 + 0x30)) - local_res20;
    local_res20 = local_res20 + *(float *)(lVar6 + 0x28);
    local_res1c = fVar16;
    local_res24 = fVar21;
    FUN_1803fe590(*(undefined8 *)(lVar6 + 0x2c8),&local_res20,&local_res18,DAT_180960f48,0,0);
    lVar6 = DAT_180ca0a50;
    fVar15 = DAT_1809f376c;
    fVar21 = fVar16 + fVar17;
    if (fVar10 <= fVar14) {
      fVar10 = fVar21;
    }
    else {
      DAT_1809f376c = fVar22 * DAT_1809f376c;
      *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
      lVar1 = *(longlong *)(lVar6 + 0x14f8);
      *(undefined4 *)(lVar1 + 0x118) = uVar5;
      *(float *)(lVar1 + 0x11c) = fVar21;
      *(undefined1 *)(lVar1 + 0x159) = 1;
      *(undefined1 *)(*(longlong *)(lVar6 + 0x14f8) + 0xce) = 1;
      lVar6 = *(longlong *)(*(longlong *)(lVar6 + 0x14f8) + 0x2c8);
      uVar8 = *(undefined4 *)(lVar6 + 0x20);
      FUN_18032e550(DAT_181107100);
      FUN_1802b3c30(lVar6,uVar8,*(undefined4 *)(lVar6 + 0x20),fVar22);
      fVar10 = *(float *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x11c);
      if (fVar10 <= fVar21) {
        fVar10 = fVar21;
      }
    }
    lVar1 = DAT_180ca0a50;
    DAT_1809f376c = fVar15 * fVar14;
    *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
    lVar6 = *(longlong *)(lVar1 + 0x14f8);
    *(undefined4 *)(lVar6 + 0x118) = uVar5;
    *(float *)(lVar6 + 0x11c) = fVar21;
    *(undefined1 *)(lVar6 + 0x159) = 1;
    *(undefined1 *)(*(longlong *)(lVar1 + 0x14f8) + 0xce) = 1;
    lVar6 = *(longlong *)(*(longlong *)(lVar1 + 0x14f8) + 0x2c8);
    uVar8 = *(undefined4 *)(lVar6 + 0x20);
    FUN_18032e550(DAT_181107480);
    DAT_1809f376c = fVar15;
    FUN_1802b3c30(lVar6,uVar8,*(undefined4 *)(lVar6 + 0x20),fVar14);
    lVar6 = DAT_180ca0a50;
    local_res18 = 298.0;
    fVar15 = *(float *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x11c);
    *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
    if (fVar15 <= fVar10) {
      fVar15 = fVar10;
    }
    lVar6 = *(longlong *)(lVar6 + 0x14f8);
    *(undefined4 *)(lVar6 + 0x118) = uVar5;
    *(float *)(lVar6 + 0x11c) = fVar18;
    *(undefined1 *)(lVar6 + 0x159) = 1;
    fVar17 = (fVar15 - fVar18) - fVar17;
    local_res1c = fVar16 - fVar18;
    if (fVar16 - fVar18 <= fVar17) {
      local_res1c = fVar17;
    }
    FUN_1804174f0(&local_res18);
    FUN_1803d8a40(1);
    FUN_1802b5590();
  }
  return;
}



/* ===== 18032ee80 FUN_18032ee80 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_18032ee80(undefined8 *param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  ulonglong *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong *plVar16;
  undefined1 auStack_158 [32];
  ulonglong local_138;
  undefined4 local_130;
  ulonglong local_128;
  ulonglong local_120;
  ulonglong local_118;
  ulonglong *local_110;
  longlong *local_108;
  undefined8 *local_100;
  ulonglong local_f8;
  ulonglong *local_f0;
  longlong *local_e8;
  undefined8 *local_e0;
  undefined *local_d8;
  ulonglong local_c8;
  ulonglong uStack_c0;
  ulonglong local_b8;
  ulonglong uStack_b0;
  ulonglong local_a8;
  ulonglong uStack_a0;
  ulonglong local_98;
  ulonglong uStack_90;
  ulonglong local_88;
  ulonglong uStack_80;
  ulonglong local_78;
  ulonglong uStack_70;
  ulonglong local_68;
  
  local_68 = DAT_180919500 ^ (ulonglong)auStack_158;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  local_130 = 1;
  local_d8 = &DAT_1809e8e50;
  local_100 = param_1;
  local_e0 = param_1;
  iVar8 = FUN_1804e4d70(&DAT_1809e8e50);
  uVar5 = _UNK_1808ad418;
  uVar4 = _DAT_1808ad410;
  if (iVar8 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809e8e9c == 0x7fffffff) {
    DAT_1809e8e9c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  local_108 = DAT_180cd0270;
  local_e8 = DAT_180cd0278;
  plVar16 = DAT_180cd0270;
  if (DAT_180cd0270 != DAT_180cd0278) {
    do {
      local_110 = *(ulonglong **)(*plVar16 + 0x38);
      local_f0 = *(ulonglong **)(*plVar16 + 0x40);
      local_108 = plVar16;
      if (local_110 != local_f0) {
        do {
          puVar11 = local_110;
          if (local_110[2] == 0) {
            for (lVar9 = *(longlong *)(*plVar16 + 0x68); lVar9 != *(longlong *)(*plVar16 + 0x70);
                lVar9 = lVar9 + 600) {
              if ((*(longlong *)(lVar9 + 0x38) == 0) && (*(int *)(lVar9 + 4) != 0xe))
              goto LAB_18032ef9d;
            }
          }
          else {
LAB_18032ef9d:
            plVar1 = (longlong *)*plVar16;
            local_c8 = 0;
            uStack_c0 = 0;
            local_b8 = 0;
            uStack_b0 = 0;
            uVar2 = plVar1[2];
            plVar10 = plVar16;
            if (0xf < (ulonglong)plVar1[3]) {
              plVar10 = plVar1;
            }
            local_120 = uVar2;
            if (0x7fffffffffffffff < uVar2) {
                    /* WARNING: Subroutine does not return */
              FUN_180011990();
            }
            puVar3 = (ulonglong *)*plVar10;
            if (uVar2 < 0x10) {
              uVar14 = 0xf;
              uStack_b0 = 0xf;
              local_c8 = *puVar3;
              uStack_c0 = puVar3[1];
              local_b8 = uVar2;
            }
            else {
              uVar14 = uVar2 | 0xf;
              if (uVar14 < 0x8000000000000000) {
                if (uVar14 < 0x16) {
                  uVar14 = 0x16;
                }
              }
              else {
                uVar14 = 0x7fffffffffffffff;
              }
              local_138 = FUN_18000fb70(uVar14 + 1);
              local_c8 = local_138;
              local_b8 = uVar2;
              uStack_b0 = uVar14;
              FUN_180540530(local_138,puVar3,uVar2 + 1);
            }
            uVar6 = uStack_c0;
            local_a8 = 0;
            uStack_a0 = 0;
            local_98 = 0;
            uStack_90 = 0;
            uVar2 = puVar11[2];
            if (0xf < puVar11[3]) {
              puVar11 = (ulonglong *)*puVar11;
            }
            local_128 = local_c8;
            if (0x7fffffffffffffff < uVar2) {
                    /* WARNING: Subroutine does not return */
              FUN_180011990();
            }
            if (uVar2 < 0x10) {
              uVar12 = 0xf;
              uStack_90 = 0xf;
              local_118 = *puVar11;
              uStack_a0 = puVar11[1];
              local_a8 = local_118;
              local_98 = uVar2;
            }
            else {
              uVar12 = uVar2 | 0xf;
              if (uVar12 < 0x8000000000000000) {
                if (uVar12 < 0x16) {
                  uVar12 = 0x16;
                }
              }
              else {
                uVar12 = 0x7fffffffffffffff;
              }
              local_118 = FUN_18000fb70(uVar12 + 1);
              local_a8 = local_118;
              local_98 = uVar2;
              uStack_90 = uVar12;
              FUN_180540530(local_118,puVar11,uVar2 + 1);
            }
            uVar7 = uStack_a0;
            puVar11 = (ulonglong *)*plVar16;
            if (puVar11[0x12] != 0) {
              puVar11 = puVar11 + 0x10;
            }
            local_88 = 0;
            uStack_80 = 0;
            local_78 = 0;
            uStack_70 = 0;
            local_138 = puVar11[2];
            if (0xf < puVar11[3]) {
              puVar11 = (ulonglong *)*puVar11;
            }
            if (0x7fffffffffffffff < local_138) {
                    /* WARNING: Subroutine does not return */
              FUN_180011990();
            }
            if (local_138 < 0x10) {
              uVar15 = 0xf;
              uStack_70 = 0xf;
              local_88 = *puVar11;
              uStack_80 = puVar11[1];
              uVar13 = local_88;
              local_78 = local_138;
            }
            else {
              uVar15 = local_138 | 0xf;
              if (uVar15 < 0x8000000000000000) {
                if (uVar15 < 0x16) {
                  uVar15 = 0x16;
                }
              }
              else {
                uVar15 = 0x7fffffffffffffff;
              }
              local_f8 = FUN_18000fb70(uVar15 + 1);
              local_78 = local_138;
              local_88 = local_f8;
              uStack_70 = uVar15;
              FUN_180540530(local_f8,puVar11,local_138 + 1);
              uVar13 = local_f8;
            }
            puVar11 = (ulonglong *)local_100[1];
            if (puVar11 == (ulonglong *)local_100[2]) {
              FUN_180352250(local_100,puVar11,&local_c8);
            }
            else {
              *puVar11 = local_128;
              puVar11[1] = uVar6;
              puVar11[2] = local_120;
              puVar11[3] = uVar14;
              local_b8 = uVar4;
              uStack_b0 = uVar5;
              local_c8 = local_c8 & 0xffffffffffffff00;
              puVar11[4] = local_118;
              puVar11[5] = uVar7;
              puVar11[6] = uVar2;
              puVar11[7] = uVar12;
              local_98 = uVar4;
              uStack_90 = uVar5;
              local_a8 = local_a8 & 0xffffffffffffff00;
              puVar11[8] = uVar13;
              puVar11[9] = uStack_80;
              puVar11[10] = local_138;
              puVar11[0xb] = uVar15;
              local_78 = uVar4;
              uStack_70 = uVar5;
              local_88 = local_88 & 0xffffffffffffff00;
              local_100[1] = local_100[1] + 0x60;
            }
            FUN_18000f890(&local_88);
            FUN_18000f890(&local_a8);
            FUN_18000f890(&local_c8);
            plVar16 = local_108;
          }
          local_110 = local_110 + 10;
        } while (local_110 != local_f0);
      }
      local_108 = plVar16 + 1;
      plVar16 = local_108;
    } while (local_108 != local_e8);
    param_1 = local_100;
  }
  FUN_1804e4e90(&DAT_1809e8e50);
  return param_1;
}



/* ===== 18032f320 FUN_18032f320 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18032f320(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char cVar8;
  int iVar9;
  undefined4 uVar10;
  ulonglong uVar11;
  undefined8 ***pppuVar12;
  undefined8 uVar13;
  ulonglong *puVar14;
  undefined8 *puVar15;
  longlong lVar16;
  undefined8 *puVar17;
  int iVar18;
  undefined8 *puVar19;
  ulonglong uVar20;
  undefined8 ***pppuVar21;
  longlong *plVar22;
  longlong lVar23;
  undefined1 *puVar24;
  undefined1 *puVar25;
  ulonglong uVar26;
  int iVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  undefined1 auStack_208 [8];
  undefined1 auStack_200 [24];
  undefined1 local_1e8;
  undefined4 local_1e4;
  undefined8 *local_1e0;
  undefined4 local_1d8;
  undefined4 local_1d4;
  undefined4 local_1d0;
  undefined *local_1c8;
  undefined8 ***local_1c0;
  undefined8 local_1b8;
  undefined8 *local_1b0;
  undefined8 *local_1a8;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined8 uStack_18c;
  undefined8 uStack_184;
  undefined8 ***local_178;
  longlong lStack_170;
  ulonglong local_168;
  ulonglong local_160;
  undefined1 local_158;
  undefined1 local_157;
  undefined1 local_156;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined4 local_138;
  undefined4 local_134;
  undefined8 ***local_130 [2];
  undefined8 local_120;
  ulonglong local_118;
  ulonglong local_108;
  ulonglong uStack_100;
  ulonglong local_f8;
  ulonglong uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  ulonglong local_d8;
  ulonglong local_d0;
  undefined1 local_c8 [32];
  undefined1 local_a8 [32];
  ulonglong local_88;
  
  uVar5 = DAT_1809f73f0;
  local_88 = DAT_180919500 ^ (ulonglong)auStack_208;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  puVar17 = (undefined8 *)&DAT_1809f73e0;
  if (0xf < DAT_1809f73f8) {
    puVar17 = _DAT_1809f73e0;
  }
  if (0x7fffffffffffffff < DAT_1809f73f0) {
                    /* WARNING: Subroutine does not return */
    FUN_180011990();
  }
  local_1d8 = DAT_1811076c0;
  if (DAT_1809f73f0 < 0x10) {
    local_d8 = DAT_1809f73f0;
    uVar28 = 0xf;
    local_d0 = 0xf;
    local_1b8 = *puVar17;
    uStack_e0 = puVar17[1];
    local_e8 = local_1b8;
  }
  else {
    uVar28 = DAT_1809f73f0 | 0xf;
    if (uVar28 < 0x8000000000000000) {
      if (uVar28 < 0x16) {
        uVar28 = 0x16;
      }
    }
    else {
      uVar28 = 0x7fffffffffffffff;
    }
    local_1b8 = FUN_18000fb70(uVar28 + 1);
    local_d8 = uVar5;
    local_e8 = local_1b8;
    local_d0 = uVar28;
    FUN_180540530(local_1b8,puVar17,uVar5 + 1);
  }
  uVar29 = DAT_1809f6f48;
  local_178 = (undefined8 ***)0x0;
  lStack_170 = 0;
  local_168 = 0;
  local_160 = 0;
  plVar22 = (longlong *)&DAT_1809f6f38;
  if (0xf < DAT_1809f6f50) {
    plVar22 = DAT_1809f6f38;
  }
  if (0x7fffffffffffffff < DAT_1809f6f48) {
                    /* WARNING: Subroutine does not return */
    FUN_180011990();
  }
  if (DAT_1809f6f48 < 0x10) {
    local_168 = DAT_1809f6f48;
    uVar26 = 0xf;
    local_160 = 0xf;
    pppuVar12 = (undefined8 ***)*plVar22;
    lStack_170 = plVar22[1];
    local_1c0 = pppuVar12;
    local_178 = pppuVar12;
  }
  else {
    uVar11 = DAT_1809f6f48 | 0xf;
    uVar26 = 0x7fffffffffffffff;
    if ((uVar11 < 0x8000000000000000) && (uVar26 = uVar11, uVar11 < 0x16)) {
      uVar26 = 0x16;
    }
    pppuVar12 = (undefined8 ***)FUN_18000fb70(uVar26 + 1);
    local_168 = uVar29;
    local_1c0 = pppuVar12;
    local_178 = pppuVar12;
    local_160 = uVar26;
    FUN_180540530(pppuVar12,plVar22,uVar29 + 1);
  }
  local_1d4 = DAT_181107484;
  local_1d0 = DAT_1811074f8;
  local_1e4 = DAT_181107674;
  local_158 = DAT_1809f72e0;
  local_157 = DAT_1809f72e1;
  local_156 = DAT_1809f72e2;
  local_154 = DAT_1809f72e4;
  local_150 = DAT_1809f72e8;
  local_14c = DAT_1809f72ec;
  local_148 = _DAT_1809f72f0;
  uStack_140 = _DAT_1809f72f8;
  local_138 = DAT_1809f7300;
  local_134 = DAT_1809f7304;
  FUN_180024b50(local_130,&DAT_1809f7308);
  lVar16 = DAT_181107748;
  uVar7 = _DAT_18110717c;
  uVar6 = _DAT_181107174;
  uVar4 = DAT_1809f5b50;
  uVar3 = _DAT_1809f5b48;
  uVar2 = _DAT_1809f5b40;
  puVar24 = auStack_208;
  local_198 = DAT_181107168;
  uStack_194 = _DAT_18110716c;
  uStack_190 = DAT_181107170;
  uStack_18c = _DAT_181107174;
  uStack_184 = _DAT_18110717c;
  local_1e8 = DAT_180cd0f08;
  lVar23 = DAT_181107740;
  if (DAT_181107740 != DAT_181107748) {
    do {
      FUN_1803276c0(lVar23);
      lVar23 = lVar23 + 0xe8;
    } while (lVar23 != lVar16);
    DAT_181107748 = DAT_181107740;
  }
  FUN_18002bc20(&DAT_180ca1700);
  DAT_1809f73f0 = 0;
  puVar17 = (undefined8 *)&DAT_1809f73e0;
  if (0xf < DAT_1809f73f8) {
    puVar17 = _DAT_1809f73e0;
  }
  *(undefined1 *)puVar17 = 0;
  lVar16 = DAT_180ca0a50;
  *(undefined4 *)(DAT_180ca0a50 + 0x1f48) = 0xc6ea6000;
  *(undefined4 *)(lVar16 + 0x1f4c) = 0xc6ea6000;
  *(undefined8 *)(lVar16 + 0x1f50) = 0;
  *(undefined4 *)(lVar16 + 0x1f3c) = 1;
  *(uint *)(lVar16 + 0x1f38) = *(uint *)(lVar16 + 0x1f38) | 3;
  *(undefined4 *)(lVar16 + 0x1f58) = 0x44480000;
  *(undefined4 *)(lVar16 + 0x1f5c) = 0x43c80000;
  *(undefined4 *)(lVar16 + 8000) = 1;
  cVar8 = FUN_1803e4f20("##search_index",0,0x333ab);
  puVar25 = auStack_208;
  if (cVar8 != '\0') {
    local_1c8 = (undefined *)0x0;
    local_1e0 = (undefined8 *)0x0;
    FUN_1803e0300(&local_1e0,&local_1c8,0);
    DAT_180cd0f08 = 1;
    DAT_1811076c0 = 0;
    DAT_181107674 = 0;
    DAT_1811074f8 = 0;
    DAT_181107484 = 0;
    FUN_1803e8a70(0);
    FUN_180337e50(0);
    FUN_1802b9bd0();
    FUN_1802b8b90();
    iVar27 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
    if (iVar27 < 2) {
      FUN_1803ebc00("Calling PopID() too many times!");
    }
    else {
      *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar27 + -1;
    }
    DAT_1811076c0 = 1;
    DAT_181107674 = 0;
    DAT_1811074f8 = 0;
    DAT_181107484 = 0;
    FUN_1803e8a70(1);
    FUN_180337e50(1);
    FUN_1802b9bd0();
    FUN_1802b8b90();
    iVar27 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
    if (iVar27 < 2) {
      FUN_1803ebc00("Calling PopID() too many times!");
    }
    else {
      *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar27 + -1;
    }
    DAT_1811076c0 = 2;
    DAT_181107674 = 0;
    DAT_1811074f8 = 0;
    DAT_181107484 = 0;
    FUN_1803e8a70(2);
    FUN_180337e50(2);
    FUN_1802b9bd0();
    FUN_1802b8b90();
    iVar27 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
    if (iVar27 < 2) {
      FUN_1803ebc00("Calling PopID() too many times!");
    }
    else {
      *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar27 + -1;
    }
    DAT_1811076c0 = 2;
    DAT_181107674 = 1;
    DAT_1811074f8 = 1;
    DAT_181107484 = 1;
    FUN_1803e8a70(3);
    FUN_180337e50(2);
    FUN_1802b9bd0();
    FUN_1802b8b90();
    iVar27 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
    if (iVar27 < 2) {
      FUN_1803ebc00("Calling PopID() too many times!");
    }
    else {
      *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar27 + -1;
    }
    DAT_1811076c0 = 3;
    DAT_181107674 = 0;
    DAT_1811074f8 = 0;
    DAT_181107484 = 0;
    FUN_1803e8a70(4);
    FUN_180337e50(3);
    FUN_1802b9bd0();
    FUN_1802b8b90();
    iVar27 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
    if (iVar27 < 2) {
      FUN_1803ebc00("Calling PopID() too many times!");
    }
    else {
      *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar27 + -1;
    }
    DAT_1811076c0 = 5;
    DAT_181107674 = 0;
    DAT_1811074f8 = 0;
    DAT_181107484 = 0;
    FUN_1803e8a70(5);
    FUN_180337e50(5);
    FUN_1802b9bd0();
    FUN_1802b8b90();
    iVar27 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
    if (iVar27 < 2) {
      FUN_1803ebc00("Calling PopID() too many times!");
    }
    else {
      *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar27 + -1;
    }
    DAT_181107674 = 0;
    DAT_1811074f8 = 0;
    DAT_181107484 = 0;
    FUN_18032ee80(&local_1b0);
    local_1e0 = local_1a8;
    iVar27 = 8;
    puVar17 = local_1b0;
    if (local_1b0 != local_1a8) {
      do {
        DAT_1811076c0 = 8;
        if (puVar17 != (undefined8 *)&DAT_1809f73e0) {
          if ((ulonglong)puVar17[3] < 0x10) {
            puVar15 = puVar17;
          }
          else {
            puVar15 = (undefined8 *)*puVar17;
          }
          FUN_180029840(&DAT_1809f73e0,puVar15,puVar17[2]);
        }
        puVar15 = puVar17 + 4;
        if ((longlong **)puVar15 != &DAT_1809f6f38) {
          if ((ulonglong)puVar17[7] < 0x10) {
            puVar19 = puVar15;
          }
          else {
            puVar19 = (undefined8 *)*puVar15;
          }
          FUN_180029840(&DAT_1809f6f38,puVar19,puVar17[6]);
        }
        puVar19 = puVar17 + 8;
        if ((undefined8 **)puVar19 != &DAT_1809f72a0) {
          if (0xf < (ulonglong)puVar17[0xb]) {
            puVar19 = (undefined8 *)*puVar19;
          }
          FUN_180029840(&DAT_1809f72a0,puVar19,puVar17[10]);
        }
        uVar13 = FUN_180066a20(local_a8,"script/",puVar17);
        puVar14 = (ulonglong *)FUN_1800134a0(uVar13,&DAT_1806e08bc,1);
        local_108 = *puVar14;
        uStack_100 = puVar14[1];
        local_f8 = puVar14[2];
        uStack_f0 = puVar14[3];
        puVar14[2] = 0;
        puVar14[3] = 0xf;
        *(undefined1 *)puVar14 = 0;
        puVar15 = (undefined8 *)FUN_1800667a0(local_c8,&local_108,puVar15);
        if (0xf < (ulonglong)puVar15[3]) {
          puVar15 = (undefined8 *)*puVar15;
        }
        FUN_1803e89e0(puVar15);
        FUN_18000f890(local_c8);
        if (0xf < uStack_f0) {
          uVar20 = uStack_f0 + 1;
          uVar11 = local_108;
          if (0xfff < uVar20) {
            uVar11 = *(ulonglong *)(local_108 - 8);
            if (0x1f < (local_108 - uVar11) - 8) {
              lVar16 = 5;
              pcVar1 = (code *)swi(0x29);
              iVar27 = (*pcVar1)();
              puVar24 = auStack_200;
              goto LAB_18032fc77;
            }
            uVar20 = uStack_f0 + 0x28;
          }
          thunk_FUN_1803d64e0(uVar11,uVar20);
        }
        local_f8 = 0;
        uStack_f0 = 0xf;
        local_108 = local_108 & 0xffffffffffffff00;
        FUN_18000f890(local_a8);
        local_1c8 = &DAT_1809e8e50;
        iVar9 = FUN_1804e4d70(&DAT_1809e8e50);
        if (iVar9 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1804e4a90(5);
        }
        if (DAT_1809e8e9c == 0x7fffffff) {
          DAT_1809e8e9c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
          FUN_1804e4a90(6);
        }
        lVar16 = FUN_180098330(&DAT_1809f73e0);
        FUN_1802b8a20(0);
        if (lVar16 != 0) {
          FUN_180321890(lVar16);
        }
        FUN_1802b9760();
        FUN_1804e4e90(&DAT_1809e8e50);
        FUN_1802b9bd0();
        FUN_1802b8b90();
        iVar9 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
        if (iVar9 < 2) {
          FUN_1803ebc00("Calling PopID() too many times!");
        }
        else {
          *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar9 + -1;
        }
        puVar17 = puVar17 + 0xc;
      } while (puVar17 != local_1e0);
    }
    FUN_180349490(&local_1b0);
    DAT_1809f72b0 = 0;
    puVar17 = &DAT_1809f72a0;
    if (0xf < DAT_1809f72b8) {
      puVar17 = DAT_1809f72a0;
    }
    *(undefined1 *)puVar17 = 0;
    DAT_1809f73f0 = 0;
    puVar17 = (undefined8 *)&DAT_1809f73e0;
    if (0xf < DAT_1809f73f8) {
      puVar17 = _DAT_1809f73e0;
    }
    *(undefined1 *)puVar17 = 0;
    pppuVar12 = &local_178;
    if (0xf < uVar26) {
      pppuVar12 = local_1c0;
    }
    FUN_180029840(&DAT_1809f6f38,pppuVar12,uVar29);
    DAT_1811076c0 = 3;
    DAT_180cd0d57 = 1;
    lVar16 = *(longlong *)(DAT_180ca0a50 + 0x14f8);
    uVar10 = FUN_1803e8900(lVar16,"ambience");
    iVar9 = *(int *)(lVar16 + 0x10c);
    if (*(int *)(lVar16 + 0x108) == iVar9) {
      iVar18 = *(int *)(lVar16 + 0x108) + 1;
      if (iVar9 != 0) {
        iVar27 = iVar9 + iVar9 / 2;
      }
      if (iVar18 < iVar27) {
        iVar18 = iVar27;
      }
      FUN_18007e1d0(lVar16 + 0x108,iVar18);
    }
    *(undefined4 *)(*(longlong *)(lVar16 + 0x110) + (longlong)*(int *)(lVar16 + 0x108) * 4) = uVar10
    ;
    *(int *)(lVar16 + 0x108) = *(int *)(lVar16 + 0x108) + 1;
    FUN_1802b8a20(0);
    lVar16 = FUN_180303520();
    FUN_1802fb830(lVar16 + 0x264);
    FUN_1802b9760();
    FUN_1802b9bd0();
    FUN_1802b8b90();
    lVar16 = *(longlong *)(DAT_180ca0a50 + 0x14f8);
    iVar27 = *(int *)(lVar16 + 0x108);
    if (iVar27 < 2) {
      FUN_1803ebc00("Calling PopID() too many times!");
      puVar24 = auStack_208;
    }
    else {
LAB_18032fc77:
      *(int *)(lVar16 + 0x108) = iVar27 + -1;
    }
    DAT_180cd0d57 = 0;
    DAT_180cd0f08 = puVar24[0x20];
    *(undefined8 *)(puVar24 + -8) = 0x18032fc96;
    FUN_1803e0390();
    puVar25 = puVar24;
    uVar26 = local_160;
    pppuVar12 = local_178;
    uVar29 = local_168;
  }
  *(undefined8 *)(puVar25 + -8) = 0x18032fca7;
  FUN_1803e75b0();
  DAT_1811076c0 = *(undefined4 *)(puVar25 + 0x30);
  puVar17 = &local_e8;
  if (0xf < uVar28) {
    puVar17 = *(undefined8 **)(puVar25 + 0x50);
  }
  *(undefined8 *)(puVar25 + -8) = 0x18032fcce;
  FUN_180029840(&DAT_1809f73e0,puVar17,uVar5);
  pppuVar21 = &local_178;
  if (0xf < uVar26) {
    pppuVar21 = pppuVar12;
  }
  *(undefined8 *)(puVar25 + -8) = 0x18032fce9;
  FUN_180029840(&DAT_1809f6f38,pppuVar21,uVar29);
  DAT_181107484 = *(undefined4 *)(puVar25 + 0x34);
  DAT_1811074f8 = *(undefined4 *)(puVar25 + 0x38);
  DAT_181107674 = *(undefined4 *)(puVar25 + 0x24);
  DAT_1809f72e0 = local_158;
  DAT_1809f72e1 = local_157;
  DAT_1809f72e2 = local_156;
  DAT_1809f72e4 = local_154;
  DAT_1809f72e8 = local_150;
  DAT_1809f72ec = local_14c;
  _DAT_1809f72f0 = local_148;
  _DAT_1809f72f8 = uStack_140;
  DAT_1809f7300 = local_138;
  DAT_1809f7304 = local_134;
  pppuVar12 = local_130;
  if (0xf < local_118) {
    pppuVar12 = local_130[0];
  }
  *(undefined8 *)(puVar25 + -8) = 0x18032fd87;
  FUN_180029840(&DAT_1809f7308,pppuVar12,local_120);
  DAT_181107168 = *(undefined4 *)(puVar25 + 0x70);
  _DAT_18110716c = *(undefined4 *)(puVar25 + 0x74);
  DAT_181107170 = *(undefined4 *)(puVar25 + 0x78);
  DAT_180cd04aa = 1;
  *(undefined8 *)(puVar25 + -8) = 0x18032fdb6;
  _DAT_1809f5b40 = uVar2;
  _DAT_1809f5b48 = uVar3;
  DAT_1809f5b50 = uVar4;
  _DAT_181107174 = uVar6;
  _DAT_18110717c = uVar7;
  FUN_180315290();
  DAT_180cd04aa = 0;
  DAT_180cd0ebe = 1;
  *(undefined8 *)(puVar25 + -8) = 0x18032fdcd;
  FUN_18000f890(local_130);
  *(undefined8 *)(puVar25 + -8) = 0x18032fdd7;
  FUN_18000f890(&local_178);
  *(undefined8 *)(puVar25 + -8) = 0x18032fde1;
  FUN_18000f890(&local_e8);
  *(undefined8 *)(puVar25 + -8) = 0x18032fdf0;
  return;
}



/* ===== 18032fe50 FUN_18032fe50 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18032fe50(void)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  byte bVar6;
  char cVar7;
  int iVar8;
  size_t sVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  undefined8 uVar12;
  longlong lVar13;
  int *piVar14;
  ulonglong uVar15;
  longlong *plVar16;
  longlong *plVar17;
  undefined8 *_Buf2;
  int *piVar18;
  longlong lVar19;
  longlong *plVar20;
  int *piVar21;
  ulonglong uVar22;
  undefined1 *puVar23;
  undefined1 *puVar24;
  int *piVar25;
  uint uVar26;
  uint uVar27;
  byte unaff_R12B;
  int *unaff_R13;
  int *piVar28;
  ulonglong unaff_R15;
  int iVar29;
  undefined1 auStack_1e8 [8];
  undefined1 auStack_1e0 [60];
  undefined4 local_1a4;
  undefined4 local_1a0;
  int *local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 *local_168;
  undefined8 local_160;
  undefined1 local_158 [32];
  int local_138;
  int local_134;
  undefined8 local_130;
  undefined8 uStack_128;
  ulonglong local_120;
  ulonglong local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined1 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  ulonglong local_b0;
  ulonglong local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  ulonglong local_90;
  ulonglong local_88;
  undefined1 local_80;
  undefined1 local_78 [32];
  ulonglong local_58;
  
  local_58 = DAT_180919500 ^ (ulonglong)auStack_1e8;
  uVar26 = 0;
  local_1a0 = 0;
  local_1a4 = 0;
  if (DAT_181107728 != DAT_181107730) {
    FUN_18034e020();
    DAT_181107730 = DAT_181107728;
  }
  local_178 = 0;
  uStack_170 = 0;
  local_168 = (undefined8 *)0x0;
  local_160 = 0;
  sVar9 = strlen(&DAT_1811071f0);
  FUN_1800133a0(&local_178,&DAT_1811071f0,sVar9);
  puVar10 = (undefined8 *)FUN_1802b3db0(local_158,&local_178);
  if (puVar10 != &DAT_1809f54d0) {
    if (7 < DAT_1809f54e8) {
      uVar15 = DAT_1809f54e8 * 2 + 2;
      lVar19 = CONCAT44(DAT_1809f54d0._4_4_,CONCAT22(DAT_1809f54d0._2_2_,(undefined2)DAT_1809f54d0))
      ;
      lVar13 = lVar19;
      if (0xfff < uVar15) {
        lVar13 = *(longlong *)(lVar19 + -8);
        if (0x1f < (lVar19 - lVar13) - 8U) {
          pcVar1 = (code *)swi(0x29);
          (*pcVar1)(5);
          puVar23 = auStack_1e0;
          goto LAB_1803300a6;
        }
        uVar15 = DAT_1809f54e8 * 2 + 0x29;
      }
      thunk_FUN_1803d64e0(lVar13,uVar15);
    }
    DAT_1809f54d0._4_4_ = *(undefined4 *)((longlong)puVar10 + 4);
    uRam00000001809f54d8 = *(undefined4 *)(puVar10 + 1);
    uRam00000001809f54dc = *(undefined4 *)((longlong)puVar10 + 0xc);
    DAT_1809f54d0._0_2_ = (undefined2)*(undefined4 *)puVar10;
    DAT_1809f54d0._2_2_ = (undefined2)((uint)*(undefined4 *)puVar10 >> 0x10);
    DAT_1809f54e0 = puVar10[2];
    DAT_1809f54e8 = puVar10[3];
    puVar10[2] = 0;
    puVar10[3] = 7;
    *(undefined2 *)puVar10 = 0;
  }
  FUN_1800289e0(local_158);
  FUN_18000f890(&local_178);
  puVar23 = auStack_1e8;
  puVar24 = auStack_1e8;
  if ((DAT_1811071f0 != '\0') &&
     (local_180 = DAT_181107748, puVar24 = auStack_1e8, unaff_R13 = DAT_181107740,
     DAT_181107740 != DAT_181107748)) {
    do {
      *(int **)(puVar23 + 0x50) = unaff_R13 + 2;
      puVar23[0x38] = (char)unaff_R13[0x38];
      *(int **)(puVar23 + 0x30) = unaff_R13 + 0x30;
      *(int **)(puVar23 + 0x28) = unaff_R13 + 0x28;
      *(int **)(puVar23 + 0x20) = unaff_R13 + 0x20;
      iVar29 = unaff_R13[1];
      iVar8 = *unaff_R13;
      *(undefined8 *)(puVar23 + -8) = 0x18033001e;
      FUN_180327f60(puVar23 + 0x70,iVar8,iVar29,unaff_R13 + 2);
      unaff_R12B = 0;
      puVar23[0x40] = 0;
      lVar13 = *(longlong *)(puVar23 + 0x78);
      lVar19 = *(longlong *)(puVar23 + 0x70);
      if (lVar19 != lVar13) {
        do {
          *(undefined8 *)(puVar23 + -8) = 0x18033003e;
          bVar6 = FUN_1802b3ef0(lVar19);
          unaff_R12B = unaff_R12B | bVar6;
          lVar19 = lVar19 + 0x20;
        } while (lVar19 != lVar13);
        puVar23[0x40] = unaff_R12B;
      }
      unaff_R15 = 0;
      lVar13 = *(longlong *)(unaff_R13 + 0x12);
      if (*(longlong *)(unaff_R13 + 0x14) - lVar13 >> 5 != 0) {
        do {
          *(ulonglong *)(puVar23 + 0x58) = unaff_R15 * 0x20 + lVar13;
          if (unaff_R15 <
              (ulonglong)(*(longlong *)(unaff_R13 + 0x1a) - *(longlong *)(unaff_R13 + 0x18) >> 5)) {
            *(ulonglong *)(puVar23 + 0x60) = unaff_R15 * 0x20 + *(longlong *)(unaff_R13 + 0x18);
          }
          else {
LAB_1803300a6:
            *(undefined8 *)(puVar23 + 0x60) = 0;
          }
          plVar20 = (longlong *)(puVar23 + 0x58);
          do {
            plVar17 = (longlong *)*plVar20;
            if ((plVar17 != (longlong *)0x0) && (plVar17[2] != 0)) {
              plVar16 = plVar20;
              if (0xf < (ulonglong)plVar17[3]) {
                plVar16 = plVar17;
              }
              lVar13 = *plVar16;
              *(undefined8 *)(puVar23 + -8) = 0x1803300df;
              puVar11 = (undefined4 *)FUN_1802b3fe0(local_158,lVar13);
              puVar10 = *(undefined8 **)(puVar23 + 0x78);
              if (puVar10 == local_168) {
                *(undefined8 *)(puVar23 + -8) = 0x18033012b;
                FUN_18009bb20(puVar23 + 0x70,puVar10,puVar11);
              }
              else {
                *puVar10 = 0;
                puVar10[1] = 0;
                puVar10[2] = 0;
                puVar10[3] = 0;
                uVar2 = puVar11[1];
                uVar3 = puVar11[2];
                uVar4 = puVar11[3];
                *(undefined4 *)puVar10 = *puVar11;
                *(undefined4 *)((longlong)puVar10 + 4) = uVar2;
                *(undefined4 *)(puVar10 + 1) = uVar3;
                *(undefined4 *)((longlong)puVar10 + 0xc) = uVar4;
                uVar12 = *(undefined8 *)(puVar11 + 6);
                puVar10[2] = *(undefined8 *)(puVar11 + 4);
                puVar10[3] = uVar12;
                *(undefined8 *)(puVar11 + 4) = 0;
                *(undefined8 *)(puVar11 + 6) = 0xf;
                *(undefined1 *)puVar11 = 0;
                *(longlong *)(puVar23 + 0x78) = *(longlong *)(puVar23 + 0x78) + 0x20;
              }
              *(undefined8 *)(puVar23 + -8) = 0x180330135;
              FUN_18000f890(local_158);
              *(undefined8 *)(puVar23 + -8) = 0x180330143;
              cVar7 = FUN_1802b3ef0(*(longlong *)(puVar23 + 0x78) + -0x20);
              uVar5 = DAT_180cd040c;
              if (cVar7 == '\0') {
                DAT_180cd040c = 1;
                if (0xf < (ulonglong)plVar17[3]) {
                  plVar17 = (longlong *)*plVar17;
                }
                *(undefined8 *)(puVar23 + -8) = 0x18033016c;
                FUN_1802b3fe0(local_158,plVar17);
                uVar26 = uVar26 | 9;
                *(uint *)(puVar23 + 0x44) = uVar26;
                *(undefined8 *)(puVar23 + -8) = 0x180330186;
                DAT_180cd040c = uVar5;
                cVar7 = FUN_1802b3ef0(local_158);
                bVar6 = 0;
                if (cVar7 != '\0') goto LAB_18033018a;
              }
              else {
LAB_18033018a:
                bVar6 = 1;
              }
              unaff_R12B = unaff_R12B | bVar6;
              if ((uVar26 & 1) != 0) {
                uVar26 = uVar26 & 0xfffffffe;
                *(uint *)(puVar23 + 0x44) = uVar26;
                *(undefined8 *)(puVar23 + -8) = 0x1803301a5;
                FUN_18000f890(local_158);
              }
            }
            plVar20 = plVar20 + 1;
          } while (plVar20 != (longlong *)(puVar23 + 0x68));
          puVar23[0x40] = unaff_R12B;
          *(uint *)(puVar23 + 0x48) = uVar26;
          unaff_R15 = unaff_R15 + 1;
          lVar13 = *(longlong *)(unaff_R13 + 0x12);
        } while (unaff_R15 < (ulonglong)(*(longlong *)(unaff_R13 + 0x14) - lVar13 >> 5));
      }
      plVar20 = (longlong *)(unaff_R13 + 10);
      if ((char)unaff_R13[0x1e] == '\0') {
        *(undefined8 *)(puVar23 + -8) = 0x18033026a;
        cVar7 = FUN_1802b3ef0(plVar20);
      }
      else {
        plVar17 = plVar20;
        if (0xf < *(ulonglong *)(unaff_R13 + 0x10)) {
          plVar17 = (longlong *)*plVar20;
        }
        *(undefined8 *)(puVar23 + -8) = 0x1803301ff;
        uVar12 = FUN_1802b3fe0(local_78,plVar17);
        uVar27 = uVar26 | 2;
        *(uint *)(puVar23 + 0x48) = uVar27;
        *(uint *)(puVar23 + 0x44) = uVar27;
        *(undefined8 *)(puVar23 + -8) = 0x180330213;
        cVar7 = FUN_1802b3ef0(uVar12);
        uVar5 = DAT_180cd040c;
        if (cVar7 == '\0') {
          DAT_180cd040c = 1;
          if (0xf < *(ulonglong *)(unaff_R13 + 0x10)) {
            plVar20 = (longlong *)*plVar20;
          }
          *(undefined8 *)(puVar23 + -8) = 0x18033023b;
          FUN_1802b3fe0(local_158,plVar20);
          uVar26 = uVar26 | 0x16;
          *(uint *)(puVar23 + 0x48) = uVar26;
          *(uint *)(puVar23 + 0x44) = uVar26;
          *(undefined8 *)(puVar23 + -8) = 0x180330256;
          DAT_180cd040c = uVar5;
          cVar7 = FUN_1802b3ef0(local_158);
          uVar27 = uVar26;
          if (cVar7 == '\0') {
            cVar7 = '\0';
            goto LAB_18033026d;
          }
        }
        uVar26 = uVar27;
        cVar7 = '\x01';
      }
LAB_18033026d:
      if ((uVar26 & 4) != 0) {
        uVar26 = uVar26 & 0xfffffffb;
        *(uint *)(puVar23 + 0x48) = uVar26;
        *(uint *)(puVar23 + 0x44) = uVar26;
        *(undefined8 *)(puVar23 + -8) = 0x180330287;
        FUN_18000f890(local_158);
      }
      if ((uVar26 & 2) != 0) {
        uVar26 = uVar26 & 0xfffffffd;
        *(uint *)(puVar23 + 0x48) = uVar26;
        *(uint *)(puVar23 + 0x44) = uVar26;
        *(undefined8 *)(puVar23 + -8) = 0x1803302a2;
        FUN_18000f890(local_78);
      }
      piVar28 = DAT_181107730;
      if (cVar7 != '\0' || unaff_R12B != 0) {
        if (DAT_181107728 == DAT_181107730) {
LAB_180330411:
          local_138 = *unaff_R13;
          local_134 = unaff_R13[1];
          local_130 = 0;
          uStack_128 = 0;
          local_120 = 0;
          local_118 = 0;
          uVar15 = *(ulonglong *)(unaff_R13 + 6);
          puVar10 = *(undefined8 **)(puVar23 + 0x50);
          if (0xf < *(ulonglong *)(unaff_R13 + 8)) {
            puVar10 = (undefined8 *)*puVar10;
          }
          if (0x7fffffffffffffff < uVar15) {
                    /* WARNING: Subroutine does not return */
            *(undefined8 *)(puVar23 + -8) = 0x180330746;
            FUN_180011990();
          }
          if (uVar15 < 0x10) {
            local_120 = uVar15;
            local_118 = 0xf;
            local_130 = *puVar10;
            uStack_128 = puVar10[1];
          }
          else {
            uVar22 = uVar15 | 0xf;
            if (uVar22 < 0x8000000000000000) {
              if (uVar22 < 0x16) {
                uVar22 = 0x16;
              }
            }
            else {
              uVar22 = 0x7fffffffffffffff;
            }
            *(undefined8 *)(puVar23 + -8) = 0x18033049a;
            local_130 = FUN_18000fb70(uVar22 + 1);
            *(undefined8 *)(puVar23 + -8) = 0x1803304b5;
            local_120 = uVar15;
            local_118 = uVar22;
            FUN_180540530(local_130,puVar10,uVar15 + 1);
          }
          local_110 = 0;
          local_108 = 0;
          uStack_100 = 0;
          *(undefined8 *)(puVar23 + -8) = 0x1803304e3;
          FUN_180068970(&local_110,
                        *(longlong *)(puVar23 + 0x78) - *(longlong *)(puVar23 + 0x70) >> 5,
                        puVar23 + 0x70,puVar23 + 0x78);
          local_f8 = 0;
          local_f0 = 0;
          local_e8 = 0;
          uStack_e0 = 0;
          lVar13 = *(longlong *)(unaff_R13 + 0x14);
          lVar19 = *(longlong *)(unaff_R13 + 0x12);
          *(undefined8 *)(puVar23 + -8) = 0x180330511;
          FUN_180068970(&local_f0,lVar13 - lVar19 >> 5,unaff_R13 + 0x12,unaff_R13 + 0x14);
          local_d8 = 0;
          uStack_d0 = 0;
          local_c8 = 0;
          lVar13 = *(longlong *)(unaff_R13 + 0x1a);
          lVar19 = *(longlong *)(unaff_R13 + 0x18);
          *(undefined8 *)(puVar23 + -8) = 0x180330539;
          FUN_180068970(&local_d8,lVar13 - lVar19 >> 5);
          local_c0 = 0;
          uStack_b8 = 0;
          local_b0 = 0;
          local_a8 = 0;
          uVar15 = *(ulonglong *)(unaff_R13 + 0x24);
          if (*(ulonglong *)(unaff_R13 + 0x26) < 0x10) {
            piVar28 = unaff_R13 + 0x20;
          }
          else {
            piVar28 = *(int **)(unaff_R13 + 0x20);
          }
          if (0x7fffffffffffffff < uVar15) {
                    /* WARNING: Subroutine does not return */
            *(undefined8 *)(puVar23 + -8) = 0x180330740;
            FUN_180011990();
          }
          if (uVar15 < 0x10) {
            local_a8 = 0xf;
            local_c0 = *(undefined8 *)piVar28;
            uStack_b8 = *(undefined8 *)(piVar28 + 2);
            local_b0 = uVar15;
          }
          else {
            uVar22 = uVar15 | 0xf;
            if (uVar22 < 0x8000000000000000) {
              if (uVar22 < 0x16) {
                uVar22 = 0x16;
              }
            }
            else {
              uVar22 = 0x7fffffffffffffff;
            }
            *(undefined8 *)(puVar23 + -8) = 0x1803305b6;
            local_c0 = FUN_18000fb70(uVar22 + 1);
            *(undefined8 *)(puVar23 + -8) = 0x1803305d1;
            local_b0 = uVar15;
            local_a8 = uVar22;
            FUN_180540530(local_c0,piVar28,uVar15 + 1);
          }
          local_a0 = 0;
          uStack_98 = 0;
          local_90 = 0;
          local_88 = 0;
          uVar15 = *(ulonglong *)(unaff_R13 + 0x2c);
          if (*(ulonglong *)(unaff_R13 + 0x2e) < 0x10) {
            piVar28 = unaff_R13 + 0x28;
          }
          else {
            piVar28 = *(int **)(unaff_R13 + 0x28);
          }
          if (0x7fffffffffffffff < uVar15) {
                    /* WARNING: Subroutine does not return */
            *(undefined **)(puVar23 + -8) = &UNK_18033074c;
            FUN_180011990();
          }
          if (uVar15 < 0x10) {
            local_88 = 0xf;
            iVar29 = *piVar28;
            local_a0 = *(undefined8 *)piVar28;
            uStack_98 = *(undefined8 *)(piVar28 + 2);
            local_90 = uVar15;
          }
          else {
            uVar22 = uVar15 | 0xf;
            if (uVar22 < 0x8000000000000000) {
              if (uVar22 < 0x16) {
                uVar22 = 0x16;
              }
            }
            else {
              uVar22 = 0x7fffffffffffffff;
            }
            *(undefined8 *)(puVar23 + -8) = 0x18033064e;
            local_a0 = FUN_18000fb70(uVar22 + 1);
            *(undefined8 *)(puVar23 + -8) = 0x180330669;
            local_90 = uVar15;
            local_88 = uVar22;
            iVar29 = FUN_180540530(local_a0,piVar28,uVar15 + 1);
          }
          local_80 = (undefined1)unaff_R13[0x38];
          if (DAT_181107730 == DAT_181107738) {
            *(undefined8 *)(puVar23 + -8) = 0x1803306a9;
            FUN_1803527e0(iVar29,DAT_181107730,&local_138);
          }
          else {
            *(undefined8 *)(puVar23 + -8) = 0x180330690;
            FUN_1803591b0(DAT_181107730,&local_138);
            DAT_181107730 = DAT_181107730 + 0x30;
          }
          *(undefined8 *)(puVar23 + -8) = 0x1803306b3;
          FUN_18000f890(&local_a0);
          *(undefined8 *)(puVar23 + -8) = 0x1803306bc;
          FUN_18000f890(&local_c0);
          *(undefined8 *)(puVar23 + -8) = 0x1803306c5;
          FUN_1800288b0(&local_d8);
          *(undefined8 *)(puVar23 + -8) = 0x1803306ce;
          FUN_1800288b0(&local_f0);
          *(undefined8 *)(puVar23 + -8) = 0x1803306d7;
          FUN_1800288b0(&local_110);
          *(undefined8 *)(puVar23 + -8) = 0x1803306e0;
          FUN_18000f890(&local_130);
          piVar25 = DAT_181107730 + -0x30;
        }
        else {
          piVar25 = (int *)0x0;
          iVar29 = *unaff_R13;
          puVar10 = *(undefined8 **)(puVar23 + 0x50);
          piVar21 = DAT_181107728;
          do {
            if ((*piVar21 == iVar29) && (piVar21[1] == unaff_R13[1])) {
              piVar14 = piVar21 + 2;
              if (*(ulonglong *)(unaff_R13 + 8) < 0x10) {
                _Buf2 = puVar10;
              }
              else {
                _Buf2 = (undefined8 *)*puVar10;
              }
              sVar9 = *(size_t *)(piVar21 + 6);
              if (0xf < *(ulonglong *)(piVar21 + 8)) {
                piVar14 = *(int **)piVar14;
              }
              if (sVar9 == *(size_t *)(unaff_R13 + 6)) {
                if (sVar9 != 0) {
                  *(undefined8 *)(puVar23 + -8) = 0x18033031b;
                  iVar8 = memcmp(piVar14,_Buf2,sVar9);
                  if (iVar8 != 0) goto LAB_1803303f4;
                }
                *(undefined8 *)(puVar23 + -8) = 0x180330330;
                cVar7 = FUN_180348c40(piVar21 + 0x12,unaff_R13 + 0x12);
                if (cVar7 != '\0') {
                  *(undefined8 *)(puVar23 + -8) = 0x180330345;
                  cVar7 = FUN_180348c40(piVar21 + 0x18,unaff_R13 + 0x18);
                  if (cVar7 != '\0') {
                    piVar14 = piVar21 + 0x1e;
                    if (*(ulonglong *)(unaff_R13 + 0x26) < 0x10) {
                      piVar18 = unaff_R13 + 0x20;
                    }
                    else {
                      piVar18 = *(int **)(unaff_R13 + 0x20);
                    }
                    sVar9 = *(size_t *)(piVar21 + 0x22);
                    if (0xf < *(ulonglong *)(piVar21 + 0x24)) {
                      piVar14 = *(int **)piVar14;
                    }
                    if (sVar9 == *(size_t *)(unaff_R13 + 0x24)) {
                      if (sVar9 != 0) {
                        *(undefined8 *)(puVar23 + -8) = 0x180330392;
                        iVar8 = memcmp(piVar14,piVar18,sVar9);
                        if (iVar8 != 0) goto LAB_1803303f4;
                      }
                      piVar14 = piVar21 + 0x26;
                      if (*(ulonglong *)(unaff_R13 + 0x2e) < 0x10) {
                        piVar18 = unaff_R13 + 0x28;
                      }
                      else {
                        piVar18 = *(int **)(unaff_R13 + 0x28);
                      }
                      sVar9 = *(size_t *)(piVar21 + 0x2a);
                      if (0xf < *(ulonglong *)(piVar21 + 0x2c)) {
                        piVar14 = *(int **)piVar14;
                      }
                      if (sVar9 == *(size_t *)(unaff_R13 + 0x2c)) {
                        if (sVar9 != 0) {
                          *(undefined8 *)(puVar23 + -8) = 0x1803303de;
                          iVar8 = memcmp(piVar14,piVar18,sVar9);
                          if (iVar8 != 0) goto LAB_1803303f4;
                        }
                        if ((char)piVar21[0x2e] == (char)unaff_R13[0x38]) {
                          piVar25 = piVar21;
                        }
                      }
                    }
                  }
                }
              }
            }
LAB_1803303f4:
            piVar21 = piVar21 + 0x30;
          } while (piVar21 != piVar28);
          uVar26 = *(uint *)(puVar23 + 0x48);
          if (piVar25 == (int *)0x0) goto LAB_180330411;
        }
        *(byte *)(piVar25 + 0x10) = *(byte *)(piVar25 + 0x10) | puVar23[0x40];
      }
      *(undefined8 *)(puVar23 + -8) = 0x180330700;
      FUN_1800288b0(puVar23 + 0x70);
      unaff_R13 = unaff_R13 + 0x3a;
      puVar24 = puVar23;
    } while (unaff_R13 != *(int **)(puVar23 + 0x68));
  }
  *(undefined8 *)(puVar24 + -8) = 0x180330727;
  return;
}



/* ===== 180330750 FUN_180330750 ===== */

void FUN_180330750(longlong param_1)

{
  FUN_18000f890(param_1 + 0x98);
  FUN_18000f890(param_1 + 0x78);
  FUN_1800288b0(param_1 + 0x60);
  FUN_1800288b0(param_1 + 0x48);
  FUN_1800288b0(param_1 + 0x28);
  FUN_18000f890(param_1 + 8);
  return;
}



/* ===== 1803307a0 FUN_1803307a0 ===== */

void FUN_1803307a0(longlong param_1,float *param_2)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  char cVar7;
  char cVar8;
  char *pcVar9;
  longlong lVar10;
  char *pcVar11;
  ulonglong uVar12;
  longlong lVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  float local_res18;
  float local_res1c;
  float local_res20;
  float local_res24;
  ulonglong in_stack_fffffffffffffed8;
  float *pfVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  ulonglong uVar21;
  undefined4 uVar22;
  float local_e8 [2];
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  
  uVar5 = DAT_1808acd08;
  uVar15 = DAT_1808ac8dc;
  if (DAT_181107488 != 0) {
    lVar13 = DAT_181107a08;
    if (DAT_181107a08 == 0) {
      lVar13 = *(longlong *)(DAT_180ca0a50 + 0x11f0);
    }
    fVar16 = *param_2;
    uVar22 = 0;
    fVar17 = 0.0;
    uVar21 = 0;
    uVar20 = 0;
    uVar19 = (undefined4)((ulonglong)&DAT_1806f02a8 >> 0x20);
    pfVar18 = (float *)(in_stack_fffffffffffffed8 & 0xffffffff00000000);
    FUN_18040a2f0(&local_res18,lVar13,DAT_1808ac8dc,DAT_1808acd08,pfVar18,&DAT_1806f02a8,0,0,0);
    fVar1 = local_res18;
    lVar10 = DAT_181107488;
    uVar3 = DAT_1808ac864;
    if (*(longlong *)(DAT_181107488 + 0x30) - *(longlong *)(DAT_181107488 + 0x28) >> 5 != 0) {
      uVar12 = 0;
      fVar14 = (float)FUN_18053fc00(DAT_1808ac7fc);
      uVar4 = DAT_1808acbc0;
      do {
        if (uVar12 != 0) {
          local_res1c = param_2[1];
          fVar16 = fVar1 + fVar16;
          pfVar18 = &local_res18;
          local_res18 = fVar16;
          FUN_180322fd0(param_1,"nl_glyph_angle_right_10",
                        "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 320 512\" width=\"320\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M278 234C291 246 291 267 278 279L118 439C106 451 85 451 73 439C60 427 60 406 73 394L210 256L73 119C60 107 60 86 73 74C85 61 106 61 118 74L278 234L278 234ZM278 234Z\"/></svg>"
                        ,uVar4,pfVar18,uVar3,DAT_180960ecc);
          fVar16 = fVar14 + fVar1 + fVar16;
          lVar10 = DAT_181107488;
        }
        pcVar11 = (char *)(*(longlong *)(lVar10 + 0x28) + uVar12 * 0x20);
        pcVar9 = pcVar11;
        if (0xf < *(ulonglong *)(pcVar11 + 0x18)) {
          pcVar9 = *(char **)pcVar11;
        }
        local_res24 = param_2[1];
        local_res20 = fVar16;
        if ((((DAT_180960ecc & 0xff000000) != 0) && (pcVar9 != (char *)0x0)) && (*pcVar9 != '\0')) {
          if (lVar13 == 0) {
            lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x18);
          }
          else {
            lVar10 = lVar13;
          }
          local_e0 = *(undefined4 *)(param_1 + 0x60);
          uStack_dc = *(undefined4 *)(param_1 + 100);
          uStack_d8 = *(undefined4 *)(param_1 + 0x68);
          uStack_d4 = *(undefined4 *)(param_1 + 0x6c);
          pfVar18 = (float *)CONCAT44((int)((ulonglong)pfVar18 >> 0x20),DAT_180960ecc);
          FUN_18040a900(lVar10,param_1,uVar15,&local_res20,pfVar18,&local_e0,pcVar9,0,
                        uVar21 & 0xffffffff00000000,0,uVar22);
        }
        if (0xf < *(ulonglong *)(pcVar11 + 0x18)) {
          pcVar11 = *(char **)pcVar11;
        }
        uVar22 = 0;
        uVar21 = 0;
        uVar20 = 0;
        pfVar18 = (float *)((ulonglong)pfVar18 & 0xffffffff00000000);
        FUN_18040a2f0(local_e8,lVar13,uVar15,uVar5,pfVar18,pcVar11,0,0,0);
        uVar19 = (undefined4)((ulonglong)pcVar11 >> 0x20);
        uVar12 = uVar12 + 1;
        fVar16 = fVar16 + local_e8[0];
        lVar10 = DAT_181107488;
      } while (uVar12 < (ulonglong)
                        (*(longlong *)(DAT_181107488 + 0x30) - *(longlong *)(DAT_181107488 + 0x28)
                        >> 5));
    }
    lVar13 = DAT_180ca0a50;
    fVar1 = param_2[1];
    fVar16 = fVar16 + DAT_1808ac750;
    *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
    lVar13 = *(longlong *)(lVar13 + 0x14f8);
    *(float *)(lVar13 + 0x118) = fVar16;
    *(float *)(lVar13 + 0x11c) = fVar1;
    *(undefined1 *)(lVar13 + 0x159) = 1;
    FUN_1803e89e0("##search_link");
    local_res18 = (float)FUN_18053fc00(DAT_1808ac8d8);
    local_res1c = 13.62;
    cVar7 = FUN_180415e30("##link",&local_res18,0);
    cVar8 = FUN_1803dd930(0);
    fVar1 = DAT_1808ac1f4;
    local_res18 = *(float *)(DAT_180ca0a50 + 0x1ee8);
    if ((*(float *)(DAT_180ca0a50 + 0x1578) == 0.0) ||
       (*(float *)(DAT_180ca0a50 + 0x1578) != local_res18)) {
      if (cVar8 != '\0') {
        fVar17 = DAT_1808ac1f4;
      }
    }
    else {
      fVar17 = DAT_1808ac34c;
    }
    local_c4 = 0;
    local_c0 = 0xffffffff;
    local_d0 = fVar17;
    local_cc = fVar17;
    local_c8 = fVar17;
    FUN_18034a380(local_res18,&local_e0,&local_res18,&local_d0);
    uVar15 = FUN_1802b3660(CONCAT44(uStack_dc,local_e0) + 0x14,fVar17,DAT_1808ac118,0);
    iVar2 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
    if (iVar2 < 2) {
      FUN_1803ebc00("Calling PopID() too many times!");
    }
    else {
      *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar2 + -1;
    }
    uVar6 = DAT_180960ecc;
    local_res18 = (float)FUN_18053fc00(fVar16);
    local_res1c = (float)FUN_18053fc00(param_2[1]);
    uVar15 = FUN_1802b38e0((int)(longlong)((float)(uVar6 >> 0x18) * DAT_1808ac254 + fVar1) << 0x18 |
                           uVar6 & 0xffffff,uVar6,uVar15);
    FUN_180322fd0(param_1,"nl_glyph_link_10",
                  "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 640 512\" width=\"640\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M579 268C636 212 636 120 579 64C529 14 451 7 393 48L391 49C377 60 374 80 384 94C394 108 414 112 429 101L430 100C462 77 506 81 534 109C566 140 566 191 534 223L422 335C390 367 339 367 308 335C280 307 276 263 299 231L300 230C311 215 307 195 293 185C279 175 259 178 248 193L247 194C206 252 213 330 263 380C319 437 411 437 467 380L579 268ZM60 245C3 301 3 393 60 448C110 498 189 505 246 464L248 463C262 452 265 433 255 419C245 405 225 401 210 412L209 413C177 436 133 432 105 404C74 372 74 321 105 290L217 178C249 146 300 146 331 178C359 206 363 249 340 282L339 283C328 298 332 318 346 328C360 338 381 335 391 320L392 319C433 261 427 182 377 132C320 76 229 76 172 132L60 245L60 245Z\"/></svg>"
                  ,DAT_1808acc20,&local_res18,CONCAT44(uVar19,uVar3),CONCAT44(uVar20,uVar15));
    if (cVar7 != '\0') {
      DAT_1809f6f30 = DAT_181107298;
    }
  }
  return;
}



/* ===== 180330c90 FUN_180330c90 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180330c90(int *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  longlong *plVar4;
  undefined1 auStack_b8 [32];
  undefined *local_98;
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_b8;
  DAT_181106f10 = *param_1;
  piVar2 = param_1 + 0x1e;
  if (piVar2 != (int *)&DAT_1809f5b70) {
    if (*(ulonglong *)(param_1 + 0x24) < 0x10) {
      piVar3 = piVar2;
    }
    else {
      piVar3 = *(int **)piVar2;
    }
    FUN_180029840(&DAT_1809f5b70,piVar3,*(undefined8 *)(param_1 + 0x22));
  }
  piVar3 = param_1 + 0x26;
  if (piVar3 != (int *)&DAT_1809f7400) {
    if (0xf < *(ulonglong *)(param_1 + 0x2c)) {
      piVar3 = *(int **)piVar3;
    }
    FUN_180029840(&DAT_1809f7400,piVar3,*(undefined8 *)(param_1 + 0x2a));
  }
  if (*(longlong *)(param_1 + 0x22) != 0) {
    local_98 = &DAT_1809e8e50;
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
    piVar2 = (int *)FUN_180098330(piVar2);
    if ((piVar2 != (int *)0x0) && (piVar2 != param_1 + -0xe)) {
      plVar4 = (longlong *)(param_1 + 0x26);
      if (0xf < *(ulonglong *)(param_1 + 0x2c)) {
        plVar4 = (longlong *)*plVar4;
      }
      FUN_180029840(piVar2 + 0x34,plVar4,*(undefined8 *)(param_1 + 0x2a));
    }
    FUN_1804e4e90(&DAT_1809e8e50);
  }
  iVar1 = *param_1;
  if ((iVar1 - 2U < 2) && (DAT_1809f51d8 = iVar1, iVar1 == 2)) {
    DAT_1811074f8 = param_1[1];
  }
  if ((char)param_1[0x2e] != '\0') {
    _DAT_180ce20b4 = 1;
  }
  local_88 = 0xffffffff;
  local_84 = 0;
  uStack_78 = 0;
  local_70 = 0;
  local_68 = 0xf;
  local_80 = 0;
  local_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  DAT_1809f7030 = -1;
  DAT_1809f7034 = 0;
  FUN_18002ba60(&DAT_1809f7038,&local_80);
  FUN_180067380(&DAT_1809f7058,&local_60);
  FUN_180067380(&DAT_1809f7070,&local_48);
  DAT_1809f7088 = local_30;
  DAT_1809f7090 = local_28;
  FUN_1800288b0(&local_48);
  FUN_1800288b0(&local_60);
  FUN_18000f890(&local_80);
  if (*(longlong *)(param_1 + 0x12) != *(longlong *)(param_1 + 0x14)) {
    DAT_1809f7030 = *param_1;
    DAT_1809f7034 = param_1[1];
    piVar2 = param_1 + 2;
    if (piVar2 != (int *)&DAT_1809f7038) {
      if (0xf < *(ulonglong *)(param_1 + 8)) {
        piVar2 = *(int **)piVar2;
      }
      FUN_180029840(&DAT_1809f7038,piVar2,*(undefined8 *)(param_1 + 6));
    }
    FUN_180067240(&DAT_1809f7058,param_1 + 0x12);
    FUN_180067240(&DAT_1809f7070,param_1 + 0x18);
    DAT_1809f7090 = *(int *)(DAT_180ca0a50 + 4) + 0xb4;
  }
  DAT_1811071f0 = 0;
  DAT_180962436 = 1;
  FUN_18030f680();
  return;
}



/* ===== 180330f70 FUN_180330f70 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180330f70(void)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  byte bVar8;
  char cVar9;
  uint uVar10;
  undefined4 uVar11;
  longlong *plVar12;
  undefined8 *****pppppuVar13;
  ulonglong uVar14;
  longlong lVar15;
  char *pcVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  undefined8 *****pppppuVar19;
  undefined4 *puVar20;
  longlong lVar21;
  ulonglong uVar22;
  undefined8 *****pppppuVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined1 auStack_208 [32];
  undefined4 local_1e8;
  undefined4 local_1e0;
  undefined8 local_1d8;
  uint local_1d0 [2];
  uint local_1c8 [2];
  undefined8 *****local_1c0;
  longlong local_1b8;
  float local_1b0;
  float local_1ac;
  uint local_1a8;
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined8 local_19c;
  float local_190;
  float fStack_18c;
  float fStack_188;
  undefined4 uStack_184;
  undefined4 local_180;
  undefined8 uStack_17c;
  ulonglong local_170 [2];
  undefined8 *****local_160;
  longlong lStack_158;
  ulonglong local_150;
  ulonglong local_148;
  undefined8 *****local_140;
  longlong lStack_138;
  ulonglong local_130;
  ulonglong local_128;
  undefined1 local_118;
  undefined1 local_117;
  undefined1 local_116;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined8 *****local_f0 [2];
  undefined8 local_e0;
  ulonglong local_d8;
  ulonglong local_c8;
  
  lVar15 = DAT_180ca0a50;
  local_c8 = DAT_180919500 ^ (ulonglong)auStack_208;
  if (DAT_181107728 == DAT_181107730) {
    return;
  }
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  lVar15 = *(longlong *)(lVar15 + 0x14f8);
  uVar10 = FUN_1803e8900(lVar15,"##search_height");
  local_1c8[0] = uVar10;
  if (*(char *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xd3) != '\0') {
    local_1d0[0] = uVar10;
    plVar12 = (longlong *)FUN_18034f560(DAT_180ca0a50,local_170,local_1d0);
    lVar21 = *plVar12;
    *(undefined8 *)(lVar21 + 0x14) = 0;
    *(undefined8 *)(lVar21 + 0x1c) = 0;
    *(undefined4 *)(lVar21 + 0x24) = 0xffffffff;
  }
  uVar24 = (((((ulonglong)(byte)uVar10 ^ 0xcbf29ce484222325) * 0x100000001b3 ^
             (ulonglong)(uVar10 >> 8 & 0xff)) * 0x100000001b3 ^ (ulonglong)(uVar10 >> 0x10 & 0xff))
            * 0x100000001b3 ^ (ulonglong)(uVar10 >> 0x18)) * 0x100000001b3 & DAT_181107640;
  lVar21 = *(longlong *)(DAT_181107628 + 8 + uVar24 * 0x10);
  if (lVar21 == DAT_181107618) {
LAB_1803310d4:
    lVar21 = DAT_181107618;
  }
  else {
    uVar1 = *(uint *)(lVar21 + 0x10);
    while (uVar10 != uVar1) {
      if (lVar21 == *(longlong *)(DAT_181107628 + uVar24 * 0x10)) goto LAB_1803310d4;
      lVar21 = *(longlong *)(lVar21 + 8);
      uVar1 = *(uint *)(lVar21 + 0x10);
    }
    if (lVar21 == 0) goto LAB_1803310d4;
  }
  fVar32 = 0.0;
  if (lVar21 == DAT_181107618) {
    fVar29 = 0.0;
  }
  else {
    fVar29 = *(float *)(lVar21 + 0x14);
  }
  local_1d8 = 0;
  FUN_1803d89a0(0xe,&local_1d8);
  fVar31 = DAT_1808ac34c;
  fVar30 = *(float *)(lVar15 + 0x11c);
  local_1d8 = 0x3f80000000000000;
  FUN_1803ec550(&local_1d8,DAT_1808acda0);
  local_1b0 = *(float *)(lVar15 + 0x28);
  local_1d8 = CONCAT44(fVar30 + fVar31,local_1b0 + *(float *)(lVar15 + 0x30));
  local_1e0 = 0;
  local_1e8 = 0;
  local_1ac = fVar30;
  FUN_1803fe590(*(undefined8 *)(lVar15 + 0x2c8),&local_1b0,&local_1d8,
                (int)(longlong)
                     ((float)(DAT_180960f48 >> 0x18) * *(float *)(DAT_180ca0a50 + 0xc9c) +
                     DAT_1808ac1f4) << 0x18 | DAT_180960f48 & 0xffffff);
  fVar28 = fVar29;
  if (DAT_1808ac540 <= fVar29) {
    fVar28 = DAT_1808ac540;
  }
  fVar27 = 0.0;
  if (0.0 <= fVar28 - fVar31) {
    fVar27 = fVar28 - fVar31;
  }
  *(float *)(lVar15 + 0x11c) = (*(float *)(lVar15 + 0x11c) - fVar30) * fVar27 + fVar30;
  FUN_1803d8a40(1);
  local_1d8 = 0x4120000041200000;
  FUN_1803d89a0(2,&local_1d8);
  local_1d8 = 0;
  FUN_1803d89a0(5,&local_1d8);
  uVar24 = 0xffffffff;
  pcVar16 = "##search_results_scroll";
  bVar8 = 0x23;
  do {
    pcVar16 = pcVar16 + 1;
    if (((bVar8 == 0x23) && (*pcVar16 == 0x23)) && (pcVar16[1] == 0x23)) {
      uVar24 = 0xffffffff;
      pcVar16 = pcVar16 + 2;
    }
    else {
      uVar24 = (ulonglong)
               ((uint)(uVar24 >> 8) ^
               *(uint *)(&DAT_1806c25c0 + (uVar24 & 0xff ^ (ulonglong)bVar8) * 4));
    }
    bVar8 = *pcVar16;
  } while (bVar8 != 0);
  uVar10 = ~(uint)uVar24;
  uVar24 = (((((ulonglong)(uVar10 & 0xff) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
             (ulonglong)(uVar10 >> 8 & 0xff)) * 0x100000001b3 ^ (ulonglong)(uVar10 >> 0x10 & 0xff))
            * 0x100000001b3 ^ (ulonglong)(uVar10 >> 0x18)) * 0x100000001b3 & DAT_1811077a0;
  lVar15 = *(longlong *)(DAT_181107788 + 8 + uVar24 * 0x10);
  if (lVar15 != DAT_181107778) {
    uVar1 = *(uint *)(lVar15 + 0x10);
    while (uVar10 != uVar1) {
      if (lVar15 == *(longlong *)(DAT_181107788 + uVar24 * 0x10)) goto LAB_1803312f3;
      lVar15 = *(longlong *)(lVar15 + 8);
      uVar1 = *(uint *)(lVar15 + 0x10);
    }
    if (lVar15 != 0) goto LAB_1803312f6;
  }
LAB_1803312f3:
  lVar15 = DAT_181107778;
LAB_1803312f6:
  if (lVar15 == DAT_181107778) {
    uVar17 = 0;
  }
  else {
    uVar17 = *(undefined8 *)(lVar15 + 0x18);
  }
  local_1a8 = uVar10;
  FUN_1802b6190(uVar10,uVar17);
  lVar15 = DAT_180ca0a50;
  if (fVar31 <= fVar29) {
    fVar31 = fVar29;
  }
  local_1d8 = CONCAT44(fVar31,0xbf800000);
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  uVar11 = FUN_1803e8900(*(undefined8 *)(lVar15 + 0x14f8),"##search_results");
  local_1e8 = 0x98;
  cVar9 = FUN_1803e1800("##search_results",uVar11,&local_1d8,2);
  if (cVar9 != '\0') {
    FUN_1802b6490(uVar10,1,0,0);
    lVar15 = DAT_180ca0a50;
    *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
    uVar24 = DAT_1809f73f0;
    local_140 = (undefined8 *****)0x0;
    lStack_138 = 0;
    local_130 = 0;
    local_128 = 0;
    plVar12 = (longlong *)&DAT_1809f73e0;
    if (0xf < DAT_1809f73f8) {
      plVar12 = _DAT_1809f73e0;
    }
    if (0x7fffffffffffffff < DAT_1809f73f0) {
                    /* WARNING: Subroutine does not return */
      FUN_180011990();
    }
    local_1b8 = *(longlong *)(lVar15 + 0x14f8);
    fVar32 = *(float *)(local_1b8 + 0x11c);
    local_1a4 = DAT_1811076c0;
    uVar26 = 0xf;
    if (DAT_1809f73f0 < 0x10) {
      local_130 = DAT_1809f73f0;
      uVar22 = 0xf;
      local_128 = 0xf;
      pppppuVar13 = (undefined8 *****)*plVar12;
      lStack_138 = plVar12[1];
      local_140 = pppppuVar13;
    }
    else {
      uVar22 = DAT_1809f73f0 | 0xf;
      if (uVar22 < 0x8000000000000000) {
        if (uVar22 < 0x16) {
          uVar22 = 0x16;
        }
      }
      else {
        uVar22 = 0x7fffffffffffffff;
      }
      pppppuVar13 = (undefined8 *****)FUN_18000fb70(uVar22 + 1);
      local_130 = uVar24;
      local_140 = pppppuVar13;
      local_128 = uVar22;
      FUN_180540530(pppppuVar13,plVar12);
    }
    uVar25 = DAT_1809f6f48;
    local_160 = (undefined8 *****)0x0;
    lStack_158 = 0;
    local_150 = 0;
    local_148 = 0;
    plVar12 = (longlong *)&DAT_1809f6f38;
    if (0xf < DAT_1809f6f50) {
      plVar12 = DAT_1809f6f38;
    }
    if (0x7fffffffffffffff < DAT_1809f6f48) {
                    /* WARNING: Subroutine does not return */
      FUN_180011990();
    }
    if (DAT_1809f6f48 < 0x10) {
      local_150 = DAT_1809f6f48;
      local_148 = 0xf;
      local_1c0 = (undefined8 *****)*plVar12;
      lStack_158 = plVar12[1];
      local_160 = local_1c0;
    }
    else {
      uVar26 = DAT_1809f6f48 | 0xf;
      if (uVar26 < 0x8000000000000000) {
        if (uVar26 < 0x16) {
          uVar26 = 0x16;
        }
      }
      else {
        uVar26 = 0x7fffffffffffffff;
      }
      local_1c0 = (undefined8 *****)FUN_18000fb70(uVar26 + 1);
      local_150 = uVar25;
      local_160 = local_1c0;
      local_148 = uVar26;
      FUN_180540530(local_1c0,plVar12);
    }
    local_1a0 = DAT_181107484;
    local_1b0 = DAT_1811074f8;
    local_1d8 = CONCAT44(local_1d8._4_4_,DAT_181107674);
    local_118 = DAT_1809f72e0;
    local_117 = DAT_1809f72e1;
    local_116 = DAT_1809f72e2;
    local_114 = DAT_1809f72e4;
    local_110 = DAT_1809f72e8;
    local_10c = DAT_1809f72ec;
    local_108 = _DAT_1809f72f0;
    uStack_100 = _DAT_1809f72f8;
    local_f8 = DAT_1809f7300;
    local_f4 = DAT_1809f7304;
    FUN_180024b50(local_f0,&DAT_1809f7308);
    uVar7 = _DAT_18110717c;
    uVar6 = DAT_181107178;
    uVar11 = DAT_181107174;
    uVar5 = DAT_1809f5b50;
    uVar4 = _DAT_1809f5b48;
    uVar17 = _DAT_1809f5b40;
    fVar29 = DAT_1808ac924;
    local_190 = DAT_181107168;
    fStack_18c = (float)_DAT_18110716c;
    fStack_188 = (float)DAT_181107170;
    uStack_184 = DAT_181107174;
    local_180 = DAT_181107178;
    uStack_17c = _DAT_18110717c;
    DAT_1809f6f30 = -1;
    uVar14 = (DAT_181107730 - DAT_181107728 >> 6) * -0x5555555555555555;
    local_170[0] = uVar14 & 0xffffffff;
    if (6 < (int)uVar14) {
      local_170[0] = 6;
    }
    uVar14 = 0;
    local_1d0[0] = 0;
    fVar30 = fVar32;
    if (0 < (int)local_170[0]) {
      pppppuVar23 = local_1c0;
      while( true ) {
        puVar20 = (undefined4 *)(uVar14 * 0xc0 + DAT_181107728);
        DAT_1811076c0 = *puVar20;
        DAT_181107484 = puVar20[1];
        DAT_181107298 = (undefined4)uVar14;
        puVar18 = (undefined8 *)(puVar20 + 2);
        DAT_181107488 = puVar20;
        DAT_1811074f8 = (float)DAT_181107484;
        DAT_181107674 = DAT_181107484;
        if (puVar18 != &DAT_1809f7158) {
          if (0xf < *(ulonglong *)(puVar20 + 8)) {
            puVar18 = (undefined8 *)*puVar18;
          }
          FUN_180029840(&DAT_1809f7158,puVar18,*(undefined8 *)(puVar20 + 6));
        }
        DAT_180cd040f = *(undefined1 *)(puVar20 + 0x10);
        FUN_180067240(&DAT_181107520,puVar20 + 0x12);
        FUN_180067240(&DAT_181107500,puVar20 + 0x18);
        DAT_1811073d0 = *(undefined4 *)(local_1b8 + 0x128);
        DAT_1811074a0 = *(float *)(local_1b8 + 0x250) - *(float *)(local_1b8 + 0x128);
        DAT_180cd0f09 = 1;
        puVar18 = (undefined8 *)(puVar20 + 0x1e);
        DAT_18110727c = fVar30;
        DAT_1811073d4 = fVar30;
        if (puVar18 != (undefined8 *)&DAT_1809f73e0) {
          if (0xf < *(ulonglong *)(puVar20 + 0x24)) {
            puVar18 = (undefined8 *)*puVar18;
          }
          FUN_180029840(&DAT_1809f73e0,puVar18,*(undefined8 *)(puVar20 + 0x22));
        }
        puVar18 = (undefined8 *)(puVar20 + 0x26);
        if ((longlong **)puVar18 != &DAT_1809f6f38) {
          if (0xf < *(ulonglong *)(puVar20 + 0x2c)) {
            puVar18 = (undefined8 *)*puVar18;
          }
          FUN_180029840(&DAT_1809f6f38,puVar18,*(undefined8 *)(puVar20 + 0x2a));
        }
        DAT_180cd0d57 = *(undefined1 *)(puVar20 + 0x2e);
        FUN_1803e8a70(local_1d0[0]);
        local_1c0 = (undefined8 *****)0x0;
        local_19c = 0;
        FUN_1803e0300(&local_19c,&local_1c0,0);
        lVar15 = DAT_180ca0a50;
        *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
        lVar15 = *(longlong *)(lVar15 + 0x14f8);
        *(undefined4 *)(lVar15 + 0x118) = DAT_1811073d0;
        *(float *)(lVar15 + 0x11c) = DAT_1811073d4;
        *(undefined1 *)(lVar15 + 0x159) = 1;
        if (*(char *)(puVar20 + 0x2e) == '\0') {
          FUN_180337e50(*puVar20);
        }
        else {
          FUN_1802b8a20(0);
          lVar15 = FUN_180303520();
          FUN_1802fb830(lVar15 + 0x264);
          FUN_1802b9760();
        }
        FUN_1802b9bd0();
        FUN_1802b8b90();
        FUN_1803e0390();
        iVar3 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
        if (iVar3 < 2) {
          FUN_1803ebc00("Calling PopID() too many times!");
        }
        else {
          *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar3 + -1;
        }
        DAT_180cd0d57 = 0;
        pppppuVar19 = &local_140;
        if (0xf < uVar22) {
          pppppuVar19 = pppppuVar13;
        }
        FUN_180029840(&DAT_1809f73e0,pppppuVar19,uVar24);
        pppppuVar13 = &local_160;
        if (0xf < uVar26) {
          pppppuVar13 = pppppuVar23;
        }
        FUN_180029840(&DAT_1809f6f38,pppppuVar13,uVar25);
        lVar15 = DAT_181107528;
        DAT_180cd0f09 = 0;
        DAT_181107488 = (undefined4 *)0x0;
        lVar21 = DAT_181107520;
        if (DAT_181107520 != DAT_181107528) {
          do {
            FUN_18000f890(lVar21);
            lVar21 = lVar21 + 0x20;
          } while (lVar21 != lVar15);
          DAT_181107528 = DAT_181107520;
        }
        lVar15 = DAT_181107508;
        lVar21 = DAT_181107500;
        if (DAT_181107500 != DAT_181107508) {
          do {
            FUN_18000f890(lVar21);
            lVar21 = lVar21 + 0x20;
          } while (lVar21 != lVar15);
          DAT_181107508 = DAT_181107500;
        }
        fVar30 = DAT_18110727c + fVar29;
        local_1d0[0] = local_1d0[0] + 1;
        uVar14 = (ulonglong)local_1d0[0];
        if ((int)local_170[0] <= (int)local_1d0[0]) break;
        uVar22 = local_128;
        pppppuVar23 = local_160;
        pppppuVar13 = local_140;
        uVar25 = local_150;
        uVar26 = local_148;
        uVar24 = local_130;
      }
      uVar10 = local_1a8;
    }
    DAT_1811076c0 = local_1a4;
    DAT_181107484 = local_1a0;
    DAT_1811074f8 = local_1b0;
    DAT_181107674 = (undefined4)local_1d8;
    DAT_1809f72e0 = local_118;
    DAT_1809f72e1 = local_117;
    DAT_1809f72e2 = local_116;
    DAT_1809f72e4 = local_114;
    DAT_1809f72e8 = local_110;
    DAT_1809f72ec = local_10c;
    _DAT_1809f72f0 = local_108;
    _DAT_1809f72f8 = uStack_100;
    DAT_1809f7300 = local_f8;
    DAT_1809f7304 = local_f4;
    pppppuVar13 = local_f0;
    if (0xf < local_d8) {
      pppppuVar13 = local_f0[0];
    }
    FUN_180029840(&DAT_1809f7308,pppppuVar13,local_e0);
    lVar21 = local_1b8;
    lVar15 = DAT_180ca0a50;
    _DAT_181107168 = CONCAT44(fStack_18c,local_190);
    DAT_181107170 = fStack_188;
    fVar30 = fVar30 - fVar29;
    fVar29 = fVar32;
    if (fVar32 <= fVar30) {
      fVar29 = fVar30;
    }
    uVar2 = *(undefined4 *)(local_1b8 + 0x128);
    _DAT_1809f5b40 = uVar17;
    _DAT_1809f5b48 = uVar4;
    DAT_1809f5b50 = uVar5;
    DAT_181107174 = uVar11;
    DAT_181107178 = uVar6;
    _DAT_18110717c = uVar7;
    *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
    lVar15 = *(longlong *)(lVar15 + 0x14f8);
    *(undefined4 *)(lVar15 + 0x118) = uVar2;
    *(float *)(lVar15 + 0x11c) = fVar29;
    *(undefined1 *)(lVar15 + 0x159) = 1;
    local_1b8 = 0x3f800000;
    FUN_1804174f0(&local_1b8);
    fVar32 = (fVar29 - fVar32) + DAT_1808ac950;
    *(float *)(lVar21 + 0x134) = fVar29;
    FUN_1802b6cd0(uVar10);
    if (-1 < DAT_1809f6f30) {
      FUN_180330c90((longlong)DAT_1809f6f30 * 0xc0 + DAT_181107728);
    }
    FUN_18000f890(local_f0);
    FUN_18000f890(&local_160);
    FUN_18000f890(&local_140);
  }
  FUN_1803e1bc0();
  uVar11 = FUN_1803d8a40(2);
  if (DAT_1808acbf0 <= fVar32) {
    fVar32 = DAT_1808acbf0;
  }
  uStack_184 = 0;
  local_180 = 0xffffffff;
  local_190 = fVar32;
  fStack_18c = fVar32;
  fStack_188 = fVar32;
  FUN_18034a380(uVar11,local_170,local_1c8,&local_190);
  FUN_1802b3660(local_170[0] + 0x14,fVar32,DAT_1808ac118,0);
  return;
}



/* ===== 180331b80 FUN_180331b80 ===== */

uint FUN_180331b80(undefined4 param_1,byte *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  byte bVar3;
  char *pcVar4;
  byte *pbVar5;
  uint uVar6;
  undefined4 local_res8;
  byte local_resc [28];
  
  local_res8 = param_1;
  pcVar4 = "wp_group";
  bVar3 = 0x77;
  uVar2 = 0xffffffff;
  do {
    pcVar4 = pcVar4 + 1;
    if (((bVar3 == 0x23) && (*pcVar4 == 0x23)) && (pcVar4[1] == 0x23)) {
      uVar2 = 0xffffffff;
      pcVar4 = pcVar4 + 2;
    }
    else {
      uVar2 = (ulonglong)
              ((uint)(uVar2 >> 8) ^
              *(uint *)(&DAT_1806c25c0 + (uVar2 & 0xff ^ (ulonglong)bVar3) * 4));
    }
    bVar3 = *pcVar4;
  } while (bVar3 != 0);
  pbVar5 = (byte *)&local_res8;
  do {
    bVar3 = *pbVar5;
    pbVar5 = pbVar5 + 1;
    uVar1 = (uint)(uVar2 >> 8) ^ *(uint *)(&DAT_1806c25c0 + (uVar2 & 0xff ^ (ulonglong)bVar3) * 4);
    uVar2 = (ulonglong)uVar1;
  } while (pbVar5 < local_resc);
  bVar3 = *param_2;
  uVar6 = uVar1;
  while (bVar3 != 0) {
    pbVar5 = param_2 + 1;
    if (((bVar3 == 0x23) && (*pbVar5 == 0x23)) && (param_2[2] == 0x23)) {
      pbVar5 = param_2 + 3;
      uVar6 = uVar1;
    }
    else {
      uVar6 = uVar6 >> 8 ^
              *(uint *)(&DAT_1806c25c0 + ((ulonglong)(uVar6 & 0xff) ^ (ulonglong)bVar3) * 4);
    }
    param_2 = pbVar5;
    bVar3 = *pbVar5;
  }
  return ~uVar6;
}



/* ===== 180331c50 FUN_180331c50 ===== */

longlong FUN_180331c50(undefined8 param_1,uint param_2)

{
  uint uVar1;
  longlong lVar2;
  uint7 uVar3;
  ulonglong uVar4;
  
  uVar4 = DAT_1811076b0 &
          (((((ulonglong)(param_2 & 0xff) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
            (ulonglong)(param_2 >> 8 & 0xff)) * 0x100000001b3 ^ (ulonglong)(param_2 >> 0x10 & 0xff))
           * 0x100000001b3 ^ (ulonglong)(param_2 >> 0x18)) * 0x100000001b3;
  lVar2 = *(longlong *)(DAT_181107698 + 8 + uVar4 * 0x10);
  if (lVar2 != DAT_181107688) {
    uVar1 = *(uint *)(lVar2 + 0x10);
    while (param_2 != uVar1) {
      if (lVar2 == *(longlong *)(DAT_181107698 + uVar4 * 0x10)) goto LAB_180331cda;
      lVar2 = *(longlong *)(lVar2 + 8);
      uVar1 = *(uint *)(lVar2 + 0x10);
    }
    if (lVar2 != 0) goto LAB_180331cdd;
  }
LAB_180331cda:
  lVar2 = DAT_181107688;
LAB_180331cdd:
  uVar3 = (uint7)((ulonglong)lVar2 >> 8);
  if ((lVar2 == DAT_181107688) || (*(char *)(lVar2 + 0x14) == '\0')) {
    return (ulonglong)uVar3 << 8;
  }
  return CONCAT71(uVar3,1);
}



/* ===== 180331cf0 FUN_180331cf0 ===== */

longlong FUN_180331cf0(ulonglong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  uint7 uVar3;
  ulonglong uVar4;
  
  uVar4 = DAT_180ca18f0 &
          ((((((((param_2 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^ (param_2 & 0xff00) >> 8) *
                0x100000001b3 ^ (param_2 & 0xff0000) >> 0x10) * 0x100000001b3 ^
              (param_2 & 0xff000000) >> 0x18) * 0x100000001b3 ^ param_1 & 0xff) * 0x100000001b3 ^
            (param_1 & 0xffffffff) >> 8 & 0xff) * 0x100000001b3 ^
           (param_1 & 0xffffffff) >> 0x10 & 0xff) * 0x100000001b3 ^ (param_1 & 0xffffffff) >> 0x18)
          * 0x100000001b3;
  lVar2 = *(longlong *)(DAT_180ca18d8 + 8 + uVar4 * 0x10);
  if (lVar2 != DAT_180ca18c8) {
    uVar1 = *(ulonglong *)(lVar2 + 0x10);
    while ((param_1 << 0x20 | param_2 & 0xffffffff) != uVar1) {
      if (lVar2 == *(longlong *)(DAT_180ca18d8 + uVar4 * 0x10)) goto LAB_180331dd4;
      lVar2 = *(longlong *)(lVar2 + 8);
      uVar1 = *(ulonglong *)(lVar2 + 0x10);
    }
    if (lVar2 != 0) goto LAB_180331dd7;
  }
LAB_180331dd4:
  lVar2 = DAT_180ca18c8;
LAB_180331dd7:
  uVar3 = (uint7)((ulonglong)lVar2 >> 8);
  if ((lVar2 == DAT_180ca18c8) || (*(char *)(lVar2 + 0x18) == '\0')) {
    return (ulonglong)uVar3 << 8;
  }
  return CONCAT71(uVar3,1);
}



/* ===== 180331df0 FUN_180331df0 ===== */

ulonglong FUN_180331df0(ulonglong param_1,ulonglong param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  uVar3 = DAT_181107640 &
          ((((param_1 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^ param_1 >> 8 & 0xff) *
            0x100000001b3 ^ param_1 >> 0x10 & 0xff) * 0x100000001b3 ^
          (ulonglong)((uint)param_1 >> 0x18)) * 0x100000001b3;
  lVar2 = *(longlong *)(DAT_181107628 + 8 + uVar3 * 0x10);
  if (lVar2 != DAT_181107618) {
    uVar1 = *(uint *)(lVar2 + 0x10);
    while ((uint)param_1 != uVar1) {
      if (lVar2 == *(longlong *)(DAT_181107628 + uVar3 * 0x10)) goto LAB_180331e84;
      lVar2 = *(longlong *)(lVar2 + 8);
      uVar1 = *(uint *)(lVar2 + 0x10);
    }
    if (lVar2 != 0) goto LAB_180331e87;
  }
LAB_180331e84:
  lVar2 = DAT_181107618;
LAB_180331e87:
  if (lVar2 == DAT_181107618) {
    return param_2;
  }
  return (ulonglong)*(uint *)(lVar2 + 0x14);
}



/* ===== 180331ea0 FUN_180331ea0 ===== */

void FUN_180331ea0(int param_1)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  longlong lVar7;
  longlong *plVar8;
  int *piVar9;
  uint uVar10;
  int *piVar11;
  ulonglong uVar12;
  longlong *plVar13;
  undefined4 *puVar14;
  int local_res8 [2];
  int local_res10;
  undefined4 uStackX_14;
  int local_28 [4];
  
  piVar6 = &DAT_180957240;
  local_28[1] = 0x40;
  local_28[0] = 1;
  iVar1 = DAT_180957240;
  if (param_1 != 0) {
    piVar6 = &DAT_18094f764;
    iVar1 = DAT_18094f764;
  }
  piVar11 = local_28;
  if (0 < iVar1) {
    piVar11 = piVar6;
  }
  piVar6 = local_28 + 1;
  if (iVar1 < 0x41) {
    piVar6 = piVar11;
  }
  bVar2 = false;
  uVar12 = 0;
  iVar1 = *piVar6;
  if (0 < iVar1) {
    puVar14 = &DAT_180957388;
    bVar2 = false;
    if (param_1 != 0) {
      puVar14 = &DAT_18094f8ac;
    }
    do {
      if (puVar14[uVar12 * 0x52] == 0) {
        bVar2 = true;
        puVar14[uVar12 * 0x52] = DAT_1809f528c;
        DAT_1809f528c = DAT_1809f528c + 1;
      }
      uVar10 = (int)uVar12 + 1;
      uVar12 = (ulonglong)uVar10;
    } while ((int)uVar10 < iVar1);
  }
  plVar13 = (longlong *)&DAT_1809f54c8;
  if (param_1 == 0) {
    plVar13 = &DAT_1809f54c0;
  }
  if (DAT_180cd1304 == '\0') {
    FUN_1803a0b60(&local_res10);
    DAT_181108a00 = CONCAT44(uStackX_14,local_res10);
    DAT_1811089f8 = FUN_1803a0c50(&local_res10);
    DAT_180cd1304 = '\x01';
  }
  lVar7 = DAT_1811089f8;
  if (DAT_1811089f8 == 0) {
LAB_180331ffc:
    lVar7 = 0;
  }
  else {
    FUN_18029a770();
    if (((DAT_180ca0a0c == 0) || (DAT_180ca0a10 == 0)) ||
       (lVar7 = FUN_18000f3a0(lVar7 + (ulonglong)DAT_180ca0a0c), lVar7 == 0)) goto LAB_180331ffc;
    uVar4 = FUN_180011200((ulonglong)DAT_180ca0a10 + lVar7);
    plVar8 = (longlong *)FUN_1803a0940(&local_res10,uVar4);
    lVar7 = *plVar8;
  }
  piVar6 = &DAT_181106f14;
  if (param_1 == 0) {
    piVar6 = &DAT_181107578;
  }
  if ((!bVar2) && (lVar7 == *plVar13)) goto LAB_180332063;
  *plVar13 = lVar7;
  local_res8[0] = 0;
  cVar3 = FUN_1802a0e40(local_res8,&local_res10);
  if (param_1 == 0) {
    if (cVar3 == '\0') goto LAB_18033204d;
    puVar14 = &DAT_180957240;
LAB_180332058:
    iVar5 = FUN_1800ef270(puVar14,local_res8[0]);
  }
  else {
    if (cVar3 != '\0') {
      puVar14 = &DAT_18094f764;
      goto LAB_180332058;
    }
LAB_18033204d:
    iVar5 = 0;
  }
  *piVar6 = iVar5;
LAB_180332063:
  local_res10 = iVar1 + -1;
  local_res8[0] = 0;
  piVar11 = local_res8;
  if (-1 < *piVar6) {
    piVar11 = piVar6;
  }
  piVar9 = &local_res10;
  if (*piVar6 <= iVar1 + -1) {
    piVar9 = piVar11;
  }
  *piVar6 = *piVar9;
  return;
}



/* ===== 1803320b0 FUN_1803320b0 ===== */

void FUN_1803320b0(longlong *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  float fVar5;
  float local_res8 [4];
  undefined8 local_res18;
  float local_res20;
  float local_res24;
  float local_68;
  float local_64;
  undefined8 local_58;
  longlong local_50;
  
  fVar3 = DAT_1808ac9f8;
  fVar1 = *(float *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x118);
  fVar2 = *(float *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x11c);
  local_res8[1] = 31.706;
  local_res8[0] = param_2;
  FUN_1804174f0(local_res8);
  if (((*param_1 != 0) && (0 < (int)param_1[1])) && (0 < *(int *)((longlong)param_1 + 0xc))) {
    fVar5 = (float)FUN_180519080((param_2 - *(float *)(param_1 + 3)) * DAT_1808ac1f4);
    fVar5 = fVar5 + fVar1;
    local_68 = fVar5;
    local_64 = (float)FUN_180519080((fVar3 - *(float *)((longlong)param_1 + 0x1c)) * DAT_1808ac1f4);
    lVar4 = DAT_180ca0a50;
    local_64 = local_64 + fVar2;
    local_res8[0] = 1.0;
    local_res8[1] = 1.0;
    local_res18 = 0;
    local_58 = 0;
    *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
    local_50 = *param_1;
    local_res20 = fVar5 + *(float *)(param_1 + 3);
    local_res24 = local_64 + *(float *)((longlong)param_1 + 0x1c);
    FUN_1803fea90(*(undefined8 *)(*(longlong *)(lVar4 + 0x14f8) + 0x2c8),&local_58,&local_68,
                  &local_res20,&local_res18,local_res8,DAT_180960ec8);
  }
  return;
}



/* ===== 180332250 FUN_180332250 ===== */

ulonglong FUN_180332250(void)

{
  longlong lVar1;
  undefined1 uVar2;
  ulonglong uVar3;
  
  uVar2 = DAT_180cd048f;
  lVar1 = DAT_180ca0a50;
  DAT_180cd048f = 1;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  lVar1 = *(longlong *)(lVar1 + 0x14f8);
  DAT_1811071a8 = *(float *)(lVar1 + 0x118) - (*(float *)(lVar1 + 0x58) + *(float *)(lVar1 + 0x28));
  uVar3 = FUN_1802b74f0(DAT_1811071a8,0,0,0);
  DAT_180cd048f = uVar2;
  if ((char)uVar3 != '\0') {
    FUN_1803ee1f0();
    uVar3 = uVar3 & 0xff;
  }
  return uVar3;
}



/* ===== 1803322d0 FUN_1803322d0 ===== */

undefined1 FUN_1803322d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,float param_4)

{
  int iVar1;
  undefined8 uVar2;
  float fVar3;
  undefined1 uVar4;
  char cVar5;
  byte bVar6;
  ulonglong uVar7;
  longlong lVar8;
  char *pcVar9;
  uint uVar10;
  bool bVar11;
  float fVar12;
  undefined8 uVar13;
  float fVar14;
  undefined8 local_res10;
  undefined8 local_res18;
  uint local_res20 [2];
  longlong local_b8 [2];
  float local_a8;
  float local_a4;
  float local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  
  local_res18 = *(undefined8 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x118);
  local_res10 = param_2;
  FUN_1803e89e0("delete");
  local_res10 = CONCAT44(param_4,param_4);
  uVar4 = FUN_180415e30("##glyph",&local_res10,0);
  cVar5 = FUN_1803dd930(0);
  fVar12 = DAT_1808ac34c;
  fVar3 = DAT_1808ac1f4;
  uVar10 = *(uint *)(DAT_180ca0a50 + 0x1ee8);
  uVar7 = (ulonglong)uVar10;
  if (*(uint *)(DAT_180ca0a50 + 0x1578) == 0) {
    bVar11 = false;
  }
  else {
    bVar11 = *(uint *)(DAT_180ca0a50 + 0x1578) == uVar10;
    if (bVar11) {
      fVar14 = DAT_1808ac34c;
      goto LAB_1803323b2;
    }
  }
  if (cVar5 == '\0') {
    fVar14 = 0.0;
  }
  else {
    fVar14 = DAT_1808ac1f4;
  }
LAB_1803323b2:
  uVar10 = ~uVar10;
  pcVar9 = "hover";
  bVar6 = 0x68;
  local_res20[0] = uVar10;
  do {
    pcVar9 = pcVar9 + 1;
    if (((bVar6 == 0x23) && (*pcVar9 == 0x23)) && (pcVar9[1] == 0x23)) {
      pcVar9 = pcVar9 + 2;
      local_res20[0] = uVar10;
    }
    else {
      uVar7 = (ulonglong)(local_res20[0] & 0xff) ^ (ulonglong)bVar6;
      local_res20[0] = local_res20[0] >> 8 ^ *(uint *)(&DAT_1806c25c0 + uVar7 * 4);
    }
    bVar6 = *pcVar9;
  } while (bVar6 != 0);
  local_res20[0] = ~local_res20[0];
  local_9c = 0;
  local_98 = 0xffffffff;
  local_a8 = fVar14;
  local_a4 = fVar14;
  local_a0 = fVar14;
  FUN_18034a380(uVar7,local_b8,local_res20,&local_a8);
  uVar13 = FUN_1802b3660(local_b8[0] + 0x14,fVar14,DAT_1808ac118,0);
  if (!bVar11) {
    if (cVar5 == '\0') {
      fVar12 = 0.0;
    }
    else {
      fVar12 = fVar3;
    }
  }
  pcVar9 = "label";
  local_res20[0] = uVar10;
  bVar6 = s_label_1806e0514[0];
  while (pcVar9 = pcVar9 + 1, bVar6 != 0) {
    if (((bVar6 == 0x23) && (*pcVar9 == 0x23)) && (pcVar9[1] == 0x23)) {
      pcVar9 = pcVar9 + 2;
      local_res20[0] = uVar10;
    }
    else {
      local_res20[0] =
           local_res20[0] >> 8 ^
           *(uint *)(&DAT_1806c25c0 + (ulonglong)(local_res20[0] & 0xff ^ (uint)bVar6) * 4);
    }
    bVar6 = *pcVar9;
  }
  local_res20[0] = ~local_res20[0];
  local_9c = 0;
  local_98 = 0xffffffff;
  local_a8 = fVar12;
  local_a4 = fVar12;
  local_a0 = fVar12;
  FUN_18034a380(uVar13,local_b8,local_res20,&local_a8);
  fVar12 = (float)FUN_1802b3660(local_b8[0] + 0x14,fVar12,DAT_1808ac118,0);
  lVar8 = DAT_180ca0a50;
  iVar1 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
  if (iVar1 < 2) {
    FUN_1803ebc00("Calling PopID() too many times!");
    lVar8 = DAT_180ca0a50;
  }
  else {
    *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar1 + -1;
  }
  *(undefined1 *)(*(longlong *)(lVar8 + 0x14f8) + 0xce) = 1;
  fVar14 = local_res18._4_4_;
  uVar2 = *(undefined8 *)(*(longlong *)(lVar8 + 0x14f8) + 0x2c8);
  if (0.0 < (float)uVar13) {
    local_res10 = CONCAT44(local_res18._4_4_ + param_4,(float)local_res18 + param_4);
    FUN_1803fe590(uVar2,&local_res18,&local_res10,
                  (int)(longlong)
                       ((float)(DAT_180960f44 >> 0x18) * (float)uVar13 * DAT_1808ac1b0 + fVar3) <<
                  0x18 | DAT_180960f44 & 0xffffff,DAT_1808ac7ac,0);
  }
  local_res18 = CONCAT44(param_4 * fVar3 + fVar14,param_4 * fVar3 + (float)local_res18);
  FUN_180328670(uVar2,"fa_xmark",
                "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 384 512\" width=\"384\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M342 151C355 139 355 118 342 106C330 93 309 93 297 106L192 211L86 106C74 93 53 93 41 106C28 118 28 139 41 151L146 256L41 362C28 374 28 395 41 407C53 420 74 420 86 407L191 302L297 407C309 420 330 420 342 407C355 395 355 374 342 362L237 256L342 151L342 151Z\"/></svg>"
                ,&local_res18,DAT_1808ac8d4,
                (int)(longlong)
                     ((fVar12 * DAT_1808ac154 + DAT_1808ac254) * (float)(DAT_180960f38 >> 0x18) +
                     fVar3) << 0x18 | DAT_180960f38 & 0xffffff);
  return uVar4;
}



/* ===== 180332690 FUN_180332690 ===== */

void FUN_180332690(int param_1)

{
  int iVar1;
  longlong lVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  undefined4 *puVar7;
  longlong *plVar8;
  undefined *puVar9;
  int *piVar10;
  byte *pbVar11;
  byte *pbVar12;
  char *pcVar13;
  uint uVar14;
  longlong lVar15;
  int *piVar16;
  undefined4 *puVar17;
  undefined *puVar18;
  uint local_res20 [2];
  undefined4 local_68;
  byte local_64 [4];
  int local_60 [6];
  undefined1 local_48 [16];
  
  iVar4 = FUN_1800efe90();
  iVar1 = DAT_1809f528c;
  if (-1 < iVar4) {
    lVar6 = (longlong)iVar4;
    lVar15 = lVar6 * 0x148;
    puVar17 = &DAT_180957388;
    puVar18 = &DAT_180957244;
    if (param_1 != 0) {
      puVar18 = &DAT_18094f768;
    }
    puVar7 = &DAT_180957388;
    if (param_1 != 0) {
      puVar7 = &DAT_18094f8ac;
    }
    iVar4 = DAT_1809f528c + 1;
    puVar7[lVar6 * 0x52] = DAT_1809f528c;
    DAT_1809f528c = iVar4;
    FUN_180331b80(iVar1,"visible");
    plVar8 = (longlong *)FUN_18034f560();
    uVar14 = 0;
    lVar2 = *plVar8;
    puVar9 = &DAT_180957384;
    *(undefined8 *)(lVar2 + 0x14) = 0;
    *(undefined8 *)(lVar2 + 0x1c) = 0;
    *(undefined4 *)(lVar2 + 0x24) = 0xffffffff;
    if (param_1 != 0) {
      puVar9 = &DAT_18094f8a8;
    }
    local_60[1] = 0x40;
    local_60[0] = 0;
    piVar16 = local_60;
    if (-1 < *(int *)(puVar9 + lVar15)) {
      piVar16 = (int *)(puVar9 + lVar15);
    }
    piVar10 = local_60 + 1;
    if (*(int *)(puVar9 + lVar15) < 0x41) {
      piVar10 = piVar16;
    }
    iVar1 = *piVar10;
    if (0 < iVar1) {
      if (param_1 != 0) {
        puVar17 = &DAT_18094f8ac;
      }
      do {
        local_68 = *(undefined4 *)(puVar18 + (ulonglong)uVar14 * 4 + lVar15 + 0x40);
        uVar5 = FUN_180331b80(puVar17[lVar6 * 0x52],&DAT_1806e1304);
        pbVar11 = (byte *)&local_68;
        uVar5 = ~uVar5;
        do {
          bVar3 = *pbVar11;
          pbVar11 = pbVar11 + 1;
          pbVar12 = local_64;
          uVar5 = uVar5 >> 8 ^
                  *(uint *)(&DAT_1806c25c0 + ((ulonglong)(uVar5 & 0xff) ^ (ulonglong)bVar3) * 4);
        } while (pbVar11 < pbVar12);
        pcVar13 = "visible";
        bVar3 = 0x76;
        local_res20[0] = uVar5;
        do {
          pcVar13 = pcVar13 + 1;
          if (((bVar3 == 0x23) && (*pcVar13 == 0x23)) && (pcVar13[1] == 0x23)) {
            pcVar13 = pcVar13 + 2;
            local_res20[0] = uVar5;
          }
          else {
            pbVar12 = (byte *)((ulonglong)(local_res20[0] & 0xff) ^ (ulonglong)bVar3);
            local_res20[0] = local_res20[0] >> 8 ^ *(uint *)(&DAT_1806c25c0 + (longlong)pbVar12 * 4)
            ;
          }
          bVar3 = *pcVar13;
        } while (bVar3 != 0);
        local_res20[0] = ~local_res20[0];
        plVar8 = (longlong *)FUN_18034f560(pbVar12,local_48,local_res20);
        uVar14 = uVar14 + 1;
        lVar2 = *plVar8;
        *(undefined8 *)(lVar2 + 0x14) = 0;
        *(undefined8 *)(lVar2 + 0x1c) = 0;
        *(undefined4 *)(lVar2 + 0x24) = 0xffffffff;
      } while ((int)uVar14 < iVar1);
    }
  }
  return;
}



/* ===== 1803328c0 FUN_1803328c0 ===== */

void FUN_1803328c0(int param_1)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined **ppuVar12;
  undefined8 local_res10;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_78 [80];
  
  lVar8 = DAT_180ca0a50;
  iVar10 = 0;
  *(uint *)(DAT_180ca0a50 + 0x1f38) = *(uint *)(DAT_180ca0a50 + 0x1f38) | 0x10;
  *(undefined8 *)(lVar8 + 0x1f84) = 0;
  *(undefined4 *)(lVar8 + 0x1f8c) = 0x461c3c00;
  *(undefined4 *)(lVar8 + 0x1f90) = 0x437a0000;
  *(undefined8 *)(lVar8 + 0x1f98) = 0;
  *(undefined8 *)(lVar8 + 0x1fa0) = 0;
  DAT_180cd04ad = 1;
  local_res10 = 0x40e0000040e00000;
  cVar5 = FUN_1802b5260("##wp_create",&local_res10);
  if (cVar5 != '\0') {
    lVar8 = DAT_181107a08;
    if (DAT_181107a08 == 0) {
      lVar8 = *(longlong *)(DAT_180ca0a50 + 0x11f0);
    }
    uStack_90 = *(undefined4 *)(DAT_180ca0a50 + 0x1204);
    uStack_8c = *(undefined4 *)(DAT_180ca0a50 + 0x1200);
    local_98 = *(undefined8 *)(DAT_180ca0a50 + 0x11f0);
    FUN_1803f6200(DAT_180ca0a50 + 0x1fe0,&local_98);
    FUN_1803e8680(lVar8,DAT_1808ac930,0);
    cVar5 = FUN_180328c30("Create Group",0,0,1,"wp_fa_layer_plus",
                          "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 576 512\" width=\"576\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M464 0C450 0 440 11 440 24L440 56L408 56C394 56 384 67 384 80C384 94 394 104 408 104L440 104L440 136C440 150 450 160 464 160C477 160 488 150 488 136L488 104L520 104C533 104 544 94 544 80C544 67 533 56 520 56L488 56L488 24C488 11 477 0 464 0ZM311 134C296 127 279 127 264 134L45 235C37 239 31 247 31 256C31 266 37 274 45 278L264 379C279 386 296 386 311 379L530 278C538 274 544 266 544 256C544 247 538 239 530 235L311 134L311 134ZM311 134ZM324 408C301 419 274 419 251 408L99 338L45 363C37 367 31 375 31 384C31 394 37 402 45 406L264 506C279 513 296 513 311 506L530 406C538 402 544 394 544 384C544 375 538 367 530 363L476 338L324 408L324 408ZM324 408Z\"/></svg>"
                          ,0,DAT_180960ef8,DAT_180960ec8);
    if (cVar5 != '\0') {
      FUN_180332690(param_1,0);
    }
    local_res10 = 0x4040000000000000;
    FUN_1804174f0(&local_res10);
    FUN_180329410();
    local_res10 = 0x4040000000000000;
    FUN_1804174f0(&local_res10);
    uVar4 = DAT_1808aca80;
    uVar3 = DAT_1808ac8b0;
    if (param_1 == 0) {
      iVar9 = 0xb;
      ppuVar12 = &PTR_s_Autosnipers_1805ea210;
      puVar11 = &DAT_1805ea228;
    }
    else {
      iVar9 = 7;
      ppuVar12 = &PTR_s_Pistols_1805e79d0;
      puVar11 = (undefined4 *)&DAT_1805e79e8;
    }
    do {
      FUN_1803e8a70(iVar10);
      puVar6 = (undefined8 *)FUN_1802c16b0(local_78,puVar11[(longlong)iVar10 * 8],uVar3,0);
      local_88 = puVar6[2];
      uStack_80 = puVar6[3];
      local_98 = *puVar6;
      uStack_90 = *(undefined4 *)(puVar6 + 1);
      uStack_8c = *(undefined4 *)((longlong)puVar6 + 0xc);
      FUN_1803320b0(&local_98,uVar4);
      FUN_1803ec6c0(0,0);
      cVar5 = FUN_180332250(ppuVar12[(longlong)iVar10 * 4]);
      if (cVar5 != '\0') {
        FUN_180332690(param_1,ppuVar12 + (longlong)iVar10 * 4);
      }
      iVar1 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
      if (iVar1 < 2) {
        FUN_1803ebc00("Calling PopID() too many times!");
      }
      else {
        *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar1 + -1;
      }
      lVar8 = DAT_180ca0a50;
      iVar10 = iVar10 + 1;
    } while (iVar10 < iVar9);
    lVar7 = (longlong)*(int *)(DAT_180ca0a50 + 0x1fe0);
    if (*(int *)(DAT_180ca0a50 + 0x1fe0) < 1) {
      FUN_1803ebc00("Calling PopFont() too many times!");
    }
    else {
      lVar2 = *(longlong *)(DAT_180ca0a50 + 0x1fe8);
      FUN_1803e8680(*(undefined8 *)(lVar2 + -0x10 + lVar7 * 0x10),
                    *(undefined4 *)(lVar2 + -8 + lVar7 * 0x10),
                    *(undefined4 *)(lVar2 + -4 + lVar7 * 0x10));
      *(int *)(lVar8 + 0x1fe0) = *(int *)(lVar8 + 0x1fe0) + -1;
    }
    FUN_1802b5590();
  }
  return;
}



/* ===== 180332c00 FUN_180332c00 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180332c00(int param_1,int param_2)

{
  undefined4 uVar1;
  float fVar2;
  int iVar3;
  char *pcVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  char cVar10;
  byte bVar11;
  undefined *puVar12;
  undefined1 (*pauVar13) [16];
  undefined **ppuVar14;
  int *piVar15;
  undefined *puVar16;
  int *piVar17;
  byte *pbVar18;
  longlong *plVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  undefined8 *****pppppuVar23;
  uint uVar24;
  char *pcVar25;
  char *pcVar26;
  undefined1 *puVar27;
  undefined *puVar28;
  uint uVar29;
  int iVar30;
  longlong lVar31;
  ulonglong uVar32;
  undefined *puVar33;
  bool bVar34;
  float fVar35;
  float fVar36;
  undefined1 auStack_238 [8];
  undefined1 auStack_230 [24];
  uint local_218;
  undefined4 *local_210;
  char *local_208;
  undefined8 local_200;
  ulonglong local_1f8;
  undefined4 local_1f0;
  undefined4 local_1e8;
  byte local_1d8;
  longlong local_1d0;
  int local_1c8;
  undefined4 local_1c0;
  byte local_1bc [4];
  uint local_1b8;
  undefined8 local_1b0;
  int local_1a8 [3];
  int local_19c [7];
  undefined4 local_180;
  undefined4 local_17c;
  float local_178;
  undefined *local_170;
  undefined4 local_168;
  undefined4 local_164;
  int *local_160;
  float local_158 [2];
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined1 local_130 [16];
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined1 local_110 [16];
  undefined8 *****local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  ulonglong local_e8;
  ulonglong local_e0;
  
  pcVar25 = DAT_180ca0a50;
  local_e0 = DAT_180919500 ^ (ulonglong)auStack_238;
  local_1b0 = local_1b0 & 0xffffffff00000000;
  *(uint *)(DAT_180ca0a50 + 0x1f38) = *(uint *)(DAT_180ca0a50 + 0x1f38) | 0x10;
  pcVar25[0x1f84] = '\0';
  pcVar25[0x1f85] = '\0';
  pcVar25[0x1f86] = ' ';
  pcVar25[0x1f87] = 'C';
  pcVar25[0x1f88] = '\0';
  pcVar25[0x1f89] = '\0';
  pcVar25[0x1f8a] = '\0';
  pcVar25[0x1f8b] = '\0';
  pcVar25[0x1f8c] = -1;
  pcVar25[0x1f8d] = -1;
  pcVar25[0x1f8e] = '\x7f';
  pcVar25[0x1f8f] = '\x7f';
  pcVar25[0x1f90] = '\0';
  pcVar25[0x1f91] = '\0';
  pcVar25[0x1f92] = 'z';
  pcVar25[0x1f93] = 'C';
  pcVar25[0x1f98] = '\0';
  pcVar25[0x1f99] = '\0';
  pcVar25[0x1f9a] = '\0';
  pcVar25[0x1f9b] = '\0';
  pcVar25[0x1f9c] = '\0';
  pcVar25[0x1f9d] = '\0';
  pcVar25[0x1f9e] = '\0';
  pcVar25[0x1f9f] = '\0';
  pcVar25[0x1fa0] = '\0';
  pcVar25[0x1fa1] = '\0';
  pcVar25[0x1fa2] = '\0';
  pcVar25[0x1fa3] = '\0';
  pcVar25[0x1fa4] = '\0';
  pcVar25[0x1fa5] = '\0';
  pcVar25[0x1fa6] = '\0';
  pcVar25[0x1fa7] = '\0';
  DAT_180cd04ad = 1;
  local_1d0 = 0x40c0000040c00000;
  local_1c8 = param_1;
  local_1a8[2] = param_2;
  cVar10 = FUN_1802b5260("##wp_picker",&local_1d0);
  puVar27 = auStack_238;
  if (cVar10 != '\0') {
    pcVar25 = DAT_181107a08;
    if (DAT_181107a08 == (char *)0x0) {
      pcVar25 = *(char **)(DAT_180ca0a50 + 0x11f0);
    }
    local_170 = *(undefined **)(DAT_180ca0a50 + 0x11f0);
    local_168 = *(undefined4 *)(DAT_180ca0a50 + 0x1204);
    local_164 = *(undefined4 *)(DAT_180ca0a50 + 0x1200);
    FUN_1803f6200(DAT_180ca0a50 + 0x1fe0,&local_170);
    uVar8 = DAT_1808ac930;
    FUN_1803e8680(pcVar25);
    pcVar26 = DAT_180ca0a50;
    puVar27 = auStack_238;
    *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
    fVar36 = DAT_1808ac8b0;
    lVar31 = *(longlong *)(pcVar26 + 0x14f8);
    fVar35 = *(float *)(lVar31 + 0x15c) + DAT_1808ac8b0;
    *(float *)(lVar31 + 0x15c) = fVar35;
    *(float *)(lVar31 + 0x118) = fVar35 + *(float *)(lVar31 + 0x28) + *(float *)(lVar31 + 0x160);
    uVar9 = DAT_1808acd08;
    uVar7 = DAT_1808ac7ec;
    fVar35 = DAT_1808ac2f0;
    lVar31 = (longlong)param_2 * 0x148;
    puVar33 = &DAT_180957244;
    if (param_1 != 0) {
      puVar33 = &DAT_18094f768;
    }
    puVar33 = puVar33 + lVar31;
    local_170 = puVar33;
    uVar20 = 0;
    local_1b8 = 0;
    puVar12 = &DAT_180957384;
    if (param_1 != 0) {
      puVar12 = &DAT_18094f8a8;
    }
    local_160 = (int *)(puVar12 + lVar31);
    local_1d0 = lVar31;
    do {
      local_1d8 = 0;
      uVar32 = 0;
      pcVar25 = (char *)((ulonglong)pcVar25 & 0xffffffffffffff00);
      do {
        pcVar26 = pcVar25;
        if (0 < (int)(&DAT_1805e7d94)[uVar20 * 6]) {
          bVar34 = false;
          uVar21 = 0;
          do {
            bVar34 = (bool)(bVar34 | (&DAT_1805e7ab4)[uVar32 * 4] ==
                                     (&DAT_1805e7d88)[uVar21 + uVar20 * 6]);
            uVar24 = (int)uVar21 + 1;
            uVar21 = (ulonglong)uVar24;
          } while ((int)uVar24 < (int)(&DAT_1805e7d94)[uVar20 * 6]);
          if (bVar34) {
            local_1a8[1] = 0x40;
            local_1a8[0] = 0;
            puVar12 = &DAT_180957384;
            if (local_1c8 != 0) {
              puVar12 = &DAT_18094f8a8;
            }
            piVar15 = local_1a8;
            if (-1 < *(int *)(puVar12 + lVar31)) {
              piVar15 = local_160;
            }
            piVar17 = local_1a8 + 1;
            if (*(int *)(puVar12 + lVar31) < 0x41) {
              piVar17 = piVar15;
            }
            uVar21 = 0;
            if (0 < *piVar17) {
              do {
                if (*(int *)(puVar33 + uVar21 * 4 + 0x40) == (&DAT_1805e7ab0)[uVar32 * 4])
                goto LAB_180333480;
                uVar24 = (int)uVar21 + 1;
                uVar21 = (ulonglong)uVar24;
              } while ((int)uVar24 < *piVar17);
            }
            if ((char)pcVar26 == '\0') {
              local_1d8 = 1;
              uVar1 = *(undefined4 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x118);
              fVar2 = *(float *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x11c);
              local_210 = (undefined4 *)(&PTR_s_Pistols_1805e7d80)[uVar20 * 3];
              pcVar25 = DAT_181107a18;
              if ((DAT_181107a18 == (char *)0x0) &&
                 (pcVar25 = DAT_181107a08, DAT_181107a08 == (char *)0x0)) {
                pcVar25 = *(char **)(DAT_180ca0a50 + 0x11f0);
              }
              local_1e8 = 0;
              local_1f8 = 0;
              local_200 = 0;
              local_208 = (char *)0x0;
              local_218 = 0;
              FUN_18040a2f0(local_158,pcVar25,uVar8,uVar9);
              local_19c[6] = FUN_18053f0d0(local_158[0] + fVar35);
              local_180 = 0x41fda5e3;
              FUN_1804174f0(local_19c + 6);
              pcVar26 = DAT_180ca0a50;
              *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
              uVar24 = DAT_180960ec8;
              local_17c = uVar1;
              local_178 = (float)FUN_18053f0d0(uVar7);
              local_178 = local_178 + fVar2;
              pcVar25 = DAT_181107a18;
              if ((DAT_181107a18 == (char *)0x0) &&
                 (pcVar25 = DAT_181107a08, DAT_181107a08 == (char *)0x0)) {
                pcVar25 = *(char **)(pcVar26 + 0x11f0);
              }
              if ((((uVar24 & 0xff000000) != 0) &&
                  (pcVar4 = (&PTR_s_Pistols_1805e7d80)[uVar20 * 3], pcVar4 != (char *)0x0)) &&
                 (*pcVar4 != '\0')) {
                lVar31 = *(longlong *)(*(longlong *)(pcVar26 + 0x14f8) + 0x2c8);
                if (pcVar25 == (char *)0x0) {
                  pcVar25 = *(char **)(*(longlong *)(lVar31 + 0x38) + 0x18);
                }
                local_150 = *(undefined4 *)(lVar31 + 0x60);
                uStack_14c = *(undefined4 *)(lVar31 + 100);
                uStack_148 = *(undefined4 *)(lVar31 + 0x68);
                uStack_144 = *(undefined4 *)(lVar31 + 0x6c);
                local_1f0 = 0;
                local_1f8 = local_1f8 & 0xffffffff00000000;
                local_200 = 0;
                local_210 = &local_150;
                local_218 = uVar24;
                local_208 = pcVar4;
                FUN_18040a900(pcVar25,lVar31,uVar8,&local_17c);
              }
            }
            pauVar13 = (undefined1 (*) [16])
                       FUN_1802c16b0(&local_150,(&DAT_1805e7ab0)[uVar32 * 4],fVar36,0);
            local_130 = *pauVar13;
            local_120 = *(undefined4 *)pauVar13[1];
            uStack_11c = *(undefined4 *)(pauVar13[1] + 4);
            uStack_118 = *(undefined4 *)(pauVar13[1] + 8);
            uStack_114 = *(undefined4 *)(pauVar13[1] + 0xc);
            if (((local_130._0_8_ == 0) || (local_130._8_4_ < 1)) || (local_130._12_4_ < 1)) {
              lVar31 = local_1d0;
            }
            else {
              FUN_1803e8a70((&DAT_1805e7ab0)[uVar32 * 4]);
              FUN_1803320b0(local_130);
              FUN_1803ec6c0(0);
              iVar30 = (&DAT_1805e7ab0)[uVar32 * 4];
              lVar31 = FUN_180280c60(iVar30);
              if ((lVar31 == 0) || (*(longlong *)(lVar31 + 0x38) == 0)) {
                ppuVar14 = (undefined **)&DAT_1805e7ab0;
                do {
                  if (*(int *)ppuVar14 == iVar30) {
                    pcVar26 = ppuVar14[1];
                    if (pcVar26 != (char *)0x0) {
                      local_100 = (undefined8 *****)0x0;
                      uStack_f8 = 0;
                      local_f0 = 0;
                      local_e8 = 0;
                      strlen(pcVar26);
                      FUN_1800133a0(&local_100,pcVar26);
                      goto LAB_180333137;
                    }
                    break;
                  }
                  ppuVar14 = ppuVar14 + 2;
                } while (ppuVar14 != &PTR_DAT_1805e7ce0);
                FUN_18003a390(&local_100,iVar30);
              }
              else {
                FUN_180024b50(&local_100,lVar31 + 0x28);
              }
LAB_180333137:
              pppppuVar23 = &local_100;
              if (0xf < local_e8) {
                pppppuVar23 = local_100;
              }
              cVar10 = FUN_180332250(pppppuVar23);
              if (cVar10 != '\0') {
                iVar30 = DAT_18094f764;
                if (local_1c8 == 0) {
                  iVar30 = DAT_180957240;
                }
                piVar15 = &DAT_180957240;
                if (local_1c8 != 0) {
                  piVar15 = &DAT_18094f764;
                }
                if (0 < local_1a8[2]) {
                  local_19c[1] = 0x40;
                  local_19c[0] = 1;
                  piVar17 = local_19c;
                  if (0 < iVar30) {
                    piVar17 = piVar15;
                  }
                  piVar15 = local_19c + 1;
                  if (iVar30 < 0x41) {
                    piVar15 = piVar17;
                  }
                  if ((local_1a8[2] < *piVar15) &&
                     (iVar30 = (&DAT_1805e7ab0)[uVar32 * 4], 0 < iVar30)) {
                    puVar12 = &DAT_180957244;
                    if (local_1c8 != 0) {
                      puVar12 = &DAT_18094f768;
                    }
                    puVar28 = &DAT_180957284;
                    bVar34 = local_1c8 != 0;
                    if (bVar34) {
                      puVar28 = &DAT_18094f7a8;
                    }
                    local_19c[3] = 0x40;
                    local_19c[2] = 0;
                    puVar16 = &DAT_180957384;
                    if (bVar34) {
                      puVar16 = &DAT_18094f8a8;
                    }
                    pcVar26 = &DAT_180957384;
                    if (bVar34) {
                      pcVar26 = &DAT_18094f8a8;
                    }
                    piVar15 = local_19c + 2;
                    if (-1 < *(int *)(pcVar26 + local_1d0)) {
                      piVar15 = (int *)(puVar16 + local_1d0);
                    }
                    piVar17 = local_19c + 3;
                    if (*(int *)(pcVar26 + local_1d0) < 0x41) {
                      piVar17 = piVar15;
                    }
                    iVar3 = *piVar17;
                    *(int *)(pcVar26 + local_1d0) = iVar3;
                    local_19c[5] = 0x40;
                    local_19c[4] = 0;
                    piVar15 = local_19c + 4;
                    if (-1 < iVar3) {
                      piVar15 = (int *)(puVar16 + local_1d0);
                    }
                    piVar17 = local_19c + 5;
                    if (iVar3 < 0x41) {
                      piVar17 = piVar15;
                    }
                    uVar21 = 0;
                    if (0 < *piVar17) {
                      do {
                        if (*(int *)(puVar12 + uVar21 * 4 + local_1d0 + 0x40) == iVar30)
                        goto LAB_1803333f5;
                        uVar24 = (int)uVar21 + 1;
                        uVar21 = (ulonglong)uVar24;
                      } while ((int)uVar24 < *piVar17);
                    }
                    if (iVar3 < 0x40) {
                      *(int *)(puVar28 + local_1d0 + (longlong)iVar3 * 4) = iVar30;
                      *(int *)(pcVar26 + local_1d0) = *(int *)(pcVar26 + local_1d0) + 1;
                      pcVar26 = (char *)&DAT_180957388;
                      if (local_1c8 != 0) {
                        pcVar26 = (char *)&DAT_18094f8ac;
                      }
                      local_1b0._4_4_ = *(undefined4 *)(pcVar26 + local_1d0);
                      local_1b0._0_4_ = (&DAT_1805e7ab0)[uVar32 * 4];
                      FUN_180349350(puVar28 + local_1d0,&local_1b0);
                      local_1c0 = (&DAT_1805e7ab0)[uVar32 * 4];
                      uVar24 = FUN_180331b80(*(undefined4 *)(pcVar26 + local_1d0),&DAT_1806e1304);
                      puVar33 = local_170;
                      uVar21 = (ulonglong)~uVar24;
                      pbVar18 = (byte *)&local_1c0;
                      do {
                        uVar22 = (ulonglong)*pbVar18;
                        uVar24 = (uint)(uVar21 >> 8) ^
                                 *(uint *)(&DAT_1806c25c0 + (uVar21 & 0xff ^ uVar22) * 4);
                        uVar21 = (ulonglong)uVar24;
                        pbVar18 = pbVar18 + 1;
                      } while (pbVar18 < local_1bc);
                      pcVar25 = "visible";
                      bVar11 = 0x76;
                      do {
                        pcVar25 = pcVar25 + 1;
                        if (((bVar11 == 0x23) && (*pcVar25 == 0x23)) && (pcVar25[1] == 0x23)) {
                          pcVar25 = pcVar25 + 2;
                          uVar29 = uVar24;
                        }
                        else {
                          uVar22 = uVar21 & 0xff ^ (ulonglong)bVar11;
                          uVar29 = (uint)(uVar21 >> 8) ^ *(uint *)(&DAT_1806c25c0 + uVar22 * 4);
                        }
                        uVar21 = (ulonglong)uVar29;
                        bVar11 = *pcVar25;
                      } while (bVar11 != 0);
                      local_1b0 = CONCAT44(local_1b0._4_4_,~uVar29);
                      plVar19 = (longlong *)FUN_18034f560(uVar22,local_110);
                      lVar31 = *plVar19;
                      *(undefined8 *)(lVar31 + 0x14) = 0;
                      *(undefined8 *)(lVar31 + 0x1c) = 0;
                      *(undefined4 *)(lVar31 + 0x24) = 0xffffffff;
                    }
                  }
                }
              }
LAB_1803333f5:
              iVar30 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
              if (iVar30 < 2) {
                FUN_1803ebc00("Calling PopID() too many times!");
              }
              else {
                *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar30 + -1;
              }
              if (0xf < local_e8) {
                pppppuVar23 = local_100;
                if ((0xfff < local_e8 + 1) &&
                   (pppppuVar23 = (undefined8 *****)local_100[-1],
                   0x1f < (ulonglong)((longlong)local_100 + (-8 - (longlong)pppppuVar23)))) {
                  pcVar6 = (code *)swi(0x29);
                  lVar31 = (*pcVar6)(5);
                  puVar27 = auStack_230;
                  goto LAB_180333509;
                }
                thunk_FUN_1803d64e0(pppppuVar23);
              }
              lVar31 = local_1d0;
            }
          }
        }
LAB_180333480:
        pcVar26 = DAT_180ca0a50;
        uVar24 = (int)uVar32 + 1;
        uVar32 = (ulonglong)uVar24;
        pcVar25 = (char *)(ulonglong)local_1d8;
      } while ((int)uVar24 < 0x23);
      local_1b8 = local_1b8 + 1;
      uVar20 = (ulonglong)local_1b8;
    } while ((int)local_1b8 < 4);
    *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
    lVar31 = *(longlong *)(pcVar26 + 0x14f8);
    fVar36 = *(float *)(lVar31 + 0x15c) - fVar36;
    *(float *)(lVar31 + 0x15c) = fVar36;
    *(float *)(lVar31 + 0x118) = fVar36 + *(float *)(lVar31 + 0x28) + *(float *)(lVar31 + 0x160);
    lVar31 = (longlong)*(int *)(pcVar26 + 0x1fe0);
    if (*(int *)(pcVar26 + 0x1fe0) < 1) {
      FUN_1803ebc00("Calling PopFont() too many times!");
      puVar27 = auStack_238;
    }
    else {
LAB_180333509:
      uVar5 = *(undefined8 *)(*(longlong *)(pcVar26 + 0x1fe8) + (lVar31 + -1) * 0x10);
      *(undefined8 *)(puVar27 + -8) = 0x18033352b;
      FUN_1803e8680(uVar5);
      *(int *)(pcVar26 + 0x1fe0) = *(int *)(pcVar26 + 0x1fe0) + -1;
    }
    *(undefined8 *)(puVar27 + -8) = 0x180333536;
    FUN_1802b5590();
  }
  *(undefined8 *)(puVar27 + -8) = 0x180333542;
  return;
}



/* ===== 180333590 FUN_180333590 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_180333590(int param_1,int param_2,undefined1 param_3,float *param_4)

{
  undefined8 *****pppppuVar1;
  uint *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  float fVar9;
  undefined8 uVar10;
  byte bVar11;
  char cVar12;
  int iVar13;
  undefined4 uVar14;
  undefined4 *puVar15;
  undefined *puVar16;
  longlong *plVar17;
  longlong *plVar18;
  undefined8 uVar19;
  size_t sVar20;
  longlong lVar21;
  undefined **ppuVar22;
  longlong *plVar23;
  int *piVar24;
  int *piVar25;
  uint uVar26;
  ulonglong uVar27;
  undefined8 *****pppppuVar28;
  byte *pbVar29;
  int iVar30;
  ulonglong uVar31;
  int iVar32;
  char *pcVar33;
  undefined1 *puVar34;
  undefined1 *puVar35;
  longlong lVar36;
  uint uVar37;
  int iVar38;
  undefined *puVar39;
  char *pcVar40;
  byte *pbVar41;
  longlong lVar42;
  undefined *puVar43;
  undefined8 *puVar44;
  char cVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  undefined4 uVar49;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  undefined8 uStack_390;
  undefined1 auStack_388 [8];
  undefined1 auStack_380 [89];
  undefined1 local_327;
  undefined4 local_324;
  undefined8 local_308;
  undefined1 local_300;
  float local_2fc;
  longlong *local_2f8;
  longlong *plStack_2f0;
  longlong *local_2e8;
  int local_2e0;
  byte local_2dc [4];
  undefined8 local_2d8;
  ulonglong uStack_2d0;
  undefined4 local_2c8;
  float local_2c0;
  float local_2bc;
  float local_2b8;
  undefined4 local_2b4;
  undefined4 local_2b0;
  float local_2a8;
  float local_2a4;
  longlong local_298;
  longlong lStack_290;
  undefined4 local_288;
  byte local_284 [4];
  undefined4 local_280;
  byte local_27c [4];
  undefined4 local_278;
  byte local_274 [4];
  int local_270;
  byte local_26c [4];
  int local_268;
  byte local_264 [4];
  int local_260;
  byte local_25c [4];
  int local_258;
  byte local_254 [4];
  float local_250;
  float local_24c;
  undefined8 local_248;
  float local_240;
  float local_23c;
  int local_238 [2];
  uint local_230 [2];
  int local_228;
  undefined4 local_224;
  undefined4 local_220;
  undefined4 local_21c;
  int local_218 [3];
  float local_20c;
  longlong local_208;
  float local_200;
  int local_1fc;
  int local_1f8;
  int local_1f4;
  undefined8 local_1f0;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined8 local_1d8;
  float local_1d0;
  float local_1cc;
  float local_1c8;
  float local_1c4;
  longlong local_1c0;
  undefined8 local_1b8;
  longlong local_1b0 [2];
  longlong local_1a0 [2];
  longlong local_190 [2];
  longlong local_180 [2];
  undefined8 local_170;
  ulonglong uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 *****local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  ulonglong local_138;
  undefined8 local_128;
  longlong lStack_120;
  longlong local_118;
  longlong lStack_110;
  longlong local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  ulonglong local_e8;
  
  lVar36 = DAT_180ca0a50;
  pbVar41 = (byte *)&local_288;
  puVar34 = auStack_388;
  puVar35 = auStack_388;
  local_e8 = DAT_180919500 ^ (ulonglong)auStack_388;
  local_327 = param_3;
  local_1fc = param_2;
  local_1f8 = param_1;
  puVar43 = &DAT_180957244;
  if (param_1 != 0) {
    puVar43 = &DAT_18094f768;
  }
  lVar42 = (longlong)param_2 * 0x148;
  local_208 = lVar42;
  puVar15 = &DAT_180957388;
  if (param_1 != 0) {
    puVar15 = &DAT_18094f8ac;
  }
  local_324 = puVar15[(longlong)param_2 * 0x52];
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  local_1c0 = *(longlong *)(lVar36 + 0x14f8);
  uVar19 = *(undefined8 *)(local_1c0 + 0x2c8);
  local_1b8 = uVar19;
  fVar56 = *(float *)(local_1c0 + 0x58);
  fVar55 = *(float *)(local_1c0 + 0x28);
  fVar52 = *(float *)(local_1c0 + 0x30);
  fVar57 = *(float *)(local_1c0 + 0xc0);
  local_2f8 = (longlong *)0x0;
  plStack_2f0 = (longlong *)0x0;
  plVar18 = (longlong *)0x0;
  local_2e8 = (longlong *)0x0;
  local_218[1] = 0x40;
  local_218[0] = 0;
  puVar16 = &DAT_180957384;
  if (param_1 != 0) {
    puVar16 = &DAT_18094f8a8;
  }
  iVar13 = *(int *)(puVar16 + lVar42);
  piVar24 = local_218;
  if (-1 < iVar13) {
    piVar24 = (int *)(puVar16 + lVar42);
  }
  piVar25 = local_218 + 1;
  if (iVar13 < 0x41) {
    piVar25 = piVar24;
  }
  iVar13 = *piVar25;
  lVar36 = (longlong)iVar13;
  if (lVar36 != -1) {
    if (0x555555555555555 < lVar36 + 1U) goto LAB_18033534b;
    plVar17 = (longlong *)FUN_18000fb70(lVar36 * 0x30 + 0x30);
    FUN_180540530(plVar17,local_2f8,(longlong)plStack_2f0 - (longlong)local_2f8);
    if (local_2f8 != (longlong *)0x0) {
      uVar31 = ((longlong)local_2e8 - (longlong)local_2f8 >> 4) * 0x10;
      plVar23 = local_2f8;
      if (0xfff < uVar31) {
        plVar23 = (longlong *)local_2f8[-1];
        if (0x1f < (ulonglong)((longlong)local_2f8 + (-8 - (longlong)plVar23))) {
          pcVar4 = (code *)swi(0x29);
          (*pcVar4)(5);
          puVar34 = auStack_380;
          goto LAB_1803337aa;
        }
        uVar31 = uVar31 + 0x27;
      }
      thunk_FUN_1803d64e0(plVar23,uVar31);
    }
    puVar34 = auStack_388;
    plVar18 = plVar17 + lVar36 * 6 + 6;
    local_2f8 = plVar17;
    plStack_2f0 = plVar17;
    local_2e8 = plVar18;
  }
LAB_1803337aa:
  fVar9 = DAT_1808ac8b0;
  fVar51 = DAT_1808ac864;
  puVar44 = (undefined8 *)(puVar43 + lVar42);
  local_2fc = fVar56 + fVar55;
  fVar57 = ((fVar52 + fVar55) - fVar56) - fVar57;
  fVar56 = fVar57 - local_2fc;
  *(float *)(puVar34 + 0x70) = fVar56;
  fVar55 = fVar56 - DAT_1808ac980;
  local_20c = fVar55;
  uVar37 = 0;
  if (0 < iVar13) {
    do {
      fVar56 = 0.0;
      fVar52 = 0.0;
      fVar53 = 0.0;
      fVar54 = 0.0;
      local_108 = 0;
      uStack_100 = 0;
      uVar49 = *(undefined4 *)((longlong)puVar44 + (ulonglong)uVar37 * 4 + 0x40);
      local_128 = CONCAT44(local_128._4_4_,uVar49);
      *(undefined8 *)(puVar34 + -8) = 0x18033383a;
      plVar18 = (longlong *)FUN_1802c16b0(&local_170,uVar49,fVar9,0);
      lStack_120 = *plVar18;
      local_118 = plVar18[1];
      lStack_110 = plVar18[2];
      if (((lStack_120 != 0) && (0 < (int)plVar18[1])) && (0 < *(int *)((longlong)plVar18 + 0xc))) {
        fVar56 = *(float *)(plVar18 + 3);
        fVar52 = *(float *)((longlong)plVar18 + 0x1c);
        fVar53 = fVar56 + fVar51;
        fVar54 = fVar52 + fVar51;
        local_108 = plVar18[3];
        uStack_100 = CONCAT44(fVar54,fVar53);
      }
      if (plStack_2f0 == local_2e8) {
        *(undefined8 *)(puVar34 + -8) = 0x1803338f2;
        FUN_180352090(&local_2f8,plStack_2f0,&local_128);
      }
      else {
        *plStack_2f0 = local_128;
        plStack_2f0[1] = lStack_120;
        plStack_2f0[2] = local_118;
        plStack_2f0[3] = lStack_110;
        *(float *)(plStack_2f0 + 4) = fVar56;
        *(float *)((longlong)plStack_2f0 + 0x24) = fVar52;
        *(float *)(plStack_2f0 + 5) = fVar53;
        *(float *)((longlong)plStack_2f0 + 0x2c) = fVar54;
        plStack_2f0 = plStack_2f0 + 6;
      }
      uVar37 = uVar37 + 1;
    } while ((int)uVar37 < iVar13);
    fVar56 = *(float *)(puVar34 + 0x70);
    plVar18 = local_2e8;
  }
  lVar42 = _UNK_1808add78;
  lVar36 = _DAT_1808add70;
  local_128 = (ulonglong)local_128._4_4_ << 0x20;
  lStack_120 = 0;
  local_118 = 0;
  lStack_110 = _DAT_1808add70;
  local_108 = _UNK_1808add78;
  uStack_100 = 0x41b0000041b00000;
  if (plStack_2f0 == plVar18) {
    *(undefined8 *)(puVar34 + -8) = 0x180333989;
    FUN_180352090(&local_2f8,plStack_2f0,&local_128);
  }
  else {
    *plStack_2f0 = local_128;
    plStack_2f0[1] = 0;
    plStack_2f0[2] = 0;
    plStack_2f0[3] = lVar36;
    plStack_2f0[4] = lVar42;
    plStack_2f0[5] = 0x41b0000041b00000;
    plStack_2f0 = plStack_2f0 + 6;
  }
  fVar52 = 0.0;
  fVar54 = 0.0;
  fVar53 = 0.0;
  fVar51 = DAT_1808acc84;
  for (plVar18 = local_2f8; plVar18 != plStack_2f0; plVar18 = plVar18 + 6) {
    if (fVar55 < *(float *)(plVar18 + 5) + fVar51) {
      if (0.0 < fVar52) {
        fVar52 = fVar52 + DAT_1808ac750;
      }
      fVar52 = fVar52 + *(float *)((longlong)plVar18 + 0x2c);
      fVar51 = fVar54;
    }
    fVar51 = fVar51 + *(float *)(plVar18 + 5) + DAT_1808ac750;
  }
  local_288 = *(undefined4 *)(puVar34 + 100);
  uVar31 = 0xffffffff;
  pcVar33 = "wp_group";
  pcVar40 = "wp_group";
  bVar11 = 0x77;
  do {
    pcVar40 = pcVar40 + 1;
    if (((bVar11 == 0x23) && (*pcVar40 == 0x23)) && (pcVar40[1] == 0x23)) {
      uVar31 = 0xffffffff;
      pcVar40 = pcVar40 + 2;
    }
    else {
      uVar31 = (ulonglong)
               ((uint)(uVar31 >> 8) ^
               *(uint *)(&DAT_1806c25c0 + (uVar31 & 0xff ^ (ulonglong)bVar11) * 4));
    }
    bVar11 = *pcVar40;
  } while (bVar11 != 0);
  do {
    uVar27 = uVar31 & 0xff ^ (ulonglong)*pbVar41;
    uVar37 = (uint)(uVar31 >> 8) ^ *(uint *)(&DAT_1806c25c0 + uVar27 * 4);
    uVar31 = (ulonglong)uVar37;
    pbVar41 = pbVar41 + 1;
  } while (pbVar41 < local_284);
  pcVar40 = "height";
  bVar11 = 0x68;
  uVar26 = uVar37;
  do {
    pcVar40 = pcVar40 + 1;
    if (((bVar11 == 0x23) && (*pcVar40 == 0x23)) && (pcVar40[1] == 0x23)) {
      pcVar40 = pcVar40 + 2;
      uVar26 = uVar37;
    }
    else {
      uVar27 = (ulonglong)(uVar26 & 0xff) ^ (ulonglong)bVar11;
      uVar26 = uVar26 >> 8 ^ *(uint *)(&DAT_1806c25c0 + uVar27 * 4);
    }
    bVar11 = *pcVar40;
  } while (bVar11 != 0);
  *(uint *)(puVar34 + 0x70) = ~uVar26;
  local_2b4 = 0;
  local_2b0 = 0xffffffff;
  *(undefined8 *)(puVar34 + -8) = 0x180333ad1;
  local_2c0 = fVar52;
  local_2bc = fVar52;
  local_2b8 = fVar52;
  FUN_18034a380(uVar27,&local_298,puVar34 + 0x70,&local_2c0);
  fVar51 = DAT_1808ac118;
  *(undefined8 *)(puVar34 + -8) = 0x180333af1;
  fVar46 = (float)FUN_1802b3660(local_298 + 0x14,fVar52,DAT_1808ac118,0);
  fVar46 = fVar46 + DAT_1808aca50;
  fVar55 = *(float *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x11c);
  fVar52 = fVar55 + fVar46;
  *(float *)(puVar34 + 0x78) = fVar57;
  *(float *)(puVar34 + 0x7c) = fVar52;
  *param_4 = fVar52;
  fVar52 = DAT_1808ac1f4;
  cVar45 = puVar34[0x61];
  if (cVar45 == '\0') {
    fVar47 = 0.0;
    fVar48 = fVar54;
  }
  else {
    fVar48 = DAT_1808ac1f4;
    fVar47 = DAT_1808ac34c;
  }
  local_308 = CONCAT44(fVar47,fVar48);
  *(undefined8 *)(puVar34 + -8) = 0x180333b7c;
  FUN_18034d610(&DAT_180ca1740,&local_298,puVar34 + 100,&local_308);
  fVar48 = *(float *)(local_298 + 0x14);
  fVar47 = *(float *)(local_298 + 0x18);
  local_280 = *(undefined4 *)(puVar34 + 100);
  uVar31 = 0xffffffff;
  pcVar40 = "wp_group";
  bVar11 = 0x77;
  do {
    pcVar40 = pcVar40 + 1;
    if (((bVar11 == 0x23) && (*pcVar40 == 0x23)) && (pcVar40[1] == 0x23)) {
      uVar31 = 0xffffffff;
      pcVar40 = pcVar40 + 2;
    }
    else {
      uVar31 = (ulonglong)
               ((uint)(uVar31 >> 8) ^
               *(uint *)(&DAT_1806c25c0 + (uVar31 & 0xff ^ (ulonglong)bVar11) * 4));
    }
    bVar11 = *pcVar40;
  } while (bVar11 != 0);
  pbVar41 = (byte *)&local_280;
  do {
    uVar27 = uVar31 & 0xff ^ (ulonglong)*pbVar41;
    uVar37 = (uint)(uVar31 >> 8) ^ *(uint *)(&DAT_1806c25c0 + uVar27 * 4);
    uVar31 = (ulonglong)uVar37;
    pbVar41 = pbVar41 + 1;
  } while (pbVar41 < local_27c);
  pcVar40 = "hover";
  bVar11 = 0x68;
  uVar26 = uVar37;
  do {
    pcVar40 = pcVar40 + 1;
    if (((bVar11 == 0x23) && (*pcVar40 == 0x23)) && (pcVar40[1] == 0x23)) {
      pcVar40 = pcVar40 + 2;
      uVar26 = uVar37;
    }
    else {
      uVar27 = (ulonglong)(uVar26 & 0xff) ^ (ulonglong)bVar11;
      uVar26 = uVar26 >> 8 ^ *(uint *)(&DAT_1806c25c0 + uVar27 * 4);
    }
    bVar11 = *pcVar40;
  } while (bVar11 != 0);
  *(uint *)(puVar34 + 0x70) = ~uVar26;
  local_2b4 = 0;
  local_2b0 = 0xffffffff;
  *(undefined8 *)(puVar34 + -8) = 0x180333c71;
  local_2c0 = fVar48;
  local_2bc = fVar48;
  local_2b8 = fVar48;
  FUN_18034a380(uVar27,&local_298,puVar34 + 0x70,&local_2c0);
  *(undefined8 *)(puVar34 + -8) = 0x180333c88;
  fVar48 = (float)FUN_1802b3660(local_298 + 0x14,fVar48,fVar51,0);
  local_278 = *(undefined4 *)(puVar34 + 100);
  uVar31 = 0xffffffff;
  bVar11 = 0x77;
  do {
    pcVar33 = pcVar33 + 1;
    if (((bVar11 == 0x23) && (*pcVar33 == 0x23)) && (pcVar33[1] == 0x23)) {
      uVar31 = 0xffffffff;
      pcVar33 = pcVar33 + 2;
    }
    else {
      uVar31 = (ulonglong)
               ((uint)(uVar31 >> 8) ^
               *(uint *)(&DAT_1806c25c0 + (uVar31 & 0xff ^ (ulonglong)bVar11) * 4));
    }
    bVar11 = *pcVar33;
  } while (bVar11 != 0);
  pbVar41 = (byte *)&local_278;
  do {
    uVar27 = uVar31 & 0xff ^ (ulonglong)*pbVar41;
    uVar37 = (uint)(uVar31 >> 8) ^ *(uint *)(&DAT_1806c25c0 + uVar27 * 4);
    uVar31 = (ulonglong)uVar37;
    pbVar41 = pbVar41 + 1;
  } while (pbVar41 < local_274);
  pcVar33 = "light";
  bVar11 = 0x6c;
  uVar26 = uVar37;
  do {
    pcVar33 = pcVar33 + 1;
    if (((bVar11 == 0x23) && (*pcVar33 == 0x23)) && (pcVar33[1] == 0x23)) {
      pcVar33 = pcVar33 + 2;
      uVar26 = uVar37;
    }
    else {
      uVar27 = (ulonglong)(uVar26 & 0xff) ^ (ulonglong)bVar11;
      uVar26 = uVar26 >> 8 ^ *(uint *)(&DAT_1806c25c0 + uVar27 * 4);
    }
    bVar11 = *pcVar33;
  } while (bVar11 != 0);
  *(uint *)(puVar34 + 0x70) = ~uVar26;
  local_2b4 = 0;
  local_2b0 = 0xffffffff;
  *(undefined8 *)(puVar34 + -8) = 0x180333d71;
  local_2c0 = fVar47;
  local_2bc = fVar47;
  local_2b8 = fVar47;
  FUN_18034a380(uVar27,&local_298,puVar34 + 0x70,&local_2c0);
  *(undefined8 *)(puVar34 + -8) = 0x180333d88;
  uVar49 = FUN_1802b3660(local_298 + 0x14,fVar47,fVar51,0);
  lVar42 = DAT_180ca0a50;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  lVar36 = *(longlong *)(lVar42 + 0x14f8);
  local_308 = CONCAT44(fVar55,local_2fc);
  *(ulonglong *)(lVar36 + 0x118) = CONCAT44(fVar55,local_2fc);
  *(undefined1 *)(lVar36 + 0x159) = 1;
  puVar2 = (uint *)(lVar42 + 0x1eb4);
  *puVar2 = *puVar2 | 0x4000;
  local_250 = DAT_1808ac34c;
  if (DAT_1808ac34c <= fVar56) {
    local_250 = fVar56;
  }
  *(undefined8 *)(puVar34 + -8) = 0x180333df9;
  local_24c = fVar46;
  local_300 = FUN_180415e30("##row",&local_250,0);
  if (*(int *)(DAT_180ca0a50 + 0x1578) == 0) {
    puVar34[0x6a] = 0;
  }
  else {
    puVar34[0x6a] = *(int *)(DAT_180ca0a50 + 0x1578) == *(int *)(DAT_180ca0a50 + 0x1ee8);
  }
  *(undefined8 *)(puVar34 + -8) = 0x180333e29;
  cVar12 = FUN_1803dd930(0x100);
  fVar56 = DAT_1808ac7ec;
  local_21c = *(undefined4 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x118);
  local_250 = *(float *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x11c);
  local_224 = *(undefined4 *)(local_1c0 + 0x130);
  local_220 = *(undefined4 *)(local_1c0 + 0x134);
  *(undefined4 *)(puVar34 + 0x28) = 0;
  *(float *)(puVar34 + 0x20) = DAT_1808ac7ec;
  *(undefined8 *)(puVar34 + -8) = 0x180333ea2;
  FUN_1803fe590(uVar19,&local_308,puVar34 + 0x78,DAT_180960f60);
  if (cVar45 == '\0') {
    uVar37 = DAT_180960eec;
  }
  else {
    uVar37 = (int)(longlong)((float)(DAT_1809f54bc >> 0x18) * DAT_1808ac1b0 + fVar52) << 0x18 |
             DAT_1809f54bc & 0xffffff;
  }
  local_298 = _DAT_1808add00;
  lStack_290 = _UNK_1808add08;
  *(float *)(puVar34 + 0x30) = DAT_1808ac34c;
  *(undefined4 *)(puVar34 + 0x28) = 0;
  *(longlong **)(puVar34 + 0x20) = &local_298;
  *(undefined8 *)(puVar34 + -8) = 0x180333f1d;
  FUN_18036bcb0(uVar19,&local_308,puVar34 + 0x78,uVar37);
  if (0.0 < fVar48) {
    *(undefined4 *)(puVar34 + 0x28) = 0;
    *(float *)(puVar34 + 0x20) = fVar56;
    *(undefined8 *)(puVar34 + -8) = 0x180333f73;
    FUN_1803fe590(uVar19,&local_308,puVar34 + 0x78,
                  (int)(longlong)((float)(DAT_180960f44 >> 0x18) * fVar48 * fVar51 + fVar52) << 0x18
                  | DAT_180960f44 & 0xffffff);
  }
  uVar19 = *(undefined8 *)(DAT_180ca0a50 + 0x14f8);
  *(undefined8 *)(puVar34 + -8) = 0x180333f8d;
  iVar13 = FUN_1803e8900(uVar19,"##wp_picker");
  lVar36 = (longlong)*(int *)(DAT_180ca0a50 + 0x2030);
  if (*(int *)(DAT_180ca0a50 + 0x2030) < *(int *)(DAT_180ca0a50 + 0x2020)) {
    lVar42 = lVar36 * 0x58;
    lVar36 = *(longlong *)(DAT_180ca0a50 + 0x2028);
    if ((*(int *)(lVar42 + lVar36) != iVar13) || (*(char *)(lVar42 + 0x34 + lVar36) != '\0'))
    goto LAB_180333fbf;
    cVar45 = '\x01';
  }
  else {
LAB_180333fbf:
    cVar45 = '\0';
  }
  puVar34[0x68] = cVar45;
  cVar45 = cVar45 != '\0' || cVar12 != '\0';
  puVar34[0x62] = cVar45;
  *(undefined8 *)(puVar34 + -8) = 0x180333fe1;
  plVar18 = (longlong *)FUN_18034d820(lVar36,local_1b0,puVar34 + 100);
  lVar36 = *plVar18;
  pppppuVar1 = (undefined8 *****)(lVar36 + 0x18);
  uVar19 = *(undefined8 *)(DAT_180ca0a50 + 0x14f8);
  *(undefined8 *)(puVar34 + -8) = 0x180334002;
  iVar13 = FUN_1803e8900(uVar19,"##name");
  *(undefined8 *)(puVar34 + -8) = 0x180334011;
  uVar19 = FUN_180512ae0(puVar44,0x40);
  local_150 = (undefined8 *****)0x0;
  uStack_148 = 0;
  local_140 = 0;
  local_138 = 0;
  *(undefined8 *)(puVar34 + -8) = 0x18033403b;
  FUN_1800133a0(&local_150,puVar44,uVar19);
  if ((*(int *)(DAT_180ca0a50 + 0x1578) != iVar13) && ((undefined8 ******)pppppuVar1 != &local_150))
  {
    pppppuVar28 = &local_150;
    if (0xf < local_138) {
      pppppuVar28 = local_150;
    }
    *(undefined8 *)(puVar34 + -8) = 0x18033407d;
    FUN_180029840(pppppuVar1,pppppuVar28,local_140);
  }
  local_128 = 0;
  lStack_120 = 0;
  local_118 = 0;
  lStack_110 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  pppppuVar28 = &local_150;
  if (0xf < local_138) {
    pppppuVar28 = local_150;
  }
  *(undefined8 *)(puVar34 + -8) = 0x1803340cb;
  snprintf(&local_128,0x40,&DAT_1806d3198,pppppuVar28);
  fVar55 = DAT_1808ac930;
  if (*(ulonglong *)(lVar36 + 0x30) < 0x10) {
    pppppuVar28 = pppppuVar1;
  }
  else {
    pppppuVar28 = (undefined8 *****)*pppppuVar1;
  }
  lVar36 = DAT_181107a08;
  if (DAT_181107a08 == 0) {
    lVar36 = *(longlong *)(DAT_180ca0a50 + 0x11f0);
  }
  *(undefined4 *)(puVar34 + 0x50) = 0;
  *(undefined8 *)(puVar34 + 0x40) = 0;
  *(undefined8 *)(puVar34 + 0x38) = 0;
  *(undefined8 *)(puVar34 + 0x30) = 0;
  *(undefined8 ******)(puVar34 + 0x28) = pppppuVar28;
  *(undefined4 *)(puVar34 + 0x20) = 0;
  *(undefined8 *)(puVar34 + -8) = 0x180334132;
  FUN_18040a2f0(&local_2a8,lVar36,DAT_1808ac930,DAT_1808acd08);
  *(undefined8 *)(puVar34 + -8) = 0x180334144;
  fVar46 = (float)FUN_18053f0d0(local_2a8 + DAT_1808ac2f0);
  lVar36 = DAT_180ca0a50;
  local_2fc = local_2fc + fVar9;
  fVar9 = local_308._4_4_;
  fVar48 = local_308._4_4_ + fVar56;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  lVar36 = *(longlong *)(lVar36 + 0x14f8);
  *(float *)(lVar36 + 0x118) = local_2fc;
  *(float *)(lVar36 + 0x11c) = fVar48;
  *(undefined1 *)(lVar36 + 0x159) = 1;
  *(undefined8 *)(puVar34 + -8) = 0x1803341ad;
  uVar49 = FUN_1802b38e0(DAT_180960ef8,DAT_180960ec8,uVar49);
  *(undefined8 *)(puVar34 + -8) = 0x1803341b6;
  FUN_1803d8730(0,uVar49);
  *(undefined8 *)(puVar34 + 0x78) = 0;
  *(undefined8 *)(puVar34 + -8) = 0x1803341ce;
  FUN_1803d89a0(0xb,puVar34 + 0x78);
  lVar36 = DAT_180ca0a50;
  local_1f0 = CONCAT44(*(undefined4 *)(DAT_180ca0a50 + 0xce8),0xd);
  *(undefined8 *)(puVar34 + -8) = 0x180334202;
  FUN_1803f6350(DAT_180ca0a50 + 0x1fd0,&local_1f0);
  *(undefined4 *)(lVar36 + 0xce8) = 0;
  *(undefined8 *)(puVar34 + -8) = 0x180334215;
  FUN_1803d8730(7,0);
  *(undefined8 *)(puVar34 + -8) = 0x18033424c;
  FUN_1803d8730(8,(int)(longlong)((float)(DAT_180960ef4 >> 0x18) * fVar51 + fVar52) << 0x18 |
                  DAT_180960ef4 & 0xffffff);
  *(undefined8 *)(puVar34 + -8) = 0x180334283;
  FUN_1803d8730(9,(int)(longlong)((float)(DAT_180960ef4 >> 0x18) * fVar51 + fVar52) << 0x18 |
                  DAT_180960ef4 & 0xffffff);
  lVar36 = DAT_181107a08;
  if (DAT_181107a08 == 0) {
    lVar36 = *(longlong *)(DAT_180ca0a50 + 0x11f0);
  }
  local_248 = *(undefined8 *)(DAT_180ca0a50 + 0x11f0);
  local_240 = *(float *)(DAT_180ca0a50 + 0x1204);
  local_23c = *(float *)(DAT_180ca0a50 + 0x1200);
  *(undefined8 *)(puVar34 + -8) = 0x1803342d2;
  FUN_1803f6200(DAT_180ca0a50 + 0x1fe0,&local_248);
  *(undefined8 *)(puVar34 + -8) = 0x1803342e2;
  FUN_1803e8680(lVar36,fVar55,0);
  lVar36 = DAT_180ca0a50;
  *(uint *)(DAT_180ca0a50 + 0x1eb0) = *(uint *)(DAT_180ca0a50 + 0x1eb0) | 1;
  fVar51 = DAT_1808ac540;
  *(float *)(lVar36 + 0x1ec8) = fVar46 + DAT_1808ac540;
  *(undefined8 *)(puVar34 + -8) = 0x180334318;
  FUN_1803d8730(1,DAT_180960ec4);
  *(undefined8 *)(puVar34 + -8) = 0x180334328;
  FUN_1803d8730(0x34,DAT_180960f54);
  *(undefined8 *)(puVar34 + -8) = 0x180334338;
  FUN_1803d8730(0x22,DAT_180960ef8);
  local_2a4 = 4.2039e-45;
  fVar52 = *(float *)(DAT_180ca0a50 + 0xd98);
  *(undefined4 *)(DAT_180ca0a50 + 0xd98) = 0x3f800000;
  *(undefined8 *)(puVar34 + 0x78) = 0;
  *(undefined8 *)(puVar34 + 0x38) = 0;
  *(undefined8 *)(puVar34 + 0x30) = 0;
  *(undefined4 *)(puVar34 + 0x28) = 0x8040;
  *(undefined1 **)(puVar34 + 0x20) = puVar34 + 0x78;
  *(undefined8 *)(puVar34 + -8) = 0x18033439e;
  local_2a8 = fVar52;
  cVar12 = FUN_18041c570("##name",0,&local_128,0x40);
  *(float *)(DAT_180ca0a50 + 0xd98) = fVar52;
  *(undefined8 *)(puVar34 + -8) = 0x1803343b7;
  FUN_1803d87f0(3);
  if ((*(int *)(DAT_180ca0a50 + 0x1578) != 0) &&
     (*(int *)(DAT_180ca0a50 + 0x1578) == *(int *)(DAT_180ca0a50 + 0x1ee8))) {
    *(undefined8 *)(puVar34 + -8) = 0x1803343dd;
    sVar20 = strlen((char *)&local_128);
    *(undefined8 *)(puVar34 + -8) = 0x1803343ef;
    FUN_180029840(pppppuVar1,&local_128,sVar20);
  }
  if (cVar12 != '\0') {
    *puVar44 = 0;
    puVar44[1] = 0;
    puVar44[2] = 0;
    puVar44[3] = 0;
    puVar44[4] = 0;
    puVar44[5] = 0;
    puVar44[6] = 0;
    puVar44[7] = 0;
    *(undefined8 *)(puVar34 + -8) = 0x180334424;
    snprintf(puVar44,0x40,&DAT_1806d3198,&local_128);
  }
  lVar36 = DAT_180ca0a50;
  if (*(int *)(DAT_180ca0a50 + 0x1fe0) < 1) {
    *(undefined8 *)(puVar34 + -8) = 0x180334442;
    FUN_1803ebc00("Calling PopFont() too many times!");
  }
  else {
    lVar21 = (longlong)*(int *)(DAT_180ca0a50 + 0x1fe0) + -1;
    lVar42 = *(longlong *)(DAT_180ca0a50 + 0x1fe8);
    uVar49 = *(undefined4 *)(lVar42 + 0xc + lVar21 * 0x10);
    uVar14 = *(undefined4 *)(lVar42 + 8 + lVar21 * 0x10);
    uVar19 = *(undefined8 *)(lVar42 + lVar21 * 0x10);
    *(undefined8 *)(puVar34 + -8) = 0x180334466;
    FUN_1803e8680(uVar19,uVar14,uVar49);
    *(int *)(lVar36 + 0x1fe0) = *(int *)(lVar36 + 0x1fe0) + -1;
  }
  lVar36 = DAT_180ca0a50;
  iVar13 = *(int *)(DAT_180ca0a50 + 0x1fc0);
  iVar38 = 3;
  if (iVar13 < 3) {
    *(undefined8 *)(puVar34 + -8) = 0x18033448a;
    FUN_1803ebc00("Calling PopStyleColor() too many times!");
    iVar13 = *(int *)(lVar36 + 0x1fc0);
    if (0 < iVar13) {
      iVar38 = iVar13;
      goto LAB_1803344a0;
    }
  }
  else {
LAB_1803344a0:
    do {
      puVar44 = (undefined8 *)(*(longlong *)(lVar36 + 0x1fc8) + 4 + ((longlong)iVar13 + -1) * 0x14);
      uVar19 = puVar44[1];
      puVar3 = (undefined8 *)
               (lVar36 + 0xde0 +
               (longlong)*(int *)(*(longlong *)(lVar36 + 0x1fc8) + ((longlong)iVar13 + -1) * 0x14) *
               0x10);
      *puVar3 = *puVar44;
      puVar3[1] = uVar19;
      iVar13 = *(int *)(lVar36 + 0x1fc0) + -1;
      *(int *)(lVar36 + 0x1fc0) = iVar13;
      iVar38 = iVar38 + -1;
    } while (0 < iVar38);
  }
  *(undefined8 *)(puVar34 + -8) = 0x1803344e2;
  FUN_1803d8a40(2);
  lVar36 = DAT_180ca0a50;
  iVar13 = *(int *)(DAT_180ca0a50 + 0x1fc0);
  if (iVar13 < 1) {
    *(undefined8 *)(puVar34 + -8) = 0x180334500;
    FUN_1803ebc00("Calling PopStyleColor() too many times!");
    iVar13 = *(int *)(lVar36 + 0x1fc0);
    if (0 < iVar13) {
      iVar38 = iVar13;
      goto LAB_180334520;
    }
  }
  else {
    iVar38 = 1;
LAB_180334520:
    do {
      puVar44 = (undefined8 *)(*(longlong *)(lVar36 + 0x1fc8) + 4 + ((longlong)iVar13 + -1) * 0x14);
      uVar19 = puVar44[1];
      puVar3 = (undefined8 *)
               (lVar36 + 0xde0 +
               (longlong)*(int *)(*(longlong *)(lVar36 + 0x1fc8) + ((longlong)iVar13 + -1) * 0x14) *
               0x10);
      *puVar3 = *puVar44;
      puVar3[1] = uVar19;
      iVar13 = *(int *)(lVar36 + 0x1fc0) + -1;
      *(int *)(lVar36 + 0x1fc0) = iVar13;
      iVar38 = iVar38 + -1;
    } while (0 < iVar38);
  }
  *(undefined8 *)(puVar34 + -8) = 0x180334566;
  FUN_18000f890(&local_150);
  lVar36 = DAT_180ca0a50;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  lVar36 = *(longlong *)(lVar36 + 0x14f8);
  *(float *)(lVar36 + 0x118) = (fVar57 - DAT_1808ac988) - fVar51;
  *(float *)(lVar36 + 0x11c) = fVar9 + fVar51;
  *(undefined1 *)(lVar36 + 0x159) = 1;
  *(undefined8 *)(puVar34 + -8) = 0x1803345b7;
  cVar12 = FUN_1803322d0();
  if (cVar12 != '\0') {
    *(undefined8 *)(puVar34 + -8) = 0x1803345cc;
    plVar18 = (longlong *)FUN_18034dd70(extraout_XMM0_Qa,local_1b0,puVar34 + 100);
    *(undefined1 *)(*plVar18 + 0x14) = 1;
  }
  plVar18 = plStack_2f0;
  uVar10 = _UNK_1808adcf8;
  uVar19 = _DAT_1808adcf0;
  uVar49 = DAT_1808ac7ac;
  if (local_2f8 == plStack_2f0) {
    fVar56 = DAT_1808ac1f4;
  }
  else {
    local_200 = fVar48 + fVar55 + fVar56;
    bVar7 = false;
    bVar6 = false;
    plVar17 = local_2f8;
    fVar55 = DAT_1808ac118;
    do {
      if (local_20c < fVar53 + *(float *)(plVar17 + 5)) {
        fVar54 = fVar54 + *(float *)((longlong)plVar17 + 0x2c) + DAT_1808ac750;
        fVar53 = 0.0;
      }
      iVar13 = (int)*plVar17;
      uVar14 = *(undefined4 *)(puVar34 + 100);
      if (iVar13 == 0) {
LAB_180334677:
        bVar5 = false;
      }
      else {
        *(undefined8 *)(puVar34 + -8) = 0x18033466e;
        cVar45 = FUN_180331cf0(uVar14,iVar13);
        if (cVar45 == '\0') goto LAB_180334677;
        bVar5 = true;
      }
      *(undefined8 *)(puVar34 + -8) = 0x18033468c;
      local_270 = iVar13;
      uVar37 = FUN_180331b80(uVar14,&DAT_1806e1304);
      uVar37 = ~uVar37;
      pbVar41 = (byte *)&local_270;
      do {
        uVar37 = uVar37 >> 8 ^
                 *(uint *)(&DAT_1806c25c0 + ((ulonglong)(uVar37 & 0xff) ^ (ulonglong)*pbVar41) * 4);
        pbVar41 = pbVar41 + 1;
        pbVar29 = local_26c;
      } while (pbVar41 < pbVar29);
      pbVar41 = &DAT_1806d23e5;
      bVar11 = 0x78;
      uVar26 = uVar37;
      do {
        if (((bVar11 == 0x23) && (*pbVar41 == 0x23)) && (pbVar41[1] == 0x23)) {
          pbVar41 = pbVar41 + 2;
          uVar26 = uVar37;
        }
        else {
          pbVar29 = (byte *)((ulonglong)(uVar26 & 0xff) ^ (ulonglong)bVar11);
          uVar26 = uVar26 >> 8 ^ *(uint *)(&DAT_1806c25c0 + (longlong)pbVar29 * 4);
        }
        bVar11 = *pbVar41;
        pbVar41 = pbVar41 + 1;
      } while (bVar11 != 0);
      *(uint *)(puVar34 + 0x70) = ~uVar26;
      local_2d8 = (undefined8 *)CONCAT44(fVar53,fVar53);
      uStack_2d0 = (ulonglong)(uint)fVar53;
      local_2c8 = 0xffffffff;
      *(undefined8 *)(puVar34 + -8) = 0x18033473f;
      FUN_18034a380(pbVar29,local_1a0,puVar34 + 0x70,&local_2d8);
      *(undefined8 *)(puVar34 + -8) = 0x18033475a;
      fVar56 = (float)FUN_1802b3660(local_1a0[0] + 0x14,fVar53,fVar55,0);
      local_268 = (int)*plVar17;
      *(undefined8 *)(puVar34 + -8) = 0x180334773;
      uVar37 = FUN_180331b80(*(undefined4 *)(puVar34 + 100),&DAT_1806e1304);
      uVar37 = ~uVar37;
      pbVar41 = (byte *)&local_268;
      do {
        uVar37 = uVar37 >> 8 ^
                 *(uint *)(&DAT_1806c25c0 + ((ulonglong)(uVar37 & 0xff) ^ (ulonglong)*pbVar41) * 4);
        pbVar41 = pbVar41 + 1;
        pbVar29 = local_264;
      } while (pbVar41 < pbVar29);
      pbVar41 = &DAT_1806d23e9;
      bVar11 = 0x79;
      local_230[0] = uVar37;
      do {
        if (((bVar11 == 0x23) && (*pbVar41 == 0x23)) && (pbVar41[1] == 0x23)) {
          pbVar41 = pbVar41 + 2;
          local_230[0] = uVar37;
        }
        else {
          pbVar29 = (byte *)((ulonglong)(local_230[0] & 0xff) ^ (ulonglong)bVar11);
          local_230[0] = local_230[0] >> 8 ^ *(uint *)(&DAT_1806c25c0 + (longlong)pbVar29 * 4);
        }
        bVar11 = *pbVar41;
        pbVar41 = pbVar41 + 1;
      } while (bVar11 != 0);
      local_230[0] = ~local_230[0];
      local_2d8 = (undefined8 *)CONCAT44(fVar54,fVar54);
      uStack_2d0 = (ulonglong)(uint)fVar54;
      local_2c8 = 0xffffffff;
      *(undefined8 *)(puVar34 + -8) = 0x18033481d;
      FUN_18034a380(pbVar29,local_190,local_230,&local_2d8);
      *(undefined8 *)(puVar34 + -8) = 0x180334838;
      fVar52 = (float)FUN_1802b3660(local_190[0] + 0x14,fVar54,fVar55,0);
      if (iVar13 == 0) {
        fVar57 = DAT_1808ac34c;
      }
      else {
        fVar57 = 0.0;
        if (!bVar5) {
          fVar57 = DAT_1808ac34c;
        }
        local_2e0 = (int)*plVar17;
        *(undefined8 *)(puVar34 + -8) = 0x180334870;
        uVar37 = FUN_180331b80(*(undefined4 *)(puVar34 + 100),&DAT_1806e1304);
        uVar37 = ~uVar37;
        pbVar41 = (byte *)&local_2e0;
        do {
          uVar31 = (ulonglong)*pbVar41;
          uVar37 = uVar37 >> 8 ^ *(uint *)(&DAT_1806c25c0 + (uVar37 & 0xff ^ uVar31) * 4);
          pbVar41 = pbVar41 + 1;
        } while (pbVar41 < local_2dc);
        pcVar33 = "visible";
        bVar11 = 0x76;
        uVar26 = uVar37;
        do {
          pcVar33 = pcVar33 + 1;
          if (((bVar11 == 0x23) && (*pcVar33 == 0x23)) && (pcVar33[1] == 0x23)) {
            pcVar33 = pcVar33 + 2;
            uVar26 = uVar37;
          }
          else {
            uVar31 = (ulonglong)(uVar26 & 0xff) ^ (ulonglong)bVar11;
            uVar26 = uVar26 >> 8 ^ *(uint *)(&DAT_1806c25c0 + uVar31 * 4);
          }
          bVar11 = *pcVar33;
        } while (bVar11 != 0);
        local_2d8 = (undefined8 *)CONCAT44(local_2d8._4_4_,~uVar26);
        local_170 = CONCAT44(fVar57,fVar57);
        uStack_168 = (ulonglong)(uint)fVar57;
        local_160 = CONCAT44(local_160._4_4_,0xffffffff);
        *(undefined8 *)(puVar34 + -8) = 0x180334922;
        FUN_18034a380(uVar31,local_180,&local_2d8,&local_170);
        *(undefined8 *)(puVar34 + -8) = 0x18033493c;
        fVar57 = (float)FUN_1802b3660(local_180[0] + 0x14,fVar57,fVar55,0);
      }
      fVar52 = local_200 + fVar52;
      fVar56 = local_2fc + fVar56;
      local_308 = CONCAT44(fVar52,fVar56);
      fVar51 = fVar52 + *(float *)((longlong)plVar17 + 0x2c);
      fVar55 = *(float *)(plVar17 + 5);
      *(float *)(puVar34 + 0x78) = fVar56 + fVar55;
      *(float *)(puVar34 + 0x7c) = fVar51;
      lVar36 = *plVar17;
      *(undefined8 *)(puVar34 + -8) = 0x18033498a;
      FUN_1803e8a70((int)lVar36);
      uVar50 = *(undefined8 *)(DAT_180ca0a50 + 0x14f8);
      *(undefined8 *)(puVar34 + -8) = 0x1803349a4;
      uVar14 = FUN_1803e8900(uVar50,"##chip");
      puVar34[0x60] = 0;
      puVar34[0x69] = 0;
      local_248 = CONCAT44(fVar52,fVar56);
      *(undefined8 *)(puVar34 + -8) = 0x1803349d7;
      local_240 = fVar56 + fVar55;
      local_23c = fVar51;
      cVar45 = FUN_1803ec2f0(&local_248,uVar14,0,0);
      if (cVar45 == '\0') {
LAB_180334a01:
        bVar8 = false;
      }
      else {
        *(undefined4 *)(puVar34 + 0x20) = 0;
        *(undefined8 *)(puVar34 + -8) = 0x1803349f8;
        cVar45 = FUN_180415270(&local_248,uVar14,puVar34 + 0x60,puVar34 + 0x69);
        if (cVar45 == '\0') goto LAB_180334a01;
        bVar8 = true;
      }
      if (iVar13 != 0) {
        iVar38 = (int)*plVar17;
        *(undefined8 *)(puVar34 + -8) = 0x180334a18;
        lVar36 = FUN_180280c60(iVar38);
        if ((lVar36 == 0) || (*(longlong *)(lVar36 + 0x38) == 0)) {
          ppuVar22 = (undefined **)&DAT_1805e7ab0;
          do {
            if (*(int *)ppuVar22 == iVar38) {
              pcVar33 = ppuVar22[1];
              if (pcVar33 != (char *)0x0) {
                local_170 = 0;
                uStack_168 = 0;
                local_160 = 0;
                local_158 = 0;
                *(undefined8 *)(puVar34 + -8) = 0x180334b35;
                sVar20 = strlen(pcVar33);
                *(undefined8 *)(puVar34 + -8) = 0x180334b47;
                uVar50 = FUN_1800133a0(&local_170,pcVar33,sVar20);
                goto LAB_180334a66;
              }
              break;
            }
            ppuVar22 = ppuVar22 + 2;
          } while (ppuVar22 != &PTR_DAT_1805e7ce0);
          *(undefined8 *)(puVar34 + -8) = 0x180334a65;
          uVar50 = FUN_18003a390(&local_170,iVar38);
        }
        else {
          *(undefined8 *)(puVar34 + -8) = 0x180334a34;
          uVar50 = FUN_180024b50(&local_170,lVar36 + 0x28);
        }
LAB_180334a66:
        local_2d8 = &local_170;
        *(undefined8 **)(puVar34 + 0x20) = &local_2d8;
        *(undefined8 *)(puVar34 + -8) = 0x180334a8d;
        FUN_180348ce0(uVar50,puVar34[0x60],&local_308,puVar34 + 0x78);
        *(undefined8 *)(puVar34 + -8) = 0x180334a9a;
        FUN_18000f890(&local_170);
      }
      local_260 = (int)*plVar17;
      *(undefined8 *)(puVar34 + -8) = 0x180334aaf;
      uVar37 = FUN_180331b80(*(undefined4 *)(puVar34 + 100),&DAT_1806e1304);
      fVar56 = DAT_1808ac1f4;
      uVar37 = ~uVar37;
      pbVar41 = (byte *)&local_260;
      do {
        uVar37 = uVar37 >> 8 ^
                 *(uint *)(&DAT_1806c25c0 + ((ulonglong)(uVar37 & 0xff) ^ (ulonglong)*pbVar41) * 4);
        pbVar41 = pbVar41 + 1;
        pbVar29 = local_25c;
      } while (pbVar41 < pbVar29);
      pbVar41 = &DAT_18075c885;
      bVar11 = 0x74;
      uVar26 = uVar37;
      do {
        if (((bVar11 == 0x23) && (*pbVar41 == 0x23)) && (pbVar41[1] == 0x23)) {
          pbVar41 = pbVar41 + 2;
          uVar26 = uVar37;
        }
        else {
          pbVar29 = (byte *)((ulonglong)(uVar26 & 0xff) ^ (ulonglong)bVar11);
          uVar26 = uVar26 >> 8 ^ *(uint *)(&DAT_1806c25c0 + (longlong)pbVar29 * 4);
        }
        bVar11 = *pbVar41;
        pbVar41 = pbVar41 + 1;
      } while (bVar11 != 0);
      fVar52 = DAT_1808ac1f4;
      if (iVar13 == 0) {
        if (puVar34[0x68] != '\0') {
          fVar52 = DAT_1808ac34c;
          goto LAB_180334bc9;
        }
        if (puVar34[0x60] == '\0') {
          fVar52 = 0.0;
        }
      }
      else {
        if (puVar34[0x69] == '\0') {
          if (puVar34[0x60] != '\0') goto LAB_180334bd5;
          fVar52 = 0.0;
        }
        else {
          fVar52 = DAT_1808ac34c;
        }
LAB_180334bc9:
      }
LAB_180334bd5:
      local_2d8 = (undefined8 *)CONCAT44(local_2d8._4_4_,~uVar26);
      local_170 = CONCAT44(fVar52,fVar52);
      uStack_168 = (ulonglong)(uint)fVar52;
      local_160 = CONCAT44(local_160._4_4_,0xffffffff);
      *(undefined8 *)(puVar34 + -8) = 0x180334c1c;
      FUN_18034a380(pbVar29,local_1b0,&local_2d8,&local_170);
      fVar55 = DAT_1808ac118;
      *(undefined8 *)(puVar34 + -8) = 0x180334c3f;
      uVar14 = FUN_1802b3660(local_1b0[0] + 0x14,fVar52,DAT_1808ac118,0);
      if (iVar13 == 0) {
        uVar37 = (int)(longlong)((float)(DAT_180960f44 >> 0x18) * fVar55 + fVar56) << 0x18 |
                 DAT_180960f44 & 0xffffff;
      }
      else {
        uVar37 = 0xff3b3b85;
      }
      *(undefined8 *)(puVar34 + -8) = 0x180334c92;
      uVar37 = FUN_1802b38e0(DAT_180960f44 & 0xffffff,uVar37,uVar14);
      uVar50 = local_1b8;
      *(undefined4 *)(puVar34 + 0x28) = 0;
      *(undefined4 *)(puVar34 + 0x20) = uVar49;
      *(undefined8 *)(puVar34 + -8) = 0x180334ce1;
      FUN_1803fe590(local_1b8,&local_308,puVar34 + 0x78,
                    (int)(longlong)((float)(uVar37 >> 0x18) * fVar57 + fVar56) << 0x18 |
                    uVar37 & 0xffffff);
      local_2d8 = (undefined8 *)uVar19;
      uStack_2d0 = uVar10;
      *(float *)(puVar34 + 0x30) = DAT_1808ac34c;
      *(undefined4 *)(puVar34 + 0x28) = 0;
      *(undefined8 **)(puVar34 + 0x20) = &local_2d8;
      *(undefined8 *)(puVar34 + -8) = 0x180334d43;
      FUN_18036bcb0(uVar50,&local_308,puVar34 + 0x78,
                    (int)(longlong)((float)(DAT_180960eec >> 0x18) * fVar57 + fVar56) << 0x18 |
                    DAT_180960eec & 0xffffff);
      if (iVar13 == 0) {
        local_1c8 = (*(float *)(puVar34 + 0x78) + (float)local_308) * fVar56;
        local_1c4 = (*(float *)(puVar34 + 0x7c) + local_308._4_4_) * fVar56;
        *(undefined8 *)(puVar34 + -8) = 0x180334d91;
        uVar14 = FUN_1802b38e0(DAT_180960ef8,DAT_180960ec8,uVar14);
        *(undefined4 *)(puVar34 + 0x28) = uVar14;
        *(float *)(puVar34 + 0x20) = DAT_1808ac864;
        *(undefined8 *)(puVar34 + -8) = 0x180334dc0;
        FUN_180328670(uVar50,"presets_fa_plus",
                      "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 448 512\" width=\"448\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M256 80C256 63 241 48 224 48C206 48 192 63 192 80L192 224L48 224C30 224 16 239 16 256C16 274 30 288 48 288L192 288L192 432C192 449 206 464 224 464C241 464 256 449 256 432L256 288L400 288C417 288 432 274 432 256C432 239 417 224 400 224L256 224L256 80Z\"/></svg>"
                      ,&local_1c8);
        bVar6 = bVar7;
        if (bVar8) {
          bVar6 = true;
          bVar7 = bVar6;
        }
      }
      else {
        lVar36 = plVar17[1];
        if (((lVar36 != 0) && (0 < (int)plVar17[2])) && (0 < *(int *)((longlong)plVar17 + 0x14))) {
          fVar51 = local_308._4_4_ + DAT_1808ac750;
          fVar52 = (float)local_308 + DAT_1808ac750;
          *(undefined8 *)(puVar34 + -8) = 0x180334e2e;
          local_2a8 = fVar52;
          local_2a4 = fVar51;
          uVar37 = FUN_1802b38e0(DAT_180960ef8,0xff6163db,uVar14);
          local_1e0 = 0x3f800000;
          local_1dc = 0x3f800000;
          local_1d8 = 0;
          local_1d0 = fVar52 + *(float *)(plVar17 + 4);
          local_1cc = fVar51 + *(float *)((longlong)plVar17 + 0x24);
          local_298 = 0;
          *(uint *)(puVar34 + 0x30) =
               (int)(longlong)((float)(uVar37 >> 0x18) * fVar57 + fVar56) << 0x18 |
               uVar37 & 0xffffff;
          *(undefined4 **)(puVar34 + 0x28) = &local_1e0;
          *(undefined8 **)(puVar34 + 0x20) = &local_1d8;
          *(undefined8 *)(puVar34 + -8) = 0x180334ecd;
          lStack_290 = lVar36;
          FUN_1803fea90(uVar50,&local_298,&local_2a8,&local_1d0);
        }
        if (bVar8) {
          local_1f0 = CONCAT44(*(undefined4 *)(puVar34 + 100),(int)*plVar17);
          *(undefined8 *)(puVar34 + -8) = 0x180334ef6;
          plVar23 = (longlong *)FUN_18034daf0(local_1f0,&local_2c0,&local_1f0);
          *(undefined1 *)(*plVar23 + 0x18) = 1;
        }
      }
      iVar13 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
      if (iVar13 < 2) {
        *(undefined8 *)(puVar34 + -8) = 0x180334f22;
        FUN_1803ebc00("Calling PopID() too many times!");
      }
      else {
        *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar13 + -1;
      }
      if (!bVar5) {
        fVar53 = fVar53 + *(float *)(plVar17 + 5) + DAT_1808ac750;
      }
      plVar17 = plVar17 + 6;
    } while (plVar17 != plVar18);
    if (bVar6) {
      *(undefined8 *)(puVar34 + -8) = 0x180334f65;
      FUN_1802b4d80("##wp_picker");
    }
    cVar45 = puVar34[0x62];
  }
  iVar38 = local_1f8;
  iVar13 = local_1fc;
  fVar52 = 0.0;
  *(undefined8 *)(puVar34 + -8) = 0x180334f93;
  FUN_180332c00(local_1f8,local_1fc);
  lVar36 = local_208;
  plVar18 = plStack_2f0;
  fVar55 = DAT_1808ac34c;
  if (local_2f8 != plStack_2f0) {
    uVar49 = *(undefined4 *)(puVar34 + 100);
    plVar17 = local_2f8;
    do {
      iVar30 = (int)*plVar17;
      if (iVar30 != 0) {
        *(undefined8 *)(puVar34 + -8) = 0x180334fd3;
        cVar45 = FUN_180331cf0(uVar49,iVar30);
        if (cVar45 != '\0') {
          *(undefined8 *)(puVar34 + -8) = 0x180334fec;
          local_258 = iVar30;
          uVar37 = FUN_180331b80(uVar49,&DAT_1806e1304);
          uVar31 = (ulonglong)~uVar37;
          pbVar41 = (byte *)&local_258;
          do {
            uVar37 = (uint)(uVar31 >> 8) ^
                     *(uint *)(&DAT_1806c25c0 + (uVar31 & 0xff ^ (ulonglong)*pbVar41) * 4);
            uVar31 = (ulonglong)uVar37;
            pbVar41 = pbVar41 + 1;
          } while (pbVar41 < local_254);
          pcVar33 = "visible";
          bVar11 = 0x76;
          do {
            pcVar33 = pcVar33 + 1;
            if (((bVar11 == 0x23) && (*pcVar33 == 0x23)) && (pcVar33[1] == 0x23)) {
              pcVar33 = pcVar33 + 2;
              uVar26 = uVar37;
            }
            else {
              uVar26 = (uint)(uVar31 >> 8) ^
                       *(uint *)(&DAT_1806c25c0 + (uVar31 & 0xff ^ (ulonglong)bVar11) * 4);
            }
            uVar31 = (ulonglong)uVar26;
            bVar11 = *pcVar33;
          } while (bVar11 != 0);
          *(undefined8 *)(puVar34 + -8) = 0x18033506e;
          fVar56 = (float)FUN_180331df0(~uVar26,fVar55);
          if (fVar56 <= 0.0) {
            local_208 = CONCAT44(uVar49,iVar30);
            *(undefined8 *)(puVar34 + -8) = 0x180335094;
            FUN_180349350(local_208,&local_208);
            iVar30 = DAT_18094f764;
            if (iVar38 == 0) {
              iVar30 = DAT_180957240;
            }
            piVar24 = &DAT_180957240;
            if (iVar38 != 0) {
              piVar24 = &DAT_18094f764;
            }
            if (0 < iVar13) {
              local_238[0] = 0x40;
              local_1f4 = 1;
              piVar25 = &local_1f4;
              if (0 < iVar30) {
                piVar25 = piVar24;
              }
              piVar24 = local_238;
              if (iVar30 < 0x41) {
                piVar24 = piVar25;
              }
              if (iVar13 < *piVar24) {
                lVar42 = *plVar17;
                puVar43 = &DAT_180957284;
                if (iVar38 != 0) {
                  puVar43 = &DAT_18094f7a8;
                }
                local_228 = 0x40;
                local_218[2] = 0;
                puVar16 = &DAT_180957384;
                puVar39 = &DAT_180957384;
                if (iVar38 != 0) {
                  puVar39 = &DAT_18094f8a8;
                }
                if (iVar38 != 0) {
                  puVar16 = &DAT_18094f8a8;
                }
                piVar24 = local_218 + 2;
                if (-1 < *(int *)(puVar39 + lVar36)) {
                  piVar24 = (int *)(puVar16 + lVar36);
                }
                piVar25 = &local_228;
                if (*(int *)(puVar39 + lVar36) < 0x41) {
                  piVar25 = piVar24;
                }
                iVar30 = *piVar25;
                iVar32 = 0;
                uVar31 = 0;
                if (0 < iVar30) {
                  do {
                    if (*(int *)(puVar43 + uVar31 * 4 + lVar36) != (int)lVar42) {
                      *(int *)(puVar43 + (longlong)iVar32 * 4 + lVar36) =
                           *(int *)(puVar43 + uVar31 * 4 + lVar36);
                      iVar32 = iVar32 + 1;
                    }
                    uVar37 = (int)uVar31 + 1;
                    uVar31 = (ulonglong)uVar37;
                  } while ((int)uVar37 < iVar30);
                }
                if (iVar32 < iVar30) {
                  *(undefined8 *)(puVar34 + -8) = 0x180335199;
                  FUN_180540170(puVar43 + (longlong)iVar32 * 4 + lVar36,0,
                                (longlong)(iVar30 - iVar32) << 2);
                }
                *(int *)(puVar39 + lVar36) = iVar32;
              }
            }
            uVar49 = *(undefined4 *)(puVar34 + 100);
          }
        }
      }
      plVar17 = plVar17 + 6;
    } while (plVar17 != plVar18);
    cVar45 = puVar34[0x62];
    fVar56 = DAT_1808ac1f4;
  }
  if (puVar34[0x6a] == 0) {
    if (cVar45 != '\0' || puVar34[0x61] != '\0') goto LAB_1803351f3;
    fVar56 = fVar52;
  }
  else {
    fVar56 = DAT_1808ac34c;
LAB_1803351f3:
    pbVar41 = puVar34 + 0x61;
    *pbVar41 = *pbVar41 | puVar34[0x6a];
    if (*pbVar41 == 0) {
      if (cVar45 != '\0') {
        fVar52 = DAT_1808ac1f4;
      }
    }
    else {
      fVar52 = DAT_1808ac34c;
    }
  }
  *(undefined8 *)(puVar34 + -8) = 0x180335222;
  plVar18 = (longlong *)FUN_18034f100(&DAT_180ca1740,&local_2c0,puVar34 + 100);
  lVar36 = *plVar18;
  *(float *)(lVar36 + 0x14) = fVar56;
  *(float *)(lVar36 + 0x18) = fVar52;
  *(undefined4 *)(local_1c0 + 0x130) = local_224;
  *(undefined4 *)(local_1c0 + 0x134) = local_220;
  lVar36 = DAT_180ca0a50;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  lVar36 = *(longlong *)(lVar36 + 0x14f8);
  *(undefined4 *)(lVar36 + 0x118) = local_21c;
  *(float *)(lVar36 + 0x11c) = local_250;
  *(undefined1 *)(lVar36 + 0x159) = 1;
  if (local_2f8 != (longlong *)0x0) {
    uVar31 = ((longlong)local_2e8 - (longlong)local_2f8 >> 4) * 0x10;
    plVar18 = local_2f8;
    if (0xfff < uVar31) {
      plVar18 = (longlong *)local_2f8[-1];
      if (0x1f < (ulonglong)((longlong)local_2f8 + (-8 - (longlong)plVar18))) {
        pcVar4 = (code *)swi(0x29);
        (*pcVar4)(5);
        puVar35 = puVar34 + 8;
LAB_18033534b:
                    /* WARNING: Subroutine does not return */
        *(undefined **)(puVar35 + -8) = &UNK_180335350;
        FUN_18000fb10();
      }
      uVar31 = uVar31 + 0x27;
    }
    *(undefined8 *)(puVar34 + -8) = 0x1803352de;
    thunk_FUN_1803d64e0(plVar18,uVar31);
  }
  *(undefined8 *)(puVar34 + -8) = 0x1803352f1;
  return local_300;
}



/* ===== 180335360 FUN_180335360 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_180335360(char param_1)

{
  longlong lVar1;
  float fVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  char cVar5;
  byte bVar6;
  undefined4 uVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  char *pcVar12;
  bool bVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  float fVar16;
  uint local_res8 [2];
  undefined8 local_res10;
  float local_res18;
  float local_res1c;
  float local_res20 [2];
  undefined8 in_stack_fffffffffffffef8;
  longlong *plVar17;
  undefined8 uVar18;
  undefined8 in_stack_ffffffffffffff00;
  undefined8 in_stack_ffffffffffffff08;
  undefined4 uVar19;
  longlong local_d8;
  undefined8 uStack_d0;
  float local_c8;
  float local_c4;
  float local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  
  lVar10 = DAT_180ca0a50;
  fVar2 = DAT_1808ac34c;
  uVar19 = (undefined4)((ulonglong)in_stack_ffffffffffffff08 >> 0x20);
  uVar7 = (undefined4)((ulonglong)in_stack_fffffffffffffef8 >> 0x20);
  uVar8 = (uint)((ulonglong)in_stack_ffffffffffffff00 >> 0x20);
  local_res20[1] = 31.706;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  lVar1 = *(longlong *)(lVar10 + 0x14f8);
  fVar16 = *(float *)(lVar1 + 0x58) + *(float *)(lVar1 + 0x28);
  local_res1c = *(float *)(lVar1 + 0x11c) + DAT_1808ac9f8;
  local_res18 = ((*(float *)(lVar1 + 0x28) + *(float *)(lVar1 + 0x30)) - *(float *)(lVar1 + 0x58)) -
                *(float *)(lVar1 + 0xc0);
  local_res10 = CONCAT44(*(float *)(lVar1 + 0x11c),fVar16);
  *(undefined1 *)(lVar1 + 0xce) = 1;
  lVar10 = *(longlong *)(lVar10 + 0x14f8);
  fVar16 = local_res18 - fVar16;
  *(undefined8 *)(lVar10 + 0x118) = local_res10;
  *(undefined1 *)(lVar10 + 0x159) = 1;
  local_res20[0] = fVar2;
  if (fVar2 <= fVar16) {
    local_res20[0] = fVar16;
  }
  uVar4 = FUN_180415e30("##global",local_res20,0);
  cVar5 = FUN_1803dd930(0);
  fVar16 = DAT_1808ac1f4;
  uVar11 = *(uint *)(DAT_180ca0a50 + 0x1ee8);
  uVar9 = (ulonglong)uVar11;
  if (*(uint *)(DAT_180ca0a50 + 0x1578) == 0) {
    bVar13 = false;
  }
  else {
    bVar13 = *(uint *)(DAT_180ca0a50 + 0x1578) == uVar11;
    if (bVar13) {
      local_c8 = fVar2;
      goto LAB_1803354b6;
    }
  }
  if (cVar5 == '\0') {
    local_c8 = 0.0;
  }
  else {
    local_c8 = DAT_1808ac1f4;
  }
LAB_1803354b6:
  uVar11 = ~uVar11;
  pcVar12 = "hover";
  bVar6 = 0x68;
  local_res8[0] = uVar11;
  do {
    pcVar12 = pcVar12 + 1;
    if (((bVar6 == 0x23) && (*pcVar12 == 0x23)) && (pcVar12[1] == 0x23)) {
      pcVar12 = pcVar12 + 2;
      local_res8[0] = uVar11;
    }
    else {
      uVar9 = (ulonglong)(local_res8[0] & 0xff) ^ (ulonglong)bVar6;
      local_res8[0] = local_res8[0] >> 8 ^ *(uint *)(&DAT_1806c25c0 + uVar9 * 4);
    }
    bVar6 = *pcVar12;
  } while (bVar6 != 0);
  local_res8[0] = ~local_res8[0];
  local_bc = 0;
  local_b8 = 0xffffffff;
  local_c4 = local_c8;
  local_c0 = local_c8;
  FUN_18034a380(uVar9,&local_d8,local_res8,&local_c8);
  uVar15 = FUN_1802b3660(local_d8 + 0x14);
  if (param_1 != '\0' || bVar13) {
    local_c8 = fVar2;
  }
  else if (cVar5 == '\0') {
    local_c8 = 0.0;
  }
  else {
    local_c8 = fVar16;
  }
  pcVar12 = "light";
  bVar6 = 0x6c;
  local_res8[0] = uVar11;
  do {
    pcVar12 = pcVar12 + 1;
    if (((bVar6 == 0x23) && (*pcVar12 == 0x23)) && (pcVar12[1] == 0x23)) {
      pcVar12 = pcVar12 + 2;
      local_res8[0] = uVar11;
    }
    else {
      local_res8[0] =
           local_res8[0] >> 8 ^
           *(uint *)(&DAT_1806c25c0 + ((ulonglong)(local_res8[0] & 0xff) ^ (ulonglong)bVar6) * 4);
    }
    bVar6 = *pcVar12;
  } while (bVar6 != 0);
  local_res8[0] = ~local_res8[0];
  local_bc = 0;
  local_b8 = 0xffffffff;
  local_c4 = local_c8;
  local_c0 = local_c8;
  FUN_18034a380(uVar15,&local_d8,local_res8,&local_c8);
  uVar14 = FUN_1802b3660(local_d8 + 0x14);
  uVar3 = DAT_1808ac7ec;
  lVar1 = *(longlong *)(lVar1 + 0x2c8);
  uVar9 = (ulonglong)uVar8 << 0x20;
  FUN_1803fe590(lVar1,&local_res10,&local_res18,DAT_180960f60,CONCAT44(uVar7,DAT_1808ac7ec),uVar9);
  local_d8 = _DAT_1808add00;
  uStack_d0 = _UNK_1808add08;
  uVar7 = FUN_1802b38e0(DAT_180960eec,
                        (int)(longlong)((float)(DAT_1809f54bc >> 0x18) * DAT_1808ac1b0 + fVar16) <<
                        0x18 | DAT_1809f54bc & 0xffffff,uVar14);
  uVar9 = uVar9 & 0xffffffff00000000;
  plVar17 = &local_d8;
  FUN_18036bcb0(lVar1,&local_res10,&local_res18,uVar7,plVar17,uVar9,CONCAT44(uVar19,fVar2));
  uVar7 = (undefined4)((ulonglong)plVar17 >> 0x20);
  if (0.0 < (float)uVar15) {
    uVar18 = CONCAT44(uVar7,uVar3);
    FUN_1803fe590(lVar1,&local_res10,&local_res18,
                  (int)(longlong)
                       ((float)(DAT_180960f44 >> 0x18) * (float)uVar15 * DAT_1808ac118 + fVar16) <<
                  0x18 | DAT_180960f44 & 0xffffff,uVar18,uVar9 & 0xffffffff00000000);
    uVar7 = (undefined4)((ulonglong)uVar18 >> 0x20);
  }
  uVar8 = FUN_1802b38e0(DAT_180960ef8,DAT_180960ec8,uVar14);
  local_res18 = (float)local_res10 + DAT_1808ac8b0;
  local_res1c = (float)FUN_18053f0d0();
  local_res1c = local_res1c + local_res10._4_4_;
  lVar10 = DAT_181107a08;
  if (DAT_181107a08 == 0) {
    lVar10 = *(longlong *)(DAT_180ca0a50 + 0x11f0);
  }
  if ((uVar8 & 0xff000000) != 0) {
    if (lVar10 == 0) {
      lVar10 = *(longlong *)(*(longlong *)(lVar1 + 0x38) + 0x18);
    }
    local_d8 = *(longlong *)(lVar1 + 0x60);
    uStack_d0 = *(undefined8 *)(lVar1 + 0x68);
    FUN_18040a900(lVar10,lVar1,DAT_1808ac930,&local_res18,CONCAT44(uVar7,uVar8),&local_d8,"Global",0
                  ,0,0);
  }
  return uVar4;
}



/* ===== 1803357f0 FUN_1803357f0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1803357f0(int param_1)

{
  float fVar1;
  uint uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  char cVar11;
  byte bVar12;
  uint *puVar13;
  undefined4 *puVar14;
  uint *puVar15;
  longlong *plVar16;
  char *pcVar17;
  uint *puVar18;
  longlong lVar19;
  int *piVar20;
  uint uVar21;
  ulonglong uVar22;
  uint uVar23;
  int iVar24;
  int iVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  undefined4 extraout_XMM0_Da;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined4 uVar32;
  undefined4 local_res8;
  undefined4 local_res10 [2];
  int *local_res18;
  uint *local_res20;
  uint local_108;
  uint local_104 [5];
  longlong local_f0 [2];
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  
  uVar10 = DAT_1808ac34c;
  uVar9 = DAT_1808ac118;
  local_res20 = (uint *)&DAT_180957240;
  piVar20 = &DAT_181106f14;
  if (param_1 == 0) {
    piVar20 = &DAT_181107578;
    iVar24 = DAT_180957240;
  }
  else {
    local_res20 = (uint *)&DAT_18094f764;
    iVar24 = DAT_18094f764;
  }
  local_104[2] = 0x40;
  local_104[1] = 1;
  puVar18 = local_104 + 1;
  if (0 < iVar24) {
    puVar18 = local_res20;
  }
  uVar26 = 0xffffffff;
  iVar25 = -1;
  puVar13 = local_104 + 2;
  if (iVar24 < 0x41) {
    puVar13 = puVar18;
  }
  uVar22 = 0;
  uVar2 = *puVar13;
  fVar31 = *(float *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x11c);
  lVar19 = DAT_180ca0a50;
  fVar30 = fVar31;
  fVar29 = fVar31;
  local_res18 = piVar20;
  if (0 < (int)uVar2) {
    do {
      iVar24 = (int)uVar22;
      puVar14 = &DAT_180957388;
      if (param_1 != 0) {
        puVar14 = &DAT_18094f8ac;
      }
      uVar3 = puVar14[uVar22 * 0x52];
      if (iVar24 == 0) {
        FUN_1803e8a70(uVar3);
        cVar11 = FUN_180335360();
        uVar21 = 0;
        if (cVar11 == '\0') {
          uVar21 = (uint)uVar26;
        }
        uVar27 = (ulonglong)uVar21;
        fVar29 = *(float *)(DAT_180ca0a50 + 0x1f00);
        if (*(float *)(DAT_180ca0a50 + 0x1f00) <= fVar30) {
          fVar29 = fVar30;
        }
        lVar19 = DAT_180ca0a50;
LAB_180335a9a:
        iVar25 = *(int *)(*(longlong *)(lVar19 + 0x14f8) + 0x108);
        if (iVar25 < 2) {
          FUN_1803ebc00("Calling PopID() too many times!");
          goto LAB_180335abc;
        }
        *(int *)(*(longlong *)(lVar19 + 0x14f8) + 0x108) = iVar25 + -1;
      }
      else {
        cVar11 = FUN_180331c50(uVar22 * 0x148,uVar3);
        if (cVar11 == '\0') {
          uVar32 = uVar10;
        }
        else {
          uVar32 = 0;
        }
        local_res10[0] = FUN_180331b80(uVar3,"visible");
        local_d4 = 0;
        local_d0 = 0xffffffff;
        local_e0 = uVar32;
        local_dc = uVar32;
        local_d8 = uVar32;
        FUN_18034a380(extraout_XMM0_Da,local_f0,local_res10,&local_e0);
        fVar28 = (float)FUN_1802b3660(local_f0[0] + 0x14,uVar32,uVar9,0);
        uVar27 = uVar26;
        fVar29 = fVar30;
        if (0.0 < fVar28) {
          FUN_1803e8a70(uVar3);
          lVar19 = DAT_180ca0a50;
          *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
          lVar19 = *(longlong *)(lVar19 + 0x14f8);
          lVar5 = *(longlong *)(lVar19 + 0x2c8);
          uVar3 = *(undefined4 *)(lVar19 + 0x118);
          fVar1 = *(float *)(lVar19 + 0x11c);
          uVar32 = *(undefined4 *)(lVar5 + 0x20);
          local_res8 = fVar1;
          cVar11 = FUN_180333590(param_1,uVar22,*local_res18 == iVar24,&local_res8);
          lVar19 = DAT_180ca0a50;
          fVar29 = local_res8;
          if (local_res8 <= fVar30) {
            fVar29 = fVar30;
          }
          uVar27 = uVar22;
          if (cVar11 == '\0') {
            uVar27 = uVar26;
          }
          fVar30 = *(float *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x11c);
          *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
          lVar4 = *(longlong *)(lVar19 + 0x14f8);
          *(undefined1 *)(lVar4 + 0x159) = 1;
          *(undefined4 *)(lVar4 + 0x118) = uVar3;
          *(float *)(lVar4 + 0x11c) = (fVar30 - fVar1) * fVar28 + fVar1;
          FUN_1802b3c30(lVar5,uVar32,*(undefined4 *)(lVar5 + 0x20),fVar28);
          piVar20 = local_res18;
          goto LAB_180335a9a;
        }
LAB_180335abc:
        lVar19 = DAT_180ca0a50;
      }
      iVar25 = (int)uVar27;
      uVar22 = (ulonglong)(iVar24 + 1U);
      uVar26 = uVar27;
      fVar30 = fVar29;
    } while ((int)(iVar24 + 1U) < (int)uVar2);
  }
  puVar18 = local_res20;
  *(undefined1 *)(*(longlong *)(lVar19 + 0x14f8) + 0xce) = 1;
  lVar5 = *(longlong *)(lVar19 + 0x14f8);
  *(undefined1 *)(lVar5 + 0xce) = 1;
  lVar19 = *(longlong *)(lVar19 + 0x14f8);
  *(undefined4 *)(lVar19 + 0x118) = *(undefined4 *)(lVar5 + 0x128);
  *(float *)(lVar19 + 0x11c) = fVar29;
  *(undefined1 *)(lVar19 + 0x159) = 1;
  *(float *)(lVar5 + 0x134) = fVar29;
  fVar30 = 0.0;
  if (0.0 <= fVar29 - fVar31) {
    fVar30 = fVar29 - fVar31;
  }
  *(float *)(&DAT_181107028 + (ulonglong)(param_1 != 0) * 4) = fVar30;
  if (-1 < iVar25) {
    *piVar20 = iVar25;
    FUN_1803ee1f0();
  }
LAB_180335b92:
  local_104[4] = 0x40;
  local_104[3] = 1;
  puVar13 = local_104 + 3;
  if (0 < (int)*puVar18) {
    puVar13 = puVar18;
  }
  iVar24 = 1;
  puVar15 = local_104 + 4;
  if ((int)*puVar18 < 0x41) {
    puVar15 = puVar13;
  }
  uVar26 = (ulonglong)*puVar15;
  if ((int)*puVar15 < 2) {
    return;
  }
  do {
    puVar14 = &DAT_180957388;
    if (param_1 != 0) {
      puVar14 = &DAT_18094f8ac;
    }
    uVar2 = puVar14[(longlong)iVar24 * 0x52];
    local_res8 = (float)uVar2;
    cVar11 = FUN_180331c50((longlong)iVar24 * 0x148,uVar2);
    if (cVar11 != '\0') {
      local_108 = uVar2;
      pcVar17 = "wp_group";
      uVar22 = 0xffffffff;
      bVar12 = 0x77;
      do {
        pcVar17 = pcVar17 + 1;
        if (((bVar12 == 0x23) && (*pcVar17 == 0x23)) && (pcVar17[1] == 0x23)) {
          uVar22 = 0xffffffff;
          pcVar17 = pcVar17 + 2;
        }
        else {
          uVar22 = (ulonglong)
                   ((uint)(uVar22 >> 8) ^
                   *(uint *)(&DAT_1806c25c0 + (uVar22 & 0xff ^ (ulonglong)bVar12) * 4));
        }
        bVar12 = *pcVar17;
      } while (bVar12 != 0);
      puVar18 = &local_108;
      do {
        uVar21 = *puVar18;
        puVar18 = (uint *)((longlong)puVar18 + 1);
        uVar21 = (uint)(uVar22 >> 8) ^
                 *(uint *)(&DAT_1806c25c0 + (uVar22 & 0xff ^ (ulonglong)(byte)uVar21) * 4);
        uVar22 = (ulonglong)uVar21;
      } while (puVar18 < local_104);
      pcVar17 = "visible";
      bVar12 = 0x76;
      uVar23 = uVar21;
      do {
        pcVar17 = pcVar17 + 1;
        if (((bVar12 == 0x23) && (*pcVar17 == 0x23)) && (pcVar17[1] == 0x23)) {
          pcVar17 = pcVar17 + 2;
          uVar23 = uVar21;
        }
        else {
          uVar23 = uVar23 >> 8 ^
                   *(uint *)(&DAT_1806c25c0 + ((ulonglong)(uVar23 & 0xff) ^ (ulonglong)bVar12) * 4);
        }
        bVar12 = *pcVar17;
      } while (bVar12 != 0);
      fVar31 = (float)FUN_180331df0(~uVar23,uVar10);
      lVar19 = DAT_181107698;
      plVar8 = DAT_181107688;
      if (fVar31 <= 0.0) break;
    }
    iVar24 = iVar24 + 1;
    if ((int)uVar26 <= iVar24) {
      return;
    }
  } while( true );
  uVar22 = (((((ulonglong)(uVar2 & 0xff) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
             (ulonglong)local_res8._1_1_) * 0x100000001b3 ^ (ulonglong)local_res8._2_1_) *
            0x100000001b3 ^ (ulonglong)local_res8._3_1_) * 0x100000001b3;
  uVar26 = uVar22 & DAT_1811076b0;
  plVar6 = *(longlong **)(DAT_181107698 + 8 + uVar26 * 0x10);
  if (plVar6 == DAT_181107688) {
LAB_180335d90:
    plVar16 = (longlong *)0x0;
  }
  else {
    uVar21 = *(uint *)(plVar6 + 2);
    plVar16 = plVar6;
    while (uVar2 != uVar21) {
      if (plVar16 == *(longlong **)(DAT_181107698 + uVar26 * 0x10)) goto LAB_180335d90;
      plVar16 = (longlong *)plVar16[1];
      uVar21 = *(uint *)(plVar16 + 2);
    }
  }
  if (plVar16 != (longlong *)0x0) {
    plVar7 = *(longlong **)(DAT_181107698 + uVar26 * 0x10);
    if (plVar6 == plVar16) {
      if (plVar7 == plVar16) {
        *(longlong **)(DAT_181107698 + uVar26 * 0x10) = DAT_181107688;
        *(longlong **)(lVar19 + 8 + uVar26 * 0x10) = plVar8;
      }
      else {
        *(longlong *)(DAT_181107698 + 8 + uVar26 * 0x10) = plVar16[1];
      }
    }
    else if (plVar7 == plVar16) {
      *(longlong *)(DAT_181107698 + uVar26 * 0x10) = *plVar16;
    }
    lVar19 = *plVar16;
    DAT_181107690 = DAT_181107690 + -1;
    *(longlong *)plVar16[1] = lVar19;
    *(longlong *)(lVar19 + 8) = plVar16[1];
    thunk_FUN_1803d64e0(plVar16,0x18);
  }
  lVar19 = DAT_181107888;
  plVar6 = DAT_181107878;
  uVar26 = uVar22 & DAT_1811078a0;
  plVar8 = *(longlong **)(DAT_181107888 + 8 + uVar26 * 0x10);
  if (plVar8 == DAT_181107878) {
LAB_180335e30:
    plVar16 = (longlong *)0x0;
  }
  else {
    uVar21 = *(uint *)(plVar8 + 2);
    plVar16 = plVar8;
    while (uVar2 != uVar21) {
      if (plVar16 == *(longlong **)(DAT_181107888 + uVar26 * 0x10)) goto LAB_180335e30;
      plVar16 = (longlong *)plVar16[1];
      uVar21 = *(uint *)(plVar16 + 2);
    }
  }
  if (plVar16 != (longlong *)0x0) {
    plVar7 = *(longlong **)(DAT_181107888 + uVar26 * 0x10);
    if (plVar8 == plVar16) {
      if (plVar7 == plVar16) {
        *(longlong **)(DAT_181107888 + uVar26 * 0x10) = DAT_181107878;
        *(longlong **)(lVar19 + 8 + uVar26 * 0x10) = plVar6;
      }
      else {
        *(longlong *)(DAT_181107888 + 8 + uVar26 * 0x10) = plVar16[1];
      }
    }
    else if (plVar7 == plVar16) {
      *(longlong *)(DAT_181107888 + uVar26 * 0x10) = *plVar16;
    }
    lVar19 = *plVar16;
    DAT_181107880 = DAT_181107880 + -1;
    *(longlong *)plVar16[1] = lVar19;
    *(longlong *)(lVar19 + 8) = plVar16[1];
    FUN_18000f890(plVar16 + 3);
    thunk_FUN_1803d64e0(plVar16,0x38);
  }
  lVar19 = DAT_180ca1758;
  plVar6 = DAT_180ca1748;
  uVar22 = uVar22 & _DAT_180ca1770;
  plVar8 = *(longlong **)(DAT_180ca1758 + 8 + uVar22 * 0x10);
  if (plVar8 == DAT_180ca1748) {
LAB_180335ed5:
    plVar16 = (longlong *)0x0;
  }
  else {
    uVar21 = *(uint *)(plVar8 + 2);
    plVar16 = plVar8;
    while (uVar2 != uVar21) {
      if (plVar16 == *(longlong **)(DAT_180ca1758 + uVar22 * 0x10)) goto LAB_180335ed5;
      plVar16 = (longlong *)plVar16[1];
      uVar21 = *(uint *)(plVar16 + 2);
    }
  }
  if (plVar16 != (longlong *)0x0) {
    plVar7 = *(longlong **)(DAT_180ca1758 + uVar22 * 0x10);
    if (plVar8 == plVar16) {
      if (plVar7 == plVar16) {
        *(longlong **)(DAT_180ca1758 + uVar22 * 0x10) = DAT_180ca1748;
        *(longlong **)(lVar19 + 8 + uVar22 * 0x10) = plVar6;
      }
      else {
        *(longlong *)(DAT_180ca1758 + 8 + uVar22 * 0x10) = plVar16[1];
      }
    }
    else if (plVar7 == plVar16) {
      *(longlong *)(DAT_180ca1758 + uVar22 * 0x10) = *plVar16;
    }
    lVar19 = *plVar16;
    _DAT_180ca1750 = _DAT_180ca1750 + -1;
    *(longlong *)plVar16[1] = lVar19;
    *(longlong *)(lVar19 + 8) = plVar16[1];
    thunk_FUN_1803d64e0(plVar16,0x20);
  }
  FUN_1800f0860(param_1,iVar24);
  puVar18 = local_res20;
  if (iVar24 <= *local_res18) {
    iVar24 = *local_res18 + -1;
    if (iVar24 < 0) {
      iVar24 = 0;
    }
    *local_res18 = iVar24;
  }
  goto LAB_180335b92;
}



/* ===== 180335f60 FUN_180335f60 ===== */

void FUN_180335f60(int param_1,undefined8 param_2,float *param_3,float *param_4)

{
  longlong lVar1;
  uint uVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float *in_stack_ffffffffffffff40;
  ulonglong in_stack_ffffffffffffff58;
  float local_88 [3];
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  
  uVar4 = FUN_1803e8900(*(undefined8 *)(DAT_180ca0a50 + 0x14f8));
  lVar6 = FUN_1802b4e80(uVar4);
  if (((lVar6 == 0) || (*(char *)(lVar6 + 0xcd) == '\0')) || (*(char *)(lVar6 + 0xec) < '\x01')) {
    lVar6 = DAT_180ca0a50;
  }
  else {
    lVar6 = FUN_1802b4e80(uVar4);
    if (lVar6 == 0) {
      local_88[0] = 0.0;
      local_88[1] = 0.0;
    }
    else {
      FUN_1803e2890(local_88,lVar6);
    }
    lVar6 = DAT_180ca0a50;
    fVar12 = param_3[1];
    fVar9 = local_88[0] * DAT_1808ac1f4;
    fVar14 = (*param_3 + *param_4) * DAT_1808ac1f4;
    fVar10 = (param_4[1] - fVar12) * DAT_1808ac1f4;
    fVar13 = *(float *)(**(longlong **)(DAT_180ca0a50 + 0x2058) + 0x14);
    fVar11 = *(float *)(**(longlong **)(DAT_180ca0a50 + 0x2058) + 0x10);
    if (fVar11 <= DAT_1808ac7ac) {
      fVar16 = 0.0;
    }
    else {
      fVar16 = DAT_1808ac658;
    }
    fVar15 = DAT_1808ac658;
    if (fVar13 <= DAT_1808ac7ac) {
      fVar15 = 0.0;
    }
    *(uint *)(DAT_180ca0a50 + 0x1f38) = *(uint *)(DAT_180ca0a50 + 0x1f38) | 1;
    fVar11 = fVar11 - fVar16;
    fVar13 = fVar13 - fVar15;
    *(undefined8 *)(lVar6 + 0x1f50) = 0;
    fVar9 = (fVar14 - fVar9) + local_88[0];
    *(undefined4 *)(lVar6 + 0x1f3c) = 1;
    if (fVar9 <= fVar11) {
      fVar11 = fVar9;
    }
    fVar9 = fVar11 - local_88[0];
    if (fVar11 - local_88[0] <= fVar16) {
      fVar9 = fVar16;
    }
    *(float *)(lVar6 + 0x1f48) = fVar9;
    fVar12 = local_88[1] + (fVar12 - fVar10);
    if (fVar12 <= fVar13) {
      fVar13 = fVar12;
    }
    fVar12 = fVar13 - local_88[1];
    if (fVar13 - local_88[1] <= fVar15) {
      fVar12 = fVar15;
    }
    *(float *)(lVar6 + 0x1f4c) = fVar12;
  }
  *(uint *)(lVar6 + 0x1f38) = *(uint *)(lVar6 + 0x1f38) | 0x10;
  *(undefined8 *)(lVar6 + 0x1f84) = 0x43660000;
  *(undefined4 *)(lVar6 + 0x1f8c) = 0x43660000;
  *(undefined4 *)(lVar6 + 0x1f90) = 0x43c80000;
  *(undefined8 *)(lVar6 + 0x1f98) = 0;
  *(undefined8 *)(lVar6 + 0x1fa0) = 0;
  local_88[0] = 6.0;
  local_88[1] = 6.0;
  cVar3 = FUN_1802b5260(param_2,local_88);
  if (cVar3 == '\0') {
    return;
  }
  local_88[0] = 5.0;
  local_88[1] = 5.0;
  FUN_1803d89a0(0xe,local_88);
  lVar1 = DAT_180ca0a50;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  uVar2 = DAT_180960ec8;
  lVar6 = *(longlong *)(lVar1 + 0x14f8);
  fVar12 = *(float *)(lVar6 + 0x118);
  fVar13 = *(float *)(lVar6 + 0x11c);
  local_88[0] = fVar12 + DAT_1808ac7ec;
  fVar11 = (float)FUN_18053f0d0(DAT_1808ac5c0);
  local_88[1] = fVar11 + fVar13;
  lVar7 = DAT_181107a18;
  if ((DAT_181107a18 == 0) && (lVar7 = DAT_181107a08, DAT_181107a08 == 0)) {
    lVar7 = *(longlong *)(lVar1 + 0x11f0);
  }
  if ((uVar2 & 0xff000000) != 0) {
    lVar1 = *(longlong *)(lVar6 + 0x2c8);
    if (lVar7 == 0) {
      lVar7 = *(longlong *)(*(longlong *)(lVar1 + 0x38) + 0x18);
    }
    local_88[2] = *(float *)(lVar1 + 0x60);
    uStack_7c = *(undefined4 *)(lVar1 + 100);
    uStack_78 = *(undefined4 *)(lVar1 + 0x68);
    uStack_74 = *(undefined4 *)(lVar1 + 0x6c);
    in_stack_ffffffffffffff40 = local_88 + 2;
    FUN_18040a900(lVar7,lVar1,DAT_1808ac940,local_88,uVar2,in_stack_ffffffffffffff40,
                  "Weapon Presets",0,in_stack_ffffffffffffff58 & 0xffffffff00000000,0);
  }
  FUN_1803328c0(param_1);
  lVar7 = DAT_180ca0a50;
  fVar11 = *(float *)(lVar6 + 0x30);
  fVar9 = *(float *)(lVar6 + 0x28);
  fVar10 = *(float *)(lVar6 + 0x58);
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  lVar6 = *(longlong *)(lVar7 + 0x14f8);
  fVar11 = ((fVar11 + fVar9) - fVar10) - DAT_1808ac97c;
  *(float *)(lVar6 + 0x11c) = fVar13;
  *(undefined1 *)(lVar6 + 0x159) = 1;
  *(float *)(lVar6 + 0x118) = fVar11;
  iVar5 = FUN_1803e8900(*(undefined8 *)(lVar7 + 0x14f8),"##wp_create");
  if (*(int *)(DAT_180ca0a50 + 0x2030) < *(int *)(DAT_180ca0a50 + 0x2020)) {
    lVar6 = (longlong)*(int *)(DAT_180ca0a50 + 0x2030) * 0x58;
    if ((*(int *)(lVar6 + *(longlong *)(DAT_180ca0a50 + 0x2028)) == iVar5) &&
       (*(char *)(lVar6 + 0x34 + *(longlong *)(DAT_180ca0a50 + 0x2028)) == '\0')) {
      uVar8 = 1;
      goto LAB_1803362c4;
    }
  }
  uVar8 = 0;
LAB_1803362c4:
  cVar3 = FUN_1803287f0("wp_create_button","presets_fa_plus",
                        "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 448 512\" width=\"448\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M256 80C256 63 241 48 224 48C206 48 192 63 192 80L192 224L48 224C30 224 16 239 16 256C16 274 30 288 48 288L192 288L192 432C192 449 206 464 224 464C241 464 256 449 256 432L256 288L400 288C417 288 432 274 432 256C432 239 417 224 400 224L256 224L256 80Z\"/></svg>"
                        ,uVar8,DAT_180960f38,
                        (ulonglong)in_stack_ffffffffffffff40 & 0xffffffffffffff00);
  if (cVar3 != '\0') {
    FUN_1802b4d80("##wp_create");
  }
  lVar7 = DAT_181107a18;
  lVar1 = DAT_180ca0a50;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  lVar6 = *(longlong *)(lVar1 + 0x14f8);
  *(float *)(lVar6 + 0x118) = fVar12;
  *(float *)(lVar6 + 0x11c) = fVar13;
  *(undefined1 *)(lVar6 + 0x159) = 1;
  if ((lVar7 == 0) && (lVar7 = DAT_181107a08, DAT_181107a08 == 0)) {
    lVar7 = *(longlong *)(lVar1 + 0x11f0);
  }
  FUN_18040a2f0(local_88,lVar7,DAT_1808ac940,DAT_1808acd08,0,"Weapon Presets",0,0,0);
  fVar12 = (float)FUN_18053f0d0(local_88[0] + DAT_1808ac2f0);
  local_88[1] = 23.706;
  local_88[0] = fVar12 + DAT_1808ac7ec;
  FUN_1804174f0(local_88);
  FUN_180329410();
  fVar13 = (float)FUN_18053ef70(*(undefined4 *)(&DAT_181107028 + (ulonglong)(param_1 != 0) * 4));
  local_88[0] = 0.0;
  local_88[1] = 0.0;
  fVar12 = DAT_1808acb90;
  if (fVar13 <= DAT_1808acb90) {
    fVar12 = fVar13;
  }
  FUN_1803d89a0(2,local_88);
  lVar6 = DAT_180ca0a50;
  local_88[1] = DAT_1808ac34c;
  if (DAT_1808ac34c <= fVar12) {
    local_88[1] = fVar12;
  }
  local_88[0] = -1.0;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  uVar4 = FUN_1803e8900(*(undefined8 *)(lVar6 + 0x14f8),"##wp_list");
  cVar3 = FUN_1803e1800("##wp_list",uVar4,local_88,0,8);
  if (cVar3 != '\0') {
    FUN_1803357f0(param_1);
  }
  FUN_1803e1bc0();
  FUN_1803d8a40(2);
  FUN_1802b5590();
  return;
}



/* ===== 1803364a0 FUN_1803364a0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1803364a0(longlong param_1,int param_2,float param_3,float param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  int iVar10;
  longlong lVar11;
  undefined4 *puVar12;
  undefined8 uVar13;
  char *pcVar14;
  char ****ppppcVar15;
  longlong lVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_188 [32];
  undefined8 local_168;
  char ****local_160;
  char ****local_158;
  undefined8 local_150;
  ulonglong local_148;
  undefined4 local_140;
  undefined4 local_138;
  undefined8 local_128;
  undefined8 local_120;
  float local_118;
  float local_114;
  undefined8 *local_110;
  char **ppcStack_108;
  float local_100;
  float local_fc;
  float local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  char *local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  char ****local_d0 [3];
  ulonglong local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_180919500 ^ (ulonglong)auStack_188;
  FUN_180331ea0(param_2);
  pcVar14 = "##legit_presets";
  uVar3 = DAT_181106f14;
  if (param_2 == 0) {
    pcVar14 = "##rage_presets";
    uVar3 = DAT_181107578;
  }
  puVar12 = &DAT_180957240;
  if (param_2 != 0) {
    puVar12 = &DAT_18094f764;
  }
  FUN_1800ef330(local_d0,puVar12,uVar3);
  local_160 = (char ****)local_d0;
  if (0xf < local_b8) {
    local_160 = local_d0[0];
  }
  local_138 = 0;
  local_148 = 0;
  local_150 = 0;
  local_158 = (char ****)0x0;
  local_168 = (undefined8 **)((ulonglong)local_168._4_4_ << 0x20);
  FUN_18040a2f0(&local_120,*(undefined8 *)(DAT_180ca0a50 + 0x11f0),DAT_1808ac930,DAT_1808acd08);
  fVar17 = (float)FUN_18053f0d0((float)local_120 + _DAT_1808aca74);
  lVar11 = DAT_180ca0a50;
  fVar20 = DAT_1808acb34;
  if (fVar17 <= DAT_1808acb34) {
    fVar20 = fVar17;
  }
  local_118 = fVar20 + param_3;
  local_114 = param_4 + DAT_1808ac9dc;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  lVar11 = *(longlong *)(lVar11 + 0x14f8);
  local_120 = CONCAT44(param_4,param_3);
  *(ulonglong *)(lVar11 + 0x118) = CONCAT44(param_4,param_3);
  *(undefined1 *)(lVar11 + 0x159) = 1;
  FUN_1803e89e0(pcVar14);
  local_128 = (char *)CONCAT44(0x41eda5e3,fVar20);
  cVar7 = FUN_180415e30("##selector",&local_128,0);
  iVar1 = *(int *)(DAT_180ca0a50 + 0x1ee8);
  iVar2 = *(int *)(DAT_180ca0a50 + 0x1578);
  cVar8 = FUN_1803dd930(0);
  iVar10 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
  if (iVar10 < 2) {
    FUN_1803ebc00("Calling PopID() too many times!");
  }
  else {
    *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar10 + -1;
  }
  local_128 = "Create separate configs for specific weapons";
  local_e8 = "Weapon Presets";
  cVar9 = FUN_1803dd930(0x400);
  if ((cVar9 == '\0') || ((*(uint *)(DAT_180ca0a50 + 0x1ef0) & 0x100) == 0)) {
    uVar13 = 0;
  }
  else {
    uVar13 = 1;
  }
  local_110 = &local_128;
  ppcStack_108 = &local_e8;
  local_e0 = *(undefined8 *)(DAT_180ca0a50 + 0x1efc);
  local_d8 = *(undefined8 *)(DAT_180ca0a50 + 0x1ef4);
  local_168 = &local_110;
  FUN_180347170(pcVar14,uVar13,&local_d8,&local_e0);
  if (cVar7 != '\0') {
    FUN_1802b4d80(pcVar14);
  }
  iVar10 = FUN_1803e8900(*(undefined8 *)(DAT_180ca0a50 + 0x14f8),pcVar14);
  fVar17 = DAT_1808ac34c;
  fVar20 = DAT_1808ac1f4;
  lVar11 = (longlong)*(int *)(DAT_180ca0a50 + 0x2030);
  if (*(int *)(DAT_180ca0a50 + 0x2030) < *(int *)(DAT_180ca0a50 + 0x2020)) {
    lVar16 = lVar11 * 0x58;
    lVar11 = *(longlong *)(DAT_180ca0a50 + 0x2028);
    if ((*(int *)(lVar16 + lVar11) != iVar10) || (*(char *)(lVar16 + 0x34 + lVar11) != '\0'))
    goto LAB_18033678c;
  }
  else {
LAB_18033678c:
    if (iVar2 == 0 || iVar2 != iVar1) {
      if (cVar8 == '\0') {
        fVar18 = 0.0;
      }
      else {
        fVar18 = DAT_1808ac1f4;
      }
      goto LAB_1803367a4;
    }
  }
  fVar18 = DAT_1808ac34c;
LAB_1803367a4:
  local_128 = (char *)CONCAT44(local_128._4_4_,iVar1);
  local_f4 = 0;
  local_f0 = 0xffffffff;
  local_100 = fVar18;
  local_fc = fVar18;
  local_f8 = fVar18;
  FUN_18034a380(lVar11,&local_110,&local_128,&local_100);
  fVar18 = (float)FUN_1802b3660((longlong)local_110 + 0x14,fVar18,DAT_1808ac118,0);
  if (0.0 < fVar18) {
    local_160 = (char ****)((ulonglong)local_160 & 0xffffffff00000000);
    local_168 = (undefined8 **)CONCAT44(local_168._4_4_,DAT_1808ac7ac);
    FUN_1803fe590(param_1,&local_120,&local_118,
                  (int)(longlong)((float)(DAT_180960ef4 >> 0x18) * fVar18 + fVar20) << 0x18 |
                  DAT_180960ef4 & 0xffffff);
  }
  local_110 = _DAT_1808adcf0;
  ppcStack_108 = (char **)_UNK_1808adcf8;
  local_158 = (char ****)CONCAT44(local_158._4_4_,fVar17);
  local_160 = (char ****)((ulonglong)local_160 & 0xffffffff00000000);
  local_168 = &local_110;
  FUN_18036bcb0(param_1,&local_120,&local_118,DAT_180960eec);
  fVar18 = DAT_1808ac8b0;
  fVar20 = DAT_1808ac880;
  fVar19 = local_118 - DAT_1808ac8b0;
  local_128._0_4_ = fVar19 - DAT_1808ac880;
  local_128._4_4_ = local_114;
  FUN_1803fc200(param_1,&local_120,&local_128,1);
  uVar6 = DAT_180960ec0;
  ppppcVar15 = (char ****)local_d0;
  if (0xf < local_b8) {
    ppppcVar15 = local_d0[0];
  }
  local_128 = (char *)CONCAT44(local_128._4_4_,(float)local_120 + fVar18);
  fVar18 = (float)FUN_18053f0d0();
  fVar18 = fVar18 + local_120._4_4_;
  lVar11 = DAT_181107a08;
  if (DAT_181107a08 == 0) {
    lVar11 = *(longlong *)(DAT_180ca0a50 + 0x11f0);
  }
  local_128._4_4_ = fVar18;
  if ((((uVar6 & 0xff000000) != 0) && (ppppcVar15 != (char ****)0x0)) &&
     (*(char *)ppppcVar15 != '\0')) {
    if (lVar11 == 0) {
      lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x18);
    }
    local_110 = *(undefined8 **)(param_1 + 0x60);
    ppcStack_108 = *(char ***)(param_1 + 0x68);
    local_140 = 0;
    local_148 = local_148 & 0xffffffff00000000;
    local_150 = 0;
    local_160 = (char ****)&local_110;
    local_168 = (undefined8 **)CONCAT44(local_168._4_4_,uVar6);
    local_158 = ppppcVar15;
    FUN_18040a900(lVar11,param_1,DAT_1808ac930,&local_128);
  }
  iVar2 = *(int *)(param_1 + 0xa0);
  iVar1 = iVar2 + -1;
  *(int *)(param_1 + 0xa0) = iVar1;
  if (iVar1 == 0) {
    puVar12 = (undefined4 *)(*(longlong *)(param_1 + 0x38) + 0x34);
  }
  else {
    puVar12 = (undefined4 *)((longlong)(iVar2 + -2) * 0x10 + *(longlong *)(param_1 + 0xa8));
  }
  uVar3 = puVar12[1];
  uVar4 = puVar12[2];
  uVar5 = puVar12[3];
  *(undefined4 *)(param_1 + 0x60) = *puVar12;
  *(undefined4 *)(param_1 + 100) = uVar3;
  *(undefined4 *)(param_1 + 0x68) = uVar4;
  *(undefined4 *)(param_1 + 0x6c) = uVar5;
  FUN_1803fbff0(param_1);
  fVar18 = (float)FUN_18053fc00();
  local_128 = (char *)CONCAT44(local_128._4_4_,fVar19 - fVar18);
  fVar18 = (float)FUN_18053f0d0();
  local_128 = (char *)CONCAT44(fVar18 + fVar17,(float)local_128);
  local_158 = (char ****)CONCAT44(local_158._4_4_,DAT_180960ec0);
  local_160 = (char ****)CONCAT44(local_160._4_4_,fVar20);
  local_168 = (undefined8 **)&local_128;
  FUN_180322fd0(param_1,"nl_glyph_angle_down",
                "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 448 512\" width=\"448\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M201 343C213 356 234 356 246 343L406 183C419 171 419 150 406 138C394 125 373 125 361 138L224 275L86 138C74 125 53 125 41 138C28 150 28 171 41 183L201 343L201 343ZM201 343Z\"/></svg>"
                ,DAT_1808acbe4);
  FUN_180335f60(param_2,pcVar14,&local_120,&local_118);
  FUN_18000f890(local_d0);
  return;
}



/* ===== 180336ab0 FUN_180336ab0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180336ab0(longlong param_1,float *param_2,float *param_3)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  float fVar6;
  uint uVar7;
  char cVar8;
  byte bVar9;
  undefined1 uVar10;
  char cVar11;
  int iVar12;
  size_t sVar13;
  undefined8 *puVar14;
  float *pfVar15;
  longlong lVar16;
  undefined8 *puVar17;
  float *pfVar18;
  ulonglong uVar19;
  char *pcVar20;
  undefined1 *puVar21;
  longlong lVar22;
  longlong lVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined4 uVar27;
  undefined8 uVar28;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined1 auStack_1d8 [8];
  undefined1 auStack_1d0 [24];
  undefined4 local_1b8;
  char *local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined4 local_188;
  float local_178 [4];
  undefined8 local_168;
  float local_158;
  float local_150;
  float local_14c;
  undefined8 local_148;
  ulonglong uStack_140;
  undefined4 local_138;
  float local_130 [7];
  float local_114 [5];
  undefined8 local_100;
  ulonglong uStack_f8;
  undefined8 local_f0;
  ulonglong local_e8;
  ulonglong local_e0;
  
  fVar6 = DAT_1808ac34c;
  local_e0 = DAT_180919500 ^ (ulonglong)auStack_1d8;
  fVar33 = param_2[1] + DAT_1808ac34c;
  fVar37 = *param_2 + DAT_1808ac34c + DAT_1808ac864;
  fVar36 = *param_3;
  local_130[6] = fVar37;
  local_114[3] = fVar33;
  uVar28 = FUN_180519080();
  uVar27 = DAT_1808ac930;
  auVar29._4_4_ = (undefined4)((ulonglong)uVar28 >> 0x20);
  auVar29._8_4_ = (undefined4)extraout_XMM0_Qb;
  auVar29._12_4_ = (undefined4)((ulonglong)extraout_XMM0_Qb >> 0x20);
  fVar33 = (float)uVar28 + fVar33;
  local_188 = 0;
  local_198 = 0;
  local_1a0 = 0;
  local_1a8 = 0;
  local_1b0 = s_default_1809f51e0;
  local_1b8 = 0;
  FUN_18040a2f0(local_178,*(undefined8 *)(DAT_180ca0a50 + 0x11f0),DAT_1808ac930,DAT_1808acd08);
  fVar24 = (float)FUN_18053f0d0(local_178[0] + _DAT_1808aca74);
  lVar22 = DAT_180ca0a50;
  fVar26 = DAT_1808acb7c;
  if (fVar24 <= DAT_1808acb7c) {
    fVar26 = fVar24;
  }
  fVar34 = fVar37 + DAT_1808aca28;
  fVar24 = fVar34 + fVar6;
  local_150 = fVar24 + fVar26;
  local_158 = fVar33 + DAT_1808ac9dc;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  lVar22 = *(longlong *)(lVar22 + 0x14f8);
  local_168 = CONCAT44(fVar33,fVar37);
  *(undefined8 *)(lVar22 + 0x118) = local_168;
  *(undefined1 *)(lVar22 + 0x159) = 1;
  local_178[0] = 35.0;
  local_178[1] = 29.706;
  local_14c = local_158;
  cVar8 = FUN_180415e30("##save",local_178,0);
  if (cVar8 == '\0') {
LAB_180336d0e:
    fVar36 = (fVar36 - fVar6) - DAT_1808ac864;
    puVar21 = auStack_1d8;
    if ((*(int *)(DAT_180ca0a50 + 0x1578) == 0) ||
       (puVar21 = auStack_1d8, *(int *)(DAT_180ca0a50 + 0x1578) != *(int *)(DAT_180ca0a50 + 0x1ee8))
       ) goto LAB_180336d42;
    puVar21 = auStack_1d8;
    fVar37 = fVar6;
  }
  else {
    local_100 = 0;
    uStack_f8 = 0;
    local_f0 = 0;
    local_e8 = 0;
    sVar13 = strlen(s_default_1809f51e0);
    FUN_1800133a0(&local_100,s_default_1809f51e0,sVar13);
    cVar8 = FUN_1800fcca0(&local_100);
    if (cVar8 != '\0') {
      DAT_180cd04a8 = 1;
      DAT_1811074f0 = 0;
      DAT_180962437 = 1;
    }
    if (local_e8 < 0x10) goto LAB_180336d0e;
    uVar19 = local_e8 + 1;
    lVar22 = local_100;
    if (uVar19 < 0x1000) {
LAB_180336d09:
      thunk_FUN_1803d64e0(lVar22,uVar19);
      goto LAB_180336d0e;
    }
    lVar22 = *(longlong *)(local_100 + -8);
    if ((local_100 - lVar22) - 8U < 0x20) {
      uVar19 = local_e8 + 0x28;
      goto LAB_180336d09;
    }
    pcVar4 = (code *)swi(0x29);
    (*pcVar4)(5);
    puVar21 = auStack_1d0;
LAB_180336d42:
    *(undefined8 *)(puVar21 + -8) = 0x180336d49;
    cVar8 = FUN_1803dd930(0);
    if (cVar8 == '\0') {
      fVar37 = 0.0;
    }
    else {
      fVar37 = DAT_1808ac1f4;
    }
  }
  uVar1 = *(undefined4 *)(DAT_180ca0a50 + 0x1ee8);
  *(undefined4 *)(puVar21 + 0x78) = uVar1;
  local_148 = CONCAT44(fVar37,fVar37);
  uStack_140 = (ulonglong)(uint)fVar37;
  local_138 = 0xffffffff;
  *(undefined8 *)(puVar21 + -8) = 0x180336d9b;
  FUN_18034a380(uVar1,puVar21 + 0x60,puVar21 + 0x78,&local_148);
  fVar35 = DAT_1808ac118;
  *(undefined8 *)(puVar21 + -8) = 0x180336dbc;
  fVar25 = (float)FUN_1802b3660(*(longlong *)(puVar21 + 0x60) + 0x14,fVar37,DAT_1808ac118,0);
  fVar37 = local_158;
  if (0.0 < fVar25) {
    *(float *)(puVar21 + 0x60) = fVar34;
    *(float *)(puVar21 + 100) = local_158;
    *(undefined4 *)(puVar21 + 0x28) = 0x50;
    *(float *)(puVar21 + 0x20) = DAT_1808ac7ac;
    *(undefined8 *)(puVar21 + -8) = 0x180336e30;
    FUN_1803fe590(param_1,puVar21 + 0x70,puVar21 + 0x60,
                  (int)(longlong)((float)(DAT_180960ef4 >> 0x18) * fVar25 + DAT_1808ac1f4) << 0x18 |
                  DAT_180960ef4 & 0xffffff);
  }
  *(float *)(puVar21 + 0x60) = fVar34;
  *(float *)(puVar21 + 100) = fVar37;
  *(undefined8 *)(puVar21 + -8) = 0x180336e4c;
  FUN_18032a2d0(puVar21 + 0x70,puVar21 + 0x60);
  *(float *)(puVar21 + 0x60) = fVar24;
  *(float *)(puVar21 + 100) = fVar37;
  *(float *)(puVar21 + 0x78) = fVar34;
  *(float *)(puVar21 + 0x7c) = fVar33;
  *(undefined4 *)(puVar21 + 0x28) = 0;
  *(undefined4 *)(puVar21 + 0x20) = 0;
  *(undefined8 *)(puVar21 + -8) = 0x180336e8a;
  FUN_1803fe590(param_1,puVar21 + 0x78,puVar21 + 0x60,DAT_180960eec);
  lVar22 = DAT_180ca0a50;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  lVar22 = *(longlong *)(lVar22 + 0x14f8);
  *(ulonglong *)(puVar21 + 0x60) = CONCAT44(fVar33,fVar24);
  *(ulonglong *)(lVar22 + 0x118) = CONCAT44(fVar33,fVar24);
  *(undefined1 *)(lVar22 + 0x159) = 1;
  *(float *)(puVar21 + 0x78) = fVar26;
  *(undefined4 *)(puVar21 + 0x7c) = 0x41eda5e3;
  *(undefined8 *)(puVar21 + -8) = 0x180336ee5;
  cVar8 = FUN_180415e30("##preset_combo",puVar21 + 0x78,0);
  if (cVar8 != '\0') {
    *(undefined8 *)(puVar21 + -8) = 0x180336ef5;
    FUN_1802b4d80("##presets");
  }
  uVar28 = *(undefined8 *)(DAT_180ca0a50 + 0x14f8);
  *(undefined8 *)(puVar21 + -8) = 0x180336f0f;
  iVar12 = FUN_1803e8900(uVar28,"##presets");
  if (*(int *)(DAT_180ca0a50 + 0x2030) < *(int *)(DAT_180ca0a50 + 0x2020)) {
    lVar22 = (longlong)*(int *)(DAT_180ca0a50 + 0x2030) * 0x58;
    if ((*(int *)(lVar22 + *(longlong *)(DAT_180ca0a50 + 0x2028)) != iVar12) ||
       (*(char *)(lVar22 + 0x34 + *(longlong *)(DAT_180ca0a50 + 0x2028)) != '\0'))
    goto LAB_180336f3e;
LAB_180336f50:
    fVar26 = fVar6;
LAB_180336f73:
  }
  else {
LAB_180336f3e:
    if ((*(int *)(DAT_180ca0a50 + 0x1578) != 0) &&
       (*(int *)(DAT_180ca0a50 + 0x1578) == *(int *)(DAT_180ca0a50 + 0x1ee8))) goto LAB_180336f50;
    *(undefined8 *)(puVar21 + -8) = 0x180336f5d;
    cVar8 = FUN_1803dd930(0);
    if (cVar8 == '\0') {
      fVar26 = 0.0;
      goto LAB_180336f73;
    }
    fVar26 = DAT_1808ac1f4;
  }
  fVar37 = DAT_1808ac1f4;
  uVar1 = *(undefined4 *)(DAT_180ca0a50 + 0x1ee8);
  *(undefined4 *)(puVar21 + 0x78) = uVar1;
  local_100 = CONCAT44(fVar26,fVar26);
  uStack_f8 = (ulonglong)(uint)fVar26;
  local_f0 = CONCAT44(local_f0._4_4_,0xffffffff);
  *(undefined8 *)(puVar21 + -8) = 0x180336fbc;
  FUN_18034a380(uVar1,&local_148,puVar21 + 0x78,&local_100);
  *(undefined8 *)(puVar21 + -8) = 0x180336fd3;
  fVar26 = (float)FUN_1802b3660(local_148 + 0x14,fVar26,fVar35,0);
  if (0.0 < fVar26) {
    local_130[2] = 1.0;
    local_130[0] = 0.0;
    local_130[1] = fVar26 * fVar35 * DAT_1808ac2cc;
    pfVar18 = local_130;
    if (0.0 <= local_130[1]) {
      pfVar18 = local_130 + 1;
    }
    pfVar15 = local_130 + 2;
    if (local_130[1] <= fVar6) {
      pfVar15 = pfVar18;
    }
    fVar26 = *pfVar15;
    *(undefined4 *)(puVar21 + 0x28) = 0xa0;
    *(float *)(puVar21 + 0x20) = DAT_1808ac7ac;
    *(undefined8 *)(puVar21 + -8) = 0x18033706a;
    FUN_1803fe590(param_1,puVar21 + 0x60,&local_150,
                  DAT_180960f44 & 0xffffff |
                  (int)(longlong)(fVar26 * DAT_1808acb94 + fVar37) << 0x18);
  }
  local_148 = _DAT_1808adcf0;
  uStack_140 = _UNK_1808adcf8;
  *(float *)(puVar21 + 0x30) = fVar6;
  *(undefined4 *)(puVar21 + 0x28) = 0;
  *(undefined8 **)(puVar21 + 0x20) = &local_148;
  *(undefined8 *)(puVar21 + -8) = 0x1803370a5;
  FUN_18036bcb0(param_1,puVar21 + 0x70,&local_150,DAT_180960eec);
  fVar34 = local_150;
  fVar26 = DAT_1808ac8b0;
  fVar35 = local_150 - DAT_1808ac8b0;
  *(float *)(puVar21 + 0x70) = fVar35 - DAT_1808ac880;
  *(float *)(puVar21 + 0x74) = local_14c;
  *(undefined8 *)(puVar21 + -8) = 0x1803370ee;
  FUN_1803fc200(param_1,puVar21 + 0x60,puVar21 + 0x70,1);
  uVar7 = DAT_180960ec0;
  *(float *)(puVar21 + 0x70) = fVar24 + fVar26;
  *(undefined8 *)(puVar21 + -8) = 0x18033710d;
  fVar26 = (float)FUN_18053f0d0();
  *(float *)(puVar21 + 0x74) = fVar26 + fVar33;
  lVar22 = DAT_181107a08;
  if (DAT_181107a08 == 0) {
    lVar22 = *(longlong *)(DAT_180ca0a50 + 0x11f0);
  }
  if (((uVar7 & 0xff000000) != 0) && (s_default_1809f51e0[0] != '\0')) {
    if (lVar22 == 0) {
      lVar22 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x18);
    }
    local_148 = *(longlong *)(param_1 + 0x60);
    uStack_140 = *(undefined8 *)(param_1 + 0x68);
    *(undefined4 *)(puVar21 + 0x48) = 0;
    *(undefined4 *)(puVar21 + 0x40) = 0;
    *(undefined8 *)(puVar21 + 0x38) = 0;
    *(char **)(puVar21 + 0x30) = s_default_1809f51e0;
    *(undefined8 **)(puVar21 + 0x28) = &local_148;
    *(uint *)(puVar21 + 0x20) = uVar7;
    *(undefined8 *)(puVar21 + -8) = 0x18033718a;
    FUN_18040a900(lVar22,param_1,uVar27,puVar21 + 0x70);
  }
  iVar2 = *(int *)(param_1 + 0xa0);
  iVar12 = iVar2 + -1;
  *(int *)(param_1 + 0xa0) = iVar12;
  if (iVar12 == 0) {
    puVar14 = (undefined8 *)(*(longlong *)(param_1 + 0x38) + 0x34);
  }
  else {
    puVar14 = (undefined8 *)((longlong)(iVar2 + -2) * 0x10 + *(longlong *)(param_1 + 0xa8));
  }
  uVar28 = puVar14[1];
  *(undefined8 *)(param_1 + 0x60) = *puVar14;
  *(undefined8 *)(param_1 + 0x68) = uVar28;
  *(undefined8 *)(puVar21 + -8) = 0x1803371c6;
  FUN_1803fbff0(param_1);
  *(undefined8 *)(puVar21 + -8) = 0x1803371d3;
  fVar26 = (float)FUN_18053fc00();
  *(float *)(puVar21 + 0x70) = fVar35 - fVar26;
  auVar29._0_4_ = fVar33;
  auVar30._4_12_ = auVar29._4_12_;
  auVar30._0_4_ = fVar33 + _DAT_1808ac800;
  *(undefined8 *)(puVar21 + -8) = 0x1803371ef;
  fVar24 = (float)FUN_18053f0d0(auVar30._0_8_);
  fVar26 = DAT_1808ac880;
  *(float *)(puVar21 + 0x74) = fVar24 + fVar6;
  *(uint *)(puVar21 + 0x30) = DAT_180960ec0;
  *(float *)(puVar21 + 0x28) = DAT_1808ac880;
  *(undefined1 **)(puVar21 + 0x20) = puVar21 + 0x70;
  *(undefined8 *)(puVar21 + -8) = 0x18033723c;
  FUN_180322fd0(param_1,"nl_glyph_angle_down",
                "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 448 512\" width=\"448\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M201 343C213 356 234 356 246 343L406 183C419 171 419 150 406 138C394 125 373 125 361 138L224 275L86 138C74 125 53 125 41 138C28 150 28 171 41 183L201 343L201 343ZM201 343Z\"/></svg>"
                ,DAT_1808acbe4);
  *(undefined8 *)(puVar21 + -8) = 0x18033724a;
  FUN_18032e640(puVar21 + 0x60,&local_150);
  fVar34 = fVar34 + DAT_1808ac900;
  uVar19 = 0xffffffff;
  pcVar20 = "header_tab_fade";
  bVar9 = 0x68;
  do {
    pcVar20 = pcVar20 + 1;
    if (((bVar9 == 0x23) && (*pcVar20 == 0x23)) && (pcVar20[1] == 0x23)) {
      uVar19 = 0xffffffff;
      pcVar20 = pcVar20 + 2;
    }
    else {
      uVar19 = (ulonglong)
               ((uint)(uVar19 >> 8) ^
               *(uint *)(&DAT_1806c25c0 + (uVar19 & 0xff ^ (ulonglong)bVar9) * 4));
    }
    bVar9 = *pcVar20;
  } while (bVar9 != 0);
  if (DAT_1811071b8 == DAT_181106f10) {
    puVar14 = &DAT_1809f5b70;
    if (0xf < DAT_1809f5b88) {
      puVar14 = DAT_1809f5b70;
    }
    puVar17 = &DAT_1809f5b00;
    if (0xf < DAT_1809f5b18) {
      puVar17 = DAT_1809f5b00;
    }
    if (DAT_1809f5b10 != DAT_1809f5b80) goto LAB_180337355;
    if (DAT_1809f5b10 != 0) {
      *(undefined8 *)(puVar21 + -8) = 0x180337300;
      iVar12 = memcmp(puVar17,puVar14,DAT_1809f5b10);
      if (iVar12 != 0) goto LAB_180337355;
    }
    puVar14 = &DAT_1809f7400;
    if (0xf < DAT_1809f7418) {
      puVar14 = DAT_1809f7400;
    }
    puVar17 = &DAT_1809f6fa8;
    if (0xf < DAT_1809f6fc0) {
      puVar17 = DAT_1809f6fa8;
    }
    if (DAT_1809f6fb8 != DAT_1809f7410) goto LAB_180337355;
    if (DAT_1809f6fb8 != 0) {
      *(undefined8 *)(puVar21 + -8) = 0x180337348;
      iVar12 = memcmp(puVar17,puVar14,DAT_1809f6fb8);
      if (iVar12 != 0) goto LAB_180337355;
    }
    bVar5 = false;
    fVar24 = fVar6;
  }
  else {
LAB_180337355:
    bVar5 = true;
    fVar24 = 0.0;
  }
  *(uint *)(puVar21 + 0x78) = ~(uint)uVar19;
  local_100 = CONCAT44(fVar24,fVar24);
  uStack_f8 = (ulonglong)(uint)fVar24;
  local_f0 = CONCAT44(local_f0._4_4_,0xffffffff);
  *(undefined8 *)(puVar21 + -8) = 0x18033738e;
  FUN_18034a380();
  *(undefined8 *)(puVar21 + -8) = 0x1803373a9;
  fVar24 = (float)FUN_1802b3660(local_148 + 0x14,fVar24,DAT_1808ac0e8,0);
  if ((bVar5) && (fVar24 <= 0.0)) {
    DAT_1811071b8 = DAT_181106f10;
    puVar14 = &DAT_1809f5b70;
    if (0xf < DAT_1809f5b88) {
      puVar14 = DAT_1809f5b70;
    }
    *(undefined8 *)(puVar21 + -8) = 0x1803373ee;
    FUN_180029840(&DAT_1809f5b00,puVar14,DAT_1809f5b80);
    puVar14 = &DAT_1809f7400;
    if (0xf < DAT_1809f7418) {
      puVar14 = DAT_1809f7400;
    }
    *(undefined8 *)(puVar21 + -8) = 0x180337414;
    FUN_180029840(&DAT_1809f6fa8,puVar14,DAT_1809f7410);
  }
  uVar27 = *(undefined4 *)(param_1 + 0x20);
  if (DAT_1811071b8 == 0) {
    uVar28 = 0;
LAB_18033742c:
    *(undefined8 *)(puVar21 + -8) = 0x18033743b;
    FUN_1803364a0(param_1,uVar28,fVar34,fVar33);
  }
  else if (DAT_1811071b8 == 1) {
    uVar28 = 1;
    goto LAB_18033742c;
  }
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  *(undefined8 *)(puVar21 + -8) = 0x18033744c;
  FUN_1802b3c30(param_1,uVar27,uVar1,fVar24);
  fVar24 = DAT_1808ac9dc;
  fVar34 = fVar36 - DAT_1808ac9dc;
  uVar28 = *(undefined8 *)(DAT_180ca0a50 + 0x14f8);
  *(undefined8 *)(puVar21 + -8) = 0x180337478;
  iVar12 = FUN_1803e8900(uVar28,"##search_popup");
  lVar22 = DAT_180ca0a50;
  if (*(int *)(DAT_180ca0a50 + 0x2030) < *(int *)(DAT_180ca0a50 + 0x2020)) {
    lVar23 = (longlong)*(int *)(DAT_180ca0a50 + 0x2030) * 0x58;
    if ((*(int *)(lVar23 + *(longlong *)(DAT_180ca0a50 + 0x2028)) != iVar12) ||
       (*(char *)(lVar23 + 0x34 + *(longlong *)(DAT_180ca0a50 + 0x2028)) != '\0'))
    goto LAB_1803374ad;
    bVar5 = true;
  }
  else {
LAB_1803374ad:
    bVar5 = false;
  }
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  lVar22 = *(longlong *)(lVar22 + 0x14f8);
  uVar28 = CONCAT44(fVar33,fVar34);
  *(undefined8 *)(puVar21 + 0x70) = uVar28;
  *(undefined8 *)(lVar22 + 0x118) = uVar28;
  *(undefined1 *)(lVar22 + 0x159) = 1;
  *(undefined4 *)(puVar21 + 0x60) = 0x41eda5e3;
  *(undefined4 *)(puVar21 + 100) = 0x41eda5e3;
  *(undefined8 *)(puVar21 + -8) = 0x180337504;
  cVar8 = FUN_180415e30("##search_icon",puVar21 + 0x60,0);
  *(undefined8 *)(puVar21 + -8) = 0x18033750f;
  uVar10 = FUN_1803dd930(0);
  if (((*(int *)(DAT_180ca0a50 + 0x1578) != 0) &&
      (*(int *)(DAT_180ca0a50 + 0x1578) == *(int *)(DAT_180ca0a50 + 0x1ee8))) || (bVar5)) {
    uVar28 = 1;
  }
  else {
    uVar28 = 0;
  }
  uVar27 = *(undefined4 *)(DAT_180ca0a50 + 0x1ee8);
  *(undefined8 *)(puVar21 + -8) = 0x180337544;
  fVar25 = (float)FUN_1802b3850(uVar27,uVar28,uVar10);
  fVar35 = DAT_1808ac7ac;
  local_130[5] = 1.0;
  local_130[3] = 0.0;
  local_130[4] = fVar25 * DAT_1808ac1b0 * DAT_1808ac2cc;
  *(float *)(puVar21 + 0x60) = fVar34 + fVar24;
  *(float *)(puVar21 + 100) = local_158;
  pfVar18 = local_130 + 3;
  if (0.0 <= local_130[4]) {
    pfVar18 = local_130 + 4;
  }
  pfVar15 = local_130 + 5;
  if (local_130[4] <= fVar6) {
    pfVar15 = pfVar18;
  }
  fVar24 = *pfVar15;
  *(undefined4 *)(puVar21 + 0x28) = 0;
  *(float *)(puVar21 + 0x20) = DAT_1808ac7ac;
  *(undefined8 *)(puVar21 + -8) = 0x1803375f7;
  FUN_1803fe590(param_1,puVar21 + 0x70,puVar21 + 0x60,
                DAT_180960f44 & 0xffffff | (int)(longlong)(fVar24 * DAT_1808acb94 + fVar37) << 0x18)
  ;
  *(undefined8 *)(puVar21 + -8) = 0x180337604;
  FUN_18053fc00();
  *(undefined8 *)(puVar21 + -8) = 0x18033761c;
  uVar27 = FUN_18053fc00();
  *(undefined4 *)(puVar21 + 0x60) = uVar27;
  auVar31._4_4_ = auVar29._4_4_;
  auVar31._0_4_ = fVar33;
  auVar31._8_4_ = auVar29._8_4_;
  auVar31._12_4_ = auVar29._12_4_;
  auVar32._4_12_ = auVar31._4_12_;
  auVar32._0_4_ = fVar33 + fVar35;
  *(undefined8 *)(puVar21 + -8) = 0x18033762f;
  uVar27 = FUN_18053fc00(auVar32._0_8_);
  *(undefined4 *)(puVar21 + 100) = uVar27;
  *(undefined8 *)(puVar21 + -8) = 0x18033766e;
  uVar27 = FUN_1802b38e0((int)(longlong)((float)(DAT_180960f38 >> 0x18) * DAT_1808ac254 + fVar37) <<
                         0x18 | DAT_180960f38 & 0xffffff,DAT_180960f38,fVar25);
  *(undefined4 *)(puVar21 + 0x30) = uVar27;
  *(undefined4 *)(puVar21 + 0x28) = DAT_1808ac8d4;
  *(undefined1 **)(puVar21 + 0x20) = puVar21 + 0x60;
  *(undefined8 *)(puVar21 + -8) = 0x1803376a8;
  FUN_180322fd0(param_1,"nl_glyph_magnifying_glass",
                "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 512 512\" width=\"512\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M416 208C416 254 401 297 376 331L502 457C515 469 515 490 502 502C490 515 469 515 457 502L330 376C296 402 253 416 208 416C93 416 0 323 0 208C0 94 93 0 208 0C322 0 416 94 416 208ZM208 352C259 352 306 325 332 280C358 236 358 181 332 136C306 92 259 64 208 64C156 64 109 92 83 136C57 181 57 236 83 280C109 325 156 352 208 352Z\"/></svg>"
                ,DAT_1808acc00);
  lVar22 = DAT_180ca0a50;
  if (*(char *)(DAT_180ca0a50 + 300) != '\0') {
    *(undefined8 *)(puVar21 + -8) = 0x1803376ca;
    cVar11 = FUN_1803e9470(0x227,1,0);
    if (cVar11 != '\0') {
      *(undefined8 *)(puVar21 + -8) = 0x1803376d3;
      cVar11 = FUN_1803eeca0();
      if (cVar11 != '\0') {
        bVar5 = true;
        goto LAB_1803376dd;
      }
    }
  }
  bVar5 = false;
LAB_1803376dd:
  if ((cVar8 != '\0') || (bVar5)) {
    DAT_1811071f0 = 0;
    DAT_180962436 = '\x01';
    DAT_180cd0ebe = '\0';
    *(undefined8 *)(puVar21 + -8) = 0x180337707;
    FUN_1802b4d80("##search_popup");
    lVar22 = DAT_180ca0a50;
  }
  if ((DAT_180962436 != '\0') && (*(int *)(lVar22 + 0x2030) < *(int *)(lVar22 + 0x2020))) {
    lVar23 = (longlong)*(int *)(lVar22 + 0x2030) * 0x58;
    if ((*(int *)(lVar23 + *(longlong *)(lVar22 + 0x2028)) == iVar12) &&
       (*(char *)(lVar23 + 0x34 + *(longlong *)(lVar22 + 0x2028)) == '\0')) {
      if (DAT_180cd0ebe == '\0') {
        *(undefined8 *)(puVar21 + -8) = 0x18033774b;
        FUN_18032f320();
      }
      *(undefined8 *)(puVar21 + -8) = 0x180337750;
      FUN_18032fe50();
      DAT_180962436 = '\0';
      lVar22 = DAT_180ca0a50;
    }
  }
  *(float *)(lVar22 + 0x1f48) = local_130[6];
  *(float *)(lVar22 + 0x1f4c) = fVar33 - DAT_1808ac428;
  *(undefined8 *)(lVar22 + 0x1f50) = 0;
  *(undefined4 *)(lVar22 + 0x1f3c) = 1;
  *(uint *)(lVar22 + 0x1f38) = *(uint *)(lVar22 + 0x1f38) | 0x11;
  *(float *)(lVar22 + 0x1f84) = fVar36 - local_130[6];
  *(undefined4 *)(lVar22 + 0x1f88) = 0;
  *(float *)(lVar22 + 0x1f8c) = fVar36 - local_130[6];
  *(undefined4 *)(lVar22 + 0x1f90) = 0x7f7fffff;
  *(undefined8 *)(lVar22 + 0x1f98) = 0;
  *(undefined8 *)(lVar22 + 0x1fa0) = 0;
  *(undefined8 *)(puVar21 + -8) = 0x1803377db;
  FUN_1803d8870(9,DAT_1808ac864);
  DAT_180cd04ad = 1;
  *(undefined8 *)(puVar21 + 0x60) = 0;
  *(undefined8 *)(puVar21 + -8) = 0x1803377f8;
  cVar8 = FUN_1802b5260("##search_popup",puVar21 + 0x60);
  *(undefined8 *)(puVar21 + -8) = 0x180337805;
  FUN_1803d8a40(1);
  lVar22 = DAT_180ca0a50;
  if (cVar8 != '\0') {
    *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
    lVar23 = *(longlong *)(lVar22 + 0x14f8);
    *(undefined4 *)(puVar21 + 0x60) = 0xb;
    *(undefined4 *)(puVar21 + 100) = *(undefined4 *)(lVar22 + 0xcdc);
    *(undefined4 *)(puVar21 + 0x68) = *(undefined4 *)(lVar22 + 0xce0);
    *(undefined8 *)(puVar21 + -8) = 0x18033785e;
    FUN_1803f6350(lVar22 + 0x1fd0,puVar21 + 0x60);
    *(undefined4 *)(lVar22 + 0xcdc) = 0x41300000;
    *(undefined4 *)(lVar22 + 0xce0) = 0x41000000;
    *(undefined8 *)(puVar21 + -8) = 0x18033787f;
    FUN_1803d8870(0xd,0);
    *(undefined8 *)(puVar21 + -8) = 0x18033788b;
    FUN_1803d8730(7,0);
    *(undefined8 *)(puVar21 + -8) = 0x180337897;
    FUN_1803d8730(8,0);
    *(undefined8 *)(puVar21 + -8) = 0x1803378a3;
    FUN_1803d8730(9,0);
    fVar24 = DAT_1808ac9e4;
    fVar36 = *(float *)(lVar23 + 0x30);
    *(undefined8 *)(puVar21 + -8) = 0x1803378c0;
    FUN_1803ec770((fVar36 - fVar26) - DAT_1808ac9e4);
    lVar22 = DAT_181107a08;
    if (DAT_181107a08 == 0) {
      lVar22 = *(longlong *)(DAT_180ca0a50 + 0x11f0);
    }
    *(undefined8 *)(puVar21 + 0x60) = *(undefined8 *)(DAT_180ca0a50 + 0x11f0);
    *(undefined4 *)(puVar21 + 0x68) = *(undefined4 *)(DAT_180ca0a50 + 0x1204);
    *(undefined4 *)(puVar21 + 0x6c) = *(undefined4 *)(DAT_180ca0a50 + 0x1200);
    *(undefined8 *)(puVar21 + -8) = 0x180337916;
    FUN_1803f6200(DAT_180ca0a50 + 0x1fe0,puVar21 + 0x60);
    *(undefined8 *)(puVar21 + -8) = 0x180337929;
    FUN_1803e8680(lVar22,DAT_1808ac94c,0);
    fVar36 = *(float *)(lVar23 + 0x11c);
    if (*(char *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xd3) != '\0') {
      *(undefined8 *)(puVar21 + -8) = 0x18033794e;
      FUN_1803e8120();
    }
    *(undefined8 *)(puVar21 + -8) = 0x18033795b;
    FUN_1803d8730(0,DAT_180960ef8);
    *(undefined8 *)(puVar21 + -8) = 0x18033796b;
    FUN_1803d8730(1,DAT_180960ec4);
    *(undefined8 *)(puVar21 + -8) = 0x18033797b;
    FUN_1803d8730(0x34,DAT_180960f54);
    *(undefined8 *)(puVar21 + -8) = 0x18033798b;
    FUN_1803d8730(0x22,DAT_180960ef8);
    *(undefined4 *)(puVar21 + 0x74) = 4;
    uVar27 = *(undefined4 *)(DAT_180ca0a50 + 0xd98);
    *(undefined4 *)(puVar21 + 0x70) = uVar27;
    *(undefined4 *)(DAT_180ca0a50 + 0xd98) = 0x3f800000;
    *(undefined8 *)(puVar21 + -8) = 0x1803379c2;
    puVar14 = (undefined8 *)FUN_1802b3fe0(&local_100,"search");
    if (0xf < (ulonglong)puVar14[3]) {
      puVar14 = (undefined8 *)*puVar14;
    }
    *(undefined8 *)(puVar21 + 0x60) = 0;
    *(undefined8 *)(puVar21 + 0x38) = 0;
    *(undefined8 *)(puVar21 + 0x30) = 0;
    *(undefined4 *)(puVar21 + 0x28) = 0;
    *(undefined1 **)(puVar21 + 0x20) = puVar21 + 0x60;
    *(undefined8 *)(puVar21 + -8) = 0x180337a0b;
    cVar8 = FUN_18041c570("##search",puVar14,&DAT_1811071f0,0x80);
    *(undefined8 *)(puVar21 + -8) = 0x180337a17;
    FUN_18000f890(&local_100);
    if (cVar8 != '\0') {
      DAT_180962436 = '\x01';
    }
    *(undefined4 *)(DAT_180ca0a50 + 0xd98) = uVar27;
    *(undefined8 *)(puVar21 + -8) = 0x180337a3b;
    FUN_1803d87f0(4);
    lVar22 = DAT_180ca0a50;
    fVar34 = *(float *)(DAT_180ca0a50 + 0xce0) + *(float *)(DAT_180ca0a50 + 0xce0) +
             *(float *)(DAT_180ca0a50 + 0x1200);
    fVar35 = ((*(float *)(lVar23 + 0x30) + *(float *)(lVar23 + 0x28)) - DAT_1808ac790) - fVar24;
    *(undefined8 *)(puVar21 + -8) = 0x180337a83;
    fVar33 = (float)FUN_18053f0d0((fVar34 - fVar24) * fVar37);
    fVar33 = fVar33 + fVar36;
    *(undefined1 *)(*(longlong *)(lVar22 + 0x14f8) + 0xce) = 1;
    lVar22 = *(longlong *)(lVar22 + 0x14f8);
    *(ulonglong *)(puVar21 + 0x70) = CONCAT44(fVar33,fVar35);
    *(ulonglong *)(lVar22 + 0x118) = CONCAT44(fVar33,fVar35);
    *(undefined1 *)(lVar22 + 0x159) = 1;
    *(undefined4 *)(puVar21 + 0x60) = 0x41f00000;
    *(undefined4 *)(puVar21 + 100) = 0x41f00000;
    *(undefined8 *)(puVar21 + -8) = 0x180337ae2;
    cVar8 = FUN_180415e30("##search_clear",puVar21 + 0x60,0);
    *(undefined8 *)(puVar21 + -8) = 0x180337aed;
    uVar10 = FUN_1803dd930(0);
    iVar12 = *(int *)(DAT_180ca0a50 + 0x1578);
    if (iVar12 == 0) {
      uVar27 = 0;
    }
    else {
      uVar27 = CONCAT31((int3)((uint)iVar12 >> 8),iVar12 == *(int *)(DAT_180ca0a50 + 0x1ee8));
    }
    uVar1 = *(undefined4 *)(DAT_180ca0a50 + 0x1ee8);
    *(undefined8 *)(puVar21 + -8) = 0x180337b1a;
    fVar25 = (float)FUN_1802b3850(uVar1,uVar27,uVar10);
    local_114[2] = 1.0;
    local_114[0] = 0.0;
    local_114[1] = fVar25 * DAT_1808ac1b0 * DAT_1808ac2cc;
    *(float *)(puVar21 + 0x60) = fVar35 + fVar24;
    *(float *)(puVar21 + 100) = fVar33 + fVar24;
    pfVar18 = local_114;
    if (0.0 <= local_114[1]) {
      pfVar18 = local_114 + 1;
    }
    pfVar15 = local_114 + 2;
    if (local_114[1] <= fVar6) {
      pfVar15 = pfVar18;
    }
    fVar24 = *pfVar15;
    *(undefined4 *)(puVar21 + 0x28) = 0;
    *(float *)(puVar21 + 0x20) = DAT_1808ac7ac;
    uVar28 = *(undefined8 *)(lVar23 + 0x2c8);
    *(undefined8 *)(puVar21 + -8) = 0x180337bcf;
    FUN_1803fe590(uVar28,puVar21 + 0x70,puVar21 + 0x60,
                  (int)(longlong)(fVar24 * DAT_1808acb94 + fVar37) << 0x18 |
                  DAT_180960f44 & 0xffffff);
    *(undefined8 *)(puVar21 + -8) = 0x180337bdc;
    FUN_18053fc00();
    *(undefined8 *)(puVar21 + -8) = 0x180337bf4;
    uVar27 = FUN_18053fc00();
    *(undefined4 *)(puVar21 + 0x60) = uVar27;
    *(undefined8 *)(puVar21 + -8) = 0x180337c0c;
    uVar27 = FUN_18053fc00();
    *(undefined4 *)(puVar21 + 100) = uVar27;
    *(undefined8 *)(puVar21 + -8) = 0x180337c4b;
    uVar27 = FUN_1802b38e0((int)(longlong)((float)(DAT_180960ef8 >> 0x18) * DAT_1808ac254 + fVar37)
                           << 0x18 | DAT_180960ef8 & 0xffffff,DAT_180960ef8,fVar25);
    *(undefined4 *)(puVar21 + 0x30) = uVar27;
    *(undefined4 *)(puVar21 + 0x28) = DAT_1808ac8f0;
    *(undefined1 **)(puVar21 + 0x20) = puVar21 + 0x60;
    uVar28 = *(undefined8 *)(lVar23 + 0x2c8);
    *(undefined8 *)(puVar21 + -8) = 0x180337c89;
    FUN_180322fd0(uVar28,"nl_glyph_xmark",
                  "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 384 512\" width=\"384\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M342 151C355 139 355 118 342 106C330 93 309 93 297 106L192 211L86 106C74 93 53 93 41 106C28 118 28 139 41 151L146 256L41 362C28 374 28 395 41 407C53 420 74 420 86 407L191 302L297 407C309 420 330 420 342 407C355 395 355 374 342 362L237 256L342 151L342 151Z\"/></svg>"
                  ,DAT_1808acbd8);
    lVar22 = DAT_180ca0a50;
    if (*(int *)(DAT_180ca0a50 + 0x1fe0) < 1) {
      *(undefined8 *)(puVar21 + -8) = 0x180337ca7;
      FUN_1803ebc00("Calling PopFont() too many times!");
    }
    else {
      lVar16 = (longlong)*(int *)(DAT_180ca0a50 + 0x1fe0) + -1;
      lVar3 = *(longlong *)(DAT_180ca0a50 + 0x1fe8);
      uVar27 = *(undefined4 *)(lVar3 + 0xc + lVar16 * 0x10);
      uVar1 = *(undefined4 *)(lVar3 + 8 + lVar16 * 0x10);
      uVar28 = *(undefined8 *)(lVar3 + lVar16 * 0x10);
      *(undefined8 *)(puVar21 + -8) = 0x180337ccb;
      FUN_1803e8680(uVar28,uVar1,uVar27);
      *(int *)(lVar22 + 0x1fe0) = *(int *)(lVar22 + 0x1fe0) + -1;
    }
    lVar22 = *(longlong *)(DAT_180ca0a50 + 0x14f8);
    iVar12 = *(int *)(lVar22 + 0x1f8);
    if (iVar12 < 1) {
      *(undefined8 *)(puVar21 + -8) = 0x180337cf7;
      FUN_1803ebc00("Calling PopItemWidth() too many times!");
    }
    else {
      *(undefined4 *)(lVar22 + 0x1e8) =
           *(undefined4 *)(*(longlong *)(lVar22 + 0x200) + -4 + (longlong)iVar12 * 4);
      *(int *)(lVar22 + 0x1f8) = iVar12 + -1;
    }
    *(undefined8 *)(puVar21 + -8) = 0x180337d1f;
    FUN_1803d87f0(3);
    *(undefined8 *)(puVar21 + -8) = 0x180337d29;
    FUN_1803d8a40(2);
    lVar22 = DAT_180ca0a50;
    uVar27 = *(undefined4 *)(lVar23 + 0x28);
    *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
    lVar22 = *(longlong *)(lVar22 + 0x14f8);
    *(undefined4 *)(lVar22 + 0x118) = uVar27;
    *(float *)(lVar22 + 0x11c) = fVar34 + fVar36;
    *(undefined1 *)(lVar22 + 0x159) = 1;
    if (cVar8 != '\0') {
      *(undefined8 *)(puVar21 + -8) = 0x180337d70;
      FUN_1803ee1f0();
    }
    *(undefined8 *)(puVar21 + -8) = 0x180337d75;
    FUN_180330f70();
    *(undefined8 *)(puVar21 + -8) = 0x180337d7a;
    FUN_1802b5590();
  }
  *(float *)(puVar21 + 0x60) = *param_3 - fVar26;
  *(float *)(puVar21 + 100) = local_114[3] + DAT_1808aca88 + fVar6;
  *(float *)(puVar21 + 0x70) = *param_2 + fVar26;
  *(float *)(puVar21 + 0x74) = local_114[3] + DAT_1808aca88;
  *(undefined4 *)(puVar21 + 0x28) = 0;
  *(undefined4 *)(puVar21 + 0x20) = 0;
  *(undefined8 *)(puVar21 + -8) = 0x180337de2;
  FUN_1803fe590(param_1,puVar21 + 0x70,puVar21 + 0x60,DAT_180960f48);
  *(undefined8 *)(puVar21 + -8) = 0x180337dee;
  return;
}



/* ===== 180337e50 FUN_180337e50 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180337e50(undefined4 param_1)

{
  int iVar1;
  longlong lVar2;
  
  switch(param_1) {
  case 0:
    FUN_180305180();
    return;
  case 1:
    FUN_180306930();
    return;
  case 2:
    FUN_1802f8f60();
    return;
  case 3:
    FUN_1802b8a20(0);
    FUN_1802fce20();
    FUN_1802fe7b0();
    FUN_1802fe120();
    FUN_180300b00();
    FUN_1802b9760();
    return;
  case 4:
    _DAT_180921498 = 0x101;
    if (DAT_180ccfeda != '\0') {
      FUN_1802e2d40();
      return;
    }
    break;
  case 5:
    FUN_18030af70();
    return;
  case 6:
  case 7:
    break;
  case 8:
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
    lVar2 = FUN_180098330(&DAT_1809f73e0);
    FUN_1802b8a20(0);
    if (lVar2 != 0) {
      FUN_180321890(lVar2);
    }
    FUN_1802b9760();
    FUN_1804e4e90(&DAT_1809e8e50);
    break;
  default:
    goto switchD_180337e77_default;
  }
switchD_180337e77_default:
  return;
}



/* ===== 180337fb0 FUN_180337fb0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180337fb0(longlong param_1,float *param_2,float param_3,float param_4,uint param_5,
                  char *param_6,char param_7)

{
  int iVar1;
  float fVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float local_res8;
  float local_resc;
  float local_res10;
  float local_res14;
  ulonglong uVar12;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  
  uVar12 = 0;
  FUN_18040a2f0(&local_res8,*(undefined8 *)(DAT_180ca0a50 + 0x11f0),param_4,DAT_1808acd08,0,param_6,
                0,0,0);
  fVar2 = DAT_1808ac450;
  if (param_3 < local_res8) {
    fVar9 = local_res8 - param_3;
    fVar10 = fVar9 / _DAT_1808ac9d0;
    fVar11 = fVar10 + DAT_1808ac450;
    fVar8 = (float)FUN_180519fe0((float)*(double *)(DAT_180ca0a50 + 0x10),fVar11 + fVar11);
    if (fVar2 <= fVar8) {
      if (fVar11 <= fVar8) {
        if (fVar10 + DAT_1808ac688 <= fVar8) {
          fVar9 = fVar9 - ((fVar8 - DAT_1808ac688) - fVar10) * _DAT_1808ac9d0;
        }
      }
      else {
        fVar9 = (fVar8 - fVar2) * _DAT_1808ac9d0;
      }
      goto LAB_180338103;
    }
  }
  fVar9 = 0.0;
LAB_180338103:
  local_res10 = *param_2;
  local_res14 = param_2[1] - DAT_1808ac540;
  local_res8 = local_res10 + param_3;
  local_resc = param_2[1] + param_4 + DAT_1808ac710;
  FUN_1803fc200(param_1,&local_res10,&local_res8,1);
  fVar8 = (float)FUN_18053f0d0(*param_2 - fVar9);
  fVar2 = param_2[1];
  local_res8 = fVar8;
  local_resc = fVar2;
  if ((((param_5 & 0xff000000) != 0) && (param_6 != (char *)0x0)) && (*param_6 != '\0')) {
    if (param_4 == 0.0) {
      fVar9 = *(float *)(*(longlong *)(param_1 + 0x38) + 0x20);
    }
    else {
      fVar9 = param_4;
    }
    local_a8 = *(undefined4 *)(param_1 + 0x60);
    uStack_a4 = *(undefined4 *)(param_1 + 100);
    uStack_a0 = *(undefined4 *)(param_1 + 0x68);
    uStack_9c = *(undefined4 *)(param_1 + 0x6c);
    uVar12 = uVar12 & 0xffffffff00000000;
    FUN_18040a900(*(undefined8 *)(*(longlong *)(param_1 + 0x38) + 0x18),param_1,fVar9,&local_res8,
                  param_5,&local_a8,param_6,0,uVar12,0);
  }
  if (param_7 != '\0') {
    local_resc = fVar2 + 0.0;
    local_res8 = fVar8 + DAT_1808ac21c;
    if ((((param_5 & 0xff000000) != 0) && (param_6 != (char *)0x0)) && (*param_6 != '\0')) {
      if (param_4 == 0.0) {
        param_4 = *(float *)(*(longlong *)(param_1 + 0x38) + 0x20);
      }
      local_a8 = *(undefined4 *)(param_1 + 0x60);
      uStack_a4 = *(undefined4 *)(param_1 + 100);
      uStack_a0 = *(undefined4 *)(param_1 + 0x68);
      uStack_9c = *(undefined4 *)(param_1 + 0x6c);
      FUN_18040a900(*(undefined8 *)(*(longlong *)(param_1 + 0x38) + 0x18),param_1,param_4,
                    &local_res8,param_5,&local_a8,param_6,0,uVar12 & 0xffffffff00000000,0);
    }
  }
  iVar3 = *(int *)(param_1 + 0xa0);
  iVar1 = iVar3 + -1;
  *(int *)(param_1 + 0xa0) = iVar1;
  if (iVar1 == 0) {
    puVar7 = (undefined4 *)(*(longlong *)(param_1 + 0x38) + 0x34);
  }
  else {
    puVar7 = (undefined4 *)((longlong)(iVar3 + -2) * 0x10 + *(longlong *)(param_1 + 0xa8));
  }
  uVar4 = puVar7[1];
  uVar5 = puVar7[2];
  uVar6 = puVar7[3];
  *(undefined4 *)(param_1 + 0x60) = *puVar7;
  *(undefined4 *)(param_1 + 100) = uVar4;
  *(undefined4 *)(param_1 + 0x68) = uVar5;
  *(undefined4 *)(param_1 + 0x6c) = uVar6;
  FUN_1803fbff0(param_1);
  return;
}



/* ===== 180338340 FUN_180338340 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_180338340(undefined8 *param_1,double param_2)

{
  size_t sVar1;
  int iVar2;
  double dVar3;
  undefined1 auStack_58 [32];
  int local_38;
  int local_30;
  char local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_180919500 ^ (ulonglong)auStack_58;
  dVar3 = 0.0;
  if (0.0 <= param_2) {
    dVar3 = param_2;
  }
  local_20[0] = '\0';
  local_20[1] = '\0';
  local_20[2] = '\0';
  local_20[3] = '\0';
  local_20[4] = '\0';
  local_20[5] = '\0';
  local_20[6] = '\0';
  local_20[7] = '\0';
  local_20[8] = '\0';
  local_20[9] = '\0';
  local_20[10] = '\0';
  local_20[0xb] = '\0';
  local_20[0xc] = '\0';
  local_20[0xd] = '\0';
  local_20[0xe] = '\0';
  local_20[0xf] = '\0';
  iVar2 = (int)dVar3;
  local_38 = iVar2 % 0x3c;
  if (iVar2 < 0xe10) {
    snprintf(local_20,0x10,"%02d:%02d");
  }
  else {
    local_30 = local_38;
    local_38 = iVar2 / 0x3c + (iVar2 / 0xe10) * -0x3c;
    snprintf(local_20,0x10,"%d:%02d:%02d",iVar2 / 0xe10);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  sVar1 = strlen(local_20);
  FUN_1800133a0(param_1,local_20,sVar1);
  return param_1;
}



/* ===== 180338440 FUN_180338440 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180338440(longlong param_1,float *param_2,int param_3,uint param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  
  fVar4 = DAT_1808ac7ec;
  fVar3 = DAT_1808ac790;
  fVar2 = DAT_1808ac428;
  fVar1 = DAT_1808ac34c;
  if (param_3 == 0) {
    local_68 = *param_2 - _DAT_1808ac74c;
    local_70 = *param_2 - DAT_1808ac7ec;
    local_64 = (param_2[1] + DAT_1808ac7ec) - DAT_1808ac34c;
    local_6c = (param_2[1] - DAT_1808ac7ec) + DAT_1808ac34c;
    FUN_1803fe590(local_68,&local_70,&local_68,local_6c,DAT_1808ac34c,0);
    local_74 = param_2[1];
    local_78 = *param_2 - DAT_1808ac710;
    local_70 = *param_2 + DAT_1808ac7ac;
    local_6c = (local_74 + fVar4) - fVar1;
    local_64 = (local_74 - fVar4) + fVar1;
    if ((param_4 & 0xff000000) == 0) {
      return;
    }
    local_68 = local_70;
    FUN_18000b9c0(param_1 + 0x50,&local_68);
    FUN_18000b9c0(param_1 + 0x50,&local_70);
    pfVar5 = &local_78;
  }
  else {
    if (param_3 == 1) {
      local_74 = param_2[1];
      local_78 = *param_2 + DAT_1808ac7ec;
      local_70 = *param_2 - DAT_1808ac738;
      local_6c = local_74 + DAT_1808ac7ec;
      local_64 = local_74 - DAT_1808ac7ec;
      if ((param_4 & 0xff000000) == 0) {
        return;
      }
      local_68 = local_70;
      FUN_18000b9c0(param_1 + 0x50,&local_68);
      FUN_18000b9c0(param_1 + 0x50,&local_70);
      FUN_18000b9c0(param_1 + 0x50,&local_78);
      FUN_1803fd460(param_1,*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x50),param_4)
      ;
      goto LAB_1803387ce;
    }
    if (param_3 == 2) {
      local_64 = param_2[1] + DAT_1808ac7ec;
      local_70 = *param_2 - DAT_1808ac790;
      local_68 = *param_2 - DAT_1808ac428;
      local_6c = param_2[1] - DAT_1808ac7ec;
      FUN_1803fe590(local_68,&local_70,&local_68,local_70,DAT_1808ac428,0);
      local_68 = *param_2 + fVar3;
      local_64 = param_2[1] + fVar4;
      local_70 = *param_2 + fVar2;
      local_6c = param_2[1] - fVar4;
      FUN_1803fe590(param_1,&local_70,&local_68,param_4,fVar2,0);
      return;
    }
    if (param_3 != 3) {
      return;
    }
    local_70 = *param_2 + _DAT_1808ac74c;
    local_78 = *param_2 + DAT_1808ac7ec;
    local_74 = (param_2[1] + DAT_1808ac7ec) - DAT_1808ac34c;
    local_6c = (param_2[1] - DAT_1808ac7ec) + DAT_1808ac34c;
    FUN_1803fe590(local_78,&local_70,&local_78,local_6c,DAT_1808ac34c,0);
    local_64 = param_2[1];
    local_68 = *param_2 + DAT_1808ac710;
    local_78 = *param_2 - DAT_1808ac7ac;
    local_74 = (local_64 + fVar4) - fVar1;
    local_6c = (local_64 - fVar4) + fVar1;
    if ((param_4 & 0xff000000) == 0) {
      return;
    }
    local_70 = local_78;
    FUN_18000b9c0(param_1 + 0x50,&local_70);
    FUN_18000b9c0(param_1 + 0x50,&local_78);
    pfVar5 = &local_68;
  }
  FUN_18000b9c0(param_1 + 0x50,pfVar5);
  FUN_1803fd460(param_1,*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x50),param_4);
LAB_1803387ce:
  *(undefined4 *)(param_1 + 0x50) = 0;
  return;
}



/* ===== 1803387f0 FUN_1803387f0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_1803387f0(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
             char param_5,char param_6,float param_7)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 local_58;
  undefined4 local_54;
  
  lVar1 = DAT_180ca0a50;
  fVar8 = DAT_1808ac34c;
  if (param_6 == '\0') {
    uVar4 = 0;
    fVar6 = 0.0;
  }
  else {
    fVar6 = (float)*param_3 - _DAT_1808adde0;
    fVar7 = (float)((ulonglong)*param_3 >> 0x20) - _UNK_1808adde4;
    local_58 = 0x42000000;
    local_54 = 0x42000000;
    *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
    lVar1 = *(longlong *)(lVar1 + 0x14f8);
    *(ulonglong *)(lVar1 + 0x118) = CONCAT44(fVar7,fVar6);
    *(undefined1 *)(lVar1 + 0x159) = 1;
    cVar2 = FUN_180415e30(param_2,&local_58,0);
    if ((cVar2 == '\0') || (param_5 == '\0')) {
      uVar4 = 0;
    }
    else {
      uVar4 = 1;
    }
    cVar2 = FUN_1803dd930(0);
    if ((cVar2 == '\0') || (param_5 == '\0')) {
      fVar6 = 0.0;
    }
    else {
      fVar6 = fVar8;
    }
    uVar3 = FUN_1803e8900(*(undefined8 *)(DAT_180ca0a50 + 0x14f8),param_2);
    fVar6 = (float)FUN_1802b35f0(uVar3,fVar6);
    if (((*(int *)(DAT_180ca0a50 + 0x1578) == 0) ||
        (*(int *)(DAT_180ca0a50 + 0x1578) != *(int *)(DAT_180ca0a50 + 0x1ee8))) || (param_5 == '\0')
       ) {
      if (fVar6 <= 0.0) goto LAB_18033898d;
    }
    else {
      fVar6 = DAT_1808ac40c;
    }
    fVar7 = fVar8;
    if (fVar6 <= fVar8) {
      fVar7 = fVar6;
    }
    uVar5 = (int)(longlong)(fVar7 * param_7 * DAT_1808ac918 + DAT_1808ac1f4) << 0x18;
    if (uVar5 != 0) {
      FUN_1803fddf0(param_1,param_3,DAT_1808ac918,0,DAT_1808ac7bc,0x1f);
      FUN_1803fd460(param_1,*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x50),
                    uVar5 | 0xffffff);
      *(undefined4 *)(param_1 + 0x50) = 0;
    }
  }
LAB_18033898d:
  if (param_5 == '\0') {
    uVar5 = 0x3cffffff;
  }
  else {
    if (fVar6 <= fVar8) {
      fVar8 = fVar6;
    }
    uVar5 = FUN_1802b38e0(0xd7ffffff,0xffffffff,fVar8);
  }
  FUN_180338440(param_1,param_3,param_4,
                (int)(longlong)((float)(uVar5 >> 0x18) * param_7 + DAT_1808ac1f4) << 0x18 |
                uVar5 & 0xffffff);
  return uVar4;
}



/* ===== 180338a30 FUN_180338a30 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_180338a30(undefined8 *param_1,undefined8 param_2,float *param_3)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float local_res8 [4];
  undefined8 local_res18;
  float local_68;
  float local_64;
  float local_60;
  float local_5c [17];
  
  fVar7 = DAT_1808ac864;
  local_res18 = param_2;
  fVar4 = (float)FUN_180519080((float)param_2 / DAT_1808ac864);
  fVar4 = fVar4 * fVar7;
  local_res18 = CONCAT44(local_res18._4_4_,fVar4);
  fVar5 = (float)FUN_180519080(local_res18._4_4_ / fVar7);
  fVar5 = fVar5 * fVar7;
  _DAT_1811073f4 = 0;
  fVar7 = *param_3;
  local_5c[1] = 16.0;
  local_5c[2] = fVar7 * DAT_1808ac1f4;
  local_5c[3] = fVar7 - DAT_1808ac918;
  if ((float)((uint)(fVar4 - DAT_1808ac918) & _DAT_1808ade90) <= DAT_1808ac8b0) {
    pfVar1 = local_5c + 1;
    fVar4 = DAT_1808ac918;
LAB_180338b3a:
    DAT_1811073f8 = *pfVar1;
    _DAT_1811073f4 = 1;
  }
  else {
    fVar6 = (fVar7 - DAT_1808acbf4) * DAT_1808ac1f4;
    if ((float)((uint)(fVar4 - fVar6) & _DAT_1808ade90) <= DAT_1808ac8b0) {
      pfVar1 = local_5c + 2;
      fVar4 = fVar6;
      goto LAB_180338b3a;
    }
    fVar7 = (fVar7 - DAT_1808acbf4) - DAT_1808ac918;
    if ((float)((uint)(fVar4 - fVar7) & _DAT_1808ade90) <= DAT_1808ac8b0) {
      pfVar1 = local_5c + 3;
      fVar4 = fVar7;
      goto LAB_180338b3a;
    }
  }
  fVar7 = param_3[1];
  local_5c[1] = 16.0;
  local_5c[2] = fVar7 * DAT_1808ac1f4;
  local_5c[3] = fVar7 - DAT_1808ac918;
  if ((float)((uint)(fVar5 - DAT_1808ac918) & _DAT_1808ade90) <= DAT_1808ac8b0) {
    pfVar1 = local_5c + 1;
    fVar5 = DAT_1808ac918;
  }
  else {
    fVar6 = (fVar7 - _DAT_1808acb10) * DAT_1808ac1f4;
    if ((float)((uint)(fVar5 - fVar6) & _DAT_1808ade90) <= DAT_1808ac8b0) {
      pfVar1 = local_5c + 2;
      fVar5 = fVar6;
    }
    else {
      fVar7 = (fVar7 - _DAT_1808acb10) - DAT_1808ac918;
      if (DAT_1808ac8b0 < (float)((uint)(fVar5 - fVar7) & _DAT_1808ade90)) goto LAB_180338be9;
      pfVar1 = local_5c + 3;
      fVar5 = fVar7;
    }
  }
  DAT_1811073fc = *pfVar1;
  _DAT_1811073f4 = CONCAT11(1,DAT_1811073f4);
LAB_180338be9:
  local_68 = 0.0;
  local_60 = 0.0;
  local_64 = *param_3 - DAT_1808acbf4;
  pfVar1 = &local_68;
  if (0.0 <= *param_3 - DAT_1808acbf4) {
    pfVar1 = &local_64;
  }
  local_5c[0] = param_3[1] - _DAT_1808acb10;
  pfVar2 = local_res8;
  if (0.0 <= fVar4) {
    pfVar2 = (float *)&local_res18;
  }
  if (*pfVar1 <= fVar4 && fVar4 != *pfVar1) {
    pfVar2 = pfVar1;
  }
  pfVar1 = &local_60;
  if (0.0 <= param_3[1] - _DAT_1808acb10) {
    pfVar1 = local_5c;
  }
  pfVar3 = local_res8;
  if (0.0 <= fVar5) {
    pfVar3 = (float *)((longlong)&local_res18 + 4);
  }
  if (*pfVar1 <= fVar5 && fVar5 != *pfVar1) {
    pfVar3 = pfVar1;
  }
  *param_1 = CONCAT44(*pfVar3,*pfVar2);
  return param_1;
}



/* ===== 180338cb0 FUN_180338cb0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180338cb0(void)

{
  char cVar1;
  longlong lVar2;
  code *pcVar3;
  float fVar4;
  double *pdVar5;
  byte bVar6;
  char cVar7;
  char cVar8;
  undefined1 uVar9;
  char cVar10;
  int iVar11;
  uint uVar12;
  undefined4 uVar13;
  char **ppcVar14;
  longlong *plVar15;
  longlong lVar16;
  ULONGLONG UVar17;
  char *******pppppppcVar18;
  undefined8 uVar19;
  ulonglong uVar20;
  undefined8 *******pppppppuVar21;
  longlong lVar22;
  char **ppcVar23;
  float *pfVar24;
  undefined8 *puVar25;
  undefined8 *******pppppppuVar26;
  float *pfVar27;
  longlong *plVar28;
  ulonglong uVar29;
  longlong *plVar30;
  undefined1 *puVar31;
  float fVar32;
  int iVar33;
  ulonglong uVar34;
  longlong *plVar35;
  ulonglong *puVar36;
  char *pcVar37;
  ulonglong *puVar38;
  ulonglong *puVar39;
  undefined8 *puVar40;
  undefined8 *******pppppppuVar41;
  longlong *plVar42;
  ulonglong *puVar43;
  longlong *******ppppppplVar44;
  longlong *plVar45;
  bool bVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  uint uVar50;
  double dVar51;
  undefined8 uVar52;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar53 [12];
  float fVar54;
  float fVar55;
  float fVar56;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined4 uVar59;
  float fVar60;
  undefined4 uVar61;
  float fVar62;
  float fVar63;
  undefined1 auStack_458 [8];
  undefined1 auStack_450 [24];
  undefined8 *local_438;
  char *******local_430;
  char *******local_428;
  undefined8 local_420;
  ulonglong local_418;
  undefined4 local_410;
  undefined4 local_408;
  char local_3f8;
  undefined8 local_3e8;
  undefined8 local_3e0;
  undefined4 local_3d8;
  float local_3c8 [2];
  undefined8 local_3c0;
  char local_3b8;
  float local_3b4;
  undefined8 local_3b0;
  undefined8 local_3a8;
  char *local_3a0;
  undefined8 local_398;
  undefined4 *local_390;
  float local_388;
  float local_384;
  float local_380 [2];
  char *local_378;
  char *local_370;
  float local_368;
  float local_364;
  float local_360;
  undefined1 local_35c [8];
  float local_354;
  float local_350 [2];
  int local_348;
  undefined8 *******local_340;
  longlong lStack_338;
  longlong local_330;
  ulonglong local_328;
  longlong *******local_320;
  undefined8 uStack_318;
  ulonglong local_310;
  ulonglong local_308;
  undefined8 *******local_300;
  longlong lStack_2f8;
  longlong local_2f0;
  ulonglong local_2e8;
  double local_2e0;
  double local_2d8;
  longlong local_2d0;
  char local_2c8;
  char local_2c7;
  char local_2c6;
  char local_2c5;
  undefined4 local_2c4;
  undefined8 local_2b8;
  double local_2b0;
  undefined8 *******local_298;
  longlong ******pppppplStack_290;
  ulonglong local_288;
  ulonglong uStack_280;
  undefined8 local_278;
  longlong ******pppppplStack_270;
  ulonglong local_268;
  ulonglong uStack_260;
  undefined4 local_258;
  longlong local_250 [4];
  undefined8 local_230;
  undefined8 uStack_228;
  ulonglong local_220 [2];
  longlong local_210 [4];
  double local_1f0;
  double dStack_1e8;
  longlong local_1e0;
  char local_1d8 [4];
  undefined4 auStack_1d4 [3];
  char *******local_1c8 [3];
  ulonglong local_1b0;
  int local_1a8;
  longlong local_1a0;
  longlong local_198;
  longlong local_190;
  ulonglong local_188;
  undefined8 local_180;
  undefined8 local_178;
  ulonglong local_170;
  ulonglong local_168;
  longlong local_160;
  longlong local_158;
  longlong local_150;
  ulonglong local_148;
  double local_140;
  double dStack_138;
  longlong local_130;
  char local_128;
  char local_127;
  char local_126;
  char local_125;
  undefined4 local_124 [3];
  undefined1 local_118 [32];
  ulonglong local_f8;
  
  local_f8 = DAT_180919500 ^ (ulonglong)auStack_458;
  local_3b4 = 0.0;
  local_3f8 = DAT_180921140;
  if (DAT_180921140 == '\0') {
    local_348 = 0;
    local_258 = 0;
    local_250[1] = 0;
    local_250[2] = 0;
    local_250[3] = 0xf;
    local_250[0] = 0;
    uStack_228 = 0;
    local_220[0] = 0;
    local_220[1] = 0xf;
    local_230 = 0;
    local_210[1] = 0;
    local_210[2] = 0;
    local_210[3] = 0xf;
    local_210[0] = 0;
    local_1f0 = 0.0;
    dStack_1e8 = 0.0;
    local_1e0 = 0;
    _local_1d8 = 0;
    local_3c8[0] = 4.2039e-44;
    local_3b4 = 4.2039e-44;
    plVar15 = local_250;
    plVar45 = local_250 + 1;
    plVar28 = local_250 + 2;
    puVar36 = (ulonglong *)(local_250 + 3);
    puVar25 = &local_230;
    puVar40 = &uStack_228;
    puVar38 = local_220;
    puVar39 = local_220 + 1;
    plVar30 = local_210;
    plVar42 = local_210 + 1;
    plVar35 = local_210 + 2;
    puVar43 = (ulonglong *)(local_210 + 3);
    local_3c0 = &local_1f0;
    local_3a8 = &dStack_1e8;
    local_3b0 = &local_1e0;
    local_370 = local_1d8;
    local_378 = local_1d8 + 1;
    local_3a0 = local_1d8 + 2;
    local_398 = local_1d8 + 3;
    local_390 = auStack_1d4;
    fVar32 = 4.2039e-44;
  }
  else {
    FUN_1802117a0();
    local_3e8 = &DAT_1809f1930;
    iVar11 = FUN_1804e4d70(&DAT_1809f1930);
    if (iVar11 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1804e4a90(5);
    }
    if (DAT_1809f197c == 0x7fffffff) {
      DAT_1809f197c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1804e4a90(6);
    }
    local_1a8 = DAT_1809f1980;
    FUN_180024b50(&local_1a0,&DAT_1809f1988);
    FUN_180024b50(&local_180,&DAT_1809f19a8);
    FUN_180024b50(&local_160,&DAT_1809f19c8);
    local_140 = _DAT_1809f19e8;
    dStack_138 = dRam00000001809f19f0;
    local_130 = DAT_1809f19f8;
    local_128 = DAT_1809f1a00;
    local_127 = DAT_1809f1a01;
    local_126 = DAT_1809f1a02;
    local_125 = DAT_1809f1a03;
    local_124[0] = DAT_1809f1a04;
    FUN_1804e4e90(&DAT_1809f1930);
    local_3b4 = 1.43633e-42;
    plVar15 = &local_1a0;
    plVar45 = &local_198;
    plVar28 = &local_190;
    puVar36 = &local_188;
    puVar25 = &local_180;
    puVar40 = &local_178;
    puVar38 = &local_170;
    puVar39 = &local_168;
    plVar30 = &local_160;
    plVar42 = &local_158;
    plVar35 = &local_150;
    puVar43 = &local_148;
    local_3c0 = &local_140;
    local_3a8 = &dStack_138;
    local_3b0 = &local_130;
    local_370 = &local_128;
    local_378 = &local_127;
    local_3a0 = &local_126;
    local_398 = &local_125;
    local_390 = local_124;
    fVar32 = 1.43633e-42;
    local_348 = local_1a8;
  }
  local_340 = (undefined8 *******)*plVar15;
  lStack_338 = *plVar45;
  local_330 = *plVar28;
  local_328 = *puVar36;
  *plVar28 = 0;
  *puVar36 = 0xf;
  *(undefined1 *)plVar15 = 0;
  local_320 = (longlong *******)0x0;
  uStack_318 = 0;
  local_320 = (longlong *******)*puVar25;
  uStack_318 = *puVar40;
  local_310 = *puVar38;
  local_308 = *puVar39;
  *puVar38 = 0;
  *puVar39 = 0xf;
  *(undefined1 *)puVar25 = 0;
  local_300 = (undefined8 *******)0x0;
  lStack_2f8 = 0;
  local_300 = (undefined8 *******)*plVar30;
  lStack_2f8 = *plVar42;
  local_2f0 = *plVar35;
  local_2e8 = *puVar43;
  *plVar35 = 0;
  *puVar43 = 0xf;
  *(undefined1 *)plVar30 = 0;
  dVar51 = *local_3c0;
  local_2d8 = *local_3a8;
  local_2d0 = *local_3b0;
  local_2c8 = *local_370;
  local_2c7 = *local_378;
  local_2c6 = *local_3a0;
  local_2c5 = *local_398;
  local_2c4 = *local_390;
  local_2e0 = dVar51;
  if (((uint)fVar32 & 0x10) != 0) {
    fVar32 = (float)((uint)fVar32 & 0xffffffef);
    local_3b4 = fVar32;
    FUN_18000f890(local_210);
    FUN_18000f890(&local_230);
    dVar51 = (double)FUN_18000f890(local_250);
  }
  if (((uint)fVar32 & 1) != 0) {
    fVar32 = (float)((uint)fVar32 & 0xfffffffe);
    local_3b4 = fVar32;
    FUN_18000f890(&local_160);
    FUN_18000f890(&local_180);
    dVar51 = (double)FUN_18000f890(&local_1a0);
  }
  cVar1 = local_3f8;
  cVar8 = DAT_18091a190;
  fVar60 = DAT_1808ac34c;
  if ((local_348 == 0) || (local_330 == 0)) {
    cVar10 = '\x01';
  }
  else {
    cVar10 = '\0';
  }
  if ((local_3f8 == '\0') ||
     (((cVar10 != '\0' && (DAT_180921141 != '\0')) && (DAT_18091a190 == '\0')))) {
    fVar54 = 0.0;
  }
  else {
    fVar54 = DAT_1808ac34c;
  }
  uVar29 = 0xffffffff;
  pcVar37 = "media_fade";
  bVar6 = 0x6d;
  do {
    pcVar37 = pcVar37 + 1;
    if (((bVar6 == 0x23) && (*pcVar37 == 0x23)) && (pcVar37[1] == 0x23)) {
      uVar29 = 0xffffffff;
      pcVar37 = pcVar37 + 2;
    }
    else {
      uVar29 = (ulonglong)
               ((uint)(uVar29 >> 8) ^
               *(uint *)(&DAT_1806c25c0 + (uVar29 & 0xff ^ (ulonglong)bVar6) * 4));
    }
    bVar6 = *pcVar37;
  } while (bVar6 != 0);
  local_3a0 = (char *)CONCAT44(local_3a0._4_4_,~(uint)uVar29);
  local_3e8 = (undefined *)CONCAT44(fVar54,fVar54);
  local_3e0 = (ulonglong)(uint)fVar54;
  local_3d8 = 0xffffffff;
  local_3b8 = cVar10;
  FUN_18034a380(dVar51,&local_278,&local_3a0,&local_3e8);
  fVar47 = (float)FUN_1802b3660((longlong)local_278 + 0x14);
  lVar2 = DAT_180ca0a50;
  fVar49 = DAT_1808acbf4;
  fVar54 = DAT_1808ac864;
  puVar31 = auStack_458;
  local_378 = (char *)CONCAT44(local_378._4_4_,fVar47);
  if (fVar47 <= 0.0) {
    DAT_181107400 = '\0';
    DAT_1811073e8 = '\0';
    goto LAB_18033aef4;
  }
  local_3a8 = *(double **)(**(longlong **)(DAT_180ca0a50 + 0x2058) + 0x10);
  pdVar5 = local_3a8;
  fVar47 = fVar60;
  if (DAT_180cd0fd8 != '\0') {
    fVar47 = DAT_1809f7440;
  }
  local_384 = DAT_1808acda0;
  if (0.0 <= DAT_180921148) {
    local_384 = DAT_180921148 / fVar47;
  }
  local_388 = DAT_1808acda0;
  if (0.0 <= DAT_180921144) {
    local_388 = DAT_180921144 / fVar47;
  }
  fVar55 = (float)local_3a8;
  if (local_388 < 0.0) {
LAB_180339316:
    fVar48 = (float)local_3a8 - DAT_1808acbf4;
    local_3a8 = pdVar5;
    local_388 = (float)FUN_180519080((fVar48 - DAT_1808ac980) / DAT_1808ac864);
    local_388 = local_388 * fVar54;
    local_384 = DAT_1808acae0;
    pdVar5 = local_3a8;
  }
  else if (local_384 < 0.0) goto LAB_180339316;
  local_3a8 = pdVar5;
  fVar54 = DAT_1808ac1f4;
  local_368 = 0.0;
  local_364 = fVar55 - fVar49;
  pfVar27 = &local_368;
  if (0.0 <= local_364) {
    pfVar27 = &local_364;
  }
  local_360 = 0.0;
  pfVar24 = &local_360;
  if (0.0 <= local_388) {
    pfVar24 = &local_388;
  }
  if (*pfVar27 <= local_388 && local_388 != *pfVar27) {
    pfVar24 = pfVar27;
  }
  fVar48 = *pfVar24;
  local_390 = (undefined4 *)CONCAT44(local_390._4_4_,fVar48);
  local_388 = fVar48;
  local_35c._0_4_ = 0;
  fVar56 = local_3a8._4_4_;
  local_35c._4_4_ = local_3a8._4_4_ - _DAT_1808acb10;
  ppcVar23 = (char **)local_35c;
  if (0.0 <= local_3a8._4_4_ - _DAT_1808acb10) {
    ppcVar23 = (char **)((longlong)local_35c + 4);
  }
  local_3c8[0] = 0.0;
  ppcVar14 = (char **)local_3c8;
  if (0.0 <= local_384) {
    ppcVar14 = (char **)&local_384;
  }
  if (*(float *)ppcVar23 <= local_384 && local_384 != *(float *)ppcVar23) {
    ppcVar14 = ppcVar23;
  }
  fVar63 = *(float *)ppcVar14;
  if ((cVar8 == '\0') || (DAT_1811074e8 <= DAT_1808ac1f4)) {
    cVar8 = '\0';
    uVar13 = 0x333bb;
  }
  else {
    cVar8 = '\x01';
    uVar13 = 0x331bb;
  }
  *(float *)(lVar2 + 0x1f48) = fVar48;
  *(float *)(lVar2 + 0x1f4c) = fVar63;
  *(undefined8 *)(lVar2 + 0x1f50) = 0;
  *(undefined4 *)(lVar2 + 0x1f3c) = 1;
  *(uint *)(lVar2 + 0x1f38) = *(uint *)(lVar2 + 0x1f38) | 3;
  *(undefined4 *)(lVar2 + 0x1f58) = 0x43e60000;
  *(undefined4 *)(lVar2 + 0x1f5c) = 0x42e00000;
  *(undefined4 *)(lVar2 + 8000) = 1;
  local_3c0 = (double *)0x0;
  local_3f8 = cVar8;
  local_3c8[0] = fVar63;
  FUN_1803d89a0(2,&local_3c0);
  FUN_1803d8870(4);
  cVar7 = FUN_1803e4f20("##wl_media",0,uVar13);
  FUN_1803d8a40(2);
  if (cVar7 == '\0') {
    FUN_1803e75b0();
    puVar31 = auStack_458;
    goto LAB_18033aef4;
  }
  uVar52 = *(undefined8 *)(DAT_180ca0a50 + 0x11f0);
  local_3e0 = CONCAT44(*(undefined4 *)(DAT_180ca0a50 + 0x1200),
                       *(undefined4 *)(DAT_180ca0a50 + 0x1204));
  local_3e8 = (undefined *)uVar52;
  FUN_1803f6200(DAT_180ca0a50 + 0x1fe0,&local_3e8);
  FUN_1803e8680(uVar52);
  lVar22 = DAT_180ca0a50;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  lVar2 = *(longlong *)(*(longlong *)(lVar22 + 0x14f8) + 0x2c8);
  local_370 = (char *)CONCAT44(local_370._4_4_,*(undefined4 *)(lVar2 + 0x20));
  local_3b0 = (longlong *)CONCAT44(fVar63,fVar48);
  local_3a0 = (char *)CONCAT44(local_3a0._4_4_,fVar63 + _DAT_1808acb10);
  fVar49 = fVar48 + fVar49;
  local_398 = (char *)CONCAT44(local_398._4_4_,fVar49);
  local_3c0 = (double *)CONCAT44(fVar63 + _DAT_1808acb10,fVar49);
  if (cVar8 == '\0') {
    DAT_1811073e8 = '\0';
  }
  else {
    *(undefined1 *)(*(longlong *)(lVar22 + 0x14f8) + 0xce) = 1;
    lVar16 = *(longlong *)(lVar22 + 0x14f8);
    local_3b0 = (longlong *)CONCAT44(fVar63,fVar48);
    *(longlong **)(lVar16 + 0x118) = local_3b0;
    *(undefined1 *)(lVar16 + 0x159) = 1;
    *(uint *)(lVar22 + 0x1eb4) = *(uint *)(lVar22 + 0x1eb4) | 0x4000;
    local_2b8 = 0x42e0000043e60000;
    FUN_180415e30("##media_grab",&local_2b8,0);
    if (((*(int *)(DAT_180ca0a50 + 0x1578) == 0) ||
        (*(int *)(DAT_180ca0a50 + 0x1578) != *(int *)(DAT_180ca0a50 + 0x1ee8))) ||
       (*(int *)(DAT_180ca0a50 + 0x15a8) == *(int *)(DAT_180ca0a50 + 0x1ee8))) {
      if (DAT_1811073e8 != '\0') goto LAB_18033964c;
    }
    else {
      DAT_1811073e8 = '\x01';
      DAT_1811073ec = *(float *)(DAT_180ca0a50 + 0x110) - fVar48;
      DAT_1811073f0 = *(float *)(DAT_180ca0a50 + 0x114) - fVar63;
LAB_18033964c:
      if ((*(char *)(DAT_180ca0a50 + 0x118) == '\0') || (*(char *)(DAT_180ca0a50 + 0x1cc4) != '\0'))
      {
        DAT_1811073e8 = '\0';
      }
      else {
        FUN_180338a30(&local_2b8,
                      CONCAT44(*(float *)(DAT_180ca0a50 + 0x114) - DAT_1811073f0,
                               *(float *)(DAT_180ca0a50 + 0x110) - DAT_1811073ec),&local_3a8);
        fVar63 = local_2b8._4_4_;
        fVar48 = (float)local_2b8;
      }
    }
    cVar8 = FUN_1803dd930(0);
    if ((cVar8 != '\0') || (DAT_1811073e8 != '\0')) {
      *(undefined4 *)(DAT_180ca0a50 + 0x2500) = 2;
    }
  }
  DAT_180921144 = fVar48 * fVar47;
  DAT_180921148 = fVar63 * fVar47;
  local_2b8 = 0;
  FUN_1803fc200(lVar2,&local_2b8,&local_3a8,0);
  fVar49 = DAT_1808aca54;
  if (DAT_1811073e8 != '\0') {
    uVar52 = FUN_180519fe0();
    auVar57._8_4_ = (int)extraout_XMM0_Qb;
    auVar57._0_8_ = uVar52;
    auVar57._12_4_ = (int)((ulonglong)extraout_XMM0_Qb >> 0x20);
    if ((float)uVar52 < fVar55) {
      do {
        auVar53 = auVar57._4_12_;
        fVar47 = auVar57._0_4_ + fVar54;
        local_3e8 = (undefined *)CONCAT44(0x3f000000,fVar47);
        local_3e0 = CONCAT44(fVar56 + fVar54,fVar47);
        local_430 = (char *******)((ulonglong)local_430 & 0xffffffff00000000);
        local_438 = (undefined8 *)CONCAT44(local_438._4_4_,fVar60);
        FUN_1803fc600(lVar2,&local_3e8,2,0x7ffffff);
        auVar57._0_4_ = auVar57._0_4_ + fVar49;
        auVar57._4_12_ = auVar53;
      } while (auVar57._0_4_ < fVar55);
    }
    auVar58 = ZEXT816(0);
    if (0.0 < fVar56) {
      do {
        auVar53 = auVar58._4_12_;
        fVar47 = auVar58._0_4_ + fVar54;
        local_3e8 = (undefined *)CONCAT44(fVar47,0x3f000000);
        local_3e0 = CONCAT44(fVar47,fVar55 + fVar54);
        local_430 = (char *******)((ulonglong)local_430 & 0xffffffff00000000);
        local_438 = (undefined8 *)CONCAT44(local_438._4_4_,fVar60);
        FUN_1803fc600(lVar2,&local_3e8,2,0x7ffffff);
        auVar58._0_4_ = auVar58._0_4_ + fVar49;
        auVar58._4_12_ = auVar53;
      } while (auVar58._0_4_ < fVar56);
    }
    if (DAT_1811073f4 != '\0') {
      local_3e8 = (undefined *)CONCAT44(0x3f000000,DAT_1811073f8 + fVar54);
      local_3e0 = CONCAT44(fVar56 + fVar54,DAT_1811073f8 + fVar54);
      local_430 = (char *******)((ulonglong)local_430 & 0xffffffff00000000);
      local_438 = (undefined8 *)CONCAT44(local_438._4_4_,fVar60);
      FUN_1803fc600(lVar2,&local_3e8,2,0x96ffa496);
    }
    if (DAT_1811073f5 != '\0') {
      local_3e8 = (undefined *)CONCAT44(DAT_1811073fc + fVar54,0x3f000000);
      local_3e0 = CONCAT44(DAT_1811073fc + fVar54,fVar55 + fVar54);
      local_430 = (char *******)((ulonglong)local_430 & 0xffffffff00000000);
      local_438 = (undefined8 *)CONCAT44(local_438._4_4_,fVar60);
      FUN_1803fc600(lVar2,&local_3e8,2,0x96ffa496);
    }
  }
  fVar47 = DAT_1808ac934;
  fVar49 = DAT_1808ac20c;
  puVar31 = auStack_458;
  local_428._0_4_ = DAT_1808ac20c;
  local_430 = (char *******)((ulonglong)local_430 & 0xffffffff00000000);
  local_438 = (undefined8 *)CONCAT44(local_438._4_4_,DAT_1808ac934);
  FUN_1802b48f0(lVar2,&local_3b0,&local_3c0,DAT_1808ac934);
  fVar48 = local_3c8[0];
  fVar4 = (float)local_398;
  fVar63 = local_3a0._0_4_;
  fVar62 = local_390._0_4_;
  if ((((DAT_180cd0fdd != '\0') && (DAT_181107cd8 != 0)) && (0.0 < fVar55)) && (0.0 < fVar56)) {
    local_2b8 = CONCAT44(local_3a0._0_4_ / fVar56,(float)local_398 / fVar55);
    local_3a8 = (double *)CONCAT44(local_3c8[0] / fVar56,local_390._0_4_ / fVar55);
    local_3e8 = (undefined *)0x0;
    local_3e0 = DAT_181107cd8;
    local_420 = CONCAT44(local_420._4_4_,fVar47);
    local_428._0_4_ = -NAN;
    local_430 = (char *******)&local_2b8;
    local_438 = &local_3a8;
    FUN_1803febc0(lVar2,&local_3e8,&local_3b0,&local_3c0);
  }
  local_430 = (char *******)((ulonglong)local_430 & 0xffffffff00000000);
  local_438 = (undefined8 *)CONCAT44(local_438._4_4_,fVar47);
  FUN_1803fe590(lVar2,&local_3b0,&local_3c0,0xd70e0e0e);
  if (DAT_1811073e8 == '\0') {
    uVar12 = 0x12ffffff;
LAB_180339c2e:
    local_3c0 = (double *)CONCAT44(fVar48 + fVar54,fVar62 + fVar54);
    local_438 = (undefined8 *)((ulonglong)local_438 & 0xffffffff00000000);
    if ((*(byte *)(lVar2 + 0x30) & 1) == 0) {
      local_2b8 = CONCAT44(fVar63 - DAT_1808ac1e0,fVar4 - DAT_1808ac1e0);
    }
    else {
      local_2b8 = CONCAT44(fVar63 - fVar54,fVar4 - fVar54);
    }
    FUN_1803fe160(lVar2,&local_3c0,&local_2b8,fVar47);
    local_430 = (char *******)CONCAT44(local_430._4_4_,0x200);
    local_438 = (undefined8 *)CONCAT44(local_438._4_4_,fVar60);
    FUN_1803fc600(lVar2,*(undefined8 *)(lVar2 + 0x58),*(undefined4 *)(lVar2 + 0x50),uVar12);
    *(undefined4 *)(lVar2 + 0x50) = 0;
  }
  else {
    uVar12 = FUN_1802b38e0(0x12ffffff,DAT_1809f54bc);
    if ((uVar12 & 0xff000000) != 0) goto LAB_180339c2e;
  }
  uVar13 = DAT_1808ac7c0;
  fVar48 = fVar48 + DAT_1808aca90;
  fVar62 = fVar62 + DAT_1808aca90;
  local_3b0 = (longlong *)CONCAT44(fVar48,fVar62);
  bVar46 = local_348 == 3;
  if ((bVar46) && (DAT_180921142 != '\0')) {
    fVar55 = DAT_1808ac0c0;
    if (*(float *)(DAT_180ca0a50 + 0x40) <= DAT_1808ac0c0) {
      fVar55 = *(float *)(DAT_180ca0a50 + 0x40);
    }
    DAT_181107408 = DAT_181107408 + fVar55 * fVar49;
  }
  local_430 = (char *******)CONCAT44(local_430._4_4_,0x3f);
  local_438 = (undefined8 *)CONCAT44(local_438._4_4_,DAT_1808ac7c0);
  FUN_1803fddf0(lVar2,&local_3b0);
  FUN_1803fd460(lVar2,*(undefined8 *)(lVar2 + 0x58),*(undefined4 *)(lVar2 + 0x50),0xeb080808);
  *(undefined4 *)(lVar2 + 0x50) = 0;
  fVar55 = DAT_1808acdc4;
  fVar49 = DAT_1808aca20;
  fVar56 = DAT_1808aca28;
  do {
    if (fVar54 <= fVar56) {
      local_430._0_4_ = 0x3f;
      local_438._0_4_ = (float)uVar13;
      FUN_1803fddf0(lVar2,&local_3b0,fVar56 - fVar54,0);
      local_430 = (char *******)CONCAT44(local_430._4_4_,0x200);
      local_438 = (undefined8 *)CONCAT44(local_438._4_4_,fVar60);
      FUN_1803fc600(lVar2,*(undefined8 *)(lVar2 + 0x58),*(undefined4 *)(lVar2 + 0x50),0x6ffffff);
      *(undefined4 *)(lVar2 + 0x50) = 0;
    }
    fVar56 = fVar56 + fVar55;
  } while (fVar49 < fVar56);
  local_430._0_4_ = 0x3f;
  local_438._0_4_ = (float)uVar13;
  FUN_1803fddf0(lVar2,&local_3b0);
  local_430 = (char *******)CONCAT44(local_430._4_4_,0x200);
  local_438 = (undefined8 *)CONCAT44(local_438._4_4_,fVar60);
  FUN_1803fc600(lVar2,*(undefined8 *)(lVar2 + 0x58),*(undefined4 *)(lVar2 + 0x50),0x16ffffff);
  *(undefined4 *)(lVar2 + 0x50) = 0;
  if (cVar1 == '\0') {
LAB_180339f28:
    fVar49 = DAT_1808ac844;
    uVar13 = DAT_1808ac7bc;
    fVar60 = DAT_1808ac5e0;
    iVar11 = 4;
    do {
      fVar55 = (float)iVar11 * fVar60 + fVar49;
      if (fVar54 <= fVar55) {
        local_430 = (char *******)CONCAT44(local_430._4_4_,0x1f);
        local_438 = (undefined8 *)CONCAT44(local_438._4_4_,uVar13);
        FUN_1803fddf0(lVar2,&local_3b0,fVar55,0);
        FUN_1803fd460(lVar2,*(undefined8 *)(lVar2 + 0x58),*(undefined4 *)(lVar2 + 0x50),0x5ffffff);
        *(undefined4 *)(lVar2 + 0x50) = 0;
      }
      iVar11 = iVar11 + -1;
    } while (0 < iVar11);
    local_430 = (char *******)CONCAT44(local_430._4_4_,0x1f);
    local_438 = (undefined8 *)CONCAT44(local_438._4_4_,uVar13);
    FUN_1803fddf0(lVar2,&local_3b0);
    FUN_1803fd460(lVar2,*(undefined8 *)(lVar2 + 0x58),*(undefined4 *)(lVar2 + 0x50),0xf5ffffff);
  }
  else {
    plVar15 = (longlong *)FUN_180211850(&local_278);
    if (((longlong ******)*plVar15 == (longlong ******)0x0) || (cVar10 != '\0')) goto LAB_180339f28;
    iVar11 = (int)plVar15[1];
    iVar33 = *(int *)((longlong)plVar15 + 0xc);
    local_3a8 = (double *)0x0;
    local_3c0 = (double *)&DAT_3f8000003f800000;
    if ((iVar33 < iVar11) && (0 < iVar11)) {
      fVar54 = (fVar60 - (float)iVar33 / (float)iVar11) * fVar54;
      local_3a8 = (double *)(ulonglong)(uint)fVar54;
      local_3c0 = (double *)CONCAT44(0x3f800000,fVar60 - fVar54);
    }
    else if ((iVar11 < iVar33) && (0 < iVar33)) {
      fVar54 = (fVar60 - (float)iVar11 / (float)iVar33) * fVar54;
      local_3a8 = (double *)((ulonglong)(uint)fVar54 << 0x20);
      local_3c0 = (double *)CONCAT44(fVar60 - fVar54,0x3f800000);
    }
    iVar11 = *(int *)(lVar2 + 0x20);
    local_2b8 = CONCAT44(fVar48 + fVar49,fVar62 + fVar49);
    local_3e8 = (undefined *)CONCAT44(fVar48 - fVar49,fVar62 - fVar49);
    local_278 = (undefined8 *******)0x0;
    local_420 = CONCAT44(local_420._4_4_,fVar49);
    local_428._0_4_ = -NAN;
    local_430 = (char *******)&local_3c0;
    local_438 = &local_3a8;
    pppppplStack_270 = (longlong ******)*plVar15;
    FUN_1803febc0(lVar2,&local_278,&local_3e8,&local_2b8);
    if (DAT_180921142 != '\0') {
      fVar54 = (float)FUN_180517790();
      fVar49 = (float)FUN_180517200();
      if (iVar11 < *(int *)(lVar2 + 0x20)) {
        do {
          lVar16 = (longlong)iVar11;
          lVar22 = *(longlong *)(lVar2 + 0x28);
          fVar56 = *(float *)(lVar22 + lVar16 * 0x14) - fVar62;
          fVar55 = *(float *)(lVar22 + 4 + lVar16 * 0x14) - fVar48;
          *(float *)(lVar22 + lVar16 * 0x14) = (fVar56 * fVar49 + fVar62) - fVar55 * fVar54;
          *(float *)(lVar22 + 4 + lVar16 * 0x14) = fVar56 * fVar54 + fVar48 + fVar55 * fVar49;
          iVar11 = iVar11 + 1;
        } while (iVar11 < *(int *)(lVar2 + 0x20));
      }
    }
    local_430._0_4_ = 0x3f;
    local_438._0_4_ = (float)uVar13;
    FUN_1803fddf0(lVar2,&local_3b0);
    local_430._0_4_ = 0x200;
    local_438._0_4_ = DAT_1808ac428;
    FUN_1803fc600(lVar2,*(undefined8 *)(lVar2 + 0x58),*(undefined4 *)(lVar2 + 0x50),0x5a000000);
    *(undefined4 *)(lVar2 + 0x50) = 0;
    uVar13 = DAT_1808ac7b8;
    local_430._0_4_ = 0x17;
    local_438._0_4_ = (float)DAT_1808ac7b8;
    FUN_1803fddf0(lVar2,&local_3b0);
    FUN_1803fd460(lVar2,*(undefined8 *)(lVar2 + 0x58),*(undefined4 *)(lVar2 + 0x50),0xff0a0a0a);
    *(undefined4 *)(lVar2 + 0x50) = 0;
    local_430._0_4_ = 0x17;
    local_438._0_4_ = (float)uVar13;
    FUN_1803fddf0(lVar2,&local_3b0);
    local_430 = (char *******)CONCAT44(local_430._4_4_,0x200);
    local_438 = (undefined8 *)CONCAT44(local_438._4_4_,fVar60);
    FUN_1803fc600(lVar2,*(undefined8 *)(lVar2 + 0x58),*(undefined4 *)(lVar2 + 0x50),0x1effffff);
  }
  dVar51 = local_2e0;
  *(undefined4 *)(lVar2 + 0x50) = 0;
  fVar47 = (float)local_398 - fVar47;
  local_398 = (char *)CONCAT44(local_398._4_4_,fVar47);
  if ((bVar46) && (local_2d0 != 0)) {
    UVar17 = GetTickCount64();
    dVar51 = dVar51 + (double)(UVar17 - local_2d0) / DAT_1808ac730;
  }
  uVar13 = (undefined4)((ulonglong)dVar51 >> 0x20);
  if (local_2d8 <= 0.0) {
    uVar59 = SUB84(dVar51,0);
    uVar61 = uVar13;
  }
  else {
    uVar59 = SUB84(local_2d8,0);
    uVar61 = (int)((ulonglong)local_2d8 >> 0x20);
    if (dVar51 <= local_2d8) {
      uVar59 = SUB84(dVar51,0);
      uVar61 = uVar13;
    }
  }
  local_3c0 = (double *)CONCAT44(uVar61,uVar59);
  if (cVar10 == '\0') {
    if (local_2d8 <= 0.0) goto LAB_18033a083;
    uVar52 = FUN_180338340(local_118);
    local_3b4 = (float)((uint)fVar32 | 0x20);
    uVar19 = FUN_180338340(&local_2b8);
    local_3b4 = (float)((uint)fVar32 | 0x60);
    puVar25 = (undefined8 *)FUN_1800134a0(uVar19,&DAT_1806efbe8,3);
    local_278 = (undefined8 *******)*puVar25;
    pppppplStack_270 = (longlong ******)puVar25[1];
    local_268 = puVar25[2];
    uStack_260 = puVar25[3];
    puVar25[2] = 0;
    puVar25[3] = 0xf;
    *(undefined1 *)puVar25 = 0;
    fVar32 = (float)((uint)fVar32 | 0x2e0);
    local_3b4 = fVar32;
    FUN_180066820(local_1c8,&local_278,uVar52);
  }
  else {
    local_3c0 = (double *)0x0;
LAB_18033a083:
    FUN_180338340(local_1c8);
  }
  if (SUB41(fVar32,0) < '\0') {
    fVar32 = (float)((uint)fVar32 & 0xffffff7f);
    FUN_18000f890(&local_278);
  }
  if (((uint)fVar32 & 0x40) != 0) {
    fVar32 = (float)((uint)fVar32 & 0xffffffbf);
    FUN_18000f890(&local_2b8);
  }
  if (((uint)fVar32 & 0x20) != 0) {
    FUN_18000f890(local_118);
  }
  local_430 = (char *******)local_1c8;
  if (0xf < local_1b0) {
    local_430 = local_1c8[0];
  }
  local_408 = 0;
  local_418 = 0;
  local_420 = 0;
  local_428 = (char *******)0x0;
  local_438 = (undefined8 *)((ulonglong)local_438 & 0xffffffff00000000);
  FUN_18040a2f0(&local_3e8,*(undefined8 *)(DAT_180ca0a50 + 0x11f0));
  fVar32 = local_3c8[0];
  pppppppcVar18 = (char *******)local_1c8;
  if (0xf < local_1b0) {
    pppppppcVar18 = local_1c8[0];
  }
  fVar47 = fVar47 - (float)local_3e8;
  local_3e8 = (undefined *)CONCAT44(local_3c8[0] + DAT_1808ac964,fVar47);
  if ((pppppppcVar18 != (char *******)0x0) && (*(char *)pppppppcVar18 != '\0')) {
    local_278 = *(undefined8 ********)(lVar2 + 0x60);
    pppppplStack_270 = *(longlong *******)(lVar2 + 0x68);
    local_410 = 0;
    local_418 = local_418 & 0xffffffff00000000;
    local_420 = 0;
    local_430 = (char *******)&local_278;
    local_438 = (undefined8 *)CONCAT44(local_438._4_4_,0x96ffffff);
    local_428 = pppppppcVar18;
    FUN_18040a900(*(undefined8 *)(*(longlong *)(lVar2 + 0x38) + 0x18),lVar2);
  }
  uVar12 = _DAT_1808ade90;
  fVar49 = DAT_1808ac7ac;
  uVar13 = DAT_1808ac794;
  fVar54 = DAT_1808ac658;
  fVar60 = DAT_1808ac394;
  fVar47 = fVar47 - DAT_1808ac9e4;
  iVar11 = 0;
  iVar33 = 0x6e;
  if (bVar46) {
    iVar33 = 200;
  }
  fVar32 = fVar32 + DAT_1808ac9f4;
  do {
    if (bVar46) {
      uVar50 = FUN_180517790((float)*(double *)(DAT_180ca0a50 + 0x10) * DAT_1808ac750 +
                             (float)iVar11 * fVar60);
      fVar55 = (float)(uVar50 & uVar12) * fVar54;
    }
    else {
      fVar55 = 0.0;
    }
    local_3e8 = (undefined *)CONCAT44(fVar32 - fVar55,(float)iVar11 * fVar49 + fVar47);
    local_430 = (char *******)CONCAT44(local_430._4_4_,0xb);
    local_438 = (undefined8 *)CONCAT44(local_438._4_4_,uVar13);
    FUN_1803fddf0(lVar2,&local_3e8);
    FUN_1803fd460(lVar2,*(undefined8 *)(lVar2 + 0x58),*(undefined4 *)(lVar2 + 0x50),
                  iVar33 << 0x18 | 0xffffff);
    uVar29 = local_310;
    *(undefined4 *)(lVar2 + 0x50) = 0;
    fVar55 = DAT_1808ac1f4;
    iVar11 = iVar11 + 1;
  } while (iVar11 < 3);
  local_298 = (undefined8 *******)0x0;
  pppppplStack_290 = (longlong ******)0x0;
  if (cVar10 == '\0') {
    pppppppuVar41 = &local_340;
    if (0xf < local_328) {
      pppppppuVar41 = local_340;
    }
    local_288 = 0;
    uStack_280 = 0;
    ppppppplVar44 = (longlong *******)&local_320;
    if (0xf < local_308) {
      ppppppplVar44 = local_320;
    }
    if (0x7fffffffffffffff < local_310) {
                    /* WARNING: Subroutine does not return */
      FUN_180011990();
    }
    if (local_310 < 0x10) {
      local_288 = local_310;
      uStack_280 = 0xf;
      local_298 = (undefined8 *******)*ppppppplVar44;
      pppppplStack_290 = ppppppplVar44[1];
    }
    else {
      uVar20 = local_310 | 0xf;
      uVar34 = 0x7fffffffffffffff;
      if ((uVar20 < 0x8000000000000000) && (uVar34 = uVar20, uVar20 < 0x16)) {
        uVar34 = 0x16;
      }
      local_298 = (undefined8 *******)FUN_18000fb70(uVar34 + 1);
      local_288 = uVar29;
      uStack_280 = uVar34;
      FUN_180540530(local_298,ppppppplVar44,uVar29 + 1);
    }
  }
  else {
    pppppppuVar41 = (undefined8 *******)&DAT_18076a550;
    local_288 = 10;
    uStack_280 = 0xf;
    local_298 = DAT_18076a5f8;
    pppppplStack_290 = (longlong ******)(ulonglong)DAT_18076a600;
  }
  if (local_288 == 0) {
    pppppppuVar26 = &local_300;
    if (0xf < local_2e8) {
      pppppppuVar26 = local_300;
    }
    FUN_180029840(&local_298,pppppppuVar26,local_2f0);
    uVar34 = uStack_280;
    uVar29 = local_288;
    pppppppuVar26 = local_298;
    if (4 < local_288) {
      uVar20 = local_288 - 4;
      if (local_288 < uVar20) goto LAB_18033afa8;
      local_3e8 = (undefined *)4;
      if (local_288 - uVar20 < 4) {
        local_3e8 = (undefined *)(local_288 - uVar20);
      }
      pppppppuVar21 = &local_298;
      if (0xf < uStack_280) {
        pppppppuVar21 = local_298;
      }
      iVar11 = memcmp((void *)((longlong)pppppppuVar21 + uVar20),&DAT_18076a5ec,(size_t)local_3e8);
      if ((iVar11 == 0) && (3 < local_3e8)) {
        if (uVar29 < uVar20) {
          FUN_180028a50(&local_298,uVar20 - uVar29,0);
        }
        else {
          pppppppuVar21 = &local_298;
          if (0xf < uVar34) {
            pppppppuVar21 = pppppppuVar26;
          }
          local_288 = uVar20;
          *(undefined1 *)((longlong)pppppppuVar21 + uVar20) = 0;
        }
        uVar29 = local_288;
      }
    }
    pppppppuVar26 = &local_298;
    if (0xf < uStack_280) {
      pppppppuVar26 = local_298;
    }
    uVar34 = 0;
    if (uVar29 == 0) {
LAB_18033a59a:
      lVar22 = -1;
    }
    else {
      lVar22 = thunk_FUN_1804e6c50(pppppppuVar26,uVar29 + (longlong)pppppppuVar26,0x21);
      uVar34 = local_288;
      if (lVar22 == uVar29 + (longlong)pppppppuVar26) goto LAB_18033a59a;
      lVar22 = lVar22 - (longlong)pppppppuVar26;
    }
    puVar31 = auStack_458;
    if (lVar22 != -1) {
      uVar29 = lVar22 + 1;
      local_278 = (undefined8 *******)0x0;
      pppppplStack_270 = (longlong ******)0x0;
      local_268 = 0;
      uStack_260 = 0;
      if (uVar34 < uVar29) {
LAB_18033afa8:
                    /* WARNING: Subroutine does not return */
        FUN_18002a1a0();
      }
      lVar22 = -1;
      if (uVar34 - uVar29 != -1) {
        lVar22 = uVar34 - uVar29;
      }
      pppppppuVar26 = &local_298;
      if (0xf < uStack_280) {
        pppppppuVar26 = local_298;
      }
      FUN_1800133a0(&local_278,(longlong)pppppppuVar26 + uVar29,lVar22);
      if (0xf < uStack_280) {
        uVar29 = uStack_280 + 1;
        pppppppuVar26 = local_298;
        if (0xfff < uVar29) {
          pppppppuVar26 = (undefined8 *******)local_298[-1];
          if (0x1f < (ulonglong)((longlong)local_298 + (-8 - (longlong)pppppppuVar26))) {
            pcVar3 = (code *)swi(0x29);
            (*pcVar3)(5);
            puVar31 = auStack_450;
            goto LAB_18033a694;
          }
          uVar29 = uStack_280 + 0x28;
        }
        thunk_FUN_1803d64e0(pppppppuVar26,uVar29);
      }
      local_298 = local_278;
      pppppplStack_290 = pppppplStack_270;
      local_288 = local_268;
      uStack_280 = uStack_260;
      local_268 = 0;
      uStack_260 = 0xf;
      local_278 = (undefined8 *******)((ulonglong)local_278 & 0xffffffffffffff00);
      FUN_18000f890(&local_278);
      puVar31 = auStack_458;
    }
  }
LAB_18033a694:
  fVar54 = local_3c8[0];
  fVar60 = DAT_1808ac8e4;
  fVar47 = local_390._0_4_ + _DAT_1808acb10;
  local_390 = (undefined4 *)CONCAT44(local_390._4_4_,fVar47);
  *(float *)(puVar31 + 0x70) = fVar47;
  *(float *)(puVar31 + 0x74) = local_3c8[0] + DAT_1808ac950;
  puVar31[0x30] = 1;
  *(undefined8 ********)(puVar31 + 0x28) = pppppppuVar41;
  *(undefined4 *)(puVar31 + 0x20) = DAT_180960ec8;
  *(undefined8 *)(puVar31 + -8) = 0x18033a715;
  FUN_180337fb0(lVar2,puVar31 + 0x70);
  fVar32 = DAT_1808ac34c;
  fVar54 = fVar54 + _DAT_1808acaa0;
  fVar49 = (float)local_398;
  local_3b0 = (longlong *)CONCAT44(fVar54,(float)local_398 - fVar60);
  local_3a8 = (double *)CONCAT44(fVar54,(float)local_398 - DAT_1808aca90);
  local_2b8 = CONCAT44(fVar54,(float)local_398 - _DAT_1808acb00);
  pppppppuVar41 = &local_298;
  if (0xf < uStack_280) {
    pppppppuVar41 = local_298;
  }
  *(float *)(puVar31 + 0x70) = fVar47;
  *(float *)(puVar31 + 0x74) = (fVar54 - _DAT_1808ac7e8) - DAT_1808ac34c;
  puVar31[0x30] = 0;
  *(undefined8 ********)(puVar31 + 0x28) = pppppppuVar41;
  *(undefined4 *)(puVar31 + 0x20) = 0x78ffffff;
  *(undefined8 *)(puVar31 + -8) = 0x18033a7e4;
  FUN_180337fb0(lVar2,puVar31 + 0x70);
  cVar8 = local_3b8;
  if ((local_3b8 == '\0') && (local_2c8 != '\0')) {
    uVar9 = 1;
  }
  else {
    uVar9 = 0;
  }
  *(float *)(puVar31 + 0x30) = fVar32;
  cVar1 = puVar31[0x60];
  puVar31[0x28] = cVar1;
  puVar31[0x20] = uVar9;
  *(undefined8 *)(puVar31 + -8) = 0x18033a828;
  cVar10 = FUN_1803387f0(lVar2,"##media_previous",&local_2b8,0);
  if (cVar10 != '\0') {
    local_2b8 = (ulonglong)local_278 & 0xffffffff00000000;
    local_2b0 = 0.0;
    *(undefined8 *)(puVar31 + -8) = 0x18033a856;
    FUN_1802117a0();
    *(undefined **)(puVar31 + 0x70) = &DAT_1809f18e0;
    *(undefined8 *)(puVar31 + -8) = 0x18033a863;
    iVar11 = FUN_1804e4d70(&DAT_1809f18e0);
    if (iVar11 != 0) goto LAB_18033afae;
    if (DAT_1809f192c == 0x7fffffff) goto LAB_18033af71;
    *(undefined8 *)(puVar31 + -8) = 0x18033a888;
    FUN_180211ce0(extraout_XMM0_Qa,&local_2b8);
    *(undefined8 *)(puVar31 + -8) = 0x18033a891;
    FUN_1804e4e90(&DAT_1809f18e0);
  }
  if ((cVar8 == '\0') && (local_2c6 != '\0')) {
    uVar9 = 1;
  }
  else {
    uVar9 = 0;
  }
  *(float *)(puVar31 + 0x30) = fVar32;
  puVar31[0x28] = cVar1;
  puVar31[0x20] = uVar9;
  *(undefined8 *)(puVar31 + -8) = 0x18033a8cd;
  cVar10 = FUN_1803387f0(lVar2,"##media_toggle",&local_3a8,bVar46 + '\x01');
  if (cVar10 != '\0') {
    local_2b8 = CONCAT44(local_278._4_4_,1);
    local_2b0 = 0.0;
    *(undefined8 *)(puVar31 + -8) = 0x18033a8f4;
    FUN_1802117a0();
    *(undefined **)(puVar31 + 0x70) = &DAT_1809f18e0;
    *(undefined8 *)(puVar31 + -8) = 0x18033a901;
    iVar11 = FUN_1804e4d70(&DAT_1809f18e0);
    if (iVar11 != 0) goto LAB_18033afae;
    if (DAT_1809f192c == 0x7fffffff) goto LAB_18033af71;
    *(undefined8 *)(puVar31 + -8) = 0x18033a926;
    FUN_180211ce0(extraout_XMM0_Qa_00,&local_2b8);
    *(undefined8 *)(puVar31 + -8) = 0x18033a92f;
    FUN_1804e4e90(&DAT_1809f18e0);
  }
  if ((cVar8 == '\0') && (local_2c7 != '\0')) {
    uVar9 = 1;
  }
  else {
    uVar9 = 0;
  }
  *(float *)(puVar31 + 0x30) = fVar32;
  puVar31[0x28] = cVar1;
  puVar31[0x20] = uVar9;
  *(undefined8 *)(puVar31 + -8) = 0x18033a96a;
  cVar10 = FUN_1803387f0(lVar2,"##media_next",&local_3b0,3);
  if (cVar10 != '\0') {
    local_2b8 = CONCAT44(local_278._4_4_,2);
    local_2b0 = 0.0;
    *(undefined8 *)(puVar31 + -8) = 0x18033a991;
    FUN_1802117a0();
    *(undefined **)(puVar31 + 0x70) = &DAT_1809f18e0;
    *(undefined8 *)(puVar31 + -8) = 0x18033a99e;
    iVar11 = FUN_1804e4d70(&DAT_1809f18e0);
    if (iVar11 != 0) goto LAB_18033afae;
    if (DAT_1809f192c == 0x7fffffff) goto LAB_18033af71;
    *(undefined8 *)(puVar31 + -8) = 0x18033a9c3;
    FUN_180211ce0(extraout_XMM0_Qa_01,&local_2b8);
    *(undefined8 *)(puVar31 + -8) = 0x18033a9cc;
    FUN_1804e4e90(&DAT_1809f18e0);
  }
  lVar22 = DAT_180ca0a50;
  fVar60 = local_3a0._0_4_;
  fVar54 = local_3a0._0_4_ - DAT_1808ac964;
  if (local_2d8 <= 0.0) {
    fVar48 = 0.0;
  }
  else {
    fVar48 = (float)((double)local_3c0 / local_2d8);
  }
  local_380[0] = fVar48;
  if ((((cVar1 == '\0') || (cVar8 != '\0')) || (local_2c5 == '\0')) || (local_2d8 <= 0.0)) {
    bVar46 = false;
    if (cVar1 != '\0') goto LAB_18033aa2d;
    fVar56 = 0.0;
LAB_18033ac71:
    if (DAT_181107400 != '\0') {
      local_380[0] = DAT_181107404;
      fVar48 = DAT_181107404;
    }
  }
  else {
    bVar46 = true;
LAB_18033aa2d:
    *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
    lVar22 = *(longlong *)(lVar22 + 0x14f8);
    *(float *)(lVar22 + 0x118) = fVar47 - DAT_1808ac710;
    *(float *)(lVar22 + 0x11c) = fVar54 - DAT_1808ac7ec;
    *(undefined1 *)(lVar22 + 0x159) = 1;
    *(float *)(puVar31 + 0x70) = (fVar49 - fVar47) + DAT_1808ac838;
    *(undefined4 *)(puVar31 + 0x74) = 0x41880000;
    *(undefined8 *)(puVar31 + -8) = 0x18033aaae;
    FUN_180415e30("##media_bar",puVar31 + 0x70,0);
    local_3a0 = (char *)CONCAT44(local_3a0._4_4_,0x3f800000);
    local_3c8[0] = 0.0;
    local_3b4 = (*(float *)(DAT_180ca0a50 + 0x110) - fVar47) / (fVar49 - fVar47);
    ppcVar23 = (char **)local_3c8;
    if (0.0 <= local_3b4) {
      ppcVar23 = (char **)&local_3b4;
    }
    ppcVar14 = &local_3a0;
    if (local_3b4 <= fVar32) {
      ppcVar14 = ppcVar23;
    }
    if (bVar46) {
      *(undefined8 *)(puVar31 + -8) = 0x18033aaff;
      cVar8 = FUN_1803dd930(0);
      if ((cVar8 == '\0') &&
         ((*(int *)(DAT_180ca0a50 + 0x1578) == 0 ||
          (*(int *)(DAT_180ca0a50 + 0x1578) != *(int *)(DAT_180ca0a50 + 0x1ee8)))))
      goto LAB_18033ab22;
      fVar56 = fVar32;
    }
    else {
LAB_18033ab22:
      fVar56 = 0.0;
    }
    uVar52 = *(undefined8 *)(DAT_180ca0a50 + 0x14f8);
    *(undefined8 *)(puVar31 + -8) = 0x18033ab38;
    uVar13 = FUN_1803e8900(uVar52,"##media_bar");
    local_398 = (char *)(CONCAT44(local_398._4_4_,uVar13) ^ 0x5bd1e995);
    *(float *)(puVar31 + 0x70) = fVar56;
    *(float *)(puVar31 + 0x74) = fVar56;
    *(float *)(puVar31 + 0x78) = fVar56;
    *(undefined4 *)(puVar31 + 0x7c) = 0;
    local_3d8 = 0xffffffff;
    *(undefined8 *)(puVar31 + -8) = 0x18033ab76;
    FUN_18034a380(extraout_XMM0_Qa_02,&local_278,&local_398,puVar31 + 0x70);
    *(undefined8 *)(puVar31 + -8) = 0x18033ab94;
    fVar56 = (float)FUN_1802b3660((longlong)local_278 + 0x14);
    if (((bVar46) && (*(int *)(DAT_180ca0a50 + 0x1578) != 0)) &&
       (*(int *)(DAT_180ca0a50 + 0x1578) == *(int *)(DAT_180ca0a50 + 0x1ee8))) {
      DAT_181107400 = '\x01';
      DAT_181107404 = *(float *)ppcVar14;
LAB_18033abd6:
      if ((*(int *)(DAT_180ca0a50 + 0x1578) == 0) ||
         (*(int *)(DAT_180ca0a50 + 0x1578) != *(int *)(DAT_180ca0a50 + 0x1ee8))) {
        DAT_181107400 = '\0';
        if (!bVar46) goto LAB_18033ac89;
        local_2b8 = CONCAT44(local_278._4_4_,3);
        local_2b0 = (double)DAT_181107404 * local_2d8;
        *(undefined8 *)(puVar31 + -8) = 0x18033ac31;
        FUN_1802117a0();
        *(undefined **)(puVar31 + 0x70) = &DAT_1809f18e0;
        *(undefined8 *)(puVar31 + -8) = 0x18033ac3e;
        iVar11 = FUN_1804e4d70(&DAT_1809f18e0);
        if (iVar11 != 0) {
LAB_18033afae:
                    /* WARNING: Subroutine does not return */
          *(undefined **)(puVar31 + -8) = &UNK_18033afb8;
          FUN_1804e4a90(5);
        }
        if (DAT_1809f192c == 0x7fffffff) {
LAB_18033af71:
          DAT_1809f192c = DAT_1809f192c + -1;
                    /* WARNING: Subroutine does not return */
          *(undefined8 *)(puVar31 + -8) = 0x18033af83;
          FUN_1804e4a90(6);
        }
        *(undefined8 *)(puVar31 + -8) = 0x18033ac63;
        FUN_180211ce0(extraout_XMM0_Qa_03,&local_2b8);
        *(undefined8 *)(puVar31 + -8) = 0x18033ac6c;
        FUN_1804e4e90(&DAT_1809f18e0);
      }
      goto LAB_18033ac71;
    }
    if (DAT_181107400 != '\0') goto LAB_18033abd6;
  }
LAB_18033ac89:
  fVar63 = DAT_1808ac658;
  local_3a0 = (char *)CONCAT44(local_3a0._4_4_,fVar60 - DAT_1808ac93c);
  local_350[0] = 1.0;
  local_354 = 0.0;
  pfVar27 = &local_354;
  if (0.0 <= fVar48) {
    pfVar27 = local_380;
  }
  pfVar24 = local_350;
  if (fVar48 <= fVar32) {
    pfVar24 = pfVar27;
  }
  fVar32 = *pfVar24;
  fVar48 = fVar56 * DAT_1808ac428 * fVar55;
  fVar60 = fVar48 + (fVar60 - DAT_1808ac93c);
  *(float *)(puVar31 + 0x70) = fVar49 + 0.0;
  *(float *)(puVar31 + 0x74) = fVar60;
  fVar48 = fVar54 - fVar48;
  local_2b8 = CONCAT44(fVar48,fVar47 + 0.0);
  *(undefined4 *)(puVar31 + 0x28) = 0;
  *(float *)(puVar31 + 0x20) = DAT_1808ac658;
  *(undefined8 *)(puVar31 + -8) = 0x18033ad44;
  FUN_1803fe590(lVar2,&local_2b8,puVar31 + 0x70,0x16ffffff);
  fVar49 = fVar49 - local_390._0_4_;
  if (0.0 < fVar32) {
    *(float *)(puVar31 + 0x70) = fVar49 * fVar32 + local_390._0_4_;
    *(float *)(puVar31 + 0x74) = fVar60;
    local_2b8 = CONCAT44(fVar48,fVar47 + 0.0);
    *(undefined8 *)(puVar31 + -8) = 0x18033ad98;
    uVar13 = FUN_1802b38e0(0xc8ffffff,DAT_1809f54bc);
    *(undefined4 *)(puVar31 + 0x28) = 0;
    *(float *)(puVar31 + 0x20) = fVar63;
    *(undefined8 *)(puVar31 + -8) = 0x18033adbb;
    FUN_1803fe590(lVar2,&local_2b8,puVar31 + 0x70,uVar13);
  }
  if (0.0 < fVar56) {
    *(float *)(puVar31 + 0x70) = fVar49 * fVar32 + local_390._0_4_;
    *(float *)(puVar31 + 0x74) = (local_3a0._0_4_ + fVar54) * fVar55;
    if (fVar55 <= fVar56 * DAT_1808ac750) {
      *(undefined4 *)(puVar31 + 0x28) = 0xf;
      *(undefined4 *)(puVar31 + 0x20) = DAT_1808ac7a0;
      *(undefined8 *)(puVar31 + -8) = 0x18033ae22;
      FUN_1803fddf0(lVar2,puVar31 + 0x70);
      uVar13 = *(undefined4 *)(lVar2 + 0x50);
      uVar52 = *(undefined8 *)(lVar2 + 0x58);
      *(undefined8 *)(puVar31 + -8) = 0x18033ae38;
      FUN_1803fd460(lVar2,uVar52,uVar13,0xffffffff);
      *(undefined4 *)(lVar2 + 0x50) = 0;
    }
  }
  iVar33 = *(int *)(lVar2 + 0xa0);
  iVar11 = iVar33 + -1;
  *(int *)(lVar2 + 0xa0) = iVar11;
  if (iVar11 == 0) {
    puVar25 = (undefined8 *)(*(longlong *)(lVar2 + 0x38) + 0x34);
  }
  else {
    puVar25 = (undefined8 *)((longlong)(iVar33 + -2) * 0x10 + *(longlong *)(lVar2 + 0xa8));
  }
  uVar52 = puVar25[1];
  *(undefined8 *)(lVar2 + 0x60) = *puVar25;
  *(undefined8 *)(lVar2 + 0x68) = uVar52;
  *(undefined8 *)(puVar31 + -8) = 0x18033ae78;
  FUN_1803fbff0(lVar2);
  uVar13 = *(undefined4 *)(lVar2 + 0x20);
  *(undefined8 *)(puVar31 + -8) = 0x18033ae8c;
  FUN_1802b3c30(lVar2,(ulonglong)local_370 & 0xffffffff,uVar13,local_378._0_4_);
  lVar2 = DAT_180ca0a50;
  if (*(int *)(DAT_180ca0a50 + 0x1fe0) < 1) {
    *(undefined8 *)(puVar31 + -8) = 0x18033aeaa;
    FUN_1803ebc00("Calling PopFont() too many times!");
  }
  else {
    uVar52 = *(undefined8 *)
              (*(longlong *)(DAT_180ca0a50 + 0x1fe8) +
              ((longlong)*(int *)(DAT_180ca0a50 + 0x1fe0) + -1) * 0x10);
    *(undefined8 *)(puVar31 + -8) = 0x18033aece;
    FUN_1803e8680(uVar52);
    *(int *)(lVar2 + 0x1fe0) = *(int *)(lVar2 + 0x1fe0) + -1;
  }
  *(undefined8 *)(puVar31 + -8) = 0x18033aed9;
  FUN_1803e75b0();
  *(undefined8 *)(puVar31 + -8) = 0x18033aee6;
  FUN_18000f890(&local_298);
  *(undefined8 *)(puVar31 + -8) = 0x18033aef3;
  FUN_18000f890(local_1c8);
LAB_18033aef4:
  *(undefined8 *)(puVar31 + -8) = 0x18033aefd;
  FUN_18000f890(&local_300);
  *(undefined8 *)(puVar31 + -8) = 0x18033af06;
  FUN_18000f890(&local_320);
  *(undefined8 *)(puVar31 + -8) = 0x18033af0f;
  FUN_18000f890(&local_340);
  *(undefined8 *)(puVar31 + -8) = 0x18033af1e;
  return;
}



/* ===== 18033afc0 FUN_18033afc0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18033afc0(void)

{
  bool bVar1;
  undefined8 uVar2;
  int *piVar3;
  int *piVar4;
  float fVar5;
  undefined1 auStack_e8 [32];
  int local_c8 [2];
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined1 local_a8 [40];
  undefined1 local_80 [32];
  undefined1 local_60 [64];
  ulonglong local_20;
  
  local_20 = DAT_180919500 ^ (ulonglong)auStack_e8;
  if ((DAT_181107418 != 0) && (2 < *(int *)(DAT_180ca0a50 + 4) - _DAT_18110741c)) {
    DAT_181107418 = 0;
    LOCK();
    DAT_1809f177c = 0;
    UNLOCK();
  }
  local_c0 = CONCAT44(DAT_18091a19c,DAT_18091a198);
  local_b8 = DAT_18091a1a0;
  local_b4 = 0x3f800000;
  DAT_1809f54bc = FUN_1803d7f30(&local_c0);
  FUN_180311c60(DAT_18091a1a4);
  FUN_18031c170();
  FUN_1803267b0();
  if (((((DAT_18095ce00 != '\0') || (DAT_18095cf18 != '\0')) || (DAT_18095ce84 != '\0')) ||
      ((((DAT_18095ce9d != '\0' || (DAT_18095ce9e != '\0')) ||
        ((DAT_18095ce9f != '\0' || ((DAT_18095cea0 != '\0' || (DAT_18095cea1 != '\0')))))) ||
       (DAT_18095cea2 != '\0')))) ||
     ((((DAT_18095cea3 != '\0' || (DAT_18095cea4 != '\0')) || (DAT_18095cec8 != '\0')) ||
      ((0.0 < DAT_1809e9c90 || (0.0 < DAT_1809e9c70)))))) {
    uVar2 = FUN_180205b40(local_a8);
    FUN_180205a80(&DAT_1809f5880,uVar2);
    FUN_18000f890(local_60);
    FUN_1800bcd20(local_80);
    local_c0 = *(undefined8 *)(**(longlong **)(DAT_180ca0a50 + 0x2058) + 0x10);
    uVar2 = local_c0;
    local_c0 = uVar2;
    if ((0.0 < (float)local_c0) &&
       (local_c0._4_4_ = (float)((ulonglong)local_c0 >> 0x20), bVar1 = 0.0 < local_c0._4_4_, bVar1))
    {
      local_c8[1] = 0xfa;
      local_c8[0] = 0x4b;
      piVar4 = local_c8;
      if (0x4a < DAT_18091a1ac) {
        piVar4 = &DAT_18091a1ac;
      }
      piVar3 = local_c8 + 1;
      if (DAT_18091a1ac < 0xfb) {
        piVar3 = piVar4;
      }
      fVar5 = (float)*piVar3 / DAT_1808acb08;
      uVar2 = FUN_1803ddf50(**(undefined8 **)(DAT_180ca0a50 + 0x2058),0,"##Background");
      FUN_1800bbdf0(uVar2);
      FUN_1800cb830(uVar2,&local_c0,fVar5);
      FUN_1800b95d0(uVar2,&local_c0,fVar5);
      FUN_1800c5490(uVar2,&local_c0,fVar5);
    }
  }
  else {
    FUN_180203580();
  }
  local_c8[0] = 0xfa;
  local_c8[1] = 0x4b;
  piVar4 = local_c8 + 1;
  if (0x4a < DAT_18091a1ac) {
    piVar4 = &DAT_18091a1ac;
  }
  piVar3 = local_c8;
  if (DAT_18091a1ac < 0xfb) {
    piVar3 = piVar4;
  }
  FUN_1803647e0((float)*piVar3 / DAT_1808acb08);
  FUN_180338cb0();
  FUN_1803211b0();
  FUN_180364ab0();
  FUN_1803d87f0(0x20);
  FUN_1803d8a40(0xd);
  return;
}



/* ===== 18033b2a0 FUN_18033b2a0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18033b2a0(void)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  byte *****pppppbVar4;
  undefined1 auVar5 [16];
  bool bVar6;
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  size_t sVar10;
  char cVar11;
  byte bVar12;
  int iVar13;
  undefined4 uVar14;
  longlong lVar15;
  float *pfVar16;
  float *pfVar17;
  undefined1 (*pauVar18) [16];
  ulonglong *puVar19;
  longlong lVar20;
  ulonglong uVar21;
  undefined1 auVar22 [8];
  ulonglong uVar23;
  undefined8 *_Buf2;
  byte *****pppppbVar24;
  uint uVar25;
  char *pcVar26;
  undefined1 *puVar27;
  undefined1 *puVar28;
  undefined1 *puVar29;
  undefined1 *puVar30;
  byte *****pppppbVar31;
  char *pcVar32;
  float *pfVar33;
  undefined8 *puVar34;
  float fVar35;
  undefined8 uVar36;
  undefined1 auVar37 [16];
  undefined8 extraout_XMM0_Qb;
  float fVar38;
  undefined1 auVar39 [16];
  float fVar40;
  undefined1 auVar41 [16];
  float fVar42;
  float fVar43;
  float fVar44;
  undefined8 uStack_250;
  undefined1 auStack_248 [8];
  undefined1 auStack_240 [24];
  undefined8 local_228;
  float local_220;
  undefined1 *local_218;
  float local_208 [6];
  undefined8 local_1f0;
  float local_1e0;
  float local_1dc;
  float local_1d8;
  float local_1d4;
  ulonglong local_1d0 [3];
  undefined1 local_1b8 [8];
  float fStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  ulonglong uStack_1a0;
  undefined8 local_198;
  ulonglong uStack_190;
  ulonglong local_188;
  ulonglong uStack_180;
  undefined1 local_178 [4];
  undefined8 local_174;
  undefined8 uStack_16c;
  undefined8 local_164;
  undefined8 uStack_15c;
  byte *****local_150 [3];
  ulonglong local_138;
  undefined1 local_130 [32];
  undefined1 local_110 [32];
  undefined1 local_f0 [8];
  undefined8 uStack_e8;
  ulonglong local_d8;
  
  local_d8 = DAT_180919500 ^ (ulonglong)auStack_248;
  FUN_18032a570();
  fVar35 = (float)FUN_18033c790();
  FUN_1803647e0();
  fVar9 = DAT_1808ac34c;
  local_f0._4_4_ = DAT_18091a19c;
  local_f0._0_4_ = DAT_18091a198;
  uStack_e8._0_4_ = DAT_18091a1a0;
  uStack_e8._4_4_ = 0x3f800000;
  DAT_1809f54bc = FUN_1803d7f30(local_f0);
  DAT_1809f3bdc = FUN_1802b38e0(DAT_1809f54bc,0xffffffff);
  FUN_180311c60(DAT_18091a1a4);
  if (DAT_180cd0e6c == '\0') {
    FUN_180315290();
  }
  fVar8 = DAT_1808acc30;
  pcVar26 = "neverlose";
  if ((0.0 < DAT_180ca0944) && (DAT_180ca0944 != fVar35)) {
    uVar23 = 0xffffffff;
    uVar25 = 0xffffffff;
    pcVar32 = "neverlose";
    bVar12 = s_neverlose_1806e9068[0];
    while (pcVar32 = pcVar32 + 1, bVar12 != 0) {
      if (((bVar12 == 0x23) && (*pcVar32 == 0x23)) && (pcVar32[1] == 0x23)) {
        uVar23 = 0xffffffff;
        pcVar32 = pcVar32 + 2;
      }
      else {
        uVar23 = (ulonglong)
                 ((uint)(uVar23 >> 8) ^
                 *(uint *)(&DAT_1806c25c0 + (uVar23 & 0xff ^ (ulonglong)bVar12) * 4));
      }
      uVar25 = (uint)uVar23;
      bVar12 = *pcVar32;
    }
    lVar15 = FUN_1803e1e50(~uVar25);
    lVar20 = DAT_180ca0a50;
    if (lVar15 != 0) {
      local_1e0 = 0.0;
      local_1dc = *(float *)(**(longlong **)(DAT_180ca0a50 + 0x2058) + 0x14) - DAT_1809f3bd8;
      pfVar33 = &local_1e0;
      if (0.0 <= local_1dc) {
        pfVar33 = &local_1dc;
      }
      local_1f0 = local_1f0 & 0xffffffff00000000;
      fVar38 = (DAT_180ca0944 / fVar35) * *(float *)(lVar15 + 0x2c);
      local_f0._0_4_ = fVar38;
      local_1d8 = 0.0;
      local_1d4 = *(float *)(**(longlong **)(DAT_180ca0a50 + 0x2058) + 0x10) - fVar8;
      pfVar17 = &local_1d8;
      if (0.0 <= local_1d4) {
        pfVar17 = &local_1d4;
      }
      local_208[2] = 0.0;
      fVar40 = (DAT_180ca0944 / fVar35) * *(float *)(lVar15 + 0x28);
      local_1b8._0_4_ = fVar40;
      *(uint *)(DAT_180ca0a50 + 0x1f38) = *(uint *)(DAT_180ca0a50 + 0x1f38) | 1;
      pfVar16 = local_208 + 2;
      if (0.0 <= fVar40) {
        pfVar16 = (float *)local_1b8;
      }
      if (*pfVar17 <= fVar40 && fVar40 != *pfVar17) {
        pfVar16 = pfVar17;
      }
      *(float *)(lVar20 + 0x1f48) = *pfVar16;
      pfVar17 = (float *)&local_1f0;
      if (0.0 <= fVar38) {
        pfVar17 = (float *)local_f0;
      }
      if (*pfVar33 <= fVar38 && fVar38 != *pfVar33) {
        pfVar17 = pfVar33;
      }
      *(float *)(lVar20 + 0x1f4c) = *pfVar17;
      *(undefined8 *)(lVar20 + 0x1f50) = 0;
      *(undefined4 *)(lVar20 + 0x1f3c) = 1;
    }
  }
  uVar14 = 0xbb;
  if (DAT_18091a190 == '\0') {
    uVar14 = 0x302bb;
  }
  DAT_180ca0944 = fVar35;
  FUN_180322c20();
  uVar36 = FUN_18030dca0(local_1d0);
  fVar35 = DAT_1808aca8c;
  uVar23 = 0;
  _DAT_1809f4bbc = DAT_1808ac950;
  if ((longlong)(local_1d0[1] - local_1d0[0]) >> 5 != 0) {
    do {
      _DAT_1809f4bbc = _DAT_1809f4bbc + DAT_1808ac8dc;
      if (uVar23 != 0) {
        _DAT_1809f4bbc = _DAT_1809f4bbc + DAT_1808ac950;
      }
      lVar20 = *(longlong *)(uVar23 * 0x20 + 0x10 + local_1d0[0]) -
               *(longlong *)(uVar23 * 0x20 + 8 + local_1d0[0]);
      uVar21 = lVar20 >> 8;
      auVar37._4_12_ = SUB1612(ZEXT816(0),4);
      if ((longlong)uVar21 < 0) {
        fVar38 = (float)(uVar21 >> 1 | (ulonglong)((uint)((ulonglong)lVar20 >> 8) & 1));
        fVar38 = fVar38 + fVar38;
      }
      else {
        fVar38 = (float)(longlong)uVar21;
      }
      auVar37._0_4_ = fVar38 * DAT_1808aca3c;
      uVar36 = auVar37._0_8_;
      _DAT_1809f4bbc = _DAT_1809f4bbc + auVar37._0_4_;
      uVar23 = uVar23 + 1;
    } while (uVar23 < (ulonglong)((longlong)(local_1d0[1] - local_1d0[0]) >> 5));
  }
  if (_DAT_1809f4bbc <= DAT_1808acbfc) {
    _DAT_1809f4bbc = DAT_1808acbfc;
  }
  local_1b8._4_4_ = _DAT_1809f4bbc + DAT_1808aca8c + DAT_1808aca8c + DAT_1808ac540 + 0.0;
  uVar23 = 0xffffffff;
  pcVar32 = "menu_height";
  bVar12 = 0x6d;
  do {
    pcVar32 = pcVar32 + 1;
    if (((bVar12 == 0x23) && (*pcVar32 == 0x23)) && (pcVar32[1] == 0x23)) {
      uVar23 = 0xffffffff;
      pcVar32 = pcVar32 + 2;
    }
    else {
      uVar23 = (ulonglong)
               ((uint)(uVar23 >> 8) ^
               *(uint *)(&DAT_1806c25c0 + (uVar23 & 0xff ^ (ulonglong)bVar12) * 4));
    }
    bVar12 = *pcVar32;
  } while (bVar12 != 0);
  local_f0._0_4_ = ~(uint)uVar23;
  local_1b8._0_4_ = local_1b8._4_4_;
  fStack_1b0 = (float)local_1b8._4_4_;
  uStack_1ac = 0;
  local_1a8 = CONCAT44(local_1a8._4_4_,0xffffffff);
  FUN_18034a380(uVar36,&local_1f0,local_f0,local_1b8);
  uVar36 = FUN_1802b3660(local_1f0 + 0x14);
  auVar41._8_4_ = (int)extraout_XMM0_Qb;
  auVar41._0_8_ = uVar36;
  auVar41._12_4_ = (int)((ulonglong)extraout_XMM0_Qb >> 0x20);
  DAT_1809f3bd8 = (float)uVar36;
  uVar23 = 0xffffffff;
  uVar25 = 0xffffffff;
  bVar12 = s_neverlose_1806e9068[0];
  while (pcVar26 = pcVar26 + 1, bVar12 != 0) {
    if (((bVar12 == 0x23) && (*pcVar26 == 0x23)) && (pcVar26[1] == 0x23)) {
      uVar23 = 0xffffffff;
      pcVar26 = pcVar26 + 2;
    }
    else {
      uVar23 = (ulonglong)
               ((uint)(uVar23 >> 8) ^
               *(uint *)(&DAT_1806c25c0 + (uVar23 & 0xff ^ (ulonglong)bVar12) * 4));
    }
    uVar25 = (uint)uVar23;
    bVar12 = *pcVar26;
  }
  lVar15 = FUN_1803e1e50(~uVar25);
  lVar20 = DAT_180ca0a50;
  if (lVar15 == 0) {
    uVar36 = *(undefined8 *)(**(longlong **)(DAT_180ca0a50 + 0x2058) + 0x10);
    *(uint *)(DAT_180ca0a50 + 0x1f38) = *(uint *)(DAT_180ca0a50 + 0x1f38) | 1;
    *(ulonglong *)(lVar20 + 0x1f48) =
         CONCAT44((float)((ulonglong)uVar36 >> 0x20) * _UNK_1808ad9f4,(float)uVar36 * _DAT_1808ad9f0
                 );
    *(undefined4 *)(lVar20 + 0x1f50) = 0x3f000000;
    *(undefined4 *)(lVar20 + 0x1f54) = 0x3f000000;
    *(undefined4 *)(lVar20 + 0x1f3c) = 1;
  }
  *(uint *)(lVar20 + 0x1f38) = *(uint *)(lVar20 + 0x1f38) | 2;
  *(undefined4 *)(lVar20 + 0x1f58) = 0x44480000;
  *(int *)(lVar20 + 0x1f5c) = auVar41._0_4_;
  *(undefined4 *)(lVar20 + 8000) = 1;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uStack_e8;
  _local_f0 = auVar5 << 0x40;
  FUN_1803d89a0(2,local_f0);
  FUN_1803d8870(4);
  cVar11 = FUN_1803e4f20("neverlose",0,uVar14);
  FUN_1803d8a40(2);
  lVar20 = DAT_180ca0a50;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  uVar14 = DAT_18110735c;
  lVar20 = *(longlong *)(lVar20 + 0x14f8);
  DAT_181107294 = *(undefined4 *)(lVar20 + 0x28);
  LOCK();
  UNLOCK();
  DAT_18110735c = *(undefined4 *)(lVar20 + 0x2c);
  LOCK();
  UNLOCK();
  DAT_181107494 = *(undefined4 *)(lVar20 + 0x30);
  LOCK();
  UNLOCK();
  DAT_1811073a8 = *(undefined4 *)(lVar20 + 0x34);
  LOCK();
  UNLOCK();
  LOCK();
  DAT_180cd0f04 = 1;
  UNLOCK();
  if (cVar11 == '\0') {
    FUN_1803e75b0(uVar14);
    FUN_1802cfd60();
    puVar30 = auStack_248;
    goto LAB_18033c3fb;
  }
  lVar20 = DAT_181107a08;
  if (DAT_181107a08 == 0) {
    lVar20 = *(longlong *)(DAT_180ca0a50 + 0x11f0);
  }
  uStack_e8._0_4_ = *(undefined4 *)(DAT_180ca0a50 + 0x1204);
  local_f0 = (undefined1  [8])*(undefined8 *)(DAT_180ca0a50 + 0x11f0);
  uStack_e8._4_4_ = *(undefined4 *)(DAT_180ca0a50 + 0x1200);
  FUN_1803f6200(DAT_180ca0a50 + 0x1fe0,local_f0);
  FUN_1803e8680(lVar20);
  lVar15 = DAT_180ca0a50;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  lVar20 = *(longlong *)(*(longlong *)(lVar15 + 0x14f8) + 0x2c8);
  uVar23 = *(ulonglong *)(*(longlong *)(lVar15 + 0x14f8) + 0x28);
  local_1f0._4_4_ = (float)(uVar23 >> 0x20);
  local_f0._4_4_ = local_1f0._4_4_ + DAT_1809f3bd8;
  local_f0._0_4_ = (float)uVar23 + fVar8;
  local_220 = 0.0;
  local_228._0_4_ = DAT_180960ed8;
  local_1f0 = uVar23;
  FUN_1802b4c40(lVar20,&local_1f0,local_f0,DAT_1808ac918);
  fVar8 = DAT_1808ac1f4;
  fVar38 = (float)local_1f0;
  fVar43 = (float)local_1f0 + DAT_1808acb4c;
  fVar40 = local_1f0._4_4_;
  local_208[1] = local_1f0._4_4_;
  local_208[4] = (float)local_f0._0_4_;
  local_208[5] = (float)local_f0._4_4_;
  _local_1b8 = _DAT_1808adde0;
  local_208[0] = fVar43;
  if ((((lVar20 != 0) && (0xffffff < DAT_180960eb8)) && (fVar43 < (float)local_f0._0_4_)) &&
     (local_1f0._4_4_ < (float)local_f0._4_4_)) {
    fVar44 = (float)local_f0._4_4_ - local_1f0._4_4_;
    if ((float)local_f0._0_4_ - fVar43 <= (float)local_f0._4_4_ - local_1f0._4_4_) {
      fVar44 = (float)local_f0._0_4_ - fVar43;
    }
    auVar39._0_4_ = fVar44 * DAT_1808ac1f4;
    auVar39._4_4_ = auVar39._0_4_;
    auVar39._8_4_ = auVar39._0_4_;
    auVar39._12_4_ = auVar39._0_4_;
    _local_f0 = minps(auVar39,_DAT_1808adde0);
    if (local_f0._0_4_ <= 0.0) {
      if (((local_f0._4_4_ <= 0.0) && (local_f0._8_4_ <= 0.0)) && (local_f0._12_4_ <= 0.0)) {
        local_220 = 0.0;
        local_228 = (undefined1 *)((ulonglong)local_228._4_4_ << 0x20);
        FUN_1803fe590(lVar20,local_208,local_208 + 4);
        goto LAB_18033ba0c;
      }
    }
    local_178[0] = 0;
    local_174 = 0;
    uStack_16c = 0;
    local_164 = 0;
    uStack_15c = 0;
    local_218 = local_178;
    local_220 = fVar9;
    local_228 = local_f0;
    FUN_18036b620(lVar20,local_208,local_208 + 4);
  }
LAB_18033ba0c:
  local_218 = (undefined1 *)CONCAT44(local_218._4_4_,fVar9);
  local_220 = fVar9;
  local_228 = local_1b8;
  FUN_18036bcb0(lVar20,local_208,local_208 + 4,DAT_180960eec);
  FUN_1803267b0();
  fVar42 = fVar40 + 0.0;
  local_f0._4_4_ = fVar42;
  local_f0._0_4_ = fVar38;
  FUN_180310220(lVar20,local_f0);
  fVar44 = DAT_1808ac864;
  local_208[3] = fVar42 + fVar35;
  fVar35 = local_208[3] + fVar9;
  local_1b8._4_4_ = fVar35;
  local_1b8._0_4_ = fVar43 - DAT_1808ac864;
  local_208[2] = fVar38 + DAT_1808ac864;
  local_220 = 0.0;
  local_228 = (undefined1 *)((ulonglong)local_228 & 0xffffffff00000000);
  FUN_1803fe590(lVar20,local_208 + 2,local_1b8,DAT_180960f48);
  FUN_18030fa10(lVar20,local_f0);
  local_208[3] = fVar35 + _DAT_1809f4bbc;
  local_1b8._4_4_ = local_208[3] + fVar9;
  local_1b8._0_4_ = ((float)local_f0._0_4_ + DAT_1808acb4c) - fVar44;
  local_208[2] = (float)local_f0._0_4_ + fVar44;
  local_220 = 0.0;
  local_228 = (undefined1 *)((ulonglong)local_228 & 0xffffffff00000000);
  FUN_1803fe590(lVar20,local_208 + 2,local_1b8);
  FUN_18031f170(lVar20,local_f0);
  FUN_180336ab0(lVar20,local_208,local_208 + 4);
  uVar23 = DAT_1809f7418;
  sVar10 = DAT_1809f7410;
  puVar34 = DAT_1809f7400;
  uVar21 = 0xffffffff;
  pcVar26 = "page_fade";
  bVar12 = 0x70;
  do {
    pcVar26 = pcVar26 + 1;
    if (((bVar12 == 0x23) && (*pcVar26 == 0x23)) && (pcVar26[1] == 0x23)) {
      uVar21 = 0xffffffff;
      pcVar26 = pcVar26 + 2;
    }
    else {
      uVar21 = (ulonglong)
               ((uint)(uVar21 >> 8) ^
               *(uint *)(&DAT_1806c25c0 + (uVar21 & 0xff ^ (ulonglong)bVar12) * 4));
    }
    bVar12 = *pcVar26;
  } while (bVar12 != 0);
  uVar25 = ~(uint)uVar21;
  pppppbVar31 = (byte *****)&DAT_1809f5b70;
  if (DAT_1811076c0 == DAT_181106f10) {
    pppppbVar24 = (byte *****)&DAT_1809f5b70;
    if (0xf < DAT_1809f5b88) {
      pppppbVar24 = DAT_1809f5b70;
    }
    puVar27 = &DAT_1809f73e0;
    if (0xf < DAT_1809f73f8) {
      puVar27 = _DAT_1809f73e0;
    }
    if ((DAT_1809f73f0 != DAT_1809f5b80) ||
       ((DAT_1809f73f0 != 0 && (iVar13 = memcmp(puVar27,pppppbVar24,DAT_1809f73f0), iVar13 != 0))))
    goto LAB_18033bc55;
    _Buf2 = &DAT_1809f7400;
    if (0xf < uVar23) {
      _Buf2 = puVar34;
    }
    puVar34 = &DAT_1809f6f38;
    if (0xf < DAT_1809f6f50) {
      puVar34 = DAT_1809f6f38;
    }
    if ((DAT_1809f6f48 != sVar10) ||
       ((DAT_1809f6f48 != 0 && (iVar13 = memcmp(puVar34,_Buf2,DAT_1809f6f48), iVar13 != 0))))
    goto LAB_18033bc55;
    bVar6 = false;
  }
  else {
LAB_18033bc55:
    bVar6 = true;
  }
  uVar23 = (((((ulonglong)(uVar25 & 0xff) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
             (ulonglong)(uVar25 >> 8 & 0xff)) * 0x100000001b3 ^ (ulonglong)(uVar25 >> 0x10 & 0xff))
            * 0x100000001b3 ^ (ulonglong)(uVar25 >> 0x18)) * 0x100000001b3 & DAT_181107640;
  lVar15 = *(longlong *)(DAT_181107628 + 8 + uVar23 * 0x10);
  if (lVar15 == DAT_181107618) {
LAB_18033bce1:
    lVar15 = 0;
  }
  else {
    uVar1 = *(uint *)(lVar15 + 0x10);
    while (uVar25 != uVar1) {
      if (lVar15 == *(longlong *)(DAT_181107628 + uVar23 * 0x10)) goto LAB_18033bce1;
      lVar15 = *(longlong *)(lVar15 + 8);
      uVar1 = *(uint *)(lVar15 + 0x10);
    }
  }
  if ((lVar15 == 0) || (lVar15 == DAT_181107618)) {
    fVar35 = fVar9;
  }
  else {
    fVar35 = *(float *)(lVar15 + 0x14);
  }
  if (bVar6) {
    if (0.0 < fVar35) {
      fVar38 = 0.0;
      goto LAB_18033bda1;
    }
    DAT_1811076c0 = DAT_181106f10;
    if (0xf < DAT_1809f5b88) {
      pppppbVar31 = DAT_1809f5b70;
    }
    FUN_180029840(&DAT_1809f73e0,pppppbVar31,DAT_1809f5b80);
    puVar34 = &DAT_1809f7400;
    if (0xf < DAT_1809f7418) {
      puVar34 = DAT_1809f7400;
    }
    FUN_180029840(&DAT_1809f6f38,puVar34,DAT_1809f7410);
    DAT_181107484 = DAT_1811074f8;
    DAT_181107490 = 0;
    FUN_180298f10(&DAT_180ca16c0);
  }
  else {
    fVar38 = fVar9;
LAB_18033bda1:
    local_f0._0_4_ = uVar25;
    local_198 = CONCAT44(fVar38,fVar38);
    uStack_190 = (ulonglong)(uint)fVar38;
    local_188 = CONCAT44(local_188._4_4_,0xffffffff);
    FUN_18034a380(lVar15,local_1b8,local_f0,&local_198);
    FUN_1802b3660((longlong)local_1b8 + 0x14);
  }
  lVar15 = DAT_180ca0a50;
  puVar27 = &DAT_1809f73e0;
  fVar38 = DAT_1809f3bd8 - 0.0;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  lVar15 = *(longlong *)(lVar15 + 0x14f8);
  *(float *)(lVar15 + 0x118) = local_208[0] + fVar9;
  *(float *)(lVar15 + 0x11c) = fVar40 + DAT_1808aca90;
  *(undefined1 *)(lVar15 + 0x159) = 1;
  local_f0 = (undefined1  [8])0x4120000041200000;
  FUN_1803d89a0(2,local_f0);
  fVar40 = DAT_1811074e8 * fVar35;
  DAT_1809f505c = fVar40;
  FUN_1803d8730(0xf,(int)(longlong)((float)(DAT_180960f44 >> 0x18) * fVar40 * fVar8 + fVar8) << 0x18
                    | DAT_180960f44 & 0xffffff);
  FUN_1803d8730(0x10,(int)(longlong)((float)(DAT_180960f44 >> 0x18) * fVar40 + fVar8) << 0x18 |
                     DAT_180960f44 & 0xffffff);
  FUN_1803d8730(0x11,(int)(longlong)((float)(DAT_1809f54bc >> 0x18) * fVar40 + fVar8) << 0x18 |
                     DAT_1809f54bc & 0xffffff);
  uVar36 = FUN_18003a390(local_178,DAT_1811076c0);
  uVar36 = FUN_180066ab0(local_110,"page|",uVar36);
  pauVar18 = (undefined1 (*) [16])FUN_1800134a0(uVar36,&DAT_1806e9100,1);
  _local_1b8 = *pauVar18;
  local_1a8 = *(undefined8 *)pauVar18[1];
  uStack_1a0 = *(ulonglong *)(pauVar18[1] + 8);
  *(undefined8 *)pauVar18[1] = 0;
  *(undefined8 *)(pauVar18[1] + 8) = 0xf;
  (*pauVar18)[0] = 0;
  uVar36 = FUN_1800667a0(local_130,local_1b8,&DAT_1809f73e0);
  puVar19 = (ulonglong *)FUN_1800134a0(uVar36,&DAT_1806e9100,1);
  local_198 = *puVar19;
  uStack_190 = puVar19[1];
  local_188 = puVar19[2];
  uStack_180 = puVar19[3];
  puVar19[2] = 0;
  puVar19[3] = 0xf;
  *(undefined1 *)puVar19 = 0;
  puVar34 = &DAT_1809f6f38;
  FUN_1800667a0(local_150,&local_198);
  if (0xf < uStack_180) {
    pppppbVar24 = (byte *****)(uStack_180 + 1);
    uVar23 = local_198;
    if ((byte *****)0xfff < pppppbVar24) {
      uVar23 = *(ulonglong *)(local_198 - 8);
      if (0x1f < (local_198 - uVar23) - 8) {
        pcVar3 = (code *)swi(0x29);
        (*pcVar3)(5);
        puVar28 = auStack_240;
        goto LAB_18033c0ef;
      }
      pppppbVar24 = (byte *****)(uStack_180 + 0x28);
    }
    thunk_FUN_1803d64e0(uVar23,pppppbVar24);
  }
  local_188 = 0;
  uStack_180 = 0xf;
  local_198 = local_198 & 0xffffffffffffff00;
  FUN_18000f890(local_130);
  puVar28 = auStack_248;
  if (0xf < uStack_1a0) {
    pppppbVar24 = (byte *****)(uStack_1a0 + 1);
    auVar22 = local_1b8;
    if ((byte *****)0xfff < pppppbVar24) {
      auVar22 = *(undefined1 (*) [8])((longlong)local_1b8 + -8);
      if (0x1f < ((longlong)local_1b8 - (longlong)auVar22) - 8U) {
LAB_18033c0ef:
        pcVar3 = (code *)swi(0x29);
        bVar12 = (*pcVar3)(5);
        puVar29 = puVar28 + 8;
        goto LAB_18033c0f6;
      }
      pppppbVar24 = (byte *****)(uStack_1a0 + 0x28);
    }
    thunk_FUN_1803d64e0(auVar22,pppppbVar24);
  }
  local_1a8 = 0;
  uStack_1a0 = 0xf;
  auVar7[0xf] = 0;
  auVar7._0_15_ = stack0xfffffffffffffe49;
  _local_1b8 = auVar7 << 8;
  FUN_18000f890(local_110);
  FUN_18000f890(local_178);
  puVar29 = auStack_248;
  pppppbVar31 = (byte *****)local_150;
  if (0xf < local_138) {
    pppppbVar31 = local_150[0];
  }
  puVar27 = (undefined1 *)0xffffffff;
  uVar25 = 0xffffffff;
  bVar12 = *(byte *)pppppbVar31;
  puVar30 = auStack_248;
  if (bVar12 != 0) {
    puVar34 = (undefined8 *)&DAT_1806c25c0;
    pppppbVar4 = pppppbVar31;
    do {
      pppppbVar24 = (byte *****)((longlong)pppppbVar4 + 1);
      if (((bVar12 == 0x23) && (*(byte *)pppppbVar24 == 0x23)) &&
         (*(byte *)((longlong)pppppbVar4 + 2) == 0x23)) {
        puVar27 = (undefined1 *)0xffffffff;
        pppppbVar24 = (byte *****)((longlong)pppppbVar4 + 3);
      }
      else {
LAB_18033c0f6:
        puVar27 = (undefined1 *)
                  (ulonglong)
                  ((uint)((ulonglong)puVar27 >> 8) & 0xffffff ^
                  *(uint *)((longlong)puVar34 + ((ulonglong)puVar27 & 0xff ^ (ulonglong)bVar12) * 4)
                  );
      }
      uVar25 = (uint)puVar27;
      bVar12 = *(byte *)pppppbVar24;
      puVar30 = puVar29;
      pppppbVar4 = pppppbVar24;
    } while (bVar12 != 0);
  }
  uVar25 = ~uVar25;
  uVar23 = DAT_1811077a0 &
           (((((ulonglong)(uVar25 & 0xff) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
             (ulonglong)(uVar25 >> 8 & 0xff)) * 0x100000001b3 ^ (ulonglong)(uVar25 >> 0x10 & 0xff))
            * 0x100000001b3 ^ (ulonglong)(uVar25 >> 0x18)) * 0x100000001b3;
  lVar15 = *(longlong *)(DAT_181107788 + 8 + uVar23 * 0x10);
  if (lVar15 == DAT_181107778) {
LAB_18033c1a0:
    lVar15 = 0;
  }
  else {
    uVar1 = *(uint *)(lVar15 + 0x10);
    while (uVar25 != uVar1) {
      if (lVar15 == *(longlong *)(DAT_181107788 + uVar23 * 0x10)) goto LAB_18033c1a0;
      lVar15 = *(longlong *)(lVar15 + 8);
      uVar1 = *(uint *)(lVar15 + 0x10);
    }
  }
  if ((lVar15 == 0) || (lVar15 == DAT_181107778)) {
    uVar36 = 0;
  }
  else {
    uVar36 = *(undefined8 *)(lVar15 + 0x18);
  }
  *(undefined8 *)(puVar30 + -8) = 0x18033c1bd;
  FUN_1802b6190(uVar25,uVar36);
  lVar15 = DAT_180ca0a50;
  local_f0._4_4_ = fVar38 - DAT_1808aca90;
  local_f0._0_4_ = (*(float *)(puVar30 + 0x50) - *(float *)(puVar30 + 0x40)) - DAT_1808ac540;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  uVar36 = *(undefined8 *)(lVar15 + 0x14f8);
  *(undefined8 *)(puVar30 + -8) = 0x18033c207;
  uVar14 = FUN_1803e8900(uVar36,pppppbVar31);
  *(undefined4 *)(puVar30 + 0x20) = 0x98;
  *(undefined8 *)(puVar30 + -8) = 0x18033c223;
  cVar11 = FUN_1803e1800(pppppbVar31,uVar14,local_f0,2);
  if (cVar11 != '\0') {
    fVar44 = (fVar9 - fVar35) * fVar44;
    *(undefined8 *)(puVar30 + -8) = 0x18033c244;
    FUN_1802b6490(uVar25,0,0,0);
    lVar2 = DAT_180ca0a50;
    lVar15 = *(longlong *)(DAT_180ca0a50 + 0x14f8);
    *(undefined1 *)(lVar15 + 0xce) = 1;
    lVar2 = *(longlong *)(lVar2 + 0x14f8);
    *(float *)(lVar2 + 0x11c) =
         (*(float *)(lVar2 + 0x2c) - *(float *)(lVar2 + 0x9c)) +
         (*(float *)(lVar15 + 0x11c) - *(float *)(lVar15 + 0x2c)) + *(float *)(lVar15 + 0x9c) +
         fVar44;
    *(undefined1 *)(lVar2 + 0x159) = 1;
    DAT_180cd0f08 = 1;
    *(undefined8 *)(puVar30 + -8) = 0x18033c2ac;
    FUN_180337e50(DAT_1811076c0);
    *(undefined8 *)(puVar30 + -8) = 0x18033c2b1;
    FUN_1802b9bd0();
    lVar15 = DAT_180ca0a50;
    DAT_180cd0f08 = 0;
    *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
    *(float *)(*(longlong *)(lVar15 + 0x14f8) + 0x134) =
         *(float *)(*(longlong *)(lVar15 + 0x14f8) + 0x134) - fVar44;
    *(undefined8 *)(puVar30 + -8) = 0x18033c2f0;
    FUN_1802b6cd0(uVar25);
    lVar15 = DAT_180ca0a50;
    *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
    lVar15 = *(longlong *)(*(longlong *)(lVar15 + 0x14f8) + 0x2c8);
    uVar14 = *(undefined4 *)(lVar15 + 0x20);
    *(undefined8 *)(puVar30 + -8) = 0x18033c322;
    FUN_1802b3c30(lVar15,0,uVar14,fVar40);
  }
  *(undefined8 *)(puVar30 + -8) = 0x18033c327;
  FUN_1803e1bc0();
  *(undefined8 *)(puVar30 + -8) = 0x18033c331;
  FUN_1803d87f0(3);
  *(undefined8 *)(puVar30 + -8) = 0x18033c33b;
  FUN_1803d8a40(1);
  if (DAT_1811076c0 == 3) {
    *(undefined8 *)(puVar30 + -8) = 0x18033c350;
    FUN_180304770(puVar30 + 0x40);
  }
  if (DAT_1811076c0 == 4) {
    *(undefined8 *)(puVar30 + -8) = 0x18033c365;
    FUN_1802f3ff0(puVar30 + 0x40);
  }
  *(undefined8 *)(puVar30 + -8) = 0x18033c36f;
  FUN_1803261d0(puVar30 + 0x58);
  *(undefined8 *)(puVar30 + -8) = 0x18033c379;
  FUN_1803d87f0(0x20);
  *(undefined8 *)(puVar30 + -8) = 0x18033c383;
  FUN_1803d8a40(0xd);
  uVar14 = *(undefined4 *)(lVar20 + 0x20);
  *(undefined8 *)(puVar30 + -8) = 0x18033c399;
  FUN_1802b3c30(lVar20,0,uVar14,DAT_1811074e8);
  lVar20 = DAT_180ca0a50;
  if (*(int *)(DAT_180ca0a50 + 0x1fe0) < 1) {
    *(undefined8 *)(puVar30 + -8) = 0x18033c3b7;
    FUN_1803ebc00("Calling PopFont() too many times!");
  }
  else {
    uVar36 = *(undefined8 *)
              (*(longlong *)(DAT_180ca0a50 + 0x1fe8) +
              ((longlong)*(int *)(DAT_180ca0a50 + 0x1fe0) + -1) * 0x10);
    *(undefined8 *)(puVar30 + -8) = 0x18033c3db;
    FUN_1803e8680(uVar36);
    *(int *)(lVar20 + 0x1fe0) = *(int *)(lVar20 + 0x1fe0) + -1;
  }
  *(undefined8 *)(puVar30 + -8) = 0x18033c3e6;
  FUN_1803e75b0();
  *(undefined8 *)(puVar30 + -8) = 0x18033c3eb;
  FUN_1803180c0();
  *(undefined8 *)(puVar30 + -8) = 0x18033c3f0;
  FUN_1802cfd60();
  *(undefined8 *)(puVar30 + -8) = 0x18033c3fa;
  FUN_18000f890(local_150);
LAB_18033c3fb:
  uVar23 = *(ulonglong *)(puVar30 + 0x78);
  if (uVar23 != 0) {
    if (uVar23 != local_1d0[1]) {
      do {
        *(undefined8 *)(puVar30 + -8) = 0x18033c418;
        FUN_18030f490(uVar23);
        uVar23 = uVar23 + 0x20;
      } while (uVar23 != local_1d0[1]);
      uVar23 = *(ulonglong *)(puVar30 + 0x78);
    }
    uVar21 = uVar23;
    if (0xfff < (local_1d0[2] - uVar23 & 0xffffffffffffffe0)) {
      uVar21 = *(ulonglong *)(uVar23 - 8);
      uVar23 = (uVar23 - uVar21) - 8;
      if (0x1f < uVar23) {
        pcVar3 = (code *)swi(0x29);
        (*pcVar3)(5);
        puVar30 = puVar30 + 8;
        uVar21 = uVar23;
      }
    }
    *(undefined8 *)(puVar30 + -8) = 0x18033c460;
    thunk_FUN_1803d64e0(uVar21);
    *(undefined8 *)(puVar30 + 0x78) = 0;
    *(undefined8 *)(puVar30 + 0x80) = 0;
    local_1d0[2] = 0;
  }
  *(undefined8 *)(puVar30 + -8) = 0x18033c472;
  FUN_180364ab0();
  *(undefined8 *)(puVar30 + -8) = 0x18033c47f;
  return;
}



/* ===== 18033c4d0 FUN_18033c4d0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_18033c4d0(undefined8 *param_1)

{
  char *pcVar1;
  char **ppcVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  char **ppcVar6;
  undefined8 *puVar7;
  undefined1 auStack_198 [40];
  undefined8 *local_170;
  char *local_168;
  undefined4 uStack_160;
  char *local_158;
  undefined4 uStack_150;
  undefined *local_148;
  undefined4 uStack_140;
  char *local_138;
  undefined4 uStack_130;
  char *local_128;
  undefined4 uStack_120;
  char *local_118;
  undefined4 uStack_110;
  char *local_108;
  undefined4 uStack_100;
  char *local_f8;
  undefined4 uStack_f0;
  char *local_e8;
  undefined4 uStack_e0;
  char *local_d8;
  undefined4 uStack_d0;
  char *local_c8;
  undefined4 uStack_c0;
  char *local_b8;
  undefined4 uStack_b0;
  char *local_a8;
  undefined4 uStack_a0;
  char *local_98;
  undefined4 local_90;
  char *local_88;
  undefined4 local_80;
  char *local_78;
  undefined4 local_70;
  char *local_68;
  undefined4 local_60;
  undefined *local_58;
  undefined4 local_50;
  char *local_48;
  undefined4 local_40;
  char *local_38;
  undefined4 local_30;
  char *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_198;
  local_168 = "accent";
  uStack_160 = DAT_1809f54bc;
  local_158 = "accent_hovered";
  uStack_150 = DAT_1809f3bdc;
  local_148 = &DAT_18058b7a0;
  uStack_140 = DAT_180960ec8;
  local_138 = "caption";
  uStack_130 = DAT_180960ecc;
  local_128 = "muted";
  uStack_120 = DAT_180960ec4;
  local_118 = "field";
  uStack_110 = DAT_180960ef0;
  local_108 = "field_hovered";
  uStack_100 = DAT_180960ef4;
  local_f8 = "hover";
  uStack_f0 = DAT_180960e34;
  local_e8 = "frame";
  uStack_e0 = DAT_180960ed8;
  local_d8 = "panel";
  uStack_d0 = DAT_180960eb8;
  local_c8 = "sheet";
  uStack_c0 = DAT_180960ee0;
  local_b8 = "sheet_border";
  local_a8 = "action";
  local_98 = "action_hovered";
  local_88 = "toggle_off";
  local_80 = DAT_180960f18;
  local_78 = "slider_track";
  local_70 = DAT_180960f20;
  local_68 = "item_text";
  local_60 = DAT_180960ef8;
  local_58 = &DAT_18076a69c;
  local_50 = DAT_180960f60;
  local_48 = "card_border";
  local_38 = "card_line";
  local_30 = DAT_180960f48;
  uStack_b0 = DAT_180960eec;
  uStack_a0 = 0xff000000;
  local_90 = 0xff181818;
  local_40 = DAT_180960eec;
  local_28 = "error";
  local_20 = 0xff8d8dfc;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  local_170 = param_1;
  puVar4 = (undefined8 *)FUN_18000fb70(0x150);
  *param_1 = puVar4;
  param_1[1] = puVar4;
  param_1[2] = puVar4 + 0x2a;
  lVar5 = 2;
  ppcVar2 = &local_168;
  puVar3 = puVar4;
  do {
    puVar7 = puVar3;
    ppcVar6 = ppcVar2;
    pcVar1 = ppcVar6[1];
    *puVar7 = *ppcVar6;
    puVar7[1] = pcVar1;
    pcVar1 = ppcVar6[3];
    puVar7[2] = ppcVar6[2];
    puVar7[3] = pcVar1;
    pcVar1 = ppcVar6[5];
    puVar7[4] = ppcVar6[4];
    puVar7[5] = pcVar1;
    pcVar1 = ppcVar6[7];
    puVar7[6] = ppcVar6[6];
    puVar7[7] = pcVar1;
    pcVar1 = ppcVar6[9];
    puVar7[8] = ppcVar6[8];
    puVar7[9] = pcVar1;
    pcVar1 = ppcVar6[0xb];
    puVar7[10] = ppcVar6[10];
    puVar7[0xb] = pcVar1;
    pcVar1 = ppcVar6[0xd];
    puVar7[0xc] = ppcVar6[0xc];
    puVar7[0xd] = pcVar1;
    pcVar1 = ppcVar6[0xf];
    puVar7[0xe] = ppcVar6[0xe];
    puVar7[0xf] = pcVar1;
    lVar5 = lVar5 + -1;
    ppcVar2 = ppcVar6 + 0x10;
    puVar3 = puVar7 + 0x10;
  } while (lVar5 != 0);
  pcVar1 = ppcVar6[0x11];
  puVar7[0x10] = ppcVar6[0x10];
  puVar7[0x11] = pcVar1;
  pcVar1 = ppcVar6[0x13];
  puVar7[0x12] = ppcVar6[0x12];
  puVar7[0x13] = pcVar1;
  pcVar1 = ppcVar6[0x15];
  puVar7[0x14] = ppcVar6[0x14];
  puVar7[0x15] = pcVar1;
  pcVar1 = ppcVar6[0x17];
  puVar7[0x16] = ppcVar6[0x16];
  puVar7[0x17] = pcVar1;
  pcVar1 = ppcVar6[0x19];
  puVar7[0x18] = ppcVar6[0x18];
  puVar7[0x19] = pcVar1;
  param_1[1] = puVar4 + 0x2a;
  return param_1;
}



/* ===== 18033c790 FUN_18033c790 ===== */

float FUN_18033c790(void)

{
  double dVar1;
  uint uVar2;
  uint *puVar3;
  HMONITOR pHVar4;
  HMODULE hModule;
  FARPROC pFVar5;
  INT_PTR IVar6;
  HDC hdc;
  int *piVar7;
  uint local_res8 [2];
  uint local_res10 [2];
  
  if (0 < DAT_18091a1a8) {
    local_res10[0] = 0xfa;
    local_res8[0] = 0x4b;
    piVar7 = (int *)local_res8;
    if (0x4a < DAT_18091a1a8) {
      piVar7 = &DAT_18091a1a8;
    }
    puVar3 = local_res10;
    if (DAT_18091a1a8 < 0xfb) {
      puVar3 = (uint *)piVar7;
    }
    return (float)(int)*puVar3 / DAT_1808acb08;
  }
  dVar1 = *(double *)(DAT_180ca0a50 + 0x10);
  if ((dVar1 - DAT_1809f5b60 < DAT_1808ac500) && (DAT_1809f5b60 <= dVar1)) {
    return DAT_1809f5288;
  }
  DAT_1809f5b60 = dVar1;
  if ((((DAT_1811079d8 != (HWND)0x0) &&
       (pHVar4 = MonitorFromWindow(DAT_1811079d8,2), pHVar4 != (HMONITOR)0x0)) &&
      (hModule = LoadLibraryA("shcore.dll"), hModule != (HMODULE)0x0)) &&
     (pFVar5 = GetProcAddress(hModule,"GetDpiForMonitor"), pFVar5 != (FARPROC)0x0)) {
    local_res8[0] = 0;
    local_res10[0] = 0;
    IVar6 = (*pFVar5)(pHVar4,0,local_res8,local_res10);
    if ((-1 < (int)IVar6) && (local_res8[0] != 0)) goto LAB_18033c8db;
  }
  hdc = GetDC((HWND)0x0);
  uVar2 = 0;
  if (hdc != (HDC)0x0) {
    uVar2 = GetDeviceCaps(hdc,0x58);
    ReleaseDC((HWND)0x0,hdc);
  }
  local_res8[0] = uVar2;
  if (local_res8[0] == 0) {
    DAT_1809f5288 = DAT_1808ac34c;
    return DAT_1808ac34c;
  }
LAB_18033c8db:
  DAT_1809f5288 = (float)local_res8[0] / DAT_1808acafc;
  if (DAT_1809f5288 < DAT_1808ac27c) {
    DAT_1809f5288 = DAT_1808ac27c;
    return DAT_1808ac27c;
  }
  if (DAT_1808ac864 < DAT_1809f5288) {
    DAT_1809f5288 = DAT_1808ac34c;
    return DAT_1808ac34c;
  }
  return DAT_1809f5288;
}



/* ===== 18033c920 FUN_18033c920 ===== */

undefined8 FUN_18033c920(undefined8 param_1)

{
  FUN_18031a140();
  return param_1;
}



/* ===== 18033c940 FUN_18033c940 ===== */

undefined8 FUN_18033c940(undefined8 param_1,undefined8 param_2)

{
  FUN_18031a220(param_1,param_2,0);
  return param_1;
}



/* ===== 18033c960 FUN_18033c960 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_18033c960(longlong *param_1,longlong *param_2)

{
  size_t _Size;
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  longlong *plVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined8 *_Buf1;
  longlong lVar7;
  undefined8 *******_Buf2;
  ulonglong uVar8;
  longlong *plVar9;
  undefined8 uVar10;
  undefined1 *puVar11;
  bool bVar12;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [24];
  undefined *local_78;
  undefined8 *******local_70 [2];
  size_t local_60;
  ulonglong local_58;
  longlong local_50 [3];
  ulonglong local_38;
  ulonglong local_30;
  
  local_30 = DAT_180919500 ^ (ulonglong)auStack_98;
  bVar12 = false;
  local_78 = (undefined *)((ulonglong)local_78 & 0xffffffff00000000);
  FUN_18031a140(local_70,param_1);
  local_78 = &DAT_1809f5a50;
  iVar6 = FUN_1804e4d70(&DAT_1809f5a50);
  plVar9 = DAT_181107368;
  puVar11 = auStack_98;
  if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  plVar4 = DAT_181107360;
  if (DAT_1809f5a9c == 0x7fffffff) {
    DAT_1809f5a9c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  do {
    if (plVar4 == plVar9) {
      uVar10 = 0;
LAB_18033caab:
      *(undefined8 *)(puVar11 + -8) = 0x18033cab3;
      FUN_1804e4e90(&DAT_1809f5a50);
      *(undefined8 *)(puVar11 + -8) = 0x18033cabe;
      FUN_18000f890(puVar11 + 0x28);
      *(undefined8 *)(puVar11 + -8) = 0x18033cace;
      return uVar10;
    }
    if (plVar4[1] - *plVar4 == param_1[1] - *param_1) {
      _Buf1 = (undefined8 *)FUN_18031a140(local_50,plVar4);
      bVar12 = true;
      _Buf2 = local_70;
      if (0xf < local_58) {
        _Buf2 = local_70[0];
      }
      _Size = _Buf1[2];
      if (0xf < (ulonglong)_Buf1[3]) {
        _Buf1 = (undefined8 *)*_Buf1;
      }
      if ((_Size != local_60) || ((_Size != 0 && (iVar6 = memcmp(_Buf1,_Buf2,_Size), iVar6 != 0))))
      goto LAB_18033ca4f;
      bVar3 = false;
    }
    else {
LAB_18033ca4f:
      bVar3 = true;
    }
    if ((bVar12) && (bVar12 = false, 0xf < local_38)) {
      uVar8 = local_38 + 1;
      lVar7 = local_50[0];
      if (uVar8 < 0x1000) {
LAB_18033ca8f:
        thunk_FUN_1803d64e0(lVar7,uVar8);
        goto LAB_18033ca94;
      }
      lVar7 = *(longlong *)(local_50[0] + -8);
      if ((local_50[0] - lVar7) - 8U < 0x20) {
        uVar8 = local_38 + 0x28;
        goto LAB_18033ca8f;
      }
      pcVar2 = (code *)swi(0x29);
      (*pcVar2)(5);
      puVar5 = auStack_90;
LAB_18033caee:
      puVar11 = puVar5;
      *(undefined8 *)(puVar11 + -8) = 0x18033caf9;
      FUN_180067240(param_2,plVar4);
      *(undefined8 *)(puVar11 + -8) = 0x18033cb06;
      FUN_180067240(param_2 + 3,plVar4 + 3);
      *(int *)(param_2 + 6) = (int)plVar4[6];
      *(undefined4 *)((longlong)param_2 + 0x34) = *(undefined4 *)((longlong)plVar4 + 0x34);
      *(int *)(param_2 + 7) = (int)plVar4[7];
      if (param_2 != plVar4) {
        plVar9 = plVar4 + 8;
        if (0xf < (ulonglong)plVar4[0xb]) {
          plVar9 = (longlong *)*plVar9;
        }
        lVar7 = plVar4[10];
        *(undefined8 *)(puVar11 + -8) = 0x18033cb38;
        FUN_180029840(param_2 + 8,plVar9,lVar7);
      }
      *(char *)(param_2 + 0xc) = (char)plVar4[0xc];
      *(undefined8 *)(puVar11 + -8) = 0x18033cb4c;
      FUN_180067240(param_2 + 0xd,plVar4 + 0xd);
      if (param_2 != plVar4 + 9) {
        lVar7 = plVar4[0x19];
        lVar1 = plVar4[0x1a];
        *(undefined8 *)(puVar11 + -8) = 0x18033cb76;
        FUN_180068ca0(param_2 + 0x10,lVar7,lVar1 - lVar7 >> 2);
      }
      if (param_2 != plVar4 + -3) {
        plVar9 = plVar4 + 0x10;
        if (0xf < (ulonglong)plVar4[0x13]) {
          plVar9 = (longlong *)*plVar9;
        }
        lVar7 = plVar4[0x12];
        *(undefined8 *)(puVar11 + -8) = 0x18033cba6;
        FUN_180029840(param_2 + 0x13,plVar9,lVar7);
      }
      if (param_2 != plVar4 + 5) {
        plVar9 = plVar4 + 0x1c;
        if (0xf < (ulonglong)plVar4[0x1f]) {
          plVar9 = (longlong *)*plVar9;
        }
        lVar7 = plVar4[0x1e];
        *(undefined8 *)(puVar11 + -8) = 0x18033cbd6;
        FUN_180029840(param_2 + 0x17,plVar9,lVar7);
      }
      *(char *)(param_2 + 0x1b) = (char)plVar4[0x20];
      *(undefined1 *)((longlong)param_2 + 0xd9) = *(undefined1 *)((longlong)plVar4 + 0x101);
      uVar10 = 1;
      goto LAB_18033caab;
    }
LAB_18033ca94:
    puVar5 = auStack_98;
    if (!bVar3) goto LAB_18033caee;
    plVar4 = plVar4 + 0x21;
  } while( true );
}



/* ===== 18033cc20 FUN_18033cc20 ===== */

undefined8 FUN_18033cc20(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  size_t sVar3;
  size_t _Size;
  code *pcVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  undefined8 *_Buf1;
  longlong lVar9;
  undefined8 *_Buf2;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [24];
  longlong local_68;
  longlong lStack_60;
  longlong local_58;
  
  local_68 = 0;
  lStack_60 = 0;
  local_58 = 0;
  iVar7 = FUN_1804e4d70(&DAT_1809f5a50);
  lVar9 = DAT_181107368;
  puVar10 = auStack_88;
  puVar11 = auStack_88;
  if (iVar7 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  lVar8 = DAT_181107360;
  if (DAT_1809f5a9c == 0x7fffffff) {
    DAT_1809f5a9c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  for (; lVar8 != lVar9; lVar8 = lVar8 + 0x108) {
    puVar1 = *(undefined8 **)(lVar8 + 0x20);
    puVar13 = *(undefined8 **)(lVar8 + 0x18);
    if (puVar13 != puVar1) {
      uVar2 = param_1[3];
      sVar3 = param_1[2];
      do {
        if (uVar2 < 0x10) {
          _Buf2 = param_1;
        }
        else {
          _Buf2 = (undefined8 *)*param_1;
        }
        _Size = puVar13[2];
        if ((ulonglong)puVar13[3] < 0x10) {
          _Buf1 = puVar13;
        }
        else {
          _Buf1 = (undefined8 *)*puVar13;
        }
      } while (((_Size != sVar3) ||
               ((_Size != 0 && (iVar7 = memcmp(_Buf1,_Buf2,_Size), iVar7 != 0)))) &&
              (puVar13 = puVar13 + 4, puVar13 != puVar1));
      if (puVar13 != puVar1) {
        FUN_180067240(&local_68,lVar8);
        break;
      }
    }
  }
  FUN_1804e4e90(&DAT_1809f5a50);
  if ((local_68 == lStack_60) || (cVar6 = FUN_18033c960(&local_68,param_2), cVar6 == '\0')) {
    uVar12 = 0;
  }
  else {
    uVar12 = 1;
  }
  lVar5 = lStack_60;
  lVar9 = local_68;
  lVar8 = local_68;
  if (local_68 == 0) {
    return uVar12;
  }
  for (; local_68 = lVar8, lVar9 != lVar5; lVar9 = lVar9 + 0x20) {
    FUN_18000f890(lVar9);
    lVar8 = local_68;
  }
  if (0xfff < (local_58 - lVar8 & 0xffffffffffffffe0U)) {
    lVar9 = *(longlong *)(lVar8 + -8);
    if ((lVar8 - lVar9) - 8U < 0x20) goto LAB_18033cd94;
    pcVar4 = (code *)swi(0x29);
    lVar8 = (*pcVar4)(5);
    puVar10 = auStack_80;
  }
  lVar9 = lVar8;
  puVar11 = puVar10;
LAB_18033cd94:
  *(undefined8 *)(puVar11 + -8) = 0x18033cd99;
  thunk_FUN_1803d64e0(lVar9);
  return uVar12;
}



/* ===== 18033cdd0 FUN_18033cdd0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18033cdd0(ulonglong *param_1,undefined4 param_2,undefined4 param_3)

{
  size_t sVar1;
  ulonglong uVar2;
  size_t _Size;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  undefined8 *_Buf1;
  ulonglong *_Buf1_00;
  ulonglong *puVar7;
  ulonglong *_Buf2;
  ulonglong uVar8;
  ulonglong *puVar9;
  undefined1 auStack_b8 [32];
  ulonglong local_98;
  undefined *local_90;
  ulonglong local_88;
  ulonglong uStack_80;
  ulonglong local_78;
  ulonglong uStack_70;
  undefined4 local_68;
  undefined4 local_64;
  ulonglong local_60;
  
  local_60 = DAT_180919500 ^ (ulonglong)auStack_b8;
  local_90 = &DAT_1809f5a50;
  iVar5 = FUN_1804e4d70(&DAT_1809f5a50);
  lVar4 = DAT_181107368;
  if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  lVar3 = DAT_181107360;
  puVar7 = DAT_181107460;
  puVar9 = DAT_181107468;
  if (DAT_1809f5a9c == 0x7fffffff) {
    DAT_1809f5a9c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  for (; DAT_181107460 = puVar7, DAT_181107468 = puVar9, lVar3 != lVar4; lVar3 = lVar3 + 0x108) {
    if ((*(int *)(lVar3 + 0x30) == 2) &&
       (_Buf1 = *(undefined8 **)(lVar3 + 0x18), _Buf1 != *(undefined8 **)(lVar3 + 0x20))) {
      if (param_1[3] < 0x10) {
        puVar7 = param_1;
      }
      else {
        puVar7 = (ulonglong *)*param_1;
      }
      sVar1 = _Buf1[2];
      if (0xf < (ulonglong)_Buf1[3]) {
        _Buf1 = (undefined8 *)*_Buf1;
      }
      if ((sVar1 == param_1[2]) &&
         ((sVar1 == 0 || (iVar5 = memcmp(_Buf1,puVar7,sVar1), iVar5 == 0)))) {
        *(undefined4 *)(lVar3 + 0x34) = param_2;
        *(undefined4 *)(lVar3 + 0x38) = param_3;
      }
    }
    puVar7 = DAT_181107460;
    puVar9 = DAT_181107468;
  }
  if (puVar7 != puVar9) {
    sVar1 = param_1[2];
    uVar2 = param_1[3];
    do {
      _Buf2 = param_1;
      if (0xf < uVar2) {
        _Buf2 = (ulonglong *)*param_1;
      }
      _Size = puVar7[2];
      if (puVar7[3] < 0x10) {
        _Buf1_00 = puVar7;
      }
      else {
        _Buf1_00 = (ulonglong *)*puVar7;
      }
      if ((_Size == sVar1) && ((_Size == 0 || (iVar5 = memcmp(_Buf1_00,_Buf2,_Size), iVar5 == 0))))
      {
        *(undefined4 *)(puVar7 + 4) = param_2;
        *(undefined4 *)((longlong)puVar7 + 0x24) = param_3;
        goto LAB_18033d018;
      }
      puVar7 = puVar7 + 5;
    } while (puVar7 != puVar9);
  }
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  uVar2 = param_1[2];
  if (0xf < param_1[3]) {
    param_1 = (ulonglong *)*param_1;
  }
  if (0x7fffffffffffffff < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_180011990();
  }
  if (uVar2 < 0x10) {
    uVar8 = 0xf;
    uStack_70 = 0xf;
    local_88 = *param_1;
    uStack_80 = param_1[1];
    local_78 = uVar2;
  }
  else {
    uVar6 = uVar2 | 0xf;
    uVar8 = 0x7fffffffffffffff;
    if ((uVar6 < 0x8000000000000000) && (uVar8 = uVar6, uVar6 < 0x16)) {
      uVar8 = 0x16;
    }
    local_98 = FUN_18000fb70(uVar8 + 1);
    local_88 = local_98;
    local_78 = uVar2;
    uStack_70 = uVar8;
    FUN_180540530(local_98,param_1,uVar2 + 1);
    puVar9 = DAT_181107468;
  }
  local_68 = param_2;
  local_64 = param_3;
  if (puVar9 == DAT_181107470) {
    FUN_180353210(local_88,puVar9,&local_88);
  }
  else {
    *puVar9 = local_88;
    puVar9[1] = uStack_80;
    puVar9[2] = uVar2;
    puVar9[3] = uVar8;
    local_78 = _DAT_1808ad410;
    uStack_70 = _UNK_1808ad418;
    local_88 = local_88 & 0xffffffffffffff00;
    *(undefined4 *)(puVar9 + 4) = param_2;
    *(undefined4 *)((longlong)puVar9 + 0x24) = param_3;
    DAT_181107468 = DAT_181107468 + 5;
  }
  FUN_18000f890(&local_88);
LAB_18033d018:
  FUN_1804e4e90(&DAT_1809f5a50);
  return;
}



/* ===== 18033d070 FUN_18033d070 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_18033d070(longlong *param_1,longlong ****param_2,longlong ****param_3)

{
  ulonglong uVar1;
  longlong ***ppplVar2;
  longlong lVar3;
  code *pcVar4;
  undefined1 *puVar5;
  int iVar6;
  longlong ****pppplVar7;
  byte *pbVar8;
  longlong ****pppplVar9;
  longlong lVar10;
  longlong ****pppplVar11;
  undefined8 ****_Buf2;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined8 uVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  ulonglong uVar17;
  ulonglong _Size;
  byte *pbVar18;
  uint uVar19;
  bool bVar20;
  undefined8 uStack_120;
  undefined1 auStack_118 [8];
  undefined1 auStack_110 [24];
  int local_f8;
  longlong local_f0 [3];
  longlong ***local_d8;
  uint local_d0;
  undefined8 local_c8;
  longlong *local_c0;
  longlong ****local_b8;
  byte *local_b0;
  longlong ****local_a8;
  longlong ****local_a0;
  longlong ****local_98;
  undefined *local_90;
  longlong ****local_88;
  undefined8 uStack_80;
  ulonglong local_78;
  ulonglong local_70;
  undefined8 ****local_68 [2];
  size_t local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_118;
  uVar19 = 0;
  local_d0 = 0;
  local_c0 = param_1;
  local_a0 = param_2;
  local_98 = param_3;
  FUN_18031a140(local_68,param_1);
  local_90 = &DAT_1809f5a50;
  iVar6 = FUN_1804e4d70(&DAT_1809f5a50);
  puVar15 = auStack_118;
  puVar16 = auStack_118;
  if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809f5a9c == 0x7fffffff) {
    DAT_1809f5a9c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  local_b8 = DAT_181107360;
  local_a8 = DAT_181107368;
  pppplVar7 = DAT_181107360;
  if (DAT_181107360 != DAT_181107368) {
    do {
      lVar10 = (longlong)pppplVar7[0x18] + 1;
      if ((lVar10 == param_1[1] - *param_1 >> 5) &&
         (ppplVar2 = *pppplVar7,
         pppplVar7[0x18] < (longlong ***)((longlong)pppplVar7[1] - (longlong)ppplVar2 >> 5))) {
        local_d8 = ppplVar2 + lVar10 * 4;
        local_f0[0] = 0;
        local_f0[1] = 0;
        local_f0[2] = 0;
        local_c8 = ppplVar2;
        local_b8 = pppplVar7;
        FUN_180068970(local_f0,lVar10 * 0x20 >> 5,&local_c8,local_f0 + 3);
        uStack_80 = 0;
        _Size = 0;
        local_78 = 0;
        uVar17 = 0xf;
        local_70 = 0xf;
        local_88 = (longlong ****)0x0;
        local_c8 = (longlong ***)(CONCAT44(local_c8._4_4_,uVar19) | 1);
        local_d0 = uVar19 | 1;
        local_d8 = (longlong ***)0x0;
        pppplVar9 = (longlong ****)0x0;
        uVar12 = uVar17;
        uVar19 = uVar19 | 1;
        if (local_f0[1] - local_f0[0] >> 5 != 0) {
          do {
            ppplVar2 = local_d8;
            pppplVar7 = pppplVar9;
            uVar12 = uVar17;
            if (local_d8 != (longlong ***)0x0) {
              if (_Size < uVar17) {
                local_78 = _Size + 1;
                pppplVar7 = (longlong ****)&local_88;
                if (0xf < uVar17) {
                  pppplVar7 = pppplVar9;
                }
                *(undefined2 *)((longlong)pppplVar7 + _Size) = 0x1f;
                pppplVar7 = local_88;
                uVar12 = local_70;
                _Size = local_78;
              }
              else {
                if (_Size == 0x7fffffffffffffff) {
LAB_18033d696:
                    /* WARNING: Subroutine does not return */
                  FUN_180011990();
                }
                uVar13 = _Size + 1;
                uVar12 = uVar13 | 0xf;
                if (uVar12 < 0x8000000000000000) {
                  if (0x7fffffffffffffff - (uVar17 >> 1) < uVar17) {
                    uVar12 = 0x7fffffffffffffff;
                  }
                  else {
                    uVar1 = (uVar17 >> 1) + uVar17;
                    if (uVar12 < uVar1) {
                      uVar12 = uVar1;
                    }
                  }
                }
                else {
                  uVar12 = 0x7fffffffffffffff;
                }
                pppplVar7 = (longlong ****)FUN_18000fb70(uVar12 + 1);
                local_78 = uVar13;
                local_70 = uVar12;
                if (uVar17 < 0x10) {
                  FUN_180540530(pppplVar7,&local_88,_Size);
                  *(undefined2 *)((longlong)pppplVar7 + _Size) = 0x1f;
                }
                else {
                  FUN_180540530(pppplVar7,pppplVar9,_Size);
                  *(undefined2 *)((longlong)pppplVar7 + _Size) = 0x1f;
                  if (uVar17 + 1 < 0x1000) {
                    thunk_FUN_1803d64e0(pppplVar9);
                  }
                  else {
                    if (0x1f < (ulonglong)((longlong)pppplVar9 + (-8 - (longlong)pppplVar9[-1]))) {
LAB_18033d5b9:
                      pcVar4 = (code *)swi(0x29);
                      (*pcVar4)(5);
                      puVar15 = auStack_110;
                      goto LAB_18033d5c0;
                    }
                    thunk_FUN_1803d64e0(pppplVar9[-1],uVar17 + 0x28);
                  }
                }
                _Size = uVar13;
                local_88 = pppplVar7;
              }
            }
            pbVar8 = (byte *)(local_f0[0] + (longlong)ppplVar2 * 0x20);
            if (*(ulonglong *)(pbVar8 + 0x18) < 0x10) {
              pbVar18 = pbVar8;
            }
            else {
              pbVar18 = *(byte **)pbVar8;
            }
            local_b0 = pbVar18 + *(longlong *)(pbVar8 + 0x10);
            pppplVar9 = pppplVar7;
            uVar17 = uVar12;
            uVar13 = _Size;
            if (pbVar18 != local_b0) {
              do {
                local_f8 = tolower((uint)*pbVar18);
                if (uVar13 < uVar17) {
                  local_78 = uVar13 + 1;
                  pppplVar9 = (longlong ****)&local_88;
                  if (0xf < uVar17) {
                    pppplVar9 = pppplVar7;
                  }
                  *(char *)((longlong)pppplVar9 + uVar13) = (char)local_f8;
                  *(undefined1 *)((longlong)pppplVar9 + uVar13 + 1) = 0;
                  uVar12 = local_70;
                  _Size = local_78;
                }
                else {
                  if (uVar13 == 0x7fffffffffffffff) goto LAB_18033d696;
                  _Size = uVar13 + 1;
                  uVar12 = _Size | 0xf;
                  if (uVar12 < 0x8000000000000000) {
                    if (0x7fffffffffffffff - (uVar17 >> 1) < uVar17) {
                      uVar12 = 0x7fffffffffffffff;
                    }
                    else {
                      uVar1 = (uVar17 >> 1) + uVar17;
                      if (uVar12 < uVar1) {
                        uVar12 = uVar1;
                      }
                    }
                  }
                  else {
                    uVar12 = 0x7fffffffffffffff;
                  }
                  pppplVar9 = (longlong ****)FUN_18000fb70(uVar12 + 1);
                  local_78 = _Size;
                  local_70 = uVar12;
                  if (uVar17 < 0x10) {
                    FUN_180540530(pppplVar9,&local_88,uVar13);
                    *(char *)((longlong)pppplVar9 + uVar13) = (char)local_f8;
                    *(undefined1 *)((longlong)pppplVar9 + uVar13 + 1) = 0;
                  }
                  else {
                    FUN_180540530(pppplVar9,pppplVar7,uVar13);
                    *(char *)((longlong)pppplVar9 + uVar13) = (char)local_f8;
                    *(undefined1 *)((longlong)pppplVar9 + uVar13 + 1) = 0;
                    if (uVar17 + 1 < 0x1000) {
                      thunk_FUN_1803d64e0(pppplVar7);
                    }
                    else {
                      pppplVar11 = pppplVar7 + -1;
                      uVar13 = (longlong)pppplVar7 + (-8 - (longlong)*pppplVar11);
                      pppplVar7 = pppplVar9;
                      if (0x1f < uVar13) goto LAB_18033d5b9;
                      thunk_FUN_1803d64e0(*pppplVar11,uVar17 + 0x28);
                    }
                  }
                  local_88 = pppplVar9;
                }
                pbVar18 = pbVar18 + 1;
                pppplVar9 = local_88;
                pppplVar7 = local_88;
                uVar17 = uVar12;
                uVar13 = _Size;
              } while (pbVar18 != local_b0);
            }
            local_d8 = (longlong ***)((longlong)local_d8 + 1);
            uVar17 = uVar12;
          } while (local_d8 < (ulonglong)(local_f0[1] - local_f0[0] >> 5));
          pppplVar7 = local_b8;
          uVar19 = (uint)local_c8;
        }
        _Buf2 = local_68;
        if (0xf < local_50) {
          _Buf2 = local_68[0];
        }
        pppplVar11 = (longlong ****)&local_88;
        if (0xf < uVar12) {
          pppplVar11 = pppplVar9;
        }
        if (_Size == local_58) {
          if (_Size == 0) {
            bVar20 = true;
          }
          else {
            iVar6 = memcmp(pppplVar11,_Buf2,_Size);
            bVar20 = iVar6 == 0;
          }
        }
        else {
          bVar20 = false;
        }
        uVar19 = uVar19 & 0xfffffffe;
        if (uVar12 < 0x10) {
LAB_18033d4f2:
          lVar10 = local_f0[1];
          puVar5 = auStack_118;
          if (!bVar20) {
            lVar3 = local_f0[0];
            if (local_f0[0] != 0) {
              for (; lVar3 != lVar10; lVar3 = lVar3 + 0x20) {
                FUN_18000f890(lVar3);
              }
              uVar12 = local_f0[2] - local_f0[0] & 0xffffffffffffffe0;
              if (uVar12 < 0x1000) {
                lVar10 = local_f0[0];
              }
              else {
                if (0x1f < (local_f0[0] - *(longlong *)(local_f0[0] + -8)) - 8U) goto LAB_18033d680;
                uVar12 = uVar12 + 0x27;
                lVar10 = *(longlong *)(local_f0[0] + -8);
              }
              thunk_FUN_1803d64e0(lVar10,uVar12);
            }
            param_1 = local_c0;
            goto LAB_18033d562;
          }
        }
        else {
          uVar17 = uVar12 + 1;
          pppplVar11 = pppplVar9;
          if (uVar17 < 0x1000) {
LAB_18033d4ea:
            thunk_FUN_1803d64e0(pppplVar11,uVar17);
            goto LAB_18033d4f2;
          }
          pppplVar11 = (longlong ****)pppplVar9[-1];
          if ((ulonglong)((longlong)pppplVar9 + (-8 - (longlong)pppplVar11)) < 0x20) {
            uVar17 = uVar12 + 0x28;
            goto LAB_18033d4ea;
          }
LAB_18033d5c0:
          pcVar4 = (code *)swi(0x29);
          (*pcVar4)(5);
          puVar5 = puVar15 + 8;
        }
        puVar16 = puVar5;
        pppplVar9 = pppplVar7 + 0x10;
        if (local_a0 != pppplVar9) {
          if ((longlong ***)0xf < pppplVar7[0x13]) {
            pppplVar9 = (longlong ****)*pppplVar9;
          }
          ppplVar2 = pppplVar7[0x12];
          *(undefined8 *)(puVar16 + -8) = 0x18033d5f3;
          FUN_180029840(local_a0,pppplVar9,ppplVar2);
        }
        pppplVar9 = pppplVar7 + 0x14;
        if (local_98 != pppplVar9) {
          if ((longlong ***)0xf < pppplVar7[0x17]) {
            pppplVar9 = (longlong ****)*pppplVar9;
          }
          ppplVar2 = pppplVar7[0x16];
          *(undefined8 *)(puVar16 + -8) = 0x18033d61f;
          FUN_180029840(local_98,pppplVar9,ppplVar2);
        }
        lVar10 = *(longlong *)(puVar16 + 0x28);
        if (lVar10 != 0) {
          lVar3 = *(longlong *)(puVar16 + 0x30);
          for (; lVar10 != lVar3; lVar10 = lVar10 + 0x20) {
            *(undefined8 *)(puVar16 + -8) = 0x18033d63c;
            FUN_18000f890(lVar10);
          }
          lVar10 = *(longlong *)(puVar16 + 0x28);
          if (0xfff < (*(longlong *)(puVar16 + 0x38) - lVar10 & 0xffffffffffffffe0U)) {
            lVar3 = *(longlong *)(lVar10 + -8);
            if ((lVar10 - lVar3) - 8U < 0x20) {
              *(undefined8 *)(puVar16 + -8) = 0x18033d679;
              thunk_FUN_1803d64e0(lVar3,(*(longlong *)(puVar16 + 0x38) - lVar10 &
                                        0xffffffffffffffe0U) + 0x27);
              uVar14 = 1;
              goto LAB_18033d579;
            }
LAB_18033d680:
            pcVar4 = (code *)swi(0x29);
            lVar10 = (*pcVar4)(5);
            puVar16 = puVar16 + 8;
          }
          *(undefined8 *)(puVar16 + -8) = 0x18033d68f;
          thunk_FUN_1803d64e0(lVar10);
        }
        uVar14 = 1;
        goto LAB_18033d579;
      }
LAB_18033d562:
      local_b8 = pppplVar7 + 0x21;
      pppplVar7 = local_b8;
    } while (local_b8 != local_a8);
  }
  uVar14 = 0;
  puVar16 = auStack_118;
LAB_18033d579:
  *(undefined8 *)(puVar16 + -8) = 0x18033d585;
  FUN_1804e4e90(&DAT_1809f5a50);
  *(undefined8 *)(puVar16 + -8) = 0x18033d58f;
  FUN_18000f890(local_68);
  *(undefined8 *)(puVar16 + -8) = 0x18033d59e;
  return uVar14;
}



/* ===== 18033d6c0 FUN_18033d6c0 ===== */

void FUN_18033d6c0(undefined8 *param_1,char param_2)

{
  size_t _Size;
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  iVar1 = FUN_1804e4d70(&DAT_1809f5a50);
  puVar6 = DAT_181107760;
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809f5a9c == 0x7fffffff) {
    DAT_1809f5a9c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  puVar2 = (undefined8 *)FUN_180026970(DAT_181107758,DAT_181107760,param_1);
  puVar5 = puVar6;
  if (puVar2 == puVar6) {
LAB_18033d795:
    puVar4 = puVar5;
    puVar3 = puVar5;
    if (puVar2 == puVar6) goto LAB_18033d7e2;
  }
  else {
    puVar5 = puVar2 + 4;
    puVar4 = puVar6;
    puVar3 = puVar6;
    if (puVar5 != puVar6) {
      do {
        if ((ulonglong)param_1[3] < 0x10) {
          puVar4 = param_1;
        }
        else {
          puVar4 = (undefined8 *)*param_1;
        }
        _Size = puVar5[2];
        if ((ulonglong)puVar5[3] < 0x10) {
          puVar3 = puVar5;
        }
        else {
          puVar3 = (undefined8 *)*puVar5;
        }
        if ((_Size != param_1[2]) ||
           ((_Size != 0 && (iVar1 = memcmp(puVar3,puVar4,_Size), iVar1 != 0)))) {
          FUN_18002ba60(puVar2,puVar5);
          puVar2 = puVar2 + 4;
        }
        puVar5 = puVar5 + 4;
      } while (puVar5 != puVar6);
      puVar5 = DAT_181107760;
      goto LAB_18033d795;
    }
  }
  for (; puVar5 = puVar2, puVar2 = puVar5, puVar6 != puVar3; puVar6 = puVar6 + 4) {
    FUN_18002ba60(puVar5,puVar6);
    puVar4 = DAT_181107760;
    puVar2 = puVar5 + 4;
  }
  for (; puVar2 != puVar4; puVar2 = puVar2 + 4) {
    FUN_18000f890(puVar2);
  }
  DAT_181107760 = puVar5;
LAB_18033d7e2:
  if (param_2 != '\0') {
    if (puVar5 == DAT_181107768) {
      FUN_180028f00(&DAT_181107758,puVar5,param_1);
    }
    else {
      FUN_180024b50(puVar5,param_1);
      DAT_181107760 = DAT_181107760 + 4;
    }
  }
  FUN_1804e4e90(&DAT_1809f5a50);
  return;
}



/* ===== 18033d860 FUN_18033d860 ===== */

bool FUN_18033d860(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = FUN_1804e4d70(&DAT_1809f5a50);
  lVar2 = DAT_181107760;
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809f5a9c == 0x7fffffff) {
    DAT_1809f5a9c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  lVar1 = FUN_180026970(DAT_181107758,DAT_181107760,param_1);
  FUN_1804e4e90(&DAT_1809f5a50);
  return lVar1 != lVar2;
}



/* ===== 18033d8f0 FUN_18033d8f0 ===== */

void FUN_18033d8f0(undefined8 *param_1,char param_2)

{
  size_t _Size;
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  iVar1 = FUN_1804e4d70(&DAT_1809f5a50);
  puVar6 = DAT_181106fb8;
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809f5a9c == 0x7fffffff) {
    DAT_1809f5a9c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  puVar2 = (undefined8 *)FUN_180026970(DAT_181106fb0,DAT_181106fb8,param_1);
  puVar5 = puVar6;
  if (puVar2 == puVar6) {
LAB_18033d9c5:
    puVar4 = puVar5;
    puVar3 = puVar5;
    if (puVar2 == puVar6) goto LAB_18033da12;
  }
  else {
    puVar5 = puVar2 + 4;
    puVar4 = puVar6;
    puVar3 = puVar6;
    if (puVar5 != puVar6) {
      do {
        if ((ulonglong)param_1[3] < 0x10) {
          puVar4 = param_1;
        }
        else {
          puVar4 = (undefined8 *)*param_1;
        }
        _Size = puVar5[2];
        if ((ulonglong)puVar5[3] < 0x10) {
          puVar3 = puVar5;
        }
        else {
          puVar3 = (undefined8 *)*puVar5;
        }
        if ((_Size != param_1[2]) ||
           ((_Size != 0 && (iVar1 = memcmp(puVar3,puVar4,_Size), iVar1 != 0)))) {
          FUN_18002ba60(puVar2,puVar5);
          puVar2 = puVar2 + 4;
        }
        puVar5 = puVar5 + 4;
      } while (puVar5 != puVar6);
      puVar5 = DAT_181106fb8;
      goto LAB_18033d9c5;
    }
  }
  for (; puVar5 = puVar2, puVar2 = puVar5, puVar6 != puVar3; puVar6 = puVar6 + 4) {
    FUN_18002ba60(puVar5,puVar6);
    puVar4 = DAT_181106fb8;
    puVar2 = puVar5 + 4;
  }
  for (; puVar2 != puVar4; puVar2 = puVar2 + 4) {
    FUN_18000f890(puVar2);
  }
  DAT_181106fb8 = puVar5;
LAB_18033da12:
  if (param_2 != '\0') {
    if (puVar5 == DAT_181106fc0) {
      FUN_180028f00(&DAT_181106fb0,puVar5,param_1);
    }
    else {
      FUN_180024b50(puVar5,param_1);
      DAT_181106fb8 = DAT_181106fb8 + 4;
    }
  }
  FUN_1804e4e90(&DAT_1809f5a50);
  return;
}



/* ===== 18033da90 FUN_18033da90 ===== */

bool FUN_18033da90(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = FUN_1804e4d70(&DAT_1809f5a50);
  lVar2 = DAT_181106fb8;
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809f5a9c == 0x7fffffff) {
    DAT_1809f5a9c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  lVar1 = FUN_180026970(DAT_181106fb0,DAT_181106fb8,param_1);
  FUN_1804e4e90(&DAT_1809f5a50);
  return lVar1 != lVar2;
}



/* ===== 18033db20 FUN_18033db20 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18033db20(char *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  int iVar2;
  char *pcVar3;
  char cVar4;
  undefined8 uVar5;
  float fVar6;
  undefined4 uVar7;
  undefined1 auStack_168 [32];
  float local_148;
  undefined4 local_144;
  float local_140;
  undefined4 local_13c;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_58;
  undefined1 local_48 [32];
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_168;
  uVar5 = FUN_1802b3fe0(local_48,"delete");
  fVar6 = (float)FUN_1802bca00(uVar5);
  if (fVar6 <= DAT_1808acb70) {
    fVar6 = DAT_1808acb70;
  }
  uVar7 = FUN_18053fc00(fVar6 + DAT_1808ac8e4 + DAT_1808ac1f4);
  lVar1 = DAT_180ca0a50;
  *(uint *)(DAT_180ca0a50 + 0x1f38) = *(uint *)(DAT_180ca0a50 + 0x1f38) | 2;
  *(undefined4 *)(lVar1 + 0x1f58) = uVar7;
  *(undefined4 *)(lVar1 + 0x1f5c) = 0;
  *(undefined4 *)(lVar1 + 8000) = 1;
  FUN_18000f890(local_48);
  local_148 = DAT_1811074a8 - DAT_1808ac7ec;
  local_13c = DAT_1811074ac;
  local_144 = DAT_1811074ac;
  local_140 = local_148;
  FUN_1802b5160("##hotkey",&local_148,&local_140);
  DAT_180cd04ac = 1;
  DAT_180cd04ad = 1;
  local_148 = 7.0;
  local_144 = 0x40e00000;
  cVar4 = FUN_1802b5260("##hotkey",&local_148);
  iVar2 = DAT_180cd1300;
  if (cVar4 == '\0') {
    return;
  }
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    if (DAT_180cd1868 == param_1) {
      LOCK();
      DAT_180cd1868 = (char *)0x0;
      UNLOCK();
      if ((DAT_180cd1300 != -1) &&
         ((DAT_180cd1300 != 1 || (cVar4 = FUN_1803e7af0(1), cVar4 == '\0')))) {
        *(int *)(param_1 + 0x60) = iVar2;
      }
    }
    pcVar3 = DAT_180cd1360;
    FUN_18031b0a0(param_1,DAT_180cd1360 == param_1);
    FUN_1802bf070(param_1);
    FUN_1802b7f90();
    FUN_1802bf7c0(param_3,param_1);
    FUN_18031afb0(param_1);
    FUN_1802b7f90();
    cVar4 = FUN_1802bd4a0("delete");
    if (cVar4 == '\0') goto LAB_18033dd76;
    if (pcVar3 == param_1) {
      LOCK();
      DAT_180cd1360 = (char *)0x0;
      UNLOCK();
    }
    local_d8 = 0;
    uStack_d0 = CONCAT31(uStack_d0._1_3_,1);
    uStack_cc = 0;
    local_58 = CONCAT22(local_58._2_2_,0x100);
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
    param_1[0x20] = '\0';
    param_1[0x21] = '\0';
    param_1[0x22] = '\0';
    param_1[0x23] = '\0';
    param_1[0x24] = '\0';
    param_1[0x25] = '\0';
    param_1[0x26] = '\0';
    param_1[0x27] = '\0';
    param_1[0x28] = '\0';
    param_1[0x29] = '\0';
    param_1[0x2a] = '\0';
    param_1[0x2b] = '\0';
    param_1[0x2c] = '\0';
    param_1[0x2d] = '\0';
    param_1[0x2e] = '\0';
    param_1[0x2f] = '\0';
    param_1[0x30] = '\0';
    param_1[0x31] = '\0';
    param_1[0x32] = '\0';
    param_1[0x33] = '\0';
    param_1[0x34] = '\0';
    param_1[0x35] = '\0';
    param_1[0x36] = '\0';
    param_1[0x37] = '\0';
    param_1[0x38] = '\0';
    param_1[0x39] = '\0';
    param_1[0x3a] = '\0';
    param_1[0x3b] = '\0';
    param_1[0x3c] = '\0';
    param_1[0x3d] = '\0';
    param_1[0x3e] = '\0';
    param_1[0x3f] = '\0';
    param_1[0x40] = '\0';
    param_1[0x41] = '\0';
    param_1[0x42] = '\0';
    param_1[0x43] = '\0';
    param_1[0x44] = '\0';
    param_1[0x45] = '\0';
    param_1[0x46] = '\0';
    param_1[0x47] = '\0';
    param_1[0x48] = '\0';
    param_1[0x49] = '\0';
    param_1[0x4a] = '\0';
    param_1[0x4b] = '\0';
    param_1[0x4c] = '\0';
    param_1[0x4d] = '\0';
    param_1[0x4e] = '\0';
    param_1[0x4f] = '\0';
    param_1[0x50] = '\0';
    param_1[0x51] = '\0';
    param_1[0x52] = '\0';
    param_1[0x53] = '\0';
    param_1[0x54] = '\0';
    param_1[0x55] = '\0';
    param_1[0x56] = '\0';
    param_1[0x57] = '\0';
    param_1[0x58] = '\0';
    param_1[0x59] = '\0';
    param_1[0x5a] = '\0';
    param_1[0x5b] = '\0';
    param_1[0x5c] = '\0';
    param_1[0x5d] = '\0';
    param_1[0x5e] = '\0';
    param_1[0x5f] = '\0';
    param_1[0x60] = '\0';
    param_1[0x61] = '\0';
    param_1[0x62] = '\0';
    param_1[99] = '\0';
    param_1[100] = '\0';
    param_1[0x65] = '\0';
    param_1[0x66] = '\0';
    param_1[0x67] = '\0';
    *(undefined4 *)(param_1 + 0x68) = uStack_d0;
    param_1[0x6c] = '\0';
    param_1[0x6d] = '\0';
    param_1[0x6e] = '\0';
    param_1[0x6f] = '\0';
    param_1[0x70] = '\0';
    param_1[0x71] = '\0';
    param_1[0x72] = '\0';
    param_1[0x73] = '\0';
    param_1[0x74] = '\0';
    param_1[0x75] = '\0';
    param_1[0x76] = '\0';
    param_1[0x77] = '\0';
    param_1[0x78] = '\0';
    param_1[0x79] = '\0';
    param_1[0x7a] = '\0';
    param_1[0x7b] = '\0';
    param_1[0x7c] = '\0';
    param_1[0x7d] = '\0';
    param_1[0x7e] = '\0';
    param_1[0x7f] = '\0';
    param_1[0x80] = '\0';
    param_1[0x81] = '\0';
    param_1[0x82] = '\0';
    param_1[0x83] = '\0';
    param_1[0x84] = '\0';
    param_1[0x85] = '\0';
    param_1[0x86] = '\0';
    param_1[0x87] = '\0';
    param_1[0x88] = '\0';
    param_1[0x89] = '\0';
    param_1[0x8a] = '\0';
    param_1[0x8b] = '\0';
    param_1[0x8c] = '\0';
    param_1[0x8d] = '\0';
    param_1[0x8e] = '\0';
    param_1[0x8f] = '\0';
    param_1[0x90] = '\0';
    param_1[0x91] = '\0';
    param_1[0x92] = '\0';
    param_1[0x93] = '\0';
    param_1[0x94] = '\0';
    param_1[0x95] = '\0';
    param_1[0x96] = '\0';
    param_1[0x97] = '\0';
    param_1[0x98] = '\0';
    param_1[0x99] = '\0';
    param_1[0x9a] = '\0';
    param_1[0x9b] = '\0';
    param_1[0x9c] = '\0';
    param_1[0x9d] = '\0';
    param_1[0x9e] = '\0';
    param_1[0x9f] = '\0';
    param_1[0xa0] = '\0';
    param_1[0xa1] = '\0';
    param_1[0xa2] = '\0';
    param_1[0xa3] = '\0';
    param_1[0xa4] = '\0';
    param_1[0xa5] = '\0';
    param_1[0xa6] = '\0';
    param_1[0xa7] = '\0';
    param_1[0xa8] = '\0';
    param_1[0xa9] = '\0';
    param_1[0xaa] = '\0';
    param_1[0xab] = '\0';
    param_1[0xac] = '\0';
    param_1[0xad] = '\0';
    param_1[0xae] = '\0';
    param_1[0xaf] = '\0';
    param_1[0xb0] = '\0';
    param_1[0xb1] = '\0';
    param_1[0xb2] = '\0';
    param_1[0xb3] = '\0';
    param_1[0xb4] = '\0';
    param_1[0xb5] = '\0';
    param_1[0xb6] = '\0';
    param_1[0xb7] = '\0';
    param_1[0xb8] = '\0';
    param_1[0xb9] = '\0';
    param_1[0xba] = '\0';
    param_1[0xbb] = '\0';
    param_1[0xbc] = '\0';
    param_1[0xbd] = '\0';
    param_1[0xbe] = '\0';
    param_1[0xbf] = '\0';
    param_1[0xc0] = '\0';
    param_1[0xc1] = '\0';
    param_1[0xc2] = '\0';
    param_1[0xc3] = '\0';
    param_1[0xc4] = '\0';
    param_1[0xc5] = '\0';
    param_1[0xc6] = '\0';
    param_1[199] = '\0';
    param_1[200] = '\0';
    param_1[0xc9] = '\0';
    param_1[0xca] = '\0';
    param_1[0xcb] = '\0';
    param_1[0xcc] = '\0';
    param_1[0xcd] = '\0';
    param_1[0xce] = '\0';
    param_1[0xcf] = '\0';
    param_1[0xd0] = '\0';
    param_1[0xd1] = '\0';
    param_1[0xd2] = '\0';
    param_1[0xd3] = '\0';
    param_1[0xd4] = '\0';
    param_1[0xd5] = '\0';
    param_1[0xd6] = '\0';
    param_1[0xd7] = '\0';
    param_1[0xd8] = '\0';
    param_1[0xd9] = '\0';
    param_1[0xda] = '\0';
    param_1[0xdb] = '\0';
    param_1[0xdc] = '\0';
    param_1[0xdd] = '\0';
    param_1[0xde] = '\0';
    param_1[0xdf] = '\0';
    *(undefined4 *)(param_1 + 0xe0) = local_58;
    DAT_1811071c0 = 0;
  }
  FUN_1803ee1f0();
LAB_18033dd76:
  FUN_1802b5590();
  return;
}



/* ===== 18033dda0 FUN_18033dda0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18033dda0(char *param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  char cVar4;
  undefined8 uVar5;
  float *pfVar6;
  float *pfVar7;
  undefined4 uVar8;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auStack_1f8 [32];
  float local_1d8;
  float local_1d4;
  undefined4 local_1d0;
  float local_1cc;
  undefined4 local_1c8;
  undefined8 local_158;
  uint uStack_150;
  undefined4 uStack_14c;
  undefined4 local_d8;
  undefined1 local_c8 [32];
  undefined1 local_a8 [96];
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_1f8;
  uVar5 = FUN_1802b3fe0(local_c8,"delete");
  auVar9._0_8_ = FUN_1802bca00(uVar5);
  auVar9._8_8_ = extraout_XMM0_Qb;
  if ((float)auVar9._0_8_ <= DAT_1808acb70) {
    auVar9._0_4_ = DAT_1808acb70;
  }
  auVar10._4_12_ = auVar9._4_12_;
  auVar10._0_4_ = auVar9._0_4_ + DAT_1808ac8e4 + DAT_1808ac1f4;
  uVar8 = FUN_18053fc00(auVar10._0_8_);
  lVar2 = DAT_180ca0a50;
  *(uint *)(DAT_180ca0a50 + 0x1f38) = *(uint *)(DAT_180ca0a50 + 0x1f38) | 2;
  *(undefined4 *)(lVar2 + 0x1f58) = uVar8;
  *(undefined4 *)(lVar2 + 0x1f5c) = 0;
  *(undefined4 *)(lVar2 + 8000) = 1;
  FUN_18000f890(local_c8);
  local_1d4 = DAT_1811074a8 - DAT_1808ac7ec;
  local_1d0 = DAT_1811074ac;
  local_1c8 = DAT_1811074ac;
  local_1cc = local_1d4;
  FUN_1802b5160("##hotkey",&local_1cc,&local_1d4);
  DAT_180cd04ac = 1;
  DAT_180cd04ad = 1;
  local_1d4 = 7.0;
  local_1d0 = 0x40e00000;
  cVar4 = FUN_1802b5260("##hotkey",&local_1d4);
  iVar1 = DAT_180cd1300;
  if (cVar4 == '\0') {
    return;
  }
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    if (DAT_180cd1868 == param_1) {
      LOCK();
      DAT_180cd1868 = (char *)0x0;
      UNLOCK();
      if ((DAT_180cd1300 != -1) &&
         ((DAT_180cd1300 != 1 || (cVar4 = FUN_1803e7af0(1), cVar4 == '\0')))) {
        *(int *)(param_1 + 0x60) = iVar1;
      }
    }
    pcVar3 = DAT_180cd1360;
    FUN_18031b0a0(param_1,DAT_180cd1360 == param_1);
    FUN_1802bf070(param_1);
    FUN_1802b7f90();
    iVar1 = *(int *)param_3[2];
    if (0 < iVar1) {
      lVar2 = *(longlong *)param_3[1];
      uVar5 = *(undefined8 *)*param_3;
      FUN_1802c3290(local_a8,&PTR_s_nl_glyph_link_1806a08c0);
      local_1cc = 0.0;
      local_1d4 = (float)(iVar1 + -1);
      local_1d8 = (float)FUN_1804f3280();
      pfVar7 = &local_1cc;
      if (-1 < (int)local_1d8) {
        pfVar7 = &local_1d8;
      }
      pfVar6 = &local_1d4;
      if ((int)local_1d8 <= iVar1 + -1) {
        pfVar6 = pfVar7;
      }
      local_1d8 = *pfVar6;
      *(float *)(param_1 + 0x6c) = (float)(int)local_1d8;
      cVar4 = FUN_1802c2640(uVar5,&local_1d8,lVar2,iVar1);
      if (cVar4 != '\0') {
        *(float *)(param_1 + 0x6c) = (float)(int)local_1d8;
      }
      snprintf(param_1 + 0xa0,0x30,&DAT_1806d3198,
               *(undefined8 *)(lVar2 + (longlong)(int)local_1d8 * 8));
      FUN_1802c3560(local_a8);
      if (((cVar4 != '\0') && ((char *)((longlong)&DAT_18095d52c + 3) < param_1)) &&
         (param_1 < &DAT_180960e30)) {
        FUN_1801c4b90((longlong)(param_1 + -0x18095d530) / 0xe4);
      }
    }
    FUN_18031afb0(param_1);
    FUN_1802b7f90();
    cVar4 = FUN_1802bd4a0("delete");
    if (cVar4 == '\0') goto LAB_18033e0ea;
    if (pcVar3 == param_1) {
      LOCK();
      DAT_180cd1360 = (char *)0x0;
      UNLOCK();
    }
    local_158 = 0;
    uStack_150 = CONCAT31(uStack_150._1_3_,1);
    uStack_14c = 0;
    local_d8 = CONCAT22(local_d8._2_2_,0x100);
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
    param_1[0x20] = '\0';
    param_1[0x21] = '\0';
    param_1[0x22] = '\0';
    param_1[0x23] = '\0';
    param_1[0x24] = '\0';
    param_1[0x25] = '\0';
    param_1[0x26] = '\0';
    param_1[0x27] = '\0';
    param_1[0x28] = '\0';
    param_1[0x29] = '\0';
    param_1[0x2a] = '\0';
    param_1[0x2b] = '\0';
    param_1[0x2c] = '\0';
    param_1[0x2d] = '\0';
    param_1[0x2e] = '\0';
    param_1[0x2f] = '\0';
    param_1[0x30] = '\0';
    param_1[0x31] = '\0';
    param_1[0x32] = '\0';
    param_1[0x33] = '\0';
    param_1[0x34] = '\0';
    param_1[0x35] = '\0';
    param_1[0x36] = '\0';
    param_1[0x37] = '\0';
    param_1[0x38] = '\0';
    param_1[0x39] = '\0';
    param_1[0x3a] = '\0';
    param_1[0x3b] = '\0';
    param_1[0x3c] = '\0';
    param_1[0x3d] = '\0';
    param_1[0x3e] = '\0';
    param_1[0x3f] = '\0';
    param_1[0x40] = '\0';
    param_1[0x41] = '\0';
    param_1[0x42] = '\0';
    param_1[0x43] = '\0';
    param_1[0x44] = '\0';
    param_1[0x45] = '\0';
    param_1[0x46] = '\0';
    param_1[0x47] = '\0';
    param_1[0x48] = '\0';
    param_1[0x49] = '\0';
    param_1[0x4a] = '\0';
    param_1[0x4b] = '\0';
    param_1[0x4c] = '\0';
    param_1[0x4d] = '\0';
    param_1[0x4e] = '\0';
    param_1[0x4f] = '\0';
    param_1[0x50] = '\0';
    param_1[0x51] = '\0';
    param_1[0x52] = '\0';
    param_1[0x53] = '\0';
    param_1[0x54] = '\0';
    param_1[0x55] = '\0';
    param_1[0x56] = '\0';
    param_1[0x57] = '\0';
    param_1[0x58] = '\0';
    param_1[0x59] = '\0';
    param_1[0x5a] = '\0';
    param_1[0x5b] = '\0';
    param_1[0x5c] = '\0';
    param_1[0x5d] = '\0';
    param_1[0x5e] = '\0';
    param_1[0x5f] = '\0';
    param_1[0x60] = '\0';
    param_1[0x61] = '\0';
    param_1[0x62] = '\0';
    param_1[99] = '\0';
    param_1[100] = '\0';
    param_1[0x65] = '\0';
    param_1[0x66] = '\0';
    param_1[0x67] = '\0';
    *(ulonglong *)(param_1 + 0x68) = (ulonglong)uStack_150;
    param_1[0x70] = '\0';
    param_1[0x71] = '\0';
    param_1[0x72] = '\0';
    param_1[0x73] = '\0';
    param_1[0x74] = '\0';
    param_1[0x75] = '\0';
    param_1[0x76] = '\0';
    param_1[0x77] = '\0';
    param_1[0x78] = '\0';
    param_1[0x79] = '\0';
    param_1[0x7a] = '\0';
    param_1[0x7b] = '\0';
    param_1[0x7c] = '\0';
    param_1[0x7d] = '\0';
    param_1[0x7e] = '\0';
    param_1[0x7f] = '\0';
    param_1[0x80] = '\0';
    param_1[0x81] = '\0';
    param_1[0x82] = '\0';
    param_1[0x83] = '\0';
    param_1[0x84] = '\0';
    param_1[0x85] = '\0';
    param_1[0x86] = '\0';
    param_1[0x87] = '\0';
    param_1[0x88] = '\0';
    param_1[0x89] = '\0';
    param_1[0x8a] = '\0';
    param_1[0x8b] = '\0';
    param_1[0x8c] = '\0';
    param_1[0x8d] = '\0';
    param_1[0x8e] = '\0';
    param_1[0x8f] = '\0';
    param_1[0x90] = '\0';
    param_1[0x91] = '\0';
    param_1[0x92] = '\0';
    param_1[0x93] = '\0';
    param_1[0x94] = '\0';
    param_1[0x95] = '\0';
    param_1[0x96] = '\0';
    param_1[0x97] = '\0';
    param_1[0x98] = '\0';
    param_1[0x99] = '\0';
    param_1[0x9a] = '\0';
    param_1[0x9b] = '\0';
    param_1[0x9c] = '\0';
    param_1[0x9d] = '\0';
    param_1[0x9e] = '\0';
    param_1[0x9f] = '\0';
    param_1[0xa0] = '\0';
    param_1[0xa1] = '\0';
    param_1[0xa2] = '\0';
    param_1[0xa3] = '\0';
    param_1[0xa4] = '\0';
    param_1[0xa5] = '\0';
    param_1[0xa6] = '\0';
    param_1[0xa7] = '\0';
    param_1[0xa8] = '\0';
    param_1[0xa9] = '\0';
    param_1[0xaa] = '\0';
    param_1[0xab] = '\0';
    param_1[0xac] = '\0';
    param_1[0xad] = '\0';
    param_1[0xae] = '\0';
    param_1[0xaf] = '\0';
    param_1[0xb0] = '\0';
    param_1[0xb1] = '\0';
    param_1[0xb2] = '\0';
    param_1[0xb3] = '\0';
    param_1[0xb4] = '\0';
    param_1[0xb5] = '\0';
    param_1[0xb6] = '\0';
    param_1[0xb7] = '\0';
    param_1[0xb8] = '\0';
    param_1[0xb9] = '\0';
    param_1[0xba] = '\0';
    param_1[0xbb] = '\0';
    param_1[0xbc] = '\0';
    param_1[0xbd] = '\0';
    param_1[0xbe] = '\0';
    param_1[0xbf] = '\0';
    param_1[0xc0] = '\0';
    param_1[0xc1] = '\0';
    param_1[0xc2] = '\0';
    param_1[0xc3] = '\0';
    param_1[0xc4] = '\0';
    param_1[0xc5] = '\0';
    param_1[0xc6] = '\0';
    param_1[199] = '\0';
    param_1[200] = '\0';
    param_1[0xc9] = '\0';
    param_1[0xca] = '\0';
    param_1[0xcb] = '\0';
    param_1[0xcc] = '\0';
    param_1[0xcd] = '\0';
    param_1[0xce] = '\0';
    param_1[0xcf] = '\0';
    param_1[0xd0] = '\0';
    param_1[0xd1] = '\0';
    param_1[0xd2] = '\0';
    param_1[0xd3] = '\0';
    param_1[0xd4] = '\0';
    param_1[0xd5] = '\0';
    param_1[0xd6] = '\0';
    param_1[0xd7] = '\0';
    param_1[0xd8] = '\0';
    param_1[0xd9] = '\0';
    param_1[0xda] = '\0';
    param_1[0xdb] = '\0';
    param_1[0xdc] = '\0';
    param_1[0xdd] = '\0';
    param_1[0xde] = '\0';
    param_1[0xdf] = '\0';
    *(undefined4 *)(param_1 + 0xe0) = local_d8;
    DAT_1811071c0 = 0;
  }
  FUN_1803ee1f0();
LAB_18033e0ea:
  FUN_1802b5590();
  return;
}



/* ===== 18033e120 FUN_18033e120 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18033e120(char *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  int iVar2;
  char *pcVar3;
  char cVar4;
  undefined8 uVar5;
  float fVar6;
  undefined4 uVar7;
  undefined1 auStack_168 [32];
  float local_148;
  undefined4 local_144;
  float local_140;
  undefined4 local_13c;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_58;
  undefined1 local_48 [32];
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_168;
  uVar5 = FUN_1802b3fe0(local_48,"delete");
  fVar6 = (float)FUN_1802bca00(uVar5);
  if (fVar6 <= DAT_1808acb70) {
    fVar6 = DAT_1808acb70;
  }
  uVar7 = FUN_18053fc00(fVar6 + DAT_1808ac8e4 + DAT_1808ac1f4);
  lVar1 = DAT_180ca0a50;
  *(uint *)(DAT_180ca0a50 + 0x1f38) = *(uint *)(DAT_180ca0a50 + 0x1f38) | 2;
  *(undefined4 *)(lVar1 + 0x1f58) = uVar7;
  *(undefined4 *)(lVar1 + 0x1f5c) = 0;
  *(undefined4 *)(lVar1 + 8000) = 1;
  FUN_18000f890(local_48);
  local_148 = DAT_1811074a8 - DAT_1808ac7ec;
  local_13c = DAT_1811074ac;
  local_144 = DAT_1811074ac;
  local_140 = local_148;
  FUN_1802b5160("##hotkey",&local_148,&local_140);
  DAT_180cd04ac = 1;
  DAT_180cd04ad = 1;
  local_148 = 7.0;
  local_144 = 0x40e00000;
  cVar4 = FUN_1802b5260("##hotkey",&local_148);
  iVar2 = DAT_180cd1300;
  if (cVar4 == '\0') {
    return;
  }
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    if (DAT_180cd1868 == param_1) {
      LOCK();
      DAT_180cd1868 = (char *)0x0;
      UNLOCK();
      if ((DAT_180cd1300 != -1) &&
         ((DAT_180cd1300 != 1 || (cVar4 = FUN_1803e7af0(1), cVar4 == '\0')))) {
        *(int *)(param_1 + 0x60) = iVar2;
      }
    }
    pcVar3 = DAT_180cd1360;
    FUN_18031b0a0(param_1,DAT_180cd1360 == param_1);
    FUN_1802bf070(param_1);
    FUN_1802b7f90();
    FUN_1802c0880(param_3,param_1);
    FUN_18031afb0(param_1);
    FUN_1802b7f90();
    cVar4 = FUN_1802bd4a0("delete");
    if (cVar4 == '\0') goto LAB_18033e376;
    if (pcVar3 == param_1) {
      LOCK();
      DAT_180cd1360 = (char *)0x0;
      UNLOCK();
    }
    local_d8 = 0;
    uStack_d0 = CONCAT31(uStack_d0._1_3_,1);
    uStack_cc = 0;
    local_58 = CONCAT22(local_58._2_2_,0x100);
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
    param_1[0x20] = '\0';
    param_1[0x21] = '\0';
    param_1[0x22] = '\0';
    param_1[0x23] = '\0';
    param_1[0x24] = '\0';
    param_1[0x25] = '\0';
    param_1[0x26] = '\0';
    param_1[0x27] = '\0';
    param_1[0x28] = '\0';
    param_1[0x29] = '\0';
    param_1[0x2a] = '\0';
    param_1[0x2b] = '\0';
    param_1[0x2c] = '\0';
    param_1[0x2d] = '\0';
    param_1[0x2e] = '\0';
    param_1[0x2f] = '\0';
    param_1[0x30] = '\0';
    param_1[0x31] = '\0';
    param_1[0x32] = '\0';
    param_1[0x33] = '\0';
    param_1[0x34] = '\0';
    param_1[0x35] = '\0';
    param_1[0x36] = '\0';
    param_1[0x37] = '\0';
    param_1[0x38] = '\0';
    param_1[0x39] = '\0';
    param_1[0x3a] = '\0';
    param_1[0x3b] = '\0';
    param_1[0x3c] = '\0';
    param_1[0x3d] = '\0';
    param_1[0x3e] = '\0';
    param_1[0x3f] = '\0';
    param_1[0x40] = '\0';
    param_1[0x41] = '\0';
    param_1[0x42] = '\0';
    param_1[0x43] = '\0';
    param_1[0x44] = '\0';
    param_1[0x45] = '\0';
    param_1[0x46] = '\0';
    param_1[0x47] = '\0';
    param_1[0x48] = '\0';
    param_1[0x49] = '\0';
    param_1[0x4a] = '\0';
    param_1[0x4b] = '\0';
    param_1[0x4c] = '\0';
    param_1[0x4d] = '\0';
    param_1[0x4e] = '\0';
    param_1[0x4f] = '\0';
    param_1[0x50] = '\0';
    param_1[0x51] = '\0';
    param_1[0x52] = '\0';
    param_1[0x53] = '\0';
    param_1[0x54] = '\0';
    param_1[0x55] = '\0';
    param_1[0x56] = '\0';
    param_1[0x57] = '\0';
    param_1[0x58] = '\0';
    param_1[0x59] = '\0';
    param_1[0x5a] = '\0';
    param_1[0x5b] = '\0';
    param_1[0x5c] = '\0';
    param_1[0x5d] = '\0';
    param_1[0x5e] = '\0';
    param_1[0x5f] = '\0';
    param_1[0x60] = '\0';
    param_1[0x61] = '\0';
    param_1[0x62] = '\0';
    param_1[99] = '\0';
    param_1[100] = '\0';
    param_1[0x65] = '\0';
    param_1[0x66] = '\0';
    param_1[0x67] = '\0';
    *(undefined4 *)(param_1 + 0x68) = uStack_d0;
    param_1[0x6c] = '\0';
    param_1[0x6d] = '\0';
    param_1[0x6e] = '\0';
    param_1[0x6f] = '\0';
    param_1[0x70] = '\0';
    param_1[0x71] = '\0';
    param_1[0x72] = '\0';
    param_1[0x73] = '\0';
    param_1[0x74] = '\0';
    param_1[0x75] = '\0';
    param_1[0x76] = '\0';
    param_1[0x77] = '\0';
    param_1[0x78] = '\0';
    param_1[0x79] = '\0';
    param_1[0x7a] = '\0';
    param_1[0x7b] = '\0';
    param_1[0x7c] = '\0';
    param_1[0x7d] = '\0';
    param_1[0x7e] = '\0';
    param_1[0x7f] = '\0';
    param_1[0x80] = '\0';
    param_1[0x81] = '\0';
    param_1[0x82] = '\0';
    param_1[0x83] = '\0';
    param_1[0x84] = '\0';
    param_1[0x85] = '\0';
    param_1[0x86] = '\0';
    param_1[0x87] = '\0';
    param_1[0x88] = '\0';
    param_1[0x89] = '\0';
    param_1[0x8a] = '\0';
    param_1[0x8b] = '\0';
    param_1[0x8c] = '\0';
    param_1[0x8d] = '\0';
    param_1[0x8e] = '\0';
    param_1[0x8f] = '\0';
    param_1[0x90] = '\0';
    param_1[0x91] = '\0';
    param_1[0x92] = '\0';
    param_1[0x93] = '\0';
    param_1[0x94] = '\0';
    param_1[0x95] = '\0';
    param_1[0x96] = '\0';
    param_1[0x97] = '\0';
    param_1[0x98] = '\0';
    param_1[0x99] = '\0';
    param_1[0x9a] = '\0';
    param_1[0x9b] = '\0';
    param_1[0x9c] = '\0';
    param_1[0x9d] = '\0';
    param_1[0x9e] = '\0';
    param_1[0x9f] = '\0';
    param_1[0xa0] = '\0';
    param_1[0xa1] = '\0';
    param_1[0xa2] = '\0';
    param_1[0xa3] = '\0';
    param_1[0xa4] = '\0';
    param_1[0xa5] = '\0';
    param_1[0xa6] = '\0';
    param_1[0xa7] = '\0';
    param_1[0xa8] = '\0';
    param_1[0xa9] = '\0';
    param_1[0xaa] = '\0';
    param_1[0xab] = '\0';
    param_1[0xac] = '\0';
    param_1[0xad] = '\0';
    param_1[0xae] = '\0';
    param_1[0xaf] = '\0';
    param_1[0xb0] = '\0';
    param_1[0xb1] = '\0';
    param_1[0xb2] = '\0';
    param_1[0xb3] = '\0';
    param_1[0xb4] = '\0';
    param_1[0xb5] = '\0';
    param_1[0xb6] = '\0';
    param_1[0xb7] = '\0';
    param_1[0xb8] = '\0';
    param_1[0xb9] = '\0';
    param_1[0xba] = '\0';
    param_1[0xbb] = '\0';
    param_1[0xbc] = '\0';
    param_1[0xbd] = '\0';
    param_1[0xbe] = '\0';
    param_1[0xbf] = '\0';
    param_1[0xc0] = '\0';
    param_1[0xc1] = '\0';
    param_1[0xc2] = '\0';
    param_1[0xc3] = '\0';
    param_1[0xc4] = '\0';
    param_1[0xc5] = '\0';
    param_1[0xc6] = '\0';
    param_1[199] = '\0';
    param_1[200] = '\0';
    param_1[0xc9] = '\0';
    param_1[0xca] = '\0';
    param_1[0xcb] = '\0';
    param_1[0xcc] = '\0';
    param_1[0xcd] = '\0';
    param_1[0xce] = '\0';
    param_1[0xcf] = '\0';
    param_1[0xd0] = '\0';
    param_1[0xd1] = '\0';
    param_1[0xd2] = '\0';
    param_1[0xd3] = '\0';
    param_1[0xd4] = '\0';
    param_1[0xd5] = '\0';
    param_1[0xd6] = '\0';
    param_1[0xd7] = '\0';
    param_1[0xd8] = '\0';
    param_1[0xd9] = '\0';
    param_1[0xda] = '\0';
    param_1[0xdb] = '\0';
    param_1[0xdc] = '\0';
    param_1[0xdd] = '\0';
    param_1[0xde] = '\0';
    param_1[0xdf] = '\0';
    *(undefined4 *)(param_1 + 0xe0) = local_58;
    DAT_1811071c0 = 0;
  }
  FUN_1803ee1f0();
LAB_18033e376:
  FUN_1802b5590();
  return;
}



/* ===== 18033e3a0 FUN_18033e3a0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_18033e3a0(undefined8 param_1,float *param_2,float param_3,float param_4,undefined8 param_5,
             uint param_6)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  double dVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  undefined *puVar10;
  char cVar11;
  undefined1 uVar12;
  char cVar13;
  uint uVar14;
  undefined4 uVar15;
  int iVar16;
  longlong lVar17;
  float *pfVar18;
  longlong lVar19;
  float *pfVar20;
  undefined8 *puVar21;
  undefined **ppuVar22;
  undefined **ppuVar23;
  char *pcVar24;
  uint uVar25;
  undefined8 uVar26;
  byte bVar27;
  ulonglong uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 uVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  undefined1 auStack_2a8 [32];
  undefined8 *local_288;
  undefined **local_280;
  undefined8 *local_278;
  undefined8 local_270;
  ulonglong local_268;
  undefined4 local_260;
  undefined4 local_258;
  char local_248;
  undefined8 local_240;
  undefined8 uStack_238;
  float local_230;
  float local_22c;
  float local_228 [2];
  undefined8 local_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  float local_1f0;
  float local_1ec;
  float local_1e8;
  float local_1e4;
  float local_1e0;
  undefined4 local_1dc;
  undefined4 local_1d8;
  float local_1d0;
  float local_1cc;
  undefined *local_1c8;
  undefined8 uStack_1c0;
  float local_1b8 [12];
  float local_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  undefined8 local_178;
  undefined8 local_170;
  float local_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  undefined8 local_148;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  ulonglong local_f8;
  
  local_f8 = DAT_180919500 ^ (ulonglong)auStack_2a8;
  local_178 = param_5;
  local_1f0 = param_3;
  local_1ec = param_4;
  local_170 = param_1;
  lVar17 = FUN_1800fbe90(param_2);
  if (lVar17 != 0) {
    local_228[0] = 0.0;
    local_230 = 0.0;
    cVar11 = FUN_180312030(lVar17,local_228,&local_230);
    if (cVar11 != '\0') {
      local_1f0 = local_228[0];
      local_1ec = local_230;
    }
    FUN_1802bcff0(lVar17,*param_2,param_5);
  }
  uVar14 = FUN_1803e8900(*(undefined8 *)(DAT_180ca0a50 + 0x14f8),param_1);
  pcVar24 = "##row_hover";
  bVar27 = 0x23;
  uVar25 = ~uVar14;
  do {
    pcVar24 = pcVar24 + 1;
    if (((bVar27 == 0x23) && (*pcVar24 == 0x23)) && (pcVar24[1] == 0x23)) {
      pcVar24 = pcVar24 + 2;
      uVar25 = ~uVar14;
    }
    else {
      uVar25 = uVar25 >> 8 ^
               *(uint *)(&DAT_1806c25c0 + ((ulonglong)(uVar25 & 0xff) ^ (ulonglong)bVar27) * 4);
    }
    bVar27 = *pcVar24;
  } while (bVar27 != 0);
  uVar25 = ~uVar25;
  if ((DAT_1809f72e0 != '\0') && (DAT_1809f72e2 == '\0')) {
    uVar28 = (((((ulonglong)(uVar25 & 0xff) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
               (ulonglong)(uVar25 >> 8 & 0xff)) * 0x100000001b3 ^ (ulonglong)(uVar25 >> 0x10 & 0xff)
              ) * 0x100000001b3 ^ (ulonglong)(uVar25 >> 0x18)) * 0x100000001b3 & DAT_181107640;
    lVar17 = *(longlong *)(DAT_181107628 + 8 + uVar28 * 0x10);
    if (lVar17 == DAT_181107618) {
LAB_18033e5a3:
      lVar17 = DAT_181107618;
    }
    else {
      uVar14 = *(uint *)(lVar17 + 0x10);
      while (uVar25 != uVar14) {
        if (lVar17 == *(longlong *)(DAT_181107628 + uVar28 * 0x10)) goto LAB_18033e5a3;
        lVar17 = *(longlong *)(lVar17 + 8);
        uVar14 = *(uint *)(lVar17 + 0x10);
      }
      if (lVar17 == 0) goto LAB_18033e5a3;
    }
    if (lVar17 == DAT_181107618) {
      uVar15 = 0;
    }
    else {
      uVar15 = *(undefined4 *)(lVar17 + 0x14);
    }
    DAT_1811074b0 = FUN_1802b38e0(DAT_180960ef8,DAT_180960ec8,uVar15);
  }
  pfVar18 = (float *)FUN_1802b9e90(&local_1e8,param_1);
  fVar29 = *pfVar18;
  fVar5 = pfVar18[1];
  fVar6 = pfVar18[2];
  fVar30 = pfVar18[3];
  uVar26 = *(undefined8 *)(pfVar18 + 4);
  fVar40 = (float)((ulonglong)uVar26 >> 0x20);
  bVar9 = false;
  DAT_1811074b0 = 0;
  local_158 = fVar29;
  fStack_154 = fVar5;
  fStack_150 = fVar6;
  fStack_14c = fVar30;
  FUN_1803e89e0(param_1);
  local_138 = 0;
  uStack_130 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_108 = 0;
  uStack_100 = 0;
  snprintf(&local_138,0x40,param_5,(double)*param_2);
  fVar32 = DAT_181107670;
  fVar41 = DAT_1808ac8b0;
  fVar31 = DAT_1808ac540;
  local_228[0] = DAT_1808ac540;
  local_188 = fVar29;
  fStack_184 = fVar5;
  fStack_180 = fVar6;
  fStack_17c = fVar30;
  local_148 = uVar26;
  if ((DAT_1809f72e0 == '\0') || (DAT_1809f72e2 != '\0')) {
    bVar7 = false;
    if (DAT_180cd048d == '\0') {
      if (DAT_1809f72e0 == '\0') {
      }
      else {
        fVar29 = DAT_1809f72f0 + DAT_1809f72e4;
      }
      auVar38._4_4_ = fVar6;
      auVar38._0_4_ = fVar6;
      auVar38._8_4_ = fVar6;
      auVar38._12_4_ = fVar6;
      auVar39._4_12_ = auVar38._4_12_;
      auVar39._0_4_ = (fVar6 - fVar29) / _DAT_1808ac590 + DAT_1808ac8b0;
      uVar26 = auVar39._0_8_;
    }
    else {
      auVar36._4_4_ = fVar6;
      auVar36._0_4_ = fVar6;
      auVar36._8_4_ = fVar6;
      auVar36._12_4_ = fVar6;
      auVar37._4_12_ = auVar36._4_12_;
      auVar37._0_4_ = fVar6 - fVar29;
      uVar26 = auVar37._0_8_;
    }
    DAT_181107670 = 0.0;
    fVar29 = (float)FUN_18053f0d0(uVar26);
    fVar29 = fVar29 - fVar32;
  }
  else {
    bVar7 = true;
    auVar34._4_4_ = fVar6;
    auVar34._0_4_ = fVar6;
    auVar34._8_4_ = fVar6;
    auVar34._12_4_ = fVar6;
    auVar35._4_12_ = auVar34._4_12_;
    auVar35._0_4_ = ((fVar6 - fVar29) + fVar40 + DAT_1809f72e4 * DAT_1808ac540) / DAT_1808ac5e0;
    fVar29 = (float)FUN_18053f0d0(auVar35._0_8_);
  }
  lVar17 = DAT_181107a18;
  if ((DAT_181107a18 == 0) && (lVar17 = DAT_181107a08, DAT_181107a08 == 0)) {
    lVar17 = *(longlong *)(DAT_180ca0a50 + 0x11f0);
  }
  local_208 = *(undefined **)(DAT_180ca0a50 + 0x11f0);
  uStack_200 = CONCAT44(*(undefined4 *)(DAT_180ca0a50 + 0x1200),
                        *(undefined4 *)(DAT_180ca0a50 + 0x1204));
  local_1cc = fVar29;
  FUN_1803f6200(DAT_180ca0a50 + 0x1fe0,&local_208);
  uVar15 = DAT_1808ac8fc;
  FUN_1803e8680(lVar17,DAT_1808ac8fc,0);
  if (bVar7) {
    fVar41 = 0.0;
  }
  else {
    local_258 = 0;
    local_268 = 0;
    local_270 = 0;
    local_278 = (undefined8 *)0x0;
    local_280 = (undefined **)&local_138;
    local_288 = (undefined8 *)((ulonglong)local_288 & 0xffffffff00000000);
    FUN_18040a2f0(&local_208,*(undefined8 *)(DAT_180ca0a50 + 0x11f0),uVar15,DAT_1808acd08);
    fVar41 = (float)FUN_18053f0d0((float)local_208 + fVar41);
  }
  lVar17 = DAT_180ca0a50;
  lVar19 = (longlong)*(int *)(DAT_180ca0a50 + 0x1fe0);
  if (*(int *)(DAT_180ca0a50 + 0x1fe0) < 1) {
    FUN_1803ebc00("Calling PopFont() too many times!");
  }
  else {
    lVar2 = *(longlong *)(DAT_180ca0a50 + 0x1fe8);
    FUN_1803e8680(*(undefined8 *)(lVar2 + -0x10 + lVar19 * 0x10),
                  *(undefined4 *)(lVar2 + -8 + lVar19 * 0x10),
                  *(undefined4 *)(lVar2 + -4 + lVar19 * 0x10));
    *(int *)(lVar17 + 0x1fe0) = *(int *)(lVar17 + 0x1fe0) + -1;
  }
  lVar17 = DAT_180ca0a50;
  fVar32 = DAT_1808ac34c;
  fVar43 = fVar30 * DAT_1808ac1f4 + fVar5;
  local_1d0 = fVar6 - fVar41;
  local_1f8 = CONCAT44(local_1f8._4_4_,fVar43 - DAT_1808ac8ac);
  local_220 = (undefined *)CONCAT44((fVar43 - DAT_1808ac8ac) + DAT_1808ac97c,fVar6);
  fVar29 = fVar6 - fVar29;
  if (bVar7) {
    local_228[0] = DAT_1808ac658;
    fVar41 = 0.0;
    fVar42 = fVar6;
    fVar31 = DAT_1808ac658;
  }
  else {
    fVar29 = fVar29 + DAT_1808ac750;
    fVar42 = (local_1d0 - DAT_1808ac7ac) - DAT_1808ac750;
    fVar41 = DAT_1808ac750;
  }
  fVar44 = DAT_1808ac34c;
  if (DAT_1808ac34c <= fVar42 - fVar29) {
    fVar44 = fVar42 - fVar29;
  }
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  lVar19 = *(longlong *)(lVar17 + 0x14f8);
  lVar2 = *(longlong *)(lVar19 + 0x2c8);
  local_168 = fVar30;
  fStack_164 = fVar30;
  fStack_160 = fVar30;
  fStack_15c = fVar30;
  if (bVar7) {
    fVar40 = (local_188 - fVar40) - DAT_1809f72e4;
    fVar41 = DAT_1809f72e4 + fVar6;
    local_218 = CONCAT44(fVar30 + fVar5,fVar41);
    *(undefined1 *)(lVar19 + 0xce) = 1;
    lVar17 = *(longlong *)(lVar17 + 0x14f8);
    local_208 = (undefined *)CONCAT44(fVar5,fVar40);
    *(undefined **)(lVar17 + 0x118) = local_208;
    *(undefined1 *)(lVar17 + 0x159) = 1;
    local_240 = (undefined *)CONCAT44(fVar30,fVar41 - fVar40);
    FUN_180415e30("##row",&local_240,0);
    uVar12 = FUN_1803dd930(0);
    iVar16 = *(int *)(DAT_180ca0a50 + 0x1578);
    if (iVar16 == 0) {
      uVar15 = 0;
    }
    else {
      uVar15 = CONCAT31((int3)((uint)iVar16 >> 8),iVar16 == *(int *)(DAT_180ca0a50 + 0x1ee8));
    }
    fVar30 = (float)FUN_1802b3850(uVar25,uVar15,uVar12);
    if (0.0 < fVar30) {
      local_1b8[2] = 1.0;
      local_1b8[0] = 0.0;
      local_1b8[1] = fVar30 * DAT_1808ac1b0 * DAT_1808ac2cc;
      pfVar18 = local_1b8;
      if (0.0 <= local_1b8[1]) {
        pfVar18 = local_1b8 + 1;
      }
      pfVar20 = local_1b8 + 2;
      if (local_1b8[1] <= fVar32) {
        pfVar20 = pfVar18;
      }
      local_280 = (undefined **)((ulonglong)local_280 & 0xffffffff00000000);
      local_288 = (undefined8 *)CONCAT44(local_288._4_4_,DAT_1808ac854);
      FUN_1803fe590(lVar2,&local_208,&local_218,
                    DAT_180960f44 & 0xffffff |
                    (int)(longlong)(*pfVar20 * DAT_1808acb94 + DAT_1808ac1f4) << 0x18);
    }
  }
  else {
    *(undefined1 *)(lVar19 + 0xce) = 1;
    lVar17 = *(longlong *)(lVar17 + 0x14f8);
    *(float *)(lVar17 + 0x118) = fVar29 - fVar41;
    *(float *)(lVar17 + 0x11c) = fVar5;
    *(undefined1 *)(lVar17 + 0x159) = 1;
    local_240 = (undefined *)CONCAT44(fVar30,fVar41 + fVar41 + fVar44);
    FUN_180415e30("##track",&local_240,0);
  }
  cVar11 = FUN_1803e9690(1,0,0);
  if (cVar11 == '\0') {
LAB_18033eaf9:
    local_248 = '\0';
  }
  else {
    cVar11 = FUN_1803dd930(0);
    local_248 = '\x01';
    if (cVar11 == '\0') goto LAB_18033eaf9;
  }
  if (((*(int *)(DAT_180ca0a50 + 0x1578) == 0) ||
      (*(int *)(DAT_180ca0a50 + 0x1578) != *(int *)(DAT_180ca0a50 + 0x1ee8))) ||
     ((bVar7 && ((*(float *)(DAT_180ca0a50 + 0xaf0) < fVar29 ||
                 (fVar42 < *(float *)(DAT_180ca0a50 + 0xaf0))))))) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
  }
  fVar30 = *(float *)(DAT_180ca0a50 + 0x110);
  local_230 = *(float *)(DAT_180ca0a50 + 0x114);
  cVar11 = FUN_1803dd930(0);
  lVar17 = DAT_180ca0a50;
  if ((((cVar11 != '\0') && (fVar29 <= fVar30)) && (fVar30 <= fVar42)) &&
     ((fVar43 - fVar31 <= local_230 && (local_230 <= fVar43 + fVar31)))) {
    bVar9 = true;
  }
  fVar30 = fVar43 - fVar31;
  local_230 = fVar43 + fVar31;
  local_208 = (undefined *)(double)local_1f0;
  local_1c8 = (undefined *)(double)local_1ec;
  dVar4 = (double)local_1ec - (double)local_208;
  uVar26 = 0;
  if (bVar8) {
    if (0.0 < dVar4) {
      local_1b8[5] = 1.0;
      local_1b8[3] = 0.0;
      if (bVar7) {
        local_1b8[4] = fVar32;
        if (fVar32 <= fVar44 - fVar32) {
          local_1b8[4] = fVar44 - fVar32;
        }
      }
      else {
        local_1b8[4] = fVar44;
      }
      local_1b8[4] = (*(float *)(DAT_180ca0a50 + 0x110) - fVar29) / local_1b8[4];
      pfVar18 = local_1b8 + 3;
      if (0.0 <= local_1b8[4]) {
        pfVar18 = local_1b8 + 4;
      }
      pfVar20 = local_1b8 + 5;
      if (local_1b8[4] <= fVar32) {
        pfVar20 = pfVar18;
      }
      fVar31 = *pfVar20;
      if ((param_6 & 0x20) != 0) {
        fVar31 = fVar31 * fVar31 * fVar31;
      }
      fVar41 = (float)((double)fVar31 * dVar4 + (double)local_208);
      fVar31 = *param_2;
      if (fVar41 != *param_2) {
        *param_2 = fVar41;
        uVar26 = 1;
        fVar31 = fVar41;
      }
      goto LAB_18033ec84;
    }
LAB_18033ec9d:
    local_1b8[7] = 0.0;
  }
  else {
    fVar31 = *param_2;
LAB_18033ec84:
    if (dVar4 <= 0.0) goto LAB_18033ec9d;
    local_1b8[7] = (float)(((double)fVar31 - (double)local_208) / dVar4);
  }
  local_1b8[8] = 1.0;
  local_1b8[6] = 0.0;
  pfVar18 = local_1b8 + 6;
  if (0.0 <= local_1b8[7]) {
    pfVar18 = local_1b8 + 7;
  }
  pfVar20 = local_1b8 + 8;
  if (local_1b8[7] <= fVar32) {
    pfVar20 = pfVar18;
  }
  fVar31 = *pfVar20;
  if ((param_6 & 0x20) != 0) {
    fVar31 = (float)FUN_180518460();
    lVar17 = DAT_180ca0a50;
  }
  fVar31 = fVar31 * fVar44 + fVar29;
  if (bVar8) {
    fVar41 = DAT_1808ac34c;
  }
  else {
    fVar41 = 0.0;
  }
  uVar15 = FUN_1803e8900(*(undefined8 *)(lVar17 + 0x14f8),"##active");
  local_1dc = 0;
  local_1d8 = 0xffffffff;
  local_1e8 = fVar41;
  local_1e4 = fVar41;
  local_1e0 = fVar41;
  local_218._0_4_ = (float)uVar15;
  FUN_18034a380(extraout_XMM0_Qa,&local_240,&local_218,&local_1e8);
  uVar15 = FUN_1802b3660(local_240 + 0x14,fVar41,DAT_1808ac118,0);
  fVar40 = local_228[0];
  fVar32 = local_230;
  fVar41 = DAT_1808ac750;
  local_218 = CONCAT44(local_218._4_4_,uVar15);
  local_280 = (undefined **)((ulonglong)local_280 & 0xffffffff00000000);
  local_288 = (undefined8 *)CONCAT44(local_288._4_4_,local_228[0]);
  if (bVar7) {
    local_240 = (undefined *)CONCAT44(local_230,fVar42);
    local_218 = CONCAT44(fVar30,fVar29);
    FUN_1803fe590(lVar2,&local_218,&local_240,DAT_180960f20);
    if (fVar29 < fVar31) {
      local_240 = (undefined *)CONCAT44(fVar32,fVar31);
      local_218 = CONCAT44(fVar30,fVar29);
      FUN_1803fc200(lVar2,&local_218,&local_240,1);
      local_240 = (undefined *)CONCAT44(fVar32,fVar42);
      local_218 = CONCAT44(fVar30,fVar29);
      local_280 = (undefined **)((ulonglong)local_280 & 0xffffffff00000000);
      local_288 = (undefined8 *)CONCAT44(local_288._4_4_,fVar40);
      FUN_1803fe590(lVar2,&local_218,&local_240,DAT_1809f54bc);
      iVar1 = *(int *)(lVar2 + 0xa0);
      iVar16 = iVar1 + -1;
      *(int *)(lVar2 + 0xa0) = iVar16;
      if (iVar16 == 0) {
        puVar21 = (undefined8 *)(*(longlong *)(lVar2 + 0x38) + 0x34);
      }
      else {
        puVar21 = (undefined8 *)((longlong)(iVar1 + -2) * 0x10 + *(longlong *)(lVar2 + 0xa8));
      }
      uVar33 = puVar21[1];
      *(undefined8 *)(lVar2 + 0x60) = *puVar21;
      *(undefined8 *)(lVar2 + 0x68) = uVar33;
      FUN_1803fbff0(lVar2);
    }
    fVar29 = DAT_1808ac34c;
    if (bVar8 || bVar9) {
      fVar30 = DAT_1808ac34c;
    }
    else {
      fVar30 = 0.0;
    }
    uVar15 = FUN_1803e8900(*(undefined8 *)(DAT_180ca0a50 + 0x14f8),"##bubble");
    local_218 = CONCAT44(local_218._4_4_,uVar15);
    local_1dc = 0;
    local_1d8 = 0xffffffff;
    local_1e8 = fVar30;
    local_1e4 = fVar30;
    local_1e0 = fVar30;
    FUN_18034a380(extraout_XMM0_Qa_00,&local_240,&local_218,&local_1e8);
    local_228[0] = (float)FUN_1802b3660(local_240 + 0x14,fVar30,DAT_1808ac118,0);
    if (0.0 < local_228[0]) {
      lVar17 = DAT_1811079c0;
      if ((DAT_1811079c0 == 0) && (lVar17 = DAT_181107a08, DAT_181107a08 == 0)) {
        lVar17 = *(longlong *)(DAT_180ca0a50 + 0x11f0);
      }
      local_240 = *(undefined **)(DAT_180ca0a50 + 0x11f0);
      uStack_238 = CONCAT44(*(undefined4 *)(DAT_180ca0a50 + 0x1200),
                            *(undefined4 *)(DAT_180ca0a50 + 0x1204));
      FUN_1803f6200(DAT_180ca0a50 + 0x1fe0,&local_240);
      uVar15 = DAT_1808ac91c;
      FUN_1803e8680(lVar17,DAT_1808ac91c,0);
      local_258 = 0;
      local_268 = 0;
      local_270 = 0;
      local_278 = (undefined8 *)0x0;
      local_280 = (undefined **)&local_138;
      local_288 = (undefined8 *)CONCAT44(local_288._4_4_,DAT_1808acda0);
      FUN_18040a2f0(&local_240,*(undefined8 *)(DAT_180ca0a50 + 0x11f0),
                    *(undefined4 *)(DAT_180ca0a50 + 0x1200),DAT_1808acd08);
      lVar17 = DAT_180ca0a50;
      local_230 = (float)(int)((uint)((float)(int)(float)local_240 < (float)local_240) +
                              (int)(float)local_240);
      lVar19 = (longlong)*(int *)(DAT_180ca0a50 + 0x1fe0);
      if (*(int *)(DAT_180ca0a50 + 0x1fe0) < 1) {
        FUN_1803ebc00("Calling PopFont() too many times!");
      }
      else {
        lVar3 = *(longlong *)(DAT_180ca0a50 + 0x1fe8);
        FUN_1803e8680(*(undefined8 *)(lVar3 + -0x10 + lVar19 * 0x10),
                      *(undefined4 *)(lVar3 + -8 + lVar19 * 0x10),
                      *(undefined4 *)(lVar3 + -4 + lVar19 * 0x10));
        *(int *)(lVar17 + 0x1fe0) = *(int *)(lVar17 + 0x1fe0) + -1;
      }
      fVar30 = DAT_1808ac844;
      fVar41 = (float)FUN_18053f0d0();
      fVar31 = DAT_1808ac7ec;
      fVar32 = (float)FUN_18053f0d0();
      local_218 = CONCAT44(fVar41,fVar32);
      local_230 = local_230 + fVar32 + DAT_1808ac8e4;
      local_22c = local_240._4_4_ + fVar41 + fVar30;
      lVar19 = FUN_1803ddf50(**(undefined8 **)(DAT_180ca0a50 + 0x2058),1,"##Foreground");
      fVar41 = local_228[0];
      fVar30 = DAT_1808ac1f4;
      local_280 = (undefined **)((ulonglong)local_280 & 0xffffffff00000000);
      local_288 = (undefined8 *)CONCAT44(local_288._4_4_,DAT_1808ac838);
      FUN_1803fe590(lVar19,&local_218,&local_230,
                    (int)(longlong)((float)(DAT_180960ee0 >> 0x18) * local_228[0] + DAT_1808ac1f4)
                    << 0x18 | DAT_180960ee0 & 0xffffff);
      local_240 = _DAT_1808add20;
      uStack_238 = _UNK_1808add28;
      local_278 = (undefined8 *)CONCAT44(local_278._4_4_,fVar29);
      local_280 = (undefined **)((ulonglong)local_280 & 0xffffffff00000000);
      local_288 = &local_240;
      FUN_18036bcb0(lVar19,&local_218,&local_230,
                    (int)(longlong)((float)(DAT_180960eec >> 0x18) * fVar41 + fVar30) << 0x18 |
                    DAT_180960eec & 0xffffff);
      uVar25 = (int)(longlong)((float)(DAT_180960ec0 >> 0x18) * fVar41 + fVar30) << 0x18;
      local_240 = (undefined *)CONCAT44(local_218._4_4_ + DAT_1808ac710,(float)local_218 + fVar31);
      lVar17 = DAT_1811079c0;
      if ((DAT_1811079c0 == 0) && (lVar17 = DAT_181107a08, DAT_181107a08 == 0)) {
        lVar17 = *(longlong *)(DAT_180ca0a50 + 0x11f0);
      }
      if ((uVar25 != 0) && ((char)local_138 != '\0')) {
        if (lVar17 == 0) {
          lVar17 = *(longlong *)(*(longlong *)(lVar19 + 0x38) + 0x18);
        }
        local_218 = *(undefined8 *)(lVar19 + 0x60);
        uStack_210 = *(undefined8 *)(lVar19 + 0x68);
        local_260 = 0;
        local_268 = local_268 & 0xffffffff00000000;
        local_270 = 0;
        local_278 = &local_138;
        local_280 = (undefined **)&local_218;
        local_288 = (undefined8 *)CONCAT44(local_288._4_4_,uVar25 | DAT_180960ec0 & 0xffffff);
        FUN_18040a900(lVar17,lVar19,uVar15,&local_240);
      }
    }
    cVar11 = FUN_1803dd930(0);
    puVar10 = local_1c8;
    lVar17 = DAT_180ca0a50;
    if (((cVar11 != '\0') && (*(float *)(DAT_180ca0a50 + 0x120) != 0.0)) && (_DAT_1808abf48 < dVar4)
       ) {
      dVar4 = dVar4 / DAT_1808ac6a8;
      local_220 = local_1c8;
      if (*(float *)(DAT_180ca0a50 + 0x120) <= 0.0) {
        dVar4 = (double)CONCAT44((uint)((ulonglong)dVar4 >> 0x20) ^ DAT_1808adeb0._4_4_,
                                 SUB84(dVar4,0) ^ (uint)DAT_1808adeb0);
      }
      local_1c8 = (undefined *)((double)*param_2 + dVar4);
      ppuVar23 = (undefined **)&local_208;
      if ((double)local_208 <= (double)local_1c8) {
        ppuVar23 = &local_1c8;
      }
      ppuVar22 = (undefined **)&local_220;
      if ((double)local_1c8 <= (double)puVar10) {
        ppuVar22 = ppuVar23;
      }
      *param_2 = (float)(double)*ppuVar22;
      uVar26 = 1;
      FUN_1803e8900(*(undefined8 *)(lVar17 + 0x14f8),"##box");
      goto LAB_18033f8a7;
    }
LAB_18033f454:
    iVar16 = FUN_1803e8900(*(undefined8 *)(DAT_180ca0a50 + 0x14f8),"##box");
    if (bVar7) goto LAB_18033f8a7;
    fVar29 = DAT_1808ac1f4;
  }
  else {
    local_240 = (undefined *)CONCAT44(local_230,fVar42 + DAT_1808ac750);
    fVar29 = fVar29 - DAT_1808ac750;
    local_230 = fVar29;
    local_22c = fVar30;
    FUN_1803fe590(lVar2,&local_230,&local_240,DAT_180960f20);
    local_240 = (undefined *)CONCAT44(fVar32,fVar31);
    local_280 = (undefined **)((ulonglong)local_280 & 0xffffffff00000000);
    local_288 = (undefined8 *)CONCAT44(local_288._4_4_,fVar40);
    local_230 = fVar29;
    local_22c = fVar30;
    FUN_1803fe590(lVar2,&local_230,&local_240,DAT_1809f54bc);
    uVar25 = DAT_180960f14;
    fVar29 = DAT_1808ac1f4;
    local_240 = (undefined *)CONCAT44(fVar43,fVar31);
    if ((DAT_180960f14 & 0xff000000) == 0) goto LAB_18033f454;
    if ((float)local_218 + fVar41 < DAT_1808ac1f4) goto LAB_18033f454;
    local_280 = (undefined **)CONCAT44(local_280._4_4_,0x17);
    local_288 = (undefined8 *)CONCAT44(local_288._4_4_,DAT_1808ac7b8);
    FUN_1803fddf0(lVar2,&local_240,(float)local_218 + fVar41,0);
    FUN_1803fd460(lVar2,*(undefined8 *)(lVar2 + 0x58),*(undefined4 *)(lVar2 + 0x50),uVar25);
    *(undefined4 *)(lVar2 + 0x50) = 0;
    iVar16 = FUN_1803e8900(*(undefined8 *)(DAT_180ca0a50 + 0x14f8),"##box");
  }
  lVar19 = DAT_180ca0a50;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  local_1f8 = CONCAT44((float)local_1f8,local_1d0);
  lVar17 = *(longlong *)(lVar19 + 0x14f8);
  *(undefined8 *)(lVar17 + 0x118) = local_1f8;
  *(undefined1 *)(lVar17 + 0x159) = 1;
  if (DAT_181107490 == iVar16) {
    fVar31 = fVar6 - local_1d0;
    *(uint *)(lVar19 + 0x1eb0) = *(uint *)(lVar19 + 0x1eb0) | 1;
    *(float *)(lVar19 + 0x1ec8) = fVar31;
    fVar29 = (DAT_1808ac97c - *(float *)(lVar19 + 0x1200)) * fVar29;
    fVar30 = 0.0;
    if (0.0 <= fVar29) {
      fVar30 = fVar29;
    }
    local_220 = (undefined *)CONCAT44(fVar30,0x40c00000);
    FUN_1803d89a0(0xb,&local_220);
    FUN_1803d8870(0xc,DAT_1808ac7ac);
    if (DAT_180cd0f06 != '\0') {
      FUN_1803e8120();
      DAT_180cd0f06 = '\0';
    }
    local_280 = (undefined **)CONCAT71(local_280._1_7_,1);
    local_288 = (undefined8 *)CONCAT71(local_288._1_7_,1);
    FUN_1802b39d0(&local_240,"##edit",&local_1f8,fVar31);
    local_220 = (undefined *)0x0;
    local_270 = 0;
    local_278 = (undefined8 *)0x0;
    local_280 = (undefined **)CONCAT44(local_280._4_4_,0x1044);
    local_288 = &local_220;
    cVar11 = FUN_18041c570("##edit",0,&DAT_181106e78,0x20);
    if ((*(uint *)(DAT_180ca0a50 + 0x1ef0) & 0x20) == 0) {
      if (((*(int *)(DAT_180ca0a50 + 0x15ac) == *(int *)(DAT_180ca0a50 + 0x1ee8)) &&
          (*(int *)(DAT_180ca0a50 + 0x1ee8) != 0)) &&
         (*(int *)(DAT_180ca0a50 + 4) <= *(int *)(DAT_180ca0a50 + 0x15b0))) {
        bVar27 = 1;
      }
      else {
        bVar27 = 0;
      }
    }
    else {
      bVar27 = (byte)(*(uint *)(DAT_180ca0a50 + 0x1ef0) >> 6) & 1;
    }
    *(float *)(DAT_180ca0a50 + 0xd98) = (float)local_240;
    FUN_1803d87f0(local_240._4_4_);
    FUN_1803d8a40(2);
    if ((cVar11 != '\0') || (bVar27 != 0)) {
      local_220 = (undefined *)0x0;
      local_240 = (undefined *)FUN_180518454(&DAT_181106e78,&local_220);
      if (local_220 != &DAT_181106e78) {
        ppuVar23 = (undefined **)&local_208;
        if ((double)local_208 <= (double)local_240) {
          ppuVar23 = (undefined **)&local_240;
        }
        ppuVar22 = &local_1c8;
        if ((double)local_240 <= (double)local_1c8) {
          ppuVar22 = ppuVar23;
        }
        *param_2 = (float)(double)*ppuVar22;
        uVar26 = 1;
      }
      DAT_181107490 = 0;
    }
  }
  else {
    local_208 = (undefined *)CONCAT44(0x41bda5e3,fVar6 - local_1d0);
    cVar11 = FUN_180415e30("##box",&local_208,0);
    if ((local_248 == '\0') &&
       ((cVar13 = FUN_1803e9690(1,0,0), cVar13 == '\0' ||
        (cVar13 = FUN_1803dd930(0), cVar13 == '\0')))) {
      local_248 = '\0';
    }
    else {
      local_248 = '\x01';
    }
    if (cVar11 != '\0') {
      DAT_180cd0f06 = '\x01';
      DAT_181107490 = iVar16;
      snprintf(&DAT_181106e78,0x20,&DAT_1806f8ec4,(double)*param_2);
    }
    cVar11 = FUN_1803dd930(0);
    if (cVar11 == '\0') {
      fVar29 = 0.0;
    }
    else {
      fVar29 = DAT_1808ac34c;
    }
    local_218 = CONCAT44(local_218._4_4_,*(undefined4 *)(DAT_180ca0a50 + 0x1ee8));
    local_1dc = 0;
    local_1d8 = 0xffffffff;
    local_1e8 = fVar29;
    local_1e4 = fVar29;
    local_1e0 = fVar29;
    FUN_18034a380(*(undefined4 *)(DAT_180ca0a50 + 0x1ee8),&local_208,&local_218,&local_1e8);
    uVar33 = FUN_1802b3660(local_208 + 0x14,fVar29,DAT_1808ac118,0);
    uVar15 = FUN_1802b38e0(DAT_180960ef0,DAT_180960ef4,uVar33);
    fVar29 = DAT_1808ac7ac;
    local_280 = (undefined **)((ulonglong)local_280 & 0xffffffff00000000);
    local_288 = (undefined8 *)CONCAT44(local_288._4_4_,DAT_1808ac7ac);
    FUN_1803fe590(lVar2,&local_1f8,&local_220,uVar15);
    local_208 = _DAT_1808adcf0;
    uStack_200 = _UNK_1808adcf8;
    local_278 = (undefined8 *)CONCAT44(local_278._4_4_,DAT_1808ac34c);
    local_280 = (undefined **)((ulonglong)local_280 & 0xffffffff00000000);
    local_288 = &local_208;
    FUN_18036bcb0(lVar2,&local_1f8,&local_220,DAT_180960eec);
    uVar25 = DAT_180960ec0;
    local_208 = (undefined *)CONCAT44(local_208._4_4_,(float)local_1f8 + fVar29);
    fVar29 = (float)FUN_18053f0d0();
    local_208 = (undefined *)CONCAT44(fVar29 + local_1f8._4_4_,(float)local_208);
    lVar17 = DAT_181107a18;
    if ((DAT_181107a18 == 0) && (lVar17 = DAT_181107a08, DAT_181107a08 == 0)) {
      lVar17 = *(longlong *)(DAT_180ca0a50 + 0x11f0);
    }
    if (((uVar25 & 0xff000000) != 0) && ((char)local_138 != '\0')) {
      if (lVar17 == 0) {
        lVar17 = *(longlong *)(*(longlong *)(lVar2 + 0x38) + 0x18);
      }
      local_1c8 = *(undefined **)(lVar2 + 0x60);
      uStack_1c0 = *(undefined8 *)(lVar2 + 0x68);
      local_260 = 0;
      local_268 = local_268 & 0xffffffff00000000;
      local_270 = 0;
      local_278 = &local_138;
      local_280 = &local_1c8;
      local_288 = (undefined8 *)CONCAT44(local_288._4_4_,uVar25);
      FUN_18040a900(lVar17,lVar2,DAT_1808ac8fc,&local_208);
    }
  }
LAB_18033f8a7:
  uVar33 = local_170;
  DAT_180cd040e = 1;
  DAT_1811071e8 = local_1f0;
  DAT_181107570 = local_1ec;
  local_268 = CONCAT71(local_268._1_7_,local_248);
  local_278 = (undefined8 *)((ulonglong)local_278 & 0xffffffffffffff00);
  local_280 = (undefined **)local_178;
  local_288 = (undefined8 *)CONCAT44(local_288._4_4_,local_1ec);
  FUN_1802bfc60(local_170,param_2,*param_2,local_1f0);
  lVar17 = DAT_180ca0a50;
  iVar16 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
  if (iVar16 < 2) {
    FUN_1803ebc00("Calling PopID() too many times!");
    lVar17 = DAT_180ca0a50;
  }
  else {
    *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar16 + -1;
  }
  *(undefined1 *)(*(longlong *)(lVar17 + 0x14f8) + 0xce) = 1;
  DAT_1809f5b44 = *(undefined4 *)(lVar17 + 4);
  DAT_1809f5b40 = *(undefined4 *)(*(longlong *)(lVar17 + 0x14f8) + 0x10);
  DAT_1809f5b4c = local_168;
  DAT_1809f5b50._0_4_ = (fVar6 - local_1cc) - DAT_1808ac838;
  DAT_1809f5b50._4_4_ = local_188;
  DAT_1809f5b48 = fVar5;
  FUN_1802baa50(&local_158);
  FUN_180322470(uVar33);
  return uVar26;
}



/* ===== 18033fa10 FUN_18033fa10 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_18033fa10(undefined8 param_1,int *param_2,int param_3,int param_4,undefined8 param_5,
                  uint param_6)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  double dVar7;
  char cVar8;
  undefined1 uVar9;
  char cVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  float *pfVar15;
  float *pfVar16;
  undefined8 *puVar17;
  longlong lVar18;
  undefined8 *puVar19;
  char *pcVar20;
  uint uVar21;
  byte bVar22;
  ulonglong uVar23;
  bool bVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined4 uVar28;
  undefined8 uVar29;
  undefined8 extraout_XMM0_Qa;
  double dVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  undefined1 auStack_2a8 [32];
  undefined8 *local_288;
  undefined8 *local_280;
  undefined8 *local_278;
  undefined8 *local_270;
  ulonglong local_268;
  undefined4 local_260;
  undefined4 local_258;
  char local_248;
  undefined8 local_240;
  undefined8 uStack_238;
  float local_230 [2];
  undefined8 local_228;
  undefined8 uStack_220;
  float local_218;
  float local_214;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  int local_1e0;
  int local_1dc;
  float local_1d8;
  float local_1d4;
  float local_1d0;
  undefined4 local_1cc;
  undefined4 local_1c8;
  float local_1c0;
  float local_1bc;
  float local_1b8;
  float local_1b4 [7];
  float local_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  float local_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  undefined8 local_148;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  ulonglong local_f8;
  
  local_f8 = DAT_180919500 ^ (ulonglong)auStack_2a8;
  local_180 = param_5;
  local_1e0 = param_3;
  local_1dc = param_4;
  local_178 = param_1;
  lVar14 = FUN_1800fbe90(param_2);
  if (lVar14 != 0) {
    local_230[0] = 0.0;
    local_218 = 0.0;
    cVar8 = FUN_180312030(lVar14,local_230,&local_218);
    if (cVar8 != '\0') {
      local_1e0 = (int)local_230[0];
      local_1dc = (int)local_218;
    }
    FUN_1802bcff0(lVar14);
  }
  uVar11 = FUN_1803e8900(*(undefined8 *)(DAT_180ca0a50 + 0x14f8),param_1);
  pcVar20 = "##row_hover";
  bVar22 = 0x23;
  uVar21 = ~uVar11;
  do {
    pcVar20 = pcVar20 + 1;
    if (((bVar22 == 0x23) && (*pcVar20 == 0x23)) && (pcVar20[1] == 0x23)) {
      pcVar20 = pcVar20 + 2;
      uVar21 = ~uVar11;
    }
    else {
      uVar21 = uVar21 >> 8 ^
               *(uint *)(&DAT_1806c25c0 + ((ulonglong)(uVar21 & 0xff) ^ (ulonglong)bVar22) * 4);
    }
    bVar22 = *pcVar20;
  } while (bVar22 != 0);
  uVar21 = ~uVar21;
  if ((DAT_1809f72e0 != '\0') && (DAT_1809f72e2 == '\0')) {
    uVar23 = (((((ulonglong)(uVar21 & 0xff) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
               (ulonglong)(uVar21 >> 8 & 0xff)) * 0x100000001b3 ^ (ulonglong)(uVar21 >> 0x10 & 0xff)
              ) * 0x100000001b3 ^ (ulonglong)(uVar21 >> 0x18)) * 0x100000001b3 & DAT_181107640;
    lVar14 = *(longlong *)(DAT_181107628 + 8 + uVar23 * 0x10);
    if (lVar14 != DAT_181107618) {
      uVar11 = *(uint *)(lVar14 + 0x10);
      while ((uVar21 != uVar11 && (lVar14 != *(longlong *)(DAT_181107628 + uVar23 * 0x10)))) {
        lVar14 = *(longlong *)(lVar14 + 8);
        uVar11 = *(uint *)(lVar14 + 0x10);
      }
    }
    DAT_1811074b0 = FUN_1802b38e0(DAT_180960ef8,DAT_180960ec8);
  }
  pfVar15 = (float *)FUN_1802b9e90(&local_1d8,param_1);
  fVar25 = *pfVar15;
  fVar2 = pfVar15[1];
  fVar3 = pfVar15[2];
  fVar26 = pfVar15[3];
  uVar29 = *(undefined8 *)(pfVar15 + 4);
  fVar37 = (float)((ulonglong)uVar29 >> 0x20);
  bVar6 = false;
  DAT_1811074b0 = 0;
  local_188 = uVar29;
  local_158 = fVar25;
  fStack_154 = fVar2;
  fStack_150 = fVar3;
  fStack_14c = fVar26;
  FUN_1803e89e0(param_1);
  local_138 = 0;
  uStack_130 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_108 = 0;
  uStack_100 = 0;
  snprintf(&local_138,0x40,param_5,*param_2);
  fVar27 = DAT_181107670;
  fVar39 = DAT_1808ac8b0;
  fVar42 = DAT_1808ac540;
  local_198 = fVar25;
  fStack_194 = fVar2;
  fStack_190 = fVar3;
  fStack_18c = fVar26;
  local_148 = uVar29;
  if ((DAT_1809f72e0 == '\0') || (DAT_1809f72e2 != '\0')) {
    bVar4 = false;
    if (DAT_180cd048d == '\0') {
      if (DAT_1809f72e0 == '\0') {
      }
      else {
        fVar25 = DAT_1809f72f0 + DAT_1809f72e4;
      }
      auVar35._4_4_ = fVar3;
      auVar35._0_4_ = fVar3;
      auVar35._8_4_ = fVar3;
      auVar35._12_4_ = fVar3;
      auVar36._4_12_ = auVar35._4_12_;
      auVar36._0_4_ = (fVar3 - fVar25) / _DAT_1808ac590 + DAT_1808ac8b0;
      uVar29 = auVar36._0_8_;
    }
    else {
      auVar33._4_4_ = fVar3;
      auVar33._0_4_ = fVar3;
      auVar33._8_4_ = fVar3;
      auVar33._12_4_ = fVar3;
      auVar34._4_12_ = auVar33._4_12_;
      auVar34._0_4_ = fVar3 - fVar25;
      uVar29 = auVar34._0_8_;
    }
    DAT_181107670 = 0.0;
    fVar25 = (float)FUN_18053f0d0(uVar29);
    fVar25 = fVar25 - fVar27;
  }
  else {
    bVar4 = true;
    auVar31._4_4_ = fVar3;
    auVar31._0_4_ = fVar3;
    auVar31._8_4_ = fVar3;
    auVar31._12_4_ = fVar3;
    auVar32._4_12_ = auVar31._4_12_;
    auVar32._0_4_ = ((fVar3 - fVar25) + fVar37 + DAT_1809f72e4 * DAT_1808ac540) / DAT_1808ac5e0;
    fVar25 = (float)FUN_18053f0d0(auVar32._0_8_);
  }
  lVar14 = DAT_181107a18;
  if ((DAT_181107a18 == 0) && (lVar14 = DAT_181107a08, DAT_181107a08 == 0)) {
    lVar14 = *(longlong *)(DAT_180ca0a50 + 0x11f0);
  }
  local_210 = *(double *)(DAT_180ca0a50 + 0x11f0);
  uStack_208 = CONCAT44(*(undefined4 *)(DAT_180ca0a50 + 0x1200),
                        *(undefined4 *)(DAT_180ca0a50 + 0x1204));
  local_1b8 = fVar25;
  FUN_1803f6200(DAT_180ca0a50 + 0x1fe0,&local_210);
  FUN_1803e8680(lVar14);
  if (bVar4) {
    fVar39 = 0.0;
  }
  else {
    local_258 = 0;
    local_268 = 0;
    local_270 = (undefined8 *)0x0;
    local_278 = (undefined8 *)0x0;
    local_280 = &local_138;
    local_288 = (undefined8 *)((ulonglong)local_288 & 0xffffffff00000000);
    FUN_18040a2f0(&local_210,*(undefined8 *)(DAT_180ca0a50 + 0x11f0));
    fVar39 = (float)FUN_18053f0d0((float)local_210 + fVar39);
  }
  lVar14 = DAT_180ca0a50;
  if (*(int *)(DAT_180ca0a50 + 0x1fe0) < 1) {
    FUN_1803ebc00("Calling PopFont() too many times!");
  }
  else {
    FUN_1803e8680(*(undefined8 *)
                   (*(longlong *)(DAT_180ca0a50 + 0x1fe8) + -0x10 +
                   (longlong)*(int *)(DAT_180ca0a50 + 0x1fe0) * 0x10));
    *(int *)(lVar14 + 0x1fe0) = *(int *)(lVar14 + 0x1fe0) + -1;
  }
  lVar14 = DAT_180ca0a50;
  fVar27 = DAT_1808ac34c;
  fVar40 = fVar26 * DAT_1808ac1f4 + fVar2;
  local_1c0 = fVar3 - fVar39;
  local_1bc = fVar40 - DAT_1808ac8ac;
  local_1f0 = (double)CONCAT44(local_1bc + DAT_1808ac97c,fVar3);
  fVar25 = fVar3 - fVar25;
  if (bVar4) {
    fVar39 = fVar3;
    fVar42 = DAT_1808ac658;
    fVar38 = 0.0;
  }
  else {
    fVar25 = fVar25 + DAT_1808ac750;
    fVar39 = (local_1c0 - DAT_1808ac7ac) - DAT_1808ac750;
    fVar38 = DAT_1808ac750;
  }
  fVar41 = DAT_1808ac34c;
  if (DAT_1808ac34c <= fVar39 - fVar25) {
    fVar41 = fVar39 - fVar25;
  }
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  lVar18 = *(longlong *)(lVar14 + 0x14f8);
  lVar1 = *(longlong *)(lVar18 + 0x2c8);
  local_168 = fVar26;
  fStack_164 = fVar26;
  fStack_160 = fVar26;
  fStack_15c = fVar26;
  if (bVar4) {
    fVar38 = (local_198 - fVar37) - DAT_1809f72e4;
    fVar37 = DAT_1809f72e4 + fVar3;
    local_228 = (double)CONCAT44(fVar26 + fVar2,fVar37);
    *(undefined1 *)(lVar18 + 0xce) = 1;
    lVar14 = *(longlong *)(lVar14 + 0x14f8);
    local_210 = (double)CONCAT44(fVar2,fVar38);
    *(double *)(lVar14 + 0x118) = local_210;
    *(undefined1 *)(lVar14 + 0x159) = 1;
    local_1e8 = (double)CONCAT44(fVar26,fVar37 - fVar38);
    FUN_180415e30("##row",&local_1e8,0);
    uVar9 = FUN_1803dd930(0);
    iVar13 = *(int *)(DAT_180ca0a50 + 0x1578);
    if (iVar13 == 0) {
      uVar28 = 0;
    }
    else {
      uVar28 = CONCAT31((int3)((uint)iVar13 >> 8),iVar13 == *(int *)(DAT_180ca0a50 + 0x1ee8));
    }
    fVar26 = (float)FUN_1802b3850(uVar21,uVar28,uVar9);
    if (0.0 < fVar26) {
      local_1b4[2] = 1.0;
      local_1b4[0] = 0.0;
      local_1b4[1] = fVar26 * DAT_1808ac1b0 * DAT_1808ac2cc;
      pfVar15 = local_1b4;
      if (0.0 <= local_1b4[1]) {
        pfVar15 = local_1b4 + 1;
      }
      pfVar16 = local_1b4 + 2;
      if (local_1b4[1] <= fVar27) {
        pfVar16 = pfVar15;
      }
      local_280 = (undefined8 *)((ulonglong)local_280 & 0xffffffff00000000);
      local_288 = (undefined8 *)CONCAT44(local_288._4_4_,DAT_1808ac854);
      FUN_1803fe590(lVar1,&local_210,&local_228,
                    DAT_180960f44 & 0xffffff |
                    (int)(longlong)(*pfVar16 * DAT_1808acb94 + DAT_1808ac1f4) << 0x18);
    }
  }
  else {
    *(undefined1 *)(lVar18 + 0xce) = 1;
    lVar14 = *(longlong *)(lVar14 + 0x14f8);
    *(float *)(lVar14 + 0x118) = fVar25 - fVar38;
    *(float *)(lVar14 + 0x11c) = fVar2;
    *(undefined1 *)(lVar14 + 0x159) = 1;
    local_1e8 = (double)CONCAT44(fVar26,fVar38 + fVar38 + fVar41);
    FUN_180415e30("##track",&local_1e8,0);
  }
  cVar8 = FUN_1803e9690(1,0,0);
  if (cVar8 == '\0') {
LAB_180340154:
    local_248 = '\0';
  }
  else {
    cVar8 = FUN_1803dd930(0);
    local_248 = '\x01';
    if (cVar8 == '\0') goto LAB_180340154;
  }
  if (((*(int *)(DAT_180ca0a50 + 0x1578) == 0) ||
      (*(int *)(DAT_180ca0a50 + 0x1578) != *(int *)(DAT_180ca0a50 + 0x1ee8))) ||
     ((bVar4 && ((*(float *)(DAT_180ca0a50 + 0xaf0) < fVar25 ||
                 (fVar39 < *(float *)(DAT_180ca0a50 + 0xaf0))))))) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  fVar26 = *(float *)(DAT_180ca0a50 + 0x110);
  local_218 = *(float *)(DAT_180ca0a50 + 0x114);
  cVar8 = FUN_1803dd930(0);
  if ((((cVar8 != '\0') && (fVar25 <= fVar26)) && (fVar26 <= fVar39)) &&
     ((fVar40 - fVar42 <= local_218 && (local_218 <= fVar40 + fVar42)))) {
    bVar6 = true;
  }
  fVar26 = fVar40 - fVar42;
  local_218 = fVar40 + fVar42;
  local_1e8 = (double)local_1e0;
  local_210 = (double)local_1dc;
  local_200 = (undefined *)((double)local_1dc - local_1e8);
  bVar24 = false;
  if (bVar5) {
    if (0.0 < (double)local_200) {
      local_228 = (double)CONCAT44(local_228._4_4_,0x3f800000);
      local_230[0] = 0.0;
      fVar37 = fVar41;
      if (bVar4) {
        fVar37 = fVar27;
        if (fVar27 <= fVar41 - fVar27) {
          fVar37 = fVar41 - fVar27;
        }
      }
      fVar37 = (*(float *)(DAT_180ca0a50 + 0x110) - fVar25) / fVar37;
      local_240 = CONCAT44(local_240._4_4_,fVar37);
      pfVar15 = local_230;
      if (0.0 <= fVar37) {
        pfVar15 = (float *)&local_240;
      }
      pfVar16 = (float *)&local_228;
      if (fVar37 <= fVar27) {
        pfVar16 = pfVar15;
      }
      fVar37 = *pfVar16;
      if ((param_6 & 0x20) != 0) {
        fVar37 = fVar37 * fVar37 * fVar37;
      }
      iVar12 = FUN_180518240((double)fVar37 * (double)local_200 + local_1e8);
      bVar24 = iVar12 != *param_2;
      iVar13 = *param_2;
      if (bVar24) {
        *param_2 = iVar12;
        iVar13 = iVar12;
      }
      goto LAB_1803402e6;
    }
LAB_180340302:
    local_1b4[4] = 0.0;
  }
  else {
    iVar13 = *param_2;
LAB_1803402e6:
    if ((double)local_200 <= 0.0) goto LAB_180340302;
    local_1b4[4] = (float)(((double)iVar13 - local_1e8) / (double)local_200);
  }
  local_1b4[5] = 1.0;
  local_1b4[3] = 0.0;
  pfVar15 = local_1b4 + 3;
  if (0.0 <= local_1b4[4]) {
    pfVar15 = local_1b4 + 4;
  }
  pfVar16 = local_1b4 + 5;
  if (local_1b4[4] <= fVar27) {
    pfVar16 = pfVar15;
  }
  fVar27 = *pfVar16;
  if ((param_6 & 0x20) != 0) {
    fVar27 = (float)FUN_180518460();
  }
  fVar37 = DAT_1808ac34c;
  fVar27 = fVar27 * fVar41 + fVar25;
  if (bVar5) {
    local_230[0] = DAT_1808ac34c;
  }
  else {
    local_230[0] = 0.0;
  }
  fVar38 = (float)FUN_1803e8900(*(undefined8 *)(DAT_180ca0a50 + 0x14f8),"##active");
  local_1d8 = local_230[0];
  local_1d4 = local_230[0];
  local_1d0 = local_230[0];
  local_1cc = 0;
  local_1c8 = 0xffffffff;
  local_228._0_4_ = fVar38;
  FUN_18034a380();
  uVar28 = FUN_1802b3660(local_240 + 0x14);
  fVar38 = local_218;
  local_228 = (double)CONCAT44(local_228._4_4_,uVar28);
  local_280 = (undefined8 *)((ulonglong)local_280 & 0xffffffff00000000);
  local_288 = (undefined8 *)CONCAT44(local_288._4_4_,fVar42);
  if (bVar4) {
    local_228 = (double)CONCAT44(local_218,fVar39);
    local_240 = CONCAT44(fVar26,fVar25);
    FUN_1803fe590(lVar1,&local_240,&local_228,DAT_180960f20);
    if (fVar25 < fVar27) {
      local_228 = (double)CONCAT44(fVar38,fVar27);
      local_240 = CONCAT44(fVar26,fVar25);
      FUN_1803fc200(lVar1,&local_240,&local_228,1);
      local_228 = (double)CONCAT44(fVar38,fVar39);
      local_240 = CONCAT44(fVar26,fVar25);
      local_280 = (undefined8 *)((ulonglong)local_280 & 0xffffffff00000000);
      local_288 = (undefined8 *)CONCAT44(local_288._4_4_,fVar42);
      FUN_1803fe590(lVar1,&local_240,&local_228,DAT_1809f54bc);
      iVar12 = *(int *)(lVar1 + 0xa0);
      iVar13 = iVar12 + -1;
      *(int *)(lVar1 + 0xa0) = iVar13;
      if (iVar13 == 0) {
        puVar17 = (undefined8 *)(*(longlong *)(lVar1 + 0x38) + 0x34);
      }
      else {
        puVar17 = (undefined8 *)((longlong)(iVar12 + -2) * 0x10 + *(longlong *)(lVar1 + 0xa8));
      }
      uVar29 = puVar17[1];
      *(undefined8 *)(lVar1 + 0x60) = *puVar17;
      *(undefined8 *)(lVar1 + 0x68) = uVar29;
      FUN_1803fbff0(lVar1);
    }
    if (bVar5 || bVar6) {
      fVar25 = fVar37;
    }
    else {
      fVar25 = 0.0;
    }
    uVar28 = FUN_1803e8900(*(undefined8 *)(DAT_180ca0a50 + 0x14f8),"##bubble");
    local_228 = (double)CONCAT44(local_228._4_4_,uVar28);
    local_1cc = 0;
    local_1c8 = 0xffffffff;
    local_1d8 = fVar25;
    local_1d4 = fVar25;
    local_1d0 = fVar25;
    FUN_18034a380(extraout_XMM0_Qa,&local_240,&local_228,&local_1d8);
    fVar25 = (float)FUN_1802b3660(local_240 + 0x14);
    if (0.0 < fVar25) {
      lVar14 = DAT_1811079c0;
      if ((DAT_1811079c0 == 0) && (lVar14 = DAT_181107a08, DAT_181107a08 == 0)) {
        lVar14 = *(longlong *)(DAT_180ca0a50 + 0x11f0);
      }
      local_240 = *(undefined8 *)(DAT_180ca0a50 + 0x11f0);
      uStack_238 = CONCAT44(*(undefined4 *)(DAT_180ca0a50 + 0x1200),
                            *(undefined4 *)(DAT_180ca0a50 + 0x1204));
      FUN_1803f6200(DAT_180ca0a50 + 0x1fe0,&local_240);
      FUN_1803e8680(lVar14);
      local_258 = 0;
      local_268 = 0;
      local_270 = (undefined8 *)0x0;
      local_278 = (undefined8 *)0x0;
      local_280 = &local_138;
      local_288 = (undefined8 *)CONCAT44(local_288._4_4_,DAT_1808acda0);
      FUN_18040a2f0(&local_240,*(undefined8 *)(DAT_180ca0a50 + 0x11f0));
      lVar14 = DAT_180ca0a50;
      local_218 = (float)(int)((uint)((float)(int)(float)local_240 < (float)local_240) +
                              (int)(float)local_240);
      if (*(int *)(DAT_180ca0a50 + 0x1fe0) < 1) {
        FUN_1803ebc00("Calling PopFont() too many times!");
      }
      else {
        FUN_1803e8680(*(undefined8 *)
                       (*(longlong *)(DAT_180ca0a50 + 0x1fe8) + -0x10 +
                       (longlong)*(int *)(DAT_180ca0a50 + 0x1fe0) * 0x10));
        *(int *)(lVar14 + 0x1fe0) = *(int *)(lVar14 + 0x1fe0) + -1;
      }
      fVar26 = DAT_1808ac844;
      fVar39 = (float)FUN_18053f0d0();
      fVar42 = DAT_1808ac7ec;
      fVar27 = (float)FUN_18053f0d0();
      local_228 = (double)CONCAT44(fVar39,fVar27);
      local_218 = local_218 + fVar27 + DAT_1808ac8e4;
      local_214 = local_240._4_4_ + fVar39 + fVar26;
      lVar18 = FUN_1803ddf50(**(undefined8 **)(DAT_180ca0a50 + 0x2058),1,"##Foreground");
      fVar26 = DAT_1808ac1f4;
      local_280 = (undefined8 *)((ulonglong)local_280 & 0xffffffff00000000);
      local_288 = (undefined8 *)CONCAT44(local_288._4_4_,DAT_1808ac838);
      FUN_1803fe590(lVar18,&local_228,&local_218,
                    (int)(longlong)((float)(DAT_180960ee0 >> 0x18) * fVar25 + DAT_1808ac1f4) << 0x18
                    | DAT_180960ee0 & 0xffffff);
      local_240 = _DAT_1808add20;
      uStack_238 = _UNK_1808add28;
      local_278 = (undefined8 *)CONCAT44(local_278._4_4_,fVar37);
      local_280 = (undefined8 *)((ulonglong)local_280 & 0xffffffff00000000);
      local_288 = &local_240;
      FUN_18036bcb0(lVar18,&local_228,&local_218,
                    (int)(longlong)((float)(DAT_180960eec >> 0x18) * fVar25 + fVar26) << 0x18 |
                    DAT_180960eec & 0xffffff);
      uVar21 = (int)(longlong)((float)(DAT_180960ec0 >> 0x18) * fVar25 + fVar26) << 0x18;
      local_240 = CONCAT44(local_228._4_4_ + DAT_1808ac710,(float)local_228 + fVar42);
      lVar14 = DAT_1811079c0;
      if ((DAT_1811079c0 == 0) && (lVar14 = DAT_181107a08, DAT_181107a08 == 0)) {
        lVar14 = *(longlong *)(DAT_180ca0a50 + 0x11f0);
      }
      if ((uVar21 != 0) && ((char)local_138 != '\0')) {
        if (lVar14 == 0) {
          lVar14 = *(longlong *)(*(longlong *)(lVar18 + 0x38) + 0x18);
        }
        local_228 = *(double *)(lVar18 + 0x60);
        uStack_220 = *(undefined8 *)(lVar18 + 0x68);
        local_260 = 0;
        local_268 = local_268 & 0xffffffff00000000;
        local_270 = (undefined8 *)0x0;
        local_278 = &local_138;
        local_280 = &local_228;
        local_288 = (undefined8 *)CONCAT44(local_288._4_4_,uVar21 | DAT_180960ec0 & 0xffffff);
        FUN_18040a900(lVar14,lVar18);
      }
    }
    cVar8 = FUN_1803dd930(0);
    dVar7 = local_210;
    if (((cVar8 != '\0') && (*(float *)(DAT_180ca0a50 + 0x120) != 0.0)) &&
       (_DAT_1808abf48 < (double)local_200)) {
      local_1f0 = local_210;
      local_210 = local_1e8;
      if (*(float *)(DAT_180ca0a50 + 0x120) <= 0.0) {
        dVar30 = DAT_1808acdb8;
      }
      else {
        dVar30 = DAT_1808ac500;
      }
      local_200 = (undefined *)((double)*param_2 + dVar30);
      puVar17 = &local_210;
      if (local_1e8 <= (double)local_200) {
        puVar17 = &local_200;
      }
      puVar19 = &local_1f0;
      if ((double)local_200 <= dVar7) {
        puVar19 = puVar17;
      }
      iVar13 = FUN_180518240(*puVar19);
      *param_2 = iVar13;
      bVar24 = true;
      FUN_1803e8900(*(undefined8 *)(DAT_180ca0a50 + 0x14f8),"##box");
      goto LAB_180340ee7;
    }
LAB_180340aa9:
    iVar13 = FUN_1803e8900(*(undefined8 *)(DAT_180ca0a50 + 0x14f8),"##box");
    if (bVar4) goto LAB_180340ee7;
    fVar25 = DAT_1808ac1f4;
  }
  else {
    local_200 = (undefined *)CONCAT44(local_218,fVar39 + DAT_1808ac750);
    fVar25 = fVar25 - DAT_1808ac750;
    local_240 = CONCAT44(fVar26,fVar25);
    FUN_1803fe590(lVar1,&local_240,&local_200,DAT_180960f20);
    local_200 = (undefined *)CONCAT44(fVar38,fVar27);
    local_240 = CONCAT44(fVar26,fVar25);
    local_280 = (undefined8 *)((ulonglong)local_280 & 0xffffffff00000000);
    local_288 = (undefined8 *)CONCAT44(local_288._4_4_,fVar42);
    FUN_1803fe590(lVar1,&local_240,&local_200,DAT_1809f54bc);
    uVar21 = DAT_180960f14;
    fVar25 = DAT_1808ac1f4;
    local_200 = (undefined *)CONCAT44(fVar40,fVar27);
    if (((DAT_180960f14 & 0xff000000) == 0) || ((float)local_228 + DAT_1808ac750 < DAT_1808ac1f4))
    goto LAB_180340aa9;
    local_280 = (undefined8 *)CONCAT44(local_280._4_4_,0x17);
    local_288 = (undefined8 *)CONCAT44(local_288._4_4_,DAT_1808ac7b8);
    FUN_1803fddf0(lVar1,&local_200);
    FUN_1803fd460(lVar1,*(undefined8 *)(lVar1 + 0x58),*(undefined4 *)(lVar1 + 0x50),uVar21);
    *(undefined4 *)(lVar1 + 0x50) = 0;
    iVar13 = FUN_1803e8900(*(undefined8 *)(DAT_180ca0a50 + 0x14f8),"##box");
  }
  lVar18 = DAT_180ca0a50;
  local_240 = CONCAT44(local_1bc,local_1c0);
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  lVar14 = *(longlong *)(lVar18 + 0x14f8);
  *(longlong *)(lVar14 + 0x118) = local_240;
  *(undefined1 *)(lVar14 + 0x159) = 1;
  if (DAT_181107490 == iVar13) {
    *(uint *)(lVar18 + 0x1eb0) = *(uint *)(lVar18 + 0x1eb0) | 1;
    *(float *)(lVar18 + 0x1ec8) = fVar3 - local_1c0;
    fVar25 = (DAT_1808ac97c - *(float *)(lVar18 + 0x1200)) * fVar25;
    fVar26 = 0.0;
    if (0.0 <= fVar25) {
      fVar26 = fVar25;
    }
    local_200 = (undefined *)CONCAT44(fVar26,0x40c00000);
    FUN_1803d89a0(0xb,&local_200);
    FUN_1803d8870(0xc);
    if (DAT_180cd0f06 != '\0') {
      FUN_1803e8120();
      DAT_180cd0f06 = '\0';
    }
    local_280 = (undefined8 *)CONCAT71(local_280._1_7_,1);
    local_288 = (undefined8 *)CONCAT71(local_288._1_7_,1);
    FUN_1802b39d0(&local_1f0,"##edit",&local_240);
    local_200 = (undefined *)0x0;
    local_270 = (undefined8 *)0x0;
    local_278 = (undefined8 *)0x0;
    local_280 = (undefined8 *)CONCAT44(local_280._4_4_,0x1044);
    local_288 = &local_200;
    cVar8 = FUN_18041c570("##edit",0,&DAT_181106e78,0x20);
    if ((*(uint *)(DAT_180ca0a50 + 0x1ef0) & 0x20) == 0) {
      if (((*(int *)(DAT_180ca0a50 + 0x15ac) == *(int *)(DAT_180ca0a50 + 0x1ee8)) &&
          (*(int *)(DAT_180ca0a50 + 0x1ee8) != 0)) &&
         (*(int *)(DAT_180ca0a50 + 4) <= *(int *)(DAT_180ca0a50 + 0x15b0))) {
        bVar22 = 1;
      }
      else {
        bVar22 = 0;
      }
    }
    else {
      bVar22 = (byte)(*(uint *)(DAT_180ca0a50 + 0x1ef0) >> 6) & 1;
    }
    *(undefined4 *)(DAT_180ca0a50 + 0xd98) = (undefined4)local_1f0;
    FUN_1803d87f0(local_1f0._4_4_);
    FUN_1803d8a40(2);
    if ((cVar8 != '\0') || (bVar22 != 0)) {
      local_200 = (undefined *)0x0;
      local_1f0 = (double)FUN_180518454(&DAT_181106e78,&local_200);
      dVar7 = local_210;
      if (local_200 != &DAT_181106e78) {
        local_228 = local_210;
        local_210 = local_1e8;
        puVar17 = &local_210;
        if (local_1e8 <= local_1f0) {
          puVar17 = &local_1f0;
        }
        puVar19 = &local_228;
        if (local_1f0 <= dVar7) {
          puVar19 = puVar17;
        }
        iVar13 = FUN_180518240(*puVar19);
        *param_2 = iVar13;
        bVar24 = true;
      }
      DAT_181107490 = 0;
    }
  }
  else {
    local_210 = (double)CONCAT44(0x41bda5e3,fVar3 - local_1c0);
    cVar8 = FUN_180415e30("##box",&local_210,0);
    if ((local_248 == '\0') &&
       ((cVar10 = FUN_1803e9690(1,0,0), cVar10 == '\0' ||
        (cVar10 = FUN_1803dd930(0), cVar10 == '\0')))) {
      local_248 = '\0';
    }
    else {
      local_248 = '\x01';
    }
    if (cVar8 != '\0') {
      DAT_180cd0f06 = '\x01';
      DAT_181107490 = iVar13;
      snprintf(&DAT_181106e78,0x20,&DAT_1806dfdd8,*param_2);
    }
    cVar8 = FUN_1803dd930(0);
    if (cVar8 == '\0') {
      local_1d8 = 0.0;
    }
    else {
      local_1d8 = fVar37;
    }
    local_228 = (double)CONCAT44(local_228._4_4_,*(undefined4 *)(DAT_180ca0a50 + 0x1ee8));
    local_1cc = 0;
    local_1c8 = 0xffffffff;
    local_1d4 = local_1d8;
    local_1d0 = local_1d8;
    FUN_18034a380(*(undefined4 *)(DAT_180ca0a50 + 0x1ee8),&local_210,&local_228,&local_1d8);
    FUN_1802b3660((longlong)local_210 + 0x14);
    uVar28 = FUN_1802b38e0(DAT_180960ef0,DAT_180960ef4);
    fVar25 = DAT_1808ac7ac;
    local_280 = (undefined8 *)((ulonglong)local_280 & 0xffffffff00000000);
    local_288 = (undefined8 *)CONCAT44(local_288._4_4_,DAT_1808ac7ac);
    FUN_1803fe590(lVar1,&local_240,&local_1f0,uVar28);
    local_210 = (double)_DAT_1808adcf0;
    uStack_208 = _UNK_1808adcf8;
    local_278 = (undefined8 *)CONCAT44(local_278._4_4_,fVar37);
    local_280 = (undefined8 *)((ulonglong)local_280 & 0xffffffff00000000);
    local_288 = &local_210;
    FUN_18036bcb0(lVar1,&local_240,&local_1f0,DAT_180960eec);
    uVar21 = DAT_180960ec0;
    local_210 = (double)CONCAT44(local_210._4_4_,(float)local_240 + fVar25);
    fVar25 = (float)FUN_18053f0d0();
    local_210 = (double)CONCAT44(fVar25 + local_240._4_4_,(float)local_210);
    lVar14 = DAT_181107a18;
    if ((DAT_181107a18 == 0) && (lVar14 = DAT_181107a08, DAT_181107a08 == 0)) {
      lVar14 = *(longlong *)(DAT_180ca0a50 + 0x11f0);
    }
    if (((uVar21 & 0xff000000) != 0) && ((char)local_138 != '\0')) {
      if (lVar14 == 0) {
        lVar14 = *(longlong *)(*(longlong *)(lVar1 + 0x38) + 0x18);
      }
      local_200 = *(undefined **)(lVar1 + 0x60);
      uStack_1f8 = *(undefined8 *)(lVar1 + 0x68);
      local_260 = 0;
      local_268 = local_268 & 0xffffffff00000000;
      local_270 = (undefined8 *)0x0;
      local_278 = &local_138;
      local_280 = &local_200;
      local_288 = (undefined8 *)CONCAT44(local_288._4_4_,uVar21);
      FUN_18040a900(lVar14,lVar1);
    }
  }
LAB_180340ee7:
  fVar26 = local_168;
  uVar29 = local_178;
  fVar25 = DAT_1808ac838;
  DAT_180cd040e = 1;
  DAT_1811071e8 = (float)local_1e0;
  DAT_181107570 = (float)local_1dc;
  local_210 = (double)CONCAT44(local_168 + fVar2,(float)local_188 + DAT_1808ac838);
  local_268 = CONCAT71(local_268._1_7_,local_248);
  local_270 = &local_210;
  local_278 = (undefined8 *)CONCAT71(local_278._1_7_,1);
  local_280 = (undefined8 *)local_180;
  local_288 = (undefined8 *)CONCAT44(local_288._4_4_,DAT_181107570);
  FUN_1802bfc60(local_178,param_2);
  lVar14 = DAT_180ca0a50;
  iVar13 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
  if (iVar13 < 2) {
    FUN_1803ebc00("Calling PopID() too many times!");
    lVar14 = DAT_180ca0a50;
  }
  else {
    *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar13 + -1;
  }
  *(undefined1 *)(*(longlong *)(lVar14 + 0x14f8) + 0xce) = 1;
  DAT_1809f5b44 = *(undefined4 *)(lVar14 + 4);
  DAT_1809f5b40 = *(undefined4 *)(*(longlong *)(lVar14 + 0x14f8) + 0x10);
  DAT_1809f5b4c = fVar26;
  DAT_1809f5b50._0_4_ = (fVar3 - local_1b8) - fVar25;
  DAT_1809f5b50._4_4_ = local_198;
  DAT_1809f5b48 = fVar2;
  FUN_1802baa50(&local_158);
  FUN_180322470(uVar29);
  return bVar24;
}



/* ===== 180341080 FUN_180341080 ===== */

void FUN_180341080(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  float *pfVar5;
  short sVar6;
  float fVar7;
  int iVar8;
  undefined8 *puVar9;
  short sVar10;
  short sVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  ulonglong uVar15;
  int iVar16;
  longlong lVar17;
  short sVar18;
  longlong lVar19;
  int iVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined8 *local_e0;
  undefined8 *puStack_d8;
  undefined8 *local_d0;
  
  iVar20 = (int)(param_2[1] - *param_2 >> 3);
  if (2 < iVar20) {
    fVar28 = *(float *)(param_1 + 0xd0);
    uVar1 = **(undefined4 **)(param_1 + 0x38);
    uVar2 = (*(undefined4 **)(param_1 + 0x38))[1];
    FUN_1803fc3a0(param_1,iVar20 * 9 + -6,iVar20 * 2);
    uVar3 = *(undefined4 *)(param_1 + 0x34);
    iVar16 = 2;
    do {
      sVar10 = (short)iVar16;
      iVar16 = iVar16 + 1;
      sVar18 = (short)uVar3;
      sVar10 = sVar10 * 2 + sVar18;
      **(short **)(param_1 + 0x48) = sVar18;
      *(short *)(*(longlong *)(param_1 + 0x48) + 2) = sVar10 + -2;
      *(short *)(*(longlong *)(param_1 + 0x48) + 4) = sVar10;
      *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 6;
    } while (iVar16 < iVar20);
    uVar15 = (ulonglong)iVar20;
    local_d0 = (undefined8 *)0x0;
    local_e0 = (undefined8 *)0x0;
    puStack_d8 = (undefined8 *)0x0;
    if (0x1fffffffffffffff < uVar15) {
                    /* WARNING: Subroutine does not return */
      FUN_1800118d0();
    }
    puVar9 = (undefined8 *)FUN_18000fb70(uVar15 * 8);
    local_d0 = puVar9 + uVar15;
    puStack_d8 = puVar9;
    do {
      *puStack_d8 = 0;
      uVar4 = DAT_1808adec0;
      fVar7 = DAT_1808ac34c;
      puStack_d8 = puStack_d8 + 1;
      uVar15 = uVar15 - 1;
    } while (uVar15 != 0);
    iVar12 = iVar20 + -1;
    iVar14 = 0;
    local_e0 = puVar9;
    iVar16 = iVar12;
    if (iVar20 < 4) goto LAB_180341414;
    do {
      lVar17 = *param_2;
      lVar13 = (longlong)iVar14;
      lVar19 = (longlong)iVar16;
      fVar26 = *(float *)(lVar17 + lVar13 * 8) - *(float *)(lVar17 + lVar19 * 8);
      fVar27 = *(float *)(lVar17 + 4 + lVar13 * 8) - *(float *)(lVar17 + 4 + lVar19 * 8);
      fVar21 = fVar27 * fVar27 + fVar26 * fVar26;
      if (0.0 < fVar21) {
        if (fVar21 < 0.0) {
          fVar21 = (float)FUN_18051af10(fVar21);
        }
        else {
          fVar21 = SQRT(fVar21);
        }
        fVar27 = (fVar7 / fVar21) * fVar27;
        fVar26 = (fVar7 / fVar21) * fVar26;
      }
      *(float *)(puVar9 + lVar19) = fVar27;
      *(uint *)((longlong)puVar9 + lVar19 * 8 + 4) = (uint)fVar26 ^ uVar4;
      lVar17 = *param_2;
      fVar26 = *(float *)(lVar17 + 8 + lVar13 * 8) - *(float *)(lVar17 + lVar13 * 8);
      fVar27 = *(float *)(lVar17 + 0xc + lVar13 * 8) - *(float *)(lVar17 + 4 + lVar13 * 8);
      fVar21 = fVar27 * fVar27 + fVar26 * fVar26;
      if (0.0 < fVar21) {
        if (fVar21 < 0.0) {
          fVar21 = (float)FUN_18051af10(fVar21);
        }
        else {
          fVar21 = SQRT(fVar21);
        }
        fVar27 = (fVar7 / fVar21) * fVar27;
        fVar26 = (fVar7 / fVar21) * fVar26;
      }
      *(float *)(puVar9 + lVar13) = fVar27;
      *(uint *)((longlong)puVar9 + lVar13 * 8 + 4) = (uint)fVar26 ^ uVar4;
      lVar17 = *param_2;
      fVar26 = *(float *)(lVar17 + 0x10 + lVar13 * 8) - *(float *)(lVar17 + 8 + lVar13 * 8);
      fVar27 = *(float *)(lVar17 + 0x14 + lVar13 * 8) - *(float *)(lVar17 + 0xc + lVar13 * 8);
      fVar21 = fVar27 * fVar27 + fVar26 * fVar26;
      if (0.0 < fVar21) {
        if (fVar21 < 0.0) {
          fVar21 = (float)FUN_18051af10(fVar21);
        }
        else {
          fVar21 = SQRT(fVar21);
        }
        fVar27 = (fVar7 / fVar21) * fVar27;
        fVar26 = (fVar7 / fVar21) * fVar26;
      }
      *(float *)(puVar9 + lVar13 + 1) = fVar27;
      *(uint *)((longlong)puVar9 + lVar13 * 8 + 0xc) = (uint)fVar26 ^ uVar4;
      lVar17 = *param_2;
      fVar26 = *(float *)(lVar17 + 0x18 + lVar13 * 8) - *(float *)(lVar17 + 0x10 + lVar13 * 8);
      fVar27 = *(float *)(lVar17 + 0x1c + lVar13 * 8) - *(float *)(lVar17 + 0x14 + lVar13 * 8);
      fVar21 = fVar27 * fVar27 + fVar26 * fVar26;
      if (0.0 < fVar21) {
        if (fVar21 < 0.0) {
          fVar21 = (float)FUN_18051af10(fVar21);
        }
        else {
          fVar21 = SQRT(fVar21);
        }
        fVar27 = (fVar7 / fVar21) * fVar27;
        fVar26 = (fVar7 / fVar21) * fVar26;
      }
      iVar16 = iVar14 + 3;
      *(float *)(puVar9 + lVar13 + 2) = fVar27;
      iVar14 = iVar14 + 4;
      *(uint *)((longlong)puVar9 + lVar13 * 8 + 0x14) = (uint)fVar26 ^ uVar4;
      iVar8 = iVar14;
      fVar21 = DAT_1808abf8c;
      fVar26 = DAT_1808ac1f4;
      fVar27 = DAT_1808acb08;
    } while (iVar14 < iVar20 + -3);
    while( true ) {
      iVar14 = iVar8;
      DAT_1808abf8c = fVar21;
      DAT_1808ac1f4 = fVar26;
      DAT_1808acb08 = fVar27;
      if (iVar20 <= iVar14) break;
LAB_180341414:
      lVar17 = *param_2;
      lVar13 = (longlong)iVar16;
      fVar26 = *(float *)(lVar17 + (longlong)iVar14 * 8) - *(float *)(lVar17 + lVar13 * 8);
      fVar27 = *(float *)(lVar17 + 4 + (longlong)iVar14 * 8) - *(float *)(lVar17 + 4 + lVar13 * 8);
      fVar21 = fVar27 * fVar27 + fVar26 * fVar26;
      if (0.0 < fVar21) {
        if (fVar21 < 0.0) {
          fVar21 = (float)FUN_18051af10(fVar21);
        }
        else {
          fVar21 = SQRT(fVar21);
        }
        fVar27 = (fVar7 / fVar21) * fVar27;
        fVar26 = (fVar7 / fVar21) * fVar26;
      }
      *(float *)(puVar9 + lVar13) = fVar27;
      *(uint *)((longlong)puVar9 + lVar13 * 8 + 4) = (uint)fVar26 ^ uVar4;
      iVar8 = iVar14 + 1;
      iVar16 = iVar14;
      fVar21 = DAT_1808abf8c;
      fVar26 = DAT_1808ac1f4;
      fVar27 = DAT_1808acb08;
    }
    fVar28 = fVar28 * fVar26;
    iVar16 = 0;
    do {
      lVar17 = (longlong)iVar16;
      fVar22 = (*(float *)(puVar9 + lVar17) + *(float *)(puVar9 + iVar12)) * fVar26;
      fVar23 = (*(float *)((longlong)puVar9 + lVar17 * 8 + 4) +
               *(float *)((longlong)puVar9 + (longlong)iVar12 * 8 + 4)) * fVar26;
      fVar24 = fVar23 * fVar23 + fVar22 * fVar22;
      if (fVar21 < fVar24) {
        fVar24 = fVar7 / fVar24;
        fVar25 = fVar27;
        if (fVar24 <= fVar27) {
          fVar25 = fVar24;
        }
        fVar23 = fVar25 * fVar23;
        fVar22 = fVar25 * fVar22;
      }
      sVar10 = (short)iVar12 * 2;
      fVar22 = fVar28 * fVar22;
      uVar4 = *(uint *)*param_3;
      fVar24 = *(float *)(*param_2 + 4 + lVar17 * 8);
      pfVar5 = *(float **)(param_1 + 0x40);
      fVar23 = fVar28 * fVar23;
      *pfVar5 = *(float *)(*param_2 + lVar17 * 8) - fVar22;
      pfVar5[1] = fVar24 - fVar23;
      lVar13 = *(longlong *)(param_1 + 0x40);
      *(undefined4 *)(lVar13 + 8) = uVar1;
      *(undefined4 *)(lVar13 + 0xc) = uVar2;
      *(uint *)(*(longlong *)(param_1 + 0x40) + 0x10) = uVar4;
      lVar13 = *(longlong *)(param_1 + 0x40);
      fVar24 = *(float *)(*param_2 + 4 + lVar17 * 8);
      sVar6 = (short)iVar16 * 2;
      *(float *)(lVar13 + 0x14) = fVar22 + *(float *)(*param_2 + lVar17 * 8);
      *(float *)(lVar13 + 0x18) = fVar23 + fVar24;
      lVar17 = *(longlong *)(param_1 + 0x40);
      *(undefined4 *)(lVar17 + 0x1c) = uVar1;
      *(undefined4 *)(lVar17 + 0x20) = uVar2;
      *(uint *)(*(longlong *)(param_1 + 0x40) + 0x24) = uVar4 & 0xffffff;
      sVar11 = sVar6 + sVar18;
      *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + 0x28;
      **(short **)(param_1 + 0x48) = sVar11;
      *(short *)(*(longlong *)(param_1 + 0x48) + 2) = sVar10 + sVar18;
      sVar10 = sVar10 + sVar18 + 1;
      *(short *)(*(longlong *)(param_1 + 0x48) + 4) = sVar10;
      *(short *)(*(longlong *)(param_1 + 0x48) + 6) = sVar10;
      iVar14 = iVar16 + 1;
      *(short *)(*(longlong *)(param_1 + 0x48) + 8) = sVar6 + sVar18 + 1;
      *(short *)(*(longlong *)(param_1 + 0x48) + 10) = sVar11;
      *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 0xc;
      iVar12 = iVar16;
      iVar16 = iVar14;
    } while (iVar14 < iVar20);
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + iVar20 * 2;
    FUN_1800132b0(&local_e0);
  }
  return;
}



/* ===== 1803416c0 FUN_1803416c0 ===== */

void FUN_1803416c0(longlong param_1,longlong *param_2,undefined8 *param_3,undefined1 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  short sVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  undefined8 *puVar7;
  float *pfVar8;
  float *pfVar9;
  short sVar10;
  short sVar11;
  longlong lVar12;
  longlong lVar13;
  float fVar14;
  float fVar15;
  ulonglong uVar16;
  int iVar17;
  short sVar18;
  longlong lVar19;
  int iVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float local_res10 [2];
  undefined8 *local_res18;
  float local_res20 [2];
  float local_118 [5];
  int local_104;
  undefined8 *local_100;
  undefined8 *puStack_f8;
  undefined8 *local_f0;
  
  local_res20[0] = (float)CONCAT31(local_res20[0]._1_3_,param_4);
  iVar20 = (int)(param_2[1] - *param_2 >> 3);
  if (2 < iVar20) {
    fVar27 = *(float *)(param_1 + 0xd0);
    local_118[4] = (float)(*(undefined4 **)(param_1 + 0x38))[1];
    uVar1 = **(undefined4 **)(param_1 + 0x38);
    local_104 = iVar20 * 2;
    local_res18 = param_3;
    FUN_1803fc3a0(local_118[4],iVar20 * 9 + -6,local_104);
    uVar2 = *(undefined4 *)(param_1 + 0x34);
    iVar17 = 2;
    do {
      sVar10 = (short)iVar17;
      iVar17 = iVar17 + 1;
      sVar18 = (short)uVar2;
      sVar10 = sVar10 * 2 + sVar18;
      **(short **)(param_1 + 0x48) = sVar18;
      *(short *)(*(longlong *)(param_1 + 0x48) + 2) = sVar10 + -2;
      *(short *)(*(longlong *)(param_1 + 0x48) + 4) = sVar10;
      *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 6;
    } while (iVar17 < iVar20);
    uVar16 = (ulonglong)iVar20;
    local_f0 = (undefined8 *)0x0;
    local_100 = (undefined8 *)0x0;
    puStack_f8 = (undefined8 *)0x0;
    if (0x1fffffffffffffff < uVar16) {
                    /* WARNING: Subroutine does not return */
      FUN_1800118d0();
    }
    puVar7 = (undefined8 *)FUN_18000fb70(uVar16 * 8);
    local_100 = puVar7;
    local_f0 = puVar7 + uVar16;
    puStack_f8 = puVar7;
    do {
      *puStack_f8 = 0;
      uVar6 = DAT_1808adec0;
      fVar5 = DAT_1808ac34c;
      puStack_f8 = puStack_f8 + 1;
      uVar16 = uVar16 - 1;
    } while (uVar16 != 0);
    local_res10[0] = (float)(iVar20 + -1);
    fVar14 = 0.0;
    fVar21 = local_res10[0];
    if (iVar20 < 4) goto LAB_180341a74;
    do {
      lVar13 = *param_2;
      lVar12 = (longlong)(int)fVar14;
      lVar19 = (longlong)(int)fVar21;
      fVar25 = *(float *)(lVar13 + lVar12 * 8) - *(float *)(lVar13 + lVar19 * 8);
      fVar26 = *(float *)(lVar13 + 4 + lVar12 * 8) - *(float *)(lVar13 + 4 + lVar19 * 8);
      fVar21 = fVar26 * fVar26 + fVar25 * fVar25;
      if (0.0 < fVar21) {
        if (fVar21 < 0.0) {
          fVar21 = (float)FUN_18051af10(fVar21);
        }
        else {
          fVar21 = SQRT(fVar21);
        }
        fVar26 = (fVar5 / fVar21) * fVar26;
        fVar25 = (fVar5 / fVar21) * fVar25;
      }
      *(float *)(puVar7 + lVar19) = fVar26;
      *(uint *)((longlong)puVar7 + lVar19 * 8 + 4) = (uint)fVar25 ^ uVar6;
      lVar13 = *param_2;
      fVar25 = *(float *)(lVar13 + 8 + lVar12 * 8) - *(float *)(lVar13 + lVar12 * 8);
      fVar26 = *(float *)(lVar13 + 0xc + lVar12 * 8) - *(float *)(lVar13 + 4 + lVar12 * 8);
      fVar21 = fVar26 * fVar26 + fVar25 * fVar25;
      if (0.0 < fVar21) {
        if (fVar21 < 0.0) {
          fVar21 = (float)FUN_18051af10(fVar21);
        }
        else {
          fVar21 = SQRT(fVar21);
        }
        fVar26 = (fVar5 / fVar21) * fVar26;
        fVar25 = (fVar5 / fVar21) * fVar25;
      }
      *(float *)(puVar7 + lVar12) = fVar26;
      *(uint *)((longlong)puVar7 + lVar12 * 8 + 4) = (uint)fVar25 ^ uVar6;
      lVar13 = *param_2;
      fVar25 = *(float *)(lVar13 + 0x10 + lVar12 * 8) - *(float *)(lVar13 + 8 + lVar12 * 8);
      fVar26 = *(float *)(lVar13 + 0x14 + lVar12 * 8) - *(float *)(lVar13 + 0xc + lVar12 * 8);
      fVar21 = fVar26 * fVar26 + fVar25 * fVar25;
      if (0.0 < fVar21) {
        if (fVar21 < 0.0) {
          fVar21 = (float)FUN_18051af10(fVar21);
        }
        else {
          fVar21 = SQRT(fVar21);
        }
        fVar26 = (fVar5 / fVar21) * fVar26;
        fVar25 = (fVar5 / fVar21) * fVar25;
      }
      *(float *)(puVar7 + lVar12 + 1) = fVar26;
      *(uint *)((longlong)puVar7 + lVar12 * 8 + 0xc) = (uint)fVar25 ^ uVar6;
      lVar13 = *param_2;
      fVar25 = *(float *)(lVar13 + 0x18 + lVar12 * 8) - *(float *)(lVar13 + 0x10 + lVar12 * 8);
      fVar26 = *(float *)(lVar13 + 0x1c + lVar12 * 8) - *(float *)(lVar13 + 0x14 + lVar12 * 8);
      fVar21 = fVar26 * fVar26 + fVar25 * fVar25;
      if (0.0 < fVar21) {
        if (fVar21 < 0.0) {
          fVar21 = (float)FUN_18051af10(fVar21);
        }
        else {
          fVar21 = SQRT(fVar21);
        }
        fVar26 = (fVar5 / fVar21) * fVar26;
        fVar25 = (fVar5 / fVar21) * fVar25;
      }
      fVar21 = (float)((int)fVar14 + 3);
      *(float *)(puVar7 + lVar12 + 2) = fVar26;
      fVar14 = (float)((int)fVar14 + 4);
      *(uint *)((longlong)puVar7 + lVar12 * 8 + 0x14) = (uint)fVar25 ^ uVar6;
      fVar15 = fVar14;
      fVar25 = DAT_1808abf8c;
      fVar26 = DAT_1808ac1f4;
      fVar4 = DAT_1808acb08;
    } while ((int)fVar14 < iVar20 + -3);
    while( true ) {
      fVar14 = fVar15;
      DAT_1808abf8c = fVar25;
      DAT_1808ac1f4 = fVar26;
      DAT_1808acb08 = fVar4;
      if (iVar20 <= (int)fVar14) break;
LAB_180341a74:
      lVar13 = *param_2;
      lVar12 = (longlong)(int)fVar21;
      fVar25 = *(float *)(lVar13 + (longlong)(int)fVar14 * 8) - *(float *)(lVar13 + lVar12 * 8);
      fVar26 = *(float *)(lVar13 + 4 + (longlong)(int)fVar14 * 8) -
               *(float *)(lVar13 + 4 + lVar12 * 8);
      fVar21 = fVar26 * fVar26 + fVar25 * fVar25;
      if (0.0 < fVar21) {
        if (fVar21 < 0.0) {
          fVar21 = (float)FUN_18051af10(fVar21);
        }
        else {
          fVar21 = SQRT(fVar21);
        }
        fVar26 = (fVar5 / fVar21) * fVar26;
        fVar25 = (fVar5 / fVar21) * fVar25;
      }
      *(float *)(puVar7 + lVar12) = fVar26;
      *(uint *)((longlong)puVar7 + lVar12 * 8 + 4) = (uint)fVar25 ^ uVar6;
      fVar15 = (float)((int)fVar14 + 1);
      fVar21 = fVar14;
      fVar25 = DAT_1808abf8c;
      fVar26 = DAT_1808ac1f4;
      fVar4 = DAT_1808acb08;
    }
    fVar27 = fVar27 * fVar26;
    fVar21 = 0.0;
    fVar14 = local_res10[0];
    do {
      fVar15 = fVar21;
      lVar13 = (longlong)(int)fVar15;
      fVar22 = (*(float *)(puVar7 + lVar13) + *(float *)(puVar7 + (int)fVar14)) * fVar26;
      fVar23 = (*(float *)((longlong)puVar7 + lVar13 * 8 + 4) +
               *(float *)((longlong)puVar7 + (longlong)(int)fVar14 * 8 + 4)) * fVar26;
      fVar21 = fVar23 * fVar23 + fVar22 * fVar22;
      if (fVar25 < fVar21) {
        fVar21 = fVar5 / fVar21;
        fVar24 = fVar4;
        if (fVar21 <= fVar4) {
          fVar24 = fVar21;
        }
        fVar23 = fVar24 * fVar23;
        fVar22 = fVar24 * fVar22;
      }
      lVar12 = *param_2;
      local_118[2] = 1.0;
      local_118[0] = 0.0;
      fVar21 = *(float *)(lVar12 + lVar13 * 8);
      local_118[3] = 1.0;
      local_res20[0] = 0.0;
      fVar22 = fVar27 * fVar22;
      local_118[1] = (fVar21 - *(float *)local_res18[2]) / *(float *)local_res18[3];
      fVar23 = fVar27 * fVar23;
      pfVar9 = local_118;
      if (0.0 <= local_118[1]) {
        pfVar9 = local_118 + 1;
      }
      pfVar8 = local_118 + 2;
      if (local_118[1] <= fVar5) {
        pfVar8 = pfVar9;
      }
      local_res10[0] = *pfVar8;
      pfVar9 = local_res20;
      if (0.0 <= local_res10[0]) {
        pfVar9 = local_res10;
      }
      pfVar8 = local_118 + 3;
      if (local_res10[0] <= fVar5) {
        pfVar8 = pfVar9;
      }
      uVar6 = FUN_1802b38e0(*(undefined4 *)*local_res18,*(undefined4 *)local_res18[1],*pfVar8);
      fVar24 = *(float *)(lVar12 + 4 + lVar13 * 8);
      pfVar9 = *(float **)(param_1 + 0x40);
      sVar10 = SUB42(fVar14,0) * 2;
      sVar3 = SUB42(fVar15,0) * 2;
      *pfVar9 = fVar21 - fVar22;
      pfVar9[1] = fVar24 - fVar23;
      lVar12 = *(longlong *)(param_1 + 0x40);
      sVar11 = sVar3 + sVar18;
      *(undefined4 *)(lVar12 + 8) = uVar1;
      *(float *)(lVar12 + 0xc) = local_118[4];
      *(uint *)(*(longlong *)(param_1 + 0x40) + 0x10) = uVar6;
      lVar12 = *(longlong *)(param_1 + 0x40);
      fVar21 = *(float *)(*param_2 + 4 + lVar13 * 8);
      *(float *)(lVar12 + 0x14) = fVar22 + *(float *)(*param_2 + lVar13 * 8);
      *(float *)(lVar12 + 0x18) = fVar23 + fVar21;
      lVar13 = *(longlong *)(param_1 + 0x40);
      *(undefined4 *)(lVar13 + 0x1c) = uVar1;
      *(float *)(lVar13 + 0x20) = local_118[4];
      *(uint *)(*(longlong *)(param_1 + 0x40) + 0x24) = uVar6 & 0xffffff;
      *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + 0x28;
      **(short **)(param_1 + 0x48) = sVar11;
      *(short *)(*(longlong *)(param_1 + 0x48) + 2) = sVar10 + sVar18;
      sVar10 = sVar10 + sVar18 + 1;
      *(short *)(*(longlong *)(param_1 + 0x48) + 4) = sVar10;
      *(short *)(*(longlong *)(param_1 + 0x48) + 6) = sVar10;
      *(short *)(*(longlong *)(param_1 + 0x48) + 8) = sVar3 + sVar18 + 1;
      *(short *)(*(longlong *)(param_1 + 0x48) + 10) = sVar11;
      *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 0xc;
      fVar21 = (float)((int)fVar15 + 1);
      fVar14 = fVar15;
    } while ((int)fVar15 + 1 < iVar20);
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + local_104;
    FUN_1800132b0(&local_100);
  }
  return;
}



/* ===== 180341de0 FUN_180341de0 ===== */

void FUN_180341de0(longlong param_1,longlong *param_2,undefined8 *param_3,undefined1 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  short sVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  undefined8 *puVar7;
  float *pfVar8;
  float *pfVar9;
  short sVar10;
  short sVar11;
  longlong lVar12;
  longlong lVar13;
  float fVar14;
  float fVar15;
  ulonglong uVar16;
  int iVar17;
  short sVar18;
  longlong lVar19;
  int iVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float local_res10 [2];
  undefined8 *local_res18;
  float local_res20 [2];
  float local_118 [5];
  int local_104;
  undefined8 *local_100;
  undefined8 *puStack_f8;
  undefined8 *local_f0;
  
  local_res20[0] = (float)CONCAT31(local_res20[0]._1_3_,param_4);
  iVar20 = (int)(param_2[1] - *param_2 >> 3);
  if (2 < iVar20) {
    fVar27 = *(float *)(param_1 + 0xd0);
    local_118[4] = (float)(*(undefined4 **)(param_1 + 0x38))[1];
    uVar1 = **(undefined4 **)(param_1 + 0x38);
    local_104 = iVar20 * 2;
    local_res18 = param_3;
    FUN_1803fc3a0(local_118[4],iVar20 * 9 + -6,local_104);
    uVar2 = *(undefined4 *)(param_1 + 0x34);
    iVar17 = 2;
    do {
      sVar10 = (short)iVar17;
      iVar17 = iVar17 + 1;
      sVar18 = (short)uVar2;
      sVar10 = sVar10 * 2 + sVar18;
      **(short **)(param_1 + 0x48) = sVar18;
      *(short *)(*(longlong *)(param_1 + 0x48) + 2) = sVar10 + -2;
      *(short *)(*(longlong *)(param_1 + 0x48) + 4) = sVar10;
      *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 6;
    } while (iVar17 < iVar20);
    uVar16 = (ulonglong)iVar20;
    local_f0 = (undefined8 *)0x0;
    local_100 = (undefined8 *)0x0;
    puStack_f8 = (undefined8 *)0x0;
    if (0x1fffffffffffffff < uVar16) {
                    /* WARNING: Subroutine does not return */
      FUN_1800118d0();
    }
    puVar7 = (undefined8 *)FUN_18000fb70(uVar16 * 8);
    local_100 = puVar7;
    local_f0 = puVar7 + uVar16;
    puStack_f8 = puVar7;
    do {
      *puStack_f8 = 0;
      uVar6 = DAT_1808adec0;
      fVar5 = DAT_1808ac34c;
      puStack_f8 = puStack_f8 + 1;
      uVar16 = uVar16 - 1;
    } while (uVar16 != 0);
    local_res10[0] = (float)(iVar20 + -1);
    fVar14 = 0.0;
    fVar21 = local_res10[0];
    if (iVar20 < 4) goto LAB_180342194;
    do {
      lVar13 = *param_2;
      lVar12 = (longlong)(int)fVar14;
      lVar19 = (longlong)(int)fVar21;
      fVar25 = *(float *)(lVar13 + lVar12 * 8) - *(float *)(lVar13 + lVar19 * 8);
      fVar26 = *(float *)(lVar13 + 4 + lVar12 * 8) - *(float *)(lVar13 + 4 + lVar19 * 8);
      fVar21 = fVar26 * fVar26 + fVar25 * fVar25;
      if (0.0 < fVar21) {
        if (fVar21 < 0.0) {
          fVar21 = (float)FUN_18051af10(fVar21);
        }
        else {
          fVar21 = SQRT(fVar21);
        }
        fVar26 = (fVar5 / fVar21) * fVar26;
        fVar25 = (fVar5 / fVar21) * fVar25;
      }
      *(float *)(puVar7 + lVar19) = fVar26;
      *(uint *)((longlong)puVar7 + lVar19 * 8 + 4) = (uint)fVar25 ^ uVar6;
      lVar13 = *param_2;
      fVar25 = *(float *)(lVar13 + 8 + lVar12 * 8) - *(float *)(lVar13 + lVar12 * 8);
      fVar26 = *(float *)(lVar13 + 0xc + lVar12 * 8) - *(float *)(lVar13 + 4 + lVar12 * 8);
      fVar21 = fVar26 * fVar26 + fVar25 * fVar25;
      if (0.0 < fVar21) {
        if (fVar21 < 0.0) {
          fVar21 = (float)FUN_18051af10(fVar21);
        }
        else {
          fVar21 = SQRT(fVar21);
        }
        fVar26 = (fVar5 / fVar21) * fVar26;
        fVar25 = (fVar5 / fVar21) * fVar25;
      }
      *(float *)(puVar7 + lVar12) = fVar26;
      *(uint *)((longlong)puVar7 + lVar12 * 8 + 4) = (uint)fVar25 ^ uVar6;
      lVar13 = *param_2;
      fVar25 = *(float *)(lVar13 + 0x10 + lVar12 * 8) - *(float *)(lVar13 + 8 + lVar12 * 8);
      fVar26 = *(float *)(lVar13 + 0x14 + lVar12 * 8) - *(float *)(lVar13 + 0xc + lVar12 * 8);
      fVar21 = fVar26 * fVar26 + fVar25 * fVar25;
      if (0.0 < fVar21) {
        if (fVar21 < 0.0) {
          fVar21 = (float)FUN_18051af10(fVar21);
        }
        else {
          fVar21 = SQRT(fVar21);
        }
        fVar26 = (fVar5 / fVar21) * fVar26;
        fVar25 = (fVar5 / fVar21) * fVar25;
      }
      *(float *)(puVar7 + lVar12 + 1) = fVar26;
      *(uint *)((longlong)puVar7 + lVar12 * 8 + 0xc) = (uint)fVar25 ^ uVar6;
      lVar13 = *param_2;
      fVar25 = *(float *)(lVar13 + 0x18 + lVar12 * 8) - *(float *)(lVar13 + 0x10 + lVar12 * 8);
      fVar26 = *(float *)(lVar13 + 0x1c + lVar12 * 8) - *(float *)(lVar13 + 0x14 + lVar12 * 8);
      fVar21 = fVar26 * fVar26 + fVar25 * fVar25;
      if (0.0 < fVar21) {
        if (fVar21 < 0.0) {
          fVar21 = (float)FUN_18051af10(fVar21);
        }
        else {
          fVar21 = SQRT(fVar21);
        }
        fVar26 = (fVar5 / fVar21) * fVar26;
        fVar25 = (fVar5 / fVar21) * fVar25;
      }
      fVar21 = (float)((int)fVar14 + 3);
      *(float *)(puVar7 + lVar12 + 2) = fVar26;
      fVar14 = (float)((int)fVar14 + 4);
      *(uint *)((longlong)puVar7 + lVar12 * 8 + 0x14) = (uint)fVar25 ^ uVar6;
      fVar15 = fVar14;
      fVar25 = DAT_1808abf8c;
      fVar26 = DAT_1808ac1f4;
      fVar4 = DAT_1808acb08;
    } while ((int)fVar14 < iVar20 + -3);
    while( true ) {
      fVar14 = fVar15;
      DAT_1808abf8c = fVar25;
      DAT_1808ac1f4 = fVar26;
      DAT_1808acb08 = fVar4;
      if (iVar20 <= (int)fVar14) break;
LAB_180342194:
      lVar13 = *param_2;
      lVar12 = (longlong)(int)fVar21;
      fVar25 = *(float *)(lVar13 + (longlong)(int)fVar14 * 8) - *(float *)(lVar13 + lVar12 * 8);
      fVar26 = *(float *)(lVar13 + 4 + (longlong)(int)fVar14 * 8) -
               *(float *)(lVar13 + 4 + lVar12 * 8);
      fVar21 = fVar26 * fVar26 + fVar25 * fVar25;
      if (0.0 < fVar21) {
        if (fVar21 < 0.0) {
          fVar21 = (float)FUN_18051af10(fVar21);
        }
        else {
          fVar21 = SQRT(fVar21);
        }
        fVar26 = (fVar5 / fVar21) * fVar26;
        fVar25 = (fVar5 / fVar21) * fVar25;
      }
      *(float *)(puVar7 + lVar12) = fVar26;
      *(uint *)((longlong)puVar7 + lVar12 * 8 + 4) = (uint)fVar25 ^ uVar6;
      fVar15 = (float)((int)fVar14 + 1);
      fVar21 = fVar14;
      fVar25 = DAT_1808abf8c;
      fVar26 = DAT_1808ac1f4;
      fVar4 = DAT_1808acb08;
    }
    fVar27 = fVar27 * fVar26;
    fVar21 = 0.0;
    fVar14 = local_res10[0];
    do {
      fVar15 = fVar21;
      lVar13 = (longlong)(int)fVar15;
      fVar22 = (*(float *)(puVar7 + lVar13) + *(float *)(puVar7 + (int)fVar14)) * fVar26;
      fVar23 = (*(float *)((longlong)puVar7 + lVar13 * 8 + 4) +
               *(float *)((longlong)puVar7 + (longlong)(int)fVar14 * 8 + 4)) * fVar26;
      fVar21 = fVar23 * fVar23 + fVar22 * fVar22;
      if (fVar25 < fVar21) {
        fVar21 = fVar5 / fVar21;
        fVar24 = fVar4;
        if (fVar21 <= fVar4) {
          fVar24 = fVar21;
        }
        fVar23 = fVar24 * fVar23;
        fVar22 = fVar24 * fVar22;
      }
      lVar12 = *param_2;
      local_118[2] = 1.0;
      local_118[0] = 0.0;
      fVar21 = *(float *)(lVar12 + 4 + lVar13 * 8);
      local_118[3] = 1.0;
      local_res20[0] = 0.0;
      fVar22 = fVar27 * fVar22;
      fVar23 = fVar27 * fVar23;
      local_118[1] = (fVar21 - *(float *)(local_res18[1] + 4)) / *(float *)local_res18[2];
      pfVar9 = local_118;
      if (0.0 <= local_118[1]) {
        pfVar9 = local_118 + 1;
      }
      pfVar8 = local_118 + 2;
      if (local_118[1] <= fVar5) {
        pfVar8 = pfVar9;
      }
      local_res10[0] = *pfVar8;
      pfVar9 = local_res20;
      if (0.0 <= local_res10[0]) {
        pfVar9 = local_res10;
      }
      pfVar8 = local_118 + 3;
      if (local_res10[0] <= fVar5) {
        pfVar8 = pfVar9;
      }
      uVar6 = FUN_1802b38e0(*(uint *)*local_res18 & 0xffffff,*(uint *)*local_res18,*pfVar8);
      pfVar9 = *(float **)(param_1 + 0x40);
      sVar10 = SUB42(fVar14,0) * 2;
      sVar3 = SUB42(fVar15,0) * 2;
      *pfVar9 = *(float *)(lVar12 + lVar13 * 8) - fVar22;
      pfVar9[1] = fVar21 - fVar23;
      sVar11 = sVar3 + sVar18;
      lVar12 = *(longlong *)(param_1 + 0x40);
      *(undefined4 *)(lVar12 + 8) = uVar1;
      *(float *)(lVar12 + 0xc) = local_118[4];
      *(uint *)(*(longlong *)(param_1 + 0x40) + 0x10) = uVar6;
      lVar12 = *(longlong *)(param_1 + 0x40);
      fVar21 = *(float *)(*param_2 + 4 + lVar13 * 8);
      *(float *)(lVar12 + 0x14) = fVar22 + *(float *)(*param_2 + lVar13 * 8);
      *(float *)(lVar12 + 0x18) = fVar23 + fVar21;
      lVar13 = *(longlong *)(param_1 + 0x40);
      *(undefined4 *)(lVar13 + 0x1c) = uVar1;
      *(float *)(lVar13 + 0x20) = local_118[4];
      *(uint *)(*(longlong *)(param_1 + 0x40) + 0x24) = uVar6 & 0xffffff;
      *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + 0x28;
      **(short **)(param_1 + 0x48) = sVar11;
      *(short *)(*(longlong *)(param_1 + 0x48) + 2) = sVar10 + sVar18;
      sVar10 = sVar10 + sVar18 + 1;
      *(short *)(*(longlong *)(param_1 + 0x48) + 4) = sVar10;
      *(short *)(*(longlong *)(param_1 + 0x48) + 6) = sVar10;
      *(short *)(*(longlong *)(param_1 + 0x48) + 8) = sVar3 + sVar18 + 1;
      *(short *)(*(longlong *)(param_1 + 0x48) + 10) = sVar11;
      *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 0xc;
      fVar21 = (float)((int)fVar15 + 1);
      fVar14 = fVar15;
    } while ((int)fVar15 + 1 < iVar20);
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + local_104;
    FUN_1800132b0(&local_100);
  }
  return;
}



/* ===== 180342500 FUN_180342500 ===== */

void FUN_180342500(longlong param_1,longlong *param_2,undefined8 param_3)

{
  float *pfVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float *pfVar5;
  float fVar6;
  int iVar7;
  uint uVar8;
  undefined8 *puVar9;
  short sVar10;
  short sVar11;
  longlong lVar12;
  int iVar13;
  ulonglong uVar14;
  longlong lVar15;
  int iVar16;
  short sVar17;
  short sVar18;
  longlong lVar19;
  int iVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  int local_res20;
  undefined8 *local_f0;
  undefined8 *puStack_e8;
  undefined8 *local_e0;
  
  iVar20 = (int)(param_2[1] - *param_2 >> 3);
  if (2 < iVar20) {
    fVar28 = *(float *)(param_1 + 0xd0);
    uVar2 = **(undefined4 **)(param_1 + 0x38);
    uVar3 = (*(undefined4 **)(param_1 + 0x38))[1];
    FUN_1803fc3a0(param_1,iVar20 * 9 + -6,iVar20 * 2);
    uVar4 = *(undefined4 *)(param_1 + 0x34);
    iVar16 = 2;
    do {
      sVar10 = (short)iVar16;
      iVar16 = iVar16 + 1;
      sVar18 = (short)uVar4;
      sVar10 = sVar10 * 2 + sVar18;
      **(short **)(param_1 + 0x48) = sVar18;
      *(short *)(*(longlong *)(param_1 + 0x48) + 2) = sVar10 + -2;
      *(short *)(*(longlong *)(param_1 + 0x48) + 4) = sVar10;
      *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 6;
    } while (iVar16 < iVar20);
    uVar14 = (ulonglong)iVar20;
    local_e0 = (undefined8 *)0x0;
    local_f0 = (undefined8 *)0x0;
    puStack_e8 = (undefined8 *)0x0;
    if (0x1fffffffffffffff < uVar14) {
                    /* WARNING: Subroutine does not return */
      FUN_1800118d0();
    }
    puVar9 = (undefined8 *)FUN_18000fb70(uVar14 * 8);
    local_e0 = puVar9 + uVar14;
    puStack_e8 = puVar9;
    do {
      *puStack_e8 = 0;
      uVar8 = DAT_1808adec0;
      fVar6 = DAT_1808ac34c;
      puStack_e8 = puStack_e8 + 1;
      uVar14 = uVar14 - 1;
    } while (uVar14 != 0);
    local_res20 = iVar20 + -1;
    iVar13 = 0;
    local_f0 = puVar9;
    iVar16 = local_res20;
    if (iVar20 < 4) goto LAB_1803428a4;
    do {
      lVar15 = *param_2;
      lVar12 = (longlong)iVar13;
      lVar19 = (longlong)iVar16;
      fVar26 = *(float *)(lVar15 + lVar12 * 8) - *(float *)(lVar15 + lVar19 * 8);
      fVar27 = *(float *)(lVar15 + 4 + lVar12 * 8) - *(float *)(lVar15 + 4 + lVar19 * 8);
      fVar21 = fVar27 * fVar27 + fVar26 * fVar26;
      if (0.0 < fVar21) {
        if (fVar21 < 0.0) {
          fVar21 = (float)FUN_18051af10(fVar21);
        }
        else {
          fVar21 = SQRT(fVar21);
        }
        fVar27 = (fVar6 / fVar21) * fVar27;
        fVar26 = (fVar6 / fVar21) * fVar26;
      }
      *(float *)(puVar9 + lVar19) = fVar27;
      *(uint *)((longlong)puVar9 + lVar19 * 8 + 4) = (uint)fVar26 ^ uVar8;
      lVar15 = *param_2;
      fVar26 = *(float *)(lVar15 + 8 + lVar12 * 8) - *(float *)(lVar15 + lVar12 * 8);
      fVar27 = *(float *)(lVar15 + 0xc + lVar12 * 8) - *(float *)(lVar15 + 4 + lVar12 * 8);
      fVar21 = fVar27 * fVar27 + fVar26 * fVar26;
      if (0.0 < fVar21) {
        if (fVar21 < 0.0) {
          fVar21 = (float)FUN_18051af10(fVar21);
        }
        else {
          fVar21 = SQRT(fVar21);
        }
        fVar27 = (fVar6 / fVar21) * fVar27;
        fVar26 = (fVar6 / fVar21) * fVar26;
      }
      *(float *)(puVar9 + lVar12) = fVar27;
      *(uint *)((longlong)puVar9 + lVar12 * 8 + 4) = (uint)fVar26 ^ uVar8;
      lVar15 = *param_2;
      fVar26 = *(float *)(lVar15 + 0x10 + lVar12 * 8) - *(float *)(lVar15 + 8 + lVar12 * 8);
      fVar27 = *(float *)(lVar15 + 0x14 + lVar12 * 8) - *(float *)(lVar15 + 0xc + lVar12 * 8);
      fVar21 = fVar27 * fVar27 + fVar26 * fVar26;
      if (0.0 < fVar21) {
        if (fVar21 < 0.0) {
          fVar21 = (float)FUN_18051af10(fVar21);
        }
        else {
          fVar21 = SQRT(fVar21);
        }
        fVar27 = (fVar6 / fVar21) * fVar27;
        fVar26 = (fVar6 / fVar21) * fVar26;
      }
      *(float *)(puVar9 + lVar12 + 1) = fVar27;
      *(uint *)((longlong)puVar9 + lVar12 * 8 + 0xc) = (uint)fVar26 ^ uVar8;
      lVar15 = *param_2;
      fVar26 = *(float *)(lVar15 + 0x18 + lVar12 * 8) - *(float *)(lVar15 + 0x10 + lVar12 * 8);
      fVar27 = *(float *)(lVar15 + 0x1c + lVar12 * 8) - *(float *)(lVar15 + 0x14 + lVar12 * 8);
      fVar21 = fVar27 * fVar27 + fVar26 * fVar26;
      if (0.0 < fVar21) {
        if (fVar21 < 0.0) {
          fVar21 = (float)FUN_18051af10(fVar21);
        }
        else {
          fVar21 = SQRT(fVar21);
        }
        fVar27 = (fVar6 / fVar21) * fVar27;
        fVar26 = (fVar6 / fVar21) * fVar26;
      }
      iVar16 = iVar13 + 3;
      *(float *)(puVar9 + lVar12 + 2) = fVar27;
      iVar13 = iVar13 + 4;
      *(uint *)((longlong)puVar9 + lVar12 * 8 + 0x14) = (uint)fVar26 ^ uVar8;
      iVar7 = iVar13;
      fVar21 = DAT_1808abf8c;
      fVar26 = DAT_1808ac1f4;
      fVar27 = DAT_1808acb08;
    } while (iVar13 < iVar20 + -3);
    while( true ) {
      iVar13 = iVar7;
      DAT_1808abf8c = fVar21;
      DAT_1808ac1f4 = fVar26;
      DAT_1808acb08 = fVar27;
      if (iVar20 <= iVar13) break;
LAB_1803428a4:
      lVar15 = *param_2;
      lVar12 = (longlong)iVar16;
      fVar26 = *(float *)(lVar15 + (longlong)iVar13 * 8) - *(float *)(lVar15 + lVar12 * 8);
      fVar27 = *(float *)(lVar15 + 4 + (longlong)iVar13 * 8) - *(float *)(lVar15 + 4 + lVar12 * 8);
      fVar21 = fVar27 * fVar27 + fVar26 * fVar26;
      if (0.0 < fVar21) {
        if (fVar21 < 0.0) {
          fVar21 = (float)FUN_18051af10(fVar21);
        }
        else {
          fVar21 = SQRT(fVar21);
        }
        fVar27 = (fVar6 / fVar21) * fVar27;
        fVar26 = (fVar6 / fVar21) * fVar26;
      }
      *(float *)(puVar9 + lVar12) = fVar27;
      *(uint *)((longlong)puVar9 + lVar12 * 8 + 4) = (uint)fVar26 ^ uVar8;
      iVar7 = iVar13 + 1;
      iVar16 = iVar13;
      fVar21 = DAT_1808abf8c;
      fVar26 = DAT_1808ac1f4;
      fVar27 = DAT_1808acb08;
    }
    fVar28 = fVar28 * fVar26;
    iVar16 = 0;
    do {
      iVar13 = iVar16;
      lVar15 = (longlong)iVar13;
      fVar22 = (*(float *)(puVar9 + lVar15) + *(float *)(puVar9 + local_res20)) * fVar26;
      fVar23 = (*(float *)((longlong)puVar9 + lVar15 * 8 + 4) +
               *(float *)((longlong)puVar9 + (longlong)local_res20 * 8 + 4)) * fVar26;
      fVar24 = fVar23 * fVar23 + fVar22 * fVar22;
      if (fVar21 < fVar24) {
        fVar24 = fVar6 / fVar24;
        fVar25 = fVar27;
        if (fVar24 <= fVar27) {
          fVar25 = fVar24;
        }
        fVar23 = fVar25 * fVar23;
        fVar22 = fVar25 * fVar22;
      }
      fVar22 = fVar28 * fVar22;
      pfVar1 = (float *)(*param_2 + lVar15 * 8);
      fVar23 = fVar28 * fVar23;
      uVar8 = FUN_1802c4080(param_3,pfVar1);
      fVar24 = pfVar1[1];
      pfVar5 = *(float **)(param_1 + 0x40);
      sVar10 = (short)iVar13 * 2;
      sVar17 = (short)local_res20 * 2;
      *pfVar5 = *pfVar1 - fVar22;
      pfVar5[1] = fVar24 - fVar23;
      lVar12 = *(longlong *)(param_1 + 0x40);
      *(undefined4 *)(lVar12 + 8) = uVar2;
      *(undefined4 *)(lVar12 + 0xc) = uVar3;
      *(uint *)(*(longlong *)(param_1 + 0x40) + 0x10) = uVar8;
      lVar12 = *(longlong *)(param_1 + 0x40);
      fVar24 = *(float *)(*param_2 + 4 + lVar15 * 8);
      *(float *)(lVar12 + 0x14) = fVar22 + *(float *)(*param_2 + lVar15 * 8);
      *(float *)(lVar12 + 0x18) = fVar23 + fVar24;
      lVar15 = *(longlong *)(param_1 + 0x40);
      *(undefined4 *)(lVar15 + 0x1c) = uVar2;
      *(undefined4 *)(lVar15 + 0x20) = uVar3;
      *(uint *)(*(longlong *)(param_1 + 0x40) + 0x24) = uVar8 & 0xffffff;
      sVar11 = sVar10 + sVar18;
      *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + 0x28;
      **(short **)(param_1 + 0x48) = sVar11;
      *(short *)(*(longlong *)(param_1 + 0x48) + 2) = sVar17 + sVar18;
      sVar17 = sVar17 + sVar18 + 1;
      *(short *)(*(longlong *)(param_1 + 0x48) + 4) = sVar17;
      *(short *)(*(longlong *)(param_1 + 0x48) + 6) = sVar17;
      *(short *)(*(longlong *)(param_1 + 0x48) + 8) = sVar10 + sVar18 + 1;
      *(short *)(*(longlong *)(param_1 + 0x48) + 10) = sVar11;
      *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 0xc;
      iVar16 = iVar13 + 1;
      local_res20 = iVar13;
    } while (iVar13 + 1 < iVar20);
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + iVar20 * 2;
    FUN_1800132b0(&local_f0);
  }
  return;
}



/* ===== 180342b70 FUN_180342b70 ===== */

void FUN_180342b70(longlong param_1,longlong *param_2,undefined8 *param_3,undefined1 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  longlong lVar4;
  short sVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  float *pfVar9;
  float *pfVar10;
  int iVar11;
  ulonglong uVar12;
  int iVar13;
  uint uVar14;
  ulonglong uVar15;
  float fVar16;
  float local_res10 [4];
  float local_res20 [2];
  float local_78 [24];
  
  local_res20[0] = (float)CONCAT31(local_res20[0]._1_3_,param_4);
  uVar12 = param_2[1] - *param_2 >> 3;
  iVar11 = (int)uVar12;
  if (2 < iVar11) {
    uVar1 = **(undefined4 **)(param_1 + 0x38);
    uVar2 = (*(undefined4 **)(param_1 + 0x38))[1];
    FUN_1803fc3a0(param_1,(iVar11 + -2) * 3,uVar12 & 0xffffffff);
    fVar7 = DAT_1808ac34c;
    fVar6 = DAT_1808abfbc;
    uVar12 = (ulonglong)*(uint *)(param_1 + 0x34);
    uVar15 = 0;
    do {
      puVar3 = *(undefined4 **)(param_1 + 0x40);
      local_78[0] = 1.0;
      local_res20[0] = 0.0;
      uVar8 = *(undefined4 *)(*param_2 + 4 + uVar15 * 8);
      *puVar3 = *(undefined4 *)(*param_2 + uVar15 * 8);
      puVar3[1] = uVar8;
      lVar4 = *(longlong *)(param_1 + 0x40);
      *(undefined4 *)(lVar4 + 8) = uVar1;
      *(undefined4 *)(lVar4 + 0xc) = uVar2;
      fVar16 = *(float *)param_3[3] - *(float *)param_3[2];
      local_res10[0] = fVar6;
      if (fVar6 <= fVar16) {
        local_res10[0] = fVar16;
      }
      local_res10[0] = (*(float *)(*param_2 + uVar15 * 8) - *(float *)param_3[2]) / local_res10[0];
      pfVar10 = local_res20;
      if (0.0 <= local_res10[0]) {
        pfVar10 = local_res10;
      }
      pfVar9 = local_78;
      if (local_res10[0] <= fVar7) {
        pfVar9 = pfVar10;
      }
      uVar8 = FUN_1802b38e0(*(undefined4 *)*param_3,*(undefined4 *)param_3[1],*pfVar9);
      uVar14 = (int)uVar15 + 1;
      uVar15 = (ulonglong)uVar14;
      *(undefined4 *)(*(longlong *)(param_1 + 0x40) + 0x10) = uVar8;
      *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + 0x14;
    } while ((int)uVar14 < iVar11);
    iVar13 = 2;
    do {
      sVar5 = (short)iVar13 + (short)uVar12;
      iVar13 = iVar13 + 1;
      **(short **)(param_1 + 0x48) = (short)uVar12;
      *(short *)(*(longlong *)(param_1 + 0x48) + 2) = sVar5 + -1;
      *(short *)(*(longlong *)(param_1 + 0x48) + 4) = sVar5;
      *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 6;
    } while (iVar13 < iVar11);
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + iVar11;
  }
  return;
}



/* ===== 180342d40 FUN_180342d40 ===== */

void FUN_180342d40(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  short sVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  undefined8 *puVar7;
  float *pfVar8;
  int iVar9;
  float *pfVar10;
  short sVar11;
  longlong lVar12;
  longlong lVar13;
  short sVar14;
  longlong lVar15;
  float fVar16;
  float fVar17;
  ulonglong uVar18;
  int iVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float local_res10 [2];
  undefined8 *local_res18;
  float local_res20 [2];
  float local_118 [5];
  int local_104;
  int local_100;
  int local_fc;
  undefined8 *local_f8;
  undefined8 *puStack_f0;
  undefined8 *local_e8;
  
  iVar19 = (int)(param_2[1] - *param_2 >> 3);
  if (2 < iVar19) {
    fVar26 = *(float *)(param_1 + 0xd0);
    local_118[4] = (float)(*(undefined4 **)(param_1 + 0x38))[1];
    uVar1 = **(undefined4 **)(param_1 + 0x38);
    local_fc = iVar19 * 2;
    local_res18 = param_3;
    FUN_1803fc3a0(param_1,iVar19 * 6,local_fc);
    uVar18 = (ulonglong)iVar19;
    local_e8 = (undefined8 *)0x0;
    local_f8 = (undefined8 *)0x0;
    puStack_f0 = (undefined8 *)0x0;
    if (0x1fffffffffffffff < uVar18) {
                    /* WARNING: Subroutine does not return */
      FUN_1800118d0();
    }
    iVar2 = *(int *)(param_1 + 0x34);
    local_104 = iVar2;
    puVar7 = (undefined8 *)FUN_18000fb70(uVar18 * 8);
    local_f8 = puVar7;
    local_e8 = puVar7 + uVar18;
    puStack_f0 = puVar7;
    do {
      *puStack_f0 = 0;
      uVar6 = DAT_1808adec0;
      fVar5 = DAT_1808ac34c;
      puStack_f0 = puStack_f0 + 1;
      uVar18 = uVar18 - 1;
    } while (uVar18 != 0);
    local_res10[0] = (float)(iVar19 + -1);
    fVar16 = 0.0;
    local_100 = iVar2 + 1;
    fVar24 = local_res10[0];
    if (iVar19 < 4) goto LAB_1803430b5;
    do {
      lVar13 = *param_2;
      lVar12 = (longlong)(int)fVar16;
      lVar15 = (longlong)(int)fVar24;
      fVar24 = *(float *)(lVar13 + lVar12 * 8) - *(float *)(lVar13 + lVar15 * 8);
      fVar25 = *(float *)(lVar13 + 4 + lVar12 * 8) - *(float *)(lVar13 + 4 + lVar15 * 8);
      fVar20 = fVar25 * fVar25 + fVar24 * fVar24;
      if (0.0 < fVar20) {
        if (fVar20 < 0.0) {
          fVar20 = (float)FUN_18051af10();
        }
        else {
          fVar20 = SQRT(fVar20);
        }
        fVar25 = (fVar5 / fVar20) * fVar25;
        fVar24 = (fVar5 / fVar20) * fVar24;
      }
      *(float *)(puVar7 + lVar15) = fVar25;
      *(uint *)((longlong)puVar7 + lVar15 * 8 + 4) = (uint)fVar24 ^ uVar6;
      lVar13 = *param_2;
      fVar24 = *(float *)(lVar13 + 8 + lVar12 * 8) - *(float *)(lVar13 + lVar12 * 8);
      fVar25 = *(float *)(lVar13 + 0xc + lVar12 * 8) - *(float *)(lVar13 + 4 + lVar12 * 8);
      fVar20 = fVar25 * fVar25 + fVar24 * fVar24;
      if (0.0 < fVar20) {
        if (fVar20 < 0.0) {
          fVar20 = (float)FUN_18051af10();
        }
        else {
          fVar20 = SQRT(fVar20);
        }
        fVar25 = (fVar5 / fVar20) * fVar25;
        fVar24 = (fVar5 / fVar20) * fVar24;
      }
      *(float *)(puVar7 + lVar12) = fVar25;
      *(uint *)((longlong)puVar7 + lVar12 * 8 + 4) = (uint)fVar24 ^ uVar6;
      lVar13 = *param_2;
      fVar24 = *(float *)(lVar13 + 0x10 + lVar12 * 8) - *(float *)(lVar13 + 8 + lVar12 * 8);
      fVar25 = *(float *)(lVar13 + 0x14 + lVar12 * 8) - *(float *)(lVar13 + 0xc + lVar12 * 8);
      fVar20 = fVar25 * fVar25 + fVar24 * fVar24;
      if (0.0 < fVar20) {
        if (fVar20 < 0.0) {
          fVar20 = (float)FUN_18051af10();
        }
        else {
          fVar20 = SQRT(fVar20);
        }
        fVar25 = (fVar5 / fVar20) * fVar25;
        fVar24 = (fVar5 / fVar20) * fVar24;
      }
      *(float *)(puVar7 + lVar12 + 1) = fVar25;
      *(uint *)((longlong)puVar7 + lVar12 * 8 + 0xc) = (uint)fVar24 ^ uVar6;
      lVar13 = *param_2;
      fVar25 = *(float *)(lVar13 + 0x18 + lVar12 * 8) - *(float *)(lVar13 + 0x10 + lVar12 * 8);
      fVar20 = *(float *)(lVar13 + 0x1c + lVar12 * 8) - *(float *)(lVar13 + 0x14 + lVar12 * 8);
      fVar24 = fVar20 * fVar20 + fVar25 * fVar25;
      if (0.0 < fVar24) {
        if (fVar24 < 0.0) {
          fVar24 = (float)FUN_18051af10();
        }
        else {
          fVar24 = SQRT(fVar24);
        }
        fVar20 = (fVar5 / fVar24) * fVar20;
        fVar25 = (fVar5 / fVar24) * fVar25;
      }
      fVar24 = (float)((int)fVar16 + 3);
      *(float *)(puVar7 + lVar12 + 2) = fVar20;
      fVar16 = (float)((int)fVar16 + 4);
      *(uint *)((longlong)puVar7 + lVar12 * 8 + 0x14) = (uint)fVar25 ^ uVar6;
      fVar17 = fVar16;
      fVar20 = DAT_1808abf8c;
      fVar25 = DAT_1808ac1f4;
      fVar4 = DAT_1808acb08;
    } while ((int)fVar16 < iVar19 + -3);
    while( true ) {
      fVar16 = fVar17;
      DAT_1808abf8c = fVar20;
      DAT_1808ac1f4 = fVar25;
      DAT_1808acb08 = fVar4;
      if (iVar19 <= (int)fVar16) break;
LAB_1803430b5:
      lVar13 = *param_2;
      lVar12 = (longlong)(int)fVar24;
      fVar20 = *(float *)(lVar13 + (longlong)(int)fVar16 * 8) - *(float *)(lVar13 + lVar12 * 8);
      fVar24 = *(float *)(lVar13 + 4 + (longlong)(int)fVar16 * 8) -
               *(float *)(lVar13 + 4 + lVar12 * 8);
      fVar25 = fVar24 * fVar24 + fVar20 * fVar20;
      if (0.0 < fVar25) {
        if (fVar25 < 0.0) {
          fVar25 = (float)FUN_18051af10();
        }
        else {
          fVar25 = SQRT(fVar25);
        }
        fVar24 = (fVar5 / fVar25) * fVar24;
        fVar20 = (fVar5 / fVar25) * fVar20;
      }
      *(float *)(puVar7 + lVar12) = fVar24;
      *(uint *)((longlong)puVar7 + lVar12 * 8 + 4) = (uint)fVar20 ^ uVar6;
      fVar17 = (float)((int)fVar16 + 1);
      fVar24 = fVar16;
      fVar20 = DAT_1808abf8c;
      fVar25 = DAT_1808ac1f4;
      fVar4 = DAT_1808acb08;
    }
    fVar26 = fVar26 * fVar25;
    fVar24 = 0.0;
    fVar16 = local_res10[0];
    do {
      fVar17 = fVar24;
      lVar13 = (longlong)(int)fVar17;
      fVar21 = (*(float *)(puVar7 + lVar13) + *(float *)(puVar7 + (int)fVar16)) * fVar25;
      fVar22 = (*(float *)((longlong)puVar7 + lVar13 * 8 + 4) +
               *(float *)((longlong)puVar7 + (longlong)(int)fVar16 * 8 + 4)) * fVar25;
      fVar24 = fVar22 * fVar22 + fVar21 * fVar21;
      if (fVar20 < fVar24) {
        fVar24 = fVar5 / fVar24;
        fVar23 = fVar4;
        if (fVar24 <= fVar4) {
          fVar23 = fVar24;
        }
        fVar22 = fVar23 * fVar22;
        fVar21 = fVar23 * fVar21;
      }
      lVar12 = *param_2;
      local_118[2] = 1.0;
      local_118[0] = 0.0;
      fVar24 = *(float *)(lVar12 + lVar13 * 8);
      local_118[3] = 1.0;
      local_res10[0] = 0.0;
      fVar21 = fVar26 * fVar21;
      fVar22 = fVar26 * fVar22;
      local_118[1] = (fVar24 - *(float *)*local_res18) / *(float *)local_res18[1];
      pfVar10 = local_118;
      if (0.0 <= local_118[1]) {
        pfVar10 = local_118 + 1;
      }
      pfVar8 = local_118 + 2;
      if (local_118[1] <= fVar5) {
        pfVar8 = pfVar10;
      }
      local_res20[0] = (float)(*(int *)local_res18[2] + -1) * *pfVar8;
      iVar2 = *(int *)local_res18[2] + -2;
      iVar9 = (int)local_res20[0];
      if (iVar2 < iVar9) {
        iVar9 = iVar2;
      }
      local_res20[0] = local_res20[0] - (float)iVar9;
      pfVar10 = local_res10;
      if (0.0 <= local_res20[0]) {
        pfVar10 = local_res20;
      }
      pfVar8 = local_118 + 3;
      if (local_res20[0] <= fVar5) {
        pfVar8 = pfVar10;
      }
      uVar6 = FUN_1802b38e0(*(undefined4 *)(*(longlong *)local_res18[3] + (longlong)iVar9 * 4),
                            *(undefined4 *)(*(longlong *)local_res18[3] + 4 + (longlong)iVar9 * 4),
                            *pfVar8);
      fVar23 = *(float *)(lVar12 + 4 + lVar13 * 8);
      pfVar10 = *(float **)(param_1 + 0x40);
      *pfVar10 = fVar24 - fVar21;
      pfVar10[1] = fVar23 - fVar22;
      lVar12 = *(longlong *)(param_1 + 0x40);
      *(undefined4 *)(lVar12 + 8) = uVar1;
      *(float *)(lVar12 + 0xc) = local_118[4];
      *(uint *)(*(longlong *)(param_1 + 0x40) + 0x10) = uVar6;
      lVar12 = *(longlong *)(param_1 + 0x40);
      fVar24 = *(float *)(*param_2 + 4 + lVar13 * 8);
      *(float *)(lVar12 + 0x14) = fVar21 + *(float *)(*param_2 + lVar13 * 8);
      *(float *)(lVar12 + 0x18) = fVar22 + fVar24;
      lVar13 = *(longlong *)(param_1 + 0x40);
      *(undefined4 *)(lVar13 + 0x1c) = uVar1;
      *(float *)(lVar13 + 0x20) = local_118[4];
      *(uint *)(*(longlong *)(param_1 + 0x40) + 0x24) = uVar6 & 0xffffff;
      *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + 0x28;
      sVar3 = SUB42(fVar17,0) * 2;
      sVar11 = sVar3 + (short)local_104;
      sVar14 = SUB42(fVar16,0) * 2;
      **(short **)(param_1 + 0x48) = sVar11;
      *(short *)(*(longlong *)(param_1 + 0x48) + 2) = (short)local_104 + sVar14;
      sVar14 = sVar14 + (short)local_100;
      *(short *)(*(longlong *)(param_1 + 0x48) + 4) = sVar14;
      *(short *)(*(longlong *)(param_1 + 0x48) + 6) = sVar14;
      *(short *)(*(longlong *)(param_1 + 0x48) + 8) = sVar3 + (short)local_100;
      *(short *)(*(longlong *)(param_1 + 0x48) + 10) = sVar11;
      *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 0xc;
      fVar24 = (float)((int)fVar17 + 1);
      fVar16 = fVar17;
    } while ((int)fVar17 + 1 < iVar19);
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + local_fc;
    FUN_1800132b0(&local_f8);
  }
  return;
}



/* ===== 180343440 FUN_180343440 ===== */

void FUN_180343440(longlong param_1,longlong *param_2,longlong *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  longlong *plVar5;
  float *pfVar6;
  short sVar7;
  short sVar8;
  float fVar9;
  int iVar10;
  undefined8 *puVar11;
  short sVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  short sVar17;
  int iVar18;
  ulonglong uVar19;
  longlong lVar20;
  int iVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined8 *local_d0;
  undefined8 *puStack_c8;
  undefined8 *local_c0;
  
  iVar21 = (int)(param_2[1] - *param_2 >> 3);
  if (2 < iVar21) {
    fVar29 = *(float *)(param_1 + 0xd0);
    uVar1 = **(undefined4 **)(param_1 + 0x38);
    uVar2 = (*(undefined4 **)(param_1 + 0x38))[1];
    FUN_1803fc3a0(param_1,iVar21 * 6,iVar21 * 2);
    uVar19 = (ulonglong)iVar21;
    local_c0 = (undefined8 *)0x0;
    local_d0 = (undefined8 *)0x0;
    puStack_c8 = (undefined8 *)0x0;
    if (0x1fffffffffffffff < uVar19) {
                    /* WARNING: Subroutine does not return */
      FUN_1800118d0();
    }
    uVar3 = *(undefined4 *)(param_1 + 0x34);
    puVar11 = (undefined8 *)FUN_18000fb70(uVar19 * 8);
    local_c0 = puVar11 + uVar19;
    puStack_c8 = puVar11;
    do {
      *puStack_c8 = 0;
      uVar4 = DAT_1808adec0;
      fVar9 = DAT_1808ac34c;
      puStack_c8 = puStack_c8 + 1;
      uVar19 = uVar19 - 1;
    } while (uVar19 != 0);
    iVar13 = iVar21 + -1;
    sVar8 = (short)uVar3;
    iVar18 = 0;
    local_d0 = puVar11;
    iVar14 = iVar13;
    if (iVar21 < 4) goto LAB_180343795;
    do {
      lVar20 = *param_2;
      lVar15 = (longlong)iVar18;
      lVar16 = (longlong)iVar14;
      fVar27 = *(float *)(lVar20 + lVar15 * 8) - *(float *)(lVar20 + lVar16 * 8);
      fVar28 = *(float *)(lVar20 + 4 + lVar15 * 8) - *(float *)(lVar20 + 4 + lVar16 * 8);
      fVar22 = fVar28 * fVar28 + fVar27 * fVar27;
      if (0.0 < fVar22) {
        if (fVar22 < 0.0) {
          fVar22 = (float)FUN_18051af10(fVar22);
        }
        else {
          fVar22 = SQRT(fVar22);
        }
        fVar28 = (fVar9 / fVar22) * fVar28;
        fVar27 = (fVar9 / fVar22) * fVar27;
      }
      *(float *)(puVar11 + lVar16) = fVar28;
      *(uint *)((longlong)puVar11 + lVar16 * 8 + 4) = (uint)fVar27 ^ uVar4;
      lVar20 = *param_2;
      fVar27 = *(float *)(lVar20 + 8 + lVar15 * 8) - *(float *)(lVar20 + lVar15 * 8);
      fVar28 = *(float *)(lVar20 + 0xc + lVar15 * 8) - *(float *)(lVar20 + 4 + lVar15 * 8);
      fVar22 = fVar28 * fVar28 + fVar27 * fVar27;
      if (0.0 < fVar22) {
        if (fVar22 < 0.0) {
          fVar22 = (float)FUN_18051af10(fVar22);
        }
        else {
          fVar22 = SQRT(fVar22);
        }
        fVar28 = (fVar9 / fVar22) * fVar28;
        fVar27 = (fVar9 / fVar22) * fVar27;
      }
      *(float *)(puVar11 + lVar15) = fVar28;
      *(uint *)((longlong)puVar11 + lVar15 * 8 + 4) = (uint)fVar27 ^ uVar4;
      lVar20 = *param_2;
      fVar27 = *(float *)(lVar20 + 0x10 + lVar15 * 8) - *(float *)(lVar20 + 8 + lVar15 * 8);
      fVar28 = *(float *)(lVar20 + 0x14 + lVar15 * 8) - *(float *)(lVar20 + 0xc + lVar15 * 8);
      fVar22 = fVar28 * fVar28 + fVar27 * fVar27;
      if (0.0 < fVar22) {
        if (fVar22 < 0.0) {
          fVar22 = (float)FUN_18051af10(fVar22);
        }
        else {
          fVar22 = SQRT(fVar22);
        }
        fVar28 = (fVar9 / fVar22) * fVar28;
        fVar27 = (fVar9 / fVar22) * fVar27;
      }
      *(float *)(puVar11 + lVar15 + 1) = fVar28;
      *(uint *)((longlong)puVar11 + lVar15 * 8 + 0xc) = (uint)fVar27 ^ uVar4;
      lVar20 = *param_2;
      fVar27 = *(float *)(lVar20 + 0x18 + lVar15 * 8) - *(float *)(lVar20 + 0x10 + lVar15 * 8);
      fVar28 = *(float *)(lVar20 + 0x1c + lVar15 * 8) - *(float *)(lVar20 + 0x14 + lVar15 * 8);
      fVar22 = fVar28 * fVar28 + fVar27 * fVar27;
      if (0.0 < fVar22) {
        if (fVar22 < 0.0) {
          fVar22 = (float)FUN_18051af10(fVar22);
        }
        else {
          fVar22 = SQRT(fVar22);
        }
        fVar28 = (fVar9 / fVar22) * fVar28;
        fVar27 = (fVar9 / fVar22) * fVar27;
      }
      iVar14 = iVar18 + 3;
      *(float *)(puVar11 + lVar15 + 2) = fVar28;
      iVar18 = iVar18 + 4;
      *(uint *)((longlong)puVar11 + lVar15 * 8 + 0x14) = (uint)fVar27 ^ uVar4;
      iVar10 = iVar18;
      fVar22 = DAT_1808abf8c;
      fVar27 = DAT_1808ac1f4;
      fVar28 = DAT_1808acb08;
    } while (iVar18 < iVar21 + -3);
    while( true ) {
      iVar18 = iVar10;
      DAT_1808abf8c = fVar22;
      DAT_1808ac1f4 = fVar27;
      DAT_1808acb08 = fVar28;
      if (iVar21 <= iVar18) break;
LAB_180343795:
      lVar20 = *param_2;
      lVar15 = (longlong)iVar14;
      fVar27 = *(float *)(lVar20 + (longlong)iVar18 * 8) - *(float *)(lVar20 + lVar15 * 8);
      fVar28 = *(float *)(lVar20 + 4 + (longlong)iVar18 * 8) - *(float *)(lVar20 + 4 + lVar15 * 8);
      fVar22 = fVar28 * fVar28 + fVar27 * fVar27;
      if (0.0 < fVar22) {
        if (fVar22 < 0.0) {
          fVar22 = (float)FUN_18051af10(fVar22);
        }
        else {
          fVar22 = SQRT(fVar22);
        }
        fVar28 = (fVar9 / fVar22) * fVar28;
        fVar27 = (fVar9 / fVar22) * fVar27;
      }
      *(float *)(puVar11 + lVar15) = fVar28;
      *(uint *)((longlong)puVar11 + lVar15 * 8 + 4) = (uint)fVar27 ^ uVar4;
      iVar10 = iVar18 + 1;
      iVar14 = iVar18;
      fVar22 = DAT_1808abf8c;
      fVar27 = DAT_1808ac1f4;
      fVar28 = DAT_1808acb08;
    }
    fVar29 = fVar29 * fVar27;
    iVar14 = 0;
    do {
      lVar20 = (longlong)iVar14;
      fVar23 = (*(float *)(puVar11 + lVar20) + *(float *)(puVar11 + iVar13)) * fVar27;
      fVar24 = (*(float *)((longlong)puVar11 + lVar20 * 8 + 4) +
               *(float *)((longlong)puVar11 + (longlong)iVar13 * 8 + 4)) * fVar27;
      fVar25 = fVar24 * fVar24 + fVar23 * fVar23;
      if (fVar22 < fVar25) {
        fVar25 = fVar9 / fVar25;
        fVar26 = fVar28;
        if (fVar25 <= fVar28) {
          fVar26 = fVar25;
        }
        fVar24 = fVar26 * fVar24;
        fVar23 = fVar26 * fVar23;
      }
      sVar17 = (short)iVar13 * 2;
      fVar23 = fVar29 * fVar23;
      plVar5 = (longlong *)*param_3;
      fVar24 = fVar29 * fVar24;
      lVar15 = plVar5[1];
      lVar16 = *plVar5;
      uVar19 = *(ulonglong *)param_3[1];
      *(ulonglong *)param_3[1] = uVar19 + 1;
      uVar4 = *(uint *)(*plVar5 + (uVar19 % (ulonglong)(lVar15 - lVar16 >> 2)) * 4);
      fVar25 = *(float *)(*param_2 + 4 + lVar20 * 8);
      pfVar6 = *(float **)(param_1 + 0x40);
      *pfVar6 = *(float *)(*param_2 + lVar20 * 8) - fVar23;
      pfVar6[1] = fVar25 - fVar24;
      lVar15 = *(longlong *)(param_1 + 0x40);
      *(undefined4 *)(lVar15 + 8) = uVar1;
      *(undefined4 *)(lVar15 + 0xc) = uVar2;
      *(uint *)(*(longlong *)(param_1 + 0x40) + 0x10) = uVar4;
      lVar15 = *(longlong *)(param_1 + 0x40);
      fVar25 = *(float *)(*param_2 + 4 + lVar20 * 8);
      *(float *)(lVar15 + 0x14) = fVar23 + *(float *)(*param_2 + lVar20 * 8);
      *(float *)(lVar15 + 0x18) = fVar24 + fVar25;
      lVar20 = *(longlong *)(param_1 + 0x40);
      *(undefined4 *)(lVar20 + 0x1c) = uVar1;
      *(undefined4 *)(lVar20 + 0x20) = uVar2;
      *(uint *)(*(longlong *)(param_1 + 0x40) + 0x24) = uVar4 & 0xffffff;
      *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + 0x28;
      sVar7 = (short)iVar14 * 2;
      sVar12 = sVar7 + sVar8;
      **(short **)(param_1 + 0x48) = sVar12;
      *(short *)(*(longlong *)(param_1 + 0x48) + 2) = sVar8 + sVar17;
      sVar17 = sVar17 + sVar8 + 1;
      *(short *)(*(longlong *)(param_1 + 0x48) + 4) = sVar17;
      *(short *)(*(longlong *)(param_1 + 0x48) + 6) = sVar17;
      iVar18 = iVar14 + 1;
      *(short *)(*(longlong *)(param_1 + 0x48) + 8) = sVar7 + sVar8 + 1;
      *(short *)(*(longlong *)(param_1 + 0x48) + 10) = sVar12;
      *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 0xc;
      iVar13 = iVar14;
      iVar14 = iVar18;
    } while (iVar18 < iVar21);
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + iVar21 * 2;
    FUN_1800132b0(&local_d0);
  }
  return;
}



/* ===== 180343a60 FUN_180343a60 ===== */

void FUN_180343a60(longlong param_1,longlong *param_2,undefined8 *param_3,char param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  float *pfVar6;
  short sVar7;
  float fVar8;
  int iVar9;
  undefined8 *puVar10;
  short sVar11;
  short sVar12;
  int iVar13;
  longlong lVar14;
  int iVar15;
  int iVar16;
  longlong lVar17;
  short sVar18;
  longlong lVar19;
  int iVar20;
  ulonglong uVar21;
  uint uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined8 *local_d8;
  undefined8 *puStack_d0;
  undefined8 *local_c8;
  
  uVar21 = param_2[1] - *param_2 >> 3;
  iVar20 = (int)uVar21;
  if (2 < iVar20) {
    uVar1 = **(undefined4 **)(param_1 + 0x38);
    uVar2 = (*(undefined4 **)(param_1 + 0x38))[1];
    if (param_4 == '\0') {
      FUN_1803fc3a0(param_1,(iVar20 + -2) * 3,uVar21 & 0xffffffff);
      uVar4 = *(undefined4 *)(param_1 + 0x34);
      uVar21 = 0;
      do {
        puVar5 = *(undefined4 **)(param_1 + 0x40);
        uVar22 = (int)uVar21 + 1;
        uVar3 = *(undefined4 *)(*param_2 + 4 + uVar21 * 8);
        *puVar5 = *(undefined4 *)(*param_2 + uVar21 * 8);
        puVar5[1] = uVar3;
        lVar17 = *(longlong *)(param_1 + 0x40);
        *(undefined4 *)(lVar17 + 8) = uVar1;
        *(undefined4 *)(lVar17 + 0xc) = uVar2;
        *(undefined4 *)(*(longlong *)(param_1 + 0x40) + 0x10) = *(undefined4 *)*param_3;
        *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + 0x14;
        uVar21 = (ulonglong)uVar22;
      } while ((int)uVar22 < iVar20);
      iVar16 = 2;
      do {
        sVar18 = (short)uVar4;
        sVar11 = (short)iVar16 + sVar18;
        iVar16 = iVar16 + 1;
        **(short **)(param_1 + 0x48) = sVar18;
        *(short *)(*(longlong *)(param_1 + 0x48) + 2) = sVar11 + -1;
        *(short *)(*(longlong *)(param_1 + 0x48) + 4) = sVar11;
        *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 6;
      } while (iVar16 < iVar20);
      *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + iVar20;
    }
    else {
      fVar30 = *(float *)(param_1 + 0xd0);
      FUN_1803fc3a0(param_1,iVar20 * 9 + -6,iVar20 * 2);
      uVar4 = *(undefined4 *)(param_1 + 0x34);
      iVar16 = 2;
      do {
        sVar11 = (short)iVar16;
        iVar16 = iVar16 + 1;
        sVar18 = (short)uVar4;
        sVar11 = sVar11 * 2 + sVar18;
        **(short **)(param_1 + 0x48) = sVar18;
        *(short *)(*(longlong *)(param_1 + 0x48) + 2) = sVar11 + -2;
        *(short *)(*(longlong *)(param_1 + 0x48) + 4) = sVar11;
        *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 6;
      } while (iVar16 < iVar20);
      uVar21 = (ulonglong)iVar20;
      local_c8 = (undefined8 *)0x0;
      local_d8 = (undefined8 *)0x0;
      puStack_d0 = (undefined8 *)0x0;
      if (0x1fffffffffffffff < uVar21) {
                    /* WARNING: Subroutine does not return */
        FUN_1800118d0();
      }
      puVar10 = (undefined8 *)FUN_18000fb70(uVar21 * 8);
      local_c8 = puVar10 + uVar21;
      puStack_d0 = puVar10;
      do {
        *puStack_d0 = 0;
        uVar22 = DAT_1808adec0;
        fVar8 = DAT_1808ac34c;
        puStack_d0 = puStack_d0 + 1;
        uVar21 = uVar21 - 1;
      } while (uVar21 != 0);
      iVar13 = iVar20 + -1;
      iVar15 = 0;
      local_d8 = puVar10;
      iVar16 = iVar13;
      if (iVar20 < 4) goto LAB_180343ea5;
      do {
        lVar17 = *param_2;
        lVar14 = (longlong)iVar15;
        lVar19 = (longlong)iVar16;
        fVar28 = *(float *)(lVar17 + lVar14 * 8) - *(float *)(lVar17 + lVar19 * 8);
        fVar29 = *(float *)(lVar17 + 4 + lVar14 * 8) - *(float *)(lVar17 + 4 + lVar19 * 8);
        fVar23 = fVar29 * fVar29 + fVar28 * fVar28;
        if (0.0 < fVar23) {
          if (fVar23 < 0.0) {
            fVar23 = (float)FUN_18051af10(fVar23);
          }
          else {
            fVar23 = SQRT(fVar23);
          }
          fVar29 = (fVar8 / fVar23) * fVar29;
          fVar28 = (fVar8 / fVar23) * fVar28;
        }
        *(float *)(puVar10 + lVar19) = fVar29;
        *(uint *)((longlong)puVar10 + lVar19 * 8 + 4) = (uint)fVar28 ^ uVar22;
        lVar17 = *param_2;
        fVar28 = *(float *)(lVar17 + 8 + lVar14 * 8) - *(float *)(lVar17 + lVar14 * 8);
        fVar29 = *(float *)(lVar17 + 0xc + lVar14 * 8) - *(float *)(lVar17 + 4 + lVar14 * 8);
        fVar23 = fVar29 * fVar29 + fVar28 * fVar28;
        if (0.0 < fVar23) {
          if (fVar23 < 0.0) {
            fVar23 = (float)FUN_18051af10(fVar23);
          }
          else {
            fVar23 = SQRT(fVar23);
          }
          fVar29 = (fVar8 / fVar23) * fVar29;
          fVar28 = (fVar8 / fVar23) * fVar28;
        }
        *(float *)(puVar10 + lVar14) = fVar29;
        *(uint *)((longlong)puVar10 + lVar14 * 8 + 4) = (uint)fVar28 ^ uVar22;
        lVar17 = *param_2;
        fVar28 = *(float *)(lVar17 + 0x10 + lVar14 * 8) - *(float *)(lVar17 + 8 + lVar14 * 8);
        fVar29 = *(float *)(lVar17 + 0x14 + lVar14 * 8) - *(float *)(lVar17 + 0xc + lVar14 * 8);
        fVar23 = fVar29 * fVar29 + fVar28 * fVar28;
        if (0.0 < fVar23) {
          if (fVar23 < 0.0) {
            fVar23 = (float)FUN_18051af10(fVar23);
          }
          else {
            fVar23 = SQRT(fVar23);
          }
          fVar29 = (fVar8 / fVar23) * fVar29;
          fVar28 = (fVar8 / fVar23) * fVar28;
        }
        *(float *)(puVar10 + lVar14 + 1) = fVar29;
        *(uint *)((longlong)puVar10 + lVar14 * 8 + 0xc) = (uint)fVar28 ^ uVar22;
        lVar17 = *param_2;
        fVar28 = *(float *)(lVar17 + 0x18 + lVar14 * 8) - *(float *)(lVar17 + 0x10 + lVar14 * 8);
        fVar29 = *(float *)(lVar17 + 0x1c + lVar14 * 8) - *(float *)(lVar17 + 0x14 + lVar14 * 8);
        fVar23 = fVar29 * fVar29 + fVar28 * fVar28;
        if (0.0 < fVar23) {
          if (fVar23 < 0.0) {
            fVar23 = (float)FUN_18051af10(fVar23);
          }
          else {
            fVar23 = SQRT(fVar23);
          }
          fVar29 = (fVar8 / fVar23) * fVar29;
          fVar28 = (fVar8 / fVar23) * fVar28;
        }
        iVar16 = iVar15 + 3;
        *(float *)(puVar10 + lVar14 + 2) = fVar29;
        iVar15 = iVar15 + 4;
        *(uint *)((longlong)puVar10 + lVar14 * 8 + 0x14) = (uint)fVar28 ^ uVar22;
        iVar9 = iVar15;
        fVar23 = DAT_1808abf8c;
        fVar28 = DAT_1808ac1f4;
        fVar29 = DAT_1808acb08;
      } while (iVar15 < iVar20 + -3);
      while( true ) {
        iVar15 = iVar9;
        DAT_1808abf8c = fVar23;
        DAT_1808ac1f4 = fVar28;
        DAT_1808acb08 = fVar29;
        if (iVar20 <= iVar15) break;
LAB_180343ea5:
        lVar17 = *param_2;
        lVar14 = (longlong)iVar16;
        fVar28 = *(float *)(lVar17 + (longlong)iVar15 * 8) - *(float *)(lVar17 + lVar14 * 8);
        fVar29 = *(float *)(lVar17 + 4 + (longlong)iVar15 * 8) - *(float *)(lVar17 + 4 + lVar14 * 8)
        ;
        fVar23 = fVar29 * fVar29 + fVar28 * fVar28;
        if (0.0 < fVar23) {
          if (fVar23 < 0.0) {
            fVar23 = (float)FUN_18051af10(fVar23);
          }
          else {
            fVar23 = SQRT(fVar23);
          }
          fVar29 = (fVar8 / fVar23) * fVar29;
          fVar28 = (fVar8 / fVar23) * fVar28;
        }
        *(float *)(puVar10 + lVar14) = fVar29;
        *(uint *)((longlong)puVar10 + lVar14 * 8 + 4) = (uint)fVar28 ^ uVar22;
        iVar9 = iVar15 + 1;
        iVar16 = iVar15;
        fVar23 = DAT_1808abf8c;
        fVar28 = DAT_1808ac1f4;
        fVar29 = DAT_1808acb08;
      }
      fVar30 = fVar30 * fVar28;
      iVar16 = 0;
      do {
        lVar17 = (longlong)iVar16;
        fVar24 = (*(float *)(puVar10 + lVar17) + *(float *)(puVar10 + iVar13)) * fVar28;
        fVar25 = (*(float *)((longlong)puVar10 + lVar17 * 8 + 4) +
                 *(float *)((longlong)puVar10 + (longlong)iVar13 * 8 + 4)) * fVar28;
        fVar26 = fVar25 * fVar25 + fVar24 * fVar24;
        if (fVar23 < fVar26) {
          fVar26 = fVar8 / fVar26;
          fVar27 = fVar29;
          if (fVar26 <= fVar29) {
            fVar27 = fVar26;
          }
          fVar25 = fVar27 * fVar25;
          fVar24 = fVar27 * fVar24;
        }
        sVar11 = (short)iVar13 * 2;
        fVar24 = fVar30 * fVar24;
        uVar22 = *(uint *)*param_3;
        fVar26 = *(float *)(*param_2 + 4 + lVar17 * 8);
        pfVar6 = *(float **)(param_1 + 0x40);
        fVar25 = fVar30 * fVar25;
        *pfVar6 = *(float *)(*param_2 + lVar17 * 8) - fVar24;
        pfVar6[1] = fVar26 - fVar25;
        lVar14 = *(longlong *)(param_1 + 0x40);
        *(undefined4 *)(lVar14 + 8) = uVar1;
        *(undefined4 *)(lVar14 + 0xc) = uVar2;
        *(uint *)(*(longlong *)(param_1 + 0x40) + 0x10) = uVar22;
        lVar14 = *(longlong *)(param_1 + 0x40);
        fVar26 = *(float *)(*param_2 + 4 + lVar17 * 8);
        sVar7 = (short)iVar16 * 2;
        *(float *)(lVar14 + 0x14) = fVar24 + *(float *)(*param_2 + lVar17 * 8);
        *(float *)(lVar14 + 0x18) = fVar25 + fVar26;
        lVar17 = *(longlong *)(param_1 + 0x40);
        *(undefined4 *)(lVar17 + 0x1c) = uVar1;
        *(undefined4 *)(lVar17 + 0x20) = uVar2;
        *(uint *)(*(longlong *)(param_1 + 0x40) + 0x24) = uVar22 & 0xffffff;
        sVar12 = sVar7 + sVar18;
        *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + 0x28;
        **(short **)(param_1 + 0x48) = sVar12;
        *(short *)(*(longlong *)(param_1 + 0x48) + 2) = sVar11 + sVar18;
        sVar11 = sVar11 + sVar18 + 1;
        *(short *)(*(longlong *)(param_1 + 0x48) + 4) = sVar11;
        *(short *)(*(longlong *)(param_1 + 0x48) + 6) = sVar11;
        iVar15 = iVar16 + 1;
        *(short *)(*(longlong *)(param_1 + 0x48) + 8) = sVar7 + sVar18 + 1;
        *(short *)(*(longlong *)(param_1 + 0x48) + 10) = sVar12;
        *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 0xc;
        iVar13 = iVar16;
        iVar16 = iVar15;
      } while (iVar15 < iVar20);
      *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + iVar20 * 2;
      FUN_1800132b0(&local_d8);
    }
  }
  return;
}



/* ===== 180344150 FUN_180344150 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180344150(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
                  int param_5)

{
  int iVar1;
  size_t sVar2;
  ulonglong uVar3;
  size_t _Size;
  bool bVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 *_Buf1;
  undefined8 *puVar10;
  undefined1 auStack_598 [32];
  undefined1 *local_578;
  undefined8 *local_570;
  undefined8 local_568;
  undefined8 *local_560;
  undefined1 local_558 [56];
  undefined8 *local_520;
  undefined1 local_518 [480];
  undefined1 local_338 [32];
  undefined1 local_318 [32];
  undefined1 local_2f8 [64];
  undefined1 local_2b8 [480];
  undefined1 local_d8 [32];
  undefined1 local_b8 [32];
  undefined1 local_98 [64];
  ulonglong local_58;
  
  local_58 = DAT_180919500 ^ (ulonglong)auStack_598;
  local_570 = (undefined8 *)param_4;
  local_568 = param_1;
  lVar7 = FUN_1800e35e0();
  if (lVar7 == 0) {
    return;
  }
  if (*(char *)(lVar7 + 0x50) == '\0') {
    return;
  }
  lVar7 = *(longlong *)(lVar7 + 0x60);
  if (lVar7 == 0) {
    return;
  }
  iVar1 = *(int *)(DAT_180ca0a50 + 4);
  puVar8 = param_2 + 7;
  sVar2 = param_3[2];
  uVar3 = param_3[3];
  puVar10 = param_3;
  if (0xf < uVar3) {
    puVar10 = (undefined8 *)*param_3;
  }
  _Size = param_2[9];
  if ((ulonglong)param_2[10] < 0x10) {
    _Buf1 = puVar8;
  }
  else {
    _Buf1 = (undefined8 *)*puVar8;
  }
  if ((_Size != sVar2) || ((_Size != 0 && (iVar5 = memcmp(_Buf1,puVar10,_Size), iVar5 != 0)))) {
    if (puVar8 != param_3) {
      if (uVar3 < 0x10) {
        puVar10 = param_3;
      }
      else {
        puVar10 = (undefined8 *)*param_3;
      }
      FUN_180029840(puVar8,puVar10,sVar2);
    }
    *(int *)(param_2 + 0xb) = iVar1;
  }
  local_578 = (undefined1 *)FUN_1800dfde0();
  if (param_5 == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = FUN_18028fb00();
  }
  if ((ulonglong)param_3[3] < 0x10) {
    puVar8 = param_3;
  }
  else {
    puVar8 = (undefined8 *)*param_3;
  }
  sVar2 = param_2[2];
  uVar3 = param_2[3];
  if (uVar3 < 0x10) {
    puVar10 = param_2;
  }
  else {
    puVar10 = (undefined8 *)*param_2;
  }
  if ((sVar2 != param_3[2]) || ((sVar2 != 0 && (iVar6 = memcmp(puVar10,puVar8,sVar2), iVar6 != 0))))
  {
    *(undefined4 *)((longlong)param_2 + 0x34) = 0;
  }
  if ((*(int *)(param_2 + 6) == iVar5) || (1 < *(int *)((longlong)param_2 + 0x34))) {
    bVar4 = false;
    *(int *)(param_2 + 6) = iVar5;
  }
  else {
    bVar4 = true;
  }
  if ((param_2[4] == lVar7) && ((undefined1 *)param_2[5] == local_578)) {
    if (!bVar4) {
      puVar8 = param_3;
      if (0xf < (ulonglong)param_3[3]) {
        puVar8 = (undefined8 *)*param_3;
      }
      if (uVar3 < 0x10) {
        puVar10 = param_2;
      }
      else {
        puVar10 = (undefined8 *)*param_2;
      }
      if (sVar2 == param_3[2]) {
        if (sVar2 == 0) {
          return;
        }
        iVar6 = memcmp(puVar10,puVar8,sVar2);
        if (iVar6 == 0) {
          return;
        }
      }
      if (iVar1 - *(int *)(param_2 + 0xb) < 6) {
        return;
      }
      goto LAB_1803442fb;
    }
  }
  else if (!bVar4) goto LAB_1803442fb;
  *(int *)((longlong)param_2 + 0x34) = *(int *)((longlong)param_2 + 0x34) + 1;
LAB_1803442fb:
  if (param_2 != param_3) {
    if ((ulonglong)param_3[3] < 0x10) {
      puVar8 = param_3;
    }
    else {
      puVar8 = (undefined8 *)*param_3;
    }
    FUN_180029840(param_2,puVar8,param_3[2]);
  }
  param_2[4] = lVar7;
  param_2[5] = local_578;
  *(int *)(param_2 + 6) = iVar5;
  local_560 = (undefined8 *)local_558;
  if (bVar4) {
    uVar9 = FUN_180344470(local_2b8,local_570);
    FUN_180344470(local_518,uVar9);
    local_520 = (undefined8 *)0x0;
    puVar8 = (undefined8 *)FUN_1804ecaa0(0x260);
    *puVar8 = std::
              _Func_impl_no_alloc<`void___cdecl_menu::_anon_9464B40D::sync_item<`void___cdecl_menu::_anon_9464B40D::show_weapon_scene(econ::item_const&___ptr64,config::skin_settings_const*___ptr64,placement::scene_setup_const*___ptr64,bool,menu::_anon_9464B40D::inv_scene_size_const&___ptr64)'::`2'::<lambda_1>_>(char_const*___ptr64,menu::_anon_9464B40D::scene_item&___ptr64,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const&___ptr64,`void___cdecl_menu::_anon_9464B40D::show_weapon_scene(econ::item_const&___ptr64,config::skin_settings_const*___ptr64,placement::scene_setup_const*___ptr64,bool,menu::_anon_9464B40D::inv_scene_size_const&___ptr64)'::`2'::<lambda_1>&&___ptr64,int)'::`2'::<lambda_1>,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>
              ::vftable;
    local_570 = puVar8;
    FUN_180344470(puVar8 + 1,local_518);
    local_520 = puVar8;
    FUN_1800e3e70(local_568,local_558);
    FUN_1800288b0(local_2f8);
    FUN_18000f890(local_318);
    FUN_18000f890(local_338);
    FUN_1800288b0(local_98);
    FUN_18000f890(local_b8);
    FUN_18000f890(local_d8);
  }
  else {
    local_520 = (undefined8 *)0x0;
    local_578 = (undefined1 *)local_560;
    puVar8 = (undefined8 *)FUN_1804ecaa0(0x260);
    *puVar8 = std::
              _Func_impl_no_alloc<`void___cdecl_menu::_anon_9464B40D::show_weapon_scene(econ::item_const&___ptr64,config::skin_settings_const*___ptr64,placement::scene_setup_const*___ptr64,bool,menu::_anon_9464B40D::inv_scene_size_const&___ptr64)'::`2'::<lambda_1>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
              ::vftable;
    local_560 = puVar8;
    FUN_180344470(puVar8 + 1,local_570);
    local_520 = puVar8;
    FUN_1800e3e70(local_568,local_558);
  }
  return;
}



/* ===== 180344470 FUN_180344470 ===== */

undefined8 * FUN_180344470(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  lVar8 = 3;
  puVar5 = param_2 + 2;
  puVar6 = param_1 + 2;
  do {
    puVar9 = puVar6;
    puVar7 = puVar5;
    uVar4 = puVar7[1];
    *puVar9 = *puVar7;
    puVar9[1] = uVar4;
    uVar4 = puVar7[3];
    puVar9[2] = puVar7[2];
    puVar9[3] = uVar4;
    uVar4 = puVar7[5];
    puVar9[4] = puVar7[4];
    puVar9[5] = uVar4;
    uVar4 = puVar7[7];
    puVar9[6] = puVar7[6];
    puVar9[7] = uVar4;
    uVar4 = puVar7[9];
    puVar9[8] = puVar7[8];
    puVar9[9] = uVar4;
    uVar4 = puVar7[0xb];
    puVar9[10] = puVar7[10];
    puVar9[0xb] = uVar4;
    uVar4 = puVar7[0xd];
    puVar9[0xc] = puVar7[0xc];
    puVar9[0xd] = uVar4;
    uVar4 = puVar7[0xf];
    puVar9[0xe] = puVar7[0xe];
    puVar9[0xf] = uVar4;
    lVar8 = lVar8 + -1;
    puVar5 = puVar7 + 0x10;
    puVar6 = puVar9 + 0x10;
  } while (lVar8 != 0);
  uVar4 = puVar7[0x11];
  puVar9[0x10] = puVar7[0x10];
  puVar9[0x11] = uVar4;
  uVar4 = puVar7[0x13];
  puVar9[0x12] = puVar7[0x12];
  puVar9[0x13] = uVar4;
  *(undefined4 *)(puVar9 + 0x14) = *(undefined4 *)(puVar7 + 0x14);
  *(undefined1 *)((longlong)param_1 + 0x1b4) = *(undefined1 *)((longlong)param_2 + 0x1b4);
  *(undefined1 *)((longlong)param_1 + 0x1b5) = *(undefined1 *)((longlong)param_2 + 0x1b5);
  uVar4 = param_2[0x38];
  param_1[0x37] = param_2[0x37];
  param_1[0x38] = uVar4;
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x1cc);
  uVar2 = *(undefined4 *)(param_2 + 0x3a);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x1d4);
  *(undefined4 *)(param_1 + 0x39) = *(undefined4 *)(param_2 + 0x39);
  *(undefined4 *)((longlong)param_1 + 0x1cc) = uVar1;
  *(undefined4 *)(param_1 + 0x3a) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x1d4) = uVar3;
  param_1[0x3b] = param_2[0x3b];
  FUN_180024b50(param_1 + 0x3c,param_2 + 0x3c);
  FUN_180024b50(param_1 + 0x40,param_2 + 0x40);
  FUN_18006d7e0(param_1 + 0x44,param_2 + 0x44);
  *(undefined4 *)(param_1 + 0x47) = *(undefined4 *)(param_2 + 0x47);
  uVar4 = param_2[0x49];
  param_1[0x48] = param_2[0x48];
  param_1[0x49] = uVar4;
  param_1[0x4a] = param_2[0x4a];
  return param_1;
}



/* ===== 1803445e0 FUN_1803445e0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1803445e0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4)

{
  int iVar1;
  size_t sVar2;
  ulonglong uVar3;
  size_t _Size;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *_Buf1;
  undefined8 *puVar8;
  undefined1 auStack_1d8 [32];
  undefined8 *local_1b8;
  undefined1 *local_1b0;
  undefined8 local_1a8;
  undefined8 *local_1a0;
  undefined1 local_198 [56];
  undefined8 *local_160;
  undefined1 local_158 [32];
  undefined1 local_138 [32];
  undefined1 local_118 [32];
  undefined1 local_f8 [24];
  undefined4 local_e0;
  undefined1 local_d8 [32];
  undefined1 local_b8 [32];
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  ulonglong local_58;
  
  local_58 = DAT_180919500 ^ (ulonglong)auStack_1d8;
  local_1b8 = (undefined8 *)param_4;
  local_1a8 = param_1;
  lVar6 = FUN_1800e35e0();
  if (lVar6 == 0) {
    return;
  }
  if (*(char *)(lVar6 + 0x50) == '\0') {
    return;
  }
  lVar6 = *(longlong *)(lVar6 + 0x60);
  if (lVar6 == 0) {
    return;
  }
  iVar1 = *(int *)(DAT_180ca0a50 + 4);
  puVar7 = param_2 + 7;
  sVar2 = param_3[2];
  uVar3 = param_3[3];
  puVar8 = param_3;
  if (0xf < uVar3) {
    puVar8 = (undefined8 *)*param_3;
  }
  _Size = param_2[9];
  if ((ulonglong)param_2[10] < 0x10) {
    _Buf1 = puVar7;
  }
  else {
    _Buf1 = (undefined8 *)*puVar7;
  }
  if ((_Size != sVar2) || ((_Size != 0 && (iVar5 = memcmp(_Buf1,puVar8,_Size), iVar5 != 0)))) {
    if (puVar7 != param_3) {
      if (uVar3 < 0x10) {
        puVar8 = param_3;
      }
      else {
        puVar8 = (undefined8 *)*param_3;
      }
      FUN_180029840(puVar7,puVar8,sVar2);
    }
    *(int *)(param_2 + 0xb) = iVar1;
  }
  local_1b0 = (undefined1 *)FUN_1800dfde0();
  if ((ulonglong)param_3[3] < 0x10) {
    puVar7 = param_3;
  }
  else {
    puVar7 = (undefined8 *)*param_3;
  }
  sVar2 = param_2[2];
  uVar3 = param_2[3];
  if (uVar3 < 0x10) {
    puVar8 = param_2;
  }
  else {
    puVar8 = (undefined8 *)*param_2;
  }
  if ((sVar2 != param_3[2]) || ((sVar2 != 0 && (iVar5 = memcmp(puVar8,puVar7,sVar2), iVar5 != 0))))
  {
    *(undefined4 *)((longlong)param_2 + 0x34) = 0;
  }
  if ((*(int *)(param_2 + 6) == 0) || (1 < *(int *)((longlong)param_2 + 0x34))) {
    bVar4 = false;
    *(undefined4 *)(param_2 + 6) = 0;
  }
  else {
    bVar4 = true;
  }
  if ((param_2[4] == lVar6) && ((undefined1 *)param_2[5] == local_1b0)) {
    if (!bVar4) {
      puVar7 = param_3;
      if (0xf < (ulonglong)param_3[3]) {
        puVar7 = (undefined8 *)*param_3;
      }
      if (uVar3 < 0x10) {
        puVar8 = param_2;
      }
      else {
        puVar8 = (undefined8 *)*param_2;
      }
      if (sVar2 == param_3[2]) {
        if (sVar2 == 0) {
          return;
        }
        iVar5 = memcmp(puVar8,puVar7,sVar2);
        if (iVar5 == 0) {
          return;
        }
      }
      if (iVar1 - *(int *)(param_2 + 0xb) < 6) {
        return;
      }
      goto LAB_18034477d;
    }
  }
  else if (!bVar4) goto LAB_18034477d;
  *(int *)((longlong)param_2 + 0x34) = *(int *)((longlong)param_2 + 0x34) + 1;
LAB_18034477d:
  if (param_2 != param_3) {
    if ((ulonglong)param_3[3] < 0x10) {
      puVar7 = param_3;
    }
    else {
      puVar7 = (undefined8 *)*param_3;
    }
    FUN_180029840(param_2,puVar7,param_3[2]);
  }
  puVar7 = local_1b8;
  param_2[4] = lVar6;
  param_2[5] = local_1b0;
  *(undefined4 *)(param_2 + 6) = 0;
  local_1a0 = (undefined8 *)local_198;
  if (bVar4) {
    FUN_180024b50(local_158,local_1b8);
    local_1b8 = (undefined8 *)local_138;
    FUN_180024b50(local_138,(longlong)puVar7 + 0x20);
    FUN_180024b50(local_118,(longlong)puVar7 + 0x40);
    FUN_18006d7e0(local_f8,(longlong)puVar7 + 0x60);
    local_e0 = *(undefined4 *)((longlong)puVar7 + 0x78);
    FUN_180344920(local_d8,local_158);
    local_160 = (undefined8 *)0x0;
    puVar7 = (undefined8 *)FUN_1804ecaa0(0x88);
    *puVar7 = std::
              _Func_impl_no_alloc<`void___cdecl_menu::_anon_9464B40D::sync_item<`void___cdecl_menu::_anon_9464B40D::show_flat_scene(menu::_anon_9464B40D::inv_scene_kind,int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const&___ptr64,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const&___ptr64,bool,menu::_anon_9464B40D::inv_scene_size_const&___ptr64)'::`2'::<lambda_1>_>(char_const*___ptr64,menu::_anon_9464B40D::scene_item&___ptr64,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const&___ptr64,`void___cdecl_menu::_anon_9464B40D::show_flat_scene(menu::_anon_9464B40D::inv_scene_kind,int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const&___ptr64,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const&___ptr64,bool,menu::_anon_9464B40D::inv_scene_size_const&___ptr64)'::`2'::<lambda_1>&&___ptr64,int)'::`2'::<lambda_1>,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>
              ::vftable;
    local_1b8 = puVar7;
    FUN_180344920(puVar7 + 1,local_d8);
    local_160 = puVar7;
    FUN_1800e3e70(local_1a8,local_198);
    FUN_1800288b0(local_78);
    FUN_18000f890(local_98);
    FUN_18000f890(local_b8);
    FUN_18000f890(local_d8);
    FUN_1800288b0(local_f8);
    FUN_18000f890(local_118);
    FUN_18000f890(local_138);
    FUN_18000f890(local_158);
  }
  else {
    local_160 = (undefined8 *)0x0;
    local_1b0 = (undefined1 *)local_1a0;
    puVar7 = (undefined8 *)FUN_1804ecaa0(0x88);
    *puVar7 = std::
              _Func_impl_no_alloc<`void___cdecl_menu::_anon_9464B40D::show_flat_scene(menu::_anon_9464B40D::inv_scene_kind,int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const&___ptr64,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const&___ptr64,bool,menu::_anon_9464B40D::inv_scene_size_const&___ptr64)'::`2'::<lambda_1>,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>
              ::vftable;
    local_1a0 = puVar7;
    FUN_180344920(puVar7 + 1,local_1b8);
    local_160 = puVar7;
    FUN_1800e3e70(local_1a8,local_198);
  }
  return;
}



/* ===== 180344920 FUN_180344920 ===== */

longlong FUN_180344920(longlong param_1,longlong param_2)

{
  FUN_180024b50();
  FUN_180024b50(param_1 + 0x20,param_2 + 0x20);
  FUN_180024b50(param_1 + 0x40,param_2 + 0x40);
  FUN_18006d7e0(param_1 + 0x60,param_2 + 0x60);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
  return param_1;
}



/* ===== 180344990 FUN_180344990 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180344990(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  int iVar1;
  size_t sVar2;
  ulonglong uVar3;
  size_t _Size;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 *_Buf1;
  undefined8 *puVar10;
  undefined1 auStack_838 [32];
  undefined8 local_818;
  undefined8 local_810;
  undefined8 *local_808;
  undefined8 *local_800;
  undefined1 local_7f8 [56];
  undefined8 *local_7c0;
  undefined1 local_7b8 [40];
  undefined1 local_790 [904];
  undefined1 local_408 [40];
  undefined1 local_3e0 [904];
  ulonglong local_58;
  
  local_58 = DAT_180919500 ^ (ulonglong)auStack_838;
  local_818 = param_4;
  local_810 = param_1;
  lVar6 = FUN_1800e35e0();
  if (lVar6 == 0) {
    return;
  }
  if (*(char *)(lVar6 + 0x50) == '\0') {
    return;
  }
  lVar6 = *(longlong *)(lVar6 + 0x60);
  if (lVar6 == 0) {
    return;
  }
  iVar1 = *(int *)(DAT_180ca0a50 + 4);
  puVar8 = param_2 + 7;
  sVar2 = param_3[2];
  uVar3 = param_3[3];
  puVar10 = param_3;
  if (0xf < uVar3) {
    puVar10 = (undefined8 *)*param_3;
  }
  _Size = param_2[9];
  if ((ulonglong)param_2[10] < 0x10) {
    _Buf1 = puVar8;
  }
  else {
    _Buf1 = (undefined8 *)*puVar8;
  }
  if ((_Size != sVar2) || ((_Size != 0 && (iVar5 = memcmp(_Buf1,puVar10,_Size), iVar5 != 0)))) {
    if (puVar8 != param_3) {
      if (uVar3 < 0x10) {
        puVar10 = param_3;
      }
      else {
        puVar10 = (undefined8 *)*param_3;
      }
      FUN_180029840(puVar8,puVar10,sVar2);
    }
    *(int *)(param_2 + 0xb) = iVar1;
  }
  lVar7 = FUN_1800dfde0();
  if ((ulonglong)param_3[3] < 0x10) {
    puVar8 = param_3;
  }
  else {
    puVar8 = (undefined8 *)*param_3;
  }
  sVar2 = param_2[2];
  uVar3 = param_2[3];
  if (uVar3 < 0x10) {
    puVar10 = param_2;
  }
  else {
    puVar10 = (undefined8 *)*param_2;
  }
  if ((sVar2 != param_3[2]) || ((sVar2 != 0 && (iVar5 = memcmp(puVar10,puVar8,sVar2), iVar5 != 0))))
  {
    *(undefined4 *)((longlong)param_2 + 0x34) = 0;
  }
  if ((*(int *)(param_2 + 6) == 0) || (1 < *(int *)((longlong)param_2 + 0x34))) {
    bVar4 = false;
    *(undefined4 *)(param_2 + 6) = 0;
  }
  else {
    bVar4 = true;
  }
  if ((param_2[4] == lVar6) && (param_2[5] == lVar7)) {
    if (!bVar4) {
      puVar8 = param_3;
      if (0xf < (ulonglong)param_3[3]) {
        puVar8 = (undefined8 *)*param_3;
      }
      if (uVar3 < 0x10) {
        puVar10 = param_2;
      }
      else {
        puVar10 = (undefined8 *)*param_2;
      }
      if (sVar2 == param_3[2]) {
        if (sVar2 == 0) {
          return;
        }
        iVar5 = memcmp(puVar10,puVar8,sVar2);
        if (iVar5 == 0) {
          return;
        }
      }
      if (iVar1 - *(int *)(param_2 + 0xb) < 6) {
        return;
      }
      goto LAB_180344b1f;
    }
  }
  else if (!bVar4) goto LAB_180344b1f;
  *(int *)((longlong)param_2 + 0x34) = *(int *)((longlong)param_2 + 0x34) + 1;
LAB_180344b1f:
  if (param_2 != param_3) {
    if ((ulonglong)param_3[3] < 0x10) {
      puVar8 = param_3;
    }
    else {
      puVar8 = (undefined8 *)*param_3;
    }
    FUN_180029840(param_2,puVar8,param_3[2]);
  }
  param_2[4] = lVar6;
  param_2[5] = lVar7;
  *(undefined4 *)(param_2 + 6) = 0;
  local_808 = (undefined8 *)local_7f8;
  if (bVar4) {
    local_800 = local_808;
    uVar9 = FUN_180344c60(local_408,local_818);
    FUN_180344c60(local_7b8,uVar9);
    local_7c0 = (undefined8 *)0x0;
    puVar8 = (undefined8 *)FUN_1804ecaa0(0x3b0);
    *puVar8 = std::
              _Func_impl_no_alloc<`void___cdecl_menu::_anon_9464B40D::sync_item<`void___cdecl_menu::_anon_9464B40D::show_agent_scene(int,int,config::skin_settings_const*___ptr64,int)'::`2'::<lambda_1>_>(char_const*___ptr64,menu::_anon_9464B40D::scene_item&___ptr64,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const&___ptr64,`void___cdecl_menu::_anon_9464B40D::show_agent_scene(int,int,config::skin_settings_const*___ptr64,int)'::`2'::<lambda_1>&&___ptr64,int)'::`2'::<lambda_1>,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>
              ::vftable;
    local_808 = puVar8;
    FUN_180344c60(puVar8 + 1,local_7b8);
    local_7c0 = puVar8;
    FUN_1800e3e70(local_810,local_7f8);
    FUN_18000f890(local_790);
    FUN_18000f890(local_3e0);
  }
  else {
    local_7c0 = (undefined8 *)0x0;
    puVar8 = (undefined8 *)FUN_1804ecaa0(0x3b0);
    *puVar8 = std::
              _Func_impl_no_alloc<`void___cdecl_menu::_anon_9464B40D::show_agent_scene(int,int,config::skin_settings_const*___ptr64,int)'::`2'::<lambda_1>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
              ::vftable;
    local_800 = puVar8;
    FUN_180344c60(puVar8 + 1,local_818);
    local_7c0 = puVar8;
    FUN_1800e3e70(local_810,local_7f8);
  }
  return;
}



/* ===== 180344c60 FUN_180344c60 ===== */

undefined8 * FUN_180344c60(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)((longlong)param_2 + 0x14);
  param_1[3] = param_2[3];
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  *(undefined1 *)((longlong)param_1 + 0x21) = *(undefined1 *)((longlong)param_2 + 0x21);
  FUN_180024b50(param_1 + 5,param_2 + 5);
  lVar7 = 3;
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
  lVar6 = 3;
  puVar2 = (undefined8 *)((longlong)param_2 + 0x4c);
  puVar3 = (undefined8 *)((longlong)param_1 + 0x4c);
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
  *(undefined4 *)(puVar5 + 0x14) = *(undefined4 *)(puVar4 + 0x14);
  *(undefined4 *)(param_1 + 0x3e) = *(undefined4 *)(param_2 + 0x3e);
  puVar2 = (undefined8 *)((longlong)param_2 + 500);
  puVar3 = (undefined8 *)((longlong)param_1 + 500);
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
    lVar7 = lVar7 + -1;
    puVar2 = puVar4 + 0x10;
    puVar3 = puVar5 + 0x10;
  } while (lVar7 != 0);
  uVar1 = puVar4[0x11];
  puVar5[0x10] = puVar4[0x10];
  puVar5[0x11] = uVar1;
  uVar1 = puVar4[0x13];
  puVar5[0x12] = puVar4[0x12];
  puVar5[0x13] = uVar1;
  *(undefined4 *)(puVar5 + 0x14) = *(undefined4 *)(puVar4 + 0x14);
  param_1[0x73] = param_2[0x73];
  *(undefined1 *)(param_1 + 0x74) = *(undefined1 *)(param_2 + 0x74);
  return param_1;
}



/* ===== 180344de0 FUN_180344de0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180344de0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  int iVar1;
  size_t sVar2;
  ulonglong uVar3;
  size_t _Size;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 *_Buf1;
  undefined8 *puVar10;
  undefined1 auStack_518 [32];
  undefined8 local_4f8;
  undefined8 local_4f0;
  undefined8 *local_4e8;
  undefined8 *local_4e0;
  undefined1 local_4d8 [56];
  undefined8 *local_4a0;
  undefined1 local_498 [40];
  undefined1 local_470 [504];
  undefined1 local_278 [40];
  undefined1 local_250 [504];
  ulonglong local_58;
  
  local_58 = DAT_180919500 ^ (ulonglong)auStack_518;
  local_4f8 = param_4;
  local_4f0 = param_1;
  lVar6 = FUN_1800e35e0();
  if (lVar6 == 0) {
    return;
  }
  if (*(char *)(lVar6 + 0x50) == '\0') {
    return;
  }
  lVar6 = *(longlong *)(lVar6 + 0x60);
  if (lVar6 == 0) {
    return;
  }
  iVar1 = *(int *)(DAT_180ca0a50 + 4);
  puVar8 = param_2 + 7;
  sVar2 = param_3[2];
  uVar3 = param_3[3];
  puVar10 = param_3;
  if (0xf < uVar3) {
    puVar10 = (undefined8 *)*param_3;
  }
  _Size = param_2[9];
  if ((ulonglong)param_2[10] < 0x10) {
    _Buf1 = puVar8;
  }
  else {
    _Buf1 = (undefined8 *)*puVar8;
  }
  if ((_Size != sVar2) || ((_Size != 0 && (iVar5 = memcmp(_Buf1,puVar10,_Size), iVar5 != 0)))) {
    if (puVar8 != param_3) {
      if (uVar3 < 0x10) {
        puVar10 = param_3;
      }
      else {
        puVar10 = (undefined8 *)*param_3;
      }
      FUN_180029840(puVar8,puVar10,sVar2);
    }
    *(int *)(param_2 + 0xb) = iVar1;
  }
  lVar7 = FUN_1800dfde0();
  if ((ulonglong)param_3[3] < 0x10) {
    puVar8 = param_3;
  }
  else {
    puVar8 = (undefined8 *)*param_3;
  }
  sVar2 = param_2[2];
  uVar3 = param_2[3];
  if (uVar3 < 0x10) {
    puVar10 = param_2;
  }
  else {
    puVar10 = (undefined8 *)*param_2;
  }
  if ((sVar2 != param_3[2]) || ((sVar2 != 0 && (iVar5 = memcmp(puVar10,puVar8,sVar2), iVar5 != 0))))
  {
    *(undefined4 *)((longlong)param_2 + 0x34) = 0;
  }
  if ((*(int *)(param_2 + 6) == 0) || (1 < *(int *)((longlong)param_2 + 0x34))) {
    bVar4 = false;
    *(undefined4 *)(param_2 + 6) = 0;
  }
  else {
    bVar4 = true;
  }
  if ((param_2[4] == lVar6) && (param_2[5] == lVar7)) {
    if (!bVar4) {
      puVar8 = param_3;
      if (0xf < (ulonglong)param_3[3]) {
        puVar8 = (undefined8 *)*param_3;
      }
      if (uVar3 < 0x10) {
        puVar10 = param_2;
      }
      else {
        puVar10 = (undefined8 *)*param_2;
      }
      if (sVar2 == param_3[2]) {
        if (sVar2 == 0) {
          return;
        }
        iVar5 = memcmp(puVar10,puVar8,sVar2);
        if (iVar5 == 0) {
          return;
        }
      }
      if (iVar1 - *(int *)(param_2 + 0xb) < 6) {
        return;
      }
      goto LAB_180344f6f;
    }
  }
  else if (!bVar4) goto LAB_180344f6f;
  *(int *)((longlong)param_2 + 0x34) = *(int *)((longlong)param_2 + 0x34) + 1;
LAB_180344f6f:
  if (param_2 != param_3) {
    if ((ulonglong)param_3[3] < 0x10) {
      puVar8 = param_3;
    }
    else {
      puVar8 = (undefined8 *)*param_3;
    }
    FUN_180029840(param_2,puVar8,param_3[2]);
  }
  param_2[4] = lVar6;
  param_2[5] = lVar7;
  *(undefined4 *)(param_2 + 6) = 0;
  local_4e8 = (undefined8 *)local_4d8;
  if (bVar4) {
    local_4e0 = local_4e8;
    uVar9 = FUN_1803450b0(local_278,local_4f8);
    FUN_1803450b0(local_498,uVar9);
    local_4a0 = (undefined8 *)0x0;
    puVar8 = (undefined8 *)FUN_1804ecaa0(0x228);
    *puVar8 = std::
              _Func_impl_no_alloc<`void___cdecl_menu::_anon_9464B40D::sync_item<`void___cdecl_menu::_anon_9464B40D::show_agent_view_scene(int,int,bool,menu::_anon_9464B40D::inv_scene_size_const&___ptr64)'::`2'::<lambda_1>_>(char_const*___ptr64,menu::_anon_9464B40D::scene_item&___ptr64,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const&___ptr64,`void___cdecl_menu::_anon_9464B40D::show_agent_view_scene(int,int,bool,menu::_anon_9464B40D::inv_scene_size_const&___ptr64)'::`2'::<lambda_1>&&___ptr64,int)'::`2'::<lambda_1>,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>
              ::vftable;
    local_4e8 = puVar8;
    FUN_1803450b0(puVar8 + 1,local_498);
    local_4a0 = puVar8;
    FUN_1800e3e70(local_4f0,local_4d8);
    FUN_18000f890(local_470);
    FUN_18000f890(local_250);
  }
  else {
    local_4a0 = (undefined8 *)0x0;
    puVar8 = (undefined8 *)FUN_1804ecaa0(0x228);
    *puVar8 = std::
              _Func_impl_no_alloc<`void___cdecl_menu::_anon_9464B40D::show_agent_view_scene(int,int,bool,menu::_anon_9464B40D::inv_scene_size_const&___ptr64)'::`2'::<lambda_1>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
              ::vftable;
    local_4e0 = puVar8;
    FUN_1803450b0(puVar8 + 1,local_4f8);
    local_4a0 = puVar8;
    FUN_1800e3e70(local_4f0,local_4d8);
  }
  return;
}



/* ===== 1803450b0 FUN_1803450b0 ===== */

undefined8 * FUN_1803450b0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)((longlong)param_2 + 0x14);
  param_1[3] = param_2[3];
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  *(undefined1 *)((longlong)param_1 + 0x21) = *(undefined1 *)((longlong)param_2 + 0x21);
  FUN_180024b50(param_1 + 5,param_2 + 5);
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  lVar5 = 3;
  *(undefined4 *)((longlong)param_1 + 0x4c) = *(undefined4 *)((longlong)param_2 + 0x4c);
  uVar1 = param_2[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar1;
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  param_1[0xd] = param_2[0xd];
  *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_2 + 0xe);
  puVar2 = (undefined8 *)((longlong)param_2 + 0x74);
  puVar3 = (undefined8 *)((longlong)param_1 + 0x74);
  do {
    puVar6 = puVar3;
    puVar4 = puVar2;
    uVar1 = puVar4[1];
    *puVar6 = *puVar4;
    puVar6[1] = uVar1;
    uVar1 = puVar4[3];
    puVar6[2] = puVar4[2];
    puVar6[3] = uVar1;
    uVar1 = puVar4[5];
    puVar6[4] = puVar4[4];
    puVar6[5] = uVar1;
    uVar1 = puVar4[7];
    puVar6[6] = puVar4[6];
    puVar6[7] = uVar1;
    uVar1 = puVar4[9];
    puVar6[8] = puVar4[8];
    puVar6[9] = uVar1;
    uVar1 = puVar4[0xb];
    puVar6[10] = puVar4[10];
    puVar6[0xb] = uVar1;
    uVar1 = puVar4[0xd];
    puVar6[0xc] = puVar4[0xc];
    puVar6[0xd] = uVar1;
    uVar1 = puVar4[0xf];
    puVar6[0xe] = puVar4[0xe];
    puVar6[0xf] = uVar1;
    lVar5 = lVar5 + -1;
    puVar2 = puVar4 + 0x10;
    puVar3 = puVar6 + 0x10;
  } while (lVar5 != 0);
  uVar1 = puVar4[0x11];
  puVar6[0x10] = puVar4[0x10];
  puVar6[0x11] = uVar1;
  uVar1 = puVar4[0x13];
  puVar6[0x12] = puVar4[0x12];
  puVar6[0x13] = uVar1;
  *(undefined4 *)(puVar6 + 0x14) = *(undefined4 *)(puVar4 + 0x14);
  param_1[0x43] = param_2[0x43];
  return param_1;
}



/* ===== 1803451c0 FUN_1803451c0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1803451c0(undefined8 param_1,char param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  byte bVar6;
  char cVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  char *pcVar11;
  uint uVar12;
  float fVar13;
  ulonglong uVar14;
  bool bVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  float fVar18;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  float local_120;
  float local_108;
  float local_104;
  uint local_100 [2];
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined1 local_d0 [16];
  undefined1 local_c0 [40];
  ulonglong local_98;
  
  local_98 = DAT_180919500 ^ (ulonglong)auStack_148;
  local_100[0] = (uint)param_1;
  plVar8 = (longlong *)FUN_180355260(param_1,local_d0,local_100);
  fVar5 = DAT_1808ac34c;
  pcVar11 = "##inv_tip_fade";
  lVar2 = *plVar8;
  bVar6 = 0x23;
  uVar12 = ~local_100[0];
  do {
    pcVar11 = pcVar11 + 1;
    if (((bVar6 == 0x23) && (*pcVar11 == 0x23)) && (pcVar11[1] == 0x23)) {
      pcVar11 = pcVar11 + 2;
      uVar12 = ~local_100[0];
    }
    else {
      uVar12 = uVar12 >> 8 ^
               *(uint *)(&DAT_1806c25c0 + ((ulonglong)(uVar12 & 0xff) ^ (ulonglong)bVar6) * 4);
    }
    bVar6 = *pcVar11;
  } while (bVar6 != 0);
  fVar13 = (float)~uVar12;
  if (param_2 == '\0') {
    *(undefined4 *)(lVar2 + 0x14) = 0;
    local_d8 = 0xffffffff;
    local_e8 = 0;
    uStack_e0 = 0;
    local_108 = fVar13;
    FUN_18034a380();
    fVar13 = 0.0;
  }
  else {
    if (*(float *)(lVar2 + 0x14) < DAT_1808ac154) {
      *(float *)(lVar2 + 0x14) = *(float *)(lVar2 + 0x14) + *(float *)(DAT_180ca0a50 + 0x40);
      uVar14 = (((((ulonglong)((uint)fVar13 & 0xff) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                 (ulonglong)((uint)fVar13 >> 8 & 0xff)) * 0x100000001b3 ^
                (ulonglong)((uint)fVar13 >> 0x10 & 0xff)) * 0x100000001b3 ^
               (ulonglong)((uint)fVar13 >> 0x18)) * 0x100000001b3 & DAT_181107640;
      lVar9 = *(longlong *)(DAT_181107628 + 8 + uVar14 * 0x10);
      if (lVar9 == DAT_181107618) {
LAB_18034533b:
        lVar9 = DAT_181107618;
      }
      else {
        fVar18 = *(float *)(lVar9 + 0x10);
        while (fVar13 != fVar18) {
          if (lVar9 == *(longlong *)(DAT_181107628 + uVar14 * 0x10)) goto LAB_18034533b;
          lVar9 = *(longlong *)(lVar9 + 8);
          fVar18 = *(float *)(lVar9 + 0x10);
        }
        if (lVar9 == 0) goto LAB_18034533b;
      }
      if (lVar9 == DAT_181107618) {
        return;
      }
      fVar13 = *(float *)(lVar9 + 0x14);
      goto LAB_1803453d6;
    }
    local_d8 = 0xffffffff;
    local_e8 = _DAT_1808ad560;
    uStack_e0 = _UNK_1808ad568;
    local_108 = fVar13;
    FUN_18034a380(_DAT_1808ad560,&local_f8,&local_108,&local_e8);
    fVar13 = fVar5;
  }
  fVar13 = (float)FUN_1802b3660(local_f8 + 0x14,fVar13,DAT_1808ac118,0);
LAB_1803453d6:
  if (0.0 < fVar13) {
    FUN_1803d7610(local_c0,0x28,"##inv_tip_%08x",local_100[0]);
    lVar9 = DAT_180ca0a50;
    *(uint *)(DAT_180ca0a50 + 0x1f38) = *(uint *)(DAT_180ca0a50 + 0x1f38) | 1;
    uVar16 = FUN_18053fc00();
    *(undefined4 *)(lVar9 + 0x1f48) = uVar16;
    uVar17 = FUN_18053fc00();
    uVar16 = DAT_1808ac864;
    *(undefined4 *)(lVar9 + 0x1f4c) = uVar17;
    *(undefined8 *)(lVar9 + 0x1f50) = 0;
    *(undefined4 *)(lVar9 + 0x1f3c) = 1;
    local_108 = 10.0;
    local_104 = 10.0;
    FUN_1803d89a0(2,&local_108);
    FUN_1803d8870(3,uVar16);
    FUN_1803d8870(4,0);
    FUN_1803d8730(2,0);
    cVar7 = FUN_1803e4f20(local_c0,0,0x203136b);
    FUN_1803d87f0(1);
    FUN_1803d8a40(3);
    lVar9 = DAT_180ca0a50;
    if (cVar7 != '\0') {
      bVar15 = DAT_180cd0fd8 == '\0';
      *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
      lVar9 = *(longlong *)(lVar9 + 0x14f8);
      uVar1 = *(undefined8 *)(lVar9 + 0x28);
      lVar3 = *(longlong *)(lVar9 + 0x2c8);
      local_108 = (float)uVar1 + *(float *)(lVar9 + 0x30);
      local_f8._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
      local_104 = local_f8._4_4_ + *(float *)(lVar9 + 0x34);
      if (bVar15) {
        fVar18 = fVar5;
      }
      else {
        fVar18 = DAT_1809f7440;
      }
      local_120 = DAT_1808ac000;
      if (DAT_1808ac000 <= fVar18) {
        local_120 = fVar18;
      }
      local_120 = fVar5 / local_120;
      local_128 = DAT_180960ee0;
      local_f8 = uVar1;
      FUN_1802b4c40(lVar3,&local_f8,&local_108,uVar16);
      lVar9 = DAT_181107a08;
      if (DAT_181107a08 == 0) {
        lVar9 = *(longlong *)(DAT_180ca0a50 + 0x11f0);
      }
      local_f0 = *(undefined4 *)(DAT_180ca0a50 + 0x1204);
      local_ec = *(undefined4 *)(DAT_180ca0a50 + 0x1200);
      local_f8 = *(longlong *)(DAT_180ca0a50 + 0x11f0);
      FUN_1803f6200(DAT_180ca0a50 + 0x1fe0,&local_f8);
      FUN_1803e8680(lVar9,DAT_1808ac930,0);
      FUN_1803d8730(0,(int)(longlong)
                           ((float)(DAT_180960ec8 >> 0x18) * DAT_1808ac2cc + DAT_1808ac1f4) << 0x18
                      | DAT_180960ec8 & 0xffffff);
      FUN_1802e0e20(param_5);
      FUN_1803d87f0(1);
      lVar9 = DAT_180ca0a50;
      lVar10 = (longlong)*(int *)(DAT_180ca0a50 + 0x1fe0);
      if (*(int *)(DAT_180ca0a50 + 0x1fe0) < 1) {
        FUN_1803ebc00("Calling PopFont() too many times!");
      }
      else {
        lVar4 = *(longlong *)(DAT_180ca0a50 + 0x1fe8);
        FUN_1803e8680(*(undefined8 *)(lVar4 + -0x10 + lVar10 * 0x10),
                      *(undefined4 *)(lVar4 + -8 + lVar10 * 0x10),
                      *(undefined4 *)(lVar4 + -4 + lVar10 * 0x10));
        *(int *)(lVar9 + 0x1fe0) = *(int *)(lVar9 + 0x1fe0) + -1;
      }
      fVar13 = DAT_1811074e8 * fVar13;
      uVar16 = *(undefined4 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x30);
      *(undefined4 *)(lVar2 + 0x1c) = *(undefined4 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x34);
      *(undefined4 *)(lVar2 + 0x18) = uVar16;
      FUN_1802b3c30(lVar3,0,*(undefined4 *)(lVar3 + 0x20),fVar13);
    }
    FUN_1803e75b0();
  }
  return;
}



/* ===== 180345790 FUN_180345790 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180345790(undefined8 param_1,char param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  byte bVar6;
  char cVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  char *pcVar11;
  uint uVar12;
  float fVar13;
  ulonglong uVar14;
  bool bVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  float fVar18;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  float local_120;
  float local_108;
  float local_104;
  uint local_100 [2];
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined1 local_d0 [16];
  undefined1 local_c0 [40];
  ulonglong local_98;
  
  local_98 = DAT_180919500 ^ (ulonglong)auStack_148;
  local_100[0] = (uint)param_1;
  plVar8 = (longlong *)FUN_180355260(param_1,local_d0,local_100);
  fVar5 = DAT_1808ac34c;
  pcVar11 = "##inv_tip_fade";
  lVar2 = *plVar8;
  bVar6 = 0x23;
  uVar12 = ~local_100[0];
  do {
    pcVar11 = pcVar11 + 1;
    if (((bVar6 == 0x23) && (*pcVar11 == 0x23)) && (pcVar11[1] == 0x23)) {
      pcVar11 = pcVar11 + 2;
      uVar12 = ~local_100[0];
    }
    else {
      uVar12 = uVar12 >> 8 ^
               *(uint *)(&DAT_1806c25c0 + ((ulonglong)(uVar12 & 0xff) ^ (ulonglong)bVar6) * 4);
    }
    bVar6 = *pcVar11;
  } while (bVar6 != 0);
  fVar13 = (float)~uVar12;
  if (param_2 == '\0') {
    *(undefined4 *)(lVar2 + 0x14) = 0;
    local_d8 = 0xffffffff;
    local_e8 = 0;
    uStack_e0 = 0;
    local_108 = fVar13;
    FUN_18034a380();
    fVar13 = 0.0;
  }
  else {
    if (*(float *)(lVar2 + 0x14) < DAT_1808ac154) {
      *(float *)(lVar2 + 0x14) = *(float *)(lVar2 + 0x14) + *(float *)(DAT_180ca0a50 + 0x40);
      uVar14 = (((((ulonglong)((uint)fVar13 & 0xff) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                 (ulonglong)((uint)fVar13 >> 8 & 0xff)) * 0x100000001b3 ^
                (ulonglong)((uint)fVar13 >> 0x10 & 0xff)) * 0x100000001b3 ^
               (ulonglong)((uint)fVar13 >> 0x18)) * 0x100000001b3 & DAT_181107640;
      lVar9 = *(longlong *)(DAT_181107628 + 8 + uVar14 * 0x10);
      if (lVar9 == DAT_181107618) {
LAB_18034590b:
        lVar9 = DAT_181107618;
      }
      else {
        fVar18 = *(float *)(lVar9 + 0x10);
        while (fVar13 != fVar18) {
          if (lVar9 == *(longlong *)(DAT_181107628 + uVar14 * 0x10)) goto LAB_18034590b;
          lVar9 = *(longlong *)(lVar9 + 8);
          fVar18 = *(float *)(lVar9 + 0x10);
        }
        if (lVar9 == 0) goto LAB_18034590b;
      }
      if (lVar9 == DAT_181107618) {
        return;
      }
      fVar13 = *(float *)(lVar9 + 0x14);
      goto LAB_1803459a6;
    }
    local_d8 = 0xffffffff;
    local_e8 = _DAT_1808ad560;
    uStack_e0 = _UNK_1808ad568;
    local_108 = fVar13;
    FUN_18034a380(_DAT_1808ad560,&local_f8,&local_108,&local_e8);
    fVar13 = fVar5;
  }
  fVar13 = (float)FUN_1802b3660(local_f8 + 0x14,fVar13,DAT_1808ac118,0);
LAB_1803459a6:
  if (0.0 < fVar13) {
    FUN_1803d7610(local_c0,0x28,"##inv_tip_%08x",local_100[0]);
    lVar9 = DAT_180ca0a50;
    *(uint *)(DAT_180ca0a50 + 0x1f38) = *(uint *)(DAT_180ca0a50 + 0x1f38) | 1;
    uVar16 = FUN_18053fc00();
    *(undefined4 *)(lVar9 + 0x1f48) = uVar16;
    uVar17 = FUN_18053fc00();
    uVar16 = DAT_1808ac864;
    *(undefined4 *)(lVar9 + 0x1f4c) = uVar17;
    *(undefined8 *)(lVar9 + 0x1f50) = 0;
    *(undefined4 *)(lVar9 + 0x1f3c) = 1;
    local_108 = 10.0;
    local_104 = 10.0;
    FUN_1803d89a0(2,&local_108);
    FUN_1803d8870(3,uVar16);
    FUN_1803d8870(4,0);
    FUN_1803d8730(2,0);
    cVar7 = FUN_1803e4f20(local_c0,0,0x203136b);
    FUN_1803d87f0(1);
    FUN_1803d8a40(3);
    lVar9 = DAT_180ca0a50;
    if (cVar7 != '\0') {
      bVar15 = DAT_180cd0fd8 == '\0';
      *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
      lVar9 = *(longlong *)(lVar9 + 0x14f8);
      uVar1 = *(undefined8 *)(lVar9 + 0x28);
      lVar3 = *(longlong *)(lVar9 + 0x2c8);
      local_108 = (float)uVar1 + *(float *)(lVar9 + 0x30);
      local_f8._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
      local_104 = local_f8._4_4_ + *(float *)(lVar9 + 0x34);
      if (bVar15) {
        fVar18 = fVar5;
      }
      else {
        fVar18 = DAT_1809f7440;
      }
      local_120 = DAT_1808ac000;
      if (DAT_1808ac000 <= fVar18) {
        local_120 = fVar18;
      }
      local_120 = fVar5 / local_120;
      local_128 = DAT_180960ee0;
      local_f8 = uVar1;
      FUN_1802b4c40(lVar3,&local_f8,&local_108,uVar16);
      lVar9 = DAT_181107a08;
      if (DAT_181107a08 == 0) {
        lVar9 = *(longlong *)(DAT_180ca0a50 + 0x11f0);
      }
      local_f0 = *(undefined4 *)(DAT_180ca0a50 + 0x1204);
      local_ec = *(undefined4 *)(DAT_180ca0a50 + 0x1200);
      local_f8 = *(longlong *)(DAT_180ca0a50 + 0x11f0);
      FUN_1803f6200(DAT_180ca0a50 + 0x1fe0,&local_f8);
      FUN_1803e8680(lVar9,DAT_1808ac930,0);
      FUN_1803d8730(0,(int)(longlong)
                           ((float)(DAT_180960ec8 >> 0x18) * DAT_1808ac2cc + DAT_1808ac1f4) << 0x18
                      | DAT_180960ec8 & 0xffffff);
      FUN_1802ead40(param_5);
      FUN_1803d87f0(1);
      lVar9 = DAT_180ca0a50;
      lVar10 = (longlong)*(int *)(DAT_180ca0a50 + 0x1fe0);
      if (*(int *)(DAT_180ca0a50 + 0x1fe0) < 1) {
        FUN_1803ebc00("Calling PopFont() too many times!");
      }
      else {
        lVar4 = *(longlong *)(DAT_180ca0a50 + 0x1fe8);
        FUN_1803e8680(*(undefined8 *)(lVar4 + -0x10 + lVar10 * 0x10),
                      *(undefined4 *)(lVar4 + -8 + lVar10 * 0x10),
                      *(undefined4 *)(lVar4 + -4 + lVar10 * 0x10));
        *(int *)(lVar9 + 0x1fe0) = *(int *)(lVar9 + 0x1fe0) + -1;
      }
      fVar13 = DAT_1811074e8 * fVar13;
      uVar16 = *(undefined4 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x30);
      *(undefined4 *)(lVar2 + 0x1c) = *(undefined4 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x34);
      *(undefined4 *)(lVar2 + 0x18) = uVar16;
      FUN_1802b3c30(lVar3,0,*(undefined4 *)(lVar3 + 0x20),fVar13);
    }
    FUN_1803e75b0();
  }
  return;
}



/* ===== 180345d60 FUN_180345d60 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180345d60(undefined8 param_1,char param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  byte bVar6;
  char cVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  char *pcVar11;
  uint uVar12;
  float fVar13;
  ulonglong uVar14;
  bool bVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  float fVar18;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  float local_120;
  float local_108;
  float local_104;
  uint local_100 [2];
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined1 local_d0 [16];
  undefined1 local_c0 [40];
  ulonglong local_98;
  
  local_98 = DAT_180919500 ^ (ulonglong)auStack_148;
  local_100[0] = (uint)param_1;
  plVar8 = (longlong *)FUN_180355260(param_1,local_d0,local_100);
  fVar5 = DAT_1808ac34c;
  pcVar11 = "##inv_tip_fade";
  lVar2 = *plVar8;
  bVar6 = 0x23;
  uVar12 = ~local_100[0];
  do {
    pcVar11 = pcVar11 + 1;
    if (((bVar6 == 0x23) && (*pcVar11 == 0x23)) && (pcVar11[1] == 0x23)) {
      pcVar11 = pcVar11 + 2;
      uVar12 = ~local_100[0];
    }
    else {
      uVar12 = uVar12 >> 8 ^
               *(uint *)(&DAT_1806c25c0 + ((ulonglong)(uVar12 & 0xff) ^ (ulonglong)bVar6) * 4);
    }
    bVar6 = *pcVar11;
  } while (bVar6 != 0);
  fVar13 = (float)~uVar12;
  if (param_2 == '\0') {
    *(undefined4 *)(lVar2 + 0x14) = 0;
    local_d8 = 0xffffffff;
    local_e8 = 0;
    uStack_e0 = 0;
    local_108 = fVar13;
    FUN_18034a380();
    fVar13 = 0.0;
  }
  else {
    if (*(float *)(lVar2 + 0x14) < DAT_1808ac154) {
      *(float *)(lVar2 + 0x14) = *(float *)(lVar2 + 0x14) + *(float *)(DAT_180ca0a50 + 0x40);
      uVar14 = (((((ulonglong)((uint)fVar13 & 0xff) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                 (ulonglong)((uint)fVar13 >> 8 & 0xff)) * 0x100000001b3 ^
                (ulonglong)((uint)fVar13 >> 0x10 & 0xff)) * 0x100000001b3 ^
               (ulonglong)((uint)fVar13 >> 0x18)) * 0x100000001b3 & DAT_181107640;
      lVar9 = *(longlong *)(DAT_181107628 + 8 + uVar14 * 0x10);
      if (lVar9 == DAT_181107618) {
LAB_180345edb:
        lVar9 = DAT_181107618;
      }
      else {
        fVar18 = *(float *)(lVar9 + 0x10);
        while (fVar13 != fVar18) {
          if (lVar9 == *(longlong *)(DAT_181107628 + uVar14 * 0x10)) goto LAB_180345edb;
          lVar9 = *(longlong *)(lVar9 + 8);
          fVar18 = *(float *)(lVar9 + 0x10);
        }
        if (lVar9 == 0) goto LAB_180345edb;
      }
      if (lVar9 == DAT_181107618) {
        return;
      }
      fVar13 = *(float *)(lVar9 + 0x14);
      goto LAB_180345f76;
    }
    local_d8 = 0xffffffff;
    local_e8 = _DAT_1808ad560;
    uStack_e0 = _UNK_1808ad568;
    local_108 = fVar13;
    FUN_18034a380(_DAT_1808ad560,&local_f8,&local_108,&local_e8);
    fVar13 = fVar5;
  }
  fVar13 = (float)FUN_1802b3660(local_f8 + 0x14,fVar13,DAT_1808ac118,0);
LAB_180345f76:
  if (0.0 < fVar13) {
    FUN_1803d7610(local_c0,0x28,"##inv_tip_%08x",local_100[0]);
    lVar9 = DAT_180ca0a50;
    *(uint *)(DAT_180ca0a50 + 0x1f38) = *(uint *)(DAT_180ca0a50 + 0x1f38) | 1;
    uVar16 = FUN_18053fc00();
    *(undefined4 *)(lVar9 + 0x1f48) = uVar16;
    uVar17 = FUN_18053fc00();
    uVar16 = DAT_1808ac864;
    *(undefined4 *)(lVar9 + 0x1f4c) = uVar17;
    *(undefined8 *)(lVar9 + 0x1f50) = 0;
    *(undefined4 *)(lVar9 + 0x1f3c) = 1;
    local_108 = 10.0;
    local_104 = 10.0;
    FUN_1803d89a0(2,&local_108);
    FUN_1803d8870(3,uVar16);
    FUN_1803d8870(4,0);
    FUN_1803d8730(2,0);
    cVar7 = FUN_1803e4f20(local_c0,0,0x203136b);
    FUN_1803d87f0(1);
    FUN_1803d8a40(3);
    lVar9 = DAT_180ca0a50;
    if (cVar7 != '\0') {
      bVar15 = DAT_180cd0fd8 == '\0';
      *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
      lVar9 = *(longlong *)(lVar9 + 0x14f8);
      uVar1 = *(undefined8 *)(lVar9 + 0x28);
      lVar3 = *(longlong *)(lVar9 + 0x2c8);
      local_108 = (float)uVar1 + *(float *)(lVar9 + 0x30);
      local_f8._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
      local_104 = local_f8._4_4_ + *(float *)(lVar9 + 0x34);
      if (bVar15) {
        fVar18 = fVar5;
      }
      else {
        fVar18 = DAT_1809f7440;
      }
      local_120 = DAT_1808ac000;
      if (DAT_1808ac000 <= fVar18) {
        local_120 = fVar18;
      }
      local_120 = fVar5 / local_120;
      local_128 = DAT_180960ee0;
      local_f8 = uVar1;
      FUN_1802b4c40(lVar3,&local_f8,&local_108,uVar16);
      lVar9 = DAT_181107a08;
      if (DAT_181107a08 == 0) {
        lVar9 = *(longlong *)(DAT_180ca0a50 + 0x11f0);
      }
      local_f0 = *(undefined4 *)(DAT_180ca0a50 + 0x1204);
      local_ec = *(undefined4 *)(DAT_180ca0a50 + 0x1200);
      local_f8 = *(longlong *)(DAT_180ca0a50 + 0x11f0);
      FUN_1803f6200(DAT_180ca0a50 + 0x1fe0,&local_f8);
      FUN_1803e8680(lVar9,DAT_1808ac930,0);
      FUN_1803d8730(0,(int)(longlong)
                           ((float)(DAT_180960ec8 >> 0x18) * DAT_1808ac2cc + DAT_1808ac1f4) << 0x18
                      | DAT_180960ec8 & 0xffffff);
      FUN_1802eed50(param_5);
      FUN_1803d87f0(1);
      lVar9 = DAT_180ca0a50;
      lVar10 = (longlong)*(int *)(DAT_180ca0a50 + 0x1fe0);
      if (*(int *)(DAT_180ca0a50 + 0x1fe0) < 1) {
        FUN_1803ebc00("Calling PopFont() too many times!");
      }
      else {
        lVar4 = *(longlong *)(DAT_180ca0a50 + 0x1fe8);
        FUN_1803e8680(*(undefined8 *)(lVar4 + -0x10 + lVar10 * 0x10),
                      *(undefined4 *)(lVar4 + -8 + lVar10 * 0x10),
                      *(undefined4 *)(lVar4 + -4 + lVar10 * 0x10));
        *(int *)(lVar9 + 0x1fe0) = *(int *)(lVar9 + 0x1fe0) + -1;
      }
      fVar13 = DAT_1811074e8 * fVar13;
      uVar16 = *(undefined4 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x30);
      *(undefined4 *)(lVar2 + 0x1c) = *(undefined4 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x34);
      *(undefined4 *)(lVar2 + 0x18) = uVar16;
      FUN_1802b3c30(lVar3,0,*(undefined4 *)(lVar3 + 0x20),fVar13);
    }
    FUN_1803e75b0();
  }
  return;
}



/* ===== 180346330 FUN_180346330 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180346330(undefined8 param_1,char param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  byte bVar6;
  char cVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  char *pcVar11;
  uint uVar12;
  float fVar13;
  ulonglong uVar14;
  bool bVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  float fVar18;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  float local_120;
  float local_108;
  float local_104;
  uint local_100 [2];
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined1 local_d0 [16];
  undefined1 local_c0 [40];
  ulonglong local_98;
  
  local_98 = DAT_180919500 ^ (ulonglong)auStack_148;
  local_100[0] = (uint)param_1;
  plVar8 = (longlong *)FUN_180355260(param_1,local_d0,local_100);
  fVar5 = DAT_1808ac34c;
  pcVar11 = "##inv_tip_fade";
  lVar2 = *plVar8;
  bVar6 = 0x23;
  uVar12 = ~local_100[0];
  do {
    pcVar11 = pcVar11 + 1;
    if (((bVar6 == 0x23) && (*pcVar11 == 0x23)) && (pcVar11[1] == 0x23)) {
      pcVar11 = pcVar11 + 2;
      uVar12 = ~local_100[0];
    }
    else {
      uVar12 = uVar12 >> 8 ^
               *(uint *)(&DAT_1806c25c0 + ((ulonglong)(uVar12 & 0xff) ^ (ulonglong)bVar6) * 4);
    }
    bVar6 = *pcVar11;
  } while (bVar6 != 0);
  fVar13 = (float)~uVar12;
  if (param_2 == '\0') {
    *(undefined4 *)(lVar2 + 0x14) = 0;
    local_d8 = 0xffffffff;
    local_e8 = 0;
    uStack_e0 = 0;
    local_108 = fVar13;
    FUN_18034a380();
    fVar13 = 0.0;
  }
  else {
    if (*(float *)(lVar2 + 0x14) < DAT_1808ac154) {
      *(float *)(lVar2 + 0x14) = *(float *)(lVar2 + 0x14) + *(float *)(DAT_180ca0a50 + 0x40);
      uVar14 = (((((ulonglong)((uint)fVar13 & 0xff) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                 (ulonglong)((uint)fVar13 >> 8 & 0xff)) * 0x100000001b3 ^
                (ulonglong)((uint)fVar13 >> 0x10 & 0xff)) * 0x100000001b3 ^
               (ulonglong)((uint)fVar13 >> 0x18)) * 0x100000001b3 & DAT_181107640;
      lVar9 = *(longlong *)(DAT_181107628 + 8 + uVar14 * 0x10);
      if (lVar9 == DAT_181107618) {
LAB_1803464ab:
        lVar9 = DAT_181107618;
      }
      else {
        fVar18 = *(float *)(lVar9 + 0x10);
        while (fVar13 != fVar18) {
          if (lVar9 == *(longlong *)(DAT_181107628 + uVar14 * 0x10)) goto LAB_1803464ab;
          lVar9 = *(longlong *)(lVar9 + 8);
          fVar18 = *(float *)(lVar9 + 0x10);
        }
        if (lVar9 == 0) goto LAB_1803464ab;
      }
      if (lVar9 == DAT_181107618) {
        return;
      }
      fVar13 = *(float *)(lVar9 + 0x14);
      goto LAB_180346546;
    }
    local_d8 = 0xffffffff;
    local_e8 = _DAT_1808ad560;
    uStack_e0 = _UNK_1808ad568;
    local_108 = fVar13;
    FUN_18034a380(_DAT_1808ad560,&local_f8,&local_108,&local_e8);
    fVar13 = fVar5;
  }
  fVar13 = (float)FUN_1802b3660(local_f8 + 0x14,fVar13,DAT_1808ac118,0);
LAB_180346546:
  if (0.0 < fVar13) {
    FUN_1803d7610(local_c0,0x28,"##inv_tip_%08x",local_100[0]);
    lVar9 = DAT_180ca0a50;
    *(uint *)(DAT_180ca0a50 + 0x1f38) = *(uint *)(DAT_180ca0a50 + 0x1f38) | 1;
    uVar16 = FUN_18053fc00();
    *(undefined4 *)(lVar9 + 0x1f48) = uVar16;
    uVar17 = FUN_18053fc00();
    uVar16 = DAT_1808ac864;
    *(undefined4 *)(lVar9 + 0x1f4c) = uVar17;
    *(undefined8 *)(lVar9 + 0x1f50) = 0;
    *(undefined4 *)(lVar9 + 0x1f3c) = 1;
    local_108 = 10.0;
    local_104 = 10.0;
    FUN_1803d89a0(2,&local_108);
    FUN_1803d8870(3,uVar16);
    FUN_1803d8870(4,0);
    FUN_1803d8730(2,0);
    cVar7 = FUN_1803e4f20(local_c0,0,0x203136b);
    FUN_1803d87f0(1);
    FUN_1803d8a40(3);
    lVar9 = DAT_180ca0a50;
    if (cVar7 != '\0') {
      bVar15 = DAT_180cd0fd8 == '\0';
      *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
      lVar9 = *(longlong *)(lVar9 + 0x14f8);
      uVar1 = *(undefined8 *)(lVar9 + 0x28);
      lVar3 = *(longlong *)(lVar9 + 0x2c8);
      local_108 = (float)uVar1 + *(float *)(lVar9 + 0x30);
      local_f8._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
      local_104 = local_f8._4_4_ + *(float *)(lVar9 + 0x34);
      if (bVar15) {
        fVar18 = fVar5;
      }
      else {
        fVar18 = DAT_1809f7440;
      }
      local_120 = DAT_1808ac000;
      if (DAT_1808ac000 <= fVar18) {
        local_120 = fVar18;
      }
      local_120 = fVar5 / local_120;
      local_128 = DAT_180960ee0;
      local_f8 = uVar1;
      FUN_1802b4c40(lVar3,&local_f8,&local_108,uVar16);
      lVar9 = DAT_181107a08;
      if (DAT_181107a08 == 0) {
        lVar9 = *(longlong *)(DAT_180ca0a50 + 0x11f0);
      }
      local_f0 = *(undefined4 *)(DAT_180ca0a50 + 0x1204);
      local_ec = *(undefined4 *)(DAT_180ca0a50 + 0x1200);
      local_f8 = *(longlong *)(DAT_180ca0a50 + 0x11f0);
      FUN_1803f6200(DAT_180ca0a50 + 0x1fe0,&local_f8);
      FUN_1803e8680(lVar9,DAT_1808ac930,0);
      FUN_1803d8730(0,(int)(longlong)
                           ((float)(DAT_180960ec8 >> 0x18) * DAT_1808ac2cc + DAT_1808ac1f4) << 0x18
                      | DAT_180960ec8 & 0xffffff);
      FUN_1802f2780(param_5);
      FUN_1803d87f0(1);
      lVar9 = DAT_180ca0a50;
      lVar10 = (longlong)*(int *)(DAT_180ca0a50 + 0x1fe0);
      if (*(int *)(DAT_180ca0a50 + 0x1fe0) < 1) {
        FUN_1803ebc00("Calling PopFont() too many times!");
      }
      else {
        lVar4 = *(longlong *)(DAT_180ca0a50 + 0x1fe8);
        FUN_1803e8680(*(undefined8 *)(lVar4 + -0x10 + lVar10 * 0x10),
                      *(undefined4 *)(lVar4 + -8 + lVar10 * 0x10),
                      *(undefined4 *)(lVar4 + -4 + lVar10 * 0x10));
        *(int *)(lVar9 + 0x1fe0) = *(int *)(lVar9 + 0x1fe0) + -1;
      }
      fVar13 = DAT_1811074e8 * fVar13;
      uVar16 = *(undefined4 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x30);
      *(undefined4 *)(lVar2 + 0x1c) = *(undefined4 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x34);
      *(undefined4 *)(lVar2 + 0x18) = uVar16;
      FUN_1802b3c30(lVar3,0,*(undefined4 *)(lVar3 + 0x20),fVar13);
    }
    FUN_1803e75b0();
  }
  return;
}



/* ===== 180346900 FUN_180346900 ===== */

void FUN_180346900(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x24) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined1 *)((longlong)param_1 + 0x4c) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x74) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0;
  *(undefined1 *)((longlong)param_1 + 0x9c) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc4) = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined1 *)((longlong)param_1 + 0xec) = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x104) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x114) = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  *(undefined1 *)(param_1 + 0x25) = 0;
  *(undefined8 *)((longlong)param_1 + 300) = 0;
  *(undefined8 *)((longlong)param_1 + 0x134) = 0;
  *(undefined1 *)((longlong)param_1 + 0x13c) = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  *(undefined1 *)(param_1 + 0x2a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x154) = 0;
  *(undefined8 *)((longlong)param_1 + 0x15c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x164) = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  *(undefined1 *)(param_1 + 0x2f) = 0;
  *(undefined8 *)((longlong)param_1 + 0x17c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x184) = 0;
  *(undefined1 *)((longlong)param_1 + 0x18c) = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  *(undefined1 *)(param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1a4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1ac) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1b4) = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  *(undefined1 *)(param_1 + 0x39) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1cc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1d4) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1dc) = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  *(undefined1 *)(param_1 + 0x3e) = 0;
  *(undefined8 *)((longlong)param_1 + 500) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1fc) = 0;
  *(undefined1 *)((longlong)param_1 + 0x204) = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  *(undefined1 *)(param_1 + 0x43) = 0;
  *(undefined8 *)((longlong)param_1 + 0x21c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x224) = 0;
  *(undefined1 *)((longlong)param_1 + 0x22c) = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  *(undefined1 *)(param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x244) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x254) = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  *(undefined1 *)(param_1 + 0x4d) = 0;
  *(undefined8 *)((longlong)param_1 + 0x26c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x274) = 0;
  *(undefined1 *)((longlong)param_1 + 0x27c) = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  *(undefined1 *)(param_1 + 0x52) = 0;
  *(undefined8 *)((longlong)param_1 + 0x294) = 0;
  *(undefined8 *)((longlong)param_1 + 0x29c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x2a4) = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  *(undefined1 *)(param_1 + 0x57) = 0;
  *(undefined8 *)((longlong)param_1 + 700) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c4) = 0;
  *(undefined1 *)((longlong)param_1 + 0x2cc) = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  *(undefined1 *)(param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2e4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2ec) = 0;
  *(undefined1 *)((longlong)param_1 + 0x2f4) = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  *(undefined1 *)(param_1 + 0x61) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x314) = 0;
  *(undefined1 *)((longlong)param_1 + 0x31c) = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  *(undefined1 *)(param_1 + 0x66) = 0;
  *(undefined8 *)((longlong)param_1 + 0x334) = 0;
  *(undefined8 *)((longlong)param_1 + 0x33c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x344) = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  *(undefined1 *)(param_1 + 0x6b) = 0;
  *(undefined8 *)((longlong)param_1 + 0x35c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x364) = 0;
  *(undefined1 *)((longlong)param_1 + 0x36c) = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  *(undefined1 *)(param_1 + 0x70) = 0;
  return;
}



/* ===== 180346c50 FUN_180346c50 ===== */

void FUN_180346c50(longlong param_1)

{
  ulonglong uVar1;
  
  for (uVar1 = 0; uVar1 < 5; uVar1 = uVar1 + 1) {
    *(undefined8 *)(param_1 + uVar1 * 0x18) = 0;
    *(undefined8 *)(param_1 + 8 + uVar1 * 0x18) = 0;
    *(undefined8 *)(param_1 + 0x10 + uVar1 * 0x18) = 0;
  }
  return;
}



/* ===== 180346cb0 FUN_180346cb0 ===== */

longlong * FUN_180346cb0(float *param_1,longlong *param_2,undefined8 *param_3,undefined8 *param_4)

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
  float fVar8;
  undefined8 *local_58;
  longlong local_50;
  
  puVar4 = param_3;
  if (0xf < (ulonglong)param_3[3]) {
    puVar4 = (undefined8 *)*param_3;
  }
  uVar7 = 0xcbf29ce484222325;
  uVar5 = 0;
  if (param_3[2] != 0) {
    do {
      uVar7 = (uVar7 ^ *(byte *)(uVar5 + (longlong)puVar4)) * 0x100000001b3;
      uVar5 = uVar5 + 1;
    } while (uVar5 < (ulonglong)param_3[2]);
  }
  FUN_1800268a0(param_1,&local_58,param_3,uVar7);
  if (local_50 != 0) {
    *param_2 = local_50;
    *(undefined1 *)(param_2 + 1) = 0;
    return param_2;
  }
  if (*(longlong *)(param_1 + 4) == 0x492492492492492) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4cd0("unordered_map/set too long");
  }
  puVar4 = (undefined8 *)FUN_1804ecaa0(0x38);
  FUN_180024b50(puVar4 + 2,param_3);
  puVar4[6] = *param_4;
  fVar8 = (float)(*(longlong *)(param_1 + 4) + 1) / (float)*(ulonglong *)(param_1 + 0xe);
  if (!(fVar8 < *param_1 || fVar8 == *param_1)) {
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
          _Buf1 = puVar4 + 2;
        }
        else {
          _Buf1 = (undefined8 *)puVar4[2];
        }
        if ((_Size == puVar6[4]) &&
           ((_Size == 0 || (iVar3 = memcmp(_Buf1,_Buf2,_Size), iVar3 == 0)))) {
          local_58 = (undefined8 *)*puVar6;
          goto LAB_180346e78;
        }
        if (puVar6 == puVar1) break;
        puVar6 = (undefined8 *)puVar6[1];
      }
      local_58 = puVar6;
    }
  }
LAB_180346e78:
  puVar6 = (undefined8 *)local_58[1];
  *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + 1;
  *puVar4 = local_58;
  puVar4[1] = puVar6;
  *puVar6 = puVar4;
  local_58[1] = puVar4;
  lVar2 = *(longlong *)(param_1 + 6);
  uVar7 = *(ulonglong *)(param_1 + 0xc) & uVar7;
  puVar1 = *(undefined8 **)(lVar2 + uVar7 * 0x10);
  if (puVar1 == *(undefined8 **)(param_1 + 2)) {
    *(undefined8 **)(lVar2 + uVar7 * 0x10) = puVar4;
  }
  else {
    if (puVar1 == local_58) {
      *(undefined8 **)(lVar2 + uVar7 * 0x10) = puVar4;
      goto LAB_180346ec3;
    }
    if (*(undefined8 **)(lVar2 + 8 + uVar7 * 0x10) != puVar6) goto LAB_180346ec3;
  }
  *(undefined8 **)(lVar2 + 8 + uVar7 * 0x10) = puVar4;
LAB_180346ec3:
  *param_2 = (longlong)puVar4;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



/* ===== 180346ef0 FUN_180346ef0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong *
FUN_180346ef0(undefined8 param_1,longlong *param_2,undefined8 *param_3,undefined8 *param_4)

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
  undefined8 *local_58;
  longlong local_50;
  
  puVar4 = param_3;
  if (0xf < (ulonglong)param_3[3]) {
    puVar4 = (undefined8 *)*param_3;
  }
  uVar7 = 0xcbf29ce484222325;
  uVar5 = 0;
  if (param_3[2] != 0) {
    do {
      uVar7 = (uVar7 ^ *(byte *)(uVar5 + (longlong)puVar4)) * 0x100000001b3;
      uVar5 = uVar5 + 1;
    } while (uVar5 < (ulonglong)param_3[2]);
  }
  FUN_1800268a0(&DAT_180ca1700,&local_58,param_3,uVar7);
  if (local_50 != 0) {
    *param_2 = local_50;
    *(undefined1 *)(param_2 + 1) = 0;
    return param_2;
  }
  if (DAT_180ca1710 == 0x492492492492492) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4cd0("unordered_map/set too long");
  }
  puVar4 = (undefined8 *)FUN_1804ecaa0(0x38);
  FUN_180024b50(puVar4 + 2,param_3);
  puVar4[6] = *param_4;
  if (_DAT_180ca1700 < (float)(DAT_180ca1710 + 1) / (float)DAT_180ca1738) {
    FUN_1800280b0(&DAT_180ca1700);
    puVar6 = *(undefined8 **)(DAT_180ca1718 + 8 + (DAT_180ca1730 & uVar7) * 0x10);
    local_58 = DAT_180ca1708;
    if (puVar6 != DAT_180ca1708) {
      puVar1 = *(undefined8 **)(DAT_180ca1718 + (DAT_180ca1730 & uVar7) * 0x10);
      uVar5 = puVar4[5];
      _Size = puVar4[4];
      local_58 = puVar6;
      while( true ) {
        puVar6 = local_58 + 2;
        if (0xf < (ulonglong)local_58[5]) {
          puVar6 = (undefined8 *)*puVar6;
        }
        if (uVar5 < 0x10) {
          _Buf1 = puVar4 + 2;
        }
        else {
          _Buf1 = (undefined8 *)puVar4[2];
        }
        if ((_Size == local_58[4]) &&
           ((_Size == 0 || (iVar3 = memcmp(_Buf1,puVar6,_Size), iVar3 == 0)))) break;
        if (local_58 == puVar1) goto LAB_1803470df;
        local_58 = (undefined8 *)local_58[1];
      }
      local_58 = (undefined8 *)*local_58;
    }
  }
LAB_1803470df:
  puVar6 = (undefined8 *)local_58[1];
  DAT_180ca1710 = DAT_180ca1710 + 1;
  *puVar4 = local_58;
  puVar4[1] = puVar6;
  *puVar6 = puVar4;
  local_58[1] = puVar4;
  lVar2 = DAT_180ca1718;
  uVar7 = DAT_180ca1730 & uVar7;
  puVar1 = *(undefined8 **)(DAT_180ca1718 + uVar7 * 0x10);
  if (puVar1 == DAT_180ca1708) {
    *(undefined8 **)(DAT_180ca1718 + uVar7 * 0x10) = puVar4;
  }
  else {
    if (puVar1 == local_58) {
      *(undefined8 **)(DAT_180ca1718 + uVar7 * 0x10) = puVar4;
      goto LAB_180347139;
    }
    if (*(undefined8 **)(DAT_180ca1718 + 8 + uVar7 * 0x10) != puVar6) goto LAB_180347139;
  }
  *(undefined8 **)(lVar2 + 8 + uVar7 * 0x10) = puVar4;
LAB_180347139:
  *param_2 = (longlong)puVar4;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



/* ===== 180347170 FUN_180347170 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180347170(byte *param_1,char param_2,longlong param_3,float *param_4,undefined8 *param_5)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  byte bVar8;
  char cVar9;
  uint uVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  float fVar14;
  byte *pbVar15;
  ulonglong uVar16;
  bool bVar17;
  float fVar18;
  undefined8 extraout_XMM0_Qa;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auStack_138 [32];
  undefined4 local_118;
  float local_110;
  float local_f8;
  float local_f4;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  uint local_e0;
  undefined8 local_dc;
  undefined8 uStack_d4;
  undefined4 local_cc;
  undefined1 local_c8 [16];
  undefined1 local_b8 [48];
  ulonglong local_88;
  
  local_88 = DAT_180919500 ^ (ulonglong)auStack_138;
  uVar10 = FUN_1803e8900(*(undefined8 *)(DAT_180ca0a50 + 0x14f8),"##presets_tip");
  bVar8 = *param_1;
  local_e0 = ~uVar10;
  while (bVar8 != 0) {
    pbVar15 = param_1 + 1;
    if (((bVar8 == 0x23) && (*pbVar15 == 0x23)) && (param_1[2] == 0x23)) {
      pbVar15 = param_1 + 3;
      local_e0 = ~uVar10;
    }
    else {
      local_e0 = local_e0 >> 8 ^
                 *(uint *)(&DAT_1806c25c0 + ((ulonglong)(local_e0 & 0xff) ^ (ulonglong)bVar8) * 4);
    }
    param_1 = pbVar15;
    bVar8 = *pbVar15;
  }
  local_e0 = ~local_e0;
  plVar11 = (longlong *)FUN_180354f20(extraout_XMM0_Qa,local_c8,&local_e0);
  fVar7 = DAT_1808ac34c;
  pbVar15 = &DAT_18075c601;
  lVar4 = *plVar11;
  bVar8 = 0x66;
  uVar10 = ~local_e0;
  do {
    if (((bVar8 == 0x23) && (*pbVar15 == 0x23)) && (pbVar15[1] == 0x23)) {
      pbVar15 = pbVar15 + 2;
      uVar10 = ~local_e0;
    }
    else {
      uVar10 = uVar10 >> 8 ^
               *(uint *)(&DAT_1806c25c0 + ((ulonglong)(uVar10 & 0xff) ^ (ulonglong)bVar8) * 4);
    }
    bVar8 = *pbVar15;
    pbVar15 = pbVar15 + 1;
  } while (bVar8 != 0);
  fVar14 = (float)~uVar10;
  if (param_2 == '\0') {
    *(undefined4 *)(lVar4 + 0x14) = 0;
    local_cc = 0xffffffff;
    local_dc = 0;
    uStack_d4 = 0;
    local_f8 = fVar14;
    FUN_18034a380();
    fVar14 = 0.0;
  }
  else {
    if (*(float *)(lVar4 + 0x14) < DAT_1808ac154) {
      *(float *)(lVar4 + 0x14) = *(float *)(lVar4 + 0x14) + *(float *)(DAT_180ca0a50 + 0x40);
      uVar16 = (((((ulonglong)((uint)fVar14 & 0xff) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                 (ulonglong)((uint)fVar14 >> 8 & 0xff)) * 0x100000001b3 ^
                (ulonglong)((uint)fVar14 >> 0x10 & 0xff)) * 0x100000001b3 ^
               (ulonglong)((uint)fVar14 >> 0x18)) * 0x100000001b3 & DAT_181107640;
      lVar12 = *(longlong *)(DAT_181107628 + 8 + uVar16 * 0x10);
      if (lVar12 == DAT_181107618) {
LAB_180347364:
        lVar12 = DAT_181107618;
      }
      else {
        fVar19 = *(float *)(lVar12 + 0x10);
        while (fVar14 != fVar19) {
          if (lVar12 == *(longlong *)(DAT_181107628 + uVar16 * 0x10)) goto LAB_180347364;
          lVar12 = *(longlong *)(lVar12 + 8);
          fVar19 = *(float *)(lVar12 + 0x10);
        }
        if (lVar12 == 0) goto LAB_180347364;
      }
      if (lVar12 == DAT_181107618) {
        return;
      }
      fVar14 = *(float *)(lVar12 + 0x14);
      goto LAB_1803473fb;
    }
    local_cc = 0xffffffff;
    local_dc = _DAT_1808ad560;
    uStack_d4 = _UNK_1808ad568;
    local_f8 = fVar14;
    FUN_18034a380(_DAT_1808ad560,&local_f0,&local_f8,&local_dc);
    fVar14 = fVar7;
  }
  fVar14 = (float)FUN_1802b3660(local_f0 + 0x14,fVar14,DAT_1808ac118,0);
LAB_1803473fb:
  if (0.0 < fVar14) {
    fVar19 = *(float *)(**(longlong **)(DAT_180ca0a50 + 0x2058) + 0x10);
    fVar22 = *(float *)(**(longlong **)(DAT_180ca0a50 + 0x2058) + 0x14);
    if (fVar19 <= DAT_1808ac7ac) {
      fVar23 = 0.0;
    }
    else {
      fVar23 = DAT_1808ac658;
    }
    fVar21 = DAT_1808ac658;
    if (fVar22 <= DAT_1808ac7ac) {
      fVar21 = 0.0;
    }
    fVar19 = fVar19 - fVar23;
    fVar20 = ((*(float *)(param_3 + 4) + param_4[1]) - *(float *)(lVar4 + 0x1c)) * DAT_1808ac1f4 +
             *(float *)(lVar4 + 0x1c);
    fVar22 = fVar22 - fVar21;
    fVar18 = *(float *)(lVar4 + 0x18) + *param_4 + DAT_1808ac900;
    if (fVar20 <= fVar22) {
      fVar22 = fVar20;
    }
    if (fVar18 <= fVar19) {
      fVar19 = fVar18;
    }
    fVar22 = fVar22 - *(float *)(lVar4 + 0x1c);
    fVar19 = fVar19 - *(float *)(lVar4 + 0x18);
    if (fVar23 <= fVar19) {
      fVar23 = fVar19;
    }
    if (fVar22 < fVar21) {
      fVar22 = fVar21;
    }
    FUN_1803d7610(local_b8,0x30,"##presets_tip_%08x",local_e0);
    lVar12 = DAT_180ca0a50;
    local_f8 = 10.0;
    local_f4 = 10.0;
    *(uint *)(DAT_180ca0a50 + 0x1f38) = *(uint *)(DAT_180ca0a50 + 0x1f38) | 1;
    *(float *)(lVar12 + 0x1f4c) = fVar22;
    uVar3 = DAT_1808ac864;
    *(float *)(lVar12 + 0x1f48) = fVar23;
    *(undefined8 *)(lVar12 + 0x1f50) = 0;
    *(undefined4 *)(lVar12 + 0x1f3c) = 1;
    FUN_1803d89a0(2,&local_f8);
    local_f8 = 8.0;
    local_f4 = 10.0;
    FUN_1803d89a0(0xe,&local_f8);
    FUN_1803d8870(3,uVar3);
    FUN_1803d8870(4,0);
    FUN_1803d8730(2,0);
    FUN_1803d8730(0,DAT_180960ef8);
    cVar9 = FUN_1803e4f20(local_b8,0,0x203136b);
    FUN_1803d87f0(2);
    FUN_1803d8a40(4);
    lVar12 = DAT_180ca0a50;
    if (cVar9 != '\0') {
      bVar17 = DAT_180cd0fd8 == '\0';
      *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
      lVar12 = *(longlong *)(lVar12 + 0x14f8);
      uVar1 = *(undefined8 *)(lVar12 + 0x28);
      lVar5 = *(longlong *)(lVar12 + 0x2c8);
      local_f8 = (float)uVar1 + *(float *)(lVar12 + 0x30);
      local_f0._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
      local_f4 = local_f0._4_4_ + *(float *)(lVar12 + 0x34);
      if (bVar17) {
        fVar19 = fVar7;
      }
      else {
        fVar19 = DAT_1809f7440;
      }
      local_110 = DAT_1808ac000;
      if (DAT_1808ac000 <= fVar19) {
        local_110 = fVar19;
      }
      local_110 = fVar7 / local_110;
      local_118 = DAT_180960ee0;
      local_f0 = uVar1;
      FUN_1802b4c40(lVar5,&local_f0,&local_f8,uVar3);
      local_f0 = 0x4120000041000000;
      FUN_1803d89a0(0xe,&local_f0);
      FUN_1803d8730(0,DAT_180960ef8);
      lVar12 = DAT_181107a08;
      if (DAT_181107a08 == 0) {
        lVar12 = *(longlong *)(DAT_180ca0a50 + 0x11f0);
      }
      local_e8 = *(undefined4 *)(DAT_180ca0a50 + 0x1204);
      local_e4 = *(undefined4 *)(DAT_180ca0a50 + 0x1200);
      local_f0 = *(longlong *)(DAT_180ca0a50 + 0x11f0);
      FUN_1803f6200(DAT_180ca0a50 + 0x1fe0,&local_f0);
      uVar3 = DAT_1808ac930;
      FUN_1803e8680(lVar12,DAT_1808ac930,0);
      FUN_1803d8730(0,DAT_180960ec8);
      if ((*(char **)*param_5 == (char *)0x0) || (**(char **)*param_5 == '\0')) {
        FUN_180414370(*(undefined8 *)param_5[1],0,1);
        FUN_1803d87f0(1);
      }
      else {
        lVar12 = DAT_1811079c0;
        if ((DAT_1811079c0 == 0) && (lVar12 = DAT_181107a08, DAT_181107a08 == 0)) {
          lVar12 = *(longlong *)(DAT_180ca0a50 + 0x11f0);
        }
        local_e8 = *(undefined4 *)(DAT_180ca0a50 + 0x1204);
        local_e4 = *(undefined4 *)(DAT_180ca0a50 + 0x1200);
        local_f0 = *(longlong *)(DAT_180ca0a50 + 0x11f0);
        FUN_1803f6200(DAT_180ca0a50 + 0x1fe0,&local_f0);
        FUN_1803e8680(lVar12,uVar3,0);
        FUN_180414370(*(undefined8 *)param_5[1],0,1);
        lVar12 = DAT_180ca0a50;
        lVar13 = (longlong)*(int *)(DAT_180ca0a50 + 0x1fe0);
        if (*(int *)(DAT_180ca0a50 + 0x1fe0) < 1) {
          FUN_1803ebc00("Calling PopFont() too many times!");
        }
        else {
          lVar6 = *(longlong *)(DAT_180ca0a50 + 0x1fe8);
          FUN_1803e8680(*(undefined8 *)(lVar6 + -0x10 + lVar13 * 0x10),
                        *(undefined4 *)(lVar6 + -8 + lVar13 * 0x10),
                        *(undefined4 *)(lVar6 + -4 + lVar13 * 0x10));
          *(int *)(lVar12 + 0x1fe0) = *(int *)(lVar12 + 0x1fe0) + -1;
        }
        FUN_1803d87f0(1);
        FUN_1803e7a50();
        FUN_180414370(*(undefined8 *)*param_5,0,1);
        lVar12 = *(longlong *)(DAT_180ca0a50 + 0x14f8);
        iVar2 = *(int *)(lVar12 + 0x208);
        if (iVar2 < 1) {
          FUN_1803ebc00("Calling PopTextWrapPos() too many times!");
        }
        else {
          uVar3 = *(undefined4 *)(*(longlong *)(lVar12 + 0x210) + -4 + (longlong)iVar2 * 4);
          *(int *)(lVar12 + 0x208) = iVar2 + -1;
          *(undefined4 *)(lVar12 + 0x1f0) = uVar3;
        }
      }
      lVar12 = DAT_180ca0a50;
      lVar13 = (longlong)*(int *)(DAT_180ca0a50 + 0x1fe0);
      if (*(int *)(DAT_180ca0a50 + 0x1fe0) < 1) {
        FUN_1803ebc00("Calling PopFont() too many times!");
      }
      else {
        lVar6 = *(longlong *)(DAT_180ca0a50 + 0x1fe8);
        FUN_1803e8680(*(undefined8 *)(lVar6 + -0x10 + lVar13 * 0x10),
                      *(undefined4 *)(lVar6 + -8 + lVar13 * 0x10),
                      *(undefined4 *)(lVar6 + -4 + lVar13 * 0x10));
        *(int *)(lVar12 + 0x1fe0) = *(int *)(lVar12 + 0x1fe0) + -1;
      }
      FUN_1803d87f0(1);
      FUN_1803d8a40(1);
      fVar14 = DAT_1811074e8 * fVar14;
      uVar3 = *(undefined4 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x30);
      *(undefined4 *)(lVar4 + 0x1c) = *(undefined4 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x34);
      *(undefined4 *)(lVar4 + 0x18) = uVar3;
      FUN_1802b3c30(lVar5,0,*(undefined4 *)(lVar5 + 0x20),fVar14);
    }
    FUN_1803e75b0();
  }
  return;
}



/* ===== 180347950 FUN_180347950 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180347950(undefined8 param_1,char param_2,longlong param_3,float *param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  byte bVar7;
  char cVar8;
  uint uVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  byte *pbVar13;
  float fVar14;
  ulonglong uVar15;
  bool bVar16;
  float fVar17;
  undefined8 extraout_XMM0_Qa;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  float local_120;
  float local_108;
  float local_104;
  uint local_100 [2];
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined1 local_d0 [16];
  undefined1 local_c0 [48];
  ulonglong local_90;
  
  local_90 = DAT_180919500 ^ (ulonglong)auStack_148;
  uVar9 = FUN_1803e8900(*(undefined8 *)(DAT_180ca0a50 + 0x14f8),"##presets_tip");
  pbVar13 = &DAT_180769cb1;
  uVar15 = 0x72;
  local_100[0] = ~uVar9;
  do {
    if ((((char)uVar15 == '#') && (*pbVar13 == 0x23)) && (pbVar13[1] == 0x23)) {
      pbVar13 = pbVar13 + 2;
      local_100[0] = ~uVar9;
    }
    else {
      local_100[0] = local_100[0] >> 8 ^
                     *(uint *)(&DAT_1806c25c0 + (local_100[0] & 0xff ^ uVar15) * 4);
    }
    bVar7 = *pbVar13;
    uVar15 = (ulonglong)bVar7;
    pbVar13 = pbVar13 + 1;
  } while (bVar7 != 0);
  local_100[0] = ~local_100[0];
  plVar10 = (longlong *)FUN_180354f20(extraout_XMM0_Qa,local_d0,local_100);
  fVar6 = DAT_1808ac34c;
  pbVar13 = &DAT_18075c601;
  lVar3 = *plVar10;
  bVar7 = 0x66;
  uVar9 = ~local_100[0];
  do {
    if (((bVar7 == 0x23) && (*pbVar13 == 0x23)) && (pbVar13[1] == 0x23)) {
      pbVar13 = pbVar13 + 2;
      uVar9 = ~local_100[0];
    }
    else {
      uVar9 = uVar9 >> 8 ^
              *(uint *)(&DAT_1806c25c0 + ((ulonglong)(uVar9 & 0xff) ^ (ulonglong)bVar7) * 4);
    }
    bVar7 = *pbVar13;
    pbVar13 = pbVar13 + 1;
  } while (bVar7 != 0);
  fVar14 = (float)~uVar9;
  if (param_2 == '\0') {
    *(undefined4 *)(lVar3 + 0x14) = 0;
    local_d8 = 0xffffffff;
    local_e8 = 0;
    uStack_e0 = 0;
    local_108 = fVar14;
    FUN_18034a380();
    fVar14 = 0.0;
  }
  else {
    if (*(float *)(lVar3 + 0x14) < DAT_1808ac154) {
      *(float *)(lVar3 + 0x14) = *(float *)(lVar3 + 0x14) + *(float *)(DAT_180ca0a50 + 0x40);
      uVar15 = (((((ulonglong)((uint)fVar14 & 0xff) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                 (ulonglong)((uint)fVar14 >> 8 & 0xff)) * 0x100000001b3 ^
                (ulonglong)((uint)fVar14 >> 0x10 & 0xff)) * 0x100000001b3 ^
               (ulonglong)((uint)fVar14 >> 0x18)) * 0x100000001b3 & DAT_181107640;
      lVar11 = *(longlong *)(DAT_181107628 + 8 + uVar15 * 0x10);
      if (lVar11 == DAT_181107618) {
LAB_180347b3b:
        lVar11 = DAT_181107618;
      }
      else {
        fVar18 = *(float *)(lVar11 + 0x10);
        while (fVar14 != fVar18) {
          if (lVar11 == *(longlong *)(DAT_181107628 + uVar15 * 0x10)) goto LAB_180347b3b;
          lVar11 = *(longlong *)(lVar11 + 8);
          fVar18 = *(float *)(lVar11 + 0x10);
        }
        if (lVar11 == 0) goto LAB_180347b3b;
      }
      if (lVar11 == DAT_181107618) {
        return;
      }
      fVar14 = *(float *)(lVar11 + 0x14);
      goto LAB_180347bd3;
    }
    local_d8 = 0xffffffff;
    local_e8 = _DAT_1808ad560;
    uStack_e0 = _UNK_1808ad568;
    local_108 = fVar14;
    FUN_18034a380(_DAT_1808ad560,&local_f8,&local_108,&local_e8);
    fVar14 = fVar6;
  }
  fVar14 = (float)FUN_1802b3660(local_f8 + 0x14,fVar14,DAT_1808ac118,0);
LAB_180347bd3:
  if (0.0 < fVar14) {
    fVar18 = *(float *)(**(longlong **)(DAT_180ca0a50 + 0x2058) + 0x10);
    fVar20 = *(float *)(**(longlong **)(DAT_180ca0a50 + 0x2058) + 0x14);
    if (fVar18 <= DAT_1808ac7ac) {
      fVar21 = 0.0;
    }
    else {
      fVar21 = DAT_1808ac658;
    }
    fVar19 = DAT_1808ac658;
    if (fVar20 <= DAT_1808ac7ac) {
      fVar19 = 0.0;
    }
    fVar18 = fVar18 - fVar21;
    fVar20 = fVar20 - fVar19;
    fVar17 = *(float *)(lVar3 + 0x18) + *param_4 + DAT_1808ac900;
    if (fVar17 <= fVar18) {
      fVar18 = fVar17;
    }
    fVar17 = *(float *)(lVar3 + 0x1c) +
             ((*(float *)(param_3 + 4) + param_4[1]) - *(float *)(lVar3 + 0x1c)) * DAT_1808ac1f4;
    fVar18 = fVar18 - *(float *)(lVar3 + 0x18);
    if (fVar17 <= fVar20) {
      fVar20 = fVar17;
    }
    fVar20 = fVar20 - *(float *)(lVar3 + 0x1c);
    if (fVar21 <= fVar18) {
      fVar21 = fVar18;
    }
    if (fVar20 < fVar19) {
      fVar20 = fVar19;
    }
    FUN_1803d7610(local_c0,0x30,"##presets_tip_%08x",local_100[0]);
    lVar11 = DAT_180ca0a50;
    local_108 = 10.0;
    local_104 = 10.0;
    *(uint *)(DAT_180ca0a50 + 0x1f38) = *(uint *)(DAT_180ca0a50 + 0x1f38) | 1;
    *(float *)(lVar11 + 0x1f4c) = fVar20;
    uVar2 = DAT_1808ac864;
    *(float *)(lVar11 + 0x1f48) = fVar21;
    *(undefined8 *)(lVar11 + 0x1f50) = 0;
    *(undefined4 *)(lVar11 + 0x1f3c) = 1;
    FUN_1803d89a0(2,&local_108);
    local_108 = 8.0;
    local_104 = 10.0;
    FUN_1803d89a0(0xe,&local_108);
    FUN_1803d8870(3,uVar2);
    FUN_1803d8870(4,0);
    FUN_1803d8730(2,0);
    FUN_1803d8730(0,DAT_180960ef8);
    cVar8 = FUN_1803e4f20(local_c0,0,0x203136b);
    FUN_1803d87f0(2);
    FUN_1803d8a40(4);
    lVar11 = DAT_180ca0a50;
    if (cVar8 != '\0') {
      bVar16 = DAT_180cd0fd8 == '\0';
      *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
      lVar11 = *(longlong *)(lVar11 + 0x14f8);
      uVar1 = *(undefined8 *)(lVar11 + 0x28);
      lVar4 = *(longlong *)(lVar11 + 0x2c8);
      local_108 = (float)uVar1 + *(float *)(lVar11 + 0x30);
      local_f8._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
      local_104 = local_f8._4_4_ + *(float *)(lVar11 + 0x34);
      if (bVar16) {
        fVar18 = fVar6;
      }
      else {
        fVar18 = DAT_1809f7440;
      }
      local_120 = DAT_1808ac000;
      if (DAT_1808ac000 <= fVar18) {
        local_120 = fVar18;
      }
      local_120 = fVar6 / local_120;
      local_128 = DAT_180960ee0;
      local_f8 = uVar1;
      FUN_1802b4c40(lVar4,&local_f8,&local_108,uVar2);
      local_f8 = 0x4120000041000000;
      FUN_1803d89a0(0xe,&local_f8);
      FUN_1803d8730(0,DAT_180960ef8);
      lVar11 = DAT_181107a08;
      if (DAT_181107a08 == 0) {
        lVar11 = *(longlong *)(DAT_180ca0a50 + 0x11f0);
      }
      local_f0 = *(undefined4 *)(DAT_180ca0a50 + 0x1204);
      local_ec = *(undefined4 *)(DAT_180ca0a50 + 0x1200);
      local_f8 = *(longlong *)(DAT_180ca0a50 + 0x11f0);
      FUN_1803f6200(DAT_180ca0a50 + 0x1fe0,&local_f8);
      FUN_1803e8680(lVar11,DAT_1808ac930,0);
      FUN_1803297c0(param_5);
      lVar11 = DAT_180ca0a50;
      lVar12 = (longlong)*(int *)(DAT_180ca0a50 + 0x1fe0);
      if (*(int *)(DAT_180ca0a50 + 0x1fe0) < 1) {
        FUN_1803ebc00("Calling PopFont() too many times!");
      }
      else {
        lVar5 = *(longlong *)(DAT_180ca0a50 + 0x1fe8);
        FUN_1803e8680(*(undefined8 *)(lVar5 + -0x10 + lVar12 * 0x10),
                      *(undefined4 *)(lVar5 + -8 + lVar12 * 0x10),
                      *(undefined4 *)(lVar5 + -4 + lVar12 * 0x10));
        *(int *)(lVar11 + 0x1fe0) = *(int *)(lVar11 + 0x1fe0) + -1;
      }
      FUN_1803d87f0(1);
      FUN_1803d8a40(1);
      fVar14 = DAT_1811074e8 * fVar14;
      uVar2 = *(undefined4 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x30);
      *(undefined4 *)(lVar3 + 0x1c) = *(undefined4 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x34);
      *(undefined4 *)(lVar3 + 0x18) = uVar2;
      FUN_1802b3c30(lVar4,0,*(undefined4 *)(lVar4 + 0x20),fVar14);
    }
    FUN_1803e75b0();
  }
  return;
}



/* ===== 180347fa0 FUN_180347fa0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180347fa0(undefined8 param_1,char param_2,longlong param_3,float *param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  byte bVar7;
  char cVar8;
  uint uVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  byte *pbVar13;
  float fVar14;
  ulonglong uVar15;
  bool bVar16;
  float fVar17;
  undefined8 extraout_XMM0_Qa;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  float local_120;
  float local_108;
  float local_104;
  uint local_100 [2];
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined1 local_d0 [16];
  undefined1 local_c0 [48];
  ulonglong local_90;
  
  local_90 = DAT_180919500 ^ (ulonglong)auStack_148;
  uVar9 = FUN_1803e8900(*(undefined8 *)(DAT_180ca0a50 + 0x14f8),"##presets_tip");
  pbVar13 = &DAT_180769cb1;
  uVar15 = 0x72;
  local_100[0] = ~uVar9;
  do {
    if ((((char)uVar15 == '#') && (*pbVar13 == 0x23)) && (pbVar13[1] == 0x23)) {
      pbVar13 = pbVar13 + 2;
      local_100[0] = ~uVar9;
    }
    else {
      local_100[0] = local_100[0] >> 8 ^
                     *(uint *)(&DAT_1806c25c0 + (local_100[0] & 0xff ^ uVar15) * 4);
    }
    bVar7 = *pbVar13;
    uVar15 = (ulonglong)bVar7;
    pbVar13 = pbVar13 + 1;
  } while (bVar7 != 0);
  local_100[0] = ~local_100[0];
  plVar10 = (longlong *)FUN_180354f20(extraout_XMM0_Qa,local_d0,local_100);
  fVar6 = DAT_1808ac34c;
  pbVar13 = &DAT_18075c601;
  lVar3 = *plVar10;
  bVar7 = 0x66;
  uVar9 = ~local_100[0];
  do {
    if (((bVar7 == 0x23) && (*pbVar13 == 0x23)) && (pbVar13[1] == 0x23)) {
      pbVar13 = pbVar13 + 2;
      uVar9 = ~local_100[0];
    }
    else {
      uVar9 = uVar9 >> 8 ^
              *(uint *)(&DAT_1806c25c0 + ((ulonglong)(uVar9 & 0xff) ^ (ulonglong)bVar7) * 4);
    }
    bVar7 = *pbVar13;
    pbVar13 = pbVar13 + 1;
  } while (bVar7 != 0);
  fVar14 = (float)~uVar9;
  if (param_2 == '\0') {
    *(undefined4 *)(lVar3 + 0x14) = 0;
    local_d8 = 0xffffffff;
    local_e8 = 0;
    uStack_e0 = 0;
    local_108 = fVar14;
    FUN_18034a380();
    fVar14 = 0.0;
  }
  else {
    if (*(float *)(lVar3 + 0x14) < DAT_1808ac154) {
      *(float *)(lVar3 + 0x14) = *(float *)(lVar3 + 0x14) + *(float *)(DAT_180ca0a50 + 0x40);
      uVar15 = (((((ulonglong)((uint)fVar14 & 0xff) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                 (ulonglong)((uint)fVar14 >> 8 & 0xff)) * 0x100000001b3 ^
                (ulonglong)((uint)fVar14 >> 0x10 & 0xff)) * 0x100000001b3 ^
               (ulonglong)((uint)fVar14 >> 0x18)) * 0x100000001b3 & DAT_181107640;
      lVar11 = *(longlong *)(DAT_181107628 + 8 + uVar15 * 0x10);
      if (lVar11 == DAT_181107618) {
LAB_18034818b:
        lVar11 = DAT_181107618;
      }
      else {
        fVar18 = *(float *)(lVar11 + 0x10);
        while (fVar14 != fVar18) {
          if (lVar11 == *(longlong *)(DAT_181107628 + uVar15 * 0x10)) goto LAB_18034818b;
          lVar11 = *(longlong *)(lVar11 + 8);
          fVar18 = *(float *)(lVar11 + 0x10);
        }
        if (lVar11 == 0) goto LAB_18034818b;
      }
      if (lVar11 == DAT_181107618) {
        return;
      }
      fVar14 = *(float *)(lVar11 + 0x14);
      goto LAB_180348223;
    }
    local_d8 = 0xffffffff;
    local_e8 = _DAT_1808ad560;
    uStack_e0 = _UNK_1808ad568;
    local_108 = fVar14;
    FUN_18034a380(_DAT_1808ad560,&local_f8,&local_108,&local_e8);
    fVar14 = fVar6;
  }
  fVar14 = (float)FUN_1802b3660(local_f8 + 0x14,fVar14,DAT_1808ac118,0);
LAB_180348223:
  if (0.0 < fVar14) {
    fVar18 = *(float *)(**(longlong **)(DAT_180ca0a50 + 0x2058) + 0x10);
    fVar20 = *(float *)(**(longlong **)(DAT_180ca0a50 + 0x2058) + 0x14);
    if (fVar18 <= DAT_1808ac7ac) {
      fVar21 = 0.0;
    }
    else {
      fVar21 = DAT_1808ac658;
    }
    fVar19 = DAT_1808ac658;
    if (fVar20 <= DAT_1808ac7ac) {
      fVar19 = 0.0;
    }
    fVar18 = fVar18 - fVar21;
    fVar20 = fVar20 - fVar19;
    fVar17 = *(float *)(lVar3 + 0x18) + *param_4 + DAT_1808ac900;
    if (fVar17 <= fVar18) {
      fVar18 = fVar17;
    }
    fVar17 = *(float *)(lVar3 + 0x1c) +
             ((*(float *)(param_3 + 4) + param_4[1]) - *(float *)(lVar3 + 0x1c)) * DAT_1808ac1f4;
    fVar18 = fVar18 - *(float *)(lVar3 + 0x18);
    if (fVar17 <= fVar20) {
      fVar20 = fVar17;
    }
    fVar20 = fVar20 - *(float *)(lVar3 + 0x1c);
    if (fVar21 <= fVar18) {
      fVar21 = fVar18;
    }
    if (fVar20 < fVar19) {
      fVar20 = fVar19;
    }
    FUN_1803d7610(local_c0,0x30,"##presets_tip_%08x",local_100[0]);
    lVar11 = DAT_180ca0a50;
    local_108 = 10.0;
    local_104 = 10.0;
    *(uint *)(DAT_180ca0a50 + 0x1f38) = *(uint *)(DAT_180ca0a50 + 0x1f38) | 1;
    *(float *)(lVar11 + 0x1f4c) = fVar20;
    uVar2 = DAT_1808ac864;
    *(float *)(lVar11 + 0x1f48) = fVar21;
    *(undefined8 *)(lVar11 + 0x1f50) = 0;
    *(undefined4 *)(lVar11 + 0x1f3c) = 1;
    FUN_1803d89a0(2,&local_108);
    local_108 = 8.0;
    local_104 = 10.0;
    FUN_1803d89a0(0xe,&local_108);
    FUN_1803d8870(3,uVar2);
    FUN_1803d8870(4,0);
    FUN_1803d8730(2,0);
    FUN_1803d8730(0,DAT_180960ef8);
    cVar8 = FUN_1803e4f20(local_c0,0,0x203136b);
    FUN_1803d87f0(2);
    FUN_1803d8a40(4);
    lVar11 = DAT_180ca0a50;
    if (cVar8 != '\0') {
      bVar16 = DAT_180cd0fd8 == '\0';
      *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
      lVar11 = *(longlong *)(lVar11 + 0x14f8);
      uVar1 = *(undefined8 *)(lVar11 + 0x28);
      lVar4 = *(longlong *)(lVar11 + 0x2c8);
      local_108 = (float)uVar1 + *(float *)(lVar11 + 0x30);
      local_f8._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
      local_104 = local_f8._4_4_ + *(float *)(lVar11 + 0x34);
      if (bVar16) {
        fVar18 = fVar6;
      }
      else {
        fVar18 = DAT_1809f7440;
      }
      local_120 = DAT_1808ac000;
      if (DAT_1808ac000 <= fVar18) {
        local_120 = fVar18;
      }
      local_120 = fVar6 / local_120;
      local_128 = DAT_180960ee0;
      local_f8 = uVar1;
      FUN_1802b4c40(lVar4,&local_f8,&local_108,uVar2);
      local_f8 = 0x4120000041000000;
      FUN_1803d89a0(0xe,&local_f8);
      FUN_1803d8730(0,DAT_180960ef8);
      lVar11 = DAT_181107a08;
      if (DAT_181107a08 == 0) {
        lVar11 = *(longlong *)(DAT_180ca0a50 + 0x11f0);
      }
      local_f0 = *(undefined4 *)(DAT_180ca0a50 + 0x1204);
      local_ec = *(undefined4 *)(DAT_180ca0a50 + 0x1200);
      local_f8 = *(longlong *)(DAT_180ca0a50 + 0x11f0);
      FUN_1803f6200(DAT_180ca0a50 + 0x1fe0,&local_f8);
      FUN_1803e8680(lVar11,DAT_1808ac930,0);
      FUN_18032af80(param_5);
      lVar11 = DAT_180ca0a50;
      lVar12 = (longlong)*(int *)(DAT_180ca0a50 + 0x1fe0);
      if (*(int *)(DAT_180ca0a50 + 0x1fe0) < 1) {
        FUN_1803ebc00("Calling PopFont() too many times!");
      }
      else {
        lVar5 = *(longlong *)(DAT_180ca0a50 + 0x1fe8);
        FUN_1803e8680(*(undefined8 *)(lVar5 + -0x10 + lVar12 * 0x10),
                      *(undefined4 *)(lVar5 + -8 + lVar12 * 0x10),
                      *(undefined4 *)(lVar5 + -4 + lVar12 * 0x10));
        *(int *)(lVar11 + 0x1fe0) = *(int *)(lVar11 + 0x1fe0) + -1;
      }
      FUN_1803d87f0(1);
      FUN_1803d8a40(1);
      fVar14 = DAT_1811074e8 * fVar14;
      uVar2 = *(undefined4 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x30);
      *(undefined4 *)(lVar3 + 0x1c) = *(undefined4 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x34);
      *(undefined4 *)(lVar3 + 0x18) = uVar2;
      FUN_1802b3c30(lVar4,0,*(undefined4 *)(lVar4 + 0x20),fVar14);
    }
    FUN_1803e75b0();
  }
  return;
}



/* ===== 1803485f0 FUN_1803485f0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1803485f0(undefined8 param_1,char param_2,longlong param_3,float *param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  char cVar7;
  uint uVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  byte *pbVar12;
  byte bVar13;
  float fVar14;
  char *pcVar15;
  ulonglong uVar16;
  bool bVar17;
  float fVar18;
  undefined8 extraout_XMM0_Qa;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  float local_120;
  float local_108;
  float local_104;
  uint local_100 [2];
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined1 local_d0 [16];
  undefined1 local_c0 [48];
  ulonglong local_90;
  
  local_90 = DAT_180919500 ^ (ulonglong)auStack_148;
  uVar8 = FUN_1803e8900(*(undefined8 *)(DAT_180ca0a50 + 0x14f8),"##presets_tip");
  pcVar15 = "prebuilt";
  bVar13 = 0x70;
  local_100[0] = ~uVar8;
  do {
    pcVar15 = pcVar15 + 1;
    if (((bVar13 == 0x23) && (*pcVar15 == 0x23)) && (pcVar15[1] == 0x23)) {
      pcVar15 = pcVar15 + 2;
      local_100[0] = ~uVar8;
    }
    else {
      local_100[0] = local_100[0] >> 8 ^
                     *(uint *)(&DAT_1806c25c0 +
                              ((ulonglong)(local_100[0] & 0xff) ^ (ulonglong)bVar13) * 4);
    }
    bVar13 = *pcVar15;
  } while (bVar13 != 0);
  local_100[0] = ~local_100[0];
  plVar9 = (longlong *)FUN_180354f20(extraout_XMM0_Qa,local_d0,local_100);
  fVar6 = DAT_1808ac34c;
  pbVar12 = &DAT_18075c601;
  lVar3 = *plVar9;
  bVar13 = 0x66;
  uVar8 = ~local_100[0];
  do {
    if (((bVar13 == 0x23) && (*pbVar12 == 0x23)) && (pbVar12[1] == 0x23)) {
      pbVar12 = pbVar12 + 2;
      uVar8 = ~local_100[0];
    }
    else {
      uVar8 = uVar8 >> 8 ^
              *(uint *)(&DAT_1806c25c0 + ((ulonglong)(uVar8 & 0xff) ^ (ulonglong)bVar13) * 4);
    }
    bVar13 = *pbVar12;
    pbVar12 = pbVar12 + 1;
  } while (bVar13 != 0);
  fVar14 = (float)~uVar8;
  if (param_2 == '\0') {
    *(undefined4 *)(lVar3 + 0x14) = 0;
    local_d8 = 0xffffffff;
    local_e8 = 0;
    uStack_e0 = 0;
    local_108 = fVar14;
    FUN_18034a380();
    fVar14 = 0.0;
  }
  else {
    if (*(float *)(lVar3 + 0x14) < DAT_1808ac154) {
      *(float *)(lVar3 + 0x14) = *(float *)(lVar3 + 0x14) + *(float *)(DAT_180ca0a50 + 0x40);
      uVar16 = (((((ulonglong)((uint)fVar14 & 0xff) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                 (ulonglong)((uint)fVar14 >> 8 & 0xff)) * 0x100000001b3 ^
                (ulonglong)((uint)fVar14 >> 0x10 & 0xff)) * 0x100000001b3 ^
               (ulonglong)((uint)fVar14 >> 0x18)) * 0x100000001b3 & DAT_181107640;
      lVar10 = *(longlong *)(DAT_181107628 + 8 + uVar16 * 0x10);
      if (lVar10 == DAT_181107618) {
LAB_1803487db:
        lVar10 = DAT_181107618;
      }
      else {
        fVar19 = *(float *)(lVar10 + 0x10);
        while (fVar14 != fVar19) {
          if (lVar10 == *(longlong *)(DAT_181107628 + uVar16 * 0x10)) goto LAB_1803487db;
          lVar10 = *(longlong *)(lVar10 + 8);
          fVar19 = *(float *)(lVar10 + 0x10);
        }
        if (lVar10 == 0) goto LAB_1803487db;
      }
      if (lVar10 == DAT_181107618) {
        return;
      }
      fVar14 = *(float *)(lVar10 + 0x14);
      goto LAB_180348873;
    }
    local_d8 = 0xffffffff;
    local_e8 = _DAT_1808ad560;
    uStack_e0 = _UNK_1808ad568;
    local_108 = fVar14;
    FUN_18034a380(_DAT_1808ad560,&local_f8,&local_108,&local_e8);
    fVar14 = fVar6;
  }
  fVar14 = (float)FUN_1802b3660(local_f8 + 0x14,fVar14,DAT_1808ac118,0);
LAB_180348873:
  if (0.0 < fVar14) {
    fVar19 = *(float *)(**(longlong **)(DAT_180ca0a50 + 0x2058) + 0x10);
    fVar21 = *(float *)(**(longlong **)(DAT_180ca0a50 + 0x2058) + 0x14);
    if (fVar19 <= DAT_1808ac7ac) {
      fVar22 = 0.0;
    }
    else {
      fVar22 = DAT_1808ac658;
    }
    fVar20 = DAT_1808ac658;
    if (fVar21 <= DAT_1808ac7ac) {
      fVar20 = 0.0;
    }
    fVar19 = fVar19 - fVar22;
    fVar21 = fVar21 - fVar20;
    fVar18 = *(float *)(lVar3 + 0x18) + *param_4 + DAT_1808ac900;
    if (fVar18 <= fVar19) {
      fVar19 = fVar18;
    }
    fVar18 = *(float *)(lVar3 + 0x1c) +
             ((*(float *)(param_3 + 4) + param_4[1]) - *(float *)(lVar3 + 0x1c)) * DAT_1808ac1f4;
    fVar19 = fVar19 - *(float *)(lVar3 + 0x18);
    if (fVar18 <= fVar21) {
      fVar21 = fVar18;
    }
    fVar21 = fVar21 - *(float *)(lVar3 + 0x1c);
    if (fVar22 <= fVar19) {
      fVar22 = fVar19;
    }
    if (fVar21 < fVar20) {
      fVar21 = fVar20;
    }
    FUN_1803d7610(local_c0,0x30,"##presets_tip_%08x",local_100[0]);
    lVar10 = DAT_180ca0a50;
    local_108 = 10.0;
    local_104 = 10.0;
    *(uint *)(DAT_180ca0a50 + 0x1f38) = *(uint *)(DAT_180ca0a50 + 0x1f38) | 1;
    *(float *)(lVar10 + 0x1f4c) = fVar21;
    uVar2 = DAT_1808ac864;
    *(float *)(lVar10 + 0x1f48) = fVar22;
    *(undefined8 *)(lVar10 + 0x1f50) = 0;
    *(undefined4 *)(lVar10 + 0x1f3c) = 1;
    FUN_1803d89a0(2,&local_108);
    local_108 = 8.0;
    local_104 = 10.0;
    FUN_1803d89a0(0xe,&local_108);
    FUN_1803d8870(3,uVar2);
    FUN_1803d8870(4,0);
    FUN_1803d8730(2,0);
    FUN_1803d8730(0,DAT_180960ef8);
    cVar7 = FUN_1803e4f20(local_c0,0,0x203136b);
    FUN_1803d87f0(2);
    FUN_1803d8a40(4);
    lVar10 = DAT_180ca0a50;
    if (cVar7 != '\0') {
      bVar17 = DAT_180cd0fd8 == '\0';
      *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
      lVar10 = *(longlong *)(lVar10 + 0x14f8);
      uVar1 = *(undefined8 *)(lVar10 + 0x28);
      lVar4 = *(longlong *)(lVar10 + 0x2c8);
      local_108 = (float)uVar1 + *(float *)(lVar10 + 0x30);
      local_f8._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
      local_104 = local_f8._4_4_ + *(float *)(lVar10 + 0x34);
      if (bVar17) {
        fVar19 = fVar6;
      }
      else {
        fVar19 = DAT_1809f7440;
      }
      local_120 = DAT_1808ac000;
      if (DAT_1808ac000 <= fVar19) {
        local_120 = fVar19;
      }
      local_120 = fVar6 / local_120;
      local_128 = DAT_180960ee0;
      local_f8 = uVar1;
      FUN_1802b4c40(lVar4,&local_f8,&local_108,uVar2);
      local_f8 = 0x4120000041000000;
      FUN_1803d89a0(0xe,&local_f8);
      FUN_1803d8730(0,DAT_180960ef8);
      lVar10 = DAT_181107a08;
      if (DAT_181107a08 == 0) {
        lVar10 = *(longlong *)(DAT_180ca0a50 + 0x11f0);
      }
      local_f0 = *(undefined4 *)(DAT_180ca0a50 + 0x1204);
      local_ec = *(undefined4 *)(DAT_180ca0a50 + 0x1200);
      local_f8 = *(longlong *)(DAT_180ca0a50 + 0x11f0);
      FUN_1803f6200(DAT_180ca0a50 + 0x1fe0,&local_f8);
      FUN_1803e8680(lVar10,DAT_1808ac930,0);
      FUN_180414370("Prebuilt tooltip goes here...",0,1);
      lVar10 = DAT_180ca0a50;
      lVar11 = (longlong)*(int *)(DAT_180ca0a50 + 0x1fe0);
      if (*(int *)(DAT_180ca0a50 + 0x1fe0) < 1) {
        FUN_1803ebc00("Calling PopFont() too many times!");
      }
      else {
        lVar5 = *(longlong *)(DAT_180ca0a50 + 0x1fe8);
        FUN_1803e8680(*(undefined8 *)(lVar5 + -0x10 + lVar11 * 0x10),
                      *(undefined4 *)(lVar5 + -8 + lVar11 * 0x10),
                      *(undefined4 *)(lVar5 + -4 + lVar11 * 0x10));
        *(int *)(lVar10 + 0x1fe0) = *(int *)(lVar10 + 0x1fe0) + -1;
      }
      FUN_1803d87f0(1);
      FUN_1803d8a40(1);
      fVar14 = DAT_1811074e8 * fVar14;
      uVar2 = *(undefined4 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x30);
      *(undefined4 *)(lVar3 + 0x1c) = *(undefined4 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x34);
      *(undefined4 *)(lVar3 + 0x18) = uVar2;
      FUN_1802b3c30(lVar4,0,*(undefined4 *)(lVar4 + 0x20),fVar14);
    }
    FUN_1803e75b0();
  }
  return;
}



/* ===== 180348c40 FUN_180348c40 ===== */

ulonglong FUN_180348c40(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  size_t _Size;
  int iVar2;
  ulonglong uVar3;
  undefined4 extraout_var;
  undefined8 *_Buf1;
  undefined8 *_Buf2;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar1 = (undefined8 *)param_1[1];
  puVar4 = (undefined8 *)*param_1;
  puVar5 = (undefined8 *)*param_2;
  uVar3 = (longlong)puVar1 - (longlong)puVar4;
  if (uVar3 != param_2[1] - (longlong)puVar5) {
LAB_180348cb5:
    return uVar3 & 0xffffffffffffff00;
  }
  if (puVar4 != puVar1) {
    while( true ) {
      if ((ulonglong)puVar5[3] < 0x10) {
        _Buf2 = puVar5;
      }
      else {
        _Buf2 = (undefined8 *)*puVar5;
      }
      _Size = puVar4[2];
      if ((ulonglong)puVar4[3] < 0x10) {
        _Buf1 = puVar4;
      }
      else {
        _Buf1 = (undefined8 *)*puVar4;
      }
      if (_Size != puVar5[2]) goto LAB_180348cb5;
      if (_Size != 0) {
        iVar2 = memcmp(_Buf1,_Buf2,_Size);
        uVar3 = CONCAT44(extraout_var,iVar2);
        if (iVar2 != 0) goto LAB_180348cb5;
      }
      puVar4 = puVar4 + 4;
      if (puVar4 == puVar1) break;
      puVar5 = puVar5 + 4;
    }
  }
  return CONCAT71((int7)(uVar3 >> 8),1);
}



/* ===== 180348ce0 FUN_180348ce0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180348ce0(undefined8 param_1,char param_2,longlong param_3,float *param_4,longlong *param_5
                  )

{
  undefined8 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  byte bVar7;
  char cVar8;
  uint uVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  float fVar13;
  byte *pbVar14;
  ulonglong uVar15;
  bool bVar16;
  float fVar17;
  undefined8 extraout_XMM0_Qa;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  float local_120;
  float local_108;
  float local_104;
  uint local_100 [2];
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined1 local_d0 [16];
  undefined1 local_c0 [48];
  ulonglong local_90;
  
  local_90 = DAT_180919500 ^ (ulonglong)auStack_148;
  uVar9 = FUN_1803e8900(*(undefined8 *)(DAT_180ca0a50 + 0x14f8),"##presets_tip");
  pbVar14 = &DAT_18076a475;
  uVar15 = 0x77;
  local_100[0] = ~uVar9;
  do {
    if ((((char)uVar15 == '#') && (*pbVar14 == 0x23)) && (pbVar14[1] == 0x23)) {
      pbVar14 = pbVar14 + 2;
      local_100[0] = ~uVar9;
    }
    else {
      local_100[0] = local_100[0] >> 8 ^
                     *(uint *)(&DAT_1806c25c0 + (local_100[0] & 0xff ^ uVar15) * 4);
    }
    bVar7 = *pbVar14;
    uVar15 = (ulonglong)bVar7;
    pbVar14 = pbVar14 + 1;
  } while (bVar7 != 0);
  local_100[0] = ~local_100[0];
  plVar10 = (longlong *)FUN_180354f20(extraout_XMM0_Qa,local_d0,local_100);
  fVar6 = DAT_1808ac34c;
  pbVar14 = &DAT_18075c601;
  lVar3 = *plVar10;
  bVar7 = 0x66;
  uVar9 = ~local_100[0];
  do {
    if (((bVar7 == 0x23) && (*pbVar14 == 0x23)) && (pbVar14[1] == 0x23)) {
      pbVar14 = pbVar14 + 2;
      uVar9 = ~local_100[0];
    }
    else {
      uVar9 = uVar9 >> 8 ^
              *(uint *)(&DAT_1806c25c0 + ((ulonglong)(uVar9 & 0xff) ^ (ulonglong)bVar7) * 4);
    }
    bVar7 = *pbVar14;
    pbVar14 = pbVar14 + 1;
  } while (bVar7 != 0);
  fVar13 = (float)~uVar9;
  if (param_2 == '\0') {
    *(undefined4 *)(lVar3 + 0x14) = 0;
    local_d8 = 0xffffffff;
    local_e8 = 0;
    uStack_e0 = 0;
    local_108 = fVar13;
    FUN_18034a380();
    fVar13 = 0.0;
  }
  else {
    if (*(float *)(lVar3 + 0x14) < DAT_1808ac154) {
      *(float *)(lVar3 + 0x14) = *(float *)(lVar3 + 0x14) + *(float *)(DAT_180ca0a50 + 0x40);
      uVar15 = (((((ulonglong)((uint)fVar13 & 0xff) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                 (ulonglong)((uint)fVar13 >> 8 & 0xff)) * 0x100000001b3 ^
                (ulonglong)((uint)fVar13 >> 0x10 & 0xff)) * 0x100000001b3 ^
               (ulonglong)((uint)fVar13 >> 0x18)) * 0x100000001b3 & DAT_181107640;
      lVar11 = *(longlong *)(DAT_181107628 + 8 + uVar15 * 0x10);
      if (lVar11 == DAT_181107618) {
LAB_180348ecb:
        lVar11 = DAT_181107618;
      }
      else {
        fVar18 = *(float *)(lVar11 + 0x10);
        while (fVar13 != fVar18) {
          if (lVar11 == *(longlong *)(DAT_181107628 + uVar15 * 0x10)) goto LAB_180348ecb;
          lVar11 = *(longlong *)(lVar11 + 8);
          fVar18 = *(float *)(lVar11 + 0x10);
        }
        if (lVar11 == 0) goto LAB_180348ecb;
      }
      if (lVar11 == DAT_181107618) {
        return;
      }
      fVar13 = *(float *)(lVar11 + 0x14);
      goto LAB_180348f63;
    }
    local_d8 = 0xffffffff;
    local_e8 = _DAT_1808ad560;
    uStack_e0 = _UNK_1808ad568;
    local_108 = fVar13;
    FUN_18034a380(_DAT_1808ad560,&local_f8,&local_108,&local_e8);
    fVar13 = fVar6;
  }
  fVar13 = (float)FUN_1802b3660(local_f8 + 0x14,fVar13,DAT_1808ac118,0);
LAB_180348f63:
  if (0.0 < fVar13) {
    fVar18 = *(float *)(**(longlong **)(DAT_180ca0a50 + 0x2058) + 0x10);
    fVar20 = *(float *)(**(longlong **)(DAT_180ca0a50 + 0x2058) + 0x14);
    if (fVar18 <= DAT_1808ac7ac) {
      fVar21 = 0.0;
    }
    else {
      fVar21 = DAT_1808ac658;
    }
    fVar19 = DAT_1808ac658;
    if (fVar20 <= DAT_1808ac7ac) {
      fVar19 = 0.0;
    }
    fVar18 = fVar18 - fVar21;
    fVar20 = fVar20 - fVar19;
    fVar17 = *(float *)(lVar3 + 0x18) + *param_4 + DAT_1808ac900;
    if (fVar17 <= fVar18) {
      fVar18 = fVar17;
    }
    fVar17 = *(float *)(lVar3 + 0x1c) +
             ((*(float *)(param_3 + 4) + param_4[1]) - *(float *)(lVar3 + 0x1c)) * DAT_1808ac1f4;
    fVar18 = fVar18 - *(float *)(lVar3 + 0x18);
    if (fVar17 <= fVar20) {
      fVar20 = fVar17;
    }
    fVar20 = fVar20 - *(float *)(lVar3 + 0x1c);
    if (fVar21 <= fVar18) {
      fVar21 = fVar18;
    }
    if (fVar20 < fVar19) {
      fVar20 = fVar19;
    }
    FUN_1803d7610(local_c0,0x30,"##presets_tip_%08x",local_100[0]);
    lVar11 = DAT_180ca0a50;
    local_108 = 10.0;
    local_104 = 10.0;
    *(uint *)(DAT_180ca0a50 + 0x1f38) = *(uint *)(DAT_180ca0a50 + 0x1f38) | 1;
    *(float *)(lVar11 + 0x1f4c) = fVar20;
    uVar2 = DAT_1808ac864;
    *(float *)(lVar11 + 0x1f48) = fVar21;
    *(undefined8 *)(lVar11 + 0x1f50) = 0;
    *(undefined4 *)(lVar11 + 0x1f3c) = 1;
    FUN_1803d89a0(2,&local_108);
    local_108 = 8.0;
    local_104 = 10.0;
    FUN_1803d89a0(0xe,&local_108);
    FUN_1803d8870(3,uVar2);
    FUN_1803d8870(4,0);
    FUN_1803d8730(2,0);
    FUN_1803d8730(0,DAT_180960ef8);
    cVar8 = FUN_1803e4f20(local_c0,0,0x203136b);
    FUN_1803d87f0(2);
    FUN_1803d8a40(4);
    lVar11 = DAT_180ca0a50;
    if (cVar8 != '\0') {
      bVar16 = DAT_180cd0fd8 == '\0';
      *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
      lVar11 = *(longlong *)(lVar11 + 0x14f8);
      uVar1 = *(undefined8 *)(lVar11 + 0x28);
      lVar4 = *(longlong *)(lVar11 + 0x2c8);
      local_108 = (float)uVar1 + *(float *)(lVar11 + 0x30);
      local_f8._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
      local_104 = local_f8._4_4_ + *(float *)(lVar11 + 0x34);
      if (bVar16) {
        fVar18 = fVar6;
      }
      else {
        fVar18 = DAT_1809f7440;
      }
      local_120 = DAT_1808ac000;
      if (DAT_1808ac000 <= fVar18) {
        local_120 = fVar18;
      }
      local_120 = fVar6 / local_120;
      local_128 = DAT_180960ee0;
      local_f8 = uVar1;
      FUN_1802b4c40(lVar4,&local_f8,&local_108,uVar2);
      local_f8 = 0x4120000041000000;
      FUN_1803d89a0(0xe,&local_f8);
      FUN_1803d8730(0,DAT_180960ef8);
      lVar11 = DAT_181107a08;
      if (DAT_181107a08 == 0) {
        lVar11 = *(longlong *)(DAT_180ca0a50 + 0x11f0);
      }
      local_f0 = *(undefined4 *)(DAT_180ca0a50 + 0x1204);
      local_ec = *(undefined4 *)(DAT_180ca0a50 + 0x1200);
      local_f8 = *(longlong *)(DAT_180ca0a50 + 0x11f0);
      FUN_1803f6200(DAT_180ca0a50 + 0x1fe0,&local_f8);
      FUN_1803e8680(lVar11,DAT_1808ac930,0);
      FUN_1803d8730(0,DAT_180960ec8);
      if (0xf < (ulonglong)((longlong *)*param_5)[3]) {
        param_5 = (longlong *)*param_5;
      }
      FUN_180414370(*param_5,0,1);
      FUN_1803d87f0(1);
      lVar11 = DAT_180ca0a50;
      lVar12 = (longlong)*(int *)(DAT_180ca0a50 + 0x1fe0);
      if (*(int *)(DAT_180ca0a50 + 0x1fe0) < 1) {
        FUN_1803ebc00("Calling PopFont() too many times!");
      }
      else {
        lVar5 = *(longlong *)(DAT_180ca0a50 + 0x1fe8);
        FUN_1803e8680(*(undefined8 *)(lVar5 + -0x10 + lVar12 * 0x10),
                      *(undefined4 *)(lVar5 + -8 + lVar12 * 0x10),
                      *(undefined4 *)(lVar5 + -4 + lVar12 * 0x10));
        *(int *)(lVar11 + 0x1fe0) = *(int *)(lVar11 + 0x1fe0) + -1;
      }
      FUN_1803d87f0(1);
      FUN_1803d8a40(1);
      fVar13 = DAT_1811074e8 * fVar13;
      uVar2 = *(undefined4 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x30);
      *(undefined4 *)(lVar3 + 0x1c) = *(undefined4 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x34);
      *(undefined4 *)(lVar3 + 0x18) = uVar2;
      FUN_1802b3c30(lVar4,0,*(undefined4 *)(lVar4 + 0x20),fVar13);
    }
    FUN_1803e75b0();
  }
  return;
}



/* ===== 180349350 FUN_180349350 ===== */

undefined8 FUN_180349350(undefined8 param_1,byte *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  ulonglong uVar6;
  
  lVar3 = DAT_180ca18d8;
  plVar4 = DAT_180ca18c8;
  uVar6 = DAT_180ca18f0 &
          (((((((((ulonglong)*param_2 ^ 0xcbf29ce484222325) * 0x100000001b3 ^ (ulonglong)param_2[1])
                * 0x100000001b3 ^ (ulonglong)param_2[2]) * 0x100000001b3 ^ (ulonglong)param_2[3]) *
              0x100000001b3 ^ (ulonglong)param_2[4]) * 0x100000001b3 ^ (ulonglong)param_2[5]) *
            0x100000001b3 ^ (ulonglong)param_2[6]) * 0x100000001b3 ^ (ulonglong)param_2[7]) *
          0x100000001b3;
  plVar5 = *(longlong **)(DAT_180ca18d8 + 8 + uVar6 * 0x10);
  if (plVar5 == DAT_180ca18c8) {
LAB_180349414:
    plVar5 = (longlong *)0x0;
  }
  else {
    lVar1 = plVar5[2];
    while (*(longlong *)param_2 != lVar1) {
      if (plVar5 == *(longlong **)(DAT_180ca18d8 + uVar6 * 0x10)) goto LAB_180349414;
      plVar5 = (longlong *)plVar5[1];
      lVar1 = plVar5[2];
    }
  }
  if (plVar5 == (longlong *)0x0) {
    return 0;
  }
  plVar2 = *(longlong **)(DAT_180ca18d8 + uVar6 * 0x10);
  if (*(longlong **)(DAT_180ca18d8 + 8 + uVar6 * 0x10) == plVar5) {
    if (plVar2 == plVar5) {
      *(longlong **)(DAT_180ca18d8 + uVar6 * 0x10) = DAT_180ca18c8;
      *(longlong **)(lVar3 + 8 + uVar6 * 0x10) = plVar4;
    }
    else {
      *(longlong *)(DAT_180ca18d8 + 8 + uVar6 * 0x10) = plVar5[1];
    }
  }
  else if (plVar2 == plVar5) {
    *(longlong *)(DAT_180ca18d8 + uVar6 * 0x10) = *plVar5;
  }
  lVar3 = *plVar5;
  DAT_180ca18d0 = DAT_180ca18d0 + -1;
  *(longlong *)plVar5[1] = lVar3;
  *(longlong *)(lVar3 + 8) = plVar5[1];
  thunk_FUN_1803d64e0(plVar5,0x20);
  return 1;
}



/* ===== 180349490 FUN_180349490 ===== */

void FUN_180349490(longlong *param_1)

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
  for (; lVar3 != lVar2; lVar3 = lVar3 + 0x60) {
    FUN_18000f890(lVar3 + 0x40);
    FUN_18000f890(lVar3 + 0x20);
    FUN_18000f890(lVar3);
  }
  lVar3 = *param_1;
  lVar2 = lVar3;
  if (0xfff < (ulonglong)((param_1[2] - lVar3 >> 5) << 5)) {
    lVar2 = *(longlong *)(lVar3 + -8);
    if ((lVar3 - lVar2) - 8U < 0x20) goto LAB_18034952d;
    lVar2 = 5;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar4 = auStack_20;
  }
  puVar5 = puVar4;
LAB_18034952d:
  *(undefined8 *)(puVar5 + -8) = 0x180349535;
  thunk_FUN_1803d64e0(lVar2);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* ===== 180349560 FUN_180349560 ===== */

void FUN_180349560(longlong *param_1)

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
  for (; lVar3 != lVar2; lVar3 = lVar3 + 0x50) {
    FUN_18034fab0(lVar3 + 0x38);
    FUN_1800288b0(lVar3 + 0x20);
    FUN_18000f890(lVar3);
  }
  lVar3 = *param_1;
  lVar2 = lVar3;
  if (0xfff < (ulonglong)((param_1[2] - lVar3 >> 4) << 4)) {
    lVar2 = *(longlong *)(lVar3 + -8);
    if ((lVar3 - lVar2) - 8U < 0x20) goto LAB_1803495fd;
    lVar2 = 5;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar4 = auStack_20;
  }
  puVar5 = puVar4;
LAB_1803495fd:
  *(undefined8 *)(puVar5 + -8) = 0x180349605;
  thunk_FUN_1803d64e0(lVar2);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* ===== 180349620 FUN_180349620 ===== */

longlong * FUN_180349620(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (param_1 != param_2) {
    plVar1 = (longlong *)param_1[7];
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_1);
      param_1[7] = 0;
    }
    plVar1 = (longlong *)param_2[7];
    if (plVar1 != (longlong *)0x0) {
      if (plVar1 == param_2) {
        lVar2 = (**(code **)(*plVar1 + 8))(plVar1,param_1);
        param_1[7] = lVar2;
        plVar1 = (longlong *)param_2[7];
        if (plVar1 == (longlong *)0x0) {
          return param_1;
        }
        (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_2);
      }
      else {
        param_1[7] = (longlong)plVar1;
      }
      param_2[7] = 0;
    }
  }
  return param_1;
}



/* ===== 1803496a0 FUN_1803496a0 ===== */

void FUN_1803496a0(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1 == *(undefined8 **)(param_1 + 0x10)) {
    FUN_180353770(param_1,puVar1,param_2);
    return;
  }
  *puVar1 = *param_2;
  uVar2 = param_2[3];
  uVar3 = param_2[2];
  uVar4 = param_2[1];
  param_2[3] = 0;
  param_2[2] = 0;
  param_2[1] = 0;
  puVar1[1] = uVar4;
  puVar1[2] = uVar3;
  puVar1[3] = uVar2;
  *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  return;
}



/* ===== 1803496f0 FUN_1803496f0 ===== */

void FUN_1803496f0(longlong *param_1)

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
  for (; lVar3 != lVar2; lVar3 = lVar3 + 0x20) {
    FUN_18030f490(lVar3);
  }
  lVar3 = *param_1;
  if (0xfff < (param_1[2] - lVar3 & 0xffffffffffffffe0U)) {
    lVar2 = *(longlong *)(lVar3 + -8);
    if ((lVar3 - lVar2) - 8U < 0x20) goto LAB_180349761;
    pcVar1 = (code *)swi(0x29);
    lVar3 = (*pcVar1)(5);
    puVar4 = auStack_20;
  }
  lVar2 = lVar3;
  puVar5 = puVar4;
LAB_180349761:
  *(undefined8 *)(puVar5 + -8) = 0x180349766;
  thunk_FUN_1803d64e0(lVar2);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* ===== 180349780 FUN_180349780 ===== */

void FUN_180349780(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 8);
  if (lVar4 == *(longlong *)(param_1 + 0x10)) {
    FUN_180353920(param_1,lVar4,param_2);
    return;
  }
  FUN_180359720();
  uVar1 = *(undefined8 *)(param_2 + 0xf0);
  uVar2 = *(undefined8 *)(param_2 + 0xe8);
  uVar3 = *(undefined8 *)(param_2 + 0xf8);
  *(undefined8 *)(param_2 + 0xf8) = 0;
  *(undefined8 *)(param_2 + 0xf0) = 0;
  *(undefined8 *)(param_2 + 0xe8) = 0;
  *(undefined8 *)(lVar4 + 0xe8) = uVar2;
  *(undefined8 *)(lVar4 + 0xf0) = uVar1;
  *(undefined8 *)(lVar4 + 0xf8) = uVar3;
  *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x100;
  return;
}



/* ===== 180349800 FUN_180349800 ===== */

void FUN_180349800(longlong *param_1)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  if (*param_1 == 0) {
    return;
  }
  FUN_1803551e0(*param_1,param_1[1]);
  puVar4 = auStack_28;
  puVar5 = auStack_28;
  lVar2 = *param_1;
  if (0xfff < (param_1[2] - lVar2 & 0xffffffffffffff00U)) {
    lVar3 = *(longlong *)(lVar2 + -8);
    if ((lVar2 - lVar3) - 8U < 0x20) goto LAB_180349855;
    pcVar1 = (code *)swi(0x29);
    lVar2 = (*pcVar1)(5);
    puVar4 = auStack_20;
  }
  lVar3 = lVar2;
  puVar5 = puVar4;
LAB_180349855:
  *(undefined8 *)(puVar5 + -8) = 0x18034985a;
  thunk_FUN_1803d64e0(lVar3);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* ===== 180349870 FUN_180349870 ===== */

void FUN_180349870(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 8) == *(longlong *)(param_1 + 0x10)) {
    FUN_180353ad0(param_1,*(longlong *)(param_1 + 8),param_2);
    return;
  }
  FUN_180359720();
  *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0xe8;
  return;
}



/* ===== 1803498b0 FUN_1803498b0 ===== */

void FUN_1803498b0(ulonglong *param_1)

{
  code *pcVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  if (*param_1 == 0) {
    return;
  }
  FUN_18034e090(*param_1,param_1[1]);
  puVar5 = auStack_28;
  uVar4 = *param_1;
  uVar3 = ((longlong)(param_1[2] - uVar4) >> 3) * 8;
  uVar2 = uVar4;
  if (0xfff < uVar3) {
    uVar2 = *(ulonglong *)(uVar4 - 8);
    uVar4 = (uVar4 - uVar2) - 8;
    if (uVar4 < 0x20) {
      uVar3 = uVar3 + 0x27;
      puVar5 = auStack_28;
    }
    else {
      uVar3 = 5;
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(5);
      puVar5 = auStack_20;
      uVar2 = uVar4;
    }
  }
  *(undefined8 *)(puVar5 + -8) = 0x180349922;
  thunk_FUN_1803d64e0(uVar2,uVar3);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* ===== 180349940 FUN_180349940 ===== */

void FUN_180349940(longlong *param_1)

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
    FUN_18000f890(lVar3 + 8);
  }
  lVar3 = *param_1;
  if (0xfff < (param_1[2] - lVar3 & 0xffffffffffffffc0U)) {
    lVar2 = *(longlong *)(lVar3 + -8);
    if ((lVar3 - lVar2) - 8U < 0x20) goto LAB_1803499b2;
    pcVar1 = (code *)swi(0x29);
    lVar3 = (*pcVar1)(5);
    puVar4 = auStack_20;
  }
  lVar2 = lVar3;
  puVar5 = puVar4;
LAB_1803499b2:
  *(undefined8 *)(puVar5 + -8) = 0x1803499b7;
  thunk_FUN_1803d64e0(lVar2);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* ===== 1803499e0 FUN_1803499e0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1803499e0(undefined8 param_1,ulonglong param_2,undefined1 *param_3)

{
  code *pcVar1;
  ulonglong uVar2;
  undefined1 uVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  ulonglong uVar8;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [32];
  
  puVar7 = auStack_48;
  puVar5 = auStack_48;
  puVar6 = auStack_48;
  uVar4 = DAT_181116448 - DAT_181116438;
  if (uVar4 < param_2) {
    if (0x7fffffffffffffff < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_1800118d0();
    }
    uVar8 = 0x7fffffffffffffff;
    if ((uVar4 <= 0x7fffffffffffffff - (uVar4 >> 1)) &&
       (uVar8 = (uVar4 >> 1) + uVar4, uVar8 < param_2)) {
      uVar8 = param_2;
    }
    puVar7 = auStack_48;
    if (DAT_181116438 != 0) {
      uVar2 = DAT_181116438;
      if (uVar4 < 0x1000) {
LAB_180349a65:
        puVar6 = puVar5;
      }
      else {
        uVar2 = *(ulonglong *)(DAT_181116438 - 8);
        uVar4 = (DAT_181116438 - uVar2) - 8;
        if (0x1f < uVar4) {
          pcVar1 = (code *)swi(0x29);
          (*pcVar1)(5);
          puVar5 = auStack_40;
          uVar2 = uVar4;
          goto LAB_180349a65;
        }
      }
      *(undefined8 *)(puVar6 + -8) = 0x180349a6d;
      thunk_FUN_1803d64e0(uVar2);
      DAT_181116448 = 0;
      DAT_181116438 = 0;
      _DAT_181116440 = 0;
      puVar7 = puVar6;
    }
    *(undefined8 *)(puVar7 + -8) = 0x180349a8b;
    DAT_181116438 = FUN_18000fb70(uVar8);
    DAT_181116448 = DAT_181116438 + uVar8;
    _DAT_181116440 = DAT_181116438;
  }
  else {
    uVar3 = *param_3;
    uVar8 = _DAT_181116440 - DAT_181116438;
    uVar4 = DAT_181116438;
    if (param_2 <= uVar8) goto LAB_180349add;
    FUN_180540170(DAT_181116438,uVar3,uVar8);
    puVar7 = auStack_48;
    param_2 = param_2 - uVar8;
  }
  uVar3 = *param_3;
  uVar4 = _DAT_181116440;
LAB_180349add:
  *(undefined8 *)(puVar7 + -8) = 0x180349ae5;
  FUN_180540170(uVar4,uVar3,param_2);
  _DAT_181116440 = uVar4 + param_2;
  return;
}



/* ===== 180349b00 FUN_180349b00 ===== */

void FUN_180349b00(longlong *param_1,undefined1 *param_2)

{
  ulonglong uVar1;
  code *pcVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  
  puVar5 = (undefined1 *)param_1[1];
  if (puVar5 != (undefined1 *)param_1[2]) {
    *puVar5 = *param_2;
    param_1[1] = param_1[1] + 1;
    return;
  }
  lVar8 = (longlong)puVar5 - *param_1;
  if (lVar8 == 0x7fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_1800118d0();
  }
  uVar4 = param_1[2] - *param_1;
  uVar1 = lVar8 + 1;
  uVar9 = 0x7fffffffffffffff;
  if ((uVar4 <= 0x7fffffffffffffff - (uVar4 >> 1)) && (uVar9 = (uVar4 >> 1) + uVar4, uVar9 < uVar1))
  {
    uVar9 = uVar1;
  }
  lVar3 = FUN_18000fb70(uVar9);
  *(undefined1 *)(lVar3 + lVar8) = *param_2;
  puVar7 = (undefined1 *)*param_1;
  if (puVar5 == (undefined1 *)param_1[1]) {
    lVar10 = param_1[1] - (longlong)puVar7;
    lVar8 = lVar3;
    puVar5 = puVar7;
  }
  else {
    FUN_180540530(lVar3,puVar7,(longlong)puVar5 - (longlong)puVar7);
    lVar8 = lVar8 + 1 + lVar3;
    lVar10 = param_1[1] - (longlong)puVar5;
  }
  puVar6 = auStack_38;
  puVar7 = auStack_38;
  FUN_180540530(lVar8,puVar5,lVar10);
  lVar8 = *param_1;
  if (lVar8 == 0) goto LAB_180349c06;
  if ((ulonglong)(param_1[2] - lVar8) < 0x1000) {
LAB_180349bfe:
    lVar10 = lVar8;
    puVar7 = puVar6;
  }
  else {
    lVar10 = *(longlong *)(lVar8 + -8);
    if (0x1f < (lVar8 - lVar10) - 8U) {
      pcVar2 = (code *)swi(0x29);
      lVar8 = (*pcVar2)(5);
      puVar6 = auStack_30;
      goto LAB_180349bfe;
    }
  }
  *(undefined8 *)(puVar7 + -8) = 0x180349c06;
  thunk_FUN_1803d64e0(lVar10);
LAB_180349c06:
  *param_1 = lVar3;
  param_1[1] = lVar3 + uVar1;
  param_1[2] = uVar9 + lVar3;
  return;
}



/* ===== 180349c50 FUN_180349c50 ===== */

void FUN_180349c50(ulonglong *param_1)

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
  *(undefined8 *)(puVar5 + -8) = 0x180349cb7;
  thunk_FUN_1803d64e0(uVar3,uVar2);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* ===== 180349cd0 FUN_180349cd0 ===== */

void FUN_180349cd0(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)*param_1;
  *(undefined8 *)puVar1[1] = 0;
  puVar1 = (undefined8 *)*puVar1;
  while (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar1;
    thunk_FUN_1803d64e0(puVar1,0x28);
    puVar1 = puVar2;
  }
  thunk_FUN_1803d64e0(*param_1,0x28);
  return;
}



/* ===== 180349d30 FUN_180349d30 ===== */

/* WARNING: Removing unreachable block (ram,0x000180349f98) */

void FUN_180349d30(undefined4 param_1,undefined8 param_2,longlong *param_3)

{
  code *pcVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [24];
  longlong *local_58;
  longlong *local_50;
  undefined8 *local_48;
  
  plVar5 = DAT_181107560;
  puVar7 = auStack_78;
  puVar8 = auStack_78;
  if ((DAT_181107568 - (longlong)DAT_181107558 >> 3) * -0x5555555555555555 != 0) {
    lVar4 = (longlong)DAT_181107560 - (longlong)DAT_181107558 >> 3;
    plVar6 = DAT_181107558;
    if (lVar4 * -0x5555555555555555 == 0) {
      for (; plVar6 != plVar5; plVar6 = plVar6 + 3) {
        if (plVar6 != param_3) {
          param_1 = FUN_180357940(plVar6,*param_3,param_3[1] - *param_3 >> 4);
        }
      }
      local_48 = &DAT_181107558;
      plVar5 = DAT_181107560;
      local_58 = DAT_181107560;
      for (lVar4 = lVar4 * 0x5555555555555555 + 1; lVar4 != 0; lVar4 = lVar4 + -1) {
        local_50 = plVar5;
        param_1 = FUN_1803578a0(param_1,plVar5,param_3);
        plVar5 = plVar5 + 3;
      }
      DAT_181107560 = plVar5;
      return;
    }
    plVar5 = DAT_181107558 + 3;
    plVar3 = DAT_181107560;
    for (; plVar2 = plVar5, DAT_181107560 = plVar3, plVar6 != plVar5; plVar6 = plVar6 + 3) {
      if (plVar6 != param_3) {
        FUN_180357940(plVar6,*param_3,param_3[1] - *param_3 >> 4);
      }
      plVar3 = DAT_181107560;
    }
    for (; plVar2 != plVar3; plVar2 = plVar2 + 3) {
      FUN_1800244c0(plVar2);
    }
    DAT_181107560 = plVar5;
    return;
  }
  puVar9 = auStack_78;
  plVar6 = DAT_181107558;
  if (DAT_181107558 == (longlong *)0x0) goto LAB_180349e1b;
  for (; plVar6 != plVar5; plVar6 = plVar6 + 3) {
    FUN_1800244c0(plVar6);
  }
  plVar5 = DAT_181107558;
  if ((ulonglong)((DAT_181107568 - (longlong)DAT_181107558 >> 3) * 8) < 0x1000) {
LAB_180349dfd:
    puVar8 = puVar7;
  }
  else {
    plVar5 = (longlong *)DAT_181107558[-1];
    plVar6 = (longlong *)((longlong)DAT_181107558 + (-8 - (longlong)plVar5));
    if (&DAT_0000001f < plVar6) {
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(5);
      puVar7 = auStack_70;
      plVar5 = plVar6;
      goto LAB_180349dfd;
    }
  }
  *(undefined8 *)(puVar8 + -8) = 0x180349e05;
  thunk_FUN_1803d64e0(plVar5);
  DAT_181107558 = (longlong *)0x0;
  DAT_181107560 = (longlong *)0x0;
  DAT_181107568 = 0;
  puVar9 = puVar8;
LAB_180349e1b:
  *(undefined8 *)(puVar9 + -8) = 0x180349e42;
  lVar4 = FUN_18000fb70(0x18);
  DAT_181107568 = lVar4 + 0x18;
  *(longlong *)(puVar9 + 0x20) = lVar4;
  *(longlong *)(puVar9 + 0x28) = lVar4;
  *(longlong ***)(puVar9 + 0x30) = &DAT_181107558;
  *(undefined8 *)(puVar9 + -8) = 0x180349e7f;
  DAT_181107558 = (longlong *)lVar4;
  DAT_181107560 = (longlong *)lVar4;
  FUN_1803578a0(DAT_181107568,lVar4,param_3);
  DAT_181107560 = (longlong *)(lVar4 + 0x18);
  return;
}



