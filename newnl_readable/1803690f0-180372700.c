/* ===== 1803690f0 FUN_1803690f0 ===== */

void FUN_1803690f0(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
                  char param_5)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  float fVar4;
  undefined4 uVar5;
  
  fVar4 = DAT_1808acb94;
  iVar1 = param_2[7];
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  uVar5 = param_2[8];
  param_1[6] = (float)iVar1;
  param_1[7] = uVar5;
  uVar2 = param_2[6];
  param_1[0xc] = param_3;
  param_1[0xd] = param_4;
  param_1[8] = (float)(uVar2 & 0xff) / fVar4;
  param_1[9] = (float)(uVar2 >> 8 & 0xff) / fVar4;
  param_1[10] = (float)(uVar2 >> 0x10 & 0xff) / fVar4;
  param_1[0xb] = (float)(uVar2 >> 0x18) / fVar4;
  if (param_5 == '\0') {
    uVar5 = 0;
  }
  else {
    uVar5 = DAT_1808ac34c;
  }
  uVar2 = param_2[0xb];
  uVar3 = param_2[9];
  param_1[0xe] = uVar5;
  param_1[0x10] = uVar3;
  param_1[0x11] = param_2[10];
  param_1[0x14] = (float)(uVar2 & 0xff) / fVar4;
  param_1[0x15] = (float)(uVar2 >> 8 & 0xff) / fVar4;
  param_1[0x16] = (float)(uVar2 >> 0x10 & 0xff) / fVar4;
  param_1[0x17] = (float)(uVar2 >> 0x18) / fVar4;
  return;
}



/* ===== 180369230 FUN_180369230 ===== */

void FUN_180369230(void)

{
  if (DAT_181107dd0 != (longlong *)0x0) {
    (**(code **)(*DAT_181107dd0 + 0x10))();
    DAT_181107dd0 = (longlong *)0x0;
  }
  if (DAT_181107dc8 != (longlong *)0x0) {
    (**(code **)(*DAT_181107dc8 + 0x10))();
    DAT_181107dc8 = (longlong *)0x0;
  }
  if (DAT_181107dc0 != (longlong *)0x0) {
    (**(code **)(*DAT_181107dc0 + 0x10))();
    DAT_181107dc0 = (longlong *)0x0;
  }
  if (DAT_181107db8 != (longlong *)0x0) {
    (**(code **)(*DAT_181107db8 + 0x10))();
    DAT_181107db8 = (longlong *)0x0;
  }
  if (DAT_181107dd8 != (longlong *)0x0) {
    (**(code **)(*DAT_181107dd8 + 0x10))();
    DAT_181107dd8 = (longlong *)0x0;
  }
  if (DAT_181107d80 != (longlong *)0x0) {
    (**(code **)(*DAT_181107d80 + 0x10))();
    DAT_181107d80 = (longlong *)0x0;
  }
  if (DAT_181107da8 != (longlong *)0x0) {
    (**(code **)(*DAT_181107da8 + 0x10))();
    DAT_181107da8 = (longlong *)0x0;
  }
  if (DAT_181107d88 != (longlong *)0x0) {
    (**(code **)(*DAT_181107d88 + 0x10))();
    DAT_181107d88 = (longlong *)0x0;
  }
  DAT_181107db0 = 0;
  return;
}



/* ===== 180369310 FUN_180369310 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_180369310(longlong *param_1)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_198 [32];
  char *local_178;
  undefined4 local_170;
  undefined *local_168;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined8 local_148;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  undefined1 local_114;
  undefined1 local_113 [235];
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_198;
  if ((DAT_181107db0 == param_1) && (DAT_181107da8 != 0)) {
    return 1;
  }
  if (DAT_180cd107d != '\0') {
    return 0;
  }
  FUN_180369230();
  local_168 = &DAT_1809f76a0;
  local_170 = 0x8000;
  local_178 = "vs_5_0";
  plVar5 = (longlong *)
           FUN_18036e5f0("\ncbuffer quad_constants : register(b0) {\n    float4 rect;      // min.x, min.y, max.x, max.y of the primitive\n    float4 params;    // rounding, size, kind, smoothing (neverlose\'s rect_smoothing)\n    float4 color;     // the shadow colour\n    float4 display;   // width, height, exact radius (inline primitives), 0\n    float4 extra;\n    float4 color2;\n};\n\nTexture2D blurred : register(t0);\nSamplerState linear_sampler : register(s0);\n\nstruct vs_output {\n    float4 position : SV_Position;\n    float2 pixel : TEXCOORD0;\n};\n\nvs_output vs_main(uint id : SV_VertexID) {\n    // Shadows, glows and the bar reach size / 2 past the shape; every kind 2 more pixels for the antialiased edge\n    // (|ddx d| + |ddy d| is up to 1.41 at a corner).\n    float reach = ((params.z < 1.5 || (params.z > 3.5 && params.z < 5.5)) ? params.y * 0.5 + length(extra.xy) : 0.0) + 2.0;\n    float2 corner = float2((id == 1 || id == 2 || id == 4) ? 1.0 : 0.0, (id == 2 || id == 4 || id == 5) ? 1.0 : 0.0);\n    float2 lo = rect.xy - reach;\n    float2 hi = rect.zw + reach;\n    float2 pixel = lerp(lo, hi, corner);\n    vs_output output;\n    output.pixel = pixel;\n    float2 ndc = pixel / display.xy * float2(2.0, -2.0) + float2(-1.0, 1.0);\n    output.position = float4(ndc, 0.0, 1.0);\n    return output;\n}\n\n// neverlose\'s rect distance (0xf3d2c0): a superellipse of exponent n = 2 + 3.6 * smoothing on the corners, the\n// radius divided by max(1 - 0.6 * smoothing, 0.01); smoothing 0 is the ordinary rounded rect.\nfloat rect_distance(float2 p, float2 half_size, float r, float smoothing) {\n    float n = 2.0 + 3.6 * smoothing;\n    float radius = r / max(1.0 - 0.6 * smoothing, 0.01);\n    float2 q = abs(p) - half_size + radius;\n    float2 m = max(q, 0.0);\n    float outer = pow(pow(m.x, n) + pow(m.y, n), 1.0 / n);\n    return outer + min(max(q.x, q.y), 0.0) - radius;\n}\n\nfloat4 ps_main(vs_output input) : SV_Target {\n    float2 half_size = (rect.zw - rect.xy) * 0.5;\n    float2 center = (rect.xy + rect.zw) * 0.5;\n    // ImGui\'s AddRectFilled clamps the rounding to half the size..." /* TRUNCATED STRING LITERAL */
                         ,0x16ae,"neverlose_sdf_shadow","vs_main");
  if (plVar5 == (longlong *)0x0) {
    DAT_180cd107d = 1;
    return 0;
  }
  local_168 = &DAT_1809f76a0;
  local_170 = 0x8000;
  local_178 = "ps_5_0";
  plVar6 = (longlong *)
           FUN_18036e5f0("\ncbuffer quad_constants : register(b0) {\n    float4 rect;      // min.x, min.y, max.x, max.y of the primitive\n    float4 params;    // rounding, size, kind, smoothing (neverlose\'s rect_smoothing)\n    float4 color;     // the shadow colour\n    float4 display;   // width, height, exact radius (inline primitives), 0\n    float4 extra;\n    float4 color2;\n};\n\nTexture2D blurred : register(t0);\nSamplerState linear_sampler : register(s0);\n\nstruct vs_output {\n    float4 position : SV_Position;\n    float2 pixel : TEXCOORD0;\n};\n\nvs_output vs_main(uint id : SV_VertexID) {\n    // Shadows, glows and the bar reach size / 2 past the shape; every kind 2 more pixels for the antialiased edge\n    // (|ddx d| + |ddy d| is up to 1.41 at a corner).\n    float reach = ((params.z < 1.5 || (params.z > 3.5 && params.z < 5.5)) ? params.y * 0.5 + length(extra.xy) : 0.0) + 2.0;\n    float2 corner = float2((id == 1 || id == 2 || id == 4) ? 1.0 : 0.0, (id == 2 || id == 4 || id == 5) ? 1.0 : 0.0);\n    float2 lo = rect.xy - reach;\n    float2 hi = rect.zw + reach;\n    float2 pixel = lerp(lo, hi, corner);\n    vs_output output;\n    output.pixel = pixel;\n    float2 ndc = pixel / display.xy * float2(2.0, -2.0) + float2(-1.0, 1.0);\n    output.position = float4(ndc, 0.0, 1.0);\n    return output;\n}\n\n// neverlose\'s rect distance (0xf3d2c0): a superellipse of exponent n = 2 + 3.6 * smoothing on the corners, the\n// radius divided by max(1 - 0.6 * smoothing, 0.01); smoothing 0 is the ordinary rounded rect.\nfloat rect_distance(float2 p, float2 half_size, float r, float smoothing) {\n    float n = 2.0 + 3.6 * smoothing;\n    float radius = r / max(1.0 - 0.6 * smoothing, 0.01);\n    float2 q = abs(p) - half_size + radius;\n    float2 m = max(q, 0.0);\n    float outer = pow(pow(m.x, n) + pow(m.y, n), 1.0 / n);\n    return outer + min(max(q.x, q.y), 0.0) - radius;\n}\n\nfloat4 ps_main(vs_output input) : SV_Target {\n    float2 half_size = (rect.zw - rect.xy) * 0.5;\n    float2 center = (rect.xy + rect.zw) * 0.5;\n    // ImGui\'s AddRectFilled clamps the rounding to half the size..." /* TRUNCATED STRING LITERAL */
                         ,0x16ae,"neverlose_sdf_shadow","ps_main");
  if (plVar6 == (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    DAT_180cd107d = 1;
    return 0;
  }
  lVar1 = *param_1;
  uVar7 = (**(code **)(*plVar5 + 0x20))();
  uVar8 = (**(code **)(*plVar5 + 0x18))(plVar5);
  local_178 = (char *)&DAT_181107d88;
  iVar4 = (**(code **)(lVar1 + 0x60))(param_1,uVar8,uVar7,0);
  if (-1 < iVar4) {
    lVar1 = *param_1;
    uVar7 = (**(code **)(*plVar6 + 0x20))(plVar6);
    uVar8 = (**(code **)(*plVar6 + 0x18))(plVar6);
    local_178 = (char *)&DAT_181107da8;
    iVar4 = (**(code **)(lVar1 + 0x78))(param_1,uVar8,uVar7,0);
    if (-1 < iVar4) {
      bVar2 = true;
      goto LAB_180369480;
    }
  }
  bVar2 = false;
LAB_180369480:
  (**(code **)(*plVar5 + 0x10))(plVar5);
  (**(code **)(*plVar6 + 0x10))(plVar6);
  local_148 = 0;
  local_158 = 0x60;
  local_154 = 2;
  local_150 = 4;
  local_14c = 0x10000;
  if ((bVar2) &&
     (iVar4 = (**(code **)(*param_1 + 0x18))(param_1,&local_158,0,&DAT_181107d80), -1 < iVar4)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  local_138 = 0;
  FUN_180540170(local_113,0,0xe3);
  local_128 = _DAT_1808ad6f0;
  uStack_120 = _UNK_1808ad6f8;
  local_130 = 1;
  local_12c = 5;
  local_118 = 1;
  local_114 = 0xf;
  if (((bVar2) &&
      (iVar4 = (**(code **)(*param_1 + 0xa0))(param_1,&local_138,&DAT_181107dd8), -1 < iVar4)) &&
     (cVar3 = FUN_18036e1f0(&DAT_181107db8,param_1), cVar3 != '\0')) {
    DAT_181107db0 = param_1;
    return 1;
  }
  FUN_180369230();
  DAT_180cd107d = 1;
  return 0;
}



/* ===== 1803695c0 FUN_1803695c0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1803695c0(void)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  bool bVar6;
  float in_XMM3_Da;
  float in_stack_00000028;
  undefined1 auStack_368 [32];
  float local_348;
  undefined8 **local_340;
  undefined8 local_338;
  undefined8 local_330;
  undefined8 *local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined4 local_2b8 [2];
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined4 local_240;
  undefined8 local_238;
  undefined4 local_230;
  undefined4 local_22c;
  undefined1 local_228 [384];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  lVar5 = DAT_181107a40;
  plVar1 = DAT_1811079f8;
  local_48 = DAT_180919500 ^ (ulonglong)auStack_368;
  if (DAT_181107de0 != DAT_181107de8) {
    if ((((DAT_1811079e0 == 0) || (DAT_1811079f8 == (longlong *)0x0)) || (DAT_181107a40 == 0)) ||
       (((in_XMM3_Da <= 0.0 || (in_stack_00000028 <= 0.0)) ||
        (cVar3 = FUN_180369310(), cVar3 == '\0')))) {
      bVar6 = DAT_181107de0 == DAT_181107de8;
    }
    else {
      local_2a8 = 0;
      uStack_2a0 = 0;
      local_2b8[0] = 0;
      local_2b0 = 0;
      local_258 = 0;
      local_240 = 0;
      local_238 = 0;
      local_230 = 0;
      local_298 = 0;
      uStack_290 = 0;
      local_288 = 0;
      uStack_280 = 0;
      local_278 = 0;
      uStack_270 = 0;
      local_268 = 0;
      uStack_260 = 0;
      local_250 = 0;
      uStack_248 = 0;
      local_22c = 0x10;
      FUN_180540170(local_228,0,0x180);
      local_68 = 0;
      local_a8 = 0;
      uStack_a0 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_78 = 0;
      uStack_70 = 0;
      FUN_18036dda0(local_2b8,plVar1);
      local_330 = DAT_181107d80;
      local_338 = DAT_181107da8;
      local_340 = DAT_181107d88;
      local_348 = in_stack_00000028;
      FUN_18036e3d0(&DAT_181107db8,plVar1,lVar5,in_XMM3_Da);
      (**(code **)(*plVar1 + 0x38))(plVar1,0,1,&DAT_181107d80);
      local_58 = 0;
      uStack_50 = 0;
      (**(code **)(*plVar1 + 0x118))(plVar1,DAT_181107dd8,&local_58,0xffffffff);
      lVar2 = DAT_181107de8;
      for (lVar5 = DAT_181107de0; lVar5 != lVar2; lVar5 = lVar5 + 0x30) {
        local_340 = &local_328;
        local_348 = 0.0;
        local_328 = (undefined8 *)0x0;
        uStack_320 = 0;
        iVar4 = (**(code **)(*plVar1 + 0x70))(plVar1,DAT_181107d80,0,4);
        if (-1 < iVar4) {
          local_348 = (float)((uint)local_348 & 0xffffff00);
          local_318 = 0;
          uStack_310 = 0;
          local_308 = 0;
          uStack_300 = 0;
          local_2f8 = 0;
          uStack_2f0 = 0;
          local_2e8 = 0;
          uStack_2e0 = 0;
          local_2d8 = 0;
          uStack_2d0 = 0;
          local_2c8 = 0;
          uStack_2c0 = 0;
          FUN_1803690f0(&local_318,lVar5,in_XMM3_Da,in_stack_00000028);
          *local_328 = local_318;
          local_328[1] = uStack_310;
          local_328[2] = local_308;
          local_328[3] = uStack_300;
          local_328[4] = local_2f8;
          local_328[5] = uStack_2f0;
          local_328[6] = local_2e8;
          local_328[7] = uStack_2e0;
          *(undefined4 *)(local_328 + 8) = (undefined4)local_2d8;
          *(undefined4 *)((longlong)local_328 + 0x44) = local_2d8._4_4_;
          *(undefined4 *)(local_328 + 9) = (undefined4)uStack_2d0;
          *(undefined4 *)((longlong)local_328 + 0x4c) = uStack_2d0._4_4_;
          *(undefined4 *)(local_328 + 10) = (undefined4)local_2c8;
          *(undefined4 *)((longlong)local_328 + 0x54) = local_2c8._4_4_;
          *(undefined4 *)(local_328 + 0xb) = (undefined4)uStack_2c0;
          *(undefined4 *)((longlong)local_328 + 0x5c) = uStack_2c0._4_4_;
          (**(code **)(*plVar1 + 0x78))(plVar1,DAT_181107d80);
          (**(code **)(*plVar1 + 0x68))(plVar1,6);
        }
      }
      FUN_18036df30(local_2b8,plVar1);
      bVar6 = DAT_181107de0 == DAT_181107de8;
    }
    if (!bVar6) {
      DAT_181107de8 = DAT_181107de0;
    }
  }
  return;
}



/* ===== 180369900 FUN_180369900 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180369900(undefined8 param_1,float *param_2)

{
  char cVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  undefined4 *puVar7;
  longlong lVar8;
  undefined4 *puVar9;
  float *pfVar10;
  float *pfVar11;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined8 **local_e0;
  longlong local_d8;
  undefined8 *local_d0;
  undefined8 uStack_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
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
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  plVar4 = DAT_1811079f8;
  local_38 = DAT_180919500 ^ (ulonglong)auStack_108;
  uVar2 = *(ulonglong *)(param_2 + 0xe);
  if ((uVar2 != 0) &&
     (uVar2 <= (ulonglong)((DAT_181107d98 - DAT_181107d90 >> 4) * -0x5555555555555555))) {
    lVar3 = **(longlong **)(DAT_180ca0a50 + 0x2058);
    cVar1 = *(char *)(lVar3 + 0x60);
    lVar8 = lVar3 + 0x60;
    if (cVar1 == '\0') {
      lVar8 = 0;
    }
    if ((((DAT_1811079f8 != (longlong *)0x0) && (DAT_1811079e0 != 0)) && (lVar8 != 0)) &&
       (cVar5 = FUN_180369310(DAT_1811079e0), lVar8 = DAT_181107d90, cVar5 != '\0')) {
      local_e0 = &local_d0;
      local_d0 = (undefined8 *)0x0;
      uStack_c8 = 0;
      local_e8 = 0;
      iVar6 = (**(code **)(*plVar4 + 0x70))(plVar4,DAT_181107d80,0,4);
      if (-1 < iVar6) {
        local_e8 = CONCAT31(local_e8._1_3_,1);
        puVar9 = (undefined4 *)(lVar3 + 0x8c);
        puVar7 = (undefined4 *)(lVar3 + 0x88);
        if (cVar1 == '\0') {
          puVar9 = (undefined4 *)&DAT_0000002c;
          puVar7 = (undefined4 *)&DAT_00000028;
        }
        local_b8 = 0;
        uStack_b0 = 0;
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
        FUN_1803690f0(&local_b8,lVar8 + -0x30 + uVar2 * 0x30,*puVar7,*puVar9);
        *local_d0 = local_b8;
        local_d0[1] = uStack_b0;
        local_d0[2] = local_a8;
        local_d0[3] = uStack_a0;
        local_d0[4] = local_98;
        local_d0[5] = uStack_90;
        local_d0[6] = local_88;
        local_d0[7] = uStack_80;
        *(undefined4 *)(local_d0 + 8) = (undefined4)local_78;
        *(undefined4 *)((longlong)local_d0 + 0x44) = local_78._4_4_;
        *(undefined4 *)(local_d0 + 9) = (undefined4)uStack_70;
        *(undefined4 *)((longlong)local_d0 + 0x4c) = uStack_70._4_4_;
        *(undefined4 *)(local_d0 + 10) = (undefined4)local_68;
        *(undefined4 *)((longlong)local_d0 + 0x54) = local_68._4_4_;
        *(undefined4 *)(local_d0 + 0xb) = (undefined4)uStack_60;
        *(undefined4 *)((longlong)local_d0 + 0x5c) = uStack_60._4_4_;
        (**(code **)(*plVar4 + 0x78))(plVar4,DAT_181107d80,0);
        pfVar11 = (float *)(lVar3 + 0x80);
        pfVar10 = (float *)(lVar3 + 0x84);
        if (cVar1 == '\0') {
          pfVar11 = (float *)&DAT_00000020;
        }
        local_58 = (int)(*param_2 - *pfVar11);
        if (cVar1 == '\0') {
          pfVar10 = (float *)&DAT_00000024;
        }
        local_54 = (int)(param_2[1] - *pfVar10);
        local_50 = (int)(param_2[2] - *pfVar11);
        local_4c = (int)(param_2[3] - *pfVar10);
        (**(code **)(*plVar4 + 0x168))(plVar4,1,&local_58);
        local_48 = 0;
        uStack_40 = 0;
        (**(code **)(*plVar4 + 0x118))(plVar4,DAT_181107dd8,&local_48,0xffffffff);
        (**(code **)(*plVar4 + 0x88))(plVar4,0);
        (**(code **)(*plVar4 + 0xc0))(plVar4,4);
        (**(code **)(*plVar4 + 0x58))(plVar4,DAT_181107d88,0,0);
        (**(code **)(*plVar4 + 0x38))(plVar4,0,1,&DAT_181107d80);
        (**(code **)(*plVar4 + 0x48))(plVar4,DAT_181107da8,0,0);
        (**(code **)(*plVar4 + 0x80))(plVar4,0,1,&DAT_181107d80);
        (**(code **)(*plVar4 + 0x50))(plVar4,0,1,&DAT_181107dd0);
        if (*(int *)(uVar2 * 0x30 + -0x14 + lVar8) == 3) {
          if (DAT_180cd0fdd == '\0') {
            return;
          }
          if (DAT_181107cd8 == 0) {
            return;
          }
          local_d8 = DAT_181107cd8;
          (**(code **)(*plVar4 + 0x40))(plVar4,0,1,&local_d8);
        }
        (**(code **)(*plVar4 + 0x68))(plVar4,6,0);
      }
    }
  }
  return;
}



/* ===== 180369c70 FUN_180369c70 ===== */

/* WARNING: Removing unreachable block (ram,0x000180369da3) */
/* WARNING: Removing unreachable block (ram,0x000180369db0) */
/* WARNING: Removing unreachable block (ram,0x000180369dba) */

void FUN_180369c70(int *param_1,float *param_2,float *param_3,float param_4,float param_5,
                  float param_6,float param_7,uint param_8)

{
  float *pfVar1;
  longlong lVar2;
  longlong lVar3;
  float local_38;
  float fStack_34;
  undefined8 local_30;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  uint local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  pfVar1 = DAT_181107d98;
  if (((((param_1 != (int *)0x0) && (*param_2 < *param_3)) && (param_2[1] < param_3[1])) &&
      (0xffffff < (uint)param_6)) && ((1 < (int)param_7 || (0.0 < param_5)))) {
    local_38 = *param_2;
    fStack_34 = param_2[1];
    local_30 = *(undefined8 *)param_3;
    fStack_24 = param_5;
    local_18 = param_8;
    fStack_20 = param_6;
    fStack_1c = param_7;
    uStack_14 = 0;
    uStack_10 = 0;
    uStack_c = 0;
    local_28 = param_4;
    if (DAT_181107d98 == DAT_181107da0) {
      FUN_180352090(&DAT_181107d90,DAT_181107d98,&local_38);
    }
    else {
      *DAT_181107d98 = local_38;
      pfVar1[1] = fStack_34;
      pfVar1[2] = (float)local_30;
      pfVar1[3] = (float)((ulonglong)local_30 >> 0x20);
      pfVar1[4] = param_4;
      pfVar1[5] = param_5;
      pfVar1[6] = param_6;
      pfVar1[7] = param_7;
      *(ulonglong *)(pfVar1 + 8) = (ulonglong)param_8;
      pfVar1[10] = 0.0;
      pfVar1[0xb] = 0.0;
      DAT_181107d98 = DAT_181107d98 + 0xc;
    }
    lVar3 = (longlong)DAT_181107d98 - DAT_181107d90;
    lVar2 = *(longlong *)(param_1 + 2) + ((longlong)*param_1 + -1) * 0x48;
    if (*(int *)(*(longlong *)(param_1 + 2) + 0x28 + ((longlong)*param_1 + -1) * 0x48) != 0) {
      FUN_1803fbe60(param_1);
      lVar2 = *(longlong *)(param_1 + 2) + (longlong)(*param_1 + -1) * 0x48;
    }
    *(code **)(lVar2 + 0x30) = FUN_180369900;
    *(longlong *)(lVar2 + 0x38) = (lVar3 >> 4) * -0x5555555555555555;
    *(undefined4 *)(lVar2 + 0x40) = 0;
    *(undefined4 *)(lVar2 + 0x44) = 0xffffffff;
    FUN_1803fbe60(param_1);
    lVar2 = -8;
    if ((*(longlong *)(*(longlong *)(param_1 + 0xe) + 0x68) != 0) &&
       (lVar3 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0xe) + 0x68) + 0xc60),
       lVar3 != 0)) {
      lVar2 = lVar3;
    }
    lVar3 = *(longlong *)(param_1 + 2) + ((longlong)*param_1 + -1) * 0x48;
    if (*(int *)(*(longlong *)(param_1 + 2) + 0x28 + ((longlong)*param_1 + -1) * 0x48) != 0) {
      FUN_1803fbe60(param_1);
      lVar3 = *(longlong *)(param_1 + 2) + (longlong)(*param_1 + -1) * 0x48;
    }
    *(longlong *)(lVar3 + 0x30) = lVar2;
    *(undefined8 *)(lVar3 + 0x38) = 0;
    *(undefined4 *)(lVar3 + 0x40) = 0;
    *(undefined4 *)(lVar3 + 0x44) = 0xffffffff;
    FUN_1803fbe60(param_1);
  }
  return;
}



/* ===== 180369e90 FUN_180369e90 ===== */

/* WARNING: Removing unreachable block (ram,0x000180369fb9) */
/* WARNING: Removing unreachable block (ram,0x000180369fc6) */
/* WARNING: Removing unreachable block (ram,0x000180369fd0) */

void FUN_180369e90(int *param_1,float *param_2,float *param_3,undefined4 param_4,float param_5,
                  uint param_6,longlong *param_7)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  float fStack_24;
  uint uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  uint uStack_10;
  undefined4 uStack_c;
  
  puVar1 = DAT_181107d98;
  if ((((param_1 != (int *)0x0) && (*param_2 < *param_3)) && (param_2[1] < param_3[1])) &&
     ((0xffffff < param_6 && (0.0 < param_5)))) {
    local_38 = *(undefined8 *)param_2;
    local_30 = *(undefined8 *)param_3;
    uStack_20 = param_6;
    fStack_24 = param_5;
    lVar2 = *param_7;
    uStack_14 = (undefined4)lVar2;
    uStack_10 = (uint)((ulonglong)lVar2 >> 0x20);
    uStack_1c = 5;
    uStack_18 = 0;
    uStack_c = 0;
    local_28 = param_4;
    if (DAT_181107d98 == DAT_181107da0) {
      FUN_180352090(&DAT_181107d90,DAT_181107d98,&local_38);
    }
    else {
      *DAT_181107d98 = local_38;
      puVar1[1] = local_30;
      *(undefined4 *)(puVar1 + 2) = param_4;
      *(float *)((longlong)puVar1 + 0x14) = param_5;
      *(uint *)(puVar1 + 3) = param_6;
      *(undefined4 *)((longlong)puVar1 + 0x1c) = 5;
      puVar1[4] = lVar2 << 0x20;
      puVar1[5] = (ulonglong)uStack_10;
      DAT_181107d98 = DAT_181107d98 + 6;
    }
    lVar3 = (longlong)DAT_181107d98 - DAT_181107d90;
    lVar2 = *(longlong *)(param_1 + 2) + ((longlong)*param_1 + -1) * 0x48;
    if (*(int *)(*(longlong *)(param_1 + 2) + 0x28 + ((longlong)*param_1 + -1) * 0x48) != 0) {
      FUN_1803fbe60(param_1);
      lVar2 = *(longlong *)(param_1 + 2) + (longlong)(*param_1 + -1) * 0x48;
    }
    *(code **)(lVar2 + 0x30) = FUN_180369900;
    *(longlong *)(lVar2 + 0x38) = (lVar3 >> 4) * -0x5555555555555555;
    *(undefined4 *)(lVar2 + 0x40) = 0;
    *(undefined4 *)(lVar2 + 0x44) = 0xffffffff;
    FUN_1803fbe60(param_1);
    lVar2 = -8;
    if ((*(longlong *)(*(longlong *)(param_1 + 0xe) + 0x68) != 0) &&
       (lVar3 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0xe) + 0x68) + 0xc60),
       lVar3 != 0)) {
      lVar2 = lVar3;
    }
    lVar3 = *(longlong *)(param_1 + 2) + ((longlong)*param_1 + -1) * 0x48;
    if (*(int *)(*(longlong *)(param_1 + 2) + 0x28 + ((longlong)*param_1 + -1) * 0x48) != 0) {
      FUN_1803fbe60(param_1);
      lVar3 = *(longlong *)(param_1 + 2) + (longlong)(*param_1 + -1) * 0x48;
    }
    *(longlong *)(lVar3 + 0x30) = lVar2;
    *(undefined8 *)(lVar3 + 0x38) = 0;
    *(undefined4 *)(lVar3 + 0x40) = 0;
    *(undefined4 *)(lVar3 + 0x44) = 0xffffffff;
    FUN_1803fbe60(param_1);
  }
  return;
}



/* ===== 18036a0b0 FUN_18036a0b0 ===== */

/* WARNING: Removing unreachable block (ram,0x00018036a1e2) */
/* WARNING: Removing unreachable block (ram,0x00018036a1ef) */
/* WARNING: Removing unreachable block (ram,0x00018036a1f9) */

void FUN_18036a0b0(int *param_1,float *param_2,float *param_3,float param_4,float param_5,
                  float param_6,uint param_7)

