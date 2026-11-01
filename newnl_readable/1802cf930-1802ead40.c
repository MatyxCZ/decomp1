/* ===== 1802cf930 FUN_1802cf930 ===== */

undefined1
FUN_1802cf930(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined1 uVar6;
  undefined4 *puVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined1 local_70 [80];
  
  puVar7 = (undefined4 *)FUN_1802c12b0(local_70,param_1,DAT_1808acda0);
  local_98 = *puVar7;
  uStack_94 = puVar7[1];
  uStack_90 = puVar7[2];
  uStack_8c = puVar7[3];
  local_88 = puVar7[4];
  uStack_84 = puVar7[5];
  uVar3 = puVar7[6];
  uVar4 = puVar7[7];
  local_78 = *(undefined8 *)(puVar7 + 8);
  uVar10 = (undefined4)local_78;
  uStack_80 = uVar3;
  uStack_7c = uVar4;
  FUN_1803e89e0(param_1);
  lVar5 = DAT_180ca0a50;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  lVar2 = *(longlong *)(lVar5 + 0x14f8);
  *(undefined4 *)(lVar2 + 0x118) = uVar3;
  *(undefined4 *)(lVar2 + 0x11c) = uVar4;
  *(undefined1 *)(lVar2 + 0x159) = 1;
  *(uint *)(lVar5 + 0x1eb0) = *(uint *)(lVar5 + 0x1eb0) | 1;
  *(undefined4 *)(lVar5 + 0x1ec8) = uVar10;
  fVar9 = (DAT_1808ac97c - *(float *)(lVar5 + 0x1200)) * DAT_1808ac1f4;
  fVar8 = 0.0;
  if (0.0 <= fVar9) {
    fVar8 = fVar9;
  }
  local_a8 = CONCAT44(fVar8,0x40c00000);
  FUN_1803d89a0(0xb,&local_a8);
  FUN_1802b39d0(&local_a0,"##value",&uStack_80,uVar10,1,1);
  local_a8 = 0;
  uVar6 = FUN_18041c570("##value",param_4,param_2,param_3,&local_a8,0,0,0);
  *(undefined4 *)(DAT_180ca0a50 + 0xd98) = local_a0;
  FUN_1803d87f0(local_9c);
  FUN_1803d8a40(1);
  iVar1 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
  if (iVar1 < 2) {
    FUN_1803ebc00("Calling PopID() too many times!");
  }
  else {
    *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar1 + -1;
  }
  return uVar6;
}



/* ===== 1802cfaf0 FUN_1802cfaf0 ===== */

void FUN_1802cfaf0(undefined8 param_1,longlong param_2,int param_3,undefined1 param_4,
                  longlong param_5,longlong param_6)

{
  code *pcVar1;
  undefined4 *puVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  int iVar8;
  undefined4 local_res18 [4];
  undefined1 auStack_f8 [8];
  undefined1 auStack_f0 [24];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined1 local_c8;
  undefined8 local_c0;
  float local_b8;
  undefined4 local_b4;
  longlong local_b0 [5];
  int local_88;
  longlong *local_80;
  undefined4 local_78;
  undefined4 *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined1 local_58;
  undefined4 local_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  undefined8 local_40;
  
  puVar2 = (undefined4 *)FUN_1802b9e90(&local_d8,param_1);
  lVar4 = DAT_180ca0a50;
  DAT_1809f5b50._4_4_ = *puVar2;
  DAT_1809f5b48 = (float)puVar2[1];
  DAT_1809f5b50._0_4_ = (float)puVar2[2];
  DAT_1809f5b4c = (float)puVar2[3];
  local_40 = *(undefined8 *)(puVar2 + 4);
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  DAT_1809f5b44 = *(undefined4 *)(lVar4 + 4);
  DAT_1809f5b40 = *(undefined4 *)(*(longlong *)(lVar4 + 0x14f8) + 0x10);
  local_50 = DAT_1809f5b50._4_4_;
  fStack_4c = DAT_1809f5b48;
  fStack_48 = (float)DAT_1809f5b50;
  fStack_44 = DAT_1809f5b4c;
  FUN_1802baa50(&local_50);
  puVar6 = auStack_f8;
  puVar7 = auStack_f8;
  if (param_3 < 1) {
    return;
  }
  local_b0[0] = 0;
  local_b0[1] = 0;
  local_b0[2] = 0;
  if (param_5 == 0) {
    uVar5 = 0;
    do {
      local_d8 = *(undefined8 *)(param_2 + uVar5 * 8);
      local_d0 = 0;
      if (param_6 == 0) {
        local_c0 = 0;
      }
      else {
        local_c0 = *(undefined8 *)(param_6 + uVar5 * 8);
      }
      local_c8 = param_4;
      FUN_180042d00(local_b0,&local_d8);
      uVar3 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar3;
    } while ((int)uVar3 < param_3);
  }
  else {
    lVar4 = 0;
    iVar8 = param_3;
    do {
      local_d8 = *(undefined8 *)(param_2 + lVar4 * 8);
      local_d0 = *(undefined8 *)(param_5 + lVar4 * 8);
      if (param_6 == 0) {
        local_c0 = 0;
      }
      else {
        local_c0 = *(undefined8 *)(param_6 + lVar4 * 8);
      }
      local_c8 = param_4;
      FUN_180042d00(local_b0,&local_d8);
      lVar4 = lVar4 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  local_b0[3] = 0;
  local_b0[4] = local_b0[0];
  local_res18[0] = 0;
  local_80 = local_b0 + 3;
  local_78 = 1;
  local_70 = local_res18;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_88 = param_3;
  local_b4 = FUN_18053f0d0((DAT_1809f5b4c - DAT_1808ac97c) * DAT_1808ac1f4 + DAT_1809f5b48);
  local_b8 = (float)DAT_1809f5b50 - DAT_1808ac97c;
  DAT_1809f5b50._0_4_ = local_b8 - DAT_1808ac7ac;
  FUN_1802ce6f0(param_1,&local_80,&local_b8);
  if (local_b0[0] == 0) {
    return;
  }
  lVar4 = local_b0[0];
  if (0xfff < (local_b0[2] - local_b0[0] & 0xffffffffffffffe0U)) {
    lVar4 = *(longlong *)(local_b0[0] + -8);
    if ((local_b0[0] - lVar4) - 8U < 0x20) goto LAB_1802cfd37;
    pcVar1 = (code *)swi(0x29);
    lVar4 = (*pcVar1)(5);
    puVar6 = auStack_f0;
  }
  puVar7 = puVar6;
LAB_1802cfd37:
  *(undefined8 *)(puVar7 + -8) = 0x1802cfd3c;
  thunk_FUN_1803d64e0(lVar4);
  return;
}



/* ===== 1802cfd60 FUN_1802cfd60 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802cfd60(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  float fVar5;
  char cVar6;
  BOOL BVar7;
  HANDLE hMem;
  char *pcVar8;
  char *pcVar9;
  longlong lVar10;
  int iVar11;
  char *pcVar12;
  char *pcVar13;
  int iVar14;
  bool bVar15;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  float fVar16;
  undefined1 auStack_d8 [32];
  undefined8 *local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined1 local_98 [4];
  undefined8 local_94;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  lVar10 = DAT_180ca0a50;
  local_48 = DAT_180919500 ^ (ulonglong)auStack_d8;
  if (DAT_180cd0f0b != '\0') {
    *(uint *)(DAT_180ca0a50 + 0x1f38) = *(uint *)(DAT_180ca0a50 + 0x1f38) | 2;
    *(undefined4 *)(lVar10 + 0x1f58) = 0x441b0000;
    *(undefined4 *)(lVar10 + 0x1f5c) = 0x44020000;
    *(undefined4 *)(lVar10 + 8000) = 4;
    cVar6 = FUN_1803e4f20("material editor",&DAT_180cd0f0b,0);
    if (cVar6 != '\0') {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   8) < DAT_181116430) && (FUN_1804ed1b0(&DAT_181116430), DAT_181116430 == -1)) {
        DAT_181116438 = (char *)0x0;
        _DAT_181116440 = (char *)0x0;
        DAT_181116448 = (char *)0x0;
        DAT_181116438 = (char *)FUN_18000fb70(0x4000);
        pcVar8 = DAT_181116438 + 0x4000;
        DAT_181116448 = pcVar8;
        FUN_180540170(DAT_181116438,0,0x4000);
        _DAT_181116440 = pcVar8;
        FUN_1804ece40(&LAB_1805686b0);
        _Init_thread_footer(&DAT_181116430);
      }
      local_94 = 0;
      cVar6 = FUN_180415ad0("paste from clipboard",&local_94,0);
      if ((cVar6 != '\0') && (BVar7 = OpenClipboard((HWND)0x0), BVar7 != 0)) {
        hMem = GetClipboardData(1);
        if ((hMem != (HANDLE)0x0) && (pcVar8 = GlobalLock(hMem), pcVar8 != (char *)0x0)) {
          pcVar9 = (char *)strlen(pcVar8);
          pcVar13 = _DAT_181116440 + (-1 - (longlong)DAT_181116438);
          if (pcVar9 < _DAT_181116440 + (-1 - (longlong)DAT_181116438)) {
            pcVar13 = pcVar9;
          }
          FUN_180540530(DAT_181116438,pcVar8,pcVar13);
          DAT_181116438[(longlong)pcVar13] = '\0';
          GlobalUnlock(hMem);
        }
        CloseClipboard();
      }
      uVar1 = DAT_1808acda0;
      FUN_1803ec6c0(0,DAT_1808acda0);
      local_94 = 0;
      cVar6 = FUN_180415ad0(&DAT_1806e1934,&local_94,0);
      pcVar8 = DAT_181116438;
      if (cVar6 != '\0') {
        if ((DAT_181116438 == (char *)0x0) || (*DAT_181116438 == '\0')) {
          pcVar8 = "clipboard empty";
        }
        else {
          local_88 = 0;
          uStack_80 = 0;
          local_78 = 0;
          uStack_70 = 0;
          local_68 = 0;
          uStack_60 = 0;
          local_58 = 0;
          uStack_50 = 0;
          DAT_180ce1e78 = DAT_180ce1e78 + 1;
          snprintf(&local_88,0x40,"neverwin/custom_%d.vmat");
          PTR_s_not_initialized_1809ee490 = (undefined *)0x0;
          lVar10 = FUN_1801d2330(pcVar8,&local_88);
          if (lVar10 == 0) {
            DAT_180ce1fc0 = 0;
            pcVar8 = "create failed";
            if (PTR_s_not_initialized_1809ee490 != (undefined *)0x0) {
              pcVar8 = PTR_s_not_initialized_1809ee490;
            }
          }
          else {
            if (DAT_180ce1fc0 == 0) {
              DAT_180ce2038 = DAT_180ce2038 + 1;
            }
            pcVar8 = "loaded";
            DAT_180ce1fc0 = lVar10;
          }
        }
        PTR_s_nothing_loaded_1809ee488 = pcVar8;
      }
      FUN_1803ec6c0(0,uVar1);
      local_94 = 0;
      cVar6 = FUN_180415ad0("clear",&local_94,0);
      if (cVar6 != '\0') {
        local_98[0] = 0;
        FUN_1803499e0(extraout_XMM0_Da,(longlong)_DAT_181116440 - (longlong)DAT_181116438,local_98);
      }
      FUN_1803ec6c0(0,uVar1);
      local_94 = 0;
      cVar6 = FUN_180415ad0("template",&local_94,0);
      if (cVar6 != '\0') {
        local_98[0] = 0;
        FUN_1803499e0(extraout_XMM0_Da_00,(longlong)_DAT_181116440 - (longlong)DAT_181116438,
                      local_98);
        lVar10 = 3;
        pcVar8 = DAT_181116438;
        pcVar13 = 
        "<!-- kv3 encoding:text:version{e21c7f3c-8a33-41c5-9977-a76d3a32aa0d}\nformat:generic:version{7412167c-06e9-4698-aff2-e63eb59037e7} -->\n{\n    shader = \"csgo_unlitgeneric.vfx\"\n    F_DISABLE_Z_BUFFERING = 1\n    F_PAINT_VERTEX_COLORS = 1\n    F_TRANSLUCENT = 1\n    F_BLEND_MODE = 1\n    g_vColorTint = [1.0, 1.0, 1.0, 1.0]\n    g_tColor = resource:\"materials/dev/primary_white_color_tga_21186c76.vtex\"\n}\n"
        ;
        do {
          pcVar12 = pcVar13;
          pcVar9 = pcVar8;
          uVar4 = *(undefined8 *)(pcVar12 + 8);
          *(undefined8 *)pcVar9 = *(undefined8 *)pcVar12;
          *(undefined8 *)(pcVar9 + 8) = uVar4;
          uVar4 = *(undefined8 *)(pcVar12 + 0x18);
          *(undefined8 *)(pcVar9 + 0x10) = *(undefined8 *)(pcVar12 + 0x10);
          *(undefined8 *)(pcVar9 + 0x18) = uVar4;
          uVar4 = *(undefined8 *)(pcVar12 + 0x28);
          *(undefined8 *)(pcVar9 + 0x20) = *(undefined8 *)(pcVar12 + 0x20);
          *(undefined8 *)(pcVar9 + 0x28) = uVar4;
          uVar4 = *(undefined8 *)(pcVar12 + 0x38);
          *(undefined8 *)(pcVar9 + 0x30) = *(undefined8 *)(pcVar12 + 0x30);
          *(undefined8 *)(pcVar9 + 0x38) = uVar4;
          uVar4 = *(undefined8 *)(pcVar12 + 0x48);
          *(undefined8 *)(pcVar9 + 0x40) = *(undefined8 *)(pcVar12 + 0x40);
          *(undefined8 *)(pcVar9 + 0x48) = uVar4;
          uVar4 = *(undefined8 *)(pcVar12 + 0x58);
          *(undefined8 *)(pcVar9 + 0x50) = *(undefined8 *)(pcVar12 + 0x50);
          *(undefined8 *)(pcVar9 + 0x58) = uVar4;
          uVar4 = *(undefined8 *)(pcVar12 + 0x68);
          *(undefined8 *)(pcVar9 + 0x60) = *(undefined8 *)(pcVar12 + 0x60);
          *(undefined8 *)(pcVar9 + 0x68) = uVar4;
          uVar4 = *(undefined8 *)(pcVar12 + 0x78);
          *(undefined8 *)(pcVar9 + 0x70) = *(undefined8 *)(pcVar12 + 0x70);
          *(undefined8 *)(pcVar9 + 0x78) = uVar4;
          lVar10 = lVar10 + -1;
          pcVar8 = pcVar9 + 0x80;
          pcVar13 = pcVar12 + 0x80;
        } while (lVar10 != 0);
        uVar1 = *(undefined4 *)(pcVar12 + 0x80);
        uVar2 = *(undefined4 *)(pcVar12 + 0x84);
        uVar3 = *(undefined4 *)(pcVar12 + 0x88);
        *(undefined4 *)(pcVar9 + 0x7c) = *(undefined4 *)(pcVar12 + 0x7c);
        *(undefined4 *)(pcVar9 + 0x80) = uVar1;
        *(undefined4 *)(pcVar9 + 0x84) = uVar2;
        *(undefined4 *)(pcVar9 + 0x88) = uVar3;
      }
      fVar5 = DAT_1808ac34c;
      lVar10 = *(longlong *)(DAT_180ca0a50 + 0x14f8);
      if (*(char *)(lVar10 + 0xd1) == '\0') {
        iVar14 = *(int *)(lVar10 + 0x1d4);
        iVar11 = 2 - (uint)(iVar14 != 0);
        if (*(longlong *)(lVar10 + 0x1c8) != 0) {
          bVar15 = iVar14 != 0;
          iVar14 = -iVar14;
          iVar11 = 6 - (uint)bVar15;
        }
        fVar16 = *(float *)(DAT_180ca0a50 + 0xd9c);
        if (*(float *)(DAT_180ca0a50 + 0xd9c) <= DAT_1808ac34c) {
          fVar16 = DAT_1808ac34c;
        }
        FUN_1804176f0(iVar11,fVar16,iVar14);
      }
      FUN_180414ce0(&DAT_1806d3198,PTR_s_nothing_loaded_1809ee488);
      lVar10 = *(longlong *)(DAT_180ca0a50 + 0x14f8);
      if (*(char *)(lVar10 + 0xd1) == '\0') {
        iVar14 = *(int *)(lVar10 + 0x1d4);
        iVar11 = 2 - (uint)(iVar14 != 0);
        if (*(longlong *)(lVar10 + 0x1c8) != 0) {
          bVar15 = iVar14 != 0;
          iVar14 = -iVar14;
          iVar11 = 6 - (uint)bVar15;
        }
        fVar16 = *(float *)(DAT_180ca0a50 + 0xd9c);
        if (*(float *)(DAT_180ca0a50 + 0xd9c) <= fVar5) {
          fVar16 = fVar5;
        }
        FUN_1804176f0(iVar11,fVar16,iVar14);
      }
      local_94 = 0xbf800000bf800000;
      local_a0 = 0;
      local_a8 = 0;
      local_b0 = 0x4000020;
      local_b8 = &local_94;
      FUN_18041c570("##vmat",0,DAT_181116438,DAT_181116440 - (int)DAT_181116438);
    }
    FUN_1803e75b0();
  }
  return;
}



/* ===== 1802d0220 FUN_1802d0220 ===== */

void FUN_1802d0220(undefined4 *param_1)

{
  char *pcVar1;
  undefined8 uVar2;
  
  switch(*param_1) {
  case 1:
    FUN_18033fa10("metalness",param_1 + 5,0,100,&DAT_1806f0260,0);
    param_1 = param_1 + 6;
    pcVar1 = "roughness";
    break;
  case 2:
    goto LAB_1802d0447;
  case 3:
    param_1 = param_1 + 7;
    uVar2 = 500;
    pcVar1 = "exponent";
    goto LAB_1802d042c;
  case 4:
    FUN_18033fa10("exponent",param_1 + 8,0,500,&DAT_1806f0260,0);
    FUN_18033fa10("falloff",param_1 + 9,0x14,100,&DAT_1806f0260,0);
    FUN_1802c0a60("fresnel filling",param_1 + 10);
    return;
  case 5:
    FUN_18033fa10("strength",param_1 + 0xb,0,300,&DAT_1806f0260,0);
    FUN_18033fa10("roughness",param_1 + 0xc,0,100,&DAT_1806f0260,0);
    FUN_1802cedb0(&DAT_18075c884,param_1 + 0xd,1);
    return;
  case 6:
    param_1 = param_1 + 0x11;
    pcVar1 = "speed";
    break;
  case 7:
    FUN_18033fa10("exponent",param_1 + 0x12,0,500,&DAT_1806f0260,0);
    FUN_18033fa10("fresnel filling",param_1 + 0x13,1,100,&DAT_1806f0260,0);
    FUN_18033fa10("falloff",param_1 + 0x14,1,100,&DAT_1806f0260,0);
    param_1 = param_1 + 0x15;
    pcVar1 = "tint";
    break;
  default:
    return;
  }
  uVar2 = 100;
LAB_1802d042c:
  FUN_18033fa10(pcVar1,param_1,0,uVar2,&DAT_1806f0260,0);
LAB_1802d0447:
  return;
}



/* ===== 1802d0470 FUN_1802d0470 ===== */

void FUN_1802d0470(undefined8 param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  undefined4 local_res10 [2];
  uint *local_res18;
  undefined1 local_res20 [8];
  uint local_98 [2];
  undefined8 local_90;
  uint **local_88;
  undefined4 local_80;
  uint *local_78;
  undefined8 local_70;
  undefined1 local_68;
  undefined8 local_60;
  undefined8 *local_58;
  undefined4 local_50;
  undefined4 *local_48;
  undefined1 *local_40;
  uint **local_38;
  undefined1 local_30;
  
  FUN_1803e89e0();
  local_98[1] = 7;
  local_98[0] = 0;
  DAT_180cd0e6d = 1;
  puVar4 = local_98;
  if (-1 < (int)*param_2) {
    puVar4 = param_2;
  }
  puVar3 = local_98 + 1;
  if ((int)*param_2 < 8) {
    puVar3 = puVar4;
  }
  uVar1 = *puVar3;
  *param_2 = uVar1;
  FUN_1802c2640(param_1,param_2,&PTR_s_disabled_180659a40,8);
  FUN_1803ec6c0(0,DAT_1808acda0);
  DAT_180cd0f0e = 1;
  local_res18 = param_2;
  if ((uVar1 & 0xfffffffd) == 0) {
    FUN_1802cedb0("##color",param_2 + 1,1);
  }
  else {
    FUN_1802ceb60(local_res20,"##color");
    local_88 = &local_78;
    local_58 = &local_90;
    local_70 = 0;
    local_48 = local_res10;
    local_68 = 1;
    local_60 = 0;
    local_40 = &LAB_1803501c0;
    local_38 = &local_res18;
    local_90 = 0;
    local_80 = 1;
    local_res10[0] = 0;
    local_50 = 1;
    local_30 = 0;
    local_78 = param_2 + 1;
    FUN_1802ce6f0("##color",&local_58,local_res20);
  }
  iVar2 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
  if (iVar2 < 2) {
    FUN_1803ebc00("Calling PopID() too many times!");
    return;
  }
  *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar2 + -1;
  return;
}



/* ===== 1802d05e0 FUN_1802d05e0 ===== */

void FUN_1802d05e0(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 **ppuVar3;
  undefined1 **ppuVar4;
  undefined4 local_res8 [2];
  undefined1 *local_res10;
  undefined *local_res18 [2];
  undefined **local_b8;
  undefined4 *local_b0;
  undefined8 local_a8;
  undefined4 **local_a0;
  undefined4 local_98;
  undefined4 *local_90;
  undefined8 local_88;
  undefined1 local_80;
  undefined8 local_78;
  undefined8 *local_70;
  undefined4 local_68;
  undefined1 **local_60;
  code *local_58;
  undefined ***local_50;
  undefined1 local_48;
  
  FUN_1802b9110("enemy model");
  FUN_1803e89e0("enemy_model");
  DAT_181106f20 = "Modify how enemy player models are rendered";
  FUN_1802d0470("player",&DAT_180920690);
  DAT_181106f20 = "Show enemy players through walls";
  FUN_1802d0470("behind walls",&DAT_1809206e8);
  local_res18[0] = &DAT_180920690;
  DAT_181106f20 = "Visual effects when shooting enemies";
  FUN_1803e89e0("on shot");
  local_res10 = (undefined1 *)CONCAT44(local_res10._4_4_,7);
  local_res8[0] = 0;
  ppuVar4 = (undefined1 **)local_res8;
  DAT_180cd0e6d = 1;
  if (-1 < DAT_180920740) {
    ppuVar4 = (undefined1 **)&DAT_180920740;
  }
  ppuVar3 = &local_res10;
  if (DAT_180920740 < 8) {
    ppuVar3 = ppuVar4;
  }
  DAT_180920740 = *(int *)ppuVar3;
  FUN_1802c2640("on shot",&DAT_180920740,&PTR_s_disabled_180659a40,8);
  uVar2 = DAT_1808acda0;
  FUN_1803ec6c0(0,DAT_1808acda0);
  local_b8 = local_res18;
  local_b0 = &DAT_180920740;
  DAT_180cd0f0e = 1;
  FUN_1802ceb60(&local_res10,"##color");
  local_88 = 0;
  local_90 = (undefined4 *)&DAT_180920744;
  local_a0 = &local_90;
  local_80 = 1;
  local_70 = &local_a8;
  local_78 = 0;
  local_60 = (undefined1 **)local_res8;
  local_a8 = 0;
  local_58 = FUN_1803501d0;
  local_50 = &local_b8;
  local_98 = 1;
  local_res8[0] = 0;
  local_68 = 1;
  local_48 = 0;
  FUN_1802ce6f0("##color",&local_70,&local_res10);
  iVar1 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
  if (iVar1 < 2) {
    FUN_1803ebc00("Calling PopID() too many times!");
  }
  else {
    *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar1 + -1;
  }
  local_res18[0] = &DAT_180920690;
  DAT_181106f20 = "Show enemy position history";
  FUN_1803e89e0("history");
  local_res10 = (undefined1 *)CONCAT44(local_res10._4_4_,7);
  ppuVar4 = (undefined1 **)local_res8;
  local_res8[0] = 0;
  if (-1 < DAT_1809207b0) {
    ppuVar4 = (undefined1 **)&DAT_1809207b0;
  }
  DAT_180cd0e6d = 1;
  ppuVar3 = &local_res10;
  if (DAT_1809207b0 < 8) {
    ppuVar3 = ppuVar4;
  }
  DAT_1809207b0 = *(int *)ppuVar3;
  FUN_1802c2640("history",&DAT_1809207b0,&PTR_s_disabled_180659a40,8);
  FUN_1803ec6c0(0,uVar2);
  local_b8 = local_res18;
  local_b0 = &DAT_1809207b0;
  DAT_180cd0f0e = 1;
  FUN_1802ceb60(&local_res10,"##color");
  local_88 = 0;
  local_90 = (undefined4 *)&DAT_1809207b4;
  local_a0 = &local_90;
  local_80 = 1;
  local_70 = &local_a8;
  local_78 = 0;
  local_60 = (undefined1 **)local_res8;
  local_a8 = 0;
  local_58 = FUN_180350310;
  local_50 = &local_b8;
  local_98 = 1;
  local_res8[0] = 0;
  local_68 = 1;
  local_48 = 0;
  FUN_1802ce6f0("##color",&local_70,&local_res10);
  iVar1 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
  if (iVar1 < 2) {
    FUN_1803ebc00("Calling PopID() too many times!");
  }
  else {
    *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar1 + -1;
  }
  local_res18[0] = &DAT_180920690;
  DAT_181106f20 = "Options for enemy ragdoll rendering";
  FUN_1803e89e0("ragdolls");
  local_res10 = (undefined1 *)CONCAT44(local_res10._4_4_,7);
  ppuVar4 = (undefined1 **)local_res8;
  local_res8[0] = 0;
  if (-1 < DAT_18092081c) {
    ppuVar4 = (undefined1 **)&DAT_18092081c;
  }
  DAT_180cd0e6d = 1;
  ppuVar3 = &local_res10;
  if (DAT_18092081c < 8) {
    ppuVar3 = ppuVar4;
  }
  DAT_18092081c = *(int *)ppuVar3;
  FUN_1802c2640("ragdolls",&DAT_18092081c,&PTR_s_disabled_180659a40,8);
  FUN_1803ec6c0(0,uVar2);
  local_b8 = local_res18;
  local_b0 = &DAT_18092081c;
  DAT_180cd0f0e = 1;
  FUN_1802ceb60(&local_res10,"##color");
  local_88 = 0;
  local_90 = (undefined4 *)&DAT_180920820;
  local_a0 = &local_90;
  local_80 = 1;
  local_70 = &local_a8;
  local_78 = 0;
  local_60 = (undefined1 **)local_res8;
  local_a8 = 0;
  local_58 = FUN_1803503e0;
  local_50 = &local_b8;
  local_98 = 1;
  local_res8[0] = 0;
  local_68 = 1;
  local_48 = 0;
  FUN_1802ce6f0("##color",&local_70,&local_res10);
  iVar1 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
  if (iVar1 < 2) {
    FUN_1803ebc00("Calling PopID() too many times!");
  }
  else {
    *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar1 + -1;
  }
  FUN_1803e89e0("kill_effect");
  FUN_1802c0a60("kill effect",&DAT_180921084);
  FUN_1803ec6c0(0,uVar2);
  local_res10 = &DAT_180921084;
  FUN_1802ceb60(local_res18,"##color");
  local_88 = 0;
  local_90 = &DAT_18092109c;
  local_a0 = &local_90;
  local_80 = 1;
  local_70 = &local_a8;
  local_78 = 0;
  local_60 = (undefined1 **)local_res8;
  local_a8 = 0;
  local_58 = FUN_18034bc00;
  local_50 = (undefined ***)&local_res10;
  local_98 = 1;
  local_res8[0] = 0;
  local_68 = 1;
  local_48 = 0;
  FUN_1802ce6f0("##color",&local_70,local_res18);
  iVar1 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
  if (iVar1 < 2) {
    FUN_1803ebc00("Calling PopID() too many times!");
  }
  else {
    *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar1 + -1;
  }
  FUN_1802c0a60(&DAT_1806f83d8,param_1 + 0x1918);
  FUN_1803ec6c0(0,uVar2);
  FUN_1802cedb0("##glow_color",param_1 + 0x191c,1);
  iVar1 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
  if (iVar1 < 2) {
    FUN_1803ebc00("Calling PopID() too many times!");
  }
  else {
    *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar1 + -1;
  }
  return;
}



/* ===== 1802d0b90 FUN_1802d0b90 ===== */

void FUN_1802d0b90(undefined8 param_1)

{
  char cVar1;
  
  if (DAT_181107150 != DAT_181107158) {
    if (((0.0 <= *(float *)(DAT_181107158 + -0x28)) && (DAT_1809f72e0 != '\0')) &&
       (DAT_1809f72e2 == '\0')) {
      FUN_1802b9bd0();
      cVar1 = *(char *)(DAT_181107158 + -0x14);
      FUN_1802bb4d0();
      FUN_1802bace0(DAT_1809f72fc + DAT_1808ac7ec);
      DAT_1809f72fc = DAT_1809f72fc + DAT_1808ac8e4;
      *(float *)(DAT_181107158 + -0x28) = DAT_1809f72fc;
      DAT_1809f72fc = DAT_1809f72fc + DAT_1808ac7ec;
      if (cVar1 != '\0') {
        FUN_1802bb210();
        FUN_180312320(param_1);
        return;
      }
      goto LAB_1802d0c63;
    }
  }
  FUN_1802bc470();
LAB_1802d0c63:
  FUN_180312320(param_1);
  return;
}



/* ===== 1802d0c70 FUN_1802d0c70 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802d0c70(undefined8 param_1)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  float local_18;
  float local_14;
  float local_10;
  
  FUN_1802b9bd0();
  pfVar3 = DAT_1811075f8;
  fVar2 = DAT_1809f72f4;
  fVar1 = DAT_1809f72f0;
  local_18 = DAT_1809f72fc;
  local_14 = DAT_1809f72f0;
  local_10 = DAT_1809f72f4;
  if (DAT_1811075f8 == DAT_181107600) {
    FUN_1803541a0(DAT_1809f72fc,DAT_1811075f8,&local_18);
  }
  else {
    *DAT_1811075f8 = DAT_1809f72fc;
    pfVar3[1] = fVar1;
    pfVar3[2] = fVar2;
    DAT_1811075f8 = DAT_1811075f8 + 3;
  }
  DAT_1809f72f0 = DAT_1809f72f0 + DAT_1808ac7ec;
  DAT_1809f72f4 = DAT_1809f72f4 + _DAT_1808ace28;
  DAT_1809f72fc = DAT_1809f72fc + DAT_1808ac7ec;
  FUN_180312320(param_1);
  return;
}



/* ===== 1802d0d30 FUN_1802d0d30 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802d0d30(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  float *pfVar9;
  float local_res8;
  float local_resc;
  float local_res10;
  float local_res14;
  undefined8 local_38;
  undefined8 uStack_30;
  
  if (DAT_1811075f0 != DAT_1811075f8) {
    FUN_1802b9bd0();
    lVar8 = DAT_180ca0a50;
    uVar7 = DAT_180960eec;
    uVar6 = _UNK_1808addb8;
    uVar5 = _DAT_1808addb0;
    uVar4 = DAT_1808ac34c;
    pfVar9 = DAT_1811075f8 + -3;
    fVar1 = *pfVar9;
    fVar2 = DAT_1811075f8[-2];
    fVar3 = DAT_1811075f8[-1];
    DAT_1811075f8 = pfVar9;
    if ((((DAT_180cd0f09 == '\0') || (DAT_181107150 == DAT_181107158)) ||
        (*(char *)(DAT_181107158 + -4) == '\0')) ||
       (fVar1 + DAT_1808ac7ec + DAT_1808ac1f4 < DAT_1809f72fc)) {
      local_resc = DAT_1809f72fc + DAT_1808ac7ec;
      local_res8 = fVar3 + fVar2;
      DAT_1809f72fc = local_resc;
      *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
      local_38 = uVar5;
      uStack_30 = uVar6;
      local_res10 = fVar2;
      local_res14 = fVar1;
      FUN_18036bcb0(*(undefined8 *)(*(longlong *)(lVar8 + 0x14f8) + 0x2c8),&local_res10,&local_res8,
                    uVar7,&local_38,uVar4,uVar4);
    }
    else {
      DAT_1809f72fc = fVar1;
    }
    DAT_1809f72f0 = fVar2;
    DAT_1809f72f4 = fVar3;
    FUN_180312320(0);
  }
  return;
}



/* ===== 1802d0e90 FUN_1802d0e90 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

char FUN_1802d0e90(undefined8 param_1,char *param_2,char param_3)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float fVar10;
  longlong lVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  float fVar15;
  uint uVar16;
  longlong lVar17;
  float *pfVar18;
  float *pfVar19;
  undefined4 *puVar20;
  char ****ppppcVar21;
  ulonglong uVar22;
  bool bVar23;
  undefined4 extraout_XMM0_Da;
  float fVar24;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 uVar25;
  undefined4 extraout_XMM0_Da_02;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auStack_1c8 [32];
  float *local_1a8;
  char ****local_1a0;
  char ****local_198;
  undefined8 local_190;
  ulonglong local_188;
  undefined4 local_180;
  undefined4 local_178;
  float local_168;
  float fStack_164;
  undefined8 local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  float local_148;
  float local_144;
  float local_140;
  undefined4 local_13c;
  undefined4 local_138;
  float local_130;
  float local_12c [4];
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  undefined8 local_110;
  char ****local_108 [3];
  ulonglong local_f0;
  ulonglong local_e8;
  
  local_e8 = DAT_180919500 ^ (ulonglong)auStack_1c8;
  FUN_1803e89e0();
  fVar10 = DAT_1808ac34c;
  if (param_3 == '\0') {
    fVar15 = 0.0;
  }
  else {
    fVar15 = DAT_1808ac34c;
  }
  local_158._0_4_ = (float)FUN_1803e8900(*(undefined8 *)(DAT_180ca0a50 + 0x14f8),"##slot");
  local_13c = 0;
  local_138 = 0xffffffff;
  local_148 = fVar15;
  local_144 = fVar15;
  local_140 = fVar15;
  FUN_18034a380(extraout_XMM0_Da,&local_168,&local_158,&local_148);
  local_130 = (float)FUN_1802b3660(CONCAT44(fStack_164,local_168) + 0x14,fVar15,DAT_1808ac118,0);
  fVar15 = (float)FUN_1803e8900(*(undefined8 *)(DAT_180ca0a50 + 0x14f8),"##lit");
  uVar22 = (((((ulonglong)((uint)fVar15 & 0xff) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
             (ulonglong)((uint)fVar15 >> 8 & 0xff)) * 0x100000001b3 ^
            (ulonglong)((uint)fVar15 >> 0x10 & 0xff)) * 0x100000001b3 ^
           (ulonglong)((uint)fVar15 >> 0x18)) * 0x100000001b3 & DAT_181107640;
  lVar17 = *(longlong *)(DAT_181107628 + 8 + uVar22 * 0x10);
  if (lVar17 == DAT_181107618) {
LAB_1802d1043:
    lVar17 = DAT_181107618;
  }
  else {
    fVar27 = *(float *)(lVar17 + 0x10);
    while (fVar15 != fVar27) {
      if (lVar17 == *(longlong *)(DAT_181107628 + uVar22 * 0x10)) goto LAB_1802d1043;
      lVar17 = *(longlong *)(lVar17 + 8);
      fVar27 = *(float *)(lVar17 + 0x10);
    }
    if (lVar17 == 0) goto LAB_1802d1043;
  }
  if (lVar17 == DAT_181107618) {
    if (*param_2 == '\0') {
      fVar27 = 0.0;
    }
    else {
      fVar27 = fVar10;
    }
  }
  else {
    fVar27 = *(float *)(lVar17 + 0x14);
  }
  DAT_1811074b0 = 0xffffff;
  pfVar18 = (float *)FUN_1802b9e90(&local_148,param_1);
  lVar11 = DAT_180ca0a50;
  fVar4 = *pfVar18;
  fVar5 = pfVar18[1];
  fVar6 = pfVar18[2];
  fVar7 = pfVar18[3];
  local_110 = *(undefined8 *)(pfVar18 + 4);
  fVar26 = (float)((ulonglong)local_110 >> 0x20);
  DAT_1811074b0 = 0;
  fVar28 = fVar4 - fVar26;
  fVar24 = fVar28 - DAT_1809f72e4;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  lVar17 = *(longlong *)(lVar11 + 0x14f8);
  *(float *)(lVar17 + 0x118) = fVar24;
  *(float *)(lVar17 + 0x11c) = fVar5;
  *(undefined1 *)(lVar17 + 0x159) = 1;
  puVar1 = (uint *)(lVar11 + 0x1eb4);
  *puVar1 = *puVar1 | 0x4000;
  local_158._0_4_ = (fVar6 - fVar4) + fVar26 + DAT_1809f72e4 * DAT_1808ac540;
  local_158._4_4_ = fVar7;
  local_12c[3] = fVar4;
  fStack_11c = fVar5;
  fStack_118 = fVar6;
  fStack_114 = fVar7;
  cVar12 = FUN_180415e30("##row",&local_158,0);
  cVar13 = FUN_1803dd930(0);
  if (*(int *)(DAT_180ca0a50 + 0x1578) == 0) {
    bVar23 = false;
  }
  else {
    bVar23 = *(int *)(DAT_180ca0a50 + 0x1578) == *(int *)(DAT_180ca0a50 + 0x1ee8);
  }
  cVar14 = FUN_1803e9690(1,0,0);
  uVar25 = extraout_XMM0_Da_00;
  if (cVar14 != '\0') {
    FUN_1803dd930(0);
    uVar25 = extraout_XMM0_Da_01;
  }
  if (cVar12 != '\0') {
    *param_2 = *param_2 == '\0';
  }
  fVar24 = DAT_1808ac1f4;
  if (bVar23 || *param_2 != '\0') {
    fVar26 = fVar10;
  }
  else if (cVar13 == '\0') {
    fVar26 = 0.0;
  }
  else {
    fVar26 = DAT_1808ac1f4;
  }
  local_13c = 0;
  local_138 = 0xffffffff;
  local_158._0_4_ = fVar15;
  local_148 = fVar26;
  local_144 = fVar26;
  local_140 = fVar26;
  FUN_18034a380(uVar25,&local_168,&local_158,&local_148);
  FUN_1802b3660(CONCAT44(fStack_164,local_168) + 0x14,fVar26,DAT_1808ac118,0);
  lVar11 = DAT_180ca0a50;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  lVar17 = *(longlong *)(*(longlong *)(lVar11 + 0x14f8) + 0x2c8);
  local_158._0_4_ = (float)FUN_1803e8900(*(longlong *)(lVar11 + 0x14f8),"##row_hover");
  if (bVar23) {
    fVar15 = fVar10;
  }
  else if (cVar13 == '\0') {
    fVar15 = 0.0;
  }
  else {
    fVar15 = fVar24;
  }
  local_13c = 0;
  local_138 = 0xffffffff;
  local_148 = fVar15;
  local_144 = fVar15;
  local_140 = fVar15;
  FUN_18034a380(extraout_XMM0_Da_02,&local_168,&local_158,&local_148);
  fVar15 = (float)FUN_1802b3660(CONCAT44(fStack_164,local_168) + 0x14,fVar15,DAT_1808ac118,0);
  if (0.0 < fVar15) {
    local_12c[2] = 1.0;
    local_12c[0] = 0.0;
    local_12c[1] = fVar15 * DAT_1808ac1b0 * DAT_1808ac2cc;
    local_158._0_4_ = DAT_1809f72e4 + fVar6;
    local_158._4_4_ = fVar7 + fVar5;
    local_168 = fVar28 - DAT_1809f72e4;
    pfVar18 = local_12c;
    if (0.0 <= local_12c[1]) {
      pfVar18 = local_12c + 1;
    }
    pfVar19 = local_12c + 2;
    if (local_12c[1] <= fVar10) {
      pfVar19 = pfVar18;
    }
    local_1a0 = (char ****)((ulonglong)local_1a0 & 0xffffffff00000000);
    local_1a8 = (float *)CONCAT44(local_1a8._4_4_,DAT_1808ac854);
    fStack_164 = fVar5;
    FUN_1803fe590(lVar17,&local_168,&local_158,
                  DAT_180960f44 & 0xffffff |
                  (int)(longlong)(*pfVar19 * DAT_1808acb94 + fVar24) << 0x18);
  }
  fVar15 = (float)FUN_18053fc00(DAT_1808ac86c);
  fVar10 = local_130;
  if ((*param_2 != '\0') && (0.0 < local_130)) {
    local_168 = fVar15 * fVar24 + fVar4;
    fStack_164 = fVar7 * fVar24 + fVar5;
    local_198 = (char ****)
                CONCAT44(local_198._4_4_,
                         (int)(longlong)((float)(DAT_180960ec0 >> 0x18) * local_130 + fVar24) <<
                         0x18 | DAT_180960ec0 & 0xffffff);
    local_1a0 = (char ****)CONCAT44(local_1a0._4_4_,DAT_1808ac880);
    local_1a8 = &local_168;
    FUN_1802b6e90(lVar17,"nl_glyph_check",
                  "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 448 512\" width=\"448\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M438 106C451 118 451 139 438 151L182 407C170 420 149 420 137 407L9 279C-3 267 -3 246 9 234C21 221 42 221 54 234L160 339L393 106C405 93 426 93 438 106L438 106ZM438 106Z\"/></svg>"
                  ,DAT_1808acbe4);
  }
  FUN_1802b3fe0(local_108,param_1);
  fVar15 = fVar15 + DAT_1808ac8b0;
  fStack_164 = fVar7 + fVar5;
  local_168 = fVar6;
  local_158._0_4_ = fVar4;
  local_158._4_4_ = fVar5;
  FUN_1803fc200(lVar17,&local_158,&local_168,1);
  ppppcVar21 = (char ****)local_108;
  if (0xf < local_f0) {
    ppppcVar21 = local_108[0];
  }
  uVar16 = FUN_1802b38e0(DAT_180960ef8,DAT_180960ec8,fVar27);
  local_168 = fVar15 * fVar10 + fVar4;
  fStack_164 = (float)FUN_18053f0d0((fVar7 - DAT_1808ac930) * fVar24);
  fStack_164 = fStack_164 + fVar5;
  if ((((uVar16 & 0xff000000) != 0) && (ppppcVar21 != (char ****)0x0)) &&
     (*(char *)ppppcVar21 != '\0')) {
    local_158._0_4_ = *(float *)(lVar17 + 0x60);
    local_158._4_4_ = *(float *)(lVar17 + 100);
    uStack_150 = *(undefined4 *)(lVar17 + 0x68);
    uStack_14c = *(undefined4 *)(lVar17 + 0x6c);
    local_180 = 0;
    local_188 = local_188 & 0xffffffff00000000;
    local_190 = 0;
    local_1a0 = (char ****)&local_158;
    local_1a8 = (float *)CONCAT44(local_1a8._4_4_,uVar16);
    local_198 = ppppcVar21;
    FUN_18040a900(*(undefined8 *)(*(longlong *)(lVar17 + 0x38) + 0x18),lVar17,
                  *(undefined4 *)(*(longlong *)(lVar17 + 0x38) + 0x20),&local_168);
  }
  iVar2 = *(int *)(lVar17 + 0xa0);
  iVar3 = iVar2 + -1;
  *(int *)(lVar17 + 0xa0) = iVar3;
  if (iVar3 == 0) {
    puVar20 = (undefined4 *)(*(longlong *)(lVar17 + 0x38) + 0x34);
  }
  else {
    puVar20 = (undefined4 *)((longlong)(iVar2 + -2) * 0x10 + *(longlong *)(lVar17 + 0xa8));
  }
  uVar25 = puVar20[1];
  uVar8 = puVar20[2];
  uVar9 = puVar20[3];
  *(undefined4 *)(lVar17 + 0x60) = *puVar20;
  *(undefined4 *)(lVar17 + 100) = uVar25;
  *(undefined4 *)(lVar17 + 0x68) = uVar8;
  *(undefined4 *)(lVar17 + 0x6c) = uVar9;
  FUN_1803fbff0();
  if (local_f0 < 0x10) {
    local_108[0] = (char ****)local_108;
  }
  else if (local_108[0] == (char ****)0x0) goto LAB_1802d15e8;
  local_178 = 0;
  local_188 = 0;
  local_190 = 0;
  local_198 = (char ****)0x0;
  local_1a8 = (float *)CONCAT44(local_1a8._4_4_,DAT_1808acda0);
  local_1a0 = local_108[0];
  FUN_18040a2f0(&local_168,*(undefined8 *)(DAT_180ca0a50 + 0x11f0),
                *(undefined4 *)(DAT_180ca0a50 + 0x1200),DAT_1808acd08);
LAB_1802d15e8:
  FUN_1802bfbc0(param_1,param_2);
  lVar17 = DAT_180ca0a50;
  iVar3 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
  if (iVar3 < 2) {
    FUN_1803ebc00("Calling PopID() too many times!");
    lVar17 = DAT_180ca0a50;
  }
  else {
    *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar3 + -1;
  }
  *(undefined1 *)(*(longlong *)(lVar17 + 0x14f8) + 0xce) = 1;
  DAT_1809f5b44 = *(undefined4 *)(lVar17 + 4);
  DAT_1809f5b40 = *(undefined4 *)(*(longlong *)(lVar17 + 0x14f8) + 0x10);
  DAT_1809f5b48 = fVar5;
  DAT_1809f5b4c = fVar7;
  DAT_1809f5b50._0_4_ = fVar6;
  DAT_1809f5b50._4_4_ = fVar4;
  FUN_1802baa50(local_12c + 3);
  FUN_18000f890(local_108);
  return cVar12;
}



/* ===== 1802d16f0 FUN_1802d16f0 ===== */

ulonglong FUN_1802d16f0(undefined8 param_1,undefined8 param_2,char *param_3,uint param_4,
                       byte param_5)

{
  undefined8 uVar1;
  code *pcVar2;
  char cVar3;
  char *pcVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  int iVar12;
  undefined8 *puVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  byte bVar16;
  undefined8 *puVar17;
  longlong lVar18;
  ulonglong uVar19;
  char *pcVar20;
  uint uVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [24];
  longlong local_58;
  undefined8 *local_50;
  undefined8 *puStack_48;
  undefined8 *local_40;
  
  puVar15 = auStack_78;
  puVar14 = auStack_78;
  local_50 = (undefined8 *)0x0;
  puStack_48 = (undefined8 *)0x0;
  local_40 = (undefined8 *)0x0;
  uVar11 = 0;
  if ((int)param_4 < 1) {
    FUN_180313b40(param_1,param_2,0,param_4);
    FUN_1803e89e0(param_1);
    puVar14 = auStack_78;
    uVar19 = 0;
  }
  else {
    do {
      puVar13 = puStack_48;
      pcVar20 = param_3 + uVar11;
      if (puStack_48 == local_40) {
        if ((longlong)puStack_48 - (longlong)local_50 == -8) goto LAB_1802d1aa8;
        uVar19 = ((longlong)puStack_48 - (longlong)local_50 >> 3) + 1;
        uVar6 = (longlong)local_40 - (longlong)local_50 >> 3;
        if (0x1fffffffffffffff - (uVar6 >> 1) < uVar6) {
          uVar7 = 0x1fffffffffffffff;
        }
        else {
          uVar6 = (uVar6 >> 1) + uVar6;
          uVar7 = uVar19;
          if (uVar19 <= uVar6) {
            uVar7 = uVar6;
          }
          if (0x1fffffffffffffff < uVar7) {
                    /* WARNING: Subroutine does not return */
            FUN_18000d840();
          }
        }
        uVar6 = (longlong)puStack_48 - (longlong)local_50;
        local_58 = uVar7 * 8;
        puVar17 = (undefined8 *)FUN_18000fb70(local_58);
        uVar6 = uVar6 & 0xfffffffffffffff8;
        *(char **)((longlong)puVar17 + uVar6) = pcVar20;
        if (puVar13 == puStack_48) {
          lVar18 = (longlong)puStack_48 - (longlong)local_50;
          puVar8 = puVar17;
          puVar10 = local_50;
        }
        else {
          FUN_180540530(puVar17,local_50,(longlong)puVar13 - (longlong)local_50);
          lVar18 = (longlong)puStack_48 - (longlong)puVar13;
          puVar8 = (undefined8 *)(uVar6 + 8 + (longlong)puVar17);
          puVar10 = puVar13;
        }
        FUN_180540530(puVar8,puVar10,lVar18);
        if (local_50 != (undefined8 *)0x0) {
          uVar7 = ((longlong)local_40 - (longlong)local_50 >> 3) * 8;
          puVar8 = local_50;
          if (0xfff < uVar7) {
            puVar8 = (undefined8 *)local_50[-1];
            if (0x1f < (ulonglong)((longlong)local_50 + (-8 - (longlong)puVar8))) {
              lVar18 = 5;
              pcVar2 = (code *)swi(0x29);
              iVar5 = (*pcVar2)();
              puVar14 = auStack_70;
              goto LAB_1802d19df;
            }
            uVar7 = uVar7 + 0x27;
          }
          thunk_FUN_1803d64e0(puVar8,uVar7);
        }
        puStack_48 = puVar17 + uVar19;
        local_40 = (undefined8 *)(local_58 + (longlong)puVar17);
        local_50 = puVar17;
      }
      else {
        *puStack_48 = pcVar20;
        puStack_48 = puStack_48 + 1;
      }
      uVar21 = (int)uVar11 + 1;
      uVar11 = (ulonglong)uVar21;
    } while ((int)uVar21 < (int)param_4);
    FUN_180313b40(param_1,param_2,local_50,param_4);
    bVar16 = 0;
    iVar5 = 0;
    if (param_4 < 0x20) goto LAB_1802d1940;
    uVar21 = param_4 & 0x8000001f;
    if ((int)uVar21 < 0) {
      uVar21 = (uVar21 - 1 | 0xffffffe0) + 1;
    }
    auVar23 = ZEXT816(0);
    auVar22 = ZEXT816(0);
    do {
      auVar23 = auVar23 | *(undefined1 (*) [16])(param_3 + iVar5);
      auVar22 = *(undefined1 (*) [16])(param_3 + (longlong)iVar5 + 0x10) | auVar22;
      iVar5 = iVar5 + 0x20;
    } while (iVar5 < (int)(param_4 - uVar21));
    auVar22 = auVar23 | auVar22 | (auVar23 | auVar22) >> 0x40;
    auVar22 = auVar22 | auVar22 >> 0x20;
    auVar22 = auVar22 | auVar22 >> 0x10;
    uVar6 = (ulonglong)(auVar22._0_4_ | auVar22._1_4_);
    for (; bVar16 = (byte)uVar6, iVar5 < (int)param_4; iVar5 = iVar5 + 1) {
LAB_1802d1940:
      uVar6 = (ulonglong)(byte)(bVar16 | param_3[iVar5]);
    }
    FUN_1803e89e0(param_1);
    puVar17 = (undefined8 *)0x0;
    uVar19 = 0;
    puVar13 = (undefined8 *)0x0;
    pcVar20 = (char *)(ulonglong)param_5;
    do {
      iVar12 = (int)puVar13;
      *(undefined8 *)(puVar14 + -8) = 0x1802d196d;
      FUN_1803e8a70(puVar13);
      uVar1 = *(undefined8 *)(*(longlong *)(puVar14 + 0x88) + (longlong)puVar17 * 8);
      *(undefined8 *)(puVar14 + -8) = 0x1802d1989;
      cVar3 = FUN_1802d0e90(uVar1,(char *)((longlong)puVar17 + (longlong)param_3),uVar6 & 0xff);
      if ((cVar3 != '\0') && (uVar19 = 1, (char)pcVar20 != '\0')) {
        for (pcVar4 = param_3; pcVar4 != param_3 + (int)param_4; pcVar4 = pcVar4 + 1) {
          if (*pcVar4 != '\0') goto LAB_1802d19b1;
        }
        *(char *)((longlong)puVar17 + (longlong)param_3) = '\x01';
      }
LAB_1802d19b1:
      lVar18 = *(longlong *)(DAT_180ca0a50 + 0x14f8);
      iVar5 = *(int *)(lVar18 + 0x108);
      if (iVar5 < 2) {
        *(undefined8 *)(puVar14 + -8) = 0x1802d19d6;
        FUN_1803ebc00("Calling PopID() too many times!");
      }
      else {
LAB_1802d19df:
        iVar12 = (int)puVar13;
        *(int *)(lVar18 + 0x108) = iVar5 + -1;
      }
      puVar13 = (undefined8 *)(ulonglong)(iVar12 + 1U);
      puVar17 = (undefined8 *)((longlong)puVar17 + 1);
    } while ((int)(iVar12 + 1U) < (int)param_4);
  }
  iVar5 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
  if (iVar5 < 2) {
    *(undefined8 *)(puVar14 + -8) = 0x1802d1a37;
    FUN_1803ebc00("Calling PopID() too many times!");
  }
  else {
    *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar5 + -1;
  }
  lVar18 = *(longlong *)(puVar14 + 0x28);
  if (lVar18 != 0) {
    uVar11 = (*(longlong *)(puVar14 + 0x38) - lVar18 >> 3) * 8;
    lVar9 = lVar18;
    if (0xfff < uVar11) {
      lVar9 = *(longlong *)(lVar18 + -8);
      if (0x1f < (lVar18 - lVar9) - 8U) {
        pcVar2 = (code *)swi(0x29);
        (*pcVar2)(5);
        puVar15 = puVar14 + 8;
LAB_1802d1aa8:
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)(puVar15 + -8) = 0x1802d1aad;
        FUN_1800118d0();
      }
      uVar11 = uVar11 + 0x27;
    }
    *(undefined8 *)(puVar14 + -8) = 0x1802d1a85;
    thunk_FUN_1803d64e0(lVar9,uVar11);
  }
  return uVar19 & 0xff;
}



/* ===== 1802d1ac0 FUN_1802d1ac0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802d1ac0(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  longlong lVar4;
  float fVar5;
  undefined1 auStack_e8 [32];
  undefined *local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  float local_b4;
  undefined4 local_b0;
  undefined **local_a8;
  undefined4 local_a0;
  undefined4 *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined1 local_80;
  undefined *local_78;
  char *local_70;
  undefined1 local_68;
  undefined8 local_60;
  undefined4 *local_58;
  char *local_50;
  undefined1 local_48;
  undefined8 local_40;
  undefined *local_38;
  undefined **local_30;
  char *local_28;
  ulonglong local_20;
  
  local_20 = DAT_180919500 ^ (ulonglong)auStack_e8;
  FUN_1802b9110("local player model");
  FUN_1803e89e0("local_model");
  cVar3 = FUN_1802bc070("model_popup","model");
  uVar2 = DAT_1808acda0;
  if (cVar3 != '\0') {
    FUN_180312320("player");
    FUN_1802d0470("player",&DAT_180920940);
    FUN_1802d0470("overlay##player",&DAT_180920998);
    FUN_1803e89e0("skeleton");
    FUN_1802c0a60("skeleton",&DAT_1809209f0);
    FUN_1803ec6c0(0,uVar2);
    FUN_1802cedb0("##color",&DAT_1809209f4,1);
    iVar1 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
    if (iVar1 < 2) {
      FUN_1803ebc00("Calling PopID() too many times!");
    }
    else {
      *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar1 + -1;
    }
    FUN_1802c0a60(&DAT_1806f83d8,param_1 + 0x1918);
    FUN_1803ec6c0(0,uVar2);
    FUN_1802cedb0("##glow_color",param_1 + 0x191c,1);
    FUN_1802d0b90(&DAT_1806e64c0);
    FUN_1802d0470(&DAT_1806e64c0,&DAT_180920a04);
    FUN_1802d0470("overlay##arms",&DAT_180920a5c);
    FUN_1802d0b90("gloves");
    FUN_1802d0470("gloves",&DAT_180920ab4);
    FUN_1802d0470("overlay##gloves",&DAT_180920b0c);
    FUN_1802bc580();
  }
  cVar3 = FUN_1802bc070("weapon_popup","weapon");
  if (cVar3 != '\0') {
    FUN_180312320("weapon");
    FUN_1802d0470("weapon",&DAT_180920b64);
    FUN_1802d0470("overlay##weapon",&DAT_180920bbc);
    FUN_1802d0b90("keychain");
    FUN_1802d0470("keychain",&DAT_180920c14);
    FUN_1802d0470("overlay##keychain",&DAT_180920c6c);
    FUN_1802d0b90("settings");
    FUN_1802c0a60("colorize stattrak",&DAT_180920cc4);
    FUN_1803ec6c0(0,uVar2);
    lVar4 = DAT_180ca0a50;
    *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
    if ((DAT_1809f5b40 == *(int *)(*(longlong *)(lVar4 + 0x14f8) + 0x10)) &&
       (DAT_1809f5b44 == *(int *)(lVar4 + 4))) {
      local_78 = &DAT_180920cc8;
      fVar5 = (float)DAT_1809f5b50 - DAT_1808ac97c;
      local_70 = "weapon";
      local_58 = &DAT_180920cd8;
      local_50 = "knife";
      local_30 = &local_78;
      local_a8 = &local_38;
      local_98 = &local_b8;
      local_68 = 1;
      local_60 = 0;
      local_48 = 1;
      local_40 = 0;
      local_38 = (undefined *)0x0;
      local_28 = (char *)CONCAT44(local_28._4_4_,2);
      local_b8 = 0;
      local_a0 = 1;
      local_90 = 0;
      local_88 = 0;
      local_80 = 0;
      local_b4 = fVar5;
      local_b0 = FUN_18053f0d0((DAT_1809f5b4c - DAT_1808ac97c) * DAT_1808ac1f4 + DAT_1809f5b48);
      DAT_1809f5b50._0_4_ = fVar5 - DAT_1808ac7ac;
      FUN_1802ce6f0("##stattrak_colors",&local_a8,&local_b4);
    }
    FUN_1802bc580();
  }
  FUN_1803e89e0("transparency");
  cVar3 = FUN_1802bc070("transparency_options","transparency");
  if (cVar3 != '\0') {
    FUN_180312320("modes");
    local_38 = &DAT_1806d2870;
    local_30 = (undefined **)&DAT_1806d286c;
    local_28 = "on + rezoom";
    FUN_1802c2640("while scoped",&DAT_180920e38,&local_38,3);
    FUN_1802c0a60("held grenade",&DAT_180920e3c);
    FUN_1802c0a60("close to wall",&DAT_180920e3d);
    FUN_1802c0a60("teammates in view",&DAT_180920e3e);
    FUN_1802d0b90("settings");
    local_c0 = 0;
    local_c8 = &DAT_1806f0260;
    FUN_18033fa10("value",&DAT_180920e40,0,100);
    FUN_1802bc580();
  }
  lVar4 = DAT_180ca0a50;
  iVar1 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
  if (iVar1 < 2) {
    FUN_1803ebc00("Calling PopID() too many times!");
    lVar4 = DAT_180ca0a50;
  }
  else {
    *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar1 + -1;
  }
  iVar1 = *(int *)(*(longlong *)(lVar4 + 0x14f8) + 0x108);
  if (iVar1 < 2) {
    FUN_1803ebc00("Calling PopID() too many times!");
  }
  else {
    *(int *)(*(longlong *)(lVar4 + 0x14f8) + 0x108) = iVar1 + -1;
  }
  return;
}



/* ===== 1802d1f90 FUN_1802d1f90 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802d1f90(undefined8 *param_1)

{
  size_t _Size;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
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
  int iVar21;
  size_t sVar22;
  undefined8 *_Buf1;
  char *_Str;
  undefined8 local_6e8;
  undefined8 uStack_6e0;
  undefined8 local_6d8;
  undefined8 uStack_6d0;
  undefined8 local_6c8;
  undefined8 uStack_6c0;
  undefined8 local_6b8;
  undefined8 uStack_6b0;
  undefined1 local_6a8;
  undefined1 local_6a4;
  undefined4 local_6a0;
  undefined4 local_69c;
  undefined4 local_698;
  undefined4 local_694;
  undefined1 local_690;
  undefined4 local_68c;
  undefined1 local_688;
  undefined4 local_684;
  undefined1 local_680;
  undefined4 local_67c;
  undefined4 local_678;
  undefined1 local_674;
  undefined8 local_670;
  undefined1 local_668;
  undefined4 local_664;
  undefined4 local_660;
  undefined4 local_65c;
  undefined4 local_658;
  undefined1 local_654;
  undefined4 local_650;
  undefined4 local_64c;
  undefined8 local_648;
  undefined8 uStack_640;
  undefined4 local_638;
  undefined8 local_634;
  undefined1 local_62c [160];
  undefined8 local_58c;
  undefined8 uStack_584;
  undefined8 local_57c;
  undefined8 uStack_574;
  undefined8 local_56c;
  undefined8 uStack_564;
  undefined8 local_55c;
  undefined8 uStack_554;
  undefined8 local_54c;
  undefined8 uStack_544;
  undefined8 local_53c;
  undefined8 uStack_534;
  undefined4 local_52c;
  undefined8 local_528;
  undefined8 uStack_520;
  undefined8 local_518;
  undefined8 uStack_510;
  undefined8 local_508;
  undefined2 local_500;
  undefined4 local_4fc;
  undefined1 local_4f8;
  undefined4 local_4f4;
  undefined4 local_4f0;
  undefined4 local_4ec;
  undefined4 local_4e8;
  undefined1 local_4e4;
  undefined4 local_4e0;
  undefined4 local_4dc;
  undefined4 local_4d8;
  undefined4 local_4d4;
  undefined1 local_4d0;
  undefined4 local_4cc;
  undefined4 local_4c8;
  undefined4 local_4c4;
  undefined4 local_4c0;
  undefined1 local_4bc;
  undefined8 local_4b8;
  undefined8 uStack_4b0;
  undefined8 local_4a8;
  undefined4 local_4a0;
  undefined1 local_49c;
  undefined8 local_498;
  undefined8 uStack_490;
  undefined4 local_488;
  undefined1 local_484;
  undefined4 local_480;
  undefined1 local_47c;
  undefined4 local_478;
  undefined1 local_474;
  undefined4 local_470;
  undefined1 local_46c;
  undefined4 local_468;
  undefined4 local_464;
  undefined4 local_460;
  undefined4 local_45c;
  undefined8 local_458;
  undefined8 uStack_450;
  undefined2 local_448;
  undefined1 local_444;
  undefined4 local_440;
  undefined4 local_43c;
  undefined4 local_438;
  undefined4 local_434;
  undefined4 local_430;
  undefined1 local_42c;
  undefined8 local_428;
  undefined8 uStack_420;
  undefined1 local_418;
  undefined4 local_414;
  undefined4 local_410;
  undefined4 local_40c;
  undefined4 local_408;
  undefined1 local_404;
  undefined8 local_400;
  undefined4 local_3f8;
  undefined4 local_3f4;
  undefined4 local_3f0;
  undefined4 local_3ec;
  undefined1 local_3e8;
  undefined4 local_3e4;
  undefined4 local_3e0;
  undefined4 local_3dc;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined8 local_3c8;
  undefined1 local_3c0;
  undefined8 local_3bc;
  undefined4 local_3b4;
  undefined1 local_3b0;
  undefined4 local_3ac;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined4 local_388;
  undefined4 local_384;
  undefined8 local_380;
  undefined1 local_378 [192];
  undefined1 local_2b8;
  undefined4 local_2b4;
  undefined4 local_2b0;
  undefined4 local_2ac;
  undefined4 local_2a8;
  undefined4 local_2a4;
  undefined4 local_2a0;
  undefined2 local_29c;
  undefined4 local_298;
  undefined4 local_294;
  undefined4 local_290;
  undefined1 local_28c;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined4 local_268;
  undefined4 local_264;
  undefined4 local_260;
  undefined4 local_25c;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined4 local_218;
  undefined4 local_214;
  undefined1 local_210;
  undefined4 local_20c;
  undefined4 local_208;
  undefined4 local_204;
  undefined4 local_200;
  undefined4 local_1fc;
  undefined4 local_1f8;
  undefined4 local_1f4;
  undefined4 local_1f0;
  undefined1 local_1ec;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined4 local_1d8;
  undefined1 local_1d4;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined2 local_1b0;
  undefined4 local_1ac;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined1 local_198;
  undefined4 local_194;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 local_184;
  undefined1 local_180;
  undefined4 local_17c;
  undefined8 local_178;
  undefined2 local_170;
  undefined4 local_16c;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined4 local_148;
  undefined2 local_144;
  undefined1 local_142;
  undefined4 local_140;
  undefined4 local_13c;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined8 local_118;
  undefined2 local_110;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined8 local_f4;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined8 local_e4;
  undefined4 local_dc;
  undefined2 local_d8;
  
  uVar20 = _UNK_1808adca8;
  uVar19 = _DAT_1808adca0;
  uVar18 = _UNK_1808adc38;
  uVar17 = _DAT_1808adc30;
  uVar16 = _UNK_1808adb98;
  uVar15 = _DAT_1808adb90;
  uVar14 = _UNK_1808adac8;
  uVar13 = _DAT_1808adac0;
  uVar12 = _UNK_1808ada28;
  uVar11 = _DAT_1808ada20;
  uVar10 = _UNK_1808ad9c8;
  uVar9 = _DAT_1808ad9c0;
  uVar8 = _UNK_1808ad808;
  uVar7 = _DAT_1808ad800;
  uVar6 = _UNK_1808ad7d8;
  uVar5 = _DAT_1808ad7d0;
  uVar4 = _UNK_1808ad788;
  uVar3 = _DAT_1808ad780;
  uVar2 = _UNK_1808ad768;
  uVar1 = _DAT_1808ad760;
  _Str = &DAT_18093d3a0;
  do {
    sVar22 = strlen(_Str);
    _Size = param_1[2];
    if ((ulonglong)param_1[3] < 0x10) {
      _Buf1 = param_1;
    }
    else {
      _Buf1 = (undefined8 *)*param_1;
    }
    if (_Size == sVar22) {
      if (_Size != 0) {
        iVar21 = memcmp(_Buf1,_Str,_Size);
        if (iVar21 != 0) goto LAB_1802d2710;
      }
      local_6a8 = 0;
      local_6e8 = 0;
      uStack_6e0 = 0;
      local_6d8 = 0;
      uStack_6d0 = 0;
      local_6a4 = 0;
      local_6c8 = 0;
      uStack_6c0 = 0;
      local_6a0 = 0x3f19999a;
      local_6b8 = 0;
      uStack_6b0 = 0;
      local_69c = 0x3f19999a;
      local_648 = _DAT_1808ade70;
      uStack_640 = _UNK_1808ade78;
      local_698 = 0x3f333333;
      local_694 = 0x3f800000;
      local_690 = 0;
      local_68c = 0;
      local_688 = 0;
      local_684 = 0x40000000;
      local_680 = 0;
      local_67c = 0x3fe66666;
      local_678 = 0x3f4ccccd;
      local_674 = 0;
      local_670 = 0x40400000;
      local_668 = 0;
      local_664 = 0;
      local_660 = 0x40a00000;
      local_65c = 0x44160000;
      local_658 = 0x44af0000;
      local_654 = 0;
      local_650 = 0x3f2147ae;
      local_64c = 0x3f30a3d7;
      local_638 = 0x3f000000;
      local_634 = 0x3f800000;
      FUN_180540170(local_62c,0,0xa0);
      local_52c = 0x3e800000;
      local_58c = 0;
      uStack_584 = 0;
      local_508 = 0;
      local_57c = 0;
      uStack_574 = 0;
      local_500 = 0;
      local_56c = 0;
      uStack_564 = 0;
      local_4fc = 0x3f800000;
      local_55c = 0;
      uStack_554 = 0;
      local_4f8 = 0;
      local_54c = 0;
      uStack_544 = 0;
      local_4f4 = 0x3f800000;
      local_53c = 0;
      uStack_534 = 0;
      local_4f0 = 0x3f800000;
      local_528 = _DAT_1808adc20;
      uStack_520 = _UNK_1808adc28;
      local_518 = _DAT_1808adc00;
      uStack_510 = _UNK_1808adc08;
      local_4ec = 0x3f800000;
      local_4e8 = 0x3f800000;
      local_4e4 = 0;
      local_4e0 = 0x3f800000;
      local_4dc = 0x3f800000;
      local_4d8 = 0x3f800000;
      local_4d4 = 0x3f800000;
      local_4d0 = 0;
      local_4cc = 0x3f800000;
      local_4c8 = 0x3f800000;
      local_4c4 = 0x3f800000;
      local_4c0 = 0x3f800000;
      local_4bc = 0;
      local_4b8 = uVar17;
      uStack_4b0 = uVar18;
      local_4a8 = 0x3f800000;
      local_4a0 = 0x3f800000;
      local_49c = 0;
      local_498 = uVar11;
      uStack_490 = uVar12;
      local_488 = 0x3f800000;
      local_484 = 0;
      local_480 = 0x3b83126f;
      local_47c = 0;
      local_478 = 0x3ee66666;
      local_474 = 0;
      local_470 = 0x3f0ccccd;
      local_46c = 0;
      local_468 = 0;
      local_464 = 0x3f800000;
      local_460 = 0x3f800000;
      local_45c = 0x3f800000;
      local_458 = uVar17;
      uStack_450 = uVar18;
      local_448 = 0x101;
      local_444 = 0;
      local_440 = 0x3f0c8b44;
      local_43c = 0x3f0c8b44;
      local_438 = 0x3f20a3d7;
      local_434 = 0x3f800000;
      local_430 = 100;
      local_42c = 0;
      local_428 = uVar15;
      uStack_420 = uVar16;
      local_418 = 0;
      local_414 = 0x3f800000;
      local_410 = 0x3f800000;
      local_40c = 0x3f800000;
      local_408 = 0x3f800000;
      local_404 = 0;
      local_400 = 0;
      local_3f8 = 0xbf000000;
      local_3f4 = 0x3f800000;
      local_3f0 = 100;
      local_3ec = 100;
      local_3e8 = 0;
      local_3e4 = 0x3eb4af4f;
      local_3e0 = 0x3eb4af4f;
      local_3dc = 0x3ee6e979;
      local_3d8 = uVar17;
      uStack_3d0 = uVar18;
      local_3c8 = 0x3f800000;
      local_3c0 = 0;
      local_3bc = 0;
      local_3b4 = 100;
      local_3b0 = 0;
      local_3ac = 0x3f800000;
      local_3a8 = uVar17;
      uStack_3a0 = uVar18;
      local_398 = uVar17;
      uStack_390 = uVar18;
      local_388 = 0x3f800000;
      local_384 = 0x3f800000;
      local_380 = 0x3f800000;
      FUN_180540170(local_378,0,0xc0);
      local_2b8 = 0;
      local_2b4 = 0x3f800000;
      local_2b0 = 0x3f800000;
      local_2ac = 0x3f800000;
      local_2a8 = 0x3f008312;
      local_2a4 = 0x19;
      local_2a0 = 0x40200000;
      local_29c = 1;
      local_298 = 0xfffffda8;
      local_294 = 600;
      local_290 = 0x3f800000;
      local_28c = 0;
      local_288 = uVar7;
      uStack_280 = uVar8;
      local_278 = uVar3;
      uStack_270 = uVar4;
      local_268 = 0x14;
      local_264 = 0x14;
      local_260 = 0x3f800000;
      local_25c = 0x3f800000;
      local_258 = uVar17;
      uStack_250 = uVar18;
      local_248 = uVar17;
      uStack_240 = uVar18;
      local_238 = uVar17;
      uStack_230 = uVar18;
      local_228 = uVar17;
      uStack_220 = uVar18;
      local_218 = 0x3f800000;
      local_214 = 0x3f800000;
      local_210 = 0;
      local_20c = 0x3f800000;
      local_208 = 0x3f800000;
      local_204 = 0x3f800000;
      local_200 = 0x3f800000;
      local_1fc = 0xffffffe7;
      local_1f8 = 0x46;
      local_1f4 = 0x32;
      local_1f0 = 0x50;
      local_1ec = 0;
      local_1e8 = uVar5;
      uStack_1e0 = uVar6;
      local_1d8 = 0;
      local_1d4 = 0;
      local_1d0 = 0;
      local_1c8 = 0;
      uStack_1c0 = 0;
      local_1b8 = 0;
      local_1b0 = 0;
      local_1ac = 0;
      local_1a8 = uVar1;
      uStack_1a0 = uVar2;
      local_198 = 0;
      local_194 = 0xffffffff;
      local_190 = 0x40400000;
      local_18c = 0x3f000000;
      local_188 = 0x3e4ccccd;
      local_184 = 0x425c0000;
      local_180 = 0;
      local_17c = 100;
      local_178 = 100;
      local_170 = 0;
      local_16c = 0x3f800000;
      local_168 = uVar9;
      uStack_160 = uVar10;
      local_158 = uVar19;
      uStack_150 = uVar20;
      local_148 = 0x3f19999a;
      local_144 = 1;
      local_142 = 0;
      local_140 = 0x3f800000;
      local_13c = 0x3f800000;
      local_138 = uVar13;
      uStack_130 = uVar14;
      local_128 = 0x3f800000;
      local_124 = 0x3e8c8b44;
      local_120 = 100;
      local_11c = 0x50;
      local_118 = 100;
      local_110 = 1;
      local_10c = 0x3f800000;
      local_108 = uVar17;
      uStack_100 = uVar18;
      local_f8 = 0x3f800000;
      local_f4 = 0x3f800000;
      local_ec = 0x32;
      local_e8 = 100;
      local_e4 = 100;
      local_dc = 0;
      local_d8 = 0;
      FUN_180540530(_Str,&local_6e8,0x614);
    }
LAB_1802d2710:
    _Str = _Str + 0x614;
    if (_Str == &DAT_18094f760) {
      return;
    }
  } while( true );
}



/* ===== 1802d2770 FUN_1802d2770 ===== */

void FUN_1802d2770(longlong param_1)

{
  undefined4 uVar1;
  float fVar2;
  char cVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float local_res8 [2];
  float local_res10 [2];
  float local_48 [2];
  float local_40 [10];
  
  FUN_1802b9110("world");
  FUN_1802c0a60("world modulation",param_1);
  FUN_1803ec6c0(0);
  FUN_1802cedb0("##modulation_color",param_1 + 4,0);
  FUN_1802c0a60("gamma",param_1 + 0x14);
  cVar3 = FUN_1802badc0("gamma_options","gamma");
  fVar2 = DAT_1808ac750;
  if (cVar3 != '\0') {
    local_res10[0] = 5.0;
    local_40[0] = 2.2;
    local_48[0] = DAT_180d00cb0;
    if (0.0 < *(float *)(param_1 + 0x18)) {
      pfVar6 = (float *)(param_1 + 0x18);
    }
    else {
      pfVar5 = local_48;
      if (DAT_180d00cb0 <= 0.0) {
        pfVar5 = local_40;
      }
      pfVar4 = local_res8;
      if (DAT_1808ac1f4 <= *pfVar5) {
        pfVar4 = pfVar5;
      }
      pfVar6 = local_res10;
      if (*pfVar5 <= DAT_1808ac750) {
        pfVar6 = pfVar4;
      }
    }
    local_res8[0] = *pfVar6;
    cVar3 = FUN_18033e3a0("gamma value",local_res8,DAT_1808ac1f4,DAT_1808ac750,&DAT_1806dfe08,0);
    if (cVar3 != '\0') {
      *(float *)(param_1 + 0x18) = local_res8[0];
    }
    FUN_1802bc580();
  }
  FUN_1802c0a60("bloom",param_1 + 0x1c);
  cVar3 = FUN_1802badc0("bloom_options","bloom");
  if (cVar3 != '\0') {
    FUN_18033e3a0("bloom value",param_1 + 0x20,0,fVar2,&DAT_1806dfe08,0);
    FUN_1802bc580();
  }
  FUN_1802c0a60("wetness",param_1 + 0x24);
  cVar3 = FUN_1802badc0("wetness_options","wetness");
  if (cVar3 != '\0') {
    FUN_18033e3a0("density",param_1 + 0x28,0,fVar2,&DAT_1806dfe08,0);
    FUN_18033e3a0("speed",param_1 + 0x2c,0,fVar2,&DAT_1806dfe08,0);
    FUN_1802bc580();
  }
  FUN_1802c0a60(&DAT_1806f85cc,param_1 + 0x30);
  cVar3 = FUN_1802badc0("wind_options",&DAT_1806f85cc);
  if (cVar3 != '\0') {
    FUN_18033e3a0("strength",param_1 + 0x34,0,DAT_1808ac950,&DAT_1806eabd0,0);
    FUN_18033e3a0("direction",param_1 + 0x38,0,DAT_1808acbd0,&DAT_18074144c,0);
    FUN_1802bc580();
  }
  FUN_1802c0a60(&DAT_1806f8588,param_1 + 0x50);
  FUN_1803ec6c0(0);
  FUN_1802cedb0("##fog_color",param_1 + 0x54,1);
  cVar3 = FUN_1802badc0("fog_options",&DAT_1806f8588);
  uVar1 = DAT_1808ac34c;
  if (cVar3 != '\0') {
    FUN_18033e3a0("density",param_1 + 100,0,DAT_1808ac34c,&DAT_1806dfe08,0);
    FUN_18033e3a0("distance",param_1 + 0x68,DAT_1808acbf8,DAT_1808acc94,&DAT_18074144c,0);
    FUN_18033e3a0("falloff",param_1 + 0x6c,0,uVar1,&DAT_1806dfe08,0);
    FUN_18033e3a0(&DAT_1806f83d8,param_1 + 0x70,0,DAT_1808ac864,&DAT_1806dfe08,0);
    FUN_1802bc580();
  }
  FUN_1802c0a60("depth of field",param_1 + 0x3c);
  cVar3 = FUN_1802badc0("dof_options","depth of field");
  if (cVar3 != '\0') {
    FUN_18033e3a0("near blurry",param_1 + 0x40,0,DAT_1808aca80,&DAT_18074144c,0);
    uVar1 = DAT_1808acb08;
    FUN_18033e3a0("near crisp",param_1 + 0x44,0,DAT_1808acb08,&DAT_18074144c,0);
    FUN_18033e3a0("far crisp",param_1 + 0x48,uVar1,DAT_1808acc50,&DAT_18074144c,0);
    FUN_18033e3a0("far blurry",param_1 + 0x4c,DAT_1808acb60,DAT_1808acc78,&DAT_18074144c,0);
    FUN_1802bc580();
  }
  return;
}



/* ===== 1802d2bc0 FUN_1802d2bc0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802d2bc0(int *param_1)

{
  size_t sVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  size_t sVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 *puVar8;
  undefined8 *_Buf1;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  bool bVar17;
  undefined1 auStack_1b8 [32];
  char *local_198;
  undefined8 *local_190;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  ulonglong local_168;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined *local_140;
  char *local_138;
  char *local_130;
  char *local_128;
  undefined *local_120;
  undefined *local_118;
  undefined *local_110;
  undefined1 local_108 [160];
  ulonglong local_68;
  
  local_68 = DAT_180919500 ^ (ulonglong)auStack_1b8;
  FUN_1802b9110(&DAT_1806f8584);
  local_140 = &DAT_1806e4e50;
  local_138 = "texture";
  local_130 = "shader";
  FUN_1802c2640("sky source",param_1,&local_140,3);
  puVar16 = (undefined8 *)&DAT_1806dfd84;
  if (*param_1 == 1) {
    if (DAT_180cd107f == '\0') {
      FUN_1803739c0();
      FUN_180374710();
      DAT_180cd107f = '\x01';
    }
    puVar9 = DAT_181107f40;
    puVar15 = (undefined8 *)&DAT_1806dfd84;
    for (puVar13 = DAT_181107f38; puVar13 != puVar9; puVar13 = puVar13 + 9) {
      sVar5 = strlen((char *)(param_1 + 1));
      sVar1 = puVar13[2];
      if ((ulonglong)puVar13[3] < 0x10) {
        _Buf1 = puVar13;
      }
      else {
        _Buf1 = (undefined8 *)*puVar13;
      }
      if ((sVar1 == sVar5) &&
         (((sVar1 == 0 || (iVar4 = memcmp(_Buf1,param_1 + 1,sVar1), iVar4 == 0)) &&
          (puVar15 = puVar13 + 4, 0xf < (ulonglong)puVar13[7])))) {
        puVar15 = (undefined8 *)*puVar15;
      }
    }
    cVar3 = FUN_1802c22b0("skybox",puVar15);
    puVar13 = DAT_181107f40;
    puVar15 = DAT_181107f38;
    if (cVar3 != '\0') {
      for (; puVar15 != puVar13; puVar15 = puVar15 + 9) {
        sVar5 = strlen((char *)(param_1 + 1));
        sVar1 = puVar15[2];
        uVar14 = puVar15[3];
        puVar9 = puVar15;
        if (0xf < uVar14) {
          puVar9 = (undefined8 *)*puVar15;
        }
        if (sVar1 == sVar5) {
          if (sVar1 == 0) {
            bVar17 = true;
          }
          else {
            iVar4 = memcmp(puVar9,param_1 + 1,sVar1);
            bVar17 = iVar4 == 0;
          }
        }
        else {
          bVar17 = false;
        }
        FUN_180540170(local_108,0,0xa0);
        local_190 = puVar15;
        if (0xf < uVar14) {
          local_190 = (undefined8 *)*puVar15;
        }
        plVar10 = puVar15 + 4;
        if (0xf < (ulonglong)puVar15[7]) {
          plVar10 = (longlong *)*plVar10;
        }
        local_198 = (char *)CONCAT44(local_198._4_4_,*(undefined4 *)(puVar15 + 8));
        snprintf(local_108,0xa0,"%s  %dpx##%s",plVar10);
        cVar3 = FUN_1802b74f0(local_108,bVar17,0,0);
        if (cVar3 != '\0') {
          puVar9 = puVar15;
          if (0xf < (ulonglong)puVar15[3]) {
            puVar9 = (undefined8 *)*puVar15;
          }
          snprintf(param_1 + 1,0xa0,&DAT_1806d3198,puVar9);
          FUN_1803ee1f0();
        }
      }
      FUN_1802b5590();
      iVar4 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
      if (iVar4 < 2) {
        FUN_1803ebc00("Calling PopID() too many times!");
      }
      else {
        *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar4 + -1;
      }
    }
  }
  if (*param_1 == 2) {
    if (DAT_180cd107f == '\0') {
      FUN_1803739c0();
      FUN_180374710();
      DAT_180cd107f = '\x01';
    }
    lVar6 = FUN_18037a6f0(param_1);
    if (((lVar6 != 0) ||
        ((DAT_181108108 != DAT_181108110 &&
         (FUN_18037a7a0(param_1), lVar6 = DAT_181108108, DAT_181108108 != 0)))) &&
       (puVar16 = (undefined8 *)(lVar6 + 0x20), 0xf < *(ulonglong *)(lVar6 + 0x38))) {
      puVar16 = (undefined8 *)*puVar16;
    }
    cVar3 = FUN_1802c22b0("sky shader",puVar16);
    lVar7 = DAT_181108110;
    lVar11 = DAT_181108108;
    if (cVar3 != '\0') {
      for (; lVar11 != lVar7; lVar11 = lVar11 + 0x60) {
        plVar10 = (longlong *)(lVar11 + 0x20);
        if (0xf < *(ulonglong *)(lVar11 + 0x38)) {
          plVar10 = (longlong *)*plVar10;
        }
        cVar3 = FUN_1802b74f0(plVar10,lVar6 == lVar11,0,0);
        if (cVar3 != '\0') {
          FUN_18037a7a0(param_1,lVar11);
          FUN_1803ee1f0();
        }
      }
      FUN_1802b5590();
      iVar4 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
      if (iVar4 < 2) {
        FUN_1803ebc00("Calling PopID() too many times!");
      }
      else {
        *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar4 + -1;
      }
    }
    if (lVar6 != 0) {
      lVar11 = *(longlong *)(lVar6 + 0x48);
      if ((*(longlong *)(lVar6 + 0x50) - lVar11 >> 4) * -0x3333333333333333 != 0) {
        uVar14 = 0;
        do {
          if (7 < uVar14) break;
          lVar7 = uVar14 * 0x50;
          puVar16 = (undefined8 *)(lVar7 + 0x20 + lVar11);
          if (0xf < *(ulonglong *)(lVar7 + 0x38 + lVar11)) {
            puVar16 = (undefined8 *)*puVar16;
          }
          local_190 = (undefined8 *)((ulonglong)local_190 & 0xffffffff00000000);
          local_198 = "%.3f";
          FUN_18033e3a0(puVar16,param_1 + uVar14 + 0x39,*(undefined4 *)(lVar7 + 0x40 + lVar11),
                        *(undefined4 *)(lVar7 + 0x44 + lVar11));
          uVar14 = uVar14 + 1;
          lVar11 = *(longlong *)(lVar6 + 0x48);
        } while (uVar14 < (ulonglong)
                          ((*(longlong *)(lVar6 + 0x50) - lVar11 >> 4) * -0x3333333333333333));
      }
      cVar3 = FUN_1802cf4d0("defaults");
      if (cVar3 != '\0') {
        FUN_18037a7a0(param_1,lVar6);
      }
    }
    cVar3 = FUN_1802cf4d0("reload shaders");
    if (cVar3 != '\0') {
      FUN_1803739c0();
      FUN_180374710();
      DAT_180cd107f = '\x01';
      DAT_180cd10bb = 1;
    }
    local_180 = *(ulonglong *)(param_1 + 0x41);
    uStack_178 = CONCAT44(0x3f800000,param_1[0x43]);
    FUN_1802cedb0("primary",&local_180,0);
    param_1[0x41] = (int)local_180;
    param_1[0x42] = local_180._4_4_;
    param_1[0x43] = (int)uStack_178;
    local_180 = *(ulonglong *)(param_1 + 0x45);
    uStack_178 = CONCAT44(0x3f800000,param_1[0x47]);
    FUN_1802cedb0("secondary",&local_180,0);
    param_1[0x45] = (int)local_180;
    param_1[0x46] = local_180._4_4_;
    param_1[0x47] = (int)uStack_178;
    FUN_1802c0a60("recolor with palette",(longlong)param_1 + 0x131);
    cVar3 = FUN_1802badc0("recolor_options","recolor with palette");
    if (cVar3 != '\0') {
      local_190 = (undefined8 *)((ulonglong)local_190 & 0xffffffff00000000);
      local_198 = "%.2f";
      FUN_18033e3a0("recolor strength",param_1 + 0x4d,0,DAT_1808ac34c);
      FUN_1802bc580();
    }
    local_190 = (undefined8 *)((ulonglong)local_190 & 0xffffffff00000000);
    local_198 = "%.2f";
    FUN_18033e3a0("exposure",param_1 + 0x49,0,DAT_1808ac838);
    local_198 = "%.0f fps";
    if ((float)param_1[0x4a] <= 0.0) {
      local_198 = "every frame";
    }
    local_190 = (undefined8 *)((ulonglong)local_190 & 0xffffffff00000000);
    FUN_18033e3a0("update rate",param_1 + 0x4a,0,DAT_1808acb84);
    local_128 = "from shader";
    local_120 = &DAT_18075cf58;
    local_118 = &DAT_18075cf50;
    local_110 = &DAT_18075cf6c;
    FUN_1802c2640("resolution",param_1 + 0x4b,&local_128,4);
    FUN_1802c0a60("supersample 2x",param_1 + 0x4c);
    uStack_178 = 0;
    local_170 = 7;
    local_168 = 0xf;
    local_180 = (ulonglong)
                CONCAT16(s_folder_18075cf20[6],
                         CONCAT24(s_folder_18075cf20._4_2_,s_folder_18075cf20._0_4_));
    puVar8 = (undefined4 *)FUN_1800134a0(&local_180,"C:\\neverlose\\shaders\\sky",0x18);
    local_160 = *puVar8;
    uStack_15c = puVar8[1];
    uStack_158 = puVar8[2];
    uStack_154 = puVar8[3];
    local_150 = puVar8[4];
    uStack_14c = puVar8[5];
    uStack_148 = puVar8[6];
    uStack_144 = puVar8[7];
    *(undefined8 *)(puVar8 + 4) = 0;
    *(undefined8 *)(puVar8 + 6) = 0xf;
    *(undefined1 *)puVar8 = 0;
    if (0xf < local_168) {
      uVar12 = local_168 + 1;
      uVar14 = local_180;
      if (0xfff < uVar12) {
        uVar14 = *(ulonglong *)(local_180 - 8);
        if (0x1f < (local_180 - uVar14) - 8) {
          pcVar2 = (code *)swi(0x29);
          (*pcVar2)(5);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar12 = local_168 + 0x28;
      }
      thunk_FUN_1803d64e0(uVar14,uVar12);
    }
    local_170 = 0;
    local_168 = 0xf;
    local_180 = local_180 & 0xffffffffffffff00;
    puVar8 = &local_160;
    if (0xf < CONCAT44(uStack_144,uStack_148)) {
      puVar8 = (undefined4 *)CONCAT44(uStack_15c,local_160);
    }
    FUN_1802cf750(puVar8);
    FUN_18000f890(&local_160);
  }
  if ((*param_1 != 0) && (cVar3 = FUN_1802cf4d0("rescan"), cVar3 != '\0')) {
    FUN_1803739c0();
    FUN_180374710();
    DAT_180cd107f = '\x01';
  }
  local_190 = (undefined8 *)((ulonglong)local_190 & 0xffffffff00000000);
  local_198 = "%.2f";
  FUN_18033e3a0("sky brightness",param_1 + 100,0,DAT_1808ac864);
  return;
}



/* ===== 1802d3370 FUN_1802d3370 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802d3370(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  char *_Str;
  undefined4 uVar1;
  code *pcVar2;
  undefined8 *puVar3;
  float fVar4;
  undefined8 *puVar5;
  char cVar6;
  undefined1 uVar7;
  int iVar8;
  size_t sVar9;
  undefined8 *puVar10;
  longlong lVar11;
  char *pcVar12;
  ulonglong uVar13;
  undefined1 *puVar14;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [24];
  char *local_78;
  undefined4 local_70;
  float local_68 [2];
  longlong local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  ulonglong local_48;
  ulonglong local_40;
  
  local_40 = DAT_180919500 ^ (ulonglong)auStack_98;
  FUN_1803e89e0("sound");
  FUN_1802c0a60("sound",param_3);
  cVar6 = FUN_1802badc0("options","sound");
  if (cVar6 == '\0') {
LAB_1802d3665:
    puVar14 = auStack_98;
    uVar13 = *(ulonglong *)(DAT_180ca0a50 + 0x14f8);
    iVar8 = *(int *)(uVar13 + 0x108);
    if (iVar8 < 2) {
      FUN_1803ebc00("Calling PopID() too many times!");
      puVar14 = auStack_98;
      goto LAB_1802d369b;
    }
  }
  else {
    if (DAT_180ccf6e4 == '\0') {
      FUN_18022c110();
    }
    _Str = (char *)(param_3 + 1);
    pcVar12 = "none";
    if (*_Str != '\0') {
      pcVar12 = _Str;
    }
    cVar6 = FUN_1802c22b0("sound",pcVar12);
    puVar5 = DAT_180cecc18;
    puVar3 = DAT_180cecc10;
    if (cVar6 != '\0') {
      for (; puVar3 != puVar5; puVar3 = puVar3 + 4) {
        uVar7 = FUN_180023400(puVar3,_Str);
        puVar10 = puVar3;
        if (0xf < (ulonglong)puVar3[3]) {
          puVar10 = (undefined8 *)*puVar3;
        }
        cVar6 = FUN_1802b74f0(puVar10,uVar7,0,0);
        if (cVar6 != '\0') {
          snprintf(_Str,0x40);
          FUN_18022ca60(puVar3,*(undefined4 *)(param_3 + 0x44));
          FUN_1803ee1f0();
        }
      }
      FUN_1802b5590();
      iVar8 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
      if (iVar8 < 2) {
        FUN_1803ebc00("Calling PopID() too many times!");
      }
      else {
        *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar8 + -1;
      }
    }
    fVar4 = DAT_1808acb08;
    local_68[0] = *(float *)(param_3 + 0x44) * DAT_1808acb08;
    local_70 = 0;
    local_78 = "%.0f%%";
    cVar6 = FUN_18033e3a0("volume",local_68,0,DAT_1808acb08);
    if (cVar6 != '\0') {
      *(float *)(param_3 + 0x44) = local_68[0] / fVar4;
    }
    if ((*(uint *)(DAT_180ca0a50 + 0x1ef0) & 0x20) == 0) {
      if (((*(int *)(DAT_180ca0a50 + 0x15ac) == *(int *)(DAT_180ca0a50 + 0x1ee8)) &&
          (*(int *)(DAT_180ca0a50 + 0x1ee8) != 0)) &&
         (*(int *)(DAT_180ca0a50 + 4) <= *(int *)(DAT_180ca0a50 + 0x15b0))) goto LAB_1802d3544;
LAB_1802d35d0:
      if ((*_Str != '\0') && (cVar6 = FUN_1802cf4d0(&DAT_18075d158), cVar6 != '\0')) {
        uVar1 = *(undefined4 *)(param_3 + 0x44);
        local_60 = 0;
        uStack_58 = 0;
        local_50 = 0;
        local_48 = 0;
        sVar9 = strlen(_Str);
        FUN_1800133a0(&local_60,_Str,sVar9);
        FUN_18022ca60(&local_60,uVar1);
        if (0xf < local_48) {
          uVar13 = local_48 + 1;
          lVar11 = local_60;
          if (0xfff < uVar13) {
            lVar11 = *(longlong *)(local_60 + -8);
            if (0x1f < (local_60 - lVar11) - 8U) goto LAB_1802d368c;
            uVar13 = local_48 + 0x28;
          }
          thunk_FUN_1803d64e0(lVar11,uVar13);
        }
      }
      FUN_1802bc580();
      goto LAB_1802d3665;
    }
    if ((*(uint *)(DAT_180ca0a50 + 0x1ef0) >> 6 & 1) == 0) goto LAB_1802d35d0;
LAB_1802d3544:
    if ((*(char *)(DAT_180ca0a50 + 0x15b4) == '\0') || (*(char *)(param_3 + 1) == '\0'))
    goto LAB_1802d35d0;
    uVar1 = *(undefined4 *)(param_3 + 0x44);
    local_60 = 0;
    uStack_58 = 0;
    local_50 = 0;
    local_48 = 0;
    sVar9 = strlen(_Str);
    FUN_1800133a0(&local_60,_Str,sVar9);
    FUN_18022ca60(&local_60,uVar1);
    if (local_48 < 0x10) goto LAB_1802d35d0;
    uVar13 = local_48 + 1;
    lVar11 = local_60;
    if (uVar13 < 0x1000) {
LAB_1802d35cb:
      thunk_FUN_1803d64e0(lVar11,uVar13);
      goto LAB_1802d35d0;
    }
    lVar11 = *(longlong *)(local_60 + -8);
    if ((local_60 - lVar11) - 8U < 0x20) {
      uVar13 = local_48 + 0x28;
      goto LAB_1802d35cb;
    }
LAB_1802d368c:
    pcVar2 = (code *)swi(0x29);
    iVar8 = (*pcVar2)(5);
    puVar14 = auStack_90;
  }
  *(int *)(uVar13 + 0x108) = iVar8 + -1;
LAB_1802d369b:
  *(undefined8 *)(puVar14 + -8) = 0x1802d36a8;
  return;
}



/* ===== 1802d36c0 FUN_1802d36c0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1802d36c0(undefined8 param_1,float *param_2,int param_3,char param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  float fVar12;
  longlong lVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  byte bVar16;
  char cVar17;
  uint uVar18;
  undefined8 *puVar19;
  ulonglong *puVar20;
  float *pfVar21;
  char *****pppppcVar22;
  ulonglong uVar23;
  float *pfVar24;
  ulonglong uVar25;
  char *pcVar26;
  undefined1 *puVar27;
  undefined8 uVar28;
  bool bVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  float fVar35;
  float unaff_XMM8_Da;
  float fVar36;
  undefined4 unaff_XMM12_Da;
  undefined1 auStack_258 [8];
  undefined1 auStack_250 [24];
  undefined4 local_238;
  char *****local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined4 local_208;
  float local_1f8 [4];
  undefined4 local_1e8;
  float local_1d8 [6];
  ulonglong local_1c0;
  ulonglong uStack_1b8;
  ulonglong local_1b0;
  ulonglong uStack_1a8;
  char *****local_1a0;
  ulonglong uStack_198;
  ulonglong local_190;
  ulonglong uStack_188;
  undefined8 local_180;
  ulonglong uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  ulonglong local_160 [4];
  ulonglong local_140 [4];
  undefined1 local_120 [32];
  undefined1 local_100 [32];
  ulonglong local_e0;
  
  local_e0 = DAT_180919500 ^ (ulonglong)auStack_258;
  bVar10 = false;
  bVar29 = false;
  local_1e8 = 0;
  if ((DAT_1809f72e0 == '\0') || (DAT_1809f72e2 != '\0')) {
    bVar11 = false;
    if (param_4 == '\0') {
      if (param_3 < 1) {
        local_160[1] = 0;
        local_160[2] = 1;
        local_160[3] = 0xf;
        local_160[0] = (ulonglong)(DAT_1806eb0d8 & 0xff);
        puVar20 = local_160;
      }
      else {
        puVar19 = (undefined8 *)FUN_1801c6760(local_120,param_3);
        bVar29 = true;
        local_1e8 = 8;
        if (0xf < (ulonglong)puVar19[3]) {
          puVar19 = (undefined8 *)*puVar19;
        }
        puVar20 = (ulonglong *)FUN_1802b3fe0(local_160,puVar19);
      }
      bVar8 = false;
      bVar7 = true;
    }
    else {
      uStack_178 = 0;
      local_170 = 2;
      uStack_168 = 0xf;
      local_180 = (ulonglong)DAT_1806f02a8;
      puVar20 = &local_180;
      bVar8 = true;
      bVar29 = false;
      bVar7 = false;
    }
    local_1c0 = *puVar20;
    uStack_1b8 = puVar20[1];
    local_1b0 = puVar20[2];
    uStack_1a8 = puVar20[3];
    puVar20[2] = 0;
    puVar20[3] = 0xf;
    *(undefined1 *)puVar20 = 0;
    puVar20 = &local_1c0;
    bVar10 = false;
    bVar9 = false;
    bVar6 = true;
  }
  else {
    bVar11 = true;
    if (param_3 < 1) {
      local_140[1] = 0;
      local_140[2] = 1;
      local_140[3] = 0xf;
      local_140[0] = (ulonglong)(DAT_1806eb0d8 & 0xff);
      puVar20 = local_140;
    }
    else {
      puVar19 = (undefined8 *)FUN_1801c6760(local_100,param_3);
      bVar10 = true;
      local_1e8 = 1;
      if (0xf < (ulonglong)puVar19[3]) {
        puVar19 = (undefined8 *)*puVar19;
      }
      puVar20 = (ulonglong *)FUN_1802b3fe0(local_140,puVar19);
    }
    bVar7 = false;
    bVar6 = false;
    bVar9 = true;
    bVar8 = false;
    bVar29 = false;
  }
  local_1a0 = (char *****)0x0;
  uStack_198 = 0;
  local_190 = 0;
  uStack_188 = 0;
  local_1a0 = (char *****)*puVar20;
  uStack_198 = puVar20[1];
  local_190 = puVar20[2];
  uStack_188 = puVar20[3];
  puVar20[2] = 0;
  puVar20[3] = 0xf;
  *(undefined1 *)puVar20 = 0;
  if (bVar6) {
    if (uStack_1a8 < 0x10) goto LAB_1802d38e5;
    uVar25 = uStack_1a8 + 1;
    uVar23 = local_1c0;
    if (uVar25 < 0x1000) {
LAB_1802d38e0:
      thunk_FUN_1803d64e0(uVar23,uVar25);
      goto LAB_1802d38e5;
    }
    uVar23 = *(ulonglong *)(local_1c0 - 8);
    if ((local_1c0 - uVar23) - 8 < 0x20) {
      uVar25 = uStack_1a8 + 0x28;
      goto LAB_1802d38e0;
    }
    pcVar5 = (code *)swi(0x29);
    (*pcVar5)(5);
    puVar27 = auStack_250;
  }
  else {
LAB_1802d38e5:
    if (bVar7) {
      FUN_18000f890(local_160);
    }
    if (bVar29) {
      FUN_18000f890(local_120);
    }
    if (bVar8) {
      FUN_18000f890(&local_180);
    }
    if (bVar9) {
      FUN_18000f890(local_140);
    }
    if (bVar10) {
      FUN_18000f890(local_100);
    }
    unaff_XMM12_Da = DAT_1808ac930;
    puVar27 = auStack_258;
    unaff_XMM8_Da = 0.0;
    if (bVar11) {
      local_230 = (char *****)&local_1a0;
      if (0xf < uStack_188) {
        local_230 = local_1a0;
      }
      local_208 = 0;
      local_218 = 0;
      local_220 = 0;
      local_228 = 0;
      local_238 = 0;
      FUN_18040a2f0(local_1f8,*(undefined8 *)(DAT_180ca0a50 + 0x11f0),DAT_1808ac930,DAT_1808acd08);
      fVar30 = (float)FUN_18053f0d0(local_1f8[0] + DAT_1808ac2f0);
      puVar27 = auStack_258;
      fVar32 = DAT_1808ac864;
      if (DAT_1808ac864 <= fVar30) {
        fVar32 = fVar30;
      }
      fVar32 = fVar32 + DAT_1808ac8b0;
      goto LAB_1802d39db;
    }
  }
  fVar32 = DAT_1808aca80;
LAB_1802d39db:
  fVar35 = DAT_1808ac97c;
  fVar12 = DAT_1808ac1f4;
  fVar30 = param_2[3];
  fVar31 = param_2[1];
  *(undefined8 *)(puVar27 + -8) = 0x1802d3a04;
  fVar31 = (float)FUN_18053f0d0((fVar30 - DAT_1808ac97c) * DAT_1808ac1f4 + fVar31);
  fVar30 = param_2[2];
  fVar36 = fVar30 - fVar32;
  *(float *)(puVar27 + 0x68) = fVar36;
  *(float *)(puVar27 + 0x6c) = fVar31;
  *(float *)(puVar27 + 0x78) = fVar30;
  *(float *)(puVar27 + 0x7c) = fVar31 + fVar35;
  *(undefined8 *)(puVar27 + -8) = 0x1802d3a50;
  FUN_1802bac70(param_2,fVar36 - DAT_1808ac7ac);
  lVar13 = DAT_180ca0a50;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  fVar30 = DAT_1808ac34c;
  lVar3 = *(longlong *)(lVar13 + 0x14f8);
  lVar4 = *(longlong *)(lVar3 + 0x2c8);
  if (bVar11) {
    fVar32 = param_2[1];
    fVar35 = (*param_2 - param_2[5]) - DAT_1809f72e4;
    fVar31 = DAT_1809f72e4 + param_2[2];
    *(float *)(puVar27 + 0x60) = fVar31;
    *(float *)(puVar27 + 100) = fVar32 + param_2[3];
    *(undefined1 *)(lVar3 + 0xce) = 1;
    lVar3 = *(longlong *)(lVar13 + 0x14f8);
    local_1c0 = CONCAT44(fVar32,fVar35);
    *(ulonglong *)(lVar3 + 0x118) = local_1c0;
    *(undefined1 *)(lVar3 + 0x159) = 1;
    *(float *)(puVar27 + 0x70) = fVar31 - fVar35;
    *(float *)(puVar27 + 0x74) = param_2[3];
    *(undefined8 *)(puVar27 + -8) = 0x1802d3b05;
    uVar14 = FUN_180415e30(param_1,puVar27 + 0x70,0);
    *(undefined8 *)(puVar27 + -8) = 0x1802d3b10;
    uVar15 = FUN_1803dd930(0);
    if (((*(int *)(DAT_180ca0a50 + 0x1578) == 0) ||
        (*(int *)(DAT_180ca0a50 + 0x1578) != *(int *)(DAT_180ca0a50 + 0x1ee8))) && (param_4 == '\0')
       ) {
      uVar28 = 0;
    }
    else {
      uVar28 = 1;
    }
    pcVar26 = "##row_hover";
    bVar16 = 0x23;
    uVar18 = ~*(uint *)(DAT_180ca0a50 + 0x1ee8);
    do {
      pcVar26 = pcVar26 + 1;
      if (((bVar16 == 0x23) && (*pcVar26 == 0x23)) && (pcVar26[1] == 0x23)) {
        pcVar26 = pcVar26 + 2;
        uVar18 = ~*(uint *)(DAT_180ca0a50 + 0x1ee8);
      }
      else {
        uVar18 = uVar18 >> 8 ^
                 *(uint *)(&DAT_1806c25c0 + ((ulonglong)(uVar18 & 0xff) ^ (ulonglong)bVar16) * 4);
      }
      bVar16 = *pcVar26;
    } while (bVar16 != 0);
    *(undefined8 *)(puVar27 + -8) = 0x1802d3ba5;
    fVar32 = (float)FUN_1802b3850(~uVar18,uVar28,uVar15);
    if (unaff_XMM8_Da < fVar32) {
      local_1d8[2] = 1.0;
      local_1d8[0] = 0.0;
      local_1d8[1] = fVar32 * DAT_1808ac1b0 * DAT_1808ac2cc;
      pfVar24 = local_1d8;
      if (unaff_XMM8_Da <= local_1d8[1]) {
        pfVar24 = local_1d8 + 1;
      }
      pfVar21 = local_1d8 + 2;
      if (local_1d8[1] <= fVar30) {
        pfVar21 = pfVar24;
      }
      fVar32 = *pfVar21;
      *(undefined4 *)(puVar27 + 0x28) = 0;
      *(undefined4 *)(puVar27 + 0x20) = DAT_1808ac854;
      *(undefined8 *)(puVar27 + -8) = 0x1802d3c3c;
      FUN_1803fe590(lVar4,&local_1c0,puVar27 + 0x60,
                    DAT_180960f44 & 0xffffff |
                    (int)(longlong)(fVar32 * DAT_1808acb94 + fVar12) << 0x18);
    }
    *(undefined8 *)(puVar27 + -8) = 0x1802d3c43;
    cVar17 = FUN_1803dd930(0);
    if (*(int *)(DAT_180ca0a50 + 0x1578) == 0) {
      bVar29 = false;
    }
    else {
      bVar29 = *(int *)(DAT_180ca0a50 + 0x1578) == *(int *)(DAT_180ca0a50 + 0x1ee8);
    }
    pcVar26 = "##row_label";
    bVar16 = 0x23;
    uVar18 = ~*(uint *)(DAT_180ca0a50 + 0x1ee8);
    do {
      pcVar26 = pcVar26 + 1;
      if (((bVar16 == 0x23) && (*pcVar26 == 0x23)) && (pcVar26[1] == 0x23)) {
        pcVar26 = pcVar26 + 2;
        uVar18 = ~*(uint *)(DAT_180ca0a50 + 0x1ee8);
      }
      else {
        uVar18 = uVar18 >> 8 ^
                 *(uint *)(&DAT_1806c25c0 + ((ulonglong)(uVar18 & 0xff) ^ (ulonglong)bVar16) * 4);
      }
      bVar16 = *pcVar26;
    } while (bVar16 != 0);
    *(undefined8 *)(puVar27 + -8) = 0x1802d3cc7;
    uVar33 = FUN_1802b3850(~uVar18,bVar29,cVar17 != '\0' || param_4 != '\0');
    *(undefined8 *)(puVar27 + -8) = 0x1802d3cdb;
    uVar33 = FUN_1802b38e0(DAT_180960ef8,DAT_180960ec8,uVar33);
    if (DAT_181107090 != '\0') {
      DAT_1811070c8 = uVar33;
    }
    if (DAT_1809f70c0 != '\0') {
      DAT_1809f70f4 = uVar33;
    }
  }
  else {
    *(undefined1 *)(lVar3 + 0xce) = 1;
    lVar3 = *(longlong *)(lVar13 + 0x14f8);
    *(ulonglong *)(puVar27 + 0x68) = CONCAT44(fVar31,fVar36);
    *(ulonglong *)(lVar3 + 0x118) = CONCAT44(fVar31,fVar36);
    *(undefined1 *)(lVar3 + 0x159) = 1;
    *(float *)(puVar27 + 0x60) = fVar32;
    *(undefined4 *)(puVar27 + 100) = 0x41bda5e3;
    *(undefined8 *)(puVar27 + -8) = 0x1802d3d3e;
    uVar14 = FUN_180415e30(param_1,puVar27 + 0x60,0);
  }
  if (param_4 == '\0') {
    *(undefined8 *)(puVar27 + -8) = 0x1802d3d54;
    cVar17 = FUN_1803dd930(0);
    if (cVar17 == '\0') {
      fVar32 = 0.0;
    }
    else if (bVar11) {
      fVar32 = DAT_1808ac254;
    }
    else {
      fVar32 = fVar12;
    }
  }
  else {
    fVar32 = fVar30;
  }
  uVar33 = *(undefined4 *)(DAT_180ca0a50 + 0x1ee8);
  *(undefined4 *)(puVar27 + 0x70) = uVar33;
  local_180 = CONCAT44(fVar32,fVar32);
  uStack_178 = (ulonglong)(uint)fVar32;
  local_170 = CONCAT44(local_170._4_4_,0xffffffff);
  *(undefined8 *)(puVar27 + -8) = 0x1802d3db0;
  FUN_18034a380(uVar33,&local_1c0,puVar27 + 0x70,&local_180);
  fVar31 = DAT_1808ac118;
  *(undefined8 *)(puVar27 + -8) = 0x1802d3dce;
  fVar32 = (float)FUN_1802b3660(local_1c0 + 0x14,fVar32,DAT_1808ac118,0);
  if (bVar11) {
    local_1d8[5] = 1.0;
    local_1d8[3] = 0.0;
    local_1d8[4] = (fVar32 * fVar31 + fVar31) * DAT_1808ac2cc;
    pfVar24 = local_1d8 + 3;
    if (unaff_XMM8_Da <= local_1d8[4]) {
      pfVar24 = local_1d8 + 4;
    }
    pfVar21 = local_1d8 + 5;
    if (local_1d8[4] <= fVar30) {
      pfVar21 = pfVar24;
    }
    fVar30 = *pfVar21;
    *(undefined4 *)(puVar27 + 0x28) = 0;
    *(float *)(puVar27 + 0x20) = DAT_1808ac7ac;
    *(undefined8 *)(puVar27 + -8) = 0x1802d3e6b;
    FUN_1803fe590(lVar4,puVar27 + 0x68,puVar27 + 0x78,
                  DAT_180960f44 & 0xffffff |
                  (int)(longlong)(fVar30 * DAT_1808acb94 + fVar12) << 0x18);
    *(undefined8 *)(puVar27 + -8) = 0x1802d3e7f;
    uVar18 = FUN_1802b38e0(DAT_180960ef8,DAT_180960ec0,fVar32);
  }
  else {
    *(undefined8 *)(puVar27 + -8) = 0x1802d3e98;
    uVar33 = FUN_1802b38e0(DAT_180960ef0,DAT_180960ef4,fVar32);
    *(undefined4 *)(puVar27 + 0x28) = 0;
    *(float *)(puVar27 + 0x20) = DAT_1808ac7ac;
    *(undefined8 *)(puVar27 + -8) = 0x1802d3ec0;
    FUN_1803fe590(lVar4,puVar27 + 0x68,puVar27 + 0x78,uVar33);
    local_1c0 = _DAT_1808adcf0;
    uStack_1b8 = _UNK_1808adcf8;
    *(float *)(puVar27 + 0x30) = fVar30;
    *(float *)(puVar27 + 0x28) = unaff_XMM8_Da;
    *(ulonglong **)(puVar27 + 0x20) = &local_1c0;
    *(undefined8 *)(puVar27 + -8) = 0x1802d3efc;
    FUN_18036bcb0(lVar4,puVar27 + 0x68,puVar27 + 0x78,DAT_180960eec);
    *(undefined8 *)(puVar27 + -8) = 0x1802d3f10;
    uVar18 = FUN_1802b38e0(DAT_180960ec0,DAT_180960ec8,fVar32);
  }
  pppppcVar22 = (char *****)&local_1a0;
  if (0xf < uStack_188) {
    pppppcVar22 = local_1a0;
  }
  *(undefined4 *)(puVar27 + 0x50) = 0;
  *(undefined8 *)(puVar27 + 0x40) = 0;
  *(undefined8 *)(puVar27 + 0x38) = 0;
  *(undefined8 *)(puVar27 + 0x30) = 0;
  *(char ******)(puVar27 + 0x28) = pppppcVar22;
  *(float *)(puVar27 + 0x20) = unaff_XMM8_Da;
  uVar28 = *(undefined8 *)(DAT_180ca0a50 + 0x11f0);
  *(undefined8 *)(puVar27 + -8) = 0x1802d3f7f;
  FUN_18040a2f0(&local_1c0,uVar28,unaff_XMM12_Da,DAT_1808acd08);
  *(undefined8 *)(puVar27 + -8) = 0x1802d3f94;
  FUN_1803fc200(lVar4,puVar27 + 0x68,puVar27 + 0x78,1);
  pppppcVar22 = (char *****)&local_1a0;
  if (0xf < uStack_188) {
    pppppcVar22 = local_1a0;
  }
  *(undefined8 *)(puVar27 + -8) = 0x1802d3fba;
  uVar33 = FUN_18053f0d0();
  *(undefined8 *)(puVar27 + -8) = 0x1802d3fd6;
  uVar34 = FUN_18053f0d0();
  *(undefined4 *)(puVar27 + 0x60) = uVar34;
  *(undefined4 *)(puVar27 + 100) = uVar33;
  if ((((uVar18 & 0xff000000) != 0) && (pppppcVar22 != (char *****)0x0)) &&
     (*(char *)pppppcVar22 != '\0')) {
    local_1c0 = *(ulonglong *)(lVar4 + 0x60);
    uStack_1b8 = *(ulonglong *)(lVar4 + 0x68);
    lVar3 = *(longlong *)(lVar4 + 0x38);
    *(undefined4 *)(puVar27 + 0x48) = 0;
    *(float *)(puVar27 + 0x40) = unaff_XMM8_Da;
    *(undefined8 *)(puVar27 + 0x38) = 0;
    *(char ******)(puVar27 + 0x30) = pppppcVar22;
    *(ulonglong **)(puVar27 + 0x28) = &local_1c0;
    *(uint *)(puVar27 + 0x20) = uVar18;
    uVar28 = *(undefined8 *)(lVar3 + 0x18);
    *(undefined8 *)(puVar27 + -8) = 0x1802d4038;
    FUN_18040a900(uVar28,lVar4,unaff_XMM12_Da,puVar27 + 0x60);
  }
  iVar2 = *(int *)(lVar4 + 0xa0);
  iVar1 = iVar2 + -1;
  *(int *)(lVar4 + 0xa0) = iVar1;
  if (iVar1 == 0) {
    puVar19 = (undefined8 *)(*(longlong *)(lVar4 + 0x38) + 0x34);
  }
  else {
    puVar19 = (undefined8 *)((longlong)(iVar2 + -2) * 0x10 + *(longlong *)(lVar4 + 0xa8));
  }
  uVar28 = puVar19[1];
  *(undefined8 *)(lVar4 + 0x60) = *puVar19;
  *(undefined8 *)(lVar4 + 0x68) = uVar28;
  *(undefined8 *)(puVar27 + -8) = 0x1802d4074;
  FUN_1803fbff0(lVar4);
  *(undefined8 *)(puVar27 + -8) = 0x1802d407e;
  FUN_18000f890(&local_1a0);
  *(undefined8 *)(puVar27 + -8) = 0x1802d408e;
  return uVar14;
}



/* ===== 1802d40f0 FUN_1802d40f0 ===== */

void FUN_1802d40f0(undefined8 param_1,undefined8 param_2)

{
  size_t _Size;
  float fVar1;
  longlong lVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  size_t sVar8;
  longlong lVar9;
  undefined8 *_Buf1;
  char *pcVar10;
  int iVar11;
  int *piVar12;
  bool bVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  longlong local_98;
  int local_90 [4];
  undefined4 local_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  undefined8 local_70;
  undefined1 local_68 [80];
  
  puVar6 = (undefined8 *)FUN_1800fbe90(param_2);
  puVar7 = (undefined4 *)FUN_1802b9e90(local_68,"hotkey");
  lVar9 = DAT_180ca0a50;
  local_70 = *(undefined8 *)(puVar7 + 4);
  local_80 = *puVar7;
  fVar15 = (float)puVar7[1];
  fVar16 = (float)puVar7[2];
  fVar1 = (float)puVar7[3];
  fStack_7c = fVar15;
  fStack_78 = fVar16;
  fStack_74 = fVar1;
  if (puVar6 == (undefined8 *)0x0) {
    *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
    DAT_1809f5b44 = *(undefined4 *)(lVar9 + 4);
    DAT_1809f5b40 = *(undefined4 *)(*(longlong *)(lVar9 + 0x14f8) + 0x10);
    DAT_1809f5b48 = fVar15;
    DAT_1809f5b4c = fVar1;
    DAT_1809f5b50._0_4_ = fVar16;
    DAT_1809f5b50._4_4_ = local_80;
    FUN_1802baa50(&local_80);
    return;
  }
  FUN_1803e89e0("hotkey");
  pcVar10 = &DAT_18095d530;
  local_98 = 0;
  iVar11 = 0;
  do {
    if (*pcVar10 != '\0') {
      sVar8 = strlen(pcVar10);
      _Size = puVar6[2];
      if ((ulonglong)puVar6[3] < 0x10) {
        _Buf1 = puVar6;
      }
      else {
        _Buf1 = (undefined8 *)*puVar6;
      }
      if ((_Size == sVar8) && ((_Size == 0 || (iVar5 = memcmp(_Buf1,pcVar10,_Size), iVar5 == 0)))) {
        if (iVar11 < 1) {
          *(char **)(local_90 + (longlong)iVar11 * 2 + -2) = pcVar10;
        }
        iVar11 = iVar11 + 1;
      }
    }
    lVar9 = local_98;
    iVar5 = DAT_180cd1300;
    pcVar10 = pcVar10 + 0xe4;
  } while (pcVar10 != &DAT_180960e30);
  if (1 < iVar11) {
    iVar11 = 1;
  }
  if (iVar11 < 1) {
    lVar9 = 0;
LAB_1802d42ba:
    if (lVar9 == 0) {
LAB_1802d42c8:
      uVar14 = 0;
      cVar3 = '\0';
    }
    else {
      uVar14 = *(undefined4 *)(lVar9 + 0x60);
      cVar3 = '\0';
    }
  }
  else {
    if (local_98 == 0) goto LAB_1802d42c8;
    if (DAT_180cd1868 == local_98) {
      LOCK();
      DAT_180cd1868 = 0;
      UNLOCK();
      if ((DAT_180cd1300 != -1) &&
         ((DAT_180cd1300 != 1 || (cVar3 = FUN_1803e7af0(1), cVar3 == '\0')))) {
        *(int *)(lVar9 + 0x60) = iVar5;
      }
    }
    if (DAT_180cd1360 != lVar9) goto LAB_1802d42ba;
    uVar14 = *(undefined4 *)(lVar9 + 0x60);
    cVar3 = '\x01';
  }
  cVar4 = FUN_1802d36c0("##bind",&local_80,uVar14,cVar3);
  if (cVar4 == '\0') {
LAB_1802d42fa:
    if (lVar9 == 0) goto LAB_1802d44c8;
  }
  else {
    if (cVar3 != '\0') {
      LOCK();
      DAT_180cd1360 = 0;
      UNLOCK();
      goto LAB_1802d42fa;
    }
    if (lVar9 == 0) {
      uVar14 = FUN_1802bcf40(puVar6);
      lVar9 = FUN_1802bfdf0(puVar6,uVar14,0);
      if (lVar9 == 0) goto LAB_1802d44c8;
      snprintf(lVar9 + 0x70,0x30,&DAT_1806d3198,"mouse override");
    }
    LOCK();
    DAT_180cd1868 = 0;
    UNLOCK();
    LOCK();
    UNLOCK();
    DAT_180cd1360 = lVar9;
  }
  fVar16 = fVar16 - DAT_1808aca80;
  cVar3 = FUN_1803e9690(1,0,0);
  if ((cVar3 != '\0') && (cVar3 = FUN_1803dd930(0), cVar3 != '\0')) {
    FUN_1802b4d80("##mode");
  }
  lVar2 = DAT_180ca0a50;
  local_98 = 0x40c0000040c00000;
  *(uint *)(DAT_180ca0a50 + 0x1f38) = *(uint *)(DAT_180ca0a50 + 0x1f38) | 3;
  fVar15 = fVar1 + fVar15 + DAT_1808ac710;
  *(float *)(lVar2 + 0x1f48) = fVar16;
  *(undefined8 *)(lVar2 + 0x1f50) = 0;
  *(undefined4 *)(lVar2 + 0x1f3c) = 1;
  *(undefined8 *)(lVar2 + 0x1f58) = 0x42480000;
  *(float *)(lVar2 + 0x1f4c) = fVar15;
  *(undefined4 *)(lVar2 + 8000) = 1;
  cVar3 = FUN_1802b5260("##mode",&local_98);
  if (cVar3 != '\0') {
    local_90[0] = 0;
    piVar12 = local_90;
    local_90[1] = 1;
    local_90[2] = 2;
    do {
      iVar11 = *piVar12;
      if (iVar11 == 2) {
        if (*(int *)(lVar9 + 100) == 2) {
          bVar13 = *(int *)(lVar9 + 100) == 2;
LAB_1802d440c:
          pcVar10 = "always";
          goto LAB_1802d449b;
        }
      }
      else {
        bVar13 = *(int *)(lVar9 + 100) == iVar11;
        if (iVar11 == 1) {
          pcVar10 = "toggle";
        }
        else {
          if (iVar11 == 2) goto LAB_1802d440c;
          pcVar10 = "hold";
        }
LAB_1802d449b:
        cVar3 = FUN_1802b74f0(pcVar10,bVar13,0,0);
        if (cVar3 != '\0') {
          *(int *)(lVar9 + 100) = iVar11;
          FUN_1803ee1f0();
        }
      }
      piVar12 = piVar12 + 1;
    } while (piVar12 != local_90 + 3);
    FUN_1802b5590();
  }
LAB_1802d44c8:
  iVar11 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
  if (iVar11 < 2) {
    FUN_1803ebc00("Calling PopID() too many times!");
    return;
  }
  *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar11 + -1;
  return;
}



/* ===== 1802d4540 FUN_1802d4540 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802d4540(int *param_1,byte param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined1 auStack_58 [32];
  undefined2 *local_38;
  undefined4 local_30;
  undefined2 local_28;
  undefined1 local_26;
  undefined8 local_25;
  undefined4 local_1d;
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_58;
  iVar1 = *param_1;
  local_28 = DAT_1806dfdd8;
  local_26 = DAT_1806dfdda;
  local_25 = 0;
  local_1d = 0;
  local_19 = 0;
  if (iVar1 < 1) {
    puVar2 = &DAT_18075d254;
  }
  else {
    if ((param_2 == 0) || (iVar1 < 0x83)) {
      if (100 < iVar1) {
        snprintf(&local_28,0x10,"HP+%d",iVar1 + -100);
      }
      goto LAB_1802d45e1;
    }
    puVar2 = &DAT_18075d24c;
  }
  snprintf(&local_28,0x10,puVar2);
LAB_1802d45e1:
  local_38 = &local_28;
  local_30 = 0;
  FUN_18033fa10("min damage",param_1,0,param_2 | 0x82);
  return;
}



/* ===== 1802d4620 FUN_1802d4620 ===== */

void FUN_1802d4620(longlong param_1,char param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  DAT_181106f20 = "Bullet number at which recoil compensation starts";
  FUN_18033fa10("start bullet",param_1,1,5,&DAT_1806dfdd8,0);
  FUN_18033fa10("vertical",param_1 + 4,0,100,&DAT_1806f0260,0);
  FUN_18033fa10("horizontal",param_1 + 8,0,100,&DAT_1806f0260,0);
  DAT_181106f20 =
       "Simulates human reaction time to recoil changes.\nThis smooths out the compensation pattern, making it less perfect."
  ;
  puVar1 = &DAT_18075d2f4;
  if (0x7fffffff < *(uint *)(param_1 + 0xc)) {
    puVar1 = &DAT_1806d2870;
  }
  uVar2 = 100;
  if (param_2 != '\0') {
    uVar2 = 200;
  }
  FUN_18033fa10("dampening",param_1 + 0xc,0xffffffff,uVar2,puVar1,0);
  DAT_181106f20 = "Returns the crosshair to its initial position after the spray ends";
  if (param_2 != '\0') {
    FUN_1802c0a60("crosshair recovery",param_1 + 0x10);
  }
  return;
}



/* ===== 1802d4740 FUN_1802d4740 ===== */

undefined8 FUN_1802d4740(undefined8 *param_1,char *param_2)

{
  longlong lVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  size_t sVar5;
  undefined8 *puVar6;
  size_t sVar7;
  longlong lVar8;
  
  if (*param_2 == '\0') {
    return 1;
  }
  sVar5 = strlen(param_2);
  if (sVar5 <= (ulonglong)param_1[2]) {
    lVar8 = 0;
    do {
      sVar7 = 0;
      if (sVar5 != 0) {
        do {
          if ((ulonglong)param_1[3] < 0x10) {
            puVar6 = param_1;
          }
          else {
            puVar6 = (undefined8 *)*param_1;
          }
          bVar2 = *(byte *)((longlong)puVar6 + lVar8 + sVar7);
          if (bVar2 < 0x80) {
            iVar4 = tolower((uint)bVar2);
            bVar2 = (byte)iVar4;
          }
          bVar3 = param_2[sVar7];
          if (bVar3 < 0x80) {
            iVar4 = tolower((uint)bVar3);
            bVar3 = (byte)iVar4;
          }
          if (bVar2 != bVar3) goto LAB_1802d47c1;
          sVar7 = sVar7 + 1;
        } while (sVar7 < sVar5);
      }
      if (sVar7 == sVar5) {
        return 1;
      }
LAB_1802d47c1:
      lVar1 = lVar8 + 1;
      lVar8 = lVar8 + 1;
    } while (lVar1 + sVar5 <= (ulonglong)param_1[2]);
  }
  return 0;
}



/* ===== 1802d47f0 FUN_1802d47f0 ===== */

uint FUN_1802d47f0(undefined4 param_1,float param_2)

{
  uint uVar1;
  uint uVar2;
  
  switch(param_1) {
  case 1:
    uVar1 = 0xd9;
    uVar2 = 0xc3b0;
    break;
  case 2:
    uVar1 = 0xd9;
    uVar2 = 0x985e;
    break;
  case 3:
    uVar1 = 0xff;
    uVar2 = 0x694b;
    break;
  case 4:
    uVar1 = 0xff;
    uVar2 = 0x4788;
    break;
  case 5:
    uVar1 = 0xe6;
    uVar2 = 0x2cd3;
    break;
  case 6:
    uVar1 = 0x4b;
    uVar2 = 0x4beb;
    break;
  case 7:
    uVar1 = 0x39;
    uVar2 = 0xaee4;
    break;
  default:
    uVar1 = 0xc5;
    uVar2 = 0xd2d9;
  }
  return ((int)(param_2 * DAT_1808acb94) << 8 | uVar1) << 0x10 | uVar2;
}



/* ===== 1802d48a0 FUN_1802d48a0 ===== */

longlong FUN_1802d48a0(char *param_1)

{
  longlong lVar1;
  size_t _Size;
  int iVar2;
  longlong *plVar3;
  size_t sVar4;
  undefined8 *_Buf1;
  longlong lVar5;
  
  plVar3 = (longlong *)FUN_180280be0();
  lVar5 = *plVar3;
  lVar1 = plVar3[1];
  while( true ) {
    if (lVar5 == lVar1) {
      return 0;
    }
    sVar4 = strlen(param_1);
    _Buf1 = (undefined8 *)(lVar5 + 8);
    _Size = *(size_t *)(lVar5 + 0x18);
    if (0xf < *(ulonglong *)(lVar5 + 0x20)) {
      _Buf1 = (undefined8 *)*_Buf1;
    }
    if ((_Size == sVar4) && ((_Size == 0 || (iVar2 = memcmp(_Buf1,param_1,_Size), iVar2 == 0))))
    break;
    lVar5 = lVar5 + 0x90;
  }
  return lVar5;
}



/* ===== 1802d4930 FUN_1802d4930 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1802d4930(undefined8 *param_1,undefined4 param_2,int param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_98 [40];
  undefined8 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48 [32];
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_98;
  local_70 = param_1;
  lVar1 = FUN_180280c60(param_2);
  if (lVar1 == 0) {
    uStack_60 = 0;
    local_58 = 0;
    uStack_50 = 0xf;
    local_68 = 0;
  }
  else {
    FUN_180024b50(&local_68,lVar1 + 0x28);
  }
  if (param_3 != 0) {
    lVar1 = FUN_180280d30(param_3);
    if (lVar1 != 0) {
      puVar2 = (undefined8 *)FUN_180066a20(local_48,&DAT_18075d4b0,lVar1 + 0x28);
      if ((ulonglong)puVar2[3] < 0x10) {
        puVar3 = puVar2;
      }
      else {
        puVar3 = (undefined8 *)*puVar2;
      }
      FUN_1800134a0(&local_68,puVar3,puVar2[2]);
      FUN_18000f890(local_48);
    }
  }
  *param_1 = local_68;
  param_1[1] = uStack_60;
  param_1[2] = local_58;
  param_1[3] = uStack_50;
  return param_1;
}



/* ===== 1802d4a10 FUN_1802d4a10 ===== */

void FUN_1802d4a10(undefined8 param_1,undefined8 param_2,float param_3,float *param_4,float *param_5
                  ,undefined4 param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 local_res20;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  undefined8 local_68;
  undefined8 local_60;
  
  fVar2 = *param_5 - *param_4;
  if (0.0 < fVar2) {
    fVar1 = param_4[1];
    fVar3 = param_5[1] - fVar1;
    if ((0.0 < fVar3) && (0.0 < param_3)) {
      fVar4 = fVar2 / param_3;
      if (fVar4 <= fVar3) {
        fVar5 = fVar2;
      }
      else {
        fVar4 = fVar3;
        fVar5 = fVar3 * param_3;
      }
      fVar2 = (float)FUN_18053f0d0((fVar2 - fVar5) * DAT_1808ac1f4 + *param_4);
      local_70 = fVar2;
      local_6c = (float)FUN_18053f0d0((fVar3 - fVar4) * DAT_1808ac1f4 + fVar1);
      local_78 = fVar2 + fVar5;
      local_74 = local_6c + fVar4;
      param_5._0_4_ = 0x3f800000;
      param_5._4_4_ = 0x3f800000;
      local_res20 = 0;
      local_68 = 0;
      local_60 = param_2;
      FUN_1803fea90(param_1,&local_68,&local_70,&local_78,&local_res20,&param_5,param_6);
    }
  }
  return;
}



/* ===== 1802d4ba0 FUN_1802d4ba0 ===== */

void FUN_1802d4ba0(uint param_1,int param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  byte bVar3;
  int iVar4;
  longlong *plVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  char *pcVar10;
  uint local_res8 [2];
  uint local_res10 [2];
  uint local_res18 [4];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  
  pcVar10 = "##picture";
  param_1 = ~param_1;
  uVar7 = (ulonglong)param_1;
  bVar3 = 0x23;
  uVar9 = uVar7;
  do {
    pcVar10 = pcVar10 + 1;
    if (((bVar3 == 0x23) && (*pcVar10 == 0x23)) && (pcVar10[1] == 0x23)) {
      pcVar10 = pcVar10 + 2;
      uVar8 = param_1;
    }
    else {
      uVar8 = (uint)(uVar9 >> 8) ^ *(uint *)(&DAT_1806c25c0 + (uVar9 & 0xff ^ (ulonglong)bVar3) * 4)
      ;
    }
    uVar9 = (ulonglong)uVar8;
    bVar3 = *pcVar10;
  } while (bVar3 != 0);
  uVar8 = ~uVar8;
  pcVar10 = "##picture_key";
  bVar3 = 0x23;
  do {
    pcVar10 = pcVar10 + 1;
    if (((bVar3 == 0x23) && (*pcVar10 == 0x23)) && (pcVar10[1] == 0x23)) {
      pcVar10 = pcVar10 + 2;
      uVar6 = param_1;
    }
    else {
      uVar6 = (uint)(uVar7 >> 8) ^ *(uint *)(&DAT_1806c25c0 + (uVar7 & 0xff ^ (ulonglong)bVar3) * 4)
      ;
    }
    uVar7 = (ulonglong)uVar6;
    bVar3 = *pcVar10;
  } while (bVar3 != 0);
  uVar1 = *(undefined8 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x1c0);
  iVar4 = FUN_1803d8260(uVar1,~uVar6,0);
  if (param_2 == 0) {
    FUN_1802b35f0(uVar8,0);
    return;
  }
  if (iVar4 != param_2) {
    if (iVar4 != 0) {
      local_res8[0] = uVar8;
      plVar5 = (longlong *)FUN_18034f760(&DAT_180ca1780,local_48,local_res8);
      lVar2 = *plVar5;
      *(undefined4 *)(lVar2 + 0x14) = 0;
      local_res10[0] = local_res8[0];
      plVar5 = (longlong *)FUN_18034f560(lVar2,local_48,local_res10);
      lVar2 = *plVar5;
      *(undefined8 *)(lVar2 + 0x14) = 0;
      *(undefined8 *)(lVar2 + 0x1c) = 0;
      *(undefined4 *)(lVar2 + 0x24) = 0xffffffff;
      local_res18[0] = local_res8[0] ^ 0x5bd1e995;
      plVar5 = (longlong *)FUN_18034f560(lVar2,local_38,local_res18);
      lVar2 = *plVar5;
      *(undefined8 *)(lVar2 + 0x14) = 0;
      *(undefined8 *)(lVar2 + 0x1c) = 0;
      *(undefined4 *)(lVar2 + 0x24) = 0xffffffff;
    }
    FUN_1803d8350(uVar1,~uVar6,param_2);
  }
  FUN_1802b35f0(uVar8,DAT_1808ac34c);
  return;
}



/* ===== 1802d4d40 FUN_1802d4d40 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 *
FUN_1802d4d40(undefined2 *param_1,undefined8 param_2,char *param_3,float param_4,byte *param_5,
             uint param_6,longlong *param_7,undefined8 param_8,char param_9)

{
  int iVar1;
  longlong lVar2;
  float fVar3;
  char cVar4;
  undefined1 uVar5;
  char cVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  char *pcVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  longlong lVar14;
  ulonglong uVar15;
  uint uVar16;
  int iVar17;
  byte *pbVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auStack_1b8 [32];
  float *local_198;
  undefined8 local_190;
  char *local_188;
  undefined8 local_180;
  undefined4 local_178;
  undefined4 local_170;
  char local_168;
  char local_167;
  char local_166;
  float local_160;
  float local_15c;
  float local_158;
  float local_154;
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  longlong local_138;
  longlong lStack_130;
  undefined8 local_128;
  float local_120;
  float local_11c;
  float local_118 [3];
  float local_10c;
  float local_108;
  float local_104;
  undefined8 local_100;
  ulonglong uStack_f8;
  undefined8 local_f0;
  ulonglong uStack_e8;
  ulonglong local_e0;
  
  local_e0 = DAT_180919500 ^ (ulonglong)auStack_1b8;
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  lVar10 = DAT_180ca0a50;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  fVar3 = DAT_1808ac34c;
  lVar2 = *(longlong *)(lVar10 + 0x14f8);
  if (*(char *)(lVar2 + 0xd1) != '\0') {
    return param_1;
  }
  if ((*(longlong *)(lVar2 + 0x1c8) == 0) && (*(longlong *)(lVar10 + 0x2360) == 0)) {
    lVar10 = 0x280;
    lVar14 = 0x284;
  }
  else {
    lVar10 = 0x250;
    lVar14 = 0x254;
  }
  if (0.0 <= (float)param_8) {
    if ((float)param_8 == 0.0) {
      param_8._0_4_ = DAT_1808acb2c;
    }
  }
  else {
    fVar19 = (*(float *)(lVar2 + lVar10) - *(float *)(lVar2 + 0x118)) + (float)param_8 +
             DAT_1808ac34c;
    param_8._0_4_ = DAT_1808ac710;
    if (DAT_1808ac710 <= fVar19) {
      param_8._0_4_ = fVar19;
    }
  }
  if (0.0 <= param_8._4_4_) {
    if (param_8._4_4_ == 0.0) {
      param_8._4_4_ = DAT_1808acae8;
    }
  }
  else {
    fVar19 = (*(float *)(lVar2 + lVar14) - *(float *)(lVar2 + 0x11c)) + param_8._4_4_ +
             DAT_1808ac34c;
    param_8._4_4_ = DAT_1808ac710;
    if (DAT_1808ac710 <= fVar19) {
      param_8._4_4_ = fVar19;
    }
  }
  if ((param_3 == (char *)0x0) || (pcVar11 = param_3, param_3 == (char *)0xffffffffffffffff)) {
LAB_1802d4eff:
    local_166 = '\0';
    fVar19 = 0.0;
  }
  else {
    while (*pcVar11 != '\0') {
      if (((*pcVar11 == '#') && (pcVar11[1] == '#')) ||
         (pcVar11 = pcVar11 + 1, pcVar11 == (char *)0xffffffffffffffff)) break;
    }
    if (pcVar11 == param_3) goto LAB_1802d4eff;
    local_166 = '\x01';
    fVar19 = DAT_1808ac954;
  }
  fVar24 = *(float *)(lVar2 + 0x118);
  fVar20 = *(float *)(lVar2 + 0x11c);
  fVar26 = fVar24 + (float)param_8;
  local_14c = fVar20 + param_8._4_4_;
  fVar19 = fVar19 + param_8._4_4_ + fVar20;
  local_158 = fVar24;
  local_154 = fVar20;
  local_150 = fVar26;
  local_128 = param_1;
  local_120 = param_4;
  local_118[2] = fVar24;
  local_10c = fVar20;
  local_108 = fVar26;
  local_104 = fVar19;
  uVar8 = FUN_1803e8900(lVar2);
  local_148 = fVar26 - fVar24;
  local_144 = fVar19 - fVar20;
  FUN_1803ec550(&local_148);
  cVar4 = FUN_1803ec2f0(local_118 + 2,uVar8,0,0);
  if (cVar4 == '\0') {
    return param_1;
  }
  local_168 = '\0';
  local_167 = '\0';
  local_198 = (float *)CONCAT44(local_198._4_4_,1);
  uVar5 = FUN_180415270(&local_158,uVar8,&local_168,&local_167);
  *(undefined1 *)param_1 = uVar5;
  *(char *)(param_1 + 1) = local_168;
  cVar4 = local_168;
  uVar23 = extraout_XMM0_Qa;
  if ((local_168 == '\0') ||
     (cVar6 = FUN_1803e9690(1,0,0), uVar23 = extraout_XMM0_Qa_00, cVar6 == '\0')) {
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  *(undefined1 *)((longlong)param_1 + 1) = uVar5;
  fVar19 = DAT_1808ac294;
  if (local_167 == '\0') {
    if (cVar4 == '\0') {
      fVar24 = 0.0;
    }
    else {
      fVar24 = DAT_1808ac294;
    }
  }
  else {
    fVar24 = fVar3;
  }
  uVar16 = ~uVar8;
  pcVar11 = "##tile_hover";
  bVar7 = 0x23;
  uVar9 = uVar16;
  do {
    pcVar11 = pcVar11 + 1;
    if (((bVar7 == 0x23) && (*pcVar11 == 0x23)) && (pcVar11[1] == 0x23)) {
      pcVar11 = pcVar11 + 2;
      uVar9 = uVar16;
    }
    else {
      uVar9 = uVar9 >> 8 ^
              *(uint *)(&DAT_1806c25c0 + ((ulonglong)(uVar9 & 0xff) ^ (ulonglong)bVar7) * 4);
    }
    bVar7 = *pcVar11;
  } while (bVar7 != 0);
  local_148 = (float)~uVar9;
  local_100 = (char *)CONCAT44(fVar24,fVar24);
  uStack_f8 = (ulonglong)(uint)fVar24;
  local_f0._0_4_ = 0xffffffff;
  FUN_18034a380(uVar23,&local_138,&local_148,&local_100);
  uVar23 = FUN_1802b3660(local_138 + 0x14);
  if (param_9 == '\0') {
    fVar24 = 0.0;
  }
  else {
    fVar24 = fVar3;
  }
  pcVar11 = "##tile_selected";
  bVar7 = 0x23;
  uVar9 = uVar16;
  do {
    pcVar11 = pcVar11 + 1;
    if (((bVar7 == 0x23) && (*pcVar11 == 0x23)) && (pcVar11[1] == 0x23)) {
      pcVar11 = pcVar11 + 2;
      uVar9 = uVar16;
    }
    else {
      uVar9 = uVar9 >> 8 ^
              *(uint *)(&DAT_1806c25c0 + ((ulonglong)(uVar9 & 0xff) ^ (ulonglong)bVar7) * 4);
    }
    bVar7 = *pcVar11;
  } while (bVar7 != 0);
  local_148 = (float)~uVar9;
  local_100 = (char *)CONCAT44(fVar24,fVar24);
  uStack_f8 = (ulonglong)(uint)fVar24;
  local_f0 = CONCAT44(local_f0._4_4_,0xffffffff);
  FUN_18034a380(uVar23,&local_138,&local_148,&local_100);
  fVar20 = (float)FUN_1802b3660(local_138 + 0x14);
  fVar24 = DAT_1808ac1f4;
  lVar2 = *(longlong *)(lVar2 + 0x2c8);
  uVar9 = FUN_1802b38e0((int)(longlong)
                             ((float)(DAT_180960ef0 >> 0x18) * DAT_1808ac1f4 + DAT_1808ac1f4) <<
                        0x18 | DAT_180960ef0 & 0xffffff,
                        (int)(longlong)
                             ((float)(DAT_180960ef4 >> 0x18) * DAT_1808ac1f4 + DAT_1808ac1f4) <<
                        0x18 | DAT_180960ef4 & 0xffffff);
  local_138 = _DAT_1808ad340;
  lStack_130 = _UNK_1808ad348;
  local_190 = (float *)((ulonglong)local_190._4_4_ << 0x20);
  local_198 = (float *)&local_138;
  FUN_18036b940(lVar2,&local_158,&local_150,
                (int)(longlong)((float)(uVar9 >> 0x18) * *(float *)(DAT_180ca0a50 + 0xc9c) + fVar24)
                << 0x18 | uVar9 & 0xffffff);
  local_138 = _DAT_1808ad340;
  lStack_130 = _UNK_1808ad348;
  local_188 = (char *)CONCAT44(local_188._4_4_,fVar3);
  local_190 = (float *)((ulonglong)local_190 & 0xffffffff00000000);
  local_198 = (float *)&local_138;
  FUN_18036bcb0(lVar2,&local_158,&local_150,
                (int)(longlong)
                     ((float)(DAT_180960eec >> 0x18) * *(float *)(DAT_180ca0a50 + 0xc9c) + fVar24)
                << 0x18 | DAT_180960eec & 0xffffff);
  fVar19 = (float)FUN_18053f0d0(param_8._4_4_ * fVar19);
  fVar26 = local_14c - (param_8._4_4_ - fVar19) * fVar24;
  if (*(longlong *)(param_5 + 0x10) != 0) {
    plVar12 = (longlong *)FUN_1800e77d0(&local_138,param_5);
    lVar10 = *plVar12;
    if (lVar10 != 0) {
      if (*(int *)((longlong)plVar12 + 0xc) < 1) {
        fVar26 = DAT_1808ac3fc;
      }
      else {
        fVar26 = (float)(int)plVar12[1] / (float)*(int *)((longlong)plVar12 + 0xc);
      }
      fVar25 = fVar26 * fVar19;
      if ((float)param_8 < fVar26 * fVar19) {
        fVar19 = (float)param_8 / fVar26;
        fVar25 = (float)param_8;
      }
      fVar21 = (float)FUN_18053f0d0();
      fVar22 = (float)FUN_18053f0d0();
      fVar26 = fVar21 + fVar19;
      if (0xf < *(ulonglong *)(param_5 + 0x18)) {
        param_5 = *(byte **)param_5;
      }
      uVar15 = 0xffffffff;
      uVar9 = 0xffffffff;
      bVar7 = *param_5;
      if (bVar7 != 0) {
        do {
          pbVar18 = param_5 + 1;
          if (((bVar7 == 0x23) && (*pbVar18 == 0x23)) && (param_5[2] == 0x23)) {
            uVar15 = 0xffffffff;
            pbVar18 = param_5 + 3;
          }
          else {
            uVar15 = (ulonglong)
                     ((uint)(uVar15 >> 8) ^
                     *(uint *)(&DAT_1806c25c0 + (uVar15 & 0xff ^ (ulonglong)bVar7) * 4));
          }
          uVar9 = (uint)uVar15;
          bVar7 = *pbVar18;
          param_5 = pbVar18;
        } while (bVar7 != 0);
        param_1 = local_128;
      }
      local_160 = fVar22;
      local_15c = fVar21;
      fVar19 = (float)FUN_1802d4ba0(uVar8,~uVar9);
      local_148 = 1.0;
      local_144 = 1.0;
      local_118[0] = 0.0;
      local_118[1] = 0.0;
      local_128 = (undefined2 *)CONCAT44(fVar26,fVar22 + fVar25);
      local_138 = 0;
      local_188 = (char *)CONCAT44(local_188._4_4_,
                                   (int)(longlong)
                                        (fVar19 * *(float *)(DAT_180ca0a50 + 0xc9c) *
                                         (float)(param_6 >> 0x18) + fVar24) << 0x18 |
                                   param_6 & 0xffffff);
      local_190 = &local_148;
      local_198 = local_118;
      lStack_130 = lVar10;
      FUN_1803fea90(lVar2,&local_138,&local_160,&local_128);
      goto LAB_1802d54a4;
    }
  }
  FUN_1802d4ba0(uVar8,0);
LAB_1802d54a4:
  fVar21 = DAT_1808acb94;
  fVar25 = DAT_1808ac960;
  fVar19 = DAT_1808ac658;
  if (param_7 != (longlong *)0x0) {
    lVar10 = *param_7;
    lVar14 = param_7[1];
    if (lVar10 != lVar14) {
      fVar22 = local_158 + DAT_1808ac750;
      fVar26 = (fVar26 - DAT_1808ac918) - DAT_1808ac658;
      fVar27 = fVar26 + DAT_1808ac918;
      do {
        if (*(longlong *)(lVar10 + 0x10) != 0) {
          plVar12 = (longlong *)FUN_1800e77d0(&local_138,lVar10);
          if (*plVar12 != 0) {
            iVar17 = *(int *)((longlong)plVar12 + 0xc);
            local_128 = (undefined2 *)CONCAT44(fVar26,fVar22);
            local_160 = fVar22 + fVar25;
            if (iVar17 < 1) {
              iVar17 = 1;
            }
            local_190 = (float *)(CONCAT44(local_190._4_4_,
                                           (int)(longlong)
                                                (*(float *)(DAT_180ca0a50 + 0xc9c) * fVar21 + fVar24
                                                ) << 0x18) | 0xffffff);
            local_198 = &local_160;
            local_15c = fVar27;
            FUN_1802d4a10(lVar2,*plVar12,(float)(int)plVar12[1] / (float)iVar17,&local_128);
          }
        }
        fVar22 = fVar22 + fVar25;
        lVar10 = lVar10 + 0x20;
      } while (lVar10 != lVar14);
    }
  }
  uVar8 = FUN_1802d47f0(local_120);
  local_160 = local_158;
  local_15c = local_14c - fVar19;
  local_138 = _DAT_1808adc60;
  lStack_130 = _UNK_1808adc68;
  local_190 = (float *)((ulonglong)local_190 & 0xffffffff00000000);
  local_198 = (float *)&local_138;
  FUN_18036b940(lVar2,&local_160,&local_150,
                (int)(longlong)((float)(uVar8 >> 0x18) * *(float *)(DAT_180ca0a50 + 0xc9c) + fVar24)
                << 0x18 | uVar8 & 0xffffff);
  if (0.0 < fVar20) {
    local_120 = local_150 - DAT_1808ac864;
    local_11c = local_154 + DAT_1808ac864;
    uVar8 = DAT_1809f54bc >> 0x18;
    uVar16 = (int)(longlong)(fVar20 * *(float *)(DAT_180ca0a50 + 0xc9c) * (float)uVar8 + fVar24) <<
             0x18;
    uVar9 = DAT_1809f54bc & 0xffffff;
    if (uVar16 != 0) {
      local_190 = (float *)CONCAT44(local_190._4_4_,0xb);
      local_198 = (float *)CONCAT44(local_198._4_4_,DAT_1808ac794);
      FUN_1803fddf0(lVar2,&local_120,uVar8,0);
      FUN_1803fd460(lVar2,*(undefined8 *)(lVar2 + 0x58),*(undefined4 *)(lVar2 + 0x50),uVar16 | uVar9
                   );
      *(undefined4 *)(lVar2 + 0x50) = 0;
      uVar8 = DAT_1809f54bc >> 0x18;
    }
    uVar16 = (int)(longlong)(fVar20 * *(float *)(DAT_180ca0a50 + 0xc9c) * (float)uVar8 + fVar24) <<
             0x18;
    uVar9 = DAT_1809f54bc & 0xffffff;
    if (uVar16 != 0) {
      local_190._0_4_ = 0x13;
      local_198._0_4_ = DAT_1808ac7a8;
      FUN_1803fddf0(lVar2,&local_120,uVar8,0);
      local_190 = (float *)CONCAT44(local_190._4_4_,0x200);
      local_198 = (float *)CONCAT44(local_198._4_4_,fVar3);
      FUN_1803fc600(lVar2,*(undefined8 *)(lVar2 + 0x58),*(undefined4 *)(lVar2 + 0x50),uVar16 | uVar9
                   );
      *(undefined4 *)(lVar2 + 0x50) = 0;
    }
  }
  pcVar11 = param_3;
  if (local_166 != '\0') {
    for (; ((pcVar11 != (char *)0xffffffffffffffff && (*pcVar11 != '\0')) &&
           ((*pcVar11 != '#' || (pcVar11[1] != '#')))); pcVar11 = pcVar11 + 1) {
    }
    local_100 = (char *)0x0;
    uStack_f8 = 0;
    local_f0 = 0;
    uStack_e8 = 0;
    if (param_3 == pcVar11) {
      local_f0 = _DAT_1808ad410;
      uStack_e8 = _UNK_1808ad418;
      local_100 = (char *)0x0;
    }
    else {
      FUN_1800133a0(&local_100,param_3,(longlong)pcVar11 - (longlong)param_3);
    }
    local_160 = local_158;
    local_15c = local_14c;
    FUN_1803fc200(lVar2,&local_160,&local_108,1);
    pcVar11 = (char *)&local_100;
    if (0xf < uStack_e8) {
      pcVar11 = local_100;
    }
    uVar8 = (int)(longlong)
                 ((float)(DAT_180960ec8 >> 0x18) * *(float *)(DAT_180ca0a50 + 0xc9c) + fVar24) <<
            0x18;
    local_160 = local_158;
    local_15c = local_14c + fVar19;
    lVar10 = DAT_181107a18;
    if ((DAT_181107a18 == 0) && (lVar10 = DAT_181107a08, DAT_181107a08 == 0)) {
      lVar10 = *(longlong *)(DAT_180ca0a50 + 0x11f0);
    }
    if (((uVar8 != 0) && (pcVar11 != (char *)0x0)) && (*pcVar11 != '\0')) {
      if (lVar10 == 0) {
        lVar10 = *(longlong *)(*(longlong *)(lVar2 + 0x38) + 0x18);
      }
      local_138 = *(longlong *)(lVar2 + 0x60);
      lStack_130 = *(undefined8 *)(lVar2 + 0x68);
      local_170 = 0;
      local_178 = 0;
      local_180 = 0;
      local_190 = (float *)&local_138;
      local_198 = (float *)CONCAT44(local_198._4_4_,uVar8 | DAT_180960ec8 & 0xffffff);
      local_188 = pcVar11;
      FUN_18040a900(lVar10,lVar2,pcVar11,&local_160);
    }
    iVar1 = *(int *)(lVar2 + 0xa0);
    iVar17 = iVar1 + -1;
    *(int *)(lVar2 + 0xa0) = iVar17;
    if (iVar17 == 0) {
      puVar13 = (undefined8 *)(*(longlong *)(lVar2 + 0x38) + 0x34);
    }
    else {
      puVar13 = (undefined8 *)((longlong)(iVar1 + -2) * 0x10 + *(longlong *)(lVar2 + 0xa8));
    }
    uVar23 = puVar13[1];
    *(undefined8 *)(lVar2 + 0x60) = *puVar13;
    *(undefined8 *)(lVar2 + 0x68) = uVar23;
    FUN_1803fbff0(lVar2);
    FUN_18000f890(&local_100);
  }
  return param_1;
}



/* ===== 1802d59d0 FUN_1802d59d0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1802d59d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       float param_5,undefined8 *param_6,char param_7,uint param_8)

{
  longlong lVar1;
  undefined8 uVar2;
  float fVar3;
  char cVar4;
  byte bVar5;
  uint uVar6;
  ulonglong uVar7;
  float *pfVar8;
  float *pfVar9;
  uint uVar10;
  char *pcVar11;
  float fVar12;
  undefined4 uVar13;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined4 in_XMM3_Dc;
  undefined4 in_XMM3_Dd;
  float fVar17;
  ulonglong in_stack_fffffffffffffee8;
  char local_f8;
  char local_f7 [7];
  uint local_f0 [2];
  undefined8 local_e8;
  undefined8 local_e0;
  float local_d8;
  float local_d4;
  float local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  float local_b0 [34];
  
  lVar1 = DAT_180ca0a50;
  uVar7 = *(ulonglong *)(DAT_180ca0a50 + 0x14f8);
  *(undefined1 *)(uVar7 + 0xce) = 1;
  lVar1 = *(longlong *)(lVar1 + 0x14f8);
  if (*(char *)(lVar1 + 0xd1) != '\0') {
LAB_1802d5f01:
    return uVar7 & 0xffffffffffffff00;
  }
  uVar6 = FUN_1803e8900(lVar1,param_1);
  local_e8 = *(undefined8 *)(lVar1 + 0x118);
  local_e0 = CONCAT44((float)((ulonglong)*param_6 >> 0x20) + (float)((ulonglong)local_e8 >> 0x20),
                      (float)*param_6 + (float)local_e8);
  FUN_1803ec550(param_6,DAT_1808acda0);
  uVar7 = FUN_1803ec2f0(&local_e8,uVar6,0,0);
  if ((char)uVar7 == '\0') goto LAB_1802d5f01;
  local_f7[0] = '\0';
  local_f8 = '\0';
  uVar10 = *(uint *)(DAT_180ca0a50 + 0x1eec) & 0x40;
  uVar14 = extraout_XMM0_Qa;
  if (uVar10 == 0) {
    cVar4 = FUN_180415270(&local_e8,uVar6,local_f7,&local_f8,
                          in_stack_fffffffffffffee8 & 0xffffffff00000000);
    uVar14 = extraout_XMM0_Qa_00;
    if (cVar4 != '\0') {
      uVar7 = 1;
      goto LAB_1802d5b08;
    }
  }
  uVar7 = 0;
LAB_1802d5b08:
  fVar17 = DAT_1808ac34c;
  fVar3 = DAT_1808ac1f4;
  if (local_f8 == '\0') {
    if ((param_7 == '\0') && (local_f7[0] == '\0')) {
      fVar12 = 0.0;
    }
    else {
      fVar12 = DAT_1808ac1f4;
    }
  }
  else {
    fVar12 = DAT_1808ac34c;
  }
  uVar6 = ~uVar6;
  pcVar11 = "##glyph_hover";
  bVar5 = 0x23;
  local_f0[0] = uVar6;
  do {
    pcVar11 = pcVar11 + 1;
    if (((bVar5 == 0x23) && (*pcVar11 == 0x23)) && (pcVar11[1] == 0x23)) {
      pcVar11 = pcVar11 + 2;
      local_f0[0] = uVar6;
    }
    else {
      local_f0[0] = local_f0[0] >> 8 ^
                    *(uint *)(&DAT_1806c25c0 +
                             ((ulonglong)(local_f0[0] & 0xff) ^ (ulonglong)bVar5) * 4);
    }
    bVar5 = *pcVar11;
  } while (bVar5 != 0);
  local_f0[0] = ~local_f0[0];
  local_cc = 0;
  local_c8 = 0xffffffff;
  local_d8 = fVar12;
  local_d4 = fVar12;
  local_d0 = fVar12;
  FUN_18034a380(uVar14,&local_c0,local_f0,&local_d8);
  uVar13 = DAT_1808ac118;
  uVar14 = FUN_1802b3660(local_c0 + 0x14,fVar12,DAT_1808ac118,0);
  fVar12 = fVar17;
  if ((local_f8 == '\0') && (param_7 == '\0')) {
    if (local_f7[0] == '\0') {
      fVar12 = 0.0;
    }
    else {
      fVar12 = fVar3;
    }
  }
  pcVar11 = "##glyph_lit";
  bVar5 = 0x23;
  local_f0[0] = uVar6;
  do {
    pcVar11 = pcVar11 + 1;
    if (((bVar5 == 0x23) && (*pcVar11 == 0x23)) && (pcVar11[1] == 0x23)) {
      pcVar11 = pcVar11 + 2;
      local_f0[0] = uVar6;
    }
    else {
      local_f0[0] = local_f0[0] >> 8 ^
                    *(uint *)(&DAT_1806c25c0 +
                             ((ulonglong)(local_f0[0] & 0xff) ^ (ulonglong)bVar5) * 4);
    }
    bVar5 = *pcVar11;
  } while (bVar5 != 0);
  local_f0[0] = ~local_f0[0];
  local_cc = 0;
  local_c8 = 0xffffffff;
  local_d8 = fVar12;
  local_d4 = fVar12;
  local_d0 = fVar12;
  FUN_18034a380(uVar14,&local_c0,local_f0,&local_d8);
  fVar12 = (float)FUN_1802b3660(local_c0 + 0x14,fVar12,uVar13,0);
  uVar2 = *(undefined8 *)(lVar1 + 0x2c8);
  if (0.0 < (float)uVar14) {
    local_b0[2] = 1.0;
    local_b0[0] = 0.0;
    local_b0[1] = (float)uVar14 * DAT_1808ac1b0 * DAT_1808ac2cc;
    pfVar9 = local_b0;
    if (0.0 <= local_b0[1]) {
      pfVar9 = local_b0 + 1;
    }
    pfVar8 = local_b0 + 2;
    if (local_b0[1] <= fVar17) {
      pfVar8 = pfVar9;
    }
    local_c0 = _DAT_1808adcf0;
    uStack_b8 = _UNK_1808adcf8;
    FUN_18036b940(uVar2,&local_e8,&local_e0,
                  (int)(longlong)
                       ((float)((uint)(longlong)(*pfVar8 * DAT_1808acb94 + fVar3) & 0xff) *
                        *(float *)(DAT_180ca0a50 + 0xc9c) + fVar3) << 0x18 |
                  DAT_180960f44 & 0xffffff,&local_c0,0);
  }
  fVar17 = (float)(param_8 >> 0x18) / DAT_1808acb94;
  if (uVar10 == 0) {
    fVar12 = fVar12 * DAT_1808ac154 + DAT_1808ac254;
  }
  else {
    fVar12 = DAT_1808ac154;
  }
  auVar15._8_4_ = in_XMM3_Dc;
  auVar15._0_8_ = param_4;
  auVar15._12_4_ = in_XMM3_Dd;
  auVar16._4_12_ = auVar15._4_12_;
  auVar16._0_4_ = (float)param_4 * DAT_1808abfc4 * param_5 + DAT_1808ac2f0;
  FUN_18053fc00(auVar16._0_8_);
  uVar13 = FUN_18053fc00();
  local_c0 = CONCAT44(local_c0._4_4_,uVar13);
  uVar13 = FUN_18053fc00((local_e0._4_4_ + local_e8._4_4_) * fVar3 - param_5 * DAT_1808ac404 * fVar3
                        );
  local_c0 = CONCAT44(uVar13,(undefined4)local_c0);
  FUN_180322fd0(uVar2,param_2,param_3,(float)param_4,&local_c0,param_5,
                (int)(longlong)
                     ((float)((uint)(longlong)(fVar12 * fVar17 * DAT_1808acb94 + fVar3) & 0xff) *
                      *(float *)(DAT_180ca0a50 + 0xc9c) + fVar3) << 0x18 | param_8 & 0xffffff);
  return uVar7;
}



/* ===== 1802d5f20 FUN_1802d5f20 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1802d5f20(undefined8 param_1,char *param_2,longlong param_3,undefined8 param_4,
                       undefined8 param_5,float param_6,char param_7,uint param_8)

{
  int iVar1;
  float fVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  float fVar6;
  ulonglong uVar7;
  byte bVar8;
  byte bVar9;
  uint uVar10;
  ulonglong uVar11;
  float *pfVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  float *pfVar15;
  uint uVar16;
  uint uVar17;
  char *pcVar18;
  float fVar19;
  float fVar20;
  undefined8 extraout_XMM0_Qa;
  undefined1 auVar21 [16];
  float fVar22;
  float fVar23;
  ulonglong in_stack_fffffffffffffe78;
  undefined4 uVar24;
  char *in_stack_fffffffffffffe80;
  undefined8 in_stack_fffffffffffffe88;
  undefined4 uVar25;
  ulonglong in_stack_fffffffffffffe98;
  char local_148;
  char local_147 [7];
  float local_140;
  float local_13c;
  float local_138;
  float local_134;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  longlong local_118;
  longlong lStack_110;
  float local_108;
  float local_104;
  float local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  float local_f0;
  float local_ec;
  float local_e8 [42];
  
  uVar7 = DAT_180ca0a50;
  uVar25 = (undefined4)((ulonglong)in_stack_fffffffffffffe88 >> 0x20);
  uVar11 = *(ulonglong *)(DAT_180ca0a50 + 0x14f8);
  *(undefined1 *)(uVar11 + 0xce) = 1;
  lVar4 = *(longlong *)(uVar7 + 0x14f8);
  if (*(char *)(lVar4 + 0xd1) == '\0') {
    uVar10 = FUN_1803e8900(lVar4,param_1);
    fVar2 = *(float *)(DAT_180ca0a50 + 0x1200);
    if (param_7 == '\0') {
      fVar19 = 0.0;
    }
    else {
      fVar19 = DAT_1808ac34c;
    }
    pcVar18 = "##tab_label";
    uVar17 = ~uVar10;
    bVar8 = 0x23;
    uVar11 = DAT_180ca0a50;
    uVar16 = uVar17;
    do {
      pcVar18 = pcVar18 + 1;
      if (((bVar8 == 0x23) && (*pcVar18 == 0x23)) && (pcVar18[1] == 0x23)) {
        pcVar18 = pcVar18 + 2;
        uVar16 = uVar17;
      }
      else {
        uVar11 = (ulonglong)(uVar16 & 0xff) ^ (ulonglong)bVar8;
        uVar16 = uVar16 >> 8 ^ *(uint *)(&DAT_1806c25c0 + uVar11 * 4);
      }
      bVar8 = *pcVar18;
    } while (bVar8 != 0);
    local_138 = (float)~uVar16;
    local_fc = 0;
    local_f8 = 0xffffffff;
    local_108 = fVar19;
    local_104 = fVar19;
    local_100 = fVar19;
    FUN_18034a380(uVar11,&local_118,&local_138,&local_108);
    fVar19 = (float)FUN_1802b3660(local_118 + 0x14,fVar19,DAT_1808ac118,0);
    uVar24 = DAT_1808acda0;
    if (param_2 == (char *)0x0) {
      auVar21 = ZEXT816(0);
    }
    else {
      in_stack_fffffffffffffe98 = 0;
      uVar25 = 0;
      in_stack_fffffffffffffe78 = CONCAT44((int)(in_stack_fffffffffffffe78 >> 0x20),DAT_1808acda0);
      in_stack_fffffffffffffe80 = param_2;
      FUN_18040a2f0(&local_140,*(undefined8 *)(DAT_180ca0a50 + 0x11f0),
                    *(undefined4 *)(DAT_180ca0a50 + 0x1200),DAT_1808acd08,in_stack_fffffffffffffe78,
                    param_2,0,0,0);
      auVar21 = ZEXT416((uint)(float)(int)((uint)((float)(int)local_140 < local_140) +
                                          (int)local_140));
    }
    fVar6 = DAT_1808ac8b0;
    auVar21._0_4_ = auVar21._0_4_ + DAT_1808ac2f0;
    fVar22 = fVar2 + DAT_1808ac8b0;
    fVar20 = (float)FUN_18053fc00(auVar21._0_8_);
    fVar23 = DAT_1808ac7ac;
    if (param_6 <= 0.0) {
      param_6 = fVar2 + DAT_1808ac7ac;
    }
    local_12c = *(float *)(lVar4 + 0x11c);
    local_130 = *(float *)(lVar4 + 0x118);
    local_124 = local_12c + param_6;
    local_128 = local_130 + ((fVar20 + fVar6 + fVar2 + DAT_1808ac7ac) - fVar22) * fVar19 + fVar22;
    local_134 = local_124 - local_12c;
    local_138 = local_128 - local_130;
    local_f0 = local_12c;
    FUN_1803ec550(&local_138,uVar24);
    uVar11 = FUN_1803ec2f0(&local_130,uVar10,0,0);
    if ((char)uVar11 != '\0') {
      local_148 = '\0';
      local_147[0] = '\0';
      in_stack_fffffffffffffe78 = in_stack_fffffffffffffe78 & 0xffffffff00000000;
      bVar8 = FUN_180415270(&local_130,uVar10,&local_148,local_147,in_stack_fffffffffffffe78);
      fVar6 = DAT_1808ac1f4;
      uVar24 = (undefined4)(in_stack_fffffffffffffe78 >> 0x20);
      if (local_147[0] == '\0') {
        fVar20 = DAT_1808ac27c;
        if (param_7 == '\0') {
          if (local_148 == '\0') {
            fVar20 = 0.0;
          }
        }
        else if (local_148 == '\0') {
          fVar20 = DAT_1808ac1f4;
        }
      }
      else {
        fVar20 = DAT_1808ac34c;
      }
      pcVar18 = "##tab_hover";
      bVar9 = 0x23;
      uVar10 = uVar17;
      do {
        pcVar18 = pcVar18 + 1;
        if (((bVar9 == 0x23) && (*pcVar18 == 0x23)) && (pcVar18[1] == 0x23)) {
          pcVar18 = pcVar18 + 2;
          uVar10 = uVar17;
        }
        else {
          uVar10 = uVar10 >> 8 ^
                   *(uint *)(&DAT_1806c25c0 + ((ulonglong)(uVar10 & 0xff) ^ (ulonglong)bVar9) * 4);
        }
        bVar9 = *pcVar18;
      } while (bVar9 != 0);
      local_138 = (float)~uVar10;
      local_fc = 0;
      local_f8 = 0xffffffff;
      local_108 = fVar20;
      local_104 = fVar20;
      local_100 = fVar20;
      FUN_18034a380(extraout_XMM0_Qa,&local_118,&local_138,&local_108);
      fVar20 = (float)FUN_1802b3660(local_118 + 0x14,fVar20,DAT_1808ac118,0);
      lVar4 = *(longlong *)(lVar4 + 0x2c8);
      if (0.0 < fVar20) {
        local_e8[2] = 1.0;
        local_e8[0] = 0.0;
        local_e8[1] = fVar20 * DAT_1808ac1b0 * DAT_1808ac2cc;
        pfVar15 = local_e8;
        if (0.0 <= local_e8[1]) {
          pfVar15 = local_e8 + 1;
        }
        pfVar12 = local_e8 + 2;
        if (local_e8[1] <= DAT_1808ac34c) {
          pfVar12 = pfVar15;
        }
        local_118 = _DAT_1808add10;
        lStack_110 = _UNK_1808add18;
        plVar13 = &local_118;
        FUN_18036b940(lVar4,&local_130,&local_128,
                      (int)(longlong)
                           ((float)((uint)(longlong)(*pfVar12 * DAT_1808acb94 + fVar6) & 0xff) *
                            *(float *)(DAT_180ca0a50 + 0xc9c) + fVar6) << 0x18 |
                      DAT_180960f44 & 0xffffff,plVar13,
                      (ulonglong)in_stack_fffffffffffffe80 & 0xffffffff00000000);
        uVar24 = (undefined4)((ulonglong)plVar13 >> 0x20);
      }
      fVar20 = (float)FUN_180519080();
      local_140 = fVar20;
      fVar22 = (float)FUN_180519080((param_6 - fVar2) * fVar6 + local_f0);
      if (*(longlong *)(param_3 + 0x10) != 0) {
        local_13c = fVar22;
        plVar13 = (longlong *)FUN_1800e77d0(&local_108,param_3);
        if (*plVar13 != 0) {
          local_ec = fVar2 + fVar22;
          local_118 = 0;
          local_f0 = fVar2 + fVar20;
          lStack_110 = *plVar13;
          FUN_1803fea90(lVar4,&local_118,&local_140,&local_f0,param_4,param_5,
                        CONCAT44(uVar25,(int)(longlong)
                                             (*(float *)(DAT_180ca0a50 + 0xc9c) * DAT_1808acb94 +
                                             fVar6) << 0x18) | 0xffffff);
          uVar24 = (undefined4)((ulonglong)param_4 >> 0x20);
        }
      }
      if (0.0 < fVar19) {
        local_13c = local_12c;
        fVar23 = fVar2 + fVar20 + fVar23;
        local_140 = fVar23;
        FUN_1803fc200(lVar4,&local_140,&local_128,1);
        uVar10 = (int)(longlong)
                      (fVar19 * *(float *)(DAT_180ca0a50 + 0xc9c) * (float)(param_8 >> 0x18) + fVar6
                      ) << 0x18;
        local_140 = fVar23;
        local_13c = (float)FUN_18053f0d0();
        if (((uVar10 != 0) && (param_2 != (char *)0x0)) && (*param_2 != '\0')) {
          local_118 = *(longlong *)(lVar4 + 0x60);
          lStack_110 = *(longlong *)(lVar4 + 0x68);
          FUN_18040a900(*(undefined8 *)(*(longlong *)(lVar4 + 0x38) + 0x18),lVar4,
                        *(undefined4 *)(*(longlong *)(lVar4 + 0x38) + 0x20),&local_140,
                        CONCAT44(uVar24,param_8 & 0xffffff | uVar10),&local_118,param_2,0,
                        in_stack_fffffffffffffe98 & 0xffffffff00000000,0);
        }
        iVar3 = *(int *)(lVar4 + 0xa0);
        iVar1 = iVar3 + -1;
        *(int *)(lVar4 + 0xa0) = iVar1;
        if (iVar1 == 0) {
          puVar14 = (undefined8 *)(*(longlong *)(lVar4 + 0x38) + 0x34);
        }
        else {
          puVar14 = (undefined8 *)((longlong)(iVar3 + -2) * 0x10 + *(longlong *)(lVar4 + 0xa8));
        }
        uVar5 = puVar14[1];
        *(undefined8 *)(lVar4 + 0x60) = *puVar14;
        *(undefined8 *)(lVar4 + 0x68) = uVar5;
        FUN_1803fbff0(lVar4);
      }
      return (ulonglong)bVar8;
    }
  }
  return uVar11 & 0xffffffffffffff00;
}



/* ===== 1802d6630 FUN_1802d6630 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802d6630(longlong param_1,char *param_2,undefined4 param_3,char *param_4)

{
  float fVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  uint uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  char *pcVar13;
  longlong lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float local_res8;
  float local_resc;
  undefined8 local_res10;
  float local_res20;
  float local_res24;
  undefined8 *in_stack_fffffffffffffec8;
  ulonglong uVar19;
  undefined8 in_stack_fffffffffffffed8;
  undefined8 in_stack_fffffffffffffee8;
  ulonglong uVar20;
  undefined4 uVar21;
  float local_f8;
  float local_f4;
  undefined8 local_e8;
  longlong lStack_e0;
  undefined1 local_d8 [160];
  
  uVar21 = (undefined4)((ulonglong)in_stack_fffffffffffffed8 >> 0x20);
  uVar11 = (uint)((ulonglong)in_stack_fffffffffffffee8 >> 0x20);
  if (*(longlong *)(param_1 + 0x10) == 0) {
    lVar14 = 0;
  }
  else {
    plVar8 = (longlong *)FUN_1800e77d0(local_d8,param_1);
    lVar14 = *plVar8;
  }
  lVar10 = DAT_1811079c0;
  lVar12 = DAT_180ca0a50;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  fVar5 = DAT_1808aca54;
  fVar4 = DAT_1808ac930;
  fVar3 = DAT_1808ac1f4;
  lVar9 = *(longlong *)(lVar12 + 0x14f8);
  lVar2 = *(longlong *)(lVar9 + 0x2c8);
  fVar1 = *(float *)(lVar9 + 0x118);
  fVar17 = *(float *)(lVar9 + 0x11c);
  if ((lVar10 == 0) && (lVar10 = DAT_181107a08, DAT_181107a08 == 0)) {
    lVar10 = *(longlong *)(lVar12 + 0x11f0);
  }
  if (param_4 == (char *)0x0) {
    fVar18 = DAT_1808ac930;
  }
  else {
    fVar18 = DAT_1808aca4c;
  }
  if (lVar14 == 0) {
    fVar15 = fVar1;
  }
  else {
    local_res20 = fVar1 + _DAT_1808aca84;
    local_res8 = 1.0;
    local_resc = 1.0;
    local_res10 = 0;
    local_res24 = fVar17 + DAT_1808aca54;
    local_e8 = 0;
    in_stack_fffffffffffffec8 = &local_res10;
    local_f8 = fVar1;
    local_f4 = fVar17;
    lStack_e0 = lVar14;
    FUN_1803fea90(lVar2,&local_e8,&local_f8,&local_res20,in_stack_fffffffffffffec8,&local_res8,
                  CONCAT44(uVar21,(int)(longlong)
                                       (*(float *)(lVar12 + 0xc9c) * DAT_1808acb94 + DAT_1808ac1f4)
                                  << 0x18) | 0xffffff);
    fVar15 = (float)FUN_18053f0d0((fVar5 - fVar18) * fVar3);
    fVar17 = fVar15 + fVar17;
    lVar12 = DAT_180ca0a50;
    fVar15 = fVar1 + _DAT_1808acaac;
  }
  pcVar13 = param_2;
  if (0xf < *(ulonglong *)(param_2 + 0x18)) {
    pcVar13 = *(char **)param_2;
  }
  uVar6 = FUN_1802d47f0(param_3,DAT_1808ac34c);
  uVar7 = (int)(longlong)((float)(uVar6 >> 0x18) * *(float *)(lVar12 + 0xc9c) + fVar3) << 0x18;
  local_res8 = fVar15;
  local_resc = fVar17;
  if (((uVar7 != 0) && (pcVar13 != (char *)0x0)) && (*pcVar13 != '\0')) {
    if (lVar10 == 0) {
      lVar9 = *(longlong *)(*(longlong *)(lVar2 + 0x38) + 0x18);
    }
    else {
      lVar9 = lVar10;
    }
    local_e8 = *(undefined8 *)(lVar2 + 0x60);
    lStack_e0 = *(longlong *)(lVar2 + 0x68);
    in_stack_fffffffffffffec8 =
         (undefined8 *)
         CONCAT44((int)((ulonglong)in_stack_fffffffffffffec8 >> 0x20),uVar6 & 0xffffff | uVar7);
    FUN_18040a900(lVar9,lVar2,fVar4,&local_res8,in_stack_fffffffffffffec8,&local_e8,pcVar13,0,
                  (ulonglong)uVar11 << 0x20,0);
  }
  if (0xf < *(ulonglong *)(param_2 + 0x18)) {
    param_2 = *(char **)param_2;
  }
  uVar21 = 0;
  uVar20 = 0;
  uVar19 = (ulonglong)in_stack_fffffffffffffec8 & 0xffffffff00000000;
  FUN_18040a2f0(&local_res8,lVar10,fVar4,DAT_1808acd08,uVar19,param_2,0,0,0);
  fVar16 = local_res8 + fVar15;
  if (param_4 == (char *)0x0) {
    fVar17 = fVar16;
  }
  else {
    local_resc = fVar17 + fVar4 + DAT_1808ac658;
    uVar11 = (int)(longlong)
                  ((float)(DAT_180960ec8 >> 0x18) * *(float *)(DAT_180ca0a50 + 0xc9c) + fVar3) <<
             0x18;
    lVar9 = DAT_181107a08;
    if (DAT_181107a08 == 0) {
      lVar9 = *(longlong *)(DAT_180ca0a50 + 0x11f0);
    }
    local_res8 = fVar15;
    if ((uVar11 != 0) && (*param_4 != '\0')) {
      if (lVar9 == 0) {
        lVar9 = *(longlong *)(*(longlong *)(lVar2 + 0x38) + 0x18);
      }
      local_e8 = *(undefined8 *)(lVar2 + 0x60);
      lStack_e0 = *(longlong *)(lVar2 + 0x68);
      uVar19 = CONCAT44((int)(uVar19 >> 0x20),uVar11 | DAT_180960ec8 & 0xffffff);
      FUN_18040a900(lVar9,lVar2,fVar4,&local_res8,uVar19,&local_e8,param_4,0,
                    uVar20 & 0xffffffff00000000,0,uVar21);
    }
    lVar9 = DAT_181107a08;
    if (DAT_181107a08 == 0) {
      lVar9 = *(longlong *)(DAT_180ca0a50 + 0x11f0);
    }
    FUN_18040a2f0(&local_res8,lVar9,fVar4,DAT_1808acd08,uVar19 & 0xffffffff00000000,param_4,0,0,0);
    fVar17 = local_res8 + fVar15;
    if (local_res8 + fVar15 <= fVar16) {
      fVar17 = fVar16;
    }
  }
  local_resc = fVar5;
  if (lVar14 == 0) {
    local_resc = fVar18;
  }
  local_res8 = fVar17 - fVar1;
  FUN_1804174f0(&local_res8);
  return;
}



/* ===== 1802d6b00 FUN_1802d6b00 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1802d6b00(undefined8 *param_1,undefined4 param_2,longlong param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined1 *puVar11;
  undefined4 uVar12;
  ulonglong uVar13;
  undefined1 auStack_f8 [40];
  undefined8 *local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined1 local_a8 [32];
  undefined1 local_88 [32];
  undefined1 local_68 [32];
  undefined1 local_48 [32];
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_f8;
  local_d0 = param_1;
  if ((param_3 != 0) && (*(char *)(param_3 + 0x5c) != '\0')) {
    FUN_180298cb0(param_2,param_3);
  }
  lVar6 = FUN_1800e0b60(param_2,param_3);
  if (lVar6 == 0) {
    if (param_3 == 0) {
      uVar12 = 0;
    }
    else {
      uVar12 = *(undefined4 *)(param_3 + 8);
    }
    uVar7 = FUN_18003a390(local_48,uVar12);
    uVar9 = FUN_18003a390(local_68,param_2);
    uVar9 = FUN_180066ab0(local_88,"InventoryAPI.GetFauxItemIDFromDefAndPaintIndex(",uVar9);
    puVar8 = (undefined4 *)FUN_1800134a0(uVar9,&DAT_1806f0594,2);
    local_c8 = *puVar8;
    uStack_c4 = puVar8[1];
    uStack_c0 = puVar8[2];
    uStack_bc = puVar8[3];
    local_b8 = puVar8[4];
    uStack_b4 = puVar8[5];
    uStack_b0 = puVar8[6];
    uStack_ac = puVar8[7];
    *(undefined8 *)(puVar8 + 4) = 0;
    *(undefined8 *)(puVar8 + 6) = 0xf;
    *(undefined1 *)puVar8 = 0;
    uVar7 = FUN_180066820(local_a8,&local_c8,uVar7);
    puVar8 = (undefined4 *)FUN_1800134a0(uVar7,&DAT_1806e1ac0,1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    uVar12 = puVar8[1];
    uVar2 = puVar8[2];
    uVar3 = puVar8[3];
    *(undefined4 *)param_1 = *puVar8;
    *(undefined4 *)((longlong)param_1 + 4) = uVar12;
    *(undefined4 *)(param_1 + 1) = uVar2;
    *(undefined4 *)((longlong)param_1 + 0xc) = uVar3;
    uVar12 = puVar8[5];
    uVar2 = puVar8[6];
    uVar3 = puVar8[7];
    *(undefined4 *)(param_1 + 2) = puVar8[4];
    *(undefined4 *)((longlong)param_1 + 0x14) = uVar12;
    *(undefined4 *)(param_1 + 3) = uVar2;
    *(undefined4 *)((longlong)param_1 + 0x1c) = uVar3;
    *(undefined8 *)(puVar8 + 4) = 0;
    *(undefined8 *)(puVar8 + 6) = 0xf;
    *(undefined1 *)puVar8 = 0;
    FUN_18000f890(local_a8);
    uVar5 = CONCAT44(uStack_ac,uStack_b0);
    if (0xf < uVar5) {
      uVar13 = uVar5 + 1;
      lVar4 = CONCAT44(uStack_c4,local_c8);
      lVar6 = lVar4;
      if (0xfff < uVar13) {
        lVar6 = *(longlong *)(lVar4 + -8);
        if (0x1f < (lVar4 - lVar6) - 8U) {
          pcVar1 = (code *)swi(0x29);
          (*pcVar1)(5);
          pcVar1 = (code *)swi(3);
          puVar10 = (undefined8 *)(*pcVar1)();
          return puVar10;
        }
        uVar13 = uVar5 + 0x28;
      }
      thunk_FUN_1803d64e0(lVar6,uVar13);
    }
    FUN_18000f890(local_88);
    FUN_18000f890(local_68);
    puVar11 = local_48;
  }
  else {
    uVar7 = FUN_18004e4f0(local_a8,lVar6);
    uVar7 = FUN_180066ab0(&local_c8,&DAT_1806e17c8,uVar7);
    puVar8 = (undefined4 *)FUN_1800134a0(uVar7,&DAT_1806e17c8,1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    uVar12 = puVar8[1];
    uVar2 = puVar8[2];
    uVar3 = puVar8[3];
    *(undefined4 *)param_1 = *puVar8;
    *(undefined4 *)((longlong)param_1 + 4) = uVar12;
    *(undefined4 *)(param_1 + 1) = uVar2;
    *(undefined4 *)((longlong)param_1 + 0xc) = uVar3;
    uVar12 = puVar8[5];
    uVar2 = puVar8[6];
    uVar3 = puVar8[7];
    *(undefined4 *)(param_1 + 2) = puVar8[4];
    *(undefined4 *)((longlong)param_1 + 0x14) = uVar12;
    *(undefined4 *)(param_1 + 3) = uVar2;
    *(undefined4 *)((longlong)param_1 + 0x1c) = uVar3;
    *(undefined8 *)(puVar8 + 4) = 0;
    *(undefined8 *)(puVar8 + 6) = 0xf;
    *(undefined1 *)puVar8 = 0;
    FUN_18000f890(&local_c8);
    puVar11 = local_a8;
  }
  FUN_18000f890(puVar11);
  return param_1;
}



/* ===== 1802d6d30 FUN_1802d6d30 ===== */

void FUN_1802d6d30(longlong param_1)

{
  FUN_18000f890(param_1 + 0x38);
  FUN_18000f890(param_1);
  return;
}



/* ===== 1802d6d50 FUN_1802d6d50 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_1802d6d50(longlong *param_1,int param_2,int param_3)

{
  char ****ppppcVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  longlong *plVar8;
  char *****pppppcVar9;
  size_t sVar10;
  longlong lVar11;
  char *pcVar12;
  char *****pppppcVar13;
  undefined8 *****pppppuVar14;
  longlong lVar15;
  ulonglong uVar16;
  char ****ppppcVar17;
  char *pcVar18;
  char ****ppppcVar19;
  undefined **ppuVar20;
  undefined1 *puVar21;
  ulonglong uVar22;
  ulonglong unaff_R14;
  undefined8 uStack_160;
  undefined1 auStack_158 [8];
  undefined1 auStack_150 [40];
  longlong *local_128;
  longlong local_118;
  longlong alStack_110 [3];
  char *****local_f8;
  char ****ppppcStack_f0;
  longlong local_e8;
  char ****local_e0;
  ulonglong local_d8;
  longlong lStack_d0;
  longlong local_c8;
  undefined4 local_c0;
  undefined8 *****local_b8;
  undefined8 uStack_b0;
  ulonglong local_a8;
  ulonglong local_a0;
  longlong local_98 [4];
  undefined1 local_78 [32];
  ulonglong local_58;
  
  puVar21 = auStack_158;
  local_58 = DAT_180919500 ^ (ulonglong)auStack_158;
  alStack_110[0] = 0;
  alStack_110[1] = 0;
  alStack_110[2] = 0xf;
  local_118 = 0;
  ppppcStack_f0 = (char ****)0x0;
  local_e8 = 0;
  local_e0 = (char ****)0xf;
  local_f8 = (char *****)0x0;
  local_d8 = 0;
  lStack_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_128 = param_1;
  if (param_2 == 2) {
    alStack_110[1] = 9;
    FUN_180540530(&local_118,"cam_melee",9);
    ppppcVar17 = local_e0;
    alStack_110[0]._0_2_ = (ushort)(byte)alStack_110[0];
    if (local_e0 < (char ****)0xf) {
      ppppcVar19 = (char ****)0x7fffffffffffffff;
      if (local_e0 <= (char ****)(0x7fffffffffffffff - ((ulonglong)local_e0 >> 1))) {
        ppppcVar1 = (char ****)((longlong)local_e0 + ((ulonglong)local_e0 >> 1));
        ppppcVar19 = (char ****)0xf;
        if ((char ****)0xf < ppppcVar1) {
          ppppcVar19 = ppppcVar1;
        }
      }
      pppppcVar9 = (char *****)FUN_18000fb70((longlong)ppppcVar19 + 1);
      puVar21 = auStack_158;
      local_e8 = 0xf;
      *pppppcVar9 = (char ****)s_cam_melee_intro_18075d860._0_8_;
      *(undefined4 *)(pppppcVar9 + 1) = s_cam_melee_intro_18075d860._8_4_;
      *(undefined2 *)((longlong)pppppcVar9 + 0xc) = s_cam_melee_intro_18075d860._12_2_;
      *(char *)((longlong)pppppcVar9 + 0xe) = s_cam_melee_intro_18075d860[0xe];
      *(char *)((longlong)pppppcVar9 + 0xf) = '\0';
      local_e0 = ppppcVar19;
      if ((char ****)0xf < ppppcVar17) {
        ppppcVar19 = (char ****)((longlong)ppppcVar17 + 1);
        pppppcVar13 = local_f8;
        if ((char ****)0xfff < ppppcVar19) {
          pppppcVar13 = (char *****)local_f8[-1];
          if ((char *)0x1f < (char *)((longlong)local_f8 + (-8 - (longlong)pppppcVar13)))
          goto LAB_1802d759d;
          ppppcVar19 = ppppcVar17 + 5;
        }
        thunk_FUN_1803d64e0(pppppcVar13,ppppcVar19);
      }
      local_f8 = pppppcVar9;
    }
    else {
      pppppcVar9 = (char *****)&local_f8;
      if ((char ****)0xf < local_e0) {
        pppppcVar9 = local_f8;
      }
      local_e8 = 0xf;
      FUN_180540530(pppppcVar9,"cam_melee_intro",0xf);
      *(char *)((longlong)pppppcVar9 + 0xf) = '\0';
    }
    puVar21 = auStack_158;
    local_c0 = 8;
    *param_1 = 0;
    param_1[1] = 0;
    *param_1 = local_118;
    param_1[1] = alStack_110[0];
    param_1[2] = alStack_110[1];
    param_1[3] = alStack_110[2];
    param_1[4] = (longlong)local_f8;
    param_1[5] = (longlong)ppppcStack_f0;
    param_1[6] = local_e8;
    param_1[7] = (longlong)local_e0;
    param_1[8] = local_d8;
    param_1[9] = lStack_d0;
    param_1[10] = local_c8;
    *(undefined4 *)(param_1 + 0xb) = 8;
  }
  else if (param_2 == 4) {
    local_e8 = 10;
    local_f8 = (char *****)s_cam_gloves_18075d850._0_8_;
    ppppcStack_f0 = (char ****)(ulonglong)(ushort)s_cam_gloves_18075d850._8_2_;
    FUN_180029840(&local_118,&local_f8,10);
    puVar21 = auStack_158;
    local_c0 = 7;
    *param_1 = 0;
    param_1[1] = 0;
    *param_1 = local_118;
    param_1[1] = alStack_110[0];
    param_1[2] = alStack_110[1];
    param_1[3] = alStack_110[2];
    param_1[4] = (longlong)local_f8;
    param_1[5] = (longlong)ppppcStack_f0;
    param_1[6] = local_e8;
    param_1[7] = (longlong)local_e0;
    param_1[8] = local_d8;
    param_1[9] = lStack_d0;
    param_1[10] = local_c8;
    *(undefined4 *)(param_1 + 0xb) = 7;
  }
  else if (param_2 == 5) {
LAB_1802d7233:
    *(undefined8 *)(puVar21 + -8) = 0x1802d723d;
    pcVar12 = (char *)FUN_18000fb70(0x20);
    uVar5 = s_cam_musickit_close_18075d708._12_4_;
    uVar4 = s_cam_musickit_close_18075d708._8_4_;
    uVar3 = s_cam_musickit_close_18075d708._4_4_;
    *(undefined8 *)(puVar21 + 0x70) = 0x12;
    *(undefined8 *)(puVar21 + 0x78) = 0x1f;
    *(undefined4 *)pcVar12 = s_cam_musickit_close_18075d708._0_4_;
    *(undefined4 *)(pcVar12 + 4) = uVar3;
    *(undefined4 *)(pcVar12 + 8) = uVar4;
    *(undefined4 *)(pcVar12 + 0xc) = uVar5;
    *(undefined2 *)(pcVar12 + 0x10) = s_cam_musickit_close_18075d708._16_2_;
    pcVar12[0x12] = '\0';
    *(char **)(puVar21 + 0x60) = pcVar12;
    pcVar18 = puVar21 + 0x60;
    if (0xf < *(ulonglong *)(puVar21 + 0x78)) {
      pcVar18 = pcVar12;
    }
    *(undefined8 *)(puVar21 + -8) = 0x1802d728b;
    FUN_180029840(puVar21 + 0x40,pcVar18,*(undefined8 *)(puVar21 + 0x70));
    local_c0 = 4;
    *param_1 = 0;
    param_1[1] = 0;
    *param_1 = *(longlong *)(puVar21 + 0x40);
    param_1[1] = *(longlong *)(puVar21 + 0x48);
    param_1[2] = *(longlong *)(puVar21 + 0x50);
    param_1[3] = *(longlong *)(puVar21 + 0x58);
    param_1[4] = *(longlong *)(puVar21 + 0x60);
    param_1[5] = *(longlong *)(puVar21 + 0x68);
    param_1[6] = *(longlong *)(puVar21 + 0x70);
    param_1[7] = *(longlong *)(puVar21 + 0x78);
    param_1[8] = local_d8;
    param_1[9] = lStack_d0;
    param_1[10] = local_c8;
    *(undefined4 *)(param_1 + 0xb) = 4;
  }
  else {
    ppuVar20 = (undefined **)&DAT_1806597e0;
    do {
      if (*(int *)ppuVar20 == param_3) {
        uVar7 = FUN_18003a390(local_78,*(int *)((longlong)ppuVar20 + 4));
        plVar8 = (longlong *)FUN_180066ab0(local_98,&DAT_18075d6fc,uVar7);
        if (&local_118 != plVar8) {
          if (0xf < (ulonglong)alStack_110[2]) {
            uVar16 = alStack_110[2] + 1;
            lVar15 = local_118;
            if (0xfff < uVar16) {
              lVar15 = *(longlong *)(local_118 + -8);
              if (0x1f < (local_118 - lVar15) - 8U) {
                pcVar2 = (code *)swi(0x29);
                uVar16 = (*pcVar2)(5);
                puVar21 = auStack_150;
                goto LAB_1802d7039;
              }
              uVar16 = alStack_110[2] + 0x28;
            }
            thunk_FUN_1803d64e0(lVar15,uVar16);
          }
          local_118 = *plVar8;
          alStack_110[0] = plVar8[1];
          alStack_110[1] = plVar8[2];
          alStack_110[2] = plVar8[3];
          plVar8[2] = 0;
          plVar8[3] = 0xf;
          *(undefined1 *)plVar8 = 0;
        }
        FUN_18000f890(local_98);
        FUN_18000f890(local_78);
        pppppcVar9 = (char *****)FUN_180073a70(local_78,&local_118,"_intro");
        puVar21 = auStack_158;
        if (&local_f8 != (char ******)pppppcVar9) {
          if ((char ****)0xf < local_e0) {
            ppppcVar17 = (char ****)((longlong)local_e0 + 1);
            pppppcVar13 = local_f8;
            if ((char ****)0xfff < ppppcVar17) {
              pppppcVar13 = (char *****)local_f8[-1];
              if ((char *)0x1f < (char *)((longlong)local_f8 + (-8 - (longlong)pppppcVar13)))
              goto LAB_1802d759d;
              ppppcVar17 = local_e0 + 5;
            }
            thunk_FUN_1803d64e0(pppppcVar13,ppppcVar17);
          }
          local_f8 = (char *****)*pppppcVar9;
          ppppcStack_f0 = pppppcVar9[1];
          local_e8 = (longlong)pppppcVar9[2];
          local_e0 = pppppcVar9[3];
          pppppcVar9[2] = (char ****)0x0;
          pppppcVar9[3] = (char ****)0xf;
          *(char *)pppppcVar9 = '\0';
        }
        FUN_18000f890(local_78);
        pcVar18 = ppuVar20[1];
        local_b8 = (undefined8 *****)0x0;
        uStack_b0 = 0;
        local_a8 = 0;
        local_a0 = 0;
        sVar10 = strlen(pcVar18);
        FUN_1800133a0(&local_b8,pcVar18,sVar10);
        puVar21 = auStack_158;
        unaff_R14 = 0;
        puVar6 = auStack_158;
        if (local_a8 != 0) goto LAB_1802d6fe6;
        goto LAB_1802d710f;
      }
      ppuVar20 = ppuVar20 + 2;
    } while (ppuVar20 != &PTR_s_weapon_glock_180659980);
    *param_1 = 0;
    param_1[1] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0xf;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0xf;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    *(undefined4 *)(param_1 + 0xb) = 0;
    puVar21 = auStack_158;
  }
  *(undefined8 *)(puVar21 + 0x50) = 0;
  *(undefined8 *)(puVar21 + 0x58) = 0xf;
  local_d8 = 0;
  lStack_d0 = 0;
  local_c8 = 0;
  puVar21[0x60] = 0;
  *(undefined8 *)(puVar21 + 0x78) = 0xf;
  *(undefined8 *)(puVar21 + 0x70) = 0;
  puVar21[0x40] = 0;
  goto LAB_1802d755d;
LAB_1802d6fe6:
  puVar21 = puVar6;
  if (local_a8 < unaff_R14) goto LAB_1802d710f;
  pppppuVar14 = &local_b8;
  if (0xf < local_a0) {
    pppppuVar14 = local_b8;
  }
  uVar16 = local_a8;
  if (unaff_R14 < local_a8) {
    lVar15 = local_a8 + (longlong)pppppuVar14;
    *(undefined8 *)(puVar21 + -8) = 0x1802d7015;
    lVar11 = thunk_FUN_1804e6c50((longlong)pppppuVar14 + unaff_R14,lVar15,0x2c);
    uVar16 = local_a8;
    if (lVar11 == lVar15) goto LAB_1802d7039;
    lVar11 = lVar11 - (longlong)pppppuVar14;
    if (lVar11 == -1) goto LAB_1802d7040;
    uVar22 = lVar11 - unaff_R14;
  }
  else {
LAB_1802d7039:
    lVar11 = -1;
LAB_1802d7040:
    uVar22 = 0xffffffffffffffff;
  }
  local_98[0] = 0;
  local_98[1] = 0;
  local_98[2] = 0;
  local_98[3] = 0;
  if (uVar16 < unaff_R14) goto LAB_1802d75a4;
  if (uVar16 - unaff_R14 < uVar22) {
    uVar22 = uVar16 - unaff_R14;
  }
  pppppuVar14 = &local_b8;
  if (0xf < local_a0) {
    pppppuVar14 = local_b8;
  }
  *(undefined8 *)(puVar21 + -8) = 0x1802d7083;
  FUN_1800133a0(local_98,(longlong)pppppuVar14 + unaff_R14,uVar22);
  if (local_98[2] != 0) {
    if (lStack_d0 == local_c8) {
      *(undefined8 *)(puVar21 + -8) = 0x1802d70b8;
      FUN_180028f00(&local_d8,lStack_d0,local_98);
    }
    else {
      *(undefined8 *)(puVar21 + -8) = 0x1802d70a1;
      FUN_180024b50(lStack_d0,local_98);
      lStack_d0 = lStack_d0 + 0x20;
    }
  }
  if (lVar11 == -1) {
    if (0xf < (ulonglong)local_98[3]) {
      uVar16 = local_98[3] + 1;
      lVar15 = local_98[0];
      if (0xfff < uVar16) {
        lVar15 = *(longlong *)(local_98[0] + -8);
        if (0x1f < (local_98[0] - lVar15) - 8U) {
LAB_1802d722c:
          pcVar2 = (code *)swi(0x29);
          (*pcVar2)(5);
          puVar21 = puVar21 + 8;
          goto LAB_1802d7233;
        }
        uVar16 = local_98[3] + 0x28;
      }
      *(undefined8 *)(puVar21 + -8) = 0x1802d7227;
      thunk_FUN_1803d64e0(lVar15,uVar16);
    }
    goto LAB_1802d710f;
  }
  if (0xf < (ulonglong)local_98[3]) {
    uVar16 = local_98[3] + 1;
    lVar15 = local_98[0];
    if (0xfff < uVar16) {
      lVar15 = *(longlong *)(local_98[0] + -8);
      if (0x1f < (local_98[0] - lVar15) - 8U) goto LAB_1802d722c;
      uVar16 = local_98[3] + 0x28;
    }
    *(undefined8 *)(puVar21 + -8) = 0x1802d70fe;
    thunk_FUN_1803d64e0(lVar15,uVar16);
  }
  unaff_R14 = lVar11 + 1;
  puVar6 = puVar21;
  if (local_a8 == 0) goto LAB_1802d710f;
  goto LAB_1802d6fe6;
LAB_1802d710f:
  lVar11 = local_c8;
  lVar15 = lStack_d0;
  *param_1 = 0;
  param_1[1] = 0;
  *param_1 = *(longlong *)(puVar21 + 0x40);
  param_1[1] = *(longlong *)(puVar21 + 0x48);
  param_1[2] = *(longlong *)(puVar21 + 0x50);
  param_1[3] = *(longlong *)(puVar21 + 0x58);
  *(undefined8 *)(puVar21 + 0x50) = 0;
  *(undefined8 *)(puVar21 + 0x58) = 0xf;
  puVar21[0x40] = 0;
  param_1[4] = *(longlong *)(puVar21 + 0x60);
  param_1[5] = *(longlong *)(puVar21 + 0x68);
  param_1[6] = *(longlong *)(puVar21 + 0x70);
  param_1[7] = *(longlong *)(puVar21 + 0x78);
  *(undefined8 *)(puVar21 + 0x70) = 0;
  *(undefined8 *)(puVar21 + 0x78) = 0xf;
  uVar16 = local_d8;
  puVar21[0x60] = 0;
  local_c8 = 0;
  lStack_d0 = 0;
  local_d8 = 0;
  param_1[8] = uVar16;
  param_1[9] = lVar15;
  param_1[10] = lVar11;
  *(undefined4 *)(param_1 + 0xb) = local_c0;
  if (0xf < local_a0) {
    uVar16 = local_a0 + 1;
    pppppuVar14 = local_b8;
    if (0xfff < uVar16) {
      pppppuVar14 = (undefined8 *****)local_b8[-1];
      if (0x1f < (ulonglong)((longlong)local_b8 + (-8 - (longlong)pppppuVar14))) {
LAB_1802d759d:
        pcVar2 = (code *)swi(0x29);
        (*pcVar2)(5);
        puVar21 = puVar21 + 8;
LAB_1802d75a4:
                    /* WARNING: Subroutine does not return */
        *(undefined **)(puVar21 + -8) = &UNK_1802d75a9;
        FUN_18002a1a0();
      }
      uVar16 = local_a0 + 0x28;
    }
    *(undefined8 *)(puVar21 + -8) = 0x1802d71df;
    thunk_FUN_1803d64e0(pppppuVar14,uVar16);
  }
  local_a8 = 0;
  local_a0 = 0xf;
  local_b8 = (undefined8 *****)((ulonglong)local_b8 & 0xffffffffffffff00);
LAB_1802d755d:
  *(undefined8 *)(puVar21 + -8) = 0x1802d7566;
  FUN_1800288b0(&local_d8);
  *(undefined8 *)(puVar21 + -8) = 0x1802d7570;
  FUN_18000f890(puVar21 + 0x60);
  *(undefined8 *)(puVar21 + -8) = 0x1802d757a;
  FUN_18000f890(puVar21 + 0x40);
  *(undefined8 *)(puVar21 + -8) = 0x1802d7589;
  return param_1;
}



/* ===== 1802d75b0 FUN_1802d75b0 ===== */

void FUN_1802d75b0(longlong param_1)

{
  FUN_1800288b0(param_1 + 0x40);
  FUN_18000f890(param_1 + 0x20);
  FUN_18000f890(param_1);
  return;
}



/* ===== 1802d75e0 FUN_1802d75e0 ===== */

undefined4 * FUN_1802d75e0(undefined4 *param_1,int param_2)

{
  if (param_2 == 2) {
    param_1[2] = 0x23;
    param_1[3] = 10;
    param_1[4] = 0xf;
    param_1[5] = 0x19;
    param_1[1] = 0x5a;
    *param_1 = 0x168;
    return param_1;
  }
  if (param_2 == 5) {
    *param_1 = 0x37;
    param_1[1] = 0x37;
    *(undefined8 *)(param_1 + 2) = 10;
    param_1[4] = 0x14;
    param_1[5] = 0x14;
    return param_1;
  }
  if (param_2 == 6) {
    *param_1 = 0x46;
    param_1[1] = 0x3c;
    param_1[2] = 0x2d;
    param_1[3] = 0x3c;
    param_1[4] = 0x14;
    param_1[5] = 0x14;
    return param_1;
  }
  param_1[2] = 2;
  param_1[3] = 3;
  param_1[4] = 10;
  param_1[5] = 10;
  param_1[1] = 0x5a;
  *param_1 = 0x168;
  return param_1;
}



/* ===== 1802d76a0 FUN_1802d76a0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1802d76a0(undefined8 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  size_t sVar9;
  char *pcVar10;
  undefined1 auStack_208 [32];
  undefined4 local_1e8;
  undefined4 local_1e0;
  undefined4 local_1d8;
  undefined4 local_1d0;
  undefined4 local_1c8;
  undefined4 local_1c0;
  undefined4 local_1b8;
  undefined8 *local_1b0;
  undefined1 local_1a8 [32];
  char local_188 [320];
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_208;
  local_1b8 = 0;
  local_1b0 = param_1;
  puVar8 = (undefined4 *)FUN_1802d75e0(local_1a8);
  uVar1 = *puVar8;
  uVar2 = puVar8[1];
  uVar3 = puVar8[2];
  uVar4 = puVar8[3];
  uVar5 = puVar8[4];
  uVar6 = puVar8[5];
  FUN_180540170(local_188,0,0x140);
  pcVar10 = "true";
  if (param_2 == 4) {
    pcVar10 = "false";
  }
  local_1e8 = uVar1;
  local_1e0 = uVar2;
  local_1d8 = uVar3;
  local_1d0 = uVar4;
  local_1c8 = uVar5;
  local_1c0 = uVar6;
  snprintf(local_188,0x140,
           "            mouse_rotate: %s,\n            rotation_limit_x: \'%d\',\n            rotation_limit_y: \'%d\',\n            auto_rotate_x: \'%d\',\n            auto_rotate_y: \'%d\',\n            auto_rotate_period_x: \'%d\',\n            auto_rotate_period_y: \'%d\',\n"
           ,pcVar10);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  pcVar10 = (char *)FUN_18000fb70(0x100);
  *param_1 = pcVar10;
  param_1[2] = 0xf2;
  param_1[3] = 0xff;
  uVar7 = s_panel_____CreatePanel__MapItemPr_18075dfd0._8_8_;
  *(undefined8 *)pcVar10 = s_panel_____CreatePanel__MapItemPr_18075dfd0._0_8_;
  *(undefined8 *)(pcVar10 + 8) = uVar7;
  uVar7 = s_panel_____CreatePanel__MapItemPr_18075dfd0._24_8_;
  *(undefined8 *)(pcVar10 + 0x10) = s_panel_____CreatePanel__MapItemPr_18075dfd0._16_8_;
  *(undefined8 *)(pcVar10 + 0x18) = uVar7;
  uVar7 = s_panel_____CreatePanel__MapItemPr_18075dfd0._40_8_;
  *(undefined8 *)(pcVar10 + 0x20) = s_panel_____CreatePanel__MapItemPr_18075dfd0._32_8_;
  *(undefined8 *)(pcVar10 + 0x28) = uVar7;
  uVar7 = s_panel_____CreatePanel__MapItemPr_18075dfd0._56_8_;
  *(undefined8 *)(pcVar10 + 0x30) = s_panel_____CreatePanel__MapItemPr_18075dfd0._48_8_;
  *(undefined8 *)(pcVar10 + 0x38) = uVar7;
  uVar7 = s_panel_____CreatePanel__MapItemPr_18075dfd0._72_8_;
  *(undefined8 *)(pcVar10 + 0x40) = s_panel_____CreatePanel__MapItemPr_18075dfd0._64_8_;
  *(undefined8 *)(pcVar10 + 0x48) = uVar7;
  uVar7 = s_panel_____CreatePanel__MapItemPr_18075dfd0._88_8_;
  *(undefined8 *)(pcVar10 + 0x50) = s_panel_____CreatePanel__MapItemPr_18075dfd0._80_8_;
  *(undefined8 *)(pcVar10 + 0x58) = uVar7;
  uVar7 = s_panel_____CreatePanel__MapItemPr_18075dfd0._104_8_;
  *(undefined8 *)(pcVar10 + 0x60) = s_panel_____CreatePanel__MapItemPr_18075dfd0._96_8_;
  *(undefined8 *)(pcVar10 + 0x68) = uVar7;
  uVar7 = s_panel_____CreatePanel__MapItemPr_18075dfd0._120_8_;
  *(undefined8 *)(pcVar10 + 0x70) = s_panel_____CreatePanel__MapItemPr_18075dfd0._112_8_;
  *(undefined8 *)(pcVar10 + 0x78) = uVar7;
  uVar7 = s_panel_____CreatePanel__MapItemPr_18075dfd0._136_8_;
  *(undefined8 *)(pcVar10 + 0x80) = s_panel_____CreatePanel__MapItemPr_18075dfd0._128_8_;
  *(undefined8 *)(pcVar10 + 0x88) = uVar7;
  uVar7 = s_panel_____CreatePanel__MapItemPr_18075dfd0._152_8_;
  *(undefined8 *)(pcVar10 + 0x90) = s_panel_____CreatePanel__MapItemPr_18075dfd0._144_8_;
  *(undefined8 *)(pcVar10 + 0x98) = uVar7;
  uVar7 = s_panel_____CreatePanel__MapItemPr_18075dfd0._168_8_;
  *(undefined8 *)(pcVar10 + 0xa0) = s_panel_____CreatePanel__MapItemPr_18075dfd0._160_8_;
  *(undefined8 *)(pcVar10 + 0xa8) = uVar7;
  uVar7 = s_panel_____CreatePanel__MapItemPr_18075dfd0._184_8_;
  *(undefined8 *)(pcVar10 + 0xb0) = s_panel_____CreatePanel__MapItemPr_18075dfd0._176_8_;
  *(undefined8 *)(pcVar10 + 0xb8) = uVar7;
  uVar7 = s_panel_____CreatePanel__MapItemPr_18075dfd0._200_8_;
  *(undefined8 *)(pcVar10 + 0xc0) = s_panel_____CreatePanel__MapItemPr_18075dfd0._192_8_;
  *(undefined8 *)(pcVar10 + 200) = uVar7;
  uVar7 = s_panel_____CreatePanel__MapItemPr_18075dfd0._216_8_;
  *(undefined8 *)(pcVar10 + 0xd0) = s_panel_____CreatePanel__MapItemPr_18075dfd0._208_8_;
  *(undefined8 *)(pcVar10 + 0xd8) = uVar7;
  uVar7 = s_panel_____CreatePanel__MapItemPr_18075dfd0._232_8_;
  *(undefined8 *)(pcVar10 + 0xe0) = s_panel_____CreatePanel__MapItemPr_18075dfd0._224_8_;
  *(undefined8 *)(pcVar10 + 0xe8) = uVar7;
  *(undefined2 *)(pcVar10 + 0xf0) = s_panel_____CreatePanel__MapItemPr_18075dfd0._240_2_;
  pcVar10[0xf2] = '\0';
  local_1b8 = 1;
  sVar9 = strlen(local_188);
  FUN_1800134a0(param_1,local_188,sVar9);
  FUN_1800134a0(param_1,
                "            \'require-composition-layer\': true,\n            \'composition-layer-texture-name\': \'$LAYER$\',\n            \'transparent-background\': true,\n            map: \'warehouse_vanity\',\n            \'disable-depth-of-field\': false,\n            hittest: false,\n            style: \'width: 100%; height: 100%;\'\n        });\n        if (panel) {\n            if (panel.SetHideStaticGeometry) panel.SetHideStaticGeometry(true);\n            if (panel.SetHideParticles) panel.SetHideParticles(true);\n            if (panel.SetTransparentBackground) panel.SetTransparentBackground(true);\n        }\n"
                ,0x249);
  return param_1;
}



/* ===== 1802d78d0 FUN_1802d78d0 ===== */

undefined8 * FUN_1802d78d0(undefined8 *param_1,char *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  undefined4 uVar4;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 1;
  param_1[3] = 0xf;
  *(undefined2 *)param_1 = 0x27;
  uVar4 = 1;
  if (*(ulonglong *)(param_2 + 0x18) < 0x10) {
    pcVar3 = param_2;
  }
  else {
    pcVar3 = *(char **)param_2;
  }
  pcVar2 = pcVar3 + *(longlong *)(param_2 + 0x10);
  for (; pcVar3 != pcVar2; pcVar3 = pcVar3 + 1) {
    cVar1 = *pcVar3;
    if ((cVar1 == '\'') || (cVar1 == '\\')) {
      FUN_1800690a0(param_1,0x5c);
    }
    FUN_1800690a0(param_1,cVar1);
  }
  FUN_1800134a0(param_1,&DAT_1806e17c8,1,param_4,uVar4);
  return param_1;
}



/* ===== 1802d7980 FUN_1802d7980 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001802d8151) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1802d7980(undefined8 *param_1,longlong param_2,undefined8 param_3,char param_4)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  code *pcVar4;
  undefined4 uVar5;
  longlong lVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  longlong lVar14;
  undefined4 uVar15;
  int iVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined4 *puVar20;
  char *pcVar21;
  undefined *puVar22;
  longlong *plVar23;
  longlong *plVar24;
  undefined8 uVar25;
  size_t sVar26;
  undefined8 *puVar27;
  int *piVar28;
  longlong *plVar29;
  longlong lVar30;
  longlong *plVar31;
  longlong *plVar32;
  longlong lVar33;
  ulonglong uVar34;
  longlong *plVar35;
  undefined4 uVar36;
  ulonglong uVar37;
  char *pcVar38;
  char cVar39;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  longlong lVar40;
  undefined4 unaff_XMM6_Da;
  undefined4 unaff_XMM6_Db;
  undefined4 unaff_XMM6_Dc;
  undefined4 unaff_XMM6_Dd;
  undefined4 unaff_XMM7_Da;
  undefined4 unaff_XMM7_Db;
  undefined4 unaff_XMM7_Dc;
  undefined4 unaff_XMM7_Dd;
  undefined1 auStack_168 [8];
  undefined1 auStack_160 [24];
  undefined4 local_148;
  undefined8 *local_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined1 local_f8 [32];
  undefined1 local_d8 [32];
  undefined1 local_b8 [32];
  undefined1 local_98 [32];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [32];
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStack_168;
  local_148 = 0;
  local_140 = param_1;
  uVar17 = FUN_18003a390(local_58,*(undefined4 *)(param_2 + 0x58));
  uVar18 = FUN_1802d78d0(local_78,param_2 + 0x20);
  uVar19 = FUN_1802d78d0(local_98,param_2);
  uVar19 = FUN_180066ab0(local_b8,"var finalCam = ",uVar19);
  puVar20 = (undefined4 *)FUN_1800134a0(uVar19,"; var introCam = ",0x11);
  local_118 = *puVar20;
  uStack_114 = puVar20[1];
  uStack_110 = puVar20[2];
  uStack_10c = puVar20[3];
  local_108 = puVar20[4];
  uStack_104 = puVar20[5];
  uStack_100 = puVar20[6];
  uStack_fc = puVar20[7];
  *(undefined8 *)(puVar20 + 4) = 0;
  *(undefined8 *)(puVar20 + 6) = 0xf;
  *(undefined1 *)puVar20 = 0;
  local_148 = 2;
  uVar19 = FUN_180066820(local_d8,&local_118,uVar18);
  puVar20 = (undefined4 *)FUN_1800134a0(uVar19,"; var activeItem = ",0x13);
  local_138 = *puVar20;
  uStack_134 = puVar20[1];
  uStack_130 = puVar20[2];
  uStack_12c = puVar20[3];
  local_128 = puVar20[4];
  uStack_124 = puVar20[5];
  uStack_120 = puVar20[6];
  uStack_11c = puVar20[7];
  *(undefined8 *)(puVar20 + 4) = 0;
  *(undefined8 *)(puVar20 + 6) = 0xf;
  *(undefined1 *)puVar20 = 0;
  local_148 = 6;
  uVar19 = FUN_180066820(local_f8,&local_138,uVar17);
  pcVar38 = (char *)0x1;
  puVar20 = (undefined4 *)FUN_1800134a0(uVar19,&DAT_1806f8e8c);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar15 = puVar20[1];
  uVar36 = puVar20[2];
  uVar5 = puVar20[3];
  *(undefined4 *)param_1 = *puVar20;
  *(undefined4 *)((longlong)param_1 + 4) = uVar15;
  *(undefined4 *)(param_1 + 1) = uVar36;
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar5;
  uVar15 = puVar20[5];
  uVar36 = puVar20[6];
  uVar5 = puVar20[7];
  *(undefined4 *)(param_1 + 2) = puVar20[4];
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar15;
  *(undefined4 *)(param_1 + 3) = uVar36;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar5;
  *(undefined8 *)(puVar20 + 4) = 0;
  *(undefined8 *)(puVar20 + 6) = 0xf;
  *(undefined1 *)puVar20 = 0;
  local_148 = 0xf;
  FUN_18000f890(local_f8);
  uVar37 = CONCAT44(uStack_11c,uStack_120);
  if (uVar37 < 0x10) {
LAB_1802d7b2c:
    FUN_18000f890(local_d8);
    plVar35 = (longlong *)auStack_168;
    uVar37 = CONCAT44(uStack_fc,uStack_100);
    if (uVar37 < 0x10) goto LAB_1802d7b70;
    plVar32 = (longlong *)(uVar37 + 1);
    lVar33 = CONCAT44(uStack_114,local_118);
    lVar40 = lVar33;
    if ((longlong *)0xfff < plVar32) {
      lVar40 = *(longlong *)(lVar33 + -8);
      if (0x1f < (lVar33 - lVar40) - 8U) goto LAB_1802d7bd9;
      plVar32 = (longlong *)(uVar37 + 0x28);
    }
    thunk_FUN_1803d64e0(lVar40,plVar32);
LAB_1802d7b70:
    FUN_18000f890(local_b8);
    FUN_18000f890(local_98);
    FUN_18000f890(local_78);
    FUN_18000f890(local_58);
    FUN_1800134a0(param_1,
                  "\n        if (!finalCam) {\n            var cameraCategory = \'\';\n            try { cameraCategory = InventoryAPI.GetLoadoutCategory(id); } catch (e) {}\n            finalCam = cameraCategory === \'secondary\' ? \'cam_0\' : cameraCategory === \'smg\' ? \'cam_2\' : \'cam_3\';\n            introCam = finalCam + \'_intro\';\n        }\n"
                  ,0x13c);
    return param_1;
  }
  plVar32 = (longlong *)(uVar37 + 1);
  lVar33 = CONCAT44(uStack_134,local_138);
  lVar40 = lVar33;
  if (plVar32 < (longlong *)0x1000) {
LAB_1802d7b26:
    thunk_FUN_1803d64e0(lVar40,plVar32);
    goto LAB_1802d7b2c;
  }
  lVar40 = *(longlong *)(lVar33 + -8);
  if ((lVar33 - lVar40) - 8U < 0x20) {
    plVar32 = (longlong *)(uVar37 + 0x28);
    goto LAB_1802d7b26;
  }
  pcVar4 = (code *)swi(0x29);
  (*pcVar4)(5);
  plVar35 = (longlong *)auStack_160;
LAB_1802d7bd9:
  piVar28 = (int *)&DAT_00000005;
  pcVar4 = (code *)swi(0x29);
  (*pcVar4)();
  *plVar35 = (longlong)local_68;
  plVar35[-1] = param_2;
  plVar35[-2] = uVar17;
  plVar35[-3] = uVar18;
  plVar35[-4] = unaff_R12;
  plVar35[-5] = unaff_R13;
  plVar35[-6] = (longlong)param_1;
  plVar35[-7] = 0;
  *(undefined4 *)(plVar35 + -10) = unaff_XMM6_Da;
  *(undefined4 *)((longlong)plVar35 + -0x4c) = unaff_XMM6_Db;
  *(undefined4 *)(plVar35 + -9) = unaff_XMM6_Dc;
  *(undefined4 *)((longlong)plVar35 + -0x44) = unaff_XMM6_Dd;
  *(undefined4 *)(plVar35 + -0xc) = unaff_XMM7_Da;
  *(undefined4 *)((longlong)plVar35 + -0x5c) = unaff_XMM7_Db;
  *(undefined4 *)(plVar35 + -0xb) = unaff_XMM7_Dc;
  *(undefined4 *)((longlong)plVar35 + -0x54) = unaff_XMM7_Dd;
  plVar35[-0xe] = DAT_180919500 ^ (ulonglong)(plVar35 + -0xd2);
  *(char *)(plVar35 + -0xcb) = param_4;
  *(undefined4 *)((longlong)plVar35 + -0x65c) = 0;
  pcVar21 = "weapon";
  if (param_4 != '\0') {
    pcVar21 = "weapon_big";
  }
  plVar35[-0xc3] = (longlong)pcVar21;
  puVar22 = &DAT_1809f6fd0;
  if (param_4 != '\0') {
    puVar22 = &DAT_1809f7240;
  }
  plVar35[-0xc1] = (longlong)puVar22;
  iVar16 = piVar28[0x12];
  lVar40 = 3;
  if (iVar16 == 2) {
    uVar37 = 0x200000;
    uVar17 = 2;
  }
  else if (iVar16 == 3) {
    uVar37 = 0x400000;
    uVar17 = 4;
  }
  else if (iVar16 == 4) {
    uVar17 = 3;
    uVar37 = 0x300000;
  }
  else if (iVar16 == 5) {
    uVar37 = 0x600000;
    uVar17 = 6;
  }
  else if (iVar16 == 6) {
    uVar37 = 0x500000;
    uVar17 = 5;
  }
  else {
    uVar37 = 0x100000;
    uVar17 = 1;
  }
  piVar2 = (int *)plVar35[6];
  iVar16 = piVar2[1];
  iVar1 = *piVar2;
  plVar35[-0xd3] = 0x1802d7cf0;
  uVar18 = FUN_1802d76a0(plVar35 + -0x87,uVar17);
  plVar35[-0xce] = (uVar37 ^ (longlong)iVar1) << 0x14 ^ (longlong)iVar16;
  iVar16 = piVar2[1];
  iVar1 = *piVar2;
  plVar35[-0xd3] = 0x1802d7d09;
  FUN_1800e3760(plVar35[-0xc3],iVar1,iVar16,uVar18);
  plVar35[-0xd3] = 0x1802d7d16;
  FUN_18000f890(plVar35 + -0x87);
  if (DAT_1809f5a1c != *piVar28) {
    _DAT_1809f596c = 0;
    DAT_1809f597c = 0xffffffff;
    DAT_1809f5a1c = *piVar28;
  }
  iVar16 = *piVar28;
  *(int *)(plVar35 + -0xca) = iVar16;
  lVar33 = 3;
  if (plVar32 == (longlong *)0x0) {
    *(undefined1 *)(plVar35 + -0x26) = 0;
    plVar31 = plVar35 + -0xc0;
    plVar24 = plVar35 + -0x5a;
    do {
      lVar30 = plVar24[1];
      *plVar31 = *plVar24;
      plVar31[1] = lVar30;
      lVar30 = plVar24[3];
      plVar31[2] = plVar24[2];
      plVar31[3] = lVar30;
      lVar30 = plVar24[5];
      plVar31[4] = plVar24[4];
      plVar31[5] = lVar30;
      lVar30 = plVar24[7];
      plVar31[6] = plVar24[6];
      plVar31[7] = lVar30;
      lVar30 = plVar24[9];
      plVar31[8] = plVar24[8];
      plVar31[9] = lVar30;
      lVar30 = plVar24[0xb];
      plVar31[10] = plVar24[10];
      plVar31[0xb] = lVar30;
      lVar30 = plVar24[0xd];
      plVar31[0xc] = plVar24[0xc];
      plVar31[0xd] = lVar30;
      lVar30 = plVar24[0xf];
      plVar31[0xe] = plVar24[0xe];
      plVar31[0xf] = lVar30;
      plVar31 = plVar31 + 0x10;
      plVar24 = plVar24 + 0x10;
      lVar33 = lVar33 + -1;
    } while (lVar33 != 0);
  }
  else {
    plVar31 = plVar32;
    plVar24 = plVar35 + -0x5a;
    do {
      plVar29 = plVar24;
      plVar23 = plVar31;
      lVar30 = plVar23[1];
      *plVar29 = *plVar23;
      plVar29[1] = lVar30;
      lVar30 = plVar23[3];
      plVar29[2] = plVar23[2];
      plVar29[3] = lVar30;
      lVar30 = plVar23[5];
      plVar29[4] = plVar23[4];
      plVar29[5] = lVar30;
      lVar30 = plVar23[7];
      plVar29[6] = plVar23[6];
      plVar29[7] = lVar30;
      lVar30 = plVar23[9];
      plVar29[8] = plVar23[8];
      plVar29[9] = lVar30;
      lVar30 = plVar23[0xb];
      plVar29[10] = plVar23[10];
      plVar29[0xb] = lVar30;
      lVar30 = plVar23[0xd];
      plVar29[0xc] = plVar23[0xc];
      plVar29[0xd] = lVar30;
      lVar30 = plVar23[0xf];
      plVar29[0xe] = plVar23[0xe];
      plVar29[0xf] = lVar30;
      lVar33 = lVar33 + -1;
      plVar31 = plVar23 + 0x10;
      plVar24 = plVar29 + 0x10;
    } while (lVar33 != 0);
    lVar33 = plVar23[0x11];
    plVar29[0x10] = plVar23[0x10];
    plVar29[0x11] = lVar33;
    lVar33 = plVar23[0x13];
    plVar29[0x12] = plVar23[0x12];
    plVar29[0x13] = lVar33;
    *(undefined1 *)(plVar35 + -0x26) = 1;
    plVar31 = plVar35 + -0xc0;
    plVar24 = plVar35 + -0x5a;
    lVar33 = 3;
    do {
      lVar30 = plVar24[1];
      *plVar31 = *plVar24;
      plVar31[1] = lVar30;
      lVar30 = plVar24[3];
      plVar31[2] = plVar24[2];
      plVar31[3] = lVar30;
      lVar30 = plVar24[5];
      plVar31[4] = plVar24[4];
      plVar31[5] = lVar30;
      lVar30 = plVar24[7];
      plVar31[6] = plVar24[6];
      plVar31[7] = lVar30;
      lVar30 = plVar24[9];
      plVar31[8] = plVar24[8];
      plVar31[9] = lVar30;
      lVar30 = plVar24[0xb];
      plVar31[10] = plVar24[10];
      plVar31[0xb] = lVar30;
      lVar30 = plVar24[0xd];
      plVar31[0xc] = plVar24[0xc];
      plVar31[0xd] = lVar30;
      lVar30 = plVar24[0xf];
      plVar31[0xe] = plVar24[0xe];
      plVar31[0xf] = lVar30;
      plVar31 = plVar31 + 0x10;
      plVar24 = plVar24 + 0x10;
      lVar33 = lVar33 + -1;
    } while (lVar33 != 0);
  }
  uVar15 = *(undefined4 *)((longlong)plVar24 + 4);
  lVar33 = plVar24[1];
  uVar36 = *(undefined4 *)((longlong)plVar24 + 0xc);
  *(int *)plVar31 = (int)*plVar24;
  *(undefined4 *)((longlong)plVar31 + 4) = uVar15;
  *(int *)(plVar31 + 1) = (int)lVar33;
  *(undefined4 *)((longlong)plVar31 + 0xc) = uVar36;
  uVar15 = *(undefined4 *)((longlong)plVar24 + 0x14);
  lVar33 = plVar24[3];
  uVar36 = *(undefined4 *)((longlong)plVar24 + 0x1c);
  *(int *)(plVar31 + 2) = (int)plVar24[2];
  *(undefined4 *)((longlong)plVar31 + 0x14) = uVar15;
  *(int *)(plVar31 + 3) = (int)lVar33;
  *(undefined4 *)((longlong)plVar31 + 0x1c) = uVar36;
  *(int *)(plVar31 + 4) = (int)plVar24[4];
  iVar1 = piVar28[0x12];
  *(bool *)((longlong)plVar35 + -0x657) = iVar1 == 3;
  if ((pcVar38 == (char *)0x0) || (*pcVar38 == '\0')) {
    cVar39 = '\0';
  }
  else {
    cVar39 = '\x01';
  }
  if (((DAT_1809f5969 == '\0') || (iVar1 == 3)) || (cVar39 != '\0')) {
    bVar7 = false;
    *(undefined1 *)(plVar35 + -0xcc) = 0;
    if (cVar39 == '\0') goto LAB_1802d7efa;
    *(char *)(plVar35 + -200) = *pcVar38;
    *(char *)((longlong)plVar35 + -0x63f) = pcVar38[1];
    *(undefined2 *)((longlong)plVar35 + -0x63e) = *(undefined2 *)(pcVar38 + 2);
    *(undefined4 *)((longlong)plVar35 + -0x654) = *(undefined4 *)(pcVar38 + 4);
    *(undefined4 *)(plVar35 + -199) = *(undefined4 *)(pcVar38 + 8);
    *(undefined4 *)((longlong)plVar35 + -0x634) = *(undefined4 *)(pcVar38 + 0xc);
    lVar33 = *(longlong *)(pcVar38 + 0x10);
    lVar30 = *(longlong *)(pcVar38 + 0x18);
    *(undefined4 *)(plVar35 + -0xc4) = *(undefined4 *)(pcVar38 + 0x20);
    uVar15 = *(undefined4 *)(pcVar38 + 0x24);
    uVar36 = *(undefined4 *)((longlong)plVar35 + -0x654);
  }
  else {
    bVar7 = true;
    *(undefined1 *)(plVar35 + -0xcc) = 1;
LAB_1802d7efa:
    *(undefined2 *)(plVar35 + -200) = 0;
    *(undefined2 *)((longlong)plVar35 + -0x63e) = *(undefined2 *)((longlong)plVar35 + -0x63e);
    uVar36 = 0;
    *(undefined4 *)((longlong)plVar35 + -0x654) = 0;
    *(undefined4 *)(plVar35 + -199) = 0xfffffffe;
    *(undefined4 *)((longlong)plVar35 + -0x634) = *(undefined4 *)((longlong)plVar35 + -0x634);
    lVar33 = 0;
    lVar30 = 0;
    *(undefined4 *)(plVar35 + -0xc4) = 0;
    uVar15 = *(undefined4 *)((longlong)plVar35 + -0x61c);
  }
  *(undefined4 *)((longlong)plVar35 + -0x61c) = uVar15;
  plVar35[-0xc9] = lVar30;
  plVar35[-0xc2] = lVar33;
  if (cVar39 == '\0') {
    pcVar38 = "";
    if (bVar7) {
      pcVar38 = "|spin";
    }
    plVar35[-0xd3] = 0x1802d80e8;
    uVar18 = FUN_1800dff20(plVar35 + -0x72,iVar16,plVar32);
    *(undefined4 *)((longlong)plVar35 + -0x65c) = 0x80;
    plVar35[-0xd3] = 0x1802d80fb;
    sVar26 = strlen(pcVar38);
    plVar35[-0xd3] = 0x1802d8109;
    puVar20 = (undefined4 *)FUN_1800134a0(uVar18,pcVar38,sVar26);
    plVar35[-0x8b] = 0;
    plVar35[-0x8a] = 0;
    plVar35[-0x89] = 0;
    plVar35[-0x88] = 0;
    uVar15 = puVar20[1];
    uVar36 = puVar20[2];
    uVar5 = puVar20[3];
    *(undefined4 *)(plVar35 + -0x8b) = *puVar20;
    *(undefined4 *)((longlong)plVar35 + -0x454) = uVar15;
    *(undefined4 *)(plVar35 + -0x8a) = uVar36;
    *(undefined4 *)((longlong)plVar35 + -0x44c) = uVar5;
    lVar33 = *(longlong *)(puVar20 + 6);
    plVar35[-0x89] = *(longlong *)(puVar20 + 4);
    plVar35[-0x88] = lVar33;
    *(undefined8 *)(puVar20 + 4) = 0;
    *(undefined8 *)(puVar20 + 6) = 0xf;
    *(undefined1 *)puVar20 = 0;
    bVar13 = false;
    bVar12 = false;
    bVar11 = false;
    bVar10 = false;
    bVar9 = false;
    bVar8 = false;
    bVar7 = false;
  }
  else {
    plVar35[-0xd3] = 0x1802d7f4f;
    uVar18 = FUN_18004e4f0(plVar35 + -0x5e);
    *(undefined4 *)((longlong)plVar35 + -0x65c) = 1;
    plVar35[-0xd3] = 0x1802d7f69;
    uVar19 = FUN_18004e4f0(plVar35 + -0x62,lVar33);
    *(undefined4 *)((longlong)plVar35 + -0x65c) = 3;
    plVar35[-0xd3] = 0x1802d7f7f;
    uVar25 = FUN_18003a390(plVar35 + -0x66,uVar36);
    *(undefined4 *)((longlong)plVar35 + -0x65c) = 7;
    plVar35[-0xd3] = 0x1802d7f9e;
    uVar25 = FUN_180066ab0(plVar35 + -0x6a,"place|",uVar25);
    *(undefined4 *)((longlong)plVar35 + -0x65c) = 0xf;
    plVar35[-0xd3] = 0x1802d7fbc;
    puVar20 = (undefined4 *)FUN_1800134a0(uVar25,&DAT_1806e9100,1);
    uVar15 = puVar20[1];
    uVar36 = puVar20[2];
    uVar5 = puVar20[3];
    *(undefined4 *)(plVar35 + -0x87) = *puVar20;
    *(undefined4 *)((longlong)plVar35 + -0x434) = uVar15;
    *(undefined4 *)(plVar35 + -0x86) = uVar36;
    *(undefined4 *)((longlong)plVar35 + -0x42c) = uVar5;
    uVar15 = puVar20[5];
    uVar36 = puVar20[6];
    uVar5 = puVar20[7];
    *(undefined4 *)(plVar35 + -0x85) = puVar20[4];
    *(undefined4 *)((longlong)plVar35 + -0x424) = uVar15;
    *(undefined4 *)(plVar35 + -0x84) = uVar36;
    *(undefined4 *)((longlong)plVar35 + -0x41c) = uVar5;
    *(undefined8 *)(puVar20 + 4) = 0;
    *(undefined8 *)(puVar20 + 6) = 0xf;
    *(undefined1 *)puVar20 = 0;
    *(undefined4 *)((longlong)plVar35 + -0x65c) = 0x11f;
    plVar35[-0xd3] = 0x1802d8001;
    uVar19 = FUN_180066820(plVar35 + -0x6e,plVar35 + -0x87,uVar19);
    *(undefined4 *)((longlong)plVar35 + -0x65c) = 0x13f;
    plVar35[-0xd3] = 0x1802d801f;
    puVar20 = (undefined4 *)FUN_1800134a0(uVar19,&DAT_1806e9100,1);
    uVar15 = puVar20[1];
    uVar36 = puVar20[2];
    uVar5 = puVar20[3];
    *(undefined4 *)(plVar35 + -0x83) = *puVar20;
    *(undefined4 *)((longlong)plVar35 + -0x414) = uVar15;
    *(undefined4 *)(plVar35 + -0x82) = uVar36;
    *(undefined4 *)((longlong)plVar35 + -0x40c) = uVar5;
    uVar15 = puVar20[5];
    uVar36 = puVar20[6];
    uVar5 = puVar20[7];
    *(undefined4 *)(plVar35 + -0x81) = puVar20[4];
    *(undefined4 *)((longlong)plVar35 + -0x404) = uVar15;
    *(undefined4 *)(plVar35 + -0x80) = uVar36;
    *(undefined4 *)((longlong)plVar35 + -0x3fc) = uVar5;
    *(undefined8 *)(puVar20 + 4) = 0;
    *(undefined8 *)(puVar20 + 6) = 0xf;
    *(undefined1 *)puVar20 = 0;
    bVar13 = true;
    bVar12 = true;
    bVar11 = true;
    bVar10 = true;
    bVar9 = true;
    bVar8 = true;
    bVar7 = true;
    *(undefined4 *)((longlong)plVar35 + -0x65c) = 0x37f;
    plVar35[-0xd3] = 0x1802d8062;
    FUN_180066820(plVar35 + -0x8b,plVar35 + -0x83,uVar18);
  }
  if ((bVar8) && (uVar37 = plVar35[-0x80], 0xf < uVar37)) {
    uVar34 = uVar37 + 1;
    lVar33 = plVar35[-0x83];
    lVar30 = lVar33;
    if (0xfff < uVar34) {
      lVar30 = *(longlong *)(lVar33 + -8);
      if (0x1f < (lVar33 - lVar30) - 8U) {
        pcVar4 = (code *)swi(0x29);
        (*pcVar4)(5);
        goto LAB_1802d851c;
      }
      uVar34 = uVar37 + 0x28;
    }
    plVar35[-0xd3] = 0x1802d81ab;
    thunk_FUN_1803d64e0(lVar30,uVar34);
  }
  if (bVar9) {
    plVar35[-0xd3] = 0x1802d81c0;
    FUN_18000f890(plVar35 + -0x6e);
  }
  if ((bVar10) && (uVar37 = plVar35[-0x84], 0xf < uVar37)) {
    uVar34 = uVar37 + 1;
    lVar33 = plVar35[-0x87];
    lVar30 = lVar33;
    if (0xfff < uVar34) {
      lVar30 = *(longlong *)(lVar33 + -8);
      if (0x1f < (lVar33 - lVar30) - 8U) {
LAB_1802d851c:
        pcVar4 = (code *)swi(0x29);
        (*pcVar4)(5);
        pcVar4 = (code *)swi(3);
        puVar27 = (undefined8 *)(*pcVar4)();
        return puVar27;
      }
      uVar34 = uVar37 + 0x28;
    }
    plVar35[-0xd3] = 0x1802d820a;
    thunk_FUN_1803d64e0(lVar30,uVar34);
  }
  if (bVar11) {
    plVar35[-0xd3] = 0x1802d821f;
    FUN_18000f890(plVar35 + -0x6a);
  }
  if (bVar12) {
    plVar35[-0xd3] = 0x1802d8234;
    FUN_18000f890(plVar35 + -0x66);
  }
  if (bVar13) {
    plVar35[-0xd3] = 0x1802d8249;
    FUN_18000f890(plVar35 + -0x62);
  }
  if (bVar7) {
    plVar35[-0xd3] = 0x1802d825b;
    FUN_18000f890(plVar35 + -0x5e);
  }
  if ((char)plVar35[-0xcb] != '\0') goto LAB_1802d82df;
  puVar27 = &DAT_1809f5a20;
  if (0xf < DAT_1809f5a38) {
    puVar27 = DAT_1809f5a20;
  }
  sVar26 = plVar35[-0x89];
  plVar32 = (longlong *)plVar35[-0x8b];
  uVar37 = plVar35[-0x88];
  plVar31 = plVar35 + -0x8b;
  if (0xf < uVar37) {
    plVar31 = plVar32;
  }
  if (sVar26 == DAT_1809f5a30) {
    if (sVar26 == 0) goto LAB_1802d82df;
    plVar35[-0xd3] = 0x1802d82b3;
    iVar16 = memcmp(plVar31,puVar27,sVar26);
    if (iVar16 == 0) goto LAB_1802d82df;
  }
  plVar31 = plVar35 + -0x8b;
  if (0xf < uVar37) {
    plVar31 = plVar32;
  }
  plVar35[-0xd3] = 0x1802d82d5;
  FUN_180029840(&DAT_1809f5a20,plVar31,sVar26);
  DAT_1809f597c = 0xffffffff;
LAB_1802d82df:
  lVar14 = plVar35[-0xca];
  plVar35[-0xd3] = 0x1802d82f5;
  FUN_1802d6d50(plVar35 + -0x7e,uVar17,(int)lVar14);
  plVar35[-0xd3] = 0x1802d8305;
  plVar32 = (longlong *)FUN_1802d75e0(plVar35 + -0x83,uVar17);
  lVar30 = *plVar32;
  lVar6 = plVar32[1];
  lVar33 = plVar32[2];
  uVar15 = 0;
  if ((char)plVar35[-0x8c] != '\0') {
    uVar15 = (int)plVar35[-0xbf];
  }
  lVar3 = plVar35[-0xc3];
  plVar35[-0x5a] = lVar3;
  *(undefined1 *)(plVar35 + -0x59) = *(undefined1 *)((longlong)plVar35 + -0x657);
  *(int *)((longlong)plVar35 + -0x2c4) = (int)lVar14;
  plVar32 = plVar35 + -0xc0;
  plVar31 = plVar35 + -0x58;
  do {
    plVar23 = plVar31;
    plVar24 = plVar32;
    lVar14 = plVar24[1];
    *plVar23 = *plVar24;
    plVar23[1] = lVar14;
    lVar14 = plVar24[3];
    plVar23[2] = plVar24[2];
    plVar23[3] = lVar14;
    lVar14 = plVar24[5];
    plVar23[4] = plVar24[4];
    plVar23[5] = lVar14;
    lVar14 = plVar24[7];
    plVar23[6] = plVar24[6];
    plVar23[7] = lVar14;
    lVar14 = plVar24[9];
    plVar23[8] = plVar24[8];
    plVar23[9] = lVar14;
    lVar14 = plVar24[0xb];
    plVar23[10] = plVar24[10];
    plVar23[0xb] = lVar14;
    lVar14 = plVar24[0xd];
    plVar23[0xc] = plVar24[0xc];
    plVar23[0xd] = lVar14;
    lVar14 = plVar24[0xf];
    plVar23[0xe] = plVar24[0xe];
    plVar23[0xf] = lVar14;
    lVar40 = lVar40 + -1;
    plVar32 = plVar24 + 0x10;
    plVar31 = plVar23 + 0x10;
  } while (lVar40 != 0);
  uVar36 = *(undefined4 *)((longlong)plVar24 + 0x84);
  lVar40 = plVar24[0x11];
  uVar5 = *(undefined4 *)((longlong)plVar24 + 0x8c);
  *(int *)(plVar23 + 0x10) = (int)plVar24[0x10];
  *(undefined4 *)((longlong)plVar23 + 0x84) = uVar36;
  *(int *)(plVar23 + 0x11) = (int)lVar40;
  *(undefined4 *)((longlong)plVar23 + 0x8c) = uVar5;
  uVar36 = *(undefined4 *)((longlong)plVar24 + 0x94);
  lVar40 = plVar24[0x13];
  uVar5 = *(undefined4 *)((longlong)plVar24 + 0x9c);
  *(int *)(plVar23 + 0x12) = (int)plVar24[0x12];
  *(undefined4 *)((longlong)plVar23 + 0x94) = uVar36;
  *(int *)(plVar23 + 0x13) = (int)lVar40;
  *(undefined4 *)((longlong)plVar23 + 0x9c) = uVar5;
  *(int *)(plVar23 + 0x14) = (int)plVar24[0x14];
  *(char *)((longlong)plVar35 + -0x11c) = (char)plVar35[-0xcc];
  *(char *)((longlong)plVar35 + -0x11b) = cVar39;
  *(int *)(plVar35 + -0x23) = (int)plVar35[-200];
  *(undefined4 *)((longlong)plVar35 + -0x114) = *(undefined4 *)((longlong)plVar35 + -0x654);
  plVar35[-0x22] = plVar35[-199];
  plVar35[-0x21] = plVar35[-0xc2];
  plVar35[-0x20] = plVar35[-0xc9];
  plVar35[-0x1f] = plVar35[-0xc4];
  plVar35[-0xc9] = (longlong)(plVar35 + -0x1e);
  plVar35[-0xd3] = 0x1802d842a;
  FUN_180024b50(plVar35 + -0x1e,plVar35 + -0x7e);
  plVar35[-0xd3] = 0x1802d843e;
  FUN_180024b50(plVar35 + -0x1a,plVar35 + -0x7a);
  plVar35[-0xd3] = 0x1802d8452;
  FUN_18006d7e0(plVar35 + -0x16,plVar35 + -0x76);
  *(int *)(plVar35 + -0x13) = (int)plVar35[-0x73];
  plVar35[-0x12] = lVar30;
  plVar35[-0x11] = lVar6;
  plVar35[-0x10] = lVar33;
  *(undefined4 *)(plVar35 + -0xce) = uVar15;
  plVar35[-0xd3] = 0x1802d848b;
  FUN_180344150(lVar3,plVar35[-0xc1],plVar35 + -0x8b,plVar35 + -0x5a);
  plVar35[-0xd3] = 0x1802d8498;
  FUN_1800288b0(plVar35 + -0x16);
  plVar35[-0xd3] = 0x1802d84a4;
  FUN_18000f890(plVar35 + -0x1a);
  plVar35[-0xd3] = 0x1802d84b0;
  FUN_18000f890(plVar35 + -0x1e);
  plVar35[-0xd3] = 0x1802d84bd;
  FUN_1800288b0(plVar35 + -0x76);
  plVar35[-0xd3] = 0x1802d84c9;
  FUN_18000f890(plVar35 + -0x7a);
  plVar35[-0xd3] = 0x1802d84d5;
  FUN_18000f890(plVar35 + -0x7e);
  plVar35[-0xd3] = 0x1802d84e2;
  puVar27 = (undefined8 *)FUN_18000f890(plVar35 + -0x8b);
  plVar35[-0xd3] = 0x1802d84f1;
  return puVar27;
}



/* ===== 1802d7be0 FUN_1802d7be0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001802d8151) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802d7be0(int *param_1,undefined8 *param_2,int *param_3,char param_4,int *param_5)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  undefined8 ***pppuVar14;
  int iVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  char **ppcVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined4 *puVar21;
  size_t sVar22;
  longlong *plVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  char **ppcVar26;
  undefined8 ***pppuVar27;
  undefined8 *puVar28;
  longlong lVar29;
  ulonglong uVar30;
  undefined4 uVar31;
  ulonglong uVar32;
  char *pcVar33;
  char cVar34;
  longlong lVar35;
  undefined8 uVar36;
  undefined1 auStack_698 [32];
  ulonglong local_678;
  undefined1 local_668;
  undefined4 local_664;
  char local_660;
  undefined1 local_65f;
  int local_65c;
  int local_658;
  undefined1 *local_650;
  undefined4 local_648;
  int local_640;
  int iStack_63c;
  int local_628;
  int iStack_624;
  char *local_620;
  undefined8 local_618;
  undefined *local_610;
  undefined8 local_608;
  undefined4 uStack_600;
  char local_468;
  undefined8 ***local_460;
  longlong lStack_458;
  size_t local_450;
  ulonglong uStack_448;
  undefined4 local_440;
  undefined4 uStack_43c;
  undefined4 uStack_438;
  undefined4 uStack_434;
  undefined4 local_430;
  undefined4 uStack_42c;
  undefined4 uStack_428;
  undefined4 uStack_424;
  undefined4 local_420;
  undefined4 uStack_41c;
  undefined4 uStack_418;
  undefined4 uStack_414;
  undefined4 local_410;
  undefined4 uStack_40c;
  undefined4 uStack_408;
  undefined4 uStack_404;
  undefined1 local_3f8 [32];
  undefined1 local_3d8 [32];
  undefined1 local_3b8 [24];
  undefined4 local_3a0;
  undefined1 local_398 [32];
  undefined1 local_378 [32];
  undefined1 local_358 [32];
  undefined1 local_338 [32];
  undefined1 local_318 [32];
  undefined1 local_2f8 [32];
  char *local_2d8;
  undefined1 uStack_2d0;
  int iStack_2cc;
  undefined8 local_2c8 [50];
  undefined1 local_138;
  undefined1 local_124;
  char local_123;
  int local_120;
  int local_11c;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined1 local_f8 [32];
  undefined1 local_d8 [32];
  undefined1 local_b8 [24];
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  ulonglong local_78;
  
  local_78 = DAT_180919500 ^ (ulonglong)auStack_698;
  local_664 = 0;
  local_620 = "weapon";
  if (param_4 != '\0') {
    local_620 = "weapon_big";
  }
  local_610 = &DAT_1809f6fd0;
  if (param_4 != '\0') {
    local_610 = &DAT_1809f7240;
  }
  iVar15 = param_1[0x12];
  lVar35 = 3;
  if (iVar15 == 2) {
    uVar32 = 0x200000;
    uVar36 = 2;
  }
  else if (iVar15 == 3) {
    uVar32 = 0x400000;
    uVar36 = 4;
  }
  else if (iVar15 == 4) {
    uVar36 = 3;
    uVar32 = 0x300000;
  }
  else if (iVar15 == 5) {
    uVar32 = 0x600000;
    uVar36 = 6;
  }
  else if (iVar15 == 6) {
    uVar32 = 0x500000;
    uVar36 = 5;
  }
  else {
    uVar32 = 0x100000;
    uVar36 = 1;
  }
  iVar15 = param_5[1];
  iVar1 = *param_5;
  local_660 = param_4;
  uVar16 = FUN_1802d76a0(&local_440,uVar36);
  local_678 = (uVar32 ^ (longlong)iVar1) << 0x14 ^ (longlong)iVar15;
  FUN_1800e3760(local_620,*param_5,param_5[1],uVar16);
  FUN_18000f890(&local_440);
  if (DAT_1809f5a1c != *param_1) {
    _DAT_1809f596c = 0;
    DAT_1809f597c = 0xffffffff;
    DAT_1809f5a1c = *param_1;
  }
  local_658 = *param_1;
  lVar29 = 3;
  if (param_2 == (undefined8 *)0x0) {
    local_138 = 0;
    puVar24 = &local_608;
    ppcVar18 = &local_2d8;
    do {
      pcVar33 = ppcVar18[1];
      *puVar24 = *ppcVar18;
      puVar24[1] = pcVar33;
      pcVar33 = ppcVar18[3];
      puVar24[2] = ppcVar18[2];
      puVar24[3] = pcVar33;
      pcVar33 = ppcVar18[5];
      puVar24[4] = ppcVar18[4];
      puVar24[5] = pcVar33;
      pcVar33 = ppcVar18[7];
      puVar24[6] = ppcVar18[6];
      puVar24[7] = pcVar33;
      pcVar33 = ppcVar18[9];
      puVar24[8] = ppcVar18[8];
      puVar24[9] = pcVar33;
      pcVar33 = ppcVar18[0xb];
      puVar24[10] = ppcVar18[10];
      puVar24[0xb] = pcVar33;
      pcVar33 = ppcVar18[0xd];
      puVar24[0xc] = ppcVar18[0xc];
      puVar24[0xd] = pcVar33;
      pcVar33 = ppcVar18[0xf];
      puVar24[0xe] = ppcVar18[0xe];
      puVar24[0xf] = pcVar33;
      puVar24 = puVar24 + 0x10;
      ppcVar18 = ppcVar18 + 0x10;
      lVar29 = lVar29 + -1;
    } while (lVar29 != 0);
  }
  else {
    puVar24 = param_2;
    ppcVar18 = &local_2d8;
    do {
      ppcVar26 = ppcVar18;
      puVar17 = puVar24;
      pcVar33 = (char *)puVar17[1];
      *ppcVar26 = (char *)*puVar17;
      ppcVar26[1] = pcVar33;
      pcVar33 = (char *)puVar17[3];
      ppcVar26[2] = (char *)puVar17[2];
      ppcVar26[3] = pcVar33;
      pcVar33 = (char *)puVar17[5];
      ppcVar26[4] = (char *)puVar17[4];
      ppcVar26[5] = pcVar33;
      pcVar33 = (char *)puVar17[7];
      ppcVar26[6] = (char *)puVar17[6];
      ppcVar26[7] = pcVar33;
      pcVar33 = (char *)puVar17[9];
      ppcVar26[8] = (char *)puVar17[8];
      ppcVar26[9] = pcVar33;
      pcVar33 = (char *)puVar17[0xb];
      ppcVar26[10] = (char *)puVar17[10];
      ppcVar26[0xb] = pcVar33;
      pcVar33 = (char *)puVar17[0xd];
      ppcVar26[0xc] = (char *)puVar17[0xc];
      ppcVar26[0xd] = pcVar33;
      pcVar33 = (char *)puVar17[0xf];
      ppcVar26[0xe] = (char *)puVar17[0xe];
      ppcVar26[0xf] = pcVar33;
      lVar29 = lVar29 + -1;
      puVar24 = puVar17 + 0x10;
      ppcVar18 = ppcVar26 + 0x10;
    } while (lVar29 != 0);
    pcVar33 = (char *)puVar17[0x11];
    ppcVar26[0x10] = (char *)puVar17[0x10];
    ppcVar26[0x11] = pcVar33;
    pcVar33 = (char *)puVar17[0x13];
    ppcVar26[0x12] = (char *)puVar17[0x12];
    ppcVar26[0x13] = pcVar33;
    local_138 = 1;
    puVar24 = &local_608;
    ppcVar18 = &local_2d8;
    lVar29 = 3;
    do {
      pcVar33 = ppcVar18[1];
      *puVar24 = *ppcVar18;
      puVar24[1] = pcVar33;
      pcVar33 = ppcVar18[3];
      puVar24[2] = ppcVar18[2];
      puVar24[3] = pcVar33;
      pcVar33 = ppcVar18[5];
      puVar24[4] = ppcVar18[4];
      puVar24[5] = pcVar33;
      pcVar33 = ppcVar18[7];
      puVar24[6] = ppcVar18[6];
      puVar24[7] = pcVar33;
      pcVar33 = ppcVar18[9];
      puVar24[8] = ppcVar18[8];
      puVar24[9] = pcVar33;
      pcVar33 = ppcVar18[0xb];
      puVar24[10] = ppcVar18[10];
      puVar24[0xb] = pcVar33;
      pcVar33 = ppcVar18[0xd];
      puVar24[0xc] = ppcVar18[0xc];
      puVar24[0xd] = pcVar33;
      pcVar33 = ppcVar18[0xf];
      puVar24[0xe] = ppcVar18[0xe];
      puVar24[0xf] = pcVar33;
      puVar24 = puVar24 + 0x10;
      ppcVar18 = ppcVar18 + 0x10;
      lVar29 = lVar29 + -1;
    } while (lVar29 != 0);
  }
  uVar31 = *(undefined4 *)((longlong)ppcVar18 + 4);
  uVar3 = *(undefined4 *)(ppcVar18 + 1);
  uVar4 = *(undefined4 *)((longlong)ppcVar18 + 0xc);
  *(undefined4 *)puVar24 = *(undefined4 *)ppcVar18;
  *(undefined4 *)((longlong)puVar24 + 4) = uVar31;
  *(undefined4 *)(puVar24 + 1) = uVar3;
  *(undefined4 *)((longlong)puVar24 + 0xc) = uVar4;
  uVar31 = *(undefined4 *)((longlong)ppcVar18 + 0x14);
  uVar3 = *(undefined4 *)(ppcVar18 + 3);
  uVar4 = *(undefined4 *)((longlong)ppcVar18 + 0x1c);
  *(undefined4 *)(puVar24 + 2) = *(undefined4 *)(ppcVar18 + 2);
  *(undefined4 *)((longlong)puVar24 + 0x14) = uVar31;
  *(undefined4 *)(puVar24 + 3) = uVar3;
  *(undefined4 *)((longlong)puVar24 + 0x1c) = uVar4;
  *(undefined4 *)(puVar24 + 4) = *(undefined4 *)(ppcVar18 + 4);
  local_65f = param_1[0x12] == 3;
  if ((param_3 == (int *)0x0) || ((char)*param_3 == '\0')) {
    cVar34 = '\0';
  }
  else {
    cVar34 = '\x01';
  }
  if (((DAT_1809f5969 == '\0') || (param_1[0x12] == 3)) || (cVar34 != '\0')) {
    bVar7 = false;
    local_668 = 0;
    if (cVar34 == '\0') goto LAB_1802d7efa;
    local_648 = *param_3;
    local_65c = param_3[1];
    local_640 = param_3[2];
    iStack_63c = param_3[3];
    uVar16 = *(undefined8 *)(param_3 + 4);
    local_650 = *(undefined1 **)(param_3 + 6);
    local_628 = param_3[8];
    iStack_624 = param_3[9];
  }
  else {
    bVar7 = true;
    local_668 = 1;
LAB_1802d7efa:
    local_648 = (uint)local_648._2_2_ << 0x10;
    local_65c = 0;
    local_640 = -2;
    uVar16 = 0;
    local_650 = (undefined1 *)0x0;
    local_628 = 0;
  }
  iVar15 = local_65c;
  local_618 = uVar16;
  if (cVar34 == '\0') {
    pcVar33 = "";
    if (bVar7) {
      pcVar33 = "|spin";
    }
    uVar16 = FUN_1800dff20(local_398,local_658,param_2);
    local_664 = 0x80;
    sVar22 = strlen(pcVar33);
    plVar23 = (longlong *)FUN_1800134a0(uVar16,pcVar33,sVar22);
    local_460 = (undefined8 ***)*plVar23;
    lStack_458 = plVar23[1];
    local_450 = plVar23[2];
    uStack_448 = plVar23[3];
    plVar23[2] = 0;
    plVar23[3] = 0xf;
    *(undefined1 *)plVar23 = 0;
    bVar13 = false;
    bVar12 = false;
    bVar11 = false;
    bVar10 = false;
    bVar9 = false;
    bVar8 = false;
    bVar7 = false;
  }
  else {
    uVar19 = FUN_18004e4f0(local_2f8);
    local_664 = 1;
    uVar16 = FUN_18004e4f0(local_318,uVar16);
    local_664 = 3;
    uVar20 = FUN_18003a390(local_338,iVar15);
    local_664 = 7;
    uVar20 = FUN_180066ab0(local_358,"place|",uVar20);
    local_664 = 0xf;
    puVar21 = (undefined4 *)FUN_1800134a0(uVar20,&DAT_1806e9100,1);
    local_440 = *puVar21;
    uStack_43c = puVar21[1];
    uStack_438 = puVar21[2];
    uStack_434 = puVar21[3];
    local_430 = puVar21[4];
    uStack_42c = puVar21[5];
    uStack_428 = puVar21[6];
    uStack_424 = puVar21[7];
    *(undefined8 *)(puVar21 + 4) = 0;
    *(undefined8 *)(puVar21 + 6) = 0xf;
    *(undefined1 *)puVar21 = 0;
    local_664 = 0x11f;
    uVar16 = FUN_180066820(local_378,&local_440,uVar16);
    local_664 = 0x13f;
    puVar21 = (undefined4 *)FUN_1800134a0(uVar16,&DAT_1806e9100,1);
    local_420 = *puVar21;
    uStack_41c = puVar21[1];
    uStack_418 = puVar21[2];
    uStack_414 = puVar21[3];
    local_410 = puVar21[4];
    uStack_40c = puVar21[5];
    uStack_408 = puVar21[6];
    uStack_404 = puVar21[7];
    *(undefined8 *)(puVar21 + 4) = 0;
    *(undefined8 *)(puVar21 + 6) = 0xf;
    *(undefined1 *)puVar21 = 0;
    bVar13 = true;
    bVar12 = true;
    bVar11 = true;
    bVar10 = true;
    bVar9 = true;
    bVar8 = true;
    bVar7 = true;
    local_664 = 0x37f;
    FUN_180066820(&local_460,&local_420,uVar19);
  }
  if ((bVar8) && (uVar32 = CONCAT44(uStack_404,uStack_408), 0xf < uVar32)) {
    uVar30 = uVar32 + 1;
    lVar6 = CONCAT44(uStack_41c,local_420);
    lVar29 = lVar6;
    if (0xfff < uVar30) {
      lVar29 = *(longlong *)(lVar6 + -8);
      if (0x1f < (lVar6 - lVar29) - 8U) {
        pcVar2 = (code *)swi(0x29);
        (*pcVar2)(5);
        goto LAB_1802d851c;
      }
      uVar30 = uVar32 + 0x28;
    }
    thunk_FUN_1803d64e0(lVar29,uVar30);
  }
  if (bVar9) {
    FUN_18000f890(local_378);
  }
  if ((bVar10) && (uVar32 = CONCAT44(uStack_424,uStack_428), 0xf < uVar32)) {
    uVar30 = uVar32 + 1;
    lVar6 = CONCAT44(uStack_43c,local_440);
    lVar29 = lVar6;
    if (0xfff < uVar30) {
      lVar29 = *(longlong *)(lVar6 + -8);
      if (0x1f < (lVar6 - lVar29) - 8U) {
LAB_1802d851c:
        pcVar2 = (code *)swi(0x29);
        (*pcVar2)(5);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar30 = uVar32 + 0x28;
    }
    thunk_FUN_1803d64e0(lVar29,uVar30);
  }
  if (bVar11) {
    FUN_18000f890(local_358);
  }
  if (bVar12) {
    FUN_18000f890(local_338);
  }
  if (bVar13) {
    FUN_18000f890(local_318);
  }
  if (bVar7) {
    FUN_18000f890(local_2f8);
  }
  uVar32 = uStack_448;
  sVar22 = local_450;
  pppuVar14 = local_460;
  if (local_660 == '\0') {
    puVar24 = &DAT_1809f5a20;
    if (0xf < DAT_1809f5a38) {
      puVar24 = DAT_1809f5a20;
    }
    pppuVar27 = &local_460;
    if (0xf < uStack_448) {
      pppuVar27 = local_460;
    }
    if ((local_450 != DAT_1809f5a30) ||
       ((local_450 != 0 && (iVar15 = memcmp(pppuVar27,puVar24,local_450), iVar15 != 0)))) {
      pppuVar27 = &local_460;
      if (0xf < uVar32) {
        pppuVar27 = pppuVar14;
      }
      FUN_180029840(&DAT_1809f5a20,pppuVar27,sVar22);
      DAT_1809f597c = 0xffffffff;
    }
  }
  iVar15 = local_658;
  FUN_1802d6d50(local_3f8,uVar36,local_658);
  puVar24 = (undefined8 *)FUN_1802d75e0(&local_420,uVar36);
  pcVar33 = local_620;
  uVar16 = *puVar24;
  uVar19 = puVar24[1];
  uVar36 = puVar24[2];
  uVar31 = 0;
  if (local_468 != '\0') {
    uVar31 = uStack_600;
  }
  local_2d8 = local_620;
  uStack_2d0 = local_65f;
  iStack_2cc = iVar15;
  puVar24 = &local_608;
  puVar17 = local_2c8;
  do {
    puVar28 = puVar17;
    puVar25 = puVar24;
    uVar20 = puVar25[1];
    *puVar28 = *puVar25;
    puVar28[1] = uVar20;
    uVar20 = puVar25[3];
    puVar28[2] = puVar25[2];
    puVar28[3] = uVar20;
    uVar20 = puVar25[5];
    puVar28[4] = puVar25[4];
    puVar28[5] = uVar20;
    uVar20 = puVar25[7];
    puVar28[6] = puVar25[6];
    puVar28[7] = uVar20;
    uVar20 = puVar25[9];
    puVar28[8] = puVar25[8];
    puVar28[9] = uVar20;
    uVar20 = puVar25[0xb];
    puVar28[10] = puVar25[10];
    puVar28[0xb] = uVar20;
    uVar20 = puVar25[0xd];
    puVar28[0xc] = puVar25[0xc];
    puVar28[0xd] = uVar20;
    uVar20 = puVar25[0xf];
    puVar28[0xe] = puVar25[0xe];
    puVar28[0xf] = uVar20;
    lVar35 = lVar35 + -1;
    puVar24 = puVar25 + 0x10;
    puVar17 = puVar28 + 0x10;
  } while (lVar35 != 0);
  uVar3 = *(undefined4 *)((longlong)puVar25 + 0x84);
  uVar4 = *(undefined4 *)(puVar25 + 0x11);
  uVar5 = *(undefined4 *)((longlong)puVar25 + 0x8c);
  *(undefined4 *)(puVar28 + 0x10) = *(undefined4 *)(puVar25 + 0x10);
  *(undefined4 *)((longlong)puVar28 + 0x84) = uVar3;
  *(undefined4 *)(puVar28 + 0x11) = uVar4;
  *(undefined4 *)((longlong)puVar28 + 0x8c) = uVar5;
  uVar3 = *(undefined4 *)((longlong)puVar25 + 0x94);
  uVar4 = *(undefined4 *)(puVar25 + 0x13);
  uVar5 = *(undefined4 *)((longlong)puVar25 + 0x9c);
  *(undefined4 *)(puVar28 + 0x12) = *(undefined4 *)(puVar25 + 0x12);
  *(undefined4 *)((longlong)puVar28 + 0x94) = uVar3;
  *(undefined4 *)(puVar28 + 0x13) = uVar4;
  *(undefined4 *)((longlong)puVar28 + 0x9c) = uVar5;
  *(undefined4 *)(puVar28 + 0x14) = *(undefined4 *)(puVar25 + 0x14);
  local_124 = local_668;
  local_120 = local_648;
  local_11c = local_65c;
  local_118 = CONCAT44(iStack_63c,local_640);
  local_110 = local_618;
  local_108 = local_650;
  local_100 = CONCAT44(iStack_624,local_628);
  local_650 = local_f8;
  local_123 = cVar34;
  FUN_180024b50(local_f8,local_3f8);
  FUN_180024b50(local_d8,local_3d8);
  FUN_18006d7e0(local_b8,local_3b8);
  local_a0 = local_3a0;
  local_678 = CONCAT44(local_678._4_4_,uVar31);
  local_98 = uVar16;
  uStack_90 = uVar19;
  local_88 = uVar36;
  FUN_180344150(pcVar33,local_610,&local_460,&local_2d8);
  FUN_1800288b0(local_b8);
  FUN_18000f890(local_d8);
  FUN_18000f890(local_f8);
  FUN_1800288b0(local_3b8);
  FUN_18000f890(local_3d8);
  FUN_18000f890(local_3f8);
  FUN_18000f890(&local_460);
  return;
}



/* ===== 1802d8530 FUN_1802d8530 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1802d8530(undefined8 *param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined8 ***pppuVar4;
  char ***pppcVar5;
  longlong ****pppplVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  char ****ppppcVar12;
  undefined8 ****ppppuVar13;
  undefined8 ****ppppuVar14;
  longlong *plVar15;
  ulonglong uVar16;
  ulonglong *puVar17;
  size_t sVar18;
  char *pcVar19;
  undefined8 uVar20;
  longlong ****pppplVar21;
  longlong *plVar22;
  char ****ppppcVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  longlong lVar26;
  undefined8 *puVar27;
  uint uVar28;
  char *pcVar29;
  undefined1 *puVar30;
  undefined1 *puVar31;
  char ****ppppcVar32;
  char ****ppppcVar33;
  char *pcVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  uint uVar37;
  char ****ppppcVar38;
  double dVar39;
  undefined8 uStack_4e0;
  undefined1 auStack_4d8 [8];
  undefined1 auStack_4d0 [24];
  undefined4 local_4b8 [16];
  byte local_478;
  undefined1 local_477;
  undefined8 local_470;
  uint local_468;
  char ****local_460;
  ulonglong local_458;
  ulonglong local_450;
  longlong local_448;
  char ****local_440;
  undefined8 local_438;
  undefined8 local_430;
  undefined8 ****local_428;
  undefined8 uStack_420;
  char *local_418;
  char *pcStack_410;
  char ****local_408;
  longlong lStack_400;
  char *local_3f8;
  char *pcStack_3f0;
  ulonglong local_3e8;
  ulonglong uStack_3e0;
  char *local_3d8;
  ulonglong uStack_3d0;
  undefined8 ****local_3c8;
  undefined8 uStack_3c0;
  undefined8 local_3b8;
  ulonglong local_3b0;
  undefined8 ****local_3a8;
  longlong ***ppplStack_3a0;
  ulonglong local_398;
  ulonglong local_390;
  char ****local_388;
  undefined8 uStack_380;
  char ****local_378;
  char ****local_370;
  ulonglong local_368;
  ulonglong uStack_360;
  ulonglong local_358;
  ulonglong uStack_350;
  longlong ****local_348;
  undefined8 uStack_340;
  ulonglong local_338;
  ulonglong uStack_330;
  undefined8 ****local_328;
  longlong lStack_320;
  longlong local_318;
  ulonglong uStack_310;
  undefined1 local_308 [32];
  longlong local_2e8;
  longlong lStack_2e0;
  longlong local_2d8;
  ulonglong uStack_2d0;
  undefined1 local_2c8 [32];
  undefined1 local_2a8 [32];
  undefined1 local_288 [32];
  undefined1 local_268 [32];
  undefined1 local_248 [32];
  char local_228 [256];
  char local_128 [192];
  ulonglong local_68;
  
  local_68 = DAT_180919500 ^ (ulonglong)auStack_4d8;
  local_468 = 1;
  local_470 = CONCAT44(local_470._4_4_,1);
  uStack_340 = 0;
  local_450 = 1;
  local_338 = 1;
  local_458 = 0xf;
  uStack_330 = 0xf;
  local_348 = (longlong ****)(ulonglong)(DAT_1806d3254 & 0xff);
  lVar26 = 0;
  local_438 = param_2;
  local_430 = param_2;
  if (*(char *)(param_1 + 0x36) != '\0') {
    if (*(char *)((longlong)param_1 + 0x6c) != '\0') {
      FUN_180298cb0(*(undefined4 *)((longlong)param_1 + 0xc),param_1 + 2);
    }
    lVar9 = FUN_1800e0b60(*(undefined4 *)((longlong)param_1 + 0xc),param_1 + 2);
    if (lVar9 != 0) {
      uVar10 = FUN_18004e4f0(&local_328,lVar9);
      uVar10 = FUN_180066ab0(local_308,&DAT_1806e17c8,uVar10);
      puVar11 = (undefined8 *)FUN_1800134a0(uVar10,&DAT_1806e17c8,1);
      local_348 = (longlong ****)*puVar11;
      uStack_340 = puVar11[1];
      uVar24 = puVar11[2];
      uVar25 = puVar11[3];
      puVar11[2] = 0;
      puVar11[3] = 0xf;
      *(undefined1 *)puVar11 = 0;
      local_468 = 0x2001;
      local_338 = uVar24;
      uStack_330 = uVar25;
      FUN_18000f890(local_308);
      FUN_18000f890(&local_328);
      lVar26 = lVar9;
      local_458 = uVar25;
      local_450 = uVar24;
    }
  }
  if ((*(char *)(param_1 + 1) == '\0') || (*(char *)((longlong)param_1 + 0x1b5) != '\0')) {
LAB_1802d86b9:
    local_477 = 0;
  }
  else {
    cVar7 = FUN_18021efe0(*param_1,*(undefined4 *)((longlong)param_1 + 0xc),lVar26);
    local_477 = 1;
    if (cVar7 == '\0') goto LAB_1802d86b9;
  }
  cVar7 = *(char *)(param_1 + 0x36);
  if ((cVar7 == '\0') || (*(int *)(param_1 + 3) == 0)) {
    local_448 = 0;
  }
  else {
    local_448 = FUN_180280d30();
  }
  puVar31 = auStack_4d8;
  puVar30 = auStack_4d8;
  uStack_380 = 0;
  ppppcVar23 = (char ****)0x0;
  local_378 = (char ****)0x0;
  ppppcVar32 = (char ****)0xf;
  local_370 = (char ****)0xf;
  local_388 = (char ****)0x0;
  if (cVar7 == '\0') {
    ppppcVar12 = (char ****)0x0;
  }
  else {
    local_470 = 0;
    ppppcVar33 = ppppcVar32;
    ppppcVar38 = (char ****)0x0;
    do {
      local_478 = *(byte *)((longlong)param_1 + local_470 + 0x2c);
      ppppcVar32 = ppppcVar33;
      ppppcVar12 = ppppcVar38;
      if (local_478 == 0) break;
      if (0x1f < local_478) {
        if (ppppcVar23 < ppppcVar33) {
          local_378 = (char ****)((longlong)ppppcVar23 + 1);
          ppppcVar32 = (char ****)&local_388;
          if ((char ****)0xf < ppppcVar33) {
            ppppcVar32 = ppppcVar38;
          }
          *(byte *)((longlong)ppppcVar32 + (longlong)ppppcVar23) = local_478;
          ((char *)((longlong)ppppcVar32 + 1))[(longlong)ppppcVar23] = '\0';
          ppppcVar23 = local_378;
          ppppcVar32 = local_370;
          ppppcVar12 = local_388;
        }
        else {
          if (ppppcVar23 == (char ****)0x7fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
            FUN_180011990();
          }
          local_460 = (char ****)((longlong)ppppcVar23 + 1);
          ppppcVar32 = (char ****)((ulonglong)local_460 | 0xf);
          if (ppppcVar32 < (char ****)0x8000000000000000) {
            if ((char ****)(0x7fffffffffffffff - ((ulonglong)ppppcVar33 >> 1)) < ppppcVar33) {
              ppppcVar32 = (char ****)0x7fffffffffffffff;
            }
            else {
              ppppcVar12 = (char ****)((longlong)ppppcVar33 + ((ulonglong)ppppcVar33 >> 1));
              if (ppppcVar32 < ppppcVar12) {
                ppppcVar32 = ppppcVar12;
              }
            }
          }
          else {
            ppppcVar32 = (char ****)0x7fffffffffffffff;
          }
          ppppcVar12 = (char ****)FUN_18000fb70((char *)((longlong)ppppcVar32 + 1));
          local_378 = local_460;
          local_370 = ppppcVar32;
          if (ppppcVar33 < &DAT_00000010) {
            FUN_180540530(ppppcVar12,&local_388,ppppcVar23);
            *(byte *)((longlong)ppppcVar12 + (longlong)ppppcVar23) = local_478;
            ((char *)((longlong)ppppcVar12 + 1))[(longlong)ppppcVar23] = '\0';
          }
          else {
            FUN_180540530(ppppcVar12,ppppcVar38,ppppcVar23);
            *(byte *)((longlong)ppppcVar12 + (longlong)ppppcVar23) = local_478;
            ((char *)((longlong)ppppcVar12 + 1))[(longlong)ppppcVar23] = '\0';
            if ((char *)((longlong)ppppcVar33 + 1) < (char *)0x1000) {
              thunk_FUN_1803d64e0(ppppcVar38);
            }
            else {
              if ((char *)0x1f < (char *)((longlong)ppppcVar38 + (-8 - (longlong)ppppcVar38[-1])))
              goto LAB_1802d9b88;
              thunk_FUN_1803d64e0(ppppcVar38[-1],ppppcVar33 + 5);
            }
          }
          local_388 = ppppcVar12;
          ppppcVar23 = local_460;
        }
      }
      local_470 = local_470 + 1;
      ppppcVar33 = ppppcVar32;
      ppppcVar38 = ppppcVar12;
    } while (local_470 < 0x40);
  }
  uVar28 = local_468;
  uStack_420 = 0;
  local_418 = (char *)0x1;
  pcStack_410 = (char *)0xf;
  local_428 = (undefined8 ****)(ulonglong)(DAT_1806e17c8 & 0xff);
  uVar37 = local_468 | 2;
  local_468 = uVar37;
  local_470 = CONCAT44(local_470._4_4_,uVar28) | 2;
  local_460 = (char ****)&local_388;
  if ((char ****)0xf < ppppcVar32) {
    local_460 = ppppcVar12;
  }
  local_440 = (char ****)&local_388;
  if ((char ****)0xf < ppppcVar32) {
    local_440 = ppppcVar12;
  }
  local_440 = (char ****)((longlong)local_440 + (longlong)ppppcVar23);
  puVar31 = auStack_4d8;
  if (local_460 != local_440) {
    do {
      pcVar29 = pcStack_410;
      pcVar34 = local_418;
      cVar7 = *(char *)local_460;
      if ((cVar7 == '\'') || (cVar7 == '\\')) {
        if (local_418 < pcStack_410) {
          ppppuVar13 = &local_428;
          if (0xf < pcStack_410) {
            ppppuVar13 = local_428;
          }
          puVar1 = (undefined2 *)((longlong)ppppuVar13 + (longlong)local_418);
          local_418 = (char *)((longlong)local_418 + 1);
          *puVar1 = 0x5c;
          goto LAB_1802d89de;
        }
        if (local_418 == (char *)0x7fffffffffffffff) goto LAB_1802d9b9b;
        uVar24 = (longlong)local_418 + 1U | 0xf;
        if (uVar24 < 0x8000000000000000) {
          if (0x7fffffffffffffff - ((ulonglong)pcStack_410 >> 1) < pcStack_410) {
            uVar24 = 0x7fffffffffffffff;
          }
          else {
            uVar25 = ((ulonglong)pcStack_410 >> 1) + (longlong)pcStack_410;
            if (uVar24 < uVar25) {
              uVar24 = uVar25;
            }
          }
        }
        else {
          uVar24 = 0x7fffffffffffffff;
        }
        ppppuVar14 = (undefined8 ****)FUN_18000fb70(uVar24 + 1);
        ppppuVar13 = local_428;
        local_418 = (char *)((longlong)pcVar34 + 1);
        pcStack_410 = (char *)uVar24;
        if (pcVar29 < 0x10) {
          FUN_180540530(ppppuVar14,&local_428,pcVar34);
          *(undefined2 *)((longlong)ppppuVar14 + (longlong)pcVar34) = 0x5c;
          local_428 = ppppuVar14;
          goto LAB_1802d89de;
        }
        FUN_180540530(ppppuVar14,local_428,pcVar34);
        *(undefined2 *)((longlong)ppppuVar14 + (longlong)pcVar34) = 0x5c;
        if ((longlong)pcVar29 + 1U < 0x1000) {
          thunk_FUN_1803d64e0(ppppuVar13);
          local_428 = ppppuVar14;
          goto LAB_1802d89de;
        }
        if ((ulonglong)((longlong)ppppuVar13 + (-8 - (longlong)ppppuVar13[-1])) < 0x20) {
          thunk_FUN_1803d64e0(ppppuVar13[-1],(longlong)pcVar29 + 0x28);
          local_428 = ppppuVar14;
          goto LAB_1802d89de;
        }
LAB_1802d8aed:
        pcVar3 = (code *)swi(0x29);
        (*pcVar3)(5);
        puVar30 = auStack_4d0;
        break;
      }
LAB_1802d89de:
      pcVar29 = pcStack_410;
      pcVar34 = local_418;
      if (local_418 < pcStack_410) {
        ppppuVar13 = &local_428;
        if (0xf < pcStack_410) {
          ppppuVar13 = local_428;
        }
        pcVar29 = (char *)((longlong)ppppuVar13 + (longlong)local_418);
        local_418 = (char *)((longlong)local_418 + 1);
        *pcVar29 = cVar7;
        *(undefined1 *)((longlong)ppppuVar13 + (longlong)pcVar34 + 1U) = 0;
      }
      else {
        if (local_418 == (char *)0x7fffffffffffffff) {
LAB_1802d9b9b:
                    /* WARNING: Subroutine does not return */
          FUN_180011990();
        }
        uVar24 = (longlong)local_418 + 1U | 0xf;
        if (uVar24 < 0x8000000000000000) {
          if (0x7fffffffffffffff - ((ulonglong)pcStack_410 >> 1) < pcStack_410) {
            uVar24 = 0x7fffffffffffffff;
          }
          else {
            uVar25 = ((ulonglong)pcStack_410 >> 1) + (longlong)pcStack_410;
            if (uVar24 < uVar25) {
              uVar24 = uVar25;
            }
          }
        }
        else {
          uVar24 = 0x7fffffffffffffff;
        }
        ppppuVar14 = (undefined8 ****)FUN_18000fb70(uVar24 + 1);
        ppppuVar13 = local_428;
        local_418 = (char *)((longlong)pcVar34 + 1);
        pcStack_410 = (char *)uVar24;
        if (pcVar29 < 0x10) {
          FUN_180540530(ppppuVar14,&local_428,pcVar34);
          *(char *)((longlong)ppppuVar14 + (longlong)pcVar34) = cVar7;
          *(undefined1 *)((longlong)ppppuVar14 + (longlong)pcVar34 + 1U) = 0;
        }
        else {
          FUN_180540530(ppppuVar14,local_428,pcVar34);
          *(char *)((longlong)ppppuVar14 + (longlong)pcVar34) = cVar7;
          *(undefined1 *)((longlong)ppppuVar14 + (longlong)pcVar34 + 1U) = 0;
          if ((longlong)pcVar29 + 1U < 0x1000) {
            thunk_FUN_1803d64e0(ppppuVar13);
          }
          else {
            if (0x1f < (ulonglong)((longlong)ppppuVar13 + (-8 - (longlong)ppppuVar13[-1])))
            goto LAB_1802d8aed;
            thunk_FUN_1803d64e0(ppppuVar13[-1],(longlong)pcVar29 + 0x28);
          }
        }
        local_428 = ppppuVar14;
      }
      local_460 = (char ****)((longlong)local_460 + 1);
    } while (local_460 != local_440);
    uVar37 = *(uint *)(puVar30 + 0x70);
    puVar31 = puVar30;
  }
  *(undefined8 *)(puVar31 + -8) = 0x1802d8b0f;
  FUN_1800134a0(&local_428,&DAT_1806e17c8,1);
  *(undefined8 *)(puVar31 + -8) = 0x1802d8b26;
  uVar10 = FUN_180066ab0(local_308," var label = ",&local_428);
  *(undefined8 *)(puVar31 + -8) = 0x1802d8b3c;
  plVar15 = (longlong *)FUN_1800134a0(uVar10,&DAT_1806f8e8c,1);
  local_2e8 = *plVar15;
  lStack_2e0 = plVar15[1];
  local_2d8 = plVar15[2];
  uStack_2d0 = plVar15[3];
  plVar15[2] = 0;
  plVar15[3] = 0xf;
  *(undefined1 *)plVar15 = 0;
  *(undefined8 *)(puVar31 + -8) = 0x1802d8b71;
  FUN_18000f890(local_308);
  uVar37 = uVar37 & 0xfffffffd;
  *(uint *)(puVar31 + 0x68) = uVar37 | 4;
  if (0xf < pcStack_410) {
    uVar24 = (longlong)pcStack_410 + 1;
    ppppuVar13 = local_428;
    if (uVar24 < 0x1000) {
LAB_1802d8bb0:
      *(undefined8 *)(puVar31 + -8) = 0x1802d8bb5;
      thunk_FUN_1803d64e0(ppppuVar13,uVar24);
      goto LAB_1802d8bb5;
    }
    ppppuVar13 = (undefined8 ****)local_428[-1];
    if ((ulonglong)((longlong)local_428 + (-8 - (longlong)ppppuVar13)) < 0x20) {
      uVar24 = (longlong)pcStack_410 + 0x28;
      goto LAB_1802d8bb0;
    }
LAB_1802d9b81:
    pcVar3 = (code *)swi(0x29);
    (*pcVar3)(5);
    puVar31 = puVar31 + 8;
LAB_1802d9b88:
    pcVar3 = (code *)swi(0x29);
    (*pcVar3)(5);
    puVar31 = puVar31 + 8;
LAB_1802d9b8f:
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)(puVar31 + -8) = 0x1802d9b94;
    FUN_180011990();
  }
LAB_1802d8bb5:
  pppplVar6 = local_348;
  uVar25 = local_450;
  uVar24 = local_458;
  local_418 = (char *)0x0;
  pcStack_410 = (char *)0xf;
  local_428 = (undefined8 ****)((ulonglong)local_428 & 0xffffffffffffff00);
  pppplVar21 = (longlong ****)&local_348;
  if (0xf < local_458) {
    pppplVar21 = local_348;
  }
  if (local_450 == 1) {
    *(undefined8 *)(puVar31 + -8) = 0x1802d8bf8;
    iVar8 = memcmp(pppplVar21,&DAT_1806d3254,1);
    if (iVar8 != 0) goto LAB_1802d8c1f;
    puVar11 = param_1 + 2;
    if (*(char *)(param_1 + 0x36) == '\0') {
      puVar11 = (undefined8 *)0x0;
    }
    uVar2 = *(undefined4 *)((longlong)param_1 + 0xc);
    *(undefined8 *)(puVar31 + -8) = 0x1802d8c1a;
    FUN_1802d6b00(&local_3a8,uVar2,puVar11);
  }
  else {
LAB_1802d8c1f:
    local_3a8 = (undefined8 ****)0x0;
    ppplStack_3a0 = (longlong ***)0x0;
    local_398 = 0;
    local_390 = 0;
    pppplVar21 = (longlong ****)&local_348;
    if (0xf < uVar24) {
      pppplVar21 = pppplVar6;
    }
    if (0x7fffffffffffffff < uVar25) goto LAB_1802d9b8f;
    if (uVar25 < 0x10) {
      local_398 = uVar25;
      local_390 = 0xf;
      local_3a8 = (undefined8 ****)*pppplVar21;
      ppplStack_3a0 = pppplVar21[1];
    }
    else {
      uVar16 = uVar25 | 0xf;
      uVar24 = 0x7fffffffffffffff;
      if ((uVar16 < 0x8000000000000000) && (uVar24 = uVar16, uVar16 < 0x16)) {
        uVar24 = 0x16;
      }
      *(undefined8 *)(puVar31 + -8) = 0x1802d8c85;
      local_3a8 = (undefined8 ****)FUN_18000fb70(uVar24 + 1);
      local_398 = uVar25;
      *(undefined8 *)(puVar31 + -8) = 0x1802d8ca0;
      local_390 = uVar24;
      FUN_180540530(local_3a8,pppplVar21,uVar25 + 1);
    }
  }
  pcVar34 = (char *)0x0;
  if ((local_448 == 0) || (pcVar29 = "true", *(char *)(local_448 + 0x50) == '\0')) {
    pcVar29 = "false";
  }
  *(undefined8 *)(puVar31 + -8) = 0x1802d8cd3;
  uVar10 = FUN_180066a20(&local_428,"var id = ",&local_3a8);
  *(undefined8 *)(puVar31 + -8) = 0x1802d8ce9;
  puVar17 = (ulonglong *)FUN_1800134a0(uVar10,"; var legacy = ",0xf);
  local_368 = *puVar17;
  uStack_360 = puVar17[1];
  local_358 = puVar17[2];
  uStack_350 = puVar17[3];
  puVar17[2] = 0;
  puVar17[3] = 0xf;
  *(undefined1 *)puVar17 = 0;
  *(undefined8 *)(puVar31 + -8) = 0x1802d8d27;
  sVar18 = strlen(pcVar29);
  *(undefined8 *)(puVar31 + -8) = 0x1802d8d36;
  puVar17 = (ulonglong *)FUN_1800134a0(&local_368,pcVar29,sVar18);
  local_3e8 = *puVar17;
  uStack_3e0 = puVar17[1];
  local_3d8 = (char *)puVar17[2];
  uStack_3d0 = puVar17[3];
  puVar17[2] = 0;
  puVar17[3] = 0xf;
  *(undefined1 *)puVar17 = 0;
  *(undefined8 *)(puVar31 + -8) = 0x1802d8d79;
  plVar15 = (longlong *)FUN_1800134a0(&local_3e8,&DAT_1806f8e8c,1);
  uVar10 = local_438;
  local_408 = (char ****)*plVar15;
  lStack_400 = plVar15[1];
  local_3f8 = (char *)plVar15[2];
  pcStack_3f0 = (char *)plVar15[3];
  plVar15[2] = 0;
  plVar15[3] = 0xf;
  *(undefined1 *)plVar15 = 0;
  *(undefined8 *)(puVar31 + -8) = 0x1802d8dbd;
  FUN_1800667a0(local_438,&local_408,&local_2e8);
  uVar28 = uVar37 | 0x3d;
  *(uint *)(puVar31 + 0x68) = uVar28;
  *(undefined8 *)(puVar31 + -8) = 0x1802d8dd1;
  FUN_18000f890(&local_408);
  *(undefined8 *)(puVar31 + -8) = 0x1802d8ddb;
  FUN_18000f890(&local_3e8);
  *(undefined8 *)(puVar31 + -8) = 0x1802d8de5;
  FUN_18000f890(&local_368);
  *(undefined8 *)(puVar31 + -8) = 0x1802d8def;
  FUN_18000f890(&local_428);
  if (*(char *)(param_1 + 1) == '\0') {
LAB_1802d902e:
    if (*(char *)((longlong)param_1 + 0x1b5) == '\0') goto LAB_1802d978c;
    uVar20 = param_1[0x39];
    *(undefined8 *)(puVar31 + -8) = 0x1802d904f;
    FUN_18004e4f0(local_308,uVar20);
    uVar20 = param_1[0x3a];
    *(undefined8 *)(puVar31 + -8) = 0x1802d9063;
    FUN_18004e4f0(&local_328,uVar20);
    *(undefined8 *)(puVar31 + -8) = 0x1802d907e;
    uVar20 = FUN_180066a20(local_2c8,
                           "var id = (function () { try { return InventoryAPI.CreateTempCombinedItemWithTool(\'"
                           ,local_308);
    *(undefined8 *)(puVar31 + -8) = 0x1802d9094;
    plVar15 = (longlong *)FUN_1800134a0(uVar20,&DAT_18075e268,4);
    local_408 = (char ****)*plVar15;
    lStack_400 = plVar15[1];
    local_3f8 = (char *)plVar15[2];
    pcStack_3f0 = (char *)plVar15[3];
    plVar15[2] = 0;
    plVar15[3] = 0xf;
    *(undefined1 *)plVar15 = 0;
    uVar37 = uVar28 | 0x200;
    *(uint *)(puVar31 + 0x68) = uVar37;
    *(undefined8 *)(puVar31 + -8) = 0x1802d90e0;
    uVar20 = FUN_1800667a0(local_248,&local_408,&local_328);
    *(undefined8 *)(puVar31 + -8) = 0x1802d90f6;
    puVar17 = (ulonglong *)FUN_1800134a0(uVar20,"\') || \'",7);
    local_3e8 = *puVar17;
    uStack_3e0 = puVar17[1];
    local_3d8 = (char *)puVar17[2];
    uStack_3d0 = puVar17[3];
    puVar17[2] = 0;
    puVar17[3] = 0xf;
    *(undefined1 *)puVar17 = 0;
    *(uint *)(puVar31 + 0x68) = uVar28 | 0x600;
    *(undefined8 *)(puVar31 + -8) = 0x1802d9144;
    uVar20 = FUN_1800667a0(local_268,&local_3e8,local_308);
    *(undefined8 *)(puVar31 + -8) = 0x1802d915a;
    puVar17 = (ulonglong *)FUN_1800134a0(uVar20,"\'; } catch (e) { return \'",0x19);
    local_368 = *puVar17;
    uStack_360 = puVar17[1];
    local_358 = puVar17[2];
    uStack_350 = puVar17[3];
    puVar17[2] = 0;
    puVar17[3] = 0xf;
    *(undefined1 *)puVar17 = 0;
    *(uint *)(puVar31 + 0x68) = uVar28 | 0xe00;
    *(undefined8 *)(puVar31 + -8) = 0x1802d91b2;
    uVar20 = FUN_1800667a0(local_288,&local_368,local_308);
    *(undefined8 *)(puVar31 + -8) = 0x1802d91c8;
    puVar11 = (undefined8 *)
              FUN_1800134a0(uVar20,"\'; } })(); var legacy = false; panel.Data().wlShown = null;",
                            0x3b);
    local_428 = (undefined8 ****)*puVar11;
    uStack_420 = puVar11[1];
    local_418 = (char *)puVar11[2];
    pcStack_410 = (char *)puVar11[3];
    puVar11[2] = 0;
    puVar11[3] = 0xf;
    *(undefined1 *)puVar11 = 0;
    *(uint *)(puVar31 + 0x68) = uVar28 | 0x1e00;
    *(undefined8 *)(puVar31 + -8) = 0x1802d9217;
    uVar20 = FUN_1800667a0(local_2a8,&local_428,&local_2e8);
    *(undefined8 *)(puVar31 + -8) = 0x1802d9222;
    FUN_18002ba60(uVar10,uVar20);
    *(undefined8 *)(puVar31 + -8) = 0x1802d922e;
    FUN_18000f890(local_2a8);
    if (0xf < pcStack_410) {
      uVar24 = (longlong)pcStack_410 + 1;
      ppppuVar13 = local_428;
      if (0xfff < uVar24) {
        ppppuVar13 = (undefined8 ****)local_428[-1];
        if (0x1f < (ulonglong)((longlong)local_428 + (-8 - (longlong)ppppuVar13)))
        goto LAB_1802d975b;
        uVar24 = (longlong)pcStack_410 + 0x28;
      }
      *(undefined8 *)(puVar31 + -8) = 0x1802d926a;
      thunk_FUN_1803d64e0(ppppuVar13,uVar24);
    }
    local_418 = (char *)0x0;
    pcStack_410 = (char *)0xf;
    local_428 = (undefined8 ****)((ulonglong)local_428 & 0xffffffffffffff00);
    *(undefined8 *)(puVar31 + -8) = 0x1802d9286;
    FUN_18000f890(local_288);
    if (0xf < uStack_350) {
      uVar25 = uStack_350 + 1;
      uVar24 = local_368;
      if (0xfff < uVar25) {
        uVar24 = *(ulonglong *)(local_368 - 8);
        if (0x1f < (local_368 - uVar24) - 8) goto LAB_1802d9762;
        uVar25 = uStack_350 + 0x28;
      }
      *(undefined8 *)(puVar31 + -8) = 0x1802d92c5;
      thunk_FUN_1803d64e0(uVar24,uVar25);
    }
    local_358 = 0;
    uStack_350 = 0xf;
    local_368 = local_368 & 0xffffffffffffff00;
    *(undefined8 *)(puVar31 + -8) = 0x1802d92e7;
    FUN_18000f890(local_268);
    if (0xf < uStack_3d0) {
      uVar25 = uStack_3d0 + 1;
      uVar24 = local_3e8;
      if (0xfff < uVar25) {
        uVar24 = *(ulonglong *)(local_3e8 - 8);
        if (0x1f < (local_3e8 - uVar24) - 8) goto LAB_1802d9769;
        uVar25 = uStack_3d0 + 0x28;
      }
      *(undefined8 *)(puVar31 + -8) = 0x1802d9323;
      thunk_FUN_1803d64e0(uVar24,uVar25);
    }
    local_3d8 = (char *)0x0;
    uStack_3d0 = 0xf;
    local_3e8 = local_3e8 & 0xffffffffffffff00;
    *(undefined8 *)(puVar31 + -8) = 0x1802d933f;
    FUN_18000f890(local_248);
    if ((char *)0xf < pcStack_3f0) {
      pcVar29 = pcStack_3f0 + 1;
      ppppcVar23 = local_408;
      if ((char *)0xfff < pcVar29) {
        ppppcVar23 = (char ****)local_408[-1];
        if ((char *)0x1f < (char *)((longlong)local_408 + (-8 - (longlong)ppppcVar23)))
        goto LAB_1802d9770;
        pcVar29 = pcStack_3f0 + 0x28;
      }
      *(undefined8 *)(puVar31 + -8) = 0x1802d937b;
      thunk_FUN_1803d64e0(ppppcVar23,pcVar29);
    }
    local_3f8 = (char *)0x0;
    pcStack_3f0 = (char *)0xf;
    local_408 = (char ****)((ulonglong)local_408 & 0xffffffffffffff00);
    *(undefined8 *)(puVar31 + -8) = 0x1802d9397;
    FUN_18000f890(local_2c8);
    uStack_3c0 = 0;
    local_3b8 = 0;
    local_3b0 = 0xf;
    local_3c8 = (undefined8 ****)0x0;
    if (*(char *)((longlong)param_1 + 0x1b9) == '\0') {
      *(undefined8 *)(puVar31 + -8) = 0x1802d93d0;
      FUN_180540170(local_128,0,0xc0);
      uVar2 = *(undefined4 *)(param_1 + 0x38);
      ppppuVar13 = &local_328;
      if (0xf < uStack_310) {
        ppppuVar13 = local_328;
      }
      *(double *)(puVar31 + 0x28) = (double)(*(float *)(param_1 + 0x3b) * DAT_1808acb08);
      *(undefined4 *)(puVar31 + 0x20) = uVar2;
      *(undefined8 *)(puVar31 + -8) = 0x1802d9424;
      snprintf(local_128,0xc0,
               "InventoryAPI.PreviewStickerInModelPanel(\'%s\', %d, panel); InventoryAPI.SetStickerScrapeLevel(panel, %.3f);"
               ,ppppuVar13);
      *(undefined8 *)(puVar31 + -8) = 0x1802d9430;
      sVar18 = strlen(local_128);
      *(undefined8 *)(puVar31 + -8) = 0x1802d9443;
      FUN_180029840(&local_3c8,local_128,sVar18);
    }
    local_408 = (char ****)0x0;
    lStack_400 = 0;
    *(undefined8 *)(puVar31 + -8) = 0x1802d9454;
    ppppcVar23 = (char ****)FUN_18000fb70(0xa0);
    uVar20 = s_if__panel_SetRotationLimits__pan_18075e560._8_8_;
    local_3f8 = (char *)0x9a;
    pcStack_3f0 = (char *)0x9f;
    *ppppcVar23 = (char ***)s_if__panel_SetRotationLimits__pan_18075e560._0_8_;
    ppppcVar23[1] = (char ***)uVar20;
    uVar20 = s_if__panel_SetRotationLimits__pan_18075e560._24_8_;
    ppppcVar23[2] = (char ***)s_if__panel_SetRotationLimits__pan_18075e560._16_8_;
    ppppcVar23[3] = (char ***)uVar20;
    uVar20 = s_if__panel_SetRotationLimits__pan_18075e560._40_8_;
    ppppcVar23[4] = (char ***)s_if__panel_SetRotationLimits__pan_18075e560._32_8_;
    ppppcVar23[5] = (char ***)uVar20;
    uVar20 = s_if__panel_SetRotationLimits__pan_18075e560._56_8_;
    ppppcVar23[6] = (char ***)s_if__panel_SetRotationLimits__pan_18075e560._48_8_;
    ppppcVar23[7] = (char ***)uVar20;
    uVar20 = s_if__panel_SetRotationLimits__pan_18075e560._72_8_;
    ppppcVar23[8] = (char ***)s_if__panel_SetRotationLimits__pan_18075e560._64_8_;
    ppppcVar23[9] = (char ***)uVar20;
    uVar20 = s_if__panel_SetRotationLimits__pan_18075e560._88_8_;
    ppppcVar23[10] = (char ***)s_if__panel_SetRotationLimits__pan_18075e560._80_8_;
    ppppcVar23[0xb] = (char ***)uVar20;
    uVar20 = s_if__panel_SetRotationLimits__pan_18075e560._104_8_;
    ppppcVar23[0xc] = (char ***)s_if__panel_SetRotationLimits__pan_18075e560._96_8_;
    ppppcVar23[0xd] = (char ***)uVar20;
    uVar20 = s_if__panel_SetRotationLimits__pan_18075e560._120_8_;
    ppppcVar23[0xe] = (char ***)s_if__panel_SetRotationLimits__pan_18075e560._112_8_;
    ppppcVar23[0xf] = (char ***)uVar20;
    pppcVar5 = (char ***)
               CONCAT62(s_if__panel_SetRotationLimits__pan_18075e560._138_6_,
                        s_if__panel_SetRotationLimits__pan_18075e560._136_2_);
    ppppcVar23[0x10] = (char ***)s_if__panel_SetRotationLimits__pan_18075e560._128_8_;
    ppppcVar23[0x11] = pppcVar5;
    uVar20 = s_if__panel_SetRotationLimits__pan_18075e560._146_8_;
    *(ulonglong *)((longlong)ppppcVar23 + 0x8a) =
         CONCAT26(s_if__panel_SetRotationLimits__pan_18075e560._144_2_,
                  s_if__panel_SetRotationLimits__pan_18075e560._138_6_);
    *(undefined8 *)((longlong)ppppcVar23 + 0x92) = uVar20;
    *(char *)((longlong)ppppcVar23 + 0x9a) = '\0';
    *(undefined8 *)(puVar31 + -8) = 0x1802d94f8;
    local_408 = ppppcVar23;
    param_1 = (undefined8 *)FUN_1802d7980(local_2c8,param_1 + 0x3c);
    local_428 = (undefined8 ****)0x0;
    uStack_420 = 0;
    local_418 = (char *)0x0;
    pcStack_410 = (char *)0x0;
    *(undefined8 *)(puVar31 + -8) = 0x1802d9514;
    local_428 = (undefined8 ****)FUN_18000fb70(0x130);
    local_418 = (char *)0x120;
    pcStack_410 = (char *)0x12f;
    lVar26 = 2;
    pcVar34 = 
    "\n        panel.Data().wlItem = id;\n        if (panel.RemoveItemModel) panel.RemoveItemModel();\n        (function () {\n            try {\n                if (!panel || !panel.IsValid() || panel.Data().wlItem !== id) return;\n                var def = InventoryAPI.GetItemDefinitionName(id);\n"
    ;
    ppppuVar13 = local_428;
    do {
      ppppuVar14 = ppppuVar13;
      pcVar29 = pcVar34;
      pppuVar4 = *(undefined8 ****)(pcVar29 + 8);
      *ppppuVar14 = *(undefined8 ****)pcVar29;
      ppppuVar14[1] = pppuVar4;
      pppuVar4 = *(undefined8 ****)(pcVar29 + 0x18);
      ppppuVar14[2] = *(undefined8 ****)(pcVar29 + 0x10);
      ppppuVar14[3] = pppuVar4;
      pppuVar4 = *(undefined8 ****)(pcVar29 + 0x28);
      ppppuVar14[4] = *(undefined8 ****)(pcVar29 + 0x20);
      ppppuVar14[5] = pppuVar4;
      pppuVar4 = *(undefined8 ****)(pcVar29 + 0x38);
      ppppuVar14[6] = *(undefined8 ****)(pcVar29 + 0x30);
      ppppuVar14[7] = pppuVar4;
      pppuVar4 = *(undefined8 ****)(pcVar29 + 0x48);
      ppppuVar14[8] = *(undefined8 ****)(pcVar29 + 0x40);
      ppppuVar14[9] = pppuVar4;
      pppuVar4 = *(undefined8 ****)(pcVar29 + 0x58);
      ppppuVar14[10] = *(undefined8 ****)(pcVar29 + 0x50);
      ppppuVar14[0xb] = pppuVar4;
      pppuVar4 = *(undefined8 ****)(pcVar29 + 0x68);
      ppppuVar14[0xc] = *(undefined8 ****)(pcVar29 + 0x60);
      ppppuVar14[0xd] = pppuVar4;
      pppuVar4 = *(undefined8 ****)(pcVar29 + 0x78);
      ppppuVar14[0xe] = *(undefined8 ****)(pcVar29 + 0x70);
      ppppuVar14[0xf] = pppuVar4;
      lVar26 = lVar26 + -1;
      pcVar34 = pcVar29 + 0x80;
      ppppuVar13 = ppppuVar14 + 0x10;
    } while (lVar26 != 0);
    pppuVar4 = *(undefined8 ****)(pcVar29 + 0x88);
    ppppuVar14[0x10] = *(undefined8 ****)(pcVar29 + 0x80);
    ppppuVar14[0x11] = pppuVar4;
    pppuVar4 = *(undefined8 ****)(pcVar29 + 0x98);
    ppppuVar14[0x12] = *(undefined8 ****)(pcVar29 + 0x90);
    ppppuVar14[0x13] = pppuVar4;
    *(undefined1 *)(local_428 + 0x24) = 0;
    uVar28 = uVar28 | 0x1e40;
    *(uint *)(puVar31 + 0x68) = uVar28;
    uVar20 = param_1[2];
    pcVar34 = 
    "\n                if (panel.SetActiveItem) panel.SetActiveItem(activeItem);\n                panel.SetItemItemId(id, \'\');\n                if (panel.SetItemLabel) panel.SetItemLabel(typeof label === \'string\' ? label : \'\');\n                panel.Data().wlShown = id;\n                panel.Data().wlDef = def;\n                panel.Data().wlLegacy = legacy;\n                if (panel.TransitionToCamera) {\n                    panel.TransitionToCamera(introCam, 0);\n                    panel.TransitionToCamera(finalCam, 0.75);\n                }\n                panel.Data().wlCamera = finalCam;\n                panel.Data().wlFinalCamera = finalCam;\n"
    ;
    if (0xf < (ulonglong)param_1[3]) {
      param_1 = (undefined8 *)*param_1;
    }
    *(undefined8 *)(puVar31 + -8) = 0x1802d95dc;
    FUN_1800134a0(&local_428,param_1,uVar20);
    *(undefined8 *)(puVar31 + -8) = 0x1802d95ea;
    FUN_1800134a0(&local_428,
                  "\n                if (panel.SetActiveItem) panel.SetActiveItem(activeItem);\n                panel.SetItemItemId(id, \'\');\n                if (panel.SetItemLabel) panel.SetItemLabel(typeof label === \'string\' ? label : \'\');\n                panel.Data().wlShown = id;\n                panel.Data().wlDef = def;\n                panel.Data().wlLegacy = legacy;\n                if (panel.TransitionToCamera) {\n                    panel.TransitionToCamera(introCam, 0);\n                    panel.TransitionToCamera(finalCam, 0.75);\n                }\n                panel.Data().wlCamera = finalCam;\n                panel.Data().wlFinalCamera = finalCam;\n"
                  ,0x285);
    *(undefined8 *)(puVar31 + -8) = 0x1802d95fc;
    FUN_1800134a0(&local_428,ppppcVar23,0x9a);
    ppppuVar13 = &local_3c8;
    if (0xf < local_3b0) {
      ppppuVar13 = local_3c8;
    }
    *(undefined8 *)(puVar31 + -8) = 0x1802d9617;
    FUN_1800134a0(&local_428,ppppuVar13,local_3b8);
    *(undefined8 *)(puVar31 + -8) = 0x1802d962d;
    FUN_1800134a0(&local_428,"\n            } catch (e) {}\n        })();\n",0x2a);
    ppppuVar13 = &local_428;
    if (0xf < pcStack_410) {
      ppppuVar13 = local_428;
    }
    *(undefined8 *)(puVar31 + -8) = 0x1802d9647;
    FUN_1800134a0(uVar10,ppppuVar13,local_418);
    if (0xf < pcStack_410) {
      uVar24 = (longlong)pcStack_410 + 1;
      ppppuVar13 = local_428;
      if (0xfff < uVar24) {
        ppppuVar13 = (undefined8 ****)local_428[-1];
        if (0x1f < (ulonglong)((longlong)local_428 + (-8 - (longlong)ppppuVar13)))
        goto LAB_1802d9777;
        uVar24 = (longlong)pcStack_410 + 0x28;
      }
      *(undefined8 *)(puVar31 + -8) = 0x1802d9683;
      thunk_FUN_1803d64e0(ppppuVar13,uVar24);
    }
    local_418 = (char *)0x0;
    pcStack_410 = (char *)0xf;
    local_428 = (undefined8 ****)((ulonglong)local_428 & 0xffffffffffffff00);
    *(undefined8 *)(puVar31 + -8) = 0x1802d96a1;
    FUN_18000f890(local_2c8);
    if ((char *)0xf < pcStack_3f0) {
      pcVar29 = pcStack_3f0 + 1;
      ppppcVar23 = local_408;
      if ((char *)0xfff < pcVar29) {
        ppppcVar23 = (char ****)local_408[-1];
        if ((char *)0x1f < (char *)((longlong)local_408 + (-8 - (longlong)ppppcVar23)))
        goto LAB_1802d977e;
        pcVar29 = pcStack_3f0 + 0x28;
      }
      *(undefined8 *)(puVar31 + -8) = 0x1802d96dd;
      thunk_FUN_1803d64e0(ppppcVar23,pcVar29);
    }
    if (0xf < local_3b0) {
      uVar24 = local_3b0 + 1;
      ppppuVar13 = local_3c8;
      if (0xfff < uVar24) {
        ppppuVar13 = (undefined8 ****)local_3c8[-1];
        if (0x1f < (ulonglong)((longlong)local_3c8 + (-8 - (longlong)ppppuVar13)))
        goto LAB_1802d9785;
        uVar24 = local_3b0 + 0x28;
      }
      *(undefined8 *)(puVar31 + -8) = 0x1802d9715;
      thunk_FUN_1803d64e0(ppppuVar13,uVar24);
    }
    local_3b8 = 0;
    local_3b0 = 0xf;
    local_3c8 = (undefined8 ****)((ulonglong)local_3c8 & 0xffffffffffffff00);
    *(undefined8 *)(puVar31 + -8) = 0x1802d9731;
    FUN_18000f890(&local_328);
    *(undefined8 *)(puVar31 + -8) = 0x1802d973e;
    FUN_18000f890(local_308);
    *(undefined8 *)(puVar31 + -8) = 0x1802d9748;
    FUN_18000f890(&local_3a8);
  }
  else {
    pcVar29 = "";
    if (*(char *)((longlong)param_1 + 0x1b5) != '\0') {
      pcVar29 = " | placing";
    }
    uVar2 = *(undefined4 *)(param_1 + 0x47);
    plVar15 = param_1 + 0x3c;
    if (0xf < (ulonglong)param_1[0x3f]) {
      plVar15 = (longlong *)*plVar15;
    }
    plVar22 = param_1 + 0x40;
    if (0xf < (ulonglong)param_1[0x43]) {
      plVar22 = (longlong *)*plVar22;
    }
    ppppuVar13 = &local_3a8;
    if (0xf < local_390) {
      ppppuVar13 = local_3a8;
    }
    if ((*(char *)(param_1 + 0x36) == '\0') || (*(char *)((longlong)param_1 + 0x6c) == '\0')) {
      pcVar19 = "off";
      if (*(char *)(param_1 + 0x36) != '\0') goto LAB_1802d8e7a;
      uVar35 = 0;
      uVar36 = 0;
      dVar39 = 0.0;
    }
    else {
      pcVar19 = "armed";
LAB_1802d8e7a:
      uVar35 = *(undefined4 *)(param_1 + 3);
      uVar36 = *(undefined4 *)(param_1 + 4);
      dVar39 = (double)*(float *)((longlong)param_1 + 0x1c);
    }
    *(char **)(puVar31 + 0x58) = pcVar29;
    *(undefined4 *)(puVar31 + 0x50) = uVar2;
    *(longlong **)(puVar31 + 0x48) = plVar15;
    *(longlong **)(puVar31 + 0x40) = plVar22;
    *(undefined8 *****)(puVar31 + 0x38) = ppppuVar13;
    *(char **)(puVar31 + 0x30) = pcVar19;
    *(double *)(puVar31 + 0x28) = dVar39;
    *(undefined4 *)(puVar31 + 0x20) = uVar36;
    uVar2 = *(undefined4 *)((longlong)param_1 + 0xc);
    uVar20 = *param_1;
    *(undefined8 *)(puVar31 + -8) = 0x1802d8ed4;
    FUN_1800e4040("gloves view %s | def %d | kit %d | seed %d | wear %.4f | custom colors %s | item %s | camera %s / %s | active item %d%s"
                  ,uVar20,uVar2,uVar35);
    pcVar29 = (char *)*param_1;
    local_3c8 = (undefined8 ****)0x0;
    uStack_3c0 = 0;
    local_3b8 = 0;
    local_3b0 = 0;
    *(undefined8 *)(puVar31 + -8) = 0x1802d8eee;
    sVar18 = strlen(pcVar29);
    *(undefined8 *)(puVar31 + -8) = 0x1802d8efd;
    FUN_1800133a0(&local_3c8,pcVar29,sVar18);
    *(undefined8 *)(puVar31 + -8) = 0x1802d8f15;
    uVar20 = FUN_180066ab0(local_308," try { $.Msg(\'[neverlose] gloves preview | ",&local_3c8);
    *(undefined8 *)(puVar31 + -8) = 0x1802d8f2b;
    plVar15 = (longlong *)
              FUN_1800134a0(uVar20,
                            " \' + panel.id + \' | item \' + id + \' | shown \' + panel.Data().wlShown + \' | camera \' + panel.Data().wlCamera); } catch (e) {}"
                            ,0x7c);
    local_328 = (undefined8 ****)*plVar15;
    lStack_320 = plVar15[1];
    local_318 = plVar15[2];
    uStack_310 = plVar15[3];
    plVar15[2] = 0;
    plVar15[3] = 0xf;
    *(undefined1 *)plVar15 = 0;
    uVar28 = uVar37 | 0x13d;
    *(uint *)(puVar31 + 0x68) = uVar28;
    ppppuVar13 = &local_328;
    if (0xf < uStack_310) {
      ppppuVar13 = local_328;
    }
    *(undefined8 *)(puVar31 + -8) = 0x1802d8f87;
    FUN_1800134a0(uVar10,ppppuVar13,local_318);
    if (uStack_310 < 0x10) {
LAB_1802d8fca:
      *(undefined8 *)(puVar31 + -8) = 0x1802d8fd6;
      FUN_18000f890(local_308);
      if (0xf < local_3b0) {
        uVar24 = local_3b0 + 1;
        ppppuVar13 = local_3c8;
        if (0xfff < uVar24) {
          ppppuVar13 = (undefined8 ****)local_3c8[-1];
          if (0x1f < (ulonglong)((longlong)local_3c8 + (-8 - (longlong)ppppuVar13)))
          goto LAB_1802d9754;
          uVar24 = local_3b0 + 0x28;
        }
        *(undefined8 *)(puVar31 + -8) = 0x1802d9012;
        thunk_FUN_1803d64e0(ppppuVar13,uVar24);
      }
      if (puVar31[0x61] != '\0') {
        *(undefined8 *)(puVar31 + -8) = 0x1802d902e;
        FUN_1800134a0(uVar10,
                      " try { panel.Data().wlShown = null; if (panel.SetItemModel) panel.SetItemModel(\'\'); } catch (e) {}"
                      ,0x62);
      }
      goto LAB_1802d902e;
    }
    uVar24 = uStack_310 + 1;
    ppppuVar13 = local_328;
    if (uVar24 < 0x1000) {
LAB_1802d8fc4:
      *(undefined8 *)(puVar31 + -8) = 0x1802d8fc9;
      thunk_FUN_1803d64e0(ppppuVar13,uVar24);
      goto LAB_1802d8fca;
    }
    ppppuVar13 = (undefined8 ****)local_328[-1];
    if ((ulonglong)((longlong)local_328 + (-8 - (longlong)ppppuVar13)) < 0x20) {
      uVar24 = uStack_310 + 0x28;
      goto LAB_1802d8fc4;
    }
    pcVar3 = (code *)swi(0x29);
    (*pcVar3)(5);
    puVar31 = puVar31 + 8;
LAB_1802d9754:
    pcVar3 = (code *)swi(0x29);
    (*pcVar3)(5);
    puVar31 = puVar31 + 8;
    uVar37 = uVar28;
LAB_1802d975b:
    pcVar3 = (code *)swi(0x29);
    (*pcVar3)(5);
    puVar31 = puVar31 + 8;
LAB_1802d9762:
    pcVar3 = (code *)swi(0x29);
    (*pcVar3)(5);
    puVar31 = puVar31 + 8;
LAB_1802d9769:
    pcVar3 = (code *)swi(0x29);
    (*pcVar3)(5);
    puVar31 = puVar31 + 8;
LAB_1802d9770:
    uVar28 = uVar37;
    pcVar3 = (code *)swi(0x29);
    (*pcVar3)(5);
    puVar31 = puVar31 + 8;
LAB_1802d9777:
    pcVar3 = (code *)swi(0x29);
    (*pcVar3)(5);
    puVar31 = puVar31 + 8;
LAB_1802d977e:
    pcVar3 = (code *)swi(0x29);
    (*pcVar3)(5);
    puVar31 = puVar31 + 8;
LAB_1802d9785:
    pcVar3 = (code *)swi(0x29);
    (*pcVar3)(5);
    puVar31 = puVar31 + 8;
LAB_1802d978c:
    *(undefined8 *)(puVar31 + -8) = 0x1802d97a0;
    FUN_180540170(local_228,0,0x100);
    uVar2 = *(undefined4 *)(param_1 + 0x48);
    if (*(char *)((longlong)param_1 + 0x1b4) == '\0') {
      *(undefined4 *)(puVar31 + 0x40) = *(undefined4 *)((longlong)param_1 + 0x254);
      *(undefined4 *)(puVar31 + 0x38) = *(undefined4 *)(param_1 + 0x4a);
      *(undefined4 *)(puVar31 + 0x30) = *(undefined4 *)((longlong)param_1 + 0x24c);
      *(undefined4 *)(puVar31 + 0x28) = *(undefined4 *)(param_1 + 0x49);
      *(undefined4 *)(puVar31 + 0x20) = *(undefined4 *)((longlong)param_1 + 0x244);
      *(undefined8 *)(puVar31 + -8) = 0x1802d9819;
      snprintf(local_228,0x100,
               "if (panel.SetAutoRotateAmount) { panel.SetRotationLimits(%d, %d); panel.SetAutoRotateAmount(%d, %d); if (panel.SetAutoRotatePeriod) panel.SetAutoRotatePeriod(%d, %d); }"
               ,uVar2);
    }
    else {
      *(undefined4 *)(puVar31 + 0x20) = *(undefined4 *)((longlong)param_1 + 0x244);
      *(undefined8 *)(puVar31 + -8) = 0x1802d97d4;
      snprintf(local_228,0x100,
               "if (panel.SetAutoRotateAmount) { panel.SetRotationLimits(%d, %d); panel.SetAutoRotateAmount(35, 10); panel.SetAutoRotatePeriod(15, 25); }"
               ,uVar2);
    }
    *(undefined8 *)(puVar31 + -8) = 0x1802d982e;
    FUN_1800134a0(uVar10,
                  "\n        var sameWeapon = false;\n        try { sameWeapon = !!panel.Data().wlShown && panel.Data().wlDef === InventoryAPI.GetItemDefinitionName(id) && panel.Data().wlLegacy === legacy; } catch (e) {}\n        if (panel.Data().wlShown === id || sameWeapon) {\n            try {\n                panel.Data().wlItem = id;\n                if (panel.Data().wlShown !== id) {\n                    if (panel.RemoveItemModel) panel.RemoveItemModel();\n                    panel.SetItemItemId(id, \'\');\n                    if (panel.SetItemLabel) panel.SetItemLabel(label);\n                    var currentCam = panel.Data().wlCamera;\n                    var finalNow = panel.Data().wlFinalCamera;\n                    if (finalNow) {\n                        if (currentCam === finalNow) {\n                            if (panel.SetCamera) panel.SetCamera(finalNow);\n                        } else if (panel.TransitionToCamera) {\n                            if (currentCam) panel.TransitionToCamera(currentCam, 0);\n                            panel.TransitionToCamera(finalNow, 0.75);\n                        }\n                        panel.Data().wlCamera = finalNow;\n                    }\n                }\n                panel.Data().wlShown = id;\n"
                  ,0x4d3);
    *(undefined8 *)(puVar31 + -8) = 0x1802d983a;
    sVar18 = strlen(local_228);
    *(undefined8 *)(puVar31 + -8) = 0x1802d984c;
    FUN_1800134a0(uVar10,local_228,sVar18);
    *(undefined8 *)(puVar31 + -8) = 0x1802d9861;
    FUN_1800134a0(uVar10,
                  "\n            } catch (e) {}\n            return;\n        }\n        panel.Data().wlShown = null;\n"
                  ,0x5f);
    uStack_3e0 = 0;
    uStack_3d0 = 0xf;
    local_3e8 = 0;
    local_408 = (char ****)0x0;
    lStack_400 = 0;
    *(undefined8 *)(puVar31 + -8) = 0x1802d9890;
    local_3f8 = pcVar34;
    pcStack_3f0 = pcVar34;
    local_3d8 = pcVar34;
    sVar18 = strlen(local_228);
    *(undefined8 *)(puVar31 + -8) = 0x1802d98a3;
    FUN_1800133a0(&local_408,local_228,sVar18);
    *(undefined8 *)(puVar31 + -8) = 0x1802d98b7;
    puVar11 = (undefined8 *)FUN_1802d7980(local_2c8,param_1 + 0x3c);
    local_428 = (undefined8 ****)0x0;
    uStack_420 = 0;
    *(undefined8 *)(puVar31 + -8) = 0x1802d98d3;
    local_418 = pcVar34;
    pcStack_410 = pcVar34;
    local_428 = (undefined8 ****)FUN_18000fb70(0x130);
    local_418 = (char *)0x120;
    pcStack_410 = (char *)0x12f;
    lVar26 = 2;
    pcVar34 = 
    "\n        panel.Data().wlItem = id;\n        if (panel.RemoveItemModel) panel.RemoveItemModel();\n        (function () {\n            try {\n                if (!panel || !panel.IsValid() || panel.Data().wlItem !== id) return;\n                var def = InventoryAPI.GetItemDefinitionName(id);\n"
    ;
    ppppuVar13 = local_428;
    do {
      ppppuVar14 = ppppuVar13;
      pcVar29 = pcVar34;
      pppuVar4 = *(undefined8 ****)(pcVar29 + 8);
      *ppppuVar14 = *(undefined8 ****)pcVar29;
      ppppuVar14[1] = pppuVar4;
      pppuVar4 = *(undefined8 ****)(pcVar29 + 0x18);
      ppppuVar14[2] = *(undefined8 ****)(pcVar29 + 0x10);
      ppppuVar14[3] = pppuVar4;
      pppuVar4 = *(undefined8 ****)(pcVar29 + 0x28);
      ppppuVar14[4] = *(undefined8 ****)(pcVar29 + 0x20);
      ppppuVar14[5] = pppuVar4;
      pppuVar4 = *(undefined8 ****)(pcVar29 + 0x38);
      ppppuVar14[6] = *(undefined8 ****)(pcVar29 + 0x30);
      ppppuVar14[7] = pppuVar4;
      pppuVar4 = *(undefined8 ****)(pcVar29 + 0x48);
      ppppuVar14[8] = *(undefined8 ****)(pcVar29 + 0x40);
      ppppuVar14[9] = pppuVar4;
      pppuVar4 = *(undefined8 ****)(pcVar29 + 0x58);
      ppppuVar14[10] = *(undefined8 ****)(pcVar29 + 0x50);
      ppppuVar14[0xb] = pppuVar4;
      pppuVar4 = *(undefined8 ****)(pcVar29 + 0x68);
      ppppuVar14[0xc] = *(undefined8 ****)(pcVar29 + 0x60);
      ppppuVar14[0xd] = pppuVar4;
      pppuVar4 = *(undefined8 ****)(pcVar29 + 0x78);
      ppppuVar14[0xe] = *(undefined8 ****)(pcVar29 + 0x70);
      ppppuVar14[0xf] = pppuVar4;
      lVar26 = lVar26 + -1;
      pcVar34 = pcVar29 + 0x80;
      ppppuVar13 = ppppuVar14 + 0x10;
    } while (lVar26 != 0);
    pppuVar4 = *(undefined8 ****)(pcVar29 + 0x88);
    ppppuVar14[0x10] = *(undefined8 ****)(pcVar29 + 0x80);
    ppppuVar14[0x11] = pppuVar4;
    pppuVar4 = *(undefined8 ****)(pcVar29 + 0x98);
    ppppuVar14[0x12] = *(undefined8 ****)(pcVar29 + 0x90);
    ppppuVar14[0x13] = pppuVar4;
    *(undefined1 *)(local_428 + 0x24) = 0;
    *(uint *)(puVar31 + 0x68) = uVar28 | 0x80;
    if ((ulonglong)puVar11[3] < 0x10) {
      puVar27 = puVar11;
    }
    else {
      puVar27 = (undefined8 *)*puVar11;
    }
    uVar20 = puVar11[2];
    *(undefined8 *)(puVar31 + -8) = 0x1802d998b;
    FUN_1800134a0(&local_428,puVar27,uVar20);
    *(undefined8 *)(puVar31 + -8) = 0x1802d99a1;
    FUN_1800134a0(&local_428,
                  "\n                if (panel.SetActiveItem) panel.SetActiveItem(activeItem);\n                panel.SetItemItemId(id, \'\');\n                if (panel.SetItemLabel) panel.SetItemLabel(typeof label === \'string\' ? label : \'\');\n                panel.Data().wlShown = id;\n                panel.Data().wlDef = def;\n                panel.Data().wlLegacy = legacy;\n                if (panel.TransitionToCamera) {\n                    panel.TransitionToCamera(introCam, 0);\n                    panel.TransitionToCamera(finalCam, 0.75);\n                }\n                panel.Data().wlCamera = finalCam;\n                panel.Data().wlFinalCamera = finalCam;\n"
                  ,0x285);
    ppppcVar23 = (char ****)&local_408;
    if ((char *)0xf < pcStack_3f0) {
      ppppcVar23 = local_408;
    }
    *(undefined8 *)(puVar31 + -8) = 0x1802d99bc;
    FUN_1800134a0(&local_428,ppppcVar23,local_3f8);
    *(undefined8 *)(puVar31 + -8) = 0x1802d99cc;
    FUN_1800134a0(&local_428,&local_3e8,0);
    *(undefined8 *)(puVar31 + -8) = 0x1802d99e2;
    FUN_1800134a0(&local_428,"\n            } catch (e) {}\n        })();\n",0x2a);
    ppppuVar13 = &local_428;
    if (0xf < pcStack_410) {
      ppppuVar13 = local_428;
    }
    *(undefined8 *)(puVar31 + -8) = 0x1802d99fc;
    FUN_1800134a0(uVar10,ppppuVar13,local_418);
    if (0xf < pcStack_410) {
      uVar24 = (longlong)pcStack_410 + 1;
      ppppuVar13 = local_428;
      if (uVar24 < 0x1000) {
LAB_1802d9a33:
        *(undefined8 *)(puVar31 + -8) = 0x1802d9a38;
        thunk_FUN_1803d64e0(ppppuVar13,uVar24);
        goto LAB_1802d9a38;
      }
      ppppuVar13 = (undefined8 ****)local_428[-1];
      if ((ulonglong)((longlong)local_428 + (-8 - (longlong)ppppuVar13)) < 0x20) {
        uVar24 = (longlong)pcStack_410 + 0x28;
        goto LAB_1802d9a33;
      }
      pcVar3 = (code *)swi(0x29);
      (*pcVar3)(5);
      puVar31 = puVar31 + 8;
LAB_1802d9b7a:
      pcVar3 = (code *)swi(0x29);
      (*pcVar3)(5);
      puVar31 = puVar31 + 8;
      goto LAB_1802d9b81;
    }
LAB_1802d9a38:
    local_418 = (char *)0x0;
    pcStack_410 = (char *)0xf;
    local_428 = (undefined8 ****)((ulonglong)local_428 & 0xffffffffffffff00);
    *(undefined8 *)(puVar31 + -8) = 0x1802d9a56;
    FUN_18000f890(local_2c8);
    if ((char *)0xf < pcStack_3f0) {
      pcVar34 = pcStack_3f0 + 1;
      ppppcVar23 = local_408;
      if ((char *)0xfff < pcVar34) {
        ppppcVar23 = (char ****)local_408[-1];
        if ((char *)0x1f < (char *)((longlong)local_408 + (-8 - (longlong)ppppcVar23)))
        goto LAB_1802d9b7a;
        pcVar34 = pcStack_3f0 + 0x28;
      }
      *(undefined8 *)(puVar31 + -8) = 0x1802d9a92;
      thunk_FUN_1803d64e0(ppppcVar23,pcVar34);
    }
    *(undefined8 *)(puVar31 + -8) = 0x1802d9a9c;
    FUN_18000f890(&local_3e8);
    if (0xf < local_390) {
      uVar24 = local_390 + 1;
      ppppuVar13 = local_3a8;
      if (0xfff < uVar24) {
        ppppuVar13 = (undefined8 ****)local_3a8[-1];
        if (0x1f < (ulonglong)((longlong)local_3a8 + (-8 - (longlong)ppppuVar13)))
        goto LAB_1802d9b81;
        uVar24 = local_390 + 0x28;
      }
      *(undefined8 *)(puVar31 + -8) = 0x1802d9ad8;
      thunk_FUN_1803d64e0(ppppuVar13,uVar24);
    }
    local_398 = 0;
    local_390 = 0xf;
    local_3a8 = (undefined8 ****)((ulonglong)local_3a8 & 0xffffffffffffff00);
  }
  if (uStack_2d0 < 0x10) goto LAB_1802d9b26;
  uVar24 = uStack_2d0 + 1;
  lVar26 = local_2e8;
  if (0xfff < uVar24) {
    lVar26 = *(longlong *)(local_2e8 + -8);
    if (0x1f < (local_2e8 - lVar26) - 8U) goto LAB_1802d9b88;
    uVar24 = uStack_2d0 + 0x28;
  }
  *(undefined8 *)(puVar31 + -8) = 0x1802d9b25;
  thunk_FUN_1803d64e0(lVar26,uVar24);
LAB_1802d9b26:
  *(undefined8 *)(puVar31 + -8) = 0x1802d9b2f;
  FUN_18000f890(&local_388);
  *(undefined8 *)(puVar31 + -8) = 0x1802d9b3c;
  FUN_18000f890(&local_348);
  *(undefined8 *)(puVar31 + -8) = 0x1802d9b4e;
  return uVar10;
}



/* ===== 1802d9bb0 FUN_1802d9bb0 ===== */

void FUN_1802d9bb0(longlong param_1)

{
  FUN_1800288b0(param_1 + 0x220);
  FUN_18000f890(param_1 + 0x200);
  FUN_18000f890(param_1 + 0x1e0);
  return;
}



/* ===== 1802d9bf0 FUN_1802d9bf0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1802d9bf0(longlong param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 ***pppuVar5;
  char *pcVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  undefined8 *puVar9;
  char *pcVar10;
  undefined8 ****ppppuVar11;
  undefined8 ****ppppuVar12;
  longlong lVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined8 *local_b0;
  undefined8 ****local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  ulonglong local_90;
  longlong local_88 [8];
  undefined1 local_48 [32];
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_d8;
  local_b8 = 0;
  local_b0 = param_2;
  uVar7 = FUN_180066a20(local_88,"var id = ",param_1);
  puVar8 = (undefined4 *)
           FUN_1800134a0(uVar7,"; var legacy = false; panel.Data().wlShown = null;",0x32);
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  uVar2 = puVar8[1];
  uVar3 = puVar8[2];
  uVar4 = puVar8[3];
  *(undefined4 *)param_2 = *puVar8;
  *(undefined4 *)((longlong)param_2 + 4) = uVar2;
  *(undefined4 *)(param_2 + 1) = uVar3;
  *(undefined4 *)((longlong)param_2 + 0xc) = uVar4;
  uVar2 = puVar8[5];
  uVar3 = puVar8[6];
  uVar4 = puVar8[7];
  *(undefined4 *)(param_2 + 2) = puVar8[4];
  *(undefined4 *)((longlong)param_2 + 0x14) = uVar2;
  *(undefined4 *)(param_2 + 3) = uVar3;
  *(undefined4 *)((longlong)param_2 + 0x1c) = uVar4;
  *(undefined8 *)(puVar8 + 4) = 0;
  *(undefined8 *)(puVar8 + 6) = 0xf;
  *(undefined1 *)puVar8 = 0;
  local_b8 = 3;
  FUN_18000f890(local_88);
  local_88[1] = 0;
  local_88[2] = 0;
  local_88[3] = 0xf;
  local_88[0] = 0;
  local_88[5] = 0;
  local_88[6] = 0;
  local_88[7] = 0xf;
  local_88[4] = 0;
  puVar9 = (undefined8 *)FUN_1802d7980(local_48,param_1 + 0x20);
  local_a8 = (undefined8 ****)0x0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_a8 = (undefined8 ****)FUN_18000fb70(0x130);
  local_98 = 0x120;
  local_90 = 0x12f;
  lVar13 = 2;
  pcVar6 = 
  "\n        panel.Data().wlItem = id;\n        if (panel.RemoveItemModel) panel.RemoveItemModel();\n        (function () {\n            try {\n                if (!panel || !panel.IsValid() || panel.Data().wlItem !== id) return;\n                var def = InventoryAPI.GetItemDefinitionName(id);\n"
  ;
  ppppuVar12 = local_a8;
  do {
    ppppuVar11 = ppppuVar12;
    pcVar10 = pcVar6;
    pppuVar5 = *(undefined8 ****)(pcVar10 + 8);
    *ppppuVar11 = *(undefined8 ****)pcVar10;
    ppppuVar11[1] = pppuVar5;
    pppuVar5 = *(undefined8 ****)(pcVar10 + 0x18);
    ppppuVar11[2] = *(undefined8 ****)(pcVar10 + 0x10);
    ppppuVar11[3] = pppuVar5;
    pppuVar5 = *(undefined8 ****)(pcVar10 + 0x28);
    ppppuVar11[4] = *(undefined8 ****)(pcVar10 + 0x20);
    ppppuVar11[5] = pppuVar5;
    pppuVar5 = *(undefined8 ****)(pcVar10 + 0x38);
    ppppuVar11[6] = *(undefined8 ****)(pcVar10 + 0x30);
    ppppuVar11[7] = pppuVar5;
    pppuVar5 = *(undefined8 ****)(pcVar10 + 0x48);
    ppppuVar11[8] = *(undefined8 ****)(pcVar10 + 0x40);
    ppppuVar11[9] = pppuVar5;
    pppuVar5 = *(undefined8 ****)(pcVar10 + 0x58);
    ppppuVar11[10] = *(undefined8 ****)(pcVar10 + 0x50);
    ppppuVar11[0xb] = pppuVar5;
    pppuVar5 = *(undefined8 ****)(pcVar10 + 0x68);
    ppppuVar11[0xc] = *(undefined8 ****)(pcVar10 + 0x60);
    ppppuVar11[0xd] = pppuVar5;
    pppuVar5 = *(undefined8 ****)(pcVar10 + 0x78);
    ppppuVar11[0xe] = *(undefined8 ****)(pcVar10 + 0x70);
    ppppuVar11[0xf] = pppuVar5;
    lVar13 = lVar13 + -1;
    pcVar6 = pcVar10 + 0x80;
    ppppuVar12 = ppppuVar11 + 0x10;
  } while (lVar13 != 0);
  uVar2 = *(undefined4 *)(pcVar10 + 0x84);
  uVar3 = *(undefined4 *)(pcVar10 + 0x88);
  uVar4 = *(undefined4 *)(pcVar10 + 0x8c);
  *(undefined4 *)(ppppuVar11 + 0x10) = *(undefined4 *)(pcVar10 + 0x80);
  *(undefined4 *)((longlong)ppppuVar11 + 0x84) = uVar2;
  *(undefined4 *)(ppppuVar11 + 0x11) = uVar3;
  *(undefined4 *)((longlong)ppppuVar11 + 0x8c) = uVar4;
  uVar2 = *(undefined4 *)(pcVar10 + 0x94);
  uVar3 = *(undefined4 *)(pcVar10 + 0x98);
  uVar4 = *(undefined4 *)(pcVar10 + 0x9c);
  *(undefined4 *)(ppppuVar11 + 0x12) = *(undefined4 *)(pcVar10 + 0x90);
  *(undefined4 *)((longlong)ppppuVar11 + 0x94) = uVar2;
  *(undefined4 *)(ppppuVar11 + 0x13) = uVar3;
  *(undefined4 *)((longlong)ppppuVar11 + 0x9c) = uVar4;
  *(undefined1 *)(local_a8 + 0x24) = 0;
  local_b8 = 7;
  if ((ulonglong)puVar9[3] < 0x10) {
    puVar14 = puVar9;
  }
  else {
    puVar14 = (undefined8 *)*puVar9;
  }
  FUN_1800134a0(&local_a8,puVar14,puVar9[2]);
  FUN_1800134a0(&local_a8,
                "\n                if (panel.SetActiveItem) panel.SetActiveItem(activeItem);\n                panel.SetItemItemId(id, \'\');\n                if (panel.SetItemLabel) panel.SetItemLabel(typeof label === \'string\' ? label : \'\');\n                panel.Data().wlShown = id;\n                panel.Data().wlDef = def;\n                panel.Data().wlLegacy = legacy;\n                if (panel.TransitionToCamera) {\n                    panel.TransitionToCamera(introCam, 0);\n                    panel.TransitionToCamera(finalCam, 0.75);\n                }\n                panel.Data().wlCamera = finalCam;\n                panel.Data().wlFinalCamera = finalCam;\n"
                ,0x285);
  FUN_1800134a0(&local_a8,local_88 + 4,0);
  FUN_1800134a0(&local_a8,local_88,0);
  FUN_1800134a0(&local_a8,"\n            } catch (e) {}\n        })();\n",0x2a);
  ppppuVar12 = &local_a8;
  if (0xf < local_90) {
    ppppuVar12 = local_a8;
  }
  FUN_1800134a0(param_2,ppppuVar12,local_98);
  if (0xf < local_90) {
    uVar15 = local_90 + 1;
    ppppuVar12 = local_a8;
    if (uVar15 < 0x1000) {
LAB_1802d9e27:
      thunk_FUN_1803d64e0(ppppuVar12,uVar15);
      goto LAB_1802d9e2c;
    }
    ppppuVar12 = (undefined8 ****)local_a8[-1];
    if ((ulonglong)((longlong)local_a8 + (-8 - (longlong)ppppuVar12)) < 0x20) {
      uVar15 = local_90 + 0x28;
      goto LAB_1802d9e27;
    }
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
LAB_1802d9ede:
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
LAB_1802d9ee5:
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    pcVar1 = (code *)swi(3);
    puVar9 = (undefined8 *)(*pcVar1)();
    return puVar9;
  }
LAB_1802d9e2c:
  local_98 = 0;
  local_90 = 0xf;
  local_a8 = (undefined8 ****)((ulonglong)local_a8 & 0xffffffffffffff00);
  FUN_18000f890(local_48);
  if (0xf < (ulonglong)local_88[7]) {
    uVar15 = local_88[7] + 1;
    lVar13 = local_88[4];
    if (0xfff < uVar15) {
      lVar13 = *(longlong *)(local_88[4] + -8);
      if (0x1f < (local_88[4] - lVar13) - 8U) goto LAB_1802d9ede;
      uVar15 = local_88[7] + 0x28;
    }
    thunk_FUN_1803d64e0(lVar13,uVar15);
  }
  if (0xf < (ulonglong)local_88[3]) {
    uVar15 = local_88[3] + 1;
    lVar13 = local_88[0];
    if (0xfff < uVar15) {
      lVar13 = *(longlong *)(local_88[0] + -8);
      if (0x1f < (local_88[0] - lVar13) - 8U) goto LAB_1802d9ee5;
      uVar15 = local_88[3] + 0x28;
    }
    thunk_FUN_1803d64e0(lVar13,uVar15);
  }
  return param_2;
}



/* ===== 1802d9ef0 FUN_1802d9ef0 ===== */

void FUN_1802d9ef0(longlong param_1)

{
  FUN_1800288b0(param_1 + 0x60);
  FUN_18000f890(param_1 + 0x40);
  FUN_18000f890(param_1 + 0x20);
  FUN_18000f890(param_1);
  return;
}



/* ===== 1802d9f30 FUN_1802d9f30 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint * FUN_1802d9f30(uint *param_1,uint param_2,uint param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  ulonglong *puVar5;
  size_t sVar6;
  uint *_Buf2;
  ulonglong uVar7;
  ulonglong *puVar8;
  uint *puVar9;
  uint uVar10;
  char *_Str;
  undefined1 *puVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  int iVar14;
  uint uVar15;
  char cVar16;
  bool bVar17;
  undefined1 auStack_e8 [8];
  undefined1 auStack_e0 [24];
  uint local_c8;
  uint local_c4;
  uint *local_c0;
  undefined8 local_b8;
  ulonglong local_b0;
  undefined2 local_a8;
  ulonglong local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  ulonglong local_80 [4];
  undefined1 local_60 [32];
  ulonglong local_40;
  
  local_40 = DAT_180919500 ^ (ulonglong)auStack_e8;
  local_c8 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  uStack_98 = 0;
  local_90 = 0;
  local_88 = 0xf;
  local_a0 = 0;
  local_c4 = param_2;
  local_c0 = param_1;
  if (param_3 == 0) {
    lVar4 = 0;
    param_3 = 0x13ad - (param_2 != 0);
  }
  else {
    lVar4 = FUN_18027fb40();
  }
  uVar7 = 0;
  do {
    iVar14 = -1;
    if ((&DAT_18061bfc8)[uVar7] == 0x26) goto LAB_1802d9fed;
    uVar7 = uVar7 + 1;
  } while (uVar7 < 3);
  uVar7 = 0xffffffff;
LAB_1802d9fed:
  if ((local_c4 < 2) && (-1 < (int)uVar7)) {
    uVar15 = *(uint *)(&DAT_180cec808 + ((longlong)(int)local_c4 * 3 + (longlong)(int)uVar7) * 4);
  }
  else {
    uVar15 = 0;
  }
  local_b8 = CONCAT44(uVar15,param_3);
  if ((lVar4 == 0) || (*(char *)(lVar4 + 0xd0) == '\0')) {
    cVar16 = '\0';
  }
  else {
    cVar16 = '\x01';
  }
  local_a8 = CONCAT11(local_a8._1_1_,cVar16);
  if (lVar4 == 0) {
    _Str = "agents/models/tm_phoenix/tm_phoenix.vmdl";
    if (local_c4 == 0) {
      _Str = "agents/models/ctm_sas/ctm_sas.vmdl";
    }
    local_80[0] = 0;
    local_80[1] = 0;
    local_80[2] = 0;
    local_80[3] = 0;
    sVar6 = strlen(_Str);
    FUN_1800133a0(local_80,_Str,sVar6);
    puVar5 = local_80;
    uVar10 = 2;
  }
  else {
    puVar5 = (ulonglong *)FUN_180024b50(local_60,lVar4 + 0x48);
    uVar10 = 1;
  }
  uVar7 = 0;
  local_c8 = uVar10;
  if (&local_a0 != puVar5) {
    if (puVar5[3] < 0x10) {
      puVar8 = puVar5;
    }
    else {
      puVar8 = (ulonglong *)*puVar5;
    }
    FUN_180029840(&local_a0,puVar8,puVar5[2]);
    uVar7 = local_b0;
    uVar15 = local_b8._4_4_;
    cVar16 = (char)local_a8;
    param_3 = (uint)local_b8;
  }
  if (((uVar10 & 2) == 0) || (uVar10 = uVar10 & 0xfffffffd, local_80[3] < 0x10)) {
LAB_1802da10c:
    if ((uVar10 & 1) != 0) {
      FUN_18000f890(local_60);
    }
    puVar11 = auStack_e8;
    if (cVar16 != '\0') {
      puVar11 = auStack_e8;
      if (49999 < (int)param_3) {
        iVar3 = FUN_1804e4d70(&DAT_1809f36c0);
        if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1804e4a90(5);
        }
        puVar13 = DAT_180cfc7c8;
        if (DAT_1809f370c == 0x7fffffff) {
          DAT_1809f370c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
          FUN_1804e4a90(6);
        }
        for (; puVar11 = auStack_e8, puVar13 != DAT_180cfc7d0; puVar13 = puVar13 + 1) {
          puVar9 = (uint *)*puVar13;
          puVar11 = auStack_e8;
          if (*puVar9 == param_3) goto LAB_1802da1be;
        }
LAB_1802da173:
        *(undefined8 *)(puVar11 + -8) = 0x1802da17f;
        FUN_1804e4e90(&DAT_1809f36c0);
      }
      local_b0 = 0xf0000000000013ad;
      *param_1 = param_3;
      param_1[1] = uVar15;
      param_1[2] = 0x13ad;
      param_1[3] = 0xf0000000;
      *(char *)(param_1 + 4) = cVar16;
      *(undefined1 *)((longlong)param_1 + 0x11) = local_a8._1_1_;
      *(ulonglong *)(param_1 + 6) = local_a0;
      *(undefined8 *)(param_1 + 8) = uStack_98;
      goto LAB_1802da346;
    }
  }
  else {
    puVar9 = (uint *)(local_80[3] + 1);
    uVar12 = local_80[0];
    if (puVar9 < (uint *)0x1000) {
LAB_1802da106:
      thunk_FUN_1803d64e0(uVar12,puVar9);
      goto LAB_1802da10c;
    }
    uVar12 = *(ulonglong *)(local_80[0] - 8);
    if ((local_80[0] - uVar12) - 8 < 0x20) {
      puVar9 = (uint *)(local_80[3] + 0x28);
      goto LAB_1802da106;
    }
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar11 = auStack_e0;
LAB_1802da1be:
    uVar12 = (((((ulonglong)(param_3 & 0xff) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
               local_b8 >> 8 & 0xff) * 0x100000001b3 ^ local_b8 >> 0x10 & 0xff) * 0x100000001b3 ^
             local_b8 >> 0x18 & 0xff) * 0x100000001b3 & DAT_180ca12b0;
    lVar4 = *(longlong *)(DAT_180ca1298 + 8 + uVar12 * 0x10);
    if (lVar4 == DAT_180ca1288) {
LAB_1802da240:
      lVar4 = 0;
    }
    else {
      uVar10 = *(uint *)(lVar4 + 0x10);
      while (param_3 != uVar10) {
        if (lVar4 == *(longlong *)(DAT_180ca1298 + uVar12 * 0x10)) goto LAB_1802da240;
        lVar4 = *(longlong *)(lVar4 + 8);
        uVar10 = *(uint *)(lVar4 + 0x10);
      }
    }
    if ((lVar4 == 0) || (lVar4 == DAT_180ca1288)) goto LAB_1802da173;
    _Buf2 = puVar9 + 0x36;
    puVar13 = (undefined8 *)(lVar4 + 0x18);
    if (0xf < *(ulonglong *)(puVar9 + 0x3c)) {
      _Buf2 = *(uint **)_Buf2;
    }
    sVar6 = *(size_t *)(lVar4 + 0x28);
    if (0xf < *(ulonglong *)(lVar4 + 0x30)) {
      puVar13 = (undefined8 *)*puVar13;
    }
    if (sVar6 != *(size_t *)(puVar9 + 0x3a)) goto LAB_1802da173;
    if (sVar6 != 0) {
      *(undefined8 *)(puVar11 + -8) = 0x1802da297;
      iVar3 = memcmp(puVar13,_Buf2,sVar6);
      if (iVar3 != 0) goto LAB_1802da173;
    }
    *(undefined8 *)(puVar11 + -8) = 0x1802da2ab;
    FUN_1804e4e90(&DAT_1809f36c0);
  }
  if (uVar15 == param_3) {
    uVar7 = 0;
    do {
      if ((&DAT_18061bfc8)[uVar7] == 0x26) {
        iVar14 = (int)uVar7;
        break;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < 3);
    if ((local_c4 < 2) && (-1 < iVar14)) {
      uVar7 = *(ulonglong *)(&DAT_180cec7a8 + ((longlong)(int)local_c4 * 3 + (longlong)iVar14) * 8);
    }
    else {
      uVar7 = 0;
    }
    local_b0 = uVar7;
  }
  bVar17 = uVar7 != 0;
  local_a8 = CONCAT11(bVar17,(char)local_a8);
  if (uVar7 == 0) {
    uVar7 = (ulonglong)(param_3 & 0xffff) | 0xf000000000000000;
    local_b0 = uVar7;
  }
  *param_1 = param_3;
  param_1[1] = uVar15;
  *(ulonglong *)(param_1 + 2) = uVar7;
  *(char *)(param_1 + 4) = cVar16;
  *(bool *)((longlong)param_1 + 0x11) = bVar17;
  *(ulonglong *)(param_1 + 6) = local_a0;
  *(undefined8 *)(param_1 + 8) = uStack_98;
LAB_1802da346:
  uVar2 = local_88;
  *(undefined8 *)(param_1 + 10) = local_90;
  local_a0 = local_a0 & 0xffffffffffffff00;
  local_88 = 0xf;
  local_90 = 0;
  *(undefined8 *)(param_1 + 0xc) = uVar2;
  *(undefined8 *)(puVar11 + -8) = 0x1802da373;
  FUN_18000f890(&local_a0);
  *(undefined8 *)(puVar11 + -8) = 0x1802da382;
  return param_1;
}



/* ===== 1802da3c0 FUN_1802da3c0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1802da3c0(undefined8 *param_1,undefined4 param_2,longlong param_3,longlong param_4)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  undefined8 uVar11;
  undefined8 ***pppuVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  undefined1 *puVar15;
  undefined1 auStack_138 [8];
  undefined1 auStack_130 [32];
  undefined8 *local_110;
  undefined8 ***local_108 [2];
  size_t local_f8;
  ulonglong local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined1 local_c8 [32];
  undefined1 local_a8 [32];
  undefined1 local_88 [32];
  undefined1 local_68 [32];
  ulonglong local_48;
  
  puVar15 = auStack_138;
  local_48 = DAT_180919500 ^ (ulonglong)auStack_138;
  puVar13 = param_1;
  local_110 = param_1;
  if (*(char *)(param_3 + 0x1a0) == '\0') {
LAB_1802da651:
    if (param_4 == 0) {
      *puVar13 = 0;
      puVar13[1] = 0;
      puVar13[2] = 2;
      puVar13[3] = 0xf;
      *(undefined2 *)puVar13 = DAT_18075eca4;
      *(undefined1 *)((longlong)puVar13 + 2) = 0;
    }
    else {
      *(undefined8 *)(puVar15 + -8) = 0x1802da662;
      uVar9 = FUN_18004e4f0(local_a8,param_4);
      *(undefined8 *)(puVar15 + -8) = 0x1802da676;
      uVar9 = FUN_180066ab0(local_88,&DAT_1806e17c8,uVar9);
      *(undefined8 *)(puVar15 + -8) = 0x1802da68c;
      puVar10 = (undefined4 *)FUN_1800134a0(uVar9,&DAT_1806e17c8,1);
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      uVar2 = puVar10[1];
      uVar3 = puVar10[2];
      uVar4 = puVar10[3];
      *(undefined4 *)param_1 = *puVar10;
      *(undefined4 *)((longlong)param_1 + 4) = uVar2;
      *(undefined4 *)(param_1 + 1) = uVar3;
      *(undefined4 *)((longlong)param_1 + 0xc) = uVar4;
      uVar2 = puVar10[5];
      uVar3 = puVar10[6];
      uVar4 = puVar10[7];
      *(undefined4 *)(param_1 + 2) = puVar10[4];
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar2;
      *(undefined4 *)(param_1 + 3) = uVar3;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar4;
      *(undefined8 *)(puVar10 + 4) = 0;
      *(undefined8 *)(puVar10 + 6) = 0xf;
      *(undefined1 *)puVar10 = 0;
      *(undefined8 *)(puVar15 + -8) = 0x1802da6c0;
      FUN_18000f890(local_88);
      *(undefined8 *)(puVar15 + -8) = 0x1802da6ca;
      FUN_18000f890(local_a8);
    }
  }
  else {
    FUN_1800dff20(local_108);
    if (*(char *)(param_3 + 0x5c) != '\0') {
      puVar13 = &DAT_1809f72c0;
      if (0xf < DAT_1809f72d8) {
        puVar13 = DAT_1809f72c0;
      }
      pppuVar12 = local_108;
      if (0xf < local_f0) {
        pppuVar12 = local_108[0];
      }
      if (local_f8 == DAT_1809f72d0) {
        if (local_f8 != 0) {
          iVar7 = memcmp(pppuVar12,puVar13,local_f8);
          if (iVar7 != 0) goto LAB_1802da459;
        }
      }
      else {
LAB_1802da459:
        pppuVar12 = local_108;
        if (0xf < local_f0) {
          pppuVar12 = local_108[0];
        }
        FUN_180029840(&DAT_1809f72c0,pppuVar12,local_f8);
        FUN_180298cb0(param_2,param_3);
      }
    }
    lVar8 = FUN_1800e0b60(param_2,param_3);
    if (lVar8 != 0) {
      uVar9 = FUN_18004e4f0(local_c8,lVar8);
      uVar9 = FUN_180066ab0(&local_e8,&DAT_1806e17c8,uVar9);
      puVar10 = (undefined4 *)FUN_1800134a0(uVar9,&DAT_1806e17c8,1);
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      uVar2 = puVar10[1];
      uVar3 = puVar10[2];
      uVar4 = puVar10[3];
      *(undefined4 *)param_1 = *puVar10;
      *(undefined4 *)((longlong)param_1 + 4) = uVar2;
      *(undefined4 *)(param_1 + 1) = uVar3;
      *(undefined4 *)((longlong)param_1 + 0xc) = uVar4;
      uVar2 = puVar10[5];
      uVar3 = puVar10[6];
      uVar4 = puVar10[7];
      *(undefined4 *)(param_1 + 2) = puVar10[4];
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar2;
      *(undefined4 *)(param_1 + 3) = uVar3;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar4;
      *(undefined8 *)(puVar10 + 4) = 0;
      *(undefined8 *)(puVar10 + 6) = 0xf;
      *(undefined1 *)puVar10 = 0;
      FUN_18000f890(&local_e8);
      FUN_18000f890(local_c8);
      FUN_18000f890(local_108);
      puVar15 = auStack_138;
      goto LAB_1802da6f0;
    }
    uVar9 = FUN_18003a390(local_88,*(undefined4 *)(param_3 + 8));
    uVar11 = FUN_18003a390(local_a8,param_2);
    uVar11 = FUN_180066ab0(local_68,"InventoryAPI.GetFauxItemIDFromDefAndPaintIndex(",uVar11);
    puVar10 = (undefined4 *)FUN_1800134a0(uVar11,&DAT_1806f0594,2);
    local_e8 = *puVar10;
    uStack_e4 = puVar10[1];
    uStack_e0 = puVar10[2];
    uStack_dc = puVar10[3];
    local_d8 = puVar10[4];
    uStack_d4 = puVar10[5];
    uStack_d0 = puVar10[6];
    uStack_cc = puVar10[7];
    *(undefined8 *)(puVar10 + 4) = 0;
    *(undefined8 *)(puVar10 + 6) = 0xf;
    *(undefined1 *)puVar10 = 0;
    uVar9 = FUN_180066820(local_c8,&local_e8,uVar9);
    puVar10 = (undefined4 *)FUN_1800134a0(uVar9,&DAT_1806e1ac0,1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    uVar2 = puVar10[1];
    uVar3 = puVar10[2];
    uVar4 = puVar10[3];
    *(undefined4 *)param_1 = *puVar10;
    *(undefined4 *)((longlong)param_1 + 4) = uVar2;
    *(undefined4 *)(param_1 + 1) = uVar3;
    *(undefined4 *)((longlong)param_1 + 0xc) = uVar4;
    uVar2 = puVar10[5];
    uVar3 = puVar10[6];
    uVar4 = puVar10[7];
    *(undefined4 *)(param_1 + 2) = puVar10[4];
    *(undefined4 *)((longlong)param_1 + 0x14) = uVar2;
    *(undefined4 *)(param_1 + 3) = uVar3;
    *(undefined4 *)((longlong)param_1 + 0x1c) = uVar4;
    *(undefined8 *)(puVar10 + 4) = 0;
    *(undefined8 *)(puVar10 + 6) = 0xf;
    *(undefined1 *)puVar10 = 0;
    FUN_18000f890(local_c8);
    uVar6 = CONCAT44(uStack_cc,uStack_d0);
    if (0xf < uVar6) {
      uVar14 = uVar6 + 1;
      lVar5 = CONCAT44(uStack_e4,local_e8);
      lVar8 = lVar5;
      if (0xfff < uVar14) {
        lVar8 = *(longlong *)(lVar5 + -8);
        if (0x1f < (lVar5 - lVar8) - 8U) {
          puVar13 = (undefined8 *)&DAT_00000005;
          pcVar1 = (code *)swi(0x29);
          (*pcVar1)();
          puVar15 = auStack_130;
          goto LAB_1802da651;
        }
        uVar14 = uVar6 + 0x28;
      }
      thunk_FUN_1803d64e0(lVar8,uVar14);
    }
    FUN_18000f890(local_68);
    FUN_18000f890(local_a8);
    FUN_18000f890(local_88);
    FUN_18000f890(local_108);
    puVar15 = auStack_138;
  }
LAB_1802da6f0:
  *(undefined8 *)(puVar15 + -8) = 0x1802da6ff;
  return param_1;
}



/* ===== 1802da710 FUN_1802da710 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802da710(int param_1,undefined4 param_2,undefined8 *param_3,int param_4)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int *piVar5;
  int iVar6;
  size_t sVar7;
  undefined8 *puVar8;
  int *piVar9;
  undefined8 *puVar10;
  undefined1 *puVar11;
  undefined8 uVar12;
  undefined4 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  ulonglong *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  ulonglong uVar20;
  longlong lVar21;
  ulonglong uVar22;
  uint uVar23;
  undefined1 *puVar24;
  int iVar25;
  int *piVar26;
  char cVar27;
  undefined4 uVar28;
  uint uVar29;
  char *pcVar30;
  longlong lVar31;
  int iVar32;
  bool bVar33;
  undefined1 auStack_ab8 [8];
  undefined1 auStack_ab0 [24];
  longlong local_a98;
  undefined4 local_a74;
  undefined4 local_a6c;
  undefined8 *local_a50;
  char *local_a48;
  ulonglong local_a40;
  undefined8 local_a38 [52];
  undefined1 local_898;
  undefined8 local_890 [53];
  undefined4 local_6e8;
  undefined4 local_6e4;
  undefined8 local_6e0;
  undefined1 local_6d8;
  undefined1 local_6d7;
  undefined1 local_6d0 [32];
  ulonglong local_6b0 [5];
  ulonglong uStack_688;
  ulonglong local_680;
  ulonglong uStack_678;
  longlong local_670 [4];
  undefined4 local_650;
  undefined4 uStack_64c;
  undefined4 uStack_648;
  undefined4 uStack_644;
  undefined4 local_640;
  undefined4 uStack_63c;
  undefined4 uStack_638;
  undefined4 uStack_634;
  undefined4 local_630;
  undefined4 uStack_62c;
  undefined4 uStack_628;
  undefined4 uStack_624;
  undefined4 local_620;
  undefined4 uStack_61c;
  undefined4 uStack_618;
  undefined4 uStack_614;
  undefined4 local_610;
  undefined4 uStack_60c;
  undefined4 uStack_608;
  undefined4 uStack_604;
  undefined4 local_600;
  undefined4 uStack_5fc;
  undefined4 uStack_5f8;
  undefined4 uStack_5f4;
  undefined4 local_5f0;
  undefined4 uStack_5ec;
  undefined4 uStack_5e8;
  undefined4 uStack_5e4;
  undefined4 local_5e0;
  undefined4 uStack_5dc;
  undefined4 uStack_5d8;
  undefined4 uStack_5d4;
  undefined4 local_5d0;
  undefined4 uStack_5cc;
  undefined4 uStack_5c8;
  undefined4 uStack_5c4;
  undefined4 local_5c0;
  undefined4 uStack_5bc;
  undefined4 uStack_5b8;
  undefined4 uStack_5b4;
  undefined1 local_5b0 [32];
  undefined1 local_590 [32];
  undefined1 local_570 [32];
  undefined1 local_550 [32];
  undefined1 local_530 [32];
  undefined1 local_510 [32];
  undefined1 local_4f0 [32];
  undefined1 local_4d0 [32];
  undefined1 local_4b0 [32];
  undefined1 local_490 [32];
  undefined1 local_470 [32];
  undefined1 local_450 [32];
  undefined1 local_430 [40];
  undefined8 local_408;
  uint uStack_400;
  undefined4 local_3f8;
  undefined4 uStack_3f4;
  undefined8 uStack_3f0;
  undefined1 local_3e8;
  undefined1 uStack_3e7;
  undefined1 auStack_3e0 [32];
  undefined4 uStack_3c0;
  undefined8 auStack_3bc [42];
  undefined1 local_268;
  int local_218;
  undefined8 local_214 [52];
  undefined8 local_70;
  undefined1 local_68;
  ulonglong local_58;
  
  local_58 = DAT_180919500 ^ (ulonglong)auStack_ab8;
  local_a74 = 0;
  bVar33 = param_1 != 0;
  pcVar30 = "agent_t";
  if (param_1 == 0) {
    pcVar30 = "agent";
  }
  if ((param_4 < 0) && (param_4 = DAT_1809214b0, param_1 == 0)) {
    param_4 = DAT_1809214ac;
  }
  local_a6c = param_2;
  local_a50 = param_3;
  local_a48 = pcVar30;
  FUN_1802d9f30(&local_6e8,bVar33,param_4);
  local_6b0[0] = 0;
  local_6b0[1] = 0;
  local_6b0[2] = 0;
  local_6b0[3] = 0;
  local_a40 = (ulonglong)(param_1 != 0);
  sVar7 = strlen(
                "\n        panel = $.CreatePanel(\'MapPlayerPreviewPanel\', frame, \'$PANEL$\', {\n            \'require-composition-layer\': true,\n            \'composition-layer-texture-name\': \'$LAYER$\',\n            map: \'ui/buy_menu\',\n            player: true,\n            camera: \'cam_loadoutmenu_ct\',\n            \'transparent-background\': true,\n            animgraphcharactermode: \'buy-menu\',\n            playername: \'vanity_character\',\n            playermodel: \'agents/models/ctm_fbi/ctm_fbi.vmdl\',\n            \'disable-depth-of-field\': true,\n            mouse_rotate: false,\n            sync_spawn_addons: true,\n            hide_while_waiting_for_composite_materials: false,\n            hittest: false,\n            style: \'width: 100%; height: 100%;\'\n        });\n        if (panel) {\n            if (panel.SetPlayerModel) panel.SetPlayerModel(\'models/player/ctm_sas.vmdl\');\n            if (panel.EquipPlayerWithItem) panel.EquipPlayerWithItem(\'17293822569102704680\');\n            if (panel.SetHideStaticGeometry) panel.SetHideStaticGeometry(true);\n            if (panel.SetHideParticles) panel.SetHideParticles(true);\n            if (panel.SetTransparentBackground) panel.SetTransparentBackground(true);\n        }\n"
                );
  FUN_1800133a0(local_6b0,
                "\n        panel = $.CreatePanel(\'MapPlayerPreviewPanel\', frame, \'$PANEL$\', {\n            \'require-composition-layer\': true,\n            \'composition-layer-texture-name\': \'$LAYER$\',\n            map: \'ui/buy_menu\',\n            player: true,\n            camera: \'cam_loadoutmenu_ct\',\n            \'transparent-background\': true,\n            animgraphcharactermode: \'buy-menu\',\n            playername: \'vanity_character\',\n            playermodel: \'agents/models/ctm_fbi/ctm_fbi.vmdl\',\n            \'disable-depth-of-field\': true,\n            mouse_rotate: false,\n            sync_spawn_addons: true,\n            hide_while_waiting_for_composite_materials: false,\n            hittest: false,\n            style: \'width: 100%; height: 100%;\'\n        });\n        if (panel) {\n            if (panel.SetPlayerModel) panel.SetPlayerModel(\'models/player/ctm_sas.vmdl\');\n            if (panel.EquipPlayerWithItem) panel.EquipPlayerWithItem(\'17293822569102704680\');\n            if (panel.SetHideStaticGeometry) panel.SetHideStaticGeometry(true);\n            if (panel.SetHideParticles) panel.SetHideParticles(true);\n            if (panel.SetTransparentBackground) panel.SetTransparentBackground(true);\n        }\n"
                ,sVar7);
  local_a98 = (ulonglong)(param_1 != 0) + 0x200;
  FUN_1800e3760(pcVar30,0x15e,600,local_6b0);
  if (local_6b0[3] < 0x10) {
LAB_1802da853:
    puVar24 = auStack_ab8;
    if (param_1 != 0) goto LAB_1802da867;
    puVar24 = auStack_ab8;
    iVar32 = DAT_1809214a0;
  }
  else {
    uVar20 = local_6b0[3] + 1;
    uVar22 = local_6b0[0];
    if (uVar20 < 0x1000) {
LAB_1802da84e:
      thunk_FUN_1803d64e0(uVar22,uVar20);
      goto LAB_1802da853;
    }
    uVar22 = *(ulonglong *)(local_6b0[0] - 8);
    if ((local_6b0[0] - uVar22) - 8 < 0x20) {
      uVar20 = local_6b0[3] + 0x28;
      goto LAB_1802da84e;
    }
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar24 = auStack_ab0;
LAB_1802da867:
    iVar32 = DAT_1809214a8;
    if (DAT_1809214a8 < 0) {
      iVar32 = DAT_1809214a0;
    }
  }
  if (iVar32 == 0) {
    piVar26 = (int *)0x0;
LAB_1802da9f9:
    cVar27 = '\0';
    puVar24[0x40] = 0;
    uVar22 = 0;
    do {
      if ((&DAT_18061bfc8)[uVar22] == 0x29) goto LAB_1802daa1c;
      uVar22 = uVar22 + 1;
    } while (uVar22 < 3);
    uVar22 = 0xffffffff;
LAB_1802daa1c:
    if ((int)uVar22 < 0) goto LAB_1802da8f4;
    *(undefined8 *)(puVar24 + 0x50) =
         *(undefined8 *)
          (&DAT_180cec7a8 + ((ulonglong)(param_1 != 0) * 3 + (longlong)(int)uVar22) * 8);
  }
  else {
    if (0 < iVar32) {
      piVar26 = &DAT_18092174c;
      do {
        if ((*piVar26 == iVar32) && (piVar26[1] == (uint)bVar33)) goto LAB_1802da8d9;
        piVar26 = piVar26 + 0x68;
      } while (piVar26 != &DAT_180931b4c);
      piVar26 = &DAT_18092174c;
      do {
        if ((*piVar26 == iVar32) && (piVar26[1] < 0)) goto LAB_1802da8d9;
        piVar26 = piVar26 + 0x68;
      } while (piVar26 != &DAT_180931b4c);
    }
    piVar26 = (int *)0x0;
LAB_1802da8d9:
    if ((piVar26 == (int *)0x0) || (piVar26[2] == 0)) goto LAB_1802da9f9;
    cVar27 = '\x01';
    puVar24[0x40] = 1;
LAB_1802da8f4:
    *(undefined8 *)(puVar24 + 0x50) = 0;
  }
  lVar31 = 3;
  lVar21 = 3;
  if (param_3 == (undefined8 *)0x0) {
    local_898 = 0;
    puVar10 = local_890;
    puVar8 = local_a38;
    do {
      uVar12 = puVar8[1];
      *puVar10 = *puVar8;
      puVar10[1] = uVar12;
      uVar12 = puVar8[3];
      puVar10[2] = puVar8[2];
      puVar10[3] = uVar12;
      uVar12 = puVar8[5];
      puVar10[4] = puVar8[4];
      puVar10[5] = uVar12;
      uVar12 = puVar8[7];
      puVar10[6] = puVar8[6];
      puVar10[7] = uVar12;
      uVar12 = puVar8[9];
      puVar10[8] = puVar8[8];
      puVar10[9] = uVar12;
      uVar12 = puVar8[0xb];
      puVar10[10] = puVar8[10];
      puVar10[0xb] = uVar12;
      uVar12 = puVar8[0xd];
      puVar10[0xc] = puVar8[0xc];
      puVar10[0xd] = uVar12;
      uVar12 = puVar8[0xf];
      puVar10[0xe] = puVar8[0xe];
      puVar10[0xf] = uVar12;
      puVar10 = puVar10 + 0x10;
      puVar8 = puVar8 + 0x10;
      lVar21 = lVar21 + -1;
    } while (lVar21 != 0);
  }
  else {
    puVar8 = &local_408;
    do {
      puVar18 = puVar8;
      puVar10 = param_3;
      uVar12 = puVar10[1];
      *puVar18 = *puVar10;
      puVar18[1] = uVar12;
      uVar12 = puVar10[3];
      puVar18[2] = puVar10[2];
      puVar18[3] = uVar12;
      uVar12 = puVar10[5];
      puVar18[4] = puVar10[4];
      puVar18[5] = uVar12;
      uVar12 = puVar10[7];
      puVar18[6] = puVar10[6];
      puVar18[7] = uVar12;
      uVar12 = puVar10[9];
      puVar18[8] = puVar10[8];
      puVar18[9] = uVar12;
      uVar12 = puVar10[0xb];
      puVar18[10] = puVar10[10];
      puVar18[0xb] = uVar12;
      uVar12 = puVar10[0xd];
      puVar18[0xc] = puVar10[0xc];
      puVar18[0xd] = uVar12;
      uVar12 = puVar10[0xf];
      puVar18[0xe] = puVar10[0xe];
      puVar18[0xf] = uVar12;
      lVar21 = lVar21 + -1;
      param_3 = puVar10 + 0x10;
      puVar8 = puVar18 + 0x10;
    } while (lVar21 != 0);
    uVar12 = puVar10[0x11];
    puVar18[0x10] = puVar10[0x10];
    puVar18[0x11] = uVar12;
    uVar12 = puVar10[0x13];
    puVar18[0x12] = puVar10[0x12];
    puVar18[0x13] = uVar12;
    local_268 = 1;
    puVar10 = local_890;
    puVar8 = &local_408;
    lVar21 = 3;
    do {
      uVar12 = puVar8[1];
      *puVar10 = *puVar8;
      puVar10[1] = uVar12;
      uVar12 = puVar8[3];
      puVar10[2] = puVar8[2];
      puVar10[3] = uVar12;
      uVar12 = puVar8[5];
      puVar10[4] = puVar8[4];
      puVar10[5] = uVar12;
      uVar12 = puVar8[7];
      puVar10[6] = puVar8[6];
      puVar10[7] = uVar12;
      uVar12 = puVar8[9];
      puVar10[8] = puVar8[8];
      puVar10[9] = uVar12;
      uVar12 = puVar8[0xb];
      puVar10[10] = puVar8[10];
      puVar10[0xb] = uVar12;
      uVar12 = puVar8[0xd];
      puVar10[0xc] = puVar8[0xc];
      puVar10[0xd] = uVar12;
      uVar12 = puVar8[0xf];
      puVar10[0xe] = puVar8[0xe];
      puVar10[0xf] = uVar12;
      puVar10 = puVar10 + 0x10;
      puVar8 = puVar8 + 0x10;
      lVar21 = lVar21 + -1;
    } while (lVar21 != 0);
  }
  uVar12 = puVar8[1];
  *puVar10 = *puVar8;
  puVar10[1] = uVar12;
  uVar12 = puVar8[3];
  puVar10[2] = puVar8[2];
  puVar10[3] = uVar12;
  *(undefined4 *)(puVar10 + 4) = *(undefined4 *)(puVar8 + 4);
  lVar21 = 3;
  if (cVar27 == '\0') {
    local_268 = 0;
    puVar8 = local_a38;
    puVar10 = &local_408;
    do {
      uVar12 = puVar10[1];
      *puVar8 = *puVar10;
      puVar8[1] = uVar12;
      uVar12 = puVar10[3];
      puVar8[2] = puVar10[2];
      puVar8[3] = uVar12;
      uVar12 = puVar10[5];
      puVar8[4] = puVar10[4];
      puVar8[5] = uVar12;
      uVar12 = puVar10[7];
      puVar8[6] = puVar10[6];
      puVar8[7] = uVar12;
      uVar12 = puVar10[9];
      puVar8[8] = puVar10[8];
      puVar8[9] = uVar12;
      uVar12 = puVar10[0xb];
      puVar8[10] = puVar10[10];
      puVar8[0xb] = uVar12;
      uVar12 = puVar10[0xd];
      puVar8[0xc] = puVar10[0xc];
      puVar8[0xd] = uVar12;
      uVar12 = puVar10[0xf];
      puVar8[0xe] = puVar10[0xe];
      puVar8[0xf] = uVar12;
      puVar8 = puVar8 + 0x10;
      puVar10 = puVar10 + 0x10;
      lVar21 = lVar21 + -1;
    } while (lVar21 != 0);
  }
  else {
    piVar5 = piVar26;
    puVar8 = &local_408;
    do {
      puVar10 = puVar8;
      piVar9 = piVar5;
      uVar12 = *(undefined8 *)(piVar9 + 2);
      *puVar10 = *(undefined8 *)piVar9;
      puVar10[1] = uVar12;
      uVar12 = *(undefined8 *)(piVar9 + 6);
      puVar10[2] = *(undefined8 *)(piVar9 + 4);
      puVar10[3] = uVar12;
      uVar12 = *(undefined8 *)(piVar9 + 10);
      puVar10[4] = *(undefined8 *)(piVar9 + 8);
      puVar10[5] = uVar12;
      uVar12 = *(undefined8 *)(piVar9 + 0xe);
      puVar10[6] = *(undefined8 *)(piVar9 + 0xc);
      puVar10[7] = uVar12;
      uVar12 = *(undefined8 *)(piVar9 + 0x12);
      puVar10[8] = *(undefined8 *)(piVar9 + 0x10);
      puVar10[9] = uVar12;
      uVar12 = *(undefined8 *)(piVar9 + 0x16);
      puVar10[10] = *(undefined8 *)(piVar9 + 0x14);
      puVar10[0xb] = uVar12;
      uVar12 = *(undefined8 *)(piVar9 + 0x1a);
      puVar10[0xc] = *(undefined8 *)(piVar9 + 0x18);
      puVar10[0xd] = uVar12;
      uVar12 = *(undefined8 *)(piVar9 + 0x1e);
      puVar10[0xe] = *(undefined8 *)(piVar9 + 0x1c);
      puVar10[0xf] = uVar12;
      lVar21 = lVar21 + -1;
      piVar5 = piVar9 + 0x20;
      puVar8 = puVar10 + 0x10;
    } while (lVar21 != 0);
    uVar12 = *(undefined8 *)(piVar9 + 0x22);
    puVar10[0x10] = *(undefined8 *)(piVar9 + 0x20);
    puVar10[0x11] = uVar12;
    uVar12 = *(undefined8 *)(piVar9 + 0x26);
    puVar10[0x12] = *(undefined8 *)(piVar9 + 0x24);
    puVar10[0x13] = uVar12;
    local_268 = 1;
    puVar8 = local_a38;
    puVar10 = &local_408;
    lVar21 = 3;
    do {
      uVar12 = puVar10[1];
      *puVar8 = *puVar10;
      puVar8[1] = uVar12;
      uVar12 = puVar10[3];
      puVar8[2] = puVar10[2];
      puVar8[3] = uVar12;
      uVar12 = puVar10[5];
      puVar8[4] = puVar10[4];
      puVar8[5] = uVar12;
      uVar12 = puVar10[7];
      puVar8[6] = puVar10[6];
      puVar8[7] = uVar12;
      uVar12 = puVar10[9];
      puVar8[8] = puVar10[8];
      puVar8[9] = uVar12;
      uVar12 = puVar10[0xb];
      puVar8[10] = puVar10[10];
      puVar8[0xb] = uVar12;
      uVar12 = puVar10[0xd];
      puVar8[0xc] = puVar10[0xc];
      puVar8[0xd] = uVar12;
      uVar12 = puVar10[0xf];
      puVar8[0xe] = puVar10[0xe];
      puVar8[0xf] = uVar12;
      puVar8 = puVar8 + 0x10;
      puVar10 = puVar10 + 0x10;
      lVar21 = lVar21 + -1;
    } while (lVar21 != 0);
  }
  uVar28 = *(undefined4 *)((longlong)puVar10 + 4);
  uVar2 = *(undefined4 *)(puVar10 + 1);
  uVar3 = *(undefined4 *)((longlong)puVar10 + 0xc);
  *(undefined4 *)puVar8 = *(undefined4 *)puVar10;
  *(undefined4 *)((longlong)puVar8 + 4) = uVar28;
  *(undefined4 *)(puVar8 + 1) = uVar2;
  *(undefined4 *)((longlong)puVar8 + 0xc) = uVar3;
  uVar28 = *(undefined4 *)((longlong)puVar10 + 0x14);
  uVar2 = *(undefined4 *)(puVar10 + 3);
  uVar3 = *(undefined4 *)((longlong)puVar10 + 0x1c);
  *(undefined4 *)(puVar8 + 2) = *(undefined4 *)(puVar10 + 2);
  *(undefined4 *)((longlong)puVar8 + 0x14) = uVar28;
  *(undefined4 *)(puVar8 + 3) = uVar2;
  *(undefined4 *)((longlong)puVar8 + 0x1c) = uVar3;
  *(undefined4 *)(puVar8 + 4) = *(undefined4 *)(puVar10 + 4);
  puVar24[0x48] = DAT_180921134;
  if (DAT_180921134 == '\0') {
    local_670[1] = 0;
    local_670[2] = 0;
    local_670[3] = 0xf;
    local_670[0] = 0;
    *(longlong **)(puVar24 + 0x58) = local_670;
    uVar29 = 8;
  }
  else {
    puVar11 = &DAT_18058b643;
    if (DAT_1809210d4 != '\0') {
      puVar11 = &DAT_1806e0b7c;
    }
    *(undefined1 **)(puVar24 + 0x58) = puVar11;
    if (DAT_1809210d8 < 0) {
      iVar25 = 0;
    }
    else {
      iVar25 = DAT_1809210d8;
      if (3 < DAT_1809210d8) {
        iVar25 = 3;
      }
    }
    uVar28 = 2;
    if (DAT_1809210dc < 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = DAT_1809210dc;
      if (2 < DAT_1809210dc) {
        iVar6 = 2;
      }
    }
    if (iVar25 == 0) {
      uVar28 = 1;
    }
    else if (iVar25 != 1) {
      uVar28 = (&DAT_180619ff0)[iVar6];
    }
    iVar6 = DAT_1809210e0;
    if (DAT_1809210e0 < 1) {
      iVar6 = 1;
    }
    *(undefined8 *)(puVar24 + -8) = 0x1802dacc2;
    FUN_180540170(&local_408,0,0xa0);
    *(undefined **)(puVar24 + 0x30) = &DAT_1809210e5;
    *(int *)(puVar24 + 0x28) = iVar6;
    *(int *)(puVar24 + 0x20) = iVar25;
    *(undefined8 *)(puVar24 + -8) = 0x1802dacf1;
    snprintf(&local_408,0xa0,"pet|%d|%d|%d|%s",uVar28);
    local_6b0[0] = 0;
    local_6b0[1] = 0;
    local_6b0[2] = 0;
    local_6b0[3] = 0;
    *(undefined8 *)(puVar24 + -8) = 0x1802dad18;
    sVar7 = strlen((char *)&local_408);
    *(undefined8 *)(puVar24 + -8) = 0x1802dad2e;
    FUN_1800133a0(local_6b0,&local_408,sVar7);
    *(undefined4 *)(puVar24 + 0x44) = 0x801;
    *(undefined8 *)(puVar24 + -8) = 0x1802dad51;
    uVar12 = FUN_180066ab0(local_430,"|shoulder|",local_6b0);
    *(undefined4 *)(puVar24 + 0x44) = 0x803;
    pcVar30 = *(char **)(puVar24 + 0x58);
    *(undefined8 *)(puVar24 + -8) = 0x1802dad69;
    sVar7 = strlen(pcVar30);
    *(undefined8 *)(puVar24 + -8) = 0x1802dad77;
    puVar13 = (undefined4 *)FUN_1800134a0(uVar12,pcVar30,sVar7);
    local_610 = *puVar13;
    uStack_60c = puVar13[1];
    uStack_608 = puVar13[2];
    uStack_604 = puVar13[3];
    local_600 = puVar13[4];
    uStack_5fc = puVar13[5];
    uStack_5f8 = puVar13[6];
    uStack_5f4 = puVar13[7];
    *(undefined8 *)(puVar13 + 4) = 0;
    *(undefined8 *)(puVar13 + 6) = 0xf;
    *(undefined1 *)puVar13 = 0;
    *(undefined4 **)(puVar24 + 0x58) = &local_610;
    uVar29 = 0x1807;
    cVar27 = puVar24[0x40];
  }
  *(uint *)(puVar24 + 0x44) = uVar29;
  if (cVar27 == '\0') {
    *(undefined8 *)(puVar24 + -8) = 0x1802dae26;
    uVar12 = FUN_18004e4f0(local_470,*(undefined8 *)(puVar24 + 0x50));
    *(undefined8 *)(puVar24 + 0x60) = uVar12;
    uVar29 = uVar29 | 0x20;
  }
  else {
    *(undefined8 *)(puVar24 + -8) = 0x1802dae0a;
    uVar12 = FUN_1800dff20(local_450,iVar32,piVar26);
    *(undefined8 *)(puVar24 + 0x60) = uVar12;
    uVar29 = uVar29 | 0x10;
  }
  *(uint *)(puVar24 + 0x44) = uVar29;
  *(undefined8 *)(puVar24 + -8) = 0x1802dae49;
  uVar12 = FUN_1800dff20(local_490,*(undefined4 *)(puVar24 + 0x4c),*(undefined8 *)(puVar24 + 0x68));
  *(undefined8 *)(puVar24 + -8) = 0x1802dae5f;
  uVar14 = FUN_18004e4f0(local_4b0,local_6e0);
  *(undefined8 *)(puVar24 + -8) = 0x1802dae74;
  uVar15 = FUN_18003a390(local_4d0,local_6e8);
  *(undefined8 *)(puVar24 + -8) = 0x1802dae86;
  uVar16 = FUN_18003a390(local_4f0,bVar33);
  *(undefined8 *)(puVar24 + -8) = 0x1802dae9c;
  puVar13 = (undefined4 *)FUN_1800134a0(uVar16,"|agent|",7);
  local_5d0 = *puVar13;
  uStack_5cc = puVar13[1];
  uStack_5c8 = puVar13[2];
  uStack_5c4 = puVar13[3];
  local_5c0 = puVar13[4];
  uStack_5bc = puVar13[5];
  uStack_5b8 = puVar13[6];
  uStack_5b4 = puVar13[7];
  *(undefined8 *)(puVar13 + 4) = 0;
  *(undefined8 *)(puVar13 + 6) = 0xf;
  *(undefined1 *)puVar13 = 0;
  *(uint *)(puVar24 + 0x44) = uVar29 | 0x40;
  *(undefined8 *)(puVar24 + -8) = 0x1802daee3;
  uVar15 = FUN_180066820(local_510,&local_5d0,uVar15);
  *(undefined8 *)(puVar24 + -8) = 0x1802daef9;
  puVar13 = (undefined4 *)FUN_1800134a0(uVar15,&DAT_1806e9100,1);
  local_5f0 = *puVar13;
  uStack_5ec = puVar13[1];
  uStack_5e8 = puVar13[2];
  uStack_5e4 = puVar13[3];
  local_5e0 = puVar13[4];
  uStack_5dc = puVar13[5];
  uStack_5d8 = puVar13[6];
  uStack_5d4 = puVar13[7];
  *(undefined8 *)(puVar13 + 4) = 0;
  *(undefined8 *)(puVar13 + 6) = 0xf;
  *(undefined1 *)puVar13 = 0;
  *(uint *)(puVar24 + 0x44) = uVar29 | 0xc0;
  *(undefined8 *)(puVar24 + -8) = 0x1802daf42;
  uVar14 = FUN_180066820(local_530,&local_5f0,uVar14);
  *(undefined8 *)(puVar24 + -8) = 0x1802daf58;
  puVar17 = (ulonglong *)FUN_1800134a0(uVar14,&DAT_1806e9100,1);
  local_6b0[4] = *puVar17;
  uStack_688 = puVar17[1];
  local_680 = puVar17[2];
  uStack_678 = puVar17[3];
  puVar17[2] = 0;
  puVar17[3] = 0xf;
  *(undefined1 *)puVar17 = 0;
  *(uint *)(puVar24 + 0x44) = uVar29 | 0x1c0;
  *(undefined8 *)(puVar24 + -8) = 0x1802dafbc;
  uVar14 = FUN_1800667a0(local_550,local_6b0 + 4,local_6d0);
  *(undefined8 *)(puVar24 + -8) = 0x1802dafd2;
  puVar13 = (undefined4 *)FUN_1800134a0(uVar14,&DAT_1806e9100,1);
  local_630 = *puVar13;
  uStack_62c = puVar13[1];
  uStack_628 = puVar13[2];
  uStack_624 = puVar13[3];
  local_620 = puVar13[4];
  uStack_61c = puVar13[5];
  uStack_618 = puVar13[6];
  uStack_614 = puVar13[7];
  *(undefined8 *)(puVar13 + 4) = 0;
  *(undefined8 *)(puVar13 + 6) = 0xf;
  *(undefined1 *)puVar13 = 0;
  *(uint *)(puVar24 + 0x44) = uVar29 | 0x3c0;
  *(undefined8 *)(puVar24 + -8) = 0x1802db018;
  uVar12 = FUN_180066820(local_570,&local_630,uVar12);
  *(undefined8 *)(puVar24 + -8) = 0x1802db02e;
  puVar13 = (undefined4 *)FUN_1800134a0(uVar12,"|gloves|",8);
  local_650 = *puVar13;
  uStack_64c = puVar13[1];
  uStack_648 = puVar13[2];
  uStack_644 = puVar13[3];
  local_640 = puVar13[4];
  uStack_63c = puVar13[5];
  uStack_638 = puVar13[6];
  uStack_634 = puVar13[7];
  *(undefined8 *)(puVar13 + 4) = 0;
  *(undefined8 *)(puVar13 + 6) = 0xf;
  *(undefined1 *)puVar13 = 0;
  uVar23 = uVar29 | 0x7c0;
  *(uint *)(puVar24 + 0x44) = uVar23;
  *(undefined8 *)(puVar24 + -8) = 0x1802db077;
  uVar12 = FUN_180066820(local_590,&local_650,*(undefined8 *)(puVar24 + 0x60));
  *(undefined8 *)(puVar24 + -8) = 0x1802db08c;
  FUN_180066820(local_5b0,uVar12,*(undefined8 *)(puVar24 + 0x58));
  *(undefined8 *)(puVar24 + -8) = 0x1802db099;
  FUN_18000f890(local_590);
  uVar22 = CONCAT44(uStack_634,uStack_638);
  if (0xf < uVar22) {
    uVar20 = uVar22 + 1;
    lVar4 = CONCAT44(uStack_64c,local_650);
    lVar21 = lVar4;
    if (uVar20 < 0x1000) {
LAB_1802db0d6:
      *(undefined8 *)(puVar24 + -8) = 0x1802db0db;
      thunk_FUN_1803d64e0(lVar21,uVar20);
      goto LAB_1802db0dc;
    }
    lVar21 = *(longlong *)(lVar4 + -8);
    if ((lVar4 - lVar21) - 8U < 0x20) {
      uVar20 = uVar22 + 0x28;
      goto LAB_1802db0d6;
    }
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
LAB_1802db52b:
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
LAB_1802db532:
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
LAB_1802db539:
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
LAB_1802db540:
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
LAB_1802db547:
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_1802db0dc:
  *(undefined8 *)(puVar24 + -8) = 0x1802db0e8;
  FUN_18000f890(local_570);
  uVar22 = CONCAT44(uStack_614,uStack_618);
  if (0xf < uVar22) {
    uVar20 = uVar22 + 1;
    lVar4 = CONCAT44(uStack_62c,local_630);
    lVar21 = lVar4;
    if (0xfff < uVar20) {
      lVar21 = *(longlong *)(lVar4 + -8);
      if (0x1f < (lVar4 - lVar21) - 8U) goto LAB_1802db52b;
      uVar20 = uVar22 + 0x28;
    }
    *(undefined8 *)(puVar24 + -8) = 0x1802db12a;
    thunk_FUN_1803d64e0(lVar21,uVar20);
  }
  *(undefined8 *)(puVar24 + -8) = 0x1802db137;
  FUN_18000f890(local_550);
  if (0xf < uStack_678) {
    uVar20 = uStack_678 + 1;
    uVar22 = local_6b0[4];
    if (0xfff < uVar20) {
      uVar22 = *(ulonglong *)(local_6b0[4] - 8);
      if (0x1f < (local_6b0[4] - uVar22) - 8) goto LAB_1802db532;
      uVar20 = uStack_678 + 0x28;
    }
    *(undefined8 *)(puVar24 + -8) = 0x1802db179;
    thunk_FUN_1803d64e0(uVar22,uVar20);
  }
  local_680 = 0;
  uStack_678 = 0xf;
  local_6b0[4] = local_6b0[4] & 0xffffffffffffff00;
  *(undefined8 *)(puVar24 + -8) = 0x1802db19e;
  FUN_18000f890(local_530);
  *(undefined8 *)(puVar24 + -8) = 0x1802db1ab;
  FUN_18000f890(&local_5f0);
  *(undefined8 *)(puVar24 + -8) = 0x1802db1b8;
  FUN_18000f890(local_510);
  *(undefined8 *)(puVar24 + -8) = 0x1802db1c5;
  FUN_18000f890(&local_5d0);
  *(undefined8 *)(puVar24 + -8) = 0x1802db1d2;
  FUN_18000f890(local_4f0);
  *(undefined8 *)(puVar24 + -8) = 0x1802db1df;
  FUN_18000f890(local_4d0);
  *(undefined8 *)(puVar24 + -8) = 0x1802db1ec;
  FUN_18000f890(local_4b0);
  *(undefined8 *)(puVar24 + -8) = 0x1802db1f9;
  FUN_18000f890(local_490);
  if ((uVar29 & 0x20) != 0) {
    uVar23 = uVar29 & 0xffffffdf;
    *(undefined8 *)(puVar24 + -8) = 0x1802db20f;
    FUN_18000f890(local_470);
  }
  if ((uVar23 & 0x10) != 0) {
    uVar23 = uVar23 & 0xffffffef;
    *(undefined8 *)(puVar24 + -8) = 0x1802db224;
    FUN_18000f890(local_450);
  }
  if (((uVar23 & 8) != 0) && (uVar23 = uVar23 & 0xfffffff7, 0xf < (ulonglong)local_670[3])) {
    uVar22 = local_670[3] + 1;
    lVar21 = local_670[0];
    if (0xfff < uVar22) {
      lVar21 = *(longlong *)(local_670[0] + -8);
      if (0x1f < (local_670[0] - lVar21) - 8U) goto LAB_1802db539;
      uVar22 = local_670[3] + 0x28;
    }
    *(undefined8 *)(puVar24 + -8) = 0x1802db26e;
    thunk_FUN_1803d64e0(lVar21,uVar22);
  }
  if ((uVar23 & 4) != 0) {
    uVar23 = uVar23 & 0xfffffffb;
    uVar22 = CONCAT44(uStack_5f4,uStack_5f8);
    if (0xf < uVar22) {
      uVar20 = uVar22 + 1;
      lVar4 = CONCAT44(uStack_60c,local_610);
      lVar21 = lVar4;
      if (0xfff < uVar20) {
        lVar21 = *(longlong *)(lVar4 + -8);
        if (0x1f < (lVar4 - lVar21) - 8U) goto LAB_1802db540;
        uVar20 = uVar22 + 0x28;
      }
      *(undefined8 *)(puVar24 + -8) = 0x1802db2b8;
      thunk_FUN_1803d64e0(lVar21,uVar20);
    }
  }
  if ((uVar23 & 2) != 0) {
    uVar23 = uVar23 & 0xfffffffd;
    *(undefined8 *)(puVar24 + -8) = 0x1802db2cd;
    FUN_18000f890(local_430);
  }
  if ((uVar23 & 1) != 0) {
    if (0xf < local_6b0[3]) {
      uVar20 = local_6b0[3] + 1;
      uVar22 = local_6b0[0];
      if (0xfff < uVar20) {
        uVar22 = *(ulonglong *)(local_6b0[0] - 8);
        if (0x1f < (local_6b0[0] - uVar22) - 8) goto LAB_1802db547;
        uVar20 = local_6b0[3] + 0x28;
      }
      *(undefined8 *)(puVar24 + -8) = 0x1802db314;
      thunk_FUN_1803d64e0(uVar22,uVar20);
    }
    local_6b0[2] = 0;
    local_6b0[3] = 0xf;
    local_6b0[0] = local_6b0[0] & 0xffffffffffffff00;
  }
  uVar12 = *(undefined8 *)(puVar24 + 0x70);
  local_3f8 = local_6e8;
  uStack_3f4 = local_6e4;
  uStack_3f0 = local_6e0;
  local_3e8 = local_6d8;
  uStack_3e7 = local_6d7;
  *(undefined8 *)(puVar24 + -8) = 0x1802db393;
  local_408 = uVar12;
  uStack_400 = (uint)bVar33;
  FUN_180024b50(auStack_3e0,local_6d0);
  uStack_3c0 = *(undefined4 *)(puVar24 + 0x4c);
  lVar21 = 3;
  puVar8 = local_890;
  puVar10 = auStack_3bc;
  do {
    puVar19 = puVar10;
    puVar18 = puVar8;
    uVar14 = puVar18[1];
    *puVar19 = *puVar18;
    puVar19[1] = uVar14;
    uVar14 = puVar18[3];
    puVar19[2] = puVar18[2];
    puVar19[3] = uVar14;
    uVar14 = puVar18[5];
    puVar19[4] = puVar18[4];
    puVar19[5] = uVar14;
    uVar14 = puVar18[7];
    puVar19[6] = puVar18[6];
    puVar19[7] = uVar14;
    uVar14 = puVar18[9];
    puVar19[8] = puVar18[8];
    puVar19[9] = uVar14;
    uVar14 = puVar18[0xb];
    puVar19[10] = puVar18[10];
    puVar19[0xb] = uVar14;
    uVar14 = puVar18[0xd];
    puVar19[0xc] = puVar18[0xc];
    puVar19[0xd] = uVar14;
    uVar14 = puVar18[0xf];
    puVar19[0xe] = puVar18[0xe];
    puVar19[0xf] = uVar14;
    lVar21 = lVar21 + -1;
    puVar8 = puVar18 + 0x10;
    puVar10 = puVar19 + 0x10;
  } while (lVar21 != 0);
  uVar14 = puVar18[0x11];
  puVar19[0x10] = puVar18[0x10];
  puVar19[0x11] = uVar14;
  uVar14 = puVar18[0x13];
  puVar19[0x12] = puVar18[0x12];
  puVar19[0x13] = uVar14;
  *(undefined4 *)(puVar19 + 0x14) = *(undefined4 *)(puVar18 + 0x14);
  local_218 = iVar32;
  puVar8 = local_a38;
  puVar10 = local_214;
  do {
    puVar19 = puVar10;
    puVar18 = puVar8;
    uVar14 = puVar18[1];
    *puVar19 = *puVar18;
    puVar19[1] = uVar14;
    uVar14 = puVar18[3];
    puVar19[2] = puVar18[2];
    puVar19[3] = uVar14;
    uVar14 = puVar18[5];
    puVar19[4] = puVar18[4];
    puVar19[5] = uVar14;
    uVar14 = puVar18[7];
    puVar19[6] = puVar18[6];
    puVar19[7] = uVar14;
    uVar14 = puVar18[9];
    puVar19[8] = puVar18[8];
    puVar19[9] = uVar14;
    uVar14 = puVar18[0xb];
    puVar19[10] = puVar18[10];
    puVar19[0xb] = uVar14;
    uVar14 = puVar18[0xd];
    puVar19[0xc] = puVar18[0xc];
    puVar19[0xd] = uVar14;
    uVar14 = puVar18[0xf];
    puVar19[0xe] = puVar18[0xe];
    puVar19[0xf] = uVar14;
    lVar31 = lVar31 + -1;
    puVar8 = puVar18 + 0x10;
    puVar10 = puVar19 + 0x10;
  } while (lVar31 != 0);
  uVar28 = *(undefined4 *)((longlong)puVar18 + 0x84);
  uVar2 = *(undefined4 *)(puVar18 + 0x11);
  uVar3 = *(undefined4 *)((longlong)puVar18 + 0x8c);
  *(undefined4 *)(puVar19 + 0x10) = *(undefined4 *)(puVar18 + 0x10);
  *(undefined4 *)((longlong)puVar19 + 0x84) = uVar28;
  *(undefined4 *)(puVar19 + 0x11) = uVar2;
  *(undefined4 *)((longlong)puVar19 + 0x8c) = uVar3;
  uVar28 = *(undefined4 *)((longlong)puVar18 + 0x94);
  uVar2 = *(undefined4 *)(puVar18 + 0x13);
  uVar3 = *(undefined4 *)((longlong)puVar18 + 0x9c);
  *(undefined4 *)(puVar19 + 0x12) = *(undefined4 *)(puVar18 + 0x12);
  *(undefined4 *)((longlong)puVar19 + 0x94) = uVar28;
  *(undefined4 *)(puVar19 + 0x13) = uVar2;
  *(undefined4 *)((longlong)puVar19 + 0x9c) = uVar3;
  *(undefined4 *)(puVar19 + 0x14) = *(undefined4 *)(puVar18 + 0x14);
  local_70 = *(undefined8 *)(puVar24 + 0x50);
  local_68 = puVar24[0x48];
  *(undefined8 *)(puVar24 + -8) = 0x1802db4da;
  FUN_180344990(uVar12,&DAT_1809f7180 + *(longlong *)(puVar24 + 0x78) * 0x60,local_5b0,&local_408);
  *(undefined8 *)(puVar24 + -8) = 0x1802db4e7;
  FUN_18000f890(auStack_3e0);
  *(undefined8 *)(puVar24 + -8) = 0x1802db4f4;
  FUN_18000f890(local_5b0);
  *(undefined8 *)(puVar24 + -8) = 0x1802db501;
  FUN_18000f890(local_6d0);
  *(undefined8 *)(puVar24 + -8) = 0x1802db510;
  return;
}



/* ===== 1802db550 FUN_1802db550 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1802db550(undefined8 *param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  size_t sVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined4 *puVar11;
  ulonglong *puVar12;
  undefined8 ****ppppuVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  char *pcVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  longlong lVar22;
  undefined *puVar23;
  undefined8 uStack_270;
  undefined1 auStack_268 [8];
  undefined1 auStack_260 [24];
  undefined4 local_248;
  char *local_240;
  char *local_238;
  undefined8 local_230;
  undefined8 *local_228;
  undefined4 local_220;
  undefined8 ****local_218;
  undefined8 ****local_210;
  undefined4 local_208;
  undefined8 *local_200;
  ulonglong local_1f8;
  ulonglong uStack_1f0;
  ulonglong local_1e8;
  ulonglong uStack_1e0;
  ulonglong local_1d8;
  ulonglong uStack_1d0;
  ulonglong local_1c8;
  ulonglong uStack_1c0;
  ulonglong local_1b8 [4];
  undefined8 ****local_198;
  longlong lStack_190;
  longlong local_188;
  ulonglong uStack_180;
  undefined8 ****local_178 [3];
  ulonglong local_160;
  undefined8 ****local_158 [3];
  ulonglong local_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  ulonglong uStack_120;
  undefined1 local_118 [32];
  undefined1 local_f8 [32];
  undefined1 local_d8 [32];
  undefined1 local_b8 [32];
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  undefined1 local_58 [32];
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStack_268;
  local_208 = 0;
  lVar22 = (longlong)param_1 + 0x4c;
  if (*(char *)((longlong)param_1 + 0x1ec) == '\0') {
    lVar22 = 0;
  }
  local_200 = param_2;
  FUN_1802d6b00(local_158,*(undefined4 *)(param_1 + 9),lVar22);
  FUN_1802da3c0(local_178,*(undefined4 *)(param_1 + 0x3e),(longlong)param_1 + 500,param_1[0x73]);
  local_210 = local_178;
  if (0xf < local_160) {
    local_210 = local_178[0];
  }
  local_218 = local_158;
  if (0xf < local_140) {
    local_218 = local_158[0];
  }
  local_220 = *(undefined4 *)(param_1 + 9);
  if ((ulonglong)param_1[8] < 0x10) {
    local_228 = param_1 + 5;
  }
  else {
    local_228 = (undefined8 *)param_1[5];
  }
  local_238 = "";
  if (*(char *)(param_1 + 4) != '\0') {
    local_238 = " | custom";
  }
  local_240 = "faux item";
  if (*(char *)((longlong)param_1 + 0x21) != '\0') {
    local_240 = "loadout item";
  }
  puVar23 = &DAT_1806dfd54;
  if (*(int *)(param_1 + 1) == 0) {
    puVar23 = &DAT_18070a238;
  }
  local_230 = param_1[3];
  local_248 = *(undefined4 *)((longlong)param_1 + 0x14);
  FUN_1800e4040("agent loadout %s | team %s | agent %d | loadout agent %d | %s%s | item %llu | model %s | weapon %d %s | gloves %s"
                ,*param_1,puVar23,*(undefined4 *)(param_1 + 2));
  uVar6 = FUN_1802d78d0(local_f8,param_1 + 5);
  uVar7 = FUN_18004e4f0(local_118,param_1[3]);
  pcVar16 = (char *)*param_1;
  local_1b8[0] = 0;
  local_1b8[1] = 0;
  local_1b8[2] = 0;
  local_1b8[3] = 0;
  sVar8 = strlen(pcVar16);
  FUN_1800133a0(local_1b8,pcVar16,sVar8);
  uVar9 = FUN_180066ab0(local_58,"var sceneKey = \'",local_1b8);
  plVar10 = (longlong *)FUN_1800134a0(uVar9,"\'; var agentId = \'",0x12);
  local_198 = (undefined8 ****)*plVar10;
  lStack_190 = plVar10[1];
  local_188 = plVar10[2];
  uStack_180 = plVar10[3];
  plVar10[2] = 0;
  plVar10[3] = 0xf;
  *(undefined1 *)plVar10 = 0;
  local_208 = 2;
  uVar7 = FUN_180066820(local_78,&local_198,uVar7);
  puVar11 = (undefined4 *)FUN_1800134a0(uVar7,"\'; var agentModel = ",0x14);
  local_138 = *puVar11;
  uStack_134 = puVar11[1];
  uStack_130 = puVar11[2];
  uStack_12c = puVar11[3];
  local_128 = *(undefined8 *)(puVar11 + 4);
  uStack_120 = *(ulonglong *)(puVar11 + 6);
  *(undefined8 *)(puVar11 + 4) = 0;
  *(undefined8 *)(puVar11 + 6) = 0xf;
  *(undefined1 *)puVar11 = 0;
  local_208 = 6;
  uVar6 = FUN_180066820(local_98,&local_138,uVar6);
  puVar12 = (ulonglong *)FUN_1800134a0(uVar6,"; var id = ",0xb);
  local_1d8 = *puVar12;
  uStack_1d0 = puVar12[1];
  local_1c8 = puVar12[2];
  uStack_1c0 = puVar12[3];
  puVar12[2] = 0;
  puVar12[3] = 0xf;
  *(undefined1 *)puVar12 = 0;
  local_208 = 0xe;
  uVar6 = FUN_1800667a0(local_b8,&local_1d8,local_158);
  puVar12 = (ulonglong *)FUN_1800134a0(uVar6,"; var gloves = ",0xf);
  local_1f8 = *puVar12;
  uStack_1f0 = puVar12[1];
  local_1e8 = puVar12[2];
  uStack_1e0 = puVar12[3];
  puVar12[2] = 0;
  puVar12[3] = 0xf;
  *(undefined1 *)puVar12 = 0;
  local_208 = 0x1e;
  uVar6 = FUN_1800667a0(local_d8,&local_1f8,local_178);
  puVar11 = (undefined4 *)FUN_1800134a0(uVar6,&DAT_1806f8e8c,1);
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  uVar2 = puVar11[1];
  uVar3 = puVar11[2];
  uVar4 = puVar11[3];
  *(undefined4 *)param_2 = *puVar11;
  *(undefined4 *)((longlong)param_2 + 4) = uVar2;
  *(undefined4 *)(param_2 + 1) = uVar3;
  *(undefined4 *)((longlong)param_2 + 0xc) = uVar4;
  uVar6 = *(undefined8 *)(puVar11 + 6);
  param_2[2] = *(undefined8 *)(puVar11 + 4);
  param_2[3] = uVar6;
  *(undefined8 *)(puVar11 + 4) = 0;
  *(undefined8 *)(puVar11 + 6) = 0xf;
  *(undefined1 *)puVar11 = 0;
  local_208 = 0x3f;
  FUN_18000f890(local_d8);
  if (uStack_1e0 < 0x10) {
LAB_1802db8dd:
    local_1e8 = 0;
    uStack_1e0 = 0xf;
    local_1f8 = local_1f8 & 0xffffffffffffff00;
    FUN_18000f890(local_b8);
    puVar17 = auStack_268;
    if (0xf < uStack_1c0) {
      uVar14 = uStack_1c0 + 1;
      uVar15 = local_1d8;
      if (0xfff < uVar14) {
        uVar15 = *(ulonglong *)(local_1d8 - 8);
        if (0x1f < (local_1d8 - uVar15) - 8) goto LAB_1802dbb25;
        uVar14 = uStack_1c0 + 0x28;
      }
      thunk_FUN_1803d64e0(uVar15,uVar14);
    }
    local_1c8 = 0;
    uStack_1c0 = 0xf;
    local_1d8 = local_1d8 & 0xffffffffffffff00;
    FUN_18000f890(local_98);
    puVar18 = auStack_268;
    if (0xf < uStack_120) {
      uVar15 = uStack_120 + 1;
      lVar5 = CONCAT44(uStack_134,local_138);
      lVar22 = lVar5;
      if (0xfff < uVar15) {
        lVar22 = *(longlong *)(lVar5 + -8);
        if (0x1f < (lVar5 - lVar22) - 8U) goto LAB_1802dbb2c;
        uVar15 = uStack_120 + 0x28;
      }
      thunk_FUN_1803d64e0(lVar22,uVar15);
    }
    FUN_18000f890(local_78);
    puVar19 = auStack_268;
    if (0xf < uStack_180) {
      uVar15 = uStack_180 + 1;
      ppppuVar13 = local_198;
      if (0xfff < uVar15) {
        ppppuVar13 = (undefined8 ****)local_198[-1];
        if (0x1f < (ulonglong)((longlong)local_198 + (-8 - (longlong)ppppuVar13)))
        goto LAB_1802dbb33;
        uVar15 = uStack_180 + 0x28;
      }
      thunk_FUN_1803d64e0(ppppuVar13,uVar15);
    }
    FUN_18000f890(local_58);
    puVar20 = auStack_268;
    if (0xf < local_1b8[3]) {
      uVar14 = local_1b8[3] + 1;
      uVar15 = local_1b8[0];
      if (0xfff < uVar14) {
        uVar15 = *(ulonglong *)(local_1b8[0] - 8);
        if (0x1f < (local_1b8[0] - uVar15) - 8) goto LAB_1802dbb3a;
        uVar14 = local_1b8[3] + 0x28;
      }
      thunk_FUN_1803d64e0(uVar15,uVar14);
    }
    local_1b8[2] = 0;
    local_1b8[3] = 0xf;
    local_1b8[0] = local_1b8[0] & 0xffffffffffffff00;
    FUN_18000f890(local_118);
    FUN_18000f890(local_f8);
    FUN_1800134a0(param_2,
                  "\n            var r1 = \'n/a\', r2 = \'n/a\';\n            try {\n                if (panel.SetPlayerCharacterItemID) r1 = panel.SetPlayerCharacterItemID(agentId);\n                if (panel.SetPlayerModel) r2 = panel.SetPlayerModel(agentModel);\n            } catch (e) { r1 = \'error \' + e; }\n            panel.Data().wlWeapon = id;\n            var hold = function () { try { if (panel && panel.IsValid() && panel.Data().wlWeapon === id && panel.EquipPlayerWithItem) panel.EquipPlayerWithItem(id); } catch (e) {} };\n            hold();\n            $.Schedule(0.2, hold);\n            $.Schedule(0.6, hold);\n            $.Schedule(1.5, hold);\n            panel.Data().wlGloves = gloves;\n            var wear = function () { try { if (gloves && panel && panel.IsValid() && panel.Data().wlGloves === gloves && panel.EquipPlayerWithItem) panel.EquipPlayerWithItem(gloves); } catch (e) {} };\n            wear();\n            $.Schedule(0.25, wear);\n            $.Schedule(1.0, wear);\n            $.Msg(\'[neverlose] agent preview | \' + sceneKey + \' \' + panel.id + \' | item \' + agentId + \' -> \' + r1 + \' | model \' + agentModel + \' -> \' + r2 + \' | weapon \' + id + \' | gloves \' + gloves);\n"
                  ,0x491);
    puVar21 = auStack_268;
    if (*(char *)(param_1 + 0x74) != '\0') {
      uVar6 = FUN_18004e4f0(local_118,0xc4c4c4c40001);
      uVar6 = FUN_180066ab0(local_f8," var pet = \'",uVar6);
      plVar10 = (longlong *)FUN_1800134a0(uVar6,&DAT_18075ebfc,2);
      local_198 = (undefined8 ****)*plVar10;
      lStack_190 = plVar10[1];
      local_188 = plVar10[2];
      uStack_180 = plVar10[3];
      plVar10[2] = 0;
      plVar10[3] = 0xf;
      *(undefined1 *)plVar10 = 0;
      local_208 = 0x7f;
      ppppuVar13 = &local_198;
      if (0xf < uStack_180) {
        ppppuVar13 = local_198;
      }
      FUN_1800134a0(param_2,ppppuVar13,local_188);
      FUN_18000f890(&local_198);
      FUN_18000f890(local_f8);
      FUN_18000f890(local_118);
      puVar21 = auStack_268;
      uVar6 = 0x122;
      pcVar16 = 
      "\n            var perch = function () { try { if (panel && panel.IsValid() && panel.SetPetPlacement) { panel.SetPetPlacement(\'shoulder\'); if (panel.EquipPlayerWithPet) panel.EquipPlayerWithPet(pet); } } catch (e) {} };\n            $.Schedule(0.3, perch);\n            $.Schedule(1.2, perch);\n"
      ;
      goto LAB_1802dbb4e;
    }
  }
  else {
    uVar14 = uStack_1e0 + 1;
    uVar15 = local_1f8;
    if (uVar14 < 0x1000) {
LAB_1802db8d8:
      thunk_FUN_1803d64e0(uVar15,uVar14);
      goto LAB_1802db8dd;
    }
    uVar15 = *(ulonglong *)(local_1f8 - 8);
    if ((local_1f8 - uVar15) - 8 < 0x20) {
      uVar14 = uStack_1e0 + 0x28;
      goto LAB_1802db8d8;
    }
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar17 = auStack_260;
LAB_1802dbb25:
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar18 = puVar17 + 8;
LAB_1802dbb2c:
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar19 = puVar18 + 8;
LAB_1802dbb33:
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar20 = puVar19 + 8;
LAB_1802dbb3a:
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar21 = puVar20 + 8;
  }
  uVar6 = 0x3a;
  pcVar16 = " if (panel.SetPetPlacement) panel.SetPetPlacement(\'none\');";
LAB_1802dbb4e:
  *(undefined8 *)(puVar21 + -8) = 0x1802dbb56;
  FUN_1800134a0(param_2,pcVar16,uVar6);
  *(undefined8 *)(puVar21 + -8) = 0x1802dbb60;
  FUN_18000f890(local_178);
  *(undefined8 *)(puVar21 + -8) = 0x1802dbb6a;
  FUN_18000f890(local_158);
  *(undefined8 *)(puVar21 + -8) = 0x1802dbb7c;
  return param_2;
}



/* ===== 1802dbba0 FUN_1802dbba0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802dbba0(int param_1,int param_2,char param_3,int *param_4)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  char **ppcVar6;
  char cVar7;
  char *pcVar8;
  size_t sVar9;
  char **ppcVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  int *piVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined4 *puVar17;
  char *pcVar18;
  int iVar19;
  char *pcVar20;
  char *pcVar21;
  longlong lVar22;
  longlong lVar23;
  ulonglong uVar24;
  int *piVar25;
  ulonglong uVar26;
  uint uVar27;
  int *piVar28;
  undefined1 *puVar29;
  uint uVar30;
  undefined8 *puVar31;
  byte bVar32;
  int iVar33;
  char *pcVar34;
  bool bVar35;
  undefined1 auStack_a08 [8];
  undefined1 auStack_a00 [24];
  longlong local_9e8;
  undefined4 local_9b4;
  int local_9b0;
  undefined8 local_9a8;
  int local_9a0;
  ulonglong local_988;
  undefined8 local_980;
  char *local_978;
  undefined *local_970;
  char local_968 [976];
  undefined4 local_598;
  undefined4 local_594;
  undefined8 local_590;
  undefined1 local_588;
  undefined1 local_587;
  undefined1 local_580 [32];
  undefined8 local_560;
  undefined8 uStack_558;
  uint local_550;
  int local_54c;
  undefined8 local_548;
  undefined8 uStack_540;
  undefined8 local_538;
  ulonglong local_530;
  undefined8 local_528;
  undefined8 uStack_520;
  undefined8 local_518;
  undefined8 uStack_510;
  longlong local_508 [4];
  undefined4 local_4e8;
  undefined4 uStack_4e4;
  undefined4 uStack_4e0;
  undefined4 uStack_4dc;
  undefined4 local_4d8;
  undefined4 uStack_4d4;
  undefined4 uStack_4d0;
  undefined4 uStack_4cc;
  undefined4 local_4c8;
  undefined4 uStack_4c4;
  undefined4 uStack_4c0;
  undefined4 uStack_4bc;
  undefined4 local_4b8;
  undefined4 uStack_4b4;
  undefined4 uStack_4b0;
  undefined4 uStack_4ac;
  undefined4 local_4a8;
  undefined4 uStack_4a4;
  undefined4 uStack_4a0;
  undefined4 uStack_49c;
  undefined4 local_498;
  undefined4 uStack_494;
  undefined4 uStack_490;
  undefined4 uStack_48c;
  undefined4 local_488;
  undefined4 uStack_484;
  undefined4 uStack_480;
  undefined4 uStack_47c;
  undefined4 local_478;
  undefined4 uStack_474;
  undefined4 uStack_470;
  undefined4 uStack_46c;
  undefined4 local_468;
  undefined4 uStack_464;
  undefined4 uStack_460;
  undefined4 uStack_45c;
  undefined4 local_458;
  undefined4 uStack_454;
  undefined4 uStack_450;
  undefined4 uStack_44c;
  undefined1 local_448 [32];
  undefined1 local_428 [32];
  undefined1 local_408 [32];
  undefined1 local_3e8 [32];
  undefined1 local_3c8 [32];
  undefined1 local_3a8 [32];
  undefined1 local_388 [32];
  undefined1 local_368 [32];
  undefined1 local_348 [32];
  undefined1 local_328 [32];
  undefined1 local_308 [32];
  undefined1 local_2e8 [32];
  char *local_2c8;
  uint uStack_2c0;
  undefined4 local_2b8;
  undefined4 uStack_2b4;
  undefined8 uStack_2b0;
  undefined1 local_2a8;
  undefined1 uStack_2a7;
  undefined1 auStack_2a0 [32];
  byte bStack_280;
  undefined4 uStack_27c;
  int local_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 local_268;
  undefined8 uStack_260;
  int local_258;
  undefined8 auStack_254 [37];
  undefined1 local_128;
  undefined8 local_b0;
  char local_a8 [96];
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_a08;
  local_9b4 = 0;
  bVar35 = param_1 != 0;
  pcVar34 = "agent_view";
  if (param_3 != '\0') {
    pcVar34 = "agent_view_big";
  }
  local_970 = &DAT_1809f5290;
  if (param_3 != '\0') {
    local_970 = &DAT_1809f5140;
  }
  local_9b0 = param_2;
  local_9a0 = param_1;
  local_978 = pcVar34;
  if (param_2 == 0) {
    local_9a8 = 0;
  }
  else {
    local_9a8 = FUN_18027fb40(param_2);
  }
  FUN_1802d9f30(&local_598,bVar35,param_2);
  lVar23 = 7;
  pcVar21 = local_968;
  pcVar18 = 
  "\n        panel = $.CreatePanel(\'MapPlayerPreviewPanel\', frame, \'$PANEL$\', {\n            player: true,\n            camera: \'cam_char_inspect_wide_intro\',\n            animgraphcharactermode: \'inventory-inspect\',\n            playername: \'vanity_character\',\n            mouse_rotate: false,\n            sync_spawn_addons: true,\n            hide_while_waiting_for_composite_materials: false,\n            \'require-composition-layer\': true,\n            \'composition-layer-texture-name\': \'$LAYER$\',\n            \'transparent-background\': true,\n            map: \'warehouse_vanity\',\n            \'disable-depth-of-field\': false,\n            hittest: false,\n            style: \'width: 100%; height: 100%;\'\n        });\n        if (panel) {\n            if (panel.SetHideStaticGeometry) panel.SetHideStaticGeometry(true);\n            if (panel.SetHideParticles) panel.SetHideParticles(true);\n            if (panel.SetTransparentBackground) panel.SetTransparentBackground(true);\n        }\n"
  ;
  do {
    pcVar20 = pcVar18;
    pcVar8 = pcVar21;
    uVar14 = *(undefined8 *)(pcVar20 + 8);
    *(undefined8 *)pcVar8 = *(undefined8 *)pcVar20;
    *(undefined8 *)(pcVar8 + 8) = uVar14;
    uVar14 = *(undefined8 *)(pcVar20 + 0x18);
    *(undefined8 *)(pcVar8 + 0x10) = *(undefined8 *)(pcVar20 + 0x10);
    *(undefined8 *)(pcVar8 + 0x18) = uVar14;
    uVar14 = *(undefined8 *)(pcVar20 + 0x28);
    *(undefined8 *)(pcVar8 + 0x20) = *(undefined8 *)(pcVar20 + 0x20);
    *(undefined8 *)(pcVar8 + 0x28) = uVar14;
    uVar14 = *(undefined8 *)(pcVar20 + 0x38);
    *(undefined8 *)(pcVar8 + 0x30) = *(undefined8 *)(pcVar20 + 0x30);
    *(undefined8 *)(pcVar8 + 0x38) = uVar14;
    uVar14 = *(undefined8 *)(pcVar20 + 0x48);
    *(undefined8 *)(pcVar8 + 0x40) = *(undefined8 *)(pcVar20 + 0x40);
    *(undefined8 *)(pcVar8 + 0x48) = uVar14;
    uVar14 = *(undefined8 *)(pcVar20 + 0x58);
    *(undefined8 *)(pcVar8 + 0x50) = *(undefined8 *)(pcVar20 + 0x50);
    *(undefined8 *)(pcVar8 + 0x58) = uVar14;
    uVar14 = *(undefined8 *)(pcVar20 + 0x68);
    *(undefined8 *)(pcVar8 + 0x60) = *(undefined8 *)(pcVar20 + 0x60);
    *(undefined8 *)(pcVar8 + 0x68) = uVar14;
    uVar14 = *(undefined8 *)(pcVar20 + 0x78);
    *(undefined8 *)(pcVar8 + 0x70) = *(undefined8 *)(pcVar20 + 0x70);
    *(undefined8 *)(pcVar8 + 0x78) = uVar14;
    lVar23 = lVar23 + -1;
    pcVar21 = pcVar8 + 0x80;
    pcVar18 = pcVar20 + 0x80;
  } while (lVar23 != 0);
  uVar14 = *(undefined8 *)(pcVar20 + 0x88);
  *(undefined8 *)(pcVar8 + 0x80) = *(undefined8 *)(pcVar20 + 0x80);
  *(undefined8 *)(pcVar8 + 0x88) = uVar14;
  uVar14 = *(undefined8 *)(pcVar20 + 0x98);
  *(undefined8 *)(pcVar8 + 0x90) = *(undefined8 *)(pcVar20 + 0x90);
  *(undefined8 *)(pcVar8 + 0x98) = uVar14;
  uVar14 = *(undefined8 *)(pcVar20 + 0xa8);
  *(undefined8 *)(pcVar8 + 0xa0) = *(undefined8 *)(pcVar20 + 0xa0);
  *(undefined8 *)(pcVar8 + 0xa8) = uVar14;
  uVar14 = *(undefined8 *)(pcVar20 + 0xb8);
  *(undefined8 *)(pcVar8 + 0xb0) = *(undefined8 *)(pcVar20 + 0xb0);
  *(undefined8 *)(pcVar8 + 0xb8) = uVar14;
  uVar14 = *(undefined8 *)(pcVar20 + 0xc5);
  *(undefined8 *)(pcVar8 + 0xbd) = *(undefined8 *)(pcVar20 + 0xbd);
  *(undefined8 *)(pcVar8 + 0xc5) = uVar14;
  uVar26 = (ulonglong)(param_1 != 0);
  iVar33 = param_4[1];
  iVar19 = *param_4;
  local_548 = 0;
  uStack_540 = 0;
  local_538 = 0;
  local_530 = 0;
  sVar9 = strlen(local_968);
  FUN_1800133a0(&local_548,local_968,sVar9);
  local_9e8 = (((longlong)iVar19 ^ 0x300000U) << 0x14 ^ (longlong)iVar33) + uVar26;
  FUN_1800e3760(pcVar34,*param_4,param_4[1],&local_548);
  if (local_530 < 0x10) {
LAB_1802dbd87:
    puVar29 = auStack_a08;
    if (param_1 != 0) goto LAB_1802dbd9c;
    puVar29 = auStack_a08;
    iVar33 = DAT_1809214a0;
  }
  else {
    uVar24 = local_530 + 1;
    uVar11 = local_548;
    if (uVar24 < 0x1000) {
LAB_1802dbd82:
      thunk_FUN_1803d64e0(uVar11,uVar24);
      goto LAB_1802dbd87;
    }
    uVar11 = *(ulonglong *)(local_548 - 8);
    if ((local_548 - uVar11) - 8 < 0x20) {
      uVar24 = local_530 + 0x28;
      goto LAB_1802dbd82;
    }
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar29 = auStack_a00;
LAB_1802dbd9c:
    iVar33 = DAT_1809214a8;
    if (DAT_1809214a8 < 0) {
      iVar33 = DAT_1809214a0;
    }
  }
  iVar19 = -1;
  if (iVar33 == 0) {
    piVar28 = (int *)0x0;
LAB_1802dbf4f:
    puVar29[0x50] = 0;
    local_128 = 0;
    lVar23 = 3;
    ppcVar6 = &local_2c8;
    pcVar34 = local_968;
    do {
      pcVar21 = pcVar34;
      ppcVar10 = ppcVar6;
      pcVar34 = ppcVar10[1];
      *(char **)pcVar21 = *ppcVar10;
      *(char **)(pcVar21 + 8) = pcVar34;
      pcVar34 = ppcVar10[3];
      *(char **)(pcVar21 + 0x10) = ppcVar10[2];
      *(char **)(pcVar21 + 0x18) = pcVar34;
      pcVar34 = ppcVar10[5];
      *(char **)(pcVar21 + 0x20) = ppcVar10[4];
      *(char **)(pcVar21 + 0x28) = pcVar34;
      pcVar34 = ppcVar10[7];
      *(char **)(pcVar21 + 0x30) = ppcVar10[6];
      *(char **)(pcVar21 + 0x38) = pcVar34;
      pcVar34 = ppcVar10[9];
      *(char **)(pcVar21 + 0x40) = ppcVar10[8];
      *(char **)(pcVar21 + 0x48) = pcVar34;
      pcVar34 = ppcVar10[0xb];
      *(char **)(pcVar21 + 0x50) = ppcVar10[10];
      *(char **)(pcVar21 + 0x58) = pcVar34;
      pcVar34 = ppcVar10[0xd];
      *(char **)(pcVar21 + 0x60) = ppcVar10[0xc];
      *(char **)(pcVar21 + 0x68) = pcVar34;
      pcVar34 = ppcVar10[0xf];
      *(char **)(pcVar21 + 0x70) = ppcVar10[0xe];
      *(char **)(pcVar21 + 0x78) = pcVar34;
      lVar23 = lVar23 + -1;
      ppcVar6 = ppcVar10 + 0x10;
      pcVar34 = pcVar21 + 0x80;
    } while (lVar23 != 0);
    pcVar34 = ppcVar10[0x11];
    *(char **)(pcVar21 + 0x80) = ppcVar10[0x10];
    *(char **)(pcVar21 + 0x88) = pcVar34;
    uVar2 = *(undefined4 *)((longlong)ppcVar10 + 0x94);
    uVar3 = *(undefined4 *)(ppcVar10 + 0x13);
    uVar4 = *(undefined4 *)((longlong)ppcVar10 + 0x9c);
    *(undefined4 *)(pcVar21 + 0x90) = *(undefined4 *)(ppcVar10 + 0x12);
    *(undefined4 *)(pcVar21 + 0x94) = uVar2;
    *(undefined4 *)(pcVar21 + 0x98) = uVar3;
    *(undefined4 *)(pcVar21 + 0x9c) = uVar4;
    *(undefined4 *)(pcVar21 + 0xa0) = *(undefined4 *)(ppcVar10 + 0x14);
    uVar11 = 0;
    do {
      if ((&DAT_18061bfc8)[uVar11] == 0x29) goto LAB_1802dbff6;
      uVar11 = uVar11 + 1;
    } while (uVar11 < 3);
    uVar11 = 0xffffffff;
LAB_1802dbff6:
    if ((int)uVar11 < 0) goto LAB_1802dbf26;
    uVar14 = *(undefined8 *)(&DAT_180cec7a8 + (uVar26 * 3 + (longlong)(int)uVar11) * 8);
  }
  else {
    if (0 < iVar33) {
      piVar28 = &DAT_18092174c;
      do {
        if ((*piVar28 == iVar33) && (piVar28[1] == (uint)bVar35)) goto LAB_1802dbe0a;
        piVar28 = piVar28 + 0x68;
      } while (piVar28 != &DAT_180931b4c);
      piVar28 = &DAT_18092174c;
      do {
        if ((*piVar28 == iVar33) && (piVar28[1] < 0)) goto LAB_1802dbe0a;
        piVar28 = piVar28 + 0x68;
      } while (piVar28 != &DAT_180931b4c);
    }
    piVar28 = (int *)0x0;
LAB_1802dbe0a:
    if ((piVar28 == (int *)0x0) || (piVar28[2] == 0)) goto LAB_1802dbf4f;
    puVar29[0x50] = 1;
    lVar23 = 3;
    piVar25 = piVar28;
    ppcVar6 = &local_2c8;
    do {
      ppcVar10 = ppcVar6;
      piVar13 = piVar25;
      pcVar34 = *(char **)(piVar13 + 2);
      *ppcVar10 = *(char **)piVar13;
      ppcVar10[1] = pcVar34;
      pcVar34 = *(char **)(piVar13 + 6);
      ppcVar10[2] = *(char **)(piVar13 + 4);
      ppcVar10[3] = pcVar34;
      pcVar34 = *(char **)(piVar13 + 10);
      ppcVar10[4] = *(char **)(piVar13 + 8);
      ppcVar10[5] = pcVar34;
      pcVar34 = *(char **)(piVar13 + 0xe);
      ppcVar10[6] = *(char **)(piVar13 + 0xc);
      ppcVar10[7] = pcVar34;
      pcVar34 = *(char **)(piVar13 + 0x12);
      ppcVar10[8] = *(char **)(piVar13 + 0x10);
      ppcVar10[9] = pcVar34;
      pcVar34 = *(char **)(piVar13 + 0x16);
      ppcVar10[10] = *(char **)(piVar13 + 0x14);
      ppcVar10[0xb] = pcVar34;
      pcVar34 = *(char **)(piVar13 + 0x1a);
      ppcVar10[0xc] = *(char **)(piVar13 + 0x18);
      ppcVar10[0xd] = pcVar34;
      pcVar34 = *(char **)(piVar13 + 0x1e);
      ppcVar10[0xe] = *(char **)(piVar13 + 0x1c);
      ppcVar10[0xf] = pcVar34;
      lVar23 = lVar23 + -1;
      piVar25 = piVar13 + 0x20;
      ppcVar6 = ppcVar10 + 0x10;
    } while (lVar23 != 0);
    pcVar34 = *(char **)(piVar13 + 0x22);
    ppcVar10[0x10] = *(char **)(piVar13 + 0x20);
    ppcVar10[0x11] = pcVar34;
    pcVar34 = *(char **)(piVar13 + 0x26);
    ppcVar10[0x12] = *(char **)(piVar13 + 0x24);
    ppcVar10[0x13] = pcVar34;
    local_128 = 1;
    lVar23 = 3;
    ppcVar6 = &local_2c8;
    pcVar34 = local_968;
    do {
      pcVar21 = pcVar34;
      ppcVar10 = ppcVar6;
      pcVar34 = ppcVar10[1];
      *(char **)pcVar21 = *ppcVar10;
      *(char **)(pcVar21 + 8) = pcVar34;
      pcVar34 = ppcVar10[3];
      *(char **)(pcVar21 + 0x10) = ppcVar10[2];
      *(char **)(pcVar21 + 0x18) = pcVar34;
      pcVar34 = ppcVar10[5];
      *(char **)(pcVar21 + 0x20) = ppcVar10[4];
      *(char **)(pcVar21 + 0x28) = pcVar34;
      pcVar34 = ppcVar10[7];
      *(char **)(pcVar21 + 0x30) = ppcVar10[6];
      *(char **)(pcVar21 + 0x38) = pcVar34;
      pcVar34 = ppcVar10[9];
      *(char **)(pcVar21 + 0x40) = ppcVar10[8];
      *(char **)(pcVar21 + 0x48) = pcVar34;
      pcVar34 = ppcVar10[0xb];
      *(char **)(pcVar21 + 0x50) = ppcVar10[10];
      *(char **)(pcVar21 + 0x58) = pcVar34;
      pcVar34 = ppcVar10[0xd];
      *(char **)(pcVar21 + 0x60) = ppcVar10[0xc];
      *(char **)(pcVar21 + 0x68) = pcVar34;
      pcVar34 = ppcVar10[0xf];
      *(char **)(pcVar21 + 0x70) = ppcVar10[0xe];
      *(char **)(pcVar21 + 0x78) = pcVar34;
      lVar23 = lVar23 + -1;
      ppcVar6 = ppcVar10 + 0x10;
      pcVar34 = pcVar21 + 0x80;
    } while (lVar23 != 0);
    pcVar34 = ppcVar10[0x11];
    *(char **)(pcVar21 + 0x80) = ppcVar10[0x10];
    *(char **)(pcVar21 + 0x88) = pcVar34;
    uVar2 = *(undefined4 *)((longlong)ppcVar10 + 0x94);
    uVar3 = *(undefined4 *)(ppcVar10 + 0x13);
    uVar4 = *(undefined4 *)((longlong)ppcVar10 + 0x9c);
    *(undefined4 *)(pcVar21 + 0x90) = *(undefined4 *)(ppcVar10 + 0x12);
    *(undefined4 *)(pcVar21 + 0x94) = uVar2;
    *(undefined4 *)(pcVar21 + 0x98) = uVar3;
    *(undefined4 *)(pcVar21 + 0x9c) = uVar4;
    *(undefined4 *)(pcVar21 + 0xa0) = *(undefined4 *)(ppcVar10 + 0x14);
LAB_1802dbf26:
    uVar14 = 0;
  }
  lVar23 = 3;
  *(undefined8 *)(puVar29 + 0x78) = uVar14;
  uVar11 = 0;
  do {
    if ((&DAT_18061bfc8)[uVar11] == 2) {
      iVar19 = (int)uVar11;
      break;
    }
    uVar11 = uVar11 + 1;
  } while (uVar11 < 3);
  if (iVar19 < 0) {
    *(undefined8 *)(puVar29 + 0x70) = 0;
  }
  else {
    *(undefined8 *)(puVar29 + 0x70) =
         *(undefined8 *)(&DAT_180cec7a8 + (uVar26 * 3 + (longlong)iVar19) * 8);
  }
  local_988 = 0;
  local_560 = 0;
  uStack_558 = 0;
  bVar32 = 0;
  uVar27 = 0;
  if (*(longlong *)(puVar29 + 0x60) != 0) {
    if (*(char *)(*(longlong *)(puVar29 + 0x60) + 0xd0) != '\0') {
      *(undefined8 *)(puVar29 + -8) = 0x1802dc071;
      cVar7 = FUN_180276240(*(undefined4 *)(puVar29 + 0x58));
      if (cVar7 == '\0') goto LAB_1802dc110;
    }
    puVar12 = (undefined8 *)&DAT_1809216bc;
    if (*(int *)(puVar29 + 0x68) != 0) {
      puVar12 = (undefined8 *)&DAT_1809216d0;
    }
    local_560 = *puVar12;
    uStack_558 = puVar12[1];
    local_550 = *(uint *)(puVar12 + 2);
    piVar25 = (int *)&local_560;
    do {
      iVar19 = *piVar25;
      if ((iVar19 < 1) || (piVar13 = DAT_180cfc8b0, DAT_180ccfeda == '\0')) {
LAB_1802dc0ea:
        *piVar25 = 0;
        iVar19 = 0;
      }
      else {
        for (; piVar13 != DAT_180cfc8b8; piVar13 = piVar13 + 0x26) {
          if (*piVar13 == iVar19) goto LAB_1802dc0e5;
        }
        piVar13 = (int *)0x0;
LAB_1802dc0e5:
        if (piVar13 == (int *)0x0) goto LAB_1802dc0ea;
      }
      bVar32 = bVar32 | iVar19 != 0;
      piVar25 = piVar25 + 1;
    } while (piVar25 != &local_54c);
    local_988 = (ulonglong)local_550;
    uVar27 = local_550;
  }
LAB_1802dc110:
  if (puVar29[0x50] == '\0') {
    *(undefined8 *)(puVar29 + -8) = 0x1802dc144;
    uVar14 = FUN_18004e4f0(local_308,uVar14);
    *(undefined8 *)(puVar29 + 0x68) = uVar14;
    uVar30 = 2;
  }
  else {
    *(undefined8 *)(puVar29 + -8) = 0x1802dc129;
    uVar14 = FUN_1800dff20(local_2e8,iVar33,piVar28);
    *(undefined8 *)(puVar29 + 0x68) = uVar14;
    uVar30 = 1;
  }
  *(uint *)(puVar29 + 0x54) = uVar30;
  *(undefined8 *)(puVar29 + -8) = 0x1802dc163;
  local_980 = FUN_18004e4f0(local_328,*(undefined8 *)(puVar29 + 0x70));
  if (bVar32 == 0) {
    uStack_540 = 0;
    local_538 = 5;
    local_530 = 0xf;
    local_548 = (ulonglong)CONCAT14(s_plain_18075f8f0[4],s_plain_18075f8f0._0_4_);
    *(undefined8 **)(puVar29 + 0x60) = &local_548;
    uVar30 = uVar30 | 8;
  }
  else {
    local_a8[0] = '\0';
    local_a8[1] = '\0';
    local_a8[2] = '\0';
    local_a8[3] = '\0';
    local_a8[4] = '\0';
    local_a8[5] = '\0';
    local_a8[6] = '\0';
    local_a8[7] = '\0';
    local_a8[8] = '\0';
    local_a8[9] = '\0';
    local_a8[10] = '\0';
    local_a8[0xb] = '\0';
    local_a8[0xc] = '\0';
    local_a8[0xd] = '\0';
    local_a8[0xe] = '\0';
    local_a8[0xf] = '\0';
    local_a8[0x10] = '\0';
    local_a8[0x11] = '\0';
    local_a8[0x12] = '\0';
    local_a8[0x13] = '\0';
    local_a8[0x14] = '\0';
    local_a8[0x15] = '\0';
    local_a8[0x16] = '\0';
    local_a8[0x17] = '\0';
    local_a8[0x18] = '\0';
    local_a8[0x19] = '\0';
    local_a8[0x1a] = '\0';
    local_a8[0x1b] = '\0';
    local_a8[0x1c] = '\0';
    local_a8[0x1d] = '\0';
    local_a8[0x1e] = '\0';
    local_a8[0x1f] = '\0';
    local_a8[0x20] = '\0';
    local_a8[0x21] = '\0';
    local_a8[0x22] = '\0';
    local_a8[0x23] = '\0';
    local_a8[0x24] = '\0';
    local_a8[0x25] = '\0';
    local_a8[0x26] = '\0';
    local_a8[0x27] = '\0';
    local_a8[0x28] = '\0';
    local_a8[0x29] = '\0';
    local_a8[0x2a] = '\0';
    local_a8[0x2b] = '\0';
    local_a8[0x2c] = '\0';
    local_a8[0x2d] = '\0';
    local_a8[0x2e] = '\0';
    local_a8[0x2f] = '\0';
    local_a8[0x30] = '\0';
    local_a8[0x31] = '\0';
    local_a8[0x32] = '\0';
    local_a8[0x33] = '\0';
    local_a8[0x34] = '\0';
    local_a8[0x35] = '\0';
    local_a8[0x36] = '\0';
    local_a8[0x37] = '\0';
    local_a8[0x38] = '\0';
    local_a8[0x39] = '\0';
    local_a8[0x3a] = '\0';
    local_a8[0x3b] = '\0';
    local_a8[0x3c] = '\0';
    local_a8[0x3d] = '\0';
    local_a8[0x3e] = '\0';
    local_a8[0x3f] = '\0';
    local_a8[0x40] = '\0';
    local_a8[0x41] = '\0';
    local_a8[0x42] = '\0';
    local_a8[0x43] = '\0';
    local_a8[0x44] = '\0';
    local_a8[0x45] = '\0';
    local_a8[0x46] = '\0';
    local_a8[0x47] = '\0';
    local_a8[0x48] = '\0';
    local_a8[0x49] = '\0';
    local_a8[0x4a] = '\0';
    local_a8[0x4b] = '\0';
    local_a8[0x4c] = '\0';
    local_a8[0x4d] = '\0';
    local_a8[0x4e] = '\0';
    local_a8[0x4f] = '\0';
    local_a8[0x50] = '\0';
    local_a8[0x51] = '\0';
    local_a8[0x52] = '\0';
    local_a8[0x53] = '\0';
    local_a8[0x54] = '\0';
    local_a8[0x55] = '\0';
    local_a8[0x56] = '\0';
    local_a8[0x57] = '\0';
    local_a8[0x58] = '\0';
    local_a8[0x59] = '\0';
    local_a8[0x5a] = '\0';
    local_a8[0x5b] = '\0';
    local_a8[0x5c] = '\0';
    local_a8[0x5d] = '\0';
    local_a8[0x5e] = '\0';
    local_a8[0x5f] = '\0';
    *(uint *)(puVar29 + 0x40) = uVar27;
    *(undefined4 *)(puVar29 + 0x38) = uStack_558._4_4_;
    *(undefined4 *)(puVar29 + 0x30) = (undefined4)uStack_558;
    *(undefined4 *)(puVar29 + 0x28) = local_560._4_4_;
    *(int *)(puVar29 + 0x20) = (int)local_560;
    *(undefined8 *)(puVar29 + -8) = 0x1802dc1e6;
    snprintf(local_a8,0x60,"agent|%d|%d|%d|%d|%d|%d",*(undefined4 *)(puVar29 + 0x58));
    local_508[0] = 0;
    local_508[1] = 0;
    local_508[2] = 0;
    local_508[3] = 0;
    *(undefined8 *)(puVar29 + -8) = 0x1802dc20c;
    sVar9 = strlen(local_a8);
    *(undefined8 *)(puVar29 + -8) = 0x1802dc222;
    FUN_1800133a0(local_508,local_a8,sVar9);
    *(longlong **)(puVar29 + 0x60) = local_508;
    uVar30 = uVar30 | 0x404;
  }
  *(uint *)(puVar29 + 0x54) = uVar30;
  *(undefined8 *)(puVar29 + -8) = 0x1802dc29a;
  uVar14 = FUN_18004e4f0(local_348,local_590);
  *(undefined8 *)(puVar29 + -8) = 0x1802dc2af;
  uVar15 = FUN_18003a390(local_368,local_598);
  *(undefined8 *)(puVar29 + -8) = 0x1802dc2c1;
  uVar16 = FUN_18003a390(local_388,bVar35);
  *(undefined8 *)(puVar29 + -8) = 0x1802dc2d7;
  puVar17 = (undefined4 *)FUN_1800134a0(uVar16,&DAT_1806e9100,1);
  local_488 = *puVar17;
  uStack_484 = puVar17[1];
  uStack_480 = puVar17[2];
  uStack_47c = puVar17[3];
  local_478 = puVar17[4];
  uStack_474 = puVar17[5];
  uStack_470 = puVar17[6];
  uStack_46c = puVar17[7];
  *(undefined8 *)(puVar17 + 4) = 0;
  *(undefined8 *)(puVar17 + 6) = 0xf;
  *(undefined1 *)puVar17 = 0;
  *(uint *)(puVar29 + 0x54) = uVar30 | 0x40;
  *(undefined8 *)(puVar29 + -8) = 0x1802dc31c;
  uVar15 = FUN_180066820(local_3a8,&local_488,uVar15);
  *(undefined8 *)(puVar29 + -8) = 0x1802dc332;
  puVar17 = (undefined4 *)FUN_1800134a0(uVar15,&DAT_1806e9100,1);
  local_468 = *puVar17;
  uStack_464 = puVar17[1];
  uStack_460 = puVar17[2];
  uStack_45c = puVar17[3];
  local_458 = puVar17[4];
  uStack_454 = puVar17[5];
  uStack_450 = puVar17[6];
  uStack_44c = puVar17[7];
  *(undefined8 *)(puVar17 + 4) = 0;
  *(undefined8 *)(puVar17 + 6) = 0xf;
  *(undefined1 *)puVar17 = 0;
  *(uint *)(puVar29 + 0x54) = uVar30 | 0xc0;
  *(undefined8 *)(puVar29 + -8) = 0x1802dc377;
  uVar14 = FUN_180066820(local_3c8,&local_468,uVar14);
  *(undefined8 *)(puVar29 + -8) = 0x1802dc38d;
  puVar12 = (undefined8 *)FUN_1800134a0(uVar14,&DAT_1806e9100,1);
  local_528 = *puVar12;
  uStack_520 = puVar12[1];
  local_518 = puVar12[2];
  uStack_510 = puVar12[3];
  puVar12[2] = 0;
  puVar12[3] = 0xf;
  *(undefined1 *)puVar12 = 0;
  *(uint *)(puVar29 + 0x54) = uVar30 | 0x1c0;
  *(undefined8 *)(puVar29 + -8) = 0x1802dc3ed;
  uVar14 = FUN_1800667a0(local_3e8,&local_528,local_580);
  *(undefined8 *)(puVar29 + -8) = 0x1802dc403;
  puVar17 = (undefined4 *)FUN_1800134a0(uVar14,&DAT_1806e9100,1);
  local_4a8 = *puVar17;
  uStack_4a4 = puVar17[1];
  uStack_4a0 = puVar17[2];
  uStack_49c = puVar17[3];
  local_498 = puVar17[4];
  uStack_494 = puVar17[5];
  uStack_490 = puVar17[6];
  uStack_48c = puVar17[7];
  *(undefined8 *)(puVar17 + 4) = 0;
  *(undefined8 *)(puVar17 + 6) = 0xf;
  *(undefined1 *)puVar17 = 0;
  *(uint *)(puVar29 + 0x54) = uVar30 | 0x1e0;
  *(undefined8 *)(puVar29 + -8) = 0x1802dc449;
  uVar14 = FUN_180066820(local_408,&local_4a8,*(undefined8 *)(puVar29 + 0x60));
  *(undefined8 *)(puVar29 + -8) = 0x1802dc45f;
  puVar17 = (undefined4 *)FUN_1800134a0(uVar14,"|pistol|",8);
  local_4c8 = *puVar17;
  uStack_4c4 = puVar17[1];
  uStack_4c0 = puVar17[2];
  uStack_4bc = puVar17[3];
  local_4b8 = puVar17[4];
  uStack_4b4 = puVar17[5];
  uStack_4b0 = puVar17[6];
  uStack_4ac = puVar17[7];
  *(undefined8 *)(puVar17 + 4) = 0;
  *(undefined8 *)(puVar17 + 6) = 0xf;
  *(undefined1 *)puVar17 = 0;
  *(uint *)(puVar29 + 0x54) = uVar30 | 0x3e0;
  *(undefined8 *)(puVar29 + -8) = 0x1802dc4a4;
  uVar14 = FUN_180066820(local_428,&local_4c8,local_980);
  *(undefined8 *)(puVar29 + -8) = 0x1802dc4ba;
  puVar17 = (undefined4 *)FUN_1800134a0(uVar14,"|gloves|",8);
  local_4e8 = *puVar17;
  uStack_4e4 = puVar17[1];
  uStack_4e0 = puVar17[2];
  uStack_4dc = puVar17[3];
  local_4d8 = puVar17[4];
  uStack_4d4 = puVar17[5];
  uStack_4d0 = puVar17[6];
  uStack_4cc = puVar17[7];
  *(undefined8 *)(puVar17 + 4) = 0;
  *(undefined8 *)(puVar17 + 6) = 0xf;
  *(undefined1 *)puVar17 = 0;
  uVar27 = uVar30 | 0x3f0;
  *(uint *)(puVar29 + 0x54) = uVar27;
  *(undefined8 *)(puVar29 + -8) = 0x1802dc501;
  FUN_180066820(local_448,&local_4e8,*(undefined8 *)(puVar29 + 0x68));
  uVar26 = CONCAT44(uStack_4cc,uStack_4d0);
  if (0xf < uVar26) {
    uVar11 = uVar26 + 1;
    lVar5 = CONCAT44(uStack_4e4,local_4e8);
    lVar22 = lVar5;
    if (0xfff < uVar11) {
      lVar22 = *(longlong *)(lVar5 + -8);
      if (0x1f < (lVar5 - lVar22) - 8U) {
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        goto LAB_1802dc83f;
      }
      uVar11 = uVar26 + 0x28;
    }
    *(undefined8 *)(puVar29 + -8) = 0x1802dc543;
    thunk_FUN_1803d64e0(lVar22,uVar11);
  }
  *(undefined8 *)(puVar29 + -8) = 0x1802dc550;
  FUN_18000f890(local_428);
  *(undefined8 *)(puVar29 + -8) = 0x1802dc55d;
  FUN_18000f890(&local_4c8);
  *(undefined8 *)(puVar29 + -8) = 0x1802dc56a;
  FUN_18000f890(local_408);
  *(undefined8 *)(puVar29 + -8) = 0x1802dc577;
  FUN_18000f890(&local_4a8);
  *(undefined8 *)(puVar29 + -8) = 0x1802dc584;
  FUN_18000f890(local_3e8);
  *(undefined8 *)(puVar29 + -8) = 0x1802dc591;
  FUN_18000f890(&local_528);
  *(undefined8 *)(puVar29 + -8) = 0x1802dc59e;
  FUN_18000f890(local_3c8);
  *(undefined8 *)(puVar29 + -8) = 0x1802dc5ab;
  FUN_18000f890(&local_468);
  *(undefined8 *)(puVar29 + -8) = 0x1802dc5b8;
  FUN_18000f890(local_3a8);
  *(undefined8 *)(puVar29 + -8) = 0x1802dc5c5;
  FUN_18000f890(&local_488);
  *(undefined8 *)(puVar29 + -8) = 0x1802dc5d2;
  FUN_18000f890(local_388);
  *(undefined8 *)(puVar29 + -8) = 0x1802dc5df;
  FUN_18000f890(local_368);
  *(undefined8 *)(puVar29 + -8) = 0x1802dc5ec;
  FUN_18000f890(local_348);
  if ((uVar30 & 8) != 0) {
    uVar27 = uVar30 & 0xfffffff7;
    *(undefined8 *)(puVar29 + -8) = 0x1802dc602;
    FUN_18000f890(&local_548);
  }
  if (((uVar27 & 4) != 0) && (uVar27 = uVar27 & 0xfffffffb, 0xf < (ulonglong)local_508[3])) {
    uVar26 = local_508[3] + 1;
    lVar22 = local_508[0];
    if (0xfff < uVar26) {
      lVar22 = *(longlong *)(local_508[0] + -8);
      if (0x1f < (local_508[0] - lVar22) - 8U) {
LAB_1802dc83f:
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar26 = local_508[3] + 0x28;
    }
    *(undefined8 *)(puVar29 + -8) = 0x1802dc64c;
    thunk_FUN_1803d64e0(lVar22,uVar26);
  }
  *(undefined8 *)(puVar29 + -8) = 0x1802dc659;
  FUN_18000f890(local_328);
  if ((uVar27 & 2) != 0) {
    uVar27 = uVar27 & 0xfffffffd;
    *(undefined8 *)(puVar29 + -8) = 0x1802dc66e;
    FUN_18000f890(local_308);
  }
  if ((uVar27 & 1) != 0) {
    *(undefined8 *)(puVar29 + -8) = 0x1802dc680;
    FUN_18000f890(local_2e8);
  }
  pcVar34 = local_978;
  local_2c8 = local_978;
  local_2b8 = local_598;
  uStack_2b4 = local_594;
  uStack_2b0 = local_590;
  local_2a8 = local_588;
  uStack_2a7 = local_587;
  *(undefined8 *)(puVar29 + -8) = 0x1802dc6e5;
  uStack_2c0 = (uint)bVar35;
  FUN_180024b50(auStack_2a0,local_580);
  bStack_280 = bVar32;
  uStack_27c = *(undefined4 *)(puVar29 + 0x58);
  local_278 = (int)local_560;
  uStack_274 = local_560._4_4_;
  uStack_270 = (undefined4)uStack_558;
  uStack_26c = uStack_558._4_4_;
  local_268 = (int)local_988;
  uStack_260 = *(undefined8 *)(puVar29 + 0x70);
  local_258 = iVar33;
  pcVar21 = local_968;
  puVar12 = auStack_254;
  do {
    puVar31 = puVar12;
    pcVar18 = pcVar21;
    uVar14 = *(undefined8 *)(pcVar18 + 8);
    *puVar31 = *(undefined8 *)pcVar18;
    puVar31[1] = uVar14;
    uVar14 = *(undefined8 *)(pcVar18 + 0x18);
    puVar31[2] = *(undefined8 *)(pcVar18 + 0x10);
    puVar31[3] = uVar14;
    uVar14 = *(undefined8 *)(pcVar18 + 0x28);
    puVar31[4] = *(undefined8 *)(pcVar18 + 0x20);
    puVar31[5] = uVar14;
    uVar14 = *(undefined8 *)(pcVar18 + 0x38);
    puVar31[6] = *(undefined8 *)(pcVar18 + 0x30);
    puVar31[7] = uVar14;
    uVar14 = *(undefined8 *)(pcVar18 + 0x48);
    puVar31[8] = *(undefined8 *)(pcVar18 + 0x40);
    puVar31[9] = uVar14;
    uVar14 = *(undefined8 *)(pcVar18 + 0x58);
    puVar31[10] = *(undefined8 *)(pcVar18 + 0x50);
    puVar31[0xb] = uVar14;
    uVar14 = *(undefined8 *)(pcVar18 + 0x68);
    puVar31[0xc] = *(undefined8 *)(pcVar18 + 0x60);
    puVar31[0xd] = uVar14;
    uVar14 = *(undefined8 *)(pcVar18 + 0x78);
    puVar31[0xe] = *(undefined8 *)(pcVar18 + 0x70);
    puVar31[0xf] = uVar14;
    lVar23 = lVar23 + -1;
    pcVar21 = pcVar18 + 0x80;
    puVar12 = puVar31 + 0x10;
  } while (lVar23 != 0);
  uVar2 = *(undefined4 *)(pcVar18 + 0x84);
  uVar3 = *(undefined4 *)(pcVar18 + 0x88);
  uVar4 = *(undefined4 *)(pcVar18 + 0x8c);
  *(undefined4 *)(puVar31 + 0x10) = *(undefined4 *)(pcVar18 + 0x80);
  *(undefined4 *)((longlong)puVar31 + 0x84) = uVar2;
  *(undefined4 *)(puVar31 + 0x11) = uVar3;
  *(undefined4 *)((longlong)puVar31 + 0x8c) = uVar4;
  uVar2 = *(undefined4 *)(pcVar18 + 0x94);
  uVar3 = *(undefined4 *)(pcVar18 + 0x98);
  uVar4 = *(undefined4 *)(pcVar18 + 0x9c);
  *(undefined4 *)(puVar31 + 0x12) = *(undefined4 *)(pcVar18 + 0x90);
  *(undefined4 *)((longlong)puVar31 + 0x94) = uVar2;
  *(undefined4 *)(puVar31 + 0x13) = uVar3;
  *(undefined4 *)((longlong)puVar31 + 0x9c) = uVar4;
  *(undefined4 *)(puVar31 + 0x14) = *(undefined4 *)(pcVar18 + 0xa0);
  local_b0 = *(undefined8 *)(puVar29 + 0x78);
  *(undefined8 *)(puVar29 + -8) = 0x1802dc7e7;
  FUN_180344de0(pcVar34,local_970,local_448,&local_2c8);
  *(undefined8 *)(puVar29 + -8) = 0x1802dc7f4;
  FUN_18000f890(auStack_2a0);
  *(undefined8 *)(puVar29 + -8) = 0x1802dc801;
  FUN_18000f890(local_448);
  *(undefined8 *)(puVar29 + -8) = 0x1802dc80e;
  FUN_18000f890(local_580);
  *(undefined8 *)(puVar29 + -8) = 0x1802dc81d;
  return;
}



/* ===== 1802dc850 FUN_1802dc850 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1802dc850(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  char *_Str;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  size_t sVar16;
  undefined8 uVar17;
  undefined4 *puVar18;
  ulonglong *puVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  uint uVar22;
  undefined1 *puVar23;
  undefined1 *puVar24;
  undefined1 *puVar25;
  undefined1 *puVar26;
  undefined1 *puVar27;
  undefined1 *puVar28;
  undefined1 *puVar29;
  undefined *puVar30;
  undefined8 *puVar31;
  uint uVar32;
  undefined4 uVar33;
  undefined8 uStack_300;
  undefined1 auStack_2f8 [8];
  undefined1 auStack_2f0 [24];
  undefined4 local_2d8;
  char *local_2d0;
  char *local_2c8;
  undefined8 *local_2c0;
  undefined8 *local_2b8;
  undefined8 local_2b0;
  undefined8 ****local_2a8;
  uint local_298;
  longlong *local_290;
  undefined8 *local_288;
  ulonglong local_280 [5];
  ulonglong uStack_258;
  ulonglong local_250;
  ulonglong uStack_248;
  longlong local_240 [4];
  undefined8 ****local_220 [3];
  ulonglong local_208;
  undefined4 local_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 local_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 local_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 local_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 local_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 local_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 local_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined1 local_180 [32];
  undefined1 local_160 [32];
  undefined1 local_140 [32];
  undefined1 local_120 [32];
  undefined1 local_100 [32];
  undefined1 local_e0 [32];
  undefined1 local_c0 [32];
  undefined1 local_a0 [32];
  undefined1 local_80 [32];
  undefined1 local_60 [32];
  ulonglong local_40;
  
  local_40 = DAT_180919500 ^ (ulonglong)auStack_2f8;
  local_298 = 0;
  puVar31 = (undefined8 *)param_1[3];
  bVar6 = false;
  local_288 = param_2;
  if (*(char *)(param_1 + 9) == '\0') goto LAB_1802dc971;
  iVar1 = *(int *)((longlong)param_1 + 0x4c);
  local_290 = (longlong *)&DAT_1809ebc50;
  iVar8 = FUN_1804e4d70(&DAT_1809ebc50);
  puVar29 = auStack_2f8;
  if (iVar8 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809ebc9c == 0x7fffffff) goto LAB_1802dd0b8;
  if ((((iVar1 == 0) || (DAT_180961ad8 == 0)) || (DAT_180961ae0 == 0)) || (DAT_180961ae8 == 0)) {
    FUN_1804e4e90(&DAT_1809ebc50);
  }
  else {
    FUN_1800e0410(local_280,iVar1,param_1 + 10);
    puVar9 = (undefined8 *)FUN_1800dfcd0(local_280);
    if (puVar9 == (undefined8 *)0x0) {
      lVar10 = FUN_1800dfb90();
      if ((lVar10 == 0) && (899 < DAT_180cd1030)) {
        FUN_18000f890(local_280);
LAB_1802dc969:
        FUN_1804e4e90(&DAT_1809ebc50);
      }
      else {
        puVar9 = (undefined8 *)FUN_1800dfa00(iVar1,0,0);
        if (puVar9 == (undefined8 *)0x0) {
          FUN_18000f890(local_280);
          goto LAB_1802dc969;
        }
        cVar7 = FUN_1800dfaa0(puVar9,param_1 + 10);
        if (cVar7 == '\0') {
          FUN_1800df940("dressing the agent faulted | def %d",iVar1);
        }
        puVar11 = (undefined8 *)FUN_1800dfb70(puVar9);
        local_2c8 = (char *)CONCAT44(local_2c8._4_4_,*(undefined4 *)(param_1 + 0xc));
        local_2d0 = (char *)CONCAT44(local_2d0._4_4_,*(undefined4 *)((longlong)param_1 + 0x5c));
        local_2d8 = *(undefined4 *)(param_1 + 0xb);
        local_2c0 = puVar9;
        local_2b8 = puVar11;
        uVar33 = FUN_1800df940("agent %d | patches %d %d %d %d %d | view %p | id %llu",iVar1,
                               *(undefined4 *)(param_1 + 10),
                               *(undefined4 *)((longlong)param_1 + 0x54));
        if (puVar11 != (undefined8 *)0x0) {
          plVar12 = (longlong *)FUN_1800e1460(uVar33,local_280 + 4,local_280);
          lVar10 = *plVar12;
          *(undefined8 **)(lVar10 + 0x30) = puVar11;
          *(undefined8 **)(lVar10 + 0x38) = puVar9;
        }
        FUN_18000f890(local_280);
        FUN_1804e4e90(&DAT_1809ebc50);
        if (puVar11 != (undefined8 *)0x0) {
          bVar6 = true;
          puVar31 = puVar11;
          goto LAB_1802dc971;
        }
      }
      bVar6 = false;
    }
    else {
      FUN_18000f890(local_280);
      FUN_1804e4e90(&DAT_1809ebc50);
      bVar6 = true;
      puVar31 = puVar9;
    }
  }
LAB_1802dc971:
  puVar23 = auStack_2f8;
  puVar24 = auStack_2f8;
  puVar25 = auStack_2f8;
  puVar26 = auStack_2f8;
  puVar27 = auStack_2f8;
  puVar28 = auStack_2f8;
  FUN_1802da3c0(local_220,*(undefined4 *)(param_1 + 0xe),(longlong)param_1 + 0x74,param_1[0x43]);
  local_2a8 = local_220;
  if (0xf < local_208) {
    local_2a8 = local_220[0];
  }
  local_2b0 = param_1[0xd];
  if ((ulonglong)param_1[8] < 0x10) {
    local_2b8 = param_1 + 5;
  }
  else {
    local_2b8 = (undefined8 *)param_1[5];
  }
  local_2c8 = "";
  if (*(char *)(param_1 + 4) != '\0') {
    local_2c8 = " | custom";
  }
  if (bVar6) {
    local_2d0 = "patched preview item";
  }
  else {
    local_2d0 = "faux item";
    if (*(char *)((longlong)param_1 + 0x21) != '\0') {
      local_2d0 = "loadout item";
    }
  }
  puVar30 = &DAT_1806dfd54;
  if (*(int *)(param_1 + 1) == 0) {
    puVar30 = &DAT_18070a238;
  }
  local_2d8 = *(undefined4 *)((longlong)param_1 + 0x14);
  local_2c0 = puVar31;
  FUN_1800e4040("agent view %s | team %s | agent %d | loadout agent %d | %s%s | item %llu | model %s | pistol %llu | gloves %s"
                ,*param_1,puVar30,*(undefined4 *)(param_1 + 2));
  if (param_1[0xd] == 0) {
    local_240[1] = 0;
    local_240[2] = 0;
    local_240[3] = 0xf;
    local_240[0] = 0;
    local_290 = local_240;
    uVar32 = 2;
  }
  else {
    local_290 = (longlong *)FUN_18004e4f0(local_60);
    uVar32 = 1;
  }
  local_298 = uVar32;
  uVar13 = FUN_1802d78d0(local_80,param_1 + 5);
  uVar14 = FUN_18004e4f0(local_a0,puVar31);
  uVar15 = FUN_18003a390(local_c0,5);
  _Str = (char *)*param_1;
  local_280[0] = 0;
  local_280[1] = 0;
  local_280[2] = 0;
  local_280[3] = 0;
  sVar16 = strlen(_Str);
  FUN_1800133a0(local_280,_Str,sVar16);
  uVar17 = FUN_180066ab0(local_e0,"var sceneKey = \'",local_280);
  puVar18 = (undefined4 *)FUN_1800134a0(uVar17,"\'; var character = ",0x13);
  local_1a0 = *puVar18;
  uStack_19c = puVar18[1];
  uStack_198 = puVar18[2];
  uStack_194 = puVar18[3];
  local_190 = puVar18[4];
  uStack_18c = puVar18[5];
  uStack_188 = puVar18[6];
  uStack_184 = puVar18[7];
  *(undefined8 *)(puVar18 + 4) = 0;
  *(undefined8 *)(puVar18 + 6) = 0xf;
  *(undefined1 *)puVar18 = 0;
  local_298 = uVar32 | 8;
  uVar15 = FUN_180066820(local_100,&local_1a0,uVar15);
  puVar18 = (undefined4 *)FUN_1800134a0(uVar15,"; var agentId = \'",0x11);
  local_1c0 = *puVar18;
  uStack_1bc = puVar18[1];
  uStack_1b8 = puVar18[2];
  uStack_1b4 = puVar18[3];
  local_1b0 = puVar18[4];
  uStack_1ac = puVar18[5];
  uStack_1a8 = puVar18[6];
  uStack_1a4 = puVar18[7];
  *(undefined8 *)(puVar18 + 4) = 0;
  *(undefined8 *)(puVar18 + 6) = 0xf;
  *(undefined1 *)puVar18 = 0;
  local_298 = uVar32 | 0x18;
  uVar14 = FUN_180066820(local_120,&local_1c0,uVar14);
  puVar18 = (undefined4 *)FUN_1800134a0(uVar14,"\'; var agentModel = ",0x14);
  local_1e0 = *puVar18;
  uStack_1dc = puVar18[1];
  uStack_1d8 = puVar18[2];
  uStack_1d4 = puVar18[3];
  local_1d0 = puVar18[4];
  uStack_1cc = puVar18[5];
  uStack_1c8 = puVar18[6];
  uStack_1c4 = puVar18[7];
  *(undefined8 *)(puVar18 + 4) = 0;
  *(undefined8 *)(puVar18 + 6) = 0xf;
  *(undefined1 *)puVar18 = 0;
  local_298 = uVar32 | 0x38;
  uVar13 = FUN_180066820(local_140,&local_1e0,uVar13);
  puVar18 = (undefined4 *)FUN_1800134a0(uVar13,"; var pistol = \'",0x10);
  local_200 = *puVar18;
  uStack_1fc = puVar18[1];
  uStack_1f8 = puVar18[2];
  uStack_1f4 = puVar18[3];
  local_1f0 = puVar18[4];
  uStack_1ec = puVar18[5];
  uStack_1e8 = puVar18[6];
  uStack_1e4 = puVar18[7];
  *(undefined8 *)(puVar18 + 4) = 0;
  *(undefined8 *)(puVar18 + 6) = 0xf;
  *(undefined1 *)puVar18 = 0;
  local_298 = uVar32 | 0x78;
  uVar13 = FUN_180066820(local_160,&local_200,local_290);
  puVar19 = (ulonglong *)FUN_1800134a0(uVar13,"\'; var gloves = ",0x10);
  local_280[4] = *puVar19;
  uStack_258 = puVar19[1];
  local_250 = puVar19[2];
  uStack_248 = puVar19[3];
  puVar19[2] = 0;
  puVar19[3] = 0xf;
  *(undefined1 *)puVar19 = 0;
  local_298 = uVar32 | 0xf8;
  uVar13 = FUN_1800667a0(local_180,local_280 + 4,local_220);
  puVar18 = (undefined4 *)FUN_1800134a0(uVar13,&DAT_1806f8e8c,1);
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  uVar33 = puVar18[1];
  uVar3 = puVar18[2];
  uVar4 = puVar18[3];
  *(undefined4 *)param_2 = *puVar18;
  *(undefined4 *)((longlong)param_2 + 4) = uVar33;
  *(undefined4 *)(param_2 + 1) = uVar3;
  *(undefined4 *)((longlong)param_2 + 0xc) = uVar4;
  uVar33 = puVar18[5];
  uVar3 = puVar18[6];
  uVar4 = puVar18[7];
  *(undefined4 *)(param_2 + 2) = puVar18[4];
  *(undefined4 *)((longlong)param_2 + 0x14) = uVar33;
  *(undefined4 *)(param_2 + 3) = uVar3;
  *(undefined4 *)((longlong)param_2 + 0x1c) = uVar4;
  *(undefined8 *)(puVar18 + 4) = 0;
  *(undefined8 *)(puVar18 + 6) = 0xf;
  *(undefined1 *)puVar18 = 0;
  uVar22 = uVar32 | 0x1fc;
  local_298 = uVar22;
  FUN_18000f890(local_180);
  if (0xf < uStack_248) {
    uVar20 = uStack_248 + 1;
    uVar21 = local_280[4];
    if (uVar20 < 0x1000) {
LAB_1802dce20:
      thunk_FUN_1803d64e0(uVar21,uVar20);
      goto LAB_1802dce25;
    }
    uVar21 = *(ulonglong *)(local_280[4] - 8);
    if ((local_280[4] - uVar21) - 8 < 0x20) {
      uVar20 = uStack_248 + 0x28;
      goto LAB_1802dce20;
    }
    pcVar2 = (code *)swi(0x29);
    (*pcVar2)(5);
    puVar23 = auStack_2f0;
LAB_1802dd08e:
    pcVar2 = (code *)swi(0x29);
    (*pcVar2)(5);
    puVar24 = puVar23 + 8;
LAB_1802dd095:
    pcVar2 = (code *)swi(0x29);
    (*pcVar2)(5);
    puVar25 = puVar24 + 8;
LAB_1802dd09c:
    pcVar2 = (code *)swi(0x29);
    (*pcVar2)(5);
    puVar26 = puVar25 + 8;
LAB_1802dd0a3:
    pcVar2 = (code *)swi(0x29);
    (*pcVar2)(5);
    puVar27 = puVar26 + 8;
LAB_1802dd0aa:
    pcVar2 = (code *)swi(0x29);
    (*pcVar2)(5);
    puVar28 = puVar27 + 8;
LAB_1802dd0b1:
    pcVar2 = (code *)swi(0x29);
    DAT_1809ebc9c = (*pcVar2)(5);
    puVar29 = puVar28 + 8;
LAB_1802dd0b8:
    DAT_1809ebc9c = DAT_1809ebc9c + -1;
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar29 + -8) = &UNK_1802dd0ca;
    FUN_1804e4a90(6);
  }
LAB_1802dce25:
  local_250 = 0;
  uStack_248 = 0xf;
  local_280[4] = local_280[4] & 0xffffffffffffff00;
  FUN_18000f890(local_160);
  uVar21 = CONCAT44(uStack_1e4,uStack_1e8);
  if (0xf < uVar21) {
    uVar20 = uVar21 + 1;
    lVar5 = CONCAT44(uStack_1fc,local_200);
    lVar10 = lVar5;
    if (0xfff < uVar20) {
      lVar10 = *(longlong *)(lVar5 + -8);
      if (0x1f < (lVar5 - lVar10) - 8U) goto LAB_1802dd08e;
      uVar20 = uVar21 + 0x28;
    }
    thunk_FUN_1803d64e0(lVar10,uVar20);
  }
  FUN_18000f890(local_140);
  uVar21 = CONCAT44(uStack_1c4,uStack_1c8);
  if (0xf < uVar21) {
    uVar20 = uVar21 + 1;
    lVar5 = CONCAT44(uStack_1dc,local_1e0);
    lVar10 = lVar5;
    if (0xfff < uVar20) {
      lVar10 = *(longlong *)(lVar5 + -8);
      if (0x1f < (lVar5 - lVar10) - 8U) goto LAB_1802dd095;
      uVar20 = uVar21 + 0x28;
    }
    thunk_FUN_1803d64e0(lVar10,uVar20);
  }
  FUN_18000f890(local_120);
  uVar21 = CONCAT44(uStack_1a4,uStack_1a8);
  if (0xf < uVar21) {
    uVar20 = uVar21 + 1;
    lVar5 = CONCAT44(uStack_1bc,local_1c0);
    lVar10 = lVar5;
    if (0xfff < uVar20) {
      lVar10 = *(longlong *)(lVar5 + -8);
      if (0x1f < (lVar5 - lVar10) - 8U) goto LAB_1802dd09c;
      uVar20 = uVar21 + 0x28;
    }
    thunk_FUN_1803d64e0(lVar10,uVar20);
  }
  FUN_18000f890(local_100);
  uVar21 = CONCAT44(uStack_184,uStack_188);
  if (0xf < uVar21) {
    uVar20 = uVar21 + 1;
    lVar5 = CONCAT44(uStack_19c,local_1a0);
    lVar10 = lVar5;
    if (0xfff < uVar20) {
      lVar10 = *(longlong *)(lVar5 + -8);
      if (0x1f < (lVar5 - lVar10) - 8U) goto LAB_1802dd0a3;
      uVar20 = uVar21 + 0x28;
    }
    thunk_FUN_1803d64e0(lVar10,uVar20);
  }
  FUN_18000f890(local_e0);
  if (0xf < local_280[3]) {
    uVar20 = local_280[3] + 1;
    uVar21 = local_280[0];
    if (0xfff < uVar20) {
      uVar21 = *(ulonglong *)(local_280[0] - 8);
      if (0x1f < (local_280[0] - uVar21) - 8) goto LAB_1802dd0aa;
      uVar20 = local_280[3] + 0x28;
    }
    thunk_FUN_1803d64e0(uVar21,uVar20);
  }
  local_280[2] = 0;
  local_280[3] = 0xf;
  local_280[0] = local_280[0] & 0xffffffffffffff00;
  FUN_18000f890(local_c0);
  FUN_18000f890(local_a0);
  FUN_18000f890(local_80);
  if ((uVar32 & 2) == 0) goto LAB_1802dd023;
  uVar22 = uVar32 & 0xfffffffd | 0x1fc;
  local_298 = uVar22;
  if ((ulonglong)local_240[3] < 0x10) goto LAB_1802dd023;
  uVar21 = local_240[3] + 1;
  lVar10 = local_240[0];
  if (0xfff < uVar21) {
    lVar10 = *(longlong *)(local_240[0] + -8);
    if (0x1f < (local_240[0] - lVar10) - 8U) goto LAB_1802dd0b1;
    uVar21 = local_240[3] + 0x28;
  }
  thunk_FUN_1803d64e0(lVar10,uVar21);
LAB_1802dd023:
  if ((uVar22 & 1) != 0) {
    local_298 = uVar22 & 0xfffffffe;
    FUN_18000f890(local_60);
  }
  FUN_1800134a0(param_2,
                "\n            var r0 = \'n/a\', r1 = \'n/a\', r2 = \'n/a\';\n            try {\n                if (panel.SetActiveCharacter) r0 = panel.SetActiveCharacter(character);\n                if (panel.SetPlayerCharacterItemID) r1 = panel.SetPlayerCharacterItemID(agentId, \'\');\n                if (panel.SetPlayerModel) r2 = panel.SetPlayerModel(agentModel);\n                if (pistol && panel.EquipPlayerWithItem) panel.EquipPlayerWithItem(pistol);\n                if (panel.TransitionToCamera) panel.TransitionToCamera(\'cam_char_inspect_wide\', 0);\n            } catch (e) { r0 = \'error \' + e; }\n            panel.Data().wlGloves = gloves;\n            var wear = function () { try { if (gloves && panel && panel.IsValid() && panel.Data().wlGloves === gloves && panel.EquipPlayerWithItem) panel.EquipPlayerWithItem(gloves); } catch (e) {} };\n            wear();\n            $.Schedule(0.25, wear);\n            $.Schedule(1.0, wear);\n            $.Msg(\'[neverlose] agent preview | \' + sceneKey + \' \' + panel.id + \' | active \' + character + \' -> \' + r0 + \' | item \' + agentId + \' -> \' + r1 + \' | model \' + agentModel + \' -> \' + r2 + \' | pistol \' + pistol + \' | gloves \' + gloves);\n"
                ,0x48a);
  FUN_18000f890(local_220);
  return param_2;
}



/* ===== 1802dd0e0 FUN_1802dd0e0 ===== */

bool FUN_1802dd0e0(undefined8 param_1,float *param_2,float *param_3)

{
  longlong lVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  undefined4 local_res20;
  undefined4 local_res24;
  undefined8 local_58;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  undefined8 local_38;
  longlong local_30;
  
  local_30 = FUN_1800e40f0();
  lVar1 = DAT_180ca0a50;
  if (((local_30 == 0) || (*param_3 <= 0.0)) || (param_3[1] <= 0.0)) {
    bVar2 = local_30 != 0;
  }
  else {
    fVar4 = *param_3 * DAT_1808ac1f4;
    fVar3 = *(float *)(DAT_180ca0a50 + 0xc9c);
    local_44 = (float)FUN_18053fc00(param_3[1] * DAT_1808ac1f4);
    fVar3 = fVar3 * fVar3;
    local_res20 = 0x3f800000;
    local_res24 = 0x3f800000;
    *(undefined1 *)(*(longlong *)(lVar1 + 0x14f8) + 0xce) = 1;
    if (DAT_1808ac34c <= fVar3) {
      fVar3 = DAT_1808ac34c;
    }
    lVar1 = *(longlong *)(lVar1 + 0x14f8);
    local_4c = param_2[1] + local_44;
    local_58 = 0;
    local_50 = *param_2 + fVar4;
    local_38 = 0;
    local_48 = *param_2 - fVar4;
    local_44 = param_2[1] - local_44;
    FUN_1803febc0(*(undefined8 *)(lVar1 + 0x2c8),&local_38,&local_48,&local_50,&local_58,
                  &local_res20,(int)(fVar3 * DAT_1808acb94 + DAT_1808ac1f4) << 0x18 | 0xffffff,
                  *(undefined4 *)(lVar1 + 0x60));
    bVar2 = true;
  }
  return bVar2;
}



/* ===== 1802dd280 FUN_1802dd280 ===== */

undefined8 FUN_1802dd280(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  size_t _Size;
  ulonglong uVar2;
  char *pcVar3;
  int iVar4;
  size_t sVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  _Size = *(size_t *)(param_1 + 0x18);
  puVar1 = (undefined8 *)(param_1 + 8);
  uVar2 = *(ulonglong *)(param_1 + 0x20);
  uVar8 = 0;
  uVar7 = 0;
  if (param_2 == 0) {
    do {
      pcVar3 = (&PTR_s_weapon_hkp2000_1806a0a60)[uVar7];
      sVar5 = strlen(pcVar3);
      puVar6 = puVar1;
      if (0xf < uVar2) {
        puVar6 = (undefined8 *)*puVar1;
      }
      if (_Size == sVar5) {
        if (_Size == 0) {
          return 1;
        }
        iVar4 = memcmp(puVar6,pcVar3,_Size);
        if (iVar4 == 0) {
          return 1;
        }
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < 8);
    uVar7 = 0;
    do {
      pcVar3 = (&PTR_s_weapon_mag7_180659500)[uVar7];
      sVar5 = strlen(pcVar3);
      puVar6 = puVar1;
      if (0xf < uVar2) {
        puVar6 = (undefined8 *)*puVar1;
      }
      if (_Size == sVar5) {
        if (_Size == 0) {
          return 1;
        }
        iVar4 = memcmp(puVar6,pcVar3,_Size);
        if (iVar4 == 0) {
          return 1;
        }
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < 0xb);
    do {
      pcVar3 = (&PTR_s_weapon_famas_1806a0ac8)[uVar8];
      sVar5 = strlen(pcVar3);
      if (uVar2 < 0x10) {
        puVar6 = puVar1;
      }
      else {
        puVar6 = (undefined8 *)*puVar1;
      }
      if ((_Size == sVar5) && ((_Size == 0 || (iVar4 = memcmp(puVar6,pcVar3,_Size), iVar4 == 0)))) {
        return 1;
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < 7);
  }
  else {
    do {
      pcVar3 = (&PTR_s_weapon_glock_1806a0a08)[uVar7];
      sVar5 = strlen(pcVar3);
      puVar6 = puVar1;
      if (0xf < uVar2) {
        puVar6 = (undefined8 *)*puVar1;
      }
      if (_Size == sVar5) {
        if (_Size == 0) {
          return 1;
        }
        iVar4 = memcmp(puVar6,pcVar3,_Size);
        if (iVar4 == 0) {
          return 1;
        }
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < 7);
    uVar7 = 0;
    do {
      pcVar3 = (&PTR_s_weapon_sawedoff_180659460)[uVar7];
      sVar5 = strlen(pcVar3);
      puVar6 = puVar1;
      if (0xf < uVar2) {
        puVar6 = (undefined8 *)*puVar1;
      }
      if (_Size == sVar5) {
        if (_Size == 0) {
          return 1;
        }
        iVar4 = memcmp(puVar6,pcVar3,_Size);
        if (iVar4 == 0) {
          return 1;
        }
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < 0xb);
    do {
      pcVar3 = (&PTR_s_weapon_galilar_180658c00)[uVar8];
      sVar5 = strlen(pcVar3);
      if (uVar2 < 0x10) {
        puVar6 = puVar1;
      }
      else {
        puVar6 = (undefined8 *)*puVar1;
      }
      if (_Size == sVar5) {
        if (_Size == 0) {
          return 1;
        }
        iVar4 = memcmp(puVar6,pcVar3,_Size);
        if (iVar4 == 0) {
          return 1;
        }
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < 6);
  }
  return 0;
}



/* ===== 1802dd4a0 FUN_1802dd4a0 ===== */

void FUN_1802dd4a0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int iVar12;
  int *piVar13;
  int *piVar14;
  int *piVar15;
  int *piVar16;
  int *piVar17;
  longlong lVar18;
  int iVar19;
  longlong lVar20;
  int local_2b8 [172];
  
  iVar12 = DAT_1809f5900;
  if (param_1 == 1) {
    iVar19 = -1;
  }
  else if (param_1 == 2) {
    iVar19 = -2;
  }
  else {
    iVar19 = param_2;
    if (param_2 == 0) {
      return;
    }
  }
  piVar14 = &DAT_18093c64c;
  while (*piVar14 != iVar19) {
    piVar14 = piVar14 + 1;
    if (piVar14 == (int *)&DAT_18093c6cc) {
      return;
    }
  }
  if (param_1 == 1) {
    if (DAT_1809f5900 == 0) {
      iVar19 = DAT_18092149c;
    }
    else {
      iVar19 = DAT_1809214a4;
      if (DAT_1809214a4 < 0) {
        iVar19 = DAT_18092149c;
      }
    }
    if (DAT_1809214a4 < 0) {
      DAT_1809214a4 = DAT_18092149c;
    }
    piVar14 = &DAT_18092149c;
    if (DAT_1809f5900 != 1) {
      piVar14 = &DAT_1809214a4;
    }
    *piVar14 = iVar19;
    if (iVar12 == 0) {
      param_2 = DAT_18092149c;
    }
    else {
      param_2 = DAT_1809214a4;
      if (DAT_1809214a4 < 0) {
        param_2 = DAT_18092149c;
      }
    }
  }
  else if (param_1 == 2) {
    if (DAT_1809f5900 == 0) {
      iVar19 = DAT_1809214a0;
    }
    else {
      iVar19 = DAT_1809214a8;
      if (DAT_1809214a8 < 0) {
        iVar19 = DAT_1809214a0;
      }
    }
    if (DAT_1809214a8 < 0) {
      DAT_1809214a8 = DAT_1809214a0;
    }
    piVar14 = &DAT_1809214a0;
    if (DAT_1809f5900 != 1) {
      piVar14 = &DAT_1809214a8;
    }
    *piVar14 = iVar19;
    if (iVar12 == 0) {
      param_2 = DAT_1809214a0;
    }
    else {
      param_2 = DAT_1809214a8;
      if (DAT_1809214a8 < 0) {
        param_2 = DAT_1809214a0;
      }
    }
  }
  if (param_2 < 1) {
    return;
  }
  piVar14 = &DAT_18092174c;
  do {
    if ((*piVar14 == param_2) && (piVar14[1] == iVar12)) goto LAB_1802dd613;
    piVar14 = piVar14 + 0x68;
  } while (piVar14 != &DAT_180931b4c);
  piVar14 = &DAT_18092174c;
  while ((*piVar14 != param_2 || (-1 < piVar14[1]))) {
    piVar14 = piVar14 + 0x68;
    if (piVar14 == &DAT_180931b4c) {
      return;
    }
  }
LAB_1802dd613:
  iVar19 = 1 - iVar12;
  piVar15 = (int *)FUN_1800f1190(param_2,iVar19);
  if ((piVar15 != (int *)0x0) && (piVar15 != piVar14)) {
    lVar18 = 3;
    lVar20 = 3;
    piVar13 = local_2b8;
    do {
      piVar17 = piVar14;
      piVar16 = piVar13;
      uVar8 = *(undefined8 *)(piVar17 + 2);
      uVar9 = *(undefined8 *)(piVar17 + 4);
      uVar10 = *(undefined8 *)(piVar17 + 6);
      *(undefined8 *)piVar16 = *(undefined8 *)piVar17;
      *(undefined8 *)(piVar16 + 2) = uVar8;
      uVar8 = *(undefined8 *)(piVar17 + 8);
      uVar11 = *(undefined8 *)(piVar17 + 10);
      *(undefined8 *)(piVar16 + 4) = uVar9;
      *(undefined8 *)(piVar16 + 6) = uVar10;
      uVar9 = *(undefined8 *)(piVar17 + 0xc);
      uVar10 = *(undefined8 *)(piVar17 + 0xe);
      *(undefined8 *)(piVar16 + 8) = uVar8;
      *(undefined8 *)(piVar16 + 10) = uVar11;
      uVar8 = *(undefined8 *)(piVar17 + 0x10);
      uVar11 = *(undefined8 *)(piVar17 + 0x12);
      *(undefined8 *)(piVar16 + 0xc) = uVar9;
      *(undefined8 *)(piVar16 + 0xe) = uVar10;
      uVar9 = *(undefined8 *)(piVar17 + 0x14);
      uVar10 = *(undefined8 *)(piVar17 + 0x16);
      *(undefined8 *)(piVar16 + 0x10) = uVar8;
      *(undefined8 *)(piVar16 + 0x12) = uVar11;
      uVar8 = *(undefined8 *)(piVar17 + 0x18);
      uVar11 = *(undefined8 *)(piVar17 + 0x1a);
      *(undefined8 *)(piVar16 + 0x14) = uVar9;
      *(undefined8 *)(piVar16 + 0x16) = uVar10;
      uVar9 = *(undefined8 *)(piVar17 + 0x1c);
      uVar10 = *(undefined8 *)(piVar17 + 0x1e);
      *(undefined8 *)(piVar16 + 0x18) = uVar8;
      *(undefined8 *)(piVar16 + 0x1a) = uVar11;
      *(undefined8 *)(piVar16 + 0x1c) = uVar9;
      *(undefined8 *)(piVar16 + 0x1e) = uVar10;
      lVar20 = lVar20 + -1;
      piVar13 = piVar16 + 0x20;
      piVar14 = piVar17 + 0x20;
    } while (lVar20 != 0);
    uVar8 = *(undefined8 *)(piVar17 + 0x22);
    uVar9 = *(undefined8 *)(piVar17 + 0x24);
    uVar10 = *(undefined8 *)(piVar17 + 0x26);
    *(undefined8 *)(piVar16 + 0x20) = *(undefined8 *)(piVar17 + 0x20);
    *(undefined8 *)(piVar16 + 0x22) = uVar8;
    *(undefined8 *)(piVar16 + 0x24) = uVar9;
    *(undefined8 *)(piVar16 + 0x26) = uVar10;
    piVar14 = piVar15;
    piVar13 = local_2b8;
    do {
      piVar17 = piVar13;
      piVar16 = piVar14;
      uVar8 = *(undefined8 *)(piVar17 + 2);
      uVar9 = *(undefined8 *)(piVar17 + 4);
      uVar10 = *(undefined8 *)(piVar17 + 6);
      *(undefined8 *)piVar16 = *(undefined8 *)piVar17;
      *(undefined8 *)(piVar16 + 2) = uVar8;
      uVar8 = *(undefined8 *)(piVar17 + 8);
      uVar11 = *(undefined8 *)(piVar17 + 10);
      *(undefined8 *)(piVar16 + 4) = uVar9;
      *(undefined8 *)(piVar16 + 6) = uVar10;
      uVar9 = *(undefined8 *)(piVar17 + 0xc);
      uVar10 = *(undefined8 *)(piVar17 + 0xe);
      *(undefined8 *)(piVar16 + 8) = uVar8;
      *(undefined8 *)(piVar16 + 10) = uVar11;
      uVar8 = *(undefined8 *)(piVar17 + 0x10);
      uVar11 = *(undefined8 *)(piVar17 + 0x12);
      *(undefined8 *)(piVar16 + 0xc) = uVar9;
      *(undefined8 *)(piVar16 + 0xe) = uVar10;
      uVar9 = *(undefined8 *)(piVar17 + 0x14);
      uVar10 = *(undefined8 *)(piVar17 + 0x16);
      *(undefined8 *)(piVar16 + 0x10) = uVar8;
      *(undefined8 *)(piVar16 + 0x12) = uVar11;
      uVar8 = *(undefined8 *)(piVar17 + 0x18);
      uVar11 = *(undefined8 *)(piVar17 + 0x1a);
      *(undefined8 *)(piVar16 + 0x14) = uVar9;
      *(undefined8 *)(piVar16 + 0x16) = uVar10;
      uVar9 = *(undefined8 *)(piVar17 + 0x1c);
      uVar10 = *(undefined8 *)(piVar17 + 0x1e);
      *(undefined8 *)(piVar16 + 0x18) = uVar8;
      *(undefined8 *)(piVar16 + 0x1a) = uVar11;
      *(undefined8 *)(piVar16 + 0x1c) = uVar9;
      *(undefined8 *)(piVar16 + 0x1e) = uVar10;
      lVar18 = lVar18 + -1;
      piVar14 = piVar16 + 0x20;
      piVar13 = piVar17 + 0x20;
    } while (lVar18 != 0);
    iVar1 = piVar17[0x21];
    iVar2 = piVar17[0x22];
    iVar3 = piVar17[0x23];
    piVar14 = &DAT_180931b4c;
    iVar4 = piVar17[0x24];
    iVar5 = piVar17[0x25];
    iVar6 = piVar17[0x26];
    iVar7 = piVar17[0x27];
    piVar16[0x20] = piVar17[0x20];
    piVar16[0x21] = iVar1;
    piVar16[0x22] = iVar2;
    piVar16[0x23] = iVar3;
    piVar16[0x24] = iVar4;
    piVar16[0x25] = iVar5;
    piVar16[0x26] = iVar6;
    piVar16[0x27] = iVar7;
    piVar15[1] = iVar19;
    do {
      if ((*piVar14 == param_2) && (piVar14[1] == iVar12)) {
        piVar15 = (int *)FUN_1800f1470(param_2,iVar19);
        if (piVar15 == (int *)0x0) {
          return;
        }
        if (piVar15 == piVar14) {
          return;
        }
        lVar18 = 5;
        lVar20 = 5;
        piVar13 = local_2b8;
        do {
          piVar17 = piVar14;
          piVar16 = piVar13;
          uVar8 = *(undefined8 *)(piVar17 + 2);
          uVar9 = *(undefined8 *)(piVar17 + 4);
          uVar10 = *(undefined8 *)(piVar17 + 6);
          *(undefined8 *)piVar16 = *(undefined8 *)piVar17;
          *(undefined8 *)(piVar16 + 2) = uVar8;
          uVar8 = *(undefined8 *)(piVar17 + 8);
          uVar11 = *(undefined8 *)(piVar17 + 10);
          *(undefined8 *)(piVar16 + 4) = uVar9;
          *(undefined8 *)(piVar16 + 6) = uVar10;
          uVar9 = *(undefined8 *)(piVar17 + 0xc);
          uVar10 = *(undefined8 *)(piVar17 + 0xe);
          *(undefined8 *)(piVar16 + 8) = uVar8;
          *(undefined8 *)(piVar16 + 10) = uVar11;
          uVar8 = *(undefined8 *)(piVar17 + 0x10);
          uVar11 = *(undefined8 *)(piVar17 + 0x12);
          *(undefined8 *)(piVar16 + 0xc) = uVar9;
          *(undefined8 *)(piVar16 + 0xe) = uVar10;
          uVar9 = *(undefined8 *)(piVar17 + 0x14);
          uVar10 = *(undefined8 *)(piVar17 + 0x16);
          *(undefined8 *)(piVar16 + 0x10) = uVar8;
          *(undefined8 *)(piVar16 + 0x12) = uVar11;
          uVar8 = *(undefined8 *)(piVar17 + 0x18);
          uVar11 = *(undefined8 *)(piVar17 + 0x1a);
          *(undefined8 *)(piVar16 + 0x14) = uVar9;
          *(undefined8 *)(piVar16 + 0x16) = uVar10;
          uVar9 = *(undefined8 *)(piVar17 + 0x1c);
          uVar10 = *(undefined8 *)(piVar17 + 0x1e);
          *(undefined8 *)(piVar16 + 0x18) = uVar8;
          *(undefined8 *)(piVar16 + 0x1a) = uVar11;
          *(undefined8 *)(piVar16 + 0x1c) = uVar9;
          *(undefined8 *)(piVar16 + 0x1e) = uVar10;
          lVar20 = lVar20 + -1;
          piVar13 = piVar16 + 0x20;
          piVar14 = piVar17 + 0x20;
        } while (lVar20 != 0);
        uVar8 = *(undefined8 *)(piVar17 + 0x22);
        uVar9 = *(undefined8 *)(piVar17 + 0x24);
        uVar10 = *(undefined8 *)(piVar17 + 0x26);
        *(undefined8 *)(piVar16 + 0x20) = *(undefined8 *)(piVar17 + 0x20);
        *(undefined8 *)(piVar16 + 0x22) = uVar8;
        uVar8 = *(undefined8 *)(piVar17 + 0x27);
        uVar11 = *(undefined8 *)(piVar17 + 0x29);
        *(undefined8 *)(piVar16 + 0x24) = uVar9;
        *(undefined8 *)(piVar16 + 0x26) = uVar10;
        *(undefined8 *)(piVar16 + 0x27) = uVar8;
        *(undefined8 *)(piVar16 + 0x29) = uVar11;
        piVar14 = piVar15;
        piVar13 = local_2b8;
        do {
          piVar17 = piVar13;
          piVar16 = piVar14;
          uVar8 = *(undefined8 *)(piVar17 + 2);
          uVar9 = *(undefined8 *)(piVar17 + 4);
          uVar10 = *(undefined8 *)(piVar17 + 6);
          *(undefined8 *)piVar16 = *(undefined8 *)piVar17;
          *(undefined8 *)(piVar16 + 2) = uVar8;
          uVar8 = *(undefined8 *)(piVar17 + 8);
          uVar11 = *(undefined8 *)(piVar17 + 10);
          *(undefined8 *)(piVar16 + 4) = uVar9;
          *(undefined8 *)(piVar16 + 6) = uVar10;
          uVar9 = *(undefined8 *)(piVar17 + 0xc);
          uVar10 = *(undefined8 *)(piVar17 + 0xe);
          *(undefined8 *)(piVar16 + 8) = uVar8;
          *(undefined8 *)(piVar16 + 10) = uVar11;
          uVar8 = *(undefined8 *)(piVar17 + 0x10);
          uVar11 = *(undefined8 *)(piVar17 + 0x12);
          *(undefined8 *)(piVar16 + 0xc) = uVar9;
          *(undefined8 *)(piVar16 + 0xe) = uVar10;
          uVar9 = *(undefined8 *)(piVar17 + 0x14);
          uVar10 = *(undefined8 *)(piVar17 + 0x16);
          *(undefined8 *)(piVar16 + 0x10) = uVar8;
          *(undefined8 *)(piVar16 + 0x12) = uVar11;
          uVar8 = *(undefined8 *)(piVar17 + 0x18);
          uVar11 = *(undefined8 *)(piVar17 + 0x1a);
          *(undefined8 *)(piVar16 + 0x14) = uVar9;
          *(undefined8 *)(piVar16 + 0x16) = uVar10;
          uVar9 = *(undefined8 *)(piVar17 + 0x1c);
          uVar10 = *(undefined8 *)(piVar17 + 0x1e);
          *(undefined8 *)(piVar16 + 0x18) = uVar8;
          *(undefined8 *)(piVar16 + 0x1a) = uVar11;
          *(undefined8 *)(piVar16 + 0x1c) = uVar9;
          *(undefined8 *)(piVar16 + 0x1e) = uVar10;
          lVar18 = lVar18 + -1;
          piVar14 = piVar16 + 0x20;
          piVar13 = piVar17 + 0x20;
        } while (lVar18 != 0);
        uVar8 = *(undefined8 *)(piVar17 + 0x22);
        uVar9 = *(undefined8 *)(piVar17 + 0x24);
        uVar10 = *(undefined8 *)(piVar17 + 0x26);
        *(undefined8 *)(piVar16 + 0x20) = *(undefined8 *)(piVar17 + 0x20);
        *(undefined8 *)(piVar16 + 0x22) = uVar8;
        uVar8 = *(undefined8 *)(piVar17 + 0x27);
        uVar11 = *(undefined8 *)(piVar17 + 0x29);
        *(undefined8 *)(piVar16 + 0x24) = uVar9;
        *(undefined8 *)(piVar16 + 0x26) = uVar10;
        *(undefined8 *)(piVar16 + 0x27) = uVar8;
        *(undefined8 *)(piVar16 + 0x29) = uVar11;
        piVar15[1] = iVar19;
        return;
      }
      piVar14 = piVar14 + 0xab;
    } while (piVar14 != &DAT_18093c64c);
  }
  return;
}



/* ===== 1802dd890 FUN_1802dd890 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1802dd890(longlong *param_1,int param_2,uint param_3)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong *puVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  undefined8 *******pppppppuVar7;
  size_t sVar8;
  undefined8 *******pppppppuVar9;
  undefined8 uVar10;
  uint *puVar11;
  undefined8 *puVar12;
  undefined8 ******ppppppuVar13;
  longlong *plVar14;
  int iVar15;
  ulonglong *puVar16;
  int *piVar17;
  uint *puVar18;
  char **ppcVar19;
  undefined8 ******ppppppuVar20;
  longlong lVar21;
  ulonglong uVar22;
  undefined8 *****pppppuVar23;
  uint uVar24;
  char *pcVar25;
  undefined1 *puVar26;
  undefined1 *puVar27;
  undefined1 *puVar28;
  undefined1 *puVar29;
  undefined1 *puVar30;
  uint uVar31;
  int *piVar32;
  uint uVar33;
  ulonglong uVar34;
  bool bVar35;
  undefined8 uStack_300;
  undefined1 auStack_2f8 [8];
  undefined1 auStack_2f0 [24];
  uint local_2d8 [2];
  uint *local_2d0 [5];
  int local_2a8;
  undefined8 local_2a4;
  ulonglong local_298 [4];
  undefined4 local_278;
  undefined4 uStack_274;
  undefined8 ******local_270;
  undefined8 *****pppppuStack_268;
  undefined8 *****local_260;
  undefined8 *****local_258;
  longlong local_250;
  longlong lStack_248;
  longlong local_240;
  ulonglong local_238;
  longlong local_230;
  longlong lStack_228;
  longlong local_220;
  ulonglong local_218;
  undefined8 local_210;
  longlong local_208;
  longlong lStack_200;
  byte local_1f8;
  char *local_1e8;
  undefined8 uStack_1e0;
  ulonglong local_1d8;
  ulonglong local_1d0;
  char *local_1c8;
  ulonglong uStack_1c0;
  ulonglong local_1b8;
  ulonglong uStack_1b0;
  char *local_188 [4];
  undefined8 *******local_168;
  longlong lStack_160;
  ulonglong local_158;
  ulonglong local_150 [13];
  undefined8 *******local_e8;
  undefined8 uStack_e0;
  ulonglong local_d8 [10];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  ulonglong uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  uVar24 = DAT_1809f5900;
  local_48 = DAT_180919500 ^ (ulonglong)auStack_2f8;
  local_2d8[0] = 0;
  local_2a4 = 0;
  local_298[1] = 0;
  local_298[2] = 0;
  local_298[3] = 0xf;
  local_298[0] = 0;
  local_278 = 0;
  uStack_274 = 0xffffffff;
  pppppuStack_268 = (undefined8 *****)0x0;
  local_260 = (undefined8 *****)0x0;
  local_258 = (undefined8 *****)0xf;
  local_270 = (undefined8 ******)0x0;
  lStack_248 = 0;
  local_240 = 0;
  local_238 = 0xf;
  local_250 = 0;
  lStack_228 = 0;
  local_220 = 0;
  local_218 = 0xf;
  local_230 = 0;
  local_210 = 0;
  local_208 = 0;
  lStack_200 = 0;
  bVar35 = false;
  local_1f8 = 0;
  local_2d0[1] = (uint *)param_1;
  local_2d0[3] = (uint *)param_1;
  local_2a8 = param_2;
  if (param_2 != 4) {
    if (param_2 == 5) {
      uVar24 = DAT_1809216e4;
      if ((DAT_180ccfeda != '\0') && (puVar11 = DAT_180cfc910, 0 < (int)DAT_1809216e4)) {
        for (; puVar11 != DAT_180cfc918; puVar11 = puVar11 + 0x26) {
          if (*puVar11 == DAT_1809216e4) goto LAB_1802dde84;
        }
        uVar24 = 0;
      }
LAB_1802dde84:
      local_2a4 = (ulonglong)DAT_1809216e4;
      uVar10 = FUN_1811bd000(uVar24);
      return uVar10;
    }
    if (param_2 == 6) {
      if ((DAT_1809216e8 != 0) || (DAT_180cec7d8 != 0)) {
        FUN_180280f20();
      }
      local_2a4 = CONCAT44(local_2a4._4_4_,DAT_1809216e8);
      uVar10 = FUN_1811bd025();
      return uVar10;
    }
    if (param_2 == 1) {
      if (DAT_1809f5900 == 0) {
        param_3 = DAT_18092149c;
      }
      else {
        param_3 = DAT_1809214a4;
        if ((int)DAT_1809214a4 < 0) {
          param_3 = DAT_18092149c;
        }
      }
      if (param_3 == 0) {
        pcVar25 = "weapon_knife_t";
        if (DAT_1809f5900 == 0) {
          pcVar25 = "weapon_knife";
        }
        puVar11 = (uint *)FUN_1802d48a0(pcVar25);
        if (puVar11 == (uint *)0x0) {
          param_3 = 0x3b;
          if (uVar24 == 0) {
            param_3 = 0x2a;
          }
          bVar35 = false;
        }
        else {
          param_3 = *puVar11;
          bVar35 = false;
        }
      }
      else {
        bVar35 = param_3 != 0;
      }
    }
    else if (param_2 == 2) {
      if (DAT_1809f5900 == 0) {
        uVar33 = DAT_1809214a0;
      }
      else {
        uVar33 = DAT_1809214a8;
        if ((int)DAT_1809214a8 < 0) {
          uVar33 = DAT_1809214a0;
        }
      }
      param_3 = uVar33;
      if (uVar33 == 0) {
        param_3 = 0x13a5 - (DAT_1809f5900 != 0);
      }
      bVar35 = uVar33 != 0;
    }
    if (0 < (int)param_3) {
      local_2d0[0] = &DAT_18092174c;
      do {
        if ((*local_2d0[0] == param_3) && (local_2d0[0][1] == uVar24)) goto LAB_1802de64d;
        local_2d0[0] = local_2d0[0] + 0x68;
      } while (local_2d0[0] != &DAT_180931b4c);
      local_2d0[0] = &DAT_18092174c;
      do {
        if ((*local_2d0[0] == param_3) && ((int)local_2d0[0][1] < 0)) goto LAB_1802de64d;
        local_2d0[0] = local_2d0[0] + 0x68;
      } while (local_2d0[0] != &DAT_180931b4c);
    }
    local_2d0[0] = (uint *)0x0;
    local_2a4 = (ulonglong)param_3;
    goto LAB_1802de61c;
  }
  uVar33 = DAT_1809214b0;
  if (DAT_1809f5900 == 0) {
    uVar33 = DAT_1809214ac;
  }
  uVar34 = (ulonglong)uVar33;
  local_2d0[0] = (uint *)CONCAT44(local_2d0[0]._4_4_,uVar33);
  if (uVar33 == 0) {
    if (DAT_1809f5900 < 2) {
      iVar15 = (&DAT_180cec708)[(int)DAT_1809f5900];
    }
    else {
      iVar15 = 0;
    }
    if (iVar15 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = FUN_18027fb40();
    }
  }
  else {
    lVar3 = FUN_18027fb40(uVar34);
  }
  local_2a4 = CONCAT44(local_2a4._4_4_,uVar33);
  if (lVar3 == 0) {
    local_1e8 = (char *)0x0;
    uStack_1e0 = 0;
    local_1d8 = 0;
    local_1d0 = 0;
    local_1e8 = (char *)FUN_18000fb70(0x30);
    uVar10 = s_panorama_images_econ_characters__18075f9b8._8_8_;
    local_1d8 = 0x2d;
    local_1d0 = 0x2f;
    *(undefined8 *)local_1e8 = s_panorama_images_econ_characters__18075f9b8._0_8_;
    *(undefined8 *)(local_1e8 + 8) = uVar10;
    uVar10 = CONCAT35(s_panorama_images_econ_characters__18075f9b8._29_3_,
                      s_panorama_images_econ_characters__18075f9b8._24_5_);
    *(undefined8 *)(local_1e8 + 0x10) = s_panorama_images_econ_characters__18075f9b8._16_8_;
    *(undefined8 *)(local_1e8 + 0x18) = uVar10;
    uVar10 = s_panorama_images_econ_characters__18075f9b8._37_8_;
    *(ulonglong *)(local_1e8 + 0x1d) =
         CONCAT53(s_panorama_images_econ_characters__18075f9b8._32_5_,
                  s_panorama_images_econ_characters__18075f9b8._29_3_);
    *(undefined8 *)(local_1e8 + 0x25) = uVar10;
    local_1e8[0x2d] = '\0';
    local_2d8[0] = 2;
    pcVar25 = "tm_phoenix";
    if (uVar24 == 0) {
      pcVar25 = "ctm_sas";
    }
    sVar8 = strlen(pcVar25);
    puVar4 = (ulonglong *)FUN_1800134a0(&local_1e8,pcVar25,sVar8);
    local_1c8 = (char *)*puVar4;
    uStack_1c0 = puVar4[1];
    local_1b8 = puVar4[2];
    uStack_1b0 = puVar4[3];
    puVar4[2] = 0;
    puVar4[3] = 0xf;
    *(undefined1 *)puVar4 = 0;
    local_2d8[0] = 0x2000006;
    puVar5 = (undefined4 *)FUN_1800134a0(&local_1c8,"_square_png.vtex_c",0x12);
    local_88 = *puVar5;
    uStack_84 = puVar5[1];
    uStack_80 = puVar5[2];
    uStack_7c = puVar5[3];
    local_78 = *(undefined8 *)(puVar5 + 4);
    uStack_70 = *(ulonglong *)(puVar5 + 6);
    *(undefined8 *)(puVar5 + 4) = 0;
    *(undefined8 *)(puVar5 + 6) = 0xf;
    *(undefined1 *)puVar5 = 0;
    puVar4 = (ulonglong *)&local_88;
    uVar31 = 0x300000e;
  }
  else {
    lVar21 = 0x68;
    if (*(longlong *)(lVar3 + 0x98) != 0) {
      lVar21 = 0x88;
    }
    puVar4 = (ulonglong *)FUN_180024b50(local_188,lVar21 + lVar3);
    uVar31 = 1;
  }
  local_2d8[0] = uVar31;
  if (local_298 != puVar4) {
    if (puVar4[3] < 0x10) {
      puVar16 = puVar4;
    }
    else {
      puVar16 = (ulonglong *)*puVar4;
    }
    FUN_180029840(local_298,puVar16,puVar4[2]);
  }
  if ((uVar31 & 8) == 0) {
LAB_1802ddb4c:
    if ((uVar31 & 4) != 0) {
      uVar31 = uVar31 & 0xfffffffb;
      local_2d8[0] = uVar31;
      FUN_18000f890();
    }
    puVar26 = auStack_2f8;
    if ((uVar31 & 2) != 0) {
      uVar31 = uVar31 & 0xfffffffd;
      local_2d8[0] = uVar31;
      if (0xf < local_1d0) {
        uVar22 = local_1d0 + 1;
        pcVar25 = local_1e8;
        if (0xfff < uVar22) {
          pcVar25 = *(char **)(local_1e8 + -8);
          if ((char *)0x1f < local_1e8 + (-8 - (longlong)pcVar25)) goto LAB_1802ddc53;
          uVar22 = local_1d0 + 0x28;
        }
        thunk_FUN_1803d64e0(pcVar25,uVar22);
      }
      local_1d8 = 0;
      local_1d0 = 0xf;
      local_1e8 = (char *)((ulonglong)local_1e8 & 0xffffffffffffff00);
    }
    if ((uVar31 & 1) != 0) {
      uVar31 = uVar31 & 0xfffffffe;
      local_2d8[0] = uVar31;
      FUN_18000f890();
    }
    puVar30 = auStack_2f8;
    puVar27 = auStack_2f8;
    if (lVar3 != 0) {
      local_278 = *(undefined4 *)(lVar3 + 200);
      local_2d0[3] = (uint *)(lVar3 + 0x28);
      local_168 = (undefined8 *******)0x0;
      lStack_160 = 0;
      local_158 = 0;
      local_150[0] = 0;
      uVar22 = *(ulonglong *)(lVar3 + 0x38);
      if (0xf < *(ulonglong *)(lVar3 + 0x40)) {
        local_2d0[3] = *(uint **)local_2d0[3];
      }
      uVar34 = 0x7fffffffffffffff;
      if (0x7fffffffffffffff < uVar22) goto LAB_1802dee61;
      if (0xf < uVar22) goto LAB_1802ddc5a;
      local_158 = uVar22;
      local_150[0] = 0xf;
      pppppppuVar7 = *(undefined8 ********)local_2d0[3];
      lStack_160 = *(longlong *)((longlong)local_2d0[3] + 8);
      puVar30 = auStack_2f8;
      local_168 = pppppppuVar7;
      goto LAB_1802ddca7;
    }
    local_278 = 0;
    pcVar25 = "Terrorist";
    if (uVar24 == 0) {
      pcVar25 = "Counter-Terrorist";
    }
    local_e8 = (undefined8 *******)0x0;
    uStack_e0 = 0;
    local_d8[0] = 0;
    local_d8[1] = 0;
    sVar8 = strlen(pcVar25);
    FUN_1800133a0(&local_e8,pcVar25,sVar8);
    puVar30 = auStack_2f8;
    pppppppuVar9 = &local_e8;
    uVar31 = uVar31 | 0x20;
    puVar4 = local_d8;
    puVar16 = local_d8 + 1;
    pppppppuVar7 = local_e8;
  }
  else {
    uVar31 = uVar31 & 0xfffffff7;
    local_2d8[0] = uVar31;
    if (uStack_70 < 0x10) goto LAB_1802ddb4c;
    uVar22 = uStack_70 + 1;
    lVar2 = CONCAT44(uStack_84,local_88);
    lVar21 = lVar2;
    if (uVar22 < 0x1000) {
LAB_1802ddb46:
      thunk_FUN_1803d64e0(lVar21,uVar22);
      goto LAB_1802ddb4c;
    }
    lVar21 = *(longlong *)(lVar2 + -8);
    if ((lVar2 - lVar21) - 8U < 0x20) {
      uVar22 = uStack_70 + 0x28;
      goto LAB_1802ddb46;
    }
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar26 = auStack_2f0;
LAB_1802ddc53:
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar27 = puVar26 + 8;
    uVar22 = 4;
LAB_1802ddc5a:
    uVar6 = uVar22 | 0xf;
    if ((uVar6 <= uVar34) && (uVar34 = uVar6, uVar6 < 0x16)) {
      uVar34 = 0x16;
    }
    *(undefined8 *)(puVar27 + -8) = 0x1802ddc7e;
    pppppppuVar7 = (undefined8 *******)FUN_18000fb70(uVar34 + 1);
    local_158 = uVar22;
    local_150[0] = uVar34;
    *(undefined8 *)(puVar27 + -8) = 0x1802ddca7;
    local_168 = pppppppuVar7;
    FUN_180540530(pppppppuVar7,*(undefined8 *)(puVar27 + 0x40),uVar22 + 1);
    puVar30 = puVar27;
LAB_1802ddca7:
    pppppppuVar9 = &local_168;
    uVar31 = uVar31 | 0x10;
    puVar4 = &local_158;
    puVar16 = local_150;
    uVar33 = *(uint *)(puVar30 + 0x28);
  }
  *(uint *)(puVar30 + 0x20) = uVar31;
  if (&local_270 != pppppppuVar9) {
    if (*puVar16 < 0x10) {
      pppppppuVar7 = pppppppuVar9;
    }
    uVar34 = *puVar4;
    *(undefined8 *)(puVar30 + -8) = 0x1802ddd52;
    FUN_180029840(&local_270,pppppppuVar7,uVar34);
  }
  if ((uVar31 & 0x20) != 0) {
    uVar31 = uVar31 & 0xffffffdf;
    *(undefined8 *)(puVar30 + -8) = 0x1802ddd68;
    FUN_18000f890(&local_e8);
  }
  if ((uVar31 & 0x10) != 0) {
    *(undefined8 *)(puVar30 + -8) = 0x1802ddd7b;
    FUN_18000f890(&local_168);
  }
  bVar35 = false;
  piVar17 = &DAT_1809216bc;
  if (uVar24 != 0) {
    piVar17 = &DAT_1809216d0;
  }
  piVar32 = &DAT_1809216d0;
  if (uVar24 != 0) {
    piVar32 = (int *)&DAT_1809216e4;
  }
  for (; piVar17 != piVar32; piVar17 = piVar17 + 1) {
    bVar35 = (bool)(bVar35 | *piVar17 != 0);
  }
  local_1f8 = bVar35 || uVar33 != 0;
  goto LAB_1802dddcb;
LAB_1802de64d:
  uVar33 = local_2d0[0][2];
  local_2a4 = CONCAT44(uVar33,param_3);
  if ((uVar33 == 0) &&
     ((((char)local_2d0[0][5] == '\0' && ((char)local_2d0[0][7] == '\0')) &&
      (local_2d0[0][0x62] == 0)))) {
    puVar11 = local_2d0[0] + 0x38;
    if (local_2d0[0] != local_2d0[0] + 0x2a) {
      do {
        if (*puVar11 != 0) goto LAB_1802de6a6;
        puVar11 = puVar11 + 7;
      } while (puVar11 != local_2d0[0] + 0x62);
    }
LAB_1802de61c:
    uVar33 = 0;
    local_1f8 = 0;
  }
  else {
LAB_1802de6a6:
    local_1f8 = 1;
  }
  puVar11 = local_2d0[0];
  local_1f8 = bVar35 | local_1f8;
  puVar18 = local_2d0[0];
  puVar30 = auStack_2f8;
  if ((param_2 != 2) || (puVar30 = auStack_2f8, uVar33 != 0)) {
LAB_1802de97d:
    if ((puVar11 == (uint *)0x0) || (puVar18[2] == 0)) {
      *(undefined8 *)(puVar30 + -8) = 0x1802de9c5;
      puVar12 = (undefined8 *)FUN_1802816b0(local_188,param_3);
      uVar24 = 0x200000;
    }
    else {
      *(undefined8 *)(puVar30 + -8) = 0x1802de994;
      FUN_1802816b0(&local_1e8,param_3);
      *(undefined4 *)(puVar30 + 0x20) = 0x80000;
      *(undefined8 *)(puVar30 + -8) = 0x1802de9af;
      puVar12 = (undefined8 *)FUN_1802b2ec0(&local_1c8,param_3,puVar11);
      uVar24 = 0x180000;
    }
    if ((undefined8 *)(puVar30 + 0x60) == puVar12) {
LAB_1802dea52:
      if (uVar24 >> 0x15 != 0) {
        uVar24 = uVar24 & 0xffdfffff;
        *(undefined8 *)(puVar30 + -8) = 0x1802dea65;
        FUN_18000f890(local_188);
      }
      if ((uVar24 >> 0x14 & 1) != 0) {
        uVar24 = uVar24 & 0xffefffff;
        *(undefined8 *)(puVar30 + -8) = 0x1802dea79;
        FUN_18000f890(&local_1c8);
      }
      if ((uVar24 >> 0x13 & 1) != 0) {
        uVar24 = uVar24 & 0xfff7ffff;
        ppcVar19 = &local_1e8;
        goto LAB_1802dea88;
      }
      goto LAB_1802dea8d;
    }
    uVar34 = *(ulonglong *)(puVar30 + 0x78);
    if (uVar34 < 0x10) {
LAB_1802dea14:
      *(undefined8 *)(puVar30 + 0x70) = 0;
      *(undefined8 *)(puVar30 + 0x78) = 0xf;
      puVar30[0x60] = 0;
      *(undefined8 *)(puVar30 + 0x60) = *puVar12;
      *(undefined8 *)(puVar30 + 0x68) = puVar12[1];
      *(undefined8 *)(puVar30 + 0x70) = puVar12[2];
      *(undefined8 *)(puVar30 + 0x78) = puVar12[3];
      puVar12[2] = 0;
      puVar12[3] = 0xf;
      *(undefined1 *)puVar12 = 0;
      goto LAB_1802dea52;
    }
    uVar22 = uVar34 + 1;
    lVar3 = *(longlong *)(puVar30 + 0x60);
    lVar21 = lVar3;
    if (uVar22 < 0x1000) {
LAB_1802dea0f:
      *(undefined8 *)(puVar30 + -8) = 0x1802dea14;
      thunk_FUN_1803d64e0(lVar21,uVar22);
      goto LAB_1802dea14;
    }
    lVar21 = *(longlong *)(lVar3 + -8);
    if ((lVar3 - lVar21) - 8U < 0x20) {
      uVar22 = uVar34 + 0x28;
      goto LAB_1802dea0f;
    }
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar30 = puVar30 + 8;
LAB_1802deb39:
    *(undefined8 *)(puVar30 + -8) = 0x1802deb42;
    FUN_18000f890(local_188);
    *(undefined8 *)(puVar30 + -8) = 0x1802deb53;
    plVar14 = (longlong *)FUN_180281250(local_188,param_3,*(undefined4 *)(puVar30 + 0x58));
    if (&local_250 != plVar14) {
      if (0xf < local_238) {
        uVar34 = local_238 + 1;
        lVar3 = local_250;
        if (0xfff < uVar34) {
          lVar3 = *(longlong *)(local_250 + -8);
          if (0x1f < (local_250 - lVar3) - 8U) goto LAB_1802dee5a;
          uVar34 = local_238 + 0x28;
        }
        *(undefined8 *)(puVar30 + -8) = 0x1802deb9a;
        thunk_FUN_1803d64e0(lVar3,uVar34);
      }
      local_250 = *plVar14;
      lStack_248 = plVar14[1];
      local_240 = plVar14[2];
      local_238 = plVar14[3];
      plVar14[2] = 0;
      plVar14[3] = 0xf;
      *(undefined1 *)plVar14 = 0;
    }
    *(undefined8 *)(puVar30 + -8) = 0x1802debda;
    FUN_18000f890(local_188);
    *(undefined8 *)(puVar30 + -8) = 0x1802debeb;
    plVar14 = (longlong *)FUN_180281480(local_188,param_3,*(undefined4 *)(puVar30 + 0x58));
    if (&local_230 != plVar14) {
      if (0xf < local_218) {
        uVar34 = local_218 + 1;
        lVar3 = local_230;
        if (0xfff < uVar34) {
          lVar3 = *(longlong *)(local_230 + -8);
          if (0x1f < (local_230 - lVar3) - 8U) goto LAB_1802dee5a;
          uVar34 = local_218 + 0x28;
        }
        *(undefined8 *)(puVar30 + -8) = 0x1802dec32;
        thunk_FUN_1803d64e0(lVar3,uVar34);
      }
      local_230 = *plVar14;
      lStack_228 = plVar14[1];
      local_220 = plVar14[2];
      local_218 = plVar14[3];
      plVar14[2] = 0;
      plVar14[3] = 0xf;
      *(undefined1 *)plVar14 = 0;
    }
    *(undefined8 *)(puVar30 + -8) = 0x1802dec72;
    FUN_18000f890(local_188);
    if ((puVar11 != (uint *)0x0) && (param_2 == 0)) {
      uVar34 = 0;
      do {
        iVar15 = *(int *)(*(longlong *)(puVar30 + 0x28) + 0xe0 + uVar34 * 0x1c);
        if ((DAT_180ccfeda != '\0') && (piVar17 = DAT_180cfc988, 0 < iVar15)) {
          for (; piVar17 != DAT_180cfc990; piVar17 = piVar17 + 0x26) {
            if (*piVar17 == iVar15) goto LAB_1802dece2;
          }
        }
        piVar17 = (int *)0x0;
LAB_1802dece2:
        if (piVar17 == (int *)0x0) {
          uStack_1c0 = 0;
          local_1b8 = 0;
          uStack_1b0 = 0xf;
          local_1c8 = (char *)0x0;
          ppcVar19 = &local_1c8;
          uVar24 = uVar24 | 0x800000;
        }
        else {
          piVar32 = piVar17 + 0x12;
          local_1e8 = (char *)0x0;
          uStack_1e0 = 0;
          local_1d8 = 0;
          local_1d0 = 0;
          uVar22 = *(ulonglong *)(piVar17 + 0x16);
          if (0xf < *(ulonglong *)(piVar17 + 0x18)) {
            piVar32 = *(int **)piVar32;
          }
          if (0x7fffffffffffffff < uVar22) goto LAB_1802dee61;
          if (uVar22 < 0x10) {
            local_1d0 = 0xf;
            local_1e8 = *(char **)piVar32;
            uStack_1e0 = *(undefined8 *)(piVar32 + 2);
            local_1d8 = uVar22;
          }
          else {
            uVar6 = uVar22 | 0xf;
            if (uVar6 < 0x8000000000000000) {
              if (uVar6 < 0x16) {
                uVar6 = 0x16;
              }
            }
            else {
              uVar6 = 0x7fffffffffffffff;
            }
            *(undefined8 *)(puVar30 + -8) = 0x1802ded51;
            local_1e8 = (char *)FUN_18000fb70(uVar6 + 1);
            *(undefined8 *)(puVar30 + -8) = 0x1802ded6c;
            local_1d8 = uVar22;
            local_1d0 = uVar6;
            FUN_180540530(local_1e8,piVar32,uVar22 + 1);
          }
          ppcVar19 = &local_1e8;
          uVar24 = uVar24 | 0x400000;
        }
        *(uint *)(puVar30 + 0x20) = uVar24;
        if (local_208 == lStack_200) {
          *(undefined8 *)(puVar30 + -8) = 0x1802dedba;
          FUN_180028f00(&local_210,local_208);
        }
        else {
          *(undefined8 *)(puVar30 + -8) = 0x1802deda7;
          FUN_180024b50(local_208,ppcVar19);
          local_208 = local_208 + 0x20;
        }
        if (((uVar24 >> 0x17 & 1) != 0) && (uVar24 = uVar24 & 0xff7fffff, 0xf < uStack_1b0)) {
          uVar22 = uStack_1b0 + 1;
          pcVar25 = local_1c8;
          if (0xfff < uVar22) {
            pcVar25 = *(char **)(local_1c8 + -8);
            if ((char *)0x1f < local_1c8 + (-8 - (longlong)pcVar25)) {
              pcVar1 = (code *)swi(0x29);
              (*pcVar1)(5);
              puVar30 = puVar30 + 8;
              goto LAB_1802dee5a;
            }
            uVar22 = uStack_1b0 + 0x28;
          }
          *(undefined8 *)(puVar30 + -8) = 0x1802dedfc;
          thunk_FUN_1803d64e0(pcVar25,uVar22);
        }
        if (((uVar24 >> 0x16 & 1) != 0) && (uVar24 = uVar24 & 0xffbfffff, 0xf < local_1d0)) {
          uVar22 = local_1d0 + 1;
          pcVar25 = local_1e8;
          if (0xfff < uVar22) {
            pcVar25 = *(char **)(local_1e8 + -8);
            if ((char *)0x1f < local_1e8 + (-8 - (longlong)pcVar25)) goto LAB_1802dee5a;
            uVar22 = local_1d0 + 0x28;
          }
          *(undefined8 *)(puVar30 + -8) = 0x1802dee3e;
          thunk_FUN_1803d64e0(pcVar25,uVar22);
        }
        uVar33 = (int)uVar34 + 1;
        uVar34 = (ulonglong)uVar33;
      } while ((int)uVar33 < 5);
    }
LAB_1802dddcb:
    uVar10 = *(undefined8 *)(puVar30 + 0x30);
    *(undefined8 *)(puVar30 + -8) = 0x1802ddddd;
    FUN_1802deeb0(uVar10,puVar30 + 0x50);
    *(undefined8 *)(puVar30 + -8) = 0x1802ddde7;
    FUN_1800288b0(&local_210);
    *(undefined8 *)(puVar30 + -8) = 0x1802dddf0;
    FUN_18000f890(&local_230);
    *(undefined8 *)(puVar30 + -8) = 0x1802dddf9;
    FUN_18000f890(&local_250);
    *(undefined8 *)(puVar30 + -8) = 0x1802dde02;
    FUN_18000f890(&local_270);
    *(undefined8 *)(puVar30 + -8) = 0x1802dde0c;
    FUN_18000f890(puVar30 + 0x60);
    *(undefined8 *)(puVar30 + -8) = 0x1802dde1e;
    return uVar10;
  }
  puVar12 = (undefined8 *)FUN_180280de0(param_3);
  if (uVar24 == 0) {
    uVar33 = DAT_1809214a0;
  }
  else {
    uVar33 = DAT_1809214a8;
    if ((int)DAT_1809214a8 < 0) {
      uVar33 = DAT_1809214a0;
    }
  }
  if ((uVar33 == 0) || ((undefined4 *)*puVar12 == (undefined4 *)puVar12[1])) {
    local_1e8 = (char *)0x0;
    uStack_1e0 = 0;
    local_1d8 = 0;
    local_1d0 = 0;
    local_1e8 = (char *)FUN_18000fb70(0x30);
    uVar10 = s_panorama_images_econ_weapons_bas_18073ea00._8_8_;
    local_1d8 = 0x2a;
    local_1d0 = 0x2f;
    *(undefined8 *)local_1e8 = s_panorama_images_econ_weapons_bas_18073ea00._0_8_;
    *(undefined8 *)(local_1e8 + 8) = uVar10;
    uVar10 = CONCAT62(s_panorama_images_econ_weapons_bas_18073ea00._26_6_,
                      s_panorama_images_econ_weapons_bas_18073ea00._24_2_);
    *(undefined8 *)(local_1e8 + 0x10) = s_panorama_images_econ_weapons_bas_18073ea00._16_8_;
    *(undefined8 *)(local_1e8 + 0x18) = uVar10;
    uVar10 = s_panorama_images_econ_weapons_bas_18073ea00._34_8_;
    *(ulonglong *)(local_1e8 + 0x1a) =
         CONCAT26(s_panorama_images_econ_weapons_bas_18073ea00._32_2_,
                  s_panorama_images_econ_weapons_bas_18073ea00._26_6_);
    *(undefined8 *)(local_1e8 + 0x22) = uVar10;
    local_1e8[0x2a] = '\0';
    local_2d8[0] = 0x10000;
    pcVar25 = "t_gloves";
    if (uVar24 == 0) {
      pcVar25 = "ct_gloves";
    }
    sVar8 = strlen(pcVar25);
    puVar4 = (ulonglong *)FUN_1800134a0(&local_1e8,pcVar25,sVar8);
    local_1c8 = (char *)*puVar4;
    uStack_1c0 = puVar4[1];
    local_1b8 = puVar4[2];
    uStack_1b0 = puVar4[3];
    puVar4[2] = 0;
    puVar4[3] = 0xf;
    *(undefined1 *)puVar4 = 0;
    local_2d8[0] = 0x4030000;
    puVar5 = (undefined4 *)FUN_1800134a0(&local_1c8,"_png.vtex_c",0xb);
    local_68 = *puVar5;
    uStack_64 = puVar5[1];
    uStack_60 = puVar5[2];
    uStack_5c = puVar5[3];
    local_58 = *(undefined8 *)(puVar5 + 4);
    uStack_50 = *(ulonglong *)(puVar5 + 6);
    *(undefined8 *)(puVar5 + 4) = 0;
    *(undefined8 *)(puVar5 + 6) = 0xf;
    *(undefined1 *)puVar5 = 0;
    puVar4 = (ulonglong *)&local_68;
    uVar24 = 0xc070000;
  }
  else {
    puVar4 = (ulonglong *)FUN_1802816b0(local_188,param_3,*(undefined4 *)*puVar12);
    uVar24 = 0x8000;
  }
  if (local_298 != puVar4) {
    if (local_298[3] < 0x10) {
LAB_1802de829:
      local_298[2] = 0;
      local_298[3] = 0xf;
      local_298[0] = local_298[0] & 0xffffffffffffff00;
      local_298[0] = *puVar4;
      local_298[1] = puVar4[1];
      local_298[2] = puVar4[2];
      local_298[3] = puVar4[3];
      puVar4[2] = 0;
      puVar4[3] = 0xf;
      *(undefined1 *)puVar4 = 0;
      goto LAB_1802de867;
    }
    uVar22 = local_298[3] + 1;
    uVar34 = local_298[0];
    if (uVar22 < 0x1000) {
LAB_1802de824:
      thunk_FUN_1803d64e0(uVar34,uVar22);
      goto LAB_1802de829;
    }
    uVar34 = *(ulonglong *)(local_298[0] - 8);
    if ((local_298[0] - uVar34) - 8 < 0x20) {
      uVar22 = local_298[3] + 0x28;
      goto LAB_1802de824;
    }
LAB_1802de968:
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar28 = auStack_2f0;
LAB_1802de96f:
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar29 = puVar28 + 8;
LAB_1802de976:
    puVar18 = (uint *)&DAT_00000005;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)();
    puVar30 = puVar29 + 8;
    goto LAB_1802de97d;
  }
LAB_1802de867:
  if (((uVar24 >> 0x12 & 1) != 0) && (uVar24 = uVar24 & 0xfffbffff, 0xf < uStack_50)) {
    uVar34 = uStack_50 + 1;
    lVar21 = CONCAT44(uStack_64,local_68);
    lVar3 = lVar21;
    if (0xfff < uVar34) {
      lVar3 = *(longlong *)(lVar21 + -8);
      if (0x1f < (lVar21 - lVar3) - 8U) goto LAB_1802de968;
      uVar34 = uStack_50 + 0x28;
    }
    thunk_FUN_1803d64e0(lVar3,uVar34);
  }
  puVar28 = auStack_2f8;
  if ((uVar24 >> 0x11 & 1) != 0) {
    uVar24 = uVar24 & 0xfffdffff;
    if (0xf < uStack_1b0) {
      uVar34 = uStack_1b0 + 1;
      pcVar25 = local_1c8;
      if (0xfff < uVar34) {
        pcVar25 = *(char **)(local_1c8 + -8);
        if ((char *)0x1f < local_1c8 + (-8 - (longlong)pcVar25)) goto LAB_1802de96f;
        uVar34 = uStack_1b0 + 0x28;
      }
      thunk_FUN_1803d64e0(pcVar25,uVar34);
    }
    local_1b8 = 0;
    uStack_1b0 = 0xf;
    local_1c8 = (char *)((ulonglong)local_1c8 & 0xffffffffffffff00);
  }
  puVar29 = auStack_2f8;
  if ((uVar24 >> 0x10 & 1) != 0) {
    uVar24 = uVar24 & 0xfffeffff;
    if (0xf < local_1d0) {
      uVar34 = local_1d0 + 1;
      pcVar25 = local_1e8;
      if (0xfff < uVar34) {
        pcVar25 = *(char **)(local_1e8 + -8);
        if ((char *)0x1f < local_1e8 + (-8 - (longlong)pcVar25)) goto LAB_1802de976;
        uVar34 = local_1d0 + 0x28;
      }
      thunk_FUN_1803d64e0(pcVar25,uVar34);
    }
    local_1d8 = 0;
    local_1d0 = 0xf;
    local_1e8 = (char *)((ulonglong)local_1e8 & 0xffffffffffffff00);
  }
  puVar30 = auStack_2f8;
  if ((uVar24 >> 0xf & 1) != 0) {
    uVar24 = uVar24 & 0xffff7fff;
    ppcVar19 = local_188;
    puVar30 = auStack_2f8;
LAB_1802dea88:
    *(undefined8 *)(puVar30 + -8) = 0x1802dea8d;
    FUN_18000f890(ppcVar19);
  }
LAB_1802dea8d:
  *(undefined8 *)(puVar30 + -8) = 0x1802dea99;
  local_278 = FUN_180280fe0(param_3,*(undefined4 *)(puVar30 + 0x58));
  *(undefined8 *)(puVar30 + -8) = 0x1802deaad;
  ppppppuVar13 = (undefined8 ******)FUN_1802d4930(local_188,param_3,*(undefined4 *)(puVar30 + 0x58))
  ;
  if (&local_270 == (undefined8 *******)ppppppuVar13) goto LAB_1802deb39;
  if (local_258 < (undefined8 *****)0x10) {
LAB_1802deaf4:
    local_270 = (undefined8 ******)*ppppppuVar13;
    pppppuStack_268 = ppppppuVar13[1];
    local_260 = ppppppuVar13[2];
    local_258 = ppppppuVar13[3];
    ppppppuVar13[2] = (undefined8 *****)0x0;
    ppppppuVar13[3] = (undefined8 *****)0xf;
    *(undefined1 *)ppppppuVar13 = 0;
    goto LAB_1802deb39;
  }
  pppppuVar23 = (undefined8 *****)((longlong)local_258 + 1);
  ppppppuVar20 = local_270;
  if (pppppuVar23 < (undefined8 *****)0x1000) {
LAB_1802deaef:
    *(undefined8 *)(puVar30 + -8) = 0x1802deaf4;
    thunk_FUN_1803d64e0(ppppppuVar20,pppppuVar23);
    goto LAB_1802deaf4;
  }
  ppppppuVar20 = (undefined8 ******)local_270[-1];
  if ((ulonglong)((longlong)local_270 + (-8 - (longlong)ppppppuVar20)) < 0x20) {
    pppppuVar23 = local_258 + 5;
    goto LAB_1802deaef;
  }
LAB_1802dee5a:
  pcVar1 = (code *)swi(0x29);
  (*pcVar1)(5);
  puVar30 = puVar30 + 8;
LAB_1802dee61:
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar30 + -8) = &UNK_1802dee66;
  FUN_180011990();
}



/* ===== 1802dee70 FUN_1802dee70 ===== */

void FUN_1802dee70(longlong param_1)

{
  FUN_1800288b0(param_1 + 0x98);
  FUN_18000f890(param_1 + 0x78);
  FUN_18000f890(param_1 + 0x58);
  FUN_18000f890(param_1 + 0x38);
  FUN_18000f890(param_1 + 0x10);
  return;
}



/* ===== 1802deeb0 FUN_1802deeb0 ===== */

undefined4 * FUN_1802deeb0(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  uVar1 = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 6) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 10) = uVar1;
  *(undefined1 *)(param_2 + 4) = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 10) = 0xf;
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_2 + 0xe);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x14);
  *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_2 + 0x12);
  *(undefined8 *)(param_1 + 0x14) = uVar1;
  *(undefined1 *)(param_2 + 0xe) = 0;
  *(undefined8 *)(param_2 + 0x12) = 0;
  *(undefined8 *)(param_2 + 0x14) = 0xf;
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
  uVar1 = *(undefined8 *)(param_2 + 0x26);
  uVar2 = *(undefined8 *)(param_2 + 0x2a);
  uVar3 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x2a) = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x26) = 0;
  *(undefined8 *)(param_1 + 0x26) = uVar1;
  *(undefined8 *)(param_1 + 0x28) = uVar3;
  *(undefined8 *)(param_1 + 0x2a) = uVar2;
  *(undefined1 *)(param_1 + 0x2c) = *(undefined1 *)(param_2 + 0x2c);
  return param_1;
}



/* ===== 1802df000 FUN_1802df000 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802df000(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined1 *puVar11;
  undefined8 *puVar12;
  int *piVar13;
  int *piVar14;
  int *piVar15;
  undefined8 *puVar16;
  undefined4 *puVar17;
  longlong lVar18;
  bool bVar19;
  undefined4 local_2e8;
  undefined4 uStack_2e4;
  uint uStack_2e0;
  undefined8 uStack_2dc;
  ulonglong uStack_2d4;
  undefined8 uStack_2cc;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined4 local_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined4 local_2a8;
  undefined8 uStack_2a4;
  undefined1 *puStack_29c;
  undefined1 *puStack_294;
  uint uStack_28c;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined1 *puStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 local_1ec;
  undefined1 *local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 local_1b0;
  undefined8 local_1ac;
  undefined8 local_1a4;
  undefined4 local_19c;
  undefined4 uStack_198;
  undefined4 local_194;
  undefined1 *local_190;
  undefined8 local_188;
  undefined4 local_180;
  undefined4 local_17c;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined4 local_168;
  undefined4 local_164;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined2 local_148;
  undefined4 local_144;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined1 local_c4;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined8 local_84;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined1 local_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined8 local_44;
  
  iVar9 = DAT_1809f5900;
  uVar4 = _UNK_1808adc38;
  uVar3 = _DAT_1808adc30;
  if (param_1 == 4) {
    puVar10 = &DAT_1809214ac;
    if (DAT_1809f5900 != 0) {
      puVar10 = &DAT_1809214b0;
    }
    bVar19 = DAT_1809f5900 != 0;
    *puVar10 = 0;
    puVar11 = &DAT_1809214b4;
    if (bVar19) {
      puVar11 = &DAT_1809215b8;
    }
    puVar16 = (undefined8 *)&DAT_1809216bc;
    *puVar11 = 0;
    puVar12 = (undefined8 *)&DAT_1809216d0;
    if (bVar19) {
      puVar16 = (undefined8 *)&DAT_1809216d0;
      puVar12 = (undefined8 *)&DAT_1809216e4;
    }
    if (puVar16 <= puVar12) {
      *puVar16 = 0;
      puVar16[1] = 0;
      *(undefined4 *)(puVar16 + 2) = 0;
    }
    if (0 < param_2) {
      piVar13 = &DAT_180931b4c;
      while ((*piVar13 != param_2 || (piVar13[1] != iVar9))) {
        piVar13 = piVar13 + 0xab;
        if (piVar13 == &DAT_18093c64c) {
          return;
        }
      }
      lVar18 = 5;
      local_288 = _DAT_1808ad510;
      uStack_280 = _UNK_1808ad518;
      local_1d8 = _DAT_1808ad510;
      uStack_1d0 = _UNK_1808ad518;
      local_2e8 = 0;
      uStack_2e4 = 0xffffffff;
      uStack_2e0 = uStack_2e0 & 0xffffff00;
      uStack_2dc = 0;
      uStack_2d4 = 0;
      uStack_2cc = 0x3e48b4393e343958;
      uStack_2c4 = 0x3ea0c49c;
      uStack_2c0 = 0x3f800000;
      uStack_2bc = 0;
      local_2b8 = (undefined4)_DAT_1808ad790;
      uStack_2b4 = (undefined4)((ulonglong)_DAT_1808ad790 >> 0x20);
      uStack_2b0 = (undefined4)_UNK_1808ad798;
      uStack_2ac = (undefined4)((ulonglong)_UNK_1808ad798 >> 0x20);
      local_2a8 = CONCAT31(local_2a8._1_3_,1);
      uStack_2a4 = 100;
      puStack_29c = &DAT_3f8000003f800000;
      puStack_294 = &DAT_3f8000003f800000;
      uStack_28c = 5;
      local_278 = 0x3e34395800000000;
      uStack_270 = 0x3ea0c49c3e48b439;
      local_268 = 0x3f800000;
      uStack_260 = 0x6400000000;
      local_258 = 0x1400000064;
      uStack_250 = CONCAT31(uStack_250._1_3_,1);
      uStack_24c = 100;
      uStack_248 = 0;
      uStack_244 = 0x3f800000;
      puStack_240 = &DAT_3f8000003f800000;
      local_238 = 0x53f800000;
      uStack_230 = 0x500000064;
      local_228 = 0x5a;
      uStack_220 = 0x3e34395800000000;
      local_218 = 0x3ea0c49c3e48b439;
      uStack_210 = 0x3f800000;
      local_208 = _DAT_1808ad790;
      uStack_200 = _UNK_1808ad798;
      local_1f8 = CONCAT31(local_1f8._1_3_,1);
      uStack_1f4 = 100;
      uStack_1f0 = 0;
      local_1ec = 0x3f800000;
      local_1e8 = &DAT_3f8000003f800000;
      uStack_1e0 = 0x53f800000;
      local_1c8 = 0x3e34395800000000;
      uStack_1c0 = 0x3ea0c49c3e48b439;
      local_1b8 = 0x3f800000;
      uStack_1b4 = 0;
      local_1b0 = 0;
      local_1ac = 0x6400000064;
      local_1a4 = CONCAT35(local_1a4._5_3_,0x100000014);
      local_19c = 100;
      uStack_198 = 0;
      local_194 = 0x3f800000;
      local_190 = &DAT_3f8000003f800000;
      local_188 = 0x53f800000;
      local_180 = 100;
      local_17c = 5;
      local_178 = 0x5a;
      uStack_170._0_4_ = (uint)uStack_170 & 0xffffff00;
      uStack_170 = CONCAT44(0x3f800000,(uint)uStack_170);
      local_168 = 0x3f800000;
      local_164 = 0x3f800000;
      local_160 = CONCAT35(local_160._5_3_,0x3f800000);
      local_158 = _DAT_1808ad990;
      uStack_150 = _UNK_1808ad998;
      local_140 = 0;
      uStack_138 = 0;
      local_f0 = 0;
      local_130 = 0;
      uStack_128 = 0;
      local_148 = 1;
      local_120 = 0;
      uStack_118 = 0;
      local_144 = 0;
      local_110 = 0;
      uStack_108 = 0;
      local_c8 = 0x14;
      local_100 = 0;
      uStack_f8 = 0;
      local_c4 = 1;
      local_e8 = _DAT_1808adb50;
      uStack_e0 = _UNK_1808adb58;
      local_d8 = _DAT_1808ad7f0;
      uStack_d0 = _UNK_1808ad7f8;
      local_b8 = _DAT_1808adc30;
      uStack_b0 = _UNK_1808adc38;
      local_c0 = 100;
      local_a8 = _DAT_1808ad7e0;
      uStack_a0 = _UNK_1808ad7e8;
      local_98 = 0;
      local_90 = 0x3e343958;
      local_8c = 0x3e48b439;
      local_88 = 0x3ea0c49c;
      local_84 = 0x3f800000;
      local_7c = 0;
      local_78 = 100;
      local_74 = 100;
      local_70 = 0x14;
      local_6c = 1;
      local_68 = 100;
      local_60 = 0x3f800000;
      local_5c = 0x3f800000;
      local_58 = 0x3f800000;
      local_54 = 0x3f800000;
      local_50 = 5;
      local_4c = 100;
      local_48 = 5;
      local_44 = 0x5a;
      puVar16 = (undefined8 *)&local_2e8;
      do {
        puVar12 = puVar16;
        piVar14 = piVar13;
        uVar3 = puVar12[1];
        uVar4 = puVar12[2];
        uVar5 = puVar12[3];
        *(undefined8 *)piVar14 = *puVar12;
        *(undefined8 *)(piVar14 + 2) = uVar3;
        uVar3 = puVar12[4];
        uVar6 = puVar12[5];
        *(undefined8 *)(piVar14 + 4) = uVar4;
        *(undefined8 *)(piVar14 + 6) = uVar5;
        uVar4 = puVar12[6];
        uVar5 = puVar12[7];
        *(undefined8 *)(piVar14 + 8) = uVar3;
        *(undefined8 *)(piVar14 + 10) = uVar6;
        uVar3 = puVar12[8];
        uVar6 = puVar12[9];
        *(undefined8 *)(piVar14 + 0xc) = uVar4;
        *(undefined8 *)(piVar14 + 0xe) = uVar5;
        uVar4 = puVar12[10];
        uVar5 = puVar12[0xb];
        *(undefined8 *)(piVar14 + 0x10) = uVar3;
        *(undefined8 *)(piVar14 + 0x12) = uVar6;
        uVar3 = puVar12[0xc];
        uVar6 = puVar12[0xd];
        *(undefined8 *)(piVar14 + 0x14) = uVar4;
        *(undefined8 *)(piVar14 + 0x16) = uVar5;
        uVar4 = puVar12[0xe];
        uVar5 = puVar12[0xf];
        *(undefined8 *)(piVar14 + 0x18) = uVar3;
        *(undefined8 *)(piVar14 + 0x1a) = uVar6;
        *(undefined8 *)(piVar14 + 0x1c) = uVar4;
        *(undefined8 *)(piVar14 + 0x1e) = uVar5;
        lVar18 = lVar18 + -1;
        piVar13 = piVar14 + 0x20;
        puVar16 = puVar12 + 0x10;
      } while (lVar18 != 0);
      uVar3 = puVar12[0x11];
      uVar4 = puVar12[0x12];
      uVar5 = puVar12[0x13];
      *(undefined8 *)(piVar14 + 0x20) = puVar12[0x10];
      *(undefined8 *)(piVar14 + 0x22) = uVar3;
      uVar3 = *(undefined8 *)((longlong)puVar12 + 0x9c);
      uVar6 = *(undefined8 *)((longlong)puVar12 + 0xa4);
      *(undefined8 *)(piVar14 + 0x24) = uVar4;
      *(undefined8 *)(piVar14 + 0x26) = uVar5;
      *(undefined8 *)(piVar14 + 0x27) = uVar3;
      *(undefined8 *)(piVar14 + 0x29) = uVar6;
      return;
    }
  }
  else if (param_1 == 5) {
    DAT_1809216e4 = 0;
    if (DAT_181107418 != 0) {
      DAT_181107418 = 0;
      LOCK();
      DAT_1809f177c = 0;
      UNLOCK();
      return;
    }
  }
  else {
    if (param_1 == 6) {
      DAT_1809216e8 = 0;
      return;
    }
    if (0 < param_2) {
      piVar13 = &DAT_18092174c;
      do {
        if ((*piVar13 == param_2) && (piVar13[1] == DAT_1809f5900)) goto LAB_1802df55d;
        piVar13 = piVar13 + 0x68;
      } while (piVar13 != &DAT_180931b4c);
      piVar13 = &DAT_18092174c;
      do {
        if ((*piVar13 == param_2) && (piVar13[1] < 0)) goto LAB_1802df55d;
        piVar13 = piVar13 + 0x68;
      } while (piVar13 != &DAT_180931b4c);
      goto LAB_1802df718;
    }
LAB_1802dfb21:
    if (param_1 == 1) {
      if (DAT_1809214a4 < 0) {
        DAT_1809214a4 = DAT_18092149c;
      }
      puVar17 = &DAT_1809214a4;
      puVar10 = &DAT_18092149c;
    }
    else {
      if (param_1 != 2) {
        return;
      }
      if (DAT_1809214a8 < 0) {
        DAT_1809214a8 = DAT_1809214a0;
      }
      puVar17 = &DAT_1809214a8;
      puVar10 = &DAT_1809214a0;
    }
    if (iVar9 != 0) {
      puVar10 = puVar17;
    }
    *puVar10 = 0;
  }
  return;
LAB_1802df55d:
  iVar1 = *piVar13;
  iVar2 = piVar13[1];
  uStack_2cc = 0;
  uStack_2c4 = 0;
  uStack_2c0 = 0;
  local_2e8 = 0;
  uStack_2bc = 0;
  local_2b8 = 0;
  uStack_2b4 = 0;
  uStack_2b0 = 0;
  uStack_2e4 = 0xffffffff;
  uStack_2ac = 0;
  local_2a8 = 0;
  uStack_2a4 = 0;
  uStack_2e0 = 0;
  puStack_29c = (undefined1 *)0x0;
  puStack_294 = (undefined1 *)0x0;
  uStack_2dc = 0x3a83126f;
  uStack_2d4 = (uStack_2d4 >> 8 & 0xffffff) << 8;
  uStack_28c = uStack_28c & 0xffffff00;
  local_288 = _DAT_1808adc30;
  uStack_280 = _UNK_1808adc38;
  local_278 = _DAT_1808adc30;
  uStack_270 = _UNK_1808adc38;
  local_268 = _DAT_1808adc30;
  uStack_260 = _UNK_1808adc38;
  local_258 = _DAT_1808adc30;
  uStack_250 = (undefined4)_UNK_1808adc38;
  uStack_24c = (undefined4)((ulonglong)_UNK_1808adc38 >> 0x20);
  uStack_248 = (undefined4)_DAT_1808adc30;
  uStack_244 = (undefined4)((ulonglong)_DAT_1808adc30 >> 0x20);
  puStack_240 = (undefined1 *)_UNK_1808adc38;
  local_238 = _DAT_1808adc30;
  uStack_230 = _UNK_1808adc38;
  local_228 = _DAT_1808adc30;
  uStack_220 = _UNK_1808adc38;
  local_218 = _DAT_1808adc30;
  uStack_210 = _UNK_1808adc38;
  FUN_180540170(&local_208,0,0xa8);
  local_1e8 = (undefined1 *)_DAT_1808ad310;
  uStack_1e0 = _UNK_1808ad318;
  lVar18 = 3;
  local_1c8 = _DAT_1808ad2c0;
  uStack_1c0 = _UNK_1808ad2c8;
  local_178 = _DAT_1808ad310;
  uStack_170 = _UNK_1808ad318;
  local_208 = 0;
  uStack_200 = 0x3f800000;
  local_1f8 = 0;
  uStack_1f4 = 0;
  uStack_1f0 = 0xffffffff;
  local_1ec = 0;
  local_1d8 = 0xffffffff00000000;
  uStack_1d0 = 0;
  local_1b8 = 0xffffffff;
  uStack_1b4 = 0;
  local_1b0 = 0;
  local_1ac = 0x3f800000;
  local_1a4 = 0;
  local_19c = 0xffffffff;
  uStack_198 = 0;
  local_194 = 0;
  local_190 = (undefined1 *)0x3f800000;
  local_188 = 0;
  local_180 = 0xffffffff;
  local_17c = 0;
  local_168 = 0;
  local_164 = 0xffffffff;
  local_160 = 0;
  local_158 = 0;
  uStack_150 = 0;
  piVar14 = piVar13;
  puVar16 = (undefined8 *)&local_2e8;
  do {
    puVar12 = puVar16;
    piVar15 = piVar14;
    uVar5 = puVar12[1];
    uVar6 = puVar12[2];
    uVar7 = puVar12[3];
    *(undefined8 *)piVar15 = *puVar12;
    *(undefined8 *)(piVar15 + 2) = uVar5;
    uVar5 = puVar12[4];
    uVar8 = puVar12[5];
    *(undefined8 *)(piVar15 + 4) = uVar6;
    *(undefined8 *)(piVar15 + 6) = uVar7;
    uVar6 = puVar12[6];
    uVar7 = puVar12[7];
    *(undefined8 *)(piVar15 + 8) = uVar5;
    *(undefined8 *)(piVar15 + 10) = uVar8;
    uVar5 = puVar12[8];
    uVar8 = puVar12[9];
    *(undefined8 *)(piVar15 + 0xc) = uVar6;
    *(undefined8 *)(piVar15 + 0xe) = uVar7;
    uVar6 = puVar12[10];
    uVar7 = puVar12[0xb];
    *(undefined8 *)(piVar15 + 0x10) = uVar5;
    *(undefined8 *)(piVar15 + 0x12) = uVar8;
    uVar5 = puVar12[0xc];
    uVar8 = puVar12[0xd];
    *(undefined8 *)(piVar15 + 0x14) = uVar6;
    *(undefined8 *)(piVar15 + 0x16) = uVar7;
    uVar6 = puVar12[0xe];
    uVar7 = puVar12[0xf];
    *(undefined8 *)(piVar15 + 0x18) = uVar5;
    *(undefined8 *)(piVar15 + 0x1a) = uVar8;
    *(undefined8 *)(piVar15 + 0x1c) = uVar6;
    *(undefined8 *)(piVar15 + 0x1e) = uVar7;
    lVar18 = lVar18 + -1;
    piVar14 = piVar15 + 0x20;
    puVar16 = puVar12 + 0x10;
  } while (lVar18 != 0);
  uVar5 = puVar12[0x11];
  uVar6 = puVar12[0x12];
  uVar7 = puVar12[0x13];
  *(undefined8 *)(piVar15 + 0x20) = puVar12[0x10];
  *(undefined8 *)(piVar15 + 0x22) = uVar5;
  *(undefined8 *)(piVar15 + 0x24) = uVar6;
  *(undefined8 *)(piVar15 + 0x26) = uVar7;
  *piVar13 = iVar1;
  piVar13[1] = iVar2;
LAB_1802df718:
  piVar13 = &DAT_180931b4c;
LAB_1802df730:
  if ((*piVar13 != param_2) || (piVar13[1] != iVar9)) goto LAB_1802df73a;
  lVar18 = 5;
  local_288 = _DAT_1808ad510;
  uStack_280 = _UNK_1808ad518;
  local_1d8 = _DAT_1808ad510;
  uStack_1d0 = _UNK_1808ad518;
  local_2e8 = 0;
  uStack_2e4 = 0xffffffff;
  uStack_2e0 = uStack_2e0 & 0xffffff00;
  uStack_2dc = 0;
  uStack_2d4 = 0;
  uStack_2cc = 0x3e48b4393e343958;
  uStack_2c4 = 0x3ea0c49c;
  uStack_2c0 = 0x3f800000;
  uStack_2bc = 0;
  local_2b8 = (undefined4)_DAT_1808ad790;
  uStack_2b4 = (undefined4)((ulonglong)_DAT_1808ad790 >> 0x20);
  uStack_2b0 = (undefined4)_UNK_1808ad798;
  uStack_2ac = (undefined4)((ulonglong)_UNK_1808ad798 >> 0x20);
  local_2a8 = CONCAT31(local_2a8._1_3_,1);
  uStack_2a4 = 100;
  puStack_29c = &DAT_3f8000003f800000;
  puStack_294 = &DAT_3f8000003f800000;
  uStack_28c = 5;
  local_278 = 0x3e34395800000000;
  uStack_270 = 0x3ea0c49c3e48b439;
  local_268 = 0x3f800000;
  uStack_260 = 0x6400000000;
  local_258 = 0x1400000064;
  uStack_250 = CONCAT31(uStack_250._1_3_,1);
  uStack_24c = 100;
  uStack_248 = 0;
  uStack_244 = 0x3f800000;
  puStack_240 = &DAT_3f8000003f800000;
  local_238 = 0x53f800000;
  uStack_230 = 0x500000064;
  local_228 = 0x5a;
  uStack_220 = 0x3e34395800000000;
  local_218 = 0x3ea0c49c3e48b439;
  uStack_210 = 0x3f800000;
  local_208 = _DAT_1808ad790;
  uStack_200 = _UNK_1808ad798;
  local_1f8 = CONCAT31(local_1f8._1_3_,1);
  uStack_1f4 = 100;
  uStack_1f0 = 0;
  local_1ec = 0x3f800000;
  local_1e8 = &DAT_3f8000003f800000;
  uStack_1e0 = 0x53f800000;
  local_1c8 = 0x3e34395800000000;
  uStack_1c0 = 0x3ea0c49c3e48b439;
  local_1b8 = 0x3f800000;
  uStack_1b4 = 0;
  local_1b0 = 0;
  local_1ac = 0x6400000064;
  local_1a4 = CONCAT35(local_1a4._5_3_,0x100000014);
  local_19c = 100;
  uStack_198 = 0;
  local_194 = 0x3f800000;
  local_190 = &DAT_3f8000003f800000;
  local_188 = 0x53f800000;
  local_180 = 100;
  local_17c = 5;
  local_178 = 0x5a;
  uStack_170._0_4_ = (uint)uStack_170 & 0xffffff00;
  uStack_170 = CONCAT44(0x3f800000,(uint)uStack_170);
  local_168 = 0x3f800000;
  local_164 = 0x3f800000;
  local_160 = CONCAT35(local_160._5_3_,0x3f800000);
  local_158 = _DAT_1808ad990;
  uStack_150 = _UNK_1808ad998;
  local_140 = 0;
  uStack_138 = 0;
  local_f0 = 0;
  local_130 = 0;
  uStack_128 = 0;
  local_148 = 1;
  local_120 = 0;
  uStack_118 = 0;
  local_144 = 0;
  local_110 = 0;
  uStack_108 = 0;
  local_c8 = 0x14;
  local_100 = 0;
  uStack_f8 = 0;
  local_c4 = 1;
  local_e8 = _DAT_1808adb50;
  uStack_e0 = _UNK_1808adb58;
  local_a8 = _DAT_1808ad7e0;
  uStack_a0 = _UNK_1808ad7e8;
  local_d8 = _DAT_1808ad7f0;
  uStack_d0 = _UNK_1808ad7f8;
  local_c0 = 100;
  local_b8 = uVar3;
  uStack_b0 = uVar4;
  local_98 = 0;
  local_90 = 0x3e343958;
  local_8c = 0x3e48b439;
  local_88 = 0x3ea0c49c;
  local_84 = 0x3f800000;
  local_7c = 0;
  local_78 = 100;
  local_74 = 100;
  local_70 = 0x14;
  local_6c = 1;
  local_68 = 100;
  local_60 = 0x3f800000;
  local_5c = 0x3f800000;
  local_58 = 0x3f800000;
  local_54 = 0x3f800000;
  local_50 = 5;
  local_4c = 100;
  local_48 = 5;
  local_44 = 0x5a;
  puVar16 = (undefined8 *)&local_2e8;
  do {
    puVar12 = puVar16;
    piVar14 = piVar13;
    uVar3 = puVar12[1];
    uVar4 = puVar12[2];
    uVar5 = puVar12[3];
    *(undefined8 *)piVar14 = *puVar12;
    *(undefined8 *)(piVar14 + 2) = uVar3;
    uVar3 = puVar12[4];
    uVar6 = puVar12[5];
    *(undefined8 *)(piVar14 + 4) = uVar4;
    *(undefined8 *)(piVar14 + 6) = uVar5;
    uVar4 = puVar12[6];
    uVar5 = puVar12[7];
    *(undefined8 *)(piVar14 + 8) = uVar3;
    *(undefined8 *)(piVar14 + 10) = uVar6;
    uVar3 = puVar12[8];
    uVar6 = puVar12[9];
    *(undefined8 *)(piVar14 + 0xc) = uVar4;
    *(undefined8 *)(piVar14 + 0xe) = uVar5;
    uVar4 = puVar12[10];
    uVar5 = puVar12[0xb];
    *(undefined8 *)(piVar14 + 0x10) = uVar3;
    *(undefined8 *)(piVar14 + 0x12) = uVar6;
    uVar3 = puVar12[0xc];
    uVar6 = puVar12[0xd];
    *(undefined8 *)(piVar14 + 0x14) = uVar4;
    *(undefined8 *)(piVar14 + 0x16) = uVar5;
    uVar4 = puVar12[0xe];
    uVar5 = puVar12[0xf];
    *(undefined8 *)(piVar14 + 0x18) = uVar3;
    *(undefined8 *)(piVar14 + 0x1a) = uVar6;
    *(undefined8 *)(piVar14 + 0x1c) = uVar4;
    *(undefined8 *)(piVar14 + 0x1e) = uVar5;
    lVar18 = lVar18 + -1;
    piVar13 = piVar14 + 0x20;
    puVar16 = puVar12 + 0x10;
  } while (lVar18 != 0);
  uVar3 = puVar12[0x11];
  uVar4 = puVar12[0x12];
  uVar5 = puVar12[0x13];
  *(undefined8 *)(piVar14 + 0x20) = puVar12[0x10];
  *(undefined8 *)(piVar14 + 0x22) = uVar3;
  uVar3 = *(undefined8 *)((longlong)puVar12 + 0x9c);
  uVar6 = *(undefined8 *)((longlong)puVar12 + 0xa4);
  *(undefined8 *)(piVar14 + 0x24) = uVar4;
  *(undefined8 *)(piVar14 + 0x26) = uVar5;
  *(undefined8 *)(piVar14 + 0x27) = uVar3;
  *(undefined8 *)(piVar14 + 0x29) = uVar6;
  goto LAB_1802dfb21;
LAB_1802df73a:
  piVar13 = piVar13 + 0xab;
  if (piVar13 == &DAT_18093c64c) goto LAB_1802dfb21;
  goto LAB_1802df730;
}



/* ===== 1802dfb90 FUN_1802dfb90 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802dfb90(int *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int *piVar7;
  int *piVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 local_1d8 [4];
  undefined8 uStack_1d4;
  undefined4 uStack_1cc;
  undefined4 local_1c8;
  undefined8 uStack_1c4;
  undefined1 uStack_1bc;
  undefined4 local_1b8;
  undefined8 uStack_1b4;
  undefined8 uStack_1ac;
  undefined8 uStack_1a4;
  undefined8 uStack_19c;
  undefined8 local_194;
  undefined8 uStack_18c;
  undefined8 local_184;
  undefined8 uStack_17c;
  undefined1 local_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined8 local_d4;
  undefined8 local_cc;
  undefined8 local_c4;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined8 local_5c;
  undefined8 local_54;
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined4 local_10;
  
  uStack_1d4 = 0;
  local_1c8 = 0;
  uStack_1bc = 0;
  local_1b8 = 0;
  local_174 = 0;
  uStack_1b4 = 0;
  uStack_1ac = 0;
  local_1d8[0] = 0;
  uStack_1a4 = 0;
  uStack_19c = 0;
  uStack_1cc = 0xffffffff;
  local_194 = 0;
  uStack_18c = 0;
  uStack_1c4 = 0x3a83126f;
  local_184 = 0;
  uStack_17c = 0;
  local_170 = 0x3f800000;
  local_168 = _DAT_1808adc30;
  uStack_160 = _UNK_1808adc38;
  local_158 = _DAT_1808adc30;
  uStack_150 = _UNK_1808adc38;
  local_148 = _DAT_1808adc30;
  uStack_140 = _UNK_1808adc38;
  local_138 = _DAT_1808adc30;
  uStack_130 = _UNK_1808adc38;
  local_128 = _DAT_1808adc30;
  uStack_120 = _UNK_1808adc38;
  local_118 = _DAT_1808adc30;
  uStack_110 = _UNK_1808adc38;
  local_108 = _DAT_1808adc30;
  uStack_100 = _UNK_1808adc38;
  local_16c = 0x3f800000;
  local_f8 = 0x3f800000;
  local_f4 = 0x3f800000;
  FUN_180540170(&local_f0,0,0xa8);
  local_98 = _DAT_1808ad310;
  uStack_90 = _UNK_1808ad318;
  lVar12 = 3;
  local_18 = 0;
  local_28 = 0;
  uStack_20 = 0;
  local_f0 = 0;
  local_e8 = _DAT_1808ad2c0;
  uStack_e0 = _UNK_1808ad2c8;
  lVar11 = 3;
  local_d8 = 0xffffffff;
  local_d4 = 0;
  local_cc = 0x3f800000;
  local_c4 = 0;
  local_bc = 0xffffffff;
  local_b8 = 0;
  local_b0 = 0x3f800000;
  local_a8 = 0;
  local_a0 = 0xffffffff;
  local_9c = 0;
  local_88 = 0;
  local_84 = 0xffffffff;
  local_80 = 0;
  local_78 = _DAT_1808ad2c0;
  uStack_70 = _UNK_1808ad2c8;
  local_68 = 0xffffffff;
  local_64 = 0;
  local_5c = 0x3f800000;
  local_54 = 0;
  local_4c = 0xffffffff;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_10 = 0;
  puVar6 = (undefined8 *)&DAT_1809f52f0;
  puVar10 = (undefined8 *)local_1d8;
  do {
    puVar9 = puVar10;
    puVar5 = puVar6;
    uVar1 = puVar9[1];
    uVar2 = puVar9[2];
    uVar3 = puVar9[3];
    *puVar5 = *puVar9;
    puVar5[1] = uVar1;
    uVar1 = puVar9[4];
    uVar4 = puVar9[5];
    puVar5[2] = uVar2;
    puVar5[3] = uVar3;
    uVar2 = puVar9[6];
    uVar3 = puVar9[7];
    puVar5[4] = uVar1;
    puVar5[5] = uVar4;
    uVar1 = puVar9[8];
    uVar4 = puVar9[9];
    puVar5[6] = uVar2;
    puVar5[7] = uVar3;
    uVar2 = puVar9[10];
    uVar3 = puVar9[0xb];
    puVar5[8] = uVar1;
    puVar5[9] = uVar4;
    uVar1 = puVar9[0xc];
    uVar4 = puVar9[0xd];
    puVar5[10] = uVar2;
    puVar5[0xb] = uVar3;
    uVar2 = puVar9[0xe];
    uVar3 = puVar9[0xf];
    puVar5[0xc] = uVar1;
    puVar5[0xd] = uVar4;
    puVar5[0xe] = uVar2;
    puVar5[0xf] = uVar3;
    lVar11 = lVar11 + -1;
    puVar6 = puVar5 + 0x10;
    puVar10 = puVar9 + 0x10;
  } while (lVar11 != 0);
  uVar1 = puVar9[0x11];
  uVar2 = puVar9[0x12];
  uVar3 = puVar9[0x13];
  puVar5[0x10] = puVar9[0x10];
  puVar5[0x11] = uVar1;
  uVar1 = puVar9[0x14];
  uVar4 = puVar9[0x15];
  puVar5[0x12] = uVar2;
  puVar5[0x13] = uVar3;
  uVar2 = puVar9[0x16];
  uVar3 = puVar9[0x17];
  puVar5[0x14] = uVar1;
  puVar5[0x15] = uVar4;
  uVar1 = *(undefined8 *)((longlong)puVar9 + 0xbc);
  uVar4 = *(undefined8 *)((longlong)puVar9 + 0xc4);
  puVar5[0x16] = uVar2;
  puVar5[0x17] = uVar3;
  *(undefined8 *)((longlong)puVar5 + 0xbc) = uVar1;
  *(undefined8 *)((longlong)puVar5 + 0xc4) = uVar4;
  DAT_1809f52f4 = *param_1;
  DAT_1809f52f0 = 1;
  if (DAT_1809f52f4 == 4) {
    if (DAT_1809f5900 == 0) {
      DAT_1809f549c = DAT_1809214ac;
      puVar6 = (undefined8 *)&DAT_1809216bc;
    }
    else {
      DAT_1809f549c = DAT_1809214b0;
      puVar6 = (undefined8 *)&DAT_1809216d0;
    }
    DAT_1809f52f0 = 1;
    _DAT_1809f54a0 = *puVar6;
    uRam00000001809f54a8 = puVar6[1];
    DAT_1809f54b0 = *(undefined4 *)(puVar6 + 2);
    return;
  }
  if (DAT_1809f52f4 == 5) {
    DAT_1809f52f0 = 1;
    DAT_1809f54b4 = DAT_1809216e4;
    return;
  }
  if (DAT_1809f52f4 == 6) {
    DAT_1809f52f0 = 1;
    DAT_1809f54b8 = DAT_1809216e8;
    return;
  }
  DAT_1809f5498 = param_1[1];
  if (0 < DAT_1809f5498) {
    piVar7 = &DAT_18092174c;
    do {
      if ((*piVar7 == DAT_1809f5498) && (piVar7[1] == DAT_1809f5900)) goto LAB_1802dfe86;
      piVar7 = piVar7 + 0x68;
    } while (piVar7 != &DAT_180931b4c);
    piVar7 = &DAT_18092174c;
    do {
      if ((*piVar7 == DAT_1809f5498) && (piVar7[1] < 0)) {
LAB_1802dfe86:
        puVar6 = (undefined8 *)&DAT_1809f52f8;
        do {
          puVar10 = puVar6;
          piVar8 = piVar7;
          uVar1 = *(undefined8 *)(piVar8 + 2);
          uVar2 = *(undefined8 *)(piVar8 + 4);
          uVar3 = *(undefined8 *)(piVar8 + 6);
          *puVar10 = *(undefined8 *)piVar8;
          puVar10[1] = uVar1;
          uVar1 = *(undefined8 *)(piVar8 + 8);
          uVar4 = *(undefined8 *)(piVar8 + 10);
          puVar10[2] = uVar2;
          puVar10[3] = uVar3;
          uVar2 = *(undefined8 *)(piVar8 + 0xc);
          uVar3 = *(undefined8 *)(piVar8 + 0xe);
          puVar10[4] = uVar1;
          puVar10[5] = uVar4;
          uVar1 = *(undefined8 *)(piVar8 + 0x10);
          uVar4 = *(undefined8 *)(piVar8 + 0x12);
          puVar10[6] = uVar2;
          puVar10[7] = uVar3;
          uVar2 = *(undefined8 *)(piVar8 + 0x14);
          uVar3 = *(undefined8 *)(piVar8 + 0x16);
          puVar10[8] = uVar1;
          puVar10[9] = uVar4;
          uVar1 = *(undefined8 *)(piVar8 + 0x18);
          uVar4 = *(undefined8 *)(piVar8 + 0x1a);
          puVar10[10] = uVar2;
          puVar10[0xb] = uVar3;
          uVar2 = *(undefined8 *)(piVar8 + 0x1c);
          uVar3 = *(undefined8 *)(piVar8 + 0x1e);
          puVar10[0xc] = uVar1;
          puVar10[0xd] = uVar4;
          puVar10[0xe] = uVar2;
          puVar10[0xf] = uVar3;
          lVar12 = lVar12 + -1;
          piVar7 = piVar8 + 0x20;
          puVar6 = puVar10 + 0x10;
        } while (lVar12 != 0);
        uVar1 = *(undefined8 *)(piVar8 + 0x22);
        uVar2 = *(undefined8 *)(piVar8 + 0x24);
        uVar3 = *(undefined8 *)(piVar8 + 0x26);
        puVar10[0x10] = *(undefined8 *)(piVar8 + 0x20);
        puVar10[0x11] = uVar1;
        puVar10[0x12] = uVar2;
        puVar10[0x13] = uVar3;
        return;
      }
      piVar7 = piVar7 + 0x68;
    } while (piVar7 != &DAT_180931b4c);
  }
  DAT_1809f52f0 = 1;
  return;
}



/* ===== 1802dff10 FUN_1802dff10 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802dff10(undefined8 param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  char cVar14;
  int iVar15;
  undefined1 *puVar16;
  int *piVar17;
  undefined8 *puVar18;
  undefined4 *puVar19;
  undefined8 *puVar20;
  int iVar21;
  undefined8 *puVar22;
  int iVar23;
  longlong lVar24;
  int iVar25;
  bool bVar26;
  undefined8 local_res8;
  
  DAT_180cd04ab = 1;
  local_res8 = 0x40e0000040e00000;
  cVar14 = FUN_1802b5260("##slot_context",&local_res8);
  if (cVar14 != '\0') {
    local_res8 = 0;
    FUN_1803d89a0(0xe);
    bVar11 = false;
    if ((char)param_2[0x2c] != '\0') {
      cVar14 = FUN_1802c63e0(&DAT_18075fa44,"inv_copy",
                             "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 448 512\" width=\"448\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M208 0L332 0C344 0 357 6 366 15L433 82C442 91 448 104 448 116L448 336C448 363 426 384 400 384L208 384C181 384 160 363 160 336L160 48C160 22 181 0 208 0ZM48 128L128 128L128 192L64 192L64 448L256 448L256 416L320 416L320 464C320 490 298 512 272 512L48 512C21 512 0 490 0 464L0 176C0 150 21 128 48 128Z\"/></svg>"
                             ,DAT_1808acbe4,0);
      if (cVar14 != '\0') {
        FUN_1802dfb90(param_2);
        FUN_1803ee1f0();
      }
      bVar11 = true;
    }
    if (DAT_1809f52f0 != '\0') {
      iVar23 = 4;
      lVar24 = 3;
      if (DAT_1809f52f4 == 2) {
        iVar21 = 1;
      }
      else if (DAT_1809f52f4 == 4) {
        iVar21 = 2;
      }
      else if (DAT_1809f52f4 == 5) {
        iVar21 = 3;
      }
      else if (DAT_1809f52f4 == 6) {
        iVar21 = 4;
      }
      else {
        iVar21 = 0;
      }
      iVar15 = *param_2;
      if (iVar15 == 2) {
        iVar15 = 1;
      }
      else if (iVar15 == 4) {
        iVar15 = 2;
      }
      else if (iVar15 == 5) {
        iVar15 = 3;
      }
      else if (iVar15 == 6) {
        iVar15 = 4;
      }
      else {
        iVar15 = 0;
      }
      if (iVar21 == iVar15) {
        bVar11 = true;
        cVar14 = FUN_1802c63e0("Paste","inv_paste",
                               "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 512 512\" width=\"512\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M160 0C136 0 115 13 104 32L47 32C21 32 0 54 0 80L0 400C0 427 21 448 47 448L191 448L191 176C191 132 227 96 272 96L320 96L320 80C320 54 298 32 272 32L215 32C204 13 183 0 160 0ZM272 128C245 128 224 150 224 176L224 448L224 464C224 490 245 512 272 512L464 512C490 512 512 490 512 464L512 244C512 232 506 219 497 210L430 143C421 134 408 128 396 128L320 128L272 128ZM160 40C173 40 184 51 184 64C184 78 173 88 160 88C146 88 136 78 136 64C136 51 146 40 160 40Z\"/></svg>"
                               ,DAT_1808acc00,0);
        iVar15 = DAT_1809f5900;
        uVar5 = uRam00000001809f54ac;
        uVar4 = uRam00000001809f54a8;
        uVar3 = uRam00000001809f54a4;
        uVar2 = _DAT_1809f54a0;
        iVar21 = DAT_1809f5498;
        if (cVar14 != '\0') {
          if (DAT_1809f52f0 != '\0') {
            if (DAT_1809f52f4 == 2) {
              iVar25 = 1;
            }
            else if (DAT_1809f52f4 == 4) {
              iVar25 = 2;
            }
            else if (DAT_1809f52f4 == 5) {
              iVar25 = 3;
            }
            else if (DAT_1809f52f4 == 6) {
              iVar25 = 4;
            }
            else {
              iVar25 = 0;
            }
            iVar1 = *param_2;
            if (iVar1 == 2) {
              iVar23 = 1;
            }
            else if (iVar1 == 4) {
              iVar23 = 2;
            }
            else if (iVar1 == 5) {
              iVar23 = 3;
            }
            else if (iVar1 != 6) {
              iVar23 = 0;
            }
            if (iVar25 == iVar23) {
              if (iVar1 == 4) {
                bVar26 = DAT_1809f5900 != 0;
                puVar19 = &DAT_1809214ac;
                if (bVar26) {
                  puVar19 = &DAT_1809214b0;
                }
                *puVar19 = DAT_1809f549c;
                uVar6 = DAT_1809f54b0;
                puVar16 = &DAT_1809214b4;
                if (bVar26) {
                  puVar16 = &DAT_1809215b8;
                }
                *puVar16 = 0;
                puVar19 = &DAT_1809216bc;
                if (bVar26) {
                  puVar19 = &DAT_1809216d0;
                }
                *puVar19 = uVar2;
                puVar19[1] = uVar3;
                puVar19[2] = uVar4;
                puVar19[3] = uVar5;
                puVar19[4] = uVar6;
              }
              else if (iVar1 == 5) {
                DAT_1809216e4 = DAT_1809f54b4;
              }
              else if (iVar1 == 6) {
                DAT_1809216e8 = DAT_1809f54b8;
              }
              else {
                if (((iVar1 == 1) && (DAT_1809f52f4 == 1)) && (DAT_1809f5498 != 0)) {
                  if (DAT_1809214a4 < 0) {
                    DAT_1809214a4 = DAT_18092149c;
                  }
                  piVar17 = &DAT_18092149c;
                  if (DAT_1809f5900 != 0) {
                    piVar17 = &DAT_1809214a4;
                  }
                  *piVar17 = DAT_1809f5498;
                  iVar23 = iVar21;
                }
                else {
                  iVar23 = param_2[1];
                  if ((iVar1 == 2) && (DAT_1809f5498 != 0)) {
                    if (DAT_1809214a8 < 0) {
                      DAT_1809214a8 = DAT_1809214a0;
                    }
                    piVar17 = &DAT_1809214a0;
                    if (DAT_1809f5900 != 0) {
                      piVar17 = &DAT_1809214a8;
                    }
                    *piVar17 = DAT_1809f5498;
                    iVar23 = iVar21;
                  }
                }
                puVar18 = (undefined8 *)FUN_1800f1190(iVar23,iVar15);
                if (puVar18 != (undefined8 *)0x0) {
                  uVar2 = *(undefined4 *)puVar18;
                  uVar3 = *(undefined4 *)((longlong)puVar18 + 4);
                  puVar12 = puVar18;
                  puVar13 = (undefined8 *)&DAT_1809f52f8;
                  do {
                    puVar22 = puVar13;
                    puVar20 = puVar12;
                    uVar7 = puVar22[1];
                    uVar8 = puVar22[2];
                    uVar9 = puVar22[3];
                    *puVar20 = *puVar22;
                    puVar20[1] = uVar7;
                    uVar7 = puVar22[4];
                    uVar10 = puVar22[5];
                    puVar20[2] = uVar8;
                    puVar20[3] = uVar9;
                    uVar8 = puVar22[6];
                    uVar9 = puVar22[7];
                    puVar20[4] = uVar7;
                    puVar20[5] = uVar10;
                    uVar7 = puVar22[8];
                    uVar10 = puVar22[9];
                    puVar20[6] = uVar8;
                    puVar20[7] = uVar9;
                    uVar8 = puVar22[10];
                    uVar9 = puVar22[0xb];
                    puVar20[8] = uVar7;
                    puVar20[9] = uVar10;
                    uVar7 = puVar22[0xc];
                    uVar10 = puVar22[0xd];
                    puVar20[10] = uVar8;
                    puVar20[0xb] = uVar9;
                    uVar8 = puVar22[0xe];
                    uVar9 = puVar22[0xf];
                    puVar20[0xc] = uVar7;
                    puVar20[0xd] = uVar10;
                    puVar20[0xe] = uVar8;
                    puVar20[0xf] = uVar9;
                    lVar24 = lVar24 + -1;
                    puVar12 = puVar20 + 0x10;
                    puVar13 = puVar22 + 0x10;
                  } while (lVar24 != 0);
                  uVar4 = *(undefined4 *)((longlong)puVar22 + 0x84);
                  uVar5 = *(undefined4 *)(puVar22 + 0x11);
                  uVar6 = *(undefined4 *)((longlong)puVar22 + 0x8c);
                  uVar7 = puVar22[0x12];
                  uVar8 = puVar22[0x13];
                  *(undefined4 *)(puVar20 + 0x10) = *(undefined4 *)(puVar22 + 0x10);
                  *(undefined4 *)((longlong)puVar20 + 0x84) = uVar4;
                  *(undefined4 *)(puVar20 + 0x11) = uVar5;
                  *(undefined4 *)((longlong)puVar20 + 0x8c) = uVar6;
                  puVar20[0x12] = uVar7;
                  puVar20[0x13] = uVar8;
                  *(undefined4 *)puVar18 = uVar2;
                  *(undefined4 *)((longlong)puVar18 + 4) = uVar3;
                }
              }
            }
          }
          FUN_1803ee1f0();
        }
      }
    }
    if ((char)param_2[0x2c] != '\0') {
      if (bVar11) {
        FUN_1802b7f90();
      }
      cVar14 = FUN_1802c63e0("Delete","inv_trash",
                             "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 448 512\" width=\"448\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M135 18C140 7 151 0 163 0L284 0C296 0 307 7 312 18L320 32L416 32C433 32 448 47 448 64C448 82 433 96 416 96L32 96C14 96 0 82 0 64C0 47 14 32 32 32L128 32L135 18ZM32 128L416 128L416 448C416 483 387 512 352 512L96 512C60 512 32 483 32 448L32 128ZM128 192C119 192 112 200 112 208L112 432C112 441 119 448 128 448C136 448 144 441 144 432L144 208C144 200 136 192 128 192ZM224 192C215 192 208 200 208 208L208 432C208 441 215 448 224 448C232 448 240 441 240 432L240 208C240 200 232 192 224 192ZM320 192C311 192 304 200 304 208L304 432C304 441 311 448 320 448C328 448 336 441 336 432L336 208C336 200 328 192 320 192Z\"/></svg>"
                             ,DAT_1808acbe4,1);
      if (cVar14 != '\0') {
        FUN_1802df000(*param_2,param_2[1]);
        FUN_1803ee1f0();
      }
    }
    FUN_1803d8a40(1);
    FUN_1802b5590();
  }
  return;
}



/* ===== 1802e0300 FUN_1802e0300 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802e0300(undefined8 *param_1)

{
  code *pcVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined1 *puVar6;
  ulonglong uVar7;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [32];
  longlong local_30 [5];
  
  local_30[4] = DAT_180919500 ^ (ulonglong)auStack_58;
  uVar2 = FUN_18009ca50();
  if (uVar2 == 0xffffffffffffffff) {
    param_1[2] = 0;
    if (0xf < (ulonglong)param_1[3]) {
      param_1 = (undefined8 *)*param_1;
    }
    *(undefined1 *)param_1 = 0;
  }
  else {
    lVar3 = FUN_18009cb50(param_1);
    puVar6 = auStack_58;
    local_30[2] = 0;
    local_30[3] = 0;
    local_30[0] = 0;
    local_30[1] = 0;
    if ((ulonglong)param_1[2] < uVar2) {
LAB_1802e040b:
                    /* WARNING: Subroutine does not return */
      *(undefined **)(puVar6 + -8) = &UNK_1802e0410;
      FUN_18002a1a0();
    }
    uVar5 = param_1[2] - uVar2;
    uVar7 = (1 - uVar2) + lVar3;
    if (uVar5 < uVar7) {
      uVar7 = uVar5;
    }
    if ((ulonglong)param_1[3] < 0x10) {
      puVar4 = param_1;
    }
    else {
      puVar4 = (undefined8 *)*param_1;
    }
    FUN_1800133a0(local_30,(undefined1 *)((longlong)puVar4 + uVar2),uVar7);
    FUN_18002ba60(param_1,local_30);
    if (0xf < (ulonglong)local_30[3]) {
      uVar2 = local_30[3] + 1;
      lVar3 = local_30[0];
      if (0xfff < uVar2) {
        lVar3 = *(longlong *)(local_30[0] + -8);
        if (0x1f < (local_30[0] - lVar3) - 8U) {
          pcVar1 = (code *)swi(0x29);
          (*pcVar1)(5);
          puVar6 = auStack_50;
          goto LAB_1802e040b;
        }
        uVar2 = local_30[3] + 0x28;
      }
      thunk_FUN_1803d64e0(lVar3,uVar2);
    }
  }
  return;
}



/* ===== 1802e0420 FUN_1802e0420 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802e0420(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  byte ****ppppbVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  byte ****ppppbVar12;
  ulonglong uVar13;
  bool bVar14;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  byte ****local_68;
  undefined8 uStack_60;
  longlong local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_98;
  param_2[2] = 0;
  if ((ulonglong)param_2[3] < 0x10) {
    puVar5 = param_2;
  }
  else {
    puVar5 = (undefined8 *)*param_2;
  }
  *(undefined1 *)puVar5 = 0;
  param_3[2] = 0;
  if ((ulonglong)param_3[3] < 0x10) {
    puVar5 = param_3;
  }
  else {
    puVar5 = (undefined8 *)*param_3;
  }
  *(undefined1 *)puVar5 = 0;
  uVar11 = param_1[2];
  local_78 = param_2;
  if (uVar11 != 0) {
    bVar2 = false;
    uVar13 = 0;
    do {
      puVar5 = param_2;
      if (bVar2) {
        puVar5 = param_3;
      }
      uVar8 = param_1[3];
      puVar7 = param_1;
      if (0xf < uVar8) {
        puVar7 = (undefined8 *)*param_1;
      }
      if (*(char *)((longlong)puVar7 + uVar13) == '<') {
        puVar7 = param_1;
        if (0xf < uVar8) {
          puVar7 = (undefined8 *)*param_1;
        }
        if (((uVar11 <= uVar13) ||
            (lVar6 = thunk_FUN_1804e6c50((longlong)puVar7 + uVar13,uVar11 + (longlong)puVar7,0x3e),
            lVar6 == uVar11 + (longlong)puVar7)) || (lVar6 = lVar6 - (longlong)puVar7, lVar6 == -1))
        break;
        uVar11 = uVar13 + 1;
        local_68 = (byte ****)0x0;
        uStack_60 = 0;
        local_58 = 0;
        local_50 = 0;
        if ((ulonglong)param_1[2] < uVar11) {
                    /* WARNING: Subroutine does not return */
          FUN_18002a1a0();
        }
        uVar13 = (lVar6 - uVar13) - 1;
        uVar8 = param_1[2] - uVar11;
        if (uVar8 < uVar13) {
          uVar13 = uVar8;
        }
        if ((ulonglong)param_1[3] < 0x10) {
          puVar7 = param_1;
        }
        else {
          puVar7 = (undefined8 *)*param_1;
        }
        FUN_1800133a0(&local_68,uVar11 + (longlong)puVar7,uVar13);
        if (local_50 < 0x10) {
          ppppbVar12 = (byte ****)&local_68;
        }
        else {
          ppppbVar12 = local_68;
        }
        ppppbVar1 = (byte ****)((longlong)ppppbVar12 + local_58);
        for (; ppppbVar12 != ppppbVar1; ppppbVar12 = (byte ****)((longlong)ppppbVar12 + 1)) {
          iVar3 = tolower((uint)*(byte *)ppppbVar12);
          *(byte *)ppppbVar12 = (byte)iVar3;
        }
        ppppbVar12 = (byte ****)&local_68;
        if (0xf < local_50) {
          ppppbVar12 = local_68;
        }
        if (local_58 == 1) {
          if (*(byte *)ppppbVar12 == 0x69) {
            uVar4 = 0;
          }
          else {
            uVar4 = -(uint)(*(byte *)ppppbVar12 < 0x69) | 1;
          }
          if (uVar4 != 0) goto LAB_1802e05d3;
          bVar2 = true;
        }
        else {
LAB_1802e05d3:
          ppppbVar12 = (byte ****)&local_68;
          if (0xf < local_50) {
            ppppbVar12 = local_68;
          }
          if (local_58 == 2) {
            bVar14 = *(byte *)ppppbVar12 < 0x2f;
            if ((*(byte *)ppppbVar12 == 0x2f) &&
               (bVar14 = *(byte *)((longlong)ppppbVar12 + 1) < 0x69,
               *(byte *)((longlong)ppppbVar12 + 1) == 0x69)) {
              uVar4 = 0;
            }
            else {
              uVar4 = -(uint)bVar14 | 1;
            }
            if (uVar4 == 0) {
              bVar2 = false;
              goto LAB_1802e06ae;
            }
          }
          ppppbVar12 = (byte ****)&local_68;
          if (0xf < local_50) {
            ppppbVar12 = local_68;
          }
          if (local_58 == 2) {
            bVar14 = *(byte *)ppppbVar12 < 0x62;
            if ((*(byte *)ppppbVar12 == 0x62) &&
               (bVar14 = *(byte *)((longlong)ppppbVar12 + 1) < 0x72,
               *(byte *)((longlong)ppppbVar12 + 1) == 0x72)) {
              uVar4 = 0;
            }
            else {
              uVar4 = -(uint)bVar14 | 1;
            }
            if (uVar4 != 0) goto LAB_1802e0633;
LAB_1802e06a4:
            FUN_1800690a0(puVar5,10);
          }
          else {
LAB_1802e0633:
            ppppbVar12 = (byte ****)&local_68;
            if (0xf < local_50) {
              ppppbVar12 = local_68;
            }
            if (local_58 == 3) {
              bVar14 = *(byte *)ppppbVar12 < 0x62;
              if (((*(byte *)ppppbVar12 == 0x62) &&
                  (bVar14 = *(byte *)((longlong)ppppbVar12 + 1) < 0x72,
                  *(byte *)((longlong)ppppbVar12 + 1) == 0x72)) &&
                 (bVar14 = *(byte *)((longlong)ppppbVar12 + 2) < 0x2f,
                 *(byte *)((longlong)ppppbVar12 + 2) == 0x2f)) {
                uVar4 = 0;
              }
              else {
                uVar4 = -(uint)bVar14 | 1;
              }
              if (uVar4 == 0) goto LAB_1802e06a4;
            }
            ppppbVar12 = (byte ****)&local_68;
            if (0xf < local_50) {
              ppppbVar12 = local_68;
            }
            if (local_58 == 4) {
              lVar9 = 0;
              do {
                lVar10 = lVar9 + 1;
                if (*(byte *)((longlong)ppppbVar12 + lVar9) != (&DAT_18075fb28)[lVar9]) {
                  uVar4 = -(uint)(*(byte *)((longlong)ppppbVar12 + lVar9) <
                                 (byte)(&DAT_18075fb28)[lVar9]) | 1;
                  goto LAB_1802e06a0;
                }
                lVar9 = lVar10;
              } while (lVar10 != 4);
              uVar4 = 0;
LAB_1802e06a0:
              if (uVar4 == 0) goto LAB_1802e06a4;
            }
          }
        }
LAB_1802e06ae:
        uVar8 = lVar6 + 1;
        FUN_18000f890(&local_68);
        param_2 = local_78;
      }
      else {
        puVar7 = param_1;
        if (0xf < uVar8) {
          puVar7 = (undefined8 *)*param_1;
        }
        if ((*(char *)((longlong)puVar7 + uVar13) == '\\') && (uVar13 + 1 < uVar11)) {
          puVar7 = param_1;
          if (0xf < uVar8) {
            puVar7 = (undefined8 *)*param_1;
          }
          if (*(char *)((longlong)puVar7 + uVar13 + 1) != 'n') goto LAB_1802e0701;
          FUN_1800690a0(puVar5,CONCAT71((int7)(uVar11 >> 8),10));
          uVar8 = uVar13 + 2;
        }
        else {
LAB_1802e0701:
          if (uVar8 < 0x10) {
            puVar7 = param_1;
          }
          else {
            puVar7 = (undefined8 *)*param_1;
          }
          uVar8 = uVar13 + 1;
          FUN_1800690a0(puVar5,*(undefined1 *)((longlong)puVar7 + uVar13));
        }
      }
      uVar11 = param_1[2];
      uVar13 = uVar8;
    } while (uVar8 < uVar11);
  }
  FUN_1802e0300(local_78);
  FUN_1802e0300(param_3);
  return;
}



/* ===== 1802e0770 FUN_1802e0770 ===== */

void FUN_1802e0770(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  float local_res8;
  float local_resc;
  float local_res10;
  float local_res14;
  
  lVar3 = DAT_180ca0a50;
  lVar1 = *(longlong *)(DAT_180ca0a50 + 0x14f8);
  local_res10 = *(float *)(lVar1 + 0x118);
  *(undefined1 *)(lVar1 + 0xce) = 1;
  lVar2 = *(longlong *)(lVar3 + 0x14f8);
  if ((*(longlong *)(lVar2 + 0x1c8) != 0) || (lVar4 = 0x280, *(longlong *)(lVar3 + 0x2360) != 0)) {
    lVar4 = 0x250;
  }
  fVar5 = *(float *)(lVar2 + lVar4) - *(float *)(lVar2 + 0x118);
  local_res8 = DAT_1808acbb4;
  if (DAT_1808acbb4 <= fVar5) {
    local_res8 = fVar5;
  }
  local_resc = *(float *)(lVar1 + 0x11c) + DAT_1808ac710;
  local_res14 = *(float *)(lVar1 + 0x11c) + DAT_1808ac658;
  local_res8 = local_res8 + local_res10;
  FUN_1803fe590(*(undefined8 *)(lVar2 + 0x2c8),&local_res10,&local_res8,DAT_180960f48,0,0);
  local_res8 = 1.0;
  local_resc = 7.0;
  FUN_1804174f0(&local_res8);
  return;
}



/* ===== 1802e0860 FUN_1802e0860 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802e0860(char *param_1,char *param_2,undefined8 *param_3)

{
  code *pcVar1;
  int iVar2;
  size_t sVar3;
  HMODULE hModule;
  size_t sVar4;
  FARPROC pFVar5;
  char *_Str1;
  ulonglong uVar6;
  undefined8 ****ppppuVar7;
  longlong ****pppplVar8;
  ulonglong uVar9;
  longlong ****pppplVar10;
  longlong ****_Str2;
  undefined1 *puVar11;
  undefined1 *puVar12;
  ulonglong uVar13;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [24];
  char *local_98;
  undefined8 ****local_88;
  longlong ***ppplStack_80;
  size_t local_78;
  ulonglong local_70;
  longlong ****local_68;
  undefined8 uStack_60;
  ulonglong local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_b8;
  local_68 = (longlong ****)0x0;
  uStack_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_98 = param_2;
  sVar3 = strlen(param_1);
  FUN_1800133a0(&local_68,param_1,sVar3);
  if (DAT_180cfc838 == (longlong *)0x0) {
    hModule = GetModuleHandleA("localize.dll");
    if ((hModule == (HMODULE)0x0) ||
       (pFVar5 = GetProcAddress(hModule,"CreateInterface"), pFVar5 == (FARPROC)0x0)) {
      DAT_180cfc838 = (longlong *)0x0;
    }
    else {
      DAT_180cfc838 = (longlong *)(*pFVar5)("Localize_001",0);
      if (DAT_180cfc838 != (longlong *)0x0) goto LAB_1802e0ad3;
    }
LAB_1802e08e9:
    FUN_180024b50(&local_88,&local_68);
LAB_1802e08f6:
    pppplVar10 = local_68;
    uVar13 = local_50;
  }
  else {
LAB_1802e0ad3:
    if (local_58 == 0) goto LAB_1802e08e9;
    pppplVar10 = (longlong ****)&local_68;
    if (0xf < local_50) {
      pppplVar10 = local_68;
    }
    _Str1 = (char *)(**(code **)(*DAT_180cfc838 + 0x88))(DAT_180cfc838,pppplVar10);
    uVar13 = local_50;
    uVar9 = local_58;
    pppplVar10 = local_68;
    puVar12 = auStack_b8;
    if ((_Str1 != (char *)0x0) && (*_Str1 != '\0')) {
      pppplVar8 = (longlong ****)&local_68;
      if (0xf < local_50) {
        pppplVar8 = local_68;
      }
      if (*(char *)pppplVar8 == '#') {
        pppplVar8 = (longlong ****)&local_68;
        if (0xf < local_50) {
          pppplVar8 = local_68;
        }
        pppplVar8 = (longlong ****)((longlong)pppplVar8 + 1);
      }
      else {
        pppplVar8 = (longlong ****)&local_68;
        if (0xf < local_50) {
          pppplVar8 = local_68;
        }
      }
      _Str2 = (longlong ****)&local_68;
      if (0xf < local_50) {
        _Str2 = local_68;
      }
      iVar2 = strcmp(_Str1,(char *)_Str2);
      if ((iVar2 == 0) || (iVar2 = strcmp(_Str1,(char *)pppplVar8), iVar2 == 0)) {
        uVar9 = local_58;
        puVar12 = auStack_b8;
        local_88 = (undefined8 ****)0x0;
        ppplStack_80 = (longlong ***)0x0;
        local_78 = 0;
        local_70 = 0;
        pppplVar8 = (longlong ****)&local_68;
        if (0xf < uVar13) {
          pppplVar8 = pppplVar10;
        }
        if (0x7fffffffffffffff < local_58) goto LAB_1802e0cea;
        if (local_58 < 0x10) {
          local_78 = local_58;
          local_70 = 0xf;
          local_88 = (undefined8 ****)*pppplVar8;
          ppplStack_80 = pppplVar8[1];
          param_2 = local_98;
          goto LAB_1802e08fe;
        }
        uVar6 = local_58 | 0xf;
        uVar13 = 0x7fffffffffffffff;
        if ((uVar6 < 0x8000000000000000) && (uVar13 = uVar6, uVar6 < 0x16)) {
          uVar13 = 0x16;
        }
        local_88 = (undefined8 ****)FUN_18000fb70(uVar13 + 1);
        local_78 = uVar9;
        local_70 = uVar13;
        FUN_180540530(local_88,pppplVar8,uVar9 + 1);
        param_2 = local_98;
      }
      else {
        local_88 = (undefined8 ****)0x0;
        ppplStack_80 = (longlong ***)0x0;
        local_78 = 0;
        local_70 = 0;
        sVar3 = strlen(_Str1);
        FUN_1800133a0(&local_88,_Str1,sVar3);
        param_2 = local_98;
      }
      goto LAB_1802e08f6;
    }
    local_88 = (undefined8 ****)0x0;
    ppplStack_80 = (longlong ***)0x0;
    local_78 = 0;
    local_70 = 0;
    pppplVar8 = (longlong ****)&local_68;
    if (0xf < local_50) {
      pppplVar8 = local_68;
    }
    if (0x7fffffffffffffff < local_58) goto LAB_1802e0cea;
    if (0xf < local_58) {
      uVar6 = local_58 | 0xf;
      uVar13 = 0x7fffffffffffffff;
      if ((uVar6 < 0x8000000000000000) && (uVar13 = uVar6, uVar6 < 0x16)) {
        uVar13 = 0x16;
      }
      local_88 = (undefined8 ****)FUN_18000fb70(uVar13 + 1);
      local_78 = uVar9;
      local_70 = uVar13;
      FUN_180540530(local_88,pppplVar8,uVar9 + 1);
      param_2 = local_98;
      goto LAB_1802e08f6;
    }
    local_78 = local_58;
    local_70 = 0xf;
    local_88 = (undefined8 ****)*pppplVar8;
    ppplStack_80 = pppplVar8[1];
    param_2 = local_98;
  }
LAB_1802e08fe:
  puVar11 = auStack_b8;
  if (uVar13 < 0x10) {
LAB_1802e0935:
    sVar3 = local_78;
    local_58 = 0;
    local_50 = 0xf;
    local_68 = (longlong ****)((ulonglong)local_68 & 0xffffffffffffff00);
    if (local_78 == 0) {
LAB_1802e097d:
      sVar3 = strlen(param_2);
      FUN_180029840(&local_88,param_2,sVar3);
    }
    else {
      sVar4 = strlen(param_1);
      ppppuVar7 = &local_88;
      if (0xf < local_70) {
        ppppuVar7 = local_88;
      }
      if ((sVar3 == sVar4) &&
         ((sVar3 == 0 || (iVar2 = memcmp(ppppuVar7,param_1,sVar3), iVar2 == 0))))
      goto LAB_1802e097d;
    }
    FUN_1800134a0(&local_88,&DAT_18073ec98,1);
    ppppuVar7 = &local_88;
    if (0xf < local_70) {
      ppppuVar7 = local_88;
    }
    FUN_180414370(ppppuVar7,0,1);
    FUN_1803ec6c0(0,DAT_1808acda0);
    FUN_1803d8730(0,(int)(longlong)((float)(DAT_180960ec8 >> 0x18) * DAT_1808ac2b4 + DAT_1808ac1f4)
                    << 0x18 | DAT_180960ec8 & 0xffffff);
    if (0xf < (ulonglong)param_3[3]) {
      param_3 = (undefined8 *)*param_3;
    }
    FUN_180414370(param_3,0,1);
    FUN_1803d87f0(1);
    if (local_70 < 0x10) {
      return;
    }
    uVar9 = local_70 + 1;
    ppppuVar7 = local_88;
    if (uVar9 < 0x1000) {
LAB_1802e0a70:
      thunk_FUN_1803d64e0(ppppuVar7,uVar9);
      return;
    }
    ppppuVar7 = (undefined8 ****)local_88[-1];
    if ((ulonglong)((longlong)local_88 + (-8 - (longlong)ppppuVar7)) < 0x20) {
      uVar9 = local_70 + 0x28;
      goto LAB_1802e0a70;
    }
  }
  else {
    uVar9 = uVar13 + 1;
    pppplVar8 = pppplVar10;
    if (uVar9 < 0x1000) {
LAB_1802e092d:
      thunk_FUN_1803d64e0(pppplVar8,uVar9);
      goto LAB_1802e0935;
    }
    pppplVar8 = (longlong ****)pppplVar10[-1];
    if ((ulonglong)((longlong)pppplVar10 + (-8 - (longlong)pppplVar8)) < 0x20) {
      uVar9 = uVar13 + 0x28;
      goto LAB_1802e092d;
    }
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar11 = auStack_b0;
  }
  pcVar1 = (code *)swi(0x29);
  (*pcVar1)(5);
  puVar12 = puVar11 + 8;
LAB_1802e0cea:
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar12 + -8) = &UNK_1802e0cef;
  FUN_180011990();
}



/* ===== 1802e0cf0 FUN_1802e0cf0 ===== */

void FUN_1802e0cf0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  if ((param_1[2] != 0) || (param_2[2] != 0)) {
    lVar3 = *(longlong *)(DAT_180ca0a50 + 0x14f8);
    FUN_1803e7a50((*(float *)(lVar3 + 0x118) - *(float *)(lVar3 + 0x28)) + *(float *)(lVar3 + 0x98)
                  + DAT_1808acbb4);
    FUN_1803d8730(0,(int)(longlong)((float)(DAT_180960ec8 >> 0x18) * DAT_1808ac2b4 + DAT_1808ac1f4)
                    << 0x18 | DAT_180960ec8 & 0xffffff);
    if (param_1[2] != 0) {
      if (0xf < (ulonglong)param_1[3]) {
        param_1 = (undefined8 *)*param_1;
      }
      FUN_180414db0(&DAT_1806d3198,param_1);
    }
    if (param_2[2] != 0) {
      if (0xf < (ulonglong)param_2[3]) {
        param_2 = (undefined8 *)*param_2;
      }
      FUN_180414db0(&DAT_1806d3198,param_2);
    }
    FUN_1803d87f0(1);
    lVar3 = *(longlong *)(DAT_180ca0a50 + 0x14f8);
    iVar1 = *(int *)(lVar3 + 0x208);
    if (iVar1 < 1) {
      FUN_1803ebc00("Calling PopTextWrapPos() too many times!");
      return;
    }
    uVar2 = *(undefined4 *)(*(longlong *)(lVar3 + 0x210) + -4 + (longlong)iVar1 * 4);
    *(int *)(lVar3 + 0x208) = iVar1 + -1;
    *(undefined4 *)(lVar3 + 0x1f0) = uVar2;
  }
  return;
}



/* ===== 1802e0e20 FUN_1802e0e20 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802e0e20(longlong *param_1)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined4 uVar11;
  longlong lVar12;
  int *piVar13;
  undefined4 *puVar14;
  undefined8 uVar15;
  size_t sVar16;
  ulonglong *puVar17;
  undefined8 *puVar18;
  uint *puVar19;
  longlong lVar20;
  undefined8 ****ppppuVar21;
  int *piVar22;
  char *pcVar23;
  char *pcVar24;
  uint *puVar25;
  undefined1 *puVar26;
  undefined1 *puVar27;
  uint7 uVar28;
  char *_Str;
  char *pcVar29;
  ulonglong uVar30;
  longlong *plVar31;
  longlong lVar32;
  undefined4 uVar33;
  float unaff_XMM7_Da;
  undefined1 auStack_248 [8];
  undefined1 auStack_240 [40];
  undefined8 local_218;
  undefined8 *puStack_210;
  undefined8 *local_208;
  char *local_200;
  char *pcStack_1f8;
  char *local_1f0;
  int local_1e8;
  float local_1e4;
  int local_1e0 [2];
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  ulonglong local_1c8;
  char *pcStack_1c0;
  undefined8 ****local_1b8;
  undefined8 uStack_1b0;
  longlong local_1a8;
  ulonglong local_1a0;
  undefined8 ****local_198;
  undefined8 uStack_190;
  longlong local_188;
  ulonglong local_180;
  char *local_178 [4];
  char *local_158;
  char *local_150;
  char *local_148;
  char *local_140;
  char *local_138;
  char *local_130;
  char *local_128;
  char *local_120;
  char *local_118;
  char *local_110;
  char *local_108;
  char *local_100;
  char local_f8 [160];
  ulonglong local_58;
  
  local_58 = DAT_180919500 ^ (ulonglong)auStack_248;
  lVar20 = *param_1;
  if (*(longlong *)(lVar20 + 0x68) == 0) {
    plVar31 = (longlong *)0x0;
  }
  else {
    plVar31 = (longlong *)(lVar20 + 0x58);
    if (0xf < *(ulonglong *)(lVar20 + 0x70)) {
      plVar31 = (longlong *)*plVar31;
    }
  }
  FUN_1802d6630(lVar20 + 0x78,lVar20 + 0x38,*(undefined4 *)(lVar20 + 0x30),plVar31);
  puVar19 = (uint *)*param_1;
  if ((*puVar19 < 4) && (uVar2 = puVar19[1], 0 < (int)uVar2)) {
    puVar25 = &DAT_18092174c;
    do {
      if ((*puVar25 == uVar2) && (puVar25[1] == DAT_1809f5900)) goto LAB_1802e0ee9;
      puVar25 = puVar25 + 0x68;
    } while (puVar25 != &DAT_180931b4c);
    puVar25 = &DAT_18092174c;
    do {
      if ((*puVar25 == uVar2) && ((int)puVar25[1] < 0)) goto LAB_1802e0ee9;
      puVar25 = puVar25 + 0x68;
    } while (puVar25 != &DAT_180931b4c);
  }
  puVar25 = (uint *)0x0;
LAB_1802e0ee9:
  uStack_190 = 0;
  local_188 = 0;
  pcVar29 = (char *)0xf;
  local_180 = 0xf;
  local_198 = (undefined8 ****)0x0;
  uStack_1b0 = 0;
  lVar32 = 0;
  local_1a8 = 0;
  local_1a0 = 0xf;
  local_1b8 = (undefined8 ****)0x0;
  lVar20 = 0;
  if ((puVar19[2] != 0) && (lVar12 = FUN_180280d30(), lVar12 != 0)) {
    FUN_1802e0420(lVar12 + 0x78,&local_198,&local_1b8);
    lVar20 = local_188;
    lVar32 = local_1a8;
  }
  puVar27 = auStack_248;
  if (puVar25 != (uint *)0x0) {
    if ((((puVar25[2] != 0) || ((char)puVar25[5] != '\0')) || ((char)puVar25[7] != '\0')) ||
       (puVar25[0x62] != 0)) {
LAB_1802e10ac:
      FUN_1802e0770();
      local_138 = "Rarity_Default_Weapon";
      local_130 = "Rarity_Common_Weapon";
      local_128 = "Rarity_Uncommon_Weapon";
      local_120 = "Rarity_Rare_Weapon";
      local_118 = "Rarity_Mythical_Weapon";
      local_110 = "Rarity_Legendary_Weapon";
      local_108 = "Rarity_Ancient_Weapon";
      local_100 = "Rarity_Contraband";
      local_178[0] = "Stock";
      local_178[1] = "Consumer Grade";
      local_178[2] = "Industrial Grade";
      local_178[3] = "Mil-Spec Grade";
      local_158 = "Restricted";
      local_150 = "Classified";
      local_148 = "Covert";
      local_140 = "Contraband";
      local_1e8 = 7;
      local_1e0[0] = 0;
      piVar13 = (int *)(*param_1 + 0x30);
      iVar3 = *piVar13;
      piVar22 = local_1e0;
      if (-1 < iVar3) {
        piVar22 = piVar13;
      }
      piVar13 = &local_1e8;
      if (iVar3 < 8) {
        piVar13 = piVar22;
      }
      iVar4 = *piVar13;
      uVar28 = (uint7)((ulonglong)lVar20 >> 8);
      if ((puVar25[2] == 0) || (*(int *)(*param_1 + 4) == 0)) {
        _Str = (char *)((ulonglong)uVar28 << 8);
      }
      else {
        _Str = (char *)CONCAT71(uVar28,1);
      }
      local_200 = (char *)0x0;
      pcStack_1f8 = (char *)0x0;
      local_1f0 = (char *)0x0;
      local_218 = 0;
      puStack_210 = (undefined8 *)0x0;
      local_208 = (undefined8 *)0x0;
      puVar14 = (undefined4 *)FUN_1802e1a30(iVar3,&local_1d8,"inv_header_rarity","Rarity:");
      if (pcStack_1f8 == local_1f0) {
        FUN_18009bb20(&local_200,pcStack_1f8,puVar14);
      }
      else {
        pcStack_1f8[0] = '\0';
        pcStack_1f8[1] = '\0';
        pcStack_1f8[2] = '\0';
        pcStack_1f8[3] = '\0';
        pcStack_1f8[4] = '\0';
        pcStack_1f8[5] = '\0';
        pcStack_1f8[6] = '\0';
        pcStack_1f8[7] = '\0';
        pcStack_1f8[8] = '\0';
        pcStack_1f8[9] = '\0';
        pcStack_1f8[10] = '\0';
        pcStack_1f8[0xb] = '\0';
        pcStack_1f8[0xc] = '\0';
        pcStack_1f8[0xd] = '\0';
        pcStack_1f8[0xe] = '\0';
        pcStack_1f8[0xf] = '\0';
        pcStack_1f8[0x10] = '\0';
        pcStack_1f8[0x11] = '\0';
        pcStack_1f8[0x12] = '\0';
        pcStack_1f8[0x13] = '\0';
        pcStack_1f8[0x14] = '\0';
        pcStack_1f8[0x15] = '\0';
        pcStack_1f8[0x16] = '\0';
        pcStack_1f8[0x17] = '\0';
        pcStack_1f8[0x18] = '\0';
        pcStack_1f8[0x19] = '\0';
        pcStack_1f8[0x1a] = '\0';
        pcStack_1f8[0x1b] = '\0';
        pcStack_1f8[0x1c] = '\0';
        pcStack_1f8[0x1d] = '\0';
        pcStack_1f8[0x1e] = '\0';
        pcStack_1f8[0x1f] = '\0';
        uVar33 = puVar14[1];
        uVar11 = puVar14[2];
        uVar6 = puVar14[3];
        *(undefined4 *)pcStack_1f8 = *puVar14;
        *(undefined4 *)(pcStack_1f8 + 4) = uVar33;
        *(undefined4 *)(pcStack_1f8 + 8) = uVar11;
        *(undefined4 *)(pcStack_1f8 + 0xc) = uVar6;
        uVar15 = *(undefined8 *)(puVar14 + 6);
        *(undefined8 *)(pcStack_1f8 + 0x10) = *(undefined8 *)(puVar14 + 4);
        *(undefined8 *)(pcStack_1f8 + 0x18) = uVar15;
        *(undefined8 *)(puVar14 + 4) = 0;
        *(undefined8 *)(puVar14 + 6) = 0xf;
        *(undefined1 *)puVar14 = 0;
        pcStack_1f8 = pcStack_1f8 + 0x20;
      }
      uVar33 = FUN_18000f890(&local_1d8);
      puVar14 = (undefined4 *)
                FUN_1802e1a30(uVar33,local_178 + 8,local_178[(longlong)iVar4 + 8],local_178[iVar4]);
      if (puStack_210 == local_208) {
        FUN_18009bb20(&local_218,puStack_210,puVar14);
      }
      else {
        *puStack_210 = 0;
        puStack_210[1] = 0;
        puStack_210[2] = 0;
        puStack_210[3] = 0;
        uVar33 = puVar14[1];
        uVar11 = puVar14[2];
        uVar6 = puVar14[3];
        *(undefined4 *)puStack_210 = *puVar14;
        *(undefined4 *)((longlong)puStack_210 + 4) = uVar33;
        *(undefined4 *)(puStack_210 + 1) = uVar11;
        *(undefined4 *)((longlong)puStack_210 + 0xc) = uVar6;
        uVar15 = *(undefined8 *)(puVar14 + 6);
        puStack_210[2] = *(undefined8 *)(puVar14 + 4);
        puStack_210[3] = uVar15;
        *(undefined8 *)(puVar14 + 4) = 0;
        *(undefined8 *)(puVar14 + 6) = 0xf;
        *(undefined1 *)puVar14 = 0;
        puStack_210 = puStack_210 + 4;
      }
      uVar33 = FUN_18000f890(local_178 + 8);
      if ((char)_Str != '\0') {
        uVar15 = FUN_1802e1a30(uVar33,&local_1d8,"SFUI_InvTooltip_Wear","Exterior:");
        FUN_18009b2a0(&local_200,uVar15);
        FUN_18000f890(&local_1d8);
        fVar1 = (float)puVar25[3];
        if (DAT_1808ac094 <= fVar1) {
          if (DAT_1808ac0e8 <= fVar1) {
            if (DAT_1808ac19c <= fVar1) {
              _Str = "Well-Worn";
              if (DAT_1808ac1d4 <= fVar1) {
                _Str = "Battle-Scarred";
              }
            }
            else {
              _Str = "Field-Tested";
            }
          }
          else {
            _Str = "Minimal Wear";
          }
        }
        else {
          _Str = "Factory New";
        }
        local_1d8 = 0;
        uStack_1d0 = 0;
        local_1c8 = 0;
        pcStack_1c0 = (char *)0x0;
        sVar16 = strlen(_Str);
        FUN_1800133a0(&local_1d8,_Str,sVar16);
        if (puStack_210 == local_208) {
          FUN_18009bb20(&local_218,puStack_210,&local_1d8);
        }
        else {
          *(undefined4 *)puStack_210 = (undefined4)local_1d8;
          *(undefined4 *)((longlong)puStack_210 + 4) = local_1d8._4_4_;
          *(undefined4 *)(puStack_210 + 1) = (undefined4)uStack_1d0;
          *(undefined4 *)((longlong)puStack_210 + 0xc) = uStack_1d0._4_4_;
          puStack_210[2] = local_1c8;
          puStack_210[3] = pcStack_1c0;
          local_1c8 = 0;
          pcStack_1c0 = (char *)0xf;
          local_1d8 = local_1d8 & 0xffffffffffffff00;
          puStack_210 = puStack_210 + 4;
        }
        uVar33 = FUN_18000f890(&local_1d8);
        uVar15 = FUN_1802e1a30(uVar33,local_178,"SFUI_ItemInfo_WearAmount","Wear Rating");
        puVar17 = (ulonglong *)FUN_1800134a0(uVar15,&DAT_18073ec98,1);
        uVar30 = *puVar17;
        uVar33 = *(undefined4 *)((longlong)puVar17 + 4);
        local_1d8 = *puVar17;
        uVar8 = puVar17[1];
        uVar11 = *(undefined4 *)((longlong)puVar17 + 0xc);
        uStack_1d0 = puVar17[1];
        uVar9 = puVar17[2];
        uVar6 = *(undefined4 *)((longlong)puVar17 + 0x14);
        local_1c8 = puVar17[2];
        uVar10 = puVar17[3];
        uVar7 = *(undefined4 *)((longlong)puVar17 + 0x1c);
        pcStack_1c0 = (char *)puVar17[3];
        puVar17[2] = 0;
        puVar17[3] = 0xf;
        *(undefined1 *)puVar17 = 0;
        if (pcStack_1f8 == local_1f0) {
          FUN_18009bb20(&local_200,pcStack_1f8,&local_1d8);
        }
        else {
          *(int *)pcStack_1f8 = (int)uVar30;
          *(undefined4 *)(pcStack_1f8 + 4) = uVar33;
          *(int *)(pcStack_1f8 + 8) = (int)uVar8;
          *(undefined4 *)(pcStack_1f8 + 0xc) = uVar11;
          *(int *)(pcStack_1f8 + 0x10) = (int)uVar9;
          *(undefined4 *)(pcStack_1f8 + 0x14) = uVar6;
          *(int *)(pcStack_1f8 + 0x18) = (int)uVar10;
          *(undefined4 *)(pcStack_1f8 + 0x1c) = uVar7;
          local_1c8 = 0;
          pcStack_1c0 = (char *)0xf;
          local_1d8 = local_1d8 & 0xffffffffffffff00;
          pcStack_1f8 = pcStack_1f8 + 0x20;
        }
        FUN_18000f890(&local_1d8);
        FUN_18000f890(local_178);
        if ((float)puVar25[3] == 0.0) {
          snprintf(local_f8,0xa0,&DAT_1806d3254);
        }
        else {
          snprintf(local_f8,0xa0,&DAT_18075fc08,(double)(float)puVar25[3]);
        }
        local_1d8 = 0;
        uStack_1d0 = 0;
        local_1c8 = 0;
        pcStack_1c0 = (char *)0x0;
        sVar16 = strlen(local_f8);
        FUN_1800133a0(&local_1d8,local_f8,sVar16);
        if (puStack_210 == local_208) {
          FUN_18009bb20(&local_218,puStack_210,&local_1d8);
        }
        else {
          *(undefined4 *)puStack_210 = (undefined4)local_1d8;
          *(undefined4 *)((longlong)puStack_210 + 4) = local_1d8._4_4_;
          *(undefined4 *)(puStack_210 + 1) = (undefined4)uStack_1d0;
          *(undefined4 *)((longlong)puStack_210 + 0xc) = uStack_1d0._4_4_;
          puStack_210[2] = local_1c8;
          puStack_210[3] = pcStack_1c0;
          local_1c8 = 0;
          pcStack_1c0 = (char *)0xf;
          local_1d8 = local_1d8 & 0xffffffffffffff00;
          puStack_210 = puStack_210 + 4;
        }
        uVar33 = FUN_18000f890(&local_1d8);
        uVar15 = FUN_1802e1a30(uVar33,local_178,"SFUI_ItemInfo_PatternTemplate","Pattern Template");
        puVar17 = (ulonglong *)FUN_1800134a0(uVar15,&DAT_18073ec98,1);
        uVar30 = *puVar17;
        uVar33 = *(undefined4 *)((longlong)puVar17 + 4);
        local_1d8 = *puVar17;
        uVar8 = puVar17[1];
        uVar11 = *(undefined4 *)((longlong)puVar17 + 0xc);
        uStack_1d0 = puVar17[1];
        uVar9 = puVar17[2];
        uVar6 = *(undefined4 *)((longlong)puVar17 + 0x14);
        local_1c8 = puVar17[2];
        uVar10 = puVar17[3];
        uVar7 = *(undefined4 *)((longlong)puVar17 + 0x1c);
        pcStack_1c0 = (char *)puVar17[3];
        puVar17[2] = 0;
        puVar17[3] = 0xf;
        *(undefined1 *)puVar17 = 0;
        if (pcStack_1f8 == local_1f0) {
          FUN_18009bb20(&local_200,pcStack_1f8,&local_1d8);
        }
        else {
          *(int *)pcStack_1f8 = (int)uVar30;
          *(undefined4 *)(pcStack_1f8 + 4) = uVar33;
          *(int *)(pcStack_1f8 + 8) = (int)uVar8;
          *(undefined4 *)(pcStack_1f8 + 0xc) = uVar11;
          *(int *)(pcStack_1f8 + 0x10) = (int)uVar9;
          *(undefined4 *)(pcStack_1f8 + 0x14) = uVar6;
          *(int *)(pcStack_1f8 + 0x18) = (int)uVar10;
          *(undefined4 *)(pcStack_1f8 + 0x1c) = uVar7;
          local_1c8 = 0;
          pcStack_1c0 = (char *)0xf;
          local_1d8 = local_1d8 & 0xffffffffffffff00;
          pcStack_1f8 = pcStack_1f8 + 0x20;
        }
        FUN_18000f890(&local_1d8);
        FUN_18000f890(local_178);
        snprintf(local_f8,0xa0,&DAT_1806dfdd8,puVar25[4]);
        local_1d8 = 0;
        uStack_1d0 = 0;
        local_1c8 = 0;
        pcStack_1c0 = (char *)0x0;
        sVar16 = strlen(local_f8);
        FUN_1800133a0(&local_1d8,local_f8,sVar16);
        if (puStack_210 == local_208) {
          uVar33 = FUN_18009bb20(&local_218,puStack_210,&local_1d8);
          pcVar24 = pcStack_1c0;
        }
        else {
          uVar33 = (undefined4)local_1d8;
          *(undefined4 *)puStack_210 = (undefined4)local_1d8;
          *(undefined4 *)((longlong)puStack_210 + 4) = local_1d8._4_4_;
          *(undefined4 *)(puStack_210 + 1) = (undefined4)uStack_1d0;
          *(undefined4 *)((longlong)puStack_210 + 0xc) = uStack_1d0._4_4_;
          puStack_210[2] = local_1c8;
          puStack_210[3] = pcStack_1c0;
          local_1d8 = local_1d8 & 0xffffffffffffff00;
          puStack_210 = puStack_210 + 4;
          pcVar24 = (char *)0xf;
        }
        if ((char *)0xf < pcVar24) {
          pcVar23 = pcVar24 + 1;
          uVar30 = local_1d8;
          if ((char *)0xfff < pcVar23) {
            uVar30 = *(ulonglong *)(local_1d8 - 8);
            if (0x1f < (local_1d8 - uVar30) - 8) goto LAB_1802e17ac;
            pcVar23 = pcVar24 + 0x28;
          }
          uVar33 = thunk_FUN_1803d64e0(uVar30,pcVar23);
        }
      }
      if ((char)puVar25[7] != '\0') {
        uVar15 = FUN_1802e1a30(uVar33,local_178,"CSGO_Tool_Name_Tag","Name Tag");
        puVar18 = (undefined8 *)FUN_1800134a0(uVar15,&DAT_18073ec98,1);
        local_1d8 = *puVar18;
        uStack_1d0 = puVar18[1];
        local_1c8 = puVar18[2];
        pcStack_1c0 = (char *)puVar18[3];
        puVar18[2] = 0;
        puVar18[3] = 0xf;
        *(undefined1 *)puVar18 = 0;
        FUN_18009b2a0(&local_200,&local_1d8);
        FUN_18000f890(&local_1d8);
        FUN_18000f890(local_178);
        local_1d8 = 0;
        uStack_1d0 = 0;
        local_1c8 = 0;
        pcStack_1c0 = (char *)0x0;
        sVar16 = strlen((char *)(puVar25 + 7));
        FUN_1800133a0(&local_1d8,puVar25 + 7,sVar16);
        if (puStack_210 == local_208) {
          FUN_18009bb20(&local_218,puStack_210,&local_1d8);
          pcVar29 = pcStack_1c0;
        }
        else {
          *(undefined4 *)puStack_210 = (undefined4)local_1d8;
          *(undefined4 *)((longlong)puStack_210 + 4) = local_1d8._4_4_;
          *(undefined4 *)(puStack_210 + 1) = (undefined4)uStack_1d0;
          *(undefined4 *)((longlong)puStack_210 + 0xc) = uStack_1d0._4_4_;
          puStack_210[2] = local_1c8;
          puStack_210[3] = pcStack_1c0;
          local_1d8 = local_1d8 & 0xffffffffffffff00;
          puStack_210 = puStack_210 + 4;
        }
        if ((char *)0xf < pcVar29) {
          pcVar24 = pcVar29 + 1;
          uVar30 = local_1d8;
          if ((char *)0xfff < pcVar24) {
            uVar30 = *(ulonglong *)(local_1d8 - 8);
            if (0x1f < (local_1d8 - uVar30) - 8) {
LAB_1802e17ac:
              pcVar5 = (code *)swi(0x29);
              (*pcVar5)(5);
              puVar26 = auStack_240;
              goto LAB_1802e17b3;
            }
            pcVar24 = pcVar29 + 0x28;
          }
          thunk_FUN_1803d64e0(uVar30,pcVar24);
        }
      }
      local_1e8 = *(int *)(DAT_180ca0a50 + 0xcec);
      unaff_XMM7_Da = *(float *)(DAT_180ca0a50 + 0xcf0) * DAT_1808ac1f4;
      local_1e4 = unaff_XMM7_Da;
      FUN_1803d89a0(0xe,&local_1e8);
      FUN_1803ec9c0();
      puVar26 = auStack_248;
      puVar27 = auStack_248;
      _Str = pcStack_1f8;
      pcVar24 = local_200;
      if (local_200 != pcStack_1f8) {
        do {
          pcVar29 = pcVar24;
          if (*(ulonglong *)(pcVar24 + 0x18) < 0x10) {
LAB_1802e17b3:
            pcVar24 = pcVar29;
          }
          else {
            pcVar29 = *(char **)pcVar24;
          }
          *(undefined8 *)(puVar26 + -8) = 0x1802e17c3;
          FUN_180414370(pcVar29,0,1);
          pcVar24 = pcVar24 + 0x20;
          puVar27 = puVar26;
        } while (pcVar24 != _Str);
      }
      *(undefined8 *)(puVar27 + -8) = 0x1802e17d1;
      FUN_1803ecb10();
      *(undefined8 *)(puVar27 + -8) = 0x1802e17e1;
      FUN_1803ec6c0(0,DAT_1808acda0);
      *(undefined8 *)(puVar27 + -8) = 0x1802e17e6;
      FUN_1803ec9c0();
      uVar33 = DAT_1808ac34c;
      uVar30 = 0;
      lVar20 = *(longlong *)(puVar27 + 0x30);
      if (*(longlong *)(puVar27 + 0x38) - lVar20 >> 5 != 0) {
        do {
          if (uVar30 == 0) {
            uVar11 = *(undefined4 *)(*param_1 + 0x30);
            *(undefined8 *)(puVar27 + -8) = 0x1802e181a;
            uVar11 = FUN_1802d47f0(uVar11,uVar33);
            *(undefined8 *)(puVar27 + -8) = 0x1802e1823;
            FUN_1803d8730(0,uVar11);
            lVar20 = *(longlong *)(puVar27 + 0x30);
          }
          puVar18 = (undefined8 *)(lVar20 + uVar30 * 0x20);
          if (0xf < (ulonglong)puVar18[3]) {
            puVar18 = (undefined8 *)*puVar18;
          }
          *(undefined8 *)(puVar27 + -8) = 0x1802e1849;
          FUN_180414370(puVar18,0,1);
          if (uVar30 == 0) {
            *(undefined8 *)(puVar27 + -8) = 0x1802e1858;
            FUN_1803d87f0(1);
          }
          uVar30 = uVar30 + 1;
          lVar20 = *(longlong *)(puVar27 + 0x30);
        } while (uVar30 < (ulonglong)(*(longlong *)(puVar27 + 0x38) - lVar20 >> 5));
      }
      *(undefined8 *)(puVar27 + -8) = 0x1802e1876;
      FUN_1803ecb10();
      *(undefined8 *)(puVar27 + -8) = 0x1802e1880;
      FUN_1803d8a40(1);
      *(undefined8 *)(puVar27 + -8) = 0x1802e188d;
      FUN_1802e0cf0(&local_198,&local_1b8);
      lVar20 = DAT_180ca0a50;
      if (((char)puVar25[5] != '\0') && (0 < (int)puVar25[6])) {
        lVar32 = *(longlong *)(DAT_180ca0a50 + 0x14f8);
        *(undefined1 *)(lVar32 + 0xce) = 1;
        lVar12 = *(longlong *)(lVar20 + 0x14f8);
        *(float *)(lVar12 + 0x11c) =
             (*(float *)(lVar12 + 0x2c) - *(float *)(lVar12 + 0x9c)) +
             (*(float *)(lVar32 + 0x11c) - *(float *)(lVar32 + 0x2c)) + *(float *)(lVar32 + 0x9c) +
             unaff_XMM7_Da;
        *(undefined1 *)(lVar12 + 0x159) = 1;
        uVar2 = puVar25[6];
        *(undefined8 *)(puVar27 + -8) = 0x1802e1910;
        puVar18 = (undefined8 *)
                  FUN_1802e1a30(lVar20,local_178,"KillEaterEventType_Kills",&DAT_18075fc90);
        if (0xf < (ulonglong)puVar18[3]) {
          puVar18 = (undefined8 *)*puVar18;
        }
        *(uint *)(puVar27 + 0x20) = uVar2;
        *(undefined8 *)(puVar27 + -8) = 0x1802e1936;
        snprintf(local_f8,0xa0,"%s: %d",puVar18);
        *(undefined8 *)(puVar27 + -8) = 0x1802e193f;
        FUN_18000f890(local_178);
        lVar20 = DAT_180ca0a50;
        *(undefined4 *)(puVar27 + 0x70) = 0;
        uVar33 = *(undefined4 *)(DAT_180ca0a50 + 0xde4);
        uVar11 = *(undefined4 *)(DAT_180ca0a50 + 0xde8);
        uVar6 = *(undefined4 *)(DAT_180ca0a50 + 0xdec);
        *(undefined4 *)(puVar27 + 0x74) = *(undefined4 *)(DAT_180ca0a50 + 0xde0);
        *(undefined4 *)(puVar27 + 0x78) = uVar33;
        *(undefined4 *)(puVar27 + 0x7c) = uVar11;
        *(undefined4 *)(puVar27 + 0x80) = uVar6;
        *(undefined8 *)(puVar27 + -8) = 0x1802e1968;
        FUN_1803f64b0(DAT_180ca0a50 + 0x1fc0,puVar27 + 0x70);
        if (*(int *)(lVar20 + 0x1fbc) != 0) {
          *(undefined4 *)(lVar20 + 0xde0) = 0x3f68f5c3;
          *(undefined4 *)(lVar20 + 0xde4) = 0x3edc28f6;
          *(undefined4 *)(lVar20 + 0xde8) = 0x3e4ccccd;
          *(undefined4 *)(lVar20 + 0xdec) = 0x3f800000;
        }
        *(undefined8 *)(puVar27 + -8) = 0x1802e19aa;
        FUN_180414370(local_f8,0,1);
        *(undefined8 *)(puVar27 + -8) = 0x1802e19b4;
        FUN_1803d87f0(1);
      }
      *(undefined8 *)(puVar27 + -8) = 0x1802e19bf;
      FUN_1800288b0(puVar27 + 0x30);
      *(undefined8 *)(puVar27 + -8) = 0x1802e19ca;
      FUN_1800288b0(puVar27 + 0x48);
      goto LAB_1802e19e8;
    }
    puVar19 = puVar25 + 0x38;
    if (puVar25 != puVar25 + 0x2a) {
      do {
        if (*puVar19 != 0) goto LAB_1802e10ac;
        puVar19 = puVar19 + 7;
      } while (puVar19 != puVar25 + 0x62);
    }
  }
  if ((lVar20 != 0) || (lVar32 != 0)) {
    FUN_1802e0770();
    puVar27 = auStack_248;
    if ((local_188 != 0) || (local_1a8 != 0)) {
      lVar20 = *(longlong *)(DAT_180ca0a50 + 0x14f8);
      FUN_1803e7a50((*(float *)(lVar20 + 0x118) - *(float *)(lVar20 + 0x28)) +
                    *(float *)(lVar20 + 0x98) + DAT_1808acbb4);
      FUN_1803d8730(0,(int)(longlong)
                           ((float)(DAT_180960ec8 >> 0x18) * DAT_1808ac2b4 + DAT_1808ac1f4) << 0x18
                      | DAT_180960ec8 & 0xffffff);
      if (local_188 != 0) {
        ppppuVar21 = &local_198;
        if (0xf < local_180) {
          ppppuVar21 = local_198;
        }
        FUN_180414db0(&DAT_1806d3198,ppppuVar21);
      }
      if (local_1a8 != 0) {
        ppppuVar21 = &local_1b8;
        if (0xf < local_1a0) {
          ppppuVar21 = local_1b8;
        }
        FUN_180414db0(&DAT_1806d3198,ppppuVar21);
      }
      FUN_1803d87f0(1);
      puVar27 = auStack_248;
      lVar20 = *(longlong *)(DAT_180ca0a50 + 0x14f8);
      iVar3 = *(int *)(lVar20 + 0x208);
      if (iVar3 < 1) {
        FUN_1803ebc00("Calling PopTextWrapPos() too many times!");
        puVar27 = auStack_248;
      }
      else {
        *(undefined4 *)(lVar20 + 0x1f0) =
             *(undefined4 *)(*(longlong *)(lVar20 + 0x210) + -4 + (longlong)iVar3 * 4);
        *(int *)(lVar20 + 0x208) = iVar3 + -1;
      }
    }
  }
LAB_1802e19e8:
  *(undefined8 *)(puVar27 + -8) = 0x1802e19f1;
  FUN_18000f890(&local_1b8);
  *(undefined8 *)(puVar27 + -8) = 0x1802e19fb;
  FUN_18000f890(&local_198);
  *(undefined8 *)(puVar27 + -8) = 0x1802e1a0a;
  return;
}



/* ===== 1802e1a30 FUN_1802e1a30 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1802e1a30(undefined8 param_1,undefined8 *param_2,char *param_3,char *param_4)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  size_t sVar6;
  HMODULE hModule;
  char *pcVar7;
  FARPROC pFVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  char ****ppppcVar11;
  undefined8 *_Buf1;
  ulonglong uVar12;
  char ****ppppcVar13;
  char ****_Str2;
  undefined1 *puVar14;
  undefined1 *puVar15;
  char *pcVar16;
  ulonglong uVar17;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [24];
  char *local_78;
  undefined4 local_70;
  undefined8 *local_68;
  char ****local_60;
  undefined8 uStack_58;
  ulonglong local_50;
  ulonglong local_48;
  ulonglong local_40;
  
  local_40 = DAT_180919500 ^ (ulonglong)auStack_98;
  local_70 = 0;
  local_60 = (char ****)0x0;
  uStack_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_78 = param_4;
  local_68 = param_2;
  sVar6 = strlen(param_3);
  FUN_1800133a0(&local_60,param_3,sVar6);
  if (DAT_180cfc838 == (longlong *)0x0) {
    hModule = GetModuleHandleA("localize.dll");
    if (hModule != (HMODULE)0x0) {
      pFVar8 = GetProcAddress(hModule,"CreateInterface");
      if (pFVar8 != (FARPROC)0x0) {
        DAT_180cfc838 = (longlong *)(*pFVar8)("Localize_001",0);
        if (DAT_180cfc838 != (longlong *)0x0) goto LAB_1802e1b82;
        goto LAB_1802e1ac1;
      }
    }
    DAT_180cfc838 = (longlong *)0x0;
LAB_1802e1ac1:
    FUN_180024b50(param_2,&local_60);
LAB_1802e1acd:
    uVar17 = local_48;
    ppppcVar13 = local_60;
  }
  else {
LAB_1802e1b82:
    if (local_50 == 0) goto LAB_1802e1ac1;
    ppppcVar13 = (char ****)&local_60;
    if (0xf < local_48) {
      ppppcVar13 = local_60;
    }
    pcVar16 = (char *)(**(code **)(*DAT_180cfc838 + 0x88))(DAT_180cfc838,ppppcVar13);
    uVar17 = local_48;
    uVar12 = local_50;
    ppppcVar13 = local_60;
    if ((pcVar16 != (char *)0x0) && (*pcVar16 != '\0')) {
      ppppcVar11 = (char ****)&local_60;
      if (0xf < local_48) {
        ppppcVar11 = local_60;
      }
      if (*(char *)ppppcVar11 == '#') {
        ppppcVar11 = (char ****)&local_60;
        if (0xf < local_48) {
          ppppcVar11 = local_60;
        }
        ppppcVar11 = (char ****)((longlong)ppppcVar11 + 1);
      }
      else {
        ppppcVar11 = (char ****)&local_60;
        if (0xf < local_48) {
          ppppcVar11 = local_60;
        }
      }
      _Str2 = (char ****)&local_60;
      if (0xf < local_48) {
        _Str2 = local_60;
      }
      iVar5 = strcmp(pcVar16,(char *)_Str2);
      if (iVar5 == 0) {
LAB_1802e1c3f:
        uVar12 = local_50;
        *param_2 = 0;
        param_2[1] = 0;
        param_2[2] = 0;
        param_2[3] = 0;
        ppppcVar11 = (char ****)&local_60;
        if (0xf < uVar17) {
          ppppcVar11 = ppppcVar13;
        }
        if (0x7fffffffffffffff < local_50) {
LAB_1802e1de4:
                    /* WARNING: Subroutine does not return */
          FUN_180011990();
        }
        if (local_50 < 0x10) {
          param_2[2] = local_50;
          param_2[3] = 0xf;
          uVar2 = *(undefined4 *)((longlong)ppppcVar11 + 4);
          uVar3 = *(undefined4 *)(ppppcVar11 + 1);
          uVar4 = *(undefined4 *)((longlong)ppppcVar11 + 0xc);
          *(undefined4 *)param_2 = *(undefined4 *)ppppcVar11;
          *(undefined4 *)((longlong)param_2 + 4) = uVar2;
          *(undefined4 *)(param_2 + 1) = uVar3;
          *(undefined4 *)((longlong)param_2 + 0xc) = uVar4;
          param_4 = local_78;
          goto LAB_1802e1ad5;
        }
        uVar9 = local_50 | 0xf;
        uVar17 = 0x7fffffffffffffff;
        if ((uVar9 < 0x8000000000000000) && (uVar17 = uVar9, uVar9 < 0x16)) {
          uVar17 = 0x16;
        }
        uVar10 = FUN_18000fb70(uVar17 + 1);
        *param_2 = uVar10;
        param_2[2] = uVar12;
        param_2[3] = uVar17;
        FUN_180540530(uVar10,ppppcVar11,uVar12 + 1);
        param_4 = local_78;
      }
      else {
        iVar5 = strcmp(pcVar16,(char *)ppppcVar11);
        if (iVar5 == 0) goto LAB_1802e1c3f;
        *param_2 = 0;
        param_2[1] = 0;
        param_2[2] = 0;
        param_2[3] = 0;
        sVar6 = strlen(pcVar16);
        FUN_1800133a0(param_2,pcVar16,sVar6);
        param_4 = local_78;
      }
      goto LAB_1802e1acd;
    }
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    ppppcVar11 = (char ****)&local_60;
    if (0xf < local_48) {
      ppppcVar11 = local_60;
    }
    if (0x7fffffffffffffff < local_50) goto LAB_1802e1de4;
    if (0xf < local_50) {
      uVar9 = local_50 | 0xf;
      uVar17 = 0x7fffffffffffffff;
      if ((uVar9 < 0x8000000000000000) && (uVar17 = uVar9, uVar9 < 0x16)) {
        uVar17 = 0x16;
      }
      uVar10 = FUN_18000fb70(uVar17 + 1);
      *param_2 = uVar10;
      param_2[2] = uVar12;
      param_2[3] = uVar17;
      FUN_180540530(uVar10,ppppcVar11,uVar12 + 1);
      param_4 = local_78;
      goto LAB_1802e1acd;
    }
    param_2[2] = local_50;
    param_2[3] = 0xf;
    uVar2 = *(undefined4 *)((longlong)ppppcVar11 + 4);
    uVar3 = *(undefined4 *)(ppppcVar11 + 1);
    uVar4 = *(undefined4 *)((longlong)ppppcVar11 + 0xc);
    *(undefined4 *)param_2 = *(undefined4 *)ppppcVar11;
    *(undefined4 *)((longlong)param_2 + 4) = uVar2;
    *(undefined4 *)(param_2 + 1) = uVar3;
    *(undefined4 *)((longlong)param_2 + 0xc) = uVar4;
    param_4 = local_78;
  }
LAB_1802e1ad5:
  puVar15 = auStack_98;
  puVar14 = auStack_98;
  local_70 = 7;
  if (uVar17 < 0x10) {
LAB_1802e1b13:
    local_50 = 0;
    local_48 = 0xf;
    local_60 = (char ****)((ulonglong)local_60 & 0xffffffffffffff00);
    pcVar16 = (char *)param_2[2];
    if (pcVar16 != (char *)0x0) {
      pcVar7 = (char *)strlen(param_3);
      if ((ulonglong)param_2[3] < 0x10) goto LAB_1802e1d90;
      _Buf1 = (undefined8 *)*param_2;
      puVar15 = auStack_98;
      goto LAB_1802e1d93;
    }
  }
  else {
    uVar12 = uVar17 + 1;
    ppppcVar11 = ppppcVar13;
    if (uVar12 < 0x1000) {
LAB_1802e1b0b:
      thunk_FUN_1803d64e0(ppppcVar11,uVar12);
      goto LAB_1802e1b13;
    }
    ppppcVar11 = (char ****)ppppcVar13[-1];
    pcVar16 = (char *)((longlong)ppppcVar13 + (-8 - (longlong)ppppcVar11));
    if (pcVar16 < (char *)0x20) {
      uVar12 = uVar17 + 0x28;
      goto LAB_1802e1b0b;
    }
    pcVar1 = (code *)swi(0x29);
    pcVar7 = (char *)(*pcVar1)(5);
    puVar14 = auStack_90;
LAB_1802e1d90:
    _Buf1 = param_2;
    puVar15 = puVar14;
LAB_1802e1d93:
    if (pcVar16 != pcVar7) goto LAB_1802e1dbd;
    *(undefined8 *)(puVar15 + -8) = 0x1802e1da3;
    iVar5 = memcmp(_Buf1,param_3,(size_t)pcVar16);
    if (iVar5 != 0) goto LAB_1802e1dbd;
  }
  *(undefined8 *)(puVar15 + -8) = 0x1802e1daf;
  sVar6 = strlen(param_4);
  *(undefined8 *)(puVar15 + -8) = 0x1802e1dbd;
  FUN_180029840(param_2,param_4,sVar6);
LAB_1802e1dbd:
  *(undefined8 *)(puVar15 + -8) = 0x1802e1dcc;
  return param_2;
}



/* ===== 1802e1df0 FUN_1802e1df0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char FUN_1802e1df0(undefined8 param_1,int param_2,undefined8 param_3,undefined4 *param_4,
                  char param_5)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  int *piVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined1 uVar11;
  char cVar12;
  undefined8 uVar13;
  undefined1 auStack_168 [32];
  int **local_148;
  undefined4 local_140;
  longlong *local_138;
  undefined8 local_130;
  undefined1 local_128;
  undefined1 local_120;
  undefined1 local_118 [8];
  int *local_110;
  undefined8 local_108;
  undefined8 local_100;
  int local_f8;
  int local_f4;
  undefined1 local_e8 [32];
  undefined4 local_c8;
  undefined4 local_c4;
  undefined1 local_c0 [32];
  undefined1 local_a0 [32];
  undefined1 local_80 [32];
  longlong local_60;
  longlong local_58;
  char local_48;
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStack_168;
  FUN_1802dd890(&local_f8);
  if ((param_2 == 0) && (local_f4 == 0)) {
    cVar12 = '\0';
    goto LAB_1802e2222;
  }
  FUN_1803e89e0();
  local_138 = &local_60;
  if (local_60 == local_58) {
    local_138 = (longlong *)0x0;
  }
  local_120 = 0;
  local_128 = 0;
  local_130 = CONCAT44(param_4[1],*param_4);
  local_140 = local_c4;
  local_148 = (int **)local_e8;
  pcVar6 = (char *)FUN_1802d4d40(local_118,"##slot",0,local_c8);
  cVar12 = *pcVar6;
  cVar1 = pcVar6[2];
  uVar13 = *(undefined8 *)(DAT_180ca0a50 + 0x1ef4);
  local_108 = *(undefined8 *)(DAT_180ca0a50 + 0x1efc);
  uVar9 = 1;
  local_100 = uVar13;
  if (pcVar6[1] != '\0') {
    if (local_48 == '\0') {
      if (DAT_1809f52f0 != '\0') {
        if (DAT_1809f52f4 == 2) {
          iVar8 = 1;
        }
        else if (DAT_1809f52f4 == 4) {
          iVar8 = 2;
        }
        else if (DAT_1809f52f4 == 5) {
          iVar8 = 3;
        }
        else if (DAT_1809f52f4 == 6) {
          iVar8 = 4;
        }
        else {
          iVar8 = 0;
        }
        if (local_f8 == 2) {
          iVar4 = 1;
        }
        else if (local_f8 == 4) {
          iVar4 = 2;
        }
        else if (local_f8 == 5) {
          iVar4 = 3;
        }
        else if (local_f8 == 6) {
          iVar4 = 4;
        }
        else {
          iVar4 = 0;
        }
        if (iVar8 == iVar4) goto LAB_1802e1f48;
      }
    }
    else {
LAB_1802e1f48:
      uVar13 = FUN_1802b4d80("##slot_context");
    }
  }
  FUN_1802dff10(uVar13,&local_f8);
  if (cVar1 == '\0') {
LAB_1802e1f8f:
    uVar11 = 0;
  }
  else {
    uVar5 = FUN_1803e8900(*(undefined8 *)(DAT_180ca0a50 + 0x14f8),"##slot_context");
    cVar2 = FUN_1803ed900(uVar5,0);
    if (cVar2 != '\0') goto LAB_1802e1f8f;
    uVar11 = 1;
  }
  local_110 = &local_f8;
  pcVar6 = "##slot_tip";
  bVar3 = 0x23;
  uVar10 = ~*(uint *)(DAT_180ca0a50 + 0x1ee8);
  do {
    pcVar6 = pcVar6 + 1;
    if (((bVar3 == 0x23) && (*pcVar6 == 0x23)) && (pcVar6[1] == 0x23)) {
      pcVar6 = pcVar6 + 2;
      uVar10 = ~*(uint *)(DAT_180ca0a50 + 0x1ee8);
    }
    else {
      uVar10 = uVar10 >> 8 ^
               *(uint *)(&DAT_1806c25c0 + ((ulonglong)(uVar10 & 0xff) ^ (ulonglong)bVar3) * 4);
    }
    bVar3 = *pcVar6;
  } while (bVar3 != 0);
  local_148 = &local_110;
  FUN_1803451c0(~uVar10,uVar11,&local_100,&local_108);
  if ((param_5 != '\0') && (cVar1 != '\0')) {
    DAT_1809f5920 = local_f4;
  }
  iVar8 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
  if (iVar8 < 2) {
    FUN_1803ebc00("Calling PopID() too many times!");
  }
  else {
    *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar8 + -1;
  }
  iVar8 = DAT_1809f5900;
  if (cVar12 != '\0') {
    _DAT_1809f5908 = 1;
    if (param_2 == 1) {
      uVar9 = 2;
    }
    else if (param_2 == 2) {
      uVar9 = 3;
    }
    else if (param_2 == 4) {
      uVar9 = 4;
    }
    else if (param_2 == 5) {
      uVar9 = 6;
    }
    else if (param_2 == 6) {
      uVar9 = 5;
    }
    DAT_1809f5928 = 0;
    DAT_1809f5968 = 1;
    DAT_1809f596a = 0;
    DAT_1809f597c = 0xffffffff;
    _DAT_1809f5984 = 0xffffffffffffffff;
    DAT_1809f598c = 0;
    DAT_1809f5a18 = 0xffffffff;
    DAT_1809f5980 = 0;
    DAT_1809f5990 = 0xffffffff;
    DAT_1809f5996 = 0;
    DAT_1809f59d6 = 0;
    DAT_1809f590c = param_2;
    _DAT_1809f591c = uVar9;
    if (param_2 == 1) {
      pcVar6 = "weapon_knife_t";
      if (DAT_1809f5900 == 0) {
        pcVar6 = "weapon_knife";
      }
      piVar7 = (int *)FUN_1802d48a0(pcVar6);
      if (piVar7 == (int *)0x0) {
        DAT_1809f5914 = 0x3b;
        if (iVar8 == 0) {
          DAT_1809f5914 = 0x2a;
        }
      }
      else {
        DAT_1809f5914 = *piVar7;
      }
      if (iVar8 == 0) {
        DAT_1809f5910 = DAT_18092149c;
      }
      else {
        DAT_1809f5910 = DAT_1809214a4;
        if (DAT_1809214a4 < 0) {
          DAT_1809f5910 = DAT_18092149c;
        }
      }
    }
    else if (param_2 == 2) {
      DAT_1809f5914 = 0x13a5 - (uint)(DAT_1809f5900 != 0);
      if (DAT_1809f5900 == 0) {
        DAT_1809f5910 = DAT_1809214a0;
      }
      else {
        DAT_1809f5910 = DAT_1809214a8;
        if (DAT_1809214a8 < 0) {
          DAT_1809f5910 = DAT_1809214a0;
        }
      }
    }
    else if (param_2 == 4) {
      DAT_1809f5910 = DAT_1809214b0;
      if (DAT_1809f5900 == 0) {
        DAT_1809f5910 = DAT_1809214ac;
      }
      DAT_1809f5914 = 0;
    }
    else if (param_2 == 5) {
      DAT_1809f5910 = DAT_1809216e4;
      DAT_1809f5914 = DAT_1809f3618;
    }
    else if (param_2 == 6) {
      DAT_1809f5914 = 0;
      DAT_1809f5910 = DAT_1809216e8;
    }
    else {
      DAT_1809f5910 = local_f4;
      DAT_1809f5914 = local_f4;
    }
    DAT_1809f5918 = DAT_1809f5914;
    if (DAT_1809f5910 != 0) {
      DAT_1809f5918 = DAT_1809f5910;
    }
  }
LAB_1802e2222:
  FUN_1800288b0(&local_60);
  FUN_18000f890(local_80);
  FUN_18000f890(local_a0);
  FUN_18000f890(local_c0);
  FUN_18000f890(local_e8);
  return cVar12;
}



/* ===== 1802e2270 FUN_1802e2270 ===== */

void FUN_1802e2270(ulonglong param_1)

{
  longlong lVar1;
  byte bVar2;
  longlong *plVar3;
  int iVar4;
  char *pcVar5;
  ulonglong uVar6;
  uint local_res8 [8];
  undefined1 local_18 [24];
  
  iVar4 = (int)param_1;
  if (DAT_1809f5900 != iVar4) {
    pcVar5 = "inv_team_fade";
    uVar6 = 0xffffffff;
    bVar2 = 0x69;
    do {
      pcVar5 = pcVar5 + 1;
      if (((bVar2 == 0x23) && (*pcVar5 == 0x23)) && (pcVar5[1] == 0x23)) {
        uVar6 = 0xffffffff;
        pcVar5 = pcVar5 + 2;
      }
      else {
        param_1 = uVar6 & 0xff ^ (ulonglong)bVar2;
        uVar6 = (ulonglong)((uint)(uVar6 >> 8) ^ *(uint *)(&DAT_1806c25c0 + param_1 * 4));
      }
      bVar2 = *pcVar5;
    } while (bVar2 != 0);
    local_res8[0] = ~(uint)uVar6;
    DAT_1809f5900 = iVar4;
    plVar3 = (longlong *)FUN_18034f560(param_1,local_18,local_res8);
    lVar1 = *plVar3;
    *(undefined8 *)(lVar1 + 0x14) = 0;
    *(undefined8 *)(lVar1 + 0x1c) = 0;
    *(undefined4 *)(lVar1 + 0x24) = 0xffffffff;
  }
  return;
}



/* ===== 1802e2300 FUN_1802e2300 ===== */

void FUN_1802e2300(longlong *param_1,uint param_2,float param_3)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  char *pcVar6;
  int *piVar7;
  float fVar8;
  float local_res20;
  float local_res24;
  float local_58;
  float local_54;
  
  if (0.0 < param_3) {
    iVar4 = DAT_1809214b0;
    if (param_2 == 0) {
      iVar4 = DAT_1809214ac;
    }
    if (iVar4 == 0) {
      if (param_2 < 2) {
        iVar4 = (&DAT_180cec708)[(int)param_2];
      }
      else {
        iVar4 = 0;
      }
    }
    if (0 < DAT_1809f5920) {
      piVar7 = &DAT_18092174c;
      do {
        if ((*piVar7 == DAT_1809f5920) && (piVar7[1] == param_2)) goto LAB_1802e23ad;
        piVar7 = piVar7 + 0x68;
      } while (piVar7 != &DAT_180931b4c);
      piVar7 = &DAT_18092174c;
      do {
        if ((*piVar7 == DAT_1809f5920) && (piVar7[1] < 0)) goto LAB_1802e23ad;
        piVar7 = piVar7 + 0x68;
      } while (piVar7 != &DAT_180931b4c);
    }
    piVar7 = (int *)0x0;
LAB_1802e23ad:
    FUN_1802da710(param_2,DAT_1809f5920,piVar7,iVar4);
    pcVar6 = "agent_t";
    fVar1 = *(float *)(*param_1 + 4);
    if (param_2 == 0) {
      pcVar6 = "agent";
    }
    lVar5 = FUN_1800e35e0(pcVar6);
    if (lVar5 == 0) {
      fVar8 = DAT_1808ac34c;
    }
    else {
      iVar4 = FUN_1804e4d70(&DAT_1809ebd10);
      if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1804e4a90(5);
      }
      if (DAT_1809ebd5c == 0x7fffffff) {
        DAT_1809ebd5c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
        FUN_1804e4a90(6);
      }
      uVar2 = *(uint *)(lVar5 + 0x88);
      if ((uVar2 == 0) || (uVar3 = *(uint *)(lVar5 + 0x8c), uVar3 == 0)) {
        if (*(int *)(lVar5 + 0x24) == 0) {
          fVar8 = DAT_1808ac34c;
        }
        else {
          fVar8 = (float)*(int *)(lVar5 + 0x20) / (float)*(int *)(lVar5 + 0x24);
        }
        FUN_1804e4e90(&DAT_1809ebd10);
      }
      else {
        FUN_1804e4e90(&DAT_1809ebd10);
        fVar8 = (float)uVar2 / (float)uVar3;
      }
    }
    FUN_1803d8870(0,param_3 * *(float *)(DAT_180ca0a50 + 0xc9c));
    local_res20 = fVar8 * fVar1;
    local_58 = (*(float *)*param_1 * DAT_1808ac1f4 + *(float *)param_1[1]) - DAT_1808ac950;
    local_54 = ((float *)*param_1)[1] * DAT_1808ac1f4 + ((float *)param_1[1])[1] + DAT_1808ac750;
    local_res24 = fVar1;
    FUN_1802dd0e0(pcVar6,&local_58,&local_res20);
    FUN_1803d8a40(1);
  }
  return;
}



/* ===== 1802e2570 FUN_1802e2570 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802e2570(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined4 uVar5;
  byte bVar6;
  longlong lVar7;
  char *pcVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 *puVar11;
  bool bVar12;
  float fVar13;
  undefined1 auStack_c8 [8];
  undefined1 auStack_c0 [24];
  undefined1 **local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined4 local_90;
  undefined1 *local_88;
  undefined1 *local_80;
  undefined4 local_78;
  undefined4 local_74;
  char *local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  ulonglong local_58;
  ulonglong local_50;
  
  uVar9 = DAT_180ca0a50;
  local_50 = DAT_180919500 ^ (ulonglong)auStack_c8;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  lVar7 = *(longlong *)(uVar9 + 0x14f8);
  lVar10 = DAT_181107a18;
  if ((DAT_181107a18 == 0) && (lVar10 = DAT_181107a08, DAT_181107a08 == 0)) {
    lVar10 = *(longlong *)(uVar9 + 0x11f0);
  }
  local_80 = *(undefined1 **)(uVar9 + 0x11f0);
  local_78 = *(undefined4 *)(uVar9 + 0x1204);
  local_74 = *(undefined4 *)(uVar9 + 0x1200);
  FUN_1803f6200(uVar9 + 0x1fe0,&local_80);
  FUN_1803e8680(lVar10,DAT_1808ac930,0);
  fVar13 = (float)FUN_18053fc00((*(float *)(lVar7 + 0x30) - _DAT_181107104) * DAT_1808ac1f4);
  uVar9 = DAT_180ca0a50;
  fVar13 = fVar13 + (*(float *)(lVar7 + 0x28) - *(float *)(lVar7 + 0x98));
  uVar1 = *(undefined4 *)(lVar7 + 0x11c);
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  lVar10 = *(longlong *)(uVar9 + 0x14f8);
  *(float *)(lVar10 + 0x118) = fVar13;
  *(undefined4 *)(lVar10 + 0x11c) = uVar1;
  *(undefined1 *)(lVar10 + 0x159) = 1;
  bVar12 = DAT_1809f5900 == 0;
  local_88 = &DAT_3f8000003f800000;
  local_80 = (undefined1 *)0x0;
  local_70 = (char *)0x0;
  uStack_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_70 = (char *)FUN_18000fb70(0x30);
  uVar5 = s_panorama_images_icons_ct_logo_vs_18075fd98._12_4_;
  uVar2 = s_panorama_images_icons_ct_logo_vs_18075fd98._8_4_;
  uVar1 = s_panorama_images_icons_ct_logo_vs_18075fd98._4_4_;
  local_60 = 0x24;
  local_58 = 0x2f;
  *(undefined4 *)local_70 = s_panorama_images_icons_ct_logo_vs_18075fd98._0_4_;
  *(undefined4 *)(local_70 + 4) = uVar1;
  *(undefined4 *)(local_70 + 8) = uVar2;
  *(undefined4 *)(local_70 + 0xc) = uVar5;
  uVar5 = s_panorama_images_icons_ct_logo_vs_18075fd98._28_4_;
  uVar2 = s_panorama_images_icons_ct_logo_vs_18075fd98._24_4_;
  uVar1 = s_panorama_images_icons_ct_logo_vs_18075fd98._20_4_;
  *(undefined4 *)(local_70 + 0x10) = s_panorama_images_icons_ct_logo_vs_18075fd98._16_4_;
  *(undefined4 *)(local_70 + 0x14) = uVar1;
  *(undefined4 *)(local_70 + 0x18) = uVar2;
  *(undefined4 *)(local_70 + 0x1c) = uVar5;
  *(undefined4 *)(local_70 + 0x20) = s_panorama_images_icons_ct_logo_vs_18075fd98._32_4_;
  local_70[0x24] = '\0';
  local_90 = 0xfffac996;
  local_a0 = 0;
  local_a8 = &local_88;
  local_98 = bVar12;
  bVar6 = FUN_1802d5f20(&DAT_18075fd4c,"CT Loadout",&local_70,&local_80);
  if (local_58 < 0x10) {
LAB_1802e276c:
    if (bVar6 != 0) {
      FUN_1802e2270(0);
    }
    FUN_1803ec6c0(0,DAT_1808acda0);
    bVar12 = DAT_1809f5900 == 1;
    local_80 = &DAT_3f8000003f800000;
    local_88 = (undefined1 *)0x0;
    local_70 = (char *)0x0;
    uStack_68 = 0;
    local_60 = 0;
    local_58 = 0;
    local_70 = (char *)FUN_18000fb70(0x30);
    uVar5 = s_panorama_images_icons_t_logo_vsv_18075fd28._12_4_;
    uVar2 = s_panorama_images_icons_t_logo_vsv_18075fd28._8_4_;
    uVar1 = s_panorama_images_icons_t_logo_vsv_18075fd28._4_4_;
    local_60 = 0x23;
    local_58 = 0x2f;
    *(undefined4 *)local_70 = s_panorama_images_icons_t_logo_vsv_18075fd28._0_4_;
    *(undefined4 *)(local_70 + 4) = uVar1;
    *(undefined4 *)(local_70 + 8) = uVar2;
    *(undefined4 *)(local_70 + 0xc) = uVar5;
    uVar5 = s_panorama_images_icons_t_logo_vsv_18075fd28._28_4_;
    uVar2 = s_panorama_images_icons_t_logo_vsv_18075fd28._24_4_;
    uVar1 = s_panorama_images_icons_t_logo_vsv_18075fd28._20_4_;
    *(undefined4 *)(local_70 + 0x10) = s_panorama_images_icons_t_logo_vsv_18075fd28._16_4_;
    *(undefined4 *)(local_70 + 0x14) = uVar1;
    *(undefined4 *)(local_70 + 0x18) = uVar2;
    *(undefined4 *)(local_70 + 0x1c) = uVar5;
    *(uint *)(local_70 + 0x1f) =
         CONCAT31(s_panorama_images_icons_t_logo_vsv_18075fd28._32_3_,
                  s_panorama_images_icons_t_logo_vsv_18075fd28[0x1f]);
    local_70[0x23] = '\0';
    local_90 = 0xff57bfeb;
    local_a0 = 0;
    local_a8 = &local_80;
    local_98 = bVar12;
    bVar6 = FUN_1802d5f20(&DAT_18075fd54,"T Loadout",&local_70,&local_88);
    if (0xf < local_58) {
      uVar9 = local_58 + 1;
      pcVar8 = local_70;
      if (0xfff < uVar9) {
        pcVar8 = *(char **)(local_70 + -8);
        if ((char *)0x1f < local_70 + (-8 - (longlong)pcVar8)) goto LAB_1802e28b8;
        uVar9 = local_58 + 0x28;
      }
      thunk_FUN_1803d64e0(pcVar8,uVar9);
    }
    local_60 = 0;
    local_58 = 0xf;
    local_70 = (char *)((ulonglong)local_70 & 0xffffffffffffff00);
    if (bVar6 != 0) {
      FUN_1802e2270(1);
    }
    puVar11 = auStack_c8;
    _DAT_181107104 = *(float *)(lVar7 + 0x120) - fVar13;
    lVar7 = (longlong)*(int *)(DAT_180ca0a50 + 0x1fe0);
    uVar9 = DAT_180ca0a50;
    if (*(int *)(DAT_180ca0a50 + 0x1fe0) < 1) {
      FUN_1803ebc00("Calling PopFont() too many times!");
      puVar11 = auStack_c8;
      goto LAB_1802e28e7;
    }
  }
  else {
    uVar9 = local_58 + 1;
    pcVar8 = local_70;
    if (uVar9 < 0x1000) {
LAB_1802e2767:
      thunk_FUN_1803d64e0(pcVar8,uVar9);
      goto LAB_1802e276c;
    }
    pcVar8 = *(char **)(local_70 + -8);
    if (local_70 + (-8 - (longlong)pcVar8) < (char *)0x20) {
      uVar9 = local_58 + 0x28;
      goto LAB_1802e2767;
    }
LAB_1802e28b8:
    uVar9 = (ulonglong)bVar6;
    pcVar4 = (code *)swi(0x29);
    lVar7 = (*pcVar4)(5);
    puVar11 = auStack_c0;
  }
  lVar7 = lVar7 + -1;
  lVar10 = *(longlong *)(uVar9 + 0x1fe8);
  uVar1 = *(undefined4 *)(lVar10 + 0xc + lVar7 * 0x10);
  uVar2 = *(undefined4 *)(lVar10 + 8 + lVar7 * 0x10);
  uVar3 = *(undefined8 *)(lVar10 + lVar7 * 0x10);
  *(undefined8 *)(puVar11 + -8) = 0x1802e28e1;
  FUN_1803e8680(uVar3,uVar2,uVar1);
  *(int *)(uVar9 + 0x1fe0) = *(int *)(uVar9 + 0x1fe0) + -1;
LAB_1802e28e7:
  *(undefined8 *)(puVar11 + -8) = 0x1802e28f3;
  return;
}



/* ===== 1802e2910 FUN_1802e2910 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802e2910(uint param_1,char *param_2,longlong param_3,undefined8 param_4)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  uint uVar10;
  undefined4 uVar11;
  float fVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar15;
  float fVar16;
  undefined4 in_XMM3_Dc;
  undefined4 in_XMM3_Dd;
  undefined1 auStack_118 [32];
  uint local_f8;
  char *local_f0;
  char *local_e8;
  undefined8 local_e0;
  ulonglong local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  ulonglong local_98;
  
  fVar16 = (float)param_4;
  local_98 = DAT_180919500 ^ (ulonglong)auStack_118;
  FUN_1803ec9c0();
  lVar5 = DAT_181107a18;
  if ((DAT_181107a18 == 0) && (lVar5 = DAT_181107a08, DAT_181107a08 == 0)) {
    lVar5 = *(longlong *)(DAT_180ca0a50 + 0x11f0);
  }
  local_b0 = *(undefined4 *)(DAT_180ca0a50 + 0x1204);
  local_ac = *(undefined4 *)(DAT_180ca0a50 + 0x1200);
  local_b8 = *(undefined8 *)(DAT_180ca0a50 + 0x11f0);
  FUN_1803f6200(DAT_180ca0a50 + 0x1fe0,&local_b8);
  FUN_1803e8680(lVar5,DAT_1808ac930);
  fVar1 = *(float *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x118);
  uVar2 = *(undefined4 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x11c);
  if (param_2 == (char *)0x0) {
    fVar15 = 0.0;
  }
  else {
    local_c8 = 0;
    local_d8 = 0;
    local_e0 = 0;
    local_e8 = (char *)0x0;
    local_f8 = DAT_1808acda0;
    local_f0 = param_2;
    FUN_18040a2f0(&local_b8,*(undefined8 *)(DAT_180ca0a50 + 0x11f0));
    fVar15 = (float)(int)((uint)((float)(int)(float)local_b8 < (float)local_b8) +
                         (int)(float)local_b8);
  }
  lVar5 = DAT_180ca0a50;
  fVar3 = DAT_1808ac1f4;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  uVar7 = DAT_180960ec0;
  auVar13._8_4_ = in_XMM3_Dc;
  auVar13._0_8_ = param_4;
  auVar13._12_4_ = in_XMM3_Dd;
  auVar14._4_12_ = auVar13._4_12_;
  uVar10 = (int)(longlong)((float)(DAT_180960ec0 >> 0x18) * *(float *)(lVar5 + 0xc9c) + fVar3) <<
           0x18;
  auVar14._0_4_ = (fVar16 - fVar15) * fVar3 + fVar1;
  uVar11 = FUN_18053f0d0(auVar14._0_8_);
  local_b8 = CONCAT44(uVar2,uVar11);
  if (((uVar10 != 0) && (param_2 != (char *)0x0)) && (*param_2 != '\0')) {
    local_d0 = 0;
    local_d8 = local_d8 & 0xffffffff00000000;
    local_f8 = uVar7 & 0xffffff | uVar10;
    local_e0 = 0;
    lVar5 = *(longlong *)(*(longlong *)(lVar5 + 0x14f8) + 0x2c8);
    local_f0 = (char *)&local_a8;
    local_a8 = *(undefined8 *)(lVar5 + 0x60);
    uStack_a0 = *(undefined8 *)(lVar5 + 0x68);
    local_e8 = param_2;
    FUN_18040a900(*(undefined8 *)(*(longlong *)(lVar5 + 0x38) + 0x18));
  }
  local_b8 = CONCAT44(*(undefined4 *)(DAT_180ca0a50 + 0x1200),fVar16);
  FUN_1804174f0(&local_b8);
  lVar5 = DAT_180ca0a50;
  iVar8 = *(int *)(DAT_180ca0a50 + 0x1fe0);
  if (iVar8 < 1) {
    FUN_1803ebc00("Calling PopFont() too many times!");
  }
  else {
    FUN_1803e8680(*(undefined8 *)
                   (*(longlong *)(DAT_180ca0a50 + 0x1fe8) + -0x10 + (longlong)iVar8 * 0x10),
                  *(undefined4 *)
                   (*(longlong *)(DAT_180ca0a50 + 0x1fe8) + -8 + (longlong)iVar8 * 0x10));
    *(int *)(lVar5 + 0x1fe0) = *(int *)(lVar5 + 0x1fe0) + -1;
  }
  lVar5 = DAT_180ca0a50;
  fVar4 = DAT_1808ac950;
  fVar15 = DAT_1808ac750;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  lVar5 = *(longlong *)(lVar5 + 0x14f8);
  fVar1 = *(float *)(lVar5 + 0x11c);
  fVar12 = (float)FUN_18053fc00(((*(float *)(lVar5 + 0x284) - fVar1) - fVar4) / fVar15);
  fVar3 = DAT_1808ac34c;
  fVar15 = ((*(float *)(lVar5 + 0x34) - (fVar12 * fVar15 + fVar4)) - *(float *)(lVar5 + 0x5c)) +
           (*(float *)(lVar5 + 0x2c) - *(float *)(lVar5 + 0x9c));
  if (fVar15 <= fVar1) {
    fVar15 = fVar1;
  }
  *(float *)(lVar5 + 0x11c) = fVar15;
  uVar7 = 0;
  do {
    uVar9 = *(undefined8 *)(param_3 + (ulonglong)uVar7 * 8);
    if ((((DAT_1809f5900 < 2) && (param_1 < 3)) &&
        ((iVar8 = (&DAT_180cec714)[(int)(uVar7 + (param_1 + DAT_1809f5900 * 3) * 5)], iVar8 != 0 &&
         (lVar5 = FUN_180280c60(iVar8), lVar5 != 0)))) ||
       ((piVar6 = (int *)FUN_1802d48a0(uVar9), piVar6 != (int *)0x0 && (iVar8 = *piVar6, iVar8 != 0)
        ))) {
      local_f8 = uVar7;
      snprintf(&local_a8,0x10,"w%d_%d",param_1);
      fVar1 = fVar3;
      if (fVar3 <= fVar12) {
        fVar1 = fVar12;
      }
      local_f8 = CONCAT31(local_f8._1_3_,1);
      local_b8 = CONCAT44(fVar1,fVar16);
      FUN_1802e1df0(&local_a8,0,iVar8,&local_b8);
    }
    uVar7 = uVar7 + 1;
  } while ((int)uVar7 < 5);
  FUN_1803ecb10();
  return;
}



/* ===== 1802e2d40 FUN_1802e2d40 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802e2d40(void)

{
  longlong lVar1;
  byte bVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  int *piVar11;
  int iVar12;
  char *pcVar13;
  undefined4 *puVar14;
  char *pcVar15;
  undefined **ppuVar16;
  bool bVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  longlong local_res8;
  undefined8 local_res10;
  undefined8 local_res18;
  uint uVar21;
  undefined8 *local_ba8;
  undefined8 *local_ba0;
  undefined8 local_b98;
  undefined8 uStack_b90;
  undefined4 local_b88;
  undefined1 local_b80 [2904];
  
  if (DAT_180cd1304 == '\0') {
    FUN_1803a0b60(&local_res8);
    lVar9 = local_res8;
  }
  else {
    lVar9 = DAT_181108a00;
  }
  if (lVar9 == 0) {
    iVar12 = -1;
  }
  else {
    if (DAT_180ca09f4 == 0) {
      cVar3 = '\0';
    }
    else {
      cVar3 = FUN_180011220((ulonglong)DAT_180ca09f4 + lVar9);
      if (cVar3 == '\x03') {
        iVar12 = 0;
        goto LAB_1802e2dcd;
      }
    }
    iVar12 = -1;
    if (cVar3 == '\x02') {
      iVar12 = 1;
    }
  }
LAB_1802e2dcd:
  pcVar13 = "inv_team_fade";
  if (((iVar12 != DAT_1809f5904) && (DAT_1809f5904 = iVar12, -1 < iVar12)) &&
     (iVar12 != DAT_1809f5900)) {
    uVar10 = 0xffffffff;
    bVar2 = 0x69;
    _DAT_1809f5a40 = 0;
    pcVar15 = "inv_team_fade";
    do {
      pcVar15 = pcVar15 + 1;
      if (((bVar2 == 0x23) && (*pcVar15 == 0x23)) && (pcVar15[1] == 0x23)) {
        uVar10 = 0xffffffff;
        pcVar15 = pcVar15 + 2;
      }
      else {
        uVar10 = (ulonglong)
                 ((uint)(uVar10 >> 8) ^
                 *(uint *)(&DAT_1806c25c0 + (uVar10 & 0xff ^ (ulonglong)bVar2) * 4));
      }
      bVar2 = *pcVar15;
    } while (bVar2 != 0);
    local_res8 = CONCAT44(local_res8._4_4_,~(uint)uVar10);
    DAT_1809f5900 = iVar12;
    plVar6 = (longlong *)FUN_18034f560();
    lVar9 = *plVar6;
    *(undefined8 *)(lVar9 + 0x14) = 0;
    *(undefined8 *)(lVar9 + 0x1c) = 0;
    *(undefined4 *)(lVar9 + 0x24) = 0xffffffff;
    DAT_1809f5908 = 0;
  }
  puVar7 = (undefined8 *)FUN_180280be0();
  for (puVar14 = (undefined4 *)*puVar7; puVar14 != (undefined4 *)puVar7[1]; puVar14 = puVar14 + 0x24
      ) {
    plVar6 = (longlong *)(puVar14 + 2);
    if (0xf < *(ulonglong *)(puVar14 + 8)) {
      plVar6 = (longlong *)*plVar6;
    }
    if (*(longlong *)(puVar14 + 6) == 0xc) {
      lVar9 = *plVar6 + -0x745f6e6f70616577;
      if (lVar9 == 0) {
        lVar9 = (ulonglong)*(uint *)(plVar6 + 1) - 0x72657361;
      }
      if (lVar9 == 0) goto LAB_1802e2eda;
    }
  }
  puVar14 = (undefined4 *)0x0;
LAB_1802e2eda:
  local_res8 = 0x40a0000041200000;
  FUN_1803d89a0(0xe,&local_res8);
  FUN_1803ec9c0();
  fVar20 = DAT_1808ac34c;
  lVar9 = *(longlong *)(DAT_180ca0a50 + 0x14f8);
  if ((*(longlong *)(lVar9 + 0x1c8) != 0) ||
     (lVar8 = 0x284, *(longlong *)(DAT_180ca0a50 + 0x2360) != 0)) {
    lVar8 = 0x254;
  }
  local_res8 = 0;
  fVar19 = ((*(float *)(lVar8 + lVar9) - *(float *)(lVar9 + 0x11c)) - DAT_1808acb18) - DAT_1808ac864
  ;
  fVar18 = DAT_1808ac34c;
  if (DAT_1808ac34c <= fVar19) {
    fVar18 = fVar19;
  }
  local_res10 = CONCAT44(fVar18,0x43480000);
  FUN_1803d89a0(2,&local_res8);
  lVar9 = DAT_180ca0a50;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  uVar4 = FUN_1803e8900(*(undefined8 *)(lVar9 + 0x14f8),"##inv_agent");
  uVar21 = 0;
  cVar3 = FUN_1803e1800("##inv_agent",uVar4,&local_res10,0,0x98);
  if (cVar3 != '\0') {
    uVar10 = 0xffffffff;
    bVar2 = 0x69;
    local_res10 = *(undefined8 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x30);
    local_res18 = *(undefined8 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x28);
    do {
      pcVar13 = pcVar13 + 1;
      if (((bVar2 == 0x23) && (*pcVar13 == 0x23)) && (pcVar13[1] == 0x23)) {
        uVar10 = 0xffffffff;
        pcVar13 = pcVar13 + 2;
      }
      else {
        uVar10 = (ulonglong)
                 ((uint)(uVar10 >> 8) ^
                 *(uint *)(&DAT_1806c25c0 + (uVar10 & 0xff ^ (ulonglong)bVar2) * 4));
      }
      bVar2 = *pcVar13;
    } while (bVar2 != 0);
    local_b88 = 0xffffffff;
    local_res8 = CONCAT44(local_res8._4_4_,~(uint)uVar10);
    local_b98 = _DAT_1808ad560;
    uStack_b90 = _UNK_1808ad568;
    FUN_18034a380(_DAT_1808ad560,&local_ba8,&local_res8,&local_b98);
    fVar18 = (float)FUN_1802b3660((longlong)local_ba8 + 0x14,fVar20,DAT_1808ac118,0);
    iVar12 = DAT_1809f5900;
    if (DAT_1809f5920 == 0) {
      puVar7 = (undefined8 *)FUN_180280be0();
      for (piVar11 = (int *)*puVar7; piVar11 != (int *)puVar7[1]; piVar11 = piVar11 + 0x24) {
        plVar6 = (longlong *)(piVar11 + 2);
        if (0xf < *(ulonglong *)(piVar11 + 8)) {
          plVar6 = (longlong *)*plVar6;
        }
        if (*(longlong *)(piVar11 + 6) == 10) {
          lVar9 = *plVar6 + -0x615f6e6f70616577;
          if (lVar9 == 0) {
            lVar9 = (ulonglong)*(ushort *)(plVar6 + 1) - 0x7077;
          }
          if (lVar9 == 0) {
            DAT_1809f5920 = *piVar11;
            break;
          }
        }
      }
    }
    local_ba8 = &local_res10;
    local_ba0 = &local_res18;
    if (fVar18 < fVar20) {
      FUN_1802e2300(&local_ba8,1 - iVar12,fVar20 - fVar18);
    }
    FUN_1802e2300(&local_ba8,iVar12,fVar18);
    FUN_1802e2570();
    lVar9 = DAT_180ca0a50;
    uVar4 = DAT_1809f505c;
    *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
    lVar9 = *(longlong *)(*(longlong *)(lVar9 + 0x14f8) + 0x2c8);
    FUN_1802b3c30(lVar9,0,*(undefined4 *)(lVar9 + 0x20),uVar4);
  }
  FUN_1803e1bc0();
  FUN_1803d8a40(1);
  local_res8 = 0x4270000042700000;
  uVar21 = uVar21 & 0xffffff00;
  FUN_1802e1df0("agent",4,0,&local_res8,uVar21);
  FUN_1803ec6c0();
  uVar21 = uVar21 & 0xffffff00;
  FUN_1802e1df0("medal",6,0,&local_res8,uVar21);
  FUN_1803ec6c0();
  uVar21 = uVar21 & 0xffffff00;
  FUN_1802e1df0("music",5,0,&local_res8,uVar21);
  uVar21 = CONCAT31((int3)(uVar21 >> 8),1);
  FUN_1802e1df0("knife",1,0,&local_res8,uVar21);
  FUN_1803ec6c0();
  iVar12 = DAT_1809214b0;
  if (DAT_1809f5900 == 0) {
    iVar12 = DAT_1809214ac;
  }
  iVar5 = FUN_1804e4d70(&DAT_1809f2710);
  if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809f275c == 0x7fffffff) {
    DAT_1809f275c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  FUN_180540530(local_b80,&DAT_1809f1be0,0xb28);
  FUN_1804e4e90(&DAT_1809f2710);
  if (((iVar12 == 0) || (local_b80[0] == '\0')) ||
     ((local_b80._4_4_ != iVar12 || ((local_b80._8_4_ != DAT_1809f5900 || (local_b80[0xd] != '\0')))
      ))) {
    FUN_1802b9bd0();
    FUN_1802e1df0("gloves",2,0,&local_res8,uVar21 & 0xffffff00);
  }
  else {
    FUN_1802b9bd0();
    lVar1 = DAT_180ca0a50;
    DAT_181107580 = DAT_181107580 + 1;
    *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
    lVar9 = *(longlong *)(lVar1 + 0x14f8);
    lVar8 = *(longlong *)(lVar9 + 0x2c8);
    *(undefined1 *)(lVar9 + 0xce) = 1;
    iVar12 = *(int *)(*(longlong *)(*(longlong *)(lVar1 + 0x14f8) + 0x2c8) + 0x20);
    FUN_1803d8870(1,fVar20);
    FUN_1803e7920(1);
    FUN_1803d8a40(1);
    FUN_1802e1df0("gloves",2,0,&local_res8,uVar21 & 0xffffff00);
    if (lVar8 != 0) {
      FUN_1802b9bd0();
      DAT_181107580 = DAT_181107580 + -1;
      FUN_1803e79e0();
      fVar20 = DAT_1808ac1f4;
      if (iVar12 < *(int *)(lVar8 + 0x20)) {
        do {
          lVar9 = (longlong)iVar12;
          iVar12 = iVar12 + 1;
          uVar21 = *(uint *)(*(longlong *)(lVar8 + 0x28) + 0x10 + lVar9 * 0x14);
          *(uint *)(*(longlong *)(lVar8 + 0x28) + 0x10 + lVar9 * 0x14) =
               (int)(longlong)((float)(uVar21 >> 0x18) * fVar20 + fVar20) << 0x18 |
               uVar21 & 0xffffff;
        } while (iVar12 < *(int *)(lVar8 + 0x20));
      }
    }
  }
  FUN_1803ec6c0();
  if (puVar14 != (undefined4 *)0x0) {
    FUN_1802e1df0(&DAT_1806f04dc,3,*puVar14,&local_res8,1);
  }
  FUN_1803ecb10();
  fVar20 = DAT_1808ac950;
  FUN_1803ec6c0();
  lVar9 = *(longlong *)(DAT_180ca0a50 + 0x14f8);
  if ((*(longlong *)(lVar9 + 0x1c8) != 0) ||
     (lVar8 = 0x280, *(longlong *)(DAT_180ca0a50 + 0x2360) != 0)) {
    lVar8 = 0x250;
  }
  uVar4 = FUN_18053fc00(((*(float *)(lVar8 + lVar9) - *(float *)(lVar9 + 0x118)) - fVar20) /
                        DAT_1808ac658);
  ppuVar16 = &PTR_s_weapon_glock_180659980;
  bVar17 = DAT_1809f5900 == 0;
  if (DAT_1809f5900 == 0) {
    ppuVar16 = &PTR_s_weapon_usp_silencer_1806a09e0;
  }
  FUN_1802e2910(0,PTR_s_Pistols_180659a88,ppuVar16,uVar4);
  FUN_1803ec6c0();
  ppuVar16 = &PTR_s_weapon_nova_180659b60;
  if (bVar17) {
    ppuVar16 = &PTR_s_weapon_nova_180658600;
  }
  FUN_1802e2910(1,PTR_s_Mid_Tier_180659a90,ppuVar16,uVar4);
  FUN_1803ec6c0();
  ppuVar16 = &PTR_s_weapon_galilar_1806a0aa0;
  if (bVar17) {
    ppuVar16 = &PTR_s_weapon_famas_1806a0898;
  }
  FUN_1802e2910(2,PTR_s_Rifles_180659a98,ppuVar16,uVar4);
  FUN_1803d8a40(1);
  return;
}



/* ===== 1802e3580 FUN_1802e3580 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong * FUN_1802e3580(ulonglong *param_1)

{
  code *pcVar1;
  longlong lVar2;
  int iVar3;
  ulonglong *puVar4;
  int *piVar5;
  ulonglong **ppuVar6;
  ulonglong *puVar7;
  longlong lVar8;
  ulonglong *puVar9;
  undefined8 *******pppppppuVar10;
  size_t sVar11;
  undefined8 *******pppppppuVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong **ppuVar15;
  ulonglong uVar16;
  ulonglong *puVar17;
  ulonglong *puVar18;
  char *_Str;
  undefined1 *puVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  undefined1 *puVar22;
  ulonglong **ppuVar23;
  longlong *plVar24;
  ulonglong uVar25;
  int iVar26;
  uint uVar27;
  ulonglong uVar28;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  undefined8 uStack_1e0;
  undefined1 auStack_1d8 [8];
  undefined1 auStack_1d0 [24];
  uint local_1b8;
  ulonglong *local_1a8;
  ulonglong local_198;
  ulonglong local_188 [4];
  ulonglong *local_168;
  ulonglong uStack_160;
  ulonglong **local_158;
  ulonglong *local_150;
  ulonglong local_148;
  ulonglong uStack_140;
  ulonglong **local_138;
  ulonglong local_130;
  uint local_128;
  undefined8 local_118;
  undefined8 uStack_110;
  ulonglong *local_108;
  ulonglong *local_100;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  ulonglong *local_e8;
  ulonglong *local_e0;
  undefined8 *******local_d8;
  ulonglong uStack_d0;
  ulonglong *local_c8;
  ulonglong *local_c0;
  ulonglong local_b8;
  ulonglong uStack_b0;
  undefined8 local_a8;
  ulonglong local_a0;
  undefined8 *******local_98;
  undefined8 uStack_90;
  ulonglong *local_88;
  ulonglong *local_80;
  undefined1 local_78 [32];
  ulonglong local_58;
  
  puVar22 = auStack_1d8;
  local_58 = DAT_180919500 ^ (ulonglong)auStack_1d8;
  puVar4 = (ulonglong *)0x0;
  local_1b8 = 0;
  local_188[1] = 0;
  local_188[2] = 0;
  uVar25 = 0xf;
  local_188[3] = 0xf;
  local_188[0] = 0;
  uStack_160 = 0;
  local_158 = (ulonglong **)0x0;
  puVar7 = (ulonglong *)0xf;
  local_150 = (ulonglong *)0xf;
  local_168 = (ulonglong *)0x0;
  uStack_140 = 0;
  local_138 = (ulonglong **)0x0;
  local_130 = 0xf;
  local_148 = 0;
  local_128 = 0;
  local_1a8 = param_1;
  if (DAT_1809f590c == 4) {
LAB_1802e3d2a:
    iVar3 = DAT_1809f5900;
    iVar26 = DAT_1809214b0;
    if (DAT_1809f5900 == 0) {
      iVar26 = DAT_1809214ac;
    }
    if (iVar26 == 0) {
      local_88 = puVar4;
LAB_1802e3e0e:
      _Str = "Terrorist";
      if (iVar3 == 0) {
        _Str = "Counter-Terrorist";
      }
      local_98 = (undefined8 *******)0x0;
      uStack_90 = 0;
      *(undefined8 *)(puVar22 + -8) = 0x1802e3e39;
      local_80 = local_88;
      sVar11 = strlen(_Str);
      *(undefined8 *)(puVar22 + -8) = 0x1802e3e48;
      FUN_1800133a0(&local_98,_Str,sVar11);
      pppppppuVar12 = &local_98;
      uVar27 = 2;
      ppuVar23 = &local_88;
      ppuVar15 = &local_80;
      pppppppuVar10 = local_98;
    }
    else {
      *(undefined8 *)(puVar22 + -8) = 0x1802e3d4c;
      puVar4 = (ulonglong *)FUN_18027fb40();
      if (puVar4 == (ulonglong *)0x0) {
        local_88 = (ulonglong *)0x0;
        goto LAB_1802e3e0e;
      }
      puVar7 = puVar4 + 5;
      local_d8 = (undefined8 *******)0x0;
      uStack_d0 = 0;
      local_c8 = (ulonglong *)0x0;
      local_c0 = (ulonglong *)0x0;
      puVar17 = (ulonglong *)puVar4[7];
      if (0xf < puVar4[8]) {
        puVar7 = (ulonglong *)*puVar7;
      }
      if ((ulonglong *)0x7fffffffffffffff < puVar17) {
LAB_1802e3fd5:
                    /* WARNING: Subroutine does not return */
        *(undefined **)(puVar22 + -8) = &UNK_1802e3fda;
        FUN_180011990();
      }
      if (puVar17 < (ulonglong *)0x10) {
        local_c8 = puVar17;
        local_c0 = (ulonglong *)0xf;
        pppppppuVar10 = (undefined8 *******)*puVar7;
        local_d8 = pppppppuVar10;
        uStack_d0 = puVar7[1];
      }
      else {
        puVar9 = (ulonglong *)((ulonglong)puVar17 | 0xf);
        puVar18 = (ulonglong *)0x7fffffffffffffff;
        if ((puVar9 < (ulonglong *)0x8000000000000000) &&
           (puVar18 = puVar9, puVar9 < (ulonglong *)0x16)) {
          puVar18 = (ulonglong *)0x16;
        }
        *(undefined8 *)(puVar22 + -8) = 0x1802e3dd5;
        pppppppuVar10 = (undefined8 *******)FUN_18000fb70((longlong)puVar18 + 1);
        *(undefined8 *)(puVar22 + -8) = 0x1802e3df3;
        local_d8 = pppppppuVar10;
        local_c8 = puVar17;
        local_c0 = puVar18;
        FUN_180540530(pppppppuVar10,puVar7,(longlong)puVar17 + 1);
      }
      uVar27 = 1;
      ppuVar23 = &local_c8;
      ppuVar15 = &local_c0;
      pppppppuVar12 = &local_d8;
    }
    *(uint *)(puVar22 + 0x20) = uVar27;
    if ((undefined8 *******)(puVar22 + 0x50) != pppppppuVar12) {
      if (*ppuVar15 < (ulonglong *)0x10) {
        pppppppuVar10 = pppppppuVar12;
      }
      ppuVar23 = (ulonglong **)*ppuVar23;
      *(undefined8 *)(puVar22 + -8) = 0x1802e3e83;
      FUN_180029840(puVar22 + 0x50,pppppppuVar10);
      uVar25 = *(ulonglong *)(puVar22 + 0x68);
    }
    if (((uVar27 & 2) == 0) || (uVar27 = uVar27 & 0xfffffffd, local_80 < (ulonglong *)0x10)) {
LAB_1802e3ec8:
      if ((uVar27 & 1) != 0) {
        *(undefined8 *)(puVar22 + -8) = 0x1802e3ed6;
        FUN_18000f890(&local_d8);
      }
      ppuVar23 = (ulonglong **)0x0;
      if (puVar4 == (ulonglong *)0x0) goto LAB_1802e3eed;
      local_128 = (uint)puVar4[0x19];
    }
    else {
      puVar7 = (ulonglong *)((longlong)local_80 + 1);
      pppppppuVar12 = local_98;
      if (puVar7 < (ulonglong *)0x1000) {
LAB_1802e3ec2:
        *(undefined8 *)(puVar22 + -8) = 0x1802e3ec7;
        thunk_FUN_1803d64e0(pppppppuVar12,puVar7);
        goto LAB_1802e3ec8;
      }
      pppppppuVar12 = (undefined8 *******)local_98[-1];
      if ((ulonglong)((longlong)local_98 + (-8 - (longlong)pppppppuVar12)) < 0x20) {
        puVar7 = local_80 + 5;
        goto LAB_1802e3ec2;
      }
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(5);
      puVar22 = puVar22 + 8;
LAB_1802e3eed:
      local_128 = (uint)ppuVar23;
    }
    *param_1 = 0;
    param_1[1] = 0;
    *param_1 = *(ulonglong *)(puVar22 + 0x50);
    param_1[1] = *(ulonglong *)(puVar22 + 0x58);
    param_1[2] = *(ulonglong *)(puVar22 + 0x60);
    param_1[3] = uVar25;
    puVar22[0x50] = 0;
    param_1[4] = *(ulonglong *)(puVar22 + 0x70);
    param_1[5] = *(ulonglong *)(puVar22 + 0x78);
    param_1[6] = (ulonglong)local_158;
    param_1[7] = (ulonglong)local_150;
    puVar22[0x70] = 0;
    param_1[10] = (ulonglong)local_138;
  }
  else {
    if (DAT_1809f590c != 5) {
      if (DAT_1809f590c != 6) {
        if (DAT_1809f590c - 1U < 2) {
          iVar26 = DAT_1809f5914;
          if (DAT_1809f5910 != 0) {
            iVar26 = DAT_1809f5910;
          }
LAB_1802e36c6:
          if (0 < iVar26) {
            piVar5 = &DAT_18092174c;
            do {
              if ((*piVar5 == iVar26) && (piVar5[1] == DAT_1809f5900)) goto LAB_1802e371b;
              piVar5 = piVar5 + 0x68;
            } while (piVar5 != &DAT_180931b4c);
            piVar5 = &DAT_18092174c;
            do {
              if ((*piVar5 == iVar26) && (piVar5[1] < 0)) goto LAB_1802e371b;
              piVar5 = piVar5 + 0x68;
            } while (piVar5 != &DAT_180931b4c);
          }
        }
        else {
          if ((DAT_1809f590c == 0) || (DAT_1809f590c == 3)) {
            iVar26 = DAT_1809f5910;
            goto LAB_1802e36c6;
          }
          iVar26 = 0;
        }
        ppuVar23 = (ulonglong **)0x0;
        goto LAB_1802e3646;
      }
      lVar8 = FUN_180280f20(DAT_1809216e8);
      puVar22 = auStack_1d8;
      if (lVar8 == 0) {
        local_f8._6_2_ = (undefined2)((uint)extraout_XMM0_Db >> 0x10);
        uStack_f0 = extraout_XMM0_Dc;
        uStack_ec = extraout_XMM0_Dd;
        local_e8 = (ulonglong *)0x5;
        local_e0 = (ulonglong *)0xf;
        local_f8._0_1_ = s_Medal_18075f97c[0];
        local_f8._1_1_ = s_Medal_18075f97c[1];
        local_f8._2_1_ = s_Medal_18075f97c[2];
        local_f8._3_1_ = s_Medal_18075f97c[3];
        local_f8._4_1_ = s_Medal_18075f97c[4];
        local_f8._5_1_ = 0;
        puVar7 = &local_f8;
        uVar27 = 0x40;
        puVar4 = (ulonglong *)
                 CONCAT26(local_f8._6_2_,
                          (uint6)CONCAT14(s_Medal_18075f97c[4],s_Medal_18075f97c._0_4_));
        ppuVar15 = &local_e8;
        ppuVar23 = &local_e0;
        puVar17 = local_100;
        puVar18 = local_118;
      }
      else {
        plVar24 = (longlong *)(lVar8 + 0x28);
        local_118 = (ulonglong *)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
        uStack_110 = CONCAT44(extraout_XMM0_Dd,extraout_XMM0_Dc);
        puVar7 = *(ulonglong **)(lVar8 + 0x38);
        if (0xf < *(ulonglong *)(lVar8 + 0x40)) {
          plVar24 = (longlong *)*plVar24;
        }
        local_108 = puVar4;
        local_100 = puVar4;
        if ((ulonglong *)0x7fffffffffffffff < puVar7) goto LAB_1802e3fd5;
        if (puVar7 < (ulonglong *)0x10) {
          local_108 = puVar7;
          puVar17 = (ulonglong *)0xf;
          local_100 = (ulonglong *)0xf;
          puVar4 = (ulonglong *)*plVar24;
          uStack_110 = plVar24[1];
          local_118 = puVar4;
        }
        else {
          puVar4 = (ulonglong *)((ulonglong)puVar7 | 0xf);
          puVar17 = (ulonglong *)0x7fffffffffffffff;
          if ((puVar4 < (ulonglong *)0x8000000000000000) &&
             (puVar17 = puVar4, puVar4 < (ulonglong *)0x16)) {
            puVar17 = (ulonglong *)0x16;
          }
          puVar4 = (ulonglong *)FUN_18000fb70((longlong)puVar17 + 1);
          local_118 = puVar4;
          local_108 = puVar7;
          local_100 = puVar17;
          FUN_180540530(puVar4,plVar24,(longlong)puVar7 + 1);
        }
        puVar7 = &local_118;
        uVar27 = 0x20;
        ppuVar15 = &local_108;
        ppuVar23 = &local_100;
        puVar18 = puVar4;
      }
      local_1b8 = uVar27;
      if (local_188 != puVar7) {
        if (*ppuVar23 < (ulonglong *)0x10) {
          puVar4 = puVar7;
        }
        ppuVar15 = (ulonglong **)*ppuVar15;
        FUN_180029840(local_188,puVar4);
        puVar17 = local_100;
        puVar18 = local_118;
      }
      if (((uVar27 & 0x40) != 0) && (uVar27 = uVar27 & 0xffffffbf, (ulonglong *)0xf < local_e0)) {
        puVar7 = (ulonglong *)((longlong)local_e0 + 1);
        lVar2 = CONCAT26(local_f8._6_2_,
                         CONCAT15(local_f8._5_1_,CONCAT14(local_f8._4_1_,(undefined4)local_f8)));
        lVar13 = lVar2;
        if ((ulonglong *)0xfff < puVar7) {
          lVar13 = *(longlong *)(lVar2 + -8);
          if ((lVar2 - lVar13) - 8U < 0x20) {
            puVar7 = local_e0 + 5;
            goto LAB_1802e3a43;
          }
          pcVar1 = (code *)swi(0x29);
          (*pcVar1)(5);
          puVar19 = auStack_1d0;
          goto LAB_1802e3ad5;
        }
LAB_1802e3a43:
        thunk_FUN_1803d64e0(lVar13,puVar7);
      }
      puVar19 = auStack_1d8;
      if (((uVar27 & 0x20) != 0) && ((ulonglong *)0xf < puVar17)) {
        puVar7 = (ulonglong *)((longlong)puVar17 + 1);
        puVar4 = puVar18;
        if ((ulonglong *)0xfff < puVar7) {
          puVar4 = (ulonglong *)puVar18[-1];
          if (0x1f < (ulonglong)((longlong)puVar18 + (-8 - (longlong)puVar4))) goto LAB_1802e3ad5;
          puVar7 = puVar17 + 5;
        }
        thunk_FUN_1803d64e0(puVar4,puVar7);
      }
      puVar22 = auStack_1d8;
      puVar20 = auStack_1d8;
      puVar21 = auStack_1d8;
      if (lVar8 == 0) {
        local_128 = 0;
      }
      else {
        local_128 = *(uint *)(lVar8 + 0x68);
        iVar26 = *(int *)(lVar8 + 0x6c);
        puVar22 = auStack_1d8;
        if ((0 < iVar26) &&
           (puVar22 = auStack_1d8, iVar26 < (int)(DAT_180ca15a8 - DAT_180ca15a0 >> 5))) {
          ppuVar23 = (ulonglong **)(DAT_180ca15a0 + (longlong)iVar26 * 0x20);
          puVar22 = auStack_1d8;
          if (&local_168 != ppuVar23) {
            ppuVar15 = ppuVar23;
            if (ppuVar23[3] < (ulonglong *)0x10) goto LAB_1802e3adc;
            ppuVar15 = (ulonglong **)*ppuVar23;
            goto LAB_1802e3adf;
          }
        }
      }
LAB_1802e3af7:
      *param_1 = 0;
      param_1[1] = 0;
      *param_1 = *(ulonglong *)(puVar22 + 0x50);
      param_1[1] = *(ulonglong *)(puVar22 + 0x58);
      param_1[2] = *(ulonglong *)(puVar22 + 0x60);
      param_1[3] = *(ulonglong *)(puVar22 + 0x68);
      *(undefined8 *)(puVar22 + 0x60) = 0;
      puVar22[0x50] = 0;
      param_1[4] = *(ulonglong *)(puVar22 + 0x70);
      param_1[5] = *(ulonglong *)(puVar22 + 0x78);
      param_1[6] = (ulonglong)local_158;
      param_1[7] = (ulonglong)local_150;
      local_158 = (ulonglong **)0x0;
      puVar22[0x70] = 0;
      param_1[8] = local_148;
      param_1[9] = uStack_140;
      param_1[10] = (ulonglong)local_138;
      param_1[0xb] = local_130;
      local_138 = (ulonglong **)0x0;
      *(uint *)(param_1 + 0xc) = local_128;
      goto LAB_1802e3f79;
    }
    if ((DAT_180ccfeda != '\0') && (piVar5 = DAT_180cfc910, 0 < DAT_1809216e4)) {
      for (; piVar5 != DAT_180cfc918; piVar5 = piVar5 + 0x26) {
        if (*piVar5 == DAT_1809216e4) goto LAB_1802e3bd3;
      }
    }
    piVar5 = (int *)0x0;
LAB_1802e3bd3:
    if (piVar5 == (int *)0x0) {
      local_a8 = 9;
      local_a0 = 0xf;
      local_b8 = s_Music_Kit_18075f988._0_8_;
      uStack_b0 = (ulonglong)(byte)s_Music_Kit_18075f988[8];
      puVar7 = &local_b8;
      uVar27 = 0x10;
    }
    else {
      puVar7 = (ulonglong *)FUN_180024b50(local_78,piVar5 + 10);
      uVar27 = 8;
    }
    ppuVar15 = (ulonglong **)(ulonglong *)0x0;
    ppuVar6 = (ulonglong **)0;
    uVar28 = 0;
    local_1b8 = uVar27;
    if (local_188 != puVar7) {
      if (0xf < puVar7[3]) {
        puVar7 = (ulonglong *)*puVar7;
      }
      FUN_180029840(local_188,puVar7);
      ppuVar15 = local_158;
      ppuVar6 = local_138;
      uVar25 = local_188[3];
      uVar28 = local_188[2];
    }
    if (((uVar27 & 0x10) != 0) && (uVar27 = uVar27 & 0xffffffef, 0xf < local_a0)) {
      uVar16 = local_a0 + 1;
      uVar14 = local_b8;
      if (0xfff < uVar16) {
        uVar14 = *(ulonglong *)(local_b8 - 8);
        if (0x1f < (local_b8 - uVar14) - 8) {
          pcVar1 = (code *)swi(0x29);
          (*pcVar1)(5);
          puVar22 = auStack_1d0;
          goto LAB_1802e3d2a;
        }
        uVar16 = local_a0 + 0x28;
      }
      thunk_FUN_1803d64e0(uVar14,uVar16);
    }
    if ((uVar27 & 8) != 0) {
      FUN_18000f890();
    }
    puVar22 = auStack_1d8;
    local_128 = -(uint)(piVar5 != (int *)0x0) & 3;
    *param_1 = 0;
    param_1[1] = 0;
    *param_1 = local_188[0];
    param_1[1] = local_188[1];
    param_1[2] = uVar28;
    param_1[3] = uVar25;
    ppuVar23 = (ulonglong **)0x0;
    local_188[0] = local_188[0] & 0xffffffffffffff00;
    param_1[4] = (ulonglong)local_168;
    param_1[5] = uStack_160;
    param_1[6] = (ulonglong)ppuVar15;
    param_1[7] = (ulonglong)local_150;
    local_168 = (ulonglong *)((ulonglong)local_168 & 0xffffffffffffff00);
    param_1[10] = (ulonglong)ppuVar6;
  }
  param_1[8] = local_148;
  param_1[9] = uStack_140;
  param_1[0xb] = local_130;
  *(uint *)(param_1 + 0xc) = local_128;
  goto LAB_1802e3f6c;
LAB_1802e371b:
  ppuVar23 = (ulonglong **)(ulonglong)(uint)piVar5[2];
LAB_1802e3646:
  puVar4 = (ulonglong *)FUN_1802d4930(local_78,iVar26,ppuVar23);
  if (local_188 != puVar4) {
    local_188[0] = *puVar4;
    local_188[1] = puVar4[1];
    local_188[2] = puVar4[2];
    local_188[3] = puVar4[3];
    puVar4[2] = 0;
    puVar4[3] = 0xf;
    *(undefined1 *)puVar4 = 0;
    puVar7 = local_150;
  }
  uVar25 = local_188[1];
  local_198 = local_188[0];
  FUN_18000f890(local_78);
  ppuVar15 = ppuVar23;
  ppuVar6 = (ulonglong **)FUN_180281250(local_78,iVar26);
  puVar19 = auStack_1d8;
  if (&local_168 != ppuVar6) {
    if ((ulonglong *)0xf < puVar7) {
      puVar4 = (ulonglong *)((longlong)puVar7 + 1);
      puVar17 = local_168;
      if ((ulonglong *)0xfff < puVar4) {
        puVar17 = (ulonglong *)local_168[-1];
        if (0x1f < (ulonglong)((longlong)local_168 + (-8 - (longlong)puVar17))) {
LAB_1802e3ad5:
          pcVar1 = (code *)swi(0x29);
          (*pcVar1)(5);
          puVar20 = puVar19 + 8;
LAB_1802e3adc:
          puVar21 = puVar20;
          ppuVar23 = ppuVar15;
LAB_1802e3adf:
          puVar7 = ppuVar23[2];
          *(undefined8 *)(puVar21 + -8) = 0x1802e3aed;
          FUN_180029840(puVar21 + 0x70,ppuVar15,puVar7);
          puVar22 = puVar21;
          goto LAB_1802e3af7;
        }
        puVar4 = puVar7 + 5;
      }
      thunk_FUN_1803d64e0(puVar17,puVar4);
    }
    local_168 = *ppuVar6;
    uStack_160 = (ulonglong)ppuVar6[1];
    local_158 = (ulonglong **)ppuVar6[2];
    local_150 = ppuVar6[3];
    ppuVar6[2] = (ulonglong *)0x0;
    ppuVar6[3] = (ulonglong *)0xf;
    *(undefined1 *)ppuVar6 = 0;
  }
  uVar28 = uStack_160;
  local_1a8 = local_168;
  FUN_18000f890(local_78);
  puVar7 = (ulonglong *)FUN_180281480(local_78,iVar26);
  if (&local_148 != puVar7) {
    local_148 = *puVar7;
    uStack_140 = puVar7[1];
    local_138 = (ulonglong **)puVar7[2];
    local_130 = puVar7[3];
    puVar7[2] = 0;
    puVar7[3] = 0xf;
    *(undefined1 *)puVar7 = 0;
  }
  uVar14 = uStack_140;
  uVar16 = local_148;
  FUN_18000f890(local_78);
  local_128 = FUN_180280fe0(iVar26,ppuVar23);
  puVar22 = auStack_1d8;
  *param_1 = 0;
  param_1[1] = 0;
  *param_1 = local_198;
  param_1[1] = uVar25;
  param_1[2] = local_188[2];
  param_1[3] = local_188[3];
  ppuVar23 = (ulonglong **)0x0;
  local_188[0] = local_188[0] & 0xffffffffffffff00;
  param_1[4] = (ulonglong)local_1a8;
  param_1[5] = uVar28;
  param_1[6] = (ulonglong)local_158;
  param_1[7] = (ulonglong)local_150;
  local_168 = (ulonglong *)((ulonglong)local_168 & 0xffffffffffffff00);
  param_1[8] = uVar16;
  param_1[9] = uVar14;
  param_1[10] = (ulonglong)local_138;
  param_1[0xb] = local_130;
  *(uint *)(param_1 + 0xc) = local_128;
LAB_1802e3f6c:
  *(ulonglong ***)(puVar22 + 0x60) = ppuVar23;
  local_158 = ppuVar23;
  local_138 = ppuVar23;
LAB_1802e3f79:
  local_148 = local_148 & 0xffffffffffffff00;
  *(undefined8 *)(puVar22 + 0x68) = 0xf;
  local_130 = 0xf;
  local_150 = (ulonglong *)0xf;
  *(undefined8 *)(puVar22 + -8) = 0x1802e3f9b;
  FUN_18000f890(&local_148);
  *(undefined8 *)(puVar22 + -8) = 0x1802e3fa5;
  FUN_18000f890(puVar22 + 0x70);
  *(undefined8 *)(puVar22 + -8) = 0x1802e3faf;
  FUN_18000f890(puVar22 + 0x50);
  *(undefined8 *)(puVar22 + -8) = 0x1802e3fc1;
  return param_1;
}



/* ===== 1802e3fe0 FUN_1802e3fe0 ===== */

bool FUN_1802e3fe0(void)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  if (DAT_1809f590c == 1) {
    if (DAT_1809f5900 == 0) {
      iVar3 = DAT_18092149c;
    }
    else {
      iVar3 = DAT_1809214a4;
      if (DAT_1809214a4 < 0) {
        iVar3 = DAT_18092149c;
      }
    }
    if (iVar3 == 0) {
      iVar3 = DAT_1809f5914;
      if (DAT_1809f5910 != 0) {
        iVar3 = DAT_1809f5910;
      }
      if (0 < iVar3) {
        piVar2 = &DAT_18092174c;
        do {
          if ((*piVar2 == iVar3) && (piVar2[1] == DAT_1809f5900)) goto LAB_1802e42e9;
          piVar2 = piVar2 + 0x68;
        } while (piVar2 != &DAT_180931b4c);
        piVar2 = &DAT_18092174c;
        while ((*piVar2 != iVar3 || (-1 < piVar2[1]))) {
          piVar2 = piVar2 + 0x68;
          if (piVar2 == &DAT_180931b4c) {
            return false;
          }
        }
LAB_1802e42e9:
        if (piVar2[2] != 0) {
          return true;
        }
        if ((char)piVar2[5] != '\0') {
          return true;
        }
        if ((char)piVar2[7] != '\0') {
          return true;
        }
        if (piVar2[0x62] != 0) {
          return true;
        }
        piVar4 = piVar2 + 0x38;
        if (piVar2 != piVar2 + 0x2a) {
          do {
            if (*piVar4 != 0) {
              return true;
            }
            piVar4 = piVar4 + 7;
          } while (piVar4 != piVar2 + 0x62);
        }
      }
      return false;
    }
  }
  else if (DAT_1809f590c == 2) {
    if (DAT_1809f5900 == 0) {
      iVar3 = DAT_1809214a0;
    }
    else {
      iVar3 = DAT_1809214a8;
      if (DAT_1809214a8 < 0) {
        iVar3 = DAT_1809214a0;
      }
    }
    if (iVar3 == 0) {
      iVar3 = DAT_1809f5914;
      if (DAT_1809f5910 != 0) {
        iVar3 = DAT_1809f5910;
      }
      if (iVar3 < 1) {
        return false;
      }
      piVar2 = &DAT_18092174c;
      do {
        if ((*piVar2 == iVar3) && (piVar2[1] == DAT_1809f5900)) goto LAB_1802e41f9;
        piVar2 = piVar2 + 0x68;
      } while (piVar2 != &DAT_180931b4c);
      piVar2 = &DAT_18092174c;
      while ((*piVar2 != iVar3 || (-1 < piVar2[1]))) {
        piVar2 = piVar2 + 0x68;
        if (piVar2 == &DAT_180931b4c) {
          return false;
        }
      }
LAB_1802e41f9:
      if ((((piVar2[2] == 0) && ((char)piVar2[5] == '\0')) && ((char)piVar2[7] == '\0')) &&
         (piVar2[0x62] == 0)) {
        piVar4 = piVar2 + 0x38;
        if (piVar2 == piVar2 + 0x2a) {
          return false;
        }
        while (*piVar4 == 0) {
          piVar4 = piVar4 + 7;
          if (piVar4 == piVar2 + 0x62) {
            return false;
          }
        }
      }
    }
  }
  else {
    if (DAT_1809f590c == 4) {
      bVar1 = false;
      if (DAT_1809f5900 == 0) {
        piVar2 = &DAT_1809216bc;
        piVar4 = &DAT_1809216d0;
      }
      else {
        piVar2 = &DAT_1809216d0;
        piVar4 = &DAT_1809216e4;
      }
      do {
        iVar3 = *piVar2;
        piVar2 = piVar2 + 1;
        bVar1 = (bool)(bVar1 | iVar3 != 0);
      } while (piVar2 != piVar4);
      iVar3 = DAT_1809214b0;
      if (DAT_1809f5900 == 0) {
        iVar3 = DAT_1809214ac;
      }
      return bVar1 || iVar3 != 0;
    }
    if (DAT_1809f590c == 5) {
      return DAT_1809216e4 != 0;
    }
    if (DAT_1809f590c == 6) {
      return DAT_1809216e8 != 0;
    }
    if (DAT_1809f590c - 1U < 2) {
      iVar3 = DAT_1809f5914;
      if (DAT_1809f5910 != 0) {
        iVar3 = DAT_1809f5910;
      }
    }
    else {
      if ((DAT_1809f590c != 0) && (DAT_1809f590c != 3)) {
        return false;
      }
      iVar3 = DAT_1809f5910;
    }
    if (iVar3 < 1) {
      return false;
    }
    piVar2 = &DAT_18092174c;
    do {
      if ((*piVar2 == iVar3) && (piVar2[1] == DAT_1809f5900)) goto LAB_1802e4099;
      piVar2 = piVar2 + 0x68;
    } while (piVar2 != &DAT_180931b4c);
    piVar2 = &DAT_18092174c;
    while ((*piVar2 != iVar3 || (-1 < piVar2[1]))) {
      piVar2 = piVar2 + 0x68;
      if (piVar2 == &DAT_180931b4c) {
        return false;
      }
    }
LAB_1802e4099:
    if ((((piVar2[2] == 0) && ((char)piVar2[5] == '\0')) && ((char)piVar2[7] == '\0')) &&
       (piVar2[0x62] == 0)) {
      piVar4 = piVar2 + 0x38;
      if (piVar2 == piVar2 + 0x2a) {
        return false;
      }
      while (*piVar4 == 0) {
        piVar4 = piVar4 + 7;
        if (piVar4 == piVar2 + 0x62) {
          return false;
        }
      }
    }
  }
  return true;
}



/* ===== 1802e4340 FUN_1802e4340 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802e4340(char param_1)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  float fVar4;
  undefined4 uVar5;
  uint uVar6;
  longlong *plVar7;
  char ***pppcVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  bool bVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auStack_1f8 [32];
  undefined8 local_1d8;
  char ***local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  ulonglong local_1b8;
  undefined4 local_1b0;
  undefined4 local_1a8;
  float local_198;
  float local_194;
  float local_190;
  float local_18c;
  char **local_188;
  longlong lStack_180;
  undefined4 local_178;
  undefined4 local_174;
  undefined8 local_170;
  undefined1 local_168 [16];
  char ***local_158 [3];
  ulonglong local_140;
  char ***local_138 [3];
  ulonglong local_120;
  undefined1 local_118 [16];
  longlong local_108;
  ulonglong local_e8;
  
  local_e8 = DAT_180919500 ^ (ulonglong)auStack_1f8;
  FUN_1802e3580(local_158);
  lVar11 = DAT_180ca0a50;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  uVar5 = DAT_1808acd08;
  fVar14 = DAT_1808ac404;
  lVar2 = *(longlong *)(lVar11 + 0x14f8);
  lVar3 = *(longlong *)(lVar2 + 0x2c8);
  lVar10 = DAT_181107a08;
  if (DAT_181107a18 == 0) {
    lVar9 = DAT_181107a08;
    if (DAT_181107a08 == 0) {
      lVar9 = *(longlong *)(lVar11 + 0x11f0);
      goto LAB_1802e4402;
    }
  }
  else {
    lVar9 = DAT_181107a18;
    if (DAT_181107a08 == 0) {
LAB_1802e4402:
      lVar10 = *(longlong *)(lVar11 + 0x11f0);
    }
  }
  if (param_1 == '\0') {
    fVar15 = DAT_1808ac934;
    fVar16 = DAT_1808ac8e4;
  }
  else {
    fVar15 = DAT_1808ac9e4;
    fVar16 = DAT_1808ac9ac;
  }
  local_1d0 = (char ***)local_158;
  if (0xf < local_140) {
    local_1d0 = local_158[0];
  }
  lVar11 = 0;
  local_1a8 = 0;
  local_1b8 = 0;
  local_1c0 = 0;
  local_1c8 = (char ***)0x0;
  local_1d8 = (undefined8 *)((ulonglong)local_1d8._4_4_ << 0x20);
  FUN_18040a2f0(&local_198,lVar9,fVar15 * DAT_1808ac404,DAT_1808acd08);
  if (DAT_1808acbf8 < local_198) {
    fVar15 = DAT_1808ac900;
  }
  fVar15 = fVar15 * fVar14;
  fVar16 = fVar16 * fVar14;
  local_1d0 = (char ***)local_158;
  if (0xf < local_140) {
    local_1d0 = local_158[0];
  }
  local_1a8 = 0;
  local_1b8 = 0;
  local_1c0 = 0;
  local_1c8 = (char ***)0x0;
  local_1d8 = (undefined8 *)((ulonglong)local_1d8 & 0xffffffff00000000);
  FUN_18040a2f0(&local_190,lVar9,fVar15,uVar5);
  local_1d0 = (char ***)local_138;
  if (0xf < local_120) {
    local_1d0 = local_138[0];
  }
  local_1a8 = 0;
  local_1b8 = 0;
  local_1c0 = 0;
  local_1c8 = (char ***)0x0;
  local_1d8 = (undefined8 *)((ulonglong)local_1d8 & 0xffffffff00000000);
  FUN_18040a2f0(&local_198,lVar10,fVar16,uVar5);
  if (local_108 == 0) {
    bVar12 = false;
  }
  else {
    plVar7 = (longlong *)FUN_1800e77d0(local_168,local_118);
    lVar11 = *plVar7;
    bVar12 = lVar11 != 0;
    if (lVar11 != 0) {
      if (param_1 == '\0') {
        fVar14 = DAT_1808aca54 * _DAT_1808ac3e8;
      }
      else {
        fVar14 = DAT_1808acad8 * _DAT_1808ac3e8;
      }
      goto LAB_1802e4548;
    }
  }
  fVar14 = 0.0;
LAB_1802e4548:
  fVar4 = DAT_1808ac1f4;
  fVar17 = fVar16 + fVar15 + DAT_1808ac540;
  if (bVar12) {
    fVar13 = fVar14 + DAT_1808ac864;
  }
  else {
    fVar13 = 0.0;
  }
  fVar1 = *(float *)(lVar2 + 0x11c);
  if (local_198 <= local_190) {
    local_198 = local_190;
  }
  fVar13 = (float)FUN_18053f0d0((*(float *)(lVar2 + 0x30) - (local_198 + fVar13)) * DAT_1808ac1f4 +
                                *(float *)(lVar2 + 0x28));
  if (bVar12) {
    local_178 = 0x3f800000;
    local_174 = 0x3f800000;
    local_170 = 0;
    local_190 = fVar13 + fVar14;
    local_18c = fVar1 + fVar17;
    local_188 = (char **)0x0;
    local_1c8 = (char ***)
                (CONCAT44(local_1c8._4_4_,
                          (int)(longlong)(*(float *)(DAT_180ca0a50 + 0xc9c) * DAT_1808acb94 + fVar4)
                          << 0x18) | 0xffffff);
    local_1d0 = (char ***)&local_178;
    local_1d8 = &local_170;
    local_198 = fVar13;
    local_194 = fVar1;
    lStack_180 = lVar11;
    FUN_1803fea90(lVar3,&local_188,&local_198,&local_190);
    fVar13 = fVar14 + DAT_1808ac864 + fVar13;
  }
  pppcVar8 = (char ***)local_158;
  if (0xf < local_140) {
    pppcVar8 = local_158[0];
  }
  uVar6 = (int)(longlong)
               ((float)(DAT_180960ec8 >> 0x18) * *(float *)(DAT_180ca0a50 + 0xc9c) + fVar4) << 0x18;
  if (((uVar6 != 0) && (pppcVar8 != (char ***)0x0)) && (*(char *)pppcVar8 != '\0')) {
    if (lVar9 == 0) {
      lVar9 = *(longlong *)(*(longlong *)(lVar3 + 0x38) + 0x18);
    }
    fVar14 = fVar15;
    if (fVar15 == 0.0) {
      fVar14 = *(float *)(*(longlong *)(lVar3 + 0x38) + 0x20);
    }
    local_188 = *(char ***)(lVar3 + 0x60);
    lStack_180 = *(longlong *)(lVar3 + 0x68);
    local_1b0 = 0;
    local_1b8 = local_1b8 & 0xffffffff00000000;
    local_1c0 = 0;
    local_1d0 = &local_188;
    local_1d8 = (undefined8 *)CONCAT44(local_1d8._4_4_,DAT_180960ec8 & 0xffffff | uVar6);
    local_1c8 = pppcVar8;
    local_198 = fVar13;
    local_194 = fVar1;
    FUN_18040a900(lVar9,lVar3,fVar14,&local_198);
  }
  pppcVar8 = (char ***)local_138;
  if (0xf < local_120) {
    pppcVar8 = local_138[0];
  }
  uVar6 = (int)(longlong)
               ((float)(DAT_180960ec0 >> 0x18) * *(float *)(DAT_180ca0a50 + 0xc9c) + fVar4) << 0x18;
  local_194 = fVar1 + fVar15 + DAT_1808ac540;
  if (((uVar6 != 0) && (pppcVar8 != (char ***)0x0)) && (*(char *)pppcVar8 != '\0')) {
    if (lVar10 == 0) {
      lVar10 = *(longlong *)(*(longlong *)(lVar3 + 0x38) + 0x18);
    }
    if (fVar16 == 0.0) {
      fVar16 = *(float *)(*(longlong *)(lVar3 + 0x38) + 0x20);
    }
    local_188 = *(char ***)(lVar3 + 0x60);
    lStack_180 = *(longlong *)(lVar3 + 0x68);
    local_1b0 = 0;
    local_1b8 = local_1b8 & 0xffffffff00000000;
    local_1c0 = 0;
    local_1d0 = &local_188;
    local_1d8 = (undefined8 *)CONCAT44(local_1d8._4_4_,DAT_180960ec0 & 0xffffff | uVar6);
    local_1c8 = pppcVar8;
    local_198 = fVar13;
    FUN_18040a900(lVar10,lVar3,fVar16,&local_198);
  }
  local_198 = 1.0;
  local_194 = fVar17;
  FUN_1804174f0(&local_198);
  FUN_18000f890(local_118);
  FUN_18000f890(local_138);
  FUN_18000f890(local_158);
  return;
}



/* ===== 1802e48d0 FUN_1802e48d0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802e48d0(char param_1)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  undefined1 local_88 [32];
  undefined1 local_68 [32];
  undefined1 local_48 [32];
  undefined4 local_28;
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_c8;
  FUN_1802e3580(local_88);
  lVar3 = DAT_180ca0a50;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  lVar1 = *(longlong *)(lVar3 + 0x14f8);
  if (param_1 == '\0') {
    fVar7 = DAT_1808acbb4;
  }
  else {
    fVar7 = DAT_1808acc08;
  }
  fVar5 = *(float *)(lVar1 + 0x30) * DAT_1808ac1f4 + *(float *)(lVar1 + 0x28);
  fVar4 = *(float *)(lVar1 + 0x11c);
  fVar6 = DAT_1808ac1f4;
  uVar2 = FUN_1802d47f0(local_28,DAT_1808ac34c);
  local_90 = fVar7 * fVar6 + fVar5;
  local_8c = fVar4 + DAT_1808ac750;
  local_98 = fVar5 - fVar7 * fVar6;
  local_a0 = 0;
  local_a8 = 0;
  local_94 = fVar4;
  FUN_1803fe590(*(undefined8 *)(lVar1 + 0x2c8),&local_98,&local_90,
                (int)(longlong)((float)(uVar2 >> 0x18) * *(float *)(lVar3 + 0xc9c) + fVar6) << 0x18
                | uVar2 & 0xffffff);
  local_98 = 1.0;
  local_94 = 5.0;
  FUN_1804174f0(&local_98);
  *(float *)(lVar1 + 0x11c) = *(float *)(lVar1 + 0x11c) + DAT_1808ac864;
  FUN_18000f890(local_48);
  FUN_18000f890(local_68);
  FUN_18000f890(local_88);
  return;
}



/* ===== 1802e4a60 FUN_1802e4a60 ===== */

undefined1
FUN_1802e4a60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined1 param_5,byte *param_6,undefined4 param_7)

{
  byte bVar1;
  byte *pbVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  byte *pbVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined8 in_stack_ffffffffffffffb8;
  undefined4 uVar8;
  undefined8 *puVar9;
  undefined8 local_28;
  
  uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
  uVar7 = FUN_18053fc00(DAT_1808ac9ec);
  puVar9 = &local_28;
  local_28 = CONCAT44(uVar7,uVar7);
  uVar3 = FUN_1802d59d0(param_1,param_2,param_3,param_4,CONCAT44(uVar8,DAT_1808ac8d4),puVar9,param_5
                        ,param_7);
  pbVar2 = param_6;
  uVar7 = (undefined4)((ulonglong)puVar9 >> 0x20);
  DAT_181107498 = *(undefined4 *)(DAT_180ca0a50 + 0x1efc);
  bVar1 = *param_6;
  uVar6 = ~*(uint *)(DAT_180ca0a50 + 0x1ee8);
  while (bVar1 != 0) {
    pbVar5 = param_6 + 1;
    if (((bVar1 == 0x23) && (*pbVar5 == 0x23)) && (param_6[2] == 0x23)) {
      pbVar5 = param_6 + 3;
      uVar6 = ~*(uint *)(DAT_180ca0a50 + 0x1ee8);
    }
    else {
      uVar6 = uVar6 >> 8 ^
              *(uint *)(&DAT_1806c25c0 + ((ulonglong)uVar6 & 0xff ^ (ulonglong)bVar1) * 4);
    }
    param_6 = pbVar5;
    bVar1 = *pbVar5;
  }
  param_6 = *(byte **)(DAT_180ca0a50 + 0x1efc);
  local_28 = *(undefined8 *)(DAT_180ca0a50 + 0x1ef4);
  uVar4 = FUN_1803dd930(0);
  FUN_1802b56a0(pbVar2,0,uVar4,&local_28,&param_6,CONCAT44(uVar7,~uVar6));
  return uVar3;
}



/* ===== 1802e4bc0 FUN_1802e4bc0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1802e4bc0(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined1 auStack_a8 [40];
  undefined8 *local_80;
  undefined1 local_78 [32];
  undefined1 local_58 [32];
  undefined1 local_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_a8;
  if (DAT_1809f590c - 1U < 2) {
    uVar6 = (ulonglong)DAT_1809f5914;
    if (DAT_1809f5910 != 0) {
      uVar6 = (ulonglong)DAT_1809f5910;
    }
  }
  else {
    if ((DAT_1809f590c != 0) && (DAT_1809f590c != 3)) goto LAB_1802e4cce;
    uVar6 = (ulonglong)DAT_1809f5910;
  }
  if (((int)uVar6 != 0) && (local_80 = param_1, lVar4 = FUN_180280c60(uVar6), lVar4 != 0)) {
    iVar1 = *(int *)(lVar4 + 0x48);
    if (iVar1 == 2) {
      uVar5 = 2;
    }
    else if (iVar1 == 3) {
      uVar5 = 4;
    }
    else if (iVar1 == 4) {
      uVar5 = 3;
    }
    else if (iVar1 == 5) {
      uVar5 = 6;
    }
    else if (iVar1 == 6) {
      uVar5 = 5;
    }
    else {
      uVar5 = 1;
    }
    lVar4 = FUN_1802d6d50(local_78,uVar5,uVar6 & 0xffffffff);
    uVar5 = *(undefined8 *)(lVar4 + 0x40);
    uVar2 = *(undefined8 *)(lVar4 + 0x50);
    uVar3 = *(undefined8 *)(lVar4 + 0x48);
    *(undefined8 *)(lVar4 + 0x50) = 0;
    *(undefined8 *)(lVar4 + 0x48) = 0;
    *(undefined8 *)(lVar4 + 0x40) = 0;
    *param_1 = uVar5;
    param_1[1] = uVar3;
    param_1[2] = uVar2;
    FUN_1800288b0(local_38);
    FUN_18000f890(local_58);
    FUN_18000f890(local_78);
    return param_1;
  }
LAB_1802e4cce:
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return param_1;
}



/* ===== 1802e4d00 FUN_1802e4d00 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1
FUN_1802e4d00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  float fVar1;
  longlong lVar2;
  code *pcVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 uVar6;
  char cVar7;
  ulonglong *puVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  char *pcVar11;
  undefined8 uVar12;
  longlong lVar13;
  longlong lVar14;
  char *pcVar15;
  ulonglong uVar16;
  longlong *plVar17;
  undefined8 unaff_RSI;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  float fVar18;
  undefined8 uVar19;
  undefined4 unaff_XMM6_Da;
  float fVar20;
  undefined4 unaff_XMM6_Db;
  undefined4 unaff_XMM6_Dc;
  undefined4 unaff_XMM6_Dd;
  undefined4 unaff_XMM7_Da;
  float fVar21;
  undefined4 unaff_XMM7_Db;
  undefined4 unaff_XMM7_Dc;
  undefined4 unaff_XMM7_Dd;
  undefined4 unaff_XMM8_Da;
  undefined4 unaff_XMM8_Db;
  undefined4 unaff_XMM8_Dc;
  undefined4 unaff_XMM8_Dd;
  undefined4 unaff_XMM9_Da;
  undefined4 unaff_XMM9_Db;
  undefined4 unaff_XMM9_Dc;
  undefined4 unaff_XMM9_Dd;
  undefined1 auStack_118 [8];
  undefined1 auStack_110 [32];
  longlong local_f0;
  longlong local_e8;
  char *local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  ulonglong uStack_c0;
  ulonglong local_b8;
  ulonglong uStack_b0;
  ulonglong local_a8;
  ulonglong uStack_a0;
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  undefined1 local_58 [32];
  undefined1 local_38 [32];
  ulonglong local_18 [2];
  
  local_18[0] = DAT_180919500 ^ (ulonglong)auStack_118;
  uStack_d0 = 0;
  local_c8 = 0;
  uVar16 = 0xf;
  uStack_c0 = 0xf;
  local_d8 = (char *)0x0;
  if (DAT_1809f597c < 0) {
    local_d8 = (char *)FUN_18000fb70(0xb0);
    uVar12 = s_var_finalNow___panel_Data___wlFi_18075fdc0._8_8_;
    local_c8 = 0xa4;
    uStack_c0 = 0xaf;
    *(undefined8 *)local_d8 = s_var_finalNow___panel_Data___wlFi_18075fdc0._0_8_;
    *(undefined8 *)(local_d8 + 8) = uVar12;
    uVar12 = s_var_finalNow___panel_Data___wlFi_18075fdc0._24_8_;
    *(undefined8 *)(local_d8 + 0x10) = s_var_finalNow___panel_Data___wlFi_18075fdc0._16_8_;
    *(undefined8 *)(local_d8 + 0x18) = uVar12;
    uVar12 = s_var_finalNow___panel_Data___wlFi_18075fdc0._40_8_;
    *(undefined8 *)(local_d8 + 0x20) = s_var_finalNow___panel_Data___wlFi_18075fdc0._32_8_;
    *(undefined8 *)(local_d8 + 0x28) = uVar12;
    uVar12 = s_var_finalNow___panel_Data___wlFi_18075fdc0._56_8_;
    *(undefined8 *)(local_d8 + 0x30) = s_var_finalNow___panel_Data___wlFi_18075fdc0._48_8_;
    *(undefined8 *)(local_d8 + 0x38) = uVar12;
    uVar12 = s_var_finalNow___panel_Data___wlFi_18075fdc0._72_8_;
    *(undefined8 *)(local_d8 + 0x40) = s_var_finalNow___panel_Data___wlFi_18075fdc0._64_8_;
    *(undefined8 *)(local_d8 + 0x48) = uVar12;
    uVar12 = s_var_finalNow___panel_Data___wlFi_18075fdc0._88_8_;
    *(undefined8 *)(local_d8 + 0x50) = s_var_finalNow___panel_Data___wlFi_18075fdc0._80_8_;
    *(undefined8 *)(local_d8 + 0x58) = uVar12;
    uVar12 = s_var_finalNow___panel_Data___wlFi_18075fdc0._104_8_;
    *(undefined8 *)(local_d8 + 0x60) = s_var_finalNow___panel_Data___wlFi_18075fdc0._96_8_;
    *(undefined8 *)(local_d8 + 0x68) = uVar12;
    uVar12 = s_var_finalNow___panel_Data___wlFi_18075fdc0._120_8_;
    *(undefined8 *)(local_d8 + 0x70) = s_var_finalNow___panel_Data___wlFi_18075fdc0._112_8_;
    *(undefined8 *)(local_d8 + 0x78) = uVar12;
    uVar12 = s_var_finalNow___panel_Data___wlFi_18075fdc0._136_8_;
    *(undefined8 *)(local_d8 + 0x80) = s_var_finalNow___panel_Data___wlFi_18075fdc0._128_8_;
    *(undefined8 *)(local_d8 + 0x88) = uVar12;
    uVar12 = s_var_finalNow___panel_Data___wlFi_18075fdc0._152_8_;
    *(undefined8 *)(local_d8 + 0x90) = s_var_finalNow___panel_Data___wlFi_18075fdc0._144_8_;
    *(undefined8 *)(local_d8 + 0x98) = uVar12;
    *(undefined4 *)(local_d8 + 0xa0) = s_var_finalNow___panel_Data___wlFi_18075fdc0._160_4_;
    local_d8[0xa4] = '\0';
LAB_1802e4f75:
    FUN_1800e39f0("weapon",&local_d8);
    uVar6 = FUN_1800e39f0("weapon_big",&local_d8);
    uVar16 = uStack_c0;
  }
  else {
    FUN_1802e4bc0(&local_f0);
    if (DAT_1809f597c < (int)(local_e8 - local_f0 >> 5)) {
      uVar12 = FUN_180066a20(local_78,&DAT_18075d6fc,(longlong)DAT_1809f597c * 0x20 + local_f0);
      FUN_1802d78d0(local_98,uVar12);
      FUN_18000f890(local_78);
      uVar12 = FUN_180066a20(local_38,"if (panel.TransitionToCamera) { panel.TransitionToCamera(",
                             local_98);
      puVar8 = (ulonglong *)FUN_1800134a0(uVar12,", 0.75); panel.Data().wlCamera = ",0x21);
      local_b8 = *puVar8;
      uStack_b0 = puVar8[1];
      local_a8 = puVar8[2];
      uStack_a0 = puVar8[3];
      puVar8[2] = 0;
      puVar8[3] = 0xf;
      *(undefined1 *)puVar8 = 0;
      uVar12 = FUN_1800667a0(local_58,&local_b8,local_98);
      param_3 = 3;
      puVar9 = (undefined8 *)FUN_1800134a0(uVar12,&DAT_18075fe94,3);
      local_d8 = (char *)*puVar9;
      uStack_d0 = puVar9[1];
      local_c8 = puVar9[2];
      uStack_c0 = puVar9[3];
      puVar9[2] = 0;
      puVar9[3] = 0xf;
      *(undefined1 *)puVar9 = 0;
      FUN_18000f890(local_58);
      if (0xf < uStack_a0) {
        pcVar15 = (char *)(uStack_a0 + 1);
        uVar10 = local_b8;
        if ((char *)0xfff < pcVar15) {
          uVar10 = *(ulonglong *)(local_b8 - 8);
          if (0x1f < (local_b8 - uVar10) - 8) {
            pcVar3 = (code *)swi(0x29);
            (*pcVar3)(5);
            plVar17 = (longlong *)auStack_110;
            goto LAB_1802e4ff9;
          }
          pcVar15 = (char *)(uStack_a0 + 0x28);
        }
        thunk_FUN_1803d64e0(uVar10,pcVar15);
      }
      local_a8 = 0;
      uStack_a0 = 0xf;
      local_b8 = local_b8 & 0xffffffffffffff00;
      FUN_18000f890(local_38);
      FUN_18000f890(local_98);
      FUN_1800288b0(&local_f0);
      goto LAB_1802e4f75;
    }
    uVar6 = FUN_1800288b0(&local_f0);
  }
  plVar17 = (longlong *)auStack_118;
  if (0xf < uVar16) {
    pcVar15 = (char *)(uVar16 + 1);
    pcVar11 = local_d8;
    if ((char *)0xfff < pcVar15) {
      pcVar11 = *(char **)(local_d8 + -8);
      if ((char *)0x1f < local_d8 + (-8 - (longlong)pcVar11)) {
LAB_1802e4ff9:
        uVar12 = 5;
        pcVar3 = (code *)swi(0x29);
        uVar19 = (*pcVar3)(5);
        plVar17[4] = uVar16;
        *plVar17 = (longlong)local_18;
        plVar17[-1] = unaff_RSI;
        plVar17[-2] = 0;
        plVar17[-3] = unaff_R14;
        plVar17[-4] = unaff_R15;
        *(undefined4 *)(plVar17 + -6) = unaff_XMM6_Da;
        *(undefined4 *)((longlong)plVar17 + -0x2c) = unaff_XMM6_Db;
        *(undefined4 *)(plVar17 + -5) = unaff_XMM6_Dc;
        *(undefined4 *)((longlong)plVar17 + -0x24) = unaff_XMM6_Dd;
        *(undefined4 *)(plVar17 + -8) = unaff_XMM7_Da;
        *(undefined4 *)((longlong)plVar17 + -0x3c) = unaff_XMM7_Db;
        *(undefined4 *)(plVar17 + -7) = unaff_XMM7_Dc;
        *(undefined4 *)((longlong)plVar17 + -0x34) = unaff_XMM7_Dd;
        *(undefined4 *)(plVar17 + -10) = unaff_XMM8_Da;
        *(undefined4 *)((longlong)plVar17 + -0x4c) = unaff_XMM8_Db;
        *(undefined4 *)(plVar17 + -9) = unaff_XMM8_Dc;
        *(undefined4 *)((longlong)plVar17 + -0x44) = unaff_XMM8_Dd;
        *(undefined4 *)(plVar17 + -0xc) = unaff_XMM9_Da;
        *(undefined4 *)((longlong)plVar17 + -0x5c) = unaff_XMM9_Db;
        *(undefined4 *)(plVar17 + -0xb) = unaff_XMM9_Dc;
        *(undefined4 *)((longlong)plVar17 + -0x54) = unaff_XMM9_Dd;
        plVar17[-0xe] = DAT_180919500 ^ (ulonglong)(plVar17 + -0x2e);
        plVar17[-0x2f] = 0x1802e504d;
        FUN_1802b4fe0(uVar19,param_3,param_4);
        lVar14 = DAT_180ca0a50;
        *(uint *)(DAT_180ca0a50 + 0x1f38) = *(uint *)(DAT_180ca0a50 + 0x1f38) | 2;
        *(int *)(lVar14 + 0x1f58) = (int)plVar17[6];
        *(undefined4 *)(lVar14 + 0x1f5c) = 0;
        *(undefined4 *)(lVar14 + 8000) = 1;
        *(undefined4 *)(plVar17 + -0x24) = 0x40e00000;
        *(undefined4 *)((longlong)plVar17 + -0x11c) = 0x40e00000;
        plVar17[-0x2f] = 0x1802e509c;
        cVar7 = FUN_1802b5260(uVar12,plVar17 + -0x24);
        uVar6 = 0;
        if (cVar7 != '\0') {
          *(undefined1 *)(plVar17 + -0x20) = DAT_1809f72e0;
          *(undefined1 *)((longlong)plVar17 + -0xff) = DAT_1809f72e1;
          *(undefined1 *)((longlong)plVar17 + -0xfe) = DAT_1809f72e2;
          *(undefined4 *)((longlong)plVar17 + -0xfc) = DAT_1809f72e4;
          *(undefined4 *)(plVar17 + -0x1f) = DAT_1809f72e8;
          *(undefined4 *)((longlong)plVar17 + -0xf4) = DAT_1809f72ec;
          plVar17[-0x1e] = CONCAT44(DAT_1809f72f4,DAT_1809f72f0);
          plVar17[-0x1d] = CONCAT44(DAT_1809f72fc,DAT_1809f72f8);
          *(undefined4 *)(plVar17 + -0x1c) = DAT_1809f7300;
          *(undefined4 *)((longlong)plVar17 + -0xdc) = DAT_1809f7304;
          plVar17[-0x2f] = 0x1802e511c;
          FUN_180024b50(plVar17 + -0x1b,&DAT_1809f7308);
          plVar17[-0x17] = _DAT_1809f5b40;
          plVar17[-0x16] = _DAT_1809f5b48;
          plVar17[-0x15] = DAT_1809f5b50;
          plVar17[-0x14] = _DAT_1808ad2d0;
          plVar17[-0x13] = _UNK_1808ad2d8;
          *(undefined4 *)(plVar17 + -0x12) = 0;
          *(undefined2 *)((longlong)plVar17 + -0x8c) = 0;
          plVar17[-0x11] = 0;
          *(undefined4 *)(plVar17 + -0x10) = 0;
          *(undefined1 *)((longlong)plVar17 + -0x7c) = 0;
          if (DAT_181107158 == DAT_181107160) {
            plVar17[-0x2f] = 0x1802e518d;
            FUN_180354940(DAT_181107158,DAT_181107158,plVar17 + -0x20);
          }
          else {
            plVar17[-0x2f] = 0x1802e5173;
            FUN_1803598d0(DAT_181107158,plVar17 + -0x20);
            DAT_181107158 = DAT_181107158 + 0x88;
          }
          plVar17[-0x2f] = 0x1802e5197;
          FUN_18000f890(plVar17 + -0x1b);
          plVar17[-0x2f] = 0x1802e519f;
          FUN_180312140(pcVar15);
          lVar4 = DAT_180ca0a50;
          *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
          uVar5 = DAT_180960ec8;
          lVar14 = *(longlong *)(lVar4 + 0x14f8);
          lVar2 = *(longlong *)(lVar14 + 0x2c8);
          fVar1 = *(float *)(lVar14 + 0x118);
          fVar20 = *(float *)(lVar14 + 0x11c);
          if ((*(longlong *)(lVar14 + 0x1c8) != 0) ||
             (lVar13 = 0x280, *(longlong *)(lVar4 + 0x2360) != 0)) {
            lVar13 = 0x250;
          }
          fVar21 = *(float *)(lVar14 + lVar13) - fVar1;
          if ((pcVar15 != (char *)0x0) && (*pcVar15 != '\0')) {
            *(float *)(plVar17 + -0x24) = fVar1 + DAT_1808ac7ec;
            plVar17[-0x2f] = 0x1802e5233;
            fVar18 = (float)FUN_18053f0d0();
            *(float *)((longlong)plVar17 + -0x11c) = fVar18 + fVar20;
            lVar14 = DAT_181107a18;
            if ((DAT_181107a18 == 0) && (lVar14 = DAT_181107a08, DAT_181107a08 == 0)) {
              lVar14 = *(longlong *)(lVar4 + 0x11f0);
            }
            if ((uVar5 & 0xff000000) != 0) {
              if (lVar14 == 0) {
                lVar14 = *(longlong *)(*(longlong *)(lVar2 + 0x38) + 0x18);
              }
              lVar4 = *(longlong *)(lVar2 + 0x68);
              plVar17[-0x23] = *(longlong *)(lVar2 + 0x60);
              plVar17[-0x22] = lVar4;
              *(undefined4 *)(plVar17 + -0x25) = 0;
              *(undefined4 *)(plVar17 + -0x26) = 0;
              plVar17[-0x27] = 0;
              plVar17[-0x28] = (longlong)pcVar15;
              plVar17[-0x29] = (longlong)(plVar17 + -0x23);
              *(uint *)(plVar17 + -0x2a) = uVar5;
              plVar17[-0x2f] = 0x1802e52b5;
              FUN_18040a900(lVar14,lVar2,DAT_1808ac940,plVar17 + -0x24);
            }
            *(float *)(plVar17 + -0x24) = fVar21;
            *(undefined4 *)((longlong)plVar17 + -0x11c) = 0x41c88b44;
            plVar17[-0x2f] = 0x1802e52cd;
            FUN_1804174f0(plVar17 + -0x24);
            fVar20 = fVar20 + _DAT_1808aca08;
          }
          *(undefined2 *)(plVar17 + -0x20) = 0x100;
          *(undefined1 *)((longlong)plVar17 + -0xfe) = 1;
          *(undefined4 *)((longlong)plVar17 + -0xfc) = DAT_1808ac8e4;
          *(undefined4 *)(plVar17 + -0x1f) = 0;
          *(undefined4 *)((longlong)plVar17 + -0xf4) = 0;
          plVar17[-0x1e] = 0;
          plVar17[-0x1d] = 0;
          *(undefined4 *)(plVar17 + -0x1c) = 0;
          *(undefined4 *)((longlong)plVar17 + -0xdc) = DAT_1808aca44;
          *(undefined1 (*) [16])(plVar17 + -0x1b) = ZEXT816(0);
          plVar17[-0x19] = 0;
          plVar17[-0x18] = 0xf;
          *(undefined1 *)(plVar17 + -0x1b) = 0;
          _DAT_1809f72e0 = 0x100;
          DAT_1809f72e2 = 1;
          DAT_1809f72e4 = DAT_1808ac8e4;
          DAT_1809f72e8 = 0;
          DAT_1809f72ec = 0;
          DAT_1809f72f0 = 0.0;
          DAT_1809f72f4 = 0.0;
          DAT_1809f72f8 = 0.0;
          DAT_1809f72fc = 0.0;
          DAT_1809f7300 = 0;
          DAT_1809f7304 = DAT_1808aca44;
          plVar17[-0x2f] = 0x1802e539d;
          FUN_18002ba60(&DAT_1809f7308,plVar17 + -0x1b);
          plVar17[-0x2f] = 0x1802e53a6;
          FUN_18000f890(plVar17 + -0x1b);
          lVar14 = DAT_180ca0a50;
          _DAT_1809f72e0 = 1;
          DAT_1809f72e2 = 0;
          DAT_1809f72e4 = 0x41400000;
          DAT_1809f7304 = 0x41fda5e3;
          DAT_1809f72f0 = fVar1;
          DAT_1809f72f4 = fVar21;
          DAT_1809f72f8 = fVar20;
          DAT_1809f72fc = fVar20;
          *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
          DAT_1809f7300 = *(undefined4 *)(*(longlong *)(lVar14 + 0x14f8) + 0x15c);
          DAT_180cd0ebd = 0;
          plVar17[-0x2f] = 0x1802e5430;
          FUN_180401570(lVar2 + 0x88);
          plVar17[-0x2f] = 0x1802e5445;
          FUN_180401a80(lVar2 + 0x88,lVar2,1);
          uVar6 = 1;
        }
        plVar17[-0x2f] = 0x1802e5453;
        return uVar6;
      }
      pcVar15 = (char *)(uVar16 + 0x28);
    }
    uVar6 = thunk_FUN_1803d64e0(pcVar11,pcVar15);
  }
  return uVar6;
}



/* ===== 1802e5000 FUN_1802e5000 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1
FUN_1802e5000(undefined8 param_1,char *param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5)

{
  float fVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  char cVar5;
  undefined1 uVar6;
  longlong lVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_178 [32];
  uint local_158;
  undefined8 *local_150;
  char *local_148;
  undefined8 local_140;
  undefined4 local_138;
  undefined4 local_130;
  float local_128;
  float local_124;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined2 local_108;
  undefined1 local_106;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined1 local_e0 [16];
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined2 local_94;
  undefined8 local_90;
  undefined4 local_88;
  undefined1 local_84;
  ulonglong local_78;
  
  local_78 = DAT_180919500 ^ (ulonglong)auStack_178;
  FUN_1802b4fe0(param_1,param_3,param_4);
  lVar8 = DAT_180ca0a50;
  *(uint *)(DAT_180ca0a50 + 0x1f38) = *(uint *)(DAT_180ca0a50 + 0x1f38) | 2;
  *(undefined4 *)(lVar8 + 0x1f58) = param_5;
  *(undefined4 *)(lVar8 + 0x1f5c) = 0;
  *(undefined4 *)(lVar8 + 8000) = 1;
  local_128 = 7.0;
  local_124 = 7.0;
  cVar5 = FUN_1802b5260(param_1,&local_128);
  uVar6 = 0;
  if (cVar5 != '\0') {
    local_108 = _DAT_1809f72e0;
    local_106 = DAT_1809f72e2;
    local_104 = DAT_1809f72e4;
    local_100 = DAT_1809f72e8;
    local_fc = DAT_1809f72ec;
    local_f8 = CONCAT44(DAT_1809f72f4,DAT_1809f72f0);
    uStack_f0 = CONCAT44(DAT_1809f72fc,DAT_1809f72f8);
    local_e8 = DAT_1809f7300;
    local_e4 = DAT_1809f7304;
    FUN_180024b50(local_e0,&DAT_1809f7308);
    local_c0 = _DAT_1809f5b40;
    uStack_b8 = _DAT_1809f5b48;
    local_b0 = DAT_1809f5b50;
    local_a8 = _DAT_1808ad2d0;
    uStack_a0 = _UNK_1808ad2d8;
    local_98 = 0;
    local_94 = 0;
    local_90 = 0;
    local_88 = 0;
    local_84 = 0;
    if (DAT_181107158 == DAT_181107160) {
      FUN_180354940(DAT_181107158,DAT_181107158,&local_108);
    }
    else {
      FUN_1803598d0(DAT_181107158,&local_108);
      DAT_181107158 = DAT_181107158 + 0x88;
    }
    FUN_18000f890(local_e0);
    FUN_180312140(param_2);
    lVar4 = DAT_180ca0a50;
    *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
    uVar3 = DAT_180960ec8;
    lVar8 = *(longlong *)(lVar4 + 0x14f8);
    lVar2 = *(longlong *)(lVar8 + 0x2c8);
    fVar1 = *(float *)(lVar8 + 0x118);
    fVar9 = *(float *)(lVar8 + 0x11c);
    if ((*(longlong *)(lVar8 + 0x1c8) != 0) || (lVar7 = 0x280, *(longlong *)(lVar4 + 0x2360) != 0))
    {
      lVar7 = 0x250;
    }
    fVar10 = *(float *)(lVar8 + lVar7) - fVar1;
    if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
      local_128 = fVar1 + DAT_1808ac7ec;
      local_124 = (float)FUN_18053f0d0();
      local_124 = local_124 + fVar9;
      lVar8 = DAT_181107a18;
      if ((DAT_181107a18 == 0) && (lVar8 = DAT_181107a08, DAT_181107a08 == 0)) {
        lVar8 = *(longlong *)(lVar4 + 0x11f0);
      }
      if ((uVar3 & 0xff000000) != 0) {
        if (lVar8 == 0) {
          lVar8 = *(longlong *)(*(longlong *)(lVar2 + 0x38) + 0x18);
        }
        local_120 = *(undefined8 *)(lVar2 + 0x60);
        uStack_118 = *(undefined8 *)(lVar2 + 0x68);
        local_130 = 0;
        local_138 = 0;
        local_140 = 0;
        local_150 = &local_120;
        local_158 = uVar3;
        local_148 = param_2;
        FUN_18040a900(lVar8,lVar2,DAT_1808ac940,&local_128);
      }
      local_124 = 25.068;
      local_128 = fVar10;
      FUN_1804174f0(&local_128);
      fVar9 = fVar9 + _DAT_1808aca08;
    }
    local_108 = 0x100;
    local_106 = 1;
    local_104 = DAT_1808ac8e4;
    local_100 = 0;
    local_fc = 0;
    local_f8 = 0;
    uStack_f0 = 0;
    local_e8 = 0;
    local_e4 = DAT_1808aca44;
    local_d0 = 0;
    local_c8 = 0xf;
    local_e0._11_5_ = 0;
    local_e0._0_11_ = SUB1211(ZEXT812(0),1);
    local_e0 = local_e0 << 8;
    _DAT_1809f72e0 = 0x100;
    DAT_1809f72e2 = 1;
    DAT_1809f72e4 = DAT_1808ac8e4;
    DAT_1809f72e8 = 0;
    DAT_1809f72ec = 0;
    DAT_1809f72f0 = 0.0;
    DAT_1809f72f4 = 0.0;
    DAT_1809f72f8 = 0.0;
    DAT_1809f72fc = 0.0;
    DAT_1809f7300 = 0;
    DAT_1809f7304 = DAT_1808aca44;
    FUN_18002ba60(&DAT_1809f7308,local_e0);
    FUN_18000f890(local_e0);
    lVar8 = DAT_180ca0a50;
    _DAT_1809f72e0 = 1;
    DAT_1809f72e2 = 0;
    DAT_1809f72e4 = 0x41400000;
    DAT_1809f7304 = 0x41fda5e3;
    DAT_1809f72f0 = fVar1;
    DAT_1809f72f4 = fVar10;
    DAT_1809f72f8 = fVar9;
    DAT_1809f72fc = fVar9;
    *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
    DAT_1809f7300 = *(undefined4 *)(*(longlong *)(lVar8 + 0x14f8) + 0x15c);
    DAT_180cd0ebd = 0;
    FUN_180401570(lVar2 + 0x88);
    FUN_180401a80(lVar2 + 0x88,lVar2,1);
    uVar6 = 1;
  }
  return uVar6;
}



/* ===== 1802e5480 FUN_1802e5480 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802e5480(void)

{
  longlong lVar1;
  undefined4 uVar2;
  float fVar3;
  char cVar4;
  undefined8 *puVar5;
  float fVar6;
  undefined4 local_res8;
  float local_resc;
  
  FUN_1802b9bd0();
  lVar1 = DAT_180ca0a50;
  fVar3 = DAT_1809f72f8;
  uVar2 = DAT_1809f72f0;
  if (DAT_180cd0ebd != '\0') {
    DAT_1809f72fc = DAT_1809f72fc + _DAT_1808ace08;
  }
  fVar6 = DAT_1809f72fc - DAT_1809f72f8;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x14f8) + 0x2c8);
  FUN_180401a80(lVar1 + 0x88,lVar1,0);
  FUN_1804016a0(lVar1 + 0x88,lVar1);
  lVar1 = DAT_180ca0a50;
  local_resc = DAT_1808ac34c;
  if (DAT_1808ac34c <= fVar6) {
    local_resc = fVar6;
  }
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  lVar1 = *(longlong *)(lVar1 + 0x14f8);
  *(undefined4 *)(lVar1 + 0x118) = uVar2;
  *(float *)(lVar1 + 0x11c) = fVar3;
  *(undefined1 *)(lVar1 + 0x159) = 1;
  local_res8 = DAT_1809f72f4;
  FUN_1804174f0(&local_res8);
  DAT_1809f72e0 = *(undefined1 *)(DAT_181107158 + -0x88);
  puVar5 = (undefined8 *)(DAT_181107158 + -0x60);
  DAT_1809f72e1 = *(undefined1 *)(DAT_181107158 + -0x87);
  DAT_1809f72e2 = *(undefined1 *)(DAT_181107158 + -0x86);
  DAT_1809f72e4 = *(undefined4 *)(DAT_181107158 + -0x84);
  DAT_1809f72e8 = *(undefined4 *)(DAT_181107158 + -0x80);
  DAT_1809f72ec = *(undefined4 *)(DAT_181107158 + -0x7c);
  DAT_1809f72f0 = *(undefined4 *)(DAT_181107158 + -0x78);
  DAT_1809f72f4 = *(undefined4 *)(DAT_181107158 + -0x74);
  DAT_1809f72f8 = *(float *)(DAT_181107158 + -0x70);
  DAT_1809f72fc = *(float *)(DAT_181107158 + -0x6c);
  DAT_1809f7300 = *(undefined4 *)(DAT_181107158 + -0x68);
  DAT_1809f7304 = *(undefined4 *)(DAT_181107158 + -100);
  if (puVar5 != &DAT_1809f7308) {
    if (0xf < *(ulonglong *)(DAT_181107158 + -0x48)) {
      puVar5 = (undefined8 *)*puVar5;
    }
    FUN_180029840(&DAT_1809f7308,puVar5,*(undefined8 *)(DAT_181107158 + -0x50));
  }
  DAT_1809f5b40 = *(undefined4 *)(DAT_181107158 + -0x40);
  DAT_1809f5b44 = *(undefined4 *)(DAT_181107158 + -0x3c);
  DAT_1809f5b48 = *(undefined4 *)(DAT_181107158 + -0x38);
  DAT_1809f5b4c = *(undefined4 *)(DAT_181107158 + -0x34);
  DAT_1809f5b50 = *(undefined8 *)(DAT_181107158 + -0x30);
  FUN_18000f890(DAT_181107158 + -0x60);
  DAT_181107158 = DAT_181107158 + -0x88;
  cVar4 = FUN_180312290();
  if (cVar4 == '\0') {
    FUN_1802b5590();
  }
  return;
}



/* ===== 1802e56a0 FUN_1802e56a0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802e56a0(void)

{
  FUN_1802b9bd0();
  DAT_1811073cc = DAT_1809f72fc;
  DAT_18110757c = DAT_1809f72f0;
  DAT_181107058 = DAT_1809f72f4;
  DAT_1809f72ec = 0;
  DAT_1809f72fc = DAT_1809f72fc + DAT_1808ac7ec;
  DAT_1809f72f0 = DAT_1809f72f0 + DAT_1808ac7ec;
  DAT_1809f72f4 = DAT_1809f72f4 + _DAT_1808ace28;
  return;
}



/* ===== 1802e5720 FUN_1802e5720 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802e5720(void)

{
  longlong lVar1;
  float local_res8;
  float local_resc;
  float local_res10;
  undefined4 local_res14;
  undefined8 local_18;
  undefined8 uStack_10;
  
  FUN_1802b9bd0();
  lVar1 = DAT_180ca0a50;
  DAT_1809f72fc = DAT_1809f72fc + DAT_1808ac7ec;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x14f8) + 0x2c8);
  FUN_180401a80(lVar1 + 0x88,lVar1,0);
  local_res8 = DAT_181107058 + DAT_18110757c;
  local_res10 = DAT_18110757c;
  local_res14 = DAT_1811073cc;
  local_resc = DAT_1809f72fc;
  local_18 = _DAT_1808addb0;
  uStack_10 = _UNK_1808addb8;
  FUN_18036bcb0(lVar1,&local_res10,&local_res8,DAT_180960eec,&local_18,DAT_1808ac34c,DAT_1808ac34c);
  FUN_180401a80(lVar1 + 0x88,lVar1,1);
  DAT_1809f72f0 = DAT_18110757c;
  DAT_1809f72f4 = DAT_181107058;
  DAT_180cd0ebd = 1;
  DAT_1809f72fc = DAT_1809f72fc + DAT_1808ac7ec;
  return;
}



/* ===== 1802e5860 FUN_1802e5860 ===== */

undefined1 FUN_1802e5860(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong param_4)

{
  int iVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  undefined1 uVar6;
  undefined4 *puVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 local_res20;
  undefined4 local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  undefined8 local_88;
  undefined1 local_80 [104];
  
  puVar7 = (undefined4 *)FUN_1802b9e90(local_80,param_1);
  lVar2 = DAT_180ca0a50;
  DAT_1809f5b50._4_4_ = *puVar7;
  fVar3 = (float)puVar7[1];
  fVar9 = (float)puVar7[2];
  fVar4 = (float)puVar7[3];
  local_88 = *(undefined8 *)(puVar7 + 4);
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  DAT_1809f5b44 = *(undefined4 *)(lVar2 + 4);
  DAT_1809f5b40 = *(undefined4 *)(*(longlong *)(lVar2 + 0x14f8) + 0x10);
  DAT_1809f5b48 = fVar3;
  DAT_1809f5b4c = fVar4;
  DAT_1809f5b50._0_4_ = fVar9;
  local_98 = DAT_1809f5b50._4_4_;
  fStack_94 = fVar3;
  fStack_90 = fVar9;
  fStack_8c = fVar4;
  FUN_1802baa50(&local_98);
  fVar8 = (float)FUN_18053f0d0(CONCAT44(fVar9,(fVar9 - (DAT_1809f72e4 + DAT_1809f72f0)) /
                                              DAT_1808ac5e0));
  fVar10 = *(float *)(DAT_180ca0a50 + 0x1200) + DAT_1808ac7ac;
  FUN_1803e89e0(param_1);
  lVar5 = DAT_180ca0a50;
  fVar10 = (fVar4 - fVar10) * DAT_1808ac1f4;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  lVar2 = *(longlong *)(lVar5 + 0x14f8);
  *(float *)(lVar2 + 0x118) = fVar9 - fVar8;
  fVar9 = (float)FUN_18053f0d0(CONCAT44(fVar4,fVar10));
  *(undefined1 *)(lVar2 + 0x159) = 1;
  local_res20 = 0x4040000040c00000;
  *(float *)(lVar2 + 0x11c) = fVar9 + fVar3;
  *(uint *)(lVar5 + 0x1eb0) = *(uint *)(lVar5 + 0x1eb0) | 1;
  *(float *)(lVar5 + 0x1ec8) = fVar8;
  FUN_1803d89a0(0xb,&local_res20);
  FUN_1803d8870(0xd,0);
  FUN_1803d8730(7,DAT_180960f44 & 0xffffff | 0x2e000000);
  FUN_1803d8730(8,DAT_180960f44 & 0xffffff | 0x5c000000);
  FUN_1803d8730(9,DAT_180960f44 & 0xffffff | 0x5c000000);
  if (param_4 == 0) {
    local_res20 = 0;
    uVar6 = FUN_18041c570("##value",0,param_2,param_3,&local_res20,0,0,0);
  }
  else {
    uVar6 = FUN_1804192e0();
  }
  FUN_1803d87f0(3);
  FUN_1803d8a40(2);
  iVar1 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
  if (iVar1 < 2) {
    FUN_1803ebc00("Calling PopID() too many times!");
  }
  else {
    *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar1 + -1;
  }
  return uVar6;
}



/* ===== 1802e5b30 FUN_1802e5b30 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1802e5b30(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  char cVar5;
  byte bVar6;
  int iVar7;
  float *pfVar8;
  int *piVar9;
  float *pfVar10;
  int *piVar11;
  int iVar12;
  char *pcVar13;
  longlong lVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  int iVar18;
  ulonglong uVar19;
  undefined8 uVar20;
  bool bVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined8 uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined1 auStack_1f8 [32];
  float *local_1d8;
  undefined8 local_1d0;
  undefined8 *local_1c8;
  undefined8 local_1c0;
  ulonglong local_1b8;
  undefined4 local_1b0;
  undefined4 local_1a8;
  float local_198;
  float local_194;
  float local_190;
  float local_18c;
  char local_188;
  float local_180;
  float local_17c;
  float local_178;
  float local_174;
  float local_170;
  float local_16c;
  float local_168 [3];
  int local_15c [3];
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  float local_140;
  float local_138 [6];
  undefined8 local_120;
  undefined8 uStack_118;
  int local_110;
  int local_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  ulonglong local_f8;
  
  local_f8 = DAT_180919500 ^ (ulonglong)auStack_1f8;
  local_120 = param_1;
  pfVar8 = (float *)FUN_1802b9e90(local_138,&DAT_18058b643);
  fVar3 = DAT_1808ac34c;
  fVar27 = pfVar8[2];
  fVar1 = *pfVar8;
  local_16c = pfVar8[3];
  fVar22 = fVar27 - fVar1;
  fVar2 = pfVar8[1];
  fVar32 = DAT_1808ac34c;
  if (DAT_1808ac34c <= fVar22) {
    fVar32 = fVar22;
  }
  fVar22 = (float)FUN_18053f0d0(local_16c * DAT_1808ac1f4 + fVar2);
  lVar4 = DAT_180ca0a50;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x14f8) + 0x2c8);
  FUN_1803e89e0("wear_value");
  lVar14 = DAT_180ca0a50;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  lVar14 = *(longlong *)(lVar14 + 0x14f8);
  *(float *)(lVar14 + 0x118) = fVar1;
  *(float *)(lVar14 + 0x11c) = fVar2;
  *(undefined1 *)(lVar14 + 0x159) = 1;
  local_170 = fVar32;
  FUN_180415e30("##track",&local_170,0);
  cVar5 = FUN_1803dd930(0);
  lVar14 = DAT_180ca0a50;
  local_188 = cVar5;
  if (*(int *)(DAT_180ca0a50 + 0x1578) == 0) {
    bVar21 = false;
LAB_1802e5d20:
    uVar20 = 0;
  }
  else {
    bVar21 = *(int *)(DAT_180ca0a50 + 0x1578) == *(int *)(DAT_180ca0a50 + 0x1ee8);
    if (!bVar21) goto LAB_1802e5d20;
    local_168[2] = 1.0;
    local_168[0] = 0.0;
    local_168[1] = (*(float *)(DAT_180ca0a50 + 0x110) - fVar1) / (fVar32 - fVar3);
    pfVar8 = local_168;
    if (0.0 <= local_168[1]) {
      pfVar8 = local_168 + 1;
    }
    pfVar10 = local_168 + 2;
    if (local_168[1] <= fVar3) {
      pfVar10 = pfVar8;
    }
    uVar20 = 0;
    if ((int)(*pfVar10 * DAT_1808acb08) != *param_1) {
      *param_1 = (int)(*pfVar10 * DAT_1808acb08);
      uVar20 = 1;
    }
  }
  if (cVar5 == '\0') {
    if (!bVar21) {
      local_138[0] = 0.0;
      goto LAB_1802e5dac;
    }
  }
  else if (*(float *)(lVar14 + 0x120) != 0.0) {
    *(undefined4 *)(lVar14 + 0x1d08) = *(undefined4 *)(lVar14 + 0x1ee8);
    *(undefined4 *)(lVar14 + 0x1d04) = *(undefined4 *)(lVar14 + 0x1ee8);
    *(undefined2 *)(lVar14 + 0x1d0c) = 0;
    local_15c[2] = 100;
    local_15c[0] = 0;
    local_15c[1] = -1;
    if (0.0 < *(float *)(lVar14 + 0x120)) {
      local_15c[1] = 1;
    }
    local_15c[1] = local_15c[1] + *param_1;
    piVar11 = local_15c;
    if (-1 < local_15c[1]) {
      piVar11 = local_15c + 1;
    }
    piVar9 = local_15c + 2;
    if (local_15c[1] < 0x65) {
      piVar9 = piVar11;
    }
    if (*piVar9 != *param_1) {
      *param_1 = *piVar9;
      uVar20 = 1;
    }
  }
  local_138[0] = fVar3;
LAB_1802e5dac:
  pcVar13 = "##wear_hover";
  bVar6 = 0x23;
  uVar16 = ~*(uint *)(lVar14 + 0x1ee8);
  do {
    pcVar13 = pcVar13 + 1;
    if (((bVar6 == 0x23) && (*pcVar13 == 0x23)) && (pcVar13[1] == 0x23)) {
      pcVar13 = pcVar13 + 2;
      uVar16 = ~*(uint *)(lVar14 + 0x1ee8);
    }
    else {
      uVar16 = uVar16 >> 8 ^
               *(uint *)(&DAT_1806c25c0 + ((ulonglong)(uVar16 & 0xff) ^ (ulonglong)bVar6) * 4);
    }
    bVar6 = *pcVar13;
  } while (bVar6 != 0);
  local_180 = (float)~uVar16;
  local_138[3] = 0.0;
  local_138[4] = -NAN;
  local_138[1] = local_138[0];
  local_138[2] = local_138[0];
  FUN_18034a380();
  uVar26 = FUN_1802b3660(local_108 + 0x14);
  local_140 = (float)uVar26;
  if (cVar5 != '\0' || bVar21) {
    local_138[0] = fVar3;
  }
  else {
    local_138[0] = 0.0;
  }
  pcVar13 = "##wear_bubble";
  bVar6 = 0x23;
  uVar16 = ~*(uint *)(DAT_180ca0a50 + 0x1ee8);
  do {
    pcVar13 = pcVar13 + 1;
    if (((bVar6 == 0x23) && (*pcVar13 == 0x23)) && (pcVar13[1] == 0x23)) {
      pcVar13 = pcVar13 + 2;
      uVar16 = ~*(uint *)(DAT_180ca0a50 + 0x1ee8);
    }
    else {
      uVar16 = uVar16 >> 8 ^
               *(uint *)(&DAT_1806c25c0 + ((ulonglong)(uVar16 & 0xff) ^ (ulonglong)bVar6) * 4);
    }
    bVar6 = *pcVar13;
  } while (bVar6 != 0);
  local_180 = (float)~uVar16;
  local_138[3] = 0.0;
  local_138[4] = -NAN;
  local_138[1] = local_138[0];
  local_138[2] = local_138[0];
  FUN_18034a380(uVar26,&local_108,&local_180,local_138);
  local_170 = (float)FUN_1802b3660(local_108 + 0x14);
  iVar12 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
  if (iVar12 < 2) {
    FUN_1803ebc00("Calling PopID() too many times!");
  }
  else {
    *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar12 + -1;
  }
  fVar2 = DAT_1808ac658;
  local_1d8 = (float *)&local_108;
  local_190 = fVar27 + DAT_1808ac540;
  local_1d0 = (undefined8 *)((ulonglong)local_1d0._4_4_ << 0x20);
  local_198 = fVar1 - DAT_1808ac540;
  fVar33 = fVar22 + DAT_1808ac658;
  fVar22 = fVar22 - DAT_1808ac658;
  local_18c = fVar33 + DAT_1808ac540;
  local_108 = _DAT_1808adce0;
  uStack_100 = _UNK_1808adce8;
  local_194 = fVar22 - DAT_1808ac540;
  FUN_18036b940(lVar4,&local_198,&local_190,DAT_180960f20);
  uVar17 = 0;
  fVar27 = 0.0;
  do {
    fVar25 = (float)(&DAT_180659558)[uVar17 * 2];
    fVar23 = fVar32 * fVar25 + fVar1;
    fVar27 = fVar32 * fVar27 + fVar1;
    iVar12 = (int)uVar17;
    if (iVar12 == 0) {
      local_108._0_4_ = 0x40400000;
      bVar6 = 0x50;
      fVar28 = 0.0;
LAB_1802e6057:
      local_108 = CONCAT44(fVar28,(undefined4)local_108);
      if ((char)bVar6 < '\0') {
        fVar28 = fVar2;
      }
      else {
        fVar28 = 0.0;
      }
      if ((bVar6 & 0x40) == 0) {
        fVar24 = 0.0;
      }
      else {
        fVar24 = fVar2;
      }
      local_1d8 = (float *)&local_108;
      local_1d0 = (undefined8 *)((ulonglong)local_1d0._4_4_ << 0x20);
      uStack_100 = CONCAT44(fVar24,fVar28);
      local_198 = fVar27;
      local_194 = fVar22;
      local_190 = fVar23;
      local_18c = fVar33;
      uVar26 = FUN_18036b940(lVar4,&local_198,&local_190);
    }
    else {
      if (iVar12 == 4) {
        bVar6 = 0xa0;
        local_108._0_4_ = 0;
        fVar28 = fVar2;
        goto LAB_1802e6057;
      }
      local_1d0 = (undefined8 *)((ulonglong)local_1d0._4_4_ << 0x20);
      local_1d8 = (float *)((ulonglong)local_1d8 & 0xffffffff00000000);
      local_180 = fVar23;
      local_17c = fVar33;
      local_178 = fVar27;
      local_174 = fVar22;
      uVar26 = FUN_1803fe590(lVar4,&local_178,&local_180,(&DAT_18065955c)[uVar17 * 2]);
    }
    piVar11 = local_120;
    uVar17 = (ulonglong)(iVar12 + 1U);
    fVar27 = fVar25;
    if (4 < (int)(iVar12 + 1U)) {
      if (bVar21) {
        local_138[0] = fVar3;
      }
      else if (local_188 == '\0') {
        local_138[0] = 0.0;
      }
      else {
        local_138[0] = DAT_1808ac1f4;
      }
      pcVar13 = "wear_value";
      uVar17 = 0xffffffff;
      bVar6 = 0x77;
      do {
        pcVar13 = pcVar13 + 1;
        if (((bVar6 == 0x23) && (*pcVar13 == 0x23)) && (pcVar13[1] == 0x23)) {
          uVar17 = 0xffffffff;
          pcVar13 = pcVar13 + 2;
        }
        else {
          uVar17 = (ulonglong)
                   ((uint)(uVar17 >> 8) ^
                   *(uint *)(&DAT_1806c25c0 + (uVar17 & 0xff ^ (ulonglong)bVar6) * 4));
        }
        bVar6 = *pcVar13;
      } while (bVar6 != 0);
      pcVar13 = "##wear_veil";
      bVar6 = 0x23;
      uVar19 = uVar17;
      do {
        pcVar13 = pcVar13 + 1;
        if (((bVar6 == 0x23) && (*pcVar13 == 0x23)) && (pcVar13[1] == 0x23)) {
          pcVar13 = pcVar13 + 2;
          uVar19 = uVar17;
        }
        else {
          uVar19 = (ulonglong)
                   ((uint)(uVar19 >> 8) ^
                   *(uint *)(&DAT_1806c25c0 + (uVar19 & 0xff ^ (ulonglong)bVar6) * 4));
        }
        bVar6 = *pcVar13;
      } while (bVar6 != 0);
      local_180 = (float)~(uint)uVar19;
      local_138[3] = 0.0;
      local_138[4] = -NAN;
      local_138[1] = local_138[0];
      local_138[2] = local_138[0];
      FUN_18034a380(uVar26,&local_108,&local_180,local_138);
      fVar23 = (float)FUN_1802b3660(local_108 + 0x14);
      fVar27 = DAT_1808ac1f4;
      fVar25 = fVar23 + fVar23;
      if (fVar3 <= fVar23 + fVar23) {
        fVar25 = fVar3;
      }
      iVar12 = (int)(fVar25 * DAT_1808ac1f4 * DAT_1808acb94 + DAT_1808ac1f4);
      if (0 < iVar12) {
        local_190 = 1.0;
        local_180 = 0.0;
        local_138[0] = 0.0;
        local_138[5] = 1.0;
        local_198 = (float)*piVar11 / DAT_1808acb08;
        local_120 = (int *)CONCAT44(iVar12,iVar12);
        local_110 = iVar12;
        local_10c = iVar12;
        pfVar8 = &local_180;
        if (0.0 <= local_198) {
          pfVar8 = &local_198;
        }
        pfVar10 = &local_190;
        if (local_198 <= fVar3) {
          pfVar10 = pfVar8;
        }
        uStack_118 = 0;
        iVar12 = 0;
        fVar25 = *pfVar10;
        local_138[1] = fVar25 - DAT_1808ac09c;
        local_138[2] = fVar25 - DAT_1808ac030;
        local_138[3] = fVar25 + DAT_1808ac030;
        local_138[4] = fVar25 + DAT_1808ac09c;
        do {
          local_14c = 1.0;
          fVar25 = local_138[iVar12];
          local_150 = 0.0;
          local_144 = 1.0;
          local_148 = 0.0;
          pfVar8 = &local_150;
          if (0.0 <= fVar25) {
            pfVar8 = local_138 + iVar12;
          }
          pfVar10 = &local_14c;
          if (fVar25 <= fVar3) {
            pfVar10 = pfVar8;
          }
          fVar23 = *pfVar10;
          fVar28 = local_138[(longlong)iVar12 + 1];
          pfVar8 = &local_148;
          if (0.0 <= fVar28) {
            pfVar8 = local_138 + (longlong)iVar12 + 1;
          }
          pfVar10 = &local_144;
          if (fVar28 <= fVar3) {
            pfVar10 = pfVar8;
          }
          fVar24 = *pfVar10;
          if (fVar23 < fVar24) {
            fVar28 = fVar28 - fVar25;
            if (fVar28 <= 0.0) {
              fVar29 = 0.0;
            }
            else {
              fVar29 = (fVar23 - fVar25) / fVar28;
            }
            fVar31 = (float)(int)local_138[(longlong)iVar12 + 6];
            fVar30 = (float)((int)local_138[(longlong)iVar12 + 7] -
                            (int)local_138[(longlong)iVar12 + 6]);
            iVar18 = (int)(fVar30 * fVar29 + fVar31 + fVar27) << 0x18;
            if (fVar28 <= 0.0) {
              fVar28 = 0.0;
            }
            else {
              fVar28 = (fVar24 - fVar25) / fVar28;
            }
            iVar7 = (int)(fVar30 * fVar28 + fVar31 + fVar27) * 0x1000000;
            bVar21 = 0.0 < fVar23;
            if (((bVar21) && (fVar24 < fVar3)) || (iVar18 != iVar7)) {
              local_1c8 = (undefined8 *)CONCAT44(local_1c8._4_4_,iVar18);
              local_1d0 = (undefined8 *)CONCAT44(local_1d0._4_4_,iVar7);
              local_1d8 = (float *)CONCAT44(local_1d8._4_4_,iVar7);
              local_178 = fVar24 * fVar32 + fVar1;
              local_180 = fVar23 * fVar32 + fVar1;
              local_17c = fVar22;
              local_174 = fVar33;
              FUN_1803fe730(lVar4,&local_180,&local_178);
            }
            else {
              fVar25 = fVar2;
              if ((bVar21) || (fVar24 < fVar3)) {
                bVar6 = 0xa0;
                if (!bVar21) {
                  bVar6 = 0x50;
                }
                local_190 = fVar24 * fVar32 + fVar1;
                local_198 = fVar23 * fVar32 + fVar1;
                if (bVar21) {
                  fVar25 = 0.0;
                }
              }
              else {
                bVar6 = 0xf0;
                local_190 = fVar24 * fVar32 + fVar1;
                local_198 = fVar23 * fVar32 + fVar1;
              }
              if ((bVar6 & 0x20) == 0) {
                fVar23 = 0.0;
              }
              else {
                fVar23 = fVar2;
              }
              local_108 = CONCAT44(fVar23,fVar25);
              if ((char)bVar6 < '\0') {
                fVar25 = fVar2;
              }
              else {
                fVar25 = 0.0;
              }
              if ((bVar6 & 0x40) == 0) {
                fVar23 = 0.0;
              }
              else {
                fVar23 = fVar2;
              }
              local_1d8 = (float *)&local_108;
              local_1d0 = (undefined8 *)((ulonglong)local_1d0._4_4_ << 0x20);
              uStack_100 = CONCAT44(fVar23,fVar25);
              local_194 = fVar22;
              local_18c = fVar33;
              FUN_18036b940(lVar4,&local_198,&local_190);
            }
          }
          iVar12 = iVar12 + 1;
        } while (iVar12 < 5);
      }
      uVar16 = DAT_180960ec0;
      local_180 = 1.0;
      local_190 = 0.0;
      local_198 = (float)*piVar11 / DAT_1808acb08;
      pfVar8 = &local_190;
      if (0.0 <= local_198) {
        pfVar8 = &local_198;
      }
      pfVar10 = &local_180;
      if (local_198 <= fVar3) {
        pfVar10 = pfVar8;
      }
      fVar3 = *pfVar10;
      fVar25 = (float)FUN_18053fc00();
      local_178 = (float)FUN_18053f0d0((fVar32 * fVar3 + fVar1) - fVar25 * fVar27);
      fVar1 = DAT_1808ac8dc;
      local_174 = ((fVar22 - DAT_1808ac8dc) - fVar2) + _DAT_1808ac6b0;
      local_1c8 = (undefined8 *)
                  CONCAT44(local_1c8._4_4_,
                           (int)(longlong)
                                ((float)(uVar16 >> 0x18) *
                                 (local_140 * DAT_1808ac140 + DAT_1808ac27c) + fVar27) << 0x18 |
                           uVar16 & 0xffffff);
      local_1d8 = &local_178;
      local_1d0 = (undefined8 *)CONCAT44(local_1d0._4_4_,DAT_1808ac864);
      FUN_180322fd0(lVar4,"inv_caret_down",
                    "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 320 512\" width=\"320\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M182 470C170 483 149 483 137 470L9 343C0 334 -2 320 2 308C7 296 19 288 32 288L288 288C300 288 312 296 317 308C322 320 319 334 310 343L182 470L182 470ZM182 470Z\"/></svg>"
                    ,DAT_1808acbc0);
      fVar3 = local_170;
      if (0.0 < local_170) {
        snprintf(&local_108,0x10,&DAT_1806f0260,*piVar11);
        lVar14 = DAT_1811079c0;
        if ((DAT_1811079c0 == 0) && (lVar14 = DAT_181107a08, DAT_181107a08 == 0)) {
          lVar14 = *(longlong *)(DAT_180ca0a50 + 0x11f0);
        }
        local_1d0 = &local_108;
        local_1a8 = 0;
        local_1b8 = 0;
        local_1c0 = 0;
        local_1c8 = (undefined8 *)0x0;
        local_1d8 = (float *)((ulonglong)local_1d8 & 0xffffffff00000000);
        FUN_18040a2f0(&local_120,lVar14,fVar1,DAT_1808acd08);
        uVar16 = DAT_180960ec0;
        uVar15 = (int)(longlong)((float)(DAT_180960ec0 >> 0x18) * fVar3 + fVar27) << 0x18;
        local_178 = (float)FUN_18053f0d0();
        local_174 = fVar33 + fVar2;
        if ((uVar15 != 0) && ((char)local_108 != '\0')) {
          if (lVar14 == 0) {
            lVar14 = *(longlong *)(*(longlong *)(lVar4 + 0x38) + 0x18);
          }
          local_120 = *(int **)(lVar4 + 0x60);
          uStack_118 = *(undefined8 *)(lVar4 + 0x68);
          local_1b0 = 0;
          local_1c8 = &local_108;
          local_1b8 = local_1b8 & 0xffffffff00000000;
          local_1c0 = 0;
          local_1d0 = &local_120;
          local_1d8 = (float *)CONCAT44(local_1d8._4_4_,uVar16 & 0xffffff | uVar15);
          FUN_18040a900(lVar14,lVar4,fVar1,&local_178);
        }
      }
      return uVar20;
    }
  } while( true );
}



/* ===== 1802e6820 FUN_1802e6820 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802e6820(undefined8 param_1,undefined8 param_2)

{
  float *pfVar1;
  undefined8 *puVar2;
  float fVar3;
  longlong lVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  char cVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  char *pcVar12;
  char *pcVar13;
  float *pfVar14;
  int *piVar15;
  longlong *plVar16;
  int *piVar17;
  float *pfVar18;
  int iVar19;
  int iVar20;
  float *pfVar21;
  ulonglong uVar22;
  longlong lVar23;
  uint uVar24;
  ulonglong uVar25;
  int iVar26;
  bool bVar27;
  float fVar28;
  undefined1 auStack_528 [32];
  undefined2 *local_508;
  undefined8 local_500;
  int local_4f8;
  int local_4f4;
  int local_4f0;
  int local_4ec [4];
  int local_4dc;
  char *local_4d8 [4];
  undefined8 local_4b8;
  undefined8 uStack_4b0;
  undefined8 local_4a8;
  undefined8 uStack_4a0;
  undefined8 local_498;
  undefined8 uStack_490;
  undefined8 local_488;
  undefined8 uStack_480;
  undefined8 local_478;
  undefined8 uStack_470;
  undefined8 local_468;
  undefined8 uStack_460;
  undefined8 local_458;
  undefined8 uStack_450;
  undefined8 local_448;
  undefined8 uStack_440;
  undefined8 local_438;
  char *local_430;
  char *local_428;
  longlong local_418 [16];
  undefined1 *local_398;
  longlong alStack_390 [33];
  undefined1 local_288 [528];
  ulonglong local_78;
  
  local_78 = DAT_180919500 ^ (ulonglong)auStack_528;
  if (DAT_1809f590c == 4) {
    iVar26 = DAT_1809214b0;
    if (DAT_1809f5900 == 0) {
      iVar26 = DAT_1809214ac;
    }
  }
  else if (DAT_1809f590c - 1U < 2) {
    iVar26 = DAT_1809f5914;
    if (DAT_1809f5910 != 0) {
      iVar26 = DAT_1809f5910;
    }
  }
  else if ((DAT_1809f590c == 0) || (DAT_1809f590c == 3)) {
    iVar26 = DAT_1809f5910;
  }
  else {
    iVar26 = 0;
  }
  if (iVar26 == 0) {
    return;
  }
  local_508 = (undefined2 *)CONCAT44(local_508._4_4_,DAT_1808acba4);
  local_4f0 = iVar26;
  cVar8 = FUN_1802e5000("##inv_options","Options",param_1,param_2);
  if (cVar8 == '\0') {
    return;
  }
  lVar9 = FUN_1800f1190(iVar26,DAT_1809f5900);
  lVar10 = FUN_1800f1470(iVar26,DAT_1809f5900);
  if ((lVar9 == 0) || (lVar10 == 0)) {
    FUN_1802e5480();
    return;
  }
  if (((DAT_1809f590c == 0) || (DAT_1809f590c == 3)) && (*(int *)(lVar9 + 8) == 0)) {
    bVar27 = true;
  }
  else {
    bVar27 = false;
  }
  FUN_1802e56a0();
  FUN_1802e5860(&DAT_18058b644,lVar9 + 0x1c,0x21,0);
  FUN_1802b9bd0();
  lVar11 = DAT_180ca0a50;
  if (bVar27) {
    DAT_181107580 = DAT_181107580 + 1;
    *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
    lVar4 = *(longlong *)(lVar11 + 0x14f8);
    lVar23 = *(longlong *)(lVar4 + 0x2c8);
    *(undefined1 *)(lVar4 + 0xce) = 1;
    iVar19 = *(int *)(*(longlong *)(*(longlong *)(lVar11 + 0x14f8) + 0x2c8) + 0x20);
    FUN_1803d8870(1);
    FUN_1803e7920(1);
    FUN_1803d8a40(1);
  }
  else {
    lVar23 = 0;
    iVar19 = 0;
  }
  local_500 = (longlong *)((ulonglong)local_500._4_4_ << 0x20);
  local_508 = &DAT_1806dfdd8;
  FUN_18033fa10(&DAT_180741008,lVar9 + 0x10,0);
  fVar6 = DAT_1808ac1f4;
  if (lVar23 != 0) {
    FUN_1802b9bd0();
    DAT_181107580 = DAT_181107580 + -1;
    FUN_1803e79e0();
    if (iVar19 < *(int *)(lVar23 + 0x20)) {
      do {
        lVar11 = (longlong)iVar19;
        iVar19 = iVar19 + 1;
        uVar24 = *(uint *)(*(longlong *)(lVar23 + 0x28) + 0x10 + lVar11 * 0x14);
        *(uint *)(*(longlong *)(lVar23 + 0x28) + 0x10 + lVar11 * 0x14) =
             (int)(longlong)((float)(uVar24 >> 0x18) * fVar6 + fVar6) << 0x18 | uVar24 & 0xffffff;
      } while (iVar19 < *(int *)(lVar23 + 0x20));
    }
  }
  pcVar12 = (char *)FUN_18027f930(*(undefined4 *)(lVar9 + 8));
  if (*pcVar12 != '\0') {
    if (((*(char *)(lVar9 + 0x5c) == '\0') && (pcVar13 = (char *)FUN_18027f930(), *pcVar13 != '\0'))
       && (iVar19 = 0, 0 < *(int *)(pcVar13 + 0x88))) {
      do {
        if (7 < iVar19) break;
        lVar11 = (longlong)iVar19;
        iVar19 = iVar19 + 1;
        uVar5 = *(undefined8 *)(pcVar13 + lVar11 * 0x10 + 8 + 8);
        puVar2 = (undefined8 *)(lVar9 + 0x60 + lVar11 * 0x10);
        *puVar2 = *(undefined8 *)(pcVar13 + lVar11 * 0x10 + 8);
        puVar2[1] = uVar5;
      } while (iVar19 < *(int *)(pcVar13 + 0x88));
    }
    local_4b8 = *(undefined8 *)(lVar9 + 0x60);
    uStack_4b0 = *(undefined8 *)(lVar9 + 0x68);
    iVar19 = *(int *)(pcVar12 + 4);
    pfVar21 = (float *)(lVar9 + 0x60);
    local_4a8 = *(undefined8 *)(lVar9 + 0x70);
    uStack_4a0 = *(undefined8 *)(lVar9 + 0x78);
    local_498 = *(undefined8 *)(lVar9 + 0x80);
    uStack_490 = *(undefined8 *)(lVar9 + 0x88);
    if (8 < iVar19) {
      iVar19 = 8;
    }
    uVar25 = 0;
    local_488 = *(undefined8 *)(lVar9 + 0x90);
    uStack_480 = *(undefined8 *)(lVar9 + 0x98);
    local_478 = *(undefined8 *)(lVar9 + 0xa0);
    uStack_470 = *(undefined8 *)(lVar9 + 0xa8);
    local_468 = *(undefined8 *)(lVar9 + 0xb0);
    uStack_460 = *(undefined8 *)(lVar9 + 0xb8);
    local_458 = *(undefined8 *)(lVar9 + 0xc0);
    uStack_450 = *(undefined8 *)(lVar9 + 200);
    local_448 = *(undefined8 *)(lVar9 + 0xd0);
    uStack_440 = *(undefined8 *)(lVar9 + 0xd8);
    local_418[8] = 0;
    local_418[9] = 0;
    local_418[10] = 0;
    local_418[0xb] = 0;
    local_418[0xc] = 0;
    local_418[0xd] = 0;
    local_418[0xe] = 0;
    local_418[0xf] = 0;
    local_418[0] = 0;
    local_418[1] = 0;
    local_418[2] = 0;
    local_418[3] = 0;
    local_418[4] = 0;
    local_418[5] = 0;
    local_418[6] = 0;
    local_418[7] = 0;
    if (0 < iVar19) {
      do {
        iVar20 = *(int *)(pcVar12 + uVar25 * 4 + 0x8c);
        local_418[uVar25 + 8] = (longlong)(pfVar21 + (longlong)iVar20 * 4);
        local_418[uVar25] = (longlong)(pcVar12 + (longlong)iVar20 * 0x10 + 8);
        uVar24 = (int)uVar25 + 1;
        uVar25 = (ulonglong)uVar24;
      } while ((int)uVar24 < iVar19);
    }
    local_500 = local_418;
    local_508 = (undefined2 *)0x0;
    FUN_1802cfaf0("colors",local_418 + 8,iVar19,0);
    pfVar18 = (float *)&local_4b8;
    if (lVar9 != lVar9 + 0x80) {
      while( true ) {
        pfVar1 = pfVar21 + 4;
        pfVar14 = pfVar18;
        for (; pfVar21 != pfVar1; pfVar21 = pfVar21 + 1) {
          if (*pfVar21 != *pfVar14) {
            *(undefined1 *)(lVar9 + 0x5c) = 1;
            goto LAB_1802e6c2b;
          }
          pfVar14 = pfVar14 + 1;
        }
        if (pfVar1 == (float *)(lVar9 + 0xe0)) break;
        pfVar18 = pfVar18 + 4;
        pfVar21 = pfVar1;
      }
    }
  }
LAB_1802e6c2b:
  FUN_1802e5720();
  FUN_1802e56a0();
  FUN_1802b9bd0();
  lVar11 = DAT_180ca0a50;
  if (bVar27) {
    DAT_181107580 = DAT_181107580 + 1;
    *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
    lVar4 = *(longlong *)(lVar11 + 0x14f8);
    lVar23 = *(longlong *)(lVar4 + 0x2c8);
    *(undefined1 *)(lVar4 + 0xce) = 1;
    iVar19 = *(int *)(*(longlong *)(*(longlong *)(lVar11 + 0x14f8) + 0x2c8) + 0x20);
    FUN_1803d8870(1);
    FUN_1803e7920(1);
    FUN_1803d8a40(1);
  }
  else {
    lVar23 = 0;
    iVar19 = 0;
  }
  fVar7 = DAT_1808acb08;
  local_4ec[2] = 100;
  local_4ec[0] = 0;
  local_4ec[1] = (int)(*(float *)(lVar9 + 0xc) * DAT_1808acb08);
  piVar17 = local_4ec;
  if (-1 < local_4ec[1]) {
    piVar17 = local_4ec + 1;
  }
  piVar15 = local_4ec + 2;
  if (local_4ec[1] < 0x65) {
    piVar15 = piVar17;
  }
  local_4f4 = *piVar15;
  local_4f8 = 0;
  fVar28 = (float)local_4f4;
  if (((DAT_1808ac7ec < fVar28) && (local_4f8 = 1, DAT_1808ac904 < fVar28)) &&
     ((local_4f8 = 2, DAT_1808aca48 < fVar28 && (local_4f8 = 3, DAT_1808aca68 < fVar28)))) {
    local_4f8 = 4;
  }
  cVar8 = FUN_1802c2640(&DAT_18075ffb8,&local_4f8,&PTR_s_Factory_New_1806594c0,5);
  if (cVar8 != '\0') {
    if (local_4f8 == 0) {
      fVar28 = 0.0;
    }
    else {
      fVar28 = (float)(&DAT_180659558)[(longlong)(local_4f8 + -1) * 2];
    }
    fVar3 = (float)(&DAT_180659558)[(longlong)local_4f8 * 2];
    FUN_180273880();
    if (((DAT_180cfb2a8 == 0) || (DAT_180cfb2b8 == 0)) || (DAT_180cfb2b0 == 0)) {
      iVar20 = FUN_1805185c8();
      fVar28 = ((float)iVar20 / _DAT_1808acca4) * (fVar3 - fVar28) + fVar28;
    }
    else {
      fVar28 = (float)FUN_180273960();
    }
    local_4f4 = 0;
    local_4dc = 100;
    local_4ec[3] = (int)(fVar28 * fVar7);
    piVar17 = &local_4f4;
    if (-1 < local_4ec[3]) {
      piVar17 = local_4ec + 3;
    }
    piVar15 = &local_4dc;
    if (local_4ec[3] < 0x65) {
      piVar15 = piVar17;
    }
    local_4f4 = *piVar15;
    *(float *)(lVar9 + 0xc) = (float)local_4f4 / fVar7;
  }
  cVar8 = FUN_1802e5b30(&local_4f4);
  if (cVar8 != '\0') {
    *(float *)(lVar9 + 0xc) = (float)local_4f4 / fVar7;
  }
  if (lVar23 != 0) {
    FUN_1802b9bd0();
    DAT_181107580 = DAT_181107580 + -1;
    FUN_1803e79e0();
    if (iVar19 < *(int *)(lVar23 + 0x20)) {
      do {
        lVar11 = (longlong)iVar19;
        iVar19 = iVar19 + 1;
        uVar24 = *(uint *)(*(longlong *)(lVar23 + 0x28) + 0x10 + lVar11 * 0x14);
        *(uint *)(*(longlong *)(lVar23 + 0x28) + 0x10 + lVar11 * 0x14) =
             (int)(longlong)((float)(uVar24 >> 0x18) * fVar6 + fVar6) << 0x18 | uVar24 & 0xffffff;
      } while (iVar19 < *(int *)(lVar23 + 0x20));
    }
  }
  FUN_1802e5720();
  FUN_1802e56a0();
  local_438 = &DAT_18075ffb0;
  local_430 = "Static";
  local_428 = "Increment";
  local_4f8 = 0;
  if (*(char *)(lVar9 + 0x14) != '\0') {
    local_4f8 = (*(char *)(lVar10 + 8) != '\0') + 1;
  }
  cVar8 = FUN_1802c2640(&DAT_18075ff88,&local_4f8,&local_438,3);
  if (cVar8 != '\0') {
    *(bool *)(lVar9 + 0x14) = local_4f8 != 0;
    *(bool *)(lVar10 + 8) = local_4f8 == 2;
  }
  bVar27 = local_4f8 == 0;
  FUN_1802b9bd0();
  lVar11 = DAT_180ca0a50;
  if (bVar27) {
    DAT_181107580 = DAT_181107580 + 1;
    *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
    lVar4 = *(longlong *)(lVar11 + 0x14f8);
    lVar23 = *(longlong *)(lVar4 + 0x2c8);
    *(undefined1 *)(lVar4 + 0xce) = 1;
    iVar19 = *(int *)(*(longlong *)(*(longlong *)(lVar11 + 0x14f8) + 0x2c8) + 0x20);
    FUN_1803d8870(1);
    FUN_1803e7920(1);
    FUN_1803d8a40(1);
  }
  else {
    lVar23 = 0;
    iVar19 = 0;
  }
  cVar8 = FUN_1802e5860("value",0,0,lVar9 + 0x18);
  if (cVar8 != '\0') {
    iVar20 = *(int *)(lVar9 + 0x18);
    if (iVar20 < 0) {
      iVar20 = 0;
    }
    *(int *)(lVar9 + 0x18) = iVar20;
  }
  if (lVar23 != 0) {
    FUN_1802b9bd0();
    DAT_181107580 = DAT_181107580 + -1;
    FUN_1803e79e0();
    if (iVar19 < *(int *)(lVar23 + 0x20)) {
      do {
        lVar9 = (longlong)iVar19;
        iVar19 = iVar19 + 1;
        uVar24 = *(uint *)(*(longlong *)(lVar23 + 0x28) + 0x10 + lVar9 * 0x14);
        *(uint *)(*(longlong *)(lVar23 + 0x28) + 0x10 + lVar9 * 0x14) =
             (int)(longlong)((float)(uVar24 >> 0x18) * fVar6 + fVar6) << 0x18 | uVar24 & 0xffffff;
      } while (iVar19 < *(int *)(lVar23 + 0x20));
    }
  }
  FUN_1802e5720();
  if (DAT_1809f590c == 4) goto LAB_1802e7324;
  local_4d8[0] = "inspect animation";
  local_4d8[1] = "deploy animation";
  local_4d8[2] = "idle animation";
  local_438._0_4_ = 0;
  local_438._4_4_ = 0;
  local_430 = (char *)((ulonglong)local_430 & 0xffffffff00000000);
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_180ceca88);
  plVar16 = (longlong *)FUN_1802233c0(iVar26);
  if (plVar16 == (longlong *)0x0) {
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_180ceca88);
LAB_1802e70da:
    local_438._0_4_ = 0;
  }
  else {
    uVar24 = (int)(plVar16[1] - *plVar16 >> 3) * -0x33333333;
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_180ceca88);
    local_438._0_4_ = uVar24;
    if ((int)uVar24 < 2) goto LAB_1802e70da;
  }
  bVar27 = 0 < (int)(uint)local_438;
  if ((int)(uint)local_438 < *(int *)(lVar10 + 0xc)) {
    *(undefined4 *)(lVar10 + 0xc) = 0;
  }
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_180ceca88);
  lVar9 = FUN_1802233c0(iVar26);
  if ((lVar9 == 0) || ((longlong *)(lVar9 + 0x20) == (longlong *)0x0)) {
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_180ceca88);
    local_438 = (undefined *)(ulonglong)(uint)local_438;
LAB_1802e714a:
    iVar19 = 0;
    local_438 = (undefined *)((ulonglong)local_438 & 0xffffffff);
  }
  else {
    iVar19 = (int)(*(longlong *)(lVar9 + 0x28) - *(longlong *)(lVar9 + 0x20) >> 3) * -0x33333333;
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_180ceca88);
    local_438 = (undefined *)CONCAT44(iVar19,(uint)local_438);
    if (iVar19 < 2) goto LAB_1802e714a;
  }
  if (iVar19 < *(int *)(lVar10 + 0x10)) {
    *(undefined4 *)(lVar10 + 0x10) = 0;
  }
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_180ceca88);
  lVar9 = FUN_1802233c0(iVar26);
  if ((lVar9 == 0) || ((longlong *)(lVar9 + 0x40) == (longlong *)0x0)) {
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_180ceca88);
    local_430 = (char *)((ulonglong)local_430 & 0xffffffff00000000);
LAB_1802e71bd:
    iVar20 = 0;
    local_430 = (char *)((ulonglong)local_430 & 0xffffffff00000000);
  }
  else {
    iVar20 = (int)(*(longlong *)(lVar9 + 0x48) - *(longlong *)(lVar9 + 0x40) >> 3) * -0x33333333;
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_180ceca88);
    local_430 = (char *)CONCAT44(local_430._4_4_,iVar20);
    if (iVar20 < 2) goto LAB_1802e71bd;
  }
  if (iVar20 < *(int *)(lVar10 + 0x14)) {
    *(undefined4 *)(lVar10 + 0x14) = 0;
  }
  if (0 < iVar20 || (0 < iVar19 || bVar27)) {
    FUN_1802e56a0();
    uVar25 = 0;
    do {
      iVar26 = *(int *)((longlong)local_418 + uVar25 * 4 + -0x20);
      if (iVar26 != 0) {
        FUN_180540170(local_288,0,0x210);
        FUN_180540170(&local_398,0,0x108);
        if (0x20 < iVar26) {
          iVar26 = 0x20;
        }
        snprintf(local_288,0x10,"Default");
        local_398 = local_288;
        uVar22 = 0;
        if (0 < iVar26) {
          do {
            uVar24 = (int)uVar22 + 1;
            snprintf(local_288 + (uVar22 + 1) * 0x10,0x10,"Variant %d",uVar24);
            alStack_390[uVar22] = (longlong)(local_288 + (uVar22 + 1) * 0x10);
            uVar22 = (ulonglong)uVar24;
          } while ((int)uVar24 < iVar26);
        }
        local_4f8 = *(int *)(lVar10 + 0xc + uVar25 * 4);
        if (iVar26 < local_4f8) {
          local_4f8 = iVar26;
        }
        FUN_1803e8a70(uVar25);
        cVar8 = FUN_1802c2640(local_4d8[uVar25],&local_4f8,&local_398,iVar26 + 1);
        if (cVar8 != '\0') {
          *(int *)(lVar10 + 0xc + uVar25 * 4) = local_4f8;
        }
        iVar26 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
        if (iVar26 < 2) {
          FUN_1803ebc00("Calling PopID() too many times!");
        }
        else {
          *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar26 + -1;
        }
      }
      uVar24 = (int)uVar25 + 1;
      uVar25 = (ulonglong)uVar24;
    } while ((int)uVar24 < 3);
    FUN_1802e5720();
    iVar26 = local_4f0;
  }
LAB_1802e7324:
  FUN_1802e56a0();
  FUN_1802d0470("model",lVar10 + 0x18);
  FUN_1802d0470("overlay",lVar10 + 0x70);
  FUN_1803e89e0(&DAT_1806e64c0);
  FUN_1802d0470(&DAT_1806e64c0,lVar10 + 200);
  FUN_1802d0470("overlay",lVar10 + 0x120);
  iVar19 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
  if (iVar19 < 2) {
    FUN_1803ebc00("Calling PopID() too many times!");
  }
  else {
    *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar19 + -1;
  }
  FUN_1803e89e0(&DAT_180760030);
  FUN_1802c0a60(&DAT_180760030,lVar10 + 0x178);
  FUN_1803ec6c0();
  FUN_1802cedb0("##color",lVar10 + 0x17c,1);
  iVar19 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
  if (iVar19 < 2) {
    FUN_1803ebc00("Calling PopID() too many times!");
  }
  else {
    *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar19 + -1;
  }
  FUN_1803e89e0(&DAT_1806f83d8);
  FUN_1802c0a60(&DAT_1806f83d8,lVar10 + 0x18c);
  FUN_1803ec6c0();
  FUN_1802cedb0("##color",lVar10 + 400,1);
  iVar19 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
  if (iVar19 < 2) {
    FUN_1803ebc00("Calling PopID() too many times!");
  }
  else {
    *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar19 + -1;
  }
  if (DAT_1809f590c != 4) {
    FUN_1802c0a60("cloth physics",lVar10 + 0x1a0);
    FUN_1802c0a60("remove sleeves",lVar10 + 0x1a1);
  }
  FUN_1802e5720();
  FUN_1802e5480();
  FUN_1802dd4a0(DAT_1809f590c,iVar26);
  return;
}



/* ===== 1802e7530 FUN_1802e7530 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802e7530(longlong param_1,longlong param_2)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  uint *puVar5;
  int iVar6;
  uint *puVar7;
  int iVar8;
  uint uVar9;
  char *pcVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong *puVar14;
  ulonglong uVar15;
  longlong lVar16;
  bool bVar17;
  undefined1 auStack_208 [32];
  char local_1e8;
  char local_1e7 [3];
  uint local_1e4 [3];
  uint local_1d8;
  uint local_1d4;
  longlong local_1d0;
  char *local_1c8;
  ulonglong local_1c0;
  ulonglong local_1b8;
  ulonglong local_1b0;
  uint local_1a8 [24];
  longlong local_148 [8];
  ulonglong local_108 [26];
  
  local_108[0x18] = DAT_180919500 ^ (ulonglong)auStack_208;
  local_1c8 = (char *)(param_1 + 0x1e8);
  if (local_1c8 != (char *)0x0) {
    iVar8 = 0;
    uVar15 = 0;
    if (*local_1c8 != '\0') {
      do {
        if (0xf < iVar8) break;
        cVar2 = *(char *)(param_1 + 0x1e8 + (longlong)iVar8);
        iVar6 = (int)cVar2;
        if ((byte)(cVar2 - 0x30U) < 10) {
          iVar6 = iVar6 + -0x30;
        }
        else if ((byte)(cVar2 + 0x9fU) < 6) {
          iVar6 = iVar6 + -0x57;
        }
        else {
          if (5 < (byte)(cVar2 + 0xbfU)) goto LAB_1802e75d4;
          iVar6 = iVar6 + -0x37;
        }
        if (iVar6 < 0) goto LAB_1802e75d4;
        iVar8 = iVar8 + 1;
        uVar15 = uVar15 << 4 | (longlong)iVar6;
      } while (*(char *)(param_1 + 0x1e8 + (longlong)iVar8) != '\0');
      if (uVar15 != 0) goto LAB_1802e75d8;
    }
  }
LAB_1802e75d4:
  uVar15 = *(ulonglong *)(param_2 + 0x10);
LAB_1802e75d8:
  iVar8 = *(int *)(param_2 + 0x18);
  local_1a8[0] = 0;
  local_1a8[1] = 0;
  local_1a8[2] = 0;
  local_1a8[3] = 0;
  local_1a8[4] = 0;
  local_1a8[5] = 0;
  local_1a8[6] = 0;
  local_1a8[7] = 0;
  local_1a8[8] = 0;
  local_1a8[9] = 0;
  local_1a8[10] = 0;
  local_1a8[0xb] = 0;
  local_1a8[0xc] = 0;
  local_1a8[0xd] = 0;
  local_1a8[0xe] = 0;
  local_1a8[0xf] = 0;
  if (0 < iVar8) {
    uVar12 = *(ulonglong *)(param_2 + 0x10);
    uVar11 = 0;
    do {
      puVar14 = &local_1c0;
      lVar13 = uVar11 * 0x80 + param_2;
      local_1c0 = *(ulonglong *)(lVar13 + 0x98) & uVar15;
      local_1b8 = *(ulonglong *)(lVar13 + 0x98) & uVar12;
      do {
        uVar4 = 0;
        if (0 < *(int *)(lVar13 + 0x50)) {
          do {
            if (*(ulonglong *)(lVar13 + 0x58 + uVar4 * 8) == *puVar14) goto LAB_1802e766d;
            uVar3 = (int)uVar4 + 1;
            uVar4 = (ulonglong)uVar3;
          } while ((int)uVar3 < *(int *)(lVar13 + 0x50));
        }
        puVar14 = puVar14 + 1;
      } while (puVar14 != &local_1b0);
      uVar4 = 0;
LAB_1802e766d:
      uVar3 = (int)uVar11 + 1;
      local_1a8[uVar11] = (uint)uVar4;
      uVar11 = (ulonglong)uVar3;
    } while ((int)uVar3 < iVar8);
  }
  cVar2 = '\0';
  iVar6 = 0;
  local_1e8 = '\0';
  local_1d0 = param_2;
  if (0 < iVar8) {
    do {
      uVar12 = 0;
      lVar16 = (longlong)iVar6;
      lVar13 = lVar16 * 0x80;
      bVar17 = true;
      pcVar10 = (char *)(param_2 + 0x20 + lVar13);
      cVar1 = *(char *)(lVar13 + 0x20 + param_2);
      local_108[0] = 0;
      local_108[1] = 0;
      lVar13 = lVar13 + param_2;
      local_108[2] = 0;
      local_108[3] = 0;
      local_108[4] = 0;
      local_108[5] = 0;
      local_108[6] = 0;
      local_108[7] = 0;
      uVar15 = uVar12;
      while ((cVar1 != '\0' && (uVar15 + 1 < 0x40))) {
        cVar1 = *pcVar10;
        if (cVar1 == '_') {
          cVar1 = ' ';
        }
        else if (((byte)(cVar1 + 0x9fU) < 0x1a) && (bVar17)) {
          cVar1 = cVar1 + -0x20;
        }
        bVar17 = cVar1 == ' ';
        *(char *)((longlong)local_108 + uVar15) = cVar1;
        pcVar10 = pcVar10 + 1;
        cVar1 = *pcVar10;
        uVar15 = uVar15 + 1;
      }
      FUN_1803e8a70(iVar6);
      iVar8 = *(int *)(lVar13 + 0x50);
      if (iVar8 == 2) {
        local_1e7[0] = local_1a8[lVar16] == 1;
        cVar1 = FUN_1802c0a60(local_108,local_1e7);
        if (cVar1 != '\0') {
          local_1e8 = '\x01';
          local_1a8[lVar16] = (uint)(local_1e7[0] != '\0');
          cVar2 = '\x01';
        }
      }
      else {
        local_108[8] = 0;
        local_108[9] = 0;
        local_108[10] = 0;
        local_108[0xb] = 0;
        local_108[0xc] = 0;
        local_108[0xd] = 0;
        local_108[0xe] = 0;
        local_108[0xf] = 0;
        local_108[0x10] = 0;
        local_108[0x11] = 0;
        local_108[0x12] = 0;
        local_108[0x13] = 0;
        local_108[0x14] = 0;
        local_108[0x15] = 0;
        local_108[0x16] = 0;
        local_108[0x17] = 0;
        local_148[0] = 0;
        local_148[1] = 0;
        local_148[2] = 0;
        local_148[3] = 0;
        local_148[4] = 0;
        local_148[5] = 0;
        local_148[6] = 0;
        local_148[7] = 0;
        local_1a8[0x10] = 0;
        local_1a8[0x11] = 0;
        local_1a8[0x12] = 0;
        local_1a8[0x13] = 0;
        local_1a8[0x14] = 0;
        local_1a8[0x15] = 0;
        local_1a8[0x16] = 0;
        local_1a8[0x17] = 0;
        uVar15 = uVar12;
        if (0 < iVar8) {
          uVar11 = uVar12;
          do {
            if ((*(ulonglong *)(lVar13 + 0x58 + uVar11 * 8) & *(ulonglong *)(lVar13 + 0x98)) == 0) {
              snprintf(local_108 + 8,0x10,&DAT_1807600a8);
              local_1a8[0x10] = (int)uVar11;
              uVar15 = 1;
              break;
            }
            uVar3 = (int)uVar11 + 1;
            uVar11 = (ulonglong)uVar3;
          } while ((int)uVar3 < iVar8);
        }
        uVar11 = uVar12;
        if (0 < *(int *)(lVar13 + 0x50)) {
          do {
            iVar8 = (int)uVar15;
            if (7 < iVar8) break;
            uVar3 = (uint)uVar12;
            if ((*(ulonglong *)(lVar13 + 0x98) &
                *(ulonglong *)(lVar13 + 0x58 + (longlong)(int)uVar3 * 8)) != 0) {
              uVar11 = (ulonglong)((int)uVar11 + 1);
              snprintf(local_108 + (longlong)iVar8 * 2 + 8,0x10,"Variant %d",uVar11);
              uVar15 = (ulonglong)(iVar8 + 1);
              local_1a8[(longlong)iVar8 + 0x10] = uVar3;
            }
            uVar12 = (ulonglong)(uVar3 + 1);
          } while ((int)(uVar3 + 1) < *(int *)(lVar13 + 0x50));
        }
        local_1e4[0] = 0;
        iVar8 = (int)uVar15;
        if (0 < iVar8) {
          uVar3 = local_1a8[lVar16];
          uVar9 = 0;
          do {
            local_148[uVar9] = (longlong)(local_108 + (ulonglong)uVar9 * 2 + 8);
            if (local_1a8[(ulonglong)uVar9 + 0x10] == uVar3) {
              local_1e4[0] = uVar9;
            }
            uVar9 = uVar9 + 1;
          } while ((int)uVar9 < iVar8);
          cVar2 = FUN_1802c2640(local_108,local_1e4,local_148,uVar15);
          if (cVar2 != '\0') {
            local_1e4[1] = 0;
            local_1e4[2] = iVar8 + -1;
            puVar7 = local_1e4 + 1;
            if (-1 < (int)local_1e4[0]) {
              puVar7 = local_1e4;
            }
            local_1e8 = '\x01';
            puVar5 = local_1e4 + 2;
            if ((int)local_1e4[0] <= iVar8 + -1) {
              puVar5 = puVar7;
            }
            local_1a8[lVar16] = local_1a8[(longlong)(int)*puVar5 + 0x10];
            param_2 = local_1d0;
            cVar2 = '\x01';
            goto LAB_1802e78db;
          }
        }
        param_2 = local_1d0;
        cVar2 = local_1e8;
      }
LAB_1802e78db:
      iVar8 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
      if (iVar8 < 2) {
        FUN_1803ebc00("Calling PopID() too many times!");
      }
      else {
        *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar8 + -1;
      }
      iVar8 = *(int *)(param_2 + 0x18);
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar8);
    if (cVar2 != '\0') {
      uVar15 = 0;
      iVar6 = 0;
      if (0 < iVar8) {
        do {
          lVar13 = (longlong)iVar6;
          local_1d8 = 0;
          lVar16 = lVar13 * 0x80 + param_2;
          local_1d4 = *(int *)(lVar16 + 0x50) - 1;
          puVar7 = &local_1d8;
          if (-1 < (int)local_1a8[lVar13]) {
            puVar7 = local_1a8 + lVar13;
          }
          puVar5 = &local_1d4;
          if ((int)local_1a8[lVar13] <= (int)local_1d4) {
            puVar5 = puVar7;
          }
          iVar6 = iVar6 + 1;
          uVar15 = uVar15 | *(ulonglong *)(lVar16 + 0x58 + (longlong)(int)*puVar5 * 8);
        } while (iVar6 < iVar8);
      }
      if (local_1c8 != (char *)0x0) {
        if (uVar15 == 0) {
          *local_1c8 = '\0';
        }
        else {
          snprintf(local_1c8,0x14,&DAT_18075bb88,uVar15);
        }
      }
    }
  }
  return;
}



/* ===== 1802e79e0 FUN_1802e79e0 ===== */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802e79e0(undefined8 param_1,undefined8 param_2)

{
  int *piVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  int *piVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  int iVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  int *piVar19;
  ulonglong unaff_R12;
  ulonglong uVar20;
  undefined8 uStack_1720;
  undefined1 auStack_1718 [8];
  undefined1 auStack_1710 [24];
  undefined4 local_16f8;
  undefined8 *local_16e0;
  undefined8 *puStack_16d8;
  undefined8 *local_16d0;
  undefined1 local_16b8 [2080];
  int local_e98;
  char local_e94 [780];
  char *local_b88;
  undefined8 local_b80 [357];
  ulonglong local_58;
  undefined8 uStack_48;
  
  uStack_48 = 0x1802e79ff;
  local_58 = DAT_180919500 ^ (ulonglong)auStack_1718;
  iVar15 = DAT_1809214b0;
  if (DAT_1809f5900 == 0) {
    iVar15 = DAT_1809214ac;
  }
  local_16f8 = DAT_1808acba4;
  cVar5 = FUN_1802e5000("##inv_customization","Customization",param_1,param_2);
  puVar17 = auStack_1718;
  puVar18 = auStack_1718;
  if (cVar5 == '\0') goto LAB_1802e8006;
  if (iVar15 != 0) {
    lVar7 = FUN_1800f1470(iVar15,DAT_1809f5900);
    puVar17 = auStack_1718;
    if (lVar7 != 0) {
      iVar6 = FUN_1804e4d70(&DAT_1809f2710);
      if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1804e4a90(5);
      }
      if (DAT_1809f275c == 0x7fffffff) {
        DAT_1809f275c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
        FUN_1804e4a90(6);
      }
      FUN_180540530(&local_b88,&DAT_1809f1be0,0xb28);
      FUN_1804e4e90(&DAT_1809f2710);
      FUN_180540530(local_16b8,&local_b88,0xb28);
      if ((((char)local_b88 == '\0') || ((int)((ulonglong)local_b88 >> 0x20) != iVar15)) ||
         ((int)local_b80[0] != DAT_1809f5900)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      FUN_1802e56a0();
      if (DAT_180ccf6d4 == '\0') {
        AcquireSRWLockExclusive((PSRWLOCK)&DAT_180cecb60);
        if (DAT_180ccf607 == '\0') {
          DAT_180ccf607 = '\x01';
          FUN_180227480();
          DAT_180ccf6d4 = '\x01';
        }
        ReleaseSRWLockExclusive((PSRWLOCK)&DAT_180cecb60);
      }
      local_16e0 = (undefined8 *)0x0;
      puStack_16d8 = (undefined8 *)0x0;
      local_16d0 = (undefined8 *)0x0;
      uVar8 = ((longlong)DAT_180cecbb8 - (longlong)DAT_180cecbb0 >> 5) + 1;
      uVar20 = 0x1fffffffffffffff;
      if (uVar8 == 0) {
LAB_1802e7c20:
        puVar14 = puStack_16d8;
        puVar17 = auStack_1718;
        local_16e0 = puStack_16d8;
        if (puStack_16d8 == local_16d0) {
          unaff_R12 = 1;
          uVar8 = (longlong)local_16d0 - (longlong)puStack_16d8 >> 3;
          if (uVar8 <= 0x1fffffffffffffff - (uVar8 >> 1)) {
            uVar8 = (uVar8 >> 1) + uVar8;
            uVar20 = unaff_R12;
            if (uVar8 != 0) {
              uVar20 = uVar8;
            }
            if (0x1fffffffffffffff < uVar20) {
                    /* WARNING: Subroutine does not return */
              FUN_18000d840();
            }
          }
          uVar20 = uVar20 * 8;
          puVar9 = (undefined8 *)FUN_18000fb70(uVar20);
          *puVar9 = "Default";
          if (puVar14 == puStack_16d8) {
            lVar11 = (longlong)puStack_16d8 - (longlong)local_16e0;
            puVar13 = puVar9;
            puVar14 = local_16e0;
          }
          else {
            FUN_180540530(puVar9,local_16e0,(longlong)puVar14 - (longlong)local_16e0);
            lVar11 = (longlong)puStack_16d8 - (longlong)puVar14;
            puVar13 = puVar9 + 1;
          }
          puVar17 = auStack_1718;
          puVar16 = auStack_1718;
          FUN_180540530(puVar13,puVar14,lVar11);
          if (local_16e0 != (undefined8 *)0x0) {
            puVar14 = local_16e0;
            if ((ulonglong)(((longlong)local_16d0 - (longlong)local_16e0 >> 3) * 8) < 0x1000)
            goto LAB_1802e7d29;
            puVar14 = (undefined8 *)local_16e0[-1];
            puVar17 = auStack_1718;
            if ((undefined1 *)0x1f < (undefined1 *)((longlong)local_16e0 + (-8 - (longlong)puVar14))
               ) goto LAB_1802e7d22;
            goto LAB_1802e7d2c;
          }
          goto LAB_1802e7d34;
        }
        *puStack_16d8 = "Default";
        puVar14 = puStack_16d8 + 1;
      }
      else {
        if (0x1fffffffffffffff < uVar8) {
          local_16d0 = (undefined8 *)0x0;
          puStack_16d8 = (undefined8 *)0x0;
          local_16e0 = puStack_16d8;
                    /* WARNING: Subroutine does not return */
          FUN_1800118d0();
        }
        puVar9 = (undefined8 *)FUN_18000fb70(uVar8 * 8);
        FUN_180540530(puVar9,local_16e0,(longlong)puStack_16d8 - (longlong)local_16e0);
        if (local_16e0 == (undefined8 *)0x0) {
LAB_1802e7bfe:
          local_16e0 = puVar9;
          puStack_16d8 = puVar9;
          local_16d0 = puVar9 + uVar8;
          goto LAB_1802e7c20;
        }
        uVar12 = ((longlong)local_16d0 - (longlong)local_16e0 >> 3) * 8;
        if (uVar12 < 0x1000) {
          puVar14 = local_16e0;
LAB_1802e7bf3:
          thunk_FUN_1803d64e0(puVar14,uVar12);
          goto LAB_1802e7bfe;
        }
        if ((undefined1 *)((longlong)local_16e0 + (-8 - (longlong)local_16e0[-1])) <
            (undefined1 *)0x20) {
          uVar12 = uVar12 + 0x27;
          puVar14 = (undefined8 *)local_16e0[-1];
          goto LAB_1802e7bf3;
        }
LAB_1802e7d22:
        puVar14 = (undefined8 *)&DAT_00000005;
        pcVar3 = (code *)swi(0x29);
        (*pcVar3)(5);
        puVar16 = auStack_1710;
LAB_1802e7d29:
        puVar17 = puVar16;
LAB_1802e7d2c:
        *(undefined8 *)(puVar17 + -8) = 0x1802e7d34;
        thunk_FUN_1803d64e0(puVar14);
LAB_1802e7d34:
        *(undefined8 **)(puVar17 + 0x38) = puVar9;
        puVar14 = puVar9 + unaff_R12;
        *(undefined1 **)(puVar17 + 0x48) = (undefined1 *)(uVar20 + (longlong)puVar9);
      }
      puVar9 = DAT_180cecbb8;
      *(undefined8 **)(puVar17 + 0x40) = puVar14;
      puVar13 = DAT_180cecbb0;
      if (DAT_180cecbb0 != DAT_180cecbb8) {
        do {
          if ((ulonglong)puVar13[3] < 0x10) {
            puVar14 = puVar13;
          }
          else {
            puVar14 = (undefined8 *)*puVar13;
          }
          *(undefined8 **)(puVar17 + 0x50) = puVar14;
          *(undefined8 *)(puVar17 + -8) = 0x1802e7d83;
          FUN_1800242d0(puVar17 + 0x38,puVar17 + 0x50);
          puVar13 = puVar13 + 4;
        } while (puVar13 != puVar9);
        puVar14 = *(undefined8 **)(puVar17 + 0x40);
      }
      iVar15 = (int)((longlong)DAT_180cecbb8 - (longlong)DAT_180cecbb0 >> 5);
      *(int *)(puVar17 + 0x50) = iVar15;
      *(undefined4 *)(puVar17 + 0x30) = 0;
      piVar1 = (int *)(lVar7 + 0x1a4);
      piVar19 = (int *)(puVar17 + 0x30);
      if (-1 < *piVar1) {
        piVar19 = piVar1;
      }
      piVar10 = (int *)(puVar17 + 0x50);
      if (*piVar1 <= iVar15) {
        piVar10 = piVar19;
      }
      *piVar1 = *piVar10;
      *(undefined8 *)(puVar17 + -8) = 0x1802e7ded;
      cVar5 = FUN_1802c2640("radio commands",piVar1,*(longlong *)(puVar17 + 0x38),
                            (longlong)puVar14 - *(longlong *)(puVar17 + 0x38) >> 3);
      if ((cVar5 != '\0') && (DAT_180ccf6d4 == '\0')) {
        *(undefined8 *)(puVar17 + -8) = 0x1802e7e09;
        AcquireSRWLockExclusive((PSRWLOCK)&DAT_180cecb60);
        if (DAT_180ccf607 == '\0') {
          DAT_180ccf607 = '\x01';
          *(undefined8 *)(puVar17 + -8) = 0x1802e7e1e;
          FUN_180227480();
          DAT_180ccf6d4 = '\x01';
        }
        *(undefined8 *)(puVar17 + -8) = 0x1802e7e32;
        ReleaseSRWLockExclusive((PSRWLOCK)&DAT_180cecb60);
      }
      if ((!bVar4) || (puVar17[0x6c] != '\0')) {
        *(undefined8 *)(puVar17 + -8) = 0x1802e7e51;
        FUN_1802c0a60("cloth physics",lVar7 + 0x1a0);
      }
      *(undefined8 *)(puVar17 + -8) = 0x1802e7e64;
      FUN_1802c0a60("remove sleeves",lVar7 + 0x1a1);
      if ((!bVar4) || (local_e98 < 1)) {
LAB_1802e7f88:
        *(undefined8 *)(puVar17 + -8) = 0x1802e7f8d;
        FUN_1802e5720();
        if (bVar4) goto LAB_1802e7f92;
      }
      else {
        local_b80[0] = 0;
        local_b80[1] = 0;
        local_b80[2] = 0;
        local_b80[3] = 0;
        local_b80[4] = 0;
        local_b80[5] = 0;
        local_b80[6] = 0;
        local_b80[7] = 0;
        local_b80[8] = 0;
        local_b80[9] = 0;
        local_b80[10] = 0;
        local_b80[0xb] = 0;
        local_b80[0xc] = 0;
        local_b80[0xd] = 0;
        local_b80[0xe] = 0;
        local_b80[0xf] = 0;
        local_b88 = "Model Default";
        *(undefined4 *)(puVar17 + 0x30) = 0;
        iVar15 = 0;
        cVar5 = *(char *)(lVar7 + 0x1a8);
        do {
          lVar11 = (longlong)iVar15;
          iVar15 = iVar15 + 1;
          local_b80[(longlong)iVar15 + -1] = local_e94 + lVar11 * 0x30;
          if (cVar5 != '\0') {
            *(undefined8 *)(puVar17 + -8) = 0x1802e7f13;
            iVar6 = strcmp((char *)(lVar7 + 0x1a8),local_e94 + lVar11 * 0x30);
            if (iVar6 == 0) {
              *(int *)(puVar17 + 0x30) = iVar15;
            }
          }
        } while (iVar15 < local_e98);
        *(undefined8 *)(puVar17 + -8) = 0x1802e7f3b;
        cVar5 = FUN_1802c2640("material variant",puVar17 + 0x30,&local_b88,local_e98 + 1);
        if (cVar5 == '\0') goto LAB_1802e7f88;
        if (*(int *)(puVar17 + 0x30) < 1) {
          *(undefined8 *)(lVar7 + 0x1a8) = 0;
          *(undefined8 *)(lVar7 + 0x1b0) = 0;
          *(undefined8 *)(lVar7 + 0x1b8) = 0;
          *(undefined8 *)(lVar7 + 0x1c0) = 0;
          *(undefined8 *)(lVar7 + 0x1c8) = 0;
          *(undefined8 *)(lVar7 + 0x1d0) = 0;
          *(undefined8 *)(lVar7 + 0x1d8) = 0;
          *(undefined8 *)(lVar7 + 0x1e0) = 0;
          *(undefined8 *)(puVar17 + -8) = 0x1802e7f66;
          FUN_1802e5720();
        }
        else {
          uVar2 = local_b80[(longlong)*(int *)(puVar17 + 0x30) + -1];
          *(undefined8 *)(puVar17 + -8) = 0x1802e7f81;
          snprintf((undefined8 *)(lVar7 + 0x1a8),0x40,&DAT_1806d3198,uVar2);
          *(undefined8 *)(puVar17 + -8) = 0x1802e7f86;
          FUN_1802e5720();
        }
LAB_1802e7f92:
        if (0 < *(int *)(puVar17 + 0x78)) {
          *(undefined8 *)(puVar17 + -8) = 0x1802e7f9e;
          FUN_1802e56a0();
          *(undefined8 *)(puVar17 + -8) = 0x1802e7fab;
          FUN_1802e7530(lVar7,puVar17 + 0x60);
          *(undefined8 *)(puVar17 + -8) = 0x1802e7fb0;
          FUN_1802e5720();
        }
      }
      lVar7 = *(longlong *)(puVar17 + 0x38);
      if (lVar7 != 0) {
        lVar11 = lVar7;
        if ((0xfff < (ulonglong)((*(longlong *)(puVar17 + 0x48) - lVar7 >> 3) * 8)) &&
           (lVar11 = *(longlong *)(lVar7 + -8), 0x1f < (lVar7 - lVar11) - 8U)) {
          lVar11 = 5;
          pcVar3 = (code *)swi(0x29);
          (*pcVar3)(5);
          puVar17 = puVar17 + 8;
        }
        *(undefined8 *)(puVar17 + -8) = 0x1802e8001;
        thunk_FUN_1803d64e0(lVar11);
      }
    }
  }
  *(undefined8 *)(puVar17 + -8) = 0x1802e8006;
  FUN_1802e5480();
  puVar18 = puVar17;
LAB_1802e8006:
  *(undefined8 *)(puVar18 + -8) = 0x1802e8015;
  return;
}



/* ===== 1802e8060 FUN_1802e8060 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802e8060(char param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  uint uVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int *piVar9;
  char *****pppppcVar10;
  longlong *plVar11;
  float *pfVar12;
  undefined1 uVar13;
  float *pfVar14;
  char *pcVar15;
  longlong lVar16;
  int *piVar17;
  longlong lVar18;
  char *pcVar19;
  uint uVar20;
  bool bVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined4 uVar27;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined1 auStack_1e8 [32];
  char ****local_1c8;
  char *****local_1c0;
  char *****local_1b8;
  undefined8 local_1b0;
  ulonglong local_1a8;
  undefined4 local_1a0;
  undefined4 local_198;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  float local_170;
  float local_16c;
  float local_168;
  float local_164;
  char ****local_158;
  longlong lStack_150;
  float local_148;
  float fStack_144;
  float local_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  float local_128 [3];
  char ***local_11c;
  longlong local_110;
  longlong lStack_108;
  undefined8 local_100;
  char *****local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  ulonglong uStack_e0;
  ulonglong local_d8;
  
  lVar16 = DAT_180ca0a50;
  local_d8 = DAT_180919500 ^ (ulonglong)auStack_1e8;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  lVar18 = *(longlong *)(lVar16 + 0x14f8);
  auVar29._0_8_ = FUN_18053fc00();
  fVar33 = DAT_1808ac864;
  fVar22 = (float)auVar29._0_8_;
  auVar29._8_4_ = (undefined4)extraout_XMM0_Qb;
  auVar29._12_4_ = (undefined4)((ulonglong)extraout_XMM0_Qb >> 0x20);
  if (param_1 == '\0') {
    fVar35 = 0.0;
  }
  else {
    fVar35 = DAT_1808ac864;
  }
  bVar21 = DAT_1809f590c < 4;
  if (bVar21) {
    FUN_1802e4bc0(&local_110);
    lVar16 = DAT_180ca0a50;
  }
  else {
    local_110 = 0;
    lStack_108 = 0;
    local_100 = 0;
  }
  if ((-1 < DAT_1809f597c) && (bVar21)) {
    fVar23 = (float)FUN_18053f0d0((*(float *)(lVar18 + 0x34) - fVar22) * DAT_1808ac1f4);
    fVar34 = *(float *)(lVar18 + 0x2c);
    fVar25 = *(float *)(lVar18 + 0x28);
    *(undefined1 *)(*(longlong *)(lVar16 + 0x14f8) + 0xce) = 1;
    lVar16 = *(longlong *)(lVar16 + 0x14f8);
    *(float *)(lVar16 + 0x118) = fVar35 + fVar25;
    *(float *)(lVar16 + 0x11c) = fVar23 + fVar34;
    *(undefined1 *)(lVar16 + 0x159) = 1;
    uVar2 = DAT_1808acbc0;
    uVar27 = DAT_1808ac8d4;
    local_188 = (char ****)CONCAT44(fVar22,fVar22);
    local_1b0 = CONCAT44(local_1b0._4_4_,DAT_180960f38);
    local_1b8 = (char *****)((ulonglong)local_1b8 & 0xffffffffffffff00);
    local_1c0 = (char *****)&local_188;
    local_1c8 = (char ****)CONCAT44(local_1c8._4_4_,DAT_1808ac8d4);
    cVar4 = FUN_1802d59d0("##camera_left","inv_angle_left",
                          "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 320 512\" width=\"320\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M41 234C28 246 28 267 41 279L201 439C213 451 234 451 246 439C259 427 259 406 246 394L109 256L246 119C259 107 259 86 246 74C234 61 213 61 201 74L41 234L41 234ZM41 234Z\"/></svg>"
                          ,DAT_1808acbc0);
    if (cVar4 != '\0') {
      FUN_1802e4bc0(&local_148);
      if ((DAT_1809f597c != 1) &&
         (1 < (int)(CONCAT44(uStack_13c,local_140) - CONCAT44(fStack_144,local_148) >> 5))) {
        DAT_1809f597c = 1;
        FUN_1802e4d00();
      }
      FUN_1800288b0(&local_148);
    }
    fVar24 = (float)FUN_18053f0d0((*(float *)(lVar18 + 0x34) - fVar22) * DAT_1808ac1f4);
    lVar16 = DAT_180ca0a50;
    fVar34 = *(float *)(lVar18 + 0x2c);
    fVar25 = *(float *)(lVar18 + 0x30);
    fVar23 = *(float *)(lVar18 + 0x28);
    *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
    lVar16 = *(longlong *)(lVar16 + 0x14f8);
    *(float *)(lVar16 + 0x118) = ((fVar25 + fVar23) - fVar22) - fVar35;
    *(float *)(lVar16 + 0x11c) = fVar24 + fVar34;
    *(undefined1 *)(lVar16 + 0x159) = 1;
    local_188 = (char ****)CONCAT44(fVar22,fVar22);
    local_1b0 = CONCAT44(local_1b0._4_4_,DAT_180960f38);
    local_1b8 = (char *****)((ulonglong)local_1b8 & 0xffffffffffffff00);
    local_1c0 = (char *****)&local_188;
    local_1c8 = (char ****)CONCAT44(local_1c8._4_4_,uVar27);
    cVar4 = FUN_1802d59d0("##camera_right","inv_angle_right",
                          "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 320 512\" width=\"320\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M278 234C291 246 291 267 278 279L118 439C106 451 85 451 73 439C60 427 60 406 73 394L210 256L73 119C60 107 60 86 73 74C85 61 106 61 118 74L278 234L278 234ZM278 234Z\"/></svg>"
                          ,uVar2);
    if (cVar4 != '\0') {
      FUN_1802e4bc0(&local_148);
      if ((DAT_1809f597c != 0) &&
         (0 < (int)(CONCAT44(uStack_13c,local_140) - CONCAT44(fStack_144,local_148) >> 5))) {
        DAT_1809f597c = 0;
        FUN_1802e4d00();
      }
      FUN_1800288b0(&local_148);
    }
  }
  fVar34 = DAT_1808ac1f4;
  fVar33 = ((*(float *)(lVar18 + 0x34) + *(float *)(lVar18 + 0x2c)) - fVar22) - fVar33;
  DAT_181107498 = fVar35 + *(float *)(lVar18 + 0x28);
  local_188 = (char ****)0x0;
  FUN_1803d89a0(0xe,&local_188);
  fVar35 = DAT_181107498;
  lVar18 = DAT_180ca0a50;
  uVar27 = DAT_1808acbe4;
  if (DAT_1809f590c == 4) {
    iVar7 = DAT_1809214b0;
    if (DAT_1809f5900 == 0) {
      iVar7 = DAT_1809214ac;
    }
LAB_1802e83d1:
  }
  else {
    iVar7 = DAT_1809f5910;
    if (1 < DAT_1809f590c - 1) {
      if (DAT_1809f590c - 1 < 2) {
        iVar7 = DAT_1809f5914;
        if (DAT_1809f5910 != 0) {
          iVar7 = DAT_1809f5910;
        }
      }
      else if ((DAT_1809f590c != 0) && (DAT_1809f590c != 3)) {
        iVar7 = 0;
      }
      goto LAB_1802e83d1;
    }
  }
  if ((iVar7 != 0) && (1 < DAT_1809f590c - 5)) {
    *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
    lVar16 = *(longlong *)(lVar18 + 0x14f8);
    *(float *)(lVar16 + 0x118) = fVar35;
    *(float *)(lVar16 + 0x11c) = fVar33;
    *(undefined1 *)(lVar16 + 0x159) = 1;
    iVar6 = FUN_1803e8900(*(undefined8 *)(lVar18 + 0x14f8),"##inv_options");
    if (*(int *)(DAT_180ca0a50 + 0x2030) < *(int *)(DAT_180ca0a50 + 0x2020)) {
      lVar18 = (longlong)*(int *)(DAT_180ca0a50 + 0x2030) * 0x58;
      if ((*(int *)(lVar18 + *(longlong *)(DAT_180ca0a50 + 0x2028)) != iVar6) ||
         (*(char *)(lVar18 + 0x34 + *(longlong *)(DAT_180ca0a50 + 0x2028)) != '\0'))
      goto LAB_1802e8475;
      uVar13 = 1;
    }
    else {
LAB_1802e8475:
      uVar13 = 0;
    }
    local_1b8 = (char *****)CONCAT44(local_1b8._4_4_,DAT_180960f38);
    local_1c0 = (char *****)0x18075fed8;
    local_1c8 = (char ****)CONCAT71(local_1c8._1_7_,uVar13);
    cVar4 = FUN_1802e4a60("##options","inv_options",
                          "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 448 512\" width=\"448\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M384 480C419 480 448 451 448 416L448 96C448 61 419 32 384 32L64 32C28 32 0 61 0 96L0 416C0 451 28 480 64 480L384 480ZM384 336C384 354 369 368 352 368L320 368L320 384C320 402 305 416 288 416C270 416 256 402 256 384L256 368L96 368C78 368 64 354 64 336C64 319 78 304 96 304L256 304L256 288C256 271 270 256 288 256C305 256 320 271 320 288L320 304L352 304C369 304 384 319 384 336ZM352 144C369 144 384 159 384 176C384 194 369 208 352 208L192 208L192 224C192 242 177 256 160 256C142 256 128 242 128 224L128 208L96 208C78 208 64 194 64 176C64 159 78 144 96 144L128 144L128 128C128 111 142 96 160 96C177 96 192 111 192 128L192 144L352 144Z\"/></svg>"
                          ,uVar27);
    if (cVar4 != '\0') {
      FUN_1802b4d80("##inv_options");
    }
    local_180 = *(undefined8 *)(DAT_180ca0a50 + 0x1efc);
    local_178 = *(undefined8 *)(DAT_180ca0a50 + 0x1ef4);
    FUN_1802e6820(&local_178,&local_180);
  }
  fVar35 = DAT_181107498;
  lVar18 = DAT_180ca0a50;
  if ((DAT_1809f590c == 4) && (iVar7 != 0)) {
    *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
    lVar16 = *(longlong *)(lVar18 + 0x14f8);
    *(float *)(lVar16 + 0x118) = fVar35;
    *(float *)(lVar16 + 0x11c) = fVar33;
    *(undefined1 *)(lVar16 + 0x159) = 1;
    iVar7 = FUN_1803e8900(*(undefined8 *)(lVar18 + 0x14f8),"##inv_customization");
    if (*(int *)(DAT_180ca0a50 + 0x2030) < *(int *)(DAT_180ca0a50 + 0x2020)) {
      lVar18 = (longlong)*(int *)(DAT_180ca0a50 + 0x2030) * 0x58;
      if ((*(int *)(lVar18 + *(longlong *)(DAT_180ca0a50 + 0x2028)) != iVar7) ||
         (*(char *)(lVar18 + 0x34 + *(longlong *)(DAT_180ca0a50 + 0x2028)) != '\0'))
      goto LAB_1802e858f;
      uVar13 = 1;
    }
    else {
LAB_1802e858f:
      uVar13 = 0;
    }
    local_1b8 = (char *****)CONCAT44(local_1b8._4_4_,DAT_180960f38);
    local_1c0 = (char *****)0x180760098;
    local_1c8 = (char ****)CONCAT71(local_1c8._1_7_,uVar13);
    cVar4 = FUN_1802e4a60("##customization","inv_customization",
                          "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 576 512\" width=\"576\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M264 6C279 -1 296 -1 311 6L530 107C538 111 544 119 544 128C544 138 538 146 530 150L311 251C296 258 279 258 264 251L45 150C37 146 31 138 31 128C31 119 37 111 45 107L264 6ZM476 210L530 235C538 239 544 247 544 256C544 266 538 274 530 278L311 379C296 386 279 386 264 379L45 278C37 274 31 266 31 256C31 247 37 239 45 235L99 210L251 280C274 291 301 291 324 280L476 210L476 210ZM476 210ZM324 408L476 338L530 363C538 367 544 375 544 384C544 394 538 402 530 406L311 506C296 513 279 513 264 506L45 406C37 402 31 394 31 384C31 375 37 367 45 363L99 338L251 408C274 419 301 419 324 408L324 408ZM324 408Z\"/></svg>"
                          ,DAT_1808acc0c);
    if (cVar4 != '\0') {
      FUN_1802b4d80("##inv_customization");
    }
    local_180 = *(undefined8 *)(DAT_180ca0a50 + 0x1efc);
    local_178 = *(undefined8 *)(DAT_180ca0a50 + 0x1ef4);
    FUN_1802e79e0(&local_178,&local_180);
  }
  fVar35 = DAT_181107498;
  lVar18 = DAT_180ca0a50;
  uVar2 = DAT_1808acc00;
  if (bVar21) {
    if (DAT_1809f590c - 1 < 2) {
      iVar7 = DAT_1809f5914;
      if (DAT_1809f5910 != 0) {
        iVar7 = DAT_1809f5910;
      }
    }
    else {
      if ((DAT_1809f590c != 0) && (DAT_1809f590c != 3)) goto LAB_1802e8721;
      iVar7 = DAT_1809f5910;
    }
    if ((iVar7 != 0) && (local_110 != lStack_108)) {
      *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
      lVar18 = *(longlong *)(lVar18 + 0x14f8);
      *(float *)(lVar18 + 0x118) = fVar35;
      *(float *)(lVar18 + 0x11c) = fVar33;
      *(undefined1 *)(lVar18 + 0x159) = 1;
      bVar21 = -1 < DAT_1809f597c;
      pcVar19 = 
      "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 512 512\" width=\"512\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M416 208C416 254 401 297 376 331L502 457C515 469 515 490 502 502C490 515 469 515 457 502L330 376C296 402 253 416 208 416C93 416 0 323 0 208C0 94 93 0 208 0C322 0 416 94 416 208ZM184 296C184 310 194 320 208 320C221 320 232 310 232 296L232 232L296 232C309 232 320 222 320 208C320 195 309 184 296 184L232 184L232 120C232 107 221 96 208 96C194 96 184 107 184 120L184 184L120 184C106 184 96 195 96 208C96 222 106 232 120 232L184 232L184 296Z\"/></svg>"
      ;
      if (-1 < DAT_1809f597c) {
        pcVar19 = 
        "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 512 512\" width=\"512\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M416 208C416 254 401 297 376 331L502 457C515 469 515 490 502 502C490 515 469 515 457 502L330 376C296 402 253 416 208 416C93 416 0 323 0 208C0 94 93 0 208 0C322 0 416 94 416 208ZM136 184C122 184 112 195 112 208C112 222 122 232 136 232L280 232C293 232 304 222 304 208C304 195 293 184 280 184L136 184Z\"/></svg>"
        ;
      }
      pcVar15 = "inv_camera_on";
      if (-1 < DAT_1809f597c) {
        pcVar15 = "inv_camera_off";
      }
      local_1b8 = (char *****)CONCAT44(local_1b8._4_4_,DAT_180960f38);
      local_1c0 = (char *****)0x180760148;
      local_1c8 = (char ****)((ulonglong)local_1c8 & 0xffffffffffffff00);
      cVar4 = FUN_1802e4a60("##camera",pcVar15,pcVar19,uVar2);
      if (cVar4 != '\0') {
        DAT_1809f597c = (bVar21 ^ 1) - 1;
        FUN_1802e4d00();
      }
    }
  }
LAB_1802e8721:
  fVar35 = DAT_181107498;
  lVar18 = DAT_180ca0a50;
  if (param_1 == '\0') {
    *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
    lVar18 = *(longlong *)(lVar18 + 0x14f8);
    *(float *)(lVar18 + 0x118) = fVar35;
    *(float *)(lVar18 + 0x11c) = fVar33;
    *(undefined1 *)(lVar18 + 0x159) = 1;
    local_1b8 = (char *****)CONCAT44(local_1b8._4_4_,DAT_180960f38);
    local_1c0 = (char *****)0x1807600f8;
    local_1c8 = (char ****)((ulonglong)local_1c8 & 0xffffffffffffff00);
    cVar4 = FUN_1802e4a60("##big","inv_big_preview",
                          "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 512 512\" width=\"512\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M32 64C14 64 0 79 0 96L0 192C0 210 14 224 32 224C49 224 64 210 64 192L64 128L128 128C145 128 160 114 160 96C160 79 145 64 128 64L32 64ZM64 320C64 303 49 288 32 288C14 288 0 303 0 320L0 416C0 434 14 448 32 448L128 448C145 448 160 434 160 416C160 399 145 384 128 384L64 384L64 320ZM384 64C366 64 352 79 352 96C352 114 366 128 384 128L448 128L448 192C448 210 462 224 480 224C497 224 512 210 512 192L512 96C512 79 497 64 480 64L384 64ZM512 320C512 303 497 288 480 288C462 288 448 303 448 320L448 384L384 384C366 384 352 399 352 416C352 434 366 448 384 448L480 448C497 448 512 434 512 416L512 320Z\"/></svg>"
                          ,uVar2);
    if (cVar4 != '\0') {
      FUN_1802b4d80("##inv_big");
    }
  }
  if (DAT_1809f590c - 1 < 2) {
    iVar7 = DAT_1809f5914;
  }
  else {
    iVar7 = DAT_1809f5910;
    if ((DAT_1809f590c != 0) && (DAT_1809f590c != 3)) {
      iVar7 = 0;
    }
  }
  if ((iVar7 != 0) &&
     ((DAT_1809f590c - 1 < 3 ||
      ((((DAT_1809f590c == 0 && (lVar18 = FUN_180280c60(iVar7), lVar18 != 0)) &&
        (cVar4 = FUN_1802dd280(lVar18,0), cVar4 != '\0')) &&
       (cVar4 = FUN_1802dd280(lVar18,1), cVar4 != '\0')))))) {
    fVar35 = DAT_181107498;
    lVar18 = DAT_180ca0a50;
    *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
    lVar18 = *(longlong *)(lVar18 + 0x14f8);
    *(float *)(lVar18 + 0x118) = fVar35;
    *(float *)(lVar18 + 0x11c) = fVar33;
    *(undefined1 *)(lVar18 + 0x159) = 1;
    if (DAT_1809f590c == 1) {
      iVar6 = -1;
    }
    else {
      iVar6 = iVar7;
      if (DAT_1809f590c == 2) {
        iVar6 = -2;
      }
    }
    piVar17 = &DAT_18093c64c;
    piVar9 = &DAT_18093c64c;
    do {
      if (*piVar9 == iVar6) {
        uVar8 = DAT_1809f54bc;
        goto LAB_1802e88b0;
      }
      piVar9 = piVar9 + 1;
    } while (piVar9 != (int *)&DAT_18093c6cc);
    uVar8 = DAT_180960f38;
LAB_1802e88b0:
    local_1b8 = (char *****)CONCAT44(local_1b8._4_4_,uVar8);
    local_1c0 = (char *****)0x1807601c8;
    local_1c8 = (char ****)((ulonglong)local_1c8 & 0xffffffffffffff00);
    cVar4 = FUN_1802e4a60("##both","inv_both_teams",
                          "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 448 512\" width=\"448\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M342 87C355 75 355 54 342 42C330 29 309 29 297 42L160 179L102 122C90 109 69 109 57 122C44 134 44 155 57 167L137 247C149 260 170 260 182 247L342 87L342 87ZM342 87ZM438 215C451 203 451 182 438 170C426 157 405 157 393 170L159 403L54 298C42 285 21 285 9 298C-3 310 -3 331 9 343L137 470C149 483 170 483 182 470L438 215L438 215ZM438 215Z\"/></svg>"
                          ,uVar27);
    uVar3 = DAT_1809f590c;
    if (cVar4 != '\0') {
      if (DAT_1809f590c == 1) {
        iVar7 = -1;
      }
      else if (DAT_1809f590c == 2) {
        iVar7 = -2;
      }
      piVar9 = &DAT_18093c64c;
      do {
        if (*piVar9 == iVar7) {
          *piVar9 = 0;
          goto LAB_1802e8927;
        }
        piVar9 = piVar9 + 1;
      } while (piVar9 != (int *)&DAT_18093c6cc);
      do {
        if (*piVar17 == 0) {
          *piVar17 = iVar7;
          break;
        }
        piVar17 = piVar17 + 1;
      } while (piVar17 != (int *)&DAT_18093c6cc);
LAB_1802e8927:
      if (uVar3 - 1 < 2) {
        iVar7 = DAT_1809f5914;
        if (DAT_1809f5910 != 0) {
          iVar7 = DAT_1809f5910;
        }
      }
      else if ((uVar3 == 0) || (uVar3 == 3)) {
        iVar7 = DAT_1809f5910;
      }
      else {
        iVar7 = 0;
      }
      FUN_1802dd4a0(uVar3,iVar7);
    }
  }
  fVar35 = DAT_181107498;
  lVar18 = DAT_180ca0a50;
  if (param_1 != '\0') goto LAB_1802e8f8a;
  if (DAT_1809f590c == 4) {
    *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
    lVar18 = *(longlong *)(lVar18 + 0x14f8);
    *(float *)(lVar18 + 0x118) = fVar35;
    *(float *)(lVar18 + 0x11c) = fVar33;
    *(undefined1 *)(lVar18 + 0x159) = 1;
    local_1b8 = (char *****)CONCAT44(local_1b8._4_4_,DAT_180960f38);
    local_1c0 = (char *****)0x180760198;
    local_1c8 = (char ****)((ulonglong)local_1c8 & 0xffffffffffffff00);
    cVar4 = FUN_1802e4a60("##refresh","inv_refresh",
                          "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 512 512\" width=\"512\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M105 203C112 181 125 161 142 143C205 81 306 81 369 143L386 160L352 160C334 160 320 175 320 192C320 210 334 224 352 224L463 224C463 224 463 224 463 224L463 224C481 224 495 210 495 192L495 80C495 63 481 48 463 48C446 48 431 63 431 80L431 116L414 98C326 11 185 11 97 98C73 122 55 151 44 182C38 199 47 217 64 223C80 229 99 220 105 203L105 203ZM105 203ZM38 290C33 291 29 294 25 298C21 302 18 307 17 312C16 313 16 314 16 316C16 317 15 319 15 321L15 432C15 449 30 464 47 464C65 464 79 449 79 432L79 397L97 415L97 415C185 501 326 501 414 415C438 390 456 362 467 331C473 314 464 296 447 290C431 285 412 293 406 310C399 332 386 352 369 370C306 432 205 432 142 370L142 370L125 352L159 352C177 352 191 338 191 320C191 303 177 288 159 288L48 288C46 288 45 289 43 289C41 289 40 289 38 290L38 290ZM38 290Z\"/></svg>"
                          ,uVar2);
    if (cVar4 != '\0') {
      FUN_180275440();
      FUN_180275fe0(&DAT_180921498);
    }
  }
  fVar35 = DAT_181107498;
  lVar18 = DAT_180ca0a50;
  if (1 < DAT_1809f590c - 1) goto LAB_1802e8f8a;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  lVar18 = *(longlong *)(lVar18 + 0x14f8);
  *(float *)(lVar18 + 0x118) = fVar35;
  *(float *)(lVar18 + 0x11c) = fVar33;
  *(undefined1 *)(lVar18 + 0x159) = 1;
  if (DAT_1809f590c - 1 < 2) {
    iVar7 = DAT_1809f5914;
    if (DAT_1809f5910 != 0) {
      iVar7 = DAT_1809f5910;
    }
  }
  else if ((DAT_1809f590c == 0) || (DAT_1809f590c == 3)) {
    iVar7 = DAT_1809f5910;
  }
  else {
    iVar7 = 0;
  }
  lVar18 = FUN_180280c60(iVar7);
  if (lVar18 == 0) {
    uStack_f0 = 0;
    local_e8 = _DAT_1808ad410;
    uStack_e0 = _UNK_1808ad418;
    local_f8 = (char *****)0x0;
  }
  else {
    FUN_180024b50(&local_f8,lVar18 + 0x28);
  }
  lVar16 = DAT_180ca0a50;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  lVar18 = *(longlong *)(lVar16 + 0x14f8);
  local_188 = *(char *****)(lVar18 + 0x118);
  if (uStack_e0 < 0x10) {
    pppppcVar10 = (char *****)&local_f8;
LAB_1802e8af4:
    local_198 = 0;
    local_1a8 = 0;
    local_1b0 = 0;
    local_1b8 = (char *****)0x0;
    local_1c8 = (char ****)CONCAT44(local_1c8._4_4_,DAT_1808acda0);
    local_1c0 = pppppcVar10;
    FUN_18040a2f0(&local_180,*(undefined8 *)(lVar16 + 0x11f0),*(undefined4 *)(lVar16 + 0x1200),
                  DAT_1808acd08);
    auVar28 = ZEXT416((uint)(float)(int)((uint)((float)(int)(float)local_180 < (float)local_180) +
                                        (int)(float)local_180));
  }
  else {
    pppppcVar10 = local_f8;
    if (local_f8 != (char *****)0x0) goto LAB_1802e8af4;
    auVar28 = ZEXT816(0);
  }
  auVar28._0_4_ = auVar28._0_4_ + DAT_1808ac2f0;
  fVar25 = (float)FUN_18053fc00(auVar28._0_8_);
  fVar35 = DAT_1808ac8e4;
  fVar33 = 0.0;
  plVar11 = (longlong *)FUN_1802c16b0(&local_148,iVar7,DAT_1808ac8e4,DAT_1808ac8e4);
  lVar16 = *plVar11;
  lVar1 = plVar11[1];
  iVar7 = *(int *)((longlong)plVar11 + 0xc);
  if ((((lVar16 == 0) || ((int)lVar1 < 1)) || (iVar7 < 1)) ||
     (fVar33 = *(float *)(plVar11 + 3), fVar33 <= 0.0)) {
    fVar23 = 0.0;
  }
  else {
    fVar23 = DAT_1808ac7ac;
  }
  fVar25 = fVar33 + DAT_1808ac8b0 + fVar23 + fVar25;
  local_168 = fVar25;
  local_164 = fVar22;
  FUN_1803e89e0("##chip");
  cVar4 = FUN_180415e30("##chip_button",&local_168,0);
  cVar5 = FUN_1803dd930(0);
  fVar23 = DAT_1808ac34c;
  if ((*(int *)(DAT_180ca0a50 + 0x1578) == 0) ||
     (*(int *)(DAT_180ca0a50 + 0x1578) != *(int *)(DAT_180ca0a50 + 0x1ee8))) {
    if (cVar5 == '\0') {
      local_148 = 0.0;
    }
    else {
      local_148 = DAT_1808ac27c;
    }
  }
  else {
    local_148 = DAT_1808ac34c;
  }
  local_168 = *(float *)(DAT_180ca0a50 + 0x1ee8);
  uStack_13c = 0;
  local_138 = 0xffffffff;
  fStack_144 = local_148;
  local_140 = local_148;
  FUN_18034a380(DAT_180ca0a50,&local_158,&local_168,&local_148);
  fVar24 = (float)FUN_1802b3660((longlong)local_158 + 0x14);
  iVar6 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
  if (iVar6 < 2) {
    FUN_1803ebc00("Calling PopID() too many times!");
  }
  else {
    *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar6 + -1;
  }
  lVar18 = *(longlong *)(lVar18 + 0x2c8);
  if (0.0 < fVar24) {
    local_128[2] = 1.0;
    local_128[0] = 0.0;
    local_128[1] = fVar24 * DAT_1808ac1b0 * DAT_1808ac2cc;
    local_170 = (float)local_188 + fVar25;
    local_16c = local_188._4_4_ + fVar22;
    local_158 = _DAT_1808add10;
    lStack_150 = _UNK_1808add18;
    pfVar14 = local_128;
    if (0.0 <= local_128[1]) {
      pfVar14 = local_128 + 1;
    }
    pfVar12 = local_128 + 2;
    if (local_128[1] <= fVar23) {
      pfVar12 = pfVar14;
    }
    local_1c0 = (char *****)((ulonglong)local_1c0 & 0xffffffff00000000);
    local_1c8 = (char ****)&local_158;
    FUN_18036b940(lVar18,&local_188,&local_170,
                  DAT_180960f44 & 0xffffff |
                  (int)(longlong)(*pfVar12 * DAT_1808acb94 + fVar34) << 0x18);
  }
  fVar34 = (float)local_188;
  fVar36 = (float)local_188 + DAT_1808ac7ac;
  fVar23 = local_188._4_4_;
  if (((lVar16 != 0) && (0 < (int)lVar1)) && (0 < iVar7)) {
    local_180 = CONCAT44(local_180._4_4_,fVar36);
    auVar30._4_12_ = auVar29._4_12_;
    auVar30._0_4_ = (fVar22 - fVar35) * DAT_1808ac1f4 + local_188._4_4_;
    fVar26 = (float)FUN_18053f0d0(auVar30._0_8_);
    local_180 = CONCAT44(fVar26,(float)local_180);
    local_170 = 1.0;
    local_16c = 1.0;
    local_11c = (char ***)0x0;
    local_178 = CONCAT44(fVar26 + fVar35,fVar36 + fVar33);
    local_158 = (char ****)0x0;
    local_1b8 = (char *****)CONCAT44(local_1b8._4_4_,0xb3ffffff);
    local_1c0 = (char *****)&local_170;
    local_1c8 = &local_11c;
    lStack_150 = lVar16;
    FUN_1803fea90(lVar18,&local_158,&local_180,&local_178);
    fVar36 = fVar33 + DAT_1808ac7ac + fVar36;
  }
  uVar3 = DAT_180960ec0;
  pppppcVar10 = (char *****)&local_f8;
  if (0xf < uStack_e0) {
    pppppcVar10 = local_f8;
  }
  uVar20 = (int)(longlong)
                ((fVar24 * DAT_1808ac154 + DAT_1808ac254) * (float)(DAT_180960ec0 >> 0x18) +
                DAT_1808ac1f4) << 0x18;
  local_180 = CONCAT44(local_180._4_4_,fVar36);
  auVar31._8_4_ = auVar29._8_4_;
  auVar31._0_8_ = auVar29._0_8_;
  auVar31._12_4_ = auVar29._12_4_;
  auVar32._4_12_ = auVar31._4_12_;
  auVar32._0_4_ = (fVar22 - *(float *)(DAT_180ca0a50 + 0x1200)) * DAT_1808ac1f4 + fVar23;
  uVar27 = FUN_18053f0d0(auVar32._0_8_);
  local_180 = CONCAT44(uVar27,(float)local_180);
  if (((uVar20 != 0) && (pppppcVar10 != (char *****)0x0)) && (*(char *)pppppcVar10 != '\0')) {
    local_158 = *(char *****)(lVar18 + 0x60);
    lStack_150 = *(longlong *)(lVar18 + 0x68);
    local_1a0 = 0;
    local_1a8 = local_1a8 & 0xffffffff00000000;
    local_1b0 = 0;
    local_1c0 = &local_158;
    local_1c8 = (char ****)CONCAT44(local_1c8._4_4_,uVar3 & 0xffffff | uVar20);
    local_1b8 = pppppcVar10;
    FUN_18040a900(*(undefined8 *)(*(longlong *)(lVar18 + 0x38) + 0x18),lVar18,
                  *(undefined4 *)(*(longlong *)(lVar18 + 0x38) + 0x20),&local_180);
  }
  fVar34 = fVar34 + fVar25;
  DAT_181107498 = fVar34;
  if (cVar4 != '\0') {
    FUN_1802b4d80("##inv_chip");
  }
  local_180 = CONCAT44(fVar23 + fVar22,fVar34);
  FUN_1802e9600(&local_188,&local_180);
  FUN_18000f890(&local_f8);
LAB_1802e8f8a:
  FUN_1803d8a40(1);
  FUN_1800288b0(&local_110);
  return;
}



/* ===== 1802e8ff0 FUN_1802e8ff0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802e8ff0(undefined4 *param_1,undefined1 param_2,undefined1 *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  char cVar9;
  int iVar10;
  longlong *plVar11;
  ulonglong uVar12;
  undefined8 ***pppuVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined1 *puVar16;
  int iVar17;
  undefined1 auStack_118 [8];
  undefined1 auStack_110 [56];
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  undefined1 local_c8 [32];
  ulonglong local_a8;
  undefined4 local_a0;
  undefined2 local_9c;
  undefined1 local_9a;
  undefined1 local_99;
  undefined8 local_98;
  ulonglong local_90;
  undefined8 ***local_88 [3];
  ulonglong local_70;
  ulonglong local_68;
  
  local_68 = DAT_180919500 ^ (ulonglong)auStack_118;
  fVar1 = *(float *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x118);
  fVar2 = *(float *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x11c);
  FUN_1803e8a70(*param_1);
  local_98 = 0xf;
  local_90 = 0xf;
  local_a8 = DAT_1807601f8;
  local_a0 = DAT_180760200;
  local_9c = DAT_180760204;
  local_9a = DAT_180760206;
  local_99 = 0;
  FUN_1800667a0(local_88,&local_a8,param_1 + 10);
  if (local_90 < 0x10) {
LAB_1802e90e1:
    local_98 = 0;
    local_90 = 0xf;
    local_a8 = local_a8 & 0xffffffffffffff00;
    pppuVar13 = local_88;
    if (0xf < local_70) {
      pppuVar13 = local_88[0];
    }
    cVar9 = FUN_1802b74f0(pppuVar13,param_2,0,0);
    puVar16 = auStack_118;
    if (cVar9 != '\0') {
      *param_3 = 1;
    }
    lVar14 = *(longlong *)(DAT_180ca0a50 + 0x14f8);
    iVar10 = *(int *)(lVar14 + 0x108);
    if (iVar10 < 2) {
      FUN_1803ebc00("Calling PopID() too many times!");
      puVar16 = auStack_118;
      goto LAB_1802e914f;
    }
  }
  else {
    uVar15 = local_90 + 1;
    uVar12 = local_a8;
    if (uVar15 < 0x1000) {
LAB_1802e90dc:
      thunk_FUN_1803d64e0(uVar12,uVar15);
      goto LAB_1802e90e1;
    }
    uVar12 = *(ulonglong *)(local_a8 - 8);
    if ((local_a8 - uVar12) - 8 < 0x20) {
      uVar15 = local_90 + 0x28;
      goto LAB_1802e90dc;
    }
    lVar14 = 5;
    pcVar7 = (code *)swi(0x29);
    iVar10 = (*pcVar7)();
    puVar16 = auStack_110;
  }
  *(int *)(lVar14 + 0x108) = iVar10 + -1;
LAB_1802e914f:
  uVar4 = *param_1;
  *(undefined8 *)(puVar16 + -8) = 0x1802e916a;
  plVar11 = (longlong *)FUN_1802c16b0(local_c8,uVar4,DAT_1808ac8e4,DAT_1808ac8b0);
  lVar14 = *plVar11;
  if (((lVar14 != 0) && (0 < (int)plVar11[1])) && (0 < *(int *)((longlong)plVar11 + 0xc))) {
    fVar3 = *(float *)((longlong)plVar11 + 0x1c);
    *(undefined8 *)(puVar16 + -8) = 0x1802e91b1;
    local_cc = (float)FUN_18053f0d0((DAT_1808ac9f8 - fVar3) * DAT_1808ac1f4 + fVar2);
    local_d8 = DAT_1808aca5c;
    if (*(float *)(plVar11 + 3) <= DAT_1808aca5c) {
      local_d8 = *(float *)(plVar11 + 3);
    }
    *(undefined8 *)(puVar16 + -8) = 0x1802e91e4;
    local_d0 = (float)FUN_18053f0d0((DAT_1808aca5c - local_d8) * DAT_1808ac1f4 +
                                    fVar1 + DAT_1808ac8b0);
    lVar5 = DAT_180ca0a50;
    *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
    lVar5 = *(longlong *)(*(longlong *)(lVar5 + 0x14f8) + 0x2c8);
    *(undefined4 *)(puVar16 + 0x30) = 0x3f800000;
    *(undefined4 *)(puVar16 + 0x34) = 0x3f800000;
    *(undefined8 *)(puVar16 + 0x38) = 0;
    local_d8 = local_d0 + local_d8;
    local_d4 = local_cc + fVar3;
    if ((lVar14 == *(longlong *)(lVar5 + 0x78)) && (*(longlong *)(lVar5 + 0x70) == 0)) {
      bVar8 = false;
    }
    else {
      iVar10 = *(int *)(lVar5 + 0xb4);
      if (*(int *)(lVar5 + 0xb0) == iVar10) {
        iVar17 = *(int *)(lVar5 + 0xb0) + 1;
        if (iVar10 == 0) {
          iVar10 = 8;
        }
        else {
          iVar10 = iVar10 / 2 + iVar10;
        }
        if (iVar17 < iVar10) {
          iVar17 = iVar10;
        }
        *(undefined8 *)(puVar16 + -8) = 0x1802e9290;
        FUN_1803f7030(lVar5 + 0xb0,iVar17);
      }
      iVar10 = *(int *)(lVar5 + 0xb0);
      lVar6 = *(longlong *)(lVar5 + 0xb8);
      *(undefined8 *)(lVar6 + (longlong)iVar10 * 0x10) = 0;
      *(longlong *)(lVar6 + 8 + (longlong)iVar10 * 0x10) = lVar14;
      *(int *)(lVar5 + 0xb0) = *(int *)(lVar5 + 0xb0) + 1;
      *(undefined8 *)(lVar5 + 0x70) = 0;
      *(longlong *)(lVar5 + 0x78) = lVar14;
      *(undefined8 *)(puVar16 + -8) = 0x1802e92c8;
      FUN_1803fc0a0(lVar5);
      bVar8 = true;
    }
    *(undefined8 *)(puVar16 + -8) = 0x1802e92de;
    FUN_1803fc3a0(lVar5,6,4);
    *(undefined4 *)(puVar16 + 0x28) = 0xffffffff;
    *(undefined1 **)(puVar16 + 0x20) = puVar16 + 0x30;
    *(undefined8 *)(puVar16 + -8) = 0x1802e9305;
    FUN_1803fc4a0(lVar5,&local_d0,&local_d8,puVar16 + 0x38);
    if (bVar8) {
      *(undefined8 *)(puVar16 + -8) = 0x1802e9312;
      FUN_1803fc340(lVar5);
    }
  }
  *(undefined8 *)(puVar16 + -8) = 0x1802e931c;
  FUN_18000f890(local_88);
  *(undefined8 *)(puVar16 + -8) = 0x1802e9328;
  return;
}



/* ===== 1802e9350 FUN_1802e9350 ===== */

void FUN_1802e9350(char *param_1)

{
  float fVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  float local_res8;
  undefined4 local_resc;
  ulonglong in_stack_ffffffffffffff68;
  longlong local_78;
  undefined8 uStack_70;
  
  lVar4 = *(longlong *)(DAT_180ca0a50 + 0x14f8);
  fVar1 = *(float *)(lVar4 + 0x118);
  if ((*(longlong *)(lVar4 + 0x1c8) != 0) ||
     (lVar3 = 0x280, *(longlong *)(DAT_180ca0a50 + 0x2360) != 0)) {
    lVar3 = 0x250;
  }
  fVar6 = *(float *)(lVar3 + lVar4) - fVar1;
  lVar4 = DAT_181107a18;
  if ((DAT_181107a18 == 0) && (lVar4 = DAT_181107a08, DAT_181107a08 == 0)) {
    local_78 = *(longlong *)(DAT_180ca0a50 + 0x11f0);
    lVar4 = local_78;
  }
  else {
    local_78 = *(longlong *)(DAT_180ca0a50 + 0x11f0);
  }
  uStack_70 = CONCAT44(*(undefined4 *)(DAT_180ca0a50 + 0x1200),
                       *(undefined4 *)(DAT_180ca0a50 + 0x1204));
  FUN_1803f6200(DAT_180ca0a50 + 0x1fe0,&local_78);
  FUN_1803e8680(lVar4);
  if (param_1 == (char *)0x0) {
    fVar5 = 0.0;
  }
  else {
    in_stack_ffffffffffffff68 = 0;
    FUN_18040a2f0(&local_res8,*(undefined8 *)(DAT_180ca0a50 + 0x11f0),
                  *(undefined4 *)(DAT_180ca0a50 + 0x1200),DAT_1808acd08,DAT_1808acda0,param_1,0,0,0)
    ;
    fVar5 = (float)(int)((uint)((float)(int)local_res8 < local_res8) + (int)local_res8);
  }
  lVar4 = DAT_180ca0a50;
  fVar5 = (fVar6 - fVar5) * DAT_1808ac1f4;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  uVar2 = DAT_180960ec8;
  local_res8 = (float)FUN_18053f0d0(fVar5 + fVar1);
  local_resc = FUN_18053f0d0();
  if ((((uVar2 & 0xff000000) != 0) && (param_1 != (char *)0x0)) && (*param_1 != '\0')) {
    lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x14f8) + 0x2c8);
    local_78 = *(longlong *)(lVar4 + 0x60);
    uStack_70 = *(undefined8 *)(lVar4 + 0x68);
    FUN_18040a900(*(undefined8 *)(*(longlong *)(lVar4 + 0x38) + 0x18),lVar4,
                  *(undefined4 *)(*(longlong *)(lVar4 + 0x38) + 0x20),&local_res8,uVar2,&local_78,
                  param_1,0,in_stack_ffffffffffffff68 & 0xffffffff00000000,0);
    lVar4 = DAT_180ca0a50;
  }
  if (*(int *)(lVar4 + 0x1fe0) < 1) {
    FUN_1803ebc00("Calling PopFont() too many times!");
  }
  else {
    FUN_1803e8680(*(undefined8 *)
                   (*(longlong *)(lVar4 + 0x1fe8) + -0x10 +
                   (longlong)*(int *)(lVar4 + 0x1fe0) * 0x10));
    *(int *)(lVar4 + 0x1fe0) = *(int *)(lVar4 + 0x1fe0) + -1;
  }
  local_resc = 0x41fda5e3;
  local_res8 = fVar6;
  FUN_1804174f0(&local_res8);
  return;
}



/* ===== 1802e9600 FUN_1802e9600 ===== */

void FUN_1802e9600(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  code *pcVar2;
  char cVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  int *piVar8;
  int iVar9;
  char *pcVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  int *piVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  ulonglong uVar17;
  undefined8 *puVar18;
  int *piVar19;
  uint uVar20;
  int *piVar21;
  int *piVar22;
  byte bVar23;
  uint local_res18 [4];
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [24];
  int *local_58;
  undefined8 *local_50;
  undefined8 *puStack_48;
  undefined8 *local_40;
  
  local_res18[2] = 0;
  FUN_1802b4fe0("##inv_chip",param_1,param_2);
  lVar6 = DAT_180ca0a50;
  *(undefined8 *)(DAT_180ca0a50 + 0x1f58) = 0x43960000;
  *(undefined4 *)(lVar6 + 8000) = 1;
  *(uint *)(lVar6 + 0x1f38) = *(uint *)(lVar6 + 0x1f38) | 0x12;
  *(undefined8 *)(lVar6 + 0x1f84) = 0x43960000;
  *(undefined4 *)(lVar6 + 0x1f8c) = 0x43960000;
  *(undefined4 *)(lVar6 + 0x1f90) = 0x43b18000;
  *(undefined8 *)(lVar6 + 0x1f98) = 0;
  *(undefined8 *)(lVar6 + 0x1fa0) = 0;
  DAT_180cd04ad = 1;
  local_res18[0] = 0x40c00000;
  local_res18[1] = 0x40c00000;
  cVar3 = FUN_1802b5260("##inv_chip",local_res18);
  if (cVar3 == '\0') {
    return;
  }
  bVar23 = DAT_1809f590c == 1;
  local_res18[0] = CONCAT31(local_res18[0]._1_3_,bVar23);
  pcVar10 = "Gloves";
  if ((bool)bVar23) {
    pcVar10 = "Knives";
  }
  FUN_1802e9350(pcVar10);
  uVar20 = !(bool)bVar23 | 2;
  piVar21 = (int *)(ulonglong)uVar20;
  local_50 = (undefined8 *)0x0;
  puStack_48 = (undefined8 *)0x0;
  local_40 = (undefined8 *)0x0;
  local_res18[2] = 1;
  puVar4 = (undefined8 *)FUN_180280be0();
  puVar15 = auStack_78;
  piVar14 = (int *)*puVar4;
  piVar22 = (int *)puVar4[1];
  local_58 = piVar22;
  if (piVar14 != piVar22) {
    do {
      if (piVar14[0x12] == uVar20) {
        iVar9 = *piVar14;
        if (iVar9 != 0x2a) {
          if (iVar9 != 0x3b) {
            if (1 < iVar9 - 0x13a4U) {
              if (uVar20 == 3) {
                plVar5 = (longlong *)FUN_180280de0();
                piVar22 = local_58;
                if ((ulonglong)(plVar5[1] - *plVar5) < 8) goto LAB_1802e988d;
              }
              puVar4 = puStack_48;
              if (puStack_48 == local_40) {
                uVar17 = (longlong)puStack_48 - (longlong)local_50;
                lVar6 = (longlong)uVar17 >> 3;
                if (lVar6 == 0x1fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                  FUN_1800118d0();
                }
                piVar22 = (int *)(lVar6 + 1);
                uVar11 = (longlong)local_40 - (longlong)local_50 >> 3;
                if (0x1fffffffffffffff - (uVar11 >> 1) < uVar11) {
                  piVar19 = (int *)0x1fffffffffffffff;
                }
                else {
                  piVar8 = (int *)((uVar11 >> 1) + uVar11);
                  piVar19 = piVar22;
                  if (piVar22 <= piVar8) {
                    piVar19 = piVar8;
                  }
                  if ((int *)0x1fffffffffffffff < piVar19) {
                    /* WARNING: Subroutine does not return */
                    FUN_18000d840();
                  }
                }
                piVar19 = (int *)((longlong)piVar19 * 8);
                puVar7 = (undefined8 *)FUN_18000fb70(piVar19);
                puVar18 = (undefined8 *)(uVar17 & 0xfffffffffffffff8);
                *(int **)((longlong)puVar7 + (longlong)puVar18) = piVar14;
                if (puVar4 == puStack_48) {
                  lVar6 = (longlong)puStack_48 - (longlong)local_50;
                  puVar12 = puVar7;
                  puVar13 = local_50;
                }
                else {
                  FUN_180540530(puVar7,local_50,(longlong)puVar4 - (longlong)local_50);
                  lVar6 = (longlong)puStack_48 - (longlong)puVar4;
                  puVar12 = (undefined8 *)((longlong)(puVar18 + 1) + (longlong)puVar7);
                  puVar13 = puVar4;
                }
                FUN_180540530(puVar12,puVar13,lVar6);
                if (local_50 != (undefined8 *)0x0) {
                  uVar17 = ((longlong)local_40 - (longlong)local_50 >> 3) * 8;
                  if (uVar17 < 0x1000) {
                    puVar4 = local_50;
                  }
                  else {
                    if ((undefined1 *)0x1f <
                        (undefined1 *)((longlong)local_50 + (-8 - (longlong)local_50[-1]))) {
                      pcVar2 = (code *)swi(0x29);
                      (*pcVar2)(5);
                      puVar15 = auStack_70;
                      goto LAB_1802e98f9;
                    }
                    uVar17 = uVar17 + 0x27;
                    puVar4 = (undefined8 *)local_50[-1];
                  }
                  thunk_FUN_1803d64e0(puVar4,uVar17);
                }
                puStack_48 = puVar7 + (longlong)piVar22;
                local_40 = (undefined8 *)((longlong)piVar19 + (longlong)puVar7);
                piVar22 = local_58;
                local_50 = puVar7;
              }
              else {
                *puStack_48 = piVar14;
                puStack_48 = puStack_48 + 1;
              }
            }
          }
        }
      }
LAB_1802e988d:
      piVar14 = piVar14 + 0x24;
    } while (piVar14 != piVar22);
    bVar23 = (byte)local_res18[0];
  }
  puVar7 = (undefined8 *)(ulonglong)bVar23;
  puVar16 = auStack_78;
  if (local_50 != puStack_48) {
    piVar21 = &DAT_1809214a4;
    piVar22 = &DAT_18092149c;
    piVar19 = &DAT_1809214a0;
    puVar18 = puStack_48;
    puVar4 = local_50;
    do {
      piVar14 = (int *)*puVar4;
      local_res18[0] = local_res18[0] & 0xffffff00;
      if (DAT_1809f590c - 1U < 2) {
        iVar9 = DAT_1809f5914;
        if (DAT_1809f5910 != 0) {
          iVar9 = DAT_1809f5910;
        }
      }
      else if ((DAT_1809f590c == 0) || (DAT_1809f590c == 3)) {
LAB_1802e98f9:
        iVar9 = DAT_1809f5910;
      }
      else {
        iVar9 = 0;
      }
      iVar1 = *piVar14;
      *(undefined8 *)(puVar15 + -8) = 0x1802e9923;
      FUN_1802e8ff0(piVar14,iVar1 == iVar9,local_res18);
      if ((byte)local_res18[0] != '\0') {
        if ((char)puVar7 == '\0') {
          if (DAT_1809214a8 < 0) {
            DAT_1809214a8 = DAT_1809214a0;
          }
          piVar8 = piVar19;
          if (DAT_1809f5900 != 0) {
            piVar8 = &DAT_1809214a8;
          }
        }
        else {
          if (DAT_1809214a4 < 0) {
            DAT_1809214a4 = DAT_18092149c;
          }
          piVar8 = piVar22;
          if (DAT_1809f5900 != 0) {
            piVar8 = piVar21;
          }
        }
        *piVar8 = *piVar14;
        DAT_1809f5910 = *piVar14;
        DAT_1809f5918 = *piVar14;
        DAT_1809f5968 = 1;
        iVar9 = *piVar14;
        *(undefined8 *)(puVar15 + -8) = 0x1802e99a9;
        FUN_1802dd4a0(DAT_1809f590c,iVar9);
        *(undefined8 *)(puVar15 + -8) = 0x1802e99ae;
        FUN_1803ee1f0();
      }
      puVar4 = puVar4 + 1;
      puVar16 = puVar15;
    } while (puVar4 != puVar18);
  }
  if (local_50 != (undefined8 *)0x0) {
    puVar4 = local_50;
    if ((0xfff < (ulonglong)(((longlong)local_40 - (longlong)local_50 >> 3) * 8)) &&
       (puVar4 = (undefined8 *)local_50[-1],
       (undefined1 *)0x1f < (undefined1 *)((longlong)local_50 + (-8 - (longlong)puVar4)))) {
      puVar4 = (undefined8 *)&DAT_00000005;
      pcVar2 = (code *)swi(0x29);
      (*pcVar2)(5);
      puVar16 = puVar16 + 8;
    }
    *(undefined8 *)(puVar16 + -8) = 0x1802e9a09;
    thunk_FUN_1803d64e0(puVar4);
  }
  *(undefined8 *)(puVar16 + -8) = 0x1802e9a0e;
  FUN_1802b5590();
  return;
}



/* ===== 1802e9a40 FUN_1802e9a40 ===== */

void FUN_1802e9a40(longlong param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_2 != 4) {
    *(int *)(param_1 + 0x18) = param_2;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0x18) = 3;
  FUN_180273880();
  if (DAT_180cfb2b0 == (code *)0x0) {
    uVar1 = DAT_1809f3584 << 0xd ^ DAT_1809f3584;
    uVar1 = uVar1 >> 0x11 ^ uVar1;
    DAT_1809f3584 = uVar1 << 5 ^ uVar1;
    uVar1 = DAT_1809f3584 & 1;
  }
  else {
    uVar1 = (*DAT_180cfb2b0)(0,1);
  }
  uVar3 = DAT_1808acd48;
  if (uVar1 == 0) {
    uVar2 = DAT_1808ac0a0;
  }
  else {
    uVar2 = DAT_1808acd48;
  }
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  FUN_180273880();
  if (DAT_180cfb2b0 == (code *)0x0) {
    uVar1 = DAT_1809f3584 << 0xd ^ DAT_1809f3584;
    uVar1 = uVar1 >> 0x11 ^ uVar1;
    DAT_1809f3584 = uVar1 << 5 ^ uVar1;
    uVar1 = DAT_1809f3584 & 1;
  }
  else {
    uVar1 = (*DAT_180cfb2b0)(0,1);
  }
  if (uVar1 == 0) {
    uVar3 = DAT_1808ac0a0;
  }
  *(undefined4 *)(param_1 + 0x14) = uVar3;
  return;
}



/* ===== 1802e9b40 FUN_1802e9b40 ===== */

undefined8 * FUN_1802e9b40(void)

{
  int *piVar1;
  ulonglong uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  ulonglong local_res8 [4];
  longlong local_a8;
  longlong lStack_a0;
  longlong local_98;
  longlong local_90;
  undefined4 *puStack_88;
  undefined4 *local_80;
  longlong *local_78;
  longlong *plStack_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  plVar4 = (longlong *)FUN_180280ea0();
  lVar7 = *plVar4;
  lVar8 = plVar4[1];
  if (DAT_1811073e0 != (lVar8 - lVar7 >> 3) * -0x79435e50d79435e5) {
    local_a8 = 0;
    lStack_a0 = 0;
    local_98 = 0;
    local_90 = 0;
    puStack_88 = (undefined4 *)0x0;
    local_80 = (undefined4 *)0x0;
    local_60 = 0;
    uStack_58 = 0;
    local_50 = 0;
    lVar10 = local_a8;
    lVar6 = lStack_a0;
    while( true ) {
      local_a8 = lVar10;
      lStack_a0 = lVar6;
      if (lVar7 == lVar8) break;
      if (*(longlong *)(lVar7 + 0x80) != 0) {
        lVar5 = FUN_180026970(lVar10,lVar6,lVar7 + 0x70);
        if (lVar5 == lVar6) {
          if (lVar6 == local_98) {
            FUN_180028f00(&local_a8,lVar6,lVar7 + 0x70);
          }
          else {
            FUN_180024b50(lVar6,lVar7 + 0x70);
            lStack_a0 = lStack_a0 + 0x20;
          }
          if (puStack_88 == local_80) {
            FUN_18006a410(&local_90);
          }
          else {
            *puStack_88 = *(undefined4 *)(lVar7 + 0x90);
            puStack_88 = puStack_88 + 1;
          }
          local_res8[0] = CONCAT44(local_res8[0]._4_4_,1);
          FUN_180066e60(&local_60,local_res8);
        }
        else {
          lVar10 = lVar5 - lVar10 >> 5;
          piVar1 = (int *)(local_60 + lVar10 * 4);
          *piVar1 = *piVar1 + 1;
          if (*(int *)(local_90 + lVar10 * 4) == 0) {
            *(undefined4 *)(local_90 + lVar10 * 4) = *(undefined4 *)(lVar7 + 0x90);
          }
        }
      }
      lVar7 = lVar7 + 0x98;
      lVar10 = local_a8;
      lVar6 = lStack_a0;
    }
    local_78 = (longlong *)0x0;
    plStack_70 = (longlong *)0x0;
    local_68 = 0;
    local_res8[0] = 0;
    if (lVar6 - lVar10 >> 5 != 0) {
      do {
        uVar2 = local_res8[0];
        if (2 < *(int *)(local_60 + local_res8[0] * 4)) {
          FUN_1800242d0(&local_78,local_res8);
          lVar6 = lStack_a0;
          lVar10 = local_a8;
        }
        local_res8[0] = uVar2 + 1;
      } while (local_res8[0] < (ulonglong)(lVar6 - lVar10 >> 5));
    }
    FUN_18034a580(local_78,plStack_70,(longlong)plStack_70 - (longlong)local_78 >> 3,&local_a8);
    lVar7 = DAT_1811076d0;
    lVar8 = DAT_1811076c8;
    if (DAT_1811076c8 != DAT_1811076d0) {
      do {
        FUN_18000f890(lVar8);
        lVar8 = lVar8 + 0x20;
      } while (lVar8 != lVar7);
      DAT_1811076d0 = DAT_1811076c8;
    }
    plVar3 = plStack_70;
    if (DAT_1811076f8 != DAT_181107700) {
      DAT_181107700 = DAT_1811076f8;
    }
    plVar9 = local_78;
    if (local_78 != plStack_70) {
      do {
        lVar7 = *plVar9;
        if (DAT_1811076d0 == DAT_1811076d8) {
          FUN_180028f00(&DAT_1811076c8,DAT_1811076d0);
        }
        else {
          FUN_180024b50(DAT_1811076d0,lVar7 * 0x20 + local_a8);
          DAT_1811076d0 = DAT_1811076d0 + 0x20;
        }
        if (DAT_181107700 == DAT_181107708) {
          FUN_18006a410(&DAT_1811076f8);
        }
        else {
          *DAT_181107700 = *(undefined4 *)(local_90 + lVar7 * 4);
          DAT_181107700 = DAT_181107700 + 1;
        }
        plVar9 = plVar9 + 1;
      } while (plVar9 != plVar3);
    }
    DAT_1811073e0 = (plVar4[1] - *plVar4 >> 3) * -0x79435e50d79435e5;
    FUN_1800132b0(&local_78);
    FUN_180068f30(&local_60);
    FUN_180068f30(&local_90);
    FUN_1800288b0(&local_a8);
  }
  return &DAT_1811076c8;
}



/* ===== 1802e9e50 FUN_1802e9e50 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

char * FUN_1802e9e50(char *param_1,int param_2)

{
  size_t _Size;
  int iVar1;
  undefined8 uVar2;
  HMODULE hModule;
  FARPROC pFVar3;
  undefined4 *_Buf1;
  undefined8 ****ppppuVar4;
  undefined1 auStack_a8 [40];
  char *local_80;
  undefined8 ****local_78 [2];
  size_t local_68;
  ulonglong local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 local_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_a8;
  if (param_2 == 0) {
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
    param_1[0x10] = '\x0e';
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
    *(undefined8 *)param_1 = s_Non_Tournament_180760208._0_8_;
    *(undefined4 *)(param_1 + 8) = s_Non_Tournament_180760208._8_4_;
    *(undefined2 *)(param_1 + 0xc) = s_Non_Tournament_180760208._12_2_;
    param_1[0xe] = '\0';
    return param_1;
  }
  local_80 = param_1;
  uVar2 = FUN_18003a390(local_38);
  FUN_180066ab0(local_78,"CSGO_Tournament_Event_Location_",uVar2);
  FUN_18000f890(local_38);
  if (DAT_180cfc838 == 0) {
    hModule = GetModuleHandleA("localize.dll");
    if ((hModule == (HMODULE)0x0) ||
       (pFVar3 = GetProcAddress(hModule,"CreateInterface"), pFVar3 == (FARPROC)0x0)) {
      DAT_180cfc838 = 0;
    }
    else {
      DAT_180cfc838 = (*pFVar3)("Localize_001",0);
    }
  }
  FUN_1802777c0(&local_58,local_78,local_78);
  _Size = CONCAT44(uStack_44,local_48);
  if (_Size != 0) {
    ppppuVar4 = local_78;
    if (0xf < local_60) {
      ppppuVar4 = local_78[0];
    }
    _Buf1 = &local_58;
    if (0xf < CONCAT44(uStack_3c,uStack_40)) {
      _Buf1 = (undefined4 *)CONCAT44(uStack_54,local_58);
    }
    if ((_Size != local_68) || ((_Size != 0 && (iVar1 = memcmp(_Buf1,ppppuVar4,_Size), iVar1 != 0)))
       ) goto LAB_1802e9f9c;
  }
  ppppuVar4 = local_78;
  if (0xf < local_60) {
    ppppuVar4 = local_78[0];
  }
  FUN_180029840(&local_58,ppppuVar4,local_68);
LAB_1802e9f9c:
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
  *(undefined4 *)param_1 = local_58;
  *(undefined4 *)(param_1 + 4) = uStack_54;
  *(undefined4 *)(param_1 + 8) = uStack_50;
  *(undefined4 *)(param_1 + 0xc) = uStack_4c;
  *(undefined4 *)(param_1 + 0x10) = local_48;
  *(undefined4 *)(param_1 + 0x14) = uStack_44;
  *(undefined4 *)(param_1 + 0x18) = uStack_40;
  *(undefined4 *)(param_1 + 0x1c) = uStack_3c;
  FUN_18000f890(local_78);
  return param_1;
}



/* ===== 1802e9ff0 FUN_1802e9ff0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_1802e9ff0(char *param_1,undefined8 param_2,undefined8 param_3,float param_4,char param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  char cVar7;
  char cVar8;
  float *pfVar9;
  float *pfVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  float fVar15;
  float fVar16;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  ulonglong in_stack_fffffffffffffec0;
  undefined4 uVar20;
  undefined8 in_stack_fffffffffffffec8;
  undefined4 uVar21;
  float local_118;
  float local_114;
  float local_110 [4];
  longlong local_100;
  undefined8 uStack_f8;
  float local_f0;
  float local_ec;
  float local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined8 local_d8 [20];
  
  uVar21 = (undefined4)((ulonglong)in_stack_fffffffffffffec8 >> 0x20);
  pfVar9 = (float *)FUN_1802b9e90(&local_f0,&DAT_18058b643);
  fVar1 = *pfVar9;
  fVar2 = pfVar9[1];
  fVar3 = pfVar9[2];
  fVar4 = pfVar9[3];
  fVar16 = pfVar9[5];
  FUN_1803e89e0(param_1);
  lVar11 = DAT_180ca0a50;
  fVar19 = (fVar1 - fVar16) - DAT_1809f72e4;
  fVar15 = DAT_1809f72e4 * DAT_1808ac540;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  lVar11 = *(longlong *)(lVar11 + 0x14f8);
  fVar15 = (fVar3 - fVar1) + fVar16 + fVar15;
  local_d8[0] = CONCAT44(fVar2,fVar19);
  *(ulonglong *)(lVar11 + 0x118) = CONCAT44(fVar2,fVar19);
  *(undefined1 *)(lVar11 + 0x159) = 1;
  local_118 = fVar15;
  local_114 = fVar4;
  cVar7 = FUN_180415e30("##action",&local_118,0);
  fVar3 = DAT_1808ac1f4;
  iVar5 = *(int *)(DAT_180ca0a50 + 0x1578);
  uVar14 = *(uint *)(DAT_180ca0a50 + 0x1eec) & 0x40;
  if (iVar5 == 0) {
    cVar8 = FUN_1803dd930(0);
    fVar16 = (float)FUN_1802b3850(*(undefined4 *)(DAT_180ca0a50 + 0x1ee8),0,cVar8);
  }
  else {
    iVar6 = *(int *)(DAT_180ca0a50 + 0x1ee8);
    cVar8 = FUN_1803dd930(0);
    fVar16 = (float)FUN_1802b3850(*(undefined4 *)(DAT_180ca0a50 + 0x1ee8),iVar5 == iVar6,cVar8);
    if (iVar5 == iVar6) {
      fVar18 = DAT_1808ac34c;
      goto LAB_1802ea1c2;
    }
  }
  if (cVar8 == '\0') {
    fVar18 = 0.0;
  }
  else {
    fVar18 = fVar3;
  }
LAB_1802ea1c2:
  local_118 = (float)FUN_1803e8900(*(undefined8 *)(DAT_180ca0a50 + 0x14f8),"##lit");
  local_e4 = 0;
  local_e0 = 0xffffffff;
  local_f0 = fVar18;
  local_ec = fVar18;
  local_e8 = fVar18;
  FUN_18034a380(extraout_XMM0_Da,&local_100,&local_118,&local_f0);
  uVar17 = FUN_1802b3660(local_100 + 0x14);
  lVar11 = DAT_180ca0a50;
  iVar5 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
  if (iVar5 < 2) {
    FUN_1803ebc00("Calling PopID() too many times!");
    lVar11 = DAT_180ca0a50;
  }
  else {
    *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar5 + -1;
  }
  uVar20 = (undefined4)(in_stack_fffffffffffffec0 >> 0x20);
  *(undefined1 *)(*(longlong *)(lVar11 + 0x14f8) + 0xce) = 1;
  lVar11 = *(longlong *)(*(longlong *)(lVar11 + 0x14f8) + 0x2c8);
  if (0.0 < fVar16) {
    local_110[2] = 1.0;
    local_118 = fVar19 + fVar15;
    in_stack_fffffffffffffec0 = in_stack_fffffffffffffec0 & 0xffffffff00000000;
    local_110[1] = fVar16 * DAT_1808ac1b0 * DAT_1808ac2cc;
    local_114 = fVar2 + fVar4;
    local_110[0] = 0.0;
    local_100 = _DAT_1808add50;
    uStack_f8 = _UNK_1808add58;
    pfVar9 = local_110;
    if (0.0 <= local_110[1]) {
      pfVar9 = local_110 + 1;
    }
    pfVar10 = local_110 + 2;
    if (local_110[1] <= DAT_1808ac34c) {
      pfVar10 = pfVar9;
    }
    FUN_18036b940(lVar11,local_d8,&local_118,
                  (int)(longlong)(*pfVar10 * DAT_1808acb94 + fVar3) << 0x18 |
                  DAT_180960f44 & 0xffffff,&local_100,in_stack_fffffffffffffec0);
    uVar20 = (undefined4)(in_stack_fffffffffffffec0 >> 0x20);
  }
  uVar13 = (ulonglong)DAT_180960ef8;
  if (param_5 == '\0') {
    uVar12 = FUN_1802b38e0(uVar13,DAT_180960ec8,uVar17);
  }
  else {
    uVar12 = 0xff6163db;
  }
  if (uVar14 != 0) {
    uVar12 = (int)(longlong)((float)(uVar13 >> 0x18 & 0xff) * fVar3 + fVar3) << 0x18 |
             (uint)uVar13 & 0xffffff;
  }
  fVar15 = (float)FUN_18053f0d0((fVar4 - DAT_1808ac930) * fVar3);
  fVar16 = DAT_1808ac950;
  fVar4 = DAT_1808ac8d4;
  local_118 = (float)FUN_18053f0d0((DAT_1808ac950 - param_4 * DAT_1808abfc4 * DAT_1808ac8d4) * fVar3
                                  );
  local_118 = local_118 + fVar1;
  local_114 = fVar15 + fVar2;
  FUN_180322fd0(lVar11,param_2,param_3,param_4,&local_118,CONCAT44(uVar20,fVar4),
                CONCAT44(uVar21,uVar12));
  local_118 = fVar1 + fVar16 + DAT_1808ac8b0;
  if ((((uVar12 & 0xff000000) != 0) && (param_1 != (char *)0x0)) && (*param_1 != '\0')) {
    local_100 = *(longlong *)(lVar11 + 0x60);
    uStack_f8 = *(undefined8 *)(lVar11 + 0x68);
    local_114 = fVar15 + fVar2;
    FUN_18040a900(*(undefined8 *)(*(longlong *)(lVar11 + 0x38) + 0x18),lVar11,DAT_1808ac930,
                  &local_118,uVar12,&local_100,param_1,0,0,0);
  }
  if ((cVar7 == '\0') || (uVar14 != 0)) {
    return 0;
  }
  return 1;
}



/* ===== 1802ea560 FUN_1802ea560 ===== */

void FUN_1802ea560(void)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  float local_res8;
  float local_resc;
  float local_res10;
  float local_res14;
  undefined1 local_38 [56];
  
  uVar1 = DAT_1809f7304;
  DAT_1809f7304 = 0x40e00000;
  lVar3 = FUN_1802b9e90(local_38,&DAT_18058b643);
  lVar2 = DAT_180ca0a50;
  local_resc = *(float *)(lVar3 + 4) + DAT_1808ac710;
  local_res14 = *(float *)(lVar3 + 4) + DAT_1808ac658;
  DAT_1809f7304 = uVar1;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  local_res8 = DAT_1809f72f4 + DAT_1809f72f0;
  local_res10 = DAT_1809f72f0;
  FUN_1803fe590(*(undefined8 *)(*(longlong *)(lVar2 + 0x14f8) + 0x2c8),&local_res10,&local_res8,
                DAT_180960f48,0,0);
  return;
}



/* ===== 1802ea630 FUN_1802ea630 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802ea630(longlong param_1,char *param_2,undefined4 param_3,char *param_4)

{
  float fVar1;
  undefined8 uVar2;
  float fVar3;
  undefined4 uVar4;
  uint uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float local_res8;
  float local_resc;
  float local_res10;
  float local_res14;
  undefined8 in_stack_ffffffffffffff18;
  float *pfVar16;
  undefined4 uVar17;
  undefined8 in_stack_ffffffffffffff20;
  undefined4 uVar18;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8 [112];
  
  uVar17 = (undefined4)((ulonglong)in_stack_ffffffffffffff18 >> 0x20);
  uVar18 = (undefined4)((ulonglong)in_stack_ffffffffffffff20 >> 0x20);
  if (*(longlong *)(param_1 + 0x10) == 0) {
    lVar10 = 0;
    iVar12 = 0;
    iVar11 = 0;
  }
  else {
    plVar6 = (longlong *)FUN_1800e77d0(&local_b8,param_1);
    lVar10 = *plVar6;
    iVar12 = (int)plVar6[1];
    iVar11 = *(int *)((longlong)plVar6 + 0xc);
  }
  uVar4 = DAT_1809f7304;
  DAT_1809f7304 = 0x42200000;
  lVar7 = FUN_1802b9e90(local_a8,&DAT_18058b643);
  lVar9 = DAT_180ca0a50;
  fVar1 = *(float *)(lVar7 + 4);
  DAT_1809f7304 = uVar4;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  fVar15 = DAT_1809f72f0;
  lVar7 = *(longlong *)(*(longlong *)(lVar9 + 0x14f8) + 0x2c8);
  if (lVar10 != 0) {
    local_res8 = DAT_1809f72f0 + _DAT_1808aca84;
    local_res10 = DAT_1809f72f0;
    if (iVar11 < 1) {
      iVar11 = 1;
    }
    pfVar16 = &local_res8;
    local_resc = fVar1 + DAT_1808aca54;
    local_res14 = fVar1;
    FUN_1802d4a10(lVar7,lVar10,(float)iVar12 / (float)iVar11,&local_res10,pfVar16,
                  CONCAT44(uVar18,0xffffffff));
    uVar17 = (undefined4)((ulonglong)pfVar16 >> 0x20);
    fVar15 = fVar15 + _DAT_1808acaac;
    lVar9 = DAT_180ca0a50;
  }
  fVar3 = DAT_1809f72f0;
  fVar14 = fVar1 + DAT_1808aca54;
  lVar10 = DAT_1811079c0;
  if ((DAT_1811079c0 == 0) && (lVar10 = DAT_181107a08, DAT_181107a08 == 0)) {
    lVar10 = *(longlong *)(lVar9 + 0x11f0);
  }
  fVar13 = (float)FUN_18053f0d0();
  local_res8 = DAT_1809f72f4 + fVar3;
  fVar13 = fVar13 + fVar1;
  local_resc = fVar14;
  local_res10 = fVar15;
  local_res14 = fVar1;
  FUN_1803fc200(lVar7,&local_res10,&local_res8,1);
  if (0xf < *(ulonglong *)(param_2 + 0x18)) {
    param_2 = *(char **)param_2;
  }
  uVar5 = FUN_1802d47f0(param_3,DAT_1808ac34c);
  fVar1 = DAT_1808ac930;
  local_res8 = fVar15;
  local_resc = fVar13;
  if ((((uVar5 & 0xff000000) != 0) && (param_2 != (char *)0x0)) && (*param_2 != '\0')) {
    if (lVar10 == 0) {
      lVar10 = *(longlong *)(*(longlong *)(lVar7 + 0x38) + 0x18);
    }
    local_b8 = *(undefined8 *)(lVar7 + 0x60);
    uStack_b0 = *(undefined8 *)(lVar7 + 0x68);
    FUN_18040a900(lVar10,lVar7,uVar5,&local_res8,CONCAT44(uVar17,uVar5),&local_b8,param_2,0,0,0);
  }
  if (param_4 != (char *)0x0) {
    local_resc = fVar13 + fVar1 + DAT_1808ac658;
    lVar10 = DAT_181107a08;
    if (DAT_181107a08 == 0) {
      lVar10 = *(longlong *)(DAT_180ca0a50 + 0x11f0);
    }
    local_res8 = fVar15;
    if (((DAT_180960ec8 & 0xff000000) != 0) && (*param_4 != '\0')) {
      if (lVar10 == 0) {
        lVar10 = *(longlong *)(*(longlong *)(lVar7 + 0x38) + 0x18);
      }
      local_b8 = *(undefined8 *)(lVar7 + 0x60);
      uStack_b0 = *(undefined8 *)(lVar7 + 0x68);
      FUN_18040a900(lVar10,lVar7);
    }
  }
  iVar11 = *(int *)(lVar7 + 0xa0);
  iVar12 = iVar11 + -1;
  *(int *)(lVar7 + 0xa0) = iVar12;
  if (iVar12 == 0) {
    puVar8 = (undefined8 *)(*(longlong *)(lVar7 + 0x38) + 0x34);
  }
  else {
    puVar8 = (undefined8 *)((longlong)(iVar11 + -2) * 0x10 + *(longlong *)(lVar7 + 0xa8));
  }
  uVar2 = puVar8[1];
  *(undefined8 *)(lVar7 + 0x60) = *puVar8;
  *(undefined8 *)(lVar7 + 0x68) = uVar2;
  FUN_1803fbff0(lVar7);
  return;
}



/* ===== 1802ea9e0 FUN_1802ea9e0 ===== */

undefined1 FUN_1802ea9e0(undefined8 param_1,longlong param_2,char param_3,undefined1 *param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 uVar3;
  char cVar4;
  char cVar5;
  byte bVar6;
  longlong *plVar7;
  undefined1 uVar8;
  ulonglong uVar9;
  char *pcVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  float local_res10;
  float local_res14;
  undefined8 local_res20;
  longlong local_78 [2];
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  
  lVar1 = DAT_180ca0a50;
  local_res10 = 42.0;
  local_res14 = 32.0;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  lVar1 = *(longlong *)(lVar1 + 0x14f8);
  local_res20 = *(undefined8 *)(lVar1 + 0x118);
  fVar16 = (float)local_res20;
  uVar3 = FUN_180415e30(param_1,&local_res10,0);
  cVar4 = FUN_1803dd930();
  if (cVar4 != '\0') {
    cVar5 = FUN_1803e9690(1,0,0);
    if (cVar5 != '\0') {
      uVar8 = 1;
      goto LAB_1802eaa81;
    }
  }
  uVar8 = 0;
LAB_1802eaa81:
  lVar2 = DAT_180ca0a50;
  *param_4 = uVar8;
  uVar11 = *(uint *)(lVar2 + 0x1578);
  uVar9 = (ulonglong)uVar11;
  uVar13 = *(uint *)(lVar2 + 0x1ee8);
  if (((uVar11 == 0) || (uVar11 != uVar13)) && (param_3 == '\0')) {
    if (cVar4 == '\0') {
      uVar15 = DAT_1808ac254;
    }
    else {
      uVar15 = DAT_1808ac34c;
    }
  }
  else {
    uVar15 = DAT_1808ac2cc;
  }
  uVar13 = ~uVar13;
  pcVar10 = "##slot_alpha";
  bVar6 = 0x23;
  uVar11 = uVar13;
  do {
    pcVar10 = pcVar10 + 1;
    if (((bVar6 == 0x23) && (*pcVar10 == 0x23)) && (pcVar10[1] == 0x23)) {
      pcVar10 = pcVar10 + 2;
      uVar11 = uVar13;
    }
    else {
      uVar9 = (ulonglong)(uVar11 & 0xff) ^ (ulonglong)bVar6;
      uVar11 = uVar11 >> 8 ^ *(uint *)(&DAT_1806c25c0 + uVar9 * 4);
    }
    bVar6 = *pcVar10;
  } while (bVar6 != 0);
  local_res10 = (float)~uVar11;
  local_5c = 0;
  local_58 = 0xffffffff;
  local_68 = uVar15;
  local_64 = uVar15;
  local_60 = uVar15;
  FUN_18034a380(uVar9,local_78,&local_res10,&local_68);
  fVar14 = (float)FUN_1802b3660(local_78[0] + 0x14,uVar15);
  fVar14 = fVar14 * DAT_1808acb94;
  if (*(longlong *)(param_2 + 0x10) != 0) {
    plVar7 = (longlong *)FUN_1800e77d0(local_78,param_2);
    if (*plVar7 != 0) {
      iVar12 = *(int *)((longlong)plVar7 + 0xc);
      local_res14 = local_res20._4_4_ + DAT_1808ac9fc;
      local_res10 = fVar16 + DAT_1808aca5c;
      if (iVar12 < 1) {
        iVar12 = 1;
      }
      FUN_1802d4a10(*(undefined8 *)(lVar1 + 0x2c8),*plVar7,(float)(int)plVar7[1] / (float)iVar12,
                    &local_res20,&local_res10,
                    (int)(longlong)(fVar14 + DAT_1808ac1f4) << 0x18 | 0xffffff);
    }
  }
  return uVar3;
}



/* ===== 1802eac50 FUN_1802eac50 ===== */

void FUN_1802eac50(longlong param_1,undefined4 param_2)

{
  undefined1 uVar1;
  char *pcVar2;
  byte bVar3;
  uint uVar4;
  longlong local_res8;
  undefined4 local_res10 [2];
  undefined8 local_res18;
  undefined8 local_res20;
  longlong *local_18;
  undefined4 *local_10;
  
  if (param_1 != 0) {
    local_18 = &local_res8;
    local_10 = local_res10;
    local_res18 = *(undefined8 *)(DAT_180ca0a50 + 0x1efc);
    local_res20 = *(undefined8 *)(DAT_180ca0a50 + 0x1ef4);
    local_res8 = param_1;
    local_res10[0] = param_2;
    uVar1 = FUN_1803dd930(0);
    bVar3 = 0x23;
    pcVar2 = "##sticker_tip";
    uVar4 = ~*(uint *)(DAT_180ca0a50 + 0x1ee8);
    do {
      pcVar2 = pcVar2 + 1;
      if (((bVar3 == 0x23) && (*pcVar2 == 0x23)) && (pcVar2[1] == 0x23)) {
        pcVar2 = pcVar2 + 2;
        uVar4 = ~*(uint *)(DAT_180ca0a50 + 0x1ee8);
      }
      else {
        uVar4 = uVar4 >> 8 ^
                *(uint *)(&DAT_1806c25c0 + ((ulonglong)(uVar4 & 0xff) ^ (ulonglong)bVar3) * 4);
      }
      bVar3 = *pcVar2;
    } while (bVar3 != 0);
    FUN_180345790(~uVar4,uVar1,&local_res20,&local_res18,&local_18);
  }
  return;
}



/* ===== 1802ead40 FUN_1802ead40 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802ead40(undefined8 *param_1)

{
  longlong lVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar10;
  undefined1 auStack_b8 [32];
  float *local_98;
  undefined4 local_90;
  float local_88;
  float local_84;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  ulonglong local_70;
  ulonglong uStack_68;
  ulonglong local_60;
  ulonglong uStack_58;
  ulonglong local_50 [6];
  
  local_50[4] = DAT_180919500 ^ (ulonglong)auStack_b8;
  lVar1 = *(longlong *)*param_1;
  if (*(longlong *)(lVar1 + 0x80) == 0) {
    plVar5 = (longlong *)0x0;
  }
  else {
    plVar5 = (longlong *)(lVar1 + 0x70);
    if (0xf < *(ulonglong *)(lVar1 + 0x88)) {
      plVar5 = (longlong *)*plVar5;
    }
  }
  local_50[1] = 0;
  local_50[2] = 0;
  local_50[3] = 0xf;
  local_50[0] = 0;
  FUN_1802d6630(local_50,lVar1 + 0x28,*(undefined4 *)(lVar1 + 0x68),plVar5);
  if (0xf < local_50[3]) {
    uVar9 = local_50[3] + 1;
    uVar8 = local_50[0];
    if (0xfff < uVar9) {
      uVar8 = *(ulonglong *)(local_50[0] - 8);
      if (0x1f < (local_50[0] - uVar8) - 8) {
        pcVar2 = (code *)swi(0x29);
        (*pcVar2)(5);
        goto LAB_1802eafc8;
      }
      uVar9 = local_50[3] + 0x28;
    }
    thunk_FUN_1803d64e0(uVar8,uVar9);
  }
  local_50[2] = 0;
  local_50[3] = 0xf;
  local_50[0] = local_50[0] & 0xffffffffffffff00;
  if (*(longlong *)(*(longlong *)*param_1 + 0x58) != 0) {
    plVar5 = (longlong *)FUN_1800e77d0(&local_70,*(longlong *)*param_1 + 0x48);
    lVar4 = DAT_180ca0a50;
    lVar1 = *plVar5;
    if (lVar1 != 0) {
      iVar10 = *(int *)((longlong)plVar5 + 0xc);
      uVar6 = *(undefined8 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x118);
      local_78 = 0x4359999a;
      local_74 = 0x43233333;
      local_88 = (float)uVar6 + _DAT_1808acb6c;
      local_80._4_4_ = (float)((ulonglong)uVar6 >> 0x20);
      local_84 = local_80._4_4_ + _DAT_1808acb44;
      if (iVar10 < 1) {
        iVar10 = 1;
      }
      lVar3 = plVar5[1];
      *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
      local_90 = 0xffffffff;
      local_98 = &local_88;
      local_80 = uVar6;
      FUN_1802d4a10(*(undefined8 *)(*(longlong *)(lVar4 + 0x14f8) + 0x2c8),lVar1,
                    (float)(int)lVar3 / (float)iVar10,&local_80);
      FUN_1804174f0(&local_78);
    }
  }
  if (0.0 < *(float *)param_1[1]) {
    FUN_1802e0770();
    uVar6 = FUN_18003a390(local_50,(int)(*(float *)param_1[1] * DAT_1808acb08));
    puVar7 = (ulonglong *)FUN_1800134a0(uVar6,&DAT_1806de738,1);
    local_70 = *puVar7;
    uStack_68 = puVar7[1];
    local_60 = puVar7[2];
    uStack_58 = puVar7[3];
    puVar7[2] = 0;
    puVar7[3] = 0xf;
    *(undefined1 *)puVar7 = 0;
    FUN_1802e0860("popup_scrape_sticker_level","Sticker Scrape Level",&local_70);
    if (0xf < uStack_58) {
      uVar9 = uStack_58 + 1;
      uVar8 = local_70;
      if (0xfff < uVar9) {
        uVar8 = *(ulonglong *)(local_70 - 8);
        if (0x1f < (local_70 - uVar8) - 8) {
LAB_1802eafc8:
          pcVar2 = (code *)swi(0x29);
          (*pcVar2)(5);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar9 = uStack_58 + 0x28;
      }
      thunk_FUN_1803d64e0(uVar8,uVar9);
    }
    local_60 = 0;
    uStack_58 = 0xf;
    local_70 = local_70 & 0xffffffffffffff00;
    FUN_18000f890(local_50);
  }
  return;
}



