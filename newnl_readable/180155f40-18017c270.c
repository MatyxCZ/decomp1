/* ===== 180155f40 FUN_180155f40 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180155f40(longlong *param_1,undefined8 param_2,longlong param_3)

{
  uint uVar1;
  size_t sVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  longlong *plVar8;
  int *piVar9;
  longlong *plVar10;
  undefined1 auStack_98 [32];
  undefined1 local_78 [32];
  undefined1 local_58 [32];
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStack_98;
  FUN_1801a8e10(param_1,param_2,param_3 + 0x264);
  uVar5 = FUN_180073a70(local_78,param_2,"world.modulation");
  FUN_1800f4660(param_1,uVar5,param_3 + 4);
  FUN_18000f890(local_78);
  uVar5 = FUN_180073a70(local_78,param_2,"world.modulation_color");
  FUN_180154fa0(param_1,uVar5,param_3 + 8);
  FUN_18000f890(local_78);
  uVar5 = FUN_180073a70(local_78,param_2,"world.gamma");
  FUN_1800f4660(param_1,uVar5,param_3 + 0x18);
  FUN_18000f890(local_78);
  uVar5 = FUN_180073a70(local_78,param_2,"world.gamma_value");
  FUN_1800f4840(param_1,uVar5,param_3 + 0x1c);
  FUN_18000f890(local_78);
  uVar5 = FUN_180073a70(local_78,param_2,"world.bloom");
  FUN_1800f4660(param_1,uVar5,param_3 + 0x20);
  FUN_18000f890(local_78);
  uVar5 = FUN_180073a70(local_78,param_2,"world.bloom_amount");
  FUN_1800f4840(param_1,uVar5,param_3 + 0x24);
  FUN_18000f890(local_78);
  uVar5 = FUN_180073a70(local_78,param_2,"world.wetness");
  FUN_1800f4660(param_1,uVar5,param_3 + 0x28);
  FUN_18000f890(local_78);
  uVar5 = FUN_180073a70(local_78,param_2,"world.wetness_density");
  FUN_1800f4840(param_1,uVar5,param_3 + 0x2c);
  FUN_18000f890(local_78);
  uVar5 = FUN_180073a70(local_78,param_2,"world.wetness_speed");
  FUN_1800f4840(param_1,uVar5,param_3 + 0x30);
  FUN_18000f890(local_78);
  uVar5 = FUN_180073a70(local_78,param_2,"world.wind");
  FUN_1800f4660(param_1,uVar5,param_3 + 0x34);
  FUN_18000f890(local_78);
  uVar5 = FUN_180073a70(local_78,param_2,"world.wind_strength");
  FUN_1800f4840(param_1,uVar5,param_3 + 0x38);
  FUN_18000f890(local_78);
  uVar5 = FUN_180073a70(local_78,param_2,"world.wind_direction");
  FUN_1800f4840(param_1,uVar5,param_3 + 0x3c);
  FUN_18000f890(local_78);
  uVar5 = FUN_180073a70(local_78,param_2,"world.dof");
  FUN_1800f4660(param_1,uVar5,param_3 + 0x40);
  FUN_18000f890(local_78);
  uVar5 = FUN_180073a70(local_78,param_2,"world.fog");
  FUN_1800f4660(param_1,uVar5,param_3 + 0x54);
  FUN_18000f890(local_78);
  uVar5 = FUN_180073a70(local_78,param_2,"world.fog_color");
  FUN_180154fa0(param_1,uVar5,param_3 + 0x58);
  FUN_18000f890(local_78);
  uVar5 = FUN_180073a70(local_78,param_2,"world.fog_density");
  FUN_1800f4840(param_1,uVar5,param_3 + 0x68);
  FUN_18000f890(local_78);
  uVar5 = FUN_180073a70(local_78,param_2,"world.fog_distance");
  FUN_1800f4840(param_1,uVar5,param_3 + 0x6c);
  FUN_18000f890(local_78);
  uVar5 = FUN_180073a70(local_78,param_2,"world.fog_falloff");
  FUN_1800f4840(param_1,uVar5,param_3 + 0x70);
  FUN_18000f890(local_78);
  uVar5 = FUN_180073a70(local_78,param_2,"world.fog_glow");
  FUN_1800f4840(param_1,uVar5,param_3 + 0x74);
  FUN_18000f890(local_78);
  uVar5 = FUN_180073a70(local_78,param_2,"world.dof_near_blurry");
  FUN_1800f4840(param_1,uVar5,param_3 + 0x44);
  FUN_18000f890(local_78);
  uVar5 = FUN_180073a70(local_78,param_2,"world.dof_near_crisp");
  FUN_1800f4840(param_1,uVar5,param_3 + 0x48);
  FUN_18000f890(local_78);
  uVar5 = FUN_180073a70(local_78,param_2,"world.dof_far_crisp");
  FUN_1800f4840(param_1,uVar5,param_3 + 0x4c);
  FUN_18000f890(local_78);
  uVar5 = FUN_180073a70(local_78,param_2,"world.dof_far_blurry");
  FUN_1800f4840(param_1,uVar5,param_3 + 0x50);
  FUN_18000f890(local_78);
  uVar5 = FUN_180073a70(local_78,param_2,"screen.rain");
  FUN_1800f4660(param_1,uVar5,param_3 + 0x20c);
  FUN_18000f890(local_78);
  uVar5 = FUN_180073a70(local_78,param_2,"screen.rain_amount");
  FUN_1800f4840(param_1,uVar5,param_3 + 0x210);
  FUN_18000f890(local_78);
  uVar5 = FUN_180073a70(local_78,param_2,"screen.rain_size");
  FUN_1800f4840(param_1,uVar5,param_3 + 0x214);
  FUN_18000f890(local_78);
  uVar5 = FUN_180073a70(local_78,param_2,"screen.rain_speed");
  FUN_1800f4840(param_1,uVar5,param_3 + 0x218);
  FUN_18000f890(local_78);
  uVar5 = FUN_180073a70(local_78,param_2,"screen.rain_fog");
  FUN_1800f4840(param_1,uVar5,param_3 + 0x21c);
  FUN_18000f890(local_78);
  uVar5 = FUN_180073a70(local_78,param_2,"screen.rain_blur");
  FUN_1800f4840(param_1,uVar5,param_3 + 0x220);
  FUN_18000f890(local_78);
  uVar5 = FUN_180073a70(local_78,param_2,"screen.chromatic");
  FUN_1800f4660(param_1,uVar5,param_3 + 0x224);
  FUN_18000f890(local_78);
  uVar5 = FUN_180073a70(local_78,param_2,"screen.chromatic_amount");
  FUN_1800f4840(param_1,uVar5,param_3 + 0x228);
  FUN_18000f890(local_78);
  uVar5 = FUN_180073a70(local_78,param_2,"screen.vignette");
  FUN_1800f4660(param_1,uVar5,param_3 + 0x22c);
  FUN_18000f890(local_78);
  uVar5 = FUN_180073a70(local_78,param_2,"screen.vignette_amount");
  FUN_1800f4840(param_1,uVar5,param_3 + 0x230);
  FUN_18000f890(local_78);
  uVar5 = FUN_180073a70(local_78,param_2,"sky.mode");
  FUN_1800f4760(param_1,uVar5,param_3 + 0x78);
  FUN_18000f890(local_78);
  puVar6 = (undefined8 *)FUN_180073a70(local_78,param_2,"sky.texture");
  if ((char)param_1[3] == '\0') {
    plVar10 = (longlong *)*param_1;
    plVar8 = param_1;
    if (0xf < (ulonglong)plVar10[3]) {
      plVar8 = plVar10;
    }
    sVar2 = puVar6[2];
    if (0xf < (ulonglong)puVar6[3]) {
      puVar6 = (undefined8 *)*puVar6;
    }
    if (sVar2 == plVar10[2]) {
      if (sVar2 != 0) {
        iVar4 = memcmp(puVar6,(void *)*plVar8,sVar2);
        if (iVar4 != 0) goto LAB_18015660a;
      }
      *(undefined1 *)(param_1 + 3) = 1;
      if ((undefined4 *)param_1[1] == (undefined4 *)0x0) {
        piVar9 = (int *)param_1[2];
        if (*piVar9 != 6) goto LAB_18015660a;
        plVar10 = (longlong *)(piVar9 + 0x12);
        if (0xf < *(ulonglong *)(piVar9 + 0x18)) {
          plVar10 = (longlong *)*plVar10;
        }
        snprintf(param_3 + 0x7c,0xa0,&DAT_1806d3198,plVar10);
      }
      else {
        *(undefined4 *)param_1[1] = 6;
        lVar3 = param_1[1];
        uVar5 = FUN_180512ae0(param_3 + 0x7c,0xa0);
        FUN_180029840(lVar3 + 0x48,param_3 + 0x7c,uVar5);
      }
      *(undefined1 *)((longlong)param_1 + 0x19) = 1;
    }
  }
LAB_18015660a:
  FUN_18000f890(local_78);
  uVar5 = FUN_180073a70(local_58,param_2,"sky.shader");
  FUN_180154ed0(param_1,uVar5,param_3 + 0x11c);
  FUN_18000f890(local_58);
  puVar6 = (undefined8 *)FUN_180073a70(local_58,param_2,"sky.params");
  if ((char)param_1[3] == '\0') {
    plVar10 = (longlong *)*param_1;
    plVar8 = param_1;
    if (0xf < (ulonglong)plVar10[3]) {
      plVar8 = plVar10;
    }
    sVar2 = puVar6[2];
    if (0xf < (ulonglong)puVar6[3]) {
      puVar6 = (undefined8 *)*puVar6;
    }
    if (sVar2 == plVar10[2]) {
      if (sVar2 != 0) {
        iVar4 = memcmp(puVar6,(void *)*plVar8,sVar2);
        if (iVar4 != 0) goto LAB_180156729;
      }
      *(undefined1 *)(param_1 + 3) = 1;
      if ((undefined4 *)param_1[1] == (undefined4 *)0x0) {
        piVar9 = (int *)param_1[2];
        if (*piVar9 != 4) goto LAB_180156729;
        uVar7 = 0;
        do {
          if ((ulonglong)(*(longlong *)(piVar9 + 6) - *(longlong *)(piVar9 + 4) >> 2) <= uVar7)
          break;
          uVar1 = *(uint *)(*(longlong *)(piVar9 + 4) + uVar7 * 4);
          if ((uVar1 & 0x7f800000) != 0x7f800000) {
            *(uint *)(param_3 + 0x15c + uVar7 * 4) = uVar1;
            piVar9 = (int *)param_1[2];
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 < 8);
      }
      else {
        *(undefined4 *)param_1[1] = 4;
        FUN_180068ca0(param_1[1] + 0x10,param_3 + 0x15c,8);
      }
      *(undefined1 *)((longlong)param_1 + 0x19) = 1;
    }
  }
LAB_180156729:
  FUN_18000f890(local_58);
  uVar5 = FUN_180073a70(local_58,param_2,"sky.primary");
  FUN_180154fa0(param_1,uVar5,param_3 + 0x17c);
  FUN_18000f890(local_58);
  uVar5 = FUN_180073a70(local_58,param_2,"sky.secondary");
  FUN_180154fa0(param_1,uVar5,param_3 + 0x18c);
  FUN_18000f890(local_58);
  uVar5 = FUN_180073a70(local_58,param_2,"sky.exposure");
  FUN_1800f4840(param_1,uVar5,param_3 + 0x19c);
  FUN_18000f890(local_58);
  uVar5 = FUN_180073a70(local_58,param_2,"sky.update_rate");
  FUN_1800f4840(param_1,uVar5,param_3 + 0x1a0);
  FUN_18000f890(local_58);
  uVar5 = FUN_180073a70(local_58,param_2,"sky.resolution");
  FUN_1800f4760(param_1,uVar5,param_3 + 0x1a4);
  FUN_18000f890(local_58);
  uVar5 = FUN_180073a70(local_58,param_2,"sky.supersample");
  FUN_1800f4660(param_1,uVar5,param_3 + 0x1a8);
  FUN_18000f890(local_58);
  uVar5 = FUN_180073a70(local_58,param_2,"sky.recolor");
  FUN_1800f4660(param_1,uVar5,param_3 + 0x1a9);
  FUN_18000f890(local_58);
  uVar5 = FUN_180073a70(local_58,param_2,"sky.recolor_strength");
  FUN_1800f4840(param_1,uVar5,param_3 + 0x1ac);
  FUN_18000f890(local_58);
  uVar5 = FUN_180073a70(local_58,param_2,"sky.sky_tint");
  FUN_1800f4660(param_1,uVar5,param_3 + 0x1b0);
  FUN_18000f890(local_58);
  uVar5 = FUN_180073a70(local_58,param_2,"sky.sky_color");
  FUN_180154fa0(param_1,uVar5,param_3 + 0x1b4);
  FUN_18000f890(local_58);
  uVar5 = FUN_180073a70(local_58,param_2,"sky.brightness");
  FUN_1800f4840(param_1,uVar5,param_3 + 0x208);
  FUN_18000f890(local_58);
  uVar5 = FUN_180073a70(local_58,param_2,"sky.cloud_tint");
  FUN_1800f4660(param_1,uVar5,param_3 + 0x1c4);
  FUN_18000f890(local_58);
  uVar5 = FUN_180073a70(local_58,param_2,"sky.cloud_color");
  FUN_180154fa0(param_1,uVar5,param_3 + 0x1c8);
  FUN_18000f890(local_58);
  uVar5 = FUN_180073a70(local_58,param_2,"sky.sun_tint");
  FUN_1800f4660(param_1,uVar5,param_3 + 0x1d8);
  FUN_18000f890(local_58);
  uVar5 = FUN_180073a70(local_58,param_2,"sky.sun_color");
  FUN_180154fa0(param_1,uVar5,param_3 + 0x1dc);
  FUN_18000f890(local_58);
  uVar5 = FUN_180073a70(local_58,param_2,"sky.lighting");
  FUN_1800f4660(param_1,uVar5,param_3 + 0x1ec);
  FUN_18000f890(local_58);
  uVar5 = FUN_180073a70(local_58,param_2,"sky.lighting_color");
  FUN_180154fa0(param_1,uVar5,param_3 + 0x1f0);
  FUN_18000f890(local_58);
  uVar5 = FUN_180073a70(local_58,param_2,"sky.lighting_intensity");
  FUN_1800f4840(param_1,uVar5,param_3 + 0x200);
  FUN_18000f890(local_58);
  uVar5 = FUN_180073a70(local_58,param_2,"sky.lighting_mode");
  FUN_1800f4760(param_1,uVar5,param_3 + 0x204);
  FUN_18000f890(local_58);
  uVar5 = FUN_180073a70(local_58,param_2,"motion_blur.enabled");
  FUN_1800f4660(param_1,uVar5,param_3 + 0x234);
  FUN_18000f890(local_58);
  uVar5 = FUN_180073a70(local_58,param_2,"motion_blur.strength");
  FUN_1800f4840(param_1,uVar5,param_3 + 0x238);
  FUN_18000f890(local_58);
  uVar5 = FUN_180073a70(local_58,param_2,"weather.enabled");
  FUN_1800f4660(param_1,uVar5,param_3 + 0x23c);
  FUN_18000f890(local_58);
  uVar5 = FUN_180073a70(local_58,param_2,"weather.type");
  FUN_1800f4760(param_1,uVar5,param_3 + 0x240);
  FUN_18000f890(local_58);
  uVar5 = FUN_180073a70(local_58,param_2,"weather.color");
  FUN_180154fa0(param_1,uVar5,param_3 + 0x244);
  FUN_18000f890(local_58);
  uVar5 = FUN_180073a70(local_58,param_2,"weather.density");
  FUN_1800f4840(param_1,uVar5,param_3 + 0x254);
  FUN_18000f890(local_58);
  uVar5 = FUN_180073a70(local_58,param_2,"weather.gravity");
  FUN_1800f4840(param_1,uVar5,param_3 + 600);
  FUN_18000f890(local_58);
  uVar5 = FUN_180073a70(local_58,param_2,"weather.glow");
  FUN_1800f4840(param_1,uVar5,param_3 + 0x25c);
  FUN_18000f890(local_58);
  uVar5 = FUN_180073a70(local_58,param_2,"weather.rain_mist");
  FUN_1800f4660(param_1,uVar5,param_3 + 0x260);
  FUN_18000f890(local_58);
  uVar5 = FUN_180073a70(local_58,param_2,"weather.rain_ripples");
  FUN_1800f4660(param_1,uVar5,param_3 + 0x261);
  FUN_18000f890(local_58);
  return;
}



/* ===== 180156ca0 FUN_180156ca0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180156ca0(undefined8 param_1,undefined8 *param_2,int *param_3)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong *puVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
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
  FUN_1800f4760(param_1,uVar3,param_3);
  FUN_18000f890(&local_a0);
  uVar9 = 1;
  do {
    if (*param_3 <= (int)uVar9) {
      return;
    }
    uVar3 = FUN_18004e4f0(local_60,uVar9);
    if ((ulonglong)param_2[3] < 0x10) {
      puVar10 = param_2;
    }
    else {
      puVar10 = (undefined8 *)*param_2;
    }
    puVar4 = (ulonglong *)FUN_18006b5b0(uVar3,0,puVar10,param_2[2]);
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
      uVar8 = uStack_a8 + 1;
      uVar6 = local_c0;
      if (0xfff < uVar8) {
        uVar6 = *(ulonglong *)(local_c0 - 8);
        if (0x1f < (local_c0 - uVar6) - 8) {
          pcVar1 = (code *)swi(0x29);
          (*pcVar1)(5);
          goto LAB_180156ec8;
        }
        uVar8 = uStack_a8 + 0x28;
      }
      thunk_FUN_1803d64e0(uVar6,uVar8);
    }
    local_b0 = 0;
    uStack_a8 = 0xf;
    local_c0 = local_c0 & 0xffffffffffffff00;
    FUN_18000f890(local_60);
    uVar3 = FUN_180073a70(local_80,&local_a0,&DAT_18058b644);
    FUN_180154ed0(param_1,uVar3,param_3 + uVar9 * 0x52 + 1);
    FUN_18000f890(local_80);
    uVar3 = FUN_180073a70(local_80,&local_a0,"weapons");
    FUN_1800f4910(param_1,uVar3,param_3 + uVar9 * 0x52 + 0x11);
    FUN_18000f890(local_80);
    uVar6 = CONCAT44(uStack_84,uStack_88);
    if (0xf < uVar6) {
      uVar8 = uVar6 + 1;
      lVar2 = CONCAT44(uStack_9c,local_a0);
      lVar7 = lVar2;
      if (0xfff < uVar8) {
        lVar7 = *(longlong *)(lVar2 + -8);
        if (0x1f < (lVar2 - lVar7) - 8U) {
LAB_180156ec8:
          pcVar1 = (code *)swi(0x29);
          (*pcVar1)(5);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        uVar8 = uVar6 + 0x28;
      }
      thunk_FUN_1803d64e0(lVar7,uVar8);
    }
    uVar9 = uVar9 + 1;
    if (0x3f < uVar9) {
      return;
    }
  } while( true );
}



/* ===== 180156ed0 FUN_180156ed0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180156ed0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined1 local_48 [32];
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_68;
  uVar1 = FUN_180073a70(local_48,param_2,"hitboxes");
  FUN_1801553c0(param_1,uVar1,param_3);
  FUN_18000f890(local_48);
  uVar1 = FUN_180073a70(local_48,param_2,"extrapolation");
  FUN_1800f4760(param_1,uVar1,param_3 + 8);
  FUN_18000f890(local_48);
  uVar1 = FUN_180073a70(local_48,param_2,"hitchance");
  FUN_1800f4760(param_1,uVar1,param_3 + 0xc);
  FUN_18000f890(local_48);
  uVar1 = FUN_180073a70(local_48,param_2,"force_shot");
  FUN_1800f4660(param_1,uVar1,param_3 + 0x10);
  FUN_18000f890(local_48);
  uVar1 = FUN_180073a70(local_48,param_2,"min_hitchance");
  FUN_1800f4760(param_1,uVar1,param_3 + 0x14);
  FUN_18000f890(local_48);
  uVar1 = FUN_180073a70(local_48,param_2,"min_damage");
  FUN_1800f4760(param_1,uVar1,param_3 + 0x18);
  FUN_18000f890(local_48);
  uVar1 = FUN_180073a70(local_48,param_2,"quick_stop");
  FUN_1800f4660(param_1,uVar1,param_3 + 0x1c);
  FUN_18000f890(local_48);
  uVar1 = FUN_180073a70(local_48,param_2,"quick_stop_options");
  FUN_180154cb0(param_1,uVar1,param_3 + 0x1d);
  FUN_18000f890(local_48);
  uVar1 = FUN_180073a70(local_48,param_2,"quick_scope");
  FUN_1800f4660(param_1,uVar1,param_3 + 0x20);
  FUN_18000f890(local_48);
  return;
}



/* ===== 1801570a0 FUN_1801570a0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801570a0(longlong *param_1,longlong param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  longlong *unaff_RDI;
  ulonglong uVar16;
  undefined1 auStack_c8 [8];
  undefined1 auStack_c0 [24];
  longlong *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  ulonglong local_90;
  undefined1 local_88 [32];
  undefined1 local_68 [32];
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_c8;
  FUN_180013350(&local_a8,"legitbot.enabled");
  FUN_1800f4660(param_1,&local_a8,param_2);
  FUN_18000f890(&local_a8);
  FUN_180013350(&local_a8,"legitbot.groups.");
  FUN_180156ca0(param_1,&local_a8,param_2 + 4);
  FUN_18000f890(&local_a8);
  puVar15 = auStack_c8;
  puVar14 = auStack_c8;
  uVar16 = 0;
  do {
    iVar6 = *(int *)(param_2 + 4);
    if (iVar6 < 1) {
      iVar6 = 1;
    }
    if (iVar6 <= (int)uVar16) break;
    unaff_RDI = (longlong *)(uVar16 * 0x3c);
    uVar8 = FUN_1800ef450(local_68,uVar16 & 0xffffffff);
    uVar8 = FUN_180066ab0(local_88,"legitbot.",uVar8);
    uVar8 = FUN_180042850(&local_a8,uVar8,&DAT_1806e6f24);
    FUN_1801aa4c0(param_1,uVar8,param_2 + 21000 + uVar16 * 100,
                  param_2 + 0x6b08 + (longlong)unaff_RDI);
    FUN_18000f890(&local_a8);
    FUN_18000f890(local_88);
    FUN_18000f890(local_68);
    uVar16 = uVar16 + 1;
  } while (uVar16 < 0x40);
  uStack_a0 = 0;
  local_a8 = (longlong *)FUN_18000fb70(0x20);
  uVar5 = s_legitbot_visualize_1806f74f0._12_4_;
  uVar4 = s_legitbot_visualize_1806f74f0._8_4_;
  uVar3 = s_legitbot_visualize_1806f74f0._4_4_;
  local_98 = 0x12;
  local_90 = 0x1f;
  *(undefined4 *)local_a8 = s_legitbot_visualize_1806f74f0._0_4_;
  *(undefined4 *)((longlong)local_a8 + 4) = uVar3;
  *(undefined4 *)(local_a8 + 1) = uVar4;
  *(undefined4 *)((longlong)local_a8 + 0xc) = uVar5;
  *(undefined2 *)(local_a8 + 2) = s_legitbot_visualize_1806f74f0._16_2_;
  *(undefined1 *)((longlong)local_a8 + 0x12) = 0;
  FUN_1800f4660(param_1,&local_a8,param_2 + 0x7a08);
  if (local_90 < 0x10) {
LAB_180157259:
    uStack_a0 = 0;
    local_a8 = (longlong *)FUN_18000fb70(0x20);
    uVar5 = s_legitbot_visualize_target_1806f7540._12_4_;
    uVar4 = s_legitbot_visualize_target_1806f7540._8_4_;
    uVar3 = s_legitbot_visualize_target_1806f7540._4_4_;
    local_98 = 0x19;
    local_90 = 0x1f;
    *(undefined4 *)local_a8 = s_legitbot_visualize_target_1806f7540._0_4_;
    *(undefined4 *)((longlong)local_a8 + 4) = uVar3;
    *(undefined4 *)(local_a8 + 1) = uVar4;
    *(undefined4 *)((longlong)local_a8 + 0xc) = uVar5;
    uVar5 = s_legitbot_visualize_target_1806f7540._21_4_;
    uVar4 = s_legitbot_visualize_target_1806f7540._17_4_;
    uVar3 = CONCAT13(s_legitbot_visualize_target_1806f7540[0x10],
                     s_legitbot_visualize_target_1806f7540._13_3_);
    *(uint *)((longlong)local_a8 + 9) =
         CONCAT13(s_legitbot_visualize_target_1806f7540[0xc],
                  s_legitbot_visualize_target_1806f7540._9_3_);
    *(undefined4 *)((longlong)local_a8 + 0xd) = uVar3;
    *(undefined4 *)((longlong)local_a8 + 0x11) = uVar4;
    *(undefined4 *)((longlong)local_a8 + 0x15) = uVar5;
    *(char *)((longlong)local_a8 + 0x19) = '\0';
    FUN_1800f4660(param_1,&local_a8,param_2 + 0x7a09);
    FUN_18000f890(&local_a8);
    local_a8 = (longlong *)0x0;
    uStack_a0 = 0;
    unaff_RDI = (longlong *)FUN_18000fb70(0x20);
    local_98 = 0x15;
    local_90 = 0x1f;
    lVar10 = CONCAT35(s_legitbot_target_color_1806f7560._13_3_,
                      s_legitbot_target_color_1806f7560._8_5_);
    *unaff_RDI = s_legitbot_target_color_1806f7560._0_8_;
    unaff_RDI[1] = lVar10;
    *(ulonglong *)((longlong)unaff_RDI + 0xd) =
         CONCAT53(s_legitbot_target_color_1806f7560._16_5_,s_legitbot_target_color_1806f7560._13_3_)
    ;
    *(undefined1 *)((longlong)unaff_RDI + 0x15) = 0;
    local_a8 = unaff_RDI;
    if ((char)param_1[3] == '\0') {
      puVar1 = (undefined8 *)*param_1;
      if ((ulonglong)puVar1[3] < 0x10) {
        puVar12 = puVar1;
      }
      else {
        puVar12 = (undefined8 *)*puVar1;
      }
      if (puVar1[2] == 0x15) {
        iVar6 = memcmp(unaff_RDI,puVar12,0x15);
        if (iVar6 == 0) {
          *(undefined1 *)(param_1 + 3) = 1;
          if ((undefined4 *)param_1[1] == (undefined4 *)0x0) {
            piVar11 = (int *)param_1[2];
            if (*piVar11 != 4) goto LAB_1801573ba;
            uVar16 = 0;
            do {
              if ((ulonglong)(*(longlong *)(piVar11 + 6) - *(longlong *)(piVar11 + 4) >> 2) <=
                  uVar16) break;
              uVar7 = *(uint *)(*(longlong *)(piVar11 + 4) + uVar16 * 4);
              if ((uVar7 & 0x7f800000) != 0x7f800000) {
                *(uint *)(param_2 + 0x7a0c + uVar16 * 4) = uVar7;
                piVar11 = (int *)param_1[2];
              }
              uVar16 = uVar16 + 1;
            } while (uVar16 < 4);
          }
          else {
            *(undefined4 *)param_1[1] = 4;
            FUN_180068ca0(param_1[1] + 0x10,param_2 + 0x7a0c,4);
          }
          *(undefined1 *)((longlong)param_1 + 0x19) = 1;
        }
      }
    }
LAB_1801573ba:
    thunk_FUN_1803d64e0(unaff_RDI,0x20);
    uStack_a0 = 0;
    local_a8 = (longlong *)FUN_18000fb70(0x20);
    uVar5 = s_legitbot_visualize_fov_1806f7510._8_4_;
    uVar4 = s_legitbot_visualize_fov_1806f7510._4_4_;
    local_98 = 0x16;
    local_90 = 0x1f;
    uVar3 = CONCAT22(s_legitbot_visualize_fov_1806f7510._14_2_,
                     s_legitbot_visualize_fov_1806f7510._12_2_);
    *(undefined4 *)local_a8 = s_legitbot_visualize_fov_1806f7510._0_4_;
    *(undefined4 *)((longlong)local_a8 + 4) = uVar4;
    *(undefined4 *)(local_a8 + 1) = uVar5;
    *(undefined4 *)((longlong)local_a8 + 0xc) = uVar3;
    *(ulonglong *)((longlong)local_a8 + 0xe) =
         CONCAT62(s_legitbot_visualize_fov_1806f7510._16_6_,
                  s_legitbot_visualize_fov_1806f7510._14_2_);
    *(undefined1 *)((longlong)local_a8 + 0x16) = 0;
    FUN_1800f4660(param_1,&local_a8,param_2 + 0x7a1c);
    if (0xf < local_90) {
      uVar16 = local_90 + 1;
      plVar9 = local_a8;
      if (0xfff < uVar16) {
        plVar9 = (longlong *)local_a8[-1];
        if (0x1f < (ulonglong)((longlong)local_a8 + (-8 - (longlong)plVar9))) goto LAB_180158204;
        uVar16 = local_90 + 0x28;
      }
      thunk_FUN_1803d64e0(plVar9,uVar16);
    }
    local_a8 = (longlong *)0x0;
    uStack_a0 = 0;
    unaff_RDI = (longlong *)FUN_18000fb70(0x20);
    uVar5 = s_legitbot_fov_color_1806f7528._12_4_;
    uVar4 = s_legitbot_fov_color_1806f7528._8_4_;
    uVar3 = s_legitbot_fov_color_1806f7528._4_4_;
    local_98 = 0x12;
    local_90 = 0x1f;
    *(undefined4 *)unaff_RDI = s_legitbot_fov_color_1806f7528._0_4_;
    *(undefined4 *)((longlong)unaff_RDI + 4) = uVar3;
    *(undefined4 *)(unaff_RDI + 1) = uVar4;
    *(undefined4 *)((longlong)unaff_RDI + 0xc) = uVar5;
    *(undefined2 *)(unaff_RDI + 2) = s_legitbot_fov_color_1806f7528._16_2_;
    *(undefined1 *)((longlong)unaff_RDI + 0x12) = 0;
    local_a8 = unaff_RDI;
    if ((char)param_1[3] == '\0') {
      plVar9 = (longlong *)*param_1;
      if ((ulonglong)plVar9[3] < 0x10) {
        plVar13 = plVar9;
      }
      else {
        plVar13 = (longlong *)*plVar9;
      }
      if (plVar9[2] == 0x12) {
        lVar10 = *unaff_RDI - *plVar13;
        if ((lVar10 == 0) && (lVar10 = unaff_RDI[1] - plVar13[1], lVar10 == 0)) {
          lVar10 = (ulonglong)*(ushort *)(unaff_RDI + 2) - (ulonglong)*(ushort *)(plVar13 + 2);
        }
        if (lVar10 == 0) {
          *(undefined1 *)(param_1 + 3) = 1;
          if ((undefined4 *)param_1[1] == (undefined4 *)0x0) {
            piVar11 = (int *)param_1[2];
            if (*piVar11 != 4) goto LAB_18015756a;
            uVar16 = 0;
            do {
              if ((ulonglong)(*(longlong *)(piVar11 + 6) - *(longlong *)(piVar11 + 4) >> 2) <=
                  uVar16) break;
              uVar7 = *(uint *)(*(longlong *)(piVar11 + 4) + uVar16 * 4);
              if ((uVar7 & 0x7f800000) != 0x7f800000) {
                *(uint *)(param_2 + 0x7a20 + uVar16 * 4) = uVar7;
                piVar11 = (int *)param_1[2];
              }
              uVar16 = uVar16 + 1;
            } while (uVar16 < 4);
          }
          else {
            *(undefined4 *)param_1[1] = 4;
            FUN_180068ca0(param_1[1] + 0x10,param_2 + 0x7a20,4);
          }
          *(undefined1 *)((longlong)param_1 + 0x19) = 1;
        }
      }
    }
LAB_18015756a:
    thunk_FUN_1803d64e0(unaff_RDI,0x20);
    uStack_a0 = 0;
    local_a8 = (longlong *)FUN_18000fb70(0x20);
    uVar5 = s_legitbot_visualize_hitboxes_1806f75b8._12_4_;
    uVar4 = s_legitbot_visualize_hitboxes_1806f75b8._8_4_;
    uVar3 = s_legitbot_visualize_hitboxes_1806f75b8._4_4_;
    local_98 = 0x1b;
    local_90 = 0x1f;
    *(undefined4 *)local_a8 = s_legitbot_visualize_hitboxes_1806f75b8._0_4_;
    *(undefined4 *)((longlong)local_a8 + 4) = uVar3;
    *(undefined4 *)(local_a8 + 1) = uVar4;
    *(undefined4 *)((longlong)local_a8 + 0xc) = uVar5;
    uVar5 = s_legitbot_visualize_hitboxes_1806f75b8._23_4_;
    uVar4 = s_legitbot_visualize_hitboxes_1806f75b8._19_4_;
    uVar3 = CONCAT31(s_legitbot_visualize_hitboxes_1806f75b8._16_3_,
                     s_legitbot_visualize_hitboxes_1806f75b8[0xf]);
    *(uint *)((longlong)local_a8 + 0xb) =
         CONCAT31(s_legitbot_visualize_hitboxes_1806f75b8._12_3_,
                  s_legitbot_visualize_hitboxes_1806f75b8[0xb]);
    *(undefined4 *)((longlong)local_a8 + 0xf) = uVar3;
    *(undefined4 *)((longlong)local_a8 + 0x13) = uVar4;
    *(undefined4 *)((longlong)local_a8 + 0x17) = uVar5;
    *(undefined1 *)((longlong)local_a8 + 0x1b) = 0;
    FUN_1800f4660(param_1,&local_a8,param_2 + 0x7a30);
    if (0xf < local_90) {
      uVar16 = local_90 + 1;
      plVar9 = local_a8;
      if (0xfff < uVar16) {
        plVar9 = (longlong *)local_a8[-1];
        if (0x1f < (ulonglong)((longlong)local_a8 + (-8 - (longlong)plVar9))) goto LAB_180158204;
        uVar16 = local_90 + 0x28;
      }
      thunk_FUN_1803d64e0(plVar9,uVar16);
    }
    local_a8 = (longlong *)0x0;
    uStack_a0 = 0;
    plVar9 = (longlong *)FUN_18000fb70(0x20);
    local_98 = 0x1c;
    local_90 = 0x1f;
    lVar10 = CONCAT44(s_legitbot_high_priority_color_1806f75d8._12_4_,
                      s_legitbot_high_priority_color_1806f75d8._8_4_);
    *plVar9 = s_legitbot_high_priority_color_1806f75d8._0_8_;
    plVar9[1] = lVar10;
    uVar8 = s_legitbot_high_priority_color_1806f75d8._20_8_;
    *(ulonglong *)((longlong)plVar9 + 0xc) =
         CONCAT44(s_legitbot_high_priority_color_1806f75d8._16_4_,
                  s_legitbot_high_priority_color_1806f75d8._12_4_);
    *(undefined8 *)((longlong)plVar9 + 0x14) = uVar8;
    *(char *)((longlong)plVar9 + 0x1c) = '\0';
    local_a8 = plVar9;
    if ((char)param_1[3] == '\0') {
      puVar1 = (undefined8 *)*param_1;
      if ((ulonglong)puVar1[3] < 0x10) {
        puVar12 = puVar1;
      }
      else {
        puVar12 = (undefined8 *)*puVar1;
      }
      if (puVar1[2] == 0x1c) {
        iVar6 = memcmp(plVar9,puVar12,0x1c);
        if (iVar6 == 0) {
          *(undefined1 *)(param_1 + 3) = 1;
          if ((undefined4 *)param_1[1] == (undefined4 *)0x0) {
            piVar11 = (int *)param_1[2];
            if (*piVar11 != 4) goto LAB_18015770a;
            uVar16 = 0;
            do {
              if ((ulonglong)(*(longlong *)(piVar11 + 6) - *(longlong *)(piVar11 + 4) >> 2) <=
                  uVar16) break;
              uVar7 = *(uint *)(*(longlong *)(piVar11 + 4) + uVar16 * 4);
              if ((uVar7 & 0x7f800000) != 0x7f800000) {
                *(uint *)(param_2 + 0x7a34 + uVar16 * 4) = uVar7;
                piVar11 = (int *)param_1[2];
              }
              uVar16 = uVar16 + 1;
            } while (uVar16 < 4);
          }
          else {
            *(undefined4 *)param_1[1] = 4;
            FUN_180068ca0(param_1[1] + 0x10,param_2 + 0x7a34,4);
          }
          *(undefined1 *)((longlong)param_1 + 0x19) = 1;
        }
      }
    }
LAB_18015770a:
    thunk_FUN_1803d64e0(plVar9,0x20);
    local_a8 = (longlong *)0x0;
    uStack_a0 = 0;
    unaff_RDI = (longlong *)FUN_18000fb70(0x20);
    local_98 = 0x1b;
    local_90 = 0x1f;
    lVar10 = CONCAT53(s_legitbot_low_priority_color_1806f7578._11_5_,
                      s_legitbot_low_priority_color_1806f7578._8_3_);
    *unaff_RDI = s_legitbot_low_priority_color_1806f7578._0_8_;
    unaff_RDI[1] = lVar10;
    uVar8 = s_legitbot_low_priority_color_1806f7578._19_8_;
    *(ulonglong *)((longlong)unaff_RDI + 0xb) =
         CONCAT35(s_legitbot_low_priority_color_1806f7578._16_3_,
                  s_legitbot_low_priority_color_1806f7578._11_5_);
    *(undefined8 *)((longlong)unaff_RDI + 0x13) = uVar8;
    *(undefined1 *)((longlong)unaff_RDI + 0x1b) = 0;
    local_a8 = unaff_RDI;
    if ((char)param_1[3] == '\0') {
      puVar1 = (undefined8 *)*param_1;
      if ((ulonglong)puVar1[3] < 0x10) {
        puVar12 = puVar1;
      }
      else {
        puVar12 = (undefined8 *)*puVar1;
      }
      if (puVar1[2] == 0x1b) {
        iVar6 = memcmp(unaff_RDI,puVar12,0x1b);
        if (iVar6 == 0) {
          *(undefined1 *)(param_1 + 3) = 1;
          if ((undefined4 *)param_1[1] == (undefined4 *)0x0) {
            piVar11 = (int *)param_1[2];
            if (*piVar11 != 4) goto LAB_18015781a;
            uVar16 = 0;
            do {
              if ((ulonglong)(*(longlong *)(piVar11 + 6) - *(longlong *)(piVar11 + 4) >> 2) <=
                  uVar16) break;
              uVar7 = *(uint *)(*(longlong *)(piVar11 + 4) + uVar16 * 4);
              if ((uVar7 & 0x7f800000) != 0x7f800000) {
                *(uint *)(param_2 + 0x7a44 + uVar16 * 4) = uVar7;
                piVar11 = (int *)param_1[2];
              }
              uVar16 = uVar16 + 1;
            } while (uVar16 < 4);
          }
          else {
            *(undefined4 *)param_1[1] = 4;
            FUN_180068ca0(param_1[1] + 0x10,param_2 + 0x7a44,4);
          }
          *(undefined1 *)((longlong)param_1 + 0x19) = 1;
        }
      }
    }
LAB_18015781a:
    thunk_FUN_1803d64e0(unaff_RDI,0x20);
    uStack_a0 = 0;
    local_a8 = (longlong *)FUN_18000fb70(0x20);
    uVar5 = s_legitbot_visualize_recoil_1806f7598._12_4_;
    uVar4 = s_legitbot_visualize_recoil_1806f7598._8_4_;
    uVar3 = s_legitbot_visualize_recoil_1806f7598._4_4_;
    local_98 = 0x19;
    local_90 = 0x1f;
    *(undefined4 *)local_a8 = s_legitbot_visualize_recoil_1806f7598._0_4_;
    *(undefined4 *)((longlong)local_a8 + 4) = uVar3;
    *(undefined4 *)(local_a8 + 1) = uVar4;
    *(undefined4 *)((longlong)local_a8 + 0xc) = uVar5;
    uVar5 = s_legitbot_visualize_recoil_1806f7598._21_4_;
    uVar4 = s_legitbot_visualize_recoil_1806f7598._17_4_;
    uVar3 = CONCAT13(s_legitbot_visualize_recoil_1806f7598[0x10],
                     s_legitbot_visualize_recoil_1806f7598._13_3_);
    *(uint *)((longlong)local_a8 + 9) =
         CONCAT13(s_legitbot_visualize_recoil_1806f7598[0xc],
                  s_legitbot_visualize_recoil_1806f7598._9_3_);
    *(undefined4 *)((longlong)local_a8 + 0xd) = uVar3;
    *(undefined4 *)((longlong)local_a8 + 0x11) = uVar4;
    *(undefined4 *)((longlong)local_a8 + 0x15) = uVar5;
    *(undefined1 *)((longlong)local_a8 + 0x19) = 0;
    FUN_1800f4660(param_1,&local_a8,param_2 + 0x7a54);
    if (0xf < local_90) {
      uVar16 = local_90 + 1;
      plVar9 = local_a8;
      if (0xfff < uVar16) {
        plVar9 = (longlong *)local_a8[-1];
        if (0x1f < (ulonglong)((longlong)local_a8 + (-8 - (longlong)plVar9))) goto LAB_180158204;
        uVar16 = local_90 + 0x28;
      }
      thunk_FUN_1803d64e0(plVar9,uVar16);
    }
    local_a8 = (longlong *)0x0;
    uStack_a0 = 0;
    plVar9 = (longlong *)FUN_18000fb70(0x20);
    local_98 = 0x1e;
    local_90 = 0x1f;
    lVar10 = CONCAT26(s_legitbot_recoil_original_color_1806f7630._14_2_,
                      s_legitbot_recoil_original_color_1806f7630._8_6_);
    *plVar9 = s_legitbot_recoil_original_color_1806f7630._0_8_;
    plVar9[1] = lVar10;
    uVar8 = s_legitbot_recoil_original_color_1806f7630._22_8_;
    *(ulonglong *)((longlong)plVar9 + 0xe) =
         CONCAT62(s_legitbot_recoil_original_color_1806f7630._16_6_,
                  s_legitbot_recoil_original_color_1806f7630._14_2_);
    *(undefined8 *)((longlong)plVar9 + 0x16) = uVar8;
    *(char *)((longlong)plVar9 + 0x1e) = '\0';
    local_a8 = plVar9;
    if ((char)param_1[3] == '\0') {
      puVar1 = (undefined8 *)*param_1;
      if ((ulonglong)puVar1[3] < 0x10) {
        puVar12 = puVar1;
      }
      else {
        puVar12 = (undefined8 *)*puVar1;
      }
      if (puVar1[2] == 0x1e) {
        iVar6 = memcmp(plVar9,puVar12,0x1e);
        if (iVar6 == 0) {
          *(undefined1 *)(param_1 + 3) = 1;
          if ((undefined4 *)param_1[1] == (undefined4 *)0x0) {
            piVar11 = (int *)param_1[2];
            if (*piVar11 != 4) goto LAB_1801579ba;
            uVar16 = 0;
            do {
              if ((ulonglong)(*(longlong *)(piVar11 + 6) - *(longlong *)(piVar11 + 4) >> 2) <=
                  uVar16) break;
              uVar7 = *(uint *)(*(longlong *)(piVar11 + 4) + uVar16 * 4);
              if ((uVar7 & 0x7f800000) != 0x7f800000) {
                *(uint *)(param_2 + 0x7a58 + uVar16 * 4) = uVar7;
                piVar11 = (int *)param_1[2];
              }
              uVar16 = uVar16 + 1;
            } while (uVar16 < 4);
          }
          else {
            *(undefined4 *)param_1[1] = 4;
            FUN_180068ca0(param_1[1] + 0x10,param_2 + 0x7a58,4);
          }
          *(undefined1 *)((longlong)param_1 + 0x19) = 1;
        }
      }
    }
LAB_1801579ba:
    thunk_FUN_1803d64e0(plVar9,0x20);
    local_a8 = (longlong *)0x0;
    uStack_a0 = 0;
    unaff_RDI = (longlong *)FUN_18000fb70(0x30);
    uVar8 = s_legitbot_recoil_compensated_colo_1806f7650._8_8_;
    local_98 = 0x21;
    local_90 = 0x2f;
    *unaff_RDI = s_legitbot_recoil_compensated_colo_1806f7650._0_8_;
    unaff_RDI[1] = uVar8;
    uVar8 = s_legitbot_recoil_compensated_colo_1806f7650._24_8_;
    unaff_RDI[2] = s_legitbot_recoil_compensated_colo_1806f7650._16_8_;
    unaff_RDI[3] = uVar8;
    *(char *)(unaff_RDI + 4) = s_legitbot_recoil_compensated_colo_1806f7650[0x20];
    *(undefined1 *)((longlong)unaff_RDI + 0x21) = 0;
    local_a8 = unaff_RDI;
    if ((char)param_1[3] == '\0') {
      puVar1 = (undefined8 *)*param_1;
      if ((ulonglong)puVar1[3] < 0x10) {
        puVar12 = puVar1;
      }
      else {
        puVar12 = (undefined8 *)*puVar1;
      }
      if (puVar1[2] == 0x21) {
        iVar6 = memcmp(unaff_RDI,puVar12,0x21);
        if (iVar6 == 0) {
          *(undefined1 *)(param_1 + 3) = 1;
          if ((undefined4 *)param_1[1] == (undefined4 *)0x0) {
            piVar11 = (int *)param_1[2];
            if (*piVar11 != 4) goto LAB_180157ada;
            uVar16 = 0;
            do {
              if ((ulonglong)(*(longlong *)(piVar11 + 6) - *(longlong *)(piVar11 + 4) >> 2) <=
                  uVar16) break;
              uVar7 = *(uint *)(*(longlong *)(piVar11 + 4) + uVar16 * 4);
              if ((uVar7 & 0x7f800000) != 0x7f800000) {
                *(uint *)(param_2 + 0x7a68 + uVar16 * 4) = uVar7;
                piVar11 = (int *)param_1[2];
              }
              uVar16 = uVar16 + 1;
            } while (uVar16 < 4);
          }
          else {
            *(undefined4 *)param_1[1] = 4;
            FUN_180068ca0(param_1[1] + 0x10,param_2 + 0x7a68,4);
          }
          *(undefined1 *)((longlong)param_1 + 0x19) = 1;
        }
      }
    }
LAB_180157ada:
    thunk_FUN_1803d64e0(unaff_RDI,0x30);
    uStack_a0 = 0;
    local_a8 = (longlong *)FUN_18000fb70(0x20);
    uVar5 = s_legitbot_visualize_velocity_1806f75f8._12_4_;
    uVar4 = s_legitbot_visualize_velocity_1806f75f8._8_4_;
    uVar3 = s_legitbot_visualize_velocity_1806f75f8._4_4_;
    local_98 = 0x1b;
    local_90 = 0x1f;
    *(undefined4 *)local_a8 = s_legitbot_visualize_velocity_1806f75f8._0_4_;
    *(undefined4 *)((longlong)local_a8 + 4) = uVar3;
    *(undefined4 *)(local_a8 + 1) = uVar4;
    *(undefined4 *)((longlong)local_a8 + 0xc) = uVar5;
    uVar5 = s_legitbot_visualize_velocity_1806f75f8._23_4_;
    uVar4 = s_legitbot_visualize_velocity_1806f75f8._19_4_;
    uVar3 = CONCAT31(s_legitbot_visualize_velocity_1806f75f8._16_3_,
                     s_legitbot_visualize_velocity_1806f75f8[0xf]);
    *(uint *)((longlong)local_a8 + 0xb) =
         CONCAT31(s_legitbot_visualize_velocity_1806f75f8._12_3_,
                  s_legitbot_visualize_velocity_1806f75f8[0xb]);
    *(undefined4 *)((longlong)local_a8 + 0xf) = uVar3;
    *(undefined4 *)((longlong)local_a8 + 0x13) = uVar4;
    *(undefined4 *)((longlong)local_a8 + 0x17) = uVar5;
    *(undefined1 *)((longlong)local_a8 + 0x1b) = 0;
    FUN_1800f4660(param_1,&local_a8,param_2 + 0x7a78);
    if (0xf < local_90) {
      uVar16 = local_90 + 1;
      plVar9 = local_a8;
      if (0xfff < uVar16) {
        plVar9 = (longlong *)local_a8[-1];
        if (0x1f < (ulonglong)((longlong)local_a8 + (-8 - (longlong)plVar9))) goto LAB_180158204;
        uVar16 = local_90 + 0x28;
      }
      thunk_FUN_1803d64e0(plVar9,uVar16);
    }
    uStack_a0 = 0;
    local_a8 = (longlong *)FUN_18000fb70(0x20);
    uVar5 = s_legitbot_velocity_speed_1806f7618._12_4_;
    uVar4 = s_legitbot_velocity_speed_1806f7618._8_4_;
    uVar3 = s_legitbot_velocity_speed_1806f7618._4_4_;
    local_98 = 0x17;
    local_90 = 0x1f;
    *(undefined4 *)local_a8 = s_legitbot_velocity_speed_1806f7618._0_4_;
    *(undefined4 *)((longlong)local_a8 + 4) = uVar3;
    *(undefined4 *)(local_a8 + 1) = uVar4;
    *(undefined4 *)((longlong)local_a8 + 0xc) = uVar5;
    *(ulonglong *)((longlong)local_a8 + 0xf) =
         CONCAT71(s_legitbot_velocity_speed_1806f7618._16_7_,
                  s_legitbot_velocity_speed_1806f7618[0xf]);
    *(undefined1 *)((longlong)local_a8 + 0x17) = 0;
    FUN_1800f4660(param_1,&local_a8,param_2 + 0x7a79);
    if (0xf < local_90) {
      uVar16 = local_90 + 1;
      plVar9 = local_a8;
      if (0xfff < uVar16) {
        plVar9 = (longlong *)local_a8[-1];
        if (0x1f < (ulonglong)((longlong)local_a8 + (-8 - (longlong)plVar9))) goto LAB_180158204;
        uVar16 = local_90 + 0x28;
      }
      thunk_FUN_1803d64e0(plVar9,uVar16);
    }
    local_a8 = (longlong *)0x0;
    uStack_a0 = 0;
    unaff_RDI = (longlong *)FUN_18000fb70(0x20);
    uVar5 = s_legitbot_speed_color_1806f76b0._12_4_;
    uVar4 = s_legitbot_speed_color_1806f76b0._8_4_;
    uVar3 = s_legitbot_speed_color_1806f76b0._4_4_;
    local_98 = 0x14;
    local_90 = 0x1f;
    *(undefined4 *)unaff_RDI = s_legitbot_speed_color_1806f76b0._0_4_;
    *(undefined4 *)((longlong)unaff_RDI + 4) = uVar3;
    *(undefined4 *)(unaff_RDI + 1) = uVar4;
    *(undefined4 *)((longlong)unaff_RDI + 0xc) = uVar5;
    *(undefined4 *)(unaff_RDI + 2) = s_legitbot_speed_color_1806f76b0._16_4_;
    *(undefined1 *)((longlong)unaff_RDI + 0x14) = 0;
    local_a8 = unaff_RDI;
    if ((char)param_1[3] == '\0') {
      plVar9 = (longlong *)*param_1;
      if ((ulonglong)plVar9[3] < 0x10) {
        plVar13 = plVar9;
      }
      else {
        plVar13 = (longlong *)*plVar9;
      }
      if (plVar9[2] == 0x14) {
        lVar10 = *unaff_RDI - *plVar13;
        if ((lVar10 == 0) && (lVar10 = unaff_RDI[1] - plVar13[1], lVar10 == 0)) {
          lVar10 = (ulonglong)*(uint *)(unaff_RDI + 2) - (ulonglong)*(uint *)(plVar13 + 2);
        }
        if (lVar10 == 0) {
          *(undefined1 *)(param_1 + 3) = 1;
          if ((undefined4 *)param_1[1] == (undefined4 *)0x0) {
            piVar11 = (int *)param_1[2];
            if (*piVar11 != 4) goto LAB_180157d0a;
            uVar16 = 0;
            do {
              if ((ulonglong)(*(longlong *)(piVar11 + 6) - *(longlong *)(piVar11 + 4) >> 2) <=
                  uVar16) break;
              uVar7 = *(uint *)(*(longlong *)(piVar11 + 4) + uVar16 * 4);
              if ((uVar7 & 0x7f800000) != 0x7f800000) {
                *(uint *)(param_2 + 0x7a7c + uVar16 * 4) = uVar7;
                piVar11 = (int *)param_1[2];
              }
              uVar16 = uVar16 + 1;
            } while (uVar16 < 4);
          }
          else {
            *(undefined4 *)param_1[1] = 4;
            FUN_180068ca0(param_1[1] + 0x10,param_2 + 0x7a7c,4);
          }
          *(undefined1 *)((longlong)param_1 + 0x19) = 1;
        }
      }
    }
LAB_180157d0a:
    thunk_FUN_1803d64e0(unaff_RDI,0x20);
    uStack_a0 = 0;
    local_a8 = (longlong *)FUN_18000fb70(0x20);
    uVar5 = s_legitbot_velocity_jump_1806f76c8._8_4_;
    uVar4 = s_legitbot_velocity_jump_1806f76c8._4_4_;
    local_98 = 0x16;
    local_90 = 0x1f;
    uVar3 = CONCAT22(s_legitbot_velocity_jump_1806f76c8._14_2_,
                     s_legitbot_velocity_jump_1806f76c8._12_2_);
    *(undefined4 *)local_a8 = s_legitbot_velocity_jump_1806f76c8._0_4_;
    *(undefined4 *)((longlong)local_a8 + 4) = uVar4;
    *(undefined4 *)(local_a8 + 1) = uVar5;
    *(undefined4 *)((longlong)local_a8 + 0xc) = uVar3;
    *(ulonglong *)((longlong)local_a8 + 0xe) =
         CONCAT62(s_legitbot_velocity_jump_1806f76c8._16_6_,
                  s_legitbot_velocity_jump_1806f76c8._14_2_);
    *(undefined1 *)((longlong)local_a8 + 0x16) = 0;
    FUN_1800f4660(param_1,&local_a8,param_2 + 0x7a8c);
    if (0xf < local_90) {
      uVar16 = local_90 + 1;
      plVar9 = local_a8;
      if (0xfff < uVar16) {
        plVar9 = (longlong *)local_a8[-1];
        if (0x1f < (ulonglong)((longlong)local_a8 + (-8 - (longlong)plVar9))) goto LAB_180158204;
        uVar16 = local_90 + 0x28;
      }
      thunk_FUN_1803d64e0(plVar9,uVar16);
    }
    local_a8 = (longlong *)0x0;
    uStack_a0 = 0;
    unaff_RDI = (longlong *)FUN_18000fb70(0x20);
    local_98 = 0x13;
    local_90 = 0x1f;
    lVar10 = CONCAT17(s_legitbot_jump_color_1806f7678[0xf],s_legitbot_jump_color_1806f7678._8_7_);
    *unaff_RDI = s_legitbot_jump_color_1806f7678._0_8_;
    unaff_RDI[1] = lVar10;
    *(undefined4 *)((longlong)unaff_RDI + 0xf) = s_legitbot_jump_color_1806f7678._15_4_;
    *(undefined1 *)((longlong)unaff_RDI + 0x13) = 0;
    local_a8 = unaff_RDI;
    if ((char)param_1[3] == '\0') {
      puVar1 = (undefined8 *)*param_1;
      if ((ulonglong)puVar1[3] < 0x10) {
        puVar12 = puVar1;
      }
      else {
        puVar12 = (undefined8 *)*puVar1;
      }
      if (puVar1[2] == 0x13) {
        iVar6 = memcmp(unaff_RDI,puVar12,0x13);
        if (iVar6 == 0) {
          *(undefined1 *)(param_1 + 3) = 1;
          if ((undefined4 *)param_1[1] == (undefined4 *)0x0) {
            piVar11 = (int *)param_1[2];
            if (*piVar11 != 4) goto LAB_180157eaa;
            uVar16 = 0;
            do {
              if ((ulonglong)(*(longlong *)(piVar11 + 6) - *(longlong *)(piVar11 + 4) >> 2) <=
                  uVar16) break;
              uVar7 = *(uint *)(*(longlong *)(piVar11 + 4) + uVar16 * 4);
              if ((uVar7 & 0x7f800000) != 0x7f800000) {
                *(uint *)(param_2 + 0x7a90 + uVar16 * 4) = uVar7;
                piVar11 = (int *)param_1[2];
              }
              uVar16 = uVar16 + 1;
            } while (uVar16 < 4);
          }
          else {
            *(undefined4 *)param_1[1] = 4;
            FUN_180068ca0(param_1[1] + 0x10,param_2 + 0x7a90,4);
          }
          *(undefined1 *)((longlong)param_1 + 0x19) = 1;
        }
      }
    }
LAB_180157eaa:
    thunk_FUN_1803d64e0(unaff_RDI,0x20);
    uStack_a0 = 0;
    local_a8 = (longlong *)FUN_18000fb70(0x20);
    uVar5 = s_legitbot_velocity_ground_1806f7690._12_4_;
    uVar4 = s_legitbot_velocity_ground_1806f7690._8_4_;
    uVar3 = s_legitbot_velocity_ground_1806f7690._4_4_;
    local_98 = 0x18;
    local_90 = 0x1f;
    *(undefined4 *)local_a8 = s_legitbot_velocity_ground_1806f7690._0_4_;
    *(undefined4 *)((longlong)local_a8 + 4) = uVar3;
    *(undefined4 *)(local_a8 + 1) = uVar4;
    *(undefined4 *)((longlong)local_a8 + 0xc) = uVar5;
    local_a8[2] = s_legitbot_velocity_ground_1806f7690._16_8_;
    *(char *)(local_a8 + 3) = '\0';
    FUN_1800f4660(param_1,&local_a8,param_2 + 0x7aa0);
    FUN_18000f890(&local_a8);
    FUN_180013350(&local_a8,"legitbot.ground_color");
    FUN_180154fa0(param_1,&local_a8,param_2 + 0x7aa4);
    FUN_18000f890(&local_a8);
    uStack_a0 = 0;
    local_a8 = (longlong *)FUN_18000fb70(0x20);
    uVar5 = s_legitbot_automatic_weapons_1806f7740._4_4_;
    local_98 = 0x1a;
    local_90 = 0x1f;
    uVar3 = CONCAT22(s_legitbot_automatic_weapons_1806f7740._10_2_,
                     s_legitbot_automatic_weapons_1806f7740._8_2_);
    uVar4 = CONCAT22(s_legitbot_automatic_weapons_1806f7740._14_2_,
                     s_legitbot_automatic_weapons_1806f7740._12_2_);
    *(undefined4 *)local_a8 = s_legitbot_automatic_weapons_1806f7740._0_4_;
    *(undefined4 *)((longlong)local_a8 + 4) = uVar5;
    *(undefined4 *)(local_a8 + 1) = uVar3;
    *(undefined4 *)((longlong)local_a8 + 0xc) = uVar4;
    uVar5 = s_legitbot_automatic_weapons_1806f7740._22_4_;
    uVar4 = s_legitbot_automatic_weapons_1806f7740._18_4_;
    uVar3 = CONCAT22(s_legitbot_automatic_weapons_1806f7740._16_2_,
                     s_legitbot_automatic_weapons_1806f7740._14_2_);
    *(uint *)((longlong)local_a8 + 10) =
         CONCAT22(s_legitbot_automatic_weapons_1806f7740._12_2_,
                  s_legitbot_automatic_weapons_1806f7740._10_2_);
    *(undefined4 *)((longlong)local_a8 + 0xe) = uVar3;
    *(undefined4 *)((longlong)local_a8 + 0x12) = uVar4;
    *(undefined4 *)((longlong)local_a8 + 0x16) = uVar5;
    *(undefined1 *)((longlong)local_a8 + 0x1a) = 0;
    FUN_1800f4660(param_1,&local_a8,param_2 + 0x7ab4);
    if (0xf < local_90) {
      uVar16 = local_90 + 1;
      plVar9 = local_a8;
      if (0xfff < uVar16) {
        plVar9 = (longlong *)local_a8[-1];
        if (0x1f < (ulonglong)((longlong)local_a8 + (-8 - (longlong)plVar9))) goto LAB_180158204;
        uVar16 = local_90 + 0x28;
      }
      thunk_FUN_1803d64e0(plVar9,uVar16);
    }
    uStack_a0 = 0;
    unaff_RDI = (longlong *)FUN_18000fb70(0x30);
    uVar8 = s_legitbot_automatic_weapons_inter_1806f76e0._8_8_;
    local_98 = 0x23;
    local_90 = 0x2f;
    *unaff_RDI = s_legitbot_automatic_weapons_inter_1806f76e0._0_8_;
    unaff_RDI[1] = uVar8;
    lVar10 = CONCAT17(s_legitbot_automatic_weapons_inter_1806f76e0[0x1f],
                      s_legitbot_automatic_weapons_inter_1806f76e0._24_7_);
    unaff_RDI[2] = s_legitbot_automatic_weapons_inter_1806f76e0._16_8_;
    unaff_RDI[3] = lVar10;
    *(undefined4 *)((longlong)unaff_RDI + 0x1f) =
         s_legitbot_automatic_weapons_inter_1806f76e0._31_4_;
    *(undefined1 *)((longlong)unaff_RDI + 0x23) = 0;
    local_a8 = unaff_RDI;
    if ((char)param_1[3] == '\0') {
      puVar1 = (undefined8 *)*param_1;
      if ((ulonglong)puVar1[3] < 0x10) {
        puVar12 = puVar1;
      }
      else {
        puVar12 = (undefined8 *)*puVar1;
      }
      if (puVar1[2] == 0x23) {
        iVar6 = memcmp(unaff_RDI,puVar12,0x23);
        if (iVar6 == 0) {
          *(undefined1 *)(param_1 + 3) = 1;
          if ((undefined4 *)param_1[1] == (undefined4 *)0x0) {
            piVar11 = (int *)param_1[2];
            iVar6 = *piVar11;
            if (iVar6 == 2) {
              uVar7 = piVar11[2];
            }
            else if (iVar6 == 3) {
              uVar7 = FUN_1804f3280(piVar11[3]);
            }
            else {
              if (iVar6 != 1) goto LAB_180158098;
              uVar7 = (uint)((char)piVar11[1] != '\0');
            }
            *(uint *)(param_2 + 0x7ab8) = uVar7;
          }
          else {
            *(undefined4 *)param_1[1] = 2;
            *(undefined4 *)(param_1[1] + 8) = *(undefined4 *)(param_2 + 0x7ab8);
          }
          *(undefined1 *)((longlong)param_1 + 0x19) = 1;
        }
      }
    }
LAB_180158098:
    thunk_FUN_1803d64e0(unaff_RDI,0x30);
    uStack_a0 = 0;
    local_a8 = (longlong *)FUN_18000fb70(0x20);
    uVar5 = s_legitbot_standalone_recoil_1806f7708._4_4_;
    local_98 = 0x1a;
    local_90 = 0x1f;
    uVar3 = CONCAT22(s_legitbot_standalone_recoil_1806f7708._10_2_,
                     s_legitbot_standalone_recoil_1806f7708._8_2_);
    uVar4 = CONCAT22(s_legitbot_standalone_recoil_1806f7708._14_2_,
                     s_legitbot_standalone_recoil_1806f7708._12_2_);
    *(undefined4 *)local_a8 = s_legitbot_standalone_recoil_1806f7708._0_4_;
    *(undefined4 *)((longlong)local_a8 + 4) = uVar5;
    *(undefined4 *)(local_a8 + 1) = uVar3;
    *(undefined4 *)((longlong)local_a8 + 0xc) = uVar4;
    uVar5 = s_legitbot_standalone_recoil_1806f7708._22_4_;
    uVar4 = s_legitbot_standalone_recoil_1806f7708._18_4_;
    uVar3 = CONCAT22(s_legitbot_standalone_recoil_1806f7708._16_2_,
                     s_legitbot_standalone_recoil_1806f7708._14_2_);
    *(uint *)((longlong)local_a8 + 10) =
         CONCAT22(s_legitbot_standalone_recoil_1806f7708._12_2_,
                  s_legitbot_standalone_recoil_1806f7708._10_2_);
    *(undefined4 *)((longlong)local_a8 + 0xe) = uVar3;
    *(undefined4 *)((longlong)local_a8 + 0x12) = uVar4;
    *(undefined4 *)((longlong)local_a8 + 0x16) = uVar5;
    *(undefined1 *)((longlong)local_a8 + 0x1a) = 0;
    FUN_1800f4660(param_1,&local_a8,param_2 + 0x7abc);
    if (0xf < local_90) {
      uVar16 = local_90 + 1;
      plVar9 = local_a8;
      if (0xfff < uVar16) {
        plVar9 = (longlong *)local_a8[-1];
        if (0x1f < (ulonglong)((longlong)local_a8 + (-8 - (longlong)plVar9))) goto LAB_180158204;
        uVar16 = local_90 + 0x28;
      }
      thunk_FUN_1803d64e0(plVar9,uVar16);
    }
    local_a8 = (longlong *)0x0;
    uStack_a0 = 0;
    local_a8 = (longlong *)FUN_18000fb70(0x20);
    uVar5 = s_legitbot_standalone__1806f7788._12_4_;
    uVar4 = s_legitbot_standalone__1806f7788._8_4_;
    uVar3 = s_legitbot_standalone__1806f7788._4_4_;
    local_98 = 0x14;
    local_90 = 0x1f;
    *(undefined4 *)local_a8 = s_legitbot_standalone__1806f7788._0_4_;
    *(undefined4 *)((longlong)local_a8 + 4) = uVar3;
    *(undefined4 *)(local_a8 + 1) = uVar4;
    *(undefined4 *)((longlong)local_a8 + 0xc) = uVar5;
    *(undefined4 *)(local_a8 + 2) = s_legitbot_standalone__1806f7788._16_4_;
    *(undefined1 *)((longlong)local_a8 + 0x14) = 0;
    FUN_1801aac00(param_1,&local_a8,param_2 + 0x7ac0);
    if (0xf < local_90) {
      uVar16 = local_90 + 1;
      plVar9 = local_a8;
      if (0xfff < uVar16) {
        plVar9 = (longlong *)local_a8[-1];
        if (0x1f < (ulonglong)((longlong)local_a8 + (-8 - (longlong)plVar9))) goto LAB_180158204;
        uVar16 = local_90 + 0x28;
      }
      thunk_FUN_1803d64e0(plVar9,uVar16);
    }
    uStack_a0 = 0;
    unaff_RDI = (longlong *)FUN_18000fb70(0x20);
    uVar5 = s_legitbot_randomize_1806f77a0._12_4_;
    uVar4 = s_legitbot_randomize_1806f77a0._8_4_;
    uVar3 = s_legitbot_randomize_1806f77a0._4_4_;
    local_98 = 0x12;
    local_90 = 0x1f;
    *(undefined4 *)unaff_RDI = s_legitbot_randomize_1806f77a0._0_4_;
    *(undefined4 *)((longlong)unaff_RDI + 4) = uVar3;
    *(undefined4 *)(unaff_RDI + 1) = uVar4;
    *(undefined4 *)((longlong)unaff_RDI + 0xc) = uVar5;
    *(undefined2 *)(unaff_RDI + 2) = s_legitbot_randomize_1806f77a0._16_2_;
    *(undefined1 *)((longlong)unaff_RDI + 0x12) = 0;
    local_a8 = unaff_RDI;
    if ((char)param_1[3] != '\0') goto LAB_180158294;
    plVar9 = (longlong *)*param_1;
    if ((ulonglong)plVar9[3] < 0x10) goto LAB_18015820b;
    plVar13 = (longlong *)*plVar9;
    puVar15 = auStack_c8;
  }
  else {
    uVar16 = local_90 + 1;
    plVar9 = local_a8;
    if (uVar16 < 0x1000) {
LAB_180157254:
      thunk_FUN_1803d64e0(plVar9,uVar16);
      goto LAB_180157259;
    }
    plVar9 = (longlong *)local_a8[-1];
    if ((ulonglong)((longlong)local_a8 + (-8 - (longlong)plVar9)) < 0x20) {
      uVar16 = local_90 + 0x28;
      goto LAB_180157254;
    }
LAB_180158204:
    pcVar2 = (code *)swi(0x29);
    plVar9 = (longlong *)(*pcVar2)(5);
    puVar14 = auStack_c0;
LAB_18015820b:
    plVar13 = plVar9;
    puVar15 = puVar14;
  }
  if (plVar9[2] == 0x12) {
    lVar10 = *unaff_RDI - *plVar13;
    if ((lVar10 == 0) && (lVar10 = unaff_RDI[1] - plVar13[1], lVar10 == 0)) {
      lVar10 = (ulonglong)*(ushort *)(unaff_RDI + 2) - (ulonglong)*(ushort *)(plVar13 + 2);
    }
    if (lVar10 == 0) {
      *(undefined1 *)(param_1 + 3) = 1;
      if ((undefined4 *)param_1[1] == (undefined4 *)0x0) {
        piVar11 = (int *)param_1[2];
        iVar6 = *piVar11;
        if (iVar6 == 2) {
          uVar7 = piVar11[2];
        }
        else if (iVar6 == 3) {
          iVar6 = piVar11[3];
          *(undefined8 *)(puVar15 + -8) = 0x180158284;
          uVar7 = FUN_1804f3280(iVar6);
        }
        else {
          if (iVar6 != 1) goto LAB_180158294;
          uVar7 = (uint)((char)piVar11[1] != '\0');
        }
        *(uint *)(param_2 + 0x7ad4) = uVar7;
      }
      else {
        *(undefined4 *)param_1[1] = 2;
        *(undefined4 *)(param_1[1] + 8) = *(undefined4 *)(param_2 + 0x7ad4);
      }
      *(undefined1 *)((longlong)param_1 + 0x19) = 1;
    }
  }
LAB_180158294:
  *(undefined8 *)(puVar15 + -8) = 0x18015829f;
  thunk_FUN_1803d64e0(unaff_RDI,0x20);
  *(undefined8 *)(puVar15 + -8) = 0x1801582ab;
  return;
}



/* ===== 1801582d0 FUN_1801582d0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801582d0(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  int *piVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  size_t sVar13;
  char *pcVar14;
  undefined8 *_Buf2;
  ulonglong uVar15;
  undefined1 auStack_1e8 [32];
  longlong local_1c8;
  char *local_1b0 [4];
  char *local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined1 local_170 [32];
  char *local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 local_138;
  char *local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 local_118;
  char *local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  ulonglong uStack_f8;
  char *local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  char *local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  char *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68 [32];
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_1e8;
  local_130 = (char *)0x0;
  uStack_128 = 0;
  local_130 = (char *)FUN_18000fb70(0x20);
  uVar8 = s_visuals_world_view__1806f7760._12_4_;
  uVar7 = s_visuals_world_view__1806f7760._8_4_;
  uVar6 = s_visuals_world_view__1806f7760._4_4_;
  local_120 = 0x13;
  local_118 = 0x1f;
  *(undefined4 *)local_130 = s_visuals_world_view__1806f7760._0_4_;
  *(undefined4 *)(local_130 + 4) = uVar6;
  *(undefined4 *)(local_130 + 8) = uVar7;
  *(undefined4 *)(local_130 + 0xc) = uVar8;
  *(uint *)(local_130 + 0xf) =
       CONCAT31(s_visuals_world_view__1806f7760._16_3_,s_visuals_world_view__1806f7760[0xf]);
  local_130[0x13] = '\0';
  uVar10 = FUN_180073a70(local_1b0,&local_130,"override_fov");
  FUN_1800f4660(param_1,uVar10,param_2);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,&local_130,&DAT_1806e0e18);
  FUN_1800f4760(param_1,uVar10,param_2 + 4);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,&local_130,"override_aspect");
  FUN_1800f4660(param_1,uVar10,param_2 + 8);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,&local_130,"aspect_scaling");
  FUN_1800f4760(param_1,uVar10,param_2 + 0xc);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,&local_130,"aspect_value");
  FUN_1800f4760(param_1,uVar10,param_2 + 0x10);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,&local_130,"disable_landing_bob");
  FUN_1800f4660(param_1,uVar10,param_2 + 0x14);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,&local_130,"scope_override_fov");
  FUN_1800f4660(param_1,uVar10,param_2 + 0x15);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,&local_130,"scope_x1");
  FUN_1800f4760(param_1,uVar10,param_2 + 0x18);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,&local_130,"scope_x2");
  FUN_1800f4760(param_1,uVar10,param_2 + 0x1c);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,&local_130,"instant_scope");
  FUN_1800f4660(param_1,uVar10,param_2 + 0x20);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,&local_130,"show_viewmodel");
  FUN_1800f4660(param_1,uVar10,param_2 + 0x21);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,&local_130,"force_viewmodel_fov");
  FUN_1800f4660(param_1,uVar10,param_2 + 0x22);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,&local_130,"vm_override_fov");
  FUN_1800f4660(param_1,uVar10,param_2 + 0x23);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,&local_130,"vm_fov");
  FUN_1800f4760(param_1,uVar10,param_2 + 0x24);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,&local_130,"vm_override_position");
  FUN_1800f4660(param_1,uVar10,param_2 + 0x28);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,&local_130,&DAT_1806f78b0);
  FUN_1800f4840(param_1,uVar10,param_2 + 0x2c);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,&local_130,&DAT_1806f7884);
  FUN_1800f4840(param_1,uVar10,param_2 + 0x30);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,&local_130,&DAT_1806f788c);
  FUN_1800f4840(param_1,uVar10,param_2 + 0x34);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,&local_130,"vm_override_angles");
  FUN_1800f4660(param_1,uVar10,param_2 + 0x38);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,&local_130,"vm_pitch");
  FUN_1800f4840(param_1,uVar10,param_2 + 0x3c);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,&local_130,"vm_yaw");
  FUN_1800f4840(param_1,uVar10,param_2 + 0x40);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,&local_130,"vm_roll");
  FUN_1800f4840(param_1,uVar10,param_2 + 0x44);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,&local_130,"vm_override_modifiers");
  FUN_1800f4660(param_1,uVar10,param_2 + 0x48);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,&local_130,"vm_bobbing");
  FUN_1800f4760(param_1,uVar10,param_2 + 0x4c);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,&local_130,"vm_rotation_sway");
  FUN_1800f4760(param_1,uVar10,param_2 + 0x50);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,&local_130,"vm_velocity_sway");
  FUN_1800f4760(param_1,uVar10,param_2 + 0x54);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,&local_130,"vm_in_air_offset");
  FUN_1800f4760(param_1,uVar10,param_2 + 0x58);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,&local_130,"vm_lower_weapon");
  FUN_1800f4760(param_1,uVar10,param_2 + 0x5c);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,&local_130,"vm_ladder_bob");
  FUN_1800f4760(param_1,uVar10,param_2 + 0x60);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,&local_130,"force_third_person");
  FUN_1800f4660(param_1,uVar10,param_2 + 100);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,&local_130,"third_person_disablers");
  FUN_180154a90(param_1,uVar10,param_2 + 0x65);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,&local_130,"third_person_distance");
  FUN_1800f4760(param_1,uVar10,param_2 + 0x68);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,&local_130,"disable_overhead");
  FUN_180154a90(param_1,uVar10,param_2 + 0x6c);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,&local_130,"unlock_spectating");
  FUN_180154a90(param_1,uVar10,param_2 + 0x6e);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,&local_130,"visual_recoil");
  FUN_180154dc0(param_1,uVar10,param_2 + 0x70);
  FUN_18000f890(local_1b0);
  local_190 = (char *)0x0;
  uStack_188 = 0;
  local_190 = (char *)FUN_18000fb70(0x20);
  uVar8 = s_visuals_world_esp__1806f7a28._12_4_;
  uVar7 = s_visuals_world_esp__1806f7a28._8_4_;
  uVar6 = s_visuals_world_esp__1806f7a28._4_4_;
  local_180 = 0x12;
  local_178 = 0x1f;
  *(undefined4 *)local_190 = s_visuals_world_esp__1806f7a28._0_4_;
  *(undefined4 *)(local_190 + 4) = uVar6;
  *(undefined4 *)(local_190 + 8) = uVar7;
  *(undefined4 *)(local_190 + 0xc) = uVar8;
  *(undefined2 *)(local_190 + 0x10) = s_visuals_world_esp__1806f7a28._16_2_;
  local_190[0x12] = '\0';
  uVar10 = FUN_180073a70(local_1b0,local_1b0 + 4,&DAT_18058b61c);
  FUN_1801aad20(param_1,uVar10,param_2 + 0x74);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,local_1b0 + 4,"bomb_defused");
  FUN_180154fa0(param_1,uVar10,param_2 + 0xa8);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,local_1b0 + 4,"defuser");
  FUN_1800f4660(param_1,uVar10,param_2 + 0xb8);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,local_1b0 + 4,"defuser_in_time");
  FUN_180154fa0(param_1,uVar10,param_2 + 0xbc);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,local_1b0 + 4,"defuser_too_late");
  FUN_180154fa0(param_1,uVar10,param_2 + 0xcc);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,local_1b0 + 4,"damage_low");
  FUN_180154fa0(param_1,uVar10,param_2 + 0xdc);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,local_1b0 + 4,"damage_high");
  FUN_180154fa0(param_1,uVar10,param_2 + 0xec);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,local_1b0 + 4,"bomb_colorize_effects");
  FUN_1800f4660(param_1,uVar10,param_2 + 0xfc);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,local_1b0 + 4,"bomb_explosion");
  FUN_180154fa0(param_1,uVar10,param_2 + 0x100);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,local_1b0 + 4,"bomb_light");
  FUN_180154fa0(param_1,uVar10,param_2 + 0x110);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,local_1b0 + 4,"weapons");
  FUN_1801aad20(param_1,uVar10,param_2 + 0x120);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,local_1b0 + 4,"weapons_colorize_effects");
  FUN_1800f4660(param_1,uVar10,param_2 + 0x154);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,local_1b0 + 4,"weapon_effect");
  FUN_180154fa0(param_1,uVar10,param_2 + 0x158);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,local_1b0 + 4,"impact_effect");
  FUN_180154fa0(param_1,uVar10,param_2 + 0x168);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,local_1b0 + 4,"hostages");
  FUN_1801aad20(param_1,uVar10,param_2 + 0x178);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,local_1b0 + 4,"grenades");
  FUN_1801aad20(param_1,uVar10,param_2 + 0x1ac);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,local_1b0 + 4,"grenade_lethal");
  FUN_180154fa0(param_1,uVar10,param_2 + 0x1e0);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,local_1b0 + 4,"grenade_utility");
  FUN_180154fa0(param_1,uVar10,param_2 + 0x1f0);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,local_1b0 + 4,"item_exponent");
  FUN_1800f4760(param_1,uVar10,param_2 + 0x200);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,local_1b0 + 4,"item_thickness");
  FUN_1800f4840(param_1,uVar10,param_2 + 0x204);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,local_1b0 + 4,"item_points_thickness");
  FUN_1800f4840(param_1,uVar10,param_2 + 0x208);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,local_1b0 + 4,"item_shimmer");
  FUN_1800f4760(param_1,uVar10,param_2 + 0x20c);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,local_1b0 + 4,"smoke_radius");
  FUN_1800f4660(param_1,uVar10,param_2 + 0x210);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,local_1b0 + 4,"smoke_radius_color");
  FUN_180154fa0(param_1,uVar10,param_2 + 0x214);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,local_1b0 + 4,"smoke_options");
  FUN_1801ab040(param_1,uVar10,param_2 + 0x224);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,local_1b0 + 4,"inferno_radius");
  FUN_1800f4660(param_1,uVar10,param_2 + 0x238);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,local_1b0 + 4,"inferno_lethal");
  FUN_180154fa0(param_1,uVar10,param_2 + 0x23c);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,local_1b0 + 4,"inferno_safe");
  FUN_180154fa0(param_1,uVar10,param_2 + 0x24c);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,local_1b0 + 4,"inferno_options");
  FUN_1801ab040(param_1,uVar10,param_2 + 0x25c);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,local_1b0 + 4,"projectile_inferno");
  FUN_1800f4660(param_1,uVar10,param_2 + 0x270);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,local_1b0 + 4,"projectile_lethal");
  FUN_180154fa0(param_1,uVar10,param_2 + 0x274);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,local_1b0 + 4,"projectile_safe");
  FUN_180154fa0(param_1,uVar10,param_2 + 0x284);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,local_1b0 + 4,"colorize_smoke");
  FUN_1800f4660(param_1,uVar10,param_2 + 0x294);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,local_1b0 + 4,"smoke_ct");
  FUN_180154fa0(param_1,uVar10,param_2 + 0x298);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,local_1b0 + 4,"smoke_t");
  FUN_180154fa0(param_1,uVar10,param_2 + 0x2a8);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,local_1b0 + 4,"colorize_molotov");
  FUN_1800f4660(param_1,uVar10,param_2 + 0x2b8);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,local_1b0 + 4,"molotov_lethal");
  FUN_180154fa0(param_1,uVar10,param_2 + 700);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,local_1b0 + 4,"molotov_safe");
  FUN_180154fa0(param_1,uVar10,param_2 + 0x2cc);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,local_1b0 + 4,"disable_inferno_decals");
  FUN_1800f4660(param_1,uVar10,param_2 + 0x2dc);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,local_1b0 + 4,"colorize_explosion");
  FUN_1800f4660(param_1,uVar10,param_2 + 0x2dd);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,local_1b0 + 4,"explosion_color");
  FUN_180154fa0(param_1,uVar10,param_2 + 0x2e0);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,local_1b0 + 4,"effects");
  FUN_1800f4660(param_1,uVar10,param_2 + 0x2f0);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,local_1b0 + 4,"effects_color");
  FUN_180154fa0(param_1,uVar10,param_2 + 0x2f4);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,local_1b0 + 4,"effects_items");
  FUN_180155090(param_1,uVar10,param_2 + 0x304);
  FUN_18000f890(local_1b0);
  uVar15 = 0;
  do {
    uVar10 = FUN_18004e4f0(&local_a8,uVar15);
    uVar11 = FUN_180073a70(&local_88,local_1b0 + 4,"effects_item_color");
    uVar10 = FUN_180066820(local_1b0,uVar11,uVar10);
    FUN_180154fa0(param_1,uVar10,param_2 + 0x30c + uVar15 * 0x10);
    FUN_18000f890(local_1b0);
    FUN_18000f890(&local_88);
    FUN_18000f890(&local_a8);
    uVar15 = uVar15 + 1;
  } while (uVar15 < 5);
  uVar10 = FUN_180073a70(local_1b0,local_1b0 + 4,"effects_item_inherit");
  FUN_180155090(param_1,uVar10,param_2 + 0x35c);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,local_1b0 + 4,"trajectory");
  FUN_1800f4660(param_1,uVar10,param_2 + 0x361);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,local_1b0 + 4,"trajectory_base");
  FUN_180154fa0(param_1,uVar10,param_2 + 0x364);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,local_1b0 + 4,"trajectory_hit");
  FUN_180154fa0(param_1,uVar10,param_2 + 0x374);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,local_1b0 + 4,"trajectory_team_damage");
  FUN_180154fa0(param_1,uVar10,param_2 + 900);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,local_1b0 + 4,"trajectory_exponent");
  FUN_1800f4760(param_1,uVar10,param_2 + 0x394);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,local_1b0 + 4,"trajectory_thickness");
  FUN_1800f4840(param_1,uVar10,param_2 + 0x398);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,local_1b0 + 4,"trajectory_points_thickness");
  FUN_1800f4840(param_1,uVar10,param_2 + 0x39c);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,local_1b0 + 4,"trajectory_shimmer");
  FUN_180154a90(param_1,uVar10,param_2 + 0x3a0);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,local_1b0 + 4,"trajectory_shimmer_strength");
  FUN_1800f4760(param_1,uVar10,param_2 + 0x3a4);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,local_1b0 + 4,"trajectory_thrown");
  FUN_1800f4660(param_1,uVar10,param_2 + 0x3a8);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,local_1b0 + 4,"trajectory_pin_pulled_only");
  FUN_1800f4660(param_1,uVar10,param_2 + 0x3a9);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,local_1b0 + 4,"trajectory_precise");
  FUN_1800f4660(param_1,uVar10,param_2 + 0x3aa);
  FUN_18000f890(local_1b0);
  local_150 = (char *)0x0;
  uStack_148 = 0;
  local_150 = (char *)FUN_18000fb70(0x20);
  uVar8 = s_visuals_world_hud__1806f7df8._12_4_;
  uVar7 = s_visuals_world_hud__1806f7df8._8_4_;
  uVar6 = s_visuals_world_hud__1806f7df8._4_4_;
  local_140 = 0x12;
  local_138 = 0x1f;
  *(undefined4 *)local_150 = s_visuals_world_hud__1806f7df8._0_4_;
  *(undefined4 *)(local_150 + 4) = uVar6;
  *(undefined4 *)(local_150 + 8) = uVar7;
  *(undefined4 *)(local_150 + 0xc) = uVar8;
  *(undefined2 *)(local_150 + 0x10) = s_visuals_world_hud__1806f7df8._16_2_;
  local_150[0x12] = '\0';
  uVar10 = FUN_180073a70(local_1b0,&local_150,"radar");
  FUN_180154dc0(param_1,uVar10,param_2 + 0x3ac);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,&local_150,"scope_overlay");
  FUN_1800f4760(param_1,uVar10,param_2 + 0x3b0);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,&local_150,"scope_color_mode");
  FUN_1800f4760(param_1,uVar10,param_2 + 0x3b4);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,&local_150,"scope_color");
  FUN_180154fa0(param_1,uVar10,param_2 + 0x3b8);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,&local_150,"scope_outer");
  FUN_180154fa0(param_1,uVar10,param_2 + 0x3c8);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,&local_150,"scope_inner");
  FUN_180154fa0(param_1,uVar10,param_2 + 0x3d8);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,&local_150,"scope_selection");
  FUN_180154dc0(param_1,uVar10,param_2 + 1000);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,&local_150,"scope_rotation");
  FUN_1800f4760(param_1,uVar10,param_2 + 0x3ec);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,&local_150,"scope_offset");
  FUN_1800f4760(param_1,uVar10,param_2 + 0x3f0);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,&local_150,"scope_size");
  FUN_1800f4760(param_1,uVar10,param_2 + 0x3f4);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,&local_150,"scope_aspect");
  FUN_1800f4760(param_1,uVar10,param_2 + 0x3f8);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,&local_150,"scope_spread_scale");
  FUN_1800f4760(param_1,uVar10,param_2 + 0x3fc);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,&local_150,"scope_glow");
  FUN_1800f4660(param_1,uVar10,param_2 + 0x400);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,&local_150,"scope_glow_color");
  FUN_180154fa0(param_1,uVar10,param_2 + 0x404);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,&local_150,"inaccuracy");
  FUN_1800f4660(param_1,uVar10,param_2 + 0x414);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,&local_150,"inaccuracy_color");
  FUN_180154fa0(param_1,uVar10,param_2 + 0x418);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,&local_150,"inaccuracy_follow_recoil");
  FUN_1800f4660(param_1,uVar10,param_2 + 0x428);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,&local_150,"inaccuracy_only_in_scope");
  FUN_1800f4660(param_1,uVar10,param_2 + 0x429);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,&local_150,"inaccuracy_invert_fade");
  FUN_1800f4660(param_1,uVar10,param_2 + 0x42a);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,&local_150,"inaccuracy_fade_offset");
  FUN_1800f4760(param_1,uVar10,param_2 + 0x42c);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,&local_150,"preserve_notices");
  FUN_1800f4760(param_1,uVar10,param_2 + 0x430);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,&local_150,"hide_teammate_assists");
  FUN_1800f4660(param_1,uVar10,param_2 + 0x434);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,&local_150,"scoreboard_opacity");
  FUN_1800f4760(param_1,uVar10,param_2 + 0x438);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,&local_150,"scoreboard_width");
  FUN_1800f4760(param_1,uVar10,param_2 + 0x43c);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,&local_150,"reveal_money");
  FUN_1800f4660(param_1,uVar10,param_2 + 0x440);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,&local_150,"reveal_ranks");
  FUN_1800f4660(param_1,uVar10,param_2 + 0x441);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,&local_150,"equipment");
  FUN_1800f4760(param_1,uVar10,param_2 + 0x444);
  FUN_18000f890(local_1b0);
  puVar12 = (undefined8 *)FUN_180073a70(local_1b0,&local_150,"equipment_items");
  if ((char)param_1[3] == '\0') {
    puVar2 = (undefined8 *)*param_1;
    if ((ulonglong)puVar2[3] < 0x10) {
      _Buf2 = puVar2;
    }
    else {
      _Buf2 = (undefined8 *)*puVar2;
    }
    sVar13 = puVar12[2];
    if (0xf < (ulonglong)puVar12[3]) {
      puVar12 = (undefined8 *)*puVar12;
    }
    if (sVar13 == puVar2[2]) {
      if (sVar13 != 0) {
        iVar9 = memcmp(puVar12,_Buf2,sVar13);
        if (iVar9 != 0) goto LAB_180159d12;
      }
      *(undefined1 *)(param_1 + 3) = 1;
      if ((undefined4 *)param_1[1] == (undefined4 *)0x0) {
        piVar4 = (int *)param_1[2];
        if (*piVar4 != 5) goto LAB_180159d12;
        if (*(longlong *)(piVar4 + 0x10) != 0) {
          *(byte *)(param_2 + 0x448) = (byte)**(undefined4 **)(piVar4 + 10) & 1;
          if (1 < *(ulonglong *)(param_1[2] + 0x40)) {
            *(bool *)(param_2 + 0x449) = (**(byte **)(param_1[2] + 0x28) & 2) != 0;
            if (2 < *(ulonglong *)(param_1[2] + 0x40)) {
              *(bool *)(param_2 + 0x44a) = (**(byte **)(param_1[2] + 0x28) & 4) != 0;
              if (3 < *(ulonglong *)(param_1[2] + 0x40)) {
                *(bool *)(param_2 + 1099) = (**(byte **)(param_1[2] + 0x28) & 8) != 0;
                if (4 < *(ulonglong *)(param_1[2] + 0x40)) {
                  *(bool *)(param_2 + 0x44c) = (**(byte **)(param_1[2] + 0x28) & 0x10) != 0;
                  if (5 < *(ulonglong *)(param_1[2] + 0x40)) {
                    *(bool *)(param_2 + 0x44d) = (**(byte **)(param_1[2] + 0x28) & 0x20) != 0;
                    if (6 < *(ulonglong *)(param_1[2] + 0x40)) {
                      *(bool *)(param_2 + 0x44e) = (**(byte **)(param_1[2] + 0x28) & 0x40) != 0;
                      if (7 < *(ulonglong *)(param_1[2] + 0x40)) {
                        *(bool *)(param_2 + 0x44f) = (**(byte **)(param_1[2] + 0x28) & 0x80) != 0;
                        if (8 < *(ulonglong *)(param_1[2] + 0x40)) {
                          *(bool *)(param_2 + 0x450) = (**(uint **)(param_1[2] + 0x28) & 0x100) != 0
                          ;
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
      else {
        *(undefined4 *)param_1[1] = 5;
        lVar3 = param_1[1];
        plVar1 = (longlong *)(lVar3 + 0x28);
        local_1c8 = param_2 + 0x451;
        if (*plVar1 != *(longlong *)(lVar3 + 0x30)) {
          *(longlong *)(lVar3 + 0x30) = *plVar1;
        }
        *(undefined8 *)(lVar3 + 0x40) = 0;
        local_e8 = (char *)*plVar1;
        uStack_e0 = 0;
        FUN_1801c2bd0(plVar1,&local_110,&local_e8,param_2 + 0x448);
      }
      *(undefined1 *)((longlong)param_1 + 0x19) = 1;
    }
  }
LAB_180159d12:
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,&local_150,"force_sniper_crosshair");
  FUN_1800f4660(param_1,uVar10,param_2 + 0x451);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,&local_150,"force_while_scoped");
  FUN_1800f4660(param_1,uVar10,param_2 + 0x452);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,&local_150,"force_while_c4");
  FUN_1800f4660(param_1,uVar10,param_2 + 0x453);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,&local_150,"hide_while_knife");
  FUN_1800f4660(param_1,uVar10,param_2 + 0x454);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,&local_150,"hide_while_grenade");
  FUN_1800f4660(param_1,uVar10,param_2 + 0x455);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,&local_150,"penetration");
  FUN_1800f4660(param_1,uVar10,param_2 + 0x456);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,&local_150,"penetration_base");
  FUN_180154fa0(param_1,uVar10,param_2 + 0x458);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,&local_150,"penetration_penetrable");
  FUN_180154fa0(param_1,uVar10,param_2 + 0x468);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,&local_150,"penetration_target");
  FUN_180154fa0(param_1,uVar10,param_2 + 0x478);
  FUN_18000f890(local_1b0);
  local_e8 = (char *)0x0;
  uStack_e0 = 0;
  local_e8 = (char *)FUN_18000fb70(0x20);
  uVar8 = s_visuals_world_removals__1806f8148._12_4_;
  uVar7 = s_visuals_world_removals__1806f8148._8_4_;
  uVar6 = s_visuals_world_removals__1806f8148._4_4_;
  local_d8 = 0x17;
  local_d0 = 0x1f;
  *(undefined4 *)local_e8 = s_visuals_world_removals__1806f8148._0_4_;
  *(undefined4 *)(local_e8 + 4) = uVar6;
  *(undefined4 *)(local_e8 + 8) = uVar7;
  *(undefined4 *)(local_e8 + 0xc) = uVar8;
  *(ulonglong *)(local_e8 + 0xf) =
       CONCAT71(s_visuals_world_removals__1806f8148._16_7_,s_visuals_world_removals__1806f8148[0xf])
  ;
  local_e8[0x17] = '\0';
  uVar10 = FUN_180073a70(local_1b0,&local_e8,"team_intro");
  FUN_1800f4660(param_1,uVar10,param_2 + 0x488);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,&local_e8,"panorama_dots");
  FUN_1800f4660(param_1,uVar10,param_2 + 0x489);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,&local_e8,"bottom_gradient");
  FUN_1800f4660(param_1,uVar10,param_2 + 0x48a);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,&local_e8,"damage_indicator");
  FUN_1800f4660(param_1,uVar10,param_2 + 0x48b);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,&local_e8,"server_ads");
  FUN_1800f4660(param_1,uVar10,param_2 + 0x48c);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,&local_e8,"flashbang");
  FUN_1800f4660(param_1,uVar10,param_2 + 0x48d);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,&local_e8,&DAT_1806e7598);
  FUN_1800f4660(param_1,uVar10,param_2 + 0x48e);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,&local_e8,&DAT_1806f816c);
  FUN_1800f4660(param_1,uVar10,param_2 + 0x48f);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,&local_e8,"carried_hostage");
  FUN_1800f4660(param_1,uVar10,param_2 + 0x490);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,&local_e8,"post_processing");
  FUN_1800f4660(param_1,uVar10,param_2 + 0x491);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,&local_e8,"water");
  FUN_1800f4660(param_1,uVar10,param_2 + 0x492);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,&local_e8,"blood");
  FUN_1800f4660(param_1,uVar10,param_2 + 0x493);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,&local_e8,"decals");
  FUN_1800f4660(param_1,uVar10,param_2 + 0x494);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,&local_e8,"ragdolls");
  FUN_1800f4760(param_1,uVar10,param_2 + 0x498);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,&local_e8,"gravity");
  FUN_1800f4760(param_1,uVar10,param_2 + 0x49c);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,&local_e8,"friction");
  FUN_1800f4760(param_1,uVar10,param_2 + 0x4a0);
  FUN_18000f890(local_1b0);
  local_a8 = (char *)0x0;
  uStack_a0 = 0;
  local_a8 = (char *)FUN_18000fb70(0x20);
  uVar8 = s_visuals_world_hitmarker__1806f81f8._12_4_;
  uVar7 = s_visuals_world_hitmarker__1806f81f8._8_4_;
  uVar6 = s_visuals_world_hitmarker__1806f81f8._4_4_;
  local_98 = 0x18;
  local_90 = 0x1f;
  *(undefined4 *)local_a8 = s_visuals_world_hitmarker__1806f81f8._0_4_;
  *(undefined4 *)(local_a8 + 4) = uVar6;
  *(undefined4 *)(local_a8 + 8) = uVar7;
  *(undefined4 *)(local_a8 + 0xc) = uVar8;
  *(undefined8 *)(local_a8 + 0x10) = s_visuals_world_hitmarker__1806f81f8._16_8_;
  local_a8[0x18] = '\0';
  uVar10 = FUN_180073a70(local_1b0,&local_a8,"marker_2d");
  FUN_1800f4660(param_1,uVar10,param_2 + 0x4a4);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,&local_a8,"color_2d");
  FUN_180154fa0(param_1,uVar10,param_2 + 0x4a8);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,&local_a8,"duration_2d");
  FUN_1800f4840(param_1,uVar10,param_2 + 0x4b8);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,&local_a8,"marker_3d");
  FUN_1800f4660(param_1,uVar10,param_2 + 0x4bc);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,&local_a8,"color_3d");
  FUN_180154fa0(param_1,uVar10,param_2 + 0x4c0);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,&local_a8,"duration_3d");
  FUN_1800f4840(param_1,uVar10,param_2 + 0x4d0);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,&local_a8,"damage");
  FUN_1800f4660(param_1,uVar10,param_2 + 0x4d4);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,&local_a8,"color_damage");
  FUN_180154fa0(param_1,uVar10,param_2 + 0x4d8);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,&local_a8,"duration_damage");
  FUN_1800f4840(param_1,uVar10,param_2 + 0x4e8);
  FUN_18000f890(local_1b0);
  local_c8 = (char *)0x0;
  uStack_c0 = 0;
  local_c8 = (char *)FUN_18000fb70(0x20);
  uVar8 = s_visuals_world_tracers__1806f8290._8_4_;
  uVar7 = s_visuals_world_tracers__1806f8290._4_4_;
  local_b8 = 0x16;
  local_b0 = 0x1f;
  uVar6 = CONCAT22(s_visuals_world_tracers__1806f8290._14_2_,
                   s_visuals_world_tracers__1806f8290._12_2_);
  *(undefined4 *)local_c8 = s_visuals_world_tracers__1806f8290._0_4_;
  *(undefined4 *)(local_c8 + 4) = uVar7;
  *(undefined4 *)(local_c8 + 8) = uVar8;
  *(undefined4 *)(local_c8 + 0xc) = uVar6;
  *(ulonglong *)(local_c8 + 0xe) =
       CONCAT62(s_visuals_world_tracers__1806f8290._16_6_,s_visuals_world_tracers__1806f8290._14_2_)
  ;
  local_c8[0x16] = '\0';
  uVar10 = FUN_180073a70(local_1b0,&local_c8,"enemies");
  FUN_1800f4660(param_1,uVar10,param_2 + 0x4ec);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,&local_c8,"enemies_color");
  FUN_180154fa0(param_1,uVar10,param_2 + 0x4f0);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,&local_c8,"enemies_duration");
  FUN_1800f4840(param_1,uVar10,param_2 + 0x500);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,&local_c8,"teammates");
  FUN_1800f4660(param_1,uVar10,param_2 + 0x504);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,&local_c8,"teammates_color");
  FUN_180154fa0(param_1,uVar10,param_2 + 0x508);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,&local_c8,"teammates_duration");
  FUN_1800f4840(param_1,uVar10,param_2 + 0x518);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,&local_c8,"local");
  FUN_1800f4660(param_1,uVar10,param_2 + 0x51c);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,&local_c8,"local_color");
  FUN_180154fa0(param_1,uVar10,param_2 + 0x520);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,&local_c8,"local_duration");
  FUN_1800f4840(param_1,uVar10,param_2 + 0x530);
  FUN_18000f890(local_1b0);
  uVar10 = FUN_180073a70(local_1b0,&local_c8,"shared");
  FUN_1800f4660(param_1,uVar10,param_2 + 0x534);
  FUN_18000f890(local_1b0);
  local_1b0[0] = "enemies";
  local_1b0[1] = "teammates";
  local_1b0[2] = "local";
  local_1b0[3] = "shared";
  uVar15 = 0;
  do {
    pcVar14 = local_1b0[uVar15];
    uVar10 = FUN_180073a70(local_68,&local_c8,"style_");
    sVar13 = strlen(pcVar14);
    puVar12 = (undefined8 *)FUN_1800134a0(uVar10,pcVar14,sVar13);
    local_88 = *puVar12;
    uStack_80 = puVar12[1];
    local_78 = puVar12[2];
    uStack_70 = puVar12[3];
    puVar12[2] = 0;
    puVar12[3] = 0xf;
    *(undefined1 *)puVar12 = 0;
    puVar12 = (undefined8 *)FUN_1800134a0(&local_88,&DAT_1806e6f24,1);
    local_110 = (char *)*puVar12;
    uStack_108 = puVar12[1];
    local_100 = puVar12[2];
    uStack_f8 = puVar12[3];
    puVar12[2] = 0;
    puVar12[3] = 0xf;
    *(undefined1 *)puVar12 = 0;
    FUN_18000f890(&local_88);
    FUN_18000f890(local_68);
    uVar10 = FUN_180073a70(local_170,&local_110,"use_3d_scale");
    FUN_1800f4660(param_1,uVar10,param_2 + 0x538 + uVar15 * 0x18);
    FUN_18000f890(local_170);
    uVar10 = FUN_180073a70(local_170,&local_110,"glow_opacity");
    FUN_1800f4760(param_1,uVar10,param_2 + 0x53c + uVar15 * 0x18);
    FUN_18000f890(local_170);
    uVar10 = FUN_180073a70(local_170,&local_110,"thickness");
    FUN_1800f4840(param_1,uVar10,param_2 + 0x540 + uVar15 * 0x18);
    FUN_18000f890(local_170);
    uVar10 = FUN_180073a70(local_170,&local_110,"scale");
    FUN_1800f4760(param_1,uVar10,param_2 + 0x544 + uVar15 * 0x18);
    FUN_18000f890(local_170);
    uVar10 = FUN_180073a70(local_170,&local_110,"glow_width");
    FUN_1800f4840(param_1,uVar10,param_2 + 0x548 + uVar15 * 0x18);
    FUN_18000f890(local_170);
    uVar10 = FUN_180073a70(local_170,&local_110,"glow_radius");
    FUN_1800f4840(param_1,uVar10,param_2 + 0x54c + uVar15 * 0x18);
    FUN_18000f890(local_170);
    FUN_18000f890(&local_110);
    uVar15 = uVar15 + 1;
  } while (uVar15 < 4);
  local_110 = (char *)0x0;
  uStack_108 = 0;
  local_110 = (char *)FUN_18000fb70(0x20);
  uVar8 = s_visuals_world_impacts__1806f8398._8_4_;
  uVar7 = s_visuals_world_impacts__1806f8398._4_4_;
  local_100 = 0x16;
  uStack_f8 = 0x1f;
  uVar6 = CONCAT22(s_visuals_world_impacts__1806f8398._14_2_,
                   s_visuals_world_impacts__1806f8398._12_2_);
  *(undefined4 *)local_110 = s_visuals_world_impacts__1806f8398._0_4_;
  *(undefined4 *)(local_110 + 4) = uVar7;
  *(undefined4 *)(local_110 + 8) = uVar8;
  *(undefined4 *)(local_110 + 0xc) = uVar6;
  *(ulonglong *)(local_110 + 0xe) =
       CONCAT62(s_visuals_world_impacts__1806f8398._16_6_,s_visuals_world_impacts__1806f8398._14_2_)
  ;
  local_110[0x16] = '\0';
  uVar10 = FUN_180073a70(local_170,&local_110,"enabled");
  FUN_1800f4660(param_1,uVar10,param_2 + 0x598);
  FUN_18000f890(local_170);
  uVar10 = FUN_180073a70(local_170,&local_110,"client");
  FUN_180154fa0(param_1,uVar10,param_2 + 0x59c);
  FUN_18000f890(local_170);
  uVar10 = FUN_180073a70(local_170,&local_110,"server");
  FUN_180154fa0(param_1,uVar10,param_2 + 0x5ac);
  FUN_18000f890(local_170);
  uVar10 = FUN_180073a70(local_170,&local_110,"scale");
  FUN_1800f4760(param_1,uVar10,param_2 + 0x5bc);
  FUN_18000f890(local_170);
  uVar10 = FUN_180073a70(local_170,&local_110,"rounding");
  FUN_1800f4760(param_1,uVar10,param_2 + 0x5c0);
  FUN_18000f890(local_170);
  uVar10 = FUN_180073a70(local_170,&local_110,"fill_opacity");
  FUN_1800f4760(param_1,uVar10,param_2 + 0x5c4);
  FUN_18000f890(local_170);
  uVar10 = FUN_180073a70(local_170,&local_110,"outline_opacity");
  FUN_1800f4760(param_1,uVar10,param_2 + 0x5c8);
  FUN_18000f890(local_170);
  uVar10 = FUN_180073a70(local_170,&local_110,"glow_opacity");
  FUN_1800f4760(param_1,uVar10,param_2 + 0x5cc);
  FUN_18000f890(local_170);
  uVar10 = FUN_180073a70(local_170,&local_110,&DAT_1806f83d8);
  FUN_1800f4840(param_1,uVar10,param_2 + 0x5d0);
  FUN_18000f890(local_170);
  uVar10 = FUN_180073a70(local_170,&local_110,"duration");
  FUN_1800f4840(param_1,uVar10,param_2 + 0x5d4);
  FUN_18000f890(local_170);
  uVar10 = FUN_180073a70(local_170,&local_110,"sparks");
  FUN_1800f4660(param_1,uVar10,param_2 + 0x5d8);
  FUN_18000f890(local_170);
  uVar10 = FUN_180073a70(local_170,&local_110,"sparks_color");
  FUN_180154fa0(param_1,uVar10,param_2 + 0x5dc);
  FUN_18000f890(local_170);
  uVar10 = FUN_180073a70(local_170,&local_110,"sparks_glow");
  FUN_180154fa0(param_1,uVar10,param_2 + 0x5ec);
  FUN_18000f890(local_170);
  uVar10 = FUN_180073a70(local_170,&local_110,"sparks_radius");
  FUN_1800f4840(param_1,uVar10,param_2 + 0x5fc);
  FUN_18000f890(local_170);
  uVar10 = FUN_180073a70(local_170,&local_110,"sparks_count");
  FUN_1800f4760(param_1,uVar10,param_2 + 0x600);
  FUN_18000f890(local_170);
  uVar10 = FUN_180073a70(local_170,&local_110,"sparks_spread");
  FUN_1800f4760(param_1,uVar10,param_2 + 0x604);
  FUN_18000f890(local_170);
  uVar10 = FUN_180073a70(local_170,&local_110,"sparks_height");
  FUN_1800f4760(param_1,uVar10,param_2 + 0x608);
  FUN_18000f890(local_170);
  uVar10 = FUN_180073a70(local_170,&local_110,"sparks_lifetime");
  FUN_1800f4840(param_1,uVar10,param_2 + 0x60c);
  FUN_18000f890(local_170);
  if (0xf < uStack_f8) {
    uVar15 = uStack_f8 + 1;
    pcVar14 = local_110;
    if (0xfff < uVar15) {
      pcVar14 = *(char **)(local_110 + -8);
      if ((char *)0x1f < local_110 + (-8 - (longlong)pcVar14)) {
        pcVar5 = (code *)swi(0x29);
        (*pcVar5)(5);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar15 = uStack_f8 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar14,uVar15);
  }
  FUN_18000f890(&local_c8);
  FUN_18000f890(&local_a8);
  FUN_18000f890(&local_e8);
  FUN_18000f890(&local_150);
  FUN_18000f890(local_1b0 + 4);
  FUN_18000f890(&local_130);
  return;
}



/* ===== 18015acf0 FUN_18015acf0 ===== */

void FUN_18015acf0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,param_2);
    return;
  }
  FUN_180024b50(lVar1);
  *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  return;
}



/* ===== 18015ad30 FUN_18015ad30 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18015ad30(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined1 local_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_58;
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,param_2);
  }
  else {
    FUN_180024b50(lVar1);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  uVar2 = FUN_180073a70(local_38,param_2,"_mode");
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



/* ===== 18015ade0 FUN_18015ade0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18015ade0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_88 [32];
  undefined1 local_68 [32];
  undefined1 local_48 [32];
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_88;
  uVar2 = FUN_180073a70(local_68,param_2,".esp.enabled");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_68);
  uVar2 = FUN_180073a70(local_68,param_2,".esp.box");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_68);
  uVar2 = FUN_180073a70(local_68,param_2,".esp.name");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_68);
  uVar2 = FUN_180073a70(local_68,param_2,".esp.icon");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_68);
  uVar2 = FUN_180073a70(local_68,param_2,".esp.distance");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_68);
  uVar2 = FUN_180073a70(local_68,param_2,".esp.timer");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_68);
  uVar2 = FUN_180073a70(local_68,param_2,".esp.damage");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_68);
  uVar2 = FUN_180073a70(local_68,param_2,".esp.color");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_68);
  uVar2 = FUN_180073a70(local_68,param_2,".esp.max_distance");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_68);
  uVar2 = FUN_180073a70(local_48,param_2,".chams");
  uVar3 = FUN_180073a70(local_68,uVar2,".enabled");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar3);
  }
  else {
    FUN_180024b50(lVar1,uVar3);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_68);
  uVar3 = FUN_180073a70(local_68,uVar2,".visible");
  FUN_1801c2d10(param_1,uVar3);
  FUN_18000f890(local_68);
  uVar3 = FUN_180073a70(local_68,uVar2,".occluded");
  FUN_1801c2d10(param_1,uVar3);
  FUN_18000f890(local_68);
  uVar3 = FUN_180073a70(local_68,uVar2,".overlay");
  FUN_1801c2d10(param_1,uVar3);
  FUN_18000f890(local_68);
  uVar2 = FUN_180073a70(local_68,uVar2,".overlay_occluded");
  FUN_1801c2d10(param_1,uVar2);
  FUN_18000f890(local_68);
  FUN_18000f890(local_48);
  uVar2 = FUN_180073a70(local_48,param_2,".glow.enabled");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_48);
  uVar2 = FUN_180073a70(local_48,param_2,".glow.color");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_48);
  return;
}



/* ===== 18015b220 FUN_18015b220 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18015b220(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  char *_Str;
  longlong lVar2;
  undefined8 uVar3;
  size_t sVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  undefined1 auStack_118 [40];
  longlong local_f0;
  undefined1 local_e8 [32];
  undefined1 local_c8 [32];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 local_88 [32];
  undefined1 local_68 [32];
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_118;
  local_f0 = param_3;
  uVar3 = FUN_180073a70(&local_a8,param_2,".esp.enabled");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar3);
  }
  else {
    FUN_180024b50(lVar1,uVar3);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(&local_a8);
  uVar10 = 0;
  do {
    _Str = (&PTR_s_health_bar_1805e7de0)[uVar10];
    uVar3 = FUN_180073a70(local_68,param_2,".esp.item.");
    sVar4 = strlen(_Str);
    puVar5 = (undefined4 *)FUN_1800134a0(uVar3,_Str,sVar4);
    local_a8 = *puVar5;
    uStack_a4 = puVar5[1];
    uStack_a0 = puVar5[2];
    uStack_9c = puVar5[3];
    local_98 = puVar5[4];
    uStack_94 = puVar5[5];
    uStack_90 = puVar5[6];
    uStack_8c = puVar5[7];
    *(undefined1 *)puVar5 = 0;
    *(undefined8 *)(puVar5 + 4) = 0;
    *(undefined8 *)(puVar5 + 6) = 0xf;
    FUN_18000f890(local_68);
    uVar3 = FUN_180073a70(local_c8,&local_a8,".enabled");
    lVar1 = *(longlong *)(param_1 + 8);
    if (lVar1 == *(longlong *)(param_1 + 0x10)) {
      FUN_180028f00(param_1,lVar1,uVar3);
    }
    else {
      FUN_180024b50(lVar1,uVar3);
      *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
    }
    FUN_18000f890(local_c8);
    uVar3 = FUN_180073a70(local_c8,&local_a8,".side");
    lVar1 = *(longlong *)(param_1 + 8);
    if (lVar1 == *(longlong *)(param_1 + 0x10)) {
      FUN_180028f00(param_1,lVar1,uVar3);
    }
    else {
      FUN_180024b50(lVar1,uVar3);
      *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
    }
    FUN_18000f890(local_c8);
    uVar3 = FUN_180073a70(local_c8,&local_a8,".position");
    lVar1 = *(longlong *)(param_1 + 8);
    if (lVar1 == *(longlong *)(param_1 + 0x10)) {
      FUN_180028f00(param_1,lVar1,uVar3);
    }
    else {
      FUN_180024b50(lVar1,uVar3);
      *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
    }
    FUN_18000f890(local_c8);
    uVar3 = FUN_180073a70(local_c8,&local_a8);
    lVar1 = *(longlong *)(param_1 + 8);
    if (lVar1 == *(longlong *)(param_1 + 0x10)) {
      FUN_180028f00(param_1,lVar1);
    }
    else {
      FUN_180024b50(lVar1,uVar3);
      *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
    }
    FUN_18000f890(local_c8);
    iVar7 = 0;
    iVar11 = (&DAT_1805e7f10)[uVar10 * 0x46];
    if (0 < iVar11) {
      uVar9 = 0;
      iVar7 = 0;
      do {
        if (iVar7 < (int)((&DAT_1805e7f24)[uVar10 * 0x46 + uVar9 * 10] +
                         (&DAT_1805e7f20)[uVar10 * 0x46 + uVar9 * 10])) {
          iVar7 = (&DAT_1805e7f24)[uVar10 * 0x46 + uVar9 * 10] +
                  (&DAT_1805e7f20)[uVar10 * 0x46 + uVar9 * 10];
        }
        uVar8 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar8;
      } while ((int)uVar8 < iVar11);
    }
    if (1 < iVar11) {
      uVar3 = FUN_180073a70(local_c8,&local_a8,".color_mode");
      lVar1 = *(longlong *)(param_1 + 8);
      if (lVar1 == *(longlong *)(param_1 + 0x10)) {
        FUN_180028f00(param_1,lVar1,uVar3);
      }
      else {
        FUN_180024b50(lVar1,uVar3);
        *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
      }
      FUN_18000f890(local_c8);
    }
    iVar11 = 0;
    if (iVar7 < 1) {
      iVar7 = 1;
    }
    if (0 < iVar7) {
      do {
        uVar3 = FUN_18003a390(local_e8,iVar11);
        uVar6 = FUN_180073a70(local_88,&local_a8,".color");
        uVar3 = FUN_180066820(local_c8,uVar6,uVar3);
        lVar1 = *(longlong *)(param_1 + 8);
        if (lVar1 == *(longlong *)(param_1 + 0x10)) {
          FUN_180028f00(param_1,lVar1,uVar3);
        }
        else {
          FUN_180024b50(lVar1,uVar3);
          *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
        }
        FUN_18000f890(local_c8);
        FUN_18000f890(local_88);
        FUN_18000f890(local_e8);
        iVar11 = iVar11 + 1;
      } while (iVar11 < iVar7);
    }
    if ((&DAT_1805e7eec)[uVar10 * 0x46] == 0) {
      uVar3 = FUN_180073a70(local_e8,&local_a8,".background");
      lVar1 = *(longlong *)(param_1 + 8);
      if (lVar1 == *(longlong *)(param_1 + 0x10)) {
        FUN_180028f00(param_1,lVar1,uVar3);
      }
      else {
        FUN_180024b50(lVar1,uVar3);
        *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
      }
      FUN_18000f890(local_e8);
      uVar3 = FUN_180073a70(local_e8,&local_a8,".shadow");
      lVar1 = *(longlong *)(param_1 + 8);
      if (lVar1 == *(longlong *)(param_1 + 0x10)) {
        FUN_180028f00(param_1,lVar1,uVar3);
      }
      else {
        FUN_180024b50(lVar1,uVar3);
        *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
      }
      FUN_18000f890(local_e8);
      uVar3 = FUN_180073a70(local_e8,&local_a8,".shadow_color");
      lVar1 = *(longlong *)(param_1 + 8);
      if (lVar1 == *(longlong *)(param_1 + 0x10)) {
        FUN_180028f00(param_1,lVar1,uVar3);
      }
      else {
        FUN_180024b50(lVar1,uVar3);
        *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
      }
      FUN_18000f890(local_e8);
      uVar3 = FUN_180073a70(local_e8,&local_a8,".format");
      lVar1 = *(longlong *)(param_1 + 8);
      if (lVar1 == *(longlong *)(param_1 + 0x10)) {
        FUN_180028f00(param_1,lVar1,uVar3);
      }
      else {
        FUN_180024b50(lVar1,uVar3);
        *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
      }
      FUN_18000f890(local_e8);
    }
    if ((&DAT_1805e7eec)[uVar10 * 0x46] - 1 < 2) {
      uVar3 = FUN_180073a70(local_e8,&local_a8,".font");
      lVar1 = *(longlong *)(param_1 + 8);
      if (lVar1 == *(longlong *)(param_1 + 0x10)) {
        FUN_180028f00(param_1,lVar1,uVar3);
      }
      else {
        FUN_180024b50(lVar1,uVar3);
        *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
      }
      FUN_18000f890(local_e8);
      uVar3 = FUN_180073a70(local_e8,&local_a8,".case");
      lVar1 = *(longlong *)(param_1 + 8);
      if (lVar1 == *(longlong *)(param_1 + 0x10)) {
        FUN_180028f00(param_1,lVar1,uVar3);
      }
      else {
        FUN_180024b50(lVar1,uVar3);
        *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
      }
      FUN_18000f890(local_e8);
    }
    if ((&DAT_1805e7eec)[uVar10 * 0x46] - 3 < 2) {
      uVar3 = FUN_180073a70(local_e8,&local_a8,".inverted");
      lVar1 = *(longlong *)(param_1 + 8);
      if (lVar1 == *(longlong *)(param_1 + 0x10)) {
        FUN_180028f00(param_1,lVar1,uVar3);
      }
      else {
        FUN_180024b50(lVar1,uVar3);
        *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
      }
      FUN_18000f890(local_e8);
    }
    FUN_18000f890(&local_a8);
    uVar10 = uVar10 + 1;
  } while (uVar10 < 0x1d);
  uVar3 = FUN_180073a70(local_e8,param_2,".esp.expected_damage");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar3);
  }
  else {
    FUN_180024b50(lVar1,uVar3);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_e8);
  uVar3 = FUN_180073a70(local_e8,param_2,".esp.pulse_mode");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar3);
  }
  else {
    FUN_180024b50(lVar1,uVar3);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_e8);
  uVar10 = 0;
  do {
    uVar3 = FUN_18004e4f0(local_c8,uVar10);
    uVar6 = FUN_180073a70(local_88,param_2,".esp.pulse_color");
    uVar3 = FUN_180066820(local_e8,uVar6,uVar3);
    lVar1 = *(longlong *)(param_1 + 8);
    if (lVar1 == *(longlong *)(param_1 + 0x10)) {
      FUN_180028f00(param_1,lVar1,uVar3);
    }
    else {
      FUN_180024b50(lVar1,uVar3);
      *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
    }
    FUN_18000f890(local_e8);
    FUN_18000f890(local_88);
    FUN_18000f890(local_c8);
    uVar10 = uVar10 + 1;
  } while (uVar10 < 3);
  uVar3 = FUN_180073a70(local_e8,param_2,".esp.name_avatar");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar3);
  }
  else {
    FUN_180024b50(lVar1,uVar3);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_e8);
  uVar3 = FUN_180073a70(local_e8,param_2,".esp.icon_order0");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar3);
  }
  else {
    FUN_180024b50(lVar1,uVar3);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_e8);
  uVar3 = FUN_180073a70(local_e8,param_2,".esp.icon_order1");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar3);
  }
  else {
    FUN_180024b50(lVar1,uVar3);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_e8);
  uVar3 = FUN_180073a70(local_e8,param_2,".esp.icon_selection");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar3);
  }
  else {
    FUN_180024b50(lVar1,uVar3);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_e8);
  uVar3 = FUN_180073a70(local_e8,param_2,".esp.icon_dimming");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar3);
  }
  else {
    FUN_180024b50(lVar1,uVar3);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_e8);
  uVar3 = FUN_180073a70(local_e8,param_2,".esp.icon_clip_rect");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar3);
  }
  else {
    FUN_180024b50(lVar1,uVar3);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_e8);
  uVar3 = FUN_180073a70(local_e8,param_2,".esp.icon_low_ammo");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar3);
  }
  else {
    FUN_180024b50(lVar1,uVar3);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_e8);
  uVar3 = FUN_180073a70(local_e8,param_2,".esp.icon_all_grenades");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar3);
  }
  else {
    FUN_180024b50(lVar1,uVar3);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_e8);
  uVar3 = FUN_180073a70(local_e8,param_2,".esp.icon_pin_pulled");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar3);
  }
  else {
    FUN_180024b50(lVar1,uVar3);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_e8);
  uVar3 = FUN_180073a70(local_e8,param_2,".esp.taser_in_hand");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar3);
  }
  else {
    FUN_180024b50(lVar1,uVar3);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_e8);
  uVar3 = FUN_180073a70(local_e8,param_2,".esp.offscreen_arrows");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar3);
  }
  else {
    FUN_180024b50(lVar1,uVar3);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_e8);
  uVar3 = FUN_180073a70(local_e8,param_2,".esp.arrow_color");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar3);
  }
  else {
    FUN_180024b50(lVar1,uVar3);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_e8);
  uVar3 = FUN_180073a70(local_e8,param_2,".esp.offscreen_arrow_size");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar3);
  }
  else {
    FUN_180024b50(lVar1,uVar3);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_e8);
  uVar3 = FUN_180073a70(local_e8,param_2,".esp.offscreen_arrow_radius");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar3);
  }
  else {
    FUN_180024b50(lVar1,uVar3);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_e8);
  uVar3 = FUN_180073a70(local_e8,param_2,".esp.sounds");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar3);
  }
  else {
    FUN_180024b50(lVar1,uVar3);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_e8);
  uVar3 = FUN_180073a70(local_e8,param_2,".esp.sound_color");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar3);
  }
  else {
    FUN_180024b50(lVar1,uVar3);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_e8);
  lVar1 = local_f0;
  uVar10 = 0;
  do {
    uVar3 = FUN_18004e4f0(local_88,uVar10);
    uVar6 = FUN_180073a70(local_e8,param_2,".esp.custom");
    FUN_180066820(&local_a8,uVar6,uVar3);
    FUN_18000f890(local_e8);
    FUN_18000f890(local_88);
    uVar3 = FUN_180073a70(local_c8,&local_a8,&DAT_1806f6a6c);
    lVar2 = *(longlong *)(param_1 + 8);
    if (lVar2 == *(longlong *)(param_1 + 0x10)) {
      FUN_180028f00(param_1,lVar2,uVar3);
    }
    else {
      FUN_180024b50(lVar2,uVar3);
      *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
    }
    FUN_18000f890(local_c8);
    if (*(char *)(lVar1 + 0x11d8 + uVar10 * 0x74) != '\0') {
      uVar3 = FUN_180073a70(local_c8,&local_a8,".enabled");
      lVar2 = *(longlong *)(param_1 + 8);
      if (lVar2 == *(longlong *)(param_1 + 0x10)) {
        FUN_180028f00(param_1,lVar2,uVar3);
      }
      else {
        FUN_180024b50(lVar2,uVar3);
        *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
      }
      FUN_18000f890(local_c8);
      uVar3 = FUN_180073a70(local_c8,&local_a8,".side");
      lVar2 = *(longlong *)(param_1 + 8);
      if (lVar2 == *(longlong *)(param_1 + 0x10)) {
        FUN_180028f00(param_1,lVar2,uVar3);
      }
      else {
        FUN_180024b50(lVar2,uVar3);
        *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
      }
      FUN_18000f890(local_c8);
      uVar3 = FUN_180073a70(local_c8,&local_a8,".order");
      lVar2 = *(longlong *)(param_1 + 8);
      if (lVar2 == *(longlong *)(param_1 + 0x10)) {
        FUN_180028f00(param_1,lVar2,uVar3);
      }
      else {
        FUN_180024b50(lVar2,uVar3);
        *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
      }
      FUN_18000f890(local_c8);
      uVar3 = FUN_180073a70(local_c8,&local_a8,".color");
      lVar2 = *(longlong *)(param_1 + 8);
      if (lVar2 == *(longlong *)(param_1 + 0x10)) {
        FUN_180028f00(param_1,lVar2,uVar3);
      }
      else {
        FUN_180024b50(lVar2,uVar3);
        *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
      }
      FUN_18000f890(local_c8);
      uVar3 = FUN_180073a70(local_c8,&local_a8,".second");
      lVar2 = *(longlong *)(param_1 + 8);
      if (lVar2 == *(longlong *)(param_1 + 0x10)) {
        FUN_180028f00(param_1,lVar2,uVar3);
      }
      else {
        FUN_180024b50(lVar2,uVar3);
        *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
      }
      FUN_18000f890(local_c8);
      uVar3 = FUN_180073a70(local_c8,&local_a8,".size");
      lVar2 = *(longlong *)(param_1 + 8);
      if (lVar2 == *(longlong *)(param_1 + 0x10)) {
        FUN_180028f00(param_1,lVar2,uVar3);
      }
      else {
        FUN_180024b50(lVar2,uVar3);
        *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
      }
      FUN_18000f890(local_c8);
      uVar3 = FUN_180073a70(local_c8,&local_a8,".small");
      lVar2 = *(longlong *)(param_1 + 8);
      if (lVar2 == *(longlong *)(param_1 + 0x10)) {
        FUN_180028f00(param_1,lVar2,uVar3);
      }
      else {
        FUN_180024b50(lVar2,uVar3);
        *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
      }
      FUN_18000f890(local_c8);
      uVar3 = FUN_180073a70(local_c8,&local_a8,".text");
      lVar2 = *(longlong *)(param_1 + 8);
      if (lVar2 == *(longlong *)(param_1 + 0x10)) {
        FUN_180028f00(param_1,lVar2,uVar3);
      }
      else {
        FUN_180024b50(lVar2,uVar3);
        *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
      }
      FUN_18000f890(local_c8);
    }
    FUN_18000f890(&local_a8);
    uVar10 = uVar10 + 1;
  } while (uVar10 < 0x10);
  uVar3 = FUN_180073a70(local_e8,param_2,".glow.enabled");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar3);
  }
  else {
    FUN_180024b50(lVar1,uVar3);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_e8);
  uVar3 = FUN_180073a70(local_e8,param_2,".glow.color");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar3);
  }
  else {
    FUN_180024b50(lVar1,uVar3);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_e8);
  return;
}



/* ===== 18015c0d0 FUN_18015c0d0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18015c0d0(longlong param_1)

{
  longlong lVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  char *pcVar7;
  ulonglong uVar8;
  undefined1 auStack_78 [32];
  char *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  undefined1 local_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_78;
  local_58 = (char *)0x0;
  uStack_50 = 0;
  local_58 = (char *)FUN_18000fb70(0x20);
  uVar5 = s_model_enemy_player_1806f6a70._12_4_;
  uVar4 = s_model_enemy_player_1806f6a70._8_4_;
  uVar3 = s_model_enemy_player_1806f6a70._4_4_;
  local_48 = 0x12;
  local_40 = 0x1f;
  *(undefined4 *)local_58 = s_model_enemy_player_1806f6a70._0_4_;
  *(undefined4 *)(local_58 + 4) = uVar3;
  *(undefined4 *)(local_58 + 8) = uVar4;
  *(undefined4 *)(local_58 + 0xc) = uVar5;
  *(undefined2 *)(local_58 + 0x10) = s_model_enemy_player_1806f6a70._16_2_;
  local_58[0x12] = '\0';
  FUN_18015d780(param_1,&local_58);
  if (0xf < local_40) {
    uVar8 = local_40 + 1;
    pcVar7 = local_58;
    if (0xfff < uVar8) {
      pcVar7 = *(char **)(local_58 + -8);
      if ((char *)0x1f < local_58 + (-8 - (longlong)pcVar7)) goto LAB_18015d01c;
      uVar8 = local_40 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar7,uVar8);
  }
  local_58 = (char *)0x0;
  uStack_50 = 0;
  local_58 = (char *)FUN_18000fb70(0x20);
  uVar5 = s_model_enemy_behind_walls_1806f6a88._12_4_;
  uVar4 = s_model_enemy_behind_walls_1806f6a88._8_4_;
  uVar3 = s_model_enemy_behind_walls_1806f6a88._4_4_;
  local_48 = 0x18;
  local_40 = 0x1f;
  *(undefined4 *)local_58 = s_model_enemy_behind_walls_1806f6a88._0_4_;
  *(undefined4 *)(local_58 + 4) = uVar3;
  *(undefined4 *)(local_58 + 8) = uVar4;
  *(undefined4 *)(local_58 + 0xc) = uVar5;
  *(undefined8 *)(local_58 + 0x10) = s_model_enemy_behind_walls_1806f6a88._16_8_;
  local_58[0x18] = '\0';
  FUN_18015d780(param_1,&local_58);
  if (0xf < local_40) {
    uVar8 = local_40 + 1;
    pcVar7 = local_58;
    if (0xfff < uVar8) {
      pcVar7 = *(char **)(local_58 + -8);
      if ((char *)0x1f < local_58 + (-8 - (longlong)pcVar7)) goto LAB_18015d01c;
      uVar8 = local_40 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar7,uVar8);
  }
  local_58 = (char *)0x0;
  uStack_50 = 0;
  local_58 = (char *)FUN_18000fb70(0x20);
  uVar5 = s_model_enemy_on_shot_1806f6ae8._12_4_;
  uVar4 = s_model_enemy_on_shot_1806f6ae8._8_4_;
  uVar3 = s_model_enemy_on_shot_1806f6ae8._4_4_;
  local_48 = 0x13;
  local_40 = 0x1f;
  *(undefined4 *)local_58 = s_model_enemy_on_shot_1806f6ae8._0_4_;
  *(undefined4 *)(local_58 + 4) = uVar3;
  *(undefined4 *)(local_58 + 8) = uVar4;
  *(undefined4 *)(local_58 + 0xc) = uVar5;
  *(uint *)(local_58 + 0xf) =
       CONCAT31(s_model_enemy_on_shot_1806f6ae8._16_3_,s_model_enemy_on_shot_1806f6ae8[0xf]);
  local_58[0x13] = '\0';
  FUN_18015d780(param_1,&local_58);
  if (0xf < local_40) {
    uVar8 = local_40 + 1;
    pcVar7 = local_58;
    if (0xfff < uVar8) {
      pcVar7 = *(char **)(local_58 + -8);
      if ((char *)0x1f < local_58 + (-8 - (longlong)pcVar7)) goto LAB_18015d01c;
      uVar8 = local_40 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar7,uVar8);
  }
  local_58 = (char *)0x0;
  uStack_50 = 0;
  local_58 = (char *)FUN_18000fb70(0x20);
  uVar5 = s_model_enemy_on_shot_glow_1806f6b00._12_4_;
  uVar4 = s_model_enemy_on_shot_glow_1806f6b00._8_4_;
  uVar3 = s_model_enemy_on_shot_glow_1806f6b00._4_4_;
  local_48 = 0x18;
  local_40 = 0x1f;
  *(undefined4 *)local_58 = s_model_enemy_on_shot_glow_1806f6b00._0_4_;
  *(undefined4 *)(local_58 + 4) = uVar3;
  *(undefined4 *)(local_58 + 8) = uVar4;
  *(undefined4 *)(local_58 + 0xc) = uVar5;
  *(undefined8 *)(local_58 + 0x10) = s_model_enemy_on_shot_glow_1806f6b00._16_8_;
  local_58[0x18] = '\0';
  uVar6 = FUN_180073a70(local_38,&local_58,".enabled");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar6);
  }
  else {
    FUN_180024b50(lVar1,uVar6);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_38);
  uVar6 = FUN_180073a70(local_38,&local_58,".color");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar6);
  }
  else {
    FUN_180024b50(lVar1,uVar6);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_38);
  if (0xf < local_40) {
    uVar8 = local_40 + 1;
    pcVar7 = local_58;
    if (0xfff < uVar8) {
      pcVar7 = *(char **)(local_58 + -8);
      if ((char *)0x1f < local_58 + (-8 - (longlong)pcVar7)) goto LAB_18015d01c;
      uVar8 = local_40 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar7,uVar8);
  }
  local_58 = (char *)0x0;
  uStack_50 = 0;
  local_58 = (char *)FUN_18000fb70(0x20);
  uVar5 = s_model_enemy_on_shot_duration_1806f6ab0._12_4_;
  uVar4 = s_model_enemy_on_shot_duration_1806f6ab0._8_4_;
  uVar3 = s_model_enemy_on_shot_duration_1806f6ab0._4_4_;
  local_48 = 0x1c;
  local_40 = 0x1f;
  *(undefined4 *)local_58 = s_model_enemy_on_shot_duration_1806f6ab0._0_4_;
  *(undefined4 *)(local_58 + 4) = uVar3;
  *(undefined4 *)(local_58 + 8) = uVar4;
  *(undefined4 *)(local_58 + 0xc) = uVar5;
  uVar5 = s_model_enemy_on_shot_duration_1806f6ab0._24_4_;
  uVar4 = s_model_enemy_on_shot_duration_1806f6ab0._20_4_;
  uVar3 = s_model_enemy_on_shot_duration_1806f6ab0._16_4_;
  *(undefined4 *)(local_58 + 0xc) = s_model_enemy_on_shot_duration_1806f6ab0._12_4_;
  *(undefined4 *)(local_58 + 0x10) = uVar3;
  *(undefined4 *)(local_58 + 0x14) = uVar4;
  *(undefined4 *)(local_58 + 0x18) = uVar5;
  local_58[0x1c] = '\0';
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,&local_58);
  }
  else {
    FUN_180024b50(lVar1,&local_58);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  if (0xf < local_40) {
    uVar8 = local_40 + 1;
    pcVar7 = local_58;
    if (0xfff < uVar8) {
      pcVar7 = *(char **)(local_58 + -8);
      if ((char *)0x1f < local_58 + (-8 - (longlong)pcVar7)) goto LAB_18015d01c;
      uVar8 = local_40 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar7,uVar8);
  }
  local_58 = (char *)0x0;
  uStack_50 = 0;
  local_58 = (char *)FUN_18000fb70(0x20);
  uVar5 = s_model_enemy_history_1806f6ad0._12_4_;
  uVar4 = s_model_enemy_history_1806f6ad0._8_4_;
  uVar3 = s_model_enemy_history_1806f6ad0._4_4_;
  local_48 = 0x13;
  local_40 = 0x1f;
  *(undefined4 *)local_58 = s_model_enemy_history_1806f6ad0._0_4_;
  *(undefined4 *)(local_58 + 4) = uVar3;
  *(undefined4 *)(local_58 + 8) = uVar4;
  *(undefined4 *)(local_58 + 0xc) = uVar5;
  *(uint *)(local_58 + 0xf) =
       CONCAT31(s_model_enemy_history_1806f6ad0._16_3_,s_model_enemy_history_1806f6ad0[0xf]);
  local_58[0x13] = '\0';
  FUN_18015d780(param_1,&local_58);
  if (0xf < local_40) {
    uVar8 = local_40 + 1;
    pcVar7 = local_58;
    if (0xfff < uVar8) {
      pcVar7 = *(char **)(local_58 + -8);
      if ((char *)0x1f < local_58 + (-8 - (longlong)pcVar7)) goto LAB_18015d01c;
      uVar8 = local_40 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar7,uVar8);
  }
  local_58 = (char *)0x0;
  uStack_50 = 0;
  local_58 = (char *)FUN_18000fb70(0x20);
  uVar5 = s_model_enemy_history_glow_1806f6b60._12_4_;
  uVar4 = s_model_enemy_history_glow_1806f6b60._8_4_;
  uVar3 = s_model_enemy_history_glow_1806f6b60._4_4_;
  local_48 = 0x18;
  local_40 = 0x1f;
  *(undefined4 *)local_58 = s_model_enemy_history_glow_1806f6b60._0_4_;
  *(undefined4 *)(local_58 + 4) = uVar3;
  *(undefined4 *)(local_58 + 8) = uVar4;
  *(undefined4 *)(local_58 + 0xc) = uVar5;
  *(undefined8 *)(local_58 + 0x10) = s_model_enemy_history_glow_1806f6b60._16_8_;
  local_58[0x18] = '\0';
  uVar6 = FUN_180073a70(local_38,&local_58,".enabled");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar6);
  }
  else {
    FUN_180024b50(lVar1,uVar6);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_38);
  uVar6 = FUN_180073a70(local_38,&local_58,".color");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar6);
  }
  else {
    FUN_180024b50(lVar1,uVar6);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_38);
  if (0xf < local_40) {
    uVar8 = local_40 + 1;
    pcVar7 = local_58;
    if (0xfff < uVar8) {
      pcVar7 = *(char **)(local_58 + -8);
      if ((char *)0x1f < local_58 + (-8 - (longlong)pcVar7)) goto LAB_18015d01c;
      uVar8 = local_40 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar7,uVar8);
  }
  local_58 = (char *)0x0;
  uStack_50 = 0;
  local_58 = (char *)FUN_18000fb70(0x20);
  uVar5 = s_model_enemy_ragdolls_1806f6b80._12_4_;
  uVar4 = s_model_enemy_ragdolls_1806f6b80._8_4_;
  uVar3 = s_model_enemy_ragdolls_1806f6b80._4_4_;
  local_48 = 0x14;
  local_40 = 0x1f;
  *(undefined4 *)local_58 = s_model_enemy_ragdolls_1806f6b80._0_4_;
  *(undefined4 *)(local_58 + 4) = uVar3;
  *(undefined4 *)(local_58 + 8) = uVar4;
  *(undefined4 *)(local_58 + 0xc) = uVar5;
  *(undefined4 *)(local_58 + 0x10) = s_model_enemy_ragdolls_1806f6b80._16_4_;
  local_58[0x14] = '\0';
  FUN_18015d780(param_1,&local_58);
  if (0xf < local_40) {
    uVar8 = local_40 + 1;
    pcVar7 = local_58;
    if (0xfff < uVar8) {
      pcVar7 = *(char **)(local_58 + -8);
      if ((char *)0x1f < local_58 + (-8 - (longlong)pcVar7)) goto LAB_18015d01c;
      uVar8 = local_40 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar7,uVar8);
  }
  local_58 = (char *)0x0;
  uStack_50 = 0;
  local_58 = (char *)FUN_18000fb70(0x20);
  uVar5 = s_model_enemy_ragdolls_glow_1806f6b20._12_4_;
  uVar4 = s_model_enemy_ragdolls_glow_1806f6b20._8_4_;
  uVar3 = s_model_enemy_ragdolls_glow_1806f6b20._4_4_;
  local_48 = 0x19;
  local_40 = 0x1f;
  *(undefined4 *)local_58 = s_model_enemy_ragdolls_glow_1806f6b20._0_4_;
  *(undefined4 *)(local_58 + 4) = uVar3;
  *(undefined4 *)(local_58 + 8) = uVar4;
  *(undefined4 *)(local_58 + 0xc) = uVar5;
  uVar5 = s_model_enemy_ragdolls_glow_1806f6b20._21_4_;
  uVar4 = s_model_enemy_ragdolls_glow_1806f6b20._17_4_;
  uVar3 = CONCAT13(s_model_enemy_ragdolls_glow_1806f6b20[0x10],
                   s_model_enemy_ragdolls_glow_1806f6b20._13_3_);
  *(uint *)(local_58 + 9) =
       CONCAT13(s_model_enemy_ragdolls_glow_1806f6b20[0xc],
                s_model_enemy_ragdolls_glow_1806f6b20._9_3_);
  *(undefined4 *)(local_58 + 0xd) = uVar3;
  *(undefined4 *)(local_58 + 0x11) = uVar4;
  *(undefined4 *)(local_58 + 0x15) = uVar5;
  local_58[0x19] = '\0';
  uVar6 = FUN_180073a70(local_38,&local_58,".enabled");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar6);
  }
  else {
    FUN_180024b50(lVar1,uVar6);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_38);
  uVar6 = FUN_180073a70(local_38,&local_58,".color");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar6);
  }
  else {
    FUN_180024b50(lVar1,uVar6);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_38);
  if (0xf < local_40) {
    uVar8 = local_40 + 1;
    pcVar7 = local_58;
    if (0xfff < uVar8) {
      pcVar7 = *(char **)(local_58 + -8);
      if ((char *)0x1f < local_58 + (-8 - (longlong)pcVar7)) goto LAB_18015d01c;
      uVar8 = local_40 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar7,uVar8);
  }
  local_58 = (char *)0x0;
  uStack_50 = 0;
  local_58 = (char *)FUN_18000fb70(0x20);
  uVar5 = s_model_enemy_ragdolls_visibility_1806f6b40._12_4_;
  uVar4 = s_model_enemy_ragdolls_visibility_1806f6b40._8_4_;
  uVar3 = s_model_enemy_ragdolls_visibility_1806f6b40._4_4_;
  local_48 = 0x1f;
  local_40 = 0x1f;
  *(undefined4 *)local_58 = s_model_enemy_ragdolls_visibility_1806f6b40._0_4_;
  *(undefined4 *)(local_58 + 4) = uVar3;
  *(undefined4 *)(local_58 + 8) = uVar4;
  *(undefined4 *)(local_58 + 0xc) = uVar5;
  uVar5 = s_model_enemy_ragdolls_visibility_1806f6b40._27_4_;
  uVar4 = s_model_enemy_ragdolls_visibility_1806f6b40._23_4_;
  uVar3 = s_model_enemy_ragdolls_visibility_1806f6b40._19_4_;
  *(uint *)(local_58 + 0xf) =
       CONCAT31(s_model_enemy_ragdolls_visibility_1806f6b40._16_3_,
                s_model_enemy_ragdolls_visibility_1806f6b40[0xf]);
  *(undefined4 *)(local_58 + 0x13) = uVar3;
  *(undefined4 *)(local_58 + 0x17) = uVar4;
  *(undefined4 *)(local_58 + 0x1b) = uVar5;
  local_58[0x1f] = '\0';
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,&local_58);
  }
  else {
    FUN_180024b50(lVar1,&local_58);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  if (0xf < local_40) {
    uVar8 = local_40 + 1;
    pcVar7 = local_58;
    if (0xfff < uVar8) {
      pcVar7 = *(char **)(local_58 + -8);
      if ((char *)0x1f < local_58 + (-8 - (longlong)pcVar7)) goto LAB_18015d01c;
      uVar8 = local_40 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar7,uVar8);
  }
  local_58 = (char *)0x0;
  uStack_50 = 0;
  local_58 = (char *)FUN_18000fb70(0x20);
  uVar5 = s_model_team_player_1806f6bd8._12_4_;
  uVar4 = s_model_team_player_1806f6bd8._8_4_;
  uVar3 = s_model_team_player_1806f6bd8._4_4_;
  local_48 = 0x11;
  local_40 = 0x1f;
  *(undefined4 *)local_58 = s_model_team_player_1806f6bd8._0_4_;
  *(undefined4 *)(local_58 + 4) = uVar3;
  *(undefined4 *)(local_58 + 8) = uVar4;
  *(undefined4 *)(local_58 + 0xc) = uVar5;
  local_58[0x10] = s_model_team_player_1806f6bd8[0x10];
  local_58[0x11] = '\0';
  FUN_18015d780(param_1,&local_58);
  if (0xf < local_40) {
    uVar8 = local_40 + 1;
    pcVar7 = local_58;
    if (0xfff < uVar8) {
      pcVar7 = *(char **)(local_58 + -8);
      if ((char *)0x1f < local_58 + (-8 - (longlong)pcVar7)) goto LAB_18015d01c;
      uVar8 = local_40 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar7,uVar8);
  }
  local_58 = (char *)0x0;
  uStack_50 = 0;
  local_58 = (char *)FUN_18000fb70(0x20);
  uVar5 = s_model_team_behind_walls_1806f6bf0._12_4_;
  uVar4 = s_model_team_behind_walls_1806f6bf0._8_4_;
  uVar3 = s_model_team_behind_walls_1806f6bf0._4_4_;
  local_48 = 0x17;
  local_40 = 0x1f;
  *(undefined4 *)local_58 = s_model_team_behind_walls_1806f6bf0._0_4_;
  *(undefined4 *)(local_58 + 4) = uVar3;
  *(undefined4 *)(local_58 + 8) = uVar4;
  *(undefined4 *)(local_58 + 0xc) = uVar5;
  *(ulonglong *)(local_58 + 0xf) =
       CONCAT71(s_model_team_behind_walls_1806f6bf0._16_7_,s_model_team_behind_walls_1806f6bf0[0xf])
  ;
  local_58[0x17] = '\0';
  FUN_18015d780(param_1,&local_58);
  if (0xf < local_40) {
    uVar8 = local_40 + 1;
    pcVar7 = local_58;
    if (0xfff < uVar8) {
      pcVar7 = *(char **)(local_58 + -8);
      if ((char *)0x1f < local_58 + (-8 - (longlong)pcVar7)) goto LAB_18015d01c;
      uVar8 = local_40 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar7,uVar8);
  }
  local_58 = (char *)0x0;
  uStack_50 = 0;
  local_58 = (char *)FUN_18000fb70(0x30);
  uVar5 = s_model_team_disable_model_renderi_1806f6b98._12_4_;
  uVar4 = s_model_team_disable_model_renderi_1806f6b98._8_4_;
  uVar3 = s_model_team_disable_model_renderi_1806f6b98._4_4_;
  local_48 = 0x22;
  local_40 = 0x2f;
  *(undefined4 *)local_58 = s_model_team_disable_model_renderi_1806f6b98._0_4_;
  *(undefined4 *)(local_58 + 4) = uVar3;
  *(undefined4 *)(local_58 + 8) = uVar4;
  *(undefined4 *)(local_58 + 0xc) = uVar5;
  uVar5 = s_model_team_disable_model_renderi_1806f6b98._28_4_;
  uVar4 = s_model_team_disable_model_renderi_1806f6b98._24_4_;
  uVar3 = s_model_team_disable_model_renderi_1806f6b98._20_4_;
  *(undefined4 *)(local_58 + 0x10) = s_model_team_disable_model_renderi_1806f6b98._16_4_;
  *(undefined4 *)(local_58 + 0x14) = uVar3;
  *(undefined4 *)(local_58 + 0x18) = uVar4;
  *(undefined4 *)(local_58 + 0x1c) = uVar5;
  *(undefined2 *)(local_58 + 0x20) = s_model_team_disable_model_renderi_1806f6b98._32_2_;
  local_58[0x22] = '\0';
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,&local_58);
  }
  else {
    FUN_180024b50(lVar1,&local_58);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  if (0xf < local_40) {
    uVar8 = local_40 + 1;
    pcVar7 = local_58;
    if (0xfff < uVar8) {
      pcVar7 = *(char **)(local_58 + -8);
      if ((char *)0x1f < local_58 + (-8 - (longlong)pcVar7)) goto LAB_18015d01c;
      uVar8 = local_40 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar7,uVar8);
  }
  local_58 = (char *)0x0;
  uStack_50 = 0;
  local_58 = (char *)FUN_18000fb70(0x20);
  uVar5 = s_model_local_player_1806f6bc0._12_4_;
  uVar4 = s_model_local_player_1806f6bc0._8_4_;
  uVar3 = s_model_local_player_1806f6bc0._4_4_;
  local_48 = 0x12;
  local_40 = 0x1f;
  *(undefined4 *)local_58 = s_model_local_player_1806f6bc0._0_4_;
  *(undefined4 *)(local_58 + 4) = uVar3;
  *(undefined4 *)(local_58 + 8) = uVar4;
  *(undefined4 *)(local_58 + 0xc) = uVar5;
  *(undefined2 *)(local_58 + 0x10) = s_model_local_player_1806f6bc0._16_2_;
  local_58[0x12] = '\0';
  FUN_18015d780(param_1,&local_58);
  if (0xf < local_40) {
    uVar8 = local_40 + 1;
    pcVar7 = local_58;
    if (0xfff < uVar8) {
      pcVar7 = *(char **)(local_58 + -8);
      if ((char *)0x1f < local_58 + (-8 - (longlong)pcVar7)) goto LAB_18015d01c;
      uVar8 = local_40 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar7,uVar8);
  }
  local_58 = (char *)0x0;
  uStack_50 = 0;
  local_58 = (char *)FUN_18000fb70(0x20);
  uVar5 = s_model_local_player_overlay_1806f6c40._4_4_;
  local_48 = 0x1a;
  local_40 = 0x1f;
  uVar3 = CONCAT22(s_model_local_player_overlay_1806f6c40._10_2_,
                   s_model_local_player_overlay_1806f6c40._8_2_);
  uVar4 = CONCAT22(s_model_local_player_overlay_1806f6c40._14_2_,
                   s_model_local_player_overlay_1806f6c40._12_2_);
  *(undefined4 *)local_58 = s_model_local_player_overlay_1806f6c40._0_4_;
  *(undefined4 *)(local_58 + 4) = uVar5;
  *(undefined4 *)(local_58 + 8) = uVar3;
  *(undefined4 *)(local_58 + 0xc) = uVar4;
  uVar5 = s_model_local_player_overlay_1806f6c40._22_4_;
  uVar4 = s_model_local_player_overlay_1806f6c40._18_4_;
  uVar3 = CONCAT22(s_model_local_player_overlay_1806f6c40._16_2_,
                   s_model_local_player_overlay_1806f6c40._14_2_);
  *(uint *)(local_58 + 10) =
       CONCAT22(s_model_local_player_overlay_1806f6c40._12_2_,
                s_model_local_player_overlay_1806f6c40._10_2_);
  *(undefined4 *)(local_58 + 0xe) = uVar3;
  *(undefined4 *)(local_58 + 0x12) = uVar4;
  *(undefined4 *)(local_58 + 0x16) = uVar5;
  local_58[0x1a] = '\0';
  FUN_18015d780(param_1,&local_58);
  if (0xf < local_40) {
    uVar8 = local_40 + 1;
    pcVar7 = local_58;
    if (0xfff < uVar8) {
      pcVar7 = *(char **)(local_58 + -8);
      if ((char *)0x1f < local_58 + (-8 - (longlong)pcVar7)) goto LAB_18015d01c;
      uVar8 = local_40 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar7,uVar8);
  }
  local_58 = (char *)0x0;
  uStack_50 = 0;
  local_58 = (char *)FUN_18000fb70(0x20);
  uVar5 = s_model_local_skeleton_1806f6c60._12_4_;
  uVar4 = s_model_local_skeleton_1806f6c60._8_4_;
  uVar3 = s_model_local_skeleton_1806f6c60._4_4_;
  local_48 = 0x14;
  local_40 = 0x1f;
  *(undefined4 *)local_58 = s_model_local_skeleton_1806f6c60._0_4_;
  *(undefined4 *)(local_58 + 4) = uVar3;
  *(undefined4 *)(local_58 + 8) = uVar4;
  *(undefined4 *)(local_58 + 0xc) = uVar5;
  *(undefined4 *)(local_58 + 0x10) = s_model_local_skeleton_1806f6c60._16_4_;
  local_58[0x14] = '\0';
  uVar6 = FUN_180073a70(local_38,&local_58,".enabled");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar6);
  }
  else {
    FUN_180024b50(lVar1,uVar6);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_38);
  uVar6 = FUN_180073a70(local_38,&local_58,".color");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar6);
  }
  else {
    FUN_180024b50(lVar1,uVar6);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_38);
  if (0xf < local_40) {
    uVar8 = local_40 + 1;
    pcVar7 = local_58;
    if (0xfff < uVar8) {
      pcVar7 = *(char **)(local_58 + -8);
      if ((char *)0x1f < local_58 + (-8 - (longlong)pcVar7)) goto LAB_18015d01c;
      uVar8 = local_40 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar7,uVar8);
  }
  local_58 = (char *)0x0;
  uStack_50 = 0;
  local_58 = (char *)FUN_18000fb70(0x20);
  uVar5 = s_model_local_arms_1806f6c08._12_4_;
  uVar4 = s_model_local_arms_1806f6c08._8_4_;
  uVar3 = s_model_local_arms_1806f6c08._4_4_;
  local_48 = 0x10;
  local_40 = 0x1f;
  *(undefined4 *)local_58 = s_model_local_arms_1806f6c08._0_4_;
  *(undefined4 *)(local_58 + 4) = uVar3;
  *(undefined4 *)(local_58 + 8) = uVar4;
  *(undefined4 *)(local_58 + 0xc) = uVar5;
  local_58[0x10] = '\0';
  FUN_18015d780(param_1,&local_58);
  if (0xf < local_40) {
    uVar8 = local_40 + 1;
    pcVar7 = local_58;
    if (0xfff < uVar8) {
      pcVar7 = *(char **)(local_58 + -8);
      if ((char *)0x1f < local_58 + (-8 - (longlong)pcVar7)) goto LAB_18015d01c;
      uVar8 = local_40 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar7,uVar8);
  }
  local_58 = (char *)0x0;
  uStack_50 = 0;
  local_58 = (char *)FUN_18000fb70(0x20);
  uVar5 = s_model_local_arms_overlay_1806f6c20._12_4_;
  uVar4 = s_model_local_arms_overlay_1806f6c20._8_4_;
  uVar3 = s_model_local_arms_overlay_1806f6c20._4_4_;
  local_48 = 0x18;
  local_40 = 0x1f;
  *(undefined4 *)local_58 = s_model_local_arms_overlay_1806f6c20._0_4_;
  *(undefined4 *)(local_58 + 4) = uVar3;
  *(undefined4 *)(local_58 + 8) = uVar4;
  *(undefined4 *)(local_58 + 0xc) = uVar5;
  *(undefined8 *)(local_58 + 0x10) = s_model_local_arms_overlay_1806f6c20._16_8_;
  local_58[0x18] = '\0';
  FUN_18015d780(param_1,&local_58);
  if (0xf < local_40) {
    uVar8 = local_40 + 1;
    pcVar7 = local_58;
    if (0xfff < uVar8) {
      pcVar7 = *(char **)(local_58 + -8);
      if ((char *)0x1f < local_58 + (-8 - (longlong)pcVar7)) goto LAB_18015d01c;
      uVar8 = local_40 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar7,uVar8);
  }
  local_58 = (char *)0x0;
  uStack_50 = 0;
  local_58 = (char *)FUN_18000fb70(0x20);
  uVar5 = s_model_local_gloves_1806f6cb0._12_4_;
  uVar4 = s_model_local_gloves_1806f6cb0._8_4_;
  uVar3 = s_model_local_gloves_1806f6cb0._4_4_;
  local_48 = 0x12;
  local_40 = 0x1f;
  *(undefined4 *)local_58 = s_model_local_gloves_1806f6cb0._0_4_;
  *(undefined4 *)(local_58 + 4) = uVar3;
  *(undefined4 *)(local_58 + 8) = uVar4;
  *(undefined4 *)(local_58 + 0xc) = uVar5;
  *(undefined2 *)(local_58 + 0x10) = s_model_local_gloves_1806f6cb0._16_2_;
  local_58[0x12] = '\0';
  FUN_18015d780(param_1,&local_58);
  if (0xf < local_40) {
    uVar8 = local_40 + 1;
    pcVar7 = local_58;
    if (0xfff < uVar8) {
      pcVar7 = *(char **)(local_58 + -8);
      if ((char *)0x1f < local_58 + (-8 - (longlong)pcVar7)) goto LAB_18015d01c;
      uVar8 = local_40 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar7,uVar8);
  }
  local_58 = (char *)0x0;
  uStack_50 = 0;
  local_58 = (char *)FUN_18000fb70(0x20);
  uVar5 = s_model_local_gloves_overlay_1806f6cc8._4_4_;
  local_48 = 0x1a;
  local_40 = 0x1f;
  uVar3 = CONCAT22(s_model_local_gloves_overlay_1806f6cc8._10_2_,
                   s_model_local_gloves_overlay_1806f6cc8._8_2_);
  uVar4 = CONCAT22(s_model_local_gloves_overlay_1806f6cc8._14_2_,
                   s_model_local_gloves_overlay_1806f6cc8._12_2_);
  *(undefined4 *)local_58 = s_model_local_gloves_overlay_1806f6cc8._0_4_;
  *(undefined4 *)(local_58 + 4) = uVar5;
  *(undefined4 *)(local_58 + 8) = uVar3;
  *(undefined4 *)(local_58 + 0xc) = uVar4;
  uVar5 = s_model_local_gloves_overlay_1806f6cc8._22_4_;
  uVar4 = s_model_local_gloves_overlay_1806f6cc8._18_4_;
  uVar3 = CONCAT22(s_model_local_gloves_overlay_1806f6cc8._16_2_,
                   s_model_local_gloves_overlay_1806f6cc8._14_2_);
  *(uint *)(local_58 + 10) =
       CONCAT22(s_model_local_gloves_overlay_1806f6cc8._12_2_,
                s_model_local_gloves_overlay_1806f6cc8._10_2_);
  *(undefined4 *)(local_58 + 0xe) = uVar3;
  *(undefined4 *)(local_58 + 0x12) = uVar4;
  *(undefined4 *)(local_58 + 0x16) = uVar5;
  local_58[0x1a] = '\0';
  FUN_18015d780(param_1,&local_58);
  if (0xf < local_40) {
    uVar8 = local_40 + 1;
    pcVar7 = local_58;
    if (0xfff < uVar8) {
      pcVar7 = *(char **)(local_58 + -8);
      if ((char *)0x1f < local_58 + (-8 - (longlong)pcVar7)) goto LAB_18015d01c;
      uVar8 = local_40 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar7,uVar8);
  }
  local_58 = (char *)0x0;
  uStack_50 = 0;
  local_58 = (char *)FUN_18000fb70(0x20);
  uVar5 = s_model_local_weapon_1806f6c78._12_4_;
  uVar4 = s_model_local_weapon_1806f6c78._8_4_;
  uVar3 = s_model_local_weapon_1806f6c78._4_4_;
  local_48 = 0x12;
  local_40 = 0x1f;
  *(undefined4 *)local_58 = s_model_local_weapon_1806f6c78._0_4_;
  *(undefined4 *)(local_58 + 4) = uVar3;
  *(undefined4 *)(local_58 + 8) = uVar4;
  *(undefined4 *)(local_58 + 0xc) = uVar5;
  *(undefined2 *)(local_58 + 0x10) = s_model_local_weapon_1806f6c78._16_2_;
  local_58[0x12] = '\0';
  FUN_18015d780(param_1,&local_58);
  if (0xf < local_40) {
    uVar8 = local_40 + 1;
    pcVar7 = local_58;
    if (0xfff < uVar8) {
      pcVar7 = *(char **)(local_58 + -8);
      if ((char *)0x1f < local_58 + (-8 - (longlong)pcVar7)) goto LAB_18015d01c;
      uVar8 = local_40 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar7,uVar8);
  }
  local_58 = (char *)0x0;
  uStack_50 = 0;
  local_58 = (char *)FUN_18000fb70(0x20);
  uVar5 = s_model_local_weapon_overlay_1806f6c90._4_4_;
  local_48 = 0x1a;
  local_40 = 0x1f;
  uVar3 = CONCAT22(s_model_local_weapon_overlay_1806f6c90._10_2_,
                   s_model_local_weapon_overlay_1806f6c90._8_2_);
  uVar4 = CONCAT22(s_model_local_weapon_overlay_1806f6c90._14_2_,
                   s_model_local_weapon_overlay_1806f6c90._12_2_);
  *(undefined4 *)local_58 = s_model_local_weapon_overlay_1806f6c90._0_4_;
  *(undefined4 *)(local_58 + 4) = uVar5;
  *(undefined4 *)(local_58 + 8) = uVar3;
  *(undefined4 *)(local_58 + 0xc) = uVar4;
  uVar5 = s_model_local_weapon_overlay_1806f6c90._22_4_;
  uVar4 = s_model_local_weapon_overlay_1806f6c90._18_4_;
  uVar3 = CONCAT22(s_model_local_weapon_overlay_1806f6c90._16_2_,
                   s_model_local_weapon_overlay_1806f6c90._14_2_);
  *(uint *)(local_58 + 10) =
       CONCAT22(s_model_local_weapon_overlay_1806f6c90._12_2_,
                s_model_local_weapon_overlay_1806f6c90._10_2_);
  *(undefined4 *)(local_58 + 0xe) = uVar3;
  *(undefined4 *)(local_58 + 0x12) = uVar4;
  *(undefined4 *)(local_58 + 0x16) = uVar5;
  local_58[0x1a] = '\0';
  FUN_18015d780(param_1,&local_58);
  if (0xf < local_40) {
    uVar8 = local_40 + 1;
    pcVar7 = local_58;
    if (0xfff < uVar8) {
      pcVar7 = *(char **)(local_58 + -8);
      if ((char *)0x1f < local_58 + (-8 - (longlong)pcVar7)) goto LAB_18015d01c;
      uVar8 = local_40 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar7,uVar8);
  }
  local_58 = (char *)0x0;
  uStack_50 = 0;
  local_58 = (char *)FUN_18000fb70(0x20);
  uVar5 = s_model_local_keychain_1806f6d28._12_4_;
  uVar4 = s_model_local_keychain_1806f6d28._8_4_;
  uVar3 = s_model_local_keychain_1806f6d28._4_4_;
  local_48 = 0x14;
  local_40 = 0x1f;
  *(undefined4 *)local_58 = s_model_local_keychain_1806f6d28._0_4_;
  *(undefined4 *)(local_58 + 4) = uVar3;
  *(undefined4 *)(local_58 + 8) = uVar4;
  *(undefined4 *)(local_58 + 0xc) = uVar5;
  *(undefined4 *)(local_58 + 0x10) = s_model_local_keychain_1806f6d28._16_4_;
  local_58[0x14] = '\0';
  FUN_18015d780(param_1,&local_58);
  if (0xf < local_40) {
    uVar8 = local_40 + 1;
    pcVar7 = local_58;
    if (0xfff < uVar8) {
      pcVar7 = *(char **)(local_58 + -8);
      if ((char *)0x1f < local_58 + (-8 - (longlong)pcVar7)) {
LAB_18015d01c:
        pcVar2 = (code *)swi(0x29);
        (*pcVar2)(5);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar8 = local_40 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar7,uVar8);
  }
  FUN_18000f870(&local_58);
  FUN_1800133a0(&local_58,"model.local.keychain_overlay",0x1c);
  FUN_18015d780(param_1,&local_58);
  FUN_18000f890(&local_58);
  FUN_180013350(&local_58,"model.local.colorize_stattrak");
  FUN_18015acf0(param_1,&local_58);
  FUN_18000f890(&local_58);
  FUN_180013350(&local_58,"model.local.stattrak_weapon");
  FUN_18015acf0(param_1,&local_58);
  FUN_18000f890(&local_58);
  FUN_180013350(&local_58,"model.local.stattrak_knife");
  FUN_18015acf0(param_1,&local_58);
  FUN_18000f890(&local_58);
  return;
}



/* ===== 18015d030 FUN_18015d030 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18015d030(longlong param_1,undefined8 param_2,int *param_3)

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
  uVar2 = FUN_180073a70(local_a8,param_2,&DAT_1806f5f30);
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_a8);
  if (*param_3 != 0) {
    uVar2 = FUN_180073a70(local_a8,param_2,".side");
    lVar1 = *(longlong *)(param_1 + 8);
    if (lVar1 == *(longlong *)(param_1 + 0x10)) {
      FUN_180028f00(param_1,lVar1,uVar2);
    }
    else {
      FUN_180024b50(lVar1,uVar2);
      *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
    }
    FUN_18000f890(local_a8);
    uVar2 = FUN_180073a70(local_a8,param_2,".paint_kit");
    lVar1 = *(longlong *)(param_1 + 8);
    if (lVar1 == *(longlong *)(param_1 + 0x10)) {
      FUN_180028f00(param_1,lVar1,uVar2);
    }
    else {
      FUN_180024b50(lVar1,uVar2);
      *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
    }
    FUN_18000f890(local_a8);
    uVar2 = FUN_180073a70(local_a8,param_2,".wear");
    lVar1 = *(longlong *)(param_1 + 8);
    if (lVar1 == *(longlong *)(param_1 + 0x10)) {
      FUN_180028f00(param_1,lVar1,uVar2);
    }
    else {
      FUN_180024b50(lVar1,uVar2);
      *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
    }
    FUN_18000f890(local_a8);
    uVar2 = FUN_180073a70(local_a8,param_2,".seed");
    lVar1 = *(longlong *)(param_1 + 8);
    if (lVar1 == *(longlong *)(param_1 + 0x10)) {
      FUN_180028f00(param_1,lVar1,uVar2);
    }
    else {
      FUN_180024b50(lVar1,uVar2);
      *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
    }
    FUN_18000f890(local_a8);
    uVar2 = FUN_180073a70(local_a8,param_2,".stattrak");
    lVar1 = *(longlong *)(param_1 + 8);
    if (lVar1 == *(longlong *)(param_1 + 0x10)) {
      FUN_180028f00(param_1,lVar1,uVar2);
    }
    else {
      FUN_180024b50(lVar1,uVar2);
      *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
    }
    FUN_18000f890(local_a8);
    uVar2 = FUN_180073a70(local_a8,param_2,".stattrak_value");
    lVar1 = *(longlong *)(param_1 + 8);
    if (lVar1 == *(longlong *)(param_1 + 0x10)) {
      FUN_180028f00(param_1,lVar1,uVar2);
    }
    else {
      FUN_180024b50(lVar1,uVar2);
      *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
    }
    FUN_18000f890(local_a8);
    uVar2 = FUN_180073a70(local_a8,param_2,".nametag");
    lVar1 = *(longlong *)(param_1 + 8);
    if (lVar1 == *(longlong *)(param_1 + 0x10)) {
      FUN_180028f00(param_1,lVar1,uVar2);
    }
    else {
      FUN_180024b50(lVar1,uVar2);
      *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
    }
    FUN_18000f890(local_a8);
    uVar2 = FUN_180073a70(local_a8,param_2,".custom_colors");
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
      uVar2 = FUN_18004e4f0(local_48,uVar4);
      uVar3 = FUN_180073a70(local_68,param_2,".color");
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
      uVar4 = uVar4 + 1;
    } while (uVar4 < 8);
    uVar4 = 0;
    do {
      uVar2 = FUN_18004e4f0(local_68,uVar4);
      uVar3 = FUN_180073a70(local_48,param_2,".sticker");
      FUN_180066820(local_a8,uVar3,uVar2);
      FUN_18000f890(local_48);
      FUN_18000f890(local_68);
      uVar2 = FUN_180073a70(local_88,local_a8,&DAT_1806f6a6c);
      lVar1 = *(longlong *)(param_1 + 8);
      if (lVar1 == *(longlong *)(param_1 + 0x10)) {
        FUN_180028f00(param_1,lVar1,uVar2);
      }
      else {
        FUN_180024b50(lVar1,uVar2);
        *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
      }
      FUN_18000f890(local_88);
      uVar2 = FUN_180073a70(local_88,local_a8,".wear");
      lVar1 = *(longlong *)(param_1 + 8);
      if (lVar1 == *(longlong *)(param_1 + 0x10)) {
        FUN_180028f00(param_1,lVar1,uVar2);
      }
      else {
        FUN_180024b50(lVar1,uVar2);
        *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
      }
      FUN_18000f890(local_88);
      uVar2 = FUN_180073a70(local_88,local_a8,".scale");
      lVar1 = *(longlong *)(param_1 + 8);
      if (lVar1 == *(longlong *)(param_1 + 0x10)) {
        FUN_180028f00(param_1,lVar1,uVar2);
      }
      else {
        FUN_180024b50(lVar1,uVar2);
        *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
      }
      FUN_18000f890(local_88);
      uVar2 = FUN_180073a70(local_88,local_a8,".rotation");
      lVar1 = *(longlong *)(param_1 + 8);
      if (lVar1 == *(longlong *)(param_1 + 0x10)) {
        FUN_180028f00(param_1,lVar1,uVar2);
      }
      else {
        FUN_180024b50(lVar1,uVar2);
        *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
      }
      FUN_18000f890(local_88);
      uVar2 = FUN_180073a70(local_88,local_a8,".offset_x");
      lVar1 = *(longlong *)(param_1 + 8);
      if (lVar1 == *(longlong *)(param_1 + 0x10)) {
        FUN_180028f00(param_1,lVar1,uVar2);
      }
      else {
        FUN_180024b50(lVar1,uVar2);
        *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
      }
      FUN_18000f890(local_88);
      uVar2 = FUN_180073a70(local_88,local_a8,".offset_y");
      lVar1 = *(longlong *)(param_1 + 8);
      if (lVar1 == *(longlong *)(param_1 + 0x10)) {
        FUN_180028f00(param_1,lVar1,uVar2);
      }
      else {
        FUN_180024b50(lVar1,uVar2);
        *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
      }
      FUN_18000f890(local_88);
      uVar2 = FUN_180073a70(local_88,local_a8,".schema");
      lVar1 = *(longlong *)(param_1 + 8);
      if (lVar1 == *(longlong *)(param_1 + 0x10)) {
        FUN_180028f00(param_1,lVar1,uVar2);
      }
      else {
        FUN_180024b50(lVar1,uVar2);
        *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
      }
      FUN_18000f890(local_88);
      FUN_18000f890(local_a8);
      uVar4 = uVar4 + 1;
    } while (uVar4 < 6);
    uVar2 = FUN_180073a70(local_88,param_2,".keychain.id");
    lVar1 = *(longlong *)(param_1 + 8);
    if (lVar1 == *(longlong *)(param_1 + 0x10)) {
      FUN_180028f00(param_1,lVar1,uVar2);
    }
    else {
      FUN_180024b50(lVar1,uVar2);
      *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
    }
    FUN_18000f890(local_88);
    uVar2 = FUN_180073a70(local_88,param_2,".keychain.seed");
    lVar1 = *(longlong *)(param_1 + 8);
    if (lVar1 == *(longlong *)(param_1 + 0x10)) {
      FUN_180028f00(param_1,lVar1,uVar2);
    }
    else {
      FUN_180024b50(lVar1,uVar2);
      *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
    }
    FUN_18000f890(local_88);
    uVar2 = FUN_180073a70(local_88,param_2,".keychain.offset_x");
    lVar1 = *(longlong *)(param_1 + 8);
    if (lVar1 == *(longlong *)(param_1 + 0x10)) {
      FUN_180028f00(param_1,lVar1,uVar2);
    }
    else {
      FUN_180024b50(lVar1,uVar2);
      *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
    }
    FUN_18000f890(local_88);
    uVar2 = FUN_180073a70(local_88,param_2,".keychain.offset_y");
    lVar1 = *(longlong *)(param_1 + 8);
    if (lVar1 == *(longlong *)(param_1 + 0x10)) {
      FUN_180028f00(param_1,lVar1,uVar2);
    }
    else {
      FUN_180024b50(lVar1,uVar2);
      *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
    }
    FUN_18000f890(local_88);
    uVar2 = FUN_180073a70(local_88,param_2,".keychain.offset_z");
    lVar1 = *(longlong *)(param_1 + 8);
    if (lVar1 == *(longlong *)(param_1 + 0x10)) {
      FUN_180028f00(param_1,lVar1,uVar2);
    }
    else {
      FUN_180024b50(lVar1,uVar2);
      *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
    }
    FUN_18000f890(local_88);
    uVar2 = FUN_180073a70(local_88,param_2,".keychain.sticker");
    lVar1 = *(longlong *)(param_1 + 8);
    if (lVar1 == *(longlong *)(param_1 + 0x10)) {
      FUN_180028f00(param_1,lVar1,uVar2);
    }
    else {
      FUN_180024b50(lVar1,uVar2);
      *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
    }
    FUN_18000f890(local_88);
  }
  return;
}



/* ===== 18015d780 FUN_18015d780 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18015d780(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined1 local_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_58;
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
  uVar2 = FUN_180073a70(local_38,param_2,".metalness");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_38);
  uVar2 = FUN_180073a70(local_38,param_2,".roughness");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_38);
  uVar2 = FUN_180073a70(local_38,param_2,".glow_exponent");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_38);
  uVar2 = FUN_180073a70(local_38,param_2,".outline_exponent");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_38);
  uVar2 = FUN_180073a70(local_38,param_2,".outline_falloff");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_38);
  uVar2 = FUN_180073a70(local_38,param_2,".outline_filling");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_38);
  uVar2 = FUN_180073a70(local_38,param_2,".iridescent_strength");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_38);
  uVar2 = FUN_180073a70(local_38,param_2,".iridescent_roughness");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_38);
  uVar2 = FUN_180073a70(local_38,param_2,".iridescent_tint");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_38);
  uVar2 = FUN_180073a70(local_38,param_2,".water_speed");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_38);
  uVar2 = FUN_180073a70(local_38,param_2,".glossy_exponent");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_38);
  uVar2 = FUN_180073a70(local_38,param_2,".glossy_filling");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_38);
  uVar2 = FUN_180073a70(local_38,param_2,".glossy_falloff");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_38);
  uVar2 = FUN_180073a70(local_38,param_2,".glossy_tint");
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



/* ===== 18015dc10 FUN_18015dc10 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18015dc10(longlong param_1,undefined8 param_2)

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
  return;
}



/* ===== 18015dce0 FUN_18015dce0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18015dce0(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined1 local_48 [32];
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_68;
  FUN_1801ab160(param_1,param_2,param_3 + 0x264);
  uVar2 = FUN_180073a70(local_48,param_2,"world.modulation");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_48);
  uVar2 = FUN_180073a70(local_48,param_2,"world.modulation_color");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_48);
  uVar2 = FUN_180073a70(local_48,param_2,"world.gamma");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_48);
  uVar2 = FUN_180073a70(local_48,param_2,"world.gamma_value");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_48);
  uVar2 = FUN_180073a70(local_48,param_2,"world.bloom");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_48);
  uVar2 = FUN_180073a70(local_48,param_2,"world.bloom_amount");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_48);
  uVar2 = FUN_180073a70(local_48,param_2,"world.wetness");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_48);
  uVar2 = FUN_180073a70(local_48,param_2,"world.wetness_density");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_48);
  uVar2 = FUN_180073a70(local_48,param_2,"world.wetness_speed");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_48);
  uVar2 = FUN_180073a70(local_48,param_2,"world.wind");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_48);
  uVar2 = FUN_180073a70(local_48,param_2,"world.wind_strength");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_48);
  uVar2 = FUN_180073a70(local_48,param_2,"world.wind_direction");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_48);
  uVar2 = FUN_180073a70(local_48,param_2,"world.dof");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_48);
  uVar2 = FUN_180073a70(local_48,param_2,"world.fog");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_48);
  uVar2 = FUN_180073a70(local_48,param_2,"world.fog_color");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_48);
  uVar2 = FUN_180073a70(local_48,param_2,"world.fog_density");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_48);
  uVar2 = FUN_180073a70(local_48,param_2,"world.fog_distance");
  FUN_18015acf0(param_1,uVar2);
  FUN_18000f890(local_48);
  uVar2 = FUN_180073a70(local_48,param_2,"world.fog_falloff");
  FUN_18015acf0(param_1,uVar2);
  FUN_18000f890(local_48);
  uVar2 = FUN_180073a70(local_48,param_2,"world.fog_glow");
  FUN_18015acf0(param_1,uVar2);
  FUN_18000f890(local_48);
  uVar2 = FUN_180073a70(local_48,param_2,"world.dof_near_blurry");
  FUN_18015acf0(param_1,uVar2);
  FUN_18000f890(local_48);
  uVar2 = FUN_180073a70(local_48,param_2,"world.dof_near_crisp");
  FUN_18015acf0(param_1,uVar2);
  FUN_18000f890(local_48);
  uVar2 = FUN_180073a70(local_48,param_2,"world.dof_far_crisp");
  FUN_18015acf0(param_1,uVar2);
  FUN_18000f890(local_48);
  uVar2 = FUN_180073a70(local_48,param_2,"world.dof_far_blurry");
  FUN_18015acf0(param_1,uVar2);
  FUN_18000f890(local_48);
  uVar2 = FUN_180073a70(local_48,param_2,"screen.rain");
  FUN_18015acf0(param_1,uVar2);
  FUN_18000f890(local_48);
  uVar2 = FUN_180073a70(local_48,param_2,"screen.rain_amount");
  FUN_18015acf0(param_1,uVar2);
  FUN_18000f890(local_48);
  uVar2 = FUN_180073a70(local_48,param_2,"screen.rain_size");
  FUN_18015acf0(param_1,uVar2);
  FUN_18000f890(local_48);
  uVar2 = FUN_180073a70(local_48,param_2,"screen.rain_speed");
  FUN_18015acf0(param_1,uVar2);
  FUN_18000f890(local_48);
  uVar2 = FUN_180073a70(local_48,param_2,"screen.rain_fog");
  FUN_18015acf0(param_1,uVar2);
  FUN_18000f890(local_48);
  uVar2 = FUN_180073a70(local_48,param_2,"screen.rain_blur");
  FUN_18015acf0(param_1,uVar2);
  FUN_18000f890(local_48);
  uVar2 = FUN_180073a70(local_48,param_2,"screen.chromatic");
  FUN_18015acf0(param_1,uVar2);
  FUN_18000f890(local_48);
  uVar2 = FUN_180073a70(local_48,param_2,"screen.chromatic_amount");
  FUN_18015acf0(param_1,uVar2);
  FUN_18000f890(local_48);
  uVar2 = FUN_180073a70(local_48,param_2,"screen.vignette");
  FUN_18015acf0(param_1,uVar2);
  FUN_18000f890(local_48);
  uVar2 = FUN_180073a70(local_48,param_2,"screen.vignette_amount");
  FUN_18015acf0(param_1,uVar2);
  FUN_18000f890(local_48);
  uVar2 = FUN_180073a70(local_48,param_2,"sky.mode");
  FUN_18015acf0(param_1,uVar2);
  FUN_18000f890(local_48);
  uVar2 = FUN_180073a70(local_48,param_2,"sky.texture");
  FUN_18015acf0(param_1,uVar2);
  FUN_18000f890(local_48);
  uVar2 = FUN_180073a70(local_48,param_2,"sky.shader");
  FUN_18015acf0(param_1,uVar2);
  FUN_18000f890(local_48);
  uVar2 = FUN_180073a70(local_48,param_2,"sky.params");
  FUN_18015acf0(param_1,uVar2);
  FUN_18000f890(local_48);
  uVar2 = FUN_180073a70(local_48,param_2,"sky.primary");
  FUN_18015acf0(param_1,uVar2);
  FUN_18000f890(local_48);
  uVar2 = FUN_180073a70(local_48,param_2,"sky.secondary");
  FUN_18015acf0(param_1,uVar2);
  FUN_18000f890(local_48);
  uVar2 = FUN_180073a70(local_48,param_2,"sky.exposure");
  FUN_18015acf0(param_1,uVar2);
  FUN_18000f890(local_48);
  uVar2 = FUN_180073a70(local_48,param_2,"sky.update_rate");
  FUN_18015acf0(param_1,uVar2);
  FUN_18000f890(local_48);
  uVar2 = FUN_180073a70(local_48,param_2,"sky.resolution");
  FUN_18015acf0(param_1,uVar2);
  FUN_18000f890(local_48);
  uVar2 = FUN_180073a70(local_48,param_2,"sky.supersample");
  FUN_18015acf0(param_1,uVar2);
  FUN_18000f890(local_48);
  uVar2 = FUN_180073a70(local_48,param_2,"sky.recolor");
  FUN_18015acf0(param_1,uVar2);
  FUN_18000f890(local_48);
  uVar2 = FUN_180073a70(local_48,param_2,"sky.recolor_strength");
  FUN_18015acf0(param_1,uVar2);
  FUN_18000f890(local_48);
  uVar2 = FUN_180073a70(local_48,param_2,"sky.sky_tint");
  FUN_18015acf0(param_1,uVar2);
  FUN_18000f890(local_48);
  uVar2 = FUN_180073a70(local_48,param_2,"sky.sky_color");
  FUN_18015acf0(param_1,uVar2);
  FUN_18000f890(local_48);
  uVar2 = FUN_180073a70(local_48,param_2,"sky.brightness");
  FUN_18015acf0(param_1,uVar2);
  FUN_18000f890(local_48);
  uVar2 = FUN_180073a70(local_48,param_2,"sky.cloud_tint");
  FUN_18015acf0(param_1,uVar2);
  FUN_18000f890(local_48);
  uVar2 = FUN_180073a70(local_48,param_2,"sky.cloud_color");
  FUN_18015acf0(param_1,uVar2);
  FUN_18000f890(local_48);
  uVar2 = FUN_180073a70(local_48,param_2,"sky.sun_tint");
  FUN_18015acf0(param_1,uVar2);
  FUN_18000f890(local_48);
  uVar2 = FUN_180073a70(local_48,param_2,"sky.sun_color");
  FUN_18015acf0(param_1,uVar2);
  FUN_18000f890(local_48);
  uVar2 = FUN_180073a70(local_48,param_2,"sky.lighting");
  FUN_18015acf0(param_1,uVar2);
  FUN_18000f890(local_48);
  uVar2 = FUN_180073a70(local_48,param_2,"sky.lighting_color");
  FUN_18015acf0(param_1,uVar2);
  FUN_18000f890(local_48);
  uVar2 = FUN_180073a70(local_48,param_2,"sky.lighting_intensity");
  FUN_18015acf0(param_1,uVar2);
  FUN_18000f890(local_48);
  uVar2 = FUN_180073a70(local_48,param_2,"sky.lighting_mode");
  FUN_18015acf0(param_1,uVar2);
  FUN_18000f890(local_48);
  uVar2 = FUN_180073a70(local_48,param_2,"motion_blur.enabled");
  FUN_18015acf0(param_1,uVar2);
  FUN_18000f890(local_48);
  uVar2 = FUN_180073a70(local_48,param_2,"motion_blur.strength");
  FUN_18015acf0(param_1,uVar2);
  FUN_18000f890(local_48);
  uVar2 = FUN_180073a70(local_48,param_2,"weather.enabled");
  FUN_18015acf0(param_1,uVar2);
  FUN_18000f890(local_48);
  uVar2 = FUN_180073a70(local_48,param_2,"weather.type");
  FUN_18015acf0(param_1,uVar2);
  FUN_18000f890(local_48);
  uVar2 = FUN_180073a70(local_48,param_2,"weather.color");
  FUN_18015acf0(param_1,uVar2);
  FUN_18000f890(local_48);
  uVar2 = FUN_180073a70(local_48,param_2,"weather.density");
  FUN_18015acf0(param_1,uVar2);
  FUN_18000f890(local_48);
  uVar2 = FUN_180073a70(local_48,param_2,"weather.gravity");
  FUN_18015acf0(param_1,uVar2);
  FUN_18000f890(local_48);
  uVar2 = FUN_180073a70(local_48,param_2,"weather.glow");
  FUN_18015acf0(param_1,uVar2);
  FUN_18000f890(local_48);
  uVar2 = FUN_180073a70(local_48,param_2,"weather.rain_mist");
  FUN_18015acf0(param_1,uVar2);
  FUN_18000f890(local_48);
  uVar2 = FUN_180073a70(local_48,param_2,"weather.rain_ripples");
  FUN_18015acf0(param_1,uVar2);
  FUN_18000f890(local_48);
  return;
}



/* ===== 18015e980 FUN_18015e980 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18015e980(longlong param_1,undefined8 *param_2,int *param_3)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong *puVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  undefined1 auStack_d8 [40];
  ulonglong local_b0;
  ulonglong uStack_a8;
  ulonglong local_a0;
  ulonglong uStack_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined1 local_70 [32];
  undefined1 local_50 [32];
  ulonglong local_30;
  
  local_30 = DAT_180919500 ^ (ulonglong)auStack_d8;
  uVar3 = FUN_180073a70(&local_90,param_2,"count");
  lVar7 = *(longlong *)(param_1 + 8);
  if (lVar7 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar7,uVar3);
  }
  else {
    FUN_180024b50(lVar7,uVar3);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(&local_90);
  uVar9 = 1;
  do {
    if (*param_3 <= (int)uVar9) {
      return;
    }
    uVar3 = FUN_18004e4f0(local_50,uVar9);
    if ((ulonglong)param_2[3] < 0x10) {
      puVar10 = param_2;
    }
    else {
      puVar10 = (undefined8 *)*param_2;
    }
    puVar4 = (ulonglong *)FUN_18006b5b0(uVar3,0,puVar10,param_2[2]);
    local_b0 = *puVar4;
    uStack_a8 = puVar4[1];
    local_a0 = puVar4[2];
    uStack_98 = puVar4[3];
    puVar4[2] = 0;
    puVar4[3] = 0xf;
    *(undefined1 *)puVar4 = 0;
    puVar5 = (undefined4 *)FUN_1800134a0(&local_b0,&DAT_1806e6f24,1);
    local_90 = *puVar5;
    uStack_8c = puVar5[1];
    uStack_88 = puVar5[2];
    uStack_84 = puVar5[3];
    local_80 = puVar5[4];
    uStack_7c = puVar5[5];
    uStack_78 = puVar5[6];
    uStack_74 = puVar5[7];
    *(undefined8 *)(puVar5 + 4) = 0;
    *(undefined8 *)(puVar5 + 6) = 0xf;
    *(undefined1 *)puVar5 = 0;
    if (0xf < uStack_98) {
      uVar8 = uStack_98 + 1;
      uVar6 = local_b0;
      if (0xfff < uVar8) {
        uVar6 = *(ulonglong *)(local_b0 - 8);
        if (0x1f < (local_b0 - uVar6) - 8) {
          pcVar1 = (code *)swi(0x29);
          (*pcVar1)(5);
          goto LAB_18015ebe3;
        }
        uVar8 = uStack_98 + 0x28;
      }
      thunk_FUN_1803d64e0(uVar6,uVar8);
    }
    local_a0 = 0;
    uStack_98 = 0xf;
    local_b0 = local_b0 & 0xffffffffffffff00;
    FUN_18000f890(local_50);
    uVar3 = FUN_180073a70(local_70,&local_90,&DAT_18058b644);
    lVar7 = *(longlong *)(param_1 + 8);
    if (lVar7 == *(longlong *)(param_1 + 0x10)) {
      FUN_180028f00(param_1,lVar7,uVar3);
    }
    else {
      FUN_180024b50(lVar7,uVar3);
      *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
    }
    FUN_18000f890(local_70);
    uVar3 = FUN_180073a70(local_70,&local_90,"weapons");
    lVar7 = *(longlong *)(param_1 + 8);
    if (lVar7 == *(longlong *)(param_1 + 0x10)) {
      FUN_180028f00(param_1,lVar7,uVar3);
    }
    else {
      FUN_180024b50(lVar7,uVar3);
      *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
    }
    FUN_18000f890(local_70);
    uVar6 = CONCAT44(uStack_74,uStack_78);
    if (0xf < uVar6) {
      uVar8 = uVar6 + 1;
      lVar2 = CONCAT44(uStack_8c,local_90);
      lVar7 = lVar2;
      if (0xfff < uVar8) {
        lVar7 = *(longlong *)(lVar2 + -8);
        if (0x1f < (lVar2 - lVar7) - 8U) {
LAB_18015ebe3:
          pcVar1 = (code *)swi(0x29);
          (*pcVar1)(5);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        uVar8 = uVar6 + 0x28;
      }
      thunk_FUN_1803d64e0(lVar7,uVar8);
    }
    uVar9 = uVar9 + 1;
    if (0x3f < uVar9) {
      return;
    }
  } while( true );
}



/* ===== 18015ebf0 FUN_18015ebf0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18015ebf0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined1 local_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_58;
  uVar2 = FUN_180073a70(local_38,param_2,"hitboxes");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_38);
  uVar2 = FUN_180073a70(local_38,param_2,"extrapolation");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_38);
  uVar2 = FUN_180073a70(local_38,param_2,"hitchance");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_38);
  uVar2 = FUN_180073a70(local_38,param_2,"force_shot");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_38);
  uVar2 = FUN_180073a70(local_38,param_2,"min_hitchance");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_38);
  uVar2 = FUN_180073a70(local_38,param_2,"min_damage");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_38);
  uVar2 = FUN_180073a70(local_38,param_2,"quick_stop");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_38);
  uVar2 = FUN_180073a70(local_38,param_2,"quick_stop_options");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar2);
  }
  else {
    FUN_180024b50(lVar1,uVar2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_38);
  uVar2 = FUN_180073a70(local_38,param_2,"quick_scope");
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



/* ===== 18015eeb0 FUN_18015eeb0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18015eeb0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  char *pcVar8;
  ulonglong uVar9;
  undefined1 auStack_a8 [32];
  char *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  ulonglong local_70;
  undefined1 local_68 [32];
  undefined1 local_48 [32];
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_a8;
  FUN_180013350(&local_88,"legitbot.enabled");
  FUN_18015acf0(param_1,&local_88);
  FUN_18000f890(&local_88);
  FUN_180013350(&local_88,"legitbot.groups.");
  FUN_18015e980(param_1,&local_88,param_2 + 4);
  FUN_18000f890(&local_88);
  uVar9 = 0;
  do {
    iVar6 = *(int *)(param_2 + 4);
    if (iVar6 < 1) {
      iVar6 = 1;
    }
    if (iVar6 <= (int)uVar9) break;
    uVar7 = FUN_1800ef450(local_48,uVar9 & 0xffffffff);
    uVar7 = FUN_180066ab0(local_68,"legitbot.",uVar7);
    uVar7 = FUN_180042850(&local_88,uVar7,&DAT_1806e6f24);
    FUN_1801ad1b0(param_1,uVar7);
    FUN_18000f890(&local_88);
    FUN_18000f890(local_68);
    FUN_18000f890(local_48);
    uVar9 = uVar9 + 1;
  } while (uVar9 < 0x40);
  local_88 = (char *)0x0;
  uStack_80 = 0;
  local_88 = (char *)FUN_18000fb70(0x20);
  uVar5 = s_legitbot_visualize_1806f74f0._12_4_;
  uVar4 = s_legitbot_visualize_1806f74f0._8_4_;
  uVar3 = s_legitbot_visualize_1806f74f0._4_4_;
  local_78 = 0x12;
  local_70 = 0x1f;
  *(undefined4 *)local_88 = s_legitbot_visualize_1806f74f0._0_4_;
  *(undefined4 *)(local_88 + 4) = uVar3;
  *(undefined4 *)(local_88 + 8) = uVar4;
  *(undefined4 *)(local_88 + 0xc) = uVar5;
  *(undefined2 *)(local_88 + 0x10) = s_legitbot_visualize_1806f74f0._16_2_;
  local_88[0x12] = '\0';
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,&local_88);
  }
  else {
    FUN_180024b50(lVar1,&local_88);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  if (0xf < local_70) {
    uVar9 = local_70 + 1;
    pcVar8 = local_88;
    if (0xfff < uVar9) {
      pcVar8 = *(char **)(local_88 + -8);
      if ((char *)0x1f < local_88 + (-8 - (longlong)pcVar8)) goto LAB_18015fe21;
      uVar9 = local_70 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar8,uVar9);
  }
  local_88 = (char *)0x0;
  uStack_80 = 0;
  local_88 = (char *)FUN_18000fb70(0x20);
  uVar5 = s_legitbot_visualize_target_1806f7540._12_4_;
  uVar4 = s_legitbot_visualize_target_1806f7540._8_4_;
  uVar3 = s_legitbot_visualize_target_1806f7540._4_4_;
  local_78 = 0x19;
  local_70 = 0x1f;
  *(undefined4 *)local_88 = s_legitbot_visualize_target_1806f7540._0_4_;
  *(undefined4 *)(local_88 + 4) = uVar3;
  *(undefined4 *)(local_88 + 8) = uVar4;
  *(undefined4 *)(local_88 + 0xc) = uVar5;
  uVar5 = s_legitbot_visualize_target_1806f7540._21_4_;
  uVar4 = s_legitbot_visualize_target_1806f7540._17_4_;
  uVar3 = CONCAT13(s_legitbot_visualize_target_1806f7540[0x10],
                   s_legitbot_visualize_target_1806f7540._13_3_);
  *(uint *)(local_88 + 9) =
       CONCAT13(s_legitbot_visualize_target_1806f7540[0xc],
                s_legitbot_visualize_target_1806f7540._9_3_);
  *(undefined4 *)(local_88 + 0xd) = uVar3;
  *(undefined4 *)(local_88 + 0x11) = uVar4;
  *(undefined4 *)(local_88 + 0x15) = uVar5;
  local_88[0x19] = '\0';
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,&local_88);
  }
  else {
    FUN_180024b50(lVar1,&local_88);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(&local_88);
  local_88 = (char *)0x0;
  uStack_80 = 0;
  local_88 = (char *)FUN_18000fb70(0x20);
  uVar5 = s_legitbot_target_color_1806f7560._12_4_;
  uVar4 = s_legitbot_target_color_1806f7560._8_4_;
  uVar3 = s_legitbot_target_color_1806f7560._4_4_;
  local_78 = 0x15;
  local_70 = 0x1f;
  *(undefined4 *)local_88 = s_legitbot_target_color_1806f7560._0_4_;
  *(undefined4 *)(local_88 + 4) = uVar3;
  *(undefined4 *)(local_88 + 8) = uVar4;
  *(undefined4 *)(local_88 + 0xc) = uVar5;
  *(ulonglong *)(local_88 + 0xd) =
       CONCAT53(s_legitbot_target_color_1806f7560._16_5_,s_legitbot_target_color_1806f7560._13_3_);
  local_88[0x15] = '\0';
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,&local_88);
  }
  else {
    FUN_180024b50(lVar1,&local_88);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  if (0xf < local_70) {
    uVar9 = local_70 + 1;
    pcVar8 = local_88;
    if (0xfff < uVar9) {
      pcVar8 = *(char **)(local_88 + -8);
      if ((char *)0x1f < local_88 + (-8 - (longlong)pcVar8)) goto LAB_18015fe21;
      uVar9 = local_70 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar8,uVar9);
  }
  local_88 = (char *)0x0;
  uStack_80 = 0;
  local_88 = (char *)FUN_18000fb70(0x20);
  uVar5 = s_legitbot_visualize_fov_1806f7510._8_4_;
  uVar4 = s_legitbot_visualize_fov_1806f7510._4_4_;
  local_78 = 0x16;
  local_70 = 0x1f;
  uVar3 = CONCAT22(s_legitbot_visualize_fov_1806f7510._14_2_,
                   s_legitbot_visualize_fov_1806f7510._12_2_);
  *(undefined4 *)local_88 = s_legitbot_visualize_fov_1806f7510._0_4_;
  *(undefined4 *)(local_88 + 4) = uVar4;
  *(undefined4 *)(local_88 + 8) = uVar5;
  *(undefined4 *)(local_88 + 0xc) = uVar3;
  *(ulonglong *)(local_88 + 0xe) =
       CONCAT62(s_legitbot_visualize_fov_1806f7510._16_6_,s_legitbot_visualize_fov_1806f7510._14_2_)
  ;
  local_88[0x16] = '\0';
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,&local_88);
  }
  else {
    FUN_180024b50(lVar1,&local_88);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  if (0xf < local_70) {
    uVar9 = local_70 + 1;
    pcVar8 = local_88;
    if (0xfff < uVar9) {
      pcVar8 = *(char **)(local_88 + -8);
      if ((char *)0x1f < local_88 + (-8 - (longlong)pcVar8)) goto LAB_18015fe21;
      uVar9 = local_70 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar8,uVar9);
  }
  local_88 = (char *)0x0;
  uStack_80 = 0;
  local_88 = (char *)FUN_18000fb70(0x20);
  uVar5 = s_legitbot_fov_color_1806f7528._12_4_;
  uVar4 = s_legitbot_fov_color_1806f7528._8_4_;
  uVar3 = s_legitbot_fov_color_1806f7528._4_4_;
  local_78 = 0x12;
  local_70 = 0x1f;
  *(undefined4 *)local_88 = s_legitbot_fov_color_1806f7528._0_4_;
  *(undefined4 *)(local_88 + 4) = uVar3;
  *(undefined4 *)(local_88 + 8) = uVar4;
  *(undefined4 *)(local_88 + 0xc) = uVar5;
  *(undefined2 *)(local_88 + 0x10) = s_legitbot_fov_color_1806f7528._16_2_;
  local_88[0x12] = '\0';
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,&local_88);
  }
  else {
    FUN_180024b50(lVar1,&local_88);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  if (0xf < local_70) {
    uVar9 = local_70 + 1;
    pcVar8 = local_88;
    if (0xfff < uVar9) {
      pcVar8 = *(char **)(local_88 + -8);
      if ((char *)0x1f < local_88 + (-8 - (longlong)pcVar8)) goto LAB_18015fe21;
      uVar9 = local_70 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar8,uVar9);
  }
  local_88 = (char *)0x0;
  uStack_80 = 0;
  local_88 = (char *)FUN_18000fb70(0x20);
  uVar5 = s_legitbot_visualize_hitboxes_1806f75b8._12_4_;
  uVar4 = s_legitbot_visualize_hitboxes_1806f75b8._8_4_;
  uVar3 = s_legitbot_visualize_hitboxes_1806f75b8._4_4_;
  local_78 = 0x1b;
  local_70 = 0x1f;
  *(undefined4 *)local_88 = s_legitbot_visualize_hitboxes_1806f75b8._0_4_;
  *(undefined4 *)(local_88 + 4) = uVar3;
  *(undefined4 *)(local_88 + 8) = uVar4;
  *(undefined4 *)(local_88 + 0xc) = uVar5;
  uVar5 = s_legitbot_visualize_hitboxes_1806f75b8._23_4_;
  uVar4 = s_legitbot_visualize_hitboxes_1806f75b8._19_4_;
  uVar3 = CONCAT31(s_legitbot_visualize_hitboxes_1806f75b8._16_3_,
                   s_legitbot_visualize_hitboxes_1806f75b8[0xf]);
  *(uint *)(local_88 + 0xb) =
       CONCAT31(s_legitbot_visualize_hitboxes_1806f75b8._12_3_,
                s_legitbot_visualize_hitboxes_1806f75b8[0xb]);
  *(undefined4 *)(local_88 + 0xf) = uVar3;
  *(undefined4 *)(local_88 + 0x13) = uVar4;
  *(undefined4 *)(local_88 + 0x17) = uVar5;
  local_88[0x1b] = '\0';
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,&local_88);
  }
  else {
    FUN_180024b50(lVar1,&local_88);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  if (0xf < local_70) {
    uVar9 = local_70 + 1;
    pcVar8 = local_88;
    if (0xfff < uVar9) {
      pcVar8 = *(char **)(local_88 + -8);
      if ((char *)0x1f < local_88 + (-8 - (longlong)pcVar8)) goto LAB_18015fe21;
      uVar9 = local_70 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar8,uVar9);
  }
  local_88 = (char *)0x0;
  uStack_80 = 0;
  local_88 = (char *)FUN_18000fb70(0x20);
  uVar5 = s_legitbot_high_priority_color_1806f75d8._12_4_;
  uVar4 = s_legitbot_high_priority_color_1806f75d8._8_4_;
  uVar3 = s_legitbot_high_priority_color_1806f75d8._4_4_;
  local_78 = 0x1c;
  local_70 = 0x1f;
  *(undefined4 *)local_88 = s_legitbot_high_priority_color_1806f75d8._0_4_;
  *(undefined4 *)(local_88 + 4) = uVar3;
  *(undefined4 *)(local_88 + 8) = uVar4;
  *(undefined4 *)(local_88 + 0xc) = uVar5;
  uVar5 = s_legitbot_high_priority_color_1806f75d8._24_4_;
  uVar4 = s_legitbot_high_priority_color_1806f75d8._20_4_;
  uVar3 = s_legitbot_high_priority_color_1806f75d8._16_4_;
  *(undefined4 *)(local_88 + 0xc) = s_legitbot_high_priority_color_1806f75d8._12_4_;
  *(undefined4 *)(local_88 + 0x10) = uVar3;
  *(undefined4 *)(local_88 + 0x14) = uVar4;
  *(undefined4 *)(local_88 + 0x18) = uVar5;
  local_88[0x1c] = '\0';
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,&local_88);
  }
  else {
    FUN_180024b50(lVar1,&local_88);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  if (0xf < local_70) {
    uVar9 = local_70 + 1;
    pcVar8 = local_88;
    if (0xfff < uVar9) {
      pcVar8 = *(char **)(local_88 + -8);
      if ((char *)0x1f < local_88 + (-8 - (longlong)pcVar8)) goto LAB_18015fe21;
      uVar9 = local_70 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar8,uVar9);
  }
  local_88 = (char *)0x0;
  uStack_80 = 0;
  local_88 = (char *)FUN_18000fb70(0x20);
  uVar5 = s_legitbot_low_priority_color_1806f7578._12_4_;
  uVar4 = s_legitbot_low_priority_color_1806f7578._8_4_;
  uVar3 = s_legitbot_low_priority_color_1806f7578._4_4_;
  local_78 = 0x1b;
  local_70 = 0x1f;
  *(undefined4 *)local_88 = s_legitbot_low_priority_color_1806f7578._0_4_;
  *(undefined4 *)(local_88 + 4) = uVar3;
  *(undefined4 *)(local_88 + 8) = uVar4;
  *(undefined4 *)(local_88 + 0xc) = uVar5;
  uVar5 = s_legitbot_low_priority_color_1806f7578._23_4_;
  uVar4 = s_legitbot_low_priority_color_1806f7578._19_4_;
  uVar3 = CONCAT31(s_legitbot_low_priority_color_1806f7578._16_3_,
                   s_legitbot_low_priority_color_1806f7578[0xf]);
  *(uint *)(local_88 + 0xb) =
       CONCAT31(s_legitbot_low_priority_color_1806f7578._12_3_,
                s_legitbot_low_priority_color_1806f7578[0xb]);
  *(undefined4 *)(local_88 + 0xf) = uVar3;
  *(undefined4 *)(local_88 + 0x13) = uVar4;
  *(undefined4 *)(local_88 + 0x17) = uVar5;
  local_88[0x1b] = '\0';
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,&local_88);
  }
  else {
    FUN_180024b50(lVar1,&local_88);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  if (0xf < local_70) {
    uVar9 = local_70 + 1;
    pcVar8 = local_88;
    if (0xfff < uVar9) {
      pcVar8 = *(char **)(local_88 + -8);
      if ((char *)0x1f < local_88 + (-8 - (longlong)pcVar8)) goto LAB_18015fe21;
      uVar9 = local_70 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar8,uVar9);
  }
  local_88 = (char *)0x0;
  uStack_80 = 0;
  local_88 = (char *)FUN_18000fb70(0x20);
  uVar5 = s_legitbot_visualize_recoil_1806f7598._12_4_;
  uVar4 = s_legitbot_visualize_recoil_1806f7598._8_4_;
  uVar3 = s_legitbot_visualize_recoil_1806f7598._4_4_;
  local_78 = 0x19;
  local_70 = 0x1f;
  *(undefined4 *)local_88 = s_legitbot_visualize_recoil_1806f7598._0_4_;
  *(undefined4 *)(local_88 + 4) = uVar3;
  *(undefined4 *)(local_88 + 8) = uVar4;
  *(undefined4 *)(local_88 + 0xc) = uVar5;
  uVar5 = s_legitbot_visualize_recoil_1806f7598._21_4_;
  uVar4 = s_legitbot_visualize_recoil_1806f7598._17_4_;
  uVar3 = CONCAT13(s_legitbot_visualize_recoil_1806f7598[0x10],
                   s_legitbot_visualize_recoil_1806f7598._13_3_);
  *(uint *)(local_88 + 9) =
       CONCAT13(s_legitbot_visualize_recoil_1806f7598[0xc],
                s_legitbot_visualize_recoil_1806f7598._9_3_);
  *(undefined4 *)(local_88 + 0xd) = uVar3;
  *(undefined4 *)(local_88 + 0x11) = uVar4;
  *(undefined4 *)(local_88 + 0x15) = uVar5;
  local_88[0x19] = '\0';
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,&local_88);
  }
  else {
    FUN_180024b50(lVar1,&local_88);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  if (0xf < local_70) {
    uVar9 = local_70 + 1;
    pcVar8 = local_88;
    if (0xfff < uVar9) {
      pcVar8 = *(char **)(local_88 + -8);
      if ((char *)0x1f < local_88 + (-8 - (longlong)pcVar8)) goto LAB_18015fe21;
      uVar9 = local_70 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar8,uVar9);
  }
  local_88 = (char *)0x0;
  uStack_80 = 0;
  local_88 = (char *)FUN_18000fb70(0x20);
  uVar5 = s_legitbot_recoil_original_color_1806f7630._8_4_;
  uVar4 = s_legitbot_recoil_original_color_1806f7630._4_4_;
  local_78 = 0x1e;
  local_70 = 0x1f;
  uVar3 = CONCAT22(s_legitbot_recoil_original_color_1806f7630._14_2_,
                   s_legitbot_recoil_original_color_1806f7630._12_2_);
  *(undefined4 *)local_88 = s_legitbot_recoil_original_color_1806f7630._0_4_;
  *(undefined4 *)(local_88 + 4) = uVar4;
  *(undefined4 *)(local_88 + 8) = uVar5;
  *(undefined4 *)(local_88 + 0xc) = uVar3;
  uVar5 = s_legitbot_recoil_original_color_1806f7630._26_4_;
  uVar4 = s_legitbot_recoil_original_color_1806f7630._22_4_;
  uVar3 = s_legitbot_recoil_original_color_1806f7630._18_4_;
  *(uint *)(local_88 + 0xe) =
       CONCAT22(s_legitbot_recoil_original_color_1806f7630._16_2_,
                s_legitbot_recoil_original_color_1806f7630._14_2_);
  *(undefined4 *)(local_88 + 0x12) = uVar3;
  *(undefined4 *)(local_88 + 0x16) = uVar4;
  *(undefined4 *)(local_88 + 0x1a) = uVar5;
  local_88[0x1e] = '\0';
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,&local_88);
  }
  else {
    FUN_180024b50(lVar1,&local_88);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  if (0xf < local_70) {
    uVar9 = local_70 + 1;
    pcVar8 = local_88;
    if (0xfff < uVar9) {
      pcVar8 = *(char **)(local_88 + -8);
      if ((char *)0x1f < local_88 + (-8 - (longlong)pcVar8)) goto LAB_18015fe21;
      uVar9 = local_70 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar8,uVar9);
  }
  local_88 = (char *)0x0;
  uStack_80 = 0;
  local_88 = (char *)FUN_18000fb70(0x30);
  uVar5 = s_legitbot_recoil_compensated_colo_1806f7650._12_4_;
  uVar4 = s_legitbot_recoil_compensated_colo_1806f7650._8_4_;
  uVar3 = s_legitbot_recoil_compensated_colo_1806f7650._4_4_;
  local_78 = 0x21;
  local_70 = 0x2f;
  *(undefined4 *)local_88 = s_legitbot_recoil_compensated_colo_1806f7650._0_4_;
  *(undefined4 *)(local_88 + 4) = uVar3;
  *(undefined4 *)(local_88 + 8) = uVar4;
  *(undefined4 *)(local_88 + 0xc) = uVar5;
  uVar5 = s_legitbot_recoil_compensated_colo_1806f7650._28_4_;
  uVar4 = s_legitbot_recoil_compensated_colo_1806f7650._24_4_;
  uVar3 = s_legitbot_recoil_compensated_colo_1806f7650._20_4_;
  *(undefined4 *)(local_88 + 0x10) = s_legitbot_recoil_compensated_colo_1806f7650._16_4_;
  *(undefined4 *)(local_88 + 0x14) = uVar3;
  *(undefined4 *)(local_88 + 0x18) = uVar4;
  *(undefined4 *)(local_88 + 0x1c) = uVar5;
  local_88[0x20] = s_legitbot_recoil_compensated_colo_1806f7650[0x20];
  local_88[0x21] = '\0';
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,&local_88);
  }
  else {
    FUN_180024b50(lVar1,&local_88);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  if (0xf < local_70) {
    uVar9 = local_70 + 1;
    pcVar8 = local_88;
    if (0xfff < uVar9) {
      pcVar8 = *(char **)(local_88 + -8);
      if ((char *)0x1f < local_88 + (-8 - (longlong)pcVar8)) goto LAB_18015fe21;
      uVar9 = local_70 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar8,uVar9);
  }
  local_88 = (char *)0x0;
  uStack_80 = 0;
  local_88 = (char *)FUN_18000fb70(0x20);
  uVar5 = s_legitbot_visualize_velocity_1806f75f8._12_4_;
  uVar4 = s_legitbot_visualize_velocity_1806f75f8._8_4_;
  uVar3 = s_legitbot_visualize_velocity_1806f75f8._4_4_;
  local_78 = 0x1b;
  local_70 = 0x1f;
  *(undefined4 *)local_88 = s_legitbot_visualize_velocity_1806f75f8._0_4_;
  *(undefined4 *)(local_88 + 4) = uVar3;
  *(undefined4 *)(local_88 + 8) = uVar4;
  *(undefined4 *)(local_88 + 0xc) = uVar5;
  uVar5 = s_legitbot_visualize_velocity_1806f75f8._23_4_;
  uVar4 = s_legitbot_visualize_velocity_1806f75f8._19_4_;
  uVar3 = CONCAT31(s_legitbot_visualize_velocity_1806f75f8._16_3_,
                   s_legitbot_visualize_velocity_1806f75f8[0xf]);
  *(uint *)(local_88 + 0xb) =
       CONCAT31(s_legitbot_visualize_velocity_1806f75f8._12_3_,
                s_legitbot_visualize_velocity_1806f75f8[0xb]);
  *(undefined4 *)(local_88 + 0xf) = uVar3;
  *(undefined4 *)(local_88 + 0x13) = uVar4;
  *(undefined4 *)(local_88 + 0x17) = uVar5;
  local_88[0x1b] = '\0';
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,&local_88);
  }
  else {
    FUN_180024b50(lVar1,&local_88);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  if (0xf < local_70) {
    uVar9 = local_70 + 1;
    pcVar8 = local_88;
    if (0xfff < uVar9) {
      pcVar8 = *(char **)(local_88 + -8);
      if ((char *)0x1f < local_88 + (-8 - (longlong)pcVar8)) goto LAB_18015fe21;
      uVar9 = local_70 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar8,uVar9);
  }
  local_88 = (char *)0x0;
  uStack_80 = 0;
  local_88 = (char *)FUN_18000fb70(0x20);
  uVar5 = s_legitbot_velocity_speed_1806f7618._12_4_;
  uVar4 = s_legitbot_velocity_speed_1806f7618._8_4_;
  uVar3 = s_legitbot_velocity_speed_1806f7618._4_4_;
  local_78 = 0x17;
  local_70 = 0x1f;
  *(undefined4 *)local_88 = s_legitbot_velocity_speed_1806f7618._0_4_;
  *(undefined4 *)(local_88 + 4) = uVar3;
  *(undefined4 *)(local_88 + 8) = uVar4;
  *(undefined4 *)(local_88 + 0xc) = uVar5;
  *(ulonglong *)(local_88 + 0xf) =
       CONCAT71(s_legitbot_velocity_speed_1806f7618._16_7_,s_legitbot_velocity_speed_1806f7618[0xf])
  ;
  local_88[0x17] = '\0';
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,&local_88);
  }
  else {
    FUN_180024b50(lVar1,&local_88);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  if (0xf < local_70) {
    uVar9 = local_70 + 1;
    pcVar8 = local_88;
    if (0xfff < uVar9) {
      pcVar8 = *(char **)(local_88 + -8);
      if ((char *)0x1f < local_88 + (-8 - (longlong)pcVar8)) goto LAB_18015fe21;
      uVar9 = local_70 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar8,uVar9);
  }
  local_88 = (char *)0x0;
  uStack_80 = 0;
  local_88 = (char *)FUN_18000fb70(0x20);
  uVar5 = s_legitbot_speed_color_1806f76b0._12_4_;
  uVar4 = s_legitbot_speed_color_1806f76b0._8_4_;
  uVar3 = s_legitbot_speed_color_1806f76b0._4_4_;
  local_78 = 0x14;
  local_70 = 0x1f;
  *(undefined4 *)local_88 = s_legitbot_speed_color_1806f76b0._0_4_;
  *(undefined4 *)(local_88 + 4) = uVar3;
  *(undefined4 *)(local_88 + 8) = uVar4;
  *(undefined4 *)(local_88 + 0xc) = uVar5;
  *(undefined4 *)(local_88 + 0x10) = s_legitbot_speed_color_1806f76b0._16_4_;
  local_88[0x14] = '\0';
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,&local_88);
  }
  else {
    FUN_180024b50(lVar1,&local_88);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  if (0xf < local_70) {
    uVar9 = local_70 + 1;
    pcVar8 = local_88;
    if (0xfff < uVar9) {
      pcVar8 = *(char **)(local_88 + -8);
      if ((char *)0x1f < local_88 + (-8 - (longlong)pcVar8)) goto LAB_18015fe21;
      uVar9 = local_70 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar8,uVar9);
  }
  local_88 = (char *)0x0;
  uStack_80 = 0;
  local_88 = (char *)FUN_18000fb70(0x20);
  uVar5 = s_legitbot_velocity_jump_1806f76c8._8_4_;
  uVar4 = s_legitbot_velocity_jump_1806f76c8._4_4_;
  local_78 = 0x16;
  local_70 = 0x1f;
  uVar3 = CONCAT22(s_legitbot_velocity_jump_1806f76c8._14_2_,
                   s_legitbot_velocity_jump_1806f76c8._12_2_);
  *(undefined4 *)local_88 = s_legitbot_velocity_jump_1806f76c8._0_4_;
  *(undefined4 *)(local_88 + 4) = uVar4;
  *(undefined4 *)(local_88 + 8) = uVar5;
  *(undefined4 *)(local_88 + 0xc) = uVar3;
  *(ulonglong *)(local_88 + 0xe) =
       CONCAT62(s_legitbot_velocity_jump_1806f76c8._16_6_,s_legitbot_velocity_jump_1806f76c8._14_2_)
  ;
  local_88[0x16] = '\0';
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,&local_88);
  }
  else {
    FUN_180024b50(lVar1,&local_88);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  if (0xf < local_70) {
    uVar9 = local_70 + 1;
    pcVar8 = local_88;
    if (0xfff < uVar9) {
      pcVar8 = *(char **)(local_88 + -8);
      if ((char *)0x1f < local_88 + (-8 - (longlong)pcVar8)) goto LAB_18015fe21;
      uVar9 = local_70 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar8,uVar9);
  }
  local_88 = (char *)0x0;
  uStack_80 = 0;
  local_88 = (char *)FUN_18000fb70(0x20);
  uVar5 = s_legitbot_jump_color_1806f7678._12_4_;
  uVar4 = s_legitbot_jump_color_1806f7678._8_4_;
  uVar3 = s_legitbot_jump_color_1806f7678._4_4_;
  local_78 = 0x13;
  local_70 = 0x1f;
  *(undefined4 *)local_88 = s_legitbot_jump_color_1806f7678._0_4_;
  *(undefined4 *)(local_88 + 4) = uVar3;
  *(undefined4 *)(local_88 + 8) = uVar4;
  *(undefined4 *)(local_88 + 0xc) = uVar5;
  *(uint *)(local_88 + 0xf) =
       CONCAT31(s_legitbot_jump_color_1806f7678._16_3_,s_legitbot_jump_color_1806f7678[0xf]);
  local_88[0x13] = '\0';
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,&local_88);
  }
  else {
    FUN_180024b50(lVar1,&local_88);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  if (0xf < local_70) {
    uVar9 = local_70 + 1;
    pcVar8 = local_88;
    if (0xfff < uVar9) {
      pcVar8 = *(char **)(local_88 + -8);
      if ((char *)0x1f < local_88 + (-8 - (longlong)pcVar8)) goto LAB_18015fe21;
      uVar9 = local_70 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar8,uVar9);
  }
  local_88 = (char *)0x0;
  uStack_80 = 0;
  local_88 = (char *)FUN_18000fb70(0x20);
  uVar5 = s_legitbot_velocity_ground_1806f7690._12_4_;
  uVar4 = s_legitbot_velocity_ground_1806f7690._8_4_;
  uVar3 = s_legitbot_velocity_ground_1806f7690._4_4_;
  local_78 = 0x18;
  local_70 = 0x1f;
  *(undefined4 *)local_88 = s_legitbot_velocity_ground_1806f7690._0_4_;
  *(undefined4 *)(local_88 + 4) = uVar3;
  *(undefined4 *)(local_88 + 8) = uVar4;
  *(undefined4 *)(local_88 + 0xc) = uVar5;
  *(undefined8 *)(local_88 + 0x10) = s_legitbot_velocity_ground_1806f7690._16_8_;
  local_88[0x18] = '\0';
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,&local_88);
  }
  else {
    FUN_180024b50(lVar1,&local_88);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  if (0xf < local_70) {
    uVar9 = local_70 + 1;
    pcVar8 = local_88;
    if (0xfff < uVar9) {
      pcVar8 = *(char **)(local_88 + -8);
      if ((char *)0x1f < local_88 + (-8 - (longlong)pcVar8)) goto LAB_18015fe21;
      uVar9 = local_70 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar8,uVar9);
  }
  local_88 = (char *)0x0;
  uStack_80 = 0;
  local_78 = 0;
  local_70 = 0;
  FUN_1800133a0(&local_88,"legitbot.ground_color",0x15);
  FUN_18015acf0(param_1,&local_88);
  FUN_18000f890(&local_88);
  local_88 = (char *)0x0;
  uStack_80 = 0;
  local_88 = (char *)FUN_18000fb70(0x20);
  uVar5 = s_legitbot_automatic_weapons_1806f7740._4_4_;
  local_78 = 0x1a;
  local_70 = 0x1f;
  uVar3 = CONCAT22(s_legitbot_automatic_weapons_1806f7740._10_2_,
                   s_legitbot_automatic_weapons_1806f7740._8_2_);
  uVar4 = CONCAT22(s_legitbot_automatic_weapons_1806f7740._14_2_,
                   s_legitbot_automatic_weapons_1806f7740._12_2_);
  *(undefined4 *)local_88 = s_legitbot_automatic_weapons_1806f7740._0_4_;
  *(undefined4 *)(local_88 + 4) = uVar5;
  *(undefined4 *)(local_88 + 8) = uVar3;
  *(undefined4 *)(local_88 + 0xc) = uVar4;
  uVar5 = s_legitbot_automatic_weapons_1806f7740._22_4_;
  uVar4 = s_legitbot_automatic_weapons_1806f7740._18_4_;
  uVar3 = CONCAT22(s_legitbot_automatic_weapons_1806f7740._16_2_,
                   s_legitbot_automatic_weapons_1806f7740._14_2_);
  *(uint *)(local_88 + 10) =
       CONCAT22(s_legitbot_automatic_weapons_1806f7740._12_2_,
                s_legitbot_automatic_weapons_1806f7740._10_2_);
  *(undefined4 *)(local_88 + 0xe) = uVar3;
  *(undefined4 *)(local_88 + 0x12) = uVar4;
  *(undefined4 *)(local_88 + 0x16) = uVar5;
  local_88[0x1a] = '\0';
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,&local_88);
  }
  else {
    FUN_180024b50(lVar1,&local_88);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  if (0xf < local_70) {
    uVar9 = local_70 + 1;
    pcVar8 = local_88;
    if (0xfff < uVar9) {
      pcVar8 = *(char **)(local_88 + -8);
      if ((char *)0x1f < local_88 + (-8 - (longlong)pcVar8)) goto LAB_18015fe21;
      uVar9 = local_70 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar8,uVar9);
  }
  local_88 = (char *)0x0;
  uStack_80 = 0;
  local_88 = (char *)FUN_18000fb70(0x30);
  uVar5 = s_legitbot_automatic_weapons_inter_1806f76e0._12_4_;
  uVar4 = s_legitbot_automatic_weapons_inter_1806f76e0._8_4_;
  uVar3 = s_legitbot_automatic_weapons_inter_1806f76e0._4_4_;
  local_78 = 0x23;
  local_70 = 0x2f;
  *(undefined4 *)local_88 = s_legitbot_automatic_weapons_inter_1806f76e0._0_4_;
  *(undefined4 *)(local_88 + 4) = uVar3;
  *(undefined4 *)(local_88 + 8) = uVar4;
  *(undefined4 *)(local_88 + 0xc) = uVar5;
  uVar5 = s_legitbot_automatic_weapons_inter_1806f76e0._28_4_;
  uVar4 = s_legitbot_automatic_weapons_inter_1806f76e0._24_4_;
  uVar3 = s_legitbot_automatic_weapons_inter_1806f76e0._20_4_;
  *(undefined4 *)(local_88 + 0x10) = s_legitbot_automatic_weapons_inter_1806f76e0._16_4_;
  *(undefined4 *)(local_88 + 0x14) = uVar3;
  *(undefined4 *)(local_88 + 0x18) = uVar4;
  *(undefined4 *)(local_88 + 0x1c) = uVar5;
  *(uint *)(local_88 + 0x1f) =
       CONCAT31(s_legitbot_automatic_weapons_inter_1806f76e0._32_3_,
                s_legitbot_automatic_weapons_inter_1806f76e0[0x1f]);
  local_88[0x23] = '\0';
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,&local_88);
  }
  else {
    FUN_180024b50(lVar1,&local_88);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  if (0xf < local_70) {
    uVar9 = local_70 + 1;
    pcVar8 = local_88;
    if (0xfff < uVar9) {
      pcVar8 = *(char **)(local_88 + -8);
      if ((char *)0x1f < local_88 + (-8 - (longlong)pcVar8)) goto LAB_18015fe21;
      uVar9 = local_70 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar8,uVar9);
  }
  local_88 = (char *)0x0;
  uStack_80 = 0;
  local_88 = (char *)FUN_18000fb70(0x20);
  uVar5 = s_legitbot_standalone_recoil_1806f7708._4_4_;
  local_78 = 0x1a;
  local_70 = 0x1f;
  uVar3 = CONCAT22(s_legitbot_standalone_recoil_1806f7708._10_2_,
                   s_legitbot_standalone_recoil_1806f7708._8_2_);
  uVar4 = CONCAT22(s_legitbot_standalone_recoil_1806f7708._14_2_,
                   s_legitbot_standalone_recoil_1806f7708._12_2_);
  *(undefined4 *)local_88 = s_legitbot_standalone_recoil_1806f7708._0_4_;
  *(undefined4 *)(local_88 + 4) = uVar5;
  *(undefined4 *)(local_88 + 8) = uVar3;
  *(undefined4 *)(local_88 + 0xc) = uVar4;
  uVar5 = s_legitbot_standalone_recoil_1806f7708._22_4_;
  uVar4 = s_legitbot_standalone_recoil_1806f7708._18_4_;
  uVar3 = CONCAT22(s_legitbot_standalone_recoil_1806f7708._16_2_,
                   s_legitbot_standalone_recoil_1806f7708._14_2_);
  *(uint *)(local_88 + 10) =
       CONCAT22(s_legitbot_standalone_recoil_1806f7708._12_2_,
                s_legitbot_standalone_recoil_1806f7708._10_2_);
  *(undefined4 *)(local_88 + 0xe) = uVar3;
  *(undefined4 *)(local_88 + 0x12) = uVar4;
  *(undefined4 *)(local_88 + 0x16) = uVar5;
  local_88[0x1a] = '\0';
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,&local_88);
  }
  else {
    FUN_180024b50(lVar1,&local_88);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  if (0xf < local_70) {
    uVar9 = local_70 + 1;
    pcVar8 = local_88;
    if (0xfff < uVar9) {
      pcVar8 = *(char **)(local_88 + -8);
      if ((char *)0x1f < local_88 + (-8 - (longlong)pcVar8)) goto LAB_18015fe21;
      uVar9 = local_70 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar8,uVar9);
  }
  local_88 = (char *)0x0;
  uStack_80 = 0;
  local_88 = (char *)FUN_18000fb70(0x20);
  uVar5 = s_legitbot_standalone__1806f7788._12_4_;
  uVar4 = s_legitbot_standalone__1806f7788._8_4_;
  uVar3 = s_legitbot_standalone__1806f7788._4_4_;
  local_78 = 0x14;
  local_70 = 0x1f;
  *(undefined4 *)local_88 = s_legitbot_standalone__1806f7788._0_4_;
  *(undefined4 *)(local_88 + 4) = uVar3;
  *(undefined4 *)(local_88 + 8) = uVar4;
  *(undefined4 *)(local_88 + 0xc) = uVar5;
  *(undefined4 *)(local_88 + 0x10) = s_legitbot_standalone__1806f7788._16_4_;
  local_88[0x14] = '\0';
  FUN_1801adcc0(param_1,&local_88);
  if (0xf < local_70) {
    uVar9 = local_70 + 1;
    pcVar8 = local_88;
    if (0xfff < uVar9) {
      pcVar8 = *(char **)(local_88 + -8);
      if ((char *)0x1f < local_88 + (-8 - (longlong)pcVar8)) goto LAB_18015fe21;
      uVar9 = local_70 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar8,uVar9);
  }
  local_88 = (char *)0x0;
  uStack_80 = 0;
  local_88 = (char *)FUN_18000fb70(0x20);
  uVar5 = s_legitbot_randomize_1806f77a0._12_4_;
  uVar4 = s_legitbot_randomize_1806f77a0._8_4_;
  uVar3 = s_legitbot_randomize_1806f77a0._4_4_;
  local_78 = 0x12;
  local_70 = 0x1f;
  *(undefined4 *)local_88 = s_legitbot_randomize_1806f77a0._0_4_;
  *(undefined4 *)(local_88 + 4) = uVar3;
  *(undefined4 *)(local_88 + 8) = uVar4;
  *(undefined4 *)(local_88 + 0xc) = uVar5;
  *(undefined2 *)(local_88 + 0x10) = s_legitbot_randomize_1806f77a0._16_2_;
  local_88[0x12] = '\0';
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,&local_88);
  }
  else {
    FUN_180024b50(lVar1,&local_88);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  if (0xf < local_70) {
    uVar9 = local_70 + 1;
    pcVar8 = local_88;
    if (0xfff < uVar9) {
      pcVar8 = *(char **)(local_88 + -8);
      if ((char *)0x1f < local_88 + (-8 - (longlong)pcVar8)) {
LAB_18015fe21:
        pcVar2 = (code *)swi(0x29);
        (*pcVar2)(5);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar9 = local_70 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar8,uVar9);
  }
  return;
}



/* ===== 18015fe30 FUN_18015fe30 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18015fe30(longlong param_1)

{
  longlong lVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  size_t sVar8;
  undefined8 *puVar9;
  char *pcVar10;
  ulonglong uVar11;
  undefined1 auStack_1b8 [40];
  char *local_190 [4];
  undefined1 local_170 [32];
  undefined1 local_150 [32];
  char *local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined1 local_110 [32];
  char *local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  ulonglong uStack_d8;
  char *local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  char *local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  char *local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 local_50 [32];
  ulonglong local_30;
  
  local_30 = DAT_180919500 ^ (ulonglong)auStack_1b8;
  FUN_180013350(local_110,"visuals_world.view.");
  uVar6 = FUN_180073a70(local_190,local_110,"override_fov");
  FUN_18015acf0(param_1,uVar6);
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,local_110,&DAT_1806e0e18);
  FUN_18015acf0(param_1,uVar6);
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,local_110,"override_aspect");
  FUN_18015acf0(param_1,uVar6);
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,local_110,"aspect_scaling");
  FUN_18015acf0(param_1,uVar6);
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,local_110,"aspect_value");
  FUN_18015acf0(param_1,uVar6);
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,local_110,"disable_landing_bob");
  FUN_18015acf0(param_1,uVar6);
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,local_110,"scope_override_fov");
  FUN_18015acf0(param_1,uVar6);
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,local_110,"scope_x1");
  FUN_18015acf0(param_1,uVar6);
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,local_110,"scope_x2");
  FUN_18015acf0(param_1,uVar6);
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,local_110,"instant_scope");
  FUN_18015acf0(param_1,uVar6);
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,local_110,"show_viewmodel");
  FUN_18015acf0(param_1,uVar6);
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,local_110,"force_viewmodel_fov");
  FUN_18015acf0(param_1,uVar6);
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,local_110,"vm_override_fov");
  FUN_18015acf0(param_1,uVar6);
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,local_110,"vm_fov");
  FUN_18015acf0(param_1,uVar6);
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,local_110,"vm_override_position");
  FUN_18015acf0(param_1,uVar6);
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,local_110,&DAT_1806f78b0);
  FUN_18015acf0(param_1,uVar6);
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,local_110,&DAT_1806f7884);
  FUN_18015acf0(param_1,uVar6);
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,local_110,&DAT_1806f788c);
  FUN_18015acf0(param_1,uVar6);
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,local_110,"vm_override_angles");
  FUN_18015acf0(param_1,uVar6);
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,local_110,"vm_pitch");
  FUN_18015acf0(param_1,uVar6);
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,local_110,"vm_yaw");
  FUN_18015acf0(param_1,uVar6);
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,local_110,"vm_roll");
  FUN_18015acf0(param_1,uVar6);
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,local_110,"vm_override_modifiers");
  FUN_18015acf0(param_1,uVar6);
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,local_110,"vm_bobbing");
  FUN_18015acf0(param_1,uVar6);
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,local_110,"vm_rotation_sway");
  FUN_18015acf0(param_1,uVar6);
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,local_110,"vm_velocity_sway");
  FUN_18015acf0(param_1,uVar6);
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,local_110,"vm_in_air_offset");
  FUN_18015acf0(param_1,uVar6);
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,local_110,"vm_lower_weapon");
  FUN_18015acf0(param_1,uVar6);
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,local_110,"vm_ladder_bob");
  FUN_18015acf0(param_1,uVar6);
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,local_110,"force_third_person");
  FUN_18015acf0(param_1,uVar6);
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,local_110,"third_person_disablers");
  FUN_18015acf0(param_1,uVar6);
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,local_110,"third_person_distance");
  FUN_18015acf0(param_1,uVar6);
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,local_110,"disable_overhead");
  FUN_18015acf0(param_1,uVar6);
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,local_110,"unlock_spectating");
  FUN_18015acf0(param_1,uVar6);
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,local_110,"visual_recoil");
  FUN_18015acf0(param_1,uVar6);
  FUN_18000f890(local_190);
  FUN_180013350(local_170,"visuals_world.esp.");
  uVar6 = FUN_180073a70(local_190,local_170,&DAT_18058b61c);
  FUN_1801ade60(param_1,uVar6);
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,local_170,"bomb_defused");
  FUN_18015acf0(param_1,uVar6);
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,local_170,"defuser");
  FUN_18015acf0(param_1,uVar6);
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,local_170,"defuser_in_time");
  FUN_18015acf0(param_1,uVar6);
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,local_170,"defuser_too_late");
  FUN_18015acf0(param_1,uVar6);
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,local_170,"damage_low");
  FUN_18015acf0(param_1,uVar6);
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,local_170,"damage_high");
  FUN_18015acf0(param_1,uVar6);
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,local_170,"bomb_colorize_effects");
  FUN_18015acf0(param_1,uVar6);
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,local_170,"bomb_explosion");
  FUN_18015acf0(param_1,uVar6);
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,local_170,"bomb_light");
  FUN_18015acf0(param_1,uVar6);
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,local_170,"weapons");
  FUN_1801ade60(param_1,uVar6);
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,local_170,"weapons_colorize_effects");
  FUN_18015acf0(param_1,uVar6);
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,local_170,"weapon_effect");
  FUN_18015acf0(param_1,uVar6);
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,local_170,"impact_effect");
  FUN_18015acf0(param_1,uVar6);
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,local_170,"hostages");
  FUN_1801ade60(param_1,uVar6);
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,local_170,"grenades");
  FUN_1801ade60(param_1,uVar6);
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,local_170,"grenade_lethal");
  FUN_18015acf0(param_1,uVar6);
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,local_170,"grenade_utility");
  FUN_18015acf0(param_1,uVar6);
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,local_170,"item_exponent");
  FUN_18015acf0(param_1,uVar6);
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,local_170,"item_thickness");
  FUN_18015acf0(param_1,uVar6);
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,local_170,"item_points_thickness");
  FUN_18015acf0(param_1,uVar6);
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,local_170,"item_shimmer");
  FUN_18015acf0(param_1,uVar6);
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,local_170,"smoke_radius");
  FUN_18015acf0(param_1,uVar6);
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,local_170,"smoke_radius_color");
  FUN_18015acf0(param_1,uVar6);
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,local_170,"smoke_options");
  FUN_1801ae0d0(param_1,uVar6);
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,local_170,"inferno_radius");
  FUN_18015acf0(param_1,uVar6);
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,local_170,"inferno_lethal");
  FUN_18015acf0(param_1,uVar6);
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,local_170,"inferno_safe");
  FUN_18015acf0(param_1,uVar6);
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,local_170,"inferno_options");
  FUN_1801ae0d0(param_1,uVar6);
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,local_170,"projectile_inferno");
  FUN_18015acf0(param_1,uVar6);
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,local_170,"projectile_lethal");
  FUN_18015acf0(param_1,uVar6);
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,local_170,"projectile_safe");
  FUN_18015acf0(param_1,uVar6);
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,local_170,"colorize_smoke");
  FUN_18015acf0(param_1,uVar6);
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,local_170,"smoke_ct");
  FUN_18015acf0(param_1,uVar6);
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,local_170,"smoke_t");
  FUN_18015acf0(param_1,uVar6);
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,local_170,"colorize_molotov");
  FUN_18015acf0(param_1,uVar6);
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,local_170,"molotov_lethal");
  FUN_18015acf0(param_1,uVar6);
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,local_170,"molotov_safe");
  FUN_18015acf0(param_1,uVar6);
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,local_170,"disable_inferno_decals");
  FUN_18015acf0(param_1,uVar6);
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,local_170,"colorize_explosion");
  FUN_18015acf0(param_1,uVar6);
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,local_170,"explosion_color");
  FUN_18015acf0(param_1,uVar6);
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,local_170,"effects");
  FUN_18015acf0(param_1,uVar6);
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,local_170,"effects_color");
  FUN_18015acf0(param_1,uVar6);
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,local_170,"effects_items");
  FUN_18015acf0(param_1,uVar6);
  FUN_18000f890(local_190);
  uVar11 = 0;
  do {
    uVar6 = FUN_18004e4f0(&local_90,uVar11);
    uVar7 = FUN_180073a70(&local_70,local_170,"effects_item_color");
    uVar6 = FUN_180066820(local_190,uVar7,uVar6);
    lVar1 = *(longlong *)(param_1 + 8);
    if (lVar1 == *(longlong *)(param_1 + 0x10)) {
      FUN_180028f00(param_1,lVar1,uVar6);
    }
    else {
      FUN_180024b50(lVar1,uVar6);
      *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
    }
    FUN_18000f890(local_190);
    FUN_18000f890(&local_70);
    FUN_18000f890(&local_90);
    uVar11 = uVar11 + 1;
  } while (uVar11 < 5);
  uVar6 = FUN_180073a70(local_190,local_170,"effects_item_inherit");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar6);
  }
  else {
    FUN_180024b50(lVar1,uVar6);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,local_170,"trajectory");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar6);
  }
  else {
    FUN_180024b50(lVar1,uVar6);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,local_170,"trajectory_base");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar6);
  }
  else {
    FUN_180024b50(lVar1,uVar6);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,local_170,"trajectory_hit");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar6);
  }
  else {
    FUN_180024b50(lVar1,uVar6);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,local_170,"trajectory_team_damage");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar6);
  }
  else {
    FUN_180024b50(lVar1,uVar6);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,local_170,"trajectory_exponent");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar6);
  }
  else {
    FUN_180024b50(lVar1,uVar6);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,local_170,"trajectory_thickness");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar6);
  }
  else {
    FUN_180024b50(lVar1,uVar6);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,local_170,"trajectory_points_thickness");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar6);
  }
  else {
    FUN_180024b50(lVar1,uVar6);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,local_170,"trajectory_shimmer");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar6);
  }
  else {
    FUN_180024b50(lVar1,uVar6);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,local_170,"trajectory_shimmer_strength");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar6);
  }
  else {
    FUN_180024b50(lVar1,uVar6);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,local_170,"trajectory_thrown");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar6);
  }
  else {
    FUN_180024b50(lVar1,uVar6);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,local_170,"trajectory_pin_pulled_only");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar6);
  }
  else {
    FUN_180024b50(lVar1,uVar6);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,local_170,"trajectory_precise");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar6);
  }
  else {
    FUN_180024b50(lVar1,uVar6);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_190);
  local_130 = (char *)0x0;
  uStack_128 = 0;
  local_130 = (char *)FUN_18000fb70(0x20);
  uVar5 = s_visuals_world_hud__1806f7df8._12_4_;
  uVar4 = s_visuals_world_hud__1806f7df8._8_4_;
  uVar3 = s_visuals_world_hud__1806f7df8._4_4_;
  local_120 = 0x12;
  local_118 = 0x1f;
  *(undefined4 *)local_130 = s_visuals_world_hud__1806f7df8._0_4_;
  *(undefined4 *)(local_130 + 4) = uVar3;
  *(undefined4 *)(local_130 + 8) = uVar4;
  *(undefined4 *)(local_130 + 0xc) = uVar5;
  *(undefined2 *)(local_130 + 0x10) = s_visuals_world_hud__1806f7df8._16_2_;
  local_130[0x12] = '\0';
  uVar6 = FUN_180073a70(local_190,&local_130,"radar");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar6);
  }
  else {
    FUN_180024b50(lVar1,uVar6);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,&local_130,"scope_overlay");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar6);
  }
  else {
    FUN_180024b50(lVar1,uVar6);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,&local_130,"scope_color_mode");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar6);
  }
  else {
    FUN_180024b50(lVar1,uVar6);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,&local_130,"scope_color");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar6);
  }
  else {
    FUN_180024b50(lVar1,uVar6);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,&local_130,"scope_outer");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar6);
  }
  else {
    FUN_180024b50(lVar1,uVar6);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,&local_130,"scope_inner");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar6);
  }
  else {
    FUN_180024b50(lVar1,uVar6);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,&local_130,"scope_selection");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar6);
  }
  else {
    FUN_180024b50(lVar1,uVar6);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,&local_130,"scope_rotation");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar6);
  }
  else {
    FUN_180024b50(lVar1,uVar6);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,&local_130,"scope_offset");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar6);
  }
  else {
    FUN_180024b50(lVar1,uVar6);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,&local_130,"scope_size");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar6);
  }
  else {
    FUN_180024b50(lVar1,uVar6);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,&local_130,"scope_aspect");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar6);
  }
  else {
    FUN_180024b50(lVar1,uVar6);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,&local_130,"scope_spread_scale");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar6);
  }
  else {
    FUN_180024b50(lVar1,uVar6);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,&local_130,"scope_glow");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar6);
  }
  else {
    FUN_180024b50(lVar1,uVar6);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,&local_130,"scope_glow_color");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar6);
  }
  else {
    FUN_180024b50(lVar1,uVar6);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,&local_130,"inaccuracy");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar6);
  }
  else {
    FUN_180024b50(lVar1,uVar6);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,&local_130,"inaccuracy_color");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar6);
  }
  else {
    FUN_180024b50(lVar1,uVar6);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,&local_130,"inaccuracy_follow_recoil");
  FUN_18015acf0(param_1,uVar6);
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,&local_130,"inaccuracy_only_in_scope");
  FUN_18015acf0(param_1,uVar6);
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,&local_130,"inaccuracy_invert_fade");
  FUN_18015acf0(param_1,uVar6);
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,&local_130,"inaccuracy_fade_offset");
  FUN_18015acf0(param_1,uVar6);
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,&local_130,"preserve_notices");
  FUN_18015acf0(param_1,uVar6);
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,&local_130,"hide_teammate_assists");
  FUN_18015acf0(param_1,uVar6);
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,&local_130,"scoreboard_opacity");
  FUN_18015acf0(param_1,uVar6);
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,&local_130,"scoreboard_width");
  FUN_18015acf0(param_1,uVar6);
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,&local_130,"reveal_money");
  FUN_18015acf0(param_1,uVar6);
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,&local_130,"reveal_ranks");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar6);
  }
  else {
    FUN_180024b50(lVar1,uVar6);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,&local_130,"equipment");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar6);
  }
  else {
    FUN_180024b50(lVar1,uVar6);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,&local_130,"equipment_items");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar6);
  }
  else {
    FUN_180024b50(lVar1,uVar6);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,&local_130,"force_sniper_crosshair");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar6);
  }
  else {
    FUN_180024b50(lVar1,uVar6);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,&local_130,"force_while_scoped");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar6);
  }
  else {
    FUN_180024b50(lVar1,uVar6);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,&local_130,"force_while_c4");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar6);
  }
  else {
    FUN_180024b50(lVar1,uVar6);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,&local_130,"hide_while_knife");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar6);
  }
  else {
    FUN_180024b50(lVar1,uVar6);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,&local_130,"hide_while_grenade");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar6);
  }
  else {
    FUN_180024b50(lVar1,uVar6);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,&local_130,"penetration");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar6);
  }
  else {
    FUN_180024b50(lVar1,uVar6);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,&local_130,"penetration_base");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar6);
  }
  else {
    FUN_180024b50(lVar1,uVar6);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,&local_130,"penetration_penetrable");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar6);
  }
  else {
    FUN_180024b50(lVar1,uVar6);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,&local_130,"penetration_target");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar6);
  }
  else {
    FUN_180024b50(lVar1,uVar6);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_190);
  local_d0 = (char *)0x0;
  uStack_c8 = 0;
  local_d0 = (char *)FUN_18000fb70(0x20);
  uVar5 = s_visuals_world_removals__1806f8148._12_4_;
  uVar4 = s_visuals_world_removals__1806f8148._8_4_;
  uVar3 = s_visuals_world_removals__1806f8148._4_4_;
  local_c0 = 0x17;
  local_b8 = 0x1f;
  *(undefined4 *)local_d0 = s_visuals_world_removals__1806f8148._0_4_;
  *(undefined4 *)(local_d0 + 4) = uVar3;
  *(undefined4 *)(local_d0 + 8) = uVar4;
  *(undefined4 *)(local_d0 + 0xc) = uVar5;
  *(ulonglong *)(local_d0 + 0xf) =
       CONCAT71(s_visuals_world_removals__1806f8148._16_7_,s_visuals_world_removals__1806f8148[0xf])
  ;
  local_d0[0x17] = '\0';
  uVar6 = FUN_180073a70(local_190,&local_d0,"team_intro");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar6);
  }
  else {
    FUN_180024b50(lVar1,uVar6);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,&local_d0,"panorama_dots");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar6);
  }
  else {
    FUN_180024b50(lVar1,uVar6);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,&local_d0,"bottom_gradient");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar6);
  }
  else {
    FUN_180024b50(lVar1,uVar6);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,&local_d0,"damage_indicator");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar6);
  }
  else {
    FUN_180024b50(lVar1,uVar6);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,&local_d0,"server_ads");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar6);
  }
  else {
    FUN_180024b50(lVar1,uVar6);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,&local_d0,"flashbang");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar6);
  }
  else {
    FUN_180024b50(lVar1,uVar6);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,&local_d0,&DAT_1806e7598);
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar6);
  }
  else {
    FUN_180024b50(lVar1,uVar6);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,&local_d0,&DAT_1806f816c);
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar6);
  }
  else {
    FUN_180024b50(lVar1,uVar6);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,&local_d0,"carried_hostage");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar6);
  }
  else {
    FUN_180024b50(lVar1,uVar6);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,&local_d0,"post_processing");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar6);
  }
  else {
    FUN_180024b50(lVar1,uVar6);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,&local_d0,"water");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar6);
  }
  else {
    FUN_180024b50(lVar1,uVar6);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,&local_d0,"blood");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar6);
  }
  else {
    FUN_180024b50(lVar1,uVar6);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,&local_d0,"decals");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar6);
  }
  else {
    FUN_180024b50(lVar1,uVar6);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,&local_d0,"ragdolls");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar6);
  }
  else {
    FUN_180024b50(lVar1,uVar6);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,&local_d0,"gravity");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar6);
  }
  else {
    FUN_180024b50(lVar1,uVar6);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,&local_d0,"friction");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar6);
  }
  else {
    FUN_180024b50(lVar1,uVar6);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_190);
  local_90 = (char *)0x0;
  uStack_88 = 0;
  local_90 = (char *)FUN_18000fb70(0x20);
  uVar5 = s_visuals_world_hitmarker__1806f81f8._12_4_;
  uVar4 = s_visuals_world_hitmarker__1806f81f8._8_4_;
  uVar3 = s_visuals_world_hitmarker__1806f81f8._4_4_;
  local_80 = 0x18;
  local_78 = 0x1f;
  *(undefined4 *)local_90 = s_visuals_world_hitmarker__1806f81f8._0_4_;
  *(undefined4 *)(local_90 + 4) = uVar3;
  *(undefined4 *)(local_90 + 8) = uVar4;
  *(undefined4 *)(local_90 + 0xc) = uVar5;
  *(undefined8 *)(local_90 + 0x10) = s_visuals_world_hitmarker__1806f81f8._16_8_;
  local_90[0x18] = '\0';
  uVar6 = FUN_180073a70(local_190,&local_90,"marker_2d");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar6);
  }
  else {
    FUN_180024b50(lVar1,uVar6);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,&local_90,"color_2d");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar6);
  }
  else {
    FUN_180024b50(lVar1,uVar6);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,&local_90,"duration_2d");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar6);
  }
  else {
    FUN_180024b50(lVar1,uVar6);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,&local_90,"marker_3d");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar6);
  }
  else {
    FUN_180024b50(lVar1,uVar6);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,&local_90,"color_3d");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar6);
  }
  else {
    FUN_180024b50(lVar1,uVar6);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,&local_90,"duration_3d");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar6);
  }
  else {
    FUN_180024b50(lVar1,uVar6);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,&local_90,"damage");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar6);
  }
  else {
    FUN_180024b50(lVar1,uVar6);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,&local_90,"color_damage");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar6);
  }
  else {
    FUN_180024b50(lVar1,uVar6);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,&local_90,"duration_damage");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar6);
  }
  else {
    FUN_180024b50(lVar1,uVar6);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_190);
  local_b0 = (char *)0x0;
  uStack_a8 = 0;
  local_b0 = (char *)FUN_18000fb70(0x20);
  uVar5 = s_visuals_world_tracers__1806f8290._8_4_;
  uVar4 = s_visuals_world_tracers__1806f8290._4_4_;
  local_a0 = 0x16;
  local_98 = 0x1f;
  uVar3 = CONCAT22(s_visuals_world_tracers__1806f8290._14_2_,
                   s_visuals_world_tracers__1806f8290._12_2_);
  *(undefined4 *)local_b0 = s_visuals_world_tracers__1806f8290._0_4_;
  *(undefined4 *)(local_b0 + 4) = uVar4;
  *(undefined4 *)(local_b0 + 8) = uVar5;
  *(undefined4 *)(local_b0 + 0xc) = uVar3;
  *(ulonglong *)(local_b0 + 0xe) =
       CONCAT62(s_visuals_world_tracers__1806f8290._16_6_,s_visuals_world_tracers__1806f8290._14_2_)
  ;
  local_b0[0x16] = '\0';
  uVar6 = FUN_180073a70(local_190,&local_b0,"enemies");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar6);
  }
  else {
    FUN_180024b50(lVar1,uVar6);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,&local_b0,"enemies_color");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar6);
  }
  else {
    FUN_180024b50(lVar1,uVar6);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,&local_b0,"enemies_duration");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar6);
  }
  else {
    FUN_180024b50(lVar1,uVar6);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,&local_b0,"teammates");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar6);
  }
  else {
    FUN_180024b50(lVar1,uVar6);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,&local_b0,"teammates_color");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar6);
  }
  else {
    FUN_180024b50(lVar1,uVar6);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,&local_b0,"teammates_duration");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar6);
  }
  else {
    FUN_180024b50(lVar1,uVar6);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,&local_b0,"local");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar6);
  }
  else {
    FUN_180024b50(lVar1,uVar6);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,&local_b0,"local_color");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar6);
  }
  else {
    FUN_180024b50(lVar1,uVar6);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,&local_b0,"local_duration");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar6);
  }
  else {
    FUN_180024b50(lVar1,uVar6);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_190);
  uVar6 = FUN_180073a70(local_190,&local_b0,"shared");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar6);
  }
  else {
    FUN_180024b50(lVar1,uVar6);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_190);
  local_190[0] = "enemies";
  local_190[1] = "teammates";
  local_190[2] = "local";
  local_190[3] = "shared";
  uVar11 = 0;
  do {
    pcVar10 = local_190[uVar11];
    uVar6 = FUN_180073a70(local_50,&local_b0,"style_");
    sVar8 = strlen(pcVar10);
    puVar9 = (undefined8 *)FUN_1800134a0(uVar6,pcVar10,sVar8);
    local_70 = *puVar9;
    uStack_68 = puVar9[1];
    local_60 = puVar9[2];
    uStack_58 = puVar9[3];
    puVar9[2] = 0;
    puVar9[3] = 0xf;
    *(undefined1 *)puVar9 = 0;
    puVar9 = (undefined8 *)FUN_1800134a0(&local_70,&DAT_1806e6f24,1);
    local_f0 = (char *)*puVar9;
    uStack_e8 = puVar9[1];
    local_e0 = puVar9[2];
    uStack_d8 = puVar9[3];
    puVar9[2] = 0;
    puVar9[3] = 0xf;
    *(undefined1 *)puVar9 = 0;
    FUN_18000f890(&local_70);
    FUN_18000f890(local_50);
    uVar6 = FUN_180073a70(local_150,&local_f0,"use_3d_scale");
    lVar1 = *(longlong *)(param_1 + 8);
    if (lVar1 == *(longlong *)(param_1 + 0x10)) {
      FUN_180028f00(param_1,lVar1,uVar6);
    }
    else {
      FUN_180024b50(lVar1,uVar6);
      *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
    }
    FUN_18000f890(local_150);
    uVar6 = FUN_180073a70(local_150,&local_f0,"glow_opacity");
    lVar1 = *(longlong *)(param_1 + 8);
    if (lVar1 == *(longlong *)(param_1 + 0x10)) {
      FUN_180028f00(param_1,lVar1,uVar6);
    }
    else {
      FUN_180024b50(lVar1,uVar6);
      *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
    }
    FUN_18000f890(local_150);
    uVar6 = FUN_180073a70(local_150,&local_f0,"thickness");
    lVar1 = *(longlong *)(param_1 + 8);
    if (lVar1 == *(longlong *)(param_1 + 0x10)) {
      FUN_180028f00(param_1,lVar1,uVar6);
    }
    else {
      FUN_180024b50(lVar1,uVar6);
      *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
    }
    FUN_18000f890(local_150);
    uVar6 = FUN_180073a70(local_150,&local_f0,"scale");
    lVar1 = *(longlong *)(param_1 + 8);
    if (lVar1 == *(longlong *)(param_1 + 0x10)) {
      FUN_180028f00(param_1,lVar1,uVar6);
    }
    else {
      FUN_180024b50(lVar1,uVar6);
      *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
    }
    FUN_18000f890(local_150);
    uVar6 = FUN_180073a70(local_150,&local_f0,"glow_width");
    lVar1 = *(longlong *)(param_1 + 8);
    if (lVar1 == *(longlong *)(param_1 + 0x10)) {
      FUN_180028f00(param_1,lVar1,uVar6);
    }
    else {
      FUN_180024b50(lVar1,uVar6);
      *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
    }
    FUN_18000f890(local_150);
    uVar6 = FUN_180073a70(local_150,&local_f0,"glow_radius");
    lVar1 = *(longlong *)(param_1 + 8);
    if (lVar1 == *(longlong *)(param_1 + 0x10)) {
      FUN_180028f00(param_1,lVar1,uVar6);
    }
    else {
      FUN_180024b50(lVar1,uVar6);
      *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
    }
    FUN_18000f890(local_150);
    FUN_18000f890(&local_f0);
    uVar11 = uVar11 + 1;
  } while (uVar11 < 4);
  local_f0 = (char *)0x0;
  uStack_e8 = 0;
  local_f0 = (char *)FUN_18000fb70(0x20);
  uVar5 = s_visuals_world_impacts__1806f8398._8_4_;
  uVar4 = s_visuals_world_impacts__1806f8398._4_4_;
  local_e0 = 0x16;
  uStack_d8 = 0x1f;
  uVar3 = CONCAT22(s_visuals_world_impacts__1806f8398._14_2_,
                   s_visuals_world_impacts__1806f8398._12_2_);
  *(undefined4 *)local_f0 = s_visuals_world_impacts__1806f8398._0_4_;
  *(undefined4 *)(local_f0 + 4) = uVar4;
  *(undefined4 *)(local_f0 + 8) = uVar5;
  *(undefined4 *)(local_f0 + 0xc) = uVar3;
  *(ulonglong *)(local_f0 + 0xe) =
       CONCAT62(s_visuals_world_impacts__1806f8398._16_6_,s_visuals_world_impacts__1806f8398._14_2_)
  ;
  local_f0[0x16] = '\0';
  uVar6 = FUN_180073a70(local_150,&local_f0,"enabled");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar6);
  }
  else {
    FUN_180024b50(lVar1,uVar6);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_150);
  uVar6 = FUN_180073a70(local_150,&local_f0,"client");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar6);
  }
  else {
    FUN_180024b50(lVar1,uVar6);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_150);
  uVar6 = FUN_180073a70(local_150,&local_f0,"server");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar6);
  }
  else {
    FUN_180024b50(lVar1,uVar6);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_150);
  uVar6 = FUN_180073a70(local_150,&local_f0,"scale");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar6);
  }
  else {
    FUN_180024b50(lVar1,uVar6);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_150);
  uVar6 = FUN_180073a70(local_150,&local_f0,"rounding");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar6);
  }
  else {
    FUN_180024b50(lVar1,uVar6);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_150);
  uVar6 = FUN_180073a70(local_150,&local_f0,"fill_opacity");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar6);
  }
  else {
    FUN_180024b50(lVar1,uVar6);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_150);
  uVar6 = FUN_180073a70(local_150,&local_f0,"outline_opacity");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar6);
  }
  else {
    FUN_180024b50(lVar1,uVar6);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_150);
  uVar6 = FUN_180073a70(local_150,&local_f0,"glow_opacity");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar6);
  }
  else {
    FUN_180024b50(lVar1,uVar6);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_150);
  uVar6 = FUN_180073a70(local_150,&local_f0,&DAT_1806f83d8);
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar6);
  }
  else {
    FUN_180024b50(lVar1,uVar6);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_150);
  uVar6 = FUN_180073a70(local_150,&local_f0,"duration");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar6);
  }
  else {
    FUN_180024b50(lVar1,uVar6);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_150);
  uVar6 = FUN_180073a70(local_150,&local_f0,"sparks");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar6);
  }
  else {
    FUN_180024b50(lVar1,uVar6);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_150);
  uVar6 = FUN_180073a70(local_150,&local_f0,"sparks_color");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar6);
  }
  else {
    FUN_180024b50(lVar1,uVar6);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_150);
  uVar6 = FUN_180073a70(local_150,&local_f0,"sparks_glow");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar6);
  }
  else {
    FUN_180024b50(lVar1,uVar6);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_150);
  uVar6 = FUN_180073a70(local_150,&local_f0,"sparks_radius");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar6);
  }
  else {
    FUN_180024b50(lVar1,uVar6);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_150);
  uVar6 = FUN_180073a70(local_150,&local_f0,"sparks_count");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar6);
  }
  else {
    FUN_180024b50(lVar1,uVar6);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_150);
  uVar6 = FUN_180073a70(local_150,&local_f0,"sparks_spread");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar6);
  }
  else {
    FUN_180024b50(lVar1,uVar6);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_150);
  uVar6 = FUN_180073a70(local_150,&local_f0,"sparks_height");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar6);
  }
  else {
    FUN_180024b50(lVar1,uVar6);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_150);
  uVar6 = FUN_180073a70(local_150,&local_f0,"sparks_lifetime");
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,uVar6);
  }
  else {
    FUN_180024b50(lVar1,uVar6);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  FUN_18000f890(local_150);
  if (0xf < uStack_d8) {
    uVar11 = uStack_d8 + 1;
    pcVar10 = local_f0;
    if (0xfff < uVar11) {
      pcVar10 = *(char **)(local_f0 + -8);
      if ((char *)0x1f < local_f0 + (-8 - (longlong)pcVar10)) {
        pcVar2 = (code *)swi(0x29);
        (*pcVar2)(5);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar11 = uStack_d8 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar10,uVar11);
  }
  FUN_18000f890(&local_b0);
  FUN_18000f890(&local_90);
  FUN_18000f890(&local_d0);
  FUN_18000f890(&local_130);
  FUN_18000f890(local_170);
  FUN_18000f890(local_110);
  return;
}



/* ===== 180162d70 FUN_180162d70 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180162d70(longlong *param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined1 auStack_68 [40];
  longlong local_40 [5];
  
  local_40[4] = DAT_180919500 ^ (ulonglong)auStack_68;
  puVar5 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    puVar5 = (undefined8 *)*param_2;
  }
  if (8 < (ulonglong)param_2[2]) {
    puVar2 = (undefined8 *)
             thunk_FUN_1804e6890(puVar5,(undefined8 *)((longlong)puVar5 + 9),"ambience.",9);
    if ((puVar2 != (undefined8 *)((longlong)puVar5 + 9)) && (puVar2 == puVar5)) {
      puVar5 = param_2;
      if (0xf < (ulonglong)param_2[3]) {
        puVar5 = (undefined8 *)*param_2;
      }
      uVar3 = FUN_1800ba730(puVar5,param_2[2]);
      local_40[0] = 0;
      local_40[1] = 0;
      local_40[2] = 0;
      local_40[3] = 0;
      if ((ulonglong)param_2[2] < uVar3) {
        uVar3 = param_2[2];
      }
      if (0xf < (ulonglong)param_2[3]) {
        param_2 = (undefined8 *)*param_2;
      }
      FUN_1800133a0(local_40,param_2,uVar3);
      puVar5 = (undefined8 *)*param_1;
      lVar6 = puVar5[1];
      lVar4 = FUN_180026970(*puVar5,lVar6,local_40);
      if (lVar4 == lVar6) {
        if (lVar6 == puVar5[2]) {
          FUN_180028f00(puVar5,lVar6,local_40);
        }
        else {
          FUN_180024b50(lVar6,local_40);
          puVar5[1] = puVar5[1] + 0x20;
        }
      }
      if (0xf < (ulonglong)local_40[3]) {
        uVar3 = local_40[3] + 1;
        lVar6 = local_40[0];
        if (0xfff < uVar3) {
          lVar6 = *(longlong *)(local_40[0] + -8);
          if (0x1f < (local_40[0] - lVar6) - 8U) {
            pcVar1 = (code *)swi(0x29);
            (*pcVar1)(5);
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          uVar3 = local_40[3] + 0x28;
        }
        thunk_FUN_1803d64e0(lVar6,uVar3);
      }
    }
  }
  return;
}



/* ===== 180162ee0 FUN_180162ee0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180162ee0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_58;
  FUN_180162d70();
  uVar1 = FUN_180073a70(local_38,param_2,"_mode");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_38);
  return;
}



/* ===== 180162f50 FUN_180162f50 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180162f50(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [32];
  undefined1 local_68 [32];
  undefined1 local_48 [32];
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_88;
  uVar1 = FUN_180073a70(local_68,param_2,".esp.enabled");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_68);
  uVar1 = FUN_180073a70(local_68,param_2,".esp.box");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_68);
  uVar1 = FUN_180073a70(local_68,param_2,".esp.name");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_68);
  uVar1 = FUN_180073a70(local_68,param_2,".esp.icon");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_68);
  uVar1 = FUN_180073a70(local_68,param_2,".esp.distance");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_68);
  uVar1 = FUN_180073a70(local_68,param_2,".esp.timer");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_68);
  uVar1 = FUN_180073a70(local_68,param_2,".esp.damage");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_68);
  uVar1 = FUN_180073a70(local_68,param_2,".esp.color");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_68);
  uVar1 = FUN_180073a70(local_68,param_2,".esp.max_distance");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_68);
  uVar1 = FUN_180073a70(local_48,param_2,".chams");
  uVar2 = FUN_180073a70(local_68,uVar1,".enabled");
  FUN_180162d70(param_1,uVar2);
  FUN_18000f890(local_68);
  uVar2 = FUN_180073a70(local_68,uVar1,".visible");
  FUN_1801c2e20(param_1,uVar2);
  FUN_18000f890(local_68);
  uVar2 = FUN_180073a70(local_68,uVar1,".occluded");
  FUN_1801c2e20(param_1,uVar2);
  FUN_18000f890(local_68);
  uVar2 = FUN_180073a70(local_68,uVar1,".overlay");
  FUN_1801c2e20(param_1,uVar2);
  FUN_18000f890(local_68);
  uVar1 = FUN_180073a70(local_68,uVar1,".overlay_occluded");
  FUN_1801c2e20(param_1,uVar1);
  FUN_18000f890(local_68);
  FUN_18000f890(local_48);
  uVar1 = FUN_180073a70(local_48,param_2,".glow.enabled");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_48);
  uVar1 = FUN_180073a70(local_48,param_2,".glow.color");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_48);
  return;
}



/* ===== 180163240 FUN_180163240 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180163240(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  char *_Str;
  longlong lVar1;
  undefined8 uVar2;
  size_t sVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar10;
  undefined1 auStack_118 [40];
  longlong local_f0;
  undefined1 local_e8 [32];
  undefined1 local_c8 [32];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 local_88 [32];
  undefined1 local_68 [32];
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_118;
  local_f0 = param_3;
  uVar2 = FUN_180073a70(&local_a8,param_2,".esp.enabled");
  FUN_180162d70(param_1,uVar2);
  FUN_18000f890(&local_a8);
  uVar9 = 0;
  do {
    _Str = (&PTR_s_health_bar_1805e7de0)[uVar9];
    uVar2 = FUN_180073a70(local_68,param_2,".esp.item.");
    sVar3 = strlen(_Str);
    puVar4 = (undefined4 *)FUN_1800134a0(uVar2,_Str,sVar3);
    local_a8 = *puVar4;
    uStack_a4 = puVar4[1];
    uStack_a0 = puVar4[2];
    uStack_9c = puVar4[3];
    local_98 = puVar4[4];
    uStack_94 = puVar4[5];
    uStack_90 = puVar4[6];
    uStack_8c = puVar4[7];
    *(undefined1 *)puVar4 = 0;
    *(undefined8 *)(puVar4 + 4) = 0;
    *(undefined8 *)(puVar4 + 6) = 0xf;
    FUN_18000f890(local_68);
    uVar2 = FUN_180073a70(local_c8,&local_a8,".enabled");
    FUN_180162d70(param_1,uVar2);
    FUN_18000f890(local_c8);
    uVar2 = FUN_180073a70(local_c8,&local_a8,".side");
    FUN_180162d70(param_1,uVar2);
    FUN_18000f890(local_c8);
    uVar2 = FUN_180073a70(local_c8,&local_a8,".position");
    FUN_180162d70(param_1,uVar2);
    FUN_18000f890(local_c8);
    uVar2 = FUN_180073a70(local_c8,&local_a8);
    FUN_180162d70(param_1,uVar2);
    FUN_18000f890(local_c8);
    iVar6 = 0;
    iVar10 = (&DAT_1805e7f10)[uVar9 * 0x46];
    if (0 < iVar10) {
      uVar8 = 0;
      iVar6 = 0;
      do {
        if (iVar6 < (int)((&DAT_1805e7f24)[uVar9 * 0x46 + uVar8 * 10] +
                         (&DAT_1805e7f20)[uVar9 * 0x46 + uVar8 * 10])) {
          iVar6 = (&DAT_1805e7f24)[uVar9 * 0x46 + uVar8 * 10] +
                  (&DAT_1805e7f20)[uVar9 * 0x46 + uVar8 * 10];
        }
        uVar7 = (int)uVar8 + 1;
        uVar8 = (ulonglong)uVar7;
      } while ((int)uVar7 < iVar10);
    }
    if (1 < iVar10) {
      uVar2 = FUN_180073a70(local_c8,&local_a8,".color_mode");
      FUN_180162d70(param_1,uVar2);
      FUN_18000f890(local_c8);
    }
    iVar10 = 0;
    if (iVar6 < 1) {
      iVar6 = 1;
    }
    if (0 < iVar6) {
      do {
        uVar2 = FUN_18003a390(local_e8,iVar10);
        uVar5 = FUN_180073a70(local_88,&local_a8,".color");
        uVar2 = FUN_180066820(local_c8,uVar5,uVar2);
        FUN_180162d70(param_1,uVar2);
        FUN_18000f890(local_c8);
        FUN_18000f890(local_88);
        FUN_18000f890(local_e8);
        iVar10 = iVar10 + 1;
      } while (iVar10 < iVar6);
    }
    if ((&DAT_1805e7eec)[uVar9 * 0x46] == 0) {
      uVar2 = FUN_180073a70(local_e8,&local_a8,".background");
      FUN_180162d70(param_1,uVar2);
      FUN_18000f890(local_e8);
      uVar2 = FUN_180073a70(local_e8,&local_a8,".shadow");
      FUN_180162d70(param_1,uVar2);
      FUN_18000f890(local_e8);
      uVar2 = FUN_180073a70(local_e8,&local_a8,".shadow_color");
      FUN_180162d70(param_1,uVar2);
      FUN_18000f890(local_e8);
      uVar2 = FUN_180073a70(local_e8,&local_a8,".format");
      FUN_180162d70(param_1,uVar2);
      FUN_18000f890(local_e8);
    }
    if ((&DAT_1805e7eec)[uVar9 * 0x46] - 1 < 2) {
      uVar2 = FUN_180073a70(local_e8,&local_a8,".font");
      FUN_180162d70(param_1,uVar2);
      FUN_18000f890(local_e8);
      uVar2 = FUN_180073a70(local_e8,&local_a8,".case");
      FUN_180162d70(param_1,uVar2);
      FUN_18000f890(local_e8);
    }
    if ((&DAT_1805e7eec)[uVar9 * 0x46] - 3 < 2) {
      uVar2 = FUN_180073a70(local_e8,&local_a8,".inverted");
      FUN_180162d70(param_1,uVar2);
      FUN_18000f890(local_e8);
    }
    FUN_18000f890(&local_a8);
    uVar9 = uVar9 + 1;
  } while (uVar9 < 0x1d);
  uVar2 = FUN_180073a70(local_e8,param_2,".esp.expected_damage");
  FUN_180162d70(param_1,uVar2);
  FUN_18000f890(local_e8);
  uVar2 = FUN_180073a70(local_e8,param_2,".esp.pulse_mode");
  FUN_180162d70(param_1,uVar2);
  FUN_18000f890(local_e8);
  uVar9 = 0;
  do {
    uVar2 = FUN_18004e4f0(local_c8,uVar9);
    uVar5 = FUN_180073a70(local_88,param_2,".esp.pulse_color");
    uVar2 = FUN_180066820(local_e8,uVar5,uVar2);
    FUN_180162d70(param_1,uVar2);
    FUN_18000f890(local_e8);
    FUN_18000f890(local_88);
    FUN_18000f890(local_c8);
    uVar9 = uVar9 + 1;
  } while (uVar9 < 3);
  uVar2 = FUN_180073a70(local_e8,param_2,".esp.name_avatar");
  FUN_180162d70(param_1,uVar2);
  FUN_18000f890(local_e8);
  uVar2 = FUN_180073a70(local_e8,param_2,".esp.icon_order0");
  FUN_180162d70(param_1,uVar2);
  FUN_18000f890(local_e8);
  uVar2 = FUN_180073a70(local_e8,param_2,".esp.icon_order1");
  FUN_180162d70(param_1,uVar2);
  FUN_18000f890(local_e8);
  uVar2 = FUN_180073a70(local_e8,param_2,".esp.icon_selection");
  FUN_180162d70(param_1,uVar2);
  FUN_18000f890(local_e8);
  uVar2 = FUN_180073a70(local_e8,param_2,".esp.icon_dimming");
  FUN_180162d70(param_1,uVar2);
  FUN_18000f890(local_e8);
  uVar2 = FUN_180073a70(local_e8,param_2,".esp.icon_clip_rect");
  FUN_180162d70(param_1,uVar2);
  FUN_18000f890(local_e8);
  uVar2 = FUN_180073a70(local_e8,param_2,".esp.icon_low_ammo");
  FUN_180162d70(param_1,uVar2);
  FUN_18000f890(local_e8);
  uVar2 = FUN_180073a70(local_e8,param_2,".esp.icon_all_grenades");
  FUN_180162d70(param_1,uVar2);
  FUN_18000f890(local_e8);
  uVar2 = FUN_180073a70(local_e8,param_2,".esp.icon_pin_pulled");
  FUN_180162d70(param_1,uVar2);
  FUN_18000f890(local_e8);
  uVar2 = FUN_180073a70(local_e8,param_2,".esp.taser_in_hand");
  FUN_180162d70(param_1,uVar2);
  FUN_18000f890(local_e8);
  uVar2 = FUN_180073a70(local_e8,param_2,".esp.offscreen_arrows");
  FUN_180162d70(param_1,uVar2);
  FUN_18000f890(local_e8);
  uVar2 = FUN_180073a70(local_e8,param_2,".esp.arrow_color");
  FUN_180162d70(param_1,uVar2);
  FUN_18000f890(local_e8);
  uVar2 = FUN_180073a70(local_e8,param_2,".esp.offscreen_arrow_size");
  FUN_180162d70(param_1,uVar2);
  FUN_18000f890(local_e8);
  uVar2 = FUN_180073a70(local_e8,param_2,".esp.offscreen_arrow_radius");
  FUN_180162d70(param_1,uVar2);
  FUN_18000f890(local_e8);
  uVar2 = FUN_180073a70(local_e8,param_2,".esp.sounds");
  FUN_180162d70(param_1,uVar2);
  FUN_18000f890(local_e8);
  uVar2 = FUN_180073a70(local_e8,param_2,".esp.sound_color");
  FUN_180162d70(param_1,uVar2);
  FUN_18000f890(local_e8);
  lVar1 = local_f0;
  uVar9 = 0;
  do {
    uVar2 = FUN_18004e4f0(local_88,uVar9);
    uVar5 = FUN_180073a70(local_e8,param_2,".esp.custom");
    FUN_180066820(&local_a8,uVar5,uVar2);
    FUN_18000f890(local_e8);
    FUN_18000f890(local_88);
    uVar2 = FUN_180073a70(local_c8,&local_a8,&DAT_1806f6a6c);
    FUN_180162d70(param_1,uVar2);
    FUN_18000f890(local_c8);
    if (*(char *)(lVar1 + 0x11d8 + uVar9 * 0x74) != '\0') {
      uVar2 = FUN_180073a70(local_c8,&local_a8,".enabled");
      FUN_180162d70(param_1,uVar2);
      FUN_18000f890(local_c8);
      uVar2 = FUN_180073a70(local_c8,&local_a8,".side");
      FUN_180162d70(param_1,uVar2);
      FUN_18000f890(local_c8);
      uVar2 = FUN_180073a70(local_c8,&local_a8,".order");
      FUN_180162d70(param_1,uVar2);
      FUN_18000f890(local_c8);
      uVar2 = FUN_180073a70(local_c8,&local_a8,".color");
      FUN_180162d70(param_1,uVar2);
      FUN_18000f890(local_c8);
      uVar2 = FUN_180073a70(local_c8,&local_a8,".second");
      FUN_180162d70(param_1,uVar2);
      FUN_18000f890(local_c8);
      uVar2 = FUN_180073a70(local_c8,&local_a8,".size");
      FUN_180162d70(param_1,uVar2);
      FUN_18000f890(local_c8);
      uVar2 = FUN_180073a70(local_c8,&local_a8,".small");
      FUN_180162d70(param_1,uVar2);
      FUN_18000f890(local_c8);
      uVar2 = FUN_180073a70(local_c8,&local_a8,".text");
      FUN_180162d70(param_1,uVar2);
      FUN_18000f890(local_c8);
    }
    FUN_18000f890(&local_a8);
    uVar9 = uVar9 + 1;
  } while (uVar9 < 0x10);
  uVar2 = FUN_180073a70(local_e8,param_2,".glow.enabled");
  FUN_180162d70(param_1,uVar2);
  FUN_18000f890(local_e8);
  uVar2 = FUN_180073a70(local_e8,param_2,".glow.color");
  FUN_180162d70(param_1,uVar2);
  FUN_18000f890(local_e8);
  return;
}



/* ===== 180163c20 FUN_180163c20 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180163c20(undefined8 param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  char *pcVar6;
  ulonglong uVar7;
  undefined1 auStack_78 [32];
  __uint64 local_58;
  char *local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  ulonglong local_38;
  undefined1 local_30 [32];
  ulonglong local_10;
  
  local_10 = DAT_180919500 ^ (ulonglong)auStack_78;
  local_50 = (char *)0x0;
  uStack_48 = 0;
  local_50 = (char *)FUN_18000fb70(0x20);
  uVar4 = s_model_enemy_player_1806f6a70._12_4_;
  uVar3 = s_model_enemy_player_1806f6a70._8_4_;
  uVar2 = s_model_enemy_player_1806f6a70._4_4_;
  local_40 = 0x12;
  local_38 = 0x1f;
  *(undefined4 *)local_50 = s_model_enemy_player_1806f6a70._0_4_;
  *(undefined4 *)(local_50 + 4) = uVar2;
  *(undefined4 *)(local_50 + 8) = uVar3;
  *(undefined4 *)(local_50 + 0xc) = uVar4;
  *(undefined2 *)(local_50 + 0x10) = s_model_enemy_player_1806f6a70._16_2_;
  local_50[0x12] = '\0';
  FUN_180165030(param_1,&local_50);
  if (0xf < local_38) {
    uVar7 = local_38 + 1;
    pcVar6 = local_50;
    if (0xfff < uVar7) {
      pcVar6 = *(char **)(local_50 + -8);
      if ((char *)0x1f < local_50 + (-8 - (longlong)pcVar6)) goto LAB_180164b5d;
      uVar7 = local_38 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar6,uVar7);
  }
  local_50 = (char *)0x0;
  uStack_48 = 0;
  local_50 = (char *)FUN_18000fb70(0x20);
  uVar4 = s_model_enemy_behind_walls_1806f6a88._12_4_;
  uVar3 = s_model_enemy_behind_walls_1806f6a88._8_4_;
  uVar2 = s_model_enemy_behind_walls_1806f6a88._4_4_;
  local_40 = 0x18;
  local_38 = 0x1f;
  *(undefined4 *)local_50 = s_model_enemy_behind_walls_1806f6a88._0_4_;
  *(undefined4 *)(local_50 + 4) = uVar2;
  *(undefined4 *)(local_50 + 8) = uVar3;
  *(undefined4 *)(local_50 + 0xc) = uVar4;
  *(undefined8 *)(local_50 + 0x10) = s_model_enemy_behind_walls_1806f6a88._16_8_;
  local_50[0x18] = '\0';
  FUN_180165030(param_1,&local_50);
  if (0xf < local_38) {
    uVar7 = local_38 + 1;
    pcVar6 = local_50;
    if (0xfff < uVar7) {
      pcVar6 = *(char **)(local_50 + -8);
      if ((char *)0x1f < local_50 + (-8 - (longlong)pcVar6)) goto LAB_180164b5d;
      uVar7 = local_38 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar6,uVar7);
  }
  local_50 = (char *)0x0;
  uStack_48 = 0;
  local_50 = (char *)FUN_18000fb70(0x20);
  uVar4 = s_model_enemy_on_shot_1806f6ae8._12_4_;
  uVar3 = s_model_enemy_on_shot_1806f6ae8._8_4_;
  uVar2 = s_model_enemy_on_shot_1806f6ae8._4_4_;
  local_40 = 0x13;
  local_38 = 0x1f;
  *(undefined4 *)local_50 = s_model_enemy_on_shot_1806f6ae8._0_4_;
  *(undefined4 *)(local_50 + 4) = uVar2;
  *(undefined4 *)(local_50 + 8) = uVar3;
  *(undefined4 *)(local_50 + 0xc) = uVar4;
  *(uint *)(local_50 + 0xf) =
       CONCAT31(s_model_enemy_on_shot_1806f6ae8._16_3_,s_model_enemy_on_shot_1806f6ae8[0xf]);
  local_50[0x13] = '\0';
  FUN_180165030(param_1,&local_50);
  if (0xf < local_38) {
    uVar7 = local_38 + 1;
    pcVar6 = local_50;
    if (0xfff < uVar7) {
      pcVar6 = *(char **)(local_50 + -8);
      if ((char *)0x1f < local_50 + (-8 - (longlong)pcVar6)) goto LAB_180164b5d;
      uVar7 = local_38 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar6,uVar7);
  }
  local_50 = (char *)0x0;
  uStack_48 = 0;
  local_50 = (char *)FUN_18000fb70(0x20);
  uVar4 = s_model_enemy_on_shot_glow_1806f6b00._12_4_;
  uVar3 = s_model_enemy_on_shot_glow_1806f6b00._8_4_;
  uVar2 = s_model_enemy_on_shot_glow_1806f6b00._4_4_;
  local_40 = 0x18;
  local_38 = 0x1f;
  *(undefined4 *)local_50 = s_model_enemy_on_shot_glow_1806f6b00._0_4_;
  *(undefined4 *)(local_50 + 4) = uVar2;
  *(undefined4 *)(local_50 + 8) = uVar3;
  *(undefined4 *)(local_50 + 0xc) = uVar4;
  *(undefined8 *)(local_50 + 0x10) = s_model_enemy_on_shot_glow_1806f6b00._16_8_;
  local_50[0x18] = '\0';
  uVar5 = FUN_180073a70(local_30,&local_50,".enabled");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_30);
  uVar5 = FUN_180073a70(local_30,&local_50,".color");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_30);
  if (0xf < local_38) {
    uVar7 = local_38 + 1;
    pcVar6 = local_50;
    if (0xfff < uVar7) {
      pcVar6 = *(char **)(local_50 + -8);
      if ((char *)0x1f < local_50 + (-8 - (longlong)pcVar6)) goto LAB_180164b5d;
      uVar7 = local_38 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar6,uVar7);
  }
  local_50 = (char *)0x0;
  uStack_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_50 = (char *)FUN_18000fb70(0x20);
  uVar4 = s_model_enemy_on_shot_duration_1806f6ab0._12_4_;
  uVar3 = s_model_enemy_on_shot_duration_1806f6ab0._8_4_;
  uVar2 = s_model_enemy_on_shot_duration_1806f6ab0._4_4_;
  local_40 = 0x1c;
  local_38 = 0x1f;
  *(undefined4 *)local_50 = s_model_enemy_on_shot_duration_1806f6ab0._0_4_;
  *(undefined4 *)(local_50 + 4) = uVar2;
  *(undefined4 *)(local_50 + 8) = uVar3;
  *(undefined4 *)(local_50 + 0xc) = uVar4;
  uVar4 = s_model_enemy_on_shot_duration_1806f6ab0._24_4_;
  uVar3 = s_model_enemy_on_shot_duration_1806f6ab0._20_4_;
  uVar2 = s_model_enemy_on_shot_duration_1806f6ab0._16_4_;
  *(undefined4 *)(local_50 + 0xc) = s_model_enemy_on_shot_duration_1806f6ab0._12_4_;
  *(undefined4 *)(local_50 + 0x10) = uVar2;
  *(undefined4 *)(local_50 + 0x14) = uVar3;
  *(undefined4 *)(local_50 + 0x18) = uVar4;
  local_50[0x1c] = '\0';
  FUN_180162d70(param_1,&local_50);
  if (0xf < local_38) {
    uVar7 = local_38 + 1;
    pcVar6 = local_50;
    if (0xfff < uVar7) {
      pcVar6 = *(char **)(local_50 + -8);
      if ((char *)0x1f < local_50 + (-8 - (longlong)pcVar6)) goto LAB_180164b5d;
      uVar7 = local_38 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar6,uVar7);
  }
  local_50 = (char *)0x0;
  uStack_48 = 0;
  local_50 = (char *)FUN_18000fb70(0x20);
  uVar4 = s_model_enemy_history_1806f6ad0._12_4_;
  uVar3 = s_model_enemy_history_1806f6ad0._8_4_;
  uVar2 = s_model_enemy_history_1806f6ad0._4_4_;
  local_40 = 0x13;
  local_38 = 0x1f;
  *(undefined4 *)local_50 = s_model_enemy_history_1806f6ad0._0_4_;
  *(undefined4 *)(local_50 + 4) = uVar2;
  *(undefined4 *)(local_50 + 8) = uVar3;
  *(undefined4 *)(local_50 + 0xc) = uVar4;
  *(uint *)(local_50 + 0xf) =
       CONCAT31(s_model_enemy_history_1806f6ad0._16_3_,s_model_enemy_history_1806f6ad0[0xf]);
  local_50[0x13] = '\0';
  FUN_180165030(param_1,&local_50);
  if (0xf < local_38) {
    uVar7 = local_38 + 1;
    pcVar6 = local_50;
    if (0xfff < uVar7) {
      pcVar6 = *(char **)(local_50 + -8);
      if ((char *)0x1f < local_50 + (-8 - (longlong)pcVar6)) goto LAB_180164b5d;
      uVar7 = local_38 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar6,uVar7);
  }
  local_50 = (char *)0x0;
  uStack_48 = 0;
  local_50 = (char *)FUN_18000fb70(0x20);
  uVar4 = s_model_enemy_history_glow_1806f6b60._12_4_;
  uVar3 = s_model_enemy_history_glow_1806f6b60._8_4_;
  uVar2 = s_model_enemy_history_glow_1806f6b60._4_4_;
  local_40 = 0x18;
  local_38 = 0x1f;
  *(undefined4 *)local_50 = s_model_enemy_history_glow_1806f6b60._0_4_;
  *(undefined4 *)(local_50 + 4) = uVar2;
  *(undefined4 *)(local_50 + 8) = uVar3;
  *(undefined4 *)(local_50 + 0xc) = uVar4;
  *(undefined8 *)(local_50 + 0x10) = s_model_enemy_history_glow_1806f6b60._16_8_;
  local_50[0x18] = '\0';
  uVar5 = FUN_180073a70(local_30,&local_50,".enabled");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_30);
  uVar5 = FUN_180073a70(local_30,&local_50,".color");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_30);
  if (0xf < local_38) {
    uVar7 = local_38 + 1;
    pcVar6 = local_50;
    if (0xfff < uVar7) {
      pcVar6 = *(char **)(local_50 + -8);
      if ((char *)0x1f < local_50 + (-8 - (longlong)pcVar6)) goto LAB_180164b5d;
      uVar7 = local_38 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar6,uVar7);
  }
  local_50 = (char *)0x0;
  uStack_48 = 0;
  local_50 = (char *)FUN_18000fb70(0x20);
  uVar4 = s_model_enemy_ragdolls_1806f6b80._12_4_;
  uVar3 = s_model_enemy_ragdolls_1806f6b80._8_4_;
  uVar2 = s_model_enemy_ragdolls_1806f6b80._4_4_;
  local_40 = 0x14;
  local_38 = 0x1f;
  *(undefined4 *)local_50 = s_model_enemy_ragdolls_1806f6b80._0_4_;
  *(undefined4 *)(local_50 + 4) = uVar2;
  *(undefined4 *)(local_50 + 8) = uVar3;
  *(undefined4 *)(local_50 + 0xc) = uVar4;
  *(undefined4 *)(local_50 + 0x10) = s_model_enemy_ragdolls_1806f6b80._16_4_;
  local_50[0x14] = '\0';
  FUN_180165030(param_1,&local_50);
  if (0xf < local_38) {
    uVar7 = local_38 + 1;
    pcVar6 = local_50;
    if (0xfff < uVar7) {
      pcVar6 = *(char **)(local_50 + -8);
      if ((char *)0x1f < local_50 + (-8 - (longlong)pcVar6)) goto LAB_180164b5d;
      uVar7 = local_38 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar6,uVar7);
  }
  local_50 = (char *)0x0;
  uStack_48 = 0;
  local_50 = (char *)FUN_18000fb70(0x20);
  uVar4 = s_model_enemy_ragdolls_glow_1806f6b20._12_4_;
  uVar3 = s_model_enemy_ragdolls_glow_1806f6b20._8_4_;
  uVar2 = s_model_enemy_ragdolls_glow_1806f6b20._4_4_;
  local_40 = 0x19;
  local_38 = 0x1f;
  *(undefined4 *)local_50 = s_model_enemy_ragdolls_glow_1806f6b20._0_4_;
  *(undefined4 *)(local_50 + 4) = uVar2;
  *(undefined4 *)(local_50 + 8) = uVar3;
  *(undefined4 *)(local_50 + 0xc) = uVar4;
  uVar4 = s_model_enemy_ragdolls_glow_1806f6b20._21_4_;
  uVar3 = s_model_enemy_ragdolls_glow_1806f6b20._17_4_;
  uVar2 = CONCAT13(s_model_enemy_ragdolls_glow_1806f6b20[0x10],
                   s_model_enemy_ragdolls_glow_1806f6b20._13_3_);
  *(uint *)(local_50 + 9) =
       CONCAT13(s_model_enemy_ragdolls_glow_1806f6b20[0xc],
                s_model_enemy_ragdolls_glow_1806f6b20._9_3_);
  *(undefined4 *)(local_50 + 0xd) = uVar2;
  *(undefined4 *)(local_50 + 0x11) = uVar3;
  *(undefined4 *)(local_50 + 0x15) = uVar4;
  local_50[0x19] = '\0';
  uVar5 = FUN_180073a70(local_30,&local_50,".enabled");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_30);
  uVar5 = FUN_180073a70(local_30,&local_50,".color");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_30);
  if (0xf < local_38) {
    uVar7 = local_38 + 1;
    pcVar6 = local_50;
    if (0xfff < uVar7) {
      pcVar6 = *(char **)(local_50 + -8);
      if ((char *)0x1f < local_50 + (-8 - (longlong)pcVar6)) goto LAB_180164b5d;
      uVar7 = local_38 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar6,uVar7);
  }
  local_50 = (char *)0x0;
  uStack_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_50 = (char *)FUN_18000fb70(0x20);
  uVar4 = s_model_enemy_ragdolls_visibility_1806f6b40._12_4_;
  uVar3 = s_model_enemy_ragdolls_visibility_1806f6b40._8_4_;
  uVar2 = s_model_enemy_ragdolls_visibility_1806f6b40._4_4_;
  local_40 = 0x1f;
  local_38 = 0x1f;
  *(undefined4 *)local_50 = s_model_enemy_ragdolls_visibility_1806f6b40._0_4_;
  *(undefined4 *)(local_50 + 4) = uVar2;
  *(undefined4 *)(local_50 + 8) = uVar3;
  *(undefined4 *)(local_50 + 0xc) = uVar4;
  uVar4 = s_model_enemy_ragdolls_visibility_1806f6b40._27_4_;
  uVar3 = s_model_enemy_ragdolls_visibility_1806f6b40._23_4_;
  uVar2 = s_model_enemy_ragdolls_visibility_1806f6b40._19_4_;
  *(uint *)(local_50 + 0xf) =
       CONCAT31(s_model_enemy_ragdolls_visibility_1806f6b40._16_3_,
                s_model_enemy_ragdolls_visibility_1806f6b40[0xf]);
  *(undefined4 *)(local_50 + 0x13) = uVar2;
  *(undefined4 *)(local_50 + 0x17) = uVar3;
  *(undefined4 *)(local_50 + 0x1b) = uVar4;
  local_50[0x1f] = '\0';
  FUN_180162d70(param_1,&local_50);
  if (0xf < local_38) {
    uVar7 = local_38 + 1;
    pcVar6 = local_50;
    if (0xfff < uVar7) {
      pcVar6 = *(char **)(local_50 + -8);
      if ((char *)0x1f < local_50 + (-8 - (longlong)pcVar6)) goto LAB_180164b5d;
      uVar7 = local_38 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar6,uVar7);
  }
  local_50 = (char *)0x0;
  uStack_48 = 0;
  local_50 = (char *)FUN_18000fb70(0x20);
  uVar4 = s_model_team_player_1806f6bd8._12_4_;
  uVar3 = s_model_team_player_1806f6bd8._8_4_;
  uVar2 = s_model_team_player_1806f6bd8._4_4_;
  local_40 = 0x11;
  local_38 = 0x1f;
  *(undefined4 *)local_50 = s_model_team_player_1806f6bd8._0_4_;
  *(undefined4 *)(local_50 + 4) = uVar2;
  *(undefined4 *)(local_50 + 8) = uVar3;
  *(undefined4 *)(local_50 + 0xc) = uVar4;
  local_50[0x10] = s_model_team_player_1806f6bd8[0x10];
  local_50[0x11] = '\0';
  FUN_180165030(param_1,&local_50);
  if (0xf < local_38) {
    uVar7 = local_38 + 1;
    pcVar6 = local_50;
    if (0xfff < uVar7) {
      pcVar6 = *(char **)(local_50 + -8);
      if ((char *)0x1f < local_50 + (-8 - (longlong)pcVar6)) goto LAB_180164b5d;
      uVar7 = local_38 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar6,uVar7);
  }
  local_50 = (char *)0x0;
  uStack_48 = 0;
  local_50 = (char *)FUN_18000fb70(0x20);
  uVar4 = s_model_team_behind_walls_1806f6bf0._12_4_;
  uVar3 = s_model_team_behind_walls_1806f6bf0._8_4_;
  uVar2 = s_model_team_behind_walls_1806f6bf0._4_4_;
  local_40 = 0x17;
  local_38 = 0x1f;
  *(undefined4 *)local_50 = s_model_team_behind_walls_1806f6bf0._0_4_;
  *(undefined4 *)(local_50 + 4) = uVar2;
  *(undefined4 *)(local_50 + 8) = uVar3;
  *(undefined4 *)(local_50 + 0xc) = uVar4;
  *(ulonglong *)(local_50 + 0xf) =
       CONCAT71(s_model_team_behind_walls_1806f6bf0._16_7_,s_model_team_behind_walls_1806f6bf0[0xf])
  ;
  local_50[0x17] = '\0';
  FUN_180165030(param_1,&local_50);
  if (0xf < local_38) {
    uVar7 = local_38 + 1;
    pcVar6 = local_50;
    if (0xfff < uVar7) {
      pcVar6 = *(char **)(local_50 + -8);
      if ((char *)0x1f < local_50 + (-8 - (longlong)pcVar6)) goto LAB_180164b5d;
      uVar7 = local_38 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar6,uVar7);
  }
  local_50 = (char *)0x0;
  uStack_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_50 = (char *)FUN_18000fb70(0x30);
  uVar4 = s_model_team_disable_model_renderi_1806f6b98._12_4_;
  uVar3 = s_model_team_disable_model_renderi_1806f6b98._8_4_;
  uVar2 = s_model_team_disable_model_renderi_1806f6b98._4_4_;
  local_40 = 0x22;
  local_38 = 0x2f;
  *(undefined4 *)local_50 = s_model_team_disable_model_renderi_1806f6b98._0_4_;
  *(undefined4 *)(local_50 + 4) = uVar2;
  *(undefined4 *)(local_50 + 8) = uVar3;
  *(undefined4 *)(local_50 + 0xc) = uVar4;
  uVar4 = s_model_team_disable_model_renderi_1806f6b98._28_4_;
  uVar3 = s_model_team_disable_model_renderi_1806f6b98._24_4_;
  uVar2 = s_model_team_disable_model_renderi_1806f6b98._20_4_;
  *(undefined4 *)(local_50 + 0x10) = s_model_team_disable_model_renderi_1806f6b98._16_4_;
  *(undefined4 *)(local_50 + 0x14) = uVar2;
  *(undefined4 *)(local_50 + 0x18) = uVar3;
  *(undefined4 *)(local_50 + 0x1c) = uVar4;
  *(undefined2 *)(local_50 + 0x20) = s_model_team_disable_model_renderi_1806f6b98._32_2_;
  local_50[0x22] = '\0';
  FUN_180162d70(param_1,&local_50);
  if (0xf < local_38) {
    uVar7 = local_38 + 1;
    pcVar6 = local_50;
    if (0xfff < uVar7) {
      pcVar6 = *(char **)(local_50 + -8);
      if ((char *)0x1f < local_50 + (-8 - (longlong)pcVar6)) goto LAB_180164b5d;
      uVar7 = local_38 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar6,uVar7);
  }
  local_50 = (char *)0x0;
  uStack_48 = 0;
  local_50 = (char *)FUN_18000fb70(0x20);
  uVar4 = s_model_local_player_1806f6bc0._12_4_;
  uVar3 = s_model_local_player_1806f6bc0._8_4_;
  uVar2 = s_model_local_player_1806f6bc0._4_4_;
  local_40 = 0x12;
  local_38 = 0x1f;
  *(undefined4 *)local_50 = s_model_local_player_1806f6bc0._0_4_;
  *(undefined4 *)(local_50 + 4) = uVar2;
  *(undefined4 *)(local_50 + 8) = uVar3;
  *(undefined4 *)(local_50 + 0xc) = uVar4;
  *(undefined2 *)(local_50 + 0x10) = s_model_local_player_1806f6bc0._16_2_;
  local_50[0x12] = '\0';
  FUN_180165030(param_1,&local_50);
  if (0xf < local_38) {
    uVar7 = local_38 + 1;
    pcVar6 = local_50;
    if (0xfff < uVar7) {
      pcVar6 = *(char **)(local_50 + -8);
      if ((char *)0x1f < local_50 + (-8 - (longlong)pcVar6)) goto LAB_180164b5d;
      uVar7 = local_38 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar6,uVar7);
  }
  local_50 = (char *)0x0;
  uStack_48 = 0;
  local_50 = (char *)FUN_18000fb70(0x20);
  uVar4 = s_model_local_player_overlay_1806f6c40._4_4_;
  local_40 = 0x1a;
  local_38 = 0x1f;
  uVar2 = CONCAT22(s_model_local_player_overlay_1806f6c40._10_2_,
                   s_model_local_player_overlay_1806f6c40._8_2_);
  uVar3 = CONCAT22(s_model_local_player_overlay_1806f6c40._14_2_,
                   s_model_local_player_overlay_1806f6c40._12_2_);
  *(undefined4 *)local_50 = s_model_local_player_overlay_1806f6c40._0_4_;
  *(undefined4 *)(local_50 + 4) = uVar4;
  *(undefined4 *)(local_50 + 8) = uVar2;
  *(undefined4 *)(local_50 + 0xc) = uVar3;
  uVar4 = s_model_local_player_overlay_1806f6c40._22_4_;
  uVar3 = s_model_local_player_overlay_1806f6c40._18_4_;
  uVar2 = CONCAT22(s_model_local_player_overlay_1806f6c40._16_2_,
                   s_model_local_player_overlay_1806f6c40._14_2_);
  *(uint *)(local_50 + 10) =
       CONCAT22(s_model_local_player_overlay_1806f6c40._12_2_,
                s_model_local_player_overlay_1806f6c40._10_2_);
  *(undefined4 *)(local_50 + 0xe) = uVar2;
  *(undefined4 *)(local_50 + 0x12) = uVar3;
  *(undefined4 *)(local_50 + 0x16) = uVar4;
  local_50[0x1a] = '\0';
  FUN_180165030(param_1,&local_50);
  if (0xf < local_38) {
    uVar7 = local_38 + 1;
    pcVar6 = local_50;
    if (0xfff < uVar7) {
      pcVar6 = *(char **)(local_50 + -8);
      if ((char *)0x1f < local_50 + (-8 - (longlong)pcVar6)) goto LAB_180164b5d;
      uVar7 = local_38 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar6,uVar7);
  }
  local_50 = (char *)0x0;
  uStack_48 = 0;
  local_50 = (char *)FUN_18000fb70(0x20);
  uVar4 = s_model_local_skeleton_1806f6c60._12_4_;
  uVar3 = s_model_local_skeleton_1806f6c60._8_4_;
  uVar2 = s_model_local_skeleton_1806f6c60._4_4_;
  local_40 = 0x14;
  local_38 = 0x1f;
  *(undefined4 *)local_50 = s_model_local_skeleton_1806f6c60._0_4_;
  *(undefined4 *)(local_50 + 4) = uVar2;
  *(undefined4 *)(local_50 + 8) = uVar3;
  *(undefined4 *)(local_50 + 0xc) = uVar4;
  *(undefined4 *)(local_50 + 0x10) = s_model_local_skeleton_1806f6c60._16_4_;
  local_50[0x14] = '\0';
  uVar5 = FUN_180073a70(local_30,&local_50,".enabled");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_30);
  uVar5 = FUN_180073a70(local_30,&local_50,".color");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_30);
  if (0xf < local_38) {
    uVar7 = local_38 + 1;
    pcVar6 = local_50;
    if (0xfff < uVar7) {
      pcVar6 = *(char **)(local_50 + -8);
      if ((char *)0x1f < local_50 + (-8 - (longlong)pcVar6)) goto LAB_180164b5d;
      uVar7 = local_38 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar6,uVar7);
  }
  local_50 = (char *)0x0;
  uStack_48 = 0;
  local_50 = (char *)FUN_18000fb70(0x20);
  uVar4 = s_model_local_arms_1806f6c08._12_4_;
  uVar3 = s_model_local_arms_1806f6c08._8_4_;
  uVar2 = s_model_local_arms_1806f6c08._4_4_;
  local_40 = 0x10;
  local_38 = 0x1f;
  *(undefined4 *)local_50 = s_model_local_arms_1806f6c08._0_4_;
  *(undefined4 *)(local_50 + 4) = uVar2;
  *(undefined4 *)(local_50 + 8) = uVar3;
  *(undefined4 *)(local_50 + 0xc) = uVar4;
  local_50[0x10] = '\0';
  FUN_180165030(param_1,&local_50);
  if (0xf < local_38) {
    uVar7 = local_38 + 1;
    pcVar6 = local_50;
    if (0xfff < uVar7) {
      pcVar6 = *(char **)(local_50 + -8);
      if ((char *)0x1f < local_50 + (-8 - (longlong)pcVar6)) goto LAB_180164b5d;
      uVar7 = local_38 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar6,uVar7);
  }
  local_50 = (char *)0x0;
  uStack_48 = 0;
  local_50 = (char *)FUN_18000fb70(0x20);
  uVar4 = s_model_local_arms_overlay_1806f6c20._12_4_;
  uVar3 = s_model_local_arms_overlay_1806f6c20._8_4_;
  uVar2 = s_model_local_arms_overlay_1806f6c20._4_4_;
  local_40 = 0x18;
  local_38 = 0x1f;
  *(undefined4 *)local_50 = s_model_local_arms_overlay_1806f6c20._0_4_;
  *(undefined4 *)(local_50 + 4) = uVar2;
  *(undefined4 *)(local_50 + 8) = uVar3;
  *(undefined4 *)(local_50 + 0xc) = uVar4;
  *(undefined8 *)(local_50 + 0x10) = s_model_local_arms_overlay_1806f6c20._16_8_;
  local_50[0x18] = '\0';
  FUN_180165030(param_1,&local_50);
  if (0xf < local_38) {
    uVar7 = local_38 + 1;
    pcVar6 = local_50;
    if (0xfff < uVar7) {
      pcVar6 = *(char **)(local_50 + -8);
      if ((char *)0x1f < local_50 + (-8 - (longlong)pcVar6)) goto LAB_180164b5d;
      uVar7 = local_38 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar6,uVar7);
  }
  local_50 = (char *)0x0;
  uStack_48 = 0;
  local_50 = (char *)FUN_18000fb70(0x20);
  uVar4 = s_model_local_gloves_1806f6cb0._12_4_;
  uVar3 = s_model_local_gloves_1806f6cb0._8_4_;
  uVar2 = s_model_local_gloves_1806f6cb0._4_4_;
  local_40 = 0x12;
  local_38 = 0x1f;
  *(undefined4 *)local_50 = s_model_local_gloves_1806f6cb0._0_4_;
  *(undefined4 *)(local_50 + 4) = uVar2;
  *(undefined4 *)(local_50 + 8) = uVar3;
  *(undefined4 *)(local_50 + 0xc) = uVar4;
  *(undefined2 *)(local_50 + 0x10) = s_model_local_gloves_1806f6cb0._16_2_;
  local_50[0x12] = '\0';
  FUN_180165030(param_1,&local_50);
  if (0xf < local_38) {
    uVar7 = local_38 + 1;
    pcVar6 = local_50;
    if (0xfff < uVar7) {
      pcVar6 = *(char **)(local_50 + -8);
      if ((char *)0x1f < local_50 + (-8 - (longlong)pcVar6)) goto LAB_180164b5d;
      uVar7 = local_38 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar6,uVar7);
  }
  local_50 = (char *)0x0;
  uStack_48 = 0;
  local_50 = (char *)FUN_18000fb70(0x20);
  uVar4 = s_model_local_gloves_overlay_1806f6cc8._4_4_;
  local_40 = 0x1a;
  local_38 = 0x1f;
  uVar2 = CONCAT22(s_model_local_gloves_overlay_1806f6cc8._10_2_,
                   s_model_local_gloves_overlay_1806f6cc8._8_2_);
  uVar3 = CONCAT22(s_model_local_gloves_overlay_1806f6cc8._14_2_,
                   s_model_local_gloves_overlay_1806f6cc8._12_2_);
  *(undefined4 *)local_50 = s_model_local_gloves_overlay_1806f6cc8._0_4_;
  *(undefined4 *)(local_50 + 4) = uVar4;
  *(undefined4 *)(local_50 + 8) = uVar2;
  *(undefined4 *)(local_50 + 0xc) = uVar3;
  uVar4 = s_model_local_gloves_overlay_1806f6cc8._22_4_;
  uVar3 = s_model_local_gloves_overlay_1806f6cc8._18_4_;
  uVar2 = CONCAT22(s_model_local_gloves_overlay_1806f6cc8._16_2_,
                   s_model_local_gloves_overlay_1806f6cc8._14_2_);
  *(uint *)(local_50 + 10) =
       CONCAT22(s_model_local_gloves_overlay_1806f6cc8._12_2_,
                s_model_local_gloves_overlay_1806f6cc8._10_2_);
  *(undefined4 *)(local_50 + 0xe) = uVar2;
  *(undefined4 *)(local_50 + 0x12) = uVar3;
  *(undefined4 *)(local_50 + 0x16) = uVar4;
  local_50[0x1a] = '\0';
  FUN_180165030(param_1,&local_50);
  if (0xf < local_38) {
    uVar7 = local_38 + 1;
    pcVar6 = local_50;
    if (0xfff < uVar7) {
      pcVar6 = *(char **)(local_50 + -8);
      if ((char *)0x1f < local_50 + (-8 - (longlong)pcVar6)) goto LAB_180164b5d;
      uVar7 = local_38 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar6,uVar7);
  }
  local_50 = (char *)0x0;
  uStack_48 = 0;
  local_50 = (char *)FUN_18000fb70(0x20);
  uVar4 = s_model_local_weapon_1806f6c78._12_4_;
  uVar3 = s_model_local_weapon_1806f6c78._8_4_;
  uVar2 = s_model_local_weapon_1806f6c78._4_4_;
  local_40 = 0x12;
  local_38 = 0x1f;
  *(undefined4 *)local_50 = s_model_local_weapon_1806f6c78._0_4_;
  *(undefined4 *)(local_50 + 4) = uVar2;
  *(undefined4 *)(local_50 + 8) = uVar3;
  *(undefined4 *)(local_50 + 0xc) = uVar4;
  *(undefined2 *)(local_50 + 0x10) = s_model_local_weapon_1806f6c78._16_2_;
  local_50[0x12] = '\0';
  FUN_180165030(param_1,&local_50);
  if (0xf < local_38) {
    uVar7 = local_38 + 1;
    pcVar6 = local_50;
    if (0xfff < uVar7) {
      pcVar6 = *(char **)(local_50 + -8);
      if ((char *)0x1f < local_50 + (-8 - (longlong)pcVar6)) goto LAB_180164b5d;
      uVar7 = local_38 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar6,uVar7);
  }
  local_50 = (char *)0x0;
  uStack_48 = 0;
  local_50 = (char *)FUN_18000fb70(0x20);
  uVar4 = s_model_local_weapon_overlay_1806f6c90._4_4_;
  local_40 = 0x1a;
  local_38 = 0x1f;
  uVar2 = CONCAT22(s_model_local_weapon_overlay_1806f6c90._10_2_,
                   s_model_local_weapon_overlay_1806f6c90._8_2_);
  uVar3 = CONCAT22(s_model_local_weapon_overlay_1806f6c90._14_2_,
                   s_model_local_weapon_overlay_1806f6c90._12_2_);
  *(undefined4 *)local_50 = s_model_local_weapon_overlay_1806f6c90._0_4_;
  *(undefined4 *)(local_50 + 4) = uVar4;
  *(undefined4 *)(local_50 + 8) = uVar2;
  *(undefined4 *)(local_50 + 0xc) = uVar3;
  uVar4 = s_model_local_weapon_overlay_1806f6c90._22_4_;
  uVar3 = s_model_local_weapon_overlay_1806f6c90._18_4_;
  uVar2 = CONCAT22(s_model_local_weapon_overlay_1806f6c90._16_2_,
                   s_model_local_weapon_overlay_1806f6c90._14_2_);
  *(uint *)(local_50 + 10) =
       CONCAT22(s_model_local_weapon_overlay_1806f6c90._12_2_,
                s_model_local_weapon_overlay_1806f6c90._10_2_);
  *(undefined4 *)(local_50 + 0xe) = uVar2;
  *(undefined4 *)(local_50 + 0x12) = uVar3;
  *(undefined4 *)(local_50 + 0x16) = uVar4;
  local_50[0x1a] = '\0';
  FUN_180165030(param_1,&local_50);
  if (0xf < local_38) {
    uVar7 = local_38 + 1;
    pcVar6 = local_50;
    if (0xfff < uVar7) {
      pcVar6 = *(char **)(local_50 + -8);
      if ((char *)0x1f < local_50 + (-8 - (longlong)pcVar6)) goto LAB_180164b5d;
      uVar7 = local_38 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar6,uVar7);
  }
  local_50 = (char *)0x0;
  uStack_48 = 0;
  local_50 = (char *)FUN_18000fb70(0x20);
  uVar4 = s_model_local_keychain_1806f6d28._12_4_;
  uVar3 = s_model_local_keychain_1806f6d28._8_4_;
  uVar2 = s_model_local_keychain_1806f6d28._4_4_;
  local_40 = 0x14;
  local_38 = 0x1f;
  *(undefined4 *)local_50 = s_model_local_keychain_1806f6d28._0_4_;
  *(undefined4 *)(local_50 + 4) = uVar2;
  *(undefined4 *)(local_50 + 8) = uVar3;
  *(undefined4 *)(local_50 + 0xc) = uVar4;
  *(undefined4 *)(local_50 + 0x10) = s_model_local_keychain_1806f6d28._16_4_;
  local_50[0x14] = '\0';
  FUN_180165030(param_1,&local_50);
  if (0xf < local_38) {
    uVar7 = local_38 + 1;
    pcVar6 = local_50;
    if (0xfff < uVar7) {
      pcVar6 = *(char **)(local_50 + -8);
      if ((char *)0x1f < local_50 + (-8 - (longlong)pcVar6)) goto LAB_180164b5d;
      uVar7 = local_38 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar6,uVar7);
  }
  local_50 = (char *)0x0;
  uStack_48 = 0;
  local_50 = (char *)FUN_18000fb70(0x20);
  uVar4 = s_model_local_keychain_overlay_1806f6d40._12_4_;
  uVar3 = s_model_local_keychain_overlay_1806f6d40._8_4_;
  uVar2 = s_model_local_keychain_overlay_1806f6d40._4_4_;
  local_40 = 0x1c;
  local_38 = 0x1f;
  *(undefined4 *)local_50 = s_model_local_keychain_overlay_1806f6d40._0_4_;
  *(undefined4 *)(local_50 + 4) = uVar2;
  *(undefined4 *)(local_50 + 8) = uVar3;
  *(undefined4 *)(local_50 + 0xc) = uVar4;
  uVar4 = s_model_local_keychain_overlay_1806f6d40._24_4_;
  uVar3 = s_model_local_keychain_overlay_1806f6d40._20_4_;
  uVar2 = s_model_local_keychain_overlay_1806f6d40._16_4_;
  *(undefined4 *)(local_50 + 0xc) = s_model_local_keychain_overlay_1806f6d40._12_4_;
  *(undefined4 *)(local_50 + 0x10) = uVar2;
  *(undefined4 *)(local_50 + 0x14) = uVar3;
  *(undefined4 *)(local_50 + 0x18) = uVar4;
  local_50[0x1c] = '\0';
  FUN_180165030(param_1,&local_50);
  if (0xf < local_38) {
    uVar7 = local_38 + 1;
    pcVar6 = local_50;
    if (0xfff < uVar7) {
      pcVar6 = *(char **)(local_50 + -8);
      if ((char *)0x1f < local_50 + (-8 - (longlong)pcVar6)) goto LAB_180164b5d;
      uVar7 = local_38 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar6,uVar7);
  }
  local_50 = (char *)0x0;
  uStack_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_50 = (char *)FUN_18000fb70(0x20);
  uVar4 = s_model_local_colorize_stattrak_1806f6ce8._12_4_;
  uVar3 = s_model_local_colorize_stattrak_1806f6ce8._8_4_;
  uVar2 = s_model_local_colorize_stattrak_1806f6ce8._4_4_;
  local_40 = 0x1d;
  local_38 = 0x1f;
  *(undefined4 *)local_50 = s_model_local_colorize_stattrak_1806f6ce8._0_4_;
  *(undefined4 *)(local_50 + 4) = uVar2;
  *(undefined4 *)(local_50 + 8) = uVar3;
  *(undefined4 *)(local_50 + 0xc) = uVar4;
  uVar4 = s_model_local_colorize_stattrak_1806f6ce8._25_4_;
  uVar3 = s_model_local_colorize_stattrak_1806f6ce8._21_4_;
  uVar2 = s_model_local_colorize_stattrak_1806f6ce8._17_4_;
  *(uint *)(local_50 + 0xd) =
       CONCAT13(s_model_local_colorize_stattrak_1806f6ce8[0x10],
                s_model_local_colorize_stattrak_1806f6ce8._13_3_);
  *(undefined4 *)(local_50 + 0x11) = uVar2;
  *(undefined4 *)(local_50 + 0x15) = uVar3;
  *(undefined4 *)(local_50 + 0x19) = uVar4;
  local_50[0x1d] = '\0';
  FUN_180162d70(param_1,&local_50);
  if (0xf < local_38) {
    uVar7 = local_38 + 1;
    pcVar6 = local_50;
    if (0xfff < uVar7) {
      pcVar6 = *(char **)(local_50 + -8);
      if ((char *)0x1f < local_50 + (-8 - (longlong)pcVar6)) {
LAB_180164b5d:
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar7 = local_38 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar6,uVar7);
  }
  local_50 = (char *)0x0;
  uStack_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_58 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Calculate_growth
                       (0x1b,0xf,0x7fffffffffffffff);
  pcVar6 = (char *)FUN_180013470(&local_50,&local_58);
  local_40 = 0x1b;
  local_38 = local_58;
  local_50 = pcVar6;
  thunk_FUN_180540530(pcVar6,"model.local.stattrak_weapon",0x1b);
  pcVar6[0x1b] = '\0';
  FUN_180162d70(param_1,&local_50);
  FUN_18000f890(&local_50);
  FUN_180013350(&local_50,"model.local.stattrak_knife");
  FUN_180162d70(param_1,&local_50);
  FUN_18000f890(&local_50);
  return;
}



/* ===== 180164b70 FUN_180164b70 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180164b70(undefined8 param_1,undefined8 param_2,int *param_3)

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
  uVar1 = FUN_180073a70(local_a8,param_2,&DAT_1806f5f30);
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_a8);
  if (*param_3 != 0) {
    uVar1 = FUN_180073a70(local_a8,param_2,".side");
    FUN_180162d70(param_1,uVar1);
    FUN_18000f890(local_a8);
    uVar1 = FUN_180073a70(local_a8,param_2,".paint_kit");
    FUN_180162d70(param_1,uVar1);
    FUN_18000f890(local_a8);
    uVar1 = FUN_180073a70(local_a8,param_2,".wear");
    FUN_180162d70(param_1,uVar1);
    FUN_18000f890(local_a8);
    uVar1 = FUN_180073a70(local_a8,param_2,".seed");
    FUN_180162d70(param_1,uVar1);
    FUN_18000f890(local_a8);
    uVar1 = FUN_180073a70(local_a8,param_2,".stattrak");
    FUN_180162d70(param_1,uVar1);
    FUN_18000f890(local_a8);
    uVar1 = FUN_180073a70(local_a8,param_2,".stattrak_value");
    FUN_180162d70(param_1,uVar1);
    FUN_18000f890(local_a8);
    uVar1 = FUN_180073a70(local_a8,param_2,".nametag");
    FUN_180162d70(param_1,uVar1);
    FUN_18000f890(local_a8);
    uVar1 = FUN_180073a70(local_a8,param_2,".custom_colors");
    FUN_180162d70(param_1,uVar1);
    FUN_18000f890(local_a8);
    uVar3 = 0;
    do {
      uVar1 = FUN_18004e4f0(local_48,uVar3);
      uVar2 = FUN_180073a70(local_68,param_2,".color");
      uVar1 = FUN_180066820(local_a8,uVar2,uVar1);
      FUN_180162d70(param_1,uVar1);
      FUN_18000f890(local_a8);
      FUN_18000f890(local_68);
      FUN_18000f890(local_48);
      uVar3 = uVar3 + 1;
    } while (uVar3 < 8);
    uVar3 = 0;
    do {
      uVar1 = FUN_18004e4f0(local_68,uVar3);
      uVar2 = FUN_180073a70(local_48,param_2,".sticker");
      FUN_180066820(local_a8,uVar2,uVar1);
      FUN_18000f890(local_48);
      FUN_18000f890(local_68);
      uVar1 = FUN_180073a70(local_88,local_a8,&DAT_1806f6a6c);
      FUN_180162d70(param_1,uVar1);
      FUN_18000f890(local_88);
      uVar1 = FUN_180073a70(local_88,local_a8,".wear");
      FUN_180162d70(param_1,uVar1);
      FUN_18000f890(local_88);
      uVar1 = FUN_180073a70(local_88,local_a8,".scale");
      FUN_180162d70(param_1,uVar1);
      FUN_18000f890(local_88);
      uVar1 = FUN_180073a70(local_88,local_a8,".rotation");
      FUN_180162d70(param_1,uVar1);
      FUN_18000f890(local_88);
      uVar1 = FUN_180073a70(local_88,local_a8,".offset_x");
      FUN_180162d70(param_1,uVar1);
      FUN_18000f890(local_88);
      uVar1 = FUN_180073a70(local_88,local_a8,".offset_y");
      FUN_180162d70(param_1,uVar1);
      FUN_18000f890(local_88);
      uVar1 = FUN_180073a70(local_88,local_a8,".schema");
      FUN_180162d70(param_1,uVar1);
      FUN_18000f890(local_88);
      FUN_18000f890(local_a8);
      uVar3 = uVar3 + 1;
    } while (uVar3 < 6);
    uVar1 = FUN_180073a70(local_88,param_2,".keychain.id");
    FUN_180162d70(param_1,uVar1);
    FUN_18000f890(local_88);
    uVar1 = FUN_180073a70(local_88,param_2,".keychain.seed");
    FUN_180162d70(param_1,uVar1);
    FUN_18000f890(local_88);
    uVar1 = FUN_180073a70(local_88,param_2,".keychain.offset_x");
    FUN_180162d70(param_1,uVar1);
    FUN_18000f890(local_88);
    uVar1 = FUN_180073a70(local_88,param_2,".keychain.offset_y");
    FUN_180162d70(param_1,uVar1);
    FUN_18000f890(local_88);
    uVar1 = FUN_180073a70(local_88,param_2,".keychain.offset_z");
    FUN_180162d70(param_1,uVar1);
    FUN_18000f890(local_88);
    uVar1 = FUN_180073a70(local_88,param_2,".keychain.sticker");
    FUN_180162d70(param_1,uVar1);
    FUN_18000f890(local_88);
  }
  return;
}



/* ===== 180165030 FUN_180165030 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180165030(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_58;
  uVar1 = FUN_180073a70(local_38,param_2,".material");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_38);
  uVar1 = FUN_180073a70(local_38,param_2,".color");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_38);
  uVar1 = FUN_180073a70(local_38,param_2,".metalness");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_38);
  uVar1 = FUN_180073a70(local_38,param_2,".roughness");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_38);
  uVar1 = FUN_180073a70(local_38,param_2,".glow_exponent");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_38);
  uVar1 = FUN_180073a70(local_38,param_2,".outline_exponent");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_38);
  uVar1 = FUN_180073a70(local_38,param_2,".outline_falloff");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_38);
  uVar1 = FUN_180073a70(local_38,param_2,".outline_filling");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_38);
  uVar1 = FUN_180073a70(local_38,param_2,".iridescent_strength");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_38);
  uVar1 = FUN_180073a70(local_38,param_2,".iridescent_roughness");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_38);
  uVar1 = FUN_180073a70(local_38,param_2,".iridescent_tint");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_38);
  uVar1 = FUN_180073a70(local_38,param_2,".water_speed");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_38);
  uVar1 = FUN_180073a70(local_38,param_2,".glossy_exponent");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_38);
  uVar1 = FUN_180073a70(local_38,param_2,".glossy_filling");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_38);
  uVar1 = FUN_180073a70(local_38,param_2,".glossy_falloff");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_38);
  uVar1 = FUN_180073a70(local_38,param_2,".glossy_tint");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_38);
  return;
}



/* ===== 180165300 FUN_180165300 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180165300(undefined8 param_1,undefined8 param_2)

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
  return;
}



/* ===== 180165390 FUN_180165390 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180165390(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined1 local_48 [32];
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_68;
  FUN_1801ae270(param_1,param_2,param_3 + 0x264);
  uVar1 = FUN_180073a70(local_48,param_2,"world.modulation");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_48);
  uVar1 = FUN_180073a70(local_48,param_2,"world.modulation_color");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_48);
  uVar1 = FUN_180073a70(local_48,param_2,"world.gamma");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_48);
  uVar1 = FUN_180073a70(local_48,param_2,"world.gamma_value");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_48);
  uVar1 = FUN_180073a70(local_48,param_2,"world.bloom");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_48);
  uVar1 = FUN_180073a70(local_48,param_2,"world.bloom_amount");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_48);
  uVar1 = FUN_180073a70(local_48,param_2,"world.wetness");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_48);
  uVar1 = FUN_180073a70(local_48,param_2,"world.wetness_density");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_48);
  uVar1 = FUN_180073a70(local_48,param_2,"world.wetness_speed");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_48);
  uVar1 = FUN_180073a70(local_48,param_2,"world.wind");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_48);
  uVar1 = FUN_180073a70(local_48,param_2,"world.wind_strength");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_48);
  uVar1 = FUN_180073a70(local_48,param_2,"world.wind_direction");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_48);
  uVar1 = FUN_180073a70(local_48,param_2,"world.dof");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_48);
  uVar1 = FUN_180073a70(local_48,param_2,"world.fog");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_48);
  uVar1 = FUN_180073a70(local_48,param_2,"world.fog_color");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_48);
  uVar1 = FUN_180073a70(local_48,param_2,"world.fog_density");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_48);
  uVar1 = FUN_180073a70(local_48,param_2,"world.fog_distance");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_48);
  uVar1 = FUN_180073a70(local_48,param_2,"world.fog_falloff");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_48);
  uVar1 = FUN_180073a70(local_48,param_2,"world.fog_glow");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_48);
  uVar1 = FUN_180073a70(local_48,param_2,"world.dof_near_blurry");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_48);
  uVar1 = FUN_180073a70(local_48,param_2,"world.dof_near_crisp");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_48);
  uVar1 = FUN_180073a70(local_48,param_2,"world.dof_far_crisp");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_48);
  uVar1 = FUN_180073a70(local_48,param_2,"world.dof_far_blurry");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_48);
  uVar1 = FUN_180073a70(local_48,param_2,"screen.rain");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_48);
  uVar1 = FUN_180073a70(local_48,param_2,"screen.rain_amount");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_48);
  uVar1 = FUN_180073a70(local_48,param_2,"screen.rain_size");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_48);
  uVar1 = FUN_180073a70(local_48,param_2,"screen.rain_speed");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_48);
  uVar1 = FUN_180073a70(local_48,param_2,"screen.rain_fog");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_48);
  uVar1 = FUN_180073a70(local_48,param_2,"screen.rain_blur");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_48);
  uVar1 = FUN_180073a70(local_48,param_2,"screen.chromatic");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_48);
  uVar1 = FUN_180073a70(local_48,param_2,"screen.chromatic_amount");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_48);
  uVar1 = FUN_180073a70(local_48,param_2,"screen.vignette");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_48);
  uVar1 = FUN_180073a70(local_48,param_2,"screen.vignette_amount");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_48);
  uVar1 = FUN_180073a70(local_48,param_2,"sky.mode");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_48);
  uVar1 = FUN_180073a70(local_48,param_2,"sky.texture");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_48);
  uVar1 = FUN_180073a70(local_48,param_2,"sky.shader");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_48);
  uVar1 = FUN_180073a70(local_48,param_2,"sky.params");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_48);
  uVar1 = FUN_180073a70(local_48,param_2,"sky.primary");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_48);
  uVar1 = FUN_180073a70(local_48,param_2,"sky.secondary");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_48);
  uVar1 = FUN_180073a70(local_48,param_2,"sky.exposure");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_48);
  uVar1 = FUN_180073a70(local_48,param_2,"sky.update_rate");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_48);
  uVar1 = FUN_180073a70(local_48,param_2,"sky.resolution");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_48);
  uVar1 = FUN_180073a70(local_48,param_2,"sky.supersample");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_48);
  uVar1 = FUN_180073a70(local_48,param_2,"sky.recolor");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_48);
  uVar1 = FUN_180073a70(local_48,param_2,"sky.recolor_strength");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_48);
  uVar1 = FUN_180073a70(local_48,param_2,"sky.sky_tint");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_48);
  uVar1 = FUN_180073a70(local_48,param_2,"sky.sky_color");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_48);
  uVar1 = FUN_180073a70(local_48,param_2,"sky.brightness");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_48);
  uVar1 = FUN_180073a70(local_48,param_2,"sky.cloud_tint");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_48);
  uVar1 = FUN_180073a70(local_48,param_2,"sky.cloud_color");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_48);
  uVar1 = FUN_180073a70(local_48,param_2,"sky.sun_tint");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_48);
  uVar1 = FUN_180073a70(local_48,param_2,"sky.sun_color");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_48);
  uVar1 = FUN_180073a70(local_48,param_2,"sky.lighting");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_48);
  uVar1 = FUN_180073a70(local_48,param_2,"sky.lighting_color");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_48);
  uVar1 = FUN_180073a70(local_48,param_2,"sky.lighting_intensity");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_48);
  uVar1 = FUN_180073a70(local_48,param_2,"sky.lighting_mode");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_48);
  uVar1 = FUN_180073a70(local_48,param_2,"motion_blur.enabled");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_48);
  uVar1 = FUN_180073a70(local_48,param_2,"motion_blur.strength");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_48);
  uVar1 = FUN_180073a70(local_48,param_2,"weather.enabled");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_48);
  uVar1 = FUN_180073a70(local_48,param_2,"weather.type");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_48);
  uVar1 = FUN_180073a70(local_48,param_2,"weather.color");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_48);
  uVar1 = FUN_180073a70(local_48,param_2,"weather.density");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_48);
  uVar1 = FUN_180073a70(local_48,param_2,"weather.gravity");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_48);
  uVar1 = FUN_180073a70(local_48,param_2,"weather.glow");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_48);
  uVar1 = FUN_180073a70(local_48,param_2,"weather.rain_mist");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_48);
  uVar1 = FUN_180073a70(local_48,param_2,"weather.rain_ripples");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_48);
  return;
}



/* ===== 180165e70 FUN_180165e70 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180165e70(undefined8 param_1,undefined8 *param_2,int *param_3)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong *puVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  undefined1 auStack_d8 [40];
  ulonglong local_b0;
  ulonglong uStack_a8;
  ulonglong local_a0;
  ulonglong uStack_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined1 local_70 [32];
  undefined1 local_50 [32];
  ulonglong local_30;
  
  local_30 = DAT_180919500 ^ (ulonglong)auStack_d8;
  uVar3 = FUN_180073a70(&local_90,param_2,"count");
  FUN_180162d70(param_1,uVar3);
  FUN_18000f890(&local_90);
  uVar9 = 1;
  do {
    if (*param_3 <= (int)uVar9) {
      return;
    }
    uVar3 = FUN_18004e4f0(local_50,uVar9);
    if ((ulonglong)param_2[3] < 0x10) {
      puVar10 = param_2;
    }
    else {
      puVar10 = (undefined8 *)*param_2;
    }
    puVar4 = (ulonglong *)FUN_18006b5b0(uVar3,0,puVar10,param_2[2]);
    local_b0 = *puVar4;
    uStack_a8 = puVar4[1];
    local_a0 = puVar4[2];
    uStack_98 = puVar4[3];
    puVar4[2] = 0;
    puVar4[3] = 0xf;
    *(undefined1 *)puVar4 = 0;
    puVar5 = (undefined4 *)FUN_1800134a0(&local_b0,&DAT_1806e6f24,1);
    local_90 = *puVar5;
    uStack_8c = puVar5[1];
    uStack_88 = puVar5[2];
    uStack_84 = puVar5[3];
    local_80 = puVar5[4];
    uStack_7c = puVar5[5];
    uStack_78 = puVar5[6];
    uStack_74 = puVar5[7];
    *(undefined8 *)(puVar5 + 4) = 0;
    *(undefined8 *)(puVar5 + 6) = 0xf;
    *(undefined1 *)puVar5 = 0;
    if (0xf < uStack_98) {
      uVar8 = uStack_98 + 1;
      uVar6 = local_b0;
      if (0xfff < uVar8) {
        uVar6 = *(ulonglong *)(local_b0 - 8);
        if (0x1f < (local_b0 - uVar6) - 8) {
          pcVar1 = (code *)swi(0x29);
          (*pcVar1)(5);
          goto LAB_18016607a;
        }
        uVar8 = uStack_98 + 0x28;
      }
      thunk_FUN_1803d64e0(uVar6,uVar8);
    }
    local_a0 = 0;
    uStack_98 = 0xf;
    local_b0 = local_b0 & 0xffffffffffffff00;
    FUN_18000f890(local_50);
    uVar3 = FUN_180073a70(local_70,&local_90,&DAT_18058b644);
    FUN_180162d70(param_1,uVar3);
    FUN_18000f890(local_70);
    uVar3 = FUN_180073a70(local_70,&local_90,"weapons");
    FUN_180162d70(param_1,uVar3);
    FUN_18000f890(local_70);
    uVar6 = CONCAT44(uStack_74,uStack_78);
    if (0xf < uVar6) {
      uVar8 = uVar6 + 1;
      lVar2 = CONCAT44(uStack_8c,local_90);
      lVar7 = lVar2;
      if (0xfff < uVar8) {
        lVar7 = *(longlong *)(lVar2 + -8);
        if (0x1f < (lVar2 - lVar7) - 8U) {
LAB_18016607a:
          pcVar1 = (code *)swi(0x29);
          (*pcVar1)(5);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        uVar8 = uVar6 + 0x28;
      }
      thunk_FUN_1803d64e0(lVar7,uVar8);
    }
    uVar9 = uVar9 + 1;
    if (0x3f < uVar9) {
      return;
    }
  } while( true );
}



/* ===== 180166090 FUN_180166090 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180166090(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_58;
  uVar1 = FUN_180073a70(local_38,param_2,"hitboxes");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_38);
  uVar1 = FUN_180073a70(local_38,param_2,"extrapolation");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_38);
  uVar1 = FUN_180073a70(local_38,param_2,"hitchance");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_38);
  uVar1 = FUN_180073a70(local_38,param_2,"force_shot");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_38);
  uVar1 = FUN_180073a70(local_38,param_2,"min_hitchance");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_38);
  uVar1 = FUN_180073a70(local_38,param_2,"min_damage");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_38);
  uVar1 = FUN_180073a70(local_38,param_2,"quick_stop");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_38);
  uVar1 = FUN_180073a70(local_38,param_2,"quick_stop_options");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_38);
  uVar1 = FUN_180073a70(local_38,param_2,"quick_scope");
  FUN_180162d70(param_1,uVar1);
  FUN_18000f890(local_38);
  return;
}



/* ===== 180166250 FUN_180166250 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180166250(undefined8 param_1,longlong param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  size_t sVar9;
  undefined8 *puVar10;
  char *pcVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  undefined1 auStack_288 [40];
  char *apcStack_260 [4];
  char *pcStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined1 auStack_220 [32];
  char *pcStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  char *pcStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  char *pcStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  ulonglong uStack_1a8;
  char *pcStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  char *pcStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  char *pcStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined1 auStack_120 [32];
  ulonglong uStack_100;
  undefined8 uStack_f8;
  longlong lStack_f0;
  undefined8 uStack_e8;
  ulonglong uStack_e0;
  undefined1 *apuStack_d8 [3];
  ulonglong uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  ulonglong local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined1 local_70 [17];
  undefined1 local_5f [15];
  undefined1 local_50 [32];
  ulonglong local_30;
  
  local_30 = DAT_180919500 ^ (ulonglong)apuStack_d8;
  uVar16 = 0;
  local_b8 = local_b8 & 0xffffffff00000000;
  uStack_e0 = 0x18016629c;
  FUN_180013350(&local_90,"legitbot.enabled");
  uStack_e0 = 0x1801662a9;
  FUN_180162d70(param_1,&local_90);
  uStack_e0 = 0x1801662b3;
  FUN_18000f890(&local_90);
  local_b0 = (char *)0x0;
  uStack_a8 = 0;
  uStack_e0 = 0x1801662c4;
  local_b0 = (char *)FUN_18000fb70(0x20);
  uVar4 = s_legitbot_groups__1806f74d8._12_4_;
  uVar3 = s_legitbot_groups__1806f74d8._8_4_;
  uVar2 = s_legitbot_groups__1806f74d8._4_4_;
  local_a0 = 0x10;
  local_98 = 0x1f;
  *(undefined4 *)local_b0 = s_legitbot_groups__1806f74d8._0_4_;
  *(undefined4 *)(local_b0 + 4) = uVar2;
  *(undefined4 *)(local_b0 + 8) = uVar3;
  *(undefined4 *)(local_b0 + 0xc) = uVar4;
  local_b0[0x10] = '\0';
  uStack_e0 = 0x1801662f6;
  FUN_180165e70(param_1,&local_b0,param_2 + 4);
  uStack_e0 = 0x180166300;
  FUN_18000f890(&local_b0);
  uVar14 = 0;
  do {
    iVar5 = *(int *)(param_2 + 4);
    if (iVar5 < 1) {
      iVar5 = 1;
    }
    if (iVar5 <= (int)uVar14) break;
    if ((int)uVar14 < 1) {
      uStack_a8 = 0;
      local_a0 = 6;
      local_98 = 0xf;
      local_b0 = (char *)(ulonglong)CONCAT24(s_global_1806f2a8c._4_2_,s_global_1806f2a8c._0_4_);
    }
    else {
      uStack_e0 = 0x180166363;
      uVar6 = FUN_18003a390(local_70,uVar14 & 0xffffffff);
      uVar15 = (uint)uVar16;
      uVar16 = (ulonglong)(uVar15 | 1);
      local_b8 = CONCAT44(local_b8._4_4_,uVar15) | 1;
      uStack_e0 = 0x18016637d;
      FUN_180066ab0(&local_b0,&DAT_1806e0b7c,uVar6);
    }
    uVar15 = (uint)uVar16;
    if ((uVar16 & 1) != 0) {
      uVar15 = uVar15 & 0xfffffffe;
      uStack_e0 = 0x180166392;
      FUN_18000f890(local_70);
    }
    uStack_e0 = 0x1801663a7;
    uVar6 = FUN_180066ab0(local_50,"legitbot.",&local_b0);
    uStack_e0 = 0x1801663ba;
    puVar7 = (undefined4 *)FUN_1800134a0(uVar6,&DAT_1806e6f24,1);
    local_90 = *puVar7;
    uStack_8c = puVar7[1];
    uStack_88 = puVar7[2];
    uStack_84 = puVar7[3];
    local_80 = puVar7[4];
    uStack_7c = puVar7[5];
    uStack_78 = puVar7[6];
    uStack_74 = puVar7[7];
    *(undefined8 *)(puVar7 + 4) = 0;
    *(undefined8 *)(puVar7 + 6) = 0xf;
    *(undefined1 *)puVar7 = 0;
    uVar16 = (ulonglong)(uVar15 | 6);
    uStack_e0 = 0x1801663e7;
    FUN_1801af630(param_1,&local_90);
    uStack_e0 = 0x1801663f1;
    FUN_18000f890(&local_90);
    uStack_e0 = 0x1801663fb;
    FUN_18000f890(local_50);
    if (0xf < local_98) {
      uVar13 = local_98 + 1;
      pcVar11 = local_b0;
      if (0xfff < uVar13) {
        pcVar11 = *(char **)(local_b0 + -8);
        if ((char *)0x1f < local_b0 + (-8 - (longlong)pcVar11)) goto LAB_180167109;
        uVar13 = local_98 + 0x28;
      }
      uStack_e0 = 0x180166437;
      thunk_FUN_1803d64e0(pcVar11,uVar13);
    }
    uVar14 = uVar14 + 1;
  } while (uVar14 < 0x40);
  local_b0 = (char *)0x0;
  uStack_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  uStack_e0 = 0x18016645d;
  local_b0 = (char *)FUN_18000fb70(0x20);
  uVar4 = s_legitbot_visualize_1806f74f0._12_4_;
  uVar3 = s_legitbot_visualize_1806f74f0._8_4_;
  uVar2 = s_legitbot_visualize_1806f74f0._4_4_;
  local_a0 = 0x12;
  local_98 = 0x1f;
  *(undefined4 *)local_b0 = s_legitbot_visualize_1806f74f0._0_4_;
  *(undefined4 *)(local_b0 + 4) = uVar2;
  *(undefined4 *)(local_b0 + 8) = uVar3;
  *(undefined4 *)(local_b0 + 0xc) = uVar4;
  *(undefined2 *)(local_b0 + 0x10) = s_legitbot_visualize_1806f74f0._16_2_;
  local_b0[0x12] = '\0';
  uStack_e0 = 0x180166496;
  FUN_180162d70(param_1,&local_b0);
  if (0xf < local_98) {
    uVar13 = local_98 + 1;
    pcVar11 = local_b0;
    if (0xfff < uVar13) {
      pcVar11 = *(char **)(local_b0 + -8);
      if ((char *)0x1f < local_b0 + (-8 - (longlong)pcVar11)) goto LAB_180167109;
      uVar13 = local_98 + 0x28;
    }
    uStack_e0 = 0x1801664d2;
    thunk_FUN_1803d64e0(pcVar11,uVar13);
  }
  local_b0 = (char *)0x0;
  uStack_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  uStack_e0 = 0x1801664eb;
  local_b0 = (char *)FUN_18000fb70(0x20);
  uVar4 = s_legitbot_visualize_target_1806f7540._12_4_;
  uVar3 = s_legitbot_visualize_target_1806f7540._8_4_;
  uVar2 = s_legitbot_visualize_target_1806f7540._4_4_;
  local_a0 = 0x19;
  local_98 = 0x1f;
  *(undefined4 *)local_b0 = s_legitbot_visualize_target_1806f7540._0_4_;
  *(undefined4 *)(local_b0 + 4) = uVar2;
  *(undefined4 *)(local_b0 + 8) = uVar3;
  *(undefined4 *)(local_b0 + 0xc) = uVar4;
  uVar4 = s_legitbot_visualize_target_1806f7540._21_4_;
  uVar3 = s_legitbot_visualize_target_1806f7540._17_4_;
  uVar2 = CONCAT13(s_legitbot_visualize_target_1806f7540[0x10],
                   s_legitbot_visualize_target_1806f7540._13_3_);
  *(uint *)(local_b0 + 9) =
       CONCAT13(s_legitbot_visualize_target_1806f7540[0xc],
                s_legitbot_visualize_target_1806f7540._9_3_);
  *(undefined4 *)(local_b0 + 0xd) = uVar2;
  *(undefined4 *)(local_b0 + 0x11) = uVar3;
  *(undefined4 *)(local_b0 + 0x15) = uVar4;
  local_b0[0x19] = '\0';
  uStack_e0 = 0x180166524;
  FUN_180162d70(param_1,&local_b0);
  uStack_e0 = 0x18016652e;
  FUN_18000f890(&local_b0);
  local_b0 = (char *)0x0;
  uStack_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  uStack_e0 = 0x180166547;
  local_b0 = (char *)FUN_18000fb70(0x20);
  uVar4 = s_legitbot_target_color_1806f7560._12_4_;
  uVar3 = s_legitbot_target_color_1806f7560._8_4_;
  uVar2 = s_legitbot_target_color_1806f7560._4_4_;
  local_a0 = 0x15;
  local_98 = 0x1f;
  *(undefined4 *)local_b0 = s_legitbot_target_color_1806f7560._0_4_;
  *(undefined4 *)(local_b0 + 4) = uVar2;
  *(undefined4 *)(local_b0 + 8) = uVar3;
  *(undefined4 *)(local_b0 + 0xc) = uVar4;
  *(ulonglong *)(local_b0 + 0xd) =
       CONCAT53(s_legitbot_target_color_1806f7560._16_5_,s_legitbot_target_color_1806f7560._13_3_);
  local_b0[0x15] = '\0';
  uStack_e0 = 0x180166582;
  FUN_180162d70(param_1,&local_b0);
  if (0xf < local_98) {
    uVar13 = local_98 + 1;
    pcVar11 = local_b0;
    if (0xfff < uVar13) {
      pcVar11 = *(char **)(local_b0 + -8);
      if ((char *)0x1f < local_b0 + (-8 - (longlong)pcVar11)) goto LAB_180167109;
      uVar13 = local_98 + 0x28;
    }
    uStack_e0 = 0x1801665be;
    thunk_FUN_1803d64e0(pcVar11,uVar13);
  }
  local_b0 = (char *)0x0;
  uStack_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  uStack_e0 = 0x1801665d7;
  local_b0 = (char *)FUN_18000fb70(0x20);
  uVar4 = s_legitbot_visualize_fov_1806f7510._8_4_;
  uVar3 = s_legitbot_visualize_fov_1806f7510._4_4_;
  local_a0 = 0x16;
  local_98 = 0x1f;
  uVar2 = CONCAT22(s_legitbot_visualize_fov_1806f7510._14_2_,
                   s_legitbot_visualize_fov_1806f7510._12_2_);
  *(undefined4 *)local_b0 = s_legitbot_visualize_fov_1806f7510._0_4_;
  *(undefined4 *)(local_b0 + 4) = uVar3;
  *(undefined4 *)(local_b0 + 8) = uVar4;
  *(undefined4 *)(local_b0 + 0xc) = uVar2;
  *(ulonglong *)(local_b0 + 0xe) =
       CONCAT62(s_legitbot_visualize_fov_1806f7510._16_6_,s_legitbot_visualize_fov_1806f7510._14_2_)
  ;
  local_b0[0x16] = '\0';
  uStack_e0 = 0x180166612;
  FUN_180162d70(param_1,&local_b0);
  if (0xf < local_98) {
    uVar13 = local_98 + 1;
    pcVar11 = local_b0;
    if (0xfff < uVar13) {
      pcVar11 = *(char **)(local_b0 + -8);
      if ((char *)0x1f < local_b0 + (-8 - (longlong)pcVar11)) goto LAB_180167109;
      uVar13 = local_98 + 0x28;
    }
    uStack_e0 = 0x18016664e;
    thunk_FUN_1803d64e0(pcVar11,uVar13);
  }
  local_b0 = (char *)0x0;
  uStack_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  uStack_e0 = 0x180166667;
  local_b0 = (char *)FUN_18000fb70(0x20);
  uVar4 = s_legitbot_fov_color_1806f7528._12_4_;
  uVar3 = s_legitbot_fov_color_1806f7528._8_4_;
  uVar2 = s_legitbot_fov_color_1806f7528._4_4_;
  local_a0 = 0x12;
  local_98 = 0x1f;
  *(undefined4 *)local_b0 = s_legitbot_fov_color_1806f7528._0_4_;
  *(undefined4 *)(local_b0 + 4) = uVar2;
  *(undefined4 *)(local_b0 + 8) = uVar3;
  *(undefined4 *)(local_b0 + 0xc) = uVar4;
  *(undefined2 *)(local_b0 + 0x10) = s_legitbot_fov_color_1806f7528._16_2_;
  local_b0[0x12] = '\0';
  uStack_e0 = 0x1801666a0;
  FUN_180162d70(param_1,&local_b0);
  if (0xf < local_98) {
    uVar13 = local_98 + 1;
    pcVar11 = local_b0;
    if (0xfff < uVar13) {
      pcVar11 = *(char **)(local_b0 + -8);
      if ((char *)0x1f < local_b0 + (-8 - (longlong)pcVar11)) goto LAB_180167109;
      uVar13 = local_98 + 0x28;
    }
    uStack_e0 = 0x1801666dc;
    thunk_FUN_1803d64e0(pcVar11,uVar13);
  }
  local_b0 = (char *)0x0;
  uStack_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  uStack_e0 = 0x1801666f5;
  local_b0 = (char *)FUN_18000fb70(0x20);
  uVar4 = s_legitbot_visualize_hitboxes_1806f75b8._12_4_;
  uVar3 = s_legitbot_visualize_hitboxes_1806f75b8._8_4_;
  uVar2 = s_legitbot_visualize_hitboxes_1806f75b8._4_4_;
  local_a0 = 0x1b;
  local_98 = 0x1f;
  *(undefined4 *)local_b0 = s_legitbot_visualize_hitboxes_1806f75b8._0_4_;
  *(undefined4 *)(local_b0 + 4) = uVar2;
  *(undefined4 *)(local_b0 + 8) = uVar3;
  *(undefined4 *)(local_b0 + 0xc) = uVar4;
  uVar4 = s_legitbot_visualize_hitboxes_1806f75b8._23_4_;
  uVar3 = s_legitbot_visualize_hitboxes_1806f75b8._19_4_;
  uVar2 = CONCAT31(s_legitbot_visualize_hitboxes_1806f75b8._16_3_,
                   s_legitbot_visualize_hitboxes_1806f75b8[0xf]);
  *(uint *)(local_b0 + 0xb) =
       CONCAT31(s_legitbot_visualize_hitboxes_1806f75b8._12_3_,
                s_legitbot_visualize_hitboxes_1806f75b8[0xb]);
  *(undefined4 *)(local_b0 + 0xf) = uVar2;
  *(undefined4 *)(local_b0 + 0x13) = uVar3;
  *(undefined4 *)(local_b0 + 0x17) = uVar4;
  local_b0[0x1b] = '\0';
  uStack_e0 = 0x18016672e;
  FUN_180162d70(param_1,&local_b0);
  if (0xf < local_98) {
    uVar13 = local_98 + 1;
    pcVar11 = local_b0;
    if (0xfff < uVar13) {
      pcVar11 = *(char **)(local_b0 + -8);
      if ((char *)0x1f < local_b0 + (-8 - (longlong)pcVar11)) goto LAB_180167109;
      uVar13 = local_98 + 0x28;
    }
    uStack_e0 = 0x18016676a;
    thunk_FUN_1803d64e0(pcVar11,uVar13);
  }
  local_b0 = (char *)0x0;
  uStack_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  uStack_e0 = 0x180166783;
  local_b0 = (char *)FUN_18000fb70(0x20);
  uVar4 = s_legitbot_high_priority_color_1806f75d8._12_4_;
  uVar3 = s_legitbot_high_priority_color_1806f75d8._8_4_;
  uVar2 = s_legitbot_high_priority_color_1806f75d8._4_4_;
  local_a0 = 0x1c;
  local_98 = 0x1f;
  *(undefined4 *)local_b0 = s_legitbot_high_priority_color_1806f75d8._0_4_;
  *(undefined4 *)(local_b0 + 4) = uVar2;
  *(undefined4 *)(local_b0 + 8) = uVar3;
  *(undefined4 *)(local_b0 + 0xc) = uVar4;
  uVar4 = s_legitbot_high_priority_color_1806f75d8._24_4_;
  uVar3 = s_legitbot_high_priority_color_1806f75d8._20_4_;
  uVar2 = s_legitbot_high_priority_color_1806f75d8._16_4_;
  *(undefined4 *)(local_b0 + 0xc) = s_legitbot_high_priority_color_1806f75d8._12_4_;
  *(undefined4 *)(local_b0 + 0x10) = uVar2;
  *(undefined4 *)(local_b0 + 0x14) = uVar3;
  *(undefined4 *)(local_b0 + 0x18) = uVar4;
  local_b0[0x1c] = '\0';
  uStack_e0 = 0x1801667bc;
  FUN_180162d70(param_1,&local_b0);
  if (0xf < local_98) {
    uVar13 = local_98 + 1;
    pcVar11 = local_b0;
    if (0xfff < uVar13) {
      pcVar11 = *(char **)(local_b0 + -8);
      if ((char *)0x1f < local_b0 + (-8 - (longlong)pcVar11)) goto LAB_180167109;
      uVar13 = local_98 + 0x28;
    }
    uStack_e0 = 0x1801667f8;
    thunk_FUN_1803d64e0(pcVar11,uVar13);
  }
  local_b0 = (char *)0x0;
  uStack_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  uStack_e0 = 0x180166811;
  local_b0 = (char *)FUN_18000fb70(0x20);
  uVar4 = s_legitbot_low_priority_color_1806f7578._12_4_;
  uVar3 = s_legitbot_low_priority_color_1806f7578._8_4_;
  uVar2 = s_legitbot_low_priority_color_1806f7578._4_4_;
  local_a0 = 0x1b;
  local_98 = 0x1f;
  *(undefined4 *)local_b0 = s_legitbot_low_priority_color_1806f7578._0_4_;
  *(undefined4 *)(local_b0 + 4) = uVar2;
  *(undefined4 *)(local_b0 + 8) = uVar3;
  *(undefined4 *)(local_b0 + 0xc) = uVar4;
  uVar4 = s_legitbot_low_priority_color_1806f7578._23_4_;
  uVar3 = s_legitbot_low_priority_color_1806f7578._19_4_;
  uVar2 = CONCAT31(s_legitbot_low_priority_color_1806f7578._16_3_,
                   s_legitbot_low_priority_color_1806f7578[0xf]);
  *(uint *)(local_b0 + 0xb) =
       CONCAT31(s_legitbot_low_priority_color_1806f7578._12_3_,
                s_legitbot_low_priority_color_1806f7578[0xb]);
  *(undefined4 *)(local_b0 + 0xf) = uVar2;
  *(undefined4 *)(local_b0 + 0x13) = uVar3;
  *(undefined4 *)(local_b0 + 0x17) = uVar4;
  local_b0[0x1b] = '\0';
  uStack_e0 = 0x18016684a;
  FUN_180162d70(param_1,&local_b0);
  if (0xf < local_98) {
    uVar13 = local_98 + 1;
    pcVar11 = local_b0;
    if (0xfff < uVar13) {
      pcVar11 = *(char **)(local_b0 + -8);
      if ((char *)0x1f < local_b0 + (-8 - (longlong)pcVar11)) goto LAB_180167109;
      uVar13 = local_98 + 0x28;
    }
    uStack_e0 = 0x180166886;
    thunk_FUN_1803d64e0(pcVar11,uVar13);
  }
  local_b0 = (char *)0x0;
  uStack_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  uStack_e0 = 0x18016689f;
  local_b0 = (char *)FUN_18000fb70(0x20);
  uVar4 = s_legitbot_visualize_recoil_1806f7598._12_4_;
  uVar3 = s_legitbot_visualize_recoil_1806f7598._8_4_;
  uVar2 = s_legitbot_visualize_recoil_1806f7598._4_4_;
  local_a0 = 0x19;
  local_98 = 0x1f;
  *(undefined4 *)local_b0 = s_legitbot_visualize_recoil_1806f7598._0_4_;
  *(undefined4 *)(local_b0 + 4) = uVar2;
  *(undefined4 *)(local_b0 + 8) = uVar3;
  *(undefined4 *)(local_b0 + 0xc) = uVar4;
  uVar4 = s_legitbot_visualize_recoil_1806f7598._21_4_;
  uVar3 = s_legitbot_visualize_recoil_1806f7598._17_4_;
  uVar2 = CONCAT13(s_legitbot_visualize_recoil_1806f7598[0x10],
                   s_legitbot_visualize_recoil_1806f7598._13_3_);
  *(uint *)(local_b0 + 9) =
       CONCAT13(s_legitbot_visualize_recoil_1806f7598[0xc],
                s_legitbot_visualize_recoil_1806f7598._9_3_);
  *(undefined4 *)(local_b0 + 0xd) = uVar2;
  *(undefined4 *)(local_b0 + 0x11) = uVar3;
  *(undefined4 *)(local_b0 + 0x15) = uVar4;
  local_b0[0x19] = '\0';
  uStack_e0 = 0x1801668d8;
  FUN_180162d70(param_1,&local_b0);
  if (0xf < local_98) {
    uVar13 = local_98 + 1;
    pcVar11 = local_b0;
    if (0xfff < uVar13) {
      pcVar11 = *(char **)(local_b0 + -8);
      if ((char *)0x1f < local_b0 + (-8 - (longlong)pcVar11)) goto LAB_180167109;
      uVar13 = local_98 + 0x28;
    }
    uStack_e0 = 0x180166914;
    thunk_FUN_1803d64e0(pcVar11,uVar13);
  }
  local_b0 = (char *)0x0;
  uStack_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  uStack_e0 = 0x18016692d;
  local_b0 = (char *)FUN_18000fb70(0x20);
  uVar4 = s_legitbot_recoil_original_color_1806f7630._8_4_;
  uVar3 = s_legitbot_recoil_original_color_1806f7630._4_4_;
  local_a0 = 0x1e;
  local_98 = 0x1f;
  uVar2 = CONCAT22(s_legitbot_recoil_original_color_1806f7630._14_2_,
                   s_legitbot_recoil_original_color_1806f7630._12_2_);
  *(undefined4 *)local_b0 = s_legitbot_recoil_original_color_1806f7630._0_4_;
  *(undefined4 *)(local_b0 + 4) = uVar3;
  *(undefined4 *)(local_b0 + 8) = uVar4;
  *(undefined4 *)(local_b0 + 0xc) = uVar2;
  uVar4 = s_legitbot_recoil_original_color_1806f7630._26_4_;
  uVar3 = s_legitbot_recoil_original_color_1806f7630._22_4_;
  uVar2 = s_legitbot_recoil_original_color_1806f7630._18_4_;
  *(uint *)(local_b0 + 0xe) =
       CONCAT22(s_legitbot_recoil_original_color_1806f7630._16_2_,
                s_legitbot_recoil_original_color_1806f7630._14_2_);
  *(undefined4 *)(local_b0 + 0x12) = uVar2;
  *(undefined4 *)(local_b0 + 0x16) = uVar3;
  *(undefined4 *)(local_b0 + 0x1a) = uVar4;
  local_b0[0x1e] = '\0';
  uStack_e0 = 0x180166966;
  FUN_180162d70(param_1,&local_b0);
  if (0xf < local_98) {
    uVar13 = local_98 + 1;
    pcVar11 = local_b0;
    if (0xfff < uVar13) {
      pcVar11 = *(char **)(local_b0 + -8);
      if ((char *)0x1f < local_b0 + (-8 - (longlong)pcVar11)) goto LAB_180167109;
      uVar13 = local_98 + 0x28;
    }
    uStack_e0 = 0x1801669a2;
    thunk_FUN_1803d64e0(pcVar11,uVar13);
  }
  local_b0 = (char *)0x0;
  uStack_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  uStack_e0 = 0x1801669bb;
  local_b0 = (char *)FUN_18000fb70(0x30);
  uVar4 = s_legitbot_recoil_compensated_colo_1806f7650._12_4_;
  uVar3 = s_legitbot_recoil_compensated_colo_1806f7650._8_4_;
  uVar2 = s_legitbot_recoil_compensated_colo_1806f7650._4_4_;
  local_a0 = 0x21;
  local_98 = 0x2f;
  *(undefined4 *)local_b0 = s_legitbot_recoil_compensated_colo_1806f7650._0_4_;
  *(undefined4 *)(local_b0 + 4) = uVar2;
  *(undefined4 *)(local_b0 + 8) = uVar3;
  *(undefined4 *)(local_b0 + 0xc) = uVar4;
  uVar4 = s_legitbot_recoil_compensated_colo_1806f7650._28_4_;
  uVar3 = s_legitbot_recoil_compensated_colo_1806f7650._24_4_;
  uVar2 = s_legitbot_recoil_compensated_colo_1806f7650._20_4_;
  *(undefined4 *)(local_b0 + 0x10) = s_legitbot_recoil_compensated_colo_1806f7650._16_4_;
  *(undefined4 *)(local_b0 + 0x14) = uVar2;
  *(undefined4 *)(local_b0 + 0x18) = uVar3;
  *(undefined4 *)(local_b0 + 0x1c) = uVar4;
  local_b0[0x20] = s_legitbot_recoil_compensated_colo_1806f7650[0x20];
  local_b0[0x21] = '\0';
  uStack_e0 = 0x1801669fe;
  FUN_180162d70(param_1,&local_b0);
  if (0xf < local_98) {
    uVar13 = local_98 + 1;
    pcVar11 = local_b0;
    if (0xfff < uVar13) {
      pcVar11 = *(char **)(local_b0 + -8);
      if ((char *)0x1f < local_b0 + (-8 - (longlong)pcVar11)) goto LAB_180167109;
      uVar13 = local_98 + 0x28;
    }
    uStack_e0 = 0x180166a3a;
    thunk_FUN_1803d64e0(pcVar11,uVar13);
  }
  local_b0 = (char *)0x0;
  uStack_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  uStack_e0 = 0x180166a53;
  local_b0 = (char *)FUN_18000fb70(0x20);
  uVar4 = s_legitbot_visualize_velocity_1806f75f8._12_4_;
  uVar3 = s_legitbot_visualize_velocity_1806f75f8._8_4_;
  uVar2 = s_legitbot_visualize_velocity_1806f75f8._4_4_;
  local_a0 = 0x1b;
  local_98 = 0x1f;
  *(undefined4 *)local_b0 = s_legitbot_visualize_velocity_1806f75f8._0_4_;
  *(undefined4 *)(local_b0 + 4) = uVar2;
  *(undefined4 *)(local_b0 + 8) = uVar3;
  *(undefined4 *)(local_b0 + 0xc) = uVar4;
  uVar4 = s_legitbot_visualize_velocity_1806f75f8._23_4_;
  uVar3 = s_legitbot_visualize_velocity_1806f75f8._19_4_;
  uVar2 = CONCAT31(s_legitbot_visualize_velocity_1806f75f8._16_3_,
                   s_legitbot_visualize_velocity_1806f75f8[0xf]);
  *(uint *)(local_b0 + 0xb) =
       CONCAT31(s_legitbot_visualize_velocity_1806f75f8._12_3_,
                s_legitbot_visualize_velocity_1806f75f8[0xb]);
  *(undefined4 *)(local_b0 + 0xf) = uVar2;
  *(undefined4 *)(local_b0 + 0x13) = uVar3;
  *(undefined4 *)(local_b0 + 0x17) = uVar4;
  local_b0[0x1b] = '\0';
  uStack_e0 = 0x180166a8c;
  FUN_180162d70(param_1,&local_b0);
  if (0xf < local_98) {
    uVar13 = local_98 + 1;
    pcVar11 = local_b0;
    if (0xfff < uVar13) {
      pcVar11 = *(char **)(local_b0 + -8);
      if ((char *)0x1f < local_b0 + (-8 - (longlong)pcVar11)) goto LAB_180167109;
      uVar13 = local_98 + 0x28;
    }
    uStack_e0 = 0x180166ac8;
    thunk_FUN_1803d64e0(pcVar11,uVar13);
  }
  local_b0 = (char *)0x0;
  uStack_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  uStack_e0 = 0x180166ae1;
  local_b0 = (char *)FUN_18000fb70(0x20);
  uVar4 = s_legitbot_velocity_speed_1806f7618._12_4_;
  uVar3 = s_legitbot_velocity_speed_1806f7618._8_4_;
  uVar2 = s_legitbot_velocity_speed_1806f7618._4_4_;
  local_a0 = 0x17;
  local_98 = 0x1f;
  *(undefined4 *)local_b0 = s_legitbot_velocity_speed_1806f7618._0_4_;
  *(undefined4 *)(local_b0 + 4) = uVar2;
  *(undefined4 *)(local_b0 + 8) = uVar3;
  *(undefined4 *)(local_b0 + 0xc) = uVar4;
  *(ulonglong *)(local_b0 + 0xf) =
       CONCAT71(s_legitbot_velocity_speed_1806f7618._16_7_,s_legitbot_velocity_speed_1806f7618[0xf])
  ;
  local_b0[0x17] = '\0';
  uStack_e0 = 0x180166b1c;
  FUN_180162d70(param_1,&local_b0);
  if (0xf < local_98) {
    uVar13 = local_98 + 1;
    pcVar11 = local_b0;
    if (0xfff < uVar13) {
      pcVar11 = *(char **)(local_b0 + -8);
      if ((char *)0x1f < local_b0 + (-8 - (longlong)pcVar11)) goto LAB_180167109;
      uVar13 = local_98 + 0x28;
    }
    uStack_e0 = 0x180166b58;
    thunk_FUN_1803d64e0(pcVar11,uVar13);
  }
  local_b0 = (char *)0x0;
  uStack_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  uStack_e0 = 0x180166b71;
  local_b0 = (char *)FUN_18000fb70(0x20);
  uVar4 = s_legitbot_speed_color_1806f76b0._12_4_;
  uVar3 = s_legitbot_speed_color_1806f76b0._8_4_;
  uVar2 = s_legitbot_speed_color_1806f76b0._4_4_;
  local_a0 = 0x14;
  local_98 = 0x1f;
  *(undefined4 *)local_b0 = s_legitbot_speed_color_1806f76b0._0_4_;
  *(undefined4 *)(local_b0 + 4) = uVar2;
  *(undefined4 *)(local_b0 + 8) = uVar3;
  *(undefined4 *)(local_b0 + 0xc) = uVar4;
  *(undefined4 *)(local_b0 + 0x10) = s_legitbot_speed_color_1806f76b0._16_4_;
  local_b0[0x14] = '\0';
  uStack_e0 = 0x180166ba8;
  FUN_180162d70(param_1,&local_b0);
  if (0xf < local_98) {
    uVar13 = local_98 + 1;
    pcVar11 = local_b0;
    if (0xfff < uVar13) {
      pcVar11 = *(char **)(local_b0 + -8);
      if ((char *)0x1f < local_b0 + (-8 - (longlong)pcVar11)) goto LAB_180167109;
      uVar13 = local_98 + 0x28;
    }
    uStack_e0 = 0x180166be4;
    thunk_FUN_1803d64e0(pcVar11,uVar13);
  }
  local_b0 = (char *)0x0;
  uStack_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  uStack_e0 = 0x180166bfd;
  local_b0 = (char *)FUN_18000fb70(0x20);
  uVar4 = s_legitbot_velocity_jump_1806f76c8._8_4_;
  uVar3 = s_legitbot_velocity_jump_1806f76c8._4_4_;
  local_a0 = 0x16;
  local_98 = 0x1f;
  uVar2 = CONCAT22(s_legitbot_velocity_jump_1806f76c8._14_2_,
                   s_legitbot_velocity_jump_1806f76c8._12_2_);
  *(undefined4 *)local_b0 = s_legitbot_velocity_jump_1806f76c8._0_4_;
  *(undefined4 *)(local_b0 + 4) = uVar3;
  *(undefined4 *)(local_b0 + 8) = uVar4;
  *(undefined4 *)(local_b0 + 0xc) = uVar2;
  *(ulonglong *)(local_b0 + 0xe) =
       CONCAT62(s_legitbot_velocity_jump_1806f76c8._16_6_,s_legitbot_velocity_jump_1806f76c8._14_2_)
  ;
  local_b0[0x16] = '\0';
  uStack_e0 = 0x180166c38;
  FUN_180162d70(param_1,&local_b0);
  if (0xf < local_98) {
    uVar13 = local_98 + 1;
    pcVar11 = local_b0;
    if (0xfff < uVar13) {
      pcVar11 = *(char **)(local_b0 + -8);
      if ((char *)0x1f < local_b0 + (-8 - (longlong)pcVar11)) goto LAB_180167109;
      uVar13 = local_98 + 0x28;
    }
    uStack_e0 = 0x180166c74;
    thunk_FUN_1803d64e0(pcVar11,uVar13);
  }
  local_b0 = (char *)0x0;
  uStack_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  uStack_e0 = 0x180166c8d;
  local_b0 = (char *)FUN_18000fb70(0x20);
  uVar4 = s_legitbot_jump_color_1806f7678._12_4_;
  uVar3 = s_legitbot_jump_color_1806f7678._8_4_;
  uVar2 = s_legitbot_jump_color_1806f7678._4_4_;
  local_a0 = 0x13;
  local_98 = 0x1f;
  *(undefined4 *)local_b0 = s_legitbot_jump_color_1806f7678._0_4_;
  *(undefined4 *)(local_b0 + 4) = uVar2;
  *(undefined4 *)(local_b0 + 8) = uVar3;
  *(undefined4 *)(local_b0 + 0xc) = uVar4;
  *(uint *)(local_b0 + 0xf) =
       CONCAT31(s_legitbot_jump_color_1806f7678._16_3_,s_legitbot_jump_color_1806f7678[0xf]);
  local_b0[0x13] = '\0';
  uStack_e0 = 0x180166cc4;
  FUN_180162d70(param_1,&local_b0);
  if (0xf < local_98) {
    uVar13 = local_98 + 1;
    pcVar11 = local_b0;
    if (0xfff < uVar13) {
      pcVar11 = *(char **)(local_b0 + -8);
      if ((char *)0x1f < local_b0 + (-8 - (longlong)pcVar11)) goto LAB_180167109;
      uVar13 = local_98 + 0x28;
    }
    uStack_e0 = 0x180166d00;
    thunk_FUN_1803d64e0(pcVar11,uVar13);
  }
  local_b0 = (char *)0x0;
  uStack_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  uStack_e0 = 0x180166d19;
  local_b0 = (char *)FUN_18000fb70(0x20);
  uVar4 = s_legitbot_velocity_ground_1806f7690._12_4_;
  uVar3 = s_legitbot_velocity_ground_1806f7690._8_4_;
  uVar2 = s_legitbot_velocity_ground_1806f7690._4_4_;
  local_a0 = 0x18;
  local_98 = 0x1f;
  *(undefined4 *)local_b0 = s_legitbot_velocity_ground_1806f7690._0_4_;
  *(undefined4 *)(local_b0 + 4) = uVar2;
  *(undefined4 *)(local_b0 + 8) = uVar3;
  *(undefined4 *)(local_b0 + 0xc) = uVar4;
  *(undefined8 *)(local_b0 + 0x10) = s_legitbot_velocity_ground_1806f7690._16_8_;
  local_b0[0x18] = '\0';
  uStack_e0 = 0x180166d54;
  FUN_180162d70(param_1,&local_b0);
  if (0xf < local_98) {
    uVar13 = local_98 + 1;
    pcVar11 = local_b0;
    if (0xfff < uVar13) {
      pcVar11 = *(char **)(local_b0 + -8);
      if ((char *)0x1f < local_b0 + (-8 - (longlong)pcVar11)) goto LAB_180167109;
      uVar13 = local_98 + 0x28;
    }
    uStack_e0 = 0x180166d90;
    thunk_FUN_1803d64e0(pcVar11,uVar13);
  }
  local_b0 = (char *)0x0;
  uStack_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  uStack_e0 = 0x180166da9;
  local_b0 = (char *)FUN_18000fb70(0x20);
  uVar4 = s_legitbot_ground_color_1806f7728._12_4_;
  uVar3 = s_legitbot_ground_color_1806f7728._8_4_;
  uVar2 = s_legitbot_ground_color_1806f7728._4_4_;
  local_a0 = 0x15;
  local_98 = 0x1f;
  *(undefined4 *)local_b0 = s_legitbot_ground_color_1806f7728._0_4_;
  *(undefined4 *)(local_b0 + 4) = uVar2;
  *(undefined4 *)(local_b0 + 8) = uVar3;
  *(undefined4 *)(local_b0 + 0xc) = uVar4;
  *(ulonglong *)(local_b0 + 0xd) =
       CONCAT53(s_legitbot_ground_color_1806f7728._16_5_,s_legitbot_ground_color_1806f7728._13_3_);
  local_b0[0x15] = '\0';
  uStack_e0 = 0x180166de4;
  FUN_180162d70(param_1,&local_b0);
  if (0xf < local_98) {
    uVar13 = local_98 + 1;
    pcVar11 = local_b0;
    if (0xfff < uVar13) {
      pcVar11 = *(char **)(local_b0 + -8);
      if ((char *)0x1f < local_b0 + (-8 - (longlong)pcVar11)) goto LAB_180167109;
      uVar13 = local_98 + 0x28;
    }
    uStack_e0 = 0x180166e20;
    thunk_FUN_1803d64e0(pcVar11,uVar13);
  }
  local_b0 = (char *)0x0;
  uStack_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  uStack_e0 = 0x180166e39;
  local_b0 = (char *)FUN_18000fb70(0x20);
  uVar4 = s_legitbot_automatic_weapons_1806f7740._4_4_;
  local_a0 = 0x1a;
  local_98 = 0x1f;
  uVar2 = CONCAT22(s_legitbot_automatic_weapons_1806f7740._10_2_,
                   s_legitbot_automatic_weapons_1806f7740._8_2_);
  uVar3 = CONCAT22(s_legitbot_automatic_weapons_1806f7740._14_2_,
                   s_legitbot_automatic_weapons_1806f7740._12_2_);
  *(undefined4 *)local_b0 = s_legitbot_automatic_weapons_1806f7740._0_4_;
  *(undefined4 *)(local_b0 + 4) = uVar4;
  *(undefined4 *)(local_b0 + 8) = uVar2;
  *(undefined4 *)(local_b0 + 0xc) = uVar3;
  uVar4 = s_legitbot_automatic_weapons_1806f7740._22_4_;
  uVar3 = s_legitbot_automatic_weapons_1806f7740._18_4_;
  uVar2 = CONCAT22(s_legitbot_automatic_weapons_1806f7740._16_2_,
                   s_legitbot_automatic_weapons_1806f7740._14_2_);
  *(uint *)(local_b0 + 10) =
       CONCAT22(s_legitbot_automatic_weapons_1806f7740._12_2_,
                s_legitbot_automatic_weapons_1806f7740._10_2_);
  *(undefined4 *)(local_b0 + 0xe) = uVar2;
  *(undefined4 *)(local_b0 + 0x12) = uVar3;
  *(undefined4 *)(local_b0 + 0x16) = uVar4;
  local_b0[0x1a] = '\0';
  uStack_e0 = 0x180166e72;
  FUN_180162d70(param_1,&local_b0);
  if (0xf < local_98) {
    uVar13 = local_98 + 1;
    pcVar11 = local_b0;
    if (0xfff < uVar13) {
      pcVar11 = *(char **)(local_b0 + -8);
      if ((char *)0x1f < local_b0 + (-8 - (longlong)pcVar11)) goto LAB_180167109;
      uVar13 = local_98 + 0x28;
    }
    uStack_e0 = 0x180166eae;
    thunk_FUN_1803d64e0(pcVar11,uVar13);
  }
  local_b0 = (char *)0x0;
  uStack_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  uStack_e0 = 0x180166ec7;
  local_b0 = (char *)FUN_18000fb70(0x30);
  uVar4 = s_legitbot_automatic_weapons_inter_1806f76e0._12_4_;
  uVar3 = s_legitbot_automatic_weapons_inter_1806f76e0._8_4_;
  uVar2 = s_legitbot_automatic_weapons_inter_1806f76e0._4_4_;
  local_a0 = 0x23;
  local_98 = 0x2f;
  *(undefined4 *)local_b0 = s_legitbot_automatic_weapons_inter_1806f76e0._0_4_;
  *(undefined4 *)(local_b0 + 4) = uVar2;
  *(undefined4 *)(local_b0 + 8) = uVar3;
  *(undefined4 *)(local_b0 + 0xc) = uVar4;
  uVar4 = s_legitbot_automatic_weapons_inter_1806f76e0._28_4_;
  uVar3 = s_legitbot_automatic_weapons_inter_1806f76e0._24_4_;
  uVar2 = s_legitbot_automatic_weapons_inter_1806f76e0._20_4_;
  *(undefined4 *)(local_b0 + 0x10) = s_legitbot_automatic_weapons_inter_1806f76e0._16_4_;
  *(undefined4 *)(local_b0 + 0x14) = uVar2;
  *(undefined4 *)(local_b0 + 0x18) = uVar3;
  *(undefined4 *)(local_b0 + 0x1c) = uVar4;
  *(uint *)(local_b0 + 0x1f) =
       CONCAT31(s_legitbot_automatic_weapons_inter_1806f76e0._32_3_,
                s_legitbot_automatic_weapons_inter_1806f76e0[0x1f]);
  local_b0[0x23] = '\0';
  uStack_e0 = 0x180166f09;
  FUN_180162d70(param_1,&local_b0);
  if (0xf < local_98) {
    uVar13 = local_98 + 1;
    pcVar11 = local_b0;
    if (0xfff < uVar13) {
      pcVar11 = *(char **)(local_b0 + -8);
      if ((char *)0x1f < local_b0 + (-8 - (longlong)pcVar11)) goto LAB_180167109;
      uVar13 = local_98 + 0x28;
    }
    uStack_e0 = 0x180166f45;
    thunk_FUN_1803d64e0(pcVar11,uVar13);
  }
  local_b0 = (char *)0x0;
  uStack_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  uStack_e0 = 0x180166f5e;
  local_b0 = (char *)FUN_18000fb70(0x20);
  uVar4 = s_legitbot_standalone_recoil_1806f7708._4_4_;
  local_a0 = 0x1a;
  local_98 = 0x1f;
  uVar2 = CONCAT22(s_legitbot_standalone_recoil_1806f7708._10_2_,
                   s_legitbot_standalone_recoil_1806f7708._8_2_);
  uVar3 = CONCAT22(s_legitbot_standalone_recoil_1806f7708._14_2_,
                   s_legitbot_standalone_recoil_1806f7708._12_2_);
  *(undefined4 *)local_b0 = s_legitbot_standalone_recoil_1806f7708._0_4_;
  *(undefined4 *)(local_b0 + 4) = uVar4;
  *(undefined4 *)(local_b0 + 8) = uVar2;
  *(undefined4 *)(local_b0 + 0xc) = uVar3;
  uVar4 = s_legitbot_standalone_recoil_1806f7708._22_4_;
  uVar3 = s_legitbot_standalone_recoil_1806f7708._18_4_;
  uVar2 = CONCAT22(s_legitbot_standalone_recoil_1806f7708._16_2_,
                   s_legitbot_standalone_recoil_1806f7708._14_2_);
  *(uint *)(local_b0 + 10) =
       CONCAT22(s_legitbot_standalone_recoil_1806f7708._12_2_,
                s_legitbot_standalone_recoil_1806f7708._10_2_);
  *(undefined4 *)(local_b0 + 0xe) = uVar2;
  *(undefined4 *)(local_b0 + 0x12) = uVar3;
  *(undefined4 *)(local_b0 + 0x16) = uVar4;
  local_b0[0x1a] = '\0';
  uStack_e0 = 0x180166f97;
  FUN_180162d70(param_1,&local_b0);
  if (0xf < local_98) {
    uVar13 = local_98 + 1;
    pcVar11 = local_b0;
    if (0xfff < uVar13) {
      pcVar11 = *(char **)(local_b0 + -8);
      if ((char *)0x1f < local_b0 + (-8 - (longlong)pcVar11)) goto LAB_180167109;
      uVar13 = local_98 + 0x28;
    }
    uStack_e0 = 0x180166fd3;
    thunk_FUN_1803d64e0(pcVar11,uVar13);
  }
  local_b0 = (char *)0x0;
  uStack_a8 = 0;
  uStack_e0 = 0x180166fe4;
  local_b0 = (char *)FUN_18000fb70(0x20);
  uVar4 = s_legitbot_standalone__1806f7788._12_4_;
  uVar3 = s_legitbot_standalone__1806f7788._8_4_;
  uVar2 = s_legitbot_standalone__1806f7788._4_4_;
  local_a0 = 0x14;
  local_98 = 0x1f;
  *(undefined4 *)local_b0 = s_legitbot_standalone__1806f7788._0_4_;
  *(undefined4 *)(local_b0 + 4) = uVar2;
  *(undefined4 *)(local_b0 + 8) = uVar3;
  *(undefined4 *)(local_b0 + 0xc) = uVar4;
  *(undefined4 *)(local_b0 + 0x10) = s_legitbot_standalone__1806f7788._16_4_;
  local_b0[0x14] = '\0';
  uStack_e0 = 0x18016701b;
  FUN_1801afd20(param_1,&local_b0);
  if (0xf < local_98) {
    uVar13 = local_98 + 1;
    pcVar11 = local_b0;
    if (0xfff < uVar13) {
      pcVar11 = *(char **)(local_b0 + -8);
      if ((char *)0x1f < local_b0 + (-8 - (longlong)pcVar11)) goto LAB_180167109;
      uVar13 = local_98 + 0x28;
    }
    uStack_e0 = 0x180167057;
    thunk_FUN_1803d64e0(pcVar11,uVar13);
  }
  local_b0 = (char *)0x0;
  uStack_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  uStack_e0 = 0x180167070;
  local_b0 = (char *)FUN_18000fb70(0x20);
  uVar4 = s_legitbot_randomize_1806f77a0._12_4_;
  uVar3 = s_legitbot_randomize_1806f77a0._8_4_;
  uVar2 = s_legitbot_randomize_1806f77a0._4_4_;
  local_a0 = 0x12;
  local_98 = 0x1f;
  *(undefined4 *)local_b0 = s_legitbot_randomize_1806f77a0._0_4_;
  *(undefined4 *)(local_b0 + 4) = uVar2;
  *(undefined4 *)(local_b0 + 8) = uVar3;
  *(undefined4 *)(local_b0 + 0xc) = uVar4;
  *(undefined2 *)(local_b0 + 0x10) = s_legitbot_randomize_1806f77a0._16_2_;
  local_b0[0x12] = '\0';
  uStack_e0 = 0x1801670a9;
  FUN_180162d70(param_1,&local_b0);
  if (0xf < local_98) {
    uVar13 = local_98 + 1;
    pcVar11 = local_b0;
    if (0xfff < uVar13) {
      pcVar11 = *(char **)(local_b0 + -8);
      if ((char *)0x1f < local_b0 + (-8 - (longlong)pcVar11)) {
LAB_180167109:
        uVar12 = 5;
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        uStack_e8 = 1;
        uStack_f8 = 0;
        uStack_100 = DAT_180919500 ^ (ulonglong)auStack_288;
        pcStack_1e0 = (char *)0x0;
        uStack_1d8 = 0;
        lStack_f0 = param_2;
        uStack_e0 = uVar16;
        apuStack_d8[0] = local_5f;
        uStack_c0 = uVar14;
        local_b8 = param_1;
        pcStack_1e0 = (char *)FUN_18000fb70(0x20);
        uVar4 = s_visuals_world_view__1806f7760._12_4_;
        uVar3 = s_visuals_world_view__1806f7760._8_4_;
        uVar2 = s_visuals_world_view__1806f7760._4_4_;
        uStack_1d0 = 0x13;
        uStack_1c8 = 0x1f;
        *(undefined4 *)pcStack_1e0 = s_visuals_world_view__1806f7760._0_4_;
        *(undefined4 *)(pcStack_1e0 + 4) = uVar2;
        *(undefined4 *)(pcStack_1e0 + 8) = uVar3;
        *(undefined4 *)(pcStack_1e0 + 0xc) = uVar4;
        *(uint *)(pcStack_1e0 + 0xf) =
             CONCAT31(s_visuals_world_view__1806f7760._16_3_,s_visuals_world_view__1806f7760[0xf]);
        pcStack_1e0[0x13] = '\0';
        uVar6 = FUN_180073a70(apcStack_260,&pcStack_1e0,"override_fov");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,&pcStack_1e0,&DAT_1806e0e18);
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,&pcStack_1e0,"override_aspect");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,&pcStack_1e0,"aspect_scaling");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,&pcStack_1e0,"aspect_value");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,&pcStack_1e0,"disable_landing_bob");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,&pcStack_1e0,"scope_override_fov");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,&pcStack_1e0,"scope_x1");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,&pcStack_1e0,"scope_x2");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,&pcStack_1e0,"instant_scope");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,&pcStack_1e0,"show_viewmodel");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,&pcStack_1e0,"force_viewmodel_fov");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,&pcStack_1e0,"vm_override_fov");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,&pcStack_1e0,"vm_fov");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,&pcStack_1e0,"vm_override_position");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,&pcStack_1e0,&DAT_1806f78b0);
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,&pcStack_1e0,&DAT_1806f7884);
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,&pcStack_1e0,&DAT_1806f788c);
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,&pcStack_1e0,"vm_override_angles");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,&pcStack_1e0,"vm_pitch");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,&pcStack_1e0,"vm_yaw");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,&pcStack_1e0,"vm_roll");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,&pcStack_1e0,"vm_override_modifiers");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,&pcStack_1e0,"vm_bobbing");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,&pcStack_1e0,"vm_rotation_sway");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,&pcStack_1e0,"vm_velocity_sway");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,&pcStack_1e0,"vm_in_air_offset");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,&pcStack_1e0,"vm_lower_weapon");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,&pcStack_1e0,"vm_ladder_bob");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,&pcStack_1e0,"force_third_person");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,&pcStack_1e0,"third_person_disablers");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,&pcStack_1e0,"third_person_distance");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,&pcStack_1e0,"disable_overhead");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,&pcStack_1e0,"unlock_spectating");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,&pcStack_1e0,"visual_recoil");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        pcStack_240 = (char *)0x0;
        uStack_238 = 0;
        pcStack_240 = (char *)FUN_18000fb70(0x20);
        uVar4 = s_visuals_world_esp__1806f7a28._12_4_;
        uVar3 = s_visuals_world_esp__1806f7a28._8_4_;
        uVar2 = s_visuals_world_esp__1806f7a28._4_4_;
        uStack_230 = 0x12;
        uStack_228 = 0x1f;
        *(undefined4 *)pcStack_240 = s_visuals_world_esp__1806f7a28._0_4_;
        *(undefined4 *)(pcStack_240 + 4) = uVar2;
        *(undefined4 *)(pcStack_240 + 8) = uVar3;
        *(undefined4 *)(pcStack_240 + 0xc) = uVar4;
        *(undefined2 *)(pcStack_240 + 0x10) = s_visuals_world_esp__1806f7a28._16_2_;
        pcStack_240[0x12] = '\0';
        uVar6 = FUN_180073a70(apcStack_260,apcStack_260 + 4,&DAT_18058b61c);
        FUN_1801afe30(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,apcStack_260 + 4,"bomb_defused");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,apcStack_260 + 4,"defuser");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,apcStack_260 + 4,"defuser_in_time");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,apcStack_260 + 4,"defuser_too_late");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,apcStack_260 + 4,"damage_low");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,apcStack_260 + 4,"damage_high");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,apcStack_260 + 4,"bomb_colorize_effects");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,apcStack_260 + 4,"bomb_explosion");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,apcStack_260 + 4,"bomb_light");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,apcStack_260 + 4,"weapons");
        FUN_1801afe30(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,apcStack_260 + 4,"weapons_colorize_effects");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,apcStack_260 + 4,"weapon_effect");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,apcStack_260 + 4,"impact_effect");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,apcStack_260 + 4,"hostages");
        FUN_1801afe30(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,apcStack_260 + 4,"grenades");
        FUN_1801afe30(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,apcStack_260 + 4,"grenade_lethal");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,apcStack_260 + 4,"grenade_utility");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,apcStack_260 + 4,"item_exponent");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,apcStack_260 + 4,"item_thickness");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,apcStack_260 + 4,"item_points_thickness");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,apcStack_260 + 4,"item_shimmer");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,apcStack_260 + 4,"smoke_radius");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,apcStack_260 + 4,"smoke_radius_color");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,apcStack_260 + 4,"smoke_options");
        FUN_1801affc0(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,apcStack_260 + 4,"inferno_radius");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,apcStack_260 + 4,"inferno_lethal");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,apcStack_260 + 4,"inferno_safe");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,apcStack_260 + 4,"inferno_options");
        FUN_1801affc0(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,apcStack_260 + 4,"projectile_inferno");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,apcStack_260 + 4,"projectile_lethal");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,apcStack_260 + 4,"projectile_safe");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,apcStack_260 + 4,"colorize_smoke");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,apcStack_260 + 4,"smoke_ct");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,apcStack_260 + 4,"smoke_t");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,apcStack_260 + 4,"colorize_molotov");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,apcStack_260 + 4,"molotov_lethal");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,apcStack_260 + 4,"molotov_safe");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,apcStack_260 + 4,"disable_inferno_decals");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,apcStack_260 + 4,"colorize_explosion");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,apcStack_260 + 4,"explosion_color");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,apcStack_260 + 4,"effects");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,apcStack_260 + 4,"effects_color");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,apcStack_260 + 4,"effects_items");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar14 = 0;
        do {
          uVar6 = FUN_18004e4f0(&pcStack_160,uVar14);
          uVar8 = FUN_180073a70(&uStack_140,apcStack_260 + 4,"effects_item_color");
          uVar6 = FUN_180066820(apcStack_260,uVar8,uVar6);
          FUN_180162d70(uVar12,uVar6);
          FUN_18000f890(apcStack_260);
          FUN_18000f890(&uStack_140);
          FUN_18000f890(&pcStack_160);
          uVar14 = uVar14 + 1;
        } while (uVar14 < 5);
        uVar6 = FUN_180073a70(apcStack_260,apcStack_260 + 4,"effects_item_inherit");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,apcStack_260 + 4,"trajectory");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,apcStack_260 + 4,"trajectory_base");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,apcStack_260 + 4,"trajectory_hit");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,apcStack_260 + 4,"trajectory_team_damage");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,apcStack_260 + 4,"trajectory_exponent");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,apcStack_260 + 4,"trajectory_thickness");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,apcStack_260 + 4,"trajectory_points_thickness");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,apcStack_260 + 4,"trajectory_shimmer");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,apcStack_260 + 4,"trajectory_shimmer_strength");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,apcStack_260 + 4,"trajectory_thrown");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,apcStack_260 + 4,"trajectory_pin_pulled_only");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,apcStack_260 + 4,"trajectory_precise");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        pcStack_200 = (char *)0x0;
        uStack_1f8 = 0;
        pcStack_200 = (char *)FUN_18000fb70(0x20);
        uVar4 = s_visuals_world_hud__1806f7df8._12_4_;
        uVar3 = s_visuals_world_hud__1806f7df8._8_4_;
        uVar2 = s_visuals_world_hud__1806f7df8._4_4_;
        uStack_1f0 = 0x12;
        uStack_1e8 = 0x1f;
        *(undefined4 *)pcStack_200 = s_visuals_world_hud__1806f7df8._0_4_;
        *(undefined4 *)(pcStack_200 + 4) = uVar2;
        *(undefined4 *)(pcStack_200 + 8) = uVar3;
        *(undefined4 *)(pcStack_200 + 0xc) = uVar4;
        *(undefined2 *)(pcStack_200 + 0x10) = s_visuals_world_hud__1806f7df8._16_2_;
        pcStack_200[0x12] = '\0';
        uVar6 = FUN_180073a70(apcStack_260,&pcStack_200,"radar");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,&pcStack_200,"scope_overlay");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,&pcStack_200,"scope_color_mode");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,&pcStack_200,"scope_color");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,&pcStack_200,"scope_outer");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,&pcStack_200,"scope_inner");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,&pcStack_200,"scope_selection");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,&pcStack_200,"scope_rotation");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,&pcStack_200,"scope_offset");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,&pcStack_200,"scope_size");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,&pcStack_200,"scope_aspect");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,&pcStack_200,"scope_spread_scale");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,&pcStack_200,"scope_glow");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,&pcStack_200,"scope_glow_color");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,&pcStack_200,"inaccuracy");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,&pcStack_200,"inaccuracy_color");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,&pcStack_200,"inaccuracy_follow_recoil");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,&pcStack_200,"inaccuracy_only_in_scope");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,&pcStack_200,"inaccuracy_invert_fade");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,&pcStack_200,"inaccuracy_fade_offset");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,&pcStack_200,"preserve_notices");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,&pcStack_200,"hide_teammate_assists");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,&pcStack_200,"scoreboard_opacity");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,&pcStack_200,"scoreboard_width");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,&pcStack_200,"reveal_money");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,&pcStack_200,"reveal_ranks");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,&pcStack_200,"equipment");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,&pcStack_200,"equipment_items");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,&pcStack_200,"force_sniper_crosshair");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,&pcStack_200,"force_while_scoped");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,&pcStack_200,"force_while_c4");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,&pcStack_200,"hide_while_knife");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,&pcStack_200,"hide_while_grenade");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,&pcStack_200,"penetration");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,&pcStack_200,"penetration_base");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,&pcStack_200,"penetration_penetrable");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,&pcStack_200,"penetration_target");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        pcStack_1a0 = (char *)0x0;
        uStack_198 = 0;
        pcStack_1a0 = (char *)FUN_18000fb70(0x20);
        uVar4 = s_visuals_world_removals__1806f8148._12_4_;
        uVar3 = s_visuals_world_removals__1806f8148._8_4_;
        uVar2 = s_visuals_world_removals__1806f8148._4_4_;
        uStack_190 = 0x17;
        uStack_188 = 0x1f;
        *(undefined4 *)pcStack_1a0 = s_visuals_world_removals__1806f8148._0_4_;
        *(undefined4 *)(pcStack_1a0 + 4) = uVar2;
        *(undefined4 *)(pcStack_1a0 + 8) = uVar3;
        *(undefined4 *)(pcStack_1a0 + 0xc) = uVar4;
        *(ulonglong *)(pcStack_1a0 + 0xf) =
             CONCAT71(s_visuals_world_removals__1806f8148._16_7_,
                      s_visuals_world_removals__1806f8148[0xf]);
        pcStack_1a0[0x17] = '\0';
        uVar6 = FUN_180073a70(apcStack_260,&pcStack_1a0,"team_intro");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,&pcStack_1a0,"panorama_dots");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,&pcStack_1a0,"bottom_gradient");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,&pcStack_1a0,"damage_indicator");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,&pcStack_1a0,"server_ads");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,&pcStack_1a0,"flashbang");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,&pcStack_1a0,&DAT_1806e7598);
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,&pcStack_1a0,&DAT_1806f816c);
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,&pcStack_1a0,"carried_hostage");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,&pcStack_1a0,"post_processing");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,&pcStack_1a0,"water");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,&pcStack_1a0,"blood");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,&pcStack_1a0,"decals");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,&pcStack_1a0,"ragdolls");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,&pcStack_1a0,"gravity");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,&pcStack_1a0,"friction");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        pcStack_160 = (char *)0x0;
        uStack_158 = 0;
        pcStack_160 = (char *)FUN_18000fb70(0x20);
        uVar4 = s_visuals_world_hitmarker__1806f81f8._12_4_;
        uVar3 = s_visuals_world_hitmarker__1806f81f8._8_4_;
        uVar2 = s_visuals_world_hitmarker__1806f81f8._4_4_;
        uStack_150 = 0x18;
        uStack_148 = 0x1f;
        *(undefined4 *)pcStack_160 = s_visuals_world_hitmarker__1806f81f8._0_4_;
        *(undefined4 *)(pcStack_160 + 4) = uVar2;
        *(undefined4 *)(pcStack_160 + 8) = uVar3;
        *(undefined4 *)(pcStack_160 + 0xc) = uVar4;
        *(undefined8 *)(pcStack_160 + 0x10) = s_visuals_world_hitmarker__1806f81f8._16_8_;
        pcStack_160[0x18] = '\0';
        uVar6 = FUN_180073a70(apcStack_260,&pcStack_160,"marker_2d");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,&pcStack_160,"color_2d");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,&pcStack_160,"duration_2d");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,&pcStack_160,"marker_3d");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,&pcStack_160,"color_3d");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,&pcStack_160,"duration_3d");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,&pcStack_160,"damage");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,&pcStack_160,"color_damage");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,&pcStack_160,"duration_damage");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        pcStack_180 = (char *)0x0;
        uStack_178 = 0;
        pcStack_180 = (char *)FUN_18000fb70(0x20);
        uVar4 = s_visuals_world_tracers__1806f8290._8_4_;
        uVar3 = s_visuals_world_tracers__1806f8290._4_4_;
        uStack_170 = 0x16;
        uStack_168 = 0x1f;
        uVar2 = CONCAT22(s_visuals_world_tracers__1806f8290._14_2_,
                         s_visuals_world_tracers__1806f8290._12_2_);
        *(undefined4 *)pcStack_180 = s_visuals_world_tracers__1806f8290._0_4_;
        *(undefined4 *)(pcStack_180 + 4) = uVar3;
        *(undefined4 *)(pcStack_180 + 8) = uVar4;
        *(undefined4 *)(pcStack_180 + 0xc) = uVar2;
        *(ulonglong *)(pcStack_180 + 0xe) =
             CONCAT62(s_visuals_world_tracers__1806f8290._16_6_,
                      s_visuals_world_tracers__1806f8290._14_2_);
        pcStack_180[0x16] = '\0';
        uVar6 = FUN_180073a70(apcStack_260,&pcStack_180,"enemies");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,&pcStack_180,"enemies_color");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,&pcStack_180,"enemies_duration");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,&pcStack_180,"teammates");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,&pcStack_180,"teammates_color");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,&pcStack_180,"teammates_duration");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,&pcStack_180,"local");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,&pcStack_180,"local_color");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,&pcStack_180,"local_duration");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        uVar6 = FUN_180073a70(apcStack_260,&pcStack_180,"shared");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(apcStack_260);
        apcStack_260[0] = "enemies";
        apcStack_260[1] = "teammates";
        apcStack_260[2] = "local";
        apcStack_260[3] = "shared";
        uVar14 = 0;
        do {
          pcVar11 = apcStack_260[uVar14];
          uVar6 = FUN_180073a70(auStack_120,&pcStack_180,"style_");
          sVar9 = strlen(pcVar11);
          puVar10 = (undefined8 *)FUN_1800134a0(uVar6,pcVar11,sVar9);
          uStack_140 = *puVar10;
          uStack_138 = puVar10[1];
          uStack_130 = puVar10[2];
          uStack_128 = puVar10[3];
          puVar10[2] = 0;
          puVar10[3] = 0xf;
          *(undefined1 *)puVar10 = 0;
          puVar10 = (undefined8 *)FUN_1800134a0(&uStack_140,&DAT_1806e6f24,1);
          pcStack_1c0 = (char *)*puVar10;
          uStack_1b8 = puVar10[1];
          uStack_1b0 = puVar10[2];
          uStack_1a8 = puVar10[3];
          puVar10[2] = 0;
          puVar10[3] = 0xf;
          *(undefined1 *)puVar10 = 0;
          FUN_18000f890(&uStack_140);
          FUN_18000f890(auStack_120);
          uVar6 = FUN_180073a70(auStack_220,&pcStack_1c0,"use_3d_scale");
          FUN_180162d70(uVar12,uVar6);
          FUN_18000f890(auStack_220);
          uVar6 = FUN_180073a70(auStack_220,&pcStack_1c0,"glow_opacity");
          FUN_180162d70(uVar12,uVar6);
          FUN_18000f890(auStack_220);
          uVar6 = FUN_180073a70(auStack_220,&pcStack_1c0,"thickness");
          FUN_180162d70(uVar12,uVar6);
          FUN_18000f890(auStack_220);
          uVar6 = FUN_180073a70(auStack_220,&pcStack_1c0,"scale");
          FUN_180162d70(uVar12,uVar6);
          FUN_18000f890(auStack_220);
          uVar6 = FUN_180073a70(auStack_220,&pcStack_1c0,"glow_width");
          FUN_180162d70(uVar12,uVar6);
          FUN_18000f890(auStack_220);
          uVar6 = FUN_180073a70(auStack_220,&pcStack_1c0,"glow_radius");
          FUN_180162d70(uVar12,uVar6);
          FUN_18000f890(auStack_220);
          FUN_18000f890(&pcStack_1c0);
          uVar14 = uVar14 + 1;
        } while (uVar14 < 4);
        pcStack_1c0 = (char *)0x0;
        uStack_1b8 = 0;
        pcStack_1c0 = (char *)FUN_18000fb70(0x20);
        uVar4 = s_visuals_world_impacts__1806f8398._8_4_;
        uVar3 = s_visuals_world_impacts__1806f8398._4_4_;
        uStack_1b0 = 0x16;
        uStack_1a8 = 0x1f;
        uVar2 = CONCAT22(s_visuals_world_impacts__1806f8398._14_2_,
                         s_visuals_world_impacts__1806f8398._12_2_);
        *(undefined4 *)pcStack_1c0 = s_visuals_world_impacts__1806f8398._0_4_;
        *(undefined4 *)(pcStack_1c0 + 4) = uVar3;
        *(undefined4 *)(pcStack_1c0 + 8) = uVar4;
        *(undefined4 *)(pcStack_1c0 + 0xc) = uVar2;
        *(ulonglong *)(pcStack_1c0 + 0xe) =
             CONCAT62(s_visuals_world_impacts__1806f8398._16_6_,
                      s_visuals_world_impacts__1806f8398._14_2_);
        pcStack_1c0[0x16] = '\0';
        uVar6 = FUN_180073a70(auStack_220,&pcStack_1c0,"enabled");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(auStack_220);
        uVar6 = FUN_180073a70(auStack_220,&pcStack_1c0,"client");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(auStack_220);
        uVar6 = FUN_180073a70(auStack_220,&pcStack_1c0,"server");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(auStack_220);
        uVar6 = FUN_180073a70(auStack_220,&pcStack_1c0,"scale");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(auStack_220);
        uVar6 = FUN_180073a70(auStack_220,&pcStack_1c0,"rounding");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(auStack_220);
        uVar6 = FUN_180073a70(auStack_220,&pcStack_1c0,"fill_opacity");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(auStack_220);
        uVar6 = FUN_180073a70(auStack_220,&pcStack_1c0,"outline_opacity");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(auStack_220);
        uVar6 = FUN_180073a70(auStack_220,&pcStack_1c0,"glow_opacity");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(auStack_220);
        uVar6 = FUN_180073a70(auStack_220,&pcStack_1c0,&DAT_1806f83d8);
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(auStack_220);
        uVar6 = FUN_180073a70(auStack_220,&pcStack_1c0,"duration");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(auStack_220);
        uVar6 = FUN_180073a70(auStack_220,&pcStack_1c0,"sparks");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(auStack_220);
        uVar6 = FUN_180073a70(auStack_220,&pcStack_1c0,"sparks_color");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(auStack_220);
        uVar6 = FUN_180073a70(auStack_220,&pcStack_1c0,"sparks_glow");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(auStack_220);
        uVar6 = FUN_180073a70(auStack_220,&pcStack_1c0,"sparks_radius");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(auStack_220);
        uVar6 = FUN_180073a70(auStack_220,&pcStack_1c0,"sparks_count");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(auStack_220);
        uVar6 = FUN_180073a70(auStack_220,&pcStack_1c0,"sparks_spread");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(auStack_220);
        uVar6 = FUN_180073a70(auStack_220,&pcStack_1c0,"sparks_height");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(auStack_220);
        uVar6 = FUN_180073a70(auStack_220,&pcStack_1c0,"sparks_lifetime");
        FUN_180162d70(uVar12,uVar6);
        FUN_18000f890(auStack_220);
        if (0xf < uStack_1a8) {
          uVar14 = uStack_1a8 + 1;
          pcVar11 = pcStack_1c0;
          if (0xfff < uVar14) {
            pcVar11 = *(char **)(pcStack_1c0 + -8);
            if ((char *)0x1f < pcStack_1c0 + (-8 - (longlong)pcVar11)) {
              pcVar1 = (code *)swi(0x29);
              (*pcVar1)(5);
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            uVar14 = uStack_1a8 + 0x28;
          }
          thunk_FUN_1803d64e0(pcVar11,uVar14);
        }
        FUN_18000f890(&pcStack_180);
        FUN_18000f890(&pcStack_160);
        FUN_18000f890(&pcStack_1a0);
        FUN_18000f890(&pcStack_200);
        FUN_18000f890(apcStack_260 + 4);
        FUN_18000f890(&pcStack_1e0);
        return;
      }
      uVar13 = local_98 + 0x28;
    }
    uStack_e0 = 0x1801670e1;
    thunk_FUN_1803d64e0(pcVar11,uVar13);
  }
  return;
}



/* ===== 180167110 FUN_180167110 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180167110(undefined8 param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  size_t sVar7;
  undefined8 *puVar8;
  char *pcVar9;
  ulonglong uVar10;
  undefined1 auStack_1b8 [40];
  char *local_190 [4];
  char *local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined1 local_150 [32];
  char *local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 local_118;
  char *local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f8;
  char *local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  ulonglong uStack_d8;
  char *local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  char *local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  char *local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 local_50 [32];
  ulonglong local_30;
  
  local_30 = DAT_180919500 ^ (ulonglong)auStack_1b8;
  local_110 = (char *)0x0;
  uStack_108 = 0;
  local_110 = (char *)FUN_18000fb70(0x20);
  uVar4 = s_visuals_world_view__1806f7760._12_4_;
  uVar3 = s_visuals_world_view__1806f7760._8_4_;
  uVar2 = s_visuals_world_view__1806f7760._4_4_;
  local_100 = 0x13;
  local_f8 = 0x1f;
  *(undefined4 *)local_110 = s_visuals_world_view__1806f7760._0_4_;
  *(undefined4 *)(local_110 + 4) = uVar2;
  *(undefined4 *)(local_110 + 8) = uVar3;
  *(undefined4 *)(local_110 + 0xc) = uVar4;
  *(uint *)(local_110 + 0xf) =
       CONCAT31(s_visuals_world_view__1806f7760._16_3_,s_visuals_world_view__1806f7760[0xf]);
  local_110[0x13] = '\0';
  uVar5 = FUN_180073a70(local_190,&local_110,"override_fov");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,&local_110,&DAT_1806e0e18);
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,&local_110,"override_aspect");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,&local_110,"aspect_scaling");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,&local_110,"aspect_value");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,&local_110,"disable_landing_bob");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,&local_110,"scope_override_fov");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,&local_110,"scope_x1");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,&local_110,"scope_x2");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,&local_110,"instant_scope");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,&local_110,"show_viewmodel");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,&local_110,"force_viewmodel_fov");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,&local_110,"vm_override_fov");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,&local_110,"vm_fov");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,&local_110,"vm_override_position");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,&local_110,&DAT_1806f78b0);
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,&local_110,&DAT_1806f7884);
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,&local_110,&DAT_1806f788c);
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,&local_110,"vm_override_angles");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,&local_110,"vm_pitch");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,&local_110,"vm_yaw");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,&local_110,"vm_roll");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,&local_110,"vm_override_modifiers");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,&local_110,"vm_bobbing");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,&local_110,"vm_rotation_sway");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,&local_110,"vm_velocity_sway");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,&local_110,"vm_in_air_offset");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,&local_110,"vm_lower_weapon");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,&local_110,"vm_ladder_bob");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,&local_110,"force_third_person");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,&local_110,"third_person_disablers");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,&local_110,"third_person_distance");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,&local_110,"disable_overhead");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,&local_110,"unlock_spectating");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,&local_110,"visual_recoil");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  local_170 = (char *)0x0;
  uStack_168 = 0;
  local_170 = (char *)FUN_18000fb70(0x20);
  uVar4 = s_visuals_world_esp__1806f7a28._12_4_;
  uVar3 = s_visuals_world_esp__1806f7a28._8_4_;
  uVar2 = s_visuals_world_esp__1806f7a28._4_4_;
  local_160 = 0x12;
  local_158 = 0x1f;
  *(undefined4 *)local_170 = s_visuals_world_esp__1806f7a28._0_4_;
  *(undefined4 *)(local_170 + 4) = uVar2;
  *(undefined4 *)(local_170 + 8) = uVar3;
  *(undefined4 *)(local_170 + 0xc) = uVar4;
  *(undefined2 *)(local_170 + 0x10) = s_visuals_world_esp__1806f7a28._16_2_;
  local_170[0x12] = '\0';
  uVar5 = FUN_180073a70(local_190,local_190 + 4,&DAT_18058b61c);
  FUN_1801afe30(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,local_190 + 4,"bomb_defused");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,local_190 + 4,"defuser");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,local_190 + 4,"defuser_in_time");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,local_190 + 4,"defuser_too_late");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,local_190 + 4,"damage_low");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,local_190 + 4,"damage_high");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,local_190 + 4,"bomb_colorize_effects");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,local_190 + 4,"bomb_explosion");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,local_190 + 4,"bomb_light");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,local_190 + 4,"weapons");
  FUN_1801afe30(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,local_190 + 4,"weapons_colorize_effects");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,local_190 + 4,"weapon_effect");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,local_190 + 4,"impact_effect");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,local_190 + 4,"hostages");
  FUN_1801afe30(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,local_190 + 4,"grenades");
  FUN_1801afe30(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,local_190 + 4,"grenade_lethal");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,local_190 + 4,"grenade_utility");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,local_190 + 4,"item_exponent");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,local_190 + 4,"item_thickness");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,local_190 + 4,"item_points_thickness");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,local_190 + 4,"item_shimmer");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,local_190 + 4,"smoke_radius");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,local_190 + 4,"smoke_radius_color");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,local_190 + 4,"smoke_options");
  FUN_1801affc0(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,local_190 + 4,"inferno_radius");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,local_190 + 4,"inferno_lethal");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,local_190 + 4,"inferno_safe");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,local_190 + 4,"inferno_options");
  FUN_1801affc0(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,local_190 + 4,"projectile_inferno");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,local_190 + 4,"projectile_lethal");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,local_190 + 4,"projectile_safe");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,local_190 + 4,"colorize_smoke");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,local_190 + 4,"smoke_ct");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,local_190 + 4,"smoke_t");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,local_190 + 4,"colorize_molotov");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,local_190 + 4,"molotov_lethal");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,local_190 + 4,"molotov_safe");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,local_190 + 4,"disable_inferno_decals");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,local_190 + 4,"colorize_explosion");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,local_190 + 4,"explosion_color");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,local_190 + 4,"effects");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,local_190 + 4,"effects_color");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,local_190 + 4,"effects_items");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar10 = 0;
  do {
    uVar5 = FUN_18004e4f0(&local_90,uVar10);
    uVar6 = FUN_180073a70(&local_70,local_190 + 4,"effects_item_color");
    uVar5 = FUN_180066820(local_190,uVar6,uVar5);
    FUN_180162d70(param_1,uVar5);
    FUN_18000f890(local_190);
    FUN_18000f890(&local_70);
    FUN_18000f890(&local_90);
    uVar10 = uVar10 + 1;
  } while (uVar10 < 5);
  uVar5 = FUN_180073a70(local_190,local_190 + 4,"effects_item_inherit");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,local_190 + 4,"trajectory");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,local_190 + 4,"trajectory_base");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,local_190 + 4,"trajectory_hit");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,local_190 + 4,"trajectory_team_damage");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,local_190 + 4,"trajectory_exponent");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,local_190 + 4,"trajectory_thickness");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,local_190 + 4,"trajectory_points_thickness");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,local_190 + 4,"trajectory_shimmer");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,local_190 + 4,"trajectory_shimmer_strength");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,local_190 + 4,"trajectory_thrown");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,local_190 + 4,"trajectory_pin_pulled_only");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,local_190 + 4,"trajectory_precise");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  local_130 = (char *)0x0;
  uStack_128 = 0;
  local_130 = (char *)FUN_18000fb70(0x20);
  uVar4 = s_visuals_world_hud__1806f7df8._12_4_;
  uVar3 = s_visuals_world_hud__1806f7df8._8_4_;
  uVar2 = s_visuals_world_hud__1806f7df8._4_4_;
  local_120 = 0x12;
  local_118 = 0x1f;
  *(undefined4 *)local_130 = s_visuals_world_hud__1806f7df8._0_4_;
  *(undefined4 *)(local_130 + 4) = uVar2;
  *(undefined4 *)(local_130 + 8) = uVar3;
  *(undefined4 *)(local_130 + 0xc) = uVar4;
  *(undefined2 *)(local_130 + 0x10) = s_visuals_world_hud__1806f7df8._16_2_;
  local_130[0x12] = '\0';
  uVar5 = FUN_180073a70(local_190,&local_130,"radar");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,&local_130,"scope_overlay");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,&local_130,"scope_color_mode");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,&local_130,"scope_color");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,&local_130,"scope_outer");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,&local_130,"scope_inner");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,&local_130,"scope_selection");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,&local_130,"scope_rotation");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,&local_130,"scope_offset");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,&local_130,"scope_size");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,&local_130,"scope_aspect");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,&local_130,"scope_spread_scale");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,&local_130,"scope_glow");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,&local_130,"scope_glow_color");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,&local_130,"inaccuracy");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,&local_130,"inaccuracy_color");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,&local_130,"inaccuracy_follow_recoil");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,&local_130,"inaccuracy_only_in_scope");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,&local_130,"inaccuracy_invert_fade");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,&local_130,"inaccuracy_fade_offset");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,&local_130,"preserve_notices");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,&local_130,"hide_teammate_assists");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,&local_130,"scoreboard_opacity");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,&local_130,"scoreboard_width");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,&local_130,"reveal_money");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,&local_130,"reveal_ranks");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,&local_130,"equipment");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,&local_130,"equipment_items");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,&local_130,"force_sniper_crosshair");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,&local_130,"force_while_scoped");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,&local_130,"force_while_c4");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,&local_130,"hide_while_knife");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,&local_130,"hide_while_grenade");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,&local_130,"penetration");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,&local_130,"penetration_base");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,&local_130,"penetration_penetrable");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,&local_130,"penetration_target");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  local_d0 = (char *)0x0;
  uStack_c8 = 0;
  local_d0 = (char *)FUN_18000fb70(0x20);
  uVar4 = s_visuals_world_removals__1806f8148._12_4_;
  uVar3 = s_visuals_world_removals__1806f8148._8_4_;
  uVar2 = s_visuals_world_removals__1806f8148._4_4_;
  local_c0 = 0x17;
  local_b8 = 0x1f;
  *(undefined4 *)local_d0 = s_visuals_world_removals__1806f8148._0_4_;
  *(undefined4 *)(local_d0 + 4) = uVar2;
  *(undefined4 *)(local_d0 + 8) = uVar3;
  *(undefined4 *)(local_d0 + 0xc) = uVar4;
  *(ulonglong *)(local_d0 + 0xf) =
       CONCAT71(s_visuals_world_removals__1806f8148._16_7_,s_visuals_world_removals__1806f8148[0xf])
  ;
  local_d0[0x17] = '\0';
  uVar5 = FUN_180073a70(local_190,&local_d0,"team_intro");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,&local_d0,"panorama_dots");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,&local_d0,"bottom_gradient");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,&local_d0,"damage_indicator");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,&local_d0,"server_ads");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,&local_d0,"flashbang");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,&local_d0,&DAT_1806e7598);
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,&local_d0,&DAT_1806f816c);
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,&local_d0,"carried_hostage");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,&local_d0,"post_processing");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,&local_d0,"water");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,&local_d0,"blood");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,&local_d0,"decals");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,&local_d0,"ragdolls");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,&local_d0,"gravity");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,&local_d0,"friction");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  local_90 = (char *)0x0;
  uStack_88 = 0;
  local_90 = (char *)FUN_18000fb70(0x20);
  uVar4 = s_visuals_world_hitmarker__1806f81f8._12_4_;
  uVar3 = s_visuals_world_hitmarker__1806f81f8._8_4_;
  uVar2 = s_visuals_world_hitmarker__1806f81f8._4_4_;
  local_80 = 0x18;
  local_78 = 0x1f;
  *(undefined4 *)local_90 = s_visuals_world_hitmarker__1806f81f8._0_4_;
  *(undefined4 *)(local_90 + 4) = uVar2;
  *(undefined4 *)(local_90 + 8) = uVar3;
  *(undefined4 *)(local_90 + 0xc) = uVar4;
  *(undefined8 *)(local_90 + 0x10) = s_visuals_world_hitmarker__1806f81f8._16_8_;
  local_90[0x18] = '\0';
  uVar5 = FUN_180073a70(local_190,&local_90,"marker_2d");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,&local_90,"color_2d");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,&local_90,"duration_2d");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,&local_90,"marker_3d");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,&local_90,"color_3d");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,&local_90,"duration_3d");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,&local_90,"damage");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,&local_90,"color_damage");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,&local_90,"duration_damage");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  local_b0 = (char *)0x0;
  uStack_a8 = 0;
  local_b0 = (char *)FUN_18000fb70(0x20);
  uVar4 = s_visuals_world_tracers__1806f8290._8_4_;
  uVar3 = s_visuals_world_tracers__1806f8290._4_4_;
  local_a0 = 0x16;
  local_98 = 0x1f;
  uVar2 = CONCAT22(s_visuals_world_tracers__1806f8290._14_2_,
                   s_visuals_world_tracers__1806f8290._12_2_);
  *(undefined4 *)local_b0 = s_visuals_world_tracers__1806f8290._0_4_;
  *(undefined4 *)(local_b0 + 4) = uVar3;
  *(undefined4 *)(local_b0 + 8) = uVar4;
  *(undefined4 *)(local_b0 + 0xc) = uVar2;
  *(ulonglong *)(local_b0 + 0xe) =
       CONCAT62(s_visuals_world_tracers__1806f8290._16_6_,s_visuals_world_tracers__1806f8290._14_2_)
  ;
  local_b0[0x16] = '\0';
  uVar5 = FUN_180073a70(local_190,&local_b0,"enemies");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,&local_b0,"enemies_color");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,&local_b0,"enemies_duration");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,&local_b0,"teammates");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,&local_b0,"teammates_color");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,&local_b0,"teammates_duration");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,&local_b0,"local");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,&local_b0,"local_color");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,&local_b0,"local_duration");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  uVar5 = FUN_180073a70(local_190,&local_b0,"shared");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_190);
  local_190[0] = "enemies";
  local_190[1] = "teammates";
  local_190[2] = "local";
  local_190[3] = "shared";
  uVar10 = 0;
  do {
    pcVar9 = local_190[uVar10];
    uVar5 = FUN_180073a70(local_50,&local_b0,"style_");
    sVar7 = strlen(pcVar9);
    puVar8 = (undefined8 *)FUN_1800134a0(uVar5,pcVar9,sVar7);
    local_70 = *puVar8;
    uStack_68 = puVar8[1];
    local_60 = puVar8[2];
    uStack_58 = puVar8[3];
    puVar8[2] = 0;
    puVar8[3] = 0xf;
    *(undefined1 *)puVar8 = 0;
    puVar8 = (undefined8 *)FUN_1800134a0(&local_70,&DAT_1806e6f24,1);
    local_f0 = (char *)*puVar8;
    uStack_e8 = puVar8[1];
    local_e0 = puVar8[2];
    uStack_d8 = puVar8[3];
    puVar8[2] = 0;
    puVar8[3] = 0xf;
    *(undefined1 *)puVar8 = 0;
    FUN_18000f890(&local_70);
    FUN_18000f890(local_50);
    uVar5 = FUN_180073a70(local_150,&local_f0,"use_3d_scale");
    FUN_180162d70(param_1,uVar5);
    FUN_18000f890(local_150);
    uVar5 = FUN_180073a70(local_150,&local_f0,"glow_opacity");
    FUN_180162d70(param_1,uVar5);
    FUN_18000f890(local_150);
    uVar5 = FUN_180073a70(local_150,&local_f0,"thickness");
    FUN_180162d70(param_1,uVar5);
    FUN_18000f890(local_150);
    uVar5 = FUN_180073a70(local_150,&local_f0,"scale");
    FUN_180162d70(param_1,uVar5);
    FUN_18000f890(local_150);
    uVar5 = FUN_180073a70(local_150,&local_f0,"glow_width");
    FUN_180162d70(param_1,uVar5);
    FUN_18000f890(local_150);
    uVar5 = FUN_180073a70(local_150,&local_f0,"glow_radius");
    FUN_180162d70(param_1,uVar5);
    FUN_18000f890(local_150);
    FUN_18000f890(&local_f0);
    uVar10 = uVar10 + 1;
  } while (uVar10 < 4);
  local_f0 = (char *)0x0;
  uStack_e8 = 0;
  local_f0 = (char *)FUN_18000fb70(0x20);
  uVar4 = s_visuals_world_impacts__1806f8398._8_4_;
  uVar3 = s_visuals_world_impacts__1806f8398._4_4_;
  local_e0 = 0x16;
  uStack_d8 = 0x1f;
  uVar2 = CONCAT22(s_visuals_world_impacts__1806f8398._14_2_,
                   s_visuals_world_impacts__1806f8398._12_2_);
  *(undefined4 *)local_f0 = s_visuals_world_impacts__1806f8398._0_4_;
  *(undefined4 *)(local_f0 + 4) = uVar3;
  *(undefined4 *)(local_f0 + 8) = uVar4;
  *(undefined4 *)(local_f0 + 0xc) = uVar2;
  *(ulonglong *)(local_f0 + 0xe) =
       CONCAT62(s_visuals_world_impacts__1806f8398._16_6_,s_visuals_world_impacts__1806f8398._14_2_)
  ;
  local_f0[0x16] = '\0';
  uVar5 = FUN_180073a70(local_150,&local_f0,"enabled");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_150);
  uVar5 = FUN_180073a70(local_150,&local_f0,"client");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_150);
  uVar5 = FUN_180073a70(local_150,&local_f0,"server");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_150);
  uVar5 = FUN_180073a70(local_150,&local_f0,"scale");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_150);
  uVar5 = FUN_180073a70(local_150,&local_f0,"rounding");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_150);
  uVar5 = FUN_180073a70(local_150,&local_f0,"fill_opacity");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_150);
  uVar5 = FUN_180073a70(local_150,&local_f0,"outline_opacity");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_150);
  uVar5 = FUN_180073a70(local_150,&local_f0,"glow_opacity");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_150);
  uVar5 = FUN_180073a70(local_150,&local_f0,&DAT_1806f83d8);
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_150);
  uVar5 = FUN_180073a70(local_150,&local_f0,"duration");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_150);
  uVar5 = FUN_180073a70(local_150,&local_f0,"sparks");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_150);
  uVar5 = FUN_180073a70(local_150,&local_f0,"sparks_color");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_150);
  uVar5 = FUN_180073a70(local_150,&local_f0,"sparks_glow");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_150);
  uVar5 = FUN_180073a70(local_150,&local_f0,"sparks_radius");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_150);
  uVar5 = FUN_180073a70(local_150,&local_f0,"sparks_count");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_150);
  uVar5 = FUN_180073a70(local_150,&local_f0,"sparks_spread");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_150);
  uVar5 = FUN_180073a70(local_150,&local_f0,"sparks_height");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_150);
  uVar5 = FUN_180073a70(local_150,&local_f0,"sparks_lifetime");
  FUN_180162d70(param_1,uVar5);
  FUN_18000f890(local_150);
  if (0xf < uStack_d8) {
    uVar10 = uStack_d8 + 1;
    pcVar9 = local_f0;
    if (0xfff < uVar10) {
      pcVar9 = *(char **)(local_f0 + -8);
      if ((char *)0x1f < local_f0 + (-8 - (longlong)pcVar9)) {
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar10 = uStack_d8 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar9,uVar10);
  }
  FUN_18000f890(&local_b0);
  FUN_18000f890(&local_90);
  FUN_18000f890(&local_d0);
  FUN_18000f890(&local_130);
  FUN_18000f890(local_190 + 4);
  FUN_18000f890(&local_110);
  return;
}



/* ===== 1801695a0 FUN_1801695a0 ===== */

void FUN_1801695a0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  
  cVar1 = FUN_1801c2460();
  if (cVar1 != '\0') {
    FUN_1800f2db0(*param_1,param_2,param_3);
  }
  return;
}



/* ===== 1801695e0 FUN_1801695e0 ===== */

void FUN_1801695e0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  
  cVar1 = FUN_1801c2460();
  if (cVar1 != '\0') {
    FUN_180191850(*param_1,param_2,param_3);
  }
  return;
}



/* ===== 180169620 FUN_180169620 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180169620(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined1 local_48 [32];
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_68;
  cVar1 = FUN_1801c2460();
  if (cVar1 != '\0') {
    FUN_1800f2db0(*param_1,param_2,param_3);
  }
  uVar2 = FUN_180073a70(local_48,param_2,"_mode");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1800f2db0(*param_1,uVar2,param_3 + 4);
  }
  FUN_18000f890(local_48);
  return;
}



/* ===== 1801696b0 FUN_1801696b0 ===== */

void FUN_1801696b0(undefined8 *param_1,undefined8 param_2,char *param_3)

{
  undefined8 uVar1;
  char cVar2;
  size_t sVar3;
  char *_Str;
  
  cVar2 = FUN_1801c2460();
  if (cVar2 != '\0') {
    uVar1 = *param_1;
    FUN_1800f2cb0(uVar1,param_2);
    _Str = "false";
    if (*param_3 != '\0') {
      _Str = "true";
    }
    sVar3 = strlen(_Str);
    FUN_1800134a0(uVar1,_Str,sVar3);
  }
  return;
}



/* ===== 180169720 FUN_180169720 ===== */

void FUN_180169720(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  
  cVar1 = FUN_1801c2460();
  if (cVar1 != '\0') {
    FUN_1800f2e20(*param_1,param_2,param_3);
  }
  return;
}



/* ===== 180169760 FUN_180169760 ===== */

void FUN_180169760(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  
  cVar1 = FUN_1801c2460();
  if (cVar1 != '\0') {
    FUN_180191950(*param_1,param_2,param_3);
  }
  return;
}



/* ===== 1801697a0 FUN_1801697a0 ===== */

void FUN_1801697a0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  
  cVar1 = FUN_1801c2460();
  if (cVar1 != '\0') {
    FUN_1801919e0(*param_1,param_2,param_3);
  }
  return;
}



/* ===== 1801697e0 FUN_1801697e0 ===== */

void FUN_1801697e0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  
  cVar1 = FUN_1801c2460();
  if (cVar1 != '\0') {
    FUN_180191a70(*param_1,param_2,param_3);
  }
  return;
}



/* ===== 180169820 FUN_180169820 ===== */

void FUN_180169820(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  byte bVar1;
  undefined8 uVar2;
  char cVar3;
  ulonglong uVar4;
  
  cVar3 = FUN_1801c2460();
  if (cVar3 != '\0') {
    uVar2 = *param_1;
    FUN_1800f2cb0(uVar2,param_2);
    FUN_1800134a0(uVar2,&DAT_1806dfffc,1);
    uVar4 = 0;
    do {
      bVar1 = *(byte *)(uVar4 + param_3);
      if (bVar1 == 0) break;
      if ((bVar1 == 0x22) || (bVar1 == 0x5c)) {
        FUN_1800690a0(uVar2,0x5c);
      }
      if (0x1f < bVar1) {
        FUN_1800690a0(uVar2,bVar1);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < 0x20);
    FUN_1800134a0(uVar2,&DAT_1806dfffc,1);
  }
  return;
}



/* ===== 1801698d0 FUN_1801698d0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801698d0(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_98 [32];
  undefined1 local_78 [32];
  undefined1 local_58 [32];
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStack_98;
  uVar2 = FUN_180073a70(local_78,param_2,".esp.enabled");
  FUN_1801696b0(param_1,uVar2,param_3);
  FUN_18000f890(local_78);
  uVar2 = FUN_180073a70(local_78,param_2,".esp.box");
  FUN_1801696b0(param_1,uVar2,param_3 + 1);
  FUN_18000f890(local_78);
  uVar2 = FUN_180073a70(local_78,param_2,".esp.name");
  FUN_1801696b0(param_1,uVar2,param_3 + 2);
  FUN_18000f890(local_78);
  uVar2 = FUN_180073a70(local_78,param_2,".esp.icon");
  FUN_1801696b0(param_1,uVar2,param_3 + 3);
  FUN_18000f890(local_78);
  uVar2 = FUN_180073a70(local_78,param_2,".esp.distance");
  FUN_1801696b0(param_1,uVar2,param_3 + 4);
  FUN_18000f890(local_78);
  uVar2 = FUN_180073a70(local_78,param_2,".esp.timer");
  FUN_1801696b0(param_1,uVar2,param_3 + 5);
  FUN_18000f890(local_78);
  uVar2 = FUN_180073a70(local_78,param_2,".esp.damage");
  FUN_1801696b0(param_1,uVar2,param_3 + 6);
  FUN_18000f890(local_78);
  uVar2 = FUN_180073a70(local_78,param_2,".esp.color");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1801944c0(*param_1,uVar2,param_3 + 8);
  }
  FUN_18000f890(local_78);
  uVar2 = FUN_180073a70(local_78,param_2,".esp.max_distance");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1800f2e20(*param_1,uVar2,param_3 + 0x18);
  }
  FUN_18000f890(local_78);
  uVar2 = FUN_180073a70(local_58,param_2,".chams");
  uVar3 = FUN_180073a70(local_78,uVar2,".enabled");
  FUN_1801696b0(param_1,uVar3,param_3 + 0x1c);
  FUN_18000f890(local_78);
  uVar3 = FUN_180073a70(local_78,uVar2,".visible");
  FUN_1801c2ee0(param_1,uVar3,param_3 + 0x20);
  FUN_18000f890(local_78);
  uVar3 = FUN_180073a70(local_78,uVar2,".occluded");
  FUN_1801c2ee0(param_1,uVar3,param_3 + 0x38);
  FUN_18000f890(local_78);
  uVar3 = FUN_180073a70(local_78,uVar2,".overlay");
  FUN_1801c2ee0(param_1,uVar3,param_3 + 0x50);
  FUN_18000f890(local_78);
  uVar2 = FUN_180073a70(local_78,uVar2,".overlay_occluded");
  FUN_1801c2ee0(param_1,uVar2,param_3 + 0x68);
  FUN_18000f890(local_78);
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,".glow.enabled");
  FUN_1801696b0(param_1,uVar2,param_3 + 0x80);
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,".glow.color");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1801944c0(*param_1,uVar2,param_3 + 0x84);
  }
  FUN_18000f890(local_58);
  return;
}



/* ===== 180169c40 FUN_180169c40 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180169c40(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  size_t sVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  ulonglong uVar10;
  char *pcVar11;
  char *pcVar12;
  uint uVar13;
  longlong lVar14;
  int iVar15;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  longlong local_f0;
  ulonglong local_e8;
  undefined1 local_e0 [32];
  undefined1 local_c0 [32];
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
  
  local_40 = DAT_180919500 ^ (ulonglong)auStack_118;
  local_f8 = param_2;
  uVar4 = FUN_180073a70(&local_a0,param_2,".esp.enabled");
  FUN_1801696b0(param_1,uVar4,param_3);
  FUN_18000f890();
  local_e8 = 0;
  do {
    local_f0 = local_e8 * 0x118;
    lVar14 = local_e8 * 0x98 + param_3;
    pcVar11 = (&PTR_s_health_bar_1805e7de0)[local_e8];
    uVar4 = FUN_180073a70(local_60,param_2,".esp.item.");
    sVar5 = strlen(pcVar11);
    puVar6 = (undefined4 *)FUN_1800134a0(uVar4,pcVar11,sVar5);
    local_a0 = *puVar6;
    uStack_9c = puVar6[1];
    uStack_98 = puVar6[2];
    uStack_94 = puVar6[3];
    local_90 = puVar6[4];
    uStack_8c = puVar6[5];
    uStack_88 = puVar6[6];
    uStack_84 = puVar6[7];
    *(undefined1 *)puVar6 = 0;
    *(undefined8 *)(puVar6 + 4) = 0;
    *(undefined8 *)(puVar6 + 6) = 0xf;
    FUN_18000f890(local_60);
    uVar4 = FUN_180073a70(local_c0,&local_a0,".enabled");
    cVar3 = FUN_1801c2460(param_1,uVar4);
    if (cVar3 != '\0') {
      uVar7 = *param_1;
      FUN_1800f2cb0(uVar7,uVar4);
      pcVar11 = "false";
      if (*(char *)(lVar14 + 4) != '\0') {
        pcVar11 = "true";
      }
      sVar5 = strlen(pcVar11);
      FUN_1800134a0(uVar7,pcVar11,sVar5);
    }
    FUN_18000f890(local_c0);
    uVar4 = FUN_180073a70(local_c0,&local_a0,".side");
    cVar3 = FUN_1801c2460(param_1,uVar4);
    if (cVar3 != '\0') {
      FUN_1800f2db0(*param_1,uVar4,lVar14 + 8);
    }
    FUN_18000f890(local_c0);
    uVar4 = FUN_180073a70(local_c0,&local_a0,".position");
    cVar3 = FUN_1801c2460(param_1,uVar4);
    if (cVar3 != '\0') {
      FUN_1800f2db0(*param_1,uVar4,lVar14 + 0xc);
    }
    FUN_18000f890(local_c0);
    uVar4 = FUN_180073a70(local_c0,&local_a0);
    cVar3 = FUN_1801c2460(param_1,uVar4);
    if (cVar3 != '\0') {
      FUN_1800f2db0(*param_1,uVar4);
    }
    FUN_18000f890(local_c0);
    iVar15 = 0;
    iVar1 = *(int *)((longlong)&DAT_1805e7f10 + local_f0);
    if (0 < iVar1) {
      uVar10 = 0;
      iVar15 = 0;
      do {
        iVar9 = *(int *)((longlong)&DAT_1805e7f24 + uVar10 * 0x28 + local_f0) +
                *(int *)((longlong)&DAT_1805e7f20 + uVar10 * 0x28 + local_f0);
        if (iVar15 < iVar9) {
          iVar15 = iVar9;
        }
        uVar13 = (int)uVar10 + 1;
        uVar10 = (ulonglong)uVar13;
      } while ((int)uVar13 < iVar1);
    }
    if (1 < iVar1) {
      uVar4 = FUN_180073a70(local_c0,&local_a0,".color_mode");
      cVar3 = FUN_1801c2460(param_1,uVar4);
      if (cVar3 != '\0') {
        FUN_1800f2db0(*param_1,uVar4,lVar14 + 0x14);
      }
      FUN_18000f890(local_c0);
    }
    uVar10 = 0;
    if (iVar15 < 1) {
      iVar15 = 1;
    }
    if (0 < iVar15) {
      do {
        uVar4 = FUN_18003a390(local_e0,uVar10);
        uVar7 = FUN_180073a70(local_80,&local_a0,".color");
        uVar4 = FUN_180066820(local_c0,uVar7,uVar4);
        cVar3 = FUN_1801c2460(param_1,uVar4);
        if (cVar3 != '\0') {
          FUN_1801944c0(*param_1,uVar4,uVar10 * 0x10 + 0x18 + lVar14);
        }
        FUN_18000f890(local_c0);
        FUN_18000f890(local_80);
        FUN_18000f890(local_e0);
        uVar13 = (int)uVar10 + 1;
        uVar10 = (ulonglong)uVar13;
      } while ((int)uVar13 < iVar15);
    }
    lVar2 = local_f0;
    if (*(int *)((longlong)&DAT_1805e7eec + local_f0) == 0) {
      uVar4 = FUN_180073a70(local_e0,&local_a0,".background");
      cVar3 = FUN_1801c2460(param_1,uVar4);
      if (cVar3 != '\0') {
        uVar7 = *param_1;
        FUN_1800f2cb0(uVar7,uVar4);
        pcVar11 = "false";
        if (*(char *)(lVar14 + 0x78) != '\0') {
          pcVar11 = "true";
        }
        sVar5 = strlen(pcVar11);
        FUN_1800134a0(uVar7,pcVar11,sVar5);
      }
      FUN_18000f890(local_e0);
      uVar4 = FUN_180073a70(local_e0,&local_a0,".shadow");
      cVar3 = FUN_1801c2460(param_1,uVar4);
      if (cVar3 != '\0') {
        uVar7 = *param_1;
        FUN_1800f2cb0(uVar7,uVar4);
        pcVar11 = "false";
        if (*(char *)(lVar14 + 0x79) != '\0') {
          pcVar11 = "true";
        }
        sVar5 = strlen(pcVar11);
        FUN_1800134a0(uVar7,pcVar11,sVar5);
      }
      FUN_18000f890(local_e0);
      uVar4 = FUN_180073a70(local_e0,&local_a0,".shadow_color");
      cVar3 = FUN_1801c2460(param_1,uVar4);
      if (cVar3 != '\0') {
        FUN_1801944c0(*param_1,uVar4,lVar14 + 0x7c);
      }
      FUN_18000f890(local_e0);
      uVar4 = FUN_180073a70(local_e0,&local_a0,".format");
      cVar3 = FUN_1801c2460(param_1,uVar4);
      if (cVar3 != '\0') {
        FUN_1800f2db0(*param_1,uVar4,lVar14 + 0x8c);
      }
      FUN_18000f890(local_e0);
    }
    if (*(int *)((longlong)&DAT_1805e7eec + lVar2) - 1U < 2) {
      uVar4 = FUN_180073a70(local_e0,&local_a0,".font");
      cVar3 = FUN_1801c2460(param_1,uVar4);
      if (cVar3 != '\0') {
        FUN_1800f2db0(*param_1,uVar4,lVar14 + 0x90);
      }
      FUN_18000f890(local_e0);
      uVar4 = FUN_180073a70(local_e0,&local_a0,".case");
      cVar3 = FUN_1801c2460(param_1,uVar4);
      if (cVar3 != '\0') {
        FUN_1800f2db0(*param_1,uVar4,lVar14 + 0x94);
      }
      FUN_18000f890(local_e0);
    }
    if (*(int *)((longlong)&DAT_1805e7eec + lVar2) - 3U < 2) {
      uVar4 = FUN_180073a70(local_e0,&local_a0,".inverted");
      cVar3 = FUN_1801c2460(param_1,uVar4);
      if (cVar3 != '\0') {
        uVar7 = *param_1;
        FUN_1800f2cb0(uVar7,uVar4);
        pcVar11 = "false";
        if (*(char *)(lVar14 + 0x98) != '\0') {
          pcVar11 = "true";
        }
        sVar5 = strlen(pcVar11);
        FUN_1800134a0(uVar7,pcVar11,sVar5);
      }
      FUN_18000f890(local_e0);
    }
    FUN_18000f890(&local_a0);
    uVar4 = local_f8;
    local_e8 = local_e8 + 1;
    param_2 = local_f8;
  } while (local_e8 < 0x1d);
  uVar7 = FUN_180073a70(local_e0,local_f8,".esp.expected_damage");
  cVar3 = FUN_1801c2460(param_1,uVar7);
  if (cVar3 != '\0') {
    FUN_1800f2db0(*param_1,uVar7,param_3 + 0x113c);
  }
  FUN_18000f890(local_e0);
  uVar7 = FUN_180073a70(local_e0,uVar4,".esp.pulse_mode");
  cVar3 = FUN_1801c2460(param_1,uVar7);
  if (cVar3 != '\0') {
    FUN_1800f2db0(*param_1,uVar7,param_3 + 0x1140);
  }
  FUN_18000f890(local_e0);
  uVar10 = 0;
  do {
    uVar7 = FUN_18004e4f0(local_c0,uVar10);
    uVar8 = FUN_180073a70(local_80,uVar4,".esp.pulse_color");
    uVar7 = FUN_180066820(local_e0,uVar8,uVar7);
    cVar3 = FUN_1801c2460(param_1,uVar7);
    if (cVar3 != '\0') {
      FUN_1801944c0(*param_1,uVar7,uVar10 * 0x10 + 0x1144 + param_3);
    }
    FUN_18000f890(local_e0);
    FUN_18000f890(local_80);
    FUN_18000f890(local_c0);
    uVar10 = uVar10 + 1;
  } while (uVar10 < 3);
  uVar7 = FUN_180073a70(local_e0,uVar4,".esp.name_avatar");
  cVar3 = FUN_1801c2460(param_1,uVar7);
  if (cVar3 != '\0') {
    uVar8 = *param_1;
    FUN_1800f2cb0(uVar8,uVar7);
    pcVar11 = "false";
    if (*(char *)(param_3 + 0x1174) != '\0') {
      pcVar11 = "true";
    }
    sVar5 = strlen(pcVar11);
    FUN_1800134a0(uVar8,pcVar11,sVar5);
  }
  FUN_18000f890(local_e0);
  uVar7 = FUN_180073a70(local_e0,uVar4,".esp.icon_order0");
  cVar3 = FUN_1801c2460(param_1,uVar7);
  if (cVar3 != '\0') {
    FUN_1800f2db0(*param_1,uVar7,param_3 + 0x1178);
  }
  FUN_18000f890(local_e0);
  uVar7 = FUN_180073a70(local_e0,uVar4,".esp.icon_order1");
  cVar3 = FUN_1801c2460(param_1,uVar7);
  if (cVar3 != '\0') {
    FUN_1800f2db0(*param_1,uVar7,param_3 + 0x117c);
  }
  FUN_18000f890(local_e0);
  uVar7 = FUN_180073a70(local_e0,uVar4,".esp.icon_selection");
  cVar3 = FUN_1801c2460(param_1,uVar7);
  if (cVar3 != '\0') {
    FUN_1801940a0(*param_1,uVar7,param_3 + 0x1180);
  }
  FUN_18000f890(local_e0);
  uVar7 = FUN_180073a70(local_e0,uVar4,".esp.icon_dimming");
  cVar3 = FUN_1801c2460(param_1,uVar7);
  if (cVar3 != '\0') {
    FUN_180151da0(*param_1,uVar7,param_3 + 0x1182);
  }
  FUN_18000f890(local_e0);
  uVar7 = FUN_180073a70(local_e0,uVar4,".esp.icon_clip_rect");
  cVar3 = FUN_1801c2460(param_1,uVar7);
  if (cVar3 != '\0') {
    uVar8 = *param_1;
    FUN_1800f2cb0(uVar8,uVar7);
    pcVar11 = "false";
    if (*(char *)(param_3 + 0x1185) != '\0') {
      pcVar11 = "true";
    }
    sVar5 = strlen(pcVar11);
    FUN_1800134a0(uVar8,pcVar11,sVar5);
  }
  FUN_18000f890(local_e0);
  uVar7 = FUN_180073a70(local_e0,uVar4,".esp.icon_low_ammo");
  cVar3 = FUN_1801c2460(param_1,uVar7);
  if (cVar3 != '\0') {
    uVar8 = *param_1;
    FUN_1800f2cb0(uVar8,uVar7);
    pcVar11 = "false";
    if (*(char *)(param_3 + 0x1186) != '\0') {
      pcVar11 = "true";
    }
    sVar5 = strlen(pcVar11);
    FUN_1800134a0(uVar8,pcVar11,sVar5);
  }
  FUN_18000f890(local_e0);
  uVar7 = FUN_180073a70(local_e0,uVar4,".esp.icon_all_grenades");
  cVar3 = FUN_1801c2460(param_1,uVar7);
  if (cVar3 != '\0') {
    uVar8 = *param_1;
    FUN_1800f2cb0(uVar8,uVar7);
    pcVar11 = "false";
    if (*(char *)(param_3 + 0x1187) != '\0') {
      pcVar11 = "true";
    }
    sVar5 = strlen(pcVar11);
    FUN_1800134a0(uVar8,pcVar11,sVar5);
  }
  FUN_18000f890(local_e0);
  uVar7 = FUN_180073a70(local_e0,uVar4,".esp.icon_pin_pulled");
  cVar3 = FUN_1801c2460(param_1,uVar7);
  if (cVar3 != '\0') {
    FUN_1801944c0(*param_1,uVar7,param_3 + 0x1188);
  }
  FUN_18000f890(local_e0);
  uVar7 = FUN_180073a70(local_e0,uVar4,".esp.taser_in_hand");
  cVar3 = FUN_1801c2460(param_1,uVar7);
  if (cVar3 != '\0') {
    FUN_1801944c0(*param_1,uVar7,param_3 + 0x1198);
  }
  FUN_18000f890(local_e0);
  uVar7 = FUN_180073a70(local_e0,uVar4,".esp.offscreen_arrows");
  cVar3 = FUN_1801c2460(param_1,uVar7);
  if (cVar3 != '\0') {
    uVar8 = *param_1;
    FUN_1800f2cb0(uVar8,uVar7);
    pcVar11 = "false";
    if (*(char *)(param_3 + 0x11a8) != '\0') {
      pcVar11 = "true";
    }
    sVar5 = strlen(pcVar11);
    FUN_1800134a0(uVar8,pcVar11,sVar5);
  }
  FUN_18000f890(local_e0);
  uVar7 = FUN_180073a70(local_e0,uVar4,".esp.arrow_color");
  cVar3 = FUN_1801c2460(param_1,uVar7);
  if (cVar3 != '\0') {
    FUN_1801944c0(*param_1,uVar7,param_3 + 0x11ac);
  }
  FUN_18000f890(local_e0);
  uVar7 = FUN_180073a70(local_e0,uVar4,".esp.offscreen_arrow_size");
  cVar3 = FUN_1801c2460(param_1,uVar7);
  if (cVar3 != '\0') {
    FUN_1800f2db0(*param_1,uVar7,param_3 + 0x11bc);
  }
  FUN_18000f890(local_e0);
  uVar7 = FUN_180073a70(local_e0,uVar4,".esp.offscreen_arrow_radius");
  cVar3 = FUN_1801c2460(param_1,uVar7);
  if (cVar3 != '\0') {
    FUN_1800f2db0(*param_1,uVar7,param_3 + 0x11c0);
  }
  FUN_18000f890(local_e0);
  uVar7 = FUN_180073a70(local_e0,uVar4,".esp.sounds");
  cVar3 = FUN_1801c2460(param_1,uVar7);
  if (cVar3 != '\0') {
    uVar8 = *param_1;
    FUN_1800f2cb0(uVar8,uVar7);
    pcVar11 = "false";
    if (*(char *)(param_3 + 0x11c4) != '\0') {
      pcVar11 = "true";
    }
    sVar5 = strlen(pcVar11);
    FUN_1800134a0(uVar8,pcVar11,sVar5);
  }
  FUN_18000f890(local_e0);
  uVar4 = FUN_180073a70(local_e0,uVar4,".esp.sound_color");
  cVar3 = FUN_1801c2460(param_1,uVar4);
  if (cVar3 != '\0') {
    FUN_1801944c0(*param_1,uVar4,param_3 + 0x11c8);
  }
  FUN_18000f890(local_e0);
  uVar10 = 0;
  pcVar11 = "false";
  uVar4 = local_f8;
  do {
    lVar14 = uVar10 * 0x74;
    uVar7 = FUN_18004e4f0(local_80,uVar10);
    uVar8 = FUN_180073a70(local_e0,uVar4,".esp.custom");
    FUN_180066820(&local_a0,uVar8,uVar7);
    FUN_18000f890(local_e0);
    FUN_18000f890(local_80);
    uVar7 = FUN_180073a70(local_c0,&local_a0,&DAT_1806f6a6c);
    cVar3 = FUN_1801c2460(param_1,uVar7);
    if (cVar3 != '\0') {
      FUN_180194430(*param_1,uVar7,param_3 + 0x11d8 + lVar14);
    }
    FUN_18000f890(local_c0);
    if (*(char *)(lVar14 + 0x11d8 + param_3) == '\0') {
      FUN_18000f890(&local_a0);
    }
    else {
      uVar4 = FUN_180073a70(local_c0,&local_a0,".enabled");
      cVar3 = FUN_1801c2460(param_1,uVar4);
      if (cVar3 != '\0') {
        uVar7 = *param_1;
        FUN_1800f2cb0(uVar7,uVar4);
        pcVar12 = "false";
        if (*(char *)(lVar14 + 0x1218 + param_3) != '\0') {
          pcVar12 = "true";
        }
        sVar5 = strlen(pcVar12);
        FUN_1800134a0(uVar7,pcVar12,sVar5);
      }
      FUN_18000f890(local_c0);
      uVar4 = FUN_180073a70(local_c0,&local_a0,".side");
      cVar3 = FUN_1801c2460(param_1,uVar4);
      if (cVar3 != '\0') {
        FUN_1800f2db0(*param_1,uVar4,param_3 + 0x121c + lVar14);
      }
      FUN_18000f890(local_c0);
      uVar4 = FUN_180073a70(local_c0,&local_a0,".order");
      cVar3 = FUN_1801c2460(param_1,uVar4);
      if (cVar3 != '\0') {
        FUN_1800f2db0(*param_1,uVar4,param_3 + 0x1220 + lVar14);
      }
      FUN_18000f890(local_c0);
      uVar4 = FUN_180073a70(local_c0,&local_a0,".color");
      cVar3 = FUN_1801c2460(param_1,uVar4);
      if (cVar3 != '\0') {
        FUN_1801944c0(*param_1,uVar4,param_3 + 0x1224 + lVar14);
      }
      FUN_18000f890(local_c0);
      uVar4 = FUN_180073a70(local_c0,&local_a0,".second");
      cVar3 = FUN_1801c2460(param_1,uVar4);
      if (cVar3 != '\0') {
        FUN_1801944c0(*param_1,uVar4,param_3 + 0x1234 + lVar14);
      }
      FUN_18000f890(local_c0);
      uVar4 = FUN_180073a70(local_c0,&local_a0,".size");
      cVar3 = FUN_1801c2460(param_1,uVar4);
      if (cVar3 != '\0') {
        FUN_1800f2db0(*param_1,uVar4,param_3 + 0x1244 + lVar14);
      }
      FUN_18000f890(local_c0);
      uVar4 = FUN_180073a70(local_c0,&local_a0,".small");
      cVar3 = FUN_1801c2460(param_1,uVar4);
      if (cVar3 != '\0') {
        uVar7 = *param_1;
        FUN_1800f2cb0(uVar7,uVar4);
        pcVar12 = "false";
        if (*(char *)(lVar14 + 0x1248 + param_3) != '\0') {
          pcVar12 = "true";
        }
        sVar5 = strlen(pcVar12);
        FUN_1800134a0(uVar7,pcVar12,sVar5);
      }
      FUN_18000f890(local_c0);
      uVar4 = FUN_180073a70(local_c0,&local_a0,".text");
      cVar3 = FUN_1801c2460(param_1,uVar4);
      if (cVar3 != '\0') {
        uVar7 = *param_1;
        FUN_1800f2cb0(uVar7,uVar4);
        pcVar12 = "false";
        if (*(char *)(lVar14 + 0x1249 + param_3) != '\0') {
          pcVar12 = "true";
        }
        sVar5 = strlen(pcVar12);
        FUN_1800134a0(uVar7,pcVar12,sVar5);
      }
      FUN_18000f890(local_c0);
      FUN_18000f890(&local_a0);
      uVar4 = local_f8;
    }
    uVar10 = uVar10 + 1;
  } while (uVar10 < 0x10);
  uVar4 = FUN_180073a70(local_e0,uVar4,".glow.enabled");
  cVar3 = FUN_1801c2460(param_1,uVar4);
  if (cVar3 != '\0') {
    uVar7 = *param_1;
    FUN_1800f2cb0(uVar7,uVar4);
    if (*(char *)(param_3 + 0x1918) != '\0') {
      pcVar11 = "true";
    }
    sVar5 = strlen(pcVar11);
    FUN_1800134a0(uVar7,pcVar11,sVar5);
  }
  FUN_18000f890(local_e0);
  uVar4 = FUN_180073a70(local_e0,local_f8,".glow.color");
  cVar3 = FUN_1801c2460(param_1,uVar4);
  if (cVar3 != '\0') {
    FUN_1801944c0(*param_1,uVar4,param_3 + 0x191c);
  }
  FUN_18000f890(local_e0);
  return;
}



/* ===== 18016acd0 FUN_18016acd0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18016acd0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  size_t sVar7;
  char ****ppppcVar8;
  ulonglong uVar9;
  char *pcVar10;
  char *_Str;
  char *_Str_00;
  undefined1 auStack_88 [32];
  char ****local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_88;
  local_68 = (char ****)0x0;
  uStack_60 = 0;
  local_68 = (char ****)FUN_18000fb70(0x20);
  uVar5 = s_model_enemy_player_1806f6a70._12_4_;
  uVar4 = s_model_enemy_player_1806f6a70._8_4_;
  uVar3 = s_model_enemy_player_1806f6a70._4_4_;
  local_58 = 0x12;
  local_50 = 0x1f;
  *(undefined4 *)local_68 = s_model_enemy_player_1806f6a70._0_4_;
  *(undefined4 *)((longlong)local_68 + 4) = uVar3;
  *(undefined4 *)(local_68 + 1) = uVar4;
  *(undefined4 *)((longlong)local_68 + 0xc) = uVar5;
  *(undefined2 *)(local_68 + 2) = s_model_enemy_player_1806f6a70._16_2_;
  *(char *)((longlong)local_68 + 0x12) = '\0';
  FUN_18016c6b0(param_1,&local_68,param_2);
  if (0xf < local_50) {
    uVar9 = local_50 + 1;
    ppppcVar8 = local_68;
    if (0xfff < uVar9) {
      ppppcVar8 = (char ****)local_68[-1];
      if ((char *)0x1f < (char *)((longlong)local_68 + (-8 - (longlong)ppppcVar8)))
      goto LAB_18016bca5;
      uVar9 = local_50 + 0x28;
    }
    thunk_FUN_1803d64e0(ppppcVar8,uVar9);
  }
  local_68 = (char ****)0x0;
  uStack_60 = 0;
  local_68 = (char ****)FUN_18000fb70(0x20);
  uVar5 = s_model_enemy_behind_walls_1806f6a88._12_4_;
  uVar4 = s_model_enemy_behind_walls_1806f6a88._8_4_;
  uVar3 = s_model_enemy_behind_walls_1806f6a88._4_4_;
  local_58 = 0x18;
  local_50 = 0x1f;
  *(undefined4 *)local_68 = s_model_enemy_behind_walls_1806f6a88._0_4_;
  *(undefined4 *)((longlong)local_68 + 4) = uVar3;
  *(undefined4 *)(local_68 + 1) = uVar4;
  *(undefined4 *)((longlong)local_68 + 0xc) = uVar5;
  local_68[2] = (char ***)s_model_enemy_behind_walls_1806f6a88._16_8_;
  *(char *)(local_68 + 3) = '\0';
  FUN_18016c6b0(param_1,&local_68,param_2 + 0x58);
  if (0xf < local_50) {
    uVar9 = local_50 + 1;
    ppppcVar8 = local_68;
    if (0xfff < uVar9) {
      ppppcVar8 = (char ****)local_68[-1];
      if ((char *)0x1f < (char *)((longlong)local_68 + (-8 - (longlong)ppppcVar8)))
      goto LAB_18016bca5;
      uVar9 = local_50 + 0x28;
    }
    thunk_FUN_1803d64e0(ppppcVar8,uVar9);
  }
  local_68 = (char ****)0x0;
  uStack_60 = 0;
  local_68 = (char ****)FUN_18000fb70(0x20);
  uVar5 = s_model_enemy_on_shot_1806f6ae8._12_4_;
  uVar4 = s_model_enemy_on_shot_1806f6ae8._8_4_;
  uVar3 = s_model_enemy_on_shot_1806f6ae8._4_4_;
  local_58 = 0x13;
  local_50 = 0x1f;
  *(undefined4 *)local_68 = s_model_enemy_on_shot_1806f6ae8._0_4_;
  *(undefined4 *)((longlong)local_68 + 4) = uVar3;
  *(undefined4 *)(local_68 + 1) = uVar4;
  *(undefined4 *)((longlong)local_68 + 0xc) = uVar5;
  *(uint *)((longlong)local_68 + 0xf) =
       CONCAT31(s_model_enemy_on_shot_1806f6ae8._16_3_,s_model_enemy_on_shot_1806f6ae8[0xf]);
  *(char *)((longlong)local_68 + 0x13) = '\0';
  FUN_18016c6b0(param_1,&local_68,param_2 + 0xb0);
  if (0xf < local_50) {
    uVar9 = local_50 + 1;
    ppppcVar8 = local_68;
    if (0xfff < uVar9) {
      ppppcVar8 = (char ****)local_68[-1];
      if ((char *)0x1f < (char *)((longlong)local_68 + (-8 - (longlong)ppppcVar8)))
      goto LAB_18016bca5;
      uVar9 = local_50 + 0x28;
    }
    thunk_FUN_1803d64e0(ppppcVar8,uVar9);
  }
  local_68 = (char ****)0x0;
  uStack_60 = 0;
  local_68 = (char ****)FUN_18000fb70(0x20);
  uVar5 = s_model_enemy_on_shot_glow_1806f6b00._12_4_;
  uVar4 = s_model_enemy_on_shot_glow_1806f6b00._8_4_;
  uVar3 = s_model_enemy_on_shot_glow_1806f6b00._4_4_;
  local_58 = 0x18;
  local_50 = 0x1f;
  *(undefined4 *)local_68 = s_model_enemy_on_shot_glow_1806f6b00._0_4_;
  *(undefined4 *)((longlong)local_68 + 4) = uVar3;
  *(undefined4 *)(local_68 + 1) = uVar4;
  *(undefined4 *)((longlong)local_68 + 0xc) = uVar5;
  local_68[2] = (char ***)s_model_enemy_on_shot_glow_1806f6b00._16_8_;
  *(char *)(local_68 + 3) = '\0';
  FUN_18016cac0(param_1,&local_68,param_2 + 0x108);
  if (0xf < local_50) {
    uVar9 = local_50 + 1;
    ppppcVar8 = local_68;
    if (0xfff < uVar9) {
      ppppcVar8 = (char ****)local_68[-1];
      if ((char *)0x1f < (char *)((longlong)local_68 + (-8 - (longlong)ppppcVar8)))
      goto LAB_18016bca5;
      uVar9 = local_50 + 0x28;
    }
    thunk_FUN_1803d64e0(ppppcVar8,uVar9);
  }
  local_68 = (char ****)0x0;
  uStack_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_68 = (char ****)FUN_18000fb70(0x20);
  uVar5 = s_model_enemy_on_shot_duration_1806f6ab0._12_4_;
  uVar4 = s_model_enemy_on_shot_duration_1806f6ab0._8_4_;
  uVar3 = s_model_enemy_on_shot_duration_1806f6ab0._4_4_;
  local_58 = 0x1c;
  local_50 = 0x1f;
  *(undefined4 *)local_68 = s_model_enemy_on_shot_duration_1806f6ab0._0_4_;
  *(undefined4 *)((longlong)local_68 + 4) = uVar3;
  *(undefined4 *)(local_68 + 1) = uVar4;
  *(undefined4 *)((longlong)local_68 + 0xc) = uVar5;
  uVar5 = s_model_enemy_on_shot_duration_1806f6ab0._24_4_;
  uVar4 = s_model_enemy_on_shot_duration_1806f6ab0._20_4_;
  uVar3 = s_model_enemy_on_shot_duration_1806f6ab0._16_4_;
  *(undefined4 *)((longlong)local_68 + 0xc) = s_model_enemy_on_shot_duration_1806f6ab0._12_4_;
  *(undefined4 *)(local_68 + 2) = uVar3;
  *(undefined4 *)((longlong)local_68 + 0x14) = uVar4;
  *(undefined4 *)(local_68 + 3) = uVar5;
  *(char *)((longlong)local_68 + 0x1c) = '\0';
  cVar6 = FUN_1801c2460(param_1,&local_68);
  if (cVar6 != '\0') {
    FUN_1800f2e20(*param_1,&local_68,param_2 + 0x11c);
  }
  if (0xf < local_50) {
    uVar9 = local_50 + 1;
    ppppcVar8 = local_68;
    if (0xfff < uVar9) {
      ppppcVar8 = (char ****)local_68[-1];
      if ((char *)0x1f < (char *)((longlong)local_68 + (-8 - (longlong)ppppcVar8)))
      goto LAB_18016bca5;
      uVar9 = local_50 + 0x28;
    }
    thunk_FUN_1803d64e0(ppppcVar8,uVar9);
  }
  local_68 = (char ****)0x0;
  uStack_60 = 0;
  local_68 = (char ****)FUN_18000fb70(0x20);
  uVar5 = s_model_enemy_history_1806f6ad0._12_4_;
  uVar4 = s_model_enemy_history_1806f6ad0._8_4_;
  uVar3 = s_model_enemy_history_1806f6ad0._4_4_;
  local_58 = 0x13;
  local_50 = 0x1f;
  *(undefined4 *)local_68 = s_model_enemy_history_1806f6ad0._0_4_;
  *(undefined4 *)((longlong)local_68 + 4) = uVar3;
  *(undefined4 *)(local_68 + 1) = uVar4;
  *(undefined4 *)((longlong)local_68 + 0xc) = uVar5;
  *(uint *)((longlong)local_68 + 0xf) =
       CONCAT31(s_model_enemy_history_1806f6ad0._16_3_,s_model_enemy_history_1806f6ad0[0xf]);
  *(char *)((longlong)local_68 + 0x13) = '\0';
  FUN_18016c6b0(param_1,&local_68,param_2 + 0x120);
  if (0xf < local_50) {
    uVar9 = local_50 + 1;
    ppppcVar8 = local_68;
    if (0xfff < uVar9) {
      ppppcVar8 = (char ****)local_68[-1];
      if ((char *)0x1f < (char *)((longlong)local_68 + (-8 - (longlong)ppppcVar8)))
      goto LAB_18016bca5;
      uVar9 = local_50 + 0x28;
    }
    thunk_FUN_1803d64e0(ppppcVar8,uVar9);
  }
  local_68 = (char ****)0x0;
  uStack_60 = 0;
  local_68 = (char ****)FUN_18000fb70(0x20);
  uVar5 = s_model_enemy_history_glow_1806f6b60._12_4_;
  uVar4 = s_model_enemy_history_glow_1806f6b60._8_4_;
  uVar3 = s_model_enemy_history_glow_1806f6b60._4_4_;
  local_58 = 0x18;
  local_50 = 0x1f;
  *(undefined4 *)local_68 = s_model_enemy_history_glow_1806f6b60._0_4_;
  *(undefined4 *)((longlong)local_68 + 4) = uVar3;
  *(undefined4 *)(local_68 + 1) = uVar4;
  *(undefined4 *)((longlong)local_68 + 0xc) = uVar5;
  local_68[2] = (char ***)s_model_enemy_history_glow_1806f6b60._16_8_;
  *(char *)(local_68 + 3) = '\0';
  FUN_18016cac0(param_1,&local_68,param_2 + 0x178);
  if (0xf < local_50) {
    uVar9 = local_50 + 1;
    ppppcVar8 = local_68;
    if (0xfff < uVar9) {
      ppppcVar8 = (char ****)local_68[-1];
      if ((char *)0x1f < (char *)((longlong)local_68 + (-8 - (longlong)ppppcVar8)))
      goto LAB_18016bca5;
      uVar9 = local_50 + 0x28;
    }
    thunk_FUN_1803d64e0(ppppcVar8,uVar9);
  }
  local_68 = (char ****)0x0;
  uStack_60 = 0;
  local_68 = (char ****)FUN_18000fb70(0x20);
  uVar5 = s_model_enemy_ragdolls_1806f6b80._12_4_;
  uVar4 = s_model_enemy_ragdolls_1806f6b80._8_4_;
  uVar3 = s_model_enemy_ragdolls_1806f6b80._4_4_;
  local_58 = 0x14;
  local_50 = 0x1f;
  *(undefined4 *)local_68 = s_model_enemy_ragdolls_1806f6b80._0_4_;
  *(undefined4 *)((longlong)local_68 + 4) = uVar3;
  *(undefined4 *)(local_68 + 1) = uVar4;
  *(undefined4 *)((longlong)local_68 + 0xc) = uVar5;
  *(undefined4 *)(local_68 + 2) = s_model_enemy_ragdolls_1806f6b80._16_4_;
  *(char *)((longlong)local_68 + 0x14) = '\0';
  FUN_18016c6b0(param_1,&local_68,param_2 + 0x18c);
  if (0xf < local_50) {
    uVar9 = local_50 + 1;
    ppppcVar8 = local_68;
    if (0xfff < uVar9) {
      ppppcVar8 = (char ****)local_68[-1];
      if ((char *)0x1f < (char *)((longlong)local_68 + (-8 - (longlong)ppppcVar8)))
      goto LAB_18016bca5;
      uVar9 = local_50 + 0x28;
    }
    thunk_FUN_1803d64e0(ppppcVar8,uVar9);
  }
  local_68 = (char ****)0x0;
  uStack_60 = 0;
  local_68 = (char ****)FUN_18000fb70(0x20);
  uVar5 = s_model_enemy_ragdolls_glow_1806f6b20._12_4_;
  uVar4 = s_model_enemy_ragdolls_glow_1806f6b20._8_4_;
  uVar3 = s_model_enemy_ragdolls_glow_1806f6b20._4_4_;
  local_58 = 0x19;
  local_50 = 0x1f;
  *(undefined4 *)local_68 = s_model_enemy_ragdolls_glow_1806f6b20._0_4_;
  *(undefined4 *)((longlong)local_68 + 4) = uVar3;
  *(undefined4 *)(local_68 + 1) = uVar4;
  *(undefined4 *)((longlong)local_68 + 0xc) = uVar5;
  uVar5 = s_model_enemy_ragdolls_glow_1806f6b20._21_4_;
  uVar4 = s_model_enemy_ragdolls_glow_1806f6b20._17_4_;
  uVar3 = CONCAT13(s_model_enemy_ragdolls_glow_1806f6b20[0x10],
                   s_model_enemy_ragdolls_glow_1806f6b20._13_3_);
  *(uint *)((longlong)local_68 + 9) =
       CONCAT13(s_model_enemy_ragdolls_glow_1806f6b20[0xc],
                s_model_enemy_ragdolls_glow_1806f6b20._9_3_);
  *(undefined4 *)((longlong)local_68 + 0xd) = uVar3;
  *(undefined4 *)((longlong)local_68 + 0x11) = uVar4;
  *(undefined4 *)((longlong)local_68 + 0x15) = uVar5;
  *(char *)((longlong)local_68 + 0x19) = '\0';
  FUN_18016cac0(param_1,&local_68,param_2 + 0x1e4);
  if (0xf < local_50) {
    uVar9 = local_50 + 1;
    ppppcVar8 = local_68;
    if (0xfff < uVar9) {
      ppppcVar8 = (char ****)local_68[-1];
      if ((char *)0x1f < (char *)((longlong)local_68 + (-8 - (longlong)ppppcVar8)))
      goto LAB_18016bca5;
      uVar9 = local_50 + 0x28;
    }
    thunk_FUN_1803d64e0(ppppcVar8,uVar9);
  }
  local_68 = (char ****)0x0;
  uStack_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_68 = (char ****)FUN_18000fb70(0x20);
  uVar5 = s_model_enemy_ragdolls_visibility_1806f6b40._12_4_;
  uVar4 = s_model_enemy_ragdolls_visibility_1806f6b40._8_4_;
  uVar3 = s_model_enemy_ragdolls_visibility_1806f6b40._4_4_;
  local_58 = 0x1f;
  local_50 = 0x1f;
  *(undefined4 *)local_68 = s_model_enemy_ragdolls_visibility_1806f6b40._0_4_;
  *(undefined4 *)((longlong)local_68 + 4) = uVar3;
  *(undefined4 *)(local_68 + 1) = uVar4;
  *(undefined4 *)((longlong)local_68 + 0xc) = uVar5;
  uVar5 = s_model_enemy_ragdolls_visibility_1806f6b40._27_4_;
  uVar4 = s_model_enemy_ragdolls_visibility_1806f6b40._23_4_;
  uVar3 = s_model_enemy_ragdolls_visibility_1806f6b40._19_4_;
  *(uint *)((longlong)local_68 + 0xf) =
       CONCAT31(s_model_enemy_ragdolls_visibility_1806f6b40._16_3_,
                s_model_enemy_ragdolls_visibility_1806f6b40[0xf]);
  *(undefined4 *)((longlong)local_68 + 0x13) = uVar3;
  *(undefined4 *)((longlong)local_68 + 0x17) = uVar4;
  *(undefined4 *)((longlong)local_68 + 0x1b) = uVar5;
  *(char *)((longlong)local_68 + 0x1f) = '\0';
  cVar6 = FUN_1801c2460(param_1,&local_68);
  if (cVar6 != '\0') {
    FUN_1801940a0(*param_1,&local_68,param_2 + 0x1f8);
  }
  if (0xf < local_50) {
    uVar9 = local_50 + 1;
    ppppcVar8 = local_68;
    if (0xfff < uVar9) {
      ppppcVar8 = (char ****)local_68[-1];
      if ((char *)0x1f < (char *)((longlong)local_68 + (-8 - (longlong)ppppcVar8)))
      goto LAB_18016bca5;
      uVar9 = local_50 + 0x28;
    }
    thunk_FUN_1803d64e0(ppppcVar8,uVar9);
  }
  local_68 = (char ****)0x0;
  uStack_60 = 0;
  local_68 = (char ****)FUN_18000fb70(0x20);
  uVar5 = s_model_team_player_1806f6bd8._12_4_;
  uVar4 = s_model_team_player_1806f6bd8._8_4_;
  uVar3 = s_model_team_player_1806f6bd8._4_4_;
  local_58 = 0x11;
  local_50 = 0x1f;
  *(undefined4 *)local_68 = s_model_team_player_1806f6bd8._0_4_;
  *(undefined4 *)((longlong)local_68 + 4) = uVar3;
  *(undefined4 *)(local_68 + 1) = uVar4;
  *(undefined4 *)((longlong)local_68 + 0xc) = uVar5;
  *(char *)(local_68 + 2) = s_model_team_player_1806f6bd8[0x10];
  *(char *)((longlong)local_68 + 0x11) = '\0';
  FUN_18016c6b0(param_1,&local_68,param_2 + 0x1fc);
  if (0xf < local_50) {
    uVar9 = local_50 + 1;
    ppppcVar8 = local_68;
    if (0xfff < uVar9) {
      ppppcVar8 = (char ****)local_68[-1];
      if ((char *)0x1f < (char *)((longlong)local_68 + (-8 - (longlong)ppppcVar8)))
      goto LAB_18016bca5;
      uVar9 = local_50 + 0x28;
    }
    thunk_FUN_1803d64e0(ppppcVar8,uVar9);
  }
  local_68 = (char ****)0x0;
  uStack_60 = 0;
  local_68 = (char ****)FUN_18000fb70(0x20);
  uVar5 = s_model_team_behind_walls_1806f6bf0._12_4_;
  uVar4 = s_model_team_behind_walls_1806f6bf0._8_4_;
  uVar3 = s_model_team_behind_walls_1806f6bf0._4_4_;
  local_58 = 0x17;
  local_50 = 0x1f;
  *(undefined4 *)local_68 = s_model_team_behind_walls_1806f6bf0._0_4_;
  *(undefined4 *)((longlong)local_68 + 4) = uVar3;
  *(undefined4 *)(local_68 + 1) = uVar4;
  *(undefined4 *)((longlong)local_68 + 0xc) = uVar5;
  *(ulonglong *)((longlong)local_68 + 0xf) =
       CONCAT71(s_model_team_behind_walls_1806f6bf0._16_7_,s_model_team_behind_walls_1806f6bf0[0xf])
  ;
  *(char *)((longlong)local_68 + 0x17) = '\0';
  FUN_18016c6b0(param_1,&local_68,param_2 + 0x254);
  if (0xf < local_50) {
    uVar9 = local_50 + 1;
    ppppcVar8 = local_68;
    if (0xfff < uVar9) {
      ppppcVar8 = (char ****)local_68[-1];
      if ((char *)0x1f < (char *)((longlong)local_68 + (-8 - (longlong)ppppcVar8)))
      goto LAB_18016bca5;
      uVar9 = local_50 + 0x28;
    }
    thunk_FUN_1803d64e0(ppppcVar8,uVar9);
  }
  local_68 = (char ****)0x0;
  uStack_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_68 = (char ****)FUN_18000fb70(0x30);
  uVar5 = s_model_team_disable_model_renderi_1806f6b98._12_4_;
  uVar4 = s_model_team_disable_model_renderi_1806f6b98._8_4_;
  uVar3 = s_model_team_disable_model_renderi_1806f6b98._4_4_;
  local_58 = 0x22;
  local_50 = 0x2f;
  *(undefined4 *)local_68 = s_model_team_disable_model_renderi_1806f6b98._0_4_;
  *(undefined4 *)((longlong)local_68 + 4) = uVar3;
  *(undefined4 *)(local_68 + 1) = uVar4;
  *(undefined4 *)((longlong)local_68 + 0xc) = uVar5;
  uVar5 = s_model_team_disable_model_renderi_1806f6b98._28_4_;
  uVar4 = s_model_team_disable_model_renderi_1806f6b98._24_4_;
  uVar3 = s_model_team_disable_model_renderi_1806f6b98._20_4_;
  *(undefined4 *)(local_68 + 2) = s_model_team_disable_model_renderi_1806f6b98._16_4_;
  *(undefined4 *)((longlong)local_68 + 0x14) = uVar3;
  *(undefined4 *)(local_68 + 3) = uVar4;
  *(undefined4 *)((longlong)local_68 + 0x1c) = uVar5;
  *(undefined2 *)(local_68 + 4) = s_model_team_disable_model_renderi_1806f6b98._32_2_;
  *(char *)((longlong)local_68 + 0x22) = '\0';
  cVar6 = FUN_1801c2460(param_1,&local_68);
  _Str_00 = ",\n";
  _Str = "false";
  if (cVar6 != '\0') {
    lVar1 = *param_1;
    pcVar10 = ",\n";
    if (*(char *)(lVar1 + 0x20) != '\0') {
      pcVar10 = "{\n";
    }
    sVar7 = strlen(pcVar10);
    FUN_1800134a0(lVar1,pcVar10,sVar7);
    *(undefined1 *)(lVar1 + 0x20) = 0;
    FUN_1800134a0(lVar1,&DAT_1806f2ad0,3);
    ppppcVar8 = (char ****)&local_68;
    if (0xf < local_50) {
      ppppcVar8 = local_68;
    }
    FUN_1800134a0(lVar1,ppppcVar8,local_58);
    FUN_1800134a0(lVar1,&DAT_1806f2b04,3);
    pcVar10 = "false";
    if (*(char *)(param_2 + 0x2ac) != '\0') {
      pcVar10 = "true";
    }
    sVar7 = strlen(pcVar10);
    FUN_1800134a0(lVar1,pcVar10,sVar7);
  }
  if (0xf < local_50) {
    uVar9 = local_50 + 1;
    ppppcVar8 = local_68;
    if (0xfff < uVar9) {
      ppppcVar8 = (char ****)local_68[-1];
      if ((char *)0x1f < (char *)((longlong)local_68 + (-8 - (longlong)ppppcVar8)))
      goto LAB_18016bca5;
      uVar9 = local_50 + 0x28;
    }
    thunk_FUN_1803d64e0(ppppcVar8,uVar9);
  }
  local_68 = (char ****)0x0;
  uStack_60 = 0;
  local_68 = (char ****)FUN_18000fb70(0x20);
  uVar5 = s_model_local_player_1806f6bc0._12_4_;
  uVar4 = s_model_local_player_1806f6bc0._8_4_;
  uVar3 = s_model_local_player_1806f6bc0._4_4_;
  local_58 = 0x12;
  local_50 = 0x1f;
  *(undefined4 *)local_68 = s_model_local_player_1806f6bc0._0_4_;
  *(undefined4 *)((longlong)local_68 + 4) = uVar3;
  *(undefined4 *)(local_68 + 1) = uVar4;
  *(undefined4 *)((longlong)local_68 + 0xc) = uVar5;
  *(undefined2 *)(local_68 + 2) = s_model_local_player_1806f6bc0._16_2_;
  *(char *)((longlong)local_68 + 0x12) = '\0';
  FUN_18016c6b0(param_1,&local_68,param_2 + 0x2b0);
  if (0xf < local_50) {
    uVar9 = local_50 + 1;
    ppppcVar8 = local_68;
    if (0xfff < uVar9) {
      ppppcVar8 = (char ****)local_68[-1];
      if ((char *)0x1f < (char *)((longlong)local_68 + (-8 - (longlong)ppppcVar8)))
      goto LAB_18016bca5;
      uVar9 = local_50 + 0x28;
    }
    thunk_FUN_1803d64e0(ppppcVar8,uVar9);
  }
  local_68 = (char ****)0x0;
  uStack_60 = 0;
  local_68 = (char ****)FUN_18000fb70(0x20);
  uVar5 = s_model_local_player_overlay_1806f6c40._4_4_;
  local_58 = 0x1a;
  local_50 = 0x1f;
  uVar3 = CONCAT22(s_model_local_player_overlay_1806f6c40._10_2_,
                   s_model_local_player_overlay_1806f6c40._8_2_);
  uVar4 = CONCAT22(s_model_local_player_overlay_1806f6c40._14_2_,
                   s_model_local_player_overlay_1806f6c40._12_2_);
  *(undefined4 *)local_68 = s_model_local_player_overlay_1806f6c40._0_4_;
  *(undefined4 *)((longlong)local_68 + 4) = uVar5;
  *(undefined4 *)(local_68 + 1) = uVar3;
  *(undefined4 *)((longlong)local_68 + 0xc) = uVar4;
  uVar5 = s_model_local_player_overlay_1806f6c40._22_4_;
  uVar4 = s_model_local_player_overlay_1806f6c40._18_4_;
  uVar3 = CONCAT22(s_model_local_player_overlay_1806f6c40._16_2_,
                   s_model_local_player_overlay_1806f6c40._14_2_);
  *(uint *)((longlong)local_68 + 10) =
       CONCAT22(s_model_local_player_overlay_1806f6c40._12_2_,
                s_model_local_player_overlay_1806f6c40._10_2_);
  *(undefined4 *)((longlong)local_68 + 0xe) = uVar3;
  *(undefined4 *)((longlong)local_68 + 0x12) = uVar4;
  *(undefined4 *)((longlong)local_68 + 0x16) = uVar5;
  *(char *)((longlong)local_68 + 0x1a) = '\0';
  FUN_18016c6b0(param_1,&local_68,param_2 + 0x308);
  if (0xf < local_50) {
    uVar9 = local_50 + 1;
    ppppcVar8 = local_68;
    if (0xfff < uVar9) {
      ppppcVar8 = (char ****)local_68[-1];
      if ((char *)0x1f < (char *)((longlong)local_68 + (-8 - (longlong)ppppcVar8)))
      goto LAB_18016bca5;
      uVar9 = local_50 + 0x28;
    }
    thunk_FUN_1803d64e0(ppppcVar8,uVar9);
  }
  local_68 = (char ****)0x0;
  uStack_60 = 0;
  local_68 = (char ****)FUN_18000fb70(0x20);
  uVar5 = s_model_local_skeleton_1806f6c60._12_4_;
  uVar4 = s_model_local_skeleton_1806f6c60._8_4_;
  uVar3 = s_model_local_skeleton_1806f6c60._4_4_;
  local_58 = 0x14;
  local_50 = 0x1f;
  *(undefined4 *)local_68 = s_model_local_skeleton_1806f6c60._0_4_;
  *(undefined4 *)((longlong)local_68 + 4) = uVar3;
  *(undefined4 *)(local_68 + 1) = uVar4;
  *(undefined4 *)((longlong)local_68 + 0xc) = uVar5;
  *(undefined4 *)(local_68 + 2) = s_model_local_skeleton_1806f6c60._16_4_;
  *(char *)((longlong)local_68 + 0x14) = '\0';
  FUN_18016cac0(param_1,&local_68,param_2 + 0x360);
  if (0xf < local_50) {
    uVar9 = local_50 + 1;
    ppppcVar8 = local_68;
    if (0xfff < uVar9) {
      ppppcVar8 = (char ****)local_68[-1];
      if ((char *)0x1f < (char *)((longlong)local_68 + (-8 - (longlong)ppppcVar8)))
      goto LAB_18016bca5;
      uVar9 = local_50 + 0x28;
    }
    thunk_FUN_1803d64e0(ppppcVar8,uVar9);
  }
  local_68 = (char ****)0x0;
  uStack_60 = 0;
  local_68 = (char ****)FUN_18000fb70(0x20);
  uVar5 = s_model_local_arms_1806f6c08._12_4_;
  uVar4 = s_model_local_arms_1806f6c08._8_4_;
  uVar3 = s_model_local_arms_1806f6c08._4_4_;
  local_58 = 0x10;
  local_50 = 0x1f;
  *(undefined4 *)local_68 = s_model_local_arms_1806f6c08._0_4_;
  *(undefined4 *)((longlong)local_68 + 4) = uVar3;
  *(undefined4 *)(local_68 + 1) = uVar4;
  *(undefined4 *)((longlong)local_68 + 0xc) = uVar5;
  *(char *)(local_68 + 2) = '\0';
  FUN_18016c6b0(param_1,&local_68,param_2 + 0x374);
  if (0xf < local_50) {
    uVar9 = local_50 + 1;
    ppppcVar8 = local_68;
    if (0xfff < uVar9) {
      ppppcVar8 = (char ****)local_68[-1];
      if ((char *)0x1f < (char *)((longlong)local_68 + (-8 - (longlong)ppppcVar8)))
      goto LAB_18016bca5;
      uVar9 = local_50 + 0x28;
    }
    thunk_FUN_1803d64e0(ppppcVar8,uVar9);
  }
  local_68 = (char ****)0x0;
  uStack_60 = 0;
  local_68 = (char ****)FUN_18000fb70(0x20);
  uVar5 = s_model_local_arms_overlay_1806f6c20._12_4_;
  uVar4 = s_model_local_arms_overlay_1806f6c20._8_4_;
  uVar3 = s_model_local_arms_overlay_1806f6c20._4_4_;
  local_58 = 0x18;
  local_50 = 0x1f;
  *(undefined4 *)local_68 = s_model_local_arms_overlay_1806f6c20._0_4_;
  *(undefined4 *)((longlong)local_68 + 4) = uVar3;
  *(undefined4 *)(local_68 + 1) = uVar4;
  *(undefined4 *)((longlong)local_68 + 0xc) = uVar5;
  local_68[2] = (char ***)s_model_local_arms_overlay_1806f6c20._16_8_;
  *(char *)(local_68 + 3) = '\0';
  FUN_18016c6b0(param_1,&local_68,param_2 + 0x3cc);
  if (0xf < local_50) {
    uVar9 = local_50 + 1;
    ppppcVar8 = local_68;
    if (0xfff < uVar9) {
      ppppcVar8 = (char ****)local_68[-1];
      if ((char *)0x1f < (char *)((longlong)local_68 + (-8 - (longlong)ppppcVar8)))
      goto LAB_18016bca5;
      uVar9 = local_50 + 0x28;
    }
    thunk_FUN_1803d64e0(ppppcVar8,uVar9);
  }
  local_68 = (char ****)0x0;
  uStack_60 = 0;
  local_68 = (char ****)FUN_18000fb70(0x20);
  uVar5 = s_model_local_gloves_1806f6cb0._12_4_;
  uVar4 = s_model_local_gloves_1806f6cb0._8_4_;
  uVar3 = s_model_local_gloves_1806f6cb0._4_4_;
  local_58 = 0x12;
  local_50 = 0x1f;
  *(undefined4 *)local_68 = s_model_local_gloves_1806f6cb0._0_4_;
  *(undefined4 *)((longlong)local_68 + 4) = uVar3;
  *(undefined4 *)(local_68 + 1) = uVar4;
  *(undefined4 *)((longlong)local_68 + 0xc) = uVar5;
  *(undefined2 *)(local_68 + 2) = s_model_local_gloves_1806f6cb0._16_2_;
  *(char *)((longlong)local_68 + 0x12) = '\0';
  FUN_18016c6b0(param_1,&local_68,param_2 + 0x424);
  if (0xf < local_50) {
    uVar9 = local_50 + 1;
    ppppcVar8 = local_68;
    if (0xfff < uVar9) {
      ppppcVar8 = (char ****)local_68[-1];
      if ((char *)0x1f < (char *)((longlong)local_68 + (-8 - (longlong)ppppcVar8)))
      goto LAB_18016bca5;
      uVar9 = local_50 + 0x28;
    }
    thunk_FUN_1803d64e0(ppppcVar8,uVar9);
  }
  local_68 = (char ****)0x0;
  uStack_60 = 0;
  local_68 = (char ****)FUN_18000fb70(0x20);
  uVar5 = s_model_local_gloves_overlay_1806f6cc8._4_4_;
  local_58 = 0x1a;
  local_50 = 0x1f;
  uVar3 = CONCAT22(s_model_local_gloves_overlay_1806f6cc8._10_2_,
                   s_model_local_gloves_overlay_1806f6cc8._8_2_);
  uVar4 = CONCAT22(s_model_local_gloves_overlay_1806f6cc8._14_2_,
                   s_model_local_gloves_overlay_1806f6cc8._12_2_);
  *(undefined4 *)local_68 = s_model_local_gloves_overlay_1806f6cc8._0_4_;
  *(undefined4 *)((longlong)local_68 + 4) = uVar5;
  *(undefined4 *)(local_68 + 1) = uVar3;
  *(undefined4 *)((longlong)local_68 + 0xc) = uVar4;
  uVar5 = s_model_local_gloves_overlay_1806f6cc8._22_4_;
  uVar4 = s_model_local_gloves_overlay_1806f6cc8._18_4_;
  uVar3 = CONCAT22(s_model_local_gloves_overlay_1806f6cc8._16_2_,
                   s_model_local_gloves_overlay_1806f6cc8._14_2_);
  *(uint *)((longlong)local_68 + 10) =
       CONCAT22(s_model_local_gloves_overlay_1806f6cc8._12_2_,
                s_model_local_gloves_overlay_1806f6cc8._10_2_);
  *(undefined4 *)((longlong)local_68 + 0xe) = uVar3;
  *(undefined4 *)((longlong)local_68 + 0x12) = uVar4;
  *(undefined4 *)((longlong)local_68 + 0x16) = uVar5;
  *(char *)((longlong)local_68 + 0x1a) = '\0';
  FUN_18016c6b0(param_1,&local_68,param_2 + 0x47c);
  if (0xf < local_50) {
    uVar9 = local_50 + 1;
    ppppcVar8 = local_68;
    if (0xfff < uVar9) {
      ppppcVar8 = (char ****)local_68[-1];
      if ((char *)0x1f < (char *)((longlong)local_68 + (-8 - (longlong)ppppcVar8)))
      goto LAB_18016bca5;
      uVar9 = local_50 + 0x28;
    }
    thunk_FUN_1803d64e0(ppppcVar8,uVar9);
  }
  local_68 = (char ****)0x0;
  uStack_60 = 0;
  local_68 = (char ****)FUN_18000fb70(0x20);
  uVar5 = s_model_local_weapon_1806f6c78._12_4_;
  uVar4 = s_model_local_weapon_1806f6c78._8_4_;
  uVar3 = s_model_local_weapon_1806f6c78._4_4_;
  local_58 = 0x12;
  local_50 = 0x1f;
  *(undefined4 *)local_68 = s_model_local_weapon_1806f6c78._0_4_;
  *(undefined4 *)((longlong)local_68 + 4) = uVar3;
  *(undefined4 *)(local_68 + 1) = uVar4;
  *(undefined4 *)((longlong)local_68 + 0xc) = uVar5;
  *(undefined2 *)(local_68 + 2) = s_model_local_weapon_1806f6c78._16_2_;
  *(char *)((longlong)local_68 + 0x12) = '\0';
  FUN_18016c6b0(param_1,&local_68,param_2 + 0x4d4);
  if (0xf < local_50) {
    uVar9 = local_50 + 1;
    ppppcVar8 = local_68;
    if (0xfff < uVar9) {
      ppppcVar8 = (char ****)local_68[-1];
      if ((char *)0x1f < (char *)((longlong)local_68 + (-8 - (longlong)ppppcVar8)))
      goto LAB_18016bca5;
      uVar9 = local_50 + 0x28;
    }
    thunk_FUN_1803d64e0(ppppcVar8,uVar9);
  }
  local_68 = (char ****)0x0;
  uStack_60 = 0;
  local_68 = (char ****)FUN_18000fb70(0x20);
  uVar5 = s_model_local_weapon_overlay_1806f6c90._4_4_;
  local_58 = 0x1a;
  local_50 = 0x1f;
  uVar3 = CONCAT22(s_model_local_weapon_overlay_1806f6c90._10_2_,
                   s_model_local_weapon_overlay_1806f6c90._8_2_);
  uVar4 = CONCAT22(s_model_local_weapon_overlay_1806f6c90._14_2_,
                   s_model_local_weapon_overlay_1806f6c90._12_2_);
  *(undefined4 *)local_68 = s_model_local_weapon_overlay_1806f6c90._0_4_;
  *(undefined4 *)((longlong)local_68 + 4) = uVar5;
  *(undefined4 *)(local_68 + 1) = uVar3;
  *(undefined4 *)((longlong)local_68 + 0xc) = uVar4;
  uVar5 = s_model_local_weapon_overlay_1806f6c90._22_4_;
  uVar4 = s_model_local_weapon_overlay_1806f6c90._18_4_;
  uVar3 = CONCAT22(s_model_local_weapon_overlay_1806f6c90._16_2_,
                   s_model_local_weapon_overlay_1806f6c90._14_2_);
  *(uint *)((longlong)local_68 + 10) =
       CONCAT22(s_model_local_weapon_overlay_1806f6c90._12_2_,
                s_model_local_weapon_overlay_1806f6c90._10_2_);
  *(undefined4 *)((longlong)local_68 + 0xe) = uVar3;
  *(undefined4 *)((longlong)local_68 + 0x12) = uVar4;
  *(undefined4 *)((longlong)local_68 + 0x16) = uVar5;
  *(char *)((longlong)local_68 + 0x1a) = '\0';
  FUN_18016c6b0(param_1,&local_68,param_2 + 0x52c);
  if (0xf < local_50) {
    uVar9 = local_50 + 1;
    ppppcVar8 = local_68;
    if (0xfff < uVar9) {
      ppppcVar8 = (char ****)local_68[-1];
      if ((char *)0x1f < (char *)((longlong)local_68 + (-8 - (longlong)ppppcVar8)))
      goto LAB_18016bca5;
      uVar9 = local_50 + 0x28;
    }
    thunk_FUN_1803d64e0(ppppcVar8,uVar9);
  }
  local_68 = (char ****)0x0;
  uStack_60 = 0;
  local_68 = (char ****)FUN_18000fb70(0x20);
  uVar5 = s_model_local_keychain_1806f6d28._12_4_;
  uVar4 = s_model_local_keychain_1806f6d28._8_4_;
  uVar3 = s_model_local_keychain_1806f6d28._4_4_;
  local_58 = 0x14;
  local_50 = 0x1f;
  *(undefined4 *)local_68 = s_model_local_keychain_1806f6d28._0_4_;
  *(undefined4 *)((longlong)local_68 + 4) = uVar3;
  *(undefined4 *)(local_68 + 1) = uVar4;
  *(undefined4 *)((longlong)local_68 + 0xc) = uVar5;
  *(undefined4 *)(local_68 + 2) = s_model_local_keychain_1806f6d28._16_4_;
  *(char *)((longlong)local_68 + 0x14) = '\0';
  FUN_18016c6b0(param_1,&local_68,param_2 + 0x584);
  if (0xf < local_50) {
    uVar9 = local_50 + 1;
    ppppcVar8 = local_68;
    if (0xfff < uVar9) {
      ppppcVar8 = (char ****)local_68[-1];
      if ((char *)0x1f < (char *)((longlong)local_68 + (-8 - (longlong)ppppcVar8)))
      goto LAB_18016bca5;
      uVar9 = local_50 + 0x28;
    }
    thunk_FUN_1803d64e0(ppppcVar8,uVar9);
  }
  local_68 = (char ****)0x0;
  uStack_60 = 0;
  local_68 = (char ****)FUN_18000fb70(0x20);
  uVar5 = s_model_local_keychain_overlay_1806f6d40._12_4_;
  uVar4 = s_model_local_keychain_overlay_1806f6d40._8_4_;
  uVar3 = s_model_local_keychain_overlay_1806f6d40._4_4_;
  local_58 = 0x1c;
  local_50 = 0x1f;
  *(undefined4 *)local_68 = s_model_local_keychain_overlay_1806f6d40._0_4_;
  *(undefined4 *)((longlong)local_68 + 4) = uVar3;
  *(undefined4 *)(local_68 + 1) = uVar4;
  *(undefined4 *)((longlong)local_68 + 0xc) = uVar5;
  uVar5 = s_model_local_keychain_overlay_1806f6d40._24_4_;
  uVar4 = s_model_local_keychain_overlay_1806f6d40._20_4_;
  uVar3 = s_model_local_keychain_overlay_1806f6d40._16_4_;
  *(undefined4 *)((longlong)local_68 + 0xc) = s_model_local_keychain_overlay_1806f6d40._12_4_;
  *(undefined4 *)(local_68 + 2) = uVar3;
  *(undefined4 *)((longlong)local_68 + 0x14) = uVar4;
  *(undefined4 *)(local_68 + 3) = uVar5;
  *(char *)((longlong)local_68 + 0x1c) = '\0';
  FUN_18016c6b0(param_1,&local_68,param_2 + 0x5dc);
  if (0xf < local_50) {
    uVar9 = local_50 + 1;
    ppppcVar8 = local_68;
    if (0xfff < uVar9) {
      ppppcVar8 = (char ****)local_68[-1];
      if ((char *)0x1f < (char *)((longlong)local_68 + (-8 - (longlong)ppppcVar8))) {
LAB_18016bca5:
        pcVar2 = (code *)swi(0x29);
        (*pcVar2)(5);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar9 = local_50 + 0x28;
    }
    thunk_FUN_1803d64e0(ppppcVar8,uVar9);
  }
  local_68 = (char ****)0x0;
  uStack_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_68 = (char ****)FUN_18000fb70(0x20);
  uVar5 = s_model_local_colorize_stattrak_1806f6ce8._12_4_;
  uVar4 = s_model_local_colorize_stattrak_1806f6ce8._8_4_;
  uVar3 = s_model_local_colorize_stattrak_1806f6ce8._4_4_;
  local_58 = 0x1d;
  local_50 = 0x1f;
  *(undefined4 *)local_68 = s_model_local_colorize_stattrak_1806f6ce8._0_4_;
  *(undefined4 *)((longlong)local_68 + 4) = uVar3;
  *(undefined4 *)(local_68 + 1) = uVar4;
  *(undefined4 *)((longlong)local_68 + 0xc) = uVar5;
  uVar5 = s_model_local_colorize_stattrak_1806f6ce8._25_4_;
  uVar4 = s_model_local_colorize_stattrak_1806f6ce8._21_4_;
  uVar3 = s_model_local_colorize_stattrak_1806f6ce8._17_4_;
  *(uint *)((longlong)local_68 + 0xd) =
       CONCAT13(s_model_local_colorize_stattrak_1806f6ce8[0x10],
                s_model_local_colorize_stattrak_1806f6ce8._13_3_);
  *(undefined4 *)((longlong)local_68 + 0x11) = uVar3;
  *(undefined4 *)((longlong)local_68 + 0x15) = uVar4;
  *(undefined4 *)((longlong)local_68 + 0x19) = uVar5;
  *(char *)((longlong)local_68 + 0x1d) = '\0';
  cVar6 = FUN_1801c2460(param_1,&local_68);
  if (cVar6 != '\0') {
    lVar1 = *param_1;
    if (*(char *)(lVar1 + 0x20) != '\0') {
      _Str_00 = "{\n";
    }
    sVar7 = strlen(_Str_00);
    FUN_1800134a0(lVar1,_Str_00,sVar7);
    *(undefined1 *)(lVar1 + 0x20) = 0;
    FUN_1800134a0(lVar1,&DAT_1806f2ad0,3);
    ppppcVar8 = (char ****)&local_68;
    if (0xf < local_50) {
      ppppcVar8 = local_68;
    }
    FUN_1800134a0(lVar1,ppppcVar8,local_58);
    FUN_1800134a0(lVar1,&DAT_1806f2b04,3);
    if (*(char *)(param_2 + 0x634) != '\0') {
      _Str = "true";
    }
    sVar7 = strlen(_Str);
    FUN_1800134a0(lVar1,_Str,sVar7);
  }
  if (0xf < local_50) {
    FUN_18000fad0(&local_68,local_68);
  }
  FUN_180013350(&local_68,"model.local.stattrak_weapon");
  FUN_18016bdf0(param_1,&local_68,param_2 + 0x638);
  FUN_18000f890(&local_68);
  FUN_180013350(&local_68,"model.local.stattrak_knife");
  FUN_18016bdf0(param_1,&local_68,param_2 + 0x648);
  FUN_18000f890(&local_68);
  return;
}



/* ===== 18016bcb0 FUN_18016bcb0 ===== */

void FUN_18016bcb0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  
  cVar1 = FUN_1801c2460();
  if (cVar1 != '\0') {
    FUN_1801940a0(*param_1,param_2,param_3);
  }
  return;
}



/* ===== 18016bcf0 FUN_18016bcf0 ===== */

void FUN_18016bcf0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  
  cVar1 = FUN_1801c2460();
  if (cVar1 != '\0') {
    FUN_180194150(*param_1,param_2,param_3);
  }
  return;
}



/* ===== 18016bd30 FUN_18016bd30 ===== */

void FUN_18016bd30(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  
  cVar1 = FUN_1801c2460();
  if (cVar1 != '\0') {
    FUN_180151da0(*param_1,param_2,param_3);
  }
  return;
}



/* ===== 18016bd70 FUN_18016bd70 ===== */

void FUN_18016bd70(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  
  cVar1 = FUN_1801c2460();
  if (cVar1 != '\0') {
    FUN_180194310(*param_1,param_2,param_3);
  }
  return;
}



/* ===== 18016bdb0 FUN_18016bdb0 ===== */

void FUN_18016bdb0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  
  cVar1 = FUN_1801c2460();
  if (cVar1 != '\0') {
    FUN_180194430(*param_1,param_2,param_3);
  }
  return;
}



/* ===== 18016bdf0 FUN_18016bdf0 ===== */

void FUN_18016bdf0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  
  cVar1 = FUN_1801c2460();
  if (cVar1 != '\0') {
    FUN_1801944c0(*param_1,param_2,param_3);
  }
  return;
}



/* ===== 18016be30 FUN_18016be30 ===== */

void FUN_18016be30(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  
  cVar1 = FUN_1801c2460();
  if (cVar1 != '\0') {
    FUN_180151e90(*param_1,param_2,param_3);
  }
  return;
}



/* ===== 18016be70 FUN_18016be70 ===== */

void FUN_18016be70(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  
  cVar1 = FUN_1801c2460();
  if (cVar1 != '\0') {
    FUN_180194590(*param_1,param_2,param_3);
  }
  return;
}



/* ===== 18016beb0 FUN_18016beb0 ===== */

void FUN_18016beb0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  
  cVar1 = FUN_1801c2460();
  if (cVar1 != '\0') {
    FUN_180194630(*param_1,param_2,param_3);
  }
  return;
}



/* ===== 18016bef0 FUN_18016bef0 ===== */

void FUN_18016bef0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  
  cVar1 = FUN_1801c2460();
  if (cVar1 != '\0') {
    FUN_180151c10(*param_1,param_2,param_3);
  }
  return;
}



/* ===== 18016bf30 FUN_18016bf30 ===== */

void FUN_18016bf30(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  byte bVar1;
  undefined8 uVar2;
  char cVar3;
  ulonglong uVar4;
  
  cVar3 = FUN_1801c2460();
  if (cVar3 != '\0') {
    uVar2 = *param_1;
    FUN_1800f2cb0(uVar2,param_2);
    FUN_1800134a0(uVar2,&DAT_1806dfffc,1);
    uVar4 = 0;
    do {
      bVar1 = *(byte *)(uVar4 + param_3);
      if (bVar1 == 0) break;
      if ((bVar1 == 0x22) || (bVar1 == 0x5c)) {
        FUN_1800690a0(uVar2,0x5c);
      }
      if (0x1f < bVar1) {
        FUN_1800690a0(uVar2,bVar1);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < 0x104);
    FUN_1800134a0(uVar2,&DAT_1806dfffc,1);
  }
  return;
}



/* ===== 18016bff0 FUN_18016bff0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18016bff0(undefined8 *param_1,undefined8 param_2,int *param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [32];
  undefined1 local_a8 [32];
  undefined1 local_88 [32];
  undefined1 local_68 [32];
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_e8;
  uVar2 = FUN_180073a70(local_c8,param_2,&DAT_1806f5f30);
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1800f2db0(*param_1,uVar2,param_3);
  }
  FUN_18000f890(local_c8);
  if (*param_3 != 0) {
    uVar2 = FUN_180073a70(local_c8,param_2,".side");
    cVar1 = FUN_1801c2460(param_1,uVar2);
    if (cVar1 != '\0') {
      FUN_1800f2db0(*param_1,uVar2,param_3 + 1);
    }
    FUN_18000f890(local_c8);
    uVar2 = FUN_180073a70(local_c8,param_2,".paint_kit");
    cVar1 = FUN_1801c2460(param_1,uVar2);
    if (cVar1 != '\0') {
      FUN_1800f2db0(*param_1,uVar2,param_3 + 2);
    }
    FUN_18000f890(local_c8);
    uVar2 = FUN_180073a70(local_c8,param_2,".wear");
    cVar1 = FUN_1801c2460(param_1,uVar2);
    if (cVar1 != '\0') {
      FUN_1800f2e20(*param_1,uVar2,param_3 + 3);
    }
    FUN_18000f890(local_c8);
    uVar2 = FUN_180073a70(local_c8,param_2,".seed");
    cVar1 = FUN_1801c2460(param_1,uVar2);
    if (cVar1 != '\0') {
      FUN_1800f2db0(*param_1,uVar2,param_3 + 4);
    }
    FUN_18000f890(local_c8);
    uVar2 = FUN_180073a70(local_c8,param_2,".stattrak");
    FUN_1801696b0(param_1,uVar2,param_3 + 5);
    FUN_18000f890(local_c8);
    uVar2 = FUN_180073a70(local_c8,param_2,".stattrak_value");
    cVar1 = FUN_1801c2460(param_1,uVar2);
    if (cVar1 != '\0') {
      FUN_1800f2db0(*param_1,uVar2,param_3 + 6);
    }
    FUN_18000f890(local_c8);
    uVar2 = FUN_180073a70(local_c8,param_2,".nametag");
    cVar1 = FUN_1801c2460(param_1,uVar2);
    if (cVar1 != '\0') {
      FUN_180194430(*param_1,uVar2,param_3 + 7);
    }
    FUN_18000f890(local_c8);
    uVar2 = FUN_180073a70(local_c8,param_2,".custom_colors");
    FUN_1801696b0(param_1,uVar2,param_3 + 0x17);
    FUN_18000f890(local_c8);
    uVar4 = 0;
    do {
      uVar2 = FUN_18004e4f0(local_68,uVar4);
      uVar3 = FUN_180073a70(local_88,param_2,".color");
      uVar2 = FUN_180066820(local_c8,uVar3,uVar2);
      cVar1 = FUN_1801c2460(param_1,uVar2);
      if (cVar1 != '\0') {
        FUN_1801944c0(*param_1,uVar2,param_3 + uVar4 * 4 + 0x18);
      }
      FUN_18000f890(local_c8);
      FUN_18000f890(local_88);
      FUN_18000f890(local_68);
      uVar4 = uVar4 + 1;
    } while (uVar4 < 8);
    uVar4 = 0;
    do {
      uVar2 = FUN_18004e4f0(local_88,uVar4);
      uVar3 = FUN_180073a70(local_68,param_2,".sticker");
      FUN_180066820(local_c8,uVar3,uVar2);
      FUN_18000f890(local_68);
      FUN_18000f890(local_88);
      uVar2 = FUN_180073a70(local_a8,local_c8,&DAT_1806f6a6c);
      cVar1 = FUN_1801c2460(param_1,uVar2);
      if (cVar1 != '\0') {
        FUN_1800f2db0(*param_1,uVar2,param_3 + uVar4 * 7 + 0x38);
      }
      FUN_18000f890(local_a8);
      uVar2 = FUN_180073a70(local_a8,local_c8,".wear");
      cVar1 = FUN_1801c2460(param_1,uVar2);
      if (cVar1 != '\0') {
        FUN_1800f2e20(*param_1,uVar2,param_3 + uVar4 * 7 + 0x39);
      }
      FUN_18000f890(local_a8);
      uVar2 = FUN_180073a70(local_a8,local_c8,".scale");
      cVar1 = FUN_1801c2460(param_1,uVar2);
      if (cVar1 != '\0') {
        FUN_1800f2e20(*param_1,uVar2,param_3 + uVar4 * 7 + 0x3a);
      }
      FUN_18000f890(local_a8);
      uVar2 = FUN_180073a70(local_a8,local_c8,".rotation");
      cVar1 = FUN_1801c2460(param_1,uVar2);
      if (cVar1 != '\0') {
        FUN_1800f2e20(*param_1,uVar2,param_3 + uVar4 * 7 + 0x3b);
      }
      FUN_18000f890(local_a8);
      uVar2 = FUN_180073a70(local_a8,local_c8,".offset_x");
      cVar1 = FUN_1801c2460(param_1,uVar2);
      if (cVar1 != '\0') {
        FUN_1800f2e20(*param_1,uVar2,param_3 + uVar4 * 7 + 0x3c);
      }
      FUN_18000f890(local_a8);
      uVar2 = FUN_180073a70(local_a8,local_c8,".offset_y");
      cVar1 = FUN_1801c2460(param_1,uVar2);
      if (cVar1 != '\0') {
        FUN_1800f2e20(*param_1,uVar2,param_3 + uVar4 * 7 + 0x3d);
      }
      FUN_18000f890(local_a8);
      uVar2 = FUN_180073a70(local_a8,local_c8,".schema");
      cVar1 = FUN_1801c2460(param_1,uVar2);
      if (cVar1 != '\0') {
        FUN_1800f2db0(*param_1,uVar2,param_3 + uVar4 * 7 + 0x3e);
      }
      FUN_18000f890(local_a8);
      FUN_18000f890(local_c8);
      uVar4 = uVar4 + 1;
    } while (uVar4 < 6);
    uVar2 = FUN_180073a70(local_a8,param_2,".keychain.id");
    cVar1 = FUN_1801c2460(param_1,uVar2);
    if (cVar1 != '\0') {
      FUN_1800f2db0(*param_1,uVar2,param_3 + 0x62);
    }
    FUN_18000f890(local_a8);
    uVar2 = FUN_180073a70(local_a8,param_2,".keychain.seed");
    cVar1 = FUN_1801c2460(param_1,uVar2);
    if (cVar1 != '\0') {
      FUN_1800f2db0(*param_1,uVar2,param_3 + 99);
    }
    FUN_18000f890(local_a8);
    uVar2 = FUN_180073a70(local_a8,param_2,".keychain.offset_x");
    cVar1 = FUN_1801c2460(param_1,uVar2);
    if (cVar1 != '\0') {
      FUN_1800f2e20(*param_1,uVar2,param_3 + 100);
    }
    FUN_18000f890(local_a8);
    uVar2 = FUN_180073a70(local_a8,param_2,".keychain.offset_y");
    cVar1 = FUN_1801c2460(param_1,uVar2);
    if (cVar1 != '\0') {
      FUN_1800f2e20(*param_1,uVar2,param_3 + 0x65);
    }
    FUN_18000f890(local_a8);
    uVar2 = FUN_180073a70(local_a8,param_2,".keychain.offset_z");
    cVar1 = FUN_1801c2460(param_1,uVar2);
    if (cVar1 != '\0') {
      FUN_1800f2e20(*param_1,uVar2,param_3 + 0x66);
    }
    FUN_18000f890(local_a8);
    uVar2 = FUN_180073a70(local_a8,param_2,".keychain.sticker");
    cVar1 = FUN_1801c2460(param_1,uVar2);
    if (cVar1 != '\0') {
      FUN_1800f2db0(*param_1,uVar2,param_3 + 0x67);
    }
    FUN_18000f890(local_a8);
  }
  return;
}



/* ===== 18016c6b0 FUN_18016c6b0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18016c6b0(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [32];
  undefined1 local_58 [32];
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStack_78;
  uVar2 = FUN_180073a70(local_58,param_2,".material");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1800f2db0(*param_1,uVar2,param_3);
  }
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,".color");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1801944c0(*param_1,uVar2,param_3 + 4);
  }
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,".metalness");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1800f2db0(*param_1,uVar2,param_3 + 0x14);
  }
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,".roughness");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1800f2db0(*param_1,uVar2,param_3 + 0x18);
  }
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,".glow_exponent");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1800f2db0(*param_1,uVar2,param_3 + 0x1c);
  }
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,".outline_exponent");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1800f2db0(*param_1,uVar2,param_3 + 0x20);
  }
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,".outline_falloff");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1800f2db0(*param_1,uVar2,param_3 + 0x24);
  }
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,".outline_filling");
  FUN_1801696b0(param_1,uVar2,param_3 + 0x28);
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,".iridescent_strength");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1800f2db0(*param_1,uVar2,param_3 + 0x2c);
  }
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,".iridescent_roughness");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1800f2db0(*param_1,uVar2,param_3 + 0x30);
  }
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,".iridescent_tint");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1801944c0(*param_1,uVar2,param_3 + 0x34);
  }
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,".water_speed");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1800f2db0(*param_1,uVar2,param_3 + 0x44);
  }
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,".glossy_exponent");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1800f2db0(*param_1,uVar2,param_3 + 0x48);
  }
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,".glossy_filling");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1800f2db0(*param_1,uVar2,param_3 + 0x4c);
  }
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,".glossy_falloff");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1800f2db0(*param_1,uVar2,param_3 + 0x50);
  }
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,".glossy_tint");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1800f2db0(*param_1,uVar2,param_3 + 0x54);
  }
  FUN_18000f890(local_58);
  return;
}



/* ===== 18016cac0 FUN_18016cac0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18016cac0(undefined8 *param_1,undefined8 param_2,longlong param_3)

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
  return;
}



/* ===== 18016cb60 FUN_18016cb60 ===== */

void FUN_18016cb60(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  
  cVar1 = FUN_1801c2460();
  if (cVar1 != '\0') {
    FUN_180195380(*param_1,param_2,param_3);
  }
  return;
}



/* ===== 18016cba0 FUN_18016cba0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18016cba0(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [32];
  undefined1 local_58 [32];
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStack_78;
  FUN_1801b00d0(param_1,param_2,param_3 + 0x264);
  uVar2 = FUN_180073a70(local_58,param_2,"world.modulation");
  FUN_1801696b0(param_1,uVar2,param_3 + 4);
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,"world.modulation_color");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1801944c0(*param_1,uVar2,param_3 + 8);
  }
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,"world.gamma");
  FUN_1801696b0(param_1,uVar2,param_3 + 0x18);
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,"world.gamma_value");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1800f2e20(*param_1,uVar2,param_3 + 0x1c);
  }
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,"world.bloom");
  FUN_1801696b0(param_1,uVar2,param_3 + 0x20);
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,"world.bloom_amount");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1800f2e20(*param_1,uVar2,param_3 + 0x24);
  }
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,"world.wetness");
  FUN_1801696b0(param_1,uVar2,param_3 + 0x28);
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,"world.wetness_density");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1800f2e20(*param_1,uVar2,param_3 + 0x2c);
  }
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,"world.wetness_speed");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1800f2e20(*param_1,uVar2,param_3 + 0x30);
  }
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,"world.wind");
  FUN_1801696b0(param_1,uVar2,param_3 + 0x34);
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,"world.wind_strength");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1800f2e20(*param_1,uVar2,param_3 + 0x38);
  }
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,"world.wind_direction");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1800f2e20(*param_1,uVar2,param_3 + 0x3c);
  }
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,"world.dof");
  FUN_1801696b0(param_1,uVar2,param_3 + 0x40);
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,"world.fog");
  FUN_1801696b0(param_1,uVar2,param_3 + 0x54);
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,"world.fog_color");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1801944c0(*param_1,uVar2,param_3 + 0x58);
  }
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,"world.fog_density");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1800f2e20(*param_1,uVar2,param_3 + 0x68);
  }
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,"world.fog_distance");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1800f2e20(*param_1,uVar2,param_3 + 0x6c);
  }
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,"world.fog_falloff");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1800f2e20(*param_1,uVar2,param_3 + 0x70);
  }
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,"world.fog_glow");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1800f2e20(*param_1,uVar2,param_3 + 0x74);
  }
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,"world.dof_near_blurry");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1800f2e20(*param_1,uVar2,param_3 + 0x44);
  }
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,"world.dof_near_crisp");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1800f2e20(*param_1,uVar2,param_3 + 0x48);
  }
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,"world.dof_far_crisp");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1800f2e20(*param_1,uVar2,param_3 + 0x4c);
  }
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,"world.dof_far_blurry");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1800f2e20(*param_1,uVar2,param_3 + 0x50);
  }
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,"screen.rain");
  FUN_1801696b0(param_1,uVar2,param_3 + 0x20c);
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,"screen.rain_amount");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1800f2e20(*param_1,uVar2,param_3 + 0x210);
  }
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,"screen.rain_size");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1800f2e20(*param_1,uVar2,param_3 + 0x214);
  }
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,"screen.rain_speed");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1800f2e20(*param_1,uVar2,param_3 + 0x218);
  }
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,"screen.rain_fog");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1800f2e20(*param_1,uVar2,param_3 + 0x21c);
  }
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,"screen.rain_blur");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1800f2e20(*param_1,uVar2,param_3 + 0x220);
  }
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,"screen.chromatic");
  FUN_1801696b0(param_1,uVar2,param_3 + 0x224);
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,"screen.chromatic_amount");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1800f2e20(*param_1,uVar2,param_3 + 0x228);
  }
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,"screen.vignette");
  FUN_1801696b0(param_1,uVar2,param_3 + 0x22c);
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,"screen.vignette_amount");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1800f2e20(*param_1,uVar2,param_3 + 0x230);
  }
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,"sky.mode");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1800f2db0(*param_1,uVar2,param_3 + 0x78);
  }
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,"sky.texture");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1801bef40(*param_1,uVar2,param_3 + 0x7c);
  }
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,"sky.shader");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_180194430(*param_1,uVar2,param_3 + 0x11c);
  }
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,"sky.params");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1801befd0(*param_1,uVar2,param_3 + 0x15c);
  }
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,"sky.primary");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1801944c0(*param_1,uVar2,param_3 + 0x17c);
  }
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,"sky.secondary");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1801944c0(*param_1,uVar2,param_3 + 0x18c);
  }
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,"sky.exposure");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1800f2e20(*param_1,uVar2,param_3 + 0x19c);
  }
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,"sky.update_rate");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1800f2e20(*param_1,uVar2,param_3 + 0x1a0);
  }
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,"sky.resolution");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1800f2db0(*param_1,uVar2,param_3 + 0x1a4);
  }
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,"sky.supersample");
  FUN_1801696b0(param_1,uVar2,param_3 + 0x1a8);
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,"sky.recolor");
  FUN_1801696b0(param_1,uVar2,param_3 + 0x1a9);
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,"sky.recolor_strength");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1800f2e20(*param_1,uVar2,param_3 + 0x1ac);
  }
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,"sky.sky_tint");
  FUN_1801696b0(param_1,uVar2,param_3 + 0x1b0);
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,"sky.sky_color");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1801944c0(*param_1,uVar2,param_3 + 0x1b4);
  }
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,"sky.brightness");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1800f2e20(*param_1,uVar2,param_3 + 0x208);
  }
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,"sky.cloud_tint");
  FUN_1801696b0(param_1,uVar2,param_3 + 0x1c4);
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,"sky.cloud_color");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1801944c0(*param_1,uVar2,param_3 + 0x1c8);
  }
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,"sky.sun_tint");
  FUN_1801696b0(param_1,uVar2,param_3 + 0x1d8);
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,"sky.sun_color");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1801944c0(*param_1,uVar2,param_3 + 0x1dc);
  }
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,"sky.lighting");
  FUN_1801696b0(param_1,uVar2,param_3 + 0x1ec);
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,"sky.lighting_color");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1801944c0(*param_1,uVar2,param_3 + 0x1f0);
  }
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,"sky.lighting_intensity");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1800f2e20(*param_1,uVar2,param_3 + 0x200);
  }
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,"sky.lighting_mode");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1800f2db0(*param_1,uVar2,param_3 + 0x204);
  }
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,"motion_blur.enabled");
  FUN_1801696b0(param_1,uVar2,param_3 + 0x234);
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,"motion_blur.strength");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1800f2e20(*param_1,uVar2,param_3 + 0x238);
  }
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,"weather.enabled");
  FUN_1801696b0(param_1,uVar2,param_3 + 0x23c);
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,"weather.type");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1800f2db0(*param_1,uVar2,param_3 + 0x240);
  }
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,"weather.color");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1801944c0(*param_1,uVar2,param_3 + 0x244);
  }
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,"weather.density");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1800f2e20(*param_1,uVar2,param_3 + 0x254);
  }
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,"weather.gravity");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1800f2e20(*param_1,uVar2,param_3 + 600);
  }
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,"weather.glow");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1800f2e20(*param_1,uVar2,param_3 + 0x25c);
  }
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,"weather.rain_mist");
  FUN_1801696b0(param_1,uVar2,param_3 + 0x260);
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,"weather.rain_ripples");
  FUN_1801696b0(param_1,uVar2,param_3 + 0x261);
  FUN_18000f890(local_58);
  return;
}



/* ===== 18016db10 FUN_18016db10 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18016db10(undefined8 *param_1,undefined8 *param_2,int *param_3)

{
  code *pcVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  ulonglong *puVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
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
  uVar4 = FUN_180073a70(&local_a0,param_2,"count");
  cVar3 = FUN_1801c2460(param_1,uVar4);
  if (cVar3 != '\0') {
    FUN_1800f2db0(*param_1,uVar4,param_3);
  }
  FUN_18000f890(&local_a0);
  uVar10 = 1;
  do {
    if (*param_3 <= (int)uVar10) {
      return;
    }
    uVar4 = FUN_18004e4f0(local_60,uVar10);
    if ((ulonglong)param_2[3] < 0x10) {
      puVar11 = param_2;
    }
    else {
      puVar11 = (undefined8 *)*param_2;
    }
    puVar5 = (ulonglong *)FUN_18006b5b0(uVar4,0,puVar11,param_2[2]);
    local_c0 = *puVar5;
    uStack_b8 = puVar5[1];
    local_b0 = puVar5[2];
    uStack_a8 = puVar5[3];
    puVar5[2] = 0;
    puVar5[3] = 0xf;
    *(undefined1 *)puVar5 = 0;
    puVar6 = (undefined4 *)FUN_1800134a0(&local_c0,&DAT_1806e6f24,1);
    local_a0 = *puVar6;
    uStack_9c = puVar6[1];
    uStack_98 = puVar6[2];
    uStack_94 = puVar6[3];
    local_90 = puVar6[4];
    uStack_8c = puVar6[5];
    uStack_88 = puVar6[6];
    uStack_84 = puVar6[7];
    *(undefined8 *)(puVar6 + 4) = 0;
    *(undefined8 *)(puVar6 + 6) = 0xf;
    *(undefined1 *)puVar6 = 0;
    if (0xf < uStack_a8) {
      uVar9 = uStack_a8 + 1;
      uVar7 = local_c0;
      if (0xfff < uVar9) {
        uVar7 = *(ulonglong *)(local_c0 - 8);
        if (0x1f < (local_c0 - uVar7) - 8) {
          pcVar1 = (code *)swi(0x29);
          (*pcVar1)(5);
          goto LAB_18016dd6e;
        }
        uVar9 = uStack_a8 + 0x28;
      }
      thunk_FUN_1803d64e0(uVar7,uVar9);
    }
    local_b0 = 0;
    uStack_a8 = 0xf;
    local_c0 = local_c0 & 0xffffffffffffff00;
    FUN_18000f890(local_60);
    uVar4 = FUN_180073a70(local_80,&local_a0,&DAT_18058b644);
    cVar3 = FUN_1801c2460(param_1,uVar4);
    if (cVar3 != '\0') {
      FUN_180194430(*param_1,uVar4,param_3 + uVar10 * 0x52 + 1);
    }
    FUN_18000f890(local_80);
    uVar4 = FUN_180073a70(local_80,&local_a0,"weapons");
    cVar3 = FUN_1801c2460(param_1,uVar4);
    if (cVar3 != '\0') {
      FUN_1800f2ea0(*param_1,uVar4,param_3 + uVar10 * 0x52 + 0x11);
    }
    FUN_18000f890(local_80);
    uVar7 = CONCAT44(uStack_84,uStack_88);
    if (0xf < uVar7) {
      uVar9 = uVar7 + 1;
      lVar2 = CONCAT44(uStack_9c,local_a0);
      lVar8 = lVar2;
      if (0xfff < uVar9) {
        lVar8 = *(longlong *)(lVar2 + -8);
        if (0x1f < (lVar2 - lVar8) - 8U) {
LAB_18016dd6e:
          pcVar1 = (code *)swi(0x29);
          (*pcVar1)(5);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        uVar9 = uVar7 + 0x28;
      }
      thunk_FUN_1803d64e0(lVar8,uVar9);
    }
    uVar10 = uVar10 + 1;
    if (0x3f < uVar10) {
      return;
    }
  } while( true );
}



/* ===== 18016dd80 FUN_18016dd80 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18016dd80(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined1 local_48 [32];
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_68;
  uVar2 = FUN_180073a70(local_48,param_2,"hitboxes");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_180151c10(*param_1,uVar2,param_3);
  }
  FUN_18000f890(local_48);
  uVar2 = FUN_180073a70(local_48,param_2,"extrapolation");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1800f2db0(*param_1,uVar2,param_3 + 8);
  }
  FUN_18000f890(local_48);
  uVar2 = FUN_180073a70(local_48,param_2,"hitchance");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1800f2db0(*param_1,uVar2,param_3 + 0xc);
  }
  FUN_18000f890(local_48);
  uVar2 = FUN_180073a70(local_48,param_2,"force_shot");
  FUN_1801696b0(param_1,uVar2,param_3 + 0x10);
  FUN_18000f890(local_48);
  uVar2 = FUN_180073a70(local_48,param_2,"min_hitchance");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1800f2db0(*param_1,uVar2,param_3 + 0x14);
  }
  FUN_18000f890(local_48);
  uVar2 = FUN_180073a70(local_48,param_2,"min_damage");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1800f2db0(*param_1,uVar2,param_3 + 0x18);
  }
  FUN_18000f890(local_48);
  uVar2 = FUN_180073a70(local_48,param_2,"quick_stop");
  FUN_1801696b0(param_1,uVar2,param_3 + 0x1c);
  FUN_18000f890(local_48);
  uVar2 = FUN_180073a70(local_48,param_2,"quick_stop_options");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_180151da0(*param_1,uVar2,param_3 + 0x1d);
  }
  FUN_18000f890(local_48);
  uVar2 = FUN_180073a70(local_48,param_2,"quick_scope");
  FUN_1801696b0(param_1,uVar2,param_3 + 0x20);
  FUN_18000f890(local_48);
  return;
}



/* ===== 18016dfd0 FUN_18016dfd0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18016dfd0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  int iVar7;
  undefined8 uVar8;
  size_t sVar9;
  char ****ppppcVar10;
  char *****pppppcVar11;
  char *pcVar12;
  char *_Str;
  ulonglong uVar13;
  char *_Str_00;
  undefined1 auStack_c8 [32];
  char *****local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  ulonglong local_90;
  undefined1 local_88 [32];
  undefined1 local_68 [32];
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_c8;
  FUN_180013350(&local_a8,"legitbot.enabled");
  FUN_1801696b0(param_1,&local_a8,param_2);
  FUN_18000f890(&local_a8);
  FUN_180013350(&local_a8,"legitbot.groups.");
  FUN_18016db10(param_1,&local_a8,param_2 + 4);
  FUN_18000f890(&local_a8);
  uVar13 = 0;
  do {
    iVar7 = *(int *)(param_2 + 4);
    if (iVar7 < 1) {
      iVar7 = 1;
    }
    if (iVar7 <= (int)uVar13) break;
    uVar8 = FUN_1800ef450(local_68,uVar13 & 0xffffffff);
    uVar8 = FUN_180066ab0(local_88,"legitbot.",uVar8);
    uVar8 = FUN_180042850(&local_a8,uVar8,&DAT_1806e6f24);
    FUN_1801b1cf0(param_1,uVar8,param_2 + 21000 + uVar13 * 100,param_2 + 0x6b08 + uVar13 * 0x3c);
    FUN_18000f890(&local_a8);
    FUN_18000f890(local_88);
    FUN_18000f890(local_68);
    uVar13 = uVar13 + 1;
  } while (uVar13 < 0x40);
  local_a8 = (char *****)0x0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_a8 = (char *****)FUN_18000fb70(0x20);
  uVar5 = s_legitbot_visualize_1806f74f0._12_4_;
  uVar4 = s_legitbot_visualize_1806f74f0._8_4_;
  uVar3 = s_legitbot_visualize_1806f74f0._4_4_;
  local_98 = 0x12;
  local_90 = 0x1f;
  *(undefined4 *)local_a8 = s_legitbot_visualize_1806f74f0._0_4_;
  *(undefined4 *)((longlong)local_a8 + 4) = uVar3;
  *(undefined4 *)(local_a8 + 1) = uVar4;
  *(undefined4 *)((longlong)local_a8 + 0xc) = uVar5;
  *(undefined2 *)(local_a8 + 2) = s_legitbot_visualize_1806f74f0._16_2_;
  *(char *)((longlong)local_a8 + 0x12) = '\0';
  cVar6 = FUN_1801c2460(param_1,&local_a8);
  _Str_00 = ",\n";
  _Str = "false";
  if (cVar6 != '\0') {
    lVar1 = *param_1;
    pcVar12 = ",\n";
    if (*(char *)(lVar1 + 0x20) != '\0') {
      pcVar12 = "{\n";
    }
    sVar9 = strlen(pcVar12);
    FUN_1800134a0(lVar1,pcVar12,sVar9);
    *(undefined1 *)(lVar1 + 0x20) = 0;
    FUN_1800134a0(lVar1,&DAT_1806f2ad0,3);
    pppppcVar11 = (char *****)&local_a8;
    if (0xf < local_90) {
      pppppcVar11 = local_a8;
    }
    FUN_1800134a0(lVar1,pppppcVar11,local_98);
    FUN_1800134a0(lVar1,&DAT_1806f2b04,3);
    pcVar12 = "false";
    if (*(char *)(param_2 + 0x7a08) != '\0') {
      pcVar12 = "true";
    }
    sVar9 = strlen(pcVar12);
    FUN_1800134a0(lVar1,pcVar12,sVar9);
  }
  if (0xf < local_90) {
    uVar13 = local_90 + 1;
    pppppcVar11 = local_a8;
    if (0xfff < uVar13) {
      pppppcVar11 = (char *****)local_a8[-1];
      if ((char *)0x1f < (char *)((longlong)local_a8 + (-8 - (longlong)pppppcVar11)))
      goto LAB_18016f5ba;
      uVar13 = local_90 + 0x28;
    }
    thunk_FUN_1803d64e0(pppppcVar11,uVar13);
  }
  local_a8 = (char *****)0x0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_a8 = (char *****)FUN_18000fb70(0x20);
  uVar5 = s_legitbot_visualize_target_1806f7540._12_4_;
  uVar4 = s_legitbot_visualize_target_1806f7540._8_4_;
  uVar3 = s_legitbot_visualize_target_1806f7540._4_4_;
  local_98 = 0x19;
  local_90 = 0x1f;
  *(undefined4 *)local_a8 = s_legitbot_visualize_target_1806f7540._0_4_;
  *(undefined4 *)((longlong)local_a8 + 4) = uVar3;
  *(undefined4 *)(local_a8 + 1) = uVar4;
  *(undefined4 *)((longlong)local_a8 + 0xc) = uVar5;
  uVar5 = s_legitbot_visualize_target_1806f7540._21_4_;
  uVar4 = s_legitbot_visualize_target_1806f7540._17_4_;
  uVar3 = CONCAT13(s_legitbot_visualize_target_1806f7540[0x10],
                   s_legitbot_visualize_target_1806f7540._13_3_);
  *(uint *)((longlong)local_a8 + 9) =
       CONCAT13(s_legitbot_visualize_target_1806f7540[0xc],
                s_legitbot_visualize_target_1806f7540._9_3_);
  *(undefined4 *)((longlong)local_a8 + 0xd) = uVar3;
  *(undefined4 *)((longlong)local_a8 + 0x11) = uVar4;
  *(undefined4 *)((longlong)local_a8 + 0x15) = uVar5;
  *(char *)((longlong)local_a8 + 0x19) = '\0';
  cVar6 = FUN_1801c2460(param_1,&local_a8);
  if (cVar6 != '\0') {
    lVar1 = *param_1;
    pcVar12 = ",\n";
    if (*(char *)(lVar1 + 0x20) != '\0') {
      pcVar12 = "{\n";
    }
    sVar9 = strlen(pcVar12);
    FUN_1800134a0(lVar1,pcVar12,sVar9);
    *(undefined1 *)(lVar1 + 0x20) = 0;
    FUN_1800134a0(lVar1,&DAT_1806f2ad0,3);
    pppppcVar11 = (char *****)&local_a8;
    if (0xf < local_90) {
      pppppcVar11 = local_a8;
    }
    FUN_1800134a0(lVar1,pppppcVar11,local_98);
    FUN_1800134a0(lVar1,&DAT_1806f2b04,3);
    pcVar12 = "false";
    if (*(char *)(param_2 + 0x7a09) != '\0') {
      pcVar12 = "true";
    }
    sVar9 = strlen(pcVar12);
    FUN_1800134a0(lVar1,pcVar12,sVar9);
  }
  FUN_18000f890(&local_a8);
  local_a8 = (char *****)0x0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_a8 = (char *****)FUN_18000fb70(0x20);
  uVar5 = s_legitbot_target_color_1806f7560._12_4_;
  uVar4 = s_legitbot_target_color_1806f7560._8_4_;
  uVar3 = s_legitbot_target_color_1806f7560._4_4_;
  local_98 = 0x15;
  local_90 = 0x1f;
  *(undefined4 *)local_a8 = s_legitbot_target_color_1806f7560._0_4_;
  *(undefined4 *)((longlong)local_a8 + 4) = uVar3;
  *(undefined4 *)(local_a8 + 1) = uVar4;
  *(undefined4 *)((longlong)local_a8 + 0xc) = uVar5;
  *(ulonglong *)((longlong)local_a8 + 0xd) =
       CONCAT53(s_legitbot_target_color_1806f7560._16_5_,s_legitbot_target_color_1806f7560._13_3_);
  *(char *)((longlong)local_a8 + 0x15) = '\0';
  cVar6 = FUN_1801c2460(param_1,&local_a8);
  if (cVar6 != '\0') {
    FUN_1801944c0(*param_1,&local_a8,param_2 + 0x7a0c);
  }
  if (0xf < local_90) {
    uVar13 = local_90 + 1;
    pppppcVar11 = local_a8;
    if (0xfff < uVar13) {
      pppppcVar11 = (char *****)local_a8[-1];
      if ((char *)0x1f < (char *)((longlong)local_a8 + (-8 - (longlong)pppppcVar11)))
      goto LAB_18016f5ba;
      uVar13 = local_90 + 0x28;
    }
    thunk_FUN_1803d64e0(pppppcVar11,uVar13);
  }
  local_a8 = (char *****)0x0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_a8 = (char *****)FUN_18000fb70(0x20);
  uVar5 = s_legitbot_visualize_fov_1806f7510._8_4_;
  uVar4 = s_legitbot_visualize_fov_1806f7510._4_4_;
  local_98 = 0x16;
  local_90 = 0x1f;
  uVar3 = CONCAT22(s_legitbot_visualize_fov_1806f7510._14_2_,
                   s_legitbot_visualize_fov_1806f7510._12_2_);
  *(undefined4 *)local_a8 = s_legitbot_visualize_fov_1806f7510._0_4_;
  *(undefined4 *)((longlong)local_a8 + 4) = uVar4;
  *(undefined4 *)(local_a8 + 1) = uVar5;
  *(undefined4 *)((longlong)local_a8 + 0xc) = uVar3;
  *(ulonglong *)((longlong)local_a8 + 0xe) =
       CONCAT62(s_legitbot_visualize_fov_1806f7510._16_6_,s_legitbot_visualize_fov_1806f7510._14_2_)
  ;
  *(char *)((longlong)local_a8 + 0x16) = '\0';
  cVar6 = FUN_1801c2460(param_1,&local_a8);
  if (cVar6 != '\0') {
    lVar1 = *param_1;
    pcVar12 = ",\n";
    if (*(char *)(lVar1 + 0x20) != '\0') {
      pcVar12 = "{\n";
    }
    sVar9 = strlen(pcVar12);
    FUN_1800134a0(lVar1,pcVar12,sVar9);
    *(undefined1 *)(lVar1 + 0x20) = 0;
    FUN_1800134a0(lVar1,&DAT_1806f2ad0,3);
    pppppcVar11 = (char *****)&local_a8;
    if (0xf < local_90) {
      pppppcVar11 = local_a8;
    }
    FUN_1800134a0(lVar1,pppppcVar11,local_98);
    FUN_1800134a0(lVar1,&DAT_1806f2b04,3);
    pcVar12 = "false";
    if (*(char *)(param_2 + 0x7a1c) != '\0') {
      pcVar12 = "true";
    }
    sVar9 = strlen(pcVar12);
    FUN_1800134a0(lVar1,pcVar12,sVar9);
  }
  if (0xf < local_90) {
    uVar13 = local_90 + 1;
    pppppcVar11 = local_a8;
    if (0xfff < uVar13) {
      pppppcVar11 = (char *****)local_a8[-1];
      if ((char *)0x1f < (char *)((longlong)local_a8 + (-8 - (longlong)pppppcVar11)))
      goto LAB_18016f5ba;
      uVar13 = local_90 + 0x28;
    }
    thunk_FUN_1803d64e0(pppppcVar11,uVar13);
  }
  local_a8 = (char *****)0x0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_a8 = (char *****)FUN_18000fb70(0x20);
  uVar5 = s_legitbot_fov_color_1806f7528._12_4_;
  uVar4 = s_legitbot_fov_color_1806f7528._8_4_;
  uVar3 = s_legitbot_fov_color_1806f7528._4_4_;
  local_98 = 0x12;
  local_90 = 0x1f;
  *(undefined4 *)local_a8 = s_legitbot_fov_color_1806f7528._0_4_;
  *(undefined4 *)((longlong)local_a8 + 4) = uVar3;
  *(undefined4 *)(local_a8 + 1) = uVar4;
  *(undefined4 *)((longlong)local_a8 + 0xc) = uVar5;
  *(undefined2 *)(local_a8 + 2) = s_legitbot_fov_color_1806f7528._16_2_;
  *(char *)((longlong)local_a8 + 0x12) = '\0';
  cVar6 = FUN_1801c2460(param_1,&local_a8);
  if (cVar6 != '\0') {
    FUN_1801944c0(*param_1,&local_a8,param_2 + 0x7a20);
  }
  if (0xf < local_90) {
    uVar13 = local_90 + 1;
    pppppcVar11 = local_a8;
    if (0xfff < uVar13) {
      pppppcVar11 = (char *****)local_a8[-1];
      if ((char *)0x1f < (char *)((longlong)local_a8 + (-8 - (longlong)pppppcVar11)))
      goto LAB_18016f5ba;
      uVar13 = local_90 + 0x28;
    }
    thunk_FUN_1803d64e0(pppppcVar11,uVar13);
  }
  local_a8 = (char *****)0x0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_a8 = (char *****)FUN_18000fb70(0x20);
  uVar5 = s_legitbot_visualize_hitboxes_1806f75b8._12_4_;
  uVar4 = s_legitbot_visualize_hitboxes_1806f75b8._8_4_;
  uVar3 = s_legitbot_visualize_hitboxes_1806f75b8._4_4_;
  local_98 = 0x1b;
  local_90 = 0x1f;
  *(undefined4 *)local_a8 = s_legitbot_visualize_hitboxes_1806f75b8._0_4_;
  *(undefined4 *)((longlong)local_a8 + 4) = uVar3;
  *(undefined4 *)(local_a8 + 1) = uVar4;
  *(undefined4 *)((longlong)local_a8 + 0xc) = uVar5;
  uVar5 = s_legitbot_visualize_hitboxes_1806f75b8._23_4_;
  uVar4 = s_legitbot_visualize_hitboxes_1806f75b8._19_4_;
  uVar3 = CONCAT31(s_legitbot_visualize_hitboxes_1806f75b8._16_3_,
                   s_legitbot_visualize_hitboxes_1806f75b8[0xf]);
  *(uint *)((longlong)local_a8 + 0xb) =
       CONCAT31(s_legitbot_visualize_hitboxes_1806f75b8._12_3_,
                s_legitbot_visualize_hitboxes_1806f75b8[0xb]);
  *(undefined4 *)((longlong)local_a8 + 0xf) = uVar3;
  *(undefined4 *)((longlong)local_a8 + 0x13) = uVar4;
  *(undefined4 *)((longlong)local_a8 + 0x17) = uVar5;
  *(char *)((longlong)local_a8 + 0x1b) = '\0';
  cVar6 = FUN_1801c2460(param_1,&local_a8);
  if (cVar6 != '\0') {
    lVar1 = *param_1;
    pcVar12 = ",\n";
    if (*(char *)(lVar1 + 0x20) != '\0') {
      pcVar12 = "{\n";
    }
    sVar9 = strlen(pcVar12);
    FUN_1800134a0(lVar1,pcVar12,sVar9);
    *(undefined1 *)(lVar1 + 0x20) = 0;
    FUN_1800134a0(lVar1,&DAT_1806f2ad0,3);
    pppppcVar11 = (char *****)&local_a8;
    if (0xf < local_90) {
      pppppcVar11 = local_a8;
    }
    FUN_1800134a0(lVar1,pppppcVar11,local_98);
    FUN_1800134a0(lVar1,&DAT_1806f2b04,3);
    pcVar12 = "false";
    if (*(char *)(param_2 + 0x7a30) != '\0') {
      pcVar12 = "true";
    }
    sVar9 = strlen(pcVar12);
    FUN_1800134a0(lVar1,pcVar12,sVar9);
  }
  if (0xf < local_90) {
    uVar13 = local_90 + 1;
    pppppcVar11 = local_a8;
    if (0xfff < uVar13) {
      pppppcVar11 = (char *****)local_a8[-1];
      if ((char *)0x1f < (char *)((longlong)local_a8 + (-8 - (longlong)pppppcVar11)))
      goto LAB_18016f5ba;
      uVar13 = local_90 + 0x28;
    }
    thunk_FUN_1803d64e0(pppppcVar11,uVar13);
  }
  local_a8 = (char *****)0x0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_a8 = (char *****)FUN_18000fb70(0x20);
  uVar5 = s_legitbot_high_priority_color_1806f75d8._12_4_;
  uVar4 = s_legitbot_high_priority_color_1806f75d8._8_4_;
  uVar3 = s_legitbot_high_priority_color_1806f75d8._4_4_;
  local_98 = 0x1c;
  local_90 = 0x1f;
  *(undefined4 *)local_a8 = s_legitbot_high_priority_color_1806f75d8._0_4_;
  *(undefined4 *)((longlong)local_a8 + 4) = uVar3;
  *(undefined4 *)(local_a8 + 1) = uVar4;
  *(undefined4 *)((longlong)local_a8 + 0xc) = uVar5;
  uVar5 = s_legitbot_high_priority_color_1806f75d8._24_4_;
  uVar4 = s_legitbot_high_priority_color_1806f75d8._20_4_;
  uVar3 = s_legitbot_high_priority_color_1806f75d8._16_4_;
  *(undefined4 *)((longlong)local_a8 + 0xc) = s_legitbot_high_priority_color_1806f75d8._12_4_;
  *(undefined4 *)(local_a8 + 2) = uVar3;
  *(undefined4 *)((longlong)local_a8 + 0x14) = uVar4;
  *(undefined4 *)(local_a8 + 3) = uVar5;
  *(char *)((longlong)local_a8 + 0x1c) = '\0';
  cVar6 = FUN_1801c2460(param_1,&local_a8);
  if (cVar6 != '\0') {
    FUN_1801944c0(*param_1,&local_a8,param_2 + 0x7a34);
  }
  if (0xf < local_90) {
    uVar13 = local_90 + 1;
    pppppcVar11 = local_a8;
    if (0xfff < uVar13) {
      pppppcVar11 = (char *****)local_a8[-1];
      if ((char *)0x1f < (char *)((longlong)local_a8 + (-8 - (longlong)pppppcVar11)))
      goto LAB_18016f5ba;
      uVar13 = local_90 + 0x28;
    }
    thunk_FUN_1803d64e0(pppppcVar11,uVar13);
  }
  local_a8 = (char *****)0x0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_a8 = (char *****)FUN_18000fb70(0x20);
  uVar5 = s_legitbot_low_priority_color_1806f7578._12_4_;
  uVar4 = s_legitbot_low_priority_color_1806f7578._8_4_;
  uVar3 = s_legitbot_low_priority_color_1806f7578._4_4_;
  local_98 = 0x1b;
  local_90 = 0x1f;
  *(undefined4 *)local_a8 = s_legitbot_low_priority_color_1806f7578._0_4_;
  *(undefined4 *)((longlong)local_a8 + 4) = uVar3;
  *(undefined4 *)(local_a8 + 1) = uVar4;
  *(undefined4 *)((longlong)local_a8 + 0xc) = uVar5;
  uVar5 = s_legitbot_low_priority_color_1806f7578._23_4_;
  uVar4 = s_legitbot_low_priority_color_1806f7578._19_4_;
  uVar3 = CONCAT31(s_legitbot_low_priority_color_1806f7578._16_3_,
                   s_legitbot_low_priority_color_1806f7578[0xf]);
  *(uint *)((longlong)local_a8 + 0xb) =
       CONCAT31(s_legitbot_low_priority_color_1806f7578._12_3_,
                s_legitbot_low_priority_color_1806f7578[0xb]);
  *(undefined4 *)((longlong)local_a8 + 0xf) = uVar3;
  *(undefined4 *)((longlong)local_a8 + 0x13) = uVar4;
  *(undefined4 *)((longlong)local_a8 + 0x17) = uVar5;
  *(char *)((longlong)local_a8 + 0x1b) = '\0';
  cVar6 = FUN_1801c2460(param_1,&local_a8);
  if (cVar6 != '\0') {
    FUN_1801944c0(*param_1,&local_a8,param_2 + 0x7a44);
  }
  if (0xf < local_90) {
    uVar13 = local_90 + 1;
    pppppcVar11 = local_a8;
    if (0xfff < uVar13) {
      pppppcVar11 = (char *****)local_a8[-1];
      if ((char *)0x1f < (char *)((longlong)local_a8 + (-8 - (longlong)pppppcVar11)))
      goto LAB_18016f5ba;
      uVar13 = local_90 + 0x28;
    }
    thunk_FUN_1803d64e0(pppppcVar11,uVar13);
  }
  local_a8 = (char *****)0x0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_a8 = (char *****)FUN_18000fb70(0x20);
  uVar5 = s_legitbot_visualize_recoil_1806f7598._12_4_;
  uVar4 = s_legitbot_visualize_recoil_1806f7598._8_4_;
  uVar3 = s_legitbot_visualize_recoil_1806f7598._4_4_;
  local_98 = 0x19;
  local_90 = 0x1f;
  *(undefined4 *)local_a8 = s_legitbot_visualize_recoil_1806f7598._0_4_;
  *(undefined4 *)((longlong)local_a8 + 4) = uVar3;
  *(undefined4 *)(local_a8 + 1) = uVar4;
  *(undefined4 *)((longlong)local_a8 + 0xc) = uVar5;
  uVar5 = s_legitbot_visualize_recoil_1806f7598._21_4_;
  uVar4 = s_legitbot_visualize_recoil_1806f7598._17_4_;
  uVar3 = CONCAT13(s_legitbot_visualize_recoil_1806f7598[0x10],
                   s_legitbot_visualize_recoil_1806f7598._13_3_);
  *(uint *)((longlong)local_a8 + 9) =
       CONCAT13(s_legitbot_visualize_recoil_1806f7598[0xc],
                s_legitbot_visualize_recoil_1806f7598._9_3_);
  *(undefined4 *)((longlong)local_a8 + 0xd) = uVar3;
  *(undefined4 *)((longlong)local_a8 + 0x11) = uVar4;
  *(undefined4 *)((longlong)local_a8 + 0x15) = uVar5;
  *(char *)((longlong)local_a8 + 0x19) = '\0';
  cVar6 = FUN_1801c2460(param_1,&local_a8);
  if (cVar6 != '\0') {
    lVar1 = *param_1;
    pcVar12 = ",\n";
    if (*(char *)(lVar1 + 0x20) != '\0') {
      pcVar12 = "{\n";
    }
    sVar9 = strlen(pcVar12);
    FUN_1800134a0(lVar1,pcVar12,sVar9);
    *(undefined1 *)(lVar1 + 0x20) = 0;
    FUN_1800134a0(lVar1,&DAT_1806f2ad0,3);
    pppppcVar11 = (char *****)&local_a8;
    if (0xf < local_90) {
      pppppcVar11 = local_a8;
    }
    FUN_1800134a0(lVar1,pppppcVar11,local_98);
    FUN_1800134a0(lVar1,&DAT_1806f2b04,3);
    pcVar12 = "false";
    if (*(char *)(param_2 + 0x7a54) != '\0') {
      pcVar12 = "true";
    }
    sVar9 = strlen(pcVar12);
    FUN_1800134a0(lVar1,pcVar12,sVar9);
  }
  if (0xf < local_90) {
    uVar13 = local_90 + 1;
    pppppcVar11 = local_a8;
    if (0xfff < uVar13) {
      pppppcVar11 = (char *****)local_a8[-1];
      if ((char *)0x1f < (char *)((longlong)local_a8 + (-8 - (longlong)pppppcVar11)))
      goto LAB_18016f5ba;
      uVar13 = local_90 + 0x28;
    }
    thunk_FUN_1803d64e0(pppppcVar11,uVar13);
  }
  local_a8 = (char *****)0x0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_a8 = (char *****)FUN_18000fb70(0x20);
  uVar5 = s_legitbot_recoil_original_color_1806f7630._8_4_;
  uVar4 = s_legitbot_recoil_original_color_1806f7630._4_4_;
  local_98 = 0x1e;
  local_90 = 0x1f;
  uVar3 = CONCAT22(s_legitbot_recoil_original_color_1806f7630._14_2_,
                   s_legitbot_recoil_original_color_1806f7630._12_2_);
  *(undefined4 *)local_a8 = s_legitbot_recoil_original_color_1806f7630._0_4_;
  *(undefined4 *)((longlong)local_a8 + 4) = uVar4;
  *(undefined4 *)(local_a8 + 1) = uVar5;
  *(undefined4 *)((longlong)local_a8 + 0xc) = uVar3;
  uVar5 = s_legitbot_recoil_original_color_1806f7630._26_4_;
  uVar4 = s_legitbot_recoil_original_color_1806f7630._22_4_;
  uVar3 = s_legitbot_recoil_original_color_1806f7630._18_4_;
  *(uint *)((longlong)local_a8 + 0xe) =
       CONCAT22(s_legitbot_recoil_original_color_1806f7630._16_2_,
                s_legitbot_recoil_original_color_1806f7630._14_2_);
  *(undefined4 *)((longlong)local_a8 + 0x12) = uVar3;
  *(undefined4 *)((longlong)local_a8 + 0x16) = uVar4;
  *(undefined4 *)((longlong)local_a8 + 0x1a) = uVar5;
  *(char *)((longlong)local_a8 + 0x1e) = '\0';
  cVar6 = FUN_1801c2460(param_1,&local_a8);
  if (cVar6 != '\0') {
    FUN_1801944c0(*param_1,&local_a8,param_2 + 0x7a58);
  }
  if (0xf < local_90) {
    uVar13 = local_90 + 1;
    pppppcVar11 = local_a8;
    if (0xfff < uVar13) {
      pppppcVar11 = (char *****)local_a8[-1];
      if ((char *)0x1f < (char *)((longlong)local_a8 + (-8 - (longlong)pppppcVar11)))
      goto LAB_18016f5ba;
      uVar13 = local_90 + 0x28;
    }
    thunk_FUN_1803d64e0(pppppcVar11,uVar13);
  }
  local_a8 = (char *****)0x0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_a8 = (char *****)FUN_18000fb70(0x30);
  uVar5 = s_legitbot_recoil_compensated_colo_1806f7650._12_4_;
  uVar4 = s_legitbot_recoil_compensated_colo_1806f7650._8_4_;
  uVar3 = s_legitbot_recoil_compensated_colo_1806f7650._4_4_;
  local_98 = 0x21;
  local_90 = 0x2f;
  *(undefined4 *)local_a8 = s_legitbot_recoil_compensated_colo_1806f7650._0_4_;
  *(undefined4 *)((longlong)local_a8 + 4) = uVar3;
  *(undefined4 *)(local_a8 + 1) = uVar4;
  *(undefined4 *)((longlong)local_a8 + 0xc) = uVar5;
  uVar5 = s_legitbot_recoil_compensated_colo_1806f7650._28_4_;
  uVar4 = s_legitbot_recoil_compensated_colo_1806f7650._24_4_;
  uVar3 = s_legitbot_recoil_compensated_colo_1806f7650._20_4_;
  *(undefined4 *)(local_a8 + 2) = s_legitbot_recoil_compensated_colo_1806f7650._16_4_;
  *(undefined4 *)((longlong)local_a8 + 0x14) = uVar3;
  *(undefined4 *)(local_a8 + 3) = uVar4;
  *(undefined4 *)((longlong)local_a8 + 0x1c) = uVar5;
  *(char *)(local_a8 + 4) = s_legitbot_recoil_compensated_colo_1806f7650[0x20];
  *(char *)((longlong)local_a8 + 0x21) = '\0';
  cVar6 = FUN_1801c2460(param_1,&local_a8);
  if (cVar6 != '\0') {
    FUN_1801944c0(*param_1,&local_a8,param_2 + 0x7a68);
  }
  if (0xf < local_90) {
    uVar13 = local_90 + 1;
    pppppcVar11 = local_a8;
    if (0xfff < uVar13) {
      pppppcVar11 = (char *****)local_a8[-1];
      if ((char *)0x1f < (char *)((longlong)local_a8 + (-8 - (longlong)pppppcVar11)))
      goto LAB_18016f5ba;
      uVar13 = local_90 + 0x28;
    }
    thunk_FUN_1803d64e0(pppppcVar11,uVar13);
  }
  local_a8 = (char *****)0x0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_a8 = (char *****)FUN_18000fb70(0x20);
  uVar5 = s_legitbot_visualize_velocity_1806f75f8._12_4_;
  uVar4 = s_legitbot_visualize_velocity_1806f75f8._8_4_;
  uVar3 = s_legitbot_visualize_velocity_1806f75f8._4_4_;
  local_98 = 0x1b;
  local_90 = 0x1f;
  *(undefined4 *)local_a8 = s_legitbot_visualize_velocity_1806f75f8._0_4_;
  *(undefined4 *)((longlong)local_a8 + 4) = uVar3;
  *(undefined4 *)(local_a8 + 1) = uVar4;
  *(undefined4 *)((longlong)local_a8 + 0xc) = uVar5;
  uVar5 = s_legitbot_visualize_velocity_1806f75f8._23_4_;
  uVar4 = s_legitbot_visualize_velocity_1806f75f8._19_4_;
  uVar3 = CONCAT31(s_legitbot_visualize_velocity_1806f75f8._16_3_,
                   s_legitbot_visualize_velocity_1806f75f8[0xf]);
  *(uint *)((longlong)local_a8 + 0xb) =
       CONCAT31(s_legitbot_visualize_velocity_1806f75f8._12_3_,
                s_legitbot_visualize_velocity_1806f75f8[0xb]);
  *(undefined4 *)((longlong)local_a8 + 0xf) = uVar3;
  *(undefined4 *)((longlong)local_a8 + 0x13) = uVar4;
  *(undefined4 *)((longlong)local_a8 + 0x17) = uVar5;
  *(char *)((longlong)local_a8 + 0x1b) = '\0';
  cVar6 = FUN_1801c2460(param_1,&local_a8);
  if (cVar6 != '\0') {
    lVar1 = *param_1;
    pcVar12 = ",\n";
    if (*(char *)(lVar1 + 0x20) != '\0') {
      pcVar12 = "{\n";
    }
    sVar9 = strlen(pcVar12);
    FUN_1800134a0(lVar1,pcVar12,sVar9);
    *(undefined1 *)(lVar1 + 0x20) = 0;
    FUN_1800134a0(lVar1,&DAT_1806f2ad0,3);
    pppppcVar11 = (char *****)&local_a8;
    if (0xf < local_90) {
      pppppcVar11 = local_a8;
    }
    FUN_1800134a0(lVar1,pppppcVar11,local_98);
    FUN_1800134a0(lVar1,&DAT_1806f2b04,3);
    pcVar12 = "false";
    if (*(char *)(param_2 + 0x7a78) != '\0') {
      pcVar12 = "true";
    }
    sVar9 = strlen(pcVar12);
    FUN_1800134a0(lVar1,pcVar12,sVar9);
  }
  if (0xf < local_90) {
    uVar13 = local_90 + 1;
    pppppcVar11 = local_a8;
    if (0xfff < uVar13) {
      pppppcVar11 = (char *****)local_a8[-1];
      if ((char *)0x1f < (char *)((longlong)local_a8 + (-8 - (longlong)pppppcVar11)))
      goto LAB_18016f5ba;
      uVar13 = local_90 + 0x28;
    }
    thunk_FUN_1803d64e0(pppppcVar11,uVar13);
  }
  local_a8 = (char *****)0x0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_a8 = (char *****)FUN_18000fb70(0x20);
  uVar5 = s_legitbot_velocity_speed_1806f7618._12_4_;
  uVar4 = s_legitbot_velocity_speed_1806f7618._8_4_;
  uVar3 = s_legitbot_velocity_speed_1806f7618._4_4_;
  local_98 = 0x17;
  local_90 = 0x1f;
  *(undefined4 *)local_a8 = s_legitbot_velocity_speed_1806f7618._0_4_;
  *(undefined4 *)((longlong)local_a8 + 4) = uVar3;
  *(undefined4 *)(local_a8 + 1) = uVar4;
  *(undefined4 *)((longlong)local_a8 + 0xc) = uVar5;
  *(ulonglong *)((longlong)local_a8 + 0xf) =
       CONCAT71(s_legitbot_velocity_speed_1806f7618._16_7_,s_legitbot_velocity_speed_1806f7618[0xf])
  ;
  *(char *)((longlong)local_a8 + 0x17) = '\0';
  cVar6 = FUN_1801c2460(param_1,&local_a8);
  if (cVar6 != '\0') {
    lVar1 = *param_1;
    pcVar12 = ",\n";
    if (*(char *)(lVar1 + 0x20) != '\0') {
      pcVar12 = "{\n";
    }
    sVar9 = strlen(pcVar12);
    FUN_1800134a0(lVar1,pcVar12,sVar9);
    *(undefined1 *)(lVar1 + 0x20) = 0;
    FUN_1800134a0(lVar1,&DAT_1806f2ad0,3);
    pppppcVar11 = (char *****)&local_a8;
    if (0xf < local_90) {
      pppppcVar11 = local_a8;
    }
    FUN_1800134a0(lVar1,pppppcVar11,local_98);
    FUN_1800134a0(lVar1,&DAT_1806f2b04,3);
    pcVar12 = "false";
    if (*(char *)(param_2 + 0x7a79) != '\0') {
      pcVar12 = "true";
    }
    sVar9 = strlen(pcVar12);
    FUN_1800134a0(lVar1,pcVar12,sVar9);
  }
  if (0xf < local_90) {
    uVar13 = local_90 + 1;
    pppppcVar11 = local_a8;
    if (0xfff < uVar13) {
      pppppcVar11 = (char *****)local_a8[-1];
      if ((char *)0x1f < (char *)((longlong)local_a8 + (-8 - (longlong)pppppcVar11)))
      goto LAB_18016f5ba;
      uVar13 = local_90 + 0x28;
    }
    thunk_FUN_1803d64e0(pppppcVar11,uVar13);
  }
  local_a8 = (char *****)0x0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_a8 = (char *****)FUN_18000fb70(0x20);
  uVar5 = s_legitbot_speed_color_1806f76b0._12_4_;
  uVar4 = s_legitbot_speed_color_1806f76b0._8_4_;
  uVar3 = s_legitbot_speed_color_1806f76b0._4_4_;
  local_98 = 0x14;
  local_90 = 0x1f;
  *(undefined4 *)local_a8 = s_legitbot_speed_color_1806f76b0._0_4_;
  *(undefined4 *)((longlong)local_a8 + 4) = uVar3;
  *(undefined4 *)(local_a8 + 1) = uVar4;
  *(undefined4 *)((longlong)local_a8 + 0xc) = uVar5;
  *(undefined4 *)(local_a8 + 2) = s_legitbot_speed_color_1806f76b0._16_4_;
  *(char *)((longlong)local_a8 + 0x14) = '\0';
  cVar6 = FUN_1801c2460(param_1,&local_a8);
  if (cVar6 != '\0') {
    FUN_1801944c0(*param_1,&local_a8,param_2 + 0x7a7c);
  }
  if (0xf < local_90) {
    uVar13 = local_90 + 1;
    pppppcVar11 = local_a8;
    if (0xfff < uVar13) {
      pppppcVar11 = (char *****)local_a8[-1];
      if ((char *)0x1f < (char *)((longlong)local_a8 + (-8 - (longlong)pppppcVar11)))
      goto LAB_18016f5ba;
      uVar13 = local_90 + 0x28;
    }
    thunk_FUN_1803d64e0(pppppcVar11,uVar13);
  }
  local_a8 = (char *****)0x0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_a8 = (char *****)FUN_18000fb70(0x20);
  uVar5 = s_legitbot_velocity_jump_1806f76c8._8_4_;
  uVar4 = s_legitbot_velocity_jump_1806f76c8._4_4_;
  local_98 = 0x16;
  local_90 = 0x1f;
  uVar3 = CONCAT22(s_legitbot_velocity_jump_1806f76c8._14_2_,
                   s_legitbot_velocity_jump_1806f76c8._12_2_);
  *(undefined4 *)local_a8 = s_legitbot_velocity_jump_1806f76c8._0_4_;
  *(undefined4 *)((longlong)local_a8 + 4) = uVar4;
  *(undefined4 *)(local_a8 + 1) = uVar5;
  *(undefined4 *)((longlong)local_a8 + 0xc) = uVar3;
  *(ulonglong *)((longlong)local_a8 + 0xe) =
       CONCAT62(s_legitbot_velocity_jump_1806f76c8._16_6_,s_legitbot_velocity_jump_1806f76c8._14_2_)
  ;
  *(char *)((longlong)local_a8 + 0x16) = '\0';
  cVar6 = FUN_1801c2460(param_1,&local_a8);
  if (cVar6 != '\0') {
    lVar1 = *param_1;
    pcVar12 = ",\n";
    if (*(char *)(lVar1 + 0x20) != '\0') {
      pcVar12 = "{\n";
    }
    sVar9 = strlen(pcVar12);
    FUN_1800134a0(lVar1,pcVar12,sVar9);
    *(undefined1 *)(lVar1 + 0x20) = 0;
    FUN_1800134a0(lVar1,&DAT_1806f2ad0,3);
    pppppcVar11 = (char *****)&local_a8;
    if (0xf < local_90) {
      pppppcVar11 = local_a8;
    }
    FUN_1800134a0(lVar1,pppppcVar11,local_98);
    FUN_1800134a0(lVar1,&DAT_1806f2b04,3);
    pcVar12 = "false";
    if (*(char *)(param_2 + 0x7a8c) != '\0') {
      pcVar12 = "true";
    }
    sVar9 = strlen(pcVar12);
    FUN_1800134a0(lVar1,pcVar12,sVar9);
  }
  if (0xf < local_90) {
    uVar13 = local_90 + 1;
    pppppcVar11 = local_a8;
    if (0xfff < uVar13) {
      pppppcVar11 = (char *****)local_a8[-1];
      if ((char *)0x1f < (char *)((longlong)local_a8 + (-8 - (longlong)pppppcVar11)))
      goto LAB_18016f5ba;
      uVar13 = local_90 + 0x28;
    }
    thunk_FUN_1803d64e0(pppppcVar11,uVar13);
  }
  local_a8 = (char *****)0x0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_a8 = (char *****)FUN_18000fb70(0x20);
  uVar5 = s_legitbot_jump_color_1806f7678._12_4_;
  uVar4 = s_legitbot_jump_color_1806f7678._8_4_;
  uVar3 = s_legitbot_jump_color_1806f7678._4_4_;
  local_98 = 0x13;
  local_90 = 0x1f;
  *(undefined4 *)local_a8 = s_legitbot_jump_color_1806f7678._0_4_;
  *(undefined4 *)((longlong)local_a8 + 4) = uVar3;
  *(undefined4 *)(local_a8 + 1) = uVar4;
  *(undefined4 *)((longlong)local_a8 + 0xc) = uVar5;
  *(uint *)((longlong)local_a8 + 0xf) =
       CONCAT31(s_legitbot_jump_color_1806f7678._16_3_,s_legitbot_jump_color_1806f7678[0xf]);
  *(char *)((longlong)local_a8 + 0x13) = '\0';
  cVar6 = FUN_1801c2460(param_1,&local_a8);
  if (cVar6 != '\0') {
    FUN_1801944c0(*param_1,&local_a8,param_2 + 0x7a90);
  }
  if (0xf < local_90) {
    uVar13 = local_90 + 1;
    pppppcVar11 = local_a8;
    if (0xfff < uVar13) {
      pppppcVar11 = (char *****)local_a8[-1];
      if ((char *)0x1f < (char *)((longlong)local_a8 + (-8 - (longlong)pppppcVar11)))
      goto LAB_18016f5ba;
      uVar13 = local_90 + 0x28;
    }
    thunk_FUN_1803d64e0(pppppcVar11,uVar13);
  }
  local_a8 = (char *****)0x0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_a8 = (char *****)FUN_18000fb70(0x20);
  uVar5 = s_legitbot_velocity_ground_1806f7690._12_4_;
  uVar4 = s_legitbot_velocity_ground_1806f7690._8_4_;
  uVar3 = s_legitbot_velocity_ground_1806f7690._4_4_;
  local_98 = 0x18;
  local_90 = 0x1f;
  *(undefined4 *)local_a8 = s_legitbot_velocity_ground_1806f7690._0_4_;
  *(undefined4 *)((longlong)local_a8 + 4) = uVar3;
  *(undefined4 *)(local_a8 + 1) = uVar4;
  *(undefined4 *)((longlong)local_a8 + 0xc) = uVar5;
  local_a8[2] = (char ****)s_legitbot_velocity_ground_1806f7690._16_8_;
  *(char *)(local_a8 + 3) = '\0';
  cVar6 = FUN_1801c2460(param_1,&local_a8);
  if (cVar6 != '\0') {
    lVar1 = *param_1;
    pcVar12 = ",\n";
    if (*(char *)(lVar1 + 0x20) != '\0') {
      pcVar12 = "{\n";
    }
    sVar9 = strlen(pcVar12);
    FUN_1800134a0(lVar1,pcVar12,sVar9);
    *(undefined1 *)(lVar1 + 0x20) = 0;
    FUN_1800134a0(lVar1,&DAT_1806f2ad0,3);
    pppppcVar11 = (char *****)&local_a8;
    if (0xf < local_90) {
      pppppcVar11 = local_a8;
    }
    FUN_1800134a0(lVar1,pppppcVar11,local_98);
    FUN_1800134a0(lVar1,&DAT_1806f2b04,3);
    pcVar12 = "false";
    if (*(char *)(param_2 + 0x7aa0) != '\0') {
      pcVar12 = "true";
    }
    sVar9 = strlen(pcVar12);
    FUN_1800134a0(lVar1,pcVar12,sVar9);
  }
  if (0xf < local_90) {
    uVar13 = local_90 + 1;
    pppppcVar11 = local_a8;
    if (0xfff < uVar13) {
      pppppcVar11 = (char *****)local_a8[-1];
      if ((char *)0x1f < (char *)((longlong)local_a8 + (-8 - (longlong)pppppcVar11)))
      goto LAB_18016f5ba;
      uVar13 = local_90 + 0x28;
    }
    thunk_FUN_1803d64e0(pppppcVar11,uVar13);
  }
  local_a8 = (char *****)0x0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  ppppcVar10 = (char ****)FUN_18000fb70(0x20);
  local_98 = 0x15;
  local_90 = 0x1f;
  local_a8 = (char *****)ppppcVar10;
  thunk_FUN_180540530(ppppcVar10,"legitbot.ground_color",0x15);
  *(undefined1 *)((longlong)ppppcVar10 + 0x15) = 0;
  FUN_18016bdf0(param_1,&local_a8,param_2 + 0x7aa4);
  FUN_18000f890(&local_a8);
  local_a8 = (char *****)0x0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_a8 = (char *****)FUN_18000fb70(0x20);
  uVar5 = s_legitbot_automatic_weapons_1806f7740._4_4_;
  local_98 = 0x1a;
  local_90 = 0x1f;
  uVar3 = CONCAT22(s_legitbot_automatic_weapons_1806f7740._10_2_,
                   s_legitbot_automatic_weapons_1806f7740._8_2_);
  uVar4 = CONCAT22(s_legitbot_automatic_weapons_1806f7740._14_2_,
                   s_legitbot_automatic_weapons_1806f7740._12_2_);
  *(undefined4 *)local_a8 = s_legitbot_automatic_weapons_1806f7740._0_4_;
  *(undefined4 *)((longlong)local_a8 + 4) = uVar5;
  *(undefined4 *)(local_a8 + 1) = uVar3;
  *(undefined4 *)((longlong)local_a8 + 0xc) = uVar4;
  uVar5 = s_legitbot_automatic_weapons_1806f7740._22_4_;
  uVar4 = s_legitbot_automatic_weapons_1806f7740._18_4_;
  uVar3 = CONCAT22(s_legitbot_automatic_weapons_1806f7740._16_2_,
                   s_legitbot_automatic_weapons_1806f7740._14_2_);
  *(uint *)((longlong)local_a8 + 10) =
       CONCAT22(s_legitbot_automatic_weapons_1806f7740._12_2_,
                s_legitbot_automatic_weapons_1806f7740._10_2_);
  *(undefined4 *)((longlong)local_a8 + 0xe) = uVar3;
  *(undefined4 *)((longlong)local_a8 + 0x12) = uVar4;
  *(undefined4 *)((longlong)local_a8 + 0x16) = uVar5;
  *(char *)((longlong)local_a8 + 0x1a) = '\0';
  cVar6 = FUN_1801c2460(param_1,&local_a8);
  if (cVar6 != '\0') {
    lVar1 = *param_1;
    pcVar12 = ",\n";
    if (*(char *)(lVar1 + 0x20) != '\0') {
      pcVar12 = "{\n";
    }
    sVar9 = strlen(pcVar12);
    FUN_1800134a0(lVar1,pcVar12,sVar9);
    *(undefined1 *)(lVar1 + 0x20) = 0;
    FUN_1800134a0(lVar1,&DAT_1806f2ad0,3);
    pppppcVar11 = (char *****)&local_a8;
    if (0xf < local_90) {
      pppppcVar11 = local_a8;
    }
    FUN_1800134a0(lVar1,pppppcVar11,local_98);
    FUN_1800134a0(lVar1,&DAT_1806f2b04,3);
    pcVar12 = "false";
    if (*(char *)(param_2 + 0x7ab4) != '\0') {
      pcVar12 = "true";
    }
    sVar9 = strlen(pcVar12);
    FUN_1800134a0(lVar1,pcVar12,sVar9);
  }
  if (0xf < local_90) {
    uVar13 = local_90 + 1;
    pppppcVar11 = local_a8;
    if (0xfff < uVar13) {
      pppppcVar11 = (char *****)local_a8[-1];
      if ((char *)0x1f < (char *)((longlong)local_a8 + (-8 - (longlong)pppppcVar11)))
      goto LAB_18016f5ba;
      uVar13 = local_90 + 0x28;
    }
    thunk_FUN_1803d64e0(pppppcVar11,uVar13);
  }
  local_a8 = (char *****)0x0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_a8 = (char *****)FUN_18000fb70(0x30);
  uVar5 = s_legitbot_automatic_weapons_inter_1806f76e0._12_4_;
  uVar4 = s_legitbot_automatic_weapons_inter_1806f76e0._8_4_;
  uVar3 = s_legitbot_automatic_weapons_inter_1806f76e0._4_4_;
  local_98 = 0x23;
  local_90 = 0x2f;
  *(undefined4 *)local_a8 = s_legitbot_automatic_weapons_inter_1806f76e0._0_4_;
  *(undefined4 *)((longlong)local_a8 + 4) = uVar3;
  *(undefined4 *)(local_a8 + 1) = uVar4;
  *(undefined4 *)((longlong)local_a8 + 0xc) = uVar5;
  uVar5 = s_legitbot_automatic_weapons_inter_1806f76e0._28_4_;
  uVar4 = s_legitbot_automatic_weapons_inter_1806f76e0._24_4_;
  uVar3 = s_legitbot_automatic_weapons_inter_1806f76e0._20_4_;
  *(undefined4 *)(local_a8 + 2) = s_legitbot_automatic_weapons_inter_1806f76e0._16_4_;
  *(undefined4 *)((longlong)local_a8 + 0x14) = uVar3;
  *(undefined4 *)(local_a8 + 3) = uVar4;
  *(undefined4 *)((longlong)local_a8 + 0x1c) = uVar5;
  *(uint *)((longlong)local_a8 + 0x1f) =
       CONCAT31(s_legitbot_automatic_weapons_inter_1806f76e0._32_3_,
                s_legitbot_automatic_weapons_inter_1806f76e0[0x1f]);
  *(char *)((longlong)local_a8 + 0x23) = '\0';
  cVar6 = FUN_1801c2460(param_1,&local_a8);
  if (cVar6 != '\0') {
    FUN_1800f2db0(*param_1,&local_a8,param_2 + 0x7ab8);
  }
  if (0xf < local_90) {
    uVar13 = local_90 + 1;
    pppppcVar11 = local_a8;
    if (0xfff < uVar13) {
      pppppcVar11 = (char *****)local_a8[-1];
      if ((char *)0x1f < (char *)((longlong)local_a8 + (-8 - (longlong)pppppcVar11)))
      goto LAB_18016f5ba;
      uVar13 = local_90 + 0x28;
    }
    thunk_FUN_1803d64e0(pppppcVar11,uVar13);
  }
  local_a8 = (char *****)0x0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_a8 = (char *****)FUN_18000fb70(0x20);
  uVar5 = s_legitbot_standalone_recoil_1806f7708._4_4_;
  local_98 = 0x1a;
  local_90 = 0x1f;
  uVar3 = CONCAT22(s_legitbot_standalone_recoil_1806f7708._10_2_,
                   s_legitbot_standalone_recoil_1806f7708._8_2_);
  uVar4 = CONCAT22(s_legitbot_standalone_recoil_1806f7708._14_2_,
                   s_legitbot_standalone_recoil_1806f7708._12_2_);
  *(undefined4 *)local_a8 = s_legitbot_standalone_recoil_1806f7708._0_4_;
  *(undefined4 *)((longlong)local_a8 + 4) = uVar5;
  *(undefined4 *)(local_a8 + 1) = uVar3;
  *(undefined4 *)((longlong)local_a8 + 0xc) = uVar4;
  uVar5 = s_legitbot_standalone_recoil_1806f7708._22_4_;
  uVar4 = s_legitbot_standalone_recoil_1806f7708._18_4_;
  uVar3 = CONCAT22(s_legitbot_standalone_recoil_1806f7708._16_2_,
                   s_legitbot_standalone_recoil_1806f7708._14_2_);
  *(uint *)((longlong)local_a8 + 10) =
       CONCAT22(s_legitbot_standalone_recoil_1806f7708._12_2_,
                s_legitbot_standalone_recoil_1806f7708._10_2_);
  *(undefined4 *)((longlong)local_a8 + 0xe) = uVar3;
  *(undefined4 *)((longlong)local_a8 + 0x12) = uVar4;
  *(undefined4 *)((longlong)local_a8 + 0x16) = uVar5;
  *(char *)((longlong)local_a8 + 0x1a) = '\0';
  cVar6 = FUN_1801c2460(param_1,&local_a8);
  if (cVar6 != '\0') {
    lVar1 = *param_1;
    if (*(char *)(lVar1 + 0x20) != '\0') {
      _Str_00 = "{\n";
    }
    sVar9 = strlen(_Str_00);
    FUN_1800134a0(lVar1,_Str_00,sVar9);
    *(undefined1 *)(lVar1 + 0x20) = 0;
    FUN_1800134a0(lVar1,&DAT_1806f2ad0,3);
    pppppcVar11 = (char *****)&local_a8;
    if (0xf < local_90) {
      pppppcVar11 = local_a8;
    }
    FUN_1800134a0(lVar1,pppppcVar11,local_98);
    FUN_1800134a0(lVar1,&DAT_1806f2b04,3);
    if (*(char *)(param_2 + 0x7abc) != '\0') {
      _Str = "true";
    }
    sVar9 = strlen(_Str);
    FUN_1800134a0(lVar1,_Str,sVar9);
  }
  if (0xf < local_90) {
    uVar13 = local_90 + 1;
    pppppcVar11 = local_a8;
    if (0xfff < uVar13) {
      pppppcVar11 = (char *****)local_a8[-1];
      if ((char *)0x1f < (char *)((longlong)local_a8 + (-8 - (longlong)pppppcVar11)))
      goto LAB_18016f5ba;
      uVar13 = local_90 + 0x28;
    }
    thunk_FUN_1803d64e0(pppppcVar11,uVar13);
  }
  local_a8 = (char *****)0x0;
  uStack_a0 = 0;
  local_a8 = (char *****)FUN_18000fb70(0x20);
  uVar5 = s_legitbot_standalone__1806f7788._12_4_;
  uVar4 = s_legitbot_standalone__1806f7788._8_4_;
  uVar3 = s_legitbot_standalone__1806f7788._4_4_;
  local_98 = 0x14;
  local_90 = 0x1f;
  *(undefined4 *)local_a8 = s_legitbot_standalone__1806f7788._0_4_;
  *(undefined4 *)((longlong)local_a8 + 4) = uVar3;
  *(undefined4 *)(local_a8 + 1) = uVar4;
  *(undefined4 *)((longlong)local_a8 + 0xc) = uVar5;
  *(undefined4 *)(local_a8 + 2) = s_legitbot_standalone__1806f7788._16_4_;
  *(char *)((longlong)local_a8 + 0x14) = '\0';
  FUN_1801b2620(param_1,&local_a8,param_2 + 0x7ac0);
  if (0xf < local_90) {
    uVar13 = local_90 + 1;
    pppppcVar11 = local_a8;
    if (0xfff < uVar13) {
      pppppcVar11 = (char *****)local_a8[-1];
      if ((char *)0x1f < (char *)((longlong)local_a8 + (-8 - (longlong)pppppcVar11)))
      goto LAB_18016f5ba;
      uVar13 = local_90 + 0x28;
    }
    thunk_FUN_1803d64e0(pppppcVar11,uVar13);
  }
  local_a8 = (char *****)0x0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_a8 = (char *****)FUN_18000fb70(0x20);
  uVar5 = s_legitbot_randomize_1806f77a0._12_4_;
  uVar4 = s_legitbot_randomize_1806f77a0._8_4_;
  uVar3 = s_legitbot_randomize_1806f77a0._4_4_;
  local_98 = 0x12;
  local_90 = 0x1f;
  *(undefined4 *)local_a8 = s_legitbot_randomize_1806f77a0._0_4_;
  *(undefined4 *)((longlong)local_a8 + 4) = uVar3;
  *(undefined4 *)(local_a8 + 1) = uVar4;
  *(undefined4 *)((longlong)local_a8 + 0xc) = uVar5;
  *(undefined2 *)(local_a8 + 2) = s_legitbot_randomize_1806f77a0._16_2_;
  *(char *)((longlong)local_a8 + 0x12) = '\0';
  cVar6 = FUN_1801c2460(param_1,&local_a8);
  if (cVar6 != '\0') {
    FUN_1800f2db0(*param_1,&local_a8,param_2 + 0x7ad4);
  }
  if (0xf < local_90) {
    uVar13 = local_90 + 1;
    pppppcVar11 = local_a8;
    if (0xfff < uVar13) {
      pppppcVar11 = (char *****)local_a8[-1];
      if ((char *)0x1f < (char *)((longlong)local_a8 + (-8 - (longlong)pppppcVar11))) {
LAB_18016f5ba:
        pcVar2 = (code *)swi(0x29);
        (*pcVar2)(5);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar13 = local_90 + 0x28;
    }
    thunk_FUN_1803d64e0(pppppcVar11,uVar13);
  }
  return;
}



/* ===== 18016f5d0 FUN_18016f5d0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18016f5d0(undefined8 *param_1,longlong param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  size_t sVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  char *pcVar11;
  char *pcVar12;
  undefined1 auStack_1c8 [40];
  char *local_1a0 [4];
  char *local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined1 local_160 [32];
  char *local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 local_128;
  char *local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_108;
  char *local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  ulonglong uStack_e8;
  char *local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  char *local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  char *local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 local_60 [32];
  ulonglong local_40;
  
  local_40 = DAT_180919500 ^ (ulonglong)auStack_1c8;
  local_120 = (char *)0x0;
  uStack_118 = 0;
  local_120 = (char *)FUN_18000fb70(0x20);
  uVar4 = s_visuals_world_view__1806f7760._12_4_;
  uVar3 = s_visuals_world_view__1806f7760._8_4_;
  uVar2 = s_visuals_world_view__1806f7760._4_4_;
  local_110 = 0x13;
  local_108 = 0x1f;
  *(undefined4 *)local_120 = s_visuals_world_view__1806f7760._0_4_;
  *(undefined4 *)(local_120 + 4) = uVar2;
  *(undefined4 *)(local_120 + 8) = uVar3;
  *(undefined4 *)(local_120 + 0xc) = uVar4;
  *(uint *)(local_120 + 0xf) =
       CONCAT31(s_visuals_world_view__1806f7760._16_3_,s_visuals_world_view__1806f7760[0xf]);
  local_120[0x13] = '\0';
  uVar6 = FUN_180073a70(local_1a0,&local_120,"override_fov");
  FUN_1801696b0(param_1,uVar6,param_2);
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,&local_120,&DAT_1806e0e18);
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    FUN_1800f2db0(*param_1,uVar6,param_2 + 4);
  }
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,&local_120,"override_aspect");
  FUN_1801696b0(param_1,uVar6,param_2 + 8);
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,&local_120,"aspect_scaling");
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    FUN_1800f2db0(*param_1,uVar6,param_2 + 0xc);
  }
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,&local_120,"aspect_value");
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    FUN_1800f2db0(*param_1,uVar6,param_2 + 0x10);
  }
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,&local_120,"disable_landing_bob");
  FUN_1801696b0(param_1,uVar6,param_2 + 0x14);
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,&local_120,"scope_override_fov");
  FUN_1801696b0(param_1,uVar6,param_2 + 0x15);
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,&local_120,"scope_x1");
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    FUN_1800f2db0(*param_1,uVar6,param_2 + 0x18);
  }
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,&local_120,"scope_x2");
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    FUN_1800f2db0(*param_1,uVar6,param_2 + 0x1c);
  }
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,&local_120,"instant_scope");
  FUN_1801696b0(param_1,uVar6,param_2 + 0x20);
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,&local_120,"show_viewmodel");
  FUN_1801696b0(param_1,uVar6,param_2 + 0x21);
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,&local_120,"force_viewmodel_fov");
  FUN_1801696b0(param_1,uVar6,param_2 + 0x22);
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,&local_120,"vm_override_fov");
  FUN_1801696b0(param_1,uVar6,param_2 + 0x23);
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,&local_120,"vm_fov");
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    FUN_1800f2db0(*param_1,uVar6,param_2 + 0x24);
  }
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,&local_120,"vm_override_position");
  FUN_1801696b0(param_1,uVar6,param_2 + 0x28);
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,&local_120,&DAT_1806f78b0);
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    FUN_1800f2e20(*param_1,uVar6,param_2 + 0x2c);
  }
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,&local_120,&DAT_1806f7884);
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    FUN_1800f2e20(*param_1,uVar6,param_2 + 0x30);
  }
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,&local_120,&DAT_1806f788c);
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    FUN_1800f2e20(*param_1,uVar6,param_2 + 0x34);
  }
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,&local_120,"vm_override_angles");
  FUN_1801696b0(param_1,uVar6,param_2 + 0x38);
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,&local_120,"vm_pitch");
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    FUN_1800f2e20(*param_1,uVar6,param_2 + 0x3c);
  }
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,&local_120,"vm_yaw");
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    FUN_1800f2e20(*param_1,uVar6,param_2 + 0x40);
  }
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,&local_120,"vm_roll");
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    FUN_1800f2e20(*param_1,uVar6,param_2 + 0x44);
  }
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,&local_120,"vm_override_modifiers");
  FUN_1801696b0(param_1,uVar6,param_2 + 0x48);
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,&local_120,"vm_bobbing");
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    FUN_1800f2db0(*param_1,uVar6,param_2 + 0x4c);
  }
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,&local_120,"vm_rotation_sway");
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    FUN_1800f2db0(*param_1,uVar6,param_2 + 0x50);
  }
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,&local_120,"vm_velocity_sway");
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    FUN_1800f2db0(*param_1,uVar6,param_2 + 0x54);
  }
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,&local_120,"vm_in_air_offset");
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    FUN_1800f2db0(*param_1,uVar6,param_2 + 0x58);
  }
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,&local_120,"vm_lower_weapon");
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    FUN_1800f2db0(*param_1,uVar6,param_2 + 0x5c);
  }
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,&local_120,"vm_ladder_bob");
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    FUN_1800f2db0(*param_1,uVar6,param_2 + 0x60);
  }
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,&local_120,"force_third_person");
  FUN_1801696b0(param_1,uVar6,param_2 + 100);
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,&local_120,"third_person_disablers");
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    FUN_1801940a0(*param_1,uVar6,param_2 + 0x65);
  }
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,&local_120,"third_person_distance");
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    FUN_1800f2db0(*param_1,uVar6,param_2 + 0x68);
  }
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,&local_120,"disable_overhead");
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    FUN_1801940a0(*param_1,uVar6,param_2 + 0x6c);
  }
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,&local_120,"unlock_spectating");
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    FUN_1801940a0(*param_1,uVar6,param_2 + 0x6e);
  }
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,&local_120,"visual_recoil");
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    FUN_180194310(*param_1,uVar6,param_2 + 0x70);
  }
  FUN_18000f890(local_1a0);
  local_180 = (char *)0x0;
  uStack_178 = 0;
  local_180 = (char *)FUN_18000fb70(0x20);
  uVar4 = s_visuals_world_esp__1806f7a28._12_4_;
  uVar3 = s_visuals_world_esp__1806f7a28._8_4_;
  uVar2 = s_visuals_world_esp__1806f7a28._4_4_;
  local_170 = 0x12;
  local_168 = 0x1f;
  *(undefined4 *)local_180 = s_visuals_world_esp__1806f7a28._0_4_;
  *(undefined4 *)(local_180 + 4) = uVar2;
  *(undefined4 *)(local_180 + 8) = uVar3;
  *(undefined4 *)(local_180 + 0xc) = uVar4;
  *(undefined2 *)(local_180 + 0x10) = s_visuals_world_esp__1806f7a28._16_2_;
  local_180[0x12] = '\0';
  uVar6 = FUN_180073a70(local_1a0,local_1a0 + 4,&DAT_18058b61c);
  FUN_1801b2790(param_1,uVar6,param_2 + 0x74);
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,local_1a0 + 4,"bomb_defused");
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    FUN_1801944c0(*param_1,uVar6,param_2 + 0xa8);
  }
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,local_1a0 + 4,"defuser");
  FUN_1801696b0(param_1,uVar6,param_2 + 0xb8);
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,local_1a0 + 4,"defuser_in_time");
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    FUN_1801944c0(*param_1,uVar6,param_2 + 0xbc);
  }
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,local_1a0 + 4,"defuser_too_late");
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    FUN_1801944c0(*param_1,uVar6,param_2 + 0xcc);
  }
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,local_1a0 + 4,"damage_low");
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    FUN_1801944c0(*param_1,uVar6,param_2 + 0xdc);
  }
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,local_1a0 + 4,"damage_high");
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    FUN_1801944c0(*param_1,uVar6,param_2 + 0xec);
  }
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,local_1a0 + 4,"bomb_colorize_effects");
  FUN_1801696b0(param_1,uVar6,param_2 + 0xfc);
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,local_1a0 + 4,"bomb_explosion");
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    FUN_1801944c0(*param_1,uVar6,param_2 + 0x100);
  }
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,local_1a0 + 4,"bomb_light");
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    FUN_1801944c0(*param_1,uVar6,param_2 + 0x110);
  }
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,local_1a0 + 4,"weapons");
  FUN_1801b2790(param_1,uVar6,param_2 + 0x120);
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,local_1a0 + 4,"weapons_colorize_effects");
  FUN_1801696b0(param_1,uVar6,param_2 + 0x154);
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,local_1a0 + 4,"weapon_effect");
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    FUN_1801944c0(*param_1,uVar6,param_2 + 0x158);
  }
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,local_1a0 + 4,"impact_effect");
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    FUN_1801944c0(*param_1,uVar6,param_2 + 0x168);
  }
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,local_1a0 + 4,"hostages");
  FUN_1801b2790(param_1,uVar6,param_2 + 0x178);
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,local_1a0 + 4,"grenades");
  FUN_1801b2790(param_1,uVar6,param_2 + 0x1ac);
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,local_1a0 + 4,"grenade_lethal");
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    FUN_1801944c0(*param_1,uVar6,param_2 + 0x1e0);
  }
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,local_1a0 + 4,"grenade_utility");
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    FUN_1801944c0(*param_1,uVar6,param_2 + 0x1f0);
  }
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,local_1a0 + 4,"item_exponent");
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    FUN_1800f2db0(*param_1,uVar6,param_2 + 0x200);
  }
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,local_1a0 + 4,"item_thickness");
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    FUN_1800f2e20(*param_1,uVar6,param_2 + 0x204);
  }
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,local_1a0 + 4,"item_points_thickness");
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    FUN_1800f2e20(*param_1,uVar6,param_2 + 0x208);
  }
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,local_1a0 + 4,"item_shimmer");
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    FUN_1800f2db0(*param_1,uVar6,param_2 + 0x20c);
  }
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,local_1a0 + 4,"smoke_radius");
  FUN_1801696b0(param_1,uVar6,param_2 + 0x210);
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,local_1a0 + 4,"smoke_radius_color");
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    FUN_1801944c0(*param_1,uVar6,param_2 + 0x214);
  }
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,local_1a0 + 4,"smoke_options");
  FUN_1801b2990(param_1,uVar6,param_2 + 0x224);
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,local_1a0 + 4,"inferno_radius");
  FUN_1801696b0(param_1,uVar6,param_2 + 0x238);
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,local_1a0 + 4,"inferno_lethal");
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    FUN_1801944c0(*param_1,uVar6,param_2 + 0x23c);
  }
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,local_1a0 + 4,"inferno_safe");
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    FUN_1801944c0(*param_1,uVar6,param_2 + 0x24c);
  }
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,local_1a0 + 4,"inferno_options");
  FUN_1801b2990(param_1,uVar6,param_2 + 0x25c);
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,local_1a0 + 4,"projectile_inferno");
  FUN_1801696b0(param_1,uVar6,param_2 + 0x270);
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,local_1a0 + 4,"projectile_lethal");
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    FUN_1801944c0(*param_1,uVar6,param_2 + 0x274);
  }
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,local_1a0 + 4,"projectile_safe");
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    FUN_1801944c0(*param_1,uVar6,param_2 + 0x284);
  }
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,local_1a0 + 4,"colorize_smoke");
  FUN_1801696b0(param_1,uVar6,param_2 + 0x294);
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,local_1a0 + 4,"smoke_ct");
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    FUN_1801944c0(*param_1,uVar6,param_2 + 0x298);
  }
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,local_1a0 + 4,"smoke_t");
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    FUN_1801944c0(*param_1,uVar6,param_2 + 0x2a8);
  }
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,local_1a0 + 4,"colorize_molotov");
  FUN_1801696b0(param_1,uVar6,param_2 + 0x2b8);
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,local_1a0 + 4,"molotov_lethal");
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    FUN_1801944c0(*param_1,uVar6,param_2 + 700);
  }
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,local_1a0 + 4,"molotov_safe");
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    FUN_1801944c0(*param_1,uVar6,param_2 + 0x2cc);
  }
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,local_1a0 + 4,"disable_inferno_decals");
  FUN_1801696b0(param_1,uVar6,param_2 + 0x2dc);
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,local_1a0 + 4,"colorize_explosion");
  FUN_1801696b0(param_1,uVar6,param_2 + 0x2dd);
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,local_1a0 + 4,"explosion_color");
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    FUN_1801944c0(*param_1,uVar6,param_2 + 0x2e0);
  }
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,local_1a0 + 4,"effects");
  FUN_1801696b0(param_1,uVar6,param_2 + 0x2f0);
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,local_1a0 + 4,"effects_color");
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    FUN_1801944c0(*param_1,uVar6,param_2 + 0x2f4);
  }
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,local_1a0 + 4,"effects_items");
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    FUN_180151e90(*param_1,uVar6,param_2 + 0x304);
  }
  FUN_18000f890(local_1a0);
  uVar10 = 0;
  do {
    uVar6 = FUN_18004e4f0(&local_a0,uVar10);
    uVar7 = FUN_180073a70(&local_80,local_1a0 + 4,"effects_item_color");
    uVar6 = FUN_180066820(local_1a0,uVar7,uVar6);
    cVar5 = FUN_1801c2460(param_1,uVar6);
    if (cVar5 != '\0') {
      FUN_1801944c0(*param_1,uVar6,uVar10 * 0x10 + param_2 + 0x30c);
    }
    FUN_18000f890(local_1a0);
    FUN_18000f890(&local_80);
    FUN_18000f890(&local_a0);
    uVar10 = uVar10 + 1;
  } while (uVar10 < 5);
  uVar6 = FUN_180073a70(local_1a0,local_1a0 + 4,"effects_item_inherit");
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    FUN_180151e90(*param_1,uVar6,param_2 + 0x35c);
  }
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,local_1a0 + 4,"trajectory");
  cVar5 = FUN_1801c2460(param_1,uVar6);
  pcVar12 = "false";
  if (cVar5 != '\0') {
    uVar7 = *param_1;
    FUN_1800f2cb0(uVar7,uVar6);
    pcVar11 = "false";
    if (*(char *)(param_2 + 0x361) != '\0') {
      pcVar11 = "true";
    }
    sVar8 = strlen(pcVar11);
    FUN_1800134a0(uVar7,pcVar11,sVar8);
  }
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,local_1a0 + 4,"trajectory_base");
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    FUN_1801944c0(*param_1,uVar6,param_2 + 0x364);
  }
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,local_1a0 + 4,"trajectory_hit");
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    FUN_1801944c0(*param_1,uVar6,param_2 + 0x374);
  }
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,local_1a0 + 4,"trajectory_team_damage");
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    FUN_1801944c0(*param_1,uVar6,param_2 + 900);
  }
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,local_1a0 + 4,"trajectory_exponent");
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    FUN_1800f2db0(*param_1,uVar6,param_2 + 0x394);
  }
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,local_1a0 + 4,"trajectory_thickness");
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    FUN_1800f2e20(*param_1,uVar6,param_2 + 0x398);
  }
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,local_1a0 + 4,"trajectory_points_thickness");
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    FUN_1800f2e20(*param_1,uVar6,param_2 + 0x39c);
  }
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,local_1a0 + 4,"trajectory_shimmer");
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    FUN_1801940a0(*param_1,uVar6,param_2 + 0x3a0);
  }
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,local_1a0 + 4,"trajectory_shimmer_strength");
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    FUN_1800f2db0(*param_1,uVar6,param_2 + 0x3a4);
  }
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,local_1a0 + 4,"trajectory_thrown");
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    uVar7 = *param_1;
    FUN_1800f2cb0(uVar7,uVar6);
    pcVar11 = "false";
    if (*(char *)(param_2 + 0x3a8) != '\0') {
      pcVar11 = "true";
    }
    sVar8 = strlen(pcVar11);
    FUN_1800134a0(uVar7,pcVar11,sVar8);
  }
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,local_1a0 + 4,"trajectory_pin_pulled_only");
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    uVar7 = *param_1;
    FUN_1800f2cb0(uVar7,uVar6);
    pcVar11 = "false";
    if (*(char *)(param_2 + 0x3a9) != '\0') {
      pcVar11 = "true";
    }
    sVar8 = strlen(pcVar11);
    FUN_1800134a0(uVar7,pcVar11,sVar8);
  }
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,local_1a0 + 4,"trajectory_precise");
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    uVar7 = *param_1;
    FUN_1800f2cb0(uVar7,uVar6);
    pcVar11 = "false";
    if (*(char *)(param_2 + 0x3aa) != '\0') {
      pcVar11 = "true";
    }
    sVar8 = strlen(pcVar11);
    FUN_1800134a0(uVar7,pcVar11,sVar8);
  }
  FUN_18000f890(local_1a0);
  local_140 = (char *)0x0;
  uStack_138 = 0;
  local_140 = (char *)FUN_18000fb70(0x20);
  uVar4 = s_visuals_world_hud__1806f7df8._12_4_;
  uVar3 = s_visuals_world_hud__1806f7df8._8_4_;
  uVar2 = s_visuals_world_hud__1806f7df8._4_4_;
  local_130 = 0x12;
  local_128 = 0x1f;
  *(undefined4 *)local_140 = s_visuals_world_hud__1806f7df8._0_4_;
  *(undefined4 *)(local_140 + 4) = uVar2;
  *(undefined4 *)(local_140 + 8) = uVar3;
  *(undefined4 *)(local_140 + 0xc) = uVar4;
  *(undefined2 *)(local_140 + 0x10) = s_visuals_world_hud__1806f7df8._16_2_;
  local_140[0x12] = '\0';
  uVar6 = FUN_180073a70(local_1a0,&local_140,"radar");
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    FUN_180194310(*param_1,uVar6,param_2 + 0x3ac);
  }
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,&local_140,"scope_overlay");
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    FUN_1800f2db0(*param_1,uVar6,param_2 + 0x3b0);
  }
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,&local_140,"scope_color_mode");
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    FUN_1800f2db0(*param_1,uVar6,param_2 + 0x3b4);
  }
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,&local_140,"scope_color");
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    FUN_1801944c0(*param_1,uVar6,param_2 + 0x3b8);
  }
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,&local_140,"scope_outer");
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    FUN_1801944c0(*param_1,uVar6,param_2 + 0x3c8);
  }
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,&local_140,"scope_inner");
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    FUN_1801944c0(*param_1,uVar6,param_2 + 0x3d8);
  }
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,&local_140,"scope_selection");
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    FUN_180194310(*param_1,uVar6,param_2 + 1000);
  }
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,&local_140,"scope_rotation");
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    FUN_1800f2db0(*param_1,uVar6,param_2 + 0x3ec);
  }
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,&local_140,"scope_offset");
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    FUN_1800f2db0(*param_1,uVar6,param_2 + 0x3f0);
  }
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,&local_140,"scope_size");
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    FUN_1800f2db0(*param_1,uVar6,param_2 + 0x3f4);
  }
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,&local_140,"scope_aspect");
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    FUN_1800f2db0(*param_1,uVar6,param_2 + 0x3f8);
  }
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,&local_140,"scope_spread_scale");
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    FUN_1800f2db0(*param_1,uVar6,param_2 + 0x3fc);
  }
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,&local_140,"scope_glow");
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    uVar7 = *param_1;
    FUN_1800f2cb0(uVar7,uVar6);
    pcVar11 = "false";
    if (*(char *)(param_2 + 0x400) != '\0') {
      pcVar11 = "true";
    }
    sVar8 = strlen(pcVar11);
    FUN_1800134a0(uVar7,pcVar11,sVar8);
  }
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,&local_140,"scope_glow_color");
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    FUN_1801944c0(*param_1,uVar6,param_2 + 0x404);
  }
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,&local_140,"inaccuracy");
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    uVar7 = *param_1;
    FUN_1800f2cb0(uVar7,uVar6);
    pcVar11 = "false";
    if (*(char *)(param_2 + 0x414) != '\0') {
      pcVar11 = "true";
    }
    sVar8 = strlen(pcVar11);
    FUN_1800134a0(uVar7,pcVar11,sVar8);
  }
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,&local_140,"inaccuracy_color");
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    FUN_1801944c0(*param_1,uVar6,param_2 + 0x418);
  }
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,&local_140,"inaccuracy_follow_recoil");
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    uVar7 = *param_1;
    FUN_1800f2cb0(uVar7,uVar6);
    pcVar11 = "false";
    if (*(char *)(param_2 + 0x428) != '\0') {
      pcVar11 = "true";
    }
    sVar8 = strlen(pcVar11);
    FUN_1800134a0(uVar7,pcVar11,sVar8);
  }
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,&local_140,"inaccuracy_only_in_scope");
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    uVar7 = *param_1;
    FUN_1800f2cb0(uVar7,uVar6);
    pcVar11 = "false";
    if (*(char *)(param_2 + 0x429) != '\0') {
      pcVar11 = "true";
    }
    sVar8 = strlen(pcVar11);
    FUN_1800134a0(uVar7,pcVar11,sVar8);
  }
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,&local_140,"inaccuracy_invert_fade");
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    uVar7 = *param_1;
    FUN_1800f2cb0(uVar7,uVar6);
    pcVar11 = "false";
    if (*(char *)(param_2 + 0x42a) != '\0') {
      pcVar11 = "true";
    }
    sVar8 = strlen(pcVar11);
    FUN_1800134a0(uVar7,pcVar11,sVar8);
  }
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,&local_140,"inaccuracy_fade_offset");
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    FUN_1800f2db0(*param_1,uVar6,param_2 + 0x42c);
  }
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,&local_140,"preserve_notices");
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    FUN_1800f2db0(*param_1,uVar6,param_2 + 0x430);
  }
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,&local_140,"hide_teammate_assists");
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    uVar7 = *param_1;
    FUN_1800f2cb0(uVar7,uVar6);
    pcVar11 = "false";
    if (*(char *)(param_2 + 0x434) != '\0') {
      pcVar11 = "true";
    }
    sVar8 = strlen(pcVar11);
    FUN_1800134a0(uVar7,pcVar11,sVar8);
  }
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,&local_140,"scoreboard_opacity");
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    FUN_1800f2db0(*param_1,uVar6,param_2 + 0x438);
  }
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,&local_140,"scoreboard_width");
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    FUN_1800f2db0(*param_1,uVar6,param_2 + 0x43c);
  }
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,&local_140,"reveal_money");
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    uVar7 = *param_1;
    FUN_1800f2cb0(uVar7,uVar6);
    pcVar11 = "false";
    if (*(char *)(param_2 + 0x440) != '\0') {
      pcVar11 = "true";
    }
    sVar8 = strlen(pcVar11);
    FUN_1800134a0(uVar7,pcVar11,sVar8);
  }
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,&local_140,"reveal_ranks");
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    uVar7 = *param_1;
    FUN_1800f2cb0(uVar7,uVar6);
    pcVar11 = "false";
    if (*(char *)(param_2 + 0x441) != '\0') {
      pcVar11 = "true";
    }
    sVar8 = strlen(pcVar11);
    FUN_1800134a0(uVar7,pcVar11,sVar8);
  }
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,&local_140,"equipment");
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    FUN_1800f2db0(*param_1,uVar6,param_2 + 0x444);
  }
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,&local_140,"equipment_items");
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    FUN_1801bf400(*param_1,uVar6,param_2 + 0x448);
  }
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,&local_140,"force_sniper_crosshair");
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    uVar7 = *param_1;
    FUN_1800f2cb0(uVar7,uVar6);
    pcVar11 = "false";
    if (*(char *)(param_2 + 0x451) != '\0') {
      pcVar11 = "true";
    }
    sVar8 = strlen(pcVar11);
    FUN_1800134a0(uVar7,pcVar11,sVar8);
  }
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,&local_140,"force_while_scoped");
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    uVar7 = *param_1;
    FUN_1800f2cb0(uVar7,uVar6);
    pcVar11 = "false";
    if (*(char *)(param_2 + 0x452) != '\0') {
      pcVar11 = "true";
    }
    sVar8 = strlen(pcVar11);
    FUN_1800134a0(uVar7,pcVar11,sVar8);
  }
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,&local_140,"force_while_c4");
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    uVar7 = *param_1;
    FUN_1800f2cb0(uVar7,uVar6);
    pcVar11 = "false";
    if (*(char *)(param_2 + 0x453) != '\0') {
      pcVar11 = "true";
    }
    sVar8 = strlen(pcVar11);
    FUN_1800134a0(uVar7,pcVar11,sVar8);
  }
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,&local_140,"hide_while_knife");
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    uVar7 = *param_1;
    FUN_1800f2cb0(uVar7,uVar6);
    pcVar11 = "false";
    if (*(char *)(param_2 + 0x454) != '\0') {
      pcVar11 = "true";
    }
    sVar8 = strlen(pcVar11);
    FUN_1800134a0(uVar7,pcVar11,sVar8);
  }
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,&local_140,"hide_while_grenade");
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    uVar7 = *param_1;
    FUN_1800f2cb0(uVar7,uVar6);
    pcVar11 = "false";
    if (*(char *)(param_2 + 0x455) != '\0') {
      pcVar11 = "true";
    }
    sVar8 = strlen(pcVar11);
    FUN_1800134a0(uVar7,pcVar11,sVar8);
  }
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,&local_140,"penetration");
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    uVar7 = *param_1;
    FUN_1800f2cb0(uVar7,uVar6);
    pcVar11 = "false";
    if (*(char *)(param_2 + 0x456) != '\0') {
      pcVar11 = "true";
    }
    sVar8 = strlen(pcVar11);
    FUN_1800134a0(uVar7,pcVar11,sVar8);
  }
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,&local_140,"penetration_base");
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    FUN_1801944c0(*param_1,uVar6,param_2 + 0x458);
  }
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,&local_140,"penetration_penetrable");
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    FUN_1801944c0(*param_1,uVar6,param_2 + 0x468);
  }
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,&local_140,"penetration_target");
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    FUN_1801944c0(*param_1,uVar6,param_2 + 0x478);
  }
  FUN_18000f890(local_1a0);
  local_e0 = (char *)0x0;
  uStack_d8 = 0;
  local_e0 = (char *)FUN_18000fb70(0x20);
  uVar4 = s_visuals_world_removals__1806f8148._12_4_;
  uVar3 = s_visuals_world_removals__1806f8148._8_4_;
  uVar2 = s_visuals_world_removals__1806f8148._4_4_;
  local_d0 = 0x17;
  local_c8 = 0x1f;
  *(undefined4 *)local_e0 = s_visuals_world_removals__1806f8148._0_4_;
  *(undefined4 *)(local_e0 + 4) = uVar2;
  *(undefined4 *)(local_e0 + 8) = uVar3;
  *(undefined4 *)(local_e0 + 0xc) = uVar4;
  *(ulonglong *)(local_e0 + 0xf) =
       CONCAT71(s_visuals_world_removals__1806f8148._16_7_,s_visuals_world_removals__1806f8148[0xf])
  ;
  local_e0[0x17] = '\0';
  uVar6 = FUN_180073a70(local_1a0,&local_e0,"team_intro");
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    uVar7 = *param_1;
    FUN_1800f2cb0(uVar7,uVar6);
    pcVar11 = "false";
    if (*(char *)(param_2 + 0x488) != '\0') {
      pcVar11 = "true";
    }
    sVar8 = strlen(pcVar11);
    FUN_1800134a0(uVar7,pcVar11,sVar8);
  }
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,&local_e0,"panorama_dots");
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    uVar7 = *param_1;
    FUN_1800f2cb0(uVar7,uVar6);
    pcVar11 = "false";
    if (*(char *)(param_2 + 0x489) != '\0') {
      pcVar11 = "true";
    }
    sVar8 = strlen(pcVar11);
    FUN_1800134a0(uVar7,pcVar11,sVar8);
  }
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,&local_e0,"bottom_gradient");
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    uVar7 = *param_1;
    FUN_1800f2cb0(uVar7,uVar6);
    pcVar11 = "false";
    if (*(char *)(param_2 + 0x48a) != '\0') {
      pcVar11 = "true";
    }
    sVar8 = strlen(pcVar11);
    FUN_1800134a0(uVar7,pcVar11,sVar8);
  }
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,&local_e0,"damage_indicator");
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    uVar7 = *param_1;
    FUN_1800f2cb0(uVar7,uVar6);
    pcVar11 = "false";
    if (*(char *)(param_2 + 0x48b) != '\0') {
      pcVar11 = "true";
    }
    sVar8 = strlen(pcVar11);
    FUN_1800134a0(uVar7,pcVar11,sVar8);
  }
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,&local_e0,"server_ads");
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    uVar7 = *param_1;
    FUN_1800f2cb0(uVar7,uVar6);
    pcVar11 = "false";
    if (*(char *)(param_2 + 0x48c) != '\0') {
      pcVar11 = "true";
    }
    sVar8 = strlen(pcVar11);
    FUN_1800134a0(uVar7,pcVar11,sVar8);
  }
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,&local_e0,"flashbang");
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    uVar7 = *param_1;
    FUN_1800f2cb0(uVar7,uVar6);
    pcVar11 = "false";
    if (*(char *)(param_2 + 0x48d) != '\0') {
      pcVar11 = "true";
    }
    sVar8 = strlen(pcVar11);
    FUN_1800134a0(uVar7,pcVar11,sVar8);
  }
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,&local_e0,&DAT_1806e7598);
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    uVar7 = *param_1;
    FUN_1800f2cb0(uVar7,uVar6);
    pcVar11 = "false";
    if (*(char *)(param_2 + 0x48e) != '\0') {
      pcVar11 = "true";
    }
    sVar8 = strlen(pcVar11);
    FUN_1800134a0(uVar7,pcVar11,sVar8);
  }
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,&local_e0,&DAT_1806f816c);
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    uVar7 = *param_1;
    FUN_1800f2cb0(uVar7,uVar6);
    pcVar11 = "false";
    if (*(char *)(param_2 + 0x48f) != '\0') {
      pcVar11 = "true";
    }
    sVar8 = strlen(pcVar11);
    FUN_1800134a0(uVar7,pcVar11,sVar8);
  }
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,&local_e0,"carried_hostage");
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    uVar7 = *param_1;
    FUN_1800f2cb0(uVar7,uVar6);
    pcVar11 = "false";
    if (*(char *)(param_2 + 0x490) != '\0') {
      pcVar11 = "true";
    }
    sVar8 = strlen(pcVar11);
    FUN_1800134a0(uVar7,pcVar11,sVar8);
  }
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,&local_e0,"post_processing");
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    uVar7 = *param_1;
    FUN_1800f2cb0(uVar7,uVar6);
    pcVar11 = "false";
    if (*(char *)(param_2 + 0x491) != '\0') {
      pcVar11 = "true";
    }
    sVar8 = strlen(pcVar11);
    FUN_1800134a0(uVar7,pcVar11,sVar8);
  }
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,&local_e0,"water");
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    uVar7 = *param_1;
    FUN_1800f2cb0(uVar7,uVar6);
    pcVar11 = "false";
    if (*(char *)(param_2 + 0x492) != '\0') {
      pcVar11 = "true";
    }
    sVar8 = strlen(pcVar11);
    FUN_1800134a0(uVar7,pcVar11,sVar8);
  }
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,&local_e0,"blood");
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    uVar7 = *param_1;
    FUN_1800f2cb0(uVar7,uVar6);
    pcVar11 = "false";
    if (*(char *)(param_2 + 0x493) != '\0') {
      pcVar11 = "true";
    }
    sVar8 = strlen(pcVar11);
    FUN_1800134a0(uVar7,pcVar11,sVar8);
  }
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,&local_e0,"decals");
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    uVar7 = *param_1;
    FUN_1800f2cb0(uVar7,uVar6);
    pcVar11 = "false";
    if (*(char *)(param_2 + 0x494) != '\0') {
      pcVar11 = "true";
    }
    sVar8 = strlen(pcVar11);
    FUN_1800134a0(uVar7,pcVar11,sVar8);
  }
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,&local_e0,"ragdolls");
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    FUN_1800f2db0(*param_1,uVar6,param_2 + 0x498);
  }
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,&local_e0,"gravity");
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    FUN_1800f2db0(*param_1,uVar6,param_2 + 0x49c);
  }
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,&local_e0,"friction");
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    FUN_1800f2db0(*param_1,uVar6,param_2 + 0x4a0);
  }
  FUN_18000f890(local_1a0);
  local_a0 = (char *)0x0;
  uStack_98 = 0;
  local_a0 = (char *)FUN_18000fb70(0x20);
  uVar4 = s_visuals_world_hitmarker__1806f81f8._12_4_;
  uVar3 = s_visuals_world_hitmarker__1806f81f8._8_4_;
  uVar2 = s_visuals_world_hitmarker__1806f81f8._4_4_;
  local_90 = 0x18;
  local_88 = 0x1f;
  *(undefined4 *)local_a0 = s_visuals_world_hitmarker__1806f81f8._0_4_;
  *(undefined4 *)(local_a0 + 4) = uVar2;
  *(undefined4 *)(local_a0 + 8) = uVar3;
  *(undefined4 *)(local_a0 + 0xc) = uVar4;
  *(undefined8 *)(local_a0 + 0x10) = s_visuals_world_hitmarker__1806f81f8._16_8_;
  local_a0[0x18] = '\0';
  uVar6 = FUN_180073a70(local_1a0,&local_a0,"marker_2d");
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    uVar7 = *param_1;
    FUN_1800f2cb0(uVar7,uVar6);
    pcVar11 = "false";
    if (*(char *)(param_2 + 0x4a4) != '\0') {
      pcVar11 = "true";
    }
    sVar8 = strlen(pcVar11);
    FUN_1800134a0(uVar7,pcVar11,sVar8);
  }
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,&local_a0,"color_2d");
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    FUN_1801944c0(*param_1,uVar6,param_2 + 0x4a8);
  }
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,&local_a0,"duration_2d");
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    FUN_1800f2e20(*param_1,uVar6,param_2 + 0x4b8);
  }
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,&local_a0,"marker_3d");
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    uVar7 = *param_1;
    FUN_1800f2cb0(uVar7,uVar6);
    pcVar11 = "false";
    if (*(char *)(param_2 + 0x4bc) != '\0') {
      pcVar11 = "true";
    }
    sVar8 = strlen(pcVar11);
    FUN_1800134a0(uVar7,pcVar11,sVar8);
  }
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,&local_a0,"color_3d");
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    FUN_1801944c0(*param_1,uVar6,param_2 + 0x4c0);
  }
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,&local_a0,"duration_3d");
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    FUN_1800f2e20(*param_1,uVar6,param_2 + 0x4d0);
  }
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,&local_a0,"damage");
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    uVar7 = *param_1;
    FUN_1800f2cb0(uVar7,uVar6);
    pcVar11 = "false";
    if (*(char *)(param_2 + 0x4d4) != '\0') {
      pcVar11 = "true";
    }
    sVar8 = strlen(pcVar11);
    FUN_1800134a0(uVar7,pcVar11,sVar8);
  }
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,&local_a0,"color_damage");
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    FUN_1801944c0(*param_1,uVar6,param_2 + 0x4d8);
  }
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,&local_a0,"duration_damage");
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    FUN_1800f2e20(*param_1,uVar6,param_2 + 0x4e8);
  }
  FUN_18000f890(local_1a0);
  local_c0 = (char *)0x0;
  uStack_b8 = 0;
  local_c0 = (char *)FUN_18000fb70(0x20);
  uVar4 = s_visuals_world_tracers__1806f8290._8_4_;
  uVar3 = s_visuals_world_tracers__1806f8290._4_4_;
  local_b0 = 0x16;
  local_a8 = 0x1f;
  uVar2 = CONCAT22(s_visuals_world_tracers__1806f8290._14_2_,
                   s_visuals_world_tracers__1806f8290._12_2_);
  *(undefined4 *)local_c0 = s_visuals_world_tracers__1806f8290._0_4_;
  *(undefined4 *)(local_c0 + 4) = uVar3;
  *(undefined4 *)(local_c0 + 8) = uVar4;
  *(undefined4 *)(local_c0 + 0xc) = uVar2;
  *(ulonglong *)(local_c0 + 0xe) =
       CONCAT62(s_visuals_world_tracers__1806f8290._16_6_,s_visuals_world_tracers__1806f8290._14_2_)
  ;
  local_c0[0x16] = '\0';
  uVar6 = FUN_180073a70(local_1a0,&local_c0,"enemies");
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    uVar7 = *param_1;
    FUN_1800f2cb0(uVar7,uVar6);
    pcVar11 = "false";
    if (*(char *)(param_2 + 0x4ec) != '\0') {
      pcVar11 = "true";
    }
    sVar8 = strlen(pcVar11);
    FUN_1800134a0(uVar7,pcVar11,sVar8);
  }
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,&local_c0,"enemies_color");
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    FUN_1801944c0(*param_1,uVar6,param_2 + 0x4f0);
  }
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,&local_c0,"enemies_duration");
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    FUN_1800f2e20(*param_1,uVar6,param_2 + 0x500);
  }
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,&local_c0,"teammates");
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    uVar7 = *param_1;
    FUN_1800f2cb0(uVar7,uVar6);
    pcVar11 = "false";
    if (*(char *)(param_2 + 0x504) != '\0') {
      pcVar11 = "true";
    }
    sVar8 = strlen(pcVar11);
    FUN_1800134a0(uVar7,pcVar11,sVar8);
  }
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,&local_c0,"teammates_color");
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    FUN_1801944c0(*param_1,uVar6,param_2 + 0x508);
  }
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,&local_c0,"teammates_duration");
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    FUN_1800f2e20(*param_1,uVar6,param_2 + 0x518);
  }
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,&local_c0,"local");
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    uVar7 = *param_1;
    FUN_1800f2cb0(uVar7,uVar6);
    pcVar11 = "false";
    if (*(char *)(param_2 + 0x51c) != '\0') {
      pcVar11 = "true";
    }
    sVar8 = strlen(pcVar11);
    FUN_1800134a0(uVar7,pcVar11,sVar8);
  }
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,&local_c0,"local_color");
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    FUN_1801944c0(*param_1,uVar6,param_2 + 0x520);
  }
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,&local_c0,"local_duration");
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    FUN_1800f2e20(*param_1,uVar6,param_2 + 0x530);
  }
  FUN_18000f890(local_1a0);
  uVar6 = FUN_180073a70(local_1a0,&local_c0,"shared");
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    uVar7 = *param_1;
    FUN_1800f2cb0(uVar7,uVar6);
    pcVar11 = "false";
    if (*(char *)(param_2 + 0x534) != '\0') {
      pcVar11 = "true";
    }
    sVar8 = strlen(pcVar11);
    FUN_1800134a0(uVar7,pcVar11,sVar8);
  }
  FUN_18000f890(local_1a0);
  local_1a0[0] = "enemies";
  local_1a0[1] = "teammates";
  local_1a0[2] = "local";
  local_1a0[3] = "shared";
  uVar10 = 0;
  do {
    pcVar11 = local_1a0[uVar10];
    uVar6 = FUN_180073a70(local_60,&local_c0,"style_");
    sVar8 = strlen(pcVar11);
    puVar9 = (undefined8 *)FUN_1800134a0(uVar6,pcVar11,sVar8);
    local_80 = *puVar9;
    uStack_78 = puVar9[1];
    local_70 = puVar9[2];
    uStack_68 = puVar9[3];
    puVar9[2] = 0;
    puVar9[3] = 0xf;
    *(undefined1 *)puVar9 = 0;
    puVar9 = (undefined8 *)FUN_1800134a0(&local_80,&DAT_1806e6f24,1);
    local_100 = (char *)*puVar9;
    uStack_f8 = puVar9[1];
    local_f0 = puVar9[2];
    uStack_e8 = puVar9[3];
    puVar9[2] = 0;
    puVar9[3] = 0xf;
    *(undefined1 *)puVar9 = 0;
    FUN_18000f890(&local_80);
    FUN_18000f890(local_60);
    uVar6 = FUN_180073a70(local_160,&local_100,"use_3d_scale");
    cVar5 = FUN_1801c2460(param_1,uVar6);
    if (cVar5 != '\0') {
      uVar7 = *param_1;
      FUN_1800f2cb0(uVar7,uVar6);
      pcVar11 = "false";
      if (*(char *)(param_2 + 0x538 + uVar10 * 0x18) != '\0') {
        pcVar11 = "true";
      }
      sVar8 = strlen(pcVar11);
      FUN_1800134a0(uVar7,pcVar11,sVar8);
    }
    FUN_18000f890(local_160);
    uVar6 = FUN_180073a70(local_160,&local_100,"glow_opacity");
    cVar5 = FUN_1801c2460(param_1,uVar6);
    if (cVar5 != '\0') {
      FUN_1800f2db0(*param_1,uVar6,param_2 + 0x53c + uVar10 * 0x18);
    }
    FUN_18000f890(local_160);
    uVar6 = FUN_180073a70(local_160,&local_100,"thickness");
    cVar5 = FUN_1801c2460(param_1,uVar6);
    if (cVar5 != '\0') {
      FUN_1800f2e20(*param_1,uVar6,param_2 + 0x540 + uVar10 * 0x18);
    }
    FUN_18000f890(local_160);
    uVar6 = FUN_180073a70(local_160,&local_100,"scale");
    cVar5 = FUN_1801c2460(param_1,uVar6);
    if (cVar5 != '\0') {
      FUN_1800f2db0(*param_1,uVar6,param_2 + 0x544 + uVar10 * 0x18);
    }
    FUN_18000f890(local_160);
    uVar6 = FUN_180073a70(local_160,&local_100,"glow_width");
    cVar5 = FUN_1801c2460(param_1,uVar6);
    if (cVar5 != '\0') {
      FUN_1800f2e20(*param_1,uVar6,param_2 + 0x548 + uVar10 * 0x18);
    }
    FUN_18000f890(local_160);
    uVar6 = FUN_180073a70(local_160,&local_100,"glow_radius");
    cVar5 = FUN_1801c2460(param_1,uVar6);
    if (cVar5 != '\0') {
      FUN_1800f2e20(*param_1,uVar6,param_2 + 0x54c + uVar10 * 0x18);
    }
    FUN_18000f890(local_160);
    FUN_18000f890(&local_100);
    uVar10 = uVar10 + 1;
  } while (uVar10 < 4);
  local_100 = (char *)0x0;
  uStack_f8 = 0;
  local_100 = (char *)FUN_18000fb70(0x20);
  uVar4 = s_visuals_world_impacts__1806f8398._8_4_;
  uVar3 = s_visuals_world_impacts__1806f8398._4_4_;
  local_f0 = 0x16;
  uStack_e8 = 0x1f;
  uVar2 = CONCAT22(s_visuals_world_impacts__1806f8398._14_2_,
                   s_visuals_world_impacts__1806f8398._12_2_);
  *(undefined4 *)local_100 = s_visuals_world_impacts__1806f8398._0_4_;
  *(undefined4 *)(local_100 + 4) = uVar3;
  *(undefined4 *)(local_100 + 8) = uVar4;
  *(undefined4 *)(local_100 + 0xc) = uVar2;
  *(ulonglong *)(local_100 + 0xe) =
       CONCAT62(s_visuals_world_impacts__1806f8398._16_6_,s_visuals_world_impacts__1806f8398._14_2_)
  ;
  local_100[0x16] = '\0';
  uVar6 = FUN_180073a70(local_160,&local_100,"enabled");
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    uVar7 = *param_1;
    FUN_1800f2cb0(uVar7,uVar6);
    pcVar11 = "false";
    if (*(char *)(param_2 + 0x598) != '\0') {
      pcVar11 = "true";
    }
    sVar8 = strlen(pcVar11);
    FUN_1800134a0(uVar7,pcVar11,sVar8);
  }
  FUN_18000f890(local_160);
  uVar6 = FUN_180073a70(local_160,&local_100,"client");
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    FUN_1801944c0(*param_1,uVar6,param_2 + 0x59c);
  }
  FUN_18000f890(local_160);
  uVar6 = FUN_180073a70(local_160,&local_100,"server");
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    FUN_1801944c0(*param_1,uVar6,param_2 + 0x5ac);
  }
  FUN_18000f890(local_160);
  uVar6 = FUN_180073a70(local_160,&local_100,"scale");
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    FUN_1800f2db0(*param_1,uVar6,param_2 + 0x5bc);
  }
  FUN_18000f890(local_160);
  uVar6 = FUN_180073a70(local_160,&local_100,"rounding");
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    FUN_1800f2db0(*param_1,uVar6,param_2 + 0x5c0);
  }
  FUN_18000f890(local_160);
  uVar6 = FUN_180073a70(local_160,&local_100,"fill_opacity");
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    FUN_1800f2db0(*param_1,uVar6,param_2 + 0x5c4);
  }
  FUN_18000f890(local_160);
  uVar6 = FUN_180073a70(local_160,&local_100,"outline_opacity");
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    FUN_1800f2db0(*param_1,uVar6,param_2 + 0x5c8);
  }
  FUN_18000f890(local_160);
  uVar6 = FUN_180073a70(local_160,&local_100,"glow_opacity");
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    FUN_1800f2db0(*param_1,uVar6,param_2 + 0x5cc);
  }
  FUN_18000f890(local_160);
  uVar6 = FUN_180073a70(local_160,&local_100,&DAT_1806f83d8);
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    FUN_1800f2e20(*param_1,uVar6,param_2 + 0x5d0);
  }
  FUN_18000f890(local_160);
  uVar6 = FUN_180073a70(local_160,&local_100,"duration");
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    FUN_1800f2e20(*param_1,uVar6,param_2 + 0x5d4);
  }
  FUN_18000f890(local_160);
  uVar6 = FUN_180073a70(local_160,&local_100,"sparks");
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    uVar7 = *param_1;
    FUN_1800f2cb0(uVar7,uVar6);
    if (*(char *)(param_2 + 0x5d8) != '\0') {
      pcVar12 = "true";
    }
    sVar8 = strlen(pcVar12);
    FUN_1800134a0(uVar7,pcVar12,sVar8);
  }
  FUN_18000f890(local_160);
  uVar6 = FUN_180073a70(local_160,&local_100,"sparks_color");
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    FUN_1801944c0(*param_1,uVar6,param_2 + 0x5dc);
  }
  FUN_18000f890(local_160);
  uVar6 = FUN_180073a70(local_160,&local_100,"sparks_glow");
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    FUN_1801944c0(*param_1,uVar6,param_2 + 0x5ec);
  }
  FUN_18000f890(local_160);
  uVar6 = FUN_180073a70(local_160,&local_100,"sparks_radius");
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    FUN_1800f2e20(*param_1,uVar6,param_2 + 0x5fc);
  }
  FUN_18000f890(local_160);
  uVar6 = FUN_180073a70(local_160,&local_100,"sparks_count");
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    FUN_1800f2db0(*param_1,uVar6,param_2 + 0x600);
  }
  FUN_18000f890(local_160);
  uVar6 = FUN_180073a70(local_160,&local_100,"sparks_spread");
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    FUN_1800f2db0(*param_1,uVar6,param_2 + 0x604);
  }
  FUN_18000f890(local_160);
  uVar6 = FUN_180073a70(local_160,&local_100,"sparks_height");
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    FUN_1800f2db0(*param_1,uVar6,param_2 + 0x608);
  }
  FUN_18000f890(local_160);
  uVar6 = FUN_180073a70(local_160,&local_100,"sparks_lifetime");
  cVar5 = FUN_1801c2460(param_1,uVar6);
  if (cVar5 != '\0') {
    FUN_1800f2e20(*param_1,uVar6,param_2 + 0x60c);
  }
  FUN_18000f890(local_160);
  if (0xf < uStack_e8) {
    uVar10 = uStack_e8 + 1;
    pcVar12 = local_100;
    if (0xfff < uVar10) {
      pcVar12 = *(char **)(local_100 + -8);
      if ((char *)0x1f < local_100 + (-8 - (longlong)pcVar12)) {
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar10 = uStack_e8 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar12,uVar10);
  }
  FUN_18000f890(&local_c0);
  FUN_18000f890(&local_a0);
  FUN_18000f890(&local_e0);
  FUN_18000f890(&local_140);
  FUN_18000f890(local_1a0 + 4);
  FUN_18000f890(&local_120);
  return;
}



/* ===== 180172f50 FUN_180172f50 ===== */

void FUN_180172f50(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  
  cVar1 = FUN_1801c2460();
  if (cVar1 != '\0') {
    FUN_1800f3090(*param_1,param_2,param_3);
  }
  return;
}



/* ===== 180172f90 FUN_180172f90 ===== */

void FUN_180172f90(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  int *piVar2;
  longlong *plVar3;
  
  cVar1 = FUN_1801c2460();
  if (cVar1 != '\0') {
    piVar2 = (int *)FUN_1800f2fa0(*param_1,param_2);
    if ((piVar2 != (int *)0x0) && (*piVar2 == 3)) {
      plVar3 = (longlong *)(piVar2 + 4);
      *param_3 = 0;
      param_3[1] = 0;
      param_3[2] = 0;
      param_3[3] = 0;
      param_3[4] = 0;
      param_3[5] = 0;
      param_3[6] = 0;
      param_3[7] = 0;
      param_3[8] = 0;
      param_3[9] = 0;
      param_3[10] = 0;
      param_3[0xb] = 0;
      if (0xf < *(ulonglong *)(piVar2 + 10)) {
        plVar3 = (longlong *)*plVar3;
      }
      snprintf(param_3,0x60,&DAT_1806d3198,plVar3);
    }
  }
  return;
}



/* ===== 180173020 FUN_180173020 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180173020(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined1 local_48 [32];
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_68;
  cVar1 = FUN_1801c2460();
  if (cVar1 != '\0') {
    FUN_1800f3090(*param_1,param_2,param_3);
  }
  uVar2 = FUN_180073a70(local_48,param_2,"_mode");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1800f3090(*param_1,uVar2,param_3 + 4);
  }
  FUN_18000f890(local_48);
  return;
}



/* ===== 1801730b0 FUN_1801730b0 ===== */

void FUN_1801730b0(undefined8 *param_1,undefined8 param_2,undefined1 *param_3)

{
  char cVar1;
  int *piVar2;
  
  cVar1 = FUN_1801c2460();
  if ((cVar1 != '\0') && (piVar2 = (int *)FUN_1800f2fa0(*param_1,param_2), piVar2 != (int *)0x0)) {
    if (*piVar2 == 1) {
      *param_3 = (char)piVar2[1];
      return;
    }
    if (*piVar2 == 2) {
      if (*(double *)(piVar2 + 2) == 0.0) {
        *param_3 = 0;
        return;
      }
      *param_3 = 1;
      return;
    }
    *param_3 = *param_3;
  }
  return;
}



/* ===== 180173150 FUN_180173150 ===== */

void FUN_180173150(undefined8 *param_1,undefined8 param_2,float *param_3)

{
  char cVar1;
  longlong lVar2;
  double dVar3;
  
  cVar1 = FUN_1801c2460();
  if (cVar1 != '\0') {
    lVar2 = FUN_1800f2fa0(*param_1,param_2);
    if (lVar2 != 0) {
      dVar3 = (double)FUN_180370b10(lVar2,SUB84((double)*param_3,0));
      if (((uint)(float)dVar3 & 0x7f800000) != 0x7f800000) {
        *param_3 = (float)dVar3;
      }
    }
  }
  return;
}



/* ===== 1801731c0 FUN_1801731c0 ===== */

void FUN_1801731c0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  int *piVar2;
  longlong *plVar3;
  
  cVar1 = FUN_1801c2460();
  if (cVar1 != '\0') {
    piVar2 = (int *)FUN_1800f2fa0(*param_1,param_2);
    if ((piVar2 != (int *)0x0) && (*piVar2 == 3)) {
      plVar3 = (longlong *)(piVar2 + 4);
      *param_3 = 0;
      param_3[1] = 0;
      param_3[2] = 0;
      param_3[3] = 0;
      param_3[4] = 0;
      param_3[5] = 0;
      if (0xf < *(ulonglong *)(piVar2 + 10)) {
        plVar3 = (longlong *)*plVar3;
      }
      snprintf(param_3,0x30,&DAT_1806d3198,plVar3);
    }
  }
  return;
}



/* ===== 180173240 FUN_180173240 ===== */

void FUN_180173240(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  int *piVar2;
  longlong *plVar3;
  
  cVar1 = FUN_1801c2460();
  if (cVar1 != '\0') {
    piVar2 = (int *)FUN_1800f2fa0(*param_1,param_2);
    if ((piVar2 != (int *)0x0) && (*piVar2 == 3)) {
      plVar3 = (longlong *)(piVar2 + 4);
      *param_3 = 0;
      param_3[1] = 0;
      if (0xf < *(ulonglong *)(piVar2 + 10)) {
        plVar3 = (longlong *)*plVar3;
      }
      snprintf(param_3,0x10,&DAT_1806d3198,plVar3);
    }
  }
  return;
}



/* ===== 1801732b0 FUN_1801732b0 ===== */

void FUN_1801732b0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  
  cVar1 = FUN_1801c2460();
  if (cVar1 != '\0') {
    FUN_18019b3a0(*param_1,param_2,param_3);
  }
  return;
}



/* ===== 1801732f0 FUN_1801732f0 ===== */

void FUN_1801732f0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  int *piVar2;
  longlong *plVar3;
  
  cVar1 = FUN_1801c2460();
  if (cVar1 != '\0') {
    piVar2 = (int *)FUN_1800f2fa0(*param_1,param_2);
    if ((piVar2 != (int *)0x0) && (*piVar2 == 3)) {
      plVar3 = (longlong *)(piVar2 + 4);
      *param_3 = 0;
      param_3[1] = 0;
      param_3[2] = 0;
      param_3[3] = 0;
      if (0xf < *(ulonglong *)(piVar2 + 10)) {
        plVar3 = (longlong *)*plVar3;
      }
      snprintf(param_3,0x20,&DAT_1806d3198,plVar3);
    }
  }
  return;
}



/* ===== 180173370 FUN_180173370 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180173370(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_98 [32];
  undefined1 local_78 [32];
  undefined1 local_58 [32];
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStack_98;
  uVar2 = FUN_180073a70(local_78,param_2,".esp.enabled");
  FUN_1801730b0(param_1,uVar2,param_3);
  FUN_18000f890(local_78);
  uVar2 = FUN_180073a70(local_78,param_2,".esp.box");
  FUN_1801730b0(param_1,uVar2,param_3 + 1);
  FUN_18000f890(local_78);
  uVar2 = FUN_180073a70(local_78,param_2,".esp.name");
  FUN_1801730b0(param_1,uVar2,param_3 + 2);
  FUN_18000f890(local_78);
  uVar2 = FUN_180073a70(local_78,param_2,".esp.icon");
  FUN_1801730b0(param_1,uVar2,param_3 + 3);
  FUN_18000f890(local_78);
  uVar2 = FUN_180073a70(local_78,param_2,".esp.distance");
  FUN_1801730b0(param_1,uVar2,param_3 + 4);
  FUN_18000f890(local_78);
  uVar2 = FUN_180073a70(local_78,param_2,".esp.timer");
  FUN_1801730b0(param_1,uVar2,param_3 + 5);
  FUN_18000f890(local_78);
  uVar2 = FUN_180073a70(local_78,param_2,".esp.damage");
  FUN_1801730b0(param_1,uVar2,param_3 + 6);
  FUN_18000f890(local_78);
  uVar2 = FUN_180073a70(local_78,param_2,".esp.color");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_18019e140(*param_1,uVar2,param_3 + 8);
  }
  FUN_18000f890(local_78);
  uVar2 = FUN_180073a70(local_78,param_2,".esp.max_distance");
  FUN_180173150(param_1,uVar2,param_3 + 0x18);
  FUN_18000f890(local_78);
  uVar2 = FUN_180073a70(local_58,param_2,".chams");
  uVar3 = FUN_180073a70(local_78,uVar2,".enabled");
  FUN_1801730b0(param_1,uVar3,param_3 + 0x1c);
  FUN_18000f890(local_78);
  uVar3 = FUN_180073a70(local_78,uVar2,".visible");
  FUN_1801c2fd0(param_1,uVar3,param_3 + 0x20);
  FUN_18000f890(local_78);
  uVar3 = FUN_180073a70(local_78,uVar2,".occluded");
  FUN_1801c2fd0(param_1,uVar3,param_3 + 0x38);
  FUN_18000f890(local_78);
  uVar3 = FUN_180073a70(local_78,uVar2,".overlay");
  FUN_1801c2fd0(param_1,uVar3,param_3 + 0x50);
  FUN_18000f890(local_78);
  uVar2 = FUN_180073a70(local_78,uVar2,".overlay_occluded");
  FUN_1801c2fd0(param_1,uVar2,param_3 + 0x68);
  FUN_18000f890(local_78);
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,".glow.enabled");
  FUN_1801730b0(param_1,uVar2,param_3 + 0x80);
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,".glow.color");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_18019e140(*param_1,uVar2,param_3 + 0x84);
  }
  FUN_18000f890(local_58);
  return;
}



/* ===== 1801736c0 FUN_1801736c0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801736c0(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  char *_Str;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  size_t sVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int *piVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint uVar14;
  longlong *plVar15;
  int iVar16;
  undefined1 auStack_118 [32];
  ulonglong local_f8;
  undefined8 local_f0;
  undefined1 local_e8 [32];
  undefined1 local_c8 [32];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 local_88 [32];
  undefined1 local_68 [32];
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_118;
  local_f0 = param_2;
  uVar3 = FUN_180073a70(&local_a8,param_2,".esp.enabled");
  FUN_1801730b0(param_1,uVar3,param_3);
  FUN_18000f890();
  local_f8 = 0;
  do {
    uVar12 = local_f8;
    lVar4 = local_f8 * 0x98;
    lVar13 = lVar4 + param_3;
    _Str = (&PTR_s_health_bar_1805e7de0)[local_f8];
    uVar3 = FUN_180073a70(local_68,param_2,".esp.item.");
    sVar5 = strlen(_Str);
    puVar6 = (undefined4 *)FUN_1800134a0(uVar3,_Str,sVar5);
    local_a8 = *puVar6;
    uStack_a4 = puVar6[1];
    uStack_a0 = puVar6[2];
    uStack_9c = puVar6[3];
    local_98 = puVar6[4];
    uStack_94 = puVar6[5];
    uStack_90 = puVar6[6];
    uStack_8c = puVar6[7];
    *(undefined1 *)puVar6 = 0;
    *(undefined8 *)(puVar6 + 4) = 0;
    *(undefined8 *)(puVar6 + 6) = 0xf;
    FUN_18000f890(local_68);
    uVar3 = FUN_180073a70(local_c8,&local_a8,".enabled");
    FUN_1801730b0(param_1,uVar3,lVar4 + 4 + param_3);
    FUN_18000f890(local_c8);
    uVar3 = FUN_180073a70(local_c8,&local_a8,".side");
    cVar2 = FUN_1801c2460(param_1,uVar3);
    if (cVar2 != '\0') {
      FUN_1800f3090(*param_1,uVar3,lVar13 + 8);
    }
    FUN_18000f890(local_c8);
    uVar3 = FUN_180073a70(local_c8,&local_a8,".position");
    cVar2 = FUN_1801c2460(param_1,uVar3);
    if (cVar2 != '\0') {
      FUN_1800f3090(*param_1,uVar3,lVar13 + 0xc);
    }
    FUN_18000f890(local_c8);
    uVar3 = FUN_180073a70(local_c8,&local_a8);
    cVar2 = FUN_1801c2460(param_1,uVar3);
    if (cVar2 != '\0') {
      FUN_1800f3090(*param_1,uVar3);
    }
    FUN_18000f890(local_c8);
    iVar16 = 0;
    iVar1 = (&DAT_1805e7f10)[uVar12 * 0x46];
    if (0 < iVar1) {
      uVar11 = 0;
      iVar16 = 0;
      do {
        if (iVar16 < (int)((&DAT_1805e7f24)[uVar12 * 0x46 + uVar11 * 10] +
                          (&DAT_1805e7f20)[uVar12 * 0x46 + uVar11 * 10])) {
          iVar16 = (&DAT_1805e7f24)[uVar12 * 0x46 + uVar11 * 10] +
                   (&DAT_1805e7f20)[uVar12 * 0x46 + uVar11 * 10];
        }
        uVar14 = (int)uVar11 + 1;
        uVar11 = (ulonglong)uVar14;
      } while ((int)uVar14 < iVar1);
    }
    if (1 < iVar1) {
      uVar3 = FUN_180073a70(local_c8,&local_a8,".color_mode");
      cVar2 = FUN_1801c2460(param_1,uVar3);
      if (cVar2 != '\0') {
        FUN_1800f3090(*param_1,uVar3,lVar13 + 0x14);
      }
      FUN_18000f890(local_c8);
    }
    uVar11 = 0;
    if (iVar16 < 1) {
      iVar16 = 1;
    }
    if (0 < iVar16) {
      do {
        uVar3 = FUN_18003a390(local_e8,uVar11);
        uVar7 = FUN_180073a70(local_88,&local_a8,".color");
        uVar3 = FUN_180066820(local_c8,uVar7,uVar3);
        cVar2 = FUN_1801c2460(param_1,uVar3);
        if (cVar2 != '\0') {
          FUN_18019e140(*param_1,uVar3,uVar11 * 0x10 + 0x18 + lVar13);
        }
        FUN_18000f890(local_c8);
        FUN_18000f890(local_88);
        FUN_18000f890(local_e8);
        uVar14 = (int)uVar11 + 1;
        uVar11 = (ulonglong)uVar14;
      } while ((int)uVar14 < iVar16);
    }
    if ((&DAT_1805e7eec)[uVar12 * 0x46] == 0) {
      uVar3 = FUN_180073a70(local_e8,&local_a8,".background");
      FUN_1801730b0(param_1,uVar3,lVar13 + 0x78);
      FUN_18000f890(local_e8);
      uVar3 = FUN_180073a70(local_e8,&local_a8,".shadow");
      FUN_1801730b0(param_1,uVar3,lVar13 + 0x79);
      FUN_18000f890(local_e8);
      uVar3 = FUN_180073a70(local_e8,&local_a8,".shadow_color");
      cVar2 = FUN_1801c2460(param_1,uVar3);
      if (cVar2 != '\0') {
        FUN_18019e140(*param_1,uVar3,lVar13 + 0x7c);
      }
      FUN_18000f890(local_e8);
      uVar3 = FUN_180073a70(local_e8,&local_a8,".format");
      cVar2 = FUN_1801c2460(param_1,uVar3);
      if (cVar2 != '\0') {
        FUN_1800f3090(*param_1,uVar3,lVar13 + 0x8c);
      }
      FUN_18000f890(local_e8);
    }
    if ((&DAT_1805e7eec)[uVar12 * 0x46] - 1 < 2) {
      uVar3 = FUN_180073a70(local_e8,&local_a8,".font");
      cVar2 = FUN_1801c2460(param_1,uVar3);
      if (cVar2 != '\0') {
        FUN_1800f3090(*param_1,uVar3,lVar13 + 0x90);
      }
      FUN_18000f890(local_e8);
      uVar3 = FUN_180073a70(local_e8,&local_a8,".case");
      cVar2 = FUN_1801c2460(param_1,uVar3);
      if (cVar2 != '\0') {
        FUN_1800f3090(*param_1,uVar3,lVar13 + 0x94);
      }
      FUN_18000f890(local_e8);
    }
    if ((&DAT_1805e7eec)[uVar12 * 0x46] - 3 < 2) {
      uVar3 = FUN_180073a70(local_e8,&local_a8,".inverted");
      FUN_1801730b0(param_1,uVar3,lVar13 + 0x98);
      FUN_18000f890(local_e8);
    }
    FUN_18000f890(&local_a8);
    uVar3 = local_f0;
    local_f8 = local_f8 + 1;
    param_2 = local_f0;
  } while (local_f8 < 0x1d);
  uVar7 = FUN_180073a70(local_e8,local_f0,".esp.expected_damage");
  cVar2 = FUN_1801c2460(param_1,uVar7);
  if (cVar2 != '\0') {
    FUN_1800f3090(*param_1,uVar7,param_3 + 0x113c);
  }
  FUN_18000f890(local_e8);
  uVar7 = FUN_180073a70(local_e8,uVar3,".esp.pulse_mode");
  cVar2 = FUN_1801c2460(param_1,uVar7);
  if (cVar2 != '\0') {
    FUN_1800f3090(*param_1,uVar7,param_3 + 0x1140);
  }
  FUN_18000f890(local_e8);
  uVar12 = 0;
  do {
    uVar7 = FUN_18004e4f0(local_c8,uVar12);
    uVar8 = FUN_180073a70(local_88,uVar3,".esp.pulse_color");
    uVar7 = FUN_180066820(local_e8,uVar8,uVar7);
    cVar2 = FUN_1801c2460(param_1,uVar7);
    if (cVar2 != '\0') {
      FUN_18019e140(*param_1,uVar7,uVar12 * 0x10 + 0x1144 + param_3);
    }
    FUN_18000f890(local_e8);
    FUN_18000f890(local_88);
    FUN_18000f890(local_c8);
    uVar12 = uVar12 + 1;
  } while (uVar12 < 3);
  uVar7 = FUN_180073a70(local_e8,uVar3,".esp.name_avatar");
  FUN_1801730b0(param_1,uVar7,param_3 + 0x1174);
  FUN_18000f890(local_e8);
  uVar7 = FUN_180073a70(local_e8,uVar3,".esp.icon_order0");
  cVar2 = FUN_1801c2460(param_1,uVar7);
  if (cVar2 != '\0') {
    FUN_1800f3090(*param_1,uVar7,param_3 + 0x1178);
  }
  FUN_18000f890(local_e8);
  uVar7 = FUN_180073a70(local_e8,uVar3,".esp.icon_order1");
  cVar2 = FUN_1801c2460(param_1,uVar7);
  if (cVar2 != '\0') {
    FUN_1800f3090(*param_1,uVar7,param_3 + 0x117c);
  }
  FUN_18000f890(local_e8);
  uVar7 = FUN_180073a70(local_e8,uVar3,".esp.icon_selection");
  cVar2 = FUN_1801c2460(param_1,uVar7);
  if (cVar2 != '\0') {
    FUN_18019dbe0(*param_1,uVar7,param_3 + 0x1180);
  }
  FUN_18000f890(local_e8);
  uVar7 = FUN_180073a70(local_e8,uVar3,".esp.icon_dimming");
  cVar2 = FUN_1801c2460(param_1,uVar7);
  if (cVar2 != '\0') {
    FUN_180152360(*param_1,uVar7,param_3 + 0x1182);
  }
  FUN_18000f890(local_e8);
  uVar7 = FUN_180073a70(local_e8,uVar3,".esp.icon_clip_rect");
  FUN_1801730b0(param_1,uVar7,param_3 + 0x1185);
  FUN_18000f890(local_e8);
  uVar7 = FUN_180073a70(local_e8,uVar3,".esp.icon_low_ammo");
  FUN_1801730b0(param_1,uVar7,param_3 + 0x1186);
  FUN_18000f890(local_e8);
  uVar7 = FUN_180073a70(local_e8,uVar3,".esp.icon_all_grenades");
  FUN_1801730b0(param_1,uVar7,param_3 + 0x1187);
  FUN_18000f890(local_e8);
  uVar7 = FUN_180073a70(local_e8,uVar3,".esp.icon_pin_pulled");
  cVar2 = FUN_1801c2460(param_1,uVar7);
  if (cVar2 != '\0') {
    FUN_18019e140(*param_1,uVar7,param_3 + 0x1188);
  }
  FUN_18000f890(local_e8);
  uVar7 = FUN_180073a70(local_e8,uVar3,".esp.taser_in_hand");
  cVar2 = FUN_1801c2460(param_1,uVar7);
  if (cVar2 != '\0') {
    FUN_18019e140(*param_1,uVar7,param_3 + 0x1198);
  }
  FUN_18000f890(local_e8);
  uVar7 = FUN_180073a70(local_e8,uVar3,".esp.offscreen_arrows");
  FUN_1801730b0(param_1,uVar7,param_3 + 0x11a8);
  FUN_18000f890(local_e8);
  uVar7 = FUN_180073a70(local_e8,uVar3,".esp.arrow_color");
  cVar2 = FUN_1801c2460(param_1,uVar7);
  if (cVar2 != '\0') {
    FUN_18019e140(*param_1,uVar7,param_3 + 0x11ac);
  }
  FUN_18000f890(local_e8);
  uVar7 = FUN_180073a70(local_e8,uVar3,".esp.offscreen_arrow_size");
  cVar2 = FUN_1801c2460(param_1,uVar7);
  if (cVar2 != '\0') {
    FUN_1800f3090(*param_1,uVar7,param_3 + 0x11bc);
  }
  FUN_18000f890(local_e8);
  uVar7 = FUN_180073a70(local_e8,uVar3,".esp.offscreen_arrow_radius");
  cVar2 = FUN_1801c2460(param_1,uVar7);
  if (cVar2 != '\0') {
    FUN_1800f3090(*param_1,uVar7,param_3 + 0x11c0);
  }
  FUN_18000f890(local_e8);
  uVar7 = FUN_180073a70(local_e8,uVar3,".esp.sounds");
  FUN_1801730b0(param_1,uVar7,param_3 + 0x11c4);
  FUN_18000f890(local_e8);
  uVar7 = FUN_180073a70(local_e8,uVar3,".esp.sound_color");
  cVar2 = FUN_1801c2460(param_1,uVar7);
  if (cVar2 != '\0') {
    FUN_18019e140(*param_1,uVar7,param_3 + 0x11c8);
  }
  FUN_18000f890(local_e8);
  uVar12 = 0;
  do {
    lVar13 = uVar12 * 0x74;
    uVar7 = FUN_18004e4f0(local_88,uVar12);
    uVar8 = FUN_180073a70(local_e8,uVar3,".esp.custom");
    FUN_180066820(&local_a8,uVar8,uVar7);
    FUN_18000f890(local_e8);
    FUN_18000f890(local_88);
    uVar7 = FUN_180073a70(local_c8,&local_a8,&DAT_1806f6a6c);
    cVar2 = FUN_1801c2460(param_1,uVar7);
    if (cVar2 != '\0') {
      piVar9 = (int *)FUN_1800f2fa0(*param_1,uVar7);
      if ((piVar9 != (int *)0x0) && (*piVar9 == 3)) {
        puVar10 = (undefined8 *)(param_3 + 0x11d8 + lVar13);
        *puVar10 = 0;
        puVar10[1] = 0;
        puVar10[2] = 0;
        puVar10[3] = 0;
        puVar10[4] = 0;
        puVar10[5] = 0;
        puVar10[6] = 0;
        puVar10[7] = 0;
        plVar15 = (longlong *)(piVar9 + 4);
        if (0xf < *(ulonglong *)(piVar9 + 10)) {
          plVar15 = (longlong *)*plVar15;
        }
        snprintf(puVar10,0x40,&DAT_1806d3198,plVar15);
      }
    }
    FUN_18000f890(local_c8);
    if (*(char *)(lVar13 + 0x11d8 + param_3) != '\0') {
      uVar7 = FUN_180073a70(local_c8,&local_a8,".enabled");
      FUN_1801730b0(param_1,uVar7,param_3 + 0x1218 + lVar13);
      FUN_18000f890(local_c8);
      uVar7 = FUN_180073a70(local_c8,&local_a8,".side");
      cVar2 = FUN_1801c2460(param_1,uVar7);
      if (cVar2 != '\0') {
        FUN_1800f3090(*param_1,uVar7,param_3 + 0x121c + lVar13);
      }
      FUN_18000f890(local_c8);
      uVar7 = FUN_180073a70(local_c8,&local_a8,".order");
      cVar2 = FUN_1801c2460(param_1,uVar7);
      if (cVar2 != '\0') {
        FUN_1800f3090(*param_1,uVar7,param_3 + 0x1220 + lVar13);
      }
      FUN_18000f890(local_c8);
      uVar7 = FUN_180073a70(local_c8,&local_a8,".color");
      cVar2 = FUN_1801c2460(param_1,uVar7);
      if (cVar2 != '\0') {
        FUN_18019e140(*param_1,uVar7,param_3 + 0x1224 + lVar13);
      }
      FUN_18000f890(local_c8);
      uVar7 = FUN_180073a70(local_c8,&local_a8,".second");
      cVar2 = FUN_1801c2460(param_1,uVar7);
      if (cVar2 != '\0') {
        FUN_18019e140(*param_1,uVar7,param_3 + 0x1234 + lVar13);
      }
      FUN_18000f890(local_c8);
      uVar7 = FUN_180073a70(local_c8,&local_a8,".size");
      cVar2 = FUN_1801c2460(param_1,uVar7);
      if (cVar2 != '\0') {
        FUN_1800f3090(*param_1,uVar7,param_3 + 0x1244 + lVar13);
      }
      FUN_18000f890(local_c8);
      uVar7 = FUN_180073a70(local_c8,&local_a8,".small");
      FUN_1801730b0(param_1,uVar7,param_3 + 0x1248 + lVar13);
      FUN_18000f890(local_c8);
      uVar7 = FUN_180073a70(local_c8,&local_a8,".text");
      FUN_1801730b0(param_1,uVar7,param_3 + 0x1249 + lVar13);
      FUN_18000f890(local_c8);
    }
    FUN_18000f890(&local_a8);
    uVar12 = uVar12 + 1;
  } while (uVar12 < 0x10);
  uVar7 = FUN_180073a70(local_e8,uVar3,".glow.enabled");
  FUN_1801730b0(param_1,uVar7,param_3 + 0x1918);
  FUN_18000f890(local_e8);
  uVar3 = FUN_180073a70(local_e8,uVar3,".glow.color");
  cVar2 = FUN_1801c2460(param_1,uVar3);
  if (cVar2 != '\0') {
    FUN_18019e140(*param_1,uVar3,param_3 + 0x191c);
  }
  FUN_18000f890(local_e8);
  return;
}



/* ===== 180174440 FUN_180174440 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180174440(longlong *param_1,longlong param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  double dVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  size_t _Size;
  char cVar7;
  int iVar8;
  char ****ppppcVar9;
  ulonglong uVar10;
  undefined8 *_Buf2;
  ulonglong uVar11;
  undefined8 *puVar12;
  undefined1 auStack_88 [40];
  char ****local_60;
  undefined8 uStack_58;
  size_t local_50;
  ulonglong local_48;
  ulonglong local_40;
  
  local_40 = DAT_180919500 ^ (ulonglong)auStack_88;
  local_60 = (char ****)0x0;
  uStack_58 = 0;
  local_60 = (char ****)FUN_18000fb70(0x20);
  uVar6 = s_model_enemy_player_1806f6a70._12_4_;
  uVar5 = s_model_enemy_player_1806f6a70._8_4_;
  uVar4 = s_model_enemy_player_1806f6a70._4_4_;
  local_50 = 0x12;
  local_48 = 0x1f;
  *(undefined4 *)local_60 = s_model_enemy_player_1806f6a70._0_4_;
  *(undefined4 *)((longlong)local_60 + 4) = uVar4;
  *(undefined4 *)(local_60 + 1) = uVar5;
  *(undefined4 *)((longlong)local_60 + 0xc) = uVar6;
  *(undefined2 *)(local_60 + 2) = s_model_enemy_player_1806f6a70._16_2_;
  *(char *)((longlong)local_60 + 0x12) = '\0';
  FUN_180175f10(param_1,&local_60,param_2);
  if (0xf < local_48) {
    uVar10 = local_48 + 1;
    ppppcVar9 = local_60;
    if (0xfff < uVar10) {
      ppppcVar9 = (char ****)local_60[-1];
      if ((char *)0x1f < (char *)((longlong)local_60 + (-8 - (longlong)ppppcVar9)))
      goto LAB_180175385;
      uVar10 = local_48 + 0x28;
    }
    thunk_FUN_1803d64e0(ppppcVar9,uVar10);
  }
  local_60 = (char ****)0x0;
  uStack_58 = 0;
  local_60 = (char ****)FUN_18000fb70(0x20);
  uVar6 = s_model_enemy_behind_walls_1806f6a88._12_4_;
  uVar5 = s_model_enemy_behind_walls_1806f6a88._8_4_;
  uVar4 = s_model_enemy_behind_walls_1806f6a88._4_4_;
  local_50 = 0x18;
  local_48 = 0x1f;
  *(undefined4 *)local_60 = s_model_enemy_behind_walls_1806f6a88._0_4_;
  *(undefined4 *)((longlong)local_60 + 4) = uVar4;
  *(undefined4 *)(local_60 + 1) = uVar5;
  *(undefined4 *)((longlong)local_60 + 0xc) = uVar6;
  local_60[2] = (char ***)s_model_enemy_behind_walls_1806f6a88._16_8_;
  *(char *)(local_60 + 3) = '\0';
  FUN_180175f10(param_1,&local_60,param_2 + 0x58);
  if (0xf < local_48) {
    uVar10 = local_48 + 1;
    ppppcVar9 = local_60;
    if (0xfff < uVar10) {
      ppppcVar9 = (char ****)local_60[-1];
      if ((char *)0x1f < (char *)((longlong)local_60 + (-8 - (longlong)ppppcVar9)))
      goto LAB_180175385;
      uVar10 = local_48 + 0x28;
    }
    thunk_FUN_1803d64e0(ppppcVar9,uVar10);
  }
  local_60 = (char ****)0x0;
  uStack_58 = 0;
  local_60 = (char ****)FUN_18000fb70(0x20);
  uVar6 = s_model_enemy_on_shot_1806f6ae8._12_4_;
  uVar5 = s_model_enemy_on_shot_1806f6ae8._8_4_;
  uVar4 = s_model_enemy_on_shot_1806f6ae8._4_4_;
  local_50 = 0x13;
  local_48 = 0x1f;
  *(undefined4 *)local_60 = s_model_enemy_on_shot_1806f6ae8._0_4_;
  *(undefined4 *)((longlong)local_60 + 4) = uVar4;
  *(undefined4 *)(local_60 + 1) = uVar5;
  *(undefined4 *)((longlong)local_60 + 0xc) = uVar6;
  *(uint *)((longlong)local_60 + 0xf) =
       CONCAT31(s_model_enemy_on_shot_1806f6ae8._16_3_,s_model_enemy_on_shot_1806f6ae8[0xf]);
  *(char *)((longlong)local_60 + 0x13) = '\0';
  FUN_180175f10(param_1,&local_60,param_2 + 0xb0);
  if (0xf < local_48) {
    uVar10 = local_48 + 1;
    ppppcVar9 = local_60;
    if (0xfff < uVar10) {
      ppppcVar9 = (char ****)local_60[-1];
      if ((char *)0x1f < (char *)((longlong)local_60 + (-8 - (longlong)ppppcVar9)))
      goto LAB_180175385;
      uVar10 = local_48 + 0x28;
    }
    thunk_FUN_1803d64e0(ppppcVar9,uVar10);
  }
  local_60 = (char ****)0x0;
  uStack_58 = 0;
  local_60 = (char ****)FUN_18000fb70(0x20);
  uVar6 = s_model_enemy_on_shot_glow_1806f6b00._12_4_;
  uVar5 = s_model_enemy_on_shot_glow_1806f6b00._8_4_;
  uVar4 = s_model_enemy_on_shot_glow_1806f6b00._4_4_;
  local_50 = 0x18;
  local_48 = 0x1f;
  *(undefined4 *)local_60 = s_model_enemy_on_shot_glow_1806f6b00._0_4_;
  *(undefined4 *)((longlong)local_60 + 4) = uVar4;
  *(undefined4 *)(local_60 + 1) = uVar5;
  *(undefined4 *)((longlong)local_60 + 0xc) = uVar6;
  local_60[2] = (char ***)s_model_enemy_on_shot_glow_1806f6b00._16_8_;
  *(char *)(local_60 + 3) = '\0';
  FUN_180176320(param_1,&local_60,param_2 + 0x108);
  if (0xf < local_48) {
    uVar10 = local_48 + 1;
    ppppcVar9 = local_60;
    if (0xfff < uVar10) {
      ppppcVar9 = (char ****)local_60[-1];
      if ((char *)0x1f < (char *)((longlong)local_60 + (-8 - (longlong)ppppcVar9)))
      goto LAB_180175385;
      uVar10 = local_48 + 0x28;
    }
    thunk_FUN_1803d64e0(ppppcVar9,uVar10);
  }
  local_60 = (char ****)0x0;
  uStack_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_60 = (char ****)FUN_18000fb70(0x20);
  uVar6 = s_model_enemy_on_shot_duration_1806f6ab0._12_4_;
  uVar5 = s_model_enemy_on_shot_duration_1806f6ab0._8_4_;
  uVar4 = s_model_enemy_on_shot_duration_1806f6ab0._4_4_;
  local_50 = 0x1c;
  local_48 = 0x1f;
  *(undefined4 *)local_60 = s_model_enemy_on_shot_duration_1806f6ab0._0_4_;
  *(undefined4 *)((longlong)local_60 + 4) = uVar4;
  *(undefined4 *)(local_60 + 1) = uVar5;
  *(undefined4 *)((longlong)local_60 + 0xc) = uVar6;
  uVar6 = s_model_enemy_on_shot_duration_1806f6ab0._24_4_;
  uVar5 = s_model_enemy_on_shot_duration_1806f6ab0._20_4_;
  uVar4 = s_model_enemy_on_shot_duration_1806f6ab0._16_4_;
  *(undefined4 *)((longlong)local_60 + 0xc) = s_model_enemy_on_shot_duration_1806f6ab0._12_4_;
  *(undefined4 *)(local_60 + 2) = uVar4;
  *(undefined4 *)((longlong)local_60 + 0x14) = uVar5;
  *(undefined4 *)(local_60 + 3) = uVar6;
  *(char *)((longlong)local_60 + 0x1c) = '\0';
  cVar7 = FUN_1801c2460(param_1,&local_60);
  uVar10 = local_48;
  _Size = local_50;
  if (cVar7 == '\0') {
LAB_18017479d:
    uVar10 = local_48;
  }
  else {
    ppppcVar9 = (char ****)&local_60;
    if (0xf < local_48) {
      ppppcVar9 = local_60;
    }
    puVar1 = *(undefined8 **)(*(longlong *)*param_1 + 0x50);
    for (puVar12 = *(undefined8 **)(*(longlong *)*param_1 + 0x48); puVar12 != puVar1;
        puVar12 = puVar12 + 0x10) {
      if ((ulonglong)puVar12[3] < 0x10) {
        _Buf2 = puVar12;
      }
      else {
        _Buf2 = (undefined8 *)*puVar12;
      }
      if ((_Size == puVar12[2]) &&
         ((_Size == 0 || (iVar8 = memcmp(ppppcVar9,_Buf2,_Size), iVar8 == 0)))) {
        if (puVar12 + 4 != (undefined8 *)0x0) {
          *(int *)(*param_1 + 8) = *(int *)(*param_1 + 8) + 1;
          dVar3 = (double)FUN_180370b10(puVar12 + 4,SUB84((double)*(float *)(param_2 + 0x11c),0));
          if (((uint)(float)dVar3 & 0x7f800000) != 0x7f800000) {
            *(float *)(param_2 + 0x11c) = (float)dVar3;
          }
          goto LAB_18017479d;
        }
        break;
      }
    }
  }
  if (0xf < uVar10) {
    uVar11 = uVar10 + 1;
    ppppcVar9 = local_60;
    if (0xfff < uVar11) {
      ppppcVar9 = (char ****)local_60[-1];
      if ((char *)0x1f < (char *)((longlong)local_60 + (-8 - (longlong)ppppcVar9)))
      goto LAB_180175385;
      uVar11 = uVar10 + 0x28;
    }
    thunk_FUN_1803d64e0(ppppcVar9,uVar11);
  }
  local_60 = (char ****)0x0;
  uStack_58 = 0;
  local_60 = (char ****)FUN_18000fb70(0x20);
  uVar6 = s_model_enemy_history_1806f6ad0._12_4_;
  uVar5 = s_model_enemy_history_1806f6ad0._8_4_;
  uVar4 = s_model_enemy_history_1806f6ad0._4_4_;
  local_50 = 0x13;
  local_48 = 0x1f;
  *(undefined4 *)local_60 = s_model_enemy_history_1806f6ad0._0_4_;
  *(undefined4 *)((longlong)local_60 + 4) = uVar4;
  *(undefined4 *)(local_60 + 1) = uVar5;
  *(undefined4 *)((longlong)local_60 + 0xc) = uVar6;
  *(uint *)((longlong)local_60 + 0xf) =
       CONCAT31(s_model_enemy_history_1806f6ad0._16_3_,s_model_enemy_history_1806f6ad0[0xf]);
  *(char *)((longlong)local_60 + 0x13) = '\0';
  FUN_180175f10(param_1,&local_60,param_2 + 0x120);
  if (0xf < local_48) {
    uVar10 = local_48 + 1;
    ppppcVar9 = local_60;
    if (0xfff < uVar10) {
      ppppcVar9 = (char ****)local_60[-1];
      if ((char *)0x1f < (char *)((longlong)local_60 + (-8 - (longlong)ppppcVar9)))
      goto LAB_180175385;
      uVar10 = local_48 + 0x28;
    }
    thunk_FUN_1803d64e0(ppppcVar9,uVar10);
  }
  local_60 = (char ****)0x0;
  uStack_58 = 0;
  local_60 = (char ****)FUN_18000fb70(0x20);
  uVar6 = s_model_enemy_history_glow_1806f6b60._12_4_;
  uVar5 = s_model_enemy_history_glow_1806f6b60._8_4_;
  uVar4 = s_model_enemy_history_glow_1806f6b60._4_4_;
  local_50 = 0x18;
  local_48 = 0x1f;
  *(undefined4 *)local_60 = s_model_enemy_history_glow_1806f6b60._0_4_;
  *(undefined4 *)((longlong)local_60 + 4) = uVar4;
  *(undefined4 *)(local_60 + 1) = uVar5;
  *(undefined4 *)((longlong)local_60 + 0xc) = uVar6;
  local_60[2] = (char ***)s_model_enemy_history_glow_1806f6b60._16_8_;
  *(char *)(local_60 + 3) = '\0';
  FUN_180176320(param_1,&local_60,param_2 + 0x178);
  if (0xf < local_48) {
    uVar10 = local_48 + 1;
    ppppcVar9 = local_60;
    if (0xfff < uVar10) {
      ppppcVar9 = (char ****)local_60[-1];
      if ((char *)0x1f < (char *)((longlong)local_60 + (-8 - (longlong)ppppcVar9)))
      goto LAB_180175385;
      uVar10 = local_48 + 0x28;
    }
    thunk_FUN_1803d64e0(ppppcVar9,uVar10);
  }
  local_60 = (char ****)0x0;
  uStack_58 = 0;
  local_60 = (char ****)FUN_18000fb70(0x20);
  uVar6 = s_model_enemy_ragdolls_1806f6b80._12_4_;
  uVar5 = s_model_enemy_ragdolls_1806f6b80._8_4_;
  uVar4 = s_model_enemy_ragdolls_1806f6b80._4_4_;
  local_50 = 0x14;
  local_48 = 0x1f;
  *(undefined4 *)local_60 = s_model_enemy_ragdolls_1806f6b80._0_4_;
  *(undefined4 *)((longlong)local_60 + 4) = uVar4;
  *(undefined4 *)(local_60 + 1) = uVar5;
  *(undefined4 *)((longlong)local_60 + 0xc) = uVar6;
  *(undefined4 *)(local_60 + 2) = s_model_enemy_ragdolls_1806f6b80._16_4_;
  *(char *)((longlong)local_60 + 0x14) = '\0';
  FUN_180175f10(param_1,&local_60,param_2 + 0x18c);
  if (0xf < local_48) {
    uVar10 = local_48 + 1;
    ppppcVar9 = local_60;
    if (0xfff < uVar10) {
      ppppcVar9 = (char ****)local_60[-1];
      if ((char *)0x1f < (char *)((longlong)local_60 + (-8 - (longlong)ppppcVar9)))
      goto LAB_180175385;
      uVar10 = local_48 + 0x28;
    }
    thunk_FUN_1803d64e0(ppppcVar9,uVar10);
  }
  local_60 = (char ****)0x0;
  uStack_58 = 0;
  local_60 = (char ****)FUN_18000fb70(0x20);
  uVar6 = s_model_enemy_ragdolls_glow_1806f6b20._12_4_;
  uVar5 = s_model_enemy_ragdolls_glow_1806f6b20._8_4_;
  uVar4 = s_model_enemy_ragdolls_glow_1806f6b20._4_4_;
  local_50 = 0x19;
  local_48 = 0x1f;
  *(undefined4 *)local_60 = s_model_enemy_ragdolls_glow_1806f6b20._0_4_;
  *(undefined4 *)((longlong)local_60 + 4) = uVar4;
  *(undefined4 *)(local_60 + 1) = uVar5;
  *(undefined4 *)((longlong)local_60 + 0xc) = uVar6;
  uVar6 = s_model_enemy_ragdolls_glow_1806f6b20._21_4_;
  uVar5 = s_model_enemy_ragdolls_glow_1806f6b20._17_4_;
  uVar4 = CONCAT13(s_model_enemy_ragdolls_glow_1806f6b20[0x10],
                   s_model_enemy_ragdolls_glow_1806f6b20._13_3_);
  *(uint *)((longlong)local_60 + 9) =
       CONCAT13(s_model_enemy_ragdolls_glow_1806f6b20[0xc],
                s_model_enemy_ragdolls_glow_1806f6b20._9_3_);
  *(undefined4 *)((longlong)local_60 + 0xd) = uVar4;
  *(undefined4 *)((longlong)local_60 + 0x11) = uVar5;
  *(undefined4 *)((longlong)local_60 + 0x15) = uVar6;
  *(char *)((longlong)local_60 + 0x19) = '\0';
  FUN_180176320(param_1,&local_60,param_2 + 0x1e4);
  if (0xf < local_48) {
    uVar10 = local_48 + 1;
    ppppcVar9 = local_60;
    if (0xfff < uVar10) {
      ppppcVar9 = (char ****)local_60[-1];
      if ((char *)0x1f < (char *)((longlong)local_60 + (-8 - (longlong)ppppcVar9)))
      goto LAB_180175385;
      uVar10 = local_48 + 0x28;
    }
    thunk_FUN_1803d64e0(ppppcVar9,uVar10);
  }
  local_60 = (char ****)0x0;
  uStack_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_60 = (char ****)FUN_18000fb70(0x20);
  uVar6 = s_model_enemy_ragdolls_visibility_1806f6b40._12_4_;
  uVar5 = s_model_enemy_ragdolls_visibility_1806f6b40._8_4_;
  uVar4 = s_model_enemy_ragdolls_visibility_1806f6b40._4_4_;
  local_50 = 0x1f;
  local_48 = 0x1f;
  *(undefined4 *)local_60 = s_model_enemy_ragdolls_visibility_1806f6b40._0_4_;
  *(undefined4 *)((longlong)local_60 + 4) = uVar4;
  *(undefined4 *)(local_60 + 1) = uVar5;
  *(undefined4 *)((longlong)local_60 + 0xc) = uVar6;
  uVar6 = s_model_enemy_ragdolls_visibility_1806f6b40._27_4_;
  uVar5 = s_model_enemy_ragdolls_visibility_1806f6b40._23_4_;
  uVar4 = s_model_enemy_ragdolls_visibility_1806f6b40._19_4_;
  *(uint *)((longlong)local_60 + 0xf) =
       CONCAT31(s_model_enemy_ragdolls_visibility_1806f6b40._16_3_,
                s_model_enemy_ragdolls_visibility_1806f6b40[0xf]);
  *(undefined4 *)((longlong)local_60 + 0x13) = uVar4;
  *(undefined4 *)((longlong)local_60 + 0x17) = uVar5;
  *(undefined4 *)((longlong)local_60 + 0x1b) = uVar6;
  *(char *)((longlong)local_60 + 0x1f) = '\0';
  cVar7 = FUN_1801c2460(param_1,&local_60);
  if (cVar7 != '\0') {
    FUN_18019dbe0(*param_1,&local_60,param_2 + 0x1f8);
  }
  if (0xf < local_48) {
    uVar10 = local_48 + 1;
    ppppcVar9 = local_60;
    if (0xfff < uVar10) {
      ppppcVar9 = (char ****)local_60[-1];
      if ((char *)0x1f < (char *)((longlong)local_60 + (-8 - (longlong)ppppcVar9)))
      goto LAB_180175385;
      uVar10 = local_48 + 0x28;
    }
    thunk_FUN_1803d64e0(ppppcVar9,uVar10);
  }
  local_60 = (char ****)0x0;
  uStack_58 = 0;
  local_60 = (char ****)FUN_18000fb70(0x20);
  uVar6 = s_model_team_player_1806f6bd8._12_4_;
  uVar5 = s_model_team_player_1806f6bd8._8_4_;
  uVar4 = s_model_team_player_1806f6bd8._4_4_;
  local_50 = 0x11;
  local_48 = 0x1f;
  *(undefined4 *)local_60 = s_model_team_player_1806f6bd8._0_4_;
  *(undefined4 *)((longlong)local_60 + 4) = uVar4;
  *(undefined4 *)(local_60 + 1) = uVar5;
  *(undefined4 *)((longlong)local_60 + 0xc) = uVar6;
  *(char *)(local_60 + 2) = s_model_team_player_1806f6bd8[0x10];
  *(char *)((longlong)local_60 + 0x11) = '\0';
  FUN_180175f10(param_1,&local_60,param_2 + 0x1fc);
  if (0xf < local_48) {
    uVar10 = local_48 + 1;
    ppppcVar9 = local_60;
    if (0xfff < uVar10) {
      ppppcVar9 = (char ****)local_60[-1];
      if ((char *)0x1f < (char *)((longlong)local_60 + (-8 - (longlong)ppppcVar9)))
      goto LAB_180175385;
      uVar10 = local_48 + 0x28;
    }
    thunk_FUN_1803d64e0(ppppcVar9,uVar10);
  }
  local_60 = (char ****)0x0;
  uStack_58 = 0;
  local_60 = (char ****)FUN_18000fb70(0x20);
  uVar6 = s_model_team_behind_walls_1806f6bf0._12_4_;
  uVar5 = s_model_team_behind_walls_1806f6bf0._8_4_;
  uVar4 = s_model_team_behind_walls_1806f6bf0._4_4_;
  local_50 = 0x17;
  local_48 = 0x1f;
  *(undefined4 *)local_60 = s_model_team_behind_walls_1806f6bf0._0_4_;
  *(undefined4 *)((longlong)local_60 + 4) = uVar4;
  *(undefined4 *)(local_60 + 1) = uVar5;
  *(undefined4 *)((longlong)local_60 + 0xc) = uVar6;
  *(ulonglong *)((longlong)local_60 + 0xf) =
       CONCAT71(s_model_team_behind_walls_1806f6bf0._16_7_,s_model_team_behind_walls_1806f6bf0[0xf])
  ;
  *(char *)((longlong)local_60 + 0x17) = '\0';
  FUN_180175f10(param_1,&local_60,param_2 + 0x254);
  if (0xf < local_48) {
    uVar10 = local_48 + 1;
    ppppcVar9 = local_60;
    if (0xfff < uVar10) {
      ppppcVar9 = (char ****)local_60[-1];
      if ((char *)0x1f < (char *)((longlong)local_60 + (-8 - (longlong)ppppcVar9)))
      goto LAB_180175385;
      uVar10 = local_48 + 0x28;
    }
    thunk_FUN_1803d64e0(ppppcVar9,uVar10);
  }
  local_60 = (char ****)0x0;
  uStack_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_60 = (char ****)FUN_18000fb70(0x30);
  uVar6 = s_model_team_disable_model_renderi_1806f6b98._12_4_;
  uVar5 = s_model_team_disable_model_renderi_1806f6b98._8_4_;
  uVar4 = s_model_team_disable_model_renderi_1806f6b98._4_4_;
  local_50 = 0x22;
  local_48 = 0x2f;
  *(undefined4 *)local_60 = s_model_team_disable_model_renderi_1806f6b98._0_4_;
  *(undefined4 *)((longlong)local_60 + 4) = uVar4;
  *(undefined4 *)(local_60 + 1) = uVar5;
  *(undefined4 *)((longlong)local_60 + 0xc) = uVar6;
  uVar6 = s_model_team_disable_model_renderi_1806f6b98._28_4_;
  uVar5 = s_model_team_disable_model_renderi_1806f6b98._24_4_;
  uVar4 = s_model_team_disable_model_renderi_1806f6b98._20_4_;
  *(undefined4 *)(local_60 + 2) = s_model_team_disable_model_renderi_1806f6b98._16_4_;
  *(undefined4 *)((longlong)local_60 + 0x14) = uVar4;
  *(undefined4 *)(local_60 + 3) = uVar5;
  *(undefined4 *)((longlong)local_60 + 0x1c) = uVar6;
  *(undefined2 *)(local_60 + 4) = s_model_team_disable_model_renderi_1806f6b98._32_2_;
  *(char *)((longlong)local_60 + 0x22) = '\0';
  FUN_1801730b0(param_1,&local_60,param_2 + 0x2ac);
  if (0xf < local_48) {
    uVar10 = local_48 + 1;
    ppppcVar9 = local_60;
    if (0xfff < uVar10) {
      ppppcVar9 = (char ****)local_60[-1];
      if ((char *)0x1f < (char *)((longlong)local_60 + (-8 - (longlong)ppppcVar9)))
      goto LAB_180175385;
      uVar10 = local_48 + 0x28;
    }
    thunk_FUN_1803d64e0(ppppcVar9,uVar10);
  }
  local_60 = (char ****)0x0;
  uStack_58 = 0;
  local_60 = (char ****)FUN_18000fb70(0x20);
  uVar6 = s_model_local_player_1806f6bc0._12_4_;
  uVar5 = s_model_local_player_1806f6bc0._8_4_;
  uVar4 = s_model_local_player_1806f6bc0._4_4_;
  local_50 = 0x12;
  local_48 = 0x1f;
  *(undefined4 *)local_60 = s_model_local_player_1806f6bc0._0_4_;
  *(undefined4 *)((longlong)local_60 + 4) = uVar4;
  *(undefined4 *)(local_60 + 1) = uVar5;
  *(undefined4 *)((longlong)local_60 + 0xc) = uVar6;
  *(undefined2 *)(local_60 + 2) = s_model_local_player_1806f6bc0._16_2_;
  *(char *)((longlong)local_60 + 0x12) = '\0';
  FUN_180175f10(param_1,&local_60,param_2 + 0x2b0);
  if (0xf < local_48) {
    uVar10 = local_48 + 1;
    ppppcVar9 = local_60;
    if (0xfff < uVar10) {
      ppppcVar9 = (char ****)local_60[-1];
      if ((char *)0x1f < (char *)((longlong)local_60 + (-8 - (longlong)ppppcVar9)))
      goto LAB_180175385;
      uVar10 = local_48 + 0x28;
    }
    thunk_FUN_1803d64e0(ppppcVar9,uVar10);
  }
  local_60 = (char ****)0x0;
  uStack_58 = 0;
  local_60 = (char ****)FUN_18000fb70(0x20);
  uVar6 = s_model_local_player_overlay_1806f6c40._4_4_;
  local_50 = 0x1a;
  local_48 = 0x1f;
  uVar4 = CONCAT22(s_model_local_player_overlay_1806f6c40._10_2_,
                   s_model_local_player_overlay_1806f6c40._8_2_);
  uVar5 = CONCAT22(s_model_local_player_overlay_1806f6c40._14_2_,
                   s_model_local_player_overlay_1806f6c40._12_2_);
  *(undefined4 *)local_60 = s_model_local_player_overlay_1806f6c40._0_4_;
  *(undefined4 *)((longlong)local_60 + 4) = uVar6;
  *(undefined4 *)(local_60 + 1) = uVar4;
  *(undefined4 *)((longlong)local_60 + 0xc) = uVar5;
  uVar6 = s_model_local_player_overlay_1806f6c40._22_4_;
  uVar5 = s_model_local_player_overlay_1806f6c40._18_4_;
  uVar4 = CONCAT22(s_model_local_player_overlay_1806f6c40._16_2_,
                   s_model_local_player_overlay_1806f6c40._14_2_);
  *(uint *)((longlong)local_60 + 10) =
       CONCAT22(s_model_local_player_overlay_1806f6c40._12_2_,
                s_model_local_player_overlay_1806f6c40._10_2_);
  *(undefined4 *)((longlong)local_60 + 0xe) = uVar4;
  *(undefined4 *)((longlong)local_60 + 0x12) = uVar5;
  *(undefined4 *)((longlong)local_60 + 0x16) = uVar6;
  *(char *)((longlong)local_60 + 0x1a) = '\0';
  FUN_180175f10(param_1,&local_60,param_2 + 0x308);
  if (0xf < local_48) {
    uVar10 = local_48 + 1;
    ppppcVar9 = local_60;
    if (0xfff < uVar10) {
      ppppcVar9 = (char ****)local_60[-1];
      if ((char *)0x1f < (char *)((longlong)local_60 + (-8 - (longlong)ppppcVar9)))
      goto LAB_180175385;
      uVar10 = local_48 + 0x28;
    }
    thunk_FUN_1803d64e0(ppppcVar9,uVar10);
  }
  local_60 = (char ****)0x0;
  uStack_58 = 0;
  local_60 = (char ****)FUN_18000fb70(0x20);
  uVar6 = s_model_local_skeleton_1806f6c60._12_4_;
  uVar5 = s_model_local_skeleton_1806f6c60._8_4_;
  uVar4 = s_model_local_skeleton_1806f6c60._4_4_;
  local_50 = 0x14;
  local_48 = 0x1f;
  *(undefined4 *)local_60 = s_model_local_skeleton_1806f6c60._0_4_;
  *(undefined4 *)((longlong)local_60 + 4) = uVar4;
  *(undefined4 *)(local_60 + 1) = uVar5;
  *(undefined4 *)((longlong)local_60 + 0xc) = uVar6;
  *(undefined4 *)(local_60 + 2) = s_model_local_skeleton_1806f6c60._16_4_;
  *(char *)((longlong)local_60 + 0x14) = '\0';
  FUN_180176320(param_1,&local_60,param_2 + 0x360);
  if (0xf < local_48) {
    uVar10 = local_48 + 1;
    ppppcVar9 = local_60;
    if (0xfff < uVar10) {
      ppppcVar9 = (char ****)local_60[-1];
      if ((char *)0x1f < (char *)((longlong)local_60 + (-8 - (longlong)ppppcVar9)))
      goto LAB_180175385;
      uVar10 = local_48 + 0x28;
    }
    thunk_FUN_1803d64e0(ppppcVar9,uVar10);
  }
  local_60 = (char ****)0x0;
  uStack_58 = 0;
  local_60 = (char ****)FUN_18000fb70(0x20);
  uVar6 = s_model_local_arms_1806f6c08._12_4_;
  uVar5 = s_model_local_arms_1806f6c08._8_4_;
  uVar4 = s_model_local_arms_1806f6c08._4_4_;
  local_50 = 0x10;
  local_48 = 0x1f;
  *(undefined4 *)local_60 = s_model_local_arms_1806f6c08._0_4_;
  *(undefined4 *)((longlong)local_60 + 4) = uVar4;
  *(undefined4 *)(local_60 + 1) = uVar5;
  *(undefined4 *)((longlong)local_60 + 0xc) = uVar6;
  *(char *)(local_60 + 2) = '\0';
  FUN_180175f10(param_1,&local_60,param_2 + 0x374);
  if (0xf < local_48) {
    uVar10 = local_48 + 1;
    ppppcVar9 = local_60;
    if (0xfff < uVar10) {
      ppppcVar9 = (char ****)local_60[-1];
      if ((char *)0x1f < (char *)((longlong)local_60 + (-8 - (longlong)ppppcVar9)))
      goto LAB_180175385;
      uVar10 = local_48 + 0x28;
    }
    thunk_FUN_1803d64e0(ppppcVar9,uVar10);
  }
  local_60 = (char ****)0x0;
  uStack_58 = 0;
  local_60 = (char ****)FUN_18000fb70(0x20);
  uVar6 = s_model_local_arms_overlay_1806f6c20._12_4_;
  uVar5 = s_model_local_arms_overlay_1806f6c20._8_4_;
  uVar4 = s_model_local_arms_overlay_1806f6c20._4_4_;
  local_50 = 0x18;
  local_48 = 0x1f;
  *(undefined4 *)local_60 = s_model_local_arms_overlay_1806f6c20._0_4_;
  *(undefined4 *)((longlong)local_60 + 4) = uVar4;
  *(undefined4 *)(local_60 + 1) = uVar5;
  *(undefined4 *)((longlong)local_60 + 0xc) = uVar6;
  local_60[2] = (char ***)s_model_local_arms_overlay_1806f6c20._16_8_;
  *(char *)(local_60 + 3) = '\0';
  FUN_180175f10(param_1,&local_60,param_2 + 0x3cc);
  if (0xf < local_48) {
    uVar10 = local_48 + 1;
    ppppcVar9 = local_60;
    if (0xfff < uVar10) {
      ppppcVar9 = (char ****)local_60[-1];
      if ((char *)0x1f < (char *)((longlong)local_60 + (-8 - (longlong)ppppcVar9)))
      goto LAB_180175385;
      uVar10 = local_48 + 0x28;
    }
    thunk_FUN_1803d64e0(ppppcVar9,uVar10);
  }
  local_60 = (char ****)0x0;
  uStack_58 = 0;
  local_60 = (char ****)FUN_18000fb70(0x20);
  uVar6 = s_model_local_gloves_1806f6cb0._12_4_;
  uVar5 = s_model_local_gloves_1806f6cb0._8_4_;
  uVar4 = s_model_local_gloves_1806f6cb0._4_4_;
  local_50 = 0x12;
  local_48 = 0x1f;
  *(undefined4 *)local_60 = s_model_local_gloves_1806f6cb0._0_4_;
  *(undefined4 *)((longlong)local_60 + 4) = uVar4;
  *(undefined4 *)(local_60 + 1) = uVar5;
  *(undefined4 *)((longlong)local_60 + 0xc) = uVar6;
  *(undefined2 *)(local_60 + 2) = s_model_local_gloves_1806f6cb0._16_2_;
  *(char *)((longlong)local_60 + 0x12) = '\0';
  FUN_180175f10(param_1,&local_60,param_2 + 0x424);
  if (0xf < local_48) {
    uVar10 = local_48 + 1;
    ppppcVar9 = local_60;
    if (0xfff < uVar10) {
      ppppcVar9 = (char ****)local_60[-1];
      if ((char *)0x1f < (char *)((longlong)local_60 + (-8 - (longlong)ppppcVar9)))
      goto LAB_180175385;
      uVar10 = local_48 + 0x28;
    }
    thunk_FUN_1803d64e0(ppppcVar9,uVar10);
  }
  local_60 = (char ****)0x0;
  uStack_58 = 0;
  local_60 = (char ****)FUN_18000fb70(0x20);
  uVar6 = s_model_local_gloves_overlay_1806f6cc8._4_4_;
  local_50 = 0x1a;
  local_48 = 0x1f;
  uVar4 = CONCAT22(s_model_local_gloves_overlay_1806f6cc8._10_2_,
                   s_model_local_gloves_overlay_1806f6cc8._8_2_);
  uVar5 = CONCAT22(s_model_local_gloves_overlay_1806f6cc8._14_2_,
                   s_model_local_gloves_overlay_1806f6cc8._12_2_);
  *(undefined4 *)local_60 = s_model_local_gloves_overlay_1806f6cc8._0_4_;
  *(undefined4 *)((longlong)local_60 + 4) = uVar6;
  *(undefined4 *)(local_60 + 1) = uVar4;
  *(undefined4 *)((longlong)local_60 + 0xc) = uVar5;
  uVar6 = s_model_local_gloves_overlay_1806f6cc8._22_4_;
  uVar5 = s_model_local_gloves_overlay_1806f6cc8._18_4_;
  uVar4 = CONCAT22(s_model_local_gloves_overlay_1806f6cc8._16_2_,
                   s_model_local_gloves_overlay_1806f6cc8._14_2_);
  *(uint *)((longlong)local_60 + 10) =
       CONCAT22(s_model_local_gloves_overlay_1806f6cc8._12_2_,
                s_model_local_gloves_overlay_1806f6cc8._10_2_);
  *(undefined4 *)((longlong)local_60 + 0xe) = uVar4;
  *(undefined4 *)((longlong)local_60 + 0x12) = uVar5;
  *(undefined4 *)((longlong)local_60 + 0x16) = uVar6;
  *(char *)((longlong)local_60 + 0x1a) = '\0';
  FUN_180175f10(param_1,&local_60,param_2 + 0x47c);
  if (0xf < local_48) {
    uVar10 = local_48 + 1;
    ppppcVar9 = local_60;
    if (0xfff < uVar10) {
      ppppcVar9 = (char ****)local_60[-1];
      if ((char *)0x1f < (char *)((longlong)local_60 + (-8 - (longlong)ppppcVar9)))
      goto LAB_180175385;
      uVar10 = local_48 + 0x28;
    }
    thunk_FUN_1803d64e0(ppppcVar9,uVar10);
  }
  local_60 = (char ****)0x0;
  uStack_58 = 0;
  local_60 = (char ****)FUN_18000fb70(0x20);
  uVar6 = s_model_local_weapon_1806f6c78._12_4_;
  uVar5 = s_model_local_weapon_1806f6c78._8_4_;
  uVar4 = s_model_local_weapon_1806f6c78._4_4_;
  local_50 = 0x12;
  local_48 = 0x1f;
  *(undefined4 *)local_60 = s_model_local_weapon_1806f6c78._0_4_;
  *(undefined4 *)((longlong)local_60 + 4) = uVar4;
  *(undefined4 *)(local_60 + 1) = uVar5;
  *(undefined4 *)((longlong)local_60 + 0xc) = uVar6;
  *(undefined2 *)(local_60 + 2) = s_model_local_weapon_1806f6c78._16_2_;
  *(char *)((longlong)local_60 + 0x12) = '\0';
  FUN_180175f10(param_1,&local_60,param_2 + 0x4d4);
  if (0xf < local_48) {
    uVar10 = local_48 + 1;
    ppppcVar9 = local_60;
    if (0xfff < uVar10) {
      ppppcVar9 = (char ****)local_60[-1];
      if ((char *)0x1f < (char *)((longlong)local_60 + (-8 - (longlong)ppppcVar9)))
      goto LAB_180175385;
      uVar10 = local_48 + 0x28;
    }
    thunk_FUN_1803d64e0(ppppcVar9,uVar10);
  }
  local_60 = (char ****)0x0;
  uStack_58 = 0;
  local_60 = (char ****)FUN_18000fb70(0x20);
  uVar6 = s_model_local_weapon_overlay_1806f6c90._4_4_;
  local_50 = 0x1a;
  local_48 = 0x1f;
  uVar4 = CONCAT22(s_model_local_weapon_overlay_1806f6c90._10_2_,
                   s_model_local_weapon_overlay_1806f6c90._8_2_);
  uVar5 = CONCAT22(s_model_local_weapon_overlay_1806f6c90._14_2_,
                   s_model_local_weapon_overlay_1806f6c90._12_2_);
  *(undefined4 *)local_60 = s_model_local_weapon_overlay_1806f6c90._0_4_;
  *(undefined4 *)((longlong)local_60 + 4) = uVar6;
  *(undefined4 *)(local_60 + 1) = uVar4;
  *(undefined4 *)((longlong)local_60 + 0xc) = uVar5;
  uVar6 = s_model_local_weapon_overlay_1806f6c90._22_4_;
  uVar5 = s_model_local_weapon_overlay_1806f6c90._18_4_;
  uVar4 = CONCAT22(s_model_local_weapon_overlay_1806f6c90._16_2_,
                   s_model_local_weapon_overlay_1806f6c90._14_2_);
  *(uint *)((longlong)local_60 + 10) =
       CONCAT22(s_model_local_weapon_overlay_1806f6c90._12_2_,
                s_model_local_weapon_overlay_1806f6c90._10_2_);
  *(undefined4 *)((longlong)local_60 + 0xe) = uVar4;
  *(undefined4 *)((longlong)local_60 + 0x12) = uVar5;
  *(undefined4 *)((longlong)local_60 + 0x16) = uVar6;
  *(char *)((longlong)local_60 + 0x1a) = '\0';
  FUN_180175f10(param_1,&local_60,param_2 + 0x52c);
  if (0xf < local_48) {
    uVar10 = local_48 + 1;
    ppppcVar9 = local_60;
    if (0xfff < uVar10) {
      ppppcVar9 = (char ****)local_60[-1];
      if ((char *)0x1f < (char *)((longlong)local_60 + (-8 - (longlong)ppppcVar9)))
      goto LAB_180175385;
      uVar10 = local_48 + 0x28;
    }
    thunk_FUN_1803d64e0(ppppcVar9,uVar10);
  }
  local_60 = (char ****)0x0;
  uStack_58 = 0;
  local_60 = (char ****)FUN_18000fb70(0x20);
  uVar6 = s_model_local_keychain_1806f6d28._12_4_;
  uVar5 = s_model_local_keychain_1806f6d28._8_4_;
  uVar4 = s_model_local_keychain_1806f6d28._4_4_;
  local_50 = 0x14;
  local_48 = 0x1f;
  *(undefined4 *)local_60 = s_model_local_keychain_1806f6d28._0_4_;
  *(undefined4 *)((longlong)local_60 + 4) = uVar4;
  *(undefined4 *)(local_60 + 1) = uVar5;
  *(undefined4 *)((longlong)local_60 + 0xc) = uVar6;
  *(undefined4 *)(local_60 + 2) = s_model_local_keychain_1806f6d28._16_4_;
  *(char *)((longlong)local_60 + 0x14) = '\0';
  FUN_180175f10(param_1,&local_60,param_2 + 0x584);
  if (0xf < local_48) {
    uVar10 = local_48 + 1;
    ppppcVar9 = local_60;
    if (0xfff < uVar10) {
      ppppcVar9 = (char ****)local_60[-1];
      if ((char *)0x1f < (char *)((longlong)local_60 + (-8 - (longlong)ppppcVar9)))
      goto LAB_180175385;
      uVar10 = local_48 + 0x28;
    }
    thunk_FUN_1803d64e0(ppppcVar9,uVar10);
  }
  local_60 = (char ****)0x0;
  uStack_58 = 0;
  local_60 = (char ****)FUN_18000fb70(0x20);
  uVar6 = s_model_local_keychain_overlay_1806f6d40._12_4_;
  uVar5 = s_model_local_keychain_overlay_1806f6d40._8_4_;
  uVar4 = s_model_local_keychain_overlay_1806f6d40._4_4_;
  local_50 = 0x1c;
  local_48 = 0x1f;
  *(undefined4 *)local_60 = s_model_local_keychain_overlay_1806f6d40._0_4_;
  *(undefined4 *)((longlong)local_60 + 4) = uVar4;
  *(undefined4 *)(local_60 + 1) = uVar5;
  *(undefined4 *)((longlong)local_60 + 0xc) = uVar6;
  uVar6 = s_model_local_keychain_overlay_1806f6d40._24_4_;
  uVar5 = s_model_local_keychain_overlay_1806f6d40._20_4_;
  uVar4 = s_model_local_keychain_overlay_1806f6d40._16_4_;
  *(undefined4 *)((longlong)local_60 + 0xc) = s_model_local_keychain_overlay_1806f6d40._12_4_;
  *(undefined4 *)(local_60 + 2) = uVar4;
  *(undefined4 *)((longlong)local_60 + 0x14) = uVar5;
  *(undefined4 *)(local_60 + 3) = uVar6;
  *(char *)((longlong)local_60 + 0x1c) = '\0';
  FUN_180175f10(param_1,&local_60,param_2 + 0x5dc);
  if (0xf < local_48) {
    uVar10 = local_48 + 1;
    ppppcVar9 = local_60;
    if (0xfff < uVar10) {
      ppppcVar9 = (char ****)local_60[-1];
      if ((char *)0x1f < (char *)((longlong)local_60 + (-8 - (longlong)ppppcVar9)))
      goto LAB_180175385;
      uVar10 = local_48 + 0x28;
    }
    thunk_FUN_1803d64e0(ppppcVar9,uVar10);
  }
  local_60 = (char ****)0x0;
  uStack_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_60 = (char ****)FUN_18000fb70(0x20);
  uVar6 = s_model_local_colorize_stattrak_1806f6ce8._12_4_;
  uVar5 = s_model_local_colorize_stattrak_1806f6ce8._8_4_;
  uVar4 = s_model_local_colorize_stattrak_1806f6ce8._4_4_;
  local_50 = 0x1d;
  local_48 = 0x1f;
  *(undefined4 *)local_60 = s_model_local_colorize_stattrak_1806f6ce8._0_4_;
  *(undefined4 *)((longlong)local_60 + 4) = uVar4;
  *(undefined4 *)(local_60 + 1) = uVar5;
  *(undefined4 *)((longlong)local_60 + 0xc) = uVar6;
  uVar6 = s_model_local_colorize_stattrak_1806f6ce8._25_4_;
  uVar5 = s_model_local_colorize_stattrak_1806f6ce8._21_4_;
  uVar4 = s_model_local_colorize_stattrak_1806f6ce8._17_4_;
  *(uint *)((longlong)local_60 + 0xd) =
       CONCAT13(s_model_local_colorize_stattrak_1806f6ce8[0x10],
                s_model_local_colorize_stattrak_1806f6ce8._13_3_);
  *(undefined4 *)((longlong)local_60 + 0x11) = uVar4;
  *(undefined4 *)((longlong)local_60 + 0x15) = uVar5;
  *(undefined4 *)((longlong)local_60 + 0x19) = uVar6;
  *(char *)((longlong)local_60 + 0x1d) = '\0';
  FUN_1801730b0(param_1,&local_60,param_2 + 0x634);
  if (0xf < local_48) {
    uVar10 = local_48 + 1;
    ppppcVar9 = local_60;
    if (0xfff < uVar10) {
      ppppcVar9 = (char ****)local_60[-1];
      if ((char *)0x1f < (char *)((longlong)local_60 + (-8 - (longlong)ppppcVar9))) {
LAB_180175385:
        pcVar2 = (code *)swi(0x29);
        (*pcVar2)(5);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar10 = local_48 + 0x28;
    }
    thunk_FUN_1803d64e0(ppppcVar9,uVar10);
  }
  FUN_180013350(&local_60,"model.local.stattrak_weapon");
  FUN_180175510(param_1,&local_60,param_2 + 0x638);
  FUN_18000f890(&local_60);
  FUN_180013350(&local_60,"model.local.stattrak_knife");
  FUN_180175510(param_1,&local_60,param_2 + 0x648);
  FUN_18000f890(&local_60);
  return;
}



/* ===== 180175390 FUN_180175390 ===== */

void FUN_180175390(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  
  cVar1 = FUN_1801c2460();
  if (cVar1 != '\0') {
    FUN_18019dbe0(*param_1,param_2,param_3);
  }
  return;
}



/* ===== 1801753d0 FUN_1801753d0 ===== */

void FUN_1801753d0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  
  cVar1 = FUN_1801c2460();
  if (cVar1 != '\0') {
    FUN_18019dcc0(*param_1,param_2,param_3);
  }
  return;
}



/* ===== 180175410 FUN_180175410 ===== */

void FUN_180175410(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  
  cVar1 = FUN_1801c2460();
  if (cVar1 != '\0') {
    FUN_180152360(*param_1,param_2,param_3);
  }
  return;
}



/* ===== 180175450 FUN_180175450 ===== */

void FUN_180175450(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  
  cVar1 = FUN_1801c2460();
  if (cVar1 != '\0') {
    FUN_18019df50(*param_1,param_2,param_3);
  }
  return;
}



/* ===== 180175490 FUN_180175490 ===== */

void FUN_180175490(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  int *piVar2;
  longlong *plVar3;
  
  cVar1 = FUN_1801c2460();
  if (cVar1 != '\0') {
    piVar2 = (int *)FUN_1800f2fa0(*param_1,param_2);
    if ((piVar2 != (int *)0x0) && (*piVar2 == 3)) {
      plVar3 = (longlong *)(piVar2 + 4);
      *param_3 = 0;
      param_3[1] = 0;
      param_3[2] = 0;
      param_3[3] = 0;
      param_3[4] = 0;
      param_3[5] = 0;
      param_3[6] = 0;
      param_3[7] = 0;
      if (0xf < *(ulonglong *)(piVar2 + 10)) {
        plVar3 = (longlong *)*plVar3;
      }
      snprintf(param_3,0x40,&DAT_1806d3198,plVar3);
    }
  }
  return;
}



/* ===== 180175510 FUN_180175510 ===== */

void FUN_180175510(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  
  cVar1 = FUN_1801c2460();
  if (cVar1 != '\0') {
    FUN_18019e140(*param_1,param_2,param_3);
  }
  return;
}



/* ===== 180175550 FUN_180175550 ===== */

void FUN_180175550(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  
  cVar1 = FUN_1801c2460();
  if (cVar1 != '\0') {
    FUN_180152490(*param_1,param_2,param_3);
  }
  return;
}



/* ===== 180175590 FUN_180175590 ===== */

void FUN_180175590(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  
  cVar1 = FUN_1801c2460();
  if (cVar1 != '\0') {
    FUN_18019e1f0(*param_1,param_2,param_3);
  }
  return;
}



/* ===== 1801755d0 FUN_1801755d0 ===== */

void FUN_1801755d0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  
  cVar1 = FUN_1801c2460();
  if (cVar1 != '\0') {
    FUN_18019e580(*param_1,param_2,param_3);
  }
  return;
}



/* ===== 180175610 FUN_180175610 ===== */

void FUN_180175610(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  
  cVar1 = FUN_1801c2460();
  if (cVar1 != '\0') {
    FUN_180152130(*param_1,param_2,param_3);
  }
  return;
}



/* ===== 180175650 FUN_180175650 ===== */

void FUN_180175650(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  int *piVar2;
  longlong *plVar3;
  
  cVar1 = FUN_1801c2460();
  if (cVar1 != '\0') {
    piVar2 = (int *)FUN_1800f2fa0(*param_1,param_2);
    if ((piVar2 != (int *)0x0) && (*piVar2 == 3)) {
      FUN_180540170(param_3,0,0x104);
      plVar3 = (longlong *)(piVar2 + 4);
      if (0xf < *(ulonglong *)(piVar2 + 10)) {
        plVar3 = (longlong *)*plVar3;
      }
      snprintf(param_3,0x104,&DAT_1806d3198,plVar3);
    }
  }
  return;
}



/* ===== 1801756d0 FUN_1801756d0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801756d0(undefined8 *param_1,undefined8 param_2,int *param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  double dVar7;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [32];
  undefined1 local_a8 [32];
  undefined1 local_88 [32];
  undefined1 local_68 [32];
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_e8;
  uVar2 = FUN_180073a70(local_c8,param_2,&DAT_1806f5f30);
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1800f3090(*param_1,uVar2,param_3);
  }
  FUN_18000f890(local_c8);
  if (*param_3 != 0) {
    uVar2 = FUN_180073a70(local_c8,param_2,".side");
    cVar1 = FUN_1801c2460(param_1,uVar2);
    if (cVar1 != '\0') {
      FUN_1800f3090(*param_1,uVar2,param_3 + 1);
    }
    FUN_18000f890(local_c8);
    uVar2 = FUN_180073a70(local_c8,param_2,".paint_kit");
    cVar1 = FUN_1801c2460(param_1,uVar2);
    if (cVar1 != '\0') {
      FUN_1800f3090(*param_1,uVar2,param_3 + 2);
    }
    FUN_18000f890(local_c8);
    uVar2 = FUN_180073a70(local_c8,param_2,".wear");
    FUN_180173150(param_1,uVar2,param_3 + 3);
    FUN_18000f890(local_c8);
    uVar2 = FUN_180073a70(local_c8,param_2,".seed");
    cVar1 = FUN_1801c2460(param_1,uVar2);
    if (cVar1 != '\0') {
      FUN_1800f3090(*param_1,uVar2,param_3 + 4);
    }
    FUN_18000f890(local_c8);
    uVar2 = FUN_180073a70(local_c8,param_2,".stattrak");
    FUN_1801730b0(param_1,uVar2,param_3 + 5);
    FUN_18000f890(local_c8);
    uVar2 = FUN_180073a70(local_c8,param_2,".stattrak_value");
    cVar1 = FUN_1801c2460(param_1,uVar2);
    if (cVar1 != '\0') {
      FUN_1800f3090(*param_1,uVar2,param_3 + 6);
    }
    FUN_18000f890(local_c8);
    uVar2 = FUN_180073a70(local_c8,param_2,".nametag");
    FUN_180175490(param_1,uVar2,param_3 + 7);
    FUN_18000f890(local_c8);
    uVar2 = FUN_180073a70(local_c8,param_2,".custom_colors");
    FUN_1801730b0(param_1,uVar2,param_3 + 0x17);
    FUN_18000f890(local_c8);
    uVar5 = 0;
    do {
      uVar2 = FUN_18004e4f0(local_68,uVar5);
      uVar3 = FUN_180073a70(local_88,param_2,".color");
      uVar2 = FUN_180066820(local_c8,uVar3,uVar2);
      cVar1 = FUN_1801c2460(param_1,uVar2);
      if (cVar1 != '\0') {
        FUN_18019e140(*param_1,uVar2,param_3 + uVar5 * 4 + 0x18);
      }
      FUN_18000f890(local_c8);
      FUN_18000f890(local_88);
      FUN_18000f890(local_68);
      uVar5 = uVar5 + 1;
    } while (uVar5 < 8);
    uVar5 = 0;
    lVar6 = 0;
    do {
      uVar2 = FUN_18004e4f0(local_88,uVar5);
      uVar3 = FUN_180073a70(local_68,param_2,".sticker");
      FUN_180066820(local_c8,uVar3,uVar2);
      FUN_18000f890(local_68);
      FUN_18000f890(local_88);
      uVar2 = FUN_180073a70(local_a8,local_c8,&DAT_1806f6a6c);
      cVar1 = FUN_1801c2460(param_1,uVar2);
      if (cVar1 != '\0') {
        FUN_1800f3090(*param_1,uVar2,(longlong)param_3 + lVar6 + 0xe0);
      }
      FUN_18000f890(local_a8);
      uVar2 = FUN_180073a70(local_a8,local_c8,".wear");
      cVar1 = FUN_1801c2460(param_1,uVar2);
      if (cVar1 != '\0') {
        lVar4 = FUN_1800f2fa0(*param_1,uVar2);
        if (lVar4 != 0) {
          dVar7 = (double)FUN_180370b10(lVar4,SUB84((double)*(float *)((longlong)param_3 +
                                                                      lVar6 + 0xe4),0));
          if (((uint)(float)dVar7 & 0x7f800000) != 0x7f800000) {
            *(float *)((longlong)param_3 + lVar6 + 0xe4) = (float)dVar7;
          }
        }
      }
      FUN_18000f890(local_a8);
      uVar2 = FUN_180073a70(local_a8,local_c8,".scale");
      cVar1 = FUN_1801c2460(param_1,uVar2);
      if (cVar1 != '\0') {
        lVar4 = FUN_1800f2fa0(*param_1,uVar2);
        if (lVar4 != 0) {
          dVar7 = (double)FUN_180370b10(lVar4,SUB84((double)*(float *)((longlong)param_3 +
                                                                      lVar6 + 0xe8),0));
          if (((uint)(float)dVar7 & 0x7f800000) != 0x7f800000) {
            *(float *)((longlong)param_3 + lVar6 + 0xe8) = (float)dVar7;
          }
        }
      }
      FUN_18000f890(local_a8);
      uVar2 = FUN_180073a70(local_a8,local_c8,".rotation");
      cVar1 = FUN_1801c2460(param_1,uVar2);
      if (cVar1 != '\0') {
        lVar4 = FUN_1800f2fa0(*param_1,uVar2);
        if (lVar4 != 0) {
          dVar7 = (double)FUN_180370b10(lVar4,SUB84((double)*(float *)((longlong)param_3 +
                                                                      lVar6 + 0xec),0));
          if (((uint)(float)dVar7 & 0x7f800000) != 0x7f800000) {
            *(float *)((longlong)param_3 + lVar6 + 0xec) = (float)dVar7;
          }
        }
      }
      FUN_18000f890(local_a8);
      uVar2 = FUN_180073a70(local_a8,local_c8,".offset_x");
      cVar1 = FUN_1801c2460(param_1,uVar2);
      if (cVar1 != '\0') {
        lVar4 = FUN_1800f2fa0(*param_1,uVar2);
        if (lVar4 != 0) {
          dVar7 = (double)FUN_180370b10(lVar4,SUB84((double)*(float *)((longlong)param_3 +
                                                                      lVar6 + 0xf0),0));
          if (((uint)(float)dVar7 & 0x7f800000) != 0x7f800000) {
            *(float *)((longlong)param_3 + lVar6 + 0xf0) = (float)dVar7;
          }
        }
      }
      FUN_18000f890(local_a8);
      uVar2 = FUN_180073a70(local_a8,local_c8,".offset_y");
      cVar1 = FUN_1801c2460(param_1,uVar2);
      if (cVar1 != '\0') {
        lVar4 = FUN_1800f2fa0(*param_1,uVar2);
        if (lVar4 != 0) {
          dVar7 = (double)FUN_180370b10(lVar4,SUB84((double)*(float *)((longlong)param_3 +
                                                                      lVar6 + 0xf4),0));
          if (((uint)(float)dVar7 & 0x7f800000) != 0x7f800000) {
            *(float *)((longlong)param_3 + lVar6 + 0xf4) = (float)dVar7;
          }
        }
      }
      FUN_18000f890(local_a8);
      uVar2 = FUN_180073a70(local_a8,local_c8,".schema");
      cVar1 = FUN_1801c2460(param_1,uVar2);
      if (cVar1 != '\0') {
        FUN_1800f3090(*param_1,uVar2,(longlong)param_3 + lVar6 + 0xf8);
      }
      FUN_18000f890(local_a8);
      FUN_18000f890(local_c8);
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0x1c;
    } while (uVar5 < 6);
    uVar2 = FUN_180073a70(local_a8,param_2,".keychain.id");
    cVar1 = FUN_1801c2460(param_1,uVar2);
    if (cVar1 != '\0') {
      FUN_1800f3090(*param_1,uVar2,param_3 + 0x62);
    }
    FUN_18000f890(local_a8);
    uVar2 = FUN_180073a70(local_a8,param_2,".keychain.seed");
    cVar1 = FUN_1801c2460(param_1,uVar2);
    if (cVar1 != '\0') {
      FUN_1800f3090(*param_1,uVar2,param_3 + 99);
    }
    FUN_18000f890(local_a8);
    uVar2 = FUN_180073a70(local_a8,param_2,".keychain.offset_x");
    cVar1 = FUN_1801c2460(param_1,uVar2);
    if (cVar1 != '\0') {
      lVar6 = FUN_1800f2fa0(*param_1,uVar2);
      if (lVar6 != 0) {
        dVar7 = (double)FUN_180370b10(lVar6,SUB84((double)(float)param_3[100],0));
        if (((uint)(float)dVar7 & 0x7f800000) != 0x7f800000) {
          param_3[100] = (int)(float)dVar7;
        }
      }
    }
    FUN_18000f890(local_a8);
    uVar2 = FUN_180073a70(local_a8,param_2,".keychain.offset_y");
    cVar1 = FUN_1801c2460(param_1,uVar2);
    if (cVar1 != '\0') {
      lVar6 = FUN_1800f2fa0(*param_1,uVar2);
      if (lVar6 != 0) {
        dVar7 = (double)FUN_180370b10(lVar6,SUB84((double)(float)param_3[0x65],0));
        if (((uint)(float)dVar7 & 0x7f800000) != 0x7f800000) {
          param_3[0x65] = (int)(float)dVar7;
        }
      }
    }
    FUN_18000f890(local_a8);
    uVar2 = FUN_180073a70(local_a8,param_2,".keychain.offset_z");
    cVar1 = FUN_1801c2460(param_1,uVar2);
    if (cVar1 != '\0') {
      lVar6 = FUN_1800f2fa0(*param_1,uVar2);
      if (lVar6 != 0) {
        dVar7 = (double)FUN_180370b10(lVar6,SUB84((double)(float)param_3[0x66],0));
        if (((uint)(float)dVar7 & 0x7f800000) != 0x7f800000) {
          param_3[0x66] = (int)(float)dVar7;
        }
      }
    }
    FUN_18000f890(local_a8);
    uVar2 = FUN_180073a70(local_a8,param_2,".keychain.sticker");
    cVar1 = FUN_1801c2460(param_1,uVar2);
    if (cVar1 != '\0') {
      FUN_1800f3090(*param_1,uVar2,param_3 + 0x67);
    }
    FUN_18000f890(local_a8);
  }
  return;
}



/* ===== 180175f10 FUN_180175f10 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180175f10(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [32];
  undefined1 local_58 [32];
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStack_78;
  uVar2 = FUN_180073a70(local_58,param_2,".material");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1800f3090(*param_1,uVar2,param_3);
  }
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,".color");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_18019e140(*param_1,uVar2,param_3 + 4);
  }
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,".metalness");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1800f3090(*param_1,uVar2,param_3 + 0x14);
  }
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,".roughness");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1800f3090(*param_1,uVar2,param_3 + 0x18);
  }
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,".glow_exponent");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1800f3090(*param_1,uVar2,param_3 + 0x1c);
  }
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,".outline_exponent");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1800f3090(*param_1,uVar2,param_3 + 0x20);
  }
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,".outline_falloff");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1800f3090(*param_1,uVar2,param_3 + 0x24);
  }
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,".outline_filling");
  FUN_1801730b0(param_1,uVar2,param_3 + 0x28);
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,".iridescent_strength");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1800f3090(*param_1,uVar2,param_3 + 0x2c);
  }
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,".iridescent_roughness");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1800f3090(*param_1,uVar2,param_3 + 0x30);
  }
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,".iridescent_tint");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_18019e140(*param_1,uVar2,param_3 + 0x34);
  }
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,".water_speed");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1800f3090(*param_1,uVar2,param_3 + 0x44);
  }
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,".glossy_exponent");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1800f3090(*param_1,uVar2,param_3 + 0x48);
  }
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,".glossy_filling");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1800f3090(*param_1,uVar2,param_3 + 0x4c);
  }
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,".glossy_falloff");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1800f3090(*param_1,uVar2,param_3 + 0x50);
  }
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,".glossy_tint");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1800f3090(*param_1,uVar2,param_3 + 0x54);
  }
  FUN_18000f890(local_58);
  return;
}



/* ===== 180176320 FUN_180176320 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180176320(undefined8 *param_1,undefined8 param_2,longlong param_3)

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
  return;
}



/* ===== 1801763c0 FUN_1801763c0 ===== */

void FUN_1801763c0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  int *piVar2;
  longlong *plVar3;
  
  cVar1 = FUN_1801c2460();
  if (cVar1 != '\0') {
    piVar2 = (int *)FUN_1800f2fa0(*param_1,param_2);
    if ((piVar2 != (int *)0x0) && (*piVar2 == 3)) {
      plVar3 = (longlong *)(piVar2 + 4);
      *param_3 = 0;
      param_3[1] = 0;
      *(undefined4 *)(param_3 + 2) = 0;
      if (0xf < *(ulonglong *)(piVar2 + 10)) {
        plVar3 = (longlong *)*plVar3;
      }
      snprintf(param_3,0x14,&DAT_1806d3198,plVar3);
    }
  }
  return;
}



/* ===== 180176440 FUN_180176440 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180176440(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  undefined8 uVar2;
  int *piVar3;
  longlong *plVar4;
  undefined1 auStack_78 [32];
  undefined1 local_58 [32];
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStack_78;
  FUN_1801b2b10(param_1,param_2,param_3 + 0x264);
  uVar2 = FUN_180073a70(local_58,param_2,"world.modulation");
  FUN_1801730b0(param_1,uVar2,param_3 + 4);
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,"world.modulation_color");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_18019e140(*param_1,uVar2,param_3 + 8);
  }
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,"world.gamma");
  FUN_1801730b0(param_1,uVar2,param_3 + 0x18);
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,"world.gamma_value");
  FUN_180173150(param_1,uVar2,param_3 + 0x1c);
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,"world.bloom");
  FUN_1801730b0(param_1,uVar2,param_3 + 0x20);
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,"world.bloom_amount");
  FUN_180173150(param_1,uVar2,param_3 + 0x24);
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,"world.wetness");
  FUN_1801730b0(param_1,uVar2,param_3 + 0x28);
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,"world.wetness_density");
  FUN_180173150(param_1,uVar2,param_3 + 0x2c);
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,"world.wetness_speed");
  FUN_180173150(param_1,uVar2,param_3 + 0x30);
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,"world.wind");
  FUN_1801730b0(param_1,uVar2,param_3 + 0x34);
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,"world.wind_strength");
  FUN_180173150(param_1,uVar2,param_3 + 0x38);
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,"world.wind_direction");
  FUN_180173150(param_1,uVar2,param_3 + 0x3c);
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,"world.dof");
  FUN_1801730b0(param_1,uVar2,param_3 + 0x40);
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,"world.fog");
  FUN_1801730b0(param_1,uVar2,param_3 + 0x54);
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,"world.fog_color");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_18019e140(*param_1,uVar2,param_3 + 0x58);
  }
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,"world.fog_density");
  FUN_180173150(param_1,uVar2,param_3 + 0x68);
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,"world.fog_distance");
  FUN_180173150(param_1,uVar2,param_3 + 0x6c);
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,"world.fog_falloff");
  FUN_180173150(param_1,uVar2,param_3 + 0x70);
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,"world.fog_glow");
  FUN_180173150(param_1,uVar2,param_3 + 0x74);
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,"world.dof_near_blurry");
  FUN_180173150(param_1,uVar2,param_3 + 0x44);
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,"world.dof_near_crisp");
  FUN_180173150(param_1,uVar2,param_3 + 0x48);
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,"world.dof_far_crisp");
  FUN_180173150(param_1,uVar2,param_3 + 0x4c);
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,"world.dof_far_blurry");
  FUN_180173150(param_1,uVar2,param_3 + 0x50);
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,"screen.rain");
  FUN_1801730b0(param_1,uVar2,param_3 + 0x20c);
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,"screen.rain_amount");
  FUN_180173150(param_1,uVar2,param_3 + 0x210);
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,"screen.rain_size");
  FUN_180173150(param_1,uVar2,param_3 + 0x214);
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,"screen.rain_speed");
  FUN_180173150(param_1,uVar2,param_3 + 0x218);
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,"screen.rain_fog");
  FUN_180173150(param_1,uVar2,param_3 + 0x21c);
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,"screen.rain_blur");
  FUN_180173150(param_1,uVar2,param_3 + 0x220);
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,"screen.chromatic");
  FUN_1801730b0(param_1,uVar2,param_3 + 0x224);
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,"screen.chromatic_amount");
  FUN_180173150(param_1,uVar2,param_3 + 0x228);
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,"screen.vignette");
  FUN_1801730b0(param_1,uVar2,param_3 + 0x22c);
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,"screen.vignette_amount");
  FUN_180173150(param_1,uVar2,param_3 + 0x230);
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,"sky.mode");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1800f3090(*param_1,uVar2,param_3 + 0x78);
  }
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,"sky.texture");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    piVar3 = (int *)FUN_1800f2fa0(*param_1,uVar2);
    if ((piVar3 != (int *)0x0) && (*piVar3 == 3)) {
      FUN_180540170(param_3 + 0x7c,0,0xa0);
      plVar4 = (longlong *)(piVar3 + 4);
      if (0xf < *(ulonglong *)(piVar3 + 10)) {
        plVar4 = (longlong *)*plVar4;
      }
      snprintf(param_3 + 0x7c,0xa0,&DAT_1806d3198,plVar4);
    }
  }
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,"sky.shader");
  FUN_180175490(param_1,uVar2,param_3 + 0x11c);
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,"sky.params");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1801c1520(*param_1,uVar2,param_3 + 0x15c);
  }
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,"sky.primary");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_18019e140(*param_1,uVar2,param_3 + 0x17c);
  }
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,"sky.secondary");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_18019e140(*param_1,uVar2,param_3 + 0x18c);
  }
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,"sky.exposure");
  FUN_180173150(param_1,uVar2,param_3 + 0x19c);
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,"sky.update_rate");
  FUN_180173150(param_1,uVar2,param_3 + 0x1a0);
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,"sky.resolution");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1800f3090(*param_1,uVar2,param_3 + 0x1a4);
  }
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,"sky.supersample");
  FUN_1801730b0(param_1,uVar2,param_3 + 0x1a8);
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,"sky.recolor");
  FUN_1801730b0(param_1,uVar2,param_3 + 0x1a9);
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,"sky.recolor_strength");
  FUN_180173150(param_1,uVar2,param_3 + 0x1ac);
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,"sky.sky_tint");
  FUN_1801730b0(param_1,uVar2,param_3 + 0x1b0);
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,"sky.sky_color");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_18019e140(*param_1,uVar2,param_3 + 0x1b4);
  }
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,"sky.brightness");
  FUN_180173150(param_1,uVar2,param_3 + 0x208);
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,"sky.cloud_tint");
  FUN_1801730b0(param_1,uVar2,param_3 + 0x1c4);
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,"sky.cloud_color");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_18019e140(*param_1,uVar2,param_3 + 0x1c8);
  }
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,"sky.sun_tint");
  FUN_1801730b0(param_1,uVar2,param_3 + 0x1d8);
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,"sky.sun_color");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_18019e140(*param_1,uVar2,param_3 + 0x1dc);
  }
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,"sky.lighting");
  FUN_1801730b0(param_1,uVar2,param_3 + 0x1ec);
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,"sky.lighting_color");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_18019e140(*param_1,uVar2,param_3 + 0x1f0);
  }
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,"sky.lighting_intensity");
  FUN_180173150(param_1,uVar2,param_3 + 0x200);
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,"sky.lighting_mode");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1800f3090(*param_1,uVar2,param_3 + 0x204);
  }
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,"motion_blur.enabled");
  FUN_1801730b0(param_1,uVar2,param_3 + 0x234);
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,"motion_blur.strength");
  FUN_180173150(param_1,uVar2,param_3 + 0x238);
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,"weather.enabled");
  FUN_1801730b0(param_1,uVar2,param_3 + 0x23c);
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,"weather.type");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1800f3090(*param_1,uVar2,param_3 + 0x240);
  }
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,"weather.color");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_18019e140(*param_1,uVar2,param_3 + 0x244);
  }
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,"weather.density");
  FUN_180173150(param_1,uVar2,param_3 + 0x254);
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,"weather.gravity");
  FUN_180173150(param_1,uVar2,param_3 + 600);
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,"weather.glow");
  FUN_180173150(param_1,uVar2,param_3 + 0x25c);
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,"weather.rain_mist");
  FUN_1801730b0(param_1,uVar2,param_3 + 0x260);
  FUN_18000f890(local_58);
  uVar2 = FUN_180073a70(local_58,param_2,"weather.rain_ripples");
  FUN_1801730b0(param_1,uVar2,param_3 + 0x261);
  FUN_18000f890(local_58);
  return;
}



/* ===== 1801771f0 FUN_1801771f0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801771f0(undefined8 *param_1,undefined8 *param_2,int *param_3)

{
  code *pcVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  ulonglong *puVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
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
  uVar4 = FUN_180073a70(&local_a0,param_2,"count");
  cVar3 = FUN_1801c2460(param_1,uVar4);
  if (cVar3 != '\0') {
    FUN_1800f3090(*param_1,uVar4,param_3);
  }
  FUN_18000f890(&local_a0);
  uVar10 = 1;
  do {
    if (*param_3 <= (int)uVar10) {
      return;
    }
    uVar4 = FUN_18004e4f0(local_60,uVar10);
    if ((ulonglong)param_2[3] < 0x10) {
      puVar11 = param_2;
    }
    else {
      puVar11 = (undefined8 *)*param_2;
    }
    puVar5 = (ulonglong *)FUN_18006b5b0(uVar4,0,puVar11,param_2[2]);
    local_c0 = *puVar5;
    uStack_b8 = puVar5[1];
    local_b0 = puVar5[2];
    uStack_a8 = puVar5[3];
    puVar5[2] = 0;
    puVar5[3] = 0xf;
    *(undefined1 *)puVar5 = 0;
    puVar6 = (undefined4 *)FUN_1800134a0(&local_c0,&DAT_1806e6f24,1);
    local_a0 = *puVar6;
    uStack_9c = puVar6[1];
    uStack_98 = puVar6[2];
    uStack_94 = puVar6[3];
    local_90 = puVar6[4];
    uStack_8c = puVar6[5];
    uStack_88 = puVar6[6];
    uStack_84 = puVar6[7];
    *(undefined8 *)(puVar6 + 4) = 0;
    *(undefined8 *)(puVar6 + 6) = 0xf;
    *(undefined1 *)puVar6 = 0;
    if (0xf < uStack_a8) {
      uVar9 = uStack_a8 + 1;
      uVar7 = local_c0;
      if (0xfff < uVar9) {
        uVar7 = *(ulonglong *)(local_c0 - 8);
        if (0x1f < (local_c0 - uVar7) - 8) {
          pcVar1 = (code *)swi(0x29);
          (*pcVar1)(5);
          goto LAB_18017743d;
        }
        uVar9 = uStack_a8 + 0x28;
      }
      thunk_FUN_1803d64e0(uVar7,uVar9);
    }
    local_b0 = 0;
    uStack_a8 = 0xf;
    local_c0 = local_c0 & 0xffffffffffffff00;
    FUN_18000f890(local_60);
    uVar4 = FUN_180073a70(local_80,&local_a0,&DAT_18058b644);
    FUN_180175490(param_1,uVar4,param_3 + uVar10 * 0x52 + 1);
    FUN_18000f890(local_80);
    uVar4 = FUN_180073a70(local_80,&local_a0,"weapons");
    cVar3 = FUN_1801c2460(param_1,uVar4);
    if (cVar3 != '\0') {
      FUN_1800f3150(*param_1,uVar4,param_3 + uVar10 * 0x52 + 0x11);
    }
    FUN_18000f890(local_80);
    uVar7 = CONCAT44(uStack_84,uStack_88);
    if (0xf < uVar7) {
      uVar9 = uVar7 + 1;
      lVar2 = CONCAT44(uStack_9c,local_a0);
      lVar8 = lVar2;
      if (0xfff < uVar9) {
        lVar8 = *(longlong *)(lVar2 + -8);
        if (0x1f < (lVar2 - lVar8) - 8U) {
LAB_18017743d:
          pcVar1 = (code *)swi(0x29);
          (*pcVar1)(5);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        uVar9 = uVar7 + 0x28;
      }
      thunk_FUN_1803d64e0(lVar8,uVar9);
    }
    uVar10 = uVar10 + 1;
    if (0x3f < uVar10) {
      return;
    }
  } while( true );
}



/* ===== 180177450 FUN_180177450 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180177450(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined1 local_48 [32];
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_68;
  uVar2 = FUN_180073a70(local_48,param_2,"hitboxes");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_180152130(*param_1,uVar2,param_3);
  }
  FUN_18000f890(local_48);
  uVar2 = FUN_180073a70(local_48,param_2,"extrapolation");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1800f3090(*param_1,uVar2,param_3 + 8);
  }
  FUN_18000f890(local_48);
  uVar2 = FUN_180073a70(local_48,param_2,"hitchance");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1800f3090(*param_1,uVar2,param_3 + 0xc);
  }
  FUN_18000f890(local_48);
  uVar2 = FUN_180073a70(local_48,param_2,"force_shot");
  FUN_1801730b0(param_1,uVar2,param_3 + 0x10);
  FUN_18000f890(local_48);
  uVar2 = FUN_180073a70(local_48,param_2,"min_hitchance");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1800f3090(*param_1,uVar2,param_3 + 0x14);
  }
  FUN_18000f890(local_48);
  uVar2 = FUN_180073a70(local_48,param_2,"min_damage");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1800f3090(*param_1,uVar2,param_3 + 0x18);
  }
  FUN_18000f890(local_48);
  uVar2 = FUN_180073a70(local_48,param_2,"quick_stop");
  FUN_1801730b0(param_1,uVar2,param_3 + 0x1c);
  FUN_18000f890(local_48);
  uVar2 = FUN_180073a70(local_48,param_2,"quick_stop_options");
  cVar1 = FUN_1801c2460(param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_180152360(*param_1,uVar2,param_3 + 0x1d);
  }
  FUN_18000f890(local_48);
  uVar2 = FUN_180073a70(local_48,param_2,"quick_scope");
  FUN_1801730b0(param_1,uVar2,param_3 + 0x20);
  FUN_18000f890(local_48);
  return;
}



/* ===== 1801776a0 FUN_1801776a0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801776a0(longlong *param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  size_t sVar8;
  char cVar9;
  undefined1 uVar10;
  int iVar11;
  undefined8 uVar12;
  char *****pppppcVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  undefined1 auStack_d8 [40];
  char *****local_b0;
  undefined8 uStack_a8;
  size_t local_a0;
  ulonglong local_98;
  undefined1 local_90 [32];
  undefined1 local_70 [32];
  ulonglong local_50;
  
  local_50 = DAT_180919500 ^ (ulonglong)auStack_d8;
  FUN_180013350(&local_b0,"legitbot.enabled");
  FUN_1801730b0(param_1,&local_b0,param_2);
  FUN_18000f890(&local_b0);
  FUN_180013350(&local_b0,"legitbot.groups.");
  FUN_1801771f0(param_1,&local_b0,param_2 + 4);
  FUN_18000f890(&local_b0);
  uVar17 = 0;
  do {
    iVar11 = *(int *)(param_2 + 4);
    if (iVar11 < 1) {
      iVar11 = 1;
    }
    if (iVar11 <= (int)uVar17) break;
    uVar12 = FUN_1800ef450(local_70,uVar17 & 0xffffffff);
    uVar12 = FUN_180066ab0(local_90,"legitbot.",uVar12);
    uVar12 = FUN_180042850(&local_b0,uVar12,&DAT_1806e6f24);
    FUN_1801b46b0(param_1,uVar12,param_2 + 21000 + uVar17 * 100,param_2 + 0x6b08 + uVar17 * 0x3c);
    FUN_18000f890(&local_b0);
    FUN_18000f890(local_90);
    FUN_18000f890(local_70);
    uVar17 = uVar17 + 1;
  } while (uVar17 < 0x40);
  local_b0 = (char *****)0x0;
  uStack_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_b0 = (char *****)FUN_18000fb70(0x20);
  uVar7 = s_legitbot_visualize_1806f74f0._12_4_;
  uVar6 = s_legitbot_visualize_1806f74f0._8_4_;
  uVar5 = s_legitbot_visualize_1806f74f0._4_4_;
  local_a0 = 0x12;
  local_98 = 0x1f;
  *(undefined4 *)local_b0 = s_legitbot_visualize_1806f74f0._0_4_;
  *(undefined4 *)((longlong)local_b0 + 4) = uVar5;
  *(undefined4 *)(local_b0 + 1) = uVar6;
  *(undefined4 *)((longlong)local_b0 + 0xc) = uVar7;
  *(undefined2 *)(local_b0 + 2) = s_legitbot_visualize_1806f74f0._16_2_;
  *(char *)((longlong)local_b0 + 0x12) = '\0';
  cVar9 = FUN_1801c2460(param_1,&local_b0);
  uVar17 = local_98;
  sVar8 = local_a0;
  if (cVar9 != '\0') {
    pppppcVar13 = (char *****)&local_b0;
    if (0xf < local_98) {
      pppppcVar13 = local_b0;
    }
    puVar1 = *(undefined8 **)(*(longlong *)*param_1 + 0x50);
    for (puVar16 = *(undefined8 **)(*(longlong *)*param_1 + 0x48); puVar16 != puVar1;
        puVar16 = puVar16 + 0x10) {
      if ((ulonglong)puVar16[3] < 0x10) {
        puVar15 = puVar16;
      }
      else {
        puVar15 = (undefined8 *)*puVar16;
      }
      if ((sVar8 == puVar16[2]) &&
         ((sVar8 == 0 || (iVar11 = memcmp(pppppcVar13,puVar15,sVar8), iVar11 == 0)))) {
        if ((int *)(puVar16 + 4) != (int *)0x0) {
          *(int *)(*param_1 + 8) = *(int *)(*param_1 + 8) + 1;
          iVar11 = *(int *)(puVar16 + 4);
          if (iVar11 == 1) {
            uVar10 = *(undefined1 *)((longlong)puVar16 + 0x24);
          }
          else if (iVar11 == 2) {
            if ((double)puVar16[5] == 0.0) {
              uVar10 = 0;
            }
            else {
              uVar10 = 1;
            }
          }
          else {
            uVar10 = *(undefined1 *)(param_2 + 0x7a08);
          }
          *(undefined1 *)(param_2 + 0x7a08) = uVar10;
          uVar17 = local_98;
        }
        break;
      }
    }
  }
  if (0xf < uVar17) {
    uVar14 = uVar17 + 1;
    pppppcVar13 = local_b0;
    if (0xfff < uVar14) {
      pppppcVar13 = (char *****)local_b0[-1];
      if ((char *)0x1f < (char *)((longlong)local_b0 + (-8 - (longlong)pppppcVar13)))
      goto LAB_180178bc5;
      uVar14 = uVar17 + 0x28;
    }
    thunk_FUN_1803d64e0(pppppcVar13,uVar14);
  }
  local_b0 = (char *****)0x0;
  uStack_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_b0 = (char *****)FUN_18000fb70(0x20);
  uVar7 = s_legitbot_visualize_target_1806f7540._12_4_;
  uVar6 = s_legitbot_visualize_target_1806f7540._8_4_;
  uVar5 = s_legitbot_visualize_target_1806f7540._4_4_;
  local_a0 = 0x19;
  local_98 = 0x1f;
  *(undefined4 *)local_b0 = s_legitbot_visualize_target_1806f7540._0_4_;
  *(undefined4 *)((longlong)local_b0 + 4) = uVar5;
  *(undefined4 *)(local_b0 + 1) = uVar6;
  *(undefined4 *)((longlong)local_b0 + 0xc) = uVar7;
  uVar7 = s_legitbot_visualize_target_1806f7540._21_4_;
  uVar6 = s_legitbot_visualize_target_1806f7540._17_4_;
  uVar5 = CONCAT13(s_legitbot_visualize_target_1806f7540[0x10],
                   s_legitbot_visualize_target_1806f7540._13_3_);
  *(uint *)((longlong)local_b0 + 9) =
       CONCAT13(s_legitbot_visualize_target_1806f7540[0xc],
                s_legitbot_visualize_target_1806f7540._9_3_);
  *(undefined4 *)((longlong)local_b0 + 0xd) = uVar5;
  *(undefined4 *)((longlong)local_b0 + 0x11) = uVar6;
  *(undefined4 *)((longlong)local_b0 + 0x15) = uVar7;
  *(char *)((longlong)local_b0 + 0x19) = '\0';
  cVar9 = FUN_1801c2460(param_1,&local_b0);
  sVar8 = local_a0;
  if (cVar9 != '\0') {
    plVar2 = (longlong *)*param_1;
    lVar3 = *plVar2;
    pppppcVar13 = (char *****)&local_b0;
    if (0xf < local_98) {
      pppppcVar13 = local_b0;
    }
    puVar1 = *(undefined8 **)(lVar3 + 0x50);
    for (puVar16 = *(undefined8 **)(lVar3 + 0x48); puVar16 != puVar1; puVar16 = puVar16 + 0x10) {
      if ((ulonglong)puVar16[3] < 0x10) {
        puVar15 = puVar16;
      }
      else {
        puVar15 = (undefined8 *)*puVar16;
      }
      if ((sVar8 == puVar16[2]) &&
         ((sVar8 == 0 || (iVar11 = memcmp(pppppcVar13,puVar15,sVar8), iVar11 == 0)))) {
        if ((int *)(puVar16 + 4) != (int *)0x0) {
          plVar2 = plVar2 + 1;
          *(int *)plVar2 = (int)*plVar2 + 1;
          iVar11 = *(int *)(puVar16 + 4);
          if (iVar11 == 1) {
            uVar10 = *(undefined1 *)((longlong)puVar16 + 0x24);
          }
          else if (iVar11 == 2) {
            if ((double)puVar16[5] == 0.0) {
              uVar10 = 0;
            }
            else {
              uVar10 = 1;
            }
          }
          else {
            uVar10 = *(undefined1 *)(param_2 + 0x7a09);
          }
          *(undefined1 *)(param_2 + 0x7a09) = uVar10;
        }
        break;
      }
    }
  }
  FUN_18000f890(&local_b0);
  local_b0 = (char *****)0x0;
  uStack_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_b0 = (char *****)FUN_18000fb70(0x20);
  uVar7 = s_legitbot_target_color_1806f7560._12_4_;
  uVar6 = s_legitbot_target_color_1806f7560._8_4_;
  uVar5 = s_legitbot_target_color_1806f7560._4_4_;
  local_a0 = 0x15;
  local_98 = 0x1f;
  *(undefined4 *)local_b0 = s_legitbot_target_color_1806f7560._0_4_;
  *(undefined4 *)((longlong)local_b0 + 4) = uVar5;
  *(undefined4 *)(local_b0 + 1) = uVar6;
  *(undefined4 *)((longlong)local_b0 + 0xc) = uVar7;
  *(ulonglong *)((longlong)local_b0 + 0xd) =
       CONCAT53(s_legitbot_target_color_1806f7560._16_5_,s_legitbot_target_color_1806f7560._13_3_);
  *(char *)((longlong)local_b0 + 0x15) = '\0';
  cVar9 = FUN_1801c2460(param_1,&local_b0);
  if (cVar9 != '\0') {
    FUN_18019e140(*param_1,&local_b0,param_2 + 0x7a0c);
  }
  if (0xf < local_98) {
    uVar17 = local_98 + 1;
    pppppcVar13 = local_b0;
    if (0xfff < uVar17) {
      pppppcVar13 = (char *****)local_b0[-1];
      if ((char *)0x1f < (char *)((longlong)local_b0 + (-8 - (longlong)pppppcVar13)))
      goto LAB_180178bc5;
      uVar17 = local_98 + 0x28;
    }
    thunk_FUN_1803d64e0(pppppcVar13,uVar17);
  }
  local_b0 = (char *****)0x0;
  uStack_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_b0 = (char *****)FUN_18000fb70(0x20);
  uVar7 = s_legitbot_visualize_fov_1806f7510._8_4_;
  uVar6 = s_legitbot_visualize_fov_1806f7510._4_4_;
  local_a0 = 0x16;
  local_98 = 0x1f;
  uVar5 = CONCAT22(s_legitbot_visualize_fov_1806f7510._14_2_,
                   s_legitbot_visualize_fov_1806f7510._12_2_);
  *(undefined4 *)local_b0 = s_legitbot_visualize_fov_1806f7510._0_4_;
  *(undefined4 *)((longlong)local_b0 + 4) = uVar6;
  *(undefined4 *)(local_b0 + 1) = uVar7;
  *(undefined4 *)((longlong)local_b0 + 0xc) = uVar5;
  *(ulonglong *)((longlong)local_b0 + 0xe) =
       CONCAT62(s_legitbot_visualize_fov_1806f7510._16_6_,s_legitbot_visualize_fov_1806f7510._14_2_)
  ;
  *(char *)((longlong)local_b0 + 0x16) = '\0';
  cVar9 = FUN_1801c2460(param_1,&local_b0);
  uVar17 = local_98;
  sVar8 = local_a0;
  if (cVar9 != '\0') {
    pppppcVar13 = (char *****)&local_b0;
    if (0xf < local_98) {
      pppppcVar13 = local_b0;
    }
    puVar1 = *(undefined8 **)(*(longlong *)*param_1 + 0x50);
    for (puVar16 = *(undefined8 **)(*(longlong *)*param_1 + 0x48); puVar16 != puVar1;
        puVar16 = puVar16 + 0x10) {
      if ((ulonglong)puVar16[3] < 0x10) {
        puVar15 = puVar16;
      }
      else {
        puVar15 = (undefined8 *)*puVar16;
      }
      if ((sVar8 == puVar16[2]) &&
         ((sVar8 == 0 || (iVar11 = memcmp(pppppcVar13,puVar15,sVar8), iVar11 == 0)))) {
        if ((int *)(puVar16 + 4) != (int *)0x0) {
          *(int *)(*param_1 + 8) = *(int *)(*param_1 + 8) + 1;
          iVar11 = *(int *)(puVar16 + 4);
          if (iVar11 == 1) {
            uVar10 = *(undefined1 *)((longlong)puVar16 + 0x24);
          }
          else if (iVar11 == 2) {
            if ((double)puVar16[5] == 0.0) {
              uVar10 = 0;
            }
            else {
              uVar10 = 1;
            }
          }
          else {
            uVar10 = *(undefined1 *)(param_2 + 0x7a1c);
          }
          *(undefined1 *)(param_2 + 0x7a1c) = uVar10;
          uVar17 = local_98;
        }
        break;
      }
    }
  }
  if (0xf < uVar17) {
    uVar14 = uVar17 + 1;
    pppppcVar13 = local_b0;
    if (0xfff < uVar14) {
      pppppcVar13 = (char *****)local_b0[-1];
      if ((char *)0x1f < (char *)((longlong)local_b0 + (-8 - (longlong)pppppcVar13)))
      goto LAB_180178bc5;
      uVar14 = uVar17 + 0x28;
    }
    thunk_FUN_1803d64e0(pppppcVar13,uVar14);
  }
  local_b0 = (char *****)0x0;
  uStack_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_b0 = (char *****)FUN_18000fb70(0x20);
  uVar7 = s_legitbot_fov_color_1806f7528._12_4_;
  uVar6 = s_legitbot_fov_color_1806f7528._8_4_;
  uVar5 = s_legitbot_fov_color_1806f7528._4_4_;
  local_a0 = 0x12;
  local_98 = 0x1f;
  *(undefined4 *)local_b0 = s_legitbot_fov_color_1806f7528._0_4_;
  *(undefined4 *)((longlong)local_b0 + 4) = uVar5;
  *(undefined4 *)(local_b0 + 1) = uVar6;
  *(undefined4 *)((longlong)local_b0 + 0xc) = uVar7;
  *(undefined2 *)(local_b0 + 2) = s_legitbot_fov_color_1806f7528._16_2_;
  *(char *)((longlong)local_b0 + 0x12) = '\0';
  cVar9 = FUN_1801c2460(param_1,&local_b0);
  if (cVar9 != '\0') {
    FUN_18019e140(*param_1,&local_b0,param_2 + 0x7a20);
  }
  if (0xf < local_98) {
    uVar17 = local_98 + 1;
    pppppcVar13 = local_b0;
    if (0xfff < uVar17) {
      pppppcVar13 = (char *****)local_b0[-1];
      if ((char *)0x1f < (char *)((longlong)local_b0 + (-8 - (longlong)pppppcVar13)))
      goto LAB_180178bc5;
      uVar17 = local_98 + 0x28;
    }
    thunk_FUN_1803d64e0(pppppcVar13,uVar17);
  }
  local_b0 = (char *****)0x0;
  uStack_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_b0 = (char *****)FUN_18000fb70(0x20);
  uVar7 = s_legitbot_visualize_hitboxes_1806f75b8._12_4_;
  uVar6 = s_legitbot_visualize_hitboxes_1806f75b8._8_4_;
  uVar5 = s_legitbot_visualize_hitboxes_1806f75b8._4_4_;
  local_a0 = 0x1b;
  local_98 = 0x1f;
  *(undefined4 *)local_b0 = s_legitbot_visualize_hitboxes_1806f75b8._0_4_;
  *(undefined4 *)((longlong)local_b0 + 4) = uVar5;
  *(undefined4 *)(local_b0 + 1) = uVar6;
  *(undefined4 *)((longlong)local_b0 + 0xc) = uVar7;
  uVar7 = s_legitbot_visualize_hitboxes_1806f75b8._23_4_;
  uVar6 = s_legitbot_visualize_hitboxes_1806f75b8._19_4_;
  uVar5 = CONCAT31(s_legitbot_visualize_hitboxes_1806f75b8._16_3_,
                   s_legitbot_visualize_hitboxes_1806f75b8[0xf]);
  *(uint *)((longlong)local_b0 + 0xb) =
       CONCAT31(s_legitbot_visualize_hitboxes_1806f75b8._12_3_,
                s_legitbot_visualize_hitboxes_1806f75b8[0xb]);
  *(undefined4 *)((longlong)local_b0 + 0xf) = uVar5;
  *(undefined4 *)((longlong)local_b0 + 0x13) = uVar6;
  *(undefined4 *)((longlong)local_b0 + 0x17) = uVar7;
  *(char *)((longlong)local_b0 + 0x1b) = '\0';
  cVar9 = FUN_1801c2460(param_1,&local_b0);
  uVar17 = local_98;
  sVar8 = local_a0;
  if (cVar9 != '\0') {
    pppppcVar13 = (char *****)&local_b0;
    if (0xf < local_98) {
      pppppcVar13 = local_b0;
    }
    puVar1 = *(undefined8 **)(*(longlong *)*param_1 + 0x50);
    for (puVar16 = *(undefined8 **)(*(longlong *)*param_1 + 0x48); puVar16 != puVar1;
        puVar16 = puVar16 + 0x10) {
      if ((ulonglong)puVar16[3] < 0x10) {
        puVar15 = puVar16;
      }
      else {
        puVar15 = (undefined8 *)*puVar16;
      }
      if ((sVar8 == puVar16[2]) &&
         ((sVar8 == 0 || (iVar11 = memcmp(pppppcVar13,puVar15,sVar8), iVar11 == 0)))) {
        if ((int *)(puVar16 + 4) != (int *)0x0) {
          *(int *)(*param_1 + 8) = *(int *)(*param_1 + 8) + 1;
          iVar11 = *(int *)(puVar16 + 4);
          if (iVar11 == 1) {
            uVar10 = *(undefined1 *)((longlong)puVar16 + 0x24);
          }
          else if (iVar11 == 2) {
            if ((double)puVar16[5] == 0.0) {
              uVar10 = 0;
            }
            else {
              uVar10 = 1;
            }
          }
          else {
            uVar10 = *(undefined1 *)(param_2 + 0x7a30);
          }
          *(undefined1 *)(param_2 + 0x7a30) = uVar10;
          uVar17 = local_98;
        }
        break;
      }
    }
  }
  if (0xf < uVar17) {
    uVar14 = uVar17 + 1;
    pppppcVar13 = local_b0;
    if (0xfff < uVar14) {
      pppppcVar13 = (char *****)local_b0[-1];
      if ((char *)0x1f < (char *)((longlong)local_b0 + (-8 - (longlong)pppppcVar13)))
      goto LAB_180178bc5;
      uVar14 = uVar17 + 0x28;
    }
    thunk_FUN_1803d64e0(pppppcVar13,uVar14);
  }
  local_b0 = (char *****)0x0;
  uStack_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_b0 = (char *****)FUN_18000fb70(0x20);
  uVar7 = s_legitbot_high_priority_color_1806f75d8._12_4_;
  uVar6 = s_legitbot_high_priority_color_1806f75d8._8_4_;
  uVar5 = s_legitbot_high_priority_color_1806f75d8._4_4_;
  local_a0 = 0x1c;
  local_98 = 0x1f;
  *(undefined4 *)local_b0 = s_legitbot_high_priority_color_1806f75d8._0_4_;
  *(undefined4 *)((longlong)local_b0 + 4) = uVar5;
  *(undefined4 *)(local_b0 + 1) = uVar6;
  *(undefined4 *)((longlong)local_b0 + 0xc) = uVar7;
  uVar7 = s_legitbot_high_priority_color_1806f75d8._24_4_;
  uVar6 = s_legitbot_high_priority_color_1806f75d8._20_4_;
  uVar5 = s_legitbot_high_priority_color_1806f75d8._16_4_;
  *(undefined4 *)((longlong)local_b0 + 0xc) = s_legitbot_high_priority_color_1806f75d8._12_4_;
  *(undefined4 *)(local_b0 + 2) = uVar5;
  *(undefined4 *)((longlong)local_b0 + 0x14) = uVar6;
  *(undefined4 *)(local_b0 + 3) = uVar7;
  *(char *)((longlong)local_b0 + 0x1c) = '\0';
  cVar9 = FUN_1801c2460(param_1,&local_b0);
  if (cVar9 != '\0') {
    FUN_18019e140(*param_1,&local_b0,param_2 + 0x7a34);
  }
  if (0xf < local_98) {
    uVar17 = local_98 + 1;
    pppppcVar13 = local_b0;
    if (0xfff < uVar17) {
      pppppcVar13 = (char *****)local_b0[-1];
      if ((char *)0x1f < (char *)((longlong)local_b0 + (-8 - (longlong)pppppcVar13)))
      goto LAB_180178bc5;
      uVar17 = local_98 + 0x28;
    }
    thunk_FUN_1803d64e0(pppppcVar13,uVar17);
  }
  local_b0 = (char *****)0x0;
  uStack_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_b0 = (char *****)FUN_18000fb70(0x20);
  uVar7 = s_legitbot_low_priority_color_1806f7578._12_4_;
  uVar6 = s_legitbot_low_priority_color_1806f7578._8_4_;
  uVar5 = s_legitbot_low_priority_color_1806f7578._4_4_;
  local_a0 = 0x1b;
  local_98 = 0x1f;
  *(undefined4 *)local_b0 = s_legitbot_low_priority_color_1806f7578._0_4_;
  *(undefined4 *)((longlong)local_b0 + 4) = uVar5;
  *(undefined4 *)(local_b0 + 1) = uVar6;
  *(undefined4 *)((longlong)local_b0 + 0xc) = uVar7;
  uVar7 = s_legitbot_low_priority_color_1806f7578._23_4_;
  uVar6 = s_legitbot_low_priority_color_1806f7578._19_4_;
  uVar5 = CONCAT31(s_legitbot_low_priority_color_1806f7578._16_3_,
                   s_legitbot_low_priority_color_1806f7578[0xf]);
  *(uint *)((longlong)local_b0 + 0xb) =
       CONCAT31(s_legitbot_low_priority_color_1806f7578._12_3_,
                s_legitbot_low_priority_color_1806f7578[0xb]);
  *(undefined4 *)((longlong)local_b0 + 0xf) = uVar5;
  *(undefined4 *)((longlong)local_b0 + 0x13) = uVar6;
  *(undefined4 *)((longlong)local_b0 + 0x17) = uVar7;
  *(char *)((longlong)local_b0 + 0x1b) = '\0';
  cVar9 = FUN_1801c2460(param_1,&local_b0);
  if (cVar9 != '\0') {
    FUN_18019e140(*param_1,&local_b0,param_2 + 0x7a44);
  }
  if (0xf < local_98) {
    uVar17 = local_98 + 1;
    pppppcVar13 = local_b0;
    if (0xfff < uVar17) {
      pppppcVar13 = (char *****)local_b0[-1];
      if ((char *)0x1f < (char *)((longlong)local_b0 + (-8 - (longlong)pppppcVar13)))
      goto LAB_180178bc5;
      uVar17 = local_98 + 0x28;
    }
    thunk_FUN_1803d64e0(pppppcVar13,uVar17);
  }
  local_b0 = (char *****)0x0;
  uStack_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_b0 = (char *****)FUN_18000fb70(0x20);
  uVar7 = s_legitbot_visualize_recoil_1806f7598._12_4_;
  uVar6 = s_legitbot_visualize_recoil_1806f7598._8_4_;
  uVar5 = s_legitbot_visualize_recoil_1806f7598._4_4_;
  local_a0 = 0x19;
  local_98 = 0x1f;
  *(undefined4 *)local_b0 = s_legitbot_visualize_recoil_1806f7598._0_4_;
  *(undefined4 *)((longlong)local_b0 + 4) = uVar5;
  *(undefined4 *)(local_b0 + 1) = uVar6;
  *(undefined4 *)((longlong)local_b0 + 0xc) = uVar7;
  uVar7 = s_legitbot_visualize_recoil_1806f7598._21_4_;
  uVar6 = s_legitbot_visualize_recoil_1806f7598._17_4_;
  uVar5 = CONCAT13(s_legitbot_visualize_recoil_1806f7598[0x10],
                   s_legitbot_visualize_recoil_1806f7598._13_3_);
  *(uint *)((longlong)local_b0 + 9) =
       CONCAT13(s_legitbot_visualize_recoil_1806f7598[0xc],
                s_legitbot_visualize_recoil_1806f7598._9_3_);
  *(undefined4 *)((longlong)local_b0 + 0xd) = uVar5;
  *(undefined4 *)((longlong)local_b0 + 0x11) = uVar6;
  *(undefined4 *)((longlong)local_b0 + 0x15) = uVar7;
  *(char *)((longlong)local_b0 + 0x19) = '\0';
  cVar9 = FUN_1801c2460(param_1,&local_b0);
  uVar17 = local_98;
  sVar8 = local_a0;
  if (cVar9 != '\0') {
    pppppcVar13 = (char *****)&local_b0;
    if (0xf < local_98) {
      pppppcVar13 = local_b0;
    }
    puVar1 = *(undefined8 **)(*(longlong *)*param_1 + 0x50);
    for (puVar16 = *(undefined8 **)(*(longlong *)*param_1 + 0x48); puVar16 != puVar1;
        puVar16 = puVar16 + 0x10) {
      if ((ulonglong)puVar16[3] < 0x10) {
        puVar15 = puVar16;
      }
      else {
        puVar15 = (undefined8 *)*puVar16;
      }
      if ((sVar8 == puVar16[2]) &&
         ((sVar8 == 0 || (iVar11 = memcmp(pppppcVar13,puVar15,sVar8), iVar11 == 0)))) {
        if ((int *)(puVar16 + 4) != (int *)0x0) {
          *(int *)(*param_1 + 8) = *(int *)(*param_1 + 8) + 1;
          iVar11 = *(int *)(puVar16 + 4);
          if (iVar11 == 1) {
            uVar10 = *(undefined1 *)((longlong)puVar16 + 0x24);
          }
          else if (iVar11 == 2) {
            if ((double)puVar16[5] == 0.0) {
              uVar10 = 0;
            }
            else {
              uVar10 = 1;
            }
          }
          else {
            uVar10 = *(undefined1 *)(param_2 + 0x7a54);
          }
          *(undefined1 *)(param_2 + 0x7a54) = uVar10;
          uVar17 = local_98;
        }
        break;
      }
    }
  }
  if (0xf < uVar17) {
    uVar14 = uVar17 + 1;
    pppppcVar13 = local_b0;
    if (0xfff < uVar14) {
      pppppcVar13 = (char *****)local_b0[-1];
      if ((char *)0x1f < (char *)((longlong)local_b0 + (-8 - (longlong)pppppcVar13)))
      goto LAB_180178bc5;
      uVar14 = uVar17 + 0x28;
    }
    thunk_FUN_1803d64e0(pppppcVar13,uVar14);
  }
  local_b0 = (char *****)0x0;
  uStack_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_b0 = (char *****)FUN_18000fb70(0x20);
  uVar7 = s_legitbot_recoil_original_color_1806f7630._8_4_;
  uVar6 = s_legitbot_recoil_original_color_1806f7630._4_4_;
  local_a0 = 0x1e;
  local_98 = 0x1f;
  uVar5 = CONCAT22(s_legitbot_recoil_original_color_1806f7630._14_2_,
                   s_legitbot_recoil_original_color_1806f7630._12_2_);
  *(undefined4 *)local_b0 = s_legitbot_recoil_original_color_1806f7630._0_4_;
  *(undefined4 *)((longlong)local_b0 + 4) = uVar6;
  *(undefined4 *)(local_b0 + 1) = uVar7;
  *(undefined4 *)((longlong)local_b0 + 0xc) = uVar5;
  uVar7 = s_legitbot_recoil_original_color_1806f7630._26_4_;
  uVar6 = s_legitbot_recoil_original_color_1806f7630._22_4_;
  uVar5 = s_legitbot_recoil_original_color_1806f7630._18_4_;
  *(uint *)((longlong)local_b0 + 0xe) =
       CONCAT22(s_legitbot_recoil_original_color_1806f7630._16_2_,
                s_legitbot_recoil_original_color_1806f7630._14_2_);
  *(undefined4 *)((longlong)local_b0 + 0x12) = uVar5;
  *(undefined4 *)((longlong)local_b0 + 0x16) = uVar6;
  *(undefined4 *)((longlong)local_b0 + 0x1a) = uVar7;
  *(char *)((longlong)local_b0 + 0x1e) = '\0';
  cVar9 = FUN_1801c2460(param_1,&local_b0);
  if (cVar9 != '\0') {
    FUN_18019e140(*param_1,&local_b0,param_2 + 0x7a58);
  }
  if (0xf < local_98) {
    uVar17 = local_98 + 1;
    pppppcVar13 = local_b0;
    if (0xfff < uVar17) {
      pppppcVar13 = (char *****)local_b0[-1];
      if ((char *)0x1f < (char *)((longlong)local_b0 + (-8 - (longlong)pppppcVar13)))
      goto LAB_180178bc5;
      uVar17 = local_98 + 0x28;
    }
    thunk_FUN_1803d64e0(pppppcVar13,uVar17);
  }
  local_b0 = (char *****)0x0;
  uStack_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_b0 = (char *****)FUN_18000fb70(0x30);
  uVar7 = s_legitbot_recoil_compensated_colo_1806f7650._12_4_;
  uVar6 = s_legitbot_recoil_compensated_colo_1806f7650._8_4_;
  uVar5 = s_legitbot_recoil_compensated_colo_1806f7650._4_4_;
  local_a0 = 0x21;
  local_98 = 0x2f;
  *(undefined4 *)local_b0 = s_legitbot_recoil_compensated_colo_1806f7650._0_4_;
  *(undefined4 *)((longlong)local_b0 + 4) = uVar5;
  *(undefined4 *)(local_b0 + 1) = uVar6;
  *(undefined4 *)((longlong)local_b0 + 0xc) = uVar7;
  uVar7 = s_legitbot_recoil_compensated_colo_1806f7650._28_4_;
  uVar6 = s_legitbot_recoil_compensated_colo_1806f7650._24_4_;
  uVar5 = s_legitbot_recoil_compensated_colo_1806f7650._20_4_;
  *(undefined4 *)(local_b0 + 2) = s_legitbot_recoil_compensated_colo_1806f7650._16_4_;
  *(undefined4 *)((longlong)local_b0 + 0x14) = uVar5;
  *(undefined4 *)(local_b0 + 3) = uVar6;
  *(undefined4 *)((longlong)local_b0 + 0x1c) = uVar7;
  *(char *)(local_b0 + 4) = s_legitbot_recoil_compensated_colo_1806f7650[0x20];
  *(char *)((longlong)local_b0 + 0x21) = '\0';
  cVar9 = FUN_1801c2460(param_1,&local_b0);
  if (cVar9 != '\0') {
    FUN_18019e140(*param_1,&local_b0,param_2 + 0x7a68);
  }
  if (0xf < local_98) {
    uVar17 = local_98 + 1;
    pppppcVar13 = local_b0;
    if (0xfff < uVar17) {
      pppppcVar13 = (char *****)local_b0[-1];
      if ((char *)0x1f < (char *)((longlong)local_b0 + (-8 - (longlong)pppppcVar13)))
      goto LAB_180178bc5;
      uVar17 = local_98 + 0x28;
    }
    thunk_FUN_1803d64e0(pppppcVar13,uVar17);
  }
  local_b0 = (char *****)0x0;
  uStack_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_b0 = (char *****)FUN_18000fb70(0x20);
  uVar7 = s_legitbot_visualize_velocity_1806f75f8._12_4_;
  uVar6 = s_legitbot_visualize_velocity_1806f75f8._8_4_;
  uVar5 = s_legitbot_visualize_velocity_1806f75f8._4_4_;
  local_a0 = 0x1b;
  local_98 = 0x1f;
  *(undefined4 *)local_b0 = s_legitbot_visualize_velocity_1806f75f8._0_4_;
  *(undefined4 *)((longlong)local_b0 + 4) = uVar5;
  *(undefined4 *)(local_b0 + 1) = uVar6;
  *(undefined4 *)((longlong)local_b0 + 0xc) = uVar7;
  uVar7 = s_legitbot_visualize_velocity_1806f75f8._23_4_;
  uVar6 = s_legitbot_visualize_velocity_1806f75f8._19_4_;
  uVar5 = CONCAT31(s_legitbot_visualize_velocity_1806f75f8._16_3_,
                   s_legitbot_visualize_velocity_1806f75f8[0xf]);
  *(uint *)((longlong)local_b0 + 0xb) =
       CONCAT31(s_legitbot_visualize_velocity_1806f75f8._12_3_,
                s_legitbot_visualize_velocity_1806f75f8[0xb]);
  *(undefined4 *)((longlong)local_b0 + 0xf) = uVar5;
  *(undefined4 *)((longlong)local_b0 + 0x13) = uVar6;
  *(undefined4 *)((longlong)local_b0 + 0x17) = uVar7;
  *(char *)((longlong)local_b0 + 0x1b) = '\0';
  cVar9 = FUN_1801c2460(param_1,&local_b0);
  uVar17 = local_98;
  sVar8 = local_a0;
  if (cVar9 != '\0') {
    pppppcVar13 = (char *****)&local_b0;
    if (0xf < local_98) {
      pppppcVar13 = local_b0;
    }
    puVar1 = *(undefined8 **)(*(longlong *)*param_1 + 0x50);
    for (puVar16 = *(undefined8 **)(*(longlong *)*param_1 + 0x48); puVar16 != puVar1;
        puVar16 = puVar16 + 0x10) {
      if ((ulonglong)puVar16[3] < 0x10) {
        puVar15 = puVar16;
      }
      else {
        puVar15 = (undefined8 *)*puVar16;
      }
      if ((sVar8 == puVar16[2]) &&
         ((sVar8 == 0 || (iVar11 = memcmp(pppppcVar13,puVar15,sVar8), iVar11 == 0)))) {
        if ((int *)(puVar16 + 4) != (int *)0x0) {
          *(int *)(*param_1 + 8) = *(int *)(*param_1 + 8) + 1;
          iVar11 = *(int *)(puVar16 + 4);
          if (iVar11 == 1) {
            uVar10 = *(undefined1 *)((longlong)puVar16 + 0x24);
          }
          else if (iVar11 == 2) {
            if ((double)puVar16[5] == 0.0) {
              uVar10 = 0;
            }
            else {
              uVar10 = 1;
            }
          }
          else {
            uVar10 = *(undefined1 *)(param_2 + 0x7a78);
          }
          *(undefined1 *)(param_2 + 0x7a78) = uVar10;
          uVar17 = local_98;
        }
        break;
      }
    }
  }
  if (0xf < uVar17) {
    uVar14 = uVar17 + 1;
    pppppcVar13 = local_b0;
    if (0xfff < uVar14) {
      pppppcVar13 = (char *****)local_b0[-1];
      if ((char *)0x1f < (char *)((longlong)local_b0 + (-8 - (longlong)pppppcVar13)))
      goto LAB_180178bc5;
      uVar14 = uVar17 + 0x28;
    }
    thunk_FUN_1803d64e0(pppppcVar13,uVar14);
  }
  local_b0 = (char *****)0x0;
  uStack_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_b0 = (char *****)FUN_18000fb70(0x20);
  uVar7 = s_legitbot_velocity_speed_1806f7618._12_4_;
  uVar6 = s_legitbot_velocity_speed_1806f7618._8_4_;
  uVar5 = s_legitbot_velocity_speed_1806f7618._4_4_;
  local_a0 = 0x17;
  local_98 = 0x1f;
  *(undefined4 *)local_b0 = s_legitbot_velocity_speed_1806f7618._0_4_;
  *(undefined4 *)((longlong)local_b0 + 4) = uVar5;
  *(undefined4 *)(local_b0 + 1) = uVar6;
  *(undefined4 *)((longlong)local_b0 + 0xc) = uVar7;
  *(ulonglong *)((longlong)local_b0 + 0xf) =
       CONCAT71(s_legitbot_velocity_speed_1806f7618._16_7_,s_legitbot_velocity_speed_1806f7618[0xf])
  ;
  *(char *)((longlong)local_b0 + 0x17) = '\0';
  cVar9 = FUN_1801c2460(param_1,&local_b0);
  uVar17 = local_98;
  sVar8 = local_a0;
  if (cVar9 != '\0') {
    pppppcVar13 = (char *****)&local_b0;
    if (0xf < local_98) {
      pppppcVar13 = local_b0;
    }
    puVar1 = *(undefined8 **)(*(longlong *)*param_1 + 0x50);
    for (puVar16 = *(undefined8 **)(*(longlong *)*param_1 + 0x48); puVar16 != puVar1;
        puVar16 = puVar16 + 0x10) {
      if ((ulonglong)puVar16[3] < 0x10) {
        puVar15 = puVar16;
      }
      else {
        puVar15 = (undefined8 *)*puVar16;
      }
      if ((sVar8 == puVar16[2]) &&
         ((sVar8 == 0 || (iVar11 = memcmp(pppppcVar13,puVar15,sVar8), iVar11 == 0)))) {
        if ((int *)(puVar16 + 4) != (int *)0x0) {
          *(int *)(*param_1 + 8) = *(int *)(*param_1 + 8) + 1;
          iVar11 = *(int *)(puVar16 + 4);
          if (iVar11 == 1) {
            uVar10 = *(undefined1 *)((longlong)puVar16 + 0x24);
          }
          else if (iVar11 == 2) {
            if ((double)puVar16[5] == 0.0) {
              uVar10 = 0;
            }
            else {
              uVar10 = 1;
            }
          }
          else {
            uVar10 = *(undefined1 *)(param_2 + 0x7a79);
          }
          *(undefined1 *)(param_2 + 0x7a79) = uVar10;
          uVar17 = local_98;
        }
        break;
      }
    }
  }
  if (0xf < uVar17) {
    uVar14 = uVar17 + 1;
    pppppcVar13 = local_b0;
    if (0xfff < uVar14) {
      pppppcVar13 = (char *****)local_b0[-1];
      if ((char *)0x1f < (char *)((longlong)local_b0 + (-8 - (longlong)pppppcVar13)))
      goto LAB_180178bc5;
      uVar14 = uVar17 + 0x28;
    }
    thunk_FUN_1803d64e0(pppppcVar13,uVar14);
  }
  local_b0 = (char *****)0x0;
  uStack_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_b0 = (char *****)FUN_18000fb70(0x20);
  uVar7 = s_legitbot_speed_color_1806f76b0._12_4_;
  uVar6 = s_legitbot_speed_color_1806f76b0._8_4_;
  uVar5 = s_legitbot_speed_color_1806f76b0._4_4_;
  local_a0 = 0x14;
  local_98 = 0x1f;
  *(undefined4 *)local_b0 = s_legitbot_speed_color_1806f76b0._0_4_;
  *(undefined4 *)((longlong)local_b0 + 4) = uVar5;
  *(undefined4 *)(local_b0 + 1) = uVar6;
  *(undefined4 *)((longlong)local_b0 + 0xc) = uVar7;
  *(undefined4 *)(local_b0 + 2) = s_legitbot_speed_color_1806f76b0._16_4_;
  *(char *)((longlong)local_b0 + 0x14) = '\0';
  cVar9 = FUN_1801c2460(param_1,&local_b0);
  if (cVar9 != '\0') {
    FUN_18019e140(*param_1,&local_b0,param_2 + 0x7a7c);
  }
  if (0xf < local_98) {
    uVar17 = local_98 + 1;
    pppppcVar13 = local_b0;
    if (0xfff < uVar17) {
      pppppcVar13 = (char *****)local_b0[-1];
      if ((char *)0x1f < (char *)((longlong)local_b0 + (-8 - (longlong)pppppcVar13)))
      goto LAB_180178bc5;
      uVar17 = local_98 + 0x28;
    }
    thunk_FUN_1803d64e0(pppppcVar13,uVar17);
  }
  local_b0 = (char *****)0x0;
  uStack_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_b0 = (char *****)FUN_18000fb70(0x20);
  uVar7 = s_legitbot_velocity_jump_1806f76c8._8_4_;
  uVar6 = s_legitbot_velocity_jump_1806f76c8._4_4_;
  local_a0 = 0x16;
  local_98 = 0x1f;
  uVar5 = CONCAT22(s_legitbot_velocity_jump_1806f76c8._14_2_,
                   s_legitbot_velocity_jump_1806f76c8._12_2_);
  *(undefined4 *)local_b0 = s_legitbot_velocity_jump_1806f76c8._0_4_;
  *(undefined4 *)((longlong)local_b0 + 4) = uVar6;
  *(undefined4 *)(local_b0 + 1) = uVar7;
  *(undefined4 *)((longlong)local_b0 + 0xc) = uVar5;
  *(ulonglong *)((longlong)local_b0 + 0xe) =
       CONCAT62(s_legitbot_velocity_jump_1806f76c8._16_6_,s_legitbot_velocity_jump_1806f76c8._14_2_)
  ;
  *(char *)((longlong)local_b0 + 0x16) = '\0';
  cVar9 = FUN_1801c2460(param_1,&local_b0);
  uVar17 = local_98;
  sVar8 = local_a0;
  if (cVar9 != '\0') {
    pppppcVar13 = (char *****)&local_b0;
    if (0xf < local_98) {
      pppppcVar13 = local_b0;
    }
    puVar1 = *(undefined8 **)(*(longlong *)*param_1 + 0x50);
    for (puVar16 = *(undefined8 **)(*(longlong *)*param_1 + 0x48); puVar16 != puVar1;
        puVar16 = puVar16 + 0x10) {
      if ((ulonglong)puVar16[3] < 0x10) {
        puVar15 = puVar16;
      }
      else {
        puVar15 = (undefined8 *)*puVar16;
      }
      if ((sVar8 == puVar16[2]) &&
         ((sVar8 == 0 || (iVar11 = memcmp(pppppcVar13,puVar15,sVar8), iVar11 == 0)))) {
        if ((int *)(puVar16 + 4) != (int *)0x0) {
          *(int *)(*param_1 + 8) = *(int *)(*param_1 + 8) + 1;
          iVar11 = *(int *)(puVar16 + 4);
          if (iVar11 == 1) {
            uVar10 = *(undefined1 *)((longlong)puVar16 + 0x24);
          }
          else if (iVar11 == 2) {
            if ((double)puVar16[5] == 0.0) {
              uVar10 = 0;
            }
            else {
              uVar10 = 1;
            }
          }
          else {
            uVar10 = *(undefined1 *)(param_2 + 0x7a8c);
          }
          *(undefined1 *)(param_2 + 0x7a8c) = uVar10;
          uVar17 = local_98;
        }
        break;
      }
    }
  }
  if (0xf < uVar17) {
    uVar14 = uVar17 + 1;
    pppppcVar13 = local_b0;
    if (0xfff < uVar14) {
      pppppcVar13 = (char *****)local_b0[-1];
      if ((char *)0x1f < (char *)((longlong)local_b0 + (-8 - (longlong)pppppcVar13)))
      goto LAB_180178bc5;
      uVar14 = uVar17 + 0x28;
    }
    thunk_FUN_1803d64e0(pppppcVar13,uVar14);
  }
  local_b0 = (char *****)0x0;
  uStack_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_b0 = (char *****)FUN_18000fb70(0x20);
  uVar7 = s_legitbot_jump_color_1806f7678._12_4_;
  uVar6 = s_legitbot_jump_color_1806f7678._8_4_;
  uVar5 = s_legitbot_jump_color_1806f7678._4_4_;
  local_a0 = 0x13;
  local_98 = 0x1f;
  *(undefined4 *)local_b0 = s_legitbot_jump_color_1806f7678._0_4_;
  *(undefined4 *)((longlong)local_b0 + 4) = uVar5;
  *(undefined4 *)(local_b0 + 1) = uVar6;
  *(undefined4 *)((longlong)local_b0 + 0xc) = uVar7;
  *(uint *)((longlong)local_b0 + 0xf) =
       CONCAT31(s_legitbot_jump_color_1806f7678._16_3_,s_legitbot_jump_color_1806f7678[0xf]);
  *(char *)((longlong)local_b0 + 0x13) = '\0';
  FUN_180175510(param_1,&local_b0,param_2 + 0x7a90);
  FUN_18000f890(&local_b0);
  FUN_180013350(&local_b0,"legitbot.velocity_ground");
  FUN_1801730b0(param_1,&local_b0,param_2 + 0x7aa0);
  FUN_18000f890(&local_b0);
  FUN_180013350(&local_b0,"legitbot.ground_color");
  FUN_180175510(param_1,&local_b0,param_2 + 0x7aa4);
  FUN_18000f890(&local_b0);
  local_b0 = (char *****)0x0;
  uStack_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_b0 = (char *****)FUN_18000fb70(0x20);
  uVar7 = s_legitbot_automatic_weapons_1806f7740._4_4_;
  local_a0 = 0x1a;
  local_98 = 0x1f;
  uVar5 = CONCAT22(s_legitbot_automatic_weapons_1806f7740._10_2_,
                   s_legitbot_automatic_weapons_1806f7740._8_2_);
  uVar6 = CONCAT22(s_legitbot_automatic_weapons_1806f7740._14_2_,
                   s_legitbot_automatic_weapons_1806f7740._12_2_);
  *(undefined4 *)local_b0 = s_legitbot_automatic_weapons_1806f7740._0_4_;
  *(undefined4 *)((longlong)local_b0 + 4) = uVar7;
  *(undefined4 *)(local_b0 + 1) = uVar5;
  *(undefined4 *)((longlong)local_b0 + 0xc) = uVar6;
  uVar7 = s_legitbot_automatic_weapons_1806f7740._22_4_;
  uVar6 = s_legitbot_automatic_weapons_1806f7740._18_4_;
  uVar5 = CONCAT22(s_legitbot_automatic_weapons_1806f7740._16_2_,
                   s_legitbot_automatic_weapons_1806f7740._14_2_);
  *(uint *)((longlong)local_b0 + 10) =
       CONCAT22(s_legitbot_automatic_weapons_1806f7740._12_2_,
                s_legitbot_automatic_weapons_1806f7740._10_2_);
  *(undefined4 *)((longlong)local_b0 + 0xe) = uVar5;
  *(undefined4 *)((longlong)local_b0 + 0x12) = uVar6;
  *(undefined4 *)((longlong)local_b0 + 0x16) = uVar7;
  *(char *)((longlong)local_b0 + 0x1a) = '\0';
  cVar9 = FUN_1801c2460(param_1,&local_b0);
  uVar17 = local_98;
  sVar8 = local_a0;
  if (cVar9 != '\0') {
    pppppcVar13 = (char *****)&local_b0;
    if (0xf < local_98) {
      pppppcVar13 = local_b0;
    }
    puVar1 = *(undefined8 **)(*(longlong *)*param_1 + 0x50);
    for (puVar16 = *(undefined8 **)(*(longlong *)*param_1 + 0x48); puVar16 != puVar1;
        puVar16 = puVar16 + 0x10) {
      if ((ulonglong)puVar16[3] < 0x10) {
        puVar15 = puVar16;
      }
      else {
        puVar15 = (undefined8 *)*puVar16;
      }
      if ((sVar8 == puVar16[2]) &&
         ((sVar8 == 0 || (iVar11 = memcmp(pppppcVar13,puVar15,sVar8), iVar11 == 0)))) {
        if ((int *)(puVar16 + 4) != (int *)0x0) {
          *(int *)(*param_1 + 8) = *(int *)(*param_1 + 8) + 1;
          iVar11 = *(int *)(puVar16 + 4);
          if (iVar11 == 1) {
            uVar10 = *(undefined1 *)((longlong)puVar16 + 0x24);
          }
          else if (iVar11 == 2) {
            if ((double)puVar16[5] == 0.0) {
              uVar10 = 0;
            }
            else {
              uVar10 = 1;
            }
          }
          else {
            uVar10 = *(undefined1 *)(param_2 + 0x7ab4);
          }
          *(undefined1 *)(param_2 + 0x7ab4) = uVar10;
          uVar17 = local_98;
        }
        break;
      }
    }
  }
  if (0xf < uVar17) {
    uVar14 = uVar17 + 1;
    pppppcVar13 = local_b0;
    if (0xfff < uVar14) {
      pppppcVar13 = (char *****)local_b0[-1];
      if ((char *)0x1f < (char *)((longlong)local_b0 + (-8 - (longlong)pppppcVar13)))
      goto LAB_180178bc5;
      uVar14 = uVar17 + 0x28;
    }
    thunk_FUN_1803d64e0(pppppcVar13,uVar14);
  }
  local_b0 = (char *****)0x0;
  uStack_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_b0 = (char *****)FUN_18000fb70(0x30);
  uVar7 = s_legitbot_automatic_weapons_inter_1806f76e0._12_4_;
  uVar6 = s_legitbot_automatic_weapons_inter_1806f76e0._8_4_;
  uVar5 = s_legitbot_automatic_weapons_inter_1806f76e0._4_4_;
  local_a0 = 0x23;
  local_98 = 0x2f;
  *(undefined4 *)local_b0 = s_legitbot_automatic_weapons_inter_1806f76e0._0_4_;
  *(undefined4 *)((longlong)local_b0 + 4) = uVar5;
  *(undefined4 *)(local_b0 + 1) = uVar6;
  *(undefined4 *)((longlong)local_b0 + 0xc) = uVar7;
  uVar7 = s_legitbot_automatic_weapons_inter_1806f76e0._28_4_;
  uVar6 = s_legitbot_automatic_weapons_inter_1806f76e0._24_4_;
  uVar5 = s_legitbot_automatic_weapons_inter_1806f76e0._20_4_;
  *(undefined4 *)(local_b0 + 2) = s_legitbot_automatic_weapons_inter_1806f76e0._16_4_;
  *(undefined4 *)((longlong)local_b0 + 0x14) = uVar5;
  *(undefined4 *)(local_b0 + 3) = uVar6;
  *(undefined4 *)((longlong)local_b0 + 0x1c) = uVar7;
  *(uint *)((longlong)local_b0 + 0x1f) =
       CONCAT31(s_legitbot_automatic_weapons_inter_1806f76e0._32_3_,
                s_legitbot_automatic_weapons_inter_1806f76e0[0x1f]);
  *(char *)((longlong)local_b0 + 0x23) = '\0';
  cVar9 = FUN_1801c2460(param_1,&local_b0);
  if (cVar9 != '\0') {
    FUN_1800f3090(*param_1,&local_b0,param_2 + 0x7ab8);
  }
  if (0xf < local_98) {
    uVar17 = local_98 + 1;
    pppppcVar13 = local_b0;
    if (0xfff < uVar17) {
      pppppcVar13 = (char *****)local_b0[-1];
      if ((char *)0x1f < (char *)((longlong)local_b0 + (-8 - (longlong)pppppcVar13)))
      goto LAB_180178bc5;
      uVar17 = local_98 + 0x28;
    }
    thunk_FUN_1803d64e0(pppppcVar13,uVar17);
  }
  local_b0 = (char *****)0x0;
  uStack_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_b0 = (char *****)FUN_18000fb70(0x20);
  uVar7 = s_legitbot_standalone_recoil_1806f7708._4_4_;
  local_a0 = 0x1a;
  local_98 = 0x1f;
  uVar5 = CONCAT22(s_legitbot_standalone_recoil_1806f7708._10_2_,
                   s_legitbot_standalone_recoil_1806f7708._8_2_);
  uVar6 = CONCAT22(s_legitbot_standalone_recoil_1806f7708._14_2_,
                   s_legitbot_standalone_recoil_1806f7708._12_2_);
  *(undefined4 *)local_b0 = s_legitbot_standalone_recoil_1806f7708._0_4_;
  *(undefined4 *)((longlong)local_b0 + 4) = uVar7;
  *(undefined4 *)(local_b0 + 1) = uVar5;
  *(undefined4 *)((longlong)local_b0 + 0xc) = uVar6;
  uVar7 = s_legitbot_standalone_recoil_1806f7708._22_4_;
  uVar6 = s_legitbot_standalone_recoil_1806f7708._18_4_;
  uVar5 = CONCAT22(s_legitbot_standalone_recoil_1806f7708._16_2_,
                   s_legitbot_standalone_recoil_1806f7708._14_2_);
  *(uint *)((longlong)local_b0 + 10) =
       CONCAT22(s_legitbot_standalone_recoil_1806f7708._12_2_,
                s_legitbot_standalone_recoil_1806f7708._10_2_);
  *(undefined4 *)((longlong)local_b0 + 0xe) = uVar5;
  *(undefined4 *)((longlong)local_b0 + 0x12) = uVar6;
  *(undefined4 *)((longlong)local_b0 + 0x16) = uVar7;
  *(char *)((longlong)local_b0 + 0x1a) = '\0';
  cVar9 = FUN_1801c2460(param_1,&local_b0);
  uVar17 = local_98;
  sVar8 = local_a0;
  if (cVar9 != '\0') {
    pppppcVar13 = (char *****)&local_b0;
    if (0xf < local_98) {
      pppppcVar13 = local_b0;
    }
    puVar1 = *(undefined8 **)(*(longlong *)*param_1 + 0x50);
    for (puVar16 = *(undefined8 **)(*(longlong *)*param_1 + 0x48); puVar16 != puVar1;
        puVar16 = puVar16 + 0x10) {
      if ((ulonglong)puVar16[3] < 0x10) {
        puVar15 = puVar16;
      }
      else {
        puVar15 = (undefined8 *)*puVar16;
      }
      if ((sVar8 == puVar16[2]) &&
         ((sVar8 == 0 || (iVar11 = memcmp(pppppcVar13,puVar15,sVar8), iVar11 == 0)))) {
        if ((int *)(puVar16 + 4) != (int *)0x0) {
          *(int *)(*param_1 + 8) = *(int *)(*param_1 + 8) + 1;
          iVar11 = *(int *)(puVar16 + 4);
          if (iVar11 == 1) {
            uVar10 = *(undefined1 *)((longlong)puVar16 + 0x24);
          }
          else if (iVar11 == 2) {
            if ((double)puVar16[5] == 0.0) {
              uVar10 = 0;
            }
            else {
              uVar10 = 1;
            }
          }
          else {
            uVar10 = *(undefined1 *)(param_2 + 0x7abc);
          }
          *(undefined1 *)(param_2 + 0x7abc) = uVar10;
          uVar17 = local_98;
        }
        break;
      }
    }
  }
  if (0xf < uVar17) {
    uVar14 = uVar17 + 1;
    pppppcVar13 = local_b0;
    if (0xfff < uVar14) {
      pppppcVar13 = (char *****)local_b0[-1];
      if ((char *)0x1f < (char *)((longlong)local_b0 + (-8 - (longlong)pppppcVar13)))
      goto LAB_180178bc5;
      uVar14 = uVar17 + 0x28;
    }
    thunk_FUN_1803d64e0(pppppcVar13,uVar14);
  }
  local_b0 = (char *****)0x0;
  uStack_a8 = 0;
  local_b0 = (char *****)FUN_18000fb70(0x20);
  uVar7 = s_legitbot_standalone__1806f7788._12_4_;
  uVar6 = s_legitbot_standalone__1806f7788._8_4_;
  uVar5 = s_legitbot_standalone__1806f7788._4_4_;
  local_a0 = 0x14;
  local_98 = 0x1f;
  *(undefined4 *)local_b0 = s_legitbot_standalone__1806f7788._0_4_;
  *(undefined4 *)((longlong)local_b0 + 4) = uVar5;
  *(undefined4 *)(local_b0 + 1) = uVar6;
  *(undefined4 *)((longlong)local_b0 + 0xc) = uVar7;
  *(undefined4 *)(local_b0 + 2) = s_legitbot_standalone__1806f7788._16_4_;
  *(char *)((longlong)local_b0 + 0x14) = '\0';
  FUN_1801b4fd0(param_1,&local_b0,param_2 + 0x7ac0);
  if (0xf < local_98) {
    uVar17 = local_98 + 1;
    pppppcVar13 = local_b0;
    if (0xfff < uVar17) {
      pppppcVar13 = (char *****)local_b0[-1];
      if ((char *)0x1f < (char *)((longlong)local_b0 + (-8 - (longlong)pppppcVar13)))
      goto LAB_180178bc5;
      uVar17 = local_98 + 0x28;
    }
    thunk_FUN_1803d64e0(pppppcVar13,uVar17);
  }
  local_b0 = (char *****)0x0;
  uStack_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_b0 = (char *****)FUN_18000fb70(0x20);
  uVar7 = s_legitbot_randomize_1806f77a0._12_4_;
  uVar6 = s_legitbot_randomize_1806f77a0._8_4_;
  uVar5 = s_legitbot_randomize_1806f77a0._4_4_;
  local_a0 = 0x12;
  local_98 = 0x1f;
  *(undefined4 *)local_b0 = s_legitbot_randomize_1806f77a0._0_4_;
  *(undefined4 *)((longlong)local_b0 + 4) = uVar5;
  *(undefined4 *)(local_b0 + 1) = uVar6;
  *(undefined4 *)((longlong)local_b0 + 0xc) = uVar7;
  *(undefined2 *)(local_b0 + 2) = s_legitbot_randomize_1806f77a0._16_2_;
  *(char *)((longlong)local_b0 + 0x12) = '\0';
  cVar9 = FUN_1801c2460(param_1,&local_b0);
  if (cVar9 != '\0') {
    FUN_1800f3090(*param_1,&local_b0,param_2 + 0x7ad4);
  }
  if (0xf < local_98) {
    uVar17 = local_98 + 1;
    pppppcVar13 = local_b0;
    if (0xfff < uVar17) {
      pppppcVar13 = (char *****)local_b0[-1];
      if ((char *)0x1f < (char *)((longlong)local_b0 + (-8 - (longlong)pppppcVar13))) {
LAB_180178bc5:
        pcVar4 = (code *)swi(0x29);
        (*pcVar4)(5);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar17 = local_98 + 0x28;
    }
    thunk_FUN_1803d64e0(pppppcVar13,uVar17);
  }
  return;
}



/* ===== 180178bd0 FUN_180178bd0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180178bd0(undefined8 *param_1,longlong param_2)

{
  code *pcVar1;
  double dVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  size_t sVar10;
  undefined8 *puVar11;
  char *pcVar12;
  ulonglong uVar13;
  undefined1 auStack_1c8 [40];
  char *local_1a0 [4];
  char *local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined1 local_160 [32];
  char *local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 local_128;
  char *local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_108;
  char *local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  ulonglong uStack_e8;
  char *local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  char *local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  char *local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 local_60 [32];
  ulonglong local_40;
  
  local_40 = DAT_180919500 ^ (ulonglong)auStack_1c8;
  local_120 = (char *)0x0;
  uStack_118 = 0;
  local_120 = (char *)FUN_18000fb70(0x20);
  uVar5 = s_visuals_world_view__1806f7760._12_4_;
  uVar4 = s_visuals_world_view__1806f7760._8_4_;
  uVar3 = s_visuals_world_view__1806f7760._4_4_;
  local_110 = 0x13;
  local_108 = 0x1f;
  *(undefined4 *)local_120 = s_visuals_world_view__1806f7760._0_4_;
  *(undefined4 *)(local_120 + 4) = uVar3;
  *(undefined4 *)(local_120 + 8) = uVar4;
  *(undefined4 *)(local_120 + 0xc) = uVar5;
  *(uint *)(local_120 + 0xf) =
       CONCAT31(s_visuals_world_view__1806f7760._16_3_,s_visuals_world_view__1806f7760[0xf]);
  local_120[0x13] = '\0';
  uVar7 = FUN_180073a70(local_1a0,&local_120,"override_fov");
  FUN_1801730b0(param_1,uVar7,param_2);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_120,&DAT_1806e0e18);
  cVar6 = FUN_1801c2460(param_1,uVar7);
  if (cVar6 != '\0') {
    FUN_1800f3090(*param_1,uVar7,param_2 + 4);
  }
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_120,"override_aspect");
  FUN_1801730b0(param_1,uVar7,param_2 + 8);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_120,"aspect_scaling");
  cVar6 = FUN_1801c2460(param_1,uVar7);
  if (cVar6 != '\0') {
    FUN_1800f3090(*param_1,uVar7,param_2 + 0xc);
  }
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_120,"aspect_value");
  cVar6 = FUN_1801c2460(param_1,uVar7);
  if (cVar6 != '\0') {
    FUN_1800f3090(*param_1,uVar7,param_2 + 0x10);
  }
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_120,"disable_landing_bob");
  FUN_1801730b0(param_1,uVar7,param_2 + 0x14);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_120,"scope_override_fov");
  FUN_1801730b0(param_1,uVar7,param_2 + 0x15);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_120,"scope_x1");
  cVar6 = FUN_1801c2460(param_1,uVar7);
  if (cVar6 != '\0') {
    FUN_1800f3090(*param_1,uVar7,param_2 + 0x18);
  }
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_120,"scope_x2");
  cVar6 = FUN_1801c2460(param_1,uVar7);
  if (cVar6 != '\0') {
    FUN_1800f3090(*param_1,uVar7,param_2 + 0x1c);
  }
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_120,"instant_scope");
  FUN_1801730b0(param_1,uVar7,param_2 + 0x20);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_120,"show_viewmodel");
  FUN_1801730b0(param_1,uVar7,param_2 + 0x21);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_120,"force_viewmodel_fov");
  FUN_1801730b0(param_1,uVar7,param_2 + 0x22);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_120,"vm_override_fov");
  FUN_1801730b0(param_1,uVar7,param_2 + 0x23);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_120,"vm_fov");
  cVar6 = FUN_1801c2460(param_1,uVar7);
  if (cVar6 != '\0') {
    FUN_1800f3090(*param_1,uVar7,param_2 + 0x24);
  }
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_120,"vm_override_position");
  FUN_1801730b0(param_1,uVar7,param_2 + 0x28);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_120,&DAT_1806f78b0);
  FUN_180173150(param_1,uVar7,param_2 + 0x2c);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_120,&DAT_1806f7884);
  FUN_180173150(param_1,uVar7,param_2 + 0x30);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_120,&DAT_1806f788c);
  FUN_180173150(param_1,uVar7,param_2 + 0x34);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_120,"vm_override_angles");
  FUN_1801730b0(param_1,uVar7,param_2 + 0x38);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_120,"vm_pitch");
  FUN_180173150(param_1,uVar7,param_2 + 0x3c);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_120,"vm_yaw");
  FUN_180173150(param_1,uVar7,param_2 + 0x40);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_120,"vm_roll");
  FUN_180173150(param_1,uVar7,param_2 + 0x44);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_120,"vm_override_modifiers");
  FUN_1801730b0(param_1,uVar7,param_2 + 0x48);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_120,"vm_bobbing");
  cVar6 = FUN_1801c2460(param_1,uVar7);
  if (cVar6 != '\0') {
    FUN_1800f3090(*param_1,uVar7,param_2 + 0x4c);
  }
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_120,"vm_rotation_sway");
  cVar6 = FUN_1801c2460(param_1,uVar7);
  if (cVar6 != '\0') {
    FUN_1800f3090(*param_1,uVar7,param_2 + 0x50);
  }
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_120,"vm_velocity_sway");
  cVar6 = FUN_1801c2460(param_1,uVar7);
  if (cVar6 != '\0') {
    FUN_1800f3090(*param_1,uVar7,param_2 + 0x54);
  }
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_120,"vm_in_air_offset");
  cVar6 = FUN_1801c2460(param_1,uVar7);
  if (cVar6 != '\0') {
    FUN_1800f3090(*param_1,uVar7,param_2 + 0x58);
  }
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_120,"vm_lower_weapon");
  cVar6 = FUN_1801c2460(param_1,uVar7);
  if (cVar6 != '\0') {
    FUN_1800f3090(*param_1,uVar7,param_2 + 0x5c);
  }
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_120,"vm_ladder_bob");
  cVar6 = FUN_1801c2460(param_1,uVar7);
  if (cVar6 != '\0') {
    FUN_1800f3090(*param_1,uVar7,param_2 + 0x60);
  }
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_120,"force_third_person");
  FUN_1801730b0(param_1,uVar7,param_2 + 100);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_120,"third_person_disablers");
  cVar6 = FUN_1801c2460(param_1,uVar7);
  if (cVar6 != '\0') {
    FUN_18019dbe0(*param_1,uVar7,param_2 + 0x65);
  }
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_120,"third_person_distance");
  cVar6 = FUN_1801c2460(param_1,uVar7);
  if (cVar6 != '\0') {
    FUN_1800f3090(*param_1,uVar7,param_2 + 0x68);
  }
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_120,"disable_overhead");
  cVar6 = FUN_1801c2460(param_1,uVar7);
  if (cVar6 != '\0') {
    FUN_18019dbe0(*param_1,uVar7,param_2 + 0x6c);
  }
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_120,"unlock_spectating");
  cVar6 = FUN_1801c2460(param_1,uVar7);
  if (cVar6 != '\0') {
    FUN_18019dbe0(*param_1,uVar7,param_2 + 0x6e);
  }
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_120,"visual_recoil");
  cVar6 = FUN_1801c2460(param_1,uVar7);
  if (cVar6 != '\0') {
    FUN_18019df50(*param_1,uVar7,param_2 + 0x70);
  }
  FUN_18000f890(local_1a0);
  local_180 = (char *)0x0;
  uStack_178 = 0;
  local_180 = (char *)FUN_18000fb70(0x20);
  uVar5 = s_visuals_world_esp__1806f7a28._12_4_;
  uVar4 = s_visuals_world_esp__1806f7a28._8_4_;
  uVar3 = s_visuals_world_esp__1806f7a28._4_4_;
  local_170 = 0x12;
  local_168 = 0x1f;
  *(undefined4 *)local_180 = s_visuals_world_esp__1806f7a28._0_4_;
  *(undefined4 *)(local_180 + 4) = uVar3;
  *(undefined4 *)(local_180 + 8) = uVar4;
  *(undefined4 *)(local_180 + 0xc) = uVar5;
  *(undefined2 *)(local_180 + 0x10) = s_visuals_world_esp__1806f7a28._16_2_;
  local_180[0x12] = '\0';
  uVar7 = FUN_180073a70(local_1a0,local_1a0 + 4,&DAT_18058b61c);
  FUN_1801b5140(param_1,uVar7,param_2 + 0x74);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_1a0 + 4,"bomb_defused");
  cVar6 = FUN_1801c2460(param_1,uVar7);
  if (cVar6 != '\0') {
    FUN_18019e140(*param_1,uVar7,param_2 + 0xa8);
  }
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_1a0 + 4,"defuser");
  FUN_1801730b0(param_1,uVar7,param_2 + 0xb8);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_1a0 + 4,"defuser_in_time");
  cVar6 = FUN_1801c2460(param_1,uVar7);
  if (cVar6 != '\0') {
    FUN_18019e140(*param_1,uVar7,param_2 + 0xbc);
  }
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_1a0 + 4,"defuser_too_late");
  cVar6 = FUN_1801c2460(param_1,uVar7);
  if (cVar6 != '\0') {
    FUN_18019e140(*param_1,uVar7,param_2 + 0xcc);
  }
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_1a0 + 4,"damage_low");
  cVar6 = FUN_1801c2460(param_1,uVar7);
  if (cVar6 != '\0') {
    FUN_18019e140(*param_1,uVar7,param_2 + 0xdc);
  }
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_1a0 + 4,"damage_high");
  cVar6 = FUN_1801c2460(param_1,uVar7);
  if (cVar6 != '\0') {
    FUN_18019e140(*param_1,uVar7,param_2 + 0xec);
  }
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_1a0 + 4,"bomb_colorize_effects");
  FUN_1801730b0(param_1,uVar7,param_2 + 0xfc);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_1a0 + 4,"bomb_explosion");
  cVar6 = FUN_1801c2460(param_1,uVar7);
  if (cVar6 != '\0') {
    FUN_18019e140(*param_1,uVar7,param_2 + 0x100);
  }
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_1a0 + 4,"bomb_light");
  cVar6 = FUN_1801c2460(param_1,uVar7);
  if (cVar6 != '\0') {
    FUN_18019e140(*param_1,uVar7,param_2 + 0x110);
  }
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_1a0 + 4,"weapons");
  FUN_1801b5140(param_1,uVar7,param_2 + 0x120);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_1a0 + 4,"weapons_colorize_effects");
  FUN_1801730b0(param_1,uVar7,param_2 + 0x154);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_1a0 + 4,"weapon_effect");
  cVar6 = FUN_1801c2460(param_1,uVar7);
  if (cVar6 != '\0') {
    FUN_18019e140(*param_1,uVar7,param_2 + 0x158);
  }
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_1a0 + 4,"impact_effect");
  cVar6 = FUN_1801c2460(param_1,uVar7);
  if (cVar6 != '\0') {
    FUN_18019e140(*param_1,uVar7,param_2 + 0x168);
  }
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_1a0 + 4,"hostages");
  FUN_1801b5140(param_1,uVar7,param_2 + 0x178);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_1a0 + 4,"grenades");
  FUN_1801b5140(param_1,uVar7,param_2 + 0x1ac);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_1a0 + 4,"grenade_lethal");
  cVar6 = FUN_1801c2460(param_1,uVar7);
  if (cVar6 != '\0') {
    FUN_18019e140(*param_1,uVar7,param_2 + 0x1e0);
  }
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_1a0 + 4,"grenade_utility");
  cVar6 = FUN_1801c2460(param_1,uVar7);
  if (cVar6 != '\0') {
    FUN_18019e140(*param_1,uVar7,param_2 + 0x1f0);
  }
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_1a0 + 4,"item_exponent");
  cVar6 = FUN_1801c2460(param_1,uVar7);
  if (cVar6 != '\0') {
    FUN_1800f3090(*param_1,uVar7,param_2 + 0x200);
  }
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_1a0 + 4,"item_thickness");
  FUN_180173150(param_1,uVar7,param_2 + 0x204);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_1a0 + 4,"item_points_thickness");
  FUN_180173150(param_1,uVar7,param_2 + 0x208);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_1a0 + 4,"item_shimmer");
  cVar6 = FUN_1801c2460(param_1,uVar7);
  if (cVar6 != '\0') {
    FUN_1800f3090(*param_1,uVar7,param_2 + 0x20c);
  }
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_1a0 + 4,"smoke_radius");
  FUN_1801730b0(param_1,uVar7,param_2 + 0x210);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_1a0 + 4,"smoke_radius_color");
  cVar6 = FUN_1801c2460(param_1,uVar7);
  if (cVar6 != '\0') {
    FUN_18019e140(*param_1,uVar7,param_2 + 0x214);
  }
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_1a0 + 4,"smoke_options");
  FUN_1801b5340(param_1,uVar7,param_2 + 0x224);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_1a0 + 4,"inferno_radius");
  FUN_1801730b0(param_1,uVar7,param_2 + 0x238);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_1a0 + 4,"inferno_lethal");
  cVar6 = FUN_1801c2460(param_1,uVar7);
  if (cVar6 != '\0') {
    FUN_18019e140(*param_1,uVar7,param_2 + 0x23c);
  }
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_1a0 + 4,"inferno_safe");
  cVar6 = FUN_1801c2460(param_1,uVar7);
  if (cVar6 != '\0') {
    FUN_18019e140(*param_1,uVar7,param_2 + 0x24c);
  }
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_1a0 + 4,"inferno_options");
  FUN_1801b5340(param_1,uVar7,param_2 + 0x25c);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_1a0 + 4,"projectile_inferno");
  FUN_1801730b0(param_1,uVar7,param_2 + 0x270);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_1a0 + 4,"projectile_lethal");
  cVar6 = FUN_1801c2460(param_1,uVar7);
  if (cVar6 != '\0') {
    FUN_18019e140(*param_1,uVar7,param_2 + 0x274);
  }
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_1a0 + 4,"projectile_safe");
  cVar6 = FUN_1801c2460(param_1,uVar7);
  if (cVar6 != '\0') {
    FUN_18019e140(*param_1,uVar7,param_2 + 0x284);
  }
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_1a0 + 4,"colorize_smoke");
  FUN_1801730b0(param_1,uVar7,param_2 + 0x294);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_1a0 + 4,"smoke_ct");
  cVar6 = FUN_1801c2460(param_1,uVar7);
  if (cVar6 != '\0') {
    FUN_18019e140(*param_1,uVar7,param_2 + 0x298);
  }
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_1a0 + 4,"smoke_t");
  cVar6 = FUN_1801c2460(param_1,uVar7);
  if (cVar6 != '\0') {
    FUN_18019e140(*param_1,uVar7,param_2 + 0x2a8);
  }
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_1a0 + 4,"colorize_molotov");
  FUN_1801730b0(param_1,uVar7,param_2 + 0x2b8);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_1a0 + 4,"molotov_lethal");
  cVar6 = FUN_1801c2460(param_1,uVar7);
  if (cVar6 != '\0') {
    FUN_18019e140(*param_1,uVar7,param_2 + 700);
  }
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_1a0 + 4,"molotov_safe");
  cVar6 = FUN_1801c2460(param_1,uVar7);
  if (cVar6 != '\0') {
    FUN_18019e140(*param_1,uVar7,param_2 + 0x2cc);
  }
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_1a0 + 4,"disable_inferno_decals");
  FUN_1801730b0(param_1,uVar7,param_2 + 0x2dc);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_1a0 + 4,"colorize_explosion");
  FUN_1801730b0(param_1,uVar7,param_2 + 0x2dd);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_1a0 + 4,"explosion_color");
  cVar6 = FUN_1801c2460(param_1,uVar7);
  if (cVar6 != '\0') {
    FUN_18019e140(*param_1,uVar7,param_2 + 0x2e0);
  }
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_1a0 + 4,"effects");
  FUN_1801730b0(param_1,uVar7,param_2 + 0x2f0);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_1a0 + 4,"effects_color");
  cVar6 = FUN_1801c2460(param_1,uVar7);
  if (cVar6 != '\0') {
    FUN_18019e140(*param_1,uVar7,param_2 + 0x2f4);
  }
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_1a0 + 4,"effects_items");
  cVar6 = FUN_1801c2460(param_1,uVar7);
  if (cVar6 != '\0') {
    FUN_180152490(*param_1,uVar7,param_2 + 0x304);
  }
  FUN_18000f890(local_1a0);
  uVar13 = 0;
  do {
    uVar7 = FUN_18004e4f0(&local_a0,uVar13);
    uVar8 = FUN_180073a70(&local_80,local_1a0 + 4,"effects_item_color");
    uVar7 = FUN_180066820(local_1a0,uVar8,uVar7);
    cVar6 = FUN_1801c2460(param_1,uVar7);
    if (cVar6 != '\0') {
      FUN_18019e140(*param_1,uVar7,uVar13 * 0x10 + param_2 + 0x30c);
    }
    FUN_18000f890(local_1a0);
    FUN_18000f890(&local_80);
    FUN_18000f890(&local_a0);
    uVar13 = uVar13 + 1;
  } while (uVar13 < 5);
  uVar7 = FUN_180073a70(local_1a0,local_1a0 + 4,"effects_item_inherit");
  cVar6 = FUN_1801c2460(param_1,uVar7);
  if (cVar6 != '\0') {
    FUN_180152490(*param_1,uVar7,param_2 + 0x35c);
  }
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_1a0 + 4,"trajectory");
  FUN_1801730b0(param_1,uVar7,param_2 + 0x361);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_1a0 + 4,"trajectory_base");
  cVar6 = FUN_1801c2460(param_1,uVar7);
  if (cVar6 != '\0') {
    FUN_18019e140(*param_1,uVar7,param_2 + 0x364);
  }
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_1a0 + 4,"trajectory_hit");
  cVar6 = FUN_1801c2460(param_1,uVar7);
  if (cVar6 != '\0') {
    FUN_18019e140(*param_1,uVar7,param_2 + 0x374);
  }
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_1a0 + 4,"trajectory_team_damage");
  cVar6 = FUN_1801c2460(param_1,uVar7);
  if (cVar6 != '\0') {
    FUN_18019e140(*param_1,uVar7,param_2 + 900);
  }
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_1a0 + 4,"trajectory_exponent");
  cVar6 = FUN_1801c2460(param_1,uVar7);
  if (cVar6 != '\0') {
    FUN_1800f3090(*param_1,uVar7,param_2 + 0x394);
  }
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_1a0 + 4,"trajectory_thickness");
  cVar6 = FUN_1801c2460(param_1,uVar7);
  if (cVar6 != '\0') {
    lVar9 = FUN_1800f2fa0(*param_1,uVar7);
    if (lVar9 != 0) {
      dVar2 = (double)FUN_180370b10(lVar9,SUB84((double)*(float *)(param_2 + 0x398),0));
      if (((uint)(float)dVar2 & 0x7f800000) != 0x7f800000) {
        *(float *)(param_2 + 0x398) = (float)dVar2;
      }
    }
  }
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_1a0 + 4,"trajectory_points_thickness");
  cVar6 = FUN_1801c2460(param_1,uVar7);
  if (cVar6 != '\0') {
    lVar9 = FUN_1800f2fa0(*param_1,uVar7);
    if (lVar9 != 0) {
      dVar2 = (double)FUN_180370b10(lVar9,SUB84((double)*(float *)(param_2 + 0x39c),0));
      if (((uint)(float)dVar2 & 0x7f800000) != 0x7f800000) {
        *(float *)(param_2 + 0x39c) = (float)dVar2;
      }
    }
  }
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_1a0 + 4,"trajectory_shimmer");
  cVar6 = FUN_1801c2460(param_1,uVar7);
  if (cVar6 != '\0') {
    FUN_18019dbe0(*param_1,uVar7,param_2 + 0x3a0);
  }
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_1a0 + 4,"trajectory_shimmer_strength");
  cVar6 = FUN_1801c2460(param_1,uVar7);
  if (cVar6 != '\0') {
    FUN_1800f3090(*param_1,uVar7,param_2 + 0x3a4);
  }
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_1a0 + 4,"trajectory_thrown");
  FUN_1801730b0(param_1,uVar7,param_2 + 0x3a8);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_1a0 + 4,"trajectory_pin_pulled_only");
  FUN_1801730b0(param_1,uVar7,param_2 + 0x3a9);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_1a0 + 4,"trajectory_precise");
  FUN_1801730b0(param_1,uVar7,param_2 + 0x3aa);
  FUN_18000f890(local_1a0);
  local_140 = (char *)0x0;
  uStack_138 = 0;
  local_140 = (char *)FUN_18000fb70(0x20);
  uVar5 = s_visuals_world_hud__1806f7df8._12_4_;
  uVar4 = s_visuals_world_hud__1806f7df8._8_4_;
  uVar3 = s_visuals_world_hud__1806f7df8._4_4_;
  local_130 = 0x12;
  local_128 = 0x1f;
  *(undefined4 *)local_140 = s_visuals_world_hud__1806f7df8._0_4_;
  *(undefined4 *)(local_140 + 4) = uVar3;
  *(undefined4 *)(local_140 + 8) = uVar4;
  *(undefined4 *)(local_140 + 0xc) = uVar5;
  *(undefined2 *)(local_140 + 0x10) = s_visuals_world_hud__1806f7df8._16_2_;
  local_140[0x12] = '\0';
  uVar7 = FUN_180073a70(local_1a0,&local_140,"radar");
  cVar6 = FUN_1801c2460(param_1,uVar7);
  if (cVar6 != '\0') {
    FUN_18019df50(*param_1,uVar7,param_2 + 0x3ac);
  }
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_140,"scope_overlay");
  cVar6 = FUN_1801c2460(param_1,uVar7);
  if (cVar6 != '\0') {
    FUN_1800f3090(*param_1,uVar7,param_2 + 0x3b0);
  }
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_140,"scope_color_mode");
  cVar6 = FUN_1801c2460(param_1,uVar7);
  if (cVar6 != '\0') {
    FUN_1800f3090(*param_1,uVar7,param_2 + 0x3b4);
  }
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_140,"scope_color");
  cVar6 = FUN_1801c2460(param_1,uVar7);
  if (cVar6 != '\0') {
    FUN_18019e140(*param_1,uVar7,param_2 + 0x3b8);
  }
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_140,"scope_outer");
  cVar6 = FUN_1801c2460(param_1,uVar7);
  if (cVar6 != '\0') {
    FUN_18019e140(*param_1,uVar7,param_2 + 0x3c8);
  }
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_140,"scope_inner");
  cVar6 = FUN_1801c2460(param_1,uVar7);
  if (cVar6 != '\0') {
    FUN_18019e140(*param_1,uVar7,param_2 + 0x3d8);
  }
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_140,"scope_selection");
  cVar6 = FUN_1801c2460(param_1,uVar7);
  if (cVar6 != '\0') {
    FUN_18019df50(*param_1,uVar7,param_2 + 1000);
  }
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_140,"scope_rotation");
  cVar6 = FUN_1801c2460(param_1,uVar7);
  if (cVar6 != '\0') {
    FUN_1800f3090(*param_1,uVar7,param_2 + 0x3ec);
  }
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_140,"scope_offset");
  cVar6 = FUN_1801c2460(param_1,uVar7);
  if (cVar6 != '\0') {
    FUN_1800f3090(*param_1,uVar7,param_2 + 0x3f0);
  }
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_140,"scope_size");
  cVar6 = FUN_1801c2460(param_1,uVar7);
  if (cVar6 != '\0') {
    FUN_1800f3090(*param_1,uVar7,param_2 + 0x3f4);
  }
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_140,"scope_aspect");
  cVar6 = FUN_1801c2460(param_1,uVar7);
  if (cVar6 != '\0') {
    FUN_1800f3090(*param_1,uVar7,param_2 + 0x3f8);
  }
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_140,"scope_spread_scale");
  cVar6 = FUN_1801c2460(param_1,uVar7);
  if (cVar6 != '\0') {
    FUN_1800f3090(*param_1,uVar7,param_2 + 0x3fc);
  }
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_140,"scope_glow");
  FUN_1801730b0(param_1,uVar7,param_2 + 0x400);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_140,"scope_glow_color");
  cVar6 = FUN_1801c2460(param_1,uVar7);
  if (cVar6 != '\0') {
    FUN_18019e140(*param_1,uVar7,param_2 + 0x404);
  }
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_140,"inaccuracy");
  FUN_1801730b0(param_1,uVar7,param_2 + 0x414);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_140,"inaccuracy_color");
  cVar6 = FUN_1801c2460(param_1,uVar7);
  if (cVar6 != '\0') {
    FUN_18019e140(*param_1,uVar7,param_2 + 0x418);
  }
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_140,"inaccuracy_follow_recoil");
  FUN_1801730b0(param_1,uVar7,param_2 + 0x428);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_140,"inaccuracy_only_in_scope");
  FUN_1801730b0(param_1,uVar7,param_2 + 0x429);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_140,"inaccuracy_invert_fade");
  FUN_1801730b0(param_1,uVar7,param_2 + 0x42a);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_140,"inaccuracy_fade_offset");
  cVar6 = FUN_1801c2460(param_1,uVar7);
  if (cVar6 != '\0') {
    FUN_1800f3090(*param_1,uVar7,param_2 + 0x42c);
  }
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_140,"preserve_notices");
  cVar6 = FUN_1801c2460(param_1,uVar7);
  if (cVar6 != '\0') {
    FUN_1800f3090(*param_1,uVar7,param_2 + 0x430);
  }
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_140,"hide_teammate_assists");
  FUN_1801730b0(param_1,uVar7,param_2 + 0x434);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_140,"scoreboard_opacity");
  cVar6 = FUN_1801c2460(param_1,uVar7);
  if (cVar6 != '\0') {
    FUN_1800f3090(*param_1,uVar7,param_2 + 0x438);
  }
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_140,"scoreboard_width");
  cVar6 = FUN_1801c2460(param_1,uVar7);
  if (cVar6 != '\0') {
    FUN_1800f3090(*param_1,uVar7,param_2 + 0x43c);
  }
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_140,"reveal_money");
  FUN_1801730b0(param_1,uVar7,param_2 + 0x440);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_140,"reveal_ranks");
  FUN_1801730b0(param_1,uVar7,param_2 + 0x441);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_140,"equipment");
  cVar6 = FUN_1801c2460(param_1,uVar7);
  if (cVar6 != '\0') {
    FUN_1800f3090(*param_1,uVar7,param_2 + 0x444);
  }
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_140,"equipment_items");
  cVar6 = FUN_1801c2460(param_1,uVar7);
  if (cVar6 != '\0') {
    FUN_1801c1990(*param_1,uVar7,param_2 + 0x448);
  }
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_140,"force_sniper_crosshair");
  FUN_1801730b0(param_1,uVar7,param_2 + 0x451);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_140,"force_while_scoped");
  FUN_1801730b0(param_1,uVar7,param_2 + 0x452);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_140,"force_while_c4");
  FUN_1801730b0(param_1,uVar7,param_2 + 0x453);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_140,"hide_while_knife");
  FUN_1801730b0(param_1,uVar7,param_2 + 0x454);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_140,"hide_while_grenade");
  FUN_1801730b0(param_1,uVar7,param_2 + 0x455);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_140,"penetration");
  FUN_1801730b0(param_1,uVar7,param_2 + 0x456);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_140,"penetration_base");
  cVar6 = FUN_1801c2460(param_1,uVar7);
  if (cVar6 != '\0') {
    FUN_18019e140(*param_1,uVar7,param_2 + 0x458);
  }
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_140,"penetration_penetrable");
  cVar6 = FUN_1801c2460(param_1,uVar7);
  if (cVar6 != '\0') {
    FUN_18019e140(*param_1,uVar7,param_2 + 0x468);
  }
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_140,"penetration_target");
  cVar6 = FUN_1801c2460(param_1,uVar7);
  if (cVar6 != '\0') {
    FUN_18019e140(*param_1,uVar7,param_2 + 0x478);
  }
  FUN_18000f890(local_1a0);
  local_e0 = (char *)0x0;
  uStack_d8 = 0;
  local_e0 = (char *)FUN_18000fb70(0x20);
  uVar5 = s_visuals_world_removals__1806f8148._12_4_;
  uVar4 = s_visuals_world_removals__1806f8148._8_4_;
  uVar3 = s_visuals_world_removals__1806f8148._4_4_;
  local_d0 = 0x17;
  local_c8 = 0x1f;
  *(undefined4 *)local_e0 = s_visuals_world_removals__1806f8148._0_4_;
  *(undefined4 *)(local_e0 + 4) = uVar3;
  *(undefined4 *)(local_e0 + 8) = uVar4;
  *(undefined4 *)(local_e0 + 0xc) = uVar5;
  *(ulonglong *)(local_e0 + 0xf) =
       CONCAT71(s_visuals_world_removals__1806f8148._16_7_,s_visuals_world_removals__1806f8148[0xf])
  ;
  local_e0[0x17] = '\0';
  uVar7 = FUN_180073a70(local_1a0,&local_e0,"team_intro");
  FUN_1801730b0(param_1,uVar7,param_2 + 0x488);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_e0,"panorama_dots");
  FUN_1801730b0(param_1,uVar7,param_2 + 0x489);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_e0,"bottom_gradient");
  FUN_1801730b0(param_1,uVar7,param_2 + 0x48a);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_e0,"damage_indicator");
  FUN_1801730b0(param_1,uVar7,param_2 + 0x48b);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_e0,"server_ads");
  FUN_1801730b0(param_1,uVar7,param_2 + 0x48c);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_e0,"flashbang");
  FUN_1801730b0(param_1,uVar7,param_2 + 0x48d);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_e0,&DAT_1806e7598);
  FUN_1801730b0(param_1,uVar7,param_2 + 0x48e);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_e0,&DAT_1806f816c);
  FUN_1801730b0(param_1,uVar7,param_2 + 0x48f);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_e0,"carried_hostage");
  FUN_1801730b0(param_1,uVar7,param_2 + 0x490);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_e0,"post_processing");
  FUN_1801730b0(param_1,uVar7,param_2 + 0x491);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_e0,"water");
  FUN_1801730b0(param_1,uVar7,param_2 + 0x492);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_e0,"blood");
  FUN_1801730b0(param_1,uVar7,param_2 + 0x493);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_e0,"decals");
  FUN_1801730b0(param_1,uVar7,param_2 + 0x494);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_e0,"ragdolls");
  cVar6 = FUN_1801c2460(param_1,uVar7);
  if (cVar6 != '\0') {
    FUN_1800f3090(*param_1,uVar7,param_2 + 0x498);
  }
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_e0,"gravity");
  cVar6 = FUN_1801c2460(param_1,uVar7);
  if (cVar6 != '\0') {
    FUN_1800f3090(*param_1,uVar7,param_2 + 0x49c);
  }
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_e0,"friction");
  cVar6 = FUN_1801c2460(param_1,uVar7);
  if (cVar6 != '\0') {
    FUN_1800f3090(*param_1,uVar7,param_2 + 0x4a0);
  }
  FUN_18000f890(local_1a0);
  local_a0 = (char *)0x0;
  uStack_98 = 0;
  local_a0 = (char *)FUN_18000fb70(0x20);
  uVar5 = s_visuals_world_hitmarker__1806f81f8._12_4_;
  uVar4 = s_visuals_world_hitmarker__1806f81f8._8_4_;
  uVar3 = s_visuals_world_hitmarker__1806f81f8._4_4_;
  local_90 = 0x18;
  local_88 = 0x1f;
  *(undefined4 *)local_a0 = s_visuals_world_hitmarker__1806f81f8._0_4_;
  *(undefined4 *)(local_a0 + 4) = uVar3;
  *(undefined4 *)(local_a0 + 8) = uVar4;
  *(undefined4 *)(local_a0 + 0xc) = uVar5;
  *(undefined8 *)(local_a0 + 0x10) = s_visuals_world_hitmarker__1806f81f8._16_8_;
  local_a0[0x18] = '\0';
  uVar7 = FUN_180073a70(local_1a0,&local_a0,"marker_2d");
  FUN_1801730b0(param_1,uVar7,param_2 + 0x4a4);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_a0,"color_2d");
  cVar6 = FUN_1801c2460(param_1,uVar7);
  if (cVar6 != '\0') {
    FUN_18019e140(*param_1,uVar7,param_2 + 0x4a8);
  }
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_a0,"duration_2d");
  cVar6 = FUN_1801c2460(param_1,uVar7);
  if (cVar6 != '\0') {
    lVar9 = FUN_1800f2fa0(*param_1,uVar7);
    if (lVar9 != 0) {
      dVar2 = (double)FUN_180370b10(lVar9,SUB84((double)*(float *)(param_2 + 0x4b8),0));
      if (((uint)(float)dVar2 & 0x7f800000) != 0x7f800000) {
        *(float *)(param_2 + 0x4b8) = (float)dVar2;
      }
    }
  }
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_a0,"marker_3d");
  FUN_1801730b0(param_1,uVar7,param_2 + 0x4bc);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_a0,"color_3d");
  cVar6 = FUN_1801c2460(param_1,uVar7);
  if (cVar6 != '\0') {
    FUN_18019e140(*param_1,uVar7,param_2 + 0x4c0);
  }
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_a0,"duration_3d");
  cVar6 = FUN_1801c2460(param_1,uVar7);
  if (cVar6 != '\0') {
    lVar9 = FUN_1800f2fa0(*param_1,uVar7);
    if (lVar9 != 0) {
      dVar2 = (double)FUN_180370b10(lVar9,SUB84((double)*(float *)(param_2 + 0x4d0),0));
      if (((uint)(float)dVar2 & 0x7f800000) != 0x7f800000) {
        *(float *)(param_2 + 0x4d0) = (float)dVar2;
      }
    }
  }
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_a0,"damage");
  FUN_1801730b0(param_1,uVar7,param_2 + 0x4d4);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_a0,"color_damage");
  cVar6 = FUN_1801c2460(param_1,uVar7);
  if (cVar6 != '\0') {
    FUN_18019e140(*param_1,uVar7,param_2 + 0x4d8);
  }
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_a0,"duration_damage");
  cVar6 = FUN_1801c2460(param_1,uVar7);
  if (cVar6 != '\0') {
    lVar9 = FUN_1800f2fa0(*param_1,uVar7);
    if (lVar9 != 0) {
      dVar2 = (double)FUN_180370b10(lVar9,SUB84((double)*(float *)(param_2 + 0x4e8),0));
      if (((uint)(float)dVar2 & 0x7f800000) != 0x7f800000) {
        *(float *)(param_2 + 0x4e8) = (float)dVar2;
      }
    }
  }
  FUN_18000f890(local_1a0);
  local_c0 = (char *)0x0;
  uStack_b8 = 0;
  local_c0 = (char *)FUN_18000fb70(0x20);
  uVar5 = s_visuals_world_tracers__1806f8290._8_4_;
  uVar4 = s_visuals_world_tracers__1806f8290._4_4_;
  local_b0 = 0x16;
  local_a8 = 0x1f;
  uVar3 = CONCAT22(s_visuals_world_tracers__1806f8290._14_2_,
                   s_visuals_world_tracers__1806f8290._12_2_);
  *(undefined4 *)local_c0 = s_visuals_world_tracers__1806f8290._0_4_;
  *(undefined4 *)(local_c0 + 4) = uVar4;
  *(undefined4 *)(local_c0 + 8) = uVar5;
  *(undefined4 *)(local_c0 + 0xc) = uVar3;
  *(ulonglong *)(local_c0 + 0xe) =
       CONCAT62(s_visuals_world_tracers__1806f8290._16_6_,s_visuals_world_tracers__1806f8290._14_2_)
  ;
  local_c0[0x16] = '\0';
  uVar7 = FUN_180073a70(local_1a0,&local_c0,"enemies");
  FUN_1801730b0(param_1,uVar7,param_2 + 0x4ec);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_c0,"enemies_color");
  cVar6 = FUN_1801c2460(param_1,uVar7);
  if (cVar6 != '\0') {
    FUN_18019e140(*param_1,uVar7,param_2 + 0x4f0);
  }
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_c0,"enemies_duration");
  cVar6 = FUN_1801c2460(param_1,uVar7);
  if (cVar6 != '\0') {
    lVar9 = FUN_1800f2fa0(*param_1,uVar7);
    if (lVar9 != 0) {
      dVar2 = (double)FUN_180370b10(lVar9,SUB84((double)*(float *)(param_2 + 0x500),0));
      if (((uint)(float)dVar2 & 0x7f800000) != 0x7f800000) {
        *(float *)(param_2 + 0x500) = (float)dVar2;
      }
    }
  }
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_c0,"teammates");
  FUN_1801730b0(param_1,uVar7,param_2 + 0x504);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_c0,"teammates_color");
  cVar6 = FUN_1801c2460(param_1,uVar7);
  if (cVar6 != '\0') {
    FUN_18019e140(*param_1,uVar7,param_2 + 0x508);
  }
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_c0,"teammates_duration");
  cVar6 = FUN_1801c2460(param_1,uVar7);
  if (cVar6 != '\0') {
    lVar9 = FUN_1800f2fa0(*param_1,uVar7);
    if (lVar9 != 0) {
      dVar2 = (double)FUN_180370b10(lVar9,SUB84((double)*(float *)(param_2 + 0x518),0));
      if (((uint)(float)dVar2 & 0x7f800000) != 0x7f800000) {
        *(float *)(param_2 + 0x518) = (float)dVar2;
      }
    }
  }
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_c0,"local");
  FUN_1801730b0(param_1,uVar7,param_2 + 0x51c);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_c0,"local_color");
  cVar6 = FUN_1801c2460(param_1,uVar7);
  if (cVar6 != '\0') {
    FUN_18019e140(*param_1,uVar7,param_2 + 0x520);
  }
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_c0,"local_duration");
  cVar6 = FUN_1801c2460(param_1,uVar7);
  if (cVar6 != '\0') {
    lVar9 = FUN_1800f2fa0(*param_1,uVar7);
    if (lVar9 != 0) {
      dVar2 = (double)FUN_180370b10(lVar9,SUB84((double)*(float *)(param_2 + 0x530),0));
      if (((uint)(float)dVar2 & 0x7f800000) != 0x7f800000) {
        *(float *)(param_2 + 0x530) = (float)dVar2;
      }
    }
  }
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_c0,"shared");
  FUN_1801730b0(param_1,uVar7,param_2 + 0x534);
  FUN_18000f890(local_1a0);
  local_1a0[0] = "enemies";
  local_1a0[1] = "teammates";
  local_1a0[2] = "local";
  local_1a0[3] = "shared";
  uVar13 = 0;
  do {
    pcVar12 = local_1a0[uVar13];
    uVar7 = FUN_180073a70(local_60,&local_c0,"style_");
    sVar10 = strlen(pcVar12);
    puVar11 = (undefined8 *)FUN_1800134a0(uVar7,pcVar12,sVar10);
    local_80 = *puVar11;
    uStack_78 = puVar11[1];
    local_70 = puVar11[2];
    uStack_68 = puVar11[3];
    puVar11[2] = 0;
    puVar11[3] = 0xf;
    *(undefined1 *)puVar11 = 0;
    puVar11 = (undefined8 *)FUN_1800134a0(&local_80,&DAT_1806e6f24,1);
    local_100 = (char *)*puVar11;
    uStack_f8 = puVar11[1];
    local_f0 = puVar11[2];
    uStack_e8 = puVar11[3];
    puVar11[2] = 0;
    puVar11[3] = 0xf;
    *(undefined1 *)puVar11 = 0;
    FUN_18000f890(&local_80);
    FUN_18000f890(local_60);
    uVar7 = FUN_180073a70(local_160,&local_100,"use_3d_scale");
    FUN_1801730b0(param_1,uVar7,param_2 + 0x538 + uVar13 * 0x18);
    FUN_18000f890(local_160);
    uVar7 = FUN_180073a70(local_160,&local_100,"glow_opacity");
    cVar6 = FUN_1801c2460(param_1,uVar7);
    if (cVar6 != '\0') {
      FUN_1800f3090(*param_1,uVar7,param_2 + 0x53c + uVar13 * 0x18);
    }
    FUN_18000f890(local_160);
    uVar7 = FUN_180073a70(local_160,&local_100,"thickness");
    cVar6 = FUN_1801c2460(param_1,uVar7);
    if (cVar6 != '\0') {
      lVar9 = FUN_1800f2fa0(*param_1,uVar7);
      if (lVar9 != 0) {
        dVar2 = (double)FUN_180370b10(lVar9,SUB84((double)*(float *)(param_2 + 0x540 + uVar13 * 0x18
                                                                    ),0));
        if (((uint)(float)dVar2 & 0x7f800000) != 0x7f800000) {
          *(float *)(param_2 + 0x540 + uVar13 * 0x18) = (float)dVar2;
        }
      }
    }
    FUN_18000f890(local_160);
    uVar7 = FUN_180073a70(local_160,&local_100,"scale");
    cVar6 = FUN_1801c2460(param_1,uVar7);
    if (cVar6 != '\0') {
      FUN_1800f3090(*param_1,uVar7,param_2 + 0x544 + uVar13 * 0x18);
    }
    FUN_18000f890(local_160);
    uVar7 = FUN_180073a70(local_160,&local_100,"glow_width");
    cVar6 = FUN_1801c2460(param_1,uVar7);
    if (cVar6 != '\0') {
      lVar9 = FUN_1800f2fa0(*param_1,uVar7);
      if (lVar9 != 0) {
        dVar2 = (double)FUN_180370b10(lVar9,SUB84((double)*(float *)(param_2 + 0x548 + uVar13 * 0x18
                                                                    ),0));
        if (((uint)(float)dVar2 & 0x7f800000) != 0x7f800000) {
          *(float *)(param_2 + 0x548 + uVar13 * 0x18) = (float)dVar2;
        }
      }
    }
    FUN_18000f890(local_160);
    uVar7 = FUN_180073a70(local_160,&local_100,"glow_radius");
    cVar6 = FUN_1801c2460(param_1,uVar7);
    if (cVar6 != '\0') {
      lVar9 = FUN_1800f2fa0(*param_1,uVar7);
      if (lVar9 != 0) {
        dVar2 = (double)FUN_180370b10(lVar9,SUB84((double)*(float *)(param_2 + 0x54c + uVar13 * 0x18
                                                                    ),0));
        if (((uint)(float)dVar2 & 0x7f800000) != 0x7f800000) {
          *(float *)(param_2 + 0x54c + uVar13 * 0x18) = (float)dVar2;
        }
      }
    }
    FUN_18000f890(local_160);
    FUN_18000f890(&local_100);
    uVar13 = uVar13 + 1;
  } while (uVar13 < 4);
  local_100 = (char *)0x0;
  uStack_f8 = 0;
  local_100 = (char *)FUN_18000fb70(0x20);
  uVar5 = s_visuals_world_impacts__1806f8398._8_4_;
  uVar4 = s_visuals_world_impacts__1806f8398._4_4_;
  local_f0 = 0x16;
  uStack_e8 = 0x1f;
  uVar3 = CONCAT22(s_visuals_world_impacts__1806f8398._14_2_,
                   s_visuals_world_impacts__1806f8398._12_2_);
  *(undefined4 *)local_100 = s_visuals_world_impacts__1806f8398._0_4_;
  *(undefined4 *)(local_100 + 4) = uVar4;
  *(undefined4 *)(local_100 + 8) = uVar5;
  *(undefined4 *)(local_100 + 0xc) = uVar3;
  *(ulonglong *)(local_100 + 0xe) =
       CONCAT62(s_visuals_world_impacts__1806f8398._16_6_,s_visuals_world_impacts__1806f8398._14_2_)
  ;
  local_100[0x16] = '\0';
  uVar7 = FUN_180073a70(local_160,&local_100,"enabled");
  FUN_1801730b0(param_1,uVar7,param_2 + 0x598);
  FUN_18000f890(local_160);
  uVar7 = FUN_180073a70(local_160,&local_100,"client");
  cVar6 = FUN_1801c2460(param_1,uVar7);
  if (cVar6 != '\0') {
    FUN_18019e140(*param_1,uVar7,param_2 + 0x59c);
  }
  FUN_18000f890(local_160);
  uVar7 = FUN_180073a70(local_160,&local_100,"server");
  cVar6 = FUN_1801c2460(param_1,uVar7);
  if (cVar6 != '\0') {
    FUN_18019e140(*param_1,uVar7,param_2 + 0x5ac);
  }
  FUN_18000f890(local_160);
  uVar7 = FUN_180073a70(local_160,&local_100,"scale");
  cVar6 = FUN_1801c2460(param_1,uVar7);
  if (cVar6 != '\0') {
    FUN_1800f3090(*param_1,uVar7,param_2 + 0x5bc);
  }
  FUN_18000f890(local_160);
  uVar7 = FUN_180073a70(local_160,&local_100,"rounding");
  cVar6 = FUN_1801c2460(param_1,uVar7);
  if (cVar6 != '\0') {
    FUN_1800f3090(*param_1,uVar7,param_2 + 0x5c0);
  }
  FUN_18000f890(local_160);
  uVar7 = FUN_180073a70(local_160,&local_100,"fill_opacity");
  cVar6 = FUN_1801c2460(param_1,uVar7);
  if (cVar6 != '\0') {
    FUN_1800f3090(*param_1,uVar7,param_2 + 0x5c4);
  }
  FUN_18000f890(local_160);
  uVar7 = FUN_180073a70(local_160,&local_100,"outline_opacity");
  cVar6 = FUN_1801c2460(param_1,uVar7);
  if (cVar6 != '\0') {
    FUN_1800f3090(*param_1,uVar7,param_2 + 0x5c8);
  }
  FUN_18000f890(local_160);
  uVar7 = FUN_180073a70(local_160,&local_100,"glow_opacity");
  cVar6 = FUN_1801c2460(param_1,uVar7);
  if (cVar6 != '\0') {
    FUN_1800f3090(*param_1,uVar7,param_2 + 0x5cc);
  }
  FUN_18000f890(local_160);
  uVar7 = FUN_180073a70(local_160,&local_100,&DAT_1806f83d8);
  cVar6 = FUN_1801c2460(param_1,uVar7);
  if (cVar6 != '\0') {
    lVar9 = FUN_1800f2fa0(*param_1,uVar7);
    if (lVar9 != 0) {
      dVar2 = (double)FUN_180370b10(lVar9,SUB84((double)*(float *)(param_2 + 0x5d0),0));
      if (((uint)(float)dVar2 & 0x7f800000) != 0x7f800000) {
        *(float *)(param_2 + 0x5d0) = (float)dVar2;
      }
    }
  }
  FUN_18000f890(local_160);
  uVar7 = FUN_180073a70(local_160,&local_100,"duration");
  cVar6 = FUN_1801c2460(param_1,uVar7);
  if (cVar6 != '\0') {
    lVar9 = FUN_1800f2fa0(*param_1,uVar7);
    if (lVar9 != 0) {
      dVar2 = (double)FUN_180370b10(lVar9,SUB84((double)*(float *)(param_2 + 0x5d4),0));
      if (((uint)(float)dVar2 & 0x7f800000) != 0x7f800000) {
        *(float *)(param_2 + 0x5d4) = (float)dVar2;
      }
    }
  }
  FUN_18000f890(local_160);
  uVar7 = FUN_180073a70(local_160,&local_100,"sparks");
  FUN_1801730b0(param_1,uVar7,param_2 + 0x5d8);
  FUN_18000f890(local_160);
  uVar7 = FUN_180073a70(local_160,&local_100,"sparks_color");
  cVar6 = FUN_1801c2460(param_1,uVar7);
  if (cVar6 != '\0') {
    FUN_18019e140(*param_1,uVar7,param_2 + 0x5dc);
  }
  FUN_18000f890(local_160);
  uVar7 = FUN_180073a70(local_160,&local_100,"sparks_glow");
  cVar6 = FUN_1801c2460(param_1,uVar7);
  if (cVar6 != '\0') {
    FUN_18019e140(*param_1,uVar7,param_2 + 0x5ec);
  }
  FUN_18000f890(local_160);
  uVar7 = FUN_180073a70(local_160,&local_100,"sparks_radius");
  cVar6 = FUN_1801c2460(param_1,uVar7);
  if (cVar6 != '\0') {
    lVar9 = FUN_1800f2fa0(*param_1,uVar7);
    if (lVar9 != 0) {
      dVar2 = (double)FUN_180370b10(lVar9,SUB84((double)*(float *)(param_2 + 0x5fc),0));
      if (((uint)(float)dVar2 & 0x7f800000) != 0x7f800000) {
        *(float *)(param_2 + 0x5fc) = (float)dVar2;
      }
    }
  }
  FUN_18000f890(local_160);
  uVar7 = FUN_180073a70(local_160,&local_100,"sparks_count");
  cVar6 = FUN_1801c2460(param_1,uVar7);
  if (cVar6 != '\0') {
    FUN_1800f3090(*param_1,uVar7,param_2 + 0x600);
  }
  FUN_18000f890(local_160);
  uVar7 = FUN_180073a70(local_160,&local_100,"sparks_spread");
  cVar6 = FUN_1801c2460(param_1,uVar7);
  if (cVar6 != '\0') {
    FUN_1800f3090(*param_1,uVar7,param_2 + 0x604);
  }
  FUN_18000f890(local_160);
  uVar7 = FUN_180073a70(local_160,&local_100,"sparks_height");
  cVar6 = FUN_1801c2460(param_1,uVar7);
  if (cVar6 != '\0') {
    FUN_1800f3090(*param_1,uVar7,param_2 + 0x608);
  }
  FUN_18000f890(local_160);
  uVar7 = FUN_180073a70(local_160,&local_100,"sparks_lifetime");
  cVar6 = FUN_1801c2460(param_1,uVar7);
  if (cVar6 != '\0') {
    lVar9 = FUN_1800f2fa0(*param_1,uVar7);
    if (lVar9 != 0) {
      dVar2 = (double)FUN_180370b10(lVar9,SUB84((double)*(float *)(param_2 + 0x60c),0));
      if (((uint)(float)dVar2 & 0x7f800000) != 0x7f800000) {
        *(float *)(param_2 + 0x60c) = (float)dVar2;
      }
    }
  }
  FUN_18000f890(local_160);
  if (0xf < uStack_e8) {
    uVar13 = uStack_e8 + 1;
    pcVar12 = local_100;
    if (0xfff < uVar13) {
      pcVar12 = *(char **)(local_100 + -8);
      if ((char *)0x1f < local_100 + (-8 - (longlong)pcVar12)) {
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar13 = uStack_e8 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar12,uVar13);
  }
  FUN_18000f890(&local_c0);
  FUN_18000f890(&local_a0);
  FUN_18000f890(&local_e0);
  FUN_18000f890(&local_140);
  FUN_18000f890(local_1a0 + 4);
  FUN_18000f890(&local_120);
  return;
}



/* ===== 18017bfd0 FUN_18017bfd0 ===== */

void FUN_18017bfd0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  size_t _Size;
  int iVar2;
  undefined8 *_Buf1;
  longlong *plVar3;
  
  plVar1 = (longlong *)param_1[1];
  _Size = param_2[2];
  plVar3 = plVar1;
  if ((ulonglong)plVar1[3] < 0x10) {
    plVar3 = param_1 + 1;
  }
  if ((ulonglong)param_2[3] < 0x10) {
    _Buf1 = param_2;
  }
  else {
    _Buf1 = (undefined8 *)*param_2;
  }
  if (_Size == plVar1[2]) {
    if ((_Size != 0) && (iVar2 = memcmp(_Buf1,(void *)*plVar3,_Size), iVar2 != 0)) {
      return;
    }
    FUN_1800f2db0(*param_1,param_2,param_3);
  }
  return;
}



/* ===== 18017c050 FUN_18017c050 ===== */

void FUN_18017c050(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  size_t _Size;
  int iVar2;
  undefined8 *_Buf1;
  longlong *plVar3;
  
  plVar1 = (longlong *)param_1[1];
  _Size = param_2[2];
  plVar3 = plVar1;
  if ((ulonglong)plVar1[3] < 0x10) {
    plVar3 = param_1 + 1;
  }
  if ((ulonglong)param_2[3] < 0x10) {
    _Buf1 = param_2;
  }
  else {
    _Buf1 = (undefined8 *)*param_2;
  }
  if (_Size == plVar1[2]) {
    if ((_Size != 0) && (iVar2 = memcmp(_Buf1,(void *)*plVar3,_Size), iVar2 != 0)) {
      return;
    }
    FUN_180191850(*param_1,param_2,param_3);
  }
  return;
}



/* ===== 18017c0d0 FUN_18017c0d0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18017c0d0(undefined8 *param_1,undefined8 *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  size_t sVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *_Buf1;
  longlong *plVar6;
  undefined1 auStack_68 [32];
  undefined1 local_48 [32];
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_68;
  plVar1 = param_1 + 1;
  plVar2 = (longlong *)*plVar1;
  plVar6 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar6 = plVar1;
  }
  sVar3 = param_2[2];
  if ((ulonglong)param_2[3] < 0x10) {
    puVar5 = param_2;
  }
  else {
    puVar5 = (undefined8 *)*param_2;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar5,(void *)*plVar6,sVar3);
      if (iVar4 != 0) goto LAB_18017c140;
    }
    FUN_1800f2db0(*param_1,param_2,param_3);
  }
LAB_18017c140:
  puVar5 = (undefined8 *)FUN_180073a70(local_48,param_2,"_mode");
  plVar2 = (longlong *)*plVar1;
  plVar6 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar6 = plVar1;
  }
  sVar3 = puVar5[2];
  if ((ulonglong)puVar5[3] < 0x10) {
    _Buf1 = puVar5;
  }
  else {
    _Buf1 = (undefined8 *)*puVar5;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(_Buf1,(void *)*plVar6,sVar3);
      if (iVar4 != 0) goto LAB_18017c1a0;
    }
    FUN_1800f2db0(*param_1,puVar5,param_3 + 4);
  }
LAB_18017c1a0:
  FUN_18000f890(local_48);
  return;
}



/* ===== 18017c1d0 FUN_18017c1d0 ===== */

void FUN_18017c1d0(undefined8 *param_1,undefined8 *param_2,char *param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  int iVar3;
  size_t sVar4;
  undefined8 *_Buf1;
  char *_Str;
  longlong *plVar5;
  
  plVar1 = (longlong *)param_1[1];
  sVar4 = param_2[2];
  plVar5 = plVar1;
  if ((ulonglong)plVar1[3] < 0x10) {
    plVar5 = param_1 + 1;
  }
  if ((ulonglong)param_2[3] < 0x10) {
    _Buf1 = param_2;
  }
  else {
    _Buf1 = (undefined8 *)*param_2;
  }
  if (sVar4 == plVar1[2]) {
    if ((sVar4 != 0) && (iVar3 = memcmp(_Buf1,(void *)*plVar5,sVar4), iVar3 != 0)) {
      return;
    }
    uVar2 = *param_1;
    FUN_1800f2cb0(uVar2,param_2);
    _Str = "false";
    if (*param_3 != '\0') {
      _Str = "true";
    }
    sVar4 = strlen(_Str);
    FUN_1800134a0(uVar2,_Str,sVar4);
  }
  return;
}



/* ===== 18017c270 FUN_18017c270 ===== */

void FUN_18017c270(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  size_t _Size;
  int iVar2;
  undefined8 *_Buf1;
  longlong *plVar3;
  
  plVar1 = (longlong *)param_1[1];
  _Size = param_2[2];
  plVar3 = plVar1;
  if ((ulonglong)plVar1[3] < 0x10) {
    plVar3 = param_1 + 1;
  }
  if ((ulonglong)param_2[3] < 0x10) {
    _Buf1 = param_2;
  }
  else {
    _Buf1 = (undefined8 *)*param_2;
  }
  if (_Size == plVar1[2]) {
    if ((_Size != 0) && (iVar2 = memcmp(_Buf1,(void *)*plVar3,_Size), iVar2 != 0)) {
      return;
    }
    FUN_1800f2e20(*param_1,param_2,param_3);
  }
  return;
}