{
  float *pfVar1;
  longlong lVar2;
  longlong lVar3;
  float local_38;
  float fStack_34;
  undefined8 local_30;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  undefined8 local_18;
  undefined4 uStack_10;
  uint uStack_c;
  
  pfVar1 = DAT_181107d98;
  if ((((param_1 != (int *)0x0) && (*param_2 < *param_3)) && (param_2[1] < param_3[1])) &&
     (0xffffff < (uint)param_5)) {
    if ((param_6 <= 0.0) || (fStack_1c = 8.40779e-45, param_7 < 0x1000000)) {
      fStack_1c = 2.8026e-45;
    }
    local_38 = *param_2;
    fStack_34 = param_2[1];
    local_30 = *(undefined8 *)param_3;
    fStack_24 = param_6;
    fStack_20 = param_5;
    local_18 = 0;
    uStack_10 = 0;
    uStack_c = param_7;
    local_28 = param_4;
    if (DAT_181107d98 == DAT_181107da0) {
      FUN_180352090(&DAT_181107d90,DAT_181107d98,&local_38);
    }
    else {
      *DAT_181107d98 = local_38;
      pfVar1[1] = fStack_34;
      pfVar1[2] = (float)local_30;
      pfVar1[3] = (float)((ulonglong)local_30 >> 0x20);
      pfVar1[4] = param_4;
      pfVar1[5] = param_6;
      pfVar1[6] = param_5;
      pfVar1[7] = fStack_1c;
      pfVar1[8] = 0.0;
      pfVar1[9] = 0.0;
      *(ulonglong *)(pfVar1 + 10) = (ulonglong)param_7 << 0x20;
      DAT_181107d98 = DAT_181107d98 + 0xc;
    }
    lVar3 = (longlong)DAT_181107d98 - DAT_181107d90;
    lVar2 = *(longlong *)(param_1 + 2) + ((longlong)*param_1 + -1) * 0x48;
    if (*(int *)(*(longlong *)(param_1 + 2) + 0x28 + ((longlong)*param_1 + -1) * 0x48) != 0) {
      FUN_1803fbe60(param_1);
      lVar2 = *(longlong *)(param_1 + 2) + (longlong)(*param_1 + -1) * 0x48;
    }
    *(code **)(lVar2 + 0x30) = FUN_180369900;
    *(longlong *)(lVar2 + 0x38) = (lVar3 >> 4) * -0x5555555555555555;
    *(undefined4 *)(lVar2 + 0x40) = 0;
    *(undefined4 *)(lVar2 + 0x44) = 0xffffffff;
    FUN_1803fbe60(param_1);
    lVar2 = -8;
    if ((*(longlong *)(*(longlong *)(param_1 + 0xe) + 0x68) != 0) &&
       (lVar3 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0xe) + 0x68) + 0xc60),
       lVar3 != 0)) {
      lVar2 = lVar3;
    }
    lVar3 = *(longlong *)(param_1 + 2) + ((longlong)*param_1 + -1) * 0x48;
    if (*(int *)(*(longlong *)(param_1 + 2) + 0x28 + ((longlong)*param_1 + -1) * 0x48) != 0) {
      FUN_1803fbe60(param_1);
      lVar3 = *(longlong *)(param_1 + 2) + (longlong)(*param_1 + -1) * 0x48;
    }
    *(longlong *)(lVar3 + 0x30) = lVar2;
    *(undefined8 *)(lVar3 + 0x38) = 0;
    *(undefined4 *)(lVar3 + 0x40) = 0;
    *(undefined4 *)(lVar3 + 0x44) = 0xffffffff;
    FUN_1803fbe60(param_1);
  }
  return;
}



/* ===== 18036a2d0 FUN_18036a2d0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_18036a2d0(float *param_1,float *param_2,float *param_3,float *param_4,float param_5,
                     float param_6,float param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  float *pfVar6;
  bool bVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_res8 [2];
  float local_res10 [2];
  
  fVar4 = param_7;
  fVar9 = param_6;
  fVar11 = DAT_1808ac34c;
  bVar7 = DAT_180cd0fd8 == '\0';
  param_1[0] = 0.0;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  param_1[3] = 0.0;
  param_1[4] = 0.0;
  param_1[5] = 0.0;
  param_1[6] = 0.0;
  param_1[7] = 0.0;
  param_1[8] = 2.0;
  param_1[9] = 1.0;
  param_1[10] = 0.0;
  param_1[0xb] = 0.0;
  param_1[0xc] = 0.0;
  fVar3 = DAT_1808ac21c;
  fVar8 = DAT_1808ac1f4;
  fVar10 = DAT_1808ac000;
  param_1[0xd] = 0.0;
  if ((bVar7) || (fVar12 = DAT_1809f7440, DAT_1809f7440 <= 0.0)) {
    fVar12 = fVar11;
  }
  param_1[9] = fVar11 / fVar12;
  fVar1 = param_2[1];
  fVar2 = param_3[1];
  *param_1 = (*param_2 + *param_3) * fVar8;
  param_1[1] = (fVar1 + fVar2) * fVar8;
  *(ulonglong *)(param_1 + 2) =
       CONCAT44(((float)((ulonglong)*(undefined8 *)param_3 >> 0x20) -
                (float)((ulonglong)*(undefined8 *)param_2 >> 0x20)) * _UNK_1808ad9f4,
                ((float)*(undefined8 *)param_3 - (float)*(undefined8 *)param_2) * _DAT_1808ad9f0);
  fVar11 = fVar11 - param_5 * fVar3;
  param_1[8] = param_5 * _DAT_1808ac6d0 + DAT_1808ac540;
  fVar8 = *param_4;
  if (fVar10 <= fVar11) {
    fVar10 = fVar11;
  }
  fVar11 = fVar8 / fVar10 + param_6;
  param_1[4] = fVar11;
  if (fVar8 <= 0.0) {
    fVar8 = 1.4013e-45;
  }
  else {
    local_res10[0] = 8.96831e-44;
    fVar8 = 0.0;
    if (0.0 <= fVar11) {
      fVar8 = fVar11;
    }
    param_5 = 1.12104e-44;
    fVar8 = (float)FUN_18053ef70((fVar8 + param_7) * fVar12 * fVar3);
    local_res8[0] = (float)((int)fVar8 + 6);
    pfVar6 = &param_5;
    if (7 < (int)local_res8[0]) {
      pfVar6 = local_res8;
    }
    pfVar5 = local_res10;
    if ((int)local_res8[0] < 0x41) {
      pfVar5 = pfVar6;
    }
    fVar8 = *pfVar5;
  }
  fVar11 = param_4[1];
  param_1[10] = fVar8;
  fVar8 = fVar11 / fVar10 + fVar9;
  param_1[5] = fVar8;
  if (fVar11 <= 0.0) {
    fVar8 = 1.4013e-45;
  }
  else {
    local_res10[0] = 8.96831e-44;
    fVar11 = 0.0;
    if (0.0 <= fVar8) {
      fVar11 = fVar8;
    }
    param_5 = 1.12104e-44;
    fVar8 = (float)FUN_18053ef70((fVar11 + fVar4) * fVar12 * fVar3);
    local_res8[0] = (float)((int)fVar8 + 6);
    pfVar6 = &param_5;
    if (7 < (int)local_res8[0]) {
      pfVar6 = local_res8;
    }
    pfVar5 = local_res10;
    if ((int)local_res8[0] < 0x41) {
      pfVar5 = pfVar6;
    }
    fVar8 = *pfVar5;
  }
  fVar11 = param_4[2];
  param_1[0xb] = fVar8;
  fVar8 = fVar11 / fVar10 + fVar9;
  param_1[6] = fVar8;
  if (fVar11 <= 0.0) {
    fVar8 = 1.4013e-45;
  }
  else {
    local_res10[0] = 8.96831e-44;
    fVar11 = 0.0;
    if (0.0 <= fVar8) {
      fVar11 = fVar8;
    }
    param_5 = 1.12104e-44;
    fVar8 = (float)FUN_18053ef70((fVar11 + fVar4) * fVar12 * fVar3);
    local_res8[0] = (float)((int)fVar8 + 6);
    pfVar6 = &param_5;
    if (7 < (int)local_res8[0]) {
      pfVar6 = local_res8;
    }
    pfVar5 = local_res10;
    if ((int)local_res8[0] < 0x41) {
      pfVar5 = pfVar6;
    }
    fVar8 = *pfVar5;
  }
  fVar11 = param_4[3];
  param_1[0xc] = fVar8;
  fVar9 = fVar11 / fVar10 + fVar9;
  param_1[7] = fVar9;
  if (fVar11 <= 0.0) {
    param_1[0xd] = 1.4013e-45;
  }
  else {
    fVar10 = 0.0;
    if (0.0 <= fVar9) {
      fVar10 = fVar9;
    }
    local_res10[0] = 8.96831e-44;
    param_5 = 1.12104e-44;
    fVar10 = (float)FUN_18053ef70((fVar10 + fVar4) * fVar12 * fVar3);
    local_res8[0] = (float)((int)fVar10 + 6);
    pfVar6 = &param_5;
    if (7 < (int)local_res8[0]) {
      pfVar6 = local_res8;
    }
    pfVar5 = local_res10;
    if ((int)local_res8[0] < 0x41) {
      pfVar5 = pfVar6;
    }
    param_1[0xd] = *pfVar5;
  }
  return param_1;
}



/* ===== 18036a5f0 FUN_18036a5f0 ===== */

void FUN_18036a5f0(float *param_1,int param_2,float param_3,float param_4,char param_5,
                  float *param_6,longlong *param_7)

