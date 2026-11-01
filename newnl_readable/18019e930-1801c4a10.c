/* ===== 18019e930 FUN_18019e930 ===== */

void FUN_18019e930(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  longlong *plVar2;
  
  piVar1 = (int *)FUN_1800f2fa0();
  if ((piVar1 != (int *)0x0) && (*piVar1 == 3)) {
    FUN_180540170(param_3,0,0x104);
    plVar2 = (longlong *)(piVar1 + 4);
    if (0xf < *(ulonglong *)(piVar1 + 10)) {
      plVar2 = (longlong *)*plVar2;
    }
    snprintf(param_3,0x104,&DAT_1806d3198,plVar2);
  }
  return;
}



/* ===== 18019e990 FUN_18019e990 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18019e990(undefined8 param_1,undefined8 param_2,int *param_3)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  int *piVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  double dVar11;
  undefined1 auStack_108 [32];
  undefined1 local_e8 [32];
  undefined1 local_c8 [32];
  undefined1 local_a8 [32];
  undefined1 local_88 [32];
  ulonglong local_68;
  
  local_68 = DAT_180919500 ^ (ulonglong)auStack_108;
  uVar5 = FUN_180073a70(local_e8,param_2,&DAT_1806f5f30);
  FUN_1800f3090(param_1,uVar5,param_3);
  FUN_18000f890(local_e8);
  if (*param_3 != 0) {
    uVar5 = FUN_180073a70(local_e8,param_2,".side");
    FUN_1800f3090(param_1,uVar5,param_3 + 1);
    FUN_18000f890(local_e8);
    uVar5 = FUN_180073a70(local_e8,param_2,".paint_kit");
    FUN_1800f3090(param_1,uVar5,param_3 + 2);
    FUN_18000f890(local_e8);
    uVar5 = FUN_180073a70(local_e8,param_2,".wear");
    lVar6 = FUN_1800f2fa0(param_1,uVar5);
    if (lVar6 != 0) {
      dVar2 = (double)FUN_180370b10(lVar6,(double)(float)param_3[3]);
      if (((uint)(float)dVar2 & 0x7f800000) != 0x7f800000) {
        param_3[3] = (int)(float)dVar2;
      }
    }
    FUN_18000f890(local_e8);
    uVar5 = FUN_180073a70(local_e8,param_2,".seed");
    FUN_1800f3090(param_1,uVar5,param_3 + 4);
    FUN_18000f890(local_e8);
    uVar5 = FUN_180073a70(local_e8,param_2,".stattrak");
    piVar7 = (int *)FUN_1800f2fa0(param_1,uVar5);
    if (piVar7 != (int *)0x0) {
      if (*piVar7 == 1) {
        uVar4 = (undefined1)piVar7[1];
      }
      else if (*piVar7 == 2) {
        if (*(double *)(piVar7 + 2) == 0.0) {
          uVar4 = 0;
        }
        else {
          uVar4 = 1;
        }
      }
      else {
        uVar4 = (undefined1)param_3[5];
      }
      *(undefined1 *)(param_3 + 5) = uVar4;
    }
    FUN_18000f890(local_e8);
    uVar5 = FUN_180073a70(local_e8,param_2,".stattrak_value");
    FUN_1800f3090(param_1,uVar5,param_3 + 6);
    FUN_18000f890(local_e8);
    uVar5 = FUN_180073a70(local_e8,param_2,".nametag");
    piVar7 = (int *)FUN_1800f2fa0(param_1,uVar5);
    if ((piVar7 != (int *)0x0) && (*piVar7 == 3)) {
      piVar1 = param_3 + 7;
      piVar1[0] = 0;
      piVar1[1] = 0;
      param_3[9] = 0;
      param_3[10] = 0;
      param_3[0xb] = 0;
      param_3[0xc] = 0;
      param_3[0xd] = 0;
      param_3[0xe] = 0;
      param_3[0xf] = 0;
      param_3[0x10] = 0;
      param_3[0x11] = 0;
      param_3[0x12] = 0;
      param_3[0x13] = 0;
      param_3[0x14] = 0;
      param_3[0x15] = 0;
      param_3[0x16] = 0;
      plVar10 = (longlong *)(piVar7 + 4);
      if (0xf < *(ulonglong *)(piVar7 + 10)) {
        plVar10 = (longlong *)*plVar10;
      }
      snprintf(piVar1,0x40,&DAT_1806d3198,plVar10);
    }
    FUN_18000f890(local_e8);
    uVar5 = FUN_180073a70(local_e8,param_2,".custom_colors");
    piVar7 = (int *)FUN_1800f2fa0(param_1,uVar5);
    if (piVar7 != (int *)0x0) {
      if (*piVar7 == 1) {
        uVar4 = (undefined1)piVar7[1];
      }
      else if (*piVar7 == 2) {
        if (*(double *)(piVar7 + 2) == 0.0) {
          uVar4 = 0;
        }
        else {
          uVar4 = 1;
        }
      }
      else {
        uVar4 = (undefined1)param_3[0x17];
      }
      *(undefined1 *)(param_3 + 0x17) = uVar4;
    }
    FUN_18000f890(local_e8);
    uVar9 = 0;
    do {
      uVar5 = FUN_18004e4f0(local_88,uVar9);
      uVar8 = FUN_180073a70(local_a8,param_2,".color");
      uVar5 = FUN_180066820(local_e8,uVar8,uVar5);
      FUN_18019e140(param_1,uVar5,param_3 + uVar9 * 4 + 0x18);
      FUN_18000f890(local_e8);
      FUN_18000f890(local_a8);
      FUN_18000f890(local_88);
      dVar3 = DAT_1808ace48;
      dVar2 = DAT_1808ac9c8;
      uVar9 = uVar9 + 1;
    } while (uVar9 < 8);
    uVar9 = 0;
    do {
      uVar5 = FUN_18004e4f0(local_a8,uVar9);
      uVar8 = FUN_180073a70(local_88,param_2,".sticker");
      FUN_180066820(local_e8,uVar8,uVar5);
      FUN_18000f890(local_88);
      FUN_18000f890(local_a8);
      uVar5 = FUN_180073a70(local_c8,local_e8,&DAT_1806f6a6c);
      lVar6 = FUN_1800f2fa0(param_1,uVar5);
      if ((((lVar6 != 0) &&
           (dVar11 = (double)FUN_180370b10(lVar6,(double)param_3[uVar9 * 7 + 0x38]),
           ((uint)((ulonglong)dVar11 >> 0x34) & 0x7ff) != 0x7ff)) && (dVar3 < dVar11)) &&
         (dVar11 < dVar2)) {
        param_3[uVar9 * 7 + 0x38] = (int)dVar11;
      }
      FUN_18000f890(local_c8);
      uVar5 = FUN_180073a70(local_c8,local_e8,".wear");
      lVar6 = FUN_1800f2fa0(param_1,uVar5);
      if (lVar6 != 0) {
        dVar11 = (double)FUN_180370b10(lVar6,(double)(float)param_3[uVar9 * 7 + 0x39]);
        if (((uint)(float)dVar11 & 0x7f800000) != 0x7f800000) {
          param_3[uVar9 * 7 + 0x39] = (int)(float)dVar11;
        }
      }
      FUN_18000f890(local_c8);
      uVar5 = FUN_180073a70(local_c8,local_e8,".scale");
      lVar6 = FUN_1800f2fa0(param_1,uVar5);
      if (lVar6 != 0) {
        dVar11 = (double)FUN_180370b10(lVar6,(double)(float)param_3[uVar9 * 7 + 0x3a]);
        if (((uint)(float)dVar11 & 0x7f800000) != 0x7f800000) {
          param_3[uVar9 * 7 + 0x3a] = (int)(float)dVar11;
        }
      }
      FUN_18000f890(local_c8);
      uVar5 = FUN_180073a70(local_c8,local_e8,".rotation");
      lVar6 = FUN_1800f2fa0(param_1,uVar5);
      if (lVar6 != 0) {
        dVar11 = (double)FUN_180370b10(lVar6,(double)(float)param_3[uVar9 * 7 + 0x3b]);
        if (((uint)(float)dVar11 & 0x7f800000) != 0x7f800000) {
          param_3[uVar9 * 7 + 0x3b] = (int)(float)dVar11;
        }
      }
      FUN_18000f890(local_c8);
      uVar5 = FUN_180073a70(local_c8,local_e8,".offset_x");
      lVar6 = FUN_1800f2fa0(param_1,uVar5);
      if (lVar6 != 0) {
        dVar11 = (double)FUN_180370b10(lVar6,(double)(float)param_3[uVar9 * 7 + 0x3c]);
        if (((uint)(float)dVar11 & 0x7f800000) != 0x7f800000) {
          param_3[uVar9 * 7 + 0x3c] = (int)(float)dVar11;
        }
      }
      FUN_18000f890(local_c8);
      uVar5 = FUN_180073a70(local_c8,local_e8,".offset_y");
      lVar6 = FUN_1800f2fa0(param_1,uVar5);
      if (lVar6 != 0) {
        dVar11 = (double)FUN_180370b10(lVar6,(double)(float)param_3[uVar9 * 7 + 0x3d]);
        if (((uint)(float)dVar11 & 0x7f800000) != 0x7f800000) {
          param_3[uVar9 * 7 + 0x3d] = (int)(float)dVar11;
        }
      }
      FUN_18000f890(local_c8);
      uVar5 = FUN_180073a70(local_c8,local_e8,".schema");
      lVar6 = FUN_1800f2fa0(param_1,uVar5);
      if (((lVar6 != 0) &&
          (dVar11 = (double)FUN_180370b10(lVar6,(double)param_3[uVar9 * 7 + 0x3e]),
          ((uint)((ulonglong)dVar11 >> 0x34) & 0x7ff) != 0x7ff)) &&
         ((dVar3 < dVar11 && (dVar11 < dVar2)))) {
        param_3[uVar9 * 7 + 0x3e] = (int)dVar11;
      }
      FUN_18000f890(local_c8);
      FUN_18000f890(local_e8);
      uVar9 = uVar9 + 1;
    } while (uVar9 < 6);
    uVar5 = FUN_180073a70(local_c8,param_2,".keychain.id");
    lVar6 = FUN_1800f2fa0(param_1,uVar5);
    if (((lVar6 != 0) &&
        (dVar11 = (double)FUN_180370b10(lVar6,(double)param_3[0x62]),
        ((uint)((ulonglong)dVar11 >> 0x34) & 0x7ff) != 0x7ff)) &&
       ((dVar3 < dVar11 && (dVar11 < dVar2)))) {
      param_3[0x62] = (int)dVar11;
    }
    FUN_18000f890(local_c8);
    uVar5 = FUN_180073a70(local_c8,param_2,".keychain.seed");
    lVar6 = FUN_1800f2fa0(param_1,uVar5);
    if ((((lVar6 != 0) &&
         (dVar11 = (double)FUN_180370b10(lVar6,(double)param_3[99]),
         ((uint)((ulonglong)dVar11 >> 0x34) & 0x7ff) != 0x7ff)) && (dVar3 < dVar11)) &&
       (dVar11 < dVar2)) {
      param_3[99] = (int)dVar11;
    }
    FUN_18000f890(local_c8);
    uVar5 = FUN_180073a70(local_c8,param_2,".keychain.offset_x");
    lVar6 = FUN_1800f2fa0(param_1,uVar5);
    if (lVar6 != 0) {
      dVar11 = (double)FUN_180370b10(lVar6,(double)(float)param_3[100]);
      if (((uint)(float)dVar11 & 0x7f800000) != 0x7f800000) {
        param_3[100] = (int)(float)dVar11;
      }
    }
    FUN_18000f890(local_c8);
    uVar5 = FUN_180073a70(local_c8,param_2,".keychain.offset_y");
    lVar6 = FUN_1800f2fa0(param_1,uVar5);
    if (lVar6 != 0) {
      dVar11 = (double)FUN_180370b10(lVar6,(double)(float)param_3[0x65]);
      if (((uint)(float)dVar11 & 0x7f800000) != 0x7f800000) {
        param_3[0x65] = (int)(float)dVar11;
      }
    }
    FUN_18000f890(local_c8);
    uVar5 = FUN_180073a70(local_c8,param_2,".keychain.offset_z");
    lVar6 = FUN_1800f2fa0(param_1,uVar5);
    if (lVar6 != 0) {
      dVar11 = (double)FUN_180370b10(lVar6,(double)(float)param_3[0x66]);
      if (((uint)(float)dVar11 & 0x7f800000) != 0x7f800000) {
        param_3[0x66] = (int)(float)dVar11;
      }
    }
    FUN_18000f890(local_c8);
    uVar5 = FUN_180073a70(local_c8,param_2,".keychain.sticker");
    lVar6 = FUN_1800f2fa0(param_1,uVar5);
    if (((lVar6 != 0) &&
        (dVar11 = (double)FUN_180370b10(lVar6,(double)param_3[0x67]),
        ((uint)((ulonglong)dVar11 >> 0x34) & 0x7ff) != 0x7ff)) &&
       ((dVar3 < dVar11 && (dVar11 < dVar2)))) {
      param_3[0x67] = (int)dVar11;
    }
    FUN_18000f890(local_c8);
  }
  return;
}



/* ===== 18019f2c0 FUN_18019f2c0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18019f2c0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  int *piVar3;
  undefined1 auStack_68 [32];
  undefined1 local_48 [32];
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_68;
  uVar2 = FUN_180073a70(local_48,param_2,".material");
  FUN_1800f3090(param_1,uVar2,param_3);
  FUN_18000f890(local_48);
  uVar2 = FUN_180073a70(local_48,param_2,".color");
  FUN_18019e140(param_1,uVar2,param_3 + 4);
  FUN_18000f890(local_48);
  uVar2 = FUN_180073a70(local_48,param_2,".metalness");
  FUN_1800f3090(param_1,uVar2,param_3 + 0x14);
  FUN_18000f890(local_48);
  uVar2 = FUN_180073a70(local_48,param_2,".roughness");
  FUN_1800f3090(param_1,uVar2,param_3 + 0x18);
  FUN_18000f890(local_48);
  uVar2 = FUN_180073a70(local_48,param_2,".glow_exponent");
  FUN_1800f3090(param_1,uVar2,param_3 + 0x1c);
  FUN_18000f890(local_48);
  uVar2 = FUN_180073a70(local_48,param_2,".outline_exponent");
  FUN_1800f3090(param_1,uVar2,param_3 + 0x20);
  FUN_18000f890(local_48);
  uVar2 = FUN_180073a70(local_48,param_2,".outline_falloff");
  FUN_1800f3090(param_1,uVar2,param_3 + 0x24);
  FUN_18000f890(local_48);
  uVar2 = FUN_180073a70(local_48,param_2,".outline_filling");
  piVar3 = (int *)FUN_1800f2fa0(param_1,uVar2);
  if (piVar3 != (int *)0x0) {
    if (*piVar3 == 1) {
      uVar1 = (undefined1)piVar3[1];
    }
    else if (*piVar3 == 2) {
      if (*(double *)(piVar3 + 2) == 0.0) {
        uVar1 = 0;
      }
      else {
        uVar1 = 1;
      }
    }
    else {
      uVar1 = *(undefined1 *)(param_3 + 0x28);
    }
    *(undefined1 *)(param_3 + 0x28) = uVar1;
  }
  FUN_18000f890(local_48);
  uVar2 = FUN_180073a70(local_48,param_2,".iridescent_strength");
  FUN_1800f3090(param_1,uVar2,param_3 + 0x2c);
  FUN_18000f890(local_48);
  uVar2 = FUN_180073a70(local_48,param_2,".iridescent_roughness");
  FUN_1800f3090(param_1,uVar2,param_3 + 0x30);
  FUN_18000f890(local_48);
  uVar2 = FUN_180073a70(local_48,param_2,".iridescent_tint");
  FUN_18019e140(param_1,uVar2,param_3 + 0x34);
  FUN_18000f890(local_48);
  uVar2 = FUN_180073a70(local_48,param_2,".water_speed");
  FUN_1800f3090(param_1,uVar2,param_3 + 0x44);
  FUN_18000f890(local_48);
  uVar2 = FUN_180073a70(local_48,param_2,".glossy_exponent");
  FUN_1800f3090(param_1,uVar2,param_3 + 0x48);
  FUN_18000f890(local_48);
  uVar2 = FUN_180073a70(local_48,param_2,".glossy_filling");
  FUN_1800f3090(param_1,uVar2,param_3 + 0x4c);
  FUN_18000f890(local_48);
  uVar2 = FUN_180073a70(local_48,param_2,".glossy_falloff");
  FUN_1800f3090(param_1,uVar2,param_3 + 0x50);
  FUN_18000f890(local_48);
  uVar2 = FUN_180073a70(local_48,param_2,".glossy_tint");
  FUN_1800f3090(param_1,uVar2,param_3 + 0x54);
  FUN_18000f890(local_48);
  return;
}



/* ===== 18019f5e0 FUN_18019f5e0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18019f5e0(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  int *piVar3;
  undefined1 auStack_68 [32];
  undefined1 local_48 [32];
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_68;
  uVar2 = FUN_180073a70(local_48,param_2,".enabled");
  piVar3 = (int *)FUN_1800f2fa0(param_1,uVar2);
  if (piVar3 != (int *)0x0) {
    if (*piVar3 == 1) {
      uVar1 = (undefined1)piVar3[1];
    }
    else if (*piVar3 == 2) {
      if (*(double *)(piVar3 + 2) == 0.0) {
        uVar1 = 0;
      }
      else {
        uVar1 = 1;
      }
    }
    else {
      uVar1 = *param_3;
    }
    *param_3 = uVar1;
  }
  FUN_18000f890(local_48);
  uVar2 = FUN_180073a70(local_48,param_2,".color");
  FUN_18019e140(param_1,uVar2,param_3 + 4);
  FUN_18000f890(local_48);
  return;
}



/* ===== 18019f6a0 FUN_18019f6a0 ===== */

void FUN_18019f6a0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong *plVar2;
  
  piVar1 = (int *)FUN_1800f2fa0();
  if ((piVar1 == (int *)0x0) || (*piVar1 != 3)) {
    return;
  }
  plVar2 = (longlong *)(piVar1 + 4);
  *param_3 = 0;
  param_3[1] = 0;
  *(undefined4 *)(param_3 + 2) = 0;
  if (0xf < *(ulonglong *)(piVar1 + 10)) {
    plVar2 = (longlong *)*plVar2;
  }
  snprintf(param_3,0x14,&DAT_1806d3198,plVar2);
  return;
}



/* ===== 18019f6f0 FUN_18019f6f0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18019f6f0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  double dVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  int *piVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_88 [32];
  undefined1 local_68 [32];
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_88;
  FUN_1801bf4a0(param_1,param_2,param_3 + 0x264);
  uVar3 = FUN_180073a70(local_68,param_2,"world.modulation");
  piVar4 = (int *)FUN_1800f2fa0(param_1,uVar3);
  if (piVar4 != (int *)0x0) {
    if (*piVar4 == 1) {
      uVar2 = (undefined1)piVar4[1];
    }
    else if (*piVar4 == 2) {
      if (*(double *)(piVar4 + 2) == 0.0) {
        uVar2 = 0;
      }
      else {
        uVar2 = 1;
      }
    }
    else {
      uVar2 = *(undefined1 *)(param_3 + 4);
    }
    *(undefined1 *)(param_3 + 4) = uVar2;
  }
  FUN_18000f890(local_68);
  uVar3 = FUN_180073a70(local_68,param_2,"world.modulation_color");
  FUN_18019e140(param_1,uVar3,param_3 + 8);
  FUN_18000f890(local_68);
  uVar3 = FUN_180073a70(local_68,param_2,"world.gamma");
  piVar4 = (int *)FUN_1800f2fa0(param_1,uVar3);
  if (piVar4 != (int *)0x0) {
    if (*piVar4 == 1) {
      uVar2 = (undefined1)piVar4[1];
    }
    else if (*piVar4 == 2) {
      if (*(double *)(piVar4 + 2) == 0.0) {
        uVar2 = 0;
      }
      else {
        uVar2 = 1;
      }
    }
    else {
      uVar2 = *(undefined1 *)(param_3 + 0x18);
    }
    *(undefined1 *)(param_3 + 0x18) = uVar2;
  }
  FUN_18000f890(local_68);
  uVar3 = FUN_180073a70(local_68,param_2,"world.gamma_value");
  lVar5 = FUN_1800f2fa0(param_1,uVar3);
  if (lVar5 != 0) {
    dVar1 = (double)FUN_180370b10(lVar5,SUB84((double)*(float *)(param_3 + 0x1c),0));
    if (((uint)(float)dVar1 & 0x7f800000) != 0x7f800000) {
      *(float *)(param_3 + 0x1c) = (float)dVar1;
    }
  }
  FUN_18000f890(local_68);
  uVar3 = FUN_180073a70(local_68,param_2,"world.bloom");
  piVar4 = (int *)FUN_1800f2fa0(param_1,uVar3);
  if (piVar4 != (int *)0x0) {
    if (*piVar4 == 1) {
      uVar2 = (undefined1)piVar4[1];
    }
    else if (*piVar4 == 2) {
      if (*(double *)(piVar4 + 2) == 0.0) {
        uVar2 = 0;
      }
      else {
        uVar2 = 1;
      }
    }
    else {
      uVar2 = *(undefined1 *)(param_3 + 0x20);
    }
    *(undefined1 *)(param_3 + 0x20) = uVar2;
  }
  FUN_18000f890(local_68);
  uVar3 = FUN_180073a70(local_68,param_2,"world.bloom_amount");
  lVar5 = FUN_1800f2fa0(param_1,uVar3);
  if (lVar5 != 0) {
    dVar1 = (double)FUN_180370b10(lVar5,SUB84((double)*(float *)(param_3 + 0x24),0));
    if (((uint)(float)dVar1 & 0x7f800000) != 0x7f800000) {
      *(float *)(param_3 + 0x24) = (float)dVar1;
    }
  }
  FUN_18000f890(local_68);
  uVar3 = FUN_180073a70(local_68,param_2,"world.wetness");
  piVar4 = (int *)FUN_1800f2fa0(param_1,uVar3);
  if (piVar4 != (int *)0x0) {
    if (*piVar4 == 1) {
      uVar2 = (undefined1)piVar4[1];
    }
    else if (*piVar4 == 2) {
      if (*(double *)(piVar4 + 2) == 0.0) {
        uVar2 = 0;
      }
      else {
        uVar2 = 1;
      }
    }
    else {
      uVar2 = *(undefined1 *)(param_3 + 0x28);
    }
    *(undefined1 *)(param_3 + 0x28) = uVar2;
  }
  FUN_18000f890(local_68);
  uVar3 = FUN_180073a70(local_68,param_2,"world.wetness_density");
  lVar5 = FUN_1800f2fa0(param_1,uVar3);
  if (lVar5 != 0) {
    dVar1 = (double)FUN_180370b10(lVar5,SUB84((double)*(float *)(param_3 + 0x2c),0));
    if (((uint)(float)dVar1 & 0x7f800000) != 0x7f800000) {
      *(float *)(param_3 + 0x2c) = (float)dVar1;
    }
  }
  FUN_18000f890(local_68);
  uVar3 = FUN_180073a70(local_68,param_2,"world.wetness_speed");
  lVar5 = FUN_1800f2fa0(param_1,uVar3);
  if (lVar5 != 0) {
    dVar1 = (double)FUN_180370b10(lVar5,SUB84((double)*(float *)(param_3 + 0x30),0));
    if (((uint)(float)dVar1 & 0x7f800000) != 0x7f800000) {
      *(float *)(param_3 + 0x30) = (float)dVar1;
    }
  }
  FUN_18000f890(local_68);
  uVar3 = FUN_180073a70(local_68,param_2,"world.wind");
  piVar4 = (int *)FUN_1800f2fa0(param_1,uVar3);
  if (piVar4 != (int *)0x0) {
    if (*piVar4 == 1) {
      uVar2 = (undefined1)piVar4[1];
    }
    else if (*piVar4 == 2) {
      if (*(double *)(piVar4 + 2) == 0.0) {
        uVar2 = 0;
      }
      else {
        uVar2 = 1;
      }
    }
    else {
      uVar2 = *(undefined1 *)(param_3 + 0x34);
    }
    *(undefined1 *)(param_3 + 0x34) = uVar2;
  }
  FUN_18000f890(local_68);
  uVar3 = FUN_180073a70(local_68,param_2,"world.wind_strength");
  lVar5 = FUN_1800f2fa0(param_1,uVar3);
  if (lVar5 != 0) {
    dVar1 = (double)FUN_180370b10(lVar5,SUB84((double)*(float *)(param_3 + 0x38),0));
    if (((uint)(float)dVar1 & 0x7f800000) != 0x7f800000) {
      *(float *)(param_3 + 0x38) = (float)dVar1;
    }
  }
  FUN_18000f890(local_68);
  uVar3 = FUN_180073a70(local_68,param_2,"world.wind_direction");
  lVar5 = FUN_1800f2fa0(param_1,uVar3);
  if (lVar5 != 0) {
    dVar1 = (double)FUN_180370b10(lVar5,SUB84((double)*(float *)(param_3 + 0x3c),0));
    if (((uint)(float)dVar1 & 0x7f800000) != 0x7f800000) {
      *(float *)(param_3 + 0x3c) = (float)dVar1;
    }
  }
  FUN_18000f890(local_68);
  uVar3 = FUN_180073a70(local_68,param_2,"world.dof");
  piVar4 = (int *)FUN_1800f2fa0(param_1,uVar3);
  if (piVar4 != (int *)0x0) {
    if (*piVar4 == 1) {
      uVar2 = (undefined1)piVar4[1];
    }
    else if (*piVar4 == 2) {
      if (*(double *)(piVar4 + 2) == 0.0) {
        uVar2 = 0;
      }
      else {
        uVar2 = 1;
      }
    }
    else {
      uVar2 = *(undefined1 *)(param_3 + 0x40);
    }
    *(undefined1 *)(param_3 + 0x40) = uVar2;
  }
  FUN_18000f890(local_68);
  uVar3 = FUN_180073a70(local_68,param_2,"world.fog");
  piVar4 = (int *)FUN_1800f2fa0(param_1,uVar3);
  if (piVar4 != (int *)0x0) {
    if (*piVar4 == 1) {
      uVar2 = (undefined1)piVar4[1];
    }
    else if (*piVar4 == 2) {
      if (*(double *)(piVar4 + 2) == 0.0) {
        uVar2 = 0;
      }
      else {
        uVar2 = 1;
      }
    }
    else {
      uVar2 = *(undefined1 *)(param_3 + 0x54);
    }
    *(undefined1 *)(param_3 + 0x54) = uVar2;
  }
  FUN_18000f890(local_68);
  uVar3 = FUN_180073a70(local_68,param_2,"world.fog_color");
  FUN_18019e140(param_1,uVar3,param_3 + 0x58);
  FUN_18000f890(local_68);
  uVar3 = FUN_180073a70(local_68,param_2,"world.fog_density");
  lVar5 = FUN_1800f2fa0(param_1,uVar3);
  if (lVar5 != 0) {
    dVar1 = (double)FUN_180370b10(lVar5,SUB84((double)*(float *)(param_3 + 0x68),0));
    if (((uint)(float)dVar1 & 0x7f800000) != 0x7f800000) {
      *(float *)(param_3 + 0x68) = (float)dVar1;
    }
  }
  FUN_18000f890(local_68);
  uVar3 = FUN_180073a70(local_68,param_2,"world.fog_distance");
  lVar5 = FUN_1800f2fa0(param_1,uVar3);
  if (lVar5 != 0) {
    dVar1 = (double)FUN_180370b10(lVar5,SUB84((double)*(float *)(param_3 + 0x6c),0));
    if (((uint)(float)dVar1 & 0x7f800000) != 0x7f800000) {
      *(float *)(param_3 + 0x6c) = (float)dVar1;
    }
  }
  FUN_18000f890(local_68);
  uVar3 = FUN_180073a70(local_68,param_2,"world.fog_falloff");
  lVar5 = FUN_1800f2fa0(param_1,uVar3);
  if (lVar5 != 0) {
    dVar1 = (double)FUN_180370b10(lVar5,SUB84((double)*(float *)(param_3 + 0x70),0));
    if (((uint)(float)dVar1 & 0x7f800000) != 0x7f800000) {
      *(float *)(param_3 + 0x70) = (float)dVar1;
    }
  }
  FUN_18000f890(local_68);
  uVar3 = FUN_180073a70(local_68,param_2,"world.fog_glow");
  lVar5 = FUN_1800f2fa0(param_1,uVar3);
  if (lVar5 != 0) {
    dVar1 = (double)FUN_180370b10(lVar5,SUB84((double)*(float *)(param_3 + 0x74),0));
    if (((uint)(float)dVar1 & 0x7f800000) != 0x7f800000) {
      *(float *)(param_3 + 0x74) = (float)dVar1;
    }
  }
  FUN_18000f890(local_68);
  uVar3 = FUN_180073a70(local_68,param_2,"world.dof_near_blurry");
  lVar5 = FUN_1800f2fa0(param_1,uVar3);
  if (lVar5 != 0) {
    dVar1 = (double)FUN_180370b10(lVar5,SUB84((double)*(float *)(param_3 + 0x44),0));
    if (((uint)(float)dVar1 & 0x7f800000) != 0x7f800000) {
      *(float *)(param_3 + 0x44) = (float)dVar1;
    }
  }
  FUN_18000f890(local_68);
  uVar3 = FUN_180073a70(local_68,param_2,"world.dof_near_crisp");
  lVar5 = FUN_1800f2fa0(param_1,uVar3);
  if (lVar5 != 0) {
    dVar1 = (double)FUN_180370b10(lVar5,SUB84((double)*(float *)(param_3 + 0x48),0));
    if (((uint)(float)dVar1 & 0x7f800000) != 0x7f800000) {
      *(float *)(param_3 + 0x48) = (float)dVar1;
    }
  }
  FUN_18000f890(local_68);
  uVar3 = FUN_180073a70(local_68,param_2,"world.dof_far_crisp");
  lVar5 = FUN_1800f2fa0(param_1,uVar3);
  if (lVar5 != 0) {
    dVar1 = (double)FUN_180370b10(lVar5,SUB84((double)*(float *)(param_3 + 0x4c),0));
    if (((uint)(float)dVar1 & 0x7f800000) != 0x7f800000) {
      *(float *)(param_3 + 0x4c) = (float)dVar1;
    }
  }
  FUN_18000f890(local_68);
  uVar3 = FUN_180073a70(local_68,param_2,"world.dof_far_blurry");
  lVar5 = FUN_1800f2fa0(param_1,uVar3);
  if (lVar5 != 0) {
    dVar1 = (double)FUN_180370b10(lVar5,SUB84((double)*(float *)(param_3 + 0x50),0));
    if (((uint)(float)dVar1 & 0x7f800000) != 0x7f800000) {
      *(float *)(param_3 + 0x50) = (float)dVar1;
    }
  }
  FUN_18000f890(local_68);
  uVar3 = FUN_180073a70(local_68,param_2,"screen.rain");
  piVar4 = (int *)FUN_1800f2fa0(param_1,uVar3);
  if (piVar4 != (int *)0x0) {
    if (*piVar4 == 1) {
      uVar2 = (undefined1)piVar4[1];
    }
    else if (*piVar4 == 2) {
      if (*(double *)(piVar4 + 2) == 0.0) {
        uVar2 = 0;
      }
      else {
        uVar2 = 1;
      }
    }
    else {
      uVar2 = *(undefined1 *)(param_3 + 0x20c);
    }
    *(undefined1 *)(param_3 + 0x20c) = uVar2;
  }
  FUN_18000f890(local_68);
  uVar3 = FUN_180073a70(local_68,param_2,"screen.rain_amount");
  lVar5 = FUN_1800f2fa0(param_1,uVar3);
  if (lVar5 != 0) {
    dVar1 = (double)FUN_180370b10(lVar5,SUB84((double)*(float *)(param_3 + 0x210),0));
    if (((uint)(float)dVar1 & 0x7f800000) != 0x7f800000) {
      *(float *)(param_3 + 0x210) = (float)dVar1;
    }
  }
  FUN_18000f890(local_68);
  uVar3 = FUN_180073a70(local_68,param_2,"screen.rain_size");
  lVar5 = FUN_1800f2fa0(param_1,uVar3);
  if (lVar5 != 0) {
    dVar1 = (double)FUN_180370b10(lVar5,SUB84((double)*(float *)(param_3 + 0x214),0));
    if (((uint)(float)dVar1 & 0x7f800000) != 0x7f800000) {
      *(float *)(param_3 + 0x214) = (float)dVar1;
    }
  }
  FUN_18000f890(local_68);
  uVar3 = FUN_180073a70(local_68,param_2,"screen.rain_speed");
  lVar5 = FUN_1800f2fa0(param_1,uVar3);
  if (lVar5 != 0) {
    dVar1 = (double)FUN_180370b10(lVar5,SUB84((double)*(float *)(param_3 + 0x218),0));
    if (((uint)(float)dVar1 & 0x7f800000) != 0x7f800000) {
      *(float *)(param_3 + 0x218) = (float)dVar1;
    }
  }
  FUN_18000f890(local_68);
  uVar3 = FUN_180073a70(local_68,param_2,"screen.rain_fog");
  lVar5 = FUN_1800f2fa0(param_1,uVar3);
  if (lVar5 != 0) {
    dVar1 = (double)FUN_180370b10(lVar5,SUB84((double)*(float *)(param_3 + 0x21c),0));
    if (((uint)(float)dVar1 & 0x7f800000) != 0x7f800000) {
      *(float *)(param_3 + 0x21c) = (float)dVar1;
    }
  }
  FUN_18000f890(local_68);
  uVar3 = FUN_180073a70(local_68,param_2,"screen.rain_blur");
  lVar5 = FUN_1800f2fa0(param_1,uVar3);
  if (lVar5 != 0) {
    dVar1 = (double)FUN_180370b10(lVar5,SUB84((double)*(float *)(param_3 + 0x220),0));
    if (((uint)(float)dVar1 & 0x7f800000) != 0x7f800000) {
      *(float *)(param_3 + 0x220) = (float)dVar1;
    }
  }
  FUN_18000f890(local_68);
  uVar3 = FUN_180073a70(local_68,param_2,"screen.chromatic");
  piVar4 = (int *)FUN_1800f2fa0(param_1,uVar3);
  if (piVar4 != (int *)0x0) {
    if (*piVar4 == 1) {
      uVar2 = (undefined1)piVar4[1];
    }
    else if (*piVar4 == 2) {
      if (*(double *)(piVar4 + 2) == 0.0) {
        uVar2 = 0;
      }
      else {
        uVar2 = 1;
      }
    }
    else {
      uVar2 = *(undefined1 *)(param_3 + 0x224);
    }
    *(undefined1 *)(param_3 + 0x224) = uVar2;
  }
  FUN_18000f890(local_68);
  uVar3 = FUN_180073a70(local_68,param_2,"screen.chromatic_amount");
  lVar5 = FUN_1800f2fa0(param_1,uVar3);
  if (lVar5 != 0) {
    dVar1 = (double)FUN_180370b10(lVar5,SUB84((double)*(float *)(param_3 + 0x228),0));
    if (((uint)(float)dVar1 & 0x7f800000) != 0x7f800000) {
      *(float *)(param_3 + 0x228) = (float)dVar1;
    }
  }
  FUN_18000f890(local_68);
  uVar3 = FUN_180073a70(local_68,param_2,"screen.vignette");
  piVar4 = (int *)FUN_1800f2fa0(param_1,uVar3);
  if (piVar4 != (int *)0x0) {
    if (*piVar4 == 1) {
      uVar2 = (undefined1)piVar4[1];
    }
    else if (*piVar4 == 2) {
      if (*(double *)(piVar4 + 2) == 0.0) {
        uVar2 = 0;
      }
      else {
        uVar2 = 1;
      }
    }
    else {
      uVar2 = *(undefined1 *)(param_3 + 0x22c);
    }
    *(undefined1 *)(param_3 + 0x22c) = uVar2;
  }
  FUN_18000f890(local_68);
  uVar3 = FUN_180073a70(local_68,param_2,"screen.vignette_amount");
  lVar5 = FUN_1800f2fa0(param_1,uVar3);
  if (lVar5 != 0) {
    dVar1 = (double)FUN_180370b10(lVar5,SUB84((double)*(float *)(param_3 + 0x230),0));
    if (((uint)(float)dVar1 & 0x7f800000) != 0x7f800000) {
      *(float *)(param_3 + 0x230) = (float)dVar1;
    }
  }
  FUN_18000f890(local_68);
  uVar3 = FUN_180073a70(local_68,param_2,"sky.mode");
  FUN_1800f3090(param_1,uVar3,param_3 + 0x78);
  FUN_18000f890(local_68);
  uVar3 = FUN_180073a70(local_68,param_2,"sky.texture");
  piVar4 = (int *)FUN_1800f2fa0(param_1,uVar3);
  if ((piVar4 != (int *)0x0) && (*piVar4 == 3)) {
    FUN_180540170(param_3 + 0x7c,0,0xa0);
    plVar6 = (longlong *)(piVar4 + 4);
    if (0xf < *(ulonglong *)(piVar4 + 10)) {
      plVar6 = (longlong *)*plVar6;
    }
    snprintf(param_3 + 0x7c,0xa0,&DAT_1806d3198,plVar6);
  }
  FUN_18000f890(local_68);
  uVar3 = FUN_180073a70(local_68,param_2,"sky.shader");
  piVar4 = (int *)FUN_1800f2fa0(param_1,uVar3);
  if ((piVar4 != (int *)0x0) && (*piVar4 == 3)) {
    *(undefined8 *)(param_3 + 0x11c) = 0;
    *(undefined8 *)(param_3 + 0x124) = 0;
    plVar6 = (longlong *)(piVar4 + 4);
    *(undefined8 *)(param_3 + 300) = 0;
    *(undefined8 *)(param_3 + 0x134) = 0;
    *(undefined8 *)(param_3 + 0x13c) = 0;
    *(undefined8 *)(param_3 + 0x144) = 0;
    *(undefined8 *)(param_3 + 0x14c) = 0;
    *(undefined8 *)(param_3 + 0x154) = 0;
    if (0xf < *(ulonglong *)(piVar4 + 10)) {
      plVar6 = (longlong *)*plVar6;
    }
    snprintf((undefined8 *)(param_3 + 0x11c),0x40,&DAT_1806d3198,plVar6);
  }
  FUN_18000f890(local_68);
  uVar3 = FUN_180073a70(local_68,param_2,"sky.params");
  FUN_1801c1520(param_1,uVar3,param_3 + 0x15c);
  FUN_18000f890(local_68);
  uVar3 = FUN_180073a70(local_68,param_2,"sky.primary");
  FUN_18019e140(param_1,uVar3,param_3 + 0x17c);
  FUN_18000f890(local_68);
  uVar3 = FUN_180073a70(local_68,param_2,"sky.secondary");
  FUN_18019e140(param_1,uVar3,param_3 + 0x18c);
  FUN_18000f890(local_68);
  uVar3 = FUN_180073a70(local_68,param_2,"sky.exposure");
  lVar5 = FUN_1800f2fa0(param_1,uVar3);
  if (lVar5 != 0) {
    dVar1 = (double)FUN_180370b10(lVar5,SUB84((double)*(float *)(param_3 + 0x19c),0));
    if (((uint)(float)dVar1 & 0x7f800000) != 0x7f800000) {
      *(float *)(param_3 + 0x19c) = (float)dVar1;
    }
  }
  FUN_18000f890(local_68);
  uVar3 = FUN_180073a70(local_68,param_2,"sky.update_rate");
  lVar5 = FUN_1800f2fa0(param_1,uVar3);
  if (lVar5 != 0) {
    dVar1 = (double)FUN_180370b10(lVar5,SUB84((double)*(float *)(param_3 + 0x1a0),0));
    if (((uint)(float)dVar1 & 0x7f800000) != 0x7f800000) {
      *(float *)(param_3 + 0x1a0) = (float)dVar1;
    }
  }
  FUN_18000f890(local_68);
  uVar3 = FUN_180073a70(local_68,param_2,"sky.resolution");
  FUN_1800f3090(param_1,uVar3,param_3 + 0x1a4);
  FUN_18000f890(local_68);
  uVar3 = FUN_180073a70(local_68,param_2,"sky.supersample");
  piVar4 = (int *)FUN_1800f2fa0(param_1,uVar3);
  if (piVar4 != (int *)0x0) {
    if (*piVar4 == 1) {
      uVar2 = (undefined1)piVar4[1];
    }
    else if (*piVar4 == 2) {
      if (*(double *)(piVar4 + 2) == 0.0) {
        uVar2 = 0;
      }
      else {
        uVar2 = 1;
      }
    }
    else {
      uVar2 = *(undefined1 *)(param_3 + 0x1a8);
    }
    *(undefined1 *)(param_3 + 0x1a8) = uVar2;
  }
  FUN_18000f890(local_68);
  uVar3 = FUN_180073a70(local_68,param_2,"sky.recolor");
  piVar4 = (int *)FUN_1800f2fa0(param_1,uVar3);
  if (piVar4 != (int *)0x0) {
    if (*piVar4 == 1) {
      uVar2 = (undefined1)piVar4[1];
    }
    else if (*piVar4 == 2) {
      if (*(double *)(piVar4 + 2) == 0.0) {
        uVar2 = 0;
      }
      else {
        uVar2 = 1;
      }
    }
    else {
      uVar2 = *(undefined1 *)(param_3 + 0x1a9);
    }
    *(undefined1 *)(param_3 + 0x1a9) = uVar2;
  }
  FUN_18000f890(local_68);
  uVar3 = FUN_180073a70(local_68,param_2,"sky.recolor_strength");
  lVar5 = FUN_1800f2fa0(param_1,uVar3);
  if (lVar5 != 0) {
    dVar1 = (double)FUN_180370b10(lVar5,SUB84((double)*(float *)(param_3 + 0x1ac),0));
    if (((uint)(float)dVar1 & 0x7f800000) != 0x7f800000) {
      *(float *)(param_3 + 0x1ac) = (float)dVar1;
    }
  }
  FUN_18000f890(local_68);
  uVar3 = FUN_180073a70(local_68,param_2,"sky.sky_tint");
  piVar4 = (int *)FUN_1800f2fa0(param_1,uVar3);
  if (piVar4 != (int *)0x0) {
    if (*piVar4 == 1) {
      uVar2 = (undefined1)piVar4[1];
    }
    else if (*piVar4 == 2) {
      if (*(double *)(piVar4 + 2) == 0.0) {
        uVar2 = 0;
      }
      else {
        uVar2 = 1;
      }
    }
    else {
      uVar2 = *(undefined1 *)(param_3 + 0x1b0);
    }
    *(undefined1 *)(param_3 + 0x1b0) = uVar2;
  }
  FUN_18000f890(local_68);
  uVar3 = FUN_180073a70(local_68,param_2,"sky.sky_color");
  FUN_18019e140(param_1,uVar3,param_3 + 0x1b4);
  FUN_18000f890(local_68);
  uVar3 = FUN_180073a70(local_68,param_2,"sky.brightness");
  lVar5 = FUN_1800f2fa0(param_1,uVar3);
  if (lVar5 != 0) {
    dVar1 = (double)FUN_180370b10(lVar5,SUB84((double)*(float *)(param_3 + 0x208),0));
    if (((uint)(float)dVar1 & 0x7f800000) != 0x7f800000) {
      *(float *)(param_3 + 0x208) = (float)dVar1;
    }
  }
  FUN_18000f890(local_68);
  uVar3 = FUN_180073a70(local_68,param_2,"sky.cloud_tint");
  piVar4 = (int *)FUN_1800f2fa0(param_1,uVar3);
  if (piVar4 != (int *)0x0) {
    if (*piVar4 == 1) {
      uVar2 = (undefined1)piVar4[1];
    }
    else if (*piVar4 == 2) {
      if (*(double *)(piVar4 + 2) == 0.0) {
        uVar2 = 0;
      }
      else {
        uVar2 = 1;
      }
    }
    else {
      uVar2 = *(undefined1 *)(param_3 + 0x1c4);
    }
    *(undefined1 *)(param_3 + 0x1c4) = uVar2;
  }
  FUN_18000f890(local_68);
  uVar3 = FUN_180073a70(local_68,param_2,"sky.cloud_color");
  FUN_18019e140(param_1,uVar3,param_3 + 0x1c8);
  FUN_18000f890(local_68);
  uVar3 = FUN_180073a70(local_68,param_2,"sky.sun_tint");
  piVar4 = (int *)FUN_1800f2fa0(param_1,uVar3);
  if (piVar4 != (int *)0x0) {
    if (*piVar4 == 1) {
      uVar2 = (undefined1)piVar4[1];
    }
    else if (*piVar4 == 2) {
      if (*(double *)(piVar4 + 2) == 0.0) {
        uVar2 = 0;
      }
      else {
        uVar2 = 1;
      }
    }
    else {
      uVar2 = *(undefined1 *)(param_3 + 0x1d8);
    }
    *(undefined1 *)(param_3 + 0x1d8) = uVar2;
  }
  FUN_18000f890(local_68);
  uVar3 = FUN_180073a70(local_68,param_2,"sky.sun_color");
  FUN_18019e140(param_1,uVar3,param_3 + 0x1dc);
  FUN_18000f890(local_68);
  uVar3 = FUN_180073a70(local_68,param_2,"sky.lighting");
  piVar4 = (int *)FUN_1800f2fa0(param_1,uVar3);
  if (piVar4 != (int *)0x0) {
    if (*piVar4 == 1) {
      uVar2 = (undefined1)piVar4[1];
    }
    else if (*piVar4 == 2) {
      if (*(double *)(piVar4 + 2) == 0.0) {
        uVar2 = 0;
      }
      else {
        uVar2 = 1;
      }
    }
    else {
      uVar2 = *(undefined1 *)(param_3 + 0x1ec);
    }
    *(undefined1 *)(param_3 + 0x1ec) = uVar2;
  }
  FUN_18000f890(local_68);
  uVar3 = FUN_180073a70(local_68,param_2,"sky.lighting_color");
  FUN_18019e140(param_1,uVar3,param_3 + 0x1f0);
  FUN_18000f890(local_68);
  uVar3 = FUN_180073a70(local_68,param_2,"sky.lighting_intensity");
  lVar5 = FUN_1800f2fa0(param_1,uVar3);
  if (lVar5 != 0) {
    dVar1 = (double)FUN_180370b10(lVar5,SUB84((double)*(float *)(param_3 + 0x200),0));
    if (((uint)(float)dVar1 & 0x7f800000) != 0x7f800000) {
      *(float *)(param_3 + 0x200) = (float)dVar1;
    }
  }
  FUN_18000f890(local_68);
  uVar3 = FUN_180073a70(local_68,param_2,"sky.lighting_mode");
  FUN_1800f3090(param_1,uVar3,param_3 + 0x204);
  FUN_18000f890(local_68);
  uVar3 = FUN_180073a70(local_68,param_2,"motion_blur.enabled");
  piVar4 = (int *)FUN_1800f2fa0(param_1,uVar3);
  if (piVar4 != (int *)0x0) {
    if (*piVar4 == 1) {
      uVar2 = (undefined1)piVar4[1];
    }
    else if (*piVar4 == 2) {
      if (*(double *)(piVar4 + 2) == 0.0) {
        uVar2 = 0;
      }
      else {
        uVar2 = 1;
      }
    }
    else {
      uVar2 = *(undefined1 *)(param_3 + 0x234);
    }
    *(undefined1 *)(param_3 + 0x234) = uVar2;
  }
  FUN_18000f890(local_68);
  uVar3 = FUN_180073a70(local_68,param_2,"motion_blur.strength");
  lVar5 = FUN_1800f2fa0(param_1,uVar3);
  if (lVar5 != 0) {
    dVar1 = (double)FUN_180370b10(lVar5,SUB84((double)*(float *)(param_3 + 0x238),0));
    if (((uint)(float)dVar1 & 0x7f800000) != 0x7f800000) {
      *(float *)(param_3 + 0x238) = (float)dVar1;
    }
  }
  FUN_18000f890(local_68);
  uVar3 = FUN_180073a70(local_68,param_2,"weather.enabled");
  piVar4 = (int *)FUN_1800f2fa0(param_1,uVar3);
  if (piVar4 != (int *)0x0) {
    if (*piVar4 == 1) {
      uVar2 = (undefined1)piVar4[1];
    }
    else if (*piVar4 == 2) {
      if (*(double *)(piVar4 + 2) == 0.0) {
        uVar2 = 0;
      }
      else {
        uVar2 = 1;
      }
    }
    else {
      uVar2 = *(undefined1 *)(param_3 + 0x23c);
    }
    *(undefined1 *)(param_3 + 0x23c) = uVar2;
  }
  FUN_18000f890(local_68);
  uVar3 = FUN_180073a70(local_68,param_2,"weather.type");
  FUN_1800f3090(param_1,uVar3,param_3 + 0x240);
  FUN_18000f890(local_68);
  uVar3 = FUN_180073a70(local_68,param_2,"weather.color");
  FUN_18019e140(param_1,uVar3,param_3 + 0x244);
  FUN_18000f890(local_68);
  uVar3 = FUN_180073a70(local_68,param_2,"weather.density");
  lVar5 = FUN_1800f2fa0(param_1,uVar3);
  if (lVar5 != 0) {
    dVar1 = (double)FUN_180370b10(lVar5,SUB84((double)*(float *)(param_3 + 0x254),0));
    if (((uint)(float)dVar1 & 0x7f800000) != 0x7f800000) {
      *(float *)(param_3 + 0x254) = (float)dVar1;
    }
  }
  FUN_18000f890(local_68);
  uVar3 = FUN_180073a70(local_68,param_2,"weather.gravity");
  lVar5 = FUN_1800f2fa0(param_1,uVar3);
  if (lVar5 != 0) {
    dVar1 = (double)FUN_180370b10(lVar5,SUB84((double)*(float *)(param_3 + 600),0));
    if (((uint)(float)dVar1 & 0x7f800000) != 0x7f800000) {
      *(float *)(param_3 + 600) = (float)dVar1;
    }
  }
  FUN_18000f890(local_68);
  uVar3 = FUN_180073a70(local_68,param_2,"weather.glow");
  lVar5 = FUN_1800f2fa0(param_1,uVar3);
  if (lVar5 != 0) {
    dVar1 = (double)FUN_180370b10(lVar5,SUB84((double)*(float *)(param_3 + 0x25c),0));
    if (((uint)(float)dVar1 & 0x7f800000) != 0x7f800000) {
      *(float *)(param_3 + 0x25c) = (float)dVar1;
    }
  }
  FUN_18000f890(local_68);
  uVar3 = FUN_180073a70(local_68,param_2,"weather.rain_mist");
  piVar4 = (int *)FUN_1800f2fa0(param_1,uVar3);
  if (piVar4 != (int *)0x0) {
    if (*piVar4 == 1) {
      uVar2 = (undefined1)piVar4[1];
    }
    else if (*piVar4 == 2) {
      if (*(double *)(piVar4 + 2) == 0.0) {
        uVar2 = 0;
      }
      else {
        uVar2 = 1;
      }
    }
    else {
      uVar2 = *(undefined1 *)(param_3 + 0x260);
    }
    *(undefined1 *)(param_3 + 0x260) = uVar2;
  }
  FUN_18000f890(local_68);
  uVar3 = FUN_180073a70(local_68,param_2,"weather.rain_ripples");
  piVar4 = (int *)FUN_1800f2fa0(param_1,uVar3);
  if (piVar4 != (int *)0x0) {
    if (*piVar4 == 1) {
      uVar2 = (undefined1)piVar4[1];
    }
    else if (*piVar4 == 2) {
      if (*(double *)(piVar4 + 2) == 0.0) {
        uVar2 = 0;
      }
      else {
        uVar2 = 1;
      }
    }
    else {
      uVar2 = *(undefined1 *)(param_3 + 0x261);
    }
    *(undefined1 *)(param_3 + 0x261) = uVar2;
  }
  FUN_18000f890(local_68);
  return;
}



/* ===== 1801a0d60 FUN_1801a0d60 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801a0d60(undefined8 param_1,undefined8 *param_2,int *param_3)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong *puVar4;
  undefined4 *puVar5;
  int *piVar6;
  ulonglong uVar7;
  int *piVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  undefined1 auStack_e8 [40];
  ulonglong local_c0;
  ulonglong uStack_b8;
  ulonglong local_b0;
  ulonglong uStack_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined1 local_80 [32];
  undefined1 local_60 [32];
  ulonglong local_40;
  
  local_40 = DAT_180919500 ^ (ulonglong)auStack_e8;
  uVar3 = FUN_180073a70(&local_a0,param_2,"count");
  FUN_1800f3090(param_1,uVar3,param_3);
  FUN_18000f890(&local_a0);
  uVar11 = 1;
  do {
    if (*param_3 <= (int)uVar11) {
      return;
    }
    uVar3 = FUN_18004e4f0(local_60,uVar11);
    if ((ulonglong)param_2[3] < 0x10) {
      puVar12 = param_2;
    }
    else {
      puVar12 = (undefined8 *)*param_2;
    }
    puVar4 = (ulonglong *)FUN_18006b5b0(uVar3,0,puVar12,param_2[2]);
    local_c0 = *puVar4;
    uStack_b8 = puVar4[1];
    local_b0 = puVar4[2];
    uStack_a8 = puVar4[3];
    puVar4[2] = 0;
    puVar4[3] = 0xf;
    *(undefined1 *)puVar4 = 0;
    puVar5 = (undefined4 *)FUN_1800134a0(&local_c0,&DAT_1806e6f24,1);
    local_a0 = *puVar5;
    uStack_9c = puVar5[1];
    uStack_98 = puVar5[2];
    uStack_94 = puVar5[3];
    local_90 = puVar5[4];
    uStack_8c = puVar5[5];
    uStack_88 = puVar5[6];
    uStack_84 = puVar5[7];
    *(undefined8 *)(puVar5 + 4) = 0;
    *(undefined8 *)(puVar5 + 6) = 0xf;
    *(undefined1 *)puVar5 = 0;
    if (0xf < uStack_a8) {
      uVar10 = uStack_a8 + 1;
      uVar7 = local_c0;
      if (0xfff < uVar10) {
        uVar7 = *(ulonglong *)(local_c0 - 8);
        if (0x1f < (local_c0 - uVar7) - 8) {
          pcVar1 = (code *)swi(0x29);
          (*pcVar1)(5);
          goto LAB_1801a0fb2;
        }
        uVar10 = uStack_a8 + 0x28;
      }
      thunk_FUN_1803d64e0(uVar7,uVar10);
    }
    local_b0 = 0;
    uStack_a8 = 0xf;
    local_c0 = local_c0 & 0xffffffffffffff00;
    FUN_18000f890(local_60);
    uVar3 = FUN_180073a70(local_80,&local_a0,&DAT_18058b644);
    piVar6 = (int *)FUN_1800f2fa0(param_1,uVar3);
    if ((piVar6 != (int *)0x0) && (*piVar6 == 3)) {
      piVar8 = param_3 + uVar11 * 0x52 + 1;
      piVar8[0] = 0;
      piVar8[1] = 0;
      piVar8[2] = 0;
      piVar8[3] = 0;
      piVar8[4] = 0;
      piVar8[5] = 0;
      piVar8[6] = 0;
      piVar8[7] = 0;
      piVar8[8] = 0;
      piVar8[9] = 0;
      piVar8[10] = 0;
      piVar8[0xb] = 0;
      piVar8[0xc] = 0;
      piVar8[0xd] = 0;
      piVar8[0xe] = 0;
      piVar8[0xf] = 0;
      plVar13 = (longlong *)(piVar6 + 4);
      if (0xf < *(ulonglong *)(piVar6 + 10)) {
        plVar13 = (longlong *)*plVar13;
      }
      snprintf(piVar8,0x40,&DAT_1806d3198,plVar13);
    }
    FUN_18000f890(local_80);
    uVar3 = FUN_180073a70(local_80,&local_a0,"weapons");
    FUN_1800f3150(param_1,uVar3,param_3 + uVar11 * 0x52 + 0x11);
    FUN_18000f890(local_80);
    uVar7 = CONCAT44(uStack_84,uStack_88);
    if (0xf < uVar7) {
      uVar10 = uVar7 + 1;
      lVar2 = CONCAT44(uStack_9c,local_a0);
      lVar9 = lVar2;
      if (0xfff < uVar10) {
        lVar9 = *(longlong *)(lVar2 + -8);
        if (0x1f < (lVar2 - lVar9) - 8U) {
LAB_1801a0fb2:
          pcVar1 = (code *)swi(0x29);
          (*pcVar1)(5);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        uVar10 = uVar7 + 0x28;
      }
      thunk_FUN_1803d64e0(lVar9,uVar10);
    }
    uVar11 = uVar11 + 1;
    if (0x3f < uVar11) {
      return;
    }
  } while( true );
}



/* ===== 1801a0fc0 FUN_1801a0fc0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801a0fc0(longlong *param_1,longlong param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  double dVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 uVar7;
  int iVar8;
  undefined8 uVar9;
  char *pcVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  ulonglong uVar14;
  char *pcVar15;
  double dVar16;
  undefined1 auStack_e8 [32];
  longlong *local_c8;
  char *local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  longlong *local_a8;
  undefined1 local_a0 [32];
  undefined1 local_80 [32];
  ulonglong local_60;
  
  local_60 = DAT_180919500 ^ (ulonglong)auStack_e8;
  local_c8 = param_1;
  FUN_180013350(&local_c0,"legitbot.enabled");
  FUN_1800f3030(param_1,&local_c0,param_2);
  FUN_18000f890(&local_c0);
  FUN_180013350(&local_c0,"legitbot.groups.");
  FUN_1801a0d60(param_1,&local_c0,param_2 + 4);
  FUN_18000f890(&local_c0);
  uVar14 = 0;
  do {
    iVar8 = *(int *)(param_2 + 4);
    if (iVar8 < 1) {
      iVar8 = 1;
    }
    if (iVar8 <= (int)uVar14) break;
    uVar9 = FUN_1800ef450(local_80,uVar14 & 0xffffffff);
    uVar9 = FUN_180066ab0(local_a0,"legitbot.",uVar9);
    uVar9 = FUN_180042850(&local_c0,uVar9,&DAT_1806e6f24);
    FUN_180106660(param_1,uVar9,param_2 + 21000 + uVar14 * 100,param_2 + 0x6b08 + uVar14 * 0x3c);
    FUN_18000f890(&local_c0);
    FUN_18000f890(local_a0);
    FUN_18000f890(local_80);
    uVar14 = uVar14 + 1;
  } while (uVar14 < 0x40);
  local_c0 = (char *)0x0;
  uStack_b8 = 0;
  local_b0 = 0;
  local_a8 = (longlong *)0x0;
  pcVar10 = (char *)FUN_18000fb70(0x20);
  uVar6 = s_legitbot_visualize_1806f74f0._12_4_;
  uVar5 = s_legitbot_visualize_1806f74f0._8_4_;
  uVar4 = s_legitbot_visualize_1806f74f0._4_4_;
  local_b0 = 0x12;
  local_a8 = (longlong *)0x1f;
  *(undefined4 *)pcVar10 = s_legitbot_visualize_1806f74f0._0_4_;
  *(undefined4 *)(pcVar10 + 4) = uVar4;
  *(undefined4 *)(pcVar10 + 8) = uVar5;
  *(undefined4 *)(pcVar10 + 0xc) = uVar6;
  *(undefined2 *)(pcVar10 + 0x10) = s_legitbot_visualize_1806f74f0._16_2_;
  pcVar10[0x12] = '\0';
  puVar1 = *(undefined8 **)(*param_1 + 0x50);
  local_c0 = pcVar10;
  for (puVar12 = *(undefined8 **)(*param_1 + 0x48); puVar12 != puVar1; puVar12 = puVar12 + 0x10) {
    if ((ulonglong)puVar12[3] < 0x10) {
      puVar11 = puVar12;
    }
    else {
      puVar11 = (undefined8 *)*puVar12;
    }
    if ((puVar12[2] == 0x12) && (iVar8 = memcmp(pcVar10,puVar11,0x12), iVar8 == 0)) {
      if ((int *)(puVar12 + 4) != (int *)0x0) {
        *(int *)(param_1 + 1) = (int)param_1[1] + 1;
        iVar8 = *(int *)(puVar12 + 4);
        if (iVar8 == 1) {
          uVar7 = *(undefined1 *)((longlong)puVar12 + 0x24);
        }
        else if (iVar8 == 2) {
          if ((double)puVar12[5] == 0.0) {
            uVar7 = 0;
          }
          else {
            uVar7 = 1;
          }
        }
        else {
          uVar7 = *(undefined1 *)(param_2 + 0x7a08);
        }
        *(undefined1 *)(param_2 + 0x7a08) = uVar7;
      }
      break;
    }
  }
  if (0xf < local_a8) {
    uVar14 = (longlong)local_a8 + 1;
    pcVar15 = pcVar10;
    if (0xfff < uVar14) {
      pcVar15 = *(char **)(pcVar10 + -8);
      if ((char *)0x1f < pcVar10 + (-8 - (longlong)pcVar15)) goto LAB_1801a281f;
      uVar14 = (longlong)local_a8 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar15,uVar14);
  }
  local_c0 = (char *)0x0;
  uStack_b8 = 0;
  local_b0 = 0;
  local_a8 = (longlong *)0x0;
  pcVar10 = (char *)FUN_18000fb70(0x20);
  local_b0 = 0x19;
  local_a8 = (longlong *)0x1f;
  uVar9 = CONCAT71(s_legitbot_visualize_target_1806f7540._9_7_,
                   s_legitbot_visualize_target_1806f7540[8]);
  *(undefined8 *)pcVar10 = s_legitbot_visualize_target_1806f7540._0_8_;
  *(undefined8 *)(pcVar10 + 8) = uVar9;
  uVar9 = s_legitbot_visualize_target_1806f7540._17_8_;
  *(ulonglong *)(pcVar10 + 9) =
       CONCAT17(s_legitbot_visualize_target_1806f7540[0x10],
                s_legitbot_visualize_target_1806f7540._9_7_);
  *(undefined8 *)(pcVar10 + 0x11) = uVar9;
  pcVar10[0x19] = '\0';
  puVar1 = *(undefined8 **)(*param_1 + 0x50);
  local_c0 = pcVar10;
  for (puVar12 = *(undefined8 **)(*param_1 + 0x48); puVar12 != puVar1; puVar12 = puVar12 + 0x10) {
    if ((ulonglong)puVar12[3] < 0x10) {
      puVar11 = puVar12;
    }
    else {
      puVar11 = (undefined8 *)*puVar12;
    }
    if ((puVar12[2] == 0x19) && (iVar8 = memcmp(pcVar10,puVar11,0x19), iVar8 == 0)) {
      if ((int *)(puVar12 + 4) != (int *)0x0) {
        *(int *)(param_1 + 1) = (int)param_1[1] + 1;
        iVar8 = *(int *)(puVar12 + 4);
        if (iVar8 == 1) {
          uVar7 = *(undefined1 *)((longlong)puVar12 + 0x24);
        }
        else if (iVar8 == 2) {
          if ((double)puVar12[5] == 0.0) {
            uVar7 = 0;
          }
          else {
            uVar7 = 1;
          }
        }
        else {
          uVar7 = *(undefined1 *)(param_2 + 0x7a09);
        }
        *(undefined1 *)(param_2 + 0x7a09) = uVar7;
      }
      break;
    }
  }
  FUN_18000f890(&local_c0);
  local_c0 = (char *)0x0;
  uStack_b8 = 0;
  local_b0 = 0;
  local_a8 = (longlong *)0x0;
  pcVar10 = (char *)FUN_18000fb70(0x20);
  uVar6 = s_legitbot_target_color_1806f7560._12_4_;
  uVar5 = s_legitbot_target_color_1806f7560._8_4_;
  uVar4 = s_legitbot_target_color_1806f7560._4_4_;
  local_b0 = 0x15;
  local_a8 = (longlong *)0x1f;
  *(undefined4 *)pcVar10 = s_legitbot_target_color_1806f7560._0_4_;
  *(undefined4 *)(pcVar10 + 4) = uVar4;
  *(undefined4 *)(pcVar10 + 8) = uVar5;
  *(undefined4 *)(pcVar10 + 0xc) = uVar6;
  *(ulonglong *)(pcVar10 + 0xd) =
       CONCAT53(s_legitbot_target_color_1806f7560._16_5_,s_legitbot_target_color_1806f7560._13_3_);
  pcVar10[0x15] = '\0';
  puVar1 = *(undefined8 **)(*param_1 + 0x50);
  local_c0 = pcVar10;
  for (puVar12 = *(undefined8 **)(*param_1 + 0x48); puVar12 != puVar1; puVar12 = puVar12 + 0x10) {
    if ((ulonglong)puVar12[3] < 0x10) {
      puVar11 = puVar12;
    }
    else {
      puVar11 = (undefined8 *)*puVar12;
    }
    if ((puVar12[2] == 0x15) && (iVar8 = memcmp(pcVar10,puVar11,0x15), iVar8 == 0)) {
      if (((int *)(puVar12 + 4) != (int *)0x0) &&
         (*(int *)(param_1 + 1) = (int)param_1[1] + 1, *(int *)(puVar12 + 4) == 4)) {
        uVar14 = 0;
        goto LAB_1801a13e0;
      }
      break;
    }
  }
  goto LAB_1801a144a;
  while( true ) {
    dVar3 = (double)FUN_180370b10(uVar14 * 0x60 + puVar12[10],
                                  (double)*(float *)(param_2 + 0x7a20 + uVar14 * 4));
    if (((uint)(float)dVar3 & 0x7f800000) != 0x7f800000) {
      *(float *)(param_2 + 0x7a20 + uVar14 * 4) = (float)dVar3;
    }
    uVar14 = uVar14 + 1;
    if (3 < uVar14) break;
LAB_1801a1680:
    if ((ulonglong)(((longlong)(puVar12[0xb] - puVar12[10]) >> 5) * -0x5555555555555555) <= uVar14)
    break;
  }
  pcVar10 = local_c0;
  goto LAB_1801a16e6;
  while( true ) {
    dVar3 = (double)FUN_180370b10(uVar14 * 0x60 + puVar12[10],
                                  (double)*(float *)(param_2 + 0x7a34 + uVar14 * 4));
    if (((uint)(float)dVar3 & 0x7f800000) != 0x7f800000) {
      *(float *)(param_2 + 0x7a34 + uVar14 * 4) = (float)dVar3;
    }
    uVar14 = uVar14 + 1;
    if (3 < uVar14) break;
LAB_1801a1910:
    if ((ulonglong)(((longlong)(puVar12[0xb] - puVar12[10]) >> 5) * -0x5555555555555555) <= uVar14)
    break;
  }
  pcVar10 = local_c0;
  param_1 = local_c8;
  goto LAB_1801a197a;
  while( true ) {
    dVar3 = (double)FUN_180370b10(uVar14 * 0x60 + puVar12[10],
                                  (double)*(float *)(param_2 + 0x7a44 + uVar14 * 4));
    if (((uint)(float)dVar3 & 0x7f800000) != 0x7f800000) {
      *(float *)(param_2 + 0x7a44 + uVar14 * 4) = (float)dVar3;
    }
    uVar14 = uVar14 + 1;
    if (3 < uVar14) break;
LAB_1801a1a90:
    if ((ulonglong)(((longlong)(puVar12[0xb] - puVar12[10]) >> 5) * -0x5555555555555555) <= uVar14)
    break;
  }
  pcVar10 = local_c0;
  param_1 = local_c8;
  goto LAB_1801a1afa;
  while( true ) {
    dVar3 = (double)FUN_180370b10(uVar14 * 0x60 + puVar12[10],
                                  (double)*(float *)(param_2 + 0x7a58 + uVar14 * 4));
    if (((uint)(float)dVar3 & 0x7f800000) != 0x7f800000) {
      *(float *)(param_2 + 0x7a58 + uVar14 * 4) = (float)dVar3;
    }
    uVar14 = uVar14 + 1;
    if (3 < uVar14) break;
LAB_1801a1d20:
    if ((ulonglong)(((longlong)(puVar12[0xb] - puVar12[10]) >> 5) * -0x5555555555555555) <= uVar14)
    break;
  }
  pcVar10 = local_c0;
  param_1 = local_c8;
  goto LAB_1801a1d8a;
  while( true ) {
    dVar3 = (double)FUN_180370b10(uVar14 * 0x60 + puVar12[10],
                                  (double)*(float *)(param_2 + 0x7a68 + uVar14 * 4));
    if (((uint)(float)dVar3 & 0x7f800000) != 0x7f800000) {
      *(float *)(param_2 + 0x7a68 + uVar14 * 4) = (float)dVar3;
    }
    uVar14 = uVar14 + 1;
    if (3 < uVar14) break;
LAB_1801a1ea0:
    if ((ulonglong)(((longlong)(puVar12[0xb] - puVar12[10]) >> 5) * -0x5555555555555555) <= uVar14)
    break;
  }
  pcVar10 = local_c0;
  param_1 = local_c8;
  goto LAB_1801a1f0a;
  while( true ) {
    dVar3 = (double)FUN_180370b10(uVar14 * 0x60 + puVar12[10],
                                  (double)*(float *)(param_2 + 0x7a0c + uVar14 * 4));
    if (((uint)(float)dVar3 & 0x7f800000) != 0x7f800000) {
      *(float *)(param_2 + 0x7a0c + uVar14 * 4) = (float)dVar3;
    }
    uVar14 = uVar14 + 1;
    if (3 < uVar14) break;
LAB_1801a13e0:
    if ((ulonglong)(((longlong)(puVar12[0xb] - puVar12[10]) >> 5) * -0x5555555555555555) <= uVar14)
    break;
  }
  pcVar10 = local_c0;
  param_1 = local_c8;
LAB_1801a144a:
  if (0xf < local_a8) {
    uVar14 = (longlong)local_a8 + 1;
    pcVar15 = pcVar10;
    if (0xfff < uVar14) {
      pcVar15 = *(char **)(pcVar10 + -8);
      if ((char *)0x1f < pcVar10 + (-8 - (longlong)pcVar15)) goto LAB_1801a281f;
      uVar14 = (longlong)local_a8 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar15,uVar14);
  }
  local_c0 = (char *)0x0;
  uStack_b8 = 0;
  local_b0 = 0;
  local_a8 = (longlong *)0x0;
  pcVar10 = (char *)FUN_18000fb70(0x20);
  uVar6 = s_legitbot_visualize_fov_1806f7510._8_4_;
  uVar5 = s_legitbot_visualize_fov_1806f7510._4_4_;
  local_b0 = 0x16;
  local_a8 = (longlong *)0x1f;
  uVar4 = CONCAT22(s_legitbot_visualize_fov_1806f7510._14_2_,
                   s_legitbot_visualize_fov_1806f7510._12_2_);
  *(undefined4 *)pcVar10 = s_legitbot_visualize_fov_1806f7510._0_4_;
  *(undefined4 *)(pcVar10 + 4) = uVar5;
  *(undefined4 *)(pcVar10 + 8) = uVar6;
  *(undefined4 *)(pcVar10 + 0xc) = uVar4;
  *(ulonglong *)(pcVar10 + 0xe) =
       CONCAT62(s_legitbot_visualize_fov_1806f7510._16_6_,s_legitbot_visualize_fov_1806f7510._14_2_)
  ;
  pcVar10[0x16] = '\0';
  puVar1 = *(undefined8 **)(*param_1 + 0x50);
  local_c0 = pcVar10;
  for (puVar12 = *(undefined8 **)(*param_1 + 0x48); puVar12 != puVar1; puVar12 = puVar12 + 0x10) {
    if ((ulonglong)puVar12[3] < 0x10) {
      puVar11 = puVar12;
    }
    else {
      puVar11 = (undefined8 *)*puVar12;
    }
    if ((puVar12[2] == 0x16) && (iVar8 = memcmp(pcVar10,puVar11,0x16), iVar8 == 0)) {
      if ((int *)(puVar12 + 4) != (int *)0x0) {
        *(int *)(param_1 + 1) = (int)param_1[1] + 1;
        iVar8 = *(int *)(puVar12 + 4);
        if (iVar8 == 1) {
          uVar7 = *(undefined1 *)((longlong)puVar12 + 0x24);
        }
        else if (iVar8 == 2) {
          if ((double)puVar12[5] == 0.0) {
            uVar7 = 0;
          }
          else {
            uVar7 = 1;
          }
        }
        else {
          uVar7 = *(undefined1 *)(param_2 + 0x7a1c);
        }
        *(undefined1 *)(param_2 + 0x7a1c) = uVar7;
      }
      break;
    }
  }
  if (0xf < local_a8) {
    uVar14 = (longlong)local_a8 + 1;
    pcVar15 = pcVar10;
    if (0xfff < uVar14) {
      pcVar15 = *(char **)(pcVar10 + -8);
      if ((char *)0x1f < pcVar10 + (-8 - (longlong)pcVar15)) goto LAB_1801a281f;
      uVar14 = (longlong)local_a8 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar15,uVar14);
  }
  local_c0 = (char *)0x0;
  uStack_b8 = 0;
  local_b0 = 0;
  local_a8 = (longlong *)0x0;
  pcVar10 = (char *)FUN_18000fb70(0x20);
  uVar6 = s_legitbot_fov_color_1806f7528._12_4_;
  uVar5 = s_legitbot_fov_color_1806f7528._8_4_;
  uVar4 = s_legitbot_fov_color_1806f7528._4_4_;
  local_b0 = 0x12;
  local_a8 = (longlong *)0x1f;
  *(undefined4 *)pcVar10 = s_legitbot_fov_color_1806f7528._0_4_;
  *(undefined4 *)(pcVar10 + 4) = uVar4;
  *(undefined4 *)(pcVar10 + 8) = uVar5;
  *(undefined4 *)(pcVar10 + 0xc) = uVar6;
  *(undefined2 *)(pcVar10 + 0x10) = s_legitbot_fov_color_1806f7528._16_2_;
  pcVar10[0x12] = '\0';
  puVar1 = *(undefined8 **)(*param_1 + 0x50);
  local_c0 = pcVar10;
  for (puVar12 = *(undefined8 **)(*param_1 + 0x48); puVar12 != puVar1; puVar12 = puVar12 + 0x10) {
    if ((ulonglong)puVar12[3] < 0x10) {
      puVar11 = puVar12;
    }
    else {
      puVar11 = (undefined8 *)*puVar12;
    }
    if ((puVar12[2] == 0x12) && (iVar8 = memcmp(pcVar10,puVar11,0x12), iVar8 == 0)) {
      if (((int *)(puVar12 + 4) != (int *)0x0) &&
         (*(int *)(param_1 + 1) = (int)param_1[1] + 1, *(int *)(puVar12 + 4) == 4)) {
        uVar14 = 0;
        goto LAB_1801a1680;
      }
      break;
    }
  }
LAB_1801a16e6:
  if (0xf < local_a8) {
    uVar14 = (longlong)local_a8 + 1;
    pcVar15 = pcVar10;
    if (0xfff < uVar14) {
      pcVar15 = *(char **)(pcVar10 + -8);
      if ((char *)0x1f < pcVar10 + (-8 - (longlong)pcVar15)) goto LAB_1801a281f;
      uVar14 = (longlong)local_a8 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar15,uVar14);
  }
  local_c0 = (char *)0x0;
  uStack_b8 = 0;
  local_b0 = 0;
  local_a8 = (longlong *)0x0;
  pcVar10 = (char *)FUN_18000fb70(0x20);
  uVar6 = s_legitbot_visualize_hitboxes_1806f75b8._12_4_;
  uVar5 = s_legitbot_visualize_hitboxes_1806f75b8._8_4_;
  uVar4 = s_legitbot_visualize_hitboxes_1806f75b8._4_4_;
  local_b0 = 0x1b;
  local_a8 = (longlong *)0x1f;
  *(undefined4 *)pcVar10 = s_legitbot_visualize_hitboxes_1806f75b8._0_4_;
  *(undefined4 *)(pcVar10 + 4) = uVar4;
  *(undefined4 *)(pcVar10 + 8) = uVar5;
  *(undefined4 *)(pcVar10 + 0xc) = uVar6;
  uVar9 = s_legitbot_visualize_hitboxes_1806f75b8._19_8_;
  *(ulonglong *)(pcVar10 + 0xb) =
       CONCAT35(s_legitbot_visualize_hitboxes_1806f75b8._16_3_,
                CONCAT41(s_legitbot_visualize_hitboxes_1806f75b8._12_4_,
                         s_legitbot_visualize_hitboxes_1806f75b8[0xb]));
  *(undefined8 *)(pcVar10 + 0x13) = uVar9;
  pcVar10[0x1b] = '\0';
  puVar1 = *(undefined8 **)(*param_1 + 0x50);
  local_c0 = pcVar10;
  for (puVar12 = *(undefined8 **)(*param_1 + 0x48); puVar12 != puVar1; puVar12 = puVar12 + 0x10) {
    if ((ulonglong)puVar12[3] < 0x10) {
      puVar11 = puVar12;
    }
    else {
      puVar11 = (undefined8 *)*puVar12;
    }
    if ((puVar12[2] == 0x1b) && (iVar8 = memcmp(pcVar10,puVar11,0x1b), iVar8 == 0)) {
      if ((int *)(puVar12 + 4) != (int *)0x0) {
        *(int *)(param_1 + 1) = (int)param_1[1] + 1;
        iVar8 = *(int *)(puVar12 + 4);
        if (iVar8 == 1) {
          uVar7 = *(undefined1 *)((longlong)puVar12 + 0x24);
        }
        else if (iVar8 == 2) {
          if ((double)puVar12[5] == 0.0) {
            uVar7 = 0;
          }
          else {
            uVar7 = 1;
          }
        }
        else {
          uVar7 = *(undefined1 *)(param_2 + 0x7a30);
        }
        *(undefined1 *)(param_2 + 0x7a30) = uVar7;
      }
      break;
    }
  }
  if (0xf < local_a8) {
    uVar14 = (longlong)local_a8 + 1;
    pcVar15 = pcVar10;
    if (0xfff < uVar14) {
      pcVar15 = *(char **)(pcVar10 + -8);
      if ((char *)0x1f < pcVar10 + (-8 - (longlong)pcVar15)) goto LAB_1801a281f;
      uVar14 = (longlong)local_a8 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar15,uVar14);
  }
  local_c0 = (char *)0x0;
  uStack_b8 = 0;
  local_b0 = 0;
  local_a8 = (longlong *)0x0;
  pcVar10 = (char *)FUN_18000fb70(0x20);
  uVar6 = s_legitbot_high_priority_color_1806f75d8._12_4_;
  uVar5 = s_legitbot_high_priority_color_1806f75d8._8_4_;
  uVar4 = s_legitbot_high_priority_color_1806f75d8._4_4_;
  local_b0 = 0x1c;
  local_a8 = (longlong *)0x1f;
  *(undefined4 *)pcVar10 = s_legitbot_high_priority_color_1806f75d8._0_4_;
  *(undefined4 *)(pcVar10 + 4) = uVar4;
  *(undefined4 *)(pcVar10 + 8) = uVar5;
  *(undefined4 *)(pcVar10 + 0xc) = uVar6;
  uVar9 = s_legitbot_high_priority_color_1806f75d8._20_8_;
  *(ulonglong *)(pcVar10 + 0xc) =
       CONCAT44(s_legitbot_high_priority_color_1806f75d8._16_4_,
                s_legitbot_high_priority_color_1806f75d8._12_4_);
  *(undefined8 *)(pcVar10 + 0x14) = uVar9;
  pcVar10[0x1c] = '\0';
  puVar1 = *(undefined8 **)(*param_1 + 0x50);
  local_c0 = pcVar10;
  for (puVar12 = *(undefined8 **)(*param_1 + 0x48); puVar12 != puVar1; puVar12 = puVar12 + 0x10) {
    if ((ulonglong)puVar12[3] < 0x10) {
      puVar11 = puVar12;
    }
    else {
      puVar11 = (undefined8 *)*puVar12;
    }
    if ((puVar12[2] == 0x1c) && (iVar8 = memcmp(pcVar10,puVar11,0x1c), iVar8 == 0)) {
      if (((int *)(puVar12 + 4) != (int *)0x0) &&
         (*(int *)(param_1 + 1) = (int)param_1[1] + 1, *(int *)(puVar12 + 4) == 4)) {
        uVar14 = 0;
        goto LAB_1801a1910;
      }
      break;
    }
  }
LAB_1801a197a:
  if (0xf < local_a8) {
    uVar14 = (longlong)local_a8 + 1;
    pcVar15 = pcVar10;
    if (0xfff < uVar14) {
      pcVar15 = *(char **)(pcVar10 + -8);
      if ((char *)0x1f < pcVar10 + (-8 - (longlong)pcVar15)) goto LAB_1801a281f;
      uVar14 = (longlong)local_a8 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar15,uVar14);
  }
  local_c0 = (char *)0x0;
  uStack_b8 = 0;
  local_b0 = 0;
  local_a8 = (longlong *)0x0;
  pcVar10 = (char *)FUN_18000fb70(0x20);
  uVar6 = s_legitbot_low_priority_color_1806f7578._12_4_;
  uVar5 = s_legitbot_low_priority_color_1806f7578._8_4_;
  uVar4 = s_legitbot_low_priority_color_1806f7578._4_4_;
  local_b0 = 0x1b;
  local_a8 = (longlong *)0x1f;
  *(undefined4 *)pcVar10 = s_legitbot_low_priority_color_1806f7578._0_4_;
  *(undefined4 *)(pcVar10 + 4) = uVar4;
  *(undefined4 *)(pcVar10 + 8) = uVar5;
  *(undefined4 *)(pcVar10 + 0xc) = uVar6;
  uVar9 = s_legitbot_low_priority_color_1806f7578._19_8_;
  *(ulonglong *)(pcVar10 + 0xb) =
       CONCAT35(s_legitbot_low_priority_color_1806f7578._16_3_,
                CONCAT41(s_legitbot_low_priority_color_1806f7578._12_4_,
                         s_legitbot_low_priority_color_1806f7578[0xb]));
  *(undefined8 *)(pcVar10 + 0x13) = uVar9;
  pcVar10[0x1b] = '\0';
  puVar1 = *(undefined8 **)(*param_1 + 0x50);
  local_c0 = pcVar10;
  for (puVar12 = *(undefined8 **)(*param_1 + 0x48); puVar12 != puVar1; puVar12 = puVar12 + 0x10) {
    if ((ulonglong)puVar12[3] < 0x10) {
      puVar11 = puVar12;
    }
    else {
      puVar11 = (undefined8 *)*puVar12;
    }
    if ((puVar12[2] == 0x1b) && (iVar8 = memcmp(pcVar10,puVar11,0x1b), iVar8 == 0)) {
      if (((int *)(puVar12 + 4) != (int *)0x0) &&
         (*(int *)(param_1 + 1) = (int)param_1[1] + 1, *(int *)(puVar12 + 4) == 4)) {
        uVar14 = 0;
        goto LAB_1801a1a90;
      }
      break;
    }
  }
LAB_1801a1afa:
  if (0xf < local_a8) {
    uVar14 = (longlong)local_a8 + 1;
    pcVar15 = pcVar10;
    if (0xfff < uVar14) {
      pcVar15 = *(char **)(pcVar10 + -8);
      if ((char *)0x1f < pcVar10 + (-8 - (longlong)pcVar15)) goto LAB_1801a281f;
      uVar14 = (longlong)local_a8 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar15,uVar14);
  }
  local_c0 = (char *)0x0;
  uStack_b8 = 0;
  local_b0 = 0;
  local_a8 = (longlong *)0x0;
  pcVar10 = (char *)FUN_18000fb70(0x20);
  uVar6 = s_legitbot_visualize_recoil_1806f7598._12_4_;
  uVar5 = s_legitbot_visualize_recoil_1806f7598._8_4_;
  uVar4 = s_legitbot_visualize_recoil_1806f7598._4_4_;
  local_b0 = 0x19;
  local_a8 = (longlong *)0x1f;
  *(undefined4 *)pcVar10 = s_legitbot_visualize_recoil_1806f7598._0_4_;
  *(undefined4 *)(pcVar10 + 4) = uVar4;
  *(undefined4 *)(pcVar10 + 8) = uVar5;
  *(undefined4 *)(pcVar10 + 0xc) = uVar6;
  uVar9 = s_legitbot_visualize_recoil_1806f7598._17_8_;
  *(ulonglong *)(pcVar10 + 9) =
       CONCAT17(s_legitbot_visualize_recoil_1806f7598[0x10],
                CONCAT43(s_legitbot_visualize_recoil_1806f7598._12_4_,
                         s_legitbot_visualize_recoil_1806f7598._9_3_));
  *(undefined8 *)(pcVar10 + 0x11) = uVar9;
  pcVar10[0x19] = '\0';
  puVar1 = *(undefined8 **)(*param_1 + 0x50);
  local_c0 = pcVar10;
  for (puVar12 = *(undefined8 **)(*param_1 + 0x48); puVar12 != puVar1; puVar12 = puVar12 + 0x10) {
    if ((ulonglong)puVar12[3] < 0x10) {
      puVar11 = puVar12;
    }
    else {
      puVar11 = (undefined8 *)*puVar12;
    }
    if ((puVar12[2] == 0x19) && (iVar8 = memcmp(pcVar10,puVar11,0x19), iVar8 == 0)) {
      if ((int *)(puVar12 + 4) != (int *)0x0) {
        *(int *)(param_1 + 1) = (int)param_1[1] + 1;
        iVar8 = *(int *)(puVar12 + 4);
        if (iVar8 == 1) {
          uVar7 = *(undefined1 *)((longlong)puVar12 + 0x24);
        }
        else if (iVar8 == 2) {
          if ((double)puVar12[5] == 0.0) {
            uVar7 = 0;
          }
          else {
            uVar7 = 1;
          }
        }
        else {
          uVar7 = *(undefined1 *)(param_2 + 0x7a54);
        }
        *(undefined1 *)(param_2 + 0x7a54) = uVar7;
      }
      break;
    }
  }
  if (0xf < local_a8) {
    uVar14 = (longlong)local_a8 + 1;
    pcVar15 = pcVar10;
    if (0xfff < uVar14) {
      pcVar15 = *(char **)(pcVar10 + -8);
      if ((char *)0x1f < pcVar10 + (-8 - (longlong)pcVar15)) goto LAB_1801a281f;
      uVar14 = (longlong)local_a8 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar15,uVar14);
  }
  local_c0 = (char *)0x0;
  uStack_b8 = 0;
  local_b0 = 0;
  local_a8 = (longlong *)0x0;
  pcVar10 = (char *)FUN_18000fb70(0x20);
  uVar6 = s_legitbot_recoil_original_color_1806f7630._8_4_;
  uVar5 = s_legitbot_recoil_original_color_1806f7630._4_4_;
  local_b0 = 0x1e;
  local_a8 = (longlong *)0x1f;
  uVar4 = CONCAT22(s_legitbot_recoil_original_color_1806f7630._14_2_,
                   s_legitbot_recoil_original_color_1806f7630._12_2_);
  *(undefined4 *)pcVar10 = s_legitbot_recoil_original_color_1806f7630._0_4_;
  *(undefined4 *)(pcVar10 + 4) = uVar5;
  *(undefined4 *)(pcVar10 + 8) = uVar6;
  *(undefined4 *)(pcVar10 + 0xc) = uVar4;
  uVar9 = s_legitbot_recoil_original_color_1806f7630._22_8_;
  *(ulonglong *)(pcVar10 + 0xe) =
       CONCAT62(s_legitbot_recoil_original_color_1806f7630._16_6_,
                s_legitbot_recoil_original_color_1806f7630._14_2_);
  *(undefined8 *)(pcVar10 + 0x16) = uVar9;
  pcVar10[0x1e] = '\0';
  puVar1 = *(undefined8 **)(*param_1 + 0x50);
  local_c0 = pcVar10;
  for (puVar12 = *(undefined8 **)(*param_1 + 0x48); puVar12 != puVar1; puVar12 = puVar12 + 0x10) {
    if ((ulonglong)puVar12[3] < 0x10) {
      puVar11 = puVar12;
    }
    else {
      puVar11 = (undefined8 *)*puVar12;
    }
    if ((puVar12[2] == 0x1e) && (iVar8 = memcmp(pcVar10,puVar11,0x1e), iVar8 == 0)) {
      if (((int *)(puVar12 + 4) != (int *)0x0) &&
         (*(int *)(param_1 + 1) = (int)param_1[1] + 1, *(int *)(puVar12 + 4) == 4)) {
        uVar14 = 0;
        goto LAB_1801a1d20;
      }
      break;
    }
  }
LAB_1801a1d8a:
  if (0xf < local_a8) {
    uVar14 = (longlong)local_a8 + 1;
    pcVar15 = pcVar10;
    if (0xfff < uVar14) {
      pcVar15 = *(char **)(pcVar10 + -8);
      if ((char *)0x1f < pcVar10 + (-8 - (longlong)pcVar15)) goto LAB_1801a281f;
      uVar14 = (longlong)local_a8 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar15,uVar14);
  }
  local_c0 = (char *)0x0;
  uStack_b8 = 0;
  local_b0 = 0;
  local_a8 = (longlong *)0x0;
  pcVar10 = (char *)FUN_18000fb70(0x30);
  uVar6 = s_legitbot_recoil_compensated_colo_1806f7650._12_4_;
  uVar5 = s_legitbot_recoil_compensated_colo_1806f7650._8_4_;
  uVar4 = s_legitbot_recoil_compensated_colo_1806f7650._4_4_;
  local_b0 = 0x21;
  local_a8 = (longlong *)0x2f;
  *(undefined4 *)pcVar10 = s_legitbot_recoil_compensated_colo_1806f7650._0_4_;
  *(undefined4 *)(pcVar10 + 4) = uVar4;
  *(undefined4 *)(pcVar10 + 8) = uVar5;
  *(undefined4 *)(pcVar10 + 0xc) = uVar6;
  uVar9 = s_legitbot_recoil_compensated_colo_1806f7650._24_8_;
  *(undefined8 *)(pcVar10 + 0x10) = s_legitbot_recoil_compensated_colo_1806f7650._16_8_;
  *(undefined8 *)(pcVar10 + 0x18) = uVar9;
  pcVar10[0x20] = s_legitbot_recoil_compensated_colo_1806f7650[0x20];
  pcVar10[0x21] = '\0';
  puVar1 = *(undefined8 **)(*param_1 + 0x50);
  local_c0 = pcVar10;
  for (puVar12 = *(undefined8 **)(*param_1 + 0x48); puVar12 != puVar1; puVar12 = puVar12 + 0x10) {
    if ((ulonglong)puVar12[3] < 0x10) {
      puVar11 = puVar12;
    }
    else {
      puVar11 = (undefined8 *)*puVar12;
    }
    if ((puVar12[2] == 0x21) && (iVar8 = memcmp(pcVar10,puVar11,0x21), iVar8 == 0)) {
      if (((int *)(puVar12 + 4) != (int *)0x0) &&
         (*(int *)(param_1 + 1) = (int)param_1[1] + 1, *(int *)(puVar12 + 4) == 4)) {
        uVar14 = 0;
        goto LAB_1801a1ea0;
      }
      break;
    }
  }
LAB_1801a1f0a:
  if (0xf < local_a8) {
    uVar14 = (longlong)local_a8 + 1;
    pcVar15 = pcVar10;
    if (0xfff < uVar14) {
      pcVar15 = *(char **)(pcVar10 + -8);
      if ((char *)0x1f < pcVar10 + (-8 - (longlong)pcVar15)) goto LAB_1801a281f;
      uVar14 = (longlong)local_a8 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar15,uVar14);
  }
  local_c0 = (char *)0x0;
  uStack_b8 = 0;
  local_b0 = 0;
  local_a8 = (longlong *)0x0;
  pcVar10 = (char *)FUN_18000fb70(0x20);
  uVar6 = s_legitbot_visualize_velocity_1806f75f8._12_4_;
  uVar5 = s_legitbot_visualize_velocity_1806f75f8._8_4_;
  uVar4 = s_legitbot_visualize_velocity_1806f75f8._4_4_;
  local_b0 = 0x1b;
  local_a8 = (longlong *)0x1f;
  *(undefined4 *)pcVar10 = s_legitbot_visualize_velocity_1806f75f8._0_4_;
  *(undefined4 *)(pcVar10 + 4) = uVar4;
  *(undefined4 *)(pcVar10 + 8) = uVar5;
  *(undefined4 *)(pcVar10 + 0xc) = uVar6;
  uVar9 = s_legitbot_visualize_velocity_1806f75f8._19_8_;
  *(ulonglong *)(pcVar10 + 0xb) =
       CONCAT35(s_legitbot_visualize_velocity_1806f75f8._16_3_,
                CONCAT41(s_legitbot_visualize_velocity_1806f75f8._12_4_,
                         s_legitbot_visualize_velocity_1806f75f8[0xb]));
  *(undefined8 *)(pcVar10 + 0x13) = uVar9;
  pcVar10[0x1b] = '\0';
  puVar1 = *(undefined8 **)(*param_1 + 0x50);
  local_c0 = pcVar10;
  for (puVar12 = *(undefined8 **)(*param_1 + 0x48); puVar12 != puVar1; puVar12 = puVar12 + 0x10) {
    if ((ulonglong)puVar12[3] < 0x10) {
      puVar11 = puVar12;
    }
    else {
      puVar11 = (undefined8 *)*puVar12;
    }
    if ((puVar12[2] == 0x1b) && (iVar8 = memcmp(pcVar10,puVar11,0x1b), iVar8 == 0)) {
      if ((int *)(puVar12 + 4) != (int *)0x0) {
        *(int *)(param_1 + 1) = (int)param_1[1] + 1;
        iVar8 = *(int *)(puVar12 + 4);
        if (iVar8 == 1) {
          uVar7 = *(undefined1 *)((longlong)puVar12 + 0x24);
        }
        else if (iVar8 == 2) {
          if ((double)puVar12[5] == 0.0) {
            uVar7 = 0;
          }
          else {
            uVar7 = 1;
          }
        }
        else {
          uVar7 = *(undefined1 *)(param_2 + 0x7a78);
        }
        *(undefined1 *)(param_2 + 0x7a78) = uVar7;
      }
      break;
    }
  }
  if (0xf < local_a8) {
    uVar14 = (longlong)local_a8 + 1;
    pcVar15 = pcVar10;
    if (0xfff < uVar14) {
      pcVar15 = *(char **)(pcVar10 + -8);
      if ((char *)0x1f < pcVar10 + (-8 - (longlong)pcVar15)) goto LAB_1801a281f;
      uVar14 = (longlong)local_a8 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar15,uVar14);
  }
  local_c0 = (char *)0x0;
  uStack_b8 = 0;
  local_b0 = 0;
  local_a8 = (longlong *)0x0;
  pcVar10 = (char *)FUN_18000fb70(0x20);
  uVar6 = s_legitbot_velocity_speed_1806f7618._12_4_;
  uVar5 = s_legitbot_velocity_speed_1806f7618._8_4_;
  uVar4 = s_legitbot_velocity_speed_1806f7618._4_4_;
  local_b0 = 0x17;
  local_a8 = (longlong *)0x1f;
  *(undefined4 *)pcVar10 = s_legitbot_velocity_speed_1806f7618._0_4_;
  *(undefined4 *)(pcVar10 + 4) = uVar4;
  *(undefined4 *)(pcVar10 + 8) = uVar5;
  *(undefined4 *)(pcVar10 + 0xc) = uVar6;
  *(ulonglong *)(pcVar10 + 0xf) =
       CONCAT71(s_legitbot_velocity_speed_1806f7618._16_7_,s_legitbot_velocity_speed_1806f7618[0xf])
  ;
  pcVar10[0x17] = '\0';
  puVar1 = *(undefined8 **)(*param_1 + 0x50);
  local_c0 = pcVar10;
  for (puVar12 = *(undefined8 **)(*param_1 + 0x48); puVar12 != puVar1; puVar12 = puVar12 + 0x10) {
    if ((ulonglong)puVar12[3] < 0x10) {
      puVar11 = puVar12;
    }
    else {
      puVar11 = (undefined8 *)*puVar12;
    }
    if ((puVar12[2] == 0x17) && (iVar8 = memcmp(pcVar10,puVar11,0x17), iVar8 == 0)) {
      if ((int *)(puVar12 + 4) != (int *)0x0) {
        *(int *)(param_1 + 1) = (int)param_1[1] + 1;
        iVar8 = *(int *)(puVar12 + 4);
        if (iVar8 == 1) {
          uVar7 = *(undefined1 *)((longlong)puVar12 + 0x24);
        }
        else if (iVar8 == 2) {
          if ((double)puVar12[5] == 0.0) {
            uVar7 = 0;
          }
          else {
            uVar7 = 1;
          }
        }
        else {
          uVar7 = *(undefined1 *)(param_2 + 0x7a79);
        }
        *(undefined1 *)(param_2 + 0x7a79) = uVar7;
      }
      break;
    }
  }
  if (0xf < local_a8) {
    uVar14 = (longlong)local_a8 + 1;
    pcVar15 = pcVar10;
    if (0xfff < uVar14) {
      pcVar15 = *(char **)(pcVar10 + -8);
      if ((char *)0x1f < pcVar10 + (-8 - (longlong)pcVar15)) goto LAB_1801a281f;
      uVar14 = (longlong)local_a8 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar15,uVar14);
  }
  local_c0 = (char *)0x0;
  uStack_b8 = 0;
  local_b0 = 0;
  local_a8 = (longlong *)0x0;
  local_c8 = (longlong *)
             std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Calculate_growth
                       (0x14,0xf,0x7fffffffffffffff);
  pcVar10 = (char *)FUN_180013470(&local_c0,&local_c8);
  local_b0 = 0x14;
  local_a8 = local_c8;
  local_c0 = pcVar10;
  thunk_FUN_180540530(pcVar10,"legitbot.speed_color",0x14);
  pcVar10[0x14] = '\0';
  FUN_18019e140(param_1,&local_c0,param_2 + 0x7a7c);
  FUN_18000f890(&local_c0);
  FUN_180013350(&local_c0,"legitbot.velocity_jump");
  FUN_1800f3030(param_1,&local_c0,param_2 + 0x7a8c);
  FUN_18000f890(&local_c0);
  FUN_180013350(&local_c0,"legitbot.jump_color");
  FUN_18019e140(param_1,&local_c0,param_2 + 0x7a90);
  FUN_18000f890(&local_c0);
  FUN_180013350(&local_c0,"legitbot.velocity_ground");
  FUN_1800f3030(param_1,&local_c0,param_2 + 0x7aa0);
  FUN_18000f890(&local_c0);
  FUN_180013350(&local_c0,"legitbot.ground_color");
  FUN_18019e140(param_1,&local_c0,param_2 + 0x7aa4);
  FUN_18000f890(&local_c0);
  local_c0 = (char *)0x0;
  uStack_b8 = 0;
  local_b0 = 0;
  local_a8 = (longlong *)0x0;
  pcVar10 = (char *)FUN_18000fb70(0x20);
  uVar6 = s_legitbot_automatic_weapons_1806f7740._12_4_;
  uVar5 = s_legitbot_automatic_weapons_1806f7740._4_4_;
  local_b0 = 0x1a;
  local_a8 = (longlong *)0x1f;
  uVar4 = CONCAT22(s_legitbot_automatic_weapons_1806f7740._10_2_,
                   s_legitbot_automatic_weapons_1806f7740._8_2_);
  *(undefined4 *)pcVar10 = s_legitbot_automatic_weapons_1806f7740._0_4_;
  *(undefined4 *)(pcVar10 + 4) = uVar5;
  *(undefined4 *)(pcVar10 + 8) = uVar4;
  *(undefined4 *)(pcVar10 + 0xc) = uVar6;
  uVar9 = s_legitbot_automatic_weapons_1806f7740._18_8_;
  *(ulonglong *)(pcVar10 + 10) =
       CONCAT26(s_legitbot_automatic_weapons_1806f7740._16_2_,
                CONCAT42(s_legitbot_automatic_weapons_1806f7740._12_4_,
                         s_legitbot_automatic_weapons_1806f7740._10_2_));
  *(undefined8 *)(pcVar10 + 0x12) = uVar9;
  pcVar10[0x1a] = '\0';
  puVar1 = *(undefined8 **)(*param_1 + 0x50);
  local_c0 = pcVar10;
  for (puVar12 = *(undefined8 **)(*param_1 + 0x48); puVar12 != puVar1; puVar12 = puVar12 + 0x10) {
    if ((ulonglong)puVar12[3] < 0x10) {
      puVar11 = puVar12;
    }
    else {
      puVar11 = (undefined8 *)*puVar12;
    }
    if ((puVar12[2] == 0x1a) && (iVar8 = memcmp(pcVar10,puVar11,0x1a), iVar8 == 0)) {
      if ((int *)(puVar12 + 4) != (int *)0x0) {
        *(int *)(param_1 + 1) = (int)param_1[1] + 1;
        iVar8 = *(int *)(puVar12 + 4);
        if (iVar8 == 1) {
          uVar7 = *(undefined1 *)((longlong)puVar12 + 0x24);
        }
        else if (iVar8 == 2) {
          if ((double)puVar12[5] == 0.0) {
            uVar7 = 0;
          }
          else {
            uVar7 = 1;
          }
        }
        else {
          uVar7 = *(undefined1 *)(param_2 + 0x7ab4);
        }
        *(undefined1 *)(param_2 + 0x7ab4) = uVar7;
      }
      break;
    }
  }
  if (0xf < local_a8) {
    uVar14 = (longlong)local_a8 + 1;
    pcVar15 = pcVar10;
    if (0xfff < uVar14) {
      pcVar15 = *(char **)(pcVar10 + -8);
      if ((char *)0x1f < pcVar10 + (-8 - (longlong)pcVar15)) goto LAB_1801a281f;
      uVar14 = (longlong)local_a8 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar15,uVar14);
  }
  local_c0 = (char *)0x0;
  uStack_b8 = 0;
  local_b0 = 0;
  local_a8 = (longlong *)0x0;
  pcVar10 = (char *)FUN_18000fb70(0x30);
  uVar6 = s_legitbot_automatic_weapons_inter_1806f76e0._12_4_;
  uVar5 = s_legitbot_automatic_weapons_inter_1806f76e0._8_4_;
  uVar4 = s_legitbot_automatic_weapons_inter_1806f76e0._4_4_;
  local_b0 = 0x23;
  local_a8 = (longlong *)0x2f;
  *(undefined4 *)pcVar10 = s_legitbot_automatic_weapons_inter_1806f76e0._0_4_;
  *(undefined4 *)(pcVar10 + 4) = uVar4;
  *(undefined4 *)(pcVar10 + 8) = uVar5;
  *(undefined4 *)(pcVar10 + 0xc) = uVar6;
  uVar9 = CONCAT17(s_legitbot_automatic_weapons_inter_1806f76e0[0x1f],
                   s_legitbot_automatic_weapons_inter_1806f76e0._24_7_);
  *(undefined8 *)(pcVar10 + 0x10) = s_legitbot_automatic_weapons_inter_1806f76e0._16_8_;
  *(undefined8 *)(pcVar10 + 0x18) = uVar9;
  *(undefined4 *)(pcVar10 + 0x1f) = s_legitbot_automatic_weapons_inter_1806f76e0._31_4_;
  pcVar10[0x23] = '\0';
  dVar3 = DAT_1808ac9c8;
  puVar1 = *(undefined8 **)(*param_1 + 0x50);
  local_c0 = pcVar10;
  for (puVar12 = *(undefined8 **)(*param_1 + 0x48); plVar13 = (longlong *)0x2f, puVar12 != puVar1;
      puVar12 = puVar12 + 0x10) {
    if ((ulonglong)puVar12[3] < 0x10) {
      puVar11 = puVar12;
    }
    else {
      puVar11 = (undefined8 *)*puVar12;
    }
    if ((puVar12[2] == 0x23) && (iVar8 = memcmp(pcVar10,puVar11,0x23), iVar8 == 0)) {
      if (puVar12 + 4 != (undefined8 *)0x0) {
        *(int *)(param_1 + 1) = (int)param_1[1] + 1;
        dVar16 = (double)FUN_180370b10(puVar12 + 4,(double)*(int *)(param_2 + 0x7ab8));
        if (((((uint)((ulonglong)dVar16 >> 0x34) & 0x7ff) != 0x7ff) && (DAT_1808ace48 < dVar16)) &&
           (dVar16 < dVar3)) {
          *(int *)(param_2 + 0x7ab8) = (int)dVar16;
        }
        plVar13 = local_a8;
      }
      break;
    }
  }
  if (0xf < plVar13) {
    uVar14 = (longlong)plVar13 + 1;
    pcVar10 = local_c0;
    if (0xfff < uVar14) {
      pcVar10 = *(char **)(local_c0 + -8);
      if ((char *)0x1f < local_c0 + (-8 - (longlong)pcVar10)) goto LAB_1801a281f;
      uVar14 = (longlong)plVar13 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar10,uVar14);
  }
  local_c0 = (char *)0x0;
  uStack_b8 = 0;
  local_b0 = 0;
  local_a8 = (longlong *)0x0;
  pcVar10 = (char *)FUN_18000fb70(0x20);
  uVar6 = s_legitbot_standalone_recoil_1806f7708._12_4_;
  uVar5 = s_legitbot_standalone_recoil_1806f7708._4_4_;
  local_b0 = 0x1a;
  local_a8 = (longlong *)0x1f;
  uVar4 = CONCAT22(s_legitbot_standalone_recoil_1806f7708._10_2_,
                   s_legitbot_standalone_recoil_1806f7708._8_2_);
  *(undefined4 *)pcVar10 = s_legitbot_standalone_recoil_1806f7708._0_4_;
  *(undefined4 *)(pcVar10 + 4) = uVar5;
  *(undefined4 *)(pcVar10 + 8) = uVar4;
  *(undefined4 *)(pcVar10 + 0xc) = uVar6;
  uVar9 = s_legitbot_standalone_recoil_1806f7708._18_8_;
  *(ulonglong *)(pcVar10 + 10) =
       CONCAT26(s_legitbot_standalone_recoil_1806f7708._16_2_,
                CONCAT42(s_legitbot_standalone_recoil_1806f7708._12_4_,
                         s_legitbot_standalone_recoil_1806f7708._10_2_));
  *(undefined8 *)(pcVar10 + 0x12) = uVar9;
  pcVar10[0x1a] = '\0';
  puVar1 = *(undefined8 **)(*param_1 + 0x50);
  local_c0 = pcVar10;
  for (puVar12 = *(undefined8 **)(*param_1 + 0x48); puVar12 != puVar1; puVar12 = puVar12 + 0x10) {
    if ((ulonglong)puVar12[3] < 0x10) {
      puVar11 = puVar12;
    }
    else {
      puVar11 = (undefined8 *)*puVar12;
    }
    if ((puVar12[2] == 0x1a) && (iVar8 = memcmp(pcVar10,puVar11,0x1a), iVar8 == 0)) {
      if ((int *)(puVar12 + 4) != (int *)0x0) {
        *(int *)(param_1 + 1) = (int)param_1[1] + 1;
        iVar8 = *(int *)(puVar12 + 4);
        if (iVar8 == 1) {
          uVar7 = *(undefined1 *)((longlong)puVar12 + 0x24);
        }
        else if (iVar8 == 2) {
          if ((double)puVar12[5] == 0.0) {
            uVar7 = 0;
          }
          else {
            uVar7 = 1;
          }
        }
        else {
          uVar7 = *(undefined1 *)(param_2 + 0x7abc);
        }
        *(undefined1 *)(param_2 + 0x7abc) = uVar7;
      }
      break;
    }
  }
  if (0xf < local_a8) {
    uVar14 = (longlong)local_a8 + 1;
    pcVar15 = pcVar10;
    if (0xfff < uVar14) {
      pcVar15 = *(char **)(pcVar10 + -8);
      if ((char *)0x1f < pcVar10 + (-8 - (longlong)pcVar15)) goto LAB_1801a281f;
      uVar14 = (longlong)local_a8 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar15,uVar14);
  }
  local_c0 = (char *)0x0;
  uStack_b8 = 0;
  local_c0 = (char *)FUN_18000fb70(0x20);
  uVar6 = s_legitbot_standalone__1806f7788._12_4_;
  uVar5 = s_legitbot_standalone__1806f7788._8_4_;
  uVar4 = s_legitbot_standalone__1806f7788._4_4_;
  local_b0 = 0x14;
  local_a8 = (longlong *)0x1f;
  *(undefined4 *)local_c0 = s_legitbot_standalone__1806f7788._0_4_;
  *(undefined4 *)(local_c0 + 4) = uVar4;
  *(undefined4 *)(local_c0 + 8) = uVar5;
  *(undefined4 *)(local_c0 + 0xc) = uVar6;
  *(undefined4 *)(local_c0 + 0x10) = s_legitbot_standalone__1806f7788._16_4_;
  local_c0[0x14] = '\0';
  FUN_180152670(param_1,&local_c0,param_2 + 0x7ac0);
  if (0xf < local_a8) {
    uVar14 = (longlong)local_a8 + 1;
    pcVar10 = local_c0;
    if (0xfff < uVar14) {
      pcVar10 = *(char **)(local_c0 + -8);
      if ((char *)0x1f < local_c0 + (-8 - (longlong)pcVar10)) goto LAB_1801a281f;
      uVar14 = (longlong)local_a8 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar10,uVar14);
  }
  local_c0 = (char *)0x0;
  uStack_b8 = 0;
  local_b0 = 0;
  local_a8 = (longlong *)0x0;
  pcVar10 = (char *)FUN_18000fb70(0x20);
  uVar9 = s_legitbot_randomize_1806f77a0._8_8_;
  local_b0 = 0x12;
  local_a8 = (longlong *)0x1f;
  *(undefined8 *)pcVar10 = s_legitbot_randomize_1806f77a0._0_8_;
  *(undefined8 *)(pcVar10 + 8) = uVar9;
  *(undefined2 *)(pcVar10 + 0x10) = s_legitbot_randomize_1806f77a0._16_2_;
  pcVar10[0x12] = '\0';
  puVar1 = *(undefined8 **)(*param_1 + 0x50);
  local_c0 = pcVar10;
  for (puVar12 = *(undefined8 **)(*param_1 + 0x48); plVar13 = (longlong *)0x1f, puVar12 != puVar1;
      puVar12 = puVar12 + 0x10) {
    if ((ulonglong)puVar12[3] < 0x10) {
      puVar11 = puVar12;
    }
    else {
      puVar11 = (undefined8 *)*puVar12;
    }
    if ((puVar12[2] == 0x12) && (iVar8 = memcmp(pcVar10,puVar11,0x12), iVar8 == 0)) {
      if (puVar12 + 4 != (undefined8 *)0x0) {
        *(int *)(param_1 + 1) = (int)param_1[1] + 1;
        dVar16 = (double)FUN_180370b10(puVar12 + 4,(double)*(int *)(param_2 + 0x7ad4));
        if (((((uint)((ulonglong)dVar16 >> 0x34) & 0x7ff) != 0x7ff) && (DAT_1808ace48 < dVar16)) &&
           (dVar16 < dVar3)) {
          *(int *)(param_2 + 0x7ad4) = (int)dVar16;
        }
        plVar13 = local_a8;
      }
      break;
    }
  }
  if (0xf < plVar13) {
    uVar14 = (longlong)plVar13 + 1;
    pcVar10 = local_c0;
    if (0xfff < uVar14) {
      pcVar10 = *(char **)(local_c0 + -8);
      if ((char *)0x1f < local_c0 + (-8 - (longlong)pcVar10)) {
LAB_1801a281f:
        pcVar2 = (code *)swi(0x29);
        (*pcVar2)(5);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar14 = (longlong)plVar13 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar10,uVar14);
  }
  return;
}



/* ===== 1801a2830 FUN_1801a2830 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801a2830(undefined8 param_1,undefined1 *param_2)

{
  code *pcVar1;
  double dVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  double dVar6;
  undefined1 uVar7;
  undefined8 uVar8;
  int *piVar9;
  longlong lVar10;
  undefined8 uVar11;
  size_t sVar12;
  undefined8 *puVar13;
  char *pcVar14;
  ulonglong uVar15;
  double dVar16;
  undefined1 auStack_1f8 [40];
  char *local_1d0 [4];
  char *local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined1 local_190 [32];
  char *local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  char *local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 local_138;
  char *local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  ulonglong uStack_118;
  char *local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f8;
  char *local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  char *local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 local_90 [32];
  ulonglong local_70;
  
  local_70 = DAT_180919500 ^ (ulonglong)auStack_1f8;
  local_150 = (char *)0x0;
  uStack_148 = 0;
  local_150 = (char *)FUN_18000fb70(0x20);
  uVar5 = s_visuals_world_view__1806f7760._12_4_;
  uVar4 = s_visuals_world_view__1806f7760._8_4_;
  uVar3 = s_visuals_world_view__1806f7760._4_4_;
  local_140 = 0x13;
  local_138 = 0x1f;
  *(undefined4 *)local_150 = s_visuals_world_view__1806f7760._0_4_;
  *(undefined4 *)(local_150 + 4) = uVar3;
  *(undefined4 *)(local_150 + 8) = uVar4;
  *(undefined4 *)(local_150 + 0xc) = uVar5;
  *(uint *)(local_150 + 0xf) =
       CONCAT31(s_visuals_world_view__1806f7760._16_3_,s_visuals_world_view__1806f7760[0xf]);
  local_150[0x13] = '\0';
  uVar8 = FUN_180073a70(local_1d0,&local_150,"override_fov");
  piVar9 = (int *)FUN_1800f2fa0(param_1,uVar8);
  if (piVar9 != (int *)0x0) {
    if (*piVar9 == 1) {
      uVar7 = (undefined1)piVar9[1];
    }
    else if (*piVar9 == 2) {
      if (*(double *)(piVar9 + 2) == 0.0) {
        uVar7 = 0;
      }
      else {
        uVar7 = 1;
      }
    }
    else {
      uVar7 = *param_2;
    }
    *param_2 = uVar7;
  }
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,&local_150,&DAT_1806e0e18);
  FUN_1800f3090(param_1,uVar8,param_2 + 4);
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,&local_150,"override_aspect");
  piVar9 = (int *)FUN_1800f2fa0(param_1,uVar8);
  if (piVar9 != (int *)0x0) {
    if (*piVar9 == 1) {
      uVar7 = (undefined1)piVar9[1];
    }
    else if (*piVar9 == 2) {
      if (*(double *)(piVar9 + 2) == 0.0) {
        uVar7 = 0;
      }
      else {
        uVar7 = 1;
      }
    }
    else {
      uVar7 = param_2[8];
    }
    param_2[8] = uVar7;
  }
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,&local_150,"aspect_scaling");
  FUN_1800f3090(param_1,uVar8,param_2 + 0xc);
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,&local_150,"aspect_value");
  FUN_1800f3090(param_1,uVar8,param_2 + 0x10);
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,&local_150,"disable_landing_bob");
  piVar9 = (int *)FUN_1800f2fa0(param_1,uVar8);
  if (piVar9 != (int *)0x0) {
    if (*piVar9 == 1) {
      uVar7 = (undefined1)piVar9[1];
    }
    else if (*piVar9 == 2) {
      if (*(double *)(piVar9 + 2) == 0.0) {
        uVar7 = 0;
      }
      else {
        uVar7 = 1;
      }
    }
    else {
      uVar7 = param_2[0x14];
    }
    param_2[0x14] = uVar7;
  }
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,&local_150,"scope_override_fov");
  piVar9 = (int *)FUN_1800f2fa0(param_1,uVar8);
  if (piVar9 != (int *)0x0) {
    if (*piVar9 == 1) {
      uVar7 = (undefined1)piVar9[1];
    }
    else if (*piVar9 == 2) {
      if (*(double *)(piVar9 + 2) == 0.0) {
        uVar7 = 0;
      }
      else {
        uVar7 = 1;
      }
    }
    else {
      uVar7 = param_2[0x15];
    }
    param_2[0x15] = uVar7;
  }
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,&local_150,"scope_x1");
  FUN_1800f3090(param_1,uVar8,param_2 + 0x18);
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,&local_150,"scope_x2");
  FUN_1800f3090(param_1,uVar8,param_2 + 0x1c);
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,&local_150,"instant_scope");
  piVar9 = (int *)FUN_1800f2fa0(param_1,uVar8);
  if (piVar9 != (int *)0x0) {
    if (*piVar9 == 1) {
      uVar7 = (undefined1)piVar9[1];
    }
    else if (*piVar9 == 2) {
      if (*(double *)(piVar9 + 2) == 0.0) {
        uVar7 = 0;
      }
      else {
        uVar7 = 1;
      }
    }
    else {
      uVar7 = param_2[0x20];
    }
    param_2[0x20] = uVar7;
  }
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,&local_150,"show_viewmodel");
  piVar9 = (int *)FUN_1800f2fa0(param_1,uVar8);
  if (piVar9 != (int *)0x0) {
    if (*piVar9 == 1) {
      uVar7 = (undefined1)piVar9[1];
    }
    else if (*piVar9 == 2) {
      if (*(double *)(piVar9 + 2) == 0.0) {
        uVar7 = 0;
      }
      else {
        uVar7 = 1;
      }
    }
    else {
      uVar7 = param_2[0x21];
    }
    param_2[0x21] = uVar7;
  }
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,&local_150,"force_viewmodel_fov");
  piVar9 = (int *)FUN_1800f2fa0(param_1,uVar8);
  if (piVar9 != (int *)0x0) {
    if (*piVar9 == 1) {
      uVar7 = (undefined1)piVar9[1];
    }
    else if (*piVar9 == 2) {
      if (*(double *)(piVar9 + 2) == 0.0) {
        uVar7 = 0;
      }
      else {
        uVar7 = 1;
      }
    }
    else {
      uVar7 = param_2[0x22];
    }
    param_2[0x22] = uVar7;
  }
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,&local_150,"vm_override_fov");
  piVar9 = (int *)FUN_1800f2fa0(param_1,uVar8);
  if (piVar9 != (int *)0x0) {
    if (*piVar9 == 1) {
      uVar7 = (undefined1)piVar9[1];
    }
    else if (*piVar9 == 2) {
      if (*(double *)(piVar9 + 2) == 0.0) {
        uVar7 = 0;
      }
      else {
        uVar7 = 1;
      }
    }
    else {
      uVar7 = param_2[0x23];
    }
    param_2[0x23] = uVar7;
  }
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,&local_150,"vm_fov");
  FUN_1800f3090(param_1,uVar8,param_2 + 0x24);
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,&local_150,"vm_override_position");
  piVar9 = (int *)FUN_1800f2fa0(param_1,uVar8);
  if (piVar9 != (int *)0x0) {
    if (*piVar9 == 1) {
      uVar7 = (undefined1)piVar9[1];
    }
    else if (*piVar9 == 2) {
      if (*(double *)(piVar9 + 2) == 0.0) {
        uVar7 = 0;
      }
      else {
        uVar7 = 1;
      }
    }
    else {
      uVar7 = param_2[0x28];
    }
    param_2[0x28] = uVar7;
  }
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,&local_150,&DAT_1806f78b0);
  lVar10 = FUN_1800f2fa0(param_1,uVar8);
  if (lVar10 != 0) {
    dVar2 = (double)FUN_180370b10(lVar10,(double)*(float *)(param_2 + 0x2c));
    if (((uint)(float)dVar2 & 0x7f800000) != 0x7f800000) {
      *(float *)(param_2 + 0x2c) = (float)dVar2;
    }
  }
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,&local_150,&DAT_1806f7884);
  lVar10 = FUN_1800f2fa0(param_1,uVar8);
  if (lVar10 != 0) {
    dVar2 = (double)FUN_180370b10(lVar10,(double)*(float *)(param_2 + 0x30));
    if (((uint)(float)dVar2 & 0x7f800000) != 0x7f800000) {
      *(float *)(param_2 + 0x30) = (float)dVar2;
    }
  }
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,&local_150,&DAT_1806f788c);
  lVar10 = FUN_1800f2fa0(param_1,uVar8);
  if (lVar10 != 0) {
    dVar2 = (double)FUN_180370b10(lVar10,(double)*(float *)(param_2 + 0x34));
    if (((uint)(float)dVar2 & 0x7f800000) != 0x7f800000) {
      *(float *)(param_2 + 0x34) = (float)dVar2;
    }
  }
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,&local_150,"vm_override_angles");
  piVar9 = (int *)FUN_1800f2fa0(param_1,uVar8);
  if (piVar9 != (int *)0x0) {
    if (*piVar9 == 1) {
      uVar7 = (undefined1)piVar9[1];
    }
    else if (*piVar9 == 2) {
      if (*(double *)(piVar9 + 2) == 0.0) {
        uVar7 = 0;
      }
      else {
        uVar7 = 1;
      }
    }
    else {
      uVar7 = param_2[0x38];
    }
    param_2[0x38] = uVar7;
  }
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,&local_150,"vm_pitch");
  lVar10 = FUN_1800f2fa0(param_1,uVar8);
  if (lVar10 != 0) {
    dVar2 = (double)FUN_180370b10(lVar10,(double)*(float *)(param_2 + 0x3c));
    if (((uint)(float)dVar2 & 0x7f800000) != 0x7f800000) {
      *(float *)(param_2 + 0x3c) = (float)dVar2;
    }
  }
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,&local_150,"vm_yaw");
  lVar10 = FUN_1800f2fa0(param_1,uVar8);
  if (lVar10 != 0) {
    dVar2 = (double)FUN_180370b10(lVar10,(double)*(float *)(param_2 + 0x40));
    if (((uint)(float)dVar2 & 0x7f800000) != 0x7f800000) {
      *(float *)(param_2 + 0x40) = (float)dVar2;
    }
  }
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,&local_150,"vm_roll");
  lVar10 = FUN_1800f2fa0(param_1,uVar8);
  if (lVar10 != 0) {
    dVar2 = (double)FUN_180370b10(lVar10,(double)*(float *)(param_2 + 0x44));
    if (((uint)(float)dVar2 & 0x7f800000) != 0x7f800000) {
      *(float *)(param_2 + 0x44) = (float)dVar2;
    }
  }
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,&local_150,"vm_override_modifiers");
  piVar9 = (int *)FUN_1800f2fa0(param_1,uVar8);
  if (piVar9 != (int *)0x0) {
    if (*piVar9 == 1) {
      uVar7 = (undefined1)piVar9[1];
    }
    else if (*piVar9 == 2) {
      if (*(double *)(piVar9 + 2) == 0.0) {
        uVar7 = 0;
      }
      else {
        uVar7 = 1;
      }
    }
    else {
      uVar7 = param_2[0x48];
    }
    param_2[0x48] = uVar7;
  }
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,&local_150,"vm_bobbing");
  FUN_1800f3090(param_1,uVar8,param_2 + 0x4c);
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,&local_150,"vm_rotation_sway");
  FUN_1800f3090(param_1,uVar8,param_2 + 0x50);
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,&local_150,"vm_velocity_sway");
  FUN_1800f3090(param_1,uVar8,param_2 + 0x54);
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,&local_150,"vm_in_air_offset");
  FUN_1800f3090(param_1,uVar8,param_2 + 0x58);
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,&local_150,"vm_lower_weapon");
  FUN_1800f3090(param_1,uVar8,param_2 + 0x5c);
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,&local_150,"vm_ladder_bob");
  FUN_1800f3090(param_1,uVar8,param_2 + 0x60);
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,&local_150,"force_third_person");
  piVar9 = (int *)FUN_1800f2fa0(param_1,uVar8);
  if (piVar9 != (int *)0x0) {
    if (*piVar9 == 1) {
      uVar7 = (undefined1)piVar9[1];
    }
    else if (*piVar9 == 2) {
      if (*(double *)(piVar9 + 2) == 0.0) {
        uVar7 = 0;
      }
      else {
        uVar7 = 1;
      }
    }
    else {
      uVar7 = param_2[100];
    }
    param_2[100] = uVar7;
  }
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,&local_150,"third_person_disablers");
  FUN_18019dbe0(param_1,uVar8,param_2 + 0x65);
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,&local_150,"third_person_distance");
  FUN_1800f3090(param_1,uVar8,param_2 + 0x68);
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,&local_150,"disable_overhead");
  FUN_18019dbe0(param_1,uVar8,param_2 + 0x6c);
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,&local_150,"unlock_spectating");
  FUN_18019dbe0(param_1,uVar8,param_2 + 0x6e);
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,&local_150,"visual_recoil");
  FUN_18019df50(param_1,uVar8,param_2 + 0x70);
  FUN_18000f890(local_1d0);
  local_1b0 = (char *)0x0;
  uStack_1a8 = 0;
  local_1b0 = (char *)FUN_18000fb70(0x20);
  uVar5 = s_visuals_world_esp__1806f7a28._12_4_;
  uVar4 = s_visuals_world_esp__1806f7a28._8_4_;
  uVar3 = s_visuals_world_esp__1806f7a28._4_4_;
  local_1a0 = 0x12;
  local_198 = 0x1f;
  *(undefined4 *)local_1b0 = s_visuals_world_esp__1806f7a28._0_4_;
  *(undefined4 *)(local_1b0 + 4) = uVar3;
  *(undefined4 *)(local_1b0 + 8) = uVar4;
  *(undefined4 *)(local_1b0 + 0xc) = uVar5;
  *(undefined2 *)(local_1b0 + 0x10) = s_visuals_world_esp__1806f7a28._16_2_;
  local_1b0[0x12] = '\0';
  uVar8 = FUN_180073a70(local_1d0,local_1d0 + 4,&DAT_18058b61c);
  FUN_1801c15d0(param_1,uVar8,param_2 + 0x74);
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,local_1d0 + 4,"bomb_defused");
  FUN_18019e140(param_1,uVar8,param_2 + 0xa8);
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,local_1d0 + 4,"defuser");
  piVar9 = (int *)FUN_1800f2fa0(param_1,uVar8);
  if (piVar9 != (int *)0x0) {
    if (*piVar9 == 1) {
      uVar7 = (undefined1)piVar9[1];
    }
    else if (*piVar9 == 2) {
      if (*(double *)(piVar9 + 2) == 0.0) {
        uVar7 = 0;
      }
      else {
        uVar7 = 1;
      }
    }
    else {
      uVar7 = param_2[0xb8];
    }
    param_2[0xb8] = uVar7;
  }
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,local_1d0 + 4,"defuser_in_time");
  FUN_18019e140(param_1,uVar8,param_2 + 0xbc);
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,local_1d0 + 4,"defuser_too_late");
  FUN_18019e140(param_1,uVar8,param_2 + 0xcc);
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,local_1d0 + 4,"damage_low");
  FUN_18019e140(param_1,uVar8,param_2 + 0xdc);
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,local_1d0 + 4,"damage_high");
  FUN_18019e140(param_1,uVar8,param_2 + 0xec);
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,local_1d0 + 4,"bomb_colorize_effects");
  piVar9 = (int *)FUN_1800f2fa0(param_1,uVar8);
  if (piVar9 != (int *)0x0) {
    if (*piVar9 == 1) {
      uVar7 = (undefined1)piVar9[1];
    }
    else if (*piVar9 == 2) {
      if (*(double *)(piVar9 + 2) == 0.0) {
        uVar7 = 0;
      }
      else {
        uVar7 = 1;
      }
    }
    else {
      uVar7 = param_2[0xfc];
    }
    param_2[0xfc] = uVar7;
  }
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,local_1d0 + 4,"bomb_explosion");
  FUN_18019e140(param_1,uVar8,param_2 + 0x100);
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,local_1d0 + 4,"bomb_light");
  FUN_18019e140(param_1,uVar8,param_2 + 0x110);
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,local_1d0 + 4,"weapons");
  FUN_1801c15d0(param_1,uVar8,param_2 + 0x120);
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,local_1d0 + 4,"weapons_colorize_effects");
  piVar9 = (int *)FUN_1800f2fa0(param_1,uVar8);
  if (piVar9 != (int *)0x0) {
    if (*piVar9 == 1) {
      uVar7 = (undefined1)piVar9[1];
    }
    else if (*piVar9 == 2) {
      if (*(double *)(piVar9 + 2) == 0.0) {
        uVar7 = 0;
      }
      else {
        uVar7 = 1;
      }
    }
    else {
      uVar7 = param_2[0x154];
    }
    param_2[0x154] = uVar7;
  }
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,local_1d0 + 4,"weapon_effect");
  FUN_18019e140(param_1,uVar8,param_2 + 0x158);
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,local_1d0 + 4,"impact_effect");
  FUN_18019e140(param_1,uVar8,param_2 + 0x168);
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,local_1d0 + 4,"hostages");
  FUN_1801c15d0(param_1,uVar8,param_2 + 0x178);
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,local_1d0 + 4,"grenades");
  FUN_1801c15d0(param_1,uVar8,param_2 + 0x1ac);
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,local_1d0 + 4,"grenade_lethal");
  FUN_18019e140(param_1,uVar8,param_2 + 0x1e0);
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,local_1d0 + 4,"grenade_utility");
  FUN_18019e140(param_1,uVar8,param_2 + 0x1f0);
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,local_1d0 + 4,"item_exponent");
  FUN_1800f3090(param_1,uVar8,param_2 + 0x200);
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,local_1d0 + 4,"item_thickness");
  lVar10 = FUN_1800f2fa0(param_1,uVar8);
  if (lVar10 != 0) {
    dVar2 = (double)FUN_180370b10(lVar10,(double)*(float *)(param_2 + 0x204));
    if (((uint)(float)dVar2 & 0x7f800000) != 0x7f800000) {
      *(float *)(param_2 + 0x204) = (float)dVar2;
    }
  }
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,local_1d0 + 4,"item_points_thickness");
  lVar10 = FUN_1800f2fa0(param_1,uVar8);
  if (lVar10 != 0) {
    dVar2 = (double)FUN_180370b10(lVar10,(double)*(float *)(param_2 + 0x208));
    if (((uint)(float)dVar2 & 0x7f800000) != 0x7f800000) {
      *(float *)(param_2 + 0x208) = (float)dVar2;
    }
  }
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,local_1d0 + 4,"item_shimmer");
  FUN_1800f3090(param_1,uVar8,param_2 + 0x20c);
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,local_1d0 + 4,"smoke_radius");
  piVar9 = (int *)FUN_1800f2fa0(param_1,uVar8);
  if (piVar9 != (int *)0x0) {
    if (*piVar9 == 1) {
      uVar7 = (undefined1)piVar9[1];
    }
    else if (*piVar9 == 2) {
      if (*(double *)(piVar9 + 2) == 0.0) {
        uVar7 = 0;
      }
      else {
        uVar7 = 1;
      }
    }
    else {
      uVar7 = param_2[0x210];
    }
    param_2[0x210] = uVar7;
  }
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,local_1d0 + 4,"smoke_radius_color");
  FUN_18019e140(param_1,uVar8,param_2 + 0x214);
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,local_1d0 + 4,"smoke_options");
  FUN_1801c1840(param_1,uVar8,param_2 + 0x224);
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,local_1d0 + 4,"inferno_radius");
  piVar9 = (int *)FUN_1800f2fa0(param_1,uVar8);
  if (piVar9 != (int *)0x0) {
    if (*piVar9 == 1) {
      uVar7 = (undefined1)piVar9[1];
    }
    else if (*piVar9 == 2) {
      if (*(double *)(piVar9 + 2) == 0.0) {
        uVar7 = 0;
      }
      else {
        uVar7 = 1;
      }
    }
    else {
      uVar7 = param_2[0x238];
    }
    param_2[0x238] = uVar7;
  }
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,local_1d0 + 4,"inferno_lethal");
  FUN_18019e140(param_1,uVar8,param_2 + 0x23c);
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,local_1d0 + 4,"inferno_safe");
  FUN_18019e140(param_1,uVar8,param_2 + 0x24c);
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,local_1d0 + 4,"inferno_options");
  FUN_1801c1840(param_1,uVar8,param_2 + 0x25c);
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,local_1d0 + 4,"projectile_inferno");
  piVar9 = (int *)FUN_1800f2fa0(param_1,uVar8);
  if (piVar9 != (int *)0x0) {
    if (*piVar9 == 1) {
      uVar7 = (undefined1)piVar9[1];
    }
    else if (*piVar9 == 2) {
      if (*(double *)(piVar9 + 2) == 0.0) {
        uVar7 = 0;
      }
      else {
        uVar7 = 1;
      }
    }
    else {
      uVar7 = param_2[0x270];
    }
    param_2[0x270] = uVar7;
  }
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,local_1d0 + 4,"projectile_lethal");
  FUN_18019e140(param_1,uVar8,param_2 + 0x274);
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,local_1d0 + 4,"projectile_safe");
  FUN_18019e140(param_1,uVar8,param_2 + 0x284);
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,local_1d0 + 4,"colorize_smoke");
  piVar9 = (int *)FUN_1800f2fa0(param_1,uVar8);
  if (piVar9 != (int *)0x0) {
    if (*piVar9 == 1) {
      uVar7 = (undefined1)piVar9[1];
    }
    else if (*piVar9 == 2) {
      if (*(double *)(piVar9 + 2) == 0.0) {
        uVar7 = 0;
      }
      else {
        uVar7 = 1;
      }
    }
    else {
      uVar7 = param_2[0x294];
    }
    param_2[0x294] = uVar7;
  }
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,local_1d0 + 4,"smoke_ct");
  FUN_18019e140(param_1,uVar8,param_2 + 0x298);
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,local_1d0 + 4,"smoke_t");
  FUN_18019e140(param_1,uVar8,param_2 + 0x2a8);
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,local_1d0 + 4,"colorize_molotov");
  piVar9 = (int *)FUN_1800f2fa0(param_1,uVar8);
  if (piVar9 != (int *)0x0) {
    if (*piVar9 == 1) {
      uVar7 = (undefined1)piVar9[1];
    }
    else if (*piVar9 == 2) {
      if (*(double *)(piVar9 + 2) == 0.0) {
        uVar7 = 0;
      }
      else {
        uVar7 = 1;
      }
    }
    else {
      uVar7 = param_2[0x2b8];
    }
    param_2[0x2b8] = uVar7;
  }
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,local_1d0 + 4,"molotov_lethal");
  FUN_18019e140(param_1,uVar8,param_2 + 700);
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,local_1d0 + 4,"molotov_safe");
  FUN_18019e140(param_1,uVar8,param_2 + 0x2cc);
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,local_1d0 + 4,"disable_inferno_decals");
  piVar9 = (int *)FUN_1800f2fa0(param_1,uVar8);
  if (piVar9 != (int *)0x0) {
    if (*piVar9 == 1) {
      uVar7 = (undefined1)piVar9[1];
    }
    else if (*piVar9 == 2) {
      if (*(double *)(piVar9 + 2) == 0.0) {
        uVar7 = 0;
      }
      else {
        uVar7 = 1;
      }
    }
    else {
      uVar7 = param_2[0x2dc];
    }
    param_2[0x2dc] = uVar7;
  }
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,local_1d0 + 4,"colorize_explosion");
  piVar9 = (int *)FUN_1800f2fa0(param_1,uVar8);
  if (piVar9 != (int *)0x0) {
    if (*piVar9 == 1) {
      uVar7 = (undefined1)piVar9[1];
    }
    else if (*piVar9 == 2) {
      if (*(double *)(piVar9 + 2) == 0.0) {
        uVar7 = 0;
      }
      else {
        uVar7 = 1;
      }
    }
    else {
      uVar7 = param_2[0x2dd];
    }
    param_2[0x2dd] = uVar7;
  }
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,local_1d0 + 4,"explosion_color");
  FUN_18019e140(param_1,uVar8,param_2 + 0x2e0);
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,local_1d0 + 4,"effects");
  piVar9 = (int *)FUN_1800f2fa0(param_1,uVar8);
  if (piVar9 != (int *)0x0) {
    if (*piVar9 == 1) {
      uVar7 = (undefined1)piVar9[1];
    }
    else if (*piVar9 == 2) {
      if (*(double *)(piVar9 + 2) == 0.0) {
        uVar7 = 0;
      }
      else {
        uVar7 = 1;
      }
    }
    else {
      uVar7 = param_2[0x2f0];
    }
    param_2[0x2f0] = uVar7;
  }
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,local_1d0 + 4,"effects_color");
  FUN_18019e140(param_1,uVar8,param_2 + 0x2f4);
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,local_1d0 + 4,"effects_items");
  FUN_180152490(param_1,uVar8,param_2 + 0x304);
  FUN_18000f890(local_1d0);
  uVar15 = 0;
  do {
    uVar8 = FUN_18004e4f0(&local_d0,uVar15);
    uVar11 = FUN_180073a70(&local_b0,local_1d0 + 4,"effects_item_color");
    uVar8 = FUN_180066820(local_1d0,uVar11,uVar8);
    FUN_18019e140(param_1,uVar8,param_2 + uVar15 * 0x10 + 0x30c);
    FUN_18000f890(local_1d0);
    FUN_18000f890(&local_b0);
    FUN_18000f890(&local_d0);
    uVar15 = uVar15 + 1;
  } while (uVar15 < 5);
  uVar8 = FUN_180073a70(local_1d0,local_1d0 + 4,"effects_item_inherit");
  FUN_180152490(param_1,uVar8,param_2 + 0x35c);
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,local_1d0 + 4,"trajectory");
  piVar9 = (int *)FUN_1800f2fa0(param_1,uVar8);
  if (piVar9 != (int *)0x0) {
    if (*piVar9 == 1) {
      uVar7 = (undefined1)piVar9[1];
    }
    else if (*piVar9 == 2) {
      if (*(double *)(piVar9 + 2) == 0.0) {
        uVar7 = 0;
      }
      else {
        uVar7 = 1;
      }
    }
    else {
      uVar7 = param_2[0x361];
    }
    param_2[0x361] = uVar7;
  }
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,local_1d0 + 4,"trajectory_base");
  FUN_18019e140(param_1,uVar8,param_2 + 0x364);
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,local_1d0 + 4,"trajectory_hit");
  FUN_18019e140(param_1,uVar8,param_2 + 0x374);
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,local_1d0 + 4,"trajectory_team_damage");
  FUN_18019e140(param_1,uVar8,param_2 + 900);
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,local_1d0 + 4,"trajectory_exponent");
  lVar10 = FUN_1800f2fa0(param_1,uVar8);
  dVar6 = DAT_1808ace48;
  dVar2 = DAT_1808ac9c8;
  if ((((lVar10 != 0) &&
       (dVar16 = (double)FUN_180370b10(lVar10,(double)*(int *)(param_2 + 0x394)),
       ((uint)((ulonglong)dVar16 >> 0x34) & 0x7ff) != 0x7ff)) && (dVar6 < dVar16)) &&
     (dVar16 < dVar2)) {
    *(int *)(param_2 + 0x394) = (int)dVar16;
  }
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,local_1d0 + 4,"trajectory_thickness");
  lVar10 = FUN_1800f2fa0(param_1,uVar8);
  if (lVar10 != 0) {
    dVar16 = (double)FUN_180370b10(lVar10,(double)*(float *)(param_2 + 0x398));
    if (((uint)(float)dVar16 & 0x7f800000) != 0x7f800000) {
      *(float *)(param_2 + 0x398) = (float)dVar16;
    }
  }
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,local_1d0 + 4,"trajectory_points_thickness");
  lVar10 = FUN_1800f2fa0(param_1,uVar8);
  if (lVar10 != 0) {
    dVar16 = (double)FUN_180370b10(lVar10,(double)*(float *)(param_2 + 0x39c));
    if (((uint)(float)dVar16 & 0x7f800000) != 0x7f800000) {
      *(float *)(param_2 + 0x39c) = (float)dVar16;
    }
  }
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,local_1d0 + 4,"trajectory_shimmer");
  FUN_18019dbe0(param_1,uVar8,param_2 + 0x3a0);
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,local_1d0 + 4,"trajectory_shimmer_strength");
  lVar10 = FUN_1800f2fa0(param_1,uVar8);
  if (((lVar10 != 0) &&
      (dVar16 = (double)FUN_180370b10(lVar10,(double)*(int *)(param_2 + 0x3a4)),
      ((uint)((ulonglong)dVar16 >> 0x34) & 0x7ff) != 0x7ff)) &&
     ((dVar6 < dVar16 && (dVar16 < dVar2)))) {
    *(int *)(param_2 + 0x3a4) = (int)dVar16;
  }
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,local_1d0 + 4,"trajectory_thrown");
  piVar9 = (int *)FUN_1800f2fa0(param_1,uVar8);
  if (piVar9 != (int *)0x0) {
    if (*piVar9 == 1) {
      uVar7 = (undefined1)piVar9[1];
    }
    else if (*piVar9 == 2) {
      if (*(double *)(piVar9 + 2) == 0.0) {
        uVar7 = 0;
      }
      else {
        uVar7 = 1;
      }
    }
    else {
      uVar7 = param_2[0x3a8];
    }
    param_2[0x3a8] = uVar7;
  }
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,local_1d0 + 4,"trajectory_pin_pulled_only");
  piVar9 = (int *)FUN_1800f2fa0(param_1,uVar8);
  if (piVar9 != (int *)0x0) {
    if (*piVar9 == 1) {
      uVar7 = (undefined1)piVar9[1];
    }
    else if (*piVar9 == 2) {
      if (*(double *)(piVar9 + 2) == 0.0) {
        uVar7 = 0;
      }
      else {
        uVar7 = 1;
      }
    }
    else {
      uVar7 = param_2[0x3a9];
    }
    param_2[0x3a9] = uVar7;
  }
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,local_1d0 + 4,"trajectory_precise");
  piVar9 = (int *)FUN_1800f2fa0(param_1,uVar8);
  if (piVar9 != (int *)0x0) {
    if (*piVar9 == 1) {
      uVar7 = (undefined1)piVar9[1];
    }
    else if (*piVar9 == 2) {
      if (*(double *)(piVar9 + 2) == 0.0) {
        uVar7 = 0;
      }
      else {
        uVar7 = 1;
      }
    }
    else {
      uVar7 = param_2[0x3aa];
    }
    param_2[0x3aa] = uVar7;
  }
  FUN_18000f890(local_1d0);
  local_170 = (char *)0x0;
  uStack_168 = 0;
  local_170 = (char *)FUN_18000fb70(0x20);
  uVar5 = s_visuals_world_hud__1806f7df8._12_4_;
  uVar4 = s_visuals_world_hud__1806f7df8._8_4_;
  uVar3 = s_visuals_world_hud__1806f7df8._4_4_;
  local_160 = 0x12;
  local_158 = 0x1f;
  *(undefined4 *)local_170 = s_visuals_world_hud__1806f7df8._0_4_;
  *(undefined4 *)(local_170 + 4) = uVar3;
  *(undefined4 *)(local_170 + 8) = uVar4;
  *(undefined4 *)(local_170 + 0xc) = uVar5;
  *(undefined2 *)(local_170 + 0x10) = s_visuals_world_hud__1806f7df8._16_2_;
  local_170[0x12] = '\0';
  uVar8 = FUN_180073a70(local_1d0,&local_170,"radar");
  FUN_18019df50(param_1,uVar8,param_2 + 0x3ac);
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,&local_170,"scope_overlay");
  lVar10 = FUN_1800f2fa0(param_1,uVar8);
  if (((lVar10 != 0) &&
      (dVar16 = (double)FUN_180370b10(lVar10,(double)*(int *)(param_2 + 0x3b0)),
      ((uint)((ulonglong)dVar16 >> 0x34) & 0x7ff) != 0x7ff)) &&
     ((dVar6 < dVar16 && (dVar16 < dVar2)))) {
    *(int *)(param_2 + 0x3b0) = (int)dVar16;
  }
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,&local_170,"scope_color_mode");
  lVar10 = FUN_1800f2fa0(param_1,uVar8);
  if ((((lVar10 != 0) &&
       (dVar16 = (double)FUN_180370b10(lVar10,(double)*(int *)(param_2 + 0x3b4)),
       ((uint)((ulonglong)dVar16 >> 0x34) & 0x7ff) != 0x7ff)) && (dVar6 < dVar16)) &&
     (dVar16 < dVar2)) {
    *(int *)(param_2 + 0x3b4) = (int)dVar16;
  }
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,&local_170,"scope_color");
  FUN_18019e140(param_1,uVar8,param_2 + 0x3b8);
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,&local_170,"scope_outer");
  FUN_18019e140(param_1,uVar8,param_2 + 0x3c8);
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,&local_170,"scope_inner");
  FUN_18019e140(param_1,uVar8,param_2 + 0x3d8);
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,&local_170,"scope_selection");
  FUN_18019df50(param_1,uVar8,param_2 + 1000);
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,&local_170,"scope_rotation");
  lVar10 = FUN_1800f2fa0(param_1,uVar8);
  if (((lVar10 != 0) &&
      (dVar16 = (double)FUN_180370b10(lVar10,(double)*(int *)(param_2 + 0x3ec)),
      ((uint)((ulonglong)dVar16 >> 0x34) & 0x7ff) != 0x7ff)) &&
     ((dVar6 < dVar16 && (dVar16 < dVar2)))) {
    *(int *)(param_2 + 0x3ec) = (int)dVar16;
  }
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,&local_170,"scope_offset");
  lVar10 = FUN_1800f2fa0(param_1,uVar8);
  if (((lVar10 != 0) &&
      (dVar16 = (double)FUN_180370b10(lVar10,(double)*(int *)(param_2 + 0x3f0)),
      ((uint)((ulonglong)dVar16 >> 0x34) & 0x7ff) != 0x7ff)) &&
     ((dVar6 < dVar16 && (dVar16 < dVar2)))) {
    *(int *)(param_2 + 0x3f0) = (int)dVar16;
  }
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,&local_170,"scope_size");
  lVar10 = FUN_1800f2fa0(param_1,uVar8);
  if ((((lVar10 != 0) &&
       (dVar16 = (double)FUN_180370b10(lVar10,(double)*(int *)(param_2 + 0x3f4)),
       ((uint)((ulonglong)dVar16 >> 0x34) & 0x7ff) != 0x7ff)) && (dVar6 < dVar16)) &&
     (dVar16 < dVar2)) {
    *(int *)(param_2 + 0x3f4) = (int)dVar16;
  }
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,&local_170,"scope_aspect");
  lVar10 = FUN_1800f2fa0(param_1,uVar8);
  if (((lVar10 != 0) &&
      (dVar16 = (double)FUN_180370b10(lVar10,(double)*(int *)(param_2 + 0x3f8)),
      ((uint)((ulonglong)dVar16 >> 0x34) & 0x7ff) != 0x7ff)) &&
     ((dVar6 < dVar16 && (dVar16 < dVar2)))) {
    *(int *)(param_2 + 0x3f8) = (int)dVar16;
  }
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,&local_170,"scope_spread_scale");
  lVar10 = FUN_1800f2fa0(param_1,uVar8);
  if (((lVar10 != 0) &&
      (dVar16 = (double)FUN_180370b10(lVar10,(double)*(int *)(param_2 + 0x3fc)),
      ((uint)((ulonglong)dVar16 >> 0x34) & 0x7ff) != 0x7ff)) &&
     ((dVar6 < dVar16 && (dVar16 < dVar2)))) {
    *(int *)(param_2 + 0x3fc) = (int)dVar16;
  }
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,&local_170,"scope_glow");
  piVar9 = (int *)FUN_1800f2fa0(param_1,uVar8);
  if (piVar9 != (int *)0x0) {
    if (*piVar9 == 1) {
      uVar7 = (undefined1)piVar9[1];
    }
    else if (*piVar9 == 2) {
      if (*(double *)(piVar9 + 2) == 0.0) {
        uVar7 = 0;
      }
      else {
        uVar7 = 1;
      }
    }
    else {
      uVar7 = param_2[0x400];
    }
    param_2[0x400] = uVar7;
  }
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,&local_170,"scope_glow_color");
  FUN_18019e140(param_1,uVar8,param_2 + 0x404);
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,&local_170,"inaccuracy");
  piVar9 = (int *)FUN_1800f2fa0(param_1,uVar8);
  if (piVar9 != (int *)0x0) {
    if (*piVar9 == 1) {
      uVar7 = (undefined1)piVar9[1];
    }
    else if (*piVar9 == 2) {
      if (*(double *)(piVar9 + 2) == 0.0) {
        uVar7 = 0;
      }
      else {
        uVar7 = 1;
      }
    }
    else {
      uVar7 = param_2[0x414];
    }
    param_2[0x414] = uVar7;
  }
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,&local_170,"inaccuracy_color");
  FUN_18019e140(param_1,uVar8,param_2 + 0x418);
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,&local_170,"inaccuracy_follow_recoil");
  piVar9 = (int *)FUN_1800f2fa0(param_1,uVar8);
  if (piVar9 != (int *)0x0) {
    if (*piVar9 == 1) {
      uVar7 = (undefined1)piVar9[1];
    }
    else if (*piVar9 == 2) {
      if (*(double *)(piVar9 + 2) == 0.0) {
        uVar7 = 0;
      }
      else {
        uVar7 = 1;
      }
    }
    else {
      uVar7 = param_2[0x428];
    }
    param_2[0x428] = uVar7;
  }
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,&local_170,"inaccuracy_only_in_scope");
  piVar9 = (int *)FUN_1800f2fa0(param_1,uVar8);
  if (piVar9 != (int *)0x0) {
    if (*piVar9 == 1) {
      uVar7 = (undefined1)piVar9[1];
    }
    else if (*piVar9 == 2) {
      if (*(double *)(piVar9 + 2) == 0.0) {
        uVar7 = 0;
      }
      else {
        uVar7 = 1;
      }
    }
    else {
      uVar7 = param_2[0x429];
    }
    param_2[0x429] = uVar7;
  }
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,&local_170,"inaccuracy_invert_fade");
  piVar9 = (int *)FUN_1800f2fa0(param_1,uVar8);
  if (piVar9 != (int *)0x0) {
    if (*piVar9 == 1) {
      uVar7 = (undefined1)piVar9[1];
    }
    else if (*piVar9 == 2) {
      if (*(double *)(piVar9 + 2) == 0.0) {
        uVar7 = 0;
      }
      else {
        uVar7 = 1;
      }
    }
    else {
      uVar7 = param_2[0x42a];
    }
    param_2[0x42a] = uVar7;
  }
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,&local_170,"inaccuracy_fade_offset");
  lVar10 = FUN_1800f2fa0(param_1,uVar8);
  if ((((lVar10 != 0) &&
       (dVar16 = (double)FUN_180370b10(lVar10,(double)*(int *)(param_2 + 0x42c)),
       ((uint)((ulonglong)dVar16 >> 0x34) & 0x7ff) != 0x7ff)) && (dVar6 < dVar16)) &&
     (dVar16 < dVar2)) {
    *(int *)(param_2 + 0x42c) = (int)dVar16;
  }
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,&local_170,"preserve_notices");
  lVar10 = FUN_1800f2fa0(param_1,uVar8);
  if (((lVar10 != 0) &&
      (dVar16 = (double)FUN_180370b10(lVar10,(double)*(int *)(param_2 + 0x430)),
      ((uint)((ulonglong)dVar16 >> 0x34) & 0x7ff) != 0x7ff)) &&
     ((dVar6 < dVar16 && (dVar16 < dVar2)))) {
    *(int *)(param_2 + 0x430) = (int)dVar16;
  }
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,&local_170,"hide_teammate_assists");
  piVar9 = (int *)FUN_1800f2fa0(param_1,uVar8);
  if (piVar9 != (int *)0x0) {
    if (*piVar9 == 1) {
      uVar7 = (undefined1)piVar9[1];
    }
    else if (*piVar9 == 2) {
      if (*(double *)(piVar9 + 2) == 0.0) {
        uVar7 = 0;
      }
      else {
        uVar7 = 1;
      }
    }
    else {
      uVar7 = param_2[0x434];
    }
    param_2[0x434] = uVar7;
  }
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,&local_170,"scoreboard_opacity");
  lVar10 = FUN_1800f2fa0(param_1,uVar8);
  if (((lVar10 != 0) &&
      (dVar16 = (double)FUN_180370b10(lVar10,(double)*(int *)(param_2 + 0x438)),
      ((uint)((ulonglong)dVar16 >> 0x34) & 0x7ff) != 0x7ff)) &&
     ((dVar6 < dVar16 && (dVar16 < dVar2)))) {
    *(int *)(param_2 + 0x438) = (int)dVar16;
  }
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,&local_170,"scoreboard_width");
  lVar10 = FUN_1800f2fa0(param_1,uVar8);
  if ((((lVar10 != 0) &&
       (dVar16 = (double)FUN_180370b10(lVar10,(double)*(int *)(param_2 + 0x43c)),
       ((uint)((ulonglong)dVar16 >> 0x34) & 0x7ff) != 0x7ff)) && (dVar6 < dVar16)) &&
     (dVar16 < dVar2)) {
    *(int *)(param_2 + 0x43c) = (int)dVar16;
  }
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,&local_170,"reveal_money");
  piVar9 = (int *)FUN_1800f2fa0(param_1,uVar8);
  if (piVar9 != (int *)0x0) {
    if (*piVar9 == 1) {
      uVar7 = (undefined1)piVar9[1];
    }
    else if (*piVar9 == 2) {
      if (*(double *)(piVar9 + 2) == 0.0) {
        uVar7 = 0;
      }
      else {
        uVar7 = 1;
      }
    }
    else {
      uVar7 = param_2[0x440];
    }
    param_2[0x440] = uVar7;
  }
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,&local_170,"reveal_ranks");
  piVar9 = (int *)FUN_1800f2fa0(param_1,uVar8);
  if (piVar9 != (int *)0x0) {
    if (*piVar9 == 1) {
      uVar7 = (undefined1)piVar9[1];
    }
    else if (*piVar9 == 2) {
      if (*(double *)(piVar9 + 2) == 0.0) {
        uVar7 = 0;
      }
      else {
        uVar7 = 1;
      }
    }
    else {
      uVar7 = param_2[0x441];
    }
    param_2[0x441] = uVar7;
  }
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,&local_170,"equipment");
  lVar10 = FUN_1800f2fa0(param_1,uVar8);
  if (((lVar10 != 0) &&
      (dVar16 = (double)FUN_180370b10(lVar10,(double)*(int *)(param_2 + 0x444)),
      ((uint)((ulonglong)dVar16 >> 0x34) & 0x7ff) != 0x7ff)) &&
     ((dVar6 < dVar16 && (dVar16 < dVar2)))) {
    *(int *)(param_2 + 0x444) = (int)dVar16;
  }
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,&local_170,"equipment_items");
  FUN_1801c1990(param_1,uVar8,param_2 + 0x448);
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,&local_170,"force_sniper_crosshair");
  piVar9 = (int *)FUN_1800f2fa0(param_1,uVar8);
  if (piVar9 != (int *)0x0) {
    if (*piVar9 == 1) {
      uVar7 = (undefined1)piVar9[1];
    }
    else if (*piVar9 == 2) {
      if (*(double *)(piVar9 + 2) == 0.0) {
        uVar7 = 0;
      }
      else {
        uVar7 = 1;
      }
    }
    else {
      uVar7 = param_2[0x451];
    }
    param_2[0x451] = uVar7;
  }
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,&local_170,"force_while_scoped");
  piVar9 = (int *)FUN_1800f2fa0(param_1,uVar8);
  if (piVar9 != (int *)0x0) {
    if (*piVar9 == 1) {
      uVar7 = (undefined1)piVar9[1];
    }
    else if (*piVar9 == 2) {
      if (*(double *)(piVar9 + 2) == 0.0) {
        uVar7 = 0;
      }
      else {
        uVar7 = 1;
      }
    }
    else {
      uVar7 = param_2[0x452];
    }
    param_2[0x452] = uVar7;
  }
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,&local_170,"force_while_c4");
  piVar9 = (int *)FUN_1800f2fa0(param_1,uVar8);
  if (piVar9 != (int *)0x0) {
    if (*piVar9 == 1) {
      uVar7 = (undefined1)piVar9[1];
    }
    else if (*piVar9 == 2) {
      if (*(double *)(piVar9 + 2) == 0.0) {
        uVar7 = 0;
      }
      else {
        uVar7 = 1;
      }
    }
    else {
      uVar7 = param_2[0x453];
    }
    param_2[0x453] = uVar7;
  }
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,&local_170,"hide_while_knife");
  piVar9 = (int *)FUN_1800f2fa0(param_1,uVar8);
  if (piVar9 != (int *)0x0) {
    if (*piVar9 == 1) {
      uVar7 = (undefined1)piVar9[1];
    }
    else if (*piVar9 == 2) {
      if (*(double *)(piVar9 + 2) == 0.0) {
        uVar7 = 0;
      }
      else {
        uVar7 = 1;
      }
    }
    else {
      uVar7 = param_2[0x454];
    }
    param_2[0x454] = uVar7;
  }
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,&local_170,"hide_while_grenade");
  piVar9 = (int *)FUN_1800f2fa0(param_1,uVar8);
  if (piVar9 != (int *)0x0) {
    if (*piVar9 == 1) {
      uVar7 = (undefined1)piVar9[1];
    }
    else if (*piVar9 == 2) {
      if (*(double *)(piVar9 + 2) == 0.0) {
        uVar7 = 0;
      }
      else {
        uVar7 = 1;
      }
    }
    else {
      uVar7 = param_2[0x455];
    }
    param_2[0x455] = uVar7;
  }
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,&local_170,"penetration");
  piVar9 = (int *)FUN_1800f2fa0(param_1,uVar8);
  if (piVar9 != (int *)0x0) {
    if (*piVar9 == 1) {
      uVar7 = (undefined1)piVar9[1];
    }
    else if (*piVar9 == 2) {
      if (*(double *)(piVar9 + 2) == 0.0) {
        uVar7 = 0;
      }
      else {
        uVar7 = 1;
      }
    }
    else {
      uVar7 = param_2[0x456];
    }
    param_2[0x456] = uVar7;
  }
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,&local_170,"penetration_base");
  FUN_18019e140(param_1,uVar8,param_2 + 0x458);
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,&local_170,"penetration_penetrable");
  FUN_18019e140(param_1,uVar8,param_2 + 0x468);
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,&local_170,"penetration_target");
  FUN_18019e140(param_1,uVar8,param_2 + 0x478);
  FUN_18000f890(local_1d0);
  local_110 = (char *)0x0;
  uStack_108 = 0;
  local_110 = (char *)FUN_18000fb70(0x20);
  uVar5 = s_visuals_world_removals__1806f8148._12_4_;
  uVar4 = s_visuals_world_removals__1806f8148._8_4_;
  uVar3 = s_visuals_world_removals__1806f8148._4_4_;
  local_100 = 0x17;
  local_f8 = 0x1f;
  *(undefined4 *)local_110 = s_visuals_world_removals__1806f8148._0_4_;
  *(undefined4 *)(local_110 + 4) = uVar3;
  *(undefined4 *)(local_110 + 8) = uVar4;
  *(undefined4 *)(local_110 + 0xc) = uVar5;
  *(ulonglong *)(local_110 + 0xf) =
       CONCAT71(s_visuals_world_removals__1806f8148._16_7_,s_visuals_world_removals__1806f8148[0xf])
  ;
  local_110[0x17] = '\0';
  uVar8 = FUN_180073a70(local_1d0,&local_110,"team_intro");
  piVar9 = (int *)FUN_1800f2fa0(param_1,uVar8);
  if (piVar9 != (int *)0x0) {
    if (*piVar9 == 1) {
      uVar7 = (undefined1)piVar9[1];
    }
    else if (*piVar9 == 2) {
      if (*(double *)(piVar9 + 2) == 0.0) {
        uVar7 = 0;
      }
      else {
        uVar7 = 1;
      }
    }
    else {
      uVar7 = param_2[0x488];
    }
    param_2[0x488] = uVar7;
  }
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,&local_110,"panorama_dots");
  piVar9 = (int *)FUN_1800f2fa0(param_1,uVar8);
  if (piVar9 != (int *)0x0) {
    if (*piVar9 == 1) {
      uVar7 = (undefined1)piVar9[1];
    }
    else if (*piVar9 == 2) {
      if (*(double *)(piVar9 + 2) == 0.0) {
        uVar7 = 0;
      }
      else {
        uVar7 = 1;
      }
    }
    else {
      uVar7 = param_2[0x489];
    }
    param_2[0x489] = uVar7;
  }
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,&local_110,"bottom_gradient");
  piVar9 = (int *)FUN_1800f2fa0(param_1,uVar8);
  if (piVar9 != (int *)0x0) {
    if (*piVar9 == 1) {
      uVar7 = (undefined1)piVar9[1];
    }
    else if (*piVar9 == 2) {
      if (*(double *)(piVar9 + 2) == 0.0) {
        uVar7 = 0;
      }
      else {
        uVar7 = 1;
      }
    }
    else {
      uVar7 = param_2[0x48a];
    }
    param_2[0x48a] = uVar7;
  }
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,&local_110,"damage_indicator");
  piVar9 = (int *)FUN_1800f2fa0(param_1,uVar8);
  if (piVar9 != (int *)0x0) {
    if (*piVar9 == 1) {
      uVar7 = (undefined1)piVar9[1];
    }
    else if (*piVar9 == 2) {
      if (*(double *)(piVar9 + 2) == 0.0) {
        uVar7 = 0;
      }
      else {
        uVar7 = 1;
      }
    }
    else {
      uVar7 = param_2[0x48b];
    }
    param_2[0x48b] = uVar7;
  }
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,&local_110,"server_ads");
  piVar9 = (int *)FUN_1800f2fa0(param_1,uVar8);
  if (piVar9 != (int *)0x0) {
    if (*piVar9 == 1) {
      uVar7 = (undefined1)piVar9[1];
    }
    else if (*piVar9 == 2) {
      if (*(double *)(piVar9 + 2) == 0.0) {
        uVar7 = 0;
      }
      else {
        uVar7 = 1;
      }
    }
    else {
      uVar7 = param_2[0x48c];
    }
    param_2[0x48c] = uVar7;
  }
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,&local_110,"flashbang");
  piVar9 = (int *)FUN_1800f2fa0(param_1,uVar8);
  if (piVar9 != (int *)0x0) {
    if (*piVar9 == 1) {
      uVar7 = (undefined1)piVar9[1];
    }
    else if (*piVar9 == 2) {
      if (*(double *)(piVar9 + 2) == 0.0) {
        uVar7 = 0;
      }
      else {
        uVar7 = 1;
      }
    }
    else {
      uVar7 = param_2[0x48d];
    }
    param_2[0x48d] = uVar7;
  }
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,&local_110,&DAT_1806e7598);
  piVar9 = (int *)FUN_1800f2fa0(param_1,uVar8);
  if (piVar9 != (int *)0x0) {
    if (*piVar9 == 1) {
      uVar7 = (undefined1)piVar9[1];
    }
    else if (*piVar9 == 2) {
      if (*(double *)(piVar9 + 2) == 0.0) {
        uVar7 = 0;
      }
      else {
        uVar7 = 1;
      }
    }
    else {
      uVar7 = param_2[0x48e];
    }
    param_2[0x48e] = uVar7;
  }
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,&local_110,&DAT_1806f816c);
  piVar9 = (int *)FUN_1800f2fa0(param_1,uVar8);
  if (piVar9 != (int *)0x0) {
    if (*piVar9 == 1) {
      uVar7 = (undefined1)piVar9[1];
    }
    else if (*piVar9 == 2) {
      if (*(double *)(piVar9 + 2) == 0.0) {
        uVar7 = 0;
      }
      else {
        uVar7 = 1;
      }
    }
    else {
      uVar7 = param_2[0x48f];
    }
    param_2[0x48f] = uVar7;
  }
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,&local_110,"carried_hostage");
  piVar9 = (int *)FUN_1800f2fa0(param_1,uVar8);
  if (piVar9 != (int *)0x0) {
    if (*piVar9 == 1) {
      uVar7 = (undefined1)piVar9[1];
    }
    else if (*piVar9 == 2) {
      if (*(double *)(piVar9 + 2) == 0.0) {
        uVar7 = 0;
      }
      else {
        uVar7 = 1;
      }
    }
    else {
      uVar7 = param_2[0x490];
    }
    param_2[0x490] = uVar7;
  }
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,&local_110,"post_processing");
  piVar9 = (int *)FUN_1800f2fa0(param_1,uVar8);
  if (piVar9 != (int *)0x0) {
    if (*piVar9 == 1) {
      uVar7 = (undefined1)piVar9[1];
    }
    else if (*piVar9 == 2) {
      if (*(double *)(piVar9 + 2) == 0.0) {
        uVar7 = 0;
      }
      else {
        uVar7 = 1;
      }
    }
    else {
      uVar7 = param_2[0x491];
    }
    param_2[0x491] = uVar7;
  }
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,&local_110,"water");
  piVar9 = (int *)FUN_1800f2fa0(param_1,uVar8);
  if (piVar9 != (int *)0x0) {
    if (*piVar9 == 1) {
      uVar7 = (undefined1)piVar9[1];
    }
    else if (*piVar9 == 2) {
      if (*(double *)(piVar9 + 2) == 0.0) {
        uVar7 = 0;
      }
      else {
        uVar7 = 1;
      }
    }
    else {
      uVar7 = param_2[0x492];
    }
    param_2[0x492] = uVar7;
  }
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,&local_110,"blood");
  piVar9 = (int *)FUN_1800f2fa0(param_1,uVar8);
  if (piVar9 != (int *)0x0) {
    if (*piVar9 == 1) {
      uVar7 = (undefined1)piVar9[1];
    }
    else if (*piVar9 == 2) {
      if (*(double *)(piVar9 + 2) == 0.0) {
        uVar7 = 0;
      }
      else {
        uVar7 = 1;
      }
    }
    else {
      uVar7 = param_2[0x493];
    }
    param_2[0x493] = uVar7;
  }
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,&local_110,"decals");
  piVar9 = (int *)FUN_1800f2fa0(param_1,uVar8);
  if (piVar9 != (int *)0x0) {
    if (*piVar9 == 1) {
      uVar7 = (undefined1)piVar9[1];
    }
    else if (*piVar9 == 2) {
      if (*(double *)(piVar9 + 2) == 0.0) {
        uVar7 = 0;
      }
      else {
        uVar7 = 1;
      }
    }
    else {
      uVar7 = param_2[0x494];
    }
    param_2[0x494] = uVar7;
  }
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,&local_110,"ragdolls");
  lVar10 = FUN_1800f2fa0(param_1,uVar8);
  if (((lVar10 != 0) &&
      (dVar16 = (double)FUN_180370b10(lVar10,(double)*(int *)(param_2 + 0x498)),
      ((uint)((ulonglong)dVar16 >> 0x34) & 0x7ff) != 0x7ff)) &&
     ((dVar6 < dVar16 && (dVar16 < dVar2)))) {
    *(int *)(param_2 + 0x498) = (int)dVar16;
  }
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,&local_110,"gravity");
  lVar10 = FUN_1800f2fa0(param_1,uVar8);
  if ((((lVar10 != 0) &&
       (dVar16 = (double)FUN_180370b10(lVar10,(double)*(int *)(param_2 + 0x49c)),
       ((uint)((ulonglong)dVar16 >> 0x34) & 0x7ff) != 0x7ff)) && (dVar6 < dVar16)) &&
     (dVar16 < dVar2)) {
    *(int *)(param_2 + 0x49c) = (int)dVar16;
  }
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,&local_110,"friction");
  lVar10 = FUN_1800f2fa0(param_1,uVar8);
  if (((lVar10 != 0) &&
      (dVar16 = (double)FUN_180370b10(lVar10,(double)*(int *)(param_2 + 0x4a0)),
      ((uint)((ulonglong)dVar16 >> 0x34) & 0x7ff) != 0x7ff)) &&
     ((dVar6 < dVar16 && (dVar16 < dVar2)))) {
    *(int *)(param_2 + 0x4a0) = (int)dVar16;
  }
  FUN_18000f890(local_1d0);
  local_d0 = (char *)0x0;
  uStack_c8 = 0;
  local_d0 = (char *)FUN_18000fb70(0x20);
  uVar5 = s_visuals_world_hitmarker__1806f81f8._12_4_;
  uVar4 = s_visuals_world_hitmarker__1806f81f8._8_4_;
  uVar3 = s_visuals_world_hitmarker__1806f81f8._4_4_;
  local_c0 = 0x18;
  local_b8 = 0x1f;
  *(undefined4 *)local_d0 = s_visuals_world_hitmarker__1806f81f8._0_4_;
  *(undefined4 *)(local_d0 + 4) = uVar3;
  *(undefined4 *)(local_d0 + 8) = uVar4;
  *(undefined4 *)(local_d0 + 0xc) = uVar5;
  *(undefined8 *)(local_d0 + 0x10) = s_visuals_world_hitmarker__1806f81f8._16_8_;
  local_d0[0x18] = '\0';
  uVar8 = FUN_180073a70(local_1d0,&local_d0,"marker_2d");
  piVar9 = (int *)FUN_1800f2fa0(param_1,uVar8);
  if (piVar9 != (int *)0x0) {
    if (*piVar9 == 1) {
      uVar7 = (undefined1)piVar9[1];
    }
    else if (*piVar9 == 2) {
      if (*(double *)(piVar9 + 2) == 0.0) {
        uVar7 = 0;
      }
      else {
        uVar7 = 1;
      }
    }
    else {
      uVar7 = param_2[0x4a4];
    }
    param_2[0x4a4] = uVar7;
  }
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,&local_d0,"color_2d");
  FUN_18019e140(param_1,uVar8,param_2 + 0x4a8);
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,&local_d0,"duration_2d");
  lVar10 = FUN_1800f2fa0(param_1,uVar8);
  if (lVar10 != 0) {
    dVar16 = (double)FUN_180370b10(lVar10,(double)*(float *)(param_2 + 0x4b8));
    if (((uint)(float)dVar16 & 0x7f800000) != 0x7f800000) {
      *(float *)(param_2 + 0x4b8) = (float)dVar16;
    }
  }
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,&local_d0,"marker_3d");
  piVar9 = (int *)FUN_1800f2fa0(param_1,uVar8);
  if (piVar9 != (int *)0x0) {
    if (*piVar9 == 1) {
      uVar7 = (undefined1)piVar9[1];
    }
    else if (*piVar9 == 2) {
      if (*(double *)(piVar9 + 2) == 0.0) {
        uVar7 = 0;
      }
      else {
        uVar7 = 1;
      }
    }
    else {
      uVar7 = param_2[0x4bc];
    }
    param_2[0x4bc] = uVar7;
  }
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,&local_d0,"color_3d");
  FUN_18019e140(param_1,uVar8,param_2 + 0x4c0);
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,&local_d0,"duration_3d");
  lVar10 = FUN_1800f2fa0(param_1,uVar8);
  if (lVar10 != 0) {
    dVar16 = (double)FUN_180370b10(lVar10,(double)*(float *)(param_2 + 0x4d0));
    if (((uint)(float)dVar16 & 0x7f800000) != 0x7f800000) {
      *(float *)(param_2 + 0x4d0) = (float)dVar16;
    }
  }
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,&local_d0,"damage");
  piVar9 = (int *)FUN_1800f2fa0(param_1,uVar8);
  if (piVar9 != (int *)0x0) {
    if (*piVar9 == 1) {
      uVar7 = (undefined1)piVar9[1];
    }
    else if (*piVar9 == 2) {
      if (*(double *)(piVar9 + 2) == 0.0) {
        uVar7 = 0;
      }
      else {
        uVar7 = 1;
      }
    }
    else {
      uVar7 = param_2[0x4d4];
    }
    param_2[0x4d4] = uVar7;
  }
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,&local_d0,"color_damage");
  FUN_18019e140(param_1,uVar8,param_2 + 0x4d8);
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,&local_d0,"duration_damage");
  lVar10 = FUN_1800f2fa0(param_1,uVar8);
  if (lVar10 != 0) {
    dVar16 = (double)FUN_180370b10(lVar10,(double)*(float *)(param_2 + 0x4e8));
    if (((uint)(float)dVar16 & 0x7f800000) != 0x7f800000) {
      *(float *)(param_2 + 0x4e8) = (float)dVar16;
    }
  }
  FUN_18000f890(local_1d0);
  local_f0 = (char *)0x0;
  uStack_e8 = 0;
  local_f0 = (char *)FUN_18000fb70(0x20);
  uVar5 = s_visuals_world_tracers__1806f8290._8_4_;
  uVar4 = s_visuals_world_tracers__1806f8290._4_4_;
  local_e0 = 0x16;
  local_d8 = 0x1f;
  uVar3 = CONCAT22(s_visuals_world_tracers__1806f8290._14_2_,
                   s_visuals_world_tracers__1806f8290._12_2_);
  *(undefined4 *)local_f0 = s_visuals_world_tracers__1806f8290._0_4_;
  *(undefined4 *)(local_f0 + 4) = uVar4;
  *(undefined4 *)(local_f0 + 8) = uVar5;
  *(undefined4 *)(local_f0 + 0xc) = uVar3;
  *(ulonglong *)(local_f0 + 0xe) =
       CONCAT62(s_visuals_world_tracers__1806f8290._16_6_,s_visuals_world_tracers__1806f8290._14_2_)
  ;
  local_f0[0x16] = '\0';
  uVar8 = FUN_180073a70(local_1d0,&local_f0,"enemies");
  piVar9 = (int *)FUN_1800f2fa0(param_1,uVar8);
  if (piVar9 != (int *)0x0) {
    if (*piVar9 == 1) {
      uVar7 = (undefined1)piVar9[1];
    }
    else if (*piVar9 == 2) {
      if (*(double *)(piVar9 + 2) == 0.0) {
        uVar7 = 0;
      }
      else {
        uVar7 = 1;
      }
    }
    else {
      uVar7 = param_2[0x4ec];
    }
    param_2[0x4ec] = uVar7;
  }
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,&local_f0,"enemies_color");
  FUN_18019e140(param_1,uVar8,param_2 + 0x4f0);
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,&local_f0,"enemies_duration");
  lVar10 = FUN_1800f2fa0(param_1,uVar8);
  if (lVar10 != 0) {
    dVar16 = (double)FUN_180370b10(lVar10,(double)*(float *)(param_2 + 0x500));
    if (((uint)(float)dVar16 & 0x7f800000) != 0x7f800000) {
      *(float *)(param_2 + 0x500) = (float)dVar16;
    }
  }
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,&local_f0,"teammates");
  piVar9 = (int *)FUN_1800f2fa0(param_1,uVar8);
  if (piVar9 != (int *)0x0) {
    if (*piVar9 == 1) {
      uVar7 = (undefined1)piVar9[1];
    }
    else if (*piVar9 == 2) {
      if (*(double *)(piVar9 + 2) == 0.0) {
        uVar7 = 0;
      }
      else {
        uVar7 = 1;
      }
    }
    else {
      uVar7 = param_2[0x504];
    }
    param_2[0x504] = uVar7;
  }
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,&local_f0,"teammates_color");
  FUN_18019e140(param_1,uVar8,param_2 + 0x508);
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,&local_f0,"teammates_duration");
  lVar10 = FUN_1800f2fa0(param_1,uVar8);
  if (lVar10 != 0) {
    dVar16 = (double)FUN_180370b10(lVar10,(double)*(float *)(param_2 + 0x518));
    if (((uint)(float)dVar16 & 0x7f800000) != 0x7f800000) {
      *(float *)(param_2 + 0x518) = (float)dVar16;
    }
  }
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,&local_f0,"local");
  piVar9 = (int *)FUN_1800f2fa0(param_1,uVar8);
  if (piVar9 != (int *)0x0) {
    if (*piVar9 == 1) {
      uVar7 = (undefined1)piVar9[1];
    }
    else if (*piVar9 == 2) {
      if (*(double *)(piVar9 + 2) == 0.0) {
        uVar7 = 0;
      }
      else {
        uVar7 = 1;
      }
    }
    else {
      uVar7 = param_2[0x51c];
    }
    param_2[0x51c] = uVar7;
  }
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,&local_f0,"local_color");
  FUN_18019e140(param_1,uVar8,param_2 + 0x520);
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,&local_f0,"local_duration");
  lVar10 = FUN_1800f2fa0(param_1,uVar8);
  if (lVar10 != 0) {
    dVar16 = (double)FUN_180370b10(lVar10,(double)*(float *)(param_2 + 0x530));
    if (((uint)(float)dVar16 & 0x7f800000) != 0x7f800000) {
      *(float *)(param_2 + 0x530) = (float)dVar16;
    }
  }
  FUN_18000f890(local_1d0);
  uVar8 = FUN_180073a70(local_1d0,&local_f0,"shared");
  piVar9 = (int *)FUN_1800f2fa0(param_1,uVar8);
  if (piVar9 != (int *)0x0) {
    if (*piVar9 == 1) {
      uVar7 = (undefined1)piVar9[1];
    }
    else if (*piVar9 == 2) {
      if (*(double *)(piVar9 + 2) == 0.0) {
        uVar7 = 0;
      }
      else {
        uVar7 = 1;
      }
    }
    else {
      uVar7 = param_2[0x534];
    }
    param_2[0x534] = uVar7;
  }
  FUN_18000f890(local_1d0);
  local_1d0[0] = "enemies";
  local_1d0[1] = "teammates";
  local_1d0[2] = "local";
  local_1d0[3] = "shared";
  uVar15 = 0;
  do {
    pcVar14 = local_1d0[uVar15];
    uVar8 = FUN_180073a70(local_90,&local_f0,"style_");
    sVar12 = strlen(pcVar14);
    puVar13 = (undefined8 *)FUN_1800134a0(uVar8,pcVar14,sVar12);
    local_b0 = *puVar13;
    uStack_a8 = puVar13[1];
    local_a0 = puVar13[2];
    uStack_98 = puVar13[3];
    puVar13[2] = 0;
    puVar13[3] = 0xf;
    *(undefined1 *)puVar13 = 0;
    puVar13 = (undefined8 *)FUN_1800134a0(&local_b0,&DAT_1806e6f24,1);
    local_130 = (char *)*puVar13;
    uStack_128 = puVar13[1];
    local_120 = puVar13[2];
    uStack_118 = puVar13[3];
    puVar13[2] = 0;
    puVar13[3] = 0xf;
    *(undefined1 *)puVar13 = 0;
    FUN_18000f890(&local_b0);
    FUN_18000f890(local_90);
    uVar8 = FUN_180073a70(local_190,&local_130,"use_3d_scale");
    piVar9 = (int *)FUN_1800f2fa0(param_1,uVar8);
    if (piVar9 != (int *)0x0) {
      if (*piVar9 == 1) {
        uVar7 = (undefined1)piVar9[1];
      }
      else if (*piVar9 == 2) {
        if (*(double *)(piVar9 + 2) == 0.0) {
          uVar7 = 0;
        }
        else {
          uVar7 = 1;
        }
      }
      else {
        uVar7 = param_2[uVar15 * 0x18 + 0x538];
      }
      param_2[uVar15 * 0x18 + 0x538] = uVar7;
    }
    FUN_18000f890(local_190);
    uVar8 = FUN_180073a70(local_190,&local_130,"glow_opacity");
    lVar10 = FUN_1800f2fa0(param_1,uVar8);
    if (((lVar10 != 0) &&
        (dVar16 = (double)FUN_180370b10(lVar10,(double)*(int *)(param_2 + uVar15 * 0x18 + 0x53c)),
        ((uint)((ulonglong)dVar16 >> 0x34) & 0x7ff) != 0x7ff)) &&
       ((dVar6 < dVar16 && (dVar16 < dVar2)))) {
      *(int *)(param_2 + uVar15 * 0x18 + 0x53c) = (int)dVar16;
    }
    FUN_18000f890(local_190);
    uVar8 = FUN_180073a70(local_190,&local_130,"thickness");
    lVar10 = FUN_1800f2fa0(param_1,uVar8);
    if (lVar10 != 0) {
      dVar16 = (double)FUN_180370b10(lVar10,(double)*(float *)(param_2 + uVar15 * 0x18 + 0x540));
      if (((uint)(float)dVar16 & 0x7f800000) != 0x7f800000) {
        *(float *)(param_2 + uVar15 * 0x18 + 0x540) = (float)dVar16;
      }
    }
    FUN_18000f890(local_190);
    uVar8 = FUN_180073a70(local_190,&local_130,"scale");
    lVar10 = FUN_1800f2fa0(param_1,uVar8);
    if ((((lVar10 != 0) &&
         (dVar16 = (double)FUN_180370b10(lVar10,(double)*(int *)(param_2 + uVar15 * 0x18 + 0x544)),
         ((uint)((ulonglong)dVar16 >> 0x34) & 0x7ff) != 0x7ff)) && (dVar6 < dVar16)) &&
       (dVar16 < dVar2)) {
      *(int *)(param_2 + uVar15 * 0x18 + 0x544) = (int)dVar16;
    }
    FUN_18000f890(local_190);
    uVar8 = FUN_180073a70(local_190,&local_130,"glow_width");
    lVar10 = FUN_1800f2fa0(param_1,uVar8);
    if (lVar10 != 0) {
      dVar16 = (double)FUN_180370b10(lVar10,(double)*(float *)(param_2 + uVar15 * 0x18 + 0x548));
      if (((uint)(float)dVar16 & 0x7f800000) != 0x7f800000) {
        *(float *)(param_2 + uVar15 * 0x18 + 0x548) = (float)dVar16;
      }
    }
    FUN_18000f890(local_190);
    uVar8 = FUN_180073a70(local_190,&local_130,"glow_radius");
    lVar10 = FUN_1800f2fa0(param_1,uVar8);
    if (lVar10 != 0) {
      dVar16 = (double)FUN_180370b10(lVar10,(double)*(float *)(param_2 + uVar15 * 0x18 + 0x54c));
      if (((uint)(float)dVar16 & 0x7f800000) != 0x7f800000) {
        *(float *)(param_2 + uVar15 * 0x18 + 0x54c) = (float)dVar16;
      }
    }
    FUN_18000f890(local_190);
    FUN_18000f890(&local_130);
    uVar15 = uVar15 + 1;
  } while (uVar15 < 4);
  local_130 = (char *)0x0;
  uStack_128 = 0;
  local_130 = (char *)FUN_18000fb70(0x20);
  uVar5 = s_visuals_world_impacts__1806f8398._8_4_;
  uVar4 = s_visuals_world_impacts__1806f8398._4_4_;
  local_120 = 0x16;
  uStack_118 = 0x1f;
  uVar3 = CONCAT22(s_visuals_world_impacts__1806f8398._14_2_,
                   s_visuals_world_impacts__1806f8398._12_2_);
  *(undefined4 *)local_130 = s_visuals_world_impacts__1806f8398._0_4_;
  *(undefined4 *)(local_130 + 4) = uVar4;
  *(undefined4 *)(local_130 + 8) = uVar5;
  *(undefined4 *)(local_130 + 0xc) = uVar3;
  *(ulonglong *)(local_130 + 0xe) =
       CONCAT62(s_visuals_world_impacts__1806f8398._16_6_,s_visuals_world_impacts__1806f8398._14_2_)
  ;
  local_130[0x16] = '\0';
  uVar8 = FUN_180073a70(local_190,&local_130,"enabled");
  piVar9 = (int *)FUN_1800f2fa0(param_1,uVar8);
  if (piVar9 != (int *)0x0) {
    if (*piVar9 == 1) {
      uVar7 = (undefined1)piVar9[1];
    }
    else if (*piVar9 == 2) {
      if (*(double *)(piVar9 + 2) == 0.0) {
        uVar7 = 0;
      }
      else {
        uVar7 = 1;
      }
    }
    else {
      uVar7 = param_2[0x598];
    }
    param_2[0x598] = uVar7;
  }
  FUN_18000f890(local_190);
  uVar8 = FUN_180073a70(local_190,&local_130,"client");
  FUN_18019e140(param_1,uVar8,param_2 + 0x59c);
  FUN_18000f890(local_190);
  uVar8 = FUN_180073a70(local_190,&local_130,"server");
  FUN_18019e140(param_1,uVar8,param_2 + 0x5ac);
  FUN_18000f890(local_190);
  uVar8 = FUN_180073a70(local_190,&local_130,"scale");
  lVar10 = FUN_1800f2fa0(param_1,uVar8);
  if (((lVar10 != 0) &&
      (dVar16 = (double)FUN_180370b10(lVar10,(double)*(int *)(param_2 + 0x5bc)),
      ((uint)((ulonglong)dVar16 >> 0x34) & 0x7ff) != 0x7ff)) &&
     ((dVar6 < dVar16 && (dVar16 < dVar2)))) {
    *(int *)(param_2 + 0x5bc) = (int)dVar16;
  }
  FUN_18000f890(local_190);
  uVar8 = FUN_180073a70(local_190,&local_130,"rounding");
  lVar10 = FUN_1800f2fa0(param_1,uVar8);
  if (((lVar10 != 0) &&
      (dVar16 = (double)FUN_180370b10(lVar10,(double)*(int *)(param_2 + 0x5c0)),
      ((uint)((ulonglong)dVar16 >> 0x34) & 0x7ff) != 0x7ff)) &&
     ((dVar6 < dVar16 && (dVar16 < dVar2)))) {
    *(int *)(param_2 + 0x5c0) = (int)dVar16;
  }
  FUN_18000f890(local_190);
  uVar8 = FUN_180073a70(local_190,&local_130,"fill_opacity");
  lVar10 = FUN_1800f2fa0(param_1,uVar8);
  if ((((lVar10 != 0) &&
       (dVar16 = (double)FUN_180370b10(lVar10,(double)*(int *)(param_2 + 0x5c4)),
       ((uint)((ulonglong)dVar16 >> 0x34) & 0x7ff) != 0x7ff)) && (dVar6 < dVar16)) &&
     (dVar16 < dVar2)) {
    *(int *)(param_2 + 0x5c4) = (int)dVar16;
  }
  FUN_18000f890(local_190);
  uVar8 = FUN_180073a70(local_190,&local_130,"outline_opacity");
  lVar10 = FUN_1800f2fa0(param_1,uVar8);
  if (((lVar10 != 0) &&
      (dVar16 = (double)FUN_180370b10(lVar10,(double)*(int *)(param_2 + 0x5c8)),
      ((uint)((ulonglong)dVar16 >> 0x34) & 0x7ff) != 0x7ff)) &&
     ((dVar6 < dVar16 && (dVar16 < dVar2)))) {
    *(int *)(param_2 + 0x5c8) = (int)dVar16;
  }
  FUN_18000f890(local_190);
  uVar8 = FUN_180073a70(local_190,&local_130,"glow_opacity");
  lVar10 = FUN_1800f2fa0(param_1,uVar8);
  if (((lVar10 != 0) &&
      (dVar16 = (double)FUN_180370b10(lVar10,(double)*(int *)(param_2 + 0x5cc)),
      ((uint)((ulonglong)dVar16 >> 0x34) & 0x7ff) != 0x7ff)) &&
     ((dVar6 < dVar16 && (dVar16 < dVar2)))) {
    *(int *)(param_2 + 0x5cc) = (int)dVar16;
  }
  FUN_18000f890(local_190);
  uVar8 = FUN_180073a70(local_190,&local_130,&DAT_1806f83d8);
  lVar10 = FUN_1800f2fa0(param_1,uVar8);
  if (lVar10 != 0) {
    dVar16 = (double)FUN_180370b10(lVar10,(double)*(float *)(param_2 + 0x5d0));
    if (((uint)(float)dVar16 & 0x7f800000) != 0x7f800000) {
      *(float *)(param_2 + 0x5d0) = (float)dVar16;
    }
  }
  FUN_18000f890(local_190);
  uVar8 = FUN_180073a70(local_190,&local_130,"duration");
  lVar10 = FUN_1800f2fa0(param_1,uVar8);
  if (lVar10 != 0) {
    dVar16 = (double)FUN_180370b10(lVar10,(double)*(float *)(param_2 + 0x5d4));
    if (((uint)(float)dVar16 & 0x7f800000) != 0x7f800000) {
      *(float *)(param_2 + 0x5d4) = (float)dVar16;
    }
  }
  FUN_18000f890(local_190);
  uVar8 = FUN_180073a70(local_190,&local_130,"sparks");
  piVar9 = (int *)FUN_1800f2fa0(param_1,uVar8);
  if (piVar9 != (int *)0x0) {
    if (*piVar9 == 1) {
      uVar7 = (undefined1)piVar9[1];
    }
    else if (*piVar9 == 2) {
      if (*(double *)(piVar9 + 2) == 0.0) {
        uVar7 = 0;
      }
      else {
        uVar7 = 1;
      }
    }
    else {
      uVar7 = param_2[0x5d8];
    }
    param_2[0x5d8] = uVar7;
  }
  FUN_18000f890(local_190);
  uVar8 = FUN_180073a70(local_190,&local_130,"sparks_color");
  FUN_18019e140(param_1,uVar8,param_2 + 0x5dc);
  FUN_18000f890(local_190);
  uVar8 = FUN_180073a70(local_190,&local_130,"sparks_glow");
  FUN_18019e140(param_1,uVar8,param_2 + 0x5ec);
  FUN_18000f890(local_190);
  uVar8 = FUN_180073a70(local_190,&local_130,"sparks_radius");
  lVar10 = FUN_1800f2fa0(param_1,uVar8);
  if (lVar10 != 0) {
    dVar16 = (double)FUN_180370b10(lVar10,(double)*(float *)(param_2 + 0x5fc));
    if (((uint)(float)dVar16 & 0x7f800000) != 0x7f800000) {
      *(float *)(param_2 + 0x5fc) = (float)dVar16;
    }
  }
  FUN_18000f890(local_190);
  uVar8 = FUN_180073a70(local_190,&local_130,"sparks_count");
  lVar10 = FUN_1800f2fa0(param_1,uVar8);
  if ((((lVar10 != 0) &&
       (dVar16 = (double)FUN_180370b10(lVar10,(double)*(int *)(param_2 + 0x600)),
       ((uint)((ulonglong)dVar16 >> 0x34) & 0x7ff) != 0x7ff)) && (dVar6 < dVar16)) &&
     (dVar16 < dVar2)) {
    *(int *)(param_2 + 0x600) = (int)dVar16;
  }
  FUN_18000f890(local_190);
  uVar8 = FUN_180073a70(local_190,&local_130,"sparks_spread");
  lVar10 = FUN_1800f2fa0(param_1,uVar8);
  if (((lVar10 != 0) &&
      (dVar16 = (double)FUN_180370b10(lVar10,(double)*(int *)(param_2 + 0x604)),
      ((uint)((ulonglong)dVar16 >> 0x34) & 0x7ff) != 0x7ff)) &&
     ((dVar6 < dVar16 && (dVar16 < dVar2)))) {
    *(int *)(param_2 + 0x604) = (int)dVar16;
  }
  FUN_18000f890(local_190);
  uVar8 = FUN_180073a70(local_190,&local_130,"sparks_height");
  lVar10 = FUN_1800f2fa0(param_1,uVar8);
  if (((lVar10 != 0) &&
      (dVar16 = (double)FUN_180370b10(lVar10,(double)*(int *)(param_2 + 0x608)),
      ((uint)((ulonglong)dVar16 >> 0x34) & 0x7ff) != 0x7ff)) &&
     ((dVar6 < dVar16 && (dVar16 < dVar2)))) {
    *(int *)(param_2 + 0x608) = (int)dVar16;
  }
  FUN_18000f890(local_190);
  uVar8 = FUN_180073a70(local_190,&local_130,"sparks_lifetime");
  lVar10 = FUN_1800f2fa0(param_1,uVar8);
  if (lVar10 != 0) {
    dVar2 = (double)FUN_180370b10(lVar10,(double)*(float *)(param_2 + 0x60c));
    if (((uint)(float)dVar2 & 0x7f800000) != 0x7f800000) {
      *(float *)(param_2 + 0x60c) = (float)dVar2;
    }
  }
  FUN_18000f890(local_190);
  if (0xf < uStack_118) {
    uVar15 = uStack_118 + 1;
    pcVar14 = local_130;
    if (0xfff < uVar15) {
      pcVar14 = *(char **)(local_130 + -8);
      if ((char *)0x1f < local_130 + (-8 - (longlong)pcVar14)) {
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar15 = uStack_118 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar14,uVar15);
  }
  FUN_18000f890(&local_f0);
  FUN_18000f890(&local_d0);
  FUN_18000f890(&local_110);
  FUN_18000f890(&local_170);
  FUN_18000f890(local_1d0 + 4);
  FUN_18000f890(&local_150);
  return;
}



/* ===== 1801a6880 FUN_1801a6880 ===== */

undefined8 FUN_1801a6880(longlong param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* ===== 1801a6890 FUN_1801a6890 ===== */

undefined8 * FUN_1801a6890(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  return param_1;
}



/* ===== 1801a68a0 FUN_1801a68a0 ===== */

void FUN_1801a68a0(longlong param_1)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_18000f890(*(longlong *)(param_1 + 8) + 0x18);
  }
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  thunk_FUN_1803d64e0(*(longlong *)(param_1 + 8),0x38);
  return;
}



/* ===== 1801a68e0 FUN_1801a68e0 ===== */

void FUN_1801a68e0(longlong param_1)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_18000f890(*(longlong *)(param_1 + 8) + 0x10);
  }
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  thunk_FUN_1803d64e0(*(longlong *)(param_1 + 8),0x40);
  return;
}



/* ===== 1801a6920 FUN_1801a6920 ===== */

void FUN_1801a6920(longlong *param_1)

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
  for (; lVar3 != lVar2; lVar3 = lVar3 + 0x80) {
    FUN_1800fc680(lVar3 + 0x20);
    FUN_18000f890(lVar3);
  }
  lVar3 = *param_1;
  if (0xfff < (param_1[2] - lVar3 & 0xffffffffffffff80U)) {
    lVar2 = *(longlong *)(lVar3 + -8);
    if ((lVar3 - lVar2) - 8U < 0x20) goto LAB_1801a699a;
    pcVar1 = (code *)swi(0x29);
    lVar3 = (*pcVar1)(5);
    puVar4 = auStack_20;
  }
  lVar2 = lVar3;
  puVar5 = puVar4;
LAB_1801a699a:
  *(undefined8 *)(puVar5 + -8) = 0x1801a699f;
  thunk_FUN_1803d64e0(lVar2);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* ===== 1801a69c0 FUN_1801a69c0 ===== */

void FUN_1801a69c0(longlong *param_1)

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
    FUN_1800fc680(lVar3);
  }
  lVar3 = *param_1;
  lVar2 = lVar3;
  if (0xfff < (ulonglong)((param_1[2] - lVar3 >> 5) << 5)) {
    lVar2 = *(longlong *)(lVar3 + -8);
    if ((lVar3 - lVar2) - 8U < 0x20) goto LAB_1801a6a4b;
    lVar2 = 5;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar4 = auStack_20;
  }
  puVar5 = puVar4;
LAB_1801a6a4b:
  *(undefined8 *)(puVar5 + -8) = 0x1801a6a53;
  thunk_FUN_1803d64e0(lVar2);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* ===== 1801a6a70 FUN_1801a6a70 ===== */

undefined8 FUN_1801a6a70(void)

{
  return 0x20;
}



/* ===== 1801a6a80 FUN_1801a6a80 ===== */

longlong FUN_1801a6a80(longlong param_1,longlong param_2)

{
  return param_2 * 0x1a0 + param_1;
}



/* ===== 1801a6a90 FUN_1801a6a90 ===== */

undefined8 FUN_1801a6a90(void)

{
  return 0xa0;
}



/* ===== 1801a6aa0 FUN_1801a6aa0 ===== */

undefined8 FUN_1801a6aa0(void)

{
  return 0x18;
}



/* ===== 1801a6ab0 FUN_1801a6ab0 ===== */

undefined8 FUN_1801a6ab0(void)

{
  return 5;
}



/* ===== 1801a6ac0 FUN_1801a6ac0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801a6ac0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [32];
  undefined1 local_88 [32];
  undefined1 local_68 [32];
  undefined1 local_48 [32];
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_c8;
  FUN_180073a70(local_88,param_2,"ambience.");
  FUN_180073a70(local_a8,local_88,"nightmode");
  FUN_1800f4b80();
  FUN_18000f890(local_a8);
  FUN_180073a70(local_a8,local_88,"colorize_props");
  FUN_1800f4b80();
  FUN_18000f890(local_a8);
  FUN_180073a70(local_a8,local_88,"fullbright");
  FUN_1800f4b80();
  FUN_18000f890(local_a8);
  FUN_180073a70(local_a8,local_88,"exposure");
  FUN_1800f4b80();
  FUN_18000f890(local_a8);
  FUN_180073a70(local_a8,local_88,"sunlight");
  FUN_1800f4b80();
  FUN_18000f890(local_a8);
  FUN_180073a70(local_a8,local_88,"sun_override_rotation");
  FUN_1800f4b80();
  FUN_18000f890(local_a8);
  FUN_180073a70(local_a8,local_88,&DAT_1806f8584);
  FUN_1800f4b80();
  FUN_18000f890(local_a8);
  FUN_180073a70(local_a8,local_88,&DAT_1806f8588);
  FUN_1800f4b80();
  FUN_18000f890(local_a8);
  FUN_180073a70(local_a8,local_88,"fog_override_skybox");
  FUN_1800f4b80();
  FUN_18000f890(local_a8);
  FUN_180073a70(local_a8,local_88,"fog_override_height");
  FUN_1800f4b80();
  FUN_18000f890(local_a8);
  FUN_180073a70(local_a8,local_88,"bloom");
  FUN_1800f4b80();
  FUN_18000f890(local_a8);
  FUN_180073a70(local_a8,local_88,"vignette");
  FUN_1800f4b80();
  FUN_18000f890(local_a8);
  FUN_180073a70(local_a8,local_88,"contrast");
  FUN_1800f4b80();
  FUN_18000f890(local_a8);
  FUN_180073a70(local_a8,local_88,"color_correction");
  FUN_1800f4b80();
  FUN_18000f890(local_a8);
  FUN_180073a70(local_a8,local_88,"cc_grayscale");
  FUN_1800f4b80();
  FUN_18000f890(local_a8);
  FUN_180073a70(local_a8,local_88,&DAT_1806f85f0);
  FUN_1800f4b80();
  FUN_18000f890(local_a8);
  FUN_180073a70(local_a8,local_88,&DAT_1806f85cc);
  FUN_1800f4b80();
  FUN_18000f890(local_a8);
  FUN_180073a70(local_a8,local_88,"wetness");
  FUN_1800f4b80();
  FUN_18000f890(local_a8);
  FUN_180073a70(local_a8,local_88,"wetness_ignore_sky");
  FUN_1800f4b80();
  FUN_18000f890(local_a8);
  FUN_180073a70(local_a8,local_88,"remove_fog");
  FUN_1800f4b80();
  FUN_18000f890(local_a8);
  FUN_180073a70(local_a8,local_88,"remove_sunlight");
  FUN_1800f4b80();
  FUN_18000f890(local_a8);
  FUN_180073a70(local_a8,local_88,"remove_viewmodel_sunlight");
  FUN_1800f4b80();
  FUN_18000f890(local_a8);
  FUN_180073a70(local_a8,local_88,"remove_barnlights");
  FUN_1800f4b80();
  FUN_18000f890(local_a8);
  FUN_180073a70(local_a8,local_88,"remove_baked_shadows");
  FUN_1800f4b80();
  FUN_18000f890(local_a8);
  FUN_180073a70(local_a8,local_88,"remove_dynamic_shadows");
  FUN_1800f4b80();
  FUN_18000f890(local_a8);
  FUN_180073a70(local_a8,local_88,"remove_post_processing");
  FUN_1800f4b80();
  FUN_18000f890(local_a8);
  FUN_180073a70(local_a8,local_88,"remove_skybox_2d");
  FUN_1800f4b80();
  FUN_18000f890(local_a8);
  FUN_180073a70(local_a8,local_88,"remove_skybox_3d");
  FUN_1800f4b80();
  FUN_18000f890(local_a8);
  FUN_180073a70(local_a8,local_88,"remove_cable_particles");
  FUN_1800f4b80();
  FUN_18000f890(local_a8);
  FUN_180073a70(local_a8,local_88,"nightmode_color");
  FUN_18000f890(local_a8);
  FUN_180073a70(local_a8,local_88,"overlay_transparency");
  FUN_1800f4b80();
  FUN_18000f890(local_a8);
  FUN_180073a70(local_a8,local_88,"props_color");
  FUN_18000f890(local_a8);
  FUN_180073a70(local_a8,local_88,"fullbright_color");
  FUN_18000f890(local_a8);
  FUN_180073a70(local_a8,local_88,"adaptation");
  FUN_1800f4b80();
  FUN_18000f890(local_a8);
  FUN_180073a70(local_a8,local_88,"compensation");
  FUN_1800f4b80();
  FUN_18000f890(local_a8);
  FUN_180073a70(local_a8,local_88,"exposure_min");
  FUN_1800f4b80();
  FUN_18000f890(local_a8);
  FUN_180073a70(local_a8,local_88,"exposure_max");
  FUN_1800f4b80();
  FUN_18000f890(local_a8);
  FUN_180073a70(local_a8,local_88,"adaptation_speed");
  FUN_1800f4b80();
  FUN_18000f890(local_a8);
  FUN_180073a70(local_a8,local_88,"fixed_exposure");
  FUN_1800f4b80();
  FUN_18000f890(local_a8);
  FUN_180073a70(local_a8,local_88,"sun_illumination");
  FUN_18000f890(local_a8);
  FUN_180073a70(local_a8,local_88,"sun_reflection");
  FUN_18000f890(local_a8);
  FUN_180073a70(local_a8,local_88,"sun_method");
  FUN_1800f4b80();
  FUN_18000f890(local_a8);
  FUN_180073a70(local_a8,local_88,"sun_pitch");
  FUN_1800f4b80();
  FUN_18000f890(local_a8);
  FUN_180073a70(local_a8,local_88,"sun_yaw");
  FUN_1800f4b80();
  FUN_18000f890(local_a8);
  FUN_180073a70(local_a8,local_88,"volumetric_brightness");
  FUN_1800f4b80();
  FUN_18000f890(local_a8);
  FUN_180073a70(local_a8,local_88,"sky_color");
  FUN_18000f890(local_a8);
  FUN_180073a70(local_a8,local_88,"clouds_color");
  FUN_18000f890(local_a8);
  FUN_180073a70(local_a8,local_88,"sun_color");
  FUN_18000f890(local_a8);
  FUN_180073a70(local_a8,local_88,"skybox");
  FUN_1800f4b80();
  FUN_18000f890(local_a8);
  FUN_180073a70(local_a8,local_88,"skybox_custom");
  FUN_18000f890(local_a8);
  FUN_180073a70(local_a8,local_88,"fog_color");
  FUN_18000f890(local_a8);
  FUN_180073a70(local_a8,local_88,"fog_distance");
  FUN_1800f4b80();
  FUN_18000f890(local_a8);
  FUN_180073a70(local_a8,local_88,"fog_exponent");
  FUN_1800f4b80();
  FUN_18000f890(local_a8);
  FUN_180073a70(local_a8,local_88,"fog_height_start");
  FUN_1800f4b80();
  FUN_18000f890(local_a8);
  FUN_180073a70(local_a8,local_88,"fog_height_end");
  FUN_1800f4b80();
  FUN_18000f890(local_a8);
  FUN_180073a70(local_a8,local_88,"fog_height_exponent");
  FUN_1800f4b80();
  FUN_18000f890(local_a8);
  FUN_180073a70(local_a8,local_88,"bloom_strength");
  FUN_1800f4b80();
  FUN_18000f890(local_a8);
  FUN_180073a70(local_a8,local_88,"bloom_screen_strength");
  FUN_1800f4b80();
  FUN_18000f890(local_a8);
  FUN_180073a70(local_a8,local_88,"bloom_blur_strength");
  FUN_1800f4b80();
  FUN_18000f890(local_a8);
  FUN_180073a70(local_a8,local_88,"bloom_threshold");
  FUN_1800f4b80();
  FUN_18000f890(local_a8);
  FUN_180073a70(local_a8,local_88,"bloom_threshold_width");
  FUN_1800f4b80();
  FUN_18000f890(local_a8);
  FUN_180073a70(local_a8,local_88,"vignette_color");
  FUN_18000f890(local_a8);
  FUN_180073a70(local_a8,local_88,"vignette_strength");
  FUN_1800f4b80();
  FUN_18000f890(local_a8);
  FUN_180073a70(local_a8,local_88,"vignette_radius");
  FUN_1800f4b80();
  FUN_18000f890(local_a8);
  FUN_180073a70(local_a8,local_88,"vignette_roundness");
  FUN_1800f4b80();
  FUN_18000f890(local_a8);
  FUN_180073a70(local_a8,local_88,"vignette_feather");
  FUN_1800f4b80();
  FUN_18000f890(local_a8);
  FUN_180073a70(local_a8,local_88,"contrast_strength");
  FUN_1800f4b80();
  FUN_18000f890(local_a8);
  FUN_180073a70(local_a8,local_88,"contrast_edge");
  FUN_1800f4b80();
  FUN_18000f890(local_a8);
  FUN_180073a70(local_a8,local_88,"contrast_vignette_start");
  FUN_1800f4b80();
  FUN_18000f890(local_a8);
  FUN_180073a70(local_a8,local_88,"contrast_vignette_end");
  FUN_1800f4b80();
  FUN_18000f890(local_a8);
  FUN_180073a70(local_a8,local_88,"contrast_vignette_blur");
  FUN_1800f4b80();
  FUN_18000f890(local_a8);
  FUN_180073a70(local_a8,local_88,"tone_curve");
  FUN_1800f4b80();
  FUN_18000f890(local_a8);
  FUN_180073a70(local_a8,local_88,"cc_contrast");
  FUN_1800f4b80();
  FUN_18000f890(local_a8);
  FUN_180073a70(local_a8,local_88,"cc_highlights");
  FUN_1800f4b80();
  FUN_18000f890(local_a8);
  FUN_180073a70(local_a8,local_88,"cc_shadows");
  FUN_1800f4b80();
  FUN_18000f890(local_a8);
  FUN_180073a70(local_a8,local_88,"cc_saturation");
  FUN_1800f4b80();
  FUN_18000f890(local_a8);
  FUN_180073a70(local_a8,local_88,"cc_vibrance");
  FUN_1800f4b80();
  FUN_18000f890(local_a8);
  FUN_180073a70(local_a8,local_88,"cc_temperature");
  FUN_1800f4b80();
  FUN_18000f890(local_a8);
  FUN_180073a70(local_a8,local_88,"cc_tint");
  FUN_1800f4b80();
  FUN_18000f890(local_a8);
  FUN_180073a70(local_a8,local_88,"dof_mode");
  FUN_1800f4b80();
  FUN_18000f890(local_a8);
  FUN_180073a70(local_a8,local_88,"dof_quality");
  FUN_1800f4b80();
  FUN_18000f890(local_a8);
  FUN_180073a70(local_a8,local_88,"dof_focus_distance");
  FUN_1800f4b80();
  FUN_18000f890(local_a8);
  FUN_180073a70(local_a8,local_88,"dof_focus_speed");
  FUN_1800f4b80();
  FUN_18000f890(local_a8);
  FUN_180073a70(local_a8,local_88,"dof_focus_range");
  FUN_1800f4b80();
  FUN_18000f890(local_a8);
  FUN_180073a70(local_a8,local_88,"wind_direction");
  FUN_1800f4b80();
  FUN_18000f890(local_a8);
  FUN_180073a70(local_a8,local_88,"wind_strength");
  FUN_1800f4b80();
  FUN_18000f890(local_a8);
  FUN_180073a70(local_a8,local_88,"wetness_rain");
  FUN_1800f4b80();
  FUN_18000f890(local_a8);
  FUN_180073a70(local_a8,local_88,"wetness_coverage");
  FUN_1800f4b80();
  FUN_18000f890(local_a8);
  FUN_180073a70(local_a8,local_88,"wetness_drying");
  FUN_1800f4b80();
  FUN_18000f890(local_a8);
  FUN_180073a70(local_a8,local_88,"wind_particle_strength");
  FUN_1800f4b80();
  FUN_18000f890(local_a8);
  FUN_180073a70(local_a8,local_88,"wind_turbulence");
  FUN_1800f4b80();
  FUN_18000f890(local_a8);
  FUN_180073a70(local_a8,local_88,"wind_max_tilt");
  FUN_1800f4b80();
  FUN_18000f890(local_a8);
  FUN_180073a70(local_a8,local_88,"thunder");
  FUN_1800f4b80();
  FUN_18000f890(local_a8);
  FUN_180073a70(local_a8,local_88,"thunder_primary");
  FUN_18000f890(local_a8);
  FUN_180073a70(local_a8,local_88,"thunder_glow");
  FUN_18000f890(local_a8);
  FUN_180073a70(local_a8,local_88,"thunder_interval");
  FUN_1800f4b80();
  FUN_18000f890(local_a8);
  FUN_180073a70(local_a8,local_88,"thunder_duration");
  FUN_1800f4b80();
  FUN_18000f890(local_a8);
  FUN_180073a70(local_a8,local_88,"thunder_sound");
  FUN_1800f4b80();
  FUN_18000f890(local_a8);
  FUN_180073a70(local_a8,local_88,"thunder_on_kill");
  FUN_1800f4b80();
  FUN_18000f890(local_a8);
  FUN_180073a70(local_a8,local_88,&DAT_1806f8bfc);
  FUN_1800f4b80();
  FUN_18000f890(local_a8);
  FUN_180073a70(local_a8,local_88,"rain_primary");
  FUN_18000f890(local_a8);
  FUN_180073a70(local_a8,local_88,"rain_glow");
  FUN_18000f890(local_a8);
  FUN_180073a70(local_a8,local_88,"rain_speed");
  FUN_1800f4b80();
  FUN_18000f890(local_a8);
  FUN_180073a70(local_a8,local_88,"rain_radius");
  FUN_1800f4b80();
  FUN_18000f890(local_a8);
  FUN_180073a70(local_a8,local_88,"rain_density");
  FUN_1800f4b80();
  FUN_18000f890(local_a8);
  FUN_180073a70(local_a8,local_88,"rain_center_bias");
  FUN_1800f4b80();
  FUN_18000f890(local_a8);
  FUN_180073a70(local_a8,local_88,"rain_sound");
  FUN_1800f4b80();
  FUN_18000f890(local_a8);
  FUN_180073a70(local_a8,local_88,&DAT_1806f8c7c);
  FUN_1800f4b80();
  FUN_18000f890(local_a8);
  FUN_180073a70(local_a8,local_88,"snow_primary");
  FUN_18000f890(local_a8);
  FUN_180073a70(local_a8,local_88,"snow_glow");
  FUN_18000f890(local_a8);
  FUN_180073a70(local_a8,local_88,"snow_speed");
  FUN_1800f4b80();
  FUN_18000f890(local_a8);
  FUN_180073a70(local_a8,local_88,"snow_radius");
  FUN_1800f4b80();
  FUN_18000f890(local_a8);
  FUN_180073a70(local_a8,local_88,"snow_density");
  FUN_1800f4b80();
  FUN_18000f890(local_a8);
  uVar3 = 0;
  do {
    uVar3 = uVar3 + 1;
    uVar1 = FUN_18004e4f0(local_48,uVar3);
    uVar2 = FUN_180073a70(local_68,local_88,"bloom_blur_weight");
    FUN_180066820(local_a8,uVar2,uVar1);
    FUN_1800f4b80();
    FUN_18000f890(local_a8);
    FUN_18000f890(local_68);
    FUN_18000f890(local_48);
    uVar1 = FUN_18004e4f0(local_a8,uVar3);
    uVar2 = FUN_180073a70(local_68,local_88,"bloom_blur_color");
    FUN_180066820(local_48,uVar2,uVar1);
    FUN_18000f890(local_48);
    FUN_18000f890(local_68);
    FUN_18000f890(local_a8);
  } while (uVar3 < 5);
  FUN_18000f890(local_88);
  return;
}



/* ===== 1801a8150 FUN_1801a8150 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801a8150(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_88 [32];
  undefined1 local_68 [32];
  undefined1 local_48 [32];
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_88;
  FUN_180073a70(local_48,param_2,"aimbot.");
  FUN_180073a70(local_68,local_48,"enabled");
  FUN_1800f4b80();
  FUN_18000f890(local_68);
  FUN_180073a70(local_68,local_48,"activation");
  FUN_1800f4b80();
  FUN_18000f890(local_68);
  FUN_180073a70(local_68,local_48,"conditions");
  FUN_18014cd20();
  FUN_18000f890(local_68);
  FUN_180073a70(local_68,local_48,"penetration_limit");
  FUN_1800f4b80();
  FUN_18000f890(local_68);
  FUN_180073a70(local_68,local_48,"smoke_threshold");
  FUN_1800f4b80();
  FUN_18000f890(local_68);
  FUN_180073a70(local_68,local_48,"flash_threshold");
  FUN_1800f4b80();
  FUN_18000f890(local_68);
  FUN_180073a70(local_68,local_48,"hitboxes");
  FUN_18014c990();
  FUN_18000f890(local_68);
  FUN_180073a70(local_68,local_48,"prefer_center");
  FUN_1800f4b80();
  FUN_18000f890(local_68);
  FUN_180073a70(local_68,local_48,"field_of_view");
  FUN_1800f4b80();
  FUN_18000f890(local_68);
  FUN_180073a70(local_68,local_48,"smoothing");
  FUN_1800f4b80();
  FUN_18000f890(local_68);
  FUN_180073a70(local_68,local_48,"first_bullet_delay");
  FUN_1800f4b80();
  FUN_18000f890(local_68);
  FUN_180073a70(local_68,local_48,"curve_factor");
  FUN_1800f4b80();
  FUN_18000f890(local_68);
  FUN_180073a70(local_68,local_48,"easing_out");
  FUN_1800f4b80();
  FUN_18000f890(local_68);
  FUN_180073a70(local_68,local_48,"reaction_time");
  FUN_1800f4b80();
  FUN_18000f890(local_68);
  FUN_180073a70(local_68,local_48,"target_switch_delay");
  FUN_1800f4b80();
  FUN_18000f890(local_68);
  FUN_180073a70(local_68,local_48,"min_damage");
  FUN_1800f4b80();
  FUN_18000f890(local_68);
  FUN_180073a70(local_68,local_48,"recoil_control");
  FUN_1800f4b80();
  FUN_18000f890(local_68);
  FUN_180073a70(local_68,local_48,"recoil.");
  FUN_1801a8930();
  FUN_18000f890(local_68);
  FUN_180073a70(local_68,local_48,"quick_scope");
  FUN_1800f4b80();
  FUN_18000f890(local_68);
  FUN_180073a70(local_68,local_48,"automatic_unzoom");
  FUN_1800f4b80();
  FUN_18000f890(local_68);
  FUN_180073a70(local_68,local_48,"quick_stop");
  FUN_1800f4b80();
  FUN_18000f890(local_68);
  FUN_180073a70(local_68,local_48,"full_stop");
  FUN_1800f4b80();
  FUN_18000f890(local_68);
  FUN_180073a70(local_68,local_48,"quick_stop_reaction_time");
  FUN_1800f4b80();
  FUN_18000f890(local_68);
  FUN_18000f890(local_48);
  FUN_180073a70(local_48,param_2,"triggerbot.");
  FUN_180073a70(local_68,local_48,"enabled");
  FUN_1800f4b80();
  FUN_18000f890(local_68);
  FUN_180073a70(local_68,local_48,"conditions");
  FUN_18014c990();
  FUN_18000f890(local_68);
  FUN_180073a70(local_68,local_48,"penetration_limit");
  FUN_1800f4b80();
  FUN_18000f890(local_68);
  FUN_180073a70(local_68,local_48,"smoke_threshold");
  FUN_1800f4b80();
  FUN_18000f890(local_68);
  FUN_180073a70(local_68,local_48,"flash_threshold");
  FUN_1800f4b80();
  FUN_18000f890(local_68);
  FUN_180073a70(local_68,local_48,"hitboxes");
  FUN_18014c990();
  FUN_18000f890(local_68);
  FUN_180073a70(local_68,local_48,"force_center");
  FUN_1800f4b80();
  FUN_18000f890(local_68);
  FUN_180073a70(local_68,local_48,"hit_chance");
  FUN_1800f4b80();
  FUN_18000f890(local_68);
  FUN_180073a70(local_68,local_48,"ignore_spread");
  FUN_1800f4b80();
  FUN_18000f890(local_68);
  FUN_180073a70(local_68,local_48,"legitimacy_threshold");
  FUN_1800f4b80();
  FUN_18000f890(local_68);
  FUN_180073a70(local_68,local_48,"min_damage");
  FUN_1800f4b80();
  FUN_18000f890(local_68);
  FUN_180073a70(local_68,local_48,"reaction_time");
  FUN_1800f4b80();
  FUN_18000f890(local_68);
  FUN_180073a70(local_68,local_48,"capture_delay");
  FUN_1800f4b80();
  FUN_18000f890(local_68);
  FUN_180073a70(local_68,local_48,"burst_time");
  FUN_1800f4b80();
  FUN_18000f890(local_68);
  FUN_180073a70(local_68,local_48,"quick_scope");
  FUN_1800f4b80();
  FUN_18000f890(local_68);
  FUN_180073a70(local_68,local_48,"automatic_unzoom");
  FUN_1800f4b80();
  FUN_18000f890(local_68);
  FUN_18000f890(local_48);
  return;
}



/* ===== 1801a8930 FUN_1801a8930 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801a8930(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [32];
  undefined1 local_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_58;
  FUN_180073a70(local_38,param_2,"start_bullet");
  FUN_1800f4b80();
  FUN_18000f890(local_38);
  FUN_180073a70(local_38,param_2,"vertical");
  FUN_1800f4b80();
  FUN_18000f890(local_38);
  FUN_180073a70(local_38,param_2,"horizontal");
  FUN_1800f4b80();
  FUN_18000f890(local_38);
  FUN_180073a70(local_38,param_2,"dampening");
  FUN_1800f4b80();
  FUN_18000f890(local_38);
  FUN_180073a70(local_38,param_2,"crosshair_recovery");
  FUN_1800f4b80();
  FUN_18000f890(local_38);
  return;
}



/* ===== 1801a8a60 FUN_1801a8a60 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801a8a60(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [32];
  longlong local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined1 local_78 [32];
  undefined1 local_58 [32];
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStack_d8;
  FUN_180073a70(local_78,param_2,".enabled");
  FUN_1800f4b80();
  FUN_18000f890(local_78);
  FUN_180073a70(local_78,param_2,".color");
  FUN_18000f890(local_78);
  puVar1 = (undefined8 *)FUN_180073a70(local_b8,param_2,".items");
  uVar4 = 0;
  do {
    uVar2 = FUN_18004e4f0(local_58,uVar4);
    uVar3 = FUN_180073a70(&local_98,puVar1,&DAT_1806eabcc);
    FUN_180066820(local_78,uVar3,uVar2);
    FUN_1800f4b80();
    FUN_18000f890(local_78);
    FUN_18000f890(&local_98);
    FUN_18000f890(local_58);
    uVar4 = uVar4 + 1;
  } while (uVar4 < 8);
  if ((ulonglong)puVar1[3] < 0x10) {
    puVar5 = puVar1;
  }
  else {
    puVar5 = (undefined8 *)*puVar1;
  }
  if (5 < (ulonglong)puVar1[2]) {
    puVar1 = (undefined8 *)
             thunk_FUN_1804e6890(puVar5,(undefined8 *)((longlong)puVar5 + 6),"binds.",6);
    if ((puVar1 != (undefined8 *)((longlong)puVar5 + 6)) && (puVar1 == puVar5)) goto LAB_1801a8bcb;
  }
  local_90 = 4;
  local_8c = 8;
  local_98 = param_3 + 0x14;
  FUN_1800fef30();
LAB_1801a8bcb:
  FUN_18000f890(local_b8);
  FUN_180073a70(local_b8,param_2,".icon_inverted");
  FUN_1800f4b80();
  FUN_18000f890(local_b8);
  FUN_180073a70(local_b8,param_2,".bar_background");
  FUN_1800f4b80();
  FUN_18000f890(local_b8);
  FUN_180073a70(local_b8,param_2,".bar_shadow");
  FUN_1800f4b80();
  FUN_18000f890(local_b8);
  FUN_180073a70(local_b8,param_2,".bar_shadow_color");
  FUN_18000f890(local_b8);
  FUN_180073a70(local_b8,param_2,".bar_format");
  FUN_1800f4b80();
  FUN_18000f890(local_b8);
  return;
}



/* ===== 1801a8ce0 FUN_1801a8ce0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801a8ce0(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [32];
  undefined1 local_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_58;
  FUN_180073a70(local_38,param_2,".fade_offset");
  FUN_1800f4b80();
  FUN_18000f890(local_38);
  FUN_180073a70(local_38,param_2,".gradient_opacity");
  FUN_1800f4b80();
  FUN_18000f890(local_38);
  FUN_180073a70(local_38,param_2,".outline_opacity");
  FUN_1800f4b80();
  FUN_18000f890(local_38);
  FUN_180073a70(local_38,param_2,".glow_opacity");
  FUN_1800f4b80();
  FUN_18000f890(local_38);
  FUN_180073a70(local_38,param_2,".glow");
  FUN_1800f4b80();
  FUN_18000f890(local_38);
  return;
}



/* ===== 1801a8e10 FUN_1801a8e10 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801a8e10(longlong *param_1,undefined8 param_2,longlong param_3)

{
  ulonglong uVar1;
  size_t _Size;
  longlong lVar2;
  int *piVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *_Buf1;
  undefined8 uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong *plVar9;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [32];
  undefined1 local_a8 [32];
  undefined1 local_88 [32];
  undefined1 local_68 [32];
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_e8;
  FUN_180073a70(local_a8,param_2,"ambience.");
  uVar5 = FUN_180073a70(local_c8,local_a8,"nightmode");
  FUN_1800f4660(param_1,uVar5,param_3);
  FUN_18000f890(local_c8);
  uVar5 = FUN_180073a70(local_c8,local_a8,"colorize_props");
  FUN_1800f4660(param_1,uVar5,param_3 + 0x18);
  FUN_18000f890(local_c8);
  uVar5 = FUN_180073a70(local_c8,local_a8,"fullbright");
  FUN_1800f4660(param_1,uVar5,param_3 + 0x2c);
  FUN_18000f890(local_c8);
  uVar5 = FUN_180073a70(local_c8,local_a8,"exposure");
  FUN_1800f4660(param_1,uVar5,param_3 + 0x40);
  FUN_18000f890(local_c8);
  uVar5 = FUN_180073a70(local_c8,local_a8,"sunlight");
  FUN_1800f4660(param_1,uVar5,param_3 + 0x5c);
  FUN_18000f890(local_c8);
  uVar5 = FUN_180073a70(local_c8,local_a8,"sun_override_rotation");
  FUN_1800f4660(param_1,uVar5,param_3 + 0x84);
  FUN_18000f890(local_c8);
  uVar5 = FUN_180073a70(local_c8,local_a8,&DAT_1806f8584);
  FUN_1800f4660(param_1,uVar5,param_3 + 0x94);
  FUN_18000f890(local_c8);
  uVar5 = FUN_180073a70(local_c8,local_a8,&DAT_1806f8588);
  FUN_1800f4660(param_1,uVar5,param_3 + 0x18c);
  FUN_18000f890(local_c8);
  uVar5 = FUN_180073a70(local_c8,local_a8,"fog_override_skybox");
  FUN_1800f4660(param_1,uVar5,param_3 + 0x1a8);
  FUN_18000f890(local_c8);
  uVar5 = FUN_180073a70(local_c8,local_a8,"fog_override_height");
  FUN_1800f4660(param_1,uVar5,param_3 + 0x1a9);
  FUN_18000f890(local_c8);
  uVar5 = FUN_180073a70(local_c8,local_a8,"bloom");
  FUN_1800f4660(param_1,uVar5,param_3 + 0x1b8);
  FUN_18000f890(local_c8);
  uVar5 = FUN_180073a70(local_c8,local_a8,"vignette");
  FUN_1800f4660(param_1,uVar5,param_3 + 0x234);
  FUN_18000f890(local_c8);
  uVar5 = FUN_180073a70(local_c8,local_a8,"contrast");
  FUN_1800f4660(param_1,uVar5,param_3 + 600);
  FUN_18000f890(local_c8);
  uVar5 = FUN_180073a70(local_c8,local_a8,"color_correction");
  FUN_1800f4660(param_1,uVar5,param_3 + 0x270);
  FUN_18000f890(local_c8);
  uVar5 = FUN_180073a70(local_c8,local_a8,"cc_grayscale");
  FUN_1800f4660(param_1,uVar5,param_3 + 0x294);
  FUN_18000f890(local_c8);
  uVar5 = FUN_180073a70(local_c8,local_a8,&DAT_1806f85f0);
  FUN_1800f4660(param_1,uVar5,param_3 + 0x295);
  FUN_18000f890(local_c8);
  uVar5 = FUN_180073a70(local_c8,local_a8,&DAT_1806f85cc);
  FUN_1800f4660(param_1,uVar5,param_3 + 0x2ac);
  FUN_18000f890(local_c8);
  uVar5 = FUN_180073a70(local_c8,local_a8,"wetness");
  FUN_1800f4660(param_1,uVar5,param_3 + 0x2c4);
  FUN_18000f890(local_c8);
  uVar5 = FUN_180073a70(local_c8,local_a8,"wetness_ignore_sky");
  FUN_1800f4660(param_1,uVar5,param_3 + 0x2d4);
  FUN_18000f890(local_c8);
  uVar5 = FUN_180073a70(local_c8,local_a8,"remove_fog");
  FUN_1800f4660(param_1,uVar5,param_3 + 0x364);
  FUN_18000f890(local_c8);
  uVar5 = FUN_180073a70(local_c8,local_a8,"remove_sunlight");
  FUN_1800f4660(param_1,uVar5,param_3 + 0x365);
  FUN_18000f890(local_c8);
  uVar5 = FUN_180073a70(local_c8,local_a8,"remove_viewmodel_sunlight");
  FUN_1800f4660(param_1,uVar5,param_3 + 0x366);
  FUN_18000f890(local_c8);
  uVar5 = FUN_180073a70(local_c8,local_a8,"remove_barnlights");
  FUN_1800f4660(param_1,uVar5,param_3 + 0x367);
  FUN_18000f890(local_c8);
  uVar5 = FUN_180073a70(local_c8,local_a8,"remove_baked_shadows");
  FUN_1800f4660(param_1,uVar5,param_3 + 0x368);
  FUN_18000f890(local_c8);
  uVar5 = FUN_180073a70(local_c8,local_a8,"remove_dynamic_shadows");
  FUN_1800f4660(param_1,uVar5,param_3 + 0x369);
  FUN_18000f890(local_c8);
  uVar5 = FUN_180073a70(local_c8,local_a8,"remove_post_processing");
  FUN_1800f4660(param_1,uVar5,param_3 + 0x36a);
  FUN_18000f890(local_c8);
  uVar5 = FUN_180073a70(local_c8,local_a8,"remove_skybox_2d");
  FUN_1800f4660(param_1,uVar5,param_3 + 0x36b);
  FUN_18000f890(local_c8);
  uVar5 = FUN_180073a70(local_c8,local_a8,"remove_skybox_3d");
  FUN_1800f4660(param_1,uVar5,param_3 + 0x36c);
  FUN_18000f890(local_c8);
  uVar5 = FUN_180073a70(local_c8,local_a8,"remove_cable_particles");
  FUN_1800f4660(param_1,uVar5,param_3 + 0x36d);
  FUN_18000f890(local_c8);
  uVar5 = FUN_180073a70(local_c8,local_a8,"nightmode_color");
  FUN_180154fa0(param_1,uVar5,param_3 + 4);
  FUN_18000f890(local_c8);
  uVar5 = FUN_180073a70(local_c8,local_a8,"overlay_transparency");
  FUN_1800f4760(param_1,uVar5,param_3 + 0x14);
  FUN_18000f890(local_c8);
  uVar5 = FUN_180073a70(local_c8,local_a8,"props_color");
  FUN_180154fa0(param_1,uVar5,param_3 + 0x1c);
  FUN_18000f890(local_c8);
  uVar5 = FUN_180073a70(local_c8,local_a8,"fullbright_color");
  FUN_180154fa0(param_1,uVar5,param_3 + 0x30);
  FUN_18000f890(local_c8);
  uVar5 = FUN_180073a70(local_c8,local_a8,"adaptation");
  FUN_1800f4760(param_1,uVar5,param_3 + 0x44);
  FUN_18000f890(local_c8);
  uVar5 = FUN_180073a70(local_c8,local_a8,"compensation");
  FUN_1800f4840(param_1,uVar5,param_3 + 0x48);
  FUN_18000f890(local_c8);
  uVar5 = FUN_180073a70(local_c8,local_a8,"exposure_min");
  FUN_1800f4840(param_1,uVar5,param_3 + 0x4c);
  FUN_18000f890(local_c8);
  uVar5 = FUN_180073a70(local_c8,local_a8,"exposure_max");
  FUN_1800f4840(param_1,uVar5,param_3 + 0x50);
  FUN_18000f890(local_c8);
  uVar5 = FUN_180073a70(local_c8,local_a8,"adaptation_speed");
  FUN_1800f4760(param_1,uVar5,param_3 + 0x54);
  FUN_18000f890(local_c8);
  uVar5 = FUN_180073a70(local_c8,local_a8,"fixed_exposure");
  FUN_1800f4760(param_1,uVar5,param_3 + 0x58);
  FUN_18000f890(local_c8);
  uVar5 = FUN_180073a70(local_c8,local_a8,"sun_illumination");
  FUN_180154fa0(param_1,uVar5,param_3 + 0x60);
  FUN_18000f890(local_c8);
  uVar5 = FUN_180073a70(local_c8,local_a8,"sun_reflection");
  FUN_180154fa0(param_1,uVar5,param_3 + 0x70);
  FUN_18000f890(local_c8);
  uVar5 = FUN_180073a70(local_c8,local_a8,"sun_method");
  FUN_1800f4760(param_1,uVar5,param_3 + 0x80);
  FUN_18000f890(local_c8);
  uVar5 = FUN_180073a70(local_c8,local_a8,"sun_pitch");
  FUN_1800f4760(param_1,uVar5,param_3 + 0x88);
  FUN_18000f890(local_c8);
  uVar5 = FUN_180073a70(local_c8,local_a8,"sun_yaw");
  FUN_1800f4760(param_1,uVar5,param_3 + 0x8c);
  FUN_18000f890(local_c8);
  uVar5 = FUN_180073a70(local_c8,local_a8,"volumetric_brightness");
  FUN_1800f4760(param_1,uVar5,param_3 + 0x90);
  FUN_18000f890(local_c8);
  uVar5 = FUN_180073a70(local_c8,local_a8,"sky_color");
  FUN_180154fa0(param_1,uVar5,param_3 + 0x98);
  FUN_18000f890(local_c8);
  uVar5 = FUN_180073a70(local_c8,local_a8,"clouds_color");
  FUN_180154fa0(param_1,uVar5,param_3 + 0xa8);
  FUN_18000f890(local_c8);
  uVar5 = FUN_180073a70(local_c8,local_a8,"sun_color");
  FUN_180154fa0(param_1,uVar5,param_3 + 0xb8);
  FUN_18000f890(local_c8);
  uVar5 = FUN_180073a70(local_c8,local_a8,"skybox");
  FUN_1800f4760(param_1,uVar5,param_3 + 200);
  FUN_18000f890(local_c8);
  _Buf1 = (undefined8 *)FUN_180073a70(local_c8,local_a8,"skybox_custom");
  if ((char)param_1[3] == '\0') {
    plVar9 = (longlong *)*param_1;
    plVar7 = param_1;
    if (0xf < (ulonglong)plVar9[3]) {
      plVar7 = plVar9;
    }
    _Size = _Buf1[2];
    if (0xf < (ulonglong)_Buf1[3]) {
      _Buf1 = (undefined8 *)*_Buf1;
    }
    if (_Size == plVar9[2]) {
      if (_Size != 0) {
        iVar4 = memcmp(_Buf1,(void *)*plVar7,_Size);
        if (iVar4 != 0) goto LAB_1801a97f4;
      }
      *(undefined1 *)(param_1 + 3) = 1;
      if ((undefined4 *)param_1[1] == (undefined4 *)0x0) {
        piVar3 = (int *)param_1[2];
        if (*piVar3 != 6) goto LAB_1801a97f4;
        plVar9 = (longlong *)(piVar3 + 0x12);
        if (0xf < *(ulonglong *)(piVar3 + 0x18)) {
          plVar9 = (longlong *)*plVar9;
        }
        snprintf(param_3 + 0xcc,0xc0,&DAT_1806d3198,plVar9);
      }
      else {
        *(undefined4 *)param_1[1] = 6;
        lVar2 = param_1[1];
        uVar5 = FUN_180512ae0(param_3 + 0xcc,0xc0);
        FUN_180029840(lVar2 + 0x48,param_3 + 0xcc,uVar5);
      }
      *(undefined1 *)((longlong)param_1 + 0x19) = 1;
    }
  }
LAB_1801a97f4:
  FUN_18000f890(local_c8);
  uVar5 = FUN_180073a70(local_c8,local_a8,"fog_color");
  FUN_180154fa0(param_1,uVar5,param_3 + 400);
  FUN_18000f890(local_c8);
  uVar5 = FUN_180073a70(local_c8,local_a8,"fog_distance");
  FUN_1800f4760(param_1,uVar5,param_3 + 0x1a0);
  FUN_18000f890(local_c8);
  uVar5 = FUN_180073a70(local_c8,local_a8,"fog_exponent");
  FUN_1800f4840(param_1,uVar5,param_3 + 0x1a4);
  FUN_18000f890(local_c8);
  uVar5 = FUN_180073a70(local_c8,local_a8,"fog_height_start");
  FUN_1800f4760(param_1,uVar5,param_3 + 0x1ac);
  FUN_18000f890(local_c8);
  uVar5 = FUN_180073a70(local_c8,local_a8,"fog_height_end");
  FUN_1800f4760(param_1,uVar5,param_3 + 0x1b0);
  FUN_18000f890(local_c8);
  uVar5 = FUN_180073a70(local_c8,local_a8,"fog_height_exponent");
  FUN_1800f4840(param_1,uVar5,param_3 + 0x1b4);
  FUN_18000f890(local_c8);
  uVar5 = FUN_180073a70(local_c8,local_a8,"bloom_strength");
  FUN_1800f4760(param_1,uVar5,param_3 + 0x1bc);
  FUN_18000f890(local_c8);
  uVar5 = FUN_180073a70(local_c8,local_a8,"bloom_screen_strength");
  FUN_1800f4760(param_1,uVar5,param_3 + 0x1c0);
  FUN_18000f890(local_c8);
  uVar5 = FUN_180073a70(local_c8,local_a8,"bloom_blur_strength");
  FUN_1800f4760(param_1,uVar5,param_3 + 0x1c4);
  FUN_18000f890(local_c8);
  uVar5 = FUN_180073a70(local_c8,local_a8,"bloom_threshold");
  FUN_1800f4760(param_1,uVar5,param_3 + 0x1c8);
  FUN_18000f890(local_c8);
  uVar5 = FUN_180073a70(local_c8,local_a8,"bloom_threshold_width");
  FUN_1800f4760(param_1,uVar5,param_3 + 0x1cc);
  FUN_18000f890(local_c8);
  uVar5 = FUN_180073a70(local_c8,local_a8,"vignette_color");
  FUN_180154fa0(param_1,uVar5,param_3 + 0x238);
  FUN_18000f890(local_c8);
  uVar5 = FUN_180073a70(local_c8,local_a8,"vignette_strength");
  FUN_1800f4760(param_1,uVar5,param_3 + 0x248);
  FUN_18000f890(local_c8);
  uVar5 = FUN_180073a70(local_c8,local_a8,"vignette_radius");
  FUN_1800f4760(param_1,uVar5,param_3 + 0x24c);
  FUN_18000f890(local_c8);
  uVar5 = FUN_180073a70(local_c8,local_a8,"vignette_roundness");
  FUN_1800f4760(param_1,uVar5,param_3 + 0x250);
  FUN_18000f890(local_c8);
  uVar5 = FUN_180073a70(local_c8,local_a8,"vignette_feather");
  FUN_1800f4760(param_1,uVar5,param_3 + 0x254);
  FUN_18000f890(local_c8);
  uVar5 = FUN_180073a70(local_c8,local_a8,"contrast_strength");
  FUN_1800f4760(param_1,uVar5,param_3 + 0x25c);
  FUN_18000f890(local_c8);
  uVar5 = FUN_180073a70(local_c8,local_a8,"contrast_edge");
  FUN_1800f4760(param_1,uVar5,param_3 + 0x260);
  FUN_18000f890(local_c8);
  uVar5 = FUN_180073a70(local_c8,local_a8,"contrast_vignette_start");
  FUN_1800f4760(param_1,uVar5,param_3 + 0x264);
  FUN_18000f890(local_c8);
  uVar5 = FUN_180073a70(local_c8,local_a8,"contrast_vignette_end");
  FUN_1800f4760(param_1,uVar5,param_3 + 0x268);
  FUN_18000f890(local_c8);
  uVar5 = FUN_180073a70(local_c8,local_a8,"contrast_vignette_blur");
  FUN_1800f4760(param_1,uVar5,param_3 + 0x26c);
  FUN_18000f890(local_c8);
  uVar5 = FUN_180073a70(local_c8,local_a8,"tone_curve");
  FUN_1800f4760(param_1,uVar5,param_3 + 0x274);
  FUN_18000f890(local_c8);
  uVar5 = FUN_180073a70(local_c8,local_a8,"cc_contrast");
  FUN_1800f4760(param_1,uVar5,param_3 + 0x278);
  FUN_18000f890(local_c8);
  uVar5 = FUN_180073a70(local_c8,local_a8,"cc_highlights");
  FUN_1800f4760(param_1,uVar5,param_3 + 0x27c);
  FUN_18000f890(local_c8);
  uVar5 = FUN_180073a70(local_c8,local_a8,"cc_shadows");
  FUN_1800f4760(param_1,uVar5,param_3 + 0x280);
  FUN_18000f890(local_c8);
  uVar5 = FUN_180073a70(local_c8,local_a8,"cc_saturation");
  FUN_1800f4760(param_1,uVar5,param_3 + 0x284);
  FUN_18000f890(local_c8);
  uVar5 = FUN_180073a70(local_c8,local_a8,"cc_vibrance");
  FUN_1800f4760(param_1,uVar5,param_3 + 0x288);
  FUN_18000f890(local_c8);
  uVar5 = FUN_180073a70(local_c8,local_a8,"cc_temperature");
  FUN_1800f4760(param_1,uVar5,param_3 + 0x28c);
  FUN_18000f890(local_c8);
  uVar5 = FUN_180073a70(local_c8,local_a8,"cc_tint");
  FUN_1800f4760(param_1,uVar5,param_3 + 0x290);
  FUN_18000f890(local_c8);
  uVar5 = FUN_180073a70(local_c8,local_a8,"dof_mode");
  FUN_1800f4760(param_1,uVar5,param_3 + 0x298);
  FUN_18000f890(local_c8);
  uVar5 = FUN_180073a70(local_c8,local_a8,"dof_quality");
  FUN_1800f4760(param_1,uVar5,param_3 + 0x29c);
  FUN_18000f890(local_c8);
  uVar5 = FUN_180073a70(local_c8,local_a8,"dof_focus_distance");
  FUN_1800f4760(param_1,uVar5,param_3 + 0x2a0);
  FUN_18000f890(local_c8);
  uVar5 = FUN_180073a70(local_c8,local_a8,"dof_focus_speed");
  FUN_1800f4760(param_1,uVar5,param_3 + 0x2a4);
  FUN_18000f890(local_c8);
  uVar5 = FUN_180073a70(local_c8,local_a8,"dof_focus_range");
  FUN_1800f4760(param_1,uVar5,param_3 + 0x2a8);
  FUN_18000f890(local_c8);
  uVar5 = FUN_180073a70(local_c8,local_a8,"wind_direction");
  FUN_1800f4760(param_1,uVar5,param_3 + 0x2b0);
  FUN_18000f890(local_c8);
  uVar5 = FUN_180073a70(local_c8,local_a8,"wind_strength");
  FUN_1800f4840(param_1,uVar5,param_3 + 0x2b4);
  FUN_18000f890(local_c8);
  uVar5 = FUN_180073a70(local_c8,local_a8,"wetness_rain");
  FUN_1800f4760(param_1,uVar5,param_3 + 0x2c8);
  FUN_18000f890(local_c8);
  uVar5 = FUN_180073a70(local_c8,local_a8,"wetness_coverage");
  FUN_1800f4760(param_1,uVar5,param_3 + 0x2cc);
  FUN_18000f890(local_c8);
  uVar5 = FUN_180073a70(local_c8,local_a8,"wetness_drying");
  FUN_1800f4760(param_1,uVar5,param_3 + 0x2d0);
  FUN_18000f890(local_c8);
  uVar5 = FUN_180073a70(local_c8,local_a8,"wind_particle_strength");
  FUN_1800f4840(param_1,uVar5,param_3 + 0x2b8);
  FUN_18000f890(local_c8);
  uVar5 = FUN_180073a70(local_c8,local_a8,"wind_turbulence");
  FUN_1800f4840(param_1,uVar5,param_3 + 700);
  FUN_18000f890(local_c8);
  uVar5 = FUN_180073a70(local_c8,local_a8,"wind_max_tilt");
  FUN_1800f4840(param_1,uVar5,param_3 + 0x2c0);
  FUN_18000f890(local_c8);
  uVar5 = FUN_180073a70(local_c8,local_a8,"thunder");
  FUN_1800f4660(param_1,uVar5,param_3 + 0x2d5);
  FUN_18000f890(local_c8);
  uVar5 = FUN_180073a70(local_c8,local_a8,"thunder_primary");
  FUN_180154fa0(param_1,uVar5,param_3 + 0x2d8);
  FUN_18000f890(local_c8);
  uVar5 = FUN_180073a70(local_c8,local_a8,"thunder_glow");
  FUN_180154fa0(param_1,uVar5,param_3 + 0x2e8);
  FUN_18000f890(local_c8);
  uVar5 = FUN_180073a70(local_c8,local_a8,"thunder_interval");
  FUN_1800f4840(param_1,uVar5,param_3 + 0x2f8);
  FUN_18000f890(local_c8);
  uVar5 = FUN_180073a70(local_c8,local_a8,"thunder_duration");
  FUN_1800f4840(param_1,uVar5,param_3 + 0x2fc);
  FUN_18000f890(local_c8);
  uVar5 = FUN_180073a70(local_c8,local_a8,"thunder_sound");
  FUN_1800f4660(param_1,uVar5,param_3 + 0x300);
  FUN_18000f890(local_c8);
  uVar5 = FUN_180073a70(local_c8,local_a8,"thunder_on_kill");
  FUN_1800f4660(param_1,uVar5,param_3 + 0x301);
  FUN_18000f890(local_c8);
  uVar5 = FUN_180073a70(local_c8,local_a8,&DAT_1806f8bfc);
  FUN_1800f4660(param_1,uVar5,param_3 + 0x302);
  FUN_18000f890(local_c8);
  uVar5 = FUN_180073a70(local_c8,local_a8,"rain_primary");
  FUN_180154fa0(param_1,uVar5,param_3 + 0x304);
  FUN_18000f890(local_c8);
  uVar5 = FUN_180073a70(local_c8,local_a8,"rain_glow");
  FUN_180154fa0(param_1,uVar5,param_3 + 0x314);
  FUN_18000f890(local_c8);
  uVar5 = FUN_180073a70(local_c8,local_a8,"rain_speed");
  FUN_1800f4760(param_1,uVar5,param_3 + 0x324);
  FUN_18000f890(local_c8);
  uVar5 = FUN_180073a70(local_c8,local_a8,"rain_radius");
  FUN_1800f4760(param_1,uVar5,param_3 + 0x328);
  FUN_18000f890(local_c8);
  uVar5 = FUN_180073a70(local_c8,local_a8,"rain_density");
  FUN_1800f4760(param_1,uVar5,param_3 + 0x32c);
  FUN_18000f890(local_c8);
  uVar5 = FUN_180073a70(local_c8,local_a8,"rain_center_bias");
  FUN_1800f4760(param_1,uVar5,param_3 + 0x330);
  FUN_18000f890(local_c8);
  uVar5 = FUN_180073a70(local_c8,local_a8,"rain_sound");
  FUN_1800f4660(param_1,uVar5,param_3 + 0x334);
  FUN_18000f890(local_c8);
  uVar5 = FUN_180073a70(local_c8,local_a8,&DAT_1806f8c7c);
  FUN_1800f4660(param_1,uVar5,param_3 + 0x335);
  FUN_18000f890(local_c8);
  uVar5 = FUN_180073a70(local_c8,local_a8,"snow_primary");
  FUN_180154fa0(param_1,uVar5,param_3 + 0x338);
  FUN_18000f890(local_c8);
  uVar5 = FUN_180073a70(local_c8,local_a8,"snow_glow");
  FUN_180154fa0(param_1,uVar5,param_3 + 0x348);
  FUN_18000f890(local_c8);
  uVar5 = FUN_180073a70(local_c8,local_a8,"snow_speed");
  FUN_1800f4760(param_1,uVar5,param_3 + 0x358);
  FUN_18000f890(local_c8);
  uVar5 = FUN_180073a70(local_c8,local_a8,"snow_radius");
  FUN_1800f4760(param_1,uVar5,param_3 + 0x35c);
  FUN_18000f890(local_c8);
  uVar5 = FUN_180073a70(local_c8,local_a8,"snow_density");
  FUN_1800f4760(param_1,uVar5,param_3 + 0x360);
  FUN_18000f890(local_c8);
  uVar8 = 0;
  do {
    uVar1 = uVar8 + 1;
    uVar5 = FUN_18004e4f0(local_68,uVar1);
    uVar6 = FUN_180073a70(local_88,local_a8,"bloom_blur_weight");
    uVar5 = FUN_180066820(local_c8,uVar6,uVar5);
    FUN_1800f4760(param_1,uVar5,param_3 + 0x1d0 + uVar8 * 4);
    FUN_18000f890(local_c8);
    FUN_18000f890(local_88);
    FUN_18000f890(local_68);
    uVar5 = FUN_18004e4f0(local_c8,uVar1);
    uVar6 = FUN_180073a70(local_88,local_a8,"bloom_blur_color");
    uVar5 = FUN_180066820(local_68,uVar6,uVar5);
    FUN_180154fa0(param_1,uVar5,param_3 + 0x1e4 + uVar8 * 0x10);
    FUN_18000f890(local_68);
    FUN_18000f890(local_88);
    FUN_18000f890(local_c8);
    uVar8 = uVar1;
  } while (uVar1 < 5);
  FUN_18000f890(local_a8);
  return;
}



/* ===== 1801aa4c0 FUN_1801aa4c0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801aa4c0(undefined8 param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  undefined8 uVar1;
  undefined1 auStack_98 [32];
  undefined1 local_78 [32];
  undefined1 local_58 [32];
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStack_98;
  FUN_180073a70(local_58,param_2,"aimbot.");
  uVar1 = FUN_180073a70(local_78,local_58,"enabled");
  FUN_1800f4660(param_1,uVar1,param_3);
  FUN_18000f890(local_78);
  uVar1 = FUN_180073a70(local_78,local_58,"activation");
  FUN_1800f4760(param_1,uVar1,param_3 + 4);
  FUN_18000f890(local_78);
  uVar1 = FUN_180073a70(local_78,local_58,"conditions");
  FUN_1801553c0(param_1,uVar1,param_3 + 8);
  FUN_18000f890(local_78);
  uVar1 = FUN_180073a70(local_78,local_58,"penetration_limit");
  FUN_1800f4760(param_1,uVar1,param_3 + 0x10);
  FUN_18000f890(local_78);
  uVar1 = FUN_180073a70(local_78,local_58,"smoke_threshold");
  FUN_1800f4760(param_1,uVar1,param_3 + 0x14);
  FUN_18000f890(local_78);
  uVar1 = FUN_180073a70(local_78,local_58,"flash_threshold");
  FUN_1800f4760(param_1,uVar1,param_3 + 0x18);
  FUN_18000f890(local_78);
  uVar1 = FUN_180073a70(local_78,local_58,"hitboxes");
  FUN_180155090(param_1,uVar1,param_3 + 0x1c);
  FUN_18000f890(local_78);
  uVar1 = FUN_180073a70(local_78,local_58,"prefer_center");
  FUN_1800f4660(param_1,uVar1,param_3 + 0x21);
  FUN_18000f890(local_78);
  uVar1 = FUN_180073a70(local_78,local_58,"field_of_view");
  FUN_1800f4840(param_1,uVar1,param_3 + 0x24);
  FUN_18000f890(local_78);
  uVar1 = FUN_180073a70(local_78,local_58,"smoothing");
  FUN_1800f4760(param_1,uVar1,param_3 + 0x28);
  FUN_18000f890(local_78);
  uVar1 = FUN_180073a70(local_78,local_58,"first_bullet_delay");
  FUN_1800f4660(param_1,uVar1,param_3 + 0x2c);
  FUN_18000f890(local_78);
  uVar1 = FUN_180073a70(local_78,local_58,"curve_factor");
  FUN_1800f4760(param_1,uVar1,param_3 + 0x30);
  FUN_18000f890(local_78);
  uVar1 = FUN_180073a70(local_78,local_58,"easing_out");
  FUN_1800f4760(param_1,uVar1,param_3 + 0x34);
  FUN_18000f890(local_78);
  uVar1 = FUN_180073a70(local_78,local_58,"reaction_time");
  FUN_1800f4760(param_1,uVar1,param_3 + 0x38);
  FUN_18000f890(local_78);
  uVar1 = FUN_180073a70(local_78,local_58,"target_switch_delay");
  FUN_1800f4760(param_1,uVar1,param_3 + 0x3c);
  FUN_18000f890(local_78);
  uVar1 = FUN_180073a70(local_78,local_58,"min_damage");
  FUN_1800f4760(param_1,uVar1,param_3 + 0x40);
  FUN_18000f890(local_78);
  uVar1 = FUN_180073a70(local_78,local_58,"recoil_control");
  FUN_1800f4660(param_1,uVar1,param_3 + 0x44);
  FUN_18000f890(local_78);
  uVar1 = FUN_180073a70(local_78,local_58,"recoil.");
  FUN_1801aac00(param_1,uVar1,param_3 + 0x48);
  FUN_18000f890(local_78);
  uVar1 = FUN_180073a70(local_78,local_58,"quick_scope");
  FUN_1800f4660(param_1,uVar1,param_3 + 0x5c);
  FUN_18000f890(local_78);
  uVar1 = FUN_180073a70(local_78,local_58,"automatic_unzoom");
  FUN_1800f4660(param_1,uVar1,param_3 + 0x5d);
  FUN_18000f890(local_78);
  uVar1 = FUN_180073a70(local_78,local_58,"quick_stop");
  FUN_1800f4660(param_1,uVar1,param_3 + 0x5e);
  FUN_18000f890(local_78);
  uVar1 = FUN_180073a70(local_78,local_58,"full_stop");
  FUN_1800f4660(param_1,uVar1,param_3 + 0x5f);
  FUN_18000f890(local_78);
  uVar1 = FUN_180073a70(local_78,local_58,"quick_stop_reaction_time");
  FUN_1800f4760(param_1,uVar1,param_3 + 0x60);
  FUN_18000f890(local_78);
  FUN_18000f890(local_58);
  FUN_180073a70(local_58,param_2,"triggerbot.");
  uVar1 = FUN_180073a70(local_78,local_58,"enabled");
  FUN_1800f4660(param_1,uVar1,param_4);
  FUN_18000f890(local_78);
  uVar1 = FUN_180073a70(local_78,local_58,"conditions");
  FUN_180155090(param_1,uVar1,param_4 + 1);
  FUN_18000f890(local_78);
  uVar1 = FUN_180073a70(local_78,local_58,"penetration_limit");
  FUN_1800f4760(param_1,uVar1,param_4 + 8);
  FUN_18000f890(local_78);
  uVar1 = FUN_180073a70(local_78,local_58,"smoke_threshold");
  FUN_1800f4760(param_1,uVar1,param_4 + 0xc);
  FUN_18000f890(local_78);
  uVar1 = FUN_180073a70(local_78,local_58,"flash_threshold");
  FUN_1800f4760(param_1,uVar1,param_4 + 0x10);
  FUN_18000f890(local_78);
  uVar1 = FUN_180073a70(local_78,local_58,"hitboxes");
  FUN_180155090(param_1,uVar1,param_4 + 0x14);
  FUN_18000f890(local_78);
  uVar1 = FUN_180073a70(local_78,local_58,"force_center");
  FUN_1800f4660(param_1,uVar1,param_4 + 0x19);
  FUN_18000f890(local_78);
  uVar1 = FUN_180073a70(local_78,local_58,"hit_chance");
  FUN_1800f4760(param_1,uVar1,param_4 + 0x1c);
  FUN_18000f890(local_78);
  uVar1 = FUN_180073a70(local_78,local_58,"ignore_spread");
  FUN_1800f4660(param_1,uVar1,param_4 + 0x20);
  FUN_18000f890(local_78);
  uVar1 = FUN_180073a70(local_78,local_58,"legitimacy_threshold");
  FUN_1800f4760(param_1,uVar1,param_4 + 0x24);
  FUN_18000f890(local_78);
  uVar1 = FUN_180073a70(local_78,local_58,"min_damage");
  FUN_1800f4760(param_1,uVar1,param_4 + 0x28);
  FUN_18000f890(local_78);
  uVar1 = FUN_180073a70(local_78,local_58,"reaction_time");
  FUN_1800f4760(param_1,uVar1,param_4 + 0x2c);
  FUN_18000f890(local_78);
  uVar1 = FUN_180073a70(local_78,local_58,"capture_delay");
  FUN_1800f4760(param_1,uVar1,param_4 + 0x30);
  FUN_18000f890(local_78);
  uVar1 = FUN_180073a70(local_78,local_58,"burst_time");
  FUN_1800f4760(param_1,uVar1,param_4 + 0x34);
  FUN_18000f890(local_78);
  uVar1 = FUN_180073a70(local_78,local_58,"quick_scope");
  FUN_1800f4660(param_1,uVar1,param_4 + 0x38);
  FUN_18000f890(local_78);
  uVar1 = FUN_180073a70(local_78,local_58,"automatic_unzoom");
  FUN_1800f4660(param_1,uVar1,param_4 + 0x39);
  FUN_18000f890(local_78);
  FUN_18000f890(local_58);
  return;
}



/* ===== 1801aac00 FUN_1801aac00 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801aac00(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined1 local_48 [32];
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_68;
  uVar1 = FUN_180073a70(local_48,param_2,"start_bullet");
  FUN_1800f4760(param_1,uVar1,param_3);
  FUN_18000f890(local_48);
  uVar1 = FUN_180073a70(local_48,param_2,"vertical");
  FUN_1800f4760(param_1,uVar1,param_3 + 4);
  FUN_18000f890(local_48);
  uVar1 = FUN_180073a70(local_48,param_2,"horizontal");
  FUN_1800f4760(param_1,uVar1,param_3 + 8);
  FUN_18000f890(local_48);
  uVar1 = FUN_180073a70(local_48,param_2,"dampening");
  FUN_1800f4760(param_1,uVar1,param_3 + 0xc);
  FUN_18000f890(local_48);
  uVar1 = FUN_180073a70(local_48,param_2,"crosshair_recovery");
  FUN_1800f4660(param_1,uVar1,param_3 + 0x10);
  FUN_18000f890(local_48);
  return;
}



/* ===== 1801aad20 FUN_1801aad20 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801aad20(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  size_t _Size;
  longlong lVar2;
  int *piVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *_Buf1;
  longlong *plVar6;
  undefined1 auStack_a8 [32];
  longlong local_88;
  longlong local_78 [2];
  undefined1 local_68 [32];
  undefined1 local_48 [32];
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_a8;
  uVar5 = FUN_180073a70(local_48,param_2,".enabled");
  FUN_1800f4660(param_1,uVar5,param_3);
  FUN_18000f890(local_48);
  uVar5 = FUN_180073a70(local_48,param_2,".color");
  FUN_180154fa0(param_1,uVar5,param_3 + 4);
  FUN_18000f890(local_48);
  _Buf1 = (undefined8 *)FUN_180073a70(local_68,param_2,".items");
  if ((char)param_1[3] == '\0') {
    plVar1 = (longlong *)*param_1;
    plVar6 = param_1;
    if (0xf < (ulonglong)plVar1[3]) {
      plVar6 = plVar1;
    }
    _Size = _Buf1[2];
    if (0xf < (ulonglong)_Buf1[3]) {
      _Buf1 = (undefined8 *)*_Buf1;
    }
    if (_Size == plVar1[2]) {
      if (_Size != 0) {
        iVar4 = memcmp(_Buf1,(void *)*plVar6,_Size);
        if (iVar4 != 0) goto LAB_1801aaf2e;
      }
      *(undefined1 *)(param_1 + 3) = 1;
      if ((undefined4 *)param_1[1] == (undefined4 *)0x0) {
        piVar3 = (int *)param_1[2];
        if (*piVar3 != 5) goto LAB_1801aaf2e;
        if (*(longlong *)(piVar3 + 0x10) != 0) {
          *(byte *)(param_3 + 0x14) = (byte)**(undefined4 **)(piVar3 + 10) & 1;
          if (1 < *(ulonglong *)(param_1[2] + 0x40)) {
            *(bool *)(param_3 + 0x15) = (**(byte **)(param_1[2] + 0x28) & 2) != 0;
            if (2 < *(ulonglong *)(param_1[2] + 0x40)) {
              *(bool *)(param_3 + 0x16) = (**(byte **)(param_1[2] + 0x28) & 4) != 0;
              if (3 < *(ulonglong *)(param_1[2] + 0x40)) {
                *(bool *)(param_3 + 0x17) = (**(byte **)(param_1[2] + 0x28) & 8) != 0;
                if (4 < *(ulonglong *)(param_1[2] + 0x40)) {
                  *(bool *)(param_3 + 0x18) = (**(byte **)(param_1[2] + 0x28) & 0x10) != 0;
                  if (5 < *(ulonglong *)(param_1[2] + 0x40)) {
                    *(bool *)(param_3 + 0x19) = (**(byte **)(param_1[2] + 0x28) & 0x20) != 0;
                    if (6 < *(ulonglong *)(param_1[2] + 0x40)) {
                      *(bool *)(param_3 + 0x1a) = (**(byte **)(param_1[2] + 0x28) & 0x40) != 0;
                      if (7 < *(ulonglong *)(param_1[2] + 0x40)) {
                        *(bool *)(param_3 + 0x1b) = (**(byte **)(param_1[2] + 0x28) & 0x80) != 0;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      else {
        *(undefined4 *)param_1[1] = 5;
        lVar2 = param_1[1];
        local_88 = param_3 + 0x1c;
        local_78[0] = *(longlong *)(lVar2 + 0x28);
        if (local_78[0] != *(longlong *)(lVar2 + 0x30)) {
          *(longlong *)(lVar2 + 0x30) = local_78[0];
        }
        *(undefined8 *)(lVar2 + 0x40) = 0;
        local_78[1] = 0;
        FUN_1801c2bd0((longlong *)(lVar2 + 0x28),local_48,local_78,param_3 + 0x14);
      }
      *(undefined1 *)((longlong)param_1 + 0x19) = 1;
    }
  }
LAB_1801aaf2e:
  FUN_18000f890(local_68);
  uVar5 = FUN_180073a70(local_68,param_2,".icon_inverted");
  FUN_1800f4660(param_1,uVar5,param_3 + 0x1c);
  FUN_18000f890(local_68);
  uVar5 = FUN_180073a70(local_68,param_2,".bar_background");
  FUN_1800f4660(param_1,uVar5,param_3 + 0x1d);
  FUN_18000f890(local_68);
  uVar5 = FUN_180073a70(local_68,param_2,".bar_shadow");
  FUN_1800f4660(param_1,uVar5,param_3 + 0x1e);
  FUN_18000f890(local_68);
  uVar5 = FUN_180073a70(local_68,param_2,".bar_shadow_color");
  FUN_180154fa0(param_1,uVar5,param_3 + 0x20);
  FUN_18000f890(local_68);
  uVar5 = FUN_180073a70(local_68,param_2,".bar_format");
  FUN_1800f4760(param_1,uVar5,param_3 + 0x30);
  FUN_18000f890(local_68);
  return;
}



/* ===== 1801ab040 FUN_1801ab040 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801ab040(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined1 local_48 [32];
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_68;
  uVar1 = FUN_180073a70(local_48,param_2,".fade_offset");
  FUN_1800f4760(param_1,uVar1,param_3);
  FUN_18000f890(local_48);
  uVar1 = FUN_180073a70(local_48,param_2,".gradient_opacity");
  FUN_1800f4760(param_1,uVar1,param_3 + 4);
  FUN_18000f890(local_48);
  uVar1 = FUN_180073a70(local_48,param_2,".outline_opacity");
  FUN_1800f4760(param_1,uVar1,param_3 + 8);
  FUN_18000f890(local_48);
  uVar1 = FUN_180073a70(local_48,param_2,".glow_opacity");
  FUN_1800f4760(param_1,uVar1,param_3 + 0xc);
  FUN_18000f890(local_48);
  uVar1 = FUN_180073a70(local_48,param_2,".glow");
  FUN_1800f4840(param_1,uVar1,param_3 + 0x10);
  FUN_18000f890(local_48);
  return;
}



/* ===== 1801ab160 FUN_1801ab160 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801ab160(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [32];
  undefined1 local_88 [32];
  undefined1 local_68 [32];
  undefined1 local_48 [32];
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_c8;
  FUN_180073a70(local_88,param_2,"ambience.");
  uVar2 = FUN_180073a70(local_a8,local_88,"nightmode");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_a8);
  uVar2 = FUN_180073a70(local_a8,local_88,"colorize_props");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_a8);
  uVar2 = FUN_180073a70(local_a8,local_88,"fullbright");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_a8);
  uVar2 = FUN_180073a70(local_a8,local_88,"exposure");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_a8);
  uVar2 = FUN_180073a70(local_a8,local_88,"sunlight");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_a8);
  uVar2 = FUN_180073a70(local_a8,local_88,"sun_override_rotation");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_a8);
  uVar2 = FUN_180073a70(local_a8,local_88,&DAT_1806f8584);
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_a8);
  uVar2 = FUN_180073a70(local_a8,local_88,&DAT_1806f8588);
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_a8);
  uVar2 = FUN_180073a70(local_a8,local_88,"fog_override_skybox");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_a8);
  uVar2 = FUN_180073a70(local_a8,local_88,"fog_override_height");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_a8);
  uVar2 = FUN_180073a70(local_a8,local_88,"bloom");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_a8);
  uVar2 = FUN_180073a70(local_a8,local_88,"vignette");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_a8);
  uVar2 = FUN_180073a70(local_a8,local_88,"contrast");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_a8);
  uVar2 = FUN_180073a70(local_a8,local_88,"color_correction");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_a8);
  uVar2 = FUN_180073a70(local_a8,local_88,"cc_grayscale");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_a8);
  uVar2 = FUN_180073a70(local_a8,local_88,&DAT_1806f85f0);
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_a8);
  uVar2 = FUN_180073a70(local_a8,local_88,&DAT_1806f85cc);
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_a8);
  uVar2 = FUN_180073a70(local_a8,local_88,"wetness");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_a8);
  uVar2 = FUN_180073a70(local_a8,local_88,"wetness_ignore_sky");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_a8);
  uVar2 = FUN_180073a70(local_a8,local_88,"remove_fog");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_a8);
  uVar2 = FUN_180073a70(local_a8,local_88,"remove_sunlight");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_a8);
  uVar2 = FUN_180073a70(local_a8,local_88,"remove_viewmodel_sunlight");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_a8);
  uVar2 = FUN_180073a70(local_a8,local_88,"remove_barnlights");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_a8);
  uVar2 = FUN_180073a70(local_a8,local_88,"remove_baked_shadows");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_a8);
  uVar2 = FUN_180073a70(local_a8,local_88,"remove_dynamic_shadows");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_a8);
  uVar2 = FUN_180073a70(local_a8,local_88,"remove_post_processing");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_a8);
  uVar2 = FUN_180073a70(local_a8,local_88,"remove_skybox_2d");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_a8);
  uVar2 = FUN_180073a70(local_a8,local_88,"remove_skybox_3d");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_a8);
  uVar2 = FUN_180073a70(local_a8,local_88,"remove_cable_particles");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_a8);
  uVar2 = FUN_180073a70(local_a8,local_88,"nightmode_color");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_a8);
  uVar2 = FUN_180073a70(local_a8,local_88,"overlay_transparency");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_a8);
  uVar2 = FUN_180073a70(local_a8,local_88,"props_color");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_a8);
  uVar2 = FUN_180073a70(local_a8,local_88,"fullbright_color");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_a8);
  uVar2 = FUN_180073a70(local_a8,local_88,"adaptation");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_a8);
  uVar2 = FUN_180073a70(local_a8,local_88,"compensation");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_a8);
  uVar2 = FUN_180073a70(local_a8,local_88,"exposure_min");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_a8);
  uVar2 = FUN_180073a70(local_a8,local_88,"exposure_max");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_a8);
  uVar2 = FUN_180073a70(local_a8,local_88,"adaptation_speed");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_a8);
  uVar2 = FUN_180073a70(local_a8,local_88,"fixed_exposure");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_a8);
  uVar2 = FUN_180073a70(local_a8,local_88,"sun_illumination");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_a8);
  uVar2 = FUN_180073a70(local_a8,local_88,"sun_reflection");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_a8);
  uVar2 = FUN_180073a70(local_a8,local_88,"sun_method");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_a8);
  uVar2 = FUN_180073a70(local_a8,local_88,"sun_pitch");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_a8);
  uVar2 = FUN_180073a70(local_a8,local_88,"sun_yaw");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_a8);
  uVar2 = FUN_180073a70(local_a8,local_88,"volumetric_brightness");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_a8);
  uVar2 = FUN_180073a70(local_a8,local_88,"sky_color");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_a8);
  uVar2 = FUN_180073a70(local_a8,local_88,"clouds_color");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_a8);
  uVar2 = FUN_180073a70(local_a8,local_88,"sun_color");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_a8);
  uVar2 = FUN_180073a70(local_a8,local_88,"skybox");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_a8);
  uVar2 = FUN_180073a70(local_a8,local_88,"skybox_custom");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_a8);
  uVar2 = FUN_180073a70(local_a8,local_88,"fog_color");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_a8);
  uVar2 = FUN_180073a70(local_a8,local_88,"fog_distance");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_a8);
  uVar2 = FUN_180073a70(local_a8,local_88,"fog_exponent");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_a8);
  uVar2 = FUN_180073a70(local_a8,local_88,"fog_height_start");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_a8);
  uVar2 = FUN_180073a70(local_a8,local_88,"fog_height_end");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_a8);
  uVar2 = FUN_180073a70(local_a8,local_88,"fog_height_exponent");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_a8);
  uVar2 = FUN_180073a70(local_a8,local_88,"bloom_strength");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_a8);
  uVar2 = FUN_180073a70(local_a8,local_88,"bloom_screen_strength");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_a8);
  uVar2 = FUN_180073a70(local_a8,local_88,"bloom_blur_strength");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_a8);
  uVar2 = FUN_180073a70(local_a8,local_88,"bloom_threshold");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_a8);
  uVar2 = FUN_180073a70(local_a8,local_88,"bloom_threshold_width");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_a8);
  uVar2 = FUN_180073a70(local_a8,local_88,"vignette_color");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_a8);
  uVar2 = FUN_180073a70(local_a8,local_88,"vignette_strength");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_a8);
  uVar2 = FUN_180073a70(local_a8,local_88,"vignette_radius");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_a8);
  uVar2 = FUN_180073a70(local_a8,local_88,"vignette_roundness");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_a8);
  uVar2 = FUN_180073a70(local_a8,local_88,"vignette_feather");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_a8);
  uVar2 = FUN_180073a70(local_a8,local_88,"contrast_strength");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_a8);
  uVar2 = FUN_180073a70(local_a8,local_88,"contrast_edge");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_a8);
  uVar2 = FUN_180073a70(local_a8,local_88,"contrast_vignette_start");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_a8);
  uVar2 = FUN_180073a70(local_a8,local_88,"contrast_vignette_end");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_a8);
  uVar2 = FUN_180073a70(local_a8,local_88,"contrast_vignette_blur");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_a8);
  uVar2 = FUN_180073a70(local_a8,local_88,"tone_curve");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_a8);
  uVar2 = FUN_180073a70(local_a8,local_88,"cc_contrast");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_a8);
  uVar2 = FUN_180073a70(local_a8,local_88,"cc_highlights");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_a8);
  uVar2 = FUN_180073a70(local_a8,local_88,"cc_shadows");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_a8);
  uVar2 = FUN_180073a70(local_a8,local_88,"cc_saturation");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_a8);
  uVar2 = FUN_180073a70(local_a8,local_88,"cc_vibrance");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_a8);
  uVar2 = FUN_180073a70(local_a8,local_88,"cc_temperature");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_a8);
  uVar2 = FUN_180073a70(local_a8,local_88,"cc_tint");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_a8);
  uVar2 = FUN_180073a70(local_a8,local_88,"dof_mode");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_a8);
  uVar2 = FUN_180073a70(local_a8,local_88,"dof_quality");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_a8);
  uVar2 = FUN_180073a70(local_a8,local_88,"dof_focus_distance");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_a8);
  uVar2 = FUN_180073a70(local_a8,local_88,"dof_focus_speed");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_a8);
  uVar2 = FUN_180073a70(local_a8,local_88,"dof_focus_range");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_a8);
  uVar2 = FUN_180073a70(local_a8,local_88,"wind_direction");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_a8);
  uVar2 = FUN_180073a70(local_a8,local_88,"wind_strength");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_a8);
  uVar2 = FUN_180073a70(local_a8,local_88,"wetness_rain");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_a8);
  uVar2 = FUN_180073a70(local_a8,local_88,"wetness_coverage");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_a8);
  uVar2 = FUN_180073a70(local_a8,local_88,"wetness_drying");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_a8);
  uVar2 = FUN_180073a70(local_a8,local_88,"wind_particle_strength");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_a8);
  uVar2 = FUN_180073a70(local_a8,local_88,"wind_turbulence");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_a8);
  uVar2 = FUN_180073a70(local_a8,local_88,"wind_max_tilt");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_a8);
  uVar2 = FUN_180073a70(local_a8,local_88,"thunder");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_a8);
  uVar2 = FUN_180073a70(local_a8,local_88,"thunder_primary");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_a8);
  uVar2 = FUN_180073a70(local_a8,local_88,"thunder_glow");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_a8);
  uVar2 = FUN_180073a70(local_a8,local_88,"thunder_interval");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_a8);
  uVar2 = FUN_180073a70(local_a8,local_88,"thunder_duration");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_a8);
  uVar2 = FUN_180073a70(local_a8,local_88,"thunder_sound");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_a8);
  uVar2 = FUN_180073a70(local_a8,local_88,"thunder_on_kill");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_a8);
  uVar2 = FUN_180073a70(local_a8,local_88,&DAT_1806f8bfc);
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_a8);
  uVar2 = FUN_180073a70(local_a8,local_88,"rain_primary");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_a8);
  uVar2 = FUN_180073a70(local_a8,local_88,"rain_glow");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_a8);
  uVar2 = FUN_180073a70(local_a8,local_88,"rain_speed");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_a8);
  uVar2 = FUN_180073a70(local_a8,local_88,"rain_radius");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_a8);
  uVar2 = FUN_180073a70(local_a8,local_88,"rain_density");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_a8);
  uVar2 = FUN_180073a70(local_a8,local_88,"rain_center_bias");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_a8);
  uVar2 = FUN_180073a70(local_a8,local_88,"rain_sound");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_a8);
  uVar2 = FUN_180073a70(local_a8,local_88,&DAT_1806f8c7c);
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_a8);
  uVar2 = FUN_180073a70(local_a8,local_88,"snow_primary");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_a8);
  uVar2 = FUN_180073a70(local_a8,local_88,"snow_glow");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_a8);
  uVar2 = FUN_180073a70(local_a8,local_88,"snow_speed");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_a8);
  uVar2 = FUN_180073a70(local_a8,local_88,"snow_radius");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_a8);
  uVar2 = FUN_180073a70(local_a8,local_88,"snow_density");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_a8);
  uVar4 = 0;
  do {
    uVar4 = uVar4 + 1;
    uVar2 = FUN_18004e4f0(local_48,uVar4);
    uVar3 = FUN_180073a70(local_68,local_88,"bloom_blur_weight");
    uVar2 = FUN_180066820(local_a8,uVar3,uVar2);
    lVar1 = *(longlong *)(param_1 + 8);
    if (lVar1 == *(longlong *)(param_1 + 0x10)) {
      FUN_180028f00(param_1,lVar1,uVar2);
    }
    else {
      FUN_180024b50(lVar1,uVar2);
      *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
    }
    FUN_18000f890(local_a8);
    FUN_18000f890(local_68);
    FUN_18000f890(local_48);
    uVar2 = FUN_18004e4f0(local_a8,uVar4);
    uVar3 = FUN_180073a70(local_68,local_88,"bloom_blur_color");
    uVar2 = FUN_180066820(local_48,uVar3,uVar2);
    lVar1 = *(longlong *)(param_1 + 8);
    if (lVar1 == *(longlong *)(param_1 + 0x10)) {
      FUN_180028f00(param_1,lVar1,uVar2);
    }
    else {
      FUN_180024b50(lVar1,uVar2);
      *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
    }
    FUN_18000f890(local_48);
    FUN_18000f890(local_68);
    FUN_18000f890(local_a8);
  } while (uVar4 < 5);
  FUN_18000f890(local_88);
  return;
}



/* ===== 1801ad1b0 FUN_1801ad1b0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801ad1b0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [32];
  undefined1 local_58 [32];
  undefined1 local_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_78;
  FUN_180073a70(local_38,param_2,"aimbot.");
  uVar2 = FUN_180073a70(local_58,local_38,"enabled");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,local_38,"activation");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,local_38,"conditions");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,local_38,"penetration_limit");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,local_38,"smoke_threshold");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,local_38,"flash_threshold");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,local_38,"hitboxes");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,local_38,"prefer_center");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,local_38,"field_of_view");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,local_38,"smoothing");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,local_38,"first_bullet_delay");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,local_38,"curve_factor");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,local_38,"easing_out");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,local_38,"reaction_time");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,local_38,"target_switch_delay");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,local_38,"min_damage");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,local_38,"recoil_control");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,local_38,"recoil.");
  FUN_1801adcc0(param_1,uVar2);
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,local_38,"quick_scope");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,local_38,"automatic_unzoom");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,local_38,"quick_stop");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,local_38,"full_stop");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,local_38,"quick_stop_reaction_time");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_58);
  FUN_18000f890(local_38);
  FUN_180073a70(local_38,param_2,"triggerbot.");
  uVar2 = FUN_180073a70(local_58,local_38,"enabled");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,local_38,"conditions");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,local_38,"penetration_limit");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,local_38,"smoke_threshold");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,local_38,"flash_threshold");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,local_38,"hitboxes");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,local_38,"force_center");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,local_38,"hit_chance");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,local_38,"ignore_spread");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,local_38,"legitimacy_threshold");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,local_38,"min_damage");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,local_38,"reaction_time");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,local_38,"capture_delay");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,local_38,"burst_time");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,local_38,"quick_scope");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,local_38,"automatic_unzoom");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_58);
  FUN_18000f890(local_38);
  return;
}



/* ===== 1801adcc0 FUN_1801adcc0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801adcc0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined1 local_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_58;
  uVar2 = FUN_180073a70(local_38,param_2,"start_bullet");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_38);
  uVar2 = FUN_180073a70(local_38,param_2,"vertical");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_38);
  uVar2 = FUN_180073a70(local_38,param_2,"horizontal");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_38);
  uVar2 = FUN_180073a70(local_38,param_2,"dampening");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_38);
  uVar2 = FUN_180073a70(local_38,param_2,"crosshair_recovery");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_38);
  return;
}



/* ===== 1801ade60 FUN_1801ade60 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801ade60(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined1 local_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_58;
  uVar2 = FUN_180073a70(local_38,param_2,".enabled");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_38);
  uVar2 = FUN_180073a70(local_38,param_2,".color");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_38);
  uVar2 = FUN_180073a70(local_38,param_2,".items");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_38);
  uVar2 = FUN_180073a70(local_38,param_2,".icon_inverted");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_38);
  uVar2 = FUN_180073a70(local_38,param_2,".bar_background");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_38);
  uVar2 = FUN_180073a70(local_38,param_2,".bar_shadow");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_38);
  uVar2 = FUN_180073a70(local_38,param_2,".bar_shadow_color");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_38);
  uVar2 = FUN_180073a70(local_38,param_2,".bar_format");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_38);
  return;
}



/* ===== 1801ae0d0 FUN_1801ae0d0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801ae0d0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined1 local_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_58;
  uVar2 = FUN_180073a70(local_38,param_2,".fade_offset");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_38);
  uVar2 = FUN_180073a70(local_38,param_2,".gradient_opacity");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_38);
  uVar2 = FUN_180073a70(local_38,param_2,".outline_opacity");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_38);
  uVar2 = FUN_180073a70(local_38,param_2,".glow_opacity");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_38);
  uVar2 = FUN_180073a70(local_38,param_2,".glow");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_38);
  return;
}



/* ===== 1801ae270 FUN_1801ae270 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801ae270(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [32];
  undefined1 local_88 [32];
  undefined1 local_68 [32];
  undefined1 local_48 [32];
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_c8;
  FUN_180073a70(local_88,param_2,"ambience.");
  uVar1 = FUN_180073a70(local_a8,local_88,"nightmode");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_a8);
  uVar1 = FUN_180073a70(local_a8,local_88,"colorize_props");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_a8);
  uVar1 = FUN_180073a70(local_a8,local_88,"fullbright");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_a8);
  uVar1 = FUN_180073a70(local_a8,local_88,"exposure");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_a8);
  uVar1 = FUN_180073a70(local_a8,local_88,"sunlight");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_a8);
  uVar1 = FUN_180073a70(local_a8,local_88,"sun_override_rotation");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_a8);
  uVar1 = FUN_180073a70(local_a8,local_88,&DAT_1806f8584);
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_a8);
  uVar1 = FUN_180073a70(local_a8,local_88,&DAT_1806f8588);
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_a8);
  uVar1 = FUN_180073a70(local_a8,local_88,"fog_override_skybox");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_a8);
  uVar1 = FUN_180073a70(local_a8,local_88,"fog_override_height");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_a8);
  uVar1 = FUN_180073a70(local_a8,local_88,"bloom");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_a8);
  uVar1 = FUN_180073a70(local_a8,local_88,"vignette");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_a8);
  uVar1 = FUN_180073a70(local_a8,local_88,"contrast");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_a8);
  uVar1 = FUN_180073a70(local_a8,local_88,"color_correction");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_a8);
  uVar1 = FUN_180073a70(local_a8,local_88,"cc_grayscale");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_a8);
  uVar1 = FUN_180073a70(local_a8,local_88,&DAT_1806f85f0);
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_a8);
  uVar1 = FUN_180073a70(local_a8,local_88,&DAT_1806f85cc);
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_a8);
  uVar1 = FUN_180073a70(local_a8,local_88,"wetness");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_a8);
  uVar1 = FUN_180073a70(local_a8,local_88,"wetness_ignore_sky");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_a8);
  uVar1 = FUN_180073a70(local_a8,local_88,"remove_fog");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_a8);
  uVar1 = FUN_180073a70(local_a8,local_88,"remove_sunlight");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_a8);
  uVar1 = FUN_180073a70(local_a8,local_88,"remove_viewmodel_sunlight");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_a8);
  uVar1 = FUN_180073a70(local_a8,local_88,"remove_barnlights");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_a8);
  uVar1 = FUN_180073a70(local_a8,local_88,"remove_baked_shadows");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_a8);
  uVar1 = FUN_180073a70(local_a8,local_88,"remove_dynamic_shadows");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_a8);
  uVar1 = FUN_180073a70(local_a8,local_88,"remove_post_processing");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_a8);
  uVar1 = FUN_180073a70(local_a8,local_88,"remove_skybox_2d");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_a8);
  uVar1 = FUN_180073a70(local_a8,local_88,"remove_skybox_3d");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_a8);
  uVar1 = FUN_180073a70(local_a8,local_88,"remove_cable_particles");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_a8);
  uVar1 = FUN_180073a70(local_a8,local_88,"nightmode_color");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_a8);
  uVar1 = FUN_180073a70(local_a8,local_88,"overlay_transparency");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_a8);
  uVar1 = FUN_180073a70(local_a8,local_88,"props_color");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_a8);
  uVar1 = FUN_180073a70(local_a8,local_88,"fullbright_color");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_a8);
  uVar1 = FUN_180073a70(local_a8,local_88,"adaptation");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_a8);
  uVar1 = FUN_180073a70(local_a8,local_88,"compensation");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_a8);
  uVar1 = FUN_180073a70(local_a8,local_88,"exposure_min");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_a8);
  uVar1 = FUN_180073a70(local_a8,local_88,"exposure_max");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_a8);
  uVar1 = FUN_180073a70(local_a8,local_88,"adaptation_speed");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_a8);
  uVar1 = FUN_180073a70(local_a8,local_88,"fixed_exposure");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_a8);
  uVar1 = FUN_180073a70(local_a8,local_88,"sun_illumination");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_a8);
  uVar1 = FUN_180073a70(local_a8,local_88,"sun_reflection");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_a8);
  uVar1 = FUN_180073a70(local_a8,local_88,"sun_method");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_a8);
  uVar1 = FUN_180073a70(local_a8,local_88,"sun_pitch");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_a8);
  uVar1 = FUN_180073a70(local_a8,local_88,"sun_yaw");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_a8);
  uVar1 = FUN_180073a70(local_a8,local_88,"volumetric_brightness");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_a8);
  uVar1 = FUN_180073a70(local_a8,local_88,"sky_color");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_a8);
  uVar1 = FUN_180073a70(local_a8,local_88,"clouds_color");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_a8);
  uVar1 = FUN_180073a70(local_a8,local_88,"sun_color");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_a8);
  uVar1 = FUN_180073a70(local_a8,local_88,"skybox");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_a8);
  uVar1 = FUN_180073a70(local_a8,local_88,"skybox_custom");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_a8);
  uVar1 = FUN_180073a70(local_a8,local_88,"fog_color");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_a8);
  uVar1 = FUN_180073a70(local_a8,local_88,"fog_distance");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_a8);
  uVar1 = FUN_180073a70(local_a8,local_88,"fog_exponent");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_a8);
  uVar1 = FUN_180073a70(local_a8,local_88,"fog_height_start");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_a8);
  uVar1 = FUN_180073a70(local_a8,local_88,"fog_height_end");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_a8);
  uVar1 = FUN_180073a70(local_a8,local_88,"fog_height_exponent");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_a8);
  uVar1 = FUN_180073a70(local_a8,local_88,"bloom_strength");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_a8);
  uVar1 = FUN_180073a70(local_a8,local_88,"bloom_screen_strength");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_a8);
  uVar1 = FUN_180073a70(local_a8,local_88,"bloom_blur_strength");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_a8);
  uVar1 = FUN_180073a70(local_a8,local_88,"bloom_threshold");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_a8);
  uVar1 = FUN_180073a70(local_a8,local_88,"bloom_threshold_width");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_a8);
  uVar1 = FUN_180073a70(local_a8,local_88,"vignette_color");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_a8);
  uVar1 = FUN_180073a70(local_a8,local_88,"vignette_strength");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_a8);
  uVar1 = FUN_180073a70(local_a8,local_88,"vignette_radius");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_a8);
  uVar1 = FUN_180073a70(local_a8,local_88,"vignette_roundness");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_a8);
  uVar1 = FUN_180073a70(local_a8,local_88,"vignette_feather");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_a8);
  uVar1 = FUN_180073a70(local_a8,local_88,"contrast_strength");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_a8);
  uVar1 = FUN_180073a70(local_a8,local_88,"contrast_edge");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_a8);
  uVar1 = FUN_180073a70(local_a8,local_88,"contrast_vignette_start");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_a8);
  uVar1 = FUN_180073a70(local_a8,local_88,"contrast_vignette_end");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_a8);
  uVar1 = FUN_180073a70(local_a8,local_88,"contrast_vignette_blur");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_a8);
  uVar1 = FUN_180073a70(local_a8,local_88,"tone_curve");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_a8);
  uVar1 = FUN_180073a70(local_a8,local_88,"cc_contrast");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_a8);
  uVar1 = FUN_180073a70(local_a8,local_88,"cc_highlights");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_a8);
  uVar1 = FUN_180073a70(local_a8,local_88,"cc_shadows");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_a8);
  uVar1 = FUN_180073a70(local_a8,local_88,"cc_saturation");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_a8);
  uVar1 = FUN_180073a70(local_a8,local_88,"cc_vibrance");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_a8);
  uVar1 = FUN_180073a70(local_a8,local_88,"cc_temperature");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_a8);
  uVar1 = FUN_180073a70(local_a8,local_88,"cc_tint");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_a8);
  uVar1 = FUN_180073a70(local_a8,local_88,"dof_mode");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_a8);
  uVar1 = FUN_180073a70(local_a8,local_88,"dof_quality");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_a8);
  uVar1 = FUN_180073a70(local_a8,local_88,"dof_focus_distance");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_a8);
  uVar1 = FUN_180073a70(local_a8,local_88,"dof_focus_speed");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_a8);
  uVar1 = FUN_180073a70(local_a8,local_88,"dof_focus_range");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_a8);
  uVar1 = FUN_180073a70(local_a8,local_88,"wind_direction");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_a8);
  uVar1 = FUN_180073a70(local_a8,local_88,"wind_strength");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_a8);
  uVar1 = FUN_180073a70(local_a8,local_88,"wetness_rain");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_a8);
  uVar1 = FUN_180073a70(local_a8,local_88,"wetness_coverage");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_a8);
  uVar1 = FUN_180073a70(local_a8,local_88,"wetness_drying");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_a8);
  uVar1 = FUN_180073a70(local_a8,local_88,"wind_particle_strength");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_a8);
  uVar1 = FUN_180073a70(local_a8,local_88,"wind_turbulence");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_a8);
  uVar1 = FUN_180073a70(local_a8,local_88,"wind_max_tilt");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_a8);
  uVar1 = FUN_180073a70(local_a8,local_88,"thunder");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_a8);
  uVar1 = FUN_180073a70(local_a8,local_88,"thunder_primary");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_a8);
  uVar1 = FUN_180073a70(local_a8,local_88,"thunder_glow");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_a8);
  uVar1 = FUN_180073a70(local_a8,local_88,"thunder_interval");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_a8);
  uVar1 = FUN_180073a70(local_a8,local_88,"thunder_duration");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_a8);
  uVar1 = FUN_180073a70(local_a8,local_88,"thunder_sound");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_a8);
  uVar1 = FUN_180073a70(local_a8,local_88,"thunder_on_kill");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_a8);
  uVar1 = FUN_180073a70(local_a8,local_88,&DAT_1806f8bfc);
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_a8);
  uVar1 = FUN_180073a70(local_a8,local_88,"rain_primary");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_a8);
  uVar1 = FUN_180073a70(local_a8,local_88,"rain_glow");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_a8);
  uVar1 = FUN_180073a70(local_a8,local_88,"rain_speed");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_a8);
  uVar1 = FUN_180073a70(local_a8,local_88,"rain_radius");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_a8);
  uVar1 = FUN_180073a70(local_a8,local_88,"rain_density");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_a8);
  uVar1 = FUN_180073a70(local_a8,local_88,"rain_center_bias");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_a8);
  uVar1 = FUN_180073a70(local_a8,local_88,"rain_sound");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_a8);
  uVar1 = FUN_180073a70(local_a8,local_88,&DAT_1806f8c7c);
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_a8);
  uVar1 = FUN_180073a70(local_a8,local_88,"snow_primary");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_a8);
  uVar1 = FUN_180073a70(local_a8,local_88,"snow_glow");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_a8);
  uVar1 = FUN_180073a70(local_a8,local_88,"snow_speed");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_a8);
  uVar1 = FUN_180073a70(local_a8,local_88,"snow_radius");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_a8);
  uVar1 = FUN_180073a70(local_a8,local_88,"snow_density");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_a8);
  uVar3 = 0;
  do {
    uVar3 = uVar3 + 1;
    uVar1 = FUN_18004e4f0(local_48,uVar3);
    uVar2 = FUN_180073a70(local_68,local_88,"bloom_blur_weight");
    uVar1 = FUN_180066820(local_a8,uVar2,uVar1);
    FUN_180162d70(param_1,uVar1);
    FUN_18000f890(local_a8);
    FUN_18000f890(local_68);
    FUN_18000f890(local_48);
    uVar1 = FUN_18004e4f0(local_a8,uVar3);
    uVar2 = FUN_180073a70(local_68,local_88,"bloom_blur_color");
    uVar1 = FUN_180066820(local_48,uVar2,uVar1);
    FUN_180162d70(param_1,uVar1);
    FUN_18000f890(local_48);
    FUN_18000f890(local_68);
    FUN_18000f890(local_a8);
  } while (uVar3 < 5);
  FUN_18000f890(local_88);
  return;
}



/* ===== 1801af630 FUN_1801af630 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801af630(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_78 [32];
  undefined1 local_58 [32];
  undefined1 local_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_78;
  FUN_180073a70(local_38,param_2,"aimbot.");
  uVar1 = FUN_180073a70(local_58,local_38,"enabled");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_58);
  uVar1 = FUN_180073a70(local_58,local_38,"activation");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_58);
  uVar1 = FUN_180073a70(local_58,local_38,"conditions");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_58);
  uVar1 = FUN_180073a70(local_58,local_38,"penetration_limit");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_58);
  uVar1 = FUN_180073a70(local_58,local_38,"smoke_threshold");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_58);
  uVar1 = FUN_180073a70(local_58,local_38,"flash_threshold");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_58);
  uVar1 = FUN_180073a70(local_58,local_38,"hitboxes");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_58);
  uVar1 = FUN_180073a70(local_58,local_38,"prefer_center");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_58);
  uVar1 = FUN_180073a70(local_58,local_38,"field_of_view");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_58);
  uVar1 = FUN_180073a70(local_58,local_38,"smoothing");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_58);
  uVar1 = FUN_180073a70(local_58,local_38,"first_bullet_delay");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_58);
  uVar1 = FUN_180073a70(local_58,local_38,"curve_factor");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_58);
  uVar1 = FUN_180073a70(local_58,local_38,"easing_out");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_58);
  uVar1 = FUN_180073a70(local_58,local_38,"reaction_time");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_58);
  uVar1 = FUN_180073a70(local_58,local_38,"target_switch_delay");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_58);
  uVar1 = FUN_180073a70(local_58,local_38,"min_damage");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_58);
  uVar1 = FUN_180073a70(local_58,local_38,"recoil_control");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_58);
  uVar1 = FUN_180073a70(local_58,local_38,"recoil.");
  FUN_1801afd20(param_1,uVar1);
  FUN_18000f890(local_58);
  uVar1 = FUN_180073a70(local_58,local_38,"quick_scope");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_58);
  uVar1 = FUN_180073a70(local_58,local_38,"automatic_unzoom");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_58);
  uVar1 = FUN_180073a70(local_58,local_38,"quick_stop");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_58);
  uVar1 = FUN_180073a70(local_58,local_38,"full_stop");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_58);
  uVar1 = FUN_180073a70(local_58,local_38,"quick_stop_reaction_time");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_58);
  FUN_18000f890(local_38);
  FUN_180073a70(local_38,param_2,"triggerbot.");
  uVar1 = FUN_180073a70(local_58,local_38,"enabled");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_58);
  uVar1 = FUN_180073a70(local_58,local_38,"conditions");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_58);
  uVar1 = FUN_180073a70(local_58,local_38,"penetration_limit");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_58);
  uVar1 = FUN_180073a70(local_58,local_38,"smoke_threshold");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_58);
  uVar1 = FUN_180073a70(local_58,local_38,"flash_threshold");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_58);
  uVar1 = FUN_180073a70(local_58,local_38,"hitboxes");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_58);
  uVar1 = FUN_180073a70(local_58,local_38,"force_center");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_58);
  uVar1 = FUN_180073a70(local_58,local_38,"hit_chance");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_58);
  uVar1 = FUN_180073a70(local_58,local_38,"ignore_spread");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_58);
  uVar1 = FUN_180073a70(local_58,local_38,"legitimacy_threshold");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_58);
  uVar1 = FUN_180073a70(local_58,local_38,"min_damage");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_58);
  uVar1 = FUN_180073a70(local_58,local_38,"reaction_time");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_58);
  uVar1 = FUN_180073a70(local_58,local_38,"capture_delay");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_58);
  uVar1 = FUN_180073a70(local_58,local_38,"burst_time");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_58);
  uVar1 = FUN_180073a70(local_58,local_38,"quick_scope");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_58);
  uVar1 = FUN_180073a70(local_58,local_38,"automatic_unzoom");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_58);
  FUN_18000f890(local_38);
  return;
}



/* ===== 1801afd20 FUN_1801afd20 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801afd20(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_58;
  uVar1 = FUN_180073a70(local_38,param_2,"start_bullet");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_38);
  uVar1 = FUN_180073a70(local_38,param_2,"vertical");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_38);
  uVar1 = FUN_180073a70(local_38,param_2,"horizontal");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_38);
  uVar1 = FUN_180073a70(local_38,param_2,"dampening");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_38);
  uVar1 = FUN_180073a70(local_38,param_2,"crosshair_recovery");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_38);
  return;
}



/* ===== 1801afe30 FUN_1801afe30 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801afe30(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_58;
  uVar1 = FUN_180073a70(local_38,param_2,".enabled");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_38);
  uVar1 = FUN_180073a70(local_38,param_2,".color");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_38);
  uVar1 = FUN_180073a70(local_38,param_2,".items");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_38);
  uVar1 = FUN_180073a70(local_38,param_2,".icon_inverted");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_38);
  uVar1 = FUN_180073a70(local_38,param_2,".bar_background");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_38);
  uVar1 = FUN_180073a70(local_38,param_2,".bar_shadow");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_38);
  uVar1 = FUN_180073a70(local_38,param_2,".bar_shadow_color");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_38);
  uVar1 = FUN_180073a70(local_38,param_2,".bar_format");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_38);
  return;
}



/* ===== 1801affc0 FUN_1801affc0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801affc0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_58;
  uVar1 = FUN_180073a70(local_38,param_2,".fade_offset");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_38);
  uVar1 = FUN_180073a70(local_38,param_2,".gradient_opacity");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_38);
  uVar1 = FUN_180073a70(local_38,param_2,".outline_opacity");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_38);
  uVar1 = FUN_180073a70(local_38,param_2,".glow_opacity");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_38);
  uVar1 = FUN_180073a70(local_38,param_2,".glow");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_38);
  return;
}



/* ===== 1801b00d0 FUN_1801b00d0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801b00d0(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  ulonglong uVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [32];
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  undefined1 local_58 [32];
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStack_d8;
  FUN_180073a70(local_98,param_2,"ambience.");
  uVar3 = FUN_180073a70(local_b8,local_98,"nightmode");
  FUN_1801696b0(param_1,uVar3,param_3);
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"colorize_props");
  FUN_1801696b0(param_1,uVar3,param_3 + 0x18);
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"fullbright");
  FUN_1801696b0(param_1,uVar3,param_3 + 0x2c);
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"exposure");
  FUN_1801696b0(param_1,uVar3,param_3 + 0x40);
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"sunlight");
  FUN_1801696b0(param_1,uVar3,param_3 + 0x5c);
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"sun_override_rotation");
  FUN_1801696b0(param_1,uVar3,param_3 + 0x84);
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,&DAT_1806f8584);
  FUN_1801696b0(param_1,uVar3,param_3 + 0x94);
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,&DAT_1806f8588);
  FUN_1801696b0(param_1,uVar3,param_3 + 0x18c);
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"fog_override_skybox");
  FUN_1801696b0(param_1,uVar3,param_3 + 0x1a8);
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"fog_override_height");
  FUN_1801696b0(param_1,uVar3,param_3 + 0x1a9);
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"bloom");
  FUN_1801696b0(param_1,uVar3,param_3 + 0x1b8);
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"vignette");
  FUN_1801696b0(param_1,uVar3,param_3 + 0x234);
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"contrast");
  FUN_1801696b0(param_1,uVar3,param_3 + 600);
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"color_correction");
  FUN_1801696b0(param_1,uVar3,param_3 + 0x270);
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"cc_grayscale");
  FUN_1801696b0(param_1,uVar3,param_3 + 0x294);
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,&DAT_1806f85f0);
  FUN_1801696b0(param_1,uVar3,param_3 + 0x295);
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,&DAT_1806f85cc);
  FUN_1801696b0(param_1,uVar3,param_3 + 0x2ac);
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"wetness");
  FUN_1801696b0(param_1,uVar3,param_3 + 0x2c4);
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"wetness_ignore_sky");
  FUN_1801696b0(param_1,uVar3,param_3 + 0x2d4);
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"remove_fog");
  FUN_1801696b0(param_1,uVar3,param_3 + 0x364);
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"remove_sunlight");
  FUN_1801696b0(param_1,uVar3,param_3 + 0x365);
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"remove_viewmodel_sunlight");
  FUN_1801696b0(param_1,uVar3,param_3 + 0x366);
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"remove_barnlights");
  FUN_1801696b0(param_1,uVar3,param_3 + 0x367);
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"remove_baked_shadows");
  FUN_1801696b0(param_1,uVar3,param_3 + 0x368);
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"remove_dynamic_shadows");
  FUN_1801696b0(param_1,uVar3,param_3 + 0x369);
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"remove_post_processing");
  FUN_1801696b0(param_1,uVar3,param_3 + 0x36a);
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"remove_skybox_2d");
  FUN_1801696b0(param_1,uVar3,param_3 + 0x36b);
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"remove_skybox_3d");
  FUN_1801696b0(param_1,uVar3,param_3 + 0x36c);
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"remove_cable_particles");
  FUN_1801696b0(param_1,uVar3,param_3 + 0x36d);
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"nightmode_color");
  cVar2 = FUN_1801c2460(param_1,uVar3);
  if (cVar2 != '\0') {
    FUN_1801944c0(*param_1,uVar3,param_3 + 4);
  }
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"overlay_transparency");
  cVar2 = FUN_1801c2460(param_1,uVar3);
  if (cVar2 != '\0') {
    FUN_1800f2db0(*param_1,uVar3,param_3 + 0x14);
  }
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"props_color");
  cVar2 = FUN_1801c2460(param_1,uVar3);
  if (cVar2 != '\0') {
    FUN_1801944c0(*param_1,uVar3,param_3 + 0x1c);
  }
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"fullbright_color");
  cVar2 = FUN_1801c2460(param_1,uVar3);
  if (cVar2 != '\0') {
    FUN_1801944c0(*param_1,uVar3,param_3 + 0x30);
  }
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"adaptation");
  cVar2 = FUN_1801c2460(param_1,uVar3);
  if (cVar2 != '\0') {
    FUN_1800f2db0(*param_1,uVar3,param_3 + 0x44);
  }
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"compensation");
  cVar2 = FUN_1801c2460(param_1,uVar3);
  if (cVar2 != '\0') {
    FUN_1800f2e20(*param_1,uVar3,param_3 + 0x48);
  }
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"exposure_min");
  cVar2 = FUN_1801c2460(param_1,uVar3);
  if (cVar2 != '\0') {
    FUN_1800f2e20(*param_1,uVar3,param_3 + 0x4c);
  }
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"exposure_max");
  cVar2 = FUN_1801c2460(param_1,uVar3);
  if (cVar2 != '\0') {
    FUN_1800f2e20(*param_1,uVar3,param_3 + 0x50);
  }
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"adaptation_speed");
  cVar2 = FUN_1801c2460(param_1,uVar3);
  if (cVar2 != '\0') {
    FUN_1800f2db0(*param_1,uVar3,param_3 + 0x54);
  }
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"fixed_exposure");
  cVar2 = FUN_1801c2460(param_1,uVar3);
  if (cVar2 != '\0') {
    FUN_1800f2db0(*param_1,uVar3,param_3 + 0x58);
  }
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"sun_illumination");
  cVar2 = FUN_1801c2460(param_1,uVar3);
  if (cVar2 != '\0') {
    FUN_1801944c0(*param_1,uVar3,param_3 + 0x60);
  }
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"sun_reflection");
  cVar2 = FUN_1801c2460(param_1,uVar3);
  if (cVar2 != '\0') {
    FUN_1801944c0(*param_1,uVar3,param_3 + 0x70);
  }
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"sun_method");
  cVar2 = FUN_1801c2460(param_1,uVar3);
  if (cVar2 != '\0') {
    FUN_1800f2db0(*param_1,uVar3,param_3 + 0x80);
  }
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"sun_pitch");
  cVar2 = FUN_1801c2460(param_1,uVar3);
  if (cVar2 != '\0') {
    FUN_1800f2db0(*param_1,uVar3,param_3 + 0x88);
  }
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"sun_yaw");
  cVar2 = FUN_1801c2460(param_1,uVar3);
  if (cVar2 != '\0') {
    FUN_1800f2db0(*param_1,uVar3,param_3 + 0x8c);
  }
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"volumetric_brightness");
  cVar2 = FUN_1801c2460(param_1,uVar3);
  if (cVar2 != '\0') {
    FUN_1800f2db0(*param_1,uVar3,param_3 + 0x90);
  }
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"sky_color");
  cVar2 = FUN_1801c2460(param_1,uVar3);
  if (cVar2 != '\0') {
    FUN_1801944c0(*param_1,uVar3,param_3 + 0x98);
  }
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"clouds_color");
  cVar2 = FUN_1801c2460(param_1,uVar3);
  if (cVar2 != '\0') {
    FUN_1801944c0(*param_1,uVar3,param_3 + 0xa8);
  }
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"sun_color");
  cVar2 = FUN_1801c2460(param_1,uVar3);
  if (cVar2 != '\0') {
    FUN_1801944c0(*param_1,uVar3,param_3 + 0xb8);
  }
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"skybox");
  cVar2 = FUN_1801c2460(param_1,uVar3);
  if (cVar2 != '\0') {
    FUN_1800f2db0(*param_1,uVar3,param_3 + 200);
  }
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"skybox_custom");
  cVar2 = FUN_1801c2460(param_1,uVar3);
  if (cVar2 != '\0') {
    FUN_1801c3440(*param_1,uVar3,param_3 + 0xcc);
  }
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"fog_color");
  cVar2 = FUN_1801c2460(param_1,uVar3);
  if (cVar2 != '\0') {
    FUN_1801944c0(*param_1,uVar3,param_3 + 400);
  }
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"fog_distance");
  cVar2 = FUN_1801c2460(param_1,uVar3);
  if (cVar2 != '\0') {
    FUN_1800f2db0(*param_1,uVar3,param_3 + 0x1a0);
  }
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"fog_exponent");
  cVar2 = FUN_1801c2460(param_1,uVar3);
  if (cVar2 != '\0') {
    FUN_1800f2e20(*param_1,uVar3,param_3 + 0x1a4);
  }
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"fog_height_start");
  cVar2 = FUN_1801c2460(param_1,uVar3);
  if (cVar2 != '\0') {
    FUN_1800f2db0(*param_1,uVar3,param_3 + 0x1ac);
  }
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"fog_height_end");
  cVar2 = FUN_1801c2460(param_1,uVar3);
  if (cVar2 != '\0') {
    FUN_1800f2db0(*param_1,uVar3,param_3 + 0x1b0);
  }
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"fog_height_exponent");
  cVar2 = FUN_1801c2460(param_1,uVar3);
  if (cVar2 != '\0') {
    FUN_1800f2e20(*param_1,uVar3,param_3 + 0x1b4);
  }
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"bloom_strength");
  cVar2 = FUN_1801c2460(param_1,uVar3);
  if (cVar2 != '\0') {
    FUN_1800f2db0(*param_1,uVar3,param_3 + 0x1bc);
  }
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"bloom_screen_strength");
  cVar2 = FUN_1801c2460(param_1,uVar3);
  if (cVar2 != '\0') {
    FUN_1800f2db0(*param_1,uVar3,param_3 + 0x1c0);
  }
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"bloom_blur_strength");
  cVar2 = FUN_1801c2460(param_1,uVar3);
  if (cVar2 != '\0') {
    FUN_1800f2db0(*param_1,uVar3,param_3 + 0x1c4);
  }
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"bloom_threshold");
  cVar2 = FUN_1801c2460(param_1,uVar3);
  if (cVar2 != '\0') {
    FUN_1800f2db0(*param_1,uVar3,param_3 + 0x1c8);
  }
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"bloom_threshold_width");
  cVar2 = FUN_1801c2460(param_1,uVar3);
  if (cVar2 != '\0') {
    FUN_1800f2db0(*param_1,uVar3,param_3 + 0x1cc);
  }
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"vignette_color");
  cVar2 = FUN_1801c2460(param_1,uVar3);
  if (cVar2 != '\0') {
    FUN_1801944c0(*param_1,uVar3,param_3 + 0x238);
  }
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"vignette_strength");
  cVar2 = FUN_1801c2460(param_1,uVar3);
  if (cVar2 != '\0') {
    FUN_1800f2db0(*param_1,uVar3,param_3 + 0x248);
  }
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"vignette_radius");
  cVar2 = FUN_1801c2460(param_1,uVar3);
  if (cVar2 != '\0') {
    FUN_1800f2db0(*param_1,uVar3,param_3 + 0x24c);
  }
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"vignette_roundness");
  cVar2 = FUN_1801c2460(param_1,uVar3);
  if (cVar2 != '\0') {
    FUN_1800f2db0(*param_1,uVar3,param_3 + 0x250);
  }
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"vignette_feather");
  cVar2 = FUN_1801c2460(param_1,uVar3);
  if (cVar2 != '\0') {
    FUN_1800f2db0(*param_1,uVar3,param_3 + 0x254);
  }
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"contrast_strength");
  cVar2 = FUN_1801c2460(param_1,uVar3);
  if (cVar2 != '\0') {
    FUN_1800f2db0(*param_1,uVar3,param_3 + 0x25c);
  }
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"contrast_edge");
  cVar2 = FUN_1801c2460(param_1,uVar3);
  if (cVar2 != '\0') {
    FUN_1800f2db0(*param_1,uVar3,param_3 + 0x260);
  }
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"contrast_vignette_start");
  cVar2 = FUN_1801c2460(param_1,uVar3);
  if (cVar2 != '\0') {
    FUN_1800f2db0(*param_1,uVar3,param_3 + 0x264);
  }
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"contrast_vignette_end");
  cVar2 = FUN_1801c2460(param_1,uVar3);
  if (cVar2 != '\0') {
    FUN_1800f2db0(*param_1,uVar3,param_3 + 0x268);
  }
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"contrast_vignette_blur");
  cVar2 = FUN_1801c2460(param_1,uVar3);
  if (cVar2 != '\0') {
    FUN_1800f2db0(*param_1,uVar3,param_3 + 0x26c);
  }
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"tone_curve");
  cVar2 = FUN_1801c2460(param_1,uVar3);
  if (cVar2 != '\0') {
    FUN_1800f2db0(*param_1,uVar3,param_3 + 0x274);
  }
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"cc_contrast");
  cVar2 = FUN_1801c2460(param_1,uVar3);
  if (cVar2 != '\0') {
    FUN_1800f2db0(*param_1,uVar3,param_3 + 0x278);
  }
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"cc_highlights");
  cVar2 = FUN_1801c2460(param_1,uVar3);
  if (cVar2 != '\0') {
    FUN_1800f2db0(*param_1,uVar3,param_3 + 0x27c);
  }
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"cc_shadows");
  cVar2 = FUN_1801c2460(param_1,uVar3);
  if (cVar2 != '\0') {
    FUN_1800f2db0(*param_1,uVar3,param_3 + 0x280);
  }
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"cc_saturation");
  cVar2 = FUN_1801c2460(param_1,uVar3);
  if (cVar2 != '\0') {
    FUN_1800f2db0(*param_1,uVar3,param_3 + 0x284);
  }
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"cc_vibrance");
  cVar2 = FUN_1801c2460(param_1,uVar3);
  if (cVar2 != '\0') {
    FUN_1800f2db0(*param_1,uVar3,param_3 + 0x288);
  }
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"cc_temperature");
  cVar2 = FUN_1801c2460(param_1,uVar3);
  if (cVar2 != '\0') {
    FUN_1800f2db0(*param_1,uVar3,param_3 + 0x28c);
  }
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"cc_tint");
  cVar2 = FUN_1801c2460(param_1,uVar3);
  if (cVar2 != '\0') {
    FUN_1800f2db0(*param_1,uVar3,param_3 + 0x290);
  }
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"dof_mode");
  cVar2 = FUN_1801c2460(param_1,uVar3);
  if (cVar2 != '\0') {
    FUN_1800f2db0(*param_1,uVar3,param_3 + 0x298);
  }
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"dof_quality");
  cVar2 = FUN_1801c2460(param_1,uVar3);
  if (cVar2 != '\0') {
    FUN_1800f2db0(*param_1,uVar3,param_3 + 0x29c);
  }
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"dof_focus_distance");
  cVar2 = FUN_1801c2460(param_1,uVar3);
  if (cVar2 != '\0') {
    FUN_1800f2db0(*param_1,uVar3,param_3 + 0x2a0);
  }
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"dof_focus_speed");
  cVar2 = FUN_1801c2460(param_1,uVar3);
  if (cVar2 != '\0') {
    FUN_1800f2db0(*param_1,uVar3,param_3 + 0x2a4);
  }
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"dof_focus_range");
  cVar2 = FUN_1801c2460(param_1,uVar3);
  if (cVar2 != '\0') {
    FUN_1800f2db0(*param_1,uVar3,param_3 + 0x2a8);
  }
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"wind_direction");
  cVar2 = FUN_1801c2460(param_1,uVar3);
  if (cVar2 != '\0') {
    FUN_1800f2db0(*param_1,uVar3,param_3 + 0x2b0);
  }
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"wind_strength");
  cVar2 = FUN_1801c2460(param_1,uVar3);
  if (cVar2 != '\0') {
    FUN_1800f2e20(*param_1,uVar3,param_3 + 0x2b4);
  }
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"wetness_rain");
  cVar2 = FUN_1801c2460(param_1,uVar3);
  if (cVar2 != '\0') {
    FUN_1800f2db0(*param_1,uVar3,param_3 + 0x2c8);
  }
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"wetness_coverage");
  cVar2 = FUN_1801c2460(param_1,uVar3);
  if (cVar2 != '\0') {
    FUN_1800f2db0(*param_1,uVar3,param_3 + 0x2cc);
  }
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"wetness_drying");
  cVar2 = FUN_1801c2460(param_1,uVar3);
  if (cVar2 != '\0') {
    FUN_1800f2db0(*param_1,uVar3,param_3 + 0x2d0);
  }
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"wind_particle_strength");
  cVar2 = FUN_1801c2460(param_1,uVar3);
  if (cVar2 != '\0') {
    FUN_1800f2e20(*param_1,uVar3,param_3 + 0x2b8);
  }
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"wind_turbulence");
  cVar2 = FUN_1801c2460(param_1,uVar3);
  if (cVar2 != '\0') {
    FUN_1800f2e20(*param_1,uVar3,param_3 + 700);
  }
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"wind_max_tilt");
  cVar2 = FUN_1801c2460(param_1,uVar3);
  if (cVar2 != '\0') {
    FUN_1800f2e20(*param_1,uVar3,param_3 + 0x2c0);
  }
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"thunder");
  FUN_1801696b0(param_1,uVar3,param_3 + 0x2d5);
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"thunder_primary");
  cVar2 = FUN_1801c2460(param_1,uVar3);
  if (cVar2 != '\0') {
    FUN_1801944c0(*param_1,uVar3,param_3 + 0x2d8);
  }
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"thunder_glow");
  cVar2 = FUN_1801c2460(param_1,uVar3);
  if (cVar2 != '\0') {
    FUN_1801944c0(*param_1,uVar3,param_3 + 0x2e8);
  }
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"thunder_interval");
  cVar2 = FUN_1801c2460(param_1,uVar3);
  if (cVar2 != '\0') {
    FUN_1800f2e20(*param_1,uVar3,param_3 + 0x2f8);
  }
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"thunder_duration");
  cVar2 = FUN_1801c2460(param_1,uVar3);
  if (cVar2 != '\0') {
    FUN_1800f2e20(*param_1,uVar3,param_3 + 0x2fc);
  }
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"thunder_sound");
  FUN_1801696b0(param_1,uVar3,param_3 + 0x300);
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"thunder_on_kill");
  FUN_1801696b0(param_1,uVar3,param_3 + 0x301);
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,&DAT_1806f8bfc);
  FUN_1801696b0(param_1,uVar3,param_3 + 0x302);
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"rain_primary");
  cVar2 = FUN_1801c2460(param_1,uVar3);
  if (cVar2 != '\0') {
    FUN_1801944c0(*param_1,uVar3,param_3 + 0x304);
  }
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"rain_glow");
  cVar2 = FUN_1801c2460(param_1,uVar3);
  if (cVar2 != '\0') {
    FUN_1801944c0(*param_1,uVar3,param_3 + 0x314);
  }
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"rain_speed");
  cVar2 = FUN_1801c2460(param_1,uVar3);
  if (cVar2 != '\0') {
    FUN_1800f2db0(*param_1,uVar3,param_3 + 0x324);
  }
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"rain_radius");
  cVar2 = FUN_1801c2460(param_1,uVar3);
  if (cVar2 != '\0') {
    FUN_1800f2db0(*param_1,uVar3,param_3 + 0x328);
  }
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"rain_density");
  cVar2 = FUN_1801c2460(param_1,uVar3);
  if (cVar2 != '\0') {
    FUN_1800f2db0(*param_1,uVar3,param_3 + 0x32c);
  }
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"rain_center_bias");
  cVar2 = FUN_1801c2460(param_1,uVar3);
  if (cVar2 != '\0') {
    FUN_1800f2db0(*param_1,uVar3,param_3 + 0x330);
  }
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"rain_sound");
  FUN_1801696b0(param_1,uVar3,param_3 + 0x334);
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,&DAT_1806f8c7c);
  FUN_1801696b0(param_1,uVar3,param_3 + 0x335);
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"snow_primary");
  cVar2 = FUN_1801c2460(param_1,uVar3);
  if (cVar2 != '\0') {
    FUN_1801944c0(*param_1,uVar3,param_3 + 0x338);
  }
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"snow_glow");
  cVar2 = FUN_1801c2460(param_1,uVar3);
  if (cVar2 != '\0') {
    FUN_1801944c0(*param_1,uVar3,param_3 + 0x348);
  }
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"snow_speed");
  cVar2 = FUN_1801c2460(param_1,uVar3);
  if (cVar2 != '\0') {
    FUN_1800f2db0(*param_1,uVar3,param_3 + 0x358);
  }
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"snow_radius");
  cVar2 = FUN_1801c2460(param_1,uVar3);
  if (cVar2 != '\0') {
    FUN_1800f2db0(*param_1,uVar3,param_3 + 0x35c);
  }
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"snow_density");
  cVar2 = FUN_1801c2460(param_1,uVar3);
  if (cVar2 != '\0') {
    FUN_1800f2db0(*param_1,uVar3,param_3 + 0x360);
  }
  FUN_18000f890(local_b8);
  uVar5 = 0;
  do {
    uVar1 = uVar5 + 1;
    uVar3 = FUN_18004e4f0(local_58,uVar1);
    uVar4 = FUN_180073a70(local_78,local_98,"bloom_blur_weight");
    uVar3 = FUN_180066820(local_b8,uVar4,uVar3);
    cVar2 = FUN_1801c2460(param_1,uVar3);
    if (cVar2 != '\0') {
      FUN_1800f2db0(*param_1,uVar3,param_3 + 0x1d0 + uVar5 * 4);
    }
    FUN_18000f890(local_b8);
    FUN_18000f890(local_78);
    FUN_18000f890(local_58);
    uVar3 = FUN_18004e4f0(local_b8,uVar1);
    uVar4 = FUN_180073a70(local_78,local_98,"bloom_blur_color");
    uVar3 = FUN_180066820(local_58,uVar4,uVar3);
    cVar2 = FUN_1801c2460(param_1,uVar3);
    if (cVar2 != '\0') {
      FUN_1801944c0(*param_1,uVar3,param_3 + 0x1e4 + uVar5 * 0x10);
    }
    FUN_18000f890(local_58);
    FUN_18000f890(local_78);
    FUN_18000f890(local_b8);
    uVar5 = uVar1;
  } while (uVar1 < 5);
  FUN_18000f890(local_98);
  return;
}



/* ===== 1801b1cf0 FUN_1801b1cf0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801b1cf0(undefined8 *param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [32];
  undefined1 local_68 [32];
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_a8;
  FUN_180073a70(local_68,param_2,"aimbot.");
  uVar2 = FUN_180073a70(local_88,local_68,"enabled");
  FUN_1801696b0(param_1,uVar2,param_3);
  FUN_18000f890(local_88);
  uVar2 = FUN_180073a70(local_88,local_68,"activation");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1800f2db0(*param_1,uVar2,param_3 + 4);
  }
  FUN_18000f890(local_88);
  uVar2 = FUN_180073a70(local_88,local_68,"conditions");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_180151c10(*param_1,uVar2,param_3 + 8);
  }
  FUN_18000f890(local_88);
  uVar2 = FUN_180073a70(local_88,local_68,"penetration_limit");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1800f2db0(*param_1,uVar2,param_3 + 0x10);
  }
  FUN_18000f890(local_88);
  uVar2 = FUN_180073a70(local_88,local_68,"smoke_threshold");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1800f2db0(*param_1,uVar2,param_3 + 0x14);
  }
  FUN_18000f890(local_88);
  uVar2 = FUN_180073a70(local_88,local_68,"flash_threshold");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1800f2db0(*param_1,uVar2,param_3 + 0x18);
  }
  FUN_18000f890(local_88);
  uVar2 = FUN_180073a70(local_88,local_68,"hitboxes");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_180151e90(*param_1,uVar2,param_3 + 0x1c);
  }
  FUN_18000f890(local_88);
  uVar2 = FUN_180073a70(local_88,local_68,"prefer_center");
  FUN_1801696b0(param_1,uVar2,param_3 + 0x21);
  FUN_18000f890(local_88);
  uVar2 = FUN_180073a70(local_88,local_68,"field_of_view");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1800f2e20(*param_1,uVar2,param_3 + 0x24);
  }
  FUN_18000f890(local_88);
  uVar2 = FUN_180073a70(local_88,local_68,"smoothing");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1800f2db0(*param_1,uVar2,param_3 + 0x28);
  }
  FUN_18000f890(local_88);
  uVar2 = FUN_180073a70(local_88,local_68,"first_bullet_delay");
  FUN_1801696b0(param_1,uVar2,param_3 + 0x2c);
  FUN_18000f890(local_88);
  uVar2 = FUN_180073a70(local_88,local_68,"curve_factor");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1800f2db0(*param_1,uVar2,param_3 + 0x30);
  }
  FUN_18000f890(local_88);
  uVar2 = FUN_180073a70(local_88,local_68,"easing_out");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1800f2db0(*param_1,uVar2,param_3 + 0x34);
  }
  FUN_18000f890(local_88);
  uVar2 = FUN_180073a70(local_88,local_68,"reaction_time");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1800f2db0(*param_1,uVar2,param_3 + 0x38);
  }
  FUN_18000f890(local_88);
  uVar2 = FUN_180073a70(local_88,local_68,"target_switch_delay");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1800f2db0(*param_1,uVar2,param_3 + 0x3c);
  }
  FUN_18000f890(local_88);
  uVar2 = FUN_180073a70(local_88,local_68,"min_damage");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1800f2db0(*param_1,uVar2,param_3 + 0x40);
  }
  FUN_18000f890(local_88);
  uVar2 = FUN_180073a70(local_88,local_68,"recoil_control");
  FUN_1801696b0(param_1,uVar2,param_3 + 0x44);
  FUN_18000f890(local_88);
  uVar2 = FUN_180073a70(local_88,local_68,"recoil.");
  FUN_1801b2620(param_1,uVar2,param_3 + 0x48);
  FUN_18000f890(local_88);
  uVar2 = FUN_180073a70(local_88,local_68,"quick_scope");
  FUN_1801696b0(param_1,uVar2,param_3 + 0x5c);
  FUN_18000f890(local_88);
  uVar2 = FUN_180073a70(local_88,local_68,"automatic_unzoom");
  FUN_1801696b0(param_1,uVar2,param_3 + 0x5d);
  FUN_18000f890(local_88);
  uVar2 = FUN_180073a70(local_88,local_68,"quick_stop");
  FUN_1801696b0(param_1,uVar2,param_3 + 0x5e);
  FUN_18000f890(local_88);
  uVar2 = FUN_180073a70(local_88,local_68,"full_stop");
  FUN_1801696b0(param_1,uVar2,param_3 + 0x5f);
  FUN_18000f890(local_88);
  uVar2 = FUN_180073a70(local_88,local_68,"quick_stop_reaction_time");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1800f2db0(*param_1,uVar2,param_3 + 0x60);
  }
  FUN_18000f890(local_88);
  FUN_18000f890(local_68);
  FUN_180073a70(local_68,param_2,"triggerbot.");
  uVar2 = FUN_180073a70(local_88,local_68,"enabled");
  FUN_1801696b0(param_1,uVar2,param_4);
  FUN_18000f890(local_88);
  uVar2 = FUN_180073a70(local_88,local_68,"conditions");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_180151e90(*param_1,uVar2,param_4 + 1);
  }
  FUN_18000f890(local_88);
  uVar2 = FUN_180073a70(local_88,local_68,"penetration_limit");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1800f2db0(*param_1,uVar2,param_4 + 8);
  }
  FUN_18000f890(local_88);
  uVar2 = FUN_180073a70(local_88,local_68,"smoke_threshold");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1800f2db0(*param_1,uVar2,param_4 + 0xc);
  }
  FUN_18000f890(local_88);
  uVar2 = FUN_180073a70(local_88,local_68,"flash_threshold");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1800f2db0(*param_1,uVar2,param_4 + 0x10);
  }
  FUN_18000f890(local_88);
  uVar2 = FUN_180073a70(local_88,local_68,"hitboxes");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_180151e90(*param_1,uVar2,param_4 + 0x14);
  }
  FUN_18000f890(local_88);
  uVar2 = FUN_180073a70(local_88,local_68,"force_center");
  FUN_1801696b0(param_1,uVar2,param_4 + 0x19);
  FUN_18000f890(local_88);
  uVar2 = FUN_180073a70(local_88,local_68,"hit_chance");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1800f2db0(*param_1,uVar2,param_4 + 0x1c);
  }
  FUN_18000f890(local_88);
  uVar2 = FUN_180073a70(local_88,local_68,"ignore_spread");
  FUN_1801696b0(param_1,uVar2,param_4 + 0x20);
  FUN_18000f890(local_88);
  uVar2 = FUN_180073a70(local_88,local_68,"legitimacy_threshold");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1800f2db0(*param_1,uVar2,param_4 + 0x24);
  }
  FUN_18000f890(local_88);
  uVar2 = FUN_180073a70(local_88,local_68,"min_damage");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1800f2db0(*param_1,uVar2,param_4 + 0x28);
  }
  FUN_18000f890(local_88);
  uVar2 = FUN_180073a70(local_88,local_68,"reaction_time");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1800f2db0(*param_1,uVar2,param_4 + 0x2c);
  }
  FUN_18000f890(local_88);
  uVar2 = FUN_180073a70(local_88,local_68,"capture_delay");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1800f2db0(*param_1,uVar2,param_4 + 0x30);
  }
  FUN_18000f890(local_88);
  uVar2 = FUN_180073a70(local_88,local_68,"burst_time");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1800f2db0(*param_1,uVar2,param_4 + 0x34);
  }
  FUN_18000f890(local_88);
  uVar2 = FUN_180073a70(local_88,local_68,"quick_scope");
  FUN_1801696b0(param_1,uVar2,param_4 + 0x38);
  FUN_18000f890(local_88);
  uVar2 = FUN_180073a70(local_88,local_68,"automatic_unzoom");
  FUN_1801696b0(param_1,uVar2,param_4 + 0x39);
  FUN_18000f890(local_88);
  FUN_18000f890(local_68);
  return;
}



/* ===== 1801b2620 FUN_1801b2620 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801b2620(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined1 local_48 [32];
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_68;
  uVar2 = FUN_180073a70(local_48,param_2,"start_bullet");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1800f2db0(*param_1,uVar2,param_3);
  }
  FUN_18000f890(local_48);
  uVar2 = FUN_180073a70(local_48,param_2,"vertical");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1800f2db0(*param_1,uVar2,param_3 + 4);
  }
  FUN_18000f890(local_48);
  uVar2 = FUN_180073a70(local_48,param_2,"horizontal");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1800f2db0(*param_1,uVar2,param_3 + 8);
  }
  FUN_18000f890(local_48);
  uVar2 = FUN_180073a70(local_48,param_2,"dampening");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1800f2db0(*param_1,uVar2,param_3 + 0xc);
  }
  FUN_18000f890(local_48);
  uVar2 = FUN_180073a70(local_48,param_2,"crosshair_recovery");
  FUN_1801696b0(param_1,uVar2,param_3 + 0x10);
  FUN_18000f890(local_48);
  return;
}



/* ===== 1801b2790 FUN_1801b2790 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801b2790(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined1 local_48 [32];
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_68;
  uVar2 = FUN_180073a70(local_48,param_2,".enabled");
  FUN_1801696b0(param_1,uVar2,param_3);
  FUN_18000f890(local_48);
  uVar2 = FUN_180073a70(local_48,param_2,".color");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1801944c0(*param_1,uVar2,param_3 + 4);
  }
  FUN_18000f890(local_48);
  uVar2 = FUN_180073a70(local_48,param_2,".items");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1801c34d0(*param_1,uVar2,param_3 + 0x14);
  }
  FUN_18000f890(local_48);
  uVar2 = FUN_180073a70(local_48,param_2,".icon_inverted");
  FUN_1801696b0(param_1,uVar2,param_3 + 0x1c);
  FUN_18000f890(local_48);
  uVar2 = FUN_180073a70(local_48,param_2,".bar_background");
  FUN_1801696b0(param_1,uVar2,param_3 + 0x1d);
  FUN_18000f890(local_48);
  uVar2 = FUN_180073a70(local_48,param_2,".bar_shadow");
  FUN_1801696b0(param_1,uVar2,param_3 + 0x1e);
  FUN_18000f890(local_48);
  uVar2 = FUN_180073a70(local_48,param_2,".bar_shadow_color");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1801944c0(*param_1,uVar2,param_3 + 0x20);
  }
  FUN_18000f890(local_48);
  uVar2 = FUN_180073a70(local_48,param_2,".bar_format");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1800f2db0(*param_1,uVar2,param_3 + 0x30);
  }
  FUN_18000f890(local_48);
  return;
}



/* ===== 1801b2990 FUN_1801b2990 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801b2990(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined1 local_48 [32];
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_68;
  uVar2 = FUN_180073a70(local_48,param_2,".fade_offset");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1800f2db0(*param_1,uVar2,param_3);
  }
  FUN_18000f890(local_48);
  uVar2 = FUN_180073a70(local_48,param_2,".gradient_opacity");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1800f2db0(*param_1,uVar2,param_3 + 4);
  }
  FUN_18000f890(local_48);
  uVar2 = FUN_180073a70(local_48,param_2,".outline_opacity");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1800f2db0(*param_1,uVar2,param_3 + 8);
  }
  FUN_18000f890(local_48);
  uVar2 = FUN_180073a70(local_48,param_2,".glow_opacity");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1800f2db0(*param_1,uVar2,param_3 + 0xc);
  }
  FUN_18000f890(local_48);
  uVar2 = FUN_180073a70(local_48,param_2,".glow");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1800f2e20(*param_1,uVar2,param_3 + 0x10);
  }
  FUN_18000f890(local_48);
  return;
}



/* ===== 1801b2b10 FUN_1801b2b10 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801b2b10(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  ulonglong uVar1;
  char cVar2;
  undefined8 uVar3;
  int *piVar4;
  undefined8 uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [32];
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  undefined1 local_58 [32];
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStack_d8;
  FUN_180073a70(local_98,param_2,"ambience.");
  uVar3 = FUN_180073a70(local_b8,local_98,"nightmode");
  FUN_1801730b0(param_1,uVar3,param_3);
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"colorize_props");
  FUN_1801730b0(param_1,uVar3,param_3 + 0x18);
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"fullbright");
  FUN_1801730b0(param_1,uVar3,param_3 + 0x2c);
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"exposure");
  FUN_1801730b0(param_1,uVar3,param_3 + 0x40);
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"sunlight");
  FUN_1801730b0(param_1,uVar3,param_3 + 0x5c);
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"sun_override_rotation");
  FUN_1801730b0(param_1,uVar3,param_3 + 0x84);
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,&DAT_1806f8584);
  FUN_1801730b0(param_1,uVar3,param_3 + 0x94);
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,&DAT_1806f8588);
  FUN_1801730b0(param_1,uVar3,param_3 + 0x18c);
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"fog_override_skybox");
  FUN_1801730b0(param_1,uVar3,param_3 + 0x1a8);
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"fog_override_height");
  FUN_1801730b0(param_1,uVar3,param_3 + 0x1a9);
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"bloom");
  FUN_1801730b0(param_1,uVar3,param_3 + 0x1b8);
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"vignette");
  FUN_1801730b0(param_1,uVar3,param_3 + 0x234);
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"contrast");
  FUN_1801730b0(param_1,uVar3,param_3 + 600);
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"color_correction");
  FUN_1801730b0(param_1,uVar3,param_3 + 0x270);
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"cc_grayscale");
  FUN_1801730b0(param_1,uVar3,param_3 + 0x294);
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,&DAT_1806f85f0);
  FUN_1801730b0(param_1,uVar3,param_3 + 0x295);
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,&DAT_1806f85cc);
  FUN_1801730b0(param_1,uVar3,param_3 + 0x2ac);
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"wetness");
  FUN_1801730b0(param_1,uVar3,param_3 + 0x2c4);
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"wetness_ignore_sky");
  FUN_1801730b0(param_1,uVar3,param_3 + 0x2d4);
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"remove_fog");
  FUN_1801730b0(param_1,uVar3,param_3 + 0x364);
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"remove_sunlight");
  FUN_1801730b0(param_1,uVar3,param_3 + 0x365);
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"remove_viewmodel_sunlight");
  FUN_1801730b0(param_1,uVar3,param_3 + 0x366);
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"remove_barnlights");
  FUN_1801730b0(param_1,uVar3,param_3 + 0x367);
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"remove_baked_shadows");
  FUN_1801730b0(param_1,uVar3,param_3 + 0x368);
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"remove_dynamic_shadows");
  FUN_1801730b0(param_1,uVar3,param_3 + 0x369);
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"remove_post_processing");
  FUN_1801730b0(param_1,uVar3,param_3 + 0x36a);
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"remove_skybox_2d");
  FUN_1801730b0(param_1,uVar3,param_3 + 0x36b);
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"remove_skybox_3d");
  FUN_1801730b0(param_1,uVar3,param_3 + 0x36c);
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"remove_cable_particles");
  FUN_1801730b0(param_1,uVar3,param_3 + 0x36d);
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"nightmode_color");
  cVar2 = FUN_1801c2460(param_1,uVar3);
  if (cVar2 != '\0') {
    FUN_18019e140(*param_1,uVar3,param_3 + 4);
  }
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"overlay_transparency");
  cVar2 = FUN_1801c2460(param_1,uVar3);
  if (cVar2 != '\0') {
    FUN_1800f3090(*param_1,uVar3,param_3 + 0x14);
  }
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"props_color");
  cVar2 = FUN_1801c2460(param_1,uVar3);
  if (cVar2 != '\0') {
    FUN_18019e140(*param_1,uVar3,param_3 + 0x1c);
  }
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"fullbright_color");
  cVar2 = FUN_1801c2460(param_1,uVar3);
  if (cVar2 != '\0') {
    FUN_18019e140(*param_1,uVar3,param_3 + 0x30);
  }
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"adaptation");
  cVar2 = FUN_1801c2460(param_1,uVar3);
  if (cVar2 != '\0') {
    FUN_1800f3090(*param_1,uVar3,param_3 + 0x44);
  }
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"compensation");
  FUN_180173150(param_1,uVar3,param_3 + 0x48);
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"exposure_min");
  FUN_180173150(param_1,uVar3,param_3 + 0x4c);
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"exposure_max");
  FUN_180173150(param_1,uVar3,param_3 + 0x50);
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"adaptation_speed");
  cVar2 = FUN_1801c2460(param_1,uVar3);
  if (cVar2 != '\0') {
    FUN_1800f3090(*param_1,uVar3,param_3 + 0x54);
  }
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"fixed_exposure");
  cVar2 = FUN_1801c2460(param_1,uVar3);
  if (cVar2 != '\0') {
    FUN_1800f3090(*param_1,uVar3,param_3 + 0x58);
  }
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"sun_illumination");
  cVar2 = FUN_1801c2460(param_1,uVar3);
  if (cVar2 != '\0') {
    FUN_18019e140(*param_1,uVar3,param_3 + 0x60);
  }
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"sun_reflection");
  cVar2 = FUN_1801c2460(param_1,uVar3);
  if (cVar2 != '\0') {
    FUN_18019e140(*param_1,uVar3,param_3 + 0x70);
  }
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"sun_method");
  cVar2 = FUN_1801c2460(param_1,uVar3);
  if (cVar2 != '\0') {
    FUN_1800f3090(*param_1,uVar3,param_3 + 0x80);
  }
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"sun_pitch");
  cVar2 = FUN_1801c2460(param_1,uVar3);
  if (cVar2 != '\0') {
    FUN_1800f3090(*param_1,uVar3,param_3 + 0x88);
  }
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"sun_yaw");
  cVar2 = FUN_1801c2460(param_1,uVar3);
  if (cVar2 != '\0') {
    FUN_1800f3090(*param_1,uVar3,param_3 + 0x8c);
  }
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"volumetric_brightness");
  cVar2 = FUN_1801c2460(param_1,uVar3);
  if (cVar2 != '\0') {
    FUN_1800f3090(*param_1,uVar3,param_3 + 0x90);
  }
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"sky_color");
  cVar2 = FUN_1801c2460(param_1,uVar3);
  if (cVar2 != '\0') {
    FUN_18019e140(*param_1,uVar3,param_3 + 0x98);
  }
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"clouds_color");
  cVar2 = FUN_1801c2460(param_1,uVar3);
  if (cVar2 != '\0') {
    FUN_18019e140(*param_1,uVar3,param_3 + 0xa8);
  }
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"sun_color");
  cVar2 = FUN_1801c2460(param_1,uVar3);
  if (cVar2 != '\0') {
    FUN_18019e140(*param_1,uVar3,param_3 + 0xb8);
  }
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"skybox");
  cVar2 = FUN_1801c2460(param_1,uVar3);
  if (cVar2 != '\0') {
    FUN_1800f3090(*param_1,uVar3,param_3 + 200);
  }
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"skybox_custom");
  cVar2 = FUN_1801c2460(param_1,uVar3);
  if (cVar2 != '\0') {
    piVar4 = (int *)FUN_1800f2fa0(*param_1,uVar3);
    if ((piVar4 != (int *)0x0) && (*piVar4 == 3)) {
      FUN_180540170(param_3 + 0xcc,0,0xc0);
      plVar6 = (longlong *)(piVar4 + 4);
      if (0xf < *(ulonglong *)(piVar4 + 10)) {
        plVar6 = (longlong *)*plVar6;
      }
      snprintf(param_3 + 0xcc,0xc0,&DAT_1806d3198,plVar6);
    }
  }
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"fog_color");
  cVar2 = FUN_1801c2460(param_1,uVar3);
  if (cVar2 != '\0') {
    FUN_18019e140(*param_1,uVar3,param_3 + 400);
  }
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"fog_distance");
  cVar2 = FUN_1801c2460(param_1,uVar3);
  if (cVar2 != '\0') {
    FUN_1800f3090(*param_1,uVar3,param_3 + 0x1a0);
  }
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"fog_exponent");
  FUN_180173150(param_1,uVar3,param_3 + 0x1a4);
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"fog_height_start");
  cVar2 = FUN_1801c2460(param_1,uVar3);
  if (cVar2 != '\0') {
    FUN_1800f3090(*param_1,uVar3,param_3 + 0x1ac);
  }
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"fog_height_end");
  cVar2 = FUN_1801c2460(param_1,uVar3);
  if (cVar2 != '\0') {
    FUN_1800f3090(*param_1,uVar3,param_3 + 0x1b0);
  }
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"fog_height_exponent");
  FUN_180173150(param_1,uVar3,param_3 + 0x1b4);
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"bloom_strength");
  cVar2 = FUN_1801c2460(param_1,uVar3);
  if (cVar2 != '\0') {
    FUN_1800f3090(*param_1,uVar3,param_3 + 0x1bc);
  }
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"bloom_screen_strength");
  cVar2 = FUN_1801c2460(param_1,uVar3);
  if (cVar2 != '\0') {
    FUN_1800f3090(*param_1,uVar3,param_3 + 0x1c0);
  }
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"bloom_blur_strength");
  cVar2 = FUN_1801c2460(param_1,uVar3);
  if (cVar2 != '\0') {
    FUN_1800f3090(*param_1,uVar3,param_3 + 0x1c4);
  }
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"bloom_threshold");
  cVar2 = FUN_1801c2460(param_1,uVar3);
  if (cVar2 != '\0') {
    FUN_1800f3090(*param_1,uVar3,param_3 + 0x1c8);
  }
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"bloom_threshold_width");
  cVar2 = FUN_1801c2460(param_1,uVar3);
  if (cVar2 != '\0') {
    FUN_1800f3090(*param_1,uVar3,param_3 + 0x1cc);
  }
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"vignette_color");
  cVar2 = FUN_1801c2460(param_1,uVar3);
  if (cVar2 != '\0') {
    FUN_18019e140(*param_1,uVar3,param_3 + 0x238);
  }
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"vignette_strength");
  cVar2 = FUN_1801c2460(param_1,uVar3);
  if (cVar2 != '\0') {
    FUN_1800f3090(*param_1,uVar3,param_3 + 0x248);
  }
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"vignette_radius");
  cVar2 = FUN_1801c2460(param_1,uVar3);
  if (cVar2 != '\0') {
    FUN_1800f3090(*param_1,uVar3,param_3 + 0x24c);
  }
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"vignette_roundness");
  cVar2 = FUN_1801c2460(param_1,uVar3);
  if (cVar2 != '\0') {
    FUN_1800f3090(*param_1,uVar3,param_3 + 0x250);
  }
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"vignette_feather");
  cVar2 = FUN_1801c2460(param_1,uVar3);
  if (cVar2 != '\0') {
    FUN_1800f3090(*param_1,uVar3,param_3 + 0x254);
  }
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"contrast_strength");
  cVar2 = FUN_1801c2460(param_1,uVar3);
  if (cVar2 != '\0') {
    FUN_1800f3090(*param_1,uVar3,param_3 + 0x25c);
  }
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"contrast_edge");
  cVar2 = FUN_1801c2460(param_1,uVar3);
  if (cVar2 != '\0') {
    FUN_1800f3090(*param_1,uVar3,param_3 + 0x260);
  }
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"contrast_vignette_start");
  cVar2 = FUN_1801c2460(param_1,uVar3);
  if (cVar2 != '\0') {
    FUN_1800f3090(*param_1,uVar3,param_3 + 0x264);
  }
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"contrast_vignette_end");
  cVar2 = FUN_1801c2460(param_1,uVar3);
  if (cVar2 != '\0') {
    FUN_1800f3090(*param_1,uVar3,param_3 + 0x268);
  }
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"contrast_vignette_blur");
  cVar2 = FUN_1801c2460(param_1,uVar3);
  if (cVar2 != '\0') {
    FUN_1800f3090(*param_1,uVar3,param_3 + 0x26c);
  }
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"tone_curve");
  cVar2 = FUN_1801c2460(param_1,uVar3);
  if (cVar2 != '\0') {
    FUN_1800f3090(*param_1,uVar3,param_3 + 0x274);
  }
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"cc_contrast");
  cVar2 = FUN_1801c2460(param_1,uVar3);
  if (cVar2 != '\0') {
    FUN_1800f3090(*param_1,uVar3,param_3 + 0x278);
  }
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"cc_highlights");
  cVar2 = FUN_1801c2460(param_1,uVar3);
  if (cVar2 != '\0') {
    FUN_1800f3090(*param_1,uVar3,param_3 + 0x27c);
  }
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"cc_shadows");
  cVar2 = FUN_1801c2460(param_1,uVar3);
  if (cVar2 != '\0') {
    FUN_1800f3090(*param_1,uVar3,param_3 + 0x280);
  }
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"cc_saturation");
  cVar2 = FUN_1801c2460(param_1,uVar3);
  if (cVar2 != '\0') {
    FUN_1800f3090(*param_1,uVar3,param_3 + 0x284);
  }
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"cc_vibrance");
  cVar2 = FUN_1801c2460(param_1,uVar3);
  if (cVar2 != '\0') {
    FUN_1800f3090(*param_1,uVar3,param_3 + 0x288);
  }
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"cc_temperature");
  cVar2 = FUN_1801c2460(param_1,uVar3);
  if (cVar2 != '\0') {
    FUN_1800f3090(*param_1,uVar3,param_3 + 0x28c);
  }
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"cc_tint");
  cVar2 = FUN_1801c2460(param_1,uVar3);
  if (cVar2 != '\0') {
    FUN_1800f3090(*param_1,uVar3,param_3 + 0x290);
  }
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"dof_mode");
  cVar2 = FUN_1801c2460(param_1,uVar3);
  if (cVar2 != '\0') {
    FUN_1800f3090(*param_1,uVar3,param_3 + 0x298);
  }
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"dof_quality");
  cVar2 = FUN_1801c2460(param_1,uVar3);
  if (cVar2 != '\0') {
    FUN_1800f3090(*param_1,uVar3,param_3 + 0x29c);
  }
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"dof_focus_distance");
  cVar2 = FUN_1801c2460(param_1,uVar3);
  if (cVar2 != '\0') {
    FUN_1800f3090(*param_1,uVar3,param_3 + 0x2a0);
  }
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"dof_focus_speed");
  cVar2 = FUN_1801c2460(param_1,uVar3);
  if (cVar2 != '\0') {
    FUN_1800f3090(*param_1,uVar3,param_3 + 0x2a4);
  }
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"dof_focus_range");
  cVar2 = FUN_1801c2460(param_1,uVar3);
  if (cVar2 != '\0') {
    FUN_1800f3090(*param_1,uVar3,param_3 + 0x2a8);
  }
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"wind_direction");
  cVar2 = FUN_1801c2460(param_1,uVar3);
  if (cVar2 != '\0') {
    FUN_1800f3090(*param_1,uVar3,param_3 + 0x2b0);
  }
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"wind_strength");
  FUN_180173150(param_1,uVar3,param_3 + 0x2b4);
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"wetness_rain");
  cVar2 = FUN_1801c2460(param_1,uVar3);
  if (cVar2 != '\0') {
    FUN_1800f3090(*param_1,uVar3,param_3 + 0x2c8);
  }
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"wetness_coverage");
  cVar2 = FUN_1801c2460(param_1,uVar3);
  if (cVar2 != '\0') {
    FUN_1800f3090(*param_1,uVar3,param_3 + 0x2cc);
  }
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"wetness_drying");
  cVar2 = FUN_1801c2460(param_1,uVar3);
  if (cVar2 != '\0') {
    FUN_1800f3090(*param_1,uVar3,param_3 + 0x2d0);
  }
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"wind_particle_strength");
  FUN_180173150(param_1,uVar3,param_3 + 0x2b8);
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"wind_turbulence");
  FUN_180173150(param_1,uVar3,param_3 + 700);
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"wind_max_tilt");
  FUN_180173150(param_1,uVar3,param_3 + 0x2c0);
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"thunder");
  FUN_1801730b0(param_1,uVar3,param_3 + 0x2d5);
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"thunder_primary");
  cVar2 = FUN_1801c2460(param_1,uVar3);
  if (cVar2 != '\0') {
    FUN_18019e140(*param_1,uVar3,param_3 + 0x2d8);
  }
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"thunder_glow");
  cVar2 = FUN_1801c2460(param_1,uVar3);
  if (cVar2 != '\0') {
    FUN_18019e140(*param_1,uVar3,param_3 + 0x2e8);
  }
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"thunder_interval");
  FUN_180173150(param_1,uVar3,param_3 + 0x2f8);
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"thunder_duration");
  FUN_180173150(param_1,uVar3,param_3 + 0x2fc);
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"thunder_sound");
  FUN_1801730b0(param_1,uVar3,param_3 + 0x300);
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"thunder_on_kill");
  FUN_1801730b0(param_1,uVar3,param_3 + 0x301);
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,&DAT_1806f8bfc);
  FUN_1801730b0(param_1,uVar3,param_3 + 0x302);
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"rain_primary");
  cVar2 = FUN_1801c2460(param_1,uVar3);
  if (cVar2 != '\0') {
    FUN_18019e140(*param_1,uVar3,param_3 + 0x304);
  }
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"rain_glow");
  cVar2 = FUN_1801c2460(param_1,uVar3);
  if (cVar2 != '\0') {
    FUN_18019e140(*param_1,uVar3,param_3 + 0x314);
  }
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"rain_speed");
  cVar2 = FUN_1801c2460(param_1,uVar3);
  if (cVar2 != '\0') {
    FUN_1800f3090(*param_1,uVar3,param_3 + 0x324);
  }
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"rain_radius");
  cVar2 = FUN_1801c2460(param_1,uVar3);
  if (cVar2 != '\0') {
    FUN_1800f3090(*param_1,uVar3,param_3 + 0x328);
  }
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"rain_density");
  cVar2 = FUN_1801c2460(param_1,uVar3);
  if (cVar2 != '\0') {
    FUN_1800f3090(*param_1,uVar3,param_3 + 0x32c);
  }
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"rain_center_bias");
  cVar2 = FUN_1801c2460(param_1,uVar3);
  if (cVar2 != '\0') {
    FUN_1800f3090(*param_1,uVar3,param_3 + 0x330);
  }
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"rain_sound");
  FUN_1801730b0(param_1,uVar3,param_3 + 0x334);
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,&DAT_1806f8c7c);
  FUN_1801730b0(param_1,uVar3,param_3 + 0x335);
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"snow_primary");
  cVar2 = FUN_1801c2460(param_1,uVar3);
  if (cVar2 != '\0') {
    FUN_18019e140(*param_1,uVar3,param_3 + 0x338);
  }
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"snow_glow");
  cVar2 = FUN_1801c2460(param_1,uVar3);
  if (cVar2 != '\0') {
    FUN_18019e140(*param_1,uVar3,param_3 + 0x348);
  }
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"snow_speed");
  cVar2 = FUN_1801c2460(param_1,uVar3);
  if (cVar2 != '\0') {
    FUN_1800f3090(*param_1,uVar3,param_3 + 0x358);
  }
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"snow_radius");
  cVar2 = FUN_1801c2460(param_1,uVar3);
  if (cVar2 != '\0') {
    FUN_1800f3090(*param_1,uVar3,param_3 + 0x35c);
  }
  FUN_18000f890(local_b8);
  uVar3 = FUN_180073a70(local_b8,local_98,"snow_density");
  cVar2 = FUN_1801c2460(param_1,uVar3);
  if (cVar2 != '\0') {
    FUN_1800f3090(*param_1,uVar3,param_3 + 0x360);
  }
  FUN_18000f890(local_b8);
  uVar7 = 0;
  do {
    uVar1 = uVar7 + 1;
    uVar3 = FUN_18004e4f0(local_58,uVar1);
    uVar5 = FUN_180073a70(local_78,local_98,"bloom_blur_weight");
    uVar3 = FUN_180066820(local_b8,uVar5,uVar3);
    cVar2 = FUN_1801c2460(param_1,uVar3);
    if (cVar2 != '\0') {
      FUN_1800f3090(*param_1,uVar3,param_3 + 0x1d0 + uVar7 * 4);
    }
    FUN_18000f890(local_b8);
    FUN_18000f890(local_78);
    FUN_18000f890(local_58);
    uVar3 = FUN_18004e4f0(local_b8,uVar1);
    uVar5 = FUN_180073a70(local_78,local_98,"bloom_blur_color");
    uVar3 = FUN_180066820(local_58,uVar5,uVar3);
    cVar2 = FUN_1801c2460(param_1,uVar3);
    if (cVar2 != '\0') {
      FUN_18019e140(*param_1,uVar3,param_3 + 0x1e4 + uVar7 * 0x10);
    }
    FUN_18000f890(local_58);
    FUN_18000f890(local_78);
    FUN_18000f890(local_b8);
    uVar7 = uVar1;
  } while (uVar1 < 5);
  FUN_18000f890(local_98);
  return;
}



/* ===== 1801b46b0 FUN_1801b46b0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801b46b0(undefined8 *param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [32];
  undefined1 local_68 [32];
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_a8;
  FUN_180073a70(local_68,param_2,"aimbot.");
  uVar2 = FUN_180073a70(local_88,local_68,"enabled");
  FUN_1801730b0(param_1,uVar2,param_3);
  FUN_18000f890(local_88);
  uVar2 = FUN_180073a70(local_88,local_68,"activation");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1800f3090(*param_1,uVar2,param_3 + 4);
  }
  FUN_18000f890(local_88);
  uVar2 = FUN_180073a70(local_88,local_68,"conditions");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_180152130(*param_1,uVar2,param_3 + 8);
  }
  FUN_18000f890(local_88);
  uVar2 = FUN_180073a70(local_88,local_68,"penetration_limit");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1800f3090(*param_1,uVar2,param_3 + 0x10);
  }
  FUN_18000f890(local_88);
  uVar2 = FUN_180073a70(local_88,local_68,"smoke_threshold");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1800f3090(*param_1,uVar2,param_3 + 0x14);
  }
  FUN_18000f890(local_88);
  uVar2 = FUN_180073a70(local_88,local_68,"flash_threshold");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1800f3090(*param_1,uVar2,param_3 + 0x18);
  }
  FUN_18000f890(local_88);
  uVar2 = FUN_180073a70(local_88,local_68,"hitboxes");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_180152490(*param_1,uVar2,param_3 + 0x1c);
  }
  FUN_18000f890(local_88);
  uVar2 = FUN_180073a70(local_88,local_68,"prefer_center");
  FUN_1801730b0(param_1,uVar2,param_3 + 0x21);
  FUN_18000f890(local_88);
  uVar2 = FUN_180073a70(local_88,local_68,"field_of_view");
  FUN_180173150(param_1,uVar2,param_3 + 0x24);
  FUN_18000f890(local_88);
  uVar2 = FUN_180073a70(local_88,local_68,"smoothing");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1800f3090(*param_1,uVar2,param_3 + 0x28);
  }
  FUN_18000f890(local_88);
  uVar2 = FUN_180073a70(local_88,local_68,"first_bullet_delay");
  FUN_1801730b0(param_1,uVar2,param_3 + 0x2c);
  FUN_18000f890(local_88);
  uVar2 = FUN_180073a70(local_88,local_68,"curve_factor");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1800f3090(*param_1,uVar2,param_3 + 0x30);
  }
  FUN_18000f890(local_88);
  uVar2 = FUN_180073a70(local_88,local_68,"easing_out");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1800f3090(*param_1,uVar2,param_3 + 0x34);
  }
  FUN_18000f890(local_88);
  uVar2 = FUN_180073a70(local_88,local_68,"reaction_time");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1800f3090(*param_1,uVar2,param_3 + 0x38);
  }
  FUN_18000f890(local_88);
  uVar2 = FUN_180073a70(local_88,local_68,"target_switch_delay");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1800f3090(*param_1,uVar2,param_3 + 0x3c);
  }
  FUN_18000f890(local_88);
  uVar2 = FUN_180073a70(local_88,local_68,"min_damage");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1800f3090(*param_1,uVar2,param_3 + 0x40);
  }
  FUN_18000f890(local_88);
  uVar2 = FUN_180073a70(local_88,local_68,"recoil_control");
  FUN_1801730b0(param_1,uVar2,param_3 + 0x44);
  FUN_18000f890(local_88);
  uVar2 = FUN_180073a70(local_88,local_68,"recoil.");
  FUN_1801b4fd0(param_1,uVar2,param_3 + 0x48);
  FUN_18000f890(local_88);
  uVar2 = FUN_180073a70(local_88,local_68,"quick_scope");
  FUN_1801730b0(param_1,uVar2,param_3 + 0x5c);
  FUN_18000f890(local_88);
  uVar2 = FUN_180073a70(local_88,local_68,"automatic_unzoom");
  FUN_1801730b0(param_1,uVar2,param_3 + 0x5d);
  FUN_18000f890(local_88);
  uVar2 = FUN_180073a70(local_88,local_68,"quick_stop");
  FUN_1801730b0(param_1,uVar2,param_3 + 0x5e);
  FUN_18000f890(local_88);
  uVar2 = FUN_180073a70(local_88,local_68,"full_stop");
  FUN_1801730b0(param_1,uVar2,param_3 + 0x5f);
  FUN_18000f890(local_88);
  uVar2 = FUN_180073a70(local_88,local_68,"quick_stop_reaction_time");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1800f3090(*param_1,uVar2,param_3 + 0x60);
  }
  FUN_18000f890(local_88);
  FUN_18000f890(local_68);
  FUN_180073a70(local_68,param_2,"triggerbot.");
  uVar2 = FUN_180073a70(local_88,local_68,"enabled");
  FUN_1801730b0(param_1,uVar2,param_4);
  FUN_18000f890(local_88);
  uVar2 = FUN_180073a70(local_88,local_68,"conditions");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_180152490(*param_1,uVar2,param_4 + 1);
  }
  FUN_18000f890(local_88);
  uVar2 = FUN_180073a70(local_88,local_68,"penetration_limit");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1800f3090(*param_1,uVar2,param_4 + 8);
  }
  FUN_18000f890(local_88);
  uVar2 = FUN_180073a70(local_88,local_68,"smoke_threshold");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1800f3090(*param_1,uVar2,param_4 + 0xc);
  }
  FUN_18000f890(local_88);
  uVar2 = FUN_180073a70(local_88,local_68,"flash_threshold");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1800f3090(*param_1,uVar2,param_4 + 0x10);
  }
  FUN_18000f890(local_88);
  uVar2 = FUN_180073a70(local_88,local_68,"hitboxes");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_180152490(*param_1,uVar2,param_4 + 0x14);
  }
  FUN_18000f890(local_88);
  uVar2 = FUN_180073a70(local_88,local_68,"force_center");
  FUN_1801730b0(param_1,uVar2,param_4 + 0x19);
  FUN_18000f890(local_88);
  uVar2 = FUN_180073a70(local_88,local_68,"hit_chance");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1800f3090(*param_1,uVar2,param_4 + 0x1c);
  }
  FUN_18000f890(local_88);
  uVar2 = FUN_180073a70(local_88,local_68,"ignore_spread");
  FUN_1801730b0(param_1,uVar2,param_4 + 0x20);
  FUN_18000f890(local_88);
  uVar2 = FUN_180073a70(local_88,local_68,"legitimacy_threshold");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1800f3090(*param_1,uVar2,param_4 + 0x24);
  }
  FUN_18000f890(local_88);
  uVar2 = FUN_180073a70(local_88,local_68,"min_damage");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1800f3090(*param_1,uVar2,param_4 + 0x28);
  }
  FUN_18000f890(local_88);
  uVar2 = FUN_180073a70(local_88,local_68,"reaction_time");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1800f3090(*param_1,uVar2,param_4 + 0x2c);
  }
  FUN_18000f890(local_88);
  uVar2 = FUN_180073a70(local_88,local_68,"capture_delay");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1800f3090(*param_1,uVar2,param_4 + 0x30);
  }
  FUN_18000f890(local_88);
  uVar2 = FUN_180073a70(local_88,local_68,"burst_time");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1800f3090(*param_1,uVar2,param_4 + 0x34);
  }
  FUN_18000f890(local_88);
  uVar2 = FUN_180073a70(local_88,local_68,"quick_scope");
  FUN_1801730b0(param_1,uVar2,param_4 + 0x38);
  FUN_18000f890(local_88);
  uVar2 = FUN_180073a70(local_88,local_68,"automatic_unzoom");
  FUN_1801730b0(param_1,uVar2,param_4 + 0x39);
  FUN_18000f890(local_88);
  FUN_18000f890(local_68);
  return;
}



/* ===== 1801b4fd0 FUN_1801b4fd0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801b4fd0(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined1 local_48 [32];
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_68;
  uVar2 = FUN_180073a70(local_48,param_2,"start_bullet");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1800f3090(*param_1,uVar2,param_3);
  }
  FUN_18000f890(local_48);
  uVar2 = FUN_180073a70(local_48,param_2,"vertical");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1800f3090(*param_1,uVar2,param_3 + 4);
  }
  FUN_18000f890(local_48);
  uVar2 = FUN_180073a70(local_48,param_2,"horizontal");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1800f3090(*param_1,uVar2,param_3 + 8);
  }
  FUN_18000f890(local_48);
  uVar2 = FUN_180073a70(local_48,param_2,"dampening");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1800f3090(*param_1,uVar2,param_3 + 0xc);
  }
  FUN_18000f890(local_48);
  uVar2 = FUN_180073a70(local_48,param_2,"crosshair_recovery");
  FUN_1801730b0(param_1,uVar2,param_3 + 0x10);
  FUN_18000f890(local_48);
  return;
}



/* ===== 1801b5140 FUN_1801b5140 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801b5140(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined1 local_48 [32];
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_68;
  uVar2 = FUN_180073a70(local_48,param_2,".enabled");
  FUN_1801730b0(param_1,uVar2,param_3);
  FUN_18000f890(local_48);
  uVar2 = FUN_180073a70(local_48,param_2,".color");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_18019e140(*param_1,uVar2,param_3 + 4);
  }
  FUN_18000f890(local_48);
  uVar2 = FUN_180073a70(local_48,param_2,".items");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1801c37b0(*param_1,uVar2,param_3 + 0x14);
  }
  FUN_18000f890(local_48);
  uVar2 = FUN_180073a70(local_48,param_2,".icon_inverted");
  FUN_1801730b0(param_1,uVar2,param_3 + 0x1c);
  FUN_18000f890(local_48);
  uVar2 = FUN_180073a70(local_48,param_2,".bar_background");
  FUN_1801730b0(param_1,uVar2,param_3 + 0x1d);
  FUN_18000f890(local_48);
  uVar2 = FUN_180073a70(local_48,param_2,".bar_shadow");
  FUN_1801730b0(param_1,uVar2,param_3 + 0x1e);
  FUN_18000f890(local_48);
  uVar2 = FUN_180073a70(local_48,param_2,".bar_shadow_color");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_18019e140(*param_1,uVar2,param_3 + 0x20);
  }
  FUN_18000f890(local_48);
  uVar2 = FUN_180073a70(local_48,param_2,".bar_format");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1800f3090(*param_1,uVar2,param_3 + 0x30);
  }
  FUN_18000f890(local_48);
  return;
}



/* ===== 1801b5340 FUN_1801b5340 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801b5340(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined1 local_48 [32];
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_68;
  uVar2 = FUN_180073a70(local_48,param_2,".fade_offset");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1800f3090(*param_1,uVar2,param_3);
  }
  FUN_18000f890(local_48);
  uVar2 = FUN_180073a70(local_48,param_2,".gradient_opacity");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1800f3090(*param_1,uVar2,param_3 + 4);
  }
  FUN_18000f890(local_48);
  uVar2 = FUN_180073a70(local_48,param_2,".outline_opacity");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1800f3090(*param_1,uVar2,param_3 + 8);
  }
  FUN_18000f890(local_48);
  uVar2 = FUN_180073a70(local_48,param_2,".glow_opacity");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1800f3090(*param_1,uVar2,param_3 + 0xc);
  }
  FUN_18000f890(local_48);
  uVar2 = FUN_180073a70(local_48,param_2,".glow");
  FUN_180173150(param_1,uVar2,param_3 + 0x10);
  FUN_18000f890(local_48);
  return;
}



/* ===== 1801b54b0 FUN_1801b54b0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801b54b0(undefined8 *param_1,undefined8 param_2,char *param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong *plVar3;
  int iVar4;
  undefined8 *puVar5;
  size_t sVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  ulonglong uVar11;
  char *_Str;
  undefined1 auStack_b28 [32];
  undefined1 local_b08 [32];
  undefined1 local_ae8 [32];
  undefined1 local_ac8 [32];
  undefined1 local_aa8 [32];
  undefined1 local_a88 [32];
  undefined1 local_a68 [32];
  undefined1 local_a48 [32];
  undefined1 local_a28 [32];
  undefined1 local_a08 [32];
  undefined1 local_9e8 [32];
  undefined1 local_9c8 [32];
  undefined1 local_9a8 [32];
  undefined1 local_988 [32];
  undefined1 local_968 [32];
  undefined1 local_948 [32];
  undefined1 local_928 [32];
  undefined1 local_908 [32];
  undefined1 local_8e8 [32];
  undefined1 local_8c8 [32];
  undefined1 local_8a8 [32];
  undefined1 local_888 [32];
  undefined1 local_868 [32];
  undefined1 local_848 [32];
  undefined1 local_828 [32];
  undefined1 local_808 [32];
  undefined1 local_7e8 [32];
  undefined1 local_7c8 [32];
  undefined1 local_7a8 [32];
  undefined1 local_788 [32];
  undefined1 local_768 [32];
  undefined1 local_748 [32];
  undefined1 local_728 [32];
  undefined1 local_708 [32];
  undefined1 local_6e8 [32];
  undefined1 local_6c8 [32];
  undefined1 local_6a8 [32];
  undefined1 local_688 [32];
  undefined1 local_668 [32];
  undefined1 local_648 [32];
  undefined1 local_628 [32];
  undefined1 local_608 [32];
  undefined1 local_5e8 [32];
  undefined1 local_5c8 [32];
  undefined1 local_5a8 [32];
  undefined1 local_588 [32];
  undefined1 local_568 [32];
  undefined1 local_548 [32];
  undefined1 local_528 [32];
  undefined1 local_508 [32];
  undefined1 local_4e8 [32];
  undefined1 local_4c8 [32];
  undefined1 local_4a8 [32];
  undefined1 local_488 [32];
  undefined1 local_468 [32];
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
  undefined1 local_2c8 [32];
  undefined1 local_2a8 [32];
  undefined1 local_288 [32];
  undefined1 local_268 [32];
  undefined1 local_248 [32];
  undefined1 local_228 [32];
  undefined1 local_208 [32];
  undefined1 local_1e8 [32];
  undefined1 local_1c8 [32];
  undefined1 local_1a8 [32];
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
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_b28;
  FUN_180073a70(local_b08,param_2,"ambience.");
  puVar5 = (undefined8 *)FUN_180073a70(local_2e8,local_b08,"nightmode");
  plVar1 = param_1 + 1;
  plVar3 = (longlong *)*plVar1;
  plVar10 = plVar3;
  if ((ulonglong)plVar3[3] < 0x10) {
    plVar10 = plVar1;
  }
  sVar6 = puVar5[2];
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar9 = puVar5;
  }
  else {
    puVar9 = (undefined8 *)*puVar5;
  }
  if (sVar6 == plVar3[2]) {
    if (sVar6 != 0) {
      iVar4 = memcmp(puVar9,(void *)*plVar10,sVar6);
      if (iVar4 != 0) goto LAB_1801b5586;
    }
    uVar7 = *param_1;
    FUN_1800f2cb0(uVar7,puVar5);
    _Str = "false";
    if (*param_3 != '\0') {
      _Str = "true";
    }
    sVar6 = strlen(_Str);
    FUN_1800134a0(uVar7,_Str,sVar6);
  }
LAB_1801b5586:
  FUN_18000f890(local_2e8);
  uVar7 = FUN_180073a70(local_ae8,local_b08,"colorize_props");
  FUN_18017c1d0(param_1,uVar7,param_3 + 0x18);
  FUN_18000f890(local_ae8);
  uVar7 = FUN_180073a70(local_ae8,local_b08,"fullbright");
  FUN_18017c1d0(param_1,uVar7,param_3 + 0x2c);
  FUN_18000f890(local_ae8);
  uVar7 = FUN_180073a70(local_ae8,local_b08,"exposure");
  FUN_18017c1d0(param_1,uVar7,param_3 + 0x40);
  FUN_18000f890(local_ae8);
  uVar7 = FUN_180073a70(local_ae8,local_b08,"sunlight");
  FUN_18017c1d0(param_1,uVar7,param_3 + 0x5c);
  FUN_18000f890(local_ae8);
  uVar7 = FUN_180073a70(local_ae8,local_b08,"sun_override_rotation");
  FUN_18017c1d0(param_1,uVar7,param_3 + 0x84);
  FUN_18000f890(local_ae8);
  uVar7 = FUN_180073a70(local_ae8,local_b08,&DAT_1806f8584);
  FUN_18017c1d0(param_1,uVar7,param_3 + 0x94);
  FUN_18000f890(local_ae8);
  uVar7 = FUN_180073a70(local_ae8,local_b08,&DAT_1806f8588);
  FUN_18017c1d0(param_1,uVar7,param_3 + 0x18c);
  FUN_18000f890(local_ae8);
  uVar7 = FUN_180073a70(local_ae8,local_b08,"fog_override_skybox");
  FUN_18017c1d0(param_1,uVar7,param_3 + 0x1a8);
  FUN_18000f890(local_ae8);
  uVar7 = FUN_180073a70(local_ae8,local_b08,"fog_override_height");
  FUN_18017c1d0(param_1,uVar7,param_3 + 0x1a9);
  FUN_18000f890(local_ae8);
  uVar7 = FUN_180073a70(local_ae8,local_b08,"bloom");
  FUN_18017c1d0(param_1,uVar7,param_3 + 0x1b8);
  FUN_18000f890(local_ae8);
  uVar7 = FUN_180073a70(local_ae8,local_b08,"vignette");
  FUN_18017c1d0(param_1,uVar7,param_3 + 0x234);
  FUN_18000f890(local_ae8);
  uVar7 = FUN_180073a70(local_ae8,local_b08,"contrast");
  FUN_18017c1d0(param_1,uVar7,param_3 + 600);
  FUN_18000f890(local_ae8);
  uVar7 = FUN_180073a70(local_ae8,local_b08,"color_correction");
  FUN_18017c1d0(param_1,uVar7,param_3 + 0x270);
  FUN_18000f890(local_ae8);
  uVar7 = FUN_180073a70(local_ae8,local_b08,"cc_grayscale");
  FUN_18017c1d0(param_1,uVar7,param_3 + 0x294);
  FUN_18000f890(local_ae8);
  uVar7 = FUN_180073a70(local_ae8,local_b08,&DAT_1806f85f0);
  FUN_18017c1d0(param_1,uVar7,param_3 + 0x295);
  FUN_18000f890(local_ae8);
  uVar7 = FUN_180073a70(local_ae8,local_b08,&DAT_1806f85cc);
  FUN_18017c1d0(param_1,uVar7,param_3 + 0x2ac);
  FUN_18000f890(local_ae8);
  uVar7 = FUN_180073a70(local_ae8,local_b08,"wetness");
  FUN_18017c1d0(param_1,uVar7,param_3 + 0x2c4);
  FUN_18000f890(local_ae8);
  uVar7 = FUN_180073a70(local_ae8,local_b08,"wetness_ignore_sky");
  FUN_18017c1d0(param_1,uVar7,param_3 + 0x2d4);
  FUN_18000f890(local_ae8);
  uVar7 = FUN_180073a70(local_ae8,local_b08,"remove_fog");
  FUN_18017c1d0(param_1,uVar7,param_3 + 0x364);
  FUN_18000f890(local_ae8);
  uVar7 = FUN_180073a70(local_ae8,local_b08,"remove_sunlight");
  FUN_18017c1d0(param_1,uVar7,param_3 + 0x365);
  FUN_18000f890(local_ae8);
  uVar7 = FUN_180073a70(local_ae8,local_b08,"remove_viewmodel_sunlight");
  FUN_18017c1d0(param_1,uVar7,param_3 + 0x366);
  FUN_18000f890(local_ae8);
  uVar7 = FUN_180073a70(local_ae8,local_b08,"remove_barnlights");
  FUN_18017c1d0(param_1,uVar7,param_3 + 0x367);
  FUN_18000f890(local_ae8);
  uVar7 = FUN_180073a70(local_ae8,local_b08,"remove_baked_shadows");
  FUN_18017c1d0(param_1,uVar7,param_3 + 0x368);
  FUN_18000f890(local_ae8);
  uVar7 = FUN_180073a70(local_ae8,local_b08,"remove_dynamic_shadows");
  FUN_18017c1d0(param_1,uVar7,param_3 + 0x369);
  FUN_18000f890(local_ae8);
  uVar7 = FUN_180073a70(local_ae8,local_b08,"remove_post_processing");
  FUN_18017c1d0(param_1,uVar7,param_3 + 0x36a);
  FUN_18000f890(local_ae8);
  uVar7 = FUN_180073a70(local_ae8,local_b08,"remove_skybox_2d");
  FUN_18017c1d0(param_1,uVar7,param_3 + 0x36b);
  FUN_18000f890(local_ae8);
  uVar7 = FUN_180073a70(local_ae8,local_b08,"remove_skybox_3d");
  FUN_18017c1d0(param_1,uVar7,param_3 + 0x36c);
  FUN_18000f890(local_ae8);
  uVar7 = FUN_180073a70(local_ae8,local_b08,"remove_cable_particles");
  FUN_18017c1d0(param_1,uVar7,param_3 + 0x36d);
  FUN_18000f890(local_ae8);
  puVar5 = (undefined8 *)FUN_180073a70(local_ae8,local_b08,"nightmode_color");
  plVar3 = (longlong *)*plVar1;
  plVar10 = plVar3;
  if ((ulonglong)plVar3[3] < 0x10) {
    plVar10 = plVar1;
  }
  sVar6 = puVar5[2];
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar9 = puVar5;
  }
  else {
    puVar9 = (undefined8 *)*puVar5;
  }
  if (sVar6 == plVar3[2]) {
    if (sVar6 != 0) {
      iVar4 = memcmp(puVar9,(void *)*plVar10,sVar6);
      if (iVar4 != 0) goto LAB_1801b5b98;
    }
    FUN_1801944c0(*param_1,puVar5,param_3 + 4);
  }
LAB_1801b5b98:
  FUN_18000f890(local_ae8);
  puVar5 = (undefined8 *)FUN_180073a70(local_268,local_b08,"overlay_transparency");
  plVar3 = (longlong *)*plVar1;
  plVar10 = plVar3;
  if ((ulonglong)plVar3[3] < 0x10) {
    plVar10 = plVar1;
  }
  sVar6 = puVar5[2];
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar9 = puVar5;
  }
  else {
    puVar9 = (undefined8 *)*puVar5;
  }
  if (sVar6 == plVar3[2]) {
    if (sVar6 != 0) {
      iVar4 = memcmp(puVar9,(void *)*plVar10,sVar6);
      if (iVar4 != 0) goto LAB_1801b5c06;
    }
    FUN_1800f2db0(*param_1,puVar5,param_3 + 0x14);
  }
LAB_1801b5c06:
  FUN_18000f890(local_268);
  puVar5 = (undefined8 *)FUN_180073a70(local_a68,local_b08,"props_color");
  plVar3 = (longlong *)*plVar1;
  plVar10 = plVar3;
  if ((ulonglong)plVar3[3] < 0x10) {
    plVar10 = plVar1;
  }
  sVar6 = puVar5[2];
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar9 = puVar5;
  }
  else {
    puVar9 = (undefined8 *)*puVar5;
  }
  if (sVar6 == plVar3[2]) {
    if (sVar6 != 0) {
      iVar4 = memcmp(puVar9,(void *)*plVar10,sVar6);
      if (iVar4 != 0) goto LAB_1801b5c73;
    }
    FUN_1801944c0(*param_1,puVar5,param_3 + 0x1c);
  }
LAB_1801b5c73:
  FUN_18000f890(local_a68);
  puVar5 = (undefined8 *)FUN_180073a70(local_a48,local_b08,"fullbright_color");
  plVar3 = (longlong *)*plVar1;
  plVar10 = plVar3;
  if ((ulonglong)plVar3[3] < 0x10) {
    plVar10 = plVar1;
  }
  sVar6 = puVar5[2];
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar9 = puVar5;
  }
  else {
    puVar9 = (undefined8 *)*puVar5;
  }
  if (sVar6 == plVar3[2]) {
    if (sVar6 != 0) {
      iVar4 = memcmp(puVar9,(void *)*plVar10,sVar6);
      if (iVar4 != 0) goto LAB_1801b5cdd;
    }
    FUN_1801944c0(*param_1,puVar5,param_3 + 0x30);
  }
LAB_1801b5cdd:
  FUN_18000f890(local_a48);
  puVar5 = (undefined8 *)FUN_180073a70(local_a28,local_b08,"adaptation");
  plVar3 = (longlong *)*plVar1;
  plVar10 = plVar3;
  if ((ulonglong)plVar3[3] < 0x10) {
    plVar10 = plVar1;
  }
  sVar6 = puVar5[2];
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar9 = puVar5;
  }
  else {
    puVar9 = (undefined8 *)*puVar5;
  }
  if (sVar6 == plVar3[2]) {
    if (sVar6 != 0) {
      iVar4 = memcmp(puVar9,(void *)*plVar10,sVar6);
      if (iVar4 != 0) goto LAB_1801b5d47;
    }
    FUN_1800f2db0(*param_1,puVar5,param_3 + 0x44);
  }
LAB_1801b5d47:
  FUN_18000f890(local_a28);
  puVar5 = (undefined8 *)FUN_180073a70(local_a08,local_b08,"compensation");
  plVar3 = (longlong *)*plVar1;
  plVar10 = plVar3;
  if ((ulonglong)plVar3[3] < 0x10) {
    plVar10 = plVar1;
  }
  sVar6 = puVar5[2];
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar9 = puVar5;
  }
  else {
    puVar9 = (undefined8 *)*puVar5;
  }
  if (sVar6 == plVar3[2]) {
    if (sVar6 != 0) {
      iVar4 = memcmp(puVar9,(void *)*plVar10,sVar6);
      if (iVar4 != 0) goto LAB_1801b5db1;
    }
    FUN_1800f2e20(*param_1,puVar5,param_3 + 0x48);
  }
LAB_1801b5db1:
  FUN_18000f890(local_a08);
  puVar5 = (undefined8 *)FUN_180073a70(local_9e8,local_b08,"exposure_min");
  plVar3 = (longlong *)*plVar1;
  plVar10 = plVar3;
  if ((ulonglong)plVar3[3] < 0x10) {
    plVar10 = plVar1;
  }
  sVar6 = puVar5[2];
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar9 = puVar5;
  }
  else {
    puVar9 = (undefined8 *)*puVar5;
  }
  if (sVar6 == plVar3[2]) {
    if (sVar6 != 0) {
      iVar4 = memcmp(puVar9,(void *)*plVar10,sVar6);
      if (iVar4 != 0) goto LAB_1801b5e1b;
    }
    FUN_1800f2e20(*param_1,puVar5,param_3 + 0x4c);
  }
LAB_1801b5e1b:
  FUN_18000f890(local_9e8);
  puVar5 = (undefined8 *)FUN_180073a70(local_9c8,local_b08,"exposure_max");
  plVar3 = (longlong *)*plVar1;
  plVar10 = plVar3;
  if ((ulonglong)plVar3[3] < 0x10) {
    plVar10 = plVar1;
  }
  sVar6 = puVar5[2];
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar9 = puVar5;
  }
  else {
    puVar9 = (undefined8 *)*puVar5;
  }
  if (sVar6 == plVar3[2]) {
    if (sVar6 != 0) {
      iVar4 = memcmp(puVar9,(void *)*plVar10,sVar6);
      if (iVar4 != 0) goto LAB_1801b5e85;
    }
    FUN_1800f2e20(*param_1,puVar5,param_3 + 0x50);
  }
LAB_1801b5e85:
  FUN_18000f890(local_9c8);
  puVar5 = (undefined8 *)FUN_180073a70(local_5a8,local_b08,"adaptation_speed");
  plVar3 = (longlong *)*plVar1;
  plVar10 = plVar3;
  if ((ulonglong)plVar3[3] < 0x10) {
    plVar10 = plVar1;
  }
  sVar6 = puVar5[2];
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar9 = puVar5;
  }
  else {
    puVar9 = (undefined8 *)*puVar5;
  }
  if (sVar6 == plVar3[2]) {
    if (sVar6 != 0) {
      iVar4 = memcmp(puVar9,(void *)*plVar10,sVar6);
      if (iVar4 != 0) goto LAB_1801b5ef2;
    }
    FUN_1800f2db0(*param_1,puVar5,param_3 + 0x54);
  }
LAB_1801b5ef2:
  FUN_18000f890(local_5a8);
  puVar5 = (undefined8 *)FUN_180073a70(local_9a8,local_b08,"fixed_exposure");
  plVar3 = (longlong *)*plVar1;
  plVar10 = plVar3;
  if ((ulonglong)plVar3[3] < 0x10) {
    plVar10 = plVar1;
  }
  sVar6 = puVar5[2];
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar9 = puVar5;
  }
  else {
    puVar9 = (undefined8 *)*puVar5;
  }
  if (sVar6 == plVar3[2]) {
    if (sVar6 != 0) {
      iVar4 = memcmp(puVar9,(void *)*plVar10,sVar6);
      if (iVar4 != 0) goto LAB_1801b5f62;
    }
    FUN_1800f2db0(*param_1,puVar5,param_3 + 0x58);
  }
LAB_1801b5f62:
  FUN_18000f890(local_9a8);
  puVar5 = (undefined8 *)FUN_180073a70(local_988,local_b08,"sun_illumination");
  plVar3 = (longlong *)*plVar1;
  plVar10 = plVar3;
  if ((ulonglong)plVar3[3] < 0x10) {
    plVar10 = plVar1;
  }
  sVar6 = puVar5[2];
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar9 = puVar5;
  }
  else {
    puVar9 = (undefined8 *)*puVar5;
  }
  if (sVar6 == plVar3[2]) {
    if (sVar6 != 0) {
      iVar4 = memcmp(puVar9,(void *)*plVar10,sVar6);
      if (iVar4 != 0) goto LAB_1801b5fd2;
    }
    FUN_1801944c0(*param_1,puVar5,param_3 + 0x60);
  }
LAB_1801b5fd2:
  FUN_18000f890(local_988);
  puVar5 = (undefined8 *)FUN_180073a70(local_968,local_b08,"sun_reflection");
  plVar3 = (longlong *)*plVar1;
  plVar10 = plVar3;
  if ((ulonglong)plVar3[3] < 0x10) {
    plVar10 = plVar1;
  }
  sVar6 = puVar5[2];
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar9 = puVar5;
  }
  else {
    puVar9 = (undefined8 *)*puVar5;
  }
  if (sVar6 == plVar3[2]) {
    if (sVar6 != 0) {
      iVar4 = memcmp(puVar9,(void *)*plVar10,sVar6);
      if (iVar4 != 0) goto LAB_1801b6042;
    }
    FUN_1801944c0(*param_1,puVar5,param_3 + 0x70);
  }
LAB_1801b6042:
  FUN_18000f890(local_968);
  puVar5 = (undefined8 *)FUN_180073a70(local_948,local_b08,"sun_method");
  plVar3 = (longlong *)*plVar1;
  plVar10 = plVar3;
  if ((ulonglong)plVar3[3] < 0x10) {
    plVar10 = plVar1;
  }
  sVar6 = puVar5[2];
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar9 = puVar5;
  }
  else {
    puVar9 = (undefined8 *)*puVar5;
  }
  if (sVar6 == plVar3[2]) {
    if (sVar6 != 0) {
      iVar4 = memcmp(puVar9,(void *)*plVar10,sVar6);
      if (iVar4 != 0) goto LAB_1801b60b5;
    }
    FUN_1800f2db0(*param_1,puVar5,param_3 + 0x80);
  }
LAB_1801b60b5:
  FUN_18000f890(local_948);
  puVar5 = (undefined8 *)FUN_180073a70(local_928,local_b08,"sun_pitch");
  plVar3 = (longlong *)*plVar1;
  plVar10 = plVar3;
  if ((ulonglong)plVar3[3] < 0x10) {
    plVar10 = plVar1;
  }
  sVar6 = puVar5[2];
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar9 = puVar5;
  }
  else {
    puVar9 = (undefined8 *)*puVar5;
  }
  if (sVar6 == plVar3[2]) {
    if (sVar6 != 0) {
      iVar4 = memcmp(puVar9,(void *)*plVar10,sVar6);
      if (iVar4 != 0) goto LAB_1801b6128;
    }
    FUN_1800f2db0(*param_1,puVar5,param_3 + 0x88);
  }
LAB_1801b6128:
  FUN_18000f890(local_928);
  puVar5 = (undefined8 *)FUN_180073a70(local_908,local_b08,"sun_yaw");
  plVar3 = (longlong *)*plVar1;
  plVar10 = plVar3;
  if ((ulonglong)plVar3[3] < 0x10) {
    plVar10 = plVar1;
  }
  sVar6 = puVar5[2];
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar9 = puVar5;
  }
  else {
    puVar9 = (undefined8 *)*puVar5;
  }
  if (sVar6 == plVar3[2]) {
    if (sVar6 != 0) {
      iVar4 = memcmp(puVar9,(void *)*plVar10,sVar6);
      if (iVar4 != 0) goto LAB_1801b619b;
    }
    FUN_1800f2db0(*param_1,puVar5,param_3 + 0x8c);
  }
LAB_1801b619b:
  FUN_18000f890(local_908);
  puVar5 = (undefined8 *)FUN_180073a70(local_8e8,local_b08,"volumetric_brightness");
  plVar3 = (longlong *)*plVar1;
  plVar10 = plVar3;
  if ((ulonglong)plVar3[3] < 0x10) {
    plVar10 = plVar1;
  }
  sVar6 = puVar5[2];
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar9 = puVar5;
  }
  else {
    puVar9 = (undefined8 *)*puVar5;
  }
  if (sVar6 == plVar3[2]) {
    if (sVar6 != 0) {
      iVar4 = memcmp(puVar9,(void *)*plVar10,sVar6);
      if (iVar4 != 0) goto LAB_1801b620e;
    }
    FUN_1800f2db0(*param_1,puVar5,param_3 + 0x90);
  }
LAB_1801b620e:
  FUN_18000f890(local_8e8);
  puVar5 = (undefined8 *)FUN_180073a70(local_8c8,local_b08,"sky_color");
  plVar3 = (longlong *)*plVar1;
  plVar10 = plVar3;
  if ((ulonglong)plVar3[3] < 0x10) {
    plVar10 = plVar1;
  }
  sVar6 = puVar5[2];
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar9 = puVar5;
  }
  else {
    puVar9 = (undefined8 *)*puVar5;
  }
  if (sVar6 == plVar3[2]) {
    if (sVar6 != 0) {
      iVar4 = memcmp(puVar9,(void *)*plVar10,sVar6);
      if (iVar4 != 0) goto LAB_1801b6281;
    }
    FUN_1801944c0(*param_1,puVar5,param_3 + 0x98);
  }
LAB_1801b6281:
  FUN_18000f890(local_8c8);
  puVar5 = (undefined8 *)FUN_180073a70(local_8a8,local_b08,"clouds_color");
  plVar3 = (longlong *)*plVar1;
  plVar10 = plVar3;
  if ((ulonglong)plVar3[3] < 0x10) {
    plVar10 = plVar1;
  }
  sVar6 = puVar5[2];
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar9 = puVar5;
  }
  else {
    puVar9 = (undefined8 *)*puVar5;
  }
  if (sVar6 == plVar3[2]) {
    if (sVar6 != 0) {
      iVar4 = memcmp(puVar9,(void *)*plVar10,sVar6);
      if (iVar4 != 0) goto LAB_1801b62f4;
    }
    FUN_1801944c0(*param_1,puVar5,param_3 + 0xa8);
  }
LAB_1801b62f4:
  FUN_18000f890(local_8a8);
  puVar5 = (undefined8 *)FUN_180073a70(local_888,local_b08,"sun_color");
  plVar3 = (longlong *)*plVar1;
  plVar10 = plVar3;
  if ((ulonglong)plVar3[3] < 0x10) {
    plVar10 = plVar1;
  }
  sVar6 = puVar5[2];
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar9 = puVar5;
  }
  else {
    puVar9 = (undefined8 *)*puVar5;
  }
  if (sVar6 == plVar3[2]) {
    if (sVar6 != 0) {
      iVar4 = memcmp(puVar9,(void *)*plVar10,sVar6);
      if (iVar4 != 0) goto LAB_1801b6367;
    }
    FUN_1801944c0(*param_1,puVar5,param_3 + 0xb8);
  }
LAB_1801b6367:
  FUN_18000f890(local_888);
  puVar5 = (undefined8 *)FUN_180073a70(local_868,local_b08,"skybox");
  plVar3 = (longlong *)*plVar1;
  plVar10 = plVar3;
  if ((ulonglong)plVar3[3] < 0x10) {
    plVar10 = plVar1;
  }
  sVar6 = puVar5[2];
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar9 = puVar5;
  }
  else {
    puVar9 = (undefined8 *)*puVar5;
  }
  if (sVar6 == plVar3[2]) {
    if (sVar6 != 0) {
      iVar4 = memcmp(puVar9,(void *)*plVar10,sVar6);
      if (iVar4 != 0) goto LAB_1801b63da;
    }
    FUN_1800f2db0(*param_1,puVar5,param_3 + 200);
  }
LAB_1801b63da:
  FUN_18000f890(local_868);
  puVar5 = (undefined8 *)FUN_180073a70(local_848,local_b08,"skybox_custom");
  plVar3 = (longlong *)*plVar1;
  plVar10 = plVar3;
  if ((ulonglong)plVar3[3] < 0x10) {
    plVar10 = plVar1;
  }
  sVar6 = puVar5[2];
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar9 = puVar5;
  }
  else {
    puVar9 = (undefined8 *)*puVar5;
  }
  if (sVar6 == plVar3[2]) {
    if (sVar6 != 0) {
      iVar4 = memcmp(puVar9,(void *)*plVar10,sVar6);
      if (iVar4 != 0) goto LAB_1801b644d;
    }
    FUN_1801c3440(*param_1,puVar5,param_3 + 0xcc);
  }
LAB_1801b644d:
  FUN_18000f890(local_848);
  puVar5 = (undefined8 *)FUN_180073a70(local_828,local_b08,"fog_color");
  plVar3 = (longlong *)*plVar1;
  plVar10 = plVar3;
  if ((ulonglong)plVar3[3] < 0x10) {
    plVar10 = plVar1;
  }
  sVar6 = puVar5[2];
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar9 = puVar5;
  }
  else {
    puVar9 = (undefined8 *)*puVar5;
  }
  if (sVar6 == plVar3[2]) {
    if (sVar6 != 0) {
      iVar4 = memcmp(puVar9,(void *)*plVar10,sVar6);
      if (iVar4 != 0) goto LAB_1801b64c0;
    }
    FUN_1801944c0(*param_1,puVar5,param_3 + 400);
  }
LAB_1801b64c0:
  FUN_18000f890(local_828);
  puVar5 = (undefined8 *)FUN_180073a70(local_808,local_b08,"fog_distance");
  plVar3 = (longlong *)*plVar1;
  plVar10 = plVar3;
  if ((ulonglong)plVar3[3] < 0x10) {
    plVar10 = plVar1;
  }
  sVar6 = puVar5[2];
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar9 = puVar5;
  }
  else {
    puVar9 = (undefined8 *)*puVar5;
  }
  if (sVar6 == plVar3[2]) {
    if (sVar6 != 0) {
      iVar4 = memcmp(puVar9,(void *)*plVar10,sVar6);
      if (iVar4 != 0) goto LAB_1801b6533;
    }
    FUN_1800f2db0(*param_1,puVar5,param_3 + 0x1a0);
  }
LAB_1801b6533:
  FUN_18000f890(local_808);
  puVar5 = (undefined8 *)FUN_180073a70(local_7e8,local_b08,"fog_exponent");
  plVar3 = (longlong *)*plVar1;
  plVar10 = plVar3;
  if ((ulonglong)plVar3[3] < 0x10) {
    plVar10 = plVar1;
  }
  sVar6 = puVar5[2];
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar9 = puVar5;
  }
  else {
    puVar9 = (undefined8 *)*puVar5;
  }
  if (sVar6 == plVar3[2]) {
    if (sVar6 != 0) {
      iVar4 = memcmp(puVar9,(void *)*plVar10,sVar6);
      if (iVar4 != 0) goto LAB_1801b65a6;
    }
    FUN_1800f2e20(*param_1,puVar5,param_3 + 0x1a4);
  }
LAB_1801b65a6:
  FUN_18000f890(local_7e8);
  puVar5 = (undefined8 *)FUN_180073a70(local_7c8,local_b08,"fog_height_start");
  plVar3 = (longlong *)*plVar1;
  plVar10 = plVar3;
  if ((ulonglong)plVar3[3] < 0x10) {
    plVar10 = plVar1;
  }
  sVar6 = puVar5[2];
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar9 = puVar5;
  }
  else {
    puVar9 = (undefined8 *)*puVar5;
  }
  if (sVar6 == plVar3[2]) {
    if (sVar6 != 0) {
      iVar4 = memcmp(puVar9,(void *)*plVar10,sVar6);
      if (iVar4 != 0) goto LAB_1801b6619;
    }
    FUN_1800f2db0(*param_1,puVar5,param_3 + 0x1ac);
  }
LAB_1801b6619:
  FUN_18000f890(local_7c8);
  puVar5 = (undefined8 *)FUN_180073a70(local_7a8,local_b08,"fog_height_end");
  plVar3 = (longlong *)*plVar1;
  plVar10 = plVar3;
  if ((ulonglong)plVar3[3] < 0x10) {
    plVar10 = plVar1;
  }
  sVar6 = puVar5[2];
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar9 = puVar5;
  }
  else {
    puVar9 = (undefined8 *)*puVar5;
  }
  if (sVar6 == plVar3[2]) {
    if (sVar6 != 0) {
      iVar4 = memcmp(puVar9,(void *)*plVar10,sVar6);
      if (iVar4 != 0) goto LAB_1801b668c;
    }
    FUN_1800f2db0(*param_1,puVar5,param_3 + 0x1b0);
  }
LAB_1801b668c:
  FUN_18000f890(local_7a8);
  puVar5 = (undefined8 *)FUN_180073a70(local_788,local_b08,"fog_height_exponent");
  plVar3 = (longlong *)*plVar1;
  plVar10 = plVar3;
  if ((ulonglong)plVar3[3] < 0x10) {
    plVar10 = plVar1;
  }
  sVar6 = puVar5[2];
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar9 = puVar5;
  }
  else {
    puVar9 = (undefined8 *)*puVar5;
  }
  if (sVar6 == plVar3[2]) {
    if (sVar6 != 0) {
      iVar4 = memcmp(puVar9,(void *)*plVar10,sVar6);
      if (iVar4 != 0) goto LAB_1801b66ff;
    }
    FUN_1800f2e20(*param_1,puVar5,param_3 + 0x1b4);
  }
LAB_1801b66ff:
  FUN_18000f890(local_788);
  puVar5 = (undefined8 *)FUN_180073a70(local_768,local_b08,"bloom_strength");
  plVar3 = (longlong *)*plVar1;
  plVar10 = plVar3;
  if ((ulonglong)plVar3[3] < 0x10) {
    plVar10 = plVar1;
  }
  sVar6 = puVar5[2];
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar9 = puVar5;
  }
  else {
    puVar9 = (undefined8 *)*puVar5;
  }
  if (sVar6 == plVar3[2]) {
    if (sVar6 != 0) {
      iVar4 = memcmp(puVar9,(void *)*plVar10,sVar6);
      if (iVar4 != 0) goto LAB_1801b6772;
    }
    FUN_1800f2db0(*param_1,puVar5,param_3 + 0x1bc);
  }
LAB_1801b6772:
  FUN_18000f890(local_768);
  puVar5 = (undefined8 *)FUN_180073a70(local_748,local_b08,"bloom_screen_strength");
  plVar3 = (longlong *)*plVar1;
  plVar10 = plVar3;
  if ((ulonglong)plVar3[3] < 0x10) {
    plVar10 = plVar1;
  }
  sVar6 = puVar5[2];
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar9 = puVar5;
  }
  else {
    puVar9 = (undefined8 *)*puVar5;
  }
  if (sVar6 == plVar3[2]) {
    if (sVar6 != 0) {
      iVar4 = memcmp(puVar9,(void *)*plVar10,sVar6);
      if (iVar4 != 0) goto LAB_1801b67e5;
    }
    FUN_1800f2db0(*param_1,puVar5,param_3 + 0x1c0);
  }
LAB_1801b67e5:
  FUN_18000f890(local_748);
  puVar5 = (undefined8 *)FUN_180073a70(local_728,local_b08,"bloom_blur_strength");
  plVar3 = (longlong *)*plVar1;
  plVar10 = plVar3;
  if ((ulonglong)plVar3[3] < 0x10) {
    plVar10 = plVar1;
  }
  sVar6 = puVar5[2];
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar9 = puVar5;
  }
  else {
    puVar9 = (undefined8 *)*puVar5;
  }
  if (sVar6 == plVar3[2]) {
    if (sVar6 != 0) {
      iVar4 = memcmp(puVar9,(void *)*plVar10,sVar6);
      if (iVar4 != 0) goto LAB_1801b6858;
    }
    FUN_1800f2db0(*param_1,puVar5,param_3 + 0x1c4);
  }
LAB_1801b6858:
  FUN_18000f890(local_728);
  puVar5 = (undefined8 *)FUN_180073a70(local_708,local_b08,"bloom_threshold");
  plVar3 = (longlong *)*plVar1;
  plVar10 = plVar3;
  if ((ulonglong)plVar3[3] < 0x10) {
    plVar10 = plVar1;
  }
  sVar6 = puVar5[2];
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar9 = puVar5;
  }
  else {
    puVar9 = (undefined8 *)*puVar5;
  }
  if (sVar6 == plVar3[2]) {
    if (sVar6 != 0) {
      iVar4 = memcmp(puVar9,(void *)*plVar10,sVar6);
      if (iVar4 != 0) goto LAB_1801b68cb;
    }
    FUN_1800f2db0(*param_1,puVar5,param_3 + 0x1c8);
  }
LAB_1801b68cb:
  FUN_18000f890(local_708);
  puVar5 = (undefined8 *)FUN_180073a70(local_6e8,local_b08,"bloom_threshold_width");
  plVar3 = (longlong *)*plVar1;
  plVar10 = plVar3;
  if ((ulonglong)plVar3[3] < 0x10) {
    plVar10 = plVar1;
  }
  sVar6 = puVar5[2];
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar9 = puVar5;
  }
  else {
    puVar9 = (undefined8 *)*puVar5;
  }
  if (sVar6 == plVar3[2]) {
    if (sVar6 != 0) {
      iVar4 = memcmp(puVar9,(void *)*plVar10,sVar6);
      if (iVar4 != 0) goto LAB_1801b693e;
    }
    FUN_1800f2db0(*param_1,puVar5,param_3 + 0x1cc);
  }
LAB_1801b693e:
  FUN_18000f890(local_6e8);
  puVar5 = (undefined8 *)FUN_180073a70(local_6c8,local_b08,"vignette_color");
  plVar3 = (longlong *)*plVar1;
  plVar10 = plVar3;
  if ((ulonglong)plVar3[3] < 0x10) {
    plVar10 = plVar1;
  }
  sVar6 = puVar5[2];
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar9 = puVar5;
  }
  else {
    puVar9 = (undefined8 *)*puVar5;
  }
  if (sVar6 == plVar3[2]) {
    if (sVar6 != 0) {
      iVar4 = memcmp(puVar9,(void *)*plVar10,sVar6);
      if (iVar4 != 0) goto LAB_1801b69b1;
    }
    FUN_1801944c0(*param_1,puVar5,param_3 + 0x238);
  }
LAB_1801b69b1:
  FUN_18000f890(local_6c8);
  puVar5 = (undefined8 *)FUN_180073a70(local_6a8,local_b08,"vignette_strength");
  plVar3 = (longlong *)*plVar1;
  plVar10 = plVar3;
  if ((ulonglong)plVar3[3] < 0x10) {
    plVar10 = plVar1;
  }
  sVar6 = puVar5[2];
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar9 = puVar5;
  }
  else {
    puVar9 = (undefined8 *)*puVar5;
  }
  if (sVar6 == plVar3[2]) {
    if (sVar6 != 0) {
      iVar4 = memcmp(puVar9,(void *)*plVar10,sVar6);
      if (iVar4 != 0) goto LAB_1801b6a24;
    }
    FUN_1800f2db0(*param_1,puVar5,param_3 + 0x248);
  }
LAB_1801b6a24:
  FUN_18000f890(local_6a8);
  puVar5 = (undefined8 *)FUN_180073a70(local_688,local_b08,"vignette_radius");
  plVar3 = (longlong *)*plVar1;
  plVar10 = plVar3;
  if ((ulonglong)plVar3[3] < 0x10) {
    plVar10 = plVar1;
  }
  sVar6 = puVar5[2];
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar9 = puVar5;
  }
  else {
    puVar9 = (undefined8 *)*puVar5;
  }
  if (sVar6 == plVar3[2]) {
    if (sVar6 != 0) {
      iVar4 = memcmp(puVar9,(void *)*plVar10,sVar6);
      if (iVar4 != 0) goto LAB_1801b6a97;
    }
    FUN_1800f2db0(*param_1,puVar5,param_3 + 0x24c);
  }
LAB_1801b6a97:
  FUN_18000f890(local_688);
  puVar5 = (undefined8 *)FUN_180073a70(local_668,local_b08,"vignette_roundness");
  plVar3 = (longlong *)*plVar1;
  plVar10 = plVar3;
  if ((ulonglong)plVar3[3] < 0x10) {
    plVar10 = plVar1;
  }
  sVar6 = puVar5[2];
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar9 = puVar5;
  }
  else {
    puVar9 = (undefined8 *)*puVar5;
  }
  if (sVar6 == plVar3[2]) {
    if (sVar6 != 0) {
      iVar4 = memcmp(puVar9,(void *)*plVar10,sVar6);
      if (iVar4 != 0) goto LAB_1801b6b0a;
    }
    FUN_1800f2db0(*param_1,puVar5,param_3 + 0x250);
  }
LAB_1801b6b0a:
  FUN_18000f890(local_668);
  puVar5 = (undefined8 *)FUN_180073a70(local_648,local_b08,"vignette_feather");
  plVar3 = (longlong *)*plVar1;
  plVar10 = plVar3;
  if ((ulonglong)plVar3[3] < 0x10) {
    plVar10 = plVar1;
  }
  sVar6 = puVar5[2];
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar9 = puVar5;
  }
  else {
    puVar9 = (undefined8 *)*puVar5;
  }
  if (sVar6 == plVar3[2]) {
    if (sVar6 != 0) {
      iVar4 = memcmp(puVar9,(void *)*plVar10,sVar6);
      if (iVar4 != 0) goto LAB_1801b6b7d;
    }
    FUN_1800f2db0(*param_1,puVar5,param_3 + 0x254);
  }
LAB_1801b6b7d:
  FUN_18000f890(local_648);
  puVar5 = (undefined8 *)FUN_180073a70(local_628,local_b08,"contrast_strength");
  plVar3 = (longlong *)*plVar1;
  plVar10 = plVar3;
  if ((ulonglong)plVar3[3] < 0x10) {
    plVar10 = plVar1;
  }
  sVar6 = puVar5[2];
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar9 = puVar5;
  }
  else {
    puVar9 = (undefined8 *)*puVar5;
  }
  if (sVar6 == plVar3[2]) {
    if (sVar6 != 0) {
      iVar4 = memcmp(puVar9,(void *)*plVar10,sVar6);
      if (iVar4 != 0) goto LAB_1801b6bf0;
    }
    FUN_1800f2db0(*param_1,puVar5,param_3 + 0x25c);
  }
LAB_1801b6bf0:
  FUN_18000f890(local_628);
  puVar5 = (undefined8 *)FUN_180073a70(local_608,local_b08,"contrast_edge");
  plVar3 = (longlong *)*plVar1;
  plVar10 = plVar3;
  if ((ulonglong)plVar3[3] < 0x10) {
    plVar10 = plVar1;
  }
  sVar6 = puVar5[2];
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar9 = puVar5;
  }
  else {
    puVar9 = (undefined8 *)*puVar5;
  }
  if (sVar6 == plVar3[2]) {
    if (sVar6 != 0) {
      iVar4 = memcmp(puVar9,(void *)*plVar10,sVar6);
      if (iVar4 != 0) goto LAB_1801b6c63;
    }
    FUN_1800f2db0(*param_1,puVar5,param_3 + 0x260);
  }
LAB_1801b6c63:
  FUN_18000f890(local_608);
  puVar5 = (undefined8 *)FUN_180073a70(local_5e8,local_b08,"contrast_vignette_start");
  plVar3 = (longlong *)*plVar1;
  plVar10 = plVar3;
  if ((ulonglong)plVar3[3] < 0x10) {
    plVar10 = plVar1;
  }
  sVar6 = puVar5[2];
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar9 = puVar5;
  }
  else {
    puVar9 = (undefined8 *)*puVar5;
  }
  if (sVar6 == plVar3[2]) {
    if (sVar6 != 0) {
      iVar4 = memcmp(puVar9,(void *)*plVar10,sVar6);
      if (iVar4 != 0) goto LAB_1801b6cd6;
    }
    FUN_1800f2db0(*param_1,puVar5,param_3 + 0x264);
  }
LAB_1801b6cd6:
  FUN_18000f890(local_5e8);
  puVar5 = (undefined8 *)FUN_180073a70(local_5c8,local_b08,"contrast_vignette_end");
  plVar3 = (longlong *)*plVar1;
  plVar10 = plVar3;
  if ((ulonglong)plVar3[3] < 0x10) {
    plVar10 = plVar1;
  }
  sVar6 = puVar5[2];
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar9 = puVar5;
  }
  else {
    puVar9 = (undefined8 *)*puVar5;
  }
  if (sVar6 == plVar3[2]) {
    if (sVar6 != 0) {
      iVar4 = memcmp(puVar9,(void *)*plVar10,sVar6);
      if (iVar4 != 0) goto LAB_1801b6d49;
    }
    FUN_1800f2db0(*param_1,puVar5,param_3 + 0x268);
  }
LAB_1801b6d49:
  FUN_18000f890(local_5c8);
  puVar5 = (undefined8 *)FUN_180073a70(local_1a8,local_b08,"contrast_vignette_blur");
  plVar3 = (longlong *)*plVar1;
  plVar10 = plVar3;
  if ((ulonglong)plVar3[3] < 0x10) {
    plVar10 = plVar1;
  }
  sVar6 = puVar5[2];
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar9 = puVar5;
  }
  else {
    puVar9 = (undefined8 *)*puVar5;
  }
  if (sVar6 == plVar3[2]) {
    if (sVar6 != 0) {
      iVar4 = memcmp(puVar9,(void *)*plVar10,sVar6);
      if (iVar4 != 0) goto LAB_1801b6dbc;
    }
    FUN_1800f2db0(*param_1,puVar5,param_3 + 0x26c);
  }
LAB_1801b6dbc:
  FUN_18000f890(local_1a8);
  puVar5 = (undefined8 *)FUN_180073a70(local_588,local_b08,"tone_curve");
  plVar3 = (longlong *)*plVar1;
  plVar10 = plVar3;
  if ((ulonglong)plVar3[3] < 0x10) {
    plVar10 = plVar1;
  }
  sVar6 = puVar5[2];
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar9 = puVar5;
  }
  else {
    puVar9 = (undefined8 *)*puVar5;
  }
  if (sVar6 == plVar3[2]) {
    if (sVar6 != 0) {
      iVar4 = memcmp(puVar9,(void *)*plVar10,sVar6);
      if (iVar4 != 0) goto LAB_1801b6e2f;
    }
    FUN_1800f2db0(*param_1,puVar5,param_3 + 0x274);
  }
LAB_1801b6e2f:
  FUN_18000f890(local_588);
  puVar5 = (undefined8 *)FUN_180073a70(local_568,local_b08,"cc_contrast");
  plVar3 = (longlong *)*plVar1;
  plVar10 = plVar3;
  if ((ulonglong)plVar3[3] < 0x10) {
    plVar10 = plVar1;
  }
  sVar6 = puVar5[2];
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar9 = puVar5;
  }
  else {
    puVar9 = (undefined8 *)*puVar5;
  }
  if (sVar6 == plVar3[2]) {
    if (sVar6 != 0) {
      iVar4 = memcmp(puVar9,(void *)*plVar10,sVar6);
      if (iVar4 != 0) goto LAB_1801b6ea2;
    }
    FUN_1800f2db0(*param_1,puVar5,param_3 + 0x278);
  }
LAB_1801b6ea2:
  FUN_18000f890(local_568);
  puVar5 = (undefined8 *)FUN_180073a70(local_548,local_b08,"cc_highlights");
  plVar3 = (longlong *)*plVar1;
  plVar10 = plVar3;
  if ((ulonglong)plVar3[3] < 0x10) {
    plVar10 = plVar1;
  }
  sVar6 = puVar5[2];
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar9 = puVar5;
  }
  else {
    puVar9 = (undefined8 *)*puVar5;
  }
  if (sVar6 == plVar3[2]) {
    if (sVar6 != 0) {
      iVar4 = memcmp(puVar9,(void *)*plVar10,sVar6);
      if (iVar4 != 0) goto LAB_1801b6f15;
    }
    FUN_1800f2db0(*param_1,puVar5,param_3 + 0x27c);
  }
LAB_1801b6f15:
  FUN_18000f890(local_548);
  puVar5 = (undefined8 *)FUN_180073a70(local_528,local_b08,"cc_shadows");
  plVar3 = (longlong *)*plVar1;
  plVar10 = plVar3;
  if ((ulonglong)plVar3[3] < 0x10) {
    plVar10 = plVar1;
  }
  sVar6 = puVar5[2];
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar9 = puVar5;
  }
  else {
    puVar9 = (undefined8 *)*puVar5;
  }
  if (sVar6 == plVar3[2]) {
    if (sVar6 != 0) {
      iVar4 = memcmp(puVar9,(void *)*plVar10,sVar6);
      if (iVar4 != 0) goto LAB_1801b6f88;
    }
    FUN_1800f2db0(*param_1,puVar5,param_3 + 0x280);
  }
LAB_1801b6f88:
  FUN_18000f890(local_528);
  puVar5 = (undefined8 *)FUN_180073a70(local_508,local_b08,"cc_saturation");
  plVar3 = (longlong *)*plVar1;
  plVar10 = plVar3;
  if ((ulonglong)plVar3[3] < 0x10) {
    plVar10 = plVar1;
  }
  sVar6 = puVar5[2];
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar9 = puVar5;
  }
  else {
    puVar9 = (undefined8 *)*puVar5;
  }
  if (sVar6 == plVar3[2]) {
    if (sVar6 != 0) {
      iVar4 = memcmp(puVar9,(void *)*plVar10,sVar6);
      if (iVar4 != 0) goto LAB_1801b6ffb;
    }
    FUN_1800f2db0(*param_1,puVar5,param_3 + 0x284);
  }
LAB_1801b6ffb:
  FUN_18000f890(local_508);
  puVar5 = (undefined8 *)FUN_180073a70(local_4e8,local_b08,"cc_vibrance");
  plVar3 = (longlong *)*plVar1;
  plVar10 = plVar3;
  if ((ulonglong)plVar3[3] < 0x10) {
    plVar10 = plVar1;
  }
  sVar6 = puVar5[2];
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar9 = puVar5;
  }
  else {
    puVar9 = (undefined8 *)*puVar5;
  }
  if (sVar6 == plVar3[2]) {
    if (sVar6 != 0) {
      iVar4 = memcmp(puVar9,(void *)*plVar10,sVar6);
      if (iVar4 != 0) goto LAB_1801b706e;
    }
    FUN_1800f2db0(*param_1,puVar5,param_3 + 0x288);
  }
LAB_1801b706e:
  FUN_18000f890(local_4e8);
  puVar5 = (undefined8 *)FUN_180073a70(local_4c8,local_b08,"cc_temperature");
  plVar3 = (longlong *)*plVar1;
  plVar10 = plVar3;
  if ((ulonglong)plVar3[3] < 0x10) {
    plVar10 = plVar1;
  }
  sVar6 = puVar5[2];
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar9 = puVar5;
  }
  else {
    puVar9 = (undefined8 *)*puVar5;
  }
  if (sVar6 == plVar3[2]) {
    if (sVar6 != 0) {
      iVar4 = memcmp(puVar9,(void *)*plVar10,sVar6);
      if (iVar4 != 0) goto LAB_1801b70e1;
    }
    FUN_1800f2db0(*param_1,puVar5,param_3 + 0x28c);
  }
LAB_1801b70e1:
  FUN_18000f890(local_4c8);
  puVar5 = (undefined8 *)FUN_180073a70(local_4a8,local_b08,"cc_tint");
  plVar3 = (longlong *)*plVar1;
  plVar10 = plVar3;
  if ((ulonglong)plVar3[3] < 0x10) {
    plVar10 = plVar1;
  }
  sVar6 = puVar5[2];
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar9 = puVar5;
  }
  else {
    puVar9 = (undefined8 *)*puVar5;
  }
  if (sVar6 == plVar3[2]) {
    if (sVar6 != 0) {
      iVar4 = memcmp(puVar9,(void *)*plVar10,sVar6);
      if (iVar4 != 0) goto LAB_1801b7154;
    }
    FUN_1800f2db0(*param_1,puVar5,param_3 + 0x290);
  }
LAB_1801b7154:
  FUN_18000f890(local_4a8);
  puVar5 = (undefined8 *)FUN_180073a70(local_488,local_b08,"dof_mode");
  plVar3 = (longlong *)*plVar1;
  plVar10 = plVar3;
  if ((ulonglong)plVar3[3] < 0x10) {
    plVar10 = plVar1;
  }
  sVar6 = puVar5[2];
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar9 = puVar5;
  }
  else {
    puVar9 = (undefined8 *)*puVar5;
  }
  if (sVar6 == plVar3[2]) {
    if (sVar6 != 0) {
      iVar4 = memcmp(puVar9,(void *)*plVar10,sVar6);
      if (iVar4 != 0) goto LAB_1801b71c7;
    }
    FUN_1800f2db0(*param_1,puVar5,param_3 + 0x298);
  }
LAB_1801b71c7:
  FUN_18000f890(local_488);
  puVar5 = (undefined8 *)FUN_180073a70(local_468,local_b08,"dof_quality");
  plVar3 = (longlong *)*plVar1;
  plVar10 = plVar3;
  if ((ulonglong)plVar3[3] < 0x10) {
    plVar10 = plVar1;
  }
  sVar6 = puVar5[2];
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar9 = puVar5;
  }
  else {
    puVar9 = (undefined8 *)*puVar5;
  }
  if (sVar6 == plVar3[2]) {
    if (sVar6 != 0) {
      iVar4 = memcmp(puVar9,(void *)*plVar10,sVar6);
      if (iVar4 != 0) goto LAB_1801b723a;
    }
    FUN_1800f2db0(*param_1,puVar5,param_3 + 0x29c);
  }
LAB_1801b723a:
  FUN_18000f890(local_468);
  puVar5 = (undefined8 *)FUN_180073a70(local_448,local_b08,"dof_focus_distance");
  plVar3 = (longlong *)*plVar1;
  plVar10 = plVar3;
  if ((ulonglong)plVar3[3] < 0x10) {
    plVar10 = plVar1;
  }
  sVar6 = puVar5[2];
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar9 = puVar5;
  }
  else {
    puVar9 = (undefined8 *)*puVar5;
  }
  if (sVar6 == plVar3[2]) {
    if (sVar6 != 0) {
      iVar4 = memcmp(puVar9,(void *)*plVar10,sVar6);
      if (iVar4 != 0) goto LAB_1801b72ad;
    }
    FUN_1800f2db0(*param_1,puVar5,param_3 + 0x2a0);
  }
LAB_1801b72ad:
  FUN_18000f890(local_448);
  puVar5 = (undefined8 *)FUN_180073a70(local_428,local_b08,"dof_focus_speed");
  plVar3 = (longlong *)*plVar1;
  plVar10 = plVar3;
  if ((ulonglong)plVar3[3] < 0x10) {
    plVar10 = plVar1;
  }
  sVar6 = puVar5[2];
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar9 = puVar5;
  }
  else {
    puVar9 = (undefined8 *)*puVar5;
  }
  if (sVar6 == plVar3[2]) {
    if (sVar6 != 0) {
      iVar4 = memcmp(puVar9,(void *)*plVar10,sVar6);
      if (iVar4 != 0) goto LAB_1801b7320;
    }
    FUN_1800f2db0(*param_1,puVar5,param_3 + 0x2a4);
  }
LAB_1801b7320:
  FUN_18000f890(local_428);
  puVar5 = (undefined8 *)FUN_180073a70(local_408,local_b08,"dof_focus_range");
  plVar3 = (longlong *)*plVar1;
  plVar10 = plVar3;
  if ((ulonglong)plVar3[3] < 0x10) {
    plVar10 = plVar1;
  }
  sVar6 = puVar5[2];
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar9 = puVar5;
  }
  else {
    puVar9 = (undefined8 *)*puVar5;
  }
  if (sVar6 == plVar3[2]) {
    if (sVar6 != 0) {
      iVar4 = memcmp(puVar9,(void *)*plVar10,sVar6);
      if (iVar4 != 0) goto LAB_1801b7393;
    }
    FUN_1800f2db0(*param_1,puVar5,param_3 + 0x2a8);
  }
LAB_1801b7393:
  FUN_18000f890(local_408);
  puVar5 = (undefined8 *)FUN_180073a70(local_3e8,local_b08,"wind_direction");
  plVar3 = (longlong *)*plVar1;
  plVar10 = plVar3;
  if ((ulonglong)plVar3[3] < 0x10) {
    plVar10 = plVar1;
  }
  sVar6 = puVar5[2];
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar9 = puVar5;
  }
  else {
    puVar9 = (undefined8 *)*puVar5;
  }
  if (sVar6 == plVar3[2]) {
    if (sVar6 != 0) {
      iVar4 = memcmp(puVar9,(void *)*plVar10,sVar6);
      if (iVar4 != 0) goto LAB_1801b7406;
    }
    FUN_1800f2db0(*param_1,puVar5,param_3 + 0x2b0);
  }
LAB_1801b7406:
  FUN_18000f890(local_3e8);
  puVar5 = (undefined8 *)FUN_180073a70(local_3c8,local_b08,"wind_strength");
  plVar3 = (longlong *)*plVar1;
  plVar10 = plVar3;
  if ((ulonglong)plVar3[3] < 0x10) {
    plVar10 = plVar1;
  }
  sVar6 = puVar5[2];
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar9 = puVar5;
  }
  else {
    puVar9 = (undefined8 *)*puVar5;
  }
  if (sVar6 == plVar3[2]) {
    if (sVar6 != 0) {
      iVar4 = memcmp(puVar9,(void *)*plVar10,sVar6);
      if (iVar4 != 0) goto LAB_1801b7479;
    }
    FUN_1800f2e20(*param_1,puVar5,param_3 + 0x2b4);
  }
LAB_1801b7479:
  FUN_18000f890(local_3c8);
  puVar5 = (undefined8 *)FUN_180073a70(local_3a8,local_b08,"wetness_rain");
  plVar3 = (longlong *)*plVar1;
  plVar10 = plVar3;
  if ((ulonglong)plVar3[3] < 0x10) {
    plVar10 = plVar1;
  }
  sVar6 = puVar5[2];
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar9 = puVar5;
  }
  else {
    puVar9 = (undefined8 *)*puVar5;
  }
  if (sVar6 == plVar3[2]) {
    if (sVar6 != 0) {
      iVar4 = memcmp(puVar9,(void *)*plVar10,sVar6);
      if (iVar4 != 0) goto LAB_1801b74ec;
    }
    FUN_1800f2db0(*param_1,puVar5,param_3 + 0x2c8);
  }
LAB_1801b74ec:
  FUN_18000f890(local_3a8);
  puVar5 = (undefined8 *)FUN_180073a70(local_388,local_b08,"wetness_coverage");
  plVar3 = (longlong *)*plVar1;
  plVar10 = plVar3;
  if ((ulonglong)plVar3[3] < 0x10) {
    plVar10 = plVar1;
  }
  sVar6 = puVar5[2];
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar9 = puVar5;
  }
  else {
    puVar9 = (undefined8 *)*puVar5;
  }
  if (sVar6 == plVar3[2]) {
    if (sVar6 != 0) {
      iVar4 = memcmp(puVar9,(void *)*plVar10,sVar6);
      if (iVar4 != 0) goto LAB_1801b755f;
    }
    FUN_1800f2db0(*param_1,puVar5,param_3 + 0x2cc);
  }
LAB_1801b755f:
  FUN_18000f890(local_388);
  puVar5 = (undefined8 *)FUN_180073a70(local_368,local_b08,"wetness_drying");
  plVar3 = (longlong *)*plVar1;
  plVar10 = plVar3;
  if ((ulonglong)plVar3[3] < 0x10) {
    plVar10 = plVar1;
  }
  sVar6 = puVar5[2];
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar9 = puVar5;
  }
  else {
    puVar9 = (undefined8 *)*puVar5;
  }
  if (sVar6 == plVar3[2]) {
    if (sVar6 != 0) {
      iVar4 = memcmp(puVar9,(void *)*plVar10,sVar6);
      if (iVar4 != 0) goto LAB_1801b75d2;
    }
    FUN_1800f2db0(*param_1,puVar5,param_3 + 0x2d0);
  }
LAB_1801b75d2:
  FUN_18000f890(local_368);
  puVar5 = (undefined8 *)FUN_180073a70(local_348,local_b08,"wind_particle_strength");
  plVar3 = (longlong *)*plVar1;
  plVar10 = plVar3;
  if ((ulonglong)plVar3[3] < 0x10) {
    plVar10 = plVar1;
  }
  sVar6 = puVar5[2];
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar9 = puVar5;
  }
  else {
    puVar9 = (undefined8 *)*puVar5;
  }
  if (sVar6 == plVar3[2]) {
    if (sVar6 != 0) {
      iVar4 = memcmp(puVar9,(void *)*plVar10,sVar6);
      if (iVar4 != 0) goto LAB_1801b7645;
    }
    FUN_1800f2e20(*param_1,puVar5,param_3 + 0x2b8);
  }
LAB_1801b7645:
  FUN_18000f890(local_348);
  puVar5 = (undefined8 *)FUN_180073a70(local_328,local_b08,"wind_turbulence");
  plVar3 = (longlong *)*plVar1;
  plVar10 = plVar3;
  if ((ulonglong)plVar3[3] < 0x10) {
    plVar10 = plVar1;
  }
  sVar6 = puVar5[2];
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar9 = puVar5;
  }
  else {
    puVar9 = (undefined8 *)*puVar5;
  }
  if (sVar6 == plVar3[2]) {
    if (sVar6 != 0) {
      iVar4 = memcmp(puVar9,(void *)*plVar10,sVar6);
      if (iVar4 != 0) goto LAB_1801b76b8;
    }
    FUN_1800f2e20(*param_1,puVar5,param_3 + 700);
  }
LAB_1801b76b8:
  FUN_18000f890(local_328);
  puVar5 = (undefined8 *)FUN_180073a70(local_308,local_b08,"wind_max_tilt");
  plVar3 = (longlong *)*plVar1;
  plVar10 = plVar3;
  if ((ulonglong)plVar3[3] < 0x10) {
    plVar10 = plVar1;
  }
  sVar6 = puVar5[2];
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar9 = puVar5;
  }
  else {
    puVar9 = (undefined8 *)*puVar5;
  }
  if (sVar6 == plVar3[2]) {
    if (sVar6 != 0) {
      iVar4 = memcmp(puVar9,(void *)*plVar10,sVar6);
      if (iVar4 != 0) goto LAB_1801b772b;
    }
    FUN_1800f2e20(*param_1,puVar5,param_3 + 0x2c0);
  }
LAB_1801b772b:
  FUN_18000f890(local_308);
  uVar7 = FUN_180073a70(local_a88,local_b08,"thunder");
  FUN_18017c1d0(param_1,uVar7,param_3 + 0x2d5);
  FUN_18000f890(local_a88);
  puVar5 = (undefined8 *)FUN_180073a70(local_a88,local_b08,"thunder_primary");
  plVar3 = (longlong *)*plVar1;
  plVar10 = plVar3;
  if ((ulonglong)plVar3[3] < 0x10) {
    plVar10 = plVar1;
  }
  sVar6 = puVar5[2];
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar9 = puVar5;
  }
  else {
    puVar9 = (undefined8 *)*puVar5;
  }
  if (sVar6 == plVar3[2]) {
    if (sVar6 != 0) {
      iVar4 = memcmp(puVar9,(void *)*plVar10,sVar6);
      if (iVar4 != 0) goto LAB_1801b77cd;
    }
    FUN_1801944c0(*param_1,puVar5,param_3 + 0x2d8);
  }
LAB_1801b77cd:
  FUN_18000f890(local_a88);
  puVar5 = (undefined8 *)FUN_180073a70(local_2c8,local_b08,"thunder_glow");
  plVar3 = (longlong *)*plVar1;
  plVar10 = plVar3;
  if ((ulonglong)plVar3[3] < 0x10) {
    plVar10 = plVar1;
  }
  sVar6 = puVar5[2];
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar9 = puVar5;
  }
  else {
    puVar9 = (undefined8 *)*puVar5;
  }
  if (sVar6 == plVar3[2]) {
    if (sVar6 != 0) {
      iVar4 = memcmp(puVar9,(void *)*plVar10,sVar6);
      if (iVar4 != 0) goto LAB_1801b783d;
    }
    FUN_1801944c0(*param_1,puVar5,param_3 + 0x2e8);
  }
LAB_1801b783d:
  FUN_18000f890(local_2c8);
  puVar5 = (undefined8 *)FUN_180073a70(local_2a8,local_b08,"thunder_interval");
  plVar3 = (longlong *)*plVar1;
  plVar10 = plVar3;
  if ((ulonglong)plVar3[3] < 0x10) {
    plVar10 = plVar1;
  }
  sVar6 = puVar5[2];
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar9 = puVar5;
  }
  else {
    puVar9 = (undefined8 *)*puVar5;
  }
  if (sVar6 == plVar3[2]) {
    if (sVar6 != 0) {
      iVar4 = memcmp(puVar9,(void *)*plVar10,sVar6);
      if (iVar4 != 0) goto LAB_1801b78b0;
    }
    FUN_1800f2e20(*param_1,puVar5,param_3 + 0x2f8);
  }
LAB_1801b78b0:
  FUN_18000f890(local_2a8);
  puVar5 = (undefined8 *)FUN_180073a70(local_288,local_b08,"thunder_duration");
  plVar3 = (longlong *)*plVar1;
  plVar10 = plVar3;
  if ((ulonglong)plVar3[3] < 0x10) {
    plVar10 = plVar1;
  }
  sVar6 = puVar5[2];
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar9 = puVar5;
  }
  else {
    puVar9 = (undefined8 *)*puVar5;
  }
  if (sVar6 == plVar3[2]) {
    if (sVar6 != 0) {
      iVar4 = memcmp(puVar9,(void *)*plVar10,sVar6);
      if (iVar4 != 0) goto LAB_1801b7923;
    }
    FUN_1800f2e20(*param_1,puVar5,param_3 + 0x2fc);
  }
LAB_1801b7923:
  FUN_18000f890(local_288);
  uVar7 = FUN_180073a70(local_ac8,local_b08,"thunder_sound");
  FUN_18017c1d0(param_1,uVar7,param_3 + 0x300);
  FUN_18000f890(local_ac8);
  uVar7 = FUN_180073a70(local_ac8,local_b08,"thunder_on_kill");
  FUN_18017c1d0(param_1,uVar7,param_3 + 0x301);
  FUN_18000f890(local_ac8);
  uVar7 = FUN_180073a70(local_ac8,local_b08,&DAT_1806f8bfc);
  FUN_18017c1d0(param_1,uVar7,param_3 + 0x302);
  FUN_18000f890(local_ac8);
  puVar5 = (undefined8 *)FUN_180073a70(local_ac8,local_b08,"rain_primary");
  plVar3 = (longlong *)*plVar1;
  plVar10 = plVar3;
  if ((ulonglong)plVar3[3] < 0x10) {
    plVar10 = plVar1;
  }
  sVar6 = puVar5[2];
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar9 = puVar5;
  }
  else {
    puVar9 = (undefined8 *)*puVar5;
  }
  if (sVar6 == plVar3[2]) {
    if (sVar6 != 0) {
      iVar4 = memcmp(puVar9,(void *)*plVar10,sVar6);
      if (iVar4 != 0) goto LAB_1801b7a30;
    }
    FUN_1801944c0(*param_1,puVar5,param_3 + 0x304);
  }
LAB_1801b7a30:
  FUN_18000f890(local_ac8);
  puVar5 = (undefined8 *)FUN_180073a70(local_248,local_b08,"rain_glow");
  plVar3 = (longlong *)*plVar1;
  plVar10 = plVar3;
  if ((ulonglong)plVar3[3] < 0x10) {
    plVar10 = plVar1;
  }
  sVar6 = puVar5[2];
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar9 = puVar5;
  }
  else {
    puVar9 = (undefined8 *)*puVar5;
  }
  if (sVar6 == plVar3[2]) {
    if (sVar6 != 0) {
      iVar4 = memcmp(puVar9,(void *)*plVar10,sVar6);
      if (iVar4 != 0) goto LAB_1801b7aa1;
    }
    FUN_1801944c0(*param_1,puVar5,param_3 + 0x314);
  }
LAB_1801b7aa1:
  FUN_18000f890(local_248);
  puVar5 = (undefined8 *)FUN_180073a70(local_228,local_b08,"rain_speed");
  plVar3 = (longlong *)*plVar1;
  plVar10 = plVar3;
  if ((ulonglong)plVar3[3] < 0x10) {
    plVar10 = plVar1;
  }
  sVar6 = puVar5[2];
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar9 = puVar5;
  }
  else {
    puVar9 = (undefined8 *)*puVar5;
  }
  if (sVar6 == plVar3[2]) {
    if (sVar6 != 0) {
      iVar4 = memcmp(puVar9,(void *)*plVar10,sVar6);
      if (iVar4 != 0) goto LAB_1801b7b14;
    }
    FUN_1800f2db0(*param_1,puVar5,param_3 + 0x324);
  }
LAB_1801b7b14:
  FUN_18000f890(local_228);
  puVar5 = (undefined8 *)FUN_180073a70(local_208,local_b08,"rain_radius");
  plVar3 = (longlong *)*plVar1;
  plVar10 = plVar3;
  if ((ulonglong)plVar3[3] < 0x10) {
    plVar10 = plVar1;
  }
  sVar6 = puVar5[2];
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar9 = puVar5;
  }
  else {
    puVar9 = (undefined8 *)*puVar5;
  }
  if (sVar6 == plVar3[2]) {
    if (sVar6 != 0) {
      iVar4 = memcmp(puVar9,(void *)*plVar10,sVar6);
      if (iVar4 != 0) goto LAB_1801b7b87;
    }
    FUN_1800f2db0(*param_1,puVar5,param_3 + 0x328);
  }
LAB_1801b7b87:
  FUN_18000f890(local_208);
  puVar5 = (undefined8 *)FUN_180073a70(local_1e8,local_b08,"rain_density");
  plVar3 = (longlong *)*plVar1;
  plVar10 = plVar3;
  if ((ulonglong)plVar3[3] < 0x10) {
    plVar10 = plVar1;
  }
  sVar6 = puVar5[2];
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar9 = puVar5;
  }
  else {
    puVar9 = (undefined8 *)*puVar5;
  }
  if (sVar6 == plVar3[2]) {
    if (sVar6 != 0) {
      iVar4 = memcmp(puVar9,(void *)*plVar10,sVar6);
      if (iVar4 != 0) goto LAB_1801b7bfa;
    }
    FUN_1800f2db0(*param_1,puVar5,param_3 + 0x32c);
  }
LAB_1801b7bfa:
  FUN_18000f890(local_1e8);
  puVar5 = (undefined8 *)FUN_180073a70(local_1c8,local_b08,"rain_center_bias");
  plVar3 = (longlong *)*plVar1;
  plVar10 = plVar3;
  if ((ulonglong)plVar3[3] < 0x10) {
    plVar10 = plVar1;
  }
  sVar6 = puVar5[2];
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar9 = puVar5;
  }
  else {
    puVar9 = (undefined8 *)*puVar5;
  }
  if (sVar6 == plVar3[2]) {
    if (sVar6 != 0) {
      iVar4 = memcmp(puVar9,(void *)*plVar10,sVar6);
      if (iVar4 != 0) goto LAB_1801b7c6d;
    }
    FUN_1800f2db0(*param_1,puVar5,param_3 + 0x330);
  }
LAB_1801b7c6d:
  FUN_18000f890(local_1c8);
  uVar7 = FUN_180073a70(local_aa8,local_b08,"rain_sound");
  FUN_18017c1d0(param_1,uVar7,param_3 + 0x334);
  FUN_18000f890(local_aa8);
  uVar7 = FUN_180073a70(local_aa8,local_b08,&DAT_1806f8c7c);
  FUN_18017c1d0(param_1,uVar7,param_3 + 0x335);
  FUN_18000f890(local_aa8);
  puVar5 = (undefined8 *)FUN_180073a70(local_aa8,local_b08,"snow_primary");
  plVar3 = (longlong *)*plVar1;
  plVar10 = plVar3;
  if ((ulonglong)plVar3[3] < 0x10) {
    plVar10 = plVar1;
  }
  sVar6 = puVar5[2];
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar9 = puVar5;
  }
  else {
    puVar9 = (undefined8 *)*puVar5;
  }
  if (sVar6 == plVar3[2]) {
    if (sVar6 != 0) {
      iVar4 = memcmp(puVar9,(void *)*plVar10,sVar6);
      if (iVar4 != 0) goto LAB_1801b7d41;
    }
    FUN_1801944c0(*param_1,puVar5,param_3 + 0x338);
  }
LAB_1801b7d41:
  FUN_18000f890(local_aa8);
  puVar5 = (undefined8 *)FUN_180073a70(local_188,local_b08,"snow_glow");
  plVar3 = (longlong *)*plVar1;
  plVar10 = plVar3;
  if ((ulonglong)plVar3[3] < 0x10) {
    plVar10 = plVar1;
  }
  sVar6 = puVar5[2];
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar9 = puVar5;
  }
  else {
    puVar9 = (undefined8 *)*puVar5;
  }
  if (sVar6 == plVar3[2]) {
    if (sVar6 != 0) {
      iVar4 = memcmp(puVar9,(void *)*plVar10,sVar6);
      if (iVar4 != 0) goto LAB_1801b7db1;
    }
    FUN_1801944c0(*param_1,puVar5,param_3 + 0x348);
  }
LAB_1801b7db1:
  FUN_18000f890(local_188);
  puVar5 = (undefined8 *)FUN_180073a70(local_168,local_b08,"snow_speed");
  plVar3 = (longlong *)*plVar1;
  plVar10 = plVar3;
  if ((ulonglong)plVar3[3] < 0x10) {
    plVar10 = plVar1;
  }
  sVar6 = puVar5[2];
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar9 = puVar5;
  }
  else {
    puVar9 = (undefined8 *)*puVar5;
  }
  if (sVar6 == plVar3[2]) {
    if (sVar6 != 0) {
      iVar4 = memcmp(puVar9,(void *)*plVar10,sVar6);
      if (iVar4 != 0) goto LAB_1801b7e24;
    }
    FUN_1800f2db0(*param_1,puVar5,param_3 + 0x358);
  }
LAB_1801b7e24:
  FUN_18000f890(local_168);
  puVar5 = (undefined8 *)FUN_180073a70(local_148,local_b08,"snow_radius");
  plVar3 = (longlong *)*plVar1;
  plVar10 = plVar3;
  if ((ulonglong)plVar3[3] < 0x10) {
    plVar10 = plVar1;
  }
  sVar6 = puVar5[2];
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar9 = puVar5;
  }
  else {
    puVar9 = (undefined8 *)*puVar5;
  }
  if (sVar6 == plVar3[2]) {
    if (sVar6 != 0) {
      iVar4 = memcmp(puVar9,(void *)*plVar10,sVar6);
      if (iVar4 != 0) goto LAB_1801b7e97;
    }
    FUN_1800f2db0(*param_1,puVar5,param_3 + 0x35c);
  }
LAB_1801b7e97:
  FUN_18000f890(local_148);
  puVar5 = (undefined8 *)FUN_180073a70(local_128,local_b08,"snow_density");
  plVar3 = (longlong *)*plVar1;
  plVar10 = plVar3;
  if ((ulonglong)plVar3[3] < 0x10) {
    plVar10 = plVar1;
  }
  sVar6 = puVar5[2];
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar9 = puVar5;
  }
  else {
    puVar9 = (undefined8 *)*puVar5;
  }
  if (sVar6 == plVar3[2]) {
    if (sVar6 != 0) {
      iVar4 = memcmp(puVar9,(void *)*plVar10,sVar6);
      if (iVar4 != 0) goto LAB_1801b7f0a;
    }
    FUN_1800f2db0(*param_1,puVar5,param_3 + 0x360);
  }
LAB_1801b7f0a:
  FUN_18000f890(local_128);
  uVar11 = 0;
  do {
    uVar2 = uVar11 + 1;
    uVar7 = FUN_18004e4f0(local_c8,uVar2);
    uVar8 = FUN_180073a70(local_e8,local_b08,"bloom_blur_weight");
    puVar5 = (undefined8 *)FUN_180066820(local_108,uVar8,uVar7);
    plVar3 = (longlong *)*plVar1;
    plVar10 = plVar1;
    if (0xf < (ulonglong)plVar3[3]) {
      plVar10 = plVar3;
    }
    sVar6 = puVar5[2];
    if ((ulonglong)puVar5[3] < 0x10) {
      puVar9 = puVar5;
    }
    else {
      puVar9 = (undefined8 *)*puVar5;
    }
    if (sVar6 == plVar3[2]) {
      if (sVar6 != 0) {
        iVar4 = memcmp(puVar9,(void *)*plVar10,sVar6);
        if (iVar4 != 0) goto LAB_1801b7fb7;
      }
      FUN_1800f2db0(*param_1,puVar5,param_3 + uVar11 * 4 + 0x1d0);
    }
LAB_1801b7fb7:
    FUN_18000f890(local_108);
    FUN_18000f890(local_e8);
    FUN_18000f890(local_c8);
    uVar7 = FUN_18004e4f0(local_68,uVar2);
    uVar8 = FUN_180073a70(local_88,local_b08,"bloom_blur_color");
    puVar5 = (undefined8 *)FUN_180066820(local_a8,uVar8,uVar7);
    plVar3 = (longlong *)*plVar1;
    plVar10 = plVar1;
    if (0xf < (ulonglong)plVar3[3]) {
      plVar10 = plVar3;
    }
    sVar6 = puVar5[2];
    if ((ulonglong)puVar5[3] < 0x10) {
      puVar9 = puVar5;
    }
    else {
      puVar9 = (undefined8 *)*puVar5;
    }
    if (sVar6 == plVar3[2]) {
      if (sVar6 != 0) {
        iVar4 = memcmp(puVar9,(void *)*plVar10,sVar6);
        if (iVar4 != 0) goto LAB_1801b8073;
      }
      FUN_1801944c0(*param_1,puVar5,param_3 + uVar11 * 0x10 + 0x1e4);
    }
LAB_1801b8073:
    FUN_18000f890(local_a8);
    FUN_18000f890(local_88);
    FUN_18000f890(local_68);
    uVar11 = uVar2;
    if (4 < uVar2) {
      FUN_18000f890(local_b08);
      return;
    }
  } while( true );
}



/* ===== 1801b80e0 FUN_1801b80e0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801b80e0(undefined8 *param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  size_t sVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined1 auStack_3c8 [32];
  undefined1 local_3a8 [32];
  undefined1 local_388 [32];
  undefined1 local_368 [32];
  undefined1 local_348 [32];
  undefined1 local_328 [32];
  undefined1 local_308 [32];
  undefined1 local_2e8 [32];
  undefined1 local_2c8 [32];
  undefined1 local_2a8 [32];
  undefined1 local_288 [32];
  undefined1 local_268 [32];
  undefined1 local_248 [32];
  undefined1 local_228 [32];
  undefined1 local_208 [32];
  undefined1 local_1e8 [32];
  undefined1 local_1c8 [32];
  undefined1 local_1a8 [32];
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
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_3c8;
  FUN_180073a70(local_388,param_2,"aimbot.");
  uVar5 = FUN_180073a70(local_3a8,local_388,"enabled");
  FUN_18017c1d0(param_1,uVar5,param_3);
  FUN_18000f890(local_3a8);
  puVar6 = (undefined8 *)FUN_180073a70(local_2e8,local_388,"activation");
  plVar1 = param_1 + 1;
  plVar2 = (longlong *)*plVar1;
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar7 = puVar6;
  }
  else {
    puVar7 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_1801b81be;
    }
    FUN_1800f2db0(*param_1,puVar6,param_3 + 4);
  }
LAB_1801b81be:
  FUN_18000f890(local_2e8);
  puVar6 = (undefined8 *)FUN_180073a70(local_2c8,local_388,"conditions");
  plVar2 = (longlong *)*plVar1;
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar7 = puVar6;
  }
  else {
    puVar7 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_1801b8228;
    }
    FUN_180151c10(*param_1,puVar6,param_3 + 8);
  }
LAB_1801b8228:
  FUN_18000f890(local_2c8);
  puVar6 = (undefined8 *)FUN_180073a70(local_2a8,local_388,"penetration_limit");
  plVar2 = (longlong *)*plVar1;
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar7 = puVar6;
  }
  else {
    puVar7 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_1801b8292;
    }
    FUN_1800f2db0(*param_1,puVar6,param_3 + 0x10);
  }
LAB_1801b8292:
  FUN_18000f890(local_2a8);
  puVar6 = (undefined8 *)FUN_180073a70(local_288,local_388,"smoke_threshold");
  plVar2 = (longlong *)*plVar1;
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar7 = puVar6;
  }
  else {
    puVar7 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_1801b82fc;
    }
    FUN_1800f2db0(*param_1,puVar6,param_3 + 0x14);
  }
LAB_1801b82fc:
  FUN_18000f890(local_288);
  puVar6 = (undefined8 *)FUN_180073a70(local_268,local_388,"flash_threshold");
  plVar2 = (longlong *)*plVar1;
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar7 = puVar6;
  }
  else {
    puVar7 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_1801b8366;
    }
    FUN_1800f2db0(*param_1,puVar6,param_3 + 0x18);
  }
LAB_1801b8366:
  FUN_18000f890(local_268);
  puVar6 = (undefined8 *)FUN_180073a70(local_248,local_388,"hitboxes");
  plVar2 = (longlong *)*plVar1;
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar7 = puVar6;
  }
  else {
    puVar7 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_1801b83d3;
    }
    FUN_180151e90(*param_1,puVar6,param_3 + 0x1c);
  }
LAB_1801b83d3:
  FUN_18000f890(local_248);
  uVar5 = FUN_180073a70(local_3a8,local_388,"prefer_center");
  FUN_18017c1d0(param_1,uVar5,param_3 + 0x21);
  FUN_18000f890(local_3a8);
  puVar6 = (undefined8 *)FUN_180073a70(local_228,local_388,"field_of_view");
  plVar2 = (longlong *)*plVar1;
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar7 = puVar6;
  }
  else {
    puVar7 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_1801b8474;
    }
    FUN_1800f2e20(*param_1,puVar6,param_3 + 0x24);
  }
LAB_1801b8474:
  FUN_18000f890(local_228);
  puVar6 = (undefined8 *)FUN_180073a70(local_208,local_388,"smoothing");
  plVar2 = (longlong *)*plVar1;
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar7 = puVar6;
  }
  else {
    puVar7 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_1801b84e4;
    }
    FUN_1800f2db0(*param_1,puVar6,param_3 + 0x28);
  }
LAB_1801b84e4:
  FUN_18000f890(local_208);
  uVar5 = FUN_180073a70(local_3a8,local_388,"first_bullet_delay");
  FUN_18017c1d0(param_1,uVar5,param_3 + 0x2c);
  FUN_18000f890(local_3a8);
  puVar6 = (undefined8 *)FUN_180073a70(local_1e8,local_388,"curve_factor");
  plVar2 = (longlong *)*plVar1;
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar7 = puVar6;
  }
  else {
    puVar7 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_1801b8585;
    }
    FUN_1800f2db0(*param_1,puVar6,param_3 + 0x30);
  }
LAB_1801b8585:
  FUN_18000f890(local_1e8);
  puVar6 = (undefined8 *)FUN_180073a70(local_1c8,local_388,"easing_out");
  plVar2 = (longlong *)*plVar1;
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar7 = puVar6;
  }
  else {
    puVar7 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_1801b85f5;
    }
    FUN_1800f2db0(*param_1,puVar6,param_3 + 0x34);
  }
LAB_1801b85f5:
  FUN_18000f890(local_1c8);
  puVar6 = (undefined8 *)FUN_180073a70(local_1a8,local_388,"reaction_time");
  plVar2 = (longlong *)*plVar1;
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar7 = puVar6;
  }
  else {
    puVar7 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_1801b8665;
    }
    FUN_1800f2db0(*param_1,puVar6,param_3 + 0x38);
  }
LAB_1801b8665:
  FUN_18000f890(local_1a8);
  puVar6 = (undefined8 *)FUN_180073a70(local_188,local_388,"target_switch_delay");
  plVar2 = (longlong *)*plVar1;
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar7 = puVar6;
  }
  else {
    puVar7 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_1801b86d5;
    }
    FUN_1800f2db0(*param_1,puVar6,param_3 + 0x3c);
  }
LAB_1801b86d5:
  FUN_18000f890(local_188);
  puVar6 = (undefined8 *)FUN_180073a70(local_168,local_388,"min_damage");
  plVar2 = (longlong *)*plVar1;
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar7 = puVar6;
  }
  else {
    puVar7 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_1801b8745;
    }
    FUN_1800f2db0(*param_1,puVar6,param_3 + 0x40);
  }
LAB_1801b8745:
  FUN_18000f890(local_168);
  uVar5 = FUN_180073a70(local_3a8,local_388,"recoil_control");
  FUN_18017c1d0(param_1,uVar5,param_3 + 0x44);
  FUN_18000f890(local_3a8);
  uVar5 = FUN_180073a70(local_3a8,local_388,"recoil.");
  FUN_1801b8ee0(param_1,uVar5,param_3 + 0x48);
  FUN_18000f890(local_3a8);
  uVar5 = FUN_180073a70(local_3a8,local_388,"quick_scope");
  FUN_18017c1d0(param_1,uVar5,param_3 + 0x5c);
  FUN_18000f890(local_3a8);
  uVar5 = FUN_180073a70(local_3a8,local_388,"automatic_unzoom");
  FUN_18017c1d0(param_1,uVar5,param_3 + 0x5d);
  FUN_18000f890(local_3a8);
  uVar5 = FUN_180073a70(local_3a8,local_388,"quick_stop");
  FUN_18017c1d0(param_1,uVar5,param_3 + 0x5e);
  FUN_18000f890(local_3a8);
  uVar5 = FUN_180073a70(local_3a8,local_388,"full_stop");
  FUN_18017c1d0(param_1,uVar5,param_3 + 0x5f);
  FUN_18000f890(local_3a8);
  puVar6 = (undefined8 *)FUN_180073a70(local_148,local_388,"quick_stop_reaction_time");
  plVar2 = (longlong *)*plVar1;
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar7 = puVar6;
  }
  else {
    puVar7 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_1801b88db;
    }
    FUN_1800f2db0(*param_1,puVar6,param_3 + 0x60);
  }
LAB_1801b88db:
  FUN_18000f890(local_148);
  FUN_18000f890(local_388);
  FUN_180073a70(local_3a8,param_2,"triggerbot.");
  uVar5 = FUN_180073a70(local_348,local_3a8,"enabled");
  FUN_18017c1d0(param_1,uVar5,param_4);
  FUN_18000f890(local_348);
  puVar6 = (undefined8 *)FUN_180073a70(local_348,local_3a8,"conditions");
  plVar2 = (longlong *)*plVar1;
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar7 = puVar6;
  }
  else {
    puVar7 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_1801b8996;
    }
    FUN_180151e90(*param_1,puVar6,param_4 + 1);
  }
LAB_1801b8996:
  FUN_18000f890(local_348);
  puVar6 = (undefined8 *)FUN_180073a70(local_128,local_3a8,"penetration_limit");
  plVar2 = (longlong *)*plVar1;
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar7 = puVar6;
  }
  else {
    puVar7 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_1801b8a03;
    }
    FUN_1800f2db0(*param_1,puVar6,param_4 + 8);
  }
LAB_1801b8a03:
  FUN_18000f890(local_128);
  puVar6 = (undefined8 *)FUN_180073a70(local_108,local_3a8,"smoke_threshold");
  plVar2 = (longlong *)*plVar1;
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar7 = puVar6;
  }
  else {
    puVar7 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_1801b8a73;
    }
    FUN_1800f2db0(*param_1,puVar6,param_4 + 0xc);
  }
LAB_1801b8a73:
  FUN_18000f890(local_108);
  puVar6 = (undefined8 *)FUN_180073a70(local_e8,local_3a8,"flash_threshold");
  plVar2 = (longlong *)*plVar1;
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar7 = puVar6;
  }
  else {
    puVar7 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_1801b8ae3;
    }
    FUN_1800f2db0(*param_1,puVar6,param_4 + 0x10);
  }
LAB_1801b8ae3:
  FUN_18000f890(local_e8);
  puVar6 = (undefined8 *)FUN_180073a70(local_c8,local_3a8,"hitboxes");
  plVar2 = (longlong *)*plVar1;
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar7 = puVar6;
  }
  else {
    puVar7 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_1801b8b53;
    }
    FUN_180151e90(*param_1,puVar6,param_4 + 0x14);
  }
LAB_1801b8b53:
  FUN_18000f890(local_c8);
  uVar5 = FUN_180073a70(local_328,local_3a8,"force_center");
  FUN_18017c1d0(param_1,uVar5,param_4 + 0x19);
  FUN_18000f890(local_328);
  puVar6 = (undefined8 *)FUN_180073a70(local_328,local_3a8,"hit_chance");
  plVar2 = (longlong *)*plVar1;
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar7 = puVar6;
  }
  else {
    puVar7 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_1801b8bef;
    }
    FUN_1800f2db0(*param_1,puVar6,param_4 + 0x1c);
  }
LAB_1801b8bef:
  FUN_18000f890(local_328);
  uVar5 = FUN_180073a70(local_308,local_3a8,"ignore_spread");
  FUN_18017c1d0(param_1,uVar5,param_4 + 0x20);
  FUN_18000f890(local_308);
  puVar6 = (undefined8 *)FUN_180073a70(local_308,local_3a8,"legitimacy_threshold");
  plVar2 = (longlong *)*plVar1;
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar7 = puVar6;
  }
  else {
    puVar7 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_1801b8c88;
    }
    FUN_1800f2db0(*param_1,puVar6,param_4 + 0x24);
  }
LAB_1801b8c88:
  FUN_18000f890(local_308);
  puVar6 = (undefined8 *)FUN_180073a70(local_a8,local_3a8,"min_damage");
  plVar2 = (longlong *)*plVar1;
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar7 = puVar6;
  }
  else {
    puVar7 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_1801b8cf5;
    }
    FUN_1800f2db0(*param_1,puVar6,param_4 + 0x28);
  }
LAB_1801b8cf5:
  FUN_18000f890(local_a8);
  puVar6 = (undefined8 *)FUN_180073a70(local_88,local_3a8,"reaction_time");
  plVar2 = (longlong *)*plVar1;
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar7 = puVar6;
  }
  else {
    puVar7 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_1801b8d65;
    }
    FUN_1800f2db0(*param_1,puVar6,param_4 + 0x2c);
  }
LAB_1801b8d65:
  FUN_18000f890(local_88);
  puVar6 = (undefined8 *)FUN_180073a70(local_68,local_3a8,"capture_delay");
  plVar2 = (longlong *)*plVar1;
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar7 = puVar6;
  }
  else {
    puVar7 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_1801b8dd5;
    }
    FUN_1800f2db0(*param_1,puVar6,param_4 + 0x30);
  }
LAB_1801b8dd5:
  FUN_18000f890(local_68);
  puVar6 = (undefined8 *)FUN_180073a70(local_368,local_3a8,"burst_time");
  plVar2 = (longlong *)*plVar1;
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar7 = puVar6;
  }
  else {
    puVar7 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_1801b8e43;
    }
    FUN_1800f2db0(*param_1,puVar6,param_4 + 0x34);
  }
LAB_1801b8e43:
  FUN_18000f890(local_368);
  uVar5 = FUN_180073a70(local_368,local_3a8,"quick_scope");
  FUN_18017c1d0(param_1,uVar5,param_4 + 0x38);
  FUN_18000f890(local_368);
  uVar5 = FUN_180073a70(local_368,local_3a8,"automatic_unzoom");
  FUN_18017c1d0(param_1,uVar5,param_4 + 0x39);
  FUN_18000f890(local_368);
  FUN_18000f890(local_3a8);
  return;
}



/* ===== 1801b8ee0 FUN_1801b8ee0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801b8ee0(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  size_t sVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [32];
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  undefined1 local_58 [32];
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStack_d8;
  puVar5 = (undefined8 *)FUN_180073a70(local_98,param_2,"start_bullet");
  plVar1 = param_1 + 1;
  plVar2 = (longlong *)*plVar1;
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  sVar3 = puVar5[2];
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar7 = puVar5;
  }
  else {
    puVar7 = (undefined8 *)*puVar5;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_1801b8f69;
    }
    FUN_1800f2db0(*param_1,puVar5,param_3);
  }
LAB_1801b8f69:
  FUN_18000f890(local_98);
  puVar5 = (undefined8 *)FUN_180073a70(local_78,param_2,"vertical");
  plVar2 = (longlong *)*plVar1;
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  sVar3 = puVar5[2];
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar7 = puVar5;
  }
  else {
    puVar7 = (undefined8 *)*puVar5;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_1801b8fd3;
    }
    FUN_1800f2db0(*param_1,puVar5,param_3 + 4);
  }
LAB_1801b8fd3:
  FUN_18000f890(local_78);
  puVar5 = (undefined8 *)FUN_180073a70(local_58,param_2,"horizontal");
  plVar2 = (longlong *)*plVar1;
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  sVar3 = puVar5[2];
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar7 = puVar5;
  }
  else {
    puVar7 = (undefined8 *)*puVar5;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_1801b9040;
    }
    FUN_1800f2db0(*param_1,puVar5,param_3 + 8);
  }
LAB_1801b9040:
  FUN_18000f890(local_58);
  puVar5 = (undefined8 *)FUN_180073a70(local_b8,param_2,"dampening");
  plVar2 = (longlong *)*plVar1;
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  sVar3 = puVar5[2];
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar7 = puVar5;
  }
  else {
    puVar7 = (undefined8 *)*puVar5;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_1801b90ad;
    }
    FUN_1800f2db0(*param_1,puVar5,param_3 + 0xc);
  }
LAB_1801b90ad:
  FUN_18000f890(local_b8);
  uVar6 = FUN_180073a70(local_b8,param_2,"crosshair_recovery");
  FUN_18017c1d0(param_1,uVar6,param_3 + 0x10);
  FUN_18000f890(local_b8);
  return;
}



/* ===== 1801b9110 FUN_1801b9110 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801b9110(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  size_t sVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [32];
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  undefined1 local_58 [32];
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStack_d8;
  uVar5 = FUN_180073a70(local_98,param_2,".enabled");
  FUN_18017c1d0(param_1,uVar5,param_3);
  FUN_18000f890(local_98);
  puVar6 = (undefined8 *)FUN_180073a70(local_98,param_2,".color");
  plVar1 = param_1 + 1;
  plVar2 = (longlong *)*plVar1;
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar7 = puVar6;
  }
  else {
    puVar7 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_1801b91c8;
    }
    FUN_1801944c0(*param_1,puVar6,param_3 + 4);
  }
LAB_1801b91c8:
  FUN_18000f890(local_98);
  puVar6 = (undefined8 *)FUN_180073a70(local_78,param_2,".items");
  plVar2 = (longlong *)*plVar1;
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar7 = puVar6;
  }
  else {
    puVar7 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_1801b9232;
    }
    FUN_1801c34d0(*param_1,puVar6,param_3 + 0x14);
  }
LAB_1801b9232:
  FUN_18000f890(local_78);
  uVar5 = FUN_180073a70(local_b8,param_2,".icon_inverted");
  FUN_18017c1d0(param_1,uVar5,param_3 + 0x1c);
  FUN_18000f890(local_b8);
  uVar5 = FUN_180073a70(local_b8,param_2,".bar_background");
  FUN_18017c1d0(param_1,uVar5,param_3 + 0x1d);
  FUN_18000f890(local_b8);
  uVar5 = FUN_180073a70(local_b8,param_2,".bar_shadow");
  FUN_18017c1d0(param_1,uVar5,param_3 + 0x1e);
  FUN_18000f890(local_b8);
  puVar6 = (undefined8 *)FUN_180073a70(local_b8,param_2,".bar_shadow_color");
  plVar2 = (longlong *)*plVar1;
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar7 = puVar6;
  }
  else {
    puVar7 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_1801b9329;
    }
    FUN_1801944c0(*param_1,puVar6,param_3 + 0x20);
  }
LAB_1801b9329:
  FUN_18000f890(local_b8);
  puVar6 = (undefined8 *)FUN_180073a70(local_58,param_2,".bar_format");
  plVar2 = (longlong *)*plVar1;
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar7 = puVar6;
  }
  else {
    puVar7 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_1801b9396;
    }
    FUN_1800f2db0(*param_1,puVar6,param_3 + 0x30);
  }
LAB_1801b9396:
  FUN_18000f890(local_58);
  return;
}



/* ===== 1801b93d0 FUN_1801b93d0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801b93d0(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  size_t sVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [32];
  undefined1 local_b8 [32];
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  undefined1 local_58 [32];
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStack_f8;
  puVar5 = (undefined8 *)FUN_180073a70(local_d8,param_2,".fade_offset");
  plVar1 = param_1 + 1;
  plVar2 = (longlong *)*plVar1;
  plVar7 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar7 = plVar1;
  }
  sVar3 = puVar5[2];
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar6 = puVar5;
  }
  else {
    puVar6 = (undefined8 *)*puVar5;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar6,(void *)*plVar7,sVar3);
      if (iVar4 != 0) goto LAB_1801b9459;
    }
    FUN_1800f2db0(*param_1,puVar5,param_3);
  }
LAB_1801b9459:
  FUN_18000f890(local_d8);
  puVar5 = (undefined8 *)FUN_180073a70(local_b8,param_2,".gradient_opacity");
  plVar2 = (longlong *)*plVar1;
  plVar7 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar7 = plVar1;
  }
  sVar3 = puVar5[2];
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar6 = puVar5;
  }
  else {
    puVar6 = (undefined8 *)*puVar5;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar6,(void *)*plVar7,sVar3);
      if (iVar4 != 0) goto LAB_1801b94c3;
    }
    FUN_1800f2db0(*param_1,puVar5,param_3 + 4);
  }
LAB_1801b94c3:
  FUN_18000f890(local_b8);
  puVar5 = (undefined8 *)FUN_180073a70(local_98,param_2,".outline_opacity");
  plVar2 = (longlong *)*plVar1;
  plVar7 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar7 = plVar1;
  }
  sVar3 = puVar5[2];
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar6 = puVar5;
  }
  else {
    puVar6 = (undefined8 *)*puVar5;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar6,(void *)*plVar7,sVar3);
      if (iVar4 != 0) goto LAB_1801b952d;
    }
    FUN_1800f2db0(*param_1,puVar5,param_3 + 8);
  }
LAB_1801b952d:
  FUN_18000f890(local_98);
  puVar5 = (undefined8 *)FUN_180073a70(local_78,param_2,".glow_opacity");
  plVar2 = (longlong *)*plVar1;
  plVar7 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar7 = plVar1;
  }
  sVar3 = puVar5[2];
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar6 = puVar5;
  }
  else {
    puVar6 = (undefined8 *)*puVar5;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar6,(void *)*plVar7,sVar3);
      if (iVar4 != 0) goto LAB_1801b959a;
    }
    FUN_1800f2db0(*param_1,puVar5,param_3 + 0xc);
  }
LAB_1801b959a:
  FUN_18000f890(local_78);
  puVar5 = (undefined8 *)FUN_180073a70(local_58,param_2,".glow");
  plVar2 = (longlong *)*plVar1;
  plVar7 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar7 = plVar1;
  }
  sVar3 = puVar5[2];
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar6 = puVar5;
  }
  else {
    puVar6 = (undefined8 *)*puVar5;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar6,(void *)*plVar7,sVar3);
      if (iVar4 != 0) goto LAB_1801b960a;
    }
    FUN_1800f2e20(*param_1,puVar5,param_3 + 0x10);
  }
LAB_1801b960a:
  FUN_18000f890(local_58);
  return;
}



/* ===== 1801b9640 FUN_1801b9640 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801b9640(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  size_t sVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  int *piVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong *plVar11;
  ulonglong uVar12;
  undefined1 auStack_9a8 [32];
  undefined1 local_988 [32];
  undefined1 local_968 [32];
  undefined1 local_948 [32];
  undefined1 local_928 [32];
  undefined1 local_908 [32];
  undefined1 local_8e8 [32];
  undefined1 local_8c8 [32];
  undefined1 local_8a8 [32];
  undefined1 local_888 [32];
  undefined1 local_868 [32];
  undefined1 local_848 [32];
  undefined1 local_828 [32];
  undefined1 local_808 [32];
  undefined1 local_7e8 [32];
  undefined1 local_7c8 [32];
  undefined1 local_7a8 [32];
  undefined1 local_788 [32];
  undefined1 local_768 [32];
  undefined1 local_748 [32];
  undefined1 local_728 [32];
  undefined1 local_708 [32];
  undefined1 local_6e8 [32];
  undefined1 local_6c8 [32];
  undefined1 local_6a8 [32];
  undefined1 local_688 [32];
  undefined1 local_668 [32];
  undefined1 local_648 [32];
  undefined1 local_628 [32];
  undefined1 local_608 [32];
  undefined1 local_5e8 [32];
  undefined1 local_5c8 [32];
  undefined1 local_5a8 [32];
  undefined1 local_588 [32];
  undefined1 local_568 [32];
  undefined1 local_548 [32];
  undefined1 local_528 [32];
  undefined1 local_508 [32];
  undefined1 local_4e8 [32];
  undefined1 local_4c8 [32];
  undefined1 local_4a8 [32];
  undefined1 local_488 [32];
  undefined1 local_468 [32];
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
  undefined1 local_2c8 [32];
  undefined1 local_2a8 [32];
  undefined1 local_288 [32];
  undefined1 local_268 [32];
  undefined1 local_248 [32];
  undefined1 local_228 [32];
  undefined1 local_208 [32];
  undefined1 local_1e8 [32];
  undefined1 local_1c8 [32];
  undefined1 local_1a8 [32];
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
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_9a8;
  FUN_180073a70(local_988,param_2,"ambience.");
  uVar5 = FUN_180073a70(local_968,local_988,"nightmode");
  FUN_180187420(param_1,uVar5,param_3);
  FUN_18000f890(local_968);
  uVar5 = FUN_180073a70(local_968,local_988,"colorize_props");
  FUN_180187420(param_1,uVar5,param_3 + 0x18);
  FUN_18000f890(local_968);
  uVar5 = FUN_180073a70(local_968,local_988,"fullbright");
  FUN_180187420(param_1,uVar5,param_3 + 0x2c);
  FUN_18000f890(local_968);
  uVar5 = FUN_180073a70(local_968,local_988,"exposure");
  FUN_180187420(param_1,uVar5,param_3 + 0x40);
  FUN_18000f890(local_968);
  uVar5 = FUN_180073a70(local_968,local_988,"sunlight");
  FUN_180187420(param_1,uVar5,param_3 + 0x5c);
  FUN_18000f890(local_968);
  uVar5 = FUN_180073a70(local_968,local_988,"sun_override_rotation");
  FUN_180187420(param_1,uVar5,param_3 + 0x84);
  FUN_18000f890(local_968);
  uVar5 = FUN_180073a70(local_968,local_988,&DAT_1806f8584);
  FUN_180187420(param_1,uVar5,param_3 + 0x94);
  FUN_18000f890(local_968);
  uVar5 = FUN_180073a70(local_968,local_988,&DAT_1806f8588);
  FUN_180187420(param_1,uVar5,param_3 + 0x18c);
  FUN_18000f890(local_968);
  uVar5 = FUN_180073a70(local_968,local_988,"fog_override_skybox");
  FUN_180187420(param_1,uVar5,param_3 + 0x1a8);
  FUN_18000f890(local_968);
  uVar5 = FUN_180073a70(local_968,local_988,"fog_override_height");
  FUN_180187420(param_1,uVar5,param_3 + 0x1a9);
  FUN_18000f890(local_968);
  uVar5 = FUN_180073a70(local_968,local_988,"bloom");
  FUN_180187420(param_1,uVar5,param_3 + 0x1b8);
  FUN_18000f890(local_968);
  uVar5 = FUN_180073a70(local_968,local_988,"vignette");
  FUN_180187420(param_1,uVar5,param_3 + 0x234);
  FUN_18000f890(local_968);
  uVar5 = FUN_180073a70(local_968,local_988,"contrast");
  FUN_180187420(param_1,uVar5,param_3 + 600);
  FUN_18000f890(local_968);
  uVar5 = FUN_180073a70(local_968,local_988,"color_correction");
  FUN_180187420(param_1,uVar5,param_3 + 0x270);
  FUN_18000f890(local_968);
  uVar5 = FUN_180073a70(local_968,local_988,"cc_grayscale");
  FUN_180187420(param_1,uVar5,param_3 + 0x294);
  FUN_18000f890(local_968);
  uVar5 = FUN_180073a70(local_968,local_988,&DAT_1806f85f0);
  FUN_180187420(param_1,uVar5,param_3 + 0x295);
  FUN_18000f890(local_968);
  uVar5 = FUN_180073a70(local_968,local_988,&DAT_1806f85cc);
  FUN_180187420(param_1,uVar5,param_3 + 0x2ac);
  FUN_18000f890(local_968);
  uVar5 = FUN_180073a70(local_968,local_988,"wetness");
  FUN_180187420(param_1,uVar5,param_3 + 0x2c4);
  FUN_18000f890(local_968);
  uVar5 = FUN_180073a70(local_968,local_988,"wetness_ignore_sky");
  FUN_180187420(param_1,uVar5,param_3 + 0x2d4);
  FUN_18000f890(local_968);
  uVar5 = FUN_180073a70(local_968,local_988,"remove_fog");
  FUN_180187420(param_1,uVar5,param_3 + 0x364);
  FUN_18000f890(local_968);
  uVar5 = FUN_180073a70(local_968,local_988,"remove_sunlight");
  FUN_180187420(param_1,uVar5,param_3 + 0x365);
  FUN_18000f890(local_968);
  uVar5 = FUN_180073a70(local_968,local_988,"remove_viewmodel_sunlight");
  FUN_180187420(param_1,uVar5,param_3 + 0x366);
  FUN_18000f890(local_968);
  uVar5 = FUN_180073a70(local_968,local_988,"remove_barnlights");
  FUN_180187420(param_1,uVar5,param_3 + 0x367);
  FUN_18000f890(local_968);
  uVar5 = FUN_180073a70(local_968,local_988,"remove_baked_shadows");
  FUN_180187420(param_1,uVar5,param_3 + 0x368);
  FUN_18000f890(local_968);
  uVar5 = FUN_180073a70(local_968,local_988,"remove_dynamic_shadows");
  FUN_180187420(param_1,uVar5,param_3 + 0x369);
  FUN_18000f890(local_968);
  uVar5 = FUN_180073a70(local_968,local_988,"remove_post_processing");
  FUN_180187420(param_1,uVar5,param_3 + 0x36a);
  FUN_18000f890(local_968);
  uVar5 = FUN_180073a70(local_968,local_988,"remove_skybox_2d");
  FUN_180187420(param_1,uVar5,param_3 + 0x36b);
  FUN_18000f890(local_968);
  uVar5 = FUN_180073a70(local_968,local_988,"remove_skybox_3d");
  FUN_180187420(param_1,uVar5,param_3 + 0x36c);
  FUN_18000f890(local_968);
  uVar5 = FUN_180073a70(local_968,local_988,"remove_cable_particles");
  FUN_180187420(param_1,uVar5,param_3 + 0x36d);
  FUN_18000f890(local_968);
  puVar6 = (undefined8 *)FUN_180073a70(local_968,local_988,"nightmode_color");
  plVar1 = param_1 + 1;
  plVar11 = (longlong *)*plVar1;
  plVar10 = plVar11;
  if ((ulonglong)plVar11[3] < 0x10) {
    plVar10 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar9 = puVar6;
  }
  else {
    puVar9 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar11[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar9,(void *)*plVar10,sVar3);
      if (iVar4 != 0) goto LAB_1801b9c82;
    }
    FUN_18019e140(*param_1,puVar6,param_3 + 4);
  }
LAB_1801b9c82:
  FUN_18000f890(local_968);
  puVar6 = (undefined8 *)FUN_180073a70(local_308,local_988,"overlay_transparency");
  plVar11 = (longlong *)*plVar1;
  plVar10 = plVar11;
  if ((ulonglong)plVar11[3] < 0x10) {
    plVar10 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar9 = puVar6;
  }
  else {
    puVar9 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar11[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar9,(void *)*plVar10,sVar3);
      if (iVar4 != 0) goto LAB_1801b9cef;
    }
    FUN_1800f3090(*param_1,puVar6,param_3 + 0x14);
  }
LAB_1801b9cef:
  FUN_18000f890(local_308);
  puVar6 = (undefined8 *)FUN_180073a70(local_2a8,local_988,"props_color");
  plVar11 = (longlong *)*plVar1;
  plVar10 = plVar11;
  if ((ulonglong)plVar11[3] < 0x10) {
    plVar10 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar9 = puVar6;
  }
  else {
    puVar9 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar11[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar9,(void *)*plVar10,sVar3);
      if (iVar4 != 0) goto LAB_1801b9d5e;
    }
    FUN_18019e140(*param_1,puVar6,param_3 + 0x1c);
  }
LAB_1801b9d5e:
  FUN_18000f890(local_2a8);
  puVar6 = (undefined8 *)FUN_180073a70(local_268,local_988,"fullbright_color");
  plVar11 = (longlong *)*plVar1;
  plVar10 = plVar11;
  if ((ulonglong)plVar11[3] < 0x10) {
    plVar10 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar9 = puVar6;
  }
  else {
    puVar9 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar11[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar9,(void *)*plVar10,sVar3);
      if (iVar4 != 0) goto LAB_1801b9dcd;
    }
    FUN_18019e140(*param_1,puVar6,param_3 + 0x30);
  }
LAB_1801b9dcd:
  FUN_18000f890(local_268);
  puVar6 = (undefined8 *)FUN_180073a70(local_1a8,local_988,"adaptation");
  plVar11 = (longlong *)*plVar1;
  plVar10 = plVar11;
  if ((ulonglong)plVar11[3] < 0x10) {
    plVar10 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar9 = puVar6;
  }
  else {
    puVar9 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar11[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar9,(void *)*plVar10,sVar3);
      if (iVar4 != 0) goto LAB_1801b9e3c;
    }
    FUN_1800f3090(*param_1,puVar6,param_3 + 0x44);
  }
LAB_1801b9e3c:
  FUN_18000f890(local_1a8);
  uVar5 = FUN_180073a70(local_908,local_988,"compensation");
  FUN_180187500(param_1,uVar5,param_3 + 0x48);
  FUN_18000f890(local_908);
  uVar5 = FUN_180073a70(local_908,local_988,"exposure_min");
  FUN_180187500(param_1,uVar5,param_3 + 0x4c);
  FUN_18000f890(local_908);
  uVar5 = FUN_180073a70(local_908,local_988,"exposure_max");
  FUN_180187500(param_1,uVar5,param_3 + 0x50);
  FUN_18000f890(local_908);
  puVar6 = (undefined8 *)FUN_180073a70(local_908,local_988,"adaptation_speed");
  plVar11 = (longlong *)*plVar1;
  plVar10 = plVar11;
  if ((ulonglong)plVar11[3] < 0x10) {
    plVar10 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar9 = puVar6;
  }
  else {
    puVar9 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar11[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar9,(void *)*plVar10,sVar3);
      if (iVar4 != 0) goto LAB_1801b9f2f;
    }
    FUN_1800f3090(*param_1,puVar6,param_3 + 0x54);
  }
LAB_1801b9f2f:
  FUN_18000f890(local_908);
  puVar6 = (undefined8 *)FUN_180073a70(local_868,local_988,"fixed_exposure");
  plVar11 = (longlong *)*plVar1;
  plVar10 = plVar11;
  if ((ulonglong)plVar11[3] < 0x10) {
    plVar10 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar9 = puVar6;
  }
  else {
    puVar9 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar11[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar9,(void *)*plVar10,sVar3);
      if (iVar4 != 0) goto LAB_1801b9f98;
    }
    FUN_1800f3090(*param_1,puVar6,param_3 + 0x58);
  }
LAB_1801b9f98:
  FUN_18000f890(local_868);
  puVar6 = (undefined8 *)FUN_180073a70(local_848,local_988,"sun_illumination");
  plVar11 = (longlong *)*plVar1;
  plVar10 = plVar11;
  if ((ulonglong)plVar11[3] < 0x10) {
    plVar10 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar9 = puVar6;
  }
  else {
    puVar9 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar11[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar9,(void *)*plVar10,sVar3);
      if (iVar4 != 0) goto LAB_1801ba001;
    }
    FUN_18019e140(*param_1,puVar6,param_3 + 0x60);
  }
LAB_1801ba001:
  FUN_18000f890(local_848);
  puVar6 = (undefined8 *)FUN_180073a70(local_828,local_988,"sun_reflection");
  plVar11 = (longlong *)*plVar1;
  plVar10 = plVar11;
  if ((ulonglong)plVar11[3] < 0x10) {
    plVar10 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar9 = puVar6;
  }
  else {
    puVar9 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar11[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar9,(void *)*plVar10,sVar3);
      if (iVar4 != 0) goto LAB_1801ba06d;
    }
    FUN_18019e140(*param_1,puVar6,param_3 + 0x70);
  }
LAB_1801ba06d:
  FUN_18000f890(local_828);
  puVar6 = (undefined8 *)FUN_180073a70(local_808,local_988,"sun_method");
  plVar11 = (longlong *)*plVar1;
  plVar10 = plVar11;
  if ((ulonglong)plVar11[3] < 0x10) {
    plVar10 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar9 = puVar6;
  }
  else {
    puVar9 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar11[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar9,(void *)*plVar10,sVar3);
      if (iVar4 != 0) goto LAB_1801ba0df;
    }
    FUN_1800f3090(*param_1,puVar6,param_3 + 0x80);
  }
LAB_1801ba0df:
  FUN_18000f890(local_808);
  puVar6 = (undefined8 *)FUN_180073a70(local_7e8,local_988,"sun_pitch");
  plVar11 = (longlong *)*plVar1;
  plVar10 = plVar11;
  if ((ulonglong)plVar11[3] < 0x10) {
    plVar10 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar9 = puVar6;
  }
  else {
    puVar9 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar11[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar9,(void *)*plVar10,sVar3);
      if (iVar4 != 0) goto LAB_1801ba151;
    }
    FUN_1800f3090(*param_1,puVar6,param_3 + 0x88);
  }
LAB_1801ba151:
  FUN_18000f890(local_7e8);
  puVar6 = (undefined8 *)FUN_180073a70(local_7c8,local_988,"sun_yaw");
  plVar11 = (longlong *)*plVar1;
  plVar10 = plVar11;
  if ((ulonglong)plVar11[3] < 0x10) {
    plVar10 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar9 = puVar6;
  }
  else {
    puVar9 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar11[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar9,(void *)*plVar10,sVar3);
      if (iVar4 != 0) goto LAB_1801ba1c3;
    }
    FUN_1800f3090(*param_1,puVar6,param_3 + 0x8c);
  }
LAB_1801ba1c3:
  FUN_18000f890(local_7c8);
  puVar6 = (undefined8 *)FUN_180073a70(local_7a8,local_988,"volumetric_brightness");
  plVar11 = (longlong *)*plVar1;
  plVar10 = plVar11;
  if ((ulonglong)plVar11[3] < 0x10) {
    plVar10 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar9 = puVar6;
  }
  else {
    puVar9 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar11[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar9,(void *)*plVar10,sVar3);
      if (iVar4 != 0) goto LAB_1801ba235;
    }
    FUN_1800f3090(*param_1,puVar6,param_3 + 0x90);
  }
LAB_1801ba235:
  FUN_18000f890(local_7a8);
  puVar6 = (undefined8 *)FUN_180073a70(local_788,local_988,"sky_color");
  plVar11 = (longlong *)*plVar1;
  plVar10 = plVar11;
  if ((ulonglong)plVar11[3] < 0x10) {
    plVar10 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar9 = puVar6;
  }
  else {
    puVar9 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar11[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar9,(void *)*plVar10,sVar3);
      if (iVar4 != 0) goto LAB_1801ba2a7;
    }
    FUN_18019e140(*param_1,puVar6,param_3 + 0x98);
  }
LAB_1801ba2a7:
  FUN_18000f890(local_788);
  puVar6 = (undefined8 *)FUN_180073a70(local_768,local_988,"clouds_color");
  plVar11 = (longlong *)*plVar1;
  plVar10 = plVar11;
  if ((ulonglong)plVar11[3] < 0x10) {
    plVar10 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar9 = puVar6;
  }
  else {
    puVar9 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar11[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar9,(void *)*plVar10,sVar3);
      if (iVar4 != 0) goto LAB_1801ba319;
    }
    FUN_18019e140(*param_1,puVar6,param_3 + 0xa8);
  }
LAB_1801ba319:
  FUN_18000f890(local_768);
  puVar6 = (undefined8 *)FUN_180073a70(local_748,local_988,"sun_color");
  plVar11 = (longlong *)*plVar1;
  plVar10 = plVar11;
  if ((ulonglong)plVar11[3] < 0x10) {
    plVar10 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar9 = puVar6;
  }
  else {
    puVar9 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar11[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar9,(void *)*plVar10,sVar3);
      if (iVar4 != 0) goto LAB_1801ba38b;
    }
    FUN_18019e140(*param_1,puVar6,param_3 + 0xb8);
  }
LAB_1801ba38b:
  FUN_18000f890(local_748);
  puVar6 = (undefined8 *)FUN_180073a70(local_728,local_988,"skybox");
  plVar11 = (longlong *)*plVar1;
  plVar10 = plVar11;
  if ((ulonglong)plVar11[3] < 0x10) {
    plVar10 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar9 = puVar6;
  }
  else {
    puVar9 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar11[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar9,(void *)*plVar10,sVar3);
      if (iVar4 != 0) goto LAB_1801ba3fd;
    }
    FUN_1800f3090(*param_1,puVar6,param_3 + 200);
  }
LAB_1801ba3fd:
  FUN_18000f890(local_728);
  puVar6 = (undefined8 *)FUN_180073a70(local_708,local_988,"skybox_custom");
  plVar11 = (longlong *)*plVar1;
  plVar10 = plVar11;
  if ((ulonglong)plVar11[3] < 0x10) {
    plVar10 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar9 = puVar6;
  }
  else {
    puVar9 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar11[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar9,(void *)*plVar10,sVar3);
      if (iVar4 != 0) goto LAB_1801ba4af;
    }
    piVar7 = (int *)FUN_1800f2fa0(*param_1,puVar6);
    if ((piVar7 != (int *)0x0) && (*piVar7 == 3)) {
      FUN_180540170(param_3 + 0xcc,0,0xc0);
      plVar11 = (longlong *)(piVar7 + 4);
      if (0xf < *(ulonglong *)(piVar7 + 10)) {
        plVar11 = (longlong *)*plVar11;
      }
      snprintf(param_3 + 0xcc,0xc0,&DAT_1806d3198,plVar11);
    }
  }
LAB_1801ba4af:
  FUN_18000f890(local_708);
  puVar6 = (undefined8 *)FUN_180073a70(local_6e8,local_988,"fog_color");
  plVar11 = (longlong *)*plVar1;
  plVar10 = plVar11;
  if ((ulonglong)plVar11[3] < 0x10) {
    plVar10 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar9 = puVar6;
  }
  else {
    puVar9 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar11[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar9,(void *)*plVar10,sVar3);
      if (iVar4 != 0) goto LAB_1801ba521;
    }
    FUN_18019e140(*param_1,puVar6,param_3 + 400);
  }
LAB_1801ba521:
  FUN_18000f890(local_6e8);
  puVar6 = (undefined8 *)FUN_180073a70(local_6c8,local_988,"fog_distance");
  plVar11 = (longlong *)*plVar1;
  plVar10 = plVar11;
  if ((ulonglong)plVar11[3] < 0x10) {
    plVar10 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar9 = puVar6;
  }
  else {
    puVar9 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar11[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar9,(void *)*plVar10,sVar3);
      if (iVar4 != 0) goto LAB_1801ba593;
    }
    FUN_1800f3090(*param_1,puVar6,param_3 + 0x1a0);
  }
LAB_1801ba593:
  FUN_18000f890(local_6c8);
  uVar5 = FUN_180073a70(local_8a8,local_988,"fog_exponent");
  FUN_180187500(param_1,uVar5,param_3 + 0x1a4);
  FUN_18000f890(local_8a8);
  puVar6 = (undefined8 *)FUN_180073a70(local_8a8,local_988,"fog_height_start");
  plVar11 = (longlong *)*plVar1;
  plVar10 = plVar11;
  if ((ulonglong)plVar11[3] < 0x10) {
    plVar10 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar9 = puVar6;
  }
  else {
    puVar9 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar11[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar9,(void *)*plVar10,sVar3);
      if (iVar4 != 0) goto LAB_1801ba632;
    }
    FUN_1800f3090(*param_1,puVar6,param_3 + 0x1ac);
  }
LAB_1801ba632:
  FUN_18000f890(local_8a8);
  puVar6 = (undefined8 *)FUN_180073a70(local_6a8,local_988,"fog_height_end");
  plVar11 = (longlong *)*plVar1;
  plVar10 = plVar11;
  if ((ulonglong)plVar11[3] < 0x10) {
    plVar10 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar9 = puVar6;
  }
  else {
    puVar9 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar11[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar9,(void *)*plVar10,sVar3);
      if (iVar4 != 0) goto LAB_1801ba6a1;
    }
    FUN_1800f3090(*param_1,puVar6,param_3 + 0x1b0);
  }
LAB_1801ba6a1:
  FUN_18000f890(local_6a8);
  uVar5 = FUN_180073a70(local_8c8,local_988,"fog_height_exponent");
  FUN_180187500(param_1,uVar5,param_3 + 0x1b4);
  FUN_18000f890(local_8c8);
  puVar6 = (undefined8 *)FUN_180073a70(local_8c8,local_988,"bloom_strength");
  plVar11 = (longlong *)*plVar1;
  plVar10 = plVar11;
  if ((ulonglong)plVar11[3] < 0x10) {
    plVar10 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar9 = puVar6;
  }
  else {
    puVar9 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar11[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar9,(void *)*plVar10,sVar3);
      if (iVar4 != 0) goto LAB_1801ba740;
    }
    FUN_1800f3090(*param_1,puVar6,param_3 + 0x1bc);
  }
LAB_1801ba740:
  FUN_18000f890(local_8c8);
  puVar6 = (undefined8 *)FUN_180073a70(local_688,local_988,"bloom_screen_strength");
  plVar11 = (longlong *)*plVar1;
  plVar10 = plVar11;
  if ((ulonglong)plVar11[3] < 0x10) {
    plVar10 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar9 = puVar6;
  }
  else {
    puVar9 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar11[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar9,(void *)*plVar10,sVar3);
      if (iVar4 != 0) goto LAB_1801ba7af;
    }
    FUN_1800f3090(*param_1,puVar6,param_3 + 0x1c0);
  }
LAB_1801ba7af:
  FUN_18000f890(local_688);
  puVar6 = (undefined8 *)FUN_180073a70(local_668,local_988,"bloom_blur_strength");
  plVar11 = (longlong *)*plVar1;
  plVar10 = plVar11;
  if ((ulonglong)plVar11[3] < 0x10) {
    plVar10 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar9 = puVar6;
  }
  else {
    puVar9 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar11[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar9,(void *)*plVar10,sVar3);
      if (iVar4 != 0) goto LAB_1801ba821;
    }
    FUN_1800f3090(*param_1,puVar6,param_3 + 0x1c4);
  }
LAB_1801ba821:
  FUN_18000f890(local_668);
  puVar6 = (undefined8 *)FUN_180073a70(local_648,local_988,"bloom_threshold");
  plVar11 = (longlong *)*plVar1;
  plVar10 = plVar11;
  if ((ulonglong)plVar11[3] < 0x10) {
    plVar10 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar9 = puVar6;
  }
  else {
    puVar9 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar11[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar9,(void *)*plVar10,sVar3);
      if (iVar4 != 0) goto LAB_1801ba893;
    }
    FUN_1800f3090(*param_1,puVar6,param_3 + 0x1c8);
  }
LAB_1801ba893:
  FUN_18000f890(local_648);
  puVar6 = (undefined8 *)FUN_180073a70(local_628,local_988,"bloom_threshold_width");
  plVar11 = (longlong *)*plVar1;
  plVar10 = plVar11;
  if ((ulonglong)plVar11[3] < 0x10) {
    plVar10 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar9 = puVar6;
  }
  else {
    puVar9 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar11[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar9,(void *)*plVar10,sVar3);
      if (iVar4 != 0) goto LAB_1801ba905;
    }
    FUN_1800f3090(*param_1,puVar6,param_3 + 0x1cc);
  }
LAB_1801ba905:
  FUN_18000f890(local_628);
  puVar6 = (undefined8 *)FUN_180073a70(local_608,local_988,"vignette_color");
  plVar11 = (longlong *)*plVar1;
  plVar10 = plVar11;
  if ((ulonglong)plVar11[3] < 0x10) {
    plVar10 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar9 = puVar6;
  }
  else {
    puVar9 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar11[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar9,(void *)*plVar10,sVar3);
      if (iVar4 != 0) goto LAB_1801ba977;
    }
    FUN_18019e140(*param_1,puVar6,param_3 + 0x238);
  }
LAB_1801ba977:
  FUN_18000f890(local_608);
  puVar6 = (undefined8 *)FUN_180073a70(local_5e8,local_988,"vignette_strength");
  plVar11 = (longlong *)*plVar1;
  plVar10 = plVar11;
  if ((ulonglong)plVar11[3] < 0x10) {
    plVar10 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar9 = puVar6;
  }
  else {
    puVar9 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar11[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar9,(void *)*plVar10,sVar3);
      if (iVar4 != 0) goto LAB_1801ba9e9;
    }
    FUN_1800f3090(*param_1,puVar6,param_3 + 0x248);
  }
LAB_1801ba9e9:
  FUN_18000f890(local_5e8);
  puVar6 = (undefined8 *)FUN_180073a70(local_5c8,local_988,"vignette_radius");
  plVar11 = (longlong *)*plVar1;
  plVar10 = plVar11;
  if ((ulonglong)plVar11[3] < 0x10) {
    plVar10 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar9 = puVar6;
  }
  else {
    puVar9 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar11[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar9,(void *)*plVar10,sVar3);
      if (iVar4 != 0) goto LAB_1801baa5b;
    }
    FUN_1800f3090(*param_1,puVar6,param_3 + 0x24c);
  }
LAB_1801baa5b:
  FUN_18000f890(local_5c8);
  puVar6 = (undefined8 *)FUN_180073a70(local_5a8,local_988,"vignette_roundness");
  plVar11 = (longlong *)*plVar1;
  plVar10 = plVar11;
  if ((ulonglong)plVar11[3] < 0x10) {
    plVar10 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar9 = puVar6;
  }
  else {
    puVar9 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar11[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar9,(void *)*plVar10,sVar3);
      if (iVar4 != 0) goto LAB_1801baacd;
    }
    FUN_1800f3090(*param_1,puVar6,param_3 + 0x250);
  }
LAB_1801baacd:
  FUN_18000f890(local_5a8);
  puVar6 = (undefined8 *)FUN_180073a70(local_588,local_988,"vignette_feather");
  plVar11 = (longlong *)*plVar1;
  plVar10 = plVar11;
  if ((ulonglong)plVar11[3] < 0x10) {
    plVar10 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar9 = puVar6;
  }
  else {
    puVar9 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar11[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar9,(void *)*plVar10,sVar3);
      if (iVar4 != 0) goto LAB_1801bab3f;
    }
    FUN_1800f3090(*param_1,puVar6,param_3 + 0x254);
  }
LAB_1801bab3f:
  FUN_18000f890(local_588);
  puVar6 = (undefined8 *)FUN_180073a70(local_568,local_988,"contrast_strength");
  plVar11 = (longlong *)*plVar1;
  plVar10 = plVar11;
  if ((ulonglong)plVar11[3] < 0x10) {
    plVar10 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar9 = puVar6;
  }
  else {
    puVar9 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar11[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar9,(void *)*plVar10,sVar3);
      if (iVar4 != 0) goto LAB_1801babb1;
    }
    FUN_1800f3090(*param_1,puVar6,param_3 + 0x25c);
  }
LAB_1801babb1:
  FUN_18000f890(local_568);
  puVar6 = (undefined8 *)FUN_180073a70(local_548,local_988,"contrast_edge");
  plVar11 = (longlong *)*plVar1;
  plVar10 = plVar11;
  if ((ulonglong)plVar11[3] < 0x10) {
    plVar10 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar9 = puVar6;
  }
  else {
    puVar9 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar11[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar9,(void *)*plVar10,sVar3);
      if (iVar4 != 0) goto LAB_1801bac23;
    }
    FUN_1800f3090(*param_1,puVar6,param_3 + 0x260);
  }
LAB_1801bac23:
  FUN_18000f890(local_548);
  puVar6 = (undefined8 *)FUN_180073a70(local_528,local_988,"contrast_vignette_start");
  plVar11 = (longlong *)*plVar1;
  plVar10 = plVar11;
  if ((ulonglong)plVar11[3] < 0x10) {
    plVar10 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar9 = puVar6;
  }
  else {
    puVar9 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar11[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar9,(void *)*plVar10,sVar3);
      if (iVar4 != 0) goto LAB_1801bac95;
    }
    FUN_1800f3090(*param_1,puVar6,param_3 + 0x264);
  }
LAB_1801bac95:
  FUN_18000f890(local_528);
  puVar6 = (undefined8 *)FUN_180073a70(local_508,local_988,"contrast_vignette_end");
  plVar11 = (longlong *)*plVar1;
  plVar10 = plVar11;
  if ((ulonglong)plVar11[3] < 0x10) {
    plVar10 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar9 = puVar6;
  }
  else {
    puVar9 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar11[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar9,(void *)*plVar10,sVar3);
      if (iVar4 != 0) goto LAB_1801bad07;
    }
    FUN_1800f3090(*param_1,puVar6,param_3 + 0x268);
  }
LAB_1801bad07:
  FUN_18000f890(local_508);
  puVar6 = (undefined8 *)FUN_180073a70(local_4e8,local_988,"contrast_vignette_blur");
  plVar11 = (longlong *)*plVar1;
  plVar10 = plVar11;
  if ((ulonglong)plVar11[3] < 0x10) {
    plVar10 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar9 = puVar6;
  }
  else {
    puVar9 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar11[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar9,(void *)*plVar10,sVar3);
      if (iVar4 != 0) goto LAB_1801bad79;
    }
    FUN_1800f3090(*param_1,puVar6,param_3 + 0x26c);
  }
LAB_1801bad79:
  FUN_18000f890(local_4e8);
  puVar6 = (undefined8 *)FUN_180073a70(local_4c8,local_988,"tone_curve");
  plVar11 = (longlong *)*plVar1;
  plVar10 = plVar11;
  if ((ulonglong)plVar11[3] < 0x10) {
    plVar10 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar9 = puVar6;
  }
  else {
    puVar9 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar11[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar9,(void *)*plVar10,sVar3);
      if (iVar4 != 0) goto LAB_1801badeb;
    }
    FUN_1800f3090(*param_1,puVar6,param_3 + 0x274);
  }
LAB_1801badeb:
  FUN_18000f890(local_4c8);
  puVar6 = (undefined8 *)FUN_180073a70(local_4a8,local_988,"cc_contrast");
  plVar11 = (longlong *)*plVar1;
  plVar10 = plVar11;
  if ((ulonglong)plVar11[3] < 0x10) {
    plVar10 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar9 = puVar6;
  }
  else {
    puVar9 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar11[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar9,(void *)*plVar10,sVar3);
      if (iVar4 != 0) goto LAB_1801bae5d;
    }
    FUN_1800f3090(*param_1,puVar6,param_3 + 0x278);
  }
LAB_1801bae5d:
  FUN_18000f890(local_4a8);
  puVar6 = (undefined8 *)FUN_180073a70(local_488,local_988,"cc_highlights");
  plVar11 = (longlong *)*plVar1;
  plVar10 = plVar11;
  if ((ulonglong)plVar11[3] < 0x10) {
    plVar10 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar9 = puVar6;
  }
  else {
    puVar9 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar11[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar9,(void *)*plVar10,sVar3);
      if (iVar4 != 0) goto LAB_1801baecf;
    }
    FUN_1800f3090(*param_1,puVar6,param_3 + 0x27c);
  }
LAB_1801baecf:
  FUN_18000f890(local_488);
  puVar6 = (undefined8 *)FUN_180073a70(local_468,local_988,"cc_shadows");
  plVar11 = (longlong *)*plVar1;
  plVar10 = plVar11;
  if ((ulonglong)plVar11[3] < 0x10) {
    plVar10 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar9 = puVar6;
  }
  else {
    puVar9 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar11[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar9,(void *)*plVar10,sVar3);
      if (iVar4 != 0) goto LAB_1801baf41;
    }
    FUN_1800f3090(*param_1,puVar6,param_3 + 0x280);
  }
LAB_1801baf41:
  FUN_18000f890(local_468);
  puVar6 = (undefined8 *)FUN_180073a70(local_448,local_988,"cc_saturation");
  plVar11 = (longlong *)*plVar1;
  plVar10 = plVar11;
  if ((ulonglong)plVar11[3] < 0x10) {
    plVar10 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar9 = puVar6;
  }
  else {
    puVar9 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar11[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar9,(void *)*plVar10,sVar3);
      if (iVar4 != 0) goto LAB_1801bafb3;
    }
    FUN_1800f3090(*param_1,puVar6,param_3 + 0x284);
  }
LAB_1801bafb3:
  FUN_18000f890(local_448);
  puVar6 = (undefined8 *)FUN_180073a70(local_428,local_988,"cc_vibrance");
  plVar11 = (longlong *)*plVar1;
  plVar10 = plVar11;
  if ((ulonglong)plVar11[3] < 0x10) {
    plVar10 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar9 = puVar6;
  }
  else {
    puVar9 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar11[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar9,(void *)*plVar10,sVar3);
      if (iVar4 != 0) goto LAB_1801bb025;
    }
    FUN_1800f3090(*param_1,puVar6,param_3 + 0x288);
  }
LAB_1801bb025:
  FUN_18000f890(local_428);
  puVar6 = (undefined8 *)FUN_180073a70(local_408,local_988,"cc_temperature");
  plVar11 = (longlong *)*plVar1;
  plVar10 = plVar11;
  if ((ulonglong)plVar11[3] < 0x10) {
    plVar10 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar9 = puVar6;
  }
  else {
    puVar9 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar11[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar9,(void *)*plVar10,sVar3);
      if (iVar4 != 0) goto LAB_1801bb097;
    }
    FUN_1800f3090(*param_1,puVar6,param_3 + 0x28c);
  }
LAB_1801bb097:
  FUN_18000f890(local_408);
  puVar6 = (undefined8 *)FUN_180073a70(local_3e8,local_988,"cc_tint");
  plVar11 = (longlong *)*plVar1;
  plVar10 = plVar11;
  if ((ulonglong)plVar11[3] < 0x10) {
    plVar10 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar9 = puVar6;
  }
  else {
    puVar9 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar11[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar9,(void *)*plVar10,sVar3);
      if (iVar4 != 0) goto LAB_1801bb109;
    }
    FUN_1800f3090(*param_1,puVar6,param_3 + 0x290);
  }
LAB_1801bb109:
  FUN_18000f890(local_3e8);
  puVar6 = (undefined8 *)FUN_180073a70(local_3c8,local_988,"dof_mode");
  plVar11 = (longlong *)*plVar1;
  plVar10 = plVar11;
  if ((ulonglong)plVar11[3] < 0x10) {
    plVar10 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar9 = puVar6;
  }
  else {
    puVar9 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar11[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar9,(void *)*plVar10,sVar3);
      if (iVar4 != 0) goto LAB_1801bb17b;
    }
    FUN_1800f3090(*param_1,puVar6,param_3 + 0x298);
  }
LAB_1801bb17b:
  FUN_18000f890(local_3c8);
  puVar6 = (undefined8 *)FUN_180073a70(local_3a8,local_988,"dof_quality");
  plVar11 = (longlong *)*plVar1;
  plVar10 = plVar11;
  if ((ulonglong)plVar11[3] < 0x10) {
    plVar10 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar9 = puVar6;
  }
  else {
    puVar9 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar11[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar9,(void *)*plVar10,sVar3);
      if (iVar4 != 0) goto LAB_1801bb1ed;
    }
    FUN_1800f3090(*param_1,puVar6,param_3 + 0x29c);
  }
LAB_1801bb1ed:
  FUN_18000f890(local_3a8);
  puVar6 = (undefined8 *)FUN_180073a70(local_388,local_988,"dof_focus_distance");
  plVar11 = (longlong *)*plVar1;
  plVar10 = plVar11;
  if ((ulonglong)plVar11[3] < 0x10) {
    plVar10 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar9 = puVar6;
  }
  else {
    puVar9 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar11[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar9,(void *)*plVar10,sVar3);
      if (iVar4 != 0) goto LAB_1801bb25f;
    }
    FUN_1800f3090(*param_1,puVar6,param_3 + 0x2a0);
  }
LAB_1801bb25f:
  FUN_18000f890(local_388);
  puVar6 = (undefined8 *)FUN_180073a70(local_368,local_988,"dof_focus_speed");
  plVar11 = (longlong *)*plVar1;
  plVar10 = plVar11;
  if ((ulonglong)plVar11[3] < 0x10) {
    plVar10 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar9 = puVar6;
  }
  else {
    puVar9 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar11[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar9,(void *)*plVar10,sVar3);
      if (iVar4 != 0) goto LAB_1801bb2d1;
    }
    FUN_1800f3090(*param_1,puVar6,param_3 + 0x2a4);
  }
LAB_1801bb2d1:
  FUN_18000f890(local_368);
  puVar6 = (undefined8 *)FUN_180073a70(local_348,local_988,"dof_focus_range");
  plVar11 = (longlong *)*plVar1;
  plVar10 = plVar11;
  if ((ulonglong)plVar11[3] < 0x10) {
    plVar10 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar9 = puVar6;
  }
  else {
    puVar9 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar11[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar9,(void *)*plVar10,sVar3);
      if (iVar4 != 0) goto LAB_1801bb343;
    }
    FUN_1800f3090(*param_1,puVar6,param_3 + 0x2a8);
  }
LAB_1801bb343:
  FUN_18000f890(local_348);
  puVar6 = (undefined8 *)FUN_180073a70(local_328,local_988,"wind_direction");
  plVar11 = (longlong *)*plVar1;
  plVar10 = plVar11;
  if ((ulonglong)plVar11[3] < 0x10) {
    plVar10 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar9 = puVar6;
  }
  else {
    puVar9 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar11[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar9,(void *)*plVar10,sVar3);
      if (iVar4 != 0) goto LAB_1801bb3b5;
    }
    FUN_1800f3090(*param_1,puVar6,param_3 + 0x2b0);
  }
LAB_1801bb3b5:
  FUN_18000f890(local_328);
  uVar5 = FUN_180073a70(local_888,local_988,"wind_strength");
  FUN_180187500(param_1,uVar5,param_3 + 0x2b4);
  FUN_18000f890(local_888);
  puVar6 = (undefined8 *)FUN_180073a70(local_888,local_988,"wetness_rain");
  plVar11 = (longlong *)*plVar1;
  plVar10 = plVar11;
  if ((ulonglong)plVar11[3] < 0x10) {
    plVar10 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar9 = puVar6;
  }
  else {
    puVar9 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar11[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar9,(void *)*plVar10,sVar3);
      if (iVar4 != 0) goto LAB_1801bb454;
    }
    FUN_1800f3090(*param_1,puVar6,param_3 + 0x2c8);
  }
LAB_1801bb454:
  FUN_18000f890(local_888);
  puVar6 = (undefined8 *)FUN_180073a70(local_2e8,local_988,"wetness_coverage");
  plVar11 = (longlong *)*plVar1;
  plVar10 = plVar11;
  if ((ulonglong)plVar11[3] < 0x10) {
    plVar10 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar9 = puVar6;
  }
  else {
    puVar9 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar11[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar9,(void *)*plVar10,sVar3);
      if (iVar4 != 0) goto LAB_1801bb4c3;
    }
    FUN_1800f3090(*param_1,puVar6,param_3 + 0x2cc);
  }
LAB_1801bb4c3:
  FUN_18000f890(local_2e8);
  puVar6 = (undefined8 *)FUN_180073a70(local_2c8,local_988,"wetness_drying");
  plVar11 = (longlong *)*plVar1;
  plVar10 = plVar11;
  if ((ulonglong)plVar11[3] < 0x10) {
    plVar10 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar9 = puVar6;
  }
  else {
    puVar9 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar11[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar9,(void *)*plVar10,sVar3);
      if (iVar4 != 0) goto LAB_1801bb535;
    }
    FUN_1800f3090(*param_1,puVar6,param_3 + 0x2d0);
  }
LAB_1801bb535:
  FUN_18000f890(local_2c8);
  uVar5 = FUN_180073a70(local_928,local_988,"wind_particle_strength");
  FUN_180187500(param_1,uVar5,param_3 + 0x2b8);
  FUN_18000f890(local_928);
  uVar5 = FUN_180073a70(local_928,local_988,"wind_turbulence");
  FUN_180187500(param_1,uVar5,param_3 + 700);
  FUN_18000f890(local_928);
  uVar5 = FUN_180073a70(local_928,local_988,"wind_max_tilt");
  FUN_180187500(param_1,uVar5,param_3 + 0x2c0);
  FUN_18000f890(local_928);
  uVar5 = FUN_180073a70(local_928,local_988,"thunder");
  FUN_180187420(param_1,uVar5,param_3 + 0x2d5);
  FUN_18000f890(local_928);
  puVar6 = (undefined8 *)FUN_180073a70(local_928,local_988,"thunder_primary");
  plVar11 = (longlong *)*plVar1;
  plVar10 = plVar11;
  if ((ulonglong)plVar11[3] < 0x10) {
    plVar10 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar9 = puVar6;
  }
  else {
    puVar9 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar11[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar9,(void *)*plVar10,sVar3);
      if (iVar4 != 0) goto LAB_1801bb664;
    }
    FUN_18019e140(*param_1,puVar6,param_3 + 0x2d8);
  }
LAB_1801bb664:
  FUN_18000f890(local_928);
  puVar6 = (undefined8 *)FUN_180073a70(local_288,local_988,"thunder_glow");
  plVar11 = (longlong *)*plVar1;
  plVar10 = plVar11;
  if ((ulonglong)plVar11[3] < 0x10) {
    plVar10 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar9 = puVar6;
  }
  else {
    puVar9 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar11[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar9,(void *)*plVar10,sVar3);
      if (iVar4 != 0) goto LAB_1801bb6d3;
    }
    FUN_18019e140(*param_1,puVar6,param_3 + 0x2e8);
  }
LAB_1801bb6d3:
  FUN_18000f890(local_288);
  uVar5 = FUN_180073a70(local_948,local_988,"thunder_interval");
  FUN_180187500(param_1,uVar5,param_3 + 0x2f8);
  FUN_18000f890(local_948);
  uVar5 = FUN_180073a70(local_948,local_988,"thunder_duration");
  FUN_180187500(param_1,uVar5,param_3 + 0x2fc);
  FUN_18000f890(local_948);
  uVar5 = FUN_180073a70(local_948,local_988,"thunder_sound");
  FUN_180187420(param_1,uVar5,param_3 + 0x300);
  FUN_18000f890(local_948);
  uVar5 = FUN_180073a70(local_948,local_988,"thunder_on_kill");
  FUN_180187420(param_1,uVar5,param_3 + 0x301);
  FUN_18000f890(local_948);
  uVar5 = FUN_180073a70(local_948,local_988,&DAT_1806f8bfc);
  FUN_180187420(param_1,uVar5,param_3 + 0x302);
  FUN_18000f890(local_948);
  puVar6 = (undefined8 *)FUN_180073a70(local_948,local_988,"rain_primary");
  plVar11 = (longlong *)*plVar1;
  plVar10 = plVar11;
  if ((ulonglong)plVar11[3] < 0x10) {
    plVar10 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar9 = puVar6;
  }
  else {
    puVar9 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar11[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar9,(void *)*plVar10,sVar3);
      if (iVar4 != 0) goto LAB_1801bb83d;
    }
    FUN_18019e140(*param_1,puVar6,param_3 + 0x304);
  }
LAB_1801bb83d:
  FUN_18000f890(local_948);
  puVar6 = (undefined8 *)FUN_180073a70(local_248,local_988,"rain_glow");
  plVar11 = (longlong *)*plVar1;
  plVar10 = plVar11;
  if ((ulonglong)plVar11[3] < 0x10) {
    plVar10 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar9 = puVar6;
  }
  else {
    puVar9 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar11[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar9,(void *)*plVar10,sVar3);
      if (iVar4 != 0) goto LAB_1801bb8ad;
    }
    FUN_18019e140(*param_1,puVar6,param_3 + 0x314);
  }
LAB_1801bb8ad:
  FUN_18000f890(local_248);
  puVar6 = (undefined8 *)FUN_180073a70(local_228,local_988,"rain_speed");
  plVar11 = (longlong *)*plVar1;
  plVar10 = plVar11;
  if ((ulonglong)plVar11[3] < 0x10) {
    plVar10 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar9 = puVar6;
  }
  else {
    puVar9 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar11[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar9,(void *)*plVar10,sVar3);
      if (iVar4 != 0) goto LAB_1801bb91f;
    }
    FUN_1800f3090(*param_1,puVar6,param_3 + 0x324);
  }
LAB_1801bb91f:
  FUN_18000f890(local_228);
  puVar6 = (undefined8 *)FUN_180073a70(local_208,local_988,"rain_radius");
  plVar11 = (longlong *)*plVar1;
  plVar10 = plVar11;
  if ((ulonglong)plVar11[3] < 0x10) {
    plVar10 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar9 = puVar6;
  }
  else {
    puVar9 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar11[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar9,(void *)*plVar10,sVar3);
      if (iVar4 != 0) goto LAB_1801bb991;
    }
    FUN_1800f3090(*param_1,puVar6,param_3 + 0x328);
  }
LAB_1801bb991:
  FUN_18000f890(local_208);
  puVar6 = (undefined8 *)FUN_180073a70(local_1e8,local_988,"rain_density");
  plVar11 = (longlong *)*plVar1;
  plVar10 = plVar11;
  if ((ulonglong)plVar11[3] < 0x10) {
    plVar10 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar9 = puVar6;
  }
  else {
    puVar9 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar11[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar9,(void *)*plVar10,sVar3);
      if (iVar4 != 0) goto LAB_1801bba03;
    }
    FUN_1800f3090(*param_1,puVar6,param_3 + 0x32c);
  }
LAB_1801bba03:
  FUN_18000f890(local_1e8);
  puVar6 = (undefined8 *)FUN_180073a70(local_1c8,local_988,"rain_center_bias");
  plVar11 = (longlong *)*plVar1;
  plVar10 = plVar11;
  if ((ulonglong)plVar11[3] < 0x10) {
    plVar10 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar9 = puVar6;
  }
  else {
    puVar9 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar11[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar9,(void *)*plVar10,sVar3);
      if (iVar4 != 0) goto LAB_1801bba75;
    }
    FUN_1800f3090(*param_1,puVar6,param_3 + 0x330);
  }
LAB_1801bba75:
  FUN_18000f890(local_1c8);
  uVar5 = FUN_180073a70(local_8e8,local_988,"rain_sound");
  FUN_180187420(param_1,uVar5,param_3 + 0x334);
  FUN_18000f890(local_8e8);
  uVar5 = FUN_180073a70(local_8e8,local_988,&DAT_1806f8c7c);
  FUN_180187420(param_1,uVar5,param_3 + 0x335);
  FUN_18000f890(local_8e8);
  puVar6 = (undefined8 *)FUN_180073a70(local_8e8,local_988,"snow_primary");
  plVar11 = (longlong *)*plVar1;
  plVar10 = plVar11;
  if ((ulonglong)plVar11[3] < 0x10) {
    plVar10 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar9 = puVar6;
  }
  else {
    puVar9 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar11[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar9,(void *)*plVar10,sVar3);
      if (iVar4 != 0) goto LAB_1801bbb44;
    }
    FUN_18019e140(*param_1,puVar6,param_3 + 0x338);
  }
LAB_1801bbb44:
  FUN_18000f890(local_8e8);
  puVar6 = (undefined8 *)FUN_180073a70(local_188,local_988,"snow_glow");
  plVar11 = (longlong *)*plVar1;
  plVar10 = plVar11;
  if ((ulonglong)plVar11[3] < 0x10) {
    plVar10 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar9 = puVar6;
  }
  else {
    puVar9 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar11[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar9,(void *)*plVar10,sVar3);
      if (iVar4 != 0) goto LAB_1801bbbb3;
    }
    FUN_18019e140(*param_1,puVar6,param_3 + 0x348);
  }
LAB_1801bbbb3:
  FUN_18000f890(local_188);
  puVar6 = (undefined8 *)FUN_180073a70(local_168,local_988,"snow_speed");
  plVar11 = (longlong *)*plVar1;
  plVar10 = plVar11;
  if ((ulonglong)plVar11[3] < 0x10) {
    plVar10 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar9 = puVar6;
  }
  else {
    puVar9 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar11[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar9,(void *)*plVar10,sVar3);
      if (iVar4 != 0) goto LAB_1801bbc25;
    }
    FUN_1800f3090(*param_1,puVar6,param_3 + 0x358);
  }
LAB_1801bbc25:
  FUN_18000f890(local_168);
  puVar6 = (undefined8 *)FUN_180073a70(local_148,local_988,"snow_radius");
  plVar11 = (longlong *)*plVar1;
  plVar10 = plVar11;
  if ((ulonglong)plVar11[3] < 0x10) {
    plVar10 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar9 = puVar6;
  }
  else {
    puVar9 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar11[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar9,(void *)*plVar10,sVar3);
      if (iVar4 != 0) goto LAB_1801bbc97;
    }
    FUN_1800f3090(*param_1,puVar6,param_3 + 0x35c);
  }
LAB_1801bbc97:
  FUN_18000f890(local_148);
  puVar6 = (undefined8 *)FUN_180073a70(local_128,local_988,"snow_density");
  plVar11 = (longlong *)*plVar1;
  plVar10 = plVar11;
  if ((ulonglong)plVar11[3] < 0x10) {
    plVar10 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar9 = puVar6;
  }
  else {
    puVar9 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar11[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar9,(void *)*plVar10,sVar3);
      if (iVar4 != 0) goto LAB_1801bbd09;
    }
    FUN_1800f3090(*param_1,puVar6,param_3 + 0x360);
  }
LAB_1801bbd09:
  FUN_18000f890(local_128);
  uVar12 = 0;
  do {
    uVar2 = uVar12 + 1;
    uVar5 = FUN_18004e4f0(local_c8,uVar2);
    uVar8 = FUN_180073a70(local_e8,local_988,"bloom_blur_weight");
    puVar6 = (undefined8 *)FUN_180066820(local_108,uVar8,uVar5);
    plVar11 = (longlong *)*plVar1;
    plVar10 = plVar1;
    if (0xf < (ulonglong)plVar11[3]) {
      plVar10 = plVar11;
    }
    sVar3 = puVar6[2];
    if ((ulonglong)puVar6[3] < 0x10) {
      puVar9 = puVar6;
    }
    else {
      puVar9 = (undefined8 *)*puVar6;
    }
    if (sVar3 == plVar11[2]) {
      if (sVar3 != 0) {
        iVar4 = memcmp(puVar9,(void *)*plVar10,sVar3);
        if (iVar4 != 0) goto LAB_1801bbdb6;
      }
      FUN_1800f3090(*param_1,puVar6,param_3 + 0x1d0 + uVar12 * 4);
    }
LAB_1801bbdb6:
    FUN_18000f890(local_108);
    FUN_18000f890(local_e8);
    FUN_18000f890(local_c8);
    uVar5 = FUN_18004e4f0(local_68,uVar2);
    uVar8 = FUN_180073a70(local_88,local_988,"bloom_blur_color");
    puVar6 = (undefined8 *)FUN_180066820(local_a8,uVar8,uVar5);
    plVar11 = (longlong *)*plVar1;
    plVar10 = plVar1;
    if (0xf < (ulonglong)plVar11[3]) {
      plVar10 = plVar11;
    }
    sVar3 = puVar6[2];
    if ((ulonglong)puVar6[3] < 0x10) {
      puVar9 = puVar6;
    }
    else {
      puVar9 = (undefined8 *)*puVar6;
    }
    if (sVar3 == plVar11[2]) {
      if (sVar3 != 0) {
        iVar4 = memcmp(puVar9,(void *)*plVar10,sVar3);
        if (iVar4 != 0) goto LAB_1801bbe71;
      }
      FUN_18019e140(*param_1,puVar6,param_3 + 0x1e4 + uVar12 * 0x10);
    }
LAB_1801bbe71:
    FUN_18000f890(local_a8);
    FUN_18000f890(local_88);
    FUN_18000f890(local_68);
    uVar12 = uVar2;
    if (4 < uVar2) {
      FUN_18000f890(local_988);
      return;
    }
  } while( true );
}



/* ===== 1801bbed0 FUN_1801bbed0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801bbed0(undefined8 *param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  size_t sVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined1 auStack_3a8 [32];
  undefined1 local_388 [32];
  undefined1 local_368 [32];
  undefined1 local_348 [32];
  undefined1 local_328 [32];
  undefined1 local_308 [32];
  undefined1 local_2e8 [32];
  undefined1 local_2c8 [32];
  undefined1 local_2a8 [32];
  undefined1 local_288 [32];
  undefined1 local_268 [32];
  undefined1 local_248 [32];
  undefined1 local_228 [32];
  undefined1 local_208 [32];
  undefined1 local_1e8 [32];
  undefined1 local_1c8 [32];
  undefined1 local_1a8 [32];
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
  FUN_180073a70(local_368,param_2,"aimbot.");
  uVar5 = FUN_180073a70(local_388,local_368,"enabled");
  FUN_180187420(param_1,uVar5,param_3);
  FUN_18000f890(local_388);
  puVar6 = (undefined8 *)FUN_180073a70(local_2c8,local_368,"activation");
  plVar1 = param_1 + 1;
  plVar2 = (longlong *)*plVar1;
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar7 = puVar6;
  }
  else {
    puVar7 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_1801bbfab;
    }
    FUN_1800f3090(*param_1,puVar6,param_3 + 4);
  }
LAB_1801bbfab:
  FUN_18000f890(local_2c8);
  puVar6 = (undefined8 *)FUN_180073a70(local_2a8,local_368,"conditions");
  plVar2 = (longlong *)*plVar1;
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar7 = puVar6;
  }
  else {
    puVar7 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_1801bc014;
    }
    FUN_180152130(*param_1,puVar6,param_3 + 8);
  }
LAB_1801bc014:
  FUN_18000f890(local_2a8);
  puVar6 = (undefined8 *)FUN_180073a70(local_288,local_368,"penetration_limit");
  plVar2 = (longlong *)*plVar1;
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar7 = puVar6;
  }
  else {
    puVar7 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_1801bc07d;
    }
    FUN_1800f3090(*param_1,puVar6,param_3 + 0x10);
  }
LAB_1801bc07d:
  FUN_18000f890(local_288);
  puVar6 = (undefined8 *)FUN_180073a70(local_268,local_368,"smoke_threshold");
  plVar2 = (longlong *)*plVar1;
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar7 = puVar6;
  }
  else {
    puVar7 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_1801bc0e6;
    }
    FUN_1800f3090(*param_1,puVar6,param_3 + 0x14);
  }
LAB_1801bc0e6:
  FUN_18000f890(local_268);
  puVar6 = (undefined8 *)FUN_180073a70(local_248,local_368,"flash_threshold");
  plVar2 = (longlong *)*plVar1;
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar7 = puVar6;
  }
  else {
    puVar7 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_1801bc14f;
    }
    FUN_1800f3090(*param_1,puVar6,param_3 + 0x18);
  }
LAB_1801bc14f:
  FUN_18000f890(local_248);
  puVar6 = (undefined8 *)FUN_180073a70(local_228,local_368,"hitboxes");
  plVar2 = (longlong *)*plVar1;
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar7 = puVar6;
  }
  else {
    puVar7 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_1801bc1bb;
    }
    FUN_180152490(*param_1,puVar6,param_3 + 0x1c);
  }
LAB_1801bc1bb:
  FUN_18000f890(local_228);
  uVar5 = FUN_180073a70(local_388,local_368,"prefer_center");
  FUN_180187420(param_1,uVar5,param_3 + 0x21);
  FUN_18000f890(local_388);
  uVar5 = FUN_180073a70(local_388,local_368,"field_of_view");
  FUN_180187500(param_1,uVar5,param_3 + 0x24);
  FUN_18000f890(local_388);
  puVar6 = (undefined8 *)FUN_180073a70(local_208,local_368,"smoothing");
  plVar2 = (longlong *)*plVar1;
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar7 = puVar6;
  }
  else {
    puVar7 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_1801bc288;
    }
    FUN_1800f3090(*param_1,puVar6,param_3 + 0x28);
  }
LAB_1801bc288:
  FUN_18000f890(local_208);
  uVar5 = FUN_180073a70(local_388,local_368,"first_bullet_delay");
  FUN_180187420(param_1,uVar5,param_3 + 0x2c);
  FUN_18000f890(local_388);
  puVar6 = (undefined8 *)FUN_180073a70(local_1e8,local_368,"curve_factor");
  plVar2 = (longlong *)*plVar1;
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar7 = puVar6;
  }
  else {
    puVar7 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_1801bc326;
    }
    FUN_1800f3090(*param_1,puVar6,param_3 + 0x30);
  }
LAB_1801bc326:
  FUN_18000f890(local_1e8);
  puVar6 = (undefined8 *)FUN_180073a70(local_1c8,local_368,"easing_out");
  plVar2 = (longlong *)*plVar1;
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar7 = puVar6;
  }
  else {
    puVar7 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_1801bc395;
    }
    FUN_1800f3090(*param_1,puVar6,param_3 + 0x34);
  }
LAB_1801bc395:
  FUN_18000f890(local_1c8);
  puVar6 = (undefined8 *)FUN_180073a70(local_1a8,local_368,"reaction_time");
  plVar2 = (longlong *)*plVar1;
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar7 = puVar6;
  }
  else {
    puVar7 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_1801bc404;
    }
    FUN_1800f3090(*param_1,puVar6,param_3 + 0x38);
  }
LAB_1801bc404:
  FUN_18000f890(local_1a8);
  puVar6 = (undefined8 *)FUN_180073a70(local_188,local_368,"target_switch_delay");
  plVar2 = (longlong *)*plVar1;
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar7 = puVar6;
  }
  else {
    puVar7 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_1801bc473;
    }
    FUN_1800f3090(*param_1,puVar6,param_3 + 0x3c);
  }
LAB_1801bc473:
  FUN_18000f890(local_188);
  puVar6 = (undefined8 *)FUN_180073a70(local_168,local_368,"min_damage");
  plVar2 = (longlong *)*plVar1;
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar7 = puVar6;
  }
  else {
    puVar7 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_1801bc4e2;
    }
    FUN_1800f3090(*param_1,puVar6,param_3 + 0x40);
  }
LAB_1801bc4e2:
  FUN_18000f890(local_168);
  uVar5 = FUN_180073a70(local_388,local_368,"recoil_control");
  FUN_180187420(param_1,uVar5,param_3 + 0x44);
  FUN_18000f890(local_388);
  uVar5 = FUN_180073a70(local_388,local_368,"recoil.");
  FUN_1801bcc60(param_1,uVar5,param_3 + 0x48);
  FUN_18000f890(local_388);
  uVar5 = FUN_180073a70(local_388,local_368,"quick_scope");
  FUN_180187420(param_1,uVar5,param_3 + 0x5c);
  FUN_18000f890(local_388);
  uVar5 = FUN_180073a70(local_388,local_368,"automatic_unzoom");
  FUN_180187420(param_1,uVar5,param_3 + 0x5d);
  FUN_18000f890(local_388);
  uVar5 = FUN_180073a70(local_388,local_368,"quick_stop");
  FUN_180187420(param_1,uVar5,param_3 + 0x5e);
  FUN_18000f890(local_388);
  uVar5 = FUN_180073a70(local_388,local_368,"full_stop");
  FUN_180187420(param_1,uVar5,param_3 + 0x5f);
  FUN_18000f890(local_388);
  puVar6 = (undefined8 *)FUN_180073a70(local_148,local_368,"quick_stop_reaction_time");
  plVar2 = (longlong *)*plVar1;
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar7 = puVar6;
  }
  else {
    puVar7 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_1801bc66d;
    }
    FUN_1800f3090(*param_1,puVar6,param_3 + 0x60);
  }
LAB_1801bc66d:
  FUN_18000f890(local_148);
  FUN_18000f890(local_368);
  FUN_180073a70(local_388,param_2,"triggerbot.");
  uVar5 = FUN_180073a70(local_328,local_388,"enabled");
  FUN_180187420(param_1,uVar5,param_4);
  FUN_18000f890(local_328);
  puVar6 = (undefined8 *)FUN_180073a70(local_328,local_388,"conditions");
  plVar2 = (longlong *)*plVar1;
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar7 = puVar6;
  }
  else {
    puVar7 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_1801bc725;
    }
    FUN_180152490(*param_1,puVar6,param_4 + 1);
  }
LAB_1801bc725:
  FUN_18000f890(local_328);
  puVar6 = (undefined8 *)FUN_180073a70(local_128,local_388,"penetration_limit");
  plVar2 = (longlong *)*plVar1;
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar7 = puVar6;
  }
  else {
    puVar7 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_1801bc791;
    }
    FUN_1800f3090(*param_1,puVar6,param_4 + 8);
  }
LAB_1801bc791:
  FUN_18000f890(local_128);
  puVar6 = (undefined8 *)FUN_180073a70(local_108,local_388,"smoke_threshold");
  plVar2 = (longlong *)*plVar1;
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar7 = puVar6;
  }
  else {
    puVar7 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_1801bc800;
    }
    FUN_1800f3090(*param_1,puVar6,param_4 + 0xc);
  }
LAB_1801bc800:
  FUN_18000f890(local_108);
  puVar6 = (undefined8 *)FUN_180073a70(local_e8,local_388,"flash_threshold");
  plVar2 = (longlong *)*plVar1;
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar7 = puVar6;
  }
  else {
    puVar7 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_1801bc86f;
    }
    FUN_1800f3090(*param_1,puVar6,param_4 + 0x10);
  }
LAB_1801bc86f:
  FUN_18000f890(local_e8);
  puVar6 = (undefined8 *)FUN_180073a70(local_c8,local_388,"hitboxes");
  plVar2 = (longlong *)*plVar1;
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar7 = puVar6;
  }
  else {
    puVar7 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_1801bc8de;
    }
    FUN_180152490(*param_1,puVar6,param_4 + 0x14);
  }
LAB_1801bc8de:
  FUN_18000f890(local_c8);
  uVar5 = FUN_180073a70(local_308,local_388,"force_center");
  FUN_180187420(param_1,uVar5,param_4 + 0x19);
  FUN_18000f890(local_308);
  puVar6 = (undefined8 *)FUN_180073a70(local_308,local_388,"hit_chance");
  plVar2 = (longlong *)*plVar1;
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar7 = puVar6;
  }
  else {
    puVar7 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_1801bc977;
    }
    FUN_1800f3090(*param_1,puVar6,param_4 + 0x1c);
  }
LAB_1801bc977:
  FUN_18000f890(local_308);
  uVar5 = FUN_180073a70(local_2e8,local_388,"ignore_spread");
  FUN_180187420(param_1,uVar5,param_4 + 0x20);
  FUN_18000f890(local_2e8);
  puVar6 = (undefined8 *)FUN_180073a70(local_2e8,local_388,"legitimacy_threshold");
  plVar2 = (longlong *)*plVar1;
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar7 = puVar6;
  }
  else {
    puVar7 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_1801bca0d;
    }
    FUN_1800f3090(*param_1,puVar6,param_4 + 0x24);
  }
LAB_1801bca0d:
  FUN_18000f890(local_2e8);
  puVar6 = (undefined8 *)FUN_180073a70(local_a8,local_388,"min_damage");
  plVar2 = (longlong *)*plVar1;
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar7 = puVar6;
  }
  else {
    puVar7 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_1801bca79;
    }
    FUN_1800f3090(*param_1,puVar6,param_4 + 0x28);
  }
LAB_1801bca79:
  FUN_18000f890(local_a8);
  puVar6 = (undefined8 *)FUN_180073a70(local_88,local_388,"reaction_time");
  plVar2 = (longlong *)*plVar1;
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar7 = puVar6;
  }
  else {
    puVar7 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_1801bcae8;
    }
    FUN_1800f3090(*param_1,puVar6,param_4 + 0x2c);
  }
LAB_1801bcae8:
  FUN_18000f890(local_88);
  puVar6 = (undefined8 *)FUN_180073a70(local_68,local_388,"capture_delay");
  plVar2 = (longlong *)*plVar1;
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar7 = puVar6;
  }
  else {
    puVar7 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_1801bcb57;
    }
    FUN_1800f3090(*param_1,puVar6,param_4 + 0x30);
  }
LAB_1801bcb57:
  FUN_18000f890(local_68);
  puVar6 = (undefined8 *)FUN_180073a70(local_348,local_388,"burst_time");
  plVar2 = (longlong *)*plVar1;
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar7 = puVar6;
  }
  else {
    puVar7 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_1801bcbc4;
    }
    FUN_1800f3090(*param_1,puVar6,param_4 + 0x34);
  }
LAB_1801bcbc4:
  FUN_18000f890(local_348);
  uVar5 = FUN_180073a70(local_348,local_388,"quick_scope");
  FUN_180187420(param_1,uVar5,param_4 + 0x38);
  FUN_18000f890(local_348);
  uVar5 = FUN_180073a70(local_348,local_388,"automatic_unzoom");
  FUN_180187420(param_1,uVar5,param_4 + 0x39);
  FUN_18000f890(local_348);
  FUN_18000f890(local_388);
  return;
}



/* ===== 1801bcc60 FUN_1801bcc60 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801bcc60(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  size_t sVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [32];
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  undefined1 local_58 [32];
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStack_d8;
  puVar5 = (undefined8 *)FUN_180073a70(local_98,param_2,"start_bullet");
  plVar1 = param_1 + 1;
  plVar2 = (longlong *)*plVar1;
  sVar3 = puVar5[2];
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar7 = puVar5;
  }
  else {
    puVar7 = (undefined8 *)*puVar5;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_1801bcce8;
    }
    FUN_1800f3090(*param_1,puVar5,param_3);
  }
LAB_1801bcce8:
  FUN_18000f890(local_98);
  puVar5 = (undefined8 *)FUN_180073a70(local_78,param_2,"vertical");
  plVar2 = (longlong *)*plVar1;
  sVar3 = puVar5[2];
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar7 = puVar5;
  }
  else {
    puVar7 = (undefined8 *)*puVar5;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_1801bcd51;
    }
    FUN_1800f3090(*param_1,puVar5,param_3 + 4);
  }
LAB_1801bcd51:
  FUN_18000f890(local_78);
  puVar5 = (undefined8 *)FUN_180073a70(local_58,param_2,"horizontal");
  plVar2 = (longlong *)*plVar1;
  sVar3 = puVar5[2];
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar7 = puVar5;
  }
  else {
    puVar7 = (undefined8 *)*puVar5;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_1801bcdbd;
    }
    FUN_1800f3090(*param_1,puVar5,param_3 + 8);
  }
LAB_1801bcdbd:
  FUN_18000f890(local_58);
  puVar5 = (undefined8 *)FUN_180073a70(local_b8,param_2,"dampening");
  plVar2 = (longlong *)*plVar1;
  sVar3 = puVar5[2];
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar7 = puVar5;
  }
  else {
    puVar7 = (undefined8 *)*puVar5;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_1801bce29;
    }
    FUN_1800f3090(*param_1,puVar5,param_3 + 0xc);
  }
LAB_1801bce29:
  FUN_18000f890(local_b8);
  uVar6 = FUN_180073a70(local_b8,param_2,"crosshair_recovery");
  FUN_180187420(param_1,uVar6,param_3 + 0x10);
  FUN_18000f890(local_b8);
  return;
}



/* ===== 1801bce80 FUN_1801bce80 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801bce80(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  size_t sVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [32];
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  undefined1 local_58 [32];
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStack_d8;
  uVar5 = FUN_180073a70(local_98,param_2,".enabled");
  FUN_180187420(param_1,uVar5,param_3);
  FUN_18000f890(local_98);
  puVar6 = (undefined8 *)FUN_180073a70(local_98,param_2,".color");
  plVar1 = param_1 + 1;
  plVar2 = (longlong *)*plVar1;
  sVar3 = puVar6[2];
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar7 = puVar6;
  }
  else {
    puVar7 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_1801bcf35;
    }
    FUN_18019e140(*param_1,puVar6,param_3 + 4);
  }
LAB_1801bcf35:
  FUN_18000f890(local_98);
  puVar6 = (undefined8 *)FUN_180073a70(local_78,param_2,".items");
  plVar2 = (longlong *)*plVar1;
  sVar3 = puVar6[2];
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar7 = puVar6;
  }
  else {
    puVar7 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_1801bcf9e;
    }
    FUN_1801c37b0(*param_1,puVar6,param_3 + 0x14);
  }
LAB_1801bcf9e:
  FUN_18000f890(local_78);
  uVar5 = FUN_180073a70(local_b8,param_2,".icon_inverted");
  FUN_180187420(param_1,uVar5,param_3 + 0x1c);
  FUN_18000f890(local_b8);
  uVar5 = FUN_180073a70(local_b8,param_2,".bar_background");
  FUN_180187420(param_1,uVar5,param_3 + 0x1d);
  FUN_18000f890(local_b8);
  uVar5 = FUN_180073a70(local_b8,param_2,".bar_shadow");
  FUN_180187420(param_1,uVar5,param_3 + 0x1e);
  FUN_18000f890(local_b8);
  puVar6 = (undefined8 *)FUN_180073a70(local_b8,param_2,".bar_shadow_color");
  plVar2 = (longlong *)*plVar1;
  sVar3 = puVar6[2];
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar7 = puVar6;
  }
  else {
    puVar7 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_1801bd08e;
    }
    FUN_18019e140(*param_1,puVar6,param_3 + 0x20);
  }
LAB_1801bd08e:
  FUN_18000f890(local_b8);
  puVar6 = (undefined8 *)FUN_180073a70(local_58,param_2,".bar_format");
  plVar2 = (longlong *)*plVar1;
  sVar3 = puVar6[2];
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar7 = puVar6;
  }
  else {
    puVar7 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_1801bd0fa;
    }
    FUN_1800f3090(*param_1,puVar6,param_3 + 0x30);
  }
LAB_1801bd0fa:
  FUN_18000f890(local_58);
  return;
}



/* ===== 1801bd130 FUN_1801bd130 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801bd130(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  size_t sVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [32];
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  undefined1 local_58 [32];
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStack_d8;
  puVar5 = (undefined8 *)FUN_180073a70(local_98,param_2,".fade_offset");
  plVar1 = param_1 + 1;
  plVar2 = (longlong *)*plVar1;
  sVar3 = puVar5[2];
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar7 = puVar5;
  }
  else {
    puVar7 = (undefined8 *)*puVar5;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_1801bd1b8;
    }
    FUN_1800f3090(*param_1,puVar5,param_3);
  }
LAB_1801bd1b8:
  FUN_18000f890(local_98);
  puVar5 = (undefined8 *)FUN_180073a70(local_78,param_2,".gradient_opacity");
  plVar2 = (longlong *)*plVar1;
  sVar3 = puVar5[2];
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar7 = puVar5;
  }
  else {
    puVar7 = (undefined8 *)*puVar5;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_1801bd221;
    }
    FUN_1800f3090(*param_1,puVar5,param_3 + 4);
  }
LAB_1801bd221:
  FUN_18000f890(local_78);
  puVar5 = (undefined8 *)FUN_180073a70(local_58,param_2,".outline_opacity");
  plVar2 = (longlong *)*plVar1;
  sVar3 = puVar5[2];
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar7 = puVar5;
  }
  else {
    puVar7 = (undefined8 *)*puVar5;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_1801bd28d;
    }
    FUN_1800f3090(*param_1,puVar5,param_3 + 8);
  }
LAB_1801bd28d:
  FUN_18000f890(local_58);
  puVar5 = (undefined8 *)FUN_180073a70(local_b8,param_2,".glow_opacity");
  plVar2 = (longlong *)*plVar1;
  sVar3 = puVar5[2];
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar7 = puVar5;
  }
  else {
    puVar7 = (undefined8 *)*puVar5;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_1801bd2f9;
    }
    FUN_1800f3090(*param_1,puVar5,param_3 + 0xc);
  }
LAB_1801bd2f9:
  FUN_18000f890(local_b8);
  uVar6 = FUN_180073a70(local_b8,param_2,".glow");
  FUN_180187500(param_1,uVar6,param_3 + 0x10);
  FUN_18000f890(local_b8);
  return;
}



/* ===== 1801bd350 FUN_1801bd350 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801bd350(undefined8 param_1,undefined8 param_2,char *param_3)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  size_t sVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  char *pcVar7;
  ulonglong uVar8;
  char *_Str;
  undefined1 auStack_108 [32];
  undefined1 local_e8 [32];
  undefined1 local_c8 [32];
  undefined1 local_a8 [32];
  undefined1 local_88 [32];
  undefined1 local_68 [32];
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_108;
  FUN_180073a70(local_c8,param_2,"ambience.");
  uVar3 = FUN_180073a70(local_e8,local_c8,"nightmode");
  FUN_1800f2cb0(param_1,uVar3);
  _Str = "false";
  pcVar7 = "false";
  if (*param_3 != '\0') {
    pcVar7 = "true";
  }
  sVar4 = strlen(pcVar7);
  FUN_1800134a0(param_1,pcVar7,sVar4);
  FUN_18000f890(local_e8);
  uVar3 = FUN_180073a70(local_e8,local_c8,"colorize_props");
  FUN_1800f2cb0(param_1,uVar3);
  pcVar7 = "false";
  if (param_3[0x18] != '\0') {
    pcVar7 = "true";
  }
  sVar4 = strlen(pcVar7);
  FUN_1800134a0(param_1,pcVar7,sVar4);
  FUN_18000f890(local_e8);
  uVar3 = FUN_180073a70(local_e8,local_c8,"fullbright");
  FUN_1800f2cb0(param_1,uVar3);
  pcVar7 = "false";
  if (param_3[0x2c] != '\0') {
    pcVar7 = "true";
  }
  sVar4 = strlen(pcVar7);
  FUN_1800134a0(param_1,pcVar7,sVar4);
  FUN_18000f890(local_e8);
  uVar3 = FUN_180073a70(local_e8,local_c8,"exposure");
  FUN_1800f2cb0(param_1,uVar3);
  pcVar7 = "false";
  if (param_3[0x40] != '\0') {
    pcVar7 = "true";
  }
  sVar4 = strlen(pcVar7);
  FUN_1800134a0(param_1,pcVar7,sVar4);
  FUN_18000f890(local_e8);
  uVar3 = FUN_180073a70(local_e8,local_c8,"sunlight");
  FUN_1800f2cb0(param_1,uVar3);
  pcVar7 = "false";
  if (param_3[0x5c] != '\0') {
    pcVar7 = "true";
  }
  sVar4 = strlen(pcVar7);
  FUN_1800134a0(param_1,pcVar7,sVar4);
  FUN_18000f890(local_e8);
  uVar3 = FUN_180073a70(local_e8,local_c8,"sun_override_rotation");
  FUN_1800f2cb0(param_1,uVar3);
  pcVar7 = "false";
  if (param_3[0x84] != '\0') {
    pcVar7 = "true";
  }
  sVar4 = strlen(pcVar7);
  FUN_1800134a0(param_1,pcVar7,sVar4);
  FUN_18000f890(local_e8);
  uVar3 = FUN_180073a70(local_e8,local_c8,&DAT_1806f8584);
  FUN_1800f2cb0(param_1,uVar3);
  pcVar7 = "false";
  if (param_3[0x94] != '\0') {
    pcVar7 = "true";
  }
  sVar4 = strlen(pcVar7);
  FUN_1800134a0(param_1,pcVar7,sVar4);
  FUN_18000f890(local_e8);
  uVar3 = FUN_180073a70(local_e8,local_c8,&DAT_1806f8588);
  FUN_1800f2cb0(param_1,uVar3);
  pcVar7 = "false";
  if (param_3[0x18c] != '\0') {
    pcVar7 = "true";
  }
  sVar4 = strlen(pcVar7);
  FUN_1800134a0(param_1,pcVar7,sVar4);
  FUN_18000f890(local_e8);
  uVar3 = FUN_180073a70(local_e8,local_c8,"fog_override_skybox");
  FUN_1800f2cb0(param_1,uVar3);
  pcVar7 = "false";
  if (param_3[0x1a8] != '\0') {
    pcVar7 = "true";
  }
  sVar4 = strlen(pcVar7);
  FUN_1800134a0(param_1,pcVar7,sVar4);
  FUN_18000f890(local_e8);
  uVar3 = FUN_180073a70(local_e8,local_c8,"fog_override_height");
  FUN_1800f2cb0(param_1,uVar3);
  pcVar7 = "false";
  if (param_3[0x1a9] != '\0') {
    pcVar7 = "true";
  }
  sVar4 = strlen(pcVar7);
  FUN_1800134a0(param_1,pcVar7,sVar4);
  FUN_18000f890(local_e8);
  uVar3 = FUN_180073a70(local_e8,local_c8,"bloom");
  FUN_1800f2cb0(param_1,uVar3);
  pcVar7 = "false";
  if (param_3[0x1b8] != '\0') {
    pcVar7 = "true";
  }
  sVar4 = strlen(pcVar7);
  FUN_1800134a0(param_1,pcVar7,sVar4);
  FUN_18000f890(local_e8);
  uVar3 = FUN_180073a70(local_e8,local_c8,"vignette");
  FUN_1800f2cb0(param_1,uVar3);
  pcVar7 = "false";
  if (param_3[0x234] != '\0') {
    pcVar7 = "true";
  }
  sVar4 = strlen(pcVar7);
  FUN_1800134a0(param_1,pcVar7,sVar4);
  FUN_18000f890(local_e8);
  uVar3 = FUN_180073a70(local_e8,local_c8,"contrast");
  FUN_1800f2cb0(param_1,uVar3);
  pcVar7 = "false";
  if (param_3[600] != '\0') {
    pcVar7 = "true";
  }
  sVar4 = strlen(pcVar7);
  FUN_1800134a0(param_1,pcVar7,sVar4);
  FUN_18000f890(local_e8);
  uVar3 = FUN_180073a70(local_e8,local_c8,"color_correction");
  FUN_1800f2cb0(param_1,uVar3);
  pcVar7 = "false";
  if (param_3[0x270] != '\0') {
    pcVar7 = "true";
  }
  sVar4 = strlen(pcVar7);
  FUN_1800134a0(param_1,pcVar7,sVar4);
  FUN_18000f890(local_e8);
  uVar3 = FUN_180073a70(local_e8,local_c8,"cc_grayscale");
  FUN_1800f2cb0(param_1,uVar3);
  pcVar7 = "false";
  if (param_3[0x294] != '\0') {
    pcVar7 = "true";
  }
  sVar4 = strlen(pcVar7);
  FUN_1800134a0(param_1,pcVar7,sVar4);
  FUN_18000f890(local_e8);
  uVar3 = FUN_180073a70(local_e8,local_c8,&DAT_1806f85f0);
  FUN_1800f2cb0(param_1,uVar3);
  pcVar7 = "false";
  if (param_3[0x295] != '\0') {
    pcVar7 = "true";
  }
  sVar4 = strlen(pcVar7);
  FUN_1800134a0(param_1,pcVar7,sVar4);
  FUN_18000f890(local_e8);
  uVar3 = FUN_180073a70(local_e8,local_c8,&DAT_1806f85cc);
  FUN_1800f2cb0(param_1,uVar3);
  pcVar7 = "false";
  if (param_3[0x2ac] != '\0') {
    pcVar7 = "true";
  }
  sVar4 = strlen(pcVar7);
  FUN_1800134a0(param_1,pcVar7,sVar4);
  FUN_18000f890(local_e8);
  uVar3 = FUN_180073a70(local_e8,local_c8,"wetness");
  FUN_1800f2cb0(param_1,uVar3);
  pcVar7 = "false";
  if (param_3[0x2c4] != '\0') {
    pcVar7 = "true";
  }
  sVar4 = strlen(pcVar7);
  FUN_1800134a0(param_1,pcVar7,sVar4);
  FUN_18000f890(local_e8);
  uVar3 = FUN_180073a70(local_e8,local_c8,"wetness_ignore_sky");
  FUN_1800f2cb0(param_1,uVar3);
  pcVar7 = "false";
  if (param_3[0x2d4] != '\0') {
    pcVar7 = "true";
  }
  sVar4 = strlen(pcVar7);
  FUN_1800134a0(param_1,pcVar7,sVar4);
  FUN_18000f890(local_e8);
  uVar3 = FUN_180073a70(local_e8,local_c8,"remove_fog");
  FUN_1800f2cb0(param_1,uVar3);
  pcVar7 = "false";
  if (param_3[0x364] != '\0') {
    pcVar7 = "true";
  }
  sVar4 = strlen(pcVar7);
  FUN_1800134a0(param_1,pcVar7,sVar4);
  FUN_18000f890(local_e8);
  uVar3 = FUN_180073a70(local_e8,local_c8,"remove_sunlight");
  FUN_1800f2cb0(param_1,uVar3);
  pcVar7 = "false";
  if (param_3[0x365] != '\0') {
    pcVar7 = "true";
  }
  sVar4 = strlen(pcVar7);
  FUN_1800134a0(param_1,pcVar7,sVar4);
  FUN_18000f890(local_e8);
  uVar3 = FUN_180073a70(local_e8,local_c8,"remove_viewmodel_sunlight");
  FUN_1800f2cb0(param_1,uVar3);
  pcVar7 = "false";
  if (param_3[0x366] != '\0') {
    pcVar7 = "true";
  }
  sVar4 = strlen(pcVar7);
  FUN_1800134a0(param_1,pcVar7,sVar4);
  FUN_18000f890(local_e8);
  uVar3 = FUN_180073a70(local_e8,local_c8,"remove_barnlights");
  FUN_1800f2cb0(param_1,uVar3);
  pcVar7 = "false";
  if (param_3[0x367] != '\0') {
    pcVar7 = "true";
  }
  sVar4 = strlen(pcVar7);
  FUN_1800134a0(param_1,pcVar7,sVar4);
  FUN_18000f890(local_e8);
  uVar3 = FUN_180073a70(local_e8,local_c8,"remove_baked_shadows");
  FUN_1800f2cb0(param_1,uVar3);
  pcVar7 = "false";
  if (param_3[0x368] != '\0') {
    pcVar7 = "true";
  }
  sVar4 = strlen(pcVar7);
  FUN_1800134a0(param_1,pcVar7,sVar4);
  FUN_18000f890(local_e8);
  uVar3 = FUN_180073a70(local_e8,local_c8,"remove_dynamic_shadows");
  FUN_1800f2cb0(param_1,uVar3);
  pcVar7 = "false";
  if (param_3[0x369] != '\0') {
    pcVar7 = "true";
  }
  sVar4 = strlen(pcVar7);
  FUN_1800134a0(param_1,pcVar7,sVar4);
  FUN_18000f890(local_e8);
  uVar3 = FUN_180073a70(local_e8,local_c8,"remove_post_processing");
  FUN_1800f2cb0(param_1,uVar3);
  pcVar7 = "false";
  if (param_3[0x36a] != '\0') {
    pcVar7 = "true";
  }
  sVar4 = strlen(pcVar7);
  FUN_1800134a0(param_1,pcVar7,sVar4);
  FUN_18000f890(local_e8);
  uVar3 = FUN_180073a70(local_e8,local_c8,"remove_skybox_2d");
  FUN_1800f2cb0(param_1,uVar3);
  pcVar7 = "false";
  if (param_3[0x36b] != '\0') {
    pcVar7 = "true";
  }
  sVar4 = strlen(pcVar7);
  FUN_1800134a0(param_1,pcVar7,sVar4);
  FUN_18000f890(local_e8);
  uVar3 = FUN_180073a70(local_e8,local_c8,"remove_skybox_3d");
  FUN_1800f2cb0(param_1,uVar3);
  pcVar7 = "false";
  if (param_3[0x36c] != '\0') {
    pcVar7 = "true";
  }
  sVar4 = strlen(pcVar7);
  FUN_1800134a0(param_1,pcVar7,sVar4);
  FUN_18000f890(local_e8);
  uVar3 = FUN_180073a70(local_e8,local_c8,"remove_cable_particles");
  FUN_1800f2cb0(param_1,uVar3);
  pcVar7 = "false";
  if (param_3[0x36d] != '\0') {
    pcVar7 = "true";
  }
  sVar4 = strlen(pcVar7);
  FUN_1800134a0(param_1,pcVar7,sVar4);
  FUN_18000f890(local_e8);
  uVar3 = FUN_180073a70(local_e8,local_c8,"nightmode_color");
  FUN_1801944c0(param_1,uVar3,param_3 + 4);
  FUN_18000f890(local_e8);
  uVar3 = FUN_180073a70(local_e8,local_c8,"overlay_transparency");
  FUN_1800f2db0(param_1,uVar3,param_3 + 0x14);
  FUN_18000f890(local_e8);
  uVar3 = FUN_180073a70(local_e8,local_c8,"props_color");
  FUN_1801944c0(param_1,uVar3,param_3 + 0x1c);
  FUN_18000f890(local_e8);
  uVar3 = FUN_180073a70(local_e8,local_c8,"fullbright_color");
  FUN_1801944c0(param_1,uVar3,param_3 + 0x30);
  FUN_18000f890(local_e8);
  uVar3 = FUN_180073a70(local_e8,local_c8,"adaptation");
  FUN_1800f2db0(param_1,uVar3,param_3 + 0x44);
  FUN_18000f890(local_e8);
  uVar3 = FUN_180073a70(local_e8,local_c8,"compensation");
  FUN_1800f2e20(param_1,uVar3,param_3 + 0x48);
  FUN_18000f890(local_e8);
  uVar3 = FUN_180073a70(local_e8,local_c8,"exposure_min");
  FUN_1800f2e20(param_1,uVar3,param_3 + 0x4c);
  FUN_18000f890(local_e8);
  uVar3 = FUN_180073a70(local_e8,local_c8,"exposure_max");
  FUN_1800f2e20(param_1,uVar3,param_3 + 0x50);
  FUN_18000f890(local_e8);
  uVar3 = FUN_180073a70(local_e8,local_c8,"adaptation_speed");
  FUN_1800f2db0(param_1,uVar3,param_3 + 0x54);
  FUN_18000f890(local_e8);
  uVar3 = FUN_180073a70(local_e8,local_c8,"fixed_exposure");
  FUN_1800f2db0(param_1,uVar3,param_3 + 0x58);
  FUN_18000f890(local_e8);
  uVar3 = FUN_180073a70(local_e8,local_c8,"sun_illumination");
  FUN_1801944c0(param_1,uVar3,param_3 + 0x60);
  FUN_18000f890(local_e8);
  uVar3 = FUN_180073a70(local_e8,local_c8,"sun_reflection");
  FUN_1801944c0(param_1,uVar3,param_3 + 0x70);
  FUN_18000f890(local_e8);
  uVar3 = FUN_180073a70(local_e8,local_c8,"sun_method");
  FUN_1800f2db0(param_1,uVar3,param_3 + 0x80);
  FUN_18000f890(local_e8);
  uVar3 = FUN_180073a70(local_e8,local_c8,"sun_pitch");
  FUN_1800f2db0(param_1,uVar3,param_3 + 0x88);
  FUN_18000f890(local_e8);
  uVar3 = FUN_180073a70(local_e8,local_c8,"sun_yaw");
  FUN_1800f2db0(param_1,uVar3,param_3 + 0x8c);
  FUN_18000f890(local_e8);
  uVar3 = FUN_180073a70(local_e8,local_c8,"volumetric_brightness");
  FUN_1800f2db0(param_1,uVar3,param_3 + 0x90);
  FUN_18000f890(local_e8);
  uVar3 = FUN_180073a70(local_e8,local_c8,"sky_color");
  FUN_1801944c0(param_1,uVar3,param_3 + 0x98);
  FUN_18000f890(local_e8);
  uVar3 = FUN_180073a70(local_e8,local_c8,"clouds_color");
  FUN_1801944c0(param_1,uVar3,param_3 + 0xa8);
  FUN_18000f890(local_e8);
  uVar3 = FUN_180073a70(local_e8,local_c8,"sun_color");
  FUN_1801944c0(param_1,uVar3,param_3 + 0xb8);
  FUN_18000f890(local_e8);
  uVar3 = FUN_180073a70(local_e8,local_c8,"skybox");
  FUN_1800f2db0(param_1,uVar3,param_3 + 200);
  FUN_18000f890(local_e8);
  uVar3 = FUN_180073a70(local_e8,local_c8,"skybox_custom");
  FUN_1801c3440(param_1,uVar3,param_3 + 0xcc);
  FUN_18000f890(local_e8);
  uVar3 = FUN_180073a70(local_e8,local_c8,"fog_color");
  FUN_1801944c0(param_1,uVar3,param_3 + 400);
  FUN_18000f890(local_e8);
  uVar3 = FUN_180073a70(local_e8,local_c8,"fog_distance");
  FUN_1800f2db0(param_1,uVar3,param_3 + 0x1a0);
  FUN_18000f890(local_e8);
  uVar3 = FUN_180073a70(local_e8,local_c8,"fog_exponent");
  FUN_1800f2e20(param_1,uVar3,param_3 + 0x1a4);
  FUN_18000f890(local_e8);
  uVar3 = FUN_180073a70(local_e8,local_c8,"fog_height_start");
  FUN_1800f2db0(param_1,uVar3,param_3 + 0x1ac);
  FUN_18000f890(local_e8);
  uVar3 = FUN_180073a70(local_e8,local_c8,"fog_height_end");
  FUN_1800f2db0(param_1,uVar3,param_3 + 0x1b0);
  FUN_18000f890(local_e8);
  uVar3 = FUN_180073a70(local_e8,local_c8,"fog_height_exponent");
  FUN_1800f2e20(param_1,uVar3,param_3 + 0x1b4);
  FUN_18000f890(local_e8);
  uVar3 = FUN_180073a70(local_e8,local_c8,"bloom_strength");
  FUN_1800f2db0(param_1,uVar3,param_3 + 0x1bc);
  FUN_18000f890(local_e8);
  uVar3 = FUN_180073a70(local_e8,local_c8,"bloom_screen_strength");
  FUN_1800f2db0(param_1,uVar3,param_3 + 0x1c0);
  FUN_18000f890(local_e8);
  uVar3 = FUN_180073a70(local_e8,local_c8,"bloom_blur_strength");
  FUN_1800f2db0(param_1,uVar3,param_3 + 0x1c4);
  FUN_18000f890(local_e8);
  uVar3 = FUN_180073a70(local_e8,local_c8,"bloom_threshold");
  FUN_1800f2db0(param_1,uVar3,param_3 + 0x1c8);
  FUN_18000f890(local_e8);
  uVar3 = FUN_180073a70(local_e8,local_c8,"bloom_threshold_width");
  FUN_1800f2db0(param_1,uVar3,param_3 + 0x1cc);
  FUN_18000f890(local_e8);
  uVar3 = FUN_180073a70(local_e8,local_c8,"vignette_color");
  FUN_1801944c0(param_1,uVar3,param_3 + 0x238);
  FUN_18000f890(local_e8);
  uVar3 = FUN_180073a70(local_e8,local_c8,"vignette_strength");
  FUN_1800f2db0(param_1,uVar3,param_3 + 0x248);
  FUN_18000f890(local_e8);
  uVar3 = FUN_180073a70(local_e8,local_c8,"vignette_radius");
  FUN_1800f2db0(param_1,uVar3,param_3 + 0x24c);
  FUN_18000f890(local_e8);
  uVar3 = FUN_180073a70(local_e8,local_c8,"vignette_roundness");
  FUN_1800f2db0(param_1,uVar3,param_3 + 0x250);
  FUN_18000f890(local_e8);
  uVar3 = FUN_180073a70(local_e8,local_c8,"vignette_feather");
  FUN_1800f2db0(param_1,uVar3,param_3 + 0x254);
  FUN_18000f890(local_e8);
  uVar3 = FUN_180073a70(local_e8,local_c8,"contrast_strength");
  FUN_1800f2db0(param_1,uVar3,param_3 + 0x25c);
  FUN_18000f890(local_e8);
  uVar3 = FUN_180073a70(local_e8,local_c8,"contrast_edge");
  FUN_1800f2db0(param_1,uVar3,param_3 + 0x260);
  FUN_18000f890(local_e8);
  uVar3 = FUN_180073a70(local_e8,local_c8,"contrast_vignette_start");
  FUN_1800f2db0(param_1,uVar3,param_3 + 0x264);
  FUN_18000f890(local_e8);
  uVar3 = FUN_180073a70(local_e8,local_c8,"contrast_vignette_end");
  FUN_1800f2db0(param_1,uVar3,param_3 + 0x268);
  FUN_18000f890(local_e8);
  uVar3 = FUN_180073a70(local_e8,local_c8,"contrast_vignette_blur");
  FUN_1800f2db0(param_1,uVar3,param_3 + 0x26c);
  FUN_18000f890(local_e8);
  uVar3 = FUN_180073a70(local_e8,local_c8,"tone_curve");
  FUN_1800f2db0(param_1,uVar3,param_3 + 0x274);
  FUN_18000f890(local_e8);
  uVar3 = FUN_180073a70(local_e8,local_c8,"cc_contrast");
  FUN_1800f2db0(param_1,uVar3,param_3 + 0x278);
  FUN_18000f890(local_e8);
  uVar3 = FUN_180073a70(local_e8,local_c8,"cc_highlights");
  FUN_1800f2db0(param_1,uVar3,param_3 + 0x27c);
  FUN_18000f890(local_e8);
  uVar3 = FUN_180073a70(local_e8,local_c8,"cc_shadows");
  FUN_1800f2db0(param_1,uVar3,param_3 + 0x280);
  FUN_18000f890(local_e8);
  uVar3 = FUN_180073a70(local_e8,local_c8,"cc_saturation");
  FUN_1800f2db0(param_1,uVar3,param_3 + 0x284);
  FUN_18000f890(local_e8);
  uVar3 = FUN_180073a70(local_e8,local_c8,"cc_vibrance");
  FUN_1800f2db0(param_1,uVar3,param_3 + 0x288);
  FUN_18000f890(local_e8);
  uVar3 = FUN_180073a70(local_e8,local_c8,"cc_temperature");
  FUN_1800f2db0(param_1,uVar3,param_3 + 0x28c);
  FUN_18000f890(local_e8);
  uVar3 = FUN_180073a70(local_e8,local_c8,"cc_tint");
  FUN_1800f2db0(param_1,uVar3,param_3 + 0x290);
  FUN_18000f890(local_e8);
  uVar3 = FUN_180073a70(local_e8,local_c8,"dof_mode");
  FUN_1800f2db0(param_1,uVar3,param_3 + 0x298);
  FUN_18000f890(local_e8);
  uVar3 = FUN_180073a70(local_e8,local_c8,"dof_quality");
  FUN_1800f2db0(param_1,uVar3,param_3 + 0x29c);
  FUN_18000f890(local_e8);
  uVar3 = FUN_180073a70(local_e8,local_c8,"dof_focus_distance");
  FUN_1800f2db0(param_1,uVar3,param_3 + 0x2a0);
  FUN_18000f890(local_e8);
  uVar3 = FUN_180073a70(local_e8,local_c8,"dof_focus_speed");
  FUN_1800f2db0(param_1,uVar3,param_3 + 0x2a4);
  FUN_18000f890(local_e8);
  uVar3 = FUN_180073a70(local_e8,local_c8,"dof_focus_range");
  FUN_1800f2db0(param_1,uVar3,param_3 + 0x2a8);
  FUN_18000f890(local_e8);
  uVar3 = FUN_180073a70(local_e8,local_c8,"wind_direction");
  FUN_1800f2db0(param_1,uVar3,param_3 + 0x2b0);
  FUN_18000f890(local_e8);
  uVar3 = FUN_180073a70(local_e8,local_c8,"wind_strength");
  FUN_1800f2e20(param_1,uVar3,param_3 + 0x2b4);
  FUN_18000f890(local_e8);
  uVar3 = FUN_180073a70(local_e8,local_c8,"wetness_rain");
  FUN_1800f2db0(param_1,uVar3,param_3 + 0x2c8);
  FUN_18000f890(local_e8);
  uVar3 = FUN_180073a70(local_e8,local_c8,"wetness_coverage");
  FUN_1800f2db0(param_1,uVar3,param_3 + 0x2cc);
  FUN_18000f890(local_e8);
  uVar3 = FUN_180073a70(local_e8,local_c8,"wetness_drying");
  FUN_1800f2db0(param_1,uVar3,param_3 + 0x2d0);
  FUN_18000f890(local_e8);
  uVar3 = FUN_180073a70(local_e8,local_c8,"wind_particle_strength");
  FUN_1800f2e20(param_1,uVar3,param_3 + 0x2b8);
  FUN_18000f890(local_e8);
  uVar3 = FUN_180073a70(local_e8,local_c8,"wind_turbulence");
  FUN_1800f2e20(param_1,uVar3,param_3 + 700);
  FUN_18000f890(local_e8);
  uVar3 = FUN_180073a70(local_e8,local_c8,"wind_max_tilt");
  FUN_1800f2e20(param_1,uVar3,param_3 + 0x2c0);
  FUN_18000f890(local_e8);
  uVar3 = FUN_180073a70(local_e8,local_c8,"thunder");
  FUN_1800f2cb0(param_1,uVar3);
  pcVar7 = "false";
  if (param_3[0x2d5] != '\0') {
    pcVar7 = "true";
  }
  sVar4 = strlen(pcVar7);
  FUN_1800134a0(param_1,pcVar7,sVar4);
  FUN_18000f890(local_e8);
  uVar3 = FUN_180073a70(local_e8,local_c8,"thunder_primary");
  FUN_1801944c0(param_1,uVar3,param_3 + 0x2d8);
  FUN_18000f890(local_e8);
  uVar3 = FUN_180073a70(local_e8,local_c8,"thunder_glow");
  FUN_1801944c0(param_1,uVar3,param_3 + 0x2e8);
  FUN_18000f890(local_e8);
  uVar3 = FUN_180073a70(local_e8,local_c8,"thunder_interval");
  FUN_1800f2e20(param_1,uVar3,param_3 + 0x2f8);
  FUN_18000f890(local_e8);
  uVar3 = FUN_180073a70(local_e8,local_c8,"thunder_duration");
  FUN_1800f2e20(param_1,uVar3,param_3 + 0x2fc);
  FUN_18000f890(local_e8);
  uVar3 = FUN_180073a70(local_e8,local_c8,"thunder_sound");
  FUN_1800f2cb0(param_1,uVar3);
  pcVar7 = "false";
  if (param_3[0x300] != '\0') {
    pcVar7 = "true";
  }
  sVar4 = strlen(pcVar7);
  FUN_1800134a0(param_1,pcVar7,sVar4);
  FUN_18000f890(local_e8);
  uVar3 = FUN_180073a70(local_e8,local_c8,"thunder_on_kill");
  FUN_1800f2cb0(param_1,uVar3);
  pcVar7 = "false";
  if (param_3[0x301] != '\0') {
    pcVar7 = "true";
  }
  sVar4 = strlen(pcVar7);
  FUN_1800134a0(param_1,pcVar7,sVar4);
  FUN_18000f890(local_e8);
  uVar3 = FUN_180073a70(local_e8,local_c8,&DAT_1806f8bfc);
  FUN_1800f2cb0(param_1,uVar3);
  pcVar7 = "false";
  if (param_3[0x302] != '\0') {
    pcVar7 = "true";
  }
  sVar4 = strlen(pcVar7);
  FUN_1800134a0(param_1,pcVar7,sVar4);
  FUN_18000f890(local_e8);
  uVar3 = FUN_180073a70(local_e8,local_c8,"rain_primary");
  FUN_1801944c0(param_1,uVar3,param_3 + 0x304);
  FUN_18000f890(local_e8);
  uVar3 = FUN_180073a70(local_e8,local_c8,"rain_glow");
  FUN_1801944c0(param_1,uVar3,param_3 + 0x314);
  FUN_18000f890(local_e8);
  uVar3 = FUN_180073a70(local_e8,local_c8,"rain_speed");
  FUN_1800f2db0(param_1,uVar3,param_3 + 0x324);
  FUN_18000f890(local_e8);
  uVar3 = FUN_180073a70(local_e8,local_c8,"rain_radius");
  FUN_1800f2db0(param_1,uVar3,param_3 + 0x328);
  FUN_18000f890(local_e8);
  uVar3 = FUN_180073a70(local_e8,local_c8,"rain_density");
  FUN_1800f2db0(param_1,uVar3,param_3 + 0x32c);
  FUN_18000f890(local_e8);
  uVar3 = FUN_180073a70(local_e8,local_c8,"rain_center_bias");
  FUN_1800f2db0(param_1,uVar3,param_3 + 0x330);
  FUN_18000f890(local_e8);
  uVar3 = FUN_180073a70(local_e8,local_c8,"rain_sound");
  FUN_1800f2cb0(param_1,uVar3);
  pcVar7 = "false";
  if (param_3[0x334] != '\0') {
    pcVar7 = "true";
  }
  sVar4 = strlen(pcVar7);
  FUN_1800134a0(param_1,pcVar7,sVar4);
  FUN_18000f890(local_e8);
  uVar3 = FUN_180073a70(local_e8,local_c8,&DAT_1806f8c7c);
  FUN_1800f2cb0(param_1,uVar3);
  if (param_3[0x335] != '\0') {
    _Str = "true";
  }
  sVar4 = strlen(_Str);
  FUN_1800134a0(param_1,_Str,sVar4);
  FUN_18000f890(local_e8);
  uVar3 = FUN_180073a70(local_e8,local_c8,"snow_primary");
  FUN_1801944c0(param_1,uVar3,param_3 + 0x338);
  FUN_18000f890(local_e8);
  uVar3 = FUN_180073a70(local_e8,local_c8,"snow_glow");
  FUN_1801944c0(param_1,uVar3,param_3 + 0x348);
  FUN_18000f890(local_e8);
  uVar3 = FUN_180073a70(local_e8,local_c8,"snow_speed");
  FUN_1800f2db0(param_1,uVar3,param_3 + 0x358);
  FUN_18000f890(local_e8);
  uVar3 = FUN_180073a70(local_e8,local_c8,"snow_radius");
  FUN_1800f2db0(param_1,uVar3,param_3 + 0x35c);
  FUN_18000f890(local_e8);
  uVar3 = FUN_180073a70(local_e8,local_c8,"snow_density");
  FUN_1800f2db0(param_1,uVar3,param_3 + 0x360);
  FUN_18000f890(local_e8);
  uVar8 = 0;
  do {
    uVar1 = uVar8 + 1;
    uVar3 = FUN_18004e4f0(local_68,uVar1);
    uVar5 = FUN_180073a70(local_88,local_c8,"bloom_blur_weight");
    uVar3 = FUN_180066820(local_a8,uVar5,uVar3);
    FUN_1800f2cb0(param_1,uVar3);
    puVar6 = (undefined8 *)FUN_18003a390(local_e8,*(undefined4 *)(param_3 + uVar8 * 4 + 0x1d0));
    puVar2 = puVar6 + 2;
    if (0xf < (ulonglong)puVar6[3]) {
      puVar6 = (undefined8 *)*puVar6;
    }
    FUN_1800134a0(param_1,puVar6,*puVar2);
    FUN_18000f890(local_e8);
    FUN_18000f890(local_a8);
    FUN_18000f890(local_88);
    FUN_18000f890(local_68);
    uVar3 = FUN_18004e4f0(local_a8,uVar1);
    uVar5 = FUN_180073a70(local_88,local_c8,"bloom_blur_color");
    uVar3 = FUN_180066820(local_68,uVar5,uVar3);
    FUN_1801944c0(param_1,uVar3,param_3 + uVar8 * 0x10 + 0x1e4);
    FUN_18000f890(local_68);
    FUN_18000f890(local_88);
    FUN_18000f890(local_a8);
    uVar8 = uVar1;
  } while (uVar1 < 5);
  FUN_18000f890(local_c8);
  return;
}



/* ===== 1801bef40 FUN_1801bef40 ===== */

void FUN_1801bef40(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  byte bVar1;
  ulonglong uVar2;
  
  FUN_1800f2cb0();
  FUN_1800134a0(param_1,&DAT_1806dfffc,1);
  uVar2 = 0;
  do {
    bVar1 = *(byte *)(uVar2 + param_3);
    if (bVar1 == 0) break;
    if ((bVar1 == 0x22) || (bVar1 == 0x5c)) {
      FUN_1800690a0(param_1,0x5c);
    }
    if (0x1f < bVar1) {
      FUN_1800690a0(param_1,bVar1);
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0xa0);
  FUN_1800134a0(param_1,&DAT_1806dfffc,1);
  return;
}



/* ===== 1801befd0 FUN_1801befd0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801befd0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined1 auStack_68 [32];
  undefined1 local_48 [32];
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_68;
  FUN_1800f2cb0();
  FUN_1800134a0(param_1,&DAT_1806e05f8,1);
  uVar3 = 0;
  do {
    if (uVar3 != 0) {
      FUN_1800134a0(param_1,&DAT_1806f0594,2);
    }
    puVar2 = (undefined8 *)FUN_1800f2be0(local_48,*(undefined4 *)(param_3 + uVar3 * 4));
    puVar1 = puVar2 + 2;
    if (0xf < (ulonglong)puVar2[3]) {
      puVar2 = (undefined8 *)*puVar2;
    }
    FUN_1800134a0(param_1,puVar2,*puVar1);
    FUN_18000f890(local_48);
    uVar3 = uVar3 + 1;
  } while (uVar3 < 8);
  FUN_1800134a0(param_1,&DAT_1806e9114,1);
  return;
}



/* ===== 1801bf0a0 FUN_1801bf0a0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801bf0a0(undefined8 param_1,undefined8 param_2,char *param_3)

{
  undefined8 uVar1;
  size_t sVar2;
  char *pcVar3;
  char *_Str;
  undefined1 auStack_78 [32];
  undefined1 local_58 [32];
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStack_78;
  uVar1 = FUN_180073a70(local_58,param_2,".enabled");
  FUN_1800f2cb0(param_1,uVar1);
  _Str = "false";
  pcVar3 = "false";
  if (*param_3 != '\0') {
    pcVar3 = "true";
  }
  sVar2 = strlen(pcVar3);
  FUN_1800134a0(param_1,pcVar3,sVar2);
  FUN_18000f890(local_58);
  uVar1 = FUN_180073a70(local_58,param_2,".color");
  FUN_1801944c0(param_1,uVar1,param_3 + 4);
  FUN_18000f890(local_58);
  uVar1 = FUN_180073a70(local_58,param_2,".items");
  FUN_1801c34d0(param_1,uVar1,param_3 + 0x14);
  FUN_18000f890(local_58);
  uVar1 = FUN_180073a70(local_58,param_2,".icon_inverted");
  FUN_1800f2cb0(param_1,uVar1);
  pcVar3 = "false";
  if (param_3[0x1c] != '\0') {
    pcVar3 = "true";
  }
  sVar2 = strlen(pcVar3);
  FUN_1800134a0(param_1,pcVar3,sVar2);
  FUN_18000f890(local_58);
  uVar1 = FUN_180073a70(local_58,param_2,".bar_background");
  FUN_1800f2cb0(param_1,uVar1);
  pcVar3 = "false";
  if (param_3[0x1d] != '\0') {
    pcVar3 = "true";
  }
  sVar2 = strlen(pcVar3);
  FUN_1800134a0(param_1,pcVar3,sVar2);
  FUN_18000f890(local_58);
  uVar1 = FUN_180073a70(local_58,param_2,".bar_shadow");
  FUN_1800f2cb0(param_1,uVar1);
  if (param_3[0x1e] != '\0') {
    _Str = "true";
  }
  sVar2 = strlen(_Str);
  FUN_1800134a0(param_1,_Str,sVar2);
  FUN_18000f890(local_58);
  uVar1 = FUN_180073a70(local_58,param_2,".bar_shadow_color");
  FUN_1801944c0(param_1,uVar1,param_3 + 0x20);
  FUN_18000f890(local_58);
  uVar1 = FUN_180073a70(local_58,param_2,".bar_format");
  FUN_1800f2db0(param_1,uVar1,param_3 + 0x30);
  FUN_18000f890(local_58);
  return;
}



/* ===== 1801bf2e0 FUN_1801bf2e0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801bf2e0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined1 local_48 [32];
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_68;
  uVar1 = FUN_180073a70(local_48,param_2,".fade_offset");
  FUN_1800f2db0(param_1,uVar1,param_3);
  FUN_18000f890(local_48);
  uVar1 = FUN_180073a70(local_48,param_2,".gradient_opacity");
  FUN_1800f2db0(param_1,uVar1,param_3 + 4);
  FUN_18000f890(local_48);
  uVar1 = FUN_180073a70(local_48,param_2,".outline_opacity");
  FUN_1800f2db0(param_1,uVar1,param_3 + 8);
  FUN_18000f890(local_48);
  uVar1 = FUN_180073a70(local_48,param_2,".glow_opacity");
  FUN_1800f2db0(param_1,uVar1,param_3 + 0xc);
  FUN_18000f890(local_48);
  uVar1 = FUN_180073a70(local_48,param_2,".glow");
  FUN_1800f2e20(param_1,uVar1,param_3 + 0x10);
  FUN_18000f890(local_48);
  return;
}



/* ===== 1801bf400 FUN_1801bf400 ===== */

void FUN_1801bf400(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  size_t sVar1;
  ulonglong uVar2;
  char *_Str;
  
  FUN_1800f2cb0();
  FUN_1800134a0(param_1,&DAT_1806e05f8,1);
  uVar2 = 0;
  do {
    if (uVar2 != 0) {
      FUN_1800134a0(param_1,&DAT_1806f0594,2);
    }
    _Str = "false";
    if (*(char *)(uVar2 + param_3) != '\0') {
      _Str = "true";
    }
    sVar1 = strlen(_Str);
    FUN_1800134a0(param_1,_Str,sVar1);
    uVar2 = uVar2 + 1;
  } while (uVar2 < 9);
  FUN_1800134a0(param_1,&DAT_1806e9114,1);
  return;
}



/* ===== 1801bf4a0 FUN_1801bf4a0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801bf4a0(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  ulonglong uVar1;
  double dVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  int *piVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  ulonglong uVar9;
  double dVar10;
  double dVar11;
  undefined1 auStack_108 [32];
  undefined1 local_e8 [32];
  undefined1 local_c8 [32];
  undefined1 local_a8 [32];
  undefined1 local_88 [32];
  ulonglong local_68;
  
  local_68 = DAT_180919500 ^ (ulonglong)auStack_108;
  FUN_180073a70(local_c8,param_2,"ambience.");
  uVar4 = FUN_180073a70(local_e8,local_c8,"nightmode");
  piVar5 = (int *)FUN_1800f2fa0(param_1,uVar4);
  if (piVar5 != (int *)0x0) {
    if (*piVar5 == 1) {
      uVar3 = (undefined1)piVar5[1];
    }
    else if (*piVar5 == 2) {
      if (*(double *)(piVar5 + 2) == 0.0) {
        uVar3 = 0;
      }
      else {
        uVar3 = 1;
      }
    }
    else {
      uVar3 = *param_3;
    }
    *param_3 = uVar3;
  }
  FUN_18000f890(local_e8);
  uVar4 = FUN_180073a70(local_e8,local_c8,"colorize_props");
  piVar5 = (int *)FUN_1800f2fa0(param_1,uVar4);
  if (piVar5 != (int *)0x0) {
    if (*piVar5 == 1) {
      uVar3 = (undefined1)piVar5[1];
    }
    else if (*piVar5 == 2) {
      if (*(double *)(piVar5 + 2) == 0.0) {
        uVar3 = 0;
      }
      else {
        uVar3 = 1;
      }
    }
    else {
      uVar3 = param_3[0x18];
    }
    param_3[0x18] = uVar3;
  }
  FUN_18000f890(local_e8);
  uVar4 = FUN_180073a70(local_e8,local_c8,"fullbright");
  piVar5 = (int *)FUN_1800f2fa0(param_1,uVar4);
  if (piVar5 != (int *)0x0) {
    if (*piVar5 == 1) {
      uVar3 = (undefined1)piVar5[1];
    }
    else if (*piVar5 == 2) {
      if (*(double *)(piVar5 + 2) == 0.0) {
        uVar3 = 0;
      }
      else {
        uVar3 = 1;
      }
    }
    else {
      uVar3 = param_3[0x2c];
    }
    param_3[0x2c] = uVar3;
  }
  FUN_18000f890(local_e8);
  uVar4 = FUN_180073a70(local_e8,local_c8,"exposure");
  piVar5 = (int *)FUN_1800f2fa0(param_1,uVar4);
  if (piVar5 != (int *)0x0) {
    if (*piVar5 == 1) {
      uVar3 = (undefined1)piVar5[1];
    }
    else if (*piVar5 == 2) {
      if (*(double *)(piVar5 + 2) == 0.0) {
        uVar3 = 0;
      }
      else {
        uVar3 = 1;
      }
    }
    else {
      uVar3 = param_3[0x40];
    }
    param_3[0x40] = uVar3;
  }
  FUN_18000f890(local_e8);
  uVar4 = FUN_180073a70(local_e8,local_c8,"sunlight");
  piVar5 = (int *)FUN_1800f2fa0(param_1,uVar4);
  if (piVar5 != (int *)0x0) {
    if (*piVar5 == 1) {
      uVar3 = (undefined1)piVar5[1];
    }
    else if (*piVar5 == 2) {
      if (*(double *)(piVar5 + 2) == 0.0) {
        uVar3 = 0;
      }
      else {
        uVar3 = 1;
      }
    }
    else {
      uVar3 = param_3[0x5c];
    }
    param_3[0x5c] = uVar3;
  }
  FUN_18000f890(local_e8);
  uVar4 = FUN_180073a70(local_e8,local_c8,"sun_override_rotation");
  piVar5 = (int *)FUN_1800f2fa0(param_1,uVar4);
  if (piVar5 != (int *)0x0) {
    if (*piVar5 == 1) {
      uVar3 = (undefined1)piVar5[1];
    }
    else if (*piVar5 == 2) {
      if (*(double *)(piVar5 + 2) == 0.0) {
        uVar3 = 0;
      }
      else {
        uVar3 = 1;
      }
    }
    else {
      uVar3 = param_3[0x84];
    }
    param_3[0x84] = uVar3;
  }
  FUN_18000f890(local_e8);
  uVar4 = FUN_180073a70(local_e8,local_c8,&DAT_1806f8584);
  piVar5 = (int *)FUN_1800f2fa0(param_1,uVar4);
  if (piVar5 != (int *)0x0) {
    if (*piVar5 == 1) {
      uVar3 = (undefined1)piVar5[1];
    }
    else if (*piVar5 == 2) {
      if (*(double *)(piVar5 + 2) == 0.0) {
        uVar3 = 0;
      }
      else {
        uVar3 = 1;
      }
    }
    else {
      uVar3 = param_3[0x94];
    }
    param_3[0x94] = uVar3;
  }
  FUN_18000f890(local_e8);
  uVar4 = FUN_180073a70(local_e8,local_c8,&DAT_1806f8588);
  piVar5 = (int *)FUN_1800f2fa0(param_1,uVar4);
  if (piVar5 != (int *)0x0) {
    if (*piVar5 == 1) {
      uVar3 = (undefined1)piVar5[1];
    }
    else if (*piVar5 == 2) {
      if (*(double *)(piVar5 + 2) == 0.0) {
        uVar3 = 0;
      }
      else {
        uVar3 = 1;
      }
    }
    else {
      uVar3 = param_3[0x18c];
    }
    param_3[0x18c] = uVar3;
  }
  FUN_18000f890(local_e8);
  uVar4 = FUN_180073a70(local_e8,local_c8,"fog_override_skybox");
  piVar5 = (int *)FUN_1800f2fa0(param_1,uVar4);
  if (piVar5 != (int *)0x0) {
    if (*piVar5 == 1) {
      uVar3 = (undefined1)piVar5[1];
    }
    else if (*piVar5 == 2) {
      if (*(double *)(piVar5 + 2) == 0.0) {
        uVar3 = 0;
      }
      else {
        uVar3 = 1;
      }
    }
    else {
      uVar3 = param_3[0x1a8];
    }
    param_3[0x1a8] = uVar3;
  }
  FUN_18000f890(local_e8);
  uVar4 = FUN_180073a70(local_e8,local_c8,"fog_override_height");
  piVar5 = (int *)FUN_1800f2fa0(param_1,uVar4);
  if (piVar5 != (int *)0x0) {
    if (*piVar5 == 1) {
      uVar3 = (undefined1)piVar5[1];
    }
    else if (*piVar5 == 2) {
      if (*(double *)(piVar5 + 2) == 0.0) {
        uVar3 = 0;
      }
      else {
        uVar3 = 1;
      }
    }
    else {
      uVar3 = param_3[0x1a9];
    }
    param_3[0x1a9] = uVar3;
  }
  FUN_18000f890(local_e8);
  uVar4 = FUN_180073a70(local_e8,local_c8,"bloom");
  piVar5 = (int *)FUN_1800f2fa0(param_1,uVar4);
  if (piVar5 != (int *)0x0) {
    if (*piVar5 == 1) {
      uVar3 = (undefined1)piVar5[1];
    }
    else if (*piVar5 == 2) {
      if (*(double *)(piVar5 + 2) == 0.0) {
        uVar3 = 0;
      }
      else {
        uVar3 = 1;
      }
    }
    else {
      uVar3 = param_3[0x1b8];
    }
    param_3[0x1b8] = uVar3;
  }
  FUN_18000f890(local_e8);
  uVar4 = FUN_180073a70(local_e8,local_c8,"vignette");
  piVar5 = (int *)FUN_1800f2fa0(param_1,uVar4);
  if (piVar5 != (int *)0x0) {
    if (*piVar5 == 1) {
      uVar3 = (undefined1)piVar5[1];
    }
    else if (*piVar5 == 2) {
      if (*(double *)(piVar5 + 2) == 0.0) {
        uVar3 = 0;
      }
      else {
        uVar3 = 1;
      }
    }
    else {
      uVar3 = param_3[0x234];
    }
    param_3[0x234] = uVar3;
  }
  FUN_18000f890(local_e8);
  uVar4 = FUN_180073a70(local_e8,local_c8,"contrast");
  piVar5 = (int *)FUN_1800f2fa0(param_1,uVar4);
  if (piVar5 != (int *)0x0) {
    if (*piVar5 == 1) {
      uVar3 = (undefined1)piVar5[1];
    }
    else if (*piVar5 == 2) {
      if (*(double *)(piVar5 + 2) == 0.0) {
        uVar3 = 0;
      }
      else {
        uVar3 = 1;
      }
    }
    else {
      uVar3 = param_3[600];
    }
    param_3[600] = uVar3;
  }
  FUN_18000f890(local_e8);
  uVar4 = FUN_180073a70(local_e8,local_c8,"color_correction");
  piVar5 = (int *)FUN_1800f2fa0(param_1,uVar4);
  if (piVar5 != (int *)0x0) {
    if (*piVar5 == 1) {
      uVar3 = (undefined1)piVar5[1];
    }
    else if (*piVar5 == 2) {
      if (*(double *)(piVar5 + 2) == 0.0) {
        uVar3 = 0;
      }
      else {
        uVar3 = 1;
      }
    }
    else {
      uVar3 = param_3[0x270];
    }
    param_3[0x270] = uVar3;
  }
  FUN_18000f890(local_e8);
  uVar4 = FUN_180073a70(local_e8,local_c8,"cc_grayscale");
  piVar5 = (int *)FUN_1800f2fa0(param_1,uVar4);
  if (piVar5 != (int *)0x0) {
    if (*piVar5 == 1) {
      uVar3 = (undefined1)piVar5[1];
    }
    else if (*piVar5 == 2) {
      if (*(double *)(piVar5 + 2) == 0.0) {
        uVar3 = 0;
      }
      else {
        uVar3 = 1;
      }
    }
    else {
      uVar3 = param_3[0x294];
    }
    param_3[0x294] = uVar3;
  }
  FUN_18000f890(local_e8);
  uVar4 = FUN_180073a70(local_e8,local_c8,&DAT_1806f85f0);
  piVar5 = (int *)FUN_1800f2fa0(param_1,uVar4);
  if (piVar5 != (int *)0x0) {
    if (*piVar5 == 1) {
      uVar3 = (undefined1)piVar5[1];
    }
    else if (*piVar5 == 2) {
      if (*(double *)(piVar5 + 2) == 0.0) {
        uVar3 = 0;
      }
      else {
        uVar3 = 1;
      }
    }
    else {
      uVar3 = param_3[0x295];
    }
    param_3[0x295] = uVar3;
  }
  FUN_18000f890(local_e8);
  uVar4 = FUN_180073a70(local_e8,local_c8,&DAT_1806f85cc);
  piVar5 = (int *)FUN_1800f2fa0(param_1,uVar4);
  if (piVar5 != (int *)0x0) {
    if (*piVar5 == 1) {
      uVar3 = (undefined1)piVar5[1];
    }
    else if (*piVar5 == 2) {
      if (*(double *)(piVar5 + 2) == 0.0) {
        uVar3 = 0;
      }
      else {
        uVar3 = 1;
      }
    }
    else {
      uVar3 = param_3[0x2ac];
    }
    param_3[0x2ac] = uVar3;
  }
  FUN_18000f890(local_e8);
  uVar4 = FUN_180073a70(local_e8,local_c8,"wetness");
  piVar5 = (int *)FUN_1800f2fa0(param_1,uVar4);
  if (piVar5 != (int *)0x0) {
    if (*piVar5 == 1) {
      uVar3 = (undefined1)piVar5[1];
    }
    else if (*piVar5 == 2) {
      if (*(double *)(piVar5 + 2) == 0.0) {
        uVar3 = 0;
      }
      else {
        uVar3 = 1;
      }
    }
    else {
      uVar3 = param_3[0x2c4];
    }
    param_3[0x2c4] = uVar3;
  }
  FUN_18000f890(local_e8);
  uVar4 = FUN_180073a70(local_e8,local_c8,"wetness_ignore_sky");
  piVar5 = (int *)FUN_1800f2fa0(param_1,uVar4);
  if (piVar5 != (int *)0x0) {
    if (*piVar5 == 1) {
      uVar3 = (undefined1)piVar5[1];
    }
    else if (*piVar5 == 2) {
      if (*(double *)(piVar5 + 2) == 0.0) {
        uVar3 = 0;
      }
      else {
        uVar3 = 1;
      }
    }
    else {
      uVar3 = param_3[0x2d4];
    }
    param_3[0x2d4] = uVar3;
  }
  FUN_18000f890(local_e8);
  uVar4 = FUN_180073a70(local_e8,local_c8,"remove_fog");
  piVar5 = (int *)FUN_1800f2fa0(param_1,uVar4);
  if (piVar5 != (int *)0x0) {
    if (*piVar5 == 1) {
      uVar3 = (undefined1)piVar5[1];
    }
    else if (*piVar5 == 2) {
      if (*(double *)(piVar5 + 2) == 0.0) {
        uVar3 = 0;
      }
      else {
        uVar3 = 1;
      }
    }
    else {
      uVar3 = param_3[0x364];
    }
    param_3[0x364] = uVar3;
  }
  FUN_18000f890(local_e8);
  uVar4 = FUN_180073a70(local_e8,local_c8,"remove_sunlight");
  piVar5 = (int *)FUN_1800f2fa0(param_1,uVar4);
  if (piVar5 != (int *)0x0) {
    if (*piVar5 == 1) {
      uVar3 = (undefined1)piVar5[1];
    }
    else if (*piVar5 == 2) {
      if (*(double *)(piVar5 + 2) == 0.0) {
        uVar3 = 0;
      }
      else {
        uVar3 = 1;
      }
    }
    else {
      uVar3 = param_3[0x365];
    }
    param_3[0x365] = uVar3;
  }
  FUN_18000f890(local_e8);
  uVar4 = FUN_180073a70(local_e8,local_c8,"remove_viewmodel_sunlight");
  piVar5 = (int *)FUN_1800f2fa0(param_1,uVar4);
  if (piVar5 != (int *)0x0) {
    if (*piVar5 == 1) {
      uVar3 = (undefined1)piVar5[1];
    }
    else if (*piVar5 == 2) {
      if (*(double *)(piVar5 + 2) == 0.0) {
        uVar3 = 0;
      }
      else {
        uVar3 = 1;
      }
    }
    else {
      uVar3 = param_3[0x366];
    }
    param_3[0x366] = uVar3;
  }
  FUN_18000f890(local_e8);
  uVar4 = FUN_180073a70(local_e8,local_c8,"remove_barnlights");
  piVar5 = (int *)FUN_1800f2fa0(param_1,uVar4);
  if (piVar5 != (int *)0x0) {
    if (*piVar5 == 1) {
      uVar3 = (undefined1)piVar5[1];
    }
    else if (*piVar5 == 2) {
      if (*(double *)(piVar5 + 2) == 0.0) {
        uVar3 = 0;
      }
      else {
        uVar3 = 1;
      }
    }
    else {
      uVar3 = param_3[0x367];
    }
    param_3[0x367] = uVar3;
  }
  FUN_18000f890(local_e8);
  uVar4 = FUN_180073a70(local_e8,local_c8,"remove_baked_shadows");
  piVar5 = (int *)FUN_1800f2fa0(param_1,uVar4);
  if (piVar5 != (int *)0x0) {
    if (*piVar5 == 1) {
      uVar3 = (undefined1)piVar5[1];
    }
    else if (*piVar5 == 2) {
      if (*(double *)(piVar5 + 2) == 0.0) {
        uVar3 = 0;
      }
      else {
        uVar3 = 1;
      }
    }
    else {
      uVar3 = param_3[0x368];
    }
    param_3[0x368] = uVar3;
  }
  FUN_18000f890(local_e8);
  uVar4 = FUN_180073a70(local_e8,local_c8,"remove_dynamic_shadows");
  piVar5 = (int *)FUN_1800f2fa0(param_1,uVar4);
  if (piVar5 != (int *)0x0) {
    if (*piVar5 == 1) {
      uVar3 = (undefined1)piVar5[1];
    }
    else if (*piVar5 == 2) {
      if (*(double *)(piVar5 + 2) == 0.0) {
        uVar3 = 0;
      }
      else {
        uVar3 = 1;
      }
    }
    else {
      uVar3 = param_3[0x369];
    }
    param_3[0x369] = uVar3;
  }
  FUN_18000f890(local_e8);
  uVar4 = FUN_180073a70(local_e8,local_c8,"remove_post_processing");
  piVar5 = (int *)FUN_1800f2fa0(param_1,uVar4);
  if (piVar5 != (int *)0x0) {
    if (*piVar5 == 1) {
      uVar3 = (undefined1)piVar5[1];
    }
    else if (*piVar5 == 2) {
      if (*(double *)(piVar5 + 2) == 0.0) {
        uVar3 = 0;
      }
      else {
        uVar3 = 1;
      }
    }
    else {
      uVar3 = param_3[0x36a];
    }
    param_3[0x36a] = uVar3;
  }
  FUN_18000f890(local_e8);
  uVar4 = FUN_180073a70(local_e8,local_c8,"remove_skybox_2d");
  piVar5 = (int *)FUN_1800f2fa0(param_1,uVar4);
  if (piVar5 != (int *)0x0) {
    if (*piVar5 == 1) {
      uVar3 = (undefined1)piVar5[1];
    }
    else if (*piVar5 == 2) {
      if (*(double *)(piVar5 + 2) == 0.0) {
        uVar3 = 0;
      }
      else {
        uVar3 = 1;
      }
    }
    else {
      uVar3 = param_3[0x36b];
    }
    param_3[0x36b] = uVar3;
  }
  FUN_18000f890(local_e8);
  uVar4 = FUN_180073a70(local_e8,local_c8,"remove_skybox_3d");
  piVar5 = (int *)FUN_1800f2fa0(param_1,uVar4);
  if (piVar5 != (int *)0x0) {
    if (*piVar5 == 1) {
      uVar3 = (undefined1)piVar5[1];
    }
    else if (*piVar5 == 2) {
      if (*(double *)(piVar5 + 2) == 0.0) {
        uVar3 = 0;
      }
      else {
        uVar3 = 1;
      }
    }
    else {
      uVar3 = param_3[0x36c];
    }
    param_3[0x36c] = uVar3;
  }
  FUN_18000f890(local_e8);
  uVar4 = FUN_180073a70(local_e8,local_c8,"remove_cable_particles");
  piVar5 = (int *)FUN_1800f2fa0(param_1,uVar4);
  if (piVar5 != (int *)0x0) {
    if (*piVar5 == 1) {
      uVar3 = (undefined1)piVar5[1];
    }
    else if (*piVar5 == 2) {
      if (*(double *)(piVar5 + 2) == 0.0) {
        uVar3 = 0;
      }
      else {
        uVar3 = 1;
      }
    }
    else {
      uVar3 = param_3[0x36d];
    }
    param_3[0x36d] = uVar3;
  }
  FUN_18000f890(local_e8);
  uVar4 = FUN_180073a70(local_e8,local_c8,"nightmode_color");
  FUN_18019e140(param_1,uVar4,param_3 + 4);
  FUN_18000f890(local_e8);
  uVar4 = FUN_180073a70(local_e8,local_c8,"overlay_transparency");
  FUN_1800f3090(param_1,uVar4,param_3 + 0x14);
  FUN_18000f890(local_e8);
  uVar4 = FUN_180073a70(local_e8,local_c8,"props_color");
  FUN_18019e140(param_1,uVar4,param_3 + 0x1c);
  FUN_18000f890(local_e8);
  uVar4 = FUN_180073a70(local_e8,local_c8,"fullbright_color");
  FUN_18019e140(param_1,uVar4,param_3 + 0x30);
  FUN_18000f890(local_e8);
  uVar4 = FUN_180073a70(local_e8,local_c8,"adaptation");
  FUN_1800f3090(param_1,uVar4,param_3 + 0x44);
  FUN_18000f890(local_e8);
  uVar4 = FUN_180073a70(local_e8,local_c8,"compensation");
  lVar6 = FUN_1800f2fa0(param_1,uVar4);
  if (lVar6 != 0) {
    dVar10 = (double)FUN_180370b10(lVar6,(double)*(float *)(param_3 + 0x48));
    if (((uint)(float)dVar10 & 0x7f800000) != 0x7f800000) {
      *(float *)(param_3 + 0x48) = (float)dVar10;
    }
  }
  FUN_18000f890(local_e8);
  uVar4 = FUN_180073a70(local_e8,local_c8,"exposure_min");
  lVar6 = FUN_1800f2fa0(param_1,uVar4);
  if (lVar6 != 0) {
    dVar10 = (double)FUN_180370b10(lVar6,(double)*(float *)(param_3 + 0x4c));
    if (((uint)(float)dVar10 & 0x7f800000) != 0x7f800000) {
      *(float *)(param_3 + 0x4c) = (float)dVar10;
    }
  }
  FUN_18000f890(local_e8);
  uVar4 = FUN_180073a70(local_e8,local_c8,"exposure_max");
  lVar6 = FUN_1800f2fa0(param_1,uVar4);
  if (lVar6 != 0) {
    dVar10 = (double)FUN_180370b10(lVar6,(double)*(float *)(param_3 + 0x50));
    if (((uint)(float)dVar10 & 0x7f800000) != 0x7f800000) {
      *(float *)(param_3 + 0x50) = (float)dVar10;
    }
  }
  FUN_18000f890(local_e8);
  uVar4 = FUN_180073a70(local_e8,local_c8,"adaptation_speed");
  FUN_1800f3090(param_1,uVar4,param_3 + 0x54);
  FUN_18000f890(local_e8);
  uVar4 = FUN_180073a70(local_e8,local_c8,"fixed_exposure");
  FUN_1800f3090(param_1,uVar4,param_3 + 0x58);
  FUN_18000f890(local_e8);
  uVar4 = FUN_180073a70(local_e8,local_c8,"sun_illumination");
  FUN_18019e140(param_1,uVar4,param_3 + 0x60);
  FUN_18000f890(local_e8);
  uVar4 = FUN_180073a70(local_e8,local_c8,"sun_reflection");
  FUN_18019e140(param_1,uVar4,param_3 + 0x70);
  FUN_18000f890(local_e8);
  uVar4 = FUN_180073a70(local_e8,local_c8,"sun_method");
  FUN_1800f3090(param_1,uVar4,param_3 + 0x80);
  FUN_18000f890(local_e8);
  uVar4 = FUN_180073a70(local_e8,local_c8,"sun_pitch");
  FUN_1800f3090(param_1,uVar4,param_3 + 0x88);
  FUN_18000f890(local_e8);
  uVar4 = FUN_180073a70(local_e8,local_c8,"sun_yaw");
  FUN_1800f3090(param_1,uVar4,param_3 + 0x8c);
  FUN_18000f890(local_e8);
  uVar4 = FUN_180073a70(local_e8,local_c8,"volumetric_brightness");
  FUN_1800f3090(param_1,uVar4,param_3 + 0x90);
  FUN_18000f890(local_e8);
  uVar4 = FUN_180073a70(local_e8,local_c8,"sky_color");
  FUN_18019e140(param_1,uVar4,param_3 + 0x98);
  FUN_18000f890(local_e8);
  uVar4 = FUN_180073a70(local_e8,local_c8,"clouds_color");
  FUN_18019e140(param_1,uVar4,param_3 + 0xa8);
  FUN_18000f890(local_e8);
  uVar4 = FUN_180073a70(local_e8,local_c8,"sun_color");
  FUN_18019e140(param_1,uVar4,param_3 + 0xb8);
  FUN_18000f890(local_e8);
  uVar4 = FUN_180073a70(local_e8,local_c8,"skybox");
  FUN_1800f3090(param_1,uVar4,param_3 + 200);
  FUN_18000f890(local_e8);
  uVar4 = FUN_180073a70(local_e8,local_c8,"skybox_custom");
  piVar5 = (int *)FUN_1800f2fa0(param_1,uVar4);
  if ((piVar5 != (int *)0x0) && (*piVar5 == 3)) {
    FUN_180540170(param_3 + 0xcc,0,0xc0);
    plVar8 = (longlong *)(piVar5 + 4);
    if (0xf < *(ulonglong *)(piVar5 + 10)) {
      plVar8 = (longlong *)*plVar8;
    }
    snprintf(param_3 + 0xcc,0xc0,&DAT_1806d3198,plVar8);
  }
  FUN_18000f890(local_e8);
  uVar4 = FUN_180073a70(local_e8,local_c8,"fog_color");
  FUN_18019e140(param_1,uVar4,param_3 + 400);
  FUN_18000f890(local_e8);
  uVar4 = FUN_180073a70(local_e8,local_c8,"fog_distance");
  FUN_1800f3090(param_1,uVar4,param_3 + 0x1a0);
  FUN_18000f890(local_e8);
  uVar4 = FUN_180073a70(local_e8,local_c8,"fog_exponent");
  lVar6 = FUN_1800f2fa0(param_1,uVar4);
  if (lVar6 != 0) {
    dVar10 = (double)FUN_180370b10(lVar6,(double)*(float *)(param_3 + 0x1a4));
    if (((uint)(float)dVar10 & 0x7f800000) != 0x7f800000) {
      *(float *)(param_3 + 0x1a4) = (float)dVar10;
    }
  }
  FUN_18000f890(local_e8);
  uVar4 = FUN_180073a70(local_e8,local_c8,"fog_height_start");
  FUN_1800f3090(param_1,uVar4,param_3 + 0x1ac);
  FUN_18000f890(local_e8);
  uVar4 = FUN_180073a70(local_e8,local_c8,"fog_height_end");
  FUN_1800f3090(param_1,uVar4,param_3 + 0x1b0);
  FUN_18000f890(local_e8);
  uVar4 = FUN_180073a70(local_e8,local_c8,"fog_height_exponent");
  lVar6 = FUN_1800f2fa0(param_1,uVar4);
  if (lVar6 != 0) {
    dVar10 = (double)FUN_180370b10(lVar6,(double)*(float *)(param_3 + 0x1b4));
    if (((uint)(float)dVar10 & 0x7f800000) != 0x7f800000) {
      *(float *)(param_3 + 0x1b4) = (float)dVar10;
    }
  }
  FUN_18000f890(local_e8);
  uVar4 = FUN_180073a70(local_e8,local_c8,"bloom_strength");
  FUN_1800f3090(param_1,uVar4,param_3 + 0x1bc);
  FUN_18000f890(local_e8);
  uVar4 = FUN_180073a70(local_e8,local_c8,"bloom_screen_strength");
  FUN_1800f3090(param_1,uVar4,param_3 + 0x1c0);
  FUN_18000f890(local_e8);
  uVar4 = FUN_180073a70(local_e8,local_c8,"bloom_blur_strength");
  FUN_1800f3090(param_1,uVar4,param_3 + 0x1c4);
  FUN_18000f890(local_e8);
  uVar4 = FUN_180073a70(local_e8,local_c8,"bloom_threshold");
  FUN_1800f3090(param_1,uVar4,param_3 + 0x1c8);
  FUN_18000f890(local_e8);
  uVar4 = FUN_180073a70(local_e8,local_c8,"bloom_threshold_width");
  FUN_1800f3090(param_1,uVar4,param_3 + 0x1cc);
  FUN_18000f890(local_e8);
  uVar4 = FUN_180073a70(local_e8,local_c8,"vignette_color");
  FUN_18019e140(param_1,uVar4,param_3 + 0x238);
  FUN_18000f890(local_e8);
  uVar4 = FUN_180073a70(local_e8,local_c8,"vignette_strength");
  FUN_1800f3090(param_1,uVar4,param_3 + 0x248);
  FUN_18000f890(local_e8);
  uVar4 = FUN_180073a70(local_e8,local_c8,"vignette_radius");
  FUN_1800f3090(param_1,uVar4,param_3 + 0x24c);
  FUN_18000f890(local_e8);
  uVar4 = FUN_180073a70(local_e8,local_c8,"vignette_roundness");
  FUN_1800f3090(param_1,uVar4,param_3 + 0x250);
  FUN_18000f890(local_e8);
  uVar4 = FUN_180073a70(local_e8,local_c8,"vignette_feather");
  FUN_1800f3090(param_1,uVar4,param_3 + 0x254);
  FUN_18000f890(local_e8);
  uVar4 = FUN_180073a70(local_e8,local_c8,"contrast_strength");
  FUN_1800f3090(param_1,uVar4,param_3 + 0x25c);
  FUN_18000f890(local_e8);
  uVar4 = FUN_180073a70(local_e8,local_c8,"contrast_edge");
  FUN_1800f3090(param_1,uVar4,param_3 + 0x260);
  FUN_18000f890(local_e8);
  uVar4 = FUN_180073a70(local_e8,local_c8,"contrast_vignette_start");
  FUN_1800f3090(param_1,uVar4,param_3 + 0x264);
  FUN_18000f890(local_e8);
  uVar4 = FUN_180073a70(local_e8,local_c8,"contrast_vignette_end");
  FUN_1800f3090(param_1,uVar4,param_3 + 0x268);
  FUN_18000f890(local_e8);
  uVar4 = FUN_180073a70(local_e8,local_c8,"contrast_vignette_blur");
  FUN_1800f3090(param_1,uVar4,param_3 + 0x26c);
  FUN_18000f890(local_e8);
  uVar4 = FUN_180073a70(local_e8,local_c8,"tone_curve");
  FUN_1800f3090(param_1,uVar4,param_3 + 0x274);
  FUN_18000f890(local_e8);
  uVar4 = FUN_180073a70(local_e8,local_c8,"cc_contrast");
  FUN_1800f3090(param_1,uVar4,param_3 + 0x278);
  FUN_18000f890(local_e8);
  uVar4 = FUN_180073a70(local_e8,local_c8,"cc_highlights");
  FUN_1800f3090(param_1,uVar4,param_3 + 0x27c);
  FUN_18000f890(local_e8);
  uVar4 = FUN_180073a70(local_e8,local_c8,"cc_shadows");
  FUN_1800f3090(param_1,uVar4,param_3 + 0x280);
  FUN_18000f890(local_e8);
  uVar4 = FUN_180073a70(local_e8,local_c8,"cc_saturation");
  FUN_1800f3090(param_1,uVar4,param_3 + 0x284);
  FUN_18000f890(local_e8);
  uVar4 = FUN_180073a70(local_e8,local_c8,"cc_vibrance");
  FUN_1800f3090(param_1,uVar4,param_3 + 0x288);
  FUN_18000f890(local_e8);
  uVar4 = FUN_180073a70(local_e8,local_c8,"cc_temperature");
  FUN_1800f3090(param_1,uVar4,param_3 + 0x28c);
  FUN_18000f890(local_e8);
  uVar4 = FUN_180073a70(local_e8,local_c8,"cc_tint");
  FUN_1800f3090(param_1,uVar4,param_3 + 0x290);
  FUN_18000f890(local_e8);
  uVar4 = FUN_180073a70(local_e8,local_c8,"dof_mode");
  FUN_1800f3090(param_1,uVar4,param_3 + 0x298);
  FUN_18000f890(local_e8);
  uVar4 = FUN_180073a70(local_e8,local_c8,"dof_quality");
  FUN_1800f3090(param_1,uVar4,param_3 + 0x29c);
  FUN_18000f890(local_e8);
  uVar4 = FUN_180073a70(local_e8,local_c8,"dof_focus_distance");
  FUN_1800f3090(param_1,uVar4,param_3 + 0x2a0);
  FUN_18000f890(local_e8);
  uVar4 = FUN_180073a70(local_e8,local_c8,"dof_focus_speed");
  FUN_1800f3090(param_1,uVar4,param_3 + 0x2a4);
  FUN_18000f890(local_e8);
  uVar4 = FUN_180073a70(local_e8,local_c8,"dof_focus_range");
  FUN_1800f3090(param_1,uVar4,param_3 + 0x2a8);
  FUN_18000f890(local_e8);
  uVar4 = FUN_180073a70(local_e8,local_c8,"wind_direction");
  FUN_1800f3090(param_1,uVar4,param_3 + 0x2b0);
  FUN_18000f890(local_e8);
  uVar4 = FUN_180073a70(local_e8,local_c8,"wind_strength");
  lVar6 = FUN_1800f2fa0(param_1,uVar4);
  if (lVar6 != 0) {
    dVar10 = (double)FUN_180370b10(lVar6,(double)*(float *)(param_3 + 0x2b4));
    if (((uint)(float)dVar10 & 0x7f800000) != 0x7f800000) {
      *(float *)(param_3 + 0x2b4) = (float)dVar10;
    }
  }
  FUN_18000f890(local_e8);
  uVar4 = FUN_180073a70(local_e8,local_c8,"wetness_rain");
  FUN_1800f3090(param_1,uVar4,param_3 + 0x2c8);
  FUN_18000f890(local_e8);
  uVar4 = FUN_180073a70(local_e8,local_c8,"wetness_coverage");
  FUN_1800f3090(param_1,uVar4,param_3 + 0x2cc);
  FUN_18000f890(local_e8);
  uVar4 = FUN_180073a70(local_e8,local_c8,"wetness_drying");
  FUN_1800f3090(param_1,uVar4,param_3 + 0x2d0);
  FUN_18000f890(local_e8);
  uVar4 = FUN_180073a70(local_e8,local_c8,"wind_particle_strength");
  lVar6 = FUN_1800f2fa0(param_1,uVar4);
  if (lVar6 != 0) {
    dVar10 = (double)FUN_180370b10(lVar6,(double)*(float *)(param_3 + 0x2b8));
    if (((uint)(float)dVar10 & 0x7f800000) != 0x7f800000) {
      *(float *)(param_3 + 0x2b8) = (float)dVar10;
    }
  }
  FUN_18000f890(local_e8);
  uVar4 = FUN_180073a70(local_e8,local_c8,"wind_turbulence");
  lVar6 = FUN_1800f2fa0(param_1,uVar4);
  if (lVar6 != 0) {
    dVar10 = (double)FUN_180370b10(lVar6,(double)*(float *)(param_3 + 700));
    if (((uint)(float)dVar10 & 0x7f800000) != 0x7f800000) {
      *(float *)(param_3 + 700) = (float)dVar10;
    }
  }
  FUN_18000f890(local_e8);
  uVar4 = FUN_180073a70(local_e8,local_c8,"wind_max_tilt");
  lVar6 = FUN_1800f2fa0(param_1,uVar4);
  if (lVar6 != 0) {
    dVar10 = (double)FUN_180370b10(lVar6,(double)*(float *)(param_3 + 0x2c0));
    if (((uint)(float)dVar10 & 0x7f800000) != 0x7f800000) {
      *(float *)(param_3 + 0x2c0) = (float)dVar10;
    }
  }
  FUN_18000f890(local_e8);
  uVar4 = FUN_180073a70(local_e8,local_c8,"thunder");
  piVar5 = (int *)FUN_1800f2fa0(param_1,uVar4);
  if (piVar5 != (int *)0x0) {
    if (*piVar5 == 1) {
      uVar3 = (undefined1)piVar5[1];
    }
    else if (*piVar5 == 2) {
      if (*(double *)(piVar5 + 2) == 0.0) {
        uVar3 = 0;
      }
      else {
        uVar3 = 1;
      }
    }
    else {
      uVar3 = param_3[0x2d5];
    }
    param_3[0x2d5] = uVar3;
  }
  FUN_18000f890(local_e8);
  uVar4 = FUN_180073a70(local_e8,local_c8,"thunder_primary");
  FUN_18019e140(param_1,uVar4,param_3 + 0x2d8);
  FUN_18000f890(local_e8);
  uVar4 = FUN_180073a70(local_e8,local_c8,"thunder_glow");
  FUN_18019e140(param_1,uVar4,param_3 + 0x2e8);
  FUN_18000f890(local_e8);
  uVar4 = FUN_180073a70(local_e8,local_c8,"thunder_interval");
  lVar6 = FUN_1800f2fa0(param_1,uVar4);
  if (lVar6 != 0) {
    dVar10 = (double)FUN_180370b10(lVar6,(double)*(float *)(param_3 + 0x2f8));
    if (((uint)(float)dVar10 & 0x7f800000) != 0x7f800000) {
      *(float *)(param_3 + 0x2f8) = (float)dVar10;
    }
  }
  FUN_18000f890(local_e8);
  uVar4 = FUN_180073a70(local_e8,local_c8,"thunder_duration");
  lVar6 = FUN_1800f2fa0(param_1,uVar4);
  if (lVar6 != 0) {
    dVar10 = (double)FUN_180370b10(lVar6,(double)*(float *)(param_3 + 0x2fc));
    if (((uint)(float)dVar10 & 0x7f800000) != 0x7f800000) {
      *(float *)(param_3 + 0x2fc) = (float)dVar10;
    }
  }
  FUN_18000f890(local_e8);
  uVar4 = FUN_180073a70(local_e8,local_c8,"thunder_sound");
  piVar5 = (int *)FUN_1800f2fa0(param_1,uVar4);
  if (piVar5 != (int *)0x0) {
    if (*piVar5 == 1) {
      uVar3 = (undefined1)piVar5[1];
    }
    else if (*piVar5 == 2) {
      if (*(double *)(piVar5 + 2) == 0.0) {
        uVar3 = 0;
      }
      else {
        uVar3 = 1;
      }
    }
    else {
      uVar3 = param_3[0x300];
    }
    param_3[0x300] = uVar3;
  }
  FUN_18000f890(local_e8);
  uVar4 = FUN_180073a70(local_e8,local_c8,"thunder_on_kill");
  piVar5 = (int *)FUN_1800f2fa0(param_1,uVar4);
  if (piVar5 != (int *)0x0) {
    if (*piVar5 == 1) {
      uVar3 = (undefined1)piVar5[1];
    }
    else if (*piVar5 == 2) {
      if (*(double *)(piVar5 + 2) == 0.0) {
        uVar3 = 0;
      }
      else {
        uVar3 = 1;
      }
    }
    else {
      uVar3 = param_3[0x301];
    }
    param_3[0x301] = uVar3;
  }
  FUN_18000f890(local_e8);
  uVar4 = FUN_180073a70(local_e8,local_c8,&DAT_1806f8bfc);
  piVar5 = (int *)FUN_1800f2fa0(param_1,uVar4);
  if (piVar5 != (int *)0x0) {
    if (*piVar5 == 1) {
      uVar3 = (undefined1)piVar5[1];
    }
    else if (*piVar5 == 2) {
      if (*(double *)(piVar5 + 2) == 0.0) {
        uVar3 = 0;
      }
      else {
        uVar3 = 1;
      }
    }
    else {
      uVar3 = param_3[0x302];
    }
    param_3[0x302] = uVar3;
  }
  FUN_18000f890(local_e8);
  uVar4 = FUN_180073a70(local_e8,local_c8,"rain_primary");
  FUN_18019e140(param_1,uVar4,param_3 + 0x304);
  FUN_18000f890(local_e8);
  uVar4 = FUN_180073a70(local_e8,local_c8,"rain_glow");
  FUN_18019e140(param_1,uVar4,param_3 + 0x314);
  FUN_18000f890(local_e8);
  uVar4 = FUN_180073a70(local_e8,local_c8,"rain_speed");
  FUN_1800f3090(param_1,uVar4,param_3 + 0x324);
  FUN_18000f890(local_e8);
  uVar4 = FUN_180073a70(local_e8,local_c8,"rain_radius");
  FUN_1800f3090(param_1,uVar4,param_3 + 0x328);
  FUN_18000f890(local_e8);
  uVar4 = FUN_180073a70(local_e8,local_c8,"rain_density");
  FUN_1800f3090(param_1,uVar4,param_3 + 0x32c);
  FUN_18000f890(local_e8);
  uVar4 = FUN_180073a70(local_e8,local_c8,"rain_center_bias");
  FUN_1800f3090(param_1,uVar4,param_3 + 0x330);
  FUN_18000f890(local_e8);
  uVar4 = FUN_180073a70(local_e8,local_c8,"rain_sound");
  piVar5 = (int *)FUN_1800f2fa0(param_1,uVar4);
  if (piVar5 != (int *)0x0) {
    if (*piVar5 == 1) {
      uVar3 = (undefined1)piVar5[1];
    }
    else if (*piVar5 == 2) {
      if (*(double *)(piVar5 + 2) == 0.0) {
        uVar3 = 0;
      }
      else {
        uVar3 = 1;
      }
    }
    else {
      uVar3 = param_3[0x334];
    }
    param_3[0x334] = uVar3;
  }
  FUN_18000f890(local_e8);
  uVar4 = FUN_180073a70(local_e8,local_c8,&DAT_1806f8c7c);
  piVar5 = (int *)FUN_1800f2fa0(param_1,uVar4);
  if (piVar5 != (int *)0x0) {
    if (*piVar5 == 1) {
      uVar3 = (undefined1)piVar5[1];
    }
    else if (*piVar5 == 2) {
      if (*(double *)(piVar5 + 2) == 0.0) {
        uVar3 = 0;
      }
      else {
        uVar3 = 1;
      }
    }
    else {
      uVar3 = param_3[0x335];
    }
    param_3[0x335] = uVar3;
  }
  FUN_18000f890(local_e8);
  uVar4 = FUN_180073a70(local_e8,local_c8,"snow_primary");
  FUN_18019e140(param_1,uVar4,param_3 + 0x338);
  FUN_18000f890(local_e8);
  uVar4 = FUN_180073a70(local_e8,local_c8,"snow_glow");
  FUN_18019e140(param_1,uVar4,param_3 + 0x348);
  FUN_18000f890(local_e8);
  uVar4 = FUN_180073a70(local_e8,local_c8,"snow_speed");
  FUN_1800f3090(param_1,uVar4,param_3 + 0x358);
  FUN_18000f890(local_e8);
  uVar4 = FUN_180073a70(local_e8,local_c8,"snow_radius");
  FUN_1800f3090(param_1,uVar4,param_3 + 0x35c);
  FUN_18000f890(local_e8);
  uVar4 = FUN_180073a70(local_e8,local_c8,"snow_density");
  FUN_1800f3090(param_1,uVar4,param_3 + 0x360);
  FUN_18000f890(local_e8);
  dVar2 = DAT_1808ace48;
  dVar10 = DAT_1808ac9c8;
  uVar9 = 0;
  do {
    uVar1 = uVar9 + 1;
    uVar4 = FUN_18004e4f0(local_88,uVar1);
    uVar7 = FUN_180073a70(local_a8,local_c8,"bloom_blur_weight");
    uVar4 = FUN_180066820(local_e8,uVar7,uVar4);
    lVar6 = FUN_1800f2fa0(param_1,uVar4);
    if ((((lVar6 != 0) &&
         (dVar11 = (double)FUN_180370b10(lVar6,(double)*(int *)(param_3 + uVar9 * 4 + 0x1d0)),
         ((uint)((ulonglong)dVar11 >> 0x34) & 0x7ff) != 0x7ff)) && (dVar2 < dVar11)) &&
       (dVar11 < dVar10)) {
      *(int *)(param_3 + uVar9 * 4 + 0x1d0) = (int)dVar11;
    }
    FUN_18000f890(local_e8);
    FUN_18000f890(local_a8);
    FUN_18000f890(local_88);
    uVar4 = FUN_18004e4f0(local_e8,uVar1);
    uVar7 = FUN_180073a70(local_a8,local_c8,"bloom_blur_color");
    uVar4 = FUN_180066820(local_88,uVar7,uVar4);
    FUN_18019e140(param_1,uVar4,param_3 + uVar9 * 0x10 + 0x1e4);
    FUN_18000f890(local_88);
    FUN_18000f890(local_a8);
    FUN_18000f890(local_e8);
    uVar9 = uVar1;
  } while (uVar1 < 5);
  FUN_18000f890(local_c8);
  return;
}



/* ===== 1801c1520 FUN_1801c1520 ===== */

void FUN_1801c1520(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  int *piVar1;
  ulonglong uVar2;
  double dVar3;
  
  piVar1 = (int *)FUN_1800f2fa0();
  if ((piVar1 != (int *)0x0) && (*piVar1 == 4)) {
    uVar2 = 0;
    do {
      if ((ulonglong)
          ((*(longlong *)(piVar1 + 0xe) - *(longlong *)(piVar1 + 0xc) >> 5) * -0x5555555555555555)
          <= uVar2) {
        return;
      }
      dVar3 = (double)FUN_180370b10(uVar2 * 0x60 + *(longlong *)(piVar1 + 0xc),
                                    SUB84((double)*(float *)(param_3 + uVar2 * 4),0));
      if (((uint)(float)dVar3 & 0x7f800000) != 0x7f800000) {
        *(float *)(param_3 + uVar2 * 4) = (float)dVar3;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < 8);
  }
  return;
}



/* ===== 1801c15d0 FUN_1801c15d0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801c15d0(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  int *piVar3;
  undefined1 auStack_78 [32];
  undefined1 local_58 [32];
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStack_78;
  uVar2 = FUN_180073a70(local_58,param_2,".enabled");
  piVar3 = (int *)FUN_1800f2fa0(param_1,uVar2);
  if (piVar3 != (int *)0x0) {
    if (*piVar3 == 1) {
      uVar1 = (undefined1)piVar3[1];
    }
    else if (*piVar3 == 2) {
      if (*(double *)(piVar3 + 2) == 0.0) {
        uVar1 = 0;
      }
      else {
        uVar1 = 1;
      }
    }
    else {
      uVar1 = *param_3;
    }
    *param_3 = uVar1;
  }
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,".color");
  FUN_18019e140(param_1,uVar2,param_3 + 4);
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,".items");
  FUN_1801c37b0(param_1,uVar2,param_3 + 0x14);
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,".icon_inverted");
  piVar3 = (int *)FUN_1800f2fa0(param_1,uVar2);
  if (piVar3 != (int *)0x0) {
    if (*piVar3 == 1) {
      uVar1 = (undefined1)piVar3[1];
    }
    else if (*piVar3 == 2) {
      if (*(double *)(piVar3 + 2) == 0.0) {
        uVar1 = 0;
      }
      else {
        uVar1 = 1;
      }
    }
    else {
      uVar1 = param_3[0x1c];
    }
    param_3[0x1c] = uVar1;
  }
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,".bar_background");
  piVar3 = (int *)FUN_1800f2fa0(param_1,uVar2);
  if (piVar3 != (int *)0x0) {
    if (*piVar3 == 1) {
      uVar1 = (undefined1)piVar3[1];
    }
    else if (*piVar3 == 2) {
      if (*(double *)(piVar3 + 2) == 0.0) {
        uVar1 = 0;
      }
      else {
        uVar1 = 1;
      }
    }
    else {
      uVar1 = param_3[0x1d];
    }
    param_3[0x1d] = uVar1;
  }
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,".bar_shadow");
  piVar3 = (int *)FUN_1800f2fa0(param_1,uVar2);
  if (piVar3 != (int *)0x0) {
    if (*piVar3 == 1) {
      uVar1 = (undefined1)piVar3[1];
    }
    else if (*piVar3 == 2) {
      if (*(double *)(piVar3 + 2) == 0.0) {
        uVar1 = 0;
      }
      else {
        uVar1 = 1;
      }
    }
    else {
      uVar1 = param_3[0x1e];
    }
    param_3[0x1e] = uVar1;
  }
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,".bar_shadow_color");
  FUN_18019e140(param_1,uVar2,param_3 + 0x20);
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,".bar_format");
  FUN_1800f3090(param_1,uVar2,param_3 + 0x30);
  FUN_18000f890(local_58);
  return;
}



/* ===== 1801c1840 FUN_1801c1840 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801c1840(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  double dVar3;
  undefined1 auStack_68 [32];
  undefined1 local_48 [32];
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_68;
  uVar1 = FUN_180073a70(local_48,param_2,".fade_offset");
  FUN_1800f3090(param_1,uVar1,param_3);
  FUN_18000f890(local_48);
  uVar1 = FUN_180073a70(local_48,param_2,".gradient_opacity");
  FUN_1800f3090(param_1,uVar1,param_3 + 4);
  FUN_18000f890(local_48);
  uVar1 = FUN_180073a70(local_48,param_2,".outline_opacity");
  FUN_1800f3090(param_1,uVar1,param_3 + 8);
  FUN_18000f890(local_48);
  uVar1 = FUN_180073a70(local_48,param_2,".glow_opacity");
  FUN_1800f3090(param_1,uVar1,param_3 + 0xc);
  FUN_18000f890(local_48);
  uVar1 = FUN_180073a70(local_48,param_2,".glow");
  lVar2 = FUN_1800f2fa0(param_1,uVar1);
  if (lVar2 != 0) {
    dVar3 = (double)FUN_180370b10(lVar2,SUB84((double)*(float *)(param_3 + 0x10),0));
    if (((uint)(float)dVar3 & 0x7f800000) != 0x7f800000) {
      *(float *)(param_3 + 0x10) = (float)dVar3;
    }
  }
  FUN_18000f890(local_48);
  return;
}



/* ===== 1801c1990 FUN_1801c1990 ===== */

void FUN_1801c1990(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  int *piVar1;
  longlong lVar2;
  undefined1 uVar3;
  int *piVar4;
  
  piVar4 = (int *)FUN_1800f2fa0();
  if (((piVar4 != (int *)0x0) && (*piVar4 == 4)) &&
     (piVar1 = *(int **)(piVar4 + 0xc),
     (*(longlong *)(piVar4 + 0xe) - (longlong)piVar1 >> 5) * -0x5555555555555555 != 0)) {
    if (*piVar1 == 1) {
      uVar3 = (undefined1)piVar1[1];
    }
    else if (*piVar1 == 2) {
      if (*(double *)(piVar1 + 2) == 0.0) {
        uVar3 = 0;
      }
      else {
        uVar3 = 1;
      }
    }
    else {
      uVar3 = *param_3;
    }
    *param_3 = uVar3;
    lVar2 = *(longlong *)(piVar4 + 0xc);
    if (1 < (ulonglong)((*(longlong *)(piVar4 + 0xe) - lVar2 >> 5) * -0x5555555555555555)) {
      if (*(int *)(lVar2 + 0x60) == 1) {
        uVar3 = *(undefined1 *)(lVar2 + 100);
      }
      else if (*(int *)(lVar2 + 0x60) == 2) {
        if (*(double *)(lVar2 + 0x68) == 0.0) {
          uVar3 = 0;
        }
        else {
          uVar3 = 1;
        }
      }
      else {
        uVar3 = param_3[1];
      }
      param_3[1] = uVar3;
      lVar2 = *(longlong *)(piVar4 + 0xc);
      if (2 < (ulonglong)((*(longlong *)(piVar4 + 0xe) - lVar2 >> 5) * -0x5555555555555555)) {
        if (*(int *)(lVar2 + 0xc0) == 1) {
          uVar3 = *(undefined1 *)(lVar2 + 0xc4);
        }
        else if (*(int *)(lVar2 + 0xc0) == 2) {
          if (*(double *)(lVar2 + 200) == 0.0) {
            uVar3 = 0;
          }
          else {
            uVar3 = 1;
          }
        }
        else {
          uVar3 = param_3[2];
        }
        param_3[2] = uVar3;
        lVar2 = *(longlong *)(piVar4 + 0xc);
        if (3 < (ulonglong)((*(longlong *)(piVar4 + 0xe) - lVar2 >> 5) * -0x5555555555555555)) {
          if (*(int *)(lVar2 + 0x120) == 1) {
            uVar3 = *(undefined1 *)(lVar2 + 0x124);
          }
          else if (*(int *)(lVar2 + 0x120) == 2) {
            if (*(double *)(lVar2 + 0x128) == 0.0) {
              uVar3 = 0;
            }
            else {
              uVar3 = 1;
            }
          }
          else {
            uVar3 = param_3[3];
          }
          param_3[3] = uVar3;
          lVar2 = *(longlong *)(piVar4 + 0xc);
          if (4 < (ulonglong)((*(longlong *)(piVar4 + 0xe) - lVar2 >> 5) * -0x5555555555555555)) {
            if (*(int *)(lVar2 + 0x180) == 1) {
              uVar3 = *(undefined1 *)(lVar2 + 0x184);
            }
            else if (*(int *)(lVar2 + 0x180) == 2) {
              if (*(double *)(lVar2 + 0x188) == 0.0) {
                uVar3 = 0;
              }
              else {
                uVar3 = 1;
              }
            }
            else {
              uVar3 = param_3[4];
            }
            param_3[4] = uVar3;
            lVar2 = *(longlong *)(piVar4 + 0xc);
            if (5 < (ulonglong)((*(longlong *)(piVar4 + 0xe) - lVar2 >> 5) * -0x5555555555555555)) {
              if (*(int *)(lVar2 + 0x1e0) == 1) {
                uVar3 = *(undefined1 *)(lVar2 + 0x1e4);
              }
              else if (*(int *)(lVar2 + 0x1e0) == 2) {
                if (*(double *)(lVar2 + 0x1e8) == 0.0) {
                  uVar3 = 0;
                }
                else {
                  uVar3 = 1;
                }
              }
              else {
                uVar3 = param_3[5];
              }
              param_3[5] = uVar3;
              lVar2 = *(longlong *)(piVar4 + 0xc);
              if (6 < (ulonglong)((*(longlong *)(piVar4 + 0xe) - lVar2 >> 5) * -0x5555555555555555))
              {
                if (*(int *)(lVar2 + 0x240) == 1) {
                  uVar3 = *(undefined1 *)(lVar2 + 0x244);
                }
                else if (*(int *)(lVar2 + 0x240) == 2) {
                  if (*(double *)(lVar2 + 0x248) == 0.0) {
                    uVar3 = 0;
                  }
                  else {
                    uVar3 = 1;
                  }
                }
                else {
                  uVar3 = param_3[6];
                }
                param_3[6] = uVar3;
                lVar2 = *(longlong *)(piVar4 + 0xc);
                if (7 < (ulonglong)
                        ((*(longlong *)(piVar4 + 0xe) - lVar2 >> 5) * -0x5555555555555555)) {
                  if (*(int *)(lVar2 + 0x2a0) == 1) {
                    uVar3 = *(undefined1 *)(lVar2 + 0x2a4);
                  }
                  else if (*(int *)(lVar2 + 0x2a0) == 2) {
                    if (*(double *)(lVar2 + 0x2a8) == 0.0) {
                      uVar3 = 0;
                    }
                    else {
                      uVar3 = 1;
                    }
                  }
                  else {
                    uVar3 = param_3[7];
                  }
                  param_3[7] = uVar3;
                  lVar2 = *(longlong *)(piVar4 + 0xc);
                  if (8 < (ulonglong)
                          ((*(longlong *)(piVar4 + 0xe) - lVar2 >> 5) * -0x5555555555555555)) {
                    if (*(int *)(lVar2 + 0x300) == 1) {
                      param_3[8] = *(undefined1 *)(lVar2 + 0x304);
                      return;
                    }
                    if (*(int *)(lVar2 + 0x300) == 2) {
                      if (*(double *)(lVar2 + 0x308) == 0.0) {
                        param_3[8] = 0;
                        return;
                      }
                      param_3[8] = 1;
                      return;
                    }
                    param_3[8] = param_3[8];
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}



/* ===== 1801c1cc0 FUN_1801c1cc0 ===== */

undefined8 FUN_1801c1cc0(longlong *param_1,undefined4 *param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined4 *puVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  ulonglong uVar18;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [24];
  longlong *local_78;
  undefined8 *local_70;
  ulonglong local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  
  lVar11 = *param_1;
  if (param_1[1] - lVar11 == -0x20) {
                    /* WARNING: Subroutine does not return */
    FUN_1800118d0();
  }
  uVar1 = (param_1[1] - lVar11 >> 5) + 1;
  uVar13 = param_1[2] - lVar11 >> 5;
  uVar18 = 0x7ffffffffffffff;
  if (uVar13 <= 0x7ffffffffffffff - (uVar13 >> 1)) {
    uVar13 = (uVar13 >> 1) + uVar13;
    uVar18 = uVar1;
    if (uVar1 <= uVar13) {
      uVar18 = uVar13;
    }
    if (0x7ffffffffffffff < uVar18) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  puVar10 = (undefined8 *)FUN_18000fb70(uVar18 * 0x20);
  lVar11 = ((longlong)param_2 - lVar11 & 0xffffffffffffffe0U) + (longlong)puVar10;
  puVar2 = (undefined8 *)(lVar11 + 0x20);
  local_78 = param_1;
  local_70 = puVar10;
  local_68 = uVar18;
  local_60 = puVar2;
  local_58 = puVar2;
  FUN_180024980(lVar11,param_3);
  puVar15 = auStack_98;
  puVar16 = auStack_98;
  puVar3 = (undefined4 *)param_1[1];
  puVar12 = (undefined4 *)*param_1;
  puVar9 = puVar10;
  if (param_2 == puVar3) {
    for (; puVar12 != puVar3; puVar12 = puVar12 + 8) {
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9[2] = 0;
      puVar9[3] = 0;
      uVar5 = puVar12[1];
      uVar6 = puVar12[2];
      uVar7 = puVar12[3];
      *(undefined4 *)puVar9 = *puVar12;
      *(undefined4 *)((longlong)puVar9 + 4) = uVar5;
      *(undefined4 *)(puVar9 + 1) = uVar6;
      *(undefined4 *)((longlong)puVar9 + 0xc) = uVar7;
      uVar8 = *(undefined8 *)(puVar12 + 6);
      puVar9[2] = *(undefined8 *)(puVar12 + 4);
      puVar9[3] = uVar8;
      *(undefined8 *)(puVar12 + 4) = 0;
      *(undefined8 *)(puVar12 + 6) = 7;
      *(undefined2 *)puVar12 = 0;
      puVar9 = puVar9 + 4;
    }
  }
  else {
    for (; puVar12 != param_2; puVar12 = puVar12 + 8) {
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9[2] = 0;
      puVar9[3] = 0;
      uVar5 = puVar12[1];
      uVar6 = puVar12[2];
      uVar7 = puVar12[3];
      *(undefined4 *)puVar9 = *puVar12;
      *(undefined4 *)((longlong)puVar9 + 4) = uVar5;
      *(undefined4 *)(puVar9 + 1) = uVar6;
      *(undefined4 *)((longlong)puVar9 + 0xc) = uVar7;
      uVar8 = *(undefined8 *)(puVar12 + 6);
      puVar9[2] = *(undefined8 *)(puVar12 + 4);
      puVar9[3] = uVar8;
      *(undefined8 *)(puVar12 + 4) = 0;
      *(undefined8 *)(puVar12 + 6) = 7;
      *(undefined2 *)puVar12 = 0;
      puVar9 = puVar9 + 4;
    }
    puVar3 = (undefined4 *)param_1[1];
    for (; param_2 != puVar3; param_2 = param_2 + 8) {
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
      *(undefined8 *)(param_2 + 6) = 7;
      *(undefined2 *)param_2 = 0;
      puVar2 = puVar2 + 4;
    }
  }
  lVar11 = *param_1;
  puVar17 = auStack_98;
  if (lVar11 == 0) goto LAB_1801c1ece;
  lVar14 = param_1[1];
  for (; lVar11 != lVar14; lVar11 = lVar11 + 0x20) {
    FUN_1800289e0(lVar11);
  }
  lVar11 = *param_1;
  if ((param_1[2] - lVar11 & 0xffffffffffffffe0U) < 0x1000) {
LAB_1801c1ec6:
    lVar14 = lVar11;
    puVar16 = puVar15;
  }
  else {
    lVar14 = *(longlong *)(lVar11 + -8);
    if (0x1f < (lVar11 - lVar14) - 8U) {
      pcVar4 = (code *)swi(0x29);
      lVar11 = (*pcVar4)(5);
      puVar15 = auStack_90;
      goto LAB_1801c1ec6;
    }
  }
  *(undefined8 *)(puVar16 + -8) = 0x1801c1ece;
  thunk_FUN_1803d64e0(lVar14);
  puVar17 = puVar16;
LAB_1801c1ece:
  *param_1 = (longlong)puVar10;
  param_1[1] = (longlong)(puVar10 + uVar1 * 4);
  param_1[2] = (longlong)(puVar10 + uVar18 * 4);
  return *(undefined8 *)(puVar17 + 0xa0);
}



/* ===== 1801c1f10 FUN_1801c1f10 ===== */

undefined8 * FUN_1801c1f10(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined8 *puVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  lVar2 = *param_1;
  uVar15 = 0x11f7047dc11f704;
  lVar8 = (param_1[1] - lVar2 >> 2) * -0x7dc11f7047dc11f7;
  if (lVar8 == 0x11f7047dc11f704) {
                    /* WARNING: Subroutine does not return */
    FUN_1800118d0();
  }
  uVar1 = lVar8 + 1;
  uVar9 = (param_1[2] - lVar2 >> 2) * -0x7dc11f7047dc11f7;
  if (uVar9 <= 0x11f7047dc11f704 - (uVar9 >> 1)) {
    uVar9 = (uVar9 >> 1) + uVar9;
    uVar15 = uVar1;
    if (uVar1 <= uVar9) {
      uVar15 = uVar9;
    }
    if (0x11f7047dc11f704 < uVar15) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  lVar8 = FUN_18000fb70(uVar15 * 0xe4);
  uVar7 = param_3[1];
  puVar13 = (undefined8 *)(((param_2 - lVar2) / 0xe4) * 0xe4 + lVar8);
  *puVar13 = *param_3;
  puVar13[1] = uVar7;
  uVar7 = param_3[3];
  puVar13[2] = param_3[2];
  puVar13[3] = uVar7;
  uVar7 = param_3[5];
  puVar13[4] = param_3[4];
  puVar13[5] = uVar7;
  uVar7 = param_3[7];
  puVar13[6] = param_3[6];
  puVar13[7] = uVar7;
  uVar7 = param_3[9];
  puVar13[8] = param_3[8];
  puVar13[9] = uVar7;
  uVar7 = param_3[0xb];
  puVar13[10] = param_3[10];
  puVar13[0xb] = uVar7;
  uVar7 = param_3[0xd];
  puVar13[0xc] = param_3[0xc];
  puVar13[0xd] = uVar7;
  uVar7 = param_3[0xf];
  puVar13[0xe] = param_3[0xe];
  puVar13[0xf] = uVar7;
  uVar7 = param_3[0x11];
  puVar13[0x10] = param_3[0x10];
  puVar13[0x11] = uVar7;
  uVar7 = param_3[0x13];
  puVar13[0x12] = param_3[0x12];
  puVar13[0x13] = uVar7;
  uVar7 = param_3[0x15];
  puVar13[0x14] = param_3[0x14];
  puVar13[0x15] = uVar7;
  uVar7 = param_3[0x17];
  puVar13[0x16] = param_3[0x16];
  puVar13[0x17] = uVar7;
  uVar4 = *(undefined4 *)((longlong)param_3 + 0xc4);
  uVar5 = *(undefined4 *)(param_3 + 0x19);
  uVar6 = *(undefined4 *)((longlong)param_3 + 0xcc);
  *(undefined4 *)(puVar13 + 0x18) = *(undefined4 *)(param_3 + 0x18);
  *(undefined4 *)((longlong)puVar13 + 0xc4) = uVar4;
  *(undefined4 *)(puVar13 + 0x19) = uVar5;
  *(undefined4 *)((longlong)puVar13 + 0xcc) = uVar6;
  uVar4 = *(undefined4 *)((longlong)param_3 + 0xd4);
  uVar5 = *(undefined4 *)(param_3 + 0x1b);
  uVar6 = *(undefined4 *)((longlong)param_3 + 0xdc);
  *(undefined4 *)(puVar13 + 0x1a) = *(undefined4 *)(param_3 + 0x1a);
  *(undefined4 *)((longlong)puVar13 + 0xd4) = uVar4;
  *(undefined4 *)(puVar13 + 0x1b) = uVar5;
  *(undefined4 *)((longlong)puVar13 + 0xdc) = uVar6;
  *(undefined4 *)(puVar13 + 0x1c) = *(undefined4 *)(param_3 + 0x1c);
  lVar2 = *param_1;
  if (param_2 == param_1[1]) {
    lVar14 = param_1[1] - lVar2;
    lVar10 = lVar8;
    param_2 = lVar2;
  }
  else {
    FUN_180540530(lVar8,lVar2,param_2 - lVar2);
    lVar10 = (longlong)puVar13 + 0xe4;
    lVar14 = param_1[1] - param_2;
  }
  puVar11 = auStack_48;
  puVar12 = auStack_48;
  FUN_180540530(lVar10,param_2,lVar14);
  lVar2 = *param_1;
  if (lVar2 == 0) goto LAB_1801c210f;
  lVar10 = lVar2;
  if ((ulonglong)((param_1[2] - lVar2 >> 2) * 4) < 0x1000) {
LAB_1801c2104:
    puVar12 = puVar11;
  }
  else {
    lVar10 = *(longlong *)(lVar2 + -8);
    if (0x1f < (lVar2 - lVar10) - 8U) {
      lVar10 = 5;
      pcVar3 = (code *)swi(0x29);
      (*pcVar3)(5);
      puVar11 = auStack_40;
      goto LAB_1801c2104;
    }
  }
  *(undefined8 *)(puVar12 + -8) = 0x1801c210f;
  thunk_FUN_1803d64e0(lVar10);
LAB_1801c210f:
  *param_1 = lVar8;
  param_1[1] = uVar1 * 0xe4 + lVar8;
  param_1[2] = uVar15 * 0xe4 + lVar8;
  return puVar13;
}



/* ===== 1801c2160 FUN_1801c2160 ===== */

undefined8 * FUN_1801c2160(longlong *param_1,undefined4 *param_2,undefined4 *param_3)

{
  ulonglong uVar1;
  undefined4 *puVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined8 *puVar17;
  ulonglong uVar18;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  lVar14 = *param_1;
  if (param_1[1] - lVar14 == -0x40) {
                    /* WARNING: Subroutine does not return */
    FUN_1800118d0();
  }
  uVar11 = param_1[2] - lVar14 >> 6;
  uVar1 = (param_1[1] - lVar14 >> 6) + 1;
  uVar18 = 0x3ffffffffffffff;
  if (uVar11 <= 0x3ffffffffffffff - (uVar11 >> 1)) {
    uVar11 = (uVar11 >> 1) + uVar11;
    uVar18 = uVar1;
    if (uVar1 <= uVar11) {
      uVar18 = uVar11;
    }
    if (0x3ffffffffffffff < uVar18) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  puVar9 = (undefined8 *)FUN_18000fb70(uVar18 * 0x40);
  puVar15 = auStack_48;
  puVar16 = auStack_48;
  puVar17 = (undefined8 *)(((longlong)param_2 - lVar14 & 0xffffffffffffffc0U) + (longlong)puVar9);
  *puVar17 = 0;
  puVar17[1] = 0;
  puVar17[2] = 0;
  puVar17[3] = 0;
  uVar4 = param_3[1];
  uVar5 = param_3[2];
  uVar6 = param_3[3];
  *(undefined4 *)puVar17 = *param_3;
  *(undefined4 *)((longlong)puVar17 + 4) = uVar4;
  *(undefined4 *)(puVar17 + 1) = uVar5;
  *(undefined4 *)((longlong)puVar17 + 0xc) = uVar6;
  uVar7 = *(undefined8 *)(param_3 + 6);
  puVar17[2] = *(undefined8 *)(param_3 + 4);
  puVar17[3] = uVar7;
  *(undefined8 *)(param_3 + 4) = 0;
  *(undefined8 *)(param_3 + 6) = 0xf;
  *(undefined1 *)param_3 = 0;
  puVar17[4] = *(undefined8 *)(param_3 + 8);
  puVar17[5] = *(undefined8 *)(param_3 + 10);
  *(undefined1 *)(puVar17 + 6) = *(undefined1 *)(param_3 + 0xc);
  puVar17[7] = *(undefined8 *)(param_3 + 0xe);
  puVar2 = (undefined4 *)param_1[1];
  puVar10 = (undefined4 *)*param_1;
  puVar8 = puVar9;
  if (param_2 == puVar2) {
    for (; puVar10 != puVar2; puVar10 = puVar10 + 0x10) {
      *puVar8 = 0;
      puVar8[1] = 0;
      puVar8[2] = 0;
      puVar8[3] = 0;
      uVar4 = puVar10[1];
      uVar5 = puVar10[2];
      uVar6 = puVar10[3];
      *(undefined4 *)puVar8 = *puVar10;
      *(undefined4 *)((longlong)puVar8 + 4) = uVar4;
      *(undefined4 *)(puVar8 + 1) = uVar5;
      *(undefined4 *)((longlong)puVar8 + 0xc) = uVar6;
      uVar7 = *(undefined8 *)(puVar10 + 6);
      puVar8[2] = *(undefined8 *)(puVar10 + 4);
      puVar8[3] = uVar7;
      *(undefined8 *)(puVar10 + 4) = 0;
      *(undefined8 *)(puVar10 + 6) = 0xf;
      *(undefined1 *)puVar10 = 0;
      puVar8[4] = *(undefined8 *)(puVar10 + 8);
      puVar8[5] = *(undefined8 *)(puVar10 + 10);
      *(undefined1 *)(puVar8 + 6) = *(undefined1 *)(puVar10 + 0xc);
      puVar8[7] = *(undefined8 *)(puVar10 + 0xe);
      puVar8 = puVar8 + 8;
    }
  }
  else {
    for (; puVar10 != param_2; puVar10 = puVar10 + 0x10) {
      *puVar8 = 0;
      puVar8[1] = 0;
      puVar8[2] = 0;
      puVar8[3] = 0;
      uVar4 = puVar10[1];
      uVar5 = puVar10[2];
      uVar6 = puVar10[3];
      *(undefined4 *)puVar8 = *puVar10;
      *(undefined4 *)((longlong)puVar8 + 4) = uVar4;
      *(undefined4 *)(puVar8 + 1) = uVar5;
      *(undefined4 *)((longlong)puVar8 + 0xc) = uVar6;
      uVar7 = *(undefined8 *)(puVar10 + 6);
      puVar8[2] = *(undefined8 *)(puVar10 + 4);
      puVar8[3] = uVar7;
      *(undefined8 *)(puVar10 + 4) = 0;
      *(undefined8 *)(puVar10 + 6) = 0xf;
      *(undefined1 *)puVar10 = 0;
      puVar8[4] = *(undefined8 *)(puVar10 + 8);
      puVar8[5] = *(undefined8 *)(puVar10 + 10);
      *(undefined1 *)(puVar8 + 6) = *(undefined1 *)(puVar10 + 0xc);
      puVar8[7] = *(undefined8 *)(puVar10 + 0xe);
      puVar8 = puVar8 + 8;
    }
    puVar2 = (undefined4 *)param_1[1];
    puVar8 = puVar17;
    for (; param_2 != puVar2; param_2 = param_2 + 0x10) {
      puVar12 = puVar8 + 8;
      *puVar12 = 0;
      puVar8[9] = 0;
      puVar8[10] = 0;
      puVar8[0xb] = 0;
      uVar4 = param_2[1];
      uVar5 = param_2[2];
      uVar6 = param_2[3];
      *(undefined4 *)puVar12 = *param_2;
      *(undefined4 *)((longlong)puVar8 + 0x44) = uVar4;
      *(undefined4 *)(puVar8 + 9) = uVar5;
      *(undefined4 *)((longlong)puVar8 + 0x4c) = uVar6;
      uVar7 = *(undefined8 *)(param_2 + 6);
      puVar8[10] = *(undefined8 *)(param_2 + 4);
      puVar8[0xb] = uVar7;
      *(undefined8 *)(param_2 + 4) = 0;
      *(undefined8 *)(param_2 + 6) = 0xf;
      *(undefined1 *)param_2 = 0;
      puVar8[0xc] = *(undefined8 *)(param_2 + 8);
      puVar8[0xd] = *(undefined8 *)(param_2 + 10);
      *(undefined1 *)(puVar8 + 0xe) = *(undefined1 *)(param_2 + 0xc);
      puVar8[0xf] = *(undefined8 *)(param_2 + 0xe);
      puVar8 = puVar12;
    }
  }
  lVar14 = *param_1;
  if (lVar14 == 0) goto LAB_1801c240e;
  lVar13 = param_1[1];
  for (; lVar14 != lVar13; lVar14 = lVar14 + 0x40) {
    FUN_18000f890(lVar14);
  }
  lVar14 = *param_1;
  if ((param_1[2] - lVar14 & 0xffffffffffffffc0U) < 0x1000) {
LAB_1801c2406:
    lVar13 = lVar14;
    puVar16 = puVar15;
  }
  else {
    lVar13 = *(longlong *)(lVar14 + -8);
    if (0x1f < (lVar14 - lVar13) - 8U) {
      pcVar3 = (code *)swi(0x29);
      lVar14 = (*pcVar3)(5);
      puVar15 = auStack_40;
      goto LAB_1801c2406;
    }
  }
  *(undefined8 *)(puVar16 + -8) = 0x1801c240e;
  thunk_FUN_1803d64e0(lVar13);
LAB_1801c240e:
  *param_1 = (longlong)puVar9;
  param_1[1] = (longlong)(puVar9 + uVar1 * 8);
  param_1[2] = (longlong)(puVar9 + uVar18 * 8);
  return puVar17;
}



/* ===== 1801c2460 FUN_1801c2460 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1801c2460(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  size_t _Size;
  code *pcVar2;
  undefined8 *****pppppuVar3;
  size_t sVar4;
  int iVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *_Buf1;
  undefined8 *****pppppuVar9;
  ulonglong uVar10;
  undefined1 auStack_68 [40];
  undefined8 *****local_40;
  undefined8 uStack_38;
  size_t local_30;
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_180919500 ^ (ulonglong)auStack_68;
  puVar8 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    puVar8 = (undefined8 *)*param_2;
  }
  uVar6 = FUN_1800ba730(puVar8,param_2[2],param_3,0x2e);
  local_30 = 0;
  local_40 = (undefined8 *****)0x0;
  uStack_38 = 0;
  if (uVar6 == 0xffffffffffffffff) {
    local_28 = 0xf;
    local_40 = (undefined8 *****)0x0;
  }
  else {
    local_28 = 0;
    if ((ulonglong)param_2[2] < uVar6) {
      uVar6 = param_2[2];
    }
    if (0xf < (ulonglong)param_2[3]) {
      param_2 = (undefined8 *)*param_2;
    }
    FUN_1800133a0(&local_40,param_2,uVar6);
  }
  uVar6 = local_28;
  sVar4 = local_30;
  pppppuVar3 = local_40;
  puVar8 = (undefined8 *)**(undefined8 **)(param_1 + 8);
  puVar1 = (undefined8 *)(*(undefined8 **)(param_1 + 8))[1];
  do {
    if (puVar8 == puVar1) {
      uVar7 = 0;
LAB_1801c255e:
      if (0xf < uVar6) {
        uVar10 = uVar6 + 1;
        pppppuVar9 = pppppuVar3;
        if (0xfff < uVar10) {
          pppppuVar9 = (undefined8 *****)pppppuVar3[-1];
          if (0x1f < (ulonglong)((longlong)pppppuVar3 + (-8 - (longlong)pppppuVar9))) {
            pcVar2 = (code *)swi(0x29);
            (*pcVar2)(5);
            pcVar2 = (code *)swi(3);
            uVar7 = (*pcVar2)();
            return uVar7;
          }
          uVar10 = uVar6 + 0x28;
        }
        thunk_FUN_1803d64e0(pppppuVar9,uVar10);
      }
      return uVar7;
    }
    _Size = puVar8[2];
    pppppuVar9 = &local_40;
    if (0xf < uVar6) {
      pppppuVar9 = pppppuVar3;
    }
    if ((ulonglong)puVar8[3] < 0x10) {
      _Buf1 = puVar8;
    }
    else {
      _Buf1 = (undefined8 *)*puVar8;
    }
    if ((_Size == sVar4) && ((_Size == 0 || (iVar5 = memcmp(_Buf1,pppppuVar9,_Size), iVar5 == 0))))
    {
      uVar7 = 1;
      goto LAB_1801c255e;
    }
    puVar8 = puVar8 + 4;
  } while( true );
}



/* ===== 1801c25d0 FUN_1801c25d0 ===== */

void FUN_1801c25d0(undefined8 param_1,ulonglong param_2)

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
  
  plVar9 = DAT_180cd1288;
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
  FUN_180029a30(&DAT_180cd1298,2L << (bVar11 & 0x3f),DAT_180cd1288);
  DAT_180cd12b0 = lVar12 - 1;
  DAT_180cd12b8 = lVar12;
  plVar8 = (longlong *)*DAT_180cd1288;
joined_r0x0001801c264c:
  do {
    while( true ) {
      while( true ) {
        if (plVar8 == plVar9) {
          return;
        }
        plVar2 = (longlong *)*plVar8;
        uVar10 = (((((((((ulonglong)*(byte *)(plVar8 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                       (ulonglong)*(byte *)((longlong)plVar8 + 0x11)) * 0x100000001b3 ^
                      (ulonglong)*(byte *)((longlong)plVar8 + 0x12)) * 0x100000001b3 ^
                     (ulonglong)*(byte *)((longlong)plVar8 + 0x13)) * 0x100000001b3 ^
                    (ulonglong)*(byte *)((longlong)plVar8 + 0x14)) * 0x100000001b3 ^
                   (ulonglong)*(byte *)((longlong)plVar8 + 0x15)) * 0x100000001b3 ^
                  (ulonglong)*(byte *)((longlong)plVar8 + 0x16)) * 0x100000001b3 ^
                 (ulonglong)*(byte *)((longlong)plVar8 + 0x17)) * 0x100000001b3 & DAT_180cd12b0;
        plVar3 = *(longlong **)(DAT_180cd1298 + uVar10 * 0x10);
        puVar1 = (undefined8 *)(DAT_180cd1298 + uVar10 * 0x10);
        lVar12 = DAT_180cd1298 + uVar10 * 0x10;
        if (plVar3 != plVar9) break;
        *puVar1 = plVar8;
        *(longlong **)(lVar12 + 8) = plVar8;
        plVar8 = plVar2;
      }
      plVar4 = *(longlong **)(lVar12 + 8);
      if (plVar8[2] != plVar4[2]) break;
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
        goto joined_r0x0001801c264c;
      }
      plVar4 = (longlong *)plVar4[1];
    } while (plVar8[2] != plVar4[2]);
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



/* ===== 1801c27d0 FUN_1801c27d0 ===== */

void FUN_1801c27d0(undefined8 param_1,ulonglong param_2)

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
  
  plVar9 = DAT_180cd12c8;
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
  FUN_180029a30(&DAT_180cd12d8,2L << (bVar13 & 0x3f),DAT_180cd12c8);
  DAT_180cd12f0 = lVar17 - 1;
  DAT_180cd12f8 = lVar17;
  plVar8 = (longlong *)*DAT_180cd12c8;
joined_r0x0001801c285a:
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
      uVar12 = uVar12 & DAT_180cd12f0;
      plVar18 = *(longlong **)(DAT_180cd12d8 + uVar12 * 0x10);
      puVar2 = (undefined8 *)(DAT_180cd12d8 + uVar12 * 0x10);
      lVar17 = DAT_180cd12d8 + uVar12 * 0x10;
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
joined_r0x0001801c2963:
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
            goto joined_r0x0001801c285a;
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
      goto joined_r0x0001801c285a;
    }
    if ((_Size != 0) && (iVar10 = memcmp(plVar14,plVar16,_Size), iVar10 != 0)) {
      uVar11 = plVar8[5];
      goto joined_r0x0001801c2963;
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



/* ===== 1801c2a50 FUN_1801c2a50 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801c2a50(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [32];
  undefined1 local_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_58;
  FUN_180073a70(local_38,param_2,".enabled");
  FUN_1800f4b80();
  FUN_18000f890(local_38);
  FUN_180073a70(local_38,param_2,".material");
  FUN_1800f4b80();
  FUN_18000f890(local_38);
  FUN_180073a70(local_38,param_2,".color");
  FUN_18000f890(local_38);
  return;
}



/* ===== 1801c2b10 FUN_1801c2b10 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801c2b10(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined1 local_48 [32];
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_68;
  uVar1 = FUN_180073a70(local_48,param_2,".enabled");
  FUN_1800f4660(param_1,uVar1,param_3);
  FUN_18000f890(local_48);
  uVar1 = FUN_180073a70(local_48,param_2,".material");
  FUN_1800f4760(param_1,uVar1,param_3 + 4);
  FUN_18000f890(local_48);
  uVar1 = FUN_180073a70(local_48,param_2,".color");
  FUN_180154fa0(param_1,uVar1,param_3 + 8);
  FUN_18000f890(local_48);
  return;
}



/* ===== 1801c2bd0 FUN_1801c2bd0 ===== */

void FUN_1801c2bd0(longlong *param_1,longlong *param_2,longlong *param_3,char *param_4,char *param_5
                  )

{
  ulonglong uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint *puVar5;
  uint *puVar6;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  local_28 = (undefined4)*param_3;
  uStack_24 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_20 = (undefined4)param_3[1];
  uStack_1c = *(undefined4 *)((longlong)param_3 + 0xc);
  uVar4 = (*param_3 - *param_1 >> 2) * 0x20 + param_3[1];
  uVar1 = FUN_18006cc10(local_28,&local_28,(longlong)param_5 - (longlong)param_4);
  if (((longlong)uVar1 < 0) && (uVar1 != 0)) {
    puVar5 = (uint *)(*param_1 + (~uVar1 >> 5) * -4 + -4);
  }
  else {
    puVar5 = (uint *)(*param_1 + (uVar1 >> 5) * 4);
  }
  if (param_4 != param_5) {
    uVar1 = (ulonglong)((uint)uVar1 & 0x1f);
    puVar6 = puVar5;
    do {
      if (*param_4 == '\0') {
        uVar2 = *puVar5 & ~(1 << ((uint)uVar1 & 0x1f));
      }
      else {
        uVar2 = *puVar5 | 1 << ((uint)uVar1 & 0x1f);
      }
      *puVar5 = uVar2;
      if (uVar1 < 0x1f) {
        uVar1 = uVar1 + 1;
      }
      else {
        uVar1 = 0;
        puVar5 = puVar6 + 1;
        puVar6 = puVar5;
      }
      param_4 = param_4 + 1;
    } while (param_4 != param_5);
  }
  if (((longlong)uVar4 < 0) && (uVar4 != 0)) {
    lVar3 = *param_1 + (~uVar4 >> 5) * -4 + -4;
  }
  else {
    lVar3 = *param_1 + (uVar4 >> 5) * 4;
  }
  *param_2 = lVar3;
  param_2[1] = (ulonglong)((uint)uVar4 & 0x1f);
  return;
}



/* ===== 1801c2d10 FUN_1801c2d10 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801c2d10(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined1 local_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_58;
  uVar2 = FUN_180073a70(local_38,param_2,".enabled");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_38);
  uVar2 = FUN_180073a70(local_38,param_2,".material");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_38);
  uVar2 = FUN_180073a70(local_38,param_2,".color");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_38);
  return;
}



/* ===== 1801c2e20 FUN_1801c2e20 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801c2e20(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_58;
  uVar1 = FUN_180073a70(local_38,param_2,".enabled");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_38);
  uVar1 = FUN_180073a70(local_38,param_2,".material");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_38);
  uVar1 = FUN_180073a70(local_38,param_2,".color");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_38);
  return;
}



/* ===== 1801c2ee0 FUN_1801c2ee0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801c2ee0(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined1 local_48 [32];
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_68;
  uVar2 = FUN_180073a70(local_48,param_2,".enabled");
  FUN_1801696b0(param_1,uVar2,param_3);
  FUN_18000f890(local_48);
  uVar2 = FUN_180073a70(local_48,param_2,".material");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1800f2db0(*param_1,uVar2,param_3 + 4);
  }
  FUN_18000f890(local_48);
  uVar2 = FUN_180073a70(local_48,param_2,".color");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1801944c0(*param_1,uVar2,param_3 + 8);
  }
  FUN_18000f890(local_48);
  return;
}



/* ===== 1801c2fd0 FUN_1801c2fd0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801c2fd0(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined1 local_48 [32];
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_68;
  uVar2 = FUN_180073a70(local_48,param_2,".enabled");
  FUN_1801730b0(param_1,uVar2,param_3);
  FUN_18000f890(local_48);
  uVar2 = FUN_180073a70(local_48,param_2,".material");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1800f3090(*param_1,uVar2,param_3 + 4);
  }
  FUN_18000f890(local_48);
  uVar2 = FUN_180073a70(local_48,param_2,".color");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_18019e140(*param_1,uVar2,param_3 + 8);
  }
  FUN_18000f890(local_48);
  return;
}



/* ===== 1801c30c0 FUN_1801c30c0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801c30c0(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  size_t sVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined1 auStack_98 [32];
  undefined1 local_78 [32];
  undefined1 local_58 [32];
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStack_98;
  uVar5 = FUN_180073a70(local_78,param_2,".enabled");
  FUN_18017c1d0(param_1,uVar5,param_3);
  FUN_18000f890(local_78);
  puVar6 = (undefined8 *)FUN_180073a70(local_78,param_2,".material");
  plVar1 = param_1 + 1;
  plVar2 = (longlong *)*plVar1;
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar7 = puVar6;
  }
  else {
    puVar7 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_1801c3172;
    }
    FUN_1800f2db0(*param_1,puVar6,param_3 + 4);
  }
LAB_1801c3172:
  FUN_18000f890(local_78);
  puVar6 = (undefined8 *)FUN_180073a70(local_58,param_2,".color");
  plVar2 = (longlong *)*plVar1;
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar7 = puVar6;
  }
  else {
    puVar7 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_1801c31dc;
    }
    FUN_1801944c0(*param_1,puVar6,param_3 + 8);
  }
LAB_1801c31dc:
  FUN_18000f890(local_58);
  return;
}



/* ===== 1801c3200 FUN_1801c3200 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801c3200(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  size_t sVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined1 auStack_98 [32];
  undefined1 local_78 [32];
  undefined1 local_58 [32];
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStack_98;
  uVar5 = FUN_180073a70(local_78,param_2,".enabled");
  FUN_180187420(param_1,uVar5,param_3);
  FUN_18000f890(local_78);
  puVar6 = (undefined8 *)FUN_180073a70(local_78,param_2,".material");
  plVar1 = param_1 + 1;
  plVar2 = (longlong *)*plVar1;
  sVar3 = puVar6[2];
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar7 = puVar6;
  }
  else {
    puVar7 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_1801c32af;
    }
    FUN_1800f3090(*param_1,puVar6,param_3 + 4);
  }
LAB_1801c32af:
  FUN_18000f890(local_78);
  puVar6 = (undefined8 *)FUN_180073a70(local_58,param_2,".color");
  plVar2 = (longlong *)*plVar1;
  sVar3 = puVar6[2];
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar7 = puVar6;
  }
  else {
    puVar7 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_1801c3318;
    }
    FUN_18019e140(*param_1,puVar6,param_3 + 8);
  }
LAB_1801c3318:
  FUN_18000f890(local_58);
  return;
}



/* ===== 1801c3340 FUN_1801c3340 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801c3340(undefined8 param_1,undefined8 param_2,char *param_3)

{
  undefined8 uVar1;
  size_t sVar2;
  char *_Str;
  undefined1 auStack_68 [32];
  undefined1 local_48 [32];
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_68;
  uVar1 = FUN_180073a70(local_48,param_2,".enabled");
  FUN_1800f2cb0(param_1,uVar1);
  _Str = "false";
  if (*param_3 != '\0') {
    _Str = "true";
  }
  sVar2 = strlen(_Str);
  FUN_1800134a0(param_1,_Str,sVar2);
  FUN_18000f890(local_48);
  uVar1 = FUN_180073a70(local_48,param_2,".material");
  FUN_1800f2db0(param_1,uVar1,param_3 + 4);
  FUN_18000f890(local_48);
  uVar1 = FUN_180073a70(local_48,param_2,".color");
  FUN_1801944c0(param_1,uVar1,param_3 + 8);
  FUN_18000f890(local_48);
  return;
}



/* ===== 1801c3440 FUN_1801c3440 ===== */

void FUN_1801c3440(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  byte bVar1;
  ulonglong uVar2;
  
  FUN_1800f2cb0();
  FUN_1800134a0(param_1,&DAT_1806dfffc,1);
  uVar2 = 0;
  do {
    bVar1 = *(byte *)(uVar2 + param_3);
    if (bVar1 == 0) break;
    if ((bVar1 == 0x22) || (bVar1 == 0x5c)) {
      FUN_1800690a0(param_1,0x5c);
    }
    if (0x1f < bVar1) {
      FUN_1800690a0(param_1,bVar1);
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0xc0);
  FUN_1800134a0(param_1,&DAT_1806dfffc,1);
  return;
}



/* ===== 1801c34d0 FUN_1801c34d0 ===== */

void FUN_1801c34d0(undefined8 param_1,undefined8 param_2,char *param_3)

{
  size_t sVar1;
  char *pcVar2;
  char *_Str;
  
  FUN_1800f2cb0();
  FUN_1800134a0(param_1,&DAT_1806e05f8,1);
  _Str = "false";
  pcVar2 = "false";
  if (*param_3 != '\0') {
    pcVar2 = "true";
  }
  sVar1 = strlen(pcVar2);
  FUN_1800134a0(param_1,pcVar2,sVar1);
  FUN_1800134a0(param_1,&DAT_1806f0594,2);
  pcVar2 = "false";
  if (param_3[1] != '\0') {
    pcVar2 = "true";
  }
  sVar1 = strlen(pcVar2);
  FUN_1800134a0(param_1,pcVar2,sVar1);
  FUN_1800134a0(param_1,&DAT_1806f0594,2);
  pcVar2 = "false";
  if (param_3[2] != '\0') {
    pcVar2 = "true";
  }
  sVar1 = strlen(pcVar2);
  FUN_1800134a0(param_1,pcVar2,sVar1);
  FUN_1800134a0(param_1,&DAT_1806f0594,2);
  pcVar2 = "false";
  if (param_3[3] != '\0') {
    pcVar2 = "true";
  }
  sVar1 = strlen(pcVar2);
  FUN_1800134a0(param_1,pcVar2,sVar1);
  FUN_1800134a0(param_1,&DAT_1806f0594,2);
  pcVar2 = "false";
  if (param_3[4] != '\0') {
    pcVar2 = "true";
  }
  sVar1 = strlen(pcVar2);
  FUN_1800134a0(param_1,pcVar2,sVar1);
  FUN_1800134a0(param_1,&DAT_1806f0594,2);
  pcVar2 = "false";
  if (param_3[5] != '\0') {
    pcVar2 = "true";
  }
  sVar1 = strlen(pcVar2);
  FUN_1800134a0(param_1,pcVar2,sVar1);
  FUN_1800134a0(param_1,&DAT_1806f0594,2);
  pcVar2 = "false";
  if (param_3[6] != '\0') {
    pcVar2 = "true";
  }
  sVar1 = strlen(pcVar2);
  FUN_1800134a0(param_1,pcVar2,sVar1);
  FUN_1800134a0(param_1,&DAT_1806f0594,2);
  if (param_3[7] != '\0') {
    _Str = "true";
  }
  sVar1 = strlen(_Str);
  FUN_1800134a0(param_1,_Str,sVar1);
  FUN_1800134a0(param_1,&DAT_1806e9114,1);
  return;
}



/* ===== 1801c36c0 FUN_1801c36c0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801c36c0(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  int *piVar3;
  undefined1 auStack_68 [32];
  undefined1 local_48 [32];
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_68;
  uVar2 = FUN_180073a70(local_48,param_2,".enabled");
  piVar3 = (int *)FUN_1800f2fa0(param_1,uVar2);
  if (piVar3 != (int *)0x0) {
    if (*piVar3 == 1) {
      uVar1 = (undefined1)piVar3[1];
    }
    else if (*piVar3 == 2) {
      if (*(double *)(piVar3 + 2) == 0.0) {
        uVar1 = 0;
      }
      else {
        uVar1 = 1;
      }
    }
    else {
      uVar1 = *param_3;
    }
    *param_3 = uVar1;
  }
  FUN_18000f890(local_48);
  uVar2 = FUN_180073a70(local_48,param_2,".material");
  FUN_1800f3090(param_1,uVar2,param_3 + 4);
  FUN_18000f890(local_48);
  uVar2 = FUN_180073a70(local_48,param_2,".color");
  FUN_18019e140(param_1,uVar2,param_3 + 8);
  FUN_18000f890(local_48);
  return;
}



/* ===== 1801c37b0 FUN_1801c37b0 ===== */

void FUN_1801c37b0(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  int *piVar1;
  longlong lVar2;
  undefined1 uVar3;
  int *piVar4;
  
  piVar4 = (int *)FUN_1800f2fa0();
  if (((piVar4 != (int *)0x0) && (*piVar4 == 4)) &&
     (piVar1 = *(int **)(piVar4 + 0xc),
     (*(longlong *)(piVar4 + 0xe) - (longlong)piVar1 >> 5) * -0x5555555555555555 != 0)) {
    if (*piVar1 == 1) {
      uVar3 = (undefined1)piVar1[1];
    }
    else if (*piVar1 == 2) {
      if (*(double *)(piVar1 + 2) == 0.0) {
        uVar3 = 0;
      }
      else {
        uVar3 = 1;
      }
    }
    else {
      uVar3 = *param_3;
    }
    *param_3 = uVar3;
    lVar2 = *(longlong *)(piVar4 + 0xc);
    if (1 < (ulonglong)((*(longlong *)(piVar4 + 0xe) - lVar2 >> 5) * -0x5555555555555555)) {
      if (*(int *)(lVar2 + 0x60) == 1) {
        uVar3 = *(undefined1 *)(lVar2 + 100);
      }
      else if (*(int *)(lVar2 + 0x60) == 2) {
        if (*(double *)(lVar2 + 0x68) == 0.0) {
          uVar3 = 0;
        }
        else {
          uVar3 = 1;
        }
      }
      else {
        uVar3 = param_3[1];
      }
      param_3[1] = uVar3;
      lVar2 = *(longlong *)(piVar4 + 0xc);
      if (2 < (ulonglong)((*(longlong *)(piVar4 + 0xe) - lVar2 >> 5) * -0x5555555555555555)) {
        if (*(int *)(lVar2 + 0xc0) == 1) {
          uVar3 = *(undefined1 *)(lVar2 + 0xc4);
        }
        else if (*(int *)(lVar2 + 0xc0) == 2) {
          if (*(double *)(lVar2 + 200) == 0.0) {
            uVar3 = 0;
          }
          else {
            uVar3 = 1;
          }
        }
        else {
          uVar3 = param_3[2];
        }
        param_3[2] = uVar3;
        lVar2 = *(longlong *)(piVar4 + 0xc);
        if (3 < (ulonglong)((*(longlong *)(piVar4 + 0xe) - lVar2 >> 5) * -0x5555555555555555)) {
          if (*(int *)(lVar2 + 0x120) == 1) {
            uVar3 = *(undefined1 *)(lVar2 + 0x124);
          }
          else if (*(int *)(lVar2 + 0x120) == 2) {
            if (*(double *)(lVar2 + 0x128) == 0.0) {
              uVar3 = 0;
            }
            else {
              uVar3 = 1;
            }
          }
          else {
            uVar3 = param_3[3];
          }
          param_3[3] = uVar3;
          lVar2 = *(longlong *)(piVar4 + 0xc);
          if (4 < (ulonglong)((*(longlong *)(piVar4 + 0xe) - lVar2 >> 5) * -0x5555555555555555)) {
            if (*(int *)(lVar2 + 0x180) == 1) {
              uVar3 = *(undefined1 *)(lVar2 + 0x184);
            }
            else if (*(int *)(lVar2 + 0x180) == 2) {
              if (*(double *)(lVar2 + 0x188) == 0.0) {
                uVar3 = 0;
              }
              else {
                uVar3 = 1;
              }
            }
            else {
              uVar3 = param_3[4];
            }
            param_3[4] = uVar3;
            lVar2 = *(longlong *)(piVar4 + 0xc);
            if (5 < (ulonglong)((*(longlong *)(piVar4 + 0xe) - lVar2 >> 5) * -0x5555555555555555)) {
              if (*(int *)(lVar2 + 0x1e0) == 1) {
                uVar3 = *(undefined1 *)(lVar2 + 0x1e4);
              }
              else if (*(int *)(lVar2 + 0x1e0) == 2) {
                if (*(double *)(lVar2 + 0x1e8) == 0.0) {
                  uVar3 = 0;
                }
                else {
                  uVar3 = 1;
                }
              }
              else {
                uVar3 = param_3[5];
              }
              param_3[5] = uVar3;
              lVar2 = *(longlong *)(piVar4 + 0xc);
              if (6 < (ulonglong)((*(longlong *)(piVar4 + 0xe) - lVar2 >> 5) * -0x5555555555555555))
              {
                if (*(int *)(lVar2 + 0x240) == 1) {
                  uVar3 = *(undefined1 *)(lVar2 + 0x244);
                }
                else if (*(int *)(lVar2 + 0x240) == 2) {
                  if (*(double *)(lVar2 + 0x248) == 0.0) {
                    uVar3 = 0;
                  }
                  else {
                    uVar3 = 1;
                  }
                }
                else {
                  uVar3 = param_3[6];
                }
                param_3[6] = uVar3;
                lVar2 = *(longlong *)(piVar4 + 0xc);
                if (7 < (ulonglong)
                        ((*(longlong *)(piVar4 + 0xe) - lVar2 >> 5) * -0x5555555555555555)) {
                  if (*(int *)(lVar2 + 0x2a0) == 1) {
                    param_3[7] = *(undefined1 *)(lVar2 + 0x2a4);
                    return;
                  }
                  if (*(int *)(lVar2 + 0x2a0) == 2) {
                    if (*(double *)(lVar2 + 0x2a8) == 0.0) {
                      param_3[7] = 0;
                      return;
                    }
                    param_3[7] = 1;
                    return;
                  }
                  param_3[7] = param_3[7];
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}



/* ===== 1801c3a90 FUN_1801c3a90 ===== */

void FUN_1801c3a90(longlong param_1)

{
  longlong lVar1;
  code *pcVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  lVar1 = *(longlong *)(param_1 + 0x20);
  for (lVar4 = *(longlong *)(param_1 + 0x18); lVar4 != lVar1; lVar4 = lVar4 + 0x20) {
    FUN_1800289e0(lVar4);
  }
  lVar4 = *(longlong *)(param_1 + 8);
  uVar3 = *(longlong *)(param_1 + 0x10) * 0x20;
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



/* ===== 1801c3b20 FUN_1801c3b20 ===== */

void FUN_1801c3b20(void)

{
  int iVar1;
  
  iVar1 = FUN_1804e4d70(&DAT_1809ec110);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809ec15c == 0x7fffffff) {
    DAT_1809ec15c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  if ((ulonglong)(DAT_180cd1878 - DAT_180cd1870) < 0x1000) {
    FUN_1801c7890();
  }
  FUN_1804e4e90(&DAT_1809ec110);
  return;
}



/* ===== 1801c3c60 FUN_1801c3c60 ===== */

void FUN_1801c3c60(undefined8 *param_1,float param_2)

{
  int iVar1;
  float *pfVar2;
  uint uVar3;
  float fVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  
  pfVar2 = (float *)*param_1;
  if (pfVar2 != (float *)0x0) {
    iVar1 = *(int *)(param_1 + 1);
    if (iVar1 == 1) {
      if (param_2 == 0.0) {
        *(undefined1 *)pfVar2 = 0;
        return;
      }
      *(undefined1 *)pfVar2 = 1;
      return;
    }
    if (iVar1 == 2) {
      fVar4 = (float)FUN_1804f3280(param_2);
      *pfVar2 = fVar4;
      return;
    }
    if (iVar1 == 3) {
      *pfVar2 = param_2;
      return;
    }
    if (iVar1 == 4) {
      iVar1 = *(int *)((longlong)param_1 + 0xc);
      uVar3 = FUN_1804f3280(param_2);
      if (0 < iVar1) {
        uVar6 = 0;
        uVar7 = 1;
        do {
          if (0x17 < (uint)uVar6) {
            return;
          }
          uVar5 = uVar3 & uVar7;
          uVar7 = uVar7 << 1 | (uint)((int)uVar7 < 0);
          *(bool *)((longlong)pfVar2 + uVar6) = uVar5 != 0;
          uVar5 = (uint)uVar6 + 1;
          uVar6 = (ulonglong)uVar5;
        } while ((int)uVar5 < iVar1);
      }
    }
  }
  return;
}



/* ===== 1801c3d00 FUN_1801c3d00 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1801c3d00(undefined8 *param_1,int param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  size_t sVar4;
  longlong lVar5;
  char *_Str;
  undefined *puVar6;
  undefined1 auStack_88 [40];
  undefined8 *local_60;
  char local_58 [64];
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_88;
  lVar3 = (longlong)param_2;
  lVar5 = lVar3 * 0xe4;
  local_60 = param_1;
  if (param_3 == 1) {
    cVar1 = (&DAT_18095d598)[lVar5];
    _Str = "off";
    *param_1 = 0;
    param_1[1] = 0;
    if (cVar1 != '\0') {
      _Str = "on";
    }
    param_1[2] = 0;
    param_1[3] = 0;
    sVar4 = strlen(_Str);
  }
  else if ((&DAT_18095d5d0)[lVar5] == '\0') {
    local_58[0] = '\0';
    local_58[1] = '\0';
    local_58[2] = '\0';
    local_58[3] = '\0';
    local_58[4] = '\0';
    local_58[5] = '\0';
    local_58[6] = '\0';
    local_58[7] = '\0';
    local_58[8] = '\0';
    local_58[9] = '\0';
    local_58[10] = '\0';
    local_58[0xb] = '\0';
    local_58[0xc] = '\0';
    local_58[0xd] = '\0';
    local_58[0xe] = '\0';
    local_58[0xf] = '\0';
    local_58[0x10] = '\0';
    local_58[0x11] = '\0';
    local_58[0x12] = '\0';
    local_58[0x13] = '\0';
    local_58[0x14] = '\0';
    local_58[0x15] = '\0';
    local_58[0x16] = '\0';
    local_58[0x17] = '\0';
    local_58[0x18] = '\0';
    local_58[0x19] = '\0';
    local_58[0x1a] = '\0';
    local_58[0x1b] = '\0';
    local_58[0x1c] = '\0';
    local_58[0x1d] = '\0';
    local_58[0x1e] = '\0';
    local_58[0x1f] = '\0';
    local_58[0x20] = '\0';
    local_58[0x21] = '\0';
    local_58[0x22] = '\0';
    local_58[0x23] = '\0';
    local_58[0x24] = '\0';
    local_58[0x25] = '\0';
    local_58[0x26] = '\0';
    local_58[0x27] = '\0';
    local_58[0x28] = '\0';
    local_58[0x29] = '\0';
    local_58[0x2a] = '\0';
    local_58[0x2b] = '\0';
    local_58[0x2c] = '\0';
    local_58[0x2d] = '\0';
    local_58[0x2e] = '\0';
    local_58[0x2f] = '\0';
    local_58[0x30] = '\0';
    local_58[0x31] = '\0';
    local_58[0x32] = '\0';
    local_58[0x33] = '\0';
    local_58[0x34] = '\0';
    local_58[0x35] = '\0';
    local_58[0x36] = '\0';
    local_58[0x37] = '\0';
    local_58[0x38] = '\0';
    local_58[0x39] = '\0';
    local_58[0x3a] = '\0';
    local_58[0x3b] = '\0';
    local_58[0x3c] = '\0';
    local_58[0x3d] = '\0';
    local_58[0x3e] = '\0';
    local_58[0x3f] = '\0';
    if (((&DAT_18095d600)[lVar5] == '\0') || ((&DAT_18095d610)[lVar5] == '\0')) {
      puVar6 = &DAT_18095d600 + lVar5;
      if ((&DAT_18095d600)[lVar5] == '\0') {
        puVar6 = &DAT_1806f8ec4;
      }
      snprintf(local_58,0x40,puVar6,(double)(float)(&DAT_18095d59c)[lVar3 * 0x39]);
    }
    else {
      uVar2 = FUN_1804f3280((&DAT_18095d59c)[lVar3 * 0x39]);
      snprintf(local_58,0x40,&DAT_18095d600 + lVar5,uVar2);
    }
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    sVar4 = strlen(local_58);
    _Str = local_58;
  }
  else {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    sVar4 = strlen(&DAT_18095d5d0 + lVar5);
    _Str = &DAT_18095d5d0 + lVar5;
  }
  FUN_1800133a0(param_1,_Str,sVar4);
  return param_1;
}



/* ===== 1801c3e90 FUN_1801c3e90 ===== */

int FUN_1801c3e90(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  int iVar4;
  
  if (param_1[3] != param_1[4]) {
    return *(int *)(param_1[4] + -4);
  }
  iVar4 = (int)param_1[2];
  if (iVar4 == -1) {
    uVar3 = 0;
    lVar1 = 0;
    do {
      iVar2 = (int)uVar3;
      if (((((&DAT_1809ec1d8)[uVar3 * 0x80] != '\0') && ((&DAT_1809ec1c8)[uVar3 * 0x10] == *param_1)
           ) && ((&DAT_1809ec1d0)[uVar3 * 0x20] == (int)param_1[1])) &&
         ((&DAT_1809ec1c4)[uVar3 * 0x20] == 2)) {
        iVar4 = iVar2;
      }
      if ((((&DAT_1809ec258)[lVar1] != '\0') &&
          (*(longlong *)((longlong)&DAT_1809ec248 + lVar1) == *param_1)) &&
         ((*(int *)((longlong)&DAT_1809ec250 + lVar1) == (int)param_1[1] &&
          (*(int *)((longlong)&DAT_1809ec244 + lVar1) == 2)))) {
        iVar4 = iVar2 + 1;
      }
      if ((((&DAT_1809ec2d8)[lVar1] != '\0') &&
          (*(longlong *)((longlong)&DAT_1809ec2c8 + lVar1) == *param_1)) &&
         ((*(int *)((longlong)&DAT_1809ec2d0 + lVar1) == (int)param_1[1] &&
          (*(int *)((longlong)&DAT_1809ec2c4 + lVar1) == 2)))) {
        iVar4 = iVar2 + 2;
      }
      if (((((&DAT_1809ec358)[lVar1] != '\0') &&
           (*(longlong *)((longlong)&DAT_1809ec348 + lVar1) == *param_1)) &&
          (*(int *)((longlong)&DAT_1809ec350 + lVar1) == (int)param_1[1])) &&
         (*(int *)((longlong)&DAT_1809ec344 + lVar1) == 2)) {
        iVar4 = iVar2 + 3;
      }
      if ((((&DAT_1809ec3d8)[lVar1] != '\0') &&
          (*(longlong *)((longlong)&DAT_1809ec3c8 + lVar1) == *param_1)) &&
         ((*(int *)((longlong)&DAT_1809ec3d0 + lVar1) == (int)param_1[1] &&
          (*(int *)((longlong)&DAT_1809ec3c4 + lVar1) == 2)))) {
        iVar4 = iVar2 + 4;
      }
      if ((((&DAT_1809ec458)[lVar1] != '\0') &&
          (*(longlong *)((longlong)&DAT_1809ec448 + lVar1) == *param_1)) &&
         ((*(int *)((longlong)&DAT_1809ec450 + lVar1) == (int)param_1[1] &&
          (*(int *)((longlong)&DAT_1809ec444 + lVar1) == 2)))) {
        iVar4 = iVar2 + 5;
      }
      if (((((&DAT_1809ec4d8)[lVar1] != '\0') &&
           (*(longlong *)((longlong)&DAT_1809ec4c8 + lVar1) == *param_1)) &&
          (*(int *)((longlong)&DAT_1809ec4d0 + lVar1) == (int)param_1[1])) &&
         (*(int *)((longlong)&DAT_1809ec4c4 + lVar1) == 2)) {
        iVar4 = iVar2 + 6;
      }
      if ((((&DAT_1809ec558)[lVar1] != '\0') &&
          (*(longlong *)((longlong)&DAT_1809ec548 + lVar1) == *param_1)) &&
         ((*(int *)((longlong)&DAT_1809ec550 + lVar1) == (int)param_1[1] &&
          (*(int *)((longlong)&DAT_1809ec544 + lVar1) == 2)))) {
        iVar4 = iVar2 + 7;
      }
      if ((((&DAT_1809ec5d8)[lVar1] != '\0') &&
          (*(longlong *)((longlong)&DAT_1809ec5c8 + lVar1) == *param_1)) &&
         ((*(int *)((longlong)&DAT_1809ec5d0 + lVar1) == (int)param_1[1] &&
          (*(int *)((longlong)&DAT_1809ec5c4 + lVar1) == 2)))) {
        iVar4 = iVar2 + 8;
      }
      if (((((&DAT_1809ec658)[lVar1] != '\0') &&
           (*(longlong *)((longlong)&DAT_1809ec648 + lVar1) == *param_1)) &&
          (*(int *)((longlong)&DAT_1809ec650 + lVar1) == (int)param_1[1])) &&
         (*(int *)((longlong)&DAT_1809ec644 + lVar1) == 2)) {
        iVar4 = iVar2 + 9;
      }
      if ((((&DAT_1809ec6d8)[lVar1] != '\0') &&
          (*(longlong *)((longlong)&DAT_1809ec6c8 + lVar1) == *param_1)) &&
         ((*(int *)((longlong)&DAT_1809ec6d0 + lVar1) == (int)param_1[1] &&
          (*(int *)((longlong)&DAT_1809ec6c4 + lVar1) == 2)))) {
        iVar4 = iVar2 + 10;
      }
      if ((((&DAT_1809ec758)[lVar1] != '\0') &&
          (*(longlong *)((longlong)&DAT_1809ec748 + lVar1) == *param_1)) &&
         ((*(int *)((longlong)&DAT_1809ec750 + lVar1) == (int)param_1[1] &&
          (*(int *)((longlong)&DAT_1809ec744 + lVar1) == 2)))) {
        iVar4 = iVar2 + 0xb;
      }
      if (((((&DAT_1809ec7d8)[lVar1] != '\0') &&
           (*(longlong *)((longlong)&DAT_1809ec7c8 + lVar1) == *param_1)) &&
          (*(int *)((longlong)&DAT_1809ec7d0 + lVar1) == (int)param_1[1])) &&
         (*(int *)((longlong)&DAT_1809ec7c4 + lVar1) == 2)) {
        iVar4 = iVar2 + 0xc;
      }
      if ((((&DAT_1809ec858)[lVar1] != '\0') &&
          (*(longlong *)((longlong)&DAT_1809ec848 + lVar1) == *param_1)) &&
         ((*(int *)((longlong)&DAT_1809ec850 + lVar1) == (int)param_1[1] &&
          (*(int *)((longlong)&DAT_1809ec844 + lVar1) == 2)))) {
        iVar4 = iVar2 + 0xd;
      }
      if ((((&DAT_1809ec8d8)[lVar1] != '\0') &&
          (*(longlong *)((longlong)&DAT_1809ec8c8 + lVar1) == *param_1)) &&
         ((*(int *)((longlong)&DAT_1809ec8d0 + lVar1) == (int)param_1[1] &&
          (*(int *)((longlong)&DAT_1809ec8c4 + lVar1) == 2)))) {
        iVar4 = iVar2 + 0xe;
      }
      if (((((&DAT_1809ec958)[lVar1] != '\0') &&
           (*(longlong *)((longlong)&DAT_1809ec948 + lVar1) == *param_1)) &&
          (*(int *)((longlong)&DAT_1809ec950 + lVar1) == (int)param_1[1])) &&
         (*(int *)((longlong)&DAT_1809ec944 + lVar1) == 2)) {
        iVar4 = iVar2 + 0xf;
      }
      uVar3 = uVar3 + 0x10;
      lVar1 = lVar1 + 0x800;
    } while (uVar3 < 0x40);
  }
  return iVar4;
}



/* ===== 1801c4220 FUN_1801c4220 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801c4220(longlong param_1,int param_2,undefined1 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  size_t sVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined1 *puVar11;
  undefined2 *puVar12;
  ulonglong uVar13;
  longlong *unaff_RBX;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  char *pcVar17;
  undefined *puVar18;
  longlong *unaff_R12;
  longlong *unaff_R14;
  undefined8 uStack_140;
  undefined1 auStack_138 [8];
  undefined1 auStack_130 [24];
  longlong local_118 [6];
  char local_e8 [8];
  longlong *local_e0;
  longlong local_d8;
  longlong lStack_d0;
  longlong local_c8;
  ulonglong uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  ulonglong local_a0;
  char local_98 [32];
  ulonglong local_78;
  
  local_78 = DAT_180919500 ^ (ulonglong)auStack_138;
  local_e8[0] = param_3;
  local_e0 = (longlong *)param_4;
  iVar5 = FUN_1801c3e90();
  lStack_d0 = 0;
  local_c8 = 0;
  uStack_c0 = 0xf;
  local_d8 = 0;
  if (iVar5 == -1) {
    local_98[0] = '\0';
    local_98[1] = '\0';
    local_98[2] = '\0';
    local_98[3] = '\0';
    local_98[4] = '\0';
    local_98[5] = '\0';
    local_98[6] = '\0';
    local_98[7] = '\0';
    local_98[8] = '\0';
    local_98[9] = '\0';
    local_98[10] = '\0';
    local_98[0xb] = '\0';
    local_98[0xc] = '\0';
    local_98[0xd] = '\0';
    local_98[0xe] = '\0';
    local_98[0xf] = '\0';
    local_98[0x10] = '\0';
    local_98[0x11] = '\0';
    local_98[0x12] = '\0';
    local_98[0x13] = '\0';
    local_98[0x14] = '\0';
    local_98[0x15] = '\0';
    local_98[0x16] = '\0';
    local_98[0x17] = '\0';
    local_98[0x18] = '\0';
    local_98[0x19] = '\0';
    local_98[0x1a] = '\0';
    local_98[0x1b] = '\0';
    local_98[0x1c] = '\0';
    local_98[0x1d] = '\0';
    local_98[0x1e] = '\0';
    local_98[0x1f] = '\0';
    if (*(int *)(param_1 + 8) == 1) {
      puVar18 = &DAT_1806d2870;
      if (*(float *)(param_1 + 0x30) != 0.0) {
        puVar18 = &DAT_1806d286c;
      }
      snprintf(local_98,0x20,&DAT_1806d3198,puVar18);
    }
    else {
      snprintf(local_98,0x20,&DAT_1806f8ec4,(double)*(float *)(param_1 + 0x30));
    }
    uStack_b0 = 0;
    local_a8 = 5;
    local_a0 = 0xf;
    local_b8 = (ulonglong)CONCAT14(s_base_1806f8eb4[4],s_base_1806f8eb4._0_4_);
    sVar6 = strlen(local_98);
    plVar7 = (longlong *)FUN_1800134a0(&local_b8,local_98,sVar6);
    plVar10 = (longlong *)*plVar7;
    lVar3 = plVar7[1];
    lVar4 = plVar7[2];
    uVar13 = plVar7[3];
    plVar7[2] = 0;
    plVar7[3] = 0xf;
    *(undefined1 *)plVar7 = 0;
    if (uStack_c0 < 0x10) {
LAB_1801c4410:
      puVar14 = auStack_138;
      local_d8 = (longlong)plVar10;
      lStack_d0 = lVar3;
      local_c8 = lVar4;
      uStack_c0 = uVar13;
      if (0xf < local_a0) {
        puVar11 = (undefined1 *)(local_a0 + 1);
        uVar13 = local_b8;
        if ((undefined1 *)0xfff < puVar11) {
          uVar13 = *(ulonglong *)(local_b8 - 8);
          if (0x1f < (local_b8 - uVar13) - 8) goto LAB_1801c4496;
          puVar11 = (undefined1 *)(local_a0 + 0x28);
        }
        thunk_FUN_1803d64e0(uVar13,puVar11);
      }
      goto LAB_1801c444f;
    }
    puVar11 = (undefined1 *)(uStack_c0 + 1);
    plVar7 = (longlong *)local_d8;
    if (puVar11 < (undefined1 *)0x1000) {
LAB_1801c440b:
      thunk_FUN_1803d64e0(plVar7,puVar11);
      goto LAB_1801c4410;
    }
    plVar7 = *(longlong **)(local_d8 + -8);
    if ((ulonglong)(local_d8 + (-8 - (longlong)plVar7)) < 0x20) {
      puVar11 = (undefined1 *)(uStack_c0 + 0x28);
      goto LAB_1801c440b;
    }
    pcVar2 = (code *)swi(0x29);
    (*pcVar2)(5);
    puVar14 = auStack_130;
LAB_1801c4496:
    pcVar2 = (code *)swi(0x29);
    (*pcVar2)(5);
    puVar15 = puVar14 + 8;
  }
  else {
    unaff_RBX = (longlong *)FUN_1801c3d00(local_98,iVar5,*(int *)(param_1 + 8));
    puVar14 = auStack_138;
    if (&local_d8 != unaff_RBX) {
      if (0xf < uStack_c0) {
        puVar11 = (undefined1 *)(uStack_c0 + 1);
        plVar10 = (longlong *)local_d8;
        if ((undefined1 *)0xfff < puVar11) {
          plVar10 = *(longlong **)(local_d8 + -8);
          if (0x1f < (ulonglong)(local_d8 + (-8 - (longlong)plVar10))) goto LAB_1801c4496;
          puVar11 = (undefined1 *)(uStack_c0 + 0x28);
        }
        thunk_FUN_1803d64e0(plVar10,puVar11);
      }
      local_d8 = *unaff_RBX;
      lStack_d0 = unaff_RBX[1];
      local_c8 = unaff_RBX[2];
      uStack_c0 = unaff_RBX[3];
      unaff_RBX[2] = 0;
      unaff_RBX[3] = 0xf;
      *(undefined1 *)unaff_RBX = 0;
    }
    FUN_18000f890(local_98);
LAB_1801c444f:
    puVar15 = auStack_138;
    puVar16 = auStack_138;
    unaff_RBX = (longlong *)((longlong)param_2 * 0xe4);
    puVar11 = &DAT_18091a190;
    unaff_R12 = unaff_RBX + 0x3012baa6;
    unaff_R14 = &local_d8;
    if (0xf < uStack_c0) {
      unaff_R14 = (longlong *)local_d8;
    }
    if (*(int *)((longlong)unaff_RBX + 0x18095d594) == 1) {
      pcVar17 = "toggle";
      goto LAB_1801c44ad;
    }
    if (*(int *)((longlong)unaff_RBX + 0x18095d594) != 2) {
      pcVar17 = "hold";
      puVar16 = auStack_138;
      goto LAB_1801c44ad;
    }
  }
  pcVar17 = "always";
  puVar16 = puVar15;
LAB_1801c44ad:
  uVar1 = *(undefined4 *)((longlong)unaff_RBX + (longlong)(puVar11 + 0x43400));
  *(undefined8 *)(puVar16 + -8) = 0x1801c44bd;
  puVar8 = (undefined8 *)FUN_1801c6760(&local_b8,uVar1);
  if (0xf < (ulonglong)puVar8[3]) {
    puVar8 = (undefined8 *)*puVar8;
  }
  uVar1 = *(undefined4 *)(param_1 + 8);
  *(undefined8 *)(puVar16 + -8) = 0x1801c44da;
  puVar9 = (undefined8 *)FUN_1801c3d00(local_98,param_2,uVar1);
  if (0xf < (ulonglong)puVar9[3]) {
    puVar9 = (undefined8 *)*puVar9;
  }
  puVar11 = &DAT_18095d5a0;
  if ((char)unaff_RBX[0x3012bab4] == '\0') {
    puVar11 = &DAT_18095d530;
  }
  puVar12 = &DAT_1806eb0d8;
  if (puVar16[0x50] != '\0') {
    puVar12 = (undefined2 *)&DAT_1806f8ebc;
  }
  *(longlong **)(puVar16 + 0x40) = unaff_R14;
  *(longlong **)(puVar16 + 0x38) = unaff_R12;
  *(undefined8 *)(puVar16 + 0x30) = *(undefined8 *)(puVar16 + 0x58);
  *(char **)(puVar16 + 0x28) = pcVar17;
  *(undefined8 **)(puVar16 + 0x20) = puVar8;
  *(undefined8 *)(puVar16 + -8) = 0x1801c454c;
  FUN_1802b2560("[binds] %s %s = %s (%s, %s%s) -> %s now %s",puVar12,puVar11 + (longlong)unaff_RBX,
                puVar9);
  *(undefined8 *)(puVar16 + -8) = 0x1801c4556;
  FUN_18000f890(local_98);
  *(undefined8 *)(puVar16 + -8) = 0x1801c4560;
  FUN_18000f890(&local_b8);
  if (0xf < uStack_c0) {
    uVar13 = uStack_c0 + 1;
    plVar10 = (longlong *)local_d8;
    if (0xfff < uVar13) {
      plVar10 = *(longlong **)(local_d8 + -8);
      if (0x1f < (ulonglong)(local_d8 + (-8 - (longlong)plVar10))) {
        pcVar2 = (code *)swi(0x29);
        (*pcVar2)(5);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar13 = uStack_c0 + 0x28;
    }
    *(undefined8 *)(puVar16 + -8) = 0x1801c4598;
    thunk_FUN_1803d64e0(plVar10,uVar13);
  }
  *(undefined8 *)(puVar16 + -8) = 0x1801c45a4;
  return;
}



/* ===== 1801c45d0 FUN_1801c45d0 ===== */

ulonglong FUN_1801c45d0(ulonglong *param_1)

{
  undefined1 uVar1;
  int iVar2;
  float *pfVar3;
  float fVar4;
  int iVar5;
  ulonglong uVar6;
  uint7 uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  int *piVar11;
  bool bVar12;
  float fVar13;
  float fVar14;
  
  fVar4 = DAT_1808ac34c;
  pfVar3 = (float *)*param_1;
  fVar14 = 0.0;
  if (pfVar3 == (float *)0x0) {
LAB_1801c465b:
    fVar13 = 0.0;
  }
  else {
    iVar5 = (int)param_1[1];
    if (iVar5 == 1) {
      if (*(char *)pfVar3 == '\0') goto LAB_1801c465b;
      fVar13 = DAT_1808ac34c;
    }
    else if (iVar5 == 2) {
      fVar13 = (float)(int)*pfVar3;
    }
    else if (iVar5 == 3) {
      fVar13 = *pfVar3;
    }
    else {
      if (iVar5 != 4) goto LAB_1801c465b;
      uVar9 = 0;
      uVar10 = 0;
      if (0 < *(int *)((longlong)param_1 + 0xc)) {
        do {
          uVar8 = (uint)uVar10;
          if (0x17 < uVar8) break;
          if (*(char *)((longlong)pfVar3 + uVar10) != '\0') {
            uVar9 = uVar9 | 1 << (uVar8 & 0x1f);
          }
          uVar10 = (ulonglong)(uVar8 + 1);
        } while ((int)(uVar8 + 1) < *(int *)((longlong)param_1 + 0xc));
      }
      fVar13 = (float)(int)uVar9;
    }
  }
  uVar10 = param_1[7];
  if (((char)uVar10 == '\0') || (fVar13 != *(float *)((longlong)param_1 + 0x34))) {
    *(float *)(param_1 + 6) = fVar13;
  }
  uVar6 = FUN_1801c3e90(param_1);
  iVar5 = (int)uVar6;
  if (*(char *)((longlong)param_1 + 0x41) == '\0') {
    if (iVar5 == -1) {
      if ((char)uVar10 != '\0') {
        uVar6 = FUN_1801c3c60(param_1,(int)param_1[6]);
        *(undefined1 *)(param_1 + 7) = 0;
      }
      goto LAB_1801c47ec;
    }
    if ((int)param_1[1] == 1) {
      if ((&DAT_18095d598)[(longlong)iVar5 * 0xe4] == '\0') {
        fVar13 = 0.0;
      }
      else {
        fVar13 = fVar4;
      }
    }
    else {
      fVar13 = (float)(&DAT_18095d59c)[(longlong)iVar5 * 0x39];
    }
    uVar6 = FUN_1801c3c60(param_1,fVar13);
    piVar11 = (int *)*param_1;
    if (piVar11 != (int *)0x0) {
      iVar2 = (int)param_1[1];
      if (iVar2 == 1) goto LAB_1801c47c3;
      if (iVar2 == 2) goto LAB_1801c47b0;
      if (iVar2 == 3) goto LAB_1801c47a0;
      if (iVar2 == 4) {
        uVar9 = 0;
        uVar10 = 0;
        if (0 < *(int *)((longlong)param_1 + 0xc)) {
          do {
            uVar8 = (uint)uVar10;
            if (0x17 < uVar8) break;
            if (*(char *)((longlong)piVar11 + uVar10) != '\0') {
              uVar9 = uVar9 | 1 << (uVar8 & 0x1f);
            }
            uVar10 = (ulonglong)(uVar8 + 1);
          } while ((int)(uVar8 + 1) < *(int *)((longlong)param_1 + 0xc));
        }
        goto LAB_1801c478e;
      }
    }
  }
  else {
    uVar6 = FUN_1801c3c60(param_1,*(undefined4 *)((longlong)param_1 + 0x44));
    piVar11 = (int *)*param_1;
    if (piVar11 != (int *)0x0) {
      iVar2 = (int)param_1[1];
      if (iVar2 == 1) {
LAB_1801c47c3:
        if ((char)*piVar11 != '\0') {
          fVar14 = fVar4;
        }
      }
      else {
        if (iVar2 == 2) {
LAB_1801c47b0:
          iVar2 = *piVar11;
          *(undefined1 *)(param_1 + 7) = 1;
          *(float *)((longlong)param_1 + 0x34) = (float)iVar2;
          goto LAB_1801c47ec;
        }
        if (iVar2 == 3) {
LAB_1801c47a0:
          *(int *)((longlong)param_1 + 0x34) = *piVar11;
          *(undefined1 *)(param_1 + 7) = 1;
          goto LAB_1801c47ec;
        }
        if (iVar2 == 4) {
          uVar9 = 0;
          uVar10 = 0;
          if (0 < *(int *)((longlong)param_1 + 0xc)) {
            do {
              uVar8 = (uint)uVar10;
              if (0x17 < uVar8) goto LAB_1801c478e;
              if (*(char *)((longlong)piVar11 + uVar10) != '\0') {
                uVar9 = uVar9 | 1 << (uVar8 & 0x1f);
              }
              uVar10 = (ulonglong)(uVar8 + 1);
            } while ((int)(uVar8 + 1) < *(int *)((longlong)param_1 + 0xc));
            *(undefined1 *)(param_1 + 7) = 1;
            *(float *)((longlong)param_1 + 0x34) = (float)(int)uVar9;
            goto LAB_1801c47ec;
          }
LAB_1801c478e:
          *(undefined1 *)(param_1 + 7) = 1;
          *(float *)((longlong)param_1 + 0x34) = (float)(int)uVar9;
          goto LAB_1801c47ec;
        }
      }
    }
  }
  *(float *)((longlong)param_1 + 0x34) = fVar14;
  *(undefined1 *)(param_1 + 7) = 1;
LAB_1801c47ec:
  *(int *)((longlong)param_1 + 0x3c) = iVar5;
  uVar10 = 0;
  do {
    if (((&DAT_1809ec1d8)[uVar10 * 0x80] != '\0') &&
       (uVar6 = *param_1, (&DAT_1809ec1c8)[uVar10 * 0x10] == uVar6)) {
      uVar9 = (uint)param_1[1];
      uVar6 = (ulonglong)uVar9;
      if ((&DAT_1809ec1d0)[uVar10 * 0x20] == uVar9) {
        iVar5 = (int)uVar10;
        if ((int)param_1[2] == iVar5) {
          uVar7 = (uint7)(uint3)(param_1[1] >> 8);
          bVar12 = true;
        }
        else {
          uVar6 = thunk_FUN_1804e6e50(param_1[3],param_1[4],uVar10 & 0xffffffff);
          if (uVar6 == param_1[4]) {
            bVar12 = (&DAT_1809ec1c4)[(longlong)iVar5 * 0x20] == 2;
            uVar7 = (uint7)((ulonglong)((longlong)iVar5 * 0x80) >> 8);
          }
          else {
            uVar7 = (uint7)(uVar6 >> 8);
            bVar12 = true;
          }
        }
        LOCK();
        uVar1 = (&DAT_180cd1320)[uVar10];
        (&DAT_180cd1320)[uVar10] = bVar12;
        uVar6 = CONCAT71(uVar7,uVar1);
        UNLOCK();
      }
    }
    uVar10 = uVar10 + 1;
  } while (uVar10 < 0x40);
  return uVar6;
}



/* ===== 1801c4890 FUN_1801c4890 ===== */

undefined4 FUN_1801c4890(undefined8 *param_1)

{
  char cVar1;
  int iVar2;
  char *_Str1;
  bool bVar3;
  
  _Str1 = (char *)FUN_1800fbe90(*param_1);
  if (_Str1 != (char *)0x0) {
    if (0xf < *(ulonglong *)(_Str1 + 0x18)) {
      _Str1 = *(char **)_Str1;
    }
    iVar2 = strcmp(_Str1,"antiaim.leg_movement");
    if (iVar2 == 0) {
      bVar3 = DAT_18095cd7d == '\0';
    }
    else {
      iVar2 = strcmp(_Str1,"antiaim.pitch_custom");
      if (iVar2 == 0) {
        bVar3 = DAT_180920fb0 == 5;
      }
      else {
        iVar2 = strcmp(_Str1,"antiaim.avoid_backstab");
        if ((((iVar2 != 0) && (iVar2 = strcmp(_Str1,"antiaim.auto_adjust"), iVar2 != 0)) &&
            (iVar2 = strcmp(_Str1,"antiaim.yaw_offset"), iVar2 != 0)) &&
           ((iVar2 = strcmp(_Str1,"antiaim.jitter"), iVar2 != 0 &&
            (iVar2 = strcmp(_Str1,"antiaim.spin"), iVar2 != 0)))) {
          iVar2 = strcmp(_Str1,"antiaim.jitter_type");
          if (((iVar2 == 0) ||
              ((iVar2 = strcmp(_Str1,"antiaim.jitter_disable_air"), iVar2 == 0 ||
               (iVar2 = strcmp(_Str1,"antiaim.jitter_disable_override"), iVar2 == 0)))) ||
             (iVar2 = strcmp(_Str1,"antiaim.jitter_range"), iVar2 == 0)) {
            if (DAT_180920fb8 == 0) {
              return 0;
            }
            cVar1 = DAT_180920fdd;
          }
          else {
            iVar2 = strcmp(_Str1,"antiaim.spin_speed");
            if (iVar2 != 0) {
              return 1;
            }
            cVar1 = DAT_180920fc0;
            if (DAT_180920fb8 == 0) {
              return 0;
            }
          }
          if (cVar1 == '\0') {
            return 0;
          }
          return 1;
        }
        bVar3 = DAT_180920fb8 != 0;
      }
    }
    if (!bVar3) {
      return 0;
    }
  }
  return 1;
}



/* ===== 1801c4a10 FUN_1801c4a10 ===== */

void FUN_1801c4a10(undefined8 *param_1,uint param_2,longlong param_3)

{
  uint uVar1;
  longlong lVar2;
  uint *puVar3;
  uint *puVar4;
  undefined8 uVar5;
  uint local_res10 [2];
  
  if (*(int *)(param_3 + 0x60) == *(int *)*param_1) {
    local_res10[0] = param_2;
    if (*(int *)(param_3 + 100) == 1) {
      if (*(char *)param_1[1] != '\0') {
        lVar2 = param_1[2];
        uVar1 = *(uint *)(lVar2 + 0x10);
        if (uVar1 == param_2) {
          if (*(int *)param_1[3] != 0x101) {
            *(undefined4 *)(lVar2 + 0x10) = 0xffffffff;
            *(undefined1 *)param_1[4] = 1;
            FUN_1801c4220(param_1[2],param_2,0,&DAT_18058b643);
            return;
          }
        }
        else if (*(int *)param_1[3] != 0x100) {
          *(uint *)(lVar2 + 0x10) = param_2;
          *(undefined1 *)param_1[4] = 1;
          if (uVar1 != 0xffffffff) {
            FUN_1801c4220(param_1[2],uVar1,0,", replaced");
          }
          FUN_1801c4220(param_1[2],param_2,1,&DAT_18058b643);
          return;
        }
      }
    }
    else if (*(int *)(param_3 + 100) == 0) {
      puVar4 = (uint *)thunk_FUN_1804e6e50(*(undefined8 *)(param_1[2] + 0x18),
                                           *(undefined8 *)(param_1[2] + 0x20),param_2);
      lVar2 = param_1[2];
      puVar3 = *(uint **)(lVar2 + 0x20);
      if (puVar4 == puVar3) {
        if (*(char *)param_1[6] == '\0') {
          return;
        }
        if (puVar3 == *(uint **)(lVar2 + 0x28)) {
          FUN_18006a410(lVar2 + 0x18,puVar3,local_res10);
        }
        else {
          *puVar3 = param_2;
          *(longlong *)(lVar2 + 0x20) = *(longlong *)(lVar2 + 0x20) + 4;
        }
        uVar5 = 1;
      }
      else {
        if (*(char *)param_1[5] != '\0') {
          return;
        }
        FUN_180540530(puVar4,puVar4 + 1,(longlong)puVar3 - (longlong)(puVar4 + 1));
        *(longlong *)(lVar2 + 0x20) = *(longlong *)(lVar2 + 0x20) + -4;
        uVar5 = 0;
      }
      *(undefined1 *)param_1[4] = 1;
      FUN_1801c4220(param_1[2],param_2,uVar5,&DAT_18058b643);
    }
  }
  return;
}