{
  longlong *plVar1;
  float fVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float local_res8 [4];
  float local_res18;
  float local_res20;
  
  plVar5 = param_7;
  fVar14 = DAT_1808ac440;
  fVar2 = DAT_1808ac34c;
  iVar8 = 4;
  fVar17 = 0.0;
  lVar10 = (longlong)param_2;
  param_7._0_4_ = param_1[lVar10 + 10];
  fVar19 = param_1[2] - param_1[lVar10 + 4];
  local_res8[2] = param_1[3] - param_1[lVar10 + 4];
  local_res18 = param_3;
  local_res20 = param_4;
  if (local_res8[2] < 0.0) {
    iVar9 = 4;
    fVar18 = (float)((uint)local_res8[2] ^ DAT_1808adec0);
    do {
      fVar12 = (float)FUN_180517200(fVar17);
      fVar13 = (float)FUN_180517790(fVar17);
      fVar17 = 0.0;
      if (0.0 <= fVar12) {
        fVar17 = fVar12;
      }
      fVar12 = (float)FUN_18051afb0(fVar17);
      fVar17 = 0.0;
      if (0.0 <= fVar13) {
        fVar17 = fVar13;
      }
      fVar17 = (float)FUN_18051afb0(fVar17);
      fVar17 = (fVar12 + fVar17) * param_1[9] * *param_6 + param_1[lVar10 + 4] + param_6[1];
      if ((fVar17 <= 0.0) || (fVar2 <= fVar18 / fVar17)) {
        fVar17 = DAT_1808ac440;
      }
      else {
        fVar12 = (float)FUN_18051afb0();
        fVar17 = fVar2;
        if (fVar12 <= fVar2) {
          fVar17 = fVar12;
        }
        fVar17 = (float)FUN_18051acf0(fVar17);
      }
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  if (fVar19 < 0.0) {
    fVar18 = (float)((uint)fVar19 ^ DAT_1808adec0);
    fVar14 = DAT_1808ac440;
    do {
      fVar12 = (float)FUN_180517200(fVar14);
      fVar13 = (float)FUN_180517790(fVar14);
      fVar14 = 0.0;
      if (0.0 <= fVar12) {
        fVar14 = fVar12;
      }
      fVar12 = (float)FUN_18051afb0(fVar14);
      fVar14 = 0.0;
      if (0.0 <= fVar13) {
        fVar14 = fVar13;
      }
      fVar14 = (float)FUN_18051afb0(fVar14);
      fVar14 = (fVar12 + fVar14) * param_1[9] * *param_6 + param_1[lVar10 + 4] + param_6[1];
      if ((fVar14 <= 0.0) || (fVar2 <= fVar18 / fVar14)) {
        fVar14 = 0.0;
      }
      else {
        fVar12 = (float)FUN_18051afb0();
        fVar14 = fVar2;
        if (fVar12 <= fVar2) {
          fVar14 = fVar12;
        }
        fVar14 = (float)FUN_18053eb30(fVar14);
      }
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  fVar2 = local_res8[2];
  if (fVar14 < fVar17) {
    fVar14 = (fVar14 + fVar17) * DAT_1808ac1f4;
    fVar17 = fVar14;
  }
  lVar3 = plVar5[1];
  lVar4 = *plVar5;
  uVar11 = lVar3 - lVar4 >> 3;
  if (0.0 <= local_res8[2]) {
    fVar12 = (float)FUN_180517200(0);
    fVar13 = (float)FUN_180517790(0);
    fVar18 = 0.0;
    if (0.0 <= fVar12) {
      fVar18 = fVar12;
    }
    fVar12 = (float)FUN_18051afb0(fVar18);
    fVar18 = 0.0;
    if (0.0 <= fVar13) {
      fVar18 = fVar13;
    }
    fVar18 = (float)FUN_18051afb0(fVar18);
    local_res8[1] = 0.0;
    local_res8[0] =
         (fVar12 + fVar18) * param_1[9] * *param_6 + param_1[lVar10 + 4] + param_6[1] + fVar19;
    FUN_18008b8c0(plVar5,local_res8);
    FUN_180066e60(plVar5 + 3,param_1 + 9);
  }
  fVar18 = param_7._0_4_;
  plVar1 = plVar5 + 3;
  iVar8 = 0;
  if (-1 < (int)param_7._0_4_) {
    local_res8[0] = (float)(int)param_7._0_4_;
    do {
      fVar16 = ((fVar14 - fVar17) * (float)iVar8) / local_res8[0] + fVar17;
      fVar13 = (float)FUN_180517200(fVar16);
      fVar12 = 0.0;
      if (0.0 <= fVar13) {
        fVar12 = fVar13;
      }
      fVar16 = (float)FUN_180517790(fVar16);
      fVar13 = 0.0;
      if (0.0 <= fVar16) {
        fVar13 = fVar16;
      }
      fVar16 = (float)FUN_18051afb0(fVar13);
      fVar15 = (float)FUN_18051afb0(fVar12);
      fVar16 = (fVar15 + fVar16) * param_1[9] * *param_6 + param_1[lVar10 + 4] + param_6[1];
      if (0.0 < fVar16) {
        fVar15 = (float)FUN_18051afb0(fVar12);
        param_7._0_4_ = fVar15 * fVar16 + fVar19;
        fVar15 = (float)FUN_18051afb0(fVar13);
        fVar16 = fVar15 * fVar16;
      }
      else {
        param_7._0_4_ = fVar16 + fVar19;
      }
      param_7._4_4_ = fVar16 + fVar2;
      FUN_18008b8c0(plVar5,&param_7);
      fVar12 = (float)FUN_18051afb0(fVar12);
      fVar13 = (float)FUN_18051afb0(fVar13);
      local_res8[2] = (fVar12 + fVar13) * param_1[9];
      FUN_180066e60(plVar1,local_res8 + 2);
      iVar8 = iVar8 + 1;
    } while (iVar8 <= (int)fVar18);
  }
  fVar14 = DAT_1808ac440;
  if (0.0 <= fVar19) {
    param_7._0_4_ = 0.0;
    fVar19 = (float)FUN_180517790(DAT_1808ac440);
    fVar17 = 0.0;
    if (0.0 <= fVar19) {
      fVar17 = fVar19;
    }
    fVar17 = (float)FUN_18051afb0(fVar17);
    fVar19 = (float)FUN_180517200(fVar14);
    fVar14 = 0.0;
    if (0.0 <= fVar19) {
      fVar14 = fVar19;
    }
    fVar14 = (float)FUN_18051afb0(fVar14);
    param_7._4_4_ =
         (fVar14 + fVar17) * param_1[9] * *param_6 + param_1[lVar10 + 4] + param_6[1] + fVar2;
    FUN_18008b8c0(plVar5,&param_7);
    FUN_180066e60(plVar1,param_1 + 9);
  }
  lVar10 = plVar5[1];
  lVar6 = *plVar5;
  if (uVar11 < (ulonglong)(lVar10 - lVar6 >> 3)) {
    uVar7 = uVar11;
    do {
      fVar2 = param_1[1];
      *(float *)(lVar6 + uVar7 * 8) = local_res18 * *(float *)(lVar6 + uVar7 * 8) + *param_1;
      *(float *)(lVar6 + 4 + uVar7 * 8) = local_res20 * *(float *)(lVar6 + 4 + uVar7 * 8) + fVar2;
      uVar7 = uVar7 + 1;
      lVar10 = plVar5[1];
      lVar6 = *plVar5;
    } while (uVar7 < (ulonglong)(lVar10 - lVar6 >> 3));
  }
  if (param_5 != '\0') {
    FUN_1804e9fc0(lVar6 + (lVar3 - lVar4 & 0xfffffffffffffff8U),lVar10);
    FUN_1804e9ee0(*plVar1 + uVar11 * 4,plVar5[4]);
  }
  return;
}



/* ===== 18036ad00 FUN_18036ad00 ===== */

void FUN_18036ad00(undefined8 param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  uint uVar5;
  ulonglong uVar6;
  
  if ((int)(DAT_181107e18 - DAT_181107e10 >> 4) * -0x55555555 < param_3) {
    FUN_18036d330(0xaaaaaaaaaaaaaaab,(longlong)param_3);
  }
  uVar3 = DAT_1808acda0;
  uVar2 = DAT_1808ac34c;
  uVar6 = 0;
  if (0 < param_3) {
    do {
      lVar1 = param_2 + uVar6 * 8;
      plVar4 = (longlong *)(uVar6 * 0x30 + DAT_181107e10);
      if (*plVar4 != plVar4[1]) {
        plVar4[1] = *plVar4;
      }
      if (plVar4[3] != plVar4[4]) {
        plVar4[4] = plVar4[3];
      }
      FUN_18036a5f0(param_1,2,uVar2,uVar2,0,lVar1,plVar4);
      FUN_18036a5f0(param_1,3,uVar3,uVar2,1,lVar1,plVar4);
      FUN_18036a5f0(param_1,0,uVar3,uVar3,0,lVar1,plVar4);
      FUN_18036a5f0(param_1,1,uVar2,uVar3,1,lVar1,plVar4);
      uVar5 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar5;
    } while ((int)uVar5 < param_3);
  }
  return;
}



/* ===== 18036ae70 FUN_18036ae70 ===== */

void FUN_18036ae70(longlong param_1,int param_2,char param_3,uint param_4,char *param_5)

{
  longlong *plVar1;
  float fVar2;
  float fVar3;
  short sVar4;
  longlong lVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  float fVar9;
  float fVar10;
  ulonglong uVar11;
  short sVar12;
  float *pfVar13;
  short sVar14;
  uint uVar15;
  short sVar16;
  int iVar17;
  longlong lVar18;
  longlong lVar19;
  int iVar20;
  int iVar21;
  longlong lVar22;
  longlong *plVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  uint local_c4;
  
  lVar22 = DAT_181107e10[1] - *DAT_181107e10 >> 3;
  iVar21 = (int)lVar22;
  if ((2 < iVar21) && (0 < param_2)) {
    if (param_3 == '\0') {
      iVar17 = 0;
    }
    else {
      iVar17 = (iVar21 + -2) * 3;
    }
    FUN_1803fc3a0(param_1,(param_2 * 6 + -6) * iVar21 + iVar17,iVar21 * param_2);
    fVar10 = DAT_1808ac34c;
    fVar9 = DAT_1808ac1f4;
    uVar11 = 0;
    local_c4 = 0;
    fVar2 = **(float **)(param_1 + 0x38);
    fVar3 = (*(float **)(param_1 + 0x38))[1];
    sVar4 = *(short *)(param_1 + 0x34);
    do {
      plVar1 = (longlong *)(param_1 + 0x40);
      plVar23 = DAT_181107e10 + uVar11 * 6;
      iVar17 = 0;
      iVar20 = (int)uVar11 * iVar21;
      uVar15 = param_4 & 0xffffff;
      if (iVar21 < 4) {
LAB_18036b397:
        pfVar13 = (float *)*plVar1;
        do {
          fVar29 = *(float *)(*plVar23 + (longlong)iVar17 * 8);
          fVar24 = *(float *)(*plVar23 + 4 + (longlong)iVar17 * 8);
          if (*param_5 == '\0') {
            fVar27 = fVar2;
            fVar28 = fVar3;
          }
          else {
            fVar27 = *(float *)(param_5 + 4);
            if (*(float *)(param_5 + 0xc) <= fVar27) {
              fVar27 = 0.0;
            }
            else {
              fVar27 = (fVar29 - fVar27) / (*(float *)(param_5 + 0xc) - fVar27);
            }
            fVar28 = *(float *)(param_5 + 8);
            if (*(float *)(param_5 + 0x10) <= fVar28) {
              fVar28 = 0.0;
            }
            else {
              fVar28 = (fVar24 - fVar28) / (*(float *)(param_5 + 0x10) - fVar28);
            }
            fVar27 = (*(float *)(param_5 + 0x1c) - *(float *)(param_5 + 0x14)) * fVar27 +
                     *(float *)(param_5 + 0x14);
            fVar28 = (*(float *)(param_5 + 0x20) - *(float *)(param_5 + 0x18)) * fVar28 +
                     *(float *)(param_5 + 0x18);
          }
          *pfVar13 = fVar29;
          pfVar13[1] = fVar24;
          lVar18 = *plVar1;
          *(float *)(lVar18 + 8) = fVar27;
          *(float *)(lVar18 + 0xc) = fVar28;
          fVar29 = *(float *)(DAT_181107df8 + (longlong)(iVar17 + iVar20) * 4);
          if (0.0 <= fVar29) {
            fVar24 = fVar10;
            if (fVar29 <= fVar10) {
              fVar24 = fVar29;
            }
          }
          else {
            fVar24 = 0.0;
          }
          iVar17 = iVar17 + 1;
          *(uint *)(*plVar1 + 0x10) =
               (int)(longlong)((float)(param_4 >> 0x18) * fVar24 + fVar9) << 0x18 | uVar15;
          *plVar1 = *plVar1 + 0x14;
          pfVar13 = (float *)*plVar1;
        } while (iVar17 < iVar21);
      }
      else {
        fVar29 = (float)(param_4 >> 0x18);
        do {
          lVar18 = (longlong)iVar17;
          fVar24 = *(float *)(*plVar23 + lVar18 * 8);
          fVar27 = *(float *)(*plVar23 + 4 + lVar18 * 8);
          fVar28 = fVar3;
          fVar26 = fVar2;
          if (*param_5 != '\0') {
            fVar28 = *(float *)(param_5 + 4);
            if (*(float *)(param_5 + 0xc) <= fVar28) {
              fVar28 = 0.0;
            }
            else {
              fVar28 = (fVar24 - fVar28) / (*(float *)(param_5 + 0xc) - fVar28);
            }
            fVar26 = *(float *)(param_5 + 8);
            if (*(float *)(param_5 + 0x10) <= fVar26) {
              fVar25 = 0.0;
            }
            else {
              fVar25 = (fVar27 - fVar26) / (*(float *)(param_5 + 0x10) - fVar26);
            }
            fVar26 = (*(float *)(param_5 + 0x1c) - *(float *)(param_5 + 0x14)) * fVar28 +
                     *(float *)(param_5 + 0x14);
            fVar28 = (*(float *)(param_5 + 0x20) - *(float *)(param_5 + 0x18)) * fVar25 +
                     *(float *)(param_5 + 0x18);
          }
          pfVar13 = (float *)*plVar1;
          *pfVar13 = fVar24;
          pfVar13[1] = fVar27;
          lVar19 = *plVar1;
          *(float *)(lVar19 + 8) = fVar26;
          *(float *)(lVar19 + 0xc) = fVar28;
          lVar19 = (longlong)(iVar17 + iVar20);
          fVar24 = *(float *)(DAT_181107df8 + lVar19 * 4);
          if (0.0 <= fVar24) {
            fVar27 = fVar10;
            if (fVar24 <= fVar10) {
              fVar27 = fVar24;
            }
          }
          else {
            fVar27 = 0.0;
          }
          *(uint *)(*plVar1 + 0x10) = (int)(longlong)(fVar29 * fVar27 + fVar9) << 0x18 | uVar15;
          lVar5 = *plVar1;
          pfVar13 = (float *)(lVar5 + 0x14);
          *plVar1 = (longlong)pfVar13;
          fVar24 = *(float *)(*plVar23 + 8 + lVar18 * 8);
          fVar27 = *(float *)(*plVar23 + 0xc + lVar18 * 8);
          fVar28 = fVar3;
          fVar26 = fVar2;
          if (*param_5 != '\0') {
            fVar28 = *(float *)(param_5 + 4);
            if (*(float *)(param_5 + 0xc) <= fVar28) {
              fVar28 = 0.0;
            }
            else {
              fVar28 = (fVar24 - fVar28) / (*(float *)(param_5 + 0xc) - fVar28);
            }
            fVar26 = *(float *)(param_5 + 8);
            if (*(float *)(param_5 + 0x10) <= fVar26) {
              fVar25 = 0.0;
            }
            else {
              fVar25 = (fVar27 - fVar26) / (*(float *)(param_5 + 0x10) - fVar26);
            }
            fVar26 = (*(float *)(param_5 + 0x1c) - *(float *)(param_5 + 0x14)) * fVar28 +
                     *(float *)(param_5 + 0x14);
            fVar28 = (*(float *)(param_5 + 0x20) - *(float *)(param_5 + 0x18)) * fVar25 +
                     *(float *)(param_5 + 0x18);
          }
          *pfVar13 = fVar24;
          *(float *)(lVar5 + 0x18) = fVar27;
          lVar5 = *plVar1;
          *(float *)(lVar5 + 8) = fVar26;
          *(float *)(lVar5 + 0xc) = fVar28;
          fVar24 = *(float *)(DAT_181107df8 + 4 + lVar19 * 4);
          if (0.0 <= fVar24) {
            fVar27 = fVar10;
            if (fVar24 <= fVar10) {
              fVar27 = fVar24;
            }
          }
          else {
            fVar27 = 0.0;
          }
          *(uint *)(*plVar1 + 0x10) = (int)(longlong)(fVar29 * fVar27 + fVar9) << 0x18 | uVar15;
          lVar5 = *plVar1;
          pfVar13 = (float *)(lVar5 + 0x14);
          *plVar1 = (longlong)pfVar13;
          fVar24 = *(float *)(*plVar23 + 0x10 + lVar18 * 8);
          fVar27 = *(float *)(*plVar23 + 0x14 + lVar18 * 8);
          fVar28 = fVar3;
          fVar26 = fVar2;
          if (*param_5 != '\0') {
            fVar28 = *(float *)(param_5 + 4);
            if (*(float *)(param_5 + 0xc) <= fVar28) {
              fVar28 = 0.0;
            }
            else {
              fVar28 = (fVar24 - fVar28) / (*(float *)(param_5 + 0xc) - fVar28);
            }
            fVar26 = *(float *)(param_5 + 8);
            if (*(float *)(param_5 + 0x10) <= fVar26) {
              fVar25 = 0.0;
            }
            else {
              fVar25 = (fVar27 - fVar26) / (*(float *)(param_5 + 0x10) - fVar26);
            }
            fVar26 = (*(float *)(param_5 + 0x1c) - *(float *)(param_5 + 0x14)) * fVar28 +
                     *(float *)(param_5 + 0x14);
            fVar28 = (*(float *)(param_5 + 0x20) - *(float *)(param_5 + 0x18)) * fVar25 +
                     *(float *)(param_5 + 0x18);
          }
          *pfVar13 = fVar24;
          *(float *)(lVar5 + 0x18) = fVar27;
          lVar5 = *plVar1;
          *(float *)(lVar5 + 8) = fVar26;
          *(float *)(lVar5 + 0xc) = fVar28;
          fVar24 = *(float *)(DAT_181107df8 + 8 + lVar19 * 4);
          if (0.0 <= fVar24) {
            fVar27 = fVar10;
            if (fVar24 <= fVar10) {
              fVar27 = fVar24;
            }
          }
          else {
            fVar27 = 0.0;
          }
          *(uint *)(*plVar1 + 0x10) = (int)(longlong)(fVar29 * fVar27 + fVar9) << 0x18 | uVar15;
          lVar5 = *plVar1;
          pfVar13 = (float *)(lVar5 + 0x14);
          *plVar1 = (longlong)pfVar13;
          fVar24 = *(float *)(*plVar23 + 0x18 + lVar18 * 8);
          fVar27 = *(float *)(*plVar23 + 0x1c + lVar18 * 8);
          fVar28 = fVar3;
          fVar26 = fVar2;
          if (*param_5 != '\0') {
            fVar28 = *(float *)(param_5 + 4);
            if (*(float *)(param_5 + 0xc) <= fVar28) {
              fVar28 = 0.0;
            }
            else {
              fVar28 = (fVar24 - fVar28) / (*(float *)(param_5 + 0xc) - fVar28);
            }
            fVar26 = *(float *)(param_5 + 8);
            if (*(float *)(param_5 + 0x10) <= fVar26) {
              fVar25 = 0.0;
            }
            else {
              fVar25 = (fVar27 - fVar26) / (*(float *)(param_5 + 0x10) - fVar26);
            }
            fVar26 = (*(float *)(param_5 + 0x1c) - *(float *)(param_5 + 0x14)) * fVar28 +
                     *(float *)(param_5 + 0x14);
            fVar28 = (*(float *)(param_5 + 0x20) - *(float *)(param_5 + 0x18)) * fVar25 +
                     *(float *)(param_5 + 0x18);
          }
          *pfVar13 = fVar24;
          *(float *)(lVar5 + 0x18) = fVar27;
          lVar18 = *plVar1;
          *(float *)(lVar18 + 8) = fVar26;
          *(float *)(lVar18 + 0xc) = fVar28;
          fVar24 = *(float *)(DAT_181107df8 + 0xc + lVar19 * 4);
          if (0.0 <= fVar24) {
            fVar27 = fVar10;
            if (fVar24 <= fVar10) {
              fVar27 = fVar24;
            }
          }
          else {
            fVar27 = 0.0;
          }
          iVar17 = iVar17 + 4;
          *(uint *)(*plVar1 + 0x10) = (int)(longlong)(fVar29 * fVar27 + fVar9) << 0x18 | uVar15;
          *plVar1 = *plVar1 + 0x14;
        } while (iVar17 < iVar21 + -3);
        if (iVar17 < iVar21) goto LAB_18036b397;
      }
      local_c4 = local_c4 + 1;
      uVar11 = (ulonglong)local_c4;
    } while ((int)local_c4 < param_2);
    if (param_3 != '\0') {
      iVar17 = 1;
      do {
        **(short **)(param_1 + 0x48) = sVar4;
        *(short *)(*(longlong *)(param_1 + 0x48) + 2) = sVar4 + (short)iVar17;
        *(short *)(*(longlong *)(param_1 + 0x48) + 4) = sVar4 + 1 + (short)iVar17;
        iVar20 = iVar17 + 2;
        *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 6;
        iVar17 = iVar17 + 1;
      } while (iVar20 < iVar21);
    }
    iVar17 = 0;
    if (1 < param_2) {
      do {
        sVar14 = (short)lVar22;
        iVar20 = 0;
        sVar6 = (short)iVar17 * sVar14 + sVar4;
        sVar14 = sVar4 + (short)(iVar17 + 1) * sVar14;
        do {
          sVar7 = (short)iVar20;
          sVar16 = sVar6 + sVar7;
          iVar20 = iVar20 + 1;
          **(short **)(param_1 + 0x48) = sVar16;
          sVar8 = (short)(iVar20 % iVar21);
          sVar12 = sVar8 + sVar14;
          *(short *)(*(longlong *)(param_1 + 0x48) + 2) = sVar6 + sVar8;
          *(short *)(*(longlong *)(param_1 + 0x48) + 4) = sVar12;
          *(short *)(*(longlong *)(param_1 + 0x48) + 6) = sVar16;
          *(short *)(*(longlong *)(param_1 + 0x48) + 8) = sVar12;
          *(short *)(*(longlong *)(param_1 + 0x48) + 10) = sVar7 + sVar14;
          *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 0xc;
        } while (iVar20 < iVar21);
        iVar20 = iVar17 + 2;
        iVar17 = iVar17 + 1;
      } while (iVar20 < param_2);
    }
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + iVar21 * param_2;
  }
  return;
}



/* ===== 18036b620 FUN_18036b620 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18036b620(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined4 param_6)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined1 local_88 [104];
  
  fVar4 = DAT_1808ac34c;
  local_e8 = _DAT_1808ad5a0;
  uStack_e0 = _UNK_1808ad5a8;
  local_c8 = 0x3f800000;
  local_d8 = _DAT_1808ad530;
  uStack_d0 = _UNK_1808ad538;
  puVar6 = (undefined8 *)FUN_18036a2d0(local_88,_DAT_1808ad530,param_3,param_5,param_6,0,0);
  local_c0 = *puVar6;
  uStack_b8 = puVar6[1];
  local_b0 = puVar6[2];
  uStack_a8 = puVar6[3];
  local_a0 = puVar6[4];
  uStack_98 = puVar6[5];
  local_90 = puVar6[6];
  FUN_18036ad00(&local_c0,&local_e8);
  lVar2 = DAT_181107e10[1];
  lVar3 = *DAT_181107e10;
  uVar8 = lVar2 - lVar3 >> 3;
  FUN_1800d50c0();
  fVar5 = DAT_1808ac658;
  fVar10 = DAT_1808ac1f4;
  fVar9 = ((float)local_e8 + fVar4) * DAT_1808ac1f4;
  if (0.0 <= fVar9) {
    fVar11 = fVar4;
    if (fVar9 <= fVar4) {
      fVar11 = fVar9;
    }
  }
  else {
    fVar11 = 0.0;
  }
  uVar7 = 0;
  fVar9 = DAT_1808ac658 - (fVar11 + fVar11);
  if (uVar8 != 0) {
    do {
      *(float *)(DAT_181107df8 + uVar7 * 4) = fVar4 - fVar9 * fVar11 * fVar11;
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar8);
  }
  fVar9 = ((float)uStack_e0 + fVar4) * fVar10;
  if (0.0 <= fVar9) {
    fVar11 = fVar4;
    if (fVar9 <= fVar4) {
      fVar11 = fVar9;
    }
  }
  else {
    fVar11 = 0.0;
  }
  uVar7 = 0;
  if (uVar8 != 0) {
    do {
      lVar1 = uVar7 * 4;
      uVar7 = uVar7 + 1;
      *(float *)(uVar8 * 4 + lVar1 + DAT_181107df8) =
           fVar4 - (fVar5 - (fVar11 + fVar11)) * fVar11 * fVar11;
    } while (uVar7 < uVar8);
  }
  fVar9 = ((float)local_d8 + fVar4) * fVar10;
  if (0.0 <= fVar9) {
    fVar11 = fVar4;
    if (fVar9 <= fVar4) {
      fVar11 = fVar9;
    }
  }
  else {
    fVar11 = 0.0;
  }
  uVar7 = 0;
  if (uVar8 != 0) {
    do {
      lVar1 = uVar7 * 4;
      uVar7 = uVar7 + 1;
      *(float *)((lVar2 - lVar3 & 0xfffffffffffffff8U) + lVar1 + DAT_181107df8) =
           fVar4 - (fVar5 - (fVar11 + fVar11)) * fVar11 * fVar11;
    } while (uVar7 < uVar8);
  }
  fVar9 = ((float)uStack_d0 + fVar4) * fVar10;
  if (0.0 <= fVar9) {
    fVar11 = fVar4;
    if (fVar9 <= fVar4) {
      fVar11 = fVar9;
    }
  }
  else {
    fVar11 = 0.0;
  }
  uVar7 = 0;
  if (uVar8 != 0) {
    do {
      lVar2 = uVar7 * 4;
      uVar7 = uVar7 + 1;
      *(float *)(uVar8 * 0xc + lVar2 + DAT_181107df8) =
           fVar4 - (fVar5 - (fVar11 + fVar11)) * fVar11 * fVar11;
    } while (uVar7 < uVar8);
  }
  fVar10 = ((float)local_c8 + fVar4) * fVar10;
  fVar9 = 0.0;
  if ((0.0 <= fVar10) && (fVar9 = fVar4, fVar10 <= fVar4)) {
    fVar9 = fVar10;
  }
  uVar7 = 0;
  if (uVar8 != 0) {
    do {
      lVar2 = uVar7 * 4;
      uVar7 = uVar7 + 1;
      *(float *)(uVar8 * 0x10 + lVar2 + DAT_181107df8) =
           fVar4 - (fVar5 - (fVar9 + fVar9)) * fVar9 * fVar9;
    } while (uVar7 < uVar8);
  }
  FUN_18036ae70(param_1,5,CONCAT71((int7)(uVar7 >> 8),1),param_4);
  return;
}



/* ===== 18036b940 FUN_18036b940 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18036b940(longlong param_1,float *param_2,float *param_3,uint param_4,
                  undefined1 (*param_5) [16],undefined4 param_6)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auStack_88 [32];
  undefined1 *local_68;
  undefined4 local_60;
  undefined1 *local_58;
  undefined1 local_48 [4];
  undefined8 local_44;
  undefined8 uStack_3c;
  undefined8 local_34;
  undefined8 uStack_2c;
  undefined1 local_20 [16];
  ulonglong local_10;
  
  if ((param_1 != 0) && (local_10 = DAT_180919500 ^ (ulonglong)auStack_88, 0xffffff < param_4)) {
    if (*param_2 < *param_3) {
      if (param_2[1] < param_3[1]) {
        fVar2 = param_3[1] - param_2[1];
        fVar1 = *param_3 - *param_2;
        if (fVar1 <= fVar2) {
          fVar2 = fVar1;
        }
        auVar3._0_4_ = fVar2 * DAT_1808ac1f4;
        auVar3._4_4_ = auVar3._0_4_;
        auVar3._8_4_ = auVar3._0_4_;
        auVar3._12_4_ = auVar3._0_4_;
        local_20 = minps(auVar3,*param_5);
        if (local_20._0_4_ <= 0.0) {
          if (((local_20._4_4_ <= 0.0) && (local_20._8_4_ <= 0.0)) && (local_20._12_4_ <= 0.0)) {
            local_60 = 0;
            local_68 = (undefined1 *)((ulonglong)local_68 & 0xffffffff00000000);
            FUN_1803fe590();
            return;
          }
        }
        local_48[0] = 0;
        local_58 = local_48;
        local_68 = local_20;
        local_44 = 0;
        uStack_3c = 0;
        local_60 = param_6;
        local_34 = 0;
        uStack_2c = 0;
        FUN_18036b620();
      }
    }
  }
  return;
}



/* ===== 18036ba60 FUN_18036ba60 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18036ba60(longlong param_1,undefined1 (*param_2) [16],float *param_3,float *param_4,
                  undefined4 *param_5,undefined4 *param_6,uint param_7,undefined1 (*param_8) [16],
                  undefined4 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  undefined1 auStack_d8 [32];
  undefined4 *local_b8;
  undefined4 *local_b0;
  undefined1 *local_a8;
  undefined1 local_98 [4];
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined1 local_68 [16];
  ulonglong local_58;
  
  if ((param_1 != 0) && (local_58 = DAT_180919500 ^ (ulonglong)auStack_d8, 0xffffff < param_7)) {
    if (*param_3 < *param_4) {
      if (param_3[1] < param_4[1]) {
        fVar7 = param_4[1] - param_3[1];
        fVar6 = *param_4 - *param_3;
        if (fVar6 <= fVar7) {
          fVar7 = fVar6;
        }
        auVar8._0_4_ = fVar7 * DAT_1808ac1f4;
        auVar8._4_4_ = auVar8._0_4_;
        auVar8._8_4_ = auVar8._0_4_;
        auVar8._12_4_ = auVar8._0_4_;
        local_68 = minps(auVar8,*param_8);
        if (local_68._0_4_ <= 0.0) {
          if (((local_68._4_4_ <= 0.0) && (local_68._8_4_ <= 0.0)) && (local_68._12_4_ <= 0.0)) {
            local_68 = *param_2;
            local_a8 = (undefined1 *)CONCAT44(local_a8._4_4_,param_7);
            local_b0 = param_6;
            local_b8 = param_5;
            FUN_1803fea90(*(undefined4 *)*param_2,local_68);
            return;
          }
        }
        iVar4 = *(int *)(param_1 + 0xb4);
        uVar2 = *(undefined8 *)*param_2;
        uVar3 = *(undefined8 *)(*param_2 + 8);
        if (*(int *)(param_1 + 0xb0) == iVar4) {
          iVar5 = *(int *)(param_1 + 0xb0) + 1;
          if (iVar4 == 0) {
            iVar4 = 8;
          }
          else {
            iVar4 = iVar4 / 2 + iVar4;
          }
          if (iVar5 < iVar4) {
            iVar5 = iVar4;
          }
          FUN_1803f7030(param_1 + 0xb0,iVar5);
        }
        puVar1 = (undefined8 *)
                 (*(longlong *)(param_1 + 0xb8) + (longlong)*(int *)(param_1 + 0xb0) * 0x10);
        *puVar1 = uVar2;
        puVar1[1] = uVar3;
        *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 1;
        *(undefined8 *)(param_1 + 0x70) = uVar2;
        *(undefined8 *)(param_1 + 0x78) = uVar3;
        FUN_1803fc0a0(param_1);
        local_94 = *param_3;
        local_a8 = local_98;
        local_90 = param_3[1];
        local_8c = *param_4;
        local_84 = *param_5;
        local_88 = param_4[1];
        local_b8 = (undefined4 *)local_68;
        local_7c = *param_6;
        local_80 = param_5[1];
        local_78 = param_6[1];
        local_b0 = (undefined4 *)CONCAT44(local_b0._4_4_,param_9);
        local_98[0] = 1;
        FUN_18036b620(param_1,param_3,param_4,param_7);
        FUN_1803fc340(param_1);
      }
    }
  }
  return;
}



/* ===== 18036bcb0 FUN_18036bcb0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18036bcb0(longlong param_1,float *param_2,float *param_3,uint param_4,
                  undefined1 (*param_5) [16],undefined4 param_6,float param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  undefined8 *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  float fVar15;
  undefined1 auStack_1f8 [32];
  uint *local_1d8;
  float local_1d0;
  undefined4 local_1c8;
  uint local_1b8;
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
  undefined8 local_188;
  undefined1 local_180 [16];
  undefined1 local_170 [56];
  float local_138 [11];
  float fStack_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  ulonglong local_b8;
  
  fVar3 = DAT_1808acd84;
  fVar2 = DAT_1808ac34c;
  fVar1 = DAT_1808ac1f4;
  if (((param_1 != 0) && (local_b8 = DAT_180919500 ^ (ulonglong)auStack_1f8, 0xffffff < param_4)) &&
     (0.0 < param_7)) {
    if (*param_2 < *param_3) {
      if (param_2[1] < param_3[1]) {
        fVar13 = param_3[1] - param_2[1];
        fVar11 = *param_3 - *param_2;
        if (fVar11 <= fVar13) {
          fVar13 = fVar11;
        }
        auVar14._4_4_ = fVar13;
        auVar14._0_4_ = fVar13;
        auVar14._8_4_ = fVar13;
        auVar14._12_4_ = fVar13;
        local_180 = minps(auVar14,*param_5);
        if ((DAT_180cd0fd8 == '\0') || (fVar13 = DAT_1809f7440, DAT_1809f7440 <= 0.0)) {
          fVar13 = DAT_1808ac34c;
        }
        local_138[5] = -0.5;
        local_138[6] = -0.25;
        local_138[7] = 0.0;
        local_138[8] = 0.25;
        local_138[9] = 0.5;
        local_138[4] = (float)((uint)(fVar13 * param_7) ^ DAT_1808adec0) - DAT_1808ac1f4;
        local_138[0] = local_138[4] + 0.0;
        local_138[2] = local_138[4] + DAT_1808ac1f4;
        local_138[1] = local_138[4] + DAT_1808ac140;
        local_138[3] = local_138[4] + DAT_1808ac27c;
        local_138[4] = local_138[4] + DAT_1808ac34c;
        FUN_18036d410(local_138,local_138 + 10,10,0);
        pfVar4 = local_138;
        local_108 = 0;
        uStack_100 = 0;
        local_f8 = 0;
        uStack_f0 = 0;
        local_e8 = 0;
        uStack_e0 = 0;
        iVar9 = 0;
        local_d8 = 0;
        uStack_d0 = 0;
        local_c8 = 0;
        uStack_c0 = 0;
        do {
          fVar11 = *pfVar4;
          lVar6 = (longlong)iVar9;
          if ((iVar9 == 0) ||
             (DAT_1808abfa0 <=
              (float)((uint)(fVar13 * local_138[lVar6 * 2 + 0xb] - fVar11) & (uint)_DAT_1808ade90)))
          {
            *(undefined4 *)(&local_108 + lVar6) = 0;
            iVar9 = iVar9 + 1;
            *(float *)((longlong)&local_108 + lVar6 * 8 + 4) = fVar11 / fVar13;
          }
          pfVar4 = pfVar4 + 1;
        } while (pfVar4 != local_138 + 10);
        local_1d0 = fVar3 / fVar13;
        local_1c8 = 0;
        local_1d8 = (uint *)CONCAT44(local_1d8._4_4_,param_6);
        puVar5 = (undefined8 *)FUN_18036a2d0(local_170,param_2,param_3,local_180);
        local_1b8 = (uint)*puVar5;
        uStack_1b4 = (undefined4)((ulonglong)*puVar5 >> 0x20);
        uStack_1b0 = (undefined4)puVar5[1];
        uStack_1ac = (undefined4)((ulonglong)puVar5[1] >> 0x20);
        local_198 = *(undefined4 *)(puVar5 + 4);
        uStack_194 = *(undefined4 *)((longlong)puVar5 + 0x24);
        uStack_190 = *(undefined4 *)(puVar5 + 5);
        uStack_18c = *(undefined4 *)((longlong)puVar5 + 0x2c);
        local_1a8 = (undefined4)puVar5[2];
        uStack_1a4 = (undefined4)((ulonglong)puVar5[2] >> 0x20);
        uStack_1a0 = (undefined4)puVar5[3];
        uStack_19c = (undefined4)((ulonglong)puVar5[3] >> 0x20);
        local_188 = puVar5[6];
        FUN_18036ad00(&local_1b8,&local_108,iVar9);
        uVar8 = DAT_181107e10[1] - *DAT_181107e10 >> 3;
        FUN_1800d50c0(&DAT_181107df8,(longlong)iVar9 * uVar8);
        fVar3 = DAT_1808ac658;
        iVar10 = 0;
        if (0 < iVar9) {
          do {
            fVar11 = fVar13 * *(float *)((longlong)&local_108 + (longlong)iVar10 * 8 + 4);
            fVar15 = fVar11 + fVar13 * param_7 + fVar1;
            if (0.0 <= fVar15) {
              fVar12 = fVar2;
              if (fVar15 <= fVar2) {
                fVar12 = fVar15;
              }
            }
            else {
              fVar12 = 0.0;
            }
            fVar11 = fVar11 + fVar1;
            if (0.0 <= fVar11) {
              fVar15 = fVar2;
              if (fVar11 <= fVar2) {
                fVar15 = fVar11;
              }
            }
            else {
              fVar15 = 0.0;
            }
            uVar7 = 0;
            if (uVar8 != 0) {
              do {
                lVar6 = uVar7 * 4;
                uVar7 = uVar7 + 1;
                *(float *)((longlong)iVar10 * uVar8 * 4 + lVar6 + DAT_181107df8) =
                     (fVar3 - (fVar12 + fVar12)) * fVar12 * fVar12 -
                     (fVar3 - (fVar15 + fVar15)) * fVar15 * fVar15;
              } while (uVar7 < uVar8);
            }
            iVar10 = iVar10 + 1;
          } while (iVar10 < iVar9);
        }
        local_1b8 = local_1b8 & 0xffffff00;
        local_1d8 = &local_1b8;
        uStack_1b4 = 0;
        uStack_1b0 = 0;
        uStack_1ac = 0;
        local_1a8 = 0;
        uStack_1a4 = 0;
        uStack_1a0 = 0;
        uStack_19c = 0;
        local_198 = 0;
        FUN_18036ae70(param_1,iVar9,0,param_4);
      }
    }
  }
  return;
}



/* ===== 18036c0d0 FUN_18036c0d0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18036c0d0(longlong param_1,float *param_2,float *param_3,uint param_4,
                  undefined1 (*param_5) [16],undefined4 param_6,float param_7,float *param_8)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  float fVar4;
  longlong *plVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  float *pfVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  float fVar17;
  uint uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined8 in_stack_fffffffffffffda8;
  undefined4 uVar22;
  float local_230;
  float local_22c;
  undefined8 local_228;
  float local_220;
  float local_21c;
  float local_218;
  uint local_214;
  undefined1 local_210 [8];
  float fStack_208;
  float fStack_204;
  float local_200;
  float fStack_1fc;
  float fStack_1f8;
  float fStack_1f4;
  float local_1f0 [6];
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  float *local_1c8;
  longlong local_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
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
  undefined1 local_108 [224];
  
  fVar4 = DAT_1808ac34c;
  fVar17 = DAT_1808ac1f4;
  uVar22 = (undefined4)((ulonglong)in_stack_fffffffffffffda8 >> 0x20);
  if (((param_1 != 0) && (0xffffff < param_4)) && (0.0 < param_7)) {
    fVar13 = *param_2;
    if (fVar13 < *param_3) {
      if (param_2[1] < param_3[1]) {
        fVar15 = param_3[1] - param_2[1];
        fVar12 = *param_3 - fVar13;
        if (fVar12 <= fVar15) {
          fVar15 = fVar12;
        }
        auVar16._0_4_ = fVar15 * DAT_1808ac1f4;
        auVar16._4_4_ = auVar16._0_4_;
        auVar16._8_4_ = auVar16._0_4_;
        auVar16._12_4_ = auVar16._0_4_;
        _local_210 = minps(auVar16,*param_5);
        if ((DAT_180cd0fd8 == '\0') || (fVar15 = DAT_1809f7440, DAT_1809f7440 <= 0.0)) {
          fVar15 = DAT_1808ac34c;
        }
        local_214 = param_4;
        local_1c0 = param_1;
        fVar13 = (float)FUN_18053ef70(param_1,local_210,fVar13 * fVar15);
        local_228 = CONCAT44(local_228._4_4_,fVar13 / fVar15);
        fVar12 = (float)FUN_18053ef70();
        local_228 = CONCAT44(fVar12 / fVar15,(undefined4)local_228);
        fVar14 = (float)FUN_18053fc00();
        local_230 = fVar14 / fVar15;
        local_22c = (float)FUN_18053fc00();
        uVar18 = _DAT_1808ade90;
        local_22c = local_22c / fVar15;
        if ((fVar13 / fVar15 < fVar14 / fVar15) && (fVar12 / fVar15 < local_22c)) {
          if ((*param_8 != 0.0) || (bVar3 = false, param_8[1] != 0.0)) {
            bVar3 = true;
          }
          local_218 = param_7 * fVar17;
          local_190 = 0;
          uVar6 = 0;
          local_118 = 0;
          local_198 = 0x3f800000;
          local_178 = 0;
          uStack_170 = 0;
          local_158 = 0;
          uStack_150 = 0;
          local_138 = 0;
          uStack_130 = 0;
          fVar17 = (float)((uint)param_8[1] & _DAT_1808ade90) +
                   (float)((uint)*param_8 & _DAT_1808ade90) + local_218;
          local_1a8 = _DAT_1808ad530;
          uStack_1a0 = _UNK_1808ad538;
          local_188 = 0;
          uStack_180 = 0;
          local_168 = 0;
          uStack_160 = 0;
          local_148 = 0;
          uStack_140 = 0;
          local_128 = 0;
          uStack_120 = 0;
          local_1b8 = _DAT_1808ad5a0;
          uStack_1b0 = _UNK_1808ad5a8;
          do {
            uVar9 = (int)uVar6 + 1;
            *(undefined4 *)(&local_190 + uVar6) = 0x3f800000;
            *(float *)((longlong)&local_190 + uVar6 * 8 + 4) =
                 (float)(int)uVar9 * fVar17 * DAT_1808ac090;
            uVar6 = (ulonglong)uVar9;
          } while ((int)uVar9 < 0x10);
          puVar7 = (undefined8 *)
                   FUN_18036a2d0(local_108,&local_228,&local_230,local_210,CONCAT44(uVar22,param_6),
                                 0,fVar17);
          local_200 = (float)*puVar7;
          fStack_1fc = (float)((ulonglong)*puVar7 >> 0x20);
          fStack_1f8 = (float)puVar7[1];
          fStack_1f4 = (float)((ulonglong)puVar7[1] >> 0x20);
          uStack_1d8 = puVar7[5];
          local_1f0[0] = (float)puVar7[2];
          local_1f0[1] = (float)((ulonglong)puVar7[2] >> 0x20);
          local_1f0[2] = (float)puVar7[3];
          local_1f0[3] = (float)((ulonglong)puVar7[3] >> 0x20);
          local_1d0 = puVar7[6];
          local_1f0[4] = (float)puVar7[4];
          local_1f0[5] = (float)((ulonglong)puVar7[4] >> 0x20);
          FUN_18036ad00(&local_200,&local_1b8,0x15);
          uVar11 = DAT_181107e10[1] - *DAT_181107e10 >> 3;
          FUN_1800d50c0(&DAT_181107df8,uVar11 * 0x15);
          fVar15 = fStack_1fc;
          fVar13 = local_200;
          fVar17 = DAT_1808ac658;
          uVar6 = 0;
          local_230 = 0.0;
          do {
            plVar5 = DAT_181107e10;
            if (uVar11 != 0) {
              uVar10 = 0;
              local_1c8 = (float *)((longlong)&local_1b8 + uVar6 * 8 + 4);
              lVar2 = DAT_181107e10[uVar6 * 6 + 3];
              local_228 = uVar6 * uVar11 * 4;
              do {
                fVar12 = *(float *)(lVar2 + uVar10 * 4);
                fVar14 = DAT_1808abfa0;
                if (DAT_1808abfa0 <= fVar12) {
                  fVar14 = fVar12;
                }
                fVar12 = fVar14 * *(float *)(&local_1b8 + uVar6) + *local_1c8;
                if ((((0.0 < (float)local_210._0_4_) || (0.0 < (float)local_210._4_4_)) ||
                    (0.0 < fStack_208)) || (0.0 < fStack_204)) {
                  fVar14 = (fVar14 + fVar12) / (fVar14 + fVar14);
                  if (0.0 <= fVar14) {
                    fVar19 = fVar4;
                    if (fVar14 <= fVar4) {
                      fVar19 = fVar14;
                    }
                  }
                  else {
                    fVar19 = 0.0;
                  }
                  fVar14 = (fVar17 - (fVar19 + fVar19)) * fVar19 * fVar19;
                }
                else if (fVar12 < 0.0) {
                  fVar14 = 0.0;
                }
                else {
                  fVar14 = fVar4;
                }
                if (bVar3) {
                  fVar21 = *(float *)(plVar5[uVar6 * 6] + 4 + uVar10 * 8) - param_8[1];
                  fVar19 = *(float *)(plVar5[uVar6 * 6] + uVar10 * 8) - *param_8;
                  if (fVar21 <= fVar15) {
                    uVar9 = (uint)(fVar13 < fVar19);
                  }
                  else {
                    uVar9 = (fVar19 <= fVar13) + 2;
                  }
                  fVar12 = local_1f0[uVar9];
                  fVar20 = ((float)((uint)(fVar19 - fVar13) & uVar18) - fStack_1f8) + fVar12;
                  fVar21 = ((float)((uint)(fVar21 - fVar15) & uVar18) - fStack_1f4) + fVar12;
                  local_220 = fVar21;
                  local_21c = fVar20;
                  FUN_18051afb0();
                  FUN_18051afb0();
                  fVar19 = (float)FUN_18051afb0();
                  pfVar8 = &local_220;
                  if (fVar21 <= fVar20) {
                    pfVar8 = &local_21c;
                  }
                  fVar21 = 0.0;
                  if (*pfVar8 <= 0.0) {
                    fVar21 = *pfVar8;
                  }
                  fVar12 = (fVar19 + fVar21) - fVar12;
                  uVar18 = _DAT_1808ade90;
                }
                fVar12 = (local_218 + fVar12) / param_7;
                if (0.0 <= fVar12) {
                  fVar19 = fVar4;
                  if (fVar12 <= fVar4) {
                    fVar19 = fVar12;
                  }
                }
                else {
                  fVar19 = 0.0;
                }
                lVar1 = uVar10 * 4;
                uVar10 = uVar10 + 1;
                *(float *)(local_228 + lVar1 + DAT_181107df8) =
                     (fVar4 - (fVar17 - (fVar19 + fVar19)) * fVar19 * fVar19) * fVar14;
              } while (uVar10 < uVar11);
              uVar6 = (ulonglong)(uint)local_230;
            }
            local_230 = (float)((int)uVar6 + 1);
            uVar6 = (ulonglong)(uint)local_230;
          } while ((int)local_230 < 0x15);
          fStack_1fc = 0.0;
          fStack_1f8 = 0.0;
          fStack_1f4 = 0.0;
          local_1f0[0] = 0.0;
          local_1f0[1] = 0.0;
          local_1f0[2] = 0.0;
          local_1f0[3] = 0.0;
          local_1f0[4] = 0.0;
          local_200 = (float)((uint)local_200 & 0xffffff00);
          FUN_18036ae70(local_1c0,0x15,0,local_214,&local_200);
        }
      }
    }
  }
  return;
}



/* ===== 18036c740 FUN_18036c740 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18036c740(longlong param_1,float *param_2,float param_3,uint param_4)

{
  int iVar1;
  float fVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  float *pfVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float local_res8 [2];
  int local_108 [3];
  float local_fc;
  float local_f8;
  undefined1 local_f4 [4];
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  
  fVar2 = DAT_1808ac34c;
  if (((param_1 != 0) && (0xffffff < param_4)) && (0.0 < param_3)) {
    if ((DAT_180cd0fd8 == '\0') || (fVar12 = DAT_1809f7440, DAT_1809f7440 <= 0.0)) {
      fVar12 = DAT_1808ac34c;
    }
    local_108[2] = 0xa0;
    fVar17 = DAT_1808ac34c / fVar12;
    local_108[0] = 0x18;
    fVar12 = (float)FUN_18053ef70(fVar12 * param_3 * DAT_1808ac5e0);
    local_108[1] = (int)fVar12 + 8;
    piVar5 = local_108;
    if (0x17 < local_108[1]) {
      piVar5 = local_108 + 1;
    }
    piVar4 = local_108 + 2;
    if (local_108[1] < 0xa1) {
      piVar4 = piVar5;
    }
    iVar1 = *piVar4;
    if ((int)(DAT_181107e18 - DAT_181107e10 >> 4) * -0x55555555 < 5) {
      FUN_18036d330(0xaaaaaaaaaaaaaaab,5);
    }
    uVar3 = _DAT_1808ade90;
    fVar12 = DAT_1808ac140;
    uVar9 = 0;
    do {
      plVar10 = (longlong *)(uVar9 * 0x30 + DAT_181107e10);
      if (*plVar10 != plVar10[1]) {
        plVar10[1] = *plVar10;
      }
      if (plVar10[3] != plVar10[4]) {
        plVar10[4] = plVar10[3];
      }
      iVar7 = 0;
      if (0 < iVar1) {
        do {
          fVar13 = (float)FUN_180517200();
          fVar14 = (float)FUN_180517790();
          local_res8[0] =
               ((float)((uint)fVar14 & uVar3) + (float)((uint)fVar13 & uVar3)) * fVar17 *
               DAT_1808ac1f4;
          fVar16 = local_res8[0] * fVar12 * (float)(int)uVar9 + (param_3 - local_res8[0]);
          fVar15 = 0.0;
          if (0.0 <= fVar16) {
            fVar15 = fVar16;
          }
          local_f8 = fVar15 * fVar14 + param_2[1];
          local_fc = fVar15 * fVar13 + *param_2;
          FUN_18008b8c0(plVar10,&local_fc);
          FUN_180066e60(plVar10 + 3,local_res8);
          iVar7 = iVar7 + 1;
        } while (iVar7 < iVar1);
      }
      uVar8 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar8;
    } while ((int)uVar8 < 5);
    FUN_1800d50c0(&DAT_181107df8);
    fVar17 = DAT_1808ac658;
    iVar7 = 0;
    do {
      fVar15 = (float)iVar7 * fVar12;
      if (0.0 <= fVar15) {
        fVar13 = fVar2;
        if (fVar15 <= fVar2) {
          fVar13 = fVar15;
        }
      }
      else {
        fVar13 = 0.0;
      }
      if (0 < iVar1) {
        pfVar11 = (float *)(DAT_181107df8 + (longlong)(iVar7 * iVar1) * 4);
        for (lVar6 = (longlong)iVar1; lVar6 != 0; lVar6 = lVar6 + -1) {
          *pfVar11 = fVar2 - (fVar17 - (fVar13 + fVar13)) * fVar13 * fVar13;
          pfVar11 = pfVar11 + 1;
        }
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < 5);
    local_f4[0] = 0;
    local_f0 = 0;
    uStack_e8 = 0;
    local_e0 = 0;
    uStack_d8 = 0;
    FUN_18036ae70(param_1,5,1,param_4,local_f4);
  }
  return;
}



/* ===== 18036cb10 FUN_18036cb10 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18036cb10(longlong param_1,float *param_2,float param_3,uint param_4,float *param_5,
                  float param_6)

{
  int iVar1;
  float fVar2;
  float fVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  float fVar10;
  undefined8 uVar11;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  float fVar20;
  float local_148;
  float local_144;
  int local_140 [3];
  float local_134;
  float local_130;
  float local_128;
  float local_124;
  longlong local_120;
  longlong lStack_118;
  undefined8 local_110;
  ulonglong local_108;
  undefined1 local_100 [4];
  undefined8 local_fc;
  undefined8 uStack_f4;
  undefined8 local_ec;
  undefined8 uStack_e4;
  
  fVar3 = DAT_1808ac34c;
  fVar2 = DAT_1808ac1f4;
  if ((((param_1 != 0) && (0xffffff < param_4)) && (0.0 < param_3)) && (0.0 < param_6)) {
    if ((DAT_180cd0fd8 == '\0') || (fVar10 = DAT_1809f7440, DAT_1809f7440 <= 0.0)) {
      fVar10 = DAT_1808ac34c;
    }
    fVar16 = DAT_1808ac34c / fVar10;
    fVar20 = param_6 * DAT_1808ac1f4;
    fVar14 = param_5[1] * param_5[1] + *param_5 * *param_5;
    local_144 = fVar16;
    if (fVar14 < 0.0) {
      uVar11 = FUN_18051af10();
      fVar14 = (float)uVar11;
      uVar17 = (undefined4)((ulonglong)uVar11 >> 0x20);
      uVar18 = (undefined4)extraout_XMM0_Qb;
      uVar19 = (undefined4)((ulonglong)extraout_XMM0_Qb >> 0x20);
    }
    else {
      uVar17 = 0;
      uVar18 = 0;
      uVar19 = 0;
      fVar14 = SQRT(fVar14);
    }
    fVar14 = fVar14 + fVar20 + fVar16;
    local_140[2] = 0xc0;
    local_140[0] = 0x20;
    auVar12._4_4_ = uVar17;
    auVar12._0_4_ = fVar14;
    auVar12._8_4_ = uVar18;
    auVar12._12_4_ = uVar19;
    auVar13._4_12_ = auVar12._4_12_;
    fVar10 = (fVar14 + param_3) * fVar10;
    auVar13._0_4_ = fVar10 + fVar10;
    fVar10 = (float)FUN_18053ef70(auVar13._0_8_);
    local_140[1] = (int)fVar10 + 8;
    piVar5 = local_140;
    if (0x1f < local_140[1]) {
      piVar5 = local_140 + 1;
    }
    piVar4 = local_140 + 2;
    if (local_140[1] < 0xc1) {
      piVar4 = piVar5;
    }
    iVar1 = *piVar4;
    local_120 = 0;
    lStack_118 = 0;
    local_110 = 0;
    iVar6 = 0;
    fVar10 = fVar16 * DAT_1808ac27c;
    fVar15 = fVar16 * DAT_1808ac0d8;
    do {
      local_148 = (param_3 - fVar10) + fVar15 * (float)iVar6;
      FUN_180066e60(&local_120,&local_148);
      iVar6 = iVar6 + 1;
    } while (iVar6 < 7);
    fVar15 = local_144 * DAT_1808ac140;
    for (fVar10 = fVar16 * fVar2; fVar10 <= fVar15 + fVar14; fVar10 = fVar10 + fVar16 * fVar2) {
      local_148 = fVar10 + param_3;
      FUN_180066e60(&local_120,&local_148);
    }
    uVar9 = lStack_118 - local_120 >> 2;
    iVar6 = (int)uVar9;
    local_108 = uVar9;
    if ((int)(DAT_181107e18 - DAT_181107e10 >> 4) * -0x55555555 < iVar6) {
      FUN_18036d330(0xaaaaaaaaaaaaaaab,(longlong)iVar6);
    }
    FUN_1800d50c0(&DAT_181107df8,(longlong)iVar6 * (longlong)iVar1);
    fVar2 = DAT_1808ac658;
    uVar8 = 0;
    local_148 = 0.0;
    if (0 < iVar6) {
      do {
        plVar7 = (longlong *)(uVar8 * 0x30 + DAT_181107e10);
        if (*plVar7 != plVar7[1]) {
          plVar7[1] = *plVar7;
        }
        if (plVar7[3] != plVar7[4]) {
          plVar7[4] = plVar7[3];
        }
        if (0 < iVar1) {
          fVar10 = *(float *)(local_120 + uVar8 * 4);
          fVar14 = 0.0;
          if (0.0 <= fVar10) {
            fVar14 = fVar10;
          }
          iVar6 = 0;
          local_130 = (float)iVar1;
          do {
            fVar10 = (float)FUN_180517200();
            fVar16 = (float)FUN_180517790();
            local_124 = fVar16 * fVar14 + param_2[1];
            local_128 = fVar10 * fVar14 + *param_2;
            local_134 = ((float)((uint)fVar16 & _DAT_1808ade90) +
                        (float)((uint)fVar10 & _DAT_1808ade90)) * local_144;
            fVar10 = (fVar14 - param_3) + (fVar14 - param_3) + local_134;
            if (fVar10 <= 0.0) {
              fVar10 = 0.0;
            }
            else {
              fVar10 = fVar10 / local_134;
              if (0.0 <= fVar10) {
                fVar16 = fVar3;
                if (fVar10 <= fVar3) {
                  fVar16 = fVar10;
                }
              }
              else {
                fVar16 = 0.0;
              }
              fVar10 = (fVar2 - (fVar16 + fVar16)) * fVar16 * fVar16;
            }
            fVar15 = (local_128 - *param_5) - *param_2;
            fVar16 = (local_124 - param_5[1]) - param_2[1];
            fVar16 = fVar16 * fVar16 + fVar15 * fVar15;
            if (fVar16 < 0.0) {
              fVar16 = (float)FUN_18051af10();
            }
            else {
              fVar16 = SQRT(fVar16);
            }
            fVar16 = (fVar20 + (fVar16 - param_3)) / param_6;
            if (0.0 <= fVar16) {
              fVar15 = fVar3;
              if (fVar16 <= fVar3) {
                fVar15 = fVar16;
              }
            }
            else {
              fVar15 = 0.0;
            }
            FUN_18008b8c0(plVar7,&local_128);
            FUN_180066e60(plVar7 + 3,&local_134);
            *(float *)(DAT_181107df8 + (longlong)((int)uVar8 * iVar1 + iVar6) * 4) =
                 (fVar3 - (fVar2 - (fVar15 + fVar15)) * fVar15 * fVar15) * fVar10;
            iVar6 = iVar6 + 1;
          } while (iVar6 < iVar1);
          uVar8 = (ulonglong)(uint)local_148;
          uVar9 = local_108;
        }
        local_148 = (float)((int)uVar8 + 1);
        uVar8 = (ulonglong)(uint)local_148;
      } while ((int)local_148 < (int)uVar9);
    }
    local_100[0] = 0;
    local_fc = 0;
    uStack_f4 = 0;
    local_ec = 0;
    uStack_e4 = 0;
    FUN_18036ae70(param_1,uVar9 & 0xffffffff,0,param_4,local_100);
    FUN_180068f30(&local_120);
  }
  return;
}



/* ===== 18036d070 FUN_18036d070 ===== */

void FUN_18036d070(longlong param_1,float *param_2,float *param_3,undefined4 *param_4)

{
  int iVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  float fVar9;
  float fVar10;
  undefined8 local_res8;
  undefined8 in_stack_ffffffffffffff60;
  undefined8 *puVar11;
  undefined4 uVar13;
  undefined8 uVar12;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_58;
  undefined8 uStack_50;
  
  uVar13 = (undefined4)((ulonglong)in_stack_ffffffffffffff60 >> 0x20);
  if (param_1 != 0) {
    if (*param_2 < *param_3) {
      if (param_2[1] < param_3[1]) {
        local_70 = param_4[5];
        uStack_6c = local_70;
        uStack_68 = local_70;
        uStack_64 = local_70;
        if (((*(longlong *)(param_4 + 10) != 0) || (*(longlong *)(param_4 + 8) != 0)) &&
           (fVar10 = (float)param_4[0xc], 0.0 < fVar10)) {
          fVar2 = *(float *)(**(longlong **)(DAT_180ca0a50 + 0x2058) + 0x10);
          if ((0.0 < fVar2) &&
             (fVar3 = *(float *)(**(longlong **)(DAT_180ca0a50 + 0x2058) + 0x14), 0.0 < fVar3)) {
            local_58 = *(undefined8 *)(param_4 + 8);
            uStack_50 = *(undefined8 *)(param_4 + 10);
            fVar9 = DAT_1808ac34c;
            if (fVar10 <= DAT_1808ac34c) {
              fVar9 = fVar10;
            }
            local_res8 = CONCAT44(param_3[1] / fVar3,*param_3 / fVar2);
            local_78 = CONCAT44(param_2[1] / fVar3,*param_2 / fVar2);
            puVar11 = &local_res8;
            FUN_18036ba60(param_1,&local_58,param_2,param_3,&local_78,puVar11,
                          (int)(fVar9 * DAT_1808acb94 + DAT_1808ac1f4) << 0x18 | 0xffffff,&local_70,
                          param_4[6]);
            uVar13 = (undefined4)((ulonglong)puVar11 >> 0x20);
          }
        }
        uVar12 = CONCAT44(uVar13,param_4[6]);
        FUN_18036b940(param_1,param_2,param_3,*param_4,&local_70,uVar12);
        uVar13 = (undefined4)((ulonglong)uVar12 >> 0x20);
        if ((0.0 < (float)param_4[4]) && (0xffffff < (uint)param_4[3])) {
          fVar10 = (float)param_4[4] + DAT_1808ac540;
          local_res8 = CONCAT44((float)((ulonglong)*(undefined8 *)param_3 >> 0x20) + fVar10,
                                (float)*(undefined8 *)param_3 + fVar10);
          local_78 = CONCAT44((float)((ulonglong)*(undefined8 *)param_2 >> 0x20) - fVar10,
                              (float)*(undefined8 *)param_2 - fVar10);
          FUN_1803fc200(param_1,&local_78,&local_res8,0);
          uVar12 = CONCAT44(uVar13,param_4[6]);
          local_res8 = 0;
          FUN_18036c0d0(param_1,param_2,param_3,param_4[3],&local_70,uVar12,param_4[4],&local_res8);
          uVar13 = (undefined4)((ulonglong)uVar12 >> 0x20);
          iVar4 = *(int *)(param_1 + 0xa0);
          iVar1 = iVar4 + -1;
          *(int *)(param_1 + 0xa0) = iVar1;
          if (iVar1 == 0) {
            puVar8 = (undefined4 *)(*(longlong *)(param_1 + 0x38) + 0x34);
          }
          else {
            puVar8 = (undefined4 *)((longlong)(iVar4 + -2) * 0x10 + *(longlong *)(param_1 + 0xa8));
          }
          uVar5 = puVar8[1];
          uVar6 = puVar8[2];
          uVar7 = puVar8[3];
          *(undefined4 *)(param_1 + 0x60) = *puVar8;
          *(undefined4 *)(param_1 + 100) = uVar5;
          *(undefined4 *)(param_1 + 0x68) = uVar6;
          *(undefined4 *)(param_1 + 0x6c) = uVar7;
          FUN_1803fbff0(param_1);
        }
        if (0.0 < (float)param_4[2]) {
          FUN_18036bcb0(param_1,param_2,param_3,param_4[1],&local_70,CONCAT44(uVar13,param_4[6]),
                        param_4[2]);
        }
      }
    }
  }
  return;
}



/* ===== 18036d330 FUN_18036d330 ===== */

void FUN_18036d330(undefined8 param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar1 = DAT_181107e18;
  lVar2 = (longlong)DAT_181107e18 - DAT_181107e10 >> 4;
  uVar3 = lVar2 * -0x5555555555555555;
  if (param_2 < uVar3) {
    puVar4 = (undefined8 *)(param_2 * 0x30 + DAT_181107e10);
    for (puVar5 = puVar4; puVar5 != puVar1; puVar5 = puVar5 + 6) {
      FUN_180068f30(puVar5 + 3);
      FUN_1800132b0(puVar5);
    }
    DAT_181107e18 = puVar4;
    return;
  }
  if (uVar3 < param_2) {
    if ((ulonglong)((DAT_181107e20 - DAT_181107e10 >> 4) * -0x5555555555555555) < param_2) {
      FUN_18036d730();
      return;
    }
    for (lVar2 = param_2 + lVar2 * 0x5555555555555555; lVar2 != 0; lVar2 = lVar2 + -1) {
      *DAT_181107e18 = 0;
      DAT_181107e18[1] = 0;
      DAT_181107e18[2] = 0;
      DAT_181107e18[3] = 0;
      DAT_181107e18[4] = 0;
      DAT_181107e18[5] = 0;
      DAT_181107e18 = DAT_181107e18 + 6;
    }
  }
  return;
}



/* ===== 18036d410 FUN_18036d410 ===== */

void FUN_18036d410(float *param_1,float *param_2,longlong param_3,undefined1 param_4)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  longlong lVar4;
  longlong lVar5;
  float *pfVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  float *local_58;
  float *local_50;
  
  lVar4 = (longlong)param_2 - (longlong)param_1;
  while( true ) {
    if (lVar4 >> 2 < 0x21) {
      if (param_1 != param_2) {
        for (pfVar6 = param_1 + 1; pfVar6 != param_2; pfVar6 = pfVar6 + 1) {
          fVar1 = *pfVar6;
          if (*param_1 <= fVar1) {
            fVar2 = pfVar6[-1];
            pfVar3 = pfVar6;
            while (fVar1 < fVar2) {
              *pfVar3 = pfVar3[-1];
              fVar2 = pfVar3[-2];
              pfVar3 = pfVar3 + -1;
            }
            *pfVar3 = fVar1;
          }
          else {
            FUN_180540530(param_1 + 1,param_1,(longlong)pfVar6 - (longlong)param_1);
            *param_1 = fVar1;
          }
        }
      }
      return;
    }
    uVar9 = (longlong)param_2 - (longlong)param_1;
    lVar4 = (longlong)uVar9 >> 3;
    if (param_3 < 1) break;
    pfVar6 = param_1 + lVar4;
    FUN_18036d960(param_1,pfVar6,param_2 + -1,param_4);
    FUN_18036daf0(&local_58,param_1,pfVar6,param_2);
    pfVar3 = local_50;
    pfVar6 = local_58;
    param_3 = (param_3 >> 1) + (param_3 >> 2);
    if ((longlong)local_58 - (longlong)param_1 >> 2 < (longlong)param_2 - (longlong)local_50 >> 2) {
      FUN_18036d410(param_1,local_58,param_3,param_4);
      pfVar6 = param_2;
      param_1 = pfVar3;
    }
    else {
      FUN_18036d410(local_50,param_2,param_3,param_4);
    }
    lVar4 = (longlong)pfVar6 - (longlong)param_1;
    param_2 = pfVar6;
  }
  lVar7 = (longlong)uVar9 >> 2;
  if (0 < lVar4) {
    lVar10 = lVar7 + -1 >> 1;
    do {
      lVar8 = lVar4 + -1;
      fVar1 = param_1[lVar4 + -1];
      lVar4 = lVar8;
      while (lVar4 < lVar10) {
        lVar5 = (ulonglong)
                (param_1[lVar4 * 2 + 1] < param_1[lVar4 * 2 + 2] ||
                param_1[lVar4 * 2 + 1] == param_1[lVar4 * 2 + 2]) + 1 + lVar4 * 2;
        param_1[lVar4] = param_1[lVar5];
        lVar4 = lVar5;
      }
      if ((lVar4 == lVar10) && ((uVar9 & 4) == 0)) {
        param_1[lVar4] = *(float *)((longlong)param_1 + ((uVar9 & 0xfffffffffffffffc) - 4));
        lVar4 = lVar7 + -1;
      }
      while (lVar8 < lVar4) {
        lVar5 = lVar4 + -1 >> 1;
        if (fVar1 <= param_1[lVar5]) break;
        param_1[lVar4] = param_1[lVar5];
        lVar4 = lVar5;
      }
      param_1[lVar4] = fVar1;
      lVar4 = lVar8;
    } while (0 < lVar8);
  }
  if (lVar7 < 2) {
    return;
  }
  do {
    if (1 < (longlong)param_2 - (longlong)param_1 >> 2) {
      fVar1 = param_2[-1];
      lVar4 = 0;
      param_2[-1] = *param_1;
      uVar9 = (longlong)(param_2 + -1) - (longlong)param_1;
      lVar10 = ((longlong)uVar9 >> 2) + -1;
      lVar8 = lVar10 >> 1;
      lVar7 = lVar4;
      if (0 < lVar8) {
        do {
          lVar4 = (ulonglong)
                  (param_1[lVar7 * 2 + 1] < param_1[lVar7 * 2 + 2] ||
                  param_1[lVar7 * 2 + 1] == param_1[lVar7 * 2 + 2]) + 1 + lVar7 * 2;
          param_1[lVar7] = param_1[lVar4];
          lVar7 = lVar4;
        } while (lVar4 < lVar8);
      }
      if ((lVar4 == lVar8) && ((uVar9 & 4) == 0)) {
        param_1[lVar4] = *(float *)((longlong)param_1 + ((uVar9 & 0xfffffffffffffffc) - 4));
        lVar4 = lVar10;
      }
      while (0 < lVar4) {
        lVar7 = lVar4 + -1 >> 1;
        if (fVar1 <= param_1[lVar7]) break;
        param_1[lVar4] = param_1[lVar7];
        lVar4 = lVar7;
      }
      param_1[lVar4] = fVar1;
    }
    param_2 = param_2 + -1;
    if ((longlong)param_2 - (longlong)param_1 < 8) {
      return;
    }
  } while( true );
}



/* ===== 18036d730 FUN_18036d730 ===== */

void FUN_18036d730(undefined8 param_1,ulonglong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  ulonglong uVar13;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  
  if (0x555555555555555 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_18000fb10();
  }
  uVar7 = ((longlong)DAT_181107e20 - (longlong)DAT_181107e10 >> 4) * -0x5555555555555555;
  uVar13 = 0x555555555555555;
  if (uVar7 <= 0x555555555555555 - (uVar7 >> 1)) {
    uVar13 = (uVar7 >> 1) + uVar7;
    if (uVar13 < param_2) {
      uVar13 = param_2;
    }
    else if (0x555555555555555 < uVar13) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  lVar9 = (longlong)DAT_181107e18 - (longlong)DAT_181107e10 >> 4;
  puVar6 = (undefined8 *)FUN_18000fb70(uVar13 * 0x30);
  puVar11 = auStack_38;
  puVar12 = auStack_38;
  puVar8 = puVar6 + lVar9 * 2;
  lVar9 = param_2 + lVar9 * 0x5555555555555555;
  puVar10 = DAT_181107e10;
  puVar5 = DAT_181107e18;
  while( true ) {
    DAT_181107e10 = puVar10;
    DAT_181107e18 = puVar5;
    if (lVar9 == 0) break;
    *puVar8 = 0;
    puVar8[1] = 0;
    puVar8[2] = 0;
    puVar8[3] = 0;
    puVar8[4] = 0;
    puVar8[5] = 0;
    puVar8 = puVar8 + 6;
    lVar9 = lVar9 + -1;
    puVar10 = DAT_181107e10;
    puVar5 = DAT_181107e18;
  }
  puVar8 = puVar6;
  if (puVar10 != puVar5) {
    do {
      uVar1 = puVar10[2];
      uVar2 = puVar10[1];
      uVar3 = *puVar10;
      puVar10[2] = 0;
      puVar10[1] = 0;
      *puVar10 = 0;
      *puVar8 = uVar3;
      puVar8[1] = uVar2;
      puVar8[2] = uVar1;
      uVar1 = puVar10[5];
      uVar2 = puVar10[4];
      uVar3 = puVar10[3];
      puVar10[5] = 0;
      puVar10[4] = 0;
      puVar10[3] = 0;
      puVar10 = puVar10 + 6;
      puVar8[3] = uVar3;
      puVar8[4] = uVar2;
      puVar8[5] = uVar1;
      puVar8 = puVar8 + 6;
    } while (puVar10 != puVar5);
  }
  puVar10 = DAT_181107e18;
  puVar8 = DAT_181107e10;
  if (DAT_181107e10 == (undefined8 *)0x0) goto LAB_18036d90a;
  for (; puVar8 != puVar10; puVar8 = puVar8 + 6) {
    FUN_180068f30(puVar8 + 3);
    FUN_1800132b0(puVar8);
  }
  puVar8 = DAT_181107e10;
  if ((ulonglong)(((longlong)DAT_181107e20 - (longlong)DAT_181107e10 >> 4) << 4) < 0x1000) {
LAB_18036d902:
    puVar12 = puVar11;
  }
  else {
    puVar8 = (undefined8 *)DAT_181107e10[-1];
    puVar10 = (undefined8 *)((longlong)DAT_181107e10 + (-8 - (longlong)puVar8));
    if (&DAT_0000001f < puVar10) {
      pcVar4 = (code *)swi(0x29);
      (*pcVar4)(5);
      puVar11 = auStack_30;
      puVar8 = puVar10;
      goto LAB_18036d902;
    }
  }
  *(undefined8 *)(puVar12 + -8) = 0x18036d90a;
  thunk_FUN_1803d64e0(puVar8);
LAB_18036d90a:
  DAT_181107e10 = puVar6;
  DAT_181107e18 = puVar6 + param_2 * 6;
  DAT_181107e20 = puVar6 + uVar13 * 6;
  return;
}



/* ===== 18036d960 FUN_18036d960 ===== */

void FUN_18036d960(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  float *pfVar4;
  float *pfVar5;
  
  fVar1 = *param_1;
  lVar3 = (longlong)param_3 - (longlong)param_1 >> 2;
  if (lVar3 < 0x29) {
    fVar2 = *param_2;
    if (fVar2 < fVar1) {
      *param_2 = fVar1;
      *param_1 = fVar2;
    }
    fVar1 = *param_3;
    if (fVar1 < *param_2) {
      *param_3 = *param_2;
      *param_2 = fVar1;
      if (fVar1 < *param_1) {
        *param_2 = *param_1;
        *param_1 = fVar1;
      }
    }
  }
  else {
    lVar3 = lVar3 + 1 >> 3;
    fVar2 = param_1[lVar3];
    if (fVar2 < fVar1) {
      param_1[lVar3] = fVar1;
      *param_1 = fVar2;
    }
    fVar1 = param_1[lVar3 * 2];
    if (fVar1 < param_1[lVar3]) {
      param_1[lVar3 * 2] = param_1[lVar3];
      param_1[lVar3] = fVar1;
      if (fVar1 < *param_1) {
        param_1[lVar3] = *param_1;
        *param_1 = fVar1;
      }
    }
    fVar1 = *param_2;
    pfVar4 = param_2 + -lVar3;
    if (fVar1 < *pfVar4) {
      *param_2 = *pfVar4;
      *pfVar4 = fVar1;
    }
    fVar1 = param_2[lVar3];
    if (fVar1 < *param_2) {
      param_2[lVar3] = *param_2;
      *param_2 = fVar1;
      if (fVar1 < *pfVar4) {
        *param_2 = *pfVar4;
        *pfVar4 = fVar1;
      }
    }
    pfVar4 = param_3 + -lVar3;
    pfVar5 = param_3 + lVar3 * -2;
    fVar1 = *pfVar4;
    if (fVar1 < *pfVar5) {
      *pfVar4 = *pfVar5;
      *pfVar5 = fVar1;
    }
    fVar1 = *param_3;
    if (fVar1 < *pfVar4) {
      *param_3 = *pfVar4;
      *pfVar4 = fVar1;
      if (fVar1 < *pfVar5) {
        *pfVar4 = *pfVar5;
        *pfVar5 = fVar1;
      }
    }
    fVar1 = *param_2;
    if (fVar1 < param_1[lVar3]) {
      *param_2 = param_1[lVar3];
      param_1[lVar3] = fVar1;
    }
    fVar1 = *pfVar4;
    if (fVar1 < *param_2) {
      *pfVar4 = *param_2;
      *param_2 = fVar1;
      if (fVar1 < param_1[lVar3]) {
        *param_2 = param_1[lVar3];
        param_1[lVar3] = fVar1;
        return;
      }
    }
  }
  return;
}



/* ===== 18036daf0 FUN_18036daf0 ===== */

undefined8 * FUN_18036daf0(undefined8 *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  
  pfVar4 = param_3 + 1;
  while (pfVar5 = param_3, param_2 < pfVar5) {
    if ((pfVar5[-1] < *pfVar5) || (param_3 = pfVar5 + -1, *pfVar5 < pfVar5[-1])) break;
  }
  if (pfVar4 < param_4) {
    do {
      if ((*pfVar4 < *pfVar5) || (*pfVar5 < *pfVar4)) break;
      pfVar4 = pfVar4 + 1;
    } while (pfVar4 < param_4);
  }
  pfVar7 = pfVar4;
  pfVar8 = pfVar5;
  do {
    pfVar6 = pfVar4;
    if (pfVar4 < param_4) {
      if (0xf < (ulonglong)((longlong)param_4 + (3 - (longlong)pfVar4))) {
        do {
          fVar1 = *pfVar4;
          if (fVar1 <= *pfVar5) {
            pfVar6 = pfVar4;
            if (fVar1 < *pfVar5) goto joined_r0x00018036dc93;
            if (pfVar7 != pfVar4) {
              fVar2 = *pfVar7;
              *pfVar7 = fVar1;
              *pfVar4 = fVar2;
            }
            pfVar7 = pfVar7 + 1;
          }
          fVar1 = pfVar4[1];
          pfVar6 = pfVar4 + 1;
          if (fVar1 <= *pfVar5) {
            if (fVar1 < *pfVar5) goto joined_r0x00018036dc93;
            if (pfVar7 != pfVar6) {
              fVar2 = *pfVar7;
              *pfVar7 = fVar1;
              *pfVar6 = fVar2;
            }
            pfVar7 = pfVar7 + 1;
          }
          fVar1 = pfVar4[2];
          pfVar6 = pfVar4 + 2;
          if (fVar1 <= *pfVar5) {
            if (fVar1 < *pfVar5) goto joined_r0x00018036dc93;
            if (pfVar7 != pfVar6) {
              fVar2 = *pfVar7;
              *pfVar7 = fVar1;
              *pfVar6 = fVar2;
            }
            pfVar7 = pfVar7 + 1;
          }
          fVar1 = pfVar4[3];
          pfVar6 = pfVar4 + 3;
          if (fVar1 <= *pfVar5) {
            if (fVar1 < *pfVar5) goto joined_r0x00018036dc93;
            if (pfVar7 != pfVar6) {
              fVar2 = *pfVar7;
              *pfVar7 = fVar1;
              *pfVar6 = fVar2;
            }
            pfVar7 = pfVar7 + 1;
          }
          pfVar4 = pfVar4 + 4;
        } while (pfVar4 < param_4 + -3);
      }
      for (; pfVar6 = pfVar4, pfVar4 < param_4; pfVar4 = pfVar4 + 1) {
        fVar1 = *pfVar4;
        if (fVar1 <= *pfVar5) {
          if (fVar1 < *pfVar5) break;
          if (pfVar7 != pfVar4) {
            fVar2 = *pfVar7;
            *pfVar7 = fVar1;
            *pfVar4 = fVar2;
          }
          pfVar7 = pfVar7 + 1;
        }
      }
    }
joined_r0x00018036dc93:
    pfVar4 = pfVar6;
    pfVar3 = pfVar8;
    if (param_2 < pfVar3) {
      fVar1 = pfVar3[-1];
      pfVar8 = pfVar3 + -1;
      pfVar6 = pfVar4;
      if (*pfVar5 <= fVar1) {
        if (*pfVar5 < fVar1) goto LAB_18036dcdd;
        if (pfVar3 != pfVar5) {
          fVar2 = pfVar5[-1];
          pfVar5[-1] = fVar1;
          *pfVar8 = fVar2;
        }
        pfVar5 = pfVar5 + -1;
      }
      goto joined_r0x00018036dc93;
    }
LAB_18036dcdd:
    if (pfVar3 == param_2) {
      if (pfVar4 == param_4) {
        *param_1 = pfVar5;
        param_1[1] = pfVar7;
        return param_1;
      }
      if (pfVar7 != pfVar4) {
        fVar1 = *pfVar5;
        *pfVar5 = *pfVar7;
        *pfVar7 = fVar1;
      }
      fVar1 = *pfVar5;
      pfVar7 = pfVar7 + 1;
      *pfVar5 = *pfVar4;
      *pfVar4 = fVar1;
      pfVar4 = pfVar4 + 1;
      pfVar5 = pfVar5 + 1;
      pfVar8 = pfVar3;
    }
    else {
      pfVar8 = pfVar3 + -1;
      if (pfVar4 == param_4) {
        pfVar6 = pfVar5 + -1;
        if (pfVar5 != pfVar3) {
          fVar1 = *pfVar8;
          *pfVar8 = *pfVar6;
          *pfVar6 = fVar1;
        }
        pfVar5 = pfVar7 + -1;
        pfVar7 = pfVar7 + -1;
        fVar1 = *pfVar6;
        *pfVar6 = *pfVar5;
        *pfVar7 = fVar1;
        pfVar5 = pfVar6;
      }
      else {
        fVar1 = *pfVar4;
        *pfVar4 = *pfVar8;
        pfVar4 = pfVar4 + 1;
        *pfVar8 = fVar1;
      }
    }
  } while( true );
}



/* ===== 18036dda0 FUN_18036dda0 ===== */

void FUN_18036dda0(longlong param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x298))(param_2,param_1);
  (**(code **)(*param_2 + 0x270))(param_2,param_1 + 8);
  (**(code **)(*param_2 + 0x260))(param_2,param_1 + 0x10,0,0);
  (**(code **)(*param_2 + 0x290))(param_2,param_1 + 0x18,0,0);
  (**(code **)(*param_2 + 0x310))(param_2,param_1 + 0x20,0,0);
  (**(code **)(*param_2 + 0x330))(param_2,param_1 + 0x28,0,0);
  (**(code **)(*param_2 + 0x250))(param_2,param_1 + 0x30,0,0);
  (**(code **)(*param_2 + 0x248))(param_2,0,1,param_1 + 0x38);
  (**(code **)(*param_2 + 600))(param_2,0,1,param_1 + 0x40);
  (**(code **)(*param_2 + 0x268))(param_2,0,1,param_1 + 0x48);
  (**(code **)(*param_2 + 0x240))(param_2,0,1,param_1 + 0x50);
  (**(code **)(*param_2 + 0x2f0))(param_2,param_1 + 0x58);
  (**(code **)(*param_2 + 0x2d8))(param_2,param_1 + 0x60,param_1 + 0x68,param_1 + 0x78);
  (**(code **)(*param_2 + 0x2e0))(param_2,param_1 + 0x80,param_1 + 0x88);
  (**(code **)(*param_2 + 0x2f8))(param_2,param_1 + 0x8c,param_1 + 0x90);
                    /* WARNING: Could not recover jumptable at 0x00018036df1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x2c8))(param_2,8,param_1 + 0x210,param_1 + 0x250);
  return;
}



/* ===== 18036df30 FUN_18036df30 ===== */

void FUN_18036df30(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  (**(code **)(*param_2 + 0xc0))(param_2,(int)*param_1);
  (**(code **)(*param_2 + 0x88))(param_2,param_1[1]);
  (**(code **)(*param_2 + 0x58))(param_2,param_1[2],0,0);
  (**(code **)(*param_2 + 0xb8))(param_2,param_1[3],0,0);
  (**(code **)(*param_2 + 0x1e0))(param_2,param_1[4],0,0);
  (**(code **)(*param_2 + 0x200))(param_2,param_1[5],0,0);
  (**(code **)(*param_2 + 0x48))(param_2,param_1[6],0,0);
  (**(code **)(*param_2 + 0x40))(param_2,0,1,param_1 + 7);
  plVar1 = param_1 + 8;
  (**(code **)(*param_2 + 0x50))(param_2,0,1,plVar1);
  (**(code **)(*param_2 + 0x80))(param_2,0,1,param_1 + 9);
  (**(code **)(*param_2 + 0x38))(param_2,0,1,param_1 + 10);
  (**(code **)(*param_2 + 0x158))(param_2,param_1[0xb]);
  (**(code **)(*param_2 + 0x118))(param_2,param_1[0xc],param_1 + 0xd,(int)param_1[0xf]);
  (**(code **)(*param_2 + 0x120))(param_2,param_1[0x10],(int)param_1[0x11]);
  (**(code **)(*param_2 + 0x160))(param_2,*(undefined4 *)((longlong)param_1 + 0x8c),param_1 + 0x12);
  plVar3 = param_1 + 0x42;
  plVar2 = param_1 + 0x4a;
  (**(code **)(*param_2 + 0x108))(param_2,8,plVar3,*plVar2);
  if ((longlong *)param_1[1] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[1] + 0x10))();
    param_1[1] = 0;
  }
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[2] + 0x10))();
    param_1[2] = 0;
  }
  if ((longlong *)param_1[3] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[3] + 0x10))();
    param_1[3] = 0;
  }
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[4] + 0x10))();
    param_1[4] = 0;
  }
  if ((longlong *)param_1[5] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[5] + 0x10))();
    param_1[5] = 0;
  }
  if ((longlong *)param_1[6] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[6] + 0x10))();
    param_1[6] = 0;
  }
  if ((longlong *)param_1[7] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[7] + 0x10))();
    param_1[7] = 0;
  }
  if ((longlong *)*plVar1 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*plVar1 + 0x10))();
    *plVar1 = 0;
  }
  if ((longlong *)param_1[9] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[9] + 0x10))();
    param_1[9] = 0;
  }
  if ((longlong *)param_1[10] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[10] + 0x10))();
    param_1[10] = 0;
  }
  if ((longlong *)param_1[0xb] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xb] + 0x10))();
    param_1[0xb] = 0;
  }
  if ((longlong *)param_1[0xc] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xc] + 0x10))();
    param_1[0xc] = 0;
  }
  if ((longlong *)param_1[0x10] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x10] + 0x10))();
    param_1[0x10] = 0;
  }
  if (param_1 != plVar1) {
    do {
      if ((longlong *)*plVar3 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar3 + 0x10))();
        *plVar3 = 0;
      }
      plVar3 = plVar3 + 1;
    } while (plVar3 != plVar2);
  }
  if ((longlong *)*plVar2 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*plVar2 + 0x10))();
    *plVar2 = 0;
  }
  return;
}



/* ===== 18036e1f0 FUN_18036e1f0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_18036e1f0(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined1 auStack_1e8 [32];
  undefined4 local_1c8;
  undefined4 local_1c4;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined4 local_1b0;
  undefined8 local_1ac;
  undefined4 local_1a4;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined4 local_188;
  undefined8 local_184;
  undefined8 uStack_17c;
  undefined4 local_174;
  undefined4 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined4 local_138;
  undefined1 local_128 [36];
  undefined1 local_104;
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_1e8;
  local_1a0 = _DAT_1808ad680;
  uStack_198 = _UNK_1808ad688;
  local_190 = 0;
  local_174 = 0;
  local_188 = 1;
  local_170 = 0x7f7fffff;
  local_1ac = 0;
  local_1a4 = 0;
  local_1c8 = 3;
  local_1c0 = 0;
  uStack_1b8 = 0;
  local_1c4 = 1;
  local_184 = 0;
  uStack_17c = 0;
  local_1b0 = 1;
  FUN_180540170(local_128,0,0x108);
  local_104 = 0xf;
  local_158 = 0;
  uStack_150 = 0;
  local_168 = _DAT_1808ad3f0;
  uStack_160 = _UNK_1808ad3f8;
  local_138 = 0;
  local_148 = 0;
  uStack_140 = 0;
  iVar1 = (**(code **)(*param_2 + 0xb8))(param_2,&local_1a0,param_1 + 0x18);
  if ((((iVar1 < 0) ||
       (iVar1 = (**(code **)(*param_2 + 0xb0))(param_2,&local_1c8,param_1), iVar1 < 0)) ||
      (iVar1 = (**(code **)(*param_2 + 0xa0))(param_2,local_128,param_1 + 8), iVar1 < 0)) ||
     (iVar1 = (**(code **)(*param_2 + 0xa8))(param_2,&local_168,param_1 + 0x10), iVar1 < 0)) {
    FUN_18036e360(param_1);
    return 0;
  }
  return 1;
}



/* ===== 18036e360 FUN_18036e360 ===== */

void FUN_18036e360(longlong *param_1)

{
  if ((longlong *)param_1[3] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[3] + 0x10))();
    param_1[3] = 0;
  }
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
    *param_1 = 0;
  }
  return;
}



/* ===== 18036e3d0 FUN_18036e3d0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18036e3d0(undefined8 *param_1,longlong *param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_180919500 ^ (ulonglong)auStack_88;
  local_60 = param_8;
  local_58 = 0;
  local_48 = 0;
  local_4c = param_5;
  local_44 = 0x3f800000;
  local_40 = 0;
  uStack_38 = 0;
  local_68 = param_3;
  local_50 = param_4;
  (**(code **)(*param_2 + 0x108))(param_2,1,&local_68,0);
  (**(code **)(*param_2 + 0x160))(param_2,1,&local_58);
  (**(code **)(*param_2 + 0x158))(param_2,*param_1);
  (**(code **)(*param_2 + 0x118))(param_2,param_1[1],&local_40,0xffffffff);
  (**(code **)(*param_2 + 0x120))(param_2,param_1[2],0);
  (**(code **)(*param_2 + 0x88))(param_2,0);
  (**(code **)(*param_2 + 0xc0))(param_2,4);
  (**(code **)(*param_2 + 0x58))(param_2,param_6,0,0);
  (**(code **)(*param_2 + 0xb8))(param_2,0,0,0);
  (**(code **)(*param_2 + 0x1e0))(param_2,0,0,0);
  (**(code **)(*param_2 + 0x200))(param_2,0,0,0);
  (**(code **)(*param_2 + 0x48))(param_2,param_7,0,0);
  (**(code **)(*param_2 + 0x50))(param_2,0,1,param_1 + 3);
  (**(code **)(*param_2 + 0x80))(param_2,0,1,&local_60);
  return;
}



/* ===== 18036e580 FUN_18036e580 ===== */

bool FUN_18036e580(void)

{
  HMODULE hModule;
  bool bVar1;
  
  bVar1 = false;
  if (DAT_1811162a0 == (FARPROC)0x0) {
    hModule = GetModuleHandleA("d3dcompiler_47.dll");
    if (hModule == (HMODULE)0x0) {
      hModule = LoadLibraryA("d3dcompiler_47.dll");
      if (hModule == (HMODULE)0x0) {
        return false;
      }
    }
    DAT_1811162a0 = GetProcAddress(hModule,"D3DCompile");
    bVar1 = DAT_1811162a0 == (FARPROC)0x0;
  }
  return !bVar1;
}



/* ===== 18036e5f0 FUN_18036e5f0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong *
FUN_18036e5f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6,undefined8 *param_7)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  HMODULE hModule;
  INT_PTR IVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  char *pcVar9;
  longlong lVar10;
  char **ppcVar11;
  ulonglong uVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  bool bVar15;
  undefined8 uStack_110;
  undefined1 auStack_108 [8];
  undefined1 auStack_100 [24];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  longlong **local_c0;
  longlong **local_b8;
  longlong *local_a8;
  longlong *local_a0;
  undefined4 local_98;
  char *local_90;
  undefined8 local_88;
  undefined8 local_80;
  ulonglong local_78;
  char *local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  ulonglong local_58;
  ulonglong local_50;
  
  local_50 = DAT_180919500 ^ (ulonglong)auStack_108;
  local_98 = 0;
  if ((DAT_1811162a0 == (FARPROC)0x0) &&
     (((hModule = GetModuleHandleA("d3dcompiler_47.dll"), hModule == (HMODULE)0x0 &&
       (hModule = LoadLibraryA("d3dcompiler_47.dll"), hModule == (HMODULE)0x0)) ||
      (DAT_1811162a0 = GetProcAddress(hModule,"D3DCompile"), DAT_1811162a0 == (FARPROC)0x0)))) {
    FUN_180029840(param_7,"d3dcompiler_47.dll not found",0x1c);
    puVar14 = auStack_108;
  }
  else {
    local_a0 = (longlong *)0x0;
    local_a8 = (longlong *)0x0;
    local_b8 = &local_a8;
    local_c0 = &local_a0;
    local_c8 = 0;
    local_d0 = param_6;
    local_d8 = param_5;
    local_e8 = 0;
    local_e0 = param_4;
    IVar5 = (*DAT_1811162a0)(param_1,param_2,param_3,0);
    puVar14 = auStack_108;
    if ((-1 < (int)IVar5) && (local_a0 != (longlong *)0x0)) {
      if (local_a8 != (longlong *)0x0) {
        (**(code **)(*local_a8 + 0x10))();
        puVar14 = auStack_108;
      }
      goto LAB_18036e8c4;
    }
    bVar15 = local_a8 == (longlong *)0x0;
    if (bVar15) {
      local_88 = 0;
      local_90 = (char *)FUN_18000fb70(0x20);
      uVar4 = s_shader_compile_failed_18088bf40._12_4_;
      uVar3 = s_shader_compile_failed_18088bf40._8_4_;
      uVar2 = s_shader_compile_failed_18088bf40._4_4_;
      local_80 = 0x15;
      local_78 = 0x1f;
      *(undefined4 *)local_90 = s_shader_compile_failed_18088bf40._0_4_;
      *(undefined4 *)(local_90 + 4) = uVar2;
      *(undefined4 *)(local_90 + 8) = uVar3;
      *(undefined4 *)(local_90 + 0xc) = uVar4;
      *(ulonglong *)(local_90 + 0xd) =
           CONCAT53(s_shader_compile_failed_18088bf40._16_5_,
                    s_shader_compile_failed_18088bf40._13_3_);
      local_90[0x15] = '\0';
      ppcVar11 = &local_90;
    }
    else {
      uVar6 = (**(code **)(*local_a8 + 0x20))();
      local_70 = (char *)0x0;
      uStack_68 = 0;
      local_60 = 0;
      local_58 = 0;
      uVar7 = (**(code **)(*local_a8 + 0x18))();
      FUN_1800133a0(&local_70,uVar7,uVar6);
      ppcVar11 = &local_70;
    }
    FUN_18002ba60(param_7,ppcVar11);
    if ((bVar15) && (0xf < local_78)) {
      uVar12 = local_78 + 1;
      pcVar9 = local_90;
      if (0xfff < uVar12) {
        pcVar9 = *(char **)(local_90 + -8);
        if ((char *)0x1f < local_90 + (-8 - (longlong)pcVar9)) {
          pcVar1 = (code *)swi(0x29);
          (*pcVar1)(5);
          puVar13 = auStack_100;
          goto LAB_18036e86c;
        }
        uVar12 = local_78 + 0x28;
      }
      thunk_FUN_1803d64e0(pcVar9,uVar12);
    }
    puVar13 = auStack_108;
    if ((!bVar15) && (0xf < local_58)) {
      uVar12 = local_58 + 1;
      pcVar9 = local_70;
      if (0xfff < uVar12) {
        pcVar9 = *(char **)(local_70 + -8);
        if ((char *)0x1f < local_70 + (-8 - (longlong)pcVar9)) {
LAB_18036e86c:
          lVar10 = 5;
          pcVar1 = (code *)swi(0x29);
          (*pcVar1)();
          puVar14 = puVar13 + 8;
          goto LAB_18036e873;
        }
        uVar12 = local_58 + 0x28;
      }
      thunk_FUN_1803d64e0(pcVar9,uVar12);
    }
    puVar14 = auStack_108;
    lVar10 = param_7[2];
    while (lVar10 != 0) {
      uVar12 = param_7[3];
      puVar8 = param_7;
      if (0xf < uVar12) {
        puVar8 = (undefined8 *)*param_7;
      }
      if (*(char *)((longlong)puVar8 + lVar10 + -1) != '\0') {
        puVar8 = param_7;
        if (0xf < uVar12) {
          puVar8 = (undefined8 *)*param_7;
        }
        if (*(char *)((longlong)puVar8 + lVar10 + -1) != '\n') {
          if (uVar12 < 0x10) {
LAB_18036e873:
            puVar8 = param_7;
          }
          else {
            puVar8 = (undefined8 *)*param_7;
          }
          if (*(char *)((longlong)puVar8 + lVar10 + -1) != '\r') break;
        }
      }
      param_7[2] = lVar10 + -1;
      puVar8 = param_7;
      if (0xf < (ulonglong)param_7[3]) {
        puVar8 = (undefined8 *)*param_7;
      }
      *(undefined1 *)(lVar10 + -1 + (longlong)puVar8) = 0;
      lVar10 = param_7[2];
    }
    if (local_a8 != (longlong *)0x0) {
      pcVar1 = *(code **)(*local_a8 + 0x10);
      *(undefined8 *)(puVar14 + -8) = 0x18036e8af;
      (*pcVar1)();
      local_a8 = (longlong *)0x0;
    }
    if (local_a0 != (longlong *)0x0) {
      pcVar1 = *(code **)(*local_a0 + 0x10);
      *(undefined8 *)(puVar14 + -8) = 0x18036e8c2;
      (*pcVar1)();
    }
  }
  local_a0 = (longlong *)0x0;
LAB_18036e8c4:
  *(undefined8 *)(puVar14 + -8) = 0x18036e8d0;
  return local_a0;
}



/* ===== 18036e8f0 FUN_18036e8f0 ===== */

undefined1 FUN_18036e8f0(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  int local_res8 [2];
  int local_res10 [6];
  
  if (param_1 == (longlong *)0x0) {
    return 0;
  }
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (param_1 == *(longlong **)(lVar1 + 0x20)) {
    return *(undefined1 *)(lVar1 + 0x10);
  }
  *(longlong **)(lVar1 + 0x20) = param_1;
  local_res10[0] = 0;
  local_res8[0] = 4;
  iVar2 = (**(code **)(*param_1 + 0x20))(param_1,&DAT_1806a4bb8,local_res8,local_res10);
  if (((iVar2 < 0) || (local_res8[0] != 4)) || (local_res10[0] != 1)) {
    *(undefined1 *)(lVar1 + 0x10) = 0;
    return 0;
  }
  *(undefined1 *)(lVar1 + 0x10) = 1;
  return 1;
}



/* ===== 18036e9b0 FUN_18036e9b0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_18036e9b0(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  undefined1 auStack_98 [32];
  longlong *local_78;
  longlong local_70;
  longlong *local_68;
  undefined *local_60;
  undefined1 local_58 [16];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_180919500 ^ (ulonglong)auStack_98;
  local_60 = &DAT_1809f76c0;
  local_78 = param_2;
  iVar1 = FUN_1804e4d70(&DAT_1809f76c0);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809f770c == 0x7fffffff) {
    DAT_1809f770c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  if (local_78 == (longlong *)0x0) {
    lVar2 = DAT_181107e60;
    if (DAT_181107e60 != 0) goto LAB_18036eb95;
  }
  else {
    uVar4 = (((((((((ulonglong)local_78 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                  (ulonglong)local_78 >> 8 & 0xff) * 0x100000001b3 ^
                 (ulonglong)local_78 >> 0x10 & 0xff) * 0x100000001b3 ^
                (ulonglong)local_78 >> 0x18 & 0xff) * 0x100000001b3 ^
               (ulonglong)local_78 >> 0x20 & 0xff) * 0x100000001b3 ^
              (ulonglong)local_78 >> 0x28 & 0xff) * 0x100000001b3 ^
             (ulonglong)local_78 >> 0x30 & 0xff) * 0x100000001b3 ^ (ulonglong)local_78 >> 0x38) *
            0x100000001b3 & DAT_181107eb0;
    lVar2 = *(longlong *)(DAT_181107e98 + 8 + uVar4 * 0x10);
    if (lVar2 == DAT_181107e88) {
LAB_18036eabb:
      lVar2 = DAT_181107e88;
    }
    else {
      plVar3 = *(longlong **)(lVar2 + 0x10);
      while (local_78 != plVar3) {
        if (lVar2 == *(longlong *)(DAT_181107e98 + uVar4 * 0x10)) goto LAB_18036eabb;
        lVar2 = *(longlong *)(lVar2 + 8);
        plVar3 = *(longlong **)(lVar2 + 0x10);
      }
      if (lVar2 == 0) goto LAB_18036eabb;
    }
    if (lVar2 != DAT_181107e88) {
      lVar2 = *(longlong *)(lVar2 + 0x18);
      goto LAB_18036eb95;
    }
  }
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  if (local_78 == (longlong *)0x0) {
    local_48 = 0x300000000;
    uStack_30 = 1;
  }
  else {
    (**(code **)(*local_78 + 0x38))(local_78,&local_48);
  }
  local_48 = CONCAT44(local_48._4_4_,2);
  local_68 = (longlong *)0x0;
  (**(code **)(*param_1 + 0x18))(param_1,&local_68);
  if (local_68 != (longlong *)0x0) {
    local_70 = 0;
    (**(code **)(*local_68 + 0xb0))(local_68,&local_48,&local_70);
    (**(code **)(*local_68 + 0x10))();
    if (local_70 != 0) {
      if (local_78 == (longlong *)0x0) {
        DAT_181107e60 = local_70;
        lVar2 = local_70;
      }
      else {
        uVar5 = (**(code **)(*local_78 + 8))();
        lVar2 = local_70;
        plVar3 = (longlong *)FUN_18036eeb0(uVar5,local_58,&local_78);
        *(longlong *)(*plVar3 + 0x18) = lVar2;
        lVar2 = local_70;
      }
      goto LAB_18036eb95;
    }
  }
  lVar2 = 0;
LAB_18036eb95:
  FUN_1804e4e90(&DAT_1809f76c0);
  return lVar2;
}



/* ===== 18036ebe0 FUN_18036ebe0 ===== */

void FUN_18036ebe0(undefined8 *param_1)

{
  if (*(char *)(param_1 + 2) != '\0') {
    (**(code **)(*(longlong *)*param_1 + 0x158))((longlong *)*param_1,param_1[1]);
  }
  if ((longlong *)param_1[1] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[1] + 0x10))();
  }
  return;
}



/* ===== 18036ec20 FUN_18036ec20 ===== */

int FUN_18036ec20(undefined8 param_1,longlong param_2,ulonglong param_3,undefined8 param_4,
                 longlong *param_5)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 local_38 [4];
  
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + 1;
  UNLOCK();
  plVar4 = param_5;
  iVar2 = (*DAT_181107e48)();
  if ((((-1 < iVar2) && (param_5 != (longlong *)0x0)) && (*param_5 != 0)) &&
     ((param_2 != 0 && (0x14 < param_3)))) {
    lVar1 = param_2 + param_3;
    if ((longlong)param_3 < 0x15) {
      lVar3 = lVar1;
    }
    else {
      lVar3 = thunk_FUN_1804e92d0(param_2,lVar1,"g_OverrideColorFactor",0x15,plVar4);
    }
    if (lVar3 != lVar1) {
      local_38[0] = 1;
      (**(code **)(*(longlong *)*param_5 + 0x28))((longlong *)*param_5,&DAT_1806a4bb8,4,local_38);
    }
  }
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + -1;
  UNLOCK();
  return iVar2;
}



/* ===== 18036ecd0 FUN_18036ecd0 ===== */

void FUN_18036ecd0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x58);
  if ((param_2 == 0) || (*(longlong *)(param_2 + 0x58) != lVar3)) {
    if ((lVar3 != 0) && (iVar2 = FUN_180428df0(lVar3,FUN_18036f570,&DAT_181107e78), iVar2 != 0)) {
      uVar1 = FUN_180429510(iVar2);
      FUN_1802b2560("[error] wireframe hook failed | %s | %s","vs_set_shader",uVar1);
      DAT_181107e78 = 0;
    }
    lVar3 = *(longlong *)(param_1 + 0x60);
    if (param_2 != 0) goto LAB_18036ed45;
LAB_18036ed51:
    if ((lVar3 != 0) && (iVar2 = FUN_180428df0(lVar3,FUN_18036f480,&DAT_181107e40), iVar2 != 0)) {
      uVar1 = FUN_180429510(iVar2);
      FUN_1802b2560("[error] wireframe hook failed | %s | %s","draw_indexed",uVar1);
      DAT_181107e40 = 0;
    }
    lVar3 = *(longlong *)(param_1 + 0x68);
    if (param_2 != 0) goto LAB_18036ed9a;
LAB_18036eda9:
    if ((lVar3 != 0) && (iVar2 = FUN_180428df0(lVar3,FUN_18036f390,&DAT_181107e68), iVar2 != 0)) {
      uVar1 = FUN_180429510(iVar2);
      FUN_1802b2560("[error] wireframe hook failed | %s | %s",&DAT_18088c160,uVar1);
      DAT_181107e68 = 0;
    }
    lVar3 = *(longlong *)(param_1 + 0xa0);
    if (param_2 != 0) goto LAB_18036edf5;
LAB_18036ee07:
    if ((lVar3 != 0) && (iVar2 = FUN_180428df0(lVar3,FUN_18036f290,&DAT_181107ec0), iVar2 != 0)) {
      uVar1 = FUN_180429510(iVar2);
      FUN_1802b2560("[error] wireframe hook failed | %s | %s","draw_indexed_instanced",uVar1);
      DAT_181107ec0 = 0;
    }
    lVar3 = *(longlong *)(param_1 + 0xa8);
    if (param_2 == 0) goto LAB_18036ee5c;
  }
  else {
    lVar3 = *(longlong *)(param_1 + 0x60);
LAB_18036ed45:
    if (*(longlong *)(param_2 + 0x60) != lVar3) goto LAB_18036ed51;
    lVar3 = *(longlong *)(param_1 + 0x68);
LAB_18036ed9a:
    if (*(longlong *)(param_2 + 0x68) != lVar3) goto LAB_18036eda9;
    lVar3 = *(longlong *)(param_1 + 0xa0);
LAB_18036edf5:
    if (*(longlong *)(param_2 + 0xa0) != lVar3) goto LAB_18036ee07;
    lVar3 = *(longlong *)(param_1 + 0xa8);
  }
  if (*(longlong *)(param_2 + 0xa8) == lVar3) {
    return;
  }
LAB_18036ee5c:
  if ((lVar3 != 0) && (iVar2 = FUN_180428df0(lVar3,FUN_18036f1a0,&DAT_181107e38), iVar2 != 0)) {
    uVar1 = FUN_180429510(iVar2);
    FUN_1802b2560("[error] wireframe hook failed | %s | %s","draw_instanced",uVar1);
    DAT_181107e38 = 0;
  }
  return;
}



/* ===== 18036eeb0 FUN_18036eeb0 ===== */

undefined8 * FUN_18036eeb0(undefined8 param_1,undefined8 *param_2,byte *param_3,undefined4 param_4)

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
  puVar6 = (undefined8 *)(DAT_181107eb0 & uVar7);
  puVar3 = *(undefined8 **)(DAT_181107e98 + 8 + (longlong)puVar6 * 0x10);
  puVar8 = DAT_181107e88;
  if (puVar3 != DAT_181107e88) {
    puVar6 = *(undefined8 **)(DAT_181107e98 + (longlong)puVar6 * 0x10);
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
  if (DAT_181107e90 == 0x7ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4cd0("unordered_map/set too long");
  }
  puVar3 = (undefined8 *)FUN_1804ecaa0(0x20,puVar6,DAT_181107e98,param_4,&DAT_181107e88,0);
  puVar3[2] = *(undefined8 *)param_3;
  puVar3[3] = 0;
  uVar2 = DAT_181107eb8;
  if (DAT_181107e80 < (float)(DAT_181107e90 + 1) / (float)DAT_181107eb8) {
    fVar10 = (float)FUN_18053ef70((float)(DAT_181107e90 + 1) / DAT_181107e80);
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
    FUN_18036fa20(uVar5,uVar9);
    puVar6 = *(undefined8 **)(DAT_181107e98 + 8 + (DAT_181107eb0 & uVar7) * 0x10);
    puVar8 = DAT_181107e88;
    if (puVar6 != DAT_181107e88) {
      lVar4 = puVar6[2];
      puVar8 = puVar6;
      while (puVar3[2] != lVar4) {
        if (puVar8 == *(undefined8 **)(DAT_181107e98 + (DAT_181107eb0 & uVar7) * 0x10))
        goto LAB_18036f119;
        puVar8 = (undefined8 *)puVar8[1];
        lVar4 = puVar8[2];
      }
      puVar8 = (undefined8 *)*puVar8;
    }
  }
LAB_18036f119:
  puVar6 = (undefined8 *)puVar8[1];
  DAT_181107e90 = DAT_181107e90 + 1;
  *puVar3 = puVar8;
  puVar3[1] = puVar6;
  *puVar6 = puVar3;
  puVar8[1] = puVar3;
  lVar4 = DAT_181107e98;
  uVar7 = DAT_181107eb0 & uVar7;
  puVar1 = *(undefined8 **)(DAT_181107e98 + uVar7 * 0x10);
  if (puVar1 == DAT_181107e88) {
    *(undefined8 **)(DAT_181107e98 + uVar7 * 0x10) = puVar3;
  }
  else {
    if (puVar1 == puVar8) {
      *(undefined8 **)(DAT_181107e98 + uVar7 * 0x10) = puVar3;
      goto LAB_18036f178;
    }
    if (*(undefined8 **)(DAT_181107e98 + 8 + uVar7 * 0x10) != puVar6) goto LAB_18036f178;
  }
  *(undefined8 **)(lVar4 + 8 + uVar7 * 0x10) = puVar3;
LAB_18036f178:
  *param_2 = puVar3;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



/* ===== 18036f1a0 FUN_18036f1a0 ===== */

void FUN_18036f1a0(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  longlong lVar1;
  longlong *local_48;
  longlong *plStack_40;
  char local_38;
  
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + 1;
  UNLOCK();
  local_48 = (longlong *)0x0;
  plStack_40 = (longlong *)0x0;
  local_38 = '\0';
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((param_1 == *(longlong **)(lVar1 + 0x18)) && (*(char *)(lVar1 + 0x11) != '\0')) {
    (**(code **)(*param_1 + 0x2f0))(param_1,&plStack_40);
    lVar1 = FUN_18036e9b0(param_1,plStack_40);
    local_48 = param_1;
    if (lVar1 != 0) {
      (**(code **)(*param_1 + 0x158))(param_1,lVar1);
      local_38 = '\x01';
    }
  }
  (*DAT_181107e38)(param_1,param_2,param_3,param_4,param_5);
  if (local_38 != '\0') {
    (**(code **)(*local_48 + 0x158))(local_48,plStack_40);
  }
  if (plStack_40 != (longlong *)0x0) {
    (**(code **)(*plStack_40 + 0x10))();
  }
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + -1;
  UNLOCK();
  return;
}



/* ===== 18036f290 FUN_18036f290 ===== */

void FUN_18036f290(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6)

{
  longlong lVar1;
  longlong *local_48;
  longlong *plStack_40;
  char local_38;
  
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + 1;
  UNLOCK();
  local_48 = (longlong *)0x0;
  plStack_40 = (longlong *)0x0;
  local_38 = '\0';
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((param_1 == *(longlong **)(lVar1 + 0x18)) && (*(char *)(lVar1 + 0x11) != '\0')) {
    (**(code **)(*param_1 + 0x2f0))(param_1,&plStack_40);
    lVar1 = FUN_18036e9b0(param_1,plStack_40);
    local_48 = param_1;
    if (lVar1 != 0) {
      (**(code **)(*param_1 + 0x158))(param_1,lVar1);
      local_38 = '\x01';
    }
  }
  (*DAT_181107ec0)(param_1,param_2,param_3,param_4,param_5,param_6);
  if (local_38 != '\0') {
    (**(code **)(*local_48 + 0x158))(local_48,plStack_40);
  }
  if (plStack_40 != (longlong *)0x0) {
    (**(code **)(*plStack_40 + 0x10))();
  }
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + -1;
  UNLOCK();
  return;
}



/* ===== 18036f390 FUN_18036f390 ===== */

void FUN_18036f390(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong *local_28;
  longlong *plStack_20;
  char local_18;
  
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + 1;
  UNLOCK();
  local_28 = (longlong *)0x0;
  plStack_20 = (longlong *)0x0;
  local_18 = '\0';
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((param_1 == *(longlong **)(lVar1 + 0x18)) && (*(char *)(lVar1 + 0x11) != '\0')) {
    (**(code **)(*param_1 + 0x2f0))(param_1,&plStack_20);
    lVar1 = FUN_18036e9b0(param_1,plStack_20);
    local_28 = param_1;
    if (lVar1 != 0) {
      (**(code **)(*param_1 + 0x158))(param_1,lVar1);
      local_18 = '\x01';
    }
  }
  (*DAT_181107e68)(param_1,param_2,param_3);
  if (local_18 != '\0') {
    (**(code **)(*local_28 + 0x158))(local_28,plStack_20);
  }
  if (plStack_20 != (longlong *)0x0) {
    (**(code **)(*plStack_20 + 0x10))();
  }
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + -1;
  UNLOCK();
  return;
}



/* ===== 18036f480 FUN_18036f480 ===== */

void FUN_18036f480(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  longlong *local_48;
  longlong *plStack_40;
  char local_38;
  
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + 1;
  UNLOCK();
  local_48 = (longlong *)0x0;
  plStack_40 = (longlong *)0x0;
  local_38 = '\0';
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((param_1 == *(longlong **)(lVar1 + 0x18)) && (*(char *)(lVar1 + 0x11) != '\0')) {
    (**(code **)(*param_1 + 0x2f0))(param_1,&plStack_40);
    lVar1 = FUN_18036e9b0(param_1,plStack_40);
    local_48 = param_1;
    if (lVar1 != 0) {
      (**(code **)(*param_1 + 0x158))(param_1,lVar1);
      local_38 = '\x01';
    }
  }
  (*DAT_181107e40)(param_1,param_2,param_3,param_4);
  if (local_38 != '\0') {
    (**(code **)(*local_48 + 0x158))(local_48,plStack_40);
  }
  if (plStack_40 != (longlong *)0x0) {
    (**(code **)(*plStack_40 + 0x10))();
  }
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + -1;
  UNLOCK();
  return;
}



/* ===== 18036f570 FUN_18036f570 ===== */

void FUN_18036f570(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 uVar2;
  
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + 1;
  UNLOCK();
  (*DAT_181107e78)();
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  *(undefined8 *)(lVar1 + 0x18) = param_1;
  uVar2 = FUN_18036e8f0(param_2);
  *(undefined1 *)(lVar1 + 0x11) = uVar2;
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + -1;
  UNLOCK();
  return;
}



/* ===== 18036f5e0 FUN_18036f5e0 ===== */

void FUN_18036f5e0(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  longlong lVar1;
  longlong *local_48;
  longlong *plStack_40;
  char local_38;
  
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + 1;
  UNLOCK();
  local_48 = (longlong *)0x0;
  plStack_40 = (longlong *)0x0;
  local_38 = '\0';
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((param_1 == *(longlong **)(lVar1 + 0x18)) && (*(char *)(lVar1 + 0x11) != '\0')) {
    (**(code **)(*param_1 + 0x2f0))(param_1,&plStack_40);
    lVar1 = FUN_18036e9b0(param_1,plStack_40);
    local_48 = param_1;
    if (lVar1 != 0) {
      (**(code **)(*param_1 + 0x158))(param_1,lVar1);
      local_38 = '\x01';
    }
  }
  (*DAT_181107e50)(param_1,param_2,param_3,param_4,param_5);
  if (local_38 != '\0') {
    (**(code **)(*local_48 + 0x158))(local_48,plStack_40);
  }
  if (plStack_40 != (longlong *)0x0) {
    (**(code **)(*plStack_40 + 0x10))();
  }
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + -1;
  UNLOCK();
  return;
}



/* ===== 18036f6d0 FUN_18036f6d0 ===== */

void FUN_18036f6d0(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6)

{
  longlong lVar1;
  longlong *local_48;
  longlong *plStack_40;
  char local_38;
  
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + 1;
  UNLOCK();
  local_48 = (longlong *)0x0;
  plStack_40 = (longlong *)0x0;
  local_38 = '\0';
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((param_1 == *(longlong **)(lVar1 + 0x18)) && (*(char *)(lVar1 + 0x11) != '\0')) {
    (**(code **)(*param_1 + 0x2f0))(param_1,&plStack_40);
    lVar1 = FUN_18036e9b0(param_1,plStack_40);
    local_48 = param_1;
    if (lVar1 != 0) {
      (**(code **)(*param_1 + 0x158))(param_1,lVar1);
      local_38 = '\x01';
    }
  }
  (*DAT_181107e58)(param_1,param_2,param_3,param_4,param_5,param_6);
  if (local_38 != '\0') {
    (**(code **)(*local_48 + 0x158))(local_48,plStack_40);
  }
  if (plStack_40 != (longlong *)0x0) {
    (**(code **)(*plStack_40 + 0x10))();
  }
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + -1;
  UNLOCK();
  return;
}



/* ===== 18036f7d0 FUN_18036f7d0 ===== */

void FUN_18036f7d0(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong *local_28;
  longlong *plStack_20;
  char local_18;
  
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + 1;
  UNLOCK();
  local_28 = (longlong *)0x0;
  plStack_20 = (longlong *)0x0;
  local_18 = '\0';
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((param_1 == *(longlong **)(lVar1 + 0x18)) && (*(char *)(lVar1 + 0x11) != '\0')) {
    (**(code **)(*param_1 + 0x2f0))(param_1,&plStack_20);
    lVar1 = FUN_18036e9b0(param_1,plStack_20);
    local_28 = param_1;
    if (lVar1 != 0) {
      (**(code **)(*param_1 + 0x158))(param_1,lVar1);
      local_18 = '\x01';
    }
  }
  (*DAT_181107e30)(param_1,param_2,param_3);
  if (local_18 != '\0') {
    (**(code **)(*local_28 + 0x158))(local_28,plStack_20);
  }
  if (plStack_20 != (longlong *)0x0) {
    (**(code **)(*plStack_20 + 0x10))();
  }
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + -1;
  UNLOCK();
  return;
}



/* ===== 18036f8c0 FUN_18036f8c0 ===== */

void FUN_18036f8c0(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  longlong *local_48;
  longlong *plStack_40;
  char local_38;
  
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + 1;
  UNLOCK();
  local_48 = (longlong *)0x0;
  plStack_40 = (longlong *)0x0;
  local_38 = '\0';
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((param_1 == *(longlong **)(lVar1 + 0x18)) && (*(char *)(lVar1 + 0x11) != '\0')) {
    (**(code **)(*param_1 + 0x2f0))(param_1,&plStack_40);
    lVar1 = FUN_18036e9b0(param_1,plStack_40);
    local_48 = param_1;
    if (lVar1 != 0) {
      (**(code **)(*param_1 + 0x158))(param_1,lVar1);
      local_38 = '\x01';
    }
  }
  (*DAT_181107e28)(param_1,param_2,param_3,param_4);
  if (local_38 != '\0') {
    (**(code **)(*local_48 + 0x158))(local_48,plStack_40);
  }
  if (plStack_40 != (longlong *)0x0) {
    (**(code **)(*plStack_40 + 0x10))();
  }
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + -1;
  UNLOCK();
  return;
}



/* ===== 18036f9b0 FUN_18036f9b0 ===== */

void FUN_18036f9b0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 uVar2;
  
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + 1;
  UNLOCK();
  (*DAT_181107e70)();
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  *(undefined8 *)(lVar1 + 0x18) = param_1;
  uVar2 = FUN_18036e8f0(param_2);
  *(undefined1 *)(lVar1 + 0x11) = uVar2;
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + -1;
  UNLOCK();
  return;
}



/* ===== 18036fa20 FUN_18036fa20 ===== */

void FUN_18036fa20(undefined8 param_1,ulonglong param_2)

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
  
  plVar8 = DAT_181107e88;
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
  FUN_180029a30(&DAT_181107e98,2L << (bVar10 & 0x3f),DAT_181107e88);
  DAT_181107eb0 = lVar11 - 1;
  DAT_181107eb8 = lVar11;
  plVar7 = (longlong *)*DAT_181107e88;
  lVar11 = DAT_181107e98;
joined_r0x00018036fa9c:
  do {
    while( true ) {
      while( true ) {
        if (plVar7 == plVar8) {
          DAT_181107e98 = lVar11;
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
                (ulonglong)*(byte *)((longlong)plVar7 + 0x17)) * 0x100000001b3 & DAT_181107eb0;
        plVar2 = *(longlong **)(lVar11 + uVar9 * 0x10);
        DAT_181107e98 = lVar11;
        if (plVar2 != plVar8) break;
        *(longlong **)(lVar11 + uVar9 * 0x10) = plVar7;
        *(longlong **)(lVar11 + 8 + uVar9 * 0x10) = plVar7;
        plVar7 = plVar1;
        lVar11 = DAT_181107e98;
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
      lVar11 = DAT_181107e98;
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
        lVar11 = DAT_181107e98;
        goto joined_r0x00018036fa9c;
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
    lVar11 = DAT_181107e98;
  } while( true );
}



/* ===== 18036fc20 FUN_18036fc20 ===== */

longlong FUN_18036fc20(void)

{
  if (DAT_1811162a8 == 0) {
    GetModuleHandleExA(6,(LPCSTR)FUN_18036fc20,(HMODULE *)&DAT_1811162a8);
  }
  return DAT_1811162a8;
}



/* ===== 18036fc60 FUN_18036fc60 ===== */

void FUN_18036fc60(longlong *param_1)

{
  byte bVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar4 = param_1[2];
  uVar2 = param_1[1];
  while( true ) {
    while( true ) {
      if (uVar2 <= uVar4) {
        return;
      }
      lVar3 = *param_1;
      bVar1 = *(byte *)(uVar4 + lVar3);
      if ((0x20 < bVar1) || ((0x100002600U >> ((longlong)(char)bVar1 & 0x3fU) & 1) == 0)) break;
      uVar4 = uVar4 + 1;
      param_1[2] = uVar4;
    }
    if (bVar1 != 0x2f) {
      return;
    }
    if (uVar2 <= uVar4 + 1) {
      return;
    }
    if (*(char *)(uVar4 + 1 + lVar3) != '/') break;
    if (uVar2 <= uVar4) {
      return;
    }
    while (*(char *)(uVar4 + lVar3) != '\n') {
      uVar4 = uVar4 + 1;
      param_1[2] = uVar4;
      if (uVar2 <= uVar4) {
        return;
      }
    }
  }
  return;
}



/* ===== 18036fce0 FUN_18036fce0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_18036fce0(longlong param_1,char *param_2)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 uVar3;
  size_t sVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 auStack_c8 [40];
  ulonglong local_a0 [4];
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined1 local_60 [32];
  undefined1 local_40 [32];
  ulonglong local_20;
  
  local_20 = DAT_180919500 ^ (ulonglong)auStack_c8;
  if (*(longlong *)(param_1 + 0x28) == 0) {
    uVar3 = FUN_18004e4f0(local_40,*(undefined8 *)(param_1 + 0x10));
    local_a0[0] = 0;
    local_a0[1] = 0;
    local_a0[2] = 0;
    local_a0[3] = 0;
    sVar4 = strlen(param_2);
    FUN_1800133a0(local_a0,param_2,sVar4);
    puVar5 = (undefined4 *)FUN_1800134a0(local_a0,&DAT_18088c19c,4);
    local_80 = *puVar5;
    uStack_7c = puVar5[1];
    uStack_78 = puVar5[2];
    uStack_74 = puVar5[3];
    local_70 = puVar5[4];
    uStack_6c = puVar5[5];
    uStack_68 = puVar5[6];
    uStack_64 = puVar5[7];
    *(undefined8 *)(puVar5 + 4) = 0;
    *(undefined8 *)(puVar5 + 6) = 0xf;
    *(undefined1 *)puVar5 = 0;
    uVar3 = FUN_180066820(local_60,&local_80,uVar3);
    FUN_18002ba60(param_1 + 0x18,uVar3);
    FUN_18000f890(local_60);
    uVar6 = CONCAT44(uStack_64,uStack_68);
    if (0xf < uVar6) {
      uVar8 = uVar6 + 1;
      lVar2 = CONCAT44(uStack_7c,local_80);
      lVar7 = lVar2;
      if (0xfff < uVar8) {
        lVar7 = *(longlong *)(lVar2 + -8);
        if (0x1f < (lVar2 - lVar7) - 8U) {
          pcVar1 = (code *)swi(0x29);
          (*pcVar1)(5);
          goto LAB_18036fe75;
        }
        uVar8 = uVar6 + 0x28;
      }
      thunk_FUN_1803d64e0(lVar7,uVar8);
    }
    if (0xf < local_a0[3]) {
      uVar8 = local_a0[3] + 1;
      uVar6 = local_a0[0];
      if (0xfff < uVar8) {
        uVar6 = *(ulonglong *)(local_a0[0] - 8);
        if (0x1f < (local_a0[0] - uVar6) - 8) {
LAB_18036fe75:
          pcVar1 = (code *)swi(0x29);
          (*pcVar1)(5);
          pcVar1 = (code *)swi(3);
          uVar6 = (*pcVar1)();
          return uVar6;
        }
        uVar8 = local_a0[3] + 0x28;
      }
      thunk_FUN_1803d64e0(uVar6,uVar8);
    }
    local_a0[2] = 0;
    local_a0[3] = 0xf;
    local_a0[0] = local_a0[0] & 0xffffffffffffff00;
    local_20 = FUN_18000f890(local_40);
  }
  return local_20 & 0xffffffffffffff00;
}



/* ===== 18036fe80 FUN_18036fe80 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_18036fe80(longlong *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 ****ppppuVar6;
  ulonglong uVar7;
  char *pcVar8;
  uint uVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  byte bVar12;
  ulonglong uVar13;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [24];
  undefined8 ****local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  ulonglong local_38;
  
  puVar10 = auStack_78;
  puVar11 = auStack_78;
  local_38 = DAT_180919500 ^ (ulonglong)auStack_78;
  uVar7 = param_1[2];
  if ((uVar7 < (ulonglong)param_1[1]) && (*(char *)(uVar7 + *param_1) == '\"')) {
    param_1[2] = uVar7 + 1;
    param_2[2] = 0;
    if ((ulonglong)param_2[3] < 0x10) {
      puVar4 = param_2;
    }
    else {
      puVar4 = (undefined8 *)*param_2;
    }
    *(undefined1 *)puVar4 = 0;
    uVar7 = param_1[2];
    uVar13 = param_1[1];
    if (uVar7 < uVar13) {
      do {
        uVar1 = uVar7 + 1;
        param_1[2] = uVar1;
        lVar2 = *param_1;
        bVar12 = *(byte *)(uVar7 + lVar2);
        uVar9 = (uint)bVar12;
        if (bVar12 == 0x22) {
          uVar5 = CONCAT71((int7)(uVar1 >> 8),1);
          goto LAB_1803700c8;
        }
        if (bVar12 == 0x5c) {
          if (uVar13 <= uVar1) break;
          uVar1 = uVar7 + 2;
          param_1[2] = uVar1;
          uVar9 = (uint)*(char *)(uVar7 + 1 + lVar2);
          switch(uVar9) {
          case 0x62:
            uVar9 = 8;
            break;
          case 0x66:
            uVar9 = 0xc;
            break;
          case 0x6e:
            uVar9 = 10;
            break;
          case 0x72:
            uVar9 = 0xd;
            break;
          case 0x74:
            uVar9 = 9;
            break;
          case 0x75:
            if (uVar13 < uVar7 + 6) {
LAB_1803700e4:
              pcVar8 = "bad unicode escape";
              goto LAB_1803700a9;
            }
            if (uVar13 < uVar1) {
                    /* WARNING: Subroutine does not return */
              FUN_180225aa0();
            }
            local_48 = 0;
            local_40 = 0;
            uVar7 = 4;
            if (uVar13 - uVar1 < 4) {
              uVar7 = uVar13 - uVar1;
            }
            local_58 = (undefined8 ****)0x0;
            uStack_50 = 0;
            FUN_1800133a0(&local_58,lVar2 + uVar1,uVar7);
            ppppuVar6 = &local_58;
            if (0xf < local_40) {
              ppppuVar6 = local_58;
            }
            uVar9 = FUN_18051566c(ppppuVar6,0,0x10);
            if (0xf < local_40) {
              uVar7 = local_40 + 1;
              ppppuVar6 = local_58;
              if (0xfff < uVar7) {
                ppppuVar6 = (undefined8 ****)local_58[-1];
                if (0x1f < (ulonglong)((longlong)local_58 + (-8 - (longlong)ppppuVar6))) {
                  pcVar3 = (code *)swi(0x29);
                  (*pcVar3)(5);
                  puVar11 = auStack_70;
                  goto LAB_1803700e4;
                }
                uVar7 = local_40 + 0x28;
              }
              thunk_FUN_1803d64e0(ppppuVar6,uVar7);
            }
            param_1[2] = param_1[2] + 4;
            if (0x7f < uVar9) {
              bVar12 = (byte)(uVar9 >> 6);
              if (uVar9 < 0x800) {
                bVar12 = bVar12 | 0xc0;
              }
              else {
                FUN_1800690a0(param_2,(byte)(uVar9 >> 0xc) | 0xe0);
                bVar12 = bVar12 & 0x3f | 0x80;
              }
              FUN_1800690a0(param_2,bVar12);
              uVar9 = (uint)((byte)uVar9 & 0x3f | 0x80);
            }
          }
        }
        FUN_1800690a0(param_2,uVar9 & 0xff);
        uVar7 = param_1[2];
        uVar13 = param_1[1];
      } while (uVar7 < uVar13);
    }
    pcVar8 = "unterminated string";
    puVar11 = auStack_78;
LAB_1803700a9:
    *(undefined8 *)(puVar11 + -8) = 0x1803700b1;
    uVar5 = FUN_18036fce0(param_1,pcVar8);
    puVar10 = puVar11;
  }
  else {
    uVar5 = FUN_18036fce0(param_1,"expected string");
    puVar10 = auStack_78;
  }
LAB_1803700c8:
  *(undefined8 *)(puVar10 + -8) = 0x1803700d5;
  return uVar5;
}



/* ===== 180370160 FUN_180370160 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_180370160(longlong *param_1,undefined4 *param_2)

{
  byte bVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong *puVar4;
  undefined4 *puVar5;
  code *pcVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  char cVar9;
  byte bVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined8 *******pppppppuVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined1 auStack_108 [32];
  char *local_e8;
  undefined8 *******local_e0;
  ulonglong uStack_d8;
  ulonglong local_d0;
  ulonglong uStack_c8;
  undefined4 local_b8;
  undefined1 local_b4;
  ulonglong local_b0;
  ulonglong local_a8;
  ulonglong uStack_a0;
  ulonglong local_98;
  ulonglong local_90;
  ulonglong local_88;
  ulonglong uStack_80;
  ulonglong local_78;
  ulonglong uStack_70;
  ulonglong local_68;
  ulonglong uStack_60;
  ulonglong local_58;
  
  local_58 = DAT_180919500 ^ (ulonglong)auStack_108;
  *(int *)(param_1 + 7) = (int)param_1[7] + 1;
  if (0x40 < (int)param_1[7]) {
    uVar13 = FUN_18036fce0(param_1,"nesting too deep");
    return uVar13;
  }
  FUN_18036fc60();
  uVar13 = param_1[2];
  uVar2 = param_1[1];
  if (uVar2 <= uVar13) {
    uVar13 = FUN_18036fce0(param_1,"unexpected end");
    return uVar13;
  }
  bVar10 = 0;
  lVar3 = *param_1;
  cVar9 = *(char *)(uVar13 + lVar3);
  if (cVar9 == '{') {
    param_1[2] = uVar13 + 1;
    *param_2 = 5;
    uVar13 = param_1[2];
    uVar2 = param_1[1];
    if (uVar13 < uVar2) {
      do {
        lVar3 = *param_1;
        bVar1 = *(byte *)(uVar13 + lVar3);
        if ((bVar1 < 0x21) && ((0x100002600U >> ((longlong)(char)bVar1 & 0x3fU) & 1) != 0)) {
          uVar13 = uVar13 + 1;
          param_1[2] = uVar13;
        }
        else {
          if (((bVar1 != 0x2f) || (uVar2 <= uVar13 + 1)) || (*(char *)(uVar13 + 1 + lVar3) != '/'))
          break;
          if (uVar13 < uVar2) {
            do {
              if (*(char *)(uVar13 + lVar3) == '\n') break;
              uVar13 = uVar13 + 1;
              param_1[2] = uVar13;
            } while (uVar13 < uVar2);
          }
        }
      } while (uVar13 < uVar2);
    }
    if ((uVar2 <= uVar13) || (*(char *)(uVar13 + *param_1) != '}')) {
      FUN_18036fc60(param_1);
      uStack_d8 = 0;
      local_d0 = 0;
      uStack_c8 = 0xf;
      local_e0 = (undefined8 *******)0x0;
      cVar9 = FUN_18036fe80(param_1,&local_e0);
      while (cVar9 != '\0') {
        FUN_18036fc60(param_1);
        uVar13 = param_1[2];
        if (((ulonglong)param_1[1] <= uVar13) || (*(char *)(uVar13 + *param_1) != ':')) {
          FUN_18036fce0(param_1,"expected \':\'");
          break;
        }
        param_1[2] = uVar13 + 1;
        local_b8 = 0;
        local_b4 = 0;
        local_b0 = 0;
        uStack_a0 = 0;
        local_98 = 0;
        local_90 = 0xf;
        local_a8 = 0;
        local_88 = 0;
        uStack_80 = 0;
        local_78 = 0;
        uStack_70 = 0;
        local_68 = 0;
        uStack_60 = 0;
        cVar9 = FUN_180370160(param_1,&local_b8);
        uVar8 = uStack_60;
        uVar16 = local_68;
        uVar17 = uStack_70;
        uVar14 = local_78;
        uVar2 = uStack_80;
        uVar13 = local_88;
        if (cVar9 == '\0') {
          FUN_1801a6920(&uStack_70);
          FUN_1801a69c0(&local_88);
          FUN_18000f890(&local_a8);
          FUN_18000f890(&local_e0);
          goto LAB_180370a5e;
        }
        puVar4 = *(ulonglong **)(param_2 + 0x14);
        if (puVar4 == *(ulonglong **)(param_2 + 0x16)) {
          FUN_180371020(param_2 + 0x12,puVar4,&local_e0,&local_b8);
        }
        else {
          *puVar4 = (ulonglong)local_e0;
          puVar4[1] = uStack_d8;
          puVar4[2] = local_d0;
          puVar4[3] = uStack_c8;
          local_d0 = 0;
          uStack_c8 = 0xf;
          local_e0 = (undefined8 *******)((ulonglong)local_e0 & 0xffffffffffffff00);
          *(undefined4 *)(puVar4 + 4) = local_b8;
          *(undefined1 *)((longlong)puVar4 + 0x24) = local_b4;
          puVar4[5] = local_b0;
          puVar4[6] = 0;
          puVar4[7] = 0;
          puVar4[8] = 0;
          puVar4[9] = 0;
          puVar4[6] = local_a8;
          puVar4[7] = uStack_a0;
          puVar4[8] = local_98;
          puVar4[9] = local_90;
          local_98 = 0;
          local_90 = 0xf;
          local_a8 = local_a8 & 0xffffffffffffff00;
          local_78 = 0;
          uStack_80 = 0;
          local_88 = 0;
          puVar4[10] = uVar13;
          puVar4[0xb] = uVar2;
          puVar4[0xc] = uVar14;
          uStack_60 = 0;
          local_68 = 0;
          uStack_70 = 0;
          puVar4[0xd] = uVar17;
          puVar4[0xe] = uVar16;
          puVar4[0xf] = uVar8;
          *(longlong *)(param_2 + 0x14) = *(longlong *)(param_2 + 0x14) + 0x80;
        }
        uVar2 = uStack_c8;
        FUN_18036fc60(param_1);
        uVar13 = param_1[2];
        if ((ulonglong)param_1[1] <= uVar13) {
LAB_18037054d:
          FUN_18036fce0(param_1,"expected \'}\'");
LAB_180370506:
          FUN_1801a6920(&uStack_70);
          FUN_1801a69c0(&local_88);
          FUN_18000f890(&local_a8);
          if (0xf < uVar2) {
            FUN_18000fb30(&local_e0,local_e0,uVar2 + 1);
          }
          goto LAB_180370a5e;
        }
        if (*(char *)(uVar13 + *param_1) != ',') {
          if (*(char *)(uVar13 + *param_1) != '}') goto LAB_18037054d;
LAB_1803704fb:
          bVar10 = 1;
          param_1[2] = uVar13 + 1;
          goto LAB_180370506;
        }
        param_1[2] = uVar13 + 1;
        FUN_18036fc60(param_1);
        uVar13 = param_1[2];
        if ((uVar13 < (ulonglong)param_1[1]) && (*(char *)(uVar13 + *param_1) == '}'))
        goto LAB_1803704fb;
        FUN_1801a6920(&uStack_70);
        FUN_1801a69c0(&local_88);
        FUN_18000f890(&local_a8);
        if (0xf < uVar2) {
          FUN_18000fb30(&local_e0,local_e0,uVar2 + 1);
        }
        FUN_18036fc60(param_1);
        uStack_d8 = 0;
        local_d0 = 0;
        uStack_c8 = 0xf;
        local_e0 = (undefined8 *******)0x0;
        cVar9 = FUN_18036fe80(param_1,&local_e0);
      }
      if (0xf < uStack_c8) {
        FUN_18000fb30(&local_e0,local_e0,uStack_c8 + 1);
      }
      goto LAB_180370a5e;
    }
  }
  else {
    if (cVar9 != '[') {
      if (cVar9 == '\"') {
        *param_2 = 3;
        bVar10 = FUN_18036fe80(param_1,param_2 + 4);
      }
      else {
        uVar17 = uVar2 - uVar13;
        uVar14 = 4;
        if (uVar17 < 4) {
          uVar14 = uVar17;
        }
        if ((uVar14 == 4) &&
           (iVar11 = memcmp((char *)(uVar13 + lVar3),&DAT_1806dfa60,4), iVar11 == 0)) {
          param_1[2] = uVar13 + 4;
          *param_2 = 1;
          *(undefined1 *)(param_2 + 1) = 1;
          bVar10 = 1;
        }
        else {
          uVar16 = 5;
          if (uVar17 < 5) {
            uVar16 = uVar17;
          }
          if ((uVar16 == 5) && (iVar11 = memcmp((void *)(uVar13 + lVar3),"false",5), iVar11 == 0)) {
            param_1[2] = uVar13 + 5;
            *param_2 = 1;
            bVar10 = 1;
          }
          else if ((uVar14 == 4) &&
                  (iVar11 = memcmp((void *)(uVar13 + lVar3),&DAT_18088c254,4), iVar11 == 0)) {
            param_1[2] = uVar13 + 4;
            bVar10 = 1;
          }
          else {
            uVar14 = uVar13;
            do {
              uVar12 = *(byte *)(uVar14 + lVar3) - 0x2b;
              if (((0x3a < (byte)uVar12) ||
                  ((0x400000000007fedU >> ((ulonglong)uVar12 & 0x3f) & 1) == 0)) &&
                 (*(byte *)(uVar14 + lVar3) != 0x45)) break;
              uVar14 = uVar14 + 1;
              param_1[2] = uVar14;
            } while (uVar14 < uVar2);
            if (uVar13 == uVar14) {
              bVar10 = FUN_18036fce0(param_1,"unexpected character");
            }
            else {
              local_e0 = (undefined8 *******)0x0;
              uStack_d8 = 0;
              local_d0 = 0;
              uStack_c8 = 0;
              uVar17 = uVar14 - uVar13;
              if (uVar2 - uVar13 < uVar14 - uVar13) {
                uVar17 = uVar2 - uVar13;
              }
              FUN_1800133a0(&local_e0,uVar13 + lVar3,uVar17);
              local_e8 = (char *)0x0;
              *param_2 = 2;
              pppppppuVar15 = &local_e0;
              if (0xf < uStack_c8) {
                pppppppuVar15 = local_e0;
              }
              uVar7 = FUN_180518454(pppppppuVar15,&local_e8);
              *(undefined8 *)(param_2 + 2) = uVar7;
              if ((local_e8 == (char *)0x0) || (*local_e8 != '\0')) {
                bVar10 = FUN_18036fce0(param_1,"bad number");
              }
              else {
                bVar10 = 1;
              }
              if (0xf < uStack_c8) {
                uVar13 = uStack_c8 + 1;
                pppppppuVar15 = local_e0;
                if (0xfff < uVar13) {
                  pppppppuVar15 = (undefined8 *******)local_e0[-1];
                  if (0x1f < (ulonglong)((longlong)local_e0 + (-8 - (longlong)pppppppuVar15))) {
                    pcVar6 = (code *)swi(0x29);
                    (*pcVar6)(5);
                    pcVar6 = (code *)swi(3);
                    uVar13 = (*pcVar6)();
                    return uVar13;
                  }
                  uVar13 = uStack_c8 + 0x28;
                }
                thunk_FUN_1803d64e0(pppppppuVar15,uVar13);
              }
            }
          }
        }
      }
      goto LAB_180370a5e;
    }
    param_1[2] = uVar13 + 1;
    *param_2 = 4;
    uVar13 = param_1[2];
    uVar2 = param_1[1];
    if (uVar13 < uVar2) {
      do {
        lVar3 = *param_1;
        bVar1 = *(byte *)(uVar13 + lVar3);
        if ((bVar1 < 0x21) && ((0x100002600U >> ((longlong)(char)bVar1 & 0x3fU) & 1) != 0)) {
          uVar13 = uVar13 + 1;
          param_1[2] = uVar13;
        }
        else {
          if (((bVar1 != 0x2f) || (uVar2 <= uVar13 + 1)) || (*(char *)(uVar13 + 1 + lVar3) != '/'))
          break;
          if (uVar13 < uVar2) {
            do {
              if (*(char *)(uVar13 + lVar3) == '\n') break;
              uVar13 = uVar13 + 1;
              param_1[2] = uVar13;
            } while (uVar13 < uVar2);
          }
        }
      } while (uVar13 < uVar2);
    }
    if ((uVar2 <= uVar13) || (*(char *)(uVar13 + *param_1) != ']')) {
      local_b8 = 0;
      local_b4 = 0;
      local_b0 = 0;
      uStack_a0 = 0;
      local_98 = 0;
      local_90 = 0xf;
      local_a8 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_78 = 0;
      uStack_70 = 0;
      local_68 = 0;
      uStack_60 = 0;
      cVar9 = FUN_180370160(param_1,&local_b8);
      uVar13 = local_88;
      uVar2 = uStack_80;
      uVar14 = local_78;
      uVar17 = uStack_70;
      uVar16 = local_68;
      uVar8 = uStack_60;
      while( true ) {
        local_88 = uVar13;
        uStack_80 = uVar2;
        local_78 = uVar14;
        uStack_70 = uVar17;
        local_68 = uVar16;
        uStack_60 = uVar8;
        if (cVar9 == '\0') break;
        puVar5 = *(undefined4 **)(param_2 + 0xe);
        if (puVar5 == *(undefined4 **)(param_2 + 0x10)) {
          FUN_180371260(param_2 + 0xc,puVar5,&local_b8);
        }
        else {
          *puVar5 = local_b8;
          *(undefined1 *)(puVar5 + 1) = local_b4;
          *(ulonglong *)(puVar5 + 2) = local_b0;
          *(undefined8 *)(puVar5 + 4) = 0;
          *(undefined8 *)(puVar5 + 6) = 0;
          *(undefined8 *)(puVar5 + 8) = 0;
          *(undefined8 *)(puVar5 + 10) = 0;
          *(ulonglong *)(puVar5 + 4) = local_a8;
          *(ulonglong *)(puVar5 + 6) = uStack_a0;
          *(ulonglong *)(puVar5 + 8) = local_98;
          *(ulonglong *)(puVar5 + 10) = local_90;
          local_98 = 0;
          local_90 = 0xf;
          local_a8 = local_a8 & 0xffffffffffffff00;
          local_78 = 0;
          uStack_80 = 0;
          local_88 = 0;
          *(ulonglong *)(puVar5 + 0xc) = uVar13;
          *(ulonglong *)(puVar5 + 0xe) = uVar2;
          *(ulonglong *)(puVar5 + 0x10) = uVar14;
          uStack_60 = 0;
          local_68 = 0;
          uStack_70 = 0;
          *(ulonglong *)(puVar5 + 0x12) = uVar17;
          *(ulonglong *)(puVar5 + 0x14) = uVar16;
          *(ulonglong *)(puVar5 + 0x16) = uVar8;
          *(longlong *)(param_2 + 0xe) = *(longlong *)(param_2 + 0xe) + 0x60;
        }
        FUN_18036fc60(param_1);
        uVar13 = param_1[2];
        if ((ulonglong)param_1[1] <= uVar13) {
LAB_180370848:
          FUN_18036fce0(param_1,"expected \']\'");
          break;
        }
        if (*(char *)(uVar13 + *param_1) != ',') {
          if (*(char *)(uVar13 + *param_1) != ']') goto LAB_180370848;
LAB_18037083b:
          param_1[2] = uVar13 + 1;
          bVar10 = 1;
          break;
        }
        param_1[2] = uVar13 + 1;
        FUN_18036fc60(param_1);
        uVar13 = param_1[2];
        if ((uVar13 < (ulonglong)param_1[1]) && (*(char *)(uVar13 + *param_1) == ']'))
        goto LAB_18037083b;
        FUN_1801a6920(&uStack_70);
        FUN_1801a69c0(&local_88);
        FUN_18000f890(&local_a8);
        local_b8 = 0;
        local_b4 = 0;
        local_b0 = 0;
        uStack_a0 = 0;
        local_98 = 0;
        local_90 = 0xf;
        local_a8 = 0;
        local_88 = 0;
        uStack_80 = 0;
        local_78 = 0;
        uStack_70 = 0;
        local_68 = 0;
        uStack_60 = 0;
        cVar9 = FUN_180370160(param_1,&local_b8);
        uVar13 = local_88;
        uVar2 = uStack_80;
        uVar14 = local_78;
        uVar17 = uStack_70;
        uVar16 = local_68;
        uVar8 = uStack_60;
      }
      FUN_1801a6920(&uStack_70);
      FUN_1801a69c0(&local_88);
      FUN_18000f890(&local_a8);
      goto LAB_180370a5e;
    }
  }
  param_1[2] = uVar13 + 1;
  bVar10 = 1;
LAB_180370a5e:
  *(int *)(param_1 + 7) = (int)param_1[7] + -1;
  return (ulonglong)bVar10;
}



/* ===== 180370aa0 FUN_180370aa0 ===== */

undefined8 * FUN_180370aa0(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  void *_Buf1;
  size_t _Size;
  int iVar2;
  undefined8 *_Buf2;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)(param_1 + 0x48);
  puVar1 = *(undefined8 **)(param_1 + 0x50);
  if (puVar3 != puVar1) {
    _Buf1 = (void *)*param_2;
    _Size = param_2[1];
    do {
      if ((ulonglong)puVar3[3] < 0x10) {
        _Buf2 = puVar3;
      }
      else {
        _Buf2 = (undefined8 *)*puVar3;
      }
      if (_Size == puVar3[2]) {
        if (_Size == 0) {
LAB_180370afd:
          return puVar3 + 4;
        }
        iVar2 = memcmp(_Buf1,_Buf2,_Size);
        if (iVar2 == 0) goto LAB_180370afd;
      }
      puVar3 = puVar3 + 0x10;
    } while (puVar3 != puVar1);
  }
  return (undefined8 *)0x0;
}



/* ===== 180370b10 FUN_180370b10 ===== */

undefined8 FUN_180370b10(int *param_1,undefined8 param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined8 uVar3;
  char *local_res8 [4];
  
  iVar1 = *param_1;
  if (iVar1 == 2) {
    return *(undefined8 *)(param_1 + 2);
  }
  if (iVar1 == 1) {
    if ((char)param_1[1] == '\0') {
      return 0;
    }
    return DAT_1808ac500;
  }
  if ((iVar1 == 3) && (*(longlong *)(param_1 + 8) != 0)) {
    plVar2 = (longlong *)(param_1 + 4);
    local_res8[0] = (char *)0x0;
    if (0xf < *(ulonglong *)(param_1 + 10)) {
      plVar2 = (longlong *)*plVar2;
    }
    uVar3 = FUN_180518454(plVar2,local_res8);
    if ((local_res8[0] != (char *)0x0) && (*local_res8[0] == '\0')) {
      return uVar3;
    }
  }
  return param_2;
}



/* ===== 180370bb0 FUN_180370bb0 ===== */

undefined1 FUN_180370bb0(int *param_1,undefined1 param_2)

{
  if (*param_1 == 1) {
    return (char)param_1[1];
  }
  if (*param_1 != 2) {
    return param_2;
  }
  if (*(double *)(param_1 + 2) == 0.0) {
    return 0;
  }
  return 1;
}



/* ===== 180370be0 FUN_180370be0 ===== */

undefined8 * FUN_180370be0(int *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  if (*param_1 == 3) {
    FUN_180024b50(param_2,param_1 + 4);
    return param_2;
  }
  uVar1 = param_3[1];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  FUN_1800133a0(param_2,*param_3,uVar1);
  return param_2;
}



/* ===== 180370c30 FUN_180370c30 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180370c30(longlong ******param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  byte bVar2;
  longlong *****ppppplVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  longlong ****pppplVar11;
  ulonglong uVar12;
  longlong *****ppppplVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  ulonglong uVar16;
  undefined8 uStack_150;
  undefined1 auStack_148 [8];
  undefined1 auStack_140 [24];
  undefined4 local_128;
  longlong *****local_118 [2];
  ulonglong local_108;
  longlong ******local_100;
  undefined8 uStack_f8;
  ulonglong local_f0;
  ulonglong local_e8;
  undefined4 local_e0;
  longlong *****local_d8;
  longlong *****ppppplStack_d0;
  ulonglong local_c8;
  ulonglong local_c0;
  longlong ****local_b8;
  char local_b0 [4];
  undefined4 local_ac;
  undefined8 local_a8;
  ulonglong local_a0;
  undefined4 local_98;
  undefined1 local_94;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStack_148;
  local_128 = 0;
  local_118[1] = param_1[1];
  if (((((longlong *****)0x2 < local_118[1]) &&
       (ppppplVar13 = *param_1, *(char *)ppppplVar13 == -0x11)) &&
      (*(char *)((longlong)ppppplVar13 + 1) == -0x45)) &&
     (*(char *)((longlong)ppppplVar13 + 2) == -0x41)) {
    *param_1 = (longlong *****)((longlong)ppppplVar13 + 3);
    local_118[1] = (longlong *****)((longlong)local_118[1] - 3);
    param_1[1] = local_118[1];
  }
  local_118[0] = *param_1;
  local_108 = 0;
  uStack_f8 = 0;
  local_f0 = 0;
  local_e8 = 0xf;
  local_100 = (longlong ******)0x0;
  local_e0 = 0;
  local_98 = 0;
  local_94 = 0;
  local_90 = 0;
  uStack_80 = 0;
  local_78 = 0;
  local_70 = 0xf;
  local_88 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  *param_2 = 0;
  *(undefined1 *)(param_2 + 1) = 0;
  *(undefined8 *)(param_2 + 2) = 0;
  FUN_18002ba60(param_2 + 4,&local_88);
  puVar1 = (undefined8 *)(param_2 + 0xc);
  if (puVar1 != &local_68) {
    FUN_1801a69c0(puVar1);
    *puVar1 = local_68;
    *(undefined8 *)(param_2 + 0xe) = uStack_60;
    *(undefined8 *)(param_2 + 0x10) = local_58;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
  }
  puVar1 = (undefined8 *)(param_2 + 0x12);
  if (puVar1 != &uStack_50) {
    FUN_1801a6920(puVar1);
    *puVar1 = uStack_50;
    *(undefined8 *)(param_2 + 0x14) = local_48;
    *(undefined8 *)(param_2 + 0x16) = uStack_40;
    uStack_50 = 0;
    local_48 = 0;
    uStack_40 = 0;
  }
  FUN_1801a6920(&uStack_50);
  FUN_1801a69c0(&local_68);
  FUN_18000f890(&local_88);
  cVar8 = FUN_180370160(local_118,param_2);
  uVar12 = local_f0;
  puVar15 = auStack_148;
  if (cVar8 == '\0') {
    if (local_f0 == 0) {
      local_a8 = 0xc;
      local_a0 = 0xf;
      local_b8 = (longlong ****)s_parse_failed_18088c260._0_8_;
      local_b0[0] = s_parse_failed_18088c260[8];
      local_b0[1] = s_parse_failed_18088c260[9];
      local_b0[2] = s_parse_failed_18088c260[10];
      local_b0[3] = s_parse_failed_18088c260[0xb];
      local_ac = 0;
      ppppplVar13 = &local_b8;
      bVar7 = true;
      bVar6 = false;
    }
    else {
      ppppplStack_d0 = (longlong *****)0x0;
      param_1 = (longlong ******)&local_100;
      if (0xf < local_e8) {
        param_1 = local_100;
      }
      if (0x7fffffffffffffff < local_f0) {
                    /* WARNING: Subroutine does not return */
        FUN_180011990();
      }
      if (local_f0 < 0x10) {
        local_c8 = local_f0;
        local_c0 = 0xf;
        local_d8 = *param_1;
        ppppplStack_d0 = param_1[1];
      }
      else {
        uVar9 = local_f0 | 0xf;
        uVar16 = 0x7fffffffffffffff;
        if ((uVar9 < 0x8000000000000000) && (uVar16 = uVar9, uVar9 < 0x16)) {
          uVar16 = 0x16;
        }
        local_d8 = (longlong *****)FUN_18000fb70(uVar16 + 1);
        local_c8 = uVar12;
        local_c0 = uVar16;
        FUN_180540530(local_d8,param_1,uVar12 + 1);
      }
      ppppplVar13 = (longlong *****)&local_d8;
      bVar7 = false;
      bVar6 = true;
    }
    FUN_18002ba60(param_3,ppppplVar13);
    if ((bVar6) && (0xf < local_c0)) {
      uVar12 = local_c0 + 1;
      ppppplVar13 = local_d8;
      if (uVar12 < 0x1000) {
LAB_180370eca:
        thunk_FUN_1803d64e0(ppppplVar13,uVar12);
        goto LAB_180370ed0;
      }
      ppppplVar13 = (longlong *****)local_d8[-1];
      if ((ulonglong)((longlong)local_d8 + (-8 - (longlong)ppppplVar13)) < 0x20) {
        uVar12 = local_c0 + 0x28;
        goto LAB_180370eca;
      }
      pcVar5 = (code *)swi(0x29);
      (*pcVar5)(5);
      puVar14 = auStack_140;
LAB_180370f22:
      pcVar5 = (code *)swi(0x29);
      (*pcVar5)(5);
      puVar15 = puVar14 + 8;
      goto LAB_180370f29;
    }
LAB_180370ed0:
    puVar14 = auStack_148;
    puVar15 = auStack_148;
    if ((bVar7) && (puVar15 = auStack_148, 0xf < local_a0)) {
      uVar12 = local_a0 + 1;
      pppplVar11 = local_b8;
      if (0xfff < uVar12) {
        pppplVar11 = (longlong ****)local_b8[-1];
        if (0x1f < (ulonglong)((longlong)local_b8 + (-8 - (longlong)pppplVar11)))
        goto LAB_180370f22;
        uVar12 = local_a0 + 0x28;
      }
      thunk_FUN_1803d64e0(pppplVar11,uVar12);
      puVar15 = auStack_148;
      uVar10 = 0;
      goto LAB_180370fe8;
    }
  }
  else {
LAB_180370f29:
    ppppplVar13 = *(longlong ******)(puVar15 + 0x40);
    ppppplVar3 = *(longlong ******)(puVar15 + 0x38);
    if (ppppplVar13 < ppppplVar3) {
      lVar4 = *(longlong *)(puVar15 + 0x30);
      do {
        bVar2 = *(byte *)(lVar4 + (longlong)ppppplVar13);
        if ((bVar2 < 0x21) && ((0x100002600U >> ((longlong)(char)bVar2 & 0x3fU) & 1) != 0)) {
          ppppplVar13 = (longlong *****)((longlong)ppppplVar13 + 1);
          *(longlong ******)(puVar15 + 0x40) = ppppplVar13;
        }
        else {
          if ((bVar2 != 0x2f) ||
             ((ppppplVar3 <= (longlong *****)((longlong)ppppplVar13 + 1U) ||
              (*(char *)(lVar4 + 1 + (longlong)ppppplVar13) != '/')))) break;
          while (*(char *)(lVar4 + (longlong)ppppplVar13) != '\n') {
            ppppplVar13 = (longlong *****)((longlong)ppppplVar13 + 1);
            *(longlong ******)(puVar15 + 0x40) = ppppplVar13;
            if (ppppplVar3 <= ppppplVar13) goto LAB_180370f6e;
          }
        }
      } while (ppppplVar13 < ppppplVar3);
    }
LAB_180370f6e:
    if (ppppplVar13 == param_1[1]) {
      uVar10 = 1;
      goto LAB_180370fe8;
    }
    *(undefined8 *)(puVar15 + -8) = 0x180370f7e;
    uVar10 = FUN_18004e4f0(puVar15 + 0x70);
    *(undefined8 *)(puVar15 + -8) = 0x180370f92;
    uVar10 = FUN_180066ab0(&local_b8,"trailing data at ",uVar10);
    *(undefined8 *)(puVar15 + -8) = 0x180370f9d;
    FUN_18002ba60(param_3,uVar10);
    *(undefined8 *)(puVar15 + -8) = 0x180370fa6;
    FUN_18000f890(&local_b8);
    *(undefined8 *)(puVar15 + -8) = 0x180370fb1;
    FUN_18000f890(puVar15 + 0x70);
  }
  uVar10 = 0;
LAB_180370fe8:
  *(undefined8 *)(puVar15 + -8) = 0x180370ff2;
  FUN_18000f890(puVar15 + 0x48);
  *(undefined8 *)(puVar15 + -8) = 0x180371001;
  return uVar10;
}



/* ===== 180371020 FUN_180371020 ===== */

undefined8 *
FUN_180371020(longlong *param_1,longlong param_2,undefined8 *param_3,undefined4 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  lVar11 = *param_1;
  if (param_1[1] - lVar11 == -0x80) {
                    /* WARNING: Subroutine does not return */
    FUN_1800118d0();
  }
  uVar9 = param_1[2] - lVar11 >> 7;
  uVar14 = (param_1[1] - lVar11 >> 7) + 1;
  uVar17 = 0x1ffffffffffffff;
  if (uVar9 <= 0x1ffffffffffffff - (uVar9 >> 1)) {
    uVar9 = (uVar9 >> 1) + uVar9;
    uVar17 = uVar14;
    if (uVar14 <= uVar9) {
      uVar17 = uVar9;
    }
    if (0x1ffffffffffffff < uVar17) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  puVar8 = (undefined8 *)FUN_18000fb70(uVar17 * 0x80);
  puVar16 = (undefined8 *)((param_2 - lVar11 & 0xffffffffffffff80U) + (longlong)puVar8);
  *puVar16 = 0;
  puVar16[1] = 0;
  puVar16[2] = 0;
  puVar16[3] = 0;
  uVar1 = param_3[1];
  *puVar16 = *param_3;
  puVar16[1] = uVar1;
  uVar1 = param_3[3];
  puVar16[2] = param_3[2];
  puVar16[3] = uVar1;
  param_3[2] = 0;
  *(undefined1 *)param_3 = 0;
  param_3[3] = 0xf;
  *(undefined4 *)(puVar16 + 4) = *param_4;
  *(undefined1 *)((longlong)puVar16 + 0x24) = *(undefined1 *)(param_4 + 1);
  puVar16[5] = *(undefined8 *)(param_4 + 2);
  puVar16[6] = 0;
  puVar16[7] = 0;
  puVar16[8] = 0;
  puVar16[9] = 0;
  uVar5 = param_4[5];
  uVar6 = param_4[6];
  uVar7 = param_4[7];
  *(undefined4 *)(puVar16 + 6) = param_4[4];
  *(undefined4 *)((longlong)puVar16 + 0x34) = uVar5;
  *(undefined4 *)(puVar16 + 7) = uVar6;
  *(undefined4 *)((longlong)puVar16 + 0x3c) = uVar7;
  uVar5 = param_4[9];
  uVar6 = param_4[10];
  uVar7 = param_4[0xb];
  *(undefined4 *)(puVar16 + 8) = param_4[8];
  *(undefined4 *)((longlong)puVar16 + 0x44) = uVar5;
  *(undefined4 *)(puVar16 + 9) = uVar6;
  *(undefined4 *)((longlong)puVar16 + 0x4c) = uVar7;
  *(undefined8 *)(param_4 + 8) = 0;
  *(undefined1 *)(param_4 + 4) = 0;
  *(undefined8 *)(param_4 + 10) = 0xf;
  uVar1 = *(undefined8 *)(param_4 + 0x10);
  uVar2 = *(undefined8 *)(param_4 + 0xe);
  uVar3 = *(undefined8 *)(param_4 + 0xc);
  *(undefined8 *)(param_4 + 0x10) = 0;
  *(undefined8 *)(param_4 + 0xe) = 0;
  *(undefined8 *)(param_4 + 0xc) = 0;
  puVar16[10] = uVar3;
  puVar16[0xb] = uVar2;
  puVar16[0xc] = uVar1;
  uVar1 = *(undefined8 *)(param_4 + 0x16);
  uVar2 = *(undefined8 *)(param_4 + 0x14);
  uVar3 = *(undefined8 *)(param_4 + 0x12);
  *(undefined8 *)(param_4 + 0x16) = 0;
  *(undefined8 *)(param_4 + 0x14) = 0;
  *(undefined8 *)(param_4 + 0x12) = 0;
  puVar16[0xd] = uVar3;
  puVar16[0xe] = uVar2;
  puVar16[0xf] = uVar1;
  lVar11 = param_1[1];
  lVar10 = *param_1;
  puVar15 = puVar8;
  if (param_2 != lVar11) {
    FUN_1803714b0(*param_1,param_2,puVar8);
    lVar11 = param_1[1];
    puVar15 = puVar16 + 0x10;
    lVar10 = param_2;
  }
  puVar12 = auStack_48;
  puVar13 = auStack_48;
  FUN_1803714b0(lVar10,lVar11,puVar15);
  lVar11 = *param_1;
  if (lVar11 == 0) goto LAB_180371218;
  lVar10 = param_1[1];
  for (; lVar11 != lVar10; lVar11 = lVar11 + 0x80) {
    FUN_1800fc680(lVar11 + 0x20);
    FUN_18000f890(lVar11);
  }
  lVar11 = *param_1;
  if ((param_1[2] - lVar11 & 0xffffffffffffff80U) < 0x1000) {
LAB_180371210:
    lVar10 = lVar11;
    puVar13 = puVar12;
  }
  else {
    lVar10 = *(longlong *)(lVar11 + -8);
    if (0x1f < (lVar11 - lVar10) - 8U) {
      pcVar4 = (code *)swi(0x29);
      lVar11 = (*pcVar4)(5);
      puVar12 = auStack_40;
      goto LAB_180371210;
    }
  }
  *(undefined8 *)(puVar13 + -8) = 0x180371218;
  thunk_FUN_1803d64e0(lVar10);
LAB_180371218:
  *param_1 = (longlong)puVar8;
  param_1[1] = (longlong)(puVar8 + uVar14 * 0x10);
  param_1[2] = (longlong)(puVar8 + uVar17 * 0x10);
  return puVar16;
}



/* ===== 180371260 FUN_180371260 ===== */

undefined4 * FUN_180371260(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  undefined4 *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined4 *puVar15;
  ulonglong uVar16;
  undefined4 *puVar17;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  lVar12 = *param_1;
  uVar16 = 0x2aaaaaaaaaaaaaa;
  lVar9 = (param_1[1] - lVar12 >> 5) * -0x5555555555555555;
  if (lVar9 == 0x2aaaaaaaaaaaaaa) {
                    /* WARNING: Subroutine does not return */
    FUN_1800118d0();
  }
  uVar1 = lVar9 + 1;
  uVar11 = (param_1[2] - lVar12 >> 5) * -0x5555555555555555;
  if (uVar11 <= 0x2aaaaaaaaaaaaaa - (uVar11 >> 1)) {
    uVar11 = (uVar11 >> 1) + uVar11;
    uVar16 = uVar1;
    if (uVar1 <= uVar11) {
      uVar16 = uVar11;
    }
    if (0x2aaaaaaaaaaaaaa < uVar16) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  puVar10 = (undefined4 *)FUN_18000fb70(uVar16 * 0x60);
  puVar17 = puVar10 + ((param_2 - lVar12) / 0x60) * 0x18;
  *puVar17 = *param_3;
  *(undefined1 *)(puVar17 + 1) = *(undefined1 *)(param_3 + 1);
  *(undefined8 *)(puVar17 + 2) = *(undefined8 *)(param_3 + 2);
  *(undefined8 *)(puVar17 + 4) = 0;
  *(undefined8 *)(puVar17 + 6) = 0;
  *(undefined8 *)(puVar17 + 8) = 0;
  *(undefined8 *)(puVar17 + 10) = 0;
  uVar6 = param_3[5];
  uVar7 = param_3[6];
  uVar8 = param_3[7];
  puVar17[4] = param_3[4];
  puVar17[5] = uVar6;
  puVar17[6] = uVar7;
  puVar17[7] = uVar8;
  uVar6 = param_3[9];
  uVar7 = param_3[10];
  uVar8 = param_3[0xb];
  puVar17[8] = param_3[8];
  puVar17[9] = uVar6;
  puVar17[10] = uVar7;
  puVar17[0xb] = uVar8;
  *(undefined8 *)(param_3 + 8) = 0;
  *(undefined1 *)(param_3 + 4) = 0;
  *(undefined8 *)(param_3 + 10) = 0xf;
  uVar2 = *(undefined8 *)(param_3 + 0x10);
  uVar3 = *(undefined8 *)(param_3 + 0xe);
  uVar4 = *(undefined8 *)(param_3 + 0xc);
  *(undefined8 *)(param_3 + 0x10) = 0;
  *(undefined8 *)(param_3 + 0xe) = 0;
  *(undefined8 *)(param_3 + 0xc) = 0;
  *(undefined8 *)(puVar17 + 0xc) = uVar4;
  *(undefined8 *)(puVar17 + 0xe) = uVar3;
  *(undefined8 *)(puVar17 + 0x10) = uVar2;
  uVar2 = *(undefined8 *)(param_3 + 0x16);
  uVar3 = *(undefined8 *)(param_3 + 0x14);
  uVar4 = *(undefined8 *)(param_3 + 0x12);
  *(undefined8 *)(param_3 + 0x16) = 0;
  *(undefined8 *)(param_3 + 0x14) = 0;
  *(undefined8 *)(param_3 + 0x12) = 0;
  *(undefined8 *)(puVar17 + 0x12) = uVar4;
  *(undefined8 *)(puVar17 + 0x14) = uVar3;
  *(undefined8 *)(puVar17 + 0x16) = uVar2;
  lVar12 = param_1[1];
  lVar9 = *param_1;
  puVar15 = puVar10;
  if (param_2 != lVar12) {
    FUN_1803715c0(*param_1,param_2,puVar10);
    lVar12 = param_1[1];
    puVar15 = puVar17 + 0x18;
    lVar9 = param_2;
  }
  puVar13 = auStack_48;
  puVar14 = auStack_48;
  FUN_1803715c0(lVar9,lVar12,puVar15);
  lVar12 = *param_1;
  if (lVar12 == 0) goto LAB_18037145d;
  lVar9 = param_1[1];
  for (; lVar12 != lVar9; lVar12 = lVar12 + 0x60) {
    FUN_1800fc680(lVar12);
  }
  lVar12 = *param_1;
  lVar9 = lVar12;
  if ((ulonglong)((param_1[2] - lVar12 >> 5) << 5) < 0x1000) {
LAB_180371452:
    puVar14 = puVar13;
  }
  else {
    lVar9 = *(longlong *)(lVar12 + -8);
    if (0x1f < (lVar12 - lVar9) - 8U) {
      lVar9 = 5;
      pcVar5 = (code *)swi(0x29);
      (*pcVar5)(5);
      puVar13 = auStack_40;
      goto LAB_180371452;
    }
  }
  *(undefined8 *)(puVar14 + -8) = 0x18037145d;
  thunk_FUN_1803d64e0(lVar9);
LAB_18037145d:
  *param_1 = (longlong)puVar10;
  param_1[1] = (longlong)(puVar10 + uVar1 * 0x18);
  param_1[2] = (longlong)(puVar10 + uVar16 * 0x18);
  return puVar17;
}



/* ===== 1803714b0 FUN_1803714b0 ===== */

undefined8 * FUN_1803714b0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  for (; param_1 != param_2; param_1 = param_1 + 0x10) {
    *param_3 = 0;
    param_3[1] = 0;
    param_3[2] = 0;
    param_3[3] = 0;
    uVar1 = param_1[1];
    *param_3 = *param_1;
    param_3[1] = uVar1;
    uVar1 = param_1[3];
    param_3[2] = param_1[2];
    param_3[3] = uVar1;
    *(undefined1 *)param_1 = 0;
    param_1[2] = 0;
    param_1[3] = 0xf;
    *(undefined4 *)(param_3 + 4) = *(undefined4 *)(param_1 + 4);
    *(undefined1 *)((longlong)param_3 + 0x24) = *(undefined1 *)((longlong)param_1 + 0x24);
    param_3[5] = param_1[5];
    param_3[6] = 0;
    param_3[7] = 0;
    param_3[8] = 0;
    param_3[9] = 0;
    uVar1 = param_1[7];
    param_3[6] = param_1[6];
    param_3[7] = uVar1;
    uVar1 = param_1[9];
    param_3[8] = param_1[8];
    param_3[9] = uVar1;
    *(undefined1 *)(param_1 + 6) = 0;
    param_1[8] = 0;
    param_1[9] = 0xf;
    uVar1 = param_1[0xc];
    uVar2 = param_1[0xb];
    uVar3 = param_1[10];
    param_1[0xc] = 0;
    param_1[0xb] = 0;
    param_1[10] = 0;
    param_3[10] = uVar3;
    param_3[0xb] = uVar2;
    param_3[0xc] = uVar1;
    uVar1 = param_1[0xf];
    uVar2 = param_1[0xe];
    uVar3 = param_1[0xd];
    param_1[0xf] = 0;
    param_1[0xe] = 0;
    param_1[0xd] = 0;
    param_3[0xd] = uVar3;
    param_3[0xe] = uVar2;
    param_3[0xf] = uVar1;
    param_3 = param_3 + 0x10;
  }
  return param_3;
}



/* ===== 1803715c0 FUN_1803715c0 ===== */

undefined4 * FUN_1803715c0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  for (; param_1 != param_2; param_1 = param_1 + 0x18) {
    *param_3 = *param_1;
    *(undefined1 *)(param_3 + 1) = *(undefined1 *)(param_1 + 1);
    *(undefined8 *)(param_3 + 2) = *(undefined8 *)(param_1 + 2);
    *(undefined8 *)(param_3 + 4) = 0;
    *(undefined8 *)(param_3 + 6) = 0;
    *(undefined8 *)(param_3 + 8) = 0;
    *(undefined8 *)(param_3 + 10) = 0;
    uVar1 = *(undefined8 *)(param_1 + 6);
    *(undefined8 *)(param_3 + 4) = *(undefined8 *)(param_1 + 4);
    *(undefined8 *)(param_3 + 6) = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 10);
    *(undefined8 *)(param_3 + 8) = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_3 + 10) = uVar1;
    *(undefined1 *)(param_1 + 4) = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 10) = 0xf;
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    uVar2 = *(undefined8 *)(param_1 + 0xe);
    uVar3 = *(undefined8 *)(param_1 + 0xc);
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0xe) = 0;
    *(undefined8 *)(param_1 + 0xc) = 0;
    *(undefined8 *)(param_3 + 0xc) = uVar3;
    *(undefined8 *)(param_3 + 0xe) = uVar2;
    *(undefined8 *)(param_3 + 0x10) = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x16);
    uVar2 = *(undefined8 *)(param_1 + 0x14);
    uVar3 = *(undefined8 *)(param_1 + 0x12);
    *(undefined8 *)(param_1 + 0x16) = 0;
    *(undefined8 *)(param_1 + 0x14) = 0;
    *(undefined8 *)(param_1 + 0x12) = 0;
    *(undefined8 *)(param_3 + 0x12) = uVar3;
    *(undefined8 *)(param_3 + 0x14) = uVar2;
    *(undefined8 *)(param_3 + 0x16) = uVar1;
    param_3 = param_3 + 0x18;
  }
  return param_3;
}



/* ===== 180371690 thunk_FUN_1804eb8c0 ===== */

void thunk_FUN_1804eb8c0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 8);
  if (lVar3 != 0) {
    LOCK();
    piVar1 = (int *)(lVar3 + 8);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (*(code *)PTR__guard_dispatch_icall_18056b850)(lVar3);
      LOCK();
      piVar1 = (int *)(lVar3 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (*(code *)PTR__guard_dispatch_icall_18056b850)(lVar3);
      }
    }
  }
  return;
}



/* ===== 1803716a0 FUN_1803716a0 ===== */

undefined8 * FUN_1803716a0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  FUN_1804ec080();
  return param_1;
}



/* ===== 1803716c0 FUN_1803716c0 ===== */

undefined8 * FUN_1803716c0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  FUN_1804ec0b0();
  FUN_1804ec0c0(param_1);
  return param_1;
}



/* ===== 1803716f0 FUN_1803716f0 ===== */

void FUN_1803716f0(void)

{
  code *pcVar1;
  
  FUN_1804ec150();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ===== 180371700 FUN_180371700 ===== */

undefined8 * FUN_180371700(undefined8 *param_1,undefined8 param_2)

{
  undefined8 local_18;
  undefined1 local_10;
  
  local_10 = 1;
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  local_18 = param_2;
  FUN_1804ef040(&local_18);
  *param_1 = std::runtime_error::vftable;
  return param_1;
}



/* ===== 180371750 FUN_180371750 ===== */

undefined8 * FUN_180371750(undefined8 *param_1)

{
  char *local_18;
  undefined1 local_10;
  
  local_10 = 1;
  *param_1 = std::exception::vftable;
  local_18 = "This function cannot be called on a default constructed task";
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_1804ef040(&local_18);
  *param_1 = Concurrency::invalid_operation::vftable;
  return param_1;
}



/* ===== 1803717a0 FUN_1803717a0 ===== */

void FUN_1803717a0(longlong param_1)

{
  (**(code **)(param_1 + 0x18))(*(undefined8 *)(param_1 + 0x20));
  FUN_1804ec3b0(param_1);
  thunk_FUN_1803d64e0(param_1,0x28);
  return;
}



/* ===== 1803717e0 FUN_1803717e0 ===== */

void FUN_1803717e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined1 local_28 [32];
  
  puVar2 = (undefined8 *)FUN_1804ecaa0(0x28);
  *puVar2 = 0;
  puVar2[1] = FUN_1803717a0;
  puVar2[2] = puVar2;
  puVar2[3] = param_2;
  puVar2[4] = param_3;
  iVar1 = FUN_1804ec3e0(puVar2);
  if (iVar1 != 0) {
    FUN_180371870(puVar2);
    FUN_180371700(local_28,"Fail to schedule the chore!");
                    /* WARNING: Subroutine does not return */
    FUN_1804ef5f0(local_28,&DAT_180915fd8);
  }
  return;
}



/* ===== 180371870 FUN_180371870 ===== */

undefined8 FUN_180371870(undefined8 param_1)

{
  FUN_1804ec3b0();
  thunk_FUN_1803d64e0(param_1,0x28);
  return param_1;
}



/* ===== 1803718a0 FUN_1803718a0 ===== */

undefined * FUN_1803718a0(void)

{
  code *pcVar1;
  BOOL BVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  BOOL local_res8 [8];
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [32];
  
  BVar2 = InitOnceBeginInitialize((LPINIT_ONCE)&DAT_1811162d0,0,local_res8,(LPVOID *)0x0);
  puVar4 = auStack_28;
  if (BVar2 == 0) {
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar4 = auStack_20;
  }
  if (*(int *)(puVar4 + 0x30) != 0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 8)
        < DAT_181116450) {
      *(undefined8 *)(puVar4 + -8) = 0x1803718fc;
      FUN_1804ed1b0(&DAT_181116450);
      if (DAT_181116450 == -1) {
        *(undefined8 *)(puVar4 + -8) = 0x180371911;
        FUN_1804ece40(FUN_180569440);
        *(undefined8 *)(puVar4 + -8) = 0x18037191d;
        _Init_thread_footer(&DAT_181116450);
      }
    }
    DAT_181116458 = &DAT_1811162b0;
    *(undefined8 *)(puVar4 + -8) = 0x18037193d;
    BVar2 = InitOnceComplete((LPINIT_ONCE)&DAT_1811162d0,0,(LPVOID)0x0);
    if (BVar2 == 0) {
      *(undefined8 *)(puVar4 + -8) = 0x180371952;
      FUN_1804eb730();
      pcVar1 = (code *)swi(3);
      puVar3 = (undefined *)(*pcVar1)();
      return puVar3;
    }
  }
  return DAT_181116458;
}



/* ===== 180371960 FUN_180371960 ===== */

void FUN_180371960(undefined8 *param_1)

{
  if (param_1 == (undefined8 *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00018037196d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)(param_1,1);
  return;
}



/* ===== 180371980 FUN_180371980 ===== */

undefined8 * FUN_180371980(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = Concurrency::details::_RefCounter::vftable;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1803d64e0(param_1,0x10);
  }
  return param_1;
}



/* ===== 1803719b0 FUN_1803719b0 ===== */

void FUN_1803719b0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  DWORD DVar3;
  int iVar4;
  DWORD DVar5;
  DWORD DVar6;
  undefined8 *puVar7;
  bool bVar8;
  
  LOCK();
  *(undefined4 *)(param_2 + 2) = 0;
  UNLOCK();
  LOCK();
  *(int *)(param_2 + 1) = (int)param_2[1] + 1;
  UNLOCK();
  param_2[0x17] = param_1;
  if (*(int *)(param_1 + 0x10) == 0) {
    lVar1 = param_1 + 0x18;
    iVar4 = FUN_1804e4d70(lVar1);
    if (iVar4 != 0) goto LAB_180371b04;
    if (*(int *)(param_1 + 100) == 0x7fffffff) {
      *(undefined4 *)(param_1 + 100) = 0x7ffffffe;
      goto LAB_180371af9;
    }
    if (*(int *)(param_1 + 0x10) == 0) {
      puVar7 = (undefined8 *)FUN_1804ecaa0(0x10);
      *puVar7 = param_2;
      puVar7[1] = 0;
      if (*(longlong *)(param_1 + 0x68) == 0) {
        *(undefined8 **)(param_1 + 0x68) = puVar7;
      }
      else {
        *(undefined8 **)(*(longlong *)(param_1 + 0x70) + 8) = puVar7;
      }
      *(undefined8 **)(param_1 + 0x70) = puVar7;
      FUN_1804e4e90(lVar1);
      return;
    }
    FUN_1804e4e90(lVar1);
  }
  DVar5 = GetCurrentThreadId();
  LOCK();
  bVar8 = *(DWORD *)(param_2 + 2) == 0;
  if (bVar8) {
    *(DWORD *)(param_2 + 2) = DVar5;
  }
  UNLOCK();
  if (bVar8) {
    (**(code **)(*param_2 + 0x10))(param_2);
    LOCK();
    DVar3 = *(DWORD *)(param_2 + 2);
    if (DVar5 == DVar3) {
      *(DWORD *)(param_2 + 2) = 3;
      DVar6 = DVar5;
    }
    else {
      DVar6 = DVar3;
    }
    UNLOCK();
    if (DVar5 != DVar3) {
      DVar5 = DVar6;
    }
    if (DVar5 == 2) {
      iVar4 = FUN_1804e4d70(param_2 + 0xc);
      if (iVar4 != 0) {
LAB_180371b04:
                    /* WARNING: Subroutine does not return */
        FUN_1804e4a90(5);
      }
      if (*(int *)((longlong)param_2 + 0xac) == 0x7fffffff) {
        *(undefined4 *)((longlong)param_2 + 0xac) = 0x7ffffffe;
LAB_180371af9:
                    /* WARNING: Subroutine does not return */
        FUN_1804e4a90(6);
      }
      *(undefined1 *)(param_2 + 0x16) = 1;
      FUN_1804e4e90(param_2 + 0xc);
      FUN_1804eb6a0(param_2 + 3);
    }
  }
  LOCK();
  plVar2 = param_2 + 1;
  lVar1 = *plVar2;
  *(int *)plVar2 = (int)*plVar2 + -1;
  UNLOCK();
  if ((int)lVar1 == 1) {
    (**(code **)(*param_2 + 8))(param_2);
  }
  return;
}



/* ===== 180371b10 FUN_180371b10 ===== */

void FUN_180371b10(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  DWORD DVar5;
  DWORD DVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  
  plVar8 = (longlong *)(param_1 + 0x18);
  iVar4 = FUN_1804e4d70(plVar8);
  if (iVar4 != 0) {
LAB_180371c74:
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (*(int *)(param_1 + 100) == 0x7fffffff) {
    *(undefined4 *)(param_1 + 100) = 0x7ffffffe;
LAB_180371c69:
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  if (*(longlong **)(param_1 + 0x68) == (longlong *)0x0) {
    FUN_1804e4e90(plVar8);
    DVar5 = 0;
    LOCK();
    DVar6 = *(DWORD *)(param_2 + 2);
    if (DVar6 == 0) {
      *(DWORD *)(param_2 + 2) = 1;
    }
    else {
      DVar5 = DVar6;
    }
    UNLOCK();
    if (DVar6 == 0) {
      return;
    }
    if (DVar5 == 0) {
      return;
    }
    if (DVar5 == 1) {
      return;
    }
    if (DVar5 == 2) {
      return;
    }
    if (DVar5 == 3) {
      return;
    }
    DVar6 = GetCurrentThreadId();
    if (DVar5 == DVar6) {
      return;
    }
    LOCK();
    lVar3 = param_2[2];
    *(int *)(param_2 + 2) = 2;
    UNLOCK();
    if ((int)lVar3 == 3) {
      return;
    }
    iVar4 = FUN_1804e4d70(param_2 + 0xc);
    if (iVar4 != 0) goto LAB_180371c74;
    if (*(int *)((longlong)param_2 + 0xac) == 0x7fffffff) {
      *(undefined4 *)((longlong)param_2 + 0xac) = 0x7ffffffe;
      goto LAB_180371c69;
    }
    cVar1 = (char)param_2[0x16];
    while (cVar1 == '\0') {
      FUN_1804eb6e0(param_2 + 3,param_2 + 0xc);
      cVar1 = (char)param_2[0x16];
    }
    plVar8 = param_2 + 0xc;
  }
  else {
    plVar2 = *(longlong **)(param_1 + 0x68);
    plVar9 = (longlong *)0x0;
    do {
      plVar7 = plVar2;
      plVar2 = (longlong *)plVar7[1];
      if ((longlong *)*plVar7 == param_2) {
        if (plVar9 == (longlong *)0x0) {
          *(longlong **)(param_1 + 0x68) = plVar2;
        }
        else {
          plVar9[1] = (longlong)plVar2;
        }
        if (plVar7[1] == 0) {
          *(longlong **)(param_1 + 0x70) = plVar9;
        }
        thunk_FUN_1803d64e0(plVar7,0x10);
        break;
      }
      plVar9 = plVar7;
    } while (plVar2 != (longlong *)0x0);
    LOCK();
    *(undefined4 *)(param_2 + 2) = 2;
    UNLOCK();
    LOCK();
    plVar2 = param_2 + 1;
    lVar3 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)(*param_2 + 8))(param_2);
    }
  }
  FUN_1804e4e90(plVar8);
  return;
}



/* ===== 180371c80 FUN_180371c80 ===== */

void FUN_180371c80(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  
  plVar2 = (longlong *)*param_1;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)(*plVar2 + 8))();
    }
  }
  *param_1 = 0;
  return;
}



/* ===== 180371cc0 FUN_180371cc0 ===== */

void FUN_180371cc0(longlong *param_1)

{
  (**(code **)(*param_1 + 8))();
                    /* WARNING: Could not recover jumptable at 0x000180371ce5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)(param_1,1);
  return;
}



/* ===== 180371cf0 FUN_180371cf0 ===== */

undefined8 * FUN_180371cf0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = Concurrency::details::_TaskProcHandle::vftable;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1803d64e0(param_1,8);
  }
  return param_1;
}



/* ===== 180371d20 FUN_180371d20 ===== */

void FUN_180371d20(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1804e4d70(param_1 + 0x48);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (*(int *)(param_1 + 0x94) == 0x7fffffff) {
    *(undefined4 *)(param_1 + 0x94) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  iVar1 = *(int *)(param_1 + 0xb0);
  while (iVar1 < 2) {
    FUN_1804eb6e0(param_1,param_1 + 0x48);
    iVar1 = *(int *)(param_1 + 0xb0);
  }
  FUN_1804e4e90(param_1 + 0x48);
  return;
}



/* ===== 180371da0 FUN_180371da0 ===== */

void FUN_180371da0(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1804e4d70(param_1 + 0x48);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (*(int *)(param_1 + 0x94) == 0x7fffffff) {
    *(undefined4 *)(param_1 + 0x94) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  if (*(int *)(param_1 + 0xb0) < 2) {
    *(undefined4 *)(param_1 + 0xb0) = 2;
  }
  FUN_1804eb6a0(param_1);
  FUN_1804e4e90(param_1 + 0x48);
  return;
}



/* ===== 180371e20 FUN_180371e20 ===== */

void FUN_180371e20(void)

{
  undefined1 local_28 [40];
  
  FUN_180371750(local_28);
                    /* WARNING: Subroutine does not return */
  FUN_1804ef5f0(local_28,&DAT_180916098);
}



/* ===== 180371e40 FUN_180371e40 ===== */

undefined8 * FUN_180371e40(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_1804ef040(param_2 + 8);
  *param_1 = Concurrency::invalid_operation::vftable;
  return param_1;
}



/* ===== 180371e80 FUN_180371e80 ===== */

void FUN_180371e80(longlong param_1)

{
  FUN_1800132b0(param_1 + 8);
  return;
}



/* ===== 180371e90 FUN_180371e90 ===== */

void FUN_180371e90(longlong *param_1)

{
  longlong *plVar1;
  
  if ((longlong *)param_1[7] == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4cb0();
  }
  (**(code **)(*(longlong *)param_1[7] + 0x10))();
  plVar1 = (longlong *)param_1[7];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_1);
    param_1[7] = 0;
  }
  thunk_FUN_1803d64e0(param_1,0x40);
  return;
}



/* ===== 180371ef0 FUN_180371ef0 ===== */

void FUN_180371ef0(longlong *param_1)

{
  longlong *plVar1;
  
  param_1 = (longlong *)*param_1;
  if (param_1 == (longlong *)0x0) {
    return;
  }
  plVar1 = (longlong *)param_1[7];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_1);
    param_1[7] = 0;
  }
  thunk_FUN_1803d64e0(param_1,0x40);
  return;
}



/* ===== 180371f40 FUN_180371f40 ===== */

void FUN_180371f40(void)

{
  _guard_check_icall();
  return;
}



/* ===== 180371f50 FUN_180371f50 ===== */

void FUN_180371f50(int *param_1)

{
  code *pcVar1;
  
  if (*param_1 == 0) {
    _guard_check_icall();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_1800132b0(param_1 + 8);
  FUN_1804eb8c0(param_1 + 2);
  return;
}



/* ===== 180371f90 FUN_180371f90 ===== */

void FUN_180371f90(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined1 local_18 [24];
  
  iVar2 = FUN_18037d150();
  if (iVar2 == 0) {
    FUN_18037bda0();
  }
  uVar1 = FUN_1803716a0(local_18,param_1 + 8);
                    /* WARNING: Subroutine does not return */
  FUN_1803716f0(uVar1);
}



/* ===== 180371fc0 FUN_180371fc0 ===== */

undefined8 * FUN_180371fc0(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  *param_1 = *param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if (param_2[2] - param_2[1] != 0) {
    uVar3 = (longlong)(param_2[2] - param_2[1]) >> 3;
    if (0x1fffffffffffffff < uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_1800118d0();
    }
    lVar1 = uVar3 * 8;
    lVar2 = FUN_18000fb70(lVar1);
    param_1[1] = lVar2;
    param_1[2] = lVar2;
    param_1[3] = lVar2 + lVar1;
    lVar1 = param_1[1];
    uVar3 = param_2[2] - param_2[1];
    FUN_180540530(lVar1,param_2[1],uVar3);
    param_1[2] = (uVar3 & 0xfffffffffffffff8) + lVar1;
  }
  return param_1;
}



/* ===== 180372070 FUN_180372070 ===== */

void FUN_180372070(undefined8 *param_1)

{
  _guard_check_icall(*param_1);
  return;
}



/* ===== 180372090 FUN_180372090 ===== */

undefined8 * FUN_180372090(undefined8 *param_1,longlong param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = Concurrency::details::_Task_impl_base::vftable;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined2 *)((longlong)param_1 + 0xc) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0xffffffff;
  *(undefined4 *)(param_1 + 4) = 2;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  param_1[0xe] = 0;
  param_1[0x10] = 0;
  if (param_3[1] != 0) {
    LOCK();
    piVar1 = (int *)(param_3[1] + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  plVar4 = (longlong *)param_3[1];
  uVar5 = *param_3;
  uVar6 = param_3[2];
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1a) = 2;
  *(undefined4 *)((longlong)param_1 + 0x11c) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  if (plVar4 == (longlong *)0x0) {
    param_1[0x24] = uVar5;
    param_1[0x25] = 0;
    param_1[0x26] = uVar6;
    *(undefined4 *)(param_1 + 0x27) = 0;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    param_1[0x24] = uVar5;
    param_1[0x25] = plVar4;
    param_1[0x26] = uVar6;
    *(undefined4 *)(param_1 + 0x27) = 0;
    LOCK();
    plVar2 = plVar4 + 1;
    lVar7 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
    }
  }
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x28] = 0;
  param_1[0x2c] = param_1;
  *(undefined2 *)(param_1 + 0x2d) = 0;
  param_1[0xf] = param_2;
  if (param_2 != 2) {
    LOCK();
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
    UNLOCK();
  }
  plVar4 = (longlong *)param_3[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    lVar7 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
    }
  }
  return param_1;
}



/* ===== 180372270 FUN_180372270 ===== */

void FUN_180372270(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = Concurrency::details::_Task_impl_base::vftable;
  plVar4 = (longlong *)param_1[0xf];
  if (plVar4 != (longlong *)0x2) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)(*plVar4 + 8))();
    }
  }
  FUN_1800132b0(param_1 + 0x29);
  plVar4 = (longlong *)param_1[0x25];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
    }
  }
  plVar4 = (longlong *)param_1[3];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
    }
  }
  return;
}



/* ===== 180372330 FUN_180372330 ===== */

ulonglong FUN_180372330(longlong param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  
  if ((*(char *)(param_1 + 0xc) != '\0') || (FUN_180371d20(), *(char *)(param_1 + 0xd) != '\0')) {
    FUN_180371d20(param_1 + 0x88);
  }
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return (ulonglong)((*(int *)(param_1 + 8) == 4) + 1);
  }
  uVar2 = FUN_1800950b0();
  FUN_180371f90(uVar2);
  pcVar1 = (code *)swi(3);
  uVar3 = (*pcVar1)();
  return uVar3;
}



/* ===== 1803723a0 FUN_1803723a0 ===== */

undefined1 FUN_1803723a0(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined1 uVar5;
  longlong *plVar6;
  longlong *local_58;
  longlong *local_50;
  undefined1 local_48 [8];
  undefined1 local_40 [24];
  
  lVar4 = *param_1;
  FUN_180371fc0(local_48,param_1 + 0x28);
  plVar6 = (longlong *)FUN_1804ecaa0(0x48);
  *plVar6 = 0;
  plVar6[1] = 0;
  *(undefined4 *)(plVar6 + 1) = 1;
  *(undefined4 *)((longlong)plVar6 + 0xc) = 1;
  *plVar6 = (longlong)std::_Ref_count_obj2<Concurrency::details::_ExceptionHolder>::vftable;
  *(undefined4 *)(plVar6 + 2) = 0;
  plVar6[3] = 0;
  plVar6[4] = 0;
  FUN_1804ec080(plVar6 + 3,param_2);
  FUN_180371fc0(plVar6 + 5,local_48);
  local_58 = plVar6 + 2;
  local_50 = plVar6;
  uVar5 = (**(code **)(lVar4 + 8))(param_1,1,1,0,&local_58);
  plVar6 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_50 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6);
      }
    }
  }
  FUN_1800132b0(local_40);
  return uVar5;
}



/* ===== 1803724c0 FUN_1803724c0 ===== */

bool FUN_1803724c0(longlong param_1)

{
  return *(longlong *)(param_1 + 0x10) != 0;
}



/* ===== 1803724d0 FUN_1803724d0 ===== */

void FUN_1803724d0(longlong param_1,longlong *param_2,int param_3)

{
  longlong *local_res20;
  
  if (param_3 == -1) {
    local_res20 = param_2;
    (**(code **)(*param_2 + 8))(param_2);
    (**(code **)*param_2)(param_2,1);
  }
  else if (*(undefined8 **)(param_1 + 0x130) == (undefined8 *)0x0) {
    FUN_1803717e0(&local_res20,FUN_180371cc0,param_2);
  }
  else {
    (**(code **)**(undefined8 **)(param_1 + 0x130))();
  }
  return;
}



/* ===== 180372540 FUN_180372540 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180372540(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined1 auStack_98 [32];
  longlong *local_78;
  longlong *local_70;
  longlong *local_68;
  undefined **local_58;
  longlong local_50;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_98;
  _guard_check_icall(param_1 + 0x160,1);
  iVar6 = *(int *)(param_2 + 0x24);
  if (*(longlong *)(param_2 + 0x10) == 0) {
    FUN_1803724d0(param_1,param_2,iVar6);
  }
  else {
    if (iVar6 != -1) {
      iVar6 = 0x10;
      *(undefined4 *)(param_2 + 0x24) = 0x10;
    }
    local_58 = std::
               _Func_impl_no_alloc<`public:_void___cdecl_Concurrency::details::_Task_impl_base::_ScheduleContinuationTask(Concurrency::details::_ContinuationTaskHandleBase*___ptr64)___ptr64'::`5'::<lambda_1>,void>
               ::vftable;
    local_20 = &local_58;
    local_50 = param_2;
    plVar3 = (longlong *)FUN_1804ecaa0(0x40);
    plVar3[7] = 0;
    plVar4 = (longlong *)0x0;
    local_78 = plVar3;
    local_70 = plVar3;
    if (local_20 != (undefined ***)0x0) {
      plVar4 = (longlong *)(*(code *)**local_20)(local_20,plVar3);
      plVar3[7] = (longlong)plVar4;
    }
    if (iVar6 == -1) {
      if (plVar4 == (longlong *)0x0) {
        local_78 = plVar3;
                    /* WARNING: Subroutine does not return */
        FUN_1804e4cb0();
      }
      local_78 = plVar3;
      (**(code **)(*plVar4 + 0x10))();
      plVar4 = (longlong *)plVar3[7];
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x20))(plVar4,plVar4 != plVar3);
        plVar3[7] = 0;
      }
      thunk_FUN_1803d64e0(plVar3,0x40);
    }
    else {
      puVar5 = (undefined8 *)FUN_1803718a0();
      if (puVar5[1] != 0) {
        LOCK();
        piVar1 = (int *)(puVar5[1] + 8);
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      local_70 = (longlong *)*puVar5;
      plVar4 = (longlong *)puVar5[1];
      local_68 = plVar4;
      if (local_70 == (longlong *)0x0) {
        FUN_1803717e0(&local_78,FUN_180371e90,plVar3);
      }
      else {
        (**(code **)*local_70)();
      }
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar4 + 1;
        lVar2 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar2 == 1) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar1 = (int *)((longlong)plVar4 + 0xc);
          iVar6 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*plVar4 + 8))(plVar4);
          }
        }
      }
    }
    if (local_20 != (undefined ***)0x0) {
      (*(code *)(*local_20)[4])
                (local_20,CONCAT71((int7)((ulonglong)&local_58 >> 8),local_20 != &local_58));
    }
  }
  return;
}



/* ===== 180372700 FUN_180372700 ===== */

void FUN_180372700(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined1 *puVar4;
  longlong lVar5;
  undefined1 *puVar6;
  undefined1 *local_res10;
  undefined8 local_b8;
  longlong *local_b0;
  longlong local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined **local_90;
  longlong local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined ***local_58;
  undefined1 local_50 [56];
  undefined8 local_18;
  
  (**(code **)(*(longlong *)*param_1 + 0x10))((longlong *)*param_1,&local_b8);
  local_res10 = (undefined1 *)0x0;
  _guard_check_icall(&local_res10);
  puVar6 = local_res10;
  puVar4 = *(undefined1 **)(*param_1 + 0x10);
  _guard_check_icall(&local_res10);
  if (puVar6 == puVar4) {
    FUN_1803724d0(local_b8,*param_1,0xffffffff);
  }
  else {
    lVar5 = *param_1;
    if (local_b0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_b0 + 1) = (int)local_b0[1] + 1;
      UNLOCK();
    }
    local_90 = std::
               _Func_impl_no_alloc<`public:___cdecl_`public:_void___cdecl_Concurrency::details::_Task_impl_base::_ScheduleContinuationTask(Concurrency::details::_ContinuationTaskHandleBase*___ptr64)___ptr64'::`5'::<lambda_1>::operator()(void)const___ptr64'::`8'::<lambda_1>,void>
               ::vftable;
    local_80 = local_b8;
    local_78 = local_b0;
    local_a0 = 0;
    uStack_98 = 0;
    local_58 = &local_90;
    local_res10 = local_50;
    local_18 = 0;
    local_a8 = lVar5;
    local_88 = lVar5;
    local_18 = FUN_18037fcf0(&local_90,local_50);
    FUN_1804ec320(lVar5 + 0x10,local_50,0);
    if (local_58 != (undefined ***)0x0) {
      (*(code *)(*local_58)[4])
                (local_58,CONCAT71((int7)((ulonglong)&local_90 >> 8),local_58 != &local_90));
    }
  }
  if (local_b0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_b0 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_b0)(local_b0);
      LOCK();
      piVar2 = (int *)((longlong)local_b0 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_b0 + 8))(local_b0);
      }
    }
  }
  return;
}



